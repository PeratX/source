

void __fastcall MultiPlayerLevel::~MultiPlayerLevel(MultiPlayerLevel *this)
{
  Level *v1; // r0@1

  v1 = MultiPlayerLevel::~MultiPlayerLevel(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall MultiPlayerLevel::~MultiPlayerLevel(MultiPlayerLevel *this)
{
  MultiPlayerLevel::~MultiPlayerLevel(this);
}


Entity *__fastcall MultiPlayerLevel::putEntity(int a1, BlockSource *this, int a3, int a4, int a5, int a6, int a7)
{
  BlockSource *v7; // r8@1
  int v8; // r5@1
  int v9; // r6@1
  int v10; // r7@1
  Entity *v11; // r4@1
  Level *v12; // r0@1
  int v13; // r1@1
  int v14; // r1@3
  Entity *v15; // r6@3
  char *v16; // r0@4
  char *v17; // r7@4
  __int64 v18; // r0@4
  Entity *v19; // r3@4
  void *v20; // r9@6
  signed int v21; // r1@6
  unsigned int v22; // r2@6
  unsigned int v23; // r1@8
  unsigned int v24; // r4@8
  char *v25; // r10@14
  signed int v26; // r2@16
  int v27; // r0@16
  int v28; // ST04_4@17
  int v29; // r1@18
  void *v30; // r0@19
  int v31; // r9@19
  Dimension *v32; // r7@21
  char *v33; // r0@21
  Entity **v34; // r0@21
  Entity *v35; // r2@22
  Entity *v37; // [sp+4h] [bp-4Ch]@13
  char v38; // [sp+8h] [bp-48h]@21
  char v39; // [sp+10h] [bp-40h]@21
  __int64 v40; // [sp+18h] [bp-38h]@21
  __int64 v41; // [sp+20h] [bp-30h]@21
  int v42; // [sp+28h] [bp-28h]@1

  v7 = this;
  v8 = a1;
  v9 = a4;
  v10 = a3;
  v11 = *(Entity **)a7;
  v12 = (Level *)BlockSource::getLevel(this);
  Entity::_setLevelPtr(v11, v12);
  Entity::setRegion(*(Entity **)a7, v7);
  (*(void (__fastcall **)(int *, int, int, int))(*(_DWORD *)v8 + 60))(&v42, v8, v10, v9);
  if ( v42 )
    (*(void (__fastcall **)(int, int *, _DWORD))(*(_DWORD *)v8 + 104))(v8, &v42, 0);
  Entity::setUniqueID(*(_DWORD *)a7, v13, __PAIR__(v9, v10));
  Entity::setRuntimeID(*(_DWORD *)a7, v14, a5, a6);
  v15 = *(Entity **)a7;
  if ( Entity::isGlobal(*(Entity **)a7) == 1 )
  {
    v16 = Level::getGlobalEntities((Level *)v8);
    v17 = v16;
    v18 = *(_QWORD *)(v16 + 4);
    v19 = *(Entity **)a7;
    if ( (_DWORD)v18 == HIDWORD(v18) )
    {
      v20 = *(void **)v17;
      v21 = v18 - *(_DWORD *)v17;
      v22 = v21 >> 2;
      if ( !(v21 >> 2) )
        v22 = 1;
      v23 = v22 + (v21 >> 2);
      v24 = v23;
      if ( 0 != v23 >> 30 )
        v24 = 0x3FFFFFFF;
      if ( v23 < v22 )
      if ( v24 )
      {
        v37 = *(Entity **)a7;
        if ( v24 >= 0x40000000 )
          sub_21E57F4();
        v25 = (char *)operator new(4 * v24);
        LODWORD(v18) = *(_QWORD *)v17 >> 32;
        v20 = (void *)*(_QWORD *)v17;
        v19 = v37;
      }
      else
        v25 = 0;
      v26 = v18 - (_DWORD)v20;
      v27 = (int)&v25[v26];
      *(_DWORD *)&v25[v26] = v19;
      if ( 0 != v26 >> 2 )
        v28 = (int)&v25[v26];
        _aeabi_memmove4(v25, v20);
        v27 = v28;
      v29 = v27 + 4;
      if ( v20 )
        v30 = v20;
        v31 = v29;
        operator delete(v30);
        v29 = v31;
      *(_DWORD *)v17 = v25;
      *((_DWORD *)v17 + 1) = v29;
      *((_DWORD *)v17 + 2) = &v25[4 * v24];
    }
    else
      *(_DWORD *)v18 = v19;
      *((_DWORD *)v17 + 1) += 4;
  }
  v32 = (Dimension *)BlockSource::getDimension(v7);
  Entity::getRuntimeID((Entity *)&v39, *(_DWORD *)a7);
  v33 = Entity::getUniqueID(*(Entity **)a7);
  v40 = *(_QWORD *)&v39;
  v41 = *(_QWORD *)v33;
  std::_Hashtable<EntityRuntimeID,std::pair<EntityRuntimeID const,EntityUniqueID>,std::allocator<std::pair<EntityRuntimeID const,EntityUniqueID>>,std::__detail::_Select1st,std::equal_to<EntityRuntimeID>,std::hash<EntityRuntimeID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::pair<EntityRuntimeID,EntityUniqueID>>(
    &v38,
    (unsigned __int64 *)(v8 + 88),
    (int)&v40);
  Dimension::_registerEntity(v32, *(Entity **)a7);
  v34 = *(Entity ***)(v8 + 6048);
  if ( v34 == *(Entity ***)(v8 + 6052) )
    std::vector<std::unique_ptr<Entity,std::default_delete<Entity>>,std::allocator<std::unique_ptr<Entity,std::default_delete<Entity>>>>::_M_emplace_back_aux<std::unique_ptr<Entity,std::default_delete<Entity>>>(
      (_QWORD *)(v8 + 6044),
      (int *)a7);
  else
    v35 = *(Entity **)a7;
    *(_DWORD *)a7 = 0;
    *v34 = v35;
    *(_DWORD *)(v8 + 6048) += 4;
  *((_BYTE *)v15 + 40) = 1;
  *((_BYTE *)v15 + 3081) = 1;
  *((_BYTE *)v15 + 4) = 5;
  Entity::reload(v15);
    (*(void (**)(void))(*(_DWORD *)v42 + 32))();
  return v15;
}


Level *__fastcall MultiPlayerLevel::~MultiPlayerLevel(MultiPlayerLevel *this)
{
  Level *v1; // r4@1
  char *v2; // r10@1
  int *v3; // r7@1
  int *v4; // r6@1
  int **v5; // r8@2
  int *v6; // r7@4
  int *v7; // r5@5

  v1 = this;
  v2 = (char *)this + 6048;
  *(_DWORD *)this = &off_26E611C;
  *((_DWORD *)this + 1) = &off_26E61A4;
  v3 = (int *)*((_DWORD *)this + 1512);
  v4 = (int *)*((_DWORD *)this + 1511);
  if ( v4 == v3 )
  {
    *(_DWORD *)v2 = v4;
  }
  else
    v5 = (int **)((char *)this + 6044);
    do
    {
      Level::levelCleanupQueueEntityRemoval((int)v1, v4);
      ++v4;
    }
    while ( v3 != v4 );
    v6 = *(int **)v2;
    v4 = *v5;
    if ( *(int **)v2 != *v5 )
      v7 = *v5;
      do
      {
        if ( *v7 )
          (*(void (**)(void))(*(_DWORD *)*v7 + 32))();
        *v7 = 0;
        ++v7;
      }
      while ( v6 != v7 );
      v6 = *v5;
    if ( v6 != v4 )
        if ( *v6 )
          (*(void (**)(void))(*(_DWORD *)*v6 + 32))();
        *v6 = 0;
        ++v6;
      while ( v4 != v6 );
      v4 = *v5;
  if ( v4 )
    operator delete(v4);
  return j_j_j__ZN5LevelD2Ev(v1);
}


int __fastcall MultiPlayerLevel::takeEntity(Entity **a1, int a2, unsigned int a3, unsigned int a4)
{
  Entity **v4; // r4@1
  int v5; // r5@1
  Entity *v6; // r0@1
  Entity *v7; // r6@1
  Entity **v8; // r0@4
  Entity **v9; // r1@4
  Entity **v10; // r2@5
  Entity *v11; // t1@6
  int *v12; // r5@9
  Entity *v13; // r0@9
  Entity *v14; // r3@9
  Entity *v15; // r0@9
  int v16; // r0@11
  int v17; // r0@11
  int result; // r0@13

  v4 = a1;
  v5 = a2;
  v6 = (Entity *)Level::fetchEntity(a2, a2, a3, a4, 1);
  v7 = v6;
  if ( v6 )
  {
    if ( !Entity::isRemoved(v6) )
      (*(void (__fastcall **)(Entity *))(*(_DWORD *)v7 + 44))(v7);
    v8 = *(Entity ***)(v5 + 6048);
    v9 = *(Entity ***)(v5 + 6044);
    if ( v9 != v8 )
    {
      v10 = *(Entity ***)(v5 + 6044);
      do
      {
        v11 = *v10;
        ++v10;
        if ( v11 == v7 )
          break;
        v9 = v10;
      }
      while ( v8 != v10 );
    }
      v12 = (int *)(v5 + 6048);
      v13 = *v9;
      *v9 = 0;
      *v4 = v13;
      v14 = *(Entity **)(*v12 - 4);
      *(_DWORD *)(*v12 - 4) = 0;
      v15 = *v9;
      *v9 = v14;
      if ( v15 )
        (*(void (**)(void))(*(_DWORD *)v15 + 32))();
      v16 = *v12;
      v4 = (Entity **)(v16 - 4);
      *v12 -= 4;
      v17 = *(_DWORD *)(v16 - 4);
      if ( v17 )
        (*(void (**)(void))(*(_DWORD *)v17 + 32))();
  }
  result = 0;
  *v4 = 0;
  return result;
}


Entity *__fastcall MultiPlayerLevel::addEntity(int a1, BlockSource *a2, Entity **a3)
{
  Entity **v3; // r6@1
  int v4; // r5@1
  BlockSource *v5; // r8@1
  __int64 v6; // kr00_8@1
  int v7; // r4@1
  Entity *v8; // r4@1
  int v10; // [sp+Ch] [bp-2Ch]@1
  int v11; // [sp+10h] [bp-28h]@1
  int v12; // [sp+14h] [bp-24h]@1

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = *(_QWORD *)Entity::getUniqueID(*a3);
  v7 = (int)*v3;
  *v3 = 0;
  Level::getNextRuntimeID((Level *)&v11, v4);
  v10 = v7;
  v8 = MultiPlayerLevel::putEntity(v4, v5, v6, SHIDWORD(v6), v11, v12, (int)&v10);
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 32))();
  return v8;
}


