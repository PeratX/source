

signed int __fastcall BiomeEdgeLayer::checkEdgeStrict(BiomeEdgeLayer *this, LayerData *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // r5@1
  int v9; // r6@1
  LayerData *v10; // r4@1
  int v11; // r3@2
  Layer *v12; // r8@2
  Layer *v13; // r9@2
  Layer *v14; // r7@2
  int v15; // r2@2
  int v16; // r2@3
  int v17; // r2@4
  signed int result; // r0@7

  v8 = a4;
  v9 = a3;
  v10 = a2;
  if ( a6 == a7 )
  {
    v11 = a3 + (a5 + 2) * (a4 + 1);
    v12 = *(Layer **)(*(_DWORD *)a2 + 4 * (a3 + 1 + (a5 + 2) * (v8 + 2)));
    v13 = *(Layer **)(*(_DWORD *)a2 + 4 * v11);
    v14 = *(Layer **)(*(_DWORD *)a2 + 4 * v11 + 8);
    if ( j_Layer::_isSame(*(Layer **)(*(_DWORD *)a2 + 4 * (a3 + 1 + (a5 + 2) * v8)), a6, a3 + 1) == 1
      && j_Layer::_isSame(v14, a6, v15) == 1
      && j_Layer::_isSame(v13, a6, v16) == 1
      && j_Layer::_isSame(v12, a6, v17) )
    {
      *(_DWORD *)(*((_DWORD *)v10 + 1) + 4 * (v9 + a5 * v8)) = a6;
    }
    else
      *(_DWORD *)(*((_DWORD *)v10 + 1) + 4 * (v9 + a5 * v8)) = a8;
    result = 1;
  }
  else
    result = 0;
  return result;
}


void __fastcall BiomeEdgeLayer::~BiomeEdgeLayer(BiomeEdgeLayer *this)
{
  BiomeEdgeLayer::~BiomeEdgeLayer(this);
}


