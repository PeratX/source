

const Block *__fastcall StructureBlockRenderer::_renderVoid(StructureBlockRenderer *this, BaseEntityRenderContext *a2, BlockSource *a3, StructureBlockEntity *a4, const BlockPos *a5, const BlockPos *a6)
{
  const Block *result; // r0@1
  int v7; // r11@3
  int v8; // r0@3
  int v9; // r1@4
  int v10; // r3@7
  int v11; // r7@7
  __int64 v12; // r5@7
  int v13; // r4@7
  int v14; // r0@9
  BaseEntityRenderContext *v15; // [sp+8h] [bp-118h]@2
  Tessellator *v16; // [sp+10h] [bp-110h]@2
  StructureBlockRenderer *v17; // [sp+14h] [bp-10Ch]@1
  BlockSource *v18; // [sp+1Ch] [bp-104h]@1
  char v19; // [sp+20h] [bp-100h]@2
  int v20; // [sp+84h] [bp-9Ch]@9
  int v21; // [sp+88h] [bp-98h]@9
  int v22; // [sp+8Ch] [bp-94h]@9
  int v23; // [sp+90h] [bp-90h]@7
  int v24; // [sp+94h] [bp-8Ch]@7
  int v25; // [sp+98h] [bp-88h]@7
  char v26; // [sp+9Ch] [bp-84h]@3
  char v27; // [sp+A0h] [bp-80h]@2
  char v28; // [sp+C8h] [bp-58h]@2
  char v29; // [sp+F0h] [bp-30h]@2

  v17 = this;
  v18 = a3;
  result = Block::mStructureVoid;
  if ( Block::mStructureVoid )
  {
    v15 = a2;
    v16 = (Tessellator *)BaseEntityRenderContext::getTessellator(a2);
    Tessellator::begin((int)v16, 1, 24, 0);
    Tessellator::normal(v16, 0.0, 1.0, 0.0);
    Vec3::Vec3((int)&v29, (int)a5);
    Tessellator::setOffset(v16, (const Vec3 *)&v29);
    BlockPosIterator::BlockPosIterator((BlockPosIterator *)&v28, a5, a6);
    BlockPosIterator::begin((BlockPosIterator *)&v19, (int)&v28);
    BlockPosIterator::end((BlockPosIterator *)&v27, (int)&v28);
    if ( BlockPosIterator::operator!=((int)&v19, (int)&v27) == 1 )
    {
      while ( 1 )
      {
        v7 = BlockPosIterator::operator*((int)&v19);
        BlockSource::getBlockAndData((BlockSource *)&v26, v18, v7);
        v8 = *(_BYTE *)(FullBlock::getBlock((FullBlock *)&v26) + 4);
        if ( v8 == *((_BYTE *)Block::mStructureVoid + 4) )
          break;
        if ( v8 == *(_BYTE *)(Block::mAir + 4) )
        {
          v9 = 1;
          goto LABEL_7;
        }
LABEL_8:
        BlockPosIterator::operator++((int)&v19);
        if ( !BlockPosIterator::operator!=((int)&v19, (int)&v27) )
          goto LABEL_9;
      }
      v9 = 0;
LABEL_7:
      v10 = *((_DWORD *)a5 + 1);
      v11 = *((_DWORD *)a5 + 2);
      v12 = *(_QWORD *)v7;
      v13 = *(_DWORD *)(v7 + 8);
      v23 = *(_QWORD *)v7 - *(_DWORD *)a5;
      v24 = HIDWORD(v12) - v10;
      v25 = v13 - v11;
      BlockTessellator::tessellateStructureVoidInWorld(
        *((BlockTessellator **)v17 + 19),
        v16,
        Block::mStructureVoid,
        (const BlockPos *)&v23,
        v9,
        1);
      goto LABEL_8;
    }
LABEL_9:
    v20 = 0;
    v21 = 0;
    v22 = 0;
    Tessellator::setOffset(v16, (const Vec3 *)&v20);
    Tessellator::end((Tessellator *)&v19, (const char *)v16, 0, 0);
    v14 = BaseEntityRenderContext::getScreenContext(v15);
    mce::Mesh::render((mce::Buffer *)&v19, v14, (int)v17 + 104, 0, 0);
    result = (const Block *)mce::Mesh::~Mesh((mce::Mesh *)&v19);
  }
  return result;
}


