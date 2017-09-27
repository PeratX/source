

signed int __fastcall Parrot::_makeFlySound(Parrot *this)
{
  return 1;
}


void __fastcall Parrot::~Parrot(Parrot *this)
{
  Parrot::~Parrot(this);
}


int __fastcall Parrot::getShadowRadius(Parrot *this)
{
  Entity *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( Entity::isRiding(this) )
    result = 0;
  else
    result = j_j_j__ZNK6Entity15getShadowRadiusEv_0(v1);
  return result;
}


int __fastcall Parrot::getInterpolatedRidingPosition(Parrot *this, float a2, int a3)
{
  Entity *v3; // r5@1
  int result; // r0@1
  int v6; // r0@2

  v3 = (Entity *)LODWORD(a2);
  _R4 = this;
  Entity::getInterpolatedRidingPosition(this, a2, a3);
  result = Entity::isRiding(v3);
  if ( result == 1 )
  {
    v6 = Entity::getRide(v3);
    result = (*(int (**)(void))(*(_DWORD *)v6 + 312))();
    if ( result == 1 )
    {
      __asm
      {
        VLDREQ          S0, =-0.2
        VLDREQ          S2, [R4,#4]
        VADDEQ.F32      S0, S2, S0
        VSTREQ          S0, [R4,#4]
      }
    }
  }
  return result;
}


void __fastcall Parrot::~Parrot(Parrot *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall Parrot::aiStep(Parrot *this)
{
  Parrot *v1; // r4@1
  Level *v2; // r0@5
  int result; // r0@5
  int v4; // r0@7
  int v5; // r0@8

  v1 = this;
  Parrot::_imitateNearbyMobs(this);
  Mob::aiStep(v1);
  Parrot::_calculateFlapping(v1);
  if ( Entity::isRiding(v1) == 1 )
  {
    *((_BYTE *)v1 + 216) = 0;
    (*(void (__fastcall **)(Parrot *, _DWORD))(*(_DWORD *)v1 + 352))(v1, 0);
  }
  if ( !*((_BYTE *)v1 + 216) )
  v2 = (Level *)Entity::getLevel(v1);
  result = Level::isClientSide(v2);
  if ( !result )
    result = Entity::isRiding(v1);
    if ( result == 1 )
    {
      v4 = Entity::getRide(v1);
      result = Entity::hasType(v4, 319);
      if ( result == 1 )
      {
        v5 = Entity::getRide(v1);
        if ( (*(int (**)(void))(*(_DWORD *)v5 + 208))() )
          goto LABEL_15;
        result = *(_BYTE *)(Entity::getRide(v1) + 216);
        if ( !result )
        {
          result = Entity::getRide(v1);
          __asm
          {
            VMOV.F32        S0, #-0.5
            VLDR            S2, [R0,#0x70]
            VCMPE.F32       S2, S0
            VMRS            APSR_nzcv, FPSCR
          }
          if ( _NF ^ _VF )
LABEL_15:
            result = (*(int (__fastcall **)(Parrot *, signed int, _DWORD))(*(_DWORD *)v1 + 596))(v1, 1, 0);
        }
      }
    }
  return result;
}


int __fastcall Parrot::_getImitatedSound(int a1, unsigned int a2)
{
  int v2; // r8@1
  int v3; // r0@1
  int v4; // r7@2
  int v5; // r4@2
  bool v6; // zf@3
  int v7; // r6@6
  bool v8; // zf@9
  int result; // r0@12

  v2 = a1;
  v3 = *(_DWORD *)(dword_27FC1F4 + 4 * (a2 % unk_27FC1F8));
  if ( !v3 )
    goto LABEL_13;
  v4 = *(_DWORD *)v3;
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  while ( 1 )
  {
    v6 = v5 == a2;
    if ( v5 == a2 )
      v6 = *(_DWORD *)(v4 + 4) == a2;
    if ( v6 )
      break;
    v7 = *(_DWORD *)v4;
    if ( *(_DWORD *)v4 )
    {
      v5 = *(_DWORD *)(v7 + 12);
      v3 = v4;
      v4 = *(_DWORD *)v4;
      if ( *(_DWORD *)(v7 + 12) % unk_27FC1F8 == a2 % unk_27FC1F8 )
        continue;
    }
  }
  v8 = v3 == 0;
  if ( v3 )
    v3 = *(_DWORD *)v3;
    v8 = v3 == 0;
  if ( v8 )
LABEL_13:
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 808))(v2);
  else
    result = *(_BYTE *)(v3 + 8);
  return result;
}


signed int __fastcall Parrot::_imitateNearbyMobs(Parrot *this)
{
  Parrot *v1; // r10@1
  signed int v2; // r5@2
  Level *v3; // r0@3
  char *v4; // r0@3
  int v5; // r6@5
  _QWORD *v6; // r0@5
  _DWORD *v7; // r6@5
  __int64 v8; // r0@5
  signed int v9; // r1@6
  unsigned int v10; // r0@8
  unsigned int v11; // r5@8
  int v12; // r9@8
  int v13; // r0@8
  int v14; // r4@9
  int v15; // r6@9
  bool v16; // zf@10
  int v17; // r7@13
  bool v18; // zf@16
  int v19; // r5@19
  char v21; // [sp+4h] [bp-54h]@21
  int v22; // [sp+10h] [bp-48h]@5
  signed int v23; // [sp+14h] [bp-44h]@5
  int v24; // [sp+18h] [bp-40h]@5
  char v25; // [sp+1Ch] [bp-3Ch]@5

  v1 = this;
  if ( (*(int (**)(void))(*(_DWORD *)this + 288))() )
  {
    v2 = 0;
  }
  else
    v3 = (Level *)Entity::getLevel(v1);
    v4 = Level::getRandom(v3);
    if ( Random::_genRandInt32((Random *)v4) % 0x32 )
    {
      v2 = 0;
    }
    else
      v5 = Entity::getRegion(v1);
      v22 = 1101004800;
      v23 = 1101004800;
      v24 = 1101004800;
      AABB::grow((AABB *)&v25, (Parrot *)((char *)v1 + 264), (int)&v22);
      v6 = (_QWORD *)BlockSource::fetchEntities(v5, 2816, (int)&v25, 0);
      v7 = v6;
      v8 = *v6;
      if ( (_DWORD)v8 != HIDWORD(v8) )
      {
        v9 = HIDWORD(v8) - v8;
        if ( 0 != v9 >> 2 )
        {
          HIDWORD(v8) = Random::_genRandInt32((Parrot *)((char *)v1 + 552)) % (v9 >> 2);
          LODWORD(v8) = *v7;
          v2 = HIDWORD(v8);
        }
        v10 = (*(int (**)(void))(**(_DWORD **)(v8 + 4 * v2) + 488))();
        v11 = v10;
        v12 = v10 % unk_27FC1F8;
        v13 = *(_DWORD *)(dword_27FC1F4 + 4 * (v10 % unk_27FC1F8));
        if ( !v13 )
          goto LABEL_20;
        v14 = *(_DWORD *)v13;
        v15 = *(_DWORD *)(*(_DWORD *)v13 + 12);
        while ( 1 )
          v16 = v15 == v11;
          if ( v15 == v11 )
            v16 = *(_DWORD *)(v14 + 4) == v11;
          if ( v16 )
            break;
          v17 = *(_DWORD *)v14;
          if ( *(_DWORD *)v14 )
          {
            v15 = *(_DWORD *)(v17 + 12);
            v13 = v14;
            v14 = *(_DWORD *)v14;
            if ( *(_DWORD *)(v17 + 12) % unk_27FC1F8 == v12 )
              continue;
          }
        v18 = v13 == 0;
        if ( v13 )
          v13 = *(_DWORD *)v13;
          v18 = v13 == 0;
        if ( v18 )
LABEL_20:
          v19 = (*(int (__fastcall **)(Parrot *))(*(_DWORD *)v1 + 808))(v1);
        else
          v19 = *(_BYTE *)(v13 + 8);
        Entity::getAttachPos((AABB *)&v21, (int)v1, 3, 0);
        Entity::playSound((int)v1, v19, (int)&v21);
        v2 = 1;
      }
  return v2;
}


int __fastcall Parrot::isInvulnerableTo(Parrot *this, const EntityDamageSource *a2)
{
  const EntityDamageSource *v2; // r4@1
  Parrot *v3; // r5@1
  int result; // r0@3

  v2 = a2;
  v3 = this;
  if ( Entity::isRiding(this) != 1 || EntityDamageSource::getCause(v2) == 12 )
    result = Animal::isInvulnerableTo(v3, v2);
  else
    result = 1;
  return result;
}


signed int __fastcall Parrot::playAmbientSound(Parrot *this)
{
  Parrot *v1; // r4@1
  signed int result; // r0@1

  v1 = this;
  result = (*(int (**)(void))(*(_DWORD *)this + 288))();
  if ( !result )
  {
    result = Parrot::_imitateNearbyMobs(v1);
    if ( !result )
      result = j_j_j__ZN3Mob16playAmbientSoundEv(v1);
  }
  return result;
}


int __fastcall Parrot::setSitting(int result, int a2)
{
  bool v2; // zf@1

  v2 = a2 == 1;
  if ( a2 == 1 )
    v2 = *(_BYTE *)(result + 216) == 0;
  if ( !v2 )
    result = j_j_j__ZN6Entity10setSittingEb((Entity *)result, a2);
  return result;
}


int __fastcall Parrot::rideLanded(int result, const Vec3 *_R1, const Vec3 *_R2)
{
  __asm
  {
    VLDR            S0, [R2,#4]
    VLDR            S2, [R1,#4]
    VSUB.F32        S0, S2, S0
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !(_NF ^ _VF) )
    result = (*(int (**)(void))(*(_DWORD *)result + 596))();
  return result;
}


unsigned int __fastcall Parrot::canBePulledIntoVehicle(Parrot *this)
{
  unsigned int result; // r0@2

  if ( *((_BYTE *)this + 216) )
    result = Entity::isSitting(this) ^ 1;
  else
    result = 0;
  return result;
}


int __fastcall Parrot::_playStepSound(Parrot *this, const BlockPos *a2, int a3)
{
  Parrot *v3; // r4@1
  char v5; // [sp+4h] [bp-1Ch]@1

  v3 = this;
  Entity::getAttachPos((AABB *)&v5, (int)this, 0, 0);
  return Entity::playSound((int)v3, 2, (int)&v5);
}


int __fastcall Parrot::_getWalkTargetValue(Parrot *this, const BlockPos *a2)
{
  const BlockPos *v2; // r4@1
  const BlockPos *v3; // r0@1
  int result; // r0@5
  unsigned __int8 v9; // [sp+4h] [bp-Ch]@1

  v2 = a2;
  v3 = (const BlockPos *)Entity::getRegion(this);
  BlockSource::getBlockID((BlockSource *)&v9, v3, (int)v2);
  __asm { VMOV.F32        S0, #10.0 }
  if ( v9 != *(_BYTE *)(Block::mAir + 4) && v9 != *(_BYTE *)(Block::mLog + 4) )
  {
    __asm
    {
      VMOV.F32        S2, #10.0
      VLDR            S0, =0.0
    }
    if ( v9 == *(_BYTE *)(Block::mLog2 + 4) )
      __asm { VMOVEQ.F32      S0, S2 }
  }
  __asm { VMOV            R0, S0 }
  return result;
}


unsigned int __fastcall Parrot::getExperienceReward(Parrot *this)
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


int __fastcall Parrot::reloadHardcodedClient(int a1)
{
  int v1; // r4@1
  DanceComponent *v2; // r5@1
  int result; // r0@1

  v1 = a1;
  Mob::reloadHardcodedClient(a1);
  v2 = (DanceComponent *)operator new(0x18u);
  DanceComponent::DanceComponent(v2, (Entity *)v1, 12.0);
  result = *(_DWORD *)(v1 + 3268);
  *(_DWORD *)(v1 + 3268) = v2;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


int __fastcall Parrot::feed(Parrot *this, int a2)
{
  Entity *v2; // r5@1
  int v3; // r4@1
  Level *v4; // r0@1
  int v5; // r0@1
  int v7; // [sp+0h] [bp-38h]@1
  void **v8; // [sp+8h] [bp-30h]@1
  int v9; // [sp+Ch] [bp-2Ch]@1
  int v10; // [sp+10h] [bp-28h]@1
  char v11; // [sp+14h] [bp-24h]@1
  __int64 v12; // [sp+18h] [bp-20h]@1
  char v13; // [sp+20h] [bp-18h]@1
  int v14; // [sp+24h] [bp-14h]@1

  v2 = this;
  v3 = a2;
  Entity::getRuntimeID((Entity *)&v7, (int)this);
  v9 = 2;
  v10 = 1;
  v11 = 0;
  v8 = &off_26DA5D0;
  v12 = *(_QWORD *)&v7;
  v13 = 57;
  v14 = v3;
  v4 = (Level *)Entity::getLevel(v2);
  v5 = Level::getPacketSender(v4);
  return (*(int (**)(void))(*(_DWORD *)v5 + 8))();
}


int __fastcall Parrot::_calculateFlapping(Parrot *this)
{
  signed int v8; // r5@2
  _BOOL4 v9; // r0@3
  int result; // r0@14
  BlockSource *v13; // r9@15
  int v14; // r0@15
  int *v15; // r0@15
  int v16; // [sp+0h] [bp-28h]@15

  _R4 = this;
  *((_DWORD *)this + 1074) = *((_DWORD *)this + 1073);
  _R0 = *((_DWORD *)this + 1075);
  *((_DWORD *)_R4 + 1076) = _R0;
  _R6 = (int)_R4 + 4300;
  if ( *((_BYTE *)_R4 + 216) )
  {
    __asm { VMOV            S0, R0 }
    v8 = 1;
  }
  else
    v9 = Entity::isRiding(_R4);
    __asm { VLDR            S0, [R6] }
    v8 = v9;
  __asm
    VLDR            S4, =-0.3
    VLDR            S2, =1.2
  if ( !_ZF )
    __asm { VMOVNE.F32      S2, S4 }
    VLDR            S4, =0.0
    VADD.F32        S2, S0, S2
  _R7 = (int)_R4 + 4292;
    VMOV.F32        S0, #1.0
    VCMPE.F32       S2, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S2, S4 }
    VCMPE.F32       S2, S0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S2, S0 }
  __asm { VSTR            S2, [R6] }
  _R6 = (Parrot *)((char *)_R4 + 4308);
    VLDR            S2, [R6]
  if ( _NF ^ _VF && (v8 ^ 1) == 1 )
    *(_DWORD *)_R6 = 1065353216;
    __asm { VMOVEQ.F32      S2, S0 }
    VLDR            S0, =0.9
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R6]
  result = *((_BYTE *)_R4 + 354);
  if ( !*((_BYTE *)_R4 + 354) )
    v13 = (BlockSource *)Entity::getRegion(_R4);
    v14 = (*(int (__fastcall **)(Parrot *))(*(_DWORD *)_R4 + 52))(_R4);
    BlockPos::BlockPos((int)&v16, v14);
    v15 = (int *)BlockSource::getMaterial(v13, (const BlockPos *)&v16);
    result = Material::isType(v15, 5) | v8;
    if ( !result )
    {
      __asm
      {
        VLDR            S0, [R4,#0x70]
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        __asm
        {
          VLDRLT          S2, =0.6
          VMULLT.F32      S0, S0, S2
          VSTRLT          S0, [R4,#0x70]
        }
    }
    VLDR            S0, [R6]
    VLDR            S2, [R7]
    VADD.F32        S0, S0, S0
    VADD.F32        S0, S2, S0
    VSTR            S0, [R7]
  return result;
}


int __fastcall Parrot::Parrot(int a1, int a2, int *a3)
{
  int result; // r0@1

  result = Animal::Animal(a1, a2, a3);
  *(_DWORD *)result = &off_26EE6D4;
  *(_DWORD *)(result + 248) = 79;
  *(_DWORD *)(result + 4304) = 0;
  *(_DWORD *)(result + 4300) = 0;
  *(_DWORD *)(result + 4296) = 0;
  *(_DWORD *)(result + 4292) = 0;
  *(_DWORD *)(result + 4308) = 1065353216;
  *(_DWORD *)(result + 3984) = 1072064102;
  return result;
}


signed int __fastcall Parrot::useNewAi(Parrot *this)
{
  return 1;
}


signed int __fastcall Parrot::getEntityTypeId(Parrot *this)
{
  return 21278;
}


int __fastcall Parrot::getAmbientSound(Parrot *this)
{
  Mob *v1; // r5@1
  Random *v2; // r4@1
  int result; // r0@2
  unsigned int v4; // r5@3
  int v5; // r6@3
  unsigned int i; // r1@4

  v1 = this;
  v2 = (Parrot *)((char *)this + 552);
  if ( Random::_genRandInt32((Parrot *)((char *)this + 552)) % 0x3E8 )
  {
    result = Mob::getAmbientSound(v1);
  }
  else
    v4 = unk_27FC200;
    v5 = dword_27FC1FC;
    if ( unk_27FC200 )
    {
      for ( i = Random::_genRandInt32(v2) % v4; i; --i )
        v5 = *(_DWORD *)v5;
    }
    result = *(_BYTE *)(v5 + 8);
  return result;
}
