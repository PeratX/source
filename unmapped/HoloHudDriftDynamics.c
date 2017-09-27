

int __fastcall HoloHudDriftDynamics::updateAndGenerateMatrixPatch(HoloHudDriftDynamics *this, HoloHudDriftDynamics *a2)
{
  HoloHudDriftDynamics *v2; // r5@1
  HoloHudDriftDynamics *v3; // r4@1
  int result; // r0@1

  v2 = a2;
  v3 = this;
  HoloHudDriftDynamics::_generateOverlayPatch(a2);
  _aeabi_memclr4(v3, 60);
  *(_DWORD *)v3 = *(_DWORD *)v2;
  *((_DWORD *)v3 + 1) = *((_DWORD *)v2 + 1);
  *((_DWORD *)v3 + 2) = *((_DWORD *)v2 + 2);
  *((_DWORD *)v3 + 3) = *((_DWORD *)v2 + 3);
  *((_DWORD *)v3 + 4) = *((_DWORD *)v2 + 4);
  *((_DWORD *)v3 + 5) = *((_DWORD *)v2 + 5);
  *((_DWORD *)v3 + 6) = *((_DWORD *)v2 + 6);
  *((_DWORD *)v3 + 7) = *((_DWORD *)v2 + 7);
  *((_DWORD *)v3 + 8) = *((_DWORD *)v2 + 8);
  *((_DWORD *)v3 + 9) = *((_DWORD *)v2 + 9);
  *((_DWORD *)v3 + 10) = *((_DWORD *)v2 + 10);
  *((_DWORD *)v3 + 11) = *((_DWORD *)v2 + 11);
  *((_DWORD *)v3 + 12) = *((_DWORD *)v2 + 12);
  *((_DWORD *)v3 + 13) = *((_DWORD *)v2 + 13);
  *((_DWORD *)v3 + 14) = *((_DWORD *)v2 + 14);
  result = *((_DWORD *)v2 + 15);
  *((_DWORD *)v3 + 15) = result;
  return result;
}


