

signed int __fastcall Squid::getEntityTypeId(Squid *this)
{
  return 8977;
}


int __fastcall Squid::setTz(int result, float a2)
{
  *(float *)(result + 4328) = a2;
  return result;
}


int __fastcall Squid::getWaterHeights(Squid *this, __int16 *a2, float *a3, float *a4)
{
  Entity *v4; // r7@1
  __int16 *v5; // r9@1
  int v8; // r0@1
  BlockSource *v9; // r4@1
  signed int v10; // r6@1
  Block *v11; // r0@2
  int *v12; // r0@2
  signed int v13; // r5@3
  int result; // r0@4
  char v19; // [sp+4h] [bp-2Ch]@1
  int v20; // [sp+8h] [bp-28h]@1

  v4 = this;
  v5 = a2;
  _R10 = a4;
  _R8 = a3;
  v8 = (*(int (**)(void))(*(_DWORD *)this + 52))();
  BlockPos::BlockPos((int)&v19, v8);
  v9 = (BlockSource *)Entity::getRegion(v4);
  *v5 = BlockSource::getAboveTopSolidBlock(v9, (const BlockPos *)&v19, 0, 0);
  v10 = v20;
  if ( v10 < *(_WORD *)(Entity::getRegion(v4) + 24) )
  {
    do
    {
      v11 = (Block *)BlockSource::getBlock(v9, (const BlockPos *)&v19);
      v12 = (int *)Block::getMaterial(v11);
      if ( Material::isType(v12, 5) != 1 )
        break;
      v13 = ++v20;
    }
    while ( v13 < *(_WORD *)(Entity::getRegion(v4) + 24) );
  }
  __asm
    VLDR            S0, [SP,#0x30+var_28]
    VMOV.F32        S2, #-1.5
    VMOV.F32        S4, #-5.0
    VCVT.F32.S32    S0, S0
    VADD.F32        S6, S0, S2
    VADD.F32        S2, S0, S4
    VSTR            S6, [R10]
    VSTR            S2, [R8]
  result = *v5;
    VMOV            S0, R0
    VLDR            S4, [R10]
    VCMPE.F32       S4, S0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    __asm
      VMOVLT.F32      S2, #0.5
      VADDLT.F32      S2, S0, S2
      VSTRLT          S2, [R10]
      VLDRLT          S2, [R8]
    VCMPE.F32       S2, S0
      VADDLT.F32      S0, S0, S2
      VSTRLT          S0, [R8]
  return result;
}


int __fastcall Squid::Squid(int a1, int a2, int *a3)
{
  int v3; // r4@1

  v3 = a1;
  Mob::Mob(a1, a2, a3);
  *(_DWORD *)v3 = &off_26EF9A4;
  _aeabi_memclr4(v3 + 4292, 56);
  *(_DWORD *)(v3 + 248) = 40;
  _R0 = Random::_genRandInt32((Random *)(v3 + 552));
  __asm
  {
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D1
    VMOV.F32        S2, #1.0
    VCVT.F32.F64    S0, D0
    VADD.F32        S0, S0, S2
    VLDR            S2, =0.2
    VDIV.F32        S0, S2, S0
    VSTR            S0, [R0]
  }
  *(_DWORD *)(v3 + 3984) = 1067030938;
  return v3;
}


void __fastcall Squid::~Squid(Squid *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall Squid::spawnInkParticles(Squid *this)
{
  Entity *v1; // r4@1
  signed int v2; // r7@1
  int v3; // r0@3
  BlockSource *v8; // r8@3
  int v9; // r5@4
  int v10; // r6@4
  int v11; // r2@4
  float v12; // r3@4
  int v13; // r7@5
  int v14; // r6@5
  int v15; // r2@5
  float v16; // r3@5
  int v17; // r6@5
  int v18; // r7@5
  int v19; // r2@5
  float v20; // r3@5
  int v21; // r6@5
  int v22; // r7@5
  int v23; // r2@5
  float v24; // r3@5
  int v25; // r6@5
  int v26; // r7@5
  int v27; // r2@5
  float v28; // r3@5
  int v29; // r5@5
  int v30; // r6@5
  int v31; // r2@5
  float v32; // r3@5
  char v34; // [sp+Ch] [bp-54h]@5
  float v35; // [sp+18h] [bp-48h]@4

  v1 = this;
  v2 = 15;
  if ( Entity::isBaby(this) )
    v2 = 8;
  v3 = Entity::getRegion(v1);
  __asm { VLDR            S16, =0.1 }
  v8 = (BlockSource *)v3;
  do
  {
    v9 = BlockSource::getLevel(v8);
    v10 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v1 + 52))(v1);
    Squid::_randomInkDir((Squid *)&v35, *(float *)&v1, v11, v12);
    __asm
    {
      VLDR            S0, [SP,#0x60+var_48]
      VLDR            S2, [SP,#0x60+var_44]
      VLDR            S4, [SP,#0x60+var_40]
      VMUL.F32        S0, S0, S16
      VMUL.F32        S2, S2, S16
      VMUL.F32        S4, S4, S16
      VSTR            S0, [SP,#0x60+var_3C]
      VSTR            S2, [SP,#0x60+var_38]
      VSTR            S4, [SP,#0x60+var_34]
    }
    Level::addParticle(v9, 29, v10);
    --v2;
  }
  while ( v2 );
  v13 = BlockSource::getLevel(v8);
  v14 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v1 + 52))(v1);
  Squid::_randomInkDir((Squid *)&v34, *(float *)&v1, v15, v16);
  Level::addParticle(v13, 1, v14);
  v17 = BlockSource::getLevel(v8);
  v18 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v1 + 52))(v1);
  Squid::_randomInkDir((Squid *)&v34, *(float *)&v1, v19, v20);
  Level::addParticle(v17, 1, v18);
  v21 = BlockSource::getLevel(v8);
  v22 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v1 + 52))(v1);
  Squid::_randomInkDir((Squid *)&v34, *(float *)&v1, v23, v24);
  Level::addParticle(v21, 1, v22);
  v25 = BlockSource::getLevel(v8);
  v26 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v1 + 52))(v1);
  Squid::_randomInkDir((Squid *)&v34, *(float *)&v1, v27, v28);
  Level::addParticle(v25, 1, v26);
  v29 = BlockSource::getLevel(v8);
  v30 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v1 + 52))(v1);
  Squid::_randomInkDir((Squid *)&v34, *(float *)&v1, v31, v32);
  return Level::addParticle(v29, 1, v30);
}


