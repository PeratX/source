

void __fastcall LevelRenderer::~LevelRenderer(LevelRenderer *this)
{
  LevelRenderer::~LevelRenderer(this);
}


Particle *__fastcall LevelRenderer::addParticle(int a1, int a2, const Vec3 *a3, const Vec3 *a4, int a5, const CompoundTag *a6)
{
  int v6; // r7@1
  int v7; // r9@1
  const Vec3 *v16; // r8@1
  int v17; // r4@1
  Particle *result; // r0@12

  v6 = a1;
  v7 = a2;
  _R1 = a1 + 2132;
  _R5 = a3;
  _R2 = a1 + 2140;
  __asm { VLDR            S24, [R1] }
  _R1 = a1 + 2136;
  v16 = a4;
  __asm
  {
    VLDR            S16, [R5]
    VLDR            S18, [R5,#4]
    VLDR            S20, [R5,#8]
    VLDR            S22, [R2]
    VLDR            S26, [R1]
  }
  v17 = Options::getViewDistanceChunks(*(Options **)(a1 + 4500));
  (*(void (**)(void))(**(_DWORD **)(v6 + 4516) + 76))();
  _R1 = 16 * v17;
    VMOV.F32        S0, #0.5
    VMOV            S2, R1
    VLDR            S4, =40.0
    VLDR            S6, =128.0
    VCVT.F32.S32    S2, S2
    VSUB.F32        S18, S18, S26
    VSUB.F32        S16, S16, S24
    VMUL.F32        S0, S2, S0
    VLDR            S2, =64.0
  if ( !_ZF )
    __asm { VMOVNE.F32      S2, S6 }
    VCMPE.F32       S0, S4
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S0, S4 }
    VCMPE.F32       S2, S0
    __asm { VMOVLT.F32      S0, S2 }
    VLDR            S2, =-32.0
    VADD.F32        S28, S0, S2
  _R0 = Options::getParticleViewDistance(*(Options **)(v6 + 4500));
    VMOV            S0, R0
    VLDR            S6, =32.0
    VMOV.F32        S10, #5.0
    VMUL.F32        S0, S28, S0
    VSUB.F32        S2, S20, S22
    VMUL.F32        S4, S16, S16
    VMUL.F32        S8, S18, S18
    VADD.F32        S0, S0, S6
    VMUL.F32        S2, S2, S2
    VADD.F32        S4, S8, S4
    VMUL.F32        S6, S0, S10
    VADD.F32        S2, S4, S2
    __asm { VMOVNE.F32      S0, S6 }
    VMUL.F32        S0, S0, S0
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF
    && !LevelRendererPlayer::isPositionTooCloseToCamera((LevelRendererPlayer *)(v6 + 1584), _R5) )
    result = j_j_j__ZN14ParticleEngine8instanceE12ParticleTypeRK4Vec3S3_iPK11CompoundTag(
               *(_DWORD *)(v6 + 1568),
               v7,
               _R5,
               v16,
               a5,
               a6);
  else
    result = 0;
  return result;
}


void __fastcall LevelRenderer::_initResources(LevelRenderer *this)
{
  LevelRenderer::_initResources(this);
}


int __fastcall LevelRenderer::onAppResumed(LevelRenderer *this)
{
  LevelRenderer *v1; // r4@1
  Tessellator *v2; // r1@1

  v1 = this;
  TaskGroup::resume(*((TaskGroup **)this + 1130));
  (*(void (__fastcall **)(char *))(*((_DWORD *)v1 + 396) + 24))((char *)v1 + 1584);
  v2 = (Tessellator *)GameRenderer::getTessellator(*((GameRenderer **)v1 + 394));
  return j_j_j__ZN13LevelRenderer13_createMeshesER11Tessellator(v1, v2);
}


void __fastcall LevelRenderer::_initResources(LevelRenderer *this)
{
  LevelRenderer *v1; // r4@1
  Tessellator *v2; // r0@1
  int v3; // r10@1
  unsigned int *v4; // r2@2
  signed int v5; // r1@4
  unsigned int *v6; // r2@6
  signed int v7; // r1@8
  mce::TextureGroup *v8; // r11@18
  _BYTE *v9; // r0@18
  int v10; // r1@18 OVERLAPPED
  int v11; // r8@18
  unsigned int v12; // r2@18
  _DWORD *v13; // r0@21
  int v14; // r0@23
  char *v15; // r0@26
  char *v16; // r0@27
  _BYTE *v17; // [sp+Ch] [bp-4Ch]@6
  char *v18; // [sp+10h] [bp-48h]@2
  int v19; // [sp+14h] [bp-44h]@23
  char v20; // [sp+18h] [bp-40h]@23

  v1 = this;
  v2 = (Tessellator *)GameRenderer::getTessellator(*((GameRenderer **)this + 394));
  LevelRenderer::_createMeshes(v1, v2);
  v3 = 0;
  do
  {
    v8 = (mce::TextureGroup *)*((_DWORD *)v1 + 3);
    sub_119C884((void **)&v17, "textures/environment/destroy_stage_");
    v9 = v17;
    *(_QWORD *)&v10 = *(_QWORD *)(v17 - 12);
    v11 = v10 + 1;
    if ( v10 + 1 > v12 || *((_DWORD *)v17 - 1) >= 1 )
    {
      sub_119CAF8((const void **)&v17, v10 + 1);
      v9 = v17;
      v10 = *((_DWORD *)v17 - 3);
    }
    v9[v10] = v3 + 48;
    v13 = v17;
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      *((_DWORD *)v17 - 1) = 0;
      *(v13 - 3) = v11;
      *((_BYTE *)v13 + v11) = byte_26C67B8[0];
      v13 = v17;
    v17 = &unk_28898CC;
    v18 = (char *)v13;
    v19 = 0;
    mce::TextureGroup::getTexture((mce::TexturePtr *)&v20, v8, (int)&v18, 0);
    v14 = *((_DWORD *)v1 + 385);
    if ( v14 == *((_DWORD *)v1 + 386) )
      std::vector<mce::TexturePtr,std::allocator<mce::TexturePtr>>::_M_emplace_back_aux<mce::TexturePtr>(
        (unsigned __int64 *)v1 + 192,
        (int)&v20);
    else
      mce::TexturePtr::TexturePtr(v14, (int)&v20);
      *((_DWORD *)v1 + 385) += 24;
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v20);
    v15 = v18 - 12;
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v4 = (unsigned int *)(v18 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v5 = __ldrex(v4);
        while ( __strex(v5 - 1, v4) );
      }
      else
        v5 = (*v4)--;
      if ( v5 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
    v16 = v17 - 12;
      v6 = (unsigned int *)(v17 - 4);
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
        v7 = (*v6)--;
      if ( v7 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v16);
    ++v3;
  }
  while ( v3 != 10 );
}


