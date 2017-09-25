

void __fastcall SquidFleeGoal::~SquidFleeGoal(SquidFleeGoal *this)
{
  SquidFleeGoal::~SquidFleeGoal(this);
}


int __fastcall SquidFleeGoal::start(int result)
{
  *(_DWORD *)(result + 12) = 0;
  return result;
}


BlockSource *__fastcall SquidFleeGoal::tick(SquidFleeGoal *this)
{
  SquidFleeGoal *v1; // r5@1
  int v9; // t1@11
  int v10; // r0@11
  BlockSource *result; // r0@12
  int v15; // r0@13
  int v16; // r2@13
  __int64 v17; // kr00_8@13
  int v18; // r2@13
  __int64 v19; // [sp+Ch] [bp-34h]@13
  int v20; // [sp+14h] [bp-2Ch]@13
  __int16 v21; // [sp+1Ah] [bp-26h]@1
  float v22; // [sp+1Ch] [bp-24h]@1
  float v23; // [sp+20h] [bp-20h]@1
  float v24; // [sp+24h] [bp-1Ch]@1
  float v25; // [sp+28h] [bp-18h]@2

  v1 = this;
  ++*((_DWORD *)this + 3);
  _R0 = (*(int (**)(void))(**((_DWORD **)this + 2) + 944))();
  __asm
  {
    VLDR            S0, [R0,#0x48]
    VLDR            S2, [R0,#0x4C]
    VLDR            S4, [R0,#0x50]
  }
  _R0 = (Squid *)*((_DWORD *)v1 + 2);
    VLDR            S6, [R4,#0x48]
    VLDR            S8, [R4,#0x4C]
    VLDR            S10, [R4,#0x50]
    VSUB.F32        S0, S6, S0
    VSUB.F32        S2, S8, S2
    VSUB.F32        S4, S10, S4
    VSTR            S0, [SP,#0x40+var_1C]
    VSTR            S2, [SP,#0x40+var_18]
    VSTR            S4, [SP,#0x40+var_14]
  Squid::getWaterHeights(_R0, &v21, &v23, &v22);
  if ( Squid::checkForSteeringCollision(*((Squid **)v1 + 2), (const Vec3 *)&v24, 3.0, (Vec3 *)&v24) )
    goto LABEL_12;
    VLDR            S2, [SP,#0x40+var_1C]
    VLDR            S4, [SP,#0x40+var_18]
    VMUL.F32        S6, S2, S2
    VLDR            S0, [SP,#0x40+var_14]
    VMUL.F32        S8, S4, S4
    VMUL.F32        S10, S0, S0
    VADD.F32        S6, S8, S6
    VADD.F32        S6, S6, S10
    VSQRT.F32       S6, S6
    VCMPE.F32       S6, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm
    {
      VMOV.F32        S8, #1.0
      VDIV.F32        S8, S8, S6
      VMUL.F32        S2, S8, S2
      VMUL.F32        S4, S4, S8
      VMUL.F32        S0, S0, S8
      VMOV.F32        S8, #5.0
      VSTR            S2, [SP,#0x40+var_1C]
      VSTR            S4, [SP,#0x40+var_18]
      VSTR            S0, [SP,#0x40+var_14]
      VCMPE.F32       S6, S8
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm { VMOV.F32        S6, #3.0 }
    else
      __asm
      {
        VSUB.F32        S6, S8, S6
        VLDR            S8, =0.2
        VMOV.F32        S10, #3.0
        VMUL.F32        S6, S6, S8
        VADD.F32        S6, S6, S10
        VCMPE.F32       S6, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        goto LABEL_8;
      VMUL.F32        S2, S2, S6
      VMUL.F32        S4, S4, S6
      VMUL.F32        S0, S0, S6
LABEL_8:
  _R0 = *((_DWORD *)v1 + 2);
    VLDR            S6, [SP,#0x40+var_24]
    VLDR            S8, [R0,#0x4C]
    VCMPE.F32       S8, S6
      VCMPE.F32       S4, #0.0
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VLDRGT          S4, =0.0 }
      v25 = 0.0;
    VLDR            S6, =0.05
    VMUL.F32        S2, S2, S6
    VMUL.F32        S4, S4, S6
    VMUL.F32        S0, S0, S6
    VSTR            S2, [R0]
  v9 = *((_DWORD *)v1 + 2);
  __asm { VSTR            S4, [R0] }
  v10 = *((_DWORD *)v1 + 2) + 4328;
  __asm { VSTR            S0, [R0] }
LABEL_12:
  result = (BlockSource *)Entity::getRegion(*((Entity **)v1 + 2));
  _R1 = *((_DWORD *)v1 + 3);
  _R2 = 1717986919;
  __asm { SMMUL.W         R2, R1, R2 }
  if ( _R1 - 10 * (((signed int)_R2 >> 2) + (_R2 >> 31)) == 5 )
    v15 = BlockSource::getLevel(result);
    v16 = *((_DWORD *)v1 + 2);
    v17 = *(_QWORD *)(v16 + 72);
    v18 = *(_DWORD *)(v16 + 80);
    v19 = v17;
    v20 = v18;
    result = (BlockSource *)Level::addParticle(v15, 1, (int)&v19);
  return result;
}


void __fastcall SquidFleeGoal::~SquidFleeGoal(SquidFleeGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)Goal::~Goal(this);
  j_j_j__ZdlPv_6(v1);
}


signed int __fastcall SquidFleeGoal::canUse(SquidFleeGoal *this)
{
  SquidFleeGoal *v1; // r4@1
  int v2; // r5@1
  int v3; // r1@1
  signed int result; // r0@1
  Entity *v5; // r4@3
  const Vec3 *v6; // r0@3

  v1 = this;
  v2 = (*(int (**)(void))(**((_DWORD **)this + 2) + 944))();
  v3 = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 208))();
  result = 0;
  if ( v2 && v3 == 1 )
  {
    v5 = (Entity *)*((_DWORD *)v1 + 2);
    v6 = (const Vec3 *)(*(int (__fastcall **)(int))(*(_DWORD *)v2 + 52))(v2);
    _R0 = Entity::distanceToSqr(v5, v6);
    __asm
    {
      VMOV            S2, R0
      VLDR            S0, =100.0
    }
    result = 0;
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      result = 1;
  }
  return result;
}
