

int __fastcall QuartzBlockBlock::getPlacementDataValue(QuartzBlockBlock *this, Entity *a2, const BlockPos *a3, int a4, const Vec3 *a5, int a6)
{
  Entity *v6; // r6@1
  int v7; // r4@1
  const BlockPos *v8; // r5@1
  RotatedPillarBlock *v9; // r7@1
  unsigned __int64 *v10; // r0@1
  int result; // r0@2

  v6 = a2;
  v7 = a4;
  v8 = a3;
  v9 = this;
  v10 = (unsigned __int64 *)Block::getBlockState((int)this, 24);
  if ( ((unsigned __int8)a6 >> (*v10 + 1 - (*v10 >> 32))) & (0xFu >> (4 - (*v10 >> 32))) )
    result = j_j_j__ZNK18RotatedPillarBlock21getPlacementDataValueER6EntityRK8BlockPosaRK4Vec3i(v9, v6, v8, v7, a5, a6);
  else
    result = j_j_j__ZNK5Block21getPlacementDataValueER6EntityRK8BlockPosaRK4Vec3i(v9, v6, v8, v7, a5, a6);
  return result;
}


void __fastcall QuartzBlockBlock::buildDescriptionId(QuartzBlockBlock *this, int a2, unsigned int a3)
{
  int v3; // r6@1
  int *v4; // r8@1
  unsigned int v5; // r4@1
  __int64 v6; // kr00_8@1
  unsigned int v7; // r0@1
  void *v8; // r0@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  int v11; // [sp+0h] [bp-28h]@1

  v3 = a2;
  v4 = (int *)this;
  v5 = a3;
  v6 = *(_QWORD *)Block::getBlockState(a2, 24);
  sub_21E8AF4(&v11, (int *)(v3 + 8));
  v7 = (v5 >> (1 - BYTE4(v6) + v6)) & (0xFu >> (4 - BYTE4(v6)));
  if ( v7 == 2 )
  {
    sub_21E7408((const void **)&v11, ".lines", 6u);
  }
  else if ( v7 == 1 )
    sub_21E7408((const void **)&v11, ".chiseled", 9u);
  else
    sub_21E7408((const void **)&v11, ".default", 8u);
  sub_21E8AF4(v4, &v11);
  sub_21E7408((const void **)v4, ".name", 5u);
  v8 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
}


void __fastcall QuartzBlockBlock::~QuartzBlockBlock(QuartzBlockBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall QuartzBlockBlock::~QuartzBlockBlock(QuartzBlockBlock *this)
{
  QuartzBlockBlock::~QuartzBlockBlock(this);
}


int __fastcall QuartzBlockBlock::getSpawnResourcesAuxValue(QuartzBlockBlock *this, int a2)
{
  unsigned int v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 24);
  return (unsigned __int8)(0xFu >> (4 - (*v3 >> 32))) & (unsigned __int8)(v2 >> (*v3 + 1 - (*v3 >> 32)));
}


void __fastcall QuartzBlockBlock::buildDescriptionId(QuartzBlockBlock *this, int a2, unsigned int a3)
{
  QuartzBlockBlock::buildDescriptionId(this, a2, a3);
}


_DWORD *__fastcall QuartzBlockBlock::QuartzBlockBlock(_DWORD *a1, const void **a2, char a3)
{
  _DWORD *v3; // r6@1
  char v4; // r4@1
  const void **v5; // r5@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(3);
  RotatedPillarBlock::RotatedPillarBlock((int)v3, v5, v4, v6);
  *v3 = &off_2711A8C;
  return v3;
}
