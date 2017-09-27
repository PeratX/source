

int __fastcall TickWorldComponent::removeArea(int result)
{
  int v1; // r5@1
  int v2; // r4@1
  unsigned int *v3; // r6@2
  int v4; // r1@5
  unsigned int v5; // r2@6
  unsigned int v6; // r0@7
  bool v7; // zf@7
  int v8; // r0@10
  unsigned int *v9; // r2@11
  unsigned int v10; // r1@13
  unsigned int *v11; // r5@24

  v1 = result;
  v2 = *(_DWORD *)(result + 20);
  if ( v2 )
  {
    result = *(_DWORD *)(v2 + 4);
    v3 = (unsigned int *)(v2 + 4);
    while ( result )
    {
      __dmb();
      v4 = __ldrex(v3);
      if ( v4 == result )
      {
        v5 = __strex(result + 1, v3);
        result = v4;
        if ( !v5 )
        {
          __dmb();
          v6 = *v3;
          v7 = *v3 == 0;
          if ( *v3 )
          {
            v6 = *(_DWORD *)(v1 + 16);
            v7 = v6 == 0;
          }
          if ( !v7 )
            (*(void (**)(void))(*(_DWORD *)v6 + 80))();
            *(_DWORD *)(v1 + 16) = 0;
            v8 = *(_DWORD *)(v1 + 20);
            *(_DWORD *)(v1 + 20) = 0;
            if ( v8 )
            {
              v9 = (unsigned int *)(v8 + 8);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v10 = __ldrex(v9);
                while ( __strex(v10 - 1, v9) );
              }
              else
                v10 = (*v9)--;
              if ( v10 == 1 )
                (*(void (**)(void))(*(_DWORD *)v8 + 12))();
            }
          if ( &pthread_create )
            __dmb();
            do
              result = __ldrex(v3);
            while ( __strex(result - 1, v3) );
          else
            result = (*v3)--;
          if ( result == 1 )
            v11 = (unsigned int *)(v2 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
            if ( &pthread_create )
              __dmb();
              do
                result = __ldrex(v11);
              while ( __strex(result - 1, v11) );
            else
              result = (*v11)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
          return result;
        }
      }
      else
        __clrex();
    }
  }
  return result;
}


int __fastcall TickWorldComponent::setTickingArea(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r1@1
  int v5; // r6@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  int v8; // r0@7
  unsigned int *v9; // r2@8
  unsigned int v10; // r1@10

  v2 = a2;
  v3 = a1;
  (*(void (**)(void))(**(_DWORD **)a2 + 68))();
  v4 = *(_DWORD *)v3;
  (*(void (**)(void))(**(_DWORD **)v2 + 72))();
  *(_DWORD *)(v3 + 16) = *(_DWORD *)v2;
  v5 = *(_DWORD *)(v2 + 4);
  if ( v5 )
  {
    v6 = (unsigned int *)(v5 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
    }
    else
      ++*v6;
  }
  v8 = *(_DWORD *)(v3 + 20);
  if ( v8 )
    v9 = (unsigned int *)(v8 + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      (*(void (**)(void))(*(_DWORD *)v8 + 12))();
  *(_DWORD *)(v3 + 20) = v5;
  *(_BYTE *)(v3 + 13) = 1;
  return j_j_j__ZN18TickWorldComponent10updateAreaEv((TickWorldComponent *)v3);
}


TickWorldComponent *__fastcall TickWorldComponent::~TickWorldComponent(TickWorldComponent *this)
{
  TickWorldComponent *v1; // r4@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4

  v1 = this;
  j_TickWorldComponent::removeArea(this);
  v2 = *((_DWORD *)v1 + 5);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
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
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  return v1;
}


int __fastcall TickWorldComponent::initFromDefinition(int result)
{
  unsigned int v6; // r2@1
  signed int v7; // r3@1

  __asm { VLDR            S0, =128.0 }
  _R1 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)result + 48) + 424);
  v6 = *(_DWORD *)(_R1 + 4);
  v7 = *(_DWORD *)(_R1 + 4);
  if ( v6 <= 2 )
    v7 = 2;
  if ( v6 > 6 )
    v7 = 6;
  *(_DWORD *)(result + 4) = v7;
  __asm
  {
    VLDR            S2, [R1,#8]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S2 }
    VMUL.F32        S0, S0, S0
    VSTR            S0, [R0,#8]
  *(_BYTE *)(result + 12) = *(_BYTE *)(_R1 + 12);
  *(_BYTE *)(result + 13) = 1;
  return result;
}


int __fastcall TickWorldComponent::getTickingArea(int result, int a2)
{
  int v2; // r2@1
  unsigned int v3; // r3@2
  unsigned int *v4; // r12@2
  unsigned int v5; // lr@5
  unsigned int v6; // r2@6
  int v7; // r2@7
  int v8; // r3@8
  signed int v9; // r2@8
  int v10; // r1@14

  v2 = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(result + 4) = v2;
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 4);
    v4 = (unsigned int *)(v2 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v3 )
        {
          *(_DWORD *)(result + 4) = 0;
          v9 = 1;
          goto LABEL_14;
        }
        __dmb();
        v5 = __ldrex(v4);
        if ( v5 == v3 )
          break;
        __clrex();
        v3 = v5;
      }
      v6 = __strex(v3 + 1, v4);
      v3 = v5;
    }
    while ( v6 );
    __dmb();
    v7 = *(_DWORD *)(result + 4);
    if ( v7 )
      v8 = *(_DWORD *)(v7 + 4);
      v9 = 0;
      if ( !v8 )
        v9 = 1;
    else
      v9 = 1;
  }
  else
    v9 = 1;
