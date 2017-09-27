

int __fastcall LookControl::tick(LookControl *this, int a2, int a3, float a4)
{
  __int64 v10; // r2@2
  int v11; // r0@2
  mce::Degree *v14; // r0@2
  __int64 v16; // r2@2
  int v17; // r0@2
  mce::Degree *v18; // r0@2
  float *v19; // r0@2
  int v20; // r0@2
  float v21; // r2@2
  mce::Math *v22; // r0@2
  int v24; // r0@3
  int result; // r0@4
  int v29; // r0@6
  int v31; // r0@8
  char v33; // [sp+4h] [bp-44h]@2
  char v34; // [sp+8h] [bp-40h]@2
  float v35; // [sp+Ch] [bp-3Ch]@2

  _R4 = this;
  *(_DWORD *)(*((_DWORD *)this + 1) + 120) = 0;
  if ( *((_BYTE *)this + 16) )
  {
    *((_BYTE *)this + 16) = 0;
    Entity::getAttachPos((AABB *)&v35, *((_DWORD *)this + 1), 7, 0);
    __asm
    {
      VLDR            S0, [R4,#0x14]
      VLDR            S4, [SP,#0x48+var_3C]
      VLDR            S2, [R4,#0x1C]
      VLDR            S6, [SP,#0x48+var_34]
      VSUB.F32        S22, S0, S4
      VLDR            S16, [R4,#0x18]
      VSUB.F32        S20, S2, S6
      VLDR            S18, [SP,#0x48+var_38]
      VMOV            R1, S22
      VMOV            R0, S20
    }
    v11 = mce::Math::atan2(_R0, v10);
    mce::Degree::Degree((int)&v34, v11);
      VMUL.F32        S0, S22, S22
      VMUL.F32        S2, S20, S20
      VADD.F32        S0, S2, S0
      VSUB.F32        S2, S16, S18
      VSQRT.F32       S0, S0
      VMOV            R5, S2
      VMOV            R6, S0
    _R0 = mce::Degree::asFloat(v14);
    __asm { VLDR            S16, [R0] }
    v17 = mce::Math::atan2(__PAIR__(_R6, _R5), v16);
    mce::Degree::Degree((int)&v33, v17);
    v19 = (float *)mce::Degree::asFloat(v18);
    v20 = mce::Math::clampRotate(
            *(mce::Math **)(*((_DWORD *)_R4 + 1) + 120),
            COERCE_FLOAT(*(_DWORD *)v19 ^ 0x80000000),
            *((float *)_R4 + 3),
            *v19);
      VLDR            S0, =-90.0
      VADD.F32        S0, S16, S0
    *(_DWORD *)(*((_DWORD *)_R4 + 1) + 120) = v20;
    LODWORD(v21) = *(_QWORD *)((char *)_R4 + 4) >> 32;
    v22 = *(mce::Math **)(*(_QWORD *)((char *)_R4 + 4) + 3420);
    __asm { VMOV            R1, S0 }
  }
  else
    v24 = *((_DWORD *)this + 1);
    v21 = 10.0;
    _R1 = *(float *)(v24 + 3412);
    v22 = *(mce::Math **)(v24 + 3420);
  *(_DWORD *)(*((_DWORD *)_R4 + 1) + 3420) = mce::Math::clampRotate(v22, _R1, v21, a4);
  _R0 = *((_DWORD *)_R4 + 1);
  LODWORD(_R1) = _R0 + 3412;
  _R0 += 3420;
  __asm
    VLDR            S0, [R1]
    VLDR            S2, [R0]
    VSUB.F32        S0, S2, S0
    VMOV            R0, S0
  result = mce::Math::wrapDegrees(_R0, _R1);
    VLDR            S2, =-75.0
    VMOV            S0, R0
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    v29 = *((_DWORD *)_R4 + 1);
    _R1 = v29 + 3412;
    result = v29 + 3420;
      VLDR            S4, [R1]
      VADD.F32        S2, S4, S2
      VSTR            S2, [R0]
    VLDR            S2, =75.0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    v31 = *((_DWORD *)_R4 + 1);
    _R1 = v31 + 3412;
    result = v31 + 3420;
      VLDR            S0, [R1]
      VADD.F32        S0, S0, S2
      VSTR            S0, [R0]
  return result;
}


int __fastcall LookControl::setLookAt(int result, Entity *a2, float _R2, float _R3)
{
  int v5; // r4@1
  char v10; // [sp+4h] [bp-2Ch]@3
  int v11; // [sp+8h] [bp-28h]@3

  _R5 = a2;
  v5 = result;
  if ( a2 )
  {
    *(_DWORD *)(result + 20) = *((_DWORD *)a2 + 18);
    __asm
    {
      VMOV            S16, R3
      VMOV            S18, R2
    }
    if ( Entity::hasCategory((int)a2, 2) == 1 )
      Entity::getAttachPos((AABB *)&v10, (int)_R5, 3, 0);
      *(_DWORD *)(v5 + 24) = v11;
    else
      __asm
      {
        VLDR            S0, [R5,#0x10C]
        VMOV.F32        S4, #0.5
        VLDR            S2, [R5,#0x118]
        VADD.F32        S0, S2, S0
        VMUL.F32        S0, S0, S4
        VSTR            S0, [R4,#0x18]
      }
    *(_DWORD *)(v5 + 28) = *((_DWORD *)_R5 + 20);
    result = 1;
      VSTR            S18, [R4,#8]
      VSTR            S16, [R4,#0xC]
    *(_BYTE *)(v5 + 16) = 1;
  }
  return result;
}


int __fastcall LookControl::LookControl(int result, int a2)
{
  int v2; // r1@1

  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)result = &off_26EDC90;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_BYTE *)(result + 16) = 0;
  v2 = dword_2822498;
  *(_QWORD *)(result + 20) = *(_QWORD *)&Vec3::ZERO;
  *(_DWORD *)(result + 28) = v2;
  return result;
}


int __fastcall LookControl::getWantedPos(int result, int a2)
{
  __int64 v2; // r2@1
  int v3; // r1@1

  v2 = *(_QWORD *)(a2 + 20);
  v3 = *(_DWORD *)(a2 + 28);
  *(_QWORD *)result = v2;
  *(_DWORD *)(result + 8) = v3;
  return result;
}


int __fastcall LookControl::setLookAt(int result, const Vec3 *a2, __int64 a3)
{
  *(_DWORD *)(result + 20) = *(_DWORD *)a2;
  *(_DWORD *)(result + 24) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 28) = *((_DWORD *)a2 + 2);
  *(_QWORD *)(result + 8) = a3;
  *(_BYTE *)(result + 16) = 1;
  return result;
}
