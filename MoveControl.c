

int __fastcall MoveControl::setWantedPosition(int result, const Vec3 *a2, float a3)
{
  int v3; // r1@1

  *(_DWORD *)(result + 8) = *(_DWORD *)a2;
  *(_DWORD *)(result + 12) = *((_DWORD *)a2 + 1);
  v3 = *((_DWORD *)a2 + 2);
  *(_QWORD *)(result + 16) = *(_QWORD *)(&a3 - 1);
  *(_BYTE *)(result + 24) = 1;
  return result;
}


int __fastcall MoveControl::setWanted(int result, bool a2)
{
  *(_BYTE *)(result + 24) = a2;
  return result;
}


int __fastcall MoveControl::setSpeedModifier(int result, float a2)
{
  *(float *)(result + 20) = a2;
  return result;
}


int __fastcall MoveControl::setMaxTurn(int result, float a2)
{
  *(float *)(result + 28) = a2;
  return result;
}


int __fastcall MoveControl::initializeFromDefinition(int result, MoveControlDescription *a2)
{
  *(_DWORD *)(result + 28) = *((_DWORD *)a2 + 1);
  return result;
}


int __fastcall MoveControl::MoveControl(int result, int a2)
{
  __int64 v2; // r2@1

  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)result = &off_26EDCA4;
  v2 = *(_QWORD *)(a2 + 72);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a2 + 80);
  *(_QWORD *)(result + 8) = v2;
  *(_DWORD *)(result + 20) = 0;
  *(_BYTE *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 1106247680;
  return result;
}


