

int __fastcall SwimMoveControl::SwimMoveControl(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1

  v2 = a2;
  v3 = a1;
  j_MoveControl::MoveControl(a1, a2);
  *(_DWORD *)v3 = &off_271A5B4;
  *(_DWORD *)(v3 + 32) = v2;
  j_MoveControl::setSpeedModifier((MoveControl *)v3, 0.5);
  return v3;
}


int __fastcall SwimMoveControl::tick(SwimMoveControl *this, float a2)
{
  float v14; // r3@3
  AttributeInstance *v15; // r0@3
  float v25; // r1@5
  float v41; // r1@7
  int v48; // r0@7
  int v49; // r2@7
  int v50; // r2@7
  int v51; // r3@7
  int v52; // r5@7
  int v53; // r6@7
  int v54; // r7@7
  int v60; // r0@7
  __int64 v61; // r2@7
  float v63; // [sp+4h] [bp-B4h]@11
  char v64; // [sp+10h] [bp-A8h]@7
  int v65; // [sp+18h] [bp-A0h]@7
  char v66; // [sp+1Ch] [bp-9Ch]@7
  int v67; // [sp+20h] [bp-98h]@7
  int v68; // [sp+28h] [bp-90h]@7
  char v69; // [sp+34h] [bp-84h]@7
  void **v71; // [sp+40h] [bp-78h]@7
  int v72; // [sp+44h] [bp-74h]@7
  int v73; // [sp+48h] [bp-70h]@7
  int v74; // [sp+4Ch] [bp-6Ch]@7
  int v75; // [sp+50h] [bp-68h]@7
  int v76; // [sp+54h] [bp-64h]@7
  int v77; // [sp+58h] [bp-60h]@7
  int v78; // [sp+5Ch] [bp-5Ch]@7

  _R4 = this;
  if ( *((_BYTE *)this + 24) )
  {
    *((_BYTE *)this + 24) = 0;
    _R0 = *((_DWORD *)this + 8);
    __asm
    {
      VLDR            S2, [R4,#0x10]
      VLDR            S4, [R4,#8]
      VLDR            S6, [R0,#0x48]
      VLDR            S10, [R0,#0x50]
      VSUB.F32        S16, S4, S6
      VLDR            S0, [R4,#0xC]
      VSUB.F32        S18, S2, S10
      VLDR            S8, [R0,#0x4C]
      VSUB.F32        S24, S0, S8
      VMUL.F32        S0, S16, S16
      VMUL.F32        S2, S18, S18
      VMUL.F32        S4, S24, S24
      VADD.F32        S0, S2, S0
      VADD.F32        S0, S0, S4
      VMOV            R0, S0
    }
    LODWORD(_R0) = j_mce::Math::sqrt(_R0, a2);
    __asm { VMOV            S20, R0 }
    LODWORD(_R0) = &"?7?4+\v";
      VLDR            S0, [R0]
      VCMPE.F32       S20, S0
      VMRS            APSR_nzcv, FPSCR
    if ( !(_NF ^ _VF) )
      __asm
      {
        VCVT.F64.F32    D0, S18
        VCVT.F64.F32    D1, S16
        VMOV            R0, R1, D0
        VMOV            R2, R3, D1
      }
      _R0 = COERCE_UNSIGNED_INT64(j_atan2(_R0, _R2));
      __asm { VMOV            D1, R0, R1 }
      _R2 = &mce::Math::RADDEG;
        VLDR            S0, [R2]
        VCVT.F64.F32    D0, S0
        VMUL.F64        D0, D0, D1
        VCVT.F32.F64    S0, D0
        VLDR            S2, =-90.0
        VADD.F32        S0, S0, S2
        VMOV            R1, S0
      *(_DWORD *)(*((_DWORD *)_R4 + 8) + 124) = j_mce::Math::clampRotate(
                                                  *(mce::Math **)((*(_QWORD *)((char *)_R4 + 28) >> 32) + 124),
                                                  _R1,
                                                  COERCE_FLOAT(*(_QWORD *)((char *)_R4 + 28)),
                                                  v14);
      *(_DWORD *)(*((_DWORD *)_R4 + 8) + 3412) = *(_DWORD *)(*((_DWORD *)_R4 + 8) + 124);
      v15 = (AttributeInstance *)(*(int (**)(void))(**((_DWORD **)_R4 + 8) + 1004))();
      _R5 = j_AttributeInstance::getCurrentValue(v15);
      _R6 = j_MoveControl::getSpeedModifier(_R4);
      _R7 = (*(int (**)(void))(**((_DWORD **)_R4 + 8) + 820))();
        VMOV            S0, R5
        VMOV            S2, R6
        VMUL.F32        S26, S2, S0
      _R0 = (*(int (**)(void))(**((_DWORD **)_R4 + 8) + 820))();
        VMOV            S0, R0
        VMOV.F32        S22, #0.125
        VSUB.F32        S0, S26, S0
        VMOV            S2, R7
        VMUL.F32        S0, S0, S22
      (*(void (**)(void))(**((_DWORD **)_R4 + 8) + 824))();
      _R0 = *(_DWORD *)j_Entity::getUniqueID(*((Entity **)_R4 + 8));
      _R6 = 1374389535;
      __asm { VMOV.F32        S4, #0.5 }
      if ( _NF )
        _R0 = -_R0;
      _R2 = *((_DWORD *)_R4 + 8);
        SMMUL.W         R1, R0, R6
        VDIV.F32        S24, S24, S20
        VLDR            S0, [R2,#0x1A0]
      LODWORD(v25) = ((signed int)_R1 >> 5) + (_R1 >> 31);
      __asm { VCVT.F32.S32    S0, S0 }
      _R0 = _R0 - 100 * LODWORD(v25);
        VMOV            S2, R0
        VCVT.F32.S32    S2, S2
        VADD.F32        S0, S2, S0
        VMUL.F32        S0, S0, S4
        VMOV            R0, S0
      _R5 = j_mce::Math::sin(_R0, v25);
      _R1 = *((float *)_R4 + 8);
      _R0 = &mce::Math::DEGRAD;
        VLDR            S0, [R1,#0x7C]
        VLDR            S26, [R0]
        VMUL.F32        S0, S26, S0
      _R0 = j_mce::Math::cos(_R0, _R1);
      _R1 = *((_DWORD *)_R4 + 8);
        VMOV            S2, R5
        VMUL.F32        S0, S0, S26
        VMOV            S26, R0
        VLDR            S0, =0.05
        VMUL.F32        S30, S2, S0
        VMUL.F32        S28, S26, S30
      _R0 = j_mce::Math::sin(_R1, *(float *)&_R1);
        VLDR            S0, [R1,#0x6C]
        VADD.F32        S0, S0, S28
        VMOV            S28, R0
        VMUL.F32        S2, S28, S30
        VSTR            S0, [R1,#0x6C]
      _R0 = *((_DWORD *)_R4 + 8);
        VLDR            S0, [R0,#0x74]
        VSTR            S0, [R0,#0x74]
      _R0 = (Entity *)*((_DWORD *)_R4 + 8);
        VLDR            S0, [R0,#0x1A0]
        VCVT.F32.S32    S30, S0
      _R0 = *(_DWORD *)j_Entity::getUniqueID(_R0);
      __asm { VMOV.F32        S2, #0.75 }
      if ( _R0 < 0 )
      __asm { SMMUL.W         R1, R0, R6 }
      LODWORD(v41) = ((signed int)_R1 >> 5) + (_R1 >> 31);
      _R0 = _R0 - 100 * LODWORD(v41);
        VCVT.F32.S32    S0, S0
        VADD.F32        S0, S0, S30
        VMUL.F32        S0, S0, S2
      _R0 = j_mce::Math::sin(_R0, v41);
        VADD.F32        S0, S28, S26
        VLDR            S2, =0.0125
        VLDR            S2, [R0,#0x70]
        VSTR            S0, [R0,#0x70]
        VLDR            S0, =0.1
        VMUL.F32        S0, S24, S0
      v48 = j_Mob::getLookControl(*((Mob **)_R4 + 8));
      v49 = *(_DWORD *)(v48 + 4);
      v48 += 8;
      v72 = v49;
      v71 = &off_26EDC90;
      v50 = *(_DWORD *)(v48 + 4);
      v51 = *(_DWORD *)(v48 + 8);
      v52 = *(_DWORD *)(v48 + 12);
      v53 = *(_DWORD *)(v48 + 16);
      v54 = *(_DWORD *)(v48 + 20);
      v73 = *(_DWORD *)v48;
      v74 = v50;
      v75 = v51;
      v76 = v52;
      v77 = v53;
      v78 = v54;
      __asm { VLDR            S26, [R1,#0x48] }
      j_Entity::getAttachPos((AABB *)&v69, _R1, 3, 0);
        VLDR            S28, [SP,#0xB8+var_80]
        VLDR            S30, [R0,#0x50]
      j_LookControl::getWantedPos((LookControl *)&v68, (int)&v71);
      _R6 = v68;
      j_LookControl::getWantedPos((LookControl *)&v66, (int)&v71);
      _R5 = v67;
      j_LookControl::getWantedPos((LookControl *)&v64, (int)&v71);
      __asm { VDIV.F32        S0, S16, S20 }
      _R7 = v65;
        VDIV.F32        S2, S18, S20
        VDIV.F32        S4, S24, S20
        VADD.F32        S0, S0, S0
        VADD.F32        S2, S2, S2
        VADD.F32        S18, S28, S4
        VADD.F32        S16, S26, S0
        VADD.F32        S20, S30, S2
      v60 = j_LookControl::getHasWanted((LookControl *)&v71);
      LOWORD(v61) = 0;
      if ( !v60 )
        __asm
        {
          VMOVEQ          R6, S16
          VMOVEQ          R5, S18
        }
      __asm { VMOV            S0, R6 }
      if ( _ZF )
        __asm { VMOVEQ          R7, S20 }
        VMOV            S4, R5
        VMOV            S6, R7
      HIDWORD(v61) = 1109393408;
        VSUB.F32        S2, S16, S0
        VSUB.F32        S8, S18, S4
      WORD1(v61) = 16672;
        VSUB.F32        S10, S20, S6
        VMUL.F32        S2, S2, S22
        VMUL.F32        S8, S8, S22
        VMUL.F32        S10, S10, S22
        VADD.F32        S2, S8, S4
        VADD.F32        S4, S10, S6
        VSTR            S0, [SP,#0xB8+var_B4]
        VSTR            S2, [SP,#0xB8+var_B0]
        VSTR            S4, [SP,#0xB8+var_AC]
      j_LookControl::setLookAt((LookControl *)&v71, (const Vec3 *)&v63, v61);
      LODWORD(_R0) = j_Entity::setMoving(*((Entity **)_R4 + 8), 1);
  }
  else
    (*(void (**)(void))(**((_DWORD **)this + 8) + 824))();
    LODWORD(_R0) = j_j_j__ZN6Entity9setMovingEb_0(*((Entity **)_R4 + 8), 0);
  return *(unsigned __int64 *)&_R0;
}
