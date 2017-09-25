

int __fastcall SavannaBiome::getTreeFeature(SavannaBiome *this, Random *a2)
{
  SavannaBiome *v2; // r4@1
  unsigned int v3; // r0@1
  int v4; // r1@1
  bool v5; // zf@1
  int result; // r0@1

  v2 = this;
  v3 = Random::_genRandInt32(a2);
  v4 = *((_DWORD *)v2 + 31);
  v5 = v3 % 5 == 0;
  result = v4 + 112;
  if ( !v5 )
    result = v4 + 192;
  return result;
}


void __fastcall SavannaBiome::~SavannaBiome(SavannaBiome *this)
{
  SavannaBiome::~SavannaBiome(this);
}


int __fastcall SavannaBiome::createMutatedCopy(SavannaBiome *this, int a2, int a3)
{
  SavannaBiome *v3; // r4@1
  int v4; // r7@1
  MutatedSavannaBiome *v6; // r5@1
  int result; // r0@1

  v3 = this;
  v4 = a3;
  _R6 = (Biome *)a2;
  v6 = (MutatedSavannaBiome *)operator new(0x11Cu);
  result = MutatedSavannaBiome::MutatedSavannaBiome(v6, v4, _R6);
  __asm
  {
    VMOV.F32        S0, #1.0
    VLDR            S2, [R6,#0xC4]
    VMOV.F32        S4, #0.5
    VADD.F32        S0, S2, S0
    VLDR            S2, =0.3
    VMUL.F32        S0, S0, S4
    VSTR            S0, [R5,#0xC4]
    VLDR            S0, [R6,#0xDC]
    VADD.F32        S0, S0, S2
    VLDR            S2, =1.2
    VSTR            S0, [R5,#0xDC]
    VLDR            S0, [R6,#0xE0]
  }
  *(_DWORD *)v3 = v6;
    VSTR            S0, [R5,#0xE0]
  return result;
}


void __fastcall SavannaBiome::~SavannaBiome(SavannaBiome *this)
{
  Biome *v1; // r0@1

  v1 = Biome::~Biome(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall SavannaBiome::decorate(SavannaBiome *this, BlockSource *a2, Random *a3, const BlockPos *a4, int a5, float a6)
{
  const BlockPos *v6; // r4@1
  Random *v11; // r5@1
  BlockSource *v12; // r6@1
  SavannaBiome *v13; // r7@1
  char v14; // r8@2
  char v15; // r0@2
  int v16; // r2@2
  float v18; // [sp+4h] [bp-3Ch]@0
  int v19; // [sp+Ch] [bp-34h]@2
  int v20; // [sp+10h] [bp-30h]@2
  int v21; // [sp+14h] [bp-2Ch]@2

  v6 = a4;
  __asm { VLDR            S16, [SP,#0x40+arg_4] }
  v11 = a3;
  v12 = a2;
  v13 = this;
  if ( !a5 )
  {
    v14 = Random::_genRandInt32(a3);
    v15 = Random::_genRandInt32(v11);
    v16 = *((_DWORD *)v6 + 2);
    v19 = *(_DWORD *)v6 + (v14 & 0xF);
    v21 = v16 + (v15 & 0xF);
    v20 = BlockSource::getHeightmap(v12, v19, v21);
    DoublePlantFeature::place(
      *(DoublePlantFeature **)(*((_DWORD *)v13 + 31) + 128),
      v12,
      (const BlockPos *)&v19,
      v11,
      2);
  }
  __asm { VSTR            S16, [SP,#0x40+var_3C] }
  return Biome::decorate(v13, v12, v11, v6, a5, v18);
}


int __fastcall SavannaBiome::SavannaBiome(int a1, int a2)
{
  int v2; // r4@1
  MobSpawnerData *v3; // r6@3
  MobSpawnerData *v4; // r6@7
  int v5; // r0@11
  char v7; // [sp+10h] [bp-148h]@7
  void (*v8)(void); // [sp+18h] [bp-140h]@7
  char v9; // [sp+20h] [bp-138h]@7
  void (*v10)(void); // [sp+28h] [bp-130h]@7
  char v11; // [sp+30h] [bp-128h]@7
  char v12; // [sp+A8h] [bp-B0h]@3
  void (*v13)(void); // [sp+B0h] [bp-A8h]@3
  void *v14; // [sp+B8h] [bp-A0h]@3
  void (*v15)(void); // [sp+C0h] [bp-98h]@3
  int (__fastcall *v16)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+C4h] [bp-94h]@3
  char v17; // [sp+C8h] [bp-90h]@3
  int v18; // [sp+140h] [bp-18h]@1

  v2 = a1;
  v18 = 0;
  Biome::Biome(a1, a2, 13, &v18);
  if ( v18 )
    (*(void (**)(void))(*(_DWORD *)v18 + 12))();
  *(_DWORD *)v2 = &loc_2704230;
  v3 = *(MobSpawnerData **)(v2 + 144);
  v14 = &MobSpawnUtils::spawnHorseHerd;
  v15 = (void (*)(void))std::_Function_base::_Base_manager<void (*)(std::vector<Mob *,std::allocator<Mob *>> &,Random &)>::_M_manager;
  v16 = std::_Function_handler<void ()(std::vector<Mob *,std::allocator<Mob *>> &,Random &),void (*)(std::vector<Mob *,std::allocator<Mob *>> &,Random &)>::_M_invoke;
  v13 = 0;
  MobSpawnerData::MobSpawnerData(&v17, 2118423, 1, 2, 6, v2 + 4, (int)&v14, (int)&v12);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v2 + 140, v3, &v17);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v17);
  if ( v13 )
    v13();
  if ( v15 )
    v15();
  v4 = *(MobSpawnerData **)(v2 + 144);
  v10 = 0;
  v8 = 0;
  MobSpawnerData::MobSpawnerData(&v11, 4893, 8, 4, 4, v2 + 4, (int)&v9, (int)&v7);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v2 + 140, v4, &v11);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v11);
  if ( v8 )
    v8();
  if ( v10 )
    v10();
  v5 = *(_DWORD *)(v2 + 124) + 208;
  *(_DWORD *)v5 = 1065353216;
  *(_DWORD *)(v5 + 4) = 4;
  *(_DWORD *)(v5 + 8) = 20;
  return v2;
}
