

_QWORD *__fastcall FullScreenEffectRenderer::FullScreenEffectRenderer(_QWORD *a1, mce::TextureGroup *a2)
{
  mce::TextureGroup *v2; // r6@1
  _QWORD *v3; // r4@1
  double v4; // r0@1
  unsigned int v5; // r0@1
  int v6; // r7@3
  void *v7; // r5@3
  char *v8; // r0@4
  char *v9; // r0@5
  char *v10; // r0@6
  char *v11; // r0@7
  void *v12; // r0@8
  void *v13; // r0@9
  unsigned int *v15; // r2@12
  signed int v16; // r1@14
  unsigned int *v17; // r2@16
  signed int v18; // r1@18
  unsigned int *v19; // r2@20
  signed int v20; // r1@22
  unsigned int *v21; // r2@24
  signed int v22; // r1@26
  unsigned int *v23; // r2@28
  signed int v24; // r1@30
  unsigned int *v25; // r2@32
  signed int v26; // r1@34
  int v27; // [sp+4h] [bp-54h]@9
  int v28; // [sp+Ch] [bp-4Ch]@8
  char *v29; // [sp+14h] [bp-44h]@6
  char *v30; // [sp+18h] [bp-40h]@6
  int v31; // [sp+1Ch] [bp-3Ch]@6
  char *v32; // [sp+24h] [bp-34h]@4
  char *v33; // [sp+28h] [bp-30h]@4
  int v34; // [sp+2Ch] [bp-2Ch]@4

  v2 = a2;
  v3 = a1;
  AppPlatformListener::AppPlatformListener(a1);
  *(_DWORD *)v3 = &off_26E6DAC;
  *((_DWORD *)v3 + 4) = 0;
  *((_DWORD *)v3 + 5) = 0;
  *((_DWORD *)v3 + 6) = 1065353216;
  LODWORD(v4) = v3 + 3;
  *(_DWORD *)(LODWORD(v4) + 4) = 0;
  v5 = sub_21E6254(v4);
  *((_DWORD *)v3 + 3) = v5;
  if ( v5 == 1 )
  {
    *((_DWORD *)v3 + 8) = 0;
    v7 = v3 + 4;
  }
  else
    if ( v5 >= 0x40000000 )
      sub_21E57F4();
    v6 = 4 * v5;
    v7 = operator new(4 * v5);
    _aeabi_memclr4(v7, v6);
  *((_DWORD *)v3 + 2) = v7;
  mce::Mesh::Mesh((mce::Mesh *)((char *)v3 + 36));
  mce::Mesh::Mesh((mce::Mesh *)(v3 + 17));
  sub_21E94B4((void **)&v32, "atlas.terrain");
  v33 = v32;
  v32 = (char *)&unk_28898CC;
  v34 = 0;
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)((char *)v3 + 236), v2, (int)&v33, 0);
  v8 = v33 - 12;
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v33 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = v32 - 12;
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v32 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v29, "textures/misc/pumpkinblur");
  v30 = v29;
  v29 = (char *)&unk_28898CC;
  v31 = 0;
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)((char *)v3 + 260), v2, (int)&v30, 0);
  v10 = v30 - 12;
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v30 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = v29 - 12;
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v29 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v28, "fullscreen_cube_overlay_opaque");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)((char *)v3 + 284),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v28);
  v12 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v28 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v27, "fullscreen_cube_overlay_blend");
    (mce::MaterialPtr *)(v3 + 37),
    &v27);
  v13 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v27 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  return v3;
}


AppPlatformListener *__fastcall FullScreenEffectRenderer::~FullScreenEffectRenderer(FullScreenEffectRenderer *this)
{
  FullScreenEffectRenderer *v1; // r4@1
  int v2; // r5@1
  int v3; // r6@2
  char *v4; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_26E6DAC;
  mce::MaterialPtr::~MaterialPtr((FullScreenEffectRenderer *)((char *)this + 296));
  mce::MaterialPtr::~MaterialPtr((FullScreenEffectRenderer *)((char *)v1 + 284));
  mce::TexturePtr::~TexturePtr((FullScreenEffectRenderer *)((char *)v1 + 260));
  mce::TexturePtr::~TexturePtr((FullScreenEffectRenderer *)((char *)v1 + 236));
  mce::Mesh::~Mesh((FullScreenEffectRenderer *)((char *)v1 + 136));
  mce::Mesh::~Mesh((FullScreenEffectRenderer *)((char *)v1 + 36));
  v2 = *((_DWORD *)v1 + 4);
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD *)v2;
      mce::Mesh::~Mesh((mce::Mesh *)(v2 + 8));
      operator delete((void *)v2);
      v2 = v3;
    }
    while ( v3 );
  }
  _aeabi_memclr4(*((_QWORD *)v1 + 1), 4 * (*((_QWORD *)v1 + 1) >> 32));
  *((_DWORD *)v1 + 4) = 0;
  *((_DWORD *)v1 + 5) = 0;
  v4 = (char *)*((_DWORD *)v1 + 2);
  if ( v4 && (char *)v1 + 32 != v4 )
    operator delete(v4);
  return j_j_j__ZN19AppPlatformListenerD2Ev_1(v1);
}


void __fastcall FullScreenEffectRenderer::_createCubeFor(int a1, int a2, int a3, FullBlock *this, int a5)
{
  FullScreenEffectRenderer::_createCubeFor(a1, a2, a3, this, a5);
}


int __fastcall FullScreenEffectRenderer::_renderTex(int a1, int a2, int a3, int a4, const Color *a5)
{
  int v5; // r5@1
  int v6; // r6@1
  int v7; // r8@1
  int v8; // r4@1
  __int64 v9; // r2@1
  int v10; // r1@1
  mce::Buffer *v11; // r7@1
  Block *v12; // r0@1
  int v13; // r0@1
  bool v14; // zf@1
  int v15; // r2@4
  char v17; // [sp+8h] [bp-20h]@1
  char v18; // [sp+9h] [bp-1Fh]@1
  char v19; // [sp+Ch] [bp-1Ch]@1
  char v20; // [sp+Dh] [bp-1Bh]@1

  v5 = a2;
  v6 = a1;
  v7 = a4;
  v8 = a3;
  ShaderColor::setColor(*(ShaderColor **)(a2 + 48), a5);
  LODWORD(v9) = &v19;
  v10 = *(_DWORD *)(v5 + 40);
  HIDWORD(v9) = 1;
  v19 = *(_BYTE *)v8;
  v20 = *(_BYTE *)(v8 + 1);
  v11 = (mce::Buffer *)FullScreenEffectRenderer::_getCubeFor(v6, v10, v9);
  v17 = *(_BYTE *)v8;
  v18 = *(_BYTE *)(v8 + 1);
  v12 = (Block *)FullBlock::getBlock((FullBlock *)&v17);
  v13 = Block::getRenderLayer(v12);
  v14 = v13 == 6;
  if ( v13 != 6 )
    v14 = v13 == 3;
  if ( v14 )
    v15 = v6 + 284;
  else
    v15 = v6 + 296;
  return mce::Mesh::render(v11, v5, v15, v7, 0, 0);
}


