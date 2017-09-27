

void __fastcall BreathableComponent::addAdditionalSaveData(BreathableComponent *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  BreathableComponent *v3; // r5@1
  __int16 v4; // r0@1
  void *v5; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v8, "Air");
  v4 = j_SynchedEntityData::getShort((SynchedEntityData *)(*((_DWORD *)v3 + 15) + 176), 7);
  j_CompoundTag::putShort((int)v2, (const void **)&v8, v4);
  v5 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
}


unsigned int __fastcall BreathableComponent::initFromDefinition(BreathableComponent *this)
{
  BreathableComponent *v1; // r4@1
  int v2; // r5@1
  int v3; // r6@1
  int v4; // r7@1
  int v5; // r0@1
  unsigned int v6; // r1@1
  unsigned int v7; // r1@3
  unsigned int v8; // r0@3
  unsigned int v9; // r0@8
  int v10; // r1@9
  _DWORD *v11; // r0@10
  _DWORD *v12; // r2@10
  _DWORD *v13; // r1@11
  _DWORD *v14; // r1@13
  int v15; // r1@16
  _DWORD *v16; // r0@17
  _DWORD *v17; // r2@17
  _DWORD *v18; // r1@18
  _DWORD *v19; // r1@20
  unsigned __int16 v20; // r0@22
  int v21; // r4@22
  unsigned __int16 v22; // r5@22
  unsigned int result; // r0@22
  unsigned int v24; // r1@22
  unsigned int v25; // r1@24
  unsigned int v26; // r0@24

  v1 = this;
  v2 = *((_DWORD *)this + 15);
  v3 = *(_DWORD *)(*(_DWORD *)(v2 + 48) + 288);
  v4 = *(_DWORD *)(v3 + 4);
  v5 = j_SynchedEntityData::_get((SynchedEntityData *)(v2 + 176), 43);
  v6 = *(_DWORD *)(v5 + 4);
  if ( (unsigned __int8)v6 == 1 && *(_WORD *)(v5 + 10) != (unsigned __int16)(20 * v4) )
  {
    *(_WORD *)(v5 + 10) = 20 * v4;
    *(_BYTE *)(v5 + 8) = 1;
    v7 = v6 >> 16;
    v8 = *(_WORD *)(v2 + 188);
    if ( v8 >= v7 )
      LOWORD(v8) = v7;
    *(_WORD *)(v2 + 188) = v8;
    if ( *(_WORD *)(v2 + 190) > v7 )
      LOWORD(v7) = *(_WORD *)(v2 + 190);
    *(_WORD *)(v2 + 190) = v7;
  }
  *(_DWORD *)v1 = 20 * *(_DWORD *)(v3 + 8);
  v9 = *(_DWORD *)(v3 + 12);
  *((_BYTE *)v1 + 4) = v9;
  *((_BYTE *)v1 + 5) = BYTE1(v9);
  *((_BYTE *)v1 + 6) = v9 >> 16;
  *((_BYTE *)v1 + 7) = BYTE3(v9);
  if ( (BreathableComponent *)((char *)v1 + 12) != (BreathableComponent *)(v3 + 20) )
    j_std::_Rb_tree<Block const*,Block const*,std::_Identity<Block const*>,std::less<Block const*>,std::allocator<Block const*>>::_M_erase(
      (int)v1 + 12,
      *((_DWORD *)v1 + 5));
    *((_DWORD *)v1 + 5) = 0;
    *((_DWORD *)v1 + 6) = (char *)v1 + 16;
    *((_DWORD *)v1 + 7) = (char *)v1 + 16;
    *((_DWORD *)v1 + 8) = 0;
    v10 = *(_DWORD *)(v3 + 28);
    if ( v10 )
    {
      v11 = j_std::_Rb_tree<Block const*,Block const*,std::_Identity<Block const*>,std::less<Block const*>,std::allocator<Block const*>>::_M_copy(
              (int)v1 + 12,
              v10,
              (int)v1 + 16);
      v12 = v11;
      *((_DWORD *)v1 + 5) = v11;
      do
      {
        v13 = v12;
        v12 = (_DWORD *)v12[2];
      }
      while ( v12 );
      *((_DWORD *)v1 + 6) = v13;
        v14 = v11;
        v11 = (_DWORD *)v11[3];
      while ( v11 );
      *((_DWORD *)v1 + 7) = v14;
      *((_DWORD *)v1 + 8) = *(_DWORD *)(v3 + 40);
    }
  if ( (BreathableComponent *)((char *)v1 + 36) != (BreathableComponent *)(v3 + 44) )
      (int)v1 + 36,
      *((_DWORD *)v1 + 11));
    *((_DWORD *)v1 + 11) = 0;
    *((_DWORD *)v1 + 12) = (char *)v1 + 40;
    *((_DWORD *)v1 + 13) = (char *)v1 + 40;
    *((_DWORD *)v1 + 14) = 0;
    v15 = *(_DWORD *)(v3 + 52);
    if ( v15 )
      v16 = j_std::_Rb_tree<Block const*,Block const*,std::_Identity<Block const*>,std::less<Block const*>,std::allocator<Block const*>>::_M_copy(
              (int)v1 + 36,
              v15,
              (int)v1 + 40);
      v17 = v16;
      *((_DWORD *)v1 + 11) = v16;
        v18 = v17;
        v17 = (_DWORD *)v17[2];
      while ( v17 );
      *((_DWORD *)v1 + 12) = v18;
        v19 = v16;
        v16 = (_DWORD *)v16[3];
      while ( v16 );
      *((_DWORD *)v1 + 13) = v19;
      *((_DWORD *)v1 + 14) = *(_DWORD *)(v3 + 64);
  *((_BYTE *)v1 + 8) = *(_BYTE *)(v3 + 16);
  v20 = j_SynchedEntityData::getShort((SynchedEntityData *)(*((_DWORD *)v1 + 15) + 176), 43);
  v21 = *((_DWORD *)v1 + 15);
  v22 = v20;
  result = j_SynchedEntityData::_get((SynchedEntityData *)(v21 + 176), 7);
  v24 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v24 == 1 && *(_WORD *)(result + 10) != v22 )
    *(_WORD *)(result + 10) = v22;
    *(_BYTE *)(result + 8) = 1;
    v25 = v24 >> 16;
    v26 = *(_WORD *)(v21 + 188);
    if ( v26 >= v25 )
      LOWORD(v26) = v25;
    *(_WORD *)(v21 + 188) = v26;
    result = *(_WORD *)(v21 + 190);
    if ( result > v25 )
      LOWORD(v25) = *(_WORD *)(v21 + 190);
    *(_WORD *)(v21 + 190) = v25;
  return result;
}


