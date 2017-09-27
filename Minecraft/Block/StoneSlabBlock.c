

void __fastcall StoneSlabBlock::buildDescriptionId(StoneSlabBlock *this, int a2, unsigned int a3)
{
  int v3; // r6@1
  StoneSlabBlock *v4; // r8@1
  unsigned int v5; // r5@1
  __int64 v6; // kr00_8@1
  int *v7; // r0@1
  unsigned int v8; // r0@1
  const void **v9; // r0@3
  const void **v10; // r0@3
  char *v11; // r0@3
  void *v12; // r0@4
  unsigned int *v13; // r2@6
  signed int v14; // r1@8
  unsigned int *v15; // r2@10
  signed int v16; // r1@12
  int v17; // [sp+4h] [bp-34h]@1
  char *v18; // [sp+8h] [bp-30h]@3

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = *(_QWORD *)Block::getBlockState(a2, 24);
  v7 = sub_21E8AF4(&v17, (int *)(v3 + 8));
  sub_21E7408((const void **)v7, ".", 1u);
  v8 = (v5 >> (1 - BYTE4(v6) + v6)) & (0xFu >> (4 - BYTE4(v6)));
  if ( v8 > 8 )
    v8 = 0;
  v9 = sub_21E72F0((const void **)&v17, (const void **)&StoneSlabBlock2::SLAB_NAMES[v8 + 2]);
  v18 = (char *)*v9;
  *v9 = &unk_28898CC;
  v10 = sub_21E7408((const void **)&v18, ".name", 5u);
  *(_DWORD *)v4 = *v10;
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


ItemInstance *__fastcall StoneSlabBlock::asItemInstance(StoneSlabBlock *this, BlockSource *a2, const BlockPos *a3, int a4, unsigned __int8 a5)
{
  BlockSource *v5; // r5@1
  ItemInstance *v6; // r8@1
  __int64 v7; // r6@1
  BlockState *v8; // r0@1
  int v9; // r4@1
  int v10; // r5@1

  v5 = a2;
  v6 = this;
  v7 = *(_QWORD *)Block::getBlockState((int)a2, 24);
  v8 = (BlockState *)Block::getBlockState((int)v5, 24);
  v9 = *(_QWORD *)v8 >> 32;
  v10 = *(_QWORD *)v8;
  BlockState::getMask(v8);
  return ItemInstance::ItemInstance(
           v6,
           Block::mStoneSlab,
           1,
           (unsigned __int8)(((0xFu >> (4 - BYTE4(v7))) & (a5 >> (1 - BYTE4(v7) + v7))) << (v10 + 1 - v9)));
}


int __fastcall StoneSlabBlock::getResource(StoneSlabBlock *this, Random *a2, int a3, int a4)
{
  unsigned __int8 v4; // r4@1
  unsigned __int64 *v5; // r0@1
  _DWORD *v6; // r2@1

  v4 = a3;
  v5 = (unsigned __int64 *)Block::getBlockState((int)this, 24);
  v6 = &Block::mStoneSlab;
  if ( ((0xFu >> (4 - (*v5 >> 32))) & (v4 >> (1 - (*v5 >> 32) + *v5))) == 2 )
    v6 = &Block::mWoodenSlab;
  return *(_BYTE *)(*v6 + 4);
}


void __fastcall StoneSlabBlock::~StoneSlabBlock(StoneSlabBlock *this)
{
  StoneSlabBlock::~StoneSlabBlock(this);
}


unsigned int __fastcall StoneSlabBlock::getSpawnResourcesAuxValue(StoneSlabBlock *this, int a2)
{
  unsigned int v2; // r4@1
  unsigned __int64 *v3; // r0@1
  unsigned int result; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 24);
  result = (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)));
  if ( (unsigned __int8)result == 2 )
    LOBYTE(result) = 0;
  return (unsigned __int8)result;
}


void __fastcall StoneSlabBlock::buildDescriptionId(StoneSlabBlock *this, int a2, unsigned int a3)
{
  StoneSlabBlock::buildDescriptionId(this, a2, a3);
}


unsigned int __fastcall StoneSlabBlock::getVariant(StoneSlabBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 24);
  return (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)));
}


int __fastcall StoneSlabBlock::StoneSlabBlock(int a1, const void **a2, char a3, int a4)
{
  int v4; // r7@1
  int v5; // r4@1
  char v6; // r5@1
  const void **v7; // r6@1
  int v8; // r0@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = Material::getMaterial(3);
  SlabBlock::SlabBlock(v4, v7, v6, v5, v8);
  *(_DWORD *)v4 = &off_27154EC;
  *(_DWORD *)(v4 + 644) = 1;
  return v4;
}


void __fastcall StoneSlabBlock::~StoneSlabBlock(StoneSlabBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall StoneSlabBlock::isValidAuxValue(StoneSlabBlock *this, int a2)
{
  int v2; // r4@1
  BlockState *v3; // r0@1
  unsigned int v4; // r1@1
  signed int result; // r0@1

  v2 = a2;
  v3 = (BlockState *)Block::getBlockState((int)this, 37);
  v4 = (BlockState::getMask(v3) ^ 0xFFFFFFF8) & v2;
  result = 0;
  if ( v4 < 8 )
    result = 1;
  return result;
}
