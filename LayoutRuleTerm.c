

int __fastcall LayoutRuleTerm::LayoutRuleTerm(int result, int a2, int a3)
{
  *(_DWORD *)result = a3;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = a2;
  return result;
}


int __fastcall LayoutRuleTerm::LayoutRuleTerm(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r0@1
  int v7; // r0@1
  void (__fastcall *v8)(int, int, signed int); // r3@1

  v4 = a1;
  *(_DWORD *)a1 = a4;
  *(_DWORD *)(a1 + 4) = 0;
  v5 = a3;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)a2;
  *(_DWORD *)a2 = 0;
  v6 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(v4 + 8) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = v6;
  v7 = *(_DWORD *)(v4 + 12);
  *(_DWORD *)(v4 + 12) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = v7;
  *(_DWORD *)(v4 + 24) = 0;
  v8 = *(void (__fastcall **)(int, int, signed int))(a3 + 8);
  if ( v8 )
  {
    v8(v4 + 16, a3, 2);
    *(_DWORD *)(v4 + 28) = *(_DWORD *)(v5 + 12);
    *(_DWORD *)(v4 + 24) = *(_DWORD *)(v5 + 8);
  }
  *(_DWORD *)(v4 + 32) = 0;
  *(_DWORD *)(v4 + 36) = 0;
  return v4;
}


