

void __fastcall EndCityFeature::~EndCityFeature(EndCityFeature *this)
{
  StructureFeature *v1; // r0@1

  v1 = j_StructureFeature::~StructureFeature(this);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall EndCityFeature::isFeatureChunk(EndCityFeature *this, BiomeSource *a2, Random *a3, const ChunkPos *a4)
{
  const ChunkPos *v4; // r10@1
  Random *v5; // r7@1
  Random *v15; // r5@5
  unsigned int v16; // r4@5
  unsigned int v17; // r6@5
  unsigned int v18; // r8@5
  unsigned int v19; // r0@5
  int v20; // r1@5
  int v21; // r2@6
  signed int v22; // r6@7
  const ChunkPos *v23; // r0@8
  TheEndGenerator *v24; // r3@8
  BiomeSource *v26; // [sp+4h] [bp-2Ch]@5
  EndCityFeature *v27; // [sp+8h] [bp-28h]@1

  v4 = a4;
  v5 = a3;
  v27 = this;
  _R3 = 1717986919;
  _R2 = *(_QWORD *)v4 >> 32;
  _R0 = *(_QWORD *)v4;
  if ( _R0 < 0 )
    _R0 -= 19;
  if ( _R2 < 0 )
    _R2 -= 19;
  __asm
  {
    SMMUL.W         R0, R0, R3
    SMMUL.W         R2, R2, R3
  }
  v15 = (Random *)(((signed int)_R0 >> 3) + (_R0 >> 31));
  j_StructureFeature::setRandomSeedFor(
    v5,
    v15,
    ((signed int)_R2 >> 3) + (_R2 >> 31),
    10387313,
    (int)a2,
    (BiomeSource *)(((signed int)_R2 >> 3) + (_R2 >> 31)));
  v16 = j_Random::_genRandInt32(v5);
  v17 = j_Random::_genRandInt32(v5);
  v18 = j_Random::_genRandInt32(v5);
  v19 = j_Random::_genRandInt32(v5);
  v20 = ((v17 % 9 + v16 % 9) >> 1) + 20 * (_DWORD)v15;
  if ( *(_DWORD *)v4 == v20 )
    v21 = *((_DWORD *)v4 + 1);
    if ( v21 == ((v19 % 9 + v18 % 9) >> 1) + 20 * (_DWORD)v26 )
    {
      v22 = 0;
      if ( j_TheEndGenerator::isIslandChunk(*((TheEndGenerator **)v27 + 23), v20, v21) == 1 )
      {
        v23 = (const ChunkPos *)j_ChunkSource::getDimension(*((ChunkSource **)v27 + 23));
        if ( j_EndCityStart::getYPositionForFeature(v4, v23, *((Dimension **)v27 + 23), v24) > 59 )
          v22 = 1;
      }
    }
    else
  else
    v22 = 0;
  return v22;
}


int __fastcall EndCityFeature::getFeatureName(int result)
{
  *(_DWORD *)result = 7;
  *(_DWORD *)(result + 4) = "EndCity";
  return result;
}


int __fastcall EndCityFeature::EndCityFeature(__int64 a1, _DWORD *a2)
{
  int v2; // r5@1
  int v3; // r4@1

  v2 = HIDWORD(a1);
  HIDWORD(a1) = *a2;
  v3 = a1;
  j_StructureFeature::StructureFeature(a1);
  *(_DWORD *)v3 = &off_27236B0;
  *(_DWORD *)(v3 + 92) = v2;
  j_EndCityPieces::init((EndCityPieces *)&off_27236B0);
  return v3;
}


void __fastcall EndCityFeature::~EndCityFeature(EndCityFeature *this)
{
  EndCityFeature::~EndCityFeature(this);
}


signed int __fastcall EndCityFeature::createStructureStart(EndCityFeature *this, Dimension *a2, Random *a3, const ChunkPos *a4, ChunkPos *a5)
{
  EndCityFeature *v5; // r8@1
  Random *v6; // r9@1
  Random *v7; // r7@1
  TheEndGenerator *v8; // r5@1
  char *v9; // r0@1
  char *v10; // r4@1
  int v11; // r12@1
  __int64 v12; // r2@1
  signed int result; // r0@1

  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (TheEndGenerator *)*((_DWORD *)a2 + 23);
  v9 = (char *)j_operator new(0x34u);
  v10 = v9;
  v11 = (int)(v9 + 28);
  v12 = *(_QWORD *)a5;
  *((_DWORD *)v9 + 5) = 0;
  *((_DWORD *)v9 + 6) = 0;
  *((_DWORD *)v9 + 3) = 0;
  *((_DWORD *)v9 + 4) = 0;
  *((_DWORD *)v9 + 1) = 0;
  *((_DWORD *)v9 + 2) = 0;
  *(_QWORD *)v11 = v12;
  *(_DWORD *)(v11 + 8) = 0;
  *((_DWORD *)v9 + 10) = 0;
  *((_DWORD *)v9 + 11) = 0;
  *(_DWORD *)v9 = &off_27236E0;
  result = j_EndCityStart::_create((EndCityStart *)v9, (Dimension *)v7, v8, v6, a5);
  *(_DWORD *)v5 = v10;
  return result;
}


int __fastcall EndCityFeature::getNearestGeneratedFeature(Dimension *this, Dimension *a2, const BlockPos *a3, BlockPos *a4)
{
  bool v5; // [sp+18h] [bp-18h]@0

  return j_StructureFeature::findNearestFeaturePositionBySpacing(
           (StructureFeature *)a2,
           this,
           a3,
           a4,
           (BlockPos *)0x14,
           11,
           10387313,
           1,
           100,
           0,
           v5);
}