int __fastcall LevelRenderer::tick(LevelRenderer *this)
{
  ++*((_QWORD *)this + 194);
  return j_j_j__ZN19LevelRendererPlayer4tickEv((LevelRenderer *)((char *)this + 1584));
}


int __fastcall LevelRenderer::getBlockRenderer(LevelRenderer *this)
{
  LevelRenderer *v1; // r4@1
  Entity *v2; // r0@1
  BlockSource *v3; // r5@1
  BlockTessellator *v4; // r0@1
  void *v5; // r6@5
  BlockTessellator *v6; // r0@5
  BlockTessellator *v7; // r0@6

  v1 = this;
  v2 = (Entity *)ClientInstance::getCameraTargetEntity(*((ClientInstance **)this + 1127));
  v3 = (BlockSource *)Entity::getRegion(v2);
  v4 = (BlockTessellator *)*((_DWORD *)v1 + 391);
  if ( v4 )
  {
    if ( (BlockSource *)BlockTessellator::getRegion(v4) != v3 )
      BlockTessellator::setRegion(*((BlockTessellator **)v1 + 391), v3);
  }
  else
    v5 = operator new(0xDE00u);
    BlockTessellator::BlockTessellator((int)v5, (int)v3);
    v6 = (BlockTessellator *)*((_DWORD *)v1 + 391);
    *((_DWORD *)v1 + 391) = v5;
    if ( v6 )
    {
      v7 = BlockTessellator::~BlockTessellator(v6);
      operator delete((void *)v7);
      return *((_DWORD *)v1 + 391);
    }
  return *((_DWORD *)v1 + 391);
}


int __fastcall LevelRenderer::_createMeshes(LevelRenderer *this, Tessellator *a2)
{
  LevelRenderer *v2; // r4@1
  Tessellator *v3; // r5@1
  char v5; // [sp+4h] [bp-2CCh]@1
  char v6; // [sp+68h] [bp-268h]@1
  char v7; // [sp+CCh] [bp-204h]@1
  char v8; // [sp+130h] [bp-1A0h]@1
  char v9; // [sp+194h] [bp-13Ch]@1
  char v10; // [sp+1F8h] [bp-D8h]@1
  char v11; // [sp+25Ch] [bp-74h]@1

  v2 = this;
  v3 = a2;
  PrefabMeshGenerator::buildSkyMesh((PrefabMeshGenerator *)&v11, a2);
  mce::Mesh::operator=((int)v2 + 216, (int)&v11);
  mce::Mesh::~Mesh((mce::Mesh *)&v11);
  PrefabMeshGenerator::buildStarsMesh((PrefabMeshGenerator *)&v10, v3);
  mce::Mesh::operator=((int)v2 + 316, (int)&v10);
  mce::Mesh::~Mesh((mce::Mesh *)&v10);
  PrefabMeshGenerator::buildSunAndMoonQuad((PrefabMeshGenerator *)&v9, v3, 1, 0);
  mce::Mesh::operator=((int)v2 + 516, (int)&v9);
  mce::Mesh::~Mesh((mce::Mesh *)&v9);
  PrefabMeshGenerator::buildSunAndMoonQuad((PrefabMeshGenerator *)&v8, v3, 0, 0);
  mce::Mesh::operator=((int)v2 + 616, (int)&v8);
  mce::Mesh::~Mesh((mce::Mesh *)&v8);
  PrefabMeshGenerator::buildSunAndMoonQuad((PrefabMeshGenerator *)&v8, v3, 0, 1);
  mce::Mesh::operator=((int)v2 + 716, (int)&v8);
  PrefabMeshGenerator::buildSunAndMoonQuad((PrefabMeshGenerator *)&v8, v3, 0, 2);
  mce::Mesh::operator=((int)v2 + 816, (int)&v8);
  PrefabMeshGenerator::buildSunAndMoonQuad((PrefabMeshGenerator *)&v8, v3, 0, 3);
  mce::Mesh::operator=((int)v2 + 916, (int)&v8);
  PrefabMeshGenerator::buildSunAndMoonQuad((PrefabMeshGenerator *)&v8, v3, 0, 4);
  mce::Mesh::operator=((int)v2 + 1016, (int)&v8);
  PrefabMeshGenerator::buildSunAndMoonQuad((PrefabMeshGenerator *)&v8, v3, 0, 5);
  mce::Mesh::operator=((int)v2 + 1116, (int)&v8);
  PrefabMeshGenerator::buildSunAndMoonQuad((PrefabMeshGenerator *)&v8, v3, 0, 6);
  mce::Mesh::operator=((int)v2 + 1216, (int)&v8);
  PrefabMeshGenerator::buildSunAndMoonQuad((PrefabMeshGenerator *)&v8, v3, 0, 7);
  mce::Mesh::operator=((int)v2 + 1316, (int)&v8);
  PrefabMeshGenerator::buildUnitCube((PrefabMeshGenerator *)&v7, v3);
  mce::Mesh::operator=((int)v2 + 416, (int)&v7);
  mce::Mesh::~Mesh((mce::Mesh *)&v7);
  PrefabMeshGenerator::buildShadowVolume((PrefabMeshGenerator *)&v6, v3);
  mce::Mesh::operator=((int)v2 + 16, (int)&v6);
  mce::Mesh::~Mesh((mce::Mesh *)&v6);
  PrefabMeshGenerator::buildShadowOverlay((PrefabMeshGenerator *)&v5, v3);
  mce::Mesh::operator=((int)v2 + 116, (int)&v5);
  return mce::Mesh::~Mesh((mce::Mesh *)&v5);
}


char *__fastcall LevelRenderer::getLevelRendererPlayer(LevelRenderer *this)
{
  return (char *)this + 1584;
}


_DWORD **__fastcall LevelRenderer::onOptionsChanged(LevelRenderer *this)
{
  LevelRenderer *v1; // r4@1
  Block *v2; // r5@1
  char v3; // r6@1
  char v4; // r0@1
  bool v5; // r3@1
  Options **v6; // r9@1
  int v7; // r7@1
  _DWORD **result; // r0@1
  int v9; // r4@2
  int (__fastcall *v10)(int, int, int); // r6@3
  int v11; // r5@3
  int v12; // r0@3

  v1 = this;
  v2 = (Block *)Options::getFancyGraphics(*((Options **)this + 1125));
  v3 = Options::getPreferPolyTessellation(*((Options **)v1 + 1125));
  v4 = Options::getTransparentLeaves(*((Options **)v1 + 1125));
  Block::DEPRECATEDcallOnGraphicsModeChanged(v2, v3, v4, v5);
  v6 = (Options **)((char *)v1 + 4500);
  v7 = 0;
  result = BlockGraphics::mBlocks;
  do
  {
    v9 = BlockGraphics::mBlocks[v7];
    if ( v9 )
    {
      v10 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v9 + 28);
      v11 = Options::getFancyGraphics(*v6);
      v12 = Options::getPreferPolyTessellation(*v6);
      result = (_DWORD **)v10(v9, v11, v12);
    }
    ++v7;
  }
  while ( v7 != 256 );
  return result;
}


