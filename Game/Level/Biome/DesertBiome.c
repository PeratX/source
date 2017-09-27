

unsigned int __fastcall DesertBiome::decorate(DesertBiome *this, BlockSource *a2, Random *a3, const BlockPos *a4, bool a5, float a6)
{
  DesertBiome *v10; // r7@1
  const BlockPos *v11; // r5@1
  Random *v12; // r4@1
  BlockSource *v13; // r6@1
  char v14; // r8@2
  int v15; // r8@2
  int v16; // r12@2
  void (*v17)(void); // lr@2
  unsigned int result; // r0@3
  float v19; // [sp+4h] [bp-34h]@0
  int v20; // [sp+8h] [bp-30h]@2
  int v21; // [sp+Ch] [bp-2Ch]@2
  int v22; // [sp+10h] [bp-28h]@2
  int v23; // [sp+14h] [bp-24h]@2
  int v24; // [sp+18h] [bp-20h]@2
  int v25; // [sp+1Ch] [bp-1Ch]@2

  __asm { VLDR            S0, [SP,#0x38+arg_4] }
  v10 = this;
  v11 = a4;
  __asm { VSTR            S0, [SP,#0x38+var_34] }
  v12 = a3;
  v13 = a2;
  Biome::decorate(this, a2, a3, a4, a5, v19);
  if ( !(Random::_genRandInt32(v12) % 0x1F4) )
  {
    v14 = Random::_genRandInt32(v12);
    LOBYTE(v23) = Random::_genRandInt32(v12) & 0xF;
    v23 = (unsigned __int8)v23;
    v24 = 0;
    v25 = v14 & 0xF;
    v24 = BlockSource::getHeightmap(v13, (const BlockPos *)&v23);
    v15 = *((_DWORD *)v11 + 1);
    v16 = *((_DWORD *)v11 + 2);
    v17 = *(void (**)(void))(**(_DWORD **)(*((_DWORD *)v10 + 31) + 104) + 8);
    v20 = v23 + *(_DWORD *)v11;
    v21 = v15 + 128;
    v22 = v16 + v25;
    v17();
  }
  result = Random::_genRandInt32(v12);
  if ( !(result & 0x3F) )
    result = (*(int (**)(void))(**(_DWORD **)(*((_DWORD *)v10 + 31) + 108) + 8))();
  return result;
}


void __fastcall DesertBiome::~DesertBiome(DesertBiome *this)
{
  Biome *v1; // r0@1

  v1 = Biome::~Biome(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall DesertBiome::DesertBiome(int a1, int a2)
{
  int v2; // r8@1
  MobSpawnerData *v3; // r9@3
  MobSpawnerData *v4; // r4@3
  MobSpawnerData *v5; // r0@4
  int v6; // r3@6
  int v7; // r4@6
  int v8; // r5@6
  int v9; // r6@6
  int v10; // r3@6
  int v11; // r4@6
  int v12; // r5@6
  int v13; // r6@6
  int v14; // r7@6
  void (__fastcall *v15)(int *, int, signed int); // r3@6
  void *v16; // r0@8
  void *v17; // r0@9
  void *v18; // r0@10
  void *v19; // r0@11
  void *v20; // r0@12
  void *v21; // r0@13
  MobSpawnerData *v22; // r5@14
  __int64 v23; // r1@18
  int v24; // r0@18
  int v25; // r0@18
  unsigned int *v27; // r2@19
  signed int v28; // r1@21
  unsigned int *v29; // r2@23
  signed int v30; // r1@25
  unsigned int *v31; // r2@27
  signed int v32; // r1@29
  unsigned int *v33; // r2@31
  signed int v34; // r1@33
  unsigned int *v35; // r2@35
  signed int v36; // r1@37
  unsigned int *v37; // r2@39
  signed int v38; // r1@41
  char v39; // [sp+14h] [bp-15Ch]@14
  void (*v40)(void); // [sp+1Ch] [bp-154h]@14
  char v41; // [sp+24h] [bp-14Ch]@14
  void (*v42)(void); // [sp+2Ch] [bp-144h]@14
  char v43; // [sp+34h] [bp-13Ch]@14
  int v44; // [sp+B0h] [bp-C0h]@6
  int v45; // [sp+B4h] [bp-BCh]@6
  int v46; // [sp+BCh] [bp-B4h]@6
  int v47; // [sp+C0h] [bp-B0h]@6
  int v48; // [sp+C4h] [bp-ACh]@9
  int v49; // [sp+C8h] [bp-A8h]@8
  int v50; // [sp+CCh] [bp-A4h]@6
  int v51; // [sp+D0h] [bp-A0h]@6
  int v52; // [sp+DCh] [bp-94h]@6
  int v53; // [sp+E0h] [bp-90h]@6
  int v54; // [sp+E4h] [bp-8Ch]@6
  int v55; // [sp+E8h] [bp-88h]@6
  int v56; // [sp+ECh] [bp-84h]@6
  int v57; // [sp+F0h] [bp-80h]@6
  int v58; // [sp+F4h] [bp-7Ch]@6
  int v59; // [sp+F8h] [bp-78h]@6
  int v60; // [sp+FCh] [bp-74h]@6
  int v61; // [sp+100h] [bp-70h]@6
  int v62; // [sp+104h] [bp-6Ch]@6
  int v63; // [sp+108h] [bp-68h]@6
  int v64; // [sp+10Ch] [bp-64h]@6
  int v65; // [sp+110h] [bp-60h]@6
  int v66; // [sp+114h] [bp-5Ch]@7
  int v67; // [sp+11Ch] [bp-54h]@6
  int v68; // [sp+120h] [bp-50h]@7
  int v69; // [sp+12Ch] [bp-44h]@8
  int v70; // [sp+13Ch] [bp-34h]@8
  int v71; // [sp+144h] [bp-2Ch]@1

  v2 = a1;
  v71 = 0;
  Biome::Biome(a1, a2, 1, &v71);
  if ( v71 )
    (*(void (**)(void))(*(_DWORD *)v71 + 12))();
  *(_DWORD *)v2 = &off_2703D1C;
  v3 = *(MobSpawnerData **)(v2 + 140);
  v4 = *(MobSpawnerData **)(v2 + 144);
  if ( v4 != v3 )
  {
    v5 = *(MobSpawnerData **)(v2 + 140);
    do
      v5 = (MobSpawnerData *)((char *)MobSpawnerData::~MobSpawnerData(v5) + 120);
    while ( v4 != v5 );
  }
  *(_DWORD *)(v2 + 144) = v3;
  sub_21E94B4((void **)&v46, "minecraft");
  EntityTypeToString((void **)&v45, 0x1312u, 0);
  sub_21E94B4((void **)&v44, "in_desert");
  EntityDefinitionIdentifier::EntityDefinitionIdentifier(&v47, &v46, &v45, &v44);
  v50 = 4;
  EntityDefinitionIdentifier::EntityDefinitionIdentifier(&v51, &v47);
  v52 = 4882;
  v53 = 2;
  v54 = 3;
  v6 = *(_DWORD *)(v2 + 8);
  v7 = *(_DWORD *)(v2 + 12);
  v8 = *(_DWORD *)(v2 + 16);
  v9 = *(_DWORD *)(v2 + 20);
  v55 = *(_DWORD *)(v2 + 4);
  v56 = v6;
  v57 = v7;
  v58 = v8;
  v59 = v9;
  v10 = *(_DWORD *)(v2 + 28);
  v11 = *(_DWORD *)(v2 + 32);
  v12 = *(_DWORD *)(v2 + 36);
  v13 = *(_DWORD *)(v2 + 40);
  v14 = *(_DWORD *)(v2 + 44);
  v60 = *(_DWORD *)(v2 + 24);
  v61 = v10;
  v62 = v11;
  v63 = v12;
  v64 = v13;
  v65 = v14;
  v67 = 0;
  v15 = *(void (__fastcall **)(int *, int, signed int))(v2 + 56);
  if ( v15 )
    v15(&v66, v2 + 48, 2);
    v68 = *(_DWORD *)(v2 + 60);
    v67 = *(_DWORD *)(v2 + 56);
  v69 = 0;
  v70 = 0;
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v2 + 140, v3, &v50);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v50);
  v16 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v49 - 4);
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
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v48 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v47 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v44 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v45 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v46 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = *(MobSpawnerData **)(v2 + 132);
  v42 = 0;
  v40 = 0;
  MobSpawnerData::MobSpawnerData(&v43, 199471, 240, 2, 4, v2 + 64, (int)&v41, (int)&v39);
  std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::emplace<MobSpawnerData>(v2 + 128, v22, &v43);
  MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v43);
  if ( v40 )
    v40();
  if ( v42 )
    v42();
  HIDWORD(v23) = 10;
  v24 = Block::mSand;
  *(_BYTE *)(v2 + 188) = *(_BYTE *)(Block::mSand + 4);
  *(_BYTE *)(v2 + 189) = 0;
  *(_BYTE *)(v2 + 190) = *(_BYTE *)(v24 + 4);
  v25 = *(_DWORD *)(v2 + 124);
  *(_DWORD *)(v25 + 208) = -998653952;
  *(_DWORD *)(v25 + 220) = 2;
  LODWORD(v23) = 50;
  *(_QWORD *)(v25 + 228) = v23;
  return v2;
}


void __fastcall DesertBiome::~DesertBiome(DesertBiome *this)
{
  DesertBiome::~DesertBiome(this);
}
