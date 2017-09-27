

signed int __fastcall DeadBushFeature::place(DeadBushFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  BlockSource *v4; // r11@1
  int v5; // r0@1
  int *v6; // r6@2
  signed int v7; // r10@9
  char v8; // ST0C_1@10
  char v9; // r7@10
  char v10; // r6@10
  char v11; // r8@10
  char v12; // r9@10
  char v13; // r0@10
  DeadBushFeature *v15; // [sp+0h] [bp-20h]@1
  Random *v16; // [sp+8h] [bp-18h]@1
  char v17; // [sp+10h] [bp-10h]@12
  char v18; // [sp+11h] [bp-Fh]@12
  int v19; // [sp+14h] [bp-Ch]@10
  int v20; // [sp+18h] [bp-8h]@10
  int v21; // [sp+1Ch] [bp-4h]@10
  int v22; // [sp+20h] [bp+0h]@1
  int v23; // [sp+24h] [bp+4h]@1
  int v24; // [sp+28h] [bp+8h]@1

  v4 = a2;
  v15 = this;
  v22 = *(_DWORD *)a3;
  v5 = *((_DWORD *)a3 + 1);
  v23 = *((_DWORD *)a3 + 1);
  v24 = *((_DWORD *)a3 + 2);
  v16 = a4;
  if ( *(_BYTE *)(Block::mDeadBush + 4) )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 )
      {
        if ( Material::isType(v6, 0) != 1 && Material::isType(v6, 7) != 1 )
          break;
        v5 = v23;
      }
      if ( v5 > 0 )
        v6 = (int *)BlockSource::getMaterial(v4, (const BlockPos *)&v22);
        v5 = v23-- - 1;
        if ( *(_BYTE *)(Block::mDeadBush + 4) )
          continue;
      break;
    }
  }
  v7 = 4;
  do
    v8 = Random::_genRandInt32(v16);
    v9 = Random::_genRandInt32(v16);
    v10 = Random::_genRandInt32(v16);
    v11 = Random::_genRandInt32(v16);
    v12 = Random::_genRandInt32(v16);
    v13 = Random::_genRandInt32(v16);
    v19 = (v12 & 7) - (v13 & 7) + v22;
    v20 = (v10 & 3) - (v11 & 3) + v23;
    v21 = (v8 & 7) - (v9 & 7) + v24;
    if ( BlockSource::isEmptyBlock(v4, (const BlockPos *)&v19) == 1
      && (*(int (**)(void))(*(_DWORD *)Block::mDeadBush + 324))() == 1 )
      v17 = *(_BYTE *)(Block::mDeadBush + 4);
      v18 = 0;
      Feature::_setBlockAndData(v15, v4, (const BlockPos *)&v19, (const FullBlock *)&v17);
    --v7;
  while ( v7 );
  return 1;
}


void __fastcall DeadBushFeature::~DeadBushFeature(DeadBushFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


signed int __fastcall DeadBushFeature::_isFree(DeadBushFeature *this, const Material *a2)
{
  int *v2; // r4@1
  signed int result; // r0@2

  v2 = (int *)a2;
  if ( Material::isType((int *)a2, 0) )
    result = 1;
  else
    result = Material::isType(v2, 7);
  return result;
}


void __fastcall DeadBushFeature::~DeadBushFeature(DeadBushFeature *this)
{
  DeadBushFeature::~DeadBushFeature(this);
}