int __fastcall BiomeEdgeLayer::fillArea(BiomeEdgeLayer *this, LayerData *a2, int a3, int a4, int a5, int a6)
{
  LayerData *v6; // r5@1
  int v7; // r10@2
  int v8; // r8@4
  int v9; // r9@4
  int v10; // r6@5
  int v11; // r11@5
  signed int v12; // r0@5
  int v13; // r3@8
  int v14; // r6@9
  int v15; // r1@10
  int v16; // r0@10
  int v17; // r2@11
  int v18; // r3@11
  bool v19; // zf@11
  int v20; // r0@15
  _DWORD *v21; // r1@15
  int v22; // r1@18
  int v23; // r2@18
  int v24; // r12@18
  bool v25; // zf@18
  int v26; // r3@21
  bool v27; // zf@21
  int v28; // r6@24
  bool v29; // zf@25
  bool v30; // zf@28
  bool v31; // zf@31
  int v32; // r6@35
  bool v33; // zf@36
  int v35; // [sp+2Ch] [bp-74h]@2
  int v36; // [sp+30h] [bp-70h]@1
  int v37; // [sp+3Ch] [bp-64h]@4
  int v38; // [sp+48h] [bp-58h]@4
  int v39; // [sp+4Ch] [bp-54h]@4
  int v40; // [sp+6Ch] [bp-34h]@1
  BiomeEdgeLayer *v41; // [sp+74h] [bp-2Ch]@1
  int v42; // [sp+78h] [bp-28h]@4

  v36 = a4;
  v6 = a2;
  v40 = a3;
  v41 = this;
  (*(void (__cdecl **)(_DWORD, LayerData *))(**((_DWORD **)this + 10) + 12))(*((_DWORD *)this + 10), a2);
  if ( a6 )
  {
    v35 = 4 * a5 + 8;
    v7 = 0;
    while ( !a5 )
    {
      ++v7;
LABEL_47:
      if ( v7 == a6 )
        return j_j_j__ZN9LayerData4swapEv_0(v6);
    }
    v8 = 0;
    v9 = 0;
    v39 = 4 * a5 * v7;
    v42 = v35 * (v7 + 1);
    v37 = v35 * v7 + 4;
    v38 = (v7 + 2) * v35 + 4;
    while ( 1 )
      v10 = v9;
      j_Layer::initRandom(v41, v36 + v7, v40 + v9, v36 + v7);
      v11 = *(_DWORD *)(*(_DWORD *)v6 + v42 + v8 + 4);
      v12 = j_BiomeEdgeLayer::checkEdge(
              v41,
              v6,
              v9++,
              v7,
              a5,
              *(_DWORD *)(*(_DWORD *)v6 + v42 + v8 + 4),
              *(_DWORD *)(Biome::extremeHills + 268),
              *(_DWORD *)(Biome::smallerExtremeHills + 268));
      if ( v12
        || j_BiomeEdgeLayer::checkEdgeStrict(
             *(BiomeEdgeLayer **)(Biome::mesaRock + 268),
             v6,
             v10,
             v7,
             a5,
             v11,
             *(_DWORD *)(Biome::mesaRock + 268),
             *(_DWORD *)(Biome::mesa + 268))
             *(BiomeEdgeLayer **)(Biome::mesaClearRock + 268),
             *(_DWORD *)(Biome::mesaClearRock + 268),
             *(BiomeEdgeLayer **)(Biome::redwoodTaiga + 268),
             *(_DWORD *)(Biome::redwoodTaiga + 268),
             *(_DWORD *)(Biome::taiga + 268)) )
      {
        goto LABEL_44;
      }
      v14 = *(_DWORD *)(Biome::desert + 268);
      if ( v11 == v14 )
        v15 = *(_DWORD *)v6 + v8;
        v16 = *(_DWORD *)(Biome::iceFlats + 268);
        if ( *(_DWORD *)(v15 + v38) == v16 )
          goto LABEL_51;
        v17 = *(_DWORD *)v6 + v42;
        v18 = *(_DWORD *)(v17 + v8);
        v19 = v18 == v16;
        if ( v18 != v16 )
          v19 = *(_DWORD *)(v15 + v37) == v16;
        if ( v19 || *(_DWORD *)(v17 + v8 + 8) == v16 )
        {
LABEL_51:
          v20 = *((_DWORD *)v6 + 1);
          v21 = &Biome::extremeHillsWithTrees;
LABEL_43:
          *(_DWORD *)(v20 + v39 + v8) = *(_DWORD *)(*v21 + 268);
          goto LABEL_44;
        }
      else if ( *((_BYTE *)v41 + 48) && v11 == *(_DWORD *)(Biome::swampland + 268) )
        v22 = *(_DWORD *)v6;
        v23 = *(_DWORD *)v6 + v8;
        v24 = *(_DWORD *)(v23 + v37);
        v25 = v24 == v14;
        if ( v24 != v14 )
          v13 = v42 + v22;
          v22 = *(_DWORD *)(v42 + v22 + v8 + 8);
          v25 = v22 == v14;
        if ( v25 )
          goto LABEL_52;
        v26 = *(_DWORD *)(v13 + v8);
        v27 = v26 == v14;
        if ( v26 != v14 )
          v23 = *(_DWORD *)(v23 + v38);
          v27 = v23 == v14;
        if ( v27 )
        v28 = *(_DWORD *)(Biome::taigaCold + 268);
        if ( v23 == v28 )
        v29 = v26 == v28;
        if ( v26 != v28 )
          v29 = v24 == v28;
        if ( v29 )
        v30 = v22 == v28;
        if ( v22 != v28 )
          v28 = *(_DWORD *)(Biome::iceFlats + 268);
          v30 = v23 == v28;
        if ( v30 )
        v31 = v26 == v28;
          v31 = v24 == v28;
        if ( v31 || v22 == v28 )
LABEL_52:
          v21 = &Biome::plains;
          goto LABEL_43;
        v32 = *(_DWORD *)(Biome::jungle + 268);
        if ( v26 == v32 )
          goto LABEL_53;
        v33 = v22 == v32;
        if ( v22 != v32 )
          v33 = v24 == v32;
        if ( v33 || v23 == v32 )
LABEL_53:
          v21 = &Biome::jungleEdge;
      *(_DWORD *)(*((_DWORD *)v6 + 1) + v39 + v8) = v11;
LABEL_44:
      v8 += 4;
      if ( a5 == v9 )
        ++v7;
        goto LABEL_47;
  }
  return j_j_j__ZN9LayerData4swapEv_0(v6);
}