int __fastcall MultiPlayerLevel::tick(MultiPlayerLevel *this)
{
  Level *v1; // r4@1
  unsigned __int64 *v2; // r0@1
  int result; // r0@1
  int v4; // r1@2

  v1 = this;
  Level::tick(this);
  v2 = (unsigned __int64 *)Level::getGameRules(v1);
  result = GameRules::getBool(v2, (int **)&GameRules::DO_DAYLIGHT_CYCLE);
  if ( result == 1 )
  {
    v4 = Level::getTime(v1) + 1;
    result = j_j_j__ZN5Level7setTimeEi_1(v1, v4);
  }
  return result;
}


Entity *__fastcall MultiPlayerLevel::putEntity(int a1, BlockSource *a2, int a3, int a4, int *a5)
{
  int v5; // r7@1
  BlockSource *v6; // r6@1
  int v7; // r4@1
  int v8; // r5@1
  int v9; // r1@1
  Entity *v10; // r4@1
  int v12; // [sp+Ch] [bp-24h]@1
  int v13; // [sp+10h] [bp-20h]@1
  int v14; // [sp+14h] [bp-1Ch]@1

  v5 = a1;
  v6 = a2;
  v7 = a4;
  v8 = a3;
  Level::getNextRuntimeID((Level *)&v13, a1);
  v9 = *a5;
  *a5 = 0;
  v12 = v9;
  v10 = MultiPlayerLevel::putEntity(v5, v6, v8, v7, v13, v14, (int)&v12);
  if ( v12 )
    (*(void (**)(void))(*(_DWORD *)v12 + 32))();
  return v10;
}