signed int __fastcall Squid::getJumpPower(Squid *this)
{
  return 1045220557;
}


int __fastcall Squid::setTx(int result, float a2)
{
  *(float *)(result + 4320) = a2;
  return result;
}


unsigned int __fastcall Squid::aiStep(Squid *this)
{
  BlockSource *v14; // r5@8
  int v15; // r0@8
  float v16; // r1@8
  Level *v21; // r0@13
  Level *v25; // r0@17
  Level *v29; // r0@19
  int v30; // r6@19
  int v31; // r0@19
  float v32; // r1@19
  unsigned int result; // r0@22
  int v36; // r0@24
  int v43; // r5@26
  int v44; // r6@26
  int v45; // r2@26
  float v46; // r3@26
  int v50; // r0@27
  float v56; // [sp+10h] [bp-50h]@26

  _R4 = this;
  *((_DWORD *)this + 1037) = 0;
  *((_DWORD *)this + 1038) = 0;
  Mob::aiStep(this);
  *((_DWORD *)_R4 + 1077) = *((_DWORD *)_R4 + 1076);
  *((_DWORD *)_R4 + 1079) = *((_DWORD *)_R4 + 1078);
  *((_DWORD *)_R4 + 1084) = *((_DWORD *)_R4 + 1083);
  *((_DWORD *)_R4 + 1086) = *((_DWORD *)_R4 + 1085);
  _R0 = Entity::getAirSupply(_R4);
  __asm
  {
    VMOV            S0, R0
    VCVT.F32.S32    S16, S0
  }
  _R0 = Entity::getTotalAirSupply(_R4);
    VCMPE.F32       S16, #0.0
    VLDR            S0, =0.0
    VMRS            APSR_nzcv, FPSCR
    VMOV            S2, R0
    VCVT.F32.S32    S2, S2
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S16, S0 }
  __asm { VDIV.F32        S16, S16, S2 }
  Entity::isBaby(_R4);
    VMOV.F32        S20, #1.0
    VMOV.F32        S0, #1.75
  _R7 = (int)_R4 + 4296;
  _R6 = (int)_R4 + 4332;
  _R0 = &mce::Math::PI;
  __asm { VMOV.F32        S2, S20 }
  if ( !_ZF )
    __asm { VMOVNE.F32      S2, S0 }
    VLDR            S0, [R7]
    VMUL.F32        S18, S16, S2
    VLDR            S2, [R6]
    VLDR            S16, [R0]
    VMUL.F32        S0, S18, S0
    VADD.F32        S0, S0, S2
    VADD.F32        S2, S16, S16
    VSTR            S0, [R6]
    VCMPE.F32       S0, S2
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm
    {
      VSUB.F32        S0, S0, S2
      VSTR            S0, [R6]
    }
    if ( !(Random::_genRandInt32((Squid *)((char *)_R4 + 552)) % 0xA) )
      _R0 = Random::_genRandInt32((Squid *)((char *)_R4 + 552));
      __asm
      {
        VMOV            S0, R0
        VLDR            D1, =2.32830644e-10
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D1
        VCVT.F32.F64    S0, D0
        VADD.F32        S0, S0, S20
        VLDR            S2, =0.2
        VDIV.F32        S0, S2, S0
        VSTR            S0, [R7]
      }
  _R9 = (int)_R4 + 4312;
  _R8 = (Squid *)((char *)_R4 + 4304);
  v14 = (BlockSource *)Entity::getRegion(_R4);
  v15 = (*(int (__fastcall **)(Squid *))(*(_DWORD *)_R4 + 208))(_R4);
  __asm { VLDR            S0, [R6] }
  if ( v15 == 1 )
      VCMPE.F32       S0, S16
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
        VDIV.F32        S18, S0, S16
        VMUL.F32        S0, S18, S18
        VMUL.F32        S0, S0, S16
        VMOV            R0, S0
      _R0 = mce::Math::sin(_R0, v16);
        VMOV.F32        S0, #0.25
        VMOV            S2, R0
        VMUL.F32        S0, S2, S0
        VMOV.F32        S2, #0.75
        VCMPE.F32       S18, S2
        VMRS            APSR_nzcv, FPSCR
        VSTR            S0, [R10]
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        *((_DWORD *)_R4 + 1073) = 1065353216;
        *((_DWORD *)_R4 + 1075) = 1065353216;
        goto LABEL_17;
      __asm { VLDR            S0, =0.8 }
      _R0 = (int)_R4 + 4300;
        VLDR            S2, [R0]
    else
      __asm { VLDR            S0, =0.9 }
      *((_DWORD *)_R4 + 1085) = 0;
      _R0 = (int)_R4 + 4292;
        VLDR            S2, =0.99
        VSTR            S0, [R0]
        VLDR            S0, [R0]
        VMUL.F32        S0, S0, S2
    __asm { VSTR            S0, [R0] }
