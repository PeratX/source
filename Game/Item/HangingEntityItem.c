

void __fastcall HangingEntityItem::~HangingEntityItem(HangingEntityItem *this)
{
  Item *v1; // r0@1

  v1 = j_Item::~Item(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall HangingEntityItem::HangingEntityItem(int a1, const void **a2, __int16 a3, int a4)
{
  int v4; // r4@1
  int result; // r0@1

  v4 = a4;
  result = j_Item::Item(a1, a2, a3);
  *(_DWORD *)result = &off_272169C;
  *(_DWORD *)(result + 116) = v4;
  return result;
}


void __fastcall HangingEntityItem::~HangingEntityItem(HangingEntityItem *this)
{
  HangingEntityItem::~HangingEntityItem(this);
}


int __fastcall HangingEntityItem::_useOn(int a1, int a2, Entity *this, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4@1
  int v10; // r7@1
  Entity *v11; // r5@1
  int v12; // r8@1
  signed int v13; // r4@2
  BlockSource *v14; // r11@3
  Player *v15; // r10@3
  int v16; // r7@4
  void *v17; // r0@4
  void *v18; // r0@5
  void *v19; // r0@6
  int (__fastcall *v20)(Player *, BlockSource *, int *); // r3@16
  int v21; // r4@16
  bool v22; // zf@18
  unsigned int *v24; // r2@25
  signed int v25; // r1@27
  unsigned int *v26; // r2@29
  signed int v27; // r1@31
  unsigned int *v28; // r2@33
  signed int v29; // r1@35
  int v30; // [sp+4h] [bp-54h]@16
  char v31; // [sp+8h] [bp-50h]@4
  int v32; // [sp+14h] [bp-44h]@4
  int v33; // [sp+18h] [bp-40h]@5
  int v34; // [sp+1Ch] [bp-3Ch]@4
  int v35; // [sp+20h] [bp-38h]@4
  char v36; // [sp+24h] [bp-34h]@4

  v9 = a1;
  v10 = a4;
  v11 = this;
  v12 = a2;
  if ( (unsigned __int8)a5 >= 2u )
  {
    v14 = (BlockSource *)j_Entity::getRegion(this);
    v15 = (Player *)j_BlockSource::getLevel(v14);
    if ( *(_DWORD *)(v9 + 116) != 83 )
      return 0;
    j_Vec3::Vec3((int)&v36, v10);
    j_Level::broadcastLevelEvent(v15, 1040, (unsigned int)&v36, 0);
    j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v32, 83);
    j_Vec3::Vec3((int)&v31, v10);
    j_EntityFactory::createSpawnedEntity((Entity **)&v35, (const void **)&v32, (int)v11, (int)&v31, &Vec2::ZERO);
    v16 = v35;
    v35 = 0;
    v17 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
    {
      v24 = (unsigned int *)(v34 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
      }
      else
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    }
    v18 = (void *)(v33 - 12);
    if ( (int *)(v33 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v33 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    v19 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v32 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    if ( !v16 )
    if ( (*(int (__fastcall **)(int, BlockSource *, _DWORD))(*(_DWORD *)v16 + 784))(
           v16,
           v14,
           Direction::FACING_DIRECTION[a5]) != 1 )
      v13 = 1;
      goto LABEL_23;
    if ( !j_Level::isClientSide(v15) )
      if ( a9 && (*(int (__fastcall **)(int, int))(*(_DWORD *)a9 + 24))(a9, v16) )
        v13 = 0;
        goto LABEL_23;
      v20 = *(int (__fastcall **)(Player *, BlockSource *, int *))(*(_DWORD *)v15 + 44);
      v30 = v16;
      v21 = v20(v15, v14, &v30);
      if ( v30 )
        (*(void (**)(void))(*(_DWORD *)v30 + 32))();
      v16 = 0;
      v22 = a9 == 0;
      v30 = 0;
      if ( a9 )
        v22 = v21 == 0;
      if ( !v22 )
        (*(void (__fastcall **)(int, int))(*(_DWORD *)a9 + 28))(a9, v21);
        v16 = 0;
    (*(void (__fastcall **)(Entity *, int))(*(_DWORD *)v11 + 612))(v11, v12);
    v13 = 1;
      return v13;
LABEL_23:
    (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 32))(v16);
    return v13;
  }
  return 0;
}
