

int __fastcall AgentLookControl::tick(AgentLookControl *this)
{
  int v2; // r4@1
  float v9; // r3@1
  float v18; // r3@2
  int v19; // r0@2
  float v21; // r3@2
  int v22; // r1@2
  int result; // r0@4
  float v25; // [sp+4h] [bp-3Ch]@2

  _R5 = this;
  v2 = *((_DWORD *)this + 1);
  _R0 = &AgentLookControl::sBaseYMax;
  __asm { VLDR            S16, [R0] }
  _R0 = Agent::getMoveSpeedScalar(*((Agent **)_R5 + 1));
  __asm
  {
    VMOV            S0, R0
    VMUL.F32        S0, S0, S16
    VSTR            S0, [R5,#8]
  }
  *(_DWORD *)(v2 + 120) = 0;
  if ( *((_BYTE *)_R5 + 16) )
    *((_BYTE *)_R5 + 16) = 0;
    Entity::getAttachPos((AABB *)&v25, v2, 3, 0);
    __asm
    {
      VLDR            S0, [R5,#0x14]
      VLDR            S4, [SP,#0x40+var_3C]
      VLDR            S2, [R5,#0x1C]
      VLDR            S6, [SP,#0x40+var_34]
      VSUB.F32        S0, S0, S4
      VLDR            S16, [R5,#0x18]
      VSUB.F32        S2, S2, S6
      VLDR            S18, [SP,#0x40+var_38]
      VMUL.F32        S4, S0, S0
      VCVT.F64.F32    D0, S0
      VMUL.F32        S6, S2, S2
      VCVT.F64.F32    D1, S2
      VMOV            R0, R1, D1
      VMOV            R2, R3, D0
      VADD.F32        S4, S6, S4
      VSQRT.F32       S20, S4
    }
    _R0 = atan2(_R0, _R2);
    __asm { VSUB.F32        S0, S16, S18 }
    _R6 = LODWORD(_R0);
      VCVT.F64.F32    D1, S20
      VMOV            R2, R3, D1
      VMOV            R0, R1, D0
    _R0 = COERCE_UNSIGNED_INT64(atan2(_R0, _R2));
      VMOV            D1, R0, R1
      VMOV            D2, R6, R7
    _R2 = &mce::Math::RADDEG;
      VLDR            S0, [R2]
      VMUL.F64        D1, D1, D0
      VCVT.F32.F64    S2, D1
      VMOV            R1, S2
      VLDR            D1, =-90.0
      VMUL.F64        D0, D0, D2
      VADD.F64        D0, D0, D1
      VCVT.F32.F64    S16, D0
    v19 = mce::Math::clampRotate(*(mce::Math **)(v2 + 120), COERCE_FLOAT(_R1 ^ 0x80000000), *((float *)_R5 + 3), v18);
    __asm { VMOV            R1, S16 }
    *(_DWORD *)(v2 + 120) = v19;
    v22 = mce::Math::clampRotate(*(mce::Math **)(v2 + 3412), _R1, 85.0, v21);
    _R2 = *((float *)_R5 + 2);
  else
    __asm { VMOV            R2, S0 }
    v22 = *(_DWORD *)(v2 + 3412);
  result = mce::Math::clampRotate(*(mce::Math **)(v2 + 3420), *(float *)&v22, _R2, v9);
  *(_DWORD *)(v2 + 3420) = result;
  return result;
}


int __fastcall AgentLookControl::AgentLookControl(LookControl *a1, Mob *a2)
{
  int result; // r0@1

  result = LookControl::LookControl(a1, a2);
  *(_DWORD *)result = &off_26EDC68;
  *(_DWORD *)(result + 8) = AgentLookControl::sBaseYMax;
  return result;
}
