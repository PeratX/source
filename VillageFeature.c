

int __fastcall VillageFeature::getFeatureName(int result)
{
  *(_DWORD *)result = 7;
  *(_DWORD *)(result + 4) = "Village";
  return result;
}


int __fastcall VillageFeature::createStructureStart(VillageFeature *this, Dimension *a2, Dimension *a3, const ChunkPos *a4, unsigned __int64 *a5)
{
  VillageFeature *v5; // r4@1
  Random *v6; // r6@1
  Dimension *v7; // r0@1
  BiomeSource *v8; // r7@1
  VillageStart *v9; // r5@1
  int result; // r0@1

  v5 = this;
  v6 = a4;
  v7 = j_Dimension::getBiomes(a3);
  v8 = (BiomeSource *)j_ThreadLocal<BiomeSource>::getLocal((int)v7);
  v9 = (VillageStart *)j_operator new(0x34u);
  result = j_VillageStart::VillageStart(v9, v8, v6, *a5, *a5 >> 32, 0);
  *(_DWORD *)v5 = v9;
  return result;
}


_BOOL4 __fastcall VillageFeature::isFeatureChunk(VillageFeature *this, BiomeSource *a2, Random *a3, const ChunkPos *a4)
{
  __int64 v4; // kr00_8@1
  VillageFeature *v5; // r5@1
  Random *v6; // r9@1
  int v7; // r7@1
  signed int v8; // r4@1
  signed int v9; // r10@3
  __int64 v10; // kr08_8@5
  unsigned int v11; // r4@5
  unsigned int v12; // r9@6
  unsigned int v13; // r1@7
  __int64 v14; // kr10_8@7
  BiomeSource *v16; // [sp+4h] [bp-2Ch]@0
  BiomeSource *v17; // [sp+8h] [bp-28h]@3

  v4 = *(_QWORD *)a4;
  v5 = this;
  v6 = a3;
  v7 = *(_QWORD *)a4 >> 32;
  v8 = *(_QWORD *)a4;
  if ( v8 <= -1 )
    v8 = v4 + 1 - *((_DWORD *)this + 26);
  v9 = *((_DWORD *)this + 26);
  v17 = a2;
  if ( SHIDWORD(v4) < 0 )
    v7 = HIDWORD(v4) + 1 - v9;
  j_StructureFeature::setRandomSeedFor(a3, (Random *)v8, v7, 10387312, (int)a2, v16);
  v10 = *((_QWORD *)v5 + 13);
  v11 = v10 * (v8 / v9);
  if ( (_DWORD)v10 == HIDWORD(v10) )
  {
    v12 = 0;
  }
  else
    v13 = j_Random::_genRandInt32(v6) % ((signed int)v10 - HIDWORD(v10));
    v14 = *((_QWORD *)v5 + 13);
    v11 += v13;
    if ( (_DWORD)v14 == HIDWORD(v14) )
      v12 = 0;
    else
      v12 = j_Random::_genRandInt32(v6) % ((signed int)v14 - HIDWORD(v14));
  return v4 == __PAIR__(v12 + v7 / v9 * v10, v11) && (*(int (__cdecl **)(BiomeSource *))(*(_DWORD *)v17 + 28))(v17);
}


int __fastcall VillageFeature::VillageFeature(__int64 a1)
{
  int v1; // r4@1
  int v2; // r5@1

  v1 = a1;
  j_StructureFeature::StructureFeature(a1);
  *(_DWORD *)v1 = &off_272426C;
  *(_DWORD *)(v1 + 92) = 0;
  v2 = v1 + 92;
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 12) = 40;
  *(_DWORD *)(v2 + 16) = 12;
  *(_DWORD *)(v2 - 12) = 4;
  j_std::vector<int,std::allocator<int>>::push_back(v1 + 92, (int *)(Biome::plains + 268));
  j_std::vector<int,std::allocator<int>>::push_back(v1 + 92, (int *)(Biome::desert + 268));
  j_std::vector<int,std::allocator<int>>::push_back(v1 + 92, (int *)(Biome::savanna + 268));
  j_std::vector<int,std::allocator<int>>::push_back(v1 + 92, (int *)(Biome::iceFlats + 268));
  return v1;
}


StructureFeature *__fastcall VillageFeature::~VillageFeature(VillageFeature *this)
{
  StructureFeature *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_272426C;
  v2 = (void *)*((_DWORD *)this + 23);
  if ( v2 )
    j_operator delete(v2);
  return j_j_j__ZN16StructureFeatureD2Ev_1(v1);
}