RenderChunk *__fastcall LevelRenderer::LevelRenderer(RenderChunk *a1, int a2, int a3, mce::TexturePtr *a4, mce::TexturePtr *a5, mce::TexturePtr *a6, __int64 a7, mce::Mesh *a8, mce::Mesh *a9, mce::Mesh *a10, mce::Mesh *a11, mce::Mesh *a12, mce::Mesh *a13, mce::Mesh *a14, int a15, int a16, int a17, int a18, mce::Mesh *a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, char a59)
{
  RenderChunk *v59; // r8@1
  ClientInstance *v60; // r11@1
  char *v61; // r0@1
  char *v62; // r0@2
  char *v63; // r0@3
  char *v64; // r0@4
  char *v65; // r0@5
  char *v66; // r0@6
  char *v67; // r0@7
  char *v68; // r0@8
  int v69; // r3@9
  unsigned int *v70; // r6@10
  unsigned int v71; // r2@12
  __int64 v72; // r4@15
  int v73; // r1@15
  unsigned int *v74; // r1@16
  unsigned int v75; // r3@18
  int v76; // r7@21
  unsigned int *v77; // r1@22
  unsigned int v78; // r0@24
  int v79; // r6@28
  unsigned int *v80; // r5@28
  unsigned int v81; // r0@30
  int v82; // r7@35
  unsigned int *v83; // r1@36
  unsigned int v84; // r0@38
  int v85; // r6@42
  unsigned int *v86; // r5@42
  unsigned int v87; // r0@44
  int v88; // r0@49
  unsigned int *v89; // r0@50
  unsigned int v90; // r1@52
  Scheduler *v91; // r0@55
  int v92; // r1@55
  WorkerPool *v93; // r0@55
  WorkerPool *v94; // r0@56
  int v95; // r1@57
  int v96; // r1@57
  TaskGroup *v97; // r0@57
  TaskGroup *v98; // r0@58
  int v99; // r1@59
  TaskGroup *v100; // r0@59
  TaskGroup *v101; // r0@60
  void *v102; // r7@61
  void *v103; // r0@61
  int v104; // r1@63
  ParticleEngine *v105; // r0@63
  ParticleEngine *v106; // r0@64
  ClientInstance *v107; // r0@65
  mce::TextureGroup *v108; // r1@65
  TerrainLayer *v109; // r0@66
  int v110; // r7@67
  unsigned int *v111; // r2@68
  signed int v112; // r1@70
  unsigned int *v113; // r2@72
  signed int v114; // r1@74
  unsigned int *v115; // r2@76
  signed int v116; // r1@78
  _BYTE *v117; // r0@92
  int v118; // r1@92 OVERLAPPED
  int v119; // r11@92
  unsigned int v120; // r2@92
  _DWORD *v121; // r1@95
  mce::TexturePtr *v122; // r0@97
  char *v123; // r0@98
  char *v124; // r0@101
  char *v125; // r0@102
  BlockEntityRenderDispatcher *v126; // r4@104
  BlockTessellator *v127; // r0@104
  unsigned int *v129; // r2@105
  signed int v130; // r1@107
  unsigned int *v131; // r2@109
  signed int v132; // r1@111
  unsigned int *v133; // r2@113
  signed int v134; // r1@115
  unsigned int *v135; // r2@117
  signed int v136; // r1@119
  unsigned int *v137; // r2@121
  signed int v138; // r1@123
  unsigned int *v139; // r2@125
  signed int v140; // r1@127
  unsigned int *v141; // r2@129
  signed int v142; // r1@131
  unsigned int *v143; // r2@133
  signed int v144; // r1@135
  mce::TexturePtr *v145; // [sp+74h] [bp-C4h]@1
  TaskGroup **v146; // [sp+7Ch] [bp-BCh]@55
  TaskGroup **v147; // [sp+80h] [bp-B8h]@55
  int v148; // [sp+84h] [bp-B4h]@1
  _BYTE *v149; // [sp+90h] [bp-A8h]@72
  char *v150; // [sp+94h] [bp-A4h]@68
  int v151; // [sp+98h] [bp-A0h]@97
  int v152; // [sp+9Ch] [bp-9Ch]@63
  int v153; // [sp+A0h] [bp-98h]@59
  int v154; // [sp+A4h] [bp-94h]@57
  int v155; // [sp+A8h] [bp-90h]@55
  char v156; // [sp+AFh] [bp-89h]@55
  int v157; // [sp+B0h] [bp-88h]@55
  int v158; // [sp+B4h] [bp-84h]@55
  int v159; // [sp+B8h] [bp-80h]@15
  int v160; // [sp+BCh] [bp-7Ch]@15
  int v161; // [sp+C0h] [bp-78h]@9
  int v162; // [sp+C4h] [bp-74h]@9
  char *v163; // [sp+CCh] [bp-6Ch]@7
  char *v164; // [sp+D0h] [bp-68h]@7
  int v165; // [sp+D4h] [bp-64h]@7
  char *v166; // [sp+DCh] [bp-5Ch]@5
  char *v167; // [sp+E0h] [bp-58h]@5
  int v168; // [sp+E4h] [bp-54h]@5
  char *v169; // [sp+ECh] [bp-4Ch]@3
  char *v170; // [sp+F0h] [bp-48h]@3
  int v171; // [sp+F4h] [bp-44h]@3
  char *v172; // [sp+FCh] [bp-3Ch]@1
  char *v173; // [sp+100h] [bp-38h]@1
  int v174; // [sp+104h] [bp-34h]@1
  char *v175; // [sp+108h] [bp-30h]@76
  int v176; // [sp+10Ch] [bp-2Ch]@98

  v59 = a1;
  v60 = (ClientInstance *)a2;
  v145 = a4;
  v148 = a3;
  *(_DWORD *)a1 = &off_26DC880;
  AppPlatformListener::AppPlatformListener((RenderChunk *)((char *)a1 + 4));
  *((_DWORD *)v59 + 3) = a5;
  *(_DWORD *)v59 = &off_26DC7BC;
  *((_DWORD *)v59 + 1) = &off_26DC844;
  mce::Mesh::Mesh((RenderChunk *)((char *)v59 + 16));
  mce::Mesh::Mesh((RenderChunk *)((char *)v59 + 116));
  mce::Mesh::Mesh((RenderChunk *)((char *)v59 + 216));
  mce::Mesh::Mesh((RenderChunk *)((char *)v59 + 316));
  mce::Mesh::Mesh((RenderChunk *)((char *)v59 + 416));
  mce::Mesh::Mesh((RenderChunk *)((char *)v59 + 516));
  mce::Mesh::Mesh((RenderChunk *)((char *)v59 + 616));
  mce::Mesh::Mesh((RenderChunk *)((char *)v59 + 716));
  mce::Mesh::Mesh((RenderChunk *)((char *)v59 + 816));
  mce::Mesh::Mesh((RenderChunk *)((char *)v59 + 916));
  mce::Mesh::Mesh((RenderChunk *)((char *)v59 + 1016));
  mce::Mesh::Mesh((RenderChunk *)((char *)v59 + 1116));
  mce::Mesh::Mesh((RenderChunk *)((char *)v59 + 1216));
  mce::Mesh::Mesh((RenderChunk *)((char *)v59 + 1316));
  sub_119C884((void **)&v172, "atlas.terrain");
  v173 = v172;
  v172 = (char *)&unk_28898CC;
  v174 = 0;
  mce::TexturePtr::TexturePtr((RenderChunk *)((char *)v59 + 1416), a5, (int)&v173, 0);
  v61 = v173 - 12;
  if ( (int *)(v173 - 12) != &dword_28898C0 )
  {
    v129 = (unsigned int *)(v173 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v130 = __ldrex(v129);
      while ( __strex(v130 - 1, v129) );
    }
    else
      v130 = (*v129)--;
    if ( v130 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v61);
  }
  v62 = v172 - 12;
  if ( (int *)(v172 - 12) != &dword_28898C0 )
    v131 = (unsigned int *)(v172 - 4);
        v132 = __ldrex(v131);
      while ( __strex(v132 - 1, v131) );
      v132 = (*v131)--;
    if ( v132 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v62);
  mce::TexturePtr::TexturePtr((RenderChunk *)((char *)v59 + 1440));
  sub_119C884((void **)&v169, "textures/environment/sun");
  v170 = v169;
  v169 = (char *)&unk_28898CC;
  v171 = 0;
  mce::TexturePtr::TexturePtr((RenderChunk *)((char *)v59 + 1464), a5, (int)&v170, 0);
  v63 = v170 - 12;
  if ( (int *)(v170 - 12) != &dword_28898C0 )
    v133 = (unsigned int *)(v170 - 4);
        v134 = __ldrex(v133);
      while ( __strex(v134 - 1, v133) );
      v134 = (*v133)--;
    if ( v134 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v63);
  v64 = v169 - 12;
  if ( (int *)(v169 - 12) != &dword_28898C0 )
    v135 = (unsigned int *)(v169 - 4);
        v136 = __ldrex(v135);
      while ( __strex(v136 - 1, v135) );
      v136 = (*v135)--;
    if ( v136 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v64);
  sub_119C884((void **)&v166, "textures/environment/moon_phases");
  v167 = v166;
  v166 = (char *)&unk_28898CC;
  v168 = 0;
  mce::TexturePtr::TexturePtr((RenderChunk *)((char *)v59 + 1488), a5, (int)&v167, 0);
  v65 = v167 - 12;
  if ( (int *)(v167 - 12) != &dword_28898C0 )
    v137 = (unsigned int *)(v167 - 4);
        v138 = __ldrex(v137);
      while ( __strex(v138 - 1, v137) );
      v138 = (*v137)--;
    if ( v138 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v65);
  v66 = v166 - 12;
  if ( (int *)(v166 - 12) != &dword_28898C0 )
    v139 = (unsigned int *)(v166 - 4);
        v140 = __ldrex(v139);
      while ( __strex(v140 - 1, v139) );
      v140 = (*v139)--;
    if ( v140 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v66);
  sub_119C884((void **)&v163, "textures/environment/end_sky");
  v164 = v163;
  v163 = (char *)&unk_28898CC;
  v165 = 0;
  mce::TexturePtr::TexturePtr((RenderChunk *)((char *)v59 + 1512), a5, (int)&v164, 0);
  v67 = v164 - 12;
  if ( (int *)(v164 - 12) != &dword_28898C0 )
    v141 = (unsigned int *)(v164 - 4);
        v142 = __ldrex(v141);
      while ( __strex(v142 - 1, v141) );
      v142 = (*v141)--;
    if ( v142 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v67);
  v68 = v163 - 12;
  if ( (int *)(v163 - 12) != &dword_28898C0 )
    v143 = (unsigned int *)(v163 - 4);
        v144 = __ldrex(v143);
      while ( __strex(v144 - 1, v143) );
      v144 = (*v143)--;
    if ( v144 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v68);
  *((_DWORD *)v59 + 384) = 0;
  *((_DWORD *)v59 + 385) = 0;
  *((_DWORD *)v59 + 386) = 0;
  DebugRenderer::DebugRenderer((RenderChunk *)((char *)v59 + 1548));
  *((_DWORD *)v59 + 388) = 0;
  *((_DWORD *)v59 + 389) = 0;
  *((_DWORD *)v59 + 390) = ClientInstance::getBlockEntityRenderDispatcher(v60);
  *((_DWORD *)v59 + 391) = 0;
  *((_DWORD *)v59 + 392) = 0;
  *((_DWORD *)v59 + 393) = 0;
  *((_DWORD *)v59 + 394) = a8;
  v161 = *(_DWORD *)v145;
  v69 = *((_DWORD *)v145 + 1);
  v162 = v69;
  if ( v69 )
    v70 = (unsigned int *)(v69 + 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 + 1, v70) );
      ++*v70;
  v72 = a7;
  v159 = *(_DWORD *)a6;
  v73 = *((_DWORD *)a6 + 1);
  v160 = v73;
  if ( v73 )
    v74 = (unsigned int *)(v73 + 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 + 1, v74) );
      v72 = a7;
      ++*v74;
  LevelRendererPlayer::LevelRendererPlayer(
    (int)v59 + 1584,
    v60,
    (int)&v161,
    v148,
    (int)v59,
    (Entity *)v72,
    (int)a9,
    (__int64 *)&v159,
    SHIDWORD(v72),
    (int)a11);
  v76 = v160;
  if ( v160 )
    v77 = (unsigned int *)(v160 + 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 == 1 )
      v79 = HIDWORD(v72);
      v80 = (unsigned int *)(v76 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v76 + 8))(v76);
      if ( &pthread_create )
      {
        __dmb();
        do
          v81 = __ldrex(v80);
        while ( __strex(v81 - 1, v80) );
      }
      else
        v81 = (*v80)--;
      HIDWORD(v72) = v79;
      if ( v81 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v76 + 12))(v76);
  v82 = v162;
  if ( v162 )
    v83 = (unsigned int *)(v162 + 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 == 1 )
      v85 = HIDWORD(v72);
      v86 = (unsigned int *)(v82 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v82 + 8))(v82);
          v87 = __ldrex(v86);
        while ( __strex(v87 - 1, v86) );
        v87 = (*v86)--;
      HIDWORD(v72) = v85;
      if ( v87 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v82 + 12))(v82);
  *((_DWORD *)v59 + 1124) = v148;
  *((_DWORD *)v59 + 1125) = *(_DWORD *)v145;
  v88 = *((_DWORD *)v145 + 1);
  *((_DWORD *)v59 + 1126) = v88;
  if ( v88 )
    v89 = (unsigned int *)(v88 + 4);
        v90 = __ldrex(v89);
      while ( __strex(v90 + 1, v89) );
      ++*v89;
  *((_DWORD *)v59 + 1127) = v60;
  *((_QWORD *)v59 + 564) = v72;
  *((_DWORD *)v59 + 1130) = 0;
  *((_DWORD *)v59 + 1131) = 0;
  *((_DWORD *)v59 + 1132) = 0;
  v147 = (TaskGroup **)((char *)v59 + 4524);
  v146 = (TaskGroup **)((char *)v59 + 4520);
  v91 = (Scheduler *)Scheduler::singleton((RenderChunk *)((char *)v59 + 4520));
  v157 = 1;
  v156 = 0;
  v155 = 4;
  std::make_unique<WorkerPool,Scheduler &,char const(&)[14],int,bool,OSThreadPriority>(
    &v158,
    v91,
    "LevelRenderer",
    &v157,
    &v156,
    &v155);
  v92 = v158;
  v158 = 0;
  v93 = (WorkerPool *)*((_DWORD *)v59 + 1132);
  *((_DWORD *)v59 + 1132) = v92;
  if ( v93 )
    v94 = WorkerPool::~WorkerPool(v93);
    operator delete((void *)v94);
  v95 = *((_DWORD *)v59 + 1132);
  std::make_unique<TaskGroup,WorkerPool &,char const(&)[24]>(&v154, v95, "Main thread tasks group");
  v96 = v154;
  v154 = 0;
  v97 = *v147;
  *v147 = (TaskGroup *)v96;
  if ( v97 )
    v98 = TaskGroup::~TaskGroup(v97);
    operator delete((void *)v98);
  std::make_unique<TaskGroup,WorkerPool &,char const(&)[22]>(&v153, WorkerPool::ASYNC, "A LevelRenderer group");
  v99 = v153;
  v153 = 0;
  v100 = *v146;
  *v146 = (TaskGroup *)v99;
  if ( v100 )
    v101 = TaskGroup::~TaskGroup(v100);
    operator delete((void *)v101);
  v102 = operator new(0xCu);
  SeasonsRenderer::SeasonsRenderer((int)v102, (unsigned int)a5);
  v103 = (void *)*((_DWORD *)v59 + 393);
  *((_DWORD *)v59 + 393) = v102;
  if ( v103 )
    operator delete(v103);
    v102 = (void *)*((_DWORD *)v59 + 393);
  std::make_unique<ParticleEngine,std::shared_ptr<Options> &,Level &,mce::TextureGroup &,SeasonsRenderer &>(
    &v152,
    (int)v145,
    (int)a5,
    (int)v102);
  v104 = v152;
  v152 = 0;
  v105 = (ParticleEngine *)*((_DWORD *)v59 + 392);
  *((_DWORD *)v59 + 392) = v104;
  if ( v105 )
    v106 = ParticleEngine::~ParticleEngine(v105);
    operator delete((void *)v106);
  v107 = (ClientInstance *)*((_DWORD *)v59 + 1127);
  if ( ClientInstance::isPrimaryClient(v107) == 1 )
    RenderChunk::initTextures(a5, v108);
    TerrainLayer::_initMaterials(v109);
  v110 = 0;
  do
    sub_119C884((void **)&v149, "textures/environment/destroy_stage_");
    v117 = v149;
    *(_QWORD *)&v118 = *(_QWORD *)(v149 - 12);
    v119 = v118 + 1;
    if ( v118 + 1 > v120 || *((_DWORD *)v149 - 1) >= 1 )
      sub_119CAF8((const void **)&v149, v118 + 1);
      v117 = v149;
      v118 = *((_DWORD *)v149 - 3);
    v117[v118] = v110 + 48;
    v121 = v149;
    if ( (int *)(v149 - 12) != &dword_28898C0 )
      *((_DWORD *)v149 - 1) = 0;
      *(v121 - 3) = v119;
      *((_BYTE *)v121 + v119) = byte_26C67B8[0];
      v121 = v149;
    v149 = &unk_28898CC;
    v150 = (char *)v121;
    v151 = 0;
    v122 = (mce::TexturePtr *)*((_DWORD *)v59 + 385);
    if ( v122 == *((mce::TexturePtr **)v59 + 386) )
      std::vector<mce::TexturePtr,std::allocator<mce::TexturePtr>>::_M_emplace_back_aux<mce::TextureGroup &,ResourceLocation>(
        (unsigned __int64 *)v59 + 192,
        a5,
        (int)&v150);
      v150 = (char *)&unk_28898CC;
      v175 = (char *)v121;
      v176 = 0;
      mce::TexturePtr::TexturePtr(v122, a5, (int)&v175, 0);
      v123 = v175 - 12;
      if ( (int *)(v175 - 12) != &dword_28898C0 )
        v115 = (unsigned int *)(v175 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v116 = __ldrex(v115);
          while ( __strex(v116 - 1, v115) );
        }
        else
          v116 = (*v115)--;
        if ( v116 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v123);
      *((_DWORD *)v59 + 385) += 24;
    v124 = v150 - 12;
    if ( (int *)(v150 - 12) != &dword_28898C0 )
      v111 = (unsigned int *)(v150 - 4);
          v112 = __ldrex(v111);
        while ( __strex(v112 - 1, v111) );
        v112 = (*v111)--;
      if ( v112 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v124);
    v125 = v149 - 12;
      v113 = (unsigned int *)(v149 - 4);
          v114 = __ldrex(v113);
        while ( __strex(v114 - 1, v113) );
        v114 = (*v113)--;
      if ( v114 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v125);
    ++v110;
  while ( v110 != 10 );
  LevelRenderer::_initResources(v59);
  v126 = (BlockEntityRenderDispatcher *)*((_DWORD *)v59 + 390);
  v127 = (BlockTessellator *)LevelRenderer::getBlockRenderer(v59);
  BlockEntityRenderDispatcher::initializeBlockEntityRenderers(v126, a10, a5, v127);
  Level::addListener(*((Level **)v59 + 1124), v59);
  LevelRenderer::onOptionsChanged(v59);
  return v59;
}


