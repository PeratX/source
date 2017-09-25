

_DWORD *__fastcall DouseFireSubcomponent::DouseFireSubcomponent(_DWORD *result)
{
  *result = &off_271EC60;
  return result;
}


int __fastcall DouseFireSubcomponent::doOnHitEffect(DouseFireSubcomponent *this, ProjectileComponent *a2)
{
  ProjectileComponent *v2; // r4@1
  int result; // r0@1
  const BlockPos *v4; // r4@2
  int v5[3]; // [sp+Ch] [bp-74h]@4
  int v6[3]; // [sp+18h] [bp-68h]@2
  int v7; // [sp+24h] [bp-5Ch]@1
  char v8; // [sp+28h] [bp-58h]@2
  char v9; // [sp+68h] [bp-18h]@3
  unsigned __int8 v10; // [sp+6Ch] [bp-14h]@2

  v2 = a2;
  result = j_HitResult::HitResult((int)&v7, (int)a2 + 108);
  if ( !v7 )
  {
    j_BlockPos::neighbor((BlockPos *)v6, result + 8, v8);
    v4 = (const BlockPos *)j_Entity::getRegion(*((Entity **)v2 + 4));
    j_BlockSource::getBlockID((BlockSource *)&v10, v4, (int)v6);
    if ( v10 == *(_BYTE *)(Block::mFire + 4) )
    {
      v9 = BlockID::AIR;
      j_BlockSource::setBlock((int)v4, v6[0], v6[1], v6[2], &v9, 2);
    }
    j_BlockPos::neighbor((BlockPos *)v5, (int)v6, (char)Direction::DIRECTION_FACING[0]);
    j_BlockSource::getBlockID((BlockSource *)&v10, v4, (int)v5);
      j_BlockSource::setBlock((int)v4, v5[0], v5[1], v5[2], &v9, 2);
    j_BlockPos::neighbor((BlockPos *)v5, (int)v6, (char)Direction::DIRECTION_FACING[1]);
    j_BlockPos::neighbor((BlockPos *)v5, (int)v6, (char)Direction::DIRECTION_FACING[2]);
    j_BlockPos::neighbor((BlockPos *)v5, (int)v6, (char)Direction::DIRECTION_FACING[3]);
    result = *(_BYTE *)(Block::mFire + 4);
    if ( v10 == result )
      result = j_BlockSource::setBlock((int)v4, v5[0], v5[1], v5[2], &v9, 2);
  }
  return result;
}


int __fastcall DouseFireSubcomponent::douseFire(DouseFireSubcomponent *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r5@1
  BlockSource *v4; // r4@1
  int result; // r0@1
  int v6; // r1@2
  int v7; // r2@2
  int v8; // r3@2
  char v9; // [sp+8h] [bp-18h]@2
  unsigned __int8 v10; // [sp+Ch] [bp-14h]@1

  v3 = a3;
  v4 = a2;
  j_BlockSource::getBlockID((BlockSource *)&v10, a2, (int)a3);
  result = *(_BYTE *)(Block::mFire + 4);
  if ( v10 == result )
  {
    v6 = *(_DWORD *)v3;
    v7 = *((_DWORD *)v3 + 1);
    v8 = *((_DWORD *)v3 + 2);
    v9 = BlockID::AIR;
    result = j_BlockSource::setBlock((int)v4, v6, v7, v8, &v9, 2);
  }
  return result;
}
