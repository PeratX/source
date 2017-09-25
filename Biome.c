

int __fastcall Biome::setOddColor(int result, int a2)
{
  *(_DWORD *)(result + 184) = a2;
  return result;
}


int __fastcall Biome::getGrassColor(Biome *this, const BlockPos *a2, float a3)
{
  __asm
  {
    VLDR            S2, [R0,#0xC4]
    VMOV.F32        S6, #1.0
    VLDR            S0, =0.0
    VCMPE.F32       S2, #0.0
    VLDR            S4, [R0,#0xC8]
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S8, S0
    VCMPE.F32       S4, #0.0
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S8, S2 }
    VCMPE.F32       S2, S6
    __asm { VMOVGT.F32      S0, S4 }
    VCMPE.F32       S4, S6
    __asm { VMOVGT.F32      S8, S6 }
    VMOV            R0, S8
    __asm { VMOVGT.F32      S0, S6 }
  __asm { VMOV            R1, S0 }
  return j_j_j__ZN12FoliageColor13getGrassColorEff(_R0, _R1, a3);
}


int __fastcall Biome::Biome(int a1, int a2, int a3, int *a4)
{
  int v4; // r9@1
  MobSpawnRules *v5; // r6@1
  int *v6; // r7@1
  int v7; // r5@1
  int v8; // r10@1
  int v9; // r11@1
  int v10; // r0@1
  BiomeDecorator *v11; // r7@3
  int v12; // r12@4
  int v13; // r1@4
  int v14; // r3@4
  int v15; // r7@4
  int v16; // r0@4
  int v17; // r1@4
  int v18; // r3@4
  int v19; // r2@4
  PerlinSimplexNoise *v20; // r5@4
  PerlinSimplexNoise *v21; // r5@4
  MobSpawnRules *v22; // r0@4
  bool v23; // ST00_1@4
  MobSpawnRules *v24; // r0@4
  MobSpawnRules *v25; // r0@4
  int v26; // r0@4
  __int64 v27; // r2@4
  int v28; // r5@4
  MobSpawnerData *v29; // r5@6
  MobSpawnerData *v30; // r5@10
  MobSpawnerData *v31; // r5@14
  MobSpawnerData *v32; // r5@18
  MobSpawnerData *v33; // r5@22
  MobSpawnerData *v34; // r5@26
  MobSpawnerData *v35; // r5@30
  MobSpawnerData *v36; // r8@34
  int v37; // r4@34
  int v38; // r5@34
  int v39; // r6@34
  int v40; // r7@34
  int v41; // r4@34
  int v42; // r5@34
  int v43; // r6@34
  int v44; // r7@34
  __int64 v45; // r2@34
  int v46; // r0@36
  MobSpawnerData *v47; // r5@42
  MobSpawnerData *v48; // r5@46
  MobSpawnerData *v49; // r5@50
  MobSpawnerData *v50; // r5@54
  MobSpawnRules *v51; // r0@54
  MobSpawnRules *v52; // r0@54
  __int64 v53; // r2@54
  int v54; // r0@54
  int v55; // r0@60
  int *v56; // r1@60 OVERLAPPED
  int *v57; // r2@60 OVERLAPPED
  int v58; // r7@61
  int v59; // t1@62
  int *v60; // r1@63 OVERLAPPED
  int *v61; // r2@63 OVERLAPPED
  int v62; // t1@64
  bool v64; // [sp+0h] [bp-7F0h]@0
  bool v65; // [sp+0h] [bp-7F0h]@50
  int v66; // [sp+18h] [bp-7D8h]@30
  char v67; // [sp+1Ch] [bp-7D4h]@54
  void (*v68)(void); // [sp+24h] [bp-7CCh]@54
  char v69; // [sp+2Ch] [bp-7C4h]@54
  void (*v70)(void); // [sp+34h] [bp-7BCh]@54
  char v71; // [sp+3Ch] [bp-7B4h]@54
  void (*v72)(void); // [sp+70h] [bp-780h]@58
  char v73; // [sp+78h] [bp-778h]@54
  char v74; // [sp+F0h] [bp-700h]@50
  void (*v75)(void); // [sp+F8h] [bp-6F8h]@50
  char v76; // [sp+100h] [bp-6F0h]@50
  void (*v77)(void); // [sp+108h] [bp-6E8h]@50
  char v78; // [sp+110h] [bp-6E0h]@50
  char v79; // [sp+188h] [bp-668h]@46
  void (*v80)(void); // [sp+190h] [bp-660h]@46
  char v81; // [sp+198h] [bp-658h]@46
  void (*v82)(void); // [sp+1A0h] [bp-650h]@46
  char v83; // [sp+1A8h] [bp-648h]@46
  char v84; // [sp+220h] [bp-5D0h]@42
  void (*v85)(void); // [sp+228h] [bp-5C8h]@42
  char v86; // [sp+230h] [bp-5C0h]@42
  void (*v87)(void); // [sp+238h] [bp-5B8h]@42
  char v88; // [sp+240h] [bp-5B0h]@42
  char v89; // [sp+2B8h] [bp-538h]@36
  void (*v90)(void); // [sp+2C0h] [bp-530h]@36
  char v91; // [sp+2C8h] [bp-528h]@36
  void (*v92)(void); // [sp+2D0h] [bp-520h]@36
  int v93; // [sp+2D8h] [bp-518h]@34
  int v94; // [sp+2DCh] [bp-514h]@34
  int v95; // [sp+2E0h] [bp-510h]@34
  int v96; // [sp+2E4h] [bp-50Ch]@34
  int v97; // [sp+2E8h] [bp-508h]@34
  int v98; // [sp+2ECh] [bp-504h]@34
  int v99; // [sp+2F0h] [bp-500h]@34
  int v100; // [sp+2F4h] [bp-4FCh]@34
  int v101; // [sp+2F8h] [bp-4F8h]@34
  int v102; // [sp+2FCh] [bp-4F4h]@34
  int v103; // [sp+300h] [bp-4F0h]@34
  int v104; // [sp+304h] [bp-4ECh]@35
  void (*v105)(void); // [sp+30Ch] [bp-4E4h]@34
  int v106; // [sp+310h] [bp-4E0h]@35
  char v107; // [sp+318h] [bp-4D8h]@36
  char v108; // [sp+390h] [bp-460h]@30
  void (*v109)(void); // [sp+398h] [bp-458h]@30
  char v110; // [sp+3A0h] [bp-450h]@30
  void (*v111)(void); // [sp+3A8h] [bp-448h]@30
  char v112; // [sp+3B0h] [bp-440h]@30
  void **(__fastcall *v113)(MobSpawnUtils *, Random *); // [sp+428h] [bp-3C8h]@26
  void (*v114)(void); // [sp+430h] [bp-3C0h]@26
  int (__fastcall *v115)(int, int (**)(void), int); // [sp+434h] [bp-3BCh]@26
  char v116; // [sp+438h] [bp-3B8h]@26
  void (*v117)(void); // [sp+440h] [bp-3B0h]@26
  char v118; // [sp+448h] [bp-3A8h]@26
  char v119; // [sp+4C0h] [bp-330h]@22
  void (*v120)(void); // [sp+4C8h] [bp-328h]@22
  char v121; // [sp+4D0h] [bp-320h]@22
  void (*v122)(void); // [sp+4D8h] [bp-318h]@22
  char v123; // [sp+4E0h] [bp-310h]@22
  char v124; // [sp+558h] [bp-298h]@18
  void (*v125)(void); // [sp+560h] [bp-290h]@18
  char v126; // [sp+568h] [bp-288h]@18
  void (*v127)(void); // [sp+570h] [bp-280h]@18
  char v128; // [sp+578h] [bp-278h]@18
  char v129; // [sp+5F0h] [bp-200h]@14
  void (*v130)(void); // [sp+5F8h] [bp-1F8h]@14
  char v131; // [sp+600h] [bp-1F0h]@14
  void (*v132)(void); // [sp+608h] [bp-1E8h]@14
  char v133; // [sp+610h] [bp-1E0h]@14
  char v134; // [sp+688h] [bp-168h]@10
  void (*v135)(void); // [sp+690h] [bp-160h]@10
  char v136; // [sp+698h] [bp-158h]@10
  void (*v137)(void); // [sp+6A0h] [bp-150h]@10
  char v138; // [sp+6A8h] [bp-148h]@10
  char v139; // [sp+720h] [bp-D0h]@6
  void (*v140)(void); // [sp+728h] [bp-C8h]@6
  char v141; // [sp+730h] [bp-C0h]@6
  void (*v142)(void); // [sp+738h] [bp-B8h]@6
  char v143; // [sp+740h] [bp-B0h]@6
  void *v144; // [sp+7B8h] [bp-38h]@4
  void (*v145)(void); // [sp+7C0h] [bp-30h]@4
  int (__fastcall *v146)(int, int, BlockSource *, int, int); // [sp+7C4h] [bp-2Ch]@4

  v4 = a1;
  v5 = (MobSpawnRules *)(a1 + 4);
  v6 = a4;
  v7 = a3;
  v8 = a2;
  *(_DWORD *)a1 = &off_2703B94;
  v9 = a1 + 64;
  MobSpawnRules::MobSpawnRules((MobSpawnRules *)(a1 + 4));
  MobSpawnRules::MobSpawnRules((MobSpawnRules *)v9);
  v10 = *v6;
  if ( *v6 )
  {
    *v6 = 0;
    *(_DWORD *)(v4 + 124) = v10;
  }
  else
    v11 = (BiomeDecorator *)operator new(0x100u);
    BiomeDecorator::BiomeDecorator(v11);
    *(_DWORD *)(v4 + 124) = v11;
  _aeabi_memclr4(v4 + 128, 48);
  v12 = v4 + 228;
  *(_DWORD *)(v4 + 176) = &unk_28898CC;
  *(_BYTE *)(v4 + 188) = *(_BYTE *)(Block::mGrass + 4);
  *(_BYTE *)(v4 + 189) = 0;
  *(_BYTE *)(v4 + 190) = *(_BYTE *)(Block::mDirt + 4);
  *(_DWORD *)(v4 + 192) = 5169201;
  *(_DWORD *)(v4 + 196) = 1056964608;
  *(_DWORD *)(v4 + 200) = 1056964608;
  *(_DWORD *)(v4 + 204) = 0;
  *(_DWORD *)(v4 + 208) = 0;
  *(_DWORD *)(v4 + 212) = 0;
  *(_DWORD *)(v4 + 216) = 1040187392;
  v13 = unk_2809590;
  v14 = unk_2809594;
  v15 = unk_2809598;
  *(_DWORD *)v12 = Biome::DEFAULT_WATER_COLOR;
  *(_DWORD *)(v12 + 4) = v13;
  *(_DWORD *)(v12 + 8) = v14;
  *(_DWORD *)(v12 + 12) = v15;
  v16 = Biome::DEFAULT_UNDERWATER_COLOR;
  v17 = unk_28095A0;
  v18 = unk_28095A4;
  *(_DWORD *)(v4 + 256) = dword_28095A8;
  v19 = v4 + 244;
  *(_DWORD *)v19 = v16;
  *(_DWORD *)(v19 + 4) = v17;
  *(_DWORD *)(v19 + 8) = v18;
  *(_BYTE *)(v4 + 260) = 1;
  *(_DWORD *)(v4 + 264) = v7;
  *(_DWORD *)(v4 + 268) = v8;
  v20 = (PerlinSimplexNoise *)operator new(0x14u);
  PerlinSimplexNoise::PerlinSimplexNoise(v20, 0x929u, 1);
  *(_DWORD *)(v4 + 272) = v20;
  v21 = (PerlinSimplexNoise *)operator new(0x14u);
  PerlinSimplexNoise::PerlinSimplexNoise(v21, 0x4D2u, 1);
  *(_DWORD *)(v4 + 276) = v21;
  v22 = (MobSpawnRules *)MobSpawnRules::setBrightnessRange(v5, 7, 15LL, v64);
  MobSpawnRules::setSurfaceSpawner(v22);
  v24 = (MobSpawnRules *)MobSpawnRules::setBrightnessRange((MobSpawnRules *)v9, 0, 4294967303LL, v23);
  v25 = (MobSpawnRules *)MobSpawnRules::setSurfaceSpawner(v24);
  v26 = MobSpawnRules::setUndergroundSpawner(v25);
  LODWORD(v27) = 3;
  v28 = MobSpawnRules::setDifficultyRange(v26, 1, v27);
  v144 = operator new(1u);
  v146 = sub_18490E2;
  v145 = (void (*)(void))sub_1849262;
  MobSpawnRules::setSpawnCountCallback(v28, (int)&v144);
  if ( v145 )
    v145();
  v29 = *(MobSpawnerData **)(v4 + 144);
  v142 = 0;
  v140 = 0;
  MobSpawnerData::MobSpawnerData(&v143, 4877, 12, 2, 3, (int)v5, (int)&v141, (int)&v139);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v4 + 140, v29, &v143);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v143);
  if ( v140 )
    v140();
  if ( v142 )
    v142();
  v30 = *(MobSpawnerData **)(v4 + 144);
  v137 = 0;
  v135 = 0;
  MobSpawnerData::MobSpawnerData(&v138, 4876, 10, 1, 3, (int)v5, (int)&v136, (int)&v134);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v4 + 140, v30, &v138);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v138);
  if ( v135 )
    v135();
  if ( v137 )
    v137();
  v31 = *(MobSpawnerData **)(v4 + 144);
  v132 = 0;
  v130 = 0;
  MobSpawnerData::MobSpawnerData(&v133, 4874, 10, 2, 4, (int)v5, (int)&v131, (int)&v129);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v4 + 140, v31, &v133);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v133);
  if ( v130 )
    v130();
  if ( v132 )
    v132();
  v32 = *(MobSpawnerData **)(v4 + 144);
  v127 = 0;
  v125 = 0;
  MobSpawnerData::MobSpawnerData(&v128, 4875, 8, 2, 3, (int)v5, (int)&v126, (int)&v124);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v4 + 140, v32, &v128);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v128);
  if ( v125 )
    v125();
  if ( v127 )
    v127();
  v33 = *(MobSpawnerData **)(v4 + 132);
  v122 = 0;
  v120 = 0;
  MobSpawnerData::MobSpawnerData(&v123, 264995, 100, 1, 1, v9, (int)&v121, (int)&v119);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v4 + 128, v33, &v123);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v123);
  if ( v120 )
    v120();
  if ( v122 )
    v122();
  v34 = *(MobSpawnerData **)(v4 + 132);
  v113 = MobSpawnUtils::spawnZombie;
  v115 = std::_Function_handler<EntityDefinitionIdentifier ()(Random &),EntityDefinitionIdentifier (*)(Random &)>::_M_invoke;
  v117 = 0;
  v114 = (void (*)(void))std::_Function_base::_Base_manager<EntityDefinitionIdentifier (*)(Random &)>::_M_manager;
  MobSpawnerData::MobSpawnerData(&v118, 199456, 80, 2, 4, v9, (int)&v116, (int)&v113);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v4 + 128, v34, &v118);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v118);
  if ( v114 )
    v114();
  if ( v117 )
    v117();
  v35 = *(MobSpawnerData **)(v4 + 132);
  v111 = 0;
  v109 = 0;
  MobSpawnerData::MobSpawnerData(&v112, 1116962, 100, 1, 2, v9, (int)&v110, (int)&v108);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v4 + 128, v35, &v112);
  v66 = v4 + 128;
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v112);
  if ( v109 )
    v109();
  if ( v111 )
    v111();
  v36 = *(MobSpawnerData **)(v4 + 132);
  v37 = *(_DWORD *)(v9 + 4);
  v38 = *(_DWORD *)(v9 + 8);
  v39 = *(_DWORD *)(v9 + 12);
  v40 = *(_DWORD *)(v9 + 16);
  v93 = *(_DWORD *)v9;
  v94 = v37;
  v95 = v38;
  v96 = v39;
  v97 = v40;
  HIDWORD(v45) = *(_DWORD *)(v9 + 24);
  v41 = *(_DWORD *)(v9 + 28);
  v42 = *(_DWORD *)(v9 + 32);
  v43 = *(_DWORD *)(v9 + 36);
  v44 = *(_DWORD *)(v9 + 40);
  v98 = *(_DWORD *)(v9 + 20);
  v99 = HIDWORD(v45);
  v100 = v41;
  v101 = v42;
  v102 = v43;
  v103 = v44;
  v105 = 0;
  HIDWORD(v45) = *(_DWORD *)(v4 + 116);
  if ( HIDWORD(v45) )
    ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))HIDWORD(v45))(&v104, v4 + 108, 2);
    v106 = *(_DWORD *)(v4 + 120);
    v105 = *(void (**)(void))(v4 + 116);
  LODWORD(v45) = -1;
  v46 = MobSpawnRules::setPopulationCap((MobSpawnRules *)&v93, 5, v45);
  v92 = 0;
  v90 = 0;
  MobSpawnerData::MobSpawnerData(&v107, 2849, 100, 1, 1, v46, (int)&v91, (int)&v89);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v66, v36, &v107);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v107);
  if ( v90 )
    v90();
  if ( v92 )
    v92();
  if ( v105 )
    v105();
  v47 = *(MobSpawnerData **)(v4 + 132);
  v87 = 0;
  v85 = 0;
  MobSpawnerData::MobSpawnerData(&v88, 2853, 100, 1, 1, v9, (int)&v86, (int)&v84);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v66, v47, &v88);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v88);
  if ( v85 )
    v85();
  if ( v87 )
    v87();
  v48 = *(MobSpawnerData **)(v4 + 132);
  v82 = 0;
  v80 = 0;
  MobSpawnerData::MobSpawnerData(&v83, 2854, 10, 1, 2, v9, (int)&v81, (int)&v79);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v66, v48, &v83);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v83);
  if ( v80 )
    v80();
  if ( v82 )
    v82();
  v49 = *(MobSpawnerData **)(v4 + 132);
  v77 = 0;
  v75 = 0;
  MobSpawnerData::MobSpawnerData(&v78, 2861, 5, 1, 1, v9, (int)&v76, (int)&v74);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v66, v49, &v78);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v78);
  if ( v75 )
    v75();
  if ( v77 )
    v77();
  v50 = *(MobSpawnerData **)(v4 + 132);
  MobSpawnRules::MobSpawnRules((MobSpawnRules *)&v71);
  v51 = (MobSpawnRules *)MobSpawnRules::setUndergroundSpawner((MobSpawnRules *)&v71);
  v52 = (MobSpawnRules *)MobSpawnRules::setBrightnessRange(v51, 0, 4LL, v65);
  LODWORD(v53) = 63;
  v54 = MobSpawnRules::setHeightRange(v52, 0, v53);
  v70 = 0;
  v68 = 0;
  MobSpawnerData::MobSpawnerData(&v73, 33043, 10, 2, 2, v54, (int)&v69, (int)&v67);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v66, v50, &v73);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v73);
  if ( v68 )
    v68();
  if ( v70 )
    v70();
  if ( v72 )
    v72();
  *(_DWORD *)(v4 + 220) = Biome::HEIGHTS_DEFAULT;
  *(_DWORD *)(v4 + 224) = dword_280950C;
  v55 = 0;
  Biome::defaultTotalEnemyWeight = 0;
  *(_QWORD *)&v56 = *(_QWORD *)(v4 + 128);
  if ( v56 != v57 )
    v58 = 0;
    do
    {
      v59 = *v56;
      v56 += 30;
      v58 += v59;
      Biome::defaultTotalEnemyWeight = v58;
    }
    while ( v57 != v56 );
  Biome::defaultTotalFriendlyWeight = 0;
  for ( *(_QWORD *)&v60 = *(_QWORD *)(v4 + 140); v61 != v60; Biome::defaultTotalFriendlyWeight = v55 )
    v62 = *v60;
    v60 += 30;
    v55 += v62;
  Biome::mBiomes[v8] = v4;
  return v4;
}


