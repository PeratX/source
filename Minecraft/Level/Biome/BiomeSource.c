

BiomeSource::BiomeArea *__fastcall BiomeSource::BiomeArea::BiomeArea(BiomeSource::BiomeArea *this, const BoundingBox *a2, unsigned int a3, Biome *a4)
{
  BiomeSource::BiomeArea *v4; // r4@1
  char *v5; // r5@1
  __int64 v6; // kr00_8@1
  unsigned int v7; // r7@1
  unsigned int v8; // r0@1
  Biome *v10; // [sp+0h] [bp-20h]@1

  v4 = this;
  v10 = a4;
  *(_DWORD *)this = a3;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 2) = *(_DWORD *)a2;
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 8) = 0;
  v5 = (char *)this + 32;
  *((_DWORD *)v5 + 1) = 0;
  *((_DWORD *)v5 + 2) = 0;
  v6 = *((_QWORD *)a2 + 1);
  v7 = (HIDWORD(v6) - *(_DWORD *)a2) / a3;
  v8 = (*((_DWORD *)a2 + 5) - (signed int)v6) / a3;
  *((_DWORD *)v5 - 7) = v7;
  if ( v8 * v7 )
    j_std::vector<Biome *,std::allocator<Biome *>>::_M_fill_insert((int)v5, 0, v8 * v7, (int *)&v10);
  return v4;
}


int __fastcall BiomeSource::getBiome(BiomeSource *this, int a2, int a3)
{
  Biome *v4; // [sp+8h] [bp-1210h]@1
  int *v5; // [sp+Ch] [bp-120Ch]@1
  int v6; // [sp+10h] [bp-1208h]@1
  int v7; // [sp+910h] [bp-908h]@1

  v4 = (Biome *)&v6;
  v5 = &v7;
  (*(void (__cdecl **)(_DWORD, Biome **))(**((_DWORD **)this + 3) + 12))(*((_DWORD *)this + 3), &v4);
  return j_Biome::getBiome(*(Biome **)v4, Biome::DEFAULT, v4);
}


signed int __fastcall BiomeSource::containsOnly(int a1, int a2, int a3, int a4, __int64 *a5)
{
  int v5; // r5@1
  int v6; // r6@1
  __int64 v7; // kr00_8@2
  signed int result; // r0@2
  int v9; // r1@3
  int v10; // r4@4
  int *v11; // [sp+8h] [bp-1220h]@1
  int *v12; // [sp+Ch] [bp-121Ch]@1
  int v13; // [sp+10h] [bp-1218h]@1
  int v14; // [sp+910h] [bp-918h]@1

  v11 = &v13;
  v12 = &v14;
  v5 = ((a3 + a4) >> 2) - ((a3 - a4) >> 2) + 1;
  v6 = ((a4 + a2) >> 2) - ((a2 - a4) >> 2) + 1;
  (*(void (__cdecl **)(_DWORD, int **))(**(_DWORD **)(a1 + 4) + 12))(*(_DWORD *)(a1 + 4), &v11);
  if ( v6 * v5 < 1 )
  {
    result = 1;
  }
  else
    v7 = *a5;
    result = 0;
    if ( HIDWORD(v7) != (_DWORD)v7 )
    {
      v9 = 0;
      do
      {
        v10 = 0;
        while ( v11[HIDWORD(v7)] != *(_DWORD *)(v7 + 4 * v10) )
        {
          if ( ++v10 >= (unsigned int)((HIDWORD(v7) - (signed int)v7) >> 2) )
            return 0;
        }
        ++v9;
        result = 1;
      }
      while ( v9 < v6 * v5 );
    }
  return result;
}


int __fastcall BiomeSource::getBiome(BiomeSource *this, const BlockPos *a2)
{
  int v2; // r2@1
  int v3; // r1@1

  v2 = *((_DWORD *)a2 + 2);
  v3 = *(_DWORD *)a2;
  return (*(int (**)(void))(*(_DWORD *)this + 32))();
}


