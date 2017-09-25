

void __fastcall StopwatchNLast::~StopwatchNLast(StopwatchNLast *this)
{
  StopwatchNLast *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_27269A4;
  v2 = (void *)*((_DWORD *)this + 14);
  if ( v2 )
    j_operator delete(v2);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall StopwatchNLast::~StopwatchNLast(StopwatchNLast *this)
{
  StopwatchNLast::~StopwatchNLast(this);
}


_DWORD *__fastcall StopwatchNLast::print(int a1, const char **a2)
{
  const char **v3; // r5@1
  const char *v4; // r5@1
  int v5; // r0@2
  char *v6; // r7@4
  char *v13; // r7@4
  char *v16; // r6@4
  int v17; // r7@4
  char v18; // r1@6
  char *v19; // r0@8
  char *v20; // r6@8
  char *v21; // r6@8
  int v22; // r7@8
  char v23; // r1@10
  char *v24; // r0@12
  char *v25; // r0@12
  unsigned int *v27; // r2@14
  signed int v28; // r1@16
  void **v29; // [sp+0h] [bp-D8h]@1
  void **v30; // [sp+4h] [bp-D4h]@1
  int v31; // [sp+8h] [bp-D0h]@1
  int v32; // [sp+Ch] [bp-CCh]@1
  int v33; // [sp+10h] [bp-C8h]@1
  int v34; // [sp+14h] [bp-C4h]@1
  int v35; // [sp+18h] [bp-C0h]@1
  int v36; // [sp+1Ch] [bp-BCh]@1
  int v37; // [sp+20h] [bp-B8h]@1
  int v38; // [sp+24h] [bp-B4h]@1
  char *v39; // [sp+28h] [bp-B0h]@1
  void **v40; // [sp+2Ch] [bp-ACh]@1
  int v41; // [sp+9Ch] [bp-3Ch]@1
  __int16 v42; // [sp+A0h] [bp-38h]@1
  int v43; // [sp+A4h] [bp-34h]@1
  int v44; // [sp+A8h] [bp-30h]@1
  int v45; // [sp+ACh] [bp-2Ch]@1
  int v46; // [sp+B0h] [bp-28h]@1

  _R6 = a1;
  v3 = a2;
  sub_21B6308((int)&v40);
  v40 = &off_26D3AF0;
  v41 = 0;
  v42 = 0;
  v45 = 0;
  v46 = 0;
  v43 = 0;
  v44 = 0;
  v29 = (void **)off_26D3F2C;
  *(void ***)((char *)&v29 + *((_DWORD *)off_26D3F2C - 3)) = (void **)off_26D3F30;
  sub_21B5AD4((int)*(v29 - 3) + (_DWORD)&v29, 0);
  v29 = &off_26D3F44;
  v40 = &off_26D3F58;
  v36 = 0;
  v34 = 0;
  v35 = 0;
  v32 = 0;
  v33 = 0;
  v30 = &off_26D40A8;
  v31 = 0;
  sub_21C9520((unsigned int **)&v37);
  v30 = &off_27734E8;
  v38 = 16;
  v39 = (char *)&unk_28898CC;
  sub_21B5AD4((int)*(v29 - 3) + (_DWORD)&v29, (unsigned int)&v29 | 4);
  v4 = *v3;
  if ( v4 )
  {
    v5 = j_strlen_0(v4);
    sub_21CBF38((char *)&v29, (int)v4, v5);
  }
  else
    sub_21B583C((int)*(v29 - 3) + (_DWORD)&v29, *(_DWORD *)((char *)*(v29 - 3) + (_DWORD)&v29 + 20) | 1);
  sub_21CBF38((char *)&v29, (int)"\tTime (AVGms for the last ", 26);
  v6 = (char *)sub_21CC43C(&v29, *(_DWORD *)(_R6 + 48));
  sub_21CBF38(v6, (int)" runs): ", 8);
  __asm
    VLDR            D8, =1000.0
    VLDR            D0, [R6,#0x48]
    VLDR            S2, [R6,#0x30]
    VMUL.F64        D0, D0, D8
    VCVT.F64.S32    D1, S2
    VDIV.F64        D0, D0, D1
    VMOV            R2, R3, D0
  v13 = sub_21CC9F0(v6);
  sub_21CBF38(v13, (int)" (Max: ", 7);
    VLDR            D0, [R6,#0x20]
  v16 = sub_21CC9F0(v13);
  sub_21CBF38(v16, (int)")", 1);
  v17 = *(_DWORD *)&v16[*(_DWORD *)(*(_DWORD *)v16 - 12) + 124];
  if ( !v17
    || (!*(_BYTE *)(v17 + 28) ? (sub_21B50F0(v17),
                                 v18 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v17 + 24))(v17, 10)) : (v18 = *(_BYTE *)(v17 + 39)),
        v19 = sub_21CBC4C(v16, v18),
        v20 = sub_21CB78C(v19),
        sub_21CBF38(v20, (int)" @ ", 3),
        sub_21CBF38(v20, (int)"print", 5),
        sub_21CBF38(v20, (int)" (", 2),
        sub_21CBF38(
          v20,
          (int)"F:\\DarwinWork\\22\\s\\handheld\\project\\VS2015\\systems\\Core\\core.Shared\\..\\..\\..\\..\\..\\src-dep"
               "s\\Core\\Timing\\time.cpp",
          112),
        sub_21CBF38(v20, (int)":", 1),
        v21 = (char *)sub_21CC43C(v20, 141),
        sub_21CBF38(v21, (int)")", 1),
        (v22 = *(_DWORD *)&v21[*(_DWORD *)(*(_DWORD *)v21 - 12) + 124]) == 0) )
    sub_21E5824();
  if ( *(_BYTE *)(v22 + 28) )
    v23 = *(_BYTE *)(v22 + 39);
    sub_21B50F0(v22);
    v23 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v22 + 24))(v22, 10);
  v24 = sub_21CBC4C(v21, v23);
  sub_21CB78C(v24);
  v29 = off_26D3F28;
  *(_DWORD *)((char *)*(off_26D3F28 - 3) + (_DWORD)&v29) = off_26D3F34;
  v25 = v39 - 12;
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v39 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
    }
    else
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  sub_21C802C((unsigned int **)&v37);
  return sub_21B6560(&v40);
}


