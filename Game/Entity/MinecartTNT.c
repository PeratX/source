

ExplodeComponent *__fastcall MinecartTNT::normalTick(MinecartTNT *this)
{
  Level *v2; // r0@1
  unsigned __int64 *v3; // r5@1
  Level *v4; // r0@1
  ExplodeComponent *v5; // r0@4
  ExplodeComponent *result; // r0@7
  int v7; // r0@10
  int v12; // r2@10
  int v13; // [sp+Ch] [bp-1Ch]@10
  int v14; // [sp+14h] [bp-14h]@10

  _R4 = this;
  v2 = (Level *)Entity::getLevel(this);
  v3 = (unsigned __int64 *)Level::getGameRules(v2);
  v4 = (Level *)Entity::getLevel(_R4);
  if ( !Level::isClientSide(v4)
    && GameRules::hasRule(v3, (int **)&GameRules::ALLOW_DESTRUCTIVE_OBJECTS) == 1
    && !GameRules::getBool(v3, (int **)&GameRules::ALLOW_DESTRUCTIVE_OBJECTS) )
  {
    v5 = (ExplodeComponent *)*((_DWORD *)_R4 + 783);
    if ( v5 )
    {
      if ( ExplodeComponent::isPrimed(v5) == 1 )
        (*(void (__fastcall **)(MinecartTNT *))(*(_DWORD *)_R4 + 44))(_R4);
    }
  }
  Minecart::normalTick(_R4);
  result = (ExplodeComponent *)*((_DWORD *)_R4 + 783);
  if ( result )
    result = (ExplodeComponent *)ExplodeComponent::getFuse(result);
    if ( (signed int)result >= 1 )
      result = (ExplodeComponent *)ExplodeComponent::isPrimed(*((ExplodeComponent **)_R4 + 783));
      if ( result == (ExplodeComponent *)1 )
      {
        v7 = Entity::getLevel(_R4);
        __asm
        {
          VMOV.F32        S0, #0.5
          VLDR            S2, [R4,#0x4C]
        }
        v12 = *((_DWORD *)_R4 + 20);
        v13 = *((_DWORD *)_R4 + 18);
          VADD.F32        S0, S2, S0
          VSTR            S0, [SP,#0x28+var_18]
        v14 = v12;
        result = (ExplodeComponent *)Level::addParticle(v7, 4, (int)&v13);
      }
  return result;
}


unsigned int __fastcall MinecartTNT::handleEntityEvent(Entity *a1, signed int a2, int a3)
{
  int v3; // r4@1
  signed int v4; // r5@1
  Entity *v5; // r6@1
  Level *v6; // r0@1
  unsigned int result; // r0@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = (Level *)Entity::getLevel(a1);
  result = Level::isClientSide(v6);
  if ( result == 1 )
  {
    if ( v4 == 31 )
      result = j_j_j__ZN11MinecartTNT9primeFuseEv(v5);
    else
      result = j_j_j__ZN6Entity17handleEntityEventE11EntityEventi(v5, v4, v3);
  }
  return result;
}


void __fastcall MinecartTNT::~MinecartTNT(MinecartTNT *this)
{
  MinecartTNT::~MinecartTNT(this);
}


int __fastcall MinecartTNT::destroy(MinecartTNT *this, const EntityDamageSource *a2, int a3)
{
  const EntityDamageSource *v3; // r6@1
  MinecartTNT *v4; // r4@1
  int v5; // r5@1
  Level *v6; // r0@2
  unsigned __int64 *v7; // r0@2
  unsigned __int64 *v8; // r5@2
  int result; // r0@2
  Level *v10; // r0@5
  char *v11; // r0@5
  unsigned int v12; // kr00_4@5
  void (__fastcall *v13)(MinecartTNT *, int *, signed int); // r7@7
  int v14; // [sp+0h] [bp-60h]@7
  int v15; // [sp+8h] [bp-58h]@11
  void *v16; // [sp+24h] [bp-3Ch]@9
  void *ptr; // [sp+34h] [bp-2Ch]@7

  v3 = a2;
  v4 = this;
  v5 = a3;
  if ( (EntityDamageSource::getCause(a2) & 0xFFFFFFFE) == 10 )
  {
    v6 = (Level *)Entity::getLevel(v4);
    v7 = (unsigned __int64 *)Level::getGameRules(v6);
    v8 = v7;
    result = GameRules::hasRule(v7, (int **)&GameRules::DO_TNT_EXPLODE);
    if ( result == 1 )
    {
      result = GameRules::getBool(v8, (int **)&GameRules::DO_TNT_EXPLODE);
      if ( result == 1 )
      {
        MinecartTNT::primeFuse(v4);
        result = *((_DWORD *)v4 + 783);
        if ( result )
        {
          v10 = (Level *)Entity::getLevel(v4);
          v11 = Level::getRandom(v10);
          v12 = Random::_genRandInt32((Random *)v11);
          result = j_j_j__ZN16ExplodeComponent13setFuseLengthEi(*((ExplodeComponent **)v4 + 783), v12 % 0x14 + 10);
        }
      }
    }
  }
  else
    if ( v5 == 1 )
      v13 = *(void (__fastcall **)(MinecartTNT *, int *, signed int))(*(_DWORD *)v4 + 452);
      ItemInstance::ItemInstance((ItemInstance *)&v14, Block::mTNT);
      v13(v4, &v14, 1065353216);
      if ( ptr )
        operator delete(ptr);
      if ( v16 )
        operator delete(v16);
      if ( v15 )
        (*(void (**)(void))(*(_DWORD *)v15 + 4))();
      v15 = 0;
    result = Minecart::destroy(v4, v3, v5);
  return result;
}


signed int __fastcall MinecartTNT::getType(MinecartTNT *this)
{
  return 3;
}


int __fastcall MinecartTNT::getDefaultDisplayBlock(MinecartTNT *this)
{
  return Block::mTNT;
}


int __fastcall MinecartTNT::MinecartTNT(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int v4; // r6@2
  _BYTE *v5; // r0@2
  signed __int16 v6; // r5@2
  int v7; // r1@2
  unsigned int v8; // r0@4

  v3 = a1;
  Minecart::Minecart(a1, a2, a3);
  *(_DWORD *)v3 = &off_26F4164;
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 56) )
  {
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 56);
    v4 = *(_DWORD *)(v3 + 176);
    v5 = operator new(0x10u);
    v5[4] = 2;
    v6 = 56;
    *((_WORD *)v5 + 3) = 56;
    v5[8] = 1;
    *(_DWORD *)v5 = &off_26F08C4;
    *((_DWORD *)v5 + 3) = 99;
    v7 = *(_DWORD *)(v4 + 224);
    *(_DWORD *)(v4 + 224) = v5;
    if ( v7 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
    v8 = *(_WORD *)(v3 + 188);
    if ( v8 >= 0x38 )
      LOWORD(v8) = 56;
    *(_WORD *)(v3 + 188) = v8;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x38 )
      v6 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v6;
  }
  return v3;
}


