

void __fastcall TerrainLayer::_init(TerrainLayer *this)
{
  TerrainLayer *v1; // r4@1
  int *v2; // r6@1
  int *v3; // r0@1
  void *v4; // r0@1
  int *v5; // r0@2
  void *v6; // r0@2
  int *v7; // r0@3
  void *v8; // r0@3
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  unsigned int *v13; // r2@13
  signed int v14; // r1@15
  int v15; // [sp+4h] [bp-44h]@3
  char v16; // [sp+8h] [bp-40h]@3
  int v17; // [sp+14h] [bp-34h]@2
  char v18; // [sp+18h] [bp-30h]@2
  int v19; // [sp+24h] [bp-24h]@1
  char v20; // [sp+28h] [bp-20h]@1

  v1 = this;
  v2 = (int *)((char *)this + 8);
  v3 = sub_119C854(&v19, (int *)this + 2);
  sub_119C894((const void **)v3, (char *)&unk_257BC67, 0);
  mce::RenderMaterialGroup::getMaterial(
    (mce::MaterialPtr *)&v20,
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v19);
  mce::MaterialPtr::operator=((TerrainLayer *)((char *)v1 + 24), (mce::MaterialPtr *)&v20);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v20);
  v4 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  v5 = sub_119C854(&v17, v2);
  sub_119C894((const void **)v5, "_fog", 4u);
    (mce::MaterialPtr *)&v18,
    &v17);
  mce::MaterialPtr::operator=((TerrainLayer *)((char *)v1 + 12), (mce::MaterialPtr *)&v18);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v18);
  v6 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v17 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  v7 = sub_119C854(&v15, v2);
  sub_119C894((const void **)v7, "_lit", 4u);
    (mce::MaterialPtr *)&v16,
    &v15);
  mce::MaterialPtr::operator=((TerrainLayer *)((char *)v1 + 48), (mce::MaterialPtr *)&v16);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v16);
  v8 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v15 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
}


mce::MaterialPtr *__fastcall TerrainLayer::_deinitMaterials(TerrainLayer *this)
{
  TerrainLayer **v1; // r4@1
  int v2; // r5@2
  TerrainLayer *v3; // t1@3
  int v5; // [sp+0h] [bp-70h]@4
  char v6; // [sp+Ch] [bp-64h]@4
  char v7; // [sp+18h] [bp-58h]@4
  char v8; // [sp+24h] [bp-4Ch]@4
  char v9; // [sp+30h] [bp-40h]@4
  char v10; // [sp+3Ch] [bp-34h]@4
  char v11; // [sp+48h] [bp-28h]@4
  char v12; // [sp+54h] [bp-1Ch]@4

  v1 = (TerrainLayer **)TerrainLayer::sAllLayers;
  if ( (dword_27D2984 - TerrainLayer::sAllLayers) >> 2 )
  {
    v2 = 4 * ((dword_27D2984 - TerrainLayer::sAllLayers) >> 2);
    do
    {
      v3 = *v1;
      ++v1;
      TerrainLayer::_deinit(v3);
      v2 -= 4;
    }
    while ( v2 );
  }
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)&v12);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)&unk_27D2CC0, (mce::MaterialPtr *)&v12);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v12);
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)&v11);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)&unk_27D2D04, (mce::MaterialPtr *)&v11);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v11);
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)&v10);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)&unk_27D2D40, (mce::MaterialPtr *)&v10);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v10);
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)&v9);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)&TerrainLayer::OpaqueFogMaterialUnderLava, (mce::MaterialPtr *)&v9);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v9);
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)&v8);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)&TerrainLayer::BlendMaterialUnderwater, (mce::MaterialPtr *)&v8);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v8);
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)&v7);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)&TerrainLayer::BlendFogMaterialUnderwater, (mce::MaterialPtr *)&v7);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v7);
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)&v6);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)&TerrainLayer::WaterMaterialUnderwater, (mce::MaterialPtr *)&v6);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v6);
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)&v5);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)&TerrainLayer::WaterFogMaterialUnderwater, (mce::MaterialPtr *)&v5);
  return mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v5);
}


