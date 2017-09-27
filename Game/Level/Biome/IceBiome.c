

int __fastcall IceBiome::getTreeFeature(IceBiome *this, Random *a2)
{
  return *((_DWORD *)this + 31) + 116;
}


int __fastcall IceBiome::createMutatedCopy(IceBiome *this, int a2, int a3)
{
  IceBiome *v3; // r5@1
  int v4; // r7@1
  Biome *v6; // r4@1
  void *v7; // r0@1
  __int64 v8; // r2@2
  int result; // r0@2
  unsigned int *v14; // r2@3
  signed int v15; // r1@5
  float v16; // [sp+4h] [bp-2Ch]@2
  int v17; // [sp+Ch] [bp-24h]@1

  v3 = this;
  v4 = a3;
  _R6 = a2;
  v6 = (Biome *)operator new(0x11Cu);
  IceBiome::IceBiome((int)v6, v4, 1);
  (*(void (__fastcall **)(Biome *))(*(_DWORD *)v6 + 4))(v6);
  sub_21E8AF4(&v17, (int *)(_R6 + 176));
  sub_21E7408((const void **)&v17, " Spikes", 7u);
  Biome::setName((int)v6, &v17);
  v7 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  Biome::setSnowAccumulation(v6, 0.5, 1.5);
  LODWORD(v8) = 1065353216;
  Biome::setTemperatureAndDownfall(v6, 0.0, v8);
  __asm
    VLDR            S0, =0.1
    VLDR            S2, [R6,#0xDC]
    VLDR            S4, [R6,#0xE0]
    VADD.F32        S2, S2, S0
    VADD.F32        S0, S4, S0
    VSTR            S2, [SP,#0x30+var_2C]
    VSTR            S0, [SP,#0x30+var_28]
  result = Biome::setDepthAndScale((int)v6, (int)&v16);
    VLDR            S0, =0.3
    VADD.F32        S0, S2, S0
    VLDR            S2, =0.4
    VSTR            S0, [R4,#0xDC]
    VLDR            S0, [R6,#0xE0]
  *(_DWORD *)v3 = v6;
    VADD.F32        S0, S0, S2
    VSTR            S0, [R4,#0xE0]
  return result;
}


int __fastcall IceBiome::decorate(IceBiome *this, BlockSource *a2, Random *a3, const BlockPos *a4, bool a5, float a6)
{
  IceBiome *v6; // r11@1
  BlockSource *v7; // r6@1
  bool v8; // r1@1
  const BlockPos *v9; // r10@1
  Random *v10; // r5@1
  int v15; // r7@2
  char v16; // r0@2
  int v17; // r8@2
  int v18; // r7@2
  char v19; // r0@2
  int v20; // r9@2
  int v21; // r7@2
  char v22; // r0@2
  int v23; // r7@2
  char v24; // r0@2
  int v25; // r4@2
  int v26; // r7@2
  char v27; // r0@2
  int v28; // r4@2
  char v29; // r0@2
  int v30; // r7@2
  int v31; // r4@2
  char v32; // r0@2
  int v33; // r4@2
  char v34; // r0@2
  int v35; // r7@2
  int v36; // r4@2
  char v37; // r0@2
  float v39; // [sp+4h] [bp-44h]@0
  int v40; // [sp+Ch] [bp-3Ch]@2
  int v41; // [sp+10h] [bp-38h]@2
  int v42; // [sp+14h] [bp-34h]@2

  v6 = this;
  v7 = a2;
  v8 = a5;
  v9 = a4;
  v10 = a3;
  __asm { VLDR            S16, [SP,#0x48+arg_4] }
  if ( *((_BYTE *)this + 280) )
  {
    v15 = *(_DWORD *)a4;
    v16 = Random::_genRandInt32(a3);
    v17 = *((_DWORD *)v9 + 2);
    v40 = v15 + (v16 & 0xF);
    v41 = 0;
    v42 = (Random::_genRandInt32(v10) & 0xF) + v17;
    v41 = BlockSource::getHeightmap(v7, (const BlockPos *)&v40);
    (*(void (**)(void))(**(_DWORD **)(*((_DWORD *)v6 + 31) + 164) + 8))();
    v18 = *(_DWORD *)v9;
    v19 = Random::_genRandInt32(v10);
    v20 = *((_DWORD *)v9 + 2);
    v21 = v18 + (v19 & 0xF);
    v22 = Random::_genRandInt32(v10);
    v40 = v21;
    v42 = (v22 & 0xF) + v20;
    v23 = *(_DWORD *)v9;
    v24 = Random::_genRandInt32(v10);
    v25 = *((_DWORD *)v9 + 2);
    v26 = v23 + (v24 & 0xF);
    v27 = Random::_genRandInt32(v10);
    v40 = v26;
    v42 = (v27 & 0xF) + v25;
    v28 = *(_DWORD *)v9;
    v29 = Random::_genRandInt32(v10);
    v30 = *((_DWORD *)v9 + 2);
    v31 = v28 + (v29 & 0xF);
    v32 = Random::_genRandInt32(v10);
    v40 = v31;
    v42 = (v32 & 0xF) + v30;
    (*(void (**)(void))(**(_DWORD **)(*((_DWORD *)v6 + 31) + 168) + 8))();
    v33 = *(_DWORD *)v9;
    v34 = Random::_genRandInt32(v10);
    v35 = *((_DWORD *)v9 + 2);
    v36 = v33 + (v34 & 0xF);
    v37 = Random::_genRandInt32(v10);
    v40 = v36;
    v42 = (v37 & 0xF) + v35;
    v8 = a5;
  }
  __asm { VSTR            S16, [SP,#0x48+var_44] }
  return Biome::decorate(v6, v7, v10, v9, v8, v39);
}


void __fastcall IceBiome::~IceBiome(IceBiome *this)
{
  IceBiome::~IceBiome(this);
}


int __fastcall IceBiome::IceBiome(int a1, int a2, int a3)
{
  int v3; // r8@1
  int v4; // r5@1
  MobSpawnerData *v5; // r4@6
  MobSpawnerData *v6; // r6@6
  MobSpawnerData *v7; // r0@7
  int v8; // r0@9
  MobSpawnerData *v9; // r7@9
  _DWORD *v10; // r4@10
  unsigned int v11; // r3@10
  int v12; // r0@14
  int v13; // r1@14
  signed int v14; // r2@15
  int v15; // r4@16
  int v16; // r7@17
  void *v17; // r0@20
  void *v18; // r0@21
  void *v19; // r0@22
  void *v20; // r0@23
  void *v21; // r0@24
  void *v22; // r0@25
  MobSpawnerData *v23; // r6@26
  MobSpawnerData *v24; // r6@30
  void *v25; // r0@30
  void *v26; // r0@31
  void *v27; // r0@32
  void *v28; // r0@33
  void *v29; // r0@34
  void *v30; // r0@35
  unsigned int *v32; // r2@37
  signed int v33; // r1@39
  unsigned int *v34; // r2@41
  signed int v35; // r1@43
  unsigned int *v36; // r2@45
  signed int v37; // r1@47
  unsigned int *v38; // r2@49
  signed int v39; // r1@51
  unsigned int *v40; // r2@53
  signed int v41; // r1@55
  unsigned int *v42; // r2@57
  signed int v43; // r1@59
  unsigned int *v44; // r2@61
  signed int v45; // r1@63
  unsigned int *v46; // r2@65
  signed int v47; // r1@67
  unsigned int *v48; // r2@69
  signed int v49; // r1@71
  unsigned int *v50; // r2@73
  signed int v51; // r1@75
  unsigned int *v52; // r2@77
  signed int v53; // r1@79
  unsigned int *v54; // r2@81
  signed int v55; // r1@83
  int v56; // [sp+14h] [bp-1ECh]@30
  int v57; // [sp+1Ch] [bp-1E4h]@30
  int v58; // [sp+24h] [bp-1DCh]@30
  int v59; // [sp+28h] [bp-1D8h]@30
  int v60; // [sp+2Ch] [bp-1D4h]@31
  int v61; // [sp+30h] [bp-1D0h]@30
  char v62; // [sp+34h] [bp-1CCh]@30
  char v63; // [sp+ACh] [bp-154h]@26
  void (*v64)(void); // [sp+B4h] [bp-14Ch]@26
  void (__fastcall *v65)(_QWORD *); // [sp+BCh] [bp-144h]@26
  void (*v66)(void); // [sp+C4h] [bp-13Ch]@26
  int (__fastcall *v67)(int (__fastcall **)(_DWORD, _DWORD), int, int); // [sp+C8h] [bp-138h]@26
  char v68; // [sp+CCh] [bp-134h]@26
  int v69; // [sp+148h] [bp-B8h]@20
  int v70; // [sp+14Ch] [bp-B4h]@20
  int v71; // [sp+154h] [bp-ACh]@20
  int v72; // [sp+158h] [bp-A8h]@20
  int v73; // [sp+15Ch] [bp-A4h]@21
  int v74; // [sp+160h] [bp-A0h]@20
  char v75; // [sp+164h] [bp-9Ch]@20
  int v76; // [sp+1DCh] [bp-24h]@1

  v3 = a1;
  v4 = a3;
  v76 = 0;
  Biome::Biome(a1, a2, 6, &v76);
  if ( v76 )
    (*(void (**)(void))(*(_DWORD *)v76 + 12))();
  *(_DWORD *)v3 = &off_2703EEC;
  *(_BYTE *)(v3 + 280) = v4;
  if ( v4 )
    *(_BYTE *)(v3 + 188) = *(_BYTE *)(Block::mSnow + 4);
  else
    *(_DWORD *)(*(_DWORD *)(v3 + 124) + 208) = 1008981770;
  v5 = *(MobSpawnerData **)(v3 + 140);
  v6 = *(MobSpawnerData **)(v3 + 144);
  if ( v6 != v5 )
  {
    v7 = *(MobSpawnerData **)(v3 + 140);
    do
      v7 = (MobSpawnerData *)((char *)MobSpawnerData::~MobSpawnerData(v7) + 120);
    while ( v6 != v7 );
  }
  *(_DWORD *)(v3 + 144) = v5;
  v8 = *(_DWORD *)(v3 + 128);
  v9 = *(MobSpawnerData **)(v3 + 132);
  if ( v9 != (MobSpawnerData *)v8 )
    v10 = (_DWORD *)(v8 + 16);
    v11 = 0;
    while ( *v10 != 1116962 )
    {
      ++v11;
      v10 += 30;
      if ( v11 >= -286331153 * (((signed int)v9 - v8) >> 3) )
        goto LABEL_20;
    }
    v12 = v8 + 120 * v11;
    v13 = v12 + 120;
    if ( (MobSpawnerData *)(v12 + 120) != v9 )
      v14 = (signed int)v9 - v13;
      v13 = *(_DWORD *)(v3 + 132);
      if ( v14 >= 1 )
      {
        v15 = -286331153 * (v14 >> 3) + 1;
        do
        {
          v16 = v12 + 120;
          MobSpawnerData::operator=(v12, v12 + 120);
          --v15;
          v12 = v16;
        }
        while ( v15 > 1 );
        v13 = *(_DWORD *)(v3 + 132);
      }
    *(_DWORD *)(v3 + 132) = v13 - 120;
    MobSpawnerData::~MobSpawnerData((MobSpawnerData *)(v13 - 120));
    v9 = *(MobSpawnerData **)(v3 + 132);
LABEL_20:
  sub_21E94B4((void **)&v71, "minecraft");
  EntityTypeToString((void **)&v70, 0x110B2Eu, 0);
  sub_21E94B4((void **)&v69, "change_to_skeleton");
  EntityDefinitionIdentifier::EntityDefinitionIdentifier(&v72, &v71, &v70, &v69);
  MobSpawnerData::MobSpawnerData((int)&v75, 1116974, &v72, 120, 8589934593LL, v3 + 64);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v3 + 128, v9, &v75);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v75);
  v17 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v74 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
    else
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v73 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v72 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v69 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v70 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v71 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = *(MobSpawnerData **)(v3 + 144);
  v65 = MobSpawnUtils::spawnPolarBearHerd;
  v66 = (void (*)(void))std::_Function_base::_Base_manager<void (*)(std::vector<Mob *,std::allocator<Mob *>> &,Random &)>::_M_manager;
  v67 = std::_Function_handler<void ()(std::vector<Mob *,std::allocator<Mob *>> &,Random &),void (*)(std::vector<Mob *,std::allocator<Mob *>> &,Random &)>::_M_invoke;
  v64 = 0;
  MobSpawnerData::MobSpawnerData(&v68, 4892, 1, 1, 2, v3 + 4, (int)&v65, (int)&v63);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v3 + 140, v23, &v68);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v68);
  if ( v64 )
    v64();
  if ( v66 )
    v66();
  v24 = *(MobSpawnerData **)(v3 + 144);
  sub_21E94B4((void **)&v58, "minecraft");
  sub_21E94B4((void **)&v57, "rabbit");
  sub_21E94B4((void **)&v56, "in_snow");
  EntityDefinitionIdentifier::EntityDefinitionIdentifier(&v59, &v58, &v57, &v56);
  MobSpawnerData::MobSpawnerData((int)&v62, 4882, &v59, 4, 8589934593LL, v3 + 4);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v3 + 140, v24, &v62);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v62);
  v25 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v61 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v60 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v27 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v59 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v56 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v57 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v58 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  return v3;
}


void __fastcall IceBiome::~IceBiome(IceBiome *this)
{
  Biome *v1; // r0@1

  v1 = Biome::~Biome(this);
  j_j_j__ZdlPv_6((void *)v1);
}
