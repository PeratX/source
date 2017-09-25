

void __fastcall Skeleton::die(Skeleton *this, const EntityDamageSource *a2)
{
  Skeleton::die(this, a2);
}


void __fastcall Skeleton::die(Skeleton *this, const EntityDamageSource *a2)
{
  EntityDamageSource *v2; // r5@1
  Skeleton *v3; // r4@1
  WitherBoss *v4; // r0@1
  int v5; // r6@3
  int v6; // r1@3
  Entity *v7; // r6@3
  int v8; // r0@3
  signed int v9; // r0@3
  Level *v10; // r0@6
  unsigned __int64 *v11; // r0@6
  void (__fastcall *v12)(Skeleton *, char *, signed int); // r7@7
  int v13; // r5@7
  int v14; // r3@7
  signed int v15; // r0@15
  const Vec3 *v16; // r0@17
  int v22; // r0@18
  signed int v23; // r0@18
  void *v24; // r0@20
  void *v25; // r0@21
  void *v26; // r0@22
  unsigned int *v27; // r2@24
  signed int v28; // r1@26
  unsigned int *v29; // r2@28
  signed int v30; // r1@30
  unsigned int *v31; // r2@32
  signed int v32; // r1@34
  void **v33; // [sp+8h] [bp-C8h]@20
  int v34; // [sp+40h] [bp-90h]@22
  int v35; // [sp+44h] [bp-8Ch]@21
  int v36; // [sp+48h] [bp-88h]@20
  int v37; // [sp+54h] [bp-7Ch]@15
  char v38; // [sp+58h] [bp-78h]@7
  int v39; // [sp+60h] [bp-70h]@11
  void *v40; // [sp+7Ch] [bp-54h]@9
  void *ptr; // [sp+8Ch] [bp-44h]@7
  unsigned int v42; // [sp+A0h] [bp-30h]@3
  unsigned int v43; // [sp+A4h] [bp-2Ch]@3

  v2 = a2;
  v3 = this;
  Mob::die(this, a2);
  v4 = (WitherBoss *)*((_DWORD *)v3 + 1076);
  if ( v4 )
    WitherBoss::removeSkeleton(v4);
  v5 = Entity::getLevel(v3);
  (*(void (__fastcall **)(unsigned int *, EntityDamageSource *))(*(_DWORD *)v2 + 32))(&v42, v2);
  v7 = (Entity *)Level::fetchEntity(v5, v6, v42, v43, 0);
  v8 = (*(int (__fastcall **)(EntityDamageSource *))(*(_DWORD *)v2 + 56))(v2);
  v9 = EntityClassTree::isTypeInstanceOf(v8, 2849);
  if ( v7
    && v9 == 1
    && Entity::isPowered(v7) == 1
    && (v10 = (Level *)Entity::getLevel(v3),
        v11 = (unsigned __int64 *)Level::getGameRules(v10),
        GameRules::getBool(v11, (int **)&GameRules::DO_MOB_LOOT) == 1) )
  {
    v12 = *(void (__fastcall **)(Skeleton *, char *, signed int))(*(_DWORD *)v3 + 452);
    v13 = Item::mSkull;
    v14 = Entity::getVariant(v3) != 0;
    ItemInstance::ItemInstance((ItemInstance *)&v38, v13, 1, v14);
    v12(v3, &v38, 1065353216);
    if ( ptr )
      operator delete(ptr);
    if ( v40 )
      operator delete(v40);
    if ( v39 )
      (*(void (**)(void))(*(_DWORD *)v39 + 4))();
    v39 = 0;
  }
  else if ( (*(int (__fastcall **)(EntityDamageSource *))(*(_DWORD *)v2 + 12))(v2) == 1 )
    v37 = (*(int (__fastcall **)(EntityDamageSource *))(*(_DWORD *)v2 + 60))(v2);
    v15 = EntityClassTree::hasCategory(&v37, 1);
    if ( v7 )
    {
      if ( v15 == 1 )
      {
        v16 = (const Vec3 *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)v7 + 52))(v7);
        _R4 = Entity::distanceTo(v3, v16);
        if ( EntityDamageSource::getCause(v2) == 3 )
        {
          __asm { VMOV            S16, R4 }
          v22 = (*(int (__fastcall **)(EntityDamageSource *))(*(_DWORD *)v2 + 56))(v2);
          v23 = EntityClassTree::isTypeInstanceOf(v22, 4194384);
          __asm
          {
            VLDR            S0, =50.0
            VCMPE.F32       S16, S0
            VMRS            APSR_nzcv, FPSCR
          }
          if ( !(_NF ^ _VF) && v23 == 1 )
            EventPacket::EventPacket((int)&v33, v7, 38, 1);
            (*(void (__fastcall **)(Entity *, void ***))(*(_DWORD *)v7 + 1448))(v7, &v33);
            v33 = &off_26E9D30;
            v24 = (void *)(v36 - 12);
            if ( (int *)(v36 - 12) != &dword_28898C0 )
            {
              v27 = (unsigned int *)(v36 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v28 = __ldrex(v27);
                while ( __strex(v28 - 1, v27) );
              }
              else
                v28 = (*v27)--;
              if ( v28 <= 0 )
                j_j_j_j__ZdlPv_9(v24);
            }
            v25 = (void *)(v35 - 12);
            if ( (int *)(v35 - 12) != &dword_28898C0 )
              v29 = (unsigned int *)(v35 - 4);
                  v30 = __ldrex(v29);
                while ( __strex(v30 - 1, v29) );
                v30 = (*v29)--;
              if ( v30 <= 0 )
                j_j_j_j__ZdlPv_9(v25);
            v26 = (void *)(v34 - 12);
            if ( (int *)(v34 - 12) != &dword_28898C0 )
              v31 = (unsigned int *)(v34 - 4);
                  v32 = __ldrex(v31);
                while ( __strex(v32 - 1, v31) );
                v32 = (*v31)--;
              if ( v32 <= 0 )
                j_j_j_j__ZdlPv_9(v26);
        }
      }
    }
}