int __fastcall BreathableComponent::canBreathe(BreathableComponent *this)
{
  BreathableComponent *v1; // r11@1
  const BlockPos *v2; // r10@1
  Block *v3; // r8@1
  Material *v4; // r9@1
  MobEffectInstance *v5; // r7@1
  __int64 v6; // kr00_8@1
  int v7; // r5@2
  int v8; // r3@4
  int v9; // r0@4
  int v10; // r2@5
  int v11; // r1@6
  int result; // r0@17
  int v13; // r3@18
  int v14; // r0@18
  int v15; // r2@19
  int v16; // r1@20
  int v17; // r0@32
  signed int v18; // r4@32
  int v19; // r3@36
  int v20; // r0@39
  int v21; // [sp+0h] [bp-68h]@32
  int v22; // [sp+Ch] [bp-5Ch]@32
  int v23; // [sp+10h] [bp-58h]@32
  int v24; // [sp+14h] [bp-54h]@32
  int v25; // [sp+18h] [bp-50h]@32
  int v26; // [sp+1Ch] [bp-4Ch]@32
  int v27; // [sp+20h] [bp-48h]@32
  char v28; // [sp+24h] [bp-44h]@32
  unsigned __int8 v29; // [sp+28h] [bp-40h]@1
  unsigned __int8 v30; // [sp+29h] [bp-3Fh]@32
  char v31; // [sp+2Ch] [bp-3Ch]@1
  char v32; // [sp+38h] [bp-30h]@1

  v1 = this;
  j_Entity::getAttachPos((AABB *)&v32, *((_DWORD *)this + 15), 7, 0);
  j_BlockPos::BlockPos((int)&v31, (int)&v32);
  v2 = (const BlockPos *)j_Entity::getRegion(*((Entity **)v1 + 15));
  j_BlockSource::getBlockAndData((BlockSource *)&v29, v2, (int)&v31);
  v3 = (Block *)Block::mBlocks[v29];
  v4 = (Material *)j_Block::getMaterial((Block *)Block::mBlocks[v29]);
  v6 = *(_QWORD *)j_Mob::getAllEffects(*((Mob **)v1 + 15));
  v5 = (MobEffectInstance *)v6;
  if ( (_DWORD)v6 != HIDWORD(v6) )
  {
    do
    {
      v7 = j_MobEffectInstance::getId(v5);
      if ( v7 == j_MobEffect::getId((MobEffect *)MobEffect::WATER_BREATHING) )
        return 1;
      v5 = (MobEffectInstance *)((char *)v5 + 16);
    }
    while ( (MobEffectInstance *)HIDWORD(v6) != v5 );
  }
  v8 = *((_DWORD *)v1 + 5);
  v9 = (int)v1 + 16;
  if ( v8 )
    v10 = (int)v1 + 16;
      v11 = v8;
      while ( *(_DWORD *)(v11 + 16) < (unsigned int)v3 )
      {
        v11 = *(_DWORD *)(v11 + 12);
        if ( !v11 )
        {
          v11 = v10;
          goto LABEL_13;
        }
      }
      v8 = *(_DWORD *)(v11 + 8);
      v10 = v11;
    while ( v8 );
  else
    v11 = (int)v1 + 16;
LABEL_13:
  if ( v11 != v9 )
    if ( (unsigned int)v3 < *(_DWORD *)(v11 + 16) )
      v11 = (int)v1 + 16;
    if ( v11 != v9 )
      return 1;
  v13 = *((_DWORD *)v1 + 11);
  v14 = (int)v1 + 40;
  if ( v13 )
    v15 = (int)v1 + 40;
      v16 = v13;
      while ( *(_DWORD *)(v16 + 16) < (unsigned int)v3 )
        v16 = *(_DWORD *)(v16 + 12);
        if ( !v16 )
          v16 = v15;
          goto LABEL_27;
      v13 = *(_DWORD *)(v16 + 8);
      v15 = v16;
    while ( v13 );
    v16 = (int)v1 + 40;
LABEL_27:
  if ( v16 != v14 )
    if ( (unsigned int)v3 < *(_DWORD *)(v16 + 16) )
      v16 = (int)v1 + 40;
    if ( v16 != v14 )
      return 0;
  j_AABB::AABB((AABB *)&v22);
  v21 = v30;
  v17 = (*(int (__fastcall **)(Block *, const BlockPos *, char *, int *))(*(_DWORD *)v3 + 32))(v3, v2, &v31, &v22);
  v22 = *(_DWORD *)v17;
  v23 = *(_DWORD *)(v17 + 4);
  v24 = *(_DWORD *)(v17 + 8);
  v25 = *(_DWORD *)(v17 + 12);
  v26 = *(_DWORD *)(v17 + 16);
  v27 = *(_DWORD *)(v17 + 20);
  v28 = *(_BYTE *)(v17 + 24);
  v18 = j_AABB::contains((AABB *)&v22, (const Vec3 *)&v32);
  if ( v3 == (Block *)Block::mAir || !j_Material::isSolid(v4) && !j_Material::isLiquid(v4) )
    *((_DWORD *)v1 + 16) = 0;
    goto LABEL_45;
  if ( j_Material::isLiquid(v4) != 1 || j_Material::isSuperHot(v4) )
    if ( j_Material::isLiquid(v4) == 1 && j_Material::isSuperHot(v4) == 1 )
      *((_DWORD *)v1 + 16) = 2;
      v20 = *((_BYTE *)v1 + 6);
      return v20 != 0;
    if ( j_Block::isSolidBlockingBlock(v3) == 1
      && (j_BlockSource::isConsideredSolidBlock(v2, (const BlockPos *)&v31) & v18) == 1 )
      *((_DWORD *)v1 + 16) = 0;
      v20 = *((_BYTE *)v1 + 7);
LABEL_45:
    v20 = *((_BYTE *)v1 + 4);
    return v20 != 0;
  result = 1;
  *((_DWORD *)v1 + 16) = 1;
  if ( !*((_BYTE *)v1 + 5) )
    result = (*(int (__cdecl **)(_DWORD, signed int, _DWORD, int, int, _DWORD, _DWORD, int, int, int))(**((_DWORD **)v1 + 15) + 220))(
               *((_DWORD *)v1 + 15),
               5,
               *(_DWORD *)(**((_DWORD **)v1 + 15) + 220),
               v19,
               v21,
               0,
               v22,
               v23,
               v24) ^ 1;
  return result;
}