LABEL_17:
    v25 = (Level *)BlockSource::getLevel(v14);
    if ( !Level::isClientSide(v25) )
      _R0 = (int)_R4 + 4320;
        VLDR            S0, [R4,#0x6C]
        VLDR            S4, =0.22
      _R0 = (int)_R4 + 4324;
        VSUB.F32        S2, S2, S0
        VMUL.F32        S2, S2, S4
        VADD.F32        S0, S2, S0
        VSTR            S0, [R4,#0x6C]
        VLDR            S2, [R4,#0x70]
      _R0 = (int)_R4 + 4328;
        VSUB.F32        S0, S0, S2
        VMUL.F32        S0, S0, S4
        VADD.F32        S0, S0, S2
        VSTR            S0, [R4,#0x70]
        VLDR            S2, [R4,#0x74]
        VSTR            S0, [R4,#0x74]
    goto LABEL_19;
    VMOV            R0, S0
    VMOV.F32        S0, #0.25
    VMUL.F32        S20, S16, S0
  _R0 = mce::Math::sin(_R0, v16) & 0x7FFFFFFF;
    VMUL.F32        S0, S20, S0
    VSTR            S0, [R10]
    VSTR            S18, [R0]
  *((_DWORD *)_R4 + 27) = 0;
  *((_DWORD *)_R4 + 29) = 0;
  *((_DWORD *)_R4 + 1081) = 0;
  v21 = (Level *)BlockSource::getLevel(v14);
  if ( !Level::isClientSide(v21) )
      VLDR            S0, =-0.08
      VLDR            S2, [R4,#0x70]
      VADD.F32        S0, S2, S0
      VLDR            S2, =0.98
      VMUL.F32        S0, S0, S2
      VSTR            S0, [R4,#0x70]
LABEL_19:
  v29 = (Level *)Entity::getLevel(_R4);
  v30 = Level::isClientSide(v29);
  v31 = (*(int (__fastcall **)(Squid *))(*(_DWORD *)_R4 + 208))(_R4);
  if ( v30 )
    if ( v31 == 1 )
      __asm { VMOV.F32        S0, #1.5 }
        VMUL.F32        S0, S16, S0
        VLDR            S2, [R9]
        VSTR            S0, [R9]
    *((_DWORD *)_R4 + 853) = *((_DWORD *)_R4 + 31);
    result = *((_DWORD *)_R4 + 30);
    *(_DWORD *)_R8 = result;
  else if ( v31 == 1 )
      VLDR            S0, [R4,#0x6C]
      VLDR            S2, [R4,#0x74]
      VMUL.F32        S0, S0, S0
      VMUL.F32        S2, S2, S2
      VMOV            R0, S0
    v36 = mce::Math::sqrt(_R0, v32);
    __asm { VLDR            S0, [R4,#0x6C] }
    _R6 = v36;
      VCVT.F64.F32    D0, S0
      VCVT.F64.F32    D1, S2
      VMOV            R0, R1, D0
      VMOV            R2, R3, D1
    _R0 = atan2(_R0, _R2);
      VMOV            D0, R0, R1
      VLDR            S18, =0.1
      VMOV.F32        S4, #1.5
      VCVT.F32.F64    S0, D0
    LODWORD(_R0) = &mce::Math::RADDEG;
    __asm { VLDR            S20, [R0] }
    LODWORD(_R0) = (char *)_R4 + 3412;
      VNMUL.F32       S0, S20, S0
      VLDR            S2, [R0]
      VMUL.F32        S0, S0, S18
      VADD.F32        S0, S0, S2
      VMUL.F32        S2, S16, S4
      VMOV            S16, R6
      VSTR            S0, [R0]
    LODWORD(_R0) = (char *)_R4 + 4300;
      VSTR            S0, [R4,#0x7C]
      VLDR            S0, [R0]
      VMUL.F32        S0, S2, S0
      VLDR            S2, [R9]
      VCVT.F64.F32    D1, S16
      VMOV            R0, R1, D1
      VSTR            S0, [R9]
      VLDR            S0, [R4,#0x70]
      VMOV            R2, R3, D0
    _R0 = COERCE_UNSIGNED_INT64(atan2(_R0, _R2));
      VLDR            S2, [R8]
      VSTR            S0, [R8]
      VSTR            S0, [R4,#0x78]
    result = Random::_genRandInt32((Squid *)((char *)_R4 + 552));
      VMOV            S0, R0
      VLDR            D1, =2.32830644e-10
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D1
      v43 = BlockSource::getLevel(v14);
      v44 = (*(int (__fastcall **)(Squid *))(*(_DWORD *)_R4 + 52))(_R4);
      Squid::_randomInkDir((Squid *)&v56, *(float *)&_R4, v45, v46);
        VLDR            S0, [SP,#0x60+var_50]
        VLDR            S2, [SP,#0x60+var_4C]
        VLDR            S4, [SP,#0x60+var_48]
        VMUL.F32        S0, S0, S18
        VMUL.F32        S2, S2, S18
        VMUL.F32        S4, S4, S18
        VSTR            S0, [SP,#0x60+var_44]
        VSTR            S2, [SP,#0x60+var_40]
        VSTR            S4, [SP,#0x60+var_3C]
      result = Level::addParticle(v43, 1, v44);
  else
    _R6 = (int)_R4 + 4328;
    _R7 = (int)_R4 + 4320;
      VLDR            S0, [R6]
      VLDR            S2, [R7]
    v50 = mce::Math::sqrt(_R0, v32);
    __asm { VLDR            S0, [R6] }
    _R5 = v50;
    __asm { VLDR            S16, [R0] }
      VNMUL.F32       S0, S16, S0
      VMOV            S2, R5
    LODWORD(_R0) = (char *)_R4 + 4324;
    result = COERCE_UNSIGNED_INT64(atan2(_R0, _R2));
  return result;
}


int __fastcall Squid::setTy(int result, float a2)
{
  *(float *)(result + 4324) = a2;
  return result;
}


int __fastcall Squid::setZBodyRot(int result, float *a2)
{
  *(float *)(result + 4312) = *a2;
  return result;
}


int __fastcall Squid::travel(Squid *this, float a2, float a3)
{
  Squid *v3; // r4@1
  Level *v4; // r0@1
  int result; // r0@1

  v3 = this;
  v4 = (Level *)Entity::getLevel(this);
  result = Level::isClientSide(v4);
  if ( !result )
    result = (*(int (__fastcall **)(Squid *, char *))(*(_DWORD *)v3 + 76))(v3, (char *)v3 + 108);
  return result;
}


int __fastcall Squid::_hurt(Squid *this, const EntityDamageSource *a2, int a3, int a4, bool a5)
{
  Squid *v5; // r5@1
  const EntityDamageSource *v6; // r6@1
  int v7; // r4@1
  int v8; // r0@2
  int v9; // r0@4

  v5 = this;
  v6 = a2;
  v7 = Mob::_hurt(this, a2, a3, a4, a5);
  if ( (*(int (__fastcall **)(const EntityDamageSource *))(*(_DWORD *)v6 + 8))(v6) == 1 )
  {
    Squid::spawnInkParticles(v5);
    v8 = Entity::getLevel(v5);
    Level::broadcastEntityEvent(v8, (int)v5, 15, 0);
  }
  else if ( Mob::getJumpControl(v5) )
    v9 = Mob::getJumpControl(v5);
    (*(void (**)(void))(*(_DWORD *)v9 + 8))();
  return v7;
}


signed int __fastcall Squid::getAmbientSoundPostponeTicks(Squid *this)
{
  signed int result; // r0@2
  float v6; // [sp+4h] [bp-Ch]@1

  v6 = 0.0;
  if ( Entity::getAmbientSoundIntervalMin(this, &v6) == 1 )
  {
    __asm
    {
      VMOV.F32        S0, #20.0
      VLDR            S2, [SP,#0x10+var_C]
      VMUL.F32        S0, S2, S0
      VCVTR.S32.F32   S0, S0
      VMOV            R0, S0
    }
  }
  else
    result = 120;
  return result;
}


signed int __fastcall Squid::checkSpawnRules(Squid *this, bool a2)
{
  BlockSource *v3; // r4@1
  int *v4; // r0@1
  signed int v5; // r0@1
  int v6; // r7@1
  int *v7; // r0@2
  signed int v8; // r0@2
  char v9; // r0@3
  int v14; // r0@3
  void (__fastcall *v16)(Squid *, int *); // r7@5
  mce::Math **v17; // r5@5
  signed int result; // r0@6
  int v19; // [sp+0h] [bp-38h]@5
  int v20; // [sp+Ch] [bp-2Ch]@1
  int v21; // [sp+10h] [bp-28h]@1
  int v22; // [sp+14h] [bp-24h]@1
  int v23; // [sp+18h] [bp-20h]@1
  int v24; // [sp+1Ch] [bp-1Ch]@1
  int v25; // [sp+20h] [bp-18h]@1

  _R5 = this;
  v3 = (BlockSource *)Entity::getRegion(this);
  BlockPos::BlockPos((int)&v23, (int)_R5 + 72);
  v20 = v23;
  v21 = v24 + 1;
  v22 = v25;
  v4 = (int *)BlockSource::getMaterial(v3, (const BlockPos *)&v20);
  v5 = Material::isType(v4, 5);
  v6 = v24;
  if ( v5 == 1 )
  {
    do
    {
      v24 = v6 + 1;
      v20 = v23;
      v21 = v6 + 2;
      v22 = v25;
      v7 = (int *)BlockSource::getMaterial(v3, (const BlockPos *)&v20);
      v8 = Material::isType(v7, 5);
      v6 = v24;
    }
    while ( v8 );
  }
  v9 = Random::_genRandInt32((Squid *)((char *)_R5 + 552));
  __asm
    VLDR            S0, [R5,#0x4C]
    VCVTR.S32.F32   S0, S0
  v14 = v6 - 2 - (v9 & 3);
  __asm { VMOV            R1, S0 }
  if ( v14 < _R1 )
    v14 = _R1;
  v24 = v14;
  v16 = *(void (__fastcall **)(Squid *, int *))(*(_DWORD *)_R5 + 48);
  Vec3::Vec3((int)&v19, (int)&v23);
  v16(_R5, &v19);
  v17 = (mce::Math **)((char *)_R5 + 264);
  if ( BlockSource::containsAnySolidBlocking(v3, (const AABB *)v17) )
    result = 0;
  else
    result = BlockSource::containsMaterial(v3, v17, 5);
  return result;
}


void __fastcall Squid::handleEntityEvent(MinecraftEventing *this, signed int a2, Mob *a3)
{
  Squid::handleEntityEvent(this, a2, a3);
}


void __fastcall Squid::handleEntityEvent(MinecraftEventing *this, signed int a2, Mob *a3)
{
  if ( a2 == 15 )
    j_j_j__ZN5Squid17spawnInkParticlesEv(this);
  else
    j_j_j__ZN3Mob17handleEntityEventE11EntityEventi(this, a2, a3);
}


int __fastcall Squid::setXBodyRotO(int result, float *a2)
{
  *(float *)(result + 4308) = *a2;
  return result;
}


int __fastcall Squid::setZBodyRotO(int result, float *a2)
{
  *(float *)(result + 4316) = *a2;
  return result;
}


void __fastcall Squid::~Squid(Squid *this)
{
  Squid::~Squid(this);
}


unsigned int __fastcall Squid::_randomInkDir(Squid *this, float a2, int a3, float a4)
{
  Squid *v4; // r8@1
  unsigned int v11; // r0@1
  unsigned int result; // r0@1
  float v14; // [sp+4h] [bp-54h]@1

  v4 = this;
  _R5 = a2;
  Entity::getViewVector((Entity *)&v14, a2, 0.0, a4);
  __asm
  {
    VLDR            S16, [SP,#0x58+var_54]
    VLDR            S18, [SP,#0x58+var_50]
    VLDR            S20, [SP,#0x58+var_4C]
  }
  _R7 = Random::_genRandInt32((Random *)(LODWORD(_R5) + 552));
  __asm { VLDR            S22, [R5,#0x130] }
  v11 = Random::_genRandInt32((Random *)(LODWORD(_R5) + 552));
  __asm { VMOV            S0, R7 }
  _R4 = v11;
    VLDR            S24, [R5,#0x134]
    VCVT.F64.U32    D13, S0
  result = Random::_genRandInt32((Random *)(LODWORD(_R5) + 552));
    VMOV            S2, R0
    VLDR            D0, =2.32830644e-10
    VMOV            S4, R4
    VCVT.F64.U32    D1, S2
    VMUL.F64        D3, D13, D0
    VCVT.F64.U32    D2, S4
    VMUL.F64        D1, D1, D0
    VMUL.F64        D0, D2, D0
    VCVT.F32.F64    S4, D3
    VCVT.F32.F64    S2, D1
    VMOV.F32        S6, #0.25
    VLDR            S14, [R5,#0x130]
    VADD.F32        S4, S4, S4
    VADD.F32        S2, S2, S2
    VCVT.F32.F64    S0, D0
    VMOV.F32        S8, #0.5
    VMUL.F32        S10, S18, S6
    VMUL.F32        S12, S16, S6
    VMUL.F32        S4, S22, S4
    VMUL.F32        S6, S20, S6
    VMUL.F32        S2, S14, S2
    VMUL.F32        S0, S0, S24
    VSUB.F32        S8, S8, S10
    VSUB.F32        S4, S4, S12
    VSUB.F32        S2, S2, S6
    VADD.F32        S0, S0, S8
    VSUB.F32        S4, S4, S22
    VSUB.F32        S2, S2, S14
    VMUL.F32        S6, S0, S0
    VMUL.F32        S8, S4, S4
    VMUL.F32        S10, S2, S2
    VADD.F32        S6, S6, S8
    VLDR            S8, =0.0001
    VADD.F32        S6, S6, S10
    VSQRT.F32       S6, S6
    VCMPE.F32       S6, S8
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    result = dword_2822498;
    *(_QWORD *)v4 = *(_QWORD *)&Vec3::ZERO;
    *((_DWORD *)v4 + 2) = result;
  else
    __asm
    {
      VDIV.F32        S4, S4, S6
      VDIV.F32        S0, S0, S6
      VDIV.F32        S2, S2, S6
      VSTR            S4, [R8]
      VSTR            S0, [R8,#4]
      VSTR            S2, [R8,#8]
    }
  return result;
}


signed int __fastcall Squid::checkForSteeringCollision(Squid *this, const Vec3 *a2, float a3, Vec3 *a4)
{
  Squid *v4; // r5@1
  Vec3 *v6; // r4@1
  int v8; // r0@1
  __int64 v9; // r1@1
  signed int v15; // r7@1
  const Vec3 *v16; // r0@2
  const Vec3 *v17; // r8@2
  int v21; // ST14_4@4
  int v22; // ST10_4@4
  unsigned int v26; // r0@4
  float v30; // [sp+18h] [bp-1E8h]@4
  int v31; // [sp+24h] [bp-1DCh]@4
  float v32; // [sp+68h] [bp-198h]@4
  int v33; // [sp+74h] [bp-18Ch]@4
  int v34; // [sp+78h] [bp-188h]@4
  int v35; // [sp+7Ch] [bp-184h]@4
  int v36; // [sp+80h] [bp-180h]@4
  int v37; // [sp+84h] [bp-17Ch]@4
  int v38; // [sp+88h] [bp-178h]@4
  int v39; // [sp+8Ch] [bp-174h]@4
  int v40; // [sp+90h] [bp-170h]@4
  int v41; // [sp+94h] [bp-16Ch]@4
  int v42; // [sp+98h] [bp-168h]@4
  int v43; // [sp+9Ch] [bp-164h]@4
  int v44; // [sp+A0h] [bp-160h]@4
  int v45; // [sp+A4h] [bp-15Ch]@4
  int v46; // [sp+A8h] [bp-158h]@4
  int v47; // [sp+ACh] [bp-154h]@4
  int v48; // [sp+B0h] [bp-150h]@4
  int v49; // [sp+B8h] [bp-148h]@4
  int v50; // [sp+BCh] [bp-144h]@4
  int v51; // [sp+C0h] [bp-140h]@4
  int v52; // [sp+C4h] [bp-13Ch]@4
  int v53; // [sp+C8h] [bp-138h]@4
  int v54; // [sp+CCh] [bp-134h]@4
  int v55; // [sp+D0h] [bp-130h]@4
  int v56; // [sp+D4h] [bp-12Ch]@4
  int v57; // [sp+D8h] [bp-128h]@4
  int v58; // [sp+DCh] [bp-124h]@4
  int v59; // [sp+E0h] [bp-120h]@4
  int v60; // [sp+E4h] [bp-11Ch]@4
  int v61; // [sp+E8h] [bp-118h]@4
  int v62; // [sp+ECh] [bp-114h]@4
  int v63; // [sp+F0h] [bp-110h]@4
  int v64; // [sp+F4h] [bp-10Ch]@4
  int v65; // [sp+F8h] [bp-108h]@4
  int v66; // [sp+FCh] [bp-104h]@4
  int v67; // [sp+100h] [bp-100h]@4
  int v68; // [sp+104h] [bp-FCh]@4
  int v69; // [sp+108h] [bp-F8h]@4
  int v70; // [sp+10Ch] [bp-F4h]@4
  int v71; // [sp+110h] [bp-F0h]@4
  int v72; // [sp+114h] [bp-ECh]@4
  int v73; // [sp+118h] [bp-E8h]@4
  int v74; // [sp+11Ch] [bp-E4h]@4
  int v75; // [sp+120h] [bp-E0h]@4
  int v76; // [sp+124h] [bp-DCh]@4
  int v77; // [sp+128h] [bp-D8h]@4
  int v78; // [sp+12Ch] [bp-D4h]@4
  int v79; // [sp+130h] [bp-D0h]@4
  int v80; // [sp+134h] [bp-CCh]@4
  float v81; // [sp+138h] [bp-C8h]@2
  int v82; // [sp+144h] [bp-BCh]@2
  __int64 v83; // [sp+188h] [bp-78h]@1
  int v84; // [sp+190h] [bp-70h]@1

  v4 = this;
  _R7 = a2;
  v6 = a4;
  _R6 = a3;
  v8 = (*(int (**)(void))(*(_DWORD *)this + 52))();
  v9 = *(_QWORD *)v8;
  v84 = *(_DWORD *)(v8 + 8);
  v83 = v9;
  _R0 = *(_DWORD *)_R7;
  __asm
  {
    VLDR            S0, [R7,#4]
    VLDR            S2, [R7,#8]
  }
  v15 = 0;
  __asm { VMOV            S4, R0 }
  *(_DWORD *)v6 = _R0;
    VMUL.F32        S6, S0, S0
    VSTR            S0, [R4,#4]
    VMUL.F32        S8, S4, S4
    VSTR            S2, [R4,#8]
    VMUL.F32        S10, S2, S2
    VADD.F32        S6, S6, S8
    VADD.F32        S6, S6, S10
    VSQRT.F32       S6, S6
    VCMPE.F32       S6, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm
    {
      VMOV.F32        S8, #1.0
      VMOV            S16, R6
      VDIV.F32        S6, S8, S6
      VMUL.F32        S18, S6, S4
      VMUL.F32        S22, S6, S0
      VMUL.F32        S20, S6, S2
      VMUL.F32        S24, S18, S16
      VMUL.F32        S26, S22, S16
      VMUL.F32        S28, S20, S16
    }
    v16 = (const Vec3 *)Entity::getRegion(v4);
    __asm { VLDR            S0, [SP,#0x200+var_78] }
    v17 = v16;
      VLDR            S2, [SP,#0x200+var_78+4]
      VLDR            S4, [SP,#0x200+var_70]
      VADD.F32        S0, S0, S24
      VADD.F32        S2, S2, S26
      VADD.F32        S4, S4, S28
      VSTR            S0, [SP,#0x200+var_C8]
      VSTR            S2, [SP,#0x200+var_C4]
      VSTR            S4, [SP,#0x200+var_C0]
    BlockSource::clip((BlockSource *)&v82, v16, (const Vec3 *)&v83, (int)&v81, 0, 1, 200, 0);
    if ( (v82 & 0xFFFFFFFE) == 2 )
      __asm
      {
        VSTR            S18, [R4]
        VSTR            S22, [R4,#4]
        VSTR            S20, [R4,#8]
      }
      return 0;
    v65 = 1065353216;
    v68 = 0;
    v69 = 0;
    v66 = 0;
    v67 = 0;
    v72 = 0;
    v73 = 0;
    v70 = 1065353216;
    v71 = 0;
    v74 = 0;
    v75 = 1065353216;
    v78 = 0;
    v79 = 0;
    v76 = 0;
    v77 = 0;
    v80 = 1065353216;
    v51 = 0;
    v52 = 0;
    v49 = 1065353216;
    v50 = 0;
    v53 = 0;
    v54 = 1065353216;
    v57 = 0;
    v58 = 0;
    v55 = 0;
    v56 = 0;
    v59 = 1065353216;
    v63 = 0;
    v61 = 0;
    v62 = 0;
    v60 = 0;
    v64 = 1065353216;
    v31 = 1106247680;
    glm::rotate<float>((int)&v33, (int)&v65, (int)&v31, (int)&Vec3::UNIT_Y);
    v65 = v33;
    v66 = v34;
    v67 = v35;
    v68 = v36;
    v69 = v37;
    v70 = v38;
    v71 = v39;
    v72 = v40;
    v73 = v41;
    v74 = v42;
    v75 = v43;
    v76 = v44;
    v77 = v45;
    v78 = v46;
    v79 = v47;
    v80 = v48;
    v31 = -1041235968;
    glm::rotate<float>((int)&v33, (int)&v49, (int)&v31, (int)&Vec3::UNIT_Y);
      VLDR            S0, [SP,#0x200+var_108]
      VLDR            S2, [SP,#0x200+var_104]
      VLDR            S4, [SP,#0x200+var_100]
      VMUL.F32        S0, S0, S18
      VLDR            S6, [SP,#0x200+var_E8]
      VMUL.F32        S2, S2, S18
      VLDR            S8, [SP,#0x200+var_E4]
      VMUL.F32        S4, S4, S18
      VLDR            S10, [SP,#0x200+var_E0]
      VMUL.F32        S6, S6, S20
      VMUL.F32        S8, S8, S20
      VMUL.F32        S10, S10, S20
    v49 = v33;
    v50 = v34;
    v51 = v35;
      VADD.F32        S26, S6, S0
      VADD.F32        S24, S8, S2
    v52 = v36;
      VADD.F32        S22, S10, S4
      VLDR            S6, [SP,#0x200+var_78]
      VLDR            S8, [SP,#0x200+var_78+4]
      VLDR            S10, [SP,#0x200+var_70]
    v53 = v37;
      VMUL.F32        S0, S26, S16
      VMUL.F32        S2, S24, S16
    v54 = v38;
    __asm { VMUL.F32        S4, S22, S16 }
    v55 = v39;
    v56 = v40;
    _R11 = v41;
    __asm { VADD.F32        S0, S6, S0 }
    _R7 = v42;
    __asm { VADD.F32        S2, S8, S2 }
    _R10 = v43;
    __asm { VADD.F32        S4, S10, S4 }
    v57 = v41;
    v58 = v42;
    v59 = v43;
    v60 = v44;
    v21 = v45;
    v61 = v45;
    v22 = v46;
    v62 = v46;
    _R9 = v47;
    v63 = v47;
    v64 = v48;
      VSTR            S0, [SP,#0x200+var_198]
      VSTR            S2, [SP,#0x200+var_194]
      VLDR            S28, [SP,#0x200+var_FC]
      VLDR            S30, [SP,#0x200+var_148]
      VLDR            S17, [SP,#0x200+var_144]
      VLDR            S19, [SP,#0x200+var_140]
      VLDR            S21, [SP,#0x200+var_DC]
      VSTR            S4, [SP,#0x200+var_190]
    BlockSource::clip((BlockSource *)&v33, v17, (const Vec3 *)&v83, (int)&v32, 0, 1, 200, 0);
    __asm { VMUL.F32        S4, S28, S18 }
    _R0 = v21;
      VMUL.F32        S6, S21, S20
      VMOV            S0, R7
      VMOV            S2, R11
      VMOV            S8, R10
      VMUL.F32        S2, S2, S20
      VMUL.F32        S10, S30, S18
      VMUL.F32        S0, S0, S20
      VADD.F32        S4, S6, S4
      VMUL.F32        S6, S17, S18
      VMUL.F32        S12, S19, S18
      VMOV            S14, R0
    _R0 = v22;
      VMOV            S3, R9
      VADD.F32        S2, S2, S10
      VMOV            S1, R0
      VMUL.F32        S10, S14, S4
      VADD.F32        S0, S0, S6
      VMUL.F32        S6, S1, S4
      VADD.F32        S8, S8, S12
      VMUL.F32        S4, S3, S4
      VADD.F32        S28, S2, S10
      VADD.F32        S20, S0, S6
      VADD.F32        S18, S8, S4
      VMUL.F32        S0, S28, S16
      VMUL.F32        S2, S20, S16
      VMUL.F32        S4, S18, S16
      VADD.F32        S0, S6, S0
      VADD.F32        S2, S8, S2
      VADD.F32        S4, S10, S4
      VSTR            S0, [SP,#0x200+var_1E8]
      VSTR            S2, [SP,#0x200+var_1E4]
      VSTR            S4, [SP,#0x200+var_1E0]
    BlockSource::clip((BlockSource *)&v31, v17, (const Vec3 *)&v83, (int)&v30, 0, 1, 200, 0);
    v26 = v31 & 0xFFFFFFFE;
    if ( (v33 & 0xFFFFFFFE) == 2 )
      if ( v26 != 2 || Random::_genRandInt32((Squid *)((char *)v4 + 552)) & 0x8000000 )
        __asm
        {
          VSTR            S26, [R4]
          VSTR            S24, [R4,#4]
          VSTR            S22, [R4,#8]
        }
        return 0;
LABEL_9:
        VSTR            S28, [R4]
        VSTR            S20, [R4,#4]
        VSTR            S18, [R4,#8]
    if ( v26 == 2 )
      goto LABEL_9;
    _R0 = HitResult::distanceTo((HitResult *)&v33, v4);
    __asm { VMOV            S16, R0 }
    _R0 = HitResult::distanceTo((HitResult *)&v31, v4);
      VMOV            S0, R0
      VCMPE.F32       S16, S0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      __asm { VSTR            S28, [R4] }
      v15 = 1;
    else
      __asm { VSTR            S26, [R4] }
        VSTR            S24, [R4,#4]
        VSTR            S22, [R4,#8]
  return v15;
}


unsigned int __fastcall Squid::getExperienceReward(Squid *this)
{
  Entity *v1; // r4@1
  unsigned int result; // r0@3
  Level *v3; // r0@4
  char *v4; // r0@4

  v1 = this;
  if ( *((_DWORD *)this + 861) < 1 || Entity::isBaby(this) )
  {
    result = 0;
  }
  else
    v3 = (Level *)Entity::getLevel(v1);
    v4 = Level::getRandom(v3);
    result = (Random::_genRandInt32((Random *)v4) & 1) + 1;
  return result;
}


int __fastcall Squid::setXBodyRot(int result, float *a2)
{
  *(float *)(result + 4304) = *a2;
  return result;
}


int __fastcall Squid::chooseRandomDirection(Squid *this, Vec3 *a2)
{
  Random *v2; // r5@1
  float v10; // r1@1
  float v13; // r1@1
  int result; // r0@1

  v2 = (Squid *)((char *)this + 552);
  _R0 = Random::_genRandInt32((Squid *)((char *)this + 552));
  __asm
  {
    VMOV            S0, R0
    VLDR            D8, =2.32830644e-10
    VCVT.F64.U32    D0, S0
  }
  _R0 = &mce::Math::PI;
    VMUL.F64        D0, D0, D8
    VCVT.F32.F64    S0, D0
    VADD.F32        S0, S0, S0
    VLDR            S2, [R0]
    VMUL.F32        S0, S2, S0
    VMOV            R6, S0
  _R0 = mce::Math::cos(_R6, v10);
    VLDR            S18, =0.2
    VMUL.F32        S0, S0, S18
    VSTR            S0, [R4]
  _R0 = Random::_genRandInt32(v2);
    VLDR            S2, =-0.1
    VADD.F32        S0, S0, S2
    VSTR            S0, [R4,#4]
  result = mce::Math::sin(_R6, v13);
    VSTR            S0, [R4,#8]
  return result;
}


signed int __fastcall Squid::checkSpawnObstruction(Squid *this)
{
  return 1;
}
