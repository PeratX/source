

int __fastcall WoolCarpetBlock::getSpawnResourcesAuxValue(WoolCarpetBlock *this, int a2)
{
  return a2;
}


signed int __fastcall WoolCarpetBlock::canSurvive(WoolCarpetBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r5@1
  BlockSource *v4; // r4@1
  WoolCarpetBlock *v5; // r6@1
  int v6; // r0@1
  int v7; // r1@1
  int v8; // r2@1
  signed int v9; // r7@2
  void (__fastcall *v10)(WoolCarpetBlock *, BlockSource *, const BlockPos *, unsigned int); // r8@3
  unsigned int v11; // r0@3
  unsigned __int8 v13; // [sp+8h] [bp-28h]@2
  int v14; // [sp+Ch] [bp-24h]@1
  int v15; // [sp+10h] [bp-20h]@1
  int v16; // [sp+14h] [bp-1Ch]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 1);
  v8 = *((_DWORD *)a3 + 2);
  v14 = v6;
  v15 = v7 - 1;
  v16 = v8;
  if ( BlockSource::isEmptyBlock(v4, (const BlockPos *)&v14) == 1 )
  {
    BlockSource::getBlockID((BlockSource *)&v13, v4, (int)v3);
    v9 = 0;
    if ( v13 == *((_BYTE *)v5 + 4) )
    {
      v10 = *(void (__fastcall **)(WoolCarpetBlock *, BlockSource *, const BlockPos *, unsigned int))(*(_DWORD *)v5 + 276);
      v11 = BlockSource::getData(v4, v3);
      v10(v5, v4, v3, v11);
      BlockSource::removeBlock(v4, *(_DWORD *)v3, *((_DWORD *)v3 + 1), *((_DWORD *)v3 + 2));
    }
  }
  else
    v9 = 1;
  return v9;
}


void __fastcall WoolCarpetBlock::~WoolCarpetBlock(WoolCarpetBlock *this)
{
  WoolCarpetBlock::~WoolCarpetBlock(this);
}


int __fastcall WoolCarpetBlock::WoolCarpetBlock(int a1, const void **a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  int v8; // [sp+4h] [bp-1Ch]@1
  signed int v9; // [sp+8h] [bp-18h]@1
  signed int v10; // [sp+Ch] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(29);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_2717E3C;
  v8 = 1065353216;
  v9 = 1031798784;
  v10 = 1065353216;
  Block::setVisualShape((Block *)v3, (const Vec3 *)&Vec3::ZERO, (const Vec3 *)&v8);
  (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v3 + 476))(v3, 1);
  Block::setSolid((Block *)v3, 0);
  *(_DWORD *)(v3 + 44) = 1032805417;
  Block::mTranslucency[v4] = 1063507722;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 24) = 65792;
  return v3;
}


signed int __fastcall WoolCarpetBlock::getCollisionShape(WoolCarpetBlock *this, AABB *a2, BlockSource *a3, const BlockPos *a4, Entity *a5)
{
  const BlockPos *v5; // r8@1
  BlockSource *v6; // r5@1
  AABB *v7; // r6@1
  Block *v8; // r7@1
  signed int result; // r0@3

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = this;
  if ( a5 && (*(int (__fastcall **)(Entity *))(*(_DWORD *)a5 + 488))(a5) == 83 )
    result = 0;
  else
    result = Block::getCollisionShape(v8, v7, v6, v5, a5);
  return result;
}


void __fastcall WoolCarpetBlock::~WoolCarpetBlock(WoolCarpetBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


AABB *__fastcall WoolCarpetBlock::getVisualShape(WoolCarpetBlock *this, unsigned __int8 a2, AABB *a3, bool a4)
{
  AABB *v4; // r4@1
  int v6; // [sp+4h] [bp-14h]@1
  signed int v7; // [sp+8h] [bp-10h]@1
  signed int v8; // [sp+Ch] [bp-Ch]@1

  v4 = a3;
  v6 = 1065353216;
  v7 = 1031798784;
  v8 = 1065353216;
  AABB::set(a3, (const Vec3 *)&Vec3::ZERO, (const Vec3 *)&v6);
  return v4;
}


int __fastcall WoolCarpetBlock::onPlace(WoolCarpetBlock *this, BlockSource *a2, const BlockPos *a3)
{
  Block *v3; // r6@1
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  int result; // r0@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  result = (*(int (**)(void))(*(_DWORD *)this + 324))();
  if ( result == 1 )
    result = j_j_j__ZNK5Block7onPlaceER11BlockSourceRK8BlockPos(v3, v5, v4);
  return result;
}


int __fastcall WoolCarpetBlock::mayPlace(WoolCarpetBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  WoolCarpetBlock *v5; // r6@1
  int result; // r0@2

  v3 = a3;
  v4 = a2;
  v5 = this;
  if ( Block::mayPlace(this, a2, a3) == 1 )
    result = (*(int (__fastcall **)(WoolCarpetBlock *, BlockSource *, const BlockPos *))(*(_DWORD *)v5 + 324))(
               v5,
               v4,
               v3);
  else
    result = 0;
  return result;
}


unsigned int __fastcall WoolCarpetBlock::getBlockDataForItemAuxValue(WoolCarpetBlock *this, int a2)
{
  return ~(unsigned int)this & 0xF;
}


signed int __fastcall WoolCarpetBlock::checkIsPathable(WoolCarpetBlock *this, Entity *a2, const BlockPos *a3, const BlockPos *a4)
{
  return 1;
}
