

void __fastcall BiomeInitLayer::~BiomeInitLayer(BiomeInitLayer *this)
{
  Layer *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2725854;
  v2 = (void *)*((_DWORD *)this + 18);
  if ( v2 )
    j_operator delete(v2);
  j_Layer::~Layer(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


Layer *__fastcall BiomeInitLayer::~BiomeInitLayer(BiomeInitLayer *this)
{
  Layer *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2725854;
  v2 = (void *)*((_DWORD *)this + 18);
  if ( v2 )
    j_operator delete(v2);
  return j_j_j__ZN5LayerD2Ev_0(v1);
}


int __fastcall BiomeInitLayer::fillArea(BiomeInitLayer *this, LayerData *a2, __int64 a3, int a4, int a5)
{
  BiomeInitLayer *v5; // r7@1
  LayerData *v6; // r5@1
  int v7; // r1@4
  int v8; // r9@4
  int v9; // r4@4
  int v10; // r11@4
  unsigned int v11; // r0@5
  unsigned int v12; // r6@5
  int v13; // r8@5
  int v14; // r1@5
  int v15; // r0@6
  int *v16; // r0@11
  int v17; // r0@18
  __int64 v19; // [sp+1Ch] [bp-44h]@1
  int v20; // [sp+30h] [bp-30h]@2
  int v21; // [sp+34h] [bp-2Ch]@2

  v19 = a3;
  v5 = this;
  v6 = a2;
  (*(void (__cdecl **)(_DWORD, LayerData *))(**((_DWORD **)this + 10) + 12))(*((_DWORD *)this + 10), a2);
  if ( a5 )
  {
    v21 = 0;
    v20 = 0;
    do
    {
      if ( a4 )
      {
        v7 = v20;
        v8 = v21;
        v9 = v19;
        v10 = a4;
        do
        {
          j_Layer::initRandom(v5, v7, v9, v20 + HIDWORD(v19));
          v11 = *(_DWORD *)(*(_DWORD *)v6 + v8);
          v12 = v11 & 0xFFFFF0FF;
          v13 = (v11 >> 8) & 0xF;
          if ( j_Layer::_isOcean((Layer *)(v11 & 0xFFFFF0FF), v14) != 1
            && (v15 = *(_DWORD *)(Biome::mushroomIsland + 268), v12 != v15) )
          {
            switch ( v12 )
            {
              case 1u:
                if ( !v13 )
                {
                  v17 = *((_DWORD *)v5 + j_Layer::nextRandom(v5, 6) + 12);
                  break;
                }
                if ( j_Layer::nextRandom(v5, 3) )
                  v16 = &Biome::mesaRock;
                else
                  v16 = &Biome::mesaClearRock;
                goto LABEL_18;
              case 2u:
                if ( v13 )
                  v16 = &Biome::jungle;
                  goto LABEL_18;
                v17 = *(_DWORD *)(*((_DWORD *)v5 + 18)
                                + 4
                                * j_Layer::nextRandom(
                                    v5,
                                    (signed int)((*((_QWORD *)v5 + 9) >> 32) - *((_QWORD *)v5 + 9)) >> 2));
                break;
              case 3u:
                  v16 = &Biome::redwoodTaiga;
LABEL_18:
                  v17 = *v16;
                  v17 = *((_DWORD *)v5 + j_Layer::nextRandom(v5, 4) + 21);
              case 4u:
                v17 = *((_DWORD *)v5 + j_Layer::nextRandom(v5, 4) + 25);
              default:
                v7 = *((_DWORD *)v6 + 1);
                goto LABEL_25;
            }
            v7 = *((_DWORD *)v6 + 1);
            v15 = *(_DWORD *)(v17 + 268);
LABEL_25:
            *(_DWORD *)(v7 + v8) = v15;
          }
          else
            *(_DWORD *)(*((_DWORD *)v6 + 1) + v8) = v12;
          v8 += 4;
          ++v9;
          --v10;
        }
        while ( v10 );
      }
      v21 += 4 * a4;
      ++v20;
    }
    while ( v20 != a5 );
  }
  return j_j_j__ZN9LayerData4swapEv_0(v6);
}


int __fastcall BiomeInitLayer::BiomeInitLayer(int a1, unsigned int a2, int a3, int a4)
{
  int v4; // r8@1
  int v5; // r7@1
  int v6; // r4@1
  __int64 v7; // r0@1
  int v8; // r6@1
  int v9; // r5@1
  unsigned int *v10; // r0@3
  unsigned int v11; // r1@5
  unsigned int *v12; // r1@9
  unsigned int v13; // r0@11
  unsigned int *v14; // r7@15
  unsigned int v15; // r0@17
  int v16; // r5@23
  char *v17; // r5@24
  void *v18; // r9@25
  unsigned int v19; // r2@25
  unsigned int v20; // r1@27
  unsigned int v21; // r6@27
  char *v22; // r7@33
  char *v23; // r5@35
  int v24; // r9@41
  _BYTE *v25; // r8@43
  unsigned int v26; // r1@43
  unsigned int v27; // r0@45
  unsigned int v28; // r7@45
  char *v29; // r6@51
  signed int v30; // r2@53
  int v31; // r5@53
  int v32; // r9@58
  int v33; // r0@59
  char *v34; // r5@59
  int v35; // r0@59
  _BYTE *v36; // r8@60
  unsigned int v37; // r1@60
  unsigned int v38; // r0@62
  unsigned int v39; // r7@62
  char *v40; // r6@68
  signed int v41; // r2@70
  int v42; // r5@70
  int v43; // r9@75
  int v44; // r0@76
  char *v45; // r5@76
  int v46; // r0@76
  _BYTE *v47; // r8@77
  unsigned int v48; // r1@77
  unsigned int v49; // r0@79
  unsigned int v50; // r7@79
  char *v51; // r6@85
  signed int v52; // r2@87
  int v53; // r5@87
  int v54; // r9@92
  int v55; // r0@93
  char *v56; // r5@93
  int v57; // r0@93
  _BYTE *v58; // r8@94
  unsigned int v59; // r1@94
  unsigned int v60; // r0@96
  unsigned int v61; // r7@96
  char *v62; // r6@102
  signed int v63; // r2@104
  int v64; // r5@104
  int v65; // r9@109
  int v66; // r0@110
  char *v67; // r5@110
  int v68; // r0@110
  _BYTE *v69; // r8@111
  unsigned int v70; // r1@111
  unsigned int v71; // r0@113
  unsigned int v72; // r7@113
  char *v73; // r6@119
  signed int v74; // r2@121
  int v75; // r5@121
  int v76; // r9@126
  int v77; // r0@127
  char *v78; // r5@127
  int v79; // r0@127
  _BYTE *v80; // r8@128
  unsigned int v81; // r1@128
  unsigned int v82; // r0@130
  unsigned int v83; // r7@130
  char *v84; // r6@136
  signed int v85; // r2@138
  int v86; // r5@138
  int v87; // r9@143
  _BYTE *v88; // r8@145
  unsigned int v89; // r1@145
  unsigned int v90; // r0@147
  unsigned int v91; // r7@147
  char *v92; // r6@153
  signed int v93; // r2@155
  int v94; // r5@155
  int v95; // r5@157

  v4 = a4;
  v5 = a3;
  v6 = a1;
  j_Layer::Layer(a1, a2);
  *(_DWORD *)v6 = &off_2725854;
  *(_DWORD *)(v6 + 72) = 0;
  *(_DWORD *)(v6 + 76) = 0;
  *(_DWORD *)(v6 + 80) = 0;
  *(_DWORD *)(v6 + 40) = *(_DWORD *)v5;
  v7 = 0LL;
  v8 = *(_DWORD *)(v6 + 44);
  v9 = *(_DWORD *)(v5 + 4);
  if ( v9 != v8 )
  {
    if ( v9 )
    {
      v10 = (unsigned int *)(v9 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 + 1, v10) );
        v8 = *(_DWORD *)(v6 + 44);
      }
      else
        ++*v10;
    }
    if ( v8 )
      v12 = (unsigned int *)(v8 + 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 == 1 )
        v14 = (unsigned int *)(v8 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
        }
        else
          v15 = (*v14)--;
        if ( v15 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
    *(_DWORD *)(v6 + 44) = v9;
    v7 = *(_QWORD *)(v6 + 76);
  }
  *(_DWORD *)(v6 + 48) = Biome::desert;
  *(_DWORD *)(v6 + 52) = Biome::desert;
  *(_DWORD *)(v6 + 56) = Biome::desert;
  *(_DWORD *)(v6 + 60) = Biome::savanna;
  *(_DWORD *)(v6 + 64) = Biome::savanna;
  *(_DWORD *)(v6 + 68) = Biome::plains;
  v16 = Biome::forest;
  if ( (_DWORD)v7 == HIDWORD(v7) )
    v18 = *(void **)(v6 + 72);
    v19 = ((signed int)v7 - (signed int)v18) >> 2;
    if ( !v19 )
      v19 = 1;
    HIDWORD(v7) = v19 + (((signed int)v7 - (signed int)v18) >> 2);
    v21 = v19 + (((signed int)v7 - (signed int)v18) >> 2);
    if ( 0 != HIDWORD(v7) >> 30 )
      v21 = 0x3FFFFFFF;
    if ( v20 < v19 )
    if ( v21 )
      if ( v21 >= 0x40000000 )
        sub_21E57F4();
      v22 = (char *)j_operator new(4 * v21);
      LODWORD(v7) = *(_QWORD *)(v6 + 72) >> 32;
      v18 = (void *)*(_QWORD *)(v6 + 72);
    else
      v22 = 0;
    *(_DWORD *)&v22[v7 - (_DWORD)v18] = v16;
    v23 = &v22[v7 - (_DWORD)v18];
    if ( 0 != ((signed int)v7 - (signed int)v18) >> 2 )
      j___aeabi_memmove4_0((int)v22, (int)v18);
    v17 = v23 + 4;
    if ( v18 )
      j_operator delete(v18);
    *(_DWORD *)(v6 + 72) = v22;
    *(_DWORD *)(v6 + 76) = v17;
    *(_DWORD *)(v6 + 80) = &v22[4 * v21];
  else
    *(_DWORD *)v7 = Biome::forest;
    v17 = (char *)(*(_DWORD *)(v6 + 76) + 4);
  if ( v4 == 1 )
    v24 = Biome::roofedForest;
    if ( v17 == *(char **)(v6 + 80) )
      v25 = *(_BYTE **)(v6 + 72);
      v26 = (v17 - v25) >> 2;
      if ( !v26 )
        v26 = 1;
      v27 = v26 + ((v17 - v25) >> 2);
      v28 = v26 + ((v17 - v25) >> 2);
      if ( 0 != v27 >> 30 )
        v28 = 0x3FFFFFFF;
      if ( v27 < v26 )
      if ( v28 )
        if ( v28 >= 0x40000000 )
          sub_21E57F4();
        v29 = (char *)j_operator new(4 * v28);
        v17 = (char *)(*(_QWORD *)(v6 + 72) >> 32);
        v25 = (_BYTE *)*(_QWORD *)(v6 + 72);
        v29 = 0;
      v30 = v17 - v25;
      v31 = (int)&v29[v17 - v25];
      *(_DWORD *)&v29[v30] = v24;
      if ( 0 != v30 >> 2 )
        j___aeabi_memmove4_0((int)v29, (int)v25);
      v17 = (char *)(v31 + 4);
      if ( v25 )
        j_operator delete(v25);
      *(_DWORD *)(v6 + 72) = v29;
      *(_DWORD *)(v6 + 76) = v17;
      *(_DWORD *)(v6 + 80) = &v29[4 * v28];
      *(_DWORD *)v17 = Biome::roofedForest;
      v17 = (char *)(*(_DWORD *)(v6 + 76) + 4);
  v32 = Biome::extremeHills;
  if ( v17 == *(char **)(v6 + 80) )
    v36 = *(_BYTE **)(v6 + 72);
    v37 = (v17 - v36) >> 2;
    if ( !v37 )
      v37 = 1;
    v38 = v37 + ((v17 - v36) >> 2);
    v39 = v37 + ((v17 - v36) >> 2);
    if ( 0 != v38 >> 30 )
      v39 = 0x3FFFFFFF;
    if ( v38 < v37 )
    if ( v39 )
      if ( v39 >= 0x40000000 )
      v40 = (char *)j_operator new(4 * v39);
      v17 = (char *)(*(_QWORD *)(v6 + 72) >> 32);
      v36 = (_BYTE *)*(_QWORD *)(v6 + 72);
      v40 = 0;
    v41 = v17 - v36;
    v42 = (int)&v40[v17 - v36];
    *(_DWORD *)&v40[v41] = v32;
    if ( 0 != v41 >> 2 )
      j___aeabi_memmove4_0((int)v40, (int)v36);
    v34 = (char *)(v42 + 4);
    if ( v36 )
      j_operator delete(v36);
    v35 = (int)&v40[4 * v39];
    *(_DWORD *)(v6 + 72) = v40;
    *(_DWORD *)(v6 + 76) = v34;
    *(_DWORD *)(v6 + 80) = v35;
    *(_DWORD *)v17 = Biome::extremeHills;
    v33 = *(_DWORD *)(v6 + 76);
    v34 = (char *)(v33 + 4);
    *(_DWORD *)(v6 + 76) = v33 + 4;
    v35 = *(_DWORD *)(v6 + 80);
  v43 = Biome::plains;
  if ( v34 == (char *)v35 )
    v47 = *(_BYTE **)(v6 + 72);
    v48 = (v34 - v47) >> 2;
    if ( !v48 )
      v48 = 1;
    v49 = v48 + ((v34 - v47) >> 2);
    v50 = v48 + ((v34 - v47) >> 2);
    if ( 0 != v49 >> 30 )
      v50 = 0x3FFFFFFF;
    if ( v49 < v48 )
    if ( v50 )
      if ( v50 >= 0x40000000 )
      v51 = (char *)j_operator new(4 * v50);
      v34 = (char *)(*(_QWORD *)(v6 + 72) >> 32);
      v47 = (_BYTE *)*(_QWORD *)(v6 + 72);
      v51 = 0;
    v52 = v34 - v47;
    v53 = (int)&v51[v34 - v47];
    *(_DWORD *)&v51[v52] = v43;
    if ( 0 != v52 >> 2 )
      j___aeabi_memmove4_0((int)v51, (int)v47);
    v45 = (char *)(v53 + 4);
    if ( v47 )
      j_operator delete(v47);
    v46 = (int)&v51[4 * v50];
    *(_DWORD *)(v6 + 72) = v51;
    *(_DWORD *)(v6 + 76) = v45;
    *(_DWORD *)(v6 + 80) = v46;
    *(_DWORD *)v34 = Biome::plains;
    v44 = *(_DWORD *)(v6 + 76);
    v45 = (char *)(v44 + 4);
    *(_DWORD *)(v6 + 76) = v44 + 4;
    v46 = *(_DWORD *)(v6 + 80);
  v54 = Biome::plains;
  if ( v45 == (char *)v46 )
    v58 = *(_BYTE **)(v6 + 72);
    v59 = (v45 - v58) >> 2;
    if ( !v59 )
      v59 = 1;
    v60 = v59 + ((v45 - v58) >> 2);
    v61 = v59 + ((v45 - v58) >> 2);
    if ( 0 != v60 >> 30 )
      v61 = 0x3FFFFFFF;
    if ( v60 < v59 )
    if ( v61 )
      if ( v61 >= 0x40000000 )
      v62 = (char *)j_operator new(4 * v61);
      v45 = (char *)(*(_QWORD *)(v6 + 72) >> 32);
      v58 = (_BYTE *)*(_QWORD *)(v6 + 72);
      v62 = 0;
    v63 = v45 - v58;
    v64 = (int)&v62[v45 - v58];
    *(_DWORD *)&v62[v63] = v54;
    if ( 0 != v63 >> 2 )
      j___aeabi_memmove4_0((int)v62, (int)v58);
    v56 = (char *)(v64 + 4);
    if ( v58 )
      j_operator delete(v58);
    v57 = (int)&v62[4 * v61];
    *(_DWORD *)(v6 + 72) = v62;
    *(_DWORD *)(v6 + 76) = v56;
    *(_DWORD *)(v6 + 80) = v57;
    *(_DWORD *)v45 = Biome::plains;
    v55 = *(_DWORD *)(v6 + 76);
    v56 = (char *)(v55 + 4);
    *(_DWORD *)(v6 + 76) = v55 + 4;
    v57 = *(_DWORD *)(v6 + 80);
  v65 = Biome::plains;
  if ( v56 == (char *)v57 )
    v69 = *(_BYTE **)(v6 + 72);
    v70 = (v56 - v69) >> 2;
    if ( !v70 )
      v70 = 1;
    v71 = v70 + ((v56 - v69) >> 2);
    v72 = v70 + ((v56 - v69) >> 2);
    if ( 0 != v71 >> 30 )
      v72 = 0x3FFFFFFF;
    if ( v71 < v70 )
    if ( v72 )
      if ( v72 >= 0x40000000 )
      v73 = (char *)j_operator new(4 * v72);
      v56 = (char *)(*(_QWORD *)(v6 + 72) >> 32);
      v69 = (_BYTE *)*(_QWORD *)(v6 + 72);
      v73 = 0;
    v74 = v56 - v69;
    v75 = (int)&v73[v56 - v69];
    *(_DWORD *)&v73[v74] = v65;
    if ( 0 != v74 >> 2 )
      j___aeabi_memmove4_0((int)v73, (int)v69);
    v67 = (char *)(v75 + 4);
    if ( v69 )
      j_operator delete(v69);
    v68 = (int)&v73[4 * v72];
    *(_DWORD *)(v6 + 72) = v73;
    *(_DWORD *)(v6 + 76) = v67;
    *(_DWORD *)(v6 + 80) = v68;
    *(_DWORD *)v56 = Biome::plains;
    v66 = *(_DWORD *)(v6 + 76);
    v67 = (char *)(v66 + 4);
    *(_DWORD *)(v6 + 76) = v66 + 4;
    v68 = *(_DWORD *)(v6 + 80);
  v76 = Biome::birchForest;
  if ( v67 == (char *)v68 )
    v80 = *(_BYTE **)(v6 + 72);
    v81 = (v67 - v80) >> 2;
    if ( !v81 )
      v81 = 1;
    v82 = v81 + ((v67 - v80) >> 2);
    v83 = v81 + ((v67 - v80) >> 2);
    if ( 0 != v82 >> 30 )
      v83 = 0x3FFFFFFF;
    if ( v82 < v81 )
    if ( v83 )
      if ( v83 >= 0x40000000 )
      v84 = (char *)j_operator new(4 * v83);
      v67 = (char *)(*(_QWORD *)(v6 + 72) >> 32);
      v80 = (_BYTE *)*(_QWORD *)(v6 + 72);
      v84 = 0;
    v85 = v67 - v80;
    v86 = (int)&v84[v67 - v80];
    *(_DWORD *)&v84[v85] = v76;
    if ( 0 != v85 >> 2 )
      j___aeabi_memmove4_0((int)v84, (int)v80);
    v78 = (char *)(v86 + 4);
    if ( v80 )
      j_operator delete(v80);
    v79 = (int)&v84[4 * v83];
    *(_DWORD *)(v6 + 72) = v84;
    *(_DWORD *)(v6 + 76) = v78;
    *(_DWORD *)(v6 + 80) = v79;
    *(_DWORD *)v67 = Biome::birchForest;
    v77 = *(_DWORD *)(v6 + 76);
    v78 = (char *)(v77 + 4);
    *(_DWORD *)(v6 + 76) = v77 + 4;
    v79 = *(_DWORD *)(v6 + 80);
  v87 = Biome::swampland;
  if ( v78 == (char *)v79 )
    v88 = *(_BYTE **)(v6 + 72);
    v89 = (v78 - v88) >> 2;
    if ( !v89 )
      v89 = 1;
    v90 = v89 + ((v78 - v88) >> 2);
    v91 = v89 + ((v78 - v88) >> 2);
    if ( 0 != v90 >> 30 )
      v91 = 0x3FFFFFFF;
    if ( v90 < v89 )
    if ( v91 )
      if ( v91 >= 0x40000000 )
      v92 = (char *)j_operator new(4 * v91);
      v78 = (char *)(*(_QWORD *)(v6 + 72) >> 32);
      v88 = (_BYTE *)*(_QWORD *)(v6 + 72);
      v92 = 0;
    v93 = v78 - v88;
    v94 = (int)&v92[v78 - v88];
    *(_DWORD *)&v92[v93] = v87;
    if ( 0 != v93 >> 2 )
      j___aeabi_memmove4_0((int)v92, (int)v88);
    v95 = v94 + 4;
    if ( v88 )
      j_operator delete(v88);
    *(_DWORD *)(v6 + 72) = v92;
    *(_DWORD *)(v6 + 76) = v95;
    *(_DWORD *)(v6 + 80) = &v92[4 * v91];
    *(_DWORD *)v78 = Biome::swampland;
    *(_DWORD *)(v6 + 76) += 4;
  *(_DWORD *)(v6 + 84) = Biome::forest;
  *(_DWORD *)(v6 + 88) = Biome::extremeHills;
  *(_DWORD *)(v6 + 92) = Biome::taiga;
  *(_DWORD *)(v6 + 96) = Biome::plains;
  *(_DWORD *)(v6 + 100) = Biome::iceFlats;
  *(_DWORD *)(v6 + 104) = Biome::iceFlats;
  *(_DWORD *)(v6 + 108) = Biome::iceFlats;
  *(_DWORD *)(v6 + 112) = Biome::taigaCold;
  return v6;
}


void __fastcall BiomeInitLayer::~BiomeInitLayer(BiomeInitLayer *this)
{
  BiomeInitLayer::~BiomeInitLayer(this);
}
