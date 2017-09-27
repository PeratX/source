

int __fastcall RopePoint::RopePoint(int result, int a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r12@1
  int v4; // r2@1
  int v5; // r3@1

  v2 = *(_QWORD *)a2;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 8);
  v3 = result + 12;
  *(_QWORD *)result = v2;
  v4 = *(&Vec3::ZERO + 1);
  v5 = dword_2822498;
  *(_DWORD *)v3 = Vec3::ZERO;
  *(_DWORD *)(v3 + 4) = v4;
  *(_DWORD *)(v3 + 8) = v5;
  return result;
}


int __fastcall RopePoint::update(int result, const Vec3 *_R1)
{
  __asm
  {
    VLDR            S0, [R0]
    VLDR            S2, [R0,#0xC]
    VADD.F32        S0, S0, S2
    VSTR            S0, [R0]
    VLDR            S2, [R0,#4]
    VLDR            S4, [R0,#0x10]
    VADD.F32        S2, S2, S4
    VSTR            S2, [R0,#4]
    VLDR            S4, [R0,#8]
    VLDR            S6, [R0,#0x14]
    VADD.F32        S4, S4, S6
    VSTR            S4, [R0,#8]
    VLDR            S6, [R1]
    VLDR            S8, [R1,#4]
    VLDR            S10, [R1,#8]
    VSUB.F32        S0, S6, S0
    VSUB.F32        S2, S8, S2
    VSUB.F32        S4, S10, S4
    VSTR            S0, [R0,#0xC]
    VSTR            S2, [R0,#0x10]
    VSTR            S4, [R0,#0x14]
  }
  return result;
}


void __fastcall RopePoint::getInterpolated(RopePoint *this, float _R1, int _R2)
{
  __asm
  {
    VLDR            S6, [R1,#0xC]
    VMOV            S12, R2
    VLDR            S8, [R1,#0x10]
    VLDR            S10, [R1,#0x14]
    VMUL.F32        S6, S6, S12
    VMUL.F32        S8, S8, S12
    VLDR            S0, [R1]
    VMUL.F32        S10, S10, S12
    VLDR            S2, [R1,#4]
    VLDR            S4, [R1,#8]
    VADD.F32        S0, S0, S6
    VADD.F32        S2, S2, S8
    VADD.F32        S4, S4, S10
    VSTR            S0, [R0]
    VSTR            S2, [R0,#4]
    VSTR            S4, [R0,#8]
  }
}