_DWORD *__fastcall BiomeSource::fillBiomeData(BiomeSource *this, LevelChunk *a2, int a3, int a4)
{
  LevelChunk *v4; // r4@1
  int v5; // r1@1
  int v6; // r8@1
  int v7; // r7@1
  int v8; // r6@2
  int v9; // r5@2
  const Biome *v10; // r0@3
  _DWORD *result; // r0@3
  char v12; // [sp+Ch] [bp-122Ch]@3
  char v13; // [sp+Dh] [bp-122Bh]@3
  __int16 v14; // [sp+Eh] [bp-122Ah]@3
  char *v15; // [sp+10h] [bp-1228h]@1
  int *v16; // [sp+14h] [bp-1224h]@1
  int v17; // [sp+18h] [bp-1220h]@1
  int v18; // [sp+918h] [bp-920h]@1

  v4 = a2;
  v15 = (char *)&v17;
  v16 = &v18;
  (*(void (__cdecl **)(_DWORD, char **))(**((_DWORD **)this + 3) + 12))(*((_DWORD *)this + 3), &v15);
  v6 = 0;
  v7 = 0;
  do
  {
    v8 = 0;
    v9 = v6;
    do
    {
      v12 = v8;
      v13 = v7;
      v14 = 0;
      v10 = (const Biome *)j_Biome::getBiome(*(Biome **)&v15[v9], v5);
      result = j_LevelChunk::setBiome(v4, v10, (const ChunkBlockPos *)&v12);
      ++v8;
      v9 += 4;
    }
    while ( v8 != 16 );
    ++v7;
    v6 += 64;
  }
  while ( v7 != 16 );
  return result;
}


int __fastcall BiomeSource::BiomeSource(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  int v5; // r12@1
  int v6; // r0@1
  int v7; // r2@1
  int v8; // r1@1
  int v9; // r3@1
  int v10; // r7@1
  int v11; // r6@1

  v3 = a1;
  *(_DWORD *)a1 = &off_2721B88;
  *(_DWORD *)(a1 + 4) = 0;
  v4 = a1 + 4;
  *(_DWORD *)(v4 + 12) = 0;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 44) = a2;
  j_Layer::getDefaultLayers(a2, 0, a1 + 4, a1 + 12, a3);
  v5 = v3 + 20;
  v6 = *(_DWORD *)(Biome::jungleHills + 268);
  v7 = *(_DWORD *)(Biome::forestHills + 268);
  v8 = *(_DWORD *)(Biome::jungle + 268);
  v9 = *(_DWORD *)(Biome::taigaHills + 268);
  v10 = *(_DWORD *)(Biome::taiga + 268);
  v11 = *(_DWORD *)(Biome::plains + 268);
  *(_DWORD *)v5 = *(_DWORD *)(Biome::forest + 268);
  *(_DWORD *)(v5 + 4) = v11;
  *(_DWORD *)(v5 + 8) = v10;
  *(_DWORD *)(v3 + 32) = v9;
  *(_DWORD *)(v3 + 36) = v7;
  *(_DWORD *)(v3 + 40) = v8;
  *(_DWORD *)(v3 + 44) = v6;
  return v3;
}


int __fastcall BiomeSource::getSpawnPosition(BiomeSource *this, int a2)
{
  int v2; // r6@1
  int v3; // r4@1
  int result; // r0@2
  int *v5; // [sp+8h] [bp-1228h]@1
  int *v6; // [sp+Ch] [bp-1224h]@1
  int v7; // [sp+10h] [bp-1220h]@1
  int v8; // [sp+910h] [bp-920h]@1

  v2 = 0;
  v3 = a2;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v5 = &v7;
  *((_DWORD *)this + 2) = 0;
  v6 = &v8;
  do
  {
    result = (*(int (__fastcall **)(int, int **, int, _DWORD))(*(_DWORD *)v3 + 20))(v3, &v5, v2, 0);
    v2 += 40;
  }
  while ( result != 1 );
  return result;
}


int __fastcall BiomeSource::getZoomedLayer(int result, int a2)
{
  int v2; // r1@1
  unsigned int v3; // r1@4

  *(_DWORD *)result = *(_DWORD *)(a2 + 12);
  v2 = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(result + 4) = v2;
  if ( v2 )
  {
    result = v2 + 4;
    if ( &pthread_create )
    {
      __dmb();
      do
        v3 = __ldrex((unsigned int *)result);
      while ( __strex(v3 + 1, (unsigned int *)result) );
    }
    else
      ++*(_DWORD *)result;
  }
  return result;
}


