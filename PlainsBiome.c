

int __fastcall PlainsBiome::getTreeFeature(PlainsBiome *this, Random *a2)
{
  PlainsBiome *v2; // r4@1
  unsigned int v3; // r0@1
  int v4; // r1@1
  bool v5; // zf@1
  int result; // r0@1

  v2 = this;
  v3 = Random::_genRandInt32(a2);
  v4 = *((_DWORD *)v2 + 31);
  v5 = v3 % 3 == 0;
  result = v4 + 112;
  if ( v5 )
    result = v4 + 152;
  return result;
}


void __fastcall PlainsBiome::~PlainsBiome(PlainsBiome *this)
{
  Biome *v1; // r0@1

  v1 = Biome::~Biome(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall PlainsBiome::~PlainsBiome(PlainsBiome *this)
{
  PlainsBiome::~PlainsBiome(this);
}


unsigned int __fastcall PlainsBiome::getRandomFlowerTypeAndData(PlainsBiome *this, Random *a2, const BlockPos *a3, int _R3)
{
  PlainsBiome *v4; // r4@1
  Random *v5; // r5@1
  unsigned int v13; // r0@1
  unsigned int result; // r0@3
  unsigned int v15; // r0@5
  unsigned int v16; // r0@5

  v4 = this;
  *(_WORD *)this = 0;
  v5 = a3;
  __asm
  {
    VLDR            S0, [R3]
    VLDR            S2, [R3,#8]
    VCVT.F32.S32    S0, S0
    VLDR            S4, =0.005
    VCVT.F32.S32    S2, S2
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S4
    VMOV            R3, S0
    VMOV            R2, S2
  }
  _R0 = PerlinSimplexNoise::getValue(*((PerlinSimplexNoise **)a2 + 68), _R3, _R2);
    VMOV            S0, R0
    VLDR            D8, =-0.8
    VCVT.F64.F32    D9, S0
  v13 = Random::_genRandInt32(v5);
    VCMPE.F64       D9, D8
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) )
    if ( v13 % 3 )
    {
      v15 = Random::_genRandInt32(v5);
      *(_BYTE *)v4 = *(_BYTE *)(Block::mRedFlower + 4);
      v16 = v15 % 3;
      if ( v16 == 1 )
      {
        result = 3;
        goto LABEL_11;
      }
      if ( v16 )
        result = 8;
    }
    else
      *(_BYTE *)v4 = *(_BYTE *)(Block::mYellowFlower + 4);
    result = 0;
    goto LABEL_11;
  *(_BYTE *)v4 = *(_BYTE *)(Block::mRedFlower + 4);
  result = v13 & 3 | 4;
LABEL_11:
  *((_BYTE *)v4 + 1) = result;
  return result;
}


int __fastcall PlainsBiome::PlainsBiome(int a1, int a2)
{
  int v2; // r4@1
  __int64 v3; // r2@1
  MobSpawnerData *v4; // r6@3
  MobSpawnerData *v5; // r6@7
  int v6; // r0@11
  char v8; // [sp+10h] [bp-148h]@7
  void (*v9)(void); // [sp+18h] [bp-140h]@7
  char v10; // [sp+20h] [bp-138h]@7
  void (*v11)(void); // [sp+28h] [bp-130h]@7
  char v12; // [sp+30h] [bp-128h]@7
  char v13; // [sp+A8h] [bp-B0h]@3
  void (*v14)(void); // [sp+B0h] [bp-A8h]@3
  void *v15; // [sp+B8h] [bp-A0h]@3
  void (*v16)(void); // [sp+C0h] [bp-98h]@3
  int (__fastcall *v17)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+C4h] [bp-94h]@3
  char v18; // [sp+C8h] [bp-90h]@3
  int v19; // [sp+140h] [bp-18h]@1

  v2 = a1;
  v19 = 0;
  Biome::Biome(a1, a2, 11, &v19);
  if ( v19 )
    (*(void (**)(void))(*(_DWORD *)v19 + 12))();
  *(_DWORD *)v2 = &off_27041BC;
  *(_BYTE *)(v2 + 280) = 0;
  LODWORD(v3) = 1053609165;
  Biome::setTemperatureAndDownfall((Biome *)v2, 0.8, v3);
  Biome::setDepthAndScale(v2, (int)&Biome::HEIGHTS_LOWLANDS);
  v4 = *(MobSpawnerData **)(v2 + 144);
  v15 = &MobSpawnUtils::spawnHorseHerd;
  v16 = (void (*)(void))std::_Function_base::_Base_manager<void (*)(std::vector<Mob *,std::allocator<Mob *>> &,Random &)>::_M_manager;
  v17 = std::_Function_handler<void ()(std::vector<Mob *,std::allocator<Mob *>> &,Random &),void (*)(std::vector<Mob *,std::allocator<Mob *>> &,Random &)>::_M_invoke;
  v14 = 0;
  MobSpawnerData::MobSpawnerData(&v18, 2118423, 4, 2, 6, v2 + 4, (int)&v15, (int)&v13);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v2 + 140, v4, &v18);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v18);
  if ( v14 )
    v14();
  if ( v16 )
    v16();
  v5 = *(MobSpawnerData **)(v2 + 144);
  v11 = 0;
  v9 = 0;
  MobSpawnerData::MobSpawnerData(&v12, 2118424, 1, 2, 6, v2 + 4, (int)&v10, (int)&v8);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v2 + 140, v5, &v12);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v12);
  if ( v9 )
    v9();
  if ( v11 )
    v11();
  v6 = *(_DWORD *)(v2 + 124) + 208;
  *(_DWORD *)v6 = 1028443341;
  *(_DWORD *)(v6 + 4) = 4;
  *(_DWORD *)(v6 + 8) = 10;
  return v2;
}