LevelRenderer *__fastcall LevelRenderer::~LevelRenderer(LevelRenderer *this)
{
  LevelRenderer *v1; // r4@1
  AppPlatformListener *v2; // r9@1
  TaskGroup **v3; // r6@1
  TaskGroup *v4; // r0@1
  TaskGroup *v5; // r0@2
  mce::TexturePtr *v6; // r0@4
  TaskGroup **v7; // r7@5
  WorkerPool *v8; // r0@5
  WorkerPool *v9; // r0@6
  TaskGroup *v10; // r0@8
  TaskGroup *v11; // r0@10
  int v12; // r6@11
  unsigned int *v13; // r1@12
  unsigned int v14; // r0@14
  unsigned int *v15; // r7@18
  unsigned int v16; // r0@20
  void *v17; // r0@25
  ParticleEngine *v18; // r0@27
  ParticleEngine *v19; // r0@28
  BlockTessellator *v20; // r0@29
  BlockTessellator *v21; // r0@30
  char *v22; // r0@31
  char *v23; // r6@31
  int v24; // r5@32

  v1 = this;
  *(_DWORD *)this = &off_26DC7BC;
  *((_DWORD *)this + 1) = &off_26DC844;
  v2 = (LevelRenderer *)((char *)this + 4);
  Level::removeListener(*((Level **)this + 1124), this);
  TaskGroup::flush(*((TaskGroup **)v1 + 1130));
  TaskGroup::flush(*((TaskGroup **)v1 + 1131));
  v3 = (TaskGroup **)((char *)v1 + 4524);
  v4 = (TaskGroup *)*((_DWORD *)v1 + 1131);
  *((_DWORD *)v1 + 1131) = 0;
  if ( v4 )
  {
    v5 = TaskGroup::~TaskGroup(v4);
    operator delete((void *)v5);
  }
  if ( ClientInstance::isPrimaryClient(*((ClientInstance **)v1 + 1127)) == 1 )
    v6 = RenderChunk::deinitTextures((RenderChunk *)1);
    TerrainLayer::_deinitMaterials(v6);
  v7 = (TaskGroup **)((char *)v1 + 4520);
  v8 = (WorkerPool *)*((_DWORD *)v1 + 1132);
  if ( v8 )
    v9 = WorkerPool::~WorkerPool(v8);
    operator delete((void *)v9);
  *((_DWORD *)v1 + 1132) = 0;
  if ( *v3 )
    v10 = TaskGroup::~TaskGroup(*v3);
    operator delete((void *)v10);
  *v3 = 0;
  if ( *v7 )
    v11 = TaskGroup::~TaskGroup(*v7);
    operator delete((void *)v11);
  *v7 = 0;
  v12 = *((_DWORD *)v1 + 1126);
  if ( v12 )
    v13 = (unsigned int *)(v12 + 4);
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
      v15 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      }
      else
        v16 = (*v15)--;
      if ( v16 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  LevelRendererPlayer::~LevelRendererPlayer((LevelRenderer *)((char *)v1 + 1584));
  v17 = (void *)*((_DWORD *)v1 + 393);
  if ( v17 )
    operator delete(v17);
  *((_DWORD *)v1 + 393) = 0;
  v18 = (ParticleEngine *)*((_DWORD *)v1 + 392);
  if ( v18 )
    v19 = ParticleEngine::~ParticleEngine(v18);
    operator delete((void *)v19);
  *((_DWORD *)v1 + 392) = 0;
  v20 = (BlockTessellator *)*((_DWORD *)v1 + 391);
  if ( v20 )
    v21 = BlockTessellator::~BlockTessellator(v20);
    operator delete((void *)v21);
  *((_DWORD *)v1 + 391) = 0;
  DebugRenderer::~DebugRenderer((LevelRenderer *)((char *)v1 + 1548));
  v22 = (char *)*((_DWORD *)v1 + 384);
  v23 = (char *)*((_DWORD *)v1 + 385);
  if ( v22 != v23 )
    do
      v24 = (int)(v22 + 24);
      (**(void (***)(void))v22)();
      v22 = (char *)v24;
    while ( v23 != (char *)v24 );
    v22 = (char *)*((_DWORD *)v1 + 384);
  if ( v22 )
    operator delete(v22);
  mce::TexturePtr::~TexturePtr((LevelRenderer *)((char *)v1 + 1512));
  mce::TexturePtr::~TexturePtr((LevelRenderer *)((char *)v1 + 1488));
  mce::TexturePtr::~TexturePtr((LevelRenderer *)((char *)v1 + 1464));
  mce::TexturePtr::~TexturePtr((LevelRenderer *)((char *)v1 + 1440));
  mce::TexturePtr::~TexturePtr((LevelRenderer *)((char *)v1 + 1416));
  mce::Mesh::~Mesh((LevelRenderer *)((char *)v1 + 1316));
  mce::Mesh::~Mesh((LevelRenderer *)((char *)v1 + 1216));
  mce::Mesh::~Mesh((LevelRenderer *)((char *)v1 + 1116));
  mce::Mesh::~Mesh((LevelRenderer *)((char *)v1 + 1016));
  mce::Mesh::~Mesh((LevelRenderer *)((char *)v1 + 916));
  mce::Mesh::~Mesh((LevelRenderer *)((char *)v1 + 816));
  mce::Mesh::~Mesh((LevelRenderer *)((char *)v1 + 716));
  mce::Mesh::~Mesh((LevelRenderer *)((char *)v1 + 616));
  mce::Mesh::~Mesh((LevelRenderer *)((char *)v1 + 516));
  mce::Mesh::~Mesh((LevelRenderer *)((char *)v1 + 416));
  mce::Mesh::~Mesh((LevelRenderer *)((char *)v1 + 316));
  mce::Mesh::~Mesh((LevelRenderer *)((char *)v1 + 216));
  mce::Mesh::~Mesh((LevelRenderer *)((char *)v1 + 116));
  mce::Mesh::~Mesh((LevelRenderer *)((char *)v1 + 16));
  AppPlatformListener::~AppPlatformListener(v2);
  return v1;
}


