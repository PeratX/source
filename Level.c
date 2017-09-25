

SavedDataStorage *__fastcall Level::setCommandsEnabled(Level *this, int a2)
{
  Level *v2; // r4@1
  LevelData *v3; // r5@1
  int v4; // r6@1
  int v5; // r0@3
  int i; // r5@4
  SavedDataStorage *result; // r0@7

  v2 = this;
  v3 = (Level *)((char *)this + 144);
  v4 = a2;
  LevelData::setCommandsEnabled((Level *)((char *)this + 144), a2);
  if ( v4 == 1 )
    LevelData::disableAchievements(v3);
  v5 = *((_DWORD *)v2 + 32);
  if ( v5 )
  {
    (*(void (**)(void))(*(_DWORD *)v5 + 24))();
    for ( i = *((_DWORD *)v2 + 1484); i; i = *(_DWORD *)i )
      MapItemSavedData::trySave(*(MapItemSavedData **)(i + 16), *((LevelStorage **)v2 + 32));
  }
  result = (SavedDataStorage *)*((_DWORD *)v2 + 33);
  if ( result )
    result = (SavedDataStorage *)j_j_j__ZN16SavedDataStorage4saveEv(result);
  return result;
}


int __fastcall Level::playSynchronizedSound(int a1, int a2, char a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // r1@2
  int v9; // r2@2
  int v10; // r3@2
  int result; // r0@2
  void **v12; // [sp+10h] [bp-38h]@2
  int v13; // [sp+14h] [bp-34h]@2
  int v14; // [sp+18h] [bp-30h]@2
  char v15; // [sp+1Ch] [bp-2Ch]@2
  char v16; // [sp+1Dh] [bp-2Bh]@2
  int v17; // [sp+20h] [bp-28h]@2
  int v18; // [sp+24h] [bp-24h]@2
  int v19; // [sp+28h] [bp-20h]@2
  int v20; // [sp+2Ch] [bp-1Ch]@2
  int v21; // [sp+30h] [bp-18h]@2
  char v22; // [sp+34h] [bp-14h]@2
  char v23; // [sp+35h] [bp-13h]@2

  if ( *(_BYTE *)(a1 + 5824) )
  {
    v13 = 2;
    v14 = 1;
    v15 = 0;
    v12 = &off_26DA800;
    v16 = a3;
    v8 = *(_DWORD *)a4;
    v9 = *(_DWORD *)(a4 + 4);
    v10 = *(_DWORD *)(a4 + 8);
    v17 = v8;
    v18 = v9;
    v19 = v10;
    v20 = a5;
    v21 = a6;
    v22 = a7;
    v23 = a8;
    result = (*(int (**)(void))(**(_DWORD **)(a1 + 660) + 8))();
  }
  else
    result = Level::broadcastSoundEvent((Level *)a1, a2, a3, a4, a5, a6, a7, a8);
  return result;
}


int __fastcall Level::animateTick(Level *this, Entity *a2)
{
  Entity *v2; // r5@1
  Level *v3; // r6@1
  int v4; // r0@1
  Random *v5; // r6@1
  signed int v6; // r8@1
  int v7; // ST10_4@2
  char v8; // ST0C_1@2
  char v9; // ST08_1@2
  int v10; // r10@2
  char v11; // r4@2
  char v12; // r11@2
  int v13; // r9@2
  unsigned int v14; // r7@2
  int v15; // r0@2
  int result; // r0@2
  BlockSource *v17; // [sp+0h] [bp-50h]@1
  unsigned int v18; // [sp+14h] [bp-3Ch]@2
  int v19; // [sp+18h] [bp-38h]@2
  int v20; // [sp+1Ch] [bp-34h]@2
  int v21; // [sp+20h] [bp-30h]@1
  int v22; // [sp+24h] [bp-2Ch]@2
  int v23; // [sp+28h] [bp-28h]@2

  v2 = a2;
  v3 = this;
  v17 = (BlockSource *)Entity::getRegion(a2);
  v4 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v2 + 52))(v2);
  BlockPos::BlockPos((int)&v21, v4);
  v5 = (Level *)((char *)v3 + 732);
  v6 = 100;
  do
  {
    v7 = v23;
    v8 = Random::_genRandInt32(v5);
    v9 = Random::_genRandInt32(v5);
    v10 = v22;
    v11 = Random::_genRandInt32(v5);
    v12 = Random::_genRandInt32(v5);
    v13 = v21;
    v14 = (Random::_genRandInt32(v5) & 0xF) + v13;
    v18 = v14 - (Random::_genRandInt32(v5) & 0xF);
    v19 = (v11 & 0xF) + v10 - (v12 & 0xF);
    v20 = (v8 & 0xF) + v7 - (v9 & 0xF);
    v15 = BlockSource::getBlock(v17, (const BlockPos *)&v18);
    result = (*(int (**)(void))(*(_DWORD *)v15 + 432))();
    --v6;
  }
  while ( v6 );
  return result;
}


MapItemSavedData *__fastcall Level::_loadMapData(int a1, __int64 *a2)
{
  MapItemSavedData *v2; // r11@0
  int v3; // r10@1
  __int64 *v4; // r9@1
  int v5; // r4@1
  void (__fastcall *v6)(int *, int, int *); // r7@2
  void *v7; // r0@2
  signed int v8; // r4@3
  int v9; // r0@3
  const CompoundTag *v10; // r6@4
  int v11; // r1@5
  MapItemSavedData *v12; // r2@5
  __int64 v13; // kr00_8@6
  unsigned int v14; // r5@6
  _DWORD *v15; // r0@6
  _DWORD *v16; // r9@7
  int v17; // r6@7
  MapItem *v18; // r0@11
  unsigned int *v19; // r2@15
  signed int v20; // r1@17
  int v21; // r0@20
  MapItemSavedData *v22; // r0@31
  void *v23; // r0@33
  unsigned int *v25; // r2@37
  signed int v26; // r1@39
  unsigned __int64 v27; // [sp+0h] [bp-58h]@7
  char v28; // [sp+8h] [bp-50h]@30
  MapItemSavedData *v29; // [sp+10h] [bp-48h]@5
  const CompoundTag *v30; // [sp+14h] [bp-44h]@4
  void **v31; // [sp+18h] [bp-40h]@4
  int v32; // [sp+1Ch] [bp-3Ch]@4
  int v33; // [sp+20h] [bp-38h]@4
  int *v34; // [sp+24h] [bp-34h]@4
  int v35; // [sp+28h] [bp-30h]@2
  int v36; // [sp+2Ch] [bp-2Ch]@2

  v3 = a1;
  v4 = a2;
  v5 = *(_DWORD *)(a1 + 128);
  if ( v5 )
  {
    v6 = *(void (__fastcall **)(int *, int, int *))(*(_DWORD *)v5 + 56);
    MapItemSavedData::getSerializationKey((const void **)&v35, (int)a2, *a2);
    v6(&v36, v5, &v35);
    v7 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) != &dword_28898C0 )
    {
      v19 = (unsigned int *)(v35 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      }
      else
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    }
    v8 = 0;
    v9 = *(_DWORD *)(v36 - 12);
    if ( v9 )
      v31 = &off_26E91B8;
      v32 = 0;
      v33 = v9;
      v34 = &v36;
      NbtIo::read((NbtIo *)&v30, (IDataInput *)&v31);
      v10 = v30;
      if ( v30 )
        v2 = (MapItemSavedData *)operator new(0x50u);
        MapItemSavedData::MapItemSavedData((int)v2, v11, *v4);
        v29 = v2;
        MapItemSavedData::deserialize(v2, v10);
        if ( *((_BYTE *)v2 + 17) )
        {
          v13 = *(_QWORD *)(v3 + 560);
          v14 = *((_DWORD *)v2 + 8) % (unsigned int)(*(_QWORD *)(v3 + 560) >> 32);
          v15 = *(_DWORD **)(v13 + 4 * v14);
          if ( v15 )
          {
            v27 = __PAIR__((unsigned int)v4, (unsigned int)v10);
            v16 = (_DWORD *)*v15;
            v17 = *(_DWORD *)(*v15 + 4);
            while ( v17 != *((_DWORD *)v2 + 8) )
            {
              if ( *v16 )
              {
                v17 = *(_DWORD *)(v13 + 4);
                v15 = v16;
                v16 = (_DWORD *)*v16;
                if ( *(_DWORD *)(v13 + 4) % HIDWORD(v13) == v14 )
                  continue;
              }
              v18 = 0;
              v4 = (__int64 *)HIDWORD(v27);
              v10 = (const CompoundTag *)v27;
              goto LABEL_29;
            }
            v4 = (__int64 *)HIDWORD(v27);
            v10 = (const CompoundTag *)v27;
            if ( v15 )
              v21 = *v15;
              if ( v21 )
                v18 = *(MapItem **)(v21 + 8);
              else
                v18 = 0;
            else
          }
          else
            v18 = 0;
LABEL_29:
          MapItem::renderBiomePreviewMap(v18, (Dimension *)v2, v12);
        }
        std::_Hashtable<EntityUniqueID,std::pair<EntityUniqueID const,std::unique_ptr<MapItemSavedData,std::default_delete<MapItemSavedData>>>,std::allocator<std::pair<EntityUniqueID const,std::unique_ptr<MapItemSavedData,std::default_delete<MapItemSavedData>>>>,std::__detail::_Select1st,std::equal_to<EntityUniqueID>,std::hash<EntityUniqueID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<EntityUniqueID const&,std::unique_ptr<MapItemSavedData,std::default_delete<MapItemSavedData>>>(
          (int *)&v28,
          (_QWORD *)(v3 + 5928),
          v4,
          &v29);
        if ( v29 )
          v22 = MapItemSavedData::~MapItemSavedData(v29);
          operator delete((void *)v22);
        (*(void (__fastcall **)(const CompoundTag *))(*(_DWORD *)v10 + 4))(v10);
        v8 = 1;
        v8 = 0;
    v23 = (void *)(v36 - 12);
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v36 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    if ( !v8 )
      v2 = 0;
  }
  else
    v2 = 0;
  return v2;
}


Entity *__fastcall Level::addGlobalEntity(int a1, int a2, Entity **a3)
{
  int v3; // r5@1
  Entity *v4; // r4@1
  int (*v5)(void); // r3@1
  int v6; // r6@1
  Entity *result; // r0@3
  char **v8; // r8@4
  char *v9; // r0@4
  _BYTE *v10; // r9@6
  unsigned int v11; // r3@6
  unsigned int v12; // r2@8
  unsigned int v13; // r6@8
  char *v14; // r7@14
  int v15; // r11@16
  char **v16; // [sp+4h] [bp-2Ch]@14
  Entity *v17; // [sp+8h] [bp-28h]@1

  v3 = a1;
  v4 = *a3;
  v5 = *(int (**)(void))(*(_DWORD *)a1 + 44);
  *a3 = 0;
  v17 = v4;
  v6 = v5();
  if ( v17 )
    (*(void (**)(void))(*(_DWORD *)v17 + 32))();
  result = 0;
  v17 = 0;
  if ( v6 )
  {
    Entity::setGlobal(v4, 1);
    v8 = (char **)(v3 + 5788);
    v9 = *(char **)(v3 + 5788);
    if ( v9 == *(char **)(v3 + 5792) )
    {
      v10 = *(_BYTE **)(v3 + 5784);
      v11 = (v9 - v10) >> 2;
      if ( !v11 )
        v11 = 1;
      v12 = v11 + ((v9 - v10) >> 2);
      v13 = v11 + ((v9 - v10) >> 2);
      if ( 0 != v12 >> 30 )
        v13 = 0x3FFFFFFF;
      if ( v12 < v11 )
      if ( v13 )
      {
        if ( v13 >= 0x40000000 )
          sub_21E57F4();
        v14 = (char *)operator new(4 * v13);
        v10 = *(_BYTE **)(v3 + 5784);
        v9 = *v8;
        v16 = (char **)(v3 + 5784);
      }
      else
        v14 = 0;
      v15 = (int)&v14[v9 - v10];
      *(_DWORD *)&v14[v9 - v10] = v4;
      if ( 0 != (v9 - v10) >> 2 )
        _aeabi_memmove4(v14, v10);
      if ( v10 )
        operator delete(v10);
      *v16 = v14;
      *v8 = (char *)(v15 + 4);
      *(_DWORD *)(v3 + 5792) = &v14[4 * v13];
    }
    else
      *(_DWORD *)v9 = v4;
      *v8 += 4;
    result = v4;
  }
  return result;
}


SavedDataStorage *__fastcall Level::setDefaultSpawn(Level *this, const BlockPos *a2)
{
  Level *v2; // r4@1
  int v3; // r0@1
  int i; // r5@2
  SavedDataStorage *result; // r0@5

  v2 = this;
  LevelData::setSpawn((Level *)((char *)this + 144), a2);
  v3 = *((_DWORD *)v2 + 32);
  if ( v3 )
  {
    (*(void (**)(void))(*(_DWORD *)v3 + 24))();
    for ( i = *((_DWORD *)v2 + 1484); i; i = *(_DWORD *)i )
      MapItemSavedData::trySave(*(MapItemSavedData **)(i + 16), *((LevelStorage **)v2 + 32));
  }
  result = (SavedDataStorage *)*((_DWORD *)v2 + 33);
  if ( result )
    result = (SavedDataStorage *)j_j_j__ZN16SavedDataStorage4saveEv(result);
  return result;
}


int __fastcall Level::broadcastBossEvent(int result)
{
  __int64 i; // r6@1
  int v2; // t1@2

  for ( i = *(_QWORD *)(result + 592); HIDWORD(i) != (_DWORD)i; result = (*(int (**)(void))(*(_DWORD *)v2 + 8))() )
  {
    v2 = *(_DWORD *)i;
    LODWORD(i) = i + 4;
  }
  return result;
}


int __fastcall Level::_handlePlayerSuspension(int result)
{
  int v1; // r10@1
  int v2; // r4@1
  int v3; // r5@1
  int *v4; // r7@5
  int v5; // r6@6
  int *v6; // r0@11
  int v7; // r1@11
  bool v8; // zf@11
  int v9; // [sp+4h] [bp-3Ch]@2
  int v10; // [sp+8h] [bp-38h]@2
  int v11; // [sp+Ch] [bp-34h]@1
  char v12; // [sp+10h] [bp-30h]@15

  v1 = result;
  v2 = *(_QWORD *)(result + 48) >> 32;
  v3 = *(_QWORD *)(result + 48);
  v11 = v2;
  if ( v3 != v2 )
  {
    v10 = result + 88;
    v9 = result + 36;
    do
    {
      result = *(_DWORD *)(v3 + 16);
      if ( result == 1 )
      {
        result = (int)Level::_resumePlayer((Level *)v1, (const mce::UUID *)v3);
      }
      else if ( !result )
        result = *(_QWORD *)(v1 + 24) >> 32;
        v4 = (int *)*(_QWORD *)(v1 + 24);
        if ( v4 == (int *)result )
        {
LABEL_9:
          v2 = v11;
        }
        else
          while ( 1 )
          {
            v5 = *v4;
            if ( *(_QWORD *)(*v4 + 4560) == *(_QWORD *)v3 && *(_QWORD *)(v5 + 4568) == *(_QWORD *)(v3 + 8) )
              break;
            ++v4;
            if ( (int *)result == v4 )
              goto LABEL_9;
          }
          std::vector<Player *,std::allocator<Player *>>::emplace_back<Player *>(v9, v4);
          v6 = *(int **)(v1 + 28);
          v7 = (int)(v4 + 1);
          v8 = v6 == v4 + 1;
          if ( v6 != v4 + 1 )
            v8 = v7 == (_DWORD)v6;
          if ( !v8 )
            _aeabi_memmove4(v4, v7);
            v6 = *(int **)(v1 + 28);
          *(_DWORD *)(v1 + 28) = v6 - 1;
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 1496))(v5);
          Entity::getRuntimeID((Entity *)&v12, v5);
          result = std::_Hashtable<EntityRuntimeID,std::pair<EntityRuntimeID const,EntityUniqueID>,std::allocator<std::pair<EntityRuntimeID const,EntityUniqueID>>,std::__detail::_Select1st,std::equal_to<EntityRuntimeID>,std::hash<EntityRuntimeID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_erase(__PAIR__(&v12, v10));
      v3 += 24;
    }
    while ( v3 != v2 );
    v3 = *(_DWORD *)(v1 + 48);
  }
  *(_DWORD *)(v1 + 52) = v3;
  return result;
}


signed int __fastcall Level::requestMapInfo(signed int result, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r9@1 OVERLAPPED
  unsigned int v5; // r10@1 OVERLAPPED
  signed int v6; // r2@1
  unsigned int v7; // r7@2
  unsigned int v8; // r6@2
  signed int v9; // r8@3
  int v10; // r5@3
  bool v11; // zf@4
  signed int v12; // r11@7
  bool v13; // zf@10
  signed int v14; // [sp+0h] [bp-58h]@2
  char v15; // [sp+4h] [bp-54h]@14
  int v16; // [sp+Ch] [bp-4Ch]@14
  void **v17; // [sp+10h] [bp-48h]@14
  int v18; // [sp+14h] [bp-44h]@14
  int v19; // [sp+18h] [bp-40h]@14
  char v20; // [sp+1Ch] [bp-3Ch]@14
  __int64 v21; // [sp+20h] [bp-38h]@14
  __int64 v22; // [sp+28h] [bp-30h]@1

  v4 = a3;
  v5 = a4;
  v22 = *(_QWORD *)&v4;
  v6 = result;
  if ( *(_BYTE *)(result + 5824) )
  {
    v7 = *(_DWORD *)(result + 5932);
    v14 = result;
    v8 = (v4 + ((a4 - 1640531527) << 6) + ((a4 - 1640531527) >> 2) - 1640531527) ^ (a4 - 1640531527);
    result = *(_DWORD *)(*(_DWORD *)(result + 5928) + 4 * (v8 % v7));
    if ( !result )
      goto LABEL_14;
    v9 = *(_DWORD *)result;
    v10 = *(_DWORD *)(*(_DWORD *)result + 24);
    while ( 1 )
    {
      v11 = v10 == v8;
      if ( v10 == v8 )
        v11 = *(_QWORD *)(v9 + 8) == __PAIR__(a4, v4);
      if ( v11 )
        break;
      v12 = *(_DWORD *)v9;
      if ( *(_DWORD *)v9 )
      {
        v10 = *(_DWORD *)(v12 + 24);
        result = v9;
        v9 = *(_DWORD *)v9;
        if ( *(_DWORD *)(v12 + 24) % v7 == v8 % v7 )
          continue;
      }
    }
    v13 = result == 0;
    if ( result )
      result = *(_DWORD *)result;
      v13 = result == 0;
    if ( v13 )
LABEL_14:
      v18 = 2;
      v19 = 1;
      v20 = 0;
      v17 = &off_26E9904;
      v21 = *(_QWORD *)&v4;
      (*(void (**)(void))(**(_DWORD **)(v6 + 660) + 8))();
      v16 = 0;
      result = j__ZNSt10_HashtableI14EntityUniqueIDSt4pairIKS0_St10unique_ptrI16MapItemSavedDataSt14default_deleteIS4_EEESaIS8_ENSt8__detail10_Select1stESt8equal_toIS0_ESt4hashIS0_ENSA_18_Mod_range_hashingENSA_20_Default_ranged_hashENSA_20_Prime_rehash_policyENSA_17_Hashtable_traitsILb1ELb0ELb1EEEE10_M_emplaceIJRS2_DnEEES1_INSA_14_Node_iteratorIS8_Lb0ELb1EEEbESt17integral_constantIbLb1EEDpOT_(
                 &v15,
                 (unsigned __int64 *)(v14 + 5928),
                 &v22);
  }
  return result;
}


Entity *__fastcall Level::moveAutonomousEntityTo(int a1, int a2, unsigned int a3, unsigned int a4, BlockSource *a5)
{
  int v5; // r10@1
  Entity **v6; // r7@1
  Entity **v7; // r4@1
  unsigned int v8; // r5@1
  unsigned int v9; // r6@1
  int v10; // r9@1
  char *v11; // r0@2
  Entity *v12; // r8@2
  Entity *v13; // t1@2
  LevelChunk *v14; // r5@6
  int v15; // r0@7
  Dimension *v16; // r0@8
  const ChunkPos *v17; // r0@8
  __int64 v18; // r6@8
  unsigned int *v19; // r1@9
  unsigned int v20; // r0@11
  Entity **v21; // r7@13
  int *v22; // r11@14
  __int64 v23; // r0@15
  Entity *v24; // r1@18
  void (__fastcall *v25)(int, BlockSource *, Entity **); // r3@18
  int v26; // r0@20
  signed int v27; // r2@21
  int v28; // r5@22
  Entity *v29; // r1@23
  Entity *v30; // r0@23
  _DWORD *v31; // r4@27
  int v32; // r0@27
  unsigned int *v33; // r4@32
  unsigned int v34; // r0@34
  Entity *v36; // [sp+0h] [bp-48h]@18
  int v37; // [sp+4h] [bp-44h]@39
  char v38; // [sp+8h] [bp-40h]@8
  int v39; // [sp+Ch] [bp-3Ch]@8
  char v40; // [sp+10h] [bp-38h]@7
  char v41; // [sp+18h] [bp-30h]@6

  v5 = a1;
  v6 = *(Entity ***)(a1 + 5800);
  v7 = *(Entity ***)(a1 + 5796);
  v8 = a4;
  v9 = a3;
  v10 = a2;
  if ( v7 != v6 )
  {
    while ( 1 )
    {
      v11 = Entity::getUniqueID(*v7);
      v13 = *v7;
      ++v7;
      v12 = v13;
      if ( *(_QWORD *)v11 == __PAIR__(v8, v9) )
        break;
      if ( v6 == v7 )
        goto LABEL_13;
    }
    if ( v12 )
      BlockPos::BlockPos((int)&v41, v10);
      v14 = (LevelChunk *)BlockSource::getChunkAt(a5, (const BlockPos *)&v41);
      if ( v14 )
      {
        v15 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v12 + 52))(v12);
        ChunkPos::ChunkPos((int)&v40, v15);
        (*(void (__fastcall **)(Entity *, int, _DWORD, signed int))(*(_DWORD *)v12 + 104))(v12, v10, 0, 1);
        if ( !LevelChunk::hasEntity(v14, v12) )
        {
          v16 = (Dimension *)Entity::getDimension(v12);
          v17 = (const ChunkPos *)Dimension::getChunkSource(v16);
          ChunkSource::getAvailableChunk((ChunkSource *)&v38, v17);
          v18 = *(_QWORD *)&v38;
          if ( v39 )
          {
            v19 = (unsigned int *)(v39 + 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v20 = __ldrex(v19);
              while ( __strex(v20 - 1, v19) );
            }
            else
              v20 = (*v19)--;
            if ( v20 == 1 )
              v33 = (unsigned int *)(HIDWORD(v18) + 8);
              (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v18) + 8))(HIDWORD(v18));
              if ( &pthread_create )
              {
                __dmb();
                do
                  v34 = __ldrex(v33);
                while ( __strex(v34 - 1, v33) );
              }
              else
                v34 = (*v33)--;
              if ( v34 == 1 )
                (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v18) + 12))(HIDWORD(v18));
          }
          LevelChunk::removeEntity((LevelChunk *)&v37, (Entity *)v18, (int)v12);
          LevelChunk::addEntity((int)v14, &v37);
          if ( v37 )
            (*(void (**)(void))(*(_DWORD *)v37 + 32))();
          v37 = 0;
        }
        return v12;
      }
      return 0;
  }
LABEL_13:
  v21 = *(Entity ***)(v5 + 5808);
  if ( v21 == *(Entity ***)(v5 + 5812) )
    return 0;
  v22 = (int *)(v5 + 5812);
  while ( 1 )
    v23 = *(_QWORD *)Entity::getUniqueID(*v21);
    HIDWORD(v23) ^= v8;
    if ( v23 == v9 )
      break;
    ++v21;
    if ( v21 == (Entity **)*v22 )
  v12 = *v21;
  (*(void (__fastcall **)(Entity *, int, _DWORD, signed int))(*(_DWORD *)*v21 + 104))(*v21, v10, 0, 1);
  v24 = *v21;
  v25 = *(void (__fastcall **)(int, BlockSource *, Entity **))(*(_DWORD *)v5 + 52);
  *v21 = 0;
  v36 = v24;
  v25(v5, a5, &v36);
  if ( v36 )
    (*(void (**)(void))(*(_DWORD *)v36 + 32))();
  v36 = 0;
  v26 = (int)(v21 + 1);
  if ( v21 + 1 != (Entity **)*v22 )
    v27 = *v22 - v26;
    v26 = *v22;
    if ( v27 >= 1 )
      v28 = (v27 >> 2) + 1;
      do
        v29 = v21[1];
        v21[1] = 0;
        v30 = *v21;
        *v21 = v29;
        if ( v30 )
          (*(void (__cdecl **)(Entity *))(*(_DWORD *)v30 + 32))(v30);
        --v28;
        ++v21;
      while ( v28 > 1 );
      v26 = *v22;
  v31 = (_DWORD *)(v26 - 4);
  *v22 = v26 - 4;
  v32 = *(_DWORD *)(v26 - 4);
  if ( v32 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v32 + 32))(v32);
  *v31 = 0;
  return v12;
}


signed int __fastcall Level::getActivePlayerCount(Level *this)
{
  return (signed int)((*((_QWORD *)this + 3) >> 32) - *((_QWORD *)this + 3)) >> 2;
}


char *__fastcall Level::getUsers(Level *this)
{
  return (char *)this + 12;
}


void __fastcall Level::~Level(Level *this)
{
  Level *v1; // r0@1

  v1 = Level::~Level(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall Level::getPlayerColor(Level *this, const Player *a2, Player *a3)
{
  Level *v3; // r4@1
  Player *v4; // r7@1
  char v5; // r0@1
  int v6; // r0@3
  int v7; // r2@3
  int v8; // r3@3
  int v9; // r5@3
  int v10; // r0@3
  int v11; // r0@3
  int v12; // r2@3
  int v13; // r3@3
  int v14; // r6@3
  int v15; // r0@3
  int v16; // r0@3
  int v17; // r2@3
  int v18; // r3@3
  int v19; // r6@3
  int v20; // r0@3
  int v21; // r0@3
  int v22; // r2@3
  int v23; // r3@3
  int v24; // r6@3
  int v25; // r0@3
  int v26; // r0@3
  int v27; // r2@3
  int v28; // r3@3
  int v29; // r6@3
  int v30; // r0@3
  int v31; // r0@3
  int v32; // r2@3
  int v33; // r3@3
  int v34; // r6@3
  int v35; // r0@3
  int v36; // r0@3
  int v37; // r2@3
  int v38; // r3@3
  int v39; // r6@3
  int v40; // r0@3
  int v41; // r0@3
  int v42; // r2@3
  int v43; // r3@3
  int v44; // r6@3
  int v45; // r0@3
  int v46; // r0@3
  int v47; // r2@3
  int v48; // r3@3
  int v49; // r6@3
  int v50; // r0@3
  int v51; // r0@3
  int v52; // r2@3
  int v53; // r3@3
  int v54; // r6@3
  int v55; // r0@3
  int v56; // r0@3
  int v57; // r2@3
  int v58; // r3@3
  int v59; // r6@3
  int v60; // r0@3
  int v61; // r0@3
  int v62; // r2@3
  int v63; // r3@3
  int v64; // r6@3
  int v65; // r0@3
  int v66; // r0@3
  int v67; // r2@3
  int v68; // r3@3
  int v69; // r6@3
  int v70; // r0@3
  int v71; // r0@3
  int v72; // r2@3
  int v73; // r3@3
  int v74; // r6@3
  int v75; // r0@3
  int v76; // r0@3
  int v77; // r2@3
  int v78; // r3@3
  int v79; // r6@3
  int v80; // r0@3
  unsigned int v81; // r0@4
  int v82; // r2@4
  char *v83; // r0@4
  __int64 v84; // kr00_8@4
  int result; // r0@4

  v3 = this;
  v4 = a3;
  v5 = byte_281C9FC;
  __dmb();
  if ( !(v5 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_281C9FC) )
  {
    v6 = ColorFormat::ColorFromColorCode((int **)&unk_281C9D0);
    v7 = *(_DWORD *)v6;
    v8 = *(_DWORD *)(v6 + 4);
    v9 = *(_DWORD *)(v6 + 8);
    v10 = *(_DWORD *)(v6 + 12);
    unk_281C8B0 = v7;
    unk_281C8B4 = v8;
    unk_281C8B8 = v9;
    dword_281C8BC = v10;
    v11 = ColorFormat::ColorFromColorCode((int **)&unk_281C9DC);
    v12 = *(_DWORD *)v11;
    v13 = *(_DWORD *)(v11 + 4);
    v14 = *(_DWORD *)(v11 + 8);
    v15 = *(_DWORD *)(v11 + 12);
    unk_281C8C0 = v12;
    unk_281C8C4 = v13;
    unk_281C8C8 = v14;
    dword_281C8CC = v15;
    v16 = ColorFormat::ColorFromColorCode((int **)&unk_281C9E8);
    v17 = *(_DWORD *)v16;
    v18 = *(_DWORD *)(v16 + 4);
    v19 = *(_DWORD *)(v16 + 8);
    v20 = *(_DWORD *)(v16 + 12);
    unk_281C8D0 = v17;
    unk_281C8D4 = v18;
    unk_281C8D8 = v19;
    dword_281C8DC = v20;
    v21 = ColorFormat::ColorFromColorCode((int **)&unk_281C9C4);
    v22 = *(_DWORD *)v21;
    v23 = *(_DWORD *)(v21 + 4);
    v24 = *(_DWORD *)(v21 + 8);
    v25 = *(_DWORD *)(v21 + 12);
    unk_281C8E0 = v22;
    unk_281C8E4 = v23;
    unk_281C8E8 = v24;
    dword_281C8EC = v25;
    v26 = ColorFormat::ColorFromColorCode((int **)&unk_281C9D4);
    v27 = *(_DWORD *)v26;
    v28 = *(_DWORD *)(v26 + 4);
    v29 = *(_DWORD *)(v26 + 8);
    v30 = *(_DWORD *)(v26 + 12);
    unk_281C8F0 = v27;
    unk_281C8F4 = v28;
    unk_281C8F8 = v29;
    dword_281C8FC = v30;
    v31 = ColorFormat::ColorFromColorCode((int **)&unk_281C9D8);
    v32 = *(_DWORD *)v31;
    v33 = *(_DWORD *)(v31 + 4);
    v34 = *(_DWORD *)(v31 + 8);
    v35 = *(_DWORD *)(v31 + 12);
    unk_281C900 = v32;
    unk_281C904 = v33;
    unk_281C908 = v34;
    dword_281C90C = v35;
    v36 = ColorFormat::ColorFromColorCode((int **)&unk_281C9E4);
    v37 = *(_DWORD *)v36;
    v38 = *(_DWORD *)(v36 + 4);
    v39 = *(_DWORD *)(v36 + 8);
    v40 = *(_DWORD *)(v36 + 12);
    unk_281C910 = v37;
    unk_281C914 = v38;
    unk_281C918 = v39;
    dword_281C91C = v40;
    v41 = ColorFormat::ColorFromColorCode((int **)&unk_281C9E0);
    v42 = *(_DWORD *)v41;
    v43 = *(_DWORD *)(v41 + 4);
    v44 = *(_DWORD *)(v41 + 8);
    v45 = *(_DWORD *)(v41 + 12);
    unk_281C920 = v42;
    unk_281C924 = v43;
    unk_281C928 = v44;
    dword_281C92C = v45;
    v46 = ColorFormat::ColorFromColorCode((int **)&unk_281C9B8);
    v47 = *(_DWORD *)v46;
    v48 = *(_DWORD *)(v46 + 4);
    v49 = *(_DWORD *)(v46 + 8);
    v50 = *(_DWORD *)(v46 + 12);
    unk_281C930 = v47;
    unk_281C934 = v48;
    unk_281C938 = v49;
    dword_281C93C = v50;
    v51 = ColorFormat::ColorFromColorCode((int **)&unk_281C9C0);
    v52 = *(_DWORD *)v51;
    v53 = *(_DWORD *)(v51 + 4);
    v54 = *(_DWORD *)(v51 + 8);
    v55 = *(_DWORD *)(v51 + 12);
    unk_281C940 = v52;
    unk_281C944 = v53;
    unk_281C948 = v54;
    dword_281C94C = v55;
    v56 = ColorFormat::ColorFromColorCode((int **)&unk_281C9B4);
    v57 = *(_DWORD *)v56;
    v58 = *(_DWORD *)(v56 + 4);
    v59 = *(_DWORD *)(v56 + 8);
    v60 = *(_DWORD *)(v56 + 12);
    unk_281C950 = v57;
    unk_281C954 = v58;
    unk_281C958 = v59;
    dword_281C95C = v60;
    v61 = ColorFormat::ColorFromColorCode((int **)&unk_281C9BC);
    v62 = *(_DWORD *)v61;
    v63 = *(_DWORD *)(v61 + 4);
    v64 = *(_DWORD *)(v61 + 8);
    v65 = *(_DWORD *)(v61 + 12);
    unk_281C960 = v62;
    unk_281C964 = v63;
    unk_281C968 = v64;
    dword_281C96C = v65;
    v66 = ColorFormat::ColorFromColorCode((int **)&unk_281C9B0);
    v67 = *(_DWORD *)v66;
    v68 = *(_DWORD *)(v66 + 4);
    v69 = *(_DWORD *)(v66 + 8);
    v70 = *(_DWORD *)(v66 + 12);
    unk_281C970 = v67;
    unk_281C974 = v68;
    unk_281C978 = v69;
    dword_281C97C = v70;
    v71 = ColorFormat::ColorFromColorCode((int **)&unk_281C9C8);
    v72 = *(_DWORD *)v71;
    v73 = *(_DWORD *)(v71 + 4);
    v74 = *(_DWORD *)(v71 + 8);
    v75 = *(_DWORD *)(v71 + 12);
    unk_281C980 = v72;
    unk_281C984 = v73;
    unk_281C988 = v74;
    dword_281C98C = v75;
    v76 = ColorFormat::ColorFromColorCode((int **)&unk_281C9CC);
    v77 = *(_DWORD *)v76;
    v78 = *(_DWORD *)(v76 + 4);
    v79 = *(_DWORD *)(v76 + 8);
    v80 = *(_DWORD *)(v76 + 12);
    unk_281C990 = v77;
    unk_281C994 = v78;
    unk_281C998 = v79;
    dword_281C99C = v80;
    j___cxa_guard_release((unsigned int *)&byte_281C9FC);
  }
  v81 = Player::getPlayerIndex(v4) % 0xFu;
  v82 = 16 * v81;
  v83 = (char *)&unk_281C8B0 + 16 * v81;
  v84 = *(_QWORD *)(v83 + 4);
  result = *((_DWORD *)v83 + 3);
  *(_DWORD *)v3 = *(_DWORD *)((char *)&unk_281C8B0 + v82);
  *(_QWORD *)((char *)v3 + 4) = v84;
  *((_DWORD *)v3 + 3) = result;
  return result;
}


char *__fastcall Level::getLevelData(Level *this)
{
  return (char *)this + 144;
}


int __fastcall Level::getNumRemotePlayers(Level *this)
{
  Level *v1; // r4@1
  _DWORD *v2; // r0@1
  void (*v3)(void); // r3@1
  int *v4; // r0@1
  int *v5; // r5@1
  int v6; // r6@2
  int v7; // r0@4
  bool v8; // zf@4
  _DWORD *v10; // [sp+4h] [bp-24h]@1
  void (*v11)(void); // [sp+Ch] [bp-1Ch]@1
  signed int (__fastcall *v12)(_DWORD ***, int); // [sp+10h] [bp-18h]@1
  int v13; // [sp+14h] [bp-14h]@1

  v1 = this;
  v13 = 0;
  v2 = operator new(4u);
  *v2 = &v13;
  v3 = (void (*)(void))sub_1913174;
  v10 = v2;
  v11 = (void (*)(void))sub_1913174;
  v12 = sub_1913156;
  v4 = (int *)(*((_QWORD *)v1 + 3) >> 32);
  v5 = (int *)*((_QWORD *)v1 + 3);
  if ( v5 == v4 )
    goto LABEL_15;
  v6 = (int)(v4 - 1);
  do
  {
    if ( !v3 )
      sub_21E5F48();
    v7 = v12((_DWORD ***)&v10, *v5);
    v8 = v6 == (_DWORD)v5;
    v3 = v11;
    if ( (int *)v6 != v5 )
    {
      ++v5;
      v8 = (v7 ^ 1) == 1;
    }
  }
  while ( !v8 );
  if ( v11 )
LABEL_15:
    v3();
  return v13;
}


SavedDataStorage *__fastcall Level::setDifficulty(int a1, int a2)
{
  int v2; // r4@1
  LevelData *v3; // r9@1
  int v4; // r6@1
  int v5; // r8@4
  unsigned int *v6; // r6@5
  Dimension *v7; // r0@6
  void *v8; // r6@6
  Entity *v9; // r7@7
  void (__fastcall *v10)(int *, int, _DWORD, _DWORD); // r10@11
  char *v11; // r0@11
  void *v12; // r7@16
  int v13; // r0@21
  int i; // r5@22
  SavedDataStorage *result; // r0@25
  void *v16; // [sp+8h] [bp-48h]@5
  int v17; // [sp+Ch] [bp-44h]@6
  void *ptr; // [sp+10h] [bp-40h]@6
  int v19; // [sp+14h] [bp-3Ch]@6
  __int64 v20; // [sp+18h] [bp-38h]@6
  int v21; // [sp+20h] [bp-30h]@18
  int v22; // [sp+24h] [bp-2Ch]@11

  v2 = a1;
  v3 = (LevelData *)(a1 + 144);
  v4 = a2;
  if ( LevelData::getGameDifficulty((LevelData *)(a1 + 144)) != a2 )
  {
    LevelData::setGameDifficulty((int)v3, v4);
    if ( *(_DWORD *)(v2 + 544) )
    {
      if ( !LevelData::getGameDifficulty(v3) )
      {
        v5 = *(_DWORD *)(v2 + 568);
        if ( v5 )
        {
          v6 = (unsigned int *)&v16;
          do
          {
            v7 = Dimension::getEntityIdMap(*(Dimension **)(v5 + 8));
            v16 = 0;
            v17 = *((_DWORD *)v7 + 1);
            ptr = 0;
            v19 = *((_DWORD *)v7 + 3);
            v20 = *((_QWORD *)v7 + 2);
            std::_Hashtable<EntityUniqueID,std::pair<EntityUniqueID const,Entity *>,std::allocator<std::pair<EntityUniqueID const,Entity *>>,std::__detail::_Select1st,std::equal_to<EntityUniqueID>,std::hash<EntityUniqueID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_assign<std::_Hashtable<EntityUniqueID,std::pair<EntityUniqueID const,Entity *>,std::allocator<std::pair<EntityUniqueID const,Entity *>>,std::__detail::_Select1st,std::equal_to<EntityUniqueID>,std::hash<EntityUniqueID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::(std::_Hashtable<EntityUniqueID,std::pair<EntityUniqueID const,Entity *>,std::allocator<std::pair<EntityUniqueID const,Entity *>>,std::__detail::_Select1st,std::equal_to<EntityUniqueID>,std::hash<EntityUniqueID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<EntityUniqueID const,Entity *>,true> const*)#1}>(
              v6,
              (int)v7);
            v8 = ptr;
            if ( ptr )
            {
              do
              {
                v9 = (Entity *)*((_DWORD *)v8 + 4);
                if ( v9 && !(*(int (__fastcall **)(_DWORD))(*(_DWORD *)v9 + 180))(*((_DWORD *)v8 + 4)) )
                {
                  if ( !Entity::isRemoved(v9) )
                    (*(void (__fastcall **)(Entity *))(*(_DWORD *)v9 + 44))(v9);
                  (*(void (__fastcall **)(int, Entity *, _DWORD))(*(_DWORD *)v2 + 108))(v2, v9, 0);
                  v10 = *(void (__fastcall **)(int *, int, _DWORD, _DWORD))(*(_DWORD *)v2 + 60);
                  v11 = Entity::getUniqueID(v9);
                  v10(&v22, v2, *(_QWORD *)v11, *(_QWORD *)v11 >> 32);
                  if ( v22 )
                    (*(void (**)(void))(*(_DWORD *)v22 + 32))();
                }
                v8 = *(void **)v8;
              }
              while ( v8 );
              v8 = ptr;
            }
            if ( v8 )
                v12 = *(void **)v8;
                operator delete(v8);
                v8 = v12;
              while ( v12 );
            _aeabi_memclr4(v16, 4 * v17);
            v19 = 0;
            if ( v16 && &v21 != v16 )
              operator delete(v16);
            v5 = *(_DWORD *)v5;
            v6 = (unsigned int *)&v16;
          }
          while ( v5 );
        }
      }
    }
  }
  v13 = *(_DWORD *)(v2 + 128);
  if ( v13 )
    (*(void (**)(void))(*(_DWORD *)v13 + 24))();
    for ( i = *(_DWORD *)(v2 + 5936); i; i = *(_DWORD *)i )
      MapItemSavedData::trySave(*(MapItemSavedData **)(i + 16), *(LevelStorage **)(v2 + 128));
  result = *(SavedDataStorage **)(v2 + 132);
  if ( result )
    result = (SavedDataStorage *)SavedDataStorage::save(result);
  return result;
}


void __fastcall Level::_removeAllPlayers(Level *this)
{
  char *v1; // r4@1
  char *v2; // r6@1
  char *v3; // r7@2

  *((_DWORD *)this + 7) = *((_DWORD *)this + 6);
  *((_DWORD *)this + 10) = *((_DWORD *)this + 9);
  v1 = (char *)*((_DWORD *)this + 3);
  *((_DWORD *)this + 3) = 0;
  v2 = (char *)*((_DWORD *)this + 4);
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  if ( v1 != v2 )
  {
    v3 = v1;
    do
    {
      if ( *(_DWORD *)v3 )
        (*(void (**)(void))(**(_DWORD **)v3 + 32))();
      *(_DWORD *)v3 = 0;
      v3 += 4;
    }
    while ( v2 != v3 );
  }
  if ( v1 )
    j_j_j__ZdlPv_6(v1);
}


int __fastcall Level::setFixedInventorySlot(Level *this, int a2, const ItemInstance *a3)
{
  int v3; // r0@1

  v3 = LevelData::getFixedInventory((Level *)((char *)this + 144));
  return (*(int (**)(void))(*(_DWORD *)v3 + 32))();
}


SavedDataStorage *__fastcall Level::setHasLockedResourcePack(Level *this, int a2)
{
  Level *v2; // r4@1
  int v3; // r0@1
  int i; // r5@2
  SavedDataStorage *result; // r0@5

  v2 = this;
  LevelData::setHasLockedResourcePack((Level *)((char *)this + 144), a2);
  v3 = *((_DWORD *)v2 + 32);
  if ( v3 )
  {
    (*(void (**)(void))(*(_DWORD *)v3 + 24))();
    for ( i = *((_DWORD *)v2 + 1484); i; i = *(_DWORD *)i )
      MapItemSavedData::trySave(*(MapItemSavedData **)(i + 16), *((LevelStorage **)v2 + 32));
  }
  result = (SavedDataStorage *)*((_DWORD *)v2 + 33);
  if ( result )
    result = (SavedDataStorage *)j_j_j__ZN16SavedDataStorage4saveEv(result);
  return result;
}


int __fastcall Level::handleSoundEvent(float a1, int a2, int a3, int a4, int a5)
{
  float v5; // r7@1
  __int64 v6; // r0@1
  unsigned int v11; // r4@2

  v5 = a1;
  v6 = *(_QWORD *)(LODWORD(a1) + 116);
  if ( HIDWORD(v6) != (_DWORD)v6 )
  {
    __asm { VLDR            S16, [SP,#0x30+arg_0] }
    v11 = 0;
    do
    {
      __asm { VSTR            S16, [SP,#0x30+var_30] }
      (*(void (**)(void))(**(_DWORD **)(v6 + 4 * v11) + 96))();
      v6 = *(_QWORD *)(LODWORD(v5) + 116);
      ++v11;
    }
    while ( v11 < (HIDWORD(v6) - (signed int)v6) >> 2 );
  }
  return v6;
}


int __fastcall Level::handleStopSoundEvent(int a1)
{
  int v1; // r5@1
  __int64 v2; // r0@1
  unsigned int v3; // r6@2

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 116);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = 0;
    do
    {
      (*(void (**)(void))(**(_DWORD **)(v2 + 4 * v3) + 100))();
      v2 = *(_QWORD *)(v1 + 116);
      ++v3;
    }
    while ( v3 < (HIDWORD(v2) - (signed int)v2) >> 2 );
  }
  return v2;
}


void __fastcall Level::onSourceDestroyed(Level *this, BlockSource *a2)
{
  Level *v2; // r9@1
  BlockSource *v3; // r4@1
  unsigned int v4; // r8@1
  int v5; // r5@1
  unsigned int v6; // r1@1
  unsigned int v7; // r11@1
  Level *v8; // r10@1
  void **v9; // r7@2
  void **v10; // r5@2
  int v11; // r1@5
  void **v12; // r7@8
  int v13; // r1@10
  _DWORD *v14; // r6@13
  int v15; // r1@14
  int v16; // r1@15
  BlockSourceListener **v17; // r5@21 OVERLAPPED
  BlockSourceListener **v18; // r6@21 OVERLAPPED
  BlockSourceListener *v19; // t1@22
  int i; // r10@24
  Dimension *v21; // r0@29
  int v22; // r2@29
  int v23; // r8@29
  char *v24; // r9@30
  _BYTE *v25; // r6@34
  char *v26; // r5@34
  unsigned int v27; // r1@34
  unsigned int v28; // r0@36
  unsigned int v29; // r11@36
  int v30; // r7@43
  int v31; // [sp+0h] [bp-38h]@21
  int v32; // [sp+4h] [bp-34h]@1
  Dimension *v33; // [sp+4h] [bp-34h]@29
  void *ptr; // [sp+8h] [bp-30h]@25
  int v35; // [sp+Ch] [bp-2Ch]@29
  char *v36; // [sp+10h] [bp-28h]@29

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 129);
  v5 = *((_DWORD *)this + 128);
  v32 = *((_DWORD *)this + 128);
  v6 = (unsigned int)a2 % v4;
  v7 = v6;
  v8 = *(Level **)(v5 + 4 * v6);
  if ( v8 )
  {
    v9 = *(void ***)v8;
    v10 = *(void ***)(v5 + 4 * v6);
    while ( v9[1] != (void *)v3 )
    {
      if ( *v9 )
      {
        v11 = *((_DWORD *)*v9 + 1) % v4;
        v10 = v9;
        v9 = (void **)*v9;
        if ( v11 == v7 )
          continue;
      }
      goto LABEL_21;
    }
    if ( v10 )
      v12 = (void **)*v10;
      if ( (void **)v8 != v10 )
        if ( *v12 )
        {
          v13 = *((_DWORD *)*v12 + 1) % v4;
          if ( v13 != v7 )
            *(_DWORD *)(v32 + 4 * v13) = v10;
        }
        goto LABEL_20;
      v14 = *v12;
      if ( *v12 )
        v15 = v14[1] % v4;
        if ( v15 == v7 )
LABEL_20:
          *v10 = *v12;
          operator delete(v12);
          --*((_DWORD *)v2 + 131);
          goto LABEL_21;
        *(_DWORD *)(v32 + 4 * v15) = v8;
        v16 = *((_DWORD *)this + 128);
        v8 = *(Level **)(v16 + 4 * v7);
      else
      if ( (Level *)((char *)this + 520) == v8 )
        *(_DWORD *)v8 = v14;
      *(_DWORD *)(v16 + 4 * v7) = 0;
      goto LABEL_20;
  }
LABEL_21:
  v31 = (int)v2;
  *(_QWORD *)&v17 = *(_QWORD *)((char *)v2 + 116);
  while ( v18 != v17 )
    v19 = *v17;
    ++v17;
    BlockSource::removeListener(v3, v19);
  if ( !*((_BYTE *)v2 + 5984) )
    for ( i = *((_DWORD *)v2 + 142); i; i = *(_DWORD *)i )
      v21 = *(Dimension **)(i + 8);
      v33 = *(Dimension **)(i + 8);
      ptr = 0;
      v35 = 0;
      v36 = 0;
      v23 = *((_DWORD *)Dimension::getEntityIdMap(v21) + 2);
      if ( v23 )
        v24 = 0;
        do
          if ( (BlockSource *)Entity::getRegion(*(Entity **)(v23 + 16)) == v3 )
          {
            if ( v24 == v36 )
            {
              v25 = ptr;
              v26 = 0;
              v27 = (v24 - (_BYTE *)ptr) >> 2;
              if ( !v27 )
                v27 = 1;
              v28 = v27 + ((v24 - (_BYTE *)ptr) >> 2);
              v29 = v27 + ((v24 - (_BYTE *)ptr) >> 2);
              if ( 0 != v28 >> 30 )
                v29 = 0x3FFFFFFF;
              if ( v28 < v27 )
              if ( v29 )
              {
                if ( v29 >= 0x40000000 )
                  sub_21E57F4();
                v26 = (char *)operator new(4 * v29);
              }
              v22 = v24 - v25;
              v30 = (int)&v26[v22];
              *(_DWORD *)&v26[v22] = *(_DWORD *)(v23 + 16);
              if ( (v24 - v25) >> 2 )
                _aeabi_memmove4(v26, v25);
              v24 = (char *)(v30 + 4);
              if ( v25 )
                operator delete(v25);
              ptr = v26;
              v35 = v30 + 4;
              v36 = &v26[4 * v29];
            }
            else
              *(_DWORD *)v24 = *(_DWORD *)(v23 + 16);
              v24 = (char *)(v35 + 4);
              v35 += 4;
          }
          v23 = *(_DWORD *)v23;
        while ( v23 );
      Level::_fixEntitiesRegion(v31, (unsigned __int64 *)&ptr, v22, v33);
      if ( ptr )
        operator delete(ptr);
}


_DWORD *__fastcall Level::registerTemporaryPointer(int a1, unsigned int a2)
{
  int v2; // r9@1
  unsigned int v3; // r7@1
  unsigned int v4; // r4@1
  int v5; // r10@1
  _DWORD *result; // r0@1
  _DWORD *v7; // r5@2
  int v8; // r6@4
  bool v9; // zf@7
  _DWORD *v10; // r0@11

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 5904);
  v4 = a2;
  v5 = a2 % v3;
  result = *(_DWORD **)(*(_DWORD *)(a1 + 5900) + 4 * (a2 % v3));
  if ( !result )
    goto LABEL_11;
  v7 = (_DWORD *)*result;
  while ( v7[1] != a2 )
  {
    v8 = *v7;
    if ( *v7 )
    {
      result = v7;
      v7 = (_DWORD *)*v7;
      if ( *(_DWORD *)(v8 + 4) % v3 == v5 )
        continue;
    }
  }
  v9 = result == 0;
  if ( result )
    result = (_DWORD *)*result;
    v9 = result == 0;
  if ( v9 )
LABEL_11:
    v10 = operator new(8u);
    *v10 = 0;
    v10[1] = v4;
    result = (_DWORD *)j_j_j__ZNSt10_HashtableIP8_TickPtrS1_SaIS1_ENSt8__detail9_IdentityESt8equal_toIS1_ESt4hashIS1_ENS3_18_Mod_range_hashingENS3_20_Default_ranged_hashENS3_20_Prime_rehash_policyENS3_17_Hashtable_traitsILb0ELb1ELb1EEEE21_M_insert_unique_nodeEjjPNS3_10_Hash_nodeIS1_Lb0EEE(
                         v2 + 5900,
                         v5,
                         v4,
                         (int)v10);
  return result;
}


signed int __fastcall Level::isUsableLevel(Level *this, Level *a2)
{
  Level *v2; // r1@1
  signed int result; // r0@1

  v2 = this;
  result = 0;
  if ( v2 )
  {
    if ( !*((_BYTE *)v2 + 5984) )
      result = 1;
  }
  return result;
}


char *__fastcall Level::getPlayerList(Level *this)
{
  return (char *)this + 632;
}


int __fastcall Level::getRuntimeEntity(int a1, int a2, __int64 a3, int a4)
{
  unsigned int v4; // r9@1
  __int64 v5; // r6@1
  unsigned int v6; // r4@1
  int v7; // r1@1
  int v8; // r5@1
  int v9; // r0@1
  int v10; // r8@2
  int v11; // r6@2
  bool v12; // zf@3
  int v13; // r11@6
  bool v14; // zf@9
  unsigned int v15; // r5@12 OVERLAPPED
  unsigned int v16; // r6@12 OVERLAPPED
  int v17; // r7@13
  int v18; // r4@14
  _DWORD *v19; // r0@17
  void (*v20)(void); // r3@17
  __int64 v21; // r6@17
  int v22; // r0@18
  int v23; // t1@18
  int v25; // [sp+8h] [bp-48h]@1
  _DWORD *v26; // [sp+Ch] [bp-44h]@17
  void (*v27)(void); // [sp+14h] [bp-3Ch]@17
  signed int (__fastcall *v28)(int *, Entity *); // [sp+18h] [bp-38h]@17
  char v29; // [sp+1Fh] [bp-31h]@1
  unsigned __int64 v30; // [sp+20h] [bp-30h]@1

  v4 = HIDWORD(a3);
  WORD2(a3) = 31161;
  v25 = a1;
  WORD3(a3) = -25033;
  v30 = __PAIR__(v4, (unsigned int)a3);
  v29 = a4;
  v5 = *(_QWORD *)(a1 + 88);
  v6 = (a3 + ((v4 + HIDWORD(a3)) << 6) + ((v4 + HIDWORD(a3)) >> 2) + HIDWORD(a3)) ^ (v4 + HIDWORD(a3));
  v7 = v6 % (unsigned int)(*(_QWORD *)(a1 + 88) >> 32);
  v8 = v7;
  v9 = *(_DWORD *)(v5 + 4 * v7);
  if ( v9 )
  {
    v10 = *(_DWORD *)v9;
    v11 = *(_DWORD *)(*(_DWORD *)v9 + 24);
    while ( 1 )
    {
      v12 = v11 == v6;
      if ( v11 == v6 )
      {
        v7 = *(_QWORD *)(v10 + 8) ^ a3 | (*(_QWORD *)(v10 + 8) >> 32) ^ v4;
        v12 = *(_QWORD *)(v10 + 8) == __PAIR__(v4, (unsigned int)a3);
      }
      if ( v12 )
        break;
      v13 = *(_DWORD *)v10;
      if ( *(_DWORD *)v10 )
        LODWORD(v5) = *(_DWORD *)(v13 + 24);
        v7 = *(_DWORD *)(v13 + 24) % HIDWORD(v5);
        v9 = v10;
        v10 = *(_DWORD *)v10;
        if ( v7 == v8 )
          continue;
      goto LABEL_17;
    }
    v14 = v9 == 0;
    if ( v9 )
      v9 = *(_DWORD *)v9;
      v14 = v9 == 0;
    if ( !v14 )
      *(_QWORD *)&v15 = *(_QWORD *)(v9 + 16);
      if ( (v15 & v16) == -1 )
        v18 = 0;
      else
        v17 = *(_DWORD *)(v25 + 568);
        if ( v17 )
        {
          do
          {
            v18 = Dimension::fetchEntity(*(_DWORD *)(v17 + 8), v7, __PAIR__(v16, v15), a4);
            if ( v18 )
              break;
            v17 = *(_DWORD *)v17;
            v18 = 0;
          }
          while ( v17 );
        }
        else
          v18 = 0;
      return v18;
  }
LABEL_17:
  v19 = operator new(8u);
  *v19 = &v29;
  v19[1] = &v30;
  v20 = (void (*)(void))sub_1912E9A;
  v26 = v19;
  v27 = (void (*)(void))sub_1912E9A;
  v28 = sub_1912E58;
  v21 = *(_QWORD *)(v25 + 24);
  if ( (_DWORD)v21 == HIDWORD(v21) )
    v18 = 0;
LABEL_25:
    v20();
    return v18;
  while ( 1 )
    v22 = v28((int *)&v26, *(Entity **)v21);
    v23 = *(_DWORD *)v21;
    LODWORD(v21) = v21 + 4;
    v18 = v23;
    if ( v22 == 1 )
      break;
    if ( HIDWORD(v21) == (_DWORD)v21 )
      v18 = 0;
    if ( !v27 )
      sub_21E5F48();
  v20 = v27;
  if ( v27 )
    goto LABEL_25;
  return v18;
}


int __fastcall Level::getNewUniqueID(int result, int a2)
{
  signed __int64 v2; // r2@1

  v2 = *(_QWORD *)(a2 + 72) + 1LL;
  *(_QWORD *)(a2 + 72) = v2;
  *(_QWORD *)result = v2;
  return result;
}


char *__fastcall Level::onSourceCreated(Level *this, BlockSource *a2)
{
  Level *v2; // r8@1
  BlockSource *v3; // r4@1
  __int64 v4; // kr00_8@1
  int v5; // r9@1
  char *result; // r0@1
  int v7; // r6@2
  bool v8; // zf@7
  _DWORD *v9; // r0@11
  BlockSourceListener **v10; // r5@12 OVERLAPPED
  BlockSourceListener **v11; // r6@12 OVERLAPPED
  BlockSourceListener *v12; // t1@13

  v2 = this;
  v3 = a2;
  v4 = *((_QWORD *)this + 64);
  v5 = (unsigned int)a2 % HIDWORD(v4);
  result = *(char **)(v4 + 4 * ((unsigned int)a2 % HIDWORD(v4)));
  if ( !result )
    goto LABEL_11;
  v7 = *(_DWORD *)result;
  while ( *(BlockSource **)(v7 + 4) != a2 )
  {
    if ( *(_DWORD *)v7 )
    {
      result = (char *)v7;
      v7 = *(_DWORD *)v7;
      if ( *(_DWORD *)(v4 + 4) % HIDWORD(v4) == v5 )
        continue;
    }
  }
  v8 = result == 0;
  if ( result )
    result = *(char **)result;
    v8 = result == 0;
  if ( v8 )
LABEL_11:
    v9 = operator new(8u);
    *v9 = 0;
    v9[1] = v3;
    result = (char *)std::_Hashtable<BlockSource *,BlockSource *,std::allocator<BlockSource *>,std::__detail::_Identity,std::equal_to<BlockSource *>,std::hash<BlockSource *>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::_M_insert_unique_node(
                       (int)v2 + 512,
                       v5,
                       (unsigned int)v3,
                       (int)v9);
  for ( *(_QWORD *)&v10 = *(_QWORD *)((char *)v2 + 116); v11 != v10; result = BlockSource::addListener(v3, v12) )
    v12 = *v10;
    ++v10;
  return result;
}


int __fastcall Level::getDimensionConversionData(Level *this, int a2)
{
  LevelData *v2; // r5@1
  Level *v3; // r4@1
  char *v4; // r0@1
  int v5; // r0@1
  char v7; // [sp+4h] [bp-1Ch]@1

  v2 = (LevelData *)(a2 + 144);
  v3 = this;
  v4 = LevelData::getSpawn((LevelData *)(a2 + 144));
  Vec3::Vec3((int)&v7, (int)v4);
  v5 = LevelData::getNetherScale(v2);
  return DimensionConversionData::DimensionConversionData((int)v3, (int)&v7, v5);
}


BlockSourceListener **__fastcall Level::removeListener(Level *this, LevelListener *a2)
{
  Level *v2; // r6@1
  BlockSourceListener *v3; // r4@1
  int v4; // r1@1 OVERLAPPED
  BlockSourceListener **v5; // r2@1 OVERLAPPED
  int v6; // r0@1
  int v7; // r3@2
  bool v8; // zf@3
  BlockSourceListener **result; // r0@3
  BlockSourceListener *v10; // r5@6
  bool v11; // zf@6
  int v12; // r0@11
  BlockSourceListener **v13; // r1@24
  bool v14; // zf@24
  int i; // r5@29

  v2 = this;
  v3 = a2;
  *(_QWORD *)&v4 = *(_QWORD *)((char *)this + 116);
  v6 = ((signed int)v5 - v4) >> 4;
  if ( v6 < 1 )
  {
LABEL_10:
    if ( 1 == ((signed int)v5 - v4) >> 2 )
    {
      result = (BlockSourceListener **)v4;
    }
    else
      v12 = ((signed int)v5 - v4) >> 2;
      if ( v12 == 2 )
      {
        result = (BlockSourceListener **)v4;
      }
      else
        if ( v12 != 3 )
        {
          result = v5;
          goto LABEL_23;
        }
        if ( *(BlockSourceListener **)v4 == v3 )
        result = (BlockSourceListener **)(v4 + 4);
      if ( *result == v3 )
        goto LABEL_23;
      ++result;
    if ( *result != v3 )
      result = v5;
  }
  else
    v7 = v6 + 1;
    while ( 1 )
      v8 = *(_DWORD *)v4 == (_DWORD)v3;
      if ( *(BlockSourceListener **)v4 != v3 )
        v8 = *(_DWORD *)(v4 + 4) == (_DWORD)v3;
      if ( v8 )
        break;
      result = (BlockSourceListener **)(v4 + 8);
      v10 = *(BlockSourceListener **)(v4 + 8);
      v11 = v10 == v3;
      if ( v10 != v3 )
        result = (BlockSourceListener **)(v4 + 12);
        v11 = *(_DWORD *)(v4 + 12) == (_DWORD)v3;
      if ( v11 )
      --v7;
      v4 += 16;
      if ( v7 <= 1 )
        goto LABEL_10;
LABEL_23:
  if ( result != v5 )
    v13 = result + 1;
    v14 = result + 1 == v5;
    if ( result + 1 != v5 )
      v14 = v5 == v13;
    if ( !v14 )
      _aeabi_memmove4(result, v13);
      v5 = (BlockSourceListener **)*((_DWORD *)v2 + 30);
    result = v5 - 1;
    *((_DWORD *)v2 + 30) = v5 - 1;
  for ( i = *((_DWORD *)v2 + 130); i; i = *(_DWORD *)i )
    result = BlockSource::removeListener(*(BlockSource **)(i + 4), v3);
  return result;
}


void __fastcall Level::_pollSaveGameStatistics(Level *this)
{
  Level::_pollSaveGameStatistics(this);
}


void __fastcall Level::sendFixedInventoryUpdateForPlayer(Level *this, Player *a2)
{
  Level::sendFixedInventoryUpdateForPlayer(this, a2);
}


const void **__fastcall Level::getPlayerXUID(Level *this, const mce::UUID *a2)
{
  __int64 v2; // r8@1
  __int64 v3; // kr00_8@1
  unsigned int v4; // r5@1
  unsigned int v5; // r6@1
  int v6; // r0@1
  int v7; // r10@2
  int v8; // r7@2
  bool v9; // zf@3
  int v10; // r11@8
  int v11; // r1@10
  const void **result; // r0@16
  unsigned int v13; // [sp+4h] [bp-2Ch]@1
  unsigned int v14; // [sp+8h] [bp-28h]@1

  v2 = *(_QWORD *)a2;
  v14 = *((_DWORD *)a2 + 2);
  v13 = *((_DWORD *)a2 + 3);
  v3 = *((_QWORD *)this + 79);
  v4 = HIDWORD(v2) ^ 522133279 * v2 ^ v14 ^ ((522133279 * (unsigned __int64)v14 >> 32) + 522133279 * v13);
  v5 = v4 % (unsigned int)(*((_QWORD *)this + 79) >> 32);
  v6 = *(_DWORD *)(v3 + 4 * v5);
  if ( v6 )
  {
    v7 = *(_DWORD *)v6;
    v8 = *(_DWORD *)(*(_DWORD *)v6 + 96);
    while ( 1 )
    {
      v9 = v8 == v4;
      if ( v8 == v4 )
        v9 = *(_QWORD *)(v7 + 8) == v2;
      if ( v9 && *(_QWORD *)(v7 + 16) == __PAIR__(v13, v14) )
        break;
      v10 = *(_DWORD *)v7;
      if ( !*(_DWORD *)v7 )
      {
        v11 = 0;
        goto LABEL_16;
      }
      v8 = *(_DWORD *)(v10 + 96);
      v6 = v7;
      v7 = *(_DWORD *)v7;
      if ( *(_DWORD *)(v10 + 96) % HIDWORD(v3) != v5 )
    }
    if ( v6 )
      v11 = *(_DWORD *)v6;
    else
      v11 = 0;
  }
  else
    v11 = 0;
LABEL_16:
  result = &Util::EMPTY_STRING;
  if ( v11 )
    result = (const void **)(v11 + 88);
  return result;
}


_BOOL4 __fastcall Level::hasLevelStorage(Level *this)
{
  return *((_DWORD *)this + 32) != 0;
}


int __fastcall Level::getFixedInventorySlot(Level *this, int a2)
{
  int v2; // r0@1

  v2 = LevelData::getFixedInventory((Level *)((char *)this + 144));
  return (*(int (**)(void))(*(_DWORD *)v2 + 16))();
}


void __fastcall Level::onSourceDestroyed(Level *this, BlockSource *a2)
{
  Level::onSourceDestroyed(this, a2);
}


signed int __fastcall Level::getPlayer(int a1, int a2, unsigned int a3, unsigned int a4)
{
  int v4; // r7@0
  unsigned int v5; // r4@1
  unsigned int v6; // r5@1
  int v7; // r1@1
  bool v8; // zf@1
  int v9; // r0@4
  signed int v10; // r6@4
  signed int result; // r0@6

  v5 = a4;
  v6 = a3;
  v7 = a3 & a4;
  v8 = (a3 & a4) == -1;
  if ( (a3 & a4) != -1 )
  {
    v4 = *(_DWORD *)(a1 + 568);
    v8 = v4 == 0;
  }
  if ( v8 )
LABEL_6:
    result = 0;
  else
    while ( 1 )
    {
      v9 = Dimension::fetchEntity(*(_DWORD *)(v4 + 8), v7, __PAIR__(v5, v6), 0);
      v10 = v9;
      if ( v9 )
        break;
      v4 = *(_DWORD *)v4;
      if ( !v4 )
        goto LABEL_6;
    }
    result = Entity::hasCategory(v9, 1);
    if ( result )
      result = v10;
  return result;
}


signed int __fastcall Level::onChunkLoaded(Level *this, LevelChunk *a2)
{
  Level *v2; // r4@1
  LevelChunk *v3; // r5@1
  __int64 v4; // r6@1
  int v5; // t1@2
  int v6; // r6@3
  _DWORD *v7; // r0@3
  signed int result; // r0@5
  __int64 v9; // r6@6
  int v10; // r5@6
  int v11; // r0@6
  int v12; // r8@6
  int *v13; // r11@6
  char **v14; // r9@6
  int v15; // r5@7
  char *v16; // r10@7
  bool v17; // zf@8
  signed int v18; // r0@8
  signed int v19; // r0@8
  unsigned int v20; // r2@8
  unsigned int v21; // r1@10
  unsigned int v22; // r0@10
  bool v23; // cf@12
  Level *v24; // r4@15
  char *v25; // r0@15
  char *v26; // r12@15
  int v27; // r2@15
  int v28; // r2@15
  char *v29; // r8@16
  char *v30; // lr@17
  char *v31; // r2@17
  int v32; // r3@17
  int v33; // r4@17
  int v34; // r5@17
  int v35; // r6@17
  int v36; // r7@17
  int v37; // r3@23
  __int64 v38; // kr00_8@23
  int v39; // r1@23
  int v40; // r8@23
  int v41; // r7@23
  int v42; // r5@24
  int v43; // r6@24
  int v44; // r2@24
  int v45; // r1@25
  Level *v46; // [sp+0h] [bp-40h]@16
  int v47; // [sp+4h] [bp-3Ch]@15
  _DWORD *v48; // [sp+8h] [bp-38h]@3
  void (*v49)(void); // [sp+10h] [bp-30h]@3
  signed int (__fastcall *v50)(LevelChunk ***, Entity *); // [sp+14h] [bp-2Ch]@3
  int v51; // [sp+18h] [bp-28h]@3

  v2 = this;
  v3 = a2;
  v4 = *(_QWORD *)((char *)this + 116);
  while ( HIDWORD(v4) != (_DWORD)v4 )
  {
    v5 = *(_DWORD *)v4;
    LODWORD(v4) = v4 + 4;
    (*(void (**)(void))(*(_DWORD *)v5 + 76))();
  }
  v51 = 0x7FFFFFFF;
  v6 = LevelChunk::getDimension(v3);
  v7 = operator new(0xCu);
  *v7 = v3;
  v7[1] = v2;
  v7[2] = &v51;
  v48 = v7;
  v49 = (void (*)(void))sub_19133A2;
  v50 = sub_191333A;
  Dimension::forEachPlayer(v6, (int)&v48);
  if ( v49 )
    v49();
  result = LevelChunk::needsSaving(v3, 0, 0);
  if ( result == 1 )
    v9 = *(_QWORD *)LevelChunk::getPosition(v3);
    v10 = LevelChunk::getDimensionId(v3);
    v11 = *((_DWORD *)v2 + 1471);
    v12 = v51;
    v13 = (int *)((char *)v2 + 5884);
    v14 = (char **)((char *)v2 + 5880);
    if ( v11 == *((_DWORD *)v2 + 1472) )
    {
      v18 = v11 - (_DWORD)*v14;
      v17 = v18 == 0;
      v19 = v18 >> 3;
      v20 = -1431655765 * v19;
      if ( v17 )
        v20 = 1;
      v22 = v20 + -1431655765 * v19;
      v21 = v22;
      if ( v22 > 0xAAAAAAA )
        v22 = 178956970;
      v23 = v21 >= v20;
      LOWORD(v21) = -21845;
      if ( !v23 )
      HIWORD(v21) = 2730;
      if ( v22 >= v21 )
        sub_21E57F4();
      v47 = 3 * v22;
      v24 = (Level *)((char *)v2 + 5888);
      v16 = (char *)operator new(24 * v22);
      v25 = *v14;
      v26 = (char *)*v13;
      v27 = *v13 - (_DWORD)*v14;
      v17 = *v13 == (_DWORD)*v14;
      *(_DWORD *)&v16[v27] = v12;
      v28 = (int)&v16[v27];
      *(_QWORD *)(v28 + 8) = v9;
      *(_DWORD *)(v28 + 16) = v10;
      {
        v29 = v16;
      }
      else
        v46 = v24;
        do
        {
          v30 = v25;
          v31 = v29;
          v25 += 24;
          v29 += 24;
          v32 = *((_DWORD *)v30 + 1);
          v33 = *((_DWORD *)v30 + 2);
          v34 = *((_DWORD *)v30 + 3);
          v35 = *((_DWORD *)v30 + 4);
          v36 = *((_DWORD *)v30 + 5);
          *(_DWORD *)v31 = *(_DWORD *)v30;
          *((_DWORD *)v31 + 1) = v32;
          *((_DWORD *)v31 + 2) = v33;
          *((_DWORD *)v31 + 3) = v34;
          *((_DWORD *)v31 + 4) = v35;
          *((_DWORD *)v31 + 5) = v36;
        }
        while ( v26 != v25 );
        v25 = *v14;
        v24 = v46;
      v15 = (int)(v29 + 24);
      if ( v25 )
        operator delete(v25);
      *v14 = v16;
      *v13 = v15;
      *(_DWORD *)v24 = &v16[8 * v47];
    }
    else
      *(_DWORD *)v11 = v51;
      *(_QWORD *)(v11 + 8) = v9;
      *(_DWORD *)(v11 + 16) = v10;
      v15 = *v13 + 24;
      v16 = *v14;
    v37 = *(_DWORD *)(v15 - 24);
    v38 = *(_QWORD *)(v15 - 16);
    v39 = -1431655765 * ((v15 - (signed int)v16) >> 3);
    v40 = *(_DWORD *)(v15 - 8);
    v41 = v39 - 1;
    if ( v15 - (signed int)v16 <= 24 )
      result = v39 - 1;
LABEL_28:
      result *= 3;
      v43 = (int)&v16[8 * result];
      while ( 1 )
        v42 = v41 - 1;
        v43 = (int)&v16[24 * v41];
        result = (v41 - 1) / 2;
        v44 = *(_DWORD *)&v16[24 * result];
        if ( v37 >= v44 )
          break;
        *(_DWORD *)v43 = v44;
        v45 = (int)&v16[24 * result];
        v41 = (v41 - 1) / 2;
        *(_QWORD *)(v43 + 8) = *(_QWORD *)(v45 + 8);
        *(_DWORD *)(v43 + 16) = *(_DWORD *)(v45 + 16);
        if ( v42 <= 1 )
          goto LABEL_28;
    *(_DWORD *)v43 = v37;
    *(_QWORD *)(v43 + 8) = v38;
    *(_DWORD *)(v43 + 16) = v40;
  return result;
}


Entity *__fastcall Level::getAutonomousInactiveEntity(int a1, int a2, int a3, int a4)
{
  int v4; // r8@1
  Entity **v5; // r6@1
  Entity **v6; // r4@1
  int v7; // r5@1
  int v8; // r7@2
  __int64 v9; // r0@2
  Entity *result; // r0@4

  v4 = a4;
  v5 = *(Entity ***)(a1 + 5812);
  v6 = *(Entity ***)(a1 + 5808);
  v7 = a3;
  if ( v6 == v5 )
  {
    result = 0;
  }
  else
    while ( 1 )
    {
      v8 = (int)(v6 + 1);
      v9 = *(_QWORD *)Entity::getUniqueID(*v6);
      HIDWORD(v9) ^= v4;
      if ( v9 == v7 )
        break;
      ++v6;
      if ( v5 == (Entity **)v8 )
        return 0;
    }
    result = *v6;
  return result;
}


void __fastcall Level::_handleChangeDimensionRequests(Level *this)
{
  Level::_handleChangeDimensionRequests(this);
}


signed int __fastcall Level::getMob(int a1, int a2, unsigned int a3, unsigned int a4)
{
  int v4; // r7@0
  unsigned int v5; // r4@1
  unsigned int v6; // r5@1
  int v7; // r1@1
  bool v8; // zf@1
  int v9; // r0@4
  signed int v10; // r6@4
  signed int result; // r0@6

  v5 = a4;
  v6 = a3;
  v7 = a3 & a4;
  v8 = (a3 & a4) == -1;
  if ( (a3 & a4) != -1 )
  {
    v4 = *(_DWORD *)(a1 + 568);
    v8 = v4 == 0;
  }
  if ( v8 )
LABEL_6:
    result = 0;
  else
    while ( 1 )
    {
      v9 = Dimension::fetchEntity(*(_DWORD *)(v4 + 8), v7, __PAIR__(v5, v6), 0);
      v10 = v9;
      if ( v9 )
        break;
      v4 = *(_DWORD *)v4;
      if ( !v4 )
        goto LABEL_6;
    }
    result = Entity::hasCategory(v9, 2);
    if ( result )
      result = v10;
  return result;
}


int __fastcall Level::setFixedInventorySlotCount(Level *this, int a2)
{
  int v2; // r4@1
  FixedInventoryContainer *v3; // r0@1

  v2 = a2;
  v3 = (FixedInventoryContainer *)LevelData::getFixedInventory((Level *)((char *)this + 144));
  return j_j_j__ZN23FixedInventoryContainer16setContainerSizeEi_0(v3, v2);
}


int __fastcall Level::findPlayer(int a1, int a2)
{
  int *v2; // r5@1 OVERLAPPED
  int *v3; // r6@1 OVERLAPPED
  int v4; // r4@1
  int v5; // r1@3
  int result; // r0@3
  int v7; // t1@3

  *(_QWORD *)&v2 = *(_QWORD *)(a1 + 24);
  v4 = a2;
  if ( v2 == v3 )
  {
    result = 0;
  }
  else
    while ( 1 )
    {
      if ( !*(_DWORD *)(v4 + 8) )
        sub_21E5F48();
      v5 = (*(int (__fastcall **)(int, int))(v4 + 12))(v4, *v2);
      v7 = *v2;
      ++v2;
      result = v7;
      if ( v5 == 1 )
        break;
      if ( v3 == v2 )
        return 0;
    }
  return result;
}


int __fastcall Level::broadcastDimensionEvent(int a1, BlockSource *a2, int a3, int a4, int a5)
{
  int result; // r0@1
  __int64 v6; // kr00_8@2
  int v7; // r3@2
  int v8; // r0@2
  void **v9; // [sp+4h] [bp-34h]@2
  int v10; // [sp+8h] [bp-30h]@2
  int v11; // [sp+Ch] [bp-2Ch]@2
  char v12; // [sp+10h] [bp-28h]@2
  int v13; // [sp+14h] [bp-24h]@2
  __int64 v14; // [sp+18h] [bp-20h]@2
  int v15; // [sp+20h] [bp-18h]@2
  int v16; // [sp+24h] [bp-14h]@2

  result = *(_BYTE *)(a1 + 5824);
  if ( !result )
  {
    v10 = 2;
    v11 = 1;
    v12 = 0;
    v9 = &off_26E956C;
    v13 = a3;
    v6 = *(_QWORD *)a4;
    v7 = *(_DWORD *)(a4 + 8);
    v14 = v6;
    v15 = v7;
    v16 = a5;
    v8 = BlockSource::getDimension(a2);
    result = (*(int (**)(void))(*(_DWORD *)v8 + 212))();
  }
  return result;
}


int __fastcall Level::_saveAllMapData(Level *this)
{
  Level *v1; // r4@1
  int result; // r0@1
  int i; // r5@1

  v1 = this;
  result = 5936;
  for ( i = *((_DWORD *)v1 + 1484); i; i = *(_DWORD *)i )
    result = MapItemSavedData::trySave(*(MapItemSavedData **)(i + 16), *((LevelStorage **)v1 + 32));
  return result;
}


void __fastcall Level::removeAllNonPlayerEntities(int a1, int a2, __int64 a3)
{
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r9@2
  char *v6; // r8@2
  char *v7; // r10@2
  int v8; // r11@3
  Entity *v9; // r7@6
  char *v10; // r0@7
  signed int v11; // r8@12
  char *v12; // r6@12
  signed int v13; // r4@12
  unsigned int v14; // r0@12
  unsigned int v15; // r1@14
  unsigned int v16; // r9@14
  Entity *v17; // r4@28
  Entity *v18; // t1@28
  void (__fastcall *v19)(int *, int, _DWORD, _DWORD); // r6@30
  char *v20; // r0@30
  int *v21; // [sp+4h] [bp-34h]@3
  __int64 v22; // [sp+8h] [bp-30h]@1
  int v23; // [sp+10h] [bp-28h]@30

  v3 = a1;
  v22 = a3;
  v4 = *(_DWORD *)(a1 + 568);
  if ( !v4 )
    return;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  do
  {
    v21 = (int *)v4;
    v8 = *((_DWORD *)Dimension::getEntityIdMap(*(Dimension **)(v4 + 8)) + 2);
    while ( v8 )
    {
      v9 = *(Entity **)(v8 + 16);
      if ( Entity::hasCategory(*(_DWORD *)(v8 + 16), 1) )
        goto LABEL_4;
      v10 = Entity::getUniqueID(v9);
      if ( *(_QWORD *)v10 == v22 || Entity::isRide(v9) == 1 && Entity::isRider((int)v9, &v22) )
      if ( v6 == (char *)v5 )
      {
        v11 = v6 - v7;
        v12 = 0;
        v13 = v11 >> 2;
        v14 = v11 >> 2;
        if ( !(v11 >> 2) )
          v14 = 1;
        v15 = v14 + (v11 >> 2);
        v16 = v14 + (v11 >> 2);
        if ( 0 != v15 >> 30 )
          v16 = 0x3FFFFFFF;
        if ( v15 < v14 )
        if ( v16 )
        {
          if ( v16 >= 0x40000000 )
            sub_21E57F4();
          v12 = (char *)operator new(4 * v16);
        }
        *(_DWORD *)&v12[4 * v13] = v9;
        if ( v13 )
          _aeabi_memmove4(v12, v7);
        v6 = &v12[4 * v13 + 4];
        if ( v7 )
          operator delete(v7);
        v5 = (int)&v12[4 * v16];
        v7 = v12;
LABEL_4:
        v8 = *(_DWORD *)v8;
      }
      else
        *(_DWORD *)v6 = v9;
        v6 += 4;
    }
    while ( v7 != v6 )
      v18 = (Entity *)*((_DWORD *)v6 - 1);
      v6 -= 4;
      v17 = v18;
      if ( !Entity::isRemoved(v18) )
        (*(void (__fastcall **)(Entity *))(*(_DWORD *)v17 + 44))(v17);
      (*(void (__fastcall **)(int, Entity *, _DWORD))(*(_DWORD *)v3 + 108))(v3, v17, 0);
      v19 = *(void (__fastcall **)(int *, int, _DWORD, _DWORD))(*(_DWORD *)v3 + 60);
      v20 = Entity::getUniqueID(v17);
      v19(&v23, v3, *(_QWORD *)v20, *(_QWORD *)v20 >> 32);
      if ( v23 )
        (*(void (**)(void))(*(_DWORD *)v23 + 32))();
    v4 = *v21;
  }
  while ( *v21 );
  if ( v7 )
    operator delete(v7);
}


int __fastcall Level::fetchEntity(int a1, int a2, unsigned int a3, unsigned int a4, int a5)
{
  int v5; // r6@0
  unsigned int v6; // r4@1
  unsigned int v7; // r5@1
  int v8; // r1@1
  bool v9; // zf@1
  int result; // r0@4

  v6 = a4;
  v7 = a3;
  v8 = a3 & a4;
  v9 = (a3 & a4) == -1;
  if ( (a3 & a4) != -1 )
  {
    v5 = *(_DWORD *)(a1 + 568);
    v9 = v5 == 0;
  }
  if ( v9 )
LABEL_6:
    result = 0;
  else
    while ( 1 )
    {
      result = Dimension::fetchEntity(*(_DWORD *)(v5 + 8), v8, __PAIR__(v6, v7), a5);
      if ( result )
        break;
      v5 = *(_DWORD *)v5;
      if ( !v5 )
        goto LABEL_6;
    }
  return result;
}


int *__fastcall Level::_resumePlayer(Level *this, const mce::UUID *a2)
{
  Level *v2; // r8@1
  int *result; // r0@1
  int *v4; // r6@1
  __int64 v5; // kr00_8@1
  __int64 v6; // r2@2
  unsigned int v7; // r10@2
  unsigned int v8; // r1@2
  int v9; // r5@3
  int *v10; // r0@7
  int v11; // r1@7
  bool v12; // zf@7
  char *v13; // r0@11
  int v14; // [sp+0h] [bp-38h]@11
  char v15; // [sp+8h] [bp-30h]@11

  v2 = this;
  v5 = *(_QWORD *)((char *)this + 36);
  result = (int *)(*(_QWORD *)((char *)this + 36) >> 32);
  v4 = (int *)v5;
  if ( (int *)v5 != result )
  {
    v6 = *(_QWORD *)a2;
    v7 = *((_DWORD *)a2 + 2);
    v8 = *((_DWORD *)a2 + 3);
    while ( 1 )
    {
      v9 = *v4;
      if ( v6 == *(_QWORD *)(*v4 + 4560) && *(_QWORD *)(v9 + 4568) == __PAIR__(v8, v7) )
        break;
      ++v4;
      if ( result == v4 )
        return result;
    }
    std::vector<Player *,std::allocator<Player *>>::emplace_back<Player *>((int)v2 + 24, v4);
    v10 = (int *)*((_DWORD *)v2 + 10);
    v11 = (int)(v4 + 1);
    v12 = v10 == v4 + 1;
    if ( v10 != v4 + 1 )
      v12 = v11 == (_DWORD)v10;
    if ( !v12 )
      _aeabi_memmove4(v4, v11);
      v10 = (int *)*((_DWORD *)v2 + 10);
    *((_DWORD *)v2 + 10) = v10 - 1;
    Entity::getRuntimeID((Entity *)&v15, v9);
    v13 = Entity::getUniqueID((Entity *)v9);
    result = (int *)std::_Hashtable<EntityRuntimeID,std::pair<EntityRuntimeID const,EntityUniqueID>,std::allocator<std::pair<EntityRuntimeID const,EntityUniqueID>>,std::__detail::_Select1st,std::equal_to<EntityRuntimeID>,std::hash<EntityRuntimeID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<EntityRuntimeID,EntityUniqueID const&>(
                      &v14,
                      (unsigned __int64 *)v2 + 11,
                      (__int64 *)&v15,
                      v13);
  }
  return result;
}


void __fastcall Level::sendFixedInventoryUpdate(Level *this)
{
  Level *v1; // r4@1
  Player **v2; // r5@2 OVERLAPPED
  Player **v3; // r6@2 OVERLAPPED
  Player *v4; // t1@3

  v1 = this;
  if ( !*((_BYTE *)this + 5824) )
  {
    *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 12);
    while ( v3 != v2 )
    {
      v4 = *v2;
      ++v2;
      Level::sendFixedInventoryUpdateForPlayer(v1, v4);
    }
  }
}


Level *__fastcall Level::~Level(Level *this)
{
  Level *v1; // r5@1
  char *v2; // r10@1
  char *v3; // r9@1
  int *v4; // r0@1
  unsigned int v5; // r7@1
  int v6; // r6@1
  int *v7; // r4@2
  int v8; // r0@7
  int v9; // r7@7
  int v10; // r0@11
  TaskGroup **v11; // r8@13
  WorkerPool::SuspendToken *v12; // r0@13
  LevelChunk *v13; // r0@13
  SubChunk *v14; // r0@13
  int v15; // r6@13
  int v16; // r0@14
  int v17; // r4@14
  char *v18; // r0@20
  int v19; // r6@23
  Level *v20; // r7@23
  int v21; // r4@24
  char *v22; // r0@25
  int v23; // r6@28
  Level *v24; // r7@28
  MapItemSavedData *v25; // r0@29
  int v26; // r4@29
  MapItemSavedData *v27; // r0@30
  char *v28; // r0@32
  void *v29; // r0@35
  Level *v30; // r6@35
  void *v31; // r7@36
  char *v32; // r0@37
  void *v33; // r0@40
  int v34; // r1@42
  void *v35; // r0@42
  TaskGroup *v36; // r0@44
  WorkerPool *v37; // r0@45
  WorkerPool *v38; // r0@46
  char *v39; // r4@47
  char *v40; // r6@47
  int v41; // r0@54
  char *v42; // r7@56
  char *v43; // r6@56
  void *v44; // r0@63
  void *v45; // r0@65
  char *v46; // r4@67
  char *v47; // r6@67
  int v48; // r6@74
  int v49; // r4@75
  char *v50; // r0@76
  int v51; // r6@79
  int v52; // r7@80
  int v53; // r4@80
  int v54; // r0@81
  char *v55; // r0@85
  void *v56; // r0@88
  int v57; // r0@90
  int v58; // r6@92
  int v59; // r0@93
  int v60; // r7@93
  char *v61; // r0@96
  BehaviorTreeGroup *v62; // r0@99
  BehaviorTreeGroup *v63; // r0@100
  int v64; // r6@101
  _DWORD *v65; // r1@102
  _DWORD *v66; // r7@103
  void *v67; // r0@104
  void *v68; // r0@108
  void *v69; // r0@110
  int v70; // r0@112
  void *v71; // r0@114
  void *v72; // r6@115
  char *v73; // r0@116
  PhotoStorage *v74; // r0@119
  PhotoStorage *v75; // r0@120
  int v76; // r0@121
  int v77; // r0@123
  void *v78; // r0@125
  void *v79; // r0@127
  void *v80; // r4@128
  char *v81; // r0@129
  void *v82; // r0@132
  void *v83; // r0@134
  void *v84; // r0@136
  char *v85; // r4@138
  char *v86; // r6@138
  unsigned int *v88; // r2@146
  signed int v89; // r1@148
  int *ptr; // [sp+4h] [bp+0h]@1
  unsigned int v91; // [sp+8h] [bp+4h]@1
  int v92; // [sp+Ch] [bp+8h]@1
  int v93; // [sp+10h] [bp+Ch]@1
  __int64 v94; // [sp+14h] [bp+10h]@1
  int v95; // [sp+1Ch] [bp+18h]@3

  v1 = this;
  *(_DWORD *)this = &off_27188B4;
  *((_DWORD *)this + 1) = &off_271893C;
  v2 = (char *)this + 4;
  v3 = (char *)this + 584;
  v4 = (int *)*((_DWORD *)this + 140);
  ptr = v4;
  v5 = *((_DWORD *)v2 + 140);
  v91 = *((_DWORD *)v2 + 140);
  v6 = *((_DWORD *)v2 + 141);
  v92 = *((_DWORD *)v2 + 141);
  v93 = *((_DWORD *)v2 + 142);
  v94 = *(_QWORD *)(v2 + 572);
  if ( (int *)v3 == v4 )
  {
    v7 = &v95;
    ptr = &v95;
    v95 = *v4;
  }
  else
    v7 = v4;
  if ( v6 )
    v7[*(_DWORD *)(v6 + 4) % v5] = (int)&v92;
    v6 = v92;
  *((_DWORD *)v1 + 145) = 0;
  *((_DWORD *)v1 + 146) = 0;
  *((_DWORD *)v1 + 140) = v3;
  *((_DWORD *)v1 + 141) = 1;
  *((_DWORD *)v1 + 142) = 0;
  *((_DWORD *)v1 + 143) = 0;
    do
    {
      v8 = *(_DWORD *)(v6 + 8);
      v9 = *(_DWORD *)v6;
      if ( v8 )
        (*(void (**)(void))(*(_DWORD *)v8 + 4))();
      operator delete((void *)v6);
      v6 = v9;
    }
    while ( v9 );
    v5 = v91;
  _aeabi_memclr4(ptr, 4 * v5);
  v92 = 0;
  v93 = 0;
  v10 = *((_DWORD *)v1 + 32);
  *((_DWORD *)v1 + 32) = 0;
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  v11 = (TaskGroup **)((char *)v1 + 5872);
  v12 = TaskGroup::flush(*((TaskGroup **)v1 + 1468));
  v13 = (LevelChunk *)EntityFactory::clearDefinitionGroup(v12);
  v14 = (SubChunk *)LevelChunk::trimMemoryPool(v13);
  SubChunk::trimMemoryPool(v14);
  v15 = v92;
  if ( v92 )
      v16 = *(_DWORD *)(v15 + 8);
      v17 = *(_DWORD *)v15;
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
      operator delete((void *)v15);
      v15 = v17;
    while ( v17 );
  _aeabi_memclr4(ptr, 4 * v91);
  if ( ptr && &v95 != ptr )
    operator delete(ptr);
  std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<LootTable,std::default_delete<LootTable>>>,std::allocator<std::pair<std::string const,std::unique_ptr<LootTable,std::default_delete<LootTable>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)v1 + 6012);
  v18 = (char *)*((_DWORD *)v1 + 1503);
  if ( v18 && (char *)v1 + 6036 != v18 )
    operator delete(v18);
  v19 = *((_DWORD *)v1 + 1491);
  v20 = (Level *)((char *)v1 + 5956);
  if ( v19 )
      v21 = *(_DWORD *)v19;
      Abilities::~Abilities((Abilities *)(v19 + 16));
      operator delete((void *)v19);
      v19 = v21;
    while ( v21 );
  _aeabi_memclr4(*(_DWORD *)v20, 4 * *((_DWORD *)v1 + 1490));
  *((_DWORD *)v1 + 1492) = 0;
  *((_DWORD *)v1 + 1491) = 0;
  v22 = *(char **)v20;
  if ( *(_DWORD *)v20 && (char *)v1 + 5980 != v22 )
    operator delete(v22);
  v23 = *((_DWORD *)v1 + 1484);
  v24 = (Level *)((char *)v1 + 5928);
  if ( v23 )
      v25 = *(MapItemSavedData **)(v23 + 16);
      v26 = *(_DWORD *)v23;
      if ( v25 )
      {
        v27 = MapItemSavedData::~MapItemSavedData(v25);
        operator delete((void *)v27);
      }
      operator delete((void *)v23);
      v23 = v26;
    while ( v26 );
  _aeabi_memclr4(*(_DWORD *)v24, 4 * *((_DWORD *)v1 + 1483));
  *((_DWORD *)v1 + 1485) = 0;
  *((_DWORD *)v1 + 1484) = 0;
  v28 = *(char **)v24;
  if ( *(_DWORD *)v24 && (char *)v1 + 5952 != v28 )
    operator delete(v28);
  v29 = (void *)*((_DWORD *)v1 + 1477);
  v30 = (Level *)((char *)v1 + 5900);
  if ( v29 )
      v31 = *(void **)v29;
      operator delete(v29);
      v29 = v31;
    while ( v31 );
  _aeabi_memclr4(*(_DWORD *)v30, 4 * *((_DWORD *)v1 + 1476));
  *((_DWORD *)v1 + 1478) = 0;
  *((_DWORD *)v1 + 1477) = 0;
  v32 = *(char **)v30;
  if ( *(_DWORD *)v30 && (char *)v1 + 5924 != v32 )
    operator delete(v32);
  std::unique_ptr<TickingAreasManager,std::default_delete<TickingAreasManager>>::~unique_ptr((_DWORD *)v1 + 1474);
  v33 = (void *)*((_DWORD *)v1 + 1470);
  if ( v33 )
    operator delete(v33);
  v34 = *((_DWORD *)v1 + 1469);
  v35 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v34 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
    else
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  if ( *v11 )
    v36 = TaskGroup::~TaskGroup(*v11);
    operator delete((void *)v36);
  *v11 = 0;
  v37 = (WorkerPool *)*((_DWORD *)v1 + 1467);
  if ( v37 )
    v38 = WorkerPool::~WorkerPool(v37);
    operator delete((void *)v38);
  *((_DWORD *)v1 + 1467) = 0;
  v39 = (char *)*((_DWORD *)v1 + 1461);
  v40 = (char *)*((_DWORD *)v1 + 1460);
  if ( v40 != v39 )
      if ( *(_DWORD *)v40 )
        (*(void (**)(void))(**(_DWORD **)v40 + 32))();
      *(_DWORD *)v40 = 0;
      v40 += 8;
    while ( v39 != v40 );
    v40 = (char *)*((_DWORD *)v1 + 1460);
  if ( v40 )
    operator delete(v40);
  v41 = *((_DWORD *)v1 + 1455);
  if ( v41 )
    (*(void (**)(void))(*(_DWORD *)v41 + 4))();
  *((_DWORD *)v1 + 1455) = 0;
  v42 = (char *)*((_DWORD *)v1 + 1453);
  v43 = (char *)*((_DWORD *)v1 + 1452);
  if ( v43 != v42 )
      if ( *(_DWORD *)v43 )
        (*(void (**)(void))(**(_DWORD **)v43 + 32))();
      *(_DWORD *)v43 = 0;
      v43 += 4;
    while ( v42 != v43 );
    v43 = (char *)*((_DWORD *)v1 + 1452);
  if ( v43 )
    operator delete(v43);
  v44 = (void *)*((_DWORD *)v1 + 1449);
  if ( v44 )
    operator delete(v44);
  v45 = (void *)*((_DWORD *)v1 + 1446);
  if ( v45 )
    operator delete(v45);
  v46 = (char *)*((_DWORD *)v1 + 1443);
  v47 = (char *)*((_DWORD *)v1 + 1442);
  if ( v47 != v46 )
      if ( *(_DWORD *)v47 )
        (*(void (**)(void))(**(_DWORD **)v47 + 32))();
      *(_DWORD *)v47 = 0;
      v47 += 4;
    while ( v46 != v47 );
    v47 = (char *)*((_DWORD *)v1 + 1442);
  if ( v47 )
    operator delete(v47);
  v48 = *((_DWORD *)v1 + 160);
  if ( v48 )
      v49 = *(_DWORD *)v48;
      PlayerListEntry::~PlayerListEntry((PlayerListEntry *)(v48 + 24));
      operator delete((void *)v48);
      v48 = v49;
    while ( v49 );
  _aeabi_memclr4(*((_QWORD *)v1 + 79), 4 * (*((_QWORD *)v1 + 79) >> 32));
  *((_DWORD *)v1 + 160) = 0;
  *((_DWORD *)v1 + 161) = 0;
  v50 = (char *)*((_DWORD *)v1 + 158);
  if ( v50 && (char *)v1 + 656 != v50 )
    operator delete(v50);
  v51 = *((_DWORD *)v1 + 153);
  if ( v51 )
      v52 = *(_DWORD *)(v51 + 8);
      v53 = *(_DWORD *)v51;
      if ( v52 )
        v54 = *(_DWORD *)(v52 + 28);
        if ( v54 )
          (*(void (**)(void))(*(_DWORD *)v54 + 4))();
        operator delete((void *)v52);
      operator delete((void *)v51);
      v51 = v53;
    while ( v53 );
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 604), 4 * (*(_QWORD *)((char *)v1 + 604) >> 32));
  *((_DWORD *)v1 + 153) = 0;
  *((_DWORD *)v1 + 154) = 0;
  v55 = (char *)*((_DWORD *)v1 + 151);
  if ( v55 && (char *)v1 + 628 != v55 )
    operator delete(v55);
  v56 = (void *)*((_DWORD *)v1 + 148);
  if ( v56 )
    operator delete(v56);
  v57 = *((_DWORD *)v1 + 147);
  if ( v57 )
    (*(void (**)(void))(*(_DWORD *)v57 + 4))();
  *((_DWORD *)v1 + 147) = 0;
  v58 = *((_DWORD *)v1 + 142);
  if ( v58 )
      v59 = *(_DWORD *)(v58 + 8);
      v60 = *(_DWORD *)v58;
      if ( v59 )
        (*(void (**)(void))(*(_DWORD *)v59 + 4))();
      operator delete((void *)v58);
      v58 = v60;
    while ( v60 );
  _aeabi_memclr4(*((_QWORD *)v1 + 70), 4 * (*((_QWORD *)v1 + 70) >> 32));
  v61 = (char *)*((_DWORD *)v1 + 140);
  if ( v61 && v3 != v61 )
    operator delete(v61);
  v62 = (BehaviorTreeGroup *)*((_DWORD *)v1 + 139);
  if ( v62 )
    v63 = BehaviorTreeGroup::~BehaviorTreeGroup(v62);
    operator delete((void *)v63);
  *((_DWORD *)v1 + 139) = 0;
  v64 = *((_DWORD *)v1 + 138);
  if ( v64 )
    v65 = *(_DWORD **)(v64 + 8);
    if ( v65 )
        v66 = (_DWORD *)*v65;
        std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<std::string const,std::pair<std::function<std::unique_ptr<BehaviorDefinition,std::default_delete<BehaviorDefinition>> ()(void)>,std::function<std::unique_ptr<BehaviorNode,std::default_delete<BehaviorNode>> ()(void)>>>,true>>>::_M_deallocate_node(
          v64,
          (int)v65);
        v65 = v66;
      while ( v66 );
    _aeabi_memclr4(*(_QWORD *)v64, 4 * (*(_QWORD *)v64 >> 32));
    *(_DWORD *)(v64 + 8) = 0;
    *(_DWORD *)(v64 + 12) = 0;
    v67 = *(void **)v64;
    if ( *(_DWORD *)v64 && (void *)(v64 + 24) != v67 )
      operator delete(v67);
    operator delete((void *)v64);
  *((_DWORD *)v1 + 138) = 0;
  v68 = (void *)*((_DWORD *)v1 + 137);
  if ( v68 )
    operator delete(v68);
  *((_DWORD *)v1 + 137) = 0;
  v69 = (void *)*((_DWORD *)v1 + 136);
  if ( v69 )
    operator delete(v69);
  *((_DWORD *)v1 + 136) = 0;
  v70 = *((_DWORD *)v1 + 135);
  if ( v70 )
    (*(void (**)(void))(*(_DWORD *)v70 + 4))();
  *((_DWORD *)v1 + 135) = 0;
  v71 = (void *)*((_DWORD *)v1 + 130);
  if ( v71 )
      v72 = *(void **)v71;
      operator delete(v71);
      v71 = v72;
    while ( v72 );
  _aeabi_memclr4(*((_QWORD *)v1 + 64), 4 * (*((_QWORD *)v1 + 64) >> 32));
  *((_DWORD *)v1 + 130) = 0;
  *((_DWORD *)v1 + 131) = 0;
  v73 = (char *)*((_DWORD *)v1 + 128);
  if ( v73 && (char *)v1 + 536 != v73 )
    operator delete(v73);
  LevelData::~LevelData((Level *)((char *)v1 + 144));
  v74 = (PhotoStorage *)*((_DWORD *)v1 + 34);
  if ( v74 )
    v75 = PhotoStorage::~PhotoStorage(v74);
    operator delete((void *)v75);
  *((_DWORD *)v1 + 34) = 0;
  v76 = *((_DWORD *)v1 + 33);
  if ( v76 )
    (*(void (**)(void))(*(_DWORD *)v76 + 4))();
  *((_DWORD *)v1 + 33) = 0;
  v77 = *((_DWORD *)v1 + 32);
  if ( v77 )
    (*(void (**)(void))(*(_DWORD *)v77 + 4))();
  v78 = (void *)*((_DWORD *)v1 + 29);
  if ( v78 )
    operator delete(v78);
  v79 = (void *)*((_DWORD *)v1 + 24);
  if ( v79 )
      v80 = *(void **)v79;
      operator delete(v79);
      v79 = v80;
    while ( v80 );
  _aeabi_memclr4(*((_QWORD *)v1 + 11), 4 * (*((_QWORD *)v1 + 11) >> 32));
  *((_DWORD *)v1 + 24) = 0;
  *((_DWORD *)v1 + 25) = 0;
  v81 = (char *)*((_DWORD *)v1 + 22);
  if ( v81 && (char *)v1 + 112 != v81 )
    operator delete(v81);
  v82 = (void *)*((_DWORD *)v1 + 12);
  if ( v82 )
    operator delete(v82);
  v83 = (void *)*((_DWORD *)v1 + 9);
  if ( v83 )
    operator delete(v83);
  v84 = (void *)*((_DWORD *)v1 + 6);
  if ( v84 )
    operator delete(v84);
  v85 = (char *)(*(_QWORD *)((char *)v1 + 12) >> 32);
  v86 = (char *)*(_QWORD *)((char *)v1 + 12);
  if ( v86 != v85 )
      if ( *(_DWORD *)v86 )
        (*(void (**)(void))(**(_DWORD **)v86 + 32))();
      *(_DWORD *)v86 = 0;
      v86 += 4;
    while ( v85 != v86 );
    v86 = (char *)*((_DWORD *)v1 + 3);
  if ( v86 )
    operator delete(v86);
  AppPlatformListener::~AppPlatformListener((AppPlatformListener *)v2);
  return v1;
}


MapItemSavedData *__fastcall Level::getMapSavedData(int a1, int a2, __int64 a3)
{
  unsigned int v3; // r11@1
  unsigned int v4; // r4@1
  int v5; // r5@1
  int v6; // r0@1
  int v7; // r8@2
  int v8; // r6@2
  bool v9; // zf@3
  int v10; // r7@6
  bool v11; // zf@9
  MapItemSavedData *result; // r0@12
  int v13; // [sp+4h] [bp-34h]@1
  __int64 v14; // [sp+8h] [bp-30h]@1

  v13 = a1;
  v14 = a3;
  v3 = *(_DWORD *)(a1 + 5932);
  v4 = (a3 + ((HIDWORD(a3) - 1640531527) << 6) + ((unsigned int)(HIDWORD(a3) - 1640531527) >> 2) - 1640531527) ^ (HIDWORD(a3) - 1640531527);
  v5 = v4 % *(_DWORD *)(a1 + 5932);
  v6 = *(_DWORD *)(*(_DWORD *)(a1 + 5928) + 4 * v5);
  if ( !v6 )
    goto LABEL_13;
  v7 = *(_DWORD *)v6;
  v8 = *(_DWORD *)(*(_DWORD *)v6 + 24);
  while ( 1 )
  {
    v9 = v8 == v4;
    if ( v8 == v4 )
      v9 = *(_QWORD *)(v7 + 8) == a3;
    if ( v9 )
      break;
    v10 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 )
    {
      v8 = *(_DWORD *)(v10 + 24);
      v6 = v7;
      v7 = *(_DWORD *)v7;
      if ( *(_DWORD *)(v10 + 24) % v3 == v5 )
        continue;
    }
  }
  v11 = v6 == 0;
  if ( v6 )
    v6 = *(_DWORD *)v6;
    v11 = v6 == 0;
  if ( v11 )
LABEL_13:
    result = Level::_loadMapData(v13, &v14);
  else
    result = *(MapItemSavedData **)(v6 + 16);
  return result;
}


int __fastcall Level::getNewPlayerId(Level *this)
{
  Player **v1; // r4@1
  Player **v2; // r9@1
  int v3; // r5@2
  int v4; // r0@2
  int *v5; // r6@2
  int *v6; // r0@3
  int v7; // r1@3
  int v8; // r0@6
  int v9; // r7@12
  _DWORD *v10; // r0@16
  int v11; // r2@18
  int v12; // r5@19
  int v13; // r3@19
  int *v14; // r2@19
  int *v15; // r1@20
  int v16; // r2@26
  bool v17; // nf@26
  unsigned __int8 v18; // vf@26
  char v20; // [sp+4h] [bp-34h]@32
  int v21; // [sp+8h] [bp-30h]@1
  int v22; // [sp+Ch] [bp-2Ch]@1
  int *v23; // [sp+10h] [bp-28h]@1
  int *v24; // [sp+14h] [bp-24h]@1
  int v25; // [sp+18h] [bp-20h]@1

  v25 = 0;
  v21 = 0;
  v22 = 0;
  v23 = &v21;
  v24 = &v21;
  v2 = (Player **)(*(_QWORD *)((char *)this + 12) >> 32);
  v1 = (Player **)*(_QWORD *)((char *)this + 12);
  if ( v1 == v2 )
  {
    v12 = 0;
    goto LABEL_32;
  }
  do
    v3 = Player::getPlayerIndex(*v1);
    v4 = v22;
    v5 = &v21;
    if ( v22 )
    {
      do
      {
        v5 = (int *)v4;
        v6 = (int *)(v4 + 12);
        v7 = v5[4];
        if ( v3 < v7 )
          v6 = v5 + 2;
        v4 = *v6;
      }
      while ( v4 );
      v8 = (int)v5;
      if ( v3 >= v7 )
        goto LABEL_9;
    }
    if ( v5 != v23 )
      v8 = sub_21D4858((int)v5);
LABEL_9:
      if ( *(_DWORD *)(v8 + 16) >= v3 )
        goto LABEL_17;
    if ( v5 )
      if ( &v21 == v5 )
        v9 = 1;
      else
        v9 = 0;
        if ( v3 < v5[4] )
          v9 = 1;
      v10 = operator new(0x14u);
      v10[4] = v3;
      sub_21D4928(v9, (int)v10, (int)v5, (int)&v21);
      ++v25;
LABEL_17:
    ++v1;
  while ( v1 != v2 );
  v11 = 0;
  if ( v22 )
    do
      v12 = v11;
      v13 = v22;
      v14 = &v21;
        v15 = (int *)v13;
        while ( v15[4] < v12 )
        {
          v15 = (int *)v15[3];
          if ( !v15 )
          {
            v15 = v14;
            goto LABEL_25;
          }
        }
        v13 = v15[2];
        v14 = v15;
      while ( v13 );
LABEL_25:
      if ( v15 == &v21 )
        break;
      v16 = v15[4];
      v18 = __OFSUB__(v12, v16);
      v17 = v12 - v16 < 0;
      v11 = v12 + 1;
      if ( v17 ^ v18 )
        v15 = &v21;
    while ( v15 != &v21 );
  else
LABEL_32:
  std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase((int)&v20, v22);
  return v12;
}


int __fastcall Level::playSound(Level *a1, BlockSource *a2, int a3, int a4)
{
  int v4; // r8@1
  int v5; // r5@1
  BlockSource *v6; // r4@1
  Level *v7; // r6@1
  __int64 v8; // r0@1
  int v9; // r7@2
  unsigned int v10; // r7@4

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  LODWORD(v8) = Level::getPrimaryLocalPlayer(a1);
  if ( (_DWORD)v8 )
  {
    v9 = (*(int (**)(void))(*(_DWORD *)v8 + 524))();
    LODWORD(v8) = BlockSource::getDimensionId(v6);
    if ( v9 == (_DWORD)v8 )
    {
      v8 = *(_QWORD *)((char *)v7 + 116);
      if ( HIDWORD(v8) != (_DWORD)v8 )
      {
        v10 = 0;
        do
        {
          (*(void (__cdecl **)(_DWORD, int, int))(**(_DWORD **)(v8 + 4 * v10) + 92))(*(_DWORD *)(v8 + 4 * v10), v5, v4);
          v8 = *(_QWORD *)((char *)v7 + 116);
          ++v10;
        }
        while ( v10 < (HIDWORD(v8) - (signed int)v8) >> 2 );
      }
    }
  }
  return v8;
}


int __fastcall Level::addPlayer(int a1, int *a2)
{
  int *v2; // r9@1
  int v3; // r5@1
  __int64 v4; // r0@1
  int v5; // r11@1
  void *v6; // r8@3
  unsigned int v7; // r2@3
  unsigned int v8; // r1@5
  unsigned int v9; // r6@5
  char *v10; // r7@11
  char *v11; // r4@13
  int v12; // r4@15
  __int64 v13; // r0@18
  _BYTE *v14; // r7@18
  __int64 v15; // r0@23
  signed __int64 v16; // r2@23
  char *v17; // r0@24
  int v18; // r0@24
  int v19; // r0@26
  PlayerListEntry *v20; // r0@26
  PlayerListEntry *v21; // r4@26
  __int64 v22; // r0@32
  unsigned int v23; // r6@33
  int i; // r7@36
  int v25; // r4@37
  unsigned int *v26; // r1@38
  unsigned int v27; // r0@40
  unsigned int *v28; // r6@44
  unsigned int v29; // r0@46
  int result; // r0@52
  int v31; // [sp+0h] [bp-C8h]@37
  int v32; // [sp+4h] [bp-C4h]@37
  void **v33; // [sp+8h] [bp-C0h]@24
  int v34; // [sp+Ch] [bp-BCh]@24
  int v35; // [sp+10h] [bp-B8h]@24
  char v36; // [sp+14h] [bp-B4h]@24
  void *ptr; // [sp+18h] [bp-B0h]@24
  PlayerListEntry *v38; // [sp+1Ch] [bp-ACh]@24
  int v39; // [sp+20h] [bp-A8h]@24
  char v40; // [sp+24h] [bp-A4h]@24
  char v41; // [sp+28h] [bp-A0h]@24
  char v42; // [sp+30h] [bp-98h]@24
  char v43; // [sp+78h] [bp-50h]@24
  __int64 v44; // [sp+80h] [bp-48h]@24
  __int64 v45; // [sp+88h] [bp-40h]@24
  void **v46; // [sp+90h] [bp-38h]@25
  int v47; // [sp+94h] [bp-34h]@25
  int v48; // [sp+98h] [bp-30h]@25
  char v49; // [sp+9Ch] [bp-2Ch]@25
  int v50; // [sp+A0h] [bp-28h]@25

  v2 = a2;
  v3 = a1;
  v4 = *(_QWORD *)(a1 + 28);
  v5 = *v2;
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v6 = *(void **)(v3 + 24);
    v7 = ((signed int)v4 - (signed int)v6) >> 2;
    if ( !v7 )
      v7 = 1;
    HIDWORD(v4) = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    v9 = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    if ( 0 != HIDWORD(v4) >> 30 )
      v9 = 0x3FFFFFFF;
    if ( v8 < v7 )
    if ( v9 )
    {
      if ( v9 >= 0x40000000 )
        sub_21E57F4();
      v10 = (char *)operator new(4 * v9);
      LODWORD(v4) = *(_QWORD *)(v3 + 24) >> 32;
      v6 = (void *)*(_QWORD *)(v3 + 24);
    }
    else
      v10 = 0;
    v11 = &v10[v4 - (_DWORD)v6];
    *(_DWORD *)&v10[v4 - (_DWORD)v6] = v5;
    if ( 0 != ((signed int)v4 - (signed int)v6) >> 2 )
      _aeabi_memmove4(v10, v6);
    v12 = (int)(v11 + 4);
    if ( v6 )
      operator delete(v6);
    *(_DWORD *)(v3 + 24) = v10;
    *(_DWORD *)(v3 + 28) = v12;
    *(_DWORD *)(v3 + 32) = &v10[4 * v9];
  }
  else
    *(_DWORD *)v4 = v5;
    *(_DWORD *)(v3 + 28) += 4;
  v13 = *(_QWORD *)(v3 + 16);
  v14 = (_BYTE *)(v3 + 5824);
  if ( (_DWORD)v13 == HIDWORD(v13) )
    std::vector<std::unique_ptr<Player,std::default_delete<Player>>,std::allocator<std::unique_ptr<Player,std::default_delete<Player>>>>::_M_emplace_back_aux<std::unique_ptr<Player,std::default_delete<Player>>>(
      (_QWORD *)(v3 + 12),
      v2);
    HIDWORD(v13) = *v2;
    *v2 = 0;
    *(_DWORD *)v13 = HIDWORD(v13);
    *(_DWORD *)(v3 + 16) += 4;
  if ( !*v14 )
    if ( !Entity::hasRuntimeID((Entity *)v5) )
      v15 = *(_QWORD *)(v3 + 80);
      v16 = *(_QWORD *)(v3 + 80) + 1LL;
      *(_QWORD *)(v3 + 80) = v16;
      Entity::setRuntimeID(v5, SHIDWORD(v15), v16, SHIDWORD(v16));
    Entity::getRuntimeID((Entity *)&v43, v5);
    v17 = Entity::getUniqueID((Entity *)v5);
    v44 = *(_QWORD *)&v43;
    v45 = *(_QWORD *)v17;
    std::_Hashtable<EntityRuntimeID,std::pair<EntityRuntimeID const,EntityUniqueID>,std::allocator<std::pair<EntityRuntimeID const,EntityUniqueID>>,std::__detail::_Select1st,std::equal_to<EntityRuntimeID>,std::hash<EntityRuntimeID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::pair<EntityRuntimeID,EntityUniqueID>>(
      &v42,
      (unsigned __int64 *)(v3 + 88),
      (int)&v44);
    PlayerListEntry::PlayerListEntry(&v42, (Entity *)v5);
    std::_Hashtable<mce::UUID,std::pair<mce::UUID const,PlayerListEntry>,std::allocator<std::pair<mce::UUID const,PlayerListEntry>>,std::__detail::_Select1st,std::equal_to<mce::UUID>,std::hash<mce::UUID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<mce::UUID const&,PlayerListEntry&>(
      (int *)&v41,
      (_QWORD *)(v3 + 632),
      v5 + 4560,
      (int)&v42);
    v34 = 2;
    v35 = 1;
    v36 = 0;
    v33 = &off_26E988C;
    v40 = 0;
    v39 = 0;
    ptr = 0;
    v38 = 0;
    std::vector<PlayerListEntry,std::allocator<PlayerListEntry>>::_M_emplace_back_aux<PlayerListEntry const&>(
      (unsigned __int64 *)&ptr,
    (*(void (**)(void))(**(_DWORD **)(v3 + 660) + 8))();
    v18 = LevelData::getTime((LevelData *)(v3 + 144));
    if ( !*v14 )
      v47 = 2;
      v48 = 1;
      v49 = 0;
      v46 = &off_26E93B4;
      v50 = v18;
      (*(void (**)(void))(**(_DWORD **)(v3 + 660) + 8))();
    v19 = Level::getNewPlayerId((Level *)v3);
    Player::setPlayerIndex((Player *)v5, v19);
    v21 = v38;
    v20 = (PlayerListEntry *)ptr;
    if ( ptr != (void *)v38 )
      do
        v20 = (PlayerListEntry *)((char *)PlayerListEntry::~PlayerListEntry(v20) + 72);
      while ( v21 != v20 );
      v20 = (PlayerListEntry *)ptr;
    if ( v20 )
      operator delete((void *)v20);
    PlayerListEntry::~PlayerListEntry((PlayerListEntry *)&v42);
  v22 = *(_QWORD *)(v3 + 116);
  if ( HIDWORD(v22) != (_DWORD)v22 )
    v23 = 0;
    do
      (*(void (**)(void))(**(_DWORD **)(v22 + 4 * v23) + 60))();
      (*(void (**)(void))(**(_DWORD **)(*(_DWORD *)(v3 + 116) + 4 * v23) + 112))();
      v22 = *(_QWORD *)(v3 + 116);
      ++v23;
    while ( v23 < (HIDWORD(v22) - (signed int)v22) >> 2 );
    for ( i = *(_DWORD *)(v3 + 5936); i; i = *(_DWORD *)i )
      MapItemSavedData::addTrackedMapEntity((int)&v31, *(_DWORD *)(i + 16), (Entity *)v5, 0);
      v25 = v32;
      if ( v32 )
      {
        v26 = (unsigned int *)(v32 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
        }
        else
          v27 = (*v26)--;
        if ( v27 == 1 )
          v28 = (unsigned int *)(v25 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 8))(v25);
          if ( &pthread_create )
          {
            __dmb();
            do
              v29 = __ldrex(v28);
            while ( __strex(v29 - 1, v28) );
          }
          else
            v29 = (*v28)--;
          if ( v29 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 12))(v25);
      }
  *(_BYTE *)(v5 + 40) = 1;
  result = *(_BYTE *)(v5 + 4);
  if ( result != 5 )
    result = Entity::reload((Entity *)v5);
  return result;
}


int __fastcall Level::_syncTime(int result, int a2)
{
  void **v2; // [sp+4h] [bp-1Ch]@2
  int v3; // [sp+8h] [bp-18h]@2
  int v4; // [sp+Ch] [bp-14h]@2
  char v5; // [sp+10h] [bp-10h]@2
  int v6; // [sp+14h] [bp-Ch]@2

  if ( !*(_BYTE *)(result + 5824) )
  {
    v3 = 2;
    v4 = 1;
    v5 = 0;
    v2 = &off_26E93B4;
    v6 = a2;
    result = (*(int (**)(void))(**(_DWORD **)(result + 660) + 8))();
  }
  return result;
}


char *__fastcall Level::getVillages(Level *this)
{
  return (char *)this + 5820;
}


PathFinder *__fastcall Level::findPath(Level *this, Entity *a2, Entity *a3, float a4, float a5, bool a6, bool a7, bool a8, int a9, int a10, bool a11)
{
  Entity *v11; // r5@1
  Level *v12; // r6@1
  float v13; // r4@1
  BlockSource *v14; // r0@1
  int v19; // ST00_4@1
  char v21; // [sp+14h] [bp-CCh]@1

  v11 = a3;
  v12 = this;
  v13 = a4;
  v14 = (BlockSource *)Entity::getRegion(a3);
  PathFinder::PathFinder((PathFinder *)&v21, v14, a6, a7, a8, a9, a10, a11);
  __asm
  {
    VLDR            S0, [SP,#0xE0+arg_0]
    VSTR            S0, [SP,#0xE0+var_E0]
  }
  PathFinder::findPath(v12, (Entity *)&v21, v11, v13, v19);
  return PathFinder::~PathFinder((PathFinder *)&v21);
}


char *__fastcall Level::getHitResult(Level *this)
{
  return (char *)this + 664;
}


int __fastcall Level::createDimension(int a1, unsigned int a2)
{
  int v2; // r10@1
  unsigned int v3; // r8@1
  __int64 v4; // kr00_8@1
  _DWORD *v5; // r0@1
  _DWORD *v6; // r6@2
  int v7; // r7@2
  bool v8; // zf@7
  int v9; // r4@10
  int v10; // r4@11
  void *v11; // r0@11
  void *v12; // r11@11
  int v13; // r1@11
  __int64 v14; // r4@11
  int v15; // r6@11
  _DWORD *v16; // r0@11
  _DWORD *v17; // r9@12
  int v18; // r7@12
  bool v19; // zf@17
  int v21; // [sp+4h] [bp-2Ch]@11
  int v22; // [sp+8h] [bp-28h]@11

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 560);
  v5 = *(_DWORD **)(v4 + 4 * (a2 % HIDWORD(v4)));
  if ( !v5 )
    goto LABEL_11;
  v6 = (_DWORD *)*v5;
  v7 = *(_DWORD *)(*v5 + 4);
  while ( v7 != a2 )
  {
    if ( *v6 )
    {
      v7 = *(_DWORD *)(v4 + 4);
      v5 = v6;
      v6 = (_DWORD *)*v6;
      if ( *(_DWORD *)(v4 + 4) % HIDWORD(v4) == a2 % HIDWORD(v4) )
        continue;
    }
  }
  v8 = v5 == 0;
  if ( v5 )
    v5 = (_DWORD *)*v5;
    v8 = v5 == 0;
  if ( v8 || (v9 = v5[2]) == 0 )
LABEL_11:
    Dimension::createNew((HellDimension **)&v22, a2, (Level *)v2);
    v10 = v22;
    (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 116))(v22);
    v11 = operator new(0xCu);
    v12 = v11;
    v21 = v10;
    *(_DWORD *)v11 = 0;
    *((_DWORD *)v11 + 1) = v3;
    v13 = v22;
    v22 = 0;
    *((_DWORD *)v11 + 2) = v13;
    v14 = *(_QWORD *)(v2 + 560);
    v15 = v3 % (unsigned int)(*(_QWORD *)(v2 + 560) >> 32);
    v16 = *(_DWORD **)(v14 + 4 * v15);
    if ( !v16 )
      goto LABEL_23;
    v17 = (_DWORD *)*v16;
    v18 = *(_DWORD *)(*v16 + 4);
    while ( v18 != v3 )
      LODWORD(v14) = *v17;
      if ( *v17 )
      {
        v18 = *(_DWORD *)(v14 + 4);
        v16 = v17;
        v17 = (_DWORD *)*v17;
        if ( *(_DWORD *)(v14 + 4) % HIDWORD(v14) == v15 )
          continue;
      }
    v19 = v16 == 0;
    if ( v16 )
      v19 = *v16 == 0;
    if ( v19 )
LABEL_23:
      std::_Hashtable<int,std::pair<int const,std::unique_ptr<Dimension,std::default_delete<Dimension>>>,std::allocator<std::pair<int const,std::unique_ptr<Dimension,std::default_delete<Dimension>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
        v2 + 560,
        v15,
        v3,
        (int)v12);
      v9 = v21;
    else
      if ( v13 )
        (*(void (**)(void))(*(_DWORD *)v13 + 4))();
      operator delete(v12);
    if ( v22 )
      (*(void (**)(void))(*(_DWORD *)v22 + 4))();
  return v9;
}


int __fastcall Level::onNewChunkFor(Level *this, Player *a2, LevelChunk *a3)
{
  Level *v3; // r6@1
  LevelChunk *v4; // r4@1
  int (__fastcall *v5)(Level *, int, LevelChunk *); // r7@1
  int v6; // r0@1
  int result; // r0@1
  int *v8; // r6@1
  int *i; // r7@1
  __int64 v10; // kr00_8@1
  int v11; // t1@2

  v3 = this;
  v4 = a3;
  v5 = *(int (__fastcall **)(Level *, int, LevelChunk *))(*(_DWORD *)this + 92);
  v6 = Entity::getRegion(a2);
  result = v5(v3, v6, v4);
  v10 = *(_QWORD *)((char *)v3 + 116);
  v8 = (int *)(*(_QWORD *)((char *)v3 + 116) >> 32);
  for ( i = (int *)v10; v8 != i; result = (*(int (**)(void))(*(_DWORD *)v11 + 72))() )
  {
    v11 = *i;
    ++i;
  }
  return result;
}


int __fastcall Level::takePicture(int result)
{
  int *v1; // r4@1
  int *i; // r7@1
  int v3; // t1@2

  v1 = (int *)(*(_QWORD *)(result + 116) >> 32);
  for ( i = (int *)*(_QWORD *)(result + 116); v1 != i; result = (*(int (__cdecl **)(int))(*(_DWORD *)v3 + 108))(v3) )
  {
    v3 = *i;
    ++i;
  }
  return result;
}


MapItemSavedData *__fastcall Level::createMapSavedData(int a1, unsigned __int64 *a2)
{
  int v2; // r8@1
  MapItemSavedData *result; // r0@2
  void *v4; // r1@3
  void *v5; // r6@3
  signed __int64 *v6; // r3@4
  unsigned int v7; // r7@4
  unsigned int v8; // r2@4
  signed __int64 *v9; // r0@4
  signed __int64 v10; // kr08_8@5
  MapItemSavedData *v11; // r11@7
  void *v12; // r8@7
  int v13; // r9@8
  int v14; // r7@8
  unsigned int v15; // r10@8
  unsigned int v16; // r5@9 OVERLAPPED
  unsigned int v17; // r6@9 OVERLAPPED
  MapItemSavedData *v18; // r4@9
  int v19; // r1@9
  unsigned int v20; // [sp+0h] [bp-48h]@8
  int v21; // [sp+4h] [bp-44h]@8
  __int64 v22; // [sp+Ch] [bp-3Ch]@3
  int v23; // [sp+14h] [bp-34h]@3
  __int64 v24; // [sp+18h] [bp-30h]@9

  v2 = a1;
  if ( ((unsigned int)*a2 & (*a2 >> 32)) == -1 )
  {
    v22 = 0LL;
    v23 = 0;
    std::vector<EntityUniqueID,std::allocator<EntityUniqueID>>::_M_default_append((int)&v22, 5u);
    v4 = (void *)HIDWORD(v22);
    v5 = (void *)v22;
    if ( HIDWORD(v22) != (_DWORD)v22 )
    {
      v6 = (signed __int64 *)(v2 + 72);
      v7 = 0;
      v8 = (HIDWORD(v22) - (signed int)v22) >> 3;
      v9 = (signed __int64 *)v22;
      do
      {
        ++v7;
        v10 = *v6 + 1;
        *v6 = v10;
        *v9 = v10;
        ++v9;
      }
      while ( v7 < v8 );
    }
    if ( v4 == v5 )
      v11 = 0;
      v12 = v5;
    else
      v21 = v2;
      v13 = 0;
      v12 = (void *)v22;
      v14 = 0;
      v15 = 0;
      v20 = (HIDWORD(v22) - (signed int)v22) >> 3;
        v16 = *(_DWORD *)((char *)v5 + v13);
        v17 = *(_DWORD *)((char *)v5 + v13 + 4);
        v24 = *(_QWORD *)&v16;
        v18 = Level::_createMapSavedData(v21, (unsigned __int64 *)&v24);
        MapItemSavedData::setScale(v18, v15);
        if ( v14 )
          MapItemSavedData::setParentMapId(v14, v19, __PAIR__(v17, v16));
        v13 += 8;
        if ( !v15 )
          v11 = v18;
        ++v15;
        v5 = v12;
        v14 = (int)v18;
      while ( v15 < v20 );
    if ( v12 )
      operator delete(v12);
    result = v11;
  }
  else
    result = j_j_j__ZN5Level19_createMapSavedDataERK14EntityUniqueID(a1, a2);
  return result;
}


void __fastcall Level::startLeaveGame(Level *this)
{
  Level *v1; // r4@1
  void *v2; // r0@2
  int v3; // r0@7
  int i; // r5@8
  SavedDataStorage *v5; // r0@11
  LevelStorage *v7; // r1@13
  Biome *v11; // r0@13
  __int64 j; // r6@15
  int v13; // r5@19
  MapItemSavedData *v14; // r0@20
  int v15; // r6@20
  MapItemSavedData *v16; // r0@21
  int v17; // r5@23
  int v18; // r6@24
  int k; // r5@25
  __int64 v20; // r6@28
  BlockSourceListener *v21; // t1@29
  int v22; // r5@31
  int v23; // r9@31
  int v24; // r6@32
  void (*v25)(void); // r3@36
  int *v26; // r0@36
  int *v27; // r6@36
  int v28; // r7@37
  int v29; // r0@39
  void (*v30)(void); // r3@45
  int *v31; // r0@45
  int *v32; // r6@45
  int v33; // r7@46
  int v34; // r0@48
  char *v36; // r8@56
  char *v37; // r7@56
  char *v38; // r5@57
  int l; // r4@63
  void *v40; // [sp+4h] [bp-3Ch]@45
  int (__fastcall *v41)(void **, void **, int); // [sp+Ch] [bp-34h]@45
  signed int (__fastcall *v42)(int, int); // [sp+10h] [bp-30h]@45
  void *v43; // [sp+14h] [bp-2Ch]@36
  int (__fastcall *v44)(void **, void **, int); // [sp+1Ch] [bp-24h]@36
  signed int (__fastcall *v45)(int, int); // [sp+20h] [bp-20h]@36

  v1 = this;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (**)(void))(**(_DWORD **)v2 + 260))();
  *((_BYTE *)v1 + 5984) = 1;
  if ( *((_BYTE *)v1 + 5825) && !*((_DWORD *)v1 + 32) )
    TaskGroup::sync_DEPRECATED_ASK_TOMMO(TaskGroup::DISK);
  Level::savePlayers(v1);
  Level::_saveAutonomousEntities(v1);
  v3 = *((_DWORD *)v1 + 32);
  if ( v3 )
  {
    (*(void (**)(void))(*(_DWORD *)v3 + 24))();
    for ( i = *((_DWORD *)v1 + 1484); i; i = *(_DWORD *)i )
      MapItemSavedData::trySave(*(MapItemSavedData **)(i + 16), *((LevelStorage **)v1 + 32));
  }
  v5 = (SavedDataStorage *)*((_DWORD *)v1 + 33);
  if ( v5 )
    SavedDataStorage::save(v5);
  _R0 = getTimeS();
  __asm
    VMOV            D0, R0, R1
    VSTR            D0, [R0]
  v11 = (Biome *)*((_DWORD *)v1 + 32);
  if ( v11 )
    Biome::SaveInstanceData(v11, v7);
  for ( j = *(_QWORD *)((char *)v1 + 116); HIDWORD(j) != (_DWORD)j; LODWORD(j) = j + 4 )
    if ( *(_DWORD *)j )
      (*(void (**)(void))(**(_DWORD **)j + 84))();
  v13 = *((_DWORD *)v1 + 1484);
  if ( v13 )
    do
    {
      v14 = *(MapItemSavedData **)(v13 + 16);
      v15 = *(_DWORD *)v13;
      if ( v14 )
      {
        v16 = MapItemSavedData::~MapItemSavedData(v14);
        operator delete((void *)v16);
      }
      operator delete((void *)v13);
      v13 = v15;
    }
    while ( v15 );
  _aeabi_memclr4(*((_DWORD *)v1 + 1482), 4 * *((_DWORD *)v1 + 1483));
  *((_DWORD *)v1 + 1485) = 0;
  *((_DWORD *)v1 + 1484) = 0;
  v17 = *((_DWORD *)v1 + 1491);
  if ( v17 )
      v18 = *(_DWORD *)v17;
      Abilities::~Abilities((Abilities *)(v17 + 16));
      operator delete((void *)v17);
      v17 = v18;
    while ( v18 );
  _aeabi_memclr4(*((_DWORD *)v1 + 1489), 4 * *((_DWORD *)v1 + 1490));
  *((_DWORD *)v1 + 1492) = 0;
  *((_DWORD *)v1 + 1491) = 0;
  *((_DWORD *)v1 + 1441) = 0;
  *((_DWORD *)v1 + 165) = 0;
  for ( k = *((_DWORD *)v1 + 130); k; k = *(_DWORD *)k )
    v20 = *(_QWORD *)((char *)v1 + 116);
    while ( HIDWORD(v20) != (_DWORD)v20 )
      v21 = *(BlockSourceListener **)v20;
      LODWORD(v20) = v20 + 4;
      BlockSource::removeListener(*(BlockSource **)(k + 4), v21);
  *((_DWORD *)v1 + 30) = *((_DWORD *)v1 + 29);
  v22 = *((_DWORD *)v1 + 1443);
  v23 = *((_DWORD *)v1 + 1442);
  if ( v22 != v23 )
    v24 = *((_DWORD *)v1 + 1442);
      if ( *(_DWORD *)v24 )
        (*(void (**)(void))(**(_DWORD **)v24 + 32))();
      *(_DWORD *)v24 = 0;
      v24 += 4;
    while ( v22 != v24 );
  *((_DWORD *)v1 + 1443) = v23;
  v43 = operator new(1u);
  v25 = (void (*)(void))sub_19121EE;
  v44 = sub_19121EE;
  v45 = sub_19121D0;
  v26 = (int *)(*((_QWORD *)v1 + 3) >> 32);
  v27 = (int *)*((_QWORD *)v1 + 3);
  if ( v27 == v26 )
    goto LABEL_68;
  v28 = (int)(v26 - 1);
  do
    if ( !v25 )
      sub_21E5F48();
    v29 = v45(&v43, *v27);
    v25 = (void (*)(void))v44;
    if ( (int *)v28 == v27 )
      break;
    ++v27;
  while ( !(v29 ^ 1) );
  if ( v44 )
LABEL_68:
    v25();
  v40 = operator new(1u);
  v30 = (void (*)(void))sub_191223C;
  v41 = sub_191223C;
  v42 = sub_191221C;
  v31 = (int *)(*((_QWORD *)v1 + 3) >> 32);
  v32 = (int *)*((_QWORD *)v1 + 3);
  if ( v32 == v31 )
    goto LABEL_69;
  v33 = (int)(v31 - 1);
    if ( !v30 )
    v34 = v42(&v40, *v32);
    _ZF = v33 == (_DWORD)v32;
    v30 = (void (*)(void))v41;
    if ( (int *)v33 != v32 )
      ++v32;
      _ZF = (v34 ^ 1) == 1;
  while ( !_ZF );
  if ( v41 )
LABEL_69:
    v30();
  TaskGroup::flush(*((TaskGroup **)v1 + 1468));
  *((_BYTE *)v1 + 5864) = 0;
  *((_DWORD *)v1 + 7) = *((_DWORD *)v1 + 6);
  *((_DWORD *)v1 + 10) = *((_DWORD *)v1 + 9);
  v36 = (char *)*((_DWORD *)v1 + 3);
  *((_DWORD *)v1 + 3) = 0;
  v37 = (char *)*((_DWORD *)v1 + 4);
  *((_DWORD *)v1 + 4) = 0;
  *((_DWORD *)v1 + 5) = 0;
  if ( v36 != v37 )
    v38 = v36;
      if ( *(_DWORD *)v38 )
        (*(void (**)(void))(**(_DWORD **)v38 + 32))();
      *(_DWORD *)v38 = 0;
      v38 += 4;
    while ( v37 != v38 );
  if ( v36 )
    operator delete(v36);
  for ( l = *((_DWORD *)v1 + 142); l; l = *(_DWORD *)l )
    (*(void (**)(void))(**(_DWORD **)(l + 8) + 216))();
}


int __fastcall Level::forEachPlayer(int a1, int a2)
{
  int result; // r0@1
  _DWORD *v3; // r6@1
  __int64 v4; // kr00_8@1
  int v5; // r4@1
  int v6; // r5@2

  v4 = *(_QWORD *)(a1 + 24);
  result = *(_QWORD *)(a1 + 24) >> 32;
  v3 = (_DWORD *)v4;
  v5 = a2;
  if ( (_DWORD)v4 != result )
  {
    v6 = result - 4;
    do
    {
      if ( !*(_DWORD *)(v5 + 8) )
        sub_21E5F48();
      result = (*(int (__fastcall **)(int, _DWORD))(v5 + 12))(v5, *v3);
      if ( (_DWORD *)v6 == v3 )
        break;
      result ^= 1u;
      ++v3;
    }
    while ( result != 1 );
  }
  return result;
}


int __fastcall Level::destroyBlock(Level *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  Level *v4; // r7@1
  int v5; // r8@1
  const BlockPos *v6; // r4@1
  BlockSource *v7; // r9@1
  int v8; // r1@2
  int v9; // r2@2
  int v10; // r0@3
  int v11; // r0@4
  int result; // r0@7
  __int16 v13; // [sp+8h] [bp-78h]@7
  int v14; // [sp+Ch] [bp-74h]@2
  signed int v15; // [sp+10h] [bp-70h]@2
  int v16; // [sp+14h] [bp-6Ch]@2
  int v17; // [sp+18h] [bp-68h]@2
  int v18; // [sp+1Ch] [bp-64h]@2
  int v19; // [sp+20h] [bp-60h]@2
  int v20; // [sp+24h] [bp-5Ch]@2
  int v21; // [sp+28h] [bp-58h]@2
  int v22; // [sp+2Ch] [bp-54h]@2
  char v23; // [sp+30h] [bp-50h]@2
  int v24; // [sp+34h] [bp-4Ch]@3
  int v25; // [sp+38h] [bp-48h]@3
  unsigned __int8 v26; // [sp+3Ch] [bp-44h]@1
  unsigned __int8 v27; // [sp+3Dh] [bp-43h]@3
  void **v28; // [sp+40h] [bp-40h]@3
  int v29; // [sp+44h] [bp-3Ch]@3
  int v30; // [sp+48h] [bp-38h]@3
  char v31; // [sp+4Ch] [bp-34h]@3
  int v32; // [sp+50h] [bp-30h]@3
  int v33; // [sp+54h] [bp-2Ch]@3
  int v34; // [sp+58h] [bp-28h]@3
  int v35; // [sp+5Ch] [bp-24h]@3
  int v36; // [sp+60h] [bp-20h]@3

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  BlockSource::getBlockAndData((BlockSource *)&v26, a2, (int)a3);
  if ( v26 )
  {
    v14 = 1056964608;
    v15 = 1056964608;
    v16 = 1056964608;
    BlockPos::BlockPos((int)&v17, (int)&v14);
    v8 = *((_DWORD *)v6 + 1);
    v9 = *((_DWORD *)v6 + 2);
    v20 = *(_DWORD *)v6 + v17;
    v21 = v18 + v8;
    v22 = v19 + v9;
    Vec3::Vec3((int)&v23, (int)&v20);
    if ( !*((_BYTE *)v4 + 5824) )
    {
      v29 = 2;
      v30 = 1;
      v31 = 0;
      v28 = &off_26E956C;
      v32 = 2001;
      v33 = *(_DWORD *)&v23;
      v34 = v24;
      v35 = v25;
      v36 = v26 | (v27 << 8);
      v10 = BlockSource::getDimension(v7);
      (*(void (**)(void))(*(_DWORD *)v10 + 212))();
    }
    v11 = Block::mBlocks[v26];
    if ( v11 )
      if ( v5 == 1 )
        (*(void (__cdecl **)(int, BlockSource *))(*(_DWORD *)v11 + 276))(v11, v7);
    v13 = 0;
    result = BlockSource::setBlockAndData((int)v7, v6, (int)&v13, 3, 0);
  }
  else
    result = 0;
  return result;
}


int __fastcall Level::setPacketSender(int result, int a2)
{
  *(_DWORD *)(result + 660) = a2;
  return result;
}


char *__fastcall Level::levelCleanupQueueEntityRemoval(int a1, int *a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  int v4; // r1@1
  int *v5; // r0@1
  int v6; // r2@2
  char *result; // r0@2

  v2 = a1;
  v3 = a2;
  v4 = *a2;
  (*(void (**)(void))(*(_DWORD *)a1 + 108))();
  v5 = *(int **)(v2 + 5772);
  if ( v5 == *(int **)(v2 + 5776) )
  {
    result = j_j_j__ZNSt6vectorISt10unique_ptrI6EntitySt14default_deleteIS1_EESaIS4_EE19_M_emplace_back_auxIJS4_EEEvDpOT_(
               (_QWORD *)(v2 + 5768),
               v3);
  }
  else
    v6 = *v3;
    *v3 = 0;
    *v5 = v6;
    result = (char *)(*(_DWORD *)(v2 + 5772) + 4);
    *(_DWORD *)(v2 + 5772) = result;
  return result;
}


void __fastcall Level::onPlayerDeath(Level *this, Player *a2, const EntityDamageSource *a3)
{
  Level *v3; // r8@1
  EntityDamageSource *v4; // r6@1
  Player *v5; // r4@1
  int v6; // r7@3
  int v7; // r0@5
  void (__fastcall *v8)(int *, EntityDamageSource *, int *, Player *); // r5@5
  void *v9; // r0@5
  void *v10; // r4@6
  void *v11; // r6@6
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  int *v14; // r0@16
  void *v15; // r0@21
  void *v16; // r0@22
  void *v17; // r0@23
  void *v18; // r0@24
  unsigned int *v19; // r2@26
  signed int v20; // r1@28
  unsigned int *v21; // r2@30
  signed int v22; // r1@32
  unsigned int *v23; // r2@34
  signed int v24; // r1@36
  unsigned int *v25; // r2@38
  signed int v26; // r1@40
  unsigned int *v27; // r2@42
  signed int v28; // r1@44
  int v29; // [sp+0h] [bp-B8h]@6
  int v30; // [sp+2Ch] [bp-8Ch]@5
  int v31; // [sp+30h] [bp-88h]@5
  void *v32; // [sp+34h] [bp-84h]@6
  void *v33; // [sp+38h] [bp-80h]@6
  void **v34; // [sp+40h] [bp-78h]@5
  int v35; // [sp+78h] [bp-40h]@24
  int v36; // [sp+7Ch] [bp-3Ch]@23
  int v37; // [sp+80h] [bp-38h]@22
  int v38; // [sp+88h] [bp-30h]@2
  int v39; // [sp+8Ch] [bp-2Ch]@2

  v3 = this;
  v4 = a3;
  v5 = a2;
  if ( !*((_BYTE *)this + 5824) )
  {
    (*(void (__fastcall **)(int *, const EntityDamageSource *))(*(_DWORD *)a3 + 52))(&v38, a3);
    if ( (v38 & v39) == -1 )
      v6 = 1;
    else
      v6 = (*(int (__fastcall **)(EntityDamageSource *))(*(_DWORD *)v4 + 56))(v4);
    v7 = EntityDamageSource::getCause(v4);
    EventPacket::EventPacket((int)&v34, v5, v6, v7);
    (*(void (__fastcall **)(Player *, void ***))(*(_DWORD *)v5 + 1448))(v5, &v34);
    v8 = *(void (__fastcall **)(int *, EntityDamageSource *, int *, Player *))(*(_DWORD *)v4 + 20);
    sub_21E8AF4(&v30, (int *)v5 + 1079);
    v8(&v31, v4, &v30, v5);
    v9 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
    {
      v19 = (unsigned int *)(v30 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      }
      else
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    }
    TextPacket::createTranslated((int)&v29, &v31, (unsigned __int64 *)&v32);
    (*(void (**)(void))(**((_DWORD **)v3 + 165) + 8))();
    Player::setRespawnDimensionId((int)v5, 0);
    Player::updateTeleportDestPos(v5);
    Player::recheckSpawnPosition(v5);
    TextPacket::~TextPacket((TextPacket *)&v29);
    v11 = v33;
    v10 = v32;
    if ( v32 != v33 )
      do
        v14 = (int *)(*(_DWORD *)v10 - 12);
        if ( v14 != &dword_28898C0 )
        {
          v12 = (unsigned int *)(*(_DWORD *)v10 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v13 = __ldrex(v12);
            while ( __strex(v13 - 1, v12) );
          }
          else
            v13 = (*v12)--;
          if ( v13 <= 0 )
            j_j_j_j__ZdlPv_9(v14);
        }
        v10 = (char *)v10 + 4;
      while ( v10 != v11 );
      v10 = v32;
    if ( v10 )
      operator delete(v10);
    v15 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v31 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    v34 = &off_26E9D30;
    v16 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v37 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    v17 = (void *)(v36 - 12);
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v36 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    v18 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v35 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
  }
}


SavedDataStorage *__fastcall Level::setHasLockedBehaviorPack(Level *this, int a2)
{
  Level *v2; // r4@1
  int v3; // r0@1
  int i; // r5@2
  SavedDataStorage *result; // r0@5

  v2 = this;
  LevelData::setHasLockedBehaviorPack((Level *)((char *)this + 144), a2);
  v3 = *((_DWORD *)v2 + 32);
  if ( v3 )
  {
    (*(void (**)(void))(*(_DWORD *)v3 + 24))();
    for ( i = *((_DWORD *)v2 + 1484); i; i = *(_DWORD *)i )
      MapItemSavedData::trySave(*(MapItemSavedData **)(i + 16), *((LevelStorage **)v2 + 32));
  }
  result = (SavedDataStorage *)*((_DWORD *)v2 + 33);
  if ( result )
    result = (SavedDataStorage *)j_j_j__ZN16SavedDataStorage4saveEv(result);
  return result;
}


void __fastcall Level::requestPlayerChangeDimension(int a1, unsigned int a2, int *a3)
{
  Level::requestPlayerChangeDimension(a1, a2, a3);
}


int __fastcall Level::getClientResourcePackManager(Level *this)
{
  return 0;
}


char *__fastcall Level::getUsers(Level *this)
{
  return (char *)this + 12;
}


char *__fastcall Level::addListener(Level *this, LevelListener *a2)
{
  Level *v2; // r5@1
  BlockSourceListener *v3; // r4@1
  __int64 v4; // r0@1
  char *result; // r0@2
  int v6; // r5@2
  void *v7; // r8@3
  unsigned int v8; // r2@3
  unsigned int v9; // r1@5
  unsigned int v10; // r6@5
  char *v11; // r7@11
  char *v12; // r10@13

  v2 = this;
  v3 = a2;
  v4 = *((_QWORD *)this + 15);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v7 = (void *)*((_DWORD *)v2 + 29);
    v8 = ((signed int)v4 - (signed int)v7) >> 2;
    if ( !v8 )
      v8 = 1;
    HIDWORD(v4) = v8 + (((signed int)v4 - (signed int)v7) >> 2);
    v10 = v8 + (((signed int)v4 - (signed int)v7) >> 2);
    if ( 0 != HIDWORD(v4) >> 30 )
      v10 = 0x3FFFFFFF;
    if ( v9 < v8 )
    if ( v10 )
    {
      if ( v10 >= 0x40000000 )
        sub_21E57F4();
      v11 = (char *)operator new(4 * v10);
      LODWORD(v4) = *(_QWORD *)((char *)v2 + 116) >> 32;
      v7 = (void *)*(_QWORD *)((char *)v2 + 116);
    }
    else
      v11 = 0;
    v12 = &v11[v4 - (_DWORD)v7];
    *(_DWORD *)&v11[v4 - (_DWORD)v7] = v3;
    if ( 0 != ((signed int)v4 - (signed int)v7) >> 2 )
      _aeabi_memmove4(v11, v7);
    if ( v7 )
      operator delete(v7);
    result = &v11[4 * v10];
    *((_DWORD *)v2 + 29) = v11;
    *((_DWORD *)v2 + 30) = v12 + 4;
    *((_DWORD *)v2 + 31) = result;
    v6 = *((_DWORD *)v2 + 130);
  }
  else
    *(_DWORD *)v4 = v3;
    result = (char *)(*((_DWORD *)v2 + 30) + 4);
    *((_DWORD *)v2 + 30) = result;
  while ( v6 )
    result = BlockSource::addListener(*(BlockSource **)(v6 + 4), v3);
    v6 = *(_DWORD *)v6;
  return result;
}


void __fastcall Level::expandMapByID(int a1, int a2, __int64 a3, int a4)
{
  __int64 v4; // kr00_8@1
  unsigned int v5; // r11@1
  int v6; // r9@1
  int v7; // r0@1
  int v8; // r4@2
  int v9; // r6@2
  bool v10; // zf@3
  int v11; // r7@6
  bool v12; // zf@9
  _QWORD *v13; // r0@13
  unsigned int v14; // r4@14
  int v15; // r5@14
  int v16; // r0@14
  int v17; // r8@15
  int v18; // r7@15
  bool v19; // zf@16
  int v20; // r9@19
  bool v21; // zf@22
  _QWORD *v22; // r0@26
  int v23; // r0@29
  int v24; // r4@30
  int v25; // r6@30
  bool v26; // zf@31
  int v27; // r7@34
  bool v28; // zf@38
  _QWORD *v29; // r0@42
  unsigned int v30; // r4@44
  unsigned int v31; // r9@44
  int v32; // r8@44
  int *v33; // r0@44
  int v34; // r6@45
  int v35; // r7@45
  int v36; // r5@48
  bool v37; // zf@51
  _QWORD *v38; // r0@55
  int v39; // r0@56
  int v40; // r6@57
  int v41; // r5@57
  bool v42; // zf@58
  int v43; // r7@61
  bool v44; // zf@64
  _QWORD *v45; // r0@68
  unsigned int v46; // r4@69
  int *v47; // r0@69
  int v48; // r6@70
  int v49; // r5@70
  bool v50; // zf@71
  int v51; // r7@74
  bool v52; // zf@77
  _QWORD *v53; // r0@81
  int v54; // r0@82
  int v55; // r6@83
  int v56; // r5@83
  bool v57; // zf@84
  int v58; // r7@87
  bool v59; // zf@90
  _QWORD *v60; // r0@94
  int v61; // [sp+8h] [bp-60h]@56
  int v62; // [sp+Ch] [bp-5Ch]@44
  int v63; // [sp+10h] [bp-58h]@69
  __int64 *v64; // [sp+1Ch] [bp-4Ch]@1
  unsigned int *v65; // [sp+24h] [bp-44h]@1
  char v66; // [sp+24h] [bp-44h]@82
  int *v67; // [sp+28h] [bp-40h]@1
  char v68; // [sp+2Ch] [bp-3Ch]@69
  int v69; // [sp+30h] [bp-38h]@95
  int v70; // [sp+34h] [bp-34h]@95
  __int64 v71; // [sp+38h] [bp-30h]@14

  v4 = a3;
  v64 = (__int64 *)a1;
  v5 = (a3 + ((HIDWORD(a3) - 1640531527) << 6) + ((unsigned int)(HIDWORD(a3) - 1640531527) >> 2) - 1640531527) ^ (HIDWORD(a3) - 1640531527);
  v6 = v5 % *(_DWORD *)(a2 + 5932);
  v65 = (unsigned int *)(a2 + 5932);
  v7 = *(_DWORD *)(*(_DWORD *)(a2 + 5928) + 4 * v6);
  v67 = (int *)(a2 + 5928);
  if ( !v7 )
    goto LABEL_13;
  v8 = *(_DWORD *)v7;
  v9 = *(_DWORD *)(*(_DWORD *)v7 + 24);
  while ( 1 )
  {
    v10 = v9 == v5;
    if ( v9 == v5 )
      v10 = *(_QWORD *)(v8 + 8) == a3;
    if ( v10 )
      break;
    v11 = *(_DWORD *)v8;
    if ( *(_DWORD *)v8 )
    {
      v9 = *(_DWORD *)(v11 + 24);
      v7 = v8;
      v8 = *(_DWORD *)v8;
      if ( *(_DWORD *)(v11 + 24) % *(_DWORD *)(a2 + 5932) == v6 )
        continue;
    }
  }
  v12 = v7 == 0;
  if ( v7 )
    v7 = *(_DWORD *)v7;
    v12 = v7 == 0;
  if ( v12 )
LABEL_13:
    v13 = operator new(0x20u);
    *(_DWORD *)v13 = 0;
    v13[1] = v4;
    *((_DWORD *)v13 + 4) = 0;
    v7 = std::_Hashtable<EntityUniqueID,std::pair<EntityUniqueID const,std::unique_ptr<MapItemSavedData,std::default_delete<MapItemSavedData>>>,std::allocator<std::pair<EntityUniqueID const,std::unique_ptr<MapItemSavedData,std::default_delete<MapItemSavedData>>>>,std::__detail::_Select1st,std::equal_to<EntityUniqueID>,std::hash<EntityUniqueID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
           (int)v67,
           v6,
           v5,
           (int)v13);
  MapItemSavedData::getParentMapId((MapItemSavedData *)&v71, *(_DWORD *)(v7 + 16));
  v14 = (v71 + ((HIDWORD(v71) - 1640531527) << 6) + ((unsigned int)(HIDWORD(v71) - 1640531527) >> 2) - 1640531527) ^ (HIDWORD(v71) - 1640531527);
  v15 = v14 % *v65;
  v16 = *(_DWORD *)(*v67 + 4 * v15);
  if ( !v16 )
    goto LABEL_26;
  v17 = *(_DWORD *)v16;
  v18 = *(_DWORD *)(*(_DWORD *)v16 + 24);
    v19 = v18 == v14;
    if ( v18 == v14 )
      v19 = *(_QWORD *)(v17 + 8) == v71;
    if ( v19 )
    v20 = *(_DWORD *)v17;
    if ( *(_DWORD *)v17 )
      v18 = *(_DWORD *)(v20 + 24);
      v16 = v17;
      v17 = *(_DWORD *)v17;
      if ( *(_DWORD *)(v20 + 24) % *v65 == v15 )
  v21 = v16 == 0;
  if ( v16 )
    v16 = *(_DWORD *)v16;
    v21 = v16 == 0;
  if ( v21 )
LABEL_26:
    v22 = operator new(0x20u);
    *(_DWORD *)v22 = 0;
    v22[1] = v71;
    *((_DWORD *)v22 + 4) = 0;
    v16 = std::_Hashtable<EntityUniqueID,std::pair<EntityUniqueID const,std::unique_ptr<MapItemSavedData,std::default_delete<MapItemSavedData>>>,std::allocator<std::pair<EntityUniqueID const,std::unique_ptr<MapItemSavedData,std::default_delete<MapItemSavedData>>>>,std::__detail::_Select1st,std::equal_to<EntityUniqueID>,std::hash<EntityUniqueID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)v67,
            v15,
            v14,
            (int)v22);
  if ( *(_DWORD *)(v16 + 16) )
    if ( !a4 )
      v23 = *(_DWORD *)(*v67 + 4 * (v5 % *v65));
      if ( !v23 )
        goto LABEL_42;
      v24 = *(_DWORD *)v23;
      v25 = *(_DWORD *)(*(_DWORD *)v23 + 24);
      while ( 1 )
      {
        v26 = v25 == v5;
        if ( v25 == v5 )
          v26 = *(_QWORD *)(v24 + 8) == v4;
        if ( v26 )
          break;
        v27 = *(_DWORD *)v24;
        if ( *(_DWORD *)v24 )
        {
          v25 = *(_DWORD *)(v27 + 24);
          v23 = v24;
          v24 = *(_DWORD *)v24;
          if ( *(_DWORD *)(v27 + 24) % *v65 == v5 % *v65 )
            continue;
        }
      }
      v28 = v23 == 0;
      if ( v23 )
        v23 = *(_DWORD *)v23;
        v28 = v23 == 0;
      if ( v28 )
LABEL_42:
        v29 = operator new(0x20u);
        *(_DWORD *)v29 = 0;
        v29[1] = v4;
        *((_DWORD *)v29 + 4) = 0;
        v23 = std::_Hashtable<EntityUniqueID,std::pair<EntityUniqueID const,std::unique_ptr<MapItemSavedData,std::default_delete<MapItemSavedData>>>,std::allocator<std::pair<EntityUniqueID const,std::unique_ptr<MapItemSavedData,std::default_delete<MapItemSavedData>>>>,std::__detail::_Select1st,std::equal_to<EntityUniqueID>,std::hash<EntityUniqueID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                (int)v67,
                SHIDWORD(v4),
                v5,
                (int)v29);
      if ( (signed int)*(_BYTE *)(*(_DWORD *)(v23 + 16) + 36) < 4 )
        v30 = *v65;
        v31 = (v71 + ((HIDWORD(v71) - 1640531527) << 6) + ((unsigned int)(HIDWORD(v71) - 1640531527) >> 2) - 1640531527) ^ (HIDWORD(v71) - 1640531527);
        v32 = v31 % *v65;
        v62 = *v67;
        v33 = *(int **)(*v67 + 4 * v32);
        if ( !v33 )
          goto LABEL_55;
        v34 = *v33;
        v35 = *(_DWORD *)(*v33 + 24);
        while ( v35 != v31 || *(_QWORD *)(v34 + 8) != v71 )
          v36 = *(_DWORD *)v34;
          if ( *(_DWORD *)v34 )
          {
            v35 = *(_DWORD *)(v36 + 24);
            v33 = (int *)v34;
            v34 = *(_DWORD *)v34;
            if ( *(_DWORD *)(v36 + 24) % v30 == v32 )
              continue;
          }
        v37 = v33 == 0;
        if ( v33 )
          v35 = *v33;
          v37 = *v33 == 0;
        if ( v37 )
LABEL_55:
          v38 = operator new(0x20u);
          *(_DWORD *)v38 = 0;
          v38[1] = v71;
          *((_DWORD *)v38 + 4) = 0;
          v35 = std::_Hashtable<EntityUniqueID,std::pair<EntityUniqueID const,std::unique_ptr<MapItemSavedData,std::default_delete<MapItemSavedData>>>,std::allocator<std::pair<EntityUniqueID const,std::unique_ptr<MapItemSavedData,std::default_delete<MapItemSavedData>>>>,std::__detail::_Select1st,std::equal_to<EntityUniqueID>,std::hash<EntityUniqueID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  (int)v67,
                  v32,
                  v31,
                  (int)v38);
          v62 = *v67;
          v30 = *v65;
        v61 = *(_DWORD *)(v35 + 16);
        v39 = *(_DWORD *)(v62 + 4 * (v5 % v30));
        if ( !v39 )
          goto LABEL_68;
        v40 = *(_DWORD *)v39;
        v41 = *(_DWORD *)(*(_DWORD *)v39 + 24);
        while ( 1 )
          v42 = v41 == v5;
          if ( v41 == v5 )
            v42 = *(_QWORD *)(v40 + 8) == v4;
          if ( v42 )
            break;
          v43 = *(_DWORD *)v40;
          if ( *(_DWORD *)v40 )
            v41 = *(_DWORD *)(v43 + 24);
            v39 = v40;
            v40 = *(_DWORD *)v40;
            if ( *(_DWORD *)(v43 + 24) % v30 == v5 % v30 )
        v44 = v39 == 0;
        if ( v39 )
          v39 = *(_DWORD *)v39;
          v44 = v39 == 0;
        if ( v44 )
LABEL_68:
          v45 = operator new(0x20u);
          *(_DWORD *)v45 = 0;
          v45[1] = v4;
          *((_DWORD *)v45 + 4) = 0;
          v39 = std::_Hashtable<EntityUniqueID,std::pair<EntityUniqueID const,std::unique_ptr<MapItemSavedData,std::default_delete<MapItemSavedData>>>,std::allocator<std::pair<EntityUniqueID const,std::unique_ptr<MapItemSavedData,std::default_delete<MapItemSavedData>>>>,std::__detail::_Select1st,std::equal_to<EntityUniqueID>,std::hash<EntityUniqueID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  SHIDWORD(v4),
                  v5,
                  (int)v45);
        Vec3::Vec3((int)&v68, *(_DWORD *)(v39 + 16) + 20);
        v46 = *v65;
        v63 = *v67;
        v47 = *(int **)(*v67 + 4 * (v5 % *v65));
        if ( !v47 )
          goto LABEL_81;
        v48 = *v47;
        v49 = *(_DWORD *)(*v47 + 24);
          v50 = v49 == v5;
          if ( v49 == v5 )
            v50 = *(_QWORD *)(v48 + 8) == v4;
          if ( v50 )
          v51 = *(_DWORD *)v48;
          if ( *(_DWORD *)v48 )
            v49 = *(_DWORD *)(v51 + 24);
            v47 = (int *)v48;
            v48 = *(_DWORD *)v48;
            if ( *(_DWORD *)(v51 + 24) % v46 == v5 % *v65 )
        v52 = v47 == 0;
        if ( v47 )
          v49 = *v47;
          v52 = *v47 == 0;
        if ( v52 )
LABEL_81:
          v53 = operator new(0x20u);
          *(_DWORD *)v53 = 0;
          v53[1] = v4;
          *((_DWORD *)v53 + 4) = 0;
          v49 = std::_Hashtable<EntityUniqueID,std::pair<EntityUniqueID const,std::unique_ptr<MapItemSavedData,std::default_delete<MapItemSavedData>>>,std::allocator<std::pair<EntityUniqueID const,std::unique_ptr<MapItemSavedData,std::default_delete<MapItemSavedData>>>>,std::__detail::_Select1st,std::equal_to<EntityUniqueID>,std::hash<EntityUniqueID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  (int)v53);
          v63 = *v67;
          v46 = *v65;
        v66 = *(_BYTE *)(*(_DWORD *)(v49 + 16) + 36) + 1;
        v54 = *(_DWORD *)(v63 + 4 * (v5 % v46));
        if ( !v54 )
          goto LABEL_94;
        v55 = *(_DWORD *)v54;
        v56 = *(_DWORD *)(*(_DWORD *)v54 + 24);
          v57 = v56 == v5;
          if ( v56 == v5 )
            v57 = *(_QWORD *)(v55 + 8) == v4;
          if ( v57 )
          v58 = *(_DWORD *)v55;
          if ( *(_DWORD *)v55 )
            v56 = *(_DWORD *)(v58 + 24);
            v54 = v55;
            v55 = *(_DWORD *)v55;
            if ( *(_DWORD *)(v58 + 24) % v46 == v5 % v46 )
        v59 = v54 == 0;
        if ( v54 )
          v54 = *(_DWORD *)v54;
          v59 = v54 == 0;
        if ( v59 )
LABEL_94:
          v60 = operator new(0x20u);
          *(_DWORD *)v60 = 0;
          v60[1] = v4;
          *((_DWORD *)v60 + 4) = 0;
          v54 = std::_Hashtable<EntityUniqueID,std::pair<EntityUniqueID const,std::unique_ptr<MapItemSavedData,std::default_delete<MapItemSavedData>>>,std::allocator<std::pair<EntityUniqueID const,std::unique_ptr<MapItemSavedData,std::default_delete<MapItemSavedData>>>>,std::__detail::_Select1st,std::equal_to<EntityUniqueID>,std::hash<EntityUniqueID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  v5 % v46,
                  (int)v60);
        MapItemSavedData::setOrigin(v61, *(float *)&v68, v69, v70, v66, *(_DWORD *)(*(_DWORD *)(v54 + 16) + 32));
    *v64 = v71;
  else
    *v64 = v4;
}


Entity *__fastcall Level::getPrevPlayer(int a1, unsigned __int64 *a2, int a3)
{
  Level *v3; // r8@1
  unsigned __int64 *v4; // r9@1
  Entity **v5; // r6@1
  Entity **v6; // r10@1
  Entity *v7; // r7@2
  Entity *v8; // r5@3
  char *v9; // r0@4
  Entity *v10; // r4@4
  __int64 v11; // r0@4
  signed int v12; // r0@7
  __int64 v13; // r0@10
  int v14; // r0@12
  Entity *v15; // r1@12
  Entity *v16; // t1@12

  v3 = (Level *)a1;
  v4 = a2;
  v6 = (Entity **)(*(_QWORD *)(a1 + 24) >> 32);
  v5 = (Entity **)*(_QWORD *)(a1 + 24);
  if ( v5 == v6 )
  {
    v12 = 1;
    v7 = 0;
    v10 = 0;
  }
  else
    if ( a3 == 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        v9 = Entity::getUniqueID(*v5);
        v10 = *v5;
        v11 = *(_QWORD *)v9;
        HIDWORD(v11) ^= *v4 >> 32;
        if ( v11 == (unsigned int)*v4 )
        {
          v8 = *v5;
          if ( v7 )
            break;
        }
        ++v5;
        v7 = v10;
        if ( v6 == v5 )
          v7 = v10;
          v12 = 1;
          v10 = v8;
          goto LABEL_18;
      }
      v12 = 0;
    }
    else
      v10 = 0;
        v13 = *(_QWORD *)Entity::getUniqueID(*v5);
        HIDWORD(v13) ^= *v4 >> 32;
        if ( v13 == (unsigned int)*v4 )
          v10 = *v5;
        v14 = Level::getPrimaryLocalPlayer(v3);
        v16 = *v5;
        v15 = v16;
        if ( (Entity *)v14 != v16 )
          v7 = v15;
LABEL_18:
  if ( v10 )
    v10 = v7;
  if ( !v12 )
  return v10;
}


int __fastcall Level::_fixEntitiesRegion(int result, unsigned __int64 *a2, int a3, Dimension *a4)
{
  Entity **v4; // r5@1
  Entity **v5; // r9@1
  Dimension *v6; // r4@1
  int v7; // r8@1
  int v8; // r0@3
  int v9; // r11@3
  int v10; // r6@3
  BlockSource **v11; // r10@5
  int v12; // r7@5
  int v13; // r7@8
  int v14; // r1@12
  int v15; // r2@12
  Entity *v16; // r3@13
  int v17; // r7@13
  bool v18; // zf@14
  Entity **v19; // r2@14
  Entity *v20; // r6@17
  bool v21; // zf@17
  int v22; // r2@22
  Entity *v23; // r3@24
  int *v24; // [sp+4h] [bp-2Ch]@2
  int *v25; // [sp+8h] [bp-28h]@2

  v5 = (Entity **)(*a2 >> 32);
  v4 = (Entity **)*a2;
  v6 = a4;
  v7 = result;
  if ( v4 != v5 )
  {
    v25 = (int *)(result + 5788);
    v24 = (int *)(result + 5784);
    do
    {
      v8 = Entity::isGlobal(*v4);
      v9 = *(_DWORD *)(v7 + 520);
      v10 = v8;
      if ( v9 )
      {
        if ( v8 == 1 )
        {
          while ( 1 )
          {
            v11 = (BlockSource **)(v9 + 4);
            v12 = BlockSource::getDimensionId(*(BlockSource **)(v9 + 4));
            if ( v12 == Dimension::getId(v6) )
              break;
            v9 = *(_DWORD *)v9;
            if ( !v9 )
              goto LABEL_11;
          }
        }
        else
            v13 = BlockSource::getDimensionId(*(BlockSource **)(v9 + 4));
            if ( v13 == Dimension::getId(v6) )
            {
              if ( BlockSource::getChunk(*v11, (Entity *)((char *)*v4 + 144)) )
                break;
            }
        result = Entity::setRegion(*v4, *v11);
        goto LABEL_34;
      }
LABEL_11:
      result = Entity::resetRegion(*v4);
      if ( v10 == 1 )
        v14 = *v24;
        result = *v25;
        v15 = (*v25 - *v24) >> 4;
        if ( v15 >= 1 )
          v16 = *v4;
          v17 = v15 + 1;
          do
            v18 = *(_DWORD *)v14 == (_DWORD)v16;
            v19 = (Entity **)v14;
            if ( *(Entity **)v14 != v16 )
              v19 = (Entity **)(v14 + 4);
              v18 = *(_DWORD *)(v14 + 4) == (_DWORD)v16;
            if ( v18 )
            v19 = (Entity **)(v14 + 8);
            v20 = *(Entity **)(v14 + 8);
            v21 = v20 == v16;
            if ( v20 != v16 )
              v19 = (Entity **)(v14 + 12);
              v21 = *(_DWORD *)(v14 + 12) == (_DWORD)v16;
            if ( v21 )
            --v17;
            v14 += 16;
          while ( v17 > 1 );
LABEL_32:
          if ( v19 != (Entity **)result )
            *v19 = *(Entity **)(result - 4);
            result = *v25 - 4;
            *v25 = result;
          goto LABEL_34;
        if ( 1 == (result - v14) >> 2 )
          v23 = *v4;
          v19 = (Entity **)v14;
          v22 = (result - v14) >> 2;
          if ( v22 == 3 )
            v23 = *v4;
            if ( *(Entity **)v14 == *v4 )
              goto LABEL_32;
            v19 = (Entity **)(v14 + 4);
          else
            if ( v22 != 2 )
              goto LABEL_34;
          if ( *v19 == v23 )
            goto LABEL_32;
          ++v19;
        if ( *v19 == v23 )
          goto LABEL_32;
LABEL_34:
      ++v4;
    }
    while ( v4 != v5 );
  }
  return result;
}


int __fastcall Level::sendAllPlayerAbilities(int result, const Player *a2)
{
  int v2; // r5@1
  int *i; // r7@1
  int *v4; // r11@1
  int v5; // r0@2
  int v6; // t1@2
  int v7; // r6@2
  int (__fastcall *v8)(int, char *, char *, int); // r8@2
  int v9; // r0@2
  const Player *v10; // [sp+Ch] [bp-5Ch]@1
  char v11; // [sp+10h] [bp-58h]@2

  v2 = result;
  v10 = a2;
  v4 = (int *)(*(_QWORD *)(result + 12) >> 32);
  for ( i = (int *)*(_QWORD *)(result + 12); v4 != i; result = v8(v7, (char *)v10 + 4392, &v11, v9) )
  {
    v5 = LevelData::getAdventureSettings((LevelData *)(v2 + 144));
    v6 = *i;
    ++i;
    AdventureSettingsPacket::AdventureSettingsPacket(
      (int)&v11,
      v5,
      v6 + 4320,
      *(_QWORD *)(v6 + 56) >> 32,
      *(_QWORD *)(v6 + 56),
      0);
    v7 = *(_DWORD *)(v2 + 660);
    v8 = *(int (__fastcall **)(int, char *, char *, int))(*(_DWORD *)v7 + 16);
    v9 = Player::getClientSubId(v10);
  }
  return result;
}


void __fastcall Level::_pollSaveGameStatistics(Level *this)
{
  Level *v1; // r4@1
  int v2; // r0@1
  char *v3; // r0@2
  unsigned int *v4; // r2@4
  signed int v5; // r1@6
  char *v6; // [sp+4h] [bp-1Ch]@2

  v1 = this;
  v2 = *((_DWORD *)this + 32);
  if ( v2 )
  {
    v6 = (char *)&unk_28898CC;
    (*(void (**)(void))(*(_DWORD *)v2 + 44))();
    MinecraftEventing::fireEventStorageReport(*((_DWORD *)v1 + 1497), (int *)&v6);
    v3 = v6 - 12;
    if ( (int *)(v6 - 12) != &dword_28898C0 )
    {
      v4 = (unsigned int *)(v6 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v5 = __ldrex(v4);
        while ( __strex(v5 - 1, v4) );
      }
      else
        v5 = (*v4)--;
      if ( v5 <= 0 )
        j_j_j_j__ZdlPv_9(v3);
    }
  }
}


void __fastcall Level::tick(Level *this)
{
  Level *v1; // r9@1
  signed int v2; // r6@2
  signed int v3; // r5@2
  int v4; // r7@3
  unsigned int v5; // r1@3
  _DWORD *v6; // r0@4
  int v7; // r12@4
  int v8; // lr@4
  int v9; // r6@4
  __int64 v10; // kr00_8@6
  signed int v12; // r7@9
  int v13; // r4@9
  unsigned int v14; // r1@10
  int v15; // r0@11
  unsigned __int64 *v16; // r0@14
  char *v23; // r0@16
  __int64 v24; // r6@16
  __int64 v25; // kr08_8@16
  signed int v26; // r3@16
  signed int v27; // r2@16
  int v28; // r0@23
  int i; // r4@26
  __int64 v30; // r0@29
  signed int *v31; // r6@29
  char *v32; // r0@29
  void (*v33)(void); // r3@29
  int *v34; // r0@29
  int *v35; // r5@29
  int v36; // r4@30
  int v37; // r0@32
  _DWORD *v38; // r0@38
  void (*v39)(void); // r3@38
  int *v40; // r0@38
  int *v41; // r5@38
  int v42; // r4@39
  int v43; // r0@41
  bool v44; // zf@41
  int v45; // r4@49
  int v46; // r6@49
  int v47; // r5@50
  int j; // r4@54
  int v49; // r0@57
  BlockSource *v50; // r6@57
  CircuitSystem *v51; // r0@58
  int v54; // r0@60
  int k; // r4@61
  SavedDataStorage *v56; // r0@64
  _DWORD *v58; // [sp+4h] [bp-54h]@38
  void (*v59)(void); // [sp+Ch] [bp-4Ch]@38
  signed int (__fastcall *v60)(int, int); // [sp+10h] [bp-48h]@38
  void *v61; // [sp+14h] [bp-44h]@29
  int (__fastcall *v62)(void **, void **, int); // [sp+1Ch] [bp-3Ch]@29
  signed int (__fastcall *v63)(int, int); // [sp+20h] [bp-38h]@29
  void **v64; // [sp+24h] [bp-34h]@24
  int v65; // [sp+28h] [bp-30h]@24
  int v66; // [sp+2Ch] [bp-2Ch]@24
  char v67; // [sp+30h] [bp-28h]@24
  int v68; // [sp+34h] [bp-24h]@24

  v1 = this;
  Level::tickEntities(this);
  if ( !(*(_QWORD *)LevelData::getCurrentTick((Level *)((char *)v1 + 144)) % 0x14uLL) )
  {
    v2 = 1;
    v3 = 2;
    do
    {
      v4 = v2 + 1;
      v5 = Random::_genRandInt32((Level *)((char *)v1 + 732)) % (v2 + 1);
      if ( v2 != v5 )
      {
        v6 = &Level::tickingChunksOffset[2 * v5];
        v7 = Level::tickingChunksOffset[v3];
        v8 = Level::tickingChunksOffset[v3 + 1];
        v9 = v6[1];
        Level::tickingChunksOffset[v3] = Level::tickingChunksOffset[2 * v5];
        Level::tickingChunksOffset[v3 + 1] = v9;
        Level::tickingChunksOffset[2 * v5] = v7;
        v6[1] = v8;
      }
      v3 += 2;
      v2 = v4;
    }
    while ( v3 != 114 );
    v10 = *((_QWORD *)v1 + 3);
    _ZF = (_DWORD)v10 == HIDWORD(v10);
    if ( (_DWORD)v10 != HIDWORD(v10) )
      _ZF = (_DWORD)v10 + 4 == HIDWORD(v10);
    if ( !_ZF )
      v12 = 1;
      v13 = HIDWORD(v10) - v10 - 4;
      do
        v14 = Random::_genRandInt32((Level *)((char *)v1 + 732)) % (v12 + 1);
        if ( v12 != v14 )
        {
          v15 = *(_DWORD *)(v10 + 4 * v12);
          *(_DWORD *)(v10 + 4 * v12) = *(_DWORD *)(v10 + 4 * v14);
          *(_DWORD *)(v10 + 4 * v14) = v15;
        }
        v13 -= 4;
        ++v12;
      while ( v13 );
  }
  if ( !*((_BYTE *)v1 + 5824) )
    v16 = (unsigned __int64 *)LevelData::getGameRules((Level *)((char *)v1 + 144));
    if ( GameRules::getBool(v16, (int **)&GameRules::DO_DAYLIGHT_CYCLE) == 1 )
      _R0 = LevelData::getTime((Level *)((char *)v1 + 144));
      _R1 = 91625969;
      ++_R0;
      __asm { SMMUL.W         R1, R0, R1 }
      LevelData::setTime((Level *)((char *)v1 + 144), _R0 - 192000 * (((signed int)_R1 >> 12) + (_R1 >> 31)));
    v23 = LevelData::getCurrentTick((Level *)((char *)v1 + 144));
    v24 = *(_QWORD *)v23;
    v25 = *(_QWORD *)v23 - *((_QWORD *)v1 + 732);
    v26 = 0;
    v27 = 0;
    if ( SHIDWORD(v25) < 0 )
      v26 = 1;
    if ( (unsigned int)v25 < 0x100 )
      v27 = 1;
    if ( HIDWORD(v25) )
      v27 = v26;
    if ( !v27 )
      v28 = LevelData::getTime((Level *)((char *)v1 + 144));
      if ( !*((_BYTE *)v1 + 5824) )
        v65 = 2;
        v66 = 1;
        v67 = 0;
        v64 = &off_26E93B4;
        v68 = v28;
        (*(void (**)(void))(**((_DWORD **)v1 + 165) + 8))();
      *((_QWORD *)v1 + 732) = v24;
  for ( i = *((_DWORD *)v1 + 142); i; i = *(_DWORD *)i )
    (*(void (**)(void))(**(_DWORD **)(i + 8) + 120))();
  HIDWORD(v30) = v1;
  LODWORD(v30) = *((_DWORD *)v1 + 1474);
  TickingAreasManager::update(v30);
  LevelData::incrementTick((Level *)((char *)v1 + 144));
  v31 = (signed int *)*((_DWORD *)v1 + 1474);
  v32 = LevelData::getCurrentTick((Level *)((char *)v1 + 144));
  TickingAreasManager::tick(v31, v32);
  v61 = operator new(1u);
  v33 = (void (*)(void))sub_191285E;
  v62 = sub_191285E;
  v63 = sub_191284E;
  v34 = (int *)(*((_QWORD *)v1 + 3) >> 32);
  v35 = (int *)*((_QWORD *)v1 + 3);
  if ( v35 == v34 )
    goto LABEL_71;
  v36 = (int)(v34 - 1);
  do
    if ( !v33 )
      sub_21E5F48();
    v37 = v63(&v61, *v35);
    v33 = (void (*)(void))v62;
    if ( (int *)v36 == v35 )
      break;
    ++v35;
  while ( !(v37 ^ 1) );
  if ( v62 )
LABEL_71:
    v33();
  v38 = operator new(4u);
  *v38 = v1;
  v39 = (void (*)(void))sub_19128AA;
  v58 = v38;
  v59 = (void (*)(void))sub_19128AA;
  v60 = sub_191288C;
  v40 = (int *)(*((_QWORD *)v1 + 3) >> 32);
  v41 = (int *)*((_QWORD *)v1 + 3);
  if ( v41 == v40 )
    goto LABEL_72;
  v42 = (int)(v40 - 1);
    if ( !v39 )
    v43 = v60(&v58, *v41);
    v44 = v42 == (_DWORD)v41;
    v39 = v59;
    if ( (int *)v42 != v41 )
      ++v41;
      v44 = (v43 ^ 1) == 1;
  while ( !v44 );
  if ( v59 )
LABEL_72:
    v39();
  Level::_saveSomeChunks(v1);
  v45 = *((_DWORD *)v1 + 1443);
  v46 = *((_DWORD *)v1 + 1442);
  if ( v45 != v46 )
    v47 = *((_DWORD *)v1 + 1442);
      if ( *(_DWORD *)v47 )
        (*(void (**)(void))(**(_DWORD **)v47 + 32))();
      *(_DWORD *)v47 = 0;
      v47 += 4;
    while ( v45 != v47 );
  *((_DWORD *)v1 + 1443) = v46;
  for ( j = *((_DWORD *)v1 + 142); j; j = *(_DWORD *)j )
    v49 = *(_DWORD *)(j + 8);
    v50 = *(BlockSource **)(v49 + 64);
    if ( v50 )
      v51 = (CircuitSystem *)Dimension::getCircuitSystem((Dimension *)v49);
      CircuitSystem::updateDependencies(v51, v50);
  _R6 = (int)v1 + 5832;
  _R0 = getTimeS();
  __asm
    VMOV            D0, R0, R1
    VLDR            D1, [R6]
    VSUB.F64        D0, D0, D1
    VMOV.F64        D1, #30.0
    VCMPE.F64       D0, D1
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) )
    Level::savePlayers(v1);
    Level::_saveAutonomousEntities(v1);
    v54 = *((_DWORD *)v1 + 32);
    if ( v54 )
      (*(void (**)(void))(*(_DWORD *)v54 + 24))();
      for ( k = *((_DWORD *)v1 + 1484); k; k = *(_DWORD *)k )
        MapItemSavedData::trySave(*(MapItemSavedData **)(k + 16), *((LevelStorage **)v1 + 32));
    v56 = (SavedDataStorage *)*((_DWORD *)v1 + 33);
    if ( v56 )
      SavedDataStorage::save(v56);
    _R0 = getTimeS();
    __asm
      VMOV            D0, R0, R1
      VSTR            D0, [R6]
    ++dword_281C8AC;
    if ( dword_281C8AC == 20 * (dword_281C8AC / 0x14u) )
      dword_281C8AC = 0;
      Level::_pollSaveGameStatistics(v1);
  Level::_handlePlayerSuspension(v1);
  Level::_cleanupDisconnectedPlayers(v1);
  Level::_handleChangeDimensionRequests(v1);
}


int __fastcall Level::upgradeStorageVersion(int a1, int a2)
{
  int v2; // r4@1
  int result; // r0@1

  v2 = a1;
  result = *(_DWORD *)(a1 + 128);
  if ( result )
  {
    LevelData::setStorageVersion(v2 + 144, a2);
    result = (*(int (**)(void))(**(_DWORD **)(v2 + 128) + 24))();
  }
  return result;
}


void __fastcall Level::startLeaveGame(Level *this)
{
  Level::startLeaveGame(this);
}


signed int __fastcall Level::extinguishFire(Level *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  BlockSource *v4; // r4@1
  Level *v5; // r5@1
  Block *v6; // r0@1
  signed int v7; // r6@1
  char v9; // [sp+10h] [bp-30h]@2
  char v10; // [sp+1Ch] [bp-24h]@1

  v4 = a2;
  v5 = this;
  BlockPos::neighbor((BlockPos *)&v10, (int)a3, a4);
  v6 = (Block *)BlockSource::getBlock(v4, (const BlockPos *)&v10);
  v7 = 0;
  if ( Block::isType(v6, (const Block *)Block::mFire) == 1 )
  {
    BlockPos::center((BlockPos *)&v9, (int)&v10);
    Level::broadcastSoundEvent(v5, (int)v4, 63, (int)&v9, -1, 1, 0, 0);
    BlockSource::removeBlock(v4, (const BlockPos *)&v10);
    v7 = 1;
  }
  return v7;
}


Entity *__fastcall Level::getNextPlayer(Level *this, unsigned __int64 *a2, int a3)
{
  Level *v3; // r11@1
  int v4; // r9@1
  int v5; // r8@1
  unsigned __int64 *v6; // r10@1
  Entity **v7; // r6@4
  Entity **v8; // r7@4
  Entity *v9; // r4@5
  signed int v10; // r0@5
  __int64 v11; // r0@7
  Entity *v12; // r5@7
  Entity *v13; // t1@7
  __int64 v14; // r0@15
  Entity *result; // r0@23

  v3 = this;
  v4 = a3;
  v5 = *((_DWORD *)this + 6);
  v6 = a2;
  if ( (a3 || Level::getPrimaryLocalPlayer(this) != *(_DWORD *)v5 || (v5 += 4, v5 != *((_DWORD *)v3 + 7)))
    && (v7 = (Entity **)(*((_QWORD *)v3 + 3) >> 32), v8 = (Entity **)*((_QWORD *)v3 + 3), v8 != v7) )
  {
    v9 = 0;
    LOBYTE(v10) = 1;
    if ( v4 == 1 )
    {
      while ( v10 & 1 )
      {
        v11 = *(_QWORD *)Entity::getUniqueID(*v8);
        HIDWORD(v11) ^= *v6 >> 32;
        v13 = *v8;
        ++v8;
        v12 = v13;
        if ( v11 == (unsigned int)*v6 )
          v9 = v12;
        v10 = 0;
        if ( !v9 )
          v10 = 1;
        if ( v7 == v8 )
          goto LABEL_22;
      }
    }
    else
        if ( (Entity *)Level::getPrimaryLocalPlayer(v3) == *v8 )
        {
          v9 = 0;
        }
        else
          v14 = *(_QWORD *)Entity::getUniqueID(*v8);
          HIDWORD(v14) ^= *v6 >> 32;
          if ( v14 == (unsigned int)*v6 )
            v9 = *v8;
LABEL_22:
          if ( v10 )
            goto LABEL_23;
          return *(Entity **)v5;
    result = *v8;
  }
  else
LABEL_23:
    result = 0;
  return result;
}


Entity *__fastcall Level::addAutonomousEntity(int a1, int a2, Entity **a3)
{
  int v3; // r5@1
  Entity *v4; // r4@1
  int (*v5)(void); // r3@1
  int v6; // r6@1
  Entity *result; // r0@3
  char *v8; // r0@5
  int *v9; // r8@5
  _BYTE *v10; // r9@7
  unsigned int v11; // r3@7
  unsigned int v12; // r2@9
  unsigned int v13; // r6@9
  char *v14; // r7@15
  int v15; // r10@17
  int v16; // r10@19
  char *v17; // r0@22
  int *v18; // r8@22
  _BYTE *v19; // r9@24
  void **v20; // r10@24
  unsigned int v21; // r3@24
  unsigned int v22; // r2@26
  unsigned int v23; // r6@26
  char *v24; // r7@32
  _DWORD *v25; // r11@34
  int v26; // r5@34
  int v27; // r5@36
  char **v28; // [sp+4h] [bp-2Ch]@15
  Entity *v29; // [sp+8h] [bp-28h]@1

  v3 = a1;
  v4 = *a3;
  v5 = *(int (**)(void))(*(_DWORD *)a1 + 44);
  *a3 = 0;
  v29 = v4;
  v6 = v5();
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 32))();
  result = 0;
  v29 = 0;
  if ( v6 )
  {
    Entity::setAutonomous(v4, 1);
    if ( Entity::isGlobal(v4) == 1 )
    {
      v8 = *(char **)(v3 + 5788);
      v9 = (int *)(v3 + 5788);
      if ( v8 == *(char **)(v3 + 5792) )
      {
        v10 = *(_BYTE **)(v3 + 5784);
        v11 = (v8 - v10) >> 2;
        if ( !v11 )
          v11 = 1;
        v12 = v11 + ((v8 - v10) >> 2);
        v13 = v11 + ((v8 - v10) >> 2);
        if ( 0 != v12 >> 30 )
          v13 = 0x3FFFFFFF;
        if ( v12 < v11 )
        if ( v13 )
        {
          if ( v13 >= 0x40000000 )
            goto LABEL_41;
          v14 = (char *)operator new(4 * v13);
          v10 = *(_BYTE **)(v3 + 5784);
          v8 = (char *)*v9;
          v28 = (char **)(v3 + 5784);
        }
        else
          v14 = 0;
        v15 = (int)&v14[v8 - v10];
        *(_DWORD *)&v14[v8 - v10] = v4;
        if ( 0 != (v8 - v10) >> 2 )
          _aeabi_memmove4(v14, v10);
        v16 = v15 + 4;
        if ( v10 )
          operator delete(v10);
        *v28 = v14;
        *v9 = v16;
        *(_DWORD *)(v3 + 5792) = &v14[4 * v13];
      }
      else
        *(_DWORD *)v8 = v4;
        *v9 += 4;
    }
    v17 = *(char **)(v3 + 5800);
    v18 = (int *)(v3 + 5800);
    if ( v17 != *(char **)(v3 + 5804) )
      *(_DWORD *)v17 = v4;
      *v18 += 4;
      return v4;
    v19 = *(_BYTE **)(v3 + 5796);
    v20 = (void **)(v3 + 5796);
    v21 = (v17 - v19) >> 2;
    if ( !v21 )
      v21 = 1;
    v22 = v21 + ((v17 - v19) >> 2);
    v23 = v21 + ((v17 - v19) >> 2);
    if ( 0 != v22 >> 30 )
      v23 = 0x3FFFFFFF;
    if ( v22 < v21 )
    if ( !v23 )
      v24 = 0;
      goto LABEL_34;
    if ( v23 < 0x40000000 )
      v24 = (char *)operator new(4 * v23);
      v19 = *v20;
      v17 = (char *)*v18;
LABEL_34:
      v25 = (_DWORD *)(v3 + 5804);
      v26 = (int)&v24[v17 - v19];
      *(_DWORD *)&v24[v17 - v19] = v4;
      if ( 0 != (v17 - v19) >> 2 )
        _aeabi_memmove4(v24, v19);
      v27 = v26 + 4;
      if ( v19 )
        operator delete(v19);
      *v20 = v24;
      *v18 = v27;
      *v25 = &v24[4 * v23];
LABEL_41:
    sub_21E57F4();
  }
  return result;
}


int __fastcall Level::playSound(int a1, int a2, int a3)
{
  int v3; // r7@1
  int v4; // r6@1
  __int64 v5; // r0@1
  int v6; // r8@1
  unsigned int v7; // r4@2

  v3 = a1;
  v4 = a2;
  v5 = *(_QWORD *)(a1 + 116);
  v6 = a3;
  if ( HIDWORD(v5) != (_DWORD)v5 )
  {
    v7 = 0;
    do
    {
      (*(void (__cdecl **)(_DWORD, int, int))(**(_DWORD **)(v5 + 4 * v7) + 92))(*(_DWORD *)(v5 + 4 * v7), v4, v6);
      v5 = *(_QWORD *)(v3 + 116);
      ++v7;
    }
    while ( v7 < (HIDWORD(v5) - (signed int)v5) >> 2 );
  }
  return v5;
}


LevelSettings *__fastcall Level::Level(LevelSettings *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63)
{
  LevelSettings *v63; // r9@1
  int v64; // r5@1
  int v65; // r11@1
  unsigned int *v66; // r4@1
  double v67; // r0@1
  unsigned int v68; // r0@1
  int v69; // r7@3
  void *v70; // r5@3
  unsigned int v71; // r5@4
  __int64 v72; // r0@4
  unsigned int v73; // r4@4
  double v74; // r0@4
  double v75; // r0@4
  unsigned int v76; // r0@4
  int v77; // r5@6
  void *v78; // r4@6
  double v79; // r0@7
  int v80; // r7@7
  __int64 v81; // r0@7
  BehaviorFactory *v82; // r7@7
  __int64 v83; // r0@7
  int v84; // r4@7
  double v85; // r0@7
  unsigned int v86; // r0@7
  int v87; // r5@9
  void *v88; // r4@9
  void *v89; // r4@10
  double v90; // r0@10
  double v91; // r0@10
  int v92; // r5@12
  void *v93; // r4@12
  unsigned int v94; // r0@13
  int v95; // r5@15
  void *v96; // r4@15
  unsigned int v97; // r0@16
  int v98; // r1@16
  signed int v99; // r2@16
  int v100; // r0@17
  int v101; // r5@17
  int v102; // r7@17
  unsigned int v103; // r0@18
  signed int v104; // r7@18
  signed int v105; // r2@18
  signed int v106; // r3@18
  int v107; // r0@19
  int v108; // r5@19
  void *v109; // r7@20
  int *v110; // r0@20
  void *v111; // r7@20
  int *v112; // r0@20
  double v113; // r0@20
  unsigned int v114; // r0@20
  int *v115; // r10@20
  int v116; // r4@22
  void *v117; // r5@22
  double v118; // r0@22
  unsigned int v119; // r0@23
  int v120; // r4@25
  void *v121; // r5@25
  double v122; // r0@25
  unsigned int v123; // r0@26
  int v124; // r4@28
  void *v125; // r5@28
  double v126; // r0@28
  unsigned int v127; // r0@29
  int v128; // r5@31
  void *v129; // r4@31
  Scheduler *v130; // r0@32
  int v131; // r1@32
  WorkerPool *v132; // r0@32
  WorkerPool *v133; // r0@33
  int v134; // r1@34
  int v135; // r1@34
  TaskGroup *v136; // r0@34
  TaskGroup *v137; // r0@35
  int v138; // r5@36
  void *v139; // r4@36
  EntityDefinitionGroup *v140; // r1@36
  void *v141; // r0@36
  ProjectileFactory *v142; // r4@38
  void *v143; // r0@38
  void *v144; // r0@43
  int v145; // r4@47
  char *v146; // r5@47
  int v147; // r8@47
  int v148; // r7@47
  char *v154; // r4@48
  int v155; // r0@49
  int v157; // r5@53
  void (__fastcall *v158)(int *, int, int *); // r7@53
  void *v159; // r0@53
  int v160; // r1@54
  __int64 v161; // r0@55
  int v162; // r4@55
  void (__fastcall *v163)(int, int *, int *); // r5@55
  void *v164; // r0@55
  void *v165; // r0@56
  void *v166; // r0@58
  char v167; // r0@59
  int v168; // r0@60
  int v169; // r0@67
  int *v170; // r0@67
  LevelStorage *v171; // r1@67
  Biome *v172; // r0@67
  Biome *v173; // r0@69
  unsigned int v174; // r1@69
  int v175; // r1@69
  void *v176; // r0@70
  int v177; // r0@71
  int v178; // r8@72
  int v179; // r4@72
  const CompoundTag *v180; // r7@74
  int v181; // r0@74
  __int64 v182; // kr00_8@74
  int v183; // r5@76
  void *v184; // r0@79
  void *v185; // r4@80
  void *v186; // r7@80
  unsigned int *v187; // r2@82
  signed int v188; // r1@84
  int *v189; // r0@90
  unsigned int *v191; // r2@107
  signed int v192; // r1@109
  unsigned int *v193; // r2@111
  signed int v194; // r1@113
  unsigned int *v195; // r2@115
  signed int v196; // r1@117
  unsigned int *v197; // r2@119
  signed int v198; // r1@121
  unsigned int *v199; // r2@138
  signed int v200; // r1@140
  unsigned int *v201; // r2@142
  signed int v202; // r1@144
  float v203; // [sp+Ch] [bp-244h]@0
  float v204; // [sp+10h] [bp-240h]@0
  WorkerPool **v205; // [sp+30h] [bp-220h]@20
  AppPlatformListener *v206; // [sp+34h] [bp-21Ch]@1
  TaskGroup **v207; // [sp+38h] [bp-218h]@20
  LevelData *v208; // [sp+3Ch] [bp-214h]@15
  int *v209; // [sp+40h] [bp-210h]@20
  int v210; // [sp+44h] [bp-20Ch]@15
  int *v211; // [sp+48h] [bp-208h]@20
  int v212; // [sp+4Ch] [bp-204h]@76
  void **v213; // [sp+50h] [bp-200h]@74
  int v214; // [sp+54h] [bp-1FCh]@74
  int v215; // [sp+58h] [bp-1F8h]@76
  int *v216; // [sp+5Ch] [bp-1F4h]@76
  const CompoundTag *v217; // [sp+60h] [bp-1F0h]@76
  _BYTE *v218; // [sp+64h] [bp-1ECh]@71
  _BYTE *v219; // [sp+68h] [bp-1E8h]@71
  int v220; // [sp+70h] [bp-1E0h]@75
  int v221; // [sp+74h] [bp-1DCh]@70
  int v222; // [sp+7Ch] [bp-1D4h]@55
  int v223; // [sp+84h] [bp-1CCh]@55
  int v224; // [sp+88h] [bp-1C8h]@55
  __int64 v225; // [sp+8Ch] [bp-1C4h]@55
  int v226; // [sp+98h] [bp-1B8h]@53
  int v227; // [sp+9Ch] [bp-1B4h]@53
  char v228; // [sp+A0h] [bp-1B0h]@47
  int v229; // [sp+214h] [bp-3Ch]@34
  int v230; // [sp+218h] [bp-38h]@32
  char v231; // [sp+21Fh] [bp-31h]@32
  int v232; // [sp+220h] [bp-30h]@32
  int v233; // [sp+224h] [bp-2Ch]@32

  v63 = a1;
  v64 = a2;
  v65 = a4;
  v66 = (unsigned int *)a3;
  *(_DWORD *)a1 = &off_271824C;
  v206 = (LevelSettings *)((char *)a1 + 4);
  AppPlatformListener::AppPlatformListener((LevelSettings *)((char *)a1 + 4));
  *(_DWORD *)v63 = &off_27188B4;
  *((_DWORD *)v63 + 1) = &off_271893C;
  _aeabi_memclr4((char *)v63 + 12, 48);
  *((_DWORD *)v63 + 15) = v64;
  *((_BYTE *)v63 + 64) = 0;
  *((_BYTE *)v63 + 65) = 1;
  *((_DWORD *)v63 + 19) = -1;
  *((_DWORD *)v63 + 18) = -1;
  *((_DWORD *)v63 + 20) = 0;
  *((_DWORD *)v63 + 21) = 0;
  *((_DWORD *)v63 + 24) = 0;
  *((_DWORD *)v63 + 25) = 0;
  *((_DWORD *)v63 + 26) = 1065353216;
  LODWORD(v67) = (char *)v63 + 104;
  *(_DWORD *)(LODWORD(v67) + 4) = 0;
  v68 = sub_21E6254(v67);
  *((_DWORD *)v63 + 23) = v68;
  if ( v68 == 1 )
  {
    *((_DWORD *)v63 + 28) = 0;
    v70 = (char *)v63 + 112;
  }
  else
    if ( v68 >= 0x40000000 )
      sub_21E57F4();
    v69 = 4 * v68;
    v70 = operator new(4 * v68);
    _aeabi_memclr4(v70, v69);
  *((_DWORD *)v63 + 22) = v70;
  *((_DWORD *)v63 + 29) = 0;
  *((_DWORD *)v63 + 30) = 0;
  *((_DWORD *)v63 + 31) = 0;
  v71 = *v66;
  *v66 = 0;
  *((_DWORD *)v63 + 32) = v71;
  LODWORD(v72) = operator new(0x24u);
  v73 = v72;
  v74 = COERCE_DOUBLE(__PAIR__(v71, SavedDataStorage::SavedDataStorage(v72)));
  *(_QWORD *)((char *)v63 + 132) = v73;
  LODWORD(v74) = (char *)v63 + 144;
  LevelData::LevelData(v74);
  *((_DWORD *)v63 + 130) = 0;
  *((_DWORD *)v63 + 131) = 0;
  *((_DWORD *)v63 + 132) = 1065353216;
  *((_DWORD *)v63 + 133) = 0;
  LODWORD(v75) = (char *)v63 + 528;
  v76 = sub_21E6254(v75);
  *((_DWORD *)v63 + 129) = v76;
  if ( v76 == 1 )
    v78 = (char *)v63 + 536;
    *((_DWORD *)v63 + 134) = 0;
    if ( v76 >= 0x40000000 )
    v77 = 4 * v76;
    v78 = operator new(4 * v76);
    _aeabi_memclr4(v78, v77);
  *((_DWORD *)v63 + 128) = v78;
  LODWORD(v79) = operator new(0x64u);
  v80 = LODWORD(v79);
  EntityDefinitionGroup::EntityDefinitionGroup(v79, a7);
  *((_DWORD *)v63 + 135) = v80;
  *((_DWORD *)v63 + 136) = 0;
  *((_DWORD *)v63 + 137) = 0;
  LODWORD(v81) = operator new(0x1Cu);
  v82 = (BehaviorFactory *)v81;
  BehaviorFactory::BehaviorFactory(v81);
  *((_DWORD *)v63 + 138) = v82;
  LODWORD(v83) = operator new(0x40u);
  v84 = v83;
  v85 = COERCE_DOUBLE(__PAIR__(a8, BehaviorTreeGroup::BehaviorTreeGroup(v83, v82)));
  *((_DWORD *)v63 + 139) = v84;
  *((_DWORD *)v63 + 142) = 0;
  *((_DWORD *)v63 + 143) = 0;
  *((_DWORD *)v63 + 144) = 1065353216;
  *((_DWORD *)v63 + 145) = 0;
  LODWORD(v85) = (char *)v63 + 576;
  v86 = sub_21E6254(v85);
  *((_DWORD *)v63 + 141) = v86;
  if ( v86 == 1 )
    v88 = (char *)v63 + 584;
    *((_DWORD *)v63 + 146) = 0;
    if ( v86 >= 0x40000000 )
    v87 = 4 * v86;
    v88 = operator new(4 * v86);
    _aeabi_memclr4(v88, v87);
  *((_DWORD *)v63 + 140) = v88;
  v89 = operator new(0xA38u);
  PortalForcer::PortalForcer((int)v89, v63);
  *((_DWORD *)v63 + 147) = v89;
  *((_DWORD *)v63 + 148) = 0;
  *((_DWORD *)v63 + 149) = 0;
  *((_DWORD *)v63 + 150) = 0;
  *((_DWORD *)v63 + 153) = 0;
  *((_DWORD *)v63 + 154) = 0;
  *((_DWORD *)v63 + 155) = 1065353216;
  *((_DWORD *)v63 + 156) = 0;
  LODWORD(v90) = (char *)v63 + 620;
  v91 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(v90)));
  *((_DWORD *)v63 + 152) = LODWORD(v91);
  if ( LODWORD(v91) == 1 )
    v93 = (char *)v63 + 628;
    *((_DWORD *)v63 + 157) = 0;
    if ( LODWORD(v91) >= 0x40000000 )
    v92 = 4 * LODWORD(v91);
    v93 = operator new(4 * LODWORD(v91));
    _aeabi_memclr4(v93, v92);
  *((_DWORD *)v63 + 151) = v93;
  *((_DWORD *)v63 + 160) = 0;
  *((_DWORD *)v63 + 161) = 0;
  *((_DWORD *)v63 + 162) = 1065353216;
  *((_DWORD *)v63 + 163) = 0;
  LODWORD(v91) = (char *)v63 + 648;
  v94 = sub_21E6254(v91);
  *((_DWORD *)v63 + 159) = v94;
  if ( v94 == 1 )
    v210 = (int)v63 + 72;
    v208 = (LevelSettings *)((char *)v63 + 144);
    v96 = (char *)v63 + 656;
    *((_DWORD *)v63 + 164) = 0;
    if ( v94 >= 0x40000000 )
    v95 = 4 * v94;
    v96 = operator new(4 * v94);
    _aeabi_memclr4(v96, v95);
  *((_DWORD *)v63 + 158) = v96;
  HitResult::HitResult((LevelSettings *)((char *)v63 + 664));
  v97 = LevelSettings::getSeed((LevelSettings *)a5);
  *((_DWORD *)v63 + 183) = v97;
  *((_DWORD *)v63 + 808) = 625;
  v98 = 0;
  v99 = 1;
  *((_BYTE *)v63 + 3236) = 0;
  *((_DWORD *)v63 + 810) = 0;
  *((_DWORD *)v63 + 184) = v97;
  do
    v100 = v97 ^ (v97 >> 30);
    v101 = (int)v63 + 4 * v98;
    v102 = v98++ + 1812433253 * v100;
    v97 = v99++ + 1812433253 * v100;
    *(_DWORD *)(v101 + 740) = v102 + 1;
  while ( v98 != 397 );
  *((_DWORD *)v63 + 808) = 624;
  *((_DWORD *)v63 + 811) = 398;
  v103 = sub_21E67AC((int)&Random::mRandomDevice);
  *((_DWORD *)v63 + 812) = v103;
  *((_DWORD *)v63 + 1437) = 625;
  *((_BYTE *)v63 + 5752) = 0;
  v104 = 3256;
  *((_DWORD *)v63 + 1439) = 0;
  v105 = 1;
  v106 = -397;
  *((_DWORD *)v63 + 813) = v103;
    v107 = v103 ^ (v103 >> 30);
    v108 = v106++ + 1812433253 * v107;
    v103 = v105++ + 1812433253 * v107;
    *(_DWORD *)((char *)v63 + v104) = v108 + 398;
    v104 += 4;
  while ( v106 );
  *((_DWORD *)v63 + 1437) = 624;
  *((_DWORD *)v63 + 1440) = 398;
  *((_BYTE *)v63 + 5780) = 0;
  *((_DWORD *)v63 + 1444) = 0;
  *((_DWORD *)v63 + 1443) = 0;
  *((_DWORD *)v63 + 1442) = 0;
  *((_DWORD *)v63 + 1441) = 0;
  _aeabi_memclr4((char *)v63 + 5784, 36);
  v109 = operator new(0x80u);
  Villages::Villages((int)v109, (int)v63);
  v110 = (int *)((char *)v63 + 5820);
  v209 = v110;
  *v110 = (int)v109;
  *((_BYTE *)v63 + 5824) = a6;
  *((_BYTE *)v63 + 5825) = 0;
  *((_DWORD *)v63 + 1465) = 0;
  *((_DWORD *)v63 + 1464) = 0;
  *((_BYTE *)v63 + 5864) = 0;
  *((_BYTE *)v63 + 5865) = 0;
  *((_DWORD *)v63 + 1467) = 0;
  *((_DWORD *)v63 + 1468) = 0;
  *((_DWORD *)v63 + 1462) = 0;
  *((_DWORD *)v63 + 1461) = 0;
  *((_DWORD *)v63 + 1460) = 0;
  *((_DWORD *)v63 + 1459) = 0;
  *((_DWORD *)v63 + 1458) = 0;
  *((_DWORD *)v63 + 1469) = &unk_28898CC;
  *((_DWORD *)v63 + 1472) = 0;
  *((_DWORD *)v63 + 1471) = 0;
  *((_DWORD *)v63 + 1470) = 0;
  v207 = (TaskGroup **)((char *)v63 + 5872);
  v205 = (WorkerPool **)((char *)v63 + 5868);
  v111 = operator new(0x20u);
  TickingAreasManager::TickingAreasManager((int)v111, (int)v63 + 560);
  v112 = (int *)((char *)v63 + 5896);
  v211 = v112;
  *v112 = (int)v111;
  *((_DWORD *)v63 + 1477) = 0;
  *((_DWORD *)v63 + 1478) = 0;
  *((_DWORD *)v63 + 1479) = 1065353216;
  *((_DWORD *)v63 + 1480) = 0;
  LODWORD(v113) = (char *)v63 + 5916;
  v114 = sub_21E6254(v113);
  v115 = (int *)v65;
  *((_DWORD *)v63 + 1476) = v114;
  if ( v114 == 1 )
    HIDWORD(v118) = 0;
    *((_DWORD *)v63 + 1481) = 0;
    v117 = (char *)v63 + 5924;
    if ( v114 >= 0x40000000 )
    v116 = 4 * v114;
    v117 = operator new(4 * v114);
    _aeabi_memclr4(v117, v116);
  *((_DWORD *)v63 + 1475) = v117;
  *((_DWORD *)v63 + 1484) = 0;
  *((_DWORD *)v63 + 1485) = 0;
  *((_DWORD *)v63 + 1486) = 1065353216;
  *((_DWORD *)v63 + 1487) = 0;
  LODWORD(v118) = (char *)v63 + 5944;
  v119 = sub_21E6254(v118);
  *((_DWORD *)v63 + 1483) = v119;
  if ( v119 == 1 )
    HIDWORD(v122) = 0;
    *((_DWORD *)v63 + 1488) = 0;
    v121 = (char *)v63 + 5952;
    if ( v119 >= 0x40000000 )
    v120 = 4 * v119;
    v121 = operator new(4 * v119);
    _aeabi_memclr4(v121, v120);
  *((_DWORD *)v63 + 1482) = v121;
  *((_DWORD *)v63 + 1491) = 0;
  *((_DWORD *)v63 + 1492) = 0;
  *((_DWORD *)v63 + 1493) = 1065353216;
  *((_DWORD *)v63 + 1494) = 0;
  LODWORD(v122) = (char *)v63 + 5972;
  v123 = sub_21E6254(v122);
  *((_DWORD *)v63 + 1490) = v123;
  if ( v123 == 1 )
    HIDWORD(v126) = 0;
    *((_DWORD *)v63 + 1495) = 0;
    v125 = (char *)v63 + 5980;
    if ( v123 >= 0x40000000 )
    v124 = 4 * v123;
    v125 = operator new(4 * v123);
    _aeabi_memclr4(v125, v124);
  *((_DWORD *)v63 + 1489) = v125;
  *((_BYTE *)v63 + 5984) = 0;
  *((_DWORD *)v63 + 1497) = a7;
  *((_DWORD *)v63 + 1498) = a9;
  *((_DWORD *)v63 + 1499) = a10;
  *((_DWORD *)v63 + 1501) = -1;
  *((_DWORD *)v63 + 1500) = -1;
  *((_BYTE *)v63 + 6008) = 0;
  *((_DWORD *)v63 + 1505) = 0;
  *((_DWORD *)v63 + 1506) = 0;
  *((_DWORD *)v63 + 1507) = 1065353216;
  LODWORD(v126) = (char *)v63 + 6028;
  *((_DWORD *)v63 + 1508) = 0;
  v127 = sub_21E6254(v126);
  *((_DWORD *)v63 + 1504) = v127;
  if ( v127 == 1 )
    v129 = (char *)v63 + 6036;
    *((_DWORD *)v63 + 1509) = 0;
    if ( v127 >= 0x40000000 )
    v128 = 4 * v127;
    v129 = operator new(4 * v127);
    _aeabi_memclr4(v129, v128);
  *((_DWORD *)v63 + 1503) = v129;
  *((_DWORD *)v63 + 1510) = 0;
  v130 = (Scheduler *)Scheduler::singleton((Scheduler *)0x1798);
  v232 = 1;
  v231 = 0;
  v230 = 4;
  std::make_unique<WorkerPool,Scheduler &,char const(&)[6],int,bool,OSThreadPriority>(
    &v233,
    v130,
    "Level",
    &v232,
    &v231,
    &v230);
  v131 = v233;
  v233 = 0;
  v132 = *v205;
  *v205 = (WorkerPool *)v131;
  if ( v132 )
    v133 = WorkerPool::~WorkerPool(v132);
    operator delete((void *)v133);
  v134 = (int)*v205;
  std::make_unique<TaskGroup,WorkerPool &,char const(&)[12]>(&v229, v134, "Level tasks");
  v135 = v229;
  v229 = 0;
  v136 = *v207;
  *v207 = (TaskGroup *)v135;
  if ( v136 )
    v137 = TaskGroup::~TaskGroup(v136);
    operator delete((void *)v137);
  v138 = *((_DWORD *)v63 + 135);
  v139 = operator new(0x380u);
  Spawner::Spawner((int)v139, (int)v63);
  v141 = (void *)*((_DWORD *)v63 + 136);
  *((_DWORD *)v63 + 136) = v139;
  if ( v141 )
    operator delete(v141);
  EntityFactory::setDefinitionGroup(*((EntityFactory **)v63 + 135), v140);
  v142 = (ProjectileFactory *)operator new(4u);
  ProjectileFactory::ProjectileFactory(v142, v63);
  v143 = (void *)*((_DWORD *)v63 + 137);
  *((_DWORD *)v63 + 137) = v142;
  if ( v143 )
    operator delete(v143);
  AppPlatformListener::initListener(v206, 2.0);
  if ( !SavedDataStorage::loadAndSet(*((_DWORD *)v63 + 33), *v209, (int **)&Villages::VILLAGE_FILE_ID) )
    SavedDataStorage::set(*((_DWORD *)v63 + 33), (int **)&Villages::VILLAGE_FILE_ID, *v209);
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v144 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v144 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (**)(void))(**(_DWORD **)v144 + 260))();
  if ( a6 || !(*(int (**)(void))(**((_DWORD **)v63 + 32) + 16))() )
    v145 = LevelSettings::getGenerator((LevelSettings *)a5);
    v146 = LevelSettings::getDefaultSpawn((LevelSettings *)a5);
    v147 = LevelSettings::hasAchievementsDisabled((LevelSettings *)a5);
    v148 = LevelSettings::isEduWorld((LevelSettings *)a5);
    _R11 = LevelSettings::getRainLevel((LevelSettings *)a5);
    _R0 = LevelSettings::getLightningLevel((LevelSettings *)a5);
    __asm
    {
      VMOV            S0, R11
      VMOV            S2, R0
      VSTR            S0, [SP,#0x250+var_244]
      VSTR            S2, [SP,#0x250+var_240]
    }
    LevelData::LevelData((int)&v228, a5, (int)v115, *(float *)&v145, *(float *)&v146, v147, v148, v203, v204);
    LevelData::operator=((int)v208, (int)&v228);
    LevelData::~LevelData((LevelData *)&v228);
    LOBYTE(v145) = LevelSettings::getImmutableWorld((LevelSettings *)a5);
    *(_BYTE *)(LevelData::getAdventureSettings(v208) + 2) = v145;
  v154 = LevelData::getSpawn(v208);
  if ( !a6 )
    v155 = *((_DWORD *)v154 + 1);
    _ZF = v155 == 256;
    if ( v155 != 256 )
      _ZF = v155 == 128;
    if ( _ZF )
      v157 = *((_DWORD *)v63 + 32);
      v158 = *(void (__fastcall **)(int *, int, int *))(*(_DWORD *)v157 + 56);
      sub_21E94B4((void **)&v226, "LevelSpawnWasFixed");
      v158(&v227, v157, &v226);
      v159 = (void *)(v226 - 12);
      if ( (int *)(v226 - 12) != &dword_28898C0 )
      {
        v195 = (unsigned int *)(v226 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v196 = __ldrex(v195);
          while ( __strex(v196 - 1, v195) );
        }
        else
          v196 = (*v195)--;
        if ( v196 <= 0 )
          j_j_j_j__ZdlPv_9(v159);
      }
      v160 = v227;
      if ( !*(_DWORD *)(v227 - 12) )
        HIDWORD(v161) = *((_DWORD *)v154 + 2);
        v224 = *(_DWORD *)v154;
        LODWORD(v161) = 0x7FFF;
        v225 = v161;
        LevelData::setSpawn(v208, (const BlockPos *)&v224);
        v162 = *((_DWORD *)v63 + 32);
        v163 = *(void (__fastcall **)(int, int *, int *))(*(_DWORD *)v162 + 36);
        sub_21E94B4((void **)&v223, "LevelSpawnWasFixed");
        sub_21E94B4((void **)&v222, "True");
        v163(v162, &v223, &v222);
        v164 = (void *)(v222 - 12);
        if ( (int *)(v222 - 12) != &dword_28898C0 )
          v199 = (unsigned int *)(v222 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v200 = __ldrex(v199);
            while ( __strex(v200 - 1, v199) );
          }
          else
            v200 = (*v199)--;
          if ( v200 <= 0 )
            j_j_j_j__ZdlPv_9(v164);
        v165 = (void *)(v223 - 12);
        if ( (int *)(v223 - 12) != &dword_28898C0 )
          v201 = (unsigned int *)(v223 - 4);
              v202 = __ldrex(v201);
            while ( __strex(v202 - 1, v201) );
            v202 = (*v201)--;
          if ( v202 <= 0 )
            j_j_j_j__ZdlPv_9(v165);
        v160 = v227;
      v166 = (void *)(v160 - 12);
      if ( (int *)(v160 - 12) != &dword_28898C0 )
        v197 = (unsigned int *)(v160 - 4);
            v198 = __ldrex(v197);
          while ( __strex(v198 - 1, v197) );
          v198 = (*v197)--;
        if ( v198 <= 0 )
          j_j_j_j__ZdlPv_9(v166);
  v167 = LevelSettings::forceGameType((LevelSettings *)a5);
  LevelData::setForceGameType(v208, v167);
  if ( LevelData::getForceGameType(v208) == 1 )
    v168 = LevelSettings::getGameType((LevelSettings *)a5);
    LevelData::setGameType((int)v208, v168);
  if ( LevelData::achievementsWillBeDisabledOnLoad(v208) == 1 )
    LevelData::disableAchievements(v208);
  if ( LevelSettings::shouldOverrideSavedSettings((LevelSettings *)a5) == 1 )
    LevelSettings::overrideSavedSettings((LevelSettings *)a5, v208);
  if ( !SavedDataStorage::loadAndSet(
          *((_DWORD *)v63 + 33),
          *((_DWORD *)v63 + 147),
          (int **)&PortalForcer::PORTAL_FILE_ID) )
    SavedDataStorage::set(*((_DWORD *)v63 + 33), (int **)&PortalForcer::PORTAL_FILE_ID, *((_DWORD *)v63 + 147));
  v169 = LevelData::getWorldStartCount(v208);
  *(_DWORD *)v210 = 0;
  *(_DWORD *)(v210 + 4) = v169;
  LevelData::recordStartUp(v208);
  v170 = LevelData::setLevelName((int)v208, v115);
  Biome::ResetInstanceData((Biome *)v170);
  v172 = (Biome *)*((_DWORD *)v63 + 32);
  if ( v172 )
    Biome::LoadInstanceData(v172, v171);
  v173 = (Biome *)LevelData::getSeed(v208);
  Biome::refreshBiomes(v173, v174);
  v175 = *((_DWORD *)v63 + 32);
  if ( v175 )
    (*(void (__fastcall **)(int *))(*(_DWORD *)v175 + 84))(&v221);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v63 + 1469,
      &v221);
    v176 = (void *)(v221 - 12);
    if ( (int *)(v221 - 12) != &dword_28898C0 )
      v191 = (unsigned int *)(v221 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v192 = __ldrex(v191);
        while ( __strex(v192 - 1, v191) );
      else
        v192 = (*v191)--;
      if ( v192 <= 0 )
        j_j_j_j__ZdlPv_9(v176);
    (*(void (__fastcall **)(_BYTE **))(**((_DWORD **)v63 + 32) + 8))(&v218);
    v177 = (int)v218;
    if ( v219 != v218 )
      v178 = 0;
      v179 = -1431655765 * ((v219 - v218) >> 2);
      while ( 1 )
        v180 = (const CompoundTag *)(v177 + v178);
        v182 = *(_QWORD *)(v177 + v178 + 4);
        v181 = *(_QWORD *)(v177 + v178 + 4) >> 32;
        v213 = &off_26E91B8;
        v214 = v182;
        if ( !v181 )
          v181 = *(_DWORD *)(v220 - 12);
        v215 = v181;
        v216 = &v220;
        v217 = v180;
        v183 = *v211;
        (*(void (__fastcall **)(int *))(**((_DWORD **)v63 + 32) + 12))(&v212);
        TickingAreasManager::loadArea(v183, v180, (PendingArea **)&v212);
        if ( v212 )
          (*(void (**)(void))(*(_DWORD *)v212 + 4))();
        --v179;
        v212 = 0;
        if ( !v179 )
          break;
        v178 += 12;
        v177 = (int)v218;
    v184 = (void *)(v220 - 12);
    if ( (int *)(v220 - 12) != &dword_28898C0 )
      v193 = (unsigned int *)(v220 - 4);
          v194 = __ldrex(v193);
        while ( __strex(v194 - 1, v193) );
        v194 = (*v193)--;
      if ( v194 <= 0 )
        j_j_j_j__ZdlPv_9(v184);
    v186 = v219;
    v185 = v218;
    if ( v218 != v219 )
      do
        v189 = (int *)(*(_DWORD *)v185 - 12);
        if ( v189 != &dword_28898C0 )
          v187 = (unsigned int *)(*(_DWORD *)v185 - 4);
              v188 = __ldrex(v187);
            while ( __strex(v188 - 1, v187) );
            v188 = (*v187)--;
          if ( v188 <= 0 )
            j_j_j_j__ZdlPv_9(v189);
        v185 = (char *)v185 + 12;
      while ( v185 != v186 );
      v185 = v218;
    if ( v185 )
      operator delete(v185);
  if ( !*((_BYTE *)v63 + 5824) )
    Level::createPhotoStorage(v63);
  Level::_loadAutonomousEntities(v63);
  return v63;
}


void __fastcall Level::_handleChangeDimensionRequests(Level *this)
{
  Level *v1; // r10@1
  int v2; // r0@1
  bool v3; // zf@1
  int v4; // r6@4
  char *v5; // r9@4
  __int64 v6; // kr00_8@6
  __int64 v7; // r4@7
  int i; // r8@8
  int v9; // r0@11
  char *v10; // r7@19
  signed int v11; // r9@19
  signed int v12; // r4@19
  unsigned int v13; // r0@19
  unsigned int v14; // r1@21
  unsigned int v15; // r5@21
  signed int v16; // r9@35
  unsigned int v17; // r0@35
  unsigned int v18; // r1@37
  unsigned int *v19; // r11@47
  __int64 v20; // kr08_8@48
  int v21; // r4@48
  int *v22; // r2@48
  int v23; // r8@49
  int v24; // [sp+4h] [bp-2Ch]@5
  char *ptr; // [sp+8h] [bp-28h]@4

  v1 = this;
  v2 = *((_DWORD *)this + 154);
  v3 = v2 == 0;
  if ( v2 )
    v3 = *((_BYTE *)v1 + 6008) == 0;
  if ( !v3 )
  {
    v4 = *((_DWORD *)v1 + 153);
    v5 = 0;
    ptr = 0;
    if ( v4 )
    {
      v5 = 0;
      v24 = 0;
      ptr = 0;
      do
      {
        v6 = *(_QWORD *)(v4 + 4);
        if ( *(_QWORD *)(HIDWORD(v6) + 4) >> 32 != (unsigned int)*(_QWORD *)(HIDWORD(v6) + 4) )
        {
          v7 = *(_QWORD *)Entity::getUniqueID((Entity *)v6);
          if ( ((unsigned int)v7 & HIDWORD(v7)) != -1 )
          {
            for ( i = *((_DWORD *)v1 + 142); i; i = *(_DWORD *)i )
            {
              v9 = Dimension::fetchEntity(*(_DWORD *)(i + 8), 0, v7, 0);
              if ( v9 )
              {
                if ( Entity::hasCategory(v9, 1) != 1 )
                  break;
                Player::fireDimensionChangedEvent((Entity *)v6, *(_DWORD *)(HIDWORD(v6) + 8));
                if ( Level::_playerChangeDimension((int)v1, v6, SHIDWORD(v6)) != 1 )
                  goto LABEL_33;
                if ( v5 != (char *)v24 )
                {
                  *(_DWORD *)v5 = v6;
                  v5 += 4;
                }
                v10 = 0;
                v16 = v5 - ptr;
                v12 = v16 >> 2;
                v17 = v16 >> 2;
                if ( !(v16 >> 2) )
                  v17 = 1;
                v18 = v17 + (v16 >> 2);
                v15 = v17 + (v16 >> 2);
                if ( 0 != v18 >> 30 )
                  v15 = 0x3FFFFFFF;
                if ( v18 < v17 )
                if ( v15 )
                  if ( v15 >= 0x40000000 )
                    sub_21E57F4();
                  v10 = (char *)operator new(4 * v15);
                goto LABEL_28;
              }
            }
          }
        }
        if ( !Level::isPlayerSuspended(v1, (Player *)v6) )
          if ( v5 == (char *)v24 )
            v10 = 0;
            v11 = v5 - ptr;
            v12 = v11 >> 2;
            v13 = v11 >> 2;
            if ( !(v11 >> 2) )
              v13 = 1;
            v14 = v13 + (v11 >> 2);
            v15 = v13 + (v11 >> 2);
            if ( 0 != v14 >> 30 )
              v15 = 0x3FFFFFFF;
            if ( v14 < v13 )
            if ( v15 )
              if ( v15 >= 0x40000000 )
                sub_21E57F4();
              v10 = (char *)operator new(4 * v15);
LABEL_28:
            *(_DWORD *)(HIDWORD(v6) + 4 * v12) = v6;
            if ( v12 )
              _aeabi_memmove4(v10, ptr);
            v5 = &v10[4 * v12 + 4];
            if ( ptr )
              operator delete(ptr);
            v24 = (int)&v10[4 * v15];
            ptr = v10;
          else
            *(_DWORD *)v5 = v6;
            v5 += 4;
LABEL_33:
        v4 = *(_DWORD *)v4;
      }
      while ( v4 );
    }
    if ( ptr != v5 )
      v19 = (unsigned int *)ptr;
        v20 = *(_QWORD *)((char *)v1 + 604);
        v21 = *v19 % HIDWORD(v20);
        v22 = *(int **)(v20 + 4 * v21);
        if ( v22 )
          v23 = *v22;
          while ( *v19 != *(_DWORD *)(v23 + 4) )
            if ( *(_DWORD *)v23 )
              v22 = (int *)v23;
              v23 = *(_DWORD *)v23;
              if ( *(_DWORD *)(v20 + 4) % HIDWORD(v20) == v21 )
                continue;
            goto LABEL_56;
          if ( v22 )
            std::_Hashtable<Player *,std::pair<Player * const,std::unique_ptr<ChangeDimensionRequest,std::default_delete<ChangeDimensionRequest>>>,std::allocator<std::pair<Player * const,std::unique_ptr<ChangeDimensionRequest,std::default_delete<ChangeDimensionRequest>>>>,std::__detail::_Select1st,std::equal_to<Player *>,std::hash<Player *>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_erase(
              (int)v1 + 604,
              v21,
              v22,
              *v22);
LABEL_56:
        ++v19;
      while ( (char *)v19 != v5 );
    if ( ptr )
      j_j_j__ZdlPv_6(ptr);
  }
}


int __fastcall Level::getFixedInventorySlotCount(Level *this)
{
  int v1; // r0@1

  v1 = LevelData::getFixedInventory((Level *)((char *)this + 144));
  return (*(int (**)(void))(*(_DWORD *)v1 + 44))();
}


void __fastcall Level::onPlayerDeath(Level *this, Player *a2, const EntityDamageSource *a3)
{
  Level::onPlayerDeath(this, a2, a3);
}


int __fastcall Level::setTime(Level *this, int _R1)
{
  _R2 = 91625969;
  __asm { SMMUL.W         R2, R1, R2 }
  return j_j_j__ZN9LevelData7setTimeEi(
           (Level *)((char *)this + 144),
           _R1 - 192000 * (((signed int)_R2 >> 12) + (_R2 >> 31)));
}


void __fastcall Level::getScreenshotsFolder(Level *this, int a2)
{
  int v2; // r4@1
  int *v3; // r5@1
  int v4; // r0@1
  int *v5; // r0@2
  void *v6; // r0@4
  int *v7; // r0@6
  int *v8; // r0@6
  const void **v9; // r0@6
  const void **v10; // r0@6
  char *v11; // r0@6
  void *v12; // r0@7
  unsigned int *v13; // r2@9
  signed int v14; // r1@11
  unsigned int *v15; // r2@13
  signed int v16; // r1@15
  int v17; // [sp+0h] [bp-30h]@6
  char *v18; // [sp+4h] [bp-2Ch]@6

  v2 = a2;
  v3 = (int *)this;
  v4 = *(_DWORD *)(a2 + 128);
  if ( v4 )
  {
    v5 = (int *)(*(int (**)(void))(*(_DWORD *)v4 + 28))();
    sub_21E8AF4(v3, v5);
    sub_21E7408((const void **)v3, "/screenshots/", 0xDu);
  }
  else
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v6 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v6 = &ServiceLocator<AppPlatform>::mDefaultService;
    v7 = (int *)(*(int (**)(void))(**(_DWORD **)v6 + 264))();
    v8 = sub_21E8AF4(&v17, v7);
    sub_21E7408((const void **)v8, "/screenshots/", 0xDu);
    v9 = sub_21E72F0((const void **)&v17, (const void **)(v2 + 5876));
    v18 = (char *)*v9;
    *v9 = &unk_28898CC;
    v10 = sub_21E7408((const void **)&v18, "/", 1u);
    *v3 = (int)*v10;
    *v10 = &unk_28898CC;
    v11 = v18 - 12;
    if ( (int *)(v18 - 12) != &dword_28898C0 )
    {
      v13 = (unsigned int *)(v18 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      }
      else
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    }
    v12 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v17 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
}


void __fastcall Level::~Level(Level *this)
{
  Level::~Level(this);
}


signed int __fastcall Level::removeEntityReferences(Level *this, Entity *a2, int a3)
{
  Level *v3; // r5@1
  signed int result; // r0@1
  Entity *v5; // r4@1
  int v6; // r2@10
  Entity **v7; // r0@10
  int v8; // r3@10
  int v9; // r6@11
  bool v10; // zf@12
  Entity **v11; // r3@12
  Entity *v12; // r1@15
  bool v13; // zf@15
  int v14; // r3@20
  Dimension *v15; // r0@31
  __int64 v16; // r0@31
  int *v17; // r5@31
  int *i; // r6@31
  __int64 v19; // kr00_8@31
  int v20; // t1@32
  int v21; // [sp+0h] [bp-18h]@31

  v3 = this;
  result = *((_BYTE *)this + 5984);
  v5 = a2;
  if ( result )
    return result;
  if ( *((Entity **)v3 + 174) == a2 )
  {
    *((_DWORD *)v3 + 166) = 3;
    *((_DWORD *)v3 + 174) = 0;
  }
  if ( !a3 )
    if ( Entity::isRide(a2) == 1 )
      Entity::removeAllRiders(v5, 1, 0);
    if ( Entity::isRiding(v5) == 1 )
      (*(void (__fastcall **)(Entity *, signed int, signed int))(*(_DWORD *)v5 + 596))(v5, 1, 1);
  if ( Entity::isGlobal(v5) == 1 )
    v6 = *((_DWORD *)v3 + 1446);
    v7 = (Entity **)*((_DWORD *)v3 + 1447);
    v8 = ((signed int)v7 - v6) >> 4;
    if ( v8 >= 1 )
    {
      v9 = v8 + 1;
      do
      {
        v10 = *(_DWORD *)v6 == (_DWORD)v5;
        v11 = (Entity **)v6;
        if ( *(Entity **)v6 != v5 )
        {
          v11 = (Entity **)(v6 + 4);
          v10 = *(_DWORD *)(v6 + 4) == (_DWORD)v5;
        }
        if ( v10 )
          goto LABEL_29;
        v11 = (Entity **)(v6 + 8);
        v12 = *(Entity **)(v6 + 8);
        v13 = v12 == v5;
        if ( v12 != v5 )
          v11 = (Entity **)(v6 + 12);
          v13 = *(_DWORD *)(v6 + 12) == (_DWORD)v5;
        if ( v13 )
        --v9;
        v6 += 16;
      }
      while ( v9 > 1 );
    }
    if ( 1 == ((signed int)v7 - v6) >> 2 )
      v11 = (Entity **)v6;
    else
      v14 = ((signed int)v7 - v6) >> 2;
      if ( v14 == 2 )
      else
        if ( v14 != 3 )
          goto LABEL_31;
        if ( *(Entity **)v6 == v5 )
        v11 = (Entity **)(v6 + 4);
      if ( *v11 == v5 )
        goto LABEL_29;
      ++v11;
    if ( *v11 == v5 )
LABEL_29:
      if ( v11 != v7 )
        *v11 = *(v7 - 1);
        *((_DWORD *)v3 + 1447) -= 4;
      goto LABEL_31;
LABEL_31:
  v15 = (Dimension *)Entity::getDimension(v5);
  Dimension::_unregisterEntity(v15, v5);
  Entity::getRuntimeID((Entity *)&v21, (int)v5);
  LODWORD(v16) = (char *)v3 + 88;
  result = std::_Hashtable<EntityRuntimeID,std::pair<EntityRuntimeID const,EntityUniqueID>,std::allocator<std::pair<EntityRuntimeID const,EntityUniqueID>>,std::__detail::_Select1st,std::equal_to<EntityRuntimeID>,std::hash<EntityRuntimeID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_erase(v16);
  v19 = *(_QWORD *)((char *)v3 + 116);
  v17 = (int *)(*(_QWORD *)((char *)v3 + 116) >> 32);
  for ( i = (int *)v19; v17 != i; result = (*(int (**)(void))(*(_DWORD *)v20 + 64))() )
    v20 = *i;
    ++i;
  return result;
}


int __fastcall Level::setIsExporting(int result, bool a2)
{
  *(_BYTE *)(result + 5825) = a2;
  return result;
}


int __fastcall Level::handleSoundEvent(int a1, int a2, int a3)
{
  int v3; // r7@1
  int v4; // r6@1
  __int64 v5; // r0@1
  int v6; // r8@1
  unsigned int v7; // r4@2

  v3 = a1;
  v4 = a2;
  v5 = *(_QWORD *)(a1 + 116);
  v6 = a3;
  if ( HIDWORD(v5) != (_DWORD)v5 )
  {
    v7 = 0;
    do
    {
      (*(void (__cdecl **)(_DWORD, int, int))(**(_DWORD **)(v5 + 4 * v7) + 92))(*(_DWORD *)(v5 + 4 * v7), v4, v6);
      v5 = *(_QWORD *)(v3 + 116);
      ++v7;
    }
    while ( v7 < (HIDWORD(v5) - (signed int)v5) >> 2 );
  }
  return v5;
}


int __fastcall Level::onNewChunk(Level *this, BlockSource *a2, LevelChunk *a3)
{
  LevelChunk *v3; // r4@1
  Level *v4; // r10@1
  BlockSource *v5; // r11@1
  int *v6; // r9@1
  int result; // r0@1
  int *v8; // r5@2
  const BlockPos *v9; // r6@2
  int v10; // r7@3
  int v11; // r1@5
  void (__fastcall *v12)(Level *, BlockSource *, int *); // r3@5
  int v13; // r0@7
  signed int v14; // r2@8
  int v15; // r7@9
  int *v16; // r6@9
  int v17; // r1@10
  int v18; // r0@10
  _DWORD *v19; // r6@14
  int v20; // r0@14
  int *v21; // r5@19 OVERLAPPED
  int *v22; // r6@19 OVERLAPPED
  int v23; // t1@20
  int v24; // [sp+4h] [bp-34h]@5
  char v25; // [sp+8h] [bp-30h]@2

  v3 = a3;
  v4 = this;
  v5 = a2;
  LevelChunk::onLoaded(a3, a2);
  v6 = (int *)*((_DWORD *)v4 + 1452);
  result = 5812;
  if ( v6 != *((int **)v4 + 1453) )
  {
    v8 = (int *)((char *)v4 + 5812);
    v9 = (const BlockPos *)&v25;
    do
    {
      v10 = LevelChunk::getDimensionId(v3);
      if ( v10 != (*(int (**)(void))(*(_DWORD *)*v6 + 524))()
        || (BlockPos::BlockPos((int)v9, *v6 + 72), LevelChunk::isBlockInChunk(v3, v9) != 1) )
      {
        ++v6;
      }
      else
        v11 = *v6;
        v12 = *(void (__fastcall **)(Level *, BlockSource *, int *))(*(_DWORD *)v4 + 52);
        *v6 = 0;
        v24 = v11;
        v12(v4, v5, &v24);
        if ( v24 )
          (*(void (**)(void))(*(_DWORD *)v24 + 32))();
        v24 = 0;
        v13 = (int)(v6 + 1);
        if ( v6 + 1 != (int *)*v8 )
        {
          v14 = *v8 - v13;
          v13 = *v8;
          if ( v14 >= 1 )
          {
            v15 = (v14 >> 2) + 1;
            v16 = v6;
            do
            {
              v17 = v16[1];
              v16[1] = 0;
              v18 = *v16;
              *v16 = v17;
              if ( v18 )
                (*(void (**)(void))(*(_DWORD *)v18 + 32))();
              --v15;
              ++v16;
            }
            while ( v15 > 1 );
            v13 = *v8;
          }
        }
        v19 = (_DWORD *)(v13 - 4);
        *v8 = v13 - 4;
        v20 = *(_DWORD *)(v13 - 4);
        if ( v20 )
          (*(void (**)(void))(*(_DWORD *)v20 + 32))();
        *v19 = 0;
        v9 = (const BlockPos *)&v25;
      result = *v8;
    }
    while ( v6 != (int *)*v8 );
  }
  for ( *(_QWORD *)&v21 = *(_QWORD *)((char *)v4 + 116); v22 != v21; result = (*(int (**)(void))(*(_DWORD *)v23 + 68))() )
    v23 = *v21;
    ++v21;
  return result;
}


char *__fastcall Level::addBossEventListener(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r8@1
  __int64 v4; // r0@1
  char *result; // r0@2
  void *v6; // r5@3
  unsigned int v7; // r2@3
  unsigned int v8; // r1@5
  unsigned int v9; // r6@5
  char *v10; // r7@11 OVERLAPPED
  char *v11; // r8@13
  int v12; // r8@15 OVERLAPPED

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 596);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v6 = *(void **)(v2 + 592);
    v7 = ((signed int)v4 - (signed int)v6) >> 2;
    if ( !v7 )
      v7 = 1;
    HIDWORD(v4) = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    v9 = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    if ( 0 != HIDWORD(v4) >> 30 )
      v9 = 0x3FFFFFFF;
    if ( v8 < v7 )
    if ( v9 )
    {
      if ( v9 >= 0x40000000 )
        sub_21E57F4();
      v10 = (char *)operator new(4 * v9);
      LODWORD(v4) = *(_QWORD *)(v2 + 592) >> 32;
      v6 = (void *)*(_QWORD *)(v2 + 592);
    }
    else
      v10 = 0;
    *(_DWORD *)&v10[v4 - (_DWORD)v6] = v3;
    v11 = &v10[v4 - (_DWORD)v6];
    if ( 0 != ((signed int)v4 - (signed int)v6) >> 2 )
      _aeabi_memmove4(v10, v6);
    v12 = (int)(v11 + 4);
    if ( v6 )
      operator delete(v6);
    result = &v10[4 * v9];
    *(_QWORD *)(v2 + 592) = *(_QWORD *)&v10;
    *(_DWORD *)(v2 + 600) = result;
  }
  else
    *(_DWORD *)v4 = v3;
    result = (char *)(*(_DWORD *)(v2 + 596) + 4);
    *(_DWORD *)(v2 + 596) = result;
  return result;
}


SavedDataStorage *__fastcall Level::setMultiplayerGame(Level *this, bool a2)
{
  Level *v2; // r4@1
  int v3; // r0@1
  int i; // r5@2
  SavedDataStorage *result; // r0@5

  v2 = this;
  LevelData::setMultiplayerGame((Level *)((char *)this + 144), a2);
  v3 = *((_DWORD *)v2 + 32);
  if ( v3 )
  {
    (*(void (**)(void))(*(_DWORD *)v3 + 24))();
    for ( i = *((_DWORD *)v2 + 1484); i; i = *(_DWORD *)i )
      MapItemSavedData::trySave(*(MapItemSavedData **)(i + 16), *((LevelStorage **)v2 + 32));
  }
  result = (SavedDataStorage *)*((_DWORD *)v2 + 33);
  if ( result )
    result = (SavedDataStorage *)j_j_j__ZN16SavedDataStorage4saveEv(result);
  return result;
}


SavedDataStorage *__fastcall Level::setPlatformBroadcast(Level *this, bool a2)
{
  Level *v2; // r4@1
  int v3; // r0@1
  int i; // r5@2
  SavedDataStorage *result; // r0@5

  v2 = this;
  LevelData::setPlatformBroadcast((Level *)((char *)this + 144), a2);
  v3 = *((_DWORD *)v2 + 32);
  if ( v3 )
  {
    (*(void (**)(void))(*(_DWORD *)v3 + 24))();
    for ( i = *((_DWORD *)v2 + 1484); i; i = *(_DWORD *)i )
      MapItemSavedData::trySave(*(MapItemSavedData **)(i + 16), *((LevelStorage **)v2 + 32));
  }
  result = (SavedDataStorage *)*((_DWORD *)v2 + 33);
  if ( result )
    result = (SavedDataStorage *)j_j_j__ZN16SavedDataStorage4saveEv(result);
  return result;
}


int __fastcall Level::savePlayers(Level *this)
{
  Level *v1; // r4@1
  int result; // r0@1
  _DWORD *v3; // r0@2
  int (__cdecl *v4)(_DWORD); // r3@2
  _DWORD *v5; // r0@2
  _DWORD *v6; // r5@2
  int v7; // r6@3
  bool v8; // zf@5
  _DWORD *v9; // [sp+0h] [bp-20h]@2
  int (__fastcall *v10)(void **, _DWORD **, int); // [sp+8h] [bp-18h]@2
  signed int (__fastcall *v11)(int); // [sp+Ch] [bp-14h]@2

  v1 = this;
  result = *((_DWORD *)this + 32);
  if ( result )
  {
    v3 = operator new(4u);
    *v3 = v1;
    v4 = (int (__cdecl *)(_DWORD))sub_1913040;
    v9 = v3;
    v10 = sub_1913040;
    v11 = sub_191302C;
    v5 = (_DWORD *)(*((_QWORD *)v1 + 3) >> 32);
    v6 = (_DWORD *)*((_QWORD *)v1 + 3);
    if ( v6 == v5 )
      goto LABEL_15;
    v7 = (int)(v5 - 1);
    do
    {
      if ( !v4 )
        sub_21E5F48();
      result = ((int (__fastcall *)(_DWORD **, _DWORD))v11)(&v9, *v6);
      v8 = v7 == (_DWORD)v6;
      v4 = (int (__cdecl *)(_DWORD))v10;
      if ( (_DWORD *)v7 != v6 )
      {
        result ^= 1u;
        ++v6;
        v8 = result == 1;
      }
    }
    while ( !v8 );
    if ( v10 )
LABEL_15:
      result = v4(&v9);
  }
  return result;
}


int __fastcall Level::forEachPlayer(int a1, int a2)
{
  int result; // r0@1
  _DWORD *v3; // r6@1
  __int64 v4; // kr00_8@1
  int v5; // r4@1
  int v6; // r5@2

  v4 = *(_QWORD *)(a1 + 24);
  result = *(_QWORD *)(a1 + 24) >> 32;
  v3 = (_DWORD *)v4;
  v5 = a2;
  if ( (_DWORD)v4 != result )
  {
    v6 = result - 4;
    do
    {
      if ( !*(_DWORD *)(v5 + 8) )
        sub_21E5F48();
      result = (*(int (__fastcall **)(int, _DWORD))(v5 + 12))(v5, *v3);
      if ( (_DWORD *)v6 == v3 )
        break;
      result ^= 1u;
      ++v3;
    }
    while ( result != 1 );
  }
  return result;
}


char *__fastcall Level::getLootTables(Level *this)
{
  return (char *)this + 6012;
}


PathFinder *__fastcall Level::findPath(Level *this, Entity *a2, Entity *a3, int a4, int a5, float a6, float a7, bool a8, bool a9, bool a10, int a11, int a12, bool a13)
{
  Entity *v13; // r5@1
  Level *v14; // r6@1
  int v15; // r4@1
  BlockSource *v16; // r0@1
  int v21; // ST08_4@1
  char v23; // [sp+14h] [bp-CCh]@1

  v13 = a3;
  v14 = this;
  v15 = a4;
  v16 = (BlockSource *)Entity::getRegion(a3);
  PathFinder::PathFinder((PathFinder *)&v23, v16, a8, a9, a10, a11, a12, a13);
  __asm
  {
    VLDR            S0, [SP,#0xE0+arg_8]
    VSTR            S0, [SP,#8]
  }
  PathFinder::findPath(v14, (Entity *)&v23, *(float *)&v13, v15, a5, a6, v21);
  return PathFinder::~PathFinder((PathFinder *)&v23);
}


_BYTE *__fastcall Level::createUniqueLevelID(Level *this, int a2)
{
  int v2; // r5@1
  Util *v3; // r4@1
  signed __int64 v4; // r0@1
  int v5; // r6@1
  _BYTE *v6; // r5@1
  _BYTE *v7; // r0@3
  _BYTE *result; // r0@6
  int v9; // [sp+0h] [bp-20h]@1
  int v10; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  v4 = getTimeSinceReboot();
  v5 = v4;
  v10 = getTimeMs() ^ HIDWORD(v4) ^ (v2 >> 31);
  v9 = v5 ^ v2;
  Util::base64_encode(v3, (const unsigned __int8 *)&v9, 8u, 1);
  v6 = *(_BYTE **)v3;
  if ( *(_DWORD *)(*(_DWORD *)v3 - 4) <= -1 )
  {
    v7 = *(_BYTE **)v3;
  }
  else
    sub_21E8010((const void **)v3);
    v6 = *(_BYTE **)v3;
    if ( *(_DWORD *)(*(_DWORD *)v3 - 4) < 0 )
    {
      v7 = *(_BYTE **)v3;
    }
    else
      sub_21E8010((const void **)v3);
  for ( result = &v7[*((_DWORD *)v7 - 3)]; result != v6; ++v6 )
    if ( *v6 == 47 )
      *v6 = 45;
  return result;
}


LevelSettings *__fastcall Level::Level(LevelSettings *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63)
{
  return Level::Level(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32,
           a33,
           a34,
           a35,
           a36,
           a37,
           a38,
           a39,
           a40,
           a41,
           a42,
           a43,
           a44,
           a45,
           a46,
           a47,
           a48,
           a49,
           a50,
           a51,
           a52,
           a53,
           a54,
           a55,
           a56,
           a57,
           a58,
           a59,
           a60,
           a61,
           a62,
           a63);
}


void __fastcall Level::explode(int this, int a2, int a3, int a4, void *a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, void *a13, int a14, void *a15)
{
  Level::explode((Level *)this, (BlockSource *)a2, (Entity *)a3, (const Vec3 *)a4, a5, a6, a7, *(float *)&a8);
}


int __fastcall Level::_saveAutonomousEntities(Level *this)
{
  Level *v1; // r9@1
  int result; // r0@1
  void *v3; // r4@2
  void *v4; // r8@2
  Entity **v5; // r6@2
  Entity **i; // r7@2
  void *v7; // r4@4
  int v8; // r6@8
  int j; // r5@8
  void *v10; // r4@9
  void *v11; // r0@14
  int v12; // r4@15
  void *v13; // r0@15
  unsigned int *v14; // r2@18
  signed int v15; // r1@20
  unsigned int *v16; // r2@22
  signed int v17; // r1@24
  int v18; // [sp+0h] [bp-48h]@2
  int v19; // [sp+8h] [bp-40h]@15
  void *v20; // [sp+Ch] [bp-3Ch]@12
  int v21; // [sp+14h] [bp-34h]@12
  void *v22; // [sp+18h] [bp-30h]@9
  void *v23; // [sp+1Ch] [bp-2Ch]@4

  v1 = this;
  result = *((_DWORD *)this + 32);
  if ( result )
  {
    v3 = operator new(0x1Cu);
    CompoundTag::CompoundTag((int)v3);
    v4 = operator new(0x14u);
    ListTag::ListTag((int)v4);
    v18 = (int)v3;
    v5 = (Entity **)*((_DWORD *)v1 + 1450);
    for ( i = (Entity **)*((_DWORD *)v1 + 1449); v5 != i; ++i )
    {
      if ( !Entity::isRemoved(*i) )
      {
        v7 = operator new(0x1Cu);
        CompoundTag::CompoundTag((int)v7);
        (*(void (**)(void))(*(_DWORD *)*i + 472))();
        v23 = v7;
        ListTag::add((int)v4, (int *)&v23);
        if ( v23 )
          (*(void (**)(void))(*(_DWORD *)v23 + 4))();
        v23 = 0;
      }
    }
    v8 = *((_DWORD *)v1 + 1453);
    for ( j = *((_DWORD *)v1 + 1452); v8 != j; v22 = 0 )
      v10 = operator new(0x1Cu);
      CompoundTag::CompoundTag((int)v10);
      (*(void (**)(void))(**(_DWORD **)j + 472))();
      v22 = v10;
      ListTag::add((int)v4, (int *)&v22);
      if ( v22 )
        (*(void (**)(void))(*(_DWORD *)v22 + 4))();
      j += 4;
    sub_21E94B4((void **)&v21, "AutonomousEntityList");
    v20 = v4;
    CompoundTag::put(v18, (const void **)&v21, (int *)&v20);
    if ( v20 )
      (*(void (**)(void))(*(_DWORD *)v20 + 4))();
    v20 = 0;
    v11 = (void *)(v21 - 12);
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v21 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      else
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    v12 = *((_DWORD *)v1 + 32);
    sub_21E94B4((void **)&v19, "AutonomousEntities");
    LevelStorage::saveData(v12, (int)&v19, v18);
    v13 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v19 - 4);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v18 + 4))(v18);
  }
  return result;
}


int __fastcall Level::setFinishedInitializing(int result)
{
  *(_BYTE *)(result + 6008) = 1;
  return result;
}


int __fastcall Level::handleLevelEvent(int a1)
{
  int v1; // r7@1
  __int64 v2; // r0@1
  unsigned int v3; // r4@2

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 116);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = 0;
    do
    {
      (*(void (**)(void))(**(_DWORD **)(v2 + 4 * v3) + 88))();
      v2 = *(_QWORD *)(v1 + 116);
      ++v3;
    }
    while ( v3 < (HIDWORD(v2) - (signed int)v2) >> 2 );
  }
  return v2;
}


int __fastcall Level::tickEntities(Level *this)
{
  Level *v1; // r10@1
  int i; // r4@1
  int v3; // r0@4
  Level *v4; // r4@5
  Level *v5; // r11@5
  unsigned int v6; // r8@5
  Entity *v7; // r5@6
  int v8; // r1@7
  Entity **v9; // r0@7
  int v10; // r2@7
  int v11; // r3@8
  bool v12; // zf@9
  Entity **v13; // r2@9
  Entity *v14; // r7@12
  bool v15; // zf@12
  int v16; // r2@17
  unsigned int v17; // r0@21
  __int64 v18; // kr00_8@21
  unsigned int v19; // r6@21
  unsigned int v20; // r4@21
  _DWORD *v21; // r0@21
  _DWORD *v22; // r10@22
  int v23; // r7@22
  _DWORD *v24; // r11@24
  Dimension *v25; // r0@26
  bool v26; // zf@28
  BlockSource *v27; // r0@42
  BlockSource *v28; // r0@42
  int v29; // r1@45
  int *v30; // r9@46
  Level *v31; // r6@46
  int v32; // r7@46
  int v33; // r5@47
  int v34; // r1@48
  int v35; // r0@48
  int v36; // r2@48
  int v37; // r3@49
  bool v38; // zf@50
  _DWORD *v39; // r2@50
  int v40; // r4@53
  bool v41; // zf@53
  int v42; // r2@58
  int result; // r0@72
  int *v44; // r9@72
  int v45; // r5@72
  int v46; // r1@72
  int v47; // r1@73
  signed int v48; // r2@74
  signed int v49; // r2@75
  signed int v50; // r2@76
  signed int v51; // r2@77
  int v52; // r1@80
  signed int v53; // r1@82
  signed int v54; // r1@84
  signed int v55; // r1@86
  int v56; // r5@94
  int v57; // r4@94
  signed int v58; // r2@97
  int v59; // r7@97
  int v60; // r1@97
  int v61; // r2@98
  int v62; // r0@98
  int *v63; // r6@104
  int v64; // [sp+4h] [bp-34h]@5
  Level *v65; // [sp+8h] [bp-30h]@1
  int v66; // [sp+Ch] [bp-2Ch]@5
  _BYTE *v67; // [sp+10h] [bp-28h]@5

  v1 = this;
  v65 = this;
  for ( i = *((_DWORD *)this + 1477); i; i = *(_DWORD *)i )
    (***(void (****)(void))(i + 4))();
  v3 = *((_DWORD *)v1 + 1446);
  if ( *((_DWORD *)v1 + 1447) != v3 )
  {
    v4 = (Level *)((char *)v1 + 5784);
    v5 = (Level *)((char *)v1 + 5788);
    v6 = 0;
    v64 = (int)v1 + 5788;
    v66 = (int)v1 + 5784;
    v67 = (char *)v1 + 5824;
    do
    {
      v7 = *(Entity **)(v3 + 4 * v6);
      if ( Entity::isRemoved(*(Entity **)(v3 + 4 * v6)) != 1 )
      {
        *((_DWORD *)v7 + 24) = *((_DWORD *)v7 + 18);
        *((_DWORD *)v7 + 25) = *((_DWORD *)v7 + 19);
        *((_DWORD *)v7 + 26) = *((_DWORD *)v7 + 20);
        *((_QWORD *)v7 + 16) = *((_QWORD *)v7 + 15);
        v17 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v7 + 524))(v7);
        v18 = *((_QWORD *)v1 + 70);
        v19 = v17;
        v20 = v17 % (unsigned int)(*((_QWORD *)v1 + 70) >> 32);
        v21 = *(_DWORD **)(v18 + 4 * v20);
        if ( v21 )
        {
          v22 = (_DWORD *)*v21;
          v23 = *(_DWORD *)(*v21 + 4);
          while ( v23 != v19 )
          {
            v24 = (_DWORD *)*v22;
            if ( *v22 )
            {
              v23 = v24[1];
              v21 = v22;
              v22 = (_DWORD *)*v22;
              if ( v24[1] % HIDWORD(v18) == v20 )
                continue;
            }
            v1 = v65;
            v5 = (Level *)v64;
            v25 = 0;
            v4 = (Level *)v66;
            goto LABEL_42;
          }
          v26 = v21 == 0;
          v4 = (Level *)v66;
          if ( v21 )
            v21 = (_DWORD *)*v21;
            v26 = v21 == 0;
          if ( v26 )
          else
            v25 = (Dimension *)v21[2];
          v1 = v65;
          v5 = (Level *)v64;
        }
        else
          v25 = 0;
LABEL_42:
        v27 = (BlockSource *)Dimension::getBlockSourceDEPRECATEDUSEPLAYERREGIONINSTEAD(v25);
        Entity::setRegion(v7, v27);
        v28 = (BlockSource *)Entity::getRegion(v7);
        Entity::tick(v7, v28);
        if ( !*v67 )
          (*(void (__fastcall **)(Entity *))(*(_DWORD *)v7 + 588))(v7);
        goto LABEL_44;
      }
      v8 = *(_DWORD *)v4;
      v9 = *(Entity ***)v5;
      v10 = (*(_DWORD *)v5 - *(_DWORD *)v4) >> 4;
      if ( v10 >= 1 )
        v11 = v10 + 1;
        do
          v12 = *(_DWORD *)v8 == (_DWORD)v7;
          v13 = (Entity **)v8;
          if ( *(Entity **)v8 != v7 )
            v13 = (Entity **)(v8 + 4);
            v12 = *(_DWORD *)(v8 + 4) == (_DWORD)v7;
          if ( v12 )
            break;
          v13 = (Entity **)(v8 + 8);
          v14 = *(Entity **)(v8 + 8);
          v15 = v14 == v7;
          if ( v14 != v7 )
            v13 = (Entity **)(v8 + 12);
            v15 = *(_DWORD *)(v8 + 12) == (_DWORD)v7;
          if ( v15 )
          --v11;
          v8 += 16;
        while ( v11 > 1 );
LABEL_38:
        if ( v13 != v9 )
          *v13 = *(v9 - 1);
          *(_DWORD *)v5 -= 4;
        goto LABEL_40;
      if ( 1 == ((signed int)v9 - v8) >> 2 )
        v13 = (Entity **)v8;
      else
        v16 = ((signed int)v9 - v8) >> 2;
        if ( v16 == 2 )
          if ( v16 != 3 )
            goto LABEL_40;
          if ( *(Entity **)v8 == v7 )
            goto LABEL_38;
          v13 = (Entity **)(v8 + 4);
        if ( *v13 == v7 )
          goto LABEL_38;
        ++v13;
      if ( *v13 == v7 )
        goto LABEL_38;
LABEL_40:
      --v6;
LABEL_44:
      v3 = *(_DWORD *)v4;
      ++v6;
    }
    while ( v6 < (*(_DWORD *)v5 - *(_DWORD *)v4) >> 2 );
  }
  v29 = *((_DWORD *)v1 + 1449);
  if ( *((_DWORD *)v1 + 1450) != v29 )
    v30 = (int *)((char *)v1 + 5800);
    v31 = (Level *)((char *)v1 + 5796);
    v32 = 0;
    while ( 1 )
      v33 = *(_DWORD *)(v29 + 4 * v32);
      if ( Entity::isRemoved(*(Entity **)(v29 + 4 * v32)) )
        break;
      v35 = *v30;
LABEL_71:
      v29 = *(_DWORD *)v31;
      if ( ++v32 >= (unsigned int)((v35 - *(_DWORD *)v31) >> 2) )
        goto LABEL_72;
    v34 = *(_DWORD *)v31;
    v35 = *v30;
    v36 = (*v30 - *(_DWORD *)v31) >> 4;
    if ( v36 >= 1 )
      v37 = v36 + 1;
      do
        v38 = *(_DWORD *)v34 == v33;
        v39 = (_DWORD *)v34;
        if ( *(_DWORD *)v34 != v33 )
          v39 = (_DWORD *)(v34 + 4);
          v38 = *(_DWORD *)(v34 + 4) == v33;
        if ( v38 )
          goto LABEL_68;
        v39 = (_DWORD *)(v34 + 8);
        v40 = *(_DWORD *)(v34 + 8);
        v41 = v40 == v33;
        if ( v40 != v33 )
          v39 = (_DWORD *)(v34 + 12);
          v41 = *(_DWORD *)(v34 + 12) == v33;
        if ( v41 )
        --v37;
        v34 += 16;
      while ( v37 > 1 );
    if ( 1 == (v35 - v34) >> 2 )
      v39 = (_DWORD *)v34;
    else
      v42 = (v35 - v34) >> 2;
      if ( v42 == 2 )
        if ( v42 != 3 )
          goto LABEL_70;
        if ( *(_DWORD *)v34 == v33 )
        v39 = (_DWORD *)(v34 + 4);
      if ( *v39 == v33 )
        goto LABEL_68;
      ++v39;
    if ( *v39 == v33 )
LABEL_68:
      if ( v39 != (_DWORD *)v35 )
        *v39 = *(_DWORD *)(v35 - 4);
        v35 = *v30 - 4;
        *v30 = v35;
LABEL_70:
    --v32;
    goto LABEL_71;
LABEL_72:
  result = *((_DWORD *)v1 + 1460);
  v44 = (int *)((char *)v1 + 5844);
  v45 = *((_DWORD *)v1 + 1461);
  v46 = (v45 - result) >> 5;
  if ( v46 < 1 )
LABEL_79:
    if ( 1 != (v45 - result) >> 3 )
      v52 = (v45 - result) >> 3;
      if ( v52 != 2 )
        if ( v52 != 3 )
          result = v45;
          goto LABEL_93;
        v53 = *(_DWORD *)(result + 4);
        *(_DWORD *)(result + 4) = v53 - 1;
        if ( v53 < 2 )
        result += 8;
      v54 = *(_DWORD *)(result + 4);
      *(_DWORD *)(result + 4) = v54 - 1;
      if ( v54 < 2 )
        goto LABEL_93;
      result += 8;
    v55 = *(_DWORD *)(result + 4);
    *(_DWORD *)(result + 4) = v55 - 1;
    if ( v55 >= 2 )
      result = v45;
  else
    v47 = v46 + 1;
      v48 = *(_DWORD *)(result + 4);
      *(_DWORD *)(result + 4) = v48 - 1;
      if ( v48 < 2 )
      v49 = *(_DWORD *)(result + 12);
      *(_DWORD *)(result + 12) = v49 - 1;
      if ( v49 < 2 )
      v50 = *(_DWORD *)(result + 20);
      *(_DWORD *)(result + 20) = v50 - 1;
      if ( v50 < 2 )
        result += 16;
      v51 = *(_DWORD *)(result + 28);
      *(_DWORD *)(result + 28) = v51 - 1;
      if ( v51 < 2 )
        result += 24;
      --v47;
      result += 32;
      if ( v47 <= 1 )
        goto LABEL_79;
LABEL_93:
  if ( result == v45 )
    v57 = v45;
    v56 = v45 - 8;
    v57 = result;
    while ( v56 != result )
      v58 = *(_DWORD *)(result + 12);
      v59 = result + 8;
      v60 = v58 - 1;
      *(_DWORD *)(result + 12) = v58 - 1;
      if ( v58 >= 2 )
        v61 = *(_DWORD *)v59;
        *(_DWORD *)v59 = 0;
        v62 = *(_DWORD *)v57;
        *(_DWORD *)v57 = v61;
        if ( v62 )
          (*(void (**)(void))(*(_DWORD *)v62 + 32))();
          v60 = *(_DWORD *)(v59 + 4);
        *(_DWORD *)(v57 + 4) = v60;
        v57 += 8;
        result = v59;
    v45 = *v44;
  if ( v57 != v45 )
    if ( v45 != v57 )
      v63 = (int *)v57;
        result = *v63;
        if ( *v63 )
          result = (*(int (**)(void))(*(_DWORD *)result + 32))();
        *v63 = 0;
        v63 += 2;
      while ( (int *)v45 != v63 );
    *v44 = v57;
  return result;
}


char *__fastcall Level::getLevelData(Level *this)
{
  return (char *)this + 144;
}


int __fastcall Level::forEachDimension(int result, int a2)
{
  int v2; // r5@1
  int v3; // r4@1

  v2 = *(_DWORD *)(result + 568);
  v3 = a2;
  while ( v2 )
  {
    if ( !*(_DWORD *)(v3 + 8) )
      sub_21E5F48();
    result = (*(int (__fastcall **)(int, _DWORD))(v3 + 12))(v3, *(_DWORD *)(v2 + 8));
    if ( result != 1 )
      break;
    v2 = *(_DWORD *)v2;
  }
  return result;
}


int __fastcall Level::getTradeTables(Level *this)
{
  return 0;
}


char *__fastcall Level::getRandom(Level *this)
{
  return (char *)this + 732;
}


signed int __fastcall Level::_suspendPlayer(Level *this, const mce::UUID *a2)
{
  Level *v2; // r8@1
  signed int result; // r0@1
  int *v4; // r6@1
  __int64 v5; // kr00_8@1
  __int64 v6; // r2@2
  unsigned int v7; // r10@2
  unsigned int v8; // r1@2
  int v9; // r5@3
  int *v10; // r0@7
  int v11; // r1@7
  bool v12; // zf@7
  __int64 v13; // r0@11
  int v14; // [sp+0h] [bp-30h]@11

  v2 = this;
  v5 = *((_QWORD *)this + 3);
  result = *((_QWORD *)this + 3) >> 32;
  v4 = (int *)v5;
  if ( (_DWORD)v5 != result )
  {
    v6 = *(_QWORD *)a2;
    v7 = *((_DWORD *)a2 + 2);
    v8 = *((_DWORD *)a2 + 3);
    while ( 1 )
    {
      v9 = *v4;
      if ( v6 == *(_QWORD *)(*v4 + 4560) && *(_QWORD *)(v9 + 4568) == __PAIR__(v8, v7) )
        break;
      ++v4;
      if ( (int *)result == v4 )
        return result;
    }
    std::vector<Player *,std::allocator<Player *>>::emplace_back<Player *>((int)v2 + 36, v4);
    v10 = (int *)*((_DWORD *)v2 + 7);
    v11 = (int)(v4 + 1);
    v12 = v10 == v4 + 1;
    if ( v10 != v4 + 1 )
      v12 = v11 == (_DWORD)v10;
    if ( !v12 )
      _aeabi_memmove4(v4, v11);
      v10 = (int *)*((_DWORD *)v2 + 7);
    *((_DWORD *)v2 + 7) = v10 - 1;
    (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 1496))(v9);
    Entity::getRuntimeID((Entity *)&v14, v9);
    LODWORD(v13) = (char *)v2 + 88;
    result = std::_Hashtable<EntityRuntimeID,std::pair<EntityRuntimeID const,EntityUniqueID>,std::allocator<std::pair<EntityRuntimeID const,EntityUniqueID>>,std::__detail::_Select1st,std::equal_to<EntityRuntimeID>,std::hash<EntityRuntimeID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_erase(v13);
  }
  return result;
}


Entity **__fastcall Level::_cleanupDisconnectedPlayers(Level *this)
{
  Level *v1; // r10@1
  Entity **result; // r0@1
  Entity **v3; // r8@1
  __int64 v4; // kr00_8@1
  _BYTE *v5; // r11@2
  Entity *v6; // r1@3
  void *v7; // r5@4
  int v8; // r1@6
  int v9; // r4@9
  int v10; // r1@10
  void **v11; // r2@11
  __int64 v12; // r4@20
  int v13; // t1@21
  Entity *v14; // r1@21
  __int64 v15; // kr10_8@25
  unsigned int v16; // r5@25
  unsigned int v17; // r1@25
  unsigned int v18; // r6@25
  void **v19; // r0@25
  void **v20; // r11@26
  void **v21; // r9@26
  int v22; // r4@26
  _DWORD *v23; // r10@30
  PlayerListEntry *v24; // r0@35
  PlayerListEntry *v25; // r4@35
  Entity **v26; // r2@40
  int v27; // r3@40
  Entity *v28; // r1@40
  int v29; // r0@40
  int v30; // r7@41
  bool v31; // zf@42
  Entity **v32; // r0@42
  Entity *v33; // r6@45
  bool v34; // zf@45
  int v35; // r0@50
  int v36; // r1@63
  Entity **v37; // r2@66
  int v38; // r3@66
  int v39; // r0@66
  int v40; // r7@67
  bool v41; // zf@68
  Entity **v42; // r0@68
  Entity *v43; // r6@71
  bool v44; // zf@71
  int v45; // r0@76
  int v46; // r1@90
  bool v47; // zf@90
  Entity *v48; // r6@95
  int v49; // r0@95
  signed int v50; // r1@96
  int v51; // r4@97
  Entity **v52; // r5@97
  Entity *v53; // r1@98
  Entity *v54; // r0@98
  _DWORD *v55; // r4@103
  int v56; // r0@103
  __int64 i; // r4@105
  Level *v58; // [sp+8h] [bp-80h]@2
  int v59; // [sp+Ch] [bp-7Ch]@11
  int v60; // [sp+14h] [bp-74h]@2
  Level *v61; // [sp+18h] [bp-70h]@1
  int v62; // [sp+20h] [bp-68h]@2
  unsigned int v63; // [sp+30h] [bp-58h]@25
  unsigned int v64; // [sp+34h] [bp-54h]@25
  void **v65; // [sp+38h] [bp-50h]@35
  __int64 ptr; // [sp+48h] [bp-40h]@35
  char v67; // [sp+58h] [bp-30h]@25

  v1 = this;
  v61 = this;
  v4 = *(_QWORD *)((char *)this + 12);
  result = (Entity **)(*(_QWORD *)((char *)this + 12) >> 32);
  v3 = (Entity **)v4;
  if ( (Entity **)v4 != result )
  {
    v58 = (Level *)((char *)v1 + 640);
    v62 = (int)v1 + 88;
    v5 = (char *)v1 + 5824;
    v60 = (int)v1 + 5824;
    while ( Entity::isRemoved(*v3) != 1 )
    {
      ++v3;
LABEL_109:
      result = (Entity **)*((_DWORD *)v1 + 4);
      if ( v3 == result )
        return result;
    }
    if ( Entity::isRiding(*v3) == 1 )
      (*(void (**)(void))(*(_DWORD *)*v3 + 596))();
    v12 = *(_QWORD *)((char *)v1 + 116);
    while ( HIDWORD(v12) != (_DWORD)v12 )
      v13 = *(_DWORD *)v12;
      LODWORD(v12) = v12 + 4;
      v14 = *v3;
      (*(void (**)(void))(*(_DWORD *)v13 + 64))();
    if ( *((Entity **)v1 + 174) == *v3 )
      *((_DWORD *)v1 + 166) = 3;
      *((_DWORD *)v1 + 174) = 0;
    if ( !*v5 )
      Entity::getRuntimeID((Entity *)&v67, (int)*v3);
      std::_Hashtable<EntityRuntimeID,std::pair<EntityRuntimeID const,EntityUniqueID>,std::allocator<std::pair<EntityRuntimeID const,EntityUniqueID>>,std::__detail::_Select1st,std::equal_to<EntityRuntimeID>,std::hash<EntityRuntimeID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_erase(__PAIR__(&v67, v62));
      v64 = *((_DWORD *)*v3 + 1140);
      v63 = *((_DWORD *)*v3 + 1141);
      v15 = *((_QWORD *)v1 + 79);
      v16 = 522133279 * v64 ^ v63 ^ *((_DWORD *)*v3 + 1142) ^ ((522133279 * (unsigned __int64)*((_DWORD *)*v3 + 1142) >> 32)
                                                             + 522133279 * *((_DWORD *)*v3 + 1143));
      v17 = v16 % (unsigned int)(*((_QWORD *)v1 + 79) >> 32);
      v18 = v17;
      v19 = *(void ***)(v15 + 4 * v17);
      if ( v19 )
      {
        v20 = (void **)*v19;
        v21 = *(void ***)(v15 + 4 * v17);
        v59 = v15;
        v22 = *((_DWORD *)*v19 + 24);
        while ( v22 != v16
             || *((_QWORD *)v20 + 1) != __PAIR__(v63, v64)
             || *((_QWORD *)v20 + 2) != *((_QWORD *)*v3 + 571) )
        {
          v23 = *v20;
          if ( *v20 )
          {
            v22 = v23[24];
            v21 = v20;
            v20 = (void **)*v20;
            if ( v23[24] % HIDWORD(v15) == v17 )
              continue;
          }
          v1 = v61;
          v5 = (_BYTE *)v60;
          v6 = *v3;
          goto LABEL_35;
        }
        v1 = v61;
        v5 = (_BYTE *)v60;
        v6 = *v3;
        if ( !v21 )
        v7 = *v21;
        if ( v19 != v21 )
          if ( *(_DWORD *)v7 )
            v8 = *(_DWORD *)(*(_DWORD *)v7 + 96) % HIDWORD(v15);
            if ( v8 != v18 )
              *(_DWORD *)(v15 + 4 * v8) = v21;
          goto LABEL_16;
        v9 = *(_DWORD *)v7;
        if ( *(_DWORD *)v7 )
          v10 = *(_DWORD *)(v15 + 96) % HIDWORD(v15);
          if ( v10 == v18 )
LABEL_16:
            *v21 = *(void **)v7;
            PlayerListEntry::~PlayerListEntry((PlayerListEntry *)((char *)v7 + 24));
            operator delete(v7);
            --*((_DWORD *)v61 + 161);
            v6 = *v3;
            goto LABEL_35;
          *(_DWORD *)(v15 + 4 * v10) = v19;
          v59 = *((_DWORD *)v61 + 158);
          v11 = *(void ***)(v59 + 4 * v18);
        else
          v11 = v19;
        if ( (void **)v58 == v11 )
          *(_DWORD *)v58 = v9;
        *(_DWORD *)(v59 + 4 * v18) = 0;
        goto LABEL_16;
      }
      v6 = *v3;
LABEL_35:
      PlayerListPacket::PlayerListPacket((int)&v65, (int)v6 + 4560);
      (*(void (**)(void))(**((_DWORD **)v1 + 165) + 8))();
      v65 = &off_26E988C;
      v25 = (PlayerListEntry *)HIDWORD(ptr);
      v24 = (PlayerListEntry *)ptr;
      if ( (_DWORD)ptr != HIDWORD(ptr) )
        do
          v24 = (PlayerListEntry *)((char *)PlayerListEntry::~PlayerListEntry(v24) + 72);
        while ( v25 != v24 );
        v24 = (PlayerListEntry *)ptr;
      if ( v24 )
        operator delete((void *)v24);
    v26 = (Entity **)(*((_QWORD *)v1 + 3) >> 32);
    v27 = *((_QWORD *)v1 + 3);
    v28 = *v3;
    v29 = ((signed int)v26 - v27) >> 4;
    if ( v29 < 1 )
LABEL_49:
      if ( 1 == ((signed int)v26 - v27) >> 2 )
        v32 = (Entity **)v27;
      else
        v35 = ((signed int)v26 - v27) >> 2;
        if ( v35 == 2 )
          v32 = (Entity **)v27;
          if ( v35 != 3 )
            v32 = (Entity **)(*((_QWORD *)v1 + 3) >> 32);
            goto LABEL_62;
          if ( *(Entity **)v27 == v28 )
          v32 = (Entity **)(v27 + 4);
        if ( *v32 == v28 )
          goto LABEL_62;
        ++v32;
      if ( *v32 != v28 )
        v32 = (Entity **)(*((_QWORD *)v1 + 3) >> 32);
    else
      v30 = v29 + 1;
      while ( 1 )
        v31 = *(_DWORD *)v27 == (_DWORD)v28;
        if ( *(Entity **)v27 != v28 )
          v31 = *(_DWORD *)(v27 + 4) == (_DWORD)v28;
        if ( v31 )
          break;
        v32 = (Entity **)(v27 + 8);
        v33 = *(Entity **)(v27 + 8);
        v34 = v33 == v28;
        if ( v33 != v28 )
          v32 = (Entity **)(v27 + 12);
          v34 = *(_DWORD *)(v27 + 12) == (_DWORD)v28;
        if ( v34 )
        --v30;
        v27 += 16;
        if ( v30 <= 1 )
          goto LABEL_49;
LABEL_62:
    if ( v32 != v26 )
      v36 = (int)(v32 + 1);
      if ( v32 + 1 != v26 && v26 != (Entity **)v36 )
        _aeabi_memmove4(v32, v36);
        v26 = (Entity **)*((_DWORD *)v1 + 7);
      *((_DWORD *)v1 + 7) = v26 - 1;
LABEL_95:
      v48 = *v3;
      *v3 = 0;
      v49 = *((_DWORD *)v1 + 4);
      if ( v3 + 1 == (Entity **)v49 )
        v49 = (int)(v3 + 1);
        v50 = v49 - (_DWORD)(v3 + 1);
        if ( v50 >= 1 )
          v51 = (v50 >> 2) + 1;
          v52 = v3;
          do
            v53 = v52[1];
            v52[1] = 0;
            v54 = *v52;
            *v52 = v53;
            if ( v54 )
              (*(void (**)(void))(*(_DWORD *)v54 + 32))();
            --v51;
            ++v52;
          while ( v51 > 1 );
          v49 = *((_DWORD *)v1 + 4);
      v55 = (_DWORD *)(v49 - 4);
      *((_DWORD *)v1 + 4) = v49 - 4;
      v56 = *(_DWORD *)(v49 - 4);
      if ( v56 )
        (*(void (**)(void))(*(_DWORD *)v56 + 32))();
      *v55 = 0;
      for ( i = *(_QWORD *)((char *)v1 + 116); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 4 )
        (*(void (**)(void))(**(_DWORD **)i + 112))();
      (*(void (__fastcall **)(Level *))(*(_DWORD *)v1 + 80))(v1);
      if ( v48 )
        (*(void (__fastcall **)(Entity *))(*(_DWORD *)v48 + 32))(v48);
      goto LABEL_109;
    v37 = (Entity **)(*(_QWORD *)((char *)v1 + 36) >> 32);
    v38 = *(_QWORD *)((char *)v1 + 36);
    v39 = ((signed int)v37 - v38) >> 4;
    if ( v39 >= 1 )
      v40 = v39 + 1;
      do
        v41 = *(_DWORD *)v38 == (_DWORD)v28;
        v42 = (Entity **)v38;
        if ( *(Entity **)v38 != v28 )
          v42 = (Entity **)(v38 + 4);
          v41 = *(_DWORD *)(v38 + 4) == (_DWORD)v28;
        if ( v41 )
          goto LABEL_89;
        v42 = (Entity **)(v38 + 8);
        v43 = *(Entity **)(v38 + 8);
        v44 = v43 == v28;
        if ( v43 != v28 )
          v42 = (Entity **)(v38 + 12);
          v44 = *(_DWORD *)(v38 + 12) == (_DWORD)v28;
        if ( v44 )
        --v40;
        v38 += 16;
      while ( v40 > 1 );
    if ( 1 == ((signed int)v37 - v38) >> 2 )
      v42 = (Entity **)v38;
      goto LABEL_85;
    v45 = ((signed int)v37 - v38) >> 2;
    if ( v45 == 2 )
      if ( v45 != 3 )
        v42 = (Entity **)(*(_QWORD *)((char *)v1 + 36) >> 32);
        goto LABEL_89;
      if ( *(Entity **)v38 == v28 )
      v42 = (Entity **)(v38 + 4);
    if ( *v42 != v28 )
      ++v42;
LABEL_85:
      if ( *v42 != v28 )
LABEL_89:
    if ( v42 != v37 )
      v46 = (int)(v42 + 1);
      v47 = v42 + 1 == v37;
      if ( v42 + 1 != v37 )
        v47 = v37 == (Entity **)v46;
      if ( !v47 )
        _aeabi_memmove4(v42, v46);
        v37 = (Entity **)*((_DWORD *)v1 + 10);
      *((_DWORD *)v1 + 10) = v37 - 1;
    goto LABEL_95;
  }
  return result;
}


BackgroundTask *__fastcall Level::_saveSomeChunks(Level *this)
{
  unsigned int v1; // r6@0
  Level *v2; // r4@1
  BackgroundTask *result; // r0@1
  int v4; // r1@2
  bool v5; // zf@2
  BackgroundTask **v6; // r7@5
  Random *v7; // r10@5
  int v8; // r9@5
  unsigned int v9; // r1@8
  int i; // r0@8
  int v11; // r0@12
  __int64 v12; // kr00_8@14
  int v13; // r6@14
  BackgroundTask *v14; // r0@14
  int v15; // r6@15
  char *v16; // r11@15
  signed int v17; // r6@16
  signed int v18; // r0@18
  signed int v19; // r0@18
  unsigned int v20; // r1@18
  unsigned int v21; // r2@20
  unsigned int v22; // r0@20
  bool v23; // cf@22
  int v24; // r5@25
  BackgroundTask *v25; // r12@25
  char *v26; // r0@25
  int v27; // r2@25
  int v28; // r2@25
  char *v29; // r8@25
  char *v30; // r6@26
  char *v31; // lr@26
  int v32; // r2@26
  int v33; // r3@26
  int v34; // r4@26
  int v35; // r5@26
  int v36; // r7@26
  int v37; // r3@31
  __int64 v38; // kr08_8@31
  int v39; // r8@31
  int v40; // r0@31
  int v41; // r5@32
  int v42; // r6@32
  int v43; // r1@32
  int v44; // r4@32
  int v45; // r0@33
  int v46; // r5@36
  unsigned int *v47; // r1@37
  unsigned int v48; // r0@39
  BackgroundTask **v49; // r8@43
  unsigned int *v50; // r7@43
  unsigned int v51; // r0@45
  int v52; // r5@55
  _DWORD *v53; // r0@55
  _BYTE *v54; // [sp+8h] [bp-68h]@5
  int *v55; // [sp+Ch] [bp-64h]@5
  int v56; // [sp+10h] [bp-60h]@25
  BackgroundTask **v57; // [sp+14h] [bp-5Ch]@5
  char **v58; // [sp+18h] [bp-58h]@5
  Level *v59; // [sp+1Ch] [bp-54h]@1
  char v60; // [sp+24h] [bp-4Ch]@55
  int (*v61)(void); // [sp+2Ch] [bp-44h]@55
  _DWORD *v62; // [sp+34h] [bp-3Ch]@55
  int (*v63)(void); // [sp+3Ch] [bp-34h]@55
  signed int (__fastcall *v64)(int **); // [sp+40h] [bp-30h]@55
  LevelChunk *v65; // [sp+44h] [bp-2Ch]@12
  int v66; // [sp+48h] [bp-28h]@36

  v2 = this;
  result = (BackgroundTask *)5864;
  v59 = v2;
  if ( !*((_BYTE *)v2 + 5864) )
  {
    v4 = *((_DWORD *)v2 + 32);
    v5 = v4 == 0;
    if ( v4 )
    {
      v1 = *((_DWORD *)v2 + 143);
      v5 = v1 == 0;
    }
    if ( !v5 )
      v54 = (char *)v2 + 5864;
      v6 = (BackgroundTask **)((char *)v2 + 5884);
      v55 = (int *)((char *)v2 + 5884);
      v58 = (char **)((char *)v2 + 5880);
      v57 = (BackgroundTask **)((char *)v2 + 5888);
      v7 = (Level *)((char *)v2 + 732);
      v8 = 0;
      while ( 1 )
      {
        if ( v1 )
        {
          v9 = Random::_genRandInt32(v7) % v1;
          for ( i = *((_DWORD *)v2 + 142); v9; --v9 )
            i = *(_DWORD *)i;
        }
        else
          i = *((_DWORD *)v2 + 142);
        v11 = Dimension::getChunkSource(*(Dimension **)(i + 8));
        (*(void (__fastcall **)(LevelChunk **))(*(_DWORD *)v11 + 20))(&v65);
        if ( v65 )
          if ( LevelChunk::needsSaving(v65, 60, 300) == 1 )
          {
            v12 = *(_QWORD *)LevelChunk::getPosition(v65);
            v13 = LevelChunk::getDimensionId(v65);
            v14 = *v6;
            if ( *v6 == *v57 )
            {
              v18 = v14 - (BackgroundTask *)*v58;
              v5 = v18 == 0;
              v19 = v18 >> 3;
              v20 = -1431655765 * v19;
              if ( v5 )
                v20 = 1;
              v22 = v20 + -1431655765 * v19;
              v21 = v22;
              if ( v22 > 0xAAAAAAA )
                v22 = 178956970;
              v23 = v21 >= v20;
              LOWORD(v20) = -21845;
              if ( !v23 )
              HIWORD(v20) = 2730;
              if ( v22 >= v20 )
                sub_21E57F4();
              v24 = 3 * v22;
              v16 = (char *)operator new(24 * v22);
              v25 = *v6;
              v56 = v24;
              v26 = *v58;
              v27 = *v6 - (BackgroundTask *)*v58;
              v5 = (char *)*v6 == *v58;
              *(_DWORD *)&v16[v27] = -1;
              v28 = (int)&v16[v27];
              *(_QWORD *)(v28 + 8) = v12;
              v29 = v16;
              *(_DWORD *)(v28 + 16) = v13;
              if ( !v5 )
              {
                do
                {
                  v30 = v26;
                  v31 = v29;
                  v26 += 24;
                  v29 += 24;
                  v32 = *((_DWORD *)v30 + 1);
                  v33 = *((_DWORD *)v30 + 2);
                  v34 = *((_DWORD *)v30 + 3);
                  v35 = *((_DWORD *)v30 + 4);
                  v36 = *((_DWORD *)v30 + 5);
                  *(_DWORD *)v31 = *(_DWORD *)v30;
                  *((_DWORD *)v31 + 1) = v32;
                  *((_DWORD *)v31 + 2) = v33;
                  *((_DWORD *)v31 + 3) = v34;
                  *((_DWORD *)v31 + 4) = v35;
                  *((_DWORD *)v31 + 5) = v36;
                }
                while ( (char *)v25 != v26 );
                v26 = *v58;
              }
              v15 = (int)(v29 + 24);
              if ( v26 )
                operator delete(v26);
              v6 = (BackgroundTask **)v55;
              *v58 = v16;
              *v55 = v15;
              *v57 = (BackgroundTask *)&v16[8 * v56];
            }
            else
              *(_DWORD *)v14 = -1;
              *((_QWORD *)v14 + 1) = v12;
              *((_DWORD *)v14 + 4) = v13;
              v15 = (int)*v6 + 24;
              *v6 = (BackgroundTask *)v15;
              v16 = *v58;
            v37 = *(_DWORD *)(v15 - 24);
            v38 = *(_QWORD *)(v15 - 16);
            v39 = *(_DWORD *)(v15 - 8);
            v40 = -1431655765 * ((v15 - (signed int)v16) >> 3) - 1;
            if ( v15 - (signed int)v16 <= 24 )
LABEL_34:
              v42 = (int)&v16[24 * v40];
              while ( 1 )
                v41 = v40 - 1;
                v42 = (int)&v16[24 * v40];
                v43 = (v40 - 1) / 2;
                v44 = *(_DWORD *)&v16[24 * v43];
                if ( v37 >= v44 )
                  break;
                *(_DWORD *)v42 = v44;
                v45 = (int)&v16[24 * ((v40 - 1) / 2)];
                *(_QWORD *)(v42 + 8) = *(_QWORD *)(v45 + 8);
                *(_DWORD *)(v42 + 16) = *(_DWORD *)(v45 + 16);
                v40 = v43;
                if ( v41 <= 1 )
                  goto LABEL_34;
            *(_DWORD *)v42 = v37;
            *(_QWORD *)(v42 + 8) = v38;
            v2 = v59;
            *(_DWORD *)(v42 + 16) = v39;
            v17 = 2;
          }
          else
            v17 = 0;
          v17 = 0;
        v46 = v66;
        if ( v66 )
          v47 = (unsigned int *)(v66 + 4);
          if ( &pthread_create )
            __dmb();
            do
              v48 = __ldrex(v47);
            while ( __strex(v48 - 1, v47) );
            v48 = (*v47)--;
          if ( v48 == 1 )
            v49 = v6;
            v50 = (unsigned int *)(v46 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v46 + 8))(v46);
            if ( &pthread_create )
              __dmb();
              do
                v51 = __ldrex(v50);
              while ( __strex(v51 - 1, v50) );
              v51 = (*v50)--;
            v6 = v49;
            if ( v51 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v46 + 12))(v46);
        if ( v17 )
          break;
        if ( ++v8 >= 30 )
        v1 = *((_DWORD *)v2 + 143);
      }
      result = (BackgroundTask *)*((_DWORD *)v2 + 1470);
      if ( result != *v6 )
        *v54 = 1;
        v52 = *((_DWORD *)v2 + 1468);
        v53 = operator new(4u);
        *v53 = v2;
        v62 = v53;
        v63 = (int (*)(void))sub_19129F0;
        v64 = sub_19128E0;
        v61 = 0;
        result = TaskGroup::queue(v52, (int)&v62, (int)&v60, 1u, 0xFFFFFFFF);
        if ( v61 )
          result = (BackgroundTask *)v61();
        if ( v63 )
          result = (BackgroundTask *)v63();
  }
  return result;
}


signed int __fastcall Level::getUserCount(Level *this)
{
  return (signed int)((*(_QWORD *)((char *)this + 12) >> 32) - *(_QWORD *)((char *)this + 12)) >> 2;
}


int __fastcall Level::forceRemoveEntity(Level *this, Entity *a2)
{
  Entity *v2; // r5@1
  Level *v3; // r4@1
  void (__fastcall *v4)(int *, Level *, _DWORD, _DWORD); // r6@3
  char *v5; // r0@3
  int result; // r0@3
  int v7; // [sp+4h] [bp-14h]@3

  v2 = a2;
  v3 = this;
  if ( !Entity::isRemoved(a2) )
    (*(void (__fastcall **)(Entity *))(*(_DWORD *)v2 + 44))(v2);
  (*(void (__fastcall **)(Level *, Entity *, _DWORD))(*(_DWORD *)v3 + 108))(v3, v2, 0);
  v4 = *(void (__fastcall **)(int *, Level *, _DWORD, _DWORD))(*(_DWORD *)v3 + 60);
  v5 = Entity::getUniqueID(v2);
  v4(&v7, v3, *(_QWORD *)v5, *(_QWORD *)v5 >> 32);
  result = v7;
  if ( v7 )
    result = (*(int (**)(void))(*(_DWORD *)v7 + 32))();
  return result;
}


int __fastcall Level::addTerrainParticle(Level *this, const Vec3 *a2, const Vec3 *a3, int a4, const BlockPos *a5)
{
  Level *v5; // r6@1
  const Vec3 *v7; // r10@1
  int v13; // r1@1
  int result; // r0@1
  int v16; // r5@2

  v5 = this;
  _R8 = a4;
  v7 = a2;
  _R0 = BlockPos::randomFloat(a5);
  __asm
  {
    VLDR            S0, =65535.0
    VMOV            S2, R0
    VMUL.F32        S0, S2, S0
    VCVTR.S32.F32   S0, S0
  }
  v13 = *(_QWORD *)((char *)v5 + 116);
  result = 0;
  if ( *(_QWORD *)((char *)v5 + 116) >> 32 != v13 )
    __asm { VMOV            R0, S0 }
    v16 = 0;
    __asm { PKHBT.W         R4, R8, R0,LSL#16 }
    while ( 1 )
    {
      result = (*(int (__cdecl **)(_DWORD, signed int, const Vec3 *))(**(_DWORD **)(v13 + 4 * v16) + 48))(
                 *(_DWORD *)(v13 + 4 * v16),
                 18,
                 v7);
      if ( result )
        break;
      v13 = *(_QWORD *)((char *)v5 + 116);
      if ( ++v16 >= (unsigned int)((signed int)((*(_QWORD *)((char *)v5 + 116) >> 32) - v13) >> 2) )
        return 0;
    }
  return result;
}


int __fastcall Level::getDimension(int a1, unsigned int a2)
{
  __int64 v2; // kr00_8@1
  int *v3; // r0@1
  int *v4; // r4@2
  int v5; // r7@2
  int v6; // r5@4
  bool v7; // zf@7
  int result; // r0@10

  v2 = *(_QWORD *)(a1 + 560);
  v3 = *(int **)(v2 + 4 * (a2 % HIDWORD(v2)));
  if ( !v3 )
    goto LABEL_11;
  v4 = (int *)*v3;
  v5 = *(_DWORD *)(*v3 + 4);
  while ( v5 != a2 )
  {
    v6 = *v4;
    if ( *v4 )
    {
      v5 = *(_DWORD *)(v6 + 4);
      v3 = (int *)v2;
      v4 = *(int **)v2;
      if ( *(_DWORD *)(v6 + 4) % HIDWORD(v2) == a2 % HIDWORD(v2) )
        continue;
    }
  }
  v7 = v3 == 0;
  if ( v3 )
    v3 = (int *)*v3;
    v7 = v3 == 0;
  if ( v7 )
LABEL_11:
    result = 0;
  else
    result = v3[2];
  return result;
}


SavedDataStorage *__fastcall Level::setXBLBroadcast(Level *this, bool a2)
{
  Level *v2; // r4@1
  int v3; // r0@1
  int i; // r5@2
  SavedDataStorage *result; // r0@5

  v2 = this;
  LevelData::setXBLBroadcast((Level *)((char *)this + 144), a2);
  v3 = *((_DWORD *)v2 + 32);
  if ( v3 )
  {
    (*(void (**)(void))(*(_DWORD *)v3 + 24))();
    for ( i = *((_DWORD *)v2 + 1484); i; i = *(_DWORD *)i )
      MapItemSavedData::trySave(*(MapItemSavedData **)(i + 16), *((LevelStorage **)v2 + 32));
  }
  result = (SavedDataStorage *)*((_DWORD *)v2 + 33);
  if ( result )
    result = (SavedDataStorage *)j_j_j__ZN16SavedDataStorage4saveEv(result);
  return result;
}


CompoundTag *__fastcall Level::_loadAutonomousEntities(Level *this)
{
  Level *v1; // r10@1
  int v2; // r5@1
  int v3; // r4@1
  char *v4; // r8@1
  int v5; // r6@2
  CompoundTag *result; // r0@6
  int v7; // r6@7
  void (__fastcall *v8)(int *, int, int *); // r4@7
  void *v9; // r0@7
  int v10; // r1@8
  int v11; // r0@8
  int v12; // r5@9
  int v13; // r5@10
  void *v14; // r0@10
  int v15; // r5@12
  ListTag *v16; // r5@12
  void *v17; // r0@12
  int i; // r7@13
  const CompoundTag *v19; // r0@16
  int v20; // r0@16
  int *v21; // r1@17
  void *v22; // r0@26
  unsigned int *v23; // r2@29
  signed int v24; // r1@31
  unsigned int *v25; // r2@33
  signed int v26; // r1@35
  unsigned int *v27; // r2@45
  signed int v28; // r1@47
  unsigned int *v29; // r2@49
  signed int v30; // r1@51
  int v31; // [sp+4h] [bp-74h]@16
  int v32; // [sp+Ch] [bp-6Ch]@12
  int v33; // [sp+14h] [bp-64h]@10
  int v34; // [sp+18h] [bp-60h]@9
  void **v35; // [sp+1Ch] [bp-5Ch]@9
  int v36; // [sp+20h] [bp-58h]@9
  int v37; // [sp+24h] [bp-54h]@9
  int *v38; // [sp+28h] [bp-50h]@9
  int v39; // [sp+30h] [bp-48h]@7
  int v40; // [sp+34h] [bp-44h]@7
  char v41; // [sp+38h] [bp-40h]@7

  v1 = this;
  *((_DWORD *)this + 1450) = *((_DWORD *)this + 1449);
  v2 = *((_DWORD *)this + 1453);
  v3 = *((_DWORD *)this + 1452);
  v4 = (char *)this + 5812;
  if ( v2 != v3 )
  {
    v5 = *((_DWORD *)this + 1452);
    do
    {
      if ( *(_DWORD *)v5 )
        (*(void (**)(void))(**(_DWORD **)v5 + 32))();
      *(_DWORD *)v5 = 0;
      v5 += 4;
    }
    while ( v2 != v5 );
  }
  *(_DWORD *)v4 = v3;
  result = (CompoundTag *)*((_DWORD *)v1 + 32);
  if ( result )
    CompoundTag::CompoundTag((int)&v41);
    v7 = *((_DWORD *)v1 + 32);
    v8 = *(void (__fastcall **)(int *, int, int *))(*(_DWORD *)v7 + 56);
    sub_21E94B4((void **)&v39, "AutonomousEntities");
    v8(&v40, v7, &v39);
    v9 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v39 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
      }
      else
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    v10 = v40;
    v11 = *(_DWORD *)(v40 - 12);
    if ( v11 )
      v35 = &off_26E91B8;
      v36 = 0;
      v37 = v11;
      v38 = &v40;
      NbtIo::read((NbtIo *)&v34, (IDataInput *)&v35);
      v12 = v34;
      if ( v34 )
        sub_21E94B4((void **)&v33, "AutonomousEntityList");
        v13 = CompoundTag::getList(v12, (const void **)&v33);
        v14 = (void *)(v33 - 12);
        if ( (int *)(v33 - 12) != &dword_28898C0 )
        {
          v27 = (unsigned int *)(v33 - 4);
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
            j_j_j_j__ZdlPv_9(v14);
        }
        if ( v13 )
          v15 = v34;
          sub_21E94B4((void **)&v32, "AutonomousEntityList");
          v16 = (ListTag *)CompoundTag::getList(v15, (const void **)&v32);
          v17 = (void *)(v32 - 12);
          if ( (int *)(v32 - 12) != &dword_28898C0 )
            v29 = (unsigned int *)(v32 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v30 = __ldrex(v29);
              while ( __strex(v30 - 1, v29) );
            }
            else
              v30 = (*v29)--;
            if ( v30 <= 0 )
              j_j_j_j__ZdlPv_9(v17);
          for ( i = 0; i < ListTag::size(v16); ++i )
            v19 = (const CompoundTag *)ListTag::get(v16, i);
            EntityFactory::loadEntity((EntityFactory *)&v31, v19);
            v20 = v31;
            if ( v31 )
              v21 = *(int **)v4;
              if ( *(_DWORD *)v4 == *((_DWORD *)v1 + 1454) )
              {
                std::vector<std::unique_ptr<Entity,std::default_delete<Entity>>,std::allocator<std::unique_ptr<Entity,std::default_delete<Entity>>>>::_M_emplace_back_aux<std::unique_ptr<Entity,std::default_delete<Entity>>>(
                  (_QWORD *)v1 + 726,
                  &v31);
              }
              else
                v31 = 0;
                *v21 = v20;
                *(_DWORD *)v4 = v21 + 1;
              if ( v31 )
                (*(void (**)(void))(*(_DWORD *)v31 + 32))();
        if ( v34 )
          (*(void (**)(void))(*(_DWORD *)v34 + 4))();
      v10 = v40;
    v22 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v10 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
    result = CompoundTag::~CompoundTag((CompoundTag *)&v41);
  return result;
}


int __fastcall Level::broadcastLevelEvent(int result, int a2, __int64 a3, Player *a4)
{
  __int64 v4; // kr00_8@2
  int v5; // r5@2
  int (__fastcall *v6)(int, char *, int, void ***); // r4@3
  int v7; // r0@3
  void **v8; // [sp+4h] [bp-34h]@2
  int v9; // [sp+8h] [bp-30h]@2
  int v10; // [sp+Ch] [bp-2Ch]@2
  char v11; // [sp+10h] [bp-28h]@2
  int v12; // [sp+14h] [bp-24h]@2
  __int64 v13; // [sp+18h] [bp-20h]@2
  __int64 v14; // [sp+20h] [bp-18h]@2

  if ( !*(_BYTE *)(result + 5824) )
  {
    v9 = 2;
    v10 = 1;
    v11 = 0;
    v8 = &off_26E956C;
    v12 = a2;
    v4 = *(_QWORD *)a3;
    LODWORD(a3) = *(_DWORD *)(a3 + 8);
    v13 = v4;
    v14 = a3;
    v5 = *(_DWORD *)(result + 660);
    if ( a4 )
    {
      v6 = *(int (__fastcall **)(int, char *, int, void ***))(*(_DWORD *)v5 + 24);
      v7 = Player::getClientSubId(a4);
      result = v6(v5, (char *)a4 + 4392, v7, &v8);
    }
    else
      result = (*(int (__fastcall **)(int, void ***))(*(_DWORD *)v5 + 8))(v5, &v8);
  }
  return result;
}


char *__fastcall Level::getPlayerList(Level *this)
{
  return (char *)this + 632;
}


int __fastcall Level::setPlayerAbilities(__int64 a1, int *a2)
{
  int *v2; // r4@1
  int v3; // r0@1

  v2 = a2;
  LODWORD(a1) = a1 + 5956;
  v3 = std::__detail::_Map_base<EntityUniqueID,std::pair<EntityUniqueID const,Abilities>,std::allocator<std::pair<EntityUniqueID const,Abilities>>,std::__detail::_Select1st,std::equal_to<EntityUniqueID>,std::hash<EntityUniqueID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](a1);
  return j_j_j__ZN9AbilitiesaSERKS__0(v3, v2);
}


MapItemSavedData *__fastcall Level::_createMapSavedData(int a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // r6@1
  int v3; // r9@1
  unsigned int v4; // r10@1
  unsigned int v5; // r5@1
  unsigned int v6; // r7@1
  int v7; // r4@1
  _QWORD *v8; // r11@1
  int *v9; // r8@1
  int *v10; // r0@2
  int v11; // r11@2
  int v12; // r9@2
  int v13; // r6@5
  MapItemSavedData *v14; // r5@8
  int v15; // r1@8
  _DWORD *v16; // r0@9
  void (*v17)(void); // r3@9
  Entity **v18; // r0@9
  Entity **v19; // r6@9
  int v20; // r7@10
  int v21; // r0@12
  bool v22; // zf@12
  MapItemSavedData *v23; // r0@21
  int v25; // r0@24
  bool v26; // zf@24
  int v27; // r9@27
  int v28; // r11@27
  int v29; // r6@30
  int v30; // [sp+0h] [bp-50h]@2
  unsigned __int64 *v31; // [sp+4h] [bp-4Ch]@2
  int v32; // [sp+8h] [bp-48h]@2
  unsigned int v33; // [sp+Ch] [bp-44h]@1
  _DWORD *v34; // [sp+10h] [bp-40h]@9
  void (*v35)(void); // [sp+18h] [bp-38h]@9
  signed int (__fastcall *v36)(int **, Entity *); // [sp+1Ch] [bp-34h]@9
  char v37; // [sp+20h] [bp-30h]@8
  MapItemSavedData *v38; // [sp+28h] [bp-28h]@8

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  v5 = *(_DWORD *)(a1 + 5932);
  v33 = *a2 >> 32;
  v6 = (v4 + ((v33 - 1640531527) << 6) + ((v33 - 1640531527) >> 2) - 1640531527) ^ (v33 - 1640531527);
  v7 = v6 % v5;
  v8 = (_QWORD *)(a1 + 5928);
  v9 = *(int **)(*(_DWORD *)(a1 + 5928) + 4 * (v6 % v5));
  if ( v9 )
  {
    v30 = a1 + 5928;
    v31 = a2;
    v10 = *(int **)(*(_DWORD *)(a1 + 5928) + 4 * (v6 % v5));
    v11 = *v9;
    v32 = v3;
    v12 = *(_DWORD *)(*v9 + 24);
    while ( v12 != v6 || *(_QWORD *)(v11 + 8) != __PAIR__(v33, v4) )
    {
      v13 = *(_DWORD *)v11;
      if ( *(_DWORD *)v11 )
      {
        v12 = *(_DWORD *)(v13 + 24);
        v10 = (int *)v11;
        v11 = *(_DWORD *)v11;
        if ( *(_DWORD *)(v13 + 24) % v5 == v7 )
          continue;
      }
LABEL_7:
      v3 = v32;
      v2 = a2;
      v8 = (_QWORD *)v30;
      goto LABEL_8;
    }
    v2 = a2;
    v8 = (_QWORD *)v30;
    if ( v10 )
      v25 = *v10;
      v26 = v25 == 0;
      if ( v25 )
        v26 = v9 == 0;
      if ( !v26 )
        v27 = *v9;
        v28 = *(_DWORD *)(*v9 + 24);
        while ( v28 != v6 || *(_QWORD *)(v27 + 8) != __PAIR__(v33, v4) )
        {
          v29 = *(_DWORD *)v27;
          if ( *(_DWORD *)v27 )
          {
            v28 = *(_DWORD *)(v29 + 24);
            v9 = (int *)v27;
            v27 = *(_DWORD *)v27;
            if ( *(_DWORD *)(v29 + 24) % v5 == v7 )
              continue;
          }
          goto LABEL_7;
        }
        v3 = v32;
        v2 = a2;
        v8 = (_QWORD *)v30;
        if ( v9 )
          std::_Hashtable<EntityUniqueID,std::pair<EntityUniqueID const,std::unique_ptr<MapItemSavedData,std::default_delete<MapItemSavedData>>>,std::allocator<std::pair<EntityUniqueID const,std::unique_ptr<MapItemSavedData,std::default_delete<MapItemSavedData>>>>,std::__detail::_Select1st,std::equal_to<EntityUniqueID>,std::hash<EntityUniqueID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_erase(
            v30,
            v6 % v5,
            v9,
            *v9);
          v4 = *v31;
          v33 = *v31 >> 32;
    else
  }
LABEL_8:
  v14 = (MapItemSavedData *)operator new(0x50u);
  MapItemSavedData::MapItemSavedData((int)v14, v15, __PAIR__(v33, v4));
  v38 = v14;
  std::_Hashtable<EntityUniqueID,std::pair<EntityUniqueID const,std::unique_ptr<MapItemSavedData,std::default_delete<MapItemSavedData>>>,std::allocator<std::pair<EntityUniqueID const,std::unique_ptr<MapItemSavedData,std::default_delete<MapItemSavedData>>>>,std::__detail::_Select1st,std::equal_to<EntityUniqueID>,std::hash<EntityUniqueID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<EntityUniqueID const&,std::unique_ptr<MapItemSavedData,std::default_delete<MapItemSavedData>>>(
    (int *)&v37,
    v8,
    v2,
    &v38);
  MapItemSavedData::setDirty(v14);
  if ( !*(_BYTE *)(v3 + 5824) )
    v16 = operator new(4u);
    *v16 = v14;
    v17 = (void (*)(void))sub_19139AC;
    v34 = v16;
    v35 = (void (*)(void))sub_19139AC;
    v36 = sub_191391C;
    v18 = (Entity **)(*(_QWORD *)(v3 + 24) >> 32);
    v19 = (Entity **)*(_QWORD *)(v3 + 24);
    if ( v19 == v18 )
      goto LABEL_38;
    v20 = (int)(v18 - 1);
    do
      if ( !v17 )
        sub_21E5F48();
      v21 = v36(&v34, *v19);
      v22 = v20 == (_DWORD)v19;
      v17 = v35;
      if ( (Entity **)v20 != v19 )
        ++v19;
        v22 = (v21 ^ 1) == 1;
    while ( !v22 );
    if ( v35 )
LABEL_38:
      v17();
  if ( v38 )
    v23 = MapItemSavedData::~MapItemSavedData(v38);
    operator delete((void *)v23);
  return v14;
}


int __fastcall Level::getPlayer(Level *this, const mce::UUID *a2)
{
  Level *v2; // r5@1
  const mce::UUID *v3; // r4@1
  _DWORD *v4; // r0@1
  void (*v5)(void); // r3@1
  __int64 v6; // r6@1
  int v7; // r0@2
  int v8; // r4@2
  int v9; // t1@2
  _DWORD *v11; // [sp+4h] [bp-24h]@1
  void (*v12)(void); // [sp+Ch] [bp-1Ch]@1
  signed int (__fastcall *v13)(int **, int); // [sp+10h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  v4 = operator new(4u);
  *v4 = v3;
  v5 = (void (*)(void))sub_1913120;
  v11 = v4;
  v12 = (void (*)(void))sub_1913120;
  v13 = sub_19130D6;
  v6 = *((_QWORD *)v2 + 3);
  if ( (_DWORD)v6 == HIDWORD(v6) )
  {
    v8 = 0;
LABEL_9:
    v5();
    return v8;
  }
  while ( 1 )
    v7 = v13(&v11, *(_DWORD *)v6);
    v9 = *(_DWORD *)v6;
    LODWORD(v6) = v6 + 4;
    v8 = v9;
    if ( v7 == 1 )
      break;
    if ( HIDWORD(v6) == (_DWORD)v6 )
    {
      v8 = 0;
    }
    if ( !v12 )
      sub_21E5F48();
  v5 = v12;
  if ( v12 )
    goto LABEL_9;
  return v8;
}


char *__fastcall Level::getAutonomousEntities(Level *this)
{
  return (char *)this + 5796;
}


int __fastcall Level::_tickTemporaryPointers(int result)
{
  int i; // r4@1

  for ( i = *(_DWORD *)(result + 5908); i; i = *(_DWORD *)i )
    result = (***(int (****)(void))(i + 4))();
  return result;
}


SavedDataStorage *__fastcall Level::setLANBroadcast(Level *this, bool a2)
{
  Level *v2; // r4@1
  int v3; // r0@1
  int i; // r5@2
  SavedDataStorage *result; // r0@5

  v2 = this;
  LevelData::setLANBroadcast((Level *)((char *)this + 144), a2);
  v3 = *((_DWORD *)v2 + 32);
  if ( v3 )
  {
    (*(void (**)(void))(*(_DWORD *)v3 + 24))();
    for ( i = *((_DWORD *)v2 + 1484); i; i = *(_DWORD *)i )
      MapItemSavedData::trySave(*(MapItemSavedData **)(i + 16), *((LevelStorage **)v2 + 32));
  }
  result = (SavedDataStorage *)*((_DWORD *)v2 + 33);
  if ( result )
    result = (SavedDataStorage *)j_j_j__ZN16SavedDataStorage4saveEv(result);
  return result;
}


char *__fastcall Level::getGlobalEntities(Level *this)
{
  return (char *)this + 5784;
}


int __fastcall Level::entityChangeDimension(int a1, Entity *a2, unsigned int a3)
{
  Entity *v3; // r4@1
  int v4; // r9@1
  unsigned int v5; // r6@1
  int result; // r0@1
  int v7; // r5@1
  Dimension *v8; // r8@4
  void (__fastcall *v9)(int *, Dimension *, int, int); // r7@4
  int v10; // r0@4
  bool v11; // zf@4
  int v12; // r5@7
  void *v13; // r5@9
  void *v14; // [sp+8h] [bp-50h]@9
  int v15; // [sp+Ch] [bp-4Ch]@8
  int v16; // [sp+10h] [bp-48h]@8
  int v17; // [sp+14h] [bp-44h]@8
  char v18; // [sp+18h] [bp-40h]@7
  int v19; // [sp+24h] [bp-34h]@4
  int v20; // [sp+28h] [bp-30h]@4
  int v21; // [sp+2Ch] [bp-2Ch]@4
  int v22; // [sp+30h] [bp-28h]@4
  int v23; // [sp+34h] [bp-24h]@8
  int v24; // [sp+38h] [bp-20h]@8

  v3 = a2;
  v4 = a1;
  v5 = a3;
  result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)a2 + 524))(a2);
  v7 = result;
  if ( result != v5 )
  {
    if ( Entity::hasCategory((int)v3, 2) == 1 )
    {
      (*(void (__fastcall **)(Entity *, _DWORD *, _DWORD *, _DWORD))(*(_DWORD *)v3 + 112))(
        v3,
        &Vec3::ZERO,
        &Vec2::ZERO,
        0);
      Entity::dropLeash(v3, 1, 0);
    }
    v8 = (Dimension *)Level::createDimension(v4, v5);
    v9 = *(void (__fastcall **)(int *, Dimension *, int, int))(*(_DWORD *)v8 + 200);
    v10 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 52))(v3);
    v9(&v22, v8, v10, v7);
    v11 = v5 == 2;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    if ( v5 != 2 )
      v11 = v7 == 2;
    if ( !v11 )
      v12 = *(_DWORD *)(v4 + 588);
      BlockPos::BlockPos((int)&v18, (int)&v22);
      if ( PortalForcer::findPortal(v12, v5, (int)&v18, 128, (int)&v19) == 1 )
      {
        Vec3::Vec3((int)&v15, (int)&v19);
        v22 = v15;
        v23 = v16;
        v24 = v17;
      }
    (*(void (__fastcall **)(Entity *, int *, _DWORD, signed int))(*(_DWORD *)v3 + 104))(v3, &v22, 0, 1);
    v13 = operator new(0x1Cu);
    CompoundTag::CompoundTag((int)v13);
    (*(void (__fastcall **)(Entity *, void *))(*(_DWORD *)v3 + 472))(v3, v13);
    Entity::transferTickingArea(v3, v8);
    (*(void (__fastcall **)(Entity *))(*(_DWORD *)v3 + 44))(v3);
    v14 = v13;
    Dimension::transferEntity((int)v8, (int)&v22, (const CompoundTag **)&v14);
    if ( v14 )
      (*(void (**)(void))(*(_DWORD *)v14 + 4))();
    result = 0;
  }
  return result;
}


Biome *__fastcall Level::saveBiomeData(Level *this, LevelStorage *a2)
{
  Biome *result; // r0@1

  result = (Biome *)*((_DWORD *)this + 32);
  if ( result )
    result = j_j_j__ZN5Biome16SaveInstanceDataER12LevelStorage(result, a2);
  else
    JUMPOUT(0, Level::setNetEventCallback);
  return result;
}


char *__fastcall Level::queueEntityRemoval(int a1, int *a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  int v4; // r1@1
  int *v5; // r0@1
  int v6; // r2@2
  char *result; // r0@2

  v2 = a1;
  v3 = a2;
  v4 = *a2;
  (*(void (**)(void))(*(_DWORD *)a1 + 108))();
  v5 = *(int **)(v2 + 5772);
  if ( v5 == *(int **)(v2 + 5776) )
  {
    result = j_j_j__ZNSt6vectorISt10unique_ptrI6EntitySt14default_deleteIS1_EESaIS4_EE19_M_emplace_back_auxIJS4_EEEvDpOT_(
               (_QWORD *)(v2 + 5768),
               v3);
  }
  else
    v6 = *v3;
    *v3 = 0;
    *v5 = v6;
    result = (char *)(*(_DWORD *)(v2 + 5772) + 4);
    *(_DWORD *)(v2 + 5772) = result;
  return result;
}


int __fastcall Level::getPlayer(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1
  void (*v5)(void); // r3@1
  __int64 v6; // r6@1
  int v7; // r0@2
  int v8; // r4@2
  int v9; // t1@2
  _DWORD *v11; // [sp+4h] [bp-24h]@1
  void (*v12)(void); // [sp+Ch] [bp-1Ch]@1
  signed int (__fastcall *v13)(const void ****, int); // [sp+10h] [bp-18h]@1

  v2 = a1;
  v3 = a2;
  v4 = operator new(4u);
  *v4 = v3;
  v5 = (void (*)(void))sub_19130A0;
  v11 = v4;
  v12 = (void (*)(void))sub_19130A0;
  v13 = sub_1913076;
  v6 = *(_QWORD *)(v2 + 24);
  if ( (_DWORD)v6 == HIDWORD(v6) )
  {
    v8 = 0;
LABEL_9:
    v5();
    return v8;
  }
  while ( 1 )
    v7 = v13((const void ****)&v11, *(_DWORD *)v6);
    v9 = *(_DWORD *)v6;
    LODWORD(v6) = v6 + 4;
    v8 = v9;
    if ( v7 == 1 )
      break;
    if ( HIDWORD(v6) == (_DWORD)v6 )
    {
      v8 = 0;
    }
    if ( !v12 )
      sub_21E5F48();
  v5 = v12;
  if ( v12 )
    goto LABEL_9;
  return v8;
}


void __fastcall Level::sendFixedInventoryUpdateForPlayer(Level *this, Player *a2)
{
  Player *v2; // r4@1
  int v3; // r0@2
  int v4; // r0@2
  int v5; // r6@3
  int v6; // r7@3
  int v7; // r5@3
  int v8; // r0@4
  __int64 v9; // r4@5
  void *v10; // r0@6
  void *v11; // r0@8
  int v12; // r0@10
  __int64 v13; // r4@16
  void *v14; // r0@17
  void *v15; // r0@19
  int v16; // r0@21
  void **v17; // [sp+4h] [bp-44h]@5
  __int64 v18; // [sp+14h] [bp-34h]@5
  int v19; // [sp+20h] [bp-28h]@2
  int v20; // [sp+24h] [bp-24h]@2

  v2 = a2;
  if ( !*((_BYTE *)this + 5824) )
  {
    v3 = LevelData::getFixedInventory((Level *)((char *)this + 144));
    FixedInventoryContainer::getItems((FixedInventoryContainer *)&v19, v3);
    v4 = Player::getSupplies(v2);
    PlayerInventoryProxy::setContainerSize(v4, 954437177 * ((v20 - v19) >> 3), 0x7Bu);
    if ( v20 != v19 )
    {
      v5 = 0;
      v6 = 954437177 * ((v20 - v19) >> 3);
      v7 = 0;
      do
      {
        v8 = Player::getSupplies(v2);
        PlayerInventoryProxy::setItem(v8, v5++, v19 + v7, 123);
        v7 += 72;
      }
      while ( v6 != v5 );
    }
    InventoryContentPacket::fromPlayerInventoryId((int)&v17, 123, v2);
    (*(void (__fastcall **)(Player *, void ***))(*(_DWORD *)v2 + 1524))(v2, &v17);
    v17 = &off_26E974C;
    v9 = v18;
    if ( (_DWORD)v18 != HIDWORD(v18) )
        v10 = *(void **)(v9 + 52);
        if ( v10 )
          operator delete(v10);
        v11 = *(void **)(v9 + 36);
        if ( v11 )
          operator delete(v11);
        v12 = *(_DWORD *)(v9 + 8);
        if ( v12 )
          (*(void (**)(void))(*(_DWORD *)v12 + 4))();
        *(_DWORD *)(v9 + 8) = 0;
        LODWORD(v9) = v9 + 72;
      while ( HIDWORD(v9) != (_DWORD)v9 );
      LODWORD(v9) = v18;
    if ( (_DWORD)v9 )
      operator delete((void *)v9);
    v13 = *(_QWORD *)&v19;
    if ( v19 != v20 )
        v14 = *(void **)(v13 + 52);
        if ( v14 )
          operator delete(v14);
        v15 = *(void **)(v13 + 36);
        if ( v15 )
          operator delete(v15);
        v16 = *(_DWORD *)(v13 + 8);
        if ( v16 )
          (*(void (**)(void))(*(_DWORD *)v16 + 4))();
        *(_DWORD *)(v13 + 8) = 0;
        LODWORD(v13) = v13 + 72;
      while ( HIDWORD(v13) != (_DWORD)v13 );
      LODWORD(v13) = v19;
    if ( (_DWORD)v13 )
      operator delete((void *)v13);
  }
}


signed int __fastcall Level::getRuntimePlayer(int a1, int a2, __int64 a3)
{
  int v3; // r0@1
  signed int v4; // r4@1
  signed int result; // r0@2

  v3 = Level::getRuntimeEntity(a1, 0, a3, 0);
  v4 = v3;
  if ( v3 )
  {
    result = Entity::hasCategory(v3, 1);
    if ( result )
      result = v4;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall Level::onAppSuspended(Level *this)
{
  Level *v1; // r4@1
  int v2; // r0@1
  int i; // r5@2
  SavedDataStorage *v4; // r0@5
  LevelStorage *v6; // r1@7
  Biome *v11; // r0@7
  int j; // r5@11
  SubChunk *v13; // r0@16

  v1 = this;
  Level::savePlayers(this);
  Level::_saveAutonomousEntities(v1);
  v2 = *((_DWORD *)v1 + 32);
  if ( v2 )
  {
    (*(void (**)(void))(*(_DWORD *)v2 + 24))();
    for ( i = *((_DWORD *)v1 + 1484); i; i = *(_DWORD *)i )
      MapItemSavedData::trySave(*(MapItemSavedData **)(i + 16), *((LevelStorage **)v1 + 32));
  }
  v4 = (SavedDataStorage *)*((_DWORD *)v1 + 33);
  if ( v4 )
    SavedDataStorage::save(v4);
  _R0 = getTimeS();
  __asm
    VMOV            D0, R0, R1
    VSTR            D0, [R0]
  v11 = (Biome *)*((_DWORD *)v1 + 32);
  if ( v11 )
    Biome::SaveInstanceData(v11, v6);
    v11 = (Biome *)*((_DWORD *)v1 + 32);
    if ( v11 )
    {
      if ( !*((_BYTE *)v1 + 5824) )
        Level::saveDirtyChunks(v1);
      for ( j = *((_DWORD *)v1 + 142); j; j = *(_DWORD *)j )
        (*(void (**)(void))(**(_DWORD **)(*(_DWORD *)(j + 8) + 196) + 64))();
      v11 = (Biome *)*((_DWORD *)v1 + 32);
      if ( v11 )
        v11 = (Biome *)(*(int (**)(void))(*(_DWORD *)v11 + 100))();
    }
  v13 = (SubChunk *)LevelChunk::trimMemoryPool(v11);
  return j_j_j__ZN8SubChunk14trimMemoryPoolEv_0(v13);
}


int __fastcall Level::checkAndHandleMaterial(int a1, float a2, int a3, Entity *a4)
{
  int v4; // r11@1
  float v5; // r4@1
  BlockSource *v6; // r8@1
  char v7; // r6@1
  int *v18; // r0@9
  int v19; // r0@10
  void (__cdecl *v20)(int); // r6@10
  int v26; // [sp+8h] [bp-68h]@2
  int v27; // [sp+Ch] [bp-64h]@5
  Entity *v28; // [sp+10h] [bp-60h]@1
  int v29; // [sp+14h] [bp-5Ch]@10
  int v30; // [sp+18h] [bp-58h]@10
  int v31; // [sp+1Ch] [bp-54h]@10
  unsigned __int8 v32; // [sp+20h] [bp-50h]@10
  float v33; // [sp+24h] [bp-4Ch]@2
  float v34; // [sp+28h] [bp-48h]@2
  int v35; // [sp+2Ch] [bp-44h]@2
  float v36; // [sp+30h] [bp-40h]@1

  v28 = a4;
  v4 = a3;
  v5 = a2;
  v6 = (BlockSource *)Entity::getRegion(a4);
  v7 = 0;
  AABB::flooredCopy((AABB *)&v36, v5, 0.0, 1065353216);
  if ( BlockSource::hasChunksAt(v6, (const AABB *)&v36) == 1 )
  {
    v33 = 0.0;
    v34 = 0.0;
    __asm
    {
      VLDR            S0, [SP,#0x70+var_40]
      VLDR            S2, [SP,#0x70+var_34]
    }
    v35 = 0;
      VCVTR.S32.F32   S2, S2
      VCVTR.S32.F32   S0, S0
      VMOV            R0, S2
      VMOV            R7, S0
    v26 = _R0;
    if ( _R7 == _R0 )
      __asm
      {
        VLDR            S0, =0.0
        VMOV.F32        S4, S0
        VMOV.F32        S2, S0
      }
    else
      v7 = 0;
      do
        __asm
        {
          VLDR            S0, [SP,#0x70+var_3C]
          VLDR            S2, [SP,#0x70+var_30]
          VCVTR.S32.F32   S2, S2
          VCVTR.S32.F32   S0, S0
          VMOV            R0, S2
          VMOV            R4, S0
        }
        v27 = _R0;
        while ( _R4 != _R0 )
          __asm
          {
            VLDR            S0, [SP,#0x70+var_38]
            VLDR            S2, [SP,#0x70+var_2C]
            VCVTR.S32.F32   S2, S2
            VCVTR.S32.F32   S0, S0
            VMOV            R10, S2
            VMOV            R5, S0
          }
          for ( ; _R10 != _R5; ++_R5 )
            v18 = (int *)BlockSource::getMaterial(v6, _R7, _R4, _R5);
            if ( Material::isType(v18, v4) == 1 )
            {
              BlockSource::getBlockID((BlockSource *)&v32, (int)v6, _R7, _R4, _R5);
              v19 = Block::mBlocks[v32];
              v20 = *(void (__cdecl **)(int))(*(_DWORD *)v19 + 312);
              v29 = _R7;
              v30 = _R4;
              v31 = _R5;
              v20(v19);
              v7 = 1;
            }
          ++_R4;
          _R0 = v27;
        ++_R7;
      while ( _R7 != v26 );
        VLDR            S2, [SP,#0x70+var_4C]
        VLDR            S4, [SP,#0x70+var_48]
        VLDR            S0, [SP,#0x70+var_44]
      VMUL.F32        S6, S2, S2
      VMUL.F32        S8, S4, S4
      VMUL.F32        S10, S0, S0
      VADD.F32        S6, S8, S6
      VADD.F32        S6, S6, S10
      VSQRT.F32       S6, S6
      VCMPE.F32       S6, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        VLDR            S8, =0.0001
        VCMPE.F32       S6, S8
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        _R1 = *((float *)&Vec3::ZERO + 1);
        _R2 = *(float *)&Vec3::ZERO;
        _R0 = dword_2822498;
      else
          VDIV.F32        S0, S0, S6
          VDIV.F32        S4, S4, S6
          VDIV.F32        S2, S2, S6
          VMOV            R0, S0
          VMOV            R1, S4
          VMOV            R2, S2
        VLDR            S0, =0.014
        VMOV            S2, R2
      v33 = _R2;
      v34 = _R1;
      __asm { VMUL.F32        S2, S2, S0 }
      _R2 = v28;
      v35 = _R0;
        VLDR            S4, [R2,#0x6C]
        VADD.F32        S2, S4, S2
        VMOV            S4, R1
        VMUL.F32        S4, S4, S0
        VSTR            S2, [R2,#0x6C]
        VLDR            S2, [R2,#0x70]
        VADD.F32        S2, S2, S4
        VMOV            S4, R0
        VMUL.F32        S0, S4, S0
        VSTR            S2, [R2,#0x70]
        VLDR            S2, [R2,#0x74]
        VADD.F32        S0, S2, S0
        VSTR            S0, [R2,#0x74]
  }
  return v7 & 1;
}


int __fastcall Level::getServerResourcePackManager(Level *this)
{
  return 0;
}


int __fastcall Level::setNetEventCallback(int result, NetEventCallback *a2)
{
  *(_DWORD *)(result + 5764) = a2;
  return result;
}


_DWORD *__fastcall Level::removeBossEventListener(int a1, int a2)
{
  int v2; // r6@1
  _DWORD *v3; // r2@1
  int v4; // r3@1
  int v5; // r0@1
  int v6; // r4@2
  bool v7; // zf@3
  _DWORD *result; // r0@3
  int v9; // r5@6
  bool v10; // zf@6
  int v11; // r0@11
  _DWORD *v12; // r1@24
  bool v13; // zf@24

  v2 = a1;
  v3 = (_DWORD *)(*(_QWORD *)(a1 + 592) >> 32);
  v4 = *(_QWORD *)(a1 + 592);
  v5 = ((signed int)v3 - v4) >> 4;
  if ( v5 < 1 )
  {
LABEL_10:
    if ( 1 == ((signed int)v3 - v4) >> 2 )
    {
      result = (_DWORD *)v4;
    }
    else
      v11 = ((signed int)v3 - v4) >> 2;
      if ( v11 == 2 )
      {
        result = (_DWORD *)v4;
      }
      else
        if ( v11 != 3 )
        {
          result = v3;
          goto LABEL_23;
        }
        if ( *(_DWORD *)v4 == a2 )
        result = (_DWORD *)(v4 + 4);
      if ( *result == a2 )
        goto LABEL_23;
      ++result;
    if ( *result != a2 )
      result = v3;
  }
  else
    v6 = v5 + 1;
    while ( 1 )
      v7 = *(_DWORD *)v4 == a2;
      if ( *(_DWORD *)v4 != a2 )
        v7 = *(_DWORD *)(v4 + 4) == a2;
      if ( v7 )
        break;
      result = (_DWORD *)(v4 + 8);
      v9 = *(_DWORD *)(v4 + 8);
      v10 = v9 == a2;
      if ( v9 != a2 )
        result = (_DWORD *)(v4 + 12);
        v10 = *(_DWORD *)(v4 + 12) == a2;
      if ( v10 )
      --v6;
      v4 += 16;
      if ( v6 <= 1 )
        goto LABEL_10;
LABEL_23:
  if ( result != v3 )
    v12 = result + 1;
    v13 = result + 1 == v3;
    if ( result + 1 != v3 )
      v13 = v3 == v12;
    if ( !v13 )
      _aeabi_memmove4(result, v12);
      v3 = *(_DWORD **)(v2 + 596);
    result = v3 - 1;
    *(_DWORD *)(v2 + 596) = v3 - 1;
  return result;
}


int __fastcall Level::getSpecialMultiplier(int a1, unsigned int a2)
{
  int v2; // r4@1
  LevelData *v3; // r5@1
  unsigned int v4; // r10@1
  int v6; // r0@1
  __int64 v7; // kr00_8@1
  _DWORD *v9; // r0@1
  _DWORD *v10; // r7@2
  int v11; // r4@2
  Dimension *v12; // r0@6
  int v13; // r0@9
  int result; // r0@33

  v2 = a1;
  v3 = (LevelData *)(a1 + 144);
  v4 = a2;
  _R9 = LevelData::getGameDifficulty((LevelData *)(a1 + 144));
  v6 = LevelData::getTime(v3);
  v7 = *(_QWORD *)(v2 + 560);
  _R8 = v6;
  v9 = *(_DWORD **)(v7 + 4 * (v4 % HIDWORD(v7)));
  if ( v9 )
  {
    v10 = (_DWORD *)*v9;
    v11 = *(_DWORD *)(*v9 + 4);
    while ( v11 != v4 )
    {
      if ( !*v10 )
      {
        v12 = 0;
        goto LABEL_15;
      }
      v11 = *(_DWORD *)(v7 + 4);
      v9 = v10;
      v10 = (_DWORD *)*v10;
      if ( *(_DWORD *)(v7 + 4) % HIDWORD(v7) != v4 % HIDWORD(v7) )
    }
    if ( v9 )
      v13 = *v9;
      if ( v13 )
        v12 = *(Dimension **)(v13 + 8);
      else
    else
      v12 = 0;
  }
  else
    v12 = 0;
LABEL_15:
  _R0 = Dimension::getMoonBrightness(v12);
  if ( _R9 )
    __asm
      VMOV            S4, R8
      VMOV.F32        S0, #-0.5
      VCVT.F32.S32    S4, S4
      VMOV.F32        S6, #0.25
      VMOV            S2, R0
      VMOV.F32        S12, #0.375
      VADD.F32        S4, S4, S0
      VLDR            S0, =0.0
      VMUL.F32        S10, S2, S6
      VMOV.F32        S8, S0
      VMOV.F32        S2, #1.0
      VMOV.F32        S14, S0
      VCMPE.F32       S4, #0.0
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S10, #0.0
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S8, S4 }
      VCMPE.F32       S4, S2
      VMOV.F32        S4, #0.5
      VMUL.F32        S8, S8, S6
      __asm { VMOVGT.F32      S14, S10 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVGT.F32      S8, S6 }
    __asm { VCMPE.F32       S10, S8 }
    if ( _ZF )
      __asm { VMOVEQ.F32      S12, S4 }
      VMOV.F32        S10, #0.75
      __asm { VMOVGT.F32      S14, S8 }
      VADD.F32        S8, S8, S10
      VADD.F32        S6, S14, S12
      VMOV            S10, R9
      VMUL.F32        S12, S6, S4
      __asm { VMOVEQ.F32      S6, S12 }
      VCVT.F32.S32    S10, S10
      VADD.F32        S6, S8, S6
      VMOV.F32        S8, #2.0
      VMUL.F32        S6, S6, S10
      VCMPE.F32       S6, S8
    if ( !(_NF ^ _VF) )
      __asm
        VMOV.F32        S0, #4.0
        VCMPE.F32       S6, S0
        VMRS            APSR_nzcv, FPSCR
        VMOV.F32        S0, S2
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        __asm
        {
          VMOVLE.F32      S0, #-2.0
          VADDLE.F32      S0, S6, S0
          VMULLE.F32      S0, S0, S4
        }
    __asm { VLDR            S0, =0.0 }
  __asm { VMOV            R0, S0 }
  return result;
}


int __fastcall Level::saveDirtyChunks(int result)
{
  LevelChunk *v1; // r6@0
  int i; // r10@1
  int v3; // r0@2
  int v4; // r8@2
  int j; // r5@2
  int v6; // r4@5
  unsigned int *v7; // r7@6
  int v8; // r1@9
  unsigned int v9; // r2@10
  bool v10; // zf@11
  char v11; // r0@15

  for ( i = *(_DWORD *)(result + 568); i; i = *(_DWORD *)i )
  {
    v3 = Dimension::getChunkSource(*(Dimension **)(i + 8));
    v4 = v3;
    result = (*(int (**)(void))(*(_DWORD *)v3 + 72))();
    for ( j = *(_DWORD *)(result + 8); j; j = *(_DWORD *)j )
    {
      v6 = *(_DWORD *)(j + 20);
      if ( v6 )
      {
        result = *(_DWORD *)(v6 + 4);
        v7 = (unsigned int *)(v6 + 4);
        while ( result )
        {
          __dmb();
          v8 = __ldrex(v7);
          if ( v8 == result )
          {
            v9 = __strex(result + 1, v7);
            result = v8;
            if ( !v9 )
            {
              __dmb();
              v10 = *v7 == 0;
              if ( *v7 )
              {
                v1 = *(LevelChunk **)(j + 16);
                v10 = v1 == 0;
              }
              if ( !v10 && LevelChunk::isDirty(v1) == 1 )
                v11 = *LevelChunk::getState(v1);
                __dmb();
                if ( v11 == 8 )
                  (*(void (__fastcall **)(int, LevelChunk *))(*(_DWORD *)v4 + 44))(v4, v1);
              if ( &pthread_create )
                do
                  result = __ldrex(v7);
                while ( __strex(result - 1, v7) );
              else
                result = (*v7)--;
              if ( result == 1 )
                v1 = (LevelChunk *)(v6 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    result = __ldrex((unsigned int *)v1);
                  while ( __strex(result - 1, (unsigned int *)v1) );
                }
                else
                  result = (*(_DWORD *)v1)--;
                if ( result == 1 )
                  result = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
              break;
            }
          }
          else
            __clrex();
        }
      }
    }
  }
  return result;
}


int __fastcall Level::_destroyEffect(int a1, BlockPos *a2, _BYTE *a3, int a4, signed int a5)
{
  int v5; // r7@1
  int result; // r0@1
  _BOOL4 v8; // r0@3
  int v18; // r5@9
  int v19; // r4@9
  __int64 v21; // r0@9
  unsigned int v23; // r9@10
  int v24; // [sp+10h] [bp-90h]@5
  int v25; // [sp+14h] [bp-8Ch]@8
  signed int v26; // [sp+18h] [bp-88h]@5
  BlockPos *v27; // [sp+1Ch] [bp-84h]@1
  _BYTE *v28; // [sp+20h] [bp-80h]@1
  int v29; // [sp+24h] [bp-7Ch]@1
  float v30; // [sp+34h] [bp-6Ch]@11

  v5 = a1;
  v27 = a2;
  v28 = a3;
  v29 = a4;
  result = *a3;
  if ( *a3 )
  {
    _R1 = a5;
    if ( a5 <= 0 )
    {
      v8 = Block::hasProperty(Block::mBlocks[result], (int)Block::mBlocks, 0x200000LL);
      _R1 = 4;
      if ( v8 )
        _R1 = 5;
    }
    __asm { VMOV            S0, R1 }
    v26 = _R1;
    __asm
      VMOV.F32        S18, #0.5
      VLDR            S22, =0.2
      VCVT.F32.S32    S16, S0
      VLDR            S24, =65535.0
      VMOV.F32        S20, #-0.5
    v24 = 0;
    do
      if ( _R1 >= 2 )
      {
        _R0 = v24;
        __asm { VMOV            S0, R0 }
        _R0 = 1;
        __asm
        {
          VCVT.F32.S32    S0, S0
          VADD.F32        S0, S0, S18
          VDIV.F32        S26, S0, S16
        }
        do
          __asm { VMOV            S0, R0 }
          v25 = _R0;
          _R10 = 0;
          __asm
          {
            VCVT.F32.S32    S0, S0
            VADD.F32        S0, S0, S18
            VDIV.F32        S28, S0, S16
          }
          do
            __asm
            {
              VMOV            S0, R10
              VCVT.F32.S32    S0, S0
            }
            _R0 = v27;
              VLDR            S2, [R0]
              VLDR            S4, [R0,#4]
              VLDR            S6, [R0,#8]
              VCVT.F32.S32    S2, S2
              VCVT.F32.S32    S4, S4
              VADD.F32        S0, S0, S18
              VCVT.F32.S32    S6, S6
            _R1 = v29;
              VADD.F32        S8, S2, S26
              VADD.F32        S10, S4, S28
              VDIV.F32        S0, S0, S16
              VADD.F32        S0, S6, S0
              VSTR            S8, [SP,#0xA0+var_6C]
              VADD.F32        S12, S8, S20
              VSTR            S10, [SP,#0xA0+var_68]
              VADD.F32        S14, S10, S20
              VADD.F32        S1, S0, S20
              VSTR            S0, [SP,#0xA0+var_64]
              VSUB.F32        S2, S12, S2
              VLDR            S0, [R1]
              VSUB.F32        S4, S14, S4
              VLDR            S8, [R1,#4]
              VLDR            S10, [R1,#8]
              VSUB.F32        S6, S1, S6
              VMUL.F32        S2, S2, S22
              VMUL.F32        S4, S4, S22
              VMUL.F32        S6, S6, S22
              VADD.F32        S0, S2, S0
              VADD.F32        S2, S4, S8
              VADD.F32        S4, S6, S10
              VSTR            S0, [SP,#0xA0+var_78]
              VSTR            S2, [SP,#0xA0+var_74]
              VSTR            S4, [SP,#0xA0+var_70]
            v18 = *v28;
            v19 = v28[1];
            _R0 = BlockPos::randomFloat(v27);
              VMOV            S0, R0
              VMUL.F32        S0, S0, S24
              VCVTR.S32.F32   S0, S0
            v21 = *(_QWORD *)(v5 + 116);
            if ( HIDWORD(v21) != (_DWORD)v21 )
              __asm { VMOV            R1, S0 }
              v23 = 0;
              do
              {
                if ( (*(int (__cdecl **)(_DWORD, signed int, float *))(**(_DWORD **)(v21 + 4 * v23) + 48))(
                       *(_DWORD *)(v21 + 4 * v23),
                       18,
                       &v30) )
                {
                  break;
                }
                v21 = *(_QWORD *)(v5 + 116);
                ++v23;
              }
              while ( v23 < (HIDWORD(v21) - (signed int)v21) >> 2 );
            _R1 = v26;
            ++_R10;
          while ( _R10 != v26 );
          _R0 = v25 + 1;
        while ( v25 + 1 != v26 );
      }
      result = v24 + 1;
      v24 = result;
    while ( result != _R1 );
  }
  return result;
}


void __fastcall Level::createPhotoStorage(Level *this)
{
  Level *v1; // r4@1
  void *v2; // r0@2
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  int *v5; // r0@7
  double v6; // r0@8
  int v7; // r5@8
  PhotoStorage *v8; // r0@8
  PhotoStorage *v9; // r0@9
  char *v10; // r0@10
  unsigned int *v11; // r2@12
  signed int v12; // r1@14
  int v13; // [sp+0h] [bp-28h]@2
  char *v14; // [sp+4h] [bp-24h]@1

  v1 = this;
  v14 = (char *)&unk_28898CC;
  if ( *((_BYTE *)this + 5824) )
  {
    Level::getScreenshotsFolder((Level *)&v13, (int)this);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v14,
      &v13);
    v2 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
    {
      v3 = (unsigned int *)(v13 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v4 = __ldrex(v3);
        while ( __strex(v4 - 1, v3) );
      }
      else
        v4 = (*v3)--;
      if ( v4 <= 0 )
        j_j_j_j__ZdlPv_9(v2);
    }
  }
  else
    v5 = (int *)(*(int (**)(void))(**((_DWORD **)this + 32) + 28))();
    EntityInteraction::setInteractText((int *)&v14, v5);
  LODWORD(v6) = operator new(0x2Cu);
  v7 = LODWORD(v6);
  PhotoStorage::PhotoStorage(v6);
  v8 = (PhotoStorage *)*((_DWORD *)v1 + 34);
  *((_DWORD *)v1 + 34) = v7;
  if ( v8 )
    v9 = PhotoStorage::~PhotoStorage(v8);
    operator delete((void *)v9);
  v10 = v14 - 12;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
}


signed int __fastcall Level::_playerChangeDimension(int a1, int a2, int a3)
{
  __int64 v3; // r6@0
  int v4; // r9@1
  int v5; // r11@1
  __int64 v6; // kr00_8@1
  int v7; // r4@1
  _BYTE *v8; // r8@4
  void *v9; // r5@7
  int v10; // r0@7
  Dimension *v11; // r0@9
  const ChunkPos *v12; // r0@9
  unsigned int *v13; // r1@10
  unsigned int v14; // r0@12
  unsigned int *v15; // r5@16
  unsigned int v16; // r0@18
  void (__fastcall *v18)(int *, Dimension *, int, _DWORD); // r5@35
  int v19; // r0@35
  int v20; // r0@35
  int v21; // r1@35
  int v22; // r2@35
  char *v23; // r0@36
  bool v24; // zf@38
  int v25; // r5@41
  int v26; // r7@41
  int v27; // r3@44
  void *v28; // r0@45
  void *v29; // r0@46
  void *v30; // r0@47
  int v31; // r1@49
  int v32; // r2@49
  int v33; // r3@49
  char v34; // r7@49
  int v35; // r5@49
  void (__fastcall *v36)(int, int, void ***, int); // r7@49
  int v37; // r0@49
  void (__fastcall *v38)(int, int); // r5@51
  int v39; // r0@51
  BlockSource *v40; // r5@54
  __int64 v41; // kr08_8@57
  int v42; // r0@57
  int v43; // r7@57
  int v44; // r0@57
  __int64 v45; // r1@57
  int v46; // r1@57
  int v47; // r3@60
  BlockSource *v48; // r7@61
  signed int result; // r0@64
  const CompoundTag *v55; // r1@66
  __int64 v57; // kr10_8@68
  BlockSource *v58; // r0@68
  int v59; // r0@70
  int v60; // r5@72
  void (__fastcall *v61)(int, int, void ***, int); // r8@72
  int v62; // r0@72
  __int64 v63; // r1@72
  int v64; // r1@72
  int v65; // r0@76
  const CompoundTag *v66; // r1@79
  __int64 v68; // kr18_8@81
  BlockSource *v69; // r0@81
  int v70; // r0@83
  unsigned int *v71; // r2@88
  signed int v72; // r1@90
  unsigned int *v73; // r2@92
  signed int v74; // r1@94
  unsigned int *v75; // r2@96
  signed int v76; // r1@98
  int v77; // [sp+8h] [bp-238h]@5
  Dimension *v78; // [sp+Ch] [bp-234h]@24
  Dimension *v79; // [sp+Ch] [bp-234h]@57
  void **v80; // [sp+10h] [bp-230h]@72
  signed int v81; // [sp+14h] [bp-22Ch]@72
  signed int v82; // [sp+18h] [bp-228h]@72
  char v83; // [sp+1Ch] [bp-224h]@72
  int v84; // [sp+20h] [bp-220h]@72
  __int64 v85; // [sp+28h] [bp-218h]@72
  int v86; // [sp+30h] [bp-210h]@72
  __int64 v87; // [sp+34h] [bp-20Ch]@72
  int v88; // [sp+3Ch] [bp-204h]@72
  char v89; // [sp+40h] [bp-200h]@72
  char v90; // [sp+41h] [bp-1FFh]@72
  int v91; // [sp+48h] [bp-1F8h]@73
  int v92; // [sp+4Ch] [bp-1F4h]@75
  int v93; // [sp+50h] [bp-1F0h]@76
  int v94; // [sp+54h] [bp-1ECh]@76
  float v95; // [sp+58h] [bp-1E8h]@68
  float v98; // [sp+64h] [bp-1DCh]@68
  Entity *v99; // [sp+70h] [bp-1D0h]@67
  float v100; // [sp+74h] [bp-1CCh]@81
  float v103; // [sp+80h] [bp-1C0h]@81
  Entity *v104; // [sp+8Ch] [bp-1B4h]@80
  char v105; // [sp+90h] [bp-1B0h]@78
  void **v106; // [sp+98h] [bp-1A8h]@78
  int v107; // [sp+9Ch] [bp-1A4h]@78
  int v108; // [sp+A0h] [bp-1A0h]@78
  char v109; // [sp+A4h] [bp-19Ch]@78
  int v110; // [sp+A8h] [bp-198h]@78
  int v111; // [sp+ACh] [bp-194h]@78
  int v112; // [sp+B0h] [bp-190h]@78
  int v113; // [sp+B4h] [bp-18Ch]@78
  int v114; // [sp+B8h] [bp-188h]@78
  __int64 v115; // [sp+C0h] [bp-180h]@78
  float v116; // [sp+C8h] [bp-178h]@61
  char v117; // [sp+D4h] [bp-16Ch]@61
  float v118; // [sp+E0h] [bp-160h]@61
  char v119; // [sp+ECh] [bp-154h]@61
  void **v120; // [sp+F8h] [bp-148h]@57
  int v121; // [sp+FCh] [bp-144h]@57
  int v122; // [sp+100h] [bp-140h]@57
  char v123; // [sp+104h] [bp-13Ch]@57
  int v124; // [sp+108h] [bp-138h]@57
  __int64 v125; // [sp+110h] [bp-130h]@57
  int v126; // [sp+118h] [bp-128h]@57
  __int64 v127; // [sp+11Ch] [bp-124h]@57
  int v128; // [sp+124h] [bp-11Ch]@57
  char v129; // [sp+128h] [bp-118h]@57
  char v130; // [sp+129h] [bp-117h]@57
  int v131; // [sp+130h] [bp-110h]@58
  int v132; // [sp+134h] [bp-10Ch]@59
  int v133; // [sp+138h] [bp-108h]@60
  int v134; // [sp+13Ch] [bp-104h]@60
  char v135; // [sp+140h] [bp-100h]@54
  void **v136; // [sp+14Ch] [bp-F4h]@49
  int v137; // [sp+150h] [bp-F0h]@49
  int v138; // [sp+154h] [bp-ECh]@49
  char v139; // [sp+158h] [bp-E8h]@49
  int v140; // [sp+15Ch] [bp-E4h]@49
  int v141; // [sp+160h] [bp-E0h]@49
  int v142; // [sp+164h] [bp-DCh]@49
  int v143; // [sp+168h] [bp-D8h]@49
  char v144; // [sp+16Ch] [bp-D4h]@49
  void **v145; // [sp+170h] [bp-D0h]@45
  int v146; // [sp+1A8h] [bp-98h]@47
  int v147; // [sp+1ACh] [bp-94h]@46
  int v148; // [sp+1B0h] [bp-90h]@45
  int v149; // [sp+1BCh] [bp-84h]@42
  int v150; // [sp+1C0h] [bp-80h]@42
  int v151; // [sp+1C4h] [bp-7Ch]@42
  char v152; // [sp+1C8h] [bp-78h]@41
  int v153; // [sp+1D4h] [bp-6Ch]@38
  int v154; // [sp+1D8h] [bp-68h]@38
  int v155; // [sp+1DCh] [bp-64h]@38
  int v156; // [sp+1E0h] [bp-60h]@35
  int v157; // [sp+1E4h] [bp-5Ch]@35
  int v158; // [sp+1E8h] [bp-58h]@35
  int v159; // [sp+1ECh] [bp-54h]@34
  int v160; // [sp+1F0h] [bp-50h]@36
  int v161; // [sp+1F4h] [bp-4Ch]@36
  int v162; // [sp+1F8h] [bp-48h]@37
  int v163; // [sp+1FCh] [bp-44h]@37
  int v164; // [sp+200h] [bp-40h]@37
  int v165; // [sp+204h] [bp-3Ch]@32
  int v166; // [sp+208h] [bp-38h]@32
  int v167; // [sp+20Ch] [bp-34h]@32
  LevelChunk *v168; // [sp+210h] [bp-30h]@9
  int v169; // [sp+214h] [bp-2Ch]@9

  v4 = a3;
  v5 = a1;
  v6 = *(_QWORD *)a3;
  v7 = a2;
  if ( !(unsigned int)*(_QWORD *)a3 )
  {
    v77 = *(_DWORD *)(a3 + 8);
    LODWORD(v3) = Level::createDimension(a1, *(_DWORD *)(a3 + 8));
    if ( !*(_BYTE *)(v5 + 5824) )
    {
      HIDWORD(v3) = Player::getAgent((Player *)v7);
      if ( HIDWORD(v3) )
      {
        v9 = operator new(0x1Cu);
        CompoundTag::CompoundTag((int)v9);
        v10 = *(_DWORD *)(v4 + 28);
        *(_DWORD *)(v4 + 28) = v9;
        if ( v10 )
          (*(void (**)(void))(*(_DWORD *)v10 + 4))();
        Entity::transferTickingArea((Entity *)HIDWORD(v3), (Dimension *)v3);
        (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)HIDWORD(v3) + 472))(HIDWORD(v3), *(_DWORD *)(v4 + 28));
        v11 = (Dimension *)Entity::getDimension((Entity *)v7);
        v12 = (const ChunkPos *)Dimension::getChunkSource(v11);
        ChunkSource::getAvailableChunk((ChunkSource *)&v168, v12);
        Level::removeAutonomousEntity((Level *)v5, (Entity *)HIDWORD(v3), v168);
        HIDWORD(v3) = v169;
        if ( v169 )
        {
          v13 = (unsigned int *)(v169 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
          }
          else
            v14 = (*v13)--;
          if ( v14 == 1 )
            v15 = (unsigned int *)(HIDWORD(v3) + 8);
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 8))(HIDWORD(v3));
            if ( &pthread_create )
            {
              __dmb();
              do
                v16 = __ldrex(v15);
              while ( __strex(v16 - 1, v15) );
            }
            else
              v16 = (*v15)--;
            if ( v16 == 1 )
              (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 12))(HIDWORD(v3));
        }
        Player::setAgent((Player *)v7, 0);
      }
    }
    v8 = (_BYTE *)(v5 + 5824);
    v78 = (Dimension *)v3;
    *(_DWORD *)(v7 + 4292) = 3;
    _ZF = *(_BYTE *)(v5 + 5824) == 0;
    if ( *(_BYTE *)(v5 + 5824) )
      v3 = *(_QWORD *)(v5 + 24);
      _ZF = (_DWORD)v3 == HIDWORD(v3);
    if ( !_ZF )
      do
        if ( !(*(int (**)(void))(**(_DWORD **)v3 + 1408))() )
          (*(void (**)(void))(**(_DWORD **)v3 + 1200))();
        LODWORD(v3) = v3 + 4;
      while ( HIDWORD(v3) != (_DWORD)v3 );
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 1204))(v7);
    if ( *v8 || !*(_BYTE *)(v4 + 24) )
      goto LABEL_48;
    v165 = 0;
    v166 = 0;
    v167 = 0;
    if ( HIDWORD(v6) == 2 )
      if ( Player::hasRespawnPosition((Player *)v7) == 1 )
        Player::getSpawnPosition((Player *)&v159, v7);
      else
        v23 = LevelData::getSpawn((LevelData *)(v5 + 144));
        v159 = *(_DWORD *)v23;
        v160 = *((_DWORD *)v23 + 1);
        v161 = *((_DWORD *)v23 + 2);
      Vec3::Vec3((int)&v162, (int)&v159);
      v20 = v162;
      v21 = v163;
      v22 = v164;
      v165 = v162;
      v166 = v163;
      v167 = v164;
      *(_DWORD *)(v7 + 4292) = 4;
      *(_BYTE *)(v4 + 25) = 1;
    else
      v18 = *(void (__fastcall **)(int *, Dimension *, int, _DWORD))(*(_DWORD *)v78 + 200);
      v19 = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 52))(v7);
      v18(&v156, v78, v19, HIDWORD(v6));
      v20 = v156;
      v21 = v157;
      v22 = v158;
      v165 = v156;
      v166 = v157;
      v167 = v158;
    v24 = HIDWORD(v6) == 2;
    v153 = 0;
    v154 = 0;
    v155 = 0;
    if ( HIDWORD(v6) != 2 )
      v24 = v77 == 2;
    if ( !v24 )
      v25 = *(_DWORD *)(v5 + 588);
      v26 = Dimension::getId(v78);
      BlockPos::BlockPos((int)&v152, (int)&v165);
      if ( PortalForcer::findPortal(v25, v26, (int)&v152, 128, (int)&v153) )
        Vec3::Vec3((int)&v149, (int)&v153);
        *(_DWORD *)(v4 + 12) = v149;
        *(_DWORD *)(v4 + 16) = v150;
        *(_DWORD *)(v4 + 20) = v151;
        goto LABEL_45;
      v20 = v165;
      v21 = v166;
      v22 = v167;
    v27 = v4 + 12;
    *(_DWORD *)v27 = v20;
    *(_DWORD *)(v27 + 4) = v21;
    *(_DWORD *)(v27 + 8) = v22;
LABEL_45:
    EventPacket::EventPacket((int)&v145, (Entity *)v7, *(_QWORD *)(v4 + 4), *(_QWORD *)(v4 + 4) >> 32);
    (*(void (__fastcall **)(int, void ***))(*(_DWORD *)v7 + 1448))(v7, &v145);
    v145 = &off_26E9D30;
    v28 = (void *)(v148 - 12);
    if ( (int *)(v148 - 12) != &dword_28898C0 )
      v71 = (unsigned int *)(v148 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v72 = __ldrex(v71);
        while ( __strex(v72 - 1, v71) );
        v72 = (*v71)--;
      if ( v72 <= 0 )
        j_j_j_j__ZdlPv_9(v28);
    v29 = (void *)(v147 - 12);
    if ( (int *)(v147 - 12) != &dword_28898C0 )
      v73 = (unsigned int *)(v147 - 4);
          v74 = __ldrex(v73);
        while ( __strex(v74 - 1, v73) );
        v74 = (*v73)--;
      if ( v74 <= 0 )
        j_j_j_j__ZdlPv_9(v29);
    v30 = (void *)(v146 - 12);
    if ( (int *)(v146 - 12) != &dword_28898C0 )
      v75 = (unsigned int *)(v146 - 4);
          v76 = __ldrex(v75);
        while ( __strex(v76 - 1, v75) );
        v76 = (*v75)--;
      if ( v76 <= 0 )
        j_j_j_j__ZdlPv_9(v30);
LABEL_48:
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 1208))(v7);
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 1200))(v7);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v7 + 48))(v7, v4 + 12);
    (*(void (__fastcall **)(int, _DWORD *, _DWORD *, _DWORD))(*(_DWORD *)v7 + 112))(v7, &Vec3::ZERO, &Vec2::ZERO, 0);
    if ( !*v8 )
      v31 = *(_DWORD *)(v4 + 12);
      v32 = *(_DWORD *)(v4 + 16);
      v33 = *(_DWORD *)(v4 + 20);
      v34 = *(_BYTE *)(v4 + 25);
      v137 = 2;
      v138 = 1;
      v139 = 0;
      v136 = &off_26E9864;
      v140 = v77;
      v141 = v31;
      v142 = v32;
      v143 = v33;
      v144 = v34;
      v35 = *(_DWORD *)(v5 + 660);
      v36 = *(void (__fastcall **)(int, int, void ***, int))(*(_DWORD *)v35 + 16);
      v37 = Player::getClientSubId((Player *)v7);
      v36(v35, v7 + 4392, &v136, v37);
      if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v7 + 1408))(v7) )
        *(_BYTE *)(v7 + 4296) = 1;
    *(_DWORD *)(v7 + 4588) = 0;
    v38 = *(void (__fastcall **)(int, int))(*(_DWORD *)v7 + 1196);
    v39 = Dimension::getChunkSource(v78);
    v38(v7, v39);
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 1212))(v7);
    *(_DWORD *)v4 = 1;
    goto LABEL_52;
  }
  if ( (_DWORD)v6 == 2 )
    goto LABEL_64;
  if ( (_DWORD)v6 != 1 )
    return 0;
  v8 = (_BYTE *)(a1 + 5824);
LABEL_52:
  if ( *v8 || !*(_BYTE *)(v4 + 24) )
    goto LABEL_61;
  v40 = (BlockSource *)Entity::getRegion((Entity *)v7);
  BlockPos::BlockPos((BlockPos *)&v135, *(float *)(v7 + 72), *(float *)(v7 + 76), *(float *)(v7 + 80));
  if ( BlockSource::hasChunksAt(v40, (const BlockPos *)&v135, 32) != 1 )
  if ( HIDWORD(v6) != 2 )
    PortalForcer::force(*(PortalForcer **)(v5 + 588), (Entity *)v7);
  v41 = *(_QWORD *)(*(_DWORD *)v7 + 48);
  v42 = ((int (__fastcall *)(_DWORD))HIDWORD(v41))(v7);
  ((void (__fastcall *)(int, int))v41)(v7, v42);
  (*(void (__fastcall **)(int, _DWORD *, _DWORD *, _DWORD))(*(_DWORD *)v7 + 112))(v7, &Vec3::ZERO, &Vec2::ZERO, 0);
  v43 = *(_DWORD *)(v5 + 660);
  v79 = *(Dimension **)(*(_DWORD *)v43 + 16);
  v121 = 2;
  v122 = 1;
  v123 = 0;
  v120 = &off_26DA5F8;
  Entity::getRuntimeID((Entity *)&v124, v7);
  v44 = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 52))(v7);
  v45 = *(_QWORD *)v44;
  v126 = *(_DWORD *)(v44 + 8);
  v125 = v45;
  v127 = *(_QWORD *)(v7 + 120);
  v128 = *(_DWORD *)(v7 + 3420);
  v129 = 1;
  v130 = *(_BYTE *)(v7 + 216);
  v46 = *(_DWORD *)(v7 + 512);
  if ( v46 )
    Entity::getRuntimeID((Entity *)&v131, v46);
  else
    v131 = 0;
    v132 = 0;
  v133 = 0;
  v134 = 0;
  v47 = Player::getClientSubId((Player *)v7);
  ((void (__fastcall *)(int, int, void ***, int))v79)(v43, v7 + 4392, &v120, v47);
  *(_BYTE *)(v4 + 24) = 0;
LABEL_61:
  v48 = (BlockSource *)Entity::getRegion((Entity *)v7);
  _R0 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v7 + 52))(v7);
  __asm
    VMOV.F32        S0, #-16.0
    VLDR            S2, [R0]
    VLDR            S4, [R0,#4]
    VLDR            S6, [R0,#8]
    VADD.F32        S2, S2, S0
    VADD.F32        S4, S4, S0
    VADD.F32        S0, S6, S0
    VSTR            S2, [SP,#0x240+var_160]
    VSTR            S4, [SP,#0x240+var_15C]
    VSTR            S0, [SP,#0x240+var_158]
  BlockPos::BlockPos((int)&v119, (int)&v118);
    VMOV.F32        S0, #16.0
    VSTR            S2, [SP,#0x240+var_178]
    VSTR            S4, [SP,#0x240+var_174]
    VSTR            S0, [SP,#0x240+var_170]
  BlockPos::BlockPos((int)&v117, (int)&v116);
  if ( BlockSource::hasChunksAt(v48, (const BlockPos *)&v119, (const BlockPos *)&v117) != 1 )
  if ( !*(_BYTE *)(v4 + 25) )
    if ( *v8 )
      Entity::getRuntimeID((Entity *)&v105, v7);
      v107 = 2;
      v108 = 1;
      v109 = 0;
      v106 = &off_26DA670;
      v112 = 0;
      v113 = 0;
      v110 = 0;
      v111 = 0;
      v114 = 14;
      v115 = *(_QWORD *)&v105;
      (*(void (**)(void))(**(_DWORD **)(v5 + 660) + 8))();
      v66 = *(const CompoundTag **)(v4 + 28);
      if ( v66 )
        EntityFactory::loadEntity((EntityFactory *)&v104, v66);
        if ( v104 )
          _R5 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v7 + 52))(v7);
          Entity::buildForward((Entity *)&v100, v7);
          __asm
            VLDR            S0, [SP,#0x240+var_1CC]
            VLDR            S2, [SP,#0x240+var_1C8]
            VLDR            S4, [SP,#0x240+var_1C4]
            VADD.F32        S0, S0, S0
            VADD.F32        S2, S2, S2
            VLDR            S6, [R5]
            VADD.F32        S4, S4, S4
            VLDR            S8, [R5,#4]
            VLDR            S10, [R5,#8]
            VADD.F32        S0, S6, S0
            VADD.F32        S2, S8, S2
            VADD.F32        S4, S10, S4
            VSTR            S0, [SP,#0x240+var_1C0]
            VSTR            S2, [SP,#0x240+var_1BC]
            VSTR            S4, [SP,#0x240+var_1B8]
          v68 = *(_QWORD *)Entity::getUniqueID(v104);
          v69 = (BlockSource *)Entity::getRegion((Entity *)v7);
          Level::moveAutonomousEntityTo(v5, (int)&v103, v68, HIDWORD(v68), v69);
          Player::setAgent((Player *)v7, v104);
          if ( v104 )
            (*(void (**)(void))(*(_DWORD *)v104 + 32))();
        v70 = *(_DWORD *)(v4 + 28);
        *(_DWORD *)(v4 + 28) = 0;
        if ( v70 )
          (*(void (**)(void))(*(_DWORD *)v70 + 4))();
    *(_DWORD *)(v7 + 4292) = 0;
    return 1;
  *(_DWORD *)v4 = 2;
LABEL_64:
  result = 0;
  if ( !*(_BYTE *)(v7 + 4821) )
    return result;
  *(_DWORD *)(v7 + 4292) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 1240))(v7);
  if ( !*(_BYTE *)(v5 + 5824) )
    v55 = *(const CompoundTag **)(v4 + 28);
    if ( v55 )
      EntityFactory::loadEntity((EntityFactory *)&v99, v55);
      if ( v99 )
        _R5 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v7 + 52))(v7);
        Entity::buildForward((Entity *)&v95, v7);
        __asm
          VLDR            S0, [SP,#0x240+var_1E8]
          VLDR            S2, [SP,#0x240+var_1E4]
          VLDR            S4, [SP,#0x240+var_1E0]
          VADD.F32        S0, S0, S0
          VADD.F32        S2, S2, S2
          VLDR            S6, [R5]
          VADD.F32        S4, S4, S4
          VLDR            S8, [R5,#4]
          VLDR            S10, [R5,#8]
          VADD.F32        S0, S6, S0
          VADD.F32        S2, S8, S2
          VADD.F32        S4, S10, S4
          VSTR            S0, [SP,#0x240+var_1DC]
          VSTR            S2, [SP,#0x240+var_1D8]
          VSTR            S4, [SP,#0x240+var_1D4]
        v57 = *(_QWORD *)Entity::getUniqueID(v99);
        v58 = (BlockSource *)Entity::getRegion((Entity *)v7);
        Level::moveAutonomousEntityTo(v5, (int)&v98, v57, HIDWORD(v57), v58);
        Player::setAgent((Player *)v7, v99);
        if ( v99 )
          (*(void (**)(void))(*(_DWORD *)v99 + 32))();
      v59 = *(_DWORD *)(v4 + 28);
      *(_DWORD *)(v4 + 28) = 0;
      if ( v59 )
        (*(void (**)(void))(*(_DWORD *)v59 + 4))();
  v60 = *(_DWORD *)(v5 + 660);
  v61 = *(void (__fastcall **)(int, int, void ***, int))(*(_DWORD *)v60 + 16);
  v81 = 2;
  v82 = 1;
  v83 = 0;
  v80 = &off_26DA5F8;
  Entity::getRuntimeID((Entity *)&v84, v7);
  v62 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v7 + 52))(v7);
  v63 = *(_QWORD *)v62;
  v86 = *(_DWORD *)(v62 + 8);
  v85 = v63;
  v87 = *(_QWORD *)(v7 + 120);
  v88 = *(_DWORD *)(v7 + 3420);
  v89 = 1;
  v90 = *(_BYTE *)(v7 + 216);
  v64 = *(_DWORD *)(v7 + 512);
  if ( v64 )
    Entity::getRuntimeID((Entity *)&v91, v64);
    v91 = 0;
    v92 = 0;
  v93 = 0;
  v94 = 0;
  v65 = Player::getClientSubId((Player *)v7);
  v61(v60, v7 + 4392, &v80, v65);
  return 1;
}


unsigned int __fastcall Level::getRandomPlayer(Level *this)
{
  Level *v1; // r4@1
  unsigned int result; // r0@1
  int v3; // r1@1 OVERLAPPED
  int v4; // r2@1 OVERLAPPED
  signed int v5; // r2@2

  v1 = this;
  result = 0;
  *(_QWORD *)&v3 = *((_QWORD *)v1 + 3);
  if ( v3 != v4 )
  {
    v5 = v4 - v3;
    if ( 0 != v5 >> 2 )
    {
      result = Random::_genRandInt32((Level *)((char *)v1 + 732)) % (v5 >> 2);
      v3 = *((_DWORD *)v1 + 6);
    }
    result = *(_DWORD *)(v3 + 4 * result);
  }
  return result;
}


int __fastcall Level::addEntity(int a1, BlockSource *a2, Entity **a3)
{
  int v3; // r8@0
  Entity **v4; // r6@1
  BlockSource *v5; // r5@1
  Entity *v6; // r4@1
  int v7; // r10@1
  Level *v8; // r0@2
  int v9; // r4@2
  __int64 v10; // kr00_8@2
  int v11; // r6@2
  unsigned int v12; // r11@2
  unsigned int v13; // r4@2
  int *v14; // r0@2
  bool v15; // zf@2
  int v16; // r7@5
  int v17; // r0@5
  int v18; // r1@13
  __int64 v19; // r4@13
  bool v20; // zf@13
  int v21; // r0@16
  Entity *v22; // r0@23
  __int64 v23; // kr10_8@24
  Entity *v24; // r0@24
  signed __int64 v25; // r2@24
  char *v26; // r0@25
  int v27; // r0@25
  Entity *v28; // r7@26
  unsigned int v29; // r4@28
  Dimension *v30; // r0@28
  __int64 v31; // r0@28
  Dimension *v32; // r0@31
  BlockSource *v34; // [sp+8h] [bp-58h]@2
  Entity **v35; // [sp+Ch] [bp-54h]@2
  Entity *v36; // [sp+14h] [bp-4Ch]@26
  char v37; // [sp+18h] [bp-48h]@25
  char v38; // [sp+20h] [bp-40h]@25
  __int64 v39; // [sp+28h] [bp-38h]@25
  __int64 v40; // [sp+30h] [bp-30h]@25

  v4 = a3;
  v5 = a2;
  v6 = *a3;
  v7 = a1;
  if ( !*a3 )
    return 0;
  v8 = (Level *)BlockSource::getLevel(a2);
  Entity::_setLevelPtr(v6, v8);
  Entity::setRegion(*v4, v5);
  v34 = v5;
  v9 = BlockSource::getDimension(v5);
  v35 = v4;
  v10 = *(_QWORD *)Entity::getUniqueID(*v4);
  v12 = *(_QWORD *)(v9 + 224) >> 32;
  v11 = *(_QWORD *)(v9 + 224);
  v13 = (v10 + ((HIDWORD(v10) - 1640531527) << 6) + ((unsigned int)(HIDWORD(v10) - 1640531527) >> 2) - 1640531527) ^ (HIDWORD(v10) - 1640531527);
  v14 = *(int **)(v11 + 4 * (v13 % v12));
  v15 = v14 == 0;
  if ( v14 )
  {
    v3 = *v14;
    v15 = *v14 == 0;
  }
  if ( !v15 )
    v16 = *(_DWORD *)(v3 + 24);
    v17 = 0;
    do
    {
      if ( v16 != v13 || *(_QWORD *)(v3 + 8) != v10 )
      {
        v11 = 0;
        if ( v17 )
          return v11;
      }
      else
        v11 = v17 + 1;
      v3 = *(_DWORD *)v3;
      if ( !v3 )
        break;
      v16 = *(_DWORD *)(v3 + 24);
      v17 = v11;
    }
    while ( *(_DWORD *)(v3 + 24) % v12 == v13 % v12 );
    if ( v11 )
      return 0;
  v19 = *(_QWORD *)Entity::getUniqueID(*v35);
  v20 = ((unsigned int)v19 & HIDWORD(v19)) == -1;
  if ( ((unsigned int)v19 & HIDWORD(v19)) != -1 )
    v11 = *(_DWORD *)(v7 + 568);
    v20 = v11 == 0;
  if ( !v20 )
    while ( 1 )
      v21 = Dimension::fetchEntity(*(_DWORD *)(v11 + 8), v18, v19, 0);
      if ( v21 )
      v11 = *(_DWORD *)v11;
      if ( !v11 )
        goto LABEL_20;
    if ( Entity::hasCategory(v21, 1) )
LABEL_20:
  if ( !(*(int (**)(void))(*(_DWORD *)*v35 + 180))()
    && !LevelData::getGameDifficulty((LevelData *)(v7 + 144))
    && !*((_BYTE *)*v35 + 538) )
  v22 = *v35;
  *((_BYTE *)v22 + 538) = 0;
  if ( !Entity::hasRuntimeID(v22) )
    v23 = *(_QWORD *)(v7 + 80);
    v24 = *v35;
    v25 = *(_QWORD *)(v7 + 80) + 1LL;
    *(_QWORD *)(v7 + 80) = v25;
    Entity::setRuntimeID((int)v24, v23, v25, SHIDWORD(v25));
  Entity::getRuntimeID((Entity *)&v38, (int)*v35);
  v26 = Entity::getUniqueID(*v35);
  v39 = *(_QWORD *)&v38;
  v40 = *(_QWORD *)v26;
  std::_Hashtable<EntityRuntimeID,std::pair<EntityRuntimeID const,EntityUniqueID>,std::allocator<std::pair<EntityRuntimeID const,EntityUniqueID>>,std::__detail::_Select1st,std::equal_to<EntityRuntimeID>,std::hash<EntityRuntimeID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::pair<EntityRuntimeID,EntityUniqueID>>(
    &v37,
    (unsigned __int64 *)(v7 + 88),
    (int)&v39);
  ChunkPos::ChunkPos((int)&v37, (int)*v35 + 72);
  v27 = BlockSource::getChunk(v34, (const ChunkPos *)&v37);
  v11 = 0;
  if ( v27 )
    v28 = *v35;
    *((_BYTE *)v28 + 40) = 1;
    *v35 = 0;
    v36 = v28;
    LevelChunk::addEntity(v27, (int *)&v36);
    if ( v36 )
      (*(void (**)(void))(*(_DWORD *)v36 + 32))();
    v29 = 0;
    v36 = 0;
    v30 = (Dimension *)BlockSource::getDimension(v34);
    Dimension::_registerEntity(v30, v28);
    v31 = *(_QWORD *)(v7 + 116);
    if ( HIDWORD(v31) != (_DWORD)v31 )
      do
        (*(void (**)(void))(**(_DWORD **)(v31 + 4 * v29) + 60))();
        v31 = *(_QWORD *)(v7 + 116);
        ++v29;
      while ( v29 < (HIDWORD(v31) - (signed int)v31) >> 2 );
    Entity::reload(v28);
    if ( Entity::isTickingEntity(v28) )
      v32 = (Dimension *)BlockSource::getDimension(v34);
      Dimension::_onNewTickingEntity(v32, v28);
    v11 = (int)v28;
  return v11;
}


int __fastcall Level::setIsClientSide(int result, bool a2)
{
  *(_BYTE *)(result + 5824) = a2;
  return result;
}


SavedDataStorage *__fastcall Level::setXBLBroadcastMode(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@1
  int i; // r5@2
  SavedDataStorage *result; // r0@5

  v2 = a1;
  LevelData::setXBLBroadcastMode(a1 + 144, a2);
  v3 = *(_DWORD *)(v2 + 128);
  if ( v3 )
  {
    (*(void (**)(void))(*(_DWORD *)v3 + 24))();
    for ( i = *(_DWORD *)(v2 + 5936); i; i = *(_DWORD *)i )
      MapItemSavedData::trySave(*(MapItemSavedData **)(i + 16), *(LevelStorage **)(v2 + 128));
  }
  result = *(SavedDataStorage **)(v2 + 132);
  if ( result )
    result = (SavedDataStorage *)j_j_j__ZN16SavedDataStorage4saveEv(result);
  return result;
}


int __fastcall Level::waitAsyncSuspendWork(Level *this)
{
  Level *v1; // r4@1
  int i; // r5@1
  int result; // r0@4

  v1 = this;
  for ( i = *((_DWORD *)this + 142); i; i = *(_DWORD *)i )
    (*(void (**)(void))(**(_DWORD **)(*(_DWORD *)(i + 8) + 196) + 64))();
  result = *((_DWORD *)v1 + 32);
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 100))();
  return result;
}


int __fastcall Level::addParticle(int a1, int a2, int a3)
{
  int v3; // r7@1
  int v4; // r8@1
  int v5; // r6@1
  int v6; // r1@1 OVERLAPPED
  int result; // r0@1
  int v8; // r2@1
  int v9; // r4@2

  v3 = a1;
  v4 = a3;
  v5 = a2;
  *(_QWORD *)&v6 = *(_QWORD *)(a1 + 116);
  result = 0;
  if ( v8 != v6 )
  {
    v9 = 0;
    while ( 1 )
    {
      result = (*(int (__cdecl **)(_DWORD, int, int))(**(_DWORD **)(v6 + 4 * v9) + 48))(
                 *(_DWORD *)(v6 + 4 * v9),
                 v5,
                 v4);
      if ( result )
        break;
      v6 = *(_QWORD *)(v3 + 116);
      if ( ++v9 >= (unsigned int)((signed int)((*(_QWORD *)(v3 + 116) >> 32) - v6) >> 2) )
        return 0;
    }
  }
  return result;
}


int __fastcall Level::potionSplash(Level *this, const Vec3 *a2, const Color *a3, int a4)
{
  Level *v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  const Vec3 *v7; // r6@1
  int v8; // r0@2
  int v9; // r2@2
  int v10; // r3@2
  void **v11; // [sp+4h] [bp-34h]@2
  int v12; // [sp+8h] [bp-30h]@2
  int v13; // [sp+Ch] [bp-2Ch]@2
  char v14; // [sp+10h] [bp-28h]@2
  int v15; // [sp+14h] [bp-24h]@2
  int v16; // [sp+18h] [bp-20h]@2
  int v17; // [sp+1Ch] [bp-1Ch]@2
  int v18; // [sp+20h] [bp-18h]@2
  int v19; // [sp+24h] [bp-14h]@4

  v4 = this;
  result = *((_BYTE *)this + 5824);
  v6 = a4;
  v7 = a2;
  if ( !result )
  {
    v8 = Color::toARGB(a3);
    v12 = 2;
    v13 = 1;
    v14 = 0;
    v11 = &off_26E956C;
    v15 = 2002;
    v9 = *((_DWORD *)v7 + 1);
    v10 = *((_DWORD *)v7 + 2);
    v16 = *(_DWORD *)v7;
    v17 = v9;
    v18 = v10;
    if ( v6 )
      v8 |= 0x1000000u;
    v19 = v8;
    result = (*(int (**)(void))(**((_DWORD **)v4 + 165) + 8))();
  }
  return result;
}


int __fastcall Level::getPlayerAbilities(int a1, unsigned __int64 *a2)
{
  unsigned int v2; // r10@1
  unsigned int v3; // r11@1
  int v4; // r6@1
  int v5; // r0@1
  int v6; // r5@2
  int v7; // r7@2
  bool v8; // zf@3
  int v9; // r4@6
  int result; // r0@8

  v2 = *(_DWORD *)(a1 + 5960);
  v3 = (*a2 + (((*a2 >> 32) - 1640531527) << 6) + ((unsigned int)((*a2 >> 32) - 1640531527) >> 2) - 1640531527) ^ ((*a2 >> 32) - 1640531527);
  v4 = v3 % *(_DWORD *)(a1 + 5960);
  v5 = *(_DWORD *)(*(_DWORD *)(a1 + 5956) + 4 * v4);
  if ( v5 )
  {
    v6 = *(_DWORD *)v5;
    v7 = *(_DWORD *)(*(_DWORD *)v5 + 88);
    while ( 1 )
    {
      v8 = v7 == v3;
      if ( v7 == v3 )
        v8 = *(_QWORD *)(v6 + 8) == *a2;
      if ( v8 )
        break;
      v9 = *(_DWORD *)v6;
      if ( !*(_DWORD *)v6 )
      {
        result = 0;
        goto LABEL_14;
      }
      v7 = *(_DWORD *)(v9 + 88);
      v5 = v6;
      v6 = *(_DWORD *)v6;
      if ( *(_DWORD *)(v9 + 88) % v2 != v4 )
    }
    if ( v5 )
      result = *(_DWORD *)v5;
    else
      result = 0;
  }
  else
    result = 0;
LABEL_14:
  if ( result )
    result += 16;
  return result;
}


int __fastcall Level::onChunkDiscarded(Level *this, LevelChunk *a2)
{
  Level *v2; // r5@1
  LevelChunk *v3; // r11@1
  int v4; // r0@2
  Level *v5; // r9@3
  unsigned int v6; // r6@3
  Entity *v7; // r7@4
  Entity **v8; // r4@7
  __int64 v9; // kr00_8@7
  Entity *v10; // t1@8
  _DWORD *v11; // r0@9
  void (__cdecl *v12)(_DWORD); // r3@9
  Entity **v13; // r0@9
  Entity **v14; // r7@9
  int v15; // r4@10
  int v16; // r0@12
  int result; // r0@18
  Dimension *v18; // r0@19
  __int64 i; // r4@20
  int v20; // t1@21
  _DWORD *v21; // [sp+0h] [bp-40h]@9
  int (__fastcall *v22)(void **, _DWORD **, int); // [sp+8h] [bp-38h]@9
  signed int (__fastcall *v23)(LevelChunk ***, Entity *); // [sp+Ch] [bp-34h]@9
  char v24; // [sp+10h] [bp-30h]@4

  v2 = this;
  v3 = a2;
  if ( !*((_BYTE *)this + 5984) )
  {
    v4 = *((_DWORD *)this + 1449);
    if ( *((_DWORD *)v2 + 1450) != v4 )
    {
      v5 = (Level *)((char *)v2 + 5796);
      v6 = 0;
      do
      {
        v7 = *(Entity **)(v4 + 4 * v6);
        BlockPos::BlockPos((int)&v24, (int)v7 + 72);
        if ( LevelChunk::isBlockInChunk(v3, (const BlockPos *)&v24) == 1 )
        {
          Level::removeAutonomousEntity(v2, v7, v3);
          --v6;
        }
        v4 = *(_DWORD *)v5;
        ++v6;
      }
      while ( v6 < (*((_DWORD *)v2 + 1450) - *(_DWORD *)v5) >> 2 );
    }
  }
  v9 = *(_QWORD *)LevelChunk::getEntities(v3);
  v8 = (Entity **)v9;
  if ( (_DWORD)v9 != HIDWORD(v9) )
    do
      (*(void (__fastcall **)(Level *, Entity *, signed int))(*(_DWORD *)v2 + 108))(v2, *v8, 1);
      v10 = *v8;
      ++v8;
      Entity::onChunkDiscarded(v10);
    while ( (Entity **)HIDWORD(v9) != v8 );
  v11 = operator new(4u);
  *v11 = v3;
  v12 = (void (__cdecl *)(_DWORD))sub_1913416;
  v21 = v11;
  v22 = sub_1913416;
  v23 = sub_19133E0;
  v13 = (Entity **)(*((_QWORD *)v2 + 3) >> 32);
  v14 = (Entity **)*((_QWORD *)v2 + 3);
  if ( v14 == v13 )
    goto LABEL_24;
  v15 = (int)(v13 - 1);
  do
    if ( !v12 )
      sub_21E5F48();
    v16 = v23((LevelChunk ***)&v21, *v14);
    v12 = (void (__cdecl *)(_DWORD))v22;
    if ( (Entity **)v15 == v14 )
      break;
    ++v14;
  while ( !(v16 ^ 1) );
  if ( v22 )
LABEL_24:
    v12(&v21);
  result = *((_BYTE *)v2 + 5984);
  if ( !*((_BYTE *)v2 + 5984) )
    v18 = (Dimension *)LevelChunk::getDimension(v3);
    result = Dimension::onChunkDiscarded(v18, v3);
  for ( i = *(_QWORD *)((char *)v2 + 116);
        HIDWORD(i) != (_DWORD)i;
        result = (*(int (__cdecl **)(int))(*(_DWORD *)v20 + 80))(v20) )
    v20 = *(_DWORD *)i;
    LODWORD(i) = i + 4;
  return result;
}


void __fastcall Level::explode(Level *this, BlockSource *a2, Entity *a3, const Vec3 *a4, void *a5, bool a6, bool a7, float a8)
{
  BlockSource *v8; // r6@1
  const Vec3 *v9; // r5@1
  char *v17; // r0@2
  unsigned int v18; // r2@2
  int v19; // r3@2
  int v20; // r7@2
  int v21; // r7@2
  _DWORD *v22; // r0@3
  int v23; // r4@6
  Dimension *v24; // r6@10
  void *v25; // r0@12
  void *v26; // r4@13
  int v27; // [sp+0h] [bp-A78h]@0
  char v28; // [sp+4h] [bp-A74h]@10
  void **v29; // [sp+10h] [bp-A68h]@2
  int v30; // [sp+14h] [bp-A64h]@2
  int v31; // [sp+18h] [bp-A60h]@2
  char v32; // [sp+1Ch] [bp-A5Ch]@2
  char v33; // [sp+1Dh] [bp-A5Bh]@2
  int v34; // [sp+20h] [bp-A58h]@2
  int v35; // [sp+24h] [bp-A54h]@2
  int v36; // [sp+28h] [bp-A50h]@2
  void *ptr; // [sp+30h] [bp-A48h]@2
  unsigned int v38; // [sp+34h] [bp-A44h]@2
  unsigned int v39; // [sp+38h] [bp-A40h]@2
  char v40; // [sp+40h] [bp-A38h]@2
  void *v41; // [sp+50h] [bp-A28h]@14
  int v42; // [sp+54h] [bp-A24h]@14
  void *v43; // [sp+58h] [bp-A20h]@12
  int v44; // [sp+5Ch] [bp-A1Ch]@14
  int v45; // [sp+68h] [bp-A10h]@15
  char v46; // [sp+800h] [bp-278h]@2

  v8 = a2;
  v9 = a4;
  if ( !*((_BYTE *)this + 5824) )
  {
    _R4 = &v46;
    __asm
    {
      VLDR            S16, [R4,#0x278]
      VSTR            S16, [SP,#0xA78+var_A78]
    }
    Explosion::Explosion(COERCE_FLOAT(&v40), (int)a2, (int)a3, (int)a4, v27);
    Explosion::setFire((Explosion *)&v40, a6);
    Explosion::setBreaking((Explosion *)&v40, a7);
      VLDR            S0, [R4,#0x284]
      VMOV            R1, S0
    Explosion::setMaxResistance((Explosion *)&v40, _R1);
    Explosion::explode((Explosion *)&v40);
    v17 = Explosion::getToBlow((Explosion *)&v40);
    v30 = 2;
    v31 = 1;
    v18 = 0;
    v32 = 0;
    v29 = &off_26E9544;
    v33 = 0;
    v19 = *((_DWORD *)v9 + 1);
    v20 = *((_DWORD *)v9 + 2);
    v34 = *(_DWORD *)v9;
    v35 = v19;
    v36 = v20;
    __asm { VSTR            S16, [SP,#0xA78+var_A4C] }
    v21 = *((_DWORD *)v17 + 2);
    ptr = 0;
    v38 = 0;
    v39 = 0;
    if ( v21 )
      v22 = (_DWORD *)v21;
      do
      {
        v22 = (_DWORD *)*v22;
        ++v18;
      }
      while ( v22 );
      if ( v18 >= 0x15555556 )
        sub_21E57F4();
      v23 = 3 * v18;
      v18 = (unsigned int)operator new(12 * v18);
      ptr = (void *)v18;
      v39 = v18 + 4 * v23;
        *(_DWORD *)v18 = *(_DWORD *)(v21 + 4);
        *(_DWORD *)(v18 + 4) = *(_DWORD *)(v21 + 8);
        *(_DWORD *)(v18 + 8) = *(_DWORD *)(v21 + 12);
        v18 += 12;
        v21 = *(_DWORD *)v21;
      while ( v21 );
    else
      ptr = 0;
      v39 = 0;
    v38 = v18;
    v24 = (Dimension *)BlockSource::getDimension(v8);
    BlockPos::BlockPos((int)&v28, (int)v9);
    Dimension::sendPacketForPosition(v24, (const BlockPos *)&v28, (const Packet *)&v29, 0);
    Explosion::finalizeExplosion((Explosion *)&v40);
    if ( ptr )
      operator delete(ptr);
    v25 = v43;
    if ( v43 )
        v26 = *(void **)v25;
        operator delete(v25);
        v25 = v26;
      while ( v26 );
    _aeabi_memclr4(v41, 4 * v42);
    v43 = 0;
    v44 = 0;
    if ( v41 )
      if ( &v45 != v41 )
        operator delete(v41);
  }
}


void __fastcall Level::requestPlayerChangeDimension(int a1, unsigned int a2, int *a3)
{
  int v3; // r9@1
  unsigned int v4; // r6@1
  __int64 v5; // kr00_8@1
  int *v6; // r8@1
  int *v7; // r0@1
  int v8; // r7@2
  bool v9; // zf@7
  void (__fastcall *v10)(unsigned int, int *); // r2@11
  int v11; // [sp+0h] [bp-38h]@11
  unsigned int v12; // [sp+8h] [bp-30h]@11
  int v13; // [sp+Ch] [bp-2Ch]@11
  int v14; // [sp+10h] [bp-28h]@11
  int v15; // [sp+14h] [bp-24h]@11

  v3 = a1;
  v4 = a2;
  v5 = *(_QWORD *)(a1 + 604);
  v6 = a3;
  v7 = *(int **)(v5 + 4 * (a2 % HIDWORD(v5)));
  if ( !v7 )
    goto LABEL_11;
  v8 = *v7;
  while ( *(_DWORD *)(v8 + 4) != a2 )
  {
    if ( *(_DWORD *)v8 )
    {
      v7 = (int *)v8;
      v8 = *(_DWORD *)v8;
      if ( *(_DWORD *)(v5 + 4) % HIDWORD(v5) == a2 % HIDWORD(v5) )
        continue;
    }
  }
  v9 = v7 == 0;
  if ( v7 )
    v9 = *v7 == 0;
  if ( v9 )
LABEL_11:
    *(_DWORD *)(a2 + 4292) = 1;
    v10 = *(void (__fastcall **)(unsigned int, int *))(*(_DWORD *)a2 + 116);
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v10(a2, &v13);
    v12 = v4;
    std::_Hashtable<Player *,std::pair<Player * const,std::unique_ptr<ChangeDimensionRequest,std::default_delete<ChangeDimensionRequest>>>,std::allocator<std::pair<Player * const,std::unique_ptr<ChangeDimensionRequest,std::default_delete<ChangeDimensionRequest>>>>,std::__detail::_Select1st,std::equal_to<Player *>,std::hash<Player *>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_emplace<Player *,std::unique_ptr<ChangeDimensionRequest,std::default_delete<ChangeDimensionRequest>>>(
      (int)&v11,
      (unsigned __int64 *)(v3 + 604),
      &v12,
      v6);
  Level::_handleChangeDimensionRequests((Level *)v3);
}


int __fastcall Level::removeAutonomousEntity(int result, Entity *a2, LevelChunk *a3)
{
  Entity *v3; // r4@1
  int v4; // r5@1
  int v5; // r2@2
  int v6; // r1@2
  int v7; // r1@3
  bool v8; // zf@4
  Entity **v9; // r3@4
  Entity *v10; // r6@7
  bool v11; // zf@7
  int v12; // r1@12
  void (__fastcall *v13)(int *, int, _DWORD, _DWORD); // r6@22
  char *v14; // r0@22
  int *v15; // r0@23
  int v16; // r2@24
  int v17; // [sp+8h] [bp-18h]@22

  v3 = a2;
  v4 = result;
  if ( !a3 )
    return result;
  v5 = *(_DWORD *)(result + 5796);
  result = *(_DWORD *)(result + 5800);
  v6 = (result - v5) >> 4;
  if ( v6 >= 1 )
  {
    v7 = v6 + 1;
    do
    {
      v8 = *(_DWORD *)v5 == (_DWORD)v3;
      v9 = (Entity **)v5;
      if ( *(Entity **)v5 != v3 )
      {
        v9 = (Entity **)(v5 + 4);
        v8 = *(_DWORD *)(v5 + 4) == (_DWORD)v3;
      }
      if ( v8 )
        goto LABEL_21;
      v9 = (Entity **)(v5 + 8);
      v10 = *(Entity **)(v5 + 8);
      v11 = v10 == v3;
      if ( v10 != v3 )
        v9 = (Entity **)(v5 + 12);
        v11 = *(_DWORD *)(v5 + 12) == (_DWORD)v3;
      if ( v11 )
      --v7;
      v5 += 16;
    }
    while ( v7 > 1 );
  }
  if ( 1 == (result - v5) >> 2 )
    v9 = (Entity **)v5;
    goto LABEL_20;
  v12 = (result - v5) >> 2;
  if ( v12 == 2 )
  else
    if ( v12 != 3 )
      return result;
    if ( *(Entity **)v5 == v3 )
      goto LABEL_21;
    v9 = (Entity **)(v5 + 4);
  if ( *v9 != v3 )
    ++v9;
LABEL_20:
    if ( *v9 != v3 )
LABEL_21:
  if ( v9 != (Entity **)result )
    *v9 = *(Entity **)(result - 4);
    *(_DWORD *)(v4 + 5800) -= 4;
    v13 = *(void (__fastcall **)(int *, int, _DWORD, _DWORD))(*(_DWORD *)v4 + 64);
    v14 = Entity::getUniqueID(v3);
    v13(&v17, v4, *(_QWORD *)v14, *(_QWORD *)v14 >> 32);
    result = v17;
    if ( v17 )
      (*(void (__fastcall **)(int, Entity *, _DWORD))(*(_DWORD *)v4 + 108))(v4, v3, 0);
      v15 = *(int **)(v4 + 5812);
      if ( v15 == *(int **)(v4 + 5816) )
        std::vector<std::unique_ptr<Entity,std::default_delete<Entity>>,std::allocator<std::unique_ptr<Entity,std::default_delete<Entity>>>>::_M_emplace_back_aux<std::unique_ptr<Entity,std::default_delete<Entity>>>(
          (_QWORD *)(v4 + 5808),
          &v17);
      else
        v16 = v17;
        v17 = 0;
        *v15 = v16;
        *(_DWORD *)(v4 + 5812) = v15 + 1;
      *((_BYTE *)v3 + 40) = 0;
      result = v17;
      if ( v17 )
        result = (*(int (__cdecl **)(int))(*(_DWORD *)v17 + 32))(v17);
  return result;
}


signed int __fastcall Level::checkMaterial(int a1, float a2, int a3, Entity *a4)
{
  int v4; // r8@1
  float v5; // r4@1
  BlockSource *v6; // r11@1
  int v7; // r7@1
  int *v18; // r0@8
  float v20; // [sp+0h] [bp-40h]@1

  v4 = a3;
  v5 = a2;
  v6 = (BlockSource *)Entity::getRegion(a4);
  v7 = 0;
  AABB::flooredCopy((AABB *)&v20, v5, 0.0, 1065353216);
  if ( BlockSource::hasChunksAt(v6, (const AABB *)&v20) == 1 )
  {
    __asm
    {
      VLDR            S0, [SP,#0x40+var_40]
      VLDR            S2, [SP,#0x40+var_34]
      VCVTR.S32.F32   S2, S2
      VCVTR.S32.F32   S0, S0
      VMOV            R9, S2
      VMOV            R6, S0
    }
    if ( _R6 == _R9 )
      v7 = 0;
    else
      while ( 2 )
      {
        __asm
        {
          VLDR            S0, [SP,#0x40+var_3C]
          VLDR            S2, [SP,#0x40+var_30]
          VCVTR.S32.F32   S2, S2
          VCVTR.S32.F32   S0, S0
          VMOV            R10, S2
          VMOV            R7, S0
        }
        while ( _R7 != _R10 )
          __asm
          {
            VLDR            S0, [SP,#0x40+var_38]
            VLDR            S2, [SP,#0x40+var_2C]
            VCVTR.S32.F32   S2, S2
            VCVTR.S32.F32   S0, S0
            VMOV            R5, S2
            VMOV            R4, S0
          }
          if ( _R4 != _R5 )
            do
            {
              v18 = (int *)BlockSource::getMaterial(v6, _R6, _R7, _R4);
              if ( Material::isType(v18, v4) )
                return 1;
            }
            while ( _R5 != ++_R4 );
          ++_R7;
        ++_R6;
        v7 = 0;
        if ( _R6 != _R9 )
          continue;
        break;
      }
  }
  return v7;
}


Level *__fastcall Level::saveGameData(Level *this)
{
  Level *v1; // r4@1
  int v2; // r0@1
  int i; // r5@2
  SavedDataStorage *v4; // r0@5
  Level *result; // r0@7

  v1 = this;
  Level::savePlayers(this);
  Level::_saveAutonomousEntities(v1);
  v2 = *((_DWORD *)v1 + 32);
  if ( v2 )
  {
    (*(void (**)(void))(*(_DWORD *)v2 + 24))();
    for ( i = *((_DWORD *)v1 + 1484); i; i = *(_DWORD *)i )
      MapItemSavedData::trySave(*(MapItemSavedData **)(i + 16), *((LevelStorage **)v1 + 32));
  }
  v4 = (SavedDataStorage *)*((_DWORD *)v1 + 33);
  if ( v4 )
    SavedDataStorage::save(v4);
  _R0 = getTimeS();
  __asm { VMOV            D0, R0, R1 }
  result = (Level *)((char *)v1 + 5832);
  __asm { VSTR            D0, [R0] }
  return result;
}


signed int __fastcall Level::isPlayerSuspended(Level *this, Player *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int v4; // r2@1
  __int64 v5; // kr08_8@2
  int v6; // r4@2
  char *v7; // r10@2
  int v8; // r2@4
  int v9; // r12@5
  int v10; // r5@7
  int v11; // r5@9
  int v12; // r2@15
  __int64 v13; // r4@17
  int v14; // r2@19
  __int64 v15; // r0@20
  signed int result; // r0@28
  int v17; // r3@29
  int v18; // lr@29
  int v19; // r1@29
  __int64 v20; // r10@30
  int v21; // r7@30
  __int64 v22; // kr18_8@30
  _QWORD *v23; // r8@30
  int v24; // r2@32
  int v25; // r0@42
  unsigned int v26; // r0@45
  unsigned int v27; // r7@45
  Level *v28; // [sp+0h] [bp-34h]@2
  __int64 v29; // [sp+4h] [bp-30h]@2
  int v30; // [sp+Ch] [bp-28h]@1

  v2 = *(_QWORD *)((char *)this + 36) >> 32;
  v3 = *(_QWORD *)((char *)this + 36);
  v30 = v2;
  v4 = (v2 - v3) >> 4;
  if ( v4 < 1 )
  {
    v28 = this;
    LODWORD(v29) = a2;
    HIDWORD(v29) = (char *)a2 + 4560;
LABEL_14:
    if ( 1 == (v30 - v3) >> 2 )
    {
      v8 = v3;
      v13 = *(_QWORD *)HIDWORD(v29);
    }
    else
      v12 = (v30 - v3) >> 2;
      if ( v12 == 3 )
      {
        v14 = *(_DWORD *)v3;
        v13 = *(_QWORD *)HIDWORD(v29);
        if ( *(_QWORD *)(*(_DWORD *)v3 + 4560) == *(_QWORD *)HIDWORD(v29) )
        {
          LODWORD(v15) = *(_DWORD *)(v14 + 4572);
          HIDWORD(v15) = *(_DWORD *)(v14 + 4568) ^ *(_DWORD *)(v29 + 4568);
          v8 = v3;
          if ( v15 == *(_DWORD *)(v29 + 4572) )
            goto LABEL_27;
        }
        v8 = v3 + 4;
      }
      else
        if ( v12 != 2 )
          goto LABEL_29;
        v8 = v3;
      if ( *(_QWORD *)(*(_DWORD *)v8 + 4560) == v13 && !(*(_QWORD *)(*(_DWORD *)v8 + 4568) ^ *(_QWORD *)(v29 + 4568)) )
        goto LABEL_27;
      v8 += 4;
    if ( *(_QWORD *)(*(_DWORD *)v8 + 4560) != v13 || *(_QWORD *)(*(_DWORD *)v8 + 4568) ^ *(_QWORD *)(v29 + 4568) )
      goto LABEL_29;
    goto LABEL_27;
  }
  v5 = *((_QWORD *)a2 + 570);
  v6 = v4 + 1;
  v28 = this;
  v7 = (char *)a2 + 4568;
  LODWORD(v29) = a2;
  HIDWORD(v29) = (char *)a2 + 4560;
  while ( 1 )
    if ( *(_QWORD *)(*(_DWORD *)v3 + 4560) == v5 )
      if ( *(_QWORD *)v7 == *(_QWORD *)(*(_DWORD *)v3 + 4568) )
        break;
    v8 = v3 + 4;
    v9 = *(_DWORD *)(v3 + 4);
    if ( *(_QWORD *)(v9 + 4560) == v5 && *(_QWORD *)v7 == *(_QWORD *)(v9 + 4568) )
      break;
    v8 = v3 + 8;
    v10 = *(_DWORD *)(v3 + 8);
    if ( *(_QWORD *)(v10 + 4560) == v5 && !(*(_QWORD *)(v10 + 4568) ^ *(_QWORD *)v7) )
    v8 = v3 + 12;
    v11 = *(_DWORD *)(v3 + 12);
    if ( *(_QWORD *)(v11 + 4560) == v5 && !(*(_QWORD *)(v11 + 4568) ^ *(_QWORD *)v7) )
    --v6;
    v3 += 16;
    if ( v6 <= 1 )
      goto LABEL_14;
LABEL_27:
  if ( v8 != v30 )
    return 1;
LABEL_29:
  v18 = *((_QWORD *)v28 + 6) >> 32;
  v17 = *((_QWORD *)v28 + 6);
  v19 = -1431655765 * ((v18 - v17) >> 3) >> 2;
  if ( v19 >= 1 )
    v20 = v29;
    v21 = v19 + 1;
    v22 = *(_QWORD *)HIDWORD(v29);
    v23 = (_QWORD *)(v29 + 4568);
    while ( 1 )
      if ( *(_QWORD *)v17 == v22 )
        v24 = v17;
        if ( *v23 == *(_QWORD *)(v17 + 8) )
          goto LABEL_58;
      v24 = v17 + 24;
      if ( *(_QWORD *)(v17 + 24) == v22 && !(*v23 ^ *(_QWORD *)(v17 + 32)) )
        goto LABEL_58;
      v24 = v17 + 48;
      if ( *(_QWORD *)(v17 + 48) == v22 && !(*v23 ^ *(_QWORD *)(v17 + 56)) )
      v24 = v17 + 72;
      if ( *(_QWORD *)(v17 + 72) == v22 && !(*v23 ^ *(_QWORD *)(v17 + 80)) )
      --v21;
      v17 += 96;
      if ( v21 <= 1 )
        goto LABEL_42;
  v20 = v29;
LABEL_42:
  v25 = -1431655765 * ((v18 - v17) >> 3);
  if ( v25 == 1 )
    v27 = *(_QWORD *)HIDWORD(v20) >> 32;
    v26 = *(_QWORD *)HIDWORD(v20);
    v24 = v17;
LABEL_53:
    if ( *(_QWORD *)v24 == __PAIR__(v27, v26) )
      if ( *(_QWORD *)(v20 + 4568) != *(_QWORD *)(v24 + 8) )
        v24 = *((_QWORD *)v28 + 6) >> 32;
      goto LABEL_58;
    goto LABEL_57;
  if ( v25 == 3 )
    if ( *(_QWORD *)v17 == *(_QWORD *)HIDWORD(v20) )
      v24 = v17;
      if ( *(_QWORD *)(v20 + 4568) == *(_QWORD *)(v17 + 8) )
    v24 = v17 + 24;
    goto LABEL_49;
  if ( v25 == 2 )
LABEL_49:
    if ( *(_QWORD *)v24 == __PAIR__(v27, v26) && *(_QWORD *)(v20 + 4568) == *(_QWORD *)(v24 + 8) )
    v24 += 24;
    goto LABEL_53;
LABEL_57:
  v24 = *((_QWORD *)v28 + 6) >> 32;
LABEL_58:
  result = 0;
  if ( v24 != v18 )
    result = 1;
  return result;
}


int __fastcall Level::broadcastEntityEvent(int a1, int a2, char a3, int a4)
{
  Entity *v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  char v7; // r6@1
  BlockSource *v8; // r0@2
  int v9; // r0@2
  int v10; // [sp+0h] [bp-38h]@2
  void **v11; // [sp+8h] [bp-30h]@2
  int v12; // [sp+Ch] [bp-2Ch]@2
  int v13; // [sp+10h] [bp-28h]@2
  char v14; // [sp+14h] [bp-24h]@2
  __int64 v15; // [sp+18h] [bp-20h]@2
  char v16; // [sp+20h] [bp-18h]@2
  int v17; // [sp+24h] [bp-14h]@2

  v4 = (Entity *)a2;
  result = *(_BYTE *)(a1 + 5824);
  v6 = a4;
  v7 = a3;
  if ( !result )
  {
    Entity::getRuntimeID((Entity *)&v10, a2);
    v12 = 2;
    v13 = 1;
    v14 = 0;
    v11 = &off_26DA5D0;
    v15 = *(_QWORD *)&v10;
    v16 = v7;
    v17 = v6;
    v8 = (BlockSource *)Entity::getRegion(v4);
    v9 = BlockSource::getDimension(v8);
    result = (*(int (**)(void))(*(_DWORD *)v9 + 212))();
  }
  return result;
}


int __fastcall Level::getNextRuntimeID(int result, int a2)
{
  signed __int64 v2; // r2@1

  v2 = *(_QWORD *)(a2 + 80) + 1LL;
  *(_QWORD *)(a2 + 80) = v2;
  *(_QWORD *)result = v2;
  return result;
}


int __fastcall Level::createRandomSeed(Level *this)
{
  void *v1; // r0@1
  int v2; // r4@2
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-9DCh]@1
  char v7; // [sp+8h] [bp-9D8h]@1

  sub_21E94B4((void **)&v6, "default");
  sub_21E66B4((FILE **)&v7, (const void **)&v6);
  v1 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v6 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v1);
  }
  v2 = sub_21E67AC((int)&v7);
  sub_21E67A0((FILE **)&v7);
  return v2;
}


int __fastcall Level::handleStopAllSounds(Level *this)
{
  Level *v1; // r4@1
  __int64 v2; // r0@1
  unsigned int v3; // r5@2

  v1 = this;
  v2 = *(_QWORD *)((char *)this + 116);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = 0;
    do
    {
      (*(void (**)(void))(**(_DWORD **)(v2 + 4 * v3) + 104))();
      v2 = *(_QWORD *)((char *)v1 + 116);
      ++v3;
    }
    while ( v3 < (HIDWORD(v2) - (signed int)v2) >> 2 );
  }
  return v2;
}


int __fastcall Level::getPrimaryLocalPlayer(Level *this)
{
  Level *v1; // r4@1
  void (*v2)(void); // r3@1
  __int64 v3; // r6@1
  int v4; // r0@2
  int v5; // r4@2
  int v6; // t1@2
  void *v8; // [sp+4h] [bp-24h]@1
  int (__fastcall *v9)(void **, void **, int); // [sp+Ch] [bp-1Ch]@1
  int (__fastcall *v10)(int, int); // [sp+10h] [bp-18h]@1

  v1 = this;
  v8 = operator new(1u);
  v2 = (void (*)(void))sub_19131B4;
  v9 = sub_19131B4;
  v10 = sub_19131AA;
  v3 = *((_QWORD *)v1 + 3);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    v5 = 0;
LABEL_9:
    v2();
    return v5;
  }
  while ( 1 )
    v4 = v10(&v8, *(_DWORD *)v3);
    v6 = *(_DWORD *)v3;
    LODWORD(v3) = v3 + 4;
    v5 = v6;
    if ( v4 == 1 )
      break;
    if ( HIDWORD(v3) == (_DWORD)v3 )
    {
      v5 = 0;
    }
    if ( !v9 )
      sub_21E5F48();
  v2 = (void (*)(void))v9;
  if ( v9 )
    goto LABEL_9;
  return v5;
}


int __fastcall Level::broadcastSoundEvent(Level *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  Level *v8; // r4@1
  int result; // r0@1
  int v10; // r5@1
  int v11; // r11@1
  int v12; // r0@2
  int v13; // r6@3
  __int64 v14; // r0@4
  unsigned int v15; // r6@5
  int v16; // r1@7
  int v17; // r2@7
  Player *v18; // r0@8
  int v19; // r4@8
  Player *v20; // r5@8
  int (__fastcall *v21)(int, char *, int, void ***); // r6@9
  int v22; // r0@9
  Dimension *v23; // r6@10
  const Player *v24; // r0@10
  BlockSource *v25; // [sp+10h] [bp-60h]@2
  char v26; // [sp+14h] [bp-5Ch]@10
  void **v27; // [sp+20h] [bp-50h]@7
  int v28; // [sp+24h] [bp-4Ch]@7
  int v29; // [sp+28h] [bp-48h]@7
  char v30; // [sp+2Ch] [bp-44h]@7
  char v31; // [sp+2Dh] [bp-43h]@7
  int v32; // [sp+30h] [bp-40h]@7
  int v33; // [sp+34h] [bp-3Ch]@7
  int v34; // [sp+38h] [bp-38h]@7
  int v35; // [sp+3Ch] [bp-34h]@7
  int v36; // [sp+40h] [bp-30h]@7
  char v37; // [sp+44h] [bp-2Ch]@7
  char v38; // [sp+45h] [bp-2Bh]@7

  v8 = this;
  result = *((_BYTE *)this + 5824);
  v10 = a4;
  v11 = a3;
  if ( !result )
  {
    v25 = (BlockSource *)a2;
    v12 = Level::getPrimaryLocalPlayer(v8);
    if ( v12 )
    {
      v13 = (*(int (**)(void))(*(_DWORD *)v12 + 524))();
      if ( v13 == BlockSource::getDimensionId(v25) )
      {
        v14 = *(_QWORD *)((char *)v8 + 116);
        if ( HIDWORD(v14) != (_DWORD)v14 )
        {
          v15 = 0;
          do
          {
            (*(void (__cdecl **)(_DWORD, int, int))(**(_DWORD **)(v14 + 4 * v15) + 92))(
              *(_DWORD *)(v14 + 4 * v15),
              v11,
              v10);
            v14 = *(_QWORD *)((char *)v8 + 116);
            ++v15;
          }
          while ( v15 < (HIDWORD(v14) - (signed int)v14) >> 2 );
        }
      }
    }
    v28 = 2;
    v29 = 1;
    v30 = 0;
    v27 = &off_26DA800;
    v31 = v11;
    v16 = *(_DWORD *)(v10 + 4);
    v17 = *(_DWORD *)(v10 + 8);
    v32 = *(_DWORD *)v10;
    v33 = v16;
    v34 = v17;
    v35 = a5;
    v36 = a6;
    v37 = a7;
    v38 = a8;
    if ( a8 )
      v18 = (Player *)Level::getPrimaryLocalPlayer(v8);
      v19 = *((_DWORD *)v8 + 165);
      v20 = v18;
      if ( v18 )
        v21 = *(int (__fastcall **)(int, char *, int, void ***))(*(_DWORD *)v19 + 24);
        v22 = Player::getClientSubId(v18);
        result = v21(v19, (char *)v20 + 4392, v22, &v27);
      else
        result = (*(int (__fastcall **)(int, void ***))(*(_DWORD *)v19 + 20))(v19, &v27);
    else
      v23 = (Dimension *)BlockSource::getDimension(v25);
      BlockPos::BlockPos((int)&v26, v10);
      v24 = (const Player *)Level::getPrimaryLocalPlayer(v8);
      result = Dimension::sendPacketForPosition(v23, (const BlockPos *)&v26, (const Packet *)&v27, v24);
  }
  return result;
}


Entity *__fastcall Level::getAutonomousEntity(int a1, int a2, unsigned int a3, unsigned int a4)
{
  int v4; // r8@1
  Entity **v5; // r7@1
  Entity **v6; // r6@1
  unsigned int v7; // r4@1
  unsigned int v8; // r5@1
  __int64 v9; // r1@2
  Entity *result; // r0@2
  Entity *v11; // t1@2
  Entity **v12; // r9@6
  Entity **v13; // r6@6
  int v14; // r7@7
  __int64 v15; // r0@7

  v4 = a1;
  v5 = *(Entity ***)(a1 + 5800);
  v6 = *(Entity ***)(a1 + 5796);
  v7 = a4;
  v8 = a3;
  if ( v6 == v5 )
    goto LABEL_6;
  while ( 1 )
  {
    v9 = *(_QWORD *)Entity::getUniqueID(*v6);
    v11 = *v6;
    ++v6;
    result = v11;
    if ( __PAIR__(HIDWORD(v9), (unsigned int)v9) == __PAIR__(v7, v8) )
      break;
    if ( v5 == v6 )
      goto LABEL_6;
  }
  if ( !result )
LABEL_6:
    v12 = *(Entity ***)(v4 + 5812);
    v13 = *(Entity ***)(v4 + 5808);
    if ( v13 == v12 )
    {
LABEL_9:
      result = 0;
    }
    else
      while ( 1 )
      {
        v14 = (int)(v13 + 1);
        v15 = *(_QWORD *)Entity::getUniqueID(*v13);
        HIDWORD(v15) ^= v7;
        if ( v15 == v8 )
          break;
        ++v13;
        if ( v12 == (Entity **)v14 )
          goto LABEL_9;
      }
      result = *v13;
  return result;
}


char *__fastcall Level::getAutonomousLoadedEntities(Level *this)
{
  return (char *)this + 5808;
}


MapItemSavedData *__fastcall Level::getMapSavedData(Level *this, const ItemInstance *a2)
{
  Level *v2; // r4@1
  unsigned int v3; // r11@1
  unsigned int v4; // r6@1
  int v5; // r7@1
  int v6; // r0@1
  int v7; // r8@2
  int v8; // r4@2
  bool v9; // zf@3
  int v10; // r5@6
  bool v11; // zf@9
  MapItemSavedData *result; // r0@12
  Level *v13; // [sp+4h] [bp-3Ch]@1
  __int64 v14; // [sp+8h] [bp-38h]@1
  __int64 v15; // [sp+10h] [bp-30h]@1

  v2 = this;
  v13 = this;
  MapItem::getMapId((MapItem *)&v14, a2);
  v15 = v14;
  v3 = *((_DWORD *)v2 + 1483);
  v4 = (v14 + ((HIDWORD(v14) - 1640531527) << 6) + ((unsigned int)(HIDWORD(v14) - 1640531527) >> 2) - 1640531527) ^ (HIDWORD(v14) - 1640531527);
  v5 = v4 % *((_DWORD *)v2 + 1483);
  v6 = *(_DWORD *)(*((_DWORD *)v2 + 1482) + 4 * v5);
  if ( !v6 )
    goto LABEL_13;
  v7 = *(_DWORD *)v6;
  v8 = *(_DWORD *)(*(_DWORD *)v6 + 24);
  while ( 1 )
  {
    v9 = v8 == v4;
    if ( v8 == v4 )
      v9 = *(_QWORD *)(v7 + 8) == v14;
    if ( v9 )
      break;
    v10 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 )
    {
      v8 = *(_DWORD *)(v10 + 24);
      v6 = v7;
      v7 = *(_DWORD *)v7;
      if ( *(_DWORD *)(v10 + 24) % v3 == v5 )
        continue;
    }
  }
  v11 = v6 == 0;
  if ( v6 )
    v6 = *(_DWORD *)v6;
    v11 = v6 == 0;
  if ( v11 )
LABEL_13:
    result = Level::_loadMapData((int)v13, &v15);
  else
    result = *(MapItemSavedData **)(v6 + 16);
  return result;
}


int __fastcall Level::loadPlayer(int a1, int a2)
{
  int v2; // r10@1
  __int64 v3; // r0@1
  __int64 v4; // r6@1
  void *v5; // r11@3
  unsigned int v6; // r2@3
  unsigned int v7; // r1@5
  unsigned int v8; // r4@5
  char *v9; // r5@11
  char *v10; // r9@13
  __int64 v11; // r0@18
  void (__fastcall *v12)(_DWORD, int); // r4@21
  int v13; // r0@21
  int v14; // r1@21
  int v15; // r5@22
  ListTag *v16; // r5@23
  void *v17; // r0@23
  int v24; // r4@24
  signed int v25; // r4@24
  void *v26; // r0@24
  int v27; // r4@26
  unsigned int v28; // r4@26
  void *v29; // r0@26
  Dimension *v30; // r0@31
  void (__fastcall *v31)(_DWORD, int); // r4@31
  int v32; // r0@31
  Dimension *v33; // r0@33
  void (__fastcall *v34)(_DWORD, int); // r4@33
  int v35; // r0@33
  int v36; // r4@33
  void (__fastcall *v37)(int, _DWORD **, _QWORD **); // r9@33
  _DWORD *v38; // r0@33
  __int64 v39; // r1@33
  _QWORD *v40; // r0@33
  char *v41; // r0@38
  const CompoundTag *v42; // r1@39
  void (__fastcall *v43)(int, int, int *); // r4@41
  int v44; // r0@41
  int v45; // r0@46
  int v46; // r4@47
  char *v47; // r0@47
  __int64 v48; // kr08_8@47
  __int64 v49; // kr10_8@47
  unsigned int v50; // r6@47
  unsigned int v51; // r7@47
  int v52; // r0@47
  int v53; // r8@48
  int v54; // r4@48
  int v56; // r10@52
  bool v57; // zf@55
  int result; // r0@62
  unsigned int *v59; // r2@63
  signed int v60; // r1@65
  unsigned int *v61; // r2@67
  signed int v62; // r1@69
  unsigned int *v63; // r2@79
  signed int v64; // r1@81
  int v65; // [sp+8h] [bp-80h]@1
  int *v66; // [sp+Ch] [bp-7Ch]@47
  int v67; // [sp+10h] [bp-78h]@41
  int v68; // [sp+14h] [bp-74h]@40
  _QWORD *v69; // [sp+18h] [bp-70h]@33
  void (*v70)(void); // [sp+20h] [bp-68h]@33
  int (__fastcall *v71)(__int64 **); // [sp+24h] [bp-64h]@33
  _DWORD *v72; // [sp+28h] [bp-60h]@33
  __int64 v73; // [sp+30h] [bp-58h]@33
  int v74; // [sp+3Ch] [bp-4Ch]@26
  int v75; // [sp+44h] [bp-44h]@24
  float v76; // [sp+48h] [bp-40h]@24
  int v77; // [sp+58h] [bp-30h]@23
  int v78; // [sp+5Ch] [bp-2Ch]@22

  HIDWORD(v4) = a2;
  v2 = a1;
  v3 = *(_QWORD *)(a1 + 28);
  LODWORD(v4) = *(_DWORD *)HIDWORD(v4);
  v65 = *(_DWORD *)HIDWORD(v4);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    v5 = *(void **)(v2 + 24);
    v6 = ((signed int)v3 - (signed int)v5) >> 2;
    if ( !v6 )
      v6 = 1;
    HIDWORD(v3) = v6 + (((signed int)v3 - (signed int)v5) >> 2);
    v8 = v6 + (((signed int)v3 - (signed int)v5) >> 2);
    if ( 0 != HIDWORD(v3) >> 30 )
      v8 = 0x3FFFFFFF;
    if ( v7 < v6 )
    if ( v8 )
    {
      if ( v8 >= 0x40000000 )
        sub_21E57F4();
      v9 = (char *)operator new(4 * v8);
      LODWORD(v3) = *(_QWORD *)(v2 + 24) >> 32;
      v5 = (void *)*(_QWORD *)(v2 + 24);
    }
    else
      v9 = 0;
    v10 = &v9[v3 - (_DWORD)v5];
    *(_DWORD *)&v9[v3 - (_DWORD)v5] = v4;
    if ( 0 != ((signed int)v3 - (signed int)v5) >> 2 )
      _aeabi_memmove4(v9, v5);
    if ( v5 )
      operator delete(v5);
    *(_DWORD *)(v2 + 24) = v9;
    *(_DWORD *)(v2 + 28) = v10 + 4;
    *(_DWORD *)(v2 + 32) = &v9[4 * v8];
  }
  else
    *(_DWORD *)v3 = v4;
    *(_DWORD *)(v2 + 28) += 4;
  v11 = *(_QWORD *)(v2 + 16);
  if ( (_DWORD)v11 == HIDWORD(v11) )
    std::vector<std::unique_ptr<Player,std::default_delete<Player>>,std::allocator<std::unique_ptr<Player,std::default_delete<Player>>>>::_M_emplace_back_aux<std::unique_ptr<Player,std::default_delete<Player>>>(
      (_QWORD *)(v2 + 12),
      (int *)HIDWORD(v4));
    HIDWORD(v11) = *(_DWORD *)HIDWORD(v4);
    *(_DWORD *)HIDWORD(v4) = 0;
    *(_DWORD *)v11 = HIDWORD(v11);
    *(_DWORD *)(v2 + 16) += 4;
  v12 = *(void (__fastcall **)(_DWORD, int))(*(_DWORD *)v4 + 1432);
  v13 = LevelData::getGameType((LevelData *)(v2 + 144));
  v12(v4, v13);
  v14 = *(_DWORD *)(v2 + 128);
  if ( !v14 )
    v78 = 0;
    goto LABEL_31;
  (*(void (__fastcall **)(int *))(*(_DWORD *)v14 + 68))(&v78);
  v15 = v78;
  if ( !v78 )
LABEL_31:
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v4 + 1240))(v4);
    v30 = (Dimension *)Level::createDimension(v2, 0);
    v31 = *(void (__fastcall **)(_DWORD, int))(*(_DWORD *)v4 + 1196);
    v32 = Dimension::getChunkSource(v30);
    v31(v4, v32);
    *(_BYTE *)(v4 + 4) = 2;
    Entity::reload((Entity *)v4);
    goto LABEL_46;
  sub_21E94B4((void **)&v77, "Pos");
  v16 = (ListTag *)CompoundTag::getList(v15, (const void **)&v77);
  v17 = (void *)(v77 - 12);
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v77 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  _R9 = ListTag::getFloat(v16, 0);
  _R4 = ListTag::getFloat(v16, 1);
  _R0 = ListTag::getFloat(v16, 2);
  __asm
    VMOV            S0, R9
    VMOV            S2, R4
    VMOV            S4, R0
    VSTR            S0, [SP,#0x88+var_40]
    VSTR            S2, [SP,#0x88+var_3C]
    VSTR            S4, [SP,#0x88+var_38]
  (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)v4 + 48))(v4, &v76);
  v24 = v78;
  sub_21E94B4((void **)&v75, "DimensionId");
  v25 = CompoundTag::contains(v24, (const void **)&v75);
  v26 = (void *)(v75 - 12);
  if ( (int *)(v75 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v75 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  if ( v25 == 1 )
    v27 = v78;
    sub_21E94B4((void **)&v74, "DimensionId");
    v28 = CompoundTag::getInt(v27, (const void **)&v74);
    v29 = (void *)(v74 - 12);
    if ( (int *)(v74 - 12) != &dword_28898C0 )
      v63 = (unsigned int *)(v74 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v64 = __ldrex(v63);
        while ( __strex(v64 - 1, v63) );
      }
      else
        v64 = (*v63)--;
      if ( v64 <= 0 )
        j_j_j_j__ZdlPv_9(v29);
    if ( v28 >= 3 )
      v28 = 0;
    v28 = 0;
  v33 = (Dimension *)Level::createDimension(v2, v28);
  v34 = *(void (__fastcall **)(_DWORD, int))(*(_DWORD *)v4 + 1196);
  v35 = Dimension::getChunkSource(v33);
  v34(v4, v35);
  *(_BYTE *)(v4 + 4) = 1;
  Entity::reload((Entity *)v4);
  v36 = Player::getSupplies((Player *)v4);
  HIDWORD(v4) = &v78;
  v37 = *(void (__fastcall **)(int, _DWORD **, _QWORD **))(*(_DWORD *)v36 + 16);
  v38 = operator new(4u);
  LODWORD(v39) = sub_1912CC0;
  *v38 = v4;
  HIDWORD(v39) = sub_1912AF4;
  v72 = v38;
  v73 = v39;
  v40 = operator new(8u);
  *v40 = v4;
  v69 = v40;
  v70 = (void (*)(void))sub_1912D06;
  v71 = sub_1912CF6;
  v37(v36, &v72, &v69);
  if ( v70 )
    v70();
  if ( (_DWORD)v73 )
    ((void (*)(void))v73)();
  if ( !Player::hasRespawnPosition((Player *)v4) )
    v41 = LevelData::getSpawn((LevelData *)(v2 + 144));
    Player::setRespawnPosition((Entity *)v4, (const BlockPos *)v41, 0);
  v42 = (const CompoundTag *)CompoundTag::getCompound(v78, (const void **)&Entity::RIDING_TAG);
  if ( v42 )
    EntityFactory::loadEntity((EntityFactory *)&v68, v42);
    if ( v68 )
      v43 = *(void (__fastcall **)(int, int, int *))(*(_DWORD *)v2 + 44);
      v44 = Entity::getRegion((Entity *)v4);
      v67 = v68;
      v68 = 0;
      v43(v2, v44, &v67);
      if ( v67 )
        (*(void (**)(void))(*(_DWORD *)v67 + 32))();
      v67 = 0;
      (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)v4 + 144))(v4, v68);
      if ( v68 )
        (*(void (**)(void))(*(_DWORD *)v68 + 32))();
  LevelData::clearLoadedPlayerTag((LevelData *)(v2 + 144));
LABEL_46:
  v45 = *(_DWORD *)(v2 + 568);
  if ( v45 )
    do
      v46 = *(_DWORD *)(v45 + 8);
      v66 = (int *)v45;
      v47 = Entity::getUniqueID((Entity *)v4);
      v48 = *(_QWORD *)v47;
      v49 = *(_QWORD *)(v46 + 224);
      v50 = (*(_QWORD *)v47
           + (((*(_QWORD *)v47 >> 32) - 1640531527) << 6)
           + ((unsigned int)((*(_QWORD *)v47 >> 32) - 1640531527) >> 2)
           - 1640531527) ^ ((*(_QWORD *)v47 >> 32) - 1640531527);
      v51 = v50 % (unsigned int)(*(_QWORD *)(v46 + 224) >> 32);
      v52 = *(_DWORD *)(v49 + 4 * v51);
      if ( v52 )
        v53 = *(_DWORD *)v52;
        v54 = *(_DWORD *)(*(_DWORD *)v52 + 24);
        while ( 1 )
        {
          _ZF = v54 == v50;
          if ( v54 == v50 )
            _ZF = *(_QWORD *)(v53 + 8) == v48;
          if ( _ZF )
            break;
          v56 = *(_DWORD *)v53;
          if ( *(_DWORD *)v53 )
          {
            v54 = *(_DWORD *)(v56 + 24);
            v52 = v49;
            v53 = *(_DWORD *)v49;
            if ( *(_DWORD *)(v56 + 24) % HIDWORD(v49) == v51 )
              continue;
          }
          goto LABEL_59;
        }
        v57 = v52 == 0;
        if ( v52 )
          v52 = *(_DWORD *)v52;
          v57 = v52 == 0;
        if ( !v57 )
          (*(void (**)(void))(**(_DWORD **)(v52 + 16) + 44))();
LABEL_59:
      LODWORD(v4) = v65;
      v45 = *v66;
    while ( *v66 );
  if ( v78 )
    (*(void (**)(void))(*(_DWORD *)v78 + 4))();
  result = 0;
  v78 = 0;
  return result;
}


int __fastcall Level::denyEffect(Level *this, const Vec3 *a2)
{
  Level *v2; // r5@1
  const Vec3 *v3; // r9@1
  int v4; // r2@2
  int v5; // r3@2
  __int64 v6; // r0@3
  unsigned int v7; // r7@4
  void **v9; // [sp+10h] [bp-40h]@2
  int v10; // [sp+14h] [bp-3Ch]@2
  int v11; // [sp+18h] [bp-38h]@2
  char v12; // [sp+1Ch] [bp-34h]@2
  int v13; // [sp+20h] [bp-30h]@2
  int v14; // [sp+24h] [bp-2Ch]@2
  int v15; // [sp+28h] [bp-28h]@2
  int v16; // [sp+2Ch] [bp-24h]@2
  int v17; // [sp+30h] [bp-20h]@2

  v2 = this;
  v3 = a2;
  if ( !*((_BYTE *)this + 5824) )
  {
    v10 = 2;
    v11 = 1;
    v12 = 0;
    v9 = &off_26E956C;
    v13 = 2008;
    v4 = *((_DWORD *)a2 + 1);
    v5 = *((_DWORD *)a2 + 2);
    v14 = *(_DWORD *)a2;
    v15 = v4;
    v16 = v5;
    v17 = 0;
    (*(void (**)(void))(**((_DWORD **)this + 165) + 8))();
  }
  v6 = *(_QWORD *)((char *)v2 + 116);
  if ( HIDWORD(v6) != (_DWORD)v6 )
    v7 = 0;
    do
    {
      (*(void (__cdecl **)(_DWORD, signed int, const Vec3 *))(**(_DWORD **)(v6 + 4 * v7) + 92))(
        *(_DWORD *)(v6 + 4 * v7),
        73,
        v3);
      v6 = *(_QWORD *)((char *)v2 + 116);
      ++v7;
    }
    while ( v7 < (HIDWORD(v6) - (signed int)v6) >> 2 );
  return v6;
}


Entity *__fastcall Level::getAutonomousActiveEntity(int a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r4@1
  Entity **v5; // r6@1
  Entity **v6; // r7@1
  unsigned int v7; // r5@1
  __int64 v8; // r1@2
  Entity *result; // r0@2
  Entity *v10; // t1@2

  v4 = a4;
  v5 = *(Entity ***)(a1 + 5800);
  v6 = *(Entity ***)(a1 + 5796);
  v7 = a3;
  if ( v6 == v5 )
  {
LABEL_4:
    result = 0;
  }
  else
    while ( 1 )
    {
      v8 = *(_QWORD *)Entity::getUniqueID(*v6);
      v10 = *v6;
      ++v6;
      result = v10;
      if ( __PAIR__(HIDWORD(v8), (unsigned int)v8) == __PAIR__(v4, v7) )
        break;
      if ( v5 == v6 )
        goto LABEL_4;
    }
  return result;
}


int __fastcall Level::takeEntity(LevelChunk *a1, int a2, unsigned int a3, unsigned int a4)
{
  int v4; // r4@0
  unsigned int v5; // r6@1
  unsigned int v6; // r7@1
  LevelChunk *v7; // r8@1
  bool v8; // zf@1
  Entity *v9; // r0@4
  int v10; // r5@4
  BlockSource *v11; // r0@9
  LevelChunk *v12; // r0@9
  Entity *v13; // r6@9
  int result; // r0@11

  v5 = a4;
  v6 = a3;
  v7 = a1;
  v8 = (a3 & a4) == -1;
  if ( (a3 & a4) != -1 )
  {
    v4 = *(_DWORD *)(a2 + 568);
    v8 = v4 == 0;
  }
  if ( v8 )
    goto LABEL_12;
  while ( 1 )
    v9 = (Entity *)Dimension::fetchEntity(*(_DWORD *)(v4 + 8), a2, __PAIR__(v5, v6), 1);
    v10 = (int)v9;
    if ( v9 )
      break;
    v4 = *(_DWORD *)v4;
    if ( !v4 )
      goto LABEL_12;
  if ( !Entity::isRemoved(v9) )
    (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 44))(v10);
  v11 = (BlockSource *)Entity::getRegion((Entity *)v10);
  v12 = (LevelChunk *)BlockSource::getChunk(v11, (const ChunkPos *)(v10 + 144));
  v13 = v12;
  if ( !v12 || LevelChunk::hasEntity(v12, (Entity *)v10) != 1 )
LABEL_12:
    result = 0;
    *(_DWORD *)v7 = 0;
  else
    result = LevelChunk::removeEntity(v7, v13, v10);
  return result;
}


void __fastcall Level::createPhotoStorage(Level *this)
{
  Level::createPhotoStorage(this);
}


void __fastcall Level::tick(Level *this)
{
  Level::tick(this);
}


int __fastcall Level::borrowEntity(LevelChunk *a1, int a2, unsigned int a3, unsigned int a4, Entity *a5)
{
  int v5; // r4@0
  unsigned int v6; // r7@1
  unsigned int v7; // r5@1
  LevelChunk *v8; // r9@1
  bool v9; // zf@1
  Entity *v10; // r8@4
  Entity *v11; // r0@5
  int v12; // r6@5
  BlockSource *v13; // r0@9
  int result; // r0@11

  v6 = a4;
  v7 = a3;
  v8 = a1;
  v9 = (a3 & a4) == -1;
  if ( (a3 & a4) != -1 )
  {
    v5 = *(_DWORD *)(a2 + 568);
    v9 = v5 == 0;
  }
  if ( v9 )
    goto LABEL_12;
  v10 = a5;
  while ( 1 )
    v11 = (Entity *)Dimension::fetchEntity(*(_DWORD *)(v5 + 8), a2, __PAIR__(v6, v7), 1);
    v12 = (int)v11;
    if ( v11 )
      break;
    v5 = *(_DWORD *)v5;
    if ( !v5 )
      goto LABEL_12;
  if ( (a5
     || (v13 = (BlockSource *)Entity::getRegion(v11),
         (v10 = (Entity *)BlockSource::getChunk(v13, (const ChunkPos *)(v12 + 144))) != 0))
    && LevelChunk::hasEntity(v10, (Entity *)v12) == 1 )
    result = LevelChunk::removeEntity(v8, v10, v12);
  else
LABEL_12:
    result = 0;
    *(_DWORD *)v8 = 0;
  return result;
}


signed int __fastcall Level::isLeaveGameDone(Level *this)
{
  Level *v1; // r4@1
  int i; // r5@1
  signed int result; // r0@5

  v1 = this;
  for ( i = *((_DWORD *)this + 142); i; i = *(_DWORD *)i )
  {
    if ( Dimension::isLeaveGameDone(*(Dimension **)(i + 8)) != 1 )
      return 0;
  }
  result = 0;
  if ( !*((_BYTE *)v1 + 5864) )
    result = 1;
  return result;
}


char *__fastcall Level::suspendPlayer(Level *this, Player *a2)
{
  int v3; // [sp+4h] [bp-Ch]@1

  v3 = 0;
  return std::vector<PlayerSuspension,std::allocator<PlayerSuspension>>::emplace_back<mce::UUID const&,PlayerSuspension::State>(
           (int)this + 48,
           (int)a2 + 4560,
           &v3);
}


SavedDataStorage *__fastcall Level::saveLevelData(Level *this)
{
  Level *v1; // r4@1
  int v2; // r0@1
  int i; // r5@2
  SavedDataStorage *result; // r0@5

  v1 = this;
  v2 = *((_DWORD *)this + 32);
  if ( v2 )
  {
    (*(void (**)(void))(*(_DWORD *)v2 + 24))();
    for ( i = *((_DWORD *)v1 + 1484); i; i = *(_DWORD *)i )
      MapItemSavedData::trySave(*(MapItemSavedData **)(i + 16), *((LevelStorage **)v1 + 32));
  }
  result = (SavedDataStorage *)*((_DWORD *)v1 + 33);
  if ( result )
    result = (SavedDataStorage *)j_j_j__ZN16SavedDataStorage4saveEv(result);
  return result;
}


char *__fastcall Level::resumePlayer(Level *this, Player *a2)
{
  int v3; // [sp+4h] [bp-Ch]@1

  v3 = 1;
  return std::vector<PlayerSuspension,std::allocator<PlayerSuspension>>::emplace_back<mce::UUID const&,PlayerSuspension::State>(
           (int)this + 48,
           (int)a2 + 4560,
           &v3);
}


MapItemSavedData *__fastcall Level::createMapSavedData(int a1, __int64 *a2)
{
  __int64 *v2; // r10@1
  __int64 v3; // r0@1
  MapItemSavedData *v4; // r6@2
  int v5; // r9@3
  int v6; // r5@3
  unsigned int v7; // r8@3
  unsigned int v8; // r11@4
  unsigned int v9; // r4@4
  MapItemSavedData *v10; // r7@4
  int v11; // r1@4
  int v13; // [sp+4h] [bp-34h]@1
  int v14; // [sp+8h] [bp-30h]@4
  unsigned int v15; // [sp+Ch] [bp-2Ch]@4

  v2 = a2;
  v13 = a1;
  v3 = *a2;
  if ( HIDWORD(v3) == (_DWORD)v3 )
  {
    v4 = 0;
  }
  else
    v5 = 0;
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = *(_DWORD *)(v3 + v5);
      v9 = *(_DWORD *)(v3 + v5 + 4);
      v14 = *(_DWORD *)(v3 + v5);
      v15 = v9;
      v10 = Level::_createMapSavedData(v13, (unsigned __int64 *)&v14);
      MapItemSavedData::setScale(v10, v7);
      if ( v6 )
        MapItemSavedData::setParentMapId(v6, v11, __PAIR__(v9, v8));
      v5 += 8;
      if ( !v7 )
        v4 = v10;
      v3 = *v2;
      ++v7;
      v6 = (int)v10;
    }
    while ( v7 < (HIDWORD(v3) - (signed int)v3) >> 3 );
  return v4;
}


void __fastcall Level::expandMapByID(int result, int a2, __int64 a3, int a4)
{
  Level::expandMapByID(result, a2, a3, a4);
}


void __fastcall Level::getScreenshotsFolder(Level *this, int a2)
{
  Level::getScreenshotsFolder(this, a2);
}


unsigned int __fastcall Level::unregisterTemporaryPointer(int a1, unsigned int a2)
{
  int v2; // r9@1
  unsigned int v3; // r6@1
  unsigned int v4; // r7@1
  unsigned int result; // r0@1
  unsigned int v6; // r5@1
  int v7; // r1@1
  void **v8; // r10@1
  void **v9; // r8@2
  void **v10; // r4@2
  unsigned int v11; // r0@5
  int v12; // r1@5
  void **v13; // r7@8
  int v14; // r1@10
  _DWORD *v15; // r8@13
  int v16; // r1@14
  int v17; // r1@15
  int *v18; // [sp+4h] [bp-2Ch]@2
  int v19; // [sp+8h] [bp-28h]@1

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 5904);
  v4 = a2;
  result = 5900;
  v6 = a2 % v3;
  v7 = *(_DWORD *)(v2 + 5900);
  v19 = v7;
  v8 = *(void ***)(v7 + 4 * v6);
  if ( v8 )
  {
    v9 = (void **)*v8;
    v10 = *(void ***)(v7 + 4 * v6);
    v18 = (int *)(v2 + 5900);
    while ( 1 )
    {
      result = (unsigned int)v9[1];
      if ( result == v4 )
        break;
      if ( *v9 )
      {
        v11 = *((_DWORD *)*v9 + 1);
        v12 = v11 % v3;
        result = v11 / v3;
        v10 = v9;
        v9 = (void **)*v9;
        if ( v12 == v6 )
          continue;
      }
      return result;
    }
    if ( v10 )
      v13 = (void **)*v10;
      if ( v8 != v10 )
        if ( *v13 )
        {
          v14 = *((_DWORD *)*v13 + 1) % v3;
          if ( v14 != v6 )
            *(_DWORD *)(v19 + 4 * v14) = v10;
        }
        goto LABEL_20;
      v15 = *v13;
      if ( *v13 )
        v16 = v15[1] % v3;
        if ( v16 == v6 )
LABEL_20:
          *v10 = *v13;
          operator delete(v13);
          result = 5912;
          --*(_DWORD *)(v2 + 5912);
          return result;
        *(_DWORD *)(v19 + 4 * v16) = v8;
        v17 = *v18;
        v8 = *(void ***)(*v18 + 4 * v6);
      else
        v17 = v19;
      if ( (void **)(v2 + 5908) == v8 )
        *v8 = v15;
      *(_DWORD *)(v17 + 4 * v6) = 0;
      goto LABEL_20;
  }
  return result;
}


_DWORD *__fastcall Level::getPlayerNames(Level *this, int a2)
{
  int v2; // r6@1
  int *v3; // r9@1
  __int64 v4; // r0@1
  char *v5; // r0@1
  int v6; // r5@1
  char *v7; // r0@2
  void **v8; // r0@3
  void *v9; // r0@3
  unsigned int *v11; // r2@5
  signed int v12; // r1@7
  void **v13; // [sp+0h] [bp-E8h]@1
  int v14; // [sp+4h] [bp-E4h]@4
  void **v15; // [sp+8h] [bp-E0h]@1
  void **v16; // [sp+Ch] [bp-DCh]@3
  int v17; // [sp+28h] [bp-C0h]@4
  int v18; // [sp+30h] [bp-B8h]@3
  int v19; // [sp+34h] [bp-B4h]@4
  char v20; // [sp+BEh] [bp-2Ah]@1
  char v21; // [sp+BFh] [bp-29h]@2

  v2 = a2;
  v3 = (int *)this;
  sub_21D103C((int)&v13, 24);
  v4 = *(_QWORD *)(v2 + 24);
  v5 = sub_21CC440((char *)&v15);
  v20 = 58;
  sub_21CBF38(v5, (int)&v20, 1);
  v6 = *(_QWORD *)(v2 + 12);
  if ( v6 != *(_QWORD *)(v2 + 12) >> 32 )
  {
    do
    {
      v7 = sub_21CBF38(
             (char *)&v15,
             *(_DWORD *)(*(_DWORD *)v6 + 4316),
             *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v6 + 4316) - 12));
      v21 = 44;
      sub_21CBF38(v7, (int)&v21, 1);
      v6 += 4;
    }
    while ( v6 != *(_DWORD *)(v2 + 16) );
  }
  sub_21CFED8(v3, (int)&v16);
  v8 = off_26D3F84;
  v13 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v13) = off_26D3F80[0];
  v15 = v8;
  v16 = &off_27734E8;
  v9 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v16 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v17);
  v13 = (void **)off_26D3F68;
  *(void ***)((char *)&v13 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v14 = 0;
  return sub_21B6560(&v19);
}