BaseEntityRenderer *__fastcall StructureBlockRenderer::StructureBlockRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2, int a3)
{
  int v3; // r5@1
  mce::TextureGroup *v4; // r6@1
  BaseEntityRenderer *v5; // r4@1
  char *v6; // r0@1
  char *v7; // r0@2
  void *v8; // r0@3
  unsigned int *v10; // r2@5
  signed int v11; // r1@7
  unsigned int *v12; // r2@9
  signed int v13; // r1@11
  unsigned int *v14; // r2@13
  signed int v15; // r1@15
  int v16; // [sp+4h] [bp-2Ch]@3
  char *v17; // [sp+Ch] [bp-24h]@1
  char *v18; // [sp+10h] [bp-20h]@1
  int v19; // [sp+14h] [bp-1Ch]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  BaseEntityRenderer::BaseEntityRenderer(a1);
  *(_DWORD *)v5 = &off_26DB20C;
  *((_DWORD *)v5 + 19) = v3;
  sub_119C884((void **)&v17, "atlas.terrain");
  v18 = v17;
  v17 = (char *)&unk_28898CC;
  v19 = 0;
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v5 + 80), v4, (int)&v18, 0);
  v6 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  v7 = v17 - 12;
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v17 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  sub_119C884((void **)&v16, "entity_alphablend");
  mce::MaterialPtr::MaterialPtr(
    (BaseEntityRenderer *)((char *)v5 + 104),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v16);
  v8 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v16 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  *((_DWORD *)v5 + 29) = 0;
  *((_DWORD *)v5 + 30) = 0;
  *((_DWORD *)v5 + 31) = 0;
  return v5;
}