unsigned int __fastcall BreathableComponent::setAirSupply(BreathableComponent *this, __int16 a2)
{
  int v2; // r5@1
  __int16 v3; // r4@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = *((_DWORD *)this + 15);
  v3 = a2;
  result = j_SynchedEntityData::_get((SynchedEntityData *)(v2 + 176), 7);
  v5 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v5 == 1 && *(_WORD *)(result + 10) != (unsigned __int16)v3 )
  {
    *(_WORD *)(result + 10) = v3;
    *(_BYTE *)(result + 8) = 1;
    v6 = v5 >> 16;
    v7 = *(_WORD *)(v2 + 188);
    if ( v7 >= v6 )
      LOWORD(v7) = v6;
    *(_WORD *)(v2 + 188) = v7;
    result = *(_WORD *)(v2 + 190);
    if ( result > v6 )
      LOWORD(v6) = *(_WORD *)(v2 + 190);
    *(_WORD *)(v2 + 190) = v6;
  }
  return result;
}


unsigned int __fastcall BreathableComponent::setTotalAirSupply(BreathableComponent *this, __int16 a2)
{
  int v2; // r5@1
  __int16 v3; // r4@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = *((_DWORD *)this + 15);
  v3 = a2;
  result = j_SynchedEntityData::_get((SynchedEntityData *)(v2 + 176), 43);
  v5 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v5 == 1 && *(_WORD *)(result + 10) != (unsigned __int16)v3 )
  {
    *(_WORD *)(result + 10) = v3;
    *(_BYTE *)(result + 8) = 1;
    v6 = v5 >> 16;
    v7 = *(_WORD *)(v2 + 188);
    if ( v7 >= v6 )
      LOWORD(v7) = v6;
    *(_WORD *)(v2 + 188) = v7;
    result = *(_WORD *)(v2 + 190);
    if ( result > v6 )
      LOWORD(v6) = *(_WORD *)(v2 + 190);
    *(_WORD *)(v2 + 190) = v6;
  }
  return result;
}