unsigned int __fastcall BiomeSource::getBiomeArea(BiomeSource *this, const BoundingBox *a2, unsigned int a3, unsigned int a4)
{
  BiomeSource *v4; // r4@1
  int v5; // r8@1
  int v6; // r5@1
  int v7; // r11@1
  int v8; // r10@1
  unsigned int v9; // r9@1
  unsigned int v10; // r2@1
  char *v11; // r7@1
  unsigned int result; // r0@3
  bool v13; // zf@3
  int v14; // r9@6
  int v15; // r5@7
  int v16; // r11@8
  int v17; // r6@8
  int v18; // r2@9
  Biome *v19; // r2@9
  int v20; // r0@9
  int v21; // r1@9
  unsigned int v22; // [sp+Ch] [bp-1244h]@3
  const BoundingBox *v23; // [sp+10h] [bp-1240h]@1
  unsigned int v24; // [sp+14h] [bp-123Ch]@3
  unsigned int v25; // [sp+18h] [bp-1238h]@1
  unsigned int v26; // [sp+1Ch] [bp-1234h]@1
  Biome **v27; // [sp+20h] [bp-1230h]@3
  int *v28; // [sp+24h] [bp-122Ch]@3
  int v29; // [sp+28h] [bp-1228h]@3
  int v30; // [sp+928h] [bp-928h]@3
  int v31; // [sp+1228h] [bp-28h]@1

  v4 = this;
  v25 = a3;
  v26 = a4;
  v23 = a2;
  v31 = 0;
  *(_DWORD *)this = a4;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  v5 = *(_DWORD *)a3;
  *((_DWORD *)this + 2) = *(_DWORD *)a3;
  *((_DWORD *)this + 3) = *(_DWORD *)(a3 + 4);
  v6 = *(_DWORD *)(a3 + 8);
  *((_DWORD *)this + 4) = v6;
  v7 = *(_DWORD *)(a3 + 12);
  *((_DWORD *)this + 5) = v7;
  *((_DWORD *)this + 6) = *(_DWORD *)(a3 + 16);
  v8 = *(_DWORD *)(a3 + 20);
  *((_DWORD *)this + 7) = v8;
  v9 = (v7 - v5) / a4;
  v10 = (v8 - v6) / a4 * v9;
  *((_DWORD *)this + 8) = 0;
  v11 = (char *)this + 32;
  *((_DWORD *)v11 + 1) = 0;
  *((_DWORD *)v11 + 2) = 0;
  *((_DWORD *)v11 - 7) = v9;
  if ( v10 )
  {
    j_std::vector<Biome *,std::allocator<Biome *>>::_M_fill_insert((int)this + 32, 0, v10, &v31);
    v5 = *(_DWORD *)v25;
    v7 = *(_QWORD *)(v25 + 8) >> 32;
    v6 = *(_QWORD *)(v25 + 8);
    v8 = *(_DWORD *)(v25 + 20);
  }
  v27 = (Biome **)&v29;
  v28 = &v30;
  v24 = (v7 - v5) / v26;
  result = (v8 - v6) / v26;
  v13 = result == 0;
  v22 = (v8 - v6) / v26;
  if ( result )
    result = (v7 - v5) / v26;
    v13 = v24 == 0;
  if ( !v13 )
    v14 = 0;
    while ( 1 )
    {
      v16 = 0;
      v17 = 0;
      do
      {
        v18 = *(_DWORD *)v25 + v16;
        (*(void (__cdecl **)(_DWORD, Biome ***))(**((_DWORD **)v23 + 3) + 12))(*((_DWORD *)v23 + 3), &v27);
        v20 = j_Biome::getBiome(*v27, Biome::DEFAULT, v19);
        v21 = v17++ + v14 * *((_DWORD *)v4 + 1);
        *(_DWORD *)(*((_DWORD *)v4 + 8) + 4 * v21) = v20;
        v16 += v26;
      }
      while ( v17 != v24 );
      ++v14;
      result = v22;
      if ( v14 == v22 )
        break;
      v15 = *(_DWORD *)(v25 + 8);
    }
  return result;
}


Biome *__fastcall BiomeSource::fillRawBiomeData(BiomeSource *this, Biome **a2, int a3, int a4)
{
  Biome **v4; // r4@1
  Biome *v5; // r2@1
  int v6; // r5@1
  Biome *result; // r0@2
  int *v8; // [sp+8h] [bp-1220h]@1
  int *v9; // [sp+Ch] [bp-121Ch]@1
  int v10; // [sp+10h] [bp-1218h]@1
  int v11; // [sp+910h] [bp-918h]@1

  v4 = a2;
  v8 = &v10;
  v9 = &v11;
  (*(void (__cdecl **)(_DWORD, int **))(**((_DWORD **)this + 1) + 12))(*((_DWORD *)this + 1), &v8);
  v6 = 0;
  do
  {
    result = (Biome *)j_Biome::getBiome((Biome *)v8[v6], Biome::DEFAULT, v5);
    v4[v6++] = result;
  }
  while ( v6 != 100 );
  return result;
}