signed int __fastcall MinecartTNT::getEntityTypeId(MinecartTNT *this)
{
  return 524385;
}


signed int __fastcall MinecartTNT::_hurt(MinecartTNT *this, const EntityDamageSource *a2, int a3, bool a4, bool a5)
{
  const EntityDamageSource *v5; // r6@1
  Entity *v6; // r7@1
  bool v7; // r8@1
  int v8; // r9@1
  int v9; // r4@1
  int v10; // r0@1
  bool v11; // zf@1
  int v12; // r0@5
  int v13; // r4@5
  int v14; // r5@6
  int v15; // r1@6
  int v16; // r0@6
  bool v17; // zf@8
  Level *v18; // r0@13
  unsigned __int64 *v19; // r0@13
  unsigned __int64 *v20; // r5@13
  signed int result; // r0@18
  unsigned int v22; // [sp+8h] [bp-28h]@6
  unsigned int v23; // [sp+Ch] [bp-24h]@6

  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = EntityDamageSource::getCause(a2);
  v10 = (*(int (__fastcall **)(const EntityDamageSource *))(*(_DWORD *)v5 + 8))(v5);
  v11 = v9 == 3;
  if ( v9 == 3 )
    v11 = v10 == 1;
  if ( v11 )
  {
    v12 = (*(int (__fastcall **)(const EntityDamageSource *))(*(_DWORD *)v5 + 36))(v5);
    v13 = 0;
    if ( EntityClassTree::isTypeInstanceOf(v12, 4194384) == 1 )
    {
      v14 = Entity::getLevel(v6);
      (*(void (__fastcall **)(unsigned int *, const EntityDamageSource *))(*(_DWORD *)v5 + 32))(&v22, v5);
      v16 = Level::fetchEntity(v14, v15, v22, v23, 0);
      if ( v16 )
        v13 = (*(int (**)(void))(*(_DWORD *)v16 + 320))();
    }
  }
  else
    v17 = v9 == 8;
    if ( v9 != 8 )
      v17 = v9 == 6;
    v13 = v17 != 0;
  v18 = (Level *)Entity::getLevel(v6);
  v19 = (unsigned __int64 *)Level::getGameRules(v18);
  v20 = v19;
  if ( v13 == 1
    && (GameRules::hasRule(v19, (int **)&GameRules::ALLOW_DESTRUCTIVE_OBJECTS) != 1
     || GameRules::getBool(v20, (int **)&GameRules::ALLOW_DESTRUCTIVE_OBJECTS) == 1) )
    MinecartTNT::primeFuse(v6);
  if ( Entity::isIgnited(v6) )
    result = 1;
    result = Minecart::_hurt(v6, v5, v8, v7, a5);
  return result;
}


