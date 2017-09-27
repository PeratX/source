

void __fastcall WoodlandMansionFeature::~WoodlandMansionFeature(WoodlandMansionFeature *this)
{
  StructureFeature *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_27246F4;
  v2 = (void *)*((_DWORD *)this + 25);
  if ( v2 )
    j_operator delete(v2);
  j_StructureFeature::~StructureFeature(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall WoodlandMansionFeature::getFeatureName(int result)
{
  *(_DWORD *)result = 7;
  *(_DWORD *)(result + 4) = "Mansion";
  return result;
}


int __fastcall WoodlandMansionFeature::WoodlandMansionFeature(__int64 a1)
{
  int v1; // r6@1
  int v2; // r4@1
  int v3; // r5@1

  v1 = HIDWORD(a1);
  v2 = a1;
  j_StructureFeature::StructureFeature(a1);
  *(_DWORD *)v2 = &off_27246F4;
  *(_DWORD *)(v2 + 92) = 80;
  *(_DWORD *)(v2 + 96) = 20;
  *(_DWORD *)(v2 + 100) = 0;
  v3 = v2 + 100;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = v1;
  j_std::vector<int,std::allocator<int>>::emplace_back<int &>(v2 + 100, (int *)(Biome::roofedForest + 268));
  j_std::vector<int,std::allocator<int>>::emplace_back<int &>(v2 + 100, (int *)(Biome::roofedForestMutated + 268));
  return v2;
}


int __fastcall WoodlandMansionFeature::getNearestGeneratedFeature(Dimension *this, Dimension *a2, const BlockPos *a3, BlockPos *a4)
{
  bool v5; // [sp+18h] [bp-18h]@0

  return j_StructureFeature::findNearestFeaturePositionBySpacing(
           (StructureFeature *)a2,
           this,
           a3,
           a4,
           (BlockPos *)*(_QWORD *)(this + 46),
           *(_QWORD *)(this + 46) >> 32,
           10387319,
           1,
           100,
           0,
           v5);
}


void __fastcall WoodlandMansionFeature::~WoodlandMansionFeature(WoodlandMansionFeature *this)
{
  WoodlandMansionFeature::~WoodlandMansionFeature(this);
}


int __fastcall WoodlandMansionFeature::isFeatureChunk(WoodlandMansionFeature *this, BiomeSource *a2, Random *a3, const ChunkPos *a4)
{
  const ChunkPos *v4; // r10@1
  WoodlandMansionFeature *v5; // r9@1
  signed int v6; // r0@1
  signed int v7; // r7@1
  Random *v8; // r11@1
  signed int v9; // r6@3
  int v10; // r4@3
  BiomeSource *v11; // r5@5
  __int64 v12; // kr10_8@5
  int v13; // r8@5
  signed int v14; // r7@6
  __int64 v15; // r0@7
  int v16; // r4@8
  unsigned int v17; // r7@9
  unsigned int v18; // r1@9
  int v19; // r0@11
  int result; // r0@13
  unsigned int v21; // r1@15
  __int64 v22; // kr18_8@15
  __int64 v23; // r0@16
  BiomeSource *v24; // [sp+4h] [bp-2Ch]@0
  int v25; // [sp+8h] [bp-28h]@5

  v4 = a4;
  v5 = this;
  v7 = *(_QWORD *)a4 >> 32;
  v6 = *(_QWORD *)a4;
  v8 = a3;
  if ( v6 <= -1 )
    v6 = v6 + 1 - *((_DWORD *)v5 + 23);
  v9 = *((_DWORD *)v5 + 23);
  v10 = v6 / *((_DWORD *)v5 + 23);
  if ( v7 < 0 )
    v7 = (*(_QWORD *)a4 >> 32) + 1 - v9;
  v25 = v7 / v9;
  v11 = a2;
  j_StructureFeature::setRandomSeedFor(a3, (Random *)v10, v7 / v9, 10387319, (int)a2, v24);
  v12 = *(_QWORD *)((char *)v5 + 92);
  v13 = v12 * v10;
  if ( (_DWORD)v12 == HIDWORD(v12) )
  {
    v14 = 0;
LABEL_8:
    v16 = v13 + v14 / 2;
LABEL_9:
    v17 = 0;
    v18 = 0;
    goto LABEL_10;
  }
  v14 = j_Random::_genRandInt32(v8) % ((signed int)v12 - HIDWORD(v12));
  v15 = *(_QWORD *)((char *)v5 + 92);
  if ( (_DWORD)v15 == HIDWORD(v15) )
    goto LABEL_8;
  v21 = j_Random::_genRandInt32(v8) % ((signed int)v15 - HIDWORD(v15));
  v22 = *(_QWORD *)((char *)v5 + 92);
  v16 = v13 + (signed int)(v21 + v14) / 2;
  if ( (_DWORD)v22 == HIDWORD(v22) )
    goto LABEL_9;
  v17 = j_Random::_genRandInt32(v8) % ((signed int)v22 - HIDWORD(v22));
  v23 = *(_QWORD *)((char *)v5 + 92);
  if ( (_DWORD)v23 == HIDWORD(v23) )
  else
    v18 = j_Random::_genRandInt32(v8) % ((signed int)v23 - HIDWORD(v23));
LABEL_10:
  result = 0;
  if ( *(_DWORD *)v4 == v16 )
    v19 = v25 * v12 + (signed int)(v18 + v17) / 2;
    if ( *((_DWORD *)v4 + 1) == v19 )
    {
      if ( (*(int (__fastcall **)(BiomeSource *, int, int, signed int))(*(_DWORD *)v11 + 28))(
             v11,
             16 * v16 | 8,
             16 * v19 | 8,
             32) )
      {
        result = 1;
      }
    }
  return result;
}


StructureFeature *__fastcall WoodlandMansionFeature::~WoodlandMansionFeature(WoodlandMansionFeature *this)
{
  StructureFeature *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_27246F4;
  v2 = (void *)*((_DWORD *)this + 25);
  if ( v2 )
    j_operator delete(v2);
  return j_j_j__ZN16StructureFeatureD2Ev_1(v1);
}


RakNet *__fastcall WoodlandMansionFeature::createStructureStart(WoodlandMansionFeature *this, Dimension *a2, Random *a3, const ChunkPos *a4, __int64 *a5)
{
  WoodlandMansionFeature *v5; // r8@1
  Random *v6; // r6@1
  Random *v7; // r7@1
  OverworldGenerator *v8; // r5@1
  void *v9; // r0@1
  void *v10; // r4@1
  __int64 v11; // kr00_8@1
  RakNet *result; // r0@1

  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (OverworldGenerator *)*((_DWORD *)a2 + 28);
  v9 = j_operator new(0x40u);
  v10 = v9;
  v11 = *a5;
  *((_DWORD *)v9 + 5) = 0;
  *((_DWORD *)v9 + 6) = 0;
  *((_DWORD *)v9 + 3) = 0;
  *((_DWORD *)v9 + 4) = 0;
  *((_DWORD *)v9 + 1) = 0;
  *((_DWORD *)v9 + 2) = 0;
  *(_QWORD *)((char *)v9 + 28) = v11;
  *((_DWORD *)v9 + 9) = 0;
  *((_DWORD *)v9 + 10) = 0;
  *((_DWORD *)v9 + 11) = 0;
  *(_DWORD *)v9 = &off_2724724;
  *((_DWORD *)v9 + 13) = 0;
  *((_DWORD *)v9 + 14) = 0;
  *((_DWORD *)v9 + 15) = 0;
  result = j_WoodlandMansionStart::_create((WoodlandMansionStart *)v9, (Dimension *)v7, v8, v6, v11, SHIDWORD(v11));
  *(_DWORD *)v5 = v10;
  return result;
}
