

int __fastcall FlyMoveControl::tick(FlyMoveControl *this)
{
  int result; // r0@1
  AttributeInstance *v12; // r0@5
  int v16; // r1@5
  __int64 v17; // r0@5
  __int64 v18; // r2@5
  int v20; // t1@5

  _R4 = this;
  result = *((_BYTE *)this + 24);
  if ( result )
  {
    _R0 = *((_DWORD *)_R4 + 1);
    __asm
    {
      VLDR            S0, [R4,#8]
      VLDR            S2, [R4,#0xC]
      VLDR            S6, [R0,#0x48]
      VLDR            S10, [R0,#0x10C]
      VSUB.F32        S20, S0, S6
      VLDR            S4, [R4,#0x10]
      VSUB.F32        S18, S2, S10
      VLDR            S8, [R0,#0x50]
    }
    *((_BYTE *)_R4 + 24) = 0;
      VSUB.F32        S16, S4, S8
      VMUL.F32        S0, S20, S20
      VMUL.F32        S2, S18, S18
      VMUL.F32        S4, S16, S16
      VADD.F32        S0, S2, S0
      VADD.F32        S0, S0, S4
      VMOV            R0, S0
    _R0 = j_mce::Math::sqrt(_R0, 0.0);
    __asm { VMOV            S22, R0 }
    _R0 = j_AABB::getSize((AABB *)(*((_DWORD *)_R4 + 1) + 264));
      VMOV            S0, R0
      VCMPE.F32       S22, S0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      __asm { VMOV.F32        S0, #0.25 }
      _R0 = *((_DWORD *)_R4 + 1);
      __asm
      {
        VLDR            S2, [R0,#0x6C]
        VMUL.F32        S2, S2, S0
        VSTR            S2, [R0,#0x6C]
        VLDR            S2, [R0,#0x70]
        VSTR            S2, [R0,#0x70]
        VLDR            S2, [R0,#0x74]
        VMUL.F32        S0, S2, S0
        VSTR            S0, [R0,#0x74]
      }
    v12 = (AttributeInstance *)(*(int (**)(void))(**((_DWORD **)_R4 + 1) + 1004))();
    _R0 = j_AttributeInstance::getCurrentValue(v12);
      VMOV.F32        S0, #1.0
      VLDR            S24, =0.05
    _R5 = *((_DWORD *)_R4 + 1);
      VMUL.F32        S2, S18, S24
      VMOV            S18, R0
      VDIV.F32        S22, S0, S22
      VMUL.F32        S0, S20, S24
      VMUL.F32        S26, S2, S22
      VMUL.F32        S0, S0, S22
      VMUL.F32        S20, S0, S18
    _R0 = j_MoveControl::getSpeedModifier(_R4);
      VLDR            S8, [R5,#0x6C]
      VMUL.F32        S2, S16, S24
      VMUL.F32        S4, S20, S0
      VMUL.F32        S6, S26, S18
      VMUL.F32        S2, S2, S22
      VADD.F32        S4, S4, S8
      VMUL.F32        S6, S6, S0
      VMUL.F32        S2, S2, S18
      VSTR            S4, [R5,#0x6C]
      VLDR            S4, [R5,#0x70]
      VADD.F32        S4, S4, S6
      VMUL.F32        S0, S2, S0
      VSTR            S4, [R5,#0x70]
      VLDR            S2, [R5,#0x74]
      VSTR            S0, [R5,#0x74]
    v16 = *((_DWORD *)_R4 + 1);
    LODWORD(v17) = *(_DWORD *)(v16 + 108);
    HIDWORD(v17) = *(_DWORD *)(v16 + 116);
    _R0 = j_mce::Math::atan2(v17, v18);
    __asm { VMOV            S2, R0 }
    v20 = *((_DWORD *)_R4 + 1);
    _R1 = &mce::Math::RADDEG;
      VLDR            S0, [R1]
      VNMUL.F32       S0, S0, S2
      VSTR            S0, [R0,#0x7C]
    result = *((_DWORD *)_R4 + 1);
    *(_DWORD *)(result + 3412) = *(_DWORD *)(result + 124);
  }
  return result;
}


_DWORD *__fastcall FlyMoveControl::FlyMoveControl(int a1, int a2)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)j_MoveControl::MoveControl(a1, a2);
  *result = &off_271A4F8;
  return result;
}