void __fastcall MinecartTNT::~MinecartTNT(MinecartTNT *this)
{
  Minecart *v1; // r0@1

  v1 = Minecart::~Minecart(this);
  j_j_j__ZdlPv_6((void *)v1);
}


unsigned int __fastcall MinecartTNT::primeFuse(MinecartTNT *this)
{
  MinecartTNT *v1; // r11@1
  Level *v2; // r0@1
  unsigned __int64 *v3; // r5@1
  unsigned int result; // r0@1
  int v5; // r6@4
  double v6; // r0@5
  unsigned int v7; // r0@5
  int v8; // r7@7
  int *v9; // r5@7
  int v10; // r6@8
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  void *v13; // r7@18
  int v14; // r1@18
  void *v15; // r0@18
  void *v16; // r0@23
  Level *v17; // r0@25
  int v18; // r0@26
  int v19; // r5@27
  BlockSource *v20; // r0@27
  unsigned int *v21; // r2@30
  signed int v22; // r1@32
  void *ptr; // [sp+8h] [bp-50h]@5
  unsigned int v24; // [sp+Ch] [bp-4Ch]@5
  int v25; // [sp+10h] [bp-48h]@5
  int v26; // [sp+14h] [bp-44h]@5
  signed int v27; // [sp+18h] [bp-40h]@5
  int v28; // [sp+1Ch] [bp-3Ch]@5
  int v29; // [sp+20h] [bp-38h]@5
  int v30; // [sp+2Ch] [bp-2Ch]@5

  v1 = this;
  v2 = (Level *)Entity::getLevel(this);
  v3 = (unsigned __int64 *)Level::getGameRules(v2);
  result = Entity::isIgnited(v1);
  if ( !result )
  {
    result = GameRules::hasRule(v3, (int **)&GameRules::DO_TNT_EXPLODE);
    if ( result == 1 )
    {
      result = GameRules::getBool(v3, (int **)&GameRules::DO_TNT_EXPLODE);
      if ( result == 1 )
      {
        Entity::setStatusFlag((int)v1, 47, 1);
        v5 = *((_DWORD *)v1 + 12);
        if ( v5 )
        {
          sub_21E94B4((void **)&v30, "minecraft:on_prime");
          v29 = 0;
          v25 = 0;
          v26 = 0;
          ptr = 0;
          v27 = 1065353216;
          v28 = 0;
          HIDWORD(v6) = 10;
          LODWORD(v6) = &v27;
          v7 = sub_21E6254(v6);
          v24 = v7;
          if ( v7 == 1 )
          {
            v9 = &v29;
            v29 = 0;
          }
          else
            if ( v7 >= 0x40000000 )
              sub_21E57F4();
            v8 = 4 * v7;
            v9 = (int *)operator new(4 * v7);
            _aeabi_memclr4(v9, v8);
          ptr = v9;
          EntityDefinitionDescriptor::executeEvent(v5, (int)v1, (int **)&v30, (const VariantParameterList *)&ptr);
          v10 = v25;
          while ( v10 )
            v13 = (void *)v10;
            v14 = *(_DWORD *)(v10 + 8);
            v10 = *(_DWORD *)v10;
            v15 = (void *)(v14 - 12);
            if ( (int *)(v14 - 12) != &dword_28898C0 )
            {
              v11 = (unsigned int *)(v14 - 4);
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
                j_j_j_j__ZdlPv_9(v15);
            }
            operator delete(v13);
          _aeabi_memclr4(ptr, 4 * v24);
          if ( ptr && &v29 != ptr )
            operator delete(ptr);
          v16 = (void *)(v30 - 12);
          if ( (int *)(v30 - 12) != &dword_28898C0 )
            v21 = (unsigned int *)(v30 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v22 = __ldrex(v21);
              while ( __strex(v22 - 1, v21) );
            else
              v22 = (*v21)--;
            if ( v22 <= 0 )
              j_j_j_j__ZdlPv_9(v16);
          Entity::updateDescription(v1);
          Entity::reload(v1);
        }
        v17 = (Level *)Entity::getLevel(v1);
        if ( !Level::isClientSide(v17) )
          v18 = Entity::getLevel(v1);
          Level::broadcastEntityEvent(v18, (int)v1, 31, 0);
        v19 = Entity::getLevel(v1);
        v20 = (BlockSource *)Entity::getRegion(v1);
        result = Level::broadcastDimensionEvent(v19, v20, 1005, (int)v1 + 72, 0);
      }
    }
  }
  return result;
}