int __fastcall MultiPlayerLevel::borrowEntity(_DWORD *a1, int a2, unsigned int a3, unsigned int a4)
{
  _DWORD *v4; // r6@1
  int v5; // r5@1
  int v6; // r0@1
  int *v7; // r2@2
  int *v8; // r1@2
  int *v9; // r3@3
  int v10; // t1@4
  int *v11; // r5@7
  int v12; // r0@7
  int v13; // r3@7
  int v14; // r0@7
  int v15; // r0@9
  _DWORD *v16; // r4@9
  int v17; // r0@9
  int result; // r0@11

  v4 = a1;
  v5 = a2;
  v6 = Level::fetchEntity(a2, a2, a3, a4, 1);
  if ( !v6 )
    goto LABEL_15;
  v7 = *(int **)(v5 + 6048);
  v8 = *(int **)(v5 + 6044);
  if ( v8 != v7 )
  {
    v9 = *(int **)(v5 + 6044);
    do
    {
      v10 = *v9;
      ++v9;
      if ( v10 == v6 )
        break;
      v8 = v9;
    }
    while ( v7 != v9 );
  }
    v11 = (int *)(v5 + 6048);
    v12 = *v8;
    *v8 = 0;
    *v4 = v12;
    v13 = *(_DWORD *)(*v11 - 4);
    *(_DWORD *)(*v11 - 4) = 0;
    v14 = *v8;
    *v8 = v13;
    if ( v14 )
      (*(void (**)(void))(*(_DWORD *)v14 + 32))();
    v15 = *v11;
    v16 = (_DWORD *)(v15 - 4);
    *v11 -= 4;
    v17 = *(_DWORD *)(v15 - 4);
    if ( v17 )
      (*(void (**)(void))(*(_DWORD *)v17 + 32))();
    result = 0;
    *v16 = 0;
  else
LABEL_15:
    *v4 = 0;
  return result;
}


Dimension *__fastcall MultiPlayerLevel::directTickEntities(MultiPlayerLevel *this, BlockSource *a2)
{
  BlockSource *v2; // r4@1
  Dimension *v3; // r0@1
  Dimension *result; // r0@1
  int i; // r5@1

  v2 = a2;
  v3 = (Dimension *)BlockSource::getDimensionConst(a2);
  result = Dimension::getEntityIdMapConst(v3);
  for ( i = *((_DWORD *)result + 2); i; i = *(_DWORD *)i )
  {
    result = *(Dimension **)(i + 16);
    if ( result )
    {
      result = (Dimension *)Entity::isRemoved((Entity *)result);
      if ( !result )
      {
        result = (Dimension *)Entity::isGlobal(*(Entity **)(i + 16));
        if ( !result )
          result = (Dimension *)Entity::tick(*(Entity **)(i + 16), v2);
      }
    }
  }
  return result;
}