int __fastcall StopwatchNLast::StopwatchNLast(int a1, unsigned int a2)
{
  int v2; // r4@1
  int v4; // [sp+0h] [bp-10h]@1
  int v5; // [sp+4h] [bp-Ch]@1

  v2 = a1;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = -1074790400;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)a1 = &off_27269A4;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 48) = a2;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 80) = &off_27269C0;
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 92) = -1074790400;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 116) = 0;
  v4 = 0;
  v5 = 0;
  if ( a2 )
    j_std::vector<double,std::allocator<double>>::_M_fill_insert(a1 + 56, 0, a2, (int)&v4);
  return v2;
}


StopwatchNLast *__fastcall StopwatchNLast::~StopwatchNLast(StopwatchNLast *this)
{
  StopwatchNLast *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_27269A4;
  v2 = (void *)*((_DWORD *)this + 14);
  if ( v2 )
    j_operator delete(v2);
  return v1;
}


int __fastcall StopwatchNLast::stop(StopwatchNLast *this, int _R1)
{
  int v8; // r3@7
  int v10; // r3@7
  int result; // r0@9
  int v12; // [sp+0h] [bp-18h]@2

  __asm { VMOV.F64        D0, #-1.0 }
  _R4 = this;
  __asm
  {
    VLDR            D1, [R4,#8]
    VCMPE.F64       D1, D0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _ZF )
    __asm
    {
      VLDR            D1, =0.0
      VLDR            D0, [R4,#0x18]
    }
  else
    j_gettimeofday((struct timeval *)&v12, 0);
      VLDR            S0, [SP,#0x18+var_14]
      VCVT.F64.S32    D0, S0
    _R1 = v12;
    _R0 = v12 - dword_287E828;
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
      VADD.F64        D1, D1, D0
      VSTR            D1, [R4,#0x10]
    *((_DWORD *)_R4 + 2) = 0;
    *((_DWORD *)_R4 + 3) = -1074790400;
    ++*((_DWORD *)_R4 + 10);
  v8 = *((_DWORD *)_R4 + 13);
  _R0 = *((_DWORD *)_R4 + 14) + 8 * v8;
  v10 = v8 + 1;
  __asm { VLDR            D2, [R0] }
    v10 = 0;
  *((_DWORD *)_R4 + 13) = v10;
    VSUB.F64        D2, D0, D2
    VSTR            D0, [R2]
    VMOV            R0, R1, D1
    VLDR            D0, [R4,#0x48]
    VADD.F64        D0, D2, D0
    VSTR            D0, [R4,#0x48]
  return result;
}