int __fastcall BiomeEdgeLayer::isValidTemperatureEdge(BiomeEdgeLayer *this, int a2, int a3)
{
  Biome *v3; // r5@1
  Biome *v4; // r4@1
  int v5; // r1@1
  int result; // r0@2
  int v7; // r5@3
  int v8; // r1@3
  int v9; // r4@3
  bool v10; // zf@3
  int v11; // r5@6
  int v12; // r0@6
  signed int v13; // r2@6
  signed int v14; // r3@8
  signed int v15; // r1@8
  int v16; // r2@10

  v3 = (Biome *)a2;
  v4 = (Biome *)a3;
  if ( j_Layer::_isSame((Layer *)a2, a3, a3) )
  {
    result = 1;
  }
  else
    v7 = j_Biome::getBiome(v3, v5);
    v9 = j_Biome::getBiome(v4, v8);
    v10 = v7 == 0;
    result = 0;
    if ( v7 )
      v10 = v9 == 0;
    if ( !v10 )
    {
      v11 = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 92))(v7);
      v12 = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 92))(v9);
      v13 = 0;
      if ( v11 == v12 )
        v13 = 1;
      v14 = 0;
      v15 = 0;
      if ( v11 == 2 )
        v14 = 1;
      v16 = v13 | v14;
      if ( v12 == 2 )
        v15 = 1;
      result = v15 | v16;
    }
  return result;
}


