

signed int __fastcall BeetrootBlock::getVariant(BeetrootBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1
  signed int v4; // r1@1
  signed int result; // r0@2

  v2 = a2;
  v3 = (unsigned __int64 *)j_Block::getBlockState((int)this, 17);
  v4 = (v2 >> (1 - (*v3 >> 32) + *v3)) & (0xFu >> (4 - (*v3 >> 32)));
  if ( v4 < BushBlock::MAX_GROWTH[0] )
  {
    result = v4 >> 1;
    if ( v4 == 6 )
      result = 2;
  }
  else
    result = 3;
  return result;
}


int __fastcall BeetrootBlock::BeetrootBlock(int a1, const void **a2, int a3)
{
  int result; // r0@1

  result = j_CropBlock::CropBlock(a1, a2, a3);
  *(_DWORD *)result = &off_272288C;
  *(_DWORD *)(result + 24) = 0x2000000;
  *(_DWORD *)(result + 28) = 0;
  return result;
}


int __fastcall BeetrootBlock::spawnResources(BeetrootBlock *this, BlockSource *a2, const BlockPos *a3, int a4, float a5, int a6)
{
  BlockSource *v6; // r11@1
  Block *v7; // r10@1
  unsigned __int8 v8; // r7@1
  const BlockPos *v9; // r8@1
  Level *v10; // r0@1
  Level *v11; // r9@1
  int result; // r0@1
  unsigned __int64 *v13; // r0@2
  signed int v14; // r7@2
  int v15; // r0@3
  char *v16; // r0@10
  char v17; // r4@10
  char *v18; // r0@10
  int v19; // r0@11
  char *v20; // r0@18
  int v21; // r0@19
  char *v22; // r0@26
  int v23; // r0@27
  int v24; // r4@34
  signed int v25; // r5@34
  int v26; // [sp+0h] [bp-100h]@35
  int v27; // [sp+8h] [bp-F8h]@39
  void *v28; // [sp+24h] [bp-DCh]@37
  void *v29; // [sp+34h] [bp-CCh]@35
  char v30; // [sp+48h] [bp-B8h]@11
  int v31; // [sp+50h] [bp-B0h]@15
  void *v32; // [sp+6Ch] [bp-94h]@13
  void *v33; // [sp+7Ch] [bp-84h]@11
  char v34; // [sp+90h] [bp-70h]@3
  int v35; // [sp+98h] [bp-68h]@7
  void *v36; // [sp+B4h] [bp-4Ch]@5
  void *ptr; // [sp+C4h] [bp-3Ch]@3

  v6 = a2;
  v7 = this;
  v8 = a4;
  v9 = a3;
  v10 = (Level *)j_BlockSource::getLevel(a2);
  v11 = v10;
  result = j_Level::isClientSide(v10);
  if ( !result )
  {
    v13 = (unsigned __int64 *)j_Block::getBlockState((int)v7, 17);
    v14 = (v8 >> (*v13 + 1 - (*v13 >> 32))) & (0xFu >> (4 - (*v13 >> 32)));
    if ( v14 > 6 )
    {
      v16 = j_Level::getRandom(v11);
      v17 = j_Random::_genRandInt32((Random *)v16);
      v18 = j_Level::getRandom(v11);
      if ( (signed int)(j_Random::_genRandInt32((Random *)v18) % 0xF) <= v14 )
      {
        v19 = (*(int (__fastcall **)(Block *))(*(_DWORD *)v7 + 508))(v7);
        j_ItemInstance::ItemInstance((ItemInstance *)&v30, v19);
        j_Block::popResource(v7, v6, v9, (const ItemInstance *)&v30);
        if ( v33 )
          j_operator delete(v33);
        if ( v32 )
          j_operator delete(v32);
        if ( v31 )
          (*(void (**)(void))(*(_DWORD *)v31 + 4))();
        v31 = 0;
      }
      v20 = j_Level::getRandom(v11);
      if ( (signed int)(j_Random::_genRandInt32((Random *)v20) % 0xF) <= v14 )
        v21 = (*(int (__fastcall **)(Block *))(*(_DWORD *)v7 + 508))(v7);
        j_ItemInstance::ItemInstance((ItemInstance *)&v30, v21);
      v22 = j_Level::getRandom(v11);
      if ( (signed int)(j_Random::_genRandInt32((Random *)v22) % 0xF) <= v14 )
        v23 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v7 + 508))(v7);
        j_ItemInstance::ItemInstance((ItemInstance *)&v30, v23);
      v24 = v17 & 1;
      v25 = -1;
      do
        j_ItemInstance::ItemInstance((ItemInstance *)&v26, Item::mBeetroot);
        j_Block::popResource(v7, v6, v9, (const ItemInstance *)&v26);
        if ( v29 )
          j_operator delete(v29);
        if ( v28 )
          j_operator delete(v28);
        result = v27;
        if ( v27 )
          result = (*(int (**)(void))(*(_DWORD *)v27 + 4))();
        ++v25;
        v27 = 0;
      while ( v25 < v24 );
    }
    else
      v15 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v7 + 508))(v7);
      j_ItemInstance::ItemInstance((ItemInstance *)&v34, v15);
      j_Block::popResource(v7, v6, v9, (const ItemInstance *)&v34);
      if ( ptr )
        j_operator delete(ptr);
      if ( v36 )
        j_operator delete(v36);
      if ( v35 )
        (*(void (**)(void))(*(_DWORD *)v35 + 4))();
      result = 0;
      v35 = 0;
  }
  return result;
}


void __fastcall BeetrootBlock::~BeetrootBlock(BeetrootBlock *this)
{
  Block *v1; // r0@1

  v1 = j_Block::~Block(this);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall BeetrootBlock::~BeetrootBlock(BeetrootBlock *this)
{
  BeetrootBlock::~BeetrootBlock(this);
}


int __fastcall BeetrootBlock::getBaseSeed(BeetrootBlock *this)
{
  return Item::mSeeds_beetroot;
}