void __fastcall BreathableComponent::addAdditionalSaveData(BreathableComponent *this, CompoundTag *a2)
{
  BreathableComponent::addAdditionalSaveData(this, a2);
}


void __fastcall BreathableComponent::readAdditionalSaveData(BreathableComponent *this, const CompoundTag *a2)
{
  BreathableComponent::readAdditionalSaveData(this, a2);
}


int __fastcall BreathableComponent::BreathableComponent(int result, unsigned int a2)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 24) = result + 16;
  *(_DWORD *)(result + 28) = result + 16;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 56) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 48) = result + 40;
  *(_DWORD *)(result + 52) = result + 40;
  *(_QWORD *)(result + 60) = a2;
  return result;
}


void __fastcall BreathableComponent::readAdditionalSaveData(BreathableComponent *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r4@1
  BreathableComponent *v3; // r5@1
  unsigned __int16 v4; // r4@1
  int v5; // r5@1
  int v6; // r0@1
  unsigned int v7; // r1@1
  unsigned int v8; // r1@3
  unsigned int v9; // r0@3
  void *v10; // r0@8
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  int v13; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v13, "Air");
  v4 = j_CompoundTag::getShort((int)v2, (const void **)&v13);
  v5 = *((_DWORD *)v3 + 15);
  v6 = j_SynchedEntityData::_get((SynchedEntityData *)(v5 + 176), 7);
  v7 = *(_DWORD *)(v6 + 4);
  if ( (unsigned __int8)v7 == 1 && *(_WORD *)(v6 + 10) != v4 )
  {
    *(_WORD *)(v6 + 10) = v4;
    *(_BYTE *)(v6 + 8) = 1;
    v8 = v7 >> 16;
    v9 = *(_WORD *)(v5 + 188);
    if ( v9 >= v8 )
      LOWORD(v9) = v8;
    *(_WORD *)(v5 + 188) = v9;
    if ( *(_WORD *)(v5 + 190) > v8 )
      LOWORD(v8) = *(_WORD *)(v5 + 190);
    *(_WORD *)(v5 + 190) = v8;
  }
  v10 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
}