int __fastcall TerrainLayer::_createID(TerrainLayer *this)
{
  return dword_27D297C++;
}


void __fastcall TerrainLayer::_init(TerrainLayer *this)
{
  TerrainLayer::_init(this);
}


void __fastcall TerrainLayer::_initMaterials(TerrainLayer *this)
{
  TerrainLayer **v1; // r4@1
  int v2; // r5@2
  void *v3; // r0@6
  void *v4; // r0@7
  void *v5; // r0@8
  void *v6; // r0@9
  void *v7; // r0@10
  void *v8; // r0@11
  void *v9; // r0@12
  void *v10; // r0@13
  void *v11; // r0@14
  void *v12; // r0@15
  void *v13; // r0@16
  unsigned int *v14; // r2@18
  signed int v15; // r1@20
  unsigned int *v16; // r2@22
  signed int v17; // r1@24
  unsigned int *v18; // r2@26
  signed int v19; // r1@28
  unsigned int *v20; // r2@30
  signed int v21; // r1@32
  unsigned int *v22; // r2@34
  signed int v23; // r1@36
  unsigned int *v24; // r2@38
  signed int v25; // r1@40
  unsigned int *v26; // r2@42
  signed int v27; // r1@44
  unsigned int *v28; // r2@46
  signed int v29; // r1@48
  unsigned int *v30; // r2@50
  signed int v31; // r1@52
  unsigned int *v32; // r2@54
  signed int v33; // r1@56
  unsigned int *v34; // r2@58
  signed int v35; // r1@60
  int v36; // [sp+4h] [bp-ECh]@16
  char v37; // [sp+8h] [bp-E8h]@16
  int v38; // [sp+18h] [bp-D8h]@15
  char v39; // [sp+1Ch] [bp-D4h]@15
  int v40; // [sp+2Ch] [bp-C4h]@14
  char v41; // [sp+30h] [bp-C0h]@14
  int v42; // [sp+40h] [bp-B0h]@13
  char v43; // [sp+44h] [bp-ACh]@13
  int v44; // [sp+54h] [bp-9Ch]@12
  char v45; // [sp+58h] [bp-98h]@12
  int v46; // [sp+68h] [bp-88h]@11
  char v47; // [sp+6Ch] [bp-84h]@11
  int v48; // [sp+7Ch] [bp-74h]@10
  char v49; // [sp+80h] [bp-70h]@10
  int v50; // [sp+90h] [bp-60h]@9
  char v51; // [sp+94h] [bp-5Ch]@9
  int v52; // [sp+A4h] [bp-4Ch]@8
  char v53; // [sp+A8h] [bp-48h]@8
  int v54; // [sp+B8h] [bp-38h]@7
  char v55; // [sp+BCh] [bp-34h]@7
  int v56; // [sp+CCh] [bp-24h]@6
  char v57; // [sp+D0h] [bp-20h]@6

  v1 = (TerrainLayer **)TerrainLayer::sAllLayers;
  if ( (dword_27D2984 - TerrainLayer::sAllLayers) >> 2 )
  {
    v2 = 4 * ((dword_27D2984 - TerrainLayer::sAllLayers) >> 2);
    do
    {
      if ( TerrainLayer::WaterStencil != *(_DWORD *)*v1 )
        TerrainLayer::_init(*v1);
      v2 -= 4;
      ++v1;
    }
    while ( v2 );
  }
  sub_119C884((void **)&v56, "terrain_fading_in");
  mce::RenderMaterialGroup::getMaterial(
    (mce::MaterialPtr *)&v57,
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v56);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)&unk_27D2CC0, (mce::MaterialPtr *)&v57);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v57);
  v3 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v56 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  sub_119C884((void **)&v54, "terrain_seasons_fading_in");
    (mce::MaterialPtr *)&v55,
    &v54);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)&unk_27D2D04, (mce::MaterialPtr *)&v55);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v55);
  v4 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v54 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  sub_119C884((void **)&v52, "terrain_seasons_fading_in_alpha");
    (mce::MaterialPtr *)&v53,
    &v52);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)&unk_27D2D40, (mce::MaterialPtr *)&v53);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v53);
  v5 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v52 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  sub_119C884((void **)&v50, "terrain_water_below_stencil");
    (mce::MaterialPtr *)&v51,
    &v50);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)&unk_27D2C78, (mce::MaterialPtr *)&v51);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v51);
  v6 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v50 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  sub_119C884((void **)&v48, "terrain_water_below_stencil");
    (mce::MaterialPtr *)&v49,
    &v48);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)&unk_27D2C6C, (mce::MaterialPtr *)&v49);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v49);
  v7 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v48 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  sub_119C884((void **)&v46, "terrain_water_below_stencil");
    (mce::MaterialPtr *)&v47,
    &v46);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)&unk_27D2C90, (mce::MaterialPtr *)&v47);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v47);
  v8 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v46 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  sub_119C884((void **)&v44, "terrain_opaque_fog_no_cull");
    (mce::MaterialPtr *)&v45,
    &v44);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)&TerrainLayer::OpaqueFogMaterialUnderLava, (mce::MaterialPtr *)&v45);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v45);
  v9 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v44 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  sub_119C884((void **)&v42, "terrain_blend_below");
    (mce::MaterialPtr *)&v43,
    &v42);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)&TerrainLayer::BlendMaterialUnderwater, (mce::MaterialPtr *)&v43);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v43);
  v10 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v42 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  sub_119C884((void **)&v40, "terrain_blend_below_fog");
    (mce::MaterialPtr *)&v41,
    &v40);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)&TerrainLayer::BlendFogMaterialUnderwater, (mce::MaterialPtr *)&v41);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v41);
  v11 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v40 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  sub_119C884((void **)&v38, "terrain_water_below");
    (mce::MaterialPtr *)&v39,
    &v38);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)&TerrainLayer::WaterMaterialUnderwater, (mce::MaterialPtr *)&v39);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v39);
  v12 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v38 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  sub_119C884((void **)&v36, "terrain_water_below_fog");
    (mce::MaterialPtr *)&v37,
    &v36);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)&TerrainLayer::WaterFogMaterialUnderwater, (mce::MaterialPtr *)&v37);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v37);
  v13 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v36 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
}


