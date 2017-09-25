

_QWORD *__fastcall LargeFeature::LargeFeature(_QWORD *result)
{
  __int64 v1; // r1@1

  HIDWORD(v1) = 8;
  LODWORD(v1) = &off_27194DC;
  *result = v1;
  return result;
}


signed int __fastcall LargeFeature::setupChunkSeed(LargeFeature *this, unsigned int a2, Random *a3, int a4, int a5)
{
  unsigned int v5; // r4@1
  LargeFeature *v6; // r10@1
  int v7; // r8@1
  Random *v8; // r9@1
  int v9; // r0@1
  signed int v10; // r1@1
  unsigned int v11; // r3@1
  int v12; // r3@2
  int v13; // r5@2
  int v14; // r7@2
  unsigned int v15; // r5@3
  unsigned int v16; // r7@3
  signed int v17; // r2@3
  signed int v18; // r3@3
  unsigned int v19; // r0@3
  _DWORD *v20; // r1@3
  int v21; // r0@4
  int v22; // r7@4
  signed int result; // r0@5

  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = a3;
  j_Random::_checkThreadId((Random *)a2);
  *(_DWORD *)v5 = v6;
  *(_DWORD *)(v5 + 2500) = 625;
  v9 = 0;
  v10 = 1;
  v11 = (unsigned int)v6;
  *(_BYTE *)(v5 + 2504) = 0;
  *(_DWORD *)(v5 + 2508) = 0;
  *(_DWORD *)(v5 + 4) = v6;
  do
  {
    v12 = v11 ^ (v11 >> 30);
    v13 = v5 + 4 * v9;
    v14 = v9++ + 1812433253 * v12;
    v11 = v10++ + 1812433253 * v12;
    *(_DWORD *)(v13 + 8) = v14 + 1;
  }
  while ( v9 != 397 );
  *(_DWORD *)(v5 + 2500) = 624;
  *(_DWORD *)(v5 + 2512) = 398;
  v15 = j_Random::_genRandInt32((Random *)v5);
  v16 = j_Random::_genRandInt32((Random *)v5);
  j_Random::_checkThreadId((Random *)v5);
  v17 = 1;
  v18 = -397;
  v19 = (v15 >> 1) * (_DWORD)v8 ^ (unsigned int)v6 ^ (v16 >> 1) * v7;
  *(_DWORD *)v5 = v19;
  v20 = (_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 4) = v19;
    v21 = v19 ^ (v19 >> 30);
    v22 = v18++ + 1812433253 * v21;
    v19 = v17++ + 1812433253 * v21;
    *v20 = v22 + 398;
    ++v20;
  while ( v18 );
  result = 398;
  return result;
}


int __fastcall LargeFeature::apply(LargeFeature *this, LevelChunk *a2, Dimension *a3, Random *a4)
{
  Dimension *v4; // r5@1
  LargeFeature *v5; // r8@1
  Random *v6; // r4@1
  int v7; // r7@1
  Dimension *v8; // r0@1
  unsigned int v9; // r6@1
  int v10; // r0@1
  signed int v11; // r1@1
  int v12; // r3@2
  int v13; // r2@2
  int v14; // r3@2
  unsigned int v15; // r9@3
  unsigned int v16; // r6@3
  char *v17; // r0@3
  int result; // r0@3
  int v19; // r1@4
  int v20; // r6@5
  int v21; // r9@6
  Dimension *v22; // r7@6
  Dimension *v23; // r0@6
  int v24; // r5@6
  unsigned int v25; // r0@6
  int v26; // r1@6
  signed int v27; // r2@6
  int v28; // r0@7
  int v29; // r5@7
  int v30; // r3@7
  bool v31; // nf@8
  unsigned __int8 v32; // vf@8
  int v33; // [sp+8h] [bp-40h]@4
  int v34; // [sp+Ch] [bp-3Ch]@4
  LevelChunk *v35; // [sp+14h] [bp-34h]@1
  char *v36; // [sp+1Ch] [bp-2Ch]@3
  int v37; // [sp+20h] [bp-28h]@3

  v4 = a3;
  v5 = this;
  v6 = a4;
  v35 = a2;
  v7 = *((_DWORD *)this + 1);
  v8 = Dimension::getBiomes(a3);
  v9 = *((_DWORD *)ThreadLocal<BiomeSource>::getLocal((int)v8) + 12);
  j_Random::_checkThreadId(v6);
  *(_DWORD *)v6 = v9;
  *((_DWORD *)v6 + 625) = 625;
  v10 = 0;
  v11 = 1;
  *((_BYTE *)v6 + 2504) = 0;
  *((_DWORD *)v6 + 627) = 0;
  *((_DWORD *)v6 + 1) = v9;
  do
  {
    v12 = v9 ^ (v9 >> 30);
    v9 = v11++ + 1812433253 * v12;
    v13 = v10 + 1812433253 * v12;
    v14 = (int)v6 + 4 * v10++;
    *(_DWORD *)(v14 + 8) = v13 + 1;
  }
  while ( v10 != 397 );
  *((_DWORD *)v6 + 625) = 624;
  *((_DWORD *)v6 + 628) = 398;
  v15 = j_Random::_genRandInt32(v6);
  v16 = j_Random::_genRandInt32(v6);
  v17 = LevelChunk::getPosition(v35);
  v36 = v17;
  result = *(_DWORD *)v17;
  v37 = result - v7;
  if ( result - v7 <= result + v7 )
    v34 = (v16 >> 1) | 1;
    v33 = (v15 >> 1) | 1;
    v19 = *((_DWORD *)v36 + 1);
    do
    {
      v20 = v19 - v7;
      if ( v19 - v7 <= v19 + v7 )
      {
        do
        {
          v21 = v7;
          v22 = v4;
          v23 = Dimension::getBiomes(v4);
          v24 = *((_DWORD *)ThreadLocal<BiomeSource>::getLocal((int)v23) + 12);
          j_Random::_checkThreadId(v6);
          v25 = (v37 * v33 + v20 * v34) ^ v24;
          *(_DWORD *)v6 = v25;
          *((_DWORD *)v6 + 625) = 625;
          v26 = 0;
          *((_BYTE *)v6 + 2504) = 0;
          *((_DWORD *)v6 + 627) = 0;
          v27 = 1;
          *((_DWORD *)v6 + 1) = v25;
          do
          {
            v28 = v25 ^ (v25 >> 30);
            v29 = (int)v6 + 4 * v26;
            v30 = v26++ + 1812433253 * v28;
            v25 = v27++ + 1812433253 * v28;
            *(_DWORD *)(v29 + 8) = v30 + 1;
          }
          while ( v26 != 397 );
          *((_DWORD *)v6 + 625) = 624;
          *((_DWORD *)v6 + 628) = 398;
          (*(void (__fastcall **)(LargeFeature *, LevelChunk *, Dimension *, Random *))(*(_DWORD *)v5 + 12))(
            v5,
            v35,
            v22,
            v6);
          v4 = v22;
          v7 = v21;
          v19 = *((_DWORD *)v36 + 1);
          v32 = __OFSUB__(v20, v19 + v21);
          v31 = v20++ - (v19 + v21) < 0;
        }
        while ( v31 ^ v32 );
        result = *(_DWORD *)v36;
      }
      v32 = __OFSUB__(v37, result + v7);
      v31 = v37++ - (result + v7) < 0;
    }
    while ( v31 ^ v32 );
  return result;
}
