

void __fastcall RegionHillsLayer::~RegionHillsLayer(RegionHillsLayer *this)
{
  Layer *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_2724A5C;
  v2 = *((_DWORD *)this + 13);
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
  j_Layer::~Layer(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall RegionHillsLayer::fillArea(RegionHillsLayer *this, LayerData *a2, int a3, int a4, int a5, int a6)
{
  RegionHillsLayer *v6; // r4@1
  LayerData *v7; // r8@1
  int v8; // r9@1
  int v9; // r0@2
  Layer *v10; // r6@4
  int v11; // r2@4
  int v12; // r11@4
  int v13; // r7@4
  int v14; // r0@6
  int v15; // r2@6
  _DWORD *v16; // r1@6
  _DWORD *v17; // r0@6
  int v18; // r10@9
  signed int v20; // r0@9
  int v26; // r4@9
  int v27; // r1@9
  int v28; // r5@9
  int v29; // r0@13
  int v30; // r1@13
  int v31; // r0@15
  Biome *v33; // r6@37
  int v34; // r4@37
  LayerData *v35; // r7@42
  Layer *v36; // r4@42
  Layer *v37; // r0@42
  Layer *v38; // r8@42
  int v39; // r9@42
  int v40; // r2@42
  int v41; // r0@42
  int v42; // r2@42
  unsigned int v43; // r4@42
  Layer *v44; // r0@44
  int v45; // r2@46
  int v46; // r0@50
  int v48; // [sp+60h] [bp-1278h]@2
  int v49; // [sp+64h] [bp-1274h]@1
  int v50; // [sp+70h] [bp-1268h]@4
  int v51; // [sp+84h] [bp-1254h]@1
  int v52; // [sp+88h] [bp-1250h]@4
  int v53; // [sp+8Ch] [bp-124Ch]@4
  Layer *v54; // [sp+94h] [bp-1244h]@42
  RegionHillsLayer *v55; // [sp+9Ch] [bp-123Ch]@1
  int v56; // [sp+A0h] [bp-1238h]@4
  int v57; // [sp+A4h] [bp-1234h]@4
  __int64 v58; // [sp+A8h] [bp-1230h]@1
  int *v59; // [sp+B0h] [bp-1228h]@1
  int v60; // [sp+B4h] [bp-1224h]@1
  int v61; // [sp+9B4h] [bp-924h]@1

  v6 = this;
  v7 = a2;
  v8 = a3;
  v49 = a4;
  v51 = a3;
  v55 = this;
  (*(void (__cdecl **)(_DWORD, LayerData *))(**((_DWORD **)this + 10) + 12))(*((_DWORD *)this + 10), a2);
  HIDWORD(v58) = &v60;
  v59 = &v61;
  (*(void (__cdecl **)(_DWORD, char *))(**((_DWORD **)v6 + 12) + 12))(*((_DWORD *)v6 + 12), (char *)&v58 + 4);
  if ( !a6 )
    return j_LayerData::swap(v7);
  v48 = 4 * a5 + 8;
  v9 = 0;
  do
  {
    if ( !a5 )
    {
      ++v9;
      continue;
    }
    v50 = v9 + 1;
    v10 = v6;
    v11 = (v9 + 1) * v48;
    v12 = v11 + 8;
    v56 = 4 * a5 * v9;
    LODWORD(v58) = v9 + v49;
    v53 = v48 * v9 + 4;
    v13 = 0;
    v57 = v11 + 4;
    v52 = (v9 + 2) * v48 + 4;
    do
      v18 = v13;
      j_Layer::initRandom(v10, v58, v8 + v13, (signed int)v58);
      _R2 = -1925330167;
      v20 = *(_DWORD *)(HIDWORD(v58) + v57 + 4 * v13);
      _R1 = v20 - 2;
      __asm { SMMLA.W         R2, R2, R1, R1 }
      v26 = v20 - 2 - 29 * (((signed int)_R2 >> 4) + (_R2 >> 31));
      v27 = *(_DWORD *)v7 + v57;
      ++v13;
      v28 = *(_DWORD *)(v27 + 4 * v18);
      if ( v28 && v20 >= 2 && v28 <= 127 && v26 == 1 )
      {
        v29 = j_Biome::getBiome((Biome *)(v28 + 128), v27);
        v30 = *((_DWORD *)v7 + 1) + v56;
        if ( v29 )
          *(_DWORD *)(v30 + 4 * v18) = v28 + 128;
        else
          *(_DWORD *)(v30 + 4 * v18) = v28;
        goto LABEL_69;
      }
      v31 = j_Layer::nextRandom(v10, 3);
      _ZF = v26 == 0;
      if ( v26 )
        _ZF = v31 == 0;
      if ( !_ZF )
        *(_DWORD *)(*((_DWORD *)v7 + 1) + v56 + 4 * v18) = v28;
      if ( v28 == *(_DWORD *)(Biome::desert + 268) )
        v17 = &Biome::desertHills;
        goto LABEL_37;
      if ( v28 == *(_DWORD *)(Biome::forest + 268) )
        goto LABEL_36;
      if ( v28 == *(_DWORD *)(Biome::birchForest + 268) )
        v17 = &Biome::birchForestHills;
      if ( v28 == *(_DWORD *)(Biome::roofedForest + 268) )
        v17 = &Biome::plains;
      if ( v28 == *(_DWORD *)(Biome::taiga + 268) )
        v17 = &Biome::taigaHills;
      if ( v28 == *(_DWORD *)(Biome::redwoodTaiga + 268) )
        v17 = &Biome::redwoodTaigaHills;
      if ( v28 == *(_DWORD *)(Biome::taigaCold + 268) )
        v17 = &Biome::taigaColdHills;
      if ( v28 == *(_DWORD *)(Biome::plains + 268) )
        if ( j_Layer::nextRandom(v55, 3) )
        {
          v17 = &Biome::forest;
          goto LABEL_37;
        }
LABEL_36:
        v17 = &Biome::forestHills;
      if ( v28 == *(_DWORD *)(Biome::iceFlats + 268) )
        v17 = &Biome::iceMountains;
      else if ( v28 == *(_DWORD *)(Biome::jungle + 268) )
        v17 = &Biome::jungleHills;
      else if ( v28 == *(_DWORD *)(Biome::ocean + 268) )
        v17 = &Biome::deepOcean;
      else if ( v28 == *(_DWORD *)(Biome::extremeHills + 268) )
        v17 = &Biome::extremeHillsWithTrees;
      else if ( v28 == *(_DWORD *)(Biome::savanna + 268) )
        v17 = &Biome::savannaRock;
      else if ( j_Layer::_isSame((Layer *)v28, *(_DWORD *)(Biome::mesaRock + 268), v15) == 1 )
        v17 = &Biome::mesa;
      else
        if ( v28 != *(_DWORD *)(Biome::deepOcean + 268) || j_Layer::nextRandom(v55, 3) )
          goto LABEL_68;
        v14 = j_Layer::nextRandom(v55, 2);
        v16 = &Biome::plains;
        _ZF = v14 == 0;
        v17 = &Biome::forest;
        if ( _ZF )
          v17 = &Biome::plains;
LABEL_37:
      v33 = *(Biome **)(*v17 + 268);
      v34 = v26 != 0;
      if ( v33 != (Biome *)v28 && !v34 )
        v33 = (Biome *)((char *)v33 + 128);
        if ( !j_Biome::getBiome(v33, (int)v16) )
          v33 = (Biome *)v28;
      if ( v33 == (Biome *)v28 )
LABEL_68:
        v10 = v55;
      v35 = v7;
      v36 = *(Layer **)(*(_DWORD *)v7 + v12);
      v54 = *(Layer **)(v52 + *(_DWORD *)v7 + 4 * v18);
      v37 = *(Layer **)(v53 + *(_DWORD *)v7 + 4 * v18);
      v38 = *(Layer **)(*(_DWORD *)v7 + v12 - 8);
      v39 = j_Layer::_isSame(v37, v28, v15);
      v41 = j_Layer::_isSame(v36, v28, v40);
      v43 = 1;
      if ( v39 )
        v43 = 2;
      _ZF = v41 == 0;
      v44 = v38;
      if ( _ZF )
        v43 = v39;
      v7 = v35;
      if ( j_Layer::_isSame(v44, v28, v42) )
        ++v43;
      if ( j_Layer::_isSame(v54, v28, v45) )
      v46 = v56 + *((_DWORD *)v35 + 1);
      if ( v43 < 3 )
        *(_DWORD *)(v46 + 4 * v18) = v28;
        *(_DWORD *)(v46 + 4 * v18) = v33;
      v8 = v51;
      v10 = v55;
      v13 = v18 + 1;
LABEL_69:
      v12 += 4;
    while ( a5 != v13 );
    v6 = v10;
    v9 = v50;
  }
  while ( v9 != a6 );
  return j_LayerData::swap(v7);
}


Layer *__fastcall RegionHillsLayer::~RegionHillsLayer(RegionHillsLayer *this)
{
  Layer *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_2724A5C;
  v2 = *((_DWORD *)this + 13);
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
  return j_j_j__ZN5LayerD2Ev_0(v1);
}


int __fastcall RegionHillsLayer::RegionHillsLayer(int a1, unsigned int a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r4@1
  int v7; // r0@1
  unsigned int *v8; // r0@2
  unsigned int v9; // r1@4
  int v10; // r5@7
  int v11; // r6@7
  unsigned int *v12; // r0@9
  unsigned int v13; // r1@11
  unsigned int *v14; // r1@15
  unsigned int v15; // r0@17
  unsigned int *v16; // r7@21
  unsigned int v17; // r0@23

  v4 = a4;
  v5 = a3;
  v6 = a1;
  j_Layer::Layer(a1, a2);
  *(_DWORD *)v6 = &off_2724A5C;
  *(_DWORD *)(v6 + 48) = *(_DWORD *)v4;
  v7 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v6 + 52) = v7;
  if ( v7 )
  {
    v8 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  *(_DWORD *)(v6 + 40) = *(_DWORD *)v5;
  v10 = *(_DWORD *)(v6 + 44);
  v11 = *(_DWORD *)(v5 + 4);
  if ( v11 != v10 )
    if ( v11 )
      v12 = (unsigned int *)(v11 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 + 1, v12) );
        v10 = *(_DWORD *)(v6 + 44);
      }
      else
        ++*v12;
    if ( v10 )
      v14 = (unsigned int *)(v10 + 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 == 1 )
        v16 = (unsigned int *)(v10 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
        if ( &pthread_create )
        {
          __dmb();
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
        }
        else
          v17 = (*v16)--;
        if ( v17 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
    *(_DWORD *)(v6 + 44) = v11;
  return v6;
}


void __fastcall RegionHillsLayer::~RegionHillsLayer(RegionHillsLayer *this)
{
  RegionHillsLayer::~RegionHillsLayer(this);
}
