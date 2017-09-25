

int __fastcall MovementInterpolator::tick(MovementInterpolator *this, Entity *a2)
{
  int result; // r0@1
  int v11; // r1@5
  __int64 v12; // kr00_8@6
  float v15; // r3@6
  float v16; // r3@6
  mce::Math *v17; // r0@8
  float v18; // r3@8
  int v20; // [sp+4h] [bp-3Ch]@6
  int v21; // [sp+8h] [bp-38h]@6
  mce::Math *v22; // [sp+Ch] [bp-34h]@6
  mce::Math *v23; // [sp+10h] [bp-30h]@6
  float v24; // [sp+14h] [bp-2Ch]@6

  _R4 = this;
  _R5 = a2;
  result = *((_DWORD *)this + 7);
  if ( result < 1 )
    return result;
  *(_QWORD *)((char *)a2 + 108) = *(_QWORD *)&Vec3::ZERO;
  *((_DWORD *)a2 + 29) = dword_2822498;
  _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)a2 + 52))(a2);
  __asm { VLDR            S16, [R0,#4] }
  _R0 = *((_DWORD *)_R4 + 7);
  if ( _R0 == 1 )
  {
    (*(void (__fastcall **)(Entity *, MovementInterpolator *))(*(_DWORD *)_R5 + 48))(_R5, _R4);
    (*(void (__fastcall **)(Entity *, char *))(*(_DWORD *)_R5 + 72))(_R5, (char *)_R4 + 12);
    if ( *((_BYTE *)_R4 + 24) && Entity::hasCategory((int)_R5, 2) == 1 )
    {
      v11 = *((_DWORD *)_R4 + 5);
LABEL_9:
      Mob::setYHeadRot(_R5, *(float *)&v11);
      goto LABEL_10;
    }
  }
  else
    __asm
      VMOV            S2, R0
      VMOV.F32        S0, #1.0
      VCVT.F32.S32    S2, S2
    v12 = *(_QWORD *)(*(_DWORD *)_R5 + 48);
    __asm { VDIV.F32        S18, S0, S2 }
    _R0 = ((int (__fastcall *)(_DWORD))HIDWORD(v12))(_R5);
      VLDR            S0, [R0]
      VLDR            S6, [R4]
      VLDR            S2, [R0,#4]
      VLDR            S8, [R4,#4]
      VSUB.F32        S6, S6, S0
      VLDR            S4, [R0,#8]
      VLDR            S10, [R4,#8]
      VSUB.F32        S8, S8, S2
      VSUB.F32        S10, S10, S4
      VMUL.F32        S6, S6, S18
      VMUL.F32        S8, S8, S18
      VMUL.F32        S10, S10, S18
      VADD.F32        S0, S6, S0
      VADD.F32        S2, S8, S2
      VADD.F32        S4, S10, S4
      VSTR            S0, [SP,#0x40+var_2C]
      VSTR            S2, [SP,#0x40+var_28]
      VSTR            S4, [SP,#0x40+var_24]
    ((void (__fastcall *)(Entity *, float *))v12)(_R5, &v24);
    Entity::getRotation((Entity *)&v22, (int)_R5);
    __asm { VMOV            R6, S18 }
    v20 = mce::Math::lerpRotate(v22, *((float *)_R4 + 3), _R6, v15);
    v21 = mce::Math::lerpRotate(v23, *((float *)_R4 + 4), _R6, v16);
    (*(void (__fastcall **)(Entity *, int *))(*(_DWORD *)_R5 + 72))(_R5, &v20);
      v17 = (mce::Math *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)_R5 + 644))(_R5);
      v11 = mce::Math::lerpRotate(v17, *((float *)_R4 + 5), _R6, v18);
      goto LABEL_9;
LABEL_10:
  _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R5 + 52))(_R5);
  __asm
    VLDR            S0, [R0,#4]
    VLDR            S2, =0.0
    VSUB.F32        S0, S16, S0
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S0, S2 }
    VLDR            S2, [R5,#0xE0]
    VADD.F32        S0, S0, S2
    VSTR            S0, [R5,#0xE0]
  result = *((_DWORD *)_R4 + 7) - 1;
  *((_DWORD *)_R4 + 7) = result;
  return result;
}


int __fastcall MovementInterpolator::MovementInterpolator(int result)
{
  __int64 v1; // kr00_8@1

  v1 = *(_QWORD *)&Vec3::ZERO;
  *(_DWORD *)(result + 8) = dword_2822498;
  *(_QWORD *)result = v1;
  *(_QWORD *)(result + 12) = *(_QWORD *)&Vec2::ZERO;
  *(_DWORD *)(result + 20) = 0;
  *(_BYTE *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  return result;
}


int __fastcall MovementInterpolator::setHeadYawLerpTarget(int result, float a2)
{
  *(float *)(result + 20) = a2;
  *(_BYTE *)(result + 24) = 1;
  return result;
}


int __fastcall MovementInterpolator::stop(int result)
{
  *(_DWORD *)(result + 28) = 0;
  return result;
}


int __fastcall MovementInterpolator::lerpTo(int result, int a2, _QWORD *a3, int a4)
{
  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(result + 12) = *a3;
  *(_DWORD *)(result + 20) = 0;
  *(_BYTE *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = a4;
  return result;
}