void __fastcall BiomeSource::~BiomeSource(BiomeSource *this)
{
  BiomeSource *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  int v7; // r5@15
  unsigned int *v8; // r1@16
  unsigned int v9; // r0@18
  unsigned int *v10; // r6@22
  unsigned int v11; // r0@24

  v1 = this;
  *(_DWORD *)this = &off_2721B88;
  v2 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  v7 = *((_DWORD *)v1 + 2);
  if ( v7 )
    v8 = (unsigned int *)(v7 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall BiomeSource::~BiomeSource(BiomeSource *this)
{
  BiomeSource::~BiomeSource(this);
}


signed int __fastcall BiomeSource::isValidSpawn(BiomeSource *this, int a2)
{
  int v2; // r2@1
  bool v3; // zf@1
  int v4; // r2@4
  bool v5; // zf@4
  int v6; // r2@7
  bool v7; // zf@7
  signed int result; // r0@11
  int v9; // r2@12

  v2 = *((_DWORD *)this + 5);
  v3 = v2 == a2;
  if ( v2 != a2 )
    v3 = *((_DWORD *)this + 6) == a2;
  if ( v3 )
    goto LABEL_16;
  v4 = *((_DWORD *)this + 7);
  v5 = v4 == a2;
  if ( v4 != a2 )
    v5 = *((_DWORD *)this + 8) == a2;
  if ( v5 )
  v6 = *((_DWORD *)this + 9);
  v7 = v6 == a2;
  if ( v6 != a2 )
    v7 = *((_DWORD *)this + 10) == a2;
  if ( v7 )
  {
LABEL_16:
    result = 1;
  }
  else
    v9 = *((_DWORD *)this + 11);
    result = 0;
    if ( v9 == a2 )
      result = 1;
  return result;
}


signed int __fastcall BiomeSource::debugVisualizeMap(signed int result, int a2, signed int a3, signed int a4, unsigned __int64 *a5, unsigned __int64 *a6, int a7)
{
  signed int v7; // r9@4
  unsigned __int64 v8; // kr08_8@5
  unsigned int *v9; // r0@6
  unsigned int v10; // r1@8
  unsigned __int64 v11; // kr10_8@11
  unsigned int *v12; // r0@12
  unsigned int v13; // r1@14
  char *v14; // r0@17
  int v15; // r2@17
  unsigned int *v16; // r1@18
  unsigned int v17; // r2@20
  unsigned int *v18; // r1@24
  unsigned int v19; // r2@26
  unsigned int *v20; // r1@34
  unsigned int v21; // r0@36
  unsigned int *v22; // r1@42
  unsigned int v23; // r0@44
  int v24; // [sp+10h] [bp-58h]@2
  int v25; // [sp+14h] [bp-54h]@2
  signed int v26; // [sp+18h] [bp-50h]@1
  signed int v27; // [sp+1Ch] [bp-4Ch]@2
  signed int v28; // [sp+20h] [bp-48h]@1
  char v29; // [sp+24h] [bp-44h]@29
  void (__fastcall *v30)(char *, char *, signed int); // [sp+2Ch] [bp-3Ch]@29
  char *v31; // [sp+34h] [bp-34h]@29
  void (*v32)(void); // [sp+3Ch] [bp-2Ch]@17
  signed int (__fastcall *v33)(int); // [sp+40h] [bp-28h]@29

  v26 = a4;
  v28 = a3;
  if ( a4 >= 1 )
  {
    v25 = a2 - a4 / 2;
    v24 = result - a3 / 2;
    v27 = 0;
    do
    {
      if ( a3 > 0 )
      {
        v7 = 0;
        do
        {
          v8 = *a5;
          if ( *a5 >> 32 )
          {
            v9 = (unsigned int *)(HIDWORD(v8) + 8);
            if ( &pthread_create )
            {
              __dmb();
              do
                v10 = __ldrex(v9);
              while ( __strex(v10 + 1, v9) );
            }
            else
              ++*v9;
          }
          v11 = *a6;
          if ( *a6 >> 32 )
            v12 = (unsigned int *)(HIDWORD(v11) + 8);
                v13 = __ldrex(v12);
              while ( __strex(v13 + 1, v12) );
              ++*v12;
          v32 = 0;
          v14 = (char *)j_operator new(0x28u);
          v15 = (int)(v14 + 16);
          *(_DWORD *)v14 = v24;
          *((_DWORD *)v14 + 1) = v25;
          *((_DWORD *)v14 + 2) = v28;
          *((_DWORD *)v14 + 3) = v26;
          *(_DWORD *)v15 = v27;
          *(_DWORD *)(v15 + 4) = v7;
          *(_DWORD *)(v15 + 8) = v8;
          *((_DWORD *)v14 + 7) = HIDWORD(v8);
          if ( HIDWORD(v8) )
            v16 = (unsigned int *)(HIDWORD(v8) + 8);
                v17 = __ldrex(v16);
              while ( __strex(v17 + 1, v16) );
              ++*v16;
          *((_QWORD *)v14 + 4) = v11;
          if ( HIDWORD(v11) )
            v18 = (unsigned int *)(HIDWORD(v11) + 8);
                v19 = __ldrex(v18);
              while ( __strex(v19 + 1, v18) );
              ++*v18;
          v31 = v14;
          v33 = sub_1AAD6EC;
          v32 = (void (*)(void))sub_1AADB98;
          v30 = 0;
          j_TaskGroup::queue(a7, (int)&v31, (int)&v29, 1u, 0xFFFFFFFF);
          if ( v30 )
            v30(&v29, &v29, 3);
          if ( v32 )
            v32();
            v20 = (unsigned int *)(HIDWORD(v11) + 8);
                v21 = __ldrex(v20);
              while ( __strex(v21 - 1, v20) );
              v21 = (*v20)--;
            if ( v21 == 1 )
              (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v11) + 12))(HIDWORD(v11));
            v22 = (unsigned int *)(HIDWORD(v8) + 8);
                v23 = __ldrex(v22);
              while ( __strex(v23 - 1, v22) );
              v23 = (*v22)--;
            if ( v23 == 1 )
              (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v8) + 12))(HIDWORD(v8));
          a3 = v28;
          v7 += 16;
        }
        while ( v7 < v28 );
      }
      result = v26;
      v27 += 16;
    }
    while ( v27 < v26 );
  }
  return result;
}