int __fastcall Skeleton::setWitherParent(int result, WitherBoss *a2)
{
  *(_DWORD *)(result + 4304) = a2;
  return result;
}


signed int __fastcall Skeleton::doHurtTarget(Skeleton *this, Entity *a2)
{
  Entity *v2; // r4@1
  Entity *v3; // r5@1
  int v4; // r0@4
  signed int result; // r0@5
  int v6; // [sp+0h] [bp-20h]@4

  v2 = a2;
  v3 = this;
  if ( HumanoidMonster::doHurtTarget(this, a2) == 1 )
  {
    if ( Entity::getVariant(v3) == 1 && Entity::hasCategory((int)v2, 2) == 1 )
    {
      v4 = MobEffect::getId((MobEffect *)MobEffect::WITHER);
      MobEffectInstance::MobEffectInstance((int)&v6, v4, 200, 0);
      Mob::addEffect(v2, (const MobEffectInstance *)&v6);
    }
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall Skeleton::normalTick(Skeleton *this)
{
  Skeleton *v1; // r4@1
  Level *v2; // r0@1
  Entity *v3; // r0@3
  __int64 v4; // r6@3
  int v5; // r0@5
  unsigned int v6; // r1@5
  unsigned int v7; // r1@7
  unsigned int v8; // r0@7
  int result; // r0@12

  v1 = this;
  Monster::normalTick(this);
  v2 = (Level *)Entity::getLevel(v1);
  if ( !Level::isClientSide(v2) )
  {
    if ( Entity::getTarget(v1) )
    {
      v3 = (Entity *)Entity::getTarget(v1);
      v4 = *(_QWORD *)Entity::getUniqueID(v3);
    }
    else
      v4 = 0LL;
    v5 = SynchedEntityData::_get((Skeleton *)((char *)v1 + 176), 6);
    v6 = *(_DWORD *)(v5 + 4);
    if ( (unsigned __int8)v6 == 7 && *(_QWORD *)(v5 + 16) != v4 )
      *(_QWORD *)(v5 + 16) = v4;
      *(_BYTE *)(v5 + 8) = 1;
      v7 = v6 >> 16;
      v8 = *((_WORD *)v1 + 94);
      if ( v8 >= v7 )
        LOWORD(v8) = v7;
      *((_WORD *)v1 + 94) = v8;
      if ( *((_WORD *)v1 + 95) > v7 )
        LOWORD(v7) = *((_WORD *)v1 + 95);
      *((_WORD *)v1 + 95) = v7;
  }
  result = Entity::getTarget(v1);
  if ( result == *((_DWORD *)v1 + 1076) )
    result = (*(int (__fastcall **)(Skeleton *, _DWORD))(*(_DWORD *)v1 + 340))(v1, 0);
  return result;
}


void __fastcall Skeleton::~Skeleton(Skeleton *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall Skeleton::getEntityTypeId(Skeleton *this)
{
  unsigned int v1; // r0@1
  signed int result; // r0@2

  v1 = Entity::getVariant(this);
  if ( v1 <= 2 )
    result = dword_262E2CC[v1];
  else
    result = 1;
  return result;
}


int __fastcall Skeleton::rideTick(Skeleton *this)
{
  Skeleton *v1; // r4@1
  int result; // r0@1

  v1 = this;
  Mob::rideTick(this);
  result = *((_DWORD *)v1 + 128);
  if ( result )
  {
    result = Entity::hasCategory(result, 2);
    if ( result == 1 )
    {
      result = *(_DWORD *)(*((_DWORD *)v1 + 128) + 3412);
      *((_DWORD *)v1 + 853) = result;
    }
  }
  return result;
}


int __fastcall Skeleton::getRidingHeight(Skeleton *this)
{
  int result; // r0@1

  _R0 = Entity::getRidingHeight(this);
  __asm
  {
    VMOV.F32        S0, #-0.5
    VMOV            S2, R0
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


void __fastcall Skeleton::~Skeleton(Skeleton *this)
{
  Skeleton::~Skeleton(this);
}


signed int __fastcall Skeleton::useNewAi(Skeleton *this)
{
  return 1;
}


HumanoidMonster *__fastcall Skeleton::Skeleton(HumanoidMonster *a1, EntityDefinitionGroup *a2, const EntityDefinitionIdentifier *a3)
{
  const EntityDefinitionIdentifier *v3; // r5@1
  HumanoidMonster *v4; // r4@1
  int v5; // r7@2
  _BYTE *v6; // r0@2
  signed __int16 v7; // r6@2
  int v8; // r1@2
  unsigned int v9; // r0@4
  char *v10; // r0@9

  v3 = a3;
  v4 = a1;
  HumanoidMonster::HumanoidMonster(a1, a2, a3);
  *(_DWORD *)v4 = &off_26F975C;
  *((_DWORD *)v4 + 1076) = 0;
  *((_DWORD *)v4 + 62) = 21;
  *((_DWORD *)v4 + 43) |= 0x4004u;
  if ( !SynchedEntityData::_find((HumanoidMonster *)((char *)v4 + 176), 6) )
  {
    SynchedEntityData::_resizeToContain((HumanoidMonster *)((char *)v4 + 176), 6);
    v5 = *((_DWORD *)v4 + 44);
    v6 = operator new(0x18u);
    v6[4] = 7;
    v7 = 6;
    *((_WORD *)v6 + 3) = 6;
    v6[8] = 1;
    *(_DWORD *)v6 = &off_26F0DC8;
    *((_DWORD *)v6 + 4) = 0;
    *((_DWORD *)v6 + 5) = 0;
    v8 = *(_DWORD *)(v5 + 24);
    *(_DWORD *)(v5 + 24) = v6;
    if ( v8 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
    v9 = *((_WORD *)v4 + 94);
    if ( v9 >= 6 )
      LOWORD(v9) = 6;
    *((_WORD *)v4 + 94) = v9;
    if ( (unsigned int)*((_WORD *)v4 + 95) > 6 )
      v7 = *((_WORD *)v4 + 95);
    *((_WORD *)v4 + 95) = v7;
  }
  v10 = EntityTypeFromString((const void **)v3 + 1);
  if ( v10 == (char *)1116976 )
    Entity::setVariant(v4, 1);
  else if ( v10 == (char *)1116974 )
    Entity::setVariant(v4, 2);
  else if ( v10 == (char *)1116962 )
    Entity::setVariant(v4, 0);
  *((_DWORD *)v4 + 996) = 1070386381;
  return v4;
}


void __fastcall Skeleton::getDebugText(Entity *a1, int a2)
{
  Entity *v2; // r5@1
  int v3; // r4@1
  unsigned int v4; // r0@1
  const void **v5; // r0@1
  void *v6; // r0@1
  int v7; // r0@2
  __int64 v8; // r0@6
  const void **v9; // r0@9
  void *v10; // r1@9
  __int64 v11; // kr00_8@9
  char *v12; // r1@10
  char *v13; // r0@12
  void *v14; // r0@13
  char *v15; // r0@14
  unsigned int *v16; // r2@16
  signed int v17; // r1@18
  unsigned int *v18; // r2@20
  signed int v19; // r1@22
  unsigned int *v20; // r2@24
  signed int v21; // r1@26
  unsigned int *v22; // r2@28
  signed int v23; // r1@30
  int v24; // [sp+0h] [bp-30h]@9
  int v25; // [sp+Ch] [bp-24h]@9
  char *v26; // [sp+10h] [bp-20h]@9
  int v27; // [sp+14h] [bp-1Ch]@1
  char *v28; // [sp+18h] [bp-18h]@1

  v2 = a1;
  v3 = a2;
  v4 = (*(int (**)(void))(*(_DWORD *)a1 + 488))();
  EntityTypeToString((void **)&v27, v4, 0);
  v5 = sub_21E82D8((const void **)&v27, 0, (unsigned int)"Entity type: ", (_BYTE *)0xD);
  v28 = (char *)*v5;
  *v5 = &unk_28898CC;
  v6 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v27 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  v7 = Entity::getVariant(v2);
  if ( v7 == 2 )
    sub_21E7408((const void **)&v28, "[stray]", 7u);
  else if ( v7 == 1 )
    sub_21E7408((const void **)&v28, "[wither]", 8u);
  v8 = *(_QWORD *)(v3 + 4);
  if ( (_DWORD)v8 == HIDWORD(v8) )
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
      (unsigned __int64 *)v3,
      (int *)&v28);
  else
    sub_21E8AF4((int *)v8, (int *)&v28);
    *(_DWORD *)(v3 + 4) += 4;
  Entity::_getBlockOnPos((Entity *)&v24, *(float *)&v2);
  BlockPos::toString((BlockPos *)&v25, (int)&v24);
  v9 = sub_21E82D8((const void **)&v25, 0, (unsigned int)"Entity Pos: ", (_BYTE *)0xC);
  v10 = (void *)*v9;
  v26 = (char *)*v9;
  *v9 = &unk_28898CC;
  v11 = *(_QWORD *)(v3 + 4);
  if ( (_DWORD)v11 == HIDWORD(v11) )
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>((unsigned __int64 *)v3, &v26);
    v12 = v26;
    *(_DWORD *)v11 = v10;
    v12 = (char *)&unk_28898CC;
    v26 = (char *)&unk_28898CC;
    *(_DWORD *)(v3 + 4) = v11 + 4;
  v13 = v12 - 12;
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v12 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v25 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = v28 - 12;
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v28 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
}


void __fastcall Skeleton::getDebugText(Entity *a1, int a2)
{
  Skeleton::getDebugText(a1, a2);
}
