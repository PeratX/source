

void __fastcall GrassPathBlock::~GrassPathBlock(GrassPathBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall GrassPathBlock::~GrassPathBlock(GrassPathBlock *this)
{
  GrassPathBlock::~GrassPathBlock(this);
}


int __fastcall GrassPathBlock::neighborChanged(GrassPathBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  int v6; // r1@1
  int v7; // r2@1
  Material *v8; // r0@1
  int result; // r0@1
  char v10; // [sp+0h] [bp-20h]@2
  int v11; // [sp+4h] [bp-1Ch]@1
  int v12; // [sp+8h] [bp-18h]@1
  int v13; // [sp+Ch] [bp-14h]@1

  v4 = a3;
  v5 = a2;
  Block::neighborChanged(this, a2, a3, a4);
  v6 = *((_DWORD *)v4 + 1);
  v7 = *((_DWORD *)v4 + 2);
  v11 = *(_DWORD *)v4;
  v12 = v6 + 1;
  v13 = v7;
  v8 = (Material *)BlockSource::getMaterial(v5, (const BlockPos *)&v11);
  result = Material::isSolid(v8);
  if ( result == 1 )
  {
    v10 = *(_BYTE *)(Block::mDirt + 4);
    result = BlockSource::setBlock((int)v5, v4, &v10, 3);
  }
  return result;
}


signed int __fastcall GrassPathBlock::canBeOriginalSurface(GrassPathBlock *this)
{
  return 1;
}


int __fastcall GrassPathBlock::GrassPathBlock(int a1, const void **a2, char a3)
{
  int v3; // r4@1
  char v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  void (__fastcall *v7)(int, char *); // r2@1
  char v9; // [sp+0h] [bp-20h]@1
  int v10; // [sp+4h] [bp-1Ch]@1
  signed int v11; // [sp+8h] [bp-18h]@1
  signed int v12; // [sp+Ch] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(1);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_270C42C;
  v10 = 1065353216;
  v11 = 1064304640;
  v12 = 1065353216;
  Block::setVisualShape((Block *)v3, (const Vec3 *)&Vec3::ZERO, (const Vec3 *)&v10);
  v7 = *(void (__fastcall **)(int, char *))(*(_DWORD *)v3 + 456);
  v9 = Brightness::MAX;
  v7(v3, &v9);
  Block::setSolid((Block *)v3, 0);
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 28) = 0;
  return v3;
}


int __fastcall GrassPathBlock::getAABB(GrassPathBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, bool a6, int a7)
{
  AABB *v7; // r4@1
  const BlockPos *v8; // r5@1
  char v10; // [sp+Ch] [bp-1Ch]@1

  v7 = a4;
  v8 = a3;
  AABB::set((unsigned int)a4, 0LL, 1.0, 1.0, 1.0);
  Vec3::Vec3((int)&v10, (int)v8);
  return AABB::move(v7, (const Vec3 *)&v10);
}
