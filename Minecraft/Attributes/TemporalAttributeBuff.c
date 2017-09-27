

signed int __fastcall TemporalAttributeBuff::isComplete(TemporalAttributeBuff *this)
{
  __int64 v1; // r1@1
  signed int result; // r0@1

  v1 = *((_QWORD *)this + 7);
  result = 0;
  if ( SHIDWORD(v1) >= (signed int)v1 )
    result = 1;
  return result;
}


void __fastcall TemporalAttributeBuff::~TemporalAttributeBuff(TemporalAttributeBuff *this)
{
  TemporalAttributeBuff *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  int v7; // r5@15
  unsigned int *v8; // r1@16
  unsigned int v9; // r0@18
  unsigned int *v10; // r6@22
  unsigned int v11; // r0@24

  v1 = this;
  *(_DWORD *)this = &off_26EC408;
  v2 = *((_DWORD *)this + 9);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  v7 = *((_DWORD *)v1 + 7);
  if ( v7 )
    v8 = (unsigned int *)(v7 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall TemporalAttributeBuff::setDurationAmplifier(int a1, unsigned __int64 *a2)
{
  int v2; // r4@1
  unsigned __int64 v3; // kr00_8@1
  unsigned int *v4; // r1@2
  unsigned int v5; // r2@4
  int v6; // r6@7
  unsigned int *v7; // r0@9
  unsigned int v8; // r1@11
  unsigned int *v9; // r1@15
  unsigned int v10; // r0@17
  unsigned int *v11; // r7@21
  unsigned int v12; // r0@23
  unsigned int *v13; // r1@30
  unsigned int v14; // r0@32
  unsigned int *v15; // r6@36
  unsigned int v16; // r0@38
  int result; // r0@43

  v2 = a1;
  v3 = *a2;
  if ( *a2 >> 32 )
  {
    v4 = (unsigned int *)(HIDWORD(v3) + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
  }
  *(_DWORD *)(a1 + 32) = v3;
  v6 = *(_DWORD *)(a1 + 36);
  if ( HIDWORD(v3) != v6 )
    if ( HIDWORD(v3) )
      v7 = (unsigned int *)(HIDWORD(v3) + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 + 1, v7) );
        v6 = *(_DWORD *)(v2 + 36);
      }
      else
        ++*v7;
    if ( v6 )
      v9 = (unsigned int *)(v6 + 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 == 1 )
        v11 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
        {
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
        }
        else
          v12 = (*v11)--;
        if ( v12 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
    *(_DWORD *)(v2 + 36) = HIDWORD(v3);
  if ( HIDWORD(v3) )
    v13 = (unsigned int *)(HIDWORD(v3) + 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      v15 = (unsigned int *)(HIDWORD(v3) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 8))(HIDWORD(v3));
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 12))(HIDWORD(v3));
  result = *(_DWORD *)(v2 + 32);
  if ( result )
    result = *(_DWORD *)(v2 + 64);
    *(_DWORD *)(v2 + 4) = result;
  return result;
}


void __fastcall TemporalAttributeBuff::~TemporalAttributeBuff(TemporalAttributeBuff *this)
{
  TemporalAttributeBuff::~TemporalAttributeBuff(this);
}


int __fastcall TemporalAttributeBuff::serializationSetLifeTime(int result, int a2)
{
  *(_DWORD *)(result + 60) = a2;
  return result;
}


int __fastcall TemporalAttributeBuff::tick(int result)
{
  ++*(_DWORD *)(result + 60);
  return result;
}


int __fastcall TemporalAttributeBuff::isInstantaneous(TemporalAttributeBuff *this)
{
  return 0;
}


int __fastcall TemporalAttributeBuff::TemporalAttributeBuff(int a1, int _R1, __int64 _R2, char a4, int **a5)
{
  int v9; // r4@1

  __asm { VMOV            S0, R2 }
  v9 = a1;
  __asm
  {
    VMOV            S2, R1
    VCVT.F32.S32    S0, S0
    VDIV.F32        S0, S2, S0
    VSTR            S0, [R4,#4]
  }
  *(_DWORD *)(a1 + 8) = HIDWORD(_R2);
  HIDWORD(_R2) = -1;
  *(_DWORD *)(a1 + 16) = -1;
  *(_DWORD *)(a1 + 20) = -1;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 40) = 1065353216;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 2;
  *(_DWORD *)a1 = &off_26EC440;
  *(_QWORD *)(a1 + 56) = _R2;
  *(_DWORD *)(a1 + 64) = _R1;
  *(_BYTE *)(a1 + 68) = a4;
  *(_DWORD *)(a1 + 48) = sub_21B417C(*a5, *(*a5 - 3), -955291385);
  return v9;
}


int __fastcall TemporalAttributeBuff::shouldBuff(TemporalAttributeBuff *this)
{
  TemporalAttributeBuff *v1; // r4@1
  int v2; // r5@1
  int v3; // r0@1
  int result; // r0@3
  __int64 v5; // kr00_8@4
  int v6; // r2@4

  v1 = this;
  v2 = *((_DWORD *)this + 8);
  v3 = (*(int (**)(void))(*(_DWORD *)this + 24))();
  if ( v2 )
  {
    if ( v3 )
    {
      result = 0;
    }
    else
      v5 = *((_QWORD *)v1 + 7);
      v6 = *((_DWORD *)v1 + 11);
      result = (*(int (**)(void))(**((_DWORD **)v1 + 8) + 12))();
  }
  else
    result = v3 ^ 1;
  return result;
}
