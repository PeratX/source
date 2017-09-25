

int __fastcall SubChunkPos::SubChunkPos(int a1, const BlockPos *a2)
{
  int v2; // r5@1
  const BlockPos *v3; // r4@1
  int v5; // [sp+0h] [bp-18h]@1
  int v6; // [sp+4h] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  j_ChunkPos::ChunkPos((ChunkPos *)&v5, a2);
  *(_DWORD *)v2 = v5;
  *(_DWORD *)(v2 + 4) = *((_DWORD *)v3 + 1) / 16;
  *(_DWORD *)(v2 + 8) = v6;
  return v2;
}


int __fastcall SubChunkPos::SubChunkPos(int result, unsigned __int64 *a2, __int64 a3)
{
  HIDWORD(a3) = *a2 >> 32;
  *(_DWORD *)result = *a2;
  *(_QWORD *)(result + 4) = a3;
  return result;
}


int __fastcall SubChunkPos::randomFloat(SubChunkPos *this)
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


int __fastcall SubChunkPos::relative(int result, int a2, int a3, int a4)
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


int __fastcall SubChunkPos::randomSeed(SubChunkPos *this)
{
  int v1; // r0@1

  v1 = 116129781 * *((_DWORD *)this + 2) ^ 3129871 * *(_QWORD *)this ^ (*(_QWORD *)this >> 32);
  return v1 * (42317861 * v1 + 11);
}


void __fastcall SubChunkPos::asFloats(SubChunkPos *this, int _R1)
{
  __asm
  {
    VLDR            S0, [R1]
    VLDR            S2, [R1,#4]
    VLDR            S4, [R1,#8]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VSTR            S0, [R0]
    VSTR            S2, [R0,#4]
    VSTR            S4, [R0,#8]
  }
}


int __fastcall SubChunkPos::neighbor(SubChunkPos *this, int a2, int a3)
{
  SubChunkPos *v3; // r5@1
  int v4; // r4@1
  _DWORD *v5; // r6@1
  int result; // r0@1
  int v7; // r1@1
  int v8; // r2@1
  int v9; // [sp+0h] [bp-18h]@1
  int v10; // [sp+4h] [bp-14h]@1

  v3 = this;
  v4 = a2;
  v5 = &Facing::DIRECTION[3 * a3];
  j_ChunkPos::ChunkPos((ChunkPos *)&v9, (const BlockPos *)&Facing::DIRECTION[3 * a3]);
  result = v9 + *(_QWORD *)v4;
  v7 = v10 + *(_DWORD *)(v4 + 8);
  v8 = (*(_QWORD *)v4 >> 32) + v5[1] / 16;
  *(_DWORD *)v3 = result;
  *((_DWORD *)v3 + 1) = v8;
  *((_DWORD *)v3 + 2) = v7;
  return result;
}


int __fastcall SubChunkPos::SubChunkPos(int a1, float a2, float a3, float a4)
{
  int v4; // r6@1
  float v5; // r4@1
  float v6; // r5@1
  int result; // r0@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  _R0 = j_floorf(a2);
  __asm
  {
    VMOV            S0, R0
    VCVTR.S32.F32   S16, S0
  }
  _R0 = j_floorf(v6);
    VSTR            S16, [R6]
  _R0 = j_floorf(v5);
    VSTR            S16, [R6,#4]
  result = v4;
    VCVTR.S32.F32   S0, S0
    VSTR            S0, [R6,#8]
  return result;
}


void __fastcall SubChunkPos::asFloats(SubChunkPos *this, int _R1)
{
  SubChunkPos::asFloats(this, _R1);
}
