

int __fastcall MushroomCow::MushroomCow(int a1, int a2, int *a3)
{
  int result; // r0@1

  result = j_Animal::Animal(a1, a2, a3);
  *(_DWORD *)(result + 4292) = 0;
  *(_DWORD *)(result + 3320) = 1065353216;
  *(_DWORD *)(result + 3324) = 0;
  *(_DWORD *)(result + 3328) = 0;
  *(_DWORD *)(result + 3332) = 1036831949;
  *(_DWORD *)(result + 3984) = 1072064102;
  *(_DWORD *)result = &off_271C108;
  *(_DWORD *)(result + 248) = 7;
  return result;
}


void __fastcall MushroomCow::~MushroomCow(MushroomCow *this)
{
  Entity *v1; // r0@1

  v1 = j_Mob::~Mob(this);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall MushroomCow::getEntityTypeId(MushroomCow *this)
{
  return 4880;
}


signed int __fastcall MushroomCow::checkSpawnRules(MushroomCow *this, bool a2)
{
  Entity *v2; // r5@1
  bool v3; // r4@1
  int v4; // r2@1
  int v5; // r1@1
  const BlockPos *v6; // r0@1
  signed int result; // r0@2
  int v8; // [sp+0h] [bp-38h]@1
  int v9; // [sp+4h] [bp-34h]@1
  int v10; // [sp+8h] [bp-30h]@1
  int v11; // [sp+Ch] [bp-2Ch]@1
  int v12; // [sp+10h] [bp-28h]@1
  int v13; // [sp+14h] [bp-24h]@1
  unsigned __int8 v14; // [sp+18h] [bp-20h]@1
  int v15; // [sp+1Ch] [bp-1Ch]@1
  int v16; // [sp+20h] [bp-18h]@1
  int v17; // [sp+24h] [bp-14h]@1

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 67);
  v5 = *((_DWORD *)this + 20);
  v11 = *((_DWORD *)this + 18);
  v12 = v4;
  v13 = v5;
  j_BlockPos::BlockPos((int)&v8, (int)&v11);
  v6 = (const BlockPos *)j_Entity::getRegion(v2);
  v15 = v8;
  v16 = v9 - 1;
  v17 = v10;
  j_BlockSource::getBlockID((BlockSource *)&v14, v6, (int)&v15);
  if ( v14 == *(_BYTE *)(Block::mMycelium + 4) )
    result = j_Mob::checkSpawnRules(v2, v3);
  else
    result = 0;
  return result;
}


void __fastcall MushroomCow::~MushroomCow(MushroomCow *this)
{
  MushroomCow::~MushroomCow(this);
}


signed int __fastcall MushroomCow::_isFloorMycelium(MushroomCow *this, const BlockPos *a2)
{
  const BlockPos *v2; // r4@1
  const BlockPos *v3; // r0@1
  int v4; // r2@1
  int v5; // r3@1
  signed int result; // r0@1
  unsigned __int8 v7; // [sp+0h] [bp-18h]@1
  int v8; // [sp+4h] [bp-14h]@1
  int v9; // [sp+8h] [bp-10h]@1
  int v10; // [sp+Ch] [bp-Ch]@1

  v2 = a2;
  v3 = (const BlockPos *)j_Entity::getRegion(this);
  v4 = *((_DWORD *)v2 + 1);
  v5 = *((_DWORD *)v2 + 2);
  v8 = *(_DWORD *)v2;
  v9 = v4 - 1;
  v10 = v5;
  j_BlockSource::getBlockID((BlockSource *)&v7, v3, (int)&v8);
  result = 0;
  if ( v7 == *(_BYTE *)(Block::mMycelium + 4) )
    result = 1;
  return result;
}
