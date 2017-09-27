

int __fastcall SeedItemComponent::SeedItemComponent(int result, int a2)
{
  char v2; // r1@1

  *(_DWORD *)result = a2;
  v2 = BlockID::AIR;
  *(_BYTE *)(result + 4) = BlockID::AIR;
  *(_BYTE *)(result + 5) = v2;
  return result;
}


signed int __fastcall SeedItemComponent::init(SeedItemComponent *this, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  SeedItemComponent *v3; // r4@1
  int v4; // r6@1
  void *v5; // r0@1
  int v6; // r5@2
  void *v7; // r0@2
  int v8; // r6@3
  int v9; // r0@3
  signed int v10; // r5@3
  void *v11; // r0@6
  void *v12; // r0@7
  unsigned int *v14; // r2@9
  signed int v15; // r1@11
  unsigned int *v16; // r2@13
  signed int v17; // r1@15
  unsigned int *v18; // r2@17
  signed int v19; // r1@19
  unsigned int *v20; // r2@21
  signed int v21; // r1@23
  int v22; // [sp+8h] [bp-28h]@2
  int v23; // [sp+Ch] [bp-24h]@2
  int v24; // [sp+14h] [bp-1Ch]@1
  int v25; // [sp+18h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  v4 = Json::Value::operator[](a2, "crop_result");
  sub_21E94B4((void **)&v24, (const char *)&unk_257BC67);
  Json::Value::asString(&v25, v4, &v24);
  v5 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = Json::Value::operator[](v2, "plant_at");
  sub_21E94B4((void **)&v22, (const char *)&unk_257BC67);
  Json::Value::asString(&v23, v6, &v22);
  v7 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v22 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = Block::lookupByName((unsigned int *)&v25, 1);
  v9 = Block::lookupByName((unsigned int *)&v23, 1);
  v10 = 0;
  if ( v8 && v9 )
    *((_BYTE *)v3 + 4) = *(_BYTE *)(v8 + 4);
    *((_BYTE *)v3 + 5) = *(_BYTE *)(v9 + 4);
    v10 = 1;
  v11 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v23 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v25 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  return v10;
}


signed int __fastcall SeedItemComponent::useOn(SeedItemComponent *this, ItemInstance *a2, Entity *a3, const BlockPos *a4, signed __int8 a5, const Vec3 *a6, ItemUseCallback *a7)
{
  SeedItemComponent *v7; // r4@1
  const BlockPos *v8; // r6@1
  Entity *v9; // r10@1
  ItemInstance *v10; // r9@1
  signed int v11; // r7@1
  const BlockPos *v12; // r5@3
  int v13; // r1@3
  int v14; // r2@3
  int (__fastcall *v15)(ItemUseCallback *, int *, __int16 *, char *); // r6@6
  void (__fastcall *v16)(ItemUseCallback *, int *, __int16 *, char *); // r7@9
  char v18; // [sp+4h] [bp-44h]@9
  char v19; // [sp+5h] [bp-43h]@9
  __int16 v20; // [sp+8h] [bp-40h]@9
  char v21; // [sp+Ch] [bp-3Ch]@7
  char v22; // [sp+Dh] [bp-3Bh]@7
  char v23; // [sp+10h] [bp-38h]@6
  char v24; // [sp+11h] [bp-37h]@6
  __int16 v25; // [sp+14h] [bp-34h]@6
  int v26; // [sp+18h] [bp-30h]@3
  int v27; // [sp+1Ch] [bp-2Ch]@3
  int v28; // [sp+20h] [bp-28h]@3
  unsigned __int8 v29; // [sp+24h] [bp-24h]@3

  v7 = this;
  v8 = a4;
  v9 = a3;
  v10 = a2;
  v11 = 0;
  if ( a5 == 1 && *((_BYTE *)this + 4) != BlockID::AIR )
  {
    v12 = (const BlockPos *)Entity::getRegion(a3);
    BlockSource::getBlockID((BlockSource *)&v29, v12, (int)v8);
    v13 = *((_DWORD *)v8 + 1);
    v14 = *((_DWORD *)v8 + 2);
    v26 = *(_DWORD *)v8;
    v27 = v13 + 1;
    v28 = v14;
    if ( v29 != *((_BYTE *)v7 + 5) || BlockSource::isEmptyBlock(v12, (const BlockPos *)&v26) != 1 )
    {
      v11 = 0;
    }
    else if ( !a7
           || (v11 = 0,
               v15 = *(int (__fastcall **)(ItemUseCallback *, int *, __int16 *, char *))(*(_DWORD *)a7 + 8),
               v25 = 0,
               v23 = *((_BYTE *)v7 + 4),
               v24 = 0,
               !v15(a7, &v26, &v25, &v23)) )
      v21 = *((_BYTE *)v7 + 4);
      v22 = 0;
      if ( BlockSource::setBlockAndData((int)v12, (BlockPos *)&v26, (int)&v21, 3, (int)v9) == 1 )
      {
        (*(void (__fastcall **)(Entity *, ItemInstance *))(*(_DWORD *)v9 + 612))(v9, v10);
        if ( a7 )
        {
          v16 = *(void (__fastcall **)(ItemUseCallback *, int *, __int16 *, char *))(*(_DWORD *)a7 + 12);
          v20 = 0;
          v18 = *((_BYTE *)v7 + 4);
          v19 = 0;
          v16(a7, &v26, &v20, &v18);
        }
        v11 = 1;
      }
  }
  return v11;
}


int __fastcall SeedItemComponent::canUseOn(SeedItemComponent *this, Entity *a2, const BlockPos *a3, signed __int8 a4)
{
  const BlockPos *v4; // r5@1
  SeedItemComponent *v5; // r4@1
  int result; // r0@1
  const BlockPos *v7; // r6@3
  int v8; // r1@3
  int v9; // r2@3
  int v10; // [sp+0h] [bp-20h]@3
  int v11; // [sp+4h] [bp-1Ch]@3
  int v12; // [sp+8h] [bp-18h]@3
  unsigned __int8 v13; // [sp+Ch] [bp-14h]@3

  v4 = a3;
  v5 = this;
  result = 0;
  if ( a4 == 1 && *((_BYTE *)v5 + 4) != BlockID::AIR )
  {
    v7 = (const BlockPos *)Entity::getRegion(a2);
    BlockSource::getBlockID((BlockSource *)&v13, v7, (int)v4);
    v8 = *((_DWORD *)v4 + 1);
    v9 = *((_DWORD *)v4 + 2);
    v10 = *(_DWORD *)v4;
    v11 = v8 + 1;
    v12 = v9;
    result = v13 == *((_BYTE *)v5 + 5) && BlockSource::isEmptyBlock(v7, (const BlockPos *)&v10) == 1;
  }
  return result;
}
