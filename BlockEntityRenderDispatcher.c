

int __fastcall BlockEntityRenderDispatcher::renderText(int a1, int a2, BlockEntity *a3, int a4, float a5, float a6)
{
  BlockEntity *v6; // r5@1
  int v7; // r7@1
  int v8; // r8@1
  int v9; // r6@1
  char *v10; // r0@1
  int v11; // r4@1
  int v12; // r1@1
  int result; // r0@1
  int v14; // r3@2
  int v15; // r2@3
  bool v16; // zf@13

  v6 = a3;
  v7 = a1;
  v8 = a4;
  v9 = a2;
  v10 = BlockEntity::getRendererId(a3);
  v11 = *(_DWORD *)(v7 + 8);
  v12 = *(_DWORD *)v10;
  result = v7 + 4;
  if ( v11 )
  {
    v14 = v7 + 4;
    do
    {
      v15 = v11;
      while ( *(_DWORD *)(v15 + 16) < v12 )
      {
        v15 = *(_DWORD *)(v15 + 12);
        if ( !v15 )
        {
          v15 = v14;
          goto LABEL_10;
        }
      }
      v11 = *(_DWORD *)(v15 + 8);
      v14 = v15;
    }
    while ( v11 );
  }
  else
    v15 = v7 + 4;
LABEL_10:
  if ( v15 != result )
    if ( *(_DWORD *)(v15 + 16) > v12 )
      v15 = v7 + 4;
    v16 = v15 == result;
    if ( v15 != result )
      result = *(_DWORD *)(v15 + 20);
      v16 = result == 0;
    if ( !v16 )
      result = j_j_j__ZN19BlockEntityRenderer10renderTextER23BaseEntityRenderContextR11BlockEntityRKSsff(
                 result,
                 v9,
                 v6,
                 v8,
                 a5,
                 a6);
  return result;
}


int __fastcall BlockEntityRenderDispatcher::getRenderer(int a1, int a2)
{
  int v2; // r3@1
  int v3; // r12@1
  int v4; // r0@2
  int v5; // r2@3
  int result; // r0@14

  v2 = *(_DWORD *)(a1 + 8);
  v3 = a1 + 4;
  if ( v2 )
  {
    v4 = a1 + 4;
    do
    {
      v5 = v2;
      while ( *(_DWORD *)(v5 + 16) < a2 )
      {
        v5 = *(_DWORD *)(v5 + 12);
        if ( !v5 )
        {
          v5 = v4;
          goto LABEL_10;
        }
      }
      v2 = *(_DWORD *)(v5 + 8);
      v4 = v5;
    }
    while ( v2 );
  }
  else
    v5 = a1 + 4;
LABEL_10:
  if ( v5 == v3 )
    goto LABEL_18;
  if ( *(_DWORD *)(v5 + 16) > a2 )
    v5 = v3;
LABEL_18:
    result = 0;
    result = *(_DWORD *)(v5 + 20);
  return result;
}


