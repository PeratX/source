

int __fastcall ShoreLayer::ShoreLayer(int a1, unsigned int a2, int a3)
{
  int v3; // r6@1
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r0@3
  unsigned int v8; // r1@5
  unsigned int *v9; // r1@9
  unsigned int v10; // r0@11
  unsigned int *v11; // r7@15
  unsigned int v12; // r0@17

  v3 = a3;
  v4 = a1;
  j_Layer::Layer(a1, a2);
  *(_DWORD *)v4 = &off_2724AE8;
  *(_DWORD *)(v4 + 40) = *(_DWORD *)v3;
  v5 = *(_DWORD *)(v4 + 44);
  v6 = *(_DWORD *)(v3 + 4);
  if ( v6 != v5 )
  {
    if ( v6 )
    {
      v7 = (unsigned int *)(v6 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 + 1, v7) );
        v5 = *(_DWORD *)(v4 + 44);
      }
      else
        ++*v7;
    }
    if ( v5 )
      v9 = (unsigned int *)(v5 + 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 == 1 )
        v11 = (unsigned int *)(v5 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
        if ( &pthread_create )
        {
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
        }
        else
          v12 = (*v11)--;
        if ( v12 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
    *(_DWORD *)(v4 + 44) = v6;
  }
  return v4;
}


signed int __fastcall ShoreLayer::_isJungleCompatible(ShoreLayer *this, int a2)
{
  Layer *v2; // r4@1
  int v3; // r1@1
  Biome *v4; // r0@2
  signed int result; // r0@8

  v2 = (Layer *)a2;
  if ( j_Biome::getBiome((Biome *)a2, a2) && (v4 = (Biome *)j_Biome::getBiome(v2, v3), j_Biome::getBiomeType(v4) == 7)
    || *(Layer **)(Biome::jungleEdge + 268) == v2
    || *(Layer **)(Biome::jungle + 268) == v2
    || *(Layer **)(Biome::jungleHills + 268) == v2
    || *(Layer **)(Biome::forest + 268) == v2
    || *(Layer **)(Biome::taiga + 268) == v2 )
  {
    result = 1;
  }
  else
    result = j_Layer::_isOcean(v2, v3);
  return result;
}


int __fastcall ShoreLayer::_replaceIfNeighborOcean(ShoreLayer *this, LayerData *a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // r5@1
  int v8; // r6@1
  LayerData *v9; // r4@1
  int v10; // r3@2
  Layer *v11; // r8@2
  Layer *v12; // r9@2
  int v13; // r1@2
  Layer *v14; // r7@2
  int v15; // r1@2
  int v16; // r1@3
  int v17; // r1@4
  int result; // r0@6

  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( j_Layer::_isOcean((Layer *)a6, (int)a2) != 1
    && ((v10 = v8 + (a5 + 2) * (v7 + 1),
         v11 = *(Layer **)(*(_DWORD *)v9 + 4 * (v8 + 1 + (a5 + 2) * (v7 + 2))),
         v12 = *(Layer **)(*(_DWORD *)v9 + 4 * v10),
         v13 = *(_DWORD *)v9 + 4 * v10,
         v14 = *(Layer **)(v13 + 8),
         j_Layer::_isOcean(*(Layer **)(*(_DWORD *)v9 + 4 * (v8 + 1 + (a5 + 2) * v7)), v13))
     || j_Layer::_isOcean(v14, v15)
     || j_Layer::_isOcean(v12, v16)
     || j_Layer::_isOcean(v11, v17) == 1) )
  {
    result = a7;
    *(_DWORD *)(*((_DWORD *)v9 + 1) + 4 * (v8 + a5 * v7)) = a7;
  }
  else
    result = v8 + a5 * v7;
    *(_DWORD *)(*((_DWORD *)v9 + 1) + 4 * result) = a6;
  return result;
}


signed int __fastcall ShoreLayer::_isMesa(ShoreLayer *this, int a2)
{
  Biome *v2; // r5@1
  int v3; // r1@1
  signed int v4; // r4@1
  Biome *v5; // r0@2

  v2 = (Biome *)a2;
  v4 = 0;
  if ( j_Biome::getBiome((Biome *)a2, a2) )
  {
    v5 = (Biome *)j_Biome::getBiome(v2, v3);
    if ( j_Biome::getBiomeType(v5) == 8 )
      v4 = 1;
  }
  return v4;
}