int __fastcall LayoutRuleTerm::removeDependsOnMeEntries(int result)
{
  VariableRef *i; // r4@1
  VariableRef *v2; // r7@1
  int v3; // r5@5
  unsigned int *v4; // r1@6
  unsigned int *v5; // r6@12
  UIControl *v6; // [sp+4h] [bp-24h]@3
  int v7; // [sp+8h] [bp-20h]@5

  v2 = (VariableRef *)(*(_QWORD *)(result + 4) >> 32);
  for ( i = (VariableRef *)*(_QWORD *)(result + 4); i != v2; i = (VariableRef *)((char *)i + 20) )
  {
    result = VariableRef::isValid(i);
    if ( result == 1 )
    {
      VariableRef::getControl((VariableRef *)&v6, (int)i);
      result = (int)v6;
      if ( v6 )
        result = UIControl::markToRemoveDeadDependencies(v6);
      v3 = v7;
      if ( v7 )
      {
        v4 = (unsigned int *)(v7 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = __ldrex(v4);
          while ( __strex(result - 1, v4) );
        }
        else
          result = (*v4)--;
        if ( result == 1 )
          v5 = (unsigned int *)(v3 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
          if ( &pthread_create )
          {
            __dmb();
            do
              result = __ldrex(v5);
            while ( __strex(result - 1, v5) );
          }
          else
            result = (*v5)--;
          if ( result == 1 )
            result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
      }
    }
  }
  return result;
}


int __fastcall LayoutRuleTerm::compute(LayoutRuleTerm *this, int a2, int a3)
{
  unsigned int v4; // r0@1
  _DWORD *v5; // r1@2
  int v6; // r0@2
  VariableRef *v11; // r5@8 OVERLAPPED
  VariableRef *v12; // r6@8 OVERLAPPED
  char v13; // r7@9
  LayoutVariable *v14; // r0@10
  void *v17; // r0@22
  int result; // r0@24
  unsigned int *v19; // r2@25
  signed int v20; // r1@27
  int v21; // [sp+4h] [bp-34h]@22

  _R4 = this;
  v4 = *(_DWORD *)this;
  if ( v4 > 0x13 )
  {
    __asm { VLDR            S16, [R4,#0x24] }
  }
  else
    v5 = dword_262D220;
    v6 = dword_262D220[v4];
    if ( v6 == 2 )
    {
      if ( !*((_DWORD *)_R4 + 6) )
        sub_21E5F48();
      _R0 = (*((int (__fastcall **)(_DWORD, _DWORD))_R4 + 7))((char *)_R4 + 16, (char *)_R4 + 4);
      __asm { VMOV            S16, R0 }
    }
    else
      __asm { VLDR            S16, =0.0 }
      if ( v6 == 1 )
      {
        *(_QWORD *)&v11 = *(_QWORD *)((char *)_R4 + 4);
        if ( v11 != v12 )
        {
          __asm { VMOV.F32        S18, #1.0 }
          v13 = 0;
          do
          {
            v14 = (LayoutVariable *)VariableRef::getVariable(v11, (int)v5, a3);
            if ( v14 )
            {
              _R0 = LayoutVariable::getValue(v14);
              __asm { VMOV            S0, R0 }
              v13 = 1;
              __asm { VMUL.F32        S18, S0, S18 }
            }
            v11 = (VariableRef *)((char *)v11 + 20);
          }
          while ( v12 != v11 );
          if ( v13 & 1 )
            __asm
              VLDRNE          S0, [R4,#0x20]
              VMULNE.F32      S16, S0, S18
        }
      }
      else if ( !v6 )
        __asm { VLDREQ          S16, [R4,#0x24] }
  __asm
    VSTR            S16, [SP,#0x38+var_30]
    VLDR            S0, [SP,#0x38+var_30]
    VLDR            S2, [SP,#0x38+var_30]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( !_ZF )
    goto LABEL_36;
    VLDR            S2, =3.4028e38
    VABS.F32        S0, S0
  if ( _ZF )
LABEL_36:
    LayoutRuleTerm::toString((LayoutRuleTerm *)&v21, (int)_R4);
    v17 = (void *)(v21 - 12);
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v21 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      else
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    __asm { VLDR            S16, =0.0 }
  __asm { VMOV            R0, S16 }
  return result;
}


void __fastcall LayoutRuleTerm::gatherDependentVariables(int a1, int a2)
{
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  int i; // r4@1
  __int64 v5; // r0@3
  int v6; // r1@4
  unsigned int *v7; // r1@5
  unsigned int v8; // r2@7

  *(_QWORD *)&v2 = *(_QWORD *)(a1 + 4);
  for ( i = a2; v2 != v3; v2 += 20 )
  {
    if ( VariableRef::isValid((VariableRef *)v2) == 1 )
    {
      v5 = *(_QWORD *)(i + 4);
      if ( (_DWORD)v5 == HIDWORD(v5) )
      {
        std::vector<VariableRef,std::allocator<VariableRef>>::_M_emplace_back_aux<VariableRef const&>(
          (unsigned __int64 *)i,
          v2);
      }
      else
        *(_QWORD *)v5 = *(_QWORD *)v2;
        HIDWORD(v5) = *(_DWORD *)(v2 + 8);
        *(_DWORD *)(v5 + 8) = HIDWORD(v5);
        if ( HIDWORD(v5) )
        {
          v7 = (unsigned int *)(v6 + 8);
          if ( &pthread_create )
          {
            __dmb();
            do
              v8 = __ldrex(v7);
            while ( __strex(v8 + 1, v7) );
          }
          else
            ++*v7;
        }
        HIDWORD(v5) = *(_DWORD *)(v2 + 12);
        *(_BYTE *)(v5 + 16) = *(_BYTE *)(v2 + 16);
        *(_DWORD *)(v5 + 12) = HIDWORD(v5);
        *(_DWORD *)(i + 4) += 20;
    }
  }
}


int __fastcall LayoutRuleTerm::LayoutRuleTerm(int result, int a2, int a3, int a4)
{
  int v4; // lr@1
  int v5; // lr@1

  *(_DWORD *)result = a4;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 4) = *(_DWORD *)a2;
  *(_DWORD *)a2 = 0;
  v4 = *(_DWORD *)(result + 8);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = v4;
  v5 = *(_DWORD *)(result + 12);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = v5;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 32) = a3;
  *(_DWORD *)(result + 36) = 0;
  return result;
}


void __fastcall LayoutRuleTerm::addDependsOnMeEntriesForInvalidation(LayoutRuleTerm *this, const VariableRef *a2, int a3)
{
  __int64 v3; // r6@1
  int v4; // r4@1
  const VariableRef *i; // r5@1
  int v6; // r1@2
  int v7; // r2@2
  LayoutVariable *v8; // r0@3

  v3 = *(_QWORD *)((char *)this + 4);
  v4 = a3;
  for ( i = a2; HIDWORD(v3) != (_DWORD)v3; LODWORD(v3) = v3 + 20 )
  {
    if ( VariableRef::isValid((VariableRef *)v3) == 1 )
    {
      v8 = (LayoutVariable *)VariableRef::getVariable((VariableRef *)v3, v6, v7);
      if ( v8 )
        LayoutVariable::addDependsOnMeVariable(v8, i, v4);
    }
  }
}


signed int __fastcall LayoutRuleTerm::isZeroTerm(LayoutRuleTerm *this)
{
  int v1; // r1@2
  signed int result; // r0@4
  int v7; // r4@8
  int v8; // r10@8
  int v9; // r7@9
  unsigned int v10; // r5@10
  unsigned int *v11; // r0@10
  unsigned int v12; // r1@12
  unsigned int *v13; // r6@16
  unsigned int v14; // r0@18
  int v15; // [sp+0h] [bp-28h]@9
  int v16; // [sp+4h] [bp-24h]@9

  if ( *(_DWORD *)this > 0x13u )
    goto LABEL_4;
  v1 = dword_262D220[*(_DWORD *)this];
  if ( v1 == 1 )
  {
    __asm
    {
      VLDR            S0, [R0,#0x20]
      VLDR            S2, =1.1921e-7
      VABS.F32        S0, S0
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      return 1;
    v8 = *(_QWORD *)((char *)this + 4) >> 32;
    v7 = *(_QWORD *)((char *)this + 4);
    if ( v7 == v8 )
    while ( 1 )
      VariableRef::getControl((VariableRef *)&v15, v7);
      v9 = v16;
      if ( v16 )
      {
        v10 = *(_DWORD *)(v16 + 4);
        v11 = (unsigned int *)(v16 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
        }
        else
          *v11 = v10 - 1;
          v12 = v10;
        if ( v12 == 1 )
          v13 = (unsigned int *)(v9 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
          if ( &pthread_create )
          {
            __dmb();
            do
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
          }
          else
            v14 = (*v13)--;
          if ( v14 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
        if ( v10 )
          break;
      }
      v7 += 20;
      if ( v7 == v8 )
        return 1;
    return 0;
  }
  if ( v1 )
LABEL_4:
  __asm { VLDR            S0, [R0,#0x24] }
  result = 0;
  __asm
    VLDR            S2, =1.1921e-7
    VABS.F32        S0, S0
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    result = 1;
  return result;
}


_DWORD *__fastcall LayoutRuleTerm::LayoutRuleTerm(_DWORD *a1, int a2)
{
  int v2; // r5@1
  _DWORD *v3; // r9@1
  signed int v4; // r1@1
  unsigned int v5; // r6@1
  void *v6; // r0@1
  int v7; // r1@4 OVERLAPPED
  int v8; // r2@4 OVERLAPPED
  int v9; // r7@5
  unsigned int *v10; // r7@6
  unsigned int v11; // r6@8
  int v12; // r7@11
  char v13; // r6@11
  void (__fastcall *v14)(_DWORD *, int, signed int); // r3@12

  v2 = a2;
  v3 = a1;
  *a1 = *(_DWORD *)a2;
  v4 = (*(_QWORD *)(a2 + 4) >> 32) - *(_QWORD *)(a2 + 4);
  v5 = -858993459 * (v4 >> 2);
  v6 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  if ( v4 )
  {
    if ( v5 >= 0xCCCCCCD )
      sub_21E57F4();
    v6 = operator new(v4);
  }
  v3[1] = v6;
  v3[2] = v6;
  v3[3] = (char *)v6 + 20 * v5;
  for ( *(_QWORD *)&v7 = *(_QWORD *)(v2 + 4); v7 != v8; v6 = (char *)v6 + 20 )
    *(_DWORD *)v6 = *(_DWORD *)v7;
    *((_DWORD *)v6 + 1) = *(_DWORD *)(v7 + 4);
    v9 = *(_DWORD *)(v7 + 8);
    *((_DWORD *)v6 + 2) = v9;
    if ( v9 )
    {
      v10 = (unsigned int *)(v9 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 + 1, v10) );
      }
      else
        ++*v10;
    }
    v12 = *(_DWORD *)(v7 + 12);
    v13 = *(_BYTE *)(v7 + 16);
    v7 += 20;
    *((_BYTE *)v6 + 16) = v13;
    *((_DWORD *)v6 + 3) = v12;
  v3[6] = 0;
  v14 = *(void (__fastcall **)(_DWORD *, int, signed int))(v2 + 24);
  if ( v14 )
    v14(v3 + 4, v2 + 16, 2);
    v3[7] = *(_DWORD *)(v2 + 28);
    v3[6] = *(_DWORD *)(v2 + 24);
  *((_QWORD *)v3 + 4) = *(_QWORD *)(v2 + 32);
  return v3;
}


int __fastcall LayoutRuleTerm::LayoutRuleTerm(int a1, int a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r4@1

  v4 = a1;
  *(_DWORD *)a1 = a4;
  *(_DWORD *)(a1 + 4) = 0;
  v5 = a1 + 4;
  *(_DWORD *)(v5 + 4) = 0;
  *(_DWORD *)(v5 + 8) = 0;
  *(_DWORD *)(v5 + 20) = 0;
  *(_DWORD *)(v5 + 28) = a3;
  *(_DWORD *)(v5 + 32) = 0;
  std::vector<VariableRef,std::allocator<VariableRef>>::_M_emplace_back_aux<VariableRef const&>(
    (unsigned __int64 *)(a1 + 4),
    a2);
  return v4;
}


signed int __fastcall LayoutRuleTerm::isSatisfiable(LayoutRuleTerm *this, int a2, int a3)
{
  __int64 v3; // r4@1
  LayoutVariable *v4; // r0@2
  signed int result; // r0@5

  v3 = *(_QWORD *)((char *)this + 4);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
LABEL_5:
    result = 1;
  }
  else
    while ( 1 )
    {
      v4 = (LayoutVariable *)VariableRef::getVariable((VariableRef *)v3, a2, a3);
      if ( v4 )
      {
        if ( LayoutVariable::isSatisfied(v4) != 1 )
          break;
      }
      LODWORD(v3) = v3 + 20;
      if ( HIDWORD(v3) == (_DWORD)v3 )
        goto LABEL_5;
    }
    result = 0;
  return result;
}


int __fastcall LayoutRuleTerm::getType(LayoutRuleTerm *this)
{
  return *(_DWORD *)this;
}


_DWORD *__fastcall LayoutRuleTerm::toString(LayoutRuleTerm *this, int a2)
{
  int *v3; // r4@1
  int v5; // r0@2
  VariableRef *v6; // r5@5
  VariableRef *v7; // r10@5
  char v8; // r9@6
  const char *v14; // r5@9
  int v15; // r0@11
  void **v16; // r0@11
  void *v17; // r0@11
  VariableRef *i; // r5@13
  VariableRef *v21; // r10@13
  unsigned int *v22; // r2@15
  signed int v23; // r1@17
  unsigned int *v24; // r2@23
  signed int v25; // r1@25
  int v26; // r1@31
  int v27; // r2@31
  void *v28; // r0@34
  void *v29; // r0@34
  unsigned int *v30; // r2@38
  signed int v31; // r1@40
  int v32; // r1@46
  int v33; // r2@46
  void *v34; // r11@47
  void *v35; // r0@47
  int v36; // [sp+8h] [bp-F0h]@23
  int v37; // [sp+Ch] [bp-ECh]@38
  void **v38; // [sp+10h] [bp-E8h]@1
  int v39; // [sp+14h] [bp-E4h]@12
  void **v40; // [sp+18h] [bp-E0h]@1
  void **v41; // [sp+1Ch] [bp-DCh]@11
  int v42; // [sp+38h] [bp-C0h]@12
  int v43; // [sp+40h] [bp-B8h]@11
  int v44; // [sp+44h] [bp-B4h]@12
  char v45; // [sp+D0h] [bp-28h]@11

  _R7 = a2;
  v3 = (int *)this;
  sub_21D103C((int)&v38, 24);
  sub_21CBF38((char *)&v40, (int)"\t+ ", 3);
  if ( *(_DWORD *)_R7 <= 0x13u && (v5 = dword_262D220[*(_DWORD *)_R7]) != 0 )
  {
    if ( v5 == 1 )
    {
      __asm
      {
        VLDR            S0, [R7,#0x20]
        VCVT.F64.F32    D0, S0
        VMOV            R2, R3, D0
      }
      sub_21CC9F0((char *)&v40);
      v21 = (VariableRef *)(*(_QWORD *)(_R7 + 4) >> 32);
      for ( i = (VariableRef *)*(_QWORD *)(_R7 + 4); i != v21; i = (VariableRef *)((char *)i + 20) )
        if ( VariableRef::isValid(i) == 1 )
        {
          v34 = VariableRef::getVariable(i, v32, v33);
          sub_21CBF38((char *)&v40, (int)" * ", 3);
          LayoutVariable::toString(&v37, (int)v34, 0);
          sub_21CBF38((char *)&v40, v37, *(_DWORD *)(v37 - 12));
          v35 = (void *)(v37 - 12);
          if ( (int *)(v37 - 12) != &dword_28898C0 )
          {
            v30 = (unsigned int *)(v37 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v31 = __ldrex(v30);
              while ( __strex(v31 - 1, v30) );
            }
            else
              v31 = (*v30)--;
            if ( v31 <= 0 )
              j_j_j_j__ZdlPv_9(v35);
          }
        }
    }
    else if ( v5 == 2 )
      sub_21CBF38((char *)&v40, (int)"f(", 2);
      v7 = (VariableRef *)(*(_QWORD *)(_R7 + 4) >> 32);
      v6 = (VariableRef *)*(_QWORD *)(_R7 + 4);
      if ( v6 != v7 )
        v8 = 1;
        do
          if ( VariableRef::isValid(v6) == 1 )
            if ( !(v8 & 1) )
              sub_21CBF38((char *)&v40, (int)", ", 2);
            v28 = VariableRef::getVariable(v6, v26, v27);
            LayoutVariable::toString(&v36, (int)v28, 0);
            sub_21CBF38((char *)&v40, v36, *(_DWORD *)(v36 - 12));
            v29 = (void *)(v36 - 12);
            if ( (int *)(v36 - 12) != &dword_28898C0 )
              v24 = (unsigned int *)(v36 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v25 = __ldrex(v24);
                while ( __strex(v25 - 1, v24) );
              }
              else
                v25 = (*v24)--;
              if ( v25 <= 0 )
                j_j_j_j__ZdlPv_9(v29);
            v8 = 0;
          v6 = (VariableRef *)((char *)v6 + 20);
        while ( v6 != v7 );
      sub_21CBF38((char *)&v40, (int)")", 1);
  }
  else
    __asm
      VLDR            S0, [R7,#0x24]
      VCVT.F64.F32    D0, S0
      VMOV            R2, R3, D0
    sub_21CC9F0((char *)&v40);
  sub_21CBF38((char *)&v40, (int)" (", 2);
  if ( *(_DWORD *)_R7 > 0x13u )
    v14 = "Undefined";
    v14 = off_26E4E60[*(_DWORD *)_R7];
  v15 = strlen(v14);
  sub_21CBF38((char *)&v40, (int)v14, v15);
  v45 = 41;
  sub_21CBF38((char *)&v40, (int)&v45, 1);
  sub_21CFED8(v3, (int)&v41);
  v16 = off_26D3F84;
  v38 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v38) = off_26D3F80[0];
  v40 = v16;
  v41 = &off_27734E8;
  v17 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v43 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v41 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v42);
  v38 = (void **)off_26D3F68;
  *(void ***)((char *)&v38 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v39 = 0;
  return sub_21B6560(&v44);
}