void __fastcall StructureBlockRenderer::_drawBox(int a1, BaseEntityRenderContext *a2, int a3, int a4, _WORD *a5, _DWORD *a6)
{
  int v6; // r11@1
  int v7; // r9@1
  int v8; // r5@1
  int v9; // r7@1
  int v10; // r8@1
  int v11; // r10@1
  signed int v12; // r6@3
  signed int v13; // r4@3
  int v14; // r0@6
  int v15; // r1@14
  int v16; // r2@14
  int v17; // r3@14
  signed int v18; // r11@14
  int v19; // r0@14
  __int64 v20; // r0@18
  __int64 v21; // r2@18
  int v22; // r0@18
  __int64 v23; // r1@22
  int v24; // r3@22
  int v25; // r0@24
  __int64 v26; // r0@26 OVERLAPPED
  int v27; // r2@26
  __int64 v28; // r1@28
  int v29; // r3@28
  int v30; // r0@28
  __int64 v31; // r0@30 OVERLAPPED
  bool v32; // zf@30
  int v33; // r2@30
  signed int v34; // r8@30
  int v35; // r3@30
  int v36; // r6@30
  int v37; // r0@30
  int v38; // r4@30
  __int64 v39; // r0@32
  int v40; // r3@32
  int v41; // r1@34
  int v42; // r2@34
  int v43; // r3@34
  __int64 v44; // r0@36
  int v45; // r3@36
  int v46; // r1@36
  int v47; // r2@36
  int v48; // r3@36
  int v49; // r1@36
  int v50; // r2@36
  int v51; // r3@36
  __int64 v52; // r0@36 OVERLAPPED
  int v53; // r2@36
  int v54; // r3@36
  Tessellator *v55; // r4@36
  int i; // r5@36
  int v57; // r8@36
  unsigned int *v58; // r2@38
  signed int v59; // r1@40
  int v60; // r9@46
  void *v61; // r0@46
  int v62; // [sp+4h] [bp-19Ch]@1
  int v63; // [sp+8h] [bp-198h]@1
  BaseEntityRenderContext *v64; // [sp+Ch] [bp-194h]@1
  int v65; // [sp+10h] [bp-190h]@8
  int v66; // [sp+18h] [bp-188h]@38
  char v67; // [sp+1Ch] [bp-184h]@46
  int v68; // [sp+28h] [bp-178h]@36
  int v69; // [sp+2Ch] [bp-174h]@36
  __int64 v70; // [sp+30h] [bp-170h]@36
  int v71; // [sp+38h] [bp-168h]@36
  int v72; // [sp+3Ch] [bp-164h]@36
  int v73; // [sp+40h] [bp-160h]@36
  int v74; // [sp+44h] [bp-15Ch]@36
  int v75; // [sp+48h] [bp-158h]@36
  int v76; // [sp+4Ch] [bp-154h]@36
  int v77; // [sp+50h] [bp-150h]@36
  int v78; // [sp+54h] [bp-14Ch]@36
  int v79; // [sp+58h] [bp-148h]@36
  int v80; // [sp+5Ch] [bp-144h]@36
  int v81; // [sp+60h] [bp-140h]@36
  int v82; // [sp+64h] [bp-13Ch]@36
  int v83; // [sp+68h] [bp-138h]@36
  int v84; // [sp+6Ch] [bp-134h]@36
  int v85; // [sp+70h] [bp-130h]@36
  int v86; // [sp+74h] [bp-12Ch]@36
  int v87; // [sp+78h] [bp-128h]@36
  int v88; // [sp+7Ch] [bp-124h]@36
  int v89; // [sp+80h] [bp-120h]@36
  int v90; // [sp+84h] [bp-11Ch]@36
  __int64 v91; // [sp+88h] [bp-118h]@36
  int v92; // [sp+90h] [bp-110h]@36
  int v93; // [sp+94h] [bp-10Ch]@36
  int v94; // [sp+98h] [bp-108h]@34
  int v95; // [sp+9Ch] [bp-104h]@34
  int v96; // [sp+A0h] [bp-100h]@34
  int v97; // [sp+A4h] [bp-FCh]@34
  int v98; // [sp+A8h] [bp-F8h]@34
  int v99; // [sp+ACh] [bp-F4h]@34
  int v100; // [sp+B0h] [bp-F0h]@36
  int v101; // [sp+B4h] [bp-ECh]@32
  int v102; // [sp+B8h] [bp-E8h]@32
  int v103; // [sp+BCh] [bp-E4h]@32
  __int64 v104; // [sp+C0h] [bp-E0h]@32
  int v105; // [sp+C8h] [bp-D8h]@32
  int v106; // [sp+CCh] [bp-D4h]@34
  int v107; // [sp+D0h] [bp-D0h]@30
  int v108; // [sp+D4h] [bp-CCh]@30
  __int64 v109; // [sp+D8h] [bp-C8h]@30
  int v110; // [sp+E0h] [bp-C0h]@30
  int v111; // [sp+E4h] [bp-BCh]@30
  int v112; // [sp+E8h] [bp-B8h]@32
  int v113; // [sp+ECh] [bp-B4h]@28
  int v114; // [sp+F0h] [bp-B0h]@28
  int v115; // [sp+F4h] [bp-ACh]@28
  int v116; // [sp+F8h] [bp-A8h]@28
  __int64 v117; // [sp+FCh] [bp-A4h]@28
  int v118; // [sp+104h] [bp-9Ch]@30
  __int64 v119; // [sp+108h] [bp-98h]@26
  __int64 v120; // [sp+110h] [bp-90h]@26
  __int64 v121; // [sp+118h] [bp-88h]@26
  int v122; // [sp+120h] [bp-80h]@28
  int v123; // [sp+124h] [bp-7Ch]@22
  int v124; // [sp+128h] [bp-78h]@22
  int v125; // [sp+12Ch] [bp-74h]@22
  int v126; // [sp+130h] [bp-70h]@22
  __int64 v127; // [sp+134h] [bp-6Ch]@22
  int v128; // [sp+13Ch] [bp-64h]@26
  int v129; // [sp+140h] [bp-60h]@18
  __int64 v130; // [sp+144h] [bp-5Ch]@18
  __int64 v131; // [sp+14Ch] [bp-54h]@18
  int v132; // [sp+154h] [bp-4Ch]@18
  int v133; // [sp+158h] [bp-48h]@22
  int v134; // [sp+15Ch] [bp-44h]@14
  int v135; // [sp+160h] [bp-40h]@14
  int v136; // [sp+164h] [bp-3Ch]@14
  int v137; // [sp+168h] [bp-38h]@14
  int v138; // [sp+16Ch] [bp-34h]@14
  int v139; // [sp+170h] [bp-30h]@14
  int v140; // [sp+174h] [bp-2Ch]@18

  v6 = a1;
  v64 = a2;
  v7 = a1 + 116;
  v8 = a4;
  v9 = a3;
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(a1 + 116);
  v63 = Color::toABGR((Color *)&Color::BLUE);
  v10 = Color::toABGR((Color *)&Color::GREEN);
  v62 = Color::toABGR((Color *)&Color::RED);
  v11 = Color::toABGR((Color *)&Color::WHITE);
  if ( *a6 == 2 )
  {
    v12 = 1;
    v13 = 0;
  }
  else if ( *a6 == 1 )
    v12 = 0;
    v13 = 1;
  else
  v14 = *a5;
  if ( v14 == 3 )
    v65 = v6;
LABEL_13:
    v12 ^= 1u;
    goto LABEL_14;
  if ( v14 == 2 )
    v13 ^= 1u;
    goto LABEL_13;
  v65 = v6;
  if ( v14 == 1 )
LABEL_14:
  v15 = *(_DWORD *)(v9 + 4);
  v16 = *(_DWORD *)(v9 + 8);
  v17 = *(_DWORD *)(v8 + 4);
  v18 = v12;
  v134 = *(_DWORD *)v9;
  v135 = v15;
  v136 = v16;
  v137 = v134;
  v138 = v17;
  v19 = v10;
  v139 = v16;
  if ( v12 )
    v19 = v11;
  if ( v13 )
  v140 = v19;
  std::vector<StructureBlockRenderer::Vertex,std::allocator<StructureBlockRenderer::Vertex>>::push_back(v7, (int)&v134);
  v20 = *(_QWORD *)(v9 + 4);
  v21 = *(_QWORD *)v8;
  v129 = *(_QWORD *)v8;
  v130 = v20;
  v131 = v21;
  v22 = v10;
  v132 = HIDWORD(v20);
  if ( v13 != 1 )
    v22 = v11;
  v133 = v22;
  std::vector<StructureBlockRenderer::Vertex,std::allocator<StructureBlockRenderer::Vertex>>::push_back(v7, (int)&v129);
  LODWORD(v23) = *(_DWORD *)(v8 + 4);
  HIDWORD(v23) = *(_DWORD *)(v8 + 8);
  v24 = *(_DWORD *)(v9 + 4);
  v123 = *(_DWORD *)v8;
  v124 = v24;
  v125 = HIDWORD(v23);
  v126 = v123;
  v127 = v23;
  if ( v12 != 1 )
    v10 = v11;
  v25 = v10;
  if ( v13 ^ 1 )
    v25 = v11;
  v128 = v25;
  std::vector<StructureBlockRenderer::Vertex,std::allocator<StructureBlockRenderer::Vertex>>::push_back(v7, (int)&v123);
  v26 = *(_QWORD *)(v8 + 4);
  v119 = *(_QWORD *)v9;
  v27 = v119;
  v120 = *(__int64 *)((char *)&v26 + 4);
  v121 = v26;
  v122 = v10;
  std::vector<StructureBlockRenderer::Vertex,std::allocator<StructureBlockRenderer::Vertex>>::push_back(v7, (int)&v119);
  LODWORD(v28) = *(_DWORD *)(v9 + 4);
  HIDWORD(v28) = *(_DWORD *)(v9 + 8);
  v29 = *(_DWORD *)v8;
  v113 = *(_DWORD *)v9;
  v114 = v28;
  v115 = HIDWORD(v28);
  v116 = v29;
  v117 = v28;
  v30 = v62;
    v30 = v11;
  v118 = v30;
  std::vector<StructureBlockRenderer::Vertex,std::allocator<StructureBlockRenderer::Vertex>>::push_back(v7, (int)&v113);
  v31 = *(_QWORD *)(v9 + 4);
  v32 = v13 == 0;
  v34 = v13;
  v35 = *(_DWORD *)(v8 + 8);
  v36 = v62;
  v107 = *(_DWORD *)v8;
  v33 = v107;
  v108 = v31;
  v109 = *(__int64 *)((char *)&v31 + 4);
  v110 = v31;
  v111 = v35;
  v37 = v11;
  v38 = v63;
  if ( !v32 )
    v37 = v63;
  v112 = v37;
  std::vector<StructureBlockRenderer::Vertex,std::allocator<StructureBlockRenderer::Vertex>>::push_back(v7, (int)&v107);
  v39 = *(_QWORD *)v9;
  v40 = *(_DWORD *)(v8 + 8);
  v101 = *(_DWORD *)v8;
  v102 = HIDWORD(v39);
  v103 = v40;
  v104 = v39;
  v105 = v40;
  if ( !v18 )
    v36 = v11;
  v106 = v36;
  std::vector<StructureBlockRenderer::Vertex,std::allocator<StructureBlockRenderer::Vertex>>::push_back(v7, (int)&v101);
  v41 = *(_DWORD *)(v9 + 4);
  v42 = *(_DWORD *)(v9 + 8);
  v43 = *(_DWORD *)(v8 + 8);
  v94 = *(_DWORD *)v9;
  v95 = v41;
  v96 = v43;
  v97 = v94;
  v98 = v41;
  v99 = v42;
  if ( v34 )
    v38 = v11;
  v100 = v38;
  std::vector<StructureBlockRenderer::Vertex,std::allocator<StructureBlockRenderer::Vertex>>::push_back(v7, (int)&v94);
  v44 = *(_QWORD *)v8;
  v45 = *(_DWORD *)(v9 + 8);
  v88 = *(_DWORD *)v9;
  v89 = HIDWORD(v44);
  v90 = v45;
  v91 = v44;
  v92 = v45;
  v93 = v11;
  std::vector<StructureBlockRenderer::Vertex,std::allocator<StructureBlockRenderer::Vertex>>::push_back(v7, (int)&v88);
  v46 = *(_DWORD *)(v8 + 4);
  v47 = *(_DWORD *)(v8 + 8);
  v48 = *(_DWORD *)(v9 + 8);
  v81 = *(_DWORD *)v8;
  v82 = v46;
  v83 = v48;
  v84 = v81;
  v85 = v46;
  v86 = v47;
  v87 = v11;
  std::vector<StructureBlockRenderer::Vertex,std::allocator<StructureBlockRenderer::Vertex>>::push_back(v7, (int)&v81);
  v49 = *(_DWORD *)(v8 + 4);
  v50 = *(_DWORD *)(v8 + 8);
  v51 = *(_DWORD *)v9;
  v74 = *(_DWORD *)v8;
  v75 = v49;
  v76 = v50;
  v77 = v51;
  v78 = v49;
  v79 = v50;
  v80 = v11;
  std::vector<StructureBlockRenderer::Vertex,std::allocator<StructureBlockRenderer::Vertex>>::push_back(v7, (int)&v74);
  v52 = *(_QWORD *)(v8 + 4);
  v54 = *(_DWORD *)(v9 + 8);
  v68 = *(_DWORD *)v9;
  v53 = v68;
  v69 = v52;
  v70 = *(__int64 *)((char *)&v52 + 4);
  v71 = v52;
  v72 = v54;
  v73 = v11;
  std::vector<StructureBlockRenderer::Vertex,std::allocator<StructureBlockRenderer::Vertex>>::push_back(v7, (int)&v68);
  v55 = (Tessellator *)BaseEntityRenderContext::getTessellator(v64);
  v57 = *(_QWORD *)(v65 + 116) >> 32;
  for ( i = *(_QWORD *)(v65 + 116); i != v57; i += 28 )
    Tessellator::begin((int)v55, 5, 2, 0);
    Tessellator::colorABGR(v55, *(_DWORD *)(i + 24));
    Tessellator::vertex(v55, (const Vec3 *)i);
    Tessellator::vertex(v55, (const Vec3 *)(i + 12));
    v60 = BaseEntityRenderContext::getScreenContext(v64);
    sub_119C884((void **)&v66, "debug");
    mce::RenderMaterialGroup::getMaterial(
      (mce::MaterialPtr *)&v67,
      (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
      &v66);
    Tessellator::draw((char *)v55, v60, (int)&v67);
    mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v67);
    v61 = (void *)(v66 - 12);
    if ( (int *)(v66 - 12) != &dword_28898C0 )
    {
      v58 = (unsigned int *)(v66 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v59 = __ldrex(v58);
        while ( __strex(v59 - 1, v58) );
      }
      else
        v59 = (*v58)--;
      if ( v59 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v61);
    }
}


