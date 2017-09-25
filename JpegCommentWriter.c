

JpegCommentWriter *__fastcall JpegCommentWriter::~JpegCommentWriter(JpegCommentWriter *this)
{
  JpegCommentWriter *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  void **v4; // r5@2 OVERLAPPED
  void **v5; // r6@2 OVERLAPPED
  int v6; // r1@9
  void *v7; // r0@9
  void **v8; // r5@10 OVERLAPPED
  void **v9; // r6@10 OVERLAPPED
  unsigned int *v11; // r2@18
  signed int v12; // r1@20
  unsigned int *v13; // r2@22
  signed int v14; // r1@24

  v1 = this;
  mce::MaterialPtr::~MaterialPtr((JpegCommentWriter *)((char *)this + 248));
  v2 = *((_DWORD *)v1 + 51);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  *(_QWORD *)&v4 = *((_QWORD *)v1 + 24);
  if ( v4 != v5 )
    do
      if ( *v4 )
        operator delete(*v4);
      v4 += 10;
    while ( v5 != v4 );
    v4 = (void **)*((_DWORD *)v1 + 48);
  if ( v4 )
    operator delete(v4);
  mce::Texture::~Texture((JpegCommentWriter *)((char *)v1 + 128));
  v6 = *((_DWORD *)v1 + 21);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v6 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  *(_QWORD *)&v8 = *((_QWORD *)v1 + 9);
  if ( v8 != v9 )
      if ( *v8 )
        operator delete(*v8);
      v8 += 10;
    while ( v9 != v8 );
    v8 = (void **)*((_DWORD *)v1 + 18);
  if ( v8 )
    operator delete(v8);
  mce::Texture::~Texture((JpegCommentWriter *)((char *)v1 + 8));
  return v1;
}