void __fastcall TerrainLayer::_initMaterials(TerrainLayer *this)
{
  TerrainLayer::_initMaterials(this);
}


mce::MaterialPtr *__fastcall TerrainLayer::_deinit(TerrainLayer *this)
{
  TerrainLayer *v1; // r4@1
  char v3; // [sp+4h] [bp-34h]@1
  char v4; // [sp+10h] [bp-28h]@1
  char v5; // [sp+1Ch] [bp-1Ch]@1

  v1 = this;
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)&v5);
  mce::MaterialPtr::operator=((TerrainLayer *)((char *)v1 + 24), (mce::MaterialPtr *)&v5);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v5);
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)&v4);
  mce::MaterialPtr::operator=((TerrainLayer *)((char *)v1 + 12), (mce::MaterialPtr *)&v4);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v4);
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)&v3);
  mce::MaterialPtr::operator=((TerrainLayer *)((char *)v1 + 48), (mce::MaterialPtr *)&v3);
  return mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v3);
}


TerrainLayer *__fastcall TerrainLayer::~TerrainLayer(TerrainLayer *this)
{
  TerrainLayer *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  mce::MaterialPtr::~MaterialPtr((TerrainLayer *)((char *)this + 48));
  mce::MaterialPtr::~MaterialPtr((TerrainLayer *)((char *)v1 + 36));
  mce::MaterialPtr::~MaterialPtr((TerrainLayer *)((char *)v1 + 24));
  mce::MaterialPtr::~MaterialPtr((TerrainLayer *)((char *)v1 + 12));
  v2 = *((_DWORD *)v1 + 2);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  return v1;
}