int __fastcall BlockEntityRenderDispatcher::initializeBlockEntityRenderers(BlockEntityRenderDispatcher *this, GeometryGroup *a2, mce::TextureGroup *a3, BlockTessellator *a4)
{
  GeometryGroup *v4; // r8@1
  BlockEntityRenderDispatcher *v5; // r5@1
  BlockTessellator *v6; // r9@1
  mce::TextureGroup *v7; // r4@1
  ChestRenderer **v8; // r6@1
  ChestRenderer *v9; // r7@1
  ChestRenderer *v10; // r0@1
  SignRenderer **v11; // r6@3
  SignRenderer *v12; // r7@3
  SignRenderer *v13; // r0@3
  BaseEntityRenderer **v14; // r6@5
  BaseEntityRenderer *v15; // r7@5
  BaseEntityRenderer *v16; // r0@5
  SkullBlockRenderer **v17; // r6@7
  SkullBlockRenderer *v18; // r7@7
  SkullBlockRenderer *v19; // r0@7
  EnchantingTableRenderer **v20; // r6@9
  EnchantingTableRenderer *v21; // r7@9
  EnchantingTableRenderer *v22; // r0@9
  ItemFrameRenderer **v23; // r6@11
  ItemFrameRenderer *v24; // r7@11
  ItemFrameRenderer *v25; // r0@11
  PistonBlockEntityRenderer **v26; // r6@13
  PistonBlockEntityRenderer *v27; // r7@13
  PistonBlockEntityRenderer *v28; // r0@13
  BeaconRenderer **v29; // r6@15
  BeaconRenderer *v30; // r7@15
  BeaconRenderer *v31; // r0@15
  MovingBlockEntityRenderer **v32; // r6@17
  MovingBlockEntityRenderer *v33; // r7@17
  MovingBlockEntityRenderer *v34; // r0@17
  ChestRenderer **v35; // r6@19
  ChestRenderer *v36; // r7@19
  ChestRenderer *v37; // r0@19
  StructureBlockRenderer **v38; // r6@21
  StructureBlockRenderer *v39; // r7@21
  StructureBlockRenderer *v40; // r0@21
  ChalkboardRenderer **v41; // r6@23
  ChalkboardRenderer *v42; // r7@23
  ChalkboardRenderer *v43; // r0@23
  ShulkerBoxRenderer **v44; // r6@25
  ShulkerBoxRenderer *v45; // r7@25
  ShulkerBoxRenderer *v46; // r0@25
  EndGatewayRenderer **v47; // r6@27
  EndGatewayRenderer *v48; // r7@27
  EndGatewayRenderer *v49; // r0@27
  CommandBlockRenderer **v50; // r6@29
  CommandBlockRenderer *v51; // r7@29
  CommandBlockRenderer *v52; // r0@29
  BedRenderer **v53; // r6@31
  BedRenderer *v54; // r7@31
  BedRenderer *v55; // r0@31
  int *v56; // r5@33
  BannerRenderer *v57; // r6@33
  int v58; // r2@33
  int v59; // r3@33
  int result; // r0@33
  int v61; // [sp+0h] [bp-60h]@33
  int v62; // [sp+4h] [bp-5Ch]@31
  int v63; // [sp+8h] [bp-58h]@29
  int v64; // [sp+Ch] [bp-54h]@27
  int v65; // [sp+10h] [bp-50h]@25
  int v66; // [sp+14h] [bp-4Ch]@23
  int v67; // [sp+18h] [bp-48h]@21
  int v68; // [sp+1Ch] [bp-44h]@19
  int v69; // [sp+20h] [bp-40h]@17
  int v70; // [sp+24h] [bp-3Ch]@15
  int v71; // [sp+28h] [bp-38h]@13
  int v72; // [sp+2Ch] [bp-34h]@11
  int v73; // [sp+30h] [bp-30h]@9
  int v74; // [sp+34h] [bp-2Ch]@7
  int v75; // [sp+38h] [bp-28h]@5
  int v76; // [sp+3Ch] [bp-24h]@3
  int v77; // [sp+40h] [bp-20h]@1

  v4 = a2;
  v5 = this;
  v77 = 1;
  v6 = a4;
  v7 = a3;
  v8 = (ChestRenderer **)std::map<BlockEntityRendererId,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>,std::less<BlockEntityRendererId>,std::allocator<std::pair<BlockEntityRendererId const,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>>>>::operator[](
                           (int)this,
                           &v77);
  v9 = (ChestRenderer *)operator new(0x66Cu);
  ChestRenderer::ChestRenderer(v9, v7);
  v10 = *v8;
  *v8 = v9;
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  v76 = 2;
  v11 = (SignRenderer **)std::map<BlockEntityRendererId,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>,std::less<BlockEntityRendererId>,std::allocator<std::pair<BlockEntityRendererId const,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>>>>::operator[](
                           (int)v5,
                           &v76);
  v12 = (SignRenderer *)operator new(0x264u);
  SignRenderer::SignRenderer(v12, v7);
  v13 = *v11;
  *v11 = v12;
  if ( v13 )
    (*(void (**)(void))(*(_DWORD *)v13 + 4))();
  v75 = 3;
  v14 = (BaseEntityRenderer **)std::map<BlockEntityRendererId,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>,std::less<BlockEntityRendererId>,std::allocator<std::pair<BlockEntityRendererId const,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>>>>::operator[](
                                 (int)v5,
                                 &v75);
  v15 = (BaseEntityRenderer *)operator new(0x4Cu);
  _aeabi_memclr4(v15, 76);
  BaseEntityRenderer::BaseEntityRenderer(v15);
  *(_DWORD *)v15 = &off_26DB004;
  v16 = *v14;
  *v14 = v15;
  if ( v16 )
    (*(void (**)(void))(*(_DWORD *)v16 + 4))();
  v74 = 4;
  v17 = (SkullBlockRenderer **)std::map<BlockEntityRendererId,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>,std::less<BlockEntityRendererId>,std::allocator<std::pair<BlockEntityRendererId const,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>>>>::operator[](
                                 &v74);
  v18 = (SkullBlockRenderer *)operator new(0x51Cu);
  SkullBlockRenderer::SkullBlockRenderer(v18, v7);
  v19 = *v17;
  *v17 = v18;
  if ( v19 )
    (*(void (**)(void))(*(_DWORD *)v19 + 4))();
  v73 = 5;
  v20 = (EnchantingTableRenderer **)std::map<BlockEntityRendererId,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>,std::less<BlockEntityRendererId>,std::allocator<std::pair<BlockEntityRendererId const,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>>>>::operator[](
                                      (int)v5,
                                      &v73);
  v21 = (EnchantingTableRenderer *)operator new(0x6A4u);
  EnchantingTableRenderer::EnchantingTableRenderer(v21, v7);
  v22 = *v20;
  *v20 = v21;
  if ( v22 )
    (*(void (**)(void))(*(_DWORD *)v22 + 4))();
  v72 = 7;
  v23 = (ItemFrameRenderer **)std::map<BlockEntityRendererId,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>,std::less<BlockEntityRendererId>,std::allocator<std::pair<BlockEntityRendererId const,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>>>>::operator[](
                                (int)v5,
                                &v72);
  v24 = (ItemFrameRenderer *)operator new(0x60u);
  ItemFrameRenderer::ItemFrameRenderer(v24, v7);
  v25 = *v23;
  *v23 = v24;
  if ( v25 )
    (*(void (**)(void))(*(_DWORD *)v25 + 4))();
  v71 = 6;
  v26 = (PistonBlockEntityRenderer **)std::map<BlockEntityRendererId,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>,std::less<BlockEntityRendererId>,std::allocator<std::pair<BlockEntityRendererId const,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>>>>::operator[](
                                        (int)v5,
                                        &v71);
  v27 = (PistonBlockEntityRenderer *)operator new(0x34Cu);
  PistonBlockEntityRenderer::PistonBlockEntityRenderer(v27, v7);
  v28 = *v26;
  *v26 = v27;
  if ( v28 )
    (*(void (**)(void))(*(_DWORD *)v28 + 4))();
  v70 = 10;
  v29 = (BeaconRenderer **)std::map<BlockEntityRendererId,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>,std::less<BlockEntityRendererId>,std::allocator<std::pair<BlockEntityRendererId const,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>>>>::operator[](
                             (int)v5,
                             &v70);
  v30 = (BeaconRenderer *)operator new(0x7Cu);
  BeaconRenderer::BeaconRenderer(v30, v7);
  v31 = *v29;
  *v29 = v30;
  if ( v31 )
    (*(void (**)(void))(*(_DWORD *)v31 + 4))();
  v69 = 8;
  v32 = (MovingBlockEntityRenderer **)std::map<BlockEntityRendererId,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>,std::less<BlockEntityRendererId>,std::allocator<std::pair<BlockEntityRendererId const,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>>>>::operator[](
                                        &v69);
  v33 = (MovingBlockEntityRenderer *)operator new(0xE0u);
  MovingBlockEntityRenderer::MovingBlockEntityRenderer(v33, v7, v6);
  v34 = *v32;
  *v32 = v33;
  if ( v34 )
    (*(void (**)(void))(*(_DWORD *)v34 + 4))();
  v68 = 12;
  v35 = (ChestRenderer **)std::map<BlockEntityRendererId,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>,std::less<BlockEntityRendererId>,std::allocator<std::pair<BlockEntityRendererId const,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>>>>::operator[](
                            (int)v5,
                            &v68);
  v36 = (ChestRenderer *)operator new(0x66Cu);
  ChestRenderer::ChestRenderer(v36, v7);
  v37 = *v35;
  *v35 = v36;
  if ( v37 )
    (*(void (**)(void))(*(_DWORD *)v37 + 4))();
  v67 = 13;
  v38 = (StructureBlockRenderer **)std::map<BlockEntityRendererId,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>,std::less<BlockEntityRendererId>,std::allocator<std::pair<BlockEntityRendererId const,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>>>>::operator[](
                                     (int)v5,
                                     &v67);
  v39 = (StructureBlockRenderer *)operator new(0x80u);
  StructureBlockRenderer::StructureBlockRenderer(v39, v7, v6);
  v40 = *v38;
  *v38 = v39;
  if ( v40 )
    (*(void (**)(void))(*(_DWORD *)v40 + 4))();
  v66 = 9;
  v41 = (ChalkboardRenderer **)std::map<BlockEntityRendererId,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>,std::less<BlockEntityRendererId>,std::allocator<std::pair<BlockEntityRendererId const,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>>>>::operator[](
                                 &v66);
  v42 = (ChalkboardRenderer *)operator new(0x910u);
  ChalkboardRenderer::ChalkboardRenderer(v42, v7, v4);
  v43 = *v41;
  *v41 = v42;
  if ( v43 )
    (*(void (**)(void))(*(_DWORD *)v43 + 4))();
  v65 = 14;
  v44 = (ShulkerBoxRenderer **)std::map<BlockEntityRendererId,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>,std::less<BlockEntityRendererId>,std::allocator<std::pair<BlockEntityRendererId const,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>>>>::operator[](
                                 &v65);
  v45 = (ShulkerBoxRenderer *)operator new(0x3E0u);
  ShulkerBoxRenderer::ShulkerBoxRenderer(v45, v7, v4);
  v46 = *v44;
  *v44 = v45;
  if ( v46 )
    (*(void (**)(void))(*(_DWORD *)v46 + 4))();
  v64 = 11;
  v47 = (EndGatewayRenderer **)std::map<BlockEntityRendererId,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>,std::less<BlockEntityRendererId>,std::allocator<std::pair<BlockEntityRendererId const,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>>>>::operator[](
                                 &v64);
  v48 = (EndGatewayRenderer *)operator new(0x80u);
  EndGatewayRenderer::EndGatewayRenderer(v48, v7);
  v49 = *v47;
  *v47 = v48;
  if ( v49 )
    (*(void (**)(void))(*(_DWORD *)v49 + 4))();
  v63 = 15;
  v50 = (CommandBlockRenderer **)std::map<BlockEntityRendererId,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>,std::less<BlockEntityRendererId>,std::allocator<std::pair<BlockEntityRendererId const,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>>>>::operator[](
                                   (int)v5,
                                   &v63);
  v51 = (CommandBlockRenderer *)operator new(0x4Cu);
  CommandBlockRenderer::CommandBlockRenderer(v51);
  v52 = *v50;
  *v50 = v51;
  if ( v52 )
    (*(void (**)(void))(*(_DWORD *)v52 + 4))();
  v62 = 16;
  v53 = (BedRenderer **)std::map<BlockEntityRendererId,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>,std::less<BlockEntityRendererId>,std::allocator<std::pair<BlockEntityRendererId const,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>>>>::operator[](
                          (int)v5,
                          &v62);
  v54 = (BedRenderer *)operator new(0x3D8u);
  BedRenderer::BedRenderer(v54, v7);
  v55 = *v53;
  *v53 = v54;
  if ( v55 )
    (*(void (**)(void))(*(_DWORD *)v55 + 4))();
  v61 = 17;
  v56 = (int *)std::map<BlockEntityRendererId,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>,std::less<BlockEntityRendererId>,std::allocator<std::pair<BlockEntityRendererId const,std::unique_ptr<BlockEntityRenderer,std::default_delete<BlockEntityRenderer>>>>>::operator[](
                 (int)v5,
                 &v61);
  v57 = (BannerRenderer *)operator new(0x5ECu);
  BannerRenderer::BannerRenderer(v57, v7);
  result = *v56;
  *v56 = (int)v57;
  if ( result )
    result = (*(int (__cdecl **)(int, _DWORD, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(*(_DWORD *)result + 4))(
               result,
               *(_DWORD *)(*(_DWORD *)result + 4),
               v58,
               v59,
               v61,
               v62,
               v63,
               v64,
               v65,
               v66,
               v67,
               v68,
               v69,
               v70,
               v71,
               v72,
               v73);
  return result;
}


BlockEntityRenderDispatcher *__fastcall BlockEntityRenderDispatcher::render(BlockEntityRenderDispatcher *this, BaseEntityRenderContext *a2, BlockSource *a3, BlockEntity *a4, int a5, const mce::MaterialPtr *a6, const mce::TexturePtr *a7, int a8)
{
  BaseEntityRenderContext *v8; // r4@1
  BlockEntityRenderDispatcher *v9; // r7@1
  BlockEntity *v10; // r5@1
  BlockSource *v11; // r8@1
  char *v13; // r0@1
  BlockEntityRenderDispatcher *result; // r0@1
  char *v18; // r0@3
  char *v19; // r0@3
  BlockEntityRenderDispatcher *v20; // r6@3
  signed int v21; // r1@3
  int v22; // r3@4
  BlockEntityRenderDispatcher *v23; // r2@5
  int v25; // r0@18
  int (__fastcall *v26)(BlockEntityRenderDispatcher *, BaseEntityRenderContext *, char *); // r3@19
  float v27; // [sp+10h] [bp-48h]@3
  float v30; // [sp+1Ch] [bp-3Ch]@18
  char v31; // [sp+28h] [bp-30h]@18

  v8 = a2;
  v9 = this;
  v10 = a4;
  v11 = a3;
  _R6 = BaseEntityRenderContext::getCameraTargetPosition(a2);
  v13 = BlockEntity::getAABB(v10);
  result = (BlockEntityRenderDispatcher *)AABB::distanceToSqr((AABB *)v13, (const Vec3 *)_R6);
  __asm
  {
    VLDR            S0, =4096.0
    VMOV            S2, R0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    v18 = BlockEntity::getPosition(v10);
    Vec3::Vec3((int)&v27, (int)v18);
    __asm
    {
      VLDR            S0, [R6]
      VLDR            S6, [SP,#0x58+var_48]
      VLDR            S2, [R6,#4]
      VLDR            S8, [SP,#0x58+var_44]
      VSUB.F32        S0, S6, S0
      VLDR            S4, [R6,#8]
      VLDR            S10, [SP,#0x58+var_40]
      VSUB.F32        S2, S8, S2
      VSUB.F32        S4, S10, S4
      VSTR            S0, [SP,#0x58+var_3C]
      VSTR            S2, [SP,#0x58+var_38]
      VSTR            S4, [SP,#0x58+var_34]
    }
    v19 = BlockEntity::getRendererId(v10);
    v20 = (BlockEntityRenderDispatcher *)*((_DWORD *)v9 + 2);
    v21 = *(_DWORD *)v19;
    result = (BlockEntityRenderDispatcher *)((char *)v9 + 4);
    if ( v20 )
      v22 = (int)v9 + 4;
      do
      {
        v23 = v20;
        while ( 1 )
        {
          v9 = (BlockEntityRenderDispatcher *)*((_DWORD *)v23 + 4);
          if ( (signed int)v9 >= v21 )
            break;
          v23 = (BlockEntityRenderDispatcher *)*((_DWORD *)v23 + 3);
          if ( !v23 )
          {
            v23 = (BlockEntityRenderDispatcher *)v22;
            goto LABEL_12;
          }
        }
        v20 = (BlockEntityRenderDispatcher *)*((_DWORD *)v23 + 2);
        v22 = (int)v23;
      }
      while ( v20 );
    else
      v23 = (BlockEntityRenderDispatcher *)((char *)v9 + 4);
LABEL_12:
    if ( v23 != result )
      if ( *((_DWORD *)v23 + 4) > v21 )
        v23 = result;
      _ZF = v23 == result;
      if ( v23 != result )
        v9 = (BlockEntityRenderDispatcher *)*((_DWORD *)v23 + 5);
        _ZF = v9 == 0;
      if ( !_ZF )
        BlockEntityRenderData::BlockEntityRenderData(
          (BlockEntityRenderData *)&v31,
          v11,
          v10,
          (const Vec3 *)&v30,
          a6,
          a7,
          a8);
        v25 = *(_DWORD *)v9;
        if ( a5 == 1 )
          v26 = *(int (__fastcall **)(BlockEntityRenderDispatcher *, BaseEntityRenderContext *, char *))(v25 + 16);
        else
          v26 = *(int (__fastcall **)(BlockEntityRenderDispatcher *, BaseEntityRenderContext *, char *))(v25 + 12);
        result = (BlockEntityRenderDispatcher *)v26(v9, v8, &v31);
  return result;
}


BlockEntityRenderDispatcher *__fastcall BlockEntityRenderDispatcher::render(int a1, int a2, int a3, BlockEntity *this, int a5, int a6, int a7, int a8, int a9)
{
  return BlockEntityRenderDispatcher::render(
           (BlockEntityRenderDispatcher *)a1,
           (BaseEntityRenderContext *)a2,
           (BlockSource *)a3,
           this,
           (const Vec3 *)a5,
           a6,
           (const mce::MaterialPtr *)a7,
           (const mce::TexturePtr *)a8,
           a9);
}


BlockEntityRenderDispatcher *__fastcall BlockEntityRenderDispatcher::render(BlockEntityRenderDispatcher *this, BaseEntityRenderContext *a2, BlockSource *a3, BlockEntity *a4, const Vec3 *a5, int a6, const mce::MaterialPtr *a7, const mce::TexturePtr *a8, int a9)
{
  BlockEntity *v9; // r5@1
  BlockEntityRenderDispatcher *v10; // r7@1
  BlockSource *v11; // r6@1
  BaseEntityRenderContext *v12; // r8@1
  char *v13; // r0@1
  BlockEntityRenderDispatcher *v14; // r4@1
  signed int v15; // r1@1
  BlockEntityRenderDispatcher *result; // r0@1
  int v17; // r3@2
  BlockEntityRenderDispatcher *v18; // r2@3
  bool v19; // zf@13
  int v20; // r0@16
  int (__fastcall *v21)(BlockEntityRenderDispatcher *, BaseEntityRenderContext *, char *); // r3@17
  char v22; // [sp+10h] [bp-30h]@16

  v9 = a4;
  v10 = this;
  v11 = a3;
  v12 = a2;
  v13 = BlockEntity::getRendererId(a4);
  v14 = (BlockEntityRenderDispatcher *)*((_DWORD *)v10 + 2);
  v15 = *(_DWORD *)v13;
  result = (BlockEntityRenderDispatcher *)((char *)v10 + 4);
  if ( v14 )
  {
    v17 = (int)v10 + 4;
    do
    {
      v18 = v14;
      while ( 1 )
      {
        v10 = (BlockEntityRenderDispatcher *)*((_DWORD *)v18 + 4);
        if ( (signed int)v10 >= v15 )
          break;
        v18 = (BlockEntityRenderDispatcher *)*((_DWORD *)v18 + 3);
        if ( !v18 )
        {
          v18 = (BlockEntityRenderDispatcher *)v17;
          goto LABEL_10;
        }
      }
      v14 = (BlockEntityRenderDispatcher *)*((_DWORD *)v18 + 2);
      v17 = (int)v18;
    }
    while ( v14 );
  }
  else
    v18 = (BlockEntityRenderDispatcher *)((char *)v10 + 4);
LABEL_10:
  if ( v18 != result )
    if ( *((_DWORD *)v18 + 4) > v15 )
      v18 = result;
    v19 = v18 == result;
    if ( v18 != result )
      v10 = (BlockEntityRenderDispatcher *)*((_DWORD *)v18 + 5);
      v19 = v10 == 0;
    if ( !v19 )
      BlockEntityRenderData::BlockEntityRenderData((BlockEntityRenderData *)&v22, v11, v9, a5, a7, a8, a9);
      v20 = *(_DWORD *)v10;
      if ( a6 == 1 )
        v21 = *(int (__fastcall **)(BlockEntityRenderDispatcher *, BaseEntityRenderContext *, char *))(v20 + 16);
      else
        v21 = *(int (__fastcall **)(BlockEntityRenderDispatcher *, BaseEntityRenderContext *, char *))(v20 + 12);
      result = (BlockEntityRenderDispatcher *)v21(v10, v12, &v22);
  return result;
}


int __fastcall BlockEntityRenderDispatcher::renderShulkerBox(int result, BaseEntityRenderContext *a2, const ItemInstance *a3)
{
  int v3; // lr@1
  int v4; // r12@1
  int v5; // r4@2
  int v6; // r3@3
  bool v7; // zf@13

  v3 = *(_DWORD *)(result + 8);
  v4 = result + 4;
  if ( v3 )
  {
    v5 = result + 4;
    do
    {
      v6 = v3;
      while ( 1 )
      {
        result = *(_DWORD *)(v6 + 16);
        if ( result >= 14 )
          break;
        v6 = *(_DWORD *)(v6 + 12);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v3 = *(_DWORD *)(v6 + 8);
      v5 = v6;
    }
    while ( v3 );
  }
  else
    v6 = result + 4;
LABEL_10:
  if ( v6 != v4 )
    result = *(_DWORD *)(v6 + 16);
    if ( result > 14 )
      v6 = v4;
    v7 = v6 == v4;
    if ( v6 != v4 )
      result = *(_DWORD *)(v6 + 20);
      v7 = result == 0;
    if ( !v7 )
      result = j_j_j__ZN18ShulkerBoxRenderer12renderByItemER23BaseEntityRenderContextRK12ItemInstance(
                 (ShulkerBoxRenderer *)result,
                 a2,
                 a3);
  return result;
}


int __fastcall BlockEntityRenderDispatcher::renderBanner(int result, BaseEntityRenderContext *a2, const ItemInstance *a3)
{
  int v3; // lr@1
  int v4; // r12@1
  int v5; // r4@2
  int v6; // r3@3
  bool v7; // zf@13

  v3 = *(_DWORD *)(result + 8);
  v4 = result + 4;
  if ( v3 )
  {
    v5 = result + 4;
    do
    {
      v6 = v3;
      while ( 1 )
      {
        result = *(_DWORD *)(v6 + 16);
        if ( result >= 17 )
          break;
        v6 = *(_DWORD *)(v6 + 12);
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_10;
        }
      }
      v3 = *(_DWORD *)(v6 + 8);
      v5 = v6;
    }
    while ( v3 );
  }
  else
    v6 = result + 4;
LABEL_10:
  if ( v6 != v4 )
    result = *(_DWORD *)(v6 + 16);
    if ( result > 17 )
      v6 = v4;
    v7 = v6 == v4;
    if ( v6 != v4 )
      result = *(_DWORD *)(v6 + 20);
      v7 = result == 0;
    if ( !v7 )
      result = j_j_j__ZN14BannerRenderer12renderByItemER23BaseEntityRenderContextRK12ItemInstance(
                 (BannerRenderer *)result,
                 a2,
                 a3);
  return result;
}


int __fastcall BlockEntityRenderDispatcher::BlockEntityRenderDispatcher(int result)
{
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 12) = result + 4;
  *(_DWORD *)(result + 16) = result + 4;
  return result;
}


int __fastcall BlockEntityRenderDispatcher::getRenderer(BlockEntityRenderDispatcher *this, BlockEntity *a2)
{
  BlockEntityRenderDispatcher *v2; // r4@1
  char *v3; // r0@1
  int v4; // r3@1
  int v5; // r1@1
  int v6; // r0@1
  int v7; // r4@2
  int v8; // r2@3
  int result; // r0@14

  v2 = this;
  v3 = BlockEntity::getRendererId(a2);
  v4 = *((_DWORD *)v2 + 2);
  v5 = *(_DWORD *)v3;
  v6 = (int)v2 + 4;
  if ( v4 )
  {
    v7 = (int)v2 + 4;
    do
    {
      v8 = v4;
      while ( *(_DWORD *)(v8 + 16) < v5 )
      {
        v8 = *(_DWORD *)(v8 + 12);
        if ( !v8 )
        {
          v8 = v7;
          goto LABEL_10;
        }
      }
      v4 = *(_DWORD *)(v8 + 8);
      v7 = v8;
    }
    while ( v4 );
  }
  else
    v8 = (int)v2 + 4;
LABEL_10:
  if ( v8 == v6 )
    goto LABEL_18;
  if ( *(_DWORD *)(v8 + 16) > v5 )
    v8 = v6;
LABEL_18:
    result = 0;
    result = *(_DWORD *)(v8 + 20);
  return result;
}


int __fastcall BlockEntityRenderDispatcher::renderSkull(int a1, int a2, int a3, int a4, int a5, float a6, int a7, int a8, int a9, float a10)
{
  int v10; // r4@1
  int v11; // r12@1
  int v12; // lr@2
  int result; // r0@3
  bool v14; // zf@13

  v10 = *(_DWORD *)(a1 + 8);
  v11 = a1 + 4;
  if ( v10 )
  {
    v12 = a1 + 4;
    do
    {
      result = v10;
      while ( *(_DWORD *)(result + 16) < 4 )
      {
        result = *(_DWORD *)(result + 12);
        if ( !result )
        {
          result = v12;
          goto LABEL_10;
        }
      }
      v10 = *(_DWORD *)(result + 8);
      v12 = result;
    }
    while ( v10 );
  }
  else
    result = a1 + 4;
LABEL_10:
  if ( result != v11 )
    if ( *(_DWORD *)(result + 16) > 4 )
      result = v11;
    v14 = result == v11;
    if ( result != v11 )
      result = *(_DWORD *)(result + 20);
      v14 = result == 0;
    if ( !v14 )
      result = j_j_j__ZN18SkullBlockRenderer11renderSkullER23BaseEntityRenderContextRK4Vec3ifN16SkullBlockEntity9SkullTypeEPKN3mce11MaterialPtrEPKNS7_10TexturePtrEif(
                 *(float *)&result,
                 a2,
                 a3,
                 a4,
                 a5,
                 a6,
                 a7,
                 a8,
                 a9,
                 a10);
  return result;
}