int __fastcall MoveControl::tick(MoveControl *this)
{
  int result; // r0@3
  float v8; // r1@4
  __int64 v9; // r2@7
  int v11; // r0@12
  mce::Degree *v12; // r0@12
  float v15; // r3@12
  AttributeInstance *v16; // r0@13
  int v19; // r0@19
  int v24; // r0@21
  __int64 v25; // r2@21
  int v26; // r1@23
  int v27; // r0@23
  int v28; // r0@24
  int v31; // r0@24
  __int64 v35; // r2@24
  __int64 v38; // r0@25
  int v41; // t1@26
  int v42; // [sp+0h] [bp-48h]@12
  float v43; // [sp+4h] [bp-44h]@7

  _R4 = this;
  if ( Entity::getStatusFlag(*((_DWORD *)this + 1), 46) == 1 )
    Mob::setYya(*((Mob **)_R4 + 1), 0.0);
  result = *((_BYTE *)_R4 + 24);
  if ( *((_BYTE *)_R4 + 24) )
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
      VSUB.F32        S16, S2, S10
      VLDR            S8, [R0,#0x50]
      VSUB.F32        S18, S4, S8
      VMUL.F32        S22, S20, S20
      VMUL.F32        S0, S16, S16
      VMUL.F32        S24, S18, S18
      VADD.F32        S0, S0, S22
      VADD.F32        S26, S0, S24
    }
    if ( Entity::getStatusFlag(_R0, 41) || !Entity::getStatusFlag(*((_DWORD *)_R4 + 1), 46) )
      __asm { VMOV            R0, S26 }
      _R0 = mce::Math::sqrt(_R0, v8);
      __asm { VMOV            S22, R0 }
      _R0 = AABB::getSize((AABB *)(*((_DWORD *)_R4 + 1) + 264));
      __asm
      {
        VMOV            S0, R0
        VCMPE.F32       S22, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        __asm { VMOV.F32        S0, #0.5 }
        *((_BYTE *)_R4 + 24) = 0;
        result = *((_DWORD *)_R4 + 1);
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
      else
          VMOV.F32        S0, #1.0
          VLDR            S2, =0.05
          VLDR            S8, [R4,#0x14]
          VMUL.F32        S4, S20, S2
        _R0 = *((_DWORD *)_R4 + 1);
          VMUL.F32        S6, S16, S2
          VMUL.F32        S2, S18, S2
          VLDR            S10, [R0,#0x6C]
          VDIV.F32        S0, S0, S22
          VMUL.F32        S4, S4, S0
          VMUL.F32        S6, S6, S0
          VMUL.F32        S4, S4, S8
          VMUL.F32        S6, S6, S8
          VMUL.F32        S0, S0, S8
          VADD.F32        S4, S10, S4
          VSTR            S4, [R0,#0x6C]
          VADD.F32        S2, S2, S6
          VADD.F32        S0, S2, S0
        v24 = Entity::getTarget(*((Entity **)_R4 + 1));
        v26 = v24;
        v27 = *((_DWORD *)_R4 + 1);
        if ( v26 )
          v28 = Entity::getTarget((Entity *)v27);
          _R0 = (*(int (**)(void))(*(_DWORD *)v28 + 52))();
          __asm { VLDR            S16, [R0] }
          _R0 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)_R4 + 1) + 52))(*((_DWORD *)_R4 + 1));
          __asm { VLDR            S18, [R0] }
          v31 = Entity::getTarget(*((Entity **)_R4 + 1));
          _R0 = (*(int (**)(void))(*(_DWORD *)v31 + 52))();
          __asm { VLDR            S20, [R0,#8] }
          __asm
          {
            VLDR            S0, [R0,#8]
            VSUB.F32        S2, S16, S18
            VSUB.F32        S0, S20, S0
            VMOV            R0, S2
            VMOV            R1, S0
          }
          _R0 = mce::Math::atan2(_R0, v35);
          __asm { VMOV            S2, R0 }
          _R1 = &mce::Math::RADDEG;
            VLDR            S0, [R1]
            VNMUL.F32       S0, S0, S2
        else
          HIDWORD(v38) = *(_DWORD *)(v27 + 116);
          LODWORD(v38) = *(_DWORD *)(v27 + 108);
          LODWORD(v25) = v38;
          _R0 = mce::Math::atan2(v38, v25);
          __asm { VMOV            S0, R0 }
            VLDR            S2, [R1]
            VNMUL.F32       S0, S2, S0
        v41 = *((_DWORD *)_R4 + 1);
        __asm { VSTR            S0, [R0,#0x7C] }
        *(_DWORD *)(result + 3412) = *(_DWORD *)(result + 124);
    else
      __asm { VLDR            S0, =0.005 }
      result = 0;
      *((_BYTE *)_R4 + 24) = 0;
        VCMPE.F32       S26, S0
      if ( !(_NF ^ _VF) )
        AABB::getBounds((AABB *)&v43, *((_DWORD *)_R4 + 1) + 264);
          VLDR            S0, [SP,#0x48+var_44]
          VMOV.F32        S4, #0.125
          VLDR            S2, [SP,#0x48+var_3C]
          VADD.F32        S22, S24, S22
          VMUL.F32        S0, S0, S4
          VMOV.F32        S4, #0.25
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
          VCMPE.F32       S0, S4
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          __asm { VMOVGT.F32      S2, S0 }
        __asm { VMRS            APSR_nzcv, FPSCR }
          __asm { VMOVGT.F32      S2, S4 }
          VMUL.F32        S0, S2, S2
          VCMPE.F32       S22, S0
            VMOV            R0, S18
            VMOV            R1, S20
          v11 = mce::Math::atan2(_R0, v9);
          mce::Degree::Degree((int)&v42, v11);
          _R0 = mce::Degree::asFloat(v12);
            VLDR            S2, [R0]
            VLDR            S0, =-90.0
            VADD.F32        S0, S2, S0
          *(_DWORD *)(*((_DWORD *)_R4 + 1) + 124) = mce::Math::clampRotate(
                                                      *(mce::Math **)(*((_DWORD *)_R4 + 1) + 124),
                                                      _R1,
                                                      *((float *)_R4 + 7),
                                                      v15);
        v16 = (AttributeInstance *)(*(int (**)(void))(**((_DWORD **)_R4 + 1) + 1004))();
        _R0 = AttributeInstance::getCurrentValue(v16);
          VMOV            S0, R0
          VLDR            S2, [R4,#0x14]
          VMOV            R1, S0
        result = (*(int (**)(void))(**((_DWORD **)_R4 + 1) + 824))();
          VLDR            S0, =0.1
          VCMPE.F32       S16, S0
          __asm { VMOV.F32        S0, #1.0 }
          result = *((_DWORD *)_R4 + 1);
            VLDR            S2, [R0,#0x130]
            VCMPE.F32       S2, S0
            VMRS            APSR_nzcv, FPSCR
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            __asm { VMOVGT.F32      S0, S2 }
            VCMPE.F32       S22, S0
          if ( _NF ^ _VF )
            result = Mob::getJumpControl((Mob *)result);
            if ( result )
            {
              v19 = Mob::getJumpControl(*((Mob **)_R4 + 1));
              result = (*(int (**)(void))(*(_DWORD *)v19 + 8))();
            }
  }
  return result;
}


char *__fastcall MoveControl::getWantedPosition(MoveControl *this)
{
  return (char *)this + 8;
}
