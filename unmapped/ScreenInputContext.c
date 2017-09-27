

int __fastcall ScreenInputContext::clear(ScreenInputContext *this)
{
  ScreenInputContext *v1; // r9@1
  int result; // r0@1
  __int64 v3; // kr00_8@1
  int v4; // r5@2
  unsigned int *v5; // r2@4
  unsigned int v6; // r1@6

  v1 = this;
  result = *(_DWORD *)this;
  *((_DWORD *)v1 + 1) = result;
  v3 = *(_QWORD *)((char *)v1 + 12);
  if ( HIDWORD(v3) != (_DWORD)v3 )
  {
    v4 = v3;
    do
    {
      result = *(_DWORD *)(v4 + 8);
      if ( result )
      {
        v5 = (unsigned int *)(result + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        }
        else
          v6 = (*v5)--;
        if ( v6 == 1 )
          result = (*(int (**)(void))(*(_DWORD *)result + 12))();
      }
      v4 += 12;
    }
    while ( v4 != HIDWORD(v3) );
  }
  *((_DWORD *)v1 + 4) = v3;
  return result;
}


int __fastcall ScreenInputContext::ScreenInputContext(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  return result;
}


char *__fastcall ScreenInputContext::getButtonUpRightOfFirstRefusalRequests(ScreenInputContext *this)
{
  return (char *)this + 12;
}


int __fastcall ScreenInputContext::requestButtonUpRightOfFirstRefusal(int result, __int16 a2, int a3)
{
  int v3; // r6@1
  __int16 v4; // r7@1
  int v5; // r4@1
  int v6; // r8@1
  unsigned int *v7; // r5@2
  int v8; // r1@5
  unsigned int v9; // r2@6
  UIControl *v10; // r0@7
  bool v11; // zf@7
  int v12; // r0@10
  unsigned int *v13; // r0@11
  unsigned int v14; // r1@13
  __int64 v15; // r0@16
  int v16; // r1@17
  unsigned int *v17; // r1@18
  unsigned int v18; // r0@20
  unsigned int *v19; // r2@26
  unsigned int v20; // r1@28
  unsigned int *v21; // r5@40
  __int16 v22; // [sp+4h] [bp-24h]@10
  UIControl *v23; // [sp+8h] [bp-20h]@10
  int v24; // [sp+Ch] [bp-1Ch]@10

  v3 = a3;
  v4 = a2;
  v5 = *(_DWORD *)(a3 + 4);
  v6 = result;
  if ( v5 )
  {
    result = *(_DWORD *)(v5 + 4);
    v7 = (unsigned int *)(v5 + 4);
    while ( result )
    {
      __dmb();
      v8 = __ldrex(v7);
      if ( v8 == result )
      {
        v9 = __strex(result + 1, v7);
        result = v8;
        if ( !v9 )
        {
          __dmb();
          v10 = (UIControl *)*v7;
          v11 = *v7 == 0;
          if ( *v7 )
          {
            v10 = *(UIControl **)v3;
            v11 = *(_DWORD *)v3 == 0;
          }
          if ( v11 )
            goto LABEL_49;
          UIControl::getName(v10);
          v22 = v4;
          v23 = *(UIControl **)v3;
          v12 = *(_DWORD *)(v3 + 4);
          v24 = v12;
          if ( v12 )
            v13 = (unsigned int *)(v12 + 8);
            if ( &pthread_create )
            {
              __dmb();
              do
                v14 = __ldrex(v13);
              while ( __strex(v14 + 1, v13) );
            }
            else
              ++*v13;
          v15 = *(_QWORD *)(v6 + 16);
          if ( (_DWORD)v15 == HIDWORD(v15) )
            std::vector<ButtonUpRightOfFirstRefusalRequest,std::allocator<ButtonUpRightOfFirstRefusalRequest>>::_M_emplace_back_aux<ButtonUpRightOfFirstRefusalRequest>(
              (unsigned __int64 *)(v6 + 12),
              (int)&v22);
          else
            *(_WORD *)v15 = v22;
            *(_DWORD *)(v15 + 4) = v23;
            HIDWORD(v15) = v24;
            *(_DWORD *)(v15 + 8) = v24;
            if ( HIDWORD(v15) )
              v17 = (unsigned int *)(v16 + 8);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v18 = __ldrex(v17);
                while ( __strex(v18 + 1, v17) );
                LODWORD(v15) = *(_DWORD *)(v6 + 16);
              }
              else
                ++*v17;
            *(_DWORD *)(v6 + 16) = v15 + 12;
          result = v24;
          if ( v24 )
            v19 = (unsigned int *)(v24 + 8);
                v20 = __ldrex(v19);
              while ( __strex(v20 - 1, v19) );
              v20 = (*v19)--;
            if ( v20 == 1 )
              result = (*(int (**)(void))(*(_DWORD *)result + 12))();
          if ( v5 )
LABEL_49:
                result = __ldrex(v7);
              while ( __strex(result - 1, v7) );
              result = (*v7)--;
            if ( result == 1 )
              v21 = (unsigned int *)(v5 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
                  result = __ldrex(v21);
                while ( __strex(result - 1, v21) );
                result = (*v21)--;
              if ( result == 1 )
                result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
          return result;
        }
      }
      else
        __clrex();
    }
  }
  return result;
}


int __fastcall ScreenInputContext::enqueueEvent(__int64 this)
{
  __int64 v1; // kr00_8@1
  __int64 v2; // r2@3
  int v3; // r4@3
  int v4; // lr@3
  int v5; // r12@3
  int v6; // r4@3
  int v7; // lr@3

  v1 = *(_QWORD *)(this + 4);
  if ( (_DWORD)v1 == HIDWORD(v1) )
  {
    LODWORD(this) = j_j_j__ZNSt6vectorI11ScreenEventSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_(this);
  }
  else
    v2 = *(_QWORD *)HIDWORD(this);
    v3 = *(_DWORD *)(HIDWORD(this) + 8);
    v4 = *(_DWORD *)(HIDWORD(this) + 12);
    HIDWORD(this) += 16;
    *(_QWORD *)v1 = v2;
    *(_DWORD *)(v1 + 8) = v3;
    *(_DWORD *)(v1 + 12) = v4;
    v5 = v1 + 16;
    HIDWORD(v2) = *(_DWORD *)(HIDWORD(this) + 4);
    v6 = *(_DWORD *)(HIDWORD(this) + 8);
    v7 = *(_DWORD *)(HIDWORD(this) + 12);
    *(_DWORD *)v5 = *(_DWORD *)HIDWORD(this);
    *(_DWORD *)(v5 + 4) = HIDWORD(v2);
    *(_DWORD *)(v5 + 8) = v6;
    *(_DWORD *)(v5 + 12) = v7;
    *(_DWORD *)(this + 4) += 32;
  return this;
}