signed int __fastcall PlainsBiome::createMutatedCopy(PlainsBiome *this, int a2, int a3)
{
  PlainsBiome *v3; // r5@1
  int v4; // r6@1
  _BYTE *v5; // r4@1
  void *v6; // r0@1
  signed int result; // r0@2
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  int v10; // [sp+4h] [bp-1Ch]@1

  v3 = this;
  v4 = a3;
  v5 = operator new(0x11Cu);
  PlainsBiome::PlainsBiome((int)v5, v4);
  sub_21E94B4((void **)&v10, "Sunflower Plains");
  Biome::setName((int)v5, &v10);
  v6 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  v5[280] = 1;
  (**(void (__fastcall ***)(_BYTE *))v5)(v5);
  result = 14273354;
  *(_DWORD *)v3 = v5;
  *((_DWORD *)v5 + 46) = 14273354;
  return result;
}


int __fastcall PlainsBiome::decorate(PlainsBiome *this, BlockSource *a2, Random *a3, const BlockPos *a4, int a5, float a6)
{
  const BlockPos *v6; // r4@1
  PlainsBiome *v7; // r9@1
  BlockSource *v8; // r11@1
  Random *v9; // r5@1
  __int64 v19; // r1@3
  __int64 v20; // r1@5
  signed int v21; // r6@5
  char v22; // r7@6
  char v23; // r0@6
  __int64 v24; // r1@6
  int v25; // r3@6
  int v26; // r0@6
  unsigned int v27; // r1@7
  signed int v28; // r6@11
  char v29; // r7@12
  char v30; // r0@12
  __int64 v31; // r1@12
  int v32; // r3@12
  int v33; // r0@12
  unsigned int v34; // r1@13
  float v36; // [sp+4h] [bp-44h]@0
  __int64 v37; // [sp+Ch] [bp-3Ch]@6
  int v38; // [sp+14h] [bp-34h]@6

  v6 = a4;
  v7 = this;
  v8 = a2;
  v9 = a3;
  _R0 = *(_DWORD *)a4 + 8;
  __asm
  {
    VLDR            S4, =0.005
    VMOV            S0, R0
  }
  _R0 = *((_DWORD *)a4 + 2) + 8;
    VMOV            S2, R0
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S4
    VMOV            R1, S0
    VMOV            R2, S2
  _R0 = PerlinSimplexNoise::getValue(*((PerlinSimplexNoise **)v7 + 68), _R1, _R2);
    VLDR            D1, =-0.8
    VCVT.F64.F32    D0, S0
    VCMPE.F64       D0, D1
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    LODWORD(v19) = 15;
    HIDWORD(v19) = 5;
    *(_QWORD *)(*((_DWORD *)v7 + 31) + 212) = v19;
  else if ( !a5 )
    LODWORD(v20) = 4;
    HIDWORD(v20) = 10;
    v21 = 7;
    *(_QWORD *)(*((_DWORD *)v7 + 31) + 212) = v20;
    do
    {
      v22 = Random::_genRandInt32(v9);
      v23 = Random::_genRandInt32(v9);
      HIDWORD(v24) = *((_DWORD *)v6 + 1);
      v25 = *((_DWORD *)v6 + 2);
      LODWORD(v24) = *(_DWORD *)v6 + (v22 & 0xF);
      v37 = v24;
      v38 = v25 + (v23 & 0xF);
      v26 = BlockSource::getHeightmap(v8, v24, v38);
      if ( v26 == -32 )
        v27 = 0;
      else
        v27 = Random::_genRandInt32(v9) % (v26 + 32);
      HIDWORD(v37) = v27;
      DoublePlantFeature::place(*(DoublePlantFeature **)(*((_DWORD *)v7 + 31) + 128), v8, (const BlockPos *)&v37, v9, 2);
      --v21;
    }
    while ( v21 );
  __asm { VLDR            S16, [SP,#0x48+arg_4] }
  if ( *((_BYTE *)v7 + 280) )
    v28 = 10;
      v29 = Random::_genRandInt32(v9);
      v30 = Random::_genRandInt32(v9);
      HIDWORD(v31) = *((_DWORD *)v6 + 1);
      v32 = *((_DWORD *)v6 + 2);
      LODWORD(v31) = *(_DWORD *)v6 + (v29 & 0xF);
      v37 = v31;
      v38 = v32 + (v30 & 0xF);
      v33 = BlockSource::getHeightmap(v8, v31, v38);
      if ( v33 == -32 )
        v34 = 0;
        v34 = Random::_genRandInt32(v9) % (v33 + 32);
      HIDWORD(v37) = v34;
      DoublePlantFeature::place(*(DoublePlantFeature **)(*((_DWORD *)v7 + 31) + 128), v8, (const BlockPos *)&v37, v9, 0);
      --v28;
    while ( v28 );
  __asm { VSTR            S16, [SP,#0x48+var_44] }
  return Biome::decorate(v7, v8, v9, v6, a5, v36);
}
