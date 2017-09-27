

signed int __fastcall LevelRendererPlayer::checkPosForOneToOneClip(LevelRendererPlayer *this, const Vec3 *_R1)
{
  signed int result; // r0@1

  __asm
  {
    VLDR            S0, [R1]
    VLDR            S2, [R1,#4]
  }
  _R0 = *(_DWORD *)(*((_DWORD *)this + 720) + 1576);
    VLDR            S4, [R1,#8]
    VLDR            S6, [R0,#0x1D0]
    VLDR            S8, [R0,#0x1E0]
    VMUL.F32        S0, S0, S6
    VLDR            S12, [R0,#0x200]
    VMUL.F32        S2, S2, S8
    VLDR            S10, [R0,#0x1F0]
  result = 0;
    VMUL.F32        S4, S4, S10
    VADD.F32        S0, S0, S12
    VADD.F32        S0, S0, S2
    VMOV.F32        S2, #-1.0
    VADD.F32        S0, S0, S4
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    result = 1;
  return result;
}


int __fastcall LevelRendererPlayer::tick(LevelRendererPlayer *this)
{
  LevelRendererPlayer *v1; // r4@1
  LocalPlayer *v2; // r0@1
  int v9; // r0@3
  int v10; // r6@3
  __int64 v11; // kr00_8@3
  int v12; // r8@3
  int v13; // r9@3
  int v14; // r10@3
  int v15; // r0@3

  v1 = this;
  LevelRendererCamera::tick(this);
  *((_DWORD *)v1 + 675) = *((_DWORD *)v1 + 674);
  *((_DWORD *)v1 + 677) = *((_DWORD *)v1 + 676);
  *((_DWORD *)v1 + 679) = *((_DWORD *)v1 + 678);
  *((_DWORD *)v1 + 681) = *((_DWORD *)v1 + 680);
  *((_DWORD *)v1 + 683) = *((_DWORD *)v1 + 682);
  v2 = (LocalPlayer *)ClientInstance::getCameraEntity(*((ClientInstance **)v1 + 718));
  if ( v2 == *((LocalPlayer **)v1 + 719) )
  {
    _R5 = (int)v1 + 2688;
    *((_DWORD *)v1 + 673) = *((_DWORD *)v1 + 672);
    _R0 = LocalPlayer::getFieldOfViewModifier(v2);
    __asm
    {
      VLDR            S0, [R5]
      VMOV            S2, R0
      VMOV.F32        S4, #0.5
      VSUB.F32        S2, S2, S0
      VMUL.F32        S2, S2, S4
      VADD.F32        S0, S2, S0
      VSTR            S0, [R5]
    }
  }
  v9 = ClientInstance::getCameraTargetEntity(*((ClientInstance **)v1 + 718));
  v10 = *(_DWORD *)(v9 + 80);
  v11 = *(_QWORD *)(v9 + 72);
  v12 = *(_DWORD *)(v9 + 108);
  v13 = *(_DWORD *)(v9 + 112);
  v14 = *(_DWORD *)(v9 + 116);
  v15 = LocalPlayer::isFlying(*((LocalPlayer **)v1 + 719));
  return VrComfortMove::tick((int)v1 + 2192, v12, v13, v14, v11, SHIDWORD(v11), v10, v15);
}


void __fastcall LevelRendererPlayer::renderNameTags(LevelRendererPlayer *this, BaseEntityRenderContext *a2)
{
  LevelRendererPlayer::renderNameTags(this, a2);
}


LevelRendererPlayer *__fastcall LevelRendererPlayer::computeCameraPos(LevelRendererPlayer *this, float a2)
{
  LevelRendererPlayer *v2; // r4@1
  Entity *v8; // r6@1
  Level *v9; // r0@2
  int v10; // r0@2
  float v12; // r3@4
  int v13; // r0@5
  int v14; // r8@6
  Options *v15; // r0@7
  LevelRendererPlayer *result; // r0@9
  Options *v18; // r0@10
  __int64 v19; // kr00_8@11
  int v20; // r7@11
  Options *v21; // r0@11
  int v22; // r0@11
  int v26; // [sp+14h] [bp-64h]@11
  int v27; // [sp+18h] [bp-60h]@11
  int v28; // [sp+1Ch] [bp-5Ch]@11
  int v29; // [sp+20h] [bp-58h]@5
  int v30; // [sp+24h] [bp-54h]@5
  int v31; // [sp+28h] [bp-50h]@5
  int v32; // [sp+2Ch] [bp-4Ch]@4
  int v33; // [sp+30h] [bp-48h]@9
  int v34; // [sp+34h] [bp-44h]@9
  float v35; // [sp+38h] [bp-40h]@7
  float v38; // [sp+44h] [bp-34h]@7

  v2 = this;
  _R5 = LODWORD(a2);
  __asm { VMOV            S16, R5 }
  v8 = (Entity *)ClientInstance::getCameraEntity(*((ClientInstance **)this + 718));
  if ( Entity::getRide(v8) )
  {
    v9 = (Level *)Entity::getLevel(v8);
    v10 = Level::isClientSide(v9);
    __asm { VMOV.F32        S0, #1.0 }
    if ( v10 )
      __asm { VMOVNE.F32      S16, S0 }
  }
  __asm { VMOV            R2, S16 }
  Entity::getInterpolatedPosition((Entity *)&v32, *(float *)&v8, _R2);
  if ( ClientInstance::isRealityFullVRMode(*((ClientInstance **)v2 + 718)) == 1 )
    v13 = ClientInstance::getHoloInput(*((ClientInstance **)v2 + 718));
    HolographicPlatform::getTransformTranslation((int)&v29, v13, 16, 1, 14);
    *((_DWORD *)v2 + 137) = v29;
    *((_DWORD *)v2 + 138) = v30;
    *((_DWORD *)v2 + 139) = v31;
    if ( Entity::getRide(v8) )
    {
      v14 = 0;
    }
    else
      v18 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v2 + 718));
      v14 = Options::getVRLinearJump(v18);
    v19 = *(_QWORD *)&v32;
    v20 = v34;
    v21 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v2 + 718));
    v22 = Options::getVRLinearMotion(v21);
    VrComfortMove::getRenderPosition(COERCE_FLOAT(&v26), (int)v2 + 2192, _R5, v19, SHIDWORD(v19), v20, v22, v14);
    _R0 = v26;
    *((_DWORD *)v2 + 140) = v26;
    _R1 = v27;
    *((_DWORD *)v2 + 141) = v27;
    __asm { VMOV            S0, R0 }
    _R2 = v28;
    *((_DWORD *)v2 + 142) = v28;
    __asm
      VMOV            S8, R1
      VLDR            S2, [SP,#0x78+var_4C]
      VLDR            S4, [SP,#0x78+var_48]
      VSUB.F32        S0, S0, S2
      VLDR            S6, [SP,#0x78+var_44]
      VMOV            S2, R2
      VSUB.F32        S4, S8, S4
      VSUB.F32        S2, S2, S6
      VSTR            S0, [R0]
      VSTR            S4, [R0]
    result = (LevelRendererPlayer *)((char *)v2 + 2188);
    __asm { VSTR            S2, [R0] }
  else
    Entity::getViewVector((Entity *)&v38, *(float *)&v8, *(float *)&_R5, v12);
    Entity::getAttachPos((AABB *)&v35, (int)v8, 3, _R5);
    v15 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v2 + 718));
    Options::getPlayerViewPerspective(v15);
      VLDR            S0, [SP,#0x78+var_34]
      VLDR            S2, [SP,#0x78+var_30]
    _R0 = (int)v2 + 2736;
    __asm { VLDR            S4, [SP,#0x78+var_2C] }
    if ( !_ZF )
      __asm
      {
        VNEGNE.F32      S4, S4
        VNEGNE.F32      S2, S2
        VNEGNE.F32      S0, S0
      }
      VLDR            S6, [R0]
      VLDR            S8, [SP,#0x78+var_3C]
      VLDR            S10, [SP,#0x78+var_38]
      VMUL.F32        S2, S6, S2
      VMUL.F32        S4, S6, S4
      VMUL.F32        S0, S6, S0
      VLDR            S6, [SP,#0x78+var_40]
      VADD.F32        S2, S8, S2
      VADD.F32        S4, S10, S4
      VADD.F32        S0, S6, S0
      VSTR            S0, [R4,#0x224]
      VSTR            S2, [R4,#0x228]
      VSTR            S4, [R4,#0x22C]
    *((_DWORD *)v2 + 140) = v32;
    *((_DWORD *)v2 + 141) = v33;
    *((_DWORD *)v2 + 142) = v34;
    result = 0;
    *((_DWORD *)v2 + 545) = 0;
    *((_DWORD *)v2 + 546) = 0;
    *((_DWORD *)v2 + 547) = 0;
  return result;
}


int __fastcall LevelRendererPlayer::blockCanHaveCracksOverlay(LevelRendererPlayer *this, const Block *a2)
{
  LevelRendererPlayer *v2; // r5@1
  Block *v3; // r8@1
  BlockGraphics *v4; // r6@1
  int v5; // r0@1
  bool v6; // zf@1
  signed int v7; // r4@1
  char *v8; // r0@7
  int v9; // r6@7
  int v10; // r0@8
  Entity *v11; // r4@8
  BlockSource *v12; // r7@8
  const ItemInstance *v13; // r0@8
  int *v14; // r0@10
  int v16; // [sp+4h] [bp-24h]@7
  int v17; // [sp+8h] [bp-20h]@7
  int v18; // [sp+Ch] [bp-1Ch]@7

  v2 = this;
  v3 = a2;
  v4 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)a2 + 4)];
  v5 = Block::getRenderLayer(a2);
  v6 = v4 == 0;
  v7 = 0;
  if ( v4 )
    v6 = v5 == 9;
  if ( !v6 )
  {
    v7 = 0;
    if ( BlockGraphics::getBlockShape(v4) != -1 && BlockGraphics::getBlockShape(v4) != 22 )
      v7 = 1;
  }
  v8 = Level::getHitResult(*((Level **)v2 + 722));
  v9 = 0;
  v16 = *((_DWORD *)v8 + 2);
  v17 = *((_DWORD *)v8 + 3);
  v18 = *((_DWORD *)v8 + 4);
  if ( v7 == 1 )
    v10 = Entity::getRegion(*((Entity **)v2 + 719));
    v11 = (Entity *)*((_DWORD *)v2 + 719);
    v12 = (BlockSource *)v10;
    v13 = (const ItemInstance *)Player::getSelectedItem(*((Player **)v2 + 719));
    v9 = BlockSource::checkBlockDestroyPermissions(v12, v11, (const BlockPos *)&v16, v13, 0);
  if ( !(*(int (**)(void))(**((_DWORD **)v2 + 719) + 648))() )
    v14 = (int *)Block::getMaterial(v3);
    v9 &= Material::isType(v14, 33) ^ 1;
  return v9;
}


void __fastcall LevelRendererPlayer::preRenderUpdate(int a1, int a2, int a3)
{
  LevelRendererPlayer::preRenderUpdate(a1, a2, a3);
}


int __fastcall LevelRendererPlayer::getFov(LevelRendererPlayer *this, float _R1, int a3)
{
  LevelRendererPlayer *v7; // r4@1
  Option *v8; // r5@2
  Mob *v14; // r5@10
  int result; // r0@19
  float v19; // [sp+0h] [bp-40h]@13

  __asm { VMOV            S16, R1 }
  v7 = this;
  if ( a3 == 1 )
  {
    v8 = (Option *)Options::get(*(_DWORD *)(*((_DWORD *)this + 720) + 4500), 31);
    _R6 = Option::getFloat(v8);
    _R7 = Option::getFloatMax(v8);
    _R0 = Option::getFloatMin(v8);
    __asm { VMOV            S4, R6 }
    _R1 = (int)v7 + 2692;
    __asm
    {
      VMOV            S6, R0
      VLDR            S0, [R1]
    }
    _R1 = (int)v7 + 2688;
      VCMPE.F32       S4, S6
      VMRS            APSR_nzcv, FPSCR
      VMOV            S8, R7
      VLDR            S2, [R1]
      VCMPE.F32       S4, S8
      VSUB.F32        S2, S2, S0
      VMUL.F32        S2, S2, S16
      VADD.F32        S0, S2, S0
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S6, S4 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVGT.F32      S6, S8 }
    __asm { VMUL.F32        S0, S0, S6 }
  }
  else
    __asm { VLDR            S0, =70.0 }
  __asm
    VLDR            S2, =0.85714
    VMUL.F32        S18, S0, S2
  if ( !*((_BYTE *)v7 + 1232) )
    __asm { VMOVEQ.F32      S18, S0 }
  v14 = (Mob *)ClientInstance::getCameraEntity(*((ClientInstance **)v7 + 718));
  if ( Entity::hasCategory((int)v14, 1) == 1 && Mob::getHealth(v14) <= 0 )
    _R0 = (int)v14 + 3448;
      VLDR            S0, =500.0
      VLDR            S2, [R0]
      VADD.F32        S0, S16, S0
      VCVT.F32.S32    S2, S2
      VADD.F32        S0, S0, S2
      VLDR            S2, =-1000.0
      VDIV.F32        S0, S2, S0
      VMOV.F32        S2, #3.0
      VDIV.F32        S18, S18, S0
  _R0 = (int)v7 + 2696;
  __asm { VLDR            S20, [R0] }
  _R0 = (int)v7 + 2700;
  __asm { VLDR            S22, [R0] }
  ClientInstance::getNormalizedViewportSize((ClientInstance *)&v19, *((_DWORD *)v7 + 718));
    VSUB.F32        S4, S20, S22
    VLDR            S0, [SP,#0x40+var_40]
    VLDR            S2, [SP,#0x40+var_3C]
    VADD.F32        S6, S22, S18
    VLDR            S8, =130.0
    VDIV.F32        S0, S2, S0
    VMUL.F32        S2, S4, S16
    VMOV.F32        S4, #30.0
    VADD.F32        S2, S6, S2
    VMOV.F32        S6, #1.0
    VCMPE.F32       S2, S4
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S0, S6
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S4, S2 }
    VCMPE.F32       S2, S8
    __asm { VMOVGT.F32      S0, S6 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S4, S8 }
    VMUL.F32        S0, S0, S4
    VMOV            R0, S0
  return result;
}


int __fastcall LevelRendererPlayer::LevelRendererPlayer(int a1, Entity *a2, int a3, int a4, int a5, Entity *a6, int a7, __int64 *a8, int a9, int a10)
{
  int v10; // r4@1
  int v11; // r11@1
  int v12; // r8@1
  ClientInstance *v13; // r9@1
  BlockSource *v14; // r6@1
  int v15; // r7@1
  int v16; // r0@1
  double v17; // r0@1
  double v18; // r0@1
  int v19; // r7@3
  void *v20; // r6@3
  unsigned int v21; // r0@4
  int v22; // r7@6
  void *v23; // r6@6
  void *v24; // r0@7
  void *v25; // r0@8
  void *v26; // r0@9
  void *v27; // r0@10
  void *v28; // r0@11
  void *v29; // r0@12
  void *v30; // r0@13
  void *v31; // r0@14
  __int64 *v32; // r5@15
  int v33; // r1@15
  int v34; // r0@15
  __int64 v35; // kr00_8@17
  unsigned int *v36; // r0@18
  unsigned int v37; // r1@20
  int v38; // r6@23
  unsigned int *v39; // r1@24
  unsigned int v40; // r0@26
  unsigned int *v41; // r7@30
  unsigned int v42; // r0@32
  void (*v43)(void); // r2@37
  __int64 v44; // kr08_8@37
  int v45; // r6@37
  void (*v46)(void); // r3@37
  unsigned int *v48; // r2@43
  signed int v49; // r1@45
  unsigned int *v50; // r2@47
  signed int v51; // r1@49
  unsigned int *v52; // r2@51
  signed int v53; // r1@53
  unsigned int *v54; // r2@55
  signed int v55; // r1@57
  unsigned int *v56; // r2@59
  signed int v57; // r1@61
  unsigned int *v58; // r2@63
  signed int v59; // r1@65
  unsigned int *v60; // r2@67
  signed int v61; // r1@69
  unsigned int *v62; // r2@71
  signed int v63; // r1@73
  __int64 v64; // [sp+28h] [bp-98h]@37
  void (*v65)(void); // [sp+30h] [bp-90h]@37
  int v66; // [sp+34h] [bp-8Ch]@37
  __int64 v67; // [sp+3Ch] [bp-84h]@17
  int v68; // [sp+44h] [bp-7Ch]@15
  int v69; // [sp+4Ch] [bp-74h]@14
  int v70; // [sp+54h] [bp-6Ch]@13
  int v71; // [sp+5Ch] [bp-64h]@12
  int v72; // [sp+64h] [bp-5Ch]@11
  int v73; // [sp+6Ch] [bp-54h]@10
  int v74; // [sp+74h] [bp-4Ch]@9
  int v75; // [sp+7Ch] [bp-44h]@8
  int v76; // [sp+84h] [bp-3Ch]@7
  int v77; // [sp+88h] [bp-38h]@37
  int v78; // [sp+8Ch] [bp-34h]@37
  void (*v79)(void); // [sp+90h] [bp-30h]@37
  int v80; // [sp+94h] [bp-2Ch]@37

  v10 = a1;
  v11 = a4;
  v12 = a3;
  v13 = a2;
  v14 = (BlockSource *)Entity::getRegion(a6);
  v15 = ClientInstance::getResourcePackManager(v13);
  v16 = ClientInstance::getTextures(v13);
  LevelRendererCamera::LevelRendererCamera(v10, (LevelRenderer *)a5, v14, v15, v16);
  *(_DWORD *)v10 = &off_26DC9E0;
  *(_DWORD *)(v10 + 4) = &off_26DCA50;
  *(_DWORD *)(v10 + 2180) = 0;
  *(_DWORD *)(v10 + 2184) = 0;
  *(_DWORD *)(v10 + 2188) = 0;
  *(_DWORD *)(v10 + 2192) = 3;
  *(_BYTE *)(v10 + 2196) = 1;
  *(_DWORD *)(v10 + 2632) = 0;
  *(_DWORD *)(v10 + 2636) = 0;
  _aeabi_memclr4(v10 + 2200, 424);
  *(_DWORD *)(v10 + 2640) = 1065353216;
  *(_DWORD *)(v10 + 2644) = 0;
  LODWORD(v17) = v10 + 2640;
  v18 = COERCE_DOUBLE(__PAIR__(10, sub_119C844(v17)));
  *(_DWORD *)(v10 + 2628) = LODWORD(v18);
  if ( LODWORD(v18) == 1 )
  {
    v20 = (void *)(v10 + 2648);
    *(_DWORD *)(v10 + 2648) = 0;
  }
  else
    if ( LODWORD(v18) >= 0x40000000 )
      sub_119C874();
    v19 = 4 * LODWORD(v18);
    v20 = operator new(4 * LODWORD(v18));
    _aeabi_memclr4(v20, v19);
  *(_DWORD *)(v10 + 2624) = v20;
  *(_DWORD *)(v10 + 2660) = 0;
  *(_DWORD *)(v10 + 2664) = 0;
  *(_DWORD *)(v10 + 2668) = 1065353216;
  *(_DWORD *)(v10 + 2672) = 0;
  LODWORD(v18) = v10 + 2668;
  v21 = sub_119C844(v18);
  *(_DWORD *)(v10 + 2656) = v21;
  if ( v21 == 1 )
    v23 = (void *)(v10 + 2676);
    *(_DWORD *)(v10 + 2676) = 0;
    if ( v21 >= 0x40000000 )
    v22 = 4 * v21;
    v23 = operator new(4 * v21);
    _aeabi_memclr4(v23, v22);
  *(_DWORD *)(v10 + 2652) = v23;
  *(_DWORD *)(v10 + 2684) = 0;
  *(_DWORD *)(v10 + 2680) = 0;
  *(_DWORD *)(v10 + 2688) = 1065353216;
  *(_DWORD *)(v10 + 2692) = 1065353216;
  *(_DWORD *)(v10 + 2696) = 0;
  *(_DWORD *)(v10 + 2700) = 0;
  *(_DWORD *)(v10 + 2704) = 1082130432;
  *(_DWORD *)(v10 + 2708) = 1082130432;
  *(_DWORD *)(v10 + 2712) = 0;
  *(_DWORD *)(v10 + 2716) = 0;
  *(_DWORD *)(v10 + 2720) = 0;
  *(_DWORD *)(v10 + 2724) = 0;
  *(_DWORD *)(v10 + 2728) = 0;
  *(_DWORD *)(v10 + 2732) = 0;
  *(_DWORD *)(v10 + 2736) = 0;
  sub_119C884((void **)&v76, "selection_overlay_block_entity");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v10 + 2740),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v76);
  v24 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v76 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
    }
    else
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
  sub_119C884((void **)&v75, "selection_overlay");
    (mce::MaterialPtr *)(v10 + 2752),
    &v75);
  v25 = (void *)(v75 - 12);
  if ( (int *)(v75 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v75 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  sub_119C884((void **)&v74, "selection_overlay_opaque");
    (mce::MaterialPtr *)(v10 + 2764),
    &v74);
  v26 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v74 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v26);
  sub_119C884((void **)&v73, "selection_overlay_double_sided");
    (mce::MaterialPtr *)(v10 + 2776),
    &v73);
  v27 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v73 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
  sub_119C884((void **)&v72, "cracks_overlay");
    (mce::MaterialPtr *)(v10 + 2788),
    &v72);
  v28 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v72 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
  sub_119C884((void **)&v71, "cracks_overlay_alpha_test");
    (mce::MaterialPtr *)(v10 + 2800),
    &v71);
  v29 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v71 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v29);
  sub_119C884((void **)&v70, "cracks_overlay_tile_entity");
    (mce::MaterialPtr *)(v10 + 2812),
    &v70);
  v30 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v70 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
  sub_119C884((void **)&v69, "selection_box");
    (mce::MaterialPtr *)(v10 + 2824),
    &v69);
  v31 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v69 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v31);
  *(_DWORD *)(v10 + 2836) = a10;
  *(_DWORD *)(v10 + 2840) = 0;
  *(_DWORD *)(v10 + 2844) = 0;
  *(_DWORD *)(v10 + 2848) = 0;
  *(_DWORD *)(v10 + 2852) = &unk_28898CC;
  *(_DWORD *)(v10 + 2868) = 0;
  *(_DWORD *)(v10 + 2864) = 0;
  *(_DWORD *)(v10 + 2860) = 0;
  *(_DWORD *)(v10 + 2856) = 0;
  *(_DWORD *)(v10 + 2872) = v13;
  *(_DWORD *)(v10 + 2876) = a6;
  *(_DWORD *)(v10 + 2880) = a5;
  *(_DWORD *)(v10 + 2884) = a7;
  v32 = (__int64 *)(v10 + 2896);
  *(_DWORD *)(v10 + 2888) = v11;
  *(_DWORD *)(v10 + 2892) = a9;
  *(_DWORD *)(v10 + 2904) = 0;
  std::make_unique<WeatherRenderer,LocalPlayer &,std::shared_ptr<Options> &,mce::TextureGroup &,LevelRenderer &>(
    &v68,
    (int)a6,
    v12,
    *(_DWORD *)(a5 + 12),
    a5);
  v33 = v68;
  v68 = 0;
  v34 = *(_DWORD *)(v10 + 1228);
  *(_DWORD *)(v10 + 1228) = v33;
  if ( v34 )
    (*(void (**)(void))(*(_DWORD *)v34 + 4))();
  v35 = *a8;
  v67 = v35;
  if ( HIDWORD(v35) )
    v36 = (unsigned int *)(HIDWORD(v35) + 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 + 1, v36) );
      ++*v36;
  LevelRendererPlayer::reinit(v10, (int *)&v67);
  v38 = HIDWORD(v67);
  if ( HIDWORD(v67) )
    v39 = (unsigned int *)(HIDWORD(v67) + 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 == 1 )
      v41 = (unsigned int *)(v38 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v38 + 8))(v38);
      if ( &pthread_create )
      {
        __dmb();
        do
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
      }
      else
        v42 = (*v41)--;
      if ( v42 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v38 + 12))(v38);
  Easing::getEasingFunc((int)&v64, 5);
  v43 = v65;
  v65 = 0;
  v44 = *v32;
  v45 = v66;
  v77 = *v32;
  v78 = HIDWORD(v44);
  *v32 = v64;
  v79 = *(void (**)(void))(v10 + 2904);
  v46 = v79;
  *(_DWORD *)(v10 + 2904) = v43;
  v80 = *(_DWORD *)(v10 + 2908);
  *(_DWORD *)(v10 + 2908) = v45;
  if ( v46 )
    v46();
    if ( v65 )
      v65();
  return v10;
}