int __fastcall Biome::getGrassFeature(Biome *this, Random *a2)
{
  return *((_DWORD *)this + 31) + 144;
}


signed int __fastcall Biome::getTemperatureCategory(Biome *this)
{
  signed int result; // r0@1

  __asm
  {
    VMOV.F32        S0, #1.0
    VLDR            S2, [R0,#0xC4]
    VLDR            S4, =0.2
  }
  result = 3;
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S2, S4
  if ( _NF ^ _VF )
    result = 2;
  __asm { VMRS            APSR_nzcv, FPSCR }
    result = 1;
  return result;
}


signed int __fastcall Biome::canHaveSnowfall(Biome *this, const BlockSource *a2, const BlockPos *a3)
{
  signed int result; // r0@2

  _R4 = this;
  _R5 = a3;
  __asm
  {
    VLDR            S0, [R4,#0xD8]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    result = 0;
  else
    if ( *((_DWORD *)a3 + 1) < 65 )
    {
      __asm { VLDR            S0, [R4,#0xC4] }
    }
    else
      _R0 = BlockSource::getCachedTemperatureNoise(a2, a3);
      __asm
      {
        VMOV            S2, R0
        VLDR            S4, =64.0
        VMOV.F32        S0, #-0.125
        VCVT.F32.S32    S2, S2
        VMUL.F32        S0, S2, S0
        VLDR            S2, [R5,#4]
        VADD.F32        S0, S0, S4
        VSUB.F32        S0, S0, S2
        VLDR            S2, =0.0016667
        VMUL.F32        S0, S0, S2
        VLDR            S2, [R4,#0xC4]
        VADD.F32        S0, S2, S0
      }
    __asm { VLDR            S2, =0.15 }
    __asm
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      result = 1;
  return result;
}


int __fastcall Biome::setDepthAndScale(int result, int a2)
{
  *(_DWORD *)(result + 220) = *(_DWORD *)a2;
  *(_DWORD *)(result + 224) = *(_DWORD *)(a2 + 4);
  return result;
}


Biome *__fastcall Biome::setSnowAccumulation(Biome *this, float _R1, float a3)
{
  Biome *v7; // r4@1
  MobSpawnerData *v8; // r5@2
  char v10; // [sp+10h] [bp-A8h]@2
  void (*v11)(void); // [sp+18h] [bp-A0h]@2
  char v12; // [sp+20h] [bp-98h]@2
  void (*v13)(void); // [sp+28h] [bp-90h]@2
  char v14; // [sp+30h] [bp-88h]@2

  __asm { VMOV            S0, R1 }
  v7 = this;
  *((float *)this + 51) = _R1;
  __asm { VCMPE.F32       S0, #0.0 }
  *(_QWORD *)((char *)this + 212) = *(_QWORD *)&_R1;
  __asm { VMRS            APSR_nzcv, FPSCR }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
  {
    v8 = (MobSpawnerData *)*((_DWORD *)this + 36);
    v13 = 0;
    v11 = 0;
    MobSpawnerData::MobSpawnerData(&v14, 4882, 4, 2, 3, (int)this + 4, (int)&v12, (int)&v10);
    std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>((int)v7 + 140, v8, &v14);
    MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v14);
    if ( v11 )
      v11();
    if ( v13 )
      v13();
  }
  return v7;
}


Random *__fastcall Biome::buildSurfaceAt(float a1, int a2, int a3, int a4, int a5, int a6)
{
  float v11; // [sp+0h] [bp-10h]@0

  __asm
  {
    VLDR            S0, [SP,#0x10+arg_0]
    VSTR            S0, [SP,#0x10+var_10]
  }
  return Biome::buildSurfaceAtDefault(SLODWORD(a1), (Random *)a2, a3, a4, v11, a6);
}


int __fastcall Biome::getEvergreenFoliageColor(Biome *this, const BlockPos *a2, float a3)
{
  __asm
  {
    VLDR            S2, [R0,#0xC4]
    VMOV.F32        S6, #1.0
    VLDR            S0, =0.0
    VCMPE.F32       S2, #0.0
    VLDR            S4, [R0,#0xC8]
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S8, S0
    VCMPE.F32       S4, #0.0
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S8, S2 }
    VCMPE.F32       S2, S6
    __asm { VMOVGT.F32      S0, S4 }
    VCMPE.F32       S4, S6
    __asm { VMOVGT.F32      S8, S6 }
    VMOV            R0, S8
    __asm { VMOVGT.F32      S0, S6 }
  __asm { VMOV            R1, S0 }
  return j_j_j__ZN12FoliageColor17getEvergreenColorEff(_R0, _R1, a3);
}


int __fastcall Biome::_placeBedrock(int a1, Random *a2, int a3, const BlockPos *a4)
{
  Random *v4; // r5@1
  int v5; // r4@1
  unsigned int v6; // r6@1
  char v7; // r0@1
  _BYTE *v8; // r1@1
  int v9; // r2@1
  int result; // r0@1
  int v11; // r2@1
  unsigned __int16 v12; // [sp+4h] [bp-14h]@1

  v4 = a2;
  v5 = a3;
  ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v12, a4);
  v6 = v12;
  v7 = Random::_genRandInt32(v4);
  v8 = (_BYTE *)(*(_DWORD *)v5 + (*(_QWORD *)(v5 + 16) >> 32) * (*(_QWORD *)(v5 + 16) * (unsigned __int8)v6 + (v6 >> 8)));
  v9 = v7 & 3;
  result = Block::mBedrock;
  v11 = v9 + 2;
  do
  {
    --v11;
    *v8++ = *(_BYTE *)(result + 4);
  }
  while ( v11 );
  return result;
}


signed int __fastcall Biome::getCreatureProbability(Biome *this)
{
  return 1034147594;
}


int __fastcall Biome::getBiome(Biome *this, int a2, Biome *a3)
{
  int result; // r0@2
  int v4; // r0@3

  if ( (unsigned int)this <= 0x100 )
  {
    v4 = Biome::mBiomes[(signed int)this];
    if ( v4 )
      a2 = v4;
    result = a2;
  }
  else
    result = Biome::ocean;
  return result;
}


Biome *__fastcall Biome::~Biome(Biome *this)
{
  Biome *v1; // r4@1
  PerlinSimplexNoise *v2; // r0@1
  PerlinSimplexNoise *v3; // r0@2
  PerlinSimplexNoise *v4; // r0@3
  PerlinSimplexNoise *v5; // r0@4
  int v6; // r1@5
  void *v7; // r0@5
  MobSpawnerData *v8; // r0@6
  MobSpawnerData *v9; // r5@6
  MobSpawnerData *v10; // r0@11
  MobSpawnerData *v11; // r5@11
  MobSpawnerData *v12; // r0@16
  MobSpawnerData *v13; // r5@16
  MobSpawnerData *v14; // r0@21
  MobSpawnerData *v15; // r5@21
  int v16; // r0@26
  void (*v17)(void); // r3@28
  void (*v18)(void); // r3@30
  unsigned int *v20; // r2@33
  signed int v21; // r1@35

  v1 = this;
  *(_DWORD *)this = &off_2703B94;
  v2 = (PerlinSimplexNoise *)*((_DWORD *)this + 69);
  if ( v2 )
  {
    v3 = PerlinSimplexNoise::~PerlinSimplexNoise(v2);
    operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 69) = 0;
  v4 = (PerlinSimplexNoise *)*((_DWORD *)v1 + 68);
  if ( v4 )
    v5 = PerlinSimplexNoise::~PerlinSimplexNoise(v4);
    operator delete((void *)v5);
  *((_DWORD *)v1 + 68) = 0;
  v6 = *((_DWORD *)v1 + 44);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v6 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    }
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v9 = (MobSpawnerData *)(*(_QWORD *)((char *)v1 + 164) >> 32);
  v8 = (MobSpawnerData *)*(_QWORD *)((char *)v1 + 164);
  if ( v8 != v9 )
    do
      v8 = (MobSpawnerData *)((char *)MobSpawnerData::~MobSpawnerData(v8) + 120);
    while ( v9 != v8 );
    v8 = (MobSpawnerData *)*((_DWORD *)v1 + 41);
  if ( v8 )
    operator delete((void *)v8);
  v11 = (MobSpawnerData *)(*((_QWORD *)v1 + 19) >> 32);
  v10 = (MobSpawnerData *)*((_QWORD *)v1 + 19);
  if ( v10 != v11 )
      v10 = (MobSpawnerData *)((char *)MobSpawnerData::~MobSpawnerData(v10) + 120);
    while ( v11 != v10 );
    v10 = (MobSpawnerData *)*((_DWORD *)v1 + 38);
  if ( v10 )
    operator delete((void *)v10);
  v13 = (MobSpawnerData *)(*(_QWORD *)((char *)v1 + 140) >> 32);
  v12 = (MobSpawnerData *)*(_QWORD *)((char *)v1 + 140);
  if ( v12 != v13 )
      v12 = (MobSpawnerData *)((char *)MobSpawnerData::~MobSpawnerData(v12) + 120);
    while ( v13 != v12 );
    v12 = (MobSpawnerData *)*((_DWORD *)v1 + 35);
  if ( v12 )
    operator delete((void *)v12);
  v15 = (MobSpawnerData *)(*((_QWORD *)v1 + 16) >> 32);
  v14 = (MobSpawnerData *)*((_QWORD *)v1 + 16);
  if ( v14 != v15 )
      v14 = (MobSpawnerData *)((char *)MobSpawnerData::~MobSpawnerData(v14) + 120);
    while ( v15 != v14 );
    v14 = (MobSpawnerData *)*((_DWORD *)v1 + 32);
  if ( v14 )
    operator delete((void *)v14);
  v16 = *((_DWORD *)v1 + 31);
  if ( v16 )
    (*(void (**)(void))(*(_DWORD *)v16 + 12))();
  *((_DWORD *)v1 + 31) = 0;
  v17 = (void (*)(void))*((_DWORD *)v1 + 29);
  if ( v17 )
    v17();
  v18 = (void (*)(void))*((_DWORD *)v1 + 14);
  if ( v18 )
    v18();
  return v1;
}


signed int __fastcall Biome::isSnowCovered(Biome *this)
{
  signed int result; // r0@1

  __asm { VLDR            S0, [R0,#0xCC] }
  result = 0;
  __asm
  {
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    result = 1;
  return result;
}


int __fastcall Biome::getBiome(Biome *this, int a2)
{
  _DWORD *v2; // r2@1

  v2 = &Biome::ocean;
  if ( (unsigned int)this <= 0x100 )
    v2 = &Biome::mBiomes[(_DWORD)this];
  return *v2;
}


int __fastcall Biome::refreshBiomes(Biome *this, unsigned int a2)
{
  int v2; // r5@1
  int result; // r0@3

  v2 = 0;
  do
  {
    result = Biome::mBiomes[v2];
    if ( result )
      result = (*(int (**)(void))(*(_DWORD *)result + 88))();
    ++v2;
  }
  while ( v2 != 256 );
  return result;
}


_DWORD *__fastcall Biome::getMobs(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  _DWORD *result; // r0@2
  signed int v5; // r0@5
  _DWORD *v6; // r1@5

  v2 = a2;
  v3 = a1;
  if ( EntityClassTree::isTypeInstanceOf(a2, 2816) == 1 )
  {
    result = (_DWORD *)(v3 + 128);
  }
  else if ( EntityClassTree::isTypeInstanceOf(v2, 4864) == 1 )
    result = (_DWORD *)(v3 + 140);
  else
    v5 = EntityClassTree::isTypeInstanceOf(v2, 8960);
    v6 = &Biome::_emptyMobList;
    if ( v5 )
      v6 = (_DWORD *)(v3 + 152);
    result = v6;
  return result;
}


int __fastcall Biome::createMutatedCopy(Biome *this, int a2)
{
  int v2; // r3@1

  v2 = *(_DWORD *)(a2 + 268);
  return (*(int (__fastcall **)(Biome *))(*(_DWORD *)a2 + 104))(this);
}


signed int __fastcall Biome::isSame(Biome *this, Biome *a2)
{
  Biome *v2; // r2@1
  signed int result; // r0@2

  v2 = this;
  if ( a2 == this )
  {
    result = 1;
  }
  else
    result = 0;
    if ( a2 )
    {
      if ( *((_DWORD *)v2 + 66) == *((_DWORD *)a2 + 66) )
        result = 1;
    }
  return result;
}


int __fastcall Biome::getTreeFeature(Biome *this, Random *a2)
{
  Biome *v2; // r4@1
  unsigned int v3; // r0@1
  int v4; // r1@1
  unsigned int v5; // r2@1
  int result; // r0@1

  v2 = this;
  v3 = Random::_genRandInt32(a2);
  v4 = *((_DWORD *)v2 + 31);
  v5 = v3 % 0xA;
  result = v4 + 112;
  if ( !v5 )
    result = v4 + 152;
  return result;
}


int __fastcall Biome::getMapFoliageColor(Biome *this, const BlockPos *a2, float a3)
{
  __asm
  {
    VLDR            S2, [R0,#0xC4]
    VMOV.F32        S6, #1.0
    VLDR            S0, =0.0
    VCMPE.F32       S2, #0.0
    VLDR            S4, [R0,#0xC8]
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S8, S0
    VCMPE.F32       S4, #0.0
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S8, S2 }
    VCMPE.F32       S2, S6
    __asm { VMOVGT.F32      S0, S4 }
    VCMPE.F32       S4, S6
    __asm { VMOVGT.F32      S8, S6 }
    VMOV            R0, S8
    __asm { VMOVGT.F32      S0, S6 }
  __asm { VMOV            R1, S0 }
  return j_j_j__ZN12FoliageColor18getMapFoliageColorEff(_R0, _R1, a3);
}


int __fastcall Biome::setNoRain(int result)
{
  *(_BYTE *)(result + 260) = 0;
  return result;
}


void __fastcall Biome::~Biome(Biome *this)
{
  Biome *v1; // r0@1

  v1 = Biome::~Biome(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall Biome::getFoliageColor(Biome *this, const BlockPos *a2, float a3)
{
  __asm
  {
    VLDR            S2, [R0,#0xC4]
    VMOV.F32        S6, #1.0
    VLDR            S0, =0.0
    VCMPE.F32       S2, #0.0
    VLDR            S4, [R0,#0xC8]
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S8, S0
    VCMPE.F32       S4, #0.0
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S8, S2 }
    VCMPE.F32       S2, S6
    __asm { VMOVGT.F32      S0, S4 }
    VCMPE.F32       S4, S6
    __asm { VMOVGT.F32      S8, S6 }
    VMOV            R0, S8
    __asm { VMOVGT.F32      S0, S6 }
  __asm { VMOV            R1, S0 }
  return j_j_j__ZN12FoliageColor15getFoliageColorEff(_R0, _R1, a3);
}


int __fastcall Biome::initBiomes(Biome *this)
{
  OceanBiome *v1; // r5@1
  int v2; // r0@1
  int v3; // r4@3
  void *v4; // r0@3
  PlainsBiome *v5; // r5@4
  int v6; // r0@4
  int v7; // r4@6
  void *v8; // r0@6
  DesertBiome *v9; // r5@7
  int v10; // r0@7
  int v11; // r4@9
  void *v12; // r0@9
  ExtremeHillsBiome *v13; // r5@10
  int v14; // r0@10
  int v15; // r4@12
  void *v16; // r0@12
  ForestBiome *v17; // r5@13
  int v18; // r0@13
  int v19; // r4@15
  void *v20; // r0@15
  TaigaBiome *v21; // r5@16
  int v22; // r0@16
  int v23; // r4@18
  __int64 v24; // r1@18
  void *v25; // r0@18
  SwampBiome *v26; // r5@19
  int v27; // r0@19
  int v28; // r4@21
  void *v29; // r0@21
  void *v30; // r5@22
  __int64 v31; // kr00_8@24
  MobSpawnerData *v32; // r4@25
  int v33; // r0@27
  int v34; // r4@29
  void *v35; // r0@29
  HellBiome *v36; // r5@30
  int v37; // r0@30
  int v38; // r4@32
  void *v39; // r0@32
  TheEndBiome *v40; // r5@33
  int v41; // r0@33
  int v42; // r4@35
  void *v43; // r0@35
  OceanBiome *v44; // r5@36
  int v45; // r0@36
  int v46; // r4@38
  Biome *v47; // r0@38
  void *v48; // r0@38
  void *v49; // r5@39
  __int64 v50; // kr08_8@41
  MobSpawnerData *v51; // r4@42
  int v52; // r0@44
  int v53; // r4@46
  Biome *v54; // r0@46
  void *v55; // r0@46
  IceBiome *v56; // r5@47
  int v57; // r0@47
  int v58; // r4@49
  Biome *v59; // r0@49
  void *v60; // r0@49
  IceBiome *v61; // r5@50
  int v62; // r0@50
  int v63; // r4@52
  Biome *v64; // r0@52
  void *v65; // r0@52
  MushroomIslandBiome *v66; // r5@53
  int v67; // r0@53
  int v68; // r4@55
  void *v69; // r0@55
  MushroomIslandBiome *v70; // r5@56
  int v71; // r0@56
  int v72; // r4@58
  void *v73; // r0@58
  BeachBiome *v74; // r5@59
  int v75; // r0@59
  int v76; // r4@61
  void *v77; // r0@61
  DesertBiome *v78; // r5@62
  int v79; // r0@62
  int v80; // r4@64
  void *v81; // r0@64
  ForestBiome *v82; // r5@65
  int v83; // r0@65
  int v84; // r4@67
  void *v85; // r0@67
  TaigaBiome *v86; // r5@68
  int v87; // r0@68
  int v88; // r4@70
  void *v89; // r0@70
  ExtremeHillsBiome *v90; // r5@71
  int v91; // r0@71
  int v92; // r4@73
  void *v98; // r0@73
  JungleBiome *v99; // r5@74
  int v100; // r0@74
  int v101; // r5@76
  void *v102; // r0@76
  JungleBiome *v103; // r5@77
  int v104; // r0@77
  int v105; // r5@79
  void *v106; // r0@79
  JungleBiome *v107; // r5@80
  int v108; // r0@80
  int v109; // r5@82
  int v110; // r1@82
  void *v111; // r0@82
  OceanBiome *v112; // r5@83
  int v113; // r0@83
  int v114; // r4@85
  void *v115; // r0@85
  StoneBeachBiome *v116; // r5@86
  int v117; // r0@86
  int v118; // r4@88
  void *v119; // r0@88
  BeachBiome *v120; // r5@89
  int v121; // r0@89
  int v122; // r4@91
  void *v123; // r0@91
  void *v124; // r5@92
  int v125; // r0@92
  void *v126; // r0@94
  void *v127; // r5@95
  int v128; // r0@95
  int v129; // r0@97
  void *v130; // r0@97
  ForestBiome *v131; // r5@98
  int v132; // r0@98
  int v133; // r4@100
  void *v134; // r0@100
  TaigaBiome *v135; // r5@101
  int v136; // r0@101
  int v137; // r4@103
  Biome *v138; // r0@103
  void *v139; // r0@103
  TaigaBiome *v140; // r5@104
  int v141; // r0@104
  int v142; // r4@106
  Biome *v143; // r0@106
  void *v144; // r0@106
  TaigaBiome *v145; // r5@107
  int v146; // r0@107
  int v147; // r4@109
  void *v148; // r0@109
  TaigaBiome *v149; // r5@110
  int v150; // r0@110
  int v151; // r4@112
  void *v152; // r0@112
  ExtremeHillsBiome *v153; // r5@113
  int v154; // r0@113
  int v155; // r4@115
  void *v156; // r0@115
  SavannaBiome *v157; // r5@116
  int v158; // r0@116
  int v159; // r4@118
  void *v160; // r0@118
  SavannaBiome *v161; // r5@119
  int v162; // r0@119
  int v163; // r4@121
  void *v164; // r0@121
  MesaBiome *v165; // r5@122
  int v166; // r0@122
  int v167; // r4@124
  void *v168; // r0@124
  MesaBiome *v169; // r5@125
  int v170; // r0@125
  int v171; // r4@127
  void *v172; // r0@127
  MesaBiome *v173; // r5@128
  int v174; // r0@128
  int v175; // r4@130
  void *v176; // r0@130
  int v177; // r2@131
  int v178; // r2@131
  int v179; // r0@131
  int v180; // r2@134
  int v181; // r2@134
  int v182; // r0@134
  int v183; // r2@137
  int v184; // r2@137
  int v185; // r0@137
  int v186; // r2@140
  int v187; // r2@140
  int v188; // r0@140
  int v189; // r2@143
  int v190; // r2@143
  int v191; // r0@143
  int v192; // r2@146
  int v193; // r2@146
  int v194; // r0@146
  int v195; // r2@149
  int v196; // r2@149
  int v197; // r0@149
  int v198; // r2@152
  int v199; // r2@152
  int v200; // r0@152
  int v201; // r2@155
  int v202; // r2@155
  int v203; // r0@155
  int v204; // r2@158
  int v205; // r0@158
  int v206; // r1@158
  int v207; // r2@161
  int v208; // r0@161
  int v209; // r1@161
  int v210; // r2@164
  int v211; // r0@164
  int v212; // r1@164
  int v213; // r2@167
  int v214; // r0@167
  int v215; // r1@167
  int v216; // r2@170
  int v217; // r0@170
  int v218; // r1@170
  int v219; // r2@173
  int v220; // r2@173
  int v221; // r0@173
  int v222; // r2@176
  int v223; // r2@176
  int v224; // r0@176
  int v225; // r2@179
  int v226; // r2@179
  int v227; // r0@179
  int v228; // r2@182
  int v229; // r0@182
  int v230; // r1@182
  int v231; // r2@185
  int v232; // r2@185
  int v233; // r0@185
  int v234; // r2@188
  int v235; // r0@188
  int v236; // r1@188
  int v237; // r2@191
  int v238; // r0@191
  int v239; // r1@191
  int v240; // r4@194
  void *v241; // r0@194
  int result; // r0@195
  unsigned int *v243; // r2@196
  signed int v244; // r1@198
  unsigned int *v245; // r2@200
  signed int v246; // r1@202
  unsigned int *v247; // r2@204
  signed int v248; // r1@206
  unsigned int *v249; // r2@208
  signed int v250; // r1@210
  unsigned int *v251; // r2@212
  signed int v252; // r1@214
  unsigned int *v253; // r2@216
  signed int v254; // r1@218
  unsigned int *v255; // r2@220
  signed int v256; // r1@222
  unsigned int *v257; // r2@224
  signed int v258; // r1@226
  unsigned int *v259; // r2@228
  signed int v260; // r1@230
  unsigned int *v261; // r2@232
  signed int v262; // r1@234
  unsigned int *v263; // r2@236
  signed int v264; // r1@238
  unsigned int *v265; // r2@240
  signed int v266; // r1@242
  unsigned int *v267; // r2@244
  signed int v268; // r1@246
  unsigned int *v269; // r2@248
  signed int v270; // r1@250
  unsigned int *v271; // r2@252
  signed int v272; // r1@254
  unsigned int *v273; // r2@256
  signed int v274; // r1@258
  unsigned int *v275; // r2@260
  signed int v276; // r1@262
  unsigned int *v277; // r2@264
  signed int v278; // r1@266
  unsigned int *v279; // r2@268
  signed int v280; // r1@270
  unsigned int *v281; // r2@272
  signed int v282; // r1@274
  unsigned int *v283; // r2@276
  signed int v284; // r1@278
  unsigned int *v285; // r2@280
  signed int v286; // r1@282
  unsigned int *v287; // r2@284
  signed int v288; // r1@286
  unsigned int *v289; // r2@288
  signed int v290; // r1@290
  unsigned int *v291; // r2@292
  signed int v292; // r1@294
  unsigned int *v293; // r2@296
  signed int v294; // r1@298
  unsigned int *v295; // r2@300
  signed int v296; // r1@302
  unsigned int *v297; // r2@304
  signed int v298; // r1@306
  unsigned int *v299; // r2@308
  signed int v300; // r1@310
  unsigned int *v301; // r2@312
  signed int v302; // r1@314
  unsigned int *v303; // r2@316
  signed int v304; // r1@318
  unsigned int *v305; // r2@320
  signed int v306; // r1@322
  unsigned int *v307; // r2@324
  signed int v308; // r1@326
  unsigned int *v309; // r2@328
  signed int v310; // r1@330
  unsigned int *v311; // r2@332
  signed int v312; // r1@334
  unsigned int *v313; // r2@336
  signed int v314; // r1@338
  unsigned int *v315; // r2@340
  signed int v316; // r1@342
  unsigned int *v317; // r2@344
  signed int v318; // r1@346
  unsigned int *v319; // r2@348
  signed int v320; // r1@350
  unsigned int *v321; // r2@352
  signed int v322; // r1@354
  unsigned int *v323; // r2@356
  signed int v324; // r1@358
  int v325; // [sp+8h] [bp-1C8h]@194
  int v326; // [sp+Ch] [bp-1C4h]@191
  int v327; // [sp+10h] [bp-1C0h]@188
  int v328; // [sp+14h] [bp-1BCh]@185
  int v329; // [sp+18h] [bp-1B8h]@182
  int v330; // [sp+1Ch] [bp-1B4h]@179
  int v331; // [sp+20h] [bp-1B0h]@176
  int v332; // [sp+24h] [bp-1ACh]@173
  int v333; // [sp+28h] [bp-1A8h]@170
  int v334; // [sp+2Ch] [bp-1A4h]@167
  int v335; // [sp+30h] [bp-1A0h]@164
  int v336; // [sp+34h] [bp-19Ch]@161
  int v337; // [sp+38h] [bp-198h]@158
  int v338; // [sp+3Ch] [bp-194h]@155
  int v339; // [sp+40h] [bp-190h]@152
  int v340; // [sp+44h] [bp-18Ch]@149
  int v341; // [sp+48h] [bp-188h]@146
  int v342; // [sp+4Ch] [bp-184h]@143
  int v343; // [sp+50h] [bp-180h]@140
  int v344; // [sp+54h] [bp-17Ch]@137
  int v345; // [sp+58h] [bp-178h]@134
  int v346; // [sp+5Ch] [bp-174h]@131
  int v347; // [sp+64h] [bp-16Ch]@130
  int v348; // [sp+6Ch] [bp-164h]@127
  int v349; // [sp+74h] [bp-15Ch]@124
  int v350; // [sp+7Ch] [bp-154h]@121
  int v351; // [sp+84h] [bp-14Ch]@118
  int v352; // [sp+8Ch] [bp-144h]@115
  int v353; // [sp+94h] [bp-13Ch]@112
  int v354; // [sp+9Ch] [bp-134h]@109
  int v355; // [sp+A4h] [bp-12Ch]@106
  int v356; // [sp+ACh] [bp-124h]@103
  int v357; // [sp+B4h] [bp-11Ch]@100
  int v358; // [sp+BCh] [bp-114h]@97
  int v359; // [sp+C4h] [bp-10Ch]@94
  int v360; // [sp+CCh] [bp-104h]@91
  int v361; // [sp+D4h] [bp-FCh]@88
  int v362; // [sp+DCh] [bp-F4h]@85
  int v363; // [sp+E4h] [bp-ECh]@82
  int v364; // [sp+ECh] [bp-E4h]@79
  int v365; // [sp+F4h] [bp-DCh]@76
  int v366; // [sp+FCh] [bp-D4h]@73
  int v367; // [sp+104h] [bp-CCh]@70
  int v368; // [sp+10Ch] [bp-C4h]@67
  int v369; // [sp+114h] [bp-BCh]@64
  int v370; // [sp+11Ch] [bp-B4h]@61
  int v371; // [sp+124h] [bp-ACh]@58
  int v372; // [sp+12Ch] [bp-A4h]@55
  int v373; // [sp+134h] [bp-9Ch]@52
  int v374; // [sp+13Ch] [bp-94h]@49
  int v375; // [sp+144h] [bp-8Ch]@46
  int v376; // [sp+14Ch] [bp-84h]@38
  int v377; // [sp+154h] [bp-7Ch]@35
  int v378; // [sp+15Ch] [bp-74h]@32
  int v379; // [sp+164h] [bp-6Ch]@29
  int v380; // [sp+16Ch] [bp-64h]@21
  int v381; // [sp+174h] [bp-5Ch]@18
  int v382; // [sp+17Ch] [bp-54h]@15
  int v383; // [sp+184h] [bp-4Ch]@12
  int v384; // [sp+18Ch] [bp-44h]@9
  int v385; // [sp+194h] [bp-3Ch]@6
  int v386; // [sp+19Ch] [bp-34h]@3
  int v387; // [sp+1A0h] [bp-30h]@22
  int v388; // [sp+1A4h] [bp-2Ch]@39

  v1 = (OceanBiome *)operator new(0x154u);
  OceanBiome::OceanBiome(v1, 0);
  v2 = Biome::ocean;
  Biome::ocean = v1;
  if ( v2 )
  {
    (*(void (**)(void))(*(_DWORD *)v2 + 12))();
    v1 = (OceanBiome *)Biome::ocean;
  }
  v3 = (**(int (__fastcall ***)(OceanBiome *, signed int))v1)(v1, 112);
  sub_21E94B4((void **)&v386, "Ocean");
  EntityInteraction::setInteractText((int *)(v3 + 176), &v386);
  *(_DWORD *)(v3 + 220) = Biome::HEIGHTS_OCEAN;
  *(_DWORD *)(v3 + 224) = dword_280951C;
  v4 = (void *)(v386 - 12);
  if ( (int *)(v386 - 12) != &dword_28898C0 )
    v243 = (unsigned int *)(v386 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v244 = __ldrex(v243);
      while ( __strex(v244 - 1, v243) );
    }
    else
      v244 = (*v243)--;
    if ( v244 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  v5 = (PlainsBiome *)operator new(0x11Cu);
  PlainsBiome::PlainsBiome(v5, 1);
  v6 = Biome::plains;
  Biome::plains = v5;
  if ( v6 )
    (*(void (**)(void))(*(_DWORD *)v6 + 12))();
    v5 = (PlainsBiome *)Biome::plains;
  v7 = (**(int (__fastcall ***)(PlainsBiome *))v5)(v5);
  sub_21E94B4((void **)&v385, "Plains");
  EntityInteraction::setInteractText((int *)(v7 + 176), &v385);
  v8 = (void *)(v385 - 12);
  if ( (int *)(v385 - 12) != &dword_28898C0 )
    v245 = (unsigned int *)(v385 - 4);
        v246 = __ldrex(v245);
      while ( __strex(v246 - 1, v245) );
      v246 = (*v245)--;
    if ( v246 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (DesertBiome *)operator new(0x118u);
  DesertBiome::DesertBiome(v9, 2);
  v10 = Biome::desert;
  Biome::desert = v9;
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 12))();
    v9 = (DesertBiome *)Biome::desert;
  v11 = (**(int (__fastcall ***)(DesertBiome *))v9)(v9);
  sub_21E94B4((void **)&v384, "Desert");
  EntityInteraction::setInteractText((int *)(v11 + 176), &v384);
  *(_BYTE *)(v11 + 260) = 0;
  *(_DWORD *)(v11 + 196) = 0x40000000;
  *(_DWORD *)(v11 + 200) = 0;
  *(_DWORD *)(v11 + 220) = Biome::HEIGHTS_LOWLANDS;
  *(_DWORD *)(v11 + 224) = dword_280952C;
  v12 = (void *)(v384 - 12);
  if ( (int *)(v384 - 12) != &dword_28898C0 )
    v247 = (unsigned int *)(v384 - 4);
        v248 = __ldrex(v247);
      while ( __strex(v248 - 1, v247) );
      v248 = (*v247)--;
    if ( v248 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (ExtremeHillsBiome *)operator new(0x120u);
  ExtremeHillsBiome::ExtremeHillsBiome(v13, 3, 0);
  v14 = Biome::extremeHills;
  Biome::extremeHills = v13;
  if ( v14 )
    (*(void (**)(void))(*(_DWORD *)v14 + 12))();
    v13 = (ExtremeHillsBiome *)Biome::extremeHills;
  v15 = (**(int (__fastcall ***)(ExtremeHillsBiome *))v13)(v13);
  sub_21E94B4((void **)&v383, "Extreme Hills");
  EntityInteraction::setInteractText((int *)(v15 + 176), &v383);
  *(_DWORD *)(v15 + 204) = 0;
  *(_DWORD *)(v15 + 212) = 0;
  *(_DWORD *)(v15 + 216) = 1048576000;
  *(_DWORD *)(v15 + 220) = Biome::HEIGHTS_EXTREME;
  *(_DWORD *)(v15 + 224) = dword_280954C;
  *(_DWORD *)(v15 + 196) = 1045220557;
  *(_DWORD *)(v15 + 200) = 1050253722;
  v16 = (void *)(v383 - 12);
  if ( (int *)(v383 - 12) != &dword_28898C0 )
    v249 = (unsigned int *)(v383 - 4);
        v250 = __ldrex(v249);
      while ( __strex(v250 - 1, v249) );
      v250 = (*v249)--;
    if ( v250 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (ForestBiome *)operator new(0x11Cu);
  ForestBiome::ForestBiome(v17, 4, 0);
  v18 = Biome::forest;
  Biome::forest = v17;
  if ( v18 )
    (*(void (**)(void))(*(_DWORD *)v18 + 12))();
    v17 = (ForestBiome *)Biome::forest;
  v19 = (**(int (__fastcall ***)(ForestBiome *))v17)(v17);
  sub_21E94B4((void **)&v382, "Forest");
  EntityInteraction::setInteractText((int *)(v19 + 176), &v382);
  v20 = (void *)(v382 - 12);
  if ( (int *)(v382 - 12) != &dword_28898C0 )
    v251 = (unsigned int *)(v382 - 4);
        v252 = __ldrex(v251);
      while ( __strex(v252 - 1, v251) );
      v252 = (*v251)--;
    if ( v252 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (TaigaBiome *)operator new(0x11Cu);
  TaigaBiome::TaigaBiome(v21, 5, 0);
  v22 = Biome::taiga;
  Biome::taiga = v21;
  if ( v22 )
    (*(void (**)(void))(*(_DWORD *)v22 + 12))();
    v21 = (TaigaBiome *)Biome::taiga;
  v23 = (**(int (__fastcall ***)(TaigaBiome *))v21)(v21);
  sub_21E94B4((void **)&v381, "Taiga");
  EntityInteraction::setInteractText((int *)(v23 + 176), &v381);
  LODWORD(v24) = 0;
  HIDWORD(v24) = 1048576000;
  *(_DWORD *)(v23 + 192) = 5159473;
  *(_DWORD *)(v23 + 204) = 0;
  *(_QWORD *)(v23 + 212) = v24;
  *(_DWORD *)(v23 + 196) = 1048576000;
  *(_DWORD *)(v23 + 200) = 1061997773;
  v25 = (void *)(v381 - 12);
  if ( (int *)(v381 - 12) != &dword_28898C0 )
    v253 = (unsigned int *)(v381 - 4);
        v254 = __ldrex(v253);
      while ( __strex(v254 - 1, v253) );
      v254 = (*v253)--;
    if ( v254 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = (SwampBiome *)operator new(0x118u);
  SwampBiome::SwampBiome(v26, 6);
  v27 = Biome::swampland;
  Biome::swampland = v26;
  if ( v27 )
    (*(void (**)(void))(*(_DWORD *)v27 + 12))();
    v26 = (SwampBiome *)Biome::swampland;
  v28 = (**(int (__fastcall ***)(SwampBiome *))v26)(v26);
  sub_21E94B4((void **)&v380, "Swampland");
  EntityInteraction::setInteractText((int *)(v28 + 176), &v380);
  *(_DWORD *)(v28 + 192) = 9154376;
  *(_DWORD *)(v28 + 220) = Biome::HEIGHTS_SWAMPLAND;
  *(_DWORD *)(v28 + 224) = dword_280956C;
  *(_DWORD *)(v28 + 196) = 1061997773;
  *(_DWORD *)(v28 + 200) = 1056964608;
  v29 = (void *)(v380 - 12);
  if ( (int *)(v380 - 12) != &dword_28898C0 )
    v255 = (unsigned int *)(v380 - 4);
        v256 = __ldrex(v255);
      while ( __strex(v256 - 1, v255) );
      v256 = (*v255)--;
    if ( v256 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = operator new(0x118u);
  v387 = 0;
  Biome::Biome((int)v30, 7, 12, &v387);
  if ( v387 )
    (*(void (**)(void))(*(_DWORD *)v387 + 12))();
  *(_DWORD *)v30 = &off_2703C7C;
  v31 = *(_QWORD *)((char *)v30 + 140);
  if ( HIDWORD(v31) != (_DWORD)v31 )
    v32 = (MobSpawnerData *)v31;
    do
      MobSpawnerData::~MobSpawnerData(v32);
      v32 = (MobSpawnerData *)((char *)v32 + 120);
    while ( (MobSpawnerData *)HIDWORD(v31) != v32 );
  *((_DWORD *)v30 + 36) = v31;
  v33 = Biome::river;
  Biome::river = v30;
  if ( v33 )
    (*(void (**)(void))(*(_DWORD *)v33 + 12))();
    v30 = (void *)Biome::river;
  v34 = (**(int (__fastcall ***)(void *, signed int))v30)(v30, 255);
  sub_21E94B4((void **)&v379, "River");
  EntityInteraction::setInteractText((int *)(v34 + 176), &v379);
  *(_DWORD *)(v34 + 220) = Biome::HEIGHTS_RIVER;
  *(_DWORD *)(v34 + 224) = dword_2809514;
  v35 = (void *)(v379 - 12);
  if ( (int *)(v379 - 12) != &dword_28898C0 )
    v257 = (unsigned int *)(v379 - 4);
        v258 = __ldrex(v257);
      while ( __strex(v258 - 1, v257) );
      v258 = (*v257)--;
    if ( v258 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  v36 = (HellBiome *)operator new(0x154u);
  HellBiome::HellBiome(v36, 8);
  v37 = Biome::hell;
  Biome::hell = v36;
  if ( v37 )
    (*(void (**)(void))(*(_DWORD *)v37 + 12))();
    v36 = (HellBiome *)Biome::hell;
  v38 = (**(int (__fastcall ***)(HellBiome *, signed int))v36)(v36, 16711680);
  sub_21E94B4((void **)&v378, "Hell");
  EntityInteraction::setInteractText((int *)(v38 + 176), &v378);
  *(_BYTE *)(v38 + 260) = 0;
  *(_DWORD *)(v38 + 196) = 0x40000000;
  *(_DWORD *)(v38 + 200) = 0;
  v39 = (void *)(v378 - 12);
  if ( (int *)(v378 - 12) != &dword_28898C0 )
    v259 = (unsigned int *)(v378 - 4);
        v260 = __ldrex(v259);
      while ( __strex(v260 - 1, v259) );
      v260 = (*v259)--;
    if ( v260 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  v40 = (TheEndBiome *)operator new(0x154u);
  TheEndBiome::TheEndBiome(v40, 9);
  v41 = Biome::sky;
  Biome::sky = v40;
  if ( v41 )
    (*(void (**)(void))(*(_DWORD *)v41 + 12))();
    v40 = (TheEndBiome *)Biome::sky;
  v42 = (**(int (__fastcall ***)(TheEndBiome *))v40)(v40);
  sub_21E94B4((void **)&v377, "Sky");
  EntityInteraction::setInteractText((int *)(v42 + 176), &v377);
  *(_BYTE *)(v42 + 260) = 0;
  v43 = (void *)(v377 - 12);
  if ( (int *)(v377 - 12) != &dword_28898C0 )
    v261 = (unsigned int *)(v377 - 4);
        v262 = __ldrex(v261);
      while ( __strex(v262 - 1, v261) );
      v262 = (*v261)--;
    if ( v262 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  v44 = (OceanBiome *)operator new(0x154u);
  OceanBiome::OceanBiome(v44, 10);
  v45 = Biome::frozenOcean;
  Biome::frozenOcean = v44;
  if ( v45 )
    (*(void (**)(void))(*(_DWORD *)v45 + 12))();
    v44 = (OceanBiome *)Biome::frozenOcean;
  v46 = (**(int (__fastcall ***)(OceanBiome *))v44)(v44);
  sub_21E94B4((void **)&v376, "FrozenOcean");
  EntityInteraction::setInteractText((int *)(v46 + 176), &v376);
  v47 = Biome::setSnowAccumulation((Biome *)v46, 0.125, 0.25);
  *((_DWORD *)v47 + 55) = Biome::HEIGHTS_OCEAN;
  *((_DWORD *)v47 + 56) = dword_280951C;
  *((_DWORD *)v47 + 49) = 0;
  *((_DWORD *)v47 + 50) = 1056964608;
  v48 = (void *)(v376 - 12);
  if ( (int *)(v376 - 12) != &dword_28898C0 )
    v263 = (unsigned int *)(v376 - 4);
        v264 = __ldrex(v263);
      while ( __strex(v264 - 1, v263) );
      v264 = (*v263)--;
    if ( v264 <= 0 )
      j_j_j_j__ZdlPv_9(v48);
  v49 = operator new(0x118u);
  v388 = 0;
  Biome::Biome((int)v49, 11, 12, &v388);
  if ( v388 )
    (*(void (**)(void))(*(_DWORD *)v388 + 12))();
  *(_DWORD *)v49 = &off_2703C7C;
  v50 = *(_QWORD *)((char *)v49 + 140);
  if ( HIDWORD(v50) != (_DWORD)v50 )
    v51 = (MobSpawnerData *)v50;
      MobSpawnerData::~MobSpawnerData(v51);
      v51 = (MobSpawnerData *)((char *)v51 + 120);
    while ( (MobSpawnerData *)HIDWORD(v50) != v51 );
  *((_DWORD *)v49 + 36) = v50;
  v52 = Biome::frozenRiver;
  Biome::frozenRiver = v49;
  if ( v52 )
    (*(void (**)(void))(*(_DWORD *)v52 + 12))();
    v49 = (void *)Biome::frozenRiver;
  v53 = (**(int (__fastcall ***)(void *))v49)(v49);
  sub_21E94B4((void **)&v375, "FrozenRiver");
  EntityInteraction::setInteractText((int *)(v53 + 176), &v375);
  v54 = Biome::setSnowAccumulation((Biome *)v53, 0.125, 0.25);
  *((_DWORD *)v54 + 55) = Biome::HEIGHTS_RIVER;
  *((_DWORD *)v54 + 56) = dword_2809514;
  *((_DWORD *)v54 + 49) = 0;
  *((_DWORD *)v54 + 50) = 1056964608;
  v55 = (void *)(v375 - 12);
  if ( (int *)(v375 - 12) != &dword_28898C0 )
    v265 = (unsigned int *)(v375 - 4);
        v266 = __ldrex(v265);
      while ( __strex(v266 - 1, v265) );
      v266 = (*v265)--;
    if ( v266 <= 0 )
      j_j_j_j__ZdlPv_9(v55);
  v56 = (IceBiome *)operator new(0x11Cu);
  IceBiome::IceBiome(v56, 12, 0);
  v57 = Biome::iceFlats;
  Biome::iceFlats = v56;
  if ( v57 )
    (*(void (**)(void))(*(_DWORD *)v57 + 12))();
    v56 = (IceBiome *)Biome::iceFlats;
  v58 = (**(int (__fastcall ***)(IceBiome *, signed int))v56)(v56, 0xFFFFFF);
  sub_21E94B4((void **)&v374, "Ice Plains");
  EntityInteraction::setInteractText((int *)(v58 + 176), &v374);
  v59 = Biome::setSnowAccumulation((Biome *)v58, 0.25, 1.0);
  *((_DWORD *)v59 + 49) = 0;
  *((_DWORD *)v59 + 50) = 1056964608;
  *((_DWORD *)v59 + 55) = Biome::HEIGHTS_LOWLANDS;
  *((_DWORD *)v59 + 56) = dword_280952C;
  v60 = (void *)(v374 - 12);
  if ( (int *)(v374 - 12) != &dword_28898C0 )
    v267 = (unsigned int *)(v374 - 4);
        v268 = __ldrex(v267);
      while ( __strex(v268 - 1, v267) );
      v268 = (*v267)--;
    if ( v268 <= 0 )
      j_j_j_j__ZdlPv_9(v60);
  v61 = (IceBiome *)operator new(0x11Cu);
  IceBiome::IceBiome(v61, 13, 0);
  v62 = Biome::iceMountains;
  Biome::iceMountains = v61;
  if ( v62 )
    (*(void (**)(void))(*(_DWORD *)v62 + 12))();
    v61 = (IceBiome *)Biome::iceMountains;
  v63 = (**(int (__fastcall ***)(IceBiome *))v61)(v61);
  sub_21E94B4((void **)&v373, "Ice Mountains");
  EntityInteraction::setInteractText((int *)(v63 + 176), &v373);
  v64 = Biome::setSnowAccumulation((Biome *)v63, 0.375, 1.5);
  *((_DWORD *)v64 + 55) = Biome::HEIGHTS_MOUNTAINS;
  *((_DWORD *)v64 + 56) = dword_280953C;
  *((_DWORD *)v64 + 49) = 0;
  *((_DWORD *)v64 + 50) = 1056964608;
  v65 = (void *)(v373 - 12);
  if ( (int *)(v373 - 12) != &dword_28898C0 )
    v269 = (unsigned int *)(v373 - 4);
        v270 = __ldrex(v269);
      while ( __strex(v270 - 1, v269) );
      v270 = (*v269)--;
    if ( v270 <= 0 )
      j_j_j_j__ZdlPv_9(v65);
  v66 = (MushroomIslandBiome *)operator new(0x118u);
  MushroomIslandBiome::MushroomIslandBiome(v66, 14);
  v67 = Biome::mushroomIsland;
  Biome::mushroomIsland = v66;
  if ( v67 )
    (*(void (**)(void))(*(_DWORD *)v67 + 12))();
    v66 = (MushroomIslandBiome *)Biome::mushroomIsland;
  v68 = (**(int (__fastcall ***)(MushroomIslandBiome *, signed int))v66)(v66, 16711935);
  sub_21E94B4((void **)&v372, "MushroomIsland");
  EntityInteraction::setInteractText((int *)(v68 + 176), &v372);
  *(_DWORD *)(v68 + 196) = 1063675494;
  *(_DWORD *)(v68 + 200) = 1065353216;
  *(_DWORD *)(v68 + 220) = Biome::HEIGHTS_MUSHROOM;
  *(_DWORD *)(v68 + 224) = dword_2809564;
  v69 = (void *)(v372 - 12);
  if ( (int *)(v372 - 12) != &dword_28898C0 )
    v271 = (unsigned int *)(v372 - 4);
        v272 = __ldrex(v271);
      while ( __strex(v272 - 1, v271) );
      v272 = (*v271)--;
    if ( v272 <= 0 )
      j_j_j_j__ZdlPv_9(v69);
  v70 = (MushroomIslandBiome *)operator new(0x118u);
  MushroomIslandBiome::MushroomIslandBiome(v70, 15);
  v71 = Biome::mushroomIslandShore;
  Biome::mushroomIslandShore = v70;
  if ( v71 )
    (*(void (**)(void))(*(_DWORD *)v71 + 12))();
    v70 = (MushroomIslandBiome *)Biome::mushroomIslandShore;
  v72 = (**(int (__fastcall ***)(MushroomIslandBiome *))v70)(v70);
  sub_21E94B4((void **)&v371, "MushroomIslandShore");
  EntityInteraction::setInteractText((int *)(v72 + 176), &v371);
  *(_DWORD *)(v72 + 196) = 1063675494;
  *(_DWORD *)(v72 + 200) = 1065353216;
  *(_DWORD *)(v72 + 220) = Biome::HEIGHTS_BEACH;
  *(_DWORD *)(v72 + 224) = dword_2809554;
  v73 = (void *)(v371 - 12);
  if ( (int *)(v371 - 12) != &dword_28898C0 )
    v273 = (unsigned int *)(v371 - 4);
        v274 = __ldrex(v273);
      while ( __strex(v274 - 1, v273) );
      v274 = (*v273)--;
    if ( v274 <= 0 )
      j_j_j_j__ZdlPv_9(v73);
  v74 = (BeachBiome *)operator new(0x118u);
  BeachBiome::BeachBiome(v74, 16);
  v75 = Biome::beaches;
  Biome::beaches = v74;
  if ( v75 )
    (*(void (**)(void))(*(_DWORD *)v75 + 12))();
    v74 = (BeachBiome *)Biome::beaches;
  v76 = (**(int (__fastcall ***)(BeachBiome *))v74)(v74);
  sub_21E94B4((void **)&v370, "Beach");
  EntityInteraction::setInteractText((int *)(v76 + 176), &v370);
  *(_DWORD *)(v76 + 196) = 1061997773;
  *(_DWORD *)(v76 + 200) = 1053609165;
  *(_DWORD *)(v76 + 220) = Biome::HEIGHTS_BEACH;
  *(_DWORD *)(v76 + 224) = dword_2809554;
  v77 = (void *)(v370 - 12);
  if ( (int *)(v370 - 12) != &dword_28898C0 )
    v275 = (unsigned int *)(v370 - 4);
        v276 = __ldrex(v275);
      while ( __strex(v276 - 1, v275) );
      v276 = (*v275)--;
    if ( v276 <= 0 )
      j_j_j_j__ZdlPv_9(v77);
  v78 = (DesertBiome *)operator new(0x118u);
  DesertBiome::DesertBiome(v78, 17);
  v79 = Biome::desertHills;
  Biome::desertHills = v78;
  if ( v79 )
    (*(void (**)(void))(*(_DWORD *)v79 + 12))();
    v78 = (DesertBiome *)Biome::desertHills;
  v80 = (**(int (__fastcall ***)(DesertBiome *))v78)(v78);
  sub_21E94B4((void **)&v369, "DesertHills");
  EntityInteraction::setInteractText((int *)(v80 + 176), &v369);
  *(_BYTE *)(v80 + 260) = 0;
  *(_DWORD *)(v80 + 196) = 0x40000000;
  *(_DWORD *)(v80 + 200) = 0;
  *(_DWORD *)(v80 + 220) = Biome::HEIGHTS_MOUNTAINS;
  *(_DWORD *)(v80 + 224) = dword_280953C;
  v81 = (void *)(v369 - 12);
  if ( (int *)(v369 - 12) != &dword_28898C0 )
    v277 = (unsigned int *)(v369 - 4);
        v278 = __ldrex(v277);
      while ( __strex(v278 - 1, v277) );
      v278 = (*v277)--;
    if ( v278 <= 0 )
      j_j_j_j__ZdlPv_9(v81);
  v82 = (ForestBiome *)operator new(0x11Cu);
  ForestBiome::ForestBiome(v82, 18, 0);
  v83 = Biome::forestHills;
  Biome::forestHills = v82;
  if ( v83 )
    (*(void (**)(void))(*(_DWORD *)v83 + 12))();
    v82 = (ForestBiome *)Biome::forestHills;
  v84 = (**(int (__fastcall ***)(ForestBiome *))v82)(v82);
  sub_21E94B4((void **)&v368, "ForestHills");
  EntityInteraction::setInteractText((int *)(v84 + 176), &v368);
  *(_DWORD *)(v84 + 220) = Biome::HEIGHTS_MOUNTAINS;
  *(_DWORD *)(v84 + 224) = dword_280953C;
  v85 = (void *)(v368 - 12);
  if ( (int *)(v368 - 12) != &dword_28898C0 )
    v279 = (unsigned int *)(v368 - 4);
        v280 = __ldrex(v279);
      while ( __strex(v280 - 1, v279) );
      v280 = (*v279)--;
    if ( v280 <= 0 )
      j_j_j_j__ZdlPv_9(v85);
  v86 = (TaigaBiome *)operator new(0x11Cu);
  TaigaBiome::TaigaBiome(v86, 19, 0);
  v87 = Biome::taigaHills;
  Biome::taigaHills = v86;
  if ( v87 )
    (*(void (**)(void))(*(_DWORD *)v87 + 12))();
    v86 = (TaigaBiome *)Biome::taigaHills;
  v88 = (**(int (__fastcall ***)(TaigaBiome *))v86)(v86);
  sub_21E94B4((void **)&v367, "TaigaHills");
  EntityInteraction::setInteractText((int *)(v88 + 176), &v367);
  *(_DWORD *)(v88 + 192) = 5159473;
  *(_DWORD *)(v88 + 204) = 0;
  *(_DWORD *)(v88 + 212) = 0;
  *(_DWORD *)(v88 + 216) = 1048576000;
  *(_DWORD *)(v88 + 196) = 1048576000;
  *(_DWORD *)(v88 + 200) = 1061997773;
  *(_DWORD *)(v88 + 220) = Biome::HEIGHTS_MOUNTAINS;
  *(_DWORD *)(v88 + 224) = dword_280953C;
  v89 = (void *)(v367 - 12);
  if ( (int *)(v367 - 12) != &dword_28898C0 )
    v281 = (unsigned int *)(v367 - 4);
        v282 = __ldrex(v281);
      while ( __strex(v282 - 1, v281) );
      v282 = (*v281)--;
    if ( v282 <= 0 )
      j_j_j_j__ZdlPv_9(v89);
  v90 = (ExtremeHillsBiome *)operator new(0x120u);
  ExtremeHillsBiome::ExtremeHillsBiome(v90, 20, 1);
  v91 = Biome::smallerExtremeHills;
  Biome::smallerExtremeHills = v90;
  if ( v91 )
    (*(void (**)(void))(*(_DWORD *)v91 + 12))();
    v90 = (ExtremeHillsBiome *)Biome::smallerExtremeHills;
  v92 = (**(int (__fastcall ***)(ExtremeHillsBiome *))v90)(v90);
  sub_21E94B4((void **)&v366, "Extreme Hills Edge");
  EntityInteraction::setInteractText((int *)(v92 + 176), &v366);
  *(_DWORD *)(v92 + 204) = 0;
  *(_DWORD *)(v92 + 212) = 0;
  _R0 = &Biome::defaultTotalEnemyWeight;
  *(_DWORD *)(v92 + 216) = 1048576000;
  __asm
    VLDR            S0, =0.8
    VLDR            S2, [R0,#0x48]
    VLDR            S4, [R0,#0x4C]
    VMUL.F32        S2, S2, S0
    VMUL.F32        S0, S4, S0
    VSTR            S2, [R4,#0xDC]
    VSTR            S0, [R4,#0xE0]
  *(_DWORD *)(v92 + 196) = 1045220557;
  *(_DWORD *)(v92 + 200) = 1050253722;
  v98 = (void *)(v366 - 12);
  if ( (int *)(v366 - 12) != &dword_28898C0 )
    v283 = (unsigned int *)(v366 - 4);
        v284 = __ldrex(v283);
      while ( __strex(v284 - 1, v283) );
      v284 = (*v283)--;
    if ( v284 <= 0 )
      j_j_j_j__ZdlPv_9(v98);
  v99 = (JungleBiome *)operator new(0x11Cu);
  JungleBiome::JungleBiome(v99, 21, 0);
  v100 = Biome::jungle;
  Biome::jungle = v99;
  if ( v100 )
    (*(void (**)(void))(*(_DWORD *)v100 + 12))();
    v99 = (JungleBiome *)Biome::jungle;
  v101 = (**(int (__fastcall ***)(JungleBiome *, signed int))v99)(v99, 5470985);
  sub_21E94B4((void **)&v365, "Jungle");
  EntityInteraction::setInteractText((int *)(v101 + 176), &v365);
  *(_DWORD *)(v101 + 192) = 5470985;
  *(_DWORD *)(v101 + 196) = 1064514355;
  *(_DWORD *)(v101 + 200) = 1063675494;
  v102 = (void *)(v365 - 12);
  if ( (int *)(v365 - 12) != &dword_28898C0 )
    v285 = (unsigned int *)(v365 - 4);
        v286 = __ldrex(v285);
      while ( __strex(v286 - 1, v285) );
      v286 = (*v285)--;
    if ( v286 <= 0 )
      j_j_j_j__ZdlPv_9(v102);
  v103 = (JungleBiome *)operator new(0x11Cu);
  JungleBiome::JungleBiome(v103, 22, 0);
  v104 = Biome::jungleHills;
  Biome::jungleHills = v103;
  if ( v104 )
    (*(void (**)(void))(*(_DWORD *)v104 + 12))();
    v103 = (JungleBiome *)Biome::jungleHills;
  v105 = (**(int (__fastcall ***)(JungleBiome *))v103)(v103);
  sub_21E94B4((void **)&v364, "JungleHills");
  EntityInteraction::setInteractText((int *)(v105 + 176), &v364);
  *(_DWORD *)(v105 + 192) = 5470985;
  *(_DWORD *)(v105 + 196) = 1064514355;
  *(_DWORD *)(v105 + 200) = 1063675494;
  *(_DWORD *)(v105 + 220) = Biome::HEIGHTS_MOUNTAINS;
  *(_DWORD *)(v105 + 224) = dword_280953C;
  v106 = (void *)(v364 - 12);
  if ( (int *)(v364 - 12) != &dword_28898C0 )
    v287 = (unsigned int *)(v364 - 4);
        v288 = __ldrex(v287);
      while ( __strex(v288 - 1, v287) );
      v288 = (*v287)--;
    if ( v288 <= 0 )
      j_j_j_j__ZdlPv_9(v106);
  v107 = (JungleBiome *)operator new(0x11Cu);
  JungleBiome::JungleBiome(v107, 23, 1);
  v108 = Biome::jungleEdge;
  Biome::jungleEdge = v107;
  if ( v108 )
    (*(void (**)(void))(*(_DWORD *)v108 + 12))();
    v107 = (JungleBiome *)Biome::jungleEdge;
  v109 = (**(int (__fastcall ***)(JungleBiome *))v107)(v107);
  sub_21E94B4((void **)&v363, "JungleEdge");
  EntityInteraction::setInteractText((int *)(v109 + 176), &v363);
  v110 = v109 + 192;
  *(_DWORD *)v110 = 5470985;
  *(_DWORD *)(v110 + 4) = 1064514355;
  *(_DWORD *)(v110 + 8) = 1061997773;
  v111 = (void *)(v363 - 12);
  if ( (int *)(v363 - 12) != &dword_28898C0 )
    v289 = (unsigned int *)(v363 - 4);
        v290 = __ldrex(v289);
      while ( __strex(v290 - 1, v289) );
      v290 = (*v289)--;
    if ( v290 <= 0 )
      j_j_j_j__ZdlPv_9(v111);
  v112 = (OceanBiome *)operator new(0x154u);
  OceanBiome::OceanBiome(v112, 24);
  v113 = Biome::deepOcean;
  Biome::deepOcean = v112;
  if ( v113 )
    (*(void (**)(void))(*(_DWORD *)v113 + 12))();
    v112 = (OceanBiome *)Biome::deepOcean;
  v114 = (**(int (__fastcall ***)(OceanBiome *, signed int))v112)(v112, 48);
  sub_21E94B4((void **)&v362, "Deep Ocean");
  EntityInteraction::setInteractText((int *)(v114 + 176), &v362);
  *(_DWORD *)(v114 + 220) = Biome::HEIGHTS_DEEP_OCEAN;
  *(_DWORD *)(v114 + 224) = dword_2809524;
  v115 = (void *)(v362 - 12);
  if ( (int *)(v362 - 12) != &dword_28898C0 )
    v291 = (unsigned int *)(v362 - 4);
        v292 = __ldrex(v291);
      while ( __strex(v292 - 1, v291) );
      v292 = (*v291)--;
    if ( v292 <= 0 )
      j_j_j_j__ZdlPv_9(v115);
  v116 = (StoneBeachBiome *)operator new(0x118u);
  StoneBeachBiome::StoneBeachBiome(v116, 25);
  v117 = Biome::stoneBeach;
  Biome::stoneBeach = v116;
  if ( v117 )
    (*(void (**)(void))(*(_DWORD *)v117 + 12))();
    v116 = (StoneBeachBiome *)Biome::stoneBeach;
  v118 = (**(int (__fastcall ***)(StoneBeachBiome *))v116)(v116);
  sub_21E94B4((void **)&v361, "Stone Beach");
  EntityInteraction::setInteractText((int *)(v118 + 176), &v361);
  *(_DWORD *)(v118 + 204) = 0;
  *(_DWORD *)(v118 + 212) = 0;
  *(_DWORD *)(v118 + 216) = 1048576000;
  *(_DWORD *)(v118 + 196) = 1045220557;
  *(_DWORD *)(v118 + 200) = 1050253722;
  *(_DWORD *)(v118 + 220) = Biome::HEIGHTS_STONE_BEACH;
  *(_DWORD *)(v118 + 224) = dword_280955C;
  v119 = (void *)(v361 - 12);
  if ( (int *)(v361 - 12) != &dword_28898C0 )
    v293 = (unsigned int *)(v361 - 4);
        v294 = __ldrex(v293);
      while ( __strex(v294 - 1, v293) );
      v294 = (*v293)--;
    if ( v294 <= 0 )
      j_j_j_j__ZdlPv_9(v119);
  v120 = (BeachBiome *)operator new(0x118u);
  BeachBiome::BeachBiome(v120, 26);
  v121 = Biome::coldBeach;
  Biome::coldBeach = v120;
  if ( v121 )
    (*(void (**)(void))(*(_DWORD *)v121 + 12))();
    v120 = (BeachBiome *)Biome::coldBeach;
  v122 = (**(int (__fastcall ***)(BeachBiome *))v120)(v120);
  sub_21E94B4((void **)&v360, "Cold Beach");
  EntityInteraction::setInteractText((int *)(v122 + 176), &v360);
  *(_DWORD *)(v122 + 196) = 1028443341;
  *(_DWORD *)(v122 + 200) = 1050253722;
  *(_DWORD *)(v122 + 220) = Biome::HEIGHTS_BEACH;
  *(_DWORD *)(v122 + 224) = dword_2809554;
  Biome::setSnowAccumulation((Biome *)v122, 0.125, 0.25);
  v123 = (void *)(v360 - 12);
  if ( (int *)(v360 - 12) != &dword_28898C0 )
    v295 = (unsigned int *)(v360 - 4);
        v296 = __ldrex(v295);
      while ( __strex(v296 - 1, v295) );
      v296 = (*v295)--;
    if ( v296 <= 0 )
      j_j_j_j__ZdlPv_9(v123);
  v124 = operator new(0x11Cu);
  ForestBiome::ForestBiome((ForestBiome *)v124, 27, 2);
  v125 = Biome::birchForest;
  Biome::birchForest = v124;
  if ( v125 )
    (*(void (**)(void))(*(_DWORD *)v125 + 12))();
    v124 = (void *)Biome::birchForest;
  sub_21E94B4((void **)&v359, "Birch Forest");
  EntityInteraction::setInteractText((int *)v124 + 44, &v359);
  (**(void (__fastcall ***)(void *))v124)(v124);
  v126 = (void *)(v359 - 12);
  if ( (int *)(v359 - 12) != &dword_28898C0 )
    v297 = (unsigned int *)(v359 - 4);
        v298 = __ldrex(v297);
      while ( __strex(v298 - 1, v297) );
      v298 = (*v297)--;
    if ( v298 <= 0 )
      j_j_j_j__ZdlPv_9(v126);
  v127 = operator new(0x11Cu);
  ForestBiome::ForestBiome((ForestBiome *)v127, 28, 2);
  v128 = Biome::birchForestHills;
  Biome::birchForestHills = v127;
  if ( v128 )
    (*(void (**)(void))(*(_DWORD *)v128 + 12))();
    v127 = (void *)Biome::birchForestHills;
  sub_21E94B4((void **)&v358, "Birch Forest Hills");
  EntityInteraction::setInteractText((int *)v127 + 44, &v358);
  v129 = (**(int (__fastcall ***)(void *))v127)(v127);
  *(_DWORD *)(v129 + 220) = Biome::HEIGHTS_MOUNTAINS;
  *(_DWORD *)(v129 + 224) = dword_280953C;
  v130 = (void *)(v358 - 12);
  if ( (int *)(v358 - 12) != &dword_28898C0 )
    v299 = (unsigned int *)(v358 - 4);
        v300 = __ldrex(v299);
      while ( __strex(v300 - 1, v299) );
      v300 = (*v299)--;
    if ( v300 <= 0 )
      j_j_j_j__ZdlPv_9(v130);
  v131 = (ForestBiome *)operator new(0x11Cu);
  ForestBiome::ForestBiome(v131, 29, 3);
  v132 = Biome::roofedForest;
  Biome::roofedForest = v131;
  if ( v132 )
    (*(void (**)(void))(*(_DWORD *)v132 + 12))();
    v131 = (ForestBiome *)Biome::roofedForest;
  v133 = (**(int (__fastcall ***)(ForestBiome *))v131)(v131);
  sub_21E94B4((void **)&v357, "Roofed Forest");
  EntityInteraction::setInteractText((int *)(v133 + 176), &v357);
  v134 = (void *)(v357 - 12);
  if ( (int *)(v357 - 12) != &dword_28898C0 )
    v301 = (unsigned int *)(v357 - 4);
        v302 = __ldrex(v301);
      while ( __strex(v302 - 1, v301) );
      v302 = (*v301)--;
    if ( v302 <= 0 )
      j_j_j_j__ZdlPv_9(v134);
  v135 = (TaigaBiome *)operator new(0x11Cu);
  TaigaBiome::TaigaBiome(v135, 30, 0);
  v136 = Biome::taigaCold;
  Biome::taigaCold = v135;
  if ( v136 )
    (*(void (**)(void))(*(_DWORD *)v136 + 12))();
    v135 = (TaigaBiome *)Biome::taigaCold;
  v137 = (**(int (__fastcall ***)(TaigaBiome *))v135)(v135);
  sub_21E94B4((void **)&v356, "Cold Taiga");
  EntityInteraction::setInteractText((int *)(v137 + 176), &v356);
  *(_DWORD *)(v137 + 192) = 5159473;
  v138 = Biome::setSnowAccumulation((Biome *)v137, 0.125, 0.5);
  *((_DWORD *)v138 + 49) = -1090519040;
  *((_DWORD *)v138 + 50) = 1053609165;
  *((_DWORD *)v138 + 55) = Biome::HEIGHTS_TAIGA;
  *((_DWORD *)v138 + 56) = dword_2809534;
  *((_DWORD *)v138 + 46) = 0xFFFFFF;
  v139 = (void *)(v356 - 12);
  if ( (int *)(v356 - 12) != &dword_28898C0 )
    v303 = (unsigned int *)(v356 - 4);
        v304 = __ldrex(v303);
      while ( __strex(v304 - 1, v303) );
      v304 = (*v303)--;
    if ( v304 <= 0 )
      j_j_j_j__ZdlPv_9(v139);
  v140 = (TaigaBiome *)operator new(0x11Cu);
  TaigaBiome::TaigaBiome(v140, 31, 0);
  v141 = Biome::taigaColdHills;
  Biome::taigaColdHills = v140;
  if ( v141 )
    (*(void (**)(void))(*(_DWORD *)v141 + 12))();
    v140 = (TaigaBiome *)Biome::taigaColdHills;
  v142 = (**(int (__fastcall ***)(TaigaBiome *))v140)(v140);
  sub_21E94B4((void **)&v355, "Cold Taiga Hills");
  EntityInteraction::setInteractText((int *)(v142 + 176), &v355);
  *(_DWORD *)(v142 + 192) = 5159473;
  v143 = Biome::setSnowAccumulation((Biome *)v142, 0.125, 0.5);
  *((_DWORD *)v143 + 49) = -1090519040;
  *((_DWORD *)v143 + 50) = 1053609165;
  *((_DWORD *)v143 + 55) = Biome::HEIGHTS_MOUNTAINS;
  *((_DWORD *)v143 + 56) = dword_280953C;
  *((_DWORD *)v143 + 46) = 0xFFFFFF;
  v144 = (void *)(v355 - 12);
  if ( (int *)(v355 - 12) != &dword_28898C0 )
    v305 = (unsigned int *)(v355 - 4);
        v306 = __ldrex(v305);
      while ( __strex(v306 - 1, v305) );
      v306 = (*v305)--;
    if ( v306 <= 0 )
      j_j_j_j__ZdlPv_9(v144);
  v145 = (TaigaBiome *)operator new(0x11Cu);
  TaigaBiome::TaigaBiome(v145, 32, 1);
  v146 = Biome::redwoodTaiga;
  Biome::redwoodTaiga = v145;
  if ( v146 )
    (*(void (**)(void))(*(_DWORD *)v146 + 12))();
    v145 = (TaigaBiome *)Biome::redwoodTaiga;
  v147 = (**(int (__fastcall ***)(TaigaBiome *))v145)(v145);
  sub_21E94B4((void **)&v354, "Mega Taiga");
  EntityInteraction::setInteractText((int *)(v147 + 176), &v354);
  *(_DWORD *)(v147 + 192) = 5159473;
  *(_DWORD *)(v147 + 196) = 1050253722;
  *(_DWORD *)(v147 + 200) = 1061997773;
  *(_DWORD *)(v147 + 220) = Biome::HEIGHTS_TAIGA;
  *(_DWORD *)(v147 + 224) = dword_2809534;
  v148 = (void *)(v354 - 12);
  if ( (int *)(v354 - 12) != &dword_28898C0 )
    v307 = (unsigned int *)(v354 - 4);
        v308 = __ldrex(v307);
      while ( __strex(v308 - 1, v307) );
      v308 = (*v307)--;
    if ( v308 <= 0 )
      j_j_j_j__ZdlPv_9(v148);
  v149 = (TaigaBiome *)operator new(0x11Cu);
  TaigaBiome::TaigaBiome(v149, 33, 1);
  v150 = Biome::redwoodTaigaHills;
  Biome::redwoodTaigaHills = v149;
  if ( v150 )
    (*(void (**)(void))(*(_DWORD *)v150 + 12))();
    v149 = (TaigaBiome *)Biome::redwoodTaigaHills;
  v151 = (**(int (__fastcall ***)(TaigaBiome *))v149)(v149);
  sub_21E94B4((void **)&v353, "Mega Taiga Hills");
  EntityInteraction::setInteractText((int *)(v151 + 176), &v353);
  *(_DWORD *)(v151 + 192) = 5159473;
  *(_DWORD *)(v151 + 196) = 1050253722;
  *(_DWORD *)(v151 + 200) = 1061997773;
  *(_DWORD *)(v151 + 220) = Biome::HEIGHTS_MOUNTAINS;
  *(_DWORD *)(v151 + 224) = dword_280953C;
  v152 = (void *)(v353 - 12);
  if ( (int *)(v353 - 12) != &dword_28898C0 )
    v309 = (unsigned int *)(v353 - 4);
        v310 = __ldrex(v309);
      while ( __strex(v310 - 1, v309) );
      v310 = (*v309)--;
    if ( v310 <= 0 )
      j_j_j_j__ZdlPv_9(v152);
  v153 = (ExtremeHillsBiome *)operator new(0x120u);
  ExtremeHillsBiome::ExtremeHillsBiome(v153, 34, 1);
  v154 = Biome::extremeHillsWithTrees;
  Biome::extremeHillsWithTrees = v153;
  if ( v154 )
    (*(void (**)(void))(*(_DWORD *)v154 + 12))();
    v153 = (ExtremeHillsBiome *)Biome::extremeHillsWithTrees;
  v155 = (**(int (__fastcall ***)(ExtremeHillsBiome *))v153)(v153);
  sub_21E94B4((void **)&v352, "Extreme Hills+");
  EntityInteraction::setInteractText((int *)(v155 + 176), &v352);
  *(_DWORD *)(v155 + 220) = Biome::HEIGHTS_EXTREME;
  *(_DWORD *)(v155 + 224) = dword_280954C;
  *(_DWORD *)(v155 + 196) = 1045220557;
  *(_DWORD *)(v155 + 200) = 1050253722;
  v156 = (void *)(v352 - 12);
  if ( (int *)(v352 - 12) != &dword_28898C0 )
    v311 = (unsigned int *)(v352 - 4);
        v312 = __ldrex(v311);
      while ( __strex(v312 - 1, v311) );
      v312 = (*v311)--;
    if ( v312 <= 0 )
      j_j_j_j__ZdlPv_9(v156);
  v157 = (SavannaBiome *)operator new(0x118u);
  SavannaBiome::SavannaBiome(v157, 35);
  v158 = Biome::savanna;
  Biome::savanna = v157;
  if ( v158 )
    (*(void (**)(void))(*(_DWORD *)v158 + 12))();
    v157 = (SavannaBiome *)Biome::savanna;
  v159 = (**(int (__fastcall ***)(SavannaBiome *))v157)(v157);
  sub_21E94B4((void **)&v351, "Savanna");
  EntityInteraction::setInteractText((int *)(v159 + 176), &v351);
  *(_DWORD *)(v159 + 196) = 1067030938;
  *(_DWORD *)(v159 + 200) = 0;
  *(_BYTE *)(v159 + 260) = 0;
  *(_DWORD *)(v159 + 220) = Biome::HEIGHTS_LOWLANDS;
  *(_DWORD *)(v159 + 224) = dword_280952C;
  v160 = (void *)(v351 - 12);
  if ( (int *)(v351 - 12) != &dword_28898C0 )
    v313 = (unsigned int *)(v351 - 4);
        v314 = __ldrex(v313);
      while ( __strex(v314 - 1, v313) );
      v314 = (*v313)--;
    if ( v314 <= 0 )
      j_j_j_j__ZdlPv_9(v160);
  v161 = (SavannaBiome *)operator new(0x118u);
  SavannaBiome::SavannaBiome(v161, 36);
  v162 = Biome::savannaRock;
  Biome::savannaRock = v161;
  if ( v162 )
    (*(void (**)(void))(*(_DWORD *)v162 + 12))();
    v161 = (SavannaBiome *)Biome::savannaRock;
  v163 = (**(int (__fastcall ***)(SavannaBiome *))v161)(v161);
  sub_21E94B4((void **)&v350, "Savanna Plateau");
  EntityInteraction::setInteractText((int *)(v163 + 176), &v350);
  *(_DWORD *)(v163 + 196) = 1065353216;
  *(_DWORD *)(v163 + 200) = 0;
  *(_BYTE *)(v163 + 260) = 0;
  *(_DWORD *)(v163 + 220) = Biome::HEIGHTS_HIGHLANDS;
  *(_DWORD *)(v163 + 224) = dword_2809544;
  v164 = (void *)(v350 - 12);
  if ( (int *)(v350 - 12) != &dword_28898C0 )
    v315 = (unsigned int *)(v350 - 4);
        v316 = __ldrex(v315);
      while ( __strex(v316 - 1, v315) );
      v316 = (*v315)--;
    if ( v316 <= 0 )
      j_j_j_j__ZdlPv_9(v164);
  v165 = (MesaBiome *)operator new(0x168u);
  MesaBiome::MesaBiome(v165, 37, 0, 0);
  v166 = Biome::mesa;
  Biome::mesa = v165;
  if ( v166 )
    (*(void (**)(void))(*(_DWORD *)v166 + 12))();
    v165 = (MesaBiome *)Biome::mesa;
  v167 = (**(int (__fastcall ***)(MesaBiome *))v165)(v165);
  sub_21E94B4((void **)&v349, "Mesa");
  EntityInteraction::setInteractText((int *)(v167 + 176), &v349);
  v168 = (void *)(v349 - 12);
  if ( (int *)(v349 - 12) != &dword_28898C0 )
    v317 = (unsigned int *)(v349 - 4);
        v318 = __ldrex(v317);
      while ( __strex(v318 - 1, v317) );
      v318 = (*v317)--;
    if ( v318 <= 0 )
      j_j_j_j__ZdlPv_9(v168);
  v169 = (MesaBiome *)operator new(0x168u);
  MesaBiome::MesaBiome(v169, 38, 0, 1);
  v170 = Biome::mesaRock;
  Biome::mesaRock = v169;
  if ( v170 )
    (*(void (**)(void))(*(_DWORD *)v170 + 12))();
    v169 = (MesaBiome *)Biome::mesaRock;
  v171 = (**(int (__fastcall ***)(MesaBiome *))v169)(v169);
  sub_21E94B4((void **)&v348, "Mesa Plateau F");
  EntityInteraction::setInteractText((int *)(v171 + 176), &v348);
  v172 = (void *)(v348 - 12);
  if ( (int *)(v348 - 12) != &dword_28898C0 )
    v319 = (unsigned int *)(v348 - 4);
        v320 = __ldrex(v319);
      while ( __strex(v320 - 1, v319) );
      v320 = (*v319)--;
    if ( v320 <= 0 )
      j_j_j_j__ZdlPv_9(v172);
  v173 = (MesaBiome *)operator new(0x168u);
  MesaBiome::MesaBiome(v173, 39, 0, 0);
  v174 = Biome::mesaClearRock;
  Biome::mesaClearRock = v173;
  if ( v174 )
    (*(void (**)(void))(*(_DWORD *)v174 + 12))();
    v173 = (MesaBiome *)Biome::mesaClearRock;
  v175 = (**(int (__fastcall ***)(MesaBiome *))v173)(v173);
  sub_21E94B4((void **)&v347, "Mesa Plateau");
  EntityInteraction::setInteractText((int *)(v175 + 176), &v347);
  *(_DWORD *)(v175 + 220) = Biome::HEIGHTS_HIGHLANDS;
  *(_DWORD *)(v175 + 224) = dword_2809544;
  v176 = (void *)(v347 - 12);
  if ( (int *)(v347 - 12) != &dword_28898C0 )
    v321 = (unsigned int *)(v347 - 4);
        v322 = __ldrex(v321);
      while ( __strex(v322 - 1, v321) );
      v322 = (*v321)--;
    if ( v322 <= 0 )
      j_j_j_j__ZdlPv_9(v176);
  v177 = *(_DWORD *)(Biome::plains + 268);
  (*(void (__fastcall **)(int *))(*(_DWORD *)Biome::plains + 104))(&v346);
  v178 = v346;
  v346 = 0;
  v179 = Biome::plainsMutated;
  Biome::plainsMutated = v178;
  if ( v179 )
    (*(void (**)(void))(*(_DWORD *)v179 + 12))();
    if ( v346 )
      (*(void (**)(void))(*(_DWORD *)v346 + 12))();
  v180 = *(_DWORD *)(Biome::desert + 268);
  (*(void (__fastcall **)(int *))(*(_DWORD *)Biome::desert + 104))(&v345);
  v181 = v345;
  v345 = 0;
  v182 = Biome::desertMutated;
  Biome::desertMutated = v181;
  if ( v182 )
    (*(void (**)(void))(*(_DWORD *)v182 + 12))();
    if ( v345 )
      (*(void (**)(void))(*(_DWORD *)v345 + 12))();
  v183 = *(_DWORD *)(Biome::forest + 268);
  (*(void (__fastcall **)(int *))(*(_DWORD *)Biome::forest + 104))(&v344);
  v184 = v344;
  v344 = 0;
  v185 = Biome::forestMutated;
  Biome::forestMutated = v184;
  if ( v185 )
    (*(void (**)(void))(*(_DWORD *)v185 + 12))();
    if ( v344 )
      (*(void (**)(void))(*(_DWORD *)v344 + 12))();
  v186 = *(_DWORD *)(Biome::taiga + 268);
  (*(void (__fastcall **)(int *))(*(_DWORD *)Biome::taiga + 104))(&v343);
  v187 = v343;
  v343 = 0;
  v188 = Biome::taigaMutated;
  Biome::taigaMutated = v187;
  if ( v188 )
    (*(void (**)(void))(*(_DWORD *)v188 + 12))();
    if ( v343 )
      (*(void (**)(void))(*(_DWORD *)v343 + 12))();
  v189 = *(_DWORD *)(Biome::swampland + 268);
  (*(void (__fastcall **)(int *))(*(_DWORD *)Biome::swampland + 104))(&v342);
  v190 = v342;
  v342 = 0;
  v191 = Biome::swamplandMutated;
  Biome::swamplandMutated = v190;
  if ( v191 )
    (*(void (**)(void))(*(_DWORD *)v191 + 12))();
    if ( v342 )
      (*(void (**)(void))(*(_DWORD *)v342 + 12))();
  v192 = *(_DWORD *)(Biome::iceFlats + 268);
  (*(void (__fastcall **)(int *))(*(_DWORD *)Biome::iceFlats + 104))(&v341);
  v193 = v341;
  v341 = 0;
  v194 = Biome::iceFlatsMutated;
  Biome::iceFlatsMutated = v193;
  if ( v194 )
    (*(void (**)(void))(*(_DWORD *)v194 + 12))();
    if ( v341 )
      (*(void (**)(void))(*(_DWORD *)v341 + 12))();
  v195 = *(_DWORD *)(Biome::jungle + 268);
  (*(void (__fastcall **)(int *))(*(_DWORD *)Biome::jungle + 104))(&v340);
  v196 = v340;
  v340 = 0;
  v197 = Biome::jungleMutated;
  Biome::jungleMutated = v196;
  if ( v197 )
    (*(void (**)(void))(*(_DWORD *)v197 + 12))();
    if ( v340 )
      (*(void (**)(void))(*(_DWORD *)v340 + 12))();
  v198 = *(_DWORD *)(Biome::jungleEdge + 268);
  (*(void (__fastcall **)(int *))(*(_DWORD *)Biome::jungleEdge + 104))(&v339);
  v199 = v339;
  v339 = 0;
  v200 = Biome::jungleEdgeMutated;
  Biome::jungleEdgeMutated = v199;
  if ( v200 )
    (*(void (**)(void))(*(_DWORD *)v200 + 12))();
    if ( v339 )
      (*(void (**)(void))(*(_DWORD *)v339 + 12))();
  v201 = *(_DWORD *)(Biome::taigaCold + 268);
  (*(void (__fastcall **)(int *))(*(_DWORD *)Biome::taigaCold + 104))(&v338);
  v202 = v338;
  v338 = 0;
  v203 = Biome::taigaColdMutated;
  Biome::taigaColdMutated = v202;
  if ( v203 )
    (*(void (**)(void))(*(_DWORD *)v203 + 12))();
    if ( v338 )
      (*(void (**)(void))(*(_DWORD *)v338 + 12))();
  v204 = *(_DWORD *)(Biome::savanna + 268);
  (*(void (__fastcall **)(int *))(*(_DWORD *)Biome::savanna + 104))(&v337);
  v205 = Biome::savannaMutated;
  v206 = v337;
  v337 = 0;
  Biome::savannaMutated = v206;
  if ( v205 )
    (*(void (**)(void))(*(_DWORD *)v205 + 12))();
    if ( v337 )
      (*(void (**)(void))(*(_DWORD *)v337 + 12))();
  v207 = *(_DWORD *)(Biome::savannaRock + 268);
  (*(void (__fastcall **)(int *))(*(_DWORD *)Biome::savannaRock + 104))(&v336);
  v208 = Biome::savannaRockMutated;
  v209 = v336;
  v336 = 0;
  Biome::savannaRockMutated = v209;
  if ( v208 )
    (*(void (**)(void))(*(_DWORD *)v208 + 12))();
    if ( v336 )
      (*(void (**)(void))(*(_DWORD *)v336 + 12))();
  v210 = *(_DWORD *)(Biome::mesa + 268);
  (*(void (__fastcall **)(int *))(*(_DWORD *)Biome::mesa + 104))(&v335);
  v211 = Biome::mesaMutated;
  v212 = v335;
  v335 = 0;
  Biome::mesaMutated = v212;
  if ( v211 )
    (*(void (**)(void))(*(_DWORD *)v211 + 12))();
    if ( v335 )
      (*(void (**)(void))(*(_DWORD *)v335 + 12))();
  v213 = *(_DWORD *)(Biome::mesaRock + 268);
  (*(void (__fastcall **)(int *))(*(_DWORD *)Biome::mesaRock + 104))(&v334);
  v214 = Biome::mesaRockMutated;
  v215 = v334;
  v334 = 0;
  Biome::mesaRockMutated = v215;
  if ( v214 )
    (*(void (**)(void))(*(_DWORD *)v214 + 12))();
    if ( v334 )
      (*(void (**)(void))(*(_DWORD *)v334 + 12))();
  v216 = *(_DWORD *)(Biome::mesaClearRock + 268);
  (*(void (__fastcall **)(int *))(*(_DWORD *)Biome::mesaClearRock + 104))(&v333);
  v217 = Biome::mesaClearRockMutated;
  v218 = v333;
  v333 = 0;
  Biome::mesaClearRockMutated = v218;
  if ( v217 )
    (*(void (**)(void))(*(_DWORD *)v217 + 12))();
    if ( v333 )
      (*(void (**)(void))(*(_DWORD *)v333 + 12))();
  v219 = *(_DWORD *)(Biome::birchForest + 268);
  (*(void (__fastcall **)(int *))(*(_DWORD *)Biome::birchForest + 104))(&v332);
  v220 = v332;
  v332 = 0;
  v221 = Biome::birchForestMutated;
  Biome::birchForestMutated = v220;
  if ( v221 )
    (*(void (**)(void))(*(_DWORD *)v221 + 12))();
    if ( v332 )
      (*(void (**)(void))(*(_DWORD *)v332 + 12))();
  v222 = *(_DWORD *)(Biome::birchForestHills + 268);
  (*(void (__fastcall **)(int *))(*(_DWORD *)Biome::birchForestHills + 104))(&v331);
  v223 = v331;
  v331 = 0;
  v224 = Biome::birchForestHillsMutated;
  Biome::birchForestHillsMutated = v223;
  if ( v224 )
    (*(void (**)(void))(*(_DWORD *)v224 + 12))();
    if ( v331 )
      (*(void (**)(void))(*(_DWORD *)v331 + 12))();
  v225 = *(_DWORD *)(Biome::roofedForest + 268);
  (*(void (__fastcall **)(int *))(*(_DWORD *)Biome::roofedForest + 104))(&v330);
  v226 = v330;
  v330 = 0;
  v227 = Biome::roofedForestMutated;
  Biome::roofedForestMutated = v226;
  if ( v227 )
    (*(void (**)(void))(*(_DWORD *)v227 + 12))();
    if ( v330 )
      (*(void (**)(void))(*(_DWORD *)v330 + 12))();
  v228 = *(_DWORD *)(Biome::redwoodTaiga + 268);
  (*(void (__fastcall **)(int *))(*(_DWORD *)Biome::redwoodTaiga + 104))(&v329);
  v229 = Biome::redwoodTaigaMutated;
  v230 = v329;
  v329 = 0;
  Biome::redwoodTaigaMutated = v230;
  if ( v229 )
    (*(void (**)(void))(*(_DWORD *)v229 + 12))();
    if ( v329 )
      (*(void (**)(void))(*(_DWORD *)v329 + 12))();
  v231 = *(_DWORD *)(Biome::extremeHills + 268);
  (*(void (__fastcall **)(int *))(*(_DWORD *)Biome::extremeHills + 104))(&v328);
  v232 = v328;
  v328 = 0;
  v233 = Biome::extremeHillsMutated;
  Biome::extremeHillsMutated = v232;
  if ( v233 )
    (*(void (**)(void))(*(_DWORD *)v233 + 12))();
    if ( v328 )
      (*(void (**)(void))(*(_DWORD *)v328 + 12))();
  v234 = *(_DWORD *)(Biome::extremeHillsWithTrees + 268);
  (*(void (__fastcall **)(int *))(*(_DWORD *)Biome::extremeHillsWithTrees + 104))(&v327);
  v235 = Biome::extremeHillsWithTreesMutated;
  v236 = v327;
  v327 = 0;
  Biome::extremeHillsWithTreesMutated = v236;
  if ( v235 )
    (*(void (**)(void))(*(_DWORD *)v235 + 12))();
    if ( v327 )
      (*(void (**)(void))(*(_DWORD *)v327 + 12))();
  v237 = *(_DWORD *)(Biome::redwoodTaigaHills + 268);
  (*(void (__fastcall **)(int *))(*(_DWORD *)Biome::redwoodTaigaHills + 104))(&v326);
  v238 = Biome::redwoodTaigaHillsMutated;
  v239 = v326;
  v326 = 0;
  Biome::redwoodTaigaHillsMutated = v239;
  if ( v238 )
    (*(void (**)(void))(*(_DWORD *)v238 + 12))();
    if ( v326 )
      (*(void (**)(void))(*(_DWORD *)v326 + 12))();
  v240 = Biome::redwoodTaigaMutated;
  sub_21E94B4((void **)&v325, "Redwood Taiga Hills M");
  EntityInteraction::setInteractText((int *)(v240 + 176), &v325);
  v241 = (void *)(v325 - 12);
  if ( (int *)(v325 - 12) != &dword_28898C0 )
    v323 = (unsigned int *)(v325 - 4);
        v324 = __ldrex(v323);
      while ( __strex(v324 - 1, v323) );
      v324 = (*v323)--;
    if ( v324 <= 0 )
      j_j_j_j__ZdlPv_9(v241);
  result = Biome::plains;
  Biome::DEFAULT = Biome::plains;
  return result;
}


Biome *__fastcall Biome::setSnowCovered(Biome *this)
{
  Biome *v1; // r4@1

  v1 = this;
  Biome::setSnowAccumulation(this, 0.125, 0.5);
  return v1;
}


int __fastcall Biome::setName(int a1, int *a2)
{
  int v2; // r4@1

  v2 = a1;
  EntityInteraction::setInteractText((int *)(a1 + 176), a2);
  return v2;
}


signed int __fastcall Biome::getMapEvergreenFoliageColor(Biome *this, const BlockPos *a2, float a3)
{
  __asm
  {
    VLDR            S2, [R0,#0xC4]
    VMOV.F32        S6, #1.0
    VLDR            S0, =0.0
    VCMPE.F32       S2, #0.0
    VLDR            S4, [R0,#0xC8]
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S8, S0
    VCMPE.F32       S4, #0.0
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S8, S2 }
    VCMPE.F32       S2, S6
    __asm { VMOVGT.F32      S0, S4 }
    VCMPE.F32       S4, S6
    __asm { VMOVGT.F32      S8, S6 }
    VMOV            R0, S8
    __asm { VMOVGT.F32      S0, S6 }
  __asm { VMOV            R1, S0 }
  return j_j_j__ZN12FoliageColor20getMapEvergreenColorEff(_R0, _R1, a3);
}


int __fastcall Biome::getDownfallInt(Biome *this)
{
  int result; // r0@1

  __asm
  {
    VLDR            S0, =65536.0
    VLDR            S2, [R0,#0xC8]
    VMUL.F32        S0, S2, S0
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  }
  return result;
}


unsigned int __fastcall Biome::getSkyColor(Biome *this, float a2, int _R2)
{
  __asm
  {
    VLDR            S0, =0.33333
    VMOV            S2, R2
    VMOV.F32        S4, #-1.0
    VMUL.F32        S0, S2, S0
    VMOV.F32        S2, #1.0
    VMOV.F32        S6, #0.5
    VCMPE.F32       S0, S4
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S0, S4 }
    VLDR            S4, =0.1
    VCMPE.F32       S0, S2
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S2 }
    VLDR            S2, =-0.05
    VMUL.F32        S2, S0, S2
    VMUL.F32        S0, S0, S4
    VLDR            S4, =0.62222
    VADD.F32        S2, S2, S4
    VADD.F32        S0, S0, S6
    VMOV            R1, S2
    VMOV            R2, S0
  return Color::fromHSB(this, _R1, _R2, 1.0);
}


signed int __fastcall Biome::getFreezingHeight(Biome *this, const BlockSource *a2, const BlockPos *a3)
{
  signed int result; // r0@2

  _R4 = this;
  if ( *((_DWORD *)a3 + 1) >= 65 )
  {
    _R0 = BlockSource::getCachedTemperatureNoise(a2, a3);
    __asm
    {
      VMOV            S0, R0
      VLDR            S2, =-0.043333
      VLDR            S6, =0.00020833
      VCVT.F32.S32    S0, S0
      VLDR            S4, [R4,#0xC4]
      VADD.F32        S2, S4, S2
      VMUL.F32        S0, S0, S6
      VADD.F32        S0, S2, S0
      VLDR            S2, =600.0
      VMUL.F32        S0, S0, S2
      VCVTR.S32.F32   S0, S0
      VMOV            R0, S0
    }
  }
  else
    result = 999;
  return result;
}


signed int __fastcall Biome::isHumid(Biome *this)
{
  signed int result; // r0@1

  __asm { VLDR            S2, [R0,#0xC8] }
  result = 0;
  __asm
  {
    VLDR            S0, =0.85
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    result = 1;
  return result;
}


unsigned int __fastcall Biome::buildCachedTemperatureNoise(Biome *this, LevelChunk *a2)
{
  LevelChunk *v6; // r4@1
  char *v7; // r0@3
  int v8; // r6@3
  int v9; // r7@3
  unsigned int v10; // r5@3
  int v11; // r0@3
  char v18; // r0^1@3
  unsigned int result; // r0@4
  int v20; // [sp+4h] [bp-34h]@1

  __asm
  {
    VMOV.F32        S16, #0.125
    VLDR            S18, =32.0
  }
  v6 = this;
  v20 = 0;
  do
    LOBYTE(v20) = 0;
    do
    {
      v7 = LevelChunk::getMin(v6);
      v8 = *(_DWORD *)v7;
      v9 = *((_DWORD *)v7 + 2);
      v10 = (unsigned __int16)v20;
      v11 = LevelChunk::getBiome(v6, (const ChunkBlockPos *)&v20);
      _R1 = v8 + v10;
      __asm { VMOV            S0, R1 }
      _R1 = v9 + (v10 >> 8);
      __asm
      {
        VMOV            S2, R1
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
        VMUL.F32        S0, S0, S16
        VMUL.F32        S2, S2, S16
        VMOV            R1, S0
        VMOV            R2, S2
      }
      _R0 = PerlinSimplexNoise::getValue(*(PerlinSimplexNoise **)(v11 + 276), _R1, _R2);
        VMOV            S0, R0
        VMUL.F32        S0, S0, S18
        VCVTR.S32.F32   S0, S0
        VMOV            R2, S0
      LevelChunk::setCachedTemperatureNoise(v6, (const ChunkBlockPos *)&v20, _R2);
      v18 = BYTE1(v20);
      LOBYTE(v20) = v20 + 1;
    }
    while ( (unsigned __int8)v20 < 0x10u );
    ++BYTE1(v20);
    result = (unsigned __int8)(v18 + 1);
  while ( result < 0x10 );
  return result;
}


signed int __fastcall Biome::getMapBirchFoliageColor(Biome *this, const BlockPos *a2, float a3)
{
  __asm
  {
    VLDR            S2, [R0,#0xC4]
    VMOV.F32        S6, #1.0
    VLDR            S0, =0.0
    VCMPE.F32       S2, #0.0
    VLDR            S4, [R0,#0xC8]
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S8, S0
    VCMPE.F32       S4, #0.0
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S8, S2 }
    VCMPE.F32       S2, S6
    __asm { VMOVGT.F32      S0, S4 }
    VCMPE.F32       S4, S6
    __asm { VMOVGT.F32      S8, S6 }
    VMOV            R0, S8
    __asm { VMOVGT.F32      S0, S6 }
  __asm { VMOV            R1, S0 }
  return j_j_j__ZN12FoliageColor16getMapBirchColorEff(_R0, _R1, a3);
}


void __fastcall Biome::~Biome(Biome *this)
{
  Biome::~Biome(this);
}


int __fastcall Biome::decorate(Biome *this, BlockSource *a2, Random *a3, const BlockPos *a4, bool a5, float a6)
{
  __asm
  {
    VLDR            S0, [SP,#0x20+arg_4]
    VSTR            S0, [SP,#0x20+var_18]
  }
  return (***((int (__cdecl ****)(_DWORD, _DWORD))this + 31))(*((_DWORD *)this + 31), a2);
}


ListTag *__fastcall Biome::SaveInstanceData(Biome *this, LevelStorage *a2)
{
  int v2; // r8@1
  unsigned int *v3; // r2@2
  signed int v4; // r1@4
  unsigned int *v5; // r2@6
  signed int v6; // r1@8
  unsigned int *v7; // r2@10
  signed int v8; // r1@12
  CompoundTag *v10; // r6@25
  void *v15; // r0@26
  void *v16; // r0@28
  void *v17; // r0@31
  int v18; // r5@37
  void *v19; // r0@39
  void *v20; // r0@40
  ListTag *result; // r0@41
  unsigned int *v22; // r2@46
  signed int v23; // r1@48
  unsigned int *v24; // r2@50
  signed int v25; // r1@52
  Biome *v26; // [sp+4h] [bp-6Ch]@1
  ListTag *v27; // [sp+Ch] [bp-64h]@1
  int v28; // [sp+18h] [bp-58h]@40
  ListTag *v29; // [sp+1Ch] [bp-54h]@37
  int v30; // [sp+24h] [bp-4Ch]@37
  ListTag *v31; // [sp+28h] [bp-48h]@37
  CompoundTag *v32; // [sp+2Ch] [bp-44h]@32
  int v33; // [sp+34h] [bp-3Ch]@10
  int v34; // [sp+3Ch] [bp-34h]@6
  int v35; // [sp+44h] [bp-2Ch]@2

  v26 = this;
  v27 = (ListTag *)operator new(0x14u);
  ListTag::ListTag((int)v27);
  v2 = 0;
  do
  {
    _R4 = Biome::mBiomes[v2];
    if ( _R4 )
    {
      v10 = (CompoundTag *)operator new(0x1Cu);
      CompoundTag::CompoundTag((int)v10);
      __asm
      {
        VLDR            S0, [R4,#0xCC]
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        sub_21E94B4((void **)&v35, "snowAccumulation");
        CompoundTag::putFloat((int)v10, (const void **)&v35, *(_DWORD *)(_R4 + 204));
        v15 = (void *)(v35 - 12);
        if ( (int *)(v35 - 12) != &dword_28898C0 )
        {
          v3 = (unsigned int *)(v35 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v4 = __ldrex(v3);
            while ( __strex(v4 - 1, v3) );
          }
          else
            v4 = (*v3)--;
          if ( v4 <= 0 )
            j_j_j_j__ZdlPv_9(v15);
        }
        VLDR            S0, [R4,#0xD0]
        sub_21E94B4((void **)&v34, "foliageSnow");
        CompoundTag::putFloat((int)v10, (const void **)&v34, *(_DWORD *)(_R4 + 208));
        v16 = (void *)(v34 - 12);
        if ( (int *)(v34 - 12) != &dword_28898C0 )
          v5 = (unsigned int *)(v34 - 4);
              v6 = __ldrex(v5);
            while ( __strex(v6 - 1, v5) );
            v6 = (*v5)--;
          if ( v6 <= 0 )
            j_j_j_j__ZdlPv_9(v16);
      if ( CompoundTag::isEmpty(v10) )
        (*(void (__fastcall **)(CompoundTag *))(*(_DWORD *)v10 + 4))(v10);
      else
        sub_21E94B4((void **)&v33, "id");
        CompoundTag::putByte((int)v10, (const void **)&v33, *(_BYTE *)(_R4 + 268));
        v17 = (void *)(v33 - 12);
        if ( (int *)(v33 - 12) != &dword_28898C0 )
          v7 = (unsigned int *)(v33 - 4);
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
            v8 = (*v7)--;
          if ( v8 <= 0 )
            j_j_j_j__ZdlPv_9(v17);
        v32 = v10;
        ListTag::add((int)v27, (int *)&v32);
        if ( v32 )
          (*(void (**)(void))(*(_DWORD *)v32 + 4))();
        v32 = 0;
    }
    ++v2;
  }
  while ( v2 != 256 );
  if ( ListTag::size(v27) < 1 )
    result = v27;
    return (ListTag *)(*(int (**)(void))(*(_DWORD *)result + 4))();
  std::make_unique<CompoundTag,char const(&)[5]>(&v31, "root");
  v18 = (int)v31;
  sub_21E94B4((void **)&v30, "list");
  v29 = v27;
  CompoundTag::put(v18, (const void **)&v30, (int *)&v29);
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  v29 = 0;
  v19 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v30 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v28, "BiomeData");
  LevelStorage::saveData((int)v26, (int)&v28, (int)v31);
  v20 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v28 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  result = v31;
  if ( v31 )
  return result;
}


int __fastcall Biome::setColor(int result, int a2, int a3)
{
  unsigned int v3; // r3@1

  v3 = ((unsigned int)a2 >> 16) & 0xFF | a2 & 0xFF00 | (a2 << 16) | 0xFF000000;
  *(_DWORD *)(result + 180) = v3;
  if ( a3 )
    v3 = ((unsigned int)a2 >> 1) & 0x7F7F7F;
  *(_DWORD *)(result + 184) = v3;
  return result;
}


void __fastcall Biome::LoadInstanceData(Biome *this, LevelStorage *a2)
{
  Biome *v2; // r5@1
  void (__fastcall *v3)(int *, Biome *, int *); // r6@1
  void *v4; // r0@1
  int v5; // r1@2
  int v6; // r0@2
  int v7; // r4@3
  ListTag *v8; // r9@3
  void *v9; // r0@3
  int *v10; // r8@5
  int i; // r5@5
  int v12; // r11@8
  void **v13; // r7@9
  int v14; // r8@9
  void *v15; // r0@9
  int v16; // r6@10
  void *v22; // r0@11
  void *v24; // r0@12
  unsigned int *v25; // r2@13
  signed int v26; // r1@15
  unsigned int *v27; // r2@17
  signed int v28; // r1@19
  unsigned int *v29; // r2@21
  signed int v30; // r1@23
  void *v31; // r0@40
  unsigned int *v32; // r2@42
  signed int v33; // r1@44
  unsigned int *v34; // r2@46
  signed int v35; // r1@48
  unsigned int *v36; // r2@50
  signed int v37; // r1@52
  int v38; // [sp+14h] [bp-64h]@12
  int v39; // [sp+1Ch] [bp-5Ch]@5
  int v40; // [sp+24h] [bp-54h]@9
  int v41; // [sp+2Ch] [bp-4Ch]@3
  int v42; // [sp+30h] [bp-48h]@3
  void **v43; // [sp+34h] [bp-44h]@3
  int v44; // [sp+38h] [bp-40h]@3
  int v45; // [sp+3Ch] [bp-3Ch]@3
  int *v46; // [sp+40h] [bp-38h]@3
  int v47; // [sp+48h] [bp-30h]@1
  int v48; // [sp+4Ch] [bp-2Ch]@1

  v2 = this;
  v3 = *(void (__fastcall **)(int *, Biome *, int *))(*(_DWORD *)this + 56);
  sub_21E94B4((void **)&v47, "BiomeData");
  v3(&v48, v2, &v47);
  v4 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
  {
    v32 = (unsigned int *)(v47 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
    }
    else
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = v48;
  v6 = *(_DWORD *)(v48 - 12);
  if ( v6 )
    v43 = &off_26E91B8;
    v44 = 0;
    v45 = v6;
    v46 = &v48;
    NbtIo::read((NbtIo *)&v42, (IDataInput *)&v43);
    v7 = v42;
    sub_21E94B4((void **)&v41, "list");
    v8 = (ListTag *)CompoundTag::getList(v7, (const void **)&v41);
    v9 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v41 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
      }
      else
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    if ( v8 )
      v10 = &v39;
      for ( i = 0; i < ListTag::size(v8); ++i )
        v12 = ListTag::get(v8, i);
        if ( (*(int (**)(void))(*(_DWORD *)v12 + 24))() == 10 )
        {
          sub_21E94B4((void **)&v40, "id");
          v13 = (void **)v10;
          v14 = CompoundTag::getByte(v12, (const void **)&v40);
          v15 = (void *)(v40 - 12);
          if ( (int *)(v40 - 12) != &dword_28898C0 )
          {
            v27 = (unsigned int *)(v40 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v28 = __ldrex(v27);
              while ( __strex(v28 - 1, v27) );
            }
            else
              v28 = (*v27)--;
            if ( v28 <= 0 )
              j_j_j_j__ZdlPv_9(v15);
          }
          v16 = Biome::mBiomes[v14];
          v10 = (int *)v13;
          if ( v16 )
            sub_21E94B4(v13, "snowAccumulation");
            _R0 = CompoundTag::getFloat(v12, (const void **)v13);
            __asm
              VMOV            S0, R0
              VSTR            S0, [R6,#0xCC]
            v22 = (void *)(v39 - 12);
            if ( (int *)(v39 - 12) != &dword_28898C0 )
              v29 = (unsigned int *)(v39 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v30 = __ldrex(v29);
                while ( __strex(v30 - 1, v29) );
              }
              else
                v30 = (*v29)--;
              if ( v30 <= 0 )
                j_j_j_j__ZdlPv_9(v22);
            sub_21E94B4((void **)&v38, "foliageSnow");
            _R0 = CompoundTag::getFloat(v12, (const void **)&v38);
              VSTR            S0, [R6,#0xD0]
            v24 = (void *)(v38 - 12);
            if ( (int *)(v38 - 12) != &dword_28898C0 )
              v25 = (unsigned int *)(v38 - 4);
                  v26 = __ldrex(v25);
                while ( __strex(v26 - 1, v25) );
                v26 = (*v25)--;
              if ( v26 <= 0 )
                j_j_j_j__ZdlPv_9(v24);
        }
    if ( v42 )
      (*(void (**)(void))(*(_DWORD *)v42 + 4))();
    v5 = v48;
  v31 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v5 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
}


int __fastcall Biome::setLeafColor(int result, int a2)
{
  *(_DWORD *)(result + 192) = a2;
  return result;
}


int __fastcall Biome::setTemperatureAndDownfall(int result, __int64 a2)
{
  *(_QWORD *)(result + 196) = a2;
  return result;
}


int __fastcall Biome::getBirchFoliageColor(Biome *this, const BlockPos *a2, float a3)
{
  __asm
  {
    VLDR            S2, [R0,#0xC4]
    VMOV.F32        S6, #1.0
    VLDR            S0, =0.0
    VCMPE.F32       S2, #0.0
    VLDR            S4, [R0,#0xC8]
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S8, S0
    VCMPE.F32       S4, #0.0
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S8, S2 }
    VCMPE.F32       S2, S6
    __asm { VMOVGT.F32      S0, S4 }
    VCMPE.F32       S4, S6
    __asm { VMOVGT.F32      S8, S6 }
    VMOV            R0, S8
    __asm { VMOVGT.F32      S0, S6 }
  __asm { VMOV            R1, S0 }
  return j_j_j__ZN12FoliageColor13getBirchColorEff(_R0, _R1, a3);
}


int __fastcall Biome::createMutatedCopy(Biome *this, int a2, int a3)
{
  Biome *v3; // r4@1
  int v4; // r6@1
  Biome *v5; // r7@1
  MutatedBiome *v6; // r5@1
  int result; // r0@1

  v3 = this;
  v4 = a3;
  v5 = (Biome *)a2;
  v6 = (MutatedBiome *)operator new(0x11Cu);
  result = MutatedBiome::MutatedBiome(v6, v4, v5);
  *(_DWORD *)v3 = v6;
  return result;
}


Random *__fastcall Biome::buildSurfaceAtDefault(int a1, Random *this, int a3, int a4, float a5, int a6)
{
  int v8; // r5@1
  int v9; // r8@1
  unsigned int v11; // r7@1
  char v12; // r0@1
  int v17; // r12@1
  int v18; // r3@1 OVERLAPPED
  Random *v19; // r4@1 OVERLAPPED
  int v20; // r0@1
  _BYTE *v21; // r2@1
  int v22; // r6@1
  Random *result; // r0@3
  int v24; // lr@3
  int v25; // r2@3
  int v26; // r4@4
  int v27; // r3@4
  _BYTE *v29; // r4@5
  int v30; // r12@5
  signed int v31; // r1@5
  int v32; // r4@8
  int v33; // r6@18
  _DWORD *v37; // r0@21
  int v38; // r1@24
  __int64 v39; // kr00_8@27
  unsigned int v40; // r3@27
  int v41; // r0@27
  char v42; // r2@27
  int v43; // r2@28
  int v44; // r4@37
  int v45; // [sp+1Ch] [bp-74h]@5
  Random *v46; // [sp+28h] [bp-68h]@1
  signed int v47; // [sp+2Ch] [bp-64h]@5
  int v48; // [sp+30h] [bp-60h]@1
  int v49; // [sp+34h] [bp-5Ch]@1
  unsigned __int16 v50; // [sp+38h] [bp-58h]@1
  __int16 v51; // [sp+3Ah] [bp-56h]@3
  unsigned __int16 v52; // [sp+3Ch] [bp-54h]@1

  _R11 = a1;
  v19 = this;
  _R9 = a4;
  v48 = *(_BYTE *)(a1 + 188);
  v8 = a3;
  v49 = *(_BYTE *)(a1 + 189);
  v46 = this;
  v9 = *(_BYTE *)(a1 + 190);
  _R6 = Random::_genRandInt32(this);
  ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v50, (const BlockPos *)_R9);
  ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v52, (const BlockPos *)_R9);
  v11 = v52;
  v12 = Random::_genRandInt32(v19);
  __asm { VMOV            S0, R6 }
  v17 = *(_DWORD *)v8;
  *(_QWORD *)&v18 = *(_QWORD *)(v8 + 16);
  __asm
  {
    VMOV.F32        S6, #3.0
    VCVT.F64.U32    D0, S0
  }
  v20 = (v12 & 3) + 2;
    VLDR            D1, =2.32830644e-10
    VLDR            S4, [SP,#0x90+arg_0]
  v21 = (_BYTE *)(*(_DWORD *)v8 + (_DWORD)v19 * ((unsigned __int8)v11 * v18 + (v11 >> 8)));
  __asm { VMUL.F64        D0, D0, D1 }
  v22 = Block::mBedrock;
    VLDR            S2, =0.33333
    VCVT.F32.F64    S0, D0
    VMUL.F32        S2, S4, S2
    VMOV.F32        S4, #0.25
    VADD.F32        S2, S2, S6
    VMUL.F32        S0, S0, S4
    VADD.F32        S0, S2, S0
  do
    --v20;
    *v21++ = *(_BYTE *)(v22 + 4);
  while ( v20 );
  __asm { VCVTR.S32.F32   S0, S0 }
  result = (Random *)((char *)v19 + 0xFFFF);
  v24 = v9;
  v51 = (_WORD)v19 - 1;
  v25 = (signed __int16)((_WORD)v19 - 1);
  if ( v25 >= 1 )
    v26 = v25 + (HIBYTE(v50) + (unsigned __int8)v50 * v18) * (_DWORD)v19;
    v27 = *(_BYTE *)(v17 + v26);
    if ( v27 != *(_BYTE *)(v22 + 4) )
    {
      __asm { VMOV            R6, S0 }
      v29 = (_BYTE *)(v26 + v17);
      v30 = a6 - 1;
      __asm
      {
        VMOV.F32        S16, #0.125
        VLDR            S20, =64.0
        VMOV.F32        S18, #-4.0
        VLDR            S22, =0.0016667
        VLDR            S24, =0.15
      }
      v47 = _R6;
      v45 = a6 - 7 - _R6;
      v31 = -1;
      do
        if ( (_BYTE)v27 )
        {
          if ( (unsigned __int8)v27 == *(_BYTE *)(Block::mStone + 4) )
          {
            if ( v31 == -1 )
            {
              if ( v47 <= 0 )
              {
                v24 = v27;
                v32 = BlockID::AIR;
                v49 = 0;
              }
              else if ( v25 < a6 - 4 )
                v32 = v48;
              else
                if ( v25 <= a6 + 1 )
                {
                  v32 = *(_BYTE *)(_R11 + 188);
                  v49 = *(_BYTE *)(_R11 + 189);
                  v24 = *(_BYTE *)(_R11 + 190);
                }
              if ( !(_BYTE)v32 && (signed __int16)result < a6 )
                if ( *(_DWORD *)(_R9 + 4) < 65 )
                  __asm { VLDR            S0, [R11,#0xC4] }
                else
                  __asm { VLDR            S0, [R9] }
                  v33 = v30;
                  __asm
                  {
                    VLDR            S2, [R9,#8]
                    VCVT.F32.S32    S0, S0
                    VCVT.F32.S32    S2, S2
                    VMUL.F32        S0, S0, S16
                    VMUL.F32        S2, S2, S16
                    VMOV            R1, S0
                    VMOV            R2, S2
                  }
                  _R0 = PerlinSimplexNoise::getValue(*(PerlinSimplexNoise **)(_R11 + 276), _R1, _R2);
                    VMOV            S0, R0
                    VLDR            S2, [R9,#4]
                  v30 = v33;
                    VMUL.F32        S0, S0, S18
                    VADD.F32        S0, S0, S20
                    VSUB.F32        S0, S0, S2
                    VLDR            S2, [R11,#0xC4]
                    VMUL.F32        S0, S0, S22
                    VADD.F32        S0, S2, S0
                __asm
                  VCMPE.F32       S0, S24
                  VMRS            APSR_nzcv, FPSCR
                if ( _NF ^ _VF )
                  v37 = &Block::mIce;
                  v37 = &Block::mStillWater;
                v32 = *(_BYTE *)(*v37 + 4);
              v38 = v51;
              if ( v51 >= v30 )
                v39 = *(_QWORD *)(v8 + 16);
                *(_BYTE *)(*(_DWORD *)v8 + v51 + (HIBYTE(v50) + (unsigned __int8)v50 * (_DWORD)v39) * HIDWORD(v39)) = v32;
                v40 = v38 + ((unsigned __int8)v50 * (_DWORD)v39 + ((unsigned int)v50 >> 8)) * HIDWORD(v39);
                v41 = *(_DWORD *)(v8 + 8);
                v42 = *(_BYTE *)(v41 + (v40 >> 1));
                if ( v40 & 1 )
                  v48 = v32;
                  v43 = v42 & 0xF | 16 * v49;
                  LOBYTE(v43) = v42 & 0xF0 | v49 & 0xF;
                *(_BYTE *)(v41 + (v40 >> 1)) = v43;
                result = (Random *)(unsigned __int16)v51;
                v31 = v47;
                if ( v51 >= v45 )
                  *(_BYTE *)(*(_DWORD *)v8
                           + v51
                           + (HIBYTE(v50) + (unsigned __int8)v50 * (unsigned int)*(_QWORD *)(v8 + 16))
                           * (*(_QWORD *)(v8 + 16) >> 32)) = v24;
                  v31 = v47;
                  v48 = BlockID::AIR;
                  v24 = *(_BYTE *)(Block::mStone + 4);
                           * (*(_QWORD *)(v8 + 16) >> 32)) = *(_BYTE *)(Block::mGravel + 4);
            }
            else if ( v31 >= 1 )
              --v31;
              *v29 = v24;
              if ( !v31 )
                v44 = v30;
                if ( v24 == *(_BYTE *)(Block::mSand + 4) )
                  v31 = Random::_genRandInt32(v46) & 3;
                  if ( v51 - 63 > 0 )
                    v31 += v51 - 63;
                  v24 = *(_BYTE *)(Block::mSandStone + 4);
                  result = (Random *)(unsigned __int16)v51;
                  v31 = 0;
                v30 = v44;
          }
        }
        else
          v31 = -1;
        result = (Random *)((char *)result - 1);
        v51 = (signed __int16)result;
        v25 = (signed __int16)result;
        if ( (signed __int16)result < 1 )
          break;
        v29 = (_BYTE *)(*(_DWORD *)v8
                      + (signed __int16)result
                      + (HIBYTE(v50) + (unsigned __int8)v50 * (unsigned int)*(_QWORD *)(v8 + 16))
                      * (*(_QWORD *)(v8 + 16) >> 32));
        v27 = *v29;
        result = (Random *)(signed __int16)result;
      while ( v27 != *(_BYTE *)(Block::mBedrock + 4) );
    }
  return result;
}


int __fastcall Biome::getSnowAccumulationLayers(Biome *this)
{
  int result; // r0@1

  __asm
  {
    VMOV.F32        S0, #8.0
    VLDR            S2, [R0,#0xCC]
    VMUL.F32        S0, S2, S0
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  }
  return result;
}


int __fastcall Biome::ResetInstanceData(Biome *this)
{
  int result; // r0@1
  int v2; // r2@1
  int v3; // r3@2

  result = 0;
  v2 = 0;
  do
  {
    v3 = Biome::mBiomes[v2++];
    if ( v3 )
    {
      *(_DWORD *)(v3 + 204) = 0;
      *(_DWORD *)(v3 + 208) = 0;
    }
  }
  while ( v2 != 256 );
  return result;
}


int __fastcall Biome::getTemperatureWorldGen(Biome *this, const BlockPos *a2)
{
  int result; // r0@2

  _R5 = a2;
  _R4 = this;
  if ( *((_DWORD *)a2 + 1) < 65 )
  {
    __asm
    {
      VLDR            S0, [R4,#0xC4]
      VMOV            R0, S0
    }
  }
  else
      VLDR            S0, [R5]
      VMOV.F32        S4, #0.125
      VLDR            S2, [R5,#8]
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VMUL.F32        S0, S0, S4
      VMUL.F32        S2, S2, S4
      VMOV            R1, S0
      VMOV            R2, S2
    _R0 = PerlinSimplexNoise::getValue(*((PerlinSimplexNoise **)this + 69), _R1, _R2);
      VMOV.F32        S0, #-4.0
      VLDR            S4, =64.0
      VMOV            S2, R0
      VMUL.F32        S0, S2, S0
      VLDR            S2, [R5,#4]
      VADD.F32        S0, S0, S4
      VSUB.F32        S0, S0, S2
      VLDR            S2, =0.0016667
      VMUL.F32        S0, S0, S2
      VLDR            S2, [R4,#0xC4]
      VADD.F32        S0, S2, S0
  return result;
}


void __fastcall Biome::LoadInstanceData(Biome *this, LevelStorage *a2)
{
  Biome::LoadInstanceData(this, a2);
}


Biome *__fastcall Biome::clearMobs(Biome *this, int a2, int a3, int a4)
{
  int v4; // r8@1
  int v5; // r6@1
  Biome *v6; // r4@1
  __int64 v7; // kr00_8@2
  MobSpawnerData *v8; // r0@3
  __int64 v9; // kr08_8@7
  MobSpawnerData *v10; // r0@8
  MobSpawnerData *v11; // r5@12 OVERLAPPED
  MobSpawnerData *v12; // r6@12 OVERLAPPED
  MobSpawnerData *v13; // r0@13

  v4 = a4;
  v5 = a3;
  v6 = this;
  if ( a2 == 1 )
  {
    v7 = *(_QWORD *)((char *)this + 140);
    if ( HIDWORD(v7) != (_DWORD)v7 )
    {
      v8 = (MobSpawnerData *)v7;
      do
        v8 = (MobSpawnerData *)((char *)MobSpawnerData::~MobSpawnerData(v8) + 120);
      while ( (MobSpawnerData *)HIDWORD(v7) != v8 );
    }
    *((_DWORD *)v6 + 36) = v7;
  }
  if ( v5 == 1 )
    v9 = *((_QWORD *)v6 + 19);
    if ( HIDWORD(v9) != (_DWORD)v9 )
      v10 = (MobSpawnerData *)v9;
        v10 = (MobSpawnerData *)((char *)MobSpawnerData::~MobSpawnerData(v10) + 120);
      while ( (MobSpawnerData *)HIDWORD(v9) != v10 );
    *((_DWORD *)v6 + 39) = v9;
  if ( v4 == 1 )
    *(_QWORD *)&v11 = *((_QWORD *)v6 + 16);
    if ( v12 != v11 )
      v13 = v11;
        v13 = (MobSpawnerData *)((char *)MobSpawnerData::~MobSpawnerData(v13) + 120);
      while ( v12 != v13 );
    *((_DWORD *)v6 + 33) = v11;
  return v6;
}


int __fastcall Biome::getMapGrassColor(Biome *this, const BlockPos *a2, float a3)
{
  __asm
  {
    VLDR            S2, [R0,#0xC4]
    VMOV.F32        S6, #1.0
    VLDR            S0, =0.0
    VCMPE.F32       S2, #0.0
    VLDR            S4, [R0,#0xC8]
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S8, S0
    VCMPE.F32       S4, #0.0
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S8, S2 }
    VCMPE.F32       S2, S6
    __asm { VMOVGT.F32      S0, S4 }
    VCMPE.F32       S4, S6
    __asm { VMOVGT.F32      S8, S6 }
    VMOV            R0, S8
    __asm { VMOVGT.F32      S0, S6 }
  __asm { VMOV            R1, S0 }
  return j_j_j__ZN12FoliageColor16getMapGrassColorEff(_R0, _R1, a3);
}


int __fastcall Biome::getRandomFlowerTypeAndData(int result, Random *a2, const BlockPos *a3)
{
  *(_BYTE *)result = *(_BYTE *)(Block::mYellowFlower + 4);
  *(_BYTE *)(result + 1) = 0;
  return result;
}


int __fastcall Biome::getTemperature(Biome *this, const BlockSource *a2, const BlockPos *a3)
{
  int result; // r0@2

  _R5 = a3;
  _R4 = this;
  if ( *((_DWORD *)a3 + 1) < 65 )
  {
    __asm
    {
      VLDR            S0, [R4,#0xC4]
      VMOV            R0, S0
    }
  }
  else
    _R0 = BlockSource::getCachedTemperatureNoise(a2, a3);
      VMOV            S2, R0
      VLDR            S4, =64.0
      VMOV.F32        S0, #-0.125
      VCVT.F32.S32    S2, S2
      VMUL.F32        S0, S2, S0
      VLDR            S2, [R5,#4]
      VADD.F32        S0, S0, S4
      VSUB.F32        S0, S0, S2
      VLDR            S2, =0.0016667
      VMUL.F32        S0, S0, S2
      VLDR            S2, [R4,#0xC4]
      VADD.F32        S0, S2, S0
  return result;
}
