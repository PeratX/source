

void __fastcall VinesFeature::~VinesFeature(VinesFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


signed int __fastcall VinesFeature::place(VinesFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  const BlockPos *v4; // r10@1
  BlockSource *v5; // r6@1
  Random *v6; // r4@1
  signed int v7; // r8@3
  BlockState *v8; // r0@7
  int v9; // r7@7
  int v10; // r9@7
  int v11; // r0@7
  int v12; // r7@8
  unsigned int v13; // r7@8
  int v14; // r7@8
  unsigned int v15; // r7@8
  VinesFeature *v17; // [sp+8h] [bp-38h]@1
  char v18; // [sp+Ch] [bp-34h]@7
  char v19; // [sp+Dh] [bp-33h]@7
  unsigned int v20; // [sp+10h] [bp-30h]@1
  int v21; // [sp+14h] [bp-2Ch]@1
  unsigned int v22; // [sp+18h] [bp-28h]@1

  v4 = a3;
  v17 = this;
  v5 = a2;
  v20 = *(_DWORD *)a3;
  v6 = a4;
  v21 = *((_DWORD *)a3 + 1);
  v22 = *((_DWORD *)a3 + 2);
  if ( v21 < *((_WORD *)a2 + 12) )
  {
    do
    {
      if ( BlockSource::isEmptyBlock(v5, (const BlockPos *)&v20) == 1 )
      {
        v7 = 2;
        if ( (*(int (**)(void))(*(_DWORD *)Block::mVine + 220))()
          || (v7 = 3, (*(int (**)(void))(*(_DWORD *)Block::mVine + 220))() == 1)
          || (v7 = 4, (*(int (**)(void))(*(_DWORD *)Block::mVine + 220))())
          || (v7 = 5, (*(int (**)(void))(*(_DWORD *)Block::mVine + 220))()) )
        {
          v8 = (BlockState *)Block::getBlockState(Block::mVine, 41);
          v10 = *(_QWORD *)v8 >> 32;
          v9 = *(_QWORD *)v8;
          BlockState::getMask(v8);
          v11 = Facing::OPPOSITE_FACING[v7];
          v18 = *(_BYTE *)(Block::mVine + 4);
          v19 = 1 << Direction::FACING_DIRECTION[v11] << (v9 + 1 - v10);
          Feature::_setBlockAndData(v17, v5, (const BlockPos *)&v20, (const FullBlock *)&v18);
        }
      }
      else
        v12 = *(_DWORD *)v4;
        v13 = v12 + (j_Random::_genRandInt32(v6) & 3);
        v20 = v13 - (j_Random::_genRandInt32(v6) & 3);
        v14 = *((_DWORD *)v4 + 2);
        v15 = v14 + (j_Random::_genRandInt32(v6) & 3);
        v22 = v15 - (j_Random::_genRandInt32(v6) & 3);
      ++v21;
    }
    while ( v21 < *((_WORD *)v5 + 12) );
  }
  return 1;
}


void __fastcall VinesFeature::~VinesFeature(VinesFeature *this)
{
  VinesFeature::~VinesFeature(this);
}
