

void __fastcall Wolf::~Wolf(Wolf *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall Wolf::getTailAngle(Wolf *this, float a2)
{
  Entity *v2; // r4@1
  AttributeInstance *v8; // r0@4
  AttributeInstance *v9; // r4@4
  int result; // r0@8

  v2 = this;
  if ( Entity::isAngry(this) == 1 )
  {
    __asm { VLDR            S0, =0.49 }
    _R0 = &mce::Math::PI;
LABEL_7:
    __asm
    {
      VLDR            S2, [R0]
      VMUL.F32        S0, S2, S0
    }
    goto LABEL_8;
  }
  if ( Entity::isTame(v2) != 1
    || (v8 = (AttributeInstance *)(*(int (__fastcall **)(Entity *, void *))(*(_DWORD *)v2 + 1000))(
                                    v2,
                                    &SharedAttributes::HEALTH),
        (v9 = v8) == 0) )
    __asm { VLDR            S0, =0.2 }
    goto LABEL_7;
  _R0 = AttributeInstance::getDefaultValue(v8, 2);
  __asm { VMOV            S16, R0 }
  _R0 = AttributeInstance::getCurrentValue(v9);
  __asm
    VMOV            S0, R0
    VLDR            S2, =0.02
    VSUB.F32        S0, S0, S16
  _R0 = &mce::Math::PI;
    VMUL.F32        S0, S0, S2
    VLDR            S2, =0.55
    VADD.F32        S0, S0, S2
    VLDR            S2, [R0]
LABEL_8:
  __asm { VMOV            R0, S0 }
  return result;
}


int __fastcall Wolf::Wolf(int a1, int a2, int *a3)
{
  int result; // r0@1

  result = Animal::Animal(a1, a2, a3);
  *(_DWORD *)result = &off_26EFF5C;
  *(_DWORD *)(result + 248) = 11;
  *(_WORD *)(result + 4308) = 0;
  *(_DWORD *)(result + 4304) = 0;
  *(_DWORD *)(result + 4300) = 0;
  *(_DWORD *)(result + 4296) = 0;
  *(_DWORD *)(result + 4292) = 0;
  *(_DWORD *)(result + 3984) = 1067030938;
  return result;
}


int __fastcall Wolf::setWet(int result, bool a2)
{
  *(_BYTE *)(result + 4308) = a2;
  return result;
}


signed int __fastcall Wolf::_avoidSnowBury(Wolf *this)
{
  BlockSource *v2; // r9@1
  int v3; // r0@1
  __int64 v4; // r1@1
  int v5; // r6@1
  signed int v6; // r7@1
  signed int result; // r0@1
  unsigned __int8 v8; // r1@2
  signed int v9; // r8@2
  unsigned int v10; // r0@2
  signed int v12; // r1@2
  int v13; // r0@4
  float v14; // r1@4
  int v19; // r5@4
  int v23; // r5@7
  int v25; // r0@7
  __int16 v26; // [sp+8h] [bp-70h]@7
  char v27; // [sp+Ch] [bp-6Ch]@7
  float v28; // [sp+18h] [bp-60h]@7
  char v29; // [sp+24h] [bp-54h]@2
  TopSnowBlock *v30; // [sp+25h] [bp-53h]@2
  char v31; // [sp+34h] [bp-44h]@1
  __int64 v32; // [sp+40h] [bp-38h]@1
  int v33; // [sp+48h] [bp-30h]@1

  _R4 = this;
  v2 = (BlockSource *)Entity::getRegion(this);
  v3 = (*(int (__fastcall **)(Wolf *))(*(_DWORD *)_R4 + 52))(_R4);
  v4 = *(_QWORD *)v3;
  v33 = *(_DWORD *)(v3 + 8);
  v32 = v4;
  BlockPos::BlockPos((int)&v31, (int)&v32);
  v5 = BlockSource::getBlock(v2, (const BlockPos *)&v31);
  v6 = Block::isType((Block *)v5, (const Block *)Block::mSnow);
  result = Block::isType((Block *)v5, (const Block *)Block::mTopSnow);
  if ( result != 1 )
  {
    if ( v6 != 1 )
      return result;
    goto LABEL_7;
  }
  BlockPos::BlockPos((int)&v30 + 3, (int)&v32);
  BlockSource::getBlockAndData((BlockSource *)&v29, v2, (int)&v30 + 3);
  v9 = TopSnowBlock::dataIDToHeight((TopSnowBlock *)(unsigned __int8)v30, v8);
  v10 = Entity::isBaby(_R4);
  _R7 = 8;
  v12 = 2;
  if ( v10 )
    v12 = 4;
  v13 = 8 / v12;
  __asm { VLDR            S16, [R4,#0x4C] }
  v19 = v13;
  __asm { VMOV            R0, S16 }
  _R0 = mce::Math::floor(_R0, v14);
  __asm
    VMOV            S0, R0
    VMOV            S2, R7
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VSUB.F32        S0, S16, S0
    VMUL.F32        S0, S0, S2
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  result = _R0 + v19;
  if ( v9 >= result )
LABEL_7:
    v23 = BlockSource::getLevel(v2);
    _R0 = (*(int (__fastcall **)(Wolf *))(*(_DWORD *)_R4 + 52))(_R4);
    __asm
    {
      VMOV.F32        S0, #0.5
      VLDR            S2, [R0]
      VLDR            S4, [R0,#4]
      VLDR            S6, [R0,#8]
      VADD.F32        S2, S2, S0
      VADD.F32        S4, S4, S0
      VADD.F32        S0, S6, S0
      VSTR            S2, [SP,#0x78+var_60]
      VSTR            S4, [SP,#0x78+var_5C]
      VSTR            S0, [SP,#0x78+var_58]
    }
    Level::broadcastDimensionEvent(v23, v2, 2001, (int)&v28, *(_BYTE *)(v5 + 4));
    v25 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)_R4 + 52))(_R4);
    BlockPos::BlockPos((int)&v27, v25);
    v26 = FullBlock::AIR;
    BlockSource::setBlockAndData((int)v2, (BlockPos *)&v27, (int)&v26, 3, 0);
    result = 4308;
    *((_BYTE *)_R4 + 4308) = 1;
  return result;
}


unsigned int __fastcall Wolf::normalTick(Wolf *this)
{
  int v3; // r0@1
  int v16; // r0@17
  __int64 v17; // ST10_8@17
  unsigned int result; // r0@18
  float v19; // [sp+18h] [bp-68h]@17
  char v20; // [sp+24h] [bp-5Ch]@11

  _R4 = this;
  Mob::normalTick(this);
  _R5 = (int)_R4 + 4300;
  *((_DWORD *)_R4 + 1076) = *((_DWORD *)_R4 + 1075);
  v3 = Entity::getStatusFlag((int)_R4, 25);
  __asm { VLDR            S0, [R5] }
  if ( v3 == 1 )
  {
    __asm
    {
      VMOV.F32        S2, #1.0
      VLDR            S4, =0.4
      VSUB.F32        S2, S2, S0
      VMUL.F32        S2, S2, S4
      VADD.F32        S0, S2, S0
    }
  }
  else
      VLDR            S2, =0.6
      VMUL.F32        S0, S0, S2
  __asm { VSTR            S0, [R5] }
  if ( Entity::getStatusFlag((int)_R4, 25) == 1 )
    *((_DWORD *)_R4 + 866) = 10;
  if ( (*(int (__fastcall **)(Wolf *))(*(_DWORD *)_R4 + 212))(_R4) == 1 )
    *((_BYTE *)_R4 + 4308) = 1;
  else if ( *((_BYTE *)_R4 + 4309) )
    _R6 = (Wolf *)((char *)_R4 + 4292);
      VLDR            S0, [R6]
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( _ZF )
      Entity::getAttachPos((AABB *)&v20, (int)_R4, 1, 0);
      Entity::playSound((int)_R4, 33, (int)&v20);
      _R0 = *(_DWORD *)_R6;
    else
      __asm { VMOV            R0, S0 }
      VLDR            S2, =0.05
      VMOV            S0, R0
      VMOV.F32        S4, #2.0
      VADD.F32        S2, S0, S2
    *((_DWORD *)_R4 + 1074) = _R0;
      VCMPE.F32       S0, S4
      VSTR            S2, [R6]
    if ( _NF ^ _VF )
      __asm
      {
        VLDR            S4, =0.4
        VCMPE.F32       S2, S4
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm
        {
          VLDR            S2, =-0.35
          VLDR            S16, [R4,#0x10C]
          VADD.F32        S0, S0, S2
        }
        _R0 = &mce::Math::PI;
          VLDR            S2, [R0]
          VMUL.F32        S0, S2, S0
          VMOV            R0, S0
        _R0 = mce::Math::sin(_R0, COERCE_FLOAT(4296));
          VMOV.F32        S0, #7.0
          VMOV            S2, R0
          VCVTR.S32.F32   S0, S0
          VMOV            R6, S0
        if ( _R6 >= 1 )
          __asm
          {
            VLDR            S0, =0.8
            VMOV.F32        S20, #0.5
            VMOV.F32        S22, #-1.0
            VADD.F32        S16, S16, S0
            VLDR            D9, =2.32830644e-10
          }
          do
            _R0 = Random::_genRandInt32((Wolf *)((char *)_R4 + 552));
            __asm
            {
              VMOV            S0, R0
              VLDR            S24, [R4,#0x130]
              VCVT.F64.U32    D13, S0
            }
              VMUL.F64        D1, D13, D9
              VCVT.F64.U32    D0, S0
              VMUL.F64        D0, D0, D9
              VCVT.F32.F64    S2, D1
              VCVT.F32.F64    S0, D0
              VADD.F32        S2, S2, S2
              VLDR            S4, [R4,#0x130]
              VADD.F32        S0, S0, S0
              VMUL.F32        S6, S24, S20
              VMUL.F32        S4, S4, S20
              VADD.F32        S2, S2, S22
              VADD.F32        S0, S0, S22
              VMUL.F32        S24, S6, S2
              VMUL.F32        S26, S4, S0
            v16 = Entity::getLevel(_R4);
              VLDR            S0, [R4,#0x48]
              VLDR            S2, [R4,#0x50]
              VADD.F32        S0, S24, S0
              VADD.F32        S2, S26, S2
              VSTR            S0, [SP,#0x80+var_68]
              VSTR            S16, [SP,#0x80+var_64]
              VSTR            S2, [SP,#0x80+var_60]
            v17 = *((_QWORD *)_R4 + 14);
            Level::addParticle(v16, 21, (int)&v19);
            --_R6;
          while ( _R6 );
      *((_BYTE *)_R4 + 4308) = 0;
      *((_BYTE *)_R4 + 4309) = 0;
      *((_DWORD *)_R4 + 1074) = 0;
      *(_DWORD *)_R6 = 0;
  result = Entity::isSitting(_R4);
  if ( result == 1 )
    result = Wolf::_avoidSnowBury(_R4);
  return result;
}


signed int __fastcall Wolf::getEntityTypeId(Wolf *this)
{
  return 21262;
}


int __fastcall Wolf::getBodyRollAngle(Wolf *this, float _R1, float _R2)
{
  int result; // r0@6

  _R3 = (char *)this + 4296;
  _R0 = (char *)this + 4292;
  __asm
  {
    VMOV            S4, R2
    VLDR            S0, [R3]
    VMOV            S6, R1
    VLDR            S2, [R0]
    VSUB.F32        S2, S2, S0
    VADD.F32        S0, S0, S4
    VMUL.F32        S2, S2, S6
    VADD.F32        S0, S0, S2
    VLDR            S2, =0.55556
    VMUL.F32        S0, S0, S2
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    __asm { VLDR            S0, =0.0 }
  else
    __asm
    {
      VMOV.F32        S2, #1.0
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S0, S2 }
  __asm { VPUSH           {D8-D9} }
  _R0 = &mce::Math::PI;
    VLDR            S16, [R0]
    VMUL.F32        S18, S16, S0
    VMOV            R0, S18
  _R0 = mce::Math::sin(_R0, _R1);
    VMOV.F32        S0, #11.0
    VMUL.F32        S0, S18, S0
    VMOV            S18, R0
    VMOV            R1, S0
  _R0 = mce::Math::sin(_R1, *(float *)&_R1);
    VLDR            S0, =0.15
    VMOV            S2, R0
    VMUL.F32        S0, S0, S16
    VMOV            R0, S0
  return result;
}


signed int __fastcall Wolf::_isHurt(Wolf *this)
{
  AttributeInstance *v1; // r5@1
  signed int v2; // r4@1

  v1 = (AttributeInstance *)BaseAttributeMap::getInstance(
                              *((BaseAttributeMap **)this + 992),
                              (const Attribute *)&SharedAttributes::HEALTH);
  v2 = 0;
  if ( AttributeInstance::getAttribute(v1) )
  {
    _R6 = AttributeInstance::getCurrentValue(v1);
    _R0 = AttributeInstance::getDefaultValue(v1, 2);
    __asm
    {
      VMOV            S0, R6
      VMOV            S2, R0
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      v2 = 1;
  }
  return v2;
}


unsigned int __fastcall Wolf::isAlliedTo(Wolf *this, Mob *a2)
{
  Entity *v2; // r5@1
  Wolf *v3; // r4@1
  char *v4; // r5@2
  unsigned int result; // r0@2
  __int64 v6; // [sp+0h] [bp-18h]@2

  v2 = a2;
  v3 = this;
  if ( Entity::hasCategory((int)a2, 1) == 1 )
  {
    v4 = Entity::getUniqueID(v2);
    Entity::getOwnerId((Entity *)&v6, (int)v3);
    result = 0;
    if ( *(_QWORD *)v4 == v6 )
      result = 1;
  }
  else
    result = Entity::isTame(v2);
  return result;
}


signed int __fastcall Wolf::_hurt(Wolf *this, const EntityDamageSource *a2, int a3, int a4, bool a5)
{
  EntityDamageSource *v5; // r5@1
  Entity *v6; // r4@1
  int v7; // r8@1
  int v8; // r6@1
  Entity *v9; // r7@2
  int v10; // r9@3
  int v11; // r1@3
  int v12; // r0@5
  unsigned int v13; // r0@8
  signed int v14; // r5@8
  char *v15; // r5@10
  AngryComponent *v16; // r0@13
  __int64 v18; // [sp+8h] [bp-38h]@10
  unsigned int v19; // [sp+10h] [bp-30h]@3
  unsigned int v20; // [sp+14h] [bp-2Ch]@3
  int v21; // [sp+1Ch] [bp-24h]@2

  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = a3;
  if ( (*(int (__fastcall **)(const EntityDamageSource *))(*(_DWORD *)a2 + 8))(a2) == 1 )
  {
    v21 = (*(int (__fastcall **)(EntityDamageSource *))(*(_DWORD *)v5 + 40))(v5);
    v9 = 0;
    if ( EntityClassTree::hasCategory(&v21, 1) == 1 )
    {
      v10 = Entity::getLevel(v6);
      (*(void (__fastcall **)(unsigned int *, EntityDamageSource *))(*(_DWORD *)v5 + 32))(&v19, v5);
      v9 = (Entity *)Level::fetchEntity(v10, v11, v19, v20, 0);
    }
  }
  else
  EntityDamageSource::getCause(v5);
  v12 = Animal::_hurt(v6, v5, v8, v7, a5);
  if ( v9 && v12 == 1 && !Entity::isTame(v6) )
    if ( Entity::getAngryComponent(v6) )
      v16 = (AngryComponent *)Entity::getAngryComponent(v6);
      AngryComponent::restartTimer(v16);
      v14 = 1;
    else
    v13 = Entity::isTame(v6);
    v14 = 0;
    if ( v9 && v13 == 1 )
      v15 = Entity::getUniqueID(v9);
      Entity::getOwnerId((Entity *)&v18, (int)v6);
      if ( *(_QWORD *)v15 ^ v18 )
      {
        v14 = 0;
      }
      else
        (*(void (__fastcall **)(Entity *, _DWORD))(*(_DWORD *)v6 + 956))(v6, 0);
  return v14;
}


void __fastcall Wolf::handleEntityEvent(int a1, signed int a2, Mob *a3)
{
  if ( a2 == 8 )
  {
    *(_BYTE *)(a1 + 4309) = 1;
    *(_DWORD *)(a1 + 4292) = 0;
    *(_DWORD *)(a1 + 4296) = 0;
  }
  else
    j_j_j__ZN3Mob17handleEntityEventE11EntityEventi((MinecraftEventing *)a1, a2, a3);
}


unsigned int __fastcall Wolf::addRider(Wolf *this, Entity *a2)
{
  Entity *v2; // r4@1

  v2 = this;
  Entity::addRider(this, a2);
  return j_j_j__ZNK6Entity6isTameEv_0(v2);
}


void __fastcall Wolf::~Wolf(Wolf *this)
{
  Wolf::~Wolf(this);
}


int __fastcall Wolf::getAmbientSound(Wolf *this)
{
  Wolf *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( Entity::isAngry(this) )
  {
    result = 126;
  }
  else if ( Random::_genRandInt32((Wolf *)((char *)v1 + 552)) % 3 )
    result = Mob::getAmbientSound(v1);
  else if ( Entity::isTame(v1) != 1 || Mob::getHealth(v1) >= 10 )
    result = 128;
  else
    result = 127;
  return result;
}


int __fastcall Wolf::onBorn(Wolf *this, Mob *a2, Mob *a3)
{
  Entity *v3; // r5@1
  Entity *v4; // r4@1
  int result; // r0@1
  int v6; // r1@3

  v3 = a3;
  v4 = this;
  result = (*(int (__fastcall **)(Mob *))(*(_DWORD *)a3 + 488))(a3);
  if ( result == 21262 )
  {
    result = Entity::getPlayerOwner(v4);
    if ( result )
    {
      v6 = Entity::getColor(v3);
      result = j_j_j__ZN6Entity8setColorE12PaletteColor_0((int)v4, v6);
    }
  }
  return result;
}


int __fastcall Wolf::doHurtTarget(Wolf *this, Entity *a2)
{
  Entity *v2; // r5@1
  Entity *v3; // r4@1
  AttributeInstance *v4; // r0@1
  int v11; // r4@1
  char v13; // [sp+8h] [bp-40h]@1

  v2 = this;
  v3 = a2;
  v4 = (AttributeInstance *)(*(int (**)(void))(*(_DWORD *)this + 1004))();
  _R6 = AttributeInstance::getCurrentValue(v4);
  EntityDamageByEntitySource::EntityDamageByEntitySource((int)&v13, v2, 2);
  __asm
  {
    VMOV            S0, R6
    VCVTR.S32.F32   S0, S0
    VMOV            R2, S0
  }
  v11 = Entity::hurt(v3, (const EntityDamageSource *)&v13, _R2, 1, 0);
  EntityDamageByEntitySource::~EntityDamageByEntitySource((EntityDamageByEntitySource *)&v13);
  return v11;
}


int __fastcall Wolf::getHeadRollAngle(Wolf *this, float _R1)
{
  int result; // r0@1

  _R2 = (char *)this + 4304;
  _R0 = (char *)this + 4300;
  __asm
  {
    VMOV            S4, R1
    VLDR            S2, [R0]
    VLDR            S0, [R2]
    VSUB.F32        S2, S2, S0
  }
  _R0 = &mce::Math::PI;
    VLDR            S6, [R0]
    VMUL.F32        S2, S2, S4
    VLDR            S4, =0.15
    VMUL.F32        S4, S6, S4
    VADD.F32        S0, S2, S0
    VMUL.F32        S0, S4, S0
    VMOV            R0, S0
  return result;
}


void __fastcall Wolf::handleEntityEvent(int a1, signed int a2, Mob *a3)
{
  Wolf::handleEntityEvent(a1, a2, a3);
}


unsigned int __fastcall Wolf::newServerAiStep(Wolf *this)
{
  Wolf *v1; // r4@1
  unsigned int result; // r0@1
  int v3; // r0@4
  int v4; // r0@6

  v1 = this;
  Mob::newServerAiStep(this);
  result = *((_WORD *)v1 + 2154);
  if ( (_BYTE)result )
  {
    if ( result <= 0xFF )
    {
      result = Mob::getNavigation(v1);
      if ( result )
      {
        v3 = Mob::getNavigation(v1);
        result = (*(int (**)(void))(*(_DWORD *)v3 + 36))();
        if ( result == 1 )
        {
          result = *((_BYTE *)v1 + 216);
          if ( *((_BYTE *)v1 + 216) )
          {
            *((_BYTE *)v1 + 4309) = 1;
            *((_DWORD *)v1 + 1073) = 0;
            *((_DWORD *)v1 + 1074) = 0;
            v4 = Entity::getLevel(v1);
            result = j_j_j__ZN5Level20broadcastEntityEventEP6Entity11EntityEventi_0(v4, (int)v1, 8, 0);
          }
        }
      }
    }
  }
  return result;
}


int __fastcall Wolf::getWetShade(Wolf *this, float _R1)
{
  int result; // r0@1

  _R2 = (char *)this + 4296;
  _R0 = (char *)this + 4292;
  __asm
  {
    VMOV            S4, R1
    VLDR            S0, [R2]
    VLDR            S2, [R0]
    VSUB.F32        S2, S2, S0
    VMUL.F32        S2, S2, S4
    VMOV.F32        S4, #0.125
    VADD.F32        S0, S2, S0
    VMOV.F32        S2, #0.75
    VMUL.F32        S0, S0, S4
    VADD.F32        S0, S0, S2
    VMOV            R0, S0
  }
  return result;
}
