

int __fastcall BodyControl::clientTick(BodyControl *this)
{
  Level *v2; // r0@1
  int v3; // r0@1
  float v4; // r1@1
  float v5; // r3@1
  int result; // r0@5
  signed int v14; // r0@8

  _R4 = this;
  v2 = (Level *)Entity::getLevel(*((Entity **)this + 1));
  v3 = Level::isClientSide(v2);
  _R2 = *((_DWORD *)_R4 + 1);
  if ( v3 == 1 )
  {
    __asm
    {
      VLDR            S0, [R2,#0x48]
      VLDR            S6, [R2,#0x54]
      VLDR            S2, [R2,#0x4C]
      VLDR            S8, [R2,#0x58]
      VSUB.F32        S0, S6, S0
      VLDR            S4, [R2,#0x50]
      VSUB.F32        S2, S8, S2
      VLDR            S10, [R2,#0x5C]
      VSUB.F32        S4, S10, S4
      VMUL.F32        S0, S0, S0
      VMUL.F32        S2, S2, S2
      VMUL.F32        S4, S4, S4
      VADD.F32        S0, S2, S0
      VADD.F32        S0, S0, S4
    }
  }
  else
      VLDR            S0, [R2,#0x6C]
      VLDR            S2, [R2,#0x74]
  _R0 = &"?7?4+\v";
  __asm
    VLDR            S2, [R0]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    _R0 = _R2 + 3420;
      VLDR            S0, [R4,#0xC]
      VMOV.F32        S2, #15.0
      VLDR            S16, [R0]
      VSUB.F32        S0, S16, S0
      VABS.F32        S0, S0
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      v14 = *((_DWORD *)_R4 + 2);
      LODWORD(v4) = v14 + 1;
      *((_DWORD *)_R4 + 2) = v14 + 1;
      if ( v14 < 10 )
      {
        __asm { VLDR            S18, =75.0 }
      }
      else
        _R0 = v14 - 9;
        __asm
        {
          VLDR            S2, =-0.1
          VMOV.F32        S4, #1.0
          VMOV            S0, R0
          VCVT.F32.S32    S0, S0
          VMUL.F32        S0, S0, S2
          VLDR            S2, =0.0
          VADD.F32        S0, S0, S4
          VCMPE.F32       S0, #0.0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
          __asm { VMOVLT.F32      S0, S2 }
          VLDR            S2, =75.0
          VMUL.F32        S18, S0, S2
    else
      __asm { VLDR            S18, =75.0 }
      *((_DWORD *)_R4 + 2) = 0;
      __asm { VSTR            S16, [R4,#0xC] }
    _R0 = _R2 + 3412;
      VLDR            S0, [R0]
      VMOV            R0, S0
    _R0 = mce::Math::wrapDegrees(_R0, v4);
      VNEG.F32        S0, S18
      VMOV            S2, R0
      VCMPE.F32       S2, S0
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S2, S0 }
      VCMPE.F32       S2, S18
    if ( !(_NF ^ _VF) )
      __asm { VMOVGE.F32      S2, S18 }
    __asm { VSUB.F32        S0, S16, S2 }
    result = *((_DWORD *)_R4 + 1) + 3412;
    __asm { VSTR            S0, [R0] }
    *(_DWORD *)(*((_DWORD *)_R4 + 1) + 3412) = mce::Math::clampRotate(
                                                 *(mce::Math **)(_R2 + 3412),
                                                 *(float *)(_R2 + 124),
                                                 25.0,
                                                 v5);
    result = *(_DWORD *)(*((_DWORD *)_R4 + 1) + 3420);
    *((_DWORD *)_R4 + 2) = 0;
    *((_DWORD *)_R4 + 3) = result;
  return result;
}


int __fastcall BodyControl::BodyControl(int result, int a2)
{
  *(_DWORD *)result = &off_26EDC7C;
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  return result;
}
