

int __fastcall HitResult::distanceTo(HitResult *this, const Entity *_R1)
{
  int result; // r0@1

  __asm
  {
    VLDR            S0, [R1,#0x48]
    VLDR            S6, [R0,#0x14]
    VLDR            S2, [R1,#0x4C]
    VLDR            S8, [R0,#0x18]
    VSUB.F32        S0, S6, S0
    VLDR            S4, [R1,#0x50]
    VSUB.F32        S2, S8, S2
    VLDR            S10, [R0,#0x1C]
    VSUB.F32        S4, S10, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VMOV            R0, S0
  }
  return result;
}


int __fastcall HitResult::HitResult(int result)
{
  int v1; // r3@1
  int v2; // r1@1

  *(_DWORD *)result = 3;
  *(_BYTE *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  v1 = *(&Vec3::ZERO + 1);
  v2 = dword_2822498;
  *(_DWORD *)(result + 20) = Vec3::ZERO;
  *(_DWORD *)(result + 24) = v1;
  *(_QWORD *)(result + 28) = (unsigned int)v2;
  *(_BYTE *)(result + 36) = 0;
  *(_BYTE *)(result + 64) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 56) = 0;
  *(_DWORD *)(result + 60) = 0;
  return result;
}


int __fastcall HitResult::setOutOfRange(int result)
{
  signed int v1; // r2@1

  v1 = 2;
  if ( !*(_DWORD *)(result + 32) )
    v1 = 3;
  *(_DWORD *)result = v1;
  return result;
}


int __fastcall HitResult::HitResult(int result, int a2)
{
  __int64 v2; // kr00_8@1
  unsigned int v3; // r1@1

  *(_DWORD *)result = 3;
  *(_BYTE *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  v2 = *(_QWORD *)a2;
  v3 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(result + 20) = v2;
  *(_QWORD *)(result + 28) = v3;
  *(_BYTE *)(result + 36) = 0;
  *(_BYTE *)(result + 64) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 56) = 0;
  *(_DWORD *)(result + 60) = 0;
  return result;
}


int __fastcall HitResult::HitResult(int result, int a2, char a3, int a4)
{
  int v4; // r1@1
  int v5; // r2@1

  *(_DWORD *)result = 0;
  *(_BYTE *)(result + 4) = a3;
  *(_DWORD *)(result + 8) = *(_DWORD *)a2;
  *(_DWORD *)(result + 12) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a2 + 8);
  v4 = *(_DWORD *)a4;
  v5 = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(result + 28) = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(result + 24) = v5;
  *(_DWORD *)(result + 20) = v4;
  *(_DWORD *)(result + 32) = 0;
  *(_BYTE *)(result + 36) = 0;
  *(_BYTE *)(result + 64) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 56) = 0;
  *(_DWORD *)(result + 60) = 0;
  return result;
}


int __fastcall HitResult::HitResult(int result, int a2, int a3)
{
  __int64 v3; // kr00_8@1
  int v4; // r2@1

  *(_DWORD *)result = 1;
  *(_BYTE *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  v3 = *(_QWORD *)a3;
  v4 = *(_DWORD *)(a3 + 8);
  *(_QWORD *)(result + 20) = v3;
  *(_DWORD *)(result + 28) = v4;
  *(_DWORD *)(result + 32) = a2;
  *(_BYTE *)(result + 36) = 0;
  *(_BYTE *)(result + 64) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 56) = 0;
  *(_DWORD *)(result + 60) = 0;
  return result;
}


int __fastcall HitResult::HitResult(int result, int a2)
{
  __int64 v2; // kr00_8@1
  __int16 v3; // r2@1
  __int64 v4; // kr08_8@1

  *(_DWORD *)result = *(_DWORD *)a2;
  *(_BYTE *)(result + 4) = *(_BYTE *)(a2 + 4);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a2 + 16);
  v2 = *(_QWORD *)(a2 + 20);
  *(_DWORD *)(result + 28) = *(_DWORD *)(a2 + 28);
  *(_QWORD *)(result + 20) = v2;
  *(_DWORD *)(result + 32) = *(_DWORD *)(a2 + 32);
  v3 = *(_WORD *)(a2 + 36);
  *(_BYTE *)(result + 36) = v3;
  *(_BYTE *)(result + 37) = HIBYTE(v3);
  *(_DWORD *)(result + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(result + 44) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(result + 48) = *(_DWORD *)(a2 + 48);
  v4 = *(_QWORD *)(a2 + 52);
  *(_DWORD *)(result + 60) = *(_DWORD *)(a2 + 60);
  *(_QWORD *)(result + 52) = v4;
  *(_BYTE *)(result + 64) = *(_BYTE *)(a2 + 64);
  return result;
}


int __fastcall HitResult::HitResult(int result, int a2)
{
  int v2; // r3@1

  *(_DWORD *)result = 1;
  *(_BYTE *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  v2 = *(_DWORD *)(a2 + 80);
  *(_QWORD *)(result + 20) = *(_QWORD *)(a2 + 72);
  *(_DWORD *)(result + 28) = v2;
  *(_DWORD *)(result + 32) = a2;
  *(_BYTE *)(result + 36) = 0;
  *(_BYTE *)(result + 64) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 56) = 0;
  *(_DWORD *)(result + 60) = 0;
  return result;
}