int __fastcall ShoreLayer::fillArea(ShoreLayer *this, LayerData *a2, int a3, int a4, int a5, int a6)
{
  Layer *v6; // r5@1
  LayerData *v7; // r10@1
  int v8; // r9@1
  int v9; // r3@2
  int v10; // r11@4
  int v11; // r8@4
  int v12; // r0@6
  _DWORD *v13; // r1@6
  Layer *v14; // r0@8
  int v15; // r6@9
  int v16; // r4@9
  Biome *v17; // r7@9
  int v18; // r1@10
  int v19; // r0@10
  int v20; // r2@11
  int v21; // r3@11
  bool v22; // zf@11
  int v23; // r5@18
  int v24; // r1@18
  int v25; // r0@18
  Layer *v26; // r7@18
  Layer *v27; // r9@18
  Layer *v28; // r6@18
  int v29; // r1@18
  Biome *v30; // r0@19
  int v31; // r1@26
  Biome *v32; // r0@27
  int v33; // r1@34
  Biome *v34; // r0@35
  int v35; // r1@42
  Biome *v36; // r0@43
  int v37; // r1@43
  int v38; // r1@50
  int v39; // r1@51
  int v40; // r1@52
  _DWORD *v41; // r0@59
  int v42; // r1@67
  int v43; // r0@67
  Layer *v44; // r9@67
  Biome *v45; // r7@67
  Layer *v46; // r6@67
  int v47; // r1@67
  int v48; // r1@68
  int v49; // r1@69
  int v50; // r1@70
  int v51; // r1@71
  Biome *v52; // r0@72
  int v53; // r1@72
  int v54; // r1@73
  Biome *v55; // r0@74
  int v56; // r1@74
  int v57; // r1@75
  Biome *v58; // r0@76
  int v59; // r1@76
  int v60; // r1@77
  Biome *v61; // r0@78
  int v62; // r1@84
  Layer *v63; // r9@84
  int v64; // r2@84
  Layer *v65; // r7@84
  Layer *v66; // r6@84
  int v67; // r1@84
  int v68; // r1@85
  int v70; // [sp+30h] [bp-88h]@2
  int v71; // [sp+34h] [bp-84h]@1
  int v72; // [sp+40h] [bp-78h]@4
  ShoreLayer *v73; // [sp+54h] [bp-64h]@1
  int v74; // [sp+68h] [bp-50h]@4
  int v75; // [sp+74h] [bp-44h]@4
  Biome *v76; // [sp+78h] [bp-40h]@18
  Biome *v77; // [sp+78h] [bp-40h]@67
  int v78; // [sp+7Ch] [bp-3Ch]@4
  int v79; // [sp+80h] [bp-38h]@4
  int v80; // [sp+88h] [bp-30h]@4
  int v81; // [sp+90h] [bp-28h]@4

  v6 = this;
  v71 = a4;
  v73 = this;
  v7 = a2;
  v8 = a3;
  (*(void (__cdecl **)(_DWORD, LayerData *))(**((_DWORD **)this + 10) + 12))(*((_DWORD *)this + 10), a2);
  if ( !a6 )
    return j_j_j__ZN9LayerData4swapEv_0(v7);
  v70 = 4 * a5 + 8;
  v9 = 0;
  do
  {
    if ( !a5 )
    {
      ++v9;
      continue;
    }
    v10 = 0;
    v11 = 0;
    v79 = 4 * a5 * v9;
    v72 = v9 + 1;
    v81 = v70 * (v9 + 1);
    v80 = v71 + v9;
    v74 = v9;
    v75 = v70 * v9 + 4;
    v78 = (v9 + 2) * v70 + 4;
    do
      v15 = v11;
      j_Layer::initRandom(v6, v80, v8 + v11, v80);
      v16 = *(_DWORD *)(*(_DWORD *)v7 + v81 + v10 + 4);
      v17 = (Biome *)j_Biome::getBiome(*(Biome **)(*(_DWORD *)v7 + v81 + v10 + 4), v81);
      ++v11;
      if ( v16 != *(_DWORD *)(Biome::mushroomIsland + 268) )
      {
        if ( v17 && j_Biome::getBiomeType(v17) == 7 )
        {
          v23 = v8;
          v24 = *(_DWORD *)v7 + v10;
          v76 = *(Biome **)(v24 + v78);
          v25 = *(_DWORD *)v7 + v81;
          v26 = *(Layer **)(v25 + v10);
          v27 = *(Layer **)(v24 + v75);
          v28 = *(Layer **)(v25 + v10 + 8);
          if ( j_Biome::getBiome(*(Biome **)(v24 + v75), v24)
            && (v30 = (Biome *)j_Biome::getBiome(v27, v29), j_Biome::getBiomeType(v30) == 7)
            || *(Layer **)(Biome::jungleEdge + 268) == v27
            || *(Layer **)(Biome::jungle + 268) == v27
            || *(Layer **)(Biome::jungleHills + 268) == v27
            || *(Layer **)(Biome::forest + 268) == v27
            || *(Layer **)(Biome::taiga + 268) == v27
            || j_Layer::_isOcean(v27, v29) == 1 )
          {
            if ( j_Biome::getBiome(v28, v29)
              && (v32 = (Biome *)j_Biome::getBiome(v28, v31), j_Biome::getBiomeType(v32) == 7)
              || *(Layer **)(Biome::jungleEdge + 268) == v28
              || *(Layer **)(Biome::jungle + 268) == v28
              || *(Layer **)(Biome::jungleHills + 268) == v28
              || *(Layer **)(Biome::forest + 268) == v28
              || *(Layer **)(Biome::taiga + 268) == v28
              || j_Layer::_isOcean(v28, v31) == 1 )
            {
              if ( j_Biome::getBiome(v26, v31)
                && (v34 = (Biome *)j_Biome::getBiome(v26, v33), j_Biome::getBiomeType(v34) == 7)
                || *(Layer **)(Biome::jungleEdge + 268) == v26
                || *(Layer **)(Biome::jungle + 268) == v26
                || *(Layer **)(Biome::jungleHills + 268) == v26
                || *(Layer **)(Biome::forest + 268) == v26
                || *(Layer **)(Biome::taiga + 268) == v26
                || j_Layer::_isOcean(v26, v33) == 1 )
              {
                if ( j_Biome::getBiome(v76, v33)
                  && (v36 = (Biome *)j_Biome::getBiome(v76, v35), j_Biome::getBiomeType(v36) == 7)
                  || (v37 = (int)v76, *(Biome **)(Biome::jungleEdge + 268) == v76)
                  || (v37 = (int)v76, *(Biome **)(Biome::jungle + 268) == v76)
                  || (v37 = (int)v76, *(Biome **)(Biome::jungleHills + 268) == v76)
                  || (v37 = (int)v76, *(Biome **)(Biome::forest + 268) == v76)
                  || (v37 = (int)v76, *(Biome **)(Biome::taiga + 268) == v76)
                  || j_Layer::_isOcean(v76, (int)v76) )
                {
                  if ( !j_Layer::_isOcean(v27, v37) && !j_Layer::_isOcean(v28, v38) && !j_Layer::_isOcean(v26, v39) )
                  {
                    v14 = v76;
LABEL_54:
                    if ( j_Layer::_isOcean(v14, v40) != 1 )
                    {
LABEL_79:
                      *(_DWORD *)(*((_DWORD *)v7 + 1) + v79 + v10) = v16;
LABEL_89:
                      v8 = v23;
                      v6 = v73;
                      goto LABEL_90;
                    }
                    goto LABEL_87;
                  }
                  goto LABEL_87;
                }
              }
            }
          }
          v12 = *((_DWORD *)v7 + 1);
          v13 = &Biome::jungleEdge;
        }
        else
          if ( v16 == *(_DWORD *)(Biome::extremeHills + 268)
            || v16 == *(_DWORD *)(Biome::extremeHillsWithTrees + 268)
            || v16 == *(_DWORD *)(Biome::smallerExtremeHills + 268) )
            v41 = &Biome::stoneBeach;
LABEL_60:
            j_ShoreLayer::_replaceIfNeighborOcean(
              *(ShoreLayer **)(*v41 + 268),
              v7,
              v15,
              v74,
              a5,
              v16,
              *(_DWORD *)(*v41 + 268));
            goto LABEL_90;
          if ( v17 && j_Biome::isSnowCovered(v17) == 1 )
            v41 = &Biome::coldBeach;
            goto LABEL_60;
          if ( v16 != *(_DWORD *)(Biome::mesa + 268) && v16 != *(_DWORD *)(Biome::mesaRock + 268) )
            if ( v16 == *(_DWORD *)(Biome::ocean + 268)
              || v16 == *(_DWORD *)(Biome::deepOcean + 268)
              || v16 == *(_DWORD *)(Biome::river + 268)
              || v16 == *(_DWORD *)(Biome::swampland + 268) )
              goto LABEL_15;
            v73 = v6;
            v23 = v8;
            v62 = *(_DWORD *)v7 + v10;
            v63 = *(Layer **)(v62 + v78);
            v64 = v81 + *(_DWORD *)v7;
            v65 = *(Layer **)(v64 + v10);
            v66 = *(Layer **)(v64 + v10 + 8);
            if ( !j_Layer::_isOcean(*(Layer **)(v62 + v75), v64 + v10)
              && !j_Layer::_isOcean(v66, v67)
              && !j_Layer::_isOcean(v65, v68) )
              v14 = v63;
              goto LABEL_54;
LABEL_87:
            v12 = *((_DWORD *)v7 + 1);
            v13 = &Biome::beaches;
            goto LABEL_88;
          v42 = *(_DWORD *)v7 + v10;
          v77 = *(Biome **)(v42 + v78);
          v43 = *(_DWORD *)v7 + v81;
          v44 = *(Layer **)(v43 + v10);
          v45 = *(Biome **)(v42 + v75);
          v46 = *(Layer **)(v43 + v10 + 8);
          if ( j_Layer::_isOcean(*(Layer **)(v42 + v75), v42) )
            goto LABEL_79;
          if ( j_Layer::_isOcean(v46, v47) )
          if ( j_Layer::_isOcean(v44, v48) )
          if ( j_Layer::_isOcean(v77, v49) == 1 )
          if ( j_Biome::getBiome(v45, v50) )
            v52 = (Biome *)j_Biome::getBiome(v45, v51);
            if ( j_Biome::getBiomeType(v52) == 8 )
              if ( j_Biome::getBiome(v46, v53) )
                v55 = (Biome *)j_Biome::getBiome(v46, v54);
                if ( j_Biome::getBiomeType(v55) == 8 )
                  if ( j_Biome::getBiome(v44, v56) )
                    v58 = (Biome *)j_Biome::getBiome(v44, v57);
                    if ( j_Biome::getBiomeType(v58) == 8 )
                      if ( j_Biome::getBiome(v77, v59) )
                      {
                        v61 = (Biome *)j_Biome::getBiome(v77, v60);
                        if ( j_Biome::getBiomeType(v61) == 8 )
                          goto LABEL_79;
                      }
          v13 = &Biome::desert;
LABEL_88:
        *(_DWORD *)(v12 + v79 + v10) = *(_DWORD *)(*v13 + 268);
        goto LABEL_89;
      }
      v18 = *(_DWORD *)v7 + v10;
      v19 = *(_DWORD *)(Biome::ocean + 268);
      if ( *(_DWORD *)(v18 + v78) != v19 )
        v20 = *(_DWORD *)v7 + v81;
        v21 = *(_DWORD *)(v20 + v10);
        v22 = v21 == v19;
        if ( v21 != v19 )
          v22 = *(_DWORD *)(v18 + v75) == v19;
        if ( !v22 && *(_DWORD *)(v20 + v10 + 8) != v19 )
LABEL_15:
          *(_DWORD *)(*((_DWORD *)v7 + 1) + v79 + v10) = v16;
          goto LABEL_90;
      *(_DWORD *)(*((_DWORD *)v7 + 1) + v79 + v10) = *(_DWORD *)(Biome::mushroomIslandShore + 268);
LABEL_90:
      v10 += 4;
    while ( a5 != v11 );
    v9 = v72;
  }
  while ( v9 != a6 );
  return j_j_j__ZN9LayerData4swapEv_0(v7);
}


void __fastcall ShoreLayer::~ShoreLayer(ShoreLayer *this)
{
  Layer *v1; // r0@1

  v1 = j_Layer::~Layer(this);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall ShoreLayer::~ShoreLayer(ShoreLayer *this)
{
  ShoreLayer::~ShoreLayer(this);
}