int __fastcall TerrainLayer::TerrainLayer(int a1, _DWORD *a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r10@1
  int v6; // r7@1
  int v7; // r0@1
  void *v8; // r7@3
  unsigned int v9; // r2@3
  unsigned int v10; // r1@5
  unsigned int v11; // r8@5
  char *v12; // r5@11
  int v13; // r6@13
  int v14; // r0@19
  void *v15; // r10@21
  unsigned int v16; // r2@21
  unsigned int v17; // r1@23
  unsigned int v18; // r8@23
  char *v19; // r7@29
  int v20; // r9@31

  v4 = a1;
  v5 = a4;
  v6 = dword_27D297C++;
  *(_DWORD *)a1 = v6;
  *(_DWORD *)(a1 + 4) = a3;
  *(_DWORD *)(a1 + 8) = *a2;
  *a2 = &unk_28898CC;
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)(a1 + 12));
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)(v4 + 24));
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)(v4 + 36));
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)(v4 + 48));
  v7 = dword_27D2984;
  if ( dword_27D2984 == dword_27D2988 )
  {
    v8 = (void *)TerrainLayer::sAllLayers;
    v9 = (dword_27D2984 - TerrainLayer::sAllLayers) >> 2;
    if ( !v9 )
      v9 = 1;
    v10 = v9 + ((dword_27D2984 - TerrainLayer::sAllLayers) >> 2);
    v11 = v9 + ((dword_27D2984 - TerrainLayer::sAllLayers) >> 2);
    if ( 0 != v10 >> 30 )
      v11 = 0x3FFFFFFF;
    if ( v10 < v9 )
    if ( v11 )
    {
      if ( v11 >= 0x40000000 )
        sub_119C874();
      v12 = (char *)operator new(4 * v11);
      v7 = dword_27D2984;
      v8 = (void *)TerrainLayer::sAllLayers;
    }
    else
      v12 = 0;
    v13 = (int)&v12[v7 - (_DWORD)v8];
    *(_DWORD *)&v12[v7 - (_DWORD)v8] = v4;
    if ( 0 != (v7 - (signed int)v8) >> 2 )
      _aeabi_memmove4(v12, v8);
    if ( v8 )
      operator delete(v8);
    TerrainLayer::sAllLayers = v12;
    dword_27D2984 = v13 + 4;
    dword_27D2988 = (int)&v12[4 * v11];
  }
  else
    *(_DWORD *)dword_27D2984 = v4;
    dword_27D2984 += 4;
  if ( !v5 )
    v14 = dword_27D2990;
    if ( dword_27D2990 == dword_27D2994 )
      v15 = (void *)TerrainLayer::sNearLayers;
      v16 = (dword_27D2990 - TerrainLayer::sNearLayers) >> 2;
      if ( !v16 )
        v16 = 1;
      v17 = v16 + ((dword_27D2990 - TerrainLayer::sNearLayers) >> 2);
      v18 = v16 + ((dword_27D2990 - TerrainLayer::sNearLayers) >> 2);
      if ( 0 != v17 >> 30 )
        v18 = 0x3FFFFFFF;
      if ( v17 < v16 )
      if ( v18 )
      {
        if ( v18 >= 0x40000000 )
          sub_119C874();
        v19 = (char *)operator new(4 * v18);
        v14 = dword_27D2990;
        v15 = (void *)TerrainLayer::sNearLayers;
      }
      else
        v19 = 0;
      v20 = (int)&v19[v14 - (_DWORD)v15];
      *(_DWORD *)&v19[v14 - (_DWORD)v15] = v4;
      if ( 0 != (v14 - (signed int)v15) >> 2 )
        _aeabi_memmove4(v19, v15);
      if ( v15 )
        operator delete(v15);
      TerrainLayer::sNearLayers = v19;
      dword_27D2990 = v20 + 4;
      dword_27D2994 = (int)&v19[4 * v18];
      *(_DWORD *)dword_27D2990 = v4;
      dword_27D2990 += 4;
  return v4;
}
