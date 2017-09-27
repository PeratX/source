

_DWORD *__fastcall Stopwatch::print(int a1, const char **a2)
{
  const char **v3; // r4@1
  _DWORD *result; // r0@1
  const char *v5; // r4@2
  int v6; // r0@3
  char *v13; // r4@5
  char *v16; // r4@5
  char *v19; // r4@5
  char *v22; // r4@5
  char *v23; // r4@5
  int v24; // r7@5
  char v25; // r1@7
  char *v26; // r0@9
  char *v27; // r4@9
  char *v28; // r4@9
  int v29; // r7@9
  char v30; // r1@11
  char *v31; // r0@13
  char *v32; // r0@13
  unsigned int *v33; // r2@16
  signed int v34; // r1@18
  void **v35; // [sp+0h] [bp-D0h]@2
  void **v36; // [sp+4h] [bp-CCh]@2
  int v37; // [sp+8h] [bp-C8h]@2
  int v38; // [sp+Ch] [bp-C4h]@2
  int v39; // [sp+10h] [bp-C0h]@2
  int v40; // [sp+14h] [bp-BCh]@2
  int v41; // [sp+18h] [bp-B8h]@2
  int v42; // [sp+1Ch] [bp-B4h]@2
  int v43; // [sp+20h] [bp-B0h]@2
  int v44; // [sp+24h] [bp-ACh]@2
  char *v45; // [sp+28h] [bp-A8h]@2
  void **v46; // [sp+2Ch] [bp-A4h]@2
  int v47; // [sp+9Ch] [bp-34h]@2
  __int16 v48; // [sp+A0h] [bp-30h]@2
  int v49; // [sp+A4h] [bp-2Ch]@2
  int v50; // [sp+A8h] [bp-28h]@2
  int v51; // [sp+ACh] [bp-24h]@2
  int v52; // [sp+B0h] [bp-20h]@2

  _R7 = a1;
  v3 = a2;
  result = *(_DWORD **)(a1 + 40);
  if ( result )
  {
    sub_21B6308((int)&v46);
    v46 = &off_26D3AF0;
    v47 = 0;
    v48 = 0;
    v51 = 0;
    v52 = 0;
    v49 = 0;
    v50 = 0;
    v35 = (void **)off_26D3F2C;
    *(void ***)((char *)&v35 + *((_DWORD *)off_26D3F2C - 3)) = (void **)off_26D3F30;
    sub_21B5AD4((int)*(v35 - 3) + (_DWORD)&v35, 0);
    v35 = &off_26D3F44;
    v46 = &off_26D3F58;
    v42 = 0;
    v40 = 0;
    v41 = 0;
    v38 = 0;
    v39 = 0;
    v36 = &off_26D40A8;
    v37 = 0;
    sub_21C9520((unsigned int **)&v43);
    v36 = &off_27734E8;
    v44 = 16;
    v45 = (char *)&unk_28898CC;
    sub_21B5AD4((int)*(v35 - 3) + (_DWORD)&v35, (unsigned int)&v35 | 4);
    v5 = *v3;
    if ( v5 )
    {
      v6 = j_strlen_0(v5);
      sub_21CBF38((char *)&v35, (int)v5, v6);
    }
    else
      sub_21B583C((int)*(v35 - 3) + (_DWORD)&v35, *(_DWORD *)((char *)*(v35 - 3) + (_DWORD)&v35 + 20) | 1);
    sub_21CBF38((char *)&v35, (int)"\tTime (AVGms/LTs(MAXs)/TTs, C) : ", 33);
    __asm { VLDR            D0, =1000.0 }
    *(_DWORD *)((char *)*(v35 - 3) + (_DWORD)&v35 + 4) = 3;
    __asm
      VLDR            D1, [R7,#0x10]
      VMUL.F64        D0, D1, D0
      VLDR            S2, [R7,#0x28]
      VCVT.F64.S32    D1, S2
      VDIV.F64        D0, D0, D1
      VMOV            R2, R3, D0
    v13 = sub_21CC9F0((char *)&v35);
    sub_21CBF38(v13, (int)"/", 1);
    *(_DWORD *)&v13[*(_DWORD *)(*(_DWORD *)v13 - 12) + 4] = 6;
      VLDR            D0, [R7,#0x18]
    v16 = sub_21CC9F0(v13);
    sub_21CBF38(v16, (int)"(", 1);
      VLDR            D0, [R7,#0x20]
    v19 = sub_21CC9F0(v16);
    sub_21CBF38(v19, (int)")/", 2);
    *(_DWORD *)&v19[*(_DWORD *)(*(_DWORD *)v19 - 12) + 4] = 4;
      VLDR            D0, [R7,#0x10]
    v22 = sub_21CC9F0(v19);
    sub_21CBF38(v22, (int)", ", 2);
    v23 = (char *)sub_21CC43C(v22, *(_DWORD *)(_R7 + 40));
    v24 = *(_DWORD *)&v23[*(_DWORD *)(*(_DWORD *)v23 - 12) + 124];
    if ( !v24
      || (!*(_BYTE *)(v24 + 28) ? (sub_21B50F0(v24),
                                   v25 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v24 + 24))(v24, 10)) : (v25 = *(_BYTE *)(v24 + 39)),
          v26 = sub_21CBC4C(v23, v25),
          v27 = sub_21CB78C(v26),
          sub_21CBF38(v27, (int)" @ ", 3),
          sub_21CBF38(v27, (int)"print", 5),
          sub_21CBF38(v27, (int)" (", 2),
          sub_21CBF38(
            v27,
            (int)"F:\\DarwinWork\\22\\s\\handheld\\project\\VS2015\\systems\\Core\\core.Shared\\..\\..\\..\\..\\..\\src-d"
                 "eps\\Core\\Timing\\time.cpp",
            112),
          sub_21CBF38(v27, (int)":", 1),
          v28 = (char *)sub_21CC43C(v27, 236),
          sub_21CBF38(v28, (int)")", 1),
          (v29 = *(_DWORD *)&v28[*(_DWORD *)(*(_DWORD *)v28 - 12) + 124]) == 0) )
      sub_21E5824();
    if ( *(_BYTE *)(v29 + 28) )
      v30 = *(_BYTE *)(v29 + 39);
      sub_21B50F0(v29);
      v30 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v29 + 24))(v29, 10);
    v31 = sub_21CBC4C(v28, v30);
    sub_21CB78C(v31);
    v35 = off_26D3F28;
    *(_DWORD *)((char *)*(off_26D3F28 - 3) + (_DWORD)&v35) = off_26D3F34;
    v32 = v45 - 12;
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v45 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
      }
      else
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j__ZdlPv_9(v32);
    sub_21C802C((unsigned int **)&v43);
    result = sub_21B6560(&v46);
  }
  return result;
}


