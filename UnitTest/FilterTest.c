

signed int __fastcall FilterTest::_testValuesWithOperator(int a1, const void **a2, const void **a3)
{
  int v3; // r0@1
  _DWORD *v5; // r0@4
  signed int v6; // r4@4
  _DWORD *v7; // r1@4
  size_t v8; // r2@4
  _DWORD *v9; // r0@8
  _DWORD *v10; // r1@8
  size_t v11; // r2@8

  v3 = *(_WORD *)(a1 + 6);
  if ( v3 == 1 )
  {
    v9 = *a2;
    v10 = *a3;
    v11 = *(v9 - 3);
    if ( v11 != *(v10 - 3) )
      return 1;
    return memcmp(v9, v10, v11) != 0;
  }
  if ( v3 )
    return 0;
  v5 = *a2;
  v6 = 0;
  v7 = *a3;
  v8 = *(v5 - 3);
  if ( v8 != *(v7 - 3) )
    return v6;
  if ( !memcmp(v5, v7, v8) )
    v6 = 1;
  return v6;
}


int __fastcall FilterTest::_testValuesWithOperator(FilterTest *this, int a2, int a3)
{
  unsigned int v3; // r0@1
  int result; // r0@2

  v3 = *((_WORD *)this + 3);
  if ( v3 <= 5 )
  {
    switch ( v3 )
    {
      case 0u:
        result = a2 ^ a3 ^ 1;
        break;
      case 1u:
        result = a2 ^ a3;
      case 2u:
        result = (a3 ^ 1) & a2;
      case 3u:
        result = a3 & ~a2;
      case 4u:
        result = a3 ^ 1 | a2;
      case 5u:
        result = a2 ^ 1 | a3;
    }
  }
  else
    result = 0;
  return result;
}


int *__fastcall FilterTest::Definition::Definition(int *a1, int *a2, int *a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // r7@1
  int *v9; // r5@1
  int *v10; // r4@1
  void (__fastcall *v11)(int *, int, signed int); // r3@1

  v8 = a4;
  v9 = a3;
  v10 = a1;
  sub_21E8AF4(a1, a2);
  sub_21E8AF4(v10 + 1, v9);
  v10[8] = 0;
  v10[2] = v8;
  v10[3] = a5;
  v10[4] = a6;
  v10[5] = a7;
  v11 = *(void (__fastcall **)(int *, int, signed int))(a8 + 8);
  if ( v11 )
  {
    v11(v10 + 6, a8, 2);
    v10[9] = *(_DWORD *)(a8 + 12);
    v10[8] = *(_DWORD *)(a8 + 8);
  }
  return v10;
}


signed int __fastcall FilterTest::_testValuesWithOperator(FilterTest *this, float _R1, float _R2)
{
  unsigned int v3; // r0@1
  signed int result; // r0@2

  v3 = *((_WORD *)this + 3);
  if ( v3 <= 5 )
  {
    __asm
    {
      VMOV            S2, R1
      VMOV            S0, R2
    }
    switch ( v3 )
      case 0u:
        __asm { VCMPE.F32       S2, S0  ; jumptable 01790C82 case 0 }
        result = 0;
        __asm { VMRS            APSR_nzcv, FPSCR }
        if ( _ZF )
          result = 1;
        break;
      case 1u:
        __asm { VCMPE.F32       S2, S0  ; jumptable 01790C82 case 1 }
        if ( !_ZF )
      case 2u:
        __asm { VCMPE.F32       S2, S0  ; jumptable 01790C82 case 2 }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      case 3u:
        __asm { VCMPE.F32       S2, S0  ; jumptable 01790C82 case 3 }
        if ( _NF ^ _VF )
      case 4u:
        __asm { VCMPE.F32       S2, S0  ; jumptable 01790C82 case 4 }
        if ( !(_NF ^ _VF) )
      case 5u:
        __asm { VCMPE.F32       S2, S0  ; jumptable 01790C82 case 5 }
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
  }
  else
    result = 0;
  return result;
}


signed int __fastcall FilterTest::_testValuesWithOperator(FilterTest *this, int a2, int a3)
{
  unsigned int v3; // r0@1
  signed int result; // r0@2

  v3 = *((_WORD *)this + 3);
  if ( v3 <= 5 )
  {
    switch ( v3 )
    {
      case 0u:
        result = 0;
        if ( a2 == a3 )
          result = 1;
        break;
      case 1u:
        if ( a2 != a3 )
      case 2u:
        if ( a2 > a3 )
      case 3u:
        if ( a2 < a3 )
      case 4u:
        if ( a2 >= a3 )
      case 5u:
        if ( a2 <= a3 )
    }
  }
  else
    result = 0;
  return result;
}


signed int __fastcall FilterTest::setup(int a1, int a2, int a3)
{
  *(_WORD *)(a1 + 4) = *(_WORD *)a3;
  *(_WORD *)(a1 + 6) = *(_WORD *)(a3 + 20);
  return 1;
}