unsigned __int64 __fastcall LevelRenderer::renderLevel(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  int v5; // r4@1
  ClientInstance *v12; // r7@3
  int v13; // r0@3
  __int64 v18; // [sp+0h] [bp-A8h]@0
  char v19; // [sp+Ch] [bp-9Ch]@3
  int v20; // [sp+70h] [bp-38h]@1
  double v21; // [sp+78h] [bp-30h]@1
  unsigned int v23; // [sp+88h] [bp-20h]@1

  v3 = a1;
  v4 = a2;
  v21 = 0.0;
  v5 = a3;
  v23 = 13;
  v20 = unk_27F636C;
  unk_27F636C = &v20;
  _R0 = getTimeS();
  __asm
  {
    VMOV            D0, R0, R2
    VSTR            D0, [SP,#0xA8+var_30]
    VSTR            D0, [SP,#0xA8+var_28]
  }
  _R2 = v20;
  if ( v20 )
    __asm
    {
      VMOV            D0, R0, R1
      VLDR            D1, [R2,#8]
      VADD.F64        D0, D1, D0
      VSTR            D0, [R2,#8]
    }
  v12 = *(ClientInstance **)(v3 + 4508);
  v13 = ClientInstance::getMinecraftGame(*(ClientInstance **)(v3 + 4508));
  BaseEntityRenderContext::BaseEntityRenderContext((int)&v19, v4, v12, v13);
  (*(void (__fastcall **)(int, char *, int))(*(_DWORD *)(v3 + 1584) + 80))(v3 + 1584, &v19, v5);
  BaseEntityRenderContext::~BaseEntityRenderContext((BaseEntityRenderContext *)&v19);
  LODWORD(_R0) = getTimeS();
    VMOV            D1, R0, R1
    VLDR            D0, [SP,#0xA8+var_30]
    VADD.F64        D2, D0, D1
    VSTR            D2, [SP,#0xA8+var_30]
    VLDR            D0, [SP,#0xA8+var_28]
    VADD.F64        D0, D0, D1
  HIDWORD(_R0) = v20;
      VLDR            D2, [R1,#8]
      VSUB.F64        D1, D2, D1
      VSTR            D1, [R1,#8]
      VLDR            D2, [SP,#0xA8+var_30]
  __asm { VMOV            R2, R3, D2 }
  LODWORD(_R0) = &ProfilerLite::gProfilerLiteInstance;
  unk_27F636C = v20;
  __asm { VSTR            D0, [SP,#0xA8+var_A8] }
  return __PAIR__(v23, ProfilerLite::_endScope(_R0, _R2, _R3, v18));
}


char *__fastcall LevelRenderer::getLevelRendererPlayer(LevelRenderer *this)
{
  return (char *)this + 1584;
}


RenderChunk *__fastcall LevelRenderer::LevelRenderer(RenderChunk *a1, int a2, int a3, mce::TexturePtr *a4, mce::TexturePtr *a5, mce::TexturePtr *a6, __int64 a7, mce::Mesh *a8, mce::Mesh *a9, mce::Mesh *a10, mce::Mesh *a11, mce::Mesh *a12, mce::Mesh *a13, mce::Mesh *a14, int a15, int a16, int a17, int a18, mce::Mesh *a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, char a59)
{
  return LevelRenderer::LevelRenderer(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32,
           a33,
           a34,
           a35,
           a36,
           a37,
           a38,
           a39,
           a40,
           a41,
           a42,
           a43,
           a44,
           a45,
           a46,
           a47,
           a48,
           a49,
           a50,
           a51,
           a52,
           a53,
           a54,
           a55,
           a56,
           a57,
           a58,
           a59);
}


int __fastcall LevelRenderer::takePicture(int a1, mce::ImageBuffer *a2, Entity *a3, Entity *a4, int a5)
{
  int v5; // r8@1
  Entity *v6; // r6@1
  Entity *v7; // r5@1
  mce::ImageBuffer *v8; // r11@1
  Options **v9; // r7@1
  mce::RenderContextImmediate *v10; // r0@5
  mce::RenderContext *v11; // r5@5
  int v12; // r9@5
  ClientInstance **v19; // r4@9
  MinecraftGame *v20; // r0@9
  int v21; // r0@10
  ClientInstance *v25; // r4@15
  int result; // r0@15
  __int64 v27; // [sp+0h] [bp-78h]@0
  int v28; // [sp+8h] [bp-70h]@1
  int v29; // [sp+Ch] [bp-6Ch]@1
  int v30; // [sp+10h] [bp-68h]@1
  int v31; // [sp+14h] [bp-64h]@1
  Entity *v32; // [sp+18h] [bp-60h]@1
  Entity *v33; // [sp+1Ch] [bp-5Ch]@1
  void *v34; // [sp+20h] [bp-58h]@15
  int (*v35)(void); // [sp+28h] [bp-50h]@15
  int (__fastcall *v36)(int, int **); // [sp+2Ch] [bp-4Ch]@15
  int v37; // [sp+30h] [bp-48h]@7
  double v38; // [sp+38h] [bp-40h]@7
  int v40; // [sp+48h] [bp-30h]@7

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v33 = (Entity *)ClientInstance::getCameraEntity(*(ClientInstance **)(a1 + 4508));
  v32 = (Entity *)ClientInstance::getCameraTargetEntity(*(ClientInstance **)(v5 + 4508));
  v31 = Options::getHideItemInHand(*(Options **)(v5 + 4500));
  v30 = Options::getHideScreens(*(Options **)(v5 + 4500));
  v29 = Options::getFixedCamera(*(Options **)(v5 + 4500));
  v28 = Options::getPlayerViewPerspective(*(Options **)(v5 + 4500));
  ClientInstance::setCameraEntity(*(ClientInstance **)(v5 + 4508), v7);
  ClientInstance::setCameraTargetEntity(*(ClientInstance **)(v5 + 4508), v6);
  v9 = (Options **)(v5 + 4500);
  if ( *(_BYTE *)(a5 + 30) )
  {
    Options::setHideScreens(*v9, 1);
    Options::setHideItemInHand(*v9, 1);
  }
  if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)v7 + 488))(v7) == 318 )
    Options::setPlayerViewPerspective(*v9, 1);
    Options::setFixedCamera(*v9, 1);
  v10 = (mce::RenderContextImmediate *)Options::setForceUseUnsortedPolys(*v9, 1);
  v11 = (mce::RenderContext *)mce::RenderContextImmediate::get(v10);
  v12 = mce::RenderContext::isWithinFrame(v11);
  if ( !v12 )
    mce::RenderContext::beginFrame(v11);
  v38 = 0.0;
  v40 = 12;
  v37 = unk_27F636C;
  unk_27F636C = &v37;
  _R0 = getTimeS();
  __asm
    VMOV            D0, R0, R2
    VSTR            D0, [SP,#0x78+var_40]
    VSTR            D0, [SP,#0x78+var_38]
  _R2 = v37;
  if ( v37 )
    __asm
    {
      VMOV            D0, R0, R1
      VLDR            D1, [R2,#8]
      VADD.F64        D0, D1, D0
      VSTR            D0, [R2,#8]
    }
  GameRenderer::render(*(GameRenderer **)(v5 + 1576), 0.0);
  v19 = (ClientInstance **)(v5 + 4508);
  v20 = (MinecraftGame *)ClientInstance::getMinecraftGame(*(ClientInstance **)(v5 + 4508));
  if ( MinecraftGame::captureScreenAsImage(v20, v8) == 1 )
    v21 = ClientInstance::getMinecraftGame(*v19);
    MinecraftGame::composeScreenshot(v21, v8, a5);
  LODWORD(_R0) = getTimeS();
    VMOV            D1, R0, R1
    VLDR            D0, [SP,#0x78+var_40]
    VADD.F64        D2, D0, D1
    VSTR            D2, [SP,#0x78+var_40]
    VLDR            D0, [SP,#0x78+var_38]
    VADD.F64        D0, D0, D1
  HIDWORD(_R0) = v37;
      VLDR            D2, [R1,#8]
      VSUB.F64        D1, D2, D1
      VSTR            D1, [R1,#8]
      VLDR            D2, [SP,#0x78+var_40]
  __asm { VMOV            R2, R3, D2 }
  LODWORD(_R0) = &ProfilerLite::gProfilerLiteInstance;
  unk_27F636C = v37;
  __asm { VSTR            D0, [SP,#0x78+var_78] }
  ProfilerLite::_endScope(_R0, _R2, _R3, v27);
    mce::RenderContext::flush(v11);
    mce::RenderContext::endFrame(v11);
  ClientInstance::setCameraEntity(*v19, v33);
  ClientInstance::setCameraTargetEntity(*v19, v32);
  Options::setHideItemInHand(*v9, v31);
  Options::setHideScreens(*v9, v30);
  Options::setFixedCamera(*v9, v29);
  Options::setPlayerViewPerspective(*v9, v28);
  Options::setForceUseUnsortedPolys(*v9, 0);
  v25 = *v19;
  v34 = operator new(1u);
  v35 = (int (*)(void))sub_F14870;
  v36 = sub_F14840;
  result = ClientInstance::forEachVisibleScreen((int)v25, (int)&v34, 0);
  if ( v35 )
    result = v35();
  return result;
}


int __fastcall LevelRenderer::onLowMemory(LevelRenderer *this)
{
  LevelRenderer *v1; // r4@1
  Tessellator *v2; // r0@1

  v1 = this;
  v2 = (Tessellator *)GameRenderer::getTessellator(*((GameRenderer **)this + 394));
  Tessellator::trim(v2);
  return (*(int (__fastcall **)(char *))(*((_DWORD *)v1 + 396) + 28))((char *)v1 + 1584);
}


int __fastcall LevelRenderer::_resetMeshes(LevelRenderer *this)
{
  LevelRenderer *v1; // r4@1

  v1 = this;
  mce::Mesh::reset((LevelRenderer *)((char *)this + 116));
  mce::Mesh::reset((LevelRenderer *)((char *)v1 + 16));
  mce::Mesh::reset((LevelRenderer *)((char *)v1 + 416));
  mce::Mesh::reset((LevelRenderer *)((char *)v1 + 616));
  mce::Mesh::reset((LevelRenderer *)((char *)v1 + 716));
  mce::Mesh::reset((LevelRenderer *)((char *)v1 + 816));
  mce::Mesh::reset((LevelRenderer *)((char *)v1 + 916));
  mce::Mesh::reset((LevelRenderer *)((char *)v1 + 1016));
  mce::Mesh::reset((LevelRenderer *)((char *)v1 + 1116));
  mce::Mesh::reset((LevelRenderer *)((char *)v1 + 1216));
  mce::Mesh::reset((LevelRenderer *)((char *)v1 + 1316));
  mce::Mesh::reset((LevelRenderer *)((char *)v1 + 516));
  mce::Mesh::reset((LevelRenderer *)((char *)v1 + 316));
  return j_j_j__ZN3mce4Mesh5resetEv_0((LevelRenderer *)((char *)v1 + 216));
}


void __fastcall LevelRenderer::~LevelRenderer(LevelRenderer *this)
{
  LevelRenderer *v1; // r0@1

  v1 = LevelRenderer::~LevelRenderer(this);
  j_j_j__ZdlPv_4((void *)v1);
}


char *__fastcall LevelRenderer::getTicks(LevelRenderer *this)
{
  return (char *)this + 1552;
}


int __fastcall LevelRenderer::terrainRenderLayerToGeometryLayer(int result, const TerrainLayer *a2)
{
  if ( TerrainLayer::WaterStencil == *(_DWORD *)result )
    result = (int)&TerrainLayer::Water;
  return result;
}


_DWORD *__fastcall LevelRenderer::onAppSuspended(LevelRenderer *this)
{
  LevelRenderer *v1; // r4@1
  mce::Mesh *v2; // r0@1

  v1 = this;
  LevelRenderer::_resetMeshes(this);
  v2 = (mce::Mesh *)PoolAllocator::trim((PoolAllocator *)&Boxed<RenderChunk>::Base::mAllocator);
  mce::Mesh::clearGlobalBuffers(v2);
  (*(void (__fastcall **)(char *))(*((_DWORD *)v1 + 396) + 20))((char *)v1 + 1584);
  return j_j_j__ZN9TaskGroup5pauseEv(*((TaskGroup **)v1 + 1130));
}


int __fastcall LevelRenderer::reinit(int a1, int a2, GeometryGroup *a3)
{
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r1@1
  GeometryGroup *v6; // r4@1
  unsigned int *v7; // r1@2
  unsigned int v8; // r2@4
  int v9; // r6@7
  unsigned int *v10; // r1@8
  unsigned int v11; // r0@10
  unsigned int *v12; // r7@14
  unsigned int v13; // r0@16
  mce::TextureGroup *v14; // r6@21
  BlockEntityRenderDispatcher *v15; // r7@21
  BlockTessellator *v16; // r0@21
  int v18; // [sp+4h] [bp-1Ch]@1
  int v19; // [sp+8h] [bp-18h]@1

  v3 = a1;
  v18 = *(_DWORD *)a2;
  v4 = a1 + 1584;
  v5 = *(_DWORD *)(a2 + 4);
  v6 = a3;
  v19 = v5;
  if ( v5 )
  {
    v7 = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
    }
    else
      ++*v7;
  }
  LevelRendererPlayer::reinit(v4, &v18);
  v9 = v19;
  if ( v19 )
    v10 = (unsigned int *)(v19 + 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 == 1 )
      v12 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  v14 = *(mce::TextureGroup **)(v3 + 12);
  v15 = *(BlockEntityRenderDispatcher **)(v3 + 1560);
  v16 = (BlockTessellator *)LevelRenderer::getBlockRenderer((LevelRenderer *)v3);
  return BlockEntityRenderDispatcher::initializeBlockEntityRenderers(v15, v6, v14, v16);
}