int __fastcall BiomeSource::BiomeSource(int result, int a2)
{
  *(_DWORD *)(result + 48) = a2;
  *(_QWORD *)result = (unsigned int)&off_2721B88;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  return result;
}


BiomeSource *__fastcall BiomeSource::~BiomeSource(BiomeSource *this)
{
  BiomeSource *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  int v7; // r5@15
  unsigned int *v8; // r1@16
  unsigned int v9; // r0@18
  unsigned int *v10; // r6@22
  unsigned int v11; // r0@24

  v1 = this;
  *(_DWORD *)this = &off_2721B88;
  v2 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  v7 = *((_DWORD *)v1 + 2);
  if ( v7 )
    v8 = (unsigned int *)(v7 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  return v1;
}


signed int __fastcall BiomeSource::findValidSpawnPosition(BiomeSource *this, LayerData *a2, int a3, int a4, BlockPos *a5)
{
  BiomeSource *v5; // r7@1
  LayerData *v6; // r6@1
  int v7; // r10@1
  int v8; // r9@1
  int v9; // r8@1
  int v10; // r11@1
  int v11; // r4@2
  int v12; // r5@2

  v5 = this;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  (*(void (__cdecl **)(_DWORD, LayerData *))(**((_DWORD **)this + 1) + 12))(*((_DWORD *)this + 1), a2);
  v9 = 0;
  v10 = 0;
  while ( 2 )
  {
    v11 = 0;
    v12 = v9;
    do
    {
      if ( (*(int (__fastcall **)(BiomeSource *, _DWORD))(*(_DWORD *)v5 + 24))(v5, *(_DWORD *)(*(_DWORD *)v6 + v12)) == 1
        && (*(int (__fastcall **)(BiomeSource *, _DWORD))(*(_DWORD *)v5 + 24))(v5, *(_DWORD *)(*(_DWORD *)v6 + v12 - 4)) == 1
        && (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v5 + 24))(v5, *(_DWORD *)(*(_DWORD *)v6 + v12 + 4)) == 1
        && (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v5 + 24))(v5, *(_DWORD *)(*(_DWORD *)v6 + v12 - 40)) == 1
        && (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v5 + 24))(v5, *(_DWORD *)(*(_DWORD *)v6 + v12 + 40)) )
      {
        *(_DWORD *)a5 = v7 + 4 * v11;
        *((_DWORD *)a5 + 1) = 0x7FFF;
        *((_DWORD *)a5 + 2) = v8 + 4 * v10;
        return 1;
      }
      ++v11;
      v12 += 4;
    }
    while ( v11 != 10 );
    ++v10;
    v9 += 40;
    if ( v10 != 10 )
      continue;
    break;
  }
  return 0;
}
