

void __fastcall ExplorationMapFunction::~ExplorationMapFunction(ExplorationMapFunction *this)
{
  ExplorationMapFunction *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  char *v4; // r5@2 OVERLAPPED
  char *v5; // r6@2 OVERLAPPED
  unsigned int *v6; // r2@10
  signed int v7; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_2724DBC;
  v2 = *((_DWORD *)this + 4);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  *(_DWORD *)v1 = &off_2719858;
  *(_QWORD *)&v4 = *(_QWORD *)((char *)v1 + 4);
  if ( v4 != v5 )
    do
      if ( *(_DWORD *)v4 )
        (*(void (**)(void))(**(_DWORD **)v4 + 4))();
      *(_DWORD *)v4 = 0;
      v4 += 4;
    while ( v5 != v4 );
    v4 = (char *)*((_DWORD *)v1 + 1);
  if ( v4 )
    j_operator delete(v4);
  j_operator delete((void *)v1);
}


void __fastcall ExplorationMapFunction::deserialize(_DWORD *a1, Json::Value *a2, int a3)
{
  _DWORD *v3; // r8@1
  int v4; // r6@1
  Json::Value *v5; // r7@1
  void *v6; // r0@1
  void *v7; // r4@1
  int *v8; // r6@1
  int v9; // r7@1
  void *v10; // r0@1
  void *v11; // r0@2
  unsigned int *v12; // r2@4
  signed int v13; // r1@6
  unsigned int *v14; // r2@8
  signed int v15; // r1@10
  int v16; // [sp+8h] [bp-30h]@1
  int v17; // [sp+Ch] [bp-2Ch]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = j_operator new(0x14u);
  v7 = v6;
  *((_DWORD *)v6 + 1) = *(_DWORD *)v4;
  *(_DWORD *)v4 = 0;
  *((_DWORD *)v6 + 2) = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v4 + 4) = 0;
  *((_DWORD *)v6 + 3) = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)v6 = &off_2724DBC;
  *((_DWORD *)v6 + 4) = &unk_28898CC;
  v8 = (int *)((char *)v6 + 16);
  v9 = j_Json::Value::operator[](v5, "destination");
  sub_21E94B4((void **)&v16, (const char *)&unk_257BC67);
  j_Json::Value::asString(&v17, v9, &v16);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v8, &v17);
  v10 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v17 - 4);
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
      j_j_j_j__ZdlPv_9(v10);
  }
  v11 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v16 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  *v3 = v7;
}


ExplorationMapFunction *__fastcall ExplorationMapFunction::~ExplorationMapFunction(ExplorationMapFunction *this)
{
  ExplorationMapFunction *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  char *v4; // r5@2 OVERLAPPED
  char *v5; // r6@2 OVERLAPPED
  unsigned int *v7; // r2@10
  signed int v8; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_2724DBC;
  v2 = *((_DWORD *)this + 4);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  *(_DWORD *)v1 = &off_2719858;
  *(_QWORD *)&v4 = *(_QWORD *)((char *)v1 + 4);
  if ( v4 != v5 )
    do
      if ( *(_DWORD *)v4 )
        (*(void (**)(void))(**(_DWORD **)v4 + 4))();
      *(_DWORD *)v4 = 0;
      v4 += 4;
    while ( v5 != v4 );
    v4 = (char *)*((_DWORD *)v1 + 1);
  if ( v4 )
    j_operator delete(v4);
  return v1;
}


void __fastcall ExplorationMapFunction::deserialize(_DWORD *a1, Json::Value *a2, int a3)
{
  ExplorationMapFunction::deserialize(a1, a2, a3);
}


void __fastcall ExplorationMapFunction::~ExplorationMapFunction(ExplorationMapFunction *this)
{
  ExplorationMapFunction::~ExplorationMapFunction(this);
}