signed int __fastcall VillageFeature::getNearestGeneratedFeature(VillageFeature *this, Dimension *a2, const BlockPos *a3, BlockPos *a4)
{
  signed int v4; // r8@1
  signed int v5; // r5@1
  unsigned int v6; // r0@1
  int v7; // r1@1
  signed int v8; // r2@1
  int v9; // r0@2
  int *v10; // r4@2
  int v11; // r6@2
  StructureFeature *v12; // r7@3
  VillageFeature *v13; // r6@3
  int v14; // r2@3
  int v15; // r3@4
  signed int v16; // r0@4
  int v17; // r12@6
  signed int v18; // r0@7
  signed int v19; // r1@9
  int v20; // r8@11
  int v21; // r4@11
  signed int v22; // r0@12
  signed int v23; // r1@14
  signed int v24; // r9@17
  int v25; // r4@17
  unsigned int v26; // r0@21
  int v27; // r1@21
  signed int v28; // r2@21
  int v29; // r0@22
  int v30; // r6@22
  int v31; // r3@22
  Dimension *v32; // r0@23
  void *v33; // r0@23
  signed int v34; // r7@23
  signed int v35; // r10@23
  int v36; // r4@23
  int v37; // r2@23
  int v38; // r9@23
  unsigned int v39; // r1@24
  Dimension *v40; // r0@24
  VillageFeature *v41; // r10@24
  int v42; // r6@25
  unsigned int v43; // r1@25
  __int64 v44; // kr00_8@25
  int v45; // r4@29
  Dimension *v46; // r5@29
  Level *v47; // r0@29
  LargeFeature *v48; // r0@29
  int (__fastcall *v49)(VillageFeature *, void *, unsigned int *, int *); // ST40_4@29
  Dimension *v50; // r0@29
  void *v51; // r0@29
  bool v52; // nf@31
  unsigned __int8 v53; // vf@31
  int v54; // r4@32
  signed int v55; // r0@32
  __int64 v56; // r0@33
  int v58; // [sp+0h] [bp-1420h]@23
  BiomeSource *v59; // [sp+4h] [bp-141Ch]@0
  BlockPos *v60; // [sp+Ch] [bp-1414h]@1
  signed int v61; // [sp+10h] [bp-1410h]@3
  signed int v62; // [sp+14h] [bp-140Ch]@6
  int v63; // [sp+18h] [bp-1408h]@7
  int v64; // [sp+1Ch] [bp-1404h]@11
  signed int v65; // [sp+24h] [bp-13FCh]@3
  VillageFeature *v66; // [sp+2Ch] [bp-13F4h]@1
  int v67; // [sp+30h] [bp-13F0h]@6
  int v68; // [sp+34h] [bp-13ECh]@4
  int v69; // [sp+38h] [bp-13E8h]@11
  int v70; // [sp+3Ch] [bp-13E4h]@11
  Dimension *v71; // [sp+44h] [bp-13DCh]@1
  int v72; // [sp+48h] [bp-13D8h]@29
  int v73; // [sp+4Ch] [bp-13D4h]@29
  unsigned int v74; // [sp+54h] [bp-13CCh]@3
  unsigned int v75; // [sp+58h] [bp-13C8h]@21
  int v76; // [sp+A18h] [bp-A08h]@21
  char v77; // [sp+A1Ch] [bp-A04h]@21
  int v78; // [sp+A20h] [bp-A00h]@21
  int v79; // [sp+A24h] [bp-9FCh]@23
  unsigned int v80; // [sp+A28h] [bp-9F8h]@1
  unsigned int v81; // [sp+A2Ch] [bp-9F4h]@1
  signed int v82; // [sp+13ECh] [bp-34h]@1
  char v83; // [sp+13F0h] [bp-30h]@1
  int v84; // [sp+13F4h] [bp-2Ch]@1
  signed int v85; // [sp+13F8h] [bp-28h]@3

  v66 = this;
  v60 = a4;
  v71 = a2;
  v4 = *(_DWORD *)a3;
  v5 = *((_DWORD *)a3 + 2);
  v6 = sub_21E67AC((int)&Random::mRandomDevice);
  v80 = v6;
  v82 = 625;
  v7 = 0;
  v83 = 0;
  v8 = 1;
  v84 = 0;
  v81 = v6;
  do
  {
    v9 = v6 ^ (v6 >> 30);
    v10 = (int *)(&v80 + v7);
    v11 = v7++ + 1812433253 * v9;
    v6 = v8++ + 1812433253 * v9;
    v10[2] = v11 + 1;
  }
  while ( v7 != 397 );
  v12 = (StructureFeature *)&v74;
  v13 = v66;
  v82 = 624;
  v14 = 0;
  v85 = 398;
  v65 = v5 >> 4;
  v61 = v4 >> 4;
LABEL_4:
  v15 = -v14;
  v16 = 0;
  v68 = v14;
  if ( !v14 )
    v16 = 4;
  v17 = -v14;
  v62 = v16;
  v67 = -v14;
  while ( 2 )
    v18 = 0;
    v63 = v17;
    if ( v17 == v14 )
      v18 = 1;
    v19 = 0;
    if ( v17 == v15 )
      v19 = 1;
    v20 = v15;
    v21 = v19 | v18;
    v69 = v19 | v18;
    v70 = v61 + v17;
    v64 = v61 + v17 + 1;
    while ( 1 )
    {
      v22 = 0;
      if ( v20 == v14 )
        v22 = 1;
      v23 = 0;
      if ( v20 == v15 )
        v23 = 1;
      if ( v22 | v23 | v21 )
        break;
LABEL_31:
      v53 = __OFSUB__(v20, v14);
      v52 = v20++ - v14 < 0;
      if ( !(v52 ^ v53) )
      {
LABEL_32:
        v54 = v63;
        v55 = 7;
        goto LABEL_34;
      }
    }
    v24 = v70;
    v25 = v20 + v65;
    if ( v70 <= -1 )
      v24 = v64 - *((_DWORD *)v13 + 26);
    if ( v25 <= -1 )
      v25 = v25 + 1 - *((_DWORD *)v13 + 26);
    v26 = sub_21E67AC((int)&Random::mRandomDevice);
    v74 = v26;
    v76 = 625;
    v27 = 0;
    v77 = 0;
    v78 = 0;
    v28 = 1;
    v75 = v26;
    do
      v29 = v26 ^ (v26 >> 30);
      v30 = (int)v12 + 4 * v27;
      v31 = v27++ + 1812433253 * v29;
      v26 = v28++ + 1812433253 * v29;
      *(_DWORD *)(v30 + 8) = v31 + 1;
    while ( v27 != 397 );
    v76 = 624;
    v79 = 398;
    v32 = j_Dimension::getBiomes(v71);
    v33 = j_ThreadLocal<BiomeSource>::getLocal((int)v32);
    j_StructureFeature::setRandomSeedFor(v12, (Random *)v24, v25, 10387312, (int)v33, v59);
    v34 = v25;
    v35 = *((_DWORD *)v66 + 26);
    v36 = *((_DWORD *)v66 + 27);
    v37 = v34 - v34 % v35;
    v38 = v24 - v24 % *((_DWORD *)v66 + 26);
    if ( v35 == v36 )
      v12 = (StructureFeature *)&v74;
      v39 = 0;
      v40 = v71;
      v41 = v66;
    else
      v42 = v37;
      v43 = j_Random::_genRandInt32((Random *)&v74) % (v35 - v36);
      v44 = *((_QWORD *)v66 + 13);
      v38 += v43;
      if ( (_DWORD)v44 == HIDWORD(v44) )
        v39 = 0;
      else
        v39 = j_Random::_genRandInt32((Random *)&v74) % ((signed int)v44 - HIDWORD(v44));
      v37 = v42;
    v45 = v39 + v37;
    v46 = v40;
    v47 = (Level *)j_Dimension::getLevel(v40);
    v48 = (LargeFeature *)j_Level::getSeed(v47);
    j_LargeFeature::setupChunkSeed(v48, (unsigned int)&v80, (Random *)v38, v45, v58);
    j_Random::_genRandInt32((Random *)&v80);
    v72 = v38;
    v73 = v45;
    v49 = *(int (__fastcall **)(VillageFeature *, void *, unsigned int *, int *))(*(_DWORD *)v41 + 24);
    v50 = j_Dimension::getBiomes(v46);
    v51 = j_ThreadLocal<BiomeSource>::getLocal((int)v50);
    if ( v49(v41, v51, &v80, &v72) != 1 )
      v14 = v68;
      v13 = v41;
      v15 = v67;
      v21 = v69;
      if ( !v68 )
        goto LABEL_32;
      goto LABEL_31;
    HIDWORD(v56) = 16 * v45 | 8;
    v13 = v41;
    *(_DWORD *)v60 = 16 * v38 | 8;
    LODWORD(v56) = 64;
    *(_QWORD *)((char *)v60 + 4) = v56;
    v55 = 1;
    v14 = v68;
    v15 = v67;
    v54 = v63;
LABEL_34:
    if ( v55 == 7 )
      v55 = v62;
    if ( !v55 )
      v17 = v54 + 1;
      if ( v54 < v14 )
        continue;
LABEL_40:
      if ( ++v14 >= 101 )
        return 0;
      goto LABEL_4;
    break;
  if ( v55 == 4 )
    goto LABEL_40;
  return 1;
}


void __fastcall VillageFeature::~VillageFeature(VillageFeature *this)
{
  StructureFeature *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_272426C;
  v2 = (void *)*((_DWORD *)this + 23);
  if ( v2 )
    j_operator delete(v2);
  j_StructureFeature::~StructureFeature(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall VillageFeature::~VillageFeature(VillageFeature *this)
{
  VillageFeature::~VillageFeature(this);
}