int __fastcall Stopwatch::start(Stopwatch *this)
{
  int result; // r0@1
  int v6; // [sp+0h] [bp-10h]@1

  j_gettimeofday((struct timeval *)&v6, 0);
  __asm
  {
    VLDR            S0, [SP,#0x10+var_C]
    VCVT.F64.S32    D0, S0
  }
  result = v6 - dword_287E828;
    VLDR            D1, =0.000001
    VMUL.F64        D0, D0, D1
    VMOV            S2, R0
    VCVT.F64.U32    D1, S2
    VADD.F64        D0, D0, D1
    VSTR            D0, [R4,#8]
  return result;
}


int __fastcall Stopwatch::stop(Stopwatch *this, int _R1)
{
  int result; // r0@7
  int v9; // [sp+0h] [bp-18h]@2

  __asm { VMOV.F64        D0, #-1.0 }
  _R4 = this;
  __asm
  {
    VLDR            D1, [R4,#8]
    VCMPE.F64       D1, D0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _ZF )
    __asm { VLDR            D0, =0.0 }
  else
    j_gettimeofday((struct timeval *)&v9, 0);
    __asm
    {
      VLDR            S0, [SP,#0x18+var_14]
      VCVT.F64.S32    D0, S0
    }
    _R1 = v9;
    _R0 = v9 - dword_287E828;
      VLDR            D1, =0.000001
      VMUL.F64        D0, D0, D1
      VMOV            S2, R0
      VCVT.F64.U32    D1, S2
      VADD.F64        D0, D0, D1
      VLDR            D1, [R4,#8]
      VSUB.F64        D0, D0, D1
      VSTR            D0, [R4,#0x18]
      VLDR            D1, [R4,#0x20]
      VCMPE.F64       D0, D1
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VSTRGT          D0, [R4,#0x20] }
      VLDR            D1, [R4,#0x10]
      VADD.F64        D0, D1, D0
      VSTR            D0, [R4,#0x10]
    *((_DWORD *)_R4 + 2) = 0;
    *((_DWORD *)_R4 + 3) = -1074790400;
    ++*((_DWORD *)_R4 + 10);
  __asm { VMOV            R0, R1, D0 }
  return result;
}


int __fastcall Stopwatch::Stopwatch(int result)
{
  __int64 v1; // r1@1

  HIDWORD(v1) = -1074790400;
  *(_DWORD *)result = &off_27269C0;
  LODWORD(v1) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_QWORD *)(result + 8) = v1;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  return result;
}


int __fastcall Stopwatch::getLast(Stopwatch *this, int _R1)
{
  int result; // r0@1

  __asm
  {
    VLDR            D0, [R0,#0x18]
    VMOV            R0, R1, D0
  }
  return result;
}


int __fastcall Stopwatch::printEvery(int result, int a2)
{
  int v2; // r3@1

  v2 = *(_DWORD *)(result + 44) + 1;
  *(_DWORD *)(result + 44) = v2;
  if ( v2 >= a2 )
  {
    *(_DWORD *)(result + 44) = 0;
    result = (*(int (**)(void))(*(_DWORD *)result + 16))();
  }
  return result;
}


int __fastcall Stopwatch::tick(Stopwatch *this, int _R1)
{
  int result; // r0@4
  int v9; // [sp+0h] [bp-10h]@2

  __asm { VMOV.F64        D0, #-1.0 }
  _R4 = this;
  __asm
  {
    VLDR            D1, [R4,#8]
    VCMPE.F64       D1, D0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _ZF )
    __asm { VLDR            D0, =0.0 }
  else
    j_gettimeofday((struct timeval *)&v9, 0);
    __asm
    {
      VLDR            S0, [SP,#0x10+var_C]
      VCVT.F64.S32    D0, S0
    }
    _R1 = v9;
    _R0 = v9 - dword_287E828;
      VLDR            D1, =0.000001
      VMUL.F64        D0, D0, D1
      VMOV            S2, R0
      VCVT.F64.U32    D1, S2
      VADD.F64        D0, D0, D1
      VLDR            D1, [R4,#8]
      VSUB.F64        D0, D0, D1
  __asm { VMOV            R0, R1, D0 }
  return result;
}


int __fastcall Stopwatch::getTotal(Stopwatch *this, int _R1)
{
  int result; // r0@1

  __asm
  {
    VLDR            D0, [R0,#0x10]
    VMOV            R0, R1, D0
  }
  return result;
}


int __fastcall Stopwatch::reset(int result)
{
  *(_DWORD *)(result + 12) = -1074790400;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  return result;
}


int __fastcall Stopwatch::getMax(Stopwatch *this, int _R1)
{
  int result; // r0@1

  __asm
  {
    VLDR            D0, [R0,#0x20]
    VMOV            R0, R1, D0
  }
  return result;
}


int __fastcall Stopwatch::stopContinue(Stopwatch *this, int _R1)
{
  int result; // r0@7
  int v9; // [sp+0h] [bp-10h]@2

  __asm { VMOV.F64        D0, #-1.0 }
  _R4 = this;
  __asm
  {
    VLDR            D1, [R4,#8]
    VCMPE.F64       D1, D0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _ZF )
    __asm { VLDR            D1, =0.0 }
  else
    j_gettimeofday((struct timeval *)&v9, 0);
    __asm
    {
      VLDR            S0, [SP,#0x10+var_C]
      VCVT.F64.S32    D0, S0
    }
    _R1 = v9;
    _R0 = v9 - dword_287E828;
      VLDR            D1, =0.000001
      VMUL.F64        D0, D0, D1
      VMOV            S2, R0
      VCVT.F64.U32    D1, S2
      VADD.F64        D0, D0, D1
      VLDR            D1, [R4,#8]
      VSUB.F64        D1, D0, D1
      VSTR            D1, [R4,#0x18]
      VLDR            D2, [R4,#0x20]
      VCMPE.F64       D1, D2
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VSTRGT          D1, [R4,#0x20] }
      VLDR            D2, [R4,#0x10]
      VADD.F64        D1, D2, D1
      VSTR            D1, [R4,#0x10]
      VSTR            D0, [R4,#8]
    ++*((_DWORD *)_R4 + 10);
  __asm { VMOV            R0, R1, D1 }
  return result;
}


signed int __fastcall Stopwatch::isReset(Stopwatch *this)
{
  __int64 v4; // r1@3
  int v5; // r2@3
  __int64 v7; // r0@7
  int v8; // r1@7
  bool v9; // zf@7
  signed int result; // r0@10

  __asm
  {
    VMOV.F64        D0, #-1.0
    VLDR            D1, [R0,#8]
    VCMPE.F64       D1, D0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    goto LABEL_14;
  v4 = *((_QWORD *)this + 2);
  v5 = HIDWORD(v4) & 0x7FFFFFFF;
  _ZF = (_DWORD)v4 == 0;
  if ( !(_DWORD)v4 )
    _ZF = v5 == 0;
  v7 = *((_QWORD *)this + 4);
  v8 = HIDWORD(v7) & 0x7FFFFFFF;
  v9 = (_DWORD)v7 == 0;
  if ( !(_DWORD)v7 )
    v9 = v8 == 0;
  if ( v9 )
    result = 1;
  else
LABEL_14:
    result = 0;
  return result;
}
