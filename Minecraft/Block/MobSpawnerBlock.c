

void __fastcall MobSpawnerBlock::~MobSpawnerBlock(MobSpawnerBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


unsigned int __fastcall MobSpawnerBlock::getExperienceDrop(MobSpawnerBlock *this, Random *a2)
{
  return Random::_genRandInt32(a2) % 0x1C + 15;
}


int __fastcall MobSpawnerBlock::canBeSilkTouched(MobSpawnerBlock *this)
{
  return 0;
}


signed int __fastcall MobSpawnerBlock::isInteractiveBlock(MobSpawnerBlock *this)
{
  return 1;
}


int __fastcall MobSpawnerBlock::MobSpawnerBlock(int a1, const void **a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  float v14; // [sp+4h] [bp-2Ch]@1
  float v15; // [sp+10h] [bp-20h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(3);
  EntityBlock::EntityBlock(v3, v5, v4, v6);
  _R0 = &Block::SIZE_OFFSET;
  _R2 = &Vec3::ONE;
  *(_DWORD *)v3 = &off_270EA58;
  *(_DWORD *)(v3 + 32) = 5;
  __asm
  {
    VLDR            S0, [R0]
    VLDR            S2, [R2]
    VLDR            S4, [R2,#4]
    VLDR            S6, [R2,#8]
    VSUB.F32        S2, S2, S0
    VSTR            S0, [SP,#0x30+var_20]
    VSUB.F32        S4, S4, S0
    VSTR            S0, [SP,#0x30+var_1C]
    VSTR            S0, [SP,#0x30+var_18]
    VSUB.F32        S0, S6, S0
    VSTR            S2, [SP,#0x30+var_2C]
    VSTR            S4, [SP,#0x30+var_28]
    VSTR            S0, [SP,#0x30+var_24]
  }
  Block::setVisualShape((Block *)v3, (const Vec3 *)&v15, (const Vec3 *)&v14);
  *(_DWORD *)(v3 + 20) = 5;
  Block::mLightEmission[v4] = 3;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 24) = 18874368;
  return v3;
}


int __fastcall MobSpawnerBlock::getResourceCount(MobSpawnerBlock *this, Random *a2, int a3, int a4)
{
  return 0;
}


void __fastcall MobSpawnerBlock::~MobSpawnerBlock(MobSpawnerBlock *this)
{
  MobSpawnerBlock::~MobSpawnerBlock(this);
}