HoloHudDriftDynamics *__fastcall HoloHudDriftDynamics::_updateDriftStateVector(HoloHudDriftDynamics *this)
{
  HoloHudDriftDynamics *result; // r0@1
  int v7; // r9@10
  int v12; // r0@10
  float v13; // r3@10
  __int64 v16; // kr00_8@10
  __int64 v17; // kr08_8@10
  int v27; // r0@16
  void **v48; // r0@47
  char v57; // [sp+10h] [bp-140h]@12
  float v58; // [sp+50h] [bp-100h]@10
  __int64 v59; // [sp+80h] [bp-D0h]@12
  __int64 v60; // [sp+88h] [bp-C8h]@12
  float v61; // [sp+94h] [bp-BCh]@10
  float v63; // [sp+9Ch] [bp-B4h]@10
  int v64; // [sp+A0h] [bp-B0h]@10
  char v66; // [sp+A8h] [bp-A8h]@12

  _R4 = this;
  result = (HoloHudDriftDynamics *)getTimeS();
  __asm
  {
    VLDR            D1, [R4,#0x70]
    VMOV            D0, R0, R1
    VSUB.F64        D1, D0, D1
    VCVT.F32.F64    S4, D1
    VLDR            S2, =1.1921e-7
    VCMPE.F32       S4, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !(_NF ^ _VF) )
    __asm
    {
      VMOV.F32        S2, #0.25
      VCMPE.F32       S4, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VSTR            D0, [R4,#0x70] }
      return result;
      VLDR            S2, [R4,#0x40]
      VMOV.F32        S20, #0.5
      VSTR            S4, [SP,#0x150+var_144]
      VLDR            S4, [R4,#0x44]
      VMUL.F32        S2, S2, S2
      VLDR            S6, [R4,#0x48]
      VMUL.F32        S4, S4, S4
      VMUL.F32        S6, S6, S6
      VADD.F32        S2, S4, S2
      VADD.F32        S2, S2, S6
      VSQRT.F32       S2, S2
      VCMPE.F32       S2, S20
    if ( _NF ^ _VF )
      *((_DWORD *)_R4 + 16) = 0;
      *((_DWORD *)_R4 + 17) = 0;
      *((_DWORD *)_R4 + 18) = -1082130432;
      VLDR            S2, [R4,#0x58]
      VLDR            S4, [R4,#0x5C]
      VLDR            S6, [R4,#0x60]
      *((_DWORD *)_R4 + 22) = 0;
      *((_DWORD *)_R4 + 23) = 0;
      *((_DWORD *)_R4 + 24) = -1082130432;
    __asm { VSTR            D0, [R4,#0x70] }
    v7 = ClientInstance::getHoloInput(*((ClientInstance **)_R4 + 33));
    HolographicPlatform::getTransformZDir((int)&v63, v7, 16, 15, 0);
      VLDR            S0, [SP,#0x150+var_B4]
      VLDR            S2, [SP,#0x150+var_AC]
      VMUL.F32        S0, S0, S0
      VADD.F32        S0, S2, S0
      VSQRT.F32       S0, S0
      VMOV            R1, S0
    _R7 = atan2f(COERCE_FLOAT(v64 ^ 0x80000000), _R1);
    _R0 = ClientInstance::getGameRenderer(*((ClientInstance **)_R4 + 33));
    __asm { VLDR            S22, [R0,#0x30C] }
    __asm { VLDR            S16, [R0,#0x318] }
    v12 = ClientInstance::getCameraTargetEntity(*((ClientInstance **)_R4 + 33));
    Entity::getInterpolatedRotation((Entity *)&v61, *(float *)&v12, 1.0, v13);
    _aeabi_memclr8(&v58, 52);
    __asm { VMOV.F32        S6, #1.0 }
    _R1 = &Matrix::IDENTITY;
    _R0 = &mce::Math::RADDEG;
      VLDR            S2, [R1,#0x10]
      VLDR            S0, [R0]
      VSTR            S2, [SP,#0x150+var_148]
      VMOV            S2, R7
      VLDR            S21, [R1,#4]
      VMUL.F32        S0, S2, S0
      VLDR            S23, [R1,#8]
      VLDR            S25, [R1,#0xC]
      VLDR            S28, [R1,#0x14]
      VLDR            S30, [R1,#0x18]
      VLDR            S17, [R1,#0x1C]
      VLDR            S19, [R1]
    v16 = *(_QWORD *)&qword_27E8A18;
    __asm { VSUB.F32        S0, S0, S22 }
    v17 = *(_QWORD *)&qword_27E8A20;
      VLDR            S4, [SP,#0x150+var_BC]
      VLDR            S27, [R1,#0x20]
      VNEG.F32        S2, S4
      VLDR            S4, =-0.017453
      VLDR            S31, [R1,#0x24]
      VLDR            S24, [R1,#0x28]
      VLDR            S18, [R1,#0x2C]
      VCMPE.F32       S0, #0.0
      VSTR            S2, [SP,#0x150+var_BC]
      VMOV.F32        S2, S6
      VLDR            S29, [SP,#0x150+var_B8]
      VMUL.F32        S4, S29, S4
      VMOV            R7, S4
      __asm { VMOVGT.F32      S2, S20 }
      VMUL.F32        S2, S16, S2
      VLDR            S2, =0.017453
      VMUL.F32        S16, S0, S2
    _R6 = cosf(_R7);
    _R0 = sinf(_R7);
      VMOV            R7, S16
      VMOV            S22, R0
      VMOV            S16, R6
      VMUL.F32        S0, S25, S22
      VMUL.F32        S2, S18, S16
      VMUL.F32        S4, S23, S22
      VMUL.F32        S6, S24, S16
      VADD.F32        S20, S2, S0
      VADD.F32        S26, S6, S4
      VMUL.F32        S5, S18, S22
      VMUL.F32        S7, S25, S16
      VMUL.F32        S12, S21, S22
      VMUL.F32        S14, S31, S16
      VMUL.F32        S1, S19, S22
      VMUL.F32        S3, S27, S16
      VMUL.F32        S9, S23, S16
      VMUL.F32        S11, S21, S16
      VSUB.F32        S5, S7, S5
      VMUL.F32        S7, S24, S22
      VLDR            S24, [SP,#0x150+var_148]
      VADD.F32        S12, S14, S12
      VMUL.F32        S18, S27, S22
      VMUL.F32        S16, S19, S16
      VADD.F32        S1, S3, S1
      VMOV            S0, R0
      VMOV            S2, R6
      VSUB.F32        S7, S9, S7
      VMUL.F32        S9, S31, S22
      VMUL.F32        S14, S12, S2
      VSUB.F32        S16, S16, S18
      VMUL.F32        S3, S1, S2
      VMUL.F32        S4, S20, S0
      VMUL.F32        S6, S20, S2
      VMUL.F32        S15, S17, S0
      VSUB.F32        S9, S11, S9
      VMUL.F32        S11, S28, S0
      VMUL.F32        S18, S17, S2
      VSTR            S16, [SP,#0x150+var_100]
      VMUL.F32        S8, S26, S2
      VMUL.F32        S13, S30, S0
      VMUL.F32        S10, S26, S0
      VMUL.F32        S20, S30, S2
      VMUL.F32        S22, S28, S2
      VSTR            S9, [SP,#0x150+var_FC]
      VMUL.F32        S12, S12, S0
      VSTR            S7, [SP,#0x150+var_F8]
      VMUL.F32        S1, S1, S0
      VSTR            S5, [SP,#0x150+var_F4]
      VMUL.F32        S0, S24, S0
      VMUL.F32        S2, S24, S2
      VNEG.F32        S24, S29
      VADD.F32        S10, S10, S20
      VADD.F32        S4, S4, S18
      VADD.F32        S12, S12, S22
      VSUB.F32        S14, S14, S11
      VSUB.F32        S0, S3, S0
      VADD.F32        S2, S1, S2
      VSUB.F32        S8, S8, S13
      VSTR            S24, [SP,#0x150+var_B8]
      VSUB.F32        S6, S6, S15
      VSTR            S2, [SP,#0x150+var_F0]
      VSTR            S12, [SP,#0x150+var_EC]
      VSTR            S10, [SP,#0x150+var_E8]
      VSTR            S4, [SP,#0x150+var_E4]
      VSTR            S0, [SP,#0x150+var_E0]
      VSTR            S14, [SP,#0x150+var_DC]
      VSTR            S8, [SP,#0x150+var_D8]
      VSTR            S6, [SP,#0x150+var_D4]
    v59 = v16;
    v60 = v17;
    HolographicPlatform::getTransform((int)&v57, v7, 2, 15, 14);
    glm::detail::operator*<float>((int)&v66, (int)&v57, (int)&v58);
      VLDR            S0, [SP,#0x150+var_88]
      VLDR            S2, [SP,#0x150+var_84]
      VMUL.F32        S6, S0, S0
      VLDR            S4, [SP,#0x150+var_80]
      VMUL.F32        S8, S2, S2
      VLDR            S18, =0.0001
      VMUL.F32        S10, S4, S4
      VADD.F32        S6, S8, S6
      VADD.F32        S6, S6, S10
      VSQRT.F32       S6, S6
      VCMPE.F32       S6, S18
      _R6 = *(_QWORD *)&Vec3::ZERO;
      _R8 = dword_2822498;
    else
      __asm
      {
        VDIV.F32        S4, S4, S6
        VDIV.F32        S2, S2, S6
        VDIV.F32        S0, S0, S6
        VMOV            R8, S4
        VMOV            R7, S2
        VMOV            R6, S0
      }
      VMOV            S27, R8
      VLDR            S16, =1.1921e-7
      VMOV            S29, R7
    if ( *((_BYTE *)_R4 + 120) )
      __asm { VMOV            S31, R6 }
      v27 = (int)_R4 + 88;
      __asm { VMOV.F32        S0, S27 }
      *(_QWORD *)v27 = _R6;
      *(_DWORD *)(v27 + 8) = _R8;
        VMOV.F32        S2, S29
        VMOV.F32        S4, S31
      *((_BYTE *)_R4 + 120) = 0;
        VLDR            S4, [R4,#0x58]
        VMOV            S31, R6
        VLDR            S2, [R4,#0x5C]
        VLDR            S0, [R4,#0x60]
      VMUL.F32        S6, S2, S31
      VLDR            S23, =0.0
      VMUL.F32        S8, S4, S29
      VMUL.F32        S10, S0, S29
      VMUL.F32        S12, S2, S27
      VMUL.F32        S14, S4, S27
      VMUL.F32        S1, S0, S31
      VMOV.F32        S21, S23
      VMOV.F32        S19, S23
      VSUB.F32        S8, S8, S6
      VMOV.F32        S17, S23
      VSUB.F32        S6, S12, S10
      VSUB.F32        S10, S1, S14
      VMUL.F32        S12, S8, S8
      VMUL.F32        S14, S6, S6
      VMUL.F32        S1, S10, S10
      VADD.F32        S12, S12, S1
      VSQRT.F32       S12, S12
      VCMPE.F32       S12, S16
        VSUB.F32        S4, S31, S4
        VSUB.F32        S2, S29, S2
        VSUB.F32        S0, S27, S0
        VMUL.F32        S4, S4, S4
        VMUL.F32        S2, S2, S2
        VMUL.F32        S0, S0, S0
        VADD.F32        S2, S2, S4
        VADD.F32        S0, S2, S0
        VSQRT.F32       S0, S0
        VMUL.F32        S17, S0, S8
        VMUL.F32        S19, S0, S10
        VMUL.F32        S21, S0, S6
      VLDR            S28, [R4,#0x40]
      VLDR            S26, [R4,#0x48]
      VCVT.F64.F32    D0, S31
      VCVT.F64.F32    D1, S28
      VCVT.F64.F32    D2, S27
      VCVT.F64.F32    D3, S26
      VMUL.F64        D0, D1, D0
      VMUL.F64        D1, D3, D2
      VADD.F64        D0, D1, D0
      VMOV            R0, R1, D0
    _R0 = acos(_R0);
      VMOV            D0, R0, R1
      VMOV.F32        S22, #3.0
      VCVT.F32.F64    S0, D0
    LODWORD(_R0) = &mce::Math::RADDEG;
      VLDR            S24, [R0]
      VMOV.F32        S25, S23
      VMUL.F32        S0, S0, S24
      VCMPE.F32       S0, S22
        VMOV.F32        S2, #-3.0
        VMUL.F32        S4, S28, S27
        VMUL.F32        S6, S26, S31
        VADD.F32        S0, S0, S2
        VSUB.F32        S2, S6, S4
        VADD.F32        S0, S0, S0
        VMUL.F32        S25, S2, S0
      VMUL.F32        S0, S31, S31
      VLDR            S30, [R4,#0x44]
      VMUL.F32        S2, S27, S27
      VMUL.F32        S4, S28, S28
      VMUL.F32        S6, S26, S26
      VADD.F32        S2, S6, S4
      VCVT.F64.F32    D2, S29
      VCVT.F64.F32    D3, S30
      VCVT.F64.F32    D0, S0
      VCVT.F64.F32    D1, S2
      VMUL.F64        D2, D3, D2
      VADD.F64        D0, D0, D2
    _R0 = COERCE_UNSIGNED_INT64(acos(_R0));
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm { VMOV.F32        S0, S23 }
        VMUL.F32        S2, S30, S31
        VMUL.F32        S4, S28, S29
        VMUL.F32        S8, S26, S29
        VMUL.F32        S10, S30, S27
        VSUB.F32        S6, S4, S2
        VSUB.F32        S4, S10, S8
        VMOV.F32        S10, #-3.0
        VMUL.F32        S2, S6, S6
        VMUL.F32        S8, S4, S4
        VADD.F32        S0, S0, S10
        VADD.F32        S2, S8, S2
        VSQRT.F32       S8, S2
        VADD.F32        S2, S0, S0
        VCMPE.F32       S8, S18
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        _R1 = &Vec3::ZERO;
        _R0 = dword_2822498;
        __asm { VLDR            S0, [R1,#4] }
        _R1 = Vec3::ZERO;
      else
        __asm
        {
          VDIV.F32        S0, S6, S8
          VDIV.F32        S4, S4, S8
          VMOV            R0, S0
          VLDR            S0, =0.0
          VMOV            R1, S4
        }
        VMUL.F32        S4, S0, S2
        VMOV            S0, R0
        VMOV            S6, R1
        VMUL.F32        S0, S0, S2
        VMUL.F32        S23, S6, S2
        VADD.F32        S25, S4, S25
      VLDR            S2, [R4,#0x4C]
      VLDR            S4, [R4,#0x50]
      VLDR            S6, [R4,#0x54]
      VMUL.F32        S12, S6, S6
      VADD.F32        S8, S10, S8
      VLDR            S10, =0.001
      VADD.F32        S8, S8, S12
      VSQRT.F32       S8, S8
      VCMPE.F32       S8, S10
        _R0 = &Vec3::ZERO;
          VLDR            S8, [R0]
          VLDR            S10, [R0,#4]
          VLDR            S12, [R0,#8]
          VDIV.F32        S12, S6, S8
          VDIV.F32        S10, S4, S8
          VDIV.F32        S8, S2, S8
        VSUB.F32        S0, S0, S12
        VSUB.F32        S25, S25, S10
        VSUB.F32        S23, S23, S8
      VSUB.F32        S8, S21, S2
      VLDR            S12, =8.4853
      VSUB.F32        S10, S19, S4
      VSUB.F32        S14, S17, S6
      VMUL.F32        S8, S8, S12
      VMUL.F32        S10, S10, S12
      VMUL.F32        S12, S14, S12
      VADD.F32        S8, S8, S23
      VADD.F32        S10, S10, S25
      VADD.F32        S0, S12, S0
      VLDR            S12, [SP,#0x150+var_144]
      VMUL.F32        S0, S0, S12
      VADD.F32        S2, S8, S2
      VADD.F32        S4, S10, S4
      VADD.F32        S6, S0, S6
      VMUL.F32        S0, S2, S2
      VMUL.F32        S8, S4, S4
      VMUL.F32        S10, S6, S6
      VADD.F32        S0, S8, S0
      VADD.F32        S0, S0, S10
      VSQRT.F32       S8, S0
      VLDR            S0, =0.01
      VCMPE.F32       S8, S0
      _R0 = 0;
      _R1 = 0;
      _R2 = 0;
      __asm { VLDR            S0, =200.0 }
      _R0 = &mce::Math::DEGRAD;
        VLDR            S10, [R0]
        VMUL.F32        S0, S10, S0
        VCMPE.F32       S8, S0
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          VMOV            R2, S2
          VMOV            R0, S6
          VCMPE.F32       S8, S18
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          _R0 = &Vec3::ZERO;
          __asm
          {
            VLDR            S2, [R0]
            VLDR            S4, [R0,#4]
            VLDR            S6, [R0,#8]
          }
        else
            VDIV.F32        S6, S6, S8
            VDIV.F32        S4, S4, S8
            VDIV.F32        S2, S2, S8
          VMUL.F32        S6, S6, S0
          VMUL.F32        S4, S4, S0
          VMUL.F32        S0, S2, S0
          VMOV            R2, S0
    __asm { VMOV            S4, R0 }
    *((_DWORD *)_R4 + 19) = _R2;
    *((_DWORD *)_R4 + 20) = _R1;
    __asm { VMOV            S2, R1 }
    *((_DWORD *)_R4 + 21) = _R0;
      VMUL.F32        S0, S4, S4
      VMOV            S6, R2
      VCMPE.F32       S0, S18
      _R0 = &Vec3::ZERO;
        VLDR            S20, [R0]
        VLDR            S22, [R0,#4]
        VLDR            S24, [R0,#8]
        VDIV.F32        S24, S4, S0
        VDIV.F32        S22, S2, S0
        VDIV.F32        S20, S6, S0
      VCMPE.F32       S0, S16
      goto LABEL_56;
      VMUL.F32        S0, S0, S2
      VMOV            R5, S0
    _R0 = cosf(_R5);
      VMUL.F32        S0, S24, S24
      VMUL.F32        S2, S22, S22
      VMUL.F32        S4, S20, S20
      VMOV            S16, R0
      VMOV.F32        S2, #1.0
      VADD.F32        S0, S0, S4
      VSUB.F32        S17, S2, S16
      VDIV.F32        S0, S2, S0
      VMUL.F32        S24, S0, S24
      VMUL.F32        S22, S0, S22
      VMUL.F32        S20, S0, S20
      VMUL.F32        S19, S24, S17
    _R0 = sinf(_R5);
      VMOV            S8, R0
      VMUL.F32        S0, S19, S20
      VMUL.F32        S10, S22, S8
      VMUL.F32        S12, S20, S8
      VMUL.F32        S2, S19, S22
    _R0 = &Matrix::IDENTITY;
      VMUL.F32        S4, S19, S24
      VMUL.F32        S8, S24, S8
      VLDR            S14, [R0,#8]
      VLDR            S5, [R0,#0x18]
      VLDR            S11, [R0,#0x28]
      VLDR            S1, [R0]
      VSUB.F32        S2, S2, S12
      VLDR            S3, [R0,#0x10]
      VADD.F32        S4, S4, S16
      VLDR            S6, [R0,#4]
      VMUL.F32        S7, S0, S14
      VMUL.F32        S9, S2, S5
      VMUL.F32        S13, S4, S11
      VADD.F32        S7, S9, S7
      VMUL.F32        S9, S22, S17
      VMUL.F32        S17, S20, S17
      VADD.F32        S7, S7, S13
      VMUL.F32        S13, S9, S20
      VMUL.F32        S15, S9, S22
      VMUL.F32        S22, S17, S22
      VMUL.F32        S20, S17, S20
      VMUL.F32        S9, S9, S24
      VMUL.F32        S7, S7, S26
      VSUB.F32        S13, S13, S8
      VADD.F32        S15, S15, S16
      VADD.F32        S8, S22, S8
      VADD.F32        S16, S20, S16
      VADD.F32        S12, S9, S12
      VLDR            S9, [R0,#0x20]
      VMUL.F32        S19, S13, S1
      VMUL.F32        S21, S15, S3
      VMUL.F32        S20, S8, S3
      VMUL.F32        S22, S16, S1
      VMUL.F32        S1, S0, S1
      VMUL.F32        S3, S2, S3
      VMUL.F32        S0, S0, S6
      VADD.F32        S19, S21, S19
      VMUL.F32        S21, S12, S9
      VADD.F32        S20, S20, S22
      VMUL.F32        S22, S17, S24
      VMUL.F32        S3, S4, S9
      VADD.F32        S19, S19, S21
      VSUB.F32        S10, S22, S10
      VADD.F32        S1, S1, S3
      VMUL.F32        S3, S13, S14
      VMUL.F32        S14, S16, S14
      VMUL.F32        S19, S19, S30
      VMUL.F32        S13, S13, S6
      VMUL.F32        S22, S10, S9
      VMUL.F32        S9, S15, S5
      VMUL.F32        S5, S8, S5
      VMUL.F32        S1, S1, S26
      VLDR            S22, [R0,#0x30]
      VADD.F32        S3, S9, S3
      VMUL.F32        S9, S12, S11
      VADD.F32        S14, S5, S14
      VLDR            S5, [R0,#0x38]
      VMUL.F32        S20, S20, S28
      VADD.F32        S3, S3, S9
      VMUL.F32        S9, S10, S11
      VLDR            S11, [R0,#0x24]
      VMUL.F32        S10, S10, S11
      VMUL.F32        S4, S4, S11
      VMUL.F32        S3, S3, S30
      VADD.F32        S14, S14, S9
      VMUL.F32        S9, S16, S6
      VMUL.F32        S6, S12, S11
      VMUL.F32        S14, S14, S28
      VADD.F32        S14, S14, S5
      VLDR            S5, [R0,#0x14]
      VMUL.F32        S8, S8, S5
      VMUL.F32        S15, S15, S5
      VMUL.F32        S2, S2, S5
      VADD.F32        S14, S14, S3
      VADD.F32        S3, S20, S19
      VADD.F32        S8, S8, S9
      VADD.F32        S12, S15, S13
      VADD.F32        S20, S14, S7
      VADD.F32        S16, S3, S1
      VADD.F32        S8, S8, S10
      VADD.F32        S2, S12, S6
      VMUL.F32        S10, S20, S20
      VMUL.F32        S14, S16, S16
      VMUL.F32        S6, S8, S28
      VLDR            S8, [R0,#0x34]
      VMUL.F32        S2, S2, S30
      VMUL.F32        S0, S0, S26
      VADD.F32        S22, S14, S10
      VADD.F32        S4, S6, S8
      VSQRT.F32       S24, S22
      VMOV            R1, S24
      VADD.F32        S26, S2, S0
      VMOV            R0, S26
    _R0 = atan2f(_R0, _R1);
    __asm { VMOV            S2, R0 }
    _R1 = &mce::Math::RADDEG;
      VLDR            S0, [R1]
      VMUL.F32        S2, S2, S0
      VLDR            S0, =89.9
      VCMPE.F32       S2, S0
        VLDR            S0, =-89.9
        VCMPE.F32       S2, S0
      if ( !(_NF ^ _VF) )
        goto LABEL_52;
      v48 = &mce::Math::DEGRAD;
    _R0 = *v48;
      VLDR            S2, [R0]
      VMOV            R0, S0
    _R0 = tanf(_R0);
      VMUL.F32        S26, S0, S24
LABEL_52:
      VMUL.F32        S0, S26, S26
      VADD.F32        S0, S22, S0
      _R1 = *(&Vec3::ZERO + 1);
      _R2 = Vec3::ZERO;
      _R0 = dword_2822498;
        VDIV.F32        S2, S20, S0
        VDIV.F32        S4, S26, S0
        VDIV.F32        S0, S16, S0
        VMOV            R0, S2
        VMOV            R1, S4
        VMOV            R2, S0
    *((_DWORD *)_R4 + 16) = _R2;
    *((_DWORD *)_R4 + 17) = _R1;
    *((_DWORD *)_R4 + 18) = _R0;
LABEL_56:
    result = (HoloHudDriftDynamics *)((char *)_R4 + 88);
    *(_QWORD *)result = _R6;
    *((_DWORD *)result + 2) = _R8;
  return result;
}


int __fastcall HoloHudDriftDynamics::_generateOverlayPatch(HoloHudDriftDynamics *this)
{
  Options *v6; // r0@1
  unsigned __int64 v8; // kr38_8@3
  int v9; // ST24_4@3
  int v10; // ST28_4@3
  unsigned __int64 v11; // kr40_8@3
  int v12; // ST1C_4@3
  int v13; // ST20_4@3
  int v14; // ST18_4@3
  unsigned __int64 v15; // kr48_8@3
  int v16; // ST10_4@3
  int v17; // ST14_4@3
  int v18; // ST0C_4@3
  float v19; // ST08_4@3
  float v20; // r4@3
  __int64 v21; // kr18_8@3
  __int64 v22; // r8@3
  __int64 v23; // kr20_8@3
  __int64 v27; // r1@3
  Options *v29; // r0@3
  __int64 *v31; // r0@11
  char *v32; // r1@11
  __int64 *v33; // r2@11
  __int64 *v34; // r4@12
  __int64 v39; // ST24_8@21
  int v40; // ST20_4@21
  int v41; // r9@21
  int v42; // r10@21
  int v43; // r11@21
  int v44; // r4@21
  int v45; // r2@21
  int v46; // r3@21
  int v47; // r7@21
  int v48; // r1@21
  int v49; // r6@21
  int v50; // r12@21
  int v51; // lr@21
  int v52; // r8@21
  int result; // r0@21
  int v54; // [sp+4h] [bp-3CCh]@1
  HoloHudDriftDynamics *v55; // [sp+2Ch] [bp-3A4h]@3
  __int64 v56; // [sp+30h] [bp-3A0h]@18
  int v57; // [sp+38h] [bp-398h]@18
  int v58; // [sp+3Ch] [bp-394h]@18
  int v59; // [sp+40h] [bp-390h]@18
  __int64 v60; // [sp+44h] [bp-38Ch]@18
  int v61; // [sp+4Ch] [bp-384h]@18
  __int64 v62; // [sp+50h] [bp-380h]@18
  __int64 v63; // [sp+58h] [bp-378h]@18
  __int64 v64; // [sp+60h] [bp-370h]@18
  __int64 v65; // [sp+68h] [bp-368h]@18
  __int64 v66; // [sp+70h] [bp-360h]@18
  int v67; // [sp+78h] [bp-358h]@18
  int v68; // [sp+7Ch] [bp-354h]@18
  int v69; // [sp+80h] [bp-350h]@18
  __int64 v70; // [sp+84h] [bp-34Ch]@18
  int v71; // [sp+8Ch] [bp-344h]@18
  __int64 v72; // [sp+90h] [bp-340h]@18
  __int64 v73; // [sp+98h] [bp-338h]@18
  __int64 v74; // [sp+A0h] [bp-330h]@18
  __int64 v75; // [sp+A8h] [bp-328h]@18
  __int64 v76; // [sp+B0h] [bp-320h]@17
  int v77; // [sp+B8h] [bp-318h]@17
  int v78; // [sp+BCh] [bp-314h]@17
  int v79; // [sp+C0h] [bp-310h]@17
  __int64 v80; // [sp+C4h] [bp-30Ch]@17
  int v81; // [sp+CCh] [bp-304h]@17
  __int64 v82; // [sp+D0h] [bp-300h]@17
  __int64 v83; // [sp+D8h] [bp-2F8h]@17
  __int64 v84; // [sp+E0h] [bp-2F0h]@17
  __int64 v85; // [sp+E8h] [bp-2E8h]@17
  __int64 v86; // [sp+F0h] [bp-2E0h]@16
  __int64 v87; // [sp+F8h] [bp-2D8h]@16
  int v88; // [sp+100h] [bp-2D0h]@16
  __int64 v89; // [sp+104h] [bp-2CCh]@16
  int v90; // [sp+10Ch] [bp-2C4h]@16
  __int64 v91; // [sp+110h] [bp-2C0h]@16
  __int64 v92; // [sp+118h] [bp-2B8h]@16
  float v93; // [sp+134h] [bp-29Ch]@4
  __int64 v96; // [sp+140h] [bp-290h]@12
  int v97; // [sp+148h] [bp-288h]@12
  int v98; // [sp+14Ch] [bp-284h]@12
  int v99; // [sp+150h] [bp-280h]@12
  __int64 v100; // [sp+154h] [bp-27Ch]@12
  int v101; // [sp+15Ch] [bp-274h]@12
  __int64 v102; // [sp+160h] [bp-270h]@12
  __int64 v103; // [sp+168h] [bp-268h]@12
  __int64 v104; // [sp+170h] [bp-260h]@12
  __int64 v105; // [sp+178h] [bp-258h]@12
  char v106; // [sp+180h] [bp-250h]@4
  int v107; // [sp+1BCh] [bp-214h]@16
  char v108; // [sp+1C0h] [bp-210h]@4
  __int64 v109; // [sp+200h] [bp-1D0h]@3
  int v110; // [sp+208h] [bp-1C8h]@3
  int v111; // [sp+20Ch] [bp-1C4h]@3
  int v112; // [sp+210h] [bp-1C0h]@3
  __int64 v113; // [sp+214h] [bp-1BCh]@3
  int v114; // [sp+21Ch] [bp-1B4h]@3
  __int64 v115; // [sp+220h] [bp-1B0h]@3
  __int64 v116; // [sp+228h] [bp-1A8h]@3
  __int64 v117; // [sp+230h] [bp-1A0h]@3
  __int64 v118; // [sp+238h] [bp-198h]@3
  __int64 v119; // [sp+240h] [bp-190h]@3
  __int64 v120; // [sp+248h] [bp-188h]@3
  int v121; // [sp+250h] [bp-180h]@3
  __int64 v122; // [sp+254h] [bp-17Ch]@3
  int v123; // [sp+25Ch] [bp-174h]@3
  __int64 v124; // [sp+260h] [bp-170h]@3
  __int64 v125; // [sp+268h] [bp-168h]@3
  __int64 v126; // [sp+270h] [bp-160h]@3
  __int64 v127; // [sp+278h] [bp-158h]@3
  __int64 v128; // [sp+280h] [bp-150h]@3
  __int64 v129; // [sp+288h] [bp-148h]@3
  int v130; // [sp+290h] [bp-140h]@3
  __int64 v131; // [sp+294h] [bp-13Ch]@3
  int v132; // [sp+29Ch] [bp-134h]@3
  int v133; // [sp+2A0h] [bp-130h]@3
  __int64 v134; // [sp+2B0h] [bp-120h]@3
  __int64 v135; // [sp+2B8h] [bp-118h]@3
  int v136; // [sp+2C0h] [bp-110h]@3
  int v137; // [sp+2C4h] [bp-10Ch]@3
  int v138; // [sp+2C8h] [bp-108h]@3
  int v139; // [sp+2CCh] [bp-104h]@3
  int v140; // [sp+2D0h] [bp-100h]@3
  int v141; // [sp+2D4h] [bp-FCh]@3
  int v142; // [sp+2D8h] [bp-F8h]@3
  int v143; // [sp+2DCh] [bp-F4h]@3
  float v144; // [sp+2E0h] [bp-F0h]@3
  float v145; // [sp+2E4h] [bp-ECh]@3
  __int64 v146; // [sp+2E8h] [bp-E8h]@3
  __int64 v147; // [sp+2F0h] [bp-E0h]@3
  __int64 v148; // [sp+2F8h] [bp-D8h]@3
  __int64 v149; // [sp+300h] [bp-D0h]@3
  __int64 v150; // [sp+308h] [bp-C8h]@3
  int v151; // [sp+310h] [bp-C0h]@3
  __int64 v152; // [sp+314h] [bp-BCh]@3
  int v153; // [sp+31Ch] [bp-B4h]@3
  __int64 v154; // [sp+320h] [bp-B0h]@3
  __int64 v155; // [sp+328h] [bp-A8h]@3
  __int64 v156; // [sp+330h] [bp-A0h]@3
  __int64 v157; // [sp+338h] [bp-98h]@3
  __int64 v160; // [sp+350h] [bp-80h]@3
  int v161; // [sp+358h] [bp-78h]@3
  int v162; // [sp+35Ch] [bp-74h]@3
  int v163; // [sp+360h] [bp-70h]@3
  __int64 v164; // [sp+364h] [bp-6Ch]@3
  int v165; // [sp+36Ch] [bp-64h]@3
  __int64 v166; // [sp+370h] [bp-60h]@3
  __int64 v167; // [sp+378h] [bp-58h]@3
  __int64 v168; // [sp+380h] [bp-50h]@3
  __int64 v169; // [sp+388h] [bp-48h]@3

  _R6 = this;
  HoloHudDriftDynamics::_updateDriftStateVector(this);
  v54 = ClientInstance::getHoloInput(*((ClientInstance **)_R6 + 33));
  (*(void (**)(void))(*(_DWORD *)v54 + 256))();
  __asm
  {
    VLDR            S0, [SP,#0x3D0+var_84]
    VMOV.F32        S4, #-0.5
    VLDR            S6, =0.002
    VCVT.F32.U32    S0, S0
    VLDR            S2, [SP,#0x3D0+var_8C]
    VLDR            S16, [R6,#0x7C]
    VDIV.F32        S0, S0, S2
    VLDR            S2, =0.001
    VMUL.F32        S20, S0, S6
    VMUL.F32        S2, S0, S2
    VADD.F32        S18, S2, S4
  }
  v6 = (Options *)ClientInstance::getOptions(*((ClientInstance **)_R6 + 33));
  if ( !Options::getVRHudDrifts(v6) )
    __asm { VLDREQ          S16, [R6,#0x80] }
  _aeabi_memclr8(&v149, 60);
  v55 = _R6;
  _R7 = &Matrix::IDENTITY;
  v8 = *(_QWORD *)&Matrix::IDENTITY;
  v9 = v8 >> 32;
  v10 = v8;
  v149 = *(_QWORD *)&Matrix::IDENTITY;
  v11 = qword_27E89F0;
  v12 = v11 >> 32;
  v13 = v11;
  v150 = qword_27E89F0;
  v14 = dword_27E89F8;
  v151 = dword_27E89F8;
  v15 = qword_27E89FC;
  v16 = v15 >> 32;
  v17 = v15;
  v152 = qword_27E89FC;
  v18 = unk_27E8A04;
  v153 = unk_27E8A04;
  v19 = *(float *)&qword_27E8A08;
  v154 = qword_27E8A08;
  v20 = *((float *)&qword_27E8A08 + 1);
  v21 = qword_27E8A10;
  v22 = *(_QWORD *)&qword_27E8A18;
  v23 = *(_QWORD *)&qword_27E8A20;
  v155 = qword_27E8A10;
  v156 = *(_QWORD *)&qword_27E8A18;
  v157 = *(_QWORD *)&qword_27E8A20;
  _aeabi_memclr8(&v136, 60);
  v136 = v10;
  v137 = v9;
  v138 = v13;
  v139 = v12;
  v140 = v14;
  v141 = v17;
  v142 = v16;
  v143 = v18;
  v144 = v19;
  v145 = v20;
  v146 = v21;
  v147 = v22;
  v148 = v23;
  _aeabi_memclr8(&v128, 56);
    VLDR            S8, [SP,#0x3D0+var_D0]
    VMUL.F32        S12, S8, S20
  _R0 = *(&Matrix::IDENTITY + 1);
  v128 = *(_QWORD *)&Matrix::IDENTITY;
  _KR30_8 = qword_27E89F0;
  _R3 = qword_27E8A08;
    VMOV            S0, R0
    VMOV            S2, R1
  v129 = qword_27E89F0;
    VMOV            S4, R2
    VMOV            S6, R3
  LODWORD(v27) = HIDWORD(qword_27E89FC);
  HIDWORD(v27) = unk_27E8A04;
  v130 = dword_27E89F8;
  v131 = qword_27E89FC;
  v132 = unk_27E8A04;
  v133 = qword_27E8A08;
    VLDR            S8, [R7,#0x28]
    VLDR            S10, [R7,#0x2C]
    VLDR            S14, [R7,#0x24]
    VSTR            S12, [SP,#0x3D0+var_D0]
    VLDR            S12, [SP,#0x3D0+var_D0+4]
    VLDR            S1, =8.7423e-8
    VMUL.F32        S12, S12, S20
    VMUL.F32        S5, S14, S1
    VMUL.F32        S7, S8, S1
    VMUL.F32        S3, S6, S1
    VMUL.F32        S1, S10, S1
    VSTR            S12, [SP,#0x3D0+var_D0+4]
    VLDR            S12, [SP,#0x3D0+var_C8]
    VSUB.F32        S5, S5, S0
    VSUB.F32        S7, S7, S2
    VSUB.F32        S1, S1, S4
    VSTR            S12, [SP,#0x3D0+var_C8]
    VLDR            S12, [SP,#0x3D0+var_C8+4]
    VSTR            S12, [SP,#0x3D0+var_C8+4]
    VLDR            S12, [SP,#0x3D0+var_C0]
    VSTR            S12, [SP,#0x3D0+var_C0]
    VLDR            S12, [SP,#0x3D0+var_BC]
    VSTR            S12, [SP,#0x3D0+var_BC]
    VLDR            S12, [SP,#0x3D0+var_BC+4]
    VSTR            S12, [SP,#0x3D0+var_BC+4]
    VLDR            S12, [SP,#0x3D0+var_B4]
    VSTR            S12, [SP,#0x3D0+var_B4]
    VLDR            S12, [SP,#0x3D0+var_B0]
    VSTR            S12, [SP,#0x3D0+var_B0]
    VLDR            S12, [SP,#0x3D0+var_B0+4]
    VSTR            S12, [SP,#0x3D0+var_B0+4]
    VLDR            S12, [SP,#0x3D0+var_A8]
    VSTR            S12, [SP,#0x3D0+var_A8]
    VLDR            S12, [SP,#0x3D0+var_A8+4]
    VSTR            S12, [SP,#0x3D0+var_A8+4]
    VLDR            S12, [SP,#0x3D0+var_150]
    VSUB.F32        S3, S3, S12
    VSTR            S3, [SP,#0x3D0+var_150]
    VSTR            S5, [SP,#0x3D0+var_150+4]
    VSTR            S7, [SP,#0x3D0+var_148]
    VSTR            S1, [SP,#0x3D0+var_148+4]
    VLDR            S1, =-8.7423e-8
    VMUL.F32        S0, S0, S1
  *(__int64 *)((char *)&v131 + 4) = v27;
    VMUL.F32        S12, S12, S1
    VMUL.F32        S2, S2, S1
    VMUL.F32        S4, S4, S1
    VSUB.F32        S0, S0, S14
    VSUB.F32        S6, S12, S6
    VSUB.F32        S2, S2, S8
    VSUB.F32        S4, S4, S10
    VLDR            S10, =0.85
    VSTR            S6, [SP,#0x3D0+var_130]
    VSTR            S0, [SP,#0x3D0+var_12C]
    VADD.F32        S0, S18, S16
    VSTR            S2, [SP,#0x3D0+var_128]
    VSTR            S4, [SP,#0x3D0+var_124]
  v134 = *(_QWORD *)&qword_27E8A18;
  v135 = *(_QWORD *)&qword_27E8A20;
    VLDR            S2, [SP,#0x3D0+var_100]
    VLDR            S14, [SP,#0x3D0+var_F0]
    VLDR            S4, [SP,#0x3D0+var_FC]
    VMUL.F32        S2, S2, S0
    VLDR            S6, [SP,#0x3D0+var_F8]
    VMUL.F32        S14, S14, S10
    VLDR            S12, [SP,#0x3D0+var_EC]
    VMUL.F32        S4, S4, S0
    VLDR            S1, [SP,#0x3D0+var_E8]
    VMUL.F32        S6, S6, S0
    VLDR            S8, [SP,#0x3D0+var_F4]
    VMUL.F32        S12, S12, S10
    VLDR            S3, [SP,#0x3D0+var_E8+4]
    VMUL.F32        S1, S1, S10
    VMUL.F32        S0, S8, S0
    VMUL.F32        S8, S3, S10
    VLDR            S10, [SP,#0x3D0+var_E0+4]
    VADD.F32        S2, S14, S2
    VADD.F32        S4, S12, S4
    VLDR            S12, [SP,#0x3D0+var_D8]
    VADD.F32        S6, S1, S6
    VADD.F32        S0, S8, S0
    VLDR            S8, [SP,#0x3D0+var_E0]
    VADD.F32        S2, S2, S8
    VLDR            S8, [SP,#0x3D0+var_D8+4]
    VADD.F32        S4, S4, S10
    VADD.F32        S6, S6, S12
    VADD.F32        S0, S0, S8
    VSTR            S2, [SP,#0x3D0+var_E0]
    VSTR            S4, [SP,#0x3D0+var_E0+4]
    VSTR            S6, [SP,#0x3D0+var_D8]
    VSTR            S0, [SP,#0x3D0+var_D8+4]
  _aeabi_memclr8(&v119, 60);
  v119 = *(_QWORD *)&Matrix::IDENTITY;
  v120 = qword_27E89F0;
  v121 = dword_27E89F8;
  v122 = qword_27E89FC;
  v123 = unk_27E8A04;
  v124 = qword_27E8A08;
  v125 = qword_27E8A10;
  v126 = *(_QWORD *)&qword_27E8A18;
  v127 = *(_QWORD *)&qword_27E8A20;
  glm::detail::operator*<float>((int)&v160, (int)&v136, (int)&v128);
  _aeabi_memclr8(&v109, 56);
  v109 = v160;
  v110 = v161;
  v111 = v162;
  v112 = v163;
  v113 = v164;
  v114 = v165;
  v115 = v166;
  v116 = v167;
  v117 = v168;
  v118 = v169;
  glm::detail::operator*<float>((int)&v160, (int)&v109, (int)&v149);
  v119 = v160;
  v120 = *(_QWORD *)&v161;
  v121 = v163;
  v122 = v164;
  v123 = v165;
  v124 = v166;
  v125 = v167;
  v126 = v168;
  _R5 = _R6;
  v127 = v169;
  v29 = (Options *)ClientInstance::getOptions(*((ClientInstance **)_R6 + 33));
  if ( Options::getVRHudDrifts(v29) )
    HolographicPlatform::getTransform((int)&v108, v54, 5, 8, 0);
    ScreenSetupCleanupHelper::computeGazeToHeadLockedRotation(
      COERCE_FLOAT(&v106),
      *((ClientInstance **)_R6 + 33),
      (HoloHudDriftDynamics *)((char *)_R6 + 64),
      60.0,
      80.0);
    HolographicPlatform::getTransformTranslation((int)&v93, v54, 16, 15, 0);
    __asm
    {
      VLDR            S6, [R5,#0x64]
      VLDR            S4, [SP,#0x3D0+var_29C]
      VLDR            S8, [R5,#0x68]
      VLDR            S2, [SP,#0x3D0+var_298]
      VSUB.F32        S14, S4, S6
      VLDR            S10, [R5,#0x6C]
      VSUB.F32        S1, S2, S8
      VLDR            S0, [SP,#0x3D0+var_294]
      VSUB.F32        S3, S0, S10
      VMUL.F32        S12, S14, S14
      VMUL.F32        S5, S1, S1
      VMUL.F32        S7, S3, S3
      VADD.F32        S12, S5, S12
      VADD.F32        S12, S12, S7
      VSQRT.F32       S5, S12
      VMOV.F32        S12, #1.0
      VCMPE.F32       S5, S12
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      __asm
      {
        VLDR            S12, =0.1
        VCMPE.F32       S5, S12
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        __asm
        {
          VMOV.F32        S0, S10
          VMOV.F32        S2, S8
          VMOV.F32        S4, S6
        }
LABEL_16:
          VSTR            S4, [SP,#0x3D0+var_220]
          VSTR            S2, [SP,#0x3D0+var_21C]
          VSTR            S0, [SP,#0x3D0+var_218]
        v107 = 1065353216;
          VSTR            S4, [SP,#0x3D0+var_29C]
          VSTR            S2, [SP,#0x3D0+var_298]
          VSTR            S0, [SP,#0x3D0+var_294]
        _aeabi_memclr8(&v86, 56);
        __asm { VLDR            S0, =0.1 }
        _R0 = &Matrix::IDENTITY;
        v86 = *(_QWORD *)&Matrix::IDENTITY;
        v87 = qword_27E89F0;
        _R2 = qword_27E89FC;
        v88 = dword_27E89F8;
        __asm { VMOV            S2, R1 }
        _R1 = HIDWORD(qword_27E89FC);
        _R3 = unk_27E8A04;
          VMOV            S4, R2
          VMUL.F32        S2, S2, S0
          VLDR            S10, [R0,#0x34]
          VMOV            S6, R1
          VLDR            S12, [R0,#0x38]
          VMOV            S8, R3
          VLDR            S14, [R0,#0x3C]
          VMUL.F32        S4, S4, S0
        v89 = qword_27E89FC;
          VMUL.F32        S6, S6, S0
          VMUL.F32        S0, S8, S0
          VLDR            S8, [R0,#0x30]
          VSUB.F32        S2, S8, S2
        v90 = unk_27E8A04;
        v91 = qword_27E8A08;
          VSUB.F32        S4, S10, S4
          VSUB.F32        S6, S12, S6
          VSUB.F32        S0, S14, S0
        v92 = qword_27E8A10;
          VSTR            S2, [SP,#0x3D0+var_2B0]
          VSTR            S4, [SP,#0x3D0+var_2AC]
          VSTR            S6, [SP,#0x3D0+var_2A8]
          VSTR            S0, [SP,#0x3D0+var_2A4]
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)v54 + 272))(v54) )
          glm::detail::operator*<float>((int)&v160, (int)&v106, (int)&v86);
          v34 = &v76;
          _aeabi_memclr8(&v76, 56);
          v33 = &v119;
          v76 = v160;
          v77 = v161;
          v78 = v162;
          v79 = v163;
          v80 = v164;
          v81 = v165;
          v82 = v166;
          v83 = v167;
          v84 = v168;
          v85 = v169;
          v31 = &v160;
LABEL_20:
          v32 = (char *)v34;
          goto LABEL_21;
        glm::detail::operator*<float>((int)&v160, (int)&v106, (int)&v86);
        _aeabi_memclr8(&v66, 56);
        v66 = v160;
        v67 = v161;
        v68 = v162;
        v69 = v163;
        v70 = v164;
        v71 = v165;
        v72 = v166;
        v73 = v167;
        v74 = v168;
        v75 = v169;
        glm::detail::operator*<float>((int)&v160, (int)&v66, (int)&v119);
        v34 = &v56;
        _aeabi_memclr8(&v56, 56);
        v56 = v160;
        v57 = v161;
        v58 = v162;
        v59 = v163;
        v60 = v164;
        v61 = v165;
        v62 = v166;
        v63 = v167;
        v64 = v168;
        v65 = v169;
LABEL_19:
        v31 = &v160;
        v33 = (__int64 *)&v108;
        goto LABEL_20;
        VLDR            S7, =0.0001
        VCMPE.F32       S5, S7
      if ( _NF ^ _VF )
        _R0 = &Vec3::ZERO;
          VLDR            S14, [R0]
          VLDR            S1, [R0,#4]
          VLDR            S3, [R0,#8]
      else
          VDIV.F32        S3, S3, S5
          VDIV.F32        S1, S1, S5
          VDIV.F32        S14, S14, S5
        VMUL.F32        S14, S14, S12
        VMUL.F32        S1, S1, S12
        VMUL.F32        S12, S3, S12
        VSUB.F32        S4, S4, S14
        VLDR            S14, =0.95
        VSUB.F32        S2, S2, S1
        VSUB.F32        S0, S0, S12
        VLDR            S12, =0.05
        VMUL.F32        S6, S6, S14
        VMUL.F32        S8, S8, S14
        VMUL.F32        S10, S10, S14
        VMUL.F32        S4, S4, S12
        VMUL.F32        S2, S2, S12
        VMUL.F32        S0, S0, S12
        VADD.F32        S4, S4, S6
        VADD.F32        S2, S2, S8
        VADD.F32        S0, S0, S10
      VSTR            S4, [R5,#0x64]
      VSTR            S2, [R5,#0x68]
      VSTR            S0, [R5,#0x6C]
    goto LABEL_16;
  HolographicPlatform::getTransform((int)&v108, v54, 5, 8, 0);
  HolographicPlatform::getTransform((int)&v106, v54, 16, 15, 0);
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v54 + 272))(v54) )
    glm::detail::operator*<float>((int)&v160, (int)&v106, (int)&v119);
    v34 = &v96;
    _aeabi_memclr8(&v96, 56);
    v96 = v160;
    v97 = v161;
    v98 = v162;
    v99 = v163;
    v100 = v164;
    v101 = v165;
    v102 = v166;
    v103 = v167;
    v104 = v168;
    v105 = v169;
    goto LABEL_19;
  v31 = &v160;
  v32 = &v106;
  v33 = &v119;
LABEL_21:
  glm::detail::operator*<float>((int)v31, (int)v32, (int)v33);
  v39 = v169;
  v40 = HIDWORD(v168);
  v41 = v168;
  v42 = HIDWORD(v167);
  v43 = v167;
  v44 = HIDWORD(v166);
  v45 = HIDWORD(v160);
  v46 = v161;
  v47 = v162;
  v48 = v166;
  v49 = v165;
  v50 = HIDWORD(v164);
  v51 = v164;
  v52 = v163;
  *(_DWORD *)v55 = v160;
  *((_DWORD *)v55 + 1) = v45;
  *((_DWORD *)v55 + 2) = v46;
  *((_DWORD *)v55 + 3) = v47;
  *((_DWORD *)v55 + 4) = v52;
  *((_DWORD *)v55 + 5) = v51;
  *((_DWORD *)v55 + 6) = v50;
  *((_DWORD *)v55 + 7) = v49;
  *((_DWORD *)v55 + 8) = v48;
  *((_DWORD *)v55 + 9) = v44;
  *((_DWORD *)v55 + 10) = v43;
  *((_DWORD *)v55 + 11) = v42;
  *((_DWORD *)v55 + 12) = v41;
  *((_DWORD *)v55 + 13) = v40;
  *((_DWORD *)v55 + 14) = v39;
  result = HIDWORD(v39);
  *((_DWORD *)v55 + 15) = HIDWORD(v39);
  return result;
}


int __fastcall HoloHudDriftDynamics::_adjustGazeToPoseDelta(int result, const Vec3 *_R1, int _R2)
{
  int v8; // r2@8

  __asm
  {
    VLDR            S4, [R1,#0x64]
    VLDR            S10, [R2]
    VLDR            S2, [R1,#0x68]
    VLDR            S8, [R2,#4]
    VSUB.F32        S14, S10, S4
    VLDR            S6, [R2,#8]
    VSUB.F32        S1, S8, S2
    VLDR            S0, [R1,#0x6C]
    VSUB.F32        S3, S6, S0
    VMUL.F32        S12, S14, S14
    VMUL.F32        S5, S1, S1
    VMUL.F32        S7, S3, S3
    VADD.F32        S12, S5, S12
    VADD.F32        S12, S12, S7
    VSQRT.F32       S5, S12
    VMOV.F32        S12, #1.0
    VCMPE.F32       S5, S12
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    __asm
    {
      VLDR            S12, =0.1
      VCMPE.F32       S5, S12
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm
      {
        VLDR            S7, =0.0001
        VCMPE.F32       S5, S7
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        _R3 = &Vec3::ZERO;
        __asm
        {
          VLDR            S14, [R3]
          VLDR            S1, [R3,#4]
          VLDR            S3, [R3,#8]
        }
      else
          VDIV.F32        S3, S3, S5
          VDIV.F32        S1, S1, S5
          VDIV.F32        S14, S14, S5
        VMUL.F32        S14, S14, S12
        VMUL.F32        S1, S1, S12
        VMUL.F32        S12, S3, S12
        VSUB.F32        S10, S10, S14
        VLDR            S14, =0.95
        VSUB.F32        S8, S8, S1
        VSUB.F32        S6, S6, S12
        VLDR            S12, =0.05
        VMUL.F32        S4, S4, S14
        VMUL.F32        S2, S2, S14
        VMUL.F32        S0, S0, S14
        VMUL.F32        S10, S10, S12
        VMUL.F32        S8, S8, S12
        VMUL.F32        S6, S6, S12
        VADD.F32        S4, S4, S10
        VADD.F32        S2, S2, S8
        VADD.F32        S0, S0, S6
        VSTR            S4, [R1,#0x64]
        VSTR            S2, [R1,#0x68]
        VSTR            S0, [R1,#0x6C]
  else
      VSTR            S10, [R1,#0x64]
      VSTR            S8, [R1,#0x68]
      VSTR            S6, [R1,#0x6C]
  v8 = *((_DWORD *)_R1 + 27);
  *(_QWORD *)result = *(_QWORD *)((char *)_R1 + 100);
  *(_DWORD *)(result + 8) = v8;
  return result;
}


int __fastcall HoloHudDriftDynamics::HoloHudDriftDynamics(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r3@1

  v2 = a1;
  *(_DWORD *)a1 = 1065353216;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  v3 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 20) = 1065353216;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 1065353216;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 60) = 1065353216;
  _aeabi_memclr4(a1 + 64, 56);
  *(_BYTE *)(v2 + 120) = 1;
  v4 = v2 + 124;
  *(_DWORD *)v4 = 1045220557;
  *(_DWORD *)(v4 + 4) = 1036831949;
  *(_DWORD *)(v4 + 8) = v3;
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 68) = 0;
  *(_DWORD *)(v2 + 88) = 0;
  *(_DWORD *)(v2 + 92) = 0;
  *(_DWORD *)(v2 + 96) = -1082130432;
  *(_DWORD *)(v2 + 72) = -1082130432;
  *(_DWORD *)(v2 + 76) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  *(_DWORD *)(v2 + 84) = 0;
  *(_DWORD *)(v2 + 100) = -998637568;
  *(_DWORD *)(v2 + 104) = -998637568;
  *(_DWORD *)(v2 + 108) = -998637568;
  *(_QWORD *)v2 = *(_QWORD *)&Matrix::IDENTITY;
  *(_QWORD *)(v2 + 8) = qword_27E89F0;
  *(_QWORD *)(v2 + 16) = qword_27E89F8;
  *(_QWORD *)(v2 + 24) = qword_27E8A00;
  *(_QWORD *)(v2 + 32) = qword_27E8A08;
  *(_DWORD *)(v2 + 40) = unk_27E8A10;
  *(_QWORD *)(v2 + 44) = qword_27E8A14;
  *(float *)(v2 + 52) = unk_27E8A1C;
  *(_QWORD *)(v2 + 56) = *(_QWORD *)&qword_27E8A20;
  return v2;
}