BlockEntityRenderDispatcher *__fastcall LevelRendererPlayer::_renderHighlightSelection(LevelRendererPlayer *this, BaseEntityRenderContext *a2, BlockSource *a3, const Block *a4, const BlockPos *a5, int a6, int a7)
{
  BaseEntityRenderContext *v7; // r8@1
  Block *v9; // r11@1
  BlockSource *v10; // r4@1
  int v11; // r0@1
  int v12; // r10@1
  Tessellator *v13; // r5@1
  ShaderColor *v14; // r0@1
  BlockTessellator *v15; // r7@1
  int v16; // r1@1
  int v17; // r2@1
  int v18; // r0@1
  int v22; // r0@1
  unsigned int v23; // r0@1
  int v25; // r2@5
  BlockEntityRenderDispatcher *result; // r0@6
  BlockEntity *v27; // r5@6
  BlockEntityRenderDispatcher *v28; // r0@7
  const Block *v29; // r0@10
  int v30; // [sp+18h] [bp-58h]@9
  int v31; // [sp+1Ch] [bp-54h]@9
  int v32; // [sp+20h] [bp-50h]@9
  float v33; // [sp+24h] [bp-4Ch]@1
  unsigned int v34; // [sp+30h] [bp-40h]@1
  int v35; // [sp+34h] [bp-3Ch]@1
  unsigned int v36; // [sp+38h] [bp-38h]@1
  int v37; // [sp+3Ch] [bp-34h]@1
  signed int v38; // [sp+40h] [bp-30h]@1
  int v39; // [sp+44h] [bp-2Ch]@1
  int v40; // [sp+48h] [bp-28h]@1

  v7 = a2;
  _R6 = this;
  v9 = a4;
  v10 = a3;
  v11 = BaseEntityRenderContext::getScreenContext(a2);
  v12 = v11;
  v13 = *(Tessellator **)(v11 + 40);
  v14 = *(ShaderColor **)(v11 + 48);
  v37 = 1059481190;
  v38 = 1059481190;
  v39 = 1059481190;
  v40 = 1065353216;
  ShaderColor::setColor(v14, (const Color *)&v37);
  Tessellator::begin(v13, 0, 0);
  Tessellator::noColor(v13);
  v15 = (BlockTessellator *)LevelRenderer::getBlockRenderer(*((LevelRenderer **)_R6 + 720));
  v16 = *((_DWORD *)a5 + 1);
  v17 = *((_DWORD *)a5 + 2);
  v34 = *(_DWORD *)a5 & 0xFFFFFFF0;
  v35 = v16 & 0xFFF0;
  v36 = v17 & 0xFFFFFFF0;
  BlockTessellator::resetCache(v15, (const BlockPos *)&v34, v10);
  v18 = Block::getRenderLayer(v9);
  BlockTessellator::setRenderLayer(v15, v18);
  __asm
  {
    VLDR            S0, [R6,#0x230]
    VLDR            S2, [R6,#0x234]
    VLDR            S4, [R6,#0x238]
    VNEG.F32        S0, S0
    VNEG.F32        S2, S2
    VNEG.F32        S4, S4
    VSTR            S0, [SP,#0x70+var_4C]
    VSTR            S2, [SP,#0x70+var_48]
    VSTR            S4, [SP,#0x70+var_44]
  }
  Tessellator::setOffset(v13, (const Vec3 *)&v33);
  v22 = BlockSource::getData(v10, a5);
  BlockTessellator::tessellateInWorld(v15, v13, v9, a5, v22, 0);
  Tessellator::setOffset(v13, (const Vec3 *)&Vec3::ZERO);
  v23 = (*(int (__fastcall **)(Block *, BlockSource *, const BlockPos *))(*(_DWORD *)v9 + 408))(v9, v10, a5);
  _ZF = v23 == 4;
  if ( v23 == 4 )
    _ZF = a7 == 0;
  if ( _ZF )
    v25 = (int)_R6 + 2764;
    goto LABEL_6;
  if ( v23 > 9 )
    goto LABEL_24;
  if ( (1 << v23) & 0x248 )
  if ( (1 << v23) & 0x21 )
    v25 = (int)_R6 + 2776;
  if ( (1 << v23) & 0x90 )
    if ( a7 )
      v25 = (int)_R6 + 2776;
  else
LABEL_24:
    v25 = (int)_R6 + 2752;
LABEL_6:
  Tessellator::draw((char *)v13, v12, v25, *((_DWORD *)_R6 + 720) + 1416);
  result = (BlockEntityRenderDispatcher *)BlockSource::getBlockEntity(v10, a5);
  v27 = result;
  if ( result )
    v28 = (BlockEntityRenderDispatcher *)BaseEntityRenderContext::getBlockEntityRenderDispatcher(v7);
    result = BlockEntityRenderDispatcher::render(
               v28,
               v7,
               v10,
               v27,
               0,
               (LevelRendererPlayer *)((char *)_R6 + 2740),
               (const mce::TexturePtr *)&mce::TexturePtr::NONE,
               0);
  if ( a6 == 1 )
    v30 = 0;
    v31 = 0;
    v32 = 0;
    result = (BlockEntityRenderDispatcher *)(*(int (__fastcall **)(Block *, BlockSource *, const BlockPos *, int *))(*(_DWORD *)v9 + 260))(
                                              v9,
                                              v10,
                                              a5,
                                              &v30);
    if ( result == (BlockEntityRenderDispatcher *)1 )
    {
      v29 = (const Block *)BlockSource::getBlock(v10, (const BlockPos *)&v30);
      result = LevelRendererPlayer::_renderHighlightSelection(_R6, v7, v10, v29, (const BlockPos *)&v30, 0, a7);
    }
  return result;
}


LevelRendererPlayer *__fastcall LevelRendererPlayer::~LevelRendererPlayer(LevelRendererPlayer *this)
{
  LevelRendererPlayer *v1; // r10@1
  void (*v2)(void); // r3@1
  void *v3; // r5@3
  void *v4; // r7@3
  unsigned int *v5; // r2@5
  signed int v6; // r1@7
  int *v7; // r0@13
  void *v8; // r0@18
  void *v9; // r4@19
  char *v10; // r0@20
  void *v11; // r0@23
  void *v12; // r4@24
  char *v13; // r0@25

  v1 = this;
  *(_DWORD *)this = &off_26DC9E0;
  *((_DWORD *)this + 1) = &off_26DCA50;
  v2 = (void (*)(void))*((_DWORD *)this + 726);
  if ( v2 )
    v2();
  TextureAtlasItem::~TextureAtlasItem((LevelRendererPlayer *)((char *)v1 + 2852));
  v3 = (void *)*((_DWORD *)v1 + 710);
  v4 = (void *)*((_DWORD *)v1 + 711);
  if ( v3 != v4 )
  {
    do
    {
      v7 = (int *)(*(_DWORD *)v3 - 12);
      if ( v7 != &dword_28898C0 )
      {
        v5 = (unsigned int *)(*(_DWORD *)v3 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v7);
      }
      v3 = (char *)v3 + 24;
    }
    while ( v3 != v4 );
    v3 = (void *)*((_DWORD *)v1 + 710);
  }
  if ( v3 )
    operator delete(v3);
  mce::MaterialPtr::~MaterialPtr((LevelRendererPlayer *)((char *)v1 + 2824));
  mce::MaterialPtr::~MaterialPtr((LevelRendererPlayer *)((char *)v1 + 2812));
  mce::MaterialPtr::~MaterialPtr((LevelRendererPlayer *)((char *)v1 + 2800));
  mce::MaterialPtr::~MaterialPtr((LevelRendererPlayer *)((char *)v1 + 2788));
  mce::MaterialPtr::~MaterialPtr((LevelRendererPlayer *)((char *)v1 + 2776));
  mce::MaterialPtr::~MaterialPtr((LevelRendererPlayer *)((char *)v1 + 2764));
  mce::MaterialPtr::~MaterialPtr((LevelRendererPlayer *)((char *)v1 + 2752));
  mce::MaterialPtr::~MaterialPtr((LevelRendererPlayer *)((char *)v1 + 2740));
  v8 = (void *)*((_DWORD *)v1 + 665);
  if ( v8 )
      v9 = *(void **)v8;
      operator delete(v8);
      v8 = v9;
    while ( v9 );
  _aeabi_memclr4(*((_DWORD *)v1 + 663), 4 * *((_DWORD *)v1 + 664));
  *((_DWORD *)v1 + 665) = 0;
  *((_DWORD *)v1 + 666) = 0;
  v10 = (char *)*((_DWORD *)v1 + 663);
  if ( v10 && (char *)v1 + 2676 != v10 )
    operator delete(v10);
  v11 = (void *)*((_DWORD *)v1 + 658);
  if ( v11 )
      v12 = *(void **)v11;
      operator delete(v11);
      v11 = v12;
    while ( v12 );
  _aeabi_memclr4(*((_DWORD *)v1 + 656), 4 * *((_DWORD *)v1 + 657));
  *((_DWORD *)v1 + 658) = 0;
  *((_DWORD *)v1 + 659) = 0;
  v13 = (char *)*((_DWORD *)v1 + 656);
  if ( v13 && (char *)v1 + 2648 != v13 )
    operator delete(v13);
  LevelRendererCamera::~LevelRendererCamera(v1);
  return v1;
}


void __fastcall LevelRendererPlayer::playSound(float a1, float a2, int a3, int a4, int a5, int a6)
{
  LevelRendererPlayer::playSound(a1, a2, a3, a4, a5, a6);
}


GeometryPtr *__fastcall LevelRendererPlayer::bobPlayerCamera(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r4@1
  int v5; // r5@1
  Options *v6; // r0@2
  Options *v7; // r0@4
  GeometryPtr *result; // r0@4

  v3 = a1;
  v4 = a3;
  v5 = a2;
  if ( ClientInstance::isRealityFullVRMode(*(ClientInstance **)(a1 + 2872)) != 1
    || (v6 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(v3 + 2872)),
        Options::getVRUsesNormalHitEffect(v6) == 1) )
  {
    LevelRendererPlayer::bobHurt(v3, v5, v4);
  }
  v7 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(v3 + 2872));
  result = (GeometryPtr *)Options::getBobView(v7);
  if ( result == (GeometryPtr *)1 )
    result = j_j_j__ZN19LevelRendererPlayer7bobViewER6Matrixf(v3, v5, v4);
  return result;
}


int __fastcall LevelRendererPlayer::getNightVisionScale(LevelRendererPlayer *this, const Mob *a2, float a3)
{
  MobEffectInstance *v4; // r0@1
  float v6; // r1@2
  int result; // r0@3

  _R4 = a2;
  v4 = (MobEffectInstance *)Mob::getEffect(this, (const MobEffect *)MobEffect::NIGHT_VISION);
  if ( v4 )
  {
    _R0 = MobEffectInstance::getDuration(v4);
    if ( _R0 <= 200 )
    {
      __asm
      {
        VMOV            S2, R0
        VMOV            S0, R4
        VCVT.F32.S32    S2, S2
      }
      _R0 = &mce::Math::PI;
        VSUB.F32        S0, S2, S0
        VLDR            S2, =0.2
        VMUL.F32        S0, S0, S2
        VLDR            S2, [R0]
        VMOV            R0, S0
      _R0 = mce::Math::sin(_R0, v6);
        VLDR            S0, =0.3
        VMUL.F32        S0, S2, S0
        VLDR            S2, =0.7
        VADD.F32        S0, S0, S2
    }
    else
        VMOVGT.F32      S0, #1.0
        VMOVGT          R0, S0
  }
  else
    __asm
      VLDR            S0, =0.0
      VMOV            R0, S0
  return result;
}


int __fastcall LevelRendererPlayer::playSound(int result, int a2, int _R2, int _R3)
{
  __asm
  {
    VLDR            S2, [R0,#0x228]
    VLDR            S8, [R2,#4]
    VLDR            S4, [R0,#0x22C]
    VSUB.F32        S2, S8, S2
    VLDR            S10, [R2,#8]
    VMOV.F32        S8, #1.0
    VLDR            S0, [R0,#0x224]
    VSUB.F32        S4, S10, S4
    VLDR            S6, [R2]
    VMOV            S10, R3
    VSUB.F32        S0, S6, S0
    VMOV.F32        S6, #16.0
    VMUL.F32        S2, S2, S2
    VCMPE.F32       S10, S8
    VMRS            APSR_nzcv, FPSCR
    VMUL.F32        S4, S4, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S12, S10, S6
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S6, S12 }
    VMUL.F32        S2, S6, S6
    VCMPE.F32       S0, S2
  if ( _NF ^ _VF )
    result = (*(int (**)(void))(**(_DWORD **)(result + 2884) + 8))();
  return result;
}


int __fastcall LevelRendererPlayer::getForceFog(LevelRendererPlayer *this, const Entity *a2)
{
  Mob *v2; // r5@1
  int v3; // r4@2
  BlockSource *v4; // r0@6
  BlockSource *v5; // r5@6
  Dimension *v6; // r0@6
  Weather *v7; // r0@6
  int v9; // r0@6
  int v10; // r0@6
  int result; // r0@6

  v2 = a2;
  if ( *((_BYTE *)this + 1233) )
  {
    v3 = 1;
  }
  else if ( Entity::hasCategory((int)a2, 2) == 1 )
    v3 = Mob::hasEffect(v2, (const MobEffect *)MobEffect::BLINDNESS);
  else
    v3 = 0;
  v4 = (BlockSource *)Entity::getRegion(v2);
  v5 = v4;
  v6 = (Dimension *)BlockSource::getDimension(v4);
  v7 = (Weather *)Dimension::getWeather(v6);
  _R6 = Weather::getFogLevel(v7);
  v9 = BlockSource::getDimension(v5);
  v10 = (*(int (**)(void))(*(_DWORD *)v9 + 132))();
  __asm
    VLDR            S0, =0.05
    VMOV            S2, R6
  result = v10 ^ 1;
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    result = 1;
  if ( v3 )
  return result;
}


void __fastcall LevelRendererPlayer::preRenderUpdate(int a1, int a2, int a3)
{
  _DWORD *v4; // r10@1
  _DWORD *v5; // r0@1
  int v10; // r5@2
  _DWORD *v13; // r7@9
  _DWORD *v14; // r6@10
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  int *v17; // r0@19

  _R4 = a1;
  LevelRendererCamera::preRenderUpdate(a1, a2, a3);
  v4 = *(_DWORD **)(_R4 + 2840);
  v5 = *(_DWORD **)(_R4 + 2844);
  if ( v4 != v5 )
  {
    __asm { VMOV.F32        S16, #16.0 }
    v10 = -(signed int)v5;
    __asm { VMOV.F32        S18, #1.0 }
    _R6 = (int)(v4 + 5);
    do
    {
      __asm
      {
        VLDR            S0, [R6,#-4]
        VLDR            S2, [R6,#-0x10]
        VLDR            S8, [R4,#0x224]
        VCMPE.F32       S0, S18
        VLDR            S4, [R6,#-0xC]
        VLDR            S10, [R4,#0x228]
        VSUB.F32        S2, S2, S8
        VMRS            APSR_nzcv, FPSCR
        VMUL.F32        S8, S0, S16
        VSUB.F32        S4, S4, S10
        VLDR            S6, [R6,#-8]
        VLDR            S12, [R4,#0x22C]
        VMOV.F32        S10, S16
        VSUB.F32        S6, S6, S12
        VMUL.F32        S2, S2, S2
        VMUL.F32        S4, S4, S4
        VMUL.F32        S6, S6, S6
        VADD.F32        S2, S4, S2
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S10, S8 }
        VMUL.F32        S4, S10, S10
        VADD.F32        S2, S2, S6
        VCMPE.F32       S2, S4
      if ( _NF ^ _VF )
        __asm
        {
          VMOV            R3, S0
          VLDR            S0, [R6]
          VSTR            S0, [SP,#0x40+var_40]
        }
        (*(void (**)(void))(**(_DWORD **)(_R4 + 2884) + 8))();
      _R6 += 24;
    }
    while ( _R6 + v10 != 20 );
    v4 = *(_DWORD **)(_R4 + 2840);
    v13 = *(_DWORD **)(_R4 + 2844);
    if ( v13 != v4 )
      v14 = *(_DWORD **)(_R4 + 2840);
      do
        v17 = (int *)(*v14 - 12);
        if ( v17 != &dword_28898C0 )
          v15 = (unsigned int *)(*v14 - 4);
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
            j_j_j_j_j__ZdlPv_9_1(v17);
        v14 += 6;
      while ( v14 != v13 );
  }
  *(_DWORD *)(_R4 + 2844) = v4;
}


int __fastcall LevelRendererPlayer::getProjectionAspectRatio(LevelRendererPlayer *this)
{
  LevelRendererPlayer *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( ClientInstance::isLivingroomMode(*((ClientInstance **)this + 718)) == 1 )
  {
    result = (*(int (**)(void))(**((_DWORD **)v1 + 723) + 244))();
  }
  else
    _R0 = ClientInstance::getViewportInfo(*((ClientInstance **)v1 + 718));
    __asm
    {
      VLDR            S0, [R0]
      VLDR            S2, [R0,#4]
      VDIV.F32        S0, S0, S2
      VMOV            R0, S0
    }
  return result;
}


void __fastcall LevelRendererPlayer::renderHolographicCursor(int a1, float a2)
{
  int v2; // r4@1
  float v3; // r6@1
  void *v4; // r5@1
  void *v5; // r7@1
  int v6; // r0@2
  void *v7; // [sp+0h] [bp-20h]@1
  void *v8; // [sp+4h] [bp-1Ch]@1

  v2 = a1;
  v3 = a2;
  std::vector<HolographicPlatform::HoloCursorWorldParams,std::allocator<HolographicPlatform::HoloCursorWorldParams>>::vector(
    (int)&v7,
    (unsigned __int64 *)(*(_DWORD *)(a1 + 2892) + 560));
  v5 = v8;
  v4 = v7;
  if ( v7 != v8 )
  {
    do
    {
      v6 = ClientInstance::getHolosceneRenderer(*(ClientInstance **)(v2 + 2872));
      HolosceneRenderer::renderInWorldHoloCursor(v6, v3, (int)v4);
      v4 = (char *)v4 + 132;
    }
    while ( v5 != v4 );
    v4 = v7;
  }
  *(_DWORD *)(*(_DWORD *)(v2 + 2892) + 564) = *(_DWORD *)(*(_DWORD *)(v2 + 2892) + 560);
  if ( v4 )
    operator delete(v4);
}


int __fastcall LevelRendererPlayer::chooseOverlayMaterial(int a1, int a2, unsigned int a3)
{
  bool v3; // zf@1
  int v5; // r2@9

  v3 = a3 == 4;
  if ( a3 == 4 )
    v3 = a2 == 0;
  if ( v3 )
    return a1 + 2764;
  if ( a3 > 9 )
    return a1 + 2752;
  if ( (1 << a3) & 0x248 )
  if ( (1 << a3) & 0x21 )
    return a1 + 2776;
  if ( !((1 << a3) & 0x90) )
  v5 = a1 + 2764;
  if ( a2 )
    v5 = a1 + 2776;
  return v5;
}


void __fastcall LevelRendererPlayer::levelSoundEvent(float a1, signed int a2, int a3, unsigned int a4, unsigned int a5, int a6, int a7)
{
  LevelRendererPlayer::levelSoundEvent(a1, a2, a3, a4, a5, a6, a7);
}


int *__fastcall LevelRendererPlayer::addDestroyBlock(LevelRendererPlayer *this, const BlockPos *a2, float a3)
{
  __int64 v3; // r10@1
  unsigned int v4; // r4@1
  unsigned int v5; // r5@1
  int v6; // r6@1
  int *result; // r0@1
  int v8; // r9@2
  int v9; // r7@2
  int v10; // r1@4
  bool v11; // zf@4
  int v12; // r8@9
  void *v13; // r0@11
  bool v14; // zf@12
  LevelRendererPlayer *v15; // [sp+0h] [bp-30h]@1
  float v16; // [sp+4h] [bp-2Ch]@1
  int v17; // [sp+8h] [bp-28h]@1

  v15 = this;
  v16 = a3;
  v3 = *(_QWORD *)a2;
  v17 = *((_DWORD *)a2 + 2);
  v4 = *((_DWORD *)this + 664);
  v5 = 8976890 * v3 + 981131 * HIDWORD(v3) + v17;
  v6 = v5 % *((_DWORD *)this + 664);
  result = *(int **)(*((_DWORD *)this + 663) + 4 * v6);
  if ( !result )
    goto LABEL_11;
  v8 = *result;
  v9 = *(_DWORD *)(*result + 24);
  while ( 1 )
  {
    if ( v9 == v5 )
    {
      v10 = *(_DWORD *)(v8 + 4);
      v11 = (_DWORD)v3 == v10;
      if ( (_DWORD)v3 == v10 )
        v11 = HIDWORD(v3) == *(_DWORD *)(v8 + 8);
      if ( v11 && v17 == *(_DWORD *)(v8 + 12) )
        break;
    }
    v12 = *(_DWORD *)v8;
    if ( *(_DWORD *)v8 )
      v9 = *(_DWORD *)(v12 + 24);
      result = (int *)v8;
      v8 = *(_DWORD *)v8;
      if ( *(_DWORD *)(v12 + 24) % v4 == v6 )
        continue;
  }
  v14 = result == 0;
  if ( result )
    result = (int *)*result;
    v14 = result == 0;
  if ( v14 )
LABEL_11:
    v13 = operator new(0x1Cu);
    *(_DWORD *)v13 = 0;
    *(_QWORD *)((char *)v13 + 4) = v3;
    *((_DWORD *)v13 + 3) = v17;
    *((float *)v13 + 4) = v16;
    *((_DWORD *)v13 + 5) = 0;
    result = (int *)j_j_j__ZNSt10_HashtableI8BlockPosSt4pairIKS0_17BlockDestructInfoESaIS4_ENSt8__detail10_Select1stESt8equal_toIS0_ESt4hashIS0_ENS6_18_Mod_range_hashingENS6_20_Default_ranged_hashENS6_20_Prime_rehash_policyENS6_17_Hashtable_traitsILb1ELb0ELb1EEEE21_M_insert_unique_nodeEjjPNS6_10_Hash_nodeIS4_Lb1EEE(
                      (int)v15 + 2652,
                      v6,
                      8976890 * v3 + 981131 * HIDWORD(v3) + v17,
                      (int)v13);
  return result;
}


int __fastcall LevelRendererPlayer::getComfortRenderAdj(int result, int a2)
{
  __int64 v2; // r2@1
  int v3; // r1@1

  v2 = *(_QWORD *)(a2 + 2180);
  v3 = *(_DWORD *)(a2 + 2188);
  *(_QWORD *)result = v2;
  *(_DWORD *)(result + 8) = v3;
  return result;
}


const Entity *__fastcall LevelRendererPlayer::getCameraPosFromEntity(LevelRendererPlayer *this, const Entity *a2, float a3, float a4)
{
  int v4; // r6@1
  int v5; // r7@1
  const Entity *v6; // r5@1
  Options *v7; // r0@1
  const Entity *result; // r0@1
  float v13; // [sp+4h] [bp-2Ch]@1
  float v16; // [sp+10h] [bp-20h]@1

  v4 = LODWORD(a4);
  v5 = LODWORD(a3);
  v6 = a2;
  Entity::getViewVector((Entity *)&v16, a3, a4, a4);
  Entity::getAttachPos((AABB *)&v13, v5, 3, v4);
  v7 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v6 + 718));
  Options::getPlayerViewPerspective(v7);
  __asm
  {
    VLDR            S0, [SP,#0x30+var_20]
    VLDR            S2, [SP,#0x30+var_1C]
  }
  result = (const Entity *)((char *)v6 + 2736);
  __asm { VLDR            S4, [SP,#0x30+var_18] }
  if ( !_ZF )
    __asm
    {
      VNEGNE.F32      S4, S4
      VNEGNE.F32      S2, S2
      VNEGNE.F32      S0, S0
    }
    VLDR            S6, [R0]
    VLDR            S8, [SP,#0x30+var_28]
    VLDR            S10, [SP,#0x30+var_24]
    VMUL.F32        S2, S6, S2
    VMUL.F32        S4, S6, S4
    VMUL.F32        S0, S6, S0
    VLDR            S6, [SP,#0x30+var_2C]
    VADD.F32        S2, S8, S2
    VADD.F32        S4, S10, S4
    VADD.F32        S0, S6, S0
    VSTR            S0, [R4]
    VSTR            S2, [R4,#4]
    VSTR            S4, [R4,#8]
  return result;
}


signed int __fastcall LevelRendererPlayer::removeDestroyBlock(LevelRendererPlayer *this, const BlockPos *a2)
{
  return j_j_j__ZNSt10_HashtableI8BlockPosSt4pairIKS0_17BlockDestructInfoESaIS4_ENSt8__detail10_Select1stESt8equal_toIS0_ESt4hashIS0_ENS6_18_Mod_range_hashingENS6_20_Default_ranged_hashENS6_20_Prime_rehash_policyENS6_17_Hashtable_traitsILb1ELb0ELb1EEEE8_M_eraseESt17integral_constantIbLb1EERS2_(
           (unsigned __int64 *)((char *)this + 2652),
           (int)a2);
}


int __fastcall LevelRendererPlayer::addPortalCameraEffect(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v5; // r4@1
  int result; // r0@1
  __int64 v15; // [sp+0h] [bp-80h]@4
  int v16; // [sp+8h] [bp-78h]@4
  float v17; // [sp+Ch] [bp-74h]@4
  float v18; // [sp+10h] [bp-70h]@4
  float v19; // [sp+14h] [bp-6Ch]@4
  float v20; // [sp+18h] [bp-68h]@4
  int v21; // [sp+1Ch] [bp-64h]@4
  int v22; // [sp+20h] [bp-60h]@4
  int v23; // [sp+24h] [bp-5Ch]@4
  int v24; // [sp+28h] [bp-58h]@4
  int v25; // [sp+2Ch] [bp-54h]@4
  int v26; // [sp+30h] [bp-50h]@4
  int v27; // [sp+34h] [bp-4Ch]@4
  int v28; // [sp+38h] [bp-48h]@4
  int v29; // [sp+3Ch] [bp-44h]@4
  int v30; // [sp+40h] [bp-40h]@4
  int v31; // [sp+44h] [bp-3Ch]@4
  int v32; // [sp+48h] [bp-38h]@4
  float v33; // [sp+4Ch] [bp-34h]@4

  v3 = a1;
  _R6 = a3;
  v5 = a2;
  _R7 = LocalPlayer::getOPortalEffectTime(*(LocalPlayer **)(a1 + 2876));
  _R0 = LocalPlayer::getPortalEffectTime(*(LocalPlayer **)(v3 + 2876));
  __asm { VMOV            S16, R0 }
  result = LocalPlayer::getOPortalEffectTime(*(LocalPlayer **)(v3 + 2876));
  __asm
  {
    VMOV            S0, R0
    VMOV            S2, R7
    VSUB.F32        S0, S16, S0
    VMOV            S16, R6
    VMUL.F32        S0, S0, S16
    VADD.F32        S20, S0, S2
    VCMPE.F32       S20, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    Mob::hasEffect(*(Mob **)(v3 + 2876), (const MobEffect *)MobEffect::CONFUSION);
    _R0 = _aeabi_ul2f(*(_DWORD *)(*(_DWORD *)(v3 + 2880) + 1552), *(_DWORD *)(*(_DWORD *)(v3 + 2880) + 1556));
    __asm
    {
      VMOV.F32        S0, #7.0
      VMOV            S2, R0
      VMOV.F32        S18, #20.0
    }
    if ( !_ZF )
      __asm { VMOVNE.F32      S18, S0 }
    __asm { VADD.F32        S0, S2, S16 }
    v15 = 4575657221408423936LL;
    v16 = 1065353216;
      VMUL.F32        S0, S0, S18
      VSTR            S0, [SP,#0x80+var_34]
    glm::rotate<float>((int)&v17, v5, (int)&v33, (int)&v15);
      VMOV.F32        S0, #5.0
      VMUL.F32        S2, S20, S20
      VLDR            S4, [SP,#0x80+var_74]
      VLDR            S6, [SP,#0x80+var_70]
      VLDR            S8, [SP,#0x80+var_6C]
      VLDR            S10, [SP,#0x80+var_68]
    *(_DWORD *)(v5 + 16) = v21;
    *(_DWORD *)(v5 + 20) = v22;
    __asm { VADD.F32        S2, S2, S0 }
    *(_DWORD *)(v5 + 24) = v23;
    *(_DWORD *)(v5 + 28) = v24;
    *(_DWORD *)(v5 + 32) = v25;
    __asm { VDIV.F32        S0, S0, S2 }
    *(_DWORD *)(v5 + 36) = v26;
    *(_DWORD *)(v5 + 40) = v27;
    *(_DWORD *)(v5 + 44) = v28;
    *(_DWORD *)(v5 + 48) = v29;
    *(_DWORD *)(v5 + 52) = v30;
    *(_DWORD *)(v5 + 56) = v31;
    *(_DWORD *)(v5 + 60) = v32;
      VLDR            S2, =-0.04
      VMUL.F32        S2, S20, S2
      VADD.F32        S0, S0, S2
      VMOV.F32        S2, #1.0
      VMUL.F32        S0, S0, S0
      VDIV.F32        S0, S2, S0
      VMUL.F32        S2, S4, S0
      VMUL.F32        S4, S6, S0
      VMUL.F32        S6, S8, S0
      VMUL.F32        S0, S10, S0
      VSTR            S2, [R4]
      VSTR            S4, [R4,#4]
      VSTR            S6, [R4,#8]
      VSTR            S0, [R4,#0xC]
      VMOV            S0, R0
      VADD.F32        S0, S0, S16
      VNMUL.F32       S0, S18, S0
    *(float *)v5 = v17;
    *(float *)(v5 + 4) = v18;
    *(float *)(v5 + 8) = v19;
    *(float *)(v5 + 12) = v20;
    result = v32;
  return result;
}


GeometryPtr *__fastcall LevelRendererPlayer::bobView(int a1, int a2, int a3)
{
  int v3; // r7@1
  int v6; // r0@1
  GeometryPtr *result; // r0@1
  int v9; // r7@2
  SkinInfoData *v10; // r0@2
  char *v11; // r0@2
  float v23; // r1@6
  float v26; // r1@6
  float v30; // r1@6
  int v32; // [sp+0h] [bp-A0h]@2
  _BYTE *v33; // [sp+4h] [bp-9Ch]@2
  int v34; // [sp+8h] [bp-98h]@6
  int v35; // [sp+Ch] [bp-94h]@6
  int v36; // [sp+10h] [bp-90h]@6
  int v37; // [sp+14h] [bp-8Ch]@6
  int v38; // [sp+18h] [bp-88h]@6
  int v39; // [sp+1Ch] [bp-84h]@6
  int v40; // [sp+20h] [bp-80h]@6
  int v41; // [sp+24h] [bp-7Ch]@6
  int v42; // [sp+28h] [bp-78h]@6
  int v43; // [sp+2Ch] [bp-74h]@6
  int v44; // [sp+30h] [bp-70h]@6
  int v45; // [sp+34h] [bp-6Ch]@6
  int v46; // [sp+38h] [bp-68h]@6
  int v47; // [sp+3Ch] [bp-64h]@6
  int v48; // [sp+40h] [bp-60h]@6
  int v49; // [sp+44h] [bp-5Ch]@6
  int v50; // [sp+48h] [bp-58h]@6
  int v51; // [sp+4Ch] [bp-54h]@6
  float v52; // [sp+50h] [bp-50h]@6
  float v53; // [sp+54h] [bp-4Ch]@6

  v3 = a1;
  _R5 = a3;
  _R4 = a2;
  v6 = ClientInstance::getCameraEntity(*(ClientInstance **)(a1 + 2872));
  result = (GeometryPtr *)Entity::hasCategory(v6, 1);
  if ( result == (GeometryPtr *)1 )
  {
    _R6 = (Player *)ClientInstance::getCameraEntity(*(ClientInstance **)(v3 + 2872));
    v9 = ClientInstance::getSkinGeometryGroup(*(ClientInstance **)(v3 + 2872));
    v10 = (SkinInfoData *)Player::getSkin(_R6);
    v11 = SkinInfoData::getGeometryName(v10);
    GeometryGroup::getGeometry((GeometryPtr *)&v32, v9, (const void **)v11);
    _ZF = v33 == 0;
    if ( v33 )
      _ZF = (*v33 & 0x80) == 0;
    if ( _ZF )
    {
      __asm
      {
        VLDR            S0, [R6,#0x150]
        VMOV            S16, R5
        VLDR            S2, [R6,#0x154]
      }
      _R1 = (int)_R6 + 4304;
        VSUB.F32        S0, S0, S2
        VLDR            S22, [R1]
      _R1 = (int)_R6 + 4308;
      _R0 = &mce::Math::PI;
        VLDR            S26, [R1]
        VMUL.F32        S0, S0, S16
        VSUB.F32        S24, S0, S2
        VLDR            S0, [R0]
      _R0 = (int)_R6 + 3456;
      __asm { VLDR            S18, [R0] }
      _R0 = (int)_R6 + 3460;
        VLDR            S20, [R0]
        VMUL.F32        S0, S0, S24
        VMOV            R5, S0
      _R6 = mce::Math::sin(_R5, COERCE_FLOAT((Player *)((char *)_R6 + 4308)));
      _R0 = mce::Math::cos(_R5, v23);
        VSUB.F32        S0, S26, S22
        VLDR            S4, =0.65
        VMOV            S2, R0
        VLDR            S6, [R4,#8]
        VLDR            S8, [R4,#0xC]
        VLDR            S10, [R4,#0x10]
        VLDR            S12, [R4,#0x14]
        VLDR            S14, [R4,#0x18]
        VLDR            S1, [R4,#0x1C]
        VADD.F32        S22, S0, S22
        VMOV            S0, R6
        VMUL.F32        S2, S2, S22
        VMUL.F32        S4, S22, S4
        VABS.F32        S2, S2
        VMUL.F32        S0, S4, S0
        VLDMIA          R4, {S3-S4}
        VMUL.F32        S12, S12, S2
        VMUL.F32        S4, S4, S0
        VMUL.F32        S10, S10, S2
        VMUL.F32        S14, S14, S2
        VMUL.F32        S6, S6, S0
        VMUL.F32        S3, S3, S0
        VMUL.F32        S0, S8, S0
        VMUL.F32        S2, S1, S2
        VSUB.F32        S4, S4, S12
        VLDR            S12, [R4,#0x38]
        VSUB.F32        S6, S6, S14
        VLDR            S14, [R4,#0x3C]
        VSUB.F32        S8, S3, S10
        VLDR            S10, [R4,#0x34]
        VLDR            S2, [R4,#0x30]
        VADD.F32        S4, S10, S4
        VADD.F32        S6, S12, S6
        VADD.F32        S2, S2, S8
        VADD.F32        S0, S14, S0
        VSTR            S2, [R4,#0x30]
        VSTR            S4, [R4,#0x34]
        VSTR            S6, [R4,#0x38]
        VSTR            S0, [R4,#0x3C]
      _R0 = mce::Math::sin(_R5, v26);
        VMOV.F32        S2, #3.0
        VMOV            S0, R0
      v34 = 0;
      v35 = 0;
      v36 = 1065353216;
        VMUL.F32        S2, S22, S2
        VMUL.F32        S0, S2, S0
        VSTR            S0, [SP,#0xA0+var_4C]
      glm::rotate<float>((int)&v37, _R4, (int)&v53, (int)&v34);
      *(_DWORD *)_R4 = v37;
      *(_DWORD *)(_R4 + 4) = v38;
        VLDR            S2, =-0.2
      *(_DWORD *)(_R4 + 8) = v39;
      *(_DWORD *)(_R4 + 12) = v40;
      *(_DWORD *)(_R4 + 16) = v41;
      *(_DWORD *)(_R4 + 20) = v42;
      __asm { VADD.F32        S0, S0, S2 }
      *(_DWORD *)(_R4 + 24) = v43;
      *(_DWORD *)(_R4 + 28) = v44;
      *(_DWORD *)(_R4 + 32) = v45;
      __asm { VMOV            R0, S0 }
      *(_DWORD *)(_R4 + 36) = v46;
      *(_DWORD *)(_R4 + 40) = v47;
      *(_DWORD *)(_R4 + 44) = v48;
      *(_DWORD *)(_R4 + 48) = v49;
      *(_DWORD *)(_R4 + 52) = v50;
      *(_DWORD *)(_R4 + 56) = v51;
      v30 = v52;
      *(float *)(_R4 + 60) = v52;
      _R0 = mce::Math::cos(_R0, v30);
        VSUB.F32        S0, S20, S18
        VMOV.F32        S2, #5.0
      v34 = 1065353216;
      v36 = 0;
        VADD.F32        S16, S0, S18
        VMUL.F32        S0, S0, S22
        VABS.F32        S0, S0
        VMUL.F32        S0, S0, S2
      __asm { VSTR            S16, [SP,#0xA0+var_4C] }
    }
    result = GeometryPtr::~GeometryPtr((GeometryPtr *)&v32);
  }
  return result;
}


LocalPlayer *__fastcall LevelRendererPlayer::tickFov(LevelRendererPlayer *this)
{
  LevelRendererPlayer *v1; // r4@1
  LocalPlayer *v2; // r1@1
  LocalPlayer *result; // r0@1

  v1 = this;
  v2 = (LocalPlayer *)ClientInstance::getCameraEntity(*((ClientInstance **)this + 718));
  result = (LocalPlayer *)*((_DWORD *)v1 + 719);
  if ( v2 == result )
  {
    *((_DWORD *)v1 + 673) = *((_DWORD *)v1 + 672);
    _R4 = (int)v1 + 2688;
    result = (LocalPlayer *)LocalPlayer::getFieldOfViewModifier(result);
    __asm
    {
      VLDR            S0, [R4]
      VMOV            S2, R0
      VMOV.F32        S4, #0.5
      VSUB.F32        S2, S2, S0
      VMUL.F32        S2, S2, S4
      VADD.F32        S0, S2, S0
      VSTR            S0, [R4]
    }
  }
  return result;
}


void __fastcall LevelRendererPlayer::reinit(int a1, int *a2)
{
  LevelRendererPlayer::reinit(a1, a2);
}


_QWORD *__fastcall LevelRendererPlayer::playRecord(float a1, _DWORD *a2, int a3, int a4, int a5)
{
  float v5; // r7@1
  unsigned int v6; // r4@1
  unsigned int v7; // r5@1
  int v8; // r0@1
  int v9; // r11@2
  int v10; // r8@2
  int v11; // r1@4
  int v13; // r1@8
  int v14; // r7@9
  _QWORD *result; // r0@11
  __int64 v19; // r4@12
  int v20; // r1@12
  bool v21; // zf@14
  __int64 v22; // r2@17
  unsigned __int64 *v23; // [sp+10h] [bp-40h]@1
  float v24; // [sp+14h] [bp-3Ch]@1
  _DWORD *v25; // [sp+18h] [bp-38h]@1
  int v26; // [sp+20h] [bp-30h]@1
  int v27; // [sp+24h] [bp-2Ch]@1
  int v28; // [sp+28h] [bp-28h]@1

  v5 = a1;
  v25 = a2;
  v24 = a1;
  BlockPos::BlockPos((int)&v26, a3);
  v6 = *(_DWORD *)(LODWORD(v5) + 2628);
  v7 = 8976890 * v26 + 981131 * v27 + v28;
  v8 = *(_DWORD *)(*(_DWORD *)(LODWORD(v5) + 2624) + 4 * (v7 % v6));
  v23 = (unsigned __int64 *)(LODWORD(v5) + 2624);
  if ( v8 )
  {
    v9 = *(_DWORD *)v8;
    v10 = *(_DWORD *)(*(_DWORD *)v8 + 32);
    while ( 1 )
    {
      if ( v10 == v7 )
      {
        v11 = *(_DWORD *)(v9 + 8);
        _ZF = v26 == v11;
        if ( v26 == v11 )
          _ZF = v27 == *(_DWORD *)(v9 + 12);
        if ( _ZF )
        {
          v13 = *(_DWORD *)(v9 + 16);
          if ( v28 == v13 )
            break;
        }
      }
      v14 = *(_DWORD *)v9;
      if ( *(_DWORD *)v9 )
        v10 = *(_DWORD *)(v14 + 32);
        v8 = v9;
        v9 = *(_DWORD *)v9;
        if ( *(_DWORD *)(v14 + 32) % v6 == v7 % v6 )
          continue;
      goto LABEL_11;
    }
    v21 = v8 == 0;
    if ( v8 )
      v13 = *(_DWORD *)v8;
      v21 = *(_DWORD *)v8 == 0;
    if ( !v21 )
      v22 = *(_QWORD *)(v13 + 24);
      (*(void (**)(void))(**(_DWORD **)(LODWORD(v24) + 2884) + 40))();
      std::_Hashtable<BlockPos,std::pair<BlockPos const,unsigned long long>,std::allocator<std::pair<BlockPos const,unsigned long long>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_erase(
        v23,
        (int)&v26);
  }
LABEL_11:
  result = *(_QWORD **)(*v25 - 12);
  if ( result )
    __asm
      VLDR            S0, [SP,#0x50+arg_0]
      VSTR            S0, [SP,#0x50+var_50]
    LODWORD(v19) = (*(int (**)(void))(**(_DWORD **)(LODWORD(v24) + 2884) + 8))();
    HIDWORD(v19) = v20;
    result = (_QWORD *)std::__detail::_Map_base<BlockPos,std::pair<BlockPos const,unsigned long long>,std::allocator<std::pair<BlockPos const,unsigned long long>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                         v23,
                         (int)&v26);
    *result = v19;
  return result;
}


int __fastcall LevelRendererPlayer::renderEntityEffects(LevelRendererPlayer *this, BaseEntityRenderContext *a2)
{
  BaseEntityRenderContext *v2; // r4@1
  LevelRendererPlayer *v3; // r5@1
  int v4; // r10@1
  int result; // r0@1
  int v6; // r6@1
  int v7; // r7@1
  Entity *v8; // r5@2
  float v14; // r3@3
  char v15; // [sp+4h] [bp-44h]@3
  float v16; // [sp+Ch] [bp-3Ch]@3
  float v19; // [sp+18h] [bp-30h]@3

  v2 = a2;
  v3 = this;
  v4 = BaseEntityRenderContext::getEntityRenderDispatcher(a2);
  BaseEntityRenderContext::setCameraPosition(v2, (LevelRendererPlayer *)((char *)v3 + 548));
  BaseEntityRenderContext::setCameraTargetPosition(v2, (LevelRendererPlayer *)((char *)v3 + 560));
  result = BaseEntityRenderContext::setWorldClipRegion(v2, (const AABB *)&AABB::EMPTY);
  v6 = *((_DWORD *)v3 + 14);
  v7 = (int)v3 + 48;
  if ( (LevelRendererPlayer *)v6 != (LevelRendererPlayer *)((char *)v3 + 48) )
  {
    do
    {
      v8 = *(Entity **)(v6 + 20);
      if ( v8 )
      {
        Entity::getInterpolatedPosition((Entity *)&v16, *(float *)(v6 + 20), *((_DWORD *)v2 + 1));
        _R0 = BaseEntityRenderContext::getCameraTargetPosition(v2);
        __asm
        {
          VLDR            S0, [R0]
          VLDR            S6, [SP,#0x48+var_3C]
          VLDR            S2, [R0,#4]
          VLDR            S4, [R0,#8]
          VSUB.F32        S0, S6, S0
          VLDR            S8, [SP,#0x48+var_38]
          VLDR            S10, [SP,#0x48+var_34]
          VSUB.F32        S2, S8, S2
          VSUB.F32        S4, S10, S4
          VSTR            S0, [SP,#0x48+var_30]
          VSTR            S2, [SP,#0x48+var_2C]
          VSTR            S4, [SP,#0x48+var_28]
        }
        Entity::getInterpolatedRotation((Entity *)&v15, *(float *)&v8, *((float *)v2 + 1), v14);
        EntityRenderDispatcher::renderEffects(v4, (int)v2, v8, (int)&v19, (int)&v15);
      }
      result = sub_119CAC8(v6);
      v6 = result;
    }
    while ( result != v7 );
  }
  return result;
}


void __fastcall LevelRendererPlayer::levelEvent(float a1, signed int a2, int a3, unsigned int a4)
{
  signed int v7; // r4@1
  char *v8; // r5@1
  char *v9; // r0@1
  int v11; // r3@1
  Random *v16; // r7@5
  char *v23; // r0@6
  Random *v24; // r6@6
  signed int v25; // r5@6
  void *v33; // r0@13
  unsigned int *v34; // r2@14
  signed int v35; // r1@16
  int v36; // r4@30
  signed int v43; // r5@31
  char *v44; // r0@32
  char *v46; // r0@32
  char *v48; // r0@32
  char *v50; // r0@32
  char *v52; // r0@32
  char *v54; // r0@32
  char *v56; // r0@32
  signed int v60; // r5@34
  char *v61; // r0@35
  char *v63; // r0@35
  char *v65; // r0@35
  char *v67; // r0@35
  char *v69; // r0@35
  char *v71; // r0@35
  int v73; // r7@38
  char *v74; // r0@38
  Random *v75; // r5@38
  int v79; // r4@40
  BlockGraphics *v80; // r0@40
  int v81; // r0@41
  int v84; // r0@51
  int v85; // ST00_4@51
  int v86; // r0@51
  int v87; // ST00_4@51
  int v88; // r0@51
  int v89; // ST00_4@51
  int v90; // r0@51
  int v91; // ST00_4@51
  int v92; // r0@51
  int v93; // ST00_4@51
  int v94; // r0@51
  int v95; // ST00_4@51
  int v96; // r0@51
  int v97; // ST00_4@51
  int v98; // r0@51
  int v99; // ST00_4@51
  int v102; // r6@51
  signed int v104; // r8@51
  char *v106; // r0@54
  char *v108; // r0@54
  int v110; // r5@54
  Particle *v111; // r0@54
  char *v113; // r7@58
  signed int v114; // r6@58
  int v118; // r0@62
  int v119; // r1@62
  signed int v120; // r4@63
  char *v121; // r0@64
  char *v123; // r0@64
  char *v125; // r0@64
  char *v127; // r0@64
  int v129; // r4@66
  ParticleEngine *v130; // r4@68
  int v132; // r4@71
  char *v133; // r0@71
  Random *v134; // r5@71
  int v138; // r4@73
  MiningFatigueParticle *v139; // r5@73
  BlockSource *v141; // r4@83
  Block *v142; // r0@83
  int *v143; // r0@83
  char *v144; // r0@84
  Random *v145; // r6@84
  signed int v146; // r9@84
  signed int v153; // r5@87
  float v154; // r1@88
  float v155; // r2@88
  char *v156; // r0@88
  char *v158; // r0@88
  int v159; // r4@88
  char *v160; // r0@88
  int v161; // r0@88
  int v162; // r1@88
  signed int v163; // r9@90
  int v164; // r6@90
  Level *v166; // r5@91
  int v168; // r0@91
  char *v169; // r0@101
  char *v171; // r0@109
  char *v173; // r0@109
  char *v175; // r0@133
  char *v177; // r5@141
  char *v180; // r5@149
  char *v183; // r5@157
  char *v186; // r0@165
  char *v188; // r5@194
  Random *v191; // r0@226
  char *v193; // r5@260
  void *v196; // r0@311
  unsigned int *v197; // r2@312
  signed int v198; // r1@314
  void *v199; // r0@319
  unsigned int *v200; // r2@320
  signed int v201; // r1@322
  void *v202; // r0@327
  unsigned int *v203; // r2@328
  signed int v204; // r1@330
  void *v207; // r0@351
  signed int v208; // r4@352
  int v214; // r0@353
  unsigned int *v216; // r2@407
  signed int v217; // r1@409
  int v218; // [sp+4h] [bp-364h]@0
  char v220; // [sp+10h] [bp-358h]@91
  float v221; // [sp+1Ch] [bp-34Ch]@91
  int v222; // [sp+28h] [bp-340h]@91
  int v223; // [sp+30h] [bp-338h]@91
  float v224; // [sp+34h] [bp-334h]@38
  float v225; // [sp+40h] [bp-328h]@59
  int v226; // [sp+4Ch] [bp-31Ch]@88
  int v227; // [sp+50h] [bp-318h]@88
  int v228; // [sp+54h] [bp-314h]@88
  int v229; // [sp+58h] [bp-310h]@71
  signed int v230; // [sp+5Ch] [bp-30Ch]@71
  int v231; // [sp+60h] [bp-308h]@71
  float v232; // [sp+64h] [bp-304h]@71
  float v233; // [sp+70h] [bp-2F8h]@32
  float v234; // [sp+74h] [bp-2F4h]@32
  float v235; // [sp+78h] [bp-2F0h]@32
  float v236; // [sp+7Ch] [bp-2ECh]@32
  float v237; // [sp+80h] [bp-2E8h]@32
  float v238; // [sp+84h] [bp-2E4h]@32
  int v239; // [sp+88h] [bp-2E0h]@62
  int v240; // [sp+8Ch] [bp-2DCh]@62
  int v241; // [sp+90h] [bp-2D8h]@62
  int v242; // [sp+94h] [bp-2D4h]@66
  int v243; // [sp+98h] [bp-2D0h]@66
  int v244; // [sp+9Ch] [bp-2CCh]@66
  int v245; // [sp+A4h] [bp-2C4h]@75
  MiningFatigueParticle *v246; // [sp+A8h] [bp-2C0h]@73
  float v247; // [sp+B8h] [bp-2B0h]@85
  char v248; // [sp+C4h] [bp-2A4h]@83
  int v249; // [sp+D0h] [bp-298h]@31
  float v250; // [sp+D4h] [bp-294h]@32
  float v251; // [sp+D8h] [bp-290h]@32
  int v252; // [sp+E0h] [bp-288h]@51
  int v253; // [sp+E4h] [bp-284h]@51
  int v254; // [sp+E8h] [bp-280h]@51
  float v255; // [sp+F8h] [bp-270h]@7
  int v256; // [sp+108h] [bp-260h]@276
  int v257; // [sp+110h] [bp-258h]@109
  int v258; // [sp+118h] [bp-250h]@125
  int v259; // [sp+120h] [bp-248h]@93
  int v260; // [sp+128h] [bp-240h]@210
  int v261; // [sp+130h] [bp-238h]@117
  int v262; // [sp+138h] [bp-230h]@300
  int v263; // [sp+140h] [bp-228h]@284
  int v264; // [sp+148h] [bp-220h]@141
  int v265; // [sp+150h] [bp-218h]@194
  int v266; // [sp+158h] [bp-210h]@260
  int v267; // [sp+160h] [bp-208h]@149
  int v268; // [sp+168h] [bp-200h]@157
  int v269; // [sp+170h] [bp-1F8h]@244
  int v270; // [sp+178h] [bp-1F0h]@173
  int v271; // [sp+180h] [bp-1E8h]@202
  int v272; // [sp+188h] [bp-1E0h]@268
  int v273; // [sp+190h] [bp-1D8h]@101
  int v274; // [sp+198h] [bp-1D0h]@165
  int v275; // [sp+1A0h] [bp-1C8h]@133
  int v276; // [sp+1A8h] [bp-1C0h]@236
  int v277; // [sp+1B0h] [bp-1B8h]@252
  int v278; // [sp+1B8h] [bp-1B0h]@227
  int v279; // [sp+1C0h] [bp-1A8h]@228
  int v280; // [sp+1C8h] [bp-1A0h]@189
  int v281; // [sp+1D0h] [bp-198h]@181
  int v282; // [sp+1D8h] [bp-190h]@292
  int v283; // [sp+1E0h] [bp-188h]@218
  int v284; // [sp+1E8h] [bp-180h]@10
  float v285; // [sp+1F8h] [bp-170h]@35
  __int16 v286; // [sp+234h] [bp-134h]@30
  char v287; // [sp+238h] [bp-130h]@30
  char v288; // [sp+244h] [bp-124h]@68
  int v289; // [sp+25Ch] [bp-10Ch]@41
  __int16 v290; // [sp+270h] [bp-F8h]@40
  char v291; // [sp+274h] [bp-F4h]@40
  int v292; // [sp+284h] [bp-E4h]@366
  int v293; // [sp+28Ch] [bp-DCh]@340
  int v294; // [sp+294h] [bp-D4h]@361
  int v295; // [sp+29Ch] [bp-CCh]@356
  int v296; // [sp+2A4h] [bp-C4h]@308
  int v297; // [sp+2ACh] [bp-BCh]@316
  int v298; // [sp+2B4h] [bp-B4h]@332
  int v299; // [sp+2BCh] [bp-ACh]@324
  float v300; // [sp+2CCh] [bp-9Ch]@353
  int v301; // [sp+2D0h] [bp-98h]@353
  int v302; // [sp+2DCh] [bp-8Ch]@348
  int v303; // [sp+2E4h] [bp-84h]@19
  char v304; // [sp+2E8h] [bp-80h]@29
  char v305; // [sp+2F4h] [bp-74h]@355

  _R11 = a1;
  _R8 = a4;
  _R10 = a3;
  v7 = a2;
  v8 = Level::getRandom(*(Level **)(LODWORD(a1) + 2888));
  v9 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
  _R0 = Random::_genRandInt32((Random *)v9);
  __asm
  {
    VMOV            S0, R0
    VLDR            D8, =2.32830644e-10
    VLDR            S24, =0.1
    VMOV            S2, R8
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D8
    VCVT.F32.F64    S0, D0
    VMUL.F32        S0, S0, S24
    VLDR            S22, =0.9
    VCVT.F32.S32    S26, S2
    VLDR            S2, =0.001
    VADD.F32        S18, S0, S22
    VMUL.F32        S20, S26, S2
  }
  if ( _ZF )
    __asm { VMOVEQ.F32      S20, S18 }
  if ( v7 < 2000 )
    switch ( v7 )
    {
      case 1000:
        sub_119C884((void **)&v284, "random.click");
        __asm
        {
          VLDR            S0, [R11,#0x224]
          VLDR            S6, [R10]
          VLDR            S2, [R11,#0x228]
          VLDR            S8, [R10,#4]
          VSUB.F32        S0, S6, S0
          VLDR            S4, [R11,#0x22C]
          VSUB.F32        S2, S8, S2
          VLDR            S10, [R10,#8]
          VSUB.F32        S4, S10, S4
          VMUL.F32        S0, S0, S0
          VMUL.F32        S2, S2, S2
          VMUL.F32        S4, S4, S4
          VADD.F32        S0, S2, S0
          VLDR            S2, =256.0
          VADD.F32        S0, S0, S4
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
          __asm { VSTR            S20, [SP,#0x368+var_368] }
          (*(void (**)(void))(**(_DWORD **)(LODWORD(_R11) + 2884) + 8))();
        v33 = (void *)(v284 - 12);
        if ( (int *)(v284 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v284 - 4);
          if ( !&pthread_create )
            goto LABEL_379;
          __dmb();
          do
            v35 = __ldrex(v34);
          while ( __strex(v35 - 1, v34) );
          goto LABEL_380;
        break;
      case 1043:
        sub_119C884((void **)&v259, "block.itemframe.remove_item");
          (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(LODWORD(_R11) + 2884) + 8))(*(_DWORD *)(LODWORD(_R11) + 2884));
        v33 = (void *)(v259 - 12);
        if ( (int *)(v259 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v259 - 4);
      case 1021:
        sub_119C884((void **)&v273, "random.anvil_use");
        v169 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
        _R0 = Random::_genRandInt32((Random *)v169);
          __asm
          {
            VMOV            S0, R0
            VCVT.F64.U32    D0, S0
            VMUL.F64        D0, D0, D8
            VCVT.F32.F64    S0, D0
            VMUL.F32        S0, S0, S24
            VADD.F32        S0, S0, S22
            VSTR            S0, [SP,#0x368+var_368]
          }
        v33 = (void *)(v273 - 12);
        if ( (int *)(v273 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v273 - 4);
      case 1051:
        v171 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
        _R0 = Random::_genRandInt32((Random *)v171);
          VMOV            S0, R0
          VCVT.F64.U32    D9, S0
        sub_119C884((void **)&v257, "random.orb");
        v173 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
        _R0 = Random::_genRandInt32((Random *)v173);
            VMOV            S2, R0
            VLDR            D2, =-2.32830644e-10
            VMUL.F64        D0, D9, D8
            VCVT.F64.U32    D1, S2
            VMUL.F64        D1, D1, D2
            VCVT.F32.F64    S2, D1
            VADD.F32        S0, S0, S2
            VLDR            S2, =0.35
            VMUL.F32        S0, S0, S2
        v33 = (void *)(v257 - 12);
        if ( (int *)(v257 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v257 - 4);
      case 1041:
        sub_119C884((void **)&v261, "block.itemframe.break");
        v33 = (void *)(v261 - 12);
        if ( (int *)(v261 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v261 - 4);
      case 1044:
        sub_119C884((void **)&v258, "block.itemframe.rotate_item");
        v33 = (void *)(v258 - 12);
        if ( (int *)(v258 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v258 - 4);
      case 1020:
        sub_119C884((void **)&v275, "random.anvil_break");
        v175 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
        _R0 = Random::_genRandInt32((Random *)v175);
        v33 = (void *)(v275 - 12);
        if ( (int *)(v275 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v275 - 4);
      case 1009:
        sub_119C884((void **)&v264, "mob.ghast.fireball");
        v177 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
        _R4 = Random::_genRandInt32((Random *)v177);
        _R0 = Random::_genRandInt32((Random *)v177);
          VLDR            S2, =1024.0
            VMOV            S2, R4
            VMUL.F64        D1, D1, D8
            VSUB.F32        S0, S2, S0
            VLDR            S2, =0.2
            VMOV.F32        S4, #1.0
            VADD.F32        S0, S0, S4
        v33 = (void *)(v264 - 12);
        if ( (int *)(v264 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v264 - 4);
      case 1008:
        sub_119C884((void **)&v267, "mob.ghast.fireball");
        v180 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
        _R4 = Random::_genRandInt32((Random *)v180);
        _R0 = Random::_genRandInt32((Random *)v180);
          VLDR            S2, =25600.0
        v33 = (void *)(v267 - 12);
        if ( (int *)(v267 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v267 - 4);
      case 1007:
        sub_119C884((void **)&v268, "mob.ghast.charge");
        v183 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
        _R4 = Random::_genRandInt32((Random *)v183);
        _R0 = Random::_genRandInt32((Random *)v183);
        v33 = (void *)(v268 - 12);
        if ( (int *)(v268 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v268 - 4);
      case 1022:
        sub_119C884((void **)&v274, "random.anvil_land");
        v186 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
        _R0 = Random::_genRandInt32((Random *)v186);
        v33 = (void *)(v274 - 12);
        if ( (int *)(v274 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v274 - 4);
      case 1060:
        sub_119C884((void **)&v270, "mob.armor_stand.break");
        v33 = (void *)(v270 - 12);
        if ( (int *)(v270 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v270 - 4);
      case 1002:
        sub_119C884((void **)&v281, "random.bow");
            VLDR            S0, =0.000015259
            VMUL.F32        S0, S26, S0
        v33 = (void *)(v281 - 12);
        if ( (int *)(v281 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v281 - 4);
      case 1032:
        sub_119C884((void **)&v280, "mob.endermen.portal");
        LevelRendererPlayer::playDeferredSound(_R11, &v280, _R10, 1065353216, 1065353216);
        v33 = (void *)(v280 - 12);
        if ( (int *)(v280 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v280 - 4);
      case 1012:
        sub_119C884((void **)&v265, "mob.zombie.woodbreak");
        v188 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
        _R4 = Random::_genRandInt32((Random *)v188);
        _R0 = Random::_genRandInt32((Random *)v188);
        v33 = (void *)(v265 - 12);
        if ( (int *)(v265 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v265 - 4);
      case 1061:
        sub_119C884((void **)&v271, "mob.armor_stand.hit");
        v33 = (void *)(v271 - 12);
        if ( (int *)(v271 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v271 - 4);
      case 1042:
        sub_119C884((void **)&v260, "block.itemframe.place");
        v33 = (void *)(v260 - 12);
        if ( (int *)(v260 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v260 - 4);
      case 1001:
        sub_119C884((void **)&v283, "random.click");
        v33 = (void *)(v283 - 12);
        if ( (int *)(v283 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v283 - 4);
      case 1003:
        v191 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
        _R0 = Random::_genRandInt32(v191);
          VMOV.F32        S2, #0.5
          VCVT.F64.U32    D0, S0
          VMUL.F64        D0, D0, D8
          VCVT.F32.F64    S0, D0
          sub_119C884((void **)&v279, "random.door_open");
            VLDR            S0, [R11,#0x224]
            VLDR            S6, [R10]
            VLDR            S2, [R11,#0x228]
            VLDR            S8, [R10,#4]
            VSUB.F32        S0, S6, S0
            VLDR            S4, [R11,#0x22C]
            VSUB.F32        S2, S8, S2
            VLDR            S10, [R10,#8]
            VSUB.F32        S4, S10, S4
            VMUL.F32        S0, S0, S0
            VMUL.F32        S2, S2, S2
            VMUL.F32        S4, S4, S4
            VADD.F32        S0, S2, S0
            VLDR            S2, =256.0
            VCMPE.F32       S0, S2
            VMRS            APSR_nzcv, FPSCR
          if ( _NF ^ _VF )
            __asm { VSTR            S20, [SP,#0x368+var_368] }
            (*(void (**)(void))(**(_DWORD **)(LODWORD(_R11) + 2884) + 8))();
          v33 = (void *)(v279 - 12);
          if ( (int *)(v279 - 12) != &dword_28898C0 )
            v34 = (unsigned int *)(v279 - 4);
            if ( !&pthread_create )
              goto LABEL_379;
            __dmb();
            do
              v35 = __ldrex(v34);
            while ( __strex(v35 - 1, v34) );
            goto LABEL_380;
        else
          sub_119C884((void **)&v278, "random.door_close");
          v33 = (void *)(v278 - 12);
          if ( (int *)(v278 - 12) != &dword_28898C0 )
            v34 = (unsigned int *)(v278 - 4);
      case 1005:
        sub_119C884((void **)&v276, "random.fuse");
        v33 = (void *)(v276 - 12);
        if ( (int *)(v276 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v276 - 4);
      case 1062:
        sub_119C884((void **)&v269, "mob.armor_stand.land");
        v33 = (void *)(v269 - 12);
        if ( (int *)(v269 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v269 - 4);
      case 1004:
        sub_119C884((void **)&v277, "random.fizz");
        v33 = (void *)(v277 - 12);
        if ( (int *)(v277 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v277 - 4);
      case 1010:
        sub_119C884((void **)&v266, "mob.zombie.wood");
        v193 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
        _R4 = Random::_genRandInt32((Random *)v193);
        _R0 = Random::_genRandInt32((Random *)v193);
        v33 = (void *)(v266 - 12);
        if ( (int *)(v266 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v266 - 4);
      case 1063:
        sub_119C884((void **)&v272, "mob.armor_stand.place");
        v33 = (void *)(v272 - 12);
        if ( (int *)(v272 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v272 - 4);
      case 1052:
        sub_119C884((void **)&v256, "random.totem");
        v33 = (void *)(v256 - 12);
        if ( (int *)(v256 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v256 - 4);
      case 1018:
        sub_119C884((void **)&v263, "mob.endermen.portal");
        v33 = (void *)(v263 - 12);
        if ( (int *)(v263 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v263 - 4);
      case 1030:
        sub_119C884((void **)&v282, "random.pop");
        v33 = (void *)(v282 - 12);
        if ( (int *)(v282 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v282 - 4);
      case 1040:
        sub_119C884((void **)&v262, "block.itemframe.add_item");
        v33 = (void *)(v262 - 12);
        if ( (int *)(v262 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v262 - 4);
          if ( &pthread_create )
          else
LABEL_379:
            v35 = (*v34)--;
LABEL_380:
          if ( v35 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v33);
      default:
        return;
    }
  else if ( v7 > 3499 )
      case 3500:
        sub_119C884((void **)&v303, "random.click");
        v33 = (void *)(v303 - 12);
        if ( (int *)(v303 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v303 - 4);
      case 3504:
        sub_119C884((void **)&v296, "cauldron.fillpotion");
          __asm { VSTR            S18, [SP,#0x368+var_368] }
        v196 = (void *)(v296 - 12);
        if ( (int *)(v296 - 12) == &dword_28898C0 )
          goto LABEL_360;
        v197 = (unsigned int *)(v296 - 4);
        if ( !&pthread_create )
          goto LABEL_387;
        __dmb();
        do
          v198 = __ldrex(v197);
        while ( __strex(v198 - 1, v197) );
        goto LABEL_388;
      case 3509:
        sub_119C884((void **)&v297, "cauldron.cleanbanner");
        v199 = (void *)(v297 - 12);
        if ( (int *)(v297 - 12) == &dword_28898C0 )
          goto LABEL_365;
        v200 = (unsigned int *)(v297 - 4);
          goto LABEL_395;
          v201 = __ldrex(v200);
        while ( __strex(v201 - 1, v200) );
        goto LABEL_396;
      case 3502:
        sub_119C884((void **)&v299, "cauldron.dyearmor");
        v202 = (void *)(v299 - 12);
        if ( (int *)(v299 - 12) == &dword_28898C0 )
          goto LABEL_370;
        v203 = (unsigned int *)(v299 - 4);
          goto LABEL_403;
          v204 = __ldrex(v203);
        while ( __strex(v204 - 1, v203) );
        goto LABEL_404;
      case 3503:
        sub_119C884((void **)&v298, "cauldron.cleanarmor");
        v199 = (void *)(v298 - 12);
        if ( (int *)(v298 - 12) == &dword_28898C0 )
        v200 = (unsigned int *)(v298 - 4);
      case 3507:
        sub_119C884((void **)&v293, "cauldron.takewater");
        v202 = (void *)(v293 - 12);
        if ( (int *)(v293 - 12) == &dword_28898C0 )
        v203 = (unsigned int *)(v293 - 4);
      case 3501:
        sub_119C884((void **)&v302, "cauldron.explode");
        _R4 = Random::_genRandInt32((Random *)v8);
        _R0 = Random::_genRandInt32((Random *)v8);
            VLDR            S2, =0.14
            VLDR            S2, =0.7
        v207 = (void *)(v302 - 12);
        if ( (int *)(v302 - 12) != &dword_28898C0 )
          v216 = (unsigned int *)(v302 - 4);
              v217 = __ldrex(v216);
            while ( __strex(v217 - 1, v216) );
            v217 = (*v216)--;
          if ( v217 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v207);
          VMOV.F32        S18, #-0.5
          VLDR            S20, =0.02
        v208 = 10;
          _R0 = Random::_genRandInt32((Random *)v8);
            VCVT.F64.U32    D11, S0
            VCVT.F64.U32    D12, S0
            VCVT.F64.U32    D13, S0
            VCVT.F64.U32    D14, S0
            VMUL.F64        D1, D11, D8
          v214 = *(_DWORD *)(LODWORD(_R11) + 2888);
            VMUL.F64        D2, D12, D8
            VMUL.F64        D3, D13, D8
            VMUL.F64        D4, D14, D8
            VCVT.F32.F64    S4, D2
            VADD.F32        S2, S2, S18
            VLDR            S10, [R10]
            VCVT.F32.F64    S6, D3
            VCVT.F32.F64    S8, D4
            VADD.F32        S4, S4, S18
            VLDR            S12, [R10,#8]
            VADD.F32        S2, S2, S10
            VMUL.F32        S6, S6, S20
            VMUL.F32        S8, S8, S20
            VMUL.F32        S0, S0, S20
            VADD.F32        S4, S4, S12
            VSTR            S2, [SP,#0x368+var_9C]
          v301 = *(_DWORD *)(_R10 + 4);
            VSTR            S6, [SP,#0x368+var_A8]
            VSTR            S8, [SP,#0x368+var_A4]
            VSTR            S0, [SP,#0x368+var_A0]
            VSTR            S4, [SP,#0x368+var_94]
          Level::addParticle(v214, 5, (int)&v300);
          --v208;
        while ( v208 );
      case 3505:
        sub_119C884((void **)&v295, "cauldron.takepotion");
        v196 = (void *)(v295 - 12);
        if ( (int *)(v295 - 12) != &dword_28898C0 )
          v197 = (unsigned int *)(v295 - 4);
              v198 = __ldrex(v197);
            while ( __strex(v198 - 1, v197) );
LABEL_387:
            v198 = (*v197)--;
LABEL_388:
          if ( v198 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v196);
LABEL_360:
        CauldronBlock::spawnPotionParticles(*(Level **)(LODWORD(_R11) + 2888), _R10, (int)v8, _R8, 5, v218);
      case 3506:
        sub_119C884((void **)&v294, "cauldron.fillwater");
        v199 = (void *)(v294 - 12);
        if ( (int *)(v294 - 12) != &dword_28898C0 )
          v200 = (unsigned int *)(v294 - 4);
              v201 = __ldrex(v200);
            while ( __strex(v201 - 1, v200) );
LABEL_395:
            v201 = (*v200)--;
LABEL_396:
          if ( v201 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v199);
LABEL_365:
        CauldronBlock::spawnBubbleParticles(*(Level **)(LODWORD(_R11) + 2888), _R10, (int)v8, _R8, 5, v218);
      case 3508:
        sub_119C884((void **)&v292, "cauldron.adddye");
        v202 = (void *)(v292 - 12);
        if ( (int *)(v292 - 12) != &dword_28898C0 )
          v203 = (unsigned int *)(v292 - 4);
              v204 = __ldrex(v203);
            while ( __strex(v204 - 1, v203) );
LABEL_403:
            v204 = (*v203)--;
LABEL_404:
          if ( v204 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v202);
LABEL_370:
        CauldronBlock::spawnSplashParticles(
          *(CauldronBlock **)(LODWORD(_R11) + 2888),
          (Level *)_R10,
          (const Vec3 *)v8,
          (Random *)_R8,
          5,
          v218);
        if ( v7 == 3600 )
          BlockPos::BlockPos((int)&v305, _R10);
            VMOV            R2, S0
          LevelRendererPlayer::addDestroyBlock((LevelRendererPlayer *)LODWORD(_R11), (const BlockPos *)&v305, _R2);
        else if ( v7 == 3601 )
          BlockPos::BlockPos((int)&v304, _R10);
          std::_Hashtable<BlockPos,std::pair<BlockPos const,BlockDestructInfo>,std::allocator<std::pair<BlockPos const,BlockDestructInfo>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_erase(
            (unsigned __int64 *)(LODWORD(_R11) + 2652),
            (int)&v304);
  else
    v16 = (Random *)v8;
      case 2000:
        _R0 = 1431655766;
          VMOV.F32        S26, #0.5
          VLDR            S18, =0.2
          SMMUL.W         R1, R8, R0
        _R1 = _R1 + (_R1 >> 31);
        __asm { SMMUL.W         R0, R1, R0 }
        _R2 = _R8 - 3 * _R1 - 1;
          VMOV            S0, R2
          VCVT.F32.S32    S20, S0
        _R0 = _R1 - 3 * (_R0 + (_R0 >> 31)) - 1;
          VCVT.F32.S32    S24, S0
          VLDR            S0, =-0.19
          VMUL.F32        S30, S20, S0
          VMUL.F32        S21, S24, S0
        v23 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
          VLDR            S2, [R10,#4]
          VMUL.F32        S22, S20, S26
          VLDR            S4, [R10,#8]
          VMUL.F32        S19, S24, S26
          VLDR            S0, [R10]
          VADD.F32        S2, S2, S18
          VADD.F32        S21, S4, S21
          VLDR            S25, =0.01
          VADD.F32        S18, S0, S30
          VMOV.F32        S23, #-0.5
        v24 = (Random *)v23;
        v25 = 10;
        __asm { VSTR            S2, [SP,#0x368+var_35C] }
          _R0 = Random::_genRandInt32(v24);
            VCVT.F64.U32    D15, S0
            VLDR            S8, =0.2
            VMUL.F64        D1, D15, D8
            VMUL.F64        D2, D13, D8
            VMUL.F64        D3, D14, D8
            VMUL.F32        S30, S2, S8
            VADD.F32        S26, S4, S23
            VADD.F32        S28, S6, S23
            VADD.F32        S31, S0, S23
          _R0 = Random::nextGaussian(v24);
            VMOV            S27, R0
            VADD.F32        S30, S30, S25
            VMOV.F32        S0, #0.5
            VMOV            S29, R0
            VMUL.F32        S26, S19, S26
            VMUL.F32        S28, S28, S0
            VLDR            S14, [SP,#0x368+var_35C]
            VMUL.F32        S4, S27, S25
            VMUL.F32        S6, S30, S20
            VMUL.F32        S2, S22, S31
            VMUL.F32        S8, S29, S25
            VMUL.F32        S0, S0, S25
            VMUL.F32        S10, S30, S24
            VADD.F32        S12, S18, S26
            VADD.F32        S14, S14, S28
            VADD.F32        S4, S6, S4
            VLDR            S6, =-0.03
            VADD.F32        S2, S21, S2
            VADD.F32        S6, S8, S6
            VADD.F32        S0, S0, S10
            VSTR            S12, [SP,#0x368+var_270]
            VSTR            S14, [SP,#0x368+var_26C]
            VSTR            S4, [SP,#0x368+var_27C]
            VSTR            S2, [SP,#0x368+var_268]
            VSTR            S6, [SP,#0x368+var_278]
            VSTR            S0, [SP,#0x368+var_274]
          Level::addParticle(*(_DWORD *)(LODWORD(_R11) + 2888), 4, (int)&v255);
          --v25;
        while ( v25 );
      case 2011:
        v36 = *(_DWORD *)(LODWORD(_R11) + 2888);
        BlockPos::BlockPos((int)&v287, _R10);
        v286 = _R8;
        Level::_destroyEffect(v36, (BlockPos *)&v287, &v286, (int)&Vec3::ZERO, 2);
      case 2010:
        _R0 = ((~(_R8 >> 24) & 2) - 1) * ((unsigned __int16)_R8 >> 8);
        _R2 = ((~(_R8 >> 23) & 2) - 1) * ((_R8 >> 16) & 0xFF);
        _R1 = ((~(_R8 >> 25) & 2) - 1) * _R8;
          VMOV            S2, R0
          VMOV            S4, R1
          VCVT.F32.S32    S0, S0
          VCVT.F32.S32    S2, S2
          VCVT.F32.S32    S4, S4
          VMOV            R1, S0
          VMOV            R2, S2
          VMOV            R3, S4
        BlockPos::BlockPos((BlockPos *)&v249, _R1, _R2, _R3);
          VLDR            S20, =0.2
          VMOV.F32        S22, #0.5
        v43 = 128;
          v237 = 0.0;
          v238 = 0.0;
          v233 = 0.0;
          v234 = 0.0;
          v235 = 0.0;
          v236 = 0.0;
          v44 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
          _R4 = Random::_genRandInt32((Random *)v44);
          v46 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
          _R0 = Random::_genRandInt32((Random *)v46);
            VADD.F32        S0, S0, S18
            VMOV.F64        D14, D8
            VMUL.F64        D12, D1, D14
            VSTR            S0, [SP,#0x368+var_2F8]
            VLDR            S0, [SP,#0x368+var_298]
            VLDR            S16, [R10]
            VCVT.F32.S32    S26, S0
          v48 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
          _R0 = Random::_genRandInt32((Random *)v48);
            VCVT.F32.F64    S24, D12
            VSUB.F32        S2, S16, S26
            VMUL.F64        D0, D0, D14
            VADD.F32        S4, S26, S18
            VMUL.F32        S2, S2, S24
            VADD.F32        S2, S4, S2
            VSTR            S0, [SP,#0x368+var_2EC]
          v50 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
          _R0 = Random::_genRandInt32((Random *)v50);
            VSTR            S0, [SP,#0x368+var_2F4]
            VLDR            S0, [SP,#0x368+var_294]
            VLDR            S16, [R10,#4]
          v52 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
          _R0 = Random::_genRandInt32((Random *)v52);
            VSTR            S0, [SP,#0x368+var_2E8]
          v54 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
          _R0 = Random::_genRandInt32((Random *)v54);
            VSTR            S0, [SP,#0x368+var_2F0]
            VLDR            S0, [SP,#0x368+var_290]
            VLDR            S16, [R10,#8]
          v56 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
          _R0 = Random::_genRandInt32((Random *)v56);
            VMOV.F64        D8, D14
            VLDR            S2, [SP,#0x368+var_2EC]
            VADD.F32        S2, S2, S22
            VSTR            S2, [SP,#0x368+var_2EC]
            VSTR            S0, [SP,#0x368+var_2E4]
          Level::addParticle(*(_DWORD *)(LODWORD(_R11) + 2888), 20, (int)&v236);
          --v43;
        while ( v43 );
      case 2004:
        _R0 = _R8;
          VLDR            S24, =-0.2
        _R0 = (signed int)_R8 >> 8;
          VLDR            S26, =0.02
          VCVT.F32.S32    S18, S0
        v60 = 20;
          VADD.F32        S22, S18, S18
          v61 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
          _R6 = Random::nextGaussian((Random *)v61);
          v63 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
          _R4 = Random::nextGaussian((Random *)v63);
          v65 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
          _R7 = Random::nextGaussian((Random *)v65);
          v67 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
          _R0 = Random::_genRandInt32((Random *)v67);
          v69 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
          _R0 = Random::_genRandInt32((Random *)v69);
          v71 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
          _R0 = Random::_genRandInt32((Random *)v71);
            VMUL.F64        D2, D14, D8
            VMUL.F64        D3, D15, D8
            VMOV            S2, R6
            VMOV            S10, R7
            VMUL.F32        S8, S2, S24
            VMUL.F32        S12, S10, S24
            VLDR            S7, [R10,#8]
            VMOV            S14, R4
            VLDR            S5, [R10,#4]
            VSUB.F32        S8, S8, S18
            VLDR            S1, [R10]
            VMUL.F32        S4, S4, S22
            VMUL.F32        S3, S14, S24
            VSUB.F32        S12, S12, S18
            VMUL.F32        S0, S0, S22
            VMUL.F32        S2, S2, S26
            VMUL.F32        S10, S10, S26
            VADD.F32        S4, S8, S4
            VADD.F32        S6, S6, S3
            VADD.F32        S8, S12, S7
            VSTR            S2, [SP,#0x368+var_17C]
            VADD.F32        S4, S4, S1
            VADD.F32        S6, S6, S5
            VADD.F32        S0, S8, S0
            VMUL.F32        S8, S14, S26
            VSTR            S4, [SP,#0x368+var_170]
            VSTR            S6, [SP,#0x368+var_16C]
            VSTR            S0, [SP,#0x368+var_168]
            VSTR            S8, [SP,#0x368+var_178]
            VSTR            S10, [SP,#0x368+var_174]
          Level::addParticle(*(_DWORD *)(LODWORD(_R11) + 2888), 5, (int)&v285);
          --v60;
        while ( v60 );
      case 2015:
        if ( (signed int)_R8 >= 1 )
            v73 = *(_DWORD *)(LODWORD(_R11) + 2888);
            v74 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
            v75 = (Random *)v74;
            _R0 = Random::nextGaussian((Random *)v74);
            __asm { VMOV            S16, R0 }
            _R4 = Random::nextGaussian(v75);
            _R0 = Random::nextGaussian(v75);
            __asm
            {
              VLDR            S0, [R10]
              VMOV            S8, R0
              VLDR            S4, [R10,#8]
              VMOV            S6, R4
              VLDR            S2, [R10,#4]
              VADD.F32        S0, S0, S16
              VADD.F32        S4, S4, S8
              VADD.F32        S2, S2, S6
              VSTR            S0, [SP,#0x368+var_334]
              VSTR            S2, [SP,#0x368+var_330]
              VSTR            S4, [SP,#0x368+var_32C]
            }
            Level::addParticle(v73, 1, (int)&v224);
            --_R8;
          while ( _R8 );
      case 2001:
        v79 = *(_DWORD *)(LODWORD(_R11) + 2888);
        BlockPos::BlockPos((int)&v291, _R10);
        v290 = _R8;
        Level::_destroyEffect(v79, (BlockPos *)&v291, &v290, (int)&Vec3::ZERO, -1);
        v80 = (BlockGraphics *)BlockGraphics::mBlocks[_R8];
        if ( v80 )
          v81 = BlockGraphics::getSoundType(v80);
          SoundMapping::getBlockSound(&v289, *(_DWORD *)(LODWORD(_R11) + 2836), 5u, v81);
            VLDR            S2, [R10]
            VLDR            S4, [R10,#4]
            VLDR            S6, [R10,#8]
            VADD.F32        S18, S2, S0
            VADD.F32        S20, S4, S0
            VADD.F32        S16, S6, S0
            VSTR            S18, [SP,#0x368+var_118]
            VSTR            S20, [SP,#0x368+var_114]
            VSTR            S16, [SP,#0x368+var_110]
          _R4 = Sound::getVolume((Sound *)&v289, (Random *)v8);
          _R0 = Sound::getPitch((Sound *)&v289, (Random *)v8);
            VMOV.F32        S10, #1.0
            VLDR            S2, [R11,#0x224]
            VMOV            S0, R4
            VLDR            S4, [R11,#0x228]
            VSUB.F32        S2, S18, S2
            VLDR            S6, [R11,#0x22C]
            VSUB.F32        S4, S20, S4
            VMOV.F32        S8, #16.0
            VSUB.F32        S6, S16, S6
            VCMPE.F32       S0, S10
            VMUL.F32        S12, S0, S8
            VMUL.F32        S0, S6, S6
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            __asm { VMOVGT.F32      S8, S12 }
            VMUL.F32        S4, S8, S8
            VCMPE.F32       S0, S4
              VMOV            S0, R0
              VSTR            S0, [SP,#0x368+var_368]
          v33 = (void *)(v289 - 12);
          if ( (int *)(v289 - 12) != &dword_28898C0 )
            v34 = (unsigned int *)(v289 - 4);
      case 2002:
        v84 = *(_DWORD *)(LODWORD(_R11) + 2888);
        v252 = 0;
        v253 = 0;
        v254 = 0;
        v85 = *(_WORD *)(Item::mGlass_bottle + 18) << 16;
        Level::addParticle(v84, 12, _R10);
        v86 = *(_DWORD *)(LODWORD(_R11) + 2888);
        v87 = *(_WORD *)(Item::mGlass_bottle + 18) << 16;
        Level::addParticle(v86, 12, _R10);
        v88 = *(_DWORD *)(LODWORD(_R11) + 2888);
        v89 = *(_WORD *)(Item::mGlass_bottle + 18) << 16;
        Level::addParticle(v88, 12, _R10);
        v90 = *(_DWORD *)(LODWORD(_R11) + 2888);
        v91 = *(_WORD *)(Item::mGlass_bottle + 18) << 16;
        Level::addParticle(v90, 12, _R10);
        v92 = *(_DWORD *)(LODWORD(_R11) + 2888);
        v93 = *(_WORD *)(Item::mGlass_bottle + 18) << 16;
        Level::addParticle(v92, 12, _R10);
        v94 = *(_DWORD *)(LODWORD(_R11) + 2888);
        v95 = *(_WORD *)(Item::mGlass_bottle + 18) << 16;
        Level::addParticle(v94, 12, _R10);
        v96 = *(_DWORD *)(LODWORD(_R11) + 2888);
        v97 = *(_WORD *)(Item::mGlass_bottle + 18) << 16;
        Level::addParticle(v96, 12, _R10);
        v98 = *(_DWORD *)(LODWORD(_R11) + 2888);
        v99 = *(_WORD *)(Item::mGlass_bottle + 18) << 16;
        Level::addParticle(v98, 12, _R10);
        _R1 = (unsigned __int16)_R8 >> 8;
          VLDR            S6, =0.0039216
          VMOV            S2, R1
        v102 = 26;
        __asm { VCVT.F32.S32    S2, S2 }
        _R0 = (_R8 >> 16) & 0xFF;
          VMOV.F32        S26, #0.25
          VMOV            S4, R0
          VMOV.F32        S28, #0.75
        v104 = 100;
        __asm { VCVT.F32.S32    S4, S4 }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          v102 = 28;
        _R0 = &ThrownPotion::SPLASH_RANGE;
          VMUL.F32        S18, S0, S6
          VMUL.F32        S20, S2, S6
          VLDR            S24, [R0]
          VMUL.F32        S22, S4, S6
          v106 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
          _R4 = Random::_genRandInt32((Random *)v106);
          v108 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
          _R0 = Random::_genRandInt32((Random *)v108);
            VMUL.F32        S0, S0, S26
            VADD.F32        S0, S0, S28
            VMUL.F32        S2, S22, S0
            VMUL.F32        S4, S20, S0
            VMUL.F32        S6, S18, S0
            VSTR            S2, [SP,#0x368+var_298]
            VSTR            S4, [SP,#0x368+var_294]
            VSTR            S6, [SP,#0x368+var_290]
            VSTR            S0, [SP,#0x368+var_28C]
          v110 = *(_DWORD *)(LODWORD(_R11) + 2888);
          Color::toARGB((Color *)&v249);
          v111 = (Particle *)Level::addParticle(v110, v102, _R10);
          if ( v111 )
              VMOV            S0, R4
              VCVT.F64.U32    D0, S0
              VMUL.F64        D0, D0, D8
              VCVT.F32.F64    S0, D0
              VMUL.F32        S0, S0, S24
              VMOV            R1, S0
            Particle::setPower(v111, _R1);
          --v104;
        while ( v104 );
      case 2016:
        v113 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
        __asm { VMOV.F32        S18, #0.5 }
        v114 = 5;
          _R5 = Random::_genRandInt32((Random *)v113);
          __asm { VLDR            S20, [R10,#4] }
          _R0 = Random::_genRandInt32((Random *)v113);
            VMOV            S0, R5
            VLDR            S26, [R10,#8]
            VMUL.F64        D1, D11, D14
            VMUL.F64        D2, D12, D14
            VMUL.F32        S2, S2, S18
            VADD.F32        S4, S4, S16
            VADD.F32        S2, S2, S20
            VADD.F32        S0, S0, S26
            VSTR            S4, [SP,#0x368+var_328]
            VSTR            S2, [SP,#0x368+var_324]
            VSTR            S0, [SP,#0x368+var_320]
          Level::addParticle(*(_DWORD *)(LODWORD(_R11) + 2888), 4, (int)&v225);
          --v114;
        while ( v114 );
      case 2009:
        if ( _R8 - 1 <= 0x2E )
          v118 = *(_DWORD *)(LODWORD(_R11) + 2888);
          v119 = _R8;
          v239 = 0;
          v240 = 0;
          v241 = 0;
          goto LABEL_67;
      case 2003:
          VLDR            S18, =0.01; jumptable 00F216A8 case 2003
          VLDR            S22, =-0.03
        v120 = 10;
          v121 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
          _R0 = Random::_genRandInt32((Random *)v121);
            VCVT.F32.F64    S24, D0
          v123 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
          _R0 = Random::nextGaussian((Random *)v123);
            VMUL.F32        S26, S0, S18
          v125 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
          __asm { VMUL.F32        S24, S24, S20 }
          _R0 = Random::nextGaussian((Random *)v125);
          __asm { VMOV            S28, R0 }
          v127 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
          _R0 = Random::nextGaussian((Random *)v127);
            VADD.F32        S2, S24, S18
            VMUL.F32        S4, S28, S18
            VMUL.F32        S0, S0, S18
            VADD.F32        S24, S2, S26
            VADD.F32        S26, S4, S22
            VADD.F32        S28, S0, S2
            VSTR            S24, [SP,#0x368+var_140]
            VSTR            S26, [SP,#0x368+var_13C]
            VSTR            S28, [SP,#0x368+var_138]
          Level::addParticle(*(_DWORD *)(LODWORD(_R11) + 2888), 5, _R10);
            VNEG.F32        S30, S24
            VNEG.F32        S19, S28
            VSTR            S30, [SP,#0x368+var_14C]
            VSTR            S26, [SP,#0x368+var_148]
            VSTR            S19, [SP,#0x368+var_144]
            VSTR            S30, [SP,#0x368+var_158]
            VSTR            S26, [SP,#0x368+var_154]
            VSTR            S28, [SP,#0x368+var_150]
            VSTR            S24, [SP,#0x368+var_164]
            VSTR            S26, [SP,#0x368+var_160]
            VSTR            S19, [SP,#0x368+var_15C]
          --v120;
        while ( v120 );
      case 2008:
        v129 = *(_DWORD *)(LODWORD(_R11) + 2888);
        v242 = 0;
        v243 = 0;
        v244 = 0;
        BlockForceFieldParticle::generateParticleData((BlockForceFieldParticle *)0x3F19999A, COERCE_FLOAT(1), 10, v11);
        v118 = v129;
        v119 = 3;
LABEL_67:
        Level::addParticle(v118, v119, _R10);
      case 2014:
        LOWORD(v249) = _R8;
        v130 = *(ParticleEngine **)(*(_DWORD *)(LODWORD(_R11) + 2880) + 1568);
        BlockPos::BlockPos((int)&v288, _R10);
        __asm { SBFX.W          R3, R8, #0x10, #8 }
        ParticleEngine::crack(v130, (const FullBlock *)&v249, (const BlockPos *)&v288, _R3);
      case 2012:
          __asm { VLDR            S16, =0.2 }
            v132 = *(_DWORD *)(LODWORD(_R11) + 2888);
            v133 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
            v134 = (Random *)v133;
            _R0 = Random::nextGaussian((Random *)v133);
              VMUL.F32        S18, S0, S16
            _R0 = Random::nextGaussian(v134);
            __asm { VMOV            S20, R0 }
              VLDR            S4, [R10]
              VMUL.F32        S2, S20, S16
              VLDR            S6, [R10,#4]
              VMUL.F32        S0, S0, S16
              VLDR            S8, [R10,#8]
              VADD.F32        S4, S4, S18
              VADD.F32        S2, S6, S2
              VADD.F32        S0, S8, S0
              VSTR            S4, [SP,#0x368+var_304]
              VSTR            S2, [SP,#0x368+var_300]
              VSTR            S0, [SP,#0x368+var_2FC]
            v229 = 1045220557;
            v230 = 1045220557;
            v231 = 1045220557;
            Level::addParticle(v132, 2, (int)&v232);
      case 2006:
        v138 = *(_DWORD *)(*(_DWORD *)(LODWORD(_R11) + 2880) + 1568);
        v139 = (MiningFatigueParticle *)operator new(0xCu);
        MiningFatigueParticle::MiningFatigueParticle(v139);
        v246 = v139;
        ParticleEngine::addCustomParticle(v138, (int *)&v246);
        if ( v246 )
          (*(void (**)(void))(*(_DWORD *)v246 + 4))();
        v246 = 0;
        sub_119C884((void **)&v245, "mob.elderguardian.curse");
        _R2 = (*(int (**)(void))(**(_DWORD **)(LODWORD(_R11) + 2876) + 52))();
          VLDR            S6, [R2]
          VLDR            S8, [R2,#4]
          VLDR            S10, [R2,#8]
        v33 = (void *)(v245 - 12);
        if ( (int *)(v245 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v245 - 4);
      case 2005:
        v141 = (BlockSource *)Entity::getRegion(*(Entity **)(LODWORD(_R11) + 2876));
        BlockPos::BlockPos((int)&v248, _R10);
        v142 = (Block *)BlockSource::getBlock(v141, (const BlockPos *)&v248);
        v143 = (int *)Block::getMaterial(v142);
        if ( !Material::isType(v143, 0) )
          v144 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
          __asm { VLDR            S18, =0.02 }
          v145 = (Random *)v144;
          v146 = 15;
            _R4 = Random::nextGaussian(v145);
            _R7 = Random::nextGaussian(v145);
            _R5 = Random::nextGaussian(v145);
              VMOV.F64        D14, D8
              VLDR            S16, [R10]
            _R0 = Random::_genRandInt32(v145);
              VLDR            S20, [R10,#4]
              VCVT.F64.U32    D11, S0
              VCVT.F64.U32    D12, S0
              VLDR            S26, [R10,#8]
              VMUL.F64        D1, D11, D14
              VMUL.F64        D0, D0, D14
              VMUL.F64        D2, D12, D14
              VCVT.F32.F64    S2, D1
              VCVT.F32.F64    S4, D2
              VMOV            S8, R7
              VMOV            S10, R5
              VADD.F32        S2, S2, S16
              VMUL.F32        S6, S6, S18
              VADD.F32        S4, S4, S20
              VADD.F32        S0, S0, S26
              VMUL.F32        S8, S8, S18
              VMUL.F32        S10, S10, S18
              VMOV.F64        D8, D14
              VSTR            S2, [SP,#0x368+var_2B0]
              VSTR            S4, [SP,#0x368+var_2AC]
              VSTR            S6, [SP,#0x368+var_2BC]
              VSTR            S8, [SP,#0x368+var_2B8]
              VSTR            S0, [SP,#0x368+var_2A8]
              VSTR            S10, [SP,#0x368+var_2B4]
            Level::addParticle(*(_DWORD *)(LODWORD(_R11) + 2888), 33, (int)&v247);
            --v146;
          while ( v146 );
      case 2013:
        v153 = 32;
          v154 = *(float *)(_R10 + 4);
          v155 = *(float *)(_R10 + 8);
          v249 = *(int *)_R10;
          v250 = v154;
          v251 = v155;
          v156 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
          _R0 = Random::_genRandInt32((Random *)v156);
            VADD.F32        S0, S0, S0
            VLDR            S2, [SP,#0x368+var_294]
            VSTR            S0, [SP,#0x368+var_294]
          v158 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
          v159 = Random::nextGaussian((Random *)v158);
          v160 = Level::getRandom(*(Level **)(LODWORD(_R11) + 2888));
          v161 = Random::nextGaussian((Random *)v160);
          v162 = *(_DWORD *)(LODWORD(_R11) + 2888);
          v226 = v159;
          v227 = 0;
          v228 = v161;
          Level::addParticle(v162, 20, (int)&v249);
          --v153;
        while ( v153 );
      case 2017:
        __asm { VLDR            S18, =0.2 }
        v163 = 10;
        v164 = *(_BYTE *)(Block::mWoodPlanks + 4);
        _R8 = &Vec3::NEG_UNIT_Y;
          v166 = (Level *)LevelRendererCamera::getLevel((LevelRendererCamera *)LODWORD(_R11));
          _R0 = Random::_genRandInt32(v16);
          v168 = *(_DWORD *)(_R10 + 8);
            VLDR            S2, [R10,#4]
            VLDR            S4, [R8,#8]
          v222 = *(_DWORD *)_R10;
            VMUL.F32        S4, S4, S18
            VLDR            S2, [R8,#4]
            VSTR            S0, [SP,#0x368+var_33C]
            VLDR            S0, [R8]
          v223 = v168;
            VSTR            S0, [SP,#0x368+var_34C]
            VSTR            S2, [SP,#0x368+var_348]
            VSTR            S4, [SP,#0x368+var_344]
          BlockPos::BlockPos((int)&v220, _R10);
          Level::addTerrainParticle(v166, (const Vec3 *)&v222, (const Vec3 *)&v221, v164, (const BlockPos *)&v220);
          --v163;
        while ( v163 );
}


int __fastcall LevelRendererPlayer::renderVRHitFlash(int a1, int a2)
{
  int v2; // r5@1
  int v4; // r0@1
  int v5; // r6@1
  int result; // r0@1
  int v13; // r6@8
  int v14; // r0@8

  v2 = a1;
  _R4 = a2;
  v4 = ClientInstance::getCameraTargetEntity(*(ClientInstance **)(a1 + 2872));
  v5 = v4;
  result = Entity::hasCategory(v4, 2);
  if ( result == 1 )
  {
    if ( Mob::getHealth((Mob *)v5) < 1 )
    {
      __asm { VMOV.F32        S0, #1.0 }
      goto LABEL_8;
    }
    result = *(_DWORD *)(v5 + 3436);
    _VF = __OFSUB__(result, 1);
    _NF = result - 1 < 0;
    if ( result >= 1 )
      _R1 = *(float *)(v5 + 3432);
      _VF = __OFSUB__(LODWORD(_R1), 1);
      _NF = LODWORD(_R1) - 1 < 0;
    if ( !(_NF ^ _VF) )
      __asm
      {
        VMOV            S0, R1
        VMOV            S4, R0
        VCVT.F32.S32    S0, S0
        VLDR            S2, [R4,#8]
        VCVT.F32.S32    S4, S4
        VSUB.F32        S0, S0, S2
        VDIV.F32        S0, S0, S4
      }
LABEL_8:
      __asm { VMOV            R0, S0 }
      v13 = mce::Math::hermiteBlend(_R0, _R1);
      v14 = ClientInstance::getHolosceneRenderer(*(ClientInstance **)(v2 + 2872));
      return j_j_j__ZN17HolosceneRenderer18renderRedHitEffectER13ScreenContextf(v14, _R4, v13);
  }
  return result;
}


signed int __fastcall LevelRendererPlayer::bobHurt(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v5; // r4@1
  int v6; // r0@1
  signed int result; // r0@1
  int v12; // r0@2
  int v13; // r5@2
  float v15; // r1@2
  int v22; // [sp+0h] [bp-78h]@3
  signed int v23; // [sp+4h] [bp-74h]@3
  int v24; // [sp+8h] [bp-70h]@3
  int v25; // [sp+Ch] [bp-6Ch]@3
  int v26; // [sp+10h] [bp-68h]@3
  int v27; // [sp+14h] [bp-64h]@3
  int v28; // [sp+18h] [bp-60h]@3
  int v29; // [sp+1Ch] [bp-5Ch]@3
  int v30; // [sp+20h] [bp-58h]@3
  int v31; // [sp+24h] [bp-54h]@3
  int v32; // [sp+28h] [bp-50h]@3
  int v33; // [sp+2Ch] [bp-4Ch]@3
  int v34; // [sp+30h] [bp-48h]@3
  int v35; // [sp+34h] [bp-44h]@3
  int v36; // [sp+38h] [bp-40h]@3
  int v37; // [sp+3Ch] [bp-3Ch]@3
  int v38; // [sp+40h] [bp-38h]@3
  int v39; // [sp+44h] [bp-34h]@3
  int v40; // [sp+48h] [bp-30h]@3
  float v41; // [sp+4Ch] [bp-2Ch]@3

  v3 = a1;
  _R5 = a3;
  v5 = a2;
  v6 = ClientInstance::getCameraTargetEntity(*(ClientInstance **)(a1 + 2872));
  result = Entity::hasCategory(v6, 1);
  if ( result == 1 )
  {
    __asm { VMOV            S16, R5 }
    v12 = ClientInstance::getCameraTargetEntity(*(ClientInstance **)(v3 + 2872));
    v13 = v12;
    _R0 = *(_DWORD *)(v12 + 3432);
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.S32    S18, S0
    }
    if ( Mob::getHealth((Mob *)v13) <= 0 )
      _R0 = *(_DWORD *)(v13 + 3448);
      __asm
      {
        VLDR            S0, =200.0
        VMOV            S2, R0
        VADD.F32        S0, S16, S0
        VCVT.F32.S32    S2, S2
      }
      v22 = 0;
      v23 = 0;
      v24 = 1065353216;
        VADD.F32        S0, S0, S2
        VLDR            S2, =-8000.0
        VDIV.F32        S0, S2, S0
        VLDR            S2, =40.0
        VSTR            S0, [SP,#0x78+var_2C]
      glm::rotate<float>((int)&v25, v5, (int)&v41, (int)&v22);
      *(_DWORD *)v5 = v25;
      *(_DWORD *)(v5 + 4) = v26;
      *(_DWORD *)(v5 + 8) = v27;
      *(_DWORD *)(v5 + 12) = v28;
      *(_DWORD *)(v5 + 16) = v29;
      *(_DWORD *)(v5 + 20) = v30;
      *(_DWORD *)(v5 + 24) = v31;
      *(_DWORD *)(v5 + 28) = v32;
      *(_DWORD *)(v5 + 32) = v33;
      *(_DWORD *)(v5 + 36) = v34;
      *(_DWORD *)(v5 + 40) = v35;
      *(_DWORD *)(v5 + 44) = v36;
      *(_DWORD *)(v5 + 48) = v37;
      *(_DWORD *)(v5 + 52) = v38;
      *(_DWORD *)(v5 + 56) = v39;
      *(_DWORD *)(v5 + 60) = v40;
    result = *(_DWORD *)(v13 + 3432);
    if ( result >= 1 )
      _R0 = *(_DWORD *)(v13 + 3436);
        VSUB.F32        S0, S18, S16
      _R0 = &mce::Math::PI;
        VDIV.F32        S0, S0, S2
        VMUL.F32        S0, S0, S0
        VLDR            S2, [R0]
        VMUL.F32        S0, S0, S2
        VMOV            R0, S0
      _R6 = mce::Math::sin(_R0, v15);
      _R0 = v13 + 3440;
        VLDR            S16, [R0]
        VNEG.F32        S0, S16
      v23 = 1065353216;
      v24 = 0;
      __asm { VSTR            S0, [SP,#0x78+var_2C] }
      __asm { VMOV.F32        S0, #-14.0 }
      __asm { VMOV            S2, R6 }
      __asm { VMUL.F32        S0, S2, S0 }
      __asm { VSTR            S16, [SP,#0x78+var_2C] }
      result = v40;
  }
  return result;
}


LevelRendererPlayer *__fastcall LevelRendererPlayer::setupCamera(LevelRendererPlayer *this, mce::Camera *a2, float a3)
{
  mce::Camera *v3; // r7@1
  LevelRendererPlayer *v4; // r5@1
  int v5; // r4@1
  int v6; // r6@1
  int v7; // r7@1

  v3 = a2;
  v4 = this;
  v5 = LODWORD(a3);
  v6 = MatrixStack::getTop(a2);
  v7 = MatrixStack::getTop((mce::Camera *)((char *)v3 + 32));
  _R0 = LevelRendererPlayer::getFov(v4, *(float *)&v5, 1);
  __asm { VMOV            S20, R0 }
  _R1 = &LevelRenderer::Z_NEAR;
  __asm { VLDR            S16, [R1] }
  _R0 = LevelRendererCamera::getZFar(v4);
  __asm { VMOV            S18, R0 }
  if ( ClientInstance::isLivingroomMode(*((ClientInstance **)v4 + 718)) == 1 )
  {
    _R0 = (*(int (**)(void))(**((_DWORD **)v4 + 723) + 244))();
    __asm { VMOV            S22, R0 }
  }
  else
    _R0 = ClientInstance::getViewportInfo(*((ClientInstance **)v4 + 718));
    __asm
    {
      VLDR            S0, [R0]
      VLDR            S2, [R0,#4]
      VDIV.F32        S22, S0, S2
    }
  __asm
    VLDR            S0, =0.0087266
    VMUL.F32        S0, S20, S0
    VMOV            R0, S0
  _R0 = tanf(_R0);
    VMOV.F32        S0, #-2.0
    VADD.F32        S2, S16, S18
    VMOV            S4, R0
    VMOV.F32        S6, #1.0
    VMUL.F32        S8, S4, S22
    VSUB.F32        S10, S18, S16
    VMUL.F32        S0, S16, S0
    VNEG.F32        S2, S2
    VDIV.F32        S4, S6, S4
    VMUL.F32        S0, S0, S18
    VDIV.F32        S8, S6, S8
    VDIV.F32        S2, S2, S10
    VDIV.F32        S0, S0, S10
    VSTR            S8, [R7]
  *(_DWORD *)(v7 + 12) = 0;
  *(_DWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v7 + 4) = 0;
  *(_DWORD *)(v7 + 8) = 0;
  __asm { VSTR            S4, [R7,#0x14] }
  *(_DWORD *)(v7 + 32) = 0;
  *(_DWORD *)(v7 + 36) = 0;
  *(_DWORD *)(v7 + 24) = 0;
  *(_DWORD *)(v7 + 28) = 0;
  __asm { VSTR            S2, [R7,#0x28] }
  *(_DWORD *)(v7 + 44) = -1082130432;
  *(_DWORD *)(v7 + 48) = 0;
  *(_DWORD *)(v7 + 52) = 0;
  __asm { VSTR            S0, [R7,#0x38] }
  *(_DWORD *)(v7 + 60) = 0;
  *(_QWORD *)v6 = *(_QWORD *)&Matrix::IDENTITY;
  *(_QWORD *)(v6 + 8) = qword_27E89F0;
  *(_QWORD *)(v6 + 16) = qword_27E89F8;
  *(_QWORD *)(v6 + 24) = qword_27E8A00;
  *(_QWORD *)(v6 + 32) = qword_27E8A08;
  *(_QWORD *)(v6 + 40) = qword_27E8A10;
  *(_QWORD *)(v6 + 48) = *(_QWORD *)&qword_27E8A18;
  *(_QWORD *)(v6 + 56) = *(_QWORD *)&qword_27E8A20;
  LevelRendererPlayer::bobPlayerCamera((int)v4, v6, v5);
  LevelRendererPlayer::addPortalCameraEffect((int)v4, v6, v5);
  LevelRendererPlayer::moveCameraToPlayer((int)v4, v6, v5);
  return j_j_j__ZN19LevelRendererPlayer16computeCameraPosEf(v4, *(float *)&v5);
}


signed int __fastcall LevelRendererPlayer::isPositionTooCloseToCamera(LevelRendererPlayer *this, const Vec3 *a2)
{
  LevelRendererPlayer *v2; // r5@1
  signed int result; // r0@4

  v2 = this;
  _R4 = a2;
  if ( ClientInstance::isHoloRealityMode(*((ClientInstance **)this + 718)) != 1 )
    goto LABEL_8;
  if ( ClientInstance::isRealityFullVRMode(*((ClientInstance **)v2 + 718)) )
  __asm
  {
    VLDR            S0, [R4]
    VLDR            S2, [R4,#4]
  }
  _R0 = *(_DWORD *)(*((_DWORD *)v2 + 720) + 1576);
    VLDR            S4, [R4,#8]
    VLDR            S6, [R0,#0x1D0]
    VLDR            S8, [R0,#0x1E0]
    VMUL.F32        S0, S0, S6
    VLDR            S12, [R0,#0x200]
    VMUL.F32        S2, S2, S8
    VLDR            S10, [R0,#0x1F0]
    VMUL.F32        S4, S4, S10
    VADD.F32        S0, S0, S12
    VADD.F32        S0, S0, S2
    VMOV.F32        S2, #-1.0
    VADD.F32        S0, S0, S4
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_8:
    result = 0;
  else
    result = 1;
  return result;
}


void __fastcall LevelRendererPlayer::tickRain(LevelRendererPlayer *this)
{
  LevelRendererPlayer::tickRain(this);
}


int __fastcall LevelRendererPlayer::_renderOutlineSelection(int a1, int a2, int a3, BlockSource *a4, int a5)
{
  BlockSource *v6; // r6@1
  int v7; // r7@1
  int v8; // r8@1
  int v9; // r0@1
  int v10; // r0@2
  int v11; // r0@2
  Tessellator *v16; // r4@3
  float v18; // [sp+Ch] [bp-8Ch]@3
  int v19; // [sp+18h] [bp-80h]@2
  int v20; // [sp+1Ch] [bp-7Ch]@2
  int v21; // [sp+20h] [bp-78h]@2
  int v22; // [sp+24h] [bp-74h]@2
  int v23; // [sp+28h] [bp-70h]@2
  int v24; // [sp+2Ch] [bp-6Ch]@2
  char v25; // [sp+30h] [bp-68h]@2
  int v26; // [sp+34h] [bp-64h]@2
  int v27; // [sp+38h] [bp-60h]@2
  int v28; // [sp+3Ch] [bp-5Ch]@2
  int v29; // [sp+40h] [bp-58h]@2
  int v30; // [sp+44h] [bp-54h]@2
  int v31; // [sp+48h] [bp-50h]@2
  char v32; // [sp+4Ch] [bp-4Ch]@2
  int v33; // [sp+50h] [bp-48h]@1
  int v34; // [sp+54h] [bp-44h]@1
  int v35; // [sp+58h] [bp-40h]@1
  int v36; // [sp+5Ch] [bp-3Ch]@1
  int v37; // [sp+60h] [bp-38h]@1
  int v38; // [sp+64h] [bp-34h]@1
  int v39; // [sp+68h] [bp-30h]@1
  int v40; // [sp+6Ch] [bp-2Ch]@1
  int v41; // [sp+70h] [bp-28h]@1
  char v42; // [sp+74h] [bp-24h]@1

  _R10 = a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  AABB::AABB((AABB *)&v36);
  v9 = (*(int (__fastcall **)(int, BlockSource *, int, int *))(*(_DWORD *)v7 + 40))(v7, v6, a5, &v36);
  v36 = *(_DWORD *)v9;
  v37 = *(_DWORD *)(v9 + 4);
  v38 = *(_DWORD *)(v9 + 8);
  v39 = *(_DWORD *)(v9 + 12);
  v40 = *(_DWORD *)(v9 + 16);
  v41 = *(_DWORD *)(v9 + 20);
  v42 = *(_BYTE *)(v9 + 24);
  v33 = 0;
  v34 = 0;
  v35 = 0;
  if ( (*(int (__fastcall **)(int, BlockSource *, int, int *))(*(_DWORD *)v7 + 260))(v7, v6, a5, &v33) == 1 )
  {
    AABB::AABB((AABB *)&v26);
    v10 = BlockSource::getBlock(v6, (const BlockPos *)&v33);
    v11 = (*(int (__cdecl **)(int, BlockSource *, int *))(*(_DWORD *)v10 + 32))(v10, v6, &v33);
    v26 = *(_DWORD *)v11;
    v27 = *(_DWORD *)(v11 + 4);
    v28 = *(_DWORD *)(v11 + 8);
    v29 = *(_DWORD *)(v11 + 12);
    v30 = *(_DWORD *)(v11 + 16);
    v31 = *(_DWORD *)(v11 + 20);
    v32 = *(_BYTE *)(v11 + 24);
    AABB::merge((AABB *)&v19, (const AABB *)&v36, (int)&v26);
    v36 = v19;
    v37 = v20;
    v38 = v21;
    v39 = v22;
    v40 = v23;
    v41 = v24;
    v42 = v25;
  }
  __asm
    VLDR            S0, [R10,#0x230]
    VLDR            S2, [R10,#0x234]
    VLDR            S4, [R10,#0x238]
    VNEG.F32        S0, S0
    VNEG.F32        S2, S2
  v16 = *(Tessellator **)(v8 + 40);
    VNEG.F32        S4, S4
    VSTR            S0, [SP,#0x98+var_8C]
    VSTR            S2, [SP,#0x98+var_88]
    VSTR            S4, [SP,#0x98+var_84]
  Tessellator::setOffset(*(Tessellator **)(v8 + 40), (const Vec3 *)&v18);
  tessellateWireBox(v16, (const AABB *)&v36);
  Tessellator::setOffset(v16, (const Vec3 *)&Vec3::ZERO);
  ShaderColor::setColor(*(ShaderColor **)(v8 + 48), (const Color *)&Color::BLACK);
  return Tessellator::draw((char *)v16, v8, _R10 + 2824);
}


void __fastcall LevelRendererPlayer::playDeferredSound(float a1, int *a2, int a3, int a4, int a5)
{
  LevelRendererPlayer::playDeferredSound(a1, a2, a3, a4, a5);
}


void __fastcall LevelRendererPlayer::~LevelRendererPlayer(LevelRendererPlayer *this)
{
  LevelRendererPlayer::~LevelRendererPlayer(this);
}


int __fastcall LevelRendererPlayer::moveCameraToPlayer(int a1, int a2, int a3)
{
  int v3; // r8@1
  Level *v13; // r0@2
  int v14; // r0@3
  int v15; // r0@3
  int v16; // r0@3
  float v19; // r3@4
  Options *v20; // r0@6
  int v21; // r6@6
  Options *v22; // r0@8
  __int64 v26; // r0@15
  double v27; // r2@15
  int *v28; // r2@15
  int *v29; // r0@15
  Options *v33; // r0@16
  float v34; // r1@16
  float v43; // r1@21
  float v45; // r1@21
  float v47; // r1@21
  float v49; // r1@21
  char v51; // r8@21
  unsigned int v52; // r9@21
  float v65; // r0@31
  Options *v66; // r0@36
  int result; // r0@38
  int v69; // [sp+10h] [bp-130h]@19
  int v70; // [sp+14h] [bp-12Ch]@19
  int v71; // [sp+18h] [bp-128h]@21
  const BlockPos *v72; // [sp+1Ch] [bp-124h]@1
  float v73; // [sp+20h] [bp-120h]@22
  float v74; // [sp+2Ch] [bp-114h]@22
  int v75; // [sp+38h] [bp-108h]@3
  int v76; // [sp+3Ch] [bp-104h]@3
  int v77; // [sp+40h] [bp-100h]@3
  int v78; // [sp+44h] [bp-FCh]@4
  int v79; // [sp+48h] [bp-F8h]@4
  int v80; // [sp+4Ch] [bp-F4h]@4
  int v81; // [sp+50h] [bp-F0h]@4
  int v82; // [sp+54h] [bp-ECh]@4
  int v83; // [sp+58h] [bp-E8h]@4
  int v84; // [sp+5Ch] [bp-E4h]@4
  int v85; // [sp+60h] [bp-E0h]@4
  int v86; // [sp+64h] [bp-DCh]@4
  int v87; // [sp+68h] [bp-D8h]@4
  int v88; // [sp+6Ch] [bp-D4h]@4
  int v89; // [sp+70h] [bp-D0h]@4
  int v90; // [sp+74h] [bp-CCh]@4
  char v91; // [sp+7Ch] [bp-C4h]@15
  int v92; // [sp+80h] [bp-C0h]@15
  float v93; // [sp+84h] [bp-BCh]@15
  float v94; // [sp+90h] [bp-B0h]@9
  float v97; // [sp+9Ch] [bp-A4h]@4
  char v100; // [sp+A8h] [bp-98h]@9
  float v101; // [sp+B4h] [bp-8Ch]@4
  float v103; // [sp+BCh] [bp-84h]@4
  int v106; // [sp+C8h] [bp-78h]@15
  int v107; // [sp+CCh] [bp-74h]@4
  signed int v108; // [sp+D0h] [bp-70h]@4
  int v109; // [sp+D4h] [bp-6Ch]@4

  v3 = a1;
  _R5 = a3;
  _R4 = a2;
  _R7 = (Entity *)ClientInstance::getCameraEntity(*(ClientInstance **)(a1 + 2872));
  v72 = (const BlockPos *)Entity::getRegion(_R7);
  __asm { VLDR            S0, [R7,#0x13C] }
  _R0 = &Player::DEFAULT_PLAYER_HEIGHT_OFFSET;
  __asm
  {
    VLDR            S2, [R0]
    VSUB.F32        S16, S0, S2
  }
  _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R7 + 232))(_R7);
    VMOV            S0, R0
    VMOV            S18, R5
    VSUB.F32        S16, S16, S0
  if ( Entity::getRide(_R7) )
    v13 = (Level *)Entity::getLevel(_R7);
    if ( Level::isClientSide(v13) == 1 )
    {
      v14 = Entity::getRide(_R7);
      (*(void (__fastcall **)(int *))(*(_DWORD *)v14 + 80))(&v75);
      v15 = Entity::getRide(_R7);
      *(_DWORD *)(v15 + 152) = v75;
      *(_DWORD *)(v15 + 156) = v76;
      *(_DWORD *)(v15 + 160) = v77;
      v16 = Entity::getRide(_R7);
      (*(void (**)(void))(*(_DWORD *)v16 + 136))();
    }
  (*(void (__fastcall **)(Entity *))(*(_DWORD *)_R7 + 312))(_R7);
  Entity::getInterpolatedPosition((Entity *)&v103, *(float *)&_R7, _R5);
  _R0 = v3 + 2732;
    VLDR            S22, [SP,#0x140+var_84]
    VLDR            S20, [SP,#0x140+var_80]
    VLDR            S0, [R0]
  _R0 = v3 + 2728;
    VLDR            S24, [SP,#0x140+var_7C]
  v107 = 0;
  v108 = 0;
  __asm { VSUB.F32        S2, S2, S0 }
  v109 = 1065353216;
    VMUL.F32        S2, S2, S18
    VADD.F32        S0, S2, S0
    VSTR            S0, [SP,#0x140+var_A4]
  glm::rotate<float>((int)&v75, _R4, (int)&v97, (int)&v107);
  *(_DWORD *)_R4 = v75;
  *(_DWORD *)(_R4 + 4) = v76;
  *(_DWORD *)(_R4 + 8) = v77;
  *(_DWORD *)(_R4 + 12) = v78;
  *(_DWORD *)(_R4 + 16) = v79;
  *(_DWORD *)(_R4 + 20) = v80;
  *(_DWORD *)(_R4 + 24) = v81;
  *(_DWORD *)(_R4 + 28) = v82;
  *(_DWORD *)(_R4 + 32) = v83;
  *(_DWORD *)(_R4 + 36) = v84;
  *(_DWORD *)(_R4 + 40) = v85;
  *(_DWORD *)(_R4 + 44) = v86;
  *(_DWORD *)(_R4 + 48) = v87;
  *(_DWORD *)(_R4 + 52) = v88;
  *(_DWORD *)(_R4 + 56) = v89;
  *(_DWORD *)(_R4 + 60) = v90;
  Entity::getInterpolatedRotation((Entity *)&v101, *(float *)&_R7, *(float *)&_R5, v19);
    VMOV.F32        S0, #0.125
    VADD.F32        S0, S16, S0
  if ( !_ZF )
    __asm { VMOVNE.F32      S16, S0 }
  v20 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(v3 + 2872));
  v21 = Options::getPlayerViewPerspective(v20);
  if ( Entity::hasCategory((int)_R7, 1) == 1 && (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R7 + 784))(_R7) == 1 )
    __asm
      VLDR            S0, =0.3
      VMOV.F32        S1, #1.0
      VLDR            S2, [R4,#0x14]
      VLDR            S4, [R4,#0x18]
      VLDR            S8, [R4,#0x10]
      VMUL.F32        S2, S2, S0
      VLDR            S6, [R4,#0x1C]
      VMUL.F32        S4, S4, S0
      VMUL.F32        S8, S8, S0
      VLDR            S10, [R4,#0x34]
      VMUL.F32        S0, S6, S0
      VLDR            S6, [R4,#0x30]
      VLDR            S12, [R4,#0x38]
      VADD.F32        S16, S16, S1
      VLDR            S14, [R4,#0x3C]
      VADD.F32        S2, S10, S2
      VADD.F32        S4, S12, S4
      VADD.F32        S6, S6, S8
      VADD.F32        S0, S14, S0
      VSTR            S6, [R4,#0x30]
      VSTR            S2, [R4,#0x34]
      VSTR            S4, [R4,#0x38]
      VSTR            S0, [R4,#0x3C]
    v22 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(v3 + 2872));
    if ( Options::getFixedCamera(v22) )
      goto LABEL_36;
    BlockPos::BlockPos((int)&v100, (int)&v103);
    BlockSource::getBlockAndData((BlockSource *)&v94, v72, (int)&v100);
    if ( LOBYTE(v94) == *(_BYTE *)(Block::mBed + 4) )
      _R6 = BYTE1(v94) & 3;
      if ( ClientInstance::isRealityFullVRMode(*(ClientInstance **)(v3 + 2872)) == 1 )
      {
        v107 = 1065353216;
        v108 = 0;
        v109 = 0;
        v97 = 30.0;
        glm::rotate<float>((int)&v75, _R4, (int)&v97, (int)&v107);
        _R1 = _R6 + 2;
        *(_DWORD *)_R4 = v75;
        __asm { VMOV            S0, R1 }
        *(_DWORD *)(_R4 + 4) = v76;
        *(_DWORD *)(_R4 + 8) = v77;
        *(_DWORD *)(_R4 + 12) = v78;
        *(_DWORD *)(_R4 + 16) = v79;
        *(_DWORD *)(_R4 + 20) = v80;
        *(_DWORD *)(_R4 + 24) = v81;
        *(_DWORD *)(_R4 + 28) = v82;
        *(_DWORD *)(_R4 + 32) = v83;
        *(_DWORD *)(_R4 + 36) = v84;
        *(_DWORD *)(_R4 + 40) = v85;
        *(_DWORD *)(_R4 + 44) = v86;
        __asm { VCVT.F32.S32    S0, S0 }
        *(_DWORD *)(_R4 + 48) = v87;
        *(_DWORD *)(_R4 + 52) = v88;
        *(_DWORD *)(_R4 + 56) = v89;
        __asm { VLDR            S2, =90.0 }
        *(_DWORD *)(_R4 + 60) = v90;
        __asm { VMUL.F32        S0, S0, S2 }
        v107 = 0;
        v108 = 1065353216;
      }
      else
        _R5 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R7 + 1396))(_R7);
        _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R7 + 1400))(_R7);
        __asm
        {
          VMOV            S0, R0
          VCVT.F32.S32    S0, S0
        }
        if ( !*(_DWORD *)(v3 + 2904) )
          sub_119C8E4();
          VMOV            S2, R5
          VCVT.F32.S32    S2, S2
          VSUB.F32        S2, S2, S0
          VMUL.F32        S2, S2, S18
          VADD.F32        S0, S2, S0
          VLDR            S2, =0.01
          VMUL.F32        S0, S0, S2
          VMOV            R3, S0
        v65 = COERCE_FLOAT((*(int (__fastcall **)(int))(v3 + 2908))(v3 + 2896));
        v107 = -1082130432;
        v97 = v65;
        __asm { VMOV            S0, R6 }
          VLDR            S2, =90.0
      __asm { VSTR            S0, [SP,#0x140+var_A4] }
      glm::rotate<float>((int)&v75, _R4, (int)&v97, (int)&v107);
      *(_DWORD *)_R4 = v75;
      *(_DWORD *)(_R4 + 4) = v76;
      *(_DWORD *)(_R4 + 8) = v77;
      *(_DWORD *)(_R4 + 12) = v78;
      *(_DWORD *)(_R4 + 16) = v79;
      *(_DWORD *)(_R4 + 20) = v80;
      *(_DWORD *)(_R4 + 24) = v81;
      *(_DWORD *)(_R4 + 28) = v82;
      *(_DWORD *)(_R4 + 32) = v83;
      *(_DWORD *)(_R4 + 36) = v84;
      *(_DWORD *)(_R4 + 40) = v85;
      *(_DWORD *)(_R4 + 44) = v86;
      *(_DWORD *)(_R4 + 48) = v87;
      *(_DWORD *)(_R4 + 52) = v88;
      *(_DWORD *)(_R4 + 56) = v89;
      *(_DWORD *)(_R4 + 60) = v90;
      VLDR            S0, =180.0
      VLDR            S2, [SP,#0x140+var_88]
      VADD.F32        S0, S2, S0
    v107 = 0;
    v108 = -1082130432;
    v109 = 0;
    __asm { VSTR            S0, [SP,#0x140+var_A4] }
    glm::rotate<float>((int)&v75, _R4, (int)&v97, (int)&v107);
    *(_DWORD *)_R4 = v75;
    *(_DWORD *)(_R4 + 4) = v76;
    *(_DWORD *)(_R4 + 8) = v77;
    *(_DWORD *)(_R4 + 12) = v78;
    *(_DWORD *)(_R4 + 16) = v79;
    *(_DWORD *)(_R4 + 20) = v80;
    *(_DWORD *)(_R4 + 24) = v81;
    *(_DWORD *)(_R4 + 28) = v82;
    *(_DWORD *)(_R4 + 32) = v83;
    *(_DWORD *)(_R4 + 36) = v84;
    *(_DWORD *)(_R4 + 40) = v85;
    *(_DWORD *)(_R4 + 44) = v86;
    *(_DWORD *)(_R4 + 48) = v87;
    *(_DWORD *)(_R4 + 52) = v88;
    *(_DWORD *)(_R4 + 56) = v89;
    *(_DWORD *)(_R4 + 60) = v90;
    v107 = -1082130432;
    v108 = 0;
    v97 = v101;
    goto LABEL_34;
  if ( !v21 )
    __asm { VLDR            S0, =0.05 }
    *(_DWORD *)(v3 + 2736) = 0;
      VLDR            S2, [R4,#0x20]
      VLDR            S4, [R4,#0x24]
      VLDR            S6, [R4,#0x28]
      VLDR            S8, [R4,#0x2C]
      VMUL.F32        S6, S6, S0
      VLDR            S10, [R4,#0x30]
      VMUL.F32        S0, S8, S0
      VLDR            S12, [R4,#0x34]
      VLDR            S14, [R4,#0x38]
      VLDR            S1, [R4,#0x3C]
      VADD.F32        S6, S14, S6
      VADD.F32        S0, S1, S0
      VSTR            S2, [R4,#0x30]
      VSTR            S4, [R4,#0x34]
      VSTR            S6, [R4,#0x38]
    goto LABEL_36;
  if ( v21 != 1 || _R7 == *(Entity **)(v3 + 2876) )
    _R0 = v3 + 2708;
    _R7 = v3 + 2736;
    __asm { VLDR            S0, [R0] }
    _R0 = v3 + 2704;
      VLDR            S2, [R0]
      VSUB.F32        S2, S2, S0
      VMUL.F32        S2, S2, S18
      VSTR            S0, [R7]
    v33 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(v3 + 2872));
    if ( Options::getFixedCamera(v33) == 1 )
      _R0 = v3 + 2720;
      _R1 = v3 + 2724;
      __asm
        VLDR            S0, [R4,#0x20]
        VLDR            S1, [R7]
        VLDR            S2, [R4,#0x24]
        VLDR            S4, [R4,#0x28]
        VMUL.F32        S0, S0, S1
        VLDR            S6, [R4,#0x2C]
        VMUL.F32        S2, S2, S1
        VLDR            S3, [R1]
        VMUL.F32        S4, S4, S1
        VLDR            S5, [R0]
        VMUL.F32        S6, S6, S1
        VLDR            S8, [R4,#0x30]
      _R0 = v3 + 2712;
        VSUB.F32        S1, S5, S3
        VLDR            S10, [R4,#0x34]
        VLDR            S12, [R4,#0x38]
        VSUB.F32        S0, S8, S0
        VLDR            S14, [R4,#0x3C]
        VSUB.F32        S2, S10, S2
        VLDR            S20, [R0]
        VSUB.F32        S4, S12, S4
      _R0 = v3 + 2716;
        VSUB.F32        S6, S14, S6
        VLDR            S22, [R0]
        VMUL.F32        S8, S1, S18
        VSTR            S0, [R4,#0x30]
        VSTR            S2, [R4,#0x34]
        VSTR            S4, [R4,#0x38]
        VSTR            S6, [R4,#0x3C]
      v107 = 1065353216;
      __asm { VADD.F32        S8, S8, S3 }
      v108 = 0;
      v109 = 0;
      __asm { VSTR            S8, [SP,#0x140+var_A4] }
      __asm { VSUB.F32        S0, S20, S22 }
      __asm { VMUL.F32        S0, S0, S18 }
      __asm { VADD.F32        S0, S0, S22 }
      v107 = 0;
      v108 = 1065353216;
    else
        VSUB.F32        S26, S20, S16
        VLDR            S20, [SP,#0x140+var_88]
        VLDR            S18, [SP,#0x140+var_8C]
      v70 = v3;
      _R0 = &mce::Math::DEGRAD;
      v69 = v21;
        VLDR            S28, [R0]
        VMUL.F32        S0, S28, S20
        VMOV            R5, S0
        VLDR            S0, =180.0
        VADD.F32        S0, S18, S0
      if ( _ZF )
        __asm { VMOVEQ.F32      S18, S0 }
      _R0 = mce::Math::sin(_R5, v34);
        VMUL.F32        S0, S18, S28
        VMOV            S28, R0
        VMOV            R6, S0
      _R0 = mce::Math::cos(_R6, v43);
        VMOV            S0, R0
        VLDR            S30, [R7]
        VMUL.F32        S28, S0, S28
      _R0 = mce::Math::cos(_R5, v45);
      __asm { VMOV            S17, R0 }
      _R0 = mce::Math::cos(_R6, v47);
        VLDR            S19, [R7]
        VMUL.F32        S17, S0, S17
      _R0 = mce::Math::sin(_R6, v49);
        VLDR            S2, [R7]
        VMUL.F32        S4, S28, S30
      v71 = v3 + 2736;
        VMUL.F32        S0, S2, S0
        VMUL.F32        S2, S17, S19
        VLDR            S19, =0.1
      v51 = 0;
      v52 = 0;
        VADD.F32        S28, S4, S22
        VADD.F32        S30, S0, S26
        VSUB.F32        S17, S24, S2
      do
        _R0 = (v51 & 2) - 1;
        _R1 = (v52 & 2) - 1;
          VMOV            S2, R1
        _R0 = ((v52 >> 1) & 2) - 1;
          VMOV            S4, R0
          VCVT.F32.S32    S4, S4
          VMUL.F32        S0, S0, S19
          VMUL.F32        S2, S2, S19
          VMUL.F32        S4, S4, S19
          VADD.F32        S6, S28, S0
          VADD.F32        S0, S0, S22
          VADD.F32        S8, S2, S26
          VADD.F32        S2, S30, S2
          VADD.F32        S10, S4, S24
          VADD.F32        S6, S6, S4
          VADD.F32        S4, S17, S4
          VSTR            S0, [SP,#0x140+var_114]
          VSTR            S8, [SP,#0x140+var_110]
          VSTR            S10, [SP,#0x140+var_10C]
          VSTR            S6, [SP,#0x140+var_120]
          VSTR            S2, [SP,#0x140+var_11C]
          VSTR            S4, [SP,#0x140+var_118]
        BlockSource::clip((BlockSource *)&v75, v72, (const Vec3 *)&v74, (int)&v73, 1, 1, 200, 0);
        if ( (v75 & 0xFFFFFFFE) != 2 )
          __asm
          {
            VLDR            S0, [SP,#0x140+var_F4]
            VLDR            S2, [SP,#0x140+var_F0]
            VSUB.F32        S0, S22, S0
            VLDR            S4, [SP,#0x140+var_EC]
            VSUB.F32        S2, S26, S2
          }
          _R0 = v71;
            VSUB.F32        S4, S24, S4
            VMUL.F32        S0, S0, S0
            VMUL.F32        S2, S2, S2
            VMUL.F32        S4, S4, S4
            VADD.F32        S0, S2, S0
            VLDR            S2, [R0]
            VADD.F32        S0, S0, S4
            VSQRT.F32       S0, S0
            VCMPE.F32       S0, S2
            VMRS            APSR_nzcv, FPSCR
          if ( _NF ^ _VF )
            __asm { VSTRLT          S0, [R0] }
        ++v52;
        v51 += 2;
      while ( v52 != 8 );
      v3 = v70;
      if ( v69 == 2 )
        v97 = 180.0;
        VLDR            S0, [SP,#0x140+var_8C]
        VSUB.F32        S0, S0, S18
      __asm { VLDR            S0, [SP,#0x140+var_88] }
      __asm { VSUB.F32        S0, S0, S20 }
      _R0 = v83;
      _R1 = v84;
      __asm { VMOV            S8, R0 }
      _R2 = v85;
      __asm { VMOV            S12, R1 }
      _R3 = v86;
      _R0 = v71;
      __asm { VMOV            S14, R2 }
        VMOV            S1, R3
        VLDR            S0, [SP,#0x140+var_D8]
        VLDR            S10, [R0]
        VLDR            S2, [SP,#0x140+var_D4]
        VMUL.F32        S8, S8, S10
        VLDR            S4, [SP,#0x140+var_D0]
        VMUL.F32        S12, S12, S10
        VLDR            S6, [SP,#0x140+var_CC]
        VMUL.F32        S14, S14, S10
        VMUL.F32        S10, S1, S10
        VSUB.F32        S0, S0, S8
        VSUB.F32        S2, S2, S12
        VSUB.F32        S4, S4, S14
        VSUB.F32        S6, S6, S10
        VLDR            S0, [SP,#0x140+var_88]
      __asm { VSUB.F32        S0, S20, S0 }
      __asm { VLDR            S0, [SP,#0x140+var_8C] }
      *(_QWORD *)&v107 = 1065353216LL;
      __asm { VSUB.F32        S0, S18, S0 }
LABEL_34:
    v29 = &v75;
    v28 = (int *)&v97;
    goto LABEL_35;
  Entity::getInterpolatedPosition((Entity *)&v97, *(float *)&_R7, _R5);
    VLDR            S0, [R7,#0x13C]
    VLDR            S2, [R7,#0x170]
    VSUB.F32        S0, S2, S0
    VLDR            S2, [SP,#0x140+var_A0]
    VADD.F32        S0, S0, S2
    VSTR            S0, [SP,#0x140+var_A0]
  Entity::getInterpolatedPosition((Entity *)&v94, *(float *)(v3 + 2876), _R5);
  _R0 = *(_DWORD *)(v3 + 2876);
  HIDWORD(v26) = &v93;
    VLDR            S4, [SP,#0x140+var_A0]
    VLDR            S6, [SP,#0x140+var_9C]
    VLDR            S0, [R0,#0x13C]
    VLDR            S2, [R0,#0x170]
  LODWORD(v26) = &v91;
    VLDR            S2, [SP,#0x140+var_AC]
    VLDR            S2, [SP,#0x140+var_A4]
    VSTR            S0, [SP,#0x140+var_AC]
    VSUB.F32        S0, S4, S0
    VLDR            S8, [SP,#0x140+var_B0]
    VLDR            S10, [SP,#0x140+var_A8]
    VSUB.F32        S2, S2, S8
    VSUB.F32        S4, S6, S10
    VSTR            S2, [SP,#0x140+var_BC]
    VSTR            S0, [SP,#0x140+var_B8]
    VSTR            S4, [SP,#0x140+var_B4]
  Vec3::rotationFromDirection(v26, v27);
  v108 = 1065353216;
  v109 = 0;
  v28 = &v106;
  v106 = v92;
  v29 = &v75;
LABEL_35:
  glm::rotate<float>((int)v29, _R4, (int)v28, (int)&v107);
LABEL_36:
  v66 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(v3 + 2872));
  if ( !Options::getFixedCamera(v66) )
    v107 = 1065353216;
    v108 = 1065353216;
    __asm { VADD.F32        S0, S2, S0 }
  result = (*(int (**)(void))(**(_DWORD **)(v3 + 2892) + 76))();
  if ( result == 1 )
    HolographicPlatform::getTransform((int)&v75, *(_DWORD *)(v3 + 2892), 16, 1, 14);
    result = 0;
    v87 = 0;
    v88 = 0;
    v89 = 0;
      VLDR            S4, [SP,#0x140+var_F4]
      VLDR            S2, [SP,#0x140+var_F8]
      VMUL.F32        S4, S4, S16
      VLDR            S0, [SP,#0x140+var_F0]
      VMUL.F32        S2, S2, S16
      VMUL.F32        S0, S0, S16
      VMOV.F32        S16, S4
  else
      VLDR            S2, =0.0
      VMOV.F32        S0, S2
    VLDR            S8, [R4,#0xC]
    VLDR            S10, [R4,#0x10]
    VLDR            S12, [R4,#0x14]
    VMUL.F32        S8, S8, S2
    VLDR            S14, [R4,#0x18]
    VMUL.F32        S10, S10, S16
    VLDR            S1, [R4,#0x1C]
    VMUL.F32        S12, S12, S16
    VLDR            S6, [R4,#8]
    VMUL.F32        S14, S14, S16
    VLDMIA          R4, {S3-S4}
    VMUL.F32        S1, S1, S16
    VMUL.F32        S4, S4, S2
    VLDR            S5, [R4,#0x20]
    VMUL.F32        S3, S3, S2
    VLDR            S7, [R4,#0x28]
    VMUL.F32        S2, S6, S2
    VLDR            S6, [R4,#0x24]
    VMUL.F32        S5, S5, S0
    VMUL.F32        S6, S6, S0
    VADD.F32        S8, S1, S8
    VADD.F32        S4, S12, S4
    VLDR            S12, [R4,#0x2C]
    VADD.F32        S10, S10, S3
    VMUL.F32        S3, S7, S0
    VMUL.F32        S0, S12, S0
    VLDR            S12, [R4,#0x38]
    VADD.F32        S2, S14, S2
    VADD.F32        S4, S4, S6
    VLDR            S6, [R4,#0x30]
    VADD.F32        S10, S10, S5
    VADD.F32        S0, S8, S0
    VLDR            S8, [R4,#0x34]
    VADD.F32        S2, S2, S3
    VADD.F32        S4, S4, S8
    VADD.F32        S6, S10, S6
    VLDR            S10, [R4,#0x3C]
    VADD.F32        S0, S0, S10
    VADD.F32        S2, S2, S12
    VSTR            S6, [R4,#0x30]
    VSTR            S4, [R4,#0x34]
    VSTR            S2, [R4,#0x38]
    VSTR            S0, [R4,#0x3C]
  return result;
}


signed int *__fastcall LevelRendererPlayer::stopRecord(LevelRendererPlayer *this, const Vec3 *a2)
{
  LevelRendererPlayer *v2; // r5@1
  unsigned int v3; // r6@1
  unsigned int v4; // r7@1
  signed int *result; // r0@1
  signed int v6; // r8@2
  int v7; // r4@2
  int v8; // r1@4
  bool v9; // zf@4
  signed int v10; // r1@8
  signed int v11; // r9@9
  bool v12; // zf@12
  __int64 v13; // r2@15
  LevelRendererPlayer *v14; // [sp+8h] [bp-38h]@1
  int v15; // [sp+10h] [bp-30h]@1
  int v16; // [sp+14h] [bp-2Ch]@1
  int v17; // [sp+18h] [bp-28h]@1

  v2 = this;
  v14 = this;
  BlockPos::BlockPos((int)&v15, (int)a2);
  v3 = *((_DWORD *)v2 + 657);
  v4 = 8976890 * v15 + 981131 * v16 + v17;
  result = *(signed int **)(*((_DWORD *)v2 + 656) + 4 * (v4 % v3));
  if ( result )
  {
    v6 = *result;
    v7 = *(_DWORD *)(*result + 32);
    while ( 1 )
    {
      if ( v7 == v4 )
      {
        v8 = *(_DWORD *)(v6 + 8);
        v9 = v15 == v8;
        if ( v15 == v8 )
          v9 = v16 == *(_DWORD *)(v6 + 12);
        if ( v9 )
        {
          v10 = *(_DWORD *)(v6 + 16);
          if ( v17 == v10 )
            break;
        }
      }
      v11 = *(_DWORD *)v6;
      if ( *(_DWORD *)v6 )
        v7 = *(_DWORD *)(v11 + 32);
        result = (signed int *)v6;
        v6 = *(_DWORD *)v6;
        if ( *(_DWORD *)(v11 + 32) % v3 == v4 % v3 )
          continue;
      return result;
    }
    v12 = result == 0;
    if ( result )
      v10 = *result;
      v12 = *result == 0;
    if ( !v12 )
      v13 = *(_QWORD *)(v10 + 24);
      (*(void (**)(void))(**((_DWORD **)v14 + 721) + 40))();
      result = (signed int *)std::_Hashtable<BlockPos,std::pair<BlockPos const,unsigned long long>,std::allocator<std::pair<BlockPos const,unsigned long long>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_erase(
                               (unsigned __int64 *)v14 + 328,
                               (int)&v15);
  }
  return result;
}


void __fastcall LevelRendererPlayer::playSound(float a1, float a2, int a3, int a4, int a5, int a6)
{
  float v12; // [sp+4h] [bp-1Ch]@1

  _R5 = a1;
  Entity::getAttachPos((AABB *)&v12, SLODWORD(a2), a3, 0);
  __asm
  {
    VLDR            S0, [R5,#0x224]
    VLDR            S6, [SP,#0x20+var_1C]
    VLDR            S2, [R5,#0x228]
    VLDR            S8, [SP,#0x20+var_18]
    VSUB.F32        S0, S6, S0
    VLDR            S4, [R5,#0x22C]
    VMOV.F32        S6, #16.0
    VSUB.F32        S2, S8, S2
    VLDR            S10, [SP,#0x20+var_14]
    VMOV.F32        S8, #1.0
    VSUB.F32        S4, S10, S4
    VMUL.F32        S10, S0, S0
    VLDR            S0, [SP,#0x20+arg_0]
    VMUL.F32        S2, S2, S2
    VCMPE.F32       S0, S8
    VMRS            APSR_nzcv, FPSCR
    VMUL.F32        S12, S0, S6
    VMUL.F32        S4, S4, S4
    VADD.F32        S2, S2, S10
    VADD.F32        S2, S2, S4
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S6, S12 }
    VMUL.F32        S6, S6, S6
    VCMPE.F32       S2, S6
  if ( _NF ^ _VF )
    __asm
    {
      VMOV            R3, S0
      VLDR            S2, [SP,#0x20+arg_4]
      VSTR            S2, [SP,#0x20+var_20]
    }
    (*(void (**)(void))(**(_DWORD **)(LODWORD(_R5) + 2884) + 8))();
}


int __fastcall LevelRendererPlayer::blockCanHaveSelectionOverlay(LevelRendererPlayer *this, const Block *a2)
{
  LevelRendererPlayer *v2; // r4@1
  Block *v3; // r6@1
  Options *v4; // r0@1
  char *v5; // r0@2
  BlockSource *v6; // r5@2
  int result; // r0@4
  Entity *v8; // r6@6
  int v9; // r8@6
  const ItemInstance *v10; // r0@6
  Player *v11; // r4@8
  const ItemInstance *v12; // r0@8
  int v13; // [sp+8h] [bp-60h]@2
  char v14; // [sp+Ch] [bp-5Ch]@6
  int v15; // [sp+10h] [bp-58h]@6

  v2 = this;
  v3 = a2;
  v4 = (Options *)ClientInstance::getOptions(*((ClientInstance **)this + 718));
  if ( Options::getHideHud(v4)
    || (v5 = Level::getHitResult(*((Level **)v2 + 722)),
        HitResult::HitResult((int)&v13, (int)v5),
        v6 = (BlockSource *)Entity::getRegion(*((Entity **)v2 + 719)),
        Block::getRenderLayer(v3) == 9)
    || (v13 & 0xFFFFFFFE) == 2 )
  {
    result = 0;
  }
  else if ( (*(int (__fastcall **)(Block *))(*(_DWORD *)v3 + 68))(v3)
         || (v8 = (Entity *)*((_DWORD *)v2 + 719),
             v9 = v14,
             v10 = (const ItemInstance *)Player::getSelectedItem(*((Player **)v2 + 719)),
             BlockSource::checkBlockPermissions(v6, v8, (const BlockPos *)&v15, v9, v10, 0)) )
    result = 1;
  else
    v11 = (Player *)*((_DWORD *)v2 + 719);
    v12 = (const ItemInstance *)Player::getSelectedItem(v11);
    result = BlockSource::checkBlockDestroyPermissions(v6, v11, (const BlockPos *)&v15, v12, 0);
  return result;
}


int __fastcall LevelRendererPlayer::renderCracks(int result, BaseEntityRenderContext *a2)
{
  int v2; // r11@1
  BaseEntityRenderContext *v3; // r10@1
  BlockSource *v9; // r9@4
  const Block *v10; // r4@4
  int v11; // r0@5
  int v12; // r4@6
  const Block *v13; // r0@6
  BlockEntity *v14; // r7@8
  BlockEntityRenderDispatcher *v16; // r0@8
  int v17; // r1@8
  int v18; // r2@8
  int v19; // r1@8
  const mce::TexturePtr *v21; // r1@8
  mce::MaterialPtr *v22; // [sp+4h] [bp-5Ch]@0
  mce::MaterialPtr *v23; // [sp+18h] [bp-48h]@2
  int v24; // [sp+20h] [bp-40h]@5
  int v25; // [sp+24h] [bp-3Ch]@5
  int v26; // [sp+28h] [bp-38h]@5
  unsigned __int8 v27; // [sp+2Ch] [bp-34h]@4

  v2 = result;
  v3 = a2;
  _R5 = *(_DWORD *)(result + 2660);
  if ( _R5 )
  {
    v23 = (mce::MaterialPtr *)(result + 2812);
    __asm { VMOV.F32        S16, #10.0 }
    result = (int)&mce::TexturePtr::NONE;
    do
    {
      __asm
      {
        VLDR            S0, [R5,#0x14]
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        v9 = *(BlockSource **)(v2 + 1244);
        BlockSource::getBlockAndData((BlockSource *)&v27, *(const BlockPos **)(v2 + 1244), _R5 + 4);
        v10 = (const Block *)Block::mBlocks[v27];
        if ( LevelRendererPlayer::blockCanHaveCracksOverlay(
               (LevelRendererPlayer *)v2,
               (const Block *)Block::mBlocks[v27]) == 1 )
        {
          v11 = BaseEntityRenderContext::getScreenContext(v3);
          __asm
          {
            VLDR            S0, [R5,#0x14]
            VSTR            S0, [SP,#0x60+var_5C]
          }
          LevelRendererPlayer::renderCracksOverlay(v2, *(float *)&v11, v9, v10, _R5 + 4, (int)v22);
          v24 = 0;
          v25 = 0;
          v26 = 0;
          result = (*(int (__fastcall **)(const Block *, BlockSource *, int, int *))(*(_DWORD *)v10 + 260))(
                     v10,
                     v9,
                     _R5 + 4,
                     &v24);
          if ( result == 1 )
            v12 = BaseEntityRenderContext::getScreenContext(v3);
            v13 = (const Block *)BlockSource::getBlock(v9, (const BlockPos *)&v24);
            __asm
            {
              VLDR            S0, [R5,#0x14]
              VSTR            S0, [SP,#0x60+var_5C]
            }
            result = LevelRendererPlayer::renderCracksOverlay(v2, *(float *)&v12, v9, v13, (int)&v24, (int)v22);
        }
        else
          result = BlockSource::getBlockEntity(v9, (const BlockPos *)(_R5 + 4));
          if ( result )
            v14 = (BlockEntity *)(*(int (**)(void))(*(_DWORD *)result + 92))();
            _R4 = GameMode::getDestroyProgress(*(GameMode **)(*(_DWORD *)(v2 + 2876) + 5172));
            v16 = (BlockEntityRenderDispatcher *)BaseEntityRenderContext::getBlockEntityRenderDispatcher(v3);
            __asm { VMOV            S0, R4 }
            v17 = *(_DWORD *)(v2 + 2880);
            __asm { VMUL.F32        S0, S0, S16 }
            v18 = *(_DWORD *)(v17 + 1536);
            v19 = -1431655765 * ((*(_DWORD *)(v17 + 1540) - v18) >> 3);
              VCVTR.S32.F32   S0, S0
              VMOV            R3, S0
            _VF = __OFSUB__(v19, _R3);
            _ZF = v19 == _R3;
            _NF = v19 - _R3 < 0;
            v21 = (const mce::TexturePtr *)&mce::TexturePtr::NONE;
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              v21 = (const mce::TexturePtr *)(v18 + 24 * _R3);
            result = (int)BlockEntityRenderDispatcher::render(v16, v3, v9, v14, 0, v23, v21, _R3 + 1);
      _R5 = *(_DWORD *)_R5;
    }
    while ( _R5 );
  }
  return result;
}


char *__fastcall LevelRendererPlayer::queueRenderEntities(int a1, int a2)
{
  int v2; // r4@1
  char *result; // r0@1
  int v4; // r9@1
  int v5; // r8@1
  char *v6; // r6@2
  int v7; // r11@3
  int v8; // r7@4
  Options *v9; // r0@5
  int v10; // r0@7
  int v11; // r0@8
  int v12; // r5@11
  int v13; // r0@13
  char v14; // r1@13
  int v15; // r6@15
  int *v16; // r5@16
  int *v17; // r7@16
  char v18; // r6@17
  int v19; // t1@18
  bool v20; // zf@21
  int v21; // r5@25
  int v22; // r1@25
  int v23; // r0@25
  void *v24; // r0@29
  int v25; // [sp+8h] [bp-38h]@17
  LevelBuilder *v26; // [sp+Ch] [bp-34h]@2
  unsigned int v27; // [sp+10h] [bp-30h]@25
  unsigned int v28; // [sp+14h] [bp-2Ch]@25

  v2 = a1;
  result = LevelRendererCamera::queueRenderEntities(a1, a2);
  v4 = *(_DWORD *)(v2 + 56);
  v5 = v2 + 48;
  if ( v4 != v2 + 48 )
  {
    v6 = *(char **)(v2 + 56);
    v26 = (LevelBuilder *)(v2 + 1260);
    do
    {
      v7 = *((_DWORD *)v6 + 5);
      if ( v7 == ClientInstance::getCameraTargetEntity(*(ClientInstance **)(*(_DWORD *)(v2 + 2880) + 4508)) )
      {
        v9 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(v2 + 2872));
        if ( Options::getPlayerViewPerspective(v9) )
        {
          v8 = 0;
        }
        else
          v10 = ClientInstance::getCameraTargetEntity(*(ClientInstance **)(*(_DWORD *)(v2 + 2880) + 4508));
          if ( Entity::hasCategory(v10, 1) == 1 )
          {
            v11 = ClientInstance::getCameraTargetEntity(*(ClientInstance **)(*(_DWORD *)(v2 + 2880) + 4508));
            v8 = (*(int (**)(void))(*(_DWORD *)v11 + 784))() ^ 1;
          }
          else
            v8 = 0;
      }
      else
        v8 = 0;
      if ( ClientInstance::isHoloRealityMode(*(ClientInstance **)(v2 + 2872)) == 1 )
        v12 = ClientInstance::isRealityFullVRMode(*(ClientInstance **)(v2 + 2872)) ^ 1;
        LOBYTE(v12) = 0;
      v13 = Entity::getRide(*(Entity **)(v2 + 2876));
      v14 = 0;
      if ( v7 == v13 )
        v14 = 1;
      v15 = v8 | (v13 != 0) & (unsigned __int8)v12 & (unsigned __int8)v14;
      if ( Entity::isRide((Entity *)v7) == 1 )
        v16 = (int *)(*(_QWORD *)(v7 + 476) >> 32);
        v17 = (int *)*(_QWORD *)(v7 + 476);
        if ( v17 != v16 )
          v25 = v15;
          v18 = 0;
          do
            v19 = *v17;
            ++v17;
            if ( v19 == ClientInstance::getCameraTargetEntity(*(ClientInstance **)(*(_DWORD *)(v2 + 2880) + 4508)) )
              v18 = 1;
          while ( v16 != v17 );
          v20 = (v18 & 1) == 0;
          v15 = v25;
          v5 = v2 + 48;
          if ( !v20 )
            goto LABEL_34;
      if ( LevelBuilder::cullerIsVisible(v26, (const AABB *)(v7 + 264)) )
        goto LABEL_34;
      if ( !*(_DWORD *)(v7 + 64) )
        goto LABEL_29;
      v21 = *(_DWORD *)(v2 + 2888);
      Entity::getRenderLeashHolder((Entity *)&v27, v7);
      v23 = Level::fetchEntity(v21, v22, v27, v28, 0);
      if ( v23 )
        if ( !(LevelBuilder::cullerIsVisible(v26, (const AABB *)(v23 + 264)) ^ 1 | v15) )
          goto LABEL_30;
LABEL_34:
        if ( v15 != 1 )
LABEL_30:
          result = (char *)sub_119CAC8(v4);
          v6 = result;
          goto LABEL_31;
LABEL_29:
      v6 = (char *)sub_119CAC8(v4);
      v24 = (void *)sub_119D57C(v4, v5);
      operator delete(v24);
      result = (char *)(*(_DWORD *)(v2 + 64) - 1);
      *(_DWORD *)(v2 + 64) = result;
LABEL_31:
      v4 = (int)v6;
    }
    while ( v6 != (char *)v5 );
  }
  return result;
}


int __fastcall LevelRendererPlayer::renderCracksOverlay(int a1, float a2, BlockSource *a3, const Block *a4, int a5, int a6)
{
  int v6; // r9@1
  BlockSource *v7; // r8@1
  Tessellator *v8; // r5@1
  const Block *v10; // r10@1
  BlockTessellator *v11; // r11@1
  int v12; // r1@1
  int v13; // r2@1
  BlockSource *v14; // r0@1
  int v20; // r0@1
  const TextureUVCoordinateSet *v21; // r7@1
  int v22; // r0@1
  int v23; // r4@1
  int v25; // [sp+8h] [bp-48h]@1
  int v26; // [sp+Ch] [bp-44h]@1
  int v27; // [sp+10h] [bp-40h]@1
  float v28; // [sp+14h] [bp-3Ch]@1
  unsigned int v29; // [sp+20h] [bp-30h]@1
  int v30; // [sp+24h] [bp-2Ch]@1
  unsigned int v31; // [sp+28h] [bp-28h]@1

  v6 = LODWORD(a2);
  v7 = a3;
  v8 = *(Tessellator **)(LODWORD(a2) + 40);
  _R6 = a1;
  v10 = a4;
  Tessellator::begin(v8, 0, 0);
  Tessellator::noColor(v8);
  v11 = (BlockTessellator *)LevelRenderer::getBlockRenderer(*(LevelRenderer **)(_R6 + 2880));
  v12 = *(_DWORD *)(a5 + 4);
  v13 = *(_DWORD *)(a5 + 8);
  v29 = *(_DWORD *)a5 & 0xFFFFFFF0;
  v30 = v12 & 0xFFF0;
  v31 = v13 & 0xFFFFFFF0;
  v14 = (BlockSource *)Entity::getRegion(*(Entity **)(_R6 + 2876));
  BlockTessellator::resetCache(v11, (const BlockPos *)&v29, v14);
  __asm
  {
    VLDR            S0, [R6,#0x230]
    VLDR            S2, [R6,#0x234]
    VLDR            S4, [R6,#0x238]
    VNEG.F32        S0, S0
    VNEG.F32        S2, S2
    VNEG.F32        S4, S4
    VSTR            S0, [SP,#0x50+var_3C]
    VSTR            S2, [SP,#0x50+var_38]
    VSTR            S4, [SP,#0x50+var_34]
  }
  Tessellator::setOffset(v8, (const Vec3 *)&v28);
    VMOV.F32        S0, #10.0
    VLDR            S2, [SP,#0x50+arg_4]
    VMUL.F32        S0, S2, S0
    VCVTR.S32.F32   S0, S0
    VMOV            R7, S0
  v20 = BlockPos::randomFloat((BlockPos *)a5);
  v21 = (const TextureUVCoordinateSet *)BlockGraphics::chooseRandomTexture(
                                          v20,
                                          (__int64 *)(*(_DWORD *)(_R6 + 2860) + 12 * _R7));
  v22 = BlockSource::getData(v7, (const BlockPos *)a5);
  BlockTessellator::tessellateInWorld(v11, v8, v10, (const BlockPos *)a5, v22, v21);
  v25 = 0;
  v26 = 0;
  v27 = 0;
  Tessellator::setOffset(v8, (const Vec3 *)&v25);
  v23 = _R6 + 2788;
  if ( Block::getRenderLayer(v10) != 3 && Block::getRenderLayer(v10) != 6 )
    v23 = _R6 + 2800;
  return Tessellator::draw((char *)v8, v6, v23, *(_DWORD *)(_R6 + 2880) + 1416);
}


char *__fastcall LevelRendererPlayer::updateDestroyProgress(LevelRendererPlayer *this)
{
  LevelRendererPlayer *v1; // r11@1
  LevelRendererPlayer *v9; // r4@5
  unsigned int v10; // r7@4
  int v11; // r4@4
  int v12; // r6@4
  LevelRendererPlayer *v13; // r8@4
  LevelRendererPlayer *v14; // r0@4
  LevelRendererPlayer *v15; // r10@6
  int v16; // r1@9
  LevelRendererPlayer *v17; // r9@12
  int v18; // r1@13
  char *result; // r0@20
  char *v21; // [sp+0h] [bp-40h]@1
  LevelRendererPlayer *v22; // [sp+4h] [bp-3Ch]@2

  v1 = this;
  v21 = (char *)this + 2680;
  _R0 = getTimeS();
  _R5 = (LevelRendererPlayer *)*((_DWORD *)v1 + 665);
  if ( _R5 )
  {
    __asm { VMOV            D0, R0, R1 }
    _R0 = v21;
    __asm
    {
      VMOV.F32        S18, #1.0
      VLDR            D1, [R0]
    }
    v22 = (LevelRendererPlayer *)((char *)v1 + 2660);
      VSUB.F64        D0, D0, D1
      VMOV.F32        S2, #20.0
      VCVT.F32.F64    S0, D0
      VMUL.F32        S16, S0, S2
    while ( 1 )
      __asm
      {
        VLDR            S0, [R5,#0x10]
        VLDR            S2, [R5,#0x14]
        VMUL.F32        S0, S16, S0
        VADD.F32        S0, S2, S0
        VCMPE.F32       S0, S18
        VSTR            S0, [R5,#0x14]
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !(_NF ^ _VF) )
        break;
      v9 = *(LevelRendererPlayer **)_R5;
LABEL_19:
      _R5 = v9;
      if ( !v9 )
        goto LABEL_20;
    v10 = *((_DWORD *)v1 + 664);
    v11 = *((_DWORD *)v1 + 663);
    v12 = *((_DWORD *)_R5 + 6) % *((_DWORD *)v1 + 664);
    v13 = *(LevelRendererPlayer **)(v11 + 4 * v12);
    v14 = *(LevelRendererPlayer **)(v11 + 4 * v12);
    do
      v15 = v14;
      v14 = *(LevelRendererPlayer **)v14;
    while ( v14 != _R5 );
    if ( v13 != v15 )
      if ( *(_DWORD *)_R5 )
        v16 = *(_DWORD *)(*(_DWORD *)_R5 + 24) % v10;
        if ( v16 != v12 )
          *(_DWORD *)(v11 + 4 * v16) = v15;
      goto LABEL_18;
    v17 = *(LevelRendererPlayer **)_R5;
    if ( *(_DWORD *)_R5 )
      v18 = *((_DWORD *)v17 + 6) % v10;
      if ( v18 == v12 )
LABEL_18:
        *(_DWORD *)v15 = *(_DWORD *)_R5;
        v9 = *(LevelRendererPlayer **)_R5;
        operator delete((void *)_R5);
        --*((_DWORD *)v1 + 666);
        goto LABEL_19;
      *(_DWORD *)(v11 + 4 * v18) = v13;
      v11 = *((_DWORD *)v1 + 663);
      v13 = *(LevelRendererPlayer **)(v11 + 4 * v12);
    if ( v22 == v13 )
      *(_DWORD *)v22 = v17;
    *(_DWORD *)(v11 + 4 * v12) = 0;
    goto LABEL_18;
  }
LABEL_20:
  __asm { VMOV            D0, R0, R1 }
  result = v21;
  __asm { VSTR            D0, [R0] }
  return result;
}


void __fastcall LevelRendererPlayer::renderNameTags(LevelRendererPlayer *this, BaseEntityRenderContext *a2)
{
  LevelRendererPlayer *v2; // r7@1
  BaseEntityRenderContext *v3; // r4@1
  int v4; // r6@1
  int v5; // r5@1
  Options *v6; // r0@1
  int i; // r6@2
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  int v10; // r11@11
  int v11; // r10@12
  int v12; // r0@13
  void (__fastcall *v13)(int, _DWORD); // r5@17
  int v14; // r0@17
  void *v15; // r0@17
  char *v16; // r5@19
  BlockSource *v17; // r0@19
  int v18; // r0@19
  BlockEntity *v19; // r5@19
  int (__fastcall *v20)(BlockEntity *, _DWORD); // r6@20
  int v21; // r0@20
  int *v22; // r0@20
  int v23; // r6@20
  void *v24; // r0@25
  unsigned int *v25; // r2@27
  signed int v26; // r1@29
  Entity *v27; // [sp+10h] [bp-50h]@2
  int v28; // [sp+14h] [bp-4Ch]@2
  int v29; // [sp+1Ch] [bp-44h]@1
  int v30; // [sp+24h] [bp-3Ch]@20
  int v31; // [sp+28h] [bp-38h]@4

  v2 = this;
  v3 = a2;
  v4 = ClientInstance::getCameraTargetEntity(*((ClientInstance **)this + 718));
  v29 = BaseEntityRenderContext::getEntityRenderDispatcher(v3);
  v5 = BaseEntityRenderContext::getBlockEntityRenderDispatcher(v3);
  BaseEntityRenderContext::setCameraTargetPosition(v3, (LevelRendererPlayer *)((char *)v2 + 560));
  v6 = (Options *)ClientInstance::getOptions(*((ClientInstance **)v2 + 718));
  if ( !Options::getHideHud(v6) )
  {
    v27 = (Entity *)v4;
    v28 = v5;
    for ( i = *((_DWORD *)v2 + 14); (LevelRendererPlayer *)i != (LevelRendererPlayer *)((char *)v2 + 48); i = sub_119CAC8(i) )
    {
      v10 = *(_DWORD *)(i + 20);
      if ( !(*(int (__fastcall **)(_DWORD))(*(_DWORD *)v10 + 172))(*(_DWORD *)(i + 20)) )
      {
        v11 = *((_DWORD *)Level::getHitResult(*((Level **)v2 + 722)) + 8);
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 204))(v10) == 1 )
        {
          v12 = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 312))(v10);
          if ( v11 == v10 || v12 ^ 1 )
          {
LABEL_17:
            v13 = *(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v10 + 196);
            v14 = BaseEntityRenderContext::getScreenContext(v3);
            v13(v10, *(_DWORD *)(v14 + 56));
            (*(void (__fastcall **)(int *, int))(*(_DWORD *)v10 + 192))(&v31, v10);
            EntityRenderDispatcher::renderText(v29, *(float *)&v3, v10, (int)&v31, 0.0, 1.0);
            v15 = (void *)(v31 - 12);
            if ( (int *)(v31 - 12) != &dword_28898C0 )
            {
              v8 = (unsigned int *)(v31 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v9 = __ldrex(v8);
                while ( __strex(v9 - 1, v8) );
              }
              else
                v9 = (*v8)--;
              if ( v9 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v15);
            }
            continue;
          }
        }
        else if ( v11 == v10 )
          goto LABEL_17;
      }
    }
    v16 = Level::getHitResult(*((Level **)v2 + 722));
    v17 = (BlockSource *)Entity::getRegion(v27);
    v18 = BlockSource::getBlockEntity(v17, (const BlockPos *)(v16 + 8));
    v19 = (BlockEntity *)v18;
    if ( v18 )
      v20 = *(int (__fastcall **)(BlockEntity *, _DWORD))(*(_DWORD *)v18 + 104);
      v21 = BaseEntityRenderContext::getScreenContext(v3);
      v22 = (int *)v20(v19, *(_DWORD *)(v21 + 56));
      sub_119C854(&v30, v22);
      v23 = v28;
    else
      sub_119C884((void **)&v30, (const char *)&unk_257BC67);
    if ( *(_DWORD *)(v30 - 12) && *BlockEntity::canRenderCustomName(v19) )
      BlockEntityRenderDispatcher::renderText(v23, (int)v3, v19, (int)&v30, 0.0, 1.0);
    v24 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v30 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
      else
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v24);
  }
}


signed int __fastcall LevelRendererPlayer::setupFog(int a1, int _R1, int a3)
{
  int v10; // r6@3
  int v11; // r0@3
  MobEffectInstance *v15; // r0@13
  MobEffectInstance *v17; // r0@22
  float v19; // r1@23
  signed int result; // r0@35

  _R4 = a1;
  __asm
  {
    VLDR            S18, [R1,#8]
    VLDR            S16, [R4,#0x124]
  }
  LevelRendererCamera::setupFog(a1, _R1, a3);
  _R5 = (Mob *)ClientInstance::getCameraEntity(*(ClientInstance **)(_R4 + 2872));
  if ( *(_BYTE *)(_R4 + 1232) )
    _R7 = 0;
    if ( Entity::hasCategory((int)_R5, 2) == 1 )
    {
      v10 = (*(int (**)(void))(**(_DWORD **)(Enchant::mEnchants + 24) + 20))();
      v11 = EnchantUtils::getBestEnchantLevel((EnchantUtils *)6, (int)_R5, 3);
      if ( v11 > 0 )
        _R7 = v11;
      if ( v11 > v10 )
        _R7 = v10;
      if ( Mob::hasEffect(_R5, (const MobEffect *)MobEffect::WATER_BREATHING) == 1 && _R7 < 2 )
        _R7 = 2;
    }
    __asm
      VMOV            S2, R7
      VMOV.F32        S0, #0.25
      VCVT.F32.S32    S2, S2
      VMUL.F32        S20, S2, S0
    _R0 = LevelRendererCamera::getClearSkyFogStartDistance((LevelRendererCamera *)_R4);
      VMOV            S0, R0
      VLDR            S2, [R4,#0x140]
      VMUL.F32        S0, S20, S0
      VADD.F32        S0, S0, S2
      VSTR            S0, [R4,#0x140]
    _R0 = LevelRendererCamera::getClearSkyFogEndDistance((LevelRendererCamera *)_R4);
      VLDR            S4, [R4,#0x120]
      VMOV.F32        S2, #1.0
      VLDR            S8, [R4,#0x144]
      VMUL.F32        S0, S0, S20
      VLDR            S6, [R4,#0x140]
      VSUB.F32        S2, S2, S4
      VADD.F32        S0, S8, S0
      VMUL.F32        S4, S6, S2
      VMUL.F32        S0, S0, S2
      VSTR            S4, [R4,#0x140]
      VSTR            S0, [R4,#0x144]
  if ( Entity::hasCategory((int)_R5, 2) == 1 )
      VLDR            S22, [R5,#0x4C]
      VLDR            S20, [R5,#0x64]
    _R6 = (*(int (**)(void))(**(_DWORD **)(_R4 + 1248) + 184))();
    if ( Mob::hasEffect(_R5, (const MobEffect *)MobEffect::BLINDNESS) != 1 )
      goto LABEL_21;
    v15 = (MobEffectInstance *)Mob::getEffect(_R5, (const MobEffect *)MobEffect::BLINDNESS);
    _R0 = MobEffectInstance::getDuration(v15);
    if ( _R0 >= 20 )
      __asm { VLDR            S0, =0.0 }
      *(_QWORD *)(_R4 + 320) = 4656722015768543232LL;
    else
      __asm
      {
        VSUB.F32        S0, S22, S20
        VLDR            S4, =-0.05
        VMOV            S2, R6
        VMOV.F32        S6, #-5.0
        VMOV.F32        S8, #1.0
        VMOV.F32        S10, #0.25
        VMUL.F32        S0, S0, S18
        VADD.F32        S0, S0, S20
        VMUL.F32        S0, S2, S0
        VMOV            S2, R0
        VCVT.F32.S32    S2, S2
        VMUL.F32        S2, S2, S4
        VLDR            S4, [R4,#0x178]
        VADD.F32        S4, S4, S6
        VMOV.F32        S6, #5.0
        VADD.F32        S2, S2, S8
        VMUL.F32        S4, S4, S2
        VMUL.F32        S0, S0, S2
        VCMPE.F32       S0, S8
        VMRS            APSR_nzcv, FPSCR
        VMUL.F32        S6, S4, S10
        VSTR            S6, [R4,#0x140]
        VSTR            S4, [R4,#0x144]
      }
      if ( !(_NF ^ _VF) )
LABEL_21:
        if ( Mob::hasEffect(_R5, (const MobEffect *)MobEffect::NIGHT_VISION) == 1 )
        {
          v17 = (MobEffectInstance *)Mob::getEffect(_R5, (const MobEffect *)MobEffect::NIGHT_VISION);
          if ( v17 )
          {
            _R0 = MobEffectInstance::getDuration(v17);
            if ( _R0 <= 200 )
            {
              __asm
              {
                VMOV            S0, R0
                VLDR            S2, =0.2
                VCVT.F32.S32    S0, S0
              }
              _R0 = &mce::Math::PI;
                VSUB.F32        S0, S0, S18
                VMUL.F32        S0, S0, S2
                VLDR            S2, [R0]
                VMOV            R0, S0
              _R0 = mce::Math::sin(_R0, v19);
                VLDR            S0, =0.3
                VMOV            S2, R0
                VMUL.F32        S0, S2, S0
                VLDR            S2, =0.7
                VADD.F32        S0, S0, S2
            }
            else
              __asm { VMOV.F32        S0, #1.0 }
          }
          else
            __asm { VLDR            S0, =0.0 }
          __asm
            VLDR            S2, [R4,#0x114]
            VMOV.F32        S12, #1.0
            VLDR            S4, [R4,#0x118]
            VLDR            S6, [R4,#0x11C]
            VMOV.F32        S10, S2
            VCMPE.F32       S2, S4
            VLDR            S8, [R4,#0x120]
            VMRS            APSR_nzcv, FPSCR
            VLDR            S14, =0.35
            VMUL.F32        S14, S0, S14
          if ( _NF ^ _VF )
            __asm { VMOVLT.F32      S10, S4 }
            VCMPE.F32       S10, S6
            __asm { VMOVLT.F32      S10, S6 }
          __asm { VDIV.F32        S10, S12, S10 }
          if ( !*(_BYTE *)(_R4 + 1232) )
            __asm { VMOVEQ.F32      S14, S0 }
            VSUB.F32        S0, S12, S14
            VMUL.F32        S10, S10, S14
            VADD.F32        S0, S10, S0
            VMUL.F32        S2, S0, S2
            VMUL.F32        S4, S0, S4
            VMUL.F32        S6, S0, S6
            VMUL.F32        S0, S0, S8
            VSTR            S2, [R4,#0x114]
            VSTR            S4, [R4,#0x118]
            VSTR            S6, [R4,#0x11C]
            VSTR            S0, [R4,#0x120]
          if ( Dimension::getId(*(Dimension **)(_R4 + 1248)) == 2 )
            __asm
              VLDR            S0, =0.2126
              VLDR            S2, [R4,#0x114]
              VLDR            S4, [R4,#0x118]
              VLDR            S10, =0.7152
              VMUL.F32        S0, S2, S0
              VLDR            S6, [R4,#0x11C]
              VMUL.F32        S10, S4, S10
              VLDR            S12, =0.0722
              VLDR            S8, [R4,#0x120]
              VMUL.F32        S12, S6, S12
              VADD.F32        S0, S10, S0
              VLDR            S10, =0.3
              VMUL.F32        S2, S2, S10
              VMUL.F32        S4, S4, S10
              VMUL.F32        S6, S6, S10
              VMUL.F32        S8, S8, S10
              VLDR            S10, =0.7
              VADD.F32        S0, S0, S12
              VLDR            S12, =0.245
              VMUL.F32        S0, S0, S12
              VADD.F32        S2, S0, S2
              VADD.F32        S4, S0, S4
              VADD.F32        S0, S0, S6
              VADD.F32        S6, S8, S10
              VSTR            S2, [R4,#0x114]
              VSTR            S4, [R4,#0x118]
              VSTR            S0, [R4,#0x11C]
              VSTR            S6, [R4,#0x120]
        }
        goto LABEL_35;
      VCMPE.F32       S0, #0.0
      VLDR            S2, =0.0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S0, S2 }
      VLDR            S2, [R4,#0x114]
      VMUL.F32        S0, S0, S0
      VMUL.F32        S2, S0, S2
      VSTR            S2, [R4,#0x114]
      VLDR            S2, [R4,#0x118]
      VMUL.F32        S2, S2, S0
      VSTR            S2, [R4,#0x118]
      VLDR            S2, [R4,#0x11C]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [R4,#0x11C]
    goto LABEL_21;
LABEL_35:
  __asm { VLDR            S2, [R4,#0x140] }
  result = 0;
    VLDR            S4, [R4,#0x178]
    VLDR            S0, [R4,#0x144]
    VDIV.F32        S2, S2, S4
    VDIV.F32        S0, S0, S4
    VSUB.F32        S4, S16, S2
    VLDR            S6, =1.1921e-7
    VSTR            S2, [R4,#0x124]
    VSTR            S0, [R4,#0x128]
    VABS.F32        S4, S4
    VCMPE.F32       S4, S6
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    result = 1;
  *(_BYTE *)(_R4 + 1235) = result;
  return result;
}


void __fastcall LevelRendererPlayer::reinit(int a1, int *a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r5@1
  void *v5; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = *a2;
  v3 = a1;
  sub_119C884((void **)&v8, "destroy");
  v4 = TextureAtlas::getTextureItem(v2, (int **)&v8);
  EntityInteraction::setInteractText((int *)(v3 + 2852), (int *)v4);
  *(_DWORD *)(v3 + 2856) = *(_DWORD *)(v4 + 4);
  std::vector<std::vector<TextureUVCoordinateSet,std::allocator<TextureUVCoordinateSet>>,std::allocator<std::vector<TextureUVCoordinateSet,std::allocator<TextureUVCoordinateSet>>>>::operator=(
    v3 + 2860,
    (unsigned __int64 *)(v4 + 8));
  v5 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
}


int __fastcall LevelRendererPlayer::clearDestroyProgress(LevelRendererPlayer *this)
{
  LevelRendererPlayer *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r5@2
  int result; // r0@3

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 665);
  if ( v2 )
  {
    do
    {
      v3 = *(void **)v2;
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  _aeabi_memclr4(*((_DWORD *)v1 + 663), 4 * *((_DWORD *)v1 + 664));
  result = 0;
  *((_DWORD *)v1 + 665) = 0;
  *((_DWORD *)v1 + 666) = 0;
  return result;
}


int __fastcall LevelRendererPlayer::canRenderNameTags(LevelRendererPlayer *this, Entity *a2)
{
  Entity *v2; // r4@1
  LevelRendererPlayer *v3; // r5@1
  int result; // r0@2
  Entity *v5; // r5@3
  signed int v6; // r6@4

  v2 = a2;
  v3 = this;
  if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)a2 + 172))(a2) )
  {
    result = 0;
  }
  else
    v5 = (Entity *)*((_DWORD *)Level::getHitResult(*((Level **)v3 + 722)) + 8);
    if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)v2 + 204))(v2) == 1 )
    {
      v6 = 0;
      if ( v5 == v2 )
        v6 = 1;
      result = (v6 | ~(*(int (__fastcall **)(Entity *))(*(_DWORD *)v2 + 312))(v2)) & 1;
    }
    else
      result = 0;
        result = 1;
  return result;
}


void __fastcall LevelRendererPlayer::renderHolographicCursor(int a1, float a2)
{
  LevelRendererPlayer::renderHolographicCursor(a1, a2);
}


void __fastcall LevelRendererPlayer::levelSoundEvent(float a1, signed int a2, int a3, unsigned int a4, unsigned int a5, int a6, int a7)
{
  signed int v10; // r5@1
  char *v11; // r6@1
  void **v12; // r7@1
  void *v13; // r1@3
  void *v14; // r2@3
  void *v15; // r3@3
  void *v16; // r0@3
  int v17; // r5@4
  void *v23; // r0@5
  void *v24; // r1@10
  void *v25; // r2@10
  void *v26; // r3@10
  void *v27; // r0@10
  void *v29; // r1@15
  void *v30; // r2@15
  void *v31; // r3@15
  void *v32; // r0@15
  void *v35; // r1@24
  void *v36; // r2@24
  void *v37; // r3@24
  void *v38; // r0@24
  void *v39; // r1@26
  void *v40; // r2@26
  void *v41; // r3@26
  void *v42; // r0@26
  void *v45; // r1@32
  void *v46; // r2@32
  void *v47; // r3@32
  void *v48; // r0@32
  unsigned int *v51; // r2@38
  signed int v52; // r1@40
  signed int v53; // r0@43
  void *v54; // r1@44
  void *v55; // r2@44
  void *v56; // r3@44
  void *v57; // r0@44
  NoteBlock *v58; // r5@45
  void *v61; // r0@50
  unsigned int *v62; // r2@51
  signed int v63; // r1@53
  unsigned int *v64; // r2@55
  signed int v65; // r1@57
  void *v68; // r1@70
  void *v69; // r2@70
  void *v70; // r3@70
  void *v71; // r0@70
  float v72; // r1@72
  float v73; // r2@72
  unsigned int *v78; // r2@88
  signed int v79; // r1@90
  unsigned int *v80; // r2@92
  signed int v81; // r1@94
  unsigned int *v82; // r2@96
  signed int v83; // r1@98
  unsigned int *v84; // r2@100
  signed int v85; // r1@102
  unsigned int *v86; // r2@104
  signed int v87; // r1@106
  unsigned int *v88; // r2@108
  signed int v89; // r1@110
  unsigned int *v90; // r2@139
  signed int v91; // r1@141
  int v92; // [sp+0h] [bp-100h]@0
  float v93; // [sp+10h] [bp-F0h]@72
  float v94; // [sp+14h] [bp-ECh]@72
  float v95; // [sp+18h] [bp-E8h]@72
  int v96; // [sp+1Ch] [bp-E4h]@70
  void *v97; // [sp+20h] [bp-E0h]@70
  void *v98; // [sp+24h] [bp-DCh]@70
  void *v99; // [sp+28h] [bp-D8h]@70
  void *v100; // [sp+2Ch] [bp-D4h]@70
  int v101; // [sp+30h] [bp-D0h]@3
  void *v102; // [sp+34h] [bp-CCh]@3
  void *v103; // [sp+38h] [bp-C8h]@3
  void *v104; // [sp+3Ch] [bp-C4h]@3
  void *v105; // [sp+40h] [bp-C0h]@3
  int v106; // [sp+44h] [bp-BCh]@26
  void *v107; // [sp+48h] [bp-B8h]@26
  void *v108; // [sp+4Ch] [bp-B4h]@26
  void *v109; // [sp+50h] [bp-B0h]@26
  void *v110; // [sp+54h] [bp-ACh]@26
  int v111; // [sp+58h] [bp-A8h]@24
  void *v112; // [sp+5Ch] [bp-A4h]@24
  void *v113; // [sp+60h] [bp-A0h]@24
  void *v114; // [sp+64h] [bp-9Ch]@24
  void *v115; // [sp+68h] [bp-98h]@24
  int v116; // [sp+6Ch] [bp-94h]@32
  void *v117; // [sp+70h] [bp-90h]@32
  void *v118; // [sp+74h] [bp-8Ch]@32
  void *v119; // [sp+78h] [bp-88h]@32
  void *v120; // [sp+7Ch] [bp-84h]@32
  int v121; // [sp+80h] [bp-80h]@10
  void *v122; // [sp+84h] [bp-7Ch]@10
  void *v123; // [sp+88h] [bp-78h]@10
  void *v124; // [sp+8Ch] [bp-74h]@10
  void *v125; // [sp+90h] [bp-70h]@10
  int v126; // [sp+94h] [bp-6Ch]@45
  int v127; // [sp+98h] [bp-68h]@44
  void *v128; // [sp+9Ch] [bp-64h]@44
  void *v129; // [sp+A0h] [bp-60h]@44
  void *v130; // [sp+A4h] [bp-5Ch]@44
  void *v131; // [sp+A8h] [bp-58h]@44
  int v132; // [sp+ACh] [bp-54h]@15
  void *v133; // [sp+B0h] [bp-50h]@15
  void *v134; // [sp+B4h] [bp-4Ch]@15
  void *v135; // [sp+B8h] [bp-48h]@15
  void *v136; // [sp+BCh] [bp-44h]@15
  int v137; // [sp+C0h] [bp-40h]@1
  signed int v138; // [sp+C4h] [bp-3Ch]@1
  signed int v139; // [sp+C8h] [bp-38h]@1
  signed int v140; // [sp+CCh] [bp-34h]@1
  signed int v141; // [sp+D0h] [bp-30h]@1

  _R4 = a1;
  _R10 = a4;
  _R9 = a3;
  v10 = a2;
  v11 = Level::getRandom(*(Level **)(LODWORD(a1) + 2888));
  v12 = sub_119C884((void **)&v137, (const char *)&unk_257BC67) + 1;
  v138 = 1065353216;
  v139 = 1065353216;
  v140 = 1065353216;
  v141 = 1065353216;
  if ( v10 <= 76 )
  {
    if ( v10 > 28 )
    {
      if ( v10 == 29 )
      {
        SoundMapping::getEntitySound((int)&v116, *(_DWORD *)(LODWORD(_R4) + 2836), 0x1Du, a5);
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
          &v137,
          &v116);
        v45 = v118;
        v46 = v119;
        v47 = v120;
        *v12 = v117;
        v12[1] = v45;
        v12[2] = v46;
        v12[3] = v47;
        v48 = (void *)(v116 - 12);
        if ( (int *)(v116 - 12) != &dword_28898C0 )
        {
          v80 = (unsigned int *)(v116 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v81 = __ldrex(v80);
            while ( __strex(v81 - 1, v80) );
          }
          else
            v81 = (*v80)--;
          if ( v81 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v48);
        }
        _R0 = Sound::getPitch((Sound *)&v137, (Random *)v11);
        __asm
          VMOV            S12, R10
          VLDR            S0, [R4,#0x224]
          VLDR            S6, [R9]
          VMOV.F32        S14, #16.0
          VLDR            S2, [R4,#0x228]
          VLDR            S8, [R9,#4]
          VSUB.F32        S6, S6, S0
          VLDR            S4, [R4,#0x22C]
          VLDR            S10, [R9,#8]
          VCVT.F32.S32    S12, S12
          VLDR            S0, =4.6566e-10
          VSUB.F32        S2, S8, S2
          VMOV.F32        S8, #1.0
          VSUB.F32        S4, S10, S4
          VLDR            S10, =7.4506e-9
          VMUL.F32        S6, S6, S6
          VMUL.F32        S0, S12, S0
          VMUL.F32        S2, S2, S2
          VMUL.F32        S10, S12, S10
          VMUL.F32        S4, S4, S4
          VCMPE.F32       S0, S8
          VMRS            APSR_nzcv, FPSCR
          VADD.F32        S2, S2, S6
          VADD.F32        S2, S2, S4
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          __asm { VMOVGT.F32      S14, S10 }
          VMUL.F32        S6, S14, S14
          VCMPE.F32       S2, S6
        if ( _NF ^ _VF )
          __asm
            VMOV            S2, R0
            VMOV            R3, S0
            VSTR            S2, [SP,#0x100+var_100]
          (*(void (**)(void))(**(_DWORD **)(LODWORD(_R4) + 2884) + 8))();
        goto LABEL_5;
      }
      if ( v10 == 60 )
        SoundMapping::getEventSound((int)&v132, *(_DWORD *)(LODWORD(_R4) + 2836), 0x3Cu);
          &v132);
        v29 = v134;
        v30 = v135;
        v31 = v136;
        *v12 = v133;
        v12[1] = v29;
        v12[2] = v30;
        v12[3] = v31;
        v32 = (void *)(v132 - 12);
        if ( (int *)(v132 - 12) != &dword_28898C0 )
          v84 = (unsigned int *)(v132 - 4);
              v85 = __ldrex(v84);
            while ( __strex(v85 - 1, v84) );
            v85 = (*v84)--;
          if ( v85 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v32);
    }
    else
      if ( v10 == 11 )
        SoundMapping::getEntitySound((int)&v111, *(_DWORD *)(LODWORD(_R4) + 2836), 0xBu, a5);
          &v111);
        v35 = v113;
        v36 = v114;
        v37 = v115;
        *v12 = v112;
        v12[1] = v35;
        v12[2] = v36;
        v12[3] = v37;
        v38 = (void *)(v111 - 12);
        if ( (int *)(v111 - 12) != &dword_28898C0 )
          v78 = (unsigned int *)(v111 - 4);
              v79 = __ldrex(v78);
            while ( __strex(v79 - 1, v78) );
            v79 = (*v78)--;
          if ( v79 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v38);
        if ( !*(_DWORD *)(v137 - 12) )
          SoundMapping::getEntitySound((int)&v106, *(_DWORD *)(LODWORD(_R4) + 2836), 0xAu, a5);
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            &v137,
            &v106);
          v39 = v108;
          v40 = v109;
          v41 = v110;
          *v12 = v107;
          v12[1] = v39;
          v12[2] = v40;
          v12[3] = v41;
          v42 = (void *)(v106 - 12);
          if ( (int *)(v106 - 12) != &dword_28898C0 )
            v90 = (unsigned int *)(v106 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v91 = __ldrex(v90);
              while ( __strex(v91 - 1, v90) );
            }
            else
              v91 = (*v90)--;
            if ( v91 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v42);
        _R5 = Sound::getPitch((Sound *)&v137, (Random *)v11);
        _R3 = Sound::getVolume((Sound *)&v137, (Random *)v11);
          VLDR            S4, [R4,#0x228]
          VMOV            S0, R3
          VLDR            S10, [R9,#4]
          VLDR            S2, [R4,#0x224]
          VLDR            S8, [R9]
          VMOV.F32        S10, #1.0
          VLDR            S6, [R4,#0x22C]
          VLDR            S12, [R9,#8]
          VMOV.F32        S8, #16.0
          VSUB.F32        S6, S12, S6
          VCMPE.F32       S0, S10
          VMUL.F32        S12, S0, S8
          VMUL.F32        S0, S6, S6
          VADD.F32        S2, S4, S2
          VADD.F32        S0, S2, S0
          __asm { VMOVGT.F32      S8, S12 }
          VMUL.F32        S4, S8, S8
          VCMPE.F32       S0, S4
            VMOV.F32        S2, #0.5
            VMOV            S0, R5
            VADD.F32        S0, S0, S2
            VSTR            S0, [SP,#0x100+var_100]
      if ( v10 == 26 )
        SoundMapping::getEntitySound((int)&v121, *(_DWORD *)(LODWORD(_R4) + 2836), 0x1Au, a5);
          &v121);
        v24 = v123;
        v25 = v124;
        v26 = v125;
        *v12 = v122;
        v12[1] = v24;
        v12[2] = v25;
        v12[3] = v26;
        v27 = (void *)(v121 - 12);
        if ( (int *)(v121 - 12) != &dword_28898C0 )
          v82 = (unsigned int *)(v121 - 4);
              v83 = __ldrex(v82);
            while ( __strex(v83 - 1, v82) );
            v83 = (*v82)--;
          if ( v83 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v27);
        if ( a5 == 77 )
          _R0 = Sound::getVolume((Sound *)&v137, (Random *)v11);
          __asm { VMOV            S16, R0 }
        else
            VMOV            S0, R10
            VLDR            S2, =4.6566e-10
            VCVT.F32.S32    S0, S0
            VMUL.F32        S16, S0, S2
          VSUB.F32        S0, S6, S0
          VMOV.F32        S6, #16.0
          VCMPE.F32       S16, S8
          VMUL.F32        S0, S0, S0
          VMUL.F32        S10, S16, S6
          VADD.F32        S0, S0, S4
          __asm { VMOVGT.F32      S6, S10 }
          VMUL.F32        S2, S6, S6
          VCMPE.F32       S0, S2
            VMOV            S0, R0
            VMOV            R3, S16
LABEL_42:
    if ( _R10 > 0xFF )
      v53 = 16;
      v53 = BlockGraphics::getSoundType((BlockGraphics *)BlockGraphics::mBlocks[_R10]);
    SoundMapping::getSound((int)&v96, *(_DWORD *)(LODWORD(_R4) + 2836), v10, a5, v53, (int)v11, a6);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v137, &v96);
    v68 = v98;
    v69 = v99;
    v70 = v100;
    *v12 = v97;
    v12[1] = v68;
    v12[2] = v69;
    v12[3] = v70;
    v71 = (void *)(v96 - 12);
    if ( (int *)(v96 - 12) != &dword_28898C0 )
      v86 = (unsigned int *)(v96 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v87 = __ldrex(v86);
        while ( __strex(v87 - 1, v86) );
      else
        v87 = (*v86)--;
      if ( v87 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v71);
    if ( a7 == 1 )
      v72 = *(float *)(_R9 + 4);
      v73 = *(float *)(_R9 + 8);
      v93 = *(float *)_R9;
      v94 = v72;
      v95 = v73;
      __asm
        VLDR            S0, [R4,#0x224]
        VLDR            S6, [R9]
        VLDR            S2, [R4,#0x228]
        VLDR            S8, [R9,#4]
        VSUB.F32        S6, S6, S0
        VLDR            S4, [R4,#0x22C]
        VSUB.F32        S8, S8, S2
        VLDR            S10, [R9,#8]
        VSUB.F32        S10, S10, S4
        VMUL.F32        S12, S6, S6
        VMUL.F32        S14, S8, S8
        VMUL.F32        S1, S10, S10
        VADD.F32        S12, S14, S12
        VADD.F32        S12, S12, S1
        VSQRT.F32       S12, S12
        VCMPE.F32       S12, #0.0
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          VMOV.F32        S14, #1.0
          VDIV.F32        S12, S14, S12
          VADD.F32        S12, S12, S12
          VMUL.F32        S6, S6, S12
          VMUL.F32        S8, S8, S12
          VMUL.F32        S10, S10, S12
          VADD.F32        S0, S6, S0
          VADD.F32        S2, S8, S2
          VADD.F32        S4, S10, S4
          VSTR            S0, [SP,#0x100+var_F0]
          VSTR            S2, [SP,#0x100+var_EC]
          VSTR            S4, [SP,#0x100+var_E8]
      _R5 = Sound::getVolume((Sound *)&v137, (Random *)v11);
      _R0 = Sound::getPitch((Sound *)&v137, (Random *)v11);
        VLDR            S4, [SP,#0x100+var_EC]
        VMOV            S0, R5
        VLDR            S10, [R4,#0x228]
        VLDR            S2, [SP,#0x100+var_F0]
        VSUB.F32        S4, S4, S10
        VLDR            S8, [R4,#0x224]
        VMOV.F32        S10, #1.0
        VLDR            S6, [SP,#0x100+var_E8]
        VSUB.F32        S2, S2, S8
        VLDR            S12, [R4,#0x22C]
        VMOV.F32        S8, #16.0
        VSUB.F32        S6, S6, S12
        VMUL.F32        S4, S4, S4
        VCMPE.F32       S0, S10
        VMUL.F32        S2, S2, S2
        VMUL.F32        S12, S0, S8
        VMUL.F32        S0, S6, S6
        VADD.F32        S2, S4, S2
        VADD.F32        S0, S2, S0
        __asm { VMOVGT.F32      S8, S12 }
        VMUL.F32        S4, S8, S8
        VCMPE.F32       S0, S4
      if ( _NF ^ _VF )
          VMOV            S0, R0
          VSTR            S0, [SP,#0x100+var_100]
        (*(void (**)(void))(**(_DWORD **)(LODWORD(_R4) + 2884) + 8))();
        VLDR            S4, [R4,#0x228]
        VLDR            S10, [R9,#4]
        VLDR            S2, [R4,#0x224]
        VSUB.F32        S4, S10, S4
        VLDR            S8, [R9]
        VLDR            S6, [R4,#0x22C]
        VSUB.F32        S2, S8, S2
        VLDR            S12, [R9,#8]
        VSUB.F32        S6, S12, S6
    goto LABEL_5;
  }
  if ( (unsigned int)(v10 - 90) < 0xC )
    SoundMapping::getEventSound((int)&v101, *(_DWORD *)(LODWORD(_R4) + 2836), v10);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v137, &v101);
    v13 = v103;
    v14 = v104;
    v15 = v105;
    *v12 = v102;
    v12[1] = v13;
    v12[2] = v14;
    v12[3] = v15;
    v16 = (void *)(v101 - 12);
    if ( (int *)(v101 - 12) != &dword_28898C0 )
      v64 = (unsigned int *)(v101 - 4);
          v65 = __ldrex(v64);
        while ( __strex(v65 - 1, v64) );
        v65 = (*v64)--;
      if ( v65 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v16);
    v17 = Sound::getVolume((Sound *)&v137, (Random *)v11);
    _R0 = Sound::getPitch((Sound *)&v137, (Random *)v11);
    __asm
      VMOV            S0, R0
      VSTR            S0, [SP,#0x100+var_100]
    LevelRendererPlayer::playRecord(_R4, &v137, _R9, v17, v92);
  if ( v10 != 77 )
    if ( v10 == 102 )
      LevelRendererPlayer::stopRecord((LevelRendererPlayer *)LODWORD(_R4), (const Vec3 *)_R9);
      goto LABEL_5;
    goto LABEL_42;
  SoundMapping::getEventSound((int)&v127, *(_DWORD *)(LODWORD(_R4) + 2836), 0x4Du);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v137, &v127);
  v54 = v129;
  v55 = v130;
  v56 = v131;
  *v12 = v128;
  v12[1] = v54;
  v12[2] = v55;
  v12[3] = v56;
  v57 = (void *)(v127 - 12);
  if ( (int *)(v127 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v127 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v57);
  v58 = (NoteBlock *)Block::mNote;
  NoteBlock::getSoundName((NoteBlock *)&v126, Block::mNote, _R10);
  _R5 = NoteBlock::getPitch(v58, a5);
  _R3 = Sound::getVolume((Sound *)&v137, (Random *)v11);
  __asm
    VLDR            S4, [R4,#0x228]
    VMOV            S0, R3
    VLDR            S10, [R9,#4]
    VLDR            S2, [R4,#0x224]
    VSUB.F32        S4, S10, S4
    VLDR            S8, [R9]
    VMOV.F32        S10, #1.0
    VLDR            S6, [R4,#0x22C]
    VSUB.F32        S2, S8, S2
    VLDR            S12, [R9,#8]
    VMOV.F32        S8, #16.0
    VSUB.F32        S6, S12, S6
    VMUL.F32        S4, S4, S4
    VCMPE.F32       S0, S10
    VMRS            APSR_nzcv, FPSCR
    VMUL.F32        S2, S2, S2
    VMUL.F32        S12, S0, S8
    VMUL.F32        S0, S6, S6
    VADD.F32        S2, S4, S2
    VADD.F32        S0, S2, S0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S8, S12 }
    VMUL.F32        S4, S8, S8
    VCMPE.F32       S0, S4
  if ( _NF ^ _VF )
      VMOV            S0, R5
    (*(void (**)(void))(**(_DWORD **)(LODWORD(_R4) + 2884) + 8))();
  v61 = (void *)(v126 - 12);
  if ( (int *)(v126 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v126 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v61);
LABEL_5:
  v23 = (void *)(v137 - 12);
  if ( (int *)(v137 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v137 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v23);
}


void __fastcall LevelRendererPlayer::~LevelRendererPlayer(LevelRendererPlayer *this)
{
  LevelRendererPlayer *v1; // r0@1

  v1 = LevelRendererPlayer::~LevelRendererPlayer(this);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall LevelRendererPlayer::levelEvent(float a1, signed int a2, int a3, unsigned int a4)
{
  LevelRendererPlayer::levelEvent(a1, a2, a3, a4);
}


BlockEntityRenderDispatcher *__fastcall LevelRendererPlayer::renderHitSelect(LevelRendererPlayer *this, BaseEntityRenderContext *a2, BlockSource *a3, const BlockPos *a4, int a5)
{
  const BlockPos *v5; // r7@1
  BlockSource *v6; // r4@1
  BaseEntityRenderContext *v7; // r8@1
  LevelRendererPlayer *v8; // r5@1
  const Block *v9; // r0@1
  const Block *v10; // r6@1
  BlockEntityRenderDispatcher *result; // r0@1
  int v12; // r0@2
  Option *v13; // r0@2
  int v14; // r0@3

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = this;
  v9 = (const Block *)BlockSource::getBlock(a3, a4);
  v10 = v9;
  result = (BlockEntityRenderDispatcher *)LevelRendererPlayer::blockCanHaveSelectionOverlay(v8, v9);
  if ( result == (BlockEntityRenderDispatcher *)1 )
  {
    v12 = ClientInstance::getOptions(*((ClientInstance **)v8 + 718));
    v13 = (Option *)Options::get(v12, 146);
    if ( Option::getBool(v13) == 1 )
    {
      v14 = BaseEntityRenderContext::getScreenContext(v7);
      result = (BlockEntityRenderDispatcher *)LevelRendererPlayer::_renderOutlineSelection(
                                                (int)v8,
                                                v14,
                                                (int)v10,
                                                v6,
                                                (int)v5);
    }
    else
      result = LevelRendererPlayer::_renderHighlightSelection(v8, v7, v6, v10, v5, 1, a5);
  }
  return result;
}


void __fastcall LevelRendererPlayer::tickRain(LevelRendererPlayer *this)
{
  const BlockPos *v2; // r5@2
  Level *v3; // r0@2
  char *v4; // r0@2
  unsigned int v5; // r0@2
  signed int v6; // r1@2
  Dimension *v11; // r0@3
  Weather *v12; // r0@3
  float v14; // r3@3
  int v16; // r2@3
  void *v20; // r0@11
  unsigned int *v21; // r2@12
  signed int v22; // r1@14
  int v24; // [sp+Ch] [bp-64h]@5
  int v25; // [sp+14h] [bp-5Ch]@4
  __int64 v26; // [sp+18h] [bp-58h]@3
  int v27; // [sp+20h] [bp-50h]@3
  char v28; // [sp+24h] [bp-4Ch]@3
  char v30; // [sp+30h] [bp-40h]@3

  _R4 = this;
  LevelRendererCamera::tickRain(this);
  if ( *((_DWORD *)_R4 + 86) >= 1 )
  {
    v2 = (const BlockPos *)*((_DWORD *)_R4 + 311);
    v3 = (Level *)BlockSource::getLevel(*((BlockSource **)_R4 + 311));
    v4 = Level::getRandom(v3);
    v5 = Random::_genRandInt32((Random *)v4);
    v6 = *((_DWORD *)_R4 + 87);
    *((_DWORD *)_R4 + 87) = v6 + 1;
    if ( (signed int)(v5 % 3) < v6 )
    {
      *((_DWORD *)_R4 + 87) = 0;
      BlockPos::BlockPos((int)&v30, (int)_R4 + 548);
      BlockSource::getTopRainBlockPos((BlockSource *)&v28, v2, (const BlockPos *)&v30);
      __asm
      {
        VLDR            S0, [SP,#0x70+var_48]
        VLDR            S20, [R4,#0x228]
        VCVT.F32.S32    S22, S0
      }
      v11 = (Dimension *)BlockSource::getDimension(v2);
      v12 = (Weather *)Dimension::getWeather(v11);
      _R0 = Weather::getRainLevel(v12, 1.0);
        VLDR            S0, [R4,#0x158]
        VMOV            S4, R0
        VLDR            S2, [R4,#0x160]
        VMOV.F32        S18, #1.0
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
      _KR00_8 = *(_QWORD *)((char *)_R4 + 332);
      v16 = *((_DWORD *)_R4 + 85);
      v26 = *(_QWORD *)((char *)_R4 + 332);
      v27 = v16;
        VMUL.F32        S0, S0, S4
        VDIV.F32        S16, S0, S2
        VSUB.F32        S0, S22, S20
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        sub_119C884((void **)&v24, "ambient.weather.rain");
        __asm
        {
          VLDR            S0, [SP,#0x70+var_58]
          VCMPE.F32       S16, S18
          VLDR            S6, [R4,#0x224]
          VLDR            S2, [SP,#0x70+var_58+4]
          VLDR            S8, [R4,#0x228]
          VSUB.F32        S0, S0, S6
          VMRS            APSR_nzcv, FPSCR
          VMOV.F32        S6, #16.0
          VSUB.F32        S2, S2, S8
          VLDR            S4, [SP,#0x70+var_50]
          VLDR            S10, [R4,#0x22C]
          VSUB.F32        S4, S4, S10
          VMUL.F32        S0, S0, S0
          VMUL.F32        S8, S16, S6
          VMUL.F32        S2, S2, S2
          VMUL.F32        S4, S4, S4
          VADD.F32        S0, S2, S0
        }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          __asm { VMOVGT.F32      S6, S8 }
          VMUL.F32        S2, S6, S6
          VADD.F32        S0, S0, S4
          VCMPE.F32       S0, S2
        if ( _NF ^ _VF )
          __asm { VMOV            R3, S16 }
          (*(void (__cdecl **)(_DWORD))(**((_DWORD **)_R4 + 721) + 8))(*((_DWORD *)_R4 + 721));
        v20 = (void *)(v24 - 12);
        if ( (int *)(v24 - 12) != &dword_28898C0 )
          v21 = (unsigned int *)(v24 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            goto LABEL_28;
          }
          goto LABEL_27;
      else
          VLDRGT          S2, [R4,#0x228]
          VADDGT.F32      S2, S2, S18
          VMOVGT          S4, R0
          VCMPEGT.F32     S4, S2
          VMRSGT          APSR_nzcv, FPSCR
          VLDR            S2, =0.1
          VMUL.F32        S0, S0, S2
          VMOV            R2, S0
        _R5 = mce::Math::clampedLerp((mce::Math *)0x3F800000, 0.05, _R2, v14);
        sub_119C884((void **)&v25, "ambient.weather.rain");
          VMOV            S0, R5
          VLDR            S2, [SP,#0x70+var_58]
          VLDR            S8, [R4,#0x224]
          VMUL.F32        S0, S0, S16
          VLDR            S4, [SP,#0x70+var_58+4]
          VLDR            S10, [R4,#0x228]
          VLDR            S6, [SP,#0x70+var_50]
          VMOV.F32        S8, #16.0
          VLDR            S12, [R4,#0x22C]
          VSUB.F32        S6, S6, S12
          VCMPE.F32       S0, S18
          VMUL.F32        S10, S0, S8
          VMUL.F32        S6, S6, S6
          VADD.F32        S2, S4, S2
          VADD.F32        S2, S2, S6
          __asm { VMOVGT.F32      S8, S10 }
          VMUL.F32        S4, S8, S8
          VCMPE.F32       S2, S4
          __asm { VMOV            R3, S0 }
        v20 = (void *)(v25 - 12);
        if ( (int *)(v25 - 12) != &dword_28898C0 )
          v21 = (unsigned int *)(v25 - 4);
LABEL_27:
          v22 = (*v21)--;
LABEL_28:
          if ( v22 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v20);
          return;
    }
  }
}


void __fastcall LevelRendererPlayer::playDeferredSound(float a1, int *a2, int a3, int a4, int a5)
{
  float v5; // r4@1
  int v6; // r5@1
  int v7; // r6@1
  int *v12; // r0@1
  char **v13; // r1@1
  int v14; // r0@2
  int v15; // r1@2
  int v16; // r3@2
  int v17; // r5@2
  int v18; // r6@2
  int v19; // r7@2
  char *v20; // r0@4
  void *v21; // r0@5
  unsigned int *v22; // r2@7
  signed int v23; // r1@9
  unsigned int *v24; // r2@11
  signed int v25; // r1@13
  int v26; // [sp+0h] [bp-4h]@0
  int v27; // [sp+4h] [bp+0h]@1
  char *v28; // [sp+8h] [bp+4h]@1

  v5 = a1;
  v6 = a4;
  v7 = a3;
  sub_119C854(&v27, a2);
  __asm
  {
    VLDR            S0, [SP,#0x24+arg_0]
    VSTR            S0, [SP,#0x24+var_24]
  }
  v12 = DeferredSound::DeferredSound(COERCE_FLOAT(&v28), &v27, v7, v6, v26);
  v13 = *(char ***)(LODWORD(v5) + 2844);
  if ( v13 == *(char ***)(LODWORD(v5) + 2848) )
    std::vector<DeferredSound,std::allocator<DeferredSound>>::_M_emplace_back_aux<DeferredSound>(
      (unsigned __int64 *)(LODWORD(v5) + 2840),
      &v28);
  else
    v14 = (int)(v12 + 1);
    *v13 = v28;
    v15 = (int)(v13 + 1);
    v28 = (char *)&unk_28898CC;
    v16 = *(_DWORD *)(v14 + 4);
    v17 = *(_DWORD *)(v14 + 8);
    v18 = *(_DWORD *)(v14 + 12);
    v19 = *(_DWORD *)(v14 + 16);
    *(_DWORD *)v15 = *(_DWORD *)v14;
    *(_DWORD *)(v15 + 4) = v16;
    *(_DWORD *)(v15 + 8) = v17;
    *(_DWORD *)(v15 + 12) = v18;
    *(_DWORD *)(v15 + 16) = v19;
    *(_DWORD *)(LODWORD(v5) + 2844) += 24;
  v20 = v28 - 12;
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v28 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    }
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  v21 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v27 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
}