mce::TexturePtr *__fastcall JpegCommentWriter::_drawImage(int a1, int a2, int a3)
{
  int v3; // r9@1
  int v4; // r8@1
  GuiData *v5; // r7@1
  int v6; // r10@1
  Tessellator *v15; // r7@3
  char v19; // [sp+8h] [bp-70h]@3
  int v20; // [sp+20h] [bp-58h]@3
  float v21; // [sp+24h] [bp-54h]@3
  __int64 v22; // [sp+28h] [bp-50h]@3

  v3 = a2;
  v4 = a1;
  v5 = *(GuiData **)(a2 + 24);
  v6 = a3;
  _R0 = GuiData::getScreenSizeData(*(GuiData **)(a2 + 24));
  __asm
  {
    VLDR            S16, [R0,#0x10]
    VLDR            S18, [R0,#0x14]
  }
  _R7 = GuiData::getScreenSizeData(v5);
  _R0 = mce::TextureContainer::getTextureDescription((mce::TextureContainer *)(v6 + 64));
    VLDR            S0, [R0]
    VCVT.F32.U32    S20, S0
    VLDR            S22, [R7]
    VLDR            S0, [R0,#4]
    VDIV.F32        S4, S20, S22
    VCVT.F32.U32    S0, S0
    VLDR            S2, [R7,#4]
    VMUL.F32        S16, S4, S16
    VDIV.F32        S0, S0, S2
    VMUL.F32        S18, S0, S18
  if ( !mce::Texture::isCreated((mce::Texture *)v6) )
    TexturePair::load((TexturePair *)v6);
  v20 = Color::WHITE;
  v21 = unk_283E614;
  v22 = qword_283E618;
  v15 = *(Tessellator **)(v3 + 40);
  Tessellator::begin(*(Tessellator **)(v3 + 40), 4, 0);
  Tessellator::color(v15, (const Color *)&v20);
  __asm { VMOV            R5, S18 }
  Tessellator::vertexUV(v15, 0.0, _R5, 0.0, 0.0, 1.0);
  __asm { VMOV            R4, S16 }
  Tessellator::vertexUV(v15, _R4, _R5, 0.0, 1.0, 1.0);
  Tessellator::vertexUV(v15, _R4, 0.0, 0.0, 1.0, 0.0);
  Tessellator::vertexUV(v15, 0.0, 0.0, 0.0, 0.0, 0.0);
  mce::TexturePtr::makeTemporaryWrapper((mce::TexturePtr *)&v19, (mce::Texture *)v6);
  Tessellator::draw((char *)v15, v3, v4 + 248, (int)&v19);
  return mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v19);
}


int __fastcall JpegCommentWriter::JpegCommentWriter(int a1, MinecraftGame *a2)
{
  MinecraftGame *v2; // r8@1
  int v3; // r5@1
  void *v4; // r0@1
  int v5; // r1@2
  int v6; // r3@2
  int v7; // r4@2
  int v8; // r7@2
  int v9; // r1@2
  int v10; // r3@2
  int v11; // r4@2
  int v12; // r6@2
  int v13; // r7@2
  void *v14; // r0@2
  void **v15; // r4@3
  void **v16; // r7@3
  char *v17; // r0@10
  char *v18; // r0@11
  GuiData *v19; // r0@12
  unsigned int v27; // r3@12
  unsigned int *v29; // r2@13
  signed int v30; // r1@15
  unsigned int *v31; // r2@17
  signed int v32; // r1@19
  unsigned int *v33; // r2@21
  signed int v34; // r1@23
  unsigned int *v35; // r2@25
  signed int v36; // r1@27
  char *v37; // [sp+Ch] [bp-74h]@2
  char *v38; // [sp+10h] [bp-70h]@2
  int v39; // [sp+14h] [bp-6Ch]@2
  void **v40; // [sp+18h] [bp-68h]@2
  void **v41; // [sp+1Ch] [bp-64h]@3
  int v42; // [sp+24h] [bp-5Ch]@2
  int v43; // [sp+28h] [bp-58h]@2
  int v44; // [sp+2Ch] [bp-54h]@2
  int v45; // [sp+30h] [bp-50h]@2
  int v46; // [sp+34h] [bp-4Ch]@2
  int v47; // [sp+38h] [bp-48h]@2
  int v48; // [sp+3Ch] [bp-44h]@2
  int v49; // [sp+40h] [bp-40h]@2
  int v50; // [sp+44h] [bp-3Ch]@2
  int v51; // [sp+48h] [bp-38h]@2
  char v52; // [sp+4Ch] [bp-34h]@2
  int v53; // [sp+54h] [bp-2Ch]@1

  v2 = a2;
  v3 = a1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = MinecraftGame::getFont(a2);
  mce::Texture::Texture((mce::Texture *)(v3 + 8));
  *(_DWORD *)(v3 + 72) = 0;
  *(_DWORD *)(v3 + 76) = 0;
  *(_DWORD *)(v3 + 80) = 0;
  *(_DWORD *)(v3 + 84) = &unk_28898CC;
  *(_DWORD *)(v3 + 88) = 0;
  *(_DWORD *)(v3 + 92) = 0;
  *(_DWORD *)(v3 + 96) = 0;
  *(_DWORD *)(v3 + 100) = 1;
  *(_BYTE *)(v3 + 104) = 0;
  *(_DWORD *)(v3 + 108) = 1;
  *(_DWORD *)(v3 + 112) = 1;
  *(_DWORD *)(v3 + 116) = 0;
  *(_DWORD *)(v3 + 120) = 8;
  *(_BYTE *)(v3 + 124) = 0;
  mce::Texture::Texture((mce::Texture *)(v3 + 128));
  *(_DWORD *)(v3 + 192) = 0;
  *(_DWORD *)(v3 + 196) = 0;
  *(_DWORD *)(v3 + 200) = 0;
  *(_DWORD *)(v3 + 204) = &unk_28898CC;
  *(_DWORD *)(v3 + 208) = 0;
  *(_DWORD *)(v3 + 212) = 0;
  *(_DWORD *)(v3 + 216) = 0;
  *(_DWORD *)(v3 + 220) = 1;
  *(_BYTE *)(v3 + 224) = 0;
  *(_DWORD *)(v3 + 228) = 1;
  *(_DWORD *)(v3 + 232) = 1;
  *(_DWORD *)(v3 + 236) = 0;
  *(_DWORD *)(v3 + 240) = 8;
  *(_BYTE *)(v3 + 244) = 0;
  sub_119C884((void **)&v53, "ui_texture_and_color");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v3 + 248),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v53);
  v4 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
  {
    v29 = (unsigned int *)(v53 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
    }
    else
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  sub_119C884((void **)&v37, "textures/ui/screenshot_frame");
  v38 = v37;
  v37 = (char *)&unk_28898CC;
  v39 = 0;
  Resource::loadTexture((Resource *)&v40, (const ResourceLocation *)&v38);
  std::vector<mce::ImageBuffer,std::allocator<mce::ImageBuffer>>::operator=(v3 + 72, (unsigned __int64 *)&v40);
  EntityInteraction::setInteractText((int *)(v3 + 84), &v42);
  v5 = v3 + 88;
  v6 = v44;
  v7 = v45;
  v8 = v46;
  *(_DWORD *)v5 = v43;
  *(_DWORD *)(v5 + 4) = v6;
  *(_DWORD *)(v5 + 8) = v7;
  *(_DWORD *)(v5 + 12) = v8;
  v9 = v3 + 104;
  v10 = v48;
  v11 = v49;
  v12 = v50;
  v13 = v51;
  *(_DWORD *)v9 = v47;
  *(_DWORD *)(v9 + 4) = v10;
  *(_DWORD *)(v9 + 8) = v11;
  *(_DWORD *)(v9 + 12) = v12;
  *(_DWORD *)(v9 + 16) = v13;
  *(_BYTE *)(v3 + 124) = v52;
  v14 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v42 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = v41;
  v16 = v40;
  if ( v40 != v41 )
    do
      if ( *v16 )
        operator delete(*v16);
      v16 += 10;
    while ( v15 != v16 );
    v16 = v40;
  if ( v16 )
    operator delete(v16);
  v17 = v38 - 12;
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v38 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  v18 = v37 - 12;
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v37 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v19 = (GuiData *)MinecraftGame::getPrimaryGuiData(v2);
  _R0 = GuiData::getScreenSizeData(v19);
  __asm
    VLDR            S0, =0.26667
    VLDR            S2, [R0]
    VLDR            S4, [R0,#4]
    VMUL.F32        S0, S2, S0
    VLDR            S6, =0.42667
    VMUL.F32        S2, S4, S6
    VCVTR.S32.F32   S0, S0
    VCVTR.S32.F32   S2, S2
    VMOV            R1, S0
    VMOV            R2, S2
  ImageUtils::scaleImage((ImageUtils *)(v3 + 72), _R1, _R2, v27);
  return v3;
}


int __fastcall JpegCommentWriter::_drawPolaroidText(int a1, float a2, int a3, int a4, int a5, int a6)
{
  float v6; // r4@1
  int v7; // r8@1
  GuiData *v8; // r6@1
  int v18; // r0@1
  int v20; // r5@1
  int v21; // r0@1
  int v23; // [sp+4h] [bp-4Ch]@0

  v6 = a2;
  v7 = a1;
  v8 = *(GuiData **)(LODWORD(a2) + 24);
  _R7 = a4;
  _R5 = a3;
  _R0 = GuiData::getScreenSizeData(*(GuiData **)(LODWORD(a2) + 24));
  __asm
  {
    VLDR            S16, [R0,#0x10]
    VLDR            S18, [R0,#0x14]
  }
  _R0 = GuiData::getScreenSizeData(v8);
    VMOV            S0, R5
    VMOV            S6, R7
    VCVT.F32.S32    S0, S0
    VLDR            S2, [R0]
    VLDR            S4, [R0,#4]
    VCVT.F32.S32    S6, S6
    VDIV.F32        S0, S0, S2
    VDIV.F32        S2, S6, S4
    VMOV.F32        S4, #0.5
    VMUL.F32        S16, S0, S16
    VMUL.F32        S2, S2, S18
    VMUL.F32        S0, S16, S4
    VMOV.F32        S4, #-4.0
    VMOV            R1, S0
    VLDR            S0, =0.86
    VMUL.F32        S0, S2, S0
    VADD.F32        S18, S0, S4
  v18 = GuiData::floorAlignToScreenPixel(v8, _R1);
  __asm { VMOV            R1, S18 }
  v20 = v18;
  v21 = GuiData::floorAlignToScreenPixel(v8, _R1);
    VLDR            S0, =0.97
    VMUL.F32        S0, S16, S0
    VSTR            S0, [SP,#0x50+var_4C]
  return Font::drawWordWrapMaxLine(*(float *)(v7 + 4), v6, a5, v20, *(float *)&v21, v23, a6, 2, 1065353216, 0, 1, 0, 0);
}


int __fastcall JpegCommentWriter::execute(int a1, int a2, int *a3, _DWORD *a4, int a5)
{
  int v5; // r6@1
  int v6; // r11@1
  _DWORD *v7; // r9@1
  int *v8; // r7@1
  char *v9; // r4@1
  char *v10; // r0@1
  mce::ImageBuffer *v11; // r0@1
  mce::RenderContext *v12; // r8@2
  int v13; // r4@2
  signed int v14; // r9@4
  GuiData *v17; // r5@4
  int v25; // r4@4
  signed int v28; // r4@4
  void *v29; // r0@5
  void **v30; // r5@6
  void **v31; // r7@6
  void *v32; // r0@13
  void **v33; // r5@14 OVERLAPPED
  void **v34; // r6@14 OVERLAPPED
  mce::ImageBuffer *v35; // r4@25
  char *v36; // r0@25
  mce::ImageBuffer *v37; // r4@26
  char *v38; // r0@26
  unsigned int v39; // r3@26
  int v40; // r5@27
  int v41; // r5@28
  char *v42; // r0@29
  int v43; // r1@29
  int v44; // r3@29
  int v45; // r6@29
  int v46; // r7@29
  int v47; // r1@29
  int v48; // r3@29
  int v49; // r5@29
  int v50; // r6@29
  int v51; // r7@29
  mce::TextureContainer *v52; // r5@29
  char *v53; // r0@29
  unsigned int v54; // r3@29
  ImageUtils *v55; // r5@30
  const mce::ImageBuffer *v56; // r0@30
  const mce::ImageBuffer *v57; // r3@30
  mce::ImageBuffer *v58; // r0@31
  int v59; // r4@32
  unsigned int *v60; // r2@39
  signed int v61; // r1@41
  unsigned int *v62; // r2@43
  signed int v63; // r1@45
  void *v64; // r0@52
  void **v65; // r5@53 OVERLAPPED
  void **v66; // r6@53 OVERLAPPED
  unsigned int *v68; // r2@61
  signed int v69; // r1@63
  float v70; // [sp+0h] [bp-210h]@0
  bool v71; // [sp+0h] [bp-210h]@4
  int v72; // [sp+4h] [bp-20Ch]@0
  char **v73; // [sp+24h] [bp-1ECh]@4
  int v74; // [sp+28h] [bp-1E8h]@4
  _DWORD *v75; // [sp+30h] [bp-1E0h]@4
  mce::TextureContainer *v76; // [sp+34h] [bp-1DCh]@1
  void **v77; // [sp+38h] [bp-1D8h]@5
  void **v78; // [sp+3Ch] [bp-1D4h]@6
  int v79; // [sp+44h] [bp-1CCh]@5
  char v80; // [sp+70h] [bp-1A0h]@5
  __int64 v81; // [sp+B0h] [bp-160h]@14
  int v82; // [sp+BCh] [bp-154h]@13
  void *ptr; // [sp+E8h] [bp-128h]@4
  int v84; // [sp+ECh] [bp-124h]@4
  int v85; // [sp+F0h] [bp-120h]@4
  int v86; // [sp+F4h] [bp-11Ch]@4
  int v87; // [sp+F8h] [bp-118h]@4
  int v88; // [sp+FCh] [bp-114h]@4
  int v89; // [sp+100h] [bp-110h]@4
  int v90; // [sp+104h] [bp-10Ch]@4
  int v91; // [sp+108h] [bp-108h]@4
  char v92; // [sp+10Ch] [bp-104h]@4
  void *v93; // [sp+110h] [bp-100h]@4
  int v94; // [sp+114h] [bp-FCh]@4
  int v95; // [sp+118h] [bp-F8h]@4
  int v96; // [sp+11Ch] [bp-F4h]@4
  int v97; // [sp+120h] [bp-F0h]@4
  int v98; // [sp+124h] [bp-ECh]@4
  int v99; // [sp+128h] [bp-E8h]@4
  int v100; // [sp+12Ch] [bp-E4h]@4
  int v101; // [sp+130h] [bp-E0h]@4
  char v102; // [sp+134h] [bp-DCh]@4
  int v103; // [sp+138h] [bp-D8h]@2
  int v104; // [sp+13Ch] [bp-D4h]@2
  int v105; // [sp+140h] [bp-D0h]@2
  int v106; // [sp+144h] [bp-CCh]@2
  int v107; // [sp+148h] [bp-C8h]@2
  int v108; // [sp+14Ch] [bp-C4h]@2
  char v109; // [sp+154h] [bp-BCh]@1
  void **v110; // [sp+194h] [bp-7Ch]@1
  void **v111; // [sp+198h] [bp-78h]@1
  int v112; // [sp+19Ch] [bp-74h]@1
  __int64 v113; // [sp+1A0h] [bp-70h]@1
  int v114; // [sp+1A8h] [bp-68h]@1
  int v115; // [sp+1ACh] [bp-64h]@1
  int v116; // [sp+1B0h] [bp-60h]@1
  char v117; // [sp+1B4h] [bp-5Ch]@1
  signed int v118; // [sp+1B8h] [bp-58h]@1
  signed int v119; // [sp+1BCh] [bp-54h]@1
  int v120; // [sp+1C0h] [bp-50h]@1
  int v121; // [sp+1C4h] [bp-4Ch]@1
  char v122; // [sp+1C8h] [bp-48h]@1

  v5 = a2;
  v6 = a1;
  v7 = a4;
  v8 = a3;
  v9 = GuiData::getScreenSizeData(*(GuiData **)(a2 + 24));
  mce::Texture::Texture((mce::Texture *)&v109);
  v110 = 0;
  v111 = 0;
  v112 = 0;
  v113 = (unsigned int)&unk_28898CC;
  v114 = 0;
  v115 = 0;
  v116 = 1;
  v117 = 0;
  v118 = 1;
  v119 = 1;
  v120 = 0;
  v121 = 8;
  v122 = 0;
  v76 = (mce::TextureContainer *)(v6 + 72);
  v10 = mce::TextureContainer::getTextureDescription((mce::TextureContainer *)(v6 + 72));
  mce::TextureContainer::allocateStorage((mce::TextureContainer *)&v110, (const mce::TextureDescription *)v10);
  v11 = (mce::ImageBuffer *)mce::TextureContainer::getImage((mce::TextureContainer *)&v110, 0);
  if ( ImageUtils::loadImageFromFile(v11, v8) )
  {
    mce::TextureContainer::updateDescriptionFromImage((mce::TextureContainer *)&v110);
    v107 = 0;
    v105 = 0;
    v106 = 0;
    v103 = 0;
    v104 = 0;
    v108 = 1065353216;
    *(_QWORD *)&v103 = *(_QWORD *)v9;
    v12 = *(mce::RenderContext **)(v5 + 12);
    mce::RenderContext::setViewport();
    mce::RenderContext::setRenderTarget(v12);
    mce::RenderContext::clearDepthStencilBuffer();
    v13 = mce::RenderContext::isWithinFrame(v12);
    if ( !v13 )
      mce::RenderContext::beginFrame(v12);
    v75 = v7;
    v73 = (char **)v8;
    v74 = v13;
    v99 = 0;
    v100 = 0;
    v97 = 0;
    v98 = 0;
    v95 = 0;
    v96 = 0;
    v93 = 0;
    v94 = 0;
    v101 = 1;
    v102 = 0;
    v14 = MinecraftGame::captureScreenAsImage(*(MinecraftGame **)v6, (mce::ImageBuffer *)&v93);
    JpegCommentWriter::_drawImage(v6, v5, v6 + 8);
    _R4 = *(_DWORD *)mce::TextureContainer::getTextureDescription(v76);
    _R10 = *((_DWORD *)mce::TextureContainer::getTextureDescription(v76) + 1);
    v17 = *(GuiData **)(v5 + 24);
    _R0 = GuiData::getScreenSizeData(*(GuiData **)(v5 + 24));
    __asm
    {
      VLDR            S18, [R0,#0x10]
      VLDR            S16, [R0,#0x14]
    }
    _R0 = GuiData::getScreenSizeData(v17);
      VMOV            S0, R4
      VCVT.F32.S32    S0, S0
      VLDR            S2, [R0]
      VLDR            S20, [R0,#4]
      VDIV.F32        S0, S0, S2
      VMOV.F32        S2, #0.5
      VMUL.F32        S18, S0, S18
      VMUL.F32        S0, S18, S2
      VMOV            R1, S0
    v25 = GuiData::floorAlignToScreenPixel(v17, _R1);
      VMOV            S0, R10
      VLDR            S2, =0.86
      VMOV.F32        S4, #-4.0
      VMUL.F32        S2, S16, S2
      VDIV.F32        S0, S0, S20
      VMUL.F32        S0, S2, S0
      VADD.F32        S0, S0, S4
    _R0 = GuiData::floorAlignToScreenPixel(v17, _R1);
      VMOV            S2, R0
      VLDR            S0, =0.97
      VMUL.F32        S0, S18, S0
      VSTR            S0, [SP,#0x210+var_20C]
      VSTR            S2, [SP,#0x210+var_210]
    Font::drawWordWrapMaxLine(*(float *)(v6 + 4), *(float *)&v5, (int)v75, v25, v70, v72, a5, 2, 1065353216, 0, 1, 0, 0);
    v89 = 0;
    v90 = 0;
    v87 = 0;
    v88 = 0;
    v85 = 0;
    v86 = 0;
    ptr = 0;
    v84 = 0;
    v91 = 1;
    v92 = 0;
    v28 = MinecraftGame::captureScreenAsImage(*(MinecraftGame **)v6, (mce::ImageBuffer *)&ptr);
    if ( v14 == 1 )
      mce::TextureContainer::TextureContainer((int)&v77, (mce::ImageBuffer *)&v93);
      TexturePair::TexturePair((mce::Texture *)&v80, (int)&v77);
      v29 = (void *)(v79 - 12);
      if ( (int *)(v79 - 12) != &dword_28898C0 )
      {
        v60 = (unsigned int *)(v79 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v61 = __ldrex(v60);
          while ( __strex(v61 - 1, v60) );
        }
        else
          v61 = (*v60)--;
        if ( v61 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v29);
      }
      v31 = v78;
      v30 = v77;
      if ( v77 != v78 )
        do
          if ( *v30 )
            operator delete(*v30);
          v30 += 10;
        while ( v31 != v30 );
        v30 = v77;
      if ( v30 )
        operator delete(v30);
      JpegCommentWriter::_drawImage(v6, v5, (int)&v80);
      v32 = (void *)(v82 - 12);
      if ( (int *)(v82 - 12) != &dword_28898C0 )
        v62 = (unsigned int *)(v82 - 4);
            v63 = __ldrex(v62);
          while ( __strex(v63 - 1, v62) );
          v63 = (*v62)--;
        if ( v63 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v32);
      *(_QWORD *)&v33 = v81;
      if ( (_DWORD)v81 != HIDWORD(v81) )
          if ( *v33 )
            operator delete(*v33);
          v33 += 10;
        while ( v34 != v33 );
        v33 = (void **)v81;
      if ( v33 )
        operator delete(v33);
      mce::Texture::~Texture((mce::Texture *)&v80);
    if ( !v74 )
      mce::RenderContext::endFrame(v12);
    if ( v28 == 1 )
      v35 = *(mce::ImageBuffer **)mce::TextureContainer::getTextureDescription(v76);
      v36 = mce::TextureContainer::getTextureDescription(v76);
      if ( ImageUtils::cropImage((ImageUtils *)&ptr, v35, *((_DWORD *)v36 + 1), 0, v71) == 1 )
        v37 = *(mce::ImageBuffer **)mce::TextureContainer::getTextureDescription((mce::TextureContainer *)&v110);
        v38 = mce::TextureContainer::getTextureDescription((mce::TextureContainer *)&v110);
        if ( ImageUtils::scaleImage((ImageUtils *)&ptr, v37, *((_DWORD *)v38 + 1), v39) == 1 )
          v40 = *(_DWORD *)mce::TextureContainer::getTextureDescription((mce::TextureContainer *)(v6 + 192));
          if ( (v40 != *(_DWORD *)mce::TextureContainer::getTextureDescription((mce::TextureContainer *)&v110)
             || (v41 = *((_DWORD *)mce::TextureContainer::getTextureDescription((mce::TextureContainer *)(v6 + 192)) + 1),
                 v41 != *((_DWORD *)mce::TextureContainer::getTextureDescription((mce::TextureContainer *)&v110) + 1)))
            && (v42 = mce::TextureContainer::getTextureDescription(v76),
                mce::TextureContainer::allocateStorage(
                  (mce::TextureContainer *)(v6 + 192),
                  (const mce::TextureDescription *)v42),
                std::vector<mce::ImageBuffer,std::allocator<mce::ImageBuffer>>::operator=(
                  v6 + 192,
                  (unsigned __int64 *)v76),
                EntityInteraction::setInteractText((int *)(v6 + 204), (int *)(v6 + 84)),
                v43 = v6 + 208,
                v44 = *(_DWORD *)(v6 + 92),
                v45 = *(_DWORD *)(v6 + 96),
                v46 = *(_DWORD *)(v6 + 100),
                *(_DWORD *)v43 = *(_DWORD *)(v6 + 88),
                *(_DWORD *)(v43 + 4) = v44,
                *(_DWORD *)(v43 + 8) = v45,
                *(_DWORD *)(v43 + 12) = v46,
                v47 = v6 + 224,
                v48 = *(_DWORD *)(v6 + 108),
                v49 = *(_DWORD *)(v6 + 112),
                v50 = *(_DWORD *)(v6 + 116),
                v51 = *(_DWORD *)(v6 + 120),
                *(_DWORD *)v47 = *(_DWORD *)(v6 + 104),
                *(_DWORD *)(v47 + 4) = v48,
                *(_DWORD *)(v47 + 8) = v49,
                *(_DWORD *)(v47 + 12) = v50,
                *(_DWORD *)(v47 + 16) = v51,
                *(_BYTE *)(v6 + 244) = *(_BYTE *)(v6 + 124),
                v52 = *(mce::TextureContainer **)mce::TextureContainer::getTextureDescription((mce::TextureContainer *)&v110),
                v53 = mce::TextureContainer::getTextureDescription((mce::TextureContainer *)&v110),
                ImageUtils::scaleImage((ImageUtils *)(v6 + 192), v52, *((_DWORD *)v53 + 1), v54) != 1) )
          {
            v59 = 0;
          }
          else
            v55 = (ImageUtils *)mce::TextureContainer::getImage((mce::TextureContainer *)&v110, 0);
            v56 = (const mce::ImageBuffer *)mce::TextureContainer::getImage((mce::TextureContainer *)(v6 + 192), 0);
            if ( ImageUtils::overlayImage(v55, (mce::ImageBuffer *)&ptr, v56, v57) == 1 )
            {
              v58 = (mce::ImageBuffer *)mce::TextureContainer::getImage((mce::TextureContainer *)&v110, 0);
              if ( ImageUtils::saveJPEG(v58, (int *)v73, 90) == 1 )
                v59 = ImageUtils::saveMetadataJPEG(v75, v73);
              else
                v59 = 0;
            }
            else
              v59 = 0;
          v59 = 0;
      else
        v59 = 0;
    else
      v59 = 0;
    if ( ptr )
      operator delete(ptr);
    if ( v93 )
      operator delete(v93);
  }
  else
    v59 = 0;
  v64 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v113 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v64);
  *(_QWORD *)&v65 = *(_QWORD *)&v110;
  if ( v110 != v111 )
    do
      if ( *v65 )
        operator delete(*v65);
      v65 += 10;
    while ( v66 != v65 );
    v65 = v110;
  if ( v65 )
    operator delete(v65);
  mce::Texture::~Texture((mce::Texture *)&v109);
  return v59;
}