int __fastcall FullScreenEffectRenderer::onAppSuspended(FullScreenEffectRenderer *this)
{
  FullScreenEffectRenderer *v1; // r4@1
  int v2; // r5@1
  int v3; // r6@2

  v1 = this;
  v2 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD *)v2;
      mce::Mesh::~Mesh((mce::Mesh *)(v2 + 8));
      operator delete((void *)v2);
      v2 = v3;
    }
    while ( v3 );
  }
  _aeabi_memclr4(*((_QWORD *)v1 + 1), 4 * (*((_QWORD *)v1 + 1) >> 32));
  *((_DWORD *)v1 + 4) = 0;
  *((_DWORD *)v1 + 5) = 0;
  mce::Mesh::reset((FullScreenEffectRenderer *)((char *)v1 + 36));
  return j_j_j__ZN3mce4Mesh5resetEv_1((FullScreenEffectRenderer *)((char *)v1 + 136));
}


int __fastcall FullScreenEffectRenderer::render(int a1, int a2, int a3, Entity *this, float a5)
{
  Entity *v5; // r7@1
  int v6; // r11@1
  LevelRenderer *v7; // r9@1
  int v8; // r10@1
  BlockSource *v9; // r8@1
  char *v10; // r0@1
  ShaderColor *v18; // r0@6
  __int64 v19; // r2@6
  int v20; // r1@6
  mce::Buffer *v21; // r0@6
  int v22; // r6@8
  int v23; // r6@8
  ShaderColor *v26; // r0@8
  int v27; // r1@8
  mce::Buffer *v28; // r0@8
  int result; // r0@9
  BlockGraphics *v30; // r0@12
  const Block *v31; // r1@12
  int v32; // r1@12
  char v33; // r4@14
  char v34; // r5@14
  int v35; // r1@14
  __int64 v36; // r2@14
  mce::Buffer *v37; // r6@14
  Block *v38; // r0@14
  int v39; // r0@14
  int v41; // r2@17
  char v42; // [sp+Ch] [bp-D4h]@14
  char v43; // [sp+Dh] [bp-D3h]@14
  char v44; // [sp+10h] [bp-D0h]@12
  char v45; // [sp+1Ch] [bp-C4h]@10
  char v46; // [sp+28h] [bp-B8h]@8
  char v47; // [sp+29h] [bp-B7h]@8
  int v48; // [sp+2Ch] [bp-B4h]@8
  signed int v49; // [sp+30h] [bp-B0h]@8
  int v50; // [sp+34h] [bp-ACh]@8
  int v51; // [sp+38h] [bp-A8h]@8
  char v52; // [sp+3Ch] [bp-A4h]@8
  char v53; // [sp+3Dh] [bp-A3h]@14
  float v54; // [sp+44h] [bp-9Ch]@8
  char v56; // [sp+4Ch] [bp-94h]@1
  int v57; // [sp+58h] [bp-88h]@6
  signed __int64 v58; // [sp+5Ch] [bp-84h]@8
  int v59; // [sp+64h] [bp-7Ch]@6
  int v60; // [sp+68h] [bp-78h]@6
  int v61; // [sp+6Ch] [bp-74h]@6
  float v62; // [sp+70h] [bp-70h]@8
  int v63; // [sp+74h] [bp-6Ch]@8
  int v64; // [sp+78h] [bp-68h]@8
  int v65; // [sp+7Ch] [bp-64h]@8
  int v66; // [sp+80h] [bp-60h]@8
  int v67; // [sp+84h] [bp-5Ch]@8
  int v68; // [sp+88h] [bp-58h]@8
  int v69; // [sp+8Ch] [bp-54h]@8
  int v70; // [sp+90h] [bp-50h]@8
  int v71; // [sp+94h] [bp-4Ch]@8
  int v72; // [sp+98h] [bp-48h]@8
  int v73; // [sp+9Ch] [bp-44h]@8
  int v74; // [sp+A0h] [bp-40h]@8
  float v75; // [sp+A4h] [bp-3Ch]@8

  v5 = this;
  v6 = a1;
  v7 = (LevelRenderer *)a3;
  v8 = a2;
  v9 = (BlockSource *)Entity::getRegion(this);
  v10 = LevelRenderer::getLevelRendererPlayer(v7);
  __asm
  {
    VLDR            S16, [SP,#0xE0+arg_0]
    VMOV            R3, S16
  }
  LevelRendererPlayer::getCameraPosFromEntity((LevelRendererPlayer *)&v56, (const Entity *)v10, *(float *)&v5, _R3);
  if ( !Mob::hasEffect(v5, (const MobEffect *)MobEffect::CONFUSION) )
    _R6 = LocalPlayer::getOPortalEffectTime(v5);
    _R0 = LocalPlayer::getPortalEffectTime(v5);
    __asm { VMOV            S18, R0 }
    _R0 = LocalPlayer::getOPortalEffectTime(v5);
    __asm
    {
      VMOV            S0, R0
      VMOV            S2, R6
      VSUB.F32        S0, S18, S0
      VMUL.F32        S0, S0, S16
      VADD.F32        S0, S0, S2
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm
      {
        VMOV.F32        S2, #1.0
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        __asm
        {
          VMUL.F32        S0, S0, S0
          VLDR            S2, =0.8
          VMUL.F32        S0, S0, S2
          VLDR            S2, =0.2
          VADD.F32        S0, S0, S2
        }
      v18 = *(ShaderColor **)(v8 + 48);
      v59 = 1065353216;
      v60 = 1065353216;
      v61 = 1065353216;
      __asm { VSTR            S0, [SP,#0xE0+var_70] }
      ShaderColor::setColor(v18, (const Color *)&v59);
      LODWORD(v19) = &v57;
      v20 = *(_DWORD *)(v8 + 40);
      HIDWORD(v19) = 1;
      LOWORD(v57) = *(_BYTE *)(Block::mPortal + 4);
      v21 = (mce::Buffer *)FullScreenEffectRenderer::_getCubeFor(v6, v20, v19);
      mce::Mesh::render(v21, v8, v6 + 296, v6 + 236, 0, 0);
  if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)v5 + 320))(v5) == 1 )
    Entity::getRotation((Entity *)&v54, (int)v5);
    MatrixStack::push((MatrixStack *)&v52, *(_DWORD *)(v8 + 16) + 16);
    v22 = MatrixStack::MatrixStackRef::operator->((int)&v52);
      VLDR            S0, [SP,#0xE0+var_98]
      VNEG.F32        S0, S0
    v57 = 0;
    v58 = 1065353216LL;
    __asm { VSTR            S0, [SP,#0xE0+var_3C] }
    glm::rotate<float>((int)&v59, v22, (int)&v75, (int)&v57);
    *(_DWORD *)v22 = v59;
    *(_DWORD *)(v22 + 4) = v60;
    *(_DWORD *)(v22 + 8) = v61;
    *(float *)(v22 + 12) = v62;
    *(_DWORD *)(v22 + 16) = v63;
    *(_DWORD *)(v22 + 20) = v64;
    *(_DWORD *)(v22 + 24) = v65;
    *(_DWORD *)(v22 + 28) = v66;
    *(_DWORD *)(v22 + 32) = v67;
    *(_DWORD *)(v22 + 36) = v68;
    *(_DWORD *)(v22 + 40) = v69;
    *(_DWORD *)(v22 + 44) = v70;
    *(_DWORD *)(v22 + 48) = v71;
    *(_DWORD *)(v22 + 52) = v72;
    *(_DWORD *)(v22 + 56) = v73;
    *(_DWORD *)(v22 + 60) = v74;
    v23 = MatrixStack::MatrixStackRef::operator->((int)&v52);
    *(_QWORD *)&v57 = 1065353216LL;
    v75 = v54;
    HIDWORD(v58) = 0;
    glm::rotate<float>((int)&v59, v23, (int)&v75, (int)&v57);
    *(_DWORD *)v23 = v59;
    *(_DWORD *)(v23 + 4) = v60;
    *(_DWORD *)(v23 + 8) = v61;
    *(float *)(v23 + 12) = v62;
    *(_DWORD *)(v23 + 16) = v63;
    *(_DWORD *)(v23 + 20) = v64;
    *(_DWORD *)(v23 + 24) = v65;
    *(_DWORD *)(v23 + 28) = v66;
    *(_DWORD *)(v23 + 32) = v67;
    *(_DWORD *)(v23 + 36) = v68;
    *(_DWORD *)(v23 + 40) = v69;
    *(_DWORD *)(v23 + 44) = v70;
    *(_DWORD *)(v23 + 48) = v71;
    *(_DWORD *)(v23 + 52) = v72;
    *(_DWORD *)(v23 + 56) = v73;
    *(_DWORD *)(v23 + 60) = v74;
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v52);
      VLDR            S0, =0.2
      VLDR            S2, [R0,#0x14]
      VLDR            S4, [R0,#0x18]
      VLDR            S8, [R0,#0x10]
      VMUL.F32        S2, S2, S0
      VLDR            S6, [R0,#0x1C]
      VMUL.F32        S4, S4, S0
      VMUL.F32        S8, S8, S0
      VLDR            S10, [R0,#0x34]
      VMUL.F32        S0, S6, S0
      VLDR            S6, [R0,#0x30]
      VLDR            S12, [R0,#0x38]
      VLDR            S14, [R0,#0x3C]
      VSUB.F32        S2, S10, S2
      VSUB.F32        S4, S12, S4
      VSUB.F32        S6, S6, S8
      VSUB.F32        S0, S14, S0
      VSTR            S6, [R0,#0x30]
      VSTR            S2, [R0,#0x34]
      VSTR            S4, [R0,#0x38]
      VSTR            S0, [R0,#0x3C]
      VLDR            S0, =0.7
      VLDR            S2, [R0]
      VSTR            S2, [R0]
      VLDR            S2, [R0,#4]
      VSTR            S2, [R0,#4]
      VLDR            S2, [R0,#8]
      VSTR            S2, [R0,#8]
      VLDR            S2, [R0,#0xC]
      VSTR            S2, [R0,#0xC]
      VLDR            S2, [R0,#0x10]
      VSTR            S2, [R0,#0x10]
      VSTR            S2, [R0,#0x14]
      VLDR            S2, [R0,#0x18]
      VSTR            S2, [R0,#0x18]
      VLDR            S2, [R0,#0x1C]
      VSTR            S2, [R0,#0x1C]
      VLDR            S2, [R0,#0x20]
      VSTR            S2, [R0,#0x20]
      VLDR            S2, [R0,#0x24]
      VSTR            S2, [R0,#0x24]
      VLDR            S2, [R0,#0x28]
      VSTR            S2, [R0,#0x28]
      VLDR            S2, [R0,#0x2C]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [R0,#0x2C]
    v26 = *(ShaderColor **)(v8 + 48);
    v48 = 1065353216;
    v49 = 1065353216;
    v50 = 1065353216;
    v51 = 1063675494;
    ShaderColor::setColor(v26, (const Color *)&v48);
    v27 = *(_DWORD *)(v8 + 40);
    v46 = *(_BYTE *)(Block::mFire + 4);
    v47 = 0;
    v28 = (mce::Buffer *)FullScreenEffectRenderer::_getCubeFor(v6, v27, (unsigned int)&v46);
    mce::Mesh::render(v28, v8, v6 + 296, v6 + 236, 0, 0);
    MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v52);
  result = Entity::isRiding(v5);
  if ( !result )
    BlockPos::BlockPos((int)&v45, (int)&v56);
    result = BlockSource::isEmptyBlock(v9, (const BlockPos *)&v45);
    if ( !result )
      result = Abilities::getBool((int)v5 + 4320, (int **)&Abilities::NOCLIP);
      if ( !result )
        BlockPos::BlockPos((int)&v44, (int)&v56);
        BlockSource::getBlockAndData((BlockSource *)&v52, v9, (int)&v44);
        v30 = (BlockGraphics *)FullBlock::getBlock((FullBlock *)&v52);
        if ( BlockGraphics::isFullAndOpaque(v30, v31)
          || (result = BlockSource::isInWall(v9, (const Vec3 *)&v56), result == 1) )
          v42 = v52;
          v43 = v53;
          FullScreenEffectRenderer::_getColor((FullBlock *)&v59, v32, (int)v7, (int)v9, (FullBlock *)&v42, (int)&v56);
          v33 = v52;
          v34 = v53;
          ShaderColor::setColor(*(ShaderColor **)(v8 + 48), (const Color *)&v59);
          v35 = *(_DWORD *)(v8 + 40);
          LODWORD(v36) = &v57;
          HIDWORD(v36) = 1;
          LOBYTE(v57) = v33;
          BYTE1(v57) = v34;
          v37 = (mce::Buffer *)FullScreenEffectRenderer::_getCubeFor(v6, v35, v36);
          LOBYTE(v54) = v33;
          BYTE1(v54) = v34;
          v38 = (Block *)FullBlock::getBlock((FullBlock *)&v54);
          v39 = Block::getRenderLayer(v38);
          _ZF = v39 == 6;
          if ( v39 != 6 )
            _ZF = v39 == 3;
          if ( _ZF )
            v41 = v6 + 284;
          else
            v41 = v6 + 296;
          result = mce::Mesh::render(v37, v8, v41, v6 + 236, 0, 0);
  return result;
}


int __fastcall FullScreenEffectRenderer::_renderSleepOverlay(FullScreenEffectRenderer *a1, int a2, int a3)
{
  FullScreenEffectRenderer *v3; // r5@1
  int v4; // r4@1
  ShaderColor *v11; // r0@3
  char *v12; // r0@3
  mce::Buffer *v13; // r5@3
  void *v14; // r0@3
  _DWORD *v15; // r0@3
  int v17; // [sp+8h] [bp-20h]@3
  signed int v18; // [sp+Ch] [bp-1Ch]@3
  int v19; // [sp+10h] [bp-18h]@3

  v3 = a1;
  v4 = a2;
  _R0 = (*(int (__fastcall **)(int))(*(_DWORD *)a3 + 1396))(a3);
  __asm
  {
    VMOV            S0, R0
    VLDR            S4, =0.01
    VCVT.F32.S32    S2, S0
    VMOV.F32        S0, #1.0
    VMUL.F32        S4, S2, S4
    VCMPE.F32       S4, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm
    {
      VLDR            S4, =100.0
      VSUB.F32        S2, S4, S2
      VLDR            S4, =0.1
      VMUL.F32        S2, S2, S4
      VADD.F32        S4, S2, S0
    }
    VLDR            S0, =220.0
    VLDR            S2, =0.0039216
    VMUL.F32        S0, S4, S0
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  _R0 = (unsigned __int8)_R0;
    VCVT.F32.S32    S0, S0
  v11 = *(ShaderColor **)(v4 + 48);
  v17 = 1031831681;
  v18 = 1031831681;
  v19 = 1040220289;
    VMUL.F32        S0, S0, S2
    VSTR            S0, [SP,#0x28+var_14]
  ShaderColor::setColor(v11, (const Color *)&v17);
  v12 = FullScreenEffectRenderer::_getFaceMeshFill(v3, *(Tessellator **)(v4 + 40));
  v13 = (mce::Buffer *)v12;
  v14 = ScreenRenderer::singleton((ScreenRenderer *)v12);
  v15 = ScreenRenderer::getMaterial((int)v14, 1);
  return mce::Mesh::render(v13, v4, (int)v15, 0, 0);
}


int __fastcall FullScreenEffectRenderer::_renderPortalOverlay(int a1, int a2, int _R2, int a4)
{
  int v8; // r4@1
  int v9; // r5@1
  int v10; // r6@1
  ShaderColor *v11; // r0@4
  __int64 v12; // r2@4
  int v13; // r1@4
  mce::Buffer *v14; // r0@4
  char v16; // [sp+8h] [bp-28h]@4
  char v17; // [sp+9h] [bp-27h]@4
  int v18; // [sp+Ch] [bp-24h]@4
  signed int v19; // [sp+10h] [bp-20h]@4
  int v20; // [sp+14h] [bp-1Ch]@4

  __asm { VMOV.F32        S2, #1.0 }
  v8 = a4;
  __asm { VMOV            S0, R2 }
  v9 = a2;
  v10 = a1;
  __asm
  {
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    __asm
    {
      VMUL.F32        S0, S0, S0
      VLDR            S2, =0.8
      VMUL.F32        S0, S0, S2
      VLDR            S2, =0.2
      VADD.F32        S0, S0, S2
    }
  v11 = *(ShaderColor **)(a2 + 48);
  v18 = 1065353216;
  v19 = 1065353216;
  v20 = 1065353216;
  __asm { VSTR            S0, [SP,#0x30+var_18] }
  ShaderColor::setColor(v11, (const Color *)&v18);
  LODWORD(v12) = &v16;
  v13 = *(_DWORD *)(v9 + 40);
  HIDWORD(v12) = 1;
  v16 = *(_BYTE *)(Block::mPortal + 4);
  v17 = 0;
  v14 = (mce::Buffer *)FullScreenEffectRenderer::_getCubeFor(v10, v13, v12);
  return mce::Mesh::render(v14, v9, v10 + 296, v8, 0, 0);
}


int __fastcall FullScreenEffectRenderer::renderHeadlocked(FullScreenEffectRenderer *a1, int a2, int a3)
{
  int v3; // r4@1
  FullScreenEffectRenderer *v4; // r6@1
  int v5; // r5@1
  Block *v6; // r0@1
  char *v7; // r0@3
  mce::Buffer *v8; // r7@3
  void *v9; // r0@3
  _DWORD *v10; // r0@3
  int result; // r0@4

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = *(Block **)((*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a3 + 1028))(a3, 0) + 4);
  if ( v6 && Block::isType(v6, (const Block *)Block::mPumpkin) == 1 )
  {
    v7 = FullScreenEffectRenderer::_getFaceMesh(v4, *(Tessellator **)(v5 + 40));
    v8 = (mce::Buffer *)v7;
    v9 = ScreenRenderer::singleton((ScreenRenderer *)v7);
    v10 = ScreenRenderer::getMaterial((int)v9, 4);
    mce::Mesh::render(v8, v5, (int)v10, (int)v4 + 260, 0, 0);
  }
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 784))(v3);
  if ( result == 1 )
    result = j_j_j__ZN24FullScreenEffectRenderer19_renderSleepOverlayER13ScreenContextRK6Player(v4, v5, v3);
  return result;
}


char *__fastcall FullScreenEffectRenderer::_getFaceMesh(FullScreenEffectRenderer *this, Tessellator *a2)
{
  char *v2; // r4@1
  Tessellator *v3; // r5@1
  char v5; // [sp+8h] [bp-78h]@2

  v2 = (char *)this + 36;
  v3 = a2;
  if ( !mce::Mesh::isValid((FullScreenEffectRenderer *)((char *)this + 36)) )
  {
    Tessellator::begin((int)v3, 1, 4, 0);
    Tessellator::color(v3, (const Color *)&Color::WHITE);
    Tessellator::vertexUV(v3, -0.5, -0.5, -0.5, 0.0, 1.0);
    Tessellator::vertexUV(v3, 0.5, -0.5, -0.5, 1.0, 1.0);
    Tessellator::vertexUV(v3, 0.5, 0.5, -0.5, 1.0, 0.0);
    Tessellator::vertexUV(v3, -0.5, 0.5, -0.5, 0.0, 0.0);
    Tessellator::vertexUV(v3, -0.5, -0.5, 0.5, 1.0, 1.0);
    Tessellator::vertexUV(v3, 0.5, -0.5, 0.5, 1.0, 1.0);
    Tessellator::vertexUV(v3, -0.5, -0.5, -0.5, 1.0, 1.0);
    Tessellator::vertexUV(v3, -0.5, 0.5, -0.5, 1.0, 1.0);
    Tessellator::vertexUV(v3, 0.5, 0.5, -0.5, 1.0, 1.0);
    Tessellator::vertexUV(v3, 0.5, 0.5, 0.5, 1.0, 1.0);
    Tessellator::vertexUV(v3, -0.5, 0.5, 0.5, 1.0, 1.0);
    Tessellator::end((Tessellator *)&v5, (const char *)v3, 0, 0);
    mce::Mesh::operator=((int)v2, (int)&v5);
    mce::Mesh::~Mesh((mce::Mesh *)&v5);
  }
  return v2;
}


void __fastcall FullScreenEffectRenderer::_createCubeFor(int a1, int a2, int a3, FullBlock *this, int a5)
{
  FullBlock *v5; // r5@1
  Tessellator *v6; // r8@1
  Tessellator *v7; // r9@1
  unsigned int v8; // r6@1
  int v9; // r0@1
  int v10; // r1@1
  int v11; // r0@1
  int v12; // r10@1
  float v13; // r3@1
  float v14; // r4@1
  float v15; // r5@1
  float v16; // r6@1
  int v17; // r7@1
  float v22; // ST00_4@1
  float v23; // ST04_4@1
  float v24; // ST00_4@1
  float v25; // ST04_4@1
  float v26; // ST00_4@1
  float v27; // ST04_4@1
  float v28; // ST00_4@1
  float v29; // ST04_4@1
  float v30; // ST00_4@1
  float v31; // ST04_4@1
  float v32; // ST00_4@1
  float v33; // ST04_4@1
  float v34; // ST00_4@1
  float v35; // ST04_4@1
  float v36; // ST00_4@1
  float v37; // ST04_4@1
  float v38; // ST00_4@1
  float v39; // ST04_4@1
  float v40; // ST00_4@1
  float v41; // ST04_4@1
  float v42; // ST00_4@1
  float v43; // ST04_4@1
  float v44; // ST00_4@1
  float v45; // ST04_4@1
  float v46; // ST00_4@1
  float v47; // ST04_4@1
  float v48; // ST00_4@1
  float v49; // ST04_4@1
  float v50; // ST00_4@1
  float v51; // ST04_4@1
  float v52; // ST00_4@1
  float v53; // ST04_4@1
  float v54; // ST00_4@1
  float v55; // ST04_4@1
  float v56; // ST00_4@1
  float v57; // ST04_4@1
  float v58; // ST00_4@1
  float v59; // ST04_4@1
  float v60; // ST00_4@2
  float v61; // ST04_4@2
  float v62; // ST00_4@2
  float v63; // ST04_4@2
  float v64; // ST00_4@2
  float v65; // ST04_4@2
  float v66; // ST00_4@2
  float v67; // ST04_4@2
  float v68; // ST00_4@2
  float v69; // ST04_4@2
  float v70; // ST00_4@2
  float v71; // ST04_4@2
  float v72; // ST00_4@2
  float v73; // ST04_4@2
  void *v74; // r0@3
  float v75; // ST00_4@4
  float v76; // ST04_4@4
  float v77; // ST00_4@4
  float v78; // ST04_4@4
  float v79; // ST00_4@4
  float v80; // ST04_4@4
  float v81; // ST00_4@4
  float v82; // ST04_4@4
  float v83; // ST00_4@4
  float v84; // ST04_4@4
  float v85; // ST00_4@4
  float v86; // ST04_4@4
  float v87; // ST00_4@4
  float v88; // ST04_4@4
  float v89; // ST00_4@4
  float v90; // ST04_4@4
  float v91; // ST00_4@4
  float v92; // ST04_4@4
  float v93; // ST00_4@4
  float v94; // ST04_4@4
  float v95; // ST00_4@4
  float v96; // ST04_4@4
  float v97; // ST00_4@4
  float v98; // ST04_4@4
  float v99; // ST00_4@4
  float v100; // ST04_4@4
  float v101; // ST00_4@4
  float v102; // ST04_4@4
  float v103; // ST00_4@4
  float v104; // ST04_4@4
  void *v105; // r0@5
  unsigned int *v106; // r2@7
  signed int v107; // r1@9
  unsigned int *v108; // r2@11
  signed int v109; // r1@13
  float v110; // [sp+0h] [bp-70h]@0
  float v111; // [sp+0h] [bp-70h]@1
  float v112; // [sp+4h] [bp-6Ch]@0
  float v113; // [sp+4h] [bp-6Ch]@1
  char v114; // [sp+8h] [bp-68h]@3
  float v115; // [sp+Ch] [bp-64h]@3
  float v116; // [sp+10h] [bp-60h]@3
  float v117; // [sp+14h] [bp-5Ch]@3
  float v118; // [sp+18h] [bp-58h]@3
  int v119; // [sp+1Ch] [bp-54h]@3
  int v120; // [sp+20h] [bp-50h]@3
  int v121; // [sp+24h] [bp-4Ch]@3
  int v122; // [sp+28h] [bp-48h]@1
  float v123; // [sp+2Ch] [bp-44h]@1
  float v124; // [sp+30h] [bp-40h]@1
  float v125; // [sp+34h] [bp-3Ch]@1
  float v126; // [sp+38h] [bp-38h]@1
  int v127; // [sp+3Ch] [bp-34h]@1
  int v128; // [sp+40h] [bp-30h]@1
  int v129; // [sp+44h] [bp-2Ch]@1

  v5 = this;
  v6 = (Tessellator *)a1;
  v7 = (Tessellator *)a3;
  v8 = BlockGraphics::mBlocks[*(_BYTE *)(FullBlock::getBlock(this) + 4)];
  v9 = FullBlock::getBlock(v5);
  v10 = *((_BYTE *)v5 + 1);
  v11 = (*(int (**)(void))(*(_DWORD *)v9 + 424))();
  v12 = BlockGraphics::getTexture(__PAIR__(1, v8), v11, 0);
  v13 = *(float *)(v12 + 4);
  v14 = *(float *)(v12 + 8);
  v15 = *(float *)(v12 + 12);
  v16 = *(float *)(v12 + 16);
  v17 = *(_DWORD *)(v12 + 20);
  v122 = *(_DWORD *)v12;
  v123 = v13;
  v124 = v14;
  v125 = v15;
  v126 = v16;
  v127 = v17;
  sub_21E8AF4(&v128, (int *)(v12 + 24));
  v129 = *(_DWORD *)(v12 + 28);
  Tessellator::begin((int)v7, 1, 4, 0);
  __asm
  {
    VLDR            S0, [SP,#0x70+var_44]
    VLDR            S2, [SP,#0x70+var_40]
    VSTR            S0, [SP,#0x70+var_70]
    VSTR            S2, [SP,#0x70+var_6C]
  }
  Tessellator::vertexUV(v7, -0.5, 0.5, 0.5, v110, v112);
    VLDR            S0, [SP,#0x70+var_40]
    VLDR            S2, [SP,#0x70+var_3C]
    VSTR            S2, [SP,#0x70+var_70]
    VSTR            S0, [SP,#0x70+var_6C]
  Tessellator::vertexUV(v7, 0.5, 0.5, 0.5, v22, v23);
    VLDR            S0, [SP,#0x70+var_3C]
    VLDR            S2, [SP,#0x70+var_38]
  Tessellator::vertexUV(v7, 0.5, -0.5, 0.5, v24, v25);
  Tessellator::vertexUV(v7, -0.5, -0.5, 0.5, v26, v27);
  Tessellator::vertexUV(v7, -0.5, -0.5, -0.5, v28, v29);
  Tessellator::vertexUV(v7, 0.5, -0.5, -0.5, v30, v31);
  Tessellator::vertexUV(v7, 0.5, 0.5, -0.5, v32, v33);
  Tessellator::vertexUV(v7, -0.5, 0.5, -0.5, v34, v35);
  Tessellator::vertexUV(v7, -0.5, 0.5, -0.5, v36, v37);
  Tessellator::vertexUV(v7, -0.5, 0.5, 0.5, v38, v39);
  Tessellator::vertexUV(v7, -0.5, -0.5, 0.5, v40, v41);
  Tessellator::vertexUV(v7, -0.5, -0.5, -0.5, v42, v43);
  Tessellator::vertexUV(v7, 0.5, -0.5, -0.5, v44, v45);
  Tessellator::vertexUV(v7, 0.5, -0.5, 0.5, v46, v47);
  Tessellator::vertexUV(v7, 0.5, 0.5, 0.5, v48, v49);
  Tessellator::vertexUV(v7, 0.5, 0.5, -0.5, v50, v51);
  Tessellator::vertexUV(v7, -0.5, -0.5, 0.5, v52, v53);
  Tessellator::vertexUV(v7, 0.5, -0.5, 0.5, v54, v55);
  Tessellator::vertexUV(v7, 0.5, -0.5, -0.5, v56, v57);
  Tessellator::vertexUV(v7, -0.5, -0.5, -0.5, v58, v59);
  if ( a5 == 1 )
    __asm
    {
      VLDR            S0, [SP,#0x70+var_44]
      VLDR            S2, [SP,#0x70+var_40]
      VSTR            S0, [SP,#0x70+var_70]
      VSTR            S2, [SP,#0x70+var_6C]
    }
    Tessellator::vertexUV(v7, -0.5, -0.5, 0.5, v111, v113);
      VLDR            S0, [SP,#0x70+var_40]
      VLDR            S2, [SP,#0x70+var_3C]
      VSTR            S2, [SP,#0x70+var_70]
      VSTR            S0, [SP,#0x70+var_6C]
    Tessellator::vertexUV(v7, 0.5, -0.5, 0.5, v60, v61);
      VLDR            S0, [SP,#0x70+var_3C]
      VLDR            S2, [SP,#0x70+var_38]
    Tessellator::vertexUV(v7, 0.5, -0.5, -0.5, v62, v63);
    Tessellator::vertexUV(v7, -0.5, -0.5, -0.5, v64, v65);
    Tessellator::vertexUV(v7, -0.5, 0.5, -0.5, v66, v67);
    Tessellator::vertexUV(v7, 0.5, 0.5, -0.5, v68, v69);
    Tessellator::vertexUV(v7, 0.5, 0.5, 0.5, v70, v71);
    Tessellator::vertexUV(v7, -0.5, 0.5, 0.5, v72, v73);
  else
    Tessellator::tilt(v7);
    TextureUVCoordinateSet::getFlippedVertically((TextureUVCoordinateSet *)&v114, (int)&v122);
    v122 = *(_DWORD *)&v114;
    v123 = v115;
    v124 = v116;
    v125 = v117;
    v126 = v118;
    v127 = v119;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v128, &v120);
    v129 = v121;
    v74 = (void *)(v120 - 12);
    if ( (int *)(v120 - 12) != &dword_28898C0 )
      v108 = (unsigned int *)(v120 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v109 = __ldrex(v108);
        while ( __strex(v109 - 1, v108) );
      }
      else
        v109 = (*v108)--;
      if ( v109 <= 0 )
        j_j_j_j__ZdlPv_9(v74);
    Tessellator::setRotationOffset(v7, -10.0, (const Vec3 *)Vec3::UNIT_X);
    Tessellator::vertexUV(v7, 0.5, -0.5, 0.5, v75, v76);
    Tessellator::vertexUV(v7, 0.5, -0.5, -0.5, v77, v78);
    Tessellator::vertexUV(v7, -0.5, -0.5, -0.5, v79, v80);
    Tessellator::setRotationOffset(v7, 90.0, (const Vec3 *)&Vec3::UNIT_Y);
    Tessellator::addRotationOffset(v7, 10.0, (const Vec3 *)&Vec3::UNIT_Z);
    Tessellator::vertexUV(v7, -0.5, -0.5, 0.5, v81, v82);
    Tessellator::vertexUV(v7, 0.5, -0.5, 0.5, v83, v84);
    Tessellator::vertexUV(v7, 0.5, -0.5, -0.5, v85, v86);
    Tessellator::vertexUV(v7, -0.5, -0.5, -0.5, v87, v88);
    Tessellator::setRotationOffset(v7, 180.0, (const Vec3 *)&Vec3::UNIT_Y);
    Tessellator::addRotationOffset(v7, 10.0, (const Vec3 *)Vec3::UNIT_X);
    Tessellator::vertexUV(v7, -0.5, -0.5, 0.5, v89, v90);
    Tessellator::vertexUV(v7, 0.5, -0.5, 0.5, v91, v92);
    Tessellator::vertexUV(v7, 0.5, -0.5, -0.5, v93, v94);
    Tessellator::vertexUV(v7, -0.5, -0.5, -0.5, v95, v96);
    Tessellator::setRotationOffset(v7, 270.0, (const Vec3 *)&Vec3::UNIT_Y);
    Tessellator::addRotationOffset(v7, -10.0, (const Vec3 *)&Vec3::UNIT_Z);
    Tessellator::vertexUV(v7, -0.5, -0.5, 0.5, v97, v98);
    Tessellator::vertexUV(v7, 0.5, -0.5, 0.5, v99, v100);
    Tessellator::vertexUV(v7, 0.5, -0.5, -0.5, v101, v102);
    Tessellator::vertexUV(v7, -0.5, -0.5, -0.5, v103, v104);
    Tessellator::resetTilt(v7);
  Tessellator::end(v6, (const char *)v7, 0, 0);
  v105 = (void *)(v128 - 12);
  if ( (int *)(v128 - 12) != &dword_28898C0 )
    v106 = (unsigned int *)(v128 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
    else
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j__ZdlPv_9(v105);
}


int __fastcall FullScreenEffectRenderer::_getMaterialFor(int a1, FullBlock *a2)
{
  int v2; // r4@1
  Block *v3; // r0@1
  int v4; // r0@1
  bool v5; // zf@1
  int result; // r0@4

  v2 = a1;
  v3 = (Block *)FullBlock::getBlock(a2);
  v4 = Block::getRenderLayer(v3);
  v5 = v4 == 6;
  if ( v4 != 6 )
    v5 = v4 == 3;
  if ( v5 )
    result = v2 + 284;
  else
    result = v2 + 296;
  return result;
}


void __fastcall FullScreenEffectRenderer::~FullScreenEffectRenderer(FullScreenEffectRenderer *this)
{
  FullScreenEffectRenderer::~FullScreenEffectRenderer(this);
}


char *__fastcall FullScreenEffectRenderer::_getFaceMeshFill(FullScreenEffectRenderer *this, Tessellator *a2)
{
  char *v2; // r4@1
  Tessellator *v3; // r5@1
  char v5; // [sp+4h] [bp-74h]@2

  v2 = (char *)this + 136;
  v3 = a2;
  if ( !mce::Mesh::isValid((FullScreenEffectRenderer *)((char *)this + 136)) )
  {
    Tessellator::begin((int)v3, 1, 4, 0);
    Tessellator::vertex(v3, -0.5, -0.5, -0.5);
    Tessellator::vertex(v3, 0.5, -0.5, -0.5);
    Tessellator::vertex(v3, 0.5, 0.5, -0.5);
    Tessellator::vertex(v3, -0.5, 0.5, -0.5);
    Tessellator::vertex(v3, -0.5, -0.5, 0.5);
    Tessellator::vertex(v3, 0.5, -0.5, 0.5);
    Tessellator::vertex(v3, 0.5, 0.5, 0.5);
    Tessellator::vertex(v3, -0.5, 0.5, 0.5);
    Tessellator::end((Tessellator *)&v5, (const char *)v3, 0, 0);
    mce::Mesh::operator=((int)v2, (int)&v5);
    mce::Mesh::~Mesh((mce::Mesh *)&v5);
  }
  return v2;
}


void __fastcall FullScreenEffectRenderer::~FullScreenEffectRenderer(FullScreenEffectRenderer *this)
{
  AppPlatformListener *v1; // r0@1

  v1 = FullScreenEffectRenderer::~FullScreenEffectRenderer(this);
  j_j_j__ZdlPv_5((void *)v1);
}


unsigned int __fastcall FullScreenEffectRenderer::_getColor(FullBlock *a1, int a2, int a3, int a4, FullBlock *a5, int a6)
{
  int v6; // r8@1
  int v7; // r6@1
  int v8; // r5@1
  int v9; // r3@1
  unsigned int v10; // r7@1
  unsigned int result; // r0@2
  float v23; // [sp+0h] [bp-48h]@2
  float v24; // [sp+10h] [bp-38h]@2
  char v28; // [sp+20h] [bp-28h]@1

  v6 = a3;
  *(_DWORD *)a1 = 1050253722;
  *((_DWORD *)a1 + 1) = 1050253722;
  *((_DWORD *)a1 + 2) = 1050253722;
  *((_DWORD *)a1 + 3) = 1065353216;
  v7 = a4;
  BlockPos::BlockPos((int)&v28, a6);
  v8 = FullBlock::getBlock(a5);
  v9 = *((_BYTE *)a5 + 1);
  v10 = (*(int (**)(void))(*(_DWORD *)v8 + 396))();
  if ( (*(int (__fastcall **)(int, int, char *))(*(_DWORD *)v8 + 400))(v8, v7, &v28) == 1 )
  {
    _R0 = (unsigned __int16)v10 >> 8;
    _R1 = (v10 >> 16) & 0xFF;
    __asm
    {
      VLDR            S8, =0.0039216
      VMOV            S0, R1
    }
    _R1 = (unsigned __int8)v10;
    __asm { VMOV            S2, R0 }
    _R0 = v10 >> 24;
      VMOV            S6, R0
      VMOV            S4, R1
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
      VCVT.F32.S32    S6, S6
      VMUL.F32        S0, S0, S8
      VMUL.F32        S2, S2, S8
      VMUL.F32        S4, S4, S8
      VMUL.F32        S6, S6, S8
      VSTR            S0, [SP,#0x48+var_48]
      VSTR            S2, [SP,#0x48+var_44]
      VSTR            S4, [SP,#0x48+var_40]
      VSTR            S6, [SP,#0x48+var_3C]
    result = SeasonsRenderer::getTintedColor((SeasonsRenderer *)&v24, *(const Color **)(v6 + 1572), (int)&v23);
      VLDR            S0, =0.3
      VMOV.F32        S12, #1.0
      VLDR            S2, [SP,#0x48+var_38]
      VLDR            S4, [SP,#0x48+var_34]
      VMUL.F32        S2, S2, S0
      VLDR            S10, =0.0
      VMUL.F32        S4, S4, S0
      VLDR            S6, [SP,#0x48+var_30]
      VLDR            S8, [SP,#0x48+var_2C]
      VMUL.F32        S6, S6, S0
      VMOV.F32        S0, S8
      VCMPE.F32       S2, #0.0
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S4, #0.0
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S2, S10 }
      VCMPE.F32       S6, #0.0
      __asm { VMOVLT.F32      S4, S10 }
      VCMPE.F32       S8, #0.0
      __asm { VMOVLT.F32      S6, S10 }
      VCMPE.F32       S2, S12
      __asm { VMOVLT.F32      S0, S10 }
      VCMPE.F32       S4, S12
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S2, S12 }
      VCMPE.F32       S6, S12
      __asm { VMOVGT.F32      S4, S12 }
      VCMPE.F32       S0, S12
      __asm { VMOVGT.F32      S6, S12 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVGT.F32      S0, S12 }
      VSTR            S2, [R4]
      VSTR            S4, [R4,#4]
      VSTR            S6, [R4,#8]
      VSTR            S8, [R4,#0xC]
  }
  else
    _R0 = (v10 >> 16) & 0xFF;
    _R1 = (unsigned __int16)v10 >> 8;
      VLDR            S6, =0.0011765
      VMOV            S0, R0
    _R0 = (unsigned __int8)v10;
    __asm { VMOV            S4, R0 }
    result = v10 >> 24;
      VMOV            S2, R1
      VMOV            S8, R0
      VCVT.F32.S32    S8, S8
      VMUL.F32        S10, S0, S6
      VLDR            S0, =0.0039216
      VMUL.F32        S2, S2, S6
      VMUL.F32        S4, S4, S6
      VMUL.F32        S0, S8, S0
      VSTR            S10, [R4]
      VSTR            S2, [R4,#4]
      VSTR            S4, [R4,#8]
  __asm { VSTR            S0, [R4,#0xC] }
  return result;
}


int __fastcall FullScreenEffectRenderer::_getCubeFor(int a1, int a2, __int64 a3)
{
  int v3; // r4@1
  unsigned int v4; // r5@1
  unsigned int v5; // r6@1
  int v6; // r8@1
  int v7; // r0@1
  int v8; // r11@2
  int v9; // r9@2
  bool v10; // zf@3
  int v11; // r10@6
  bool v12; // zf@9
  int v13; // r4@12
  int v14; // r6@14
  int v15; // r0@14
  int v16; // r5@15
  int v17; // r4@18
  int v18; // r1@18
  int v20; // [sp+8h] [bp-A0h]@1
  unsigned __int64 *v21; // [sp+Ch] [bp-9Ch]@1
  __int64 v22; // [sp+10h] [bp-98h]@1
  int v23; // [sp+18h] [bp-90h]@1
  char v24; // [sp+1Ch] [bp-8Ch]@18
  char v25; // [sp+1Dh] [bp-8Bh]@18
  char v26; // [sp+20h] [bp-88h]@18

  v22 = a3;
  v3 = a1;
  v23 = a2;
  v20 = *(_DWORD *)(a1 + 8);
  v21 = (unsigned __int64 *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 12);
  v5 = *(_WORD *)a3;
  v6 = v5 % *(_DWORD *)(a1 + 12);
  v7 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v6);
  if ( !v7 )
    goto LABEL_13;
  v8 = *(_DWORD *)v7;
  v9 = *(_DWORD *)(*(_DWORD *)v7 + 108);
  while ( 1 )
  {
    v10 = v9 == v5;
    if ( v9 == v5 )
      v10 = v5 == *(_WORD *)(v8 + 4);
    if ( v10 )
      break;
    v11 = *(_DWORD *)v8;
    if ( *(_DWORD *)v8 )
    {
      v9 = *(_DWORD *)(v11 + 108);
      v7 = v8;
      v8 = *(_DWORD *)v8;
      if ( *(_DWORD *)(v11 + 108) % v4 == v6 )
        continue;
    }
  }
  v12 = v7 == 0;
  if ( v7 )
    v7 = *(_DWORD *)v7;
    v12 = v7 == 0;
  if ( v12 )
LABEL_13:
    if ( *(_DWORD *)(v3 + 20) >= 0x15u )
      v14 = *(_DWORD *)(v3 + 16);
      v15 = v20;
      if ( v14 )
      {
        do
        {
          v16 = *(_DWORD *)v14;
          mce::Mesh::~Mesh((mce::Mesh *)(v14 + 8));
          operator delete((void *)v14);
          v14 = v16;
        }
        while ( v16 );
        v4 = *(_QWORD *)(v3 + 8) >> 32;
        v15 = *(_QWORD *)(v3 + 8);
      }
      _aeabi_memclr4(v15, 4 * v4);
      *(_DWORD *)(v3 + 16) = 0;
      *(_DWORD *)(v3 + 20) = 0;
    v17 = std::__detail::_Map_base<FullBlock,std::pair<FullBlock const,mce::Mesh>,std::allocator<std::pair<FullBlock const,mce::Mesh>>,std::__detail::_Select1st,std::equal_to<FullBlock>,std::hash<FullBlock>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            v21,
            (_WORD *)v22);
    v24 = *(_BYTE *)v22;
    v25 = *(_BYTE *)(v22 + 1);
    FullScreenEffectRenderer::_createCubeFor((int)&v26, v18, v23, (FullBlock *)&v24, SHIDWORD(v22));
    v13 = mce::Mesh::operator=(v17, (int)&v26);
    mce::Mesh::~Mesh((mce::Mesh *)&v26);
  else
    v13 = v7 + 8;
  return v13;
}