void __fastcall StructureBlockRenderer::~StructureBlockRenderer(StructureBlockRenderer *this)
{
  StructureBlockRenderer::~StructureBlockRenderer(this);
}


void __fastcall StructureBlockRenderer::_renderBoundingBox(int a1, BaseEntityRenderContext *a2, int a3, int a4, int a5, _WORD *a6, _DWORD *a7)
{
  BaseEntityRenderContext *v7; // r8@1
  int v8; // r5@1
  int v9; // [sp+Ch] [bp-34h]@1
  signed int v10; // [sp+10h] [bp-30h]@1
  int v11; // [sp+14h] [bp-2Ch]@1
  int v12; // [sp+18h] [bp-28h]@1
  int v13; // [sp+1Ch] [bp-24h]@1
  int v14; // [sp+20h] [bp-20h]@1
  int v15; // [sp+24h] [bp-1Ch]@1
  int v16; // [sp+28h] [bp-18h]@1
  int v17; // [sp+2Ch] [bp-14h]@1
  char v18; // [sp+30h] [bp-10h]@1
  char v19; // [sp+34h] [bp-Ch]@1
  int v20; // [sp+40h] [bp+0h]@1
  int v21; // [sp+4Ch] [bp+Ch]@1
  int v22; // [sp+50h] [bp+10h]@1
  int v23; // [sp+54h] [bp+14h]@1
  int v24; // [sp+58h] [bp+18h]@1
  int v25; // [sp+5Ch] [bp+1Ch]@1
  int v26; // [sp+60h] [bp+20h]@1
  char v27; // [sp+64h] [bp+24h]@1

  v7 = a2;
  v8 = a1;
  Vec3::Vec3((int)&v20, a4);
  Vec3::Vec3((int)&v19, a5);
  AABB::AABB((int)&v21, (int)&v20, (int)&v19);
  v9 = 1020054733;
  v10 = 1020054733;
  v11 = 1020054733;
  AABB::grow((AABB *)&v12, (const Vec3 *)&v21, (int)&v9);
  v21 = v12;
  v22 = v13;
  v23 = v14;
  v24 = v15;
  v25 = v16;
  v26 = v17;
  v27 = v18;
  StructureBlockRenderer::_drawBox(v8, v7, (int)&v21, (int)&v24, a6, a7);
}


