

char *__fastcall ChunkPos::getMiddleBlockPosition(ChunkPos *this, int a2, int a3)
{
  __int64 v3; // kr00_8@1

  v3 = *(_QWORD *)a2;
  *(_DWORD *)this = 16 * *(_QWORD *)a2 | 8;
  *((_DWORD *)this + 1) = a3;
  *((_DWORD *)this + 2) = 16 * HIDWORD(v3) | 8;
  return (char *)this + 12;
}


int __fastcall ChunkPos::distanceToSqr(ChunkPos *this, const Entity *_R1)
{
  __int64 v2; // kr00_8@1
  int result; // r0@1

  v2 = *(_QWORD *)this;
  _R0 = 16 * *(_QWORD *)this | 8;
  __asm { VMOV            S0, R0 }
  _R0 = 16 * HIDWORD(v2) | 8;
  __asm
  {
    VMOV            S2, R0
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VLDR            S4, [R1,#0x48]
    VLDR            S6, [R1,#0x50]
    VSUB.F32        S0, S0, S4
    VSUB.F32        S2, S2, S6
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


int __fastcall ChunkPos::ChunkPos(int a1, int a2)
{
  int v2; // r4@1
  int v4; // [sp+4h] [bp-14h]@1
  int v5; // [sp+Ch] [bp-Ch]@1

  v2 = a1;
  BlockPos::BlockPos((int)&v4, a2);
  *(_DWORD *)v2 = v4 >> 4;
  *(_DWORD *)(v2 + 4) = v5 >> 4;
  return v2;
}


int __fastcall ChunkPos::ChunkPos(int result, int a2)
{
  *(_DWORD *)result = *(_DWORD *)a2 >> 4;
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 8) >> 4;
  return result;
}