LABEL_14:
  v10 = *(_DWORD *)(a2 + 16);
  if ( v9 )
    v10 = 0;
  *(_DWORD *)result = v10;
  return result;
}


int __fastcall TickWorldComponent::TickWorldComponent(int a1, Entity *a2)
{
  int v2; // r5@1

  v2 = a1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 2;
  *(_DWORD *)(a1 + 8) = 1124073472;
  *(_BYTE *)(a1 + 12) = 1;
  *(_BYTE *)(a1 + 13) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  j_Entity::setPersistent(a2);
  return v2;
}


int __fastcall TickWorldComponent::hasTickingArea(TickWorldComponent *this)
{
  int v1; // r0@1
  int result; // r0@2

  v1 = *((_DWORD *)this + 5);
  if ( v1 )
    result = *(_DWORD *)(v1 + 4) != 0;
  else
    result = 0;
  return result;
}


int __fastcall TickWorldComponent::updateArea(int result)
{
  int v1; // r6@0
  int v2; // r5@1
  int v3; // r4@1
  unsigned int *v4; // r7@2
  int v5; // r1@5
  unsigned int v6; // r2@6
  bool v7; // zf@7
  void (__fastcall *v8)(int, int); // r8@10
  int v9; // r0@10
  unsigned int *v10; // r5@18

  v2 = result;
  v3 = *(_DWORD *)(result + 20);
  if ( v3 )
  {
    result = *(_DWORD *)(v3 + 4);
    v4 = (unsigned int *)(v3 + 4);
    while ( result )
    {
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == result )
      {
        v6 = __strex(result + 1, v4);
        result = v5;
        if ( !v6 )
        {
          __dmb();
          v7 = *v4 == 0;
          if ( *v4 )
          {
            v1 = *(_DWORD *)(v2 + 16);
            v7 = v1 == 0;
          }
          if ( !v7 )
            v8 = *(void (__fastcall **)(int, int))(*(_DWORD *)v1 + 52);
            v9 = (*(int (**)(void))(**(_DWORD **)v2 + 52))();
            v8(v1, v9);
            if ( *(_BYTE *)(v2 + 13) )
            {
              (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v1 + 84))(
                v1,
                16 * *(_QWORD *)(v2 + 4),
                *(_QWORD *)(v2 + 4) >> 32,
                *(_BYTE *)(v2 + 12));
              *(_BYTE *)(v2 + 13) = 0;
            }
          if ( &pthread_create )
            __dmb();
            do
              result = __ldrex(v4);
            while ( __strex(result - 1, v4) );
          else
            result = (*v4)--;
          if ( result == 1 )
            v10 = (unsigned int *)(v3 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
            if ( &pthread_create )
              __dmb();
              do
                result = __ldrex(v10);
              while ( __strex(result - 1, v10) );
            else
              result = (*v10)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          return result;
        }
      }
      else
        __clrex();
    }
  }
  return result;
}