char *__fastcall StructureBlockRenderer::render(StructureBlockRenderer *this, BaseEntityRenderContext *a2, BlockEntityRenderData *a3)
{
  unsigned int v3; // r10@0
  __int64 v4; // kr00_8@1
  StructureBlockRenderer *v5; // r7@1
  BaseEntityRenderContext *v6; // r4@1
  char *result; // r0@1
  unsigned int v9; // r8@1
  signed int v10; // r11@2
  char *v13; // r0@5
  int v14; // r0@5
  char *v18; // r0@7
  int v19; // r5@7
  StructureBlockEntity *v20; // r3@7
  int v21; // r2@7
  int v22; // r7@7
  int v23; // r1@7
  int v24; // r4@7
  int v25; // r1@9
  int v26; // r0@11
  int v27; // r1@11
  char *v28; // r0@22
  char *v29; // r7@22
  char *v30; // r0@22
  int v31; // r4@22
  char *v32; // r0@22
  int v33; // r5@22
  int v34; // r9@22
  char *v35; // r0@22
  int v36; // r1@22
  int v37; // r7@22
  int v38; // r1@27
  int v39; // r2@27
  int v40; // r2@30
  int v41; // r4@30
  int v42; // r3@30
  int v43; // r5@30
  int v44; // r6@34
  int v45; // r0@36
  int v46; // r0@38
  char *v47; // [sp+8h] [bp-E0h]@22
  StructureBlockRenderer *v48; // [sp+Ch] [bp-DCh]@5
  BaseEntityRenderContext *v49; // [sp+10h] [bp-D8h]@5
  char *v50; // [sp+14h] [bp-D4h]@22
  int v51; // [sp+18h] [bp-D0h]@42
  int v52; // [sp+1Ch] [bp-CCh]@44
  int v53; // [sp+20h] [bp-C8h]@46
  int v54; // [sp+24h] [bp-C4h]@36
  int v55; // [sp+28h] [bp-C0h]@38
  int v56; // [sp+2Ch] [bp-BCh]@40
  StructureBlockEntity *v57; // [sp+30h] [bp-B8h]@15
  int v58; // [sp+34h] [bp-B4h]@17
  int v59; // [sp+38h] [bp-B0h]@19
  int v60; // [sp+3Ch] [bp-ACh]@9
  int v61; // [sp+40h] [bp-A8h]@11
  int v62; // [sp+44h] [bp-A4h]@13
  float v63; // [sp+48h] [bp-A0h]@5
  char v66; // [sp+54h] [bp-94h]@5
  int v67; // [sp+5Ch] [bp-8Ch]@5
  int v68; // [sp+60h] [bp-88h]@5
  int v69; // [sp+64h] [bp-84h]@5
  int v70; // [sp+68h] [bp-80h]@46
  signed int v71; // [sp+6Ch] [bp-7Ch]@46
  int v72; // [sp+70h] [bp-78h]@46
  int v73; // [sp+74h] [bp-74h]@46
  int v74; // [sp+78h] [bp-70h]@46
  int v75; // [sp+7Ch] [bp-6Ch]@46
  int v76; // [sp+80h] [bp-68h]@46
  int v77; // [sp+84h] [bp-64h]@46
  int v78; // [sp+88h] [bp-60h]@46
  char v79; // [sp+8Ch] [bp-5Ch]@46
  char v80; // [sp+90h] [bp-58h]@46
  char v81; // [sp+9Ch] [bp-4Ch]@46
  int v82; // [sp+A8h] [bp-40h]@46
  int v83; // [sp+ACh] [bp-3Ch]@46
  int v84; // [sp+B0h] [bp-38h]@46
  int v85; // [sp+B4h] [bp-34h]@46
  int v86; // [sp+B8h] [bp-30h]@46
  int v87; // [sp+BCh] [bp-2Ch]@46
  char v88; // [sp+C0h] [bp-28h]@46

  v4 = *(_QWORD *)a3;
  v5 = this;
  v6 = a2;
  _R5 = *((_DWORD *)a3 + 2);
  result = StructureBlockEntity::getStructureSize((StructureBlockEntity *)(*(_QWORD *)a3 >> 32));
  v9 = *(_DWORD *)result;
  if ( *(_DWORD *)result >= 1 )
  {
    v10 = *((_DWORD *)result + 1);
    _VF = __OFSUB__(v10, 1);
    _NF = v10 - 1 < 0;
    if ( v10 >= 1 )
    {
      v3 = *((_DWORD *)result + 2);
      _VF = __OFSUB__(v3, 1);
      _NF = ((v3 - 1) & 0x80000000) != 0;
    }
    if ( !(_NF ^ _VF) )
      v48 = v5;
      v13 = BlockEntity::getPosition((BlockEntity *)HIDWORD(v4));
      v67 = *(_DWORD *)v13;
      v68 = *((_DWORD *)v13 + 1);
      v69 = *((_DWORD *)v13 + 2);
      v49 = v6;
      v14 = BaseEntityRenderContext::getWorldMatrix(v6);
      MatrixStack::push((MatrixStack *)&v66, v14);
      _R7 = MatrixStack::MatrixStackRef::operator->((int)&v66);
      Vec3::Vec3((int)&v63, (int)&v67);
      __asm
      {
        VLDR            S0, [SP,#0xE8+var_A0]
        VLDR            S6, [R5]
        VLDR            S2, [SP,#0xE8+var_9C]
        VLDR            S8, [R5,#4]
        VSUB.F32        S0, S6, S0
        VLDR            S4, [SP,#0xE8+var_98]
        VSUB.F32        S2, S8, S2
        VLDR            S10, [R5,#8]
        VLDR            S6, [R7]
        VLDR            S8, [R7,#4]
        VSUB.F32        S4, S10, S4
        VLDR            S10, [R7,#0x14]
        VLDR            S1, [R7,#0x10]
        VLDR            S14, [R7,#0xC]
        VMUL.F32        S6, S6, S0
        VLDR            S3, [R7,#0x18]
        VMUL.F32        S8, S8, S0
        VMUL.F32        S10, S10, S2
        VLDR            S12, [R7,#8]
        VMUL.F32        S1, S1, S2
        VLDR            S5, [R7,#0x1C]
        VMUL.F32        S14, S14, S0
        VLDR            S7, [R7,#0x20]
        VMUL.F32        S0, S12, S0
        VLDR            S12, [R7,#0x24]
        VMUL.F32        S3, S3, S2
        VMUL.F32        S2, S5, S2
        VMUL.F32        S5, S7, S4
        VLDR            S7, [R7,#0x28]
        VADD.F32        S8, S10, S8
        VLDR            S10, [R7,#0x2C]
        VADD.F32        S6, S1, S6
        VMUL.F32        S12, S12, S4
        VMUL.F32        S1, S7, S4
        VADD.F32        S0, S3, S0
        VMUL.F32        S4, S10, S4
        VLDR            S10, [R7,#0x34]
        VADD.F32        S2, S2, S14
        VADD.F32        S6, S6, S5
        VADD.F32        S8, S8, S12
        VLDR            S12, [R7,#0x38]
        VADD.F32        S0, S0, S1
        VADD.F32        S2, S2, S4
        VLDR            S4, [R7,#0x30]
        VADD.F32        S4, S6, S4
        VLDR            S6, [R7,#0x3C]
        VADD.F32        S8, S8, S10
        VADD.F32        S0, S0, S12
        VADD.F32        S2, S2, S6
        VSTR            S4, [R7,#0x30]
        VSTR            S8, [R7,#0x34]
        VSTR            S0, [R7,#0x38]
        VSTR            S2, [R7,#0x3C]
      }
      if ( StructureBlockEntity::getShowAir((StructureBlockEntity *)HIDWORD(v4)) == 1
        && BlockEntity::getData((BlockEntity *)HIDWORD(v4)) == 1 )
        v18 = StructureBlockEntity::getStructureOffset((StructureBlockEntity *)HIDWORD(v4));
        v19 = (*(_QWORD *)v18 >> 32) + v68;
        v20 = (StructureBlockEntity *)(*(_QWORD *)v18 + v67);
        v21 = v10 + v19 - 1;
        v22 = (int)v20 + v9 - 1;
        v23 = (int)v20;
        v24 = *((_DWORD *)v18 + 2) + v69;
        if ( v22 < (signed int)v20 )
          v23 = v9 + *(_QWORD *)v18 + v67 - 1;
        v60 = v23;
        v25 = v19;
        if ( v21 < v19 )
          v25 = v10 + v19 - 1;
        v26 = v24;
        v61 = v25;
        v27 = v3 + v24 - 1;
        if ( v27 < v24 )
          v26 = v3 + v24 - 1;
        v62 = v26;
        if ( (signed int)v20 < v22 )
          v20 = (StructureBlockEntity *)((char *)v20 + v9 - 1);
        v57 = v20;
        if ( v19 < v21 )
          v19 = v10 + v19 - 1;
        v58 = v19;
        if ( v24 < v27 )
          v24 = v3 + v24 - 1;
        v59 = v24;
        StructureBlockRenderer::_renderVoid(
          v48,
          v49,
          (BlockSource *)v4,
          v20,
          (const BlockPos *)&v60,
          (const BlockPos *)&v57);
      if ( StructureBlockEntity::getShowBoundingBox((StructureBlockEntity *)HIDWORD(v4))
        || BlockEntity::getData((BlockEntity *)HIDWORD(v4)) == 1 )
        v28 = StructureBlockEntity::getStructureSettings((StructureBlockEntity *)HIDWORD(v4));
        v29 = StructureSettings::getMirror((StructureSettings *)v28);
        v30 = StructureBlockEntity::getStructureSettings((StructureBlockEntity *)HIDWORD(v4));
        v50 = StructureSettings::getRotation((StructureSettings *)v30);
        v31 = *(_DWORD *)StructureBlockEntity::getStructureOffset((StructureBlockEntity *)HIDWORD(v4));
        v32 = StructureBlockEntity::getStructureOffset((StructureBlockEntity *)HIDWORD(v4));
        v33 = v68;
        v34 = *((_DWORD *)v32 + 2);
        v35 = StructureBlockEntity::getStructureOffset((StructureBlockEntity *)HIDWORD(v4));
        v36 = *(_DWORD *)v29;
        v47 = v29;
        v37 = *((_DWORD *)v35 + 1) + v33;
        if ( v36 == 2 )
        {
          v9 = -v9;
        }
        else if ( v36 == 1 )
          v3 = -v3;
        v38 = v37 + v10;
        v39 = *(_WORD *)v50;
        switch ( v39 )
          case 3:
            v41 = v31 + (v3 >> 31) + v67;
            v43 = v41 + v3;
            v40 = ((v9 >> 31) ^ 1) + v34 + v69;
            v42 = v40 - v9;
            break;
          case 2:
            v41 = ((v9 >> 31) ^ 1) + v31 + v67;
            v40 = v69 + ((v3 >> 31) ^ 1) + v34;
            v43 = v41 - v9;
            v42 = v40 - v3;
          case 1:
            v40 = v69 + v34 + (v9 >> 31);
            v41 = ((v3 >> 31) ^ 1) + v31 + v67;
            v42 = v40 + v9;
            v43 = v41 - v3;
          default:
            v41 = v31 + (v9 >> 31) + v67;
            v40 = v69 + v34 + (v3 >> 31);
            v43 = v41 + v9;
            v42 = v40 + v3;
        v44 = v41;
        if ( v43 < v41 )
          v44 = v43;
        v45 = v37;
        v54 = v44;
        if ( v38 < v37 )
          v45 = v37 + v10;
        v55 = v45;
        v46 = v40;
        if ( v42 < v40 )
          v46 = v42;
        v56 = v46;
        if ( v41 < v43 )
          v41 = v43;
        v51 = v41;
        if ( v37 < v38 )
          v37 += v10;
        v52 = v37;
        if ( v40 < v42 )
          v40 = v42;
        v53 = v40;
        Vec3::Vec3((int)&v81, (int)&v54);
        Vec3::Vec3((int)&v80, (int)&v51);
        AABB::AABB((int)&v82, (int)&v81, (int)&v80);
        v70 = 1020054733;
        v71 = 1020054733;
        v72 = 1020054733;
        AABB::grow((AABB *)&v73, (const Vec3 *)&v82, (int)&v70);
        v82 = v73;
        v83 = v74;
        v84 = v75;
        v85 = v76;
        v86 = v77;
        v87 = v78;
        v88 = v79;
        StructureBlockRenderer::_drawBox((int)v48, v49, (int)&v82, (int)&v85, v50, v47);
      result = (char *)MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v66);
  }
  return result;
}


int __fastcall StructureBlockRenderer::~StructureBlockRenderer(StructureBlockRenderer *this)
{
  StructureBlockRenderer *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26DB20C;
  v2 = (void *)*((_DWORD *)this + 29);
  if ( v2 )
    operator delete(v2);
  mce::MaterialPtr::~MaterialPtr((StructureBlockRenderer *)((char *)v1 + 104));
  mce::TexturePtr::~TexturePtr((StructureBlockRenderer *)((char *)v1 + 80));
  return j_j_j__ZN19BlockEntityRendererD2Ev(v1);
}


void __fastcall StructureBlockRenderer::~StructureBlockRenderer(StructureBlockRenderer *this)
{
  StructureBlockRenderer *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26DB20C;
  v2 = (void *)*((_DWORD *)this + 29);
  if ( v2 )
    operator delete(v2);
  mce::MaterialPtr::~MaterialPtr((StructureBlockRenderer *)((char *)v1 + 104));
  mce::TexturePtr::~TexturePtr((StructureBlockRenderer *)((char *)v1 + 80));
  BlockEntityRenderer::~BlockEntityRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall StructureBlockRenderer::_drawBox(int a1, BaseEntityRenderContext *a2, int a3, int a4, _WORD *a5, _DWORD *a6)
{
  StructureBlockRenderer::_drawBox(a1, a2, a3, a4, a5, a6);
}