int __fastcall ExplorationMapFunction::apply(ExplorationMapFunction *this, ItemInstance *a2, Random *a3, const Trade *a4, LootTableContext *a5)
{
  ExplorationMapFunction *v5; // r7@1
  ItemInstance *v6; // r10@1
  Level *v7; // r8@1
  Entity *v8; // r5@1
  BlockSource *v9; // r9@1
  const void **v10; // r7@2
  Dimension *v11; // r0@3
  int v12; // r4@3
  int (__fastcall *v13)(int, int, char *, int *); // r8@3
  int v14; // r6@3
  int v15; // r0@3
  signed int v16; // r4@4
  int v17; // r0@6
  unsigned __int8 v18; // r5@9
  MapItemSavedData *v19; // r7@12
  ItemInstance *v20; // r1@12
  MapItemSavedData *v21; // r2@12
  char v22; // r6@12
  int v23; // r0@12
  int v24; // r5@13
  unsigned int *v25; // r1@14
  unsigned int v26; // r0@16
  unsigned int *v27; // r4@20
  unsigned int v28; // r0@22
  char *v29; // r0@28
  MapItem *v30; // r0@29
  MapItemSavedData *v31; // r2@29
  Level *v33; // [sp+8h] [bp-68h]@3
  char v34; // [sp+Ch] [bp-64h]@13
  int v35; // [sp+10h] [bp-60h]@13
  char v36; // [sp+14h] [bp-5Ch]@12
  int v37; // [sp+18h] [bp-58h]@12
  int v38; // [sp+1Ch] [bp-54h]@12
  unsigned __int64 v39; // [sp+20h] [bp-50h]@12
  int v40; // [sp+28h] [bp-48h]@6
  int v41; // [sp+2Ch] [bp-44h]@6
  int v42; // [sp+30h] [bp-40h]@6
  char v43; // [sp+34h] [bp-3Ch]@3
  int v44; // [sp+40h] [bp-30h]@1
  int v45; // [sp+44h] [bp-2Ch]@1
  int v46; // [sp+48h] [bp-28h]@1

  v5 = this;
  v6 = a2;
  v7 = (Level *)j_LootTableContext::getLevel(a5);
  v8 = (Entity *)j_LootTableContext::getEntity((int)a5, 0);
  v44 = 0;
  v45 = 0;
  v9 = (BlockSource *)j_Entity::getRegion(v8);
  v46 = 0;
  if ( j_BlockSource::getDimensionId(v9) )
  {
    v10 = (const void **)((char *)v5 + 16);
  }
  else
    v33 = v7;
    v11 = (Dimension *)j_BlockSource::getDimension(v9);
    v12 = j_Dimension::getWorldGenerator(v11);
    v13 = *(int (__fastcall **)(int, int, char *, int *))(*(_DWORD *)v12 + 12);
    v14 = j_WorldGenerator::getFeatureId(v10);
    v15 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v8 + 52))(v8);
    j_BlockPos::BlockPos((int)&v43, v15);
    if ( v13(v12, v14, &v43, &v44) )
    {
      v16 = 1;
      v7 = v33;
      goto LABEL_7;
    }
    v7 = v33;
  v17 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v8 + 52))(v8);
  j_BlockPos::BlockPos((int)&v40, v17);
  v16 = 0;
  v44 = v40;
  v45 = v41;
  v46 = v42;
LABEL_7:
  if ( sub_21E7D6C(v10, "monument") )
    if ( sub_21E7D6C(v10, "mansion") )
      v18 = 12;
    else
      j_ItemInstance::setAuxValue(v6, 4);
      v18 = 14;
    j_ItemInstance::setAuxValue(v6, 3);
    v18 = 15;
  v39 = -1LL;
  v19 = j_Level::createMapSavedData((int)v7, &v39);
  j_EmptyMapItem::addPlayerMarker(v6, v20);
  j_MapItem::setItemInstanceInfo(v6, v19, v21);
  j_MapItemSavedData::enableUnlimitedTracking(v19);
  j_MapItemSavedData::setScale(v19, 2);
  j_Vec3::Vec3((int)&v36, (int)&v44);
  v22 = *((_BYTE *)v19 + 36);
  v23 = j_BlockSource::getDimensionId(v9);
  j_MapItemSavedData::setOrigin((int)v19, *(float *)&v36, v37, v38, v22, v23);
  if ( v16 == 1 )
    j_MapItemSavedData::addTrackedMapEntity((int)&v34, (int)v19, (int)&v44, v9, v18);
    v24 = v35;
    if ( v35 )
      v25 = (unsigned int *)(v35 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
      }
      else
        v26 = (*v25)--;
      if ( v26 == 1 )
        v27 = (unsigned int *)(v24 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 8))(v24);
        if ( &pthread_create )
        {
          __dmb();
          do
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
        }
        else
          v28 = (*v27)--;
        if ( v28 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 12))(v24);
  *((_BYTE *)v19 + 17) = 1;
  if ( *(_DWORD *)v6 == Item::mFilledMap )
    v29 = j_Level::getLevelData(v7);
    if ( j_LevelData::getGenerator((LevelData *)v29) != 2 )
      v30 = (MapItem *)j_BlockSource::getDimension(v9);
      j_MapItem::renderBiomePreviewMap(v30, (Dimension *)v19, v31);
  return 0;
}