unsigned int __fastcall BreathableComponent::tick(BreathableComponent *this)
{
  BreathableComponent *v1; // r4@1
  unsigned int result; // r0@1
  int v3; // r0@4
  int v4; // r1@5
  signed int v5; // r5@6
  int v6; // r2@6
  __int16 v7; // r6@9
  unsigned __int16 v8; // r6@10
  int v9; // r7@11
  int v10; // r5@11
  Player *v11; // r8@13
  __int64 v12; // r2@13
  unsigned int v13; // r7@14
  unsigned int v14; // r1@15
  signed __int16 v15; // r0@15
  Level *v16; // r0@20
  int v17; // r1@21
  int v18; // r4@24
  unsigned int v19; // r1@24
  unsigned int v20; // r1@26
  unsigned int v21; // r0@26
  char v22; // [sp+4h] [bp-34h]@23
  char v23; // [sp+Ch] [bp-2Ch]@13

  v1 = this;
  result = (*(int (**)(void))(**((_DWORD **)this + 15) + 316))();
  if ( result != 1 )
    return result;
  if ( j_Entity::hasCategory(*((_DWORD *)v1 + 15), 1) != 1
    || j_Abilities::getBool(*((_DWORD *)v1 + 15) + 4320, (int **)&Abilities::INSTABUILD) != 1 )
  {
    v4 = j_BreathableComponent::canBreathe(v1);
    v3 = *((_DWORD *)v1 + 15);
    if ( !v4 )
    {
      v6 = 0;
      v5 = 0;
      if ( *((_DWORD *)v1 + 16) != 1 )
        v6 = 1;
      goto LABEL_9;
    }
  }
  else
  v5 = 1;
  v6 = 1;
LABEL_9:
  j_Entity::setStatusFlag(v3, 33, v6);
  v7 = j_SynchedEntityData::getShort((SynchedEntityData *)(*((_DWORD *)v1 + 15) + 176), 7);
  if ( v5 )
    v8 = j_SynchedEntityData::getShort((SynchedEntityData *)(*((_DWORD *)v1 + 15) + 176), 43);
    v9 = j_EnchantUtils::getBestEnchantLevel((EnchantUtils *)6, *((_DWORD *)v1 + 15), 3);
    v10 = (*(int (**)(void))(**((_DWORD **)v1 + 15) + 220))();
    if ( v10 == 1 && *((_BYTE *)v1 + 8) )
      v11 = (Player *)j_Entity::getLevel(*((Entity **)v1 + 15));
      j_Entity::getAttachPos((AABB *)&v23, *((_DWORD *)v1 + 15), 3, 0);
      LODWORD(v12) = &v23;
      HIDWORD(v12) = 8;
      j_Level::broadcastLevelEvent(v11, 2015, v12, 0);
    v13 = v9 + 1;
    if ( v13 )
      v14 = j_Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 15) + 552)) % v13;
      v15 = 0;
      if ( !v14 )
        v15 = -1;
    else
      v15 = -1;
    v8 = v7 + v15;
    if ( (signed __int16)v8 <= (signed int)(*(_DWORD *)v1 * v13) )
      v16 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 15));
      v8 = 0;
      if ( !j_Level::isClientSide(v16) )
      {
        v17 = 4;
        if ( v10 )
          v17 = 9;
        j_EntityDamageSource::EntityDamageSource((int)&v22, v17);
        j_Entity::hurt(*((Entity **)v1 + 15), (const EntityDamageSource *)&v22, 2, 1, 0);
        j_EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v22);
        v8 = 0;
      }
  v18 = *((_DWORD *)v1 + 15);
  result = j_SynchedEntityData::_get((SynchedEntityData *)(v18 + 176), 7);
  v19 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v19 == 1 && *(_WORD *)(result + 10) != v8 )
    *(_WORD *)(result + 10) = v8;
    *(_BYTE *)(result + 8) = 1;
    v20 = v19 >> 16;
    v21 = *(_WORD *)(v18 + 188);
    if ( v21 >= v20 )
      LOWORD(v21) = v20;
    *(_WORD *)(v18 + 188) = v21;
    result = *(_WORD *)(v18 + 190);
    if ( result > v20 )
      LOWORD(v20) = *(_WORD *)(v18 + 190);
    *(_WORD *)(v18 + 190) = v20;
  return result;
}