void __fastcall BiomeEdgeLayer::~BiomeEdgeLayer(BiomeEdgeLayer *this)
{
  Layer *v1; // r0@1

  v1 = j_Layer::~Layer(this);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall BiomeEdgeLayer::checkEdge(BiomeEdgeLayer *this, LayerData *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  LayerData *v8; // r11@1
  int v9; // r5@1
  int v10; // r6@1
  int v11; // r3@2
  Biome *v12; // r7@2
  Biome *v13; // r4@2
  int v14; // r1@2
  int v15; // r2@2
  int v16; // r8@3
  int v17; // r1@3
  int v18; // r0@3
  int v19; // r9@3
  bool v20; // zf@3
  int v21; // r7@6
  int v22; // r0@6
  bool v23; // zf@6
  int v24; // r1@10
  int v25; // r2@10
  int v26; // r7@11
  int v27; // r1@11
  int v28; // r0@11
  int v29; // r4@11
  bool v30; // zf@11
  int v31; // r7@14
  int v32; // r0@14
  bool v33; // zf@14
  int v34; // r1@18
  int v35; // r2@18
  int v36; // r7@19
  int v37; // r1@19
  int v38; // r0@19
  int v39; // r4@19
  bool v40; // zf@19
  int v41; // r7@22
  int v42; // r0@22
  bool v43; // zf@22
  int v44; // r1@26
  int v45; // r7@27
  int v46; // r1@27
  int v47; // r0@27
  int v48; // r4@27
  bool v49; // zf@27
  int v50; // r7@30
  int v51; // r0@30
  bool v52; // zf@31
  signed int result; // r0@35
  Biome *v54; // [sp+4h] [bp-2Ch]@2
  Biome *v55; // [sp+8h] [bp-28h]@2

  v8 = a2;
  v9 = a4;
  v10 = a3;
  if ( j_Layer::_isSame((Layer *)a6, a7, a3) == 1 )
  {
    v11 = v10 + (a5 + 2) * (v9 + 1);
    v54 = *(Biome **)(*(_DWORD *)v8 + 4 * (v10 + 1 + (a5 + 2) * (v9 + 2)));
    v55 = *(Biome **)(*(_DWORD *)v8 + 4 * v11);
    v12 = *(Biome **)(*(_DWORD *)v8 + 4 * (v10 + 1 + (a5 + 2) * v9));
    v13 = *(Biome **)(*(_DWORD *)v8 + 4 * v11 + 8);
    if ( !j_Layer::_isSame(*(Layer **)(*(_DWORD *)v8 + 4 * (v10 + 1 + (a5 + 2) * v9)), a7, v10 + 1) )
    {
      v16 = j_Biome::getBiome(v12, v14);
      v18 = j_Biome::getBiome((Biome *)a7, v17);
      v19 = v18;
      v20 = v16 == 0;
      if ( v16 )
        v20 = v18 == 0;
      if ( v20 )
        goto LABEL_40;
      v21 = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 92))(v16);
      v22 = (*(int (__fastcall **)(int))(*(_DWORD *)v19 + 92))(v19);
      v23 = v22 == 2;
      if ( v22 != 2 )
        v23 = v21 == 2;
      if ( !v23 && v21 != v22 )
    }
    if ( !j_Layer::_isSame(v13, a7, v15) )
      v26 = j_Biome::getBiome(v13, v24);
      v28 = j_Biome::getBiome((Biome *)a7, v27);
      v29 = v28;
      v30 = v26 == 0;
      if ( v26 )
        v30 = v28 == 0;
      if ( v30 )
      v31 = (*(int (__fastcall **)(int))(*(_DWORD *)v26 + 92))(v26);
      v32 = (*(int (__fastcall **)(int))(*(_DWORD *)v29 + 92))(v29);
      v33 = v32 == 2;
      if ( v32 != 2 )
        v33 = v31 == 2;
      if ( !v33 && v31 != v32 )
    if ( !j_Layer::_isSame(v55, a7, v25) )
      v36 = j_Biome::getBiome(v55, v34);
      v38 = j_Biome::getBiome((Biome *)a7, v37);
      v39 = v38;
      v40 = v36 == 0;
      if ( v36 )
        v40 = v38 == 0;
      if ( v40 )
      v41 = (*(int (__fastcall **)(int))(*(_DWORD *)v36 + 92))(v36);
      v42 = (*(int (__fastcall **)(int))(*(_DWORD *)v39 + 92))(v39);
      v43 = v42 == 2;
      if ( v42 != 2 )
        v43 = v41 == 2;
      if ( !v43 && v41 != v42 )
    if ( j_Layer::_isSame(v54, a7, v35) )
      goto LABEL_41;
    v45 = j_Biome::getBiome(v54, v44);
    v47 = j_Biome::getBiome((Biome *)a7, v46);
    v48 = v47;
    v49 = v45 == 0;
    if ( v45 )
      v49 = v47 == 0;
    if ( v49 )
      goto LABEL_40;
    v50 = (*(int (__fastcall **)(int))(*(_DWORD *)v45 + 92))(v45);
    v51 = (*(int (__fastcall **)(int))(*(_DWORD *)v48 + 92))(v48);
    if ( v51 == 2 )
    v52 = v50 == 2;
    if ( v50 != 2 )
      v52 = v50 == v51;
    if ( v52 )
LABEL_41:
      *(_DWORD *)(*((_DWORD *)v8 + 1) + 4 * (v10 + a5 * v9)) = a6;
    else
LABEL_40:
      *(_DWORD *)(*((_DWORD *)v8 + 1) + 4 * (v10 + a5 * v9)) = a8;
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall BiomeEdgeLayer::BiomeEdgeLayer(int a1, unsigned int a2, int a3, char a4)
{
  char v4; // r5@1
  int v5; // r6@1
  int v6; // r4@1
  int v7; // r5@1
  int v8; // r6@1
  unsigned int *v9; // r0@3
  unsigned int v10; // r1@5
  unsigned int *v11; // r1@9
  unsigned int v12; // r0@11
  unsigned int *v13; // r7@15
  unsigned int v14; // r0@17

  v4 = a4;
  v5 = a3;
  v6 = a1;
  j_Layer::Layer(a1, a2);
  *(_DWORD *)v6 = &off_2725838;
  *(_BYTE *)(v6 + 48) = v4;
  *(_DWORD *)(v6 + 40) = *(_DWORD *)v5;
  v7 = *(_DWORD *)(v6 + 44);
  v8 = *(_DWORD *)(v5 + 4);
  if ( v8 != v7 )
  {
    if ( v8 )
    {
      v9 = (unsigned int *)(v8 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 + 1, v9) );
        v7 = *(_DWORD *)(v6 + 44);
      }
      else
        ++*v9;
    }
    if ( v7 )
      v11 = (unsigned int *)(v7 + 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        v13 = (unsigned int *)(v7 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
        if ( &pthread_create )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
        }
        else
          v14 = (*v13)--;
        if ( v14 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
    *(_DWORD *)(v6 + 44) = v8;
  }
  return v6;
}
