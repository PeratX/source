

void __fastcall BlockPos::center(BlockPos *this, int _R1)
{
  __asm
  {
    VLDR            S0, [R1]
    VMOV.F32        S6, #0.5
    VLDR            S2, [R1,#4]
    VLDR            S4, [R1,#8]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VADD.F32        S0, S0, S6
    VADD.F32        S2, S2, S6
    VADD.F32        S4, S4, S6
    VSTR            S0, [R0]
    VSTR            S2, [R0,#4]
    VSTR            S4, [R0,#8]
  }
}


_DWORD *__fastcall BlockPos::toString(BlockPos *this, int a2)
{
  int v2; // r6@1
  int *v3; // r5@1
  char *v4; // r7@1
  char *v5; // r7@1
  char *v6; // r0@1
  void **v7; // r0@1
  void *v8; // r0@1
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  void **v12; // [sp+4h] [bp-D4h]@1
  int v13; // [sp+8h] [bp-D0h]@2
  void **v14; // [sp+Ch] [bp-CCh]@1
  void **v15; // [sp+10h] [bp-C8h]@1
  int v16; // [sp+2Ch] [bp-ACh]@2
  int v17; // [sp+34h] [bp-A4h]@1
  int v18; // [sp+38h] [bp-A0h]@2

  v2 = a2;
  v3 = (int *)this;
  sub_21D103C((int)&v12, 24);
  sub_21CBF38((char *)&v14, (int)"Pos(", 4);
  v4 = (char *)sub_21CC43C(&v14, *(_DWORD *)v2);
  sub_21CBF38(v4, (int)",", 1);
  v5 = (char *)sub_21CC43C(v4, *(_DWORD *)(v2 + 4));
  sub_21CBF38(v5, (int)",", 1);
  v6 = (char *)sub_21CC43C(v5, *(_DWORD *)(v2 + 8));
  sub_21CBF38(v6, (int)")", 1);
  sub_21CFED8(v3, (int)&v15);
  v7 = off_26D3F84;
  v12 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v12) = off_26D3F80[0];
  v14 = v7;
  v15 = &off_27734E8;
  v8 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  }
  v15 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v16);
  v12 = (void **)off_26D3F68;
  *(void ***)((char *)&v12 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v13 = 0;
  return sub_21B6560(&v18);
}


int __fastcall BlockPos::randomFloat(BlockPos *this)
{
  int v5; // r0@1
  int result; // r0@1

  __asm { VLDR            S2, =0.000015259 }
  v5 = 116129781 * *((_DWORD *)this + 2) ^ 3129871 * *(_QWORD *)this ^ (*(_QWORD *)this >> 32);
  _R0 = (unsigned int)(v5 * (42317861 * v5 + 11)) >> 16;
  __asm
  {
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
    VMUL.F32        S0, S0, S2
    VMOV            R0, S0
  }
  return result;
}


int __fastcall BlockPos::neighbor(int result, int a2, int a3)
{
  int v3; // r2@1
  __int64 v4; // kr00_8@1
  __int64 v5; // kr08_8@1
  int v6; // r1@1

  v3 = 3 * a3;
  v4 = *(_QWORD *)a2;
  v5 = *(_QWORD *)&Facing::DIRECTION[v3 + 1];
  v6 = *(_DWORD *)(a2 + 8) + HIDWORD(v5);
  *(_DWORD *)result = Facing::DIRECTION[v3] + v4;
  *(_DWORD *)(result + 4) = v5 + HIDWORD(v4);
  *(_DWORD *)(result + 8) = v6;
  return result;
}


int __fastcall BlockPos::BlockPos(int a1, float a2, float a3, float a4)
{
  int v4; // r6@1
  float v5; // r4@1
  float v6; // r5@1
  int result; // r0@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  _R0 = floorf(a2);
  __asm
  {
    VMOV            S0, R0
    VCVTR.S32.F32   S16, S0
  }
  _R0 = floorf(v6);
    VSTR            S16, [R6]
  _R0 = floorf(v5);
    VSTR            S16, [R6,#4]
  result = v4;
    VCVTR.S32.F32   S0, S0
    VSTR            S0, [R6,#8]
  return result;
}


int __fastcall BlockPos::BlockPos(int a1, int a2)
{
  int v2; // r4@1
  float v3; // r5@1
  float v4; // r6@1
  int result; // r0@1

  v2 = a1;
  v3 = *(float *)(a2 + 4);
  v4 = *(float *)(a2 + 8);
  _R0 = floorf(*(float *)a2);
  __asm
  {
    VMOV            S0, R0
    VCVTR.S32.F32   S16, S0
  }
  _R0 = floorf(v3);
    VSTR            S16, [R4]
  _R0 = floorf(v4);
    VSTR            S16, [R4,#4]
  result = v2;
    VCVTR.S32.F32   S0, S0
    VSTR            S0, [R4,#8]
  return result;
}


void __fastcall BlockPos::center(BlockPos *this, int _R1)
{
  BlockPos::center(this, _R1);
}


int __fastcall BlockPos::BlockPos(int result, __int64 *a2, int a3)
{
  __int64 v3; // kr00_8@1

  v3 = *a2;
  *(_DWORD *)result = 16 * (unsigned __int64)*a2;
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 8) = 16 * HIDWORD(v3);
  return result;
}


int __fastcall BlockPos::relative(int result, int a2, int a3, int a4)
{
  signed int v4; // lr@1
  signed int v5; // r12@1
  int v6; // r4@7
  int v7; // r5@9 OVERLAPPED
  int v8; // r6@9 OVERLAPPED
  int v9; // r1@9
  int v10; // r6@11 OVERLAPPED
  int v11; // r5@13

  a3 = (unsigned __int8)a3;
  v4 = 0;
  v5 = 0;
  if ( (unsigned __int8)a3 == 3 )
    v4 = 1;
  if ( a3 == 5 )
    v5 = 1;
  if ( a3 == 4 )
    v5 = -1;
  v6 = a3;
  if ( a3 != 1 )
    v6 = 0;
  *(_QWORD *)&v7 = *(_QWORD *)a2;
  v9 = *(_DWORD *)(a2 + 8);
  if ( !a3 )
    v6 = -1;
  v10 = v8 + v6 * a4;
  if ( a3 == 2 )
    v4 = -1;
  v11 = v7 + v5 * a4;
  *(_QWORD *)result = *(_QWORD *)(&v10 - 1);
  *(_DWORD *)(result + 8) = v9 + v4 * a4;
  return result;
}


int __fastcall BlockPos::randomSeed(BlockPos *this)
{
  int v1; // r0@1

  v1 = 116129781 * *((_DWORD *)this + 2) ^ 3129871 * *(_QWORD *)this ^ (*(_QWORD *)this >> 32);
  return v1 * (42317861 * v1 + 11);
}
