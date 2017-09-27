

signed int __fastcall WaterLilyBlockItem::isLiquidClipItem(WaterLilyBlockItem *this, int a2)
{
  return 1;
}


void __fastcall WaterLilyBlockItem::~WaterLilyBlockItem(WaterLilyBlockItem *this)
{
  WaterLilyBlockItem::~WaterLilyBlockItem(this);
}


int __fastcall WaterLilyBlockItem::_useOn(int a1, int a2, Entity *this, int a4, int a5, int a6, int a7, int a8, int a9)
{
  Entity *v9; // r5@1
  int v10; // r6@1
  int v11; // r8@1
  BlockSource *v12; // r0@1
  BlockSource *v13; // r7@1
  int *v14; // r0@1
  int *v15; // r0@2
  const BlockPos *v16; // r0@3
  Block *v17; // r4@3
  __int64 v18; // kr00_8@3
  __int64 v19; // r2@3
  int *v20; // r0@5
  signed int v21; // r0@5
  bool v22; // zf@5
  int *v23; // r0@8
  int v24; // r4@10
  int (__fastcall *v25)(int, int, unsigned __int8 *, char *); // r12@10
  void (__fastcall *v26)(int, int, unsigned __int8 *, char *); // r7@11
  char v28; // [sp+4h] [bp-3Ch]@11
  char v29; // [sp+5h] [bp-3Bh]@11
  char v30; // [sp+8h] [bp-38h]@11
  char v31; // [sp+9h] [bp-37h]@11
  char v32; // [sp+Ch] [bp-34h]@10
  char v33; // [sp+Dh] [bp-33h]@10
  int v34; // [sp+10h] [bp-30h]@3
  __int64 v35; // [sp+14h] [bp-2Ch]@3
  unsigned __int8 v36; // [sp+1Ch] [bp-24h]@3
  char v37; // [sp+1Dh] [bp-23h]@6

  v9 = this;
  v10 = a4;
  v11 = a2;
  v12 = (BlockSource *)Entity::getRegion(this);
  v13 = v12;
  v14 = (int *)BlockSource::getMaterial(v12, (const BlockPos *)v10);
  if ( Material::isType(v14, 5)
    || (v15 = (int *)BlockSource::getMaterial(v13, (const BlockPos *)v10), Material::isType(v15, 18) == 1) )
  {
    v16 = (const BlockPos *)Entity::getRegion(v9);
    BlockSource::getBlockAndData((BlockSource *)&v36, v16, v10);
    v17 = (Block *)Block::mBlocks[v36];
    v18 = *(_QWORD *)v10;
    HIDWORD(v19) = *(_DWORD *)(v10 + 8);
    LODWORD(v19) = (*(_QWORD *)v10 >> 32) + 1;
    v34 = *(_QWORD *)v10;
    v35 = v19;
    if ( v17 )
    {
      if ( BlockSource::isEmptyBlock(v13, v18, v19, SHIDWORD(v19)) == 1 )
      {
        v20 = (int *)Block::getMaterial(v17);
        v21 = Material::isType(v20, 5);
        v22 = v21 == 1;
        if ( v21 == 1 )
          v22 = v37 == 0;
        if ( v22 || (v23 = (int *)Block::getMaterial(v17), Material::isType(v23, 18) == 1) )
        {
          if ( !a9 )
          {
            v30 = *(_BYTE *)(Block::mWaterlily + 4);
            v31 = 0;
            BlockSource::setBlockAndData((int)v13, (BlockPos *)&v34, (int)&v30, 3, (int)v9);
            (*(void (__fastcall **)(Entity *, int))(*(_DWORD *)v9 + 612))(v9, v11);
            return 1;
          }
          v24 = 0;
          v25 = *(int (__fastcall **)(int, int, unsigned __int8 *, char *))(*(_DWORD *)a9 + 8);
          v32 = *(_BYTE *)(Block::mWaterlily + 4);
          v33 = 0;
          if ( !v25(a9, v10, &v36, &v32) )
            v26 = *(void (__fastcall **)(int, int, unsigned __int8 *, char *))(*(_DWORD *)a9 + 12);
            v28 = *(_BYTE *)(Block::mWaterlily + 4);
            v29 = 0;
            v26(a9, v10, &v36, &v28);
        }
        else
      }
      else
        v24 = 0;
    }
    else
      v24 = 0;
  }
  else
    v24 = 0;
  return v24;
}


void __fastcall WaterLilyBlockItem::~WaterLilyBlockItem(WaterLilyBlockItem *this)
{
  Item *v1; // r0@1

  v1 = Item::~Item(this);
  j_j_j__ZdlPv_6((void *)v1);
}
