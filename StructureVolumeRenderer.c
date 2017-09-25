

int __fastcall StructureVolumeRenderer::_initializeChunkBuilder(StructureVolumeRenderer *this, BlockSource *a2, Tessellator *a3, const AABB *a4)
{
  StructureVolumeRenderer *v4; // r4@1
  const AABB *v5; // r8@1
  Tessellator *v6; // r6@1
  ChunkSource *v7; // r5@2
  void *v8; // r7@2
  RenderChunkBuilder *v9; // r0@2
  RenderChunkBuilder *v10; // r0@3
  int result; // r0@4

  v4 = this;
  v5 = a4;
  v6 = a3;
  if ( *((_BYTE *)this + 20) )
  {
    v7 = (ChunkSource *)BlockSource::getChunkSource(a2);
    v8 = operator new(0x1C0u);
    RenderChunkBuilder::RenderChunkBuilder((int)v8, v7, (int)v6);
    v9 = (RenderChunkBuilder *)*((_DWORD *)v4 + 18);
    *((_DWORD *)v4 + 18) = v8;
    if ( v9 )
    {
      v10 = RenderChunkBuilder::~RenderChunkBuilder(v9);
      operator delete((void *)v10);
    }
  }
  result = *((_DWORD *)v4 + 18);
  if ( result )
    RenderChunkBuilder::setGUIRendering((RenderChunkBuilder *)result, 1);
    RenderChunkBuilder::applyBuildBoundingBox(*((RenderChunkBuilder **)v4 + 18), v5);
    result = *((_DWORD *)v4 + 18);
    *(_BYTE *)(result + 412) = 1;
  return result;
}


void __fastcall StructureVolumeRenderer::_onAreaChanged(StructureVolumeRenderer *this, const AABB *a2)
{
  StructureVolumeRenderer::_onAreaChanged(this, a2);
}


int __fastcall StructureVolumeRenderer::onAppSuspended(StructureVolumeRenderer *this)
{
  StructureVolumeRenderer *v1; // r4@1
  BlockSource *v2; // r0@1
  int v3; // r5@3
  RenderChunk *v4; // r0@4
  int v5; // r6@4
  RenderChunk *v6; // r0@5
  int result; // r0@7

  v1 = this;
  v2 = (BlockSource *)*((_DWORD *)this + 28);
  if ( v2 )
    BlockSource::removeListener(v2, (StructureVolumeRenderer *)((char *)v1 + 8));
  v3 = *((_DWORD *)v1 + 21);
  if ( v3 )
  {
    do
    {
      v4 = *(RenderChunk **)(v3 + 16);
      v5 = *(_DWORD *)v3;
      if ( v4 )
      {
        v6 = RenderChunk::~RenderChunk(v4);
        operator delete((void *)v6);
      }
      operator delete((void *)v3);
      v3 = v5;
    }
    while ( v5 );
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 76), 4 * (*(_QWORD *)((char *)v1 + 76) >> 32));
  result = 0;
  *((_DWORD *)v1 + 21) = 0;
  *((_DWORD *)v1 + 22) = 0;
  return result;
}


MinecraftUICustomRenderer *__fastcall StructureVolumeRenderer::StructureVolumeRenderer(MinecraftUICustomRenderer *a1)
{
  MinecraftUICustomRenderer *v1; // r4@1
  double v2; // r0@1
  unsigned int v3; // r0@1
  int v4; // r7@3
  void *v5; // r6@3

  v1 = a1;
  MinecraftUICustomRenderer::MinecraftUICustomRenderer(a1);
  *((_DWORD *)v1 + 2) = &off_271824C;
  AppPlatformListener::AppPlatformListener((MinecraftUICustomRenderer *)((char *)v1 + 12));
  *(_DWORD *)v1 = &off_26E0714;
  *((_DWORD *)v1 + 2) = &off_26E0764;
  *((_DWORD *)v1 + 3) = &off_26E0798;
  *((_BYTE *)v1 + 20) = 1;
  *((_BYTE *)v1 + 21) = 0;
  *((_QWORD *)v1 + 3) = 4692750812839804928LL;
  AABB::AABB((MinecraftUICustomRenderer *)((char *)v1 + 32));
  *((_DWORD *)v1 + 21) = 0;
  *((_DWORD *)v1 + 22) = 0;
  *((_DWORD *)v1 + 17) = 0;
  *((_DWORD *)v1 + 18) = 0;
  *((_DWORD *)v1 + 15) = 0;
  *((_DWORD *)v1 + 16) = 0;
  *((_DWORD *)v1 + 23) = 1065353216;
  LODWORD(v2) = (char *)v1 + 92;
  *(_DWORD *)(LODWORD(v2) + 4) = 0;
  v3 = sub_119C844(v2);
  *((_DWORD *)v1 + 20) = v3;
  if ( v3 == 1 )
  {
    *((_DWORD *)v1 + 25) = 0;
    v5 = (char *)v1 + 100;
  }
  else
    if ( v3 >= 0x40000000 )
      sub_119C874();
    v4 = 4 * v3;
    v5 = operator new(4 * v3);
    _aeabi_memclr4(v5, v4);
  *((_DWORD *)v1 + 19) = v5;
  *((_DWORD *)v1 + 26) = 0;
  *((_DWORD *)v1 + 27) = 0;
  *((_DWORD *)v1 + 28) = 0;
  return v1;
}


void __fastcall StructureVolumeRenderer::~StructureVolumeRenderer(StructureVolumeRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)StructureVolumeRenderer::~StructureVolumeRenderer(this);
  j_j_j__ZdlPv_4(v1);
}


void __fastcall StructureVolumeRenderer::_onAreaChanged(StructureVolumeRenderer *this, const AABB *a2)
{
  StructureVolumeRenderer *v2; // r11@1
  int v3; // r6@1
  void *v4; // r4@2
  int v5; // r7@2
  int v6; // r0@4
  int v7; // r1@5
  _DWORD *v8; // r0@5
  _DWORD *v9; // r2@6
  __int64 v10; // [sp+0h] [bp-38h]@4
  void *v11; // [sp+8h] [bp-30h]@1
  int v12; // [sp+Ch] [bp-2Ch]@2

  v2 = this;
  StructureVolumeRenderer::_generateChunkStartPositions((StructureVolumeRenderer *)&v11, a2, (int)a2);
  v3 = *((_DWORD *)v2 + 21);
  if ( v3 )
  {
    v5 = v12;
    v4 = v11;
    do
    {
      if ( std::__find_if<__gnu_cxx::__normal_iterator<BlockPos *,std::vector<BlockPos,std::allocator<BlockPos>>>,__gnu_cxx::__ops::_Iter_equals_val<BlockPos const>>(
             (int)v4,
             v5,
             v3 + 4) == v5 )
      {
        v7 = *(_DWORD *)(v3 + 20) % (unsigned int)(*(_QWORD *)((char *)v2 + 76) >> 32);
        v8 = *(_DWORD **)(*(_QWORD *)((char *)v2 + 76) + 4 * v7);
        do
        {
          v9 = v8;
          v8 = (_DWORD *)*v8;
        }
        while ( v8 != (_DWORD *)v3 );
        v3 = std::_Hashtable<BlockPos,std::pair<BlockPos const,std::unique_ptr<RenderChunk,std::default_delete<RenderChunk>>>,std::allocator<std::pair<BlockPos const,std::unique_ptr<RenderChunk,std::default_delete<RenderChunk>>>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_erase(
               (int)v2 + 76,
               v7,
               v9,
               v3);
      }
      else
        v6 = *(_DWORD *)(v3 + 16);
        v10 = *((_QWORD *)v2 + 13);
        RenderChunk::setDirty(v6, &v10, 1);
        v3 = *(_DWORD *)v3;
    }
    while ( v3 );
  }
  else
  if ( v4 )
    operator delete(v4);
}


int __fastcall StructureVolumeRenderer::_renderEntities(StructureVolumeRenderer *this, BaseEntityRenderContext *a2, BlockSource *a3, const AABB *a4)
{
  BaseEntityRenderContext *v4; // r4@1
  const AABB *v5; // r8@1
  BlockSource *v6; // r7@1
  char v7; // r6@1
  __int64 v8; // r8@1
  int v9; // r2@5
  char v10; // r10@5
  int v11; // r7@5
  int v12; // r6@6
  float v18; // r3@6
  EntityRenderDispatcher *v20; // [sp+4h] [bp-54h]@1
  char v21; // [sp+8h] [bp-50h]@6
  float v22; // [sp+10h] [bp-48h]@6
  float v25; // [sp+1Ch] [bp-3Ch]@6
  char v26; // [sp+28h] [bp-30h]@6

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v20 = (EntityRenderDispatcher *)BaseEntityRenderContext::getEntityRenderDispatcher(a2);
  v7 = 0;
  v8 = *(_QWORD *)BlockSource::fetchEntities(v6, 0, v5);
  if ( (_DWORD)v8 != HIDWORD(v8) )
  {
    v7 = 0;
    do
    {
      if ( *(_DWORD *)v8 && !Entity::hasCategory(*(_DWORD *)v8, 1) )
      {
        v9 = *(_DWORD *)v8;
        v10 = *(_BYTE *)(*(_DWORD *)v8 + 228);
        *(_BYTE *)(v9 + 228) = 1;
        EntityRenderDispatcher::render(v20, v4, (Entity *)v9);
        v11 = EntityRenderDispatcher::getRenderer(v20, *(Entity **)v8);
        if ( v11 )
        {
          v12 = *(_DWORD *)v8;
          Entity::getInterpolatedPosition((Entity *)&v22, *(float *)v8, *((_DWORD *)v4 + 1));
          _R0 = BaseEntityRenderContext::getCameraTargetPosition(v4);
          __asm
          {
            VLDR            S0, [R0]
            VLDR            S6, [SP,#0x58+var_48]
            VLDR            S2, [R0,#4]
            VLDR            S4, [R0,#8]
            VSUB.F32        S0, S6, S0
            VLDR            S8, [SP,#0x58+var_44]
            VLDR            S10, [SP,#0x58+var_40]
            VSUB.F32        S2, S8, S2
            VSUB.F32        S4, S10, S4
            VSTR            S0, [SP,#0x58+var_3C]
            VSTR            S2, [SP,#0x58+var_38]
            VSTR            S4, [SP,#0x58+var_34]
          }
          Entity::getInterpolatedRotation((Entity *)&v21, *(float *)v8, *((float *)v4 + 1), v18);
          EntityRenderData::EntityRenderData((int)&v26, v12, (int)&v25, (int)&v21);
          (*(void (__fastcall **)(int, BaseEntityRenderContext *, char *))(*(_DWORD *)v11 + 20))(v11, v4, &v26);
        }
        v7 = 1;
        *(_BYTE *)(*(_DWORD *)v8 + 228) = v10;
      }
      LODWORD(v8) = v8 + 4;
    }
    while ( HIDWORD(v8) != (_DWORD)v8 );
  }
  return v7 & 1;
}


void __fastcall StructureVolumeRenderer::_updateCursorRotation(StructureVolumeRenderer *this, UIControl *a2)
{
  UIControl *v2; // r5@1
  int v4; // r6@1
  const char *v6; // r5@1
  signed int v7; // r0@1
  Json::Value *v12; // r5@3
  int v14; // r1@5
  char *v15; // r0@5
  const char *v16; // r5@6
  signed int v17; // r0@6
  Json::Value *v18; // r5@8
  int v20; // r1@10
  char *v21; // r0@10
  unsigned int *v22; // r2@16
  signed int v23; // r1@18
  unsigned int *v24; // r2@20
  signed int v25; // r1@22
  const char *v26; // [sp+8h] [bp-40h]@6
  const char *v27; // [sp+10h] [bp-38h]@1
  int v28; // [sp+14h] [bp-34h]@5
  int v29; // [sp+18h] [bp-30h]@10

  v2 = a2;
  _R4 = this;
  v4 = UIControl::getPropertyBag(a2);
  _R8 = UIControl::getSize(v2);
  sub_119C884((void **)&v27, "#gesture_mouse_delta_x");
  v6 = v27;
  v7 = Json::Value::isNull((Json::Value *)(v4 + 8));
  __asm { VLDR            S16, =0.0 }
  if ( !v7 && Json::Value::isObject((Json::Value *)(v4 + 8)) == 1 )
  {
    v12 = (Json::Value *)Json::Value::operator[](v4 + 8, v6);
    if ( Json::Value::isNumeric(v12) == 1 )
    {
      _R0 = Json::Value::asFloat(v12, 0.0);
      __asm { VMOV            S16, R0 }
    }
  }
  v14 = *((_DWORD *)v27 - 3);
  v28 = 0;
  UIPropertyBag::set<float>(v4, v14, v27, (int)&v28);
  v15 = (char *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v27 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  sub_119C884((void **)&v26, "#gesture_mouse_delta_y");
  v16 = v26;
  v17 = Json::Value::isNull((Json::Value *)(v4 + 8));
  __asm { VLDR            S18, =0.0 }
  if ( !v17 && Json::Value::isObject((Json::Value *)(v4 + 8)) == 1 )
    v18 = (Json::Value *)Json::Value::operator[](v4 + 8, v16);
    if ( Json::Value::isNumeric(v18) == 1 )
      _R0 = Json::Value::asFloat(v18, 0.0);
      __asm { VMOV            S18, R0 }
  v20 = *((_DWORD *)v26 - 3);
  v29 = 0;
  UIPropertyBag::set<float>(v4, v20, v26, (int)&v29);
  v21 = (char *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v26 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  __asm
    VLDR            S0, =360.0
    VLDR            S4, [R8]
    VMUL.F32        S2, S16, S0
    VMUL.F32        S0, S18, S0
    VDIV.F32        S2, S2, S4
    VLDR            S4, [R4,#0x18]
    VADD.F32        S2, S4, S2
    VLDR            S4, =90.0
    VSTR            S2, [R4,#0x18]
    VLDR            S2, [R8,#4]
    VDIV.F32        S0, S0, S2
    VLDR            S2, [R4,#0x1C]
    VADD.F32        S0, S2, S0
    VLDR            S2, =-90.0
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S0, S4
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S2, S0 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S2, S4 }
  __asm { VSTR            S2, [R4,#0x1C] }
}


void __fastcall StructureVolumeRenderer::_updateCursorRotation(StructureVolumeRenderer *this, UIControl *a2)
{
  StructureVolumeRenderer::_updateCursorRotation(this, a2);
}


void __fastcall StructureVolumeRenderer::~StructureVolumeRenderer(StructureVolumeRenderer *this)
{
  StructureVolumeRenderer::~StructureVolumeRenderer(this);
}


void __fastcall StructureVolumeRenderer::_getStructureArea(StructureVolumeRenderer *this, const UIPropertyBag *a2, int a3)
{
  StructureVolumeRenderer::_getStructureArea(this, a2, a3);
}


int __fastcall StructureVolumeRenderer::~StructureVolumeRenderer(StructureVolumeRenderer *this)
{
  StructureVolumeRenderer *v1; // r4@1
  BlockSourceListener *v2; // r1@1
  AppPlatformListener *v3; // r5@1
  BlockSource *v4; // r0@1
  int v5; // r6@3
  RenderChunk *v6; // r0@4
  int v7; // r7@4
  RenderChunk *v8; // r0@5
  char *v9; // r0@7
  RenderChunkBuilder *v10; // r0@10
  RenderChunkBuilder *v11; // r0@11
  void *v12; // r0@12

  v1 = this;
  *(_DWORD *)this = &off_26E0714;
  *((_DWORD *)this + 2) = &off_26E0764;
  v2 = (StructureVolumeRenderer *)((char *)this + 8);
  *((_DWORD *)this + 3) = &off_26E0798;
  v3 = (StructureVolumeRenderer *)((char *)this + 12);
  v4 = (BlockSource *)*((_DWORD *)this + 28);
  if ( v4 )
    BlockSource::removeListener(v4, v2);
  v5 = *((_DWORD *)v1 + 21);
  if ( v5 )
  {
    do
    {
      v6 = *(RenderChunk **)(v5 + 16);
      v7 = *(_DWORD *)v5;
      if ( v6 )
      {
        v8 = RenderChunk::~RenderChunk(v6);
        operator delete((void *)v8);
      }
      operator delete((void *)v5);
      v5 = v7;
    }
    while ( v7 );
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 76), 4 * (*(_QWORD *)((char *)v1 + 76) >> 32));
  *((_DWORD *)v1 + 21) = 0;
  *((_DWORD *)v1 + 22) = 0;
  v9 = (char *)*((_DWORD *)v1 + 19);
  if ( v9 && (char *)v1 + 100 != v9 )
    operator delete(v9);
  v10 = (RenderChunkBuilder *)*((_DWORD *)v1 + 18);
  if ( v10 )
    v11 = RenderChunkBuilder::~RenderChunkBuilder(v10);
    operator delete((void *)v11);
  *((_DWORD *)v1 + 18) = 0;
  v12 = (void *)*((_DWORD *)v1 + 15);
  if ( v12 )
    operator delete(v12);
  AppPlatformListener::~AppPlatformListener(v3);
  return j_j_j__ZN25MinecraftUICustomRendererD2Ev_0(v1);
}


int __fastcall StructureVolumeRenderer::_renderBlockEntities(StructureVolumeRenderer *this, BaseEntityRenderContext *a2, BlockSource *a3, const AABB *a4, int a5)
{
  const AABB *v5; // r4@1
  const AABB *v6; // r1@1
  const BlockPos *v7; // r9@1
  ChunkPos *v8; // r5@2
  char v9; // r10@3
  const BlockPos *v10; // r7@3
  LevelChunk *v11; // r0@4
  int i; // r5@5
  BlockEntity *v13; // r8@8
  char *v14; // r0@8
  const BlockPos *v15; // r4@14
  LevelChunk *v16; // r0@15
  int j; // r9@16
  BlockEntity *v18; // r5@19
  char *v19; // r0@19
  BlockPos *ptr; // [sp+14h] [bp-94h]@3
  const BlockPos *v22; // [sp+18h] [bp-90h]@1
  BlockEntityRenderDispatcher *v23; // [sp+20h] [bp-88h]@1
  __int64 v24; // [sp+24h] [bp-84h]@1
  char v25; // [sp+2Ch] [bp-7Ch]@8
  char v26; // [sp+38h] [bp-70h]@2
  const BlockPos *v27; // [sp+44h] [bp-64h]@1
  const BlockPos *v28; // [sp+48h] [bp-60h]@1
  int v29; // [sp+50h] [bp-58h]@1
  signed int v30; // [sp+54h] [bp-54h]@1
  int v31; // [sp+58h] [bp-50h]@1
  int v32; // [sp+5Ch] [bp-4Ch]@1
  signed int v33; // [sp+60h] [bp-48h]@1
  int v34; // [sp+64h] [bp-44h]@1
  char v35; // [sp+68h] [bp-40h]@1

  v5 = a4;
  v24 = *(_QWORD *)&a2;
  v23 = (BlockEntityRenderDispatcher *)BaseEntityRenderContext::getBlockEntityRenderDispatcher(a2);
  v32 = 1000593162;
  v33 = 1000593162;
  v34 = 1000593162;
  AABB::grow((AABB *)&v35, v5, (int)&v32);
  v29 = -1146890486;
  v30 = -1146890486;
  v31 = -1146890486;
  AABB::move((AABB *)&v35, (const Vec3 *)&v29);
  StructureVolumeRenderer::_generateChunkStartPositions((StructureVolumeRenderer *)&v27, v6, (int)v5);
  v7 = v28;
  v22 = v28;
  if ( v27 == v28 )
  {
    ptr = v27;
    v9 = 0;
  }
  else
    v8 = (ChunkPos *)&v26;
    if ( a5 == 1 )
    {
      v9 = 0;
      v10 = v27;
      ptr = v27;
      do
      {
        ChunkPos::ChunkPos(v8, v10);
        v11 = (LevelChunk *)BlockSource::getChunk((BlockSource *)HIDWORD(v24), v8);
        if ( v11 )
        {
          for ( i = *((_DWORD *)LevelChunk::getBlockEntities(v11) + 2); i; i = *(_DWORD *)i )
          {
            v13 = *(BlockEntity **)(i + 8);
            v14 = BlockEntity::getPosition(*(BlockEntity **)(i + 8));
            Vec3::Vec3((int)&v25, (int)v14);
            if ( AABB::contains((AABB *)&v35, (const Vec3 *)&v25) == 1
              && (*(int (__fastcall **)(BlockEntity *))(*(_DWORD *)v13 + 88))(v13) == 1 )
            {
              v9 = 1;
              BlockEntityRenderDispatcher::render(
                v23,
                (BaseEntityRenderContext *)v24,
                (BlockSource *)HIDWORD(v24),
                v13,
                1,
                (const mce::MaterialPtr *)&mce::MaterialPtr::NONE,
                (const mce::TexturePtr *)&mce::TexturePtr::NONE,
                0);
            }
          }
        }
        v10 = (const BlockPos *)((char *)v10 + 12);
        v8 = (ChunkPos *)&v26;
      }
      while ( v10 != v7 );
    }
    else
      v15 = v27;
        ChunkPos::ChunkPos(v8, v15);
        v16 = (LevelChunk *)BlockSource::getChunk((BlockSource *)HIDWORD(v24), v8);
        if ( v16 )
          for ( j = *((_DWORD *)LevelChunk::getBlockEntities(v16) + 2); j; j = *(_DWORD *)j )
            v18 = *(BlockEntity **)(j + 8);
            v19 = BlockEntity::getPosition(*(BlockEntity **)(j + 8));
            Vec3::Vec3((int)&v25, (int)v19);
            if ( AABB::contains((AABB *)&v35, (const Vec3 *)&v25) == 1 )
                v18,
                0,
        v15 = (const BlockPos *)((char *)v15 + 12);
      while ( v15 != v22 );
  if ( ptr )
    operator delete((void *)ptr);
  return v9 & 1;
}


signed int __fastcall StructureVolumeRenderer::_updateRenderChunkConstantBuffer(int a1, int a2, int a3)
{
  int v3; // r0@1
  int v4; // r12@1
  int v5; // r12@1

  v3 = *(_DWORD *)(a2 + 32);
  v4 = *(_DWORD *)(v3 + 8);
  *(_BYTE *)(v4 + 17) = 1;
  v5 = *(_DWORD *)(v4 + 20);
  *(_DWORD *)v5 = *(_DWORD *)a3;
  *(_DWORD *)(v5 + 4) = *(_DWORD *)(a3 + 4);
  *(_DWORD *)(v5 + 8) = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(v5 + 12) = 1065353216;
  return j_j_j__ZN3mce27ConstantBufferConstantsBase4syncERNS_13RenderContextE(
           (mce::ConstantBufferConstantsBase *)v3,
           *(mce::RenderContext **)(a2 + 12));
}


signed int __fastcall StructureVolumeRenderer::_getIncludeEntities(StructureVolumeRenderer *this, const UIPropertyBag *a2)
{
  Json::Value *v2; // r4@1
  Json::Value *v3; // r4@3
  signed int result; // r0@4

  v2 = (const UIPropertyBag *)((char *)a2 + 8);
  if ( Json::Value::isNull((const UIPropertyBag *)((char *)a2 + 8))
    || Json::Value::isObject(v2) != 1
    || (v3 = (Json::Value *)Json::Value::operator[]((int)v2, "#include_entities"), Json::Value::isBool(v3) != 1) )
  {
    result = 0;
  }
  else
    result = Json::Value::asBool(v3, 0);
  return result;
}


int __fastcall StructureVolumeRenderer::_getRenderChunk(StructureVolumeRenderer *this, const BlockPos *a2)
{
  int v2; // r8@1
  int v3; // r11@1
  unsigned int v4; // r9@1
  unsigned int v5; // r5@1
  int v6; // r0@1
  int v7; // r10@2
  int v8; // r6@2
  int v9; // r1@4
  bool v10; // zf@4
  int v11; // r4@9
  RenderChunk **v12; // r4@11
  RenderChunk *v13; // r5@11
  RenderChunk *v14; // r0@11
  RenderChunk *v15; // r0@12
  int v16; // r0@13
  unsigned int v17; // r10@14
  int v18; // r0@14
  int v19; // r5@15
  int v20; // r7@15
  int v21; // r1@17
  bool v22; // zf@17
  int v23; // r4@22
  bool v24; // zf@25
  bool v26; // zf@29
  StructureVolumeRenderer *v27; // [sp+4h] [bp-44h]@1
  unsigned __int64 *v28; // [sp+8h] [bp-40h]@1
  const BlockPos *v29; // [sp+Ch] [bp-3Ch]@1
  int v30; // [sp+10h] [bp-38h]@1
  int v31; // [sp+14h] [bp-34h]@1
  __int64 v32; // [sp+18h] [bp-30h]@13

  v29 = a2;
  v27 = this;
  v2 = *(_QWORD *)a2 >> 32;
  v3 = *(_QWORD *)a2;
  v31 = *((_DWORD *)a2 + 2);
  v28 = (unsigned __int64 *)((char *)this + 76);
  v4 = *((_DWORD *)this + 20);
  v30 = *((_DWORD *)this + 19);
  v5 = 8976890 * v3 + 981131 * v2 + v31;
  v6 = *(_DWORD *)(*((_DWORD *)this + 19) + 4 * (v5 % v4));
  if ( !v6 )
    goto LABEL_11;
  v7 = *(_DWORD *)v6;
  v8 = *(_DWORD *)(*(_DWORD *)v6 + 20);
  while ( 1 )
  {
    if ( v8 == v5 )
    {
      v9 = *(_DWORD *)(v7 + 4);
      v10 = v3 == v9;
      if ( v3 == v9 )
        v10 = v2 == *(_DWORD *)(v7 + 8);
      if ( v10 && v31 == *(_DWORD *)(v7 + 12) )
        break;
    }
    v11 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 )
      v8 = *(_DWORD *)(v11 + 20);
      v6 = v7;
      v7 = *(_DWORD *)v7;
      if ( *(_DWORD *)(v11 + 20) % v4 == v5 % v4 )
        continue;
  }
  v26 = v6 == 0;
  if ( v6 )
    v26 = *(_DWORD *)v6 == 0;
  if ( v26 )
LABEL_11:
    v12 = (RenderChunk **)std::__detail::_Map_base<BlockPos,std::pair<BlockPos const,std::unique_ptr<RenderChunk,std::default_delete<RenderChunk>>>,std::allocator<std::pair<BlockPos const,std::unique_ptr<RenderChunk,std::default_delete<RenderChunk>>>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                            v28,
                            (int)v29);
    v13 = (RenderChunk *)operator new(0x348u);
    RenderChunk::RenderChunk((int)v13, v29);
    v14 = *v12;
    *v12 = v13;
    if ( v14 )
      v15 = RenderChunk::~RenderChunk(v14);
      operator delete((void *)v15);
    v16 = *(_DWORD *)std::__detail::_Map_base<BlockPos,std::pair<BlockPos const,std::unique_ptr<RenderChunk,std::default_delete<RenderChunk>>>,std::allocator<std::pair<BlockPos const,std::unique_ptr<RenderChunk,std::default_delete<RenderChunk>>>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                       v28,
                       (int)v29);
    v32 = *((_QWORD *)v27 + 13);
    RenderChunk::setDirty(v16, &v32, 1);
    v2 = *(_QWORD *)v29 >> 32;
    v3 = *(_QWORD *)v29;
    v4 = *((_DWORD *)v27 + 20);
    v31 = *((_DWORD *)v29 + 2);
    v30 = *((_DWORD *)v27 + 19);
  v17 = 8976890 * v3 + 981131 * v2 + v31;
  v18 = *(_DWORD *)(v30 + 4 * (v17 % v4));
  if ( !v18 )
    goto LABEL_24;
  v19 = *(_DWORD *)v18;
  v20 = *(_DWORD *)(*(_DWORD *)v18 + 20);
    if ( v20 == v17 )
      v21 = *(_DWORD *)(v19 + 4);
      v22 = v3 == v21;
      if ( v3 == v21 )
        v22 = v2 == *(_DWORD *)(v19 + 8);
      if ( v22 && v31 == *(_DWORD *)(v19 + 12) )
    v23 = *(_DWORD *)v19;
    if ( *(_DWORD *)v19 )
      v20 = *(_DWORD *)(v23 + 20);
      v18 = v19;
      v19 = *(_DWORD *)v19;
      if ( *(_DWORD *)(v23 + 20) % v4 == v17 % v4 )
  v24 = v18 == 0;
  if ( v18 )
    v18 = *(_DWORD *)v18;
    v24 = v18 == 0;
  if ( v24 )
LABEL_24:
    sub_119EFAC("_Map_base::at");
  return *(_DWORD *)(v18 + 16);
}


int __fastcall StructureVolumeRenderer::_getAndResetFloatValue(int a1, int a2, const char **a3)
{
  int v3; // r4@1
  Json::Value *v4; // r7@1
  const char **v5; // r5@1
  const char *v6; // r6@1
  signed int v7; // r0@1
  Json::Value *v12; // r6@3
  const char *v14; // r2@5
  int v15; // r1@5
  int result; // r0@5
  int v17; // [sp+4h] [bp-24h]@5

  v3 = a2;
  v4 = (Json::Value *)(a2 + 8);
  v5 = a3;
  v6 = *a3;
  v7 = Json::Value::isNull((Json::Value *)(a2 + 8));
  __asm { VLDR            S16, =0.0 }
  if ( !v7 && Json::Value::isObject(v4) == 1 )
  {
    v12 = (Json::Value *)Json::Value::operator[]((int)v4, v6);
    if ( Json::Value::isNumeric(v12) == 1 )
    {
      _R0 = Json::Value::asFloat(v12, 0.0);
      __asm { VMOV            S16, R0 }
    }
  }
  v14 = *v5;
  v15 = *((_DWORD *)*v5 - 3);
  v17 = 0;
  UIPropertyBag::set<float>(v3, v15, v14, (int)&v17);
  __asm { VMOV            R0, S16 }
  return result;
}


int __fastcall StructureVolumeRenderer::_getStructureScale(StructureVolumeRenderer *this, const UIControl *a2, const AABB *a3)
{
  UIControl *v3; // r4@1
  int result; // r0@3
  float v10; // [sp+4h] [bp-14h]@1

  v3 = a2;
  AABB::getBounds((AABB *)&v10, (int)a3);
  _R0 = UIControl::getSize(v3);
  __asm
  {
    VLDR            S0, [SP,#0x18+var_14]
    VLDR            S2, [SP,#0x18+var_10]
    VMUL.F32        S0, S0, S0
    VLDR            S4, [SP,#0x18+var_C]
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VLDR            S2, [R0]
    VADD.F32        S0, S0, S4
    VLDR            S4, [R0,#4]
    VCMPE.F32       S2, S4
    VMRS            APSR_nzcv, FPSCR
    VSQRT.F32       S0, S0
  }
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S4, S2 }
    VLDR            S2, =0.95
    VMUL.F32        S2, S4, S2
    VDIV.F32        S0, S2, S0
    VMOV            R0, S0
  return result;
}


int __fastcall StructureVolumeRenderer::_renderAxisHelpers(int a1, int a2, UIControl *a3)
{
  int v3; // r5@1
  int v4; // r8@1
  int v16; // r6@1
  int v17; // r0@1
  int v18; // r6@1
  int v19; // r0@1
  Tessellator *v20; // r5@1
  void *v21; // r0@1
  void *v22; // r0@2
  void *v23; // r0@3
  unsigned int *v25; // r2@5
  signed int v26; // r1@7
  unsigned int *v27; // r2@9
  signed int v28; // r1@11
  unsigned int *v29; // r2@13
  signed int v30; // r1@15
  int v31; // [sp+8h] [bp-D0h]@3
  char v32; // [sp+Ch] [bp-CCh]@3
  int v33; // [sp+1Ch] [bp-BCh]@2
  char v34; // [sp+20h] [bp-B8h]@2
  int v35; // [sp+30h] [bp-A8h]@1
  char v36; // [sp+34h] [bp-A4h]@1
  char v37; // [sp+40h] [bp-98h]@1
  int v38; // [sp+48h] [bp-90h]@1
  signed int v39; // [sp+4Ch] [bp-8Ch]@1
  int v40; // [sp+50h] [bp-88h]@1
  int v41; // [sp+54h] [bp-84h]@1
  int v42; // [sp+58h] [bp-80h]@1
  int v43; // [sp+5Ch] [bp-7Ch]@1
  int v44; // [sp+60h] [bp-78h]@1
  int v45; // [sp+64h] [bp-74h]@1
  int v46; // [sp+68h] [bp-70h]@1
  int v47; // [sp+6Ch] [bp-6Ch]@1
  int v48; // [sp+70h] [bp-68h]@1
  int v49; // [sp+74h] [bp-64h]@1
  int v50; // [sp+78h] [bp-60h]@1
  int v51; // [sp+7Ch] [bp-5Ch]@1
  int v52; // [sp+80h] [bp-58h]@1
  int v53; // [sp+84h] [bp-54h]@1
  int v54; // [sp+88h] [bp-50h]@1
  int v55; // [sp+8Ch] [bp-4Ch]@1
  int v56; // [sp+90h] [bp-48h]@1
  int v57; // [sp+94h] [bp-44h]@1

  v3 = a1;
  v4 = a2;
  _R0 = UIControl::getSize(a3);
  __asm
  {
    VLDR            S22, [R0]
    VLDR            S24, [R0,#4]
  }
  _R1 = &Vec3::ONE;
    VLDR            S16, [R1]
    VLDR            S18, [R1,#4]
    VLDR            S20, [R1,#8]
  MatrixStack::push((MatrixStack *)&v37, *(_DWORD *)(v4 + 16) + 16);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v37);
    VMOV.F32        S0, #0.5
    VLDR            S6, [R0,#8]
    VLDR            S8, [R0,#0xC]
    VLDR            S10, [R0,#0x10]
    VLDR            S12, [R0,#0x14]
    VLDR            S14, [R0,#0x18]
    VLDR            S1, [R0,#0x1C]
    VLDMIA          R0, {S3-S4}
    VMUL.F32        S2, S24, S0
    VMUL.F32        S0, S22, S0
    VMUL.F32        S12, S12, S2
    VMUL.F32        S4, S4, S0
    VMUL.F32        S3, S3, S0
    VMUL.F32        S6, S6, S0
    VMUL.F32        S14, S14, S2
    VMUL.F32        S10, S10, S2
    VMUL.F32        S0, S8, S0
    VMUL.F32        S2, S1, S2
    VADD.F32        S4, S12, S4
    VLDR            S12, [R0,#0x38]
    VADD.F32        S6, S14, S6
    VLDR            S14, [R0,#0x3C]
    VADD.F32        S8, S10, S3
    VLDR            S10, [R0,#0x34]
    VADD.F32        S0, S2, S0
    VLDR            S2, [R0,#0x30]
    VADD.F32        S4, S4, S10
    VADD.F32        S6, S6, S12
    VADD.F32        S2, S8, S2
    VADD.F32        S0, S0, S14
    VSTR            S2, [R0,#0x30]
    VSTR            S4, [R0,#0x34]
    VSTR            S6, [R0,#0x38]
    VSTR            S0, [R0,#0x3C]
    VMOV.F32        S0, #15.0
    VLDR            S2, [R0]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R0]
    VLDR            S2, [R0,#4]
    VSTR            S2, [R0,#4]
    VLDR            S2, [R0,#8]
    VSTR            S2, [R0,#8]
    VLDR            S2, [R0,#0xC]
    VSTR            S2, [R0,#0xC]
    VLDR            S2, [R0,#0x10]
    VSTR            S2, [R0,#0x10]
    VLDR            S2, [R0,#0x14]
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
    VLDR            S0, =-1.1
    VLDR            S8, [R0,#8]
    VMUL.F32        S2, S20, S0
    VLDR            S10, [R0,#0xC]
    VMUL.F32        S4, S18, S0
    VLDR            S12, [R0,#0x10]
    VMUL.F32        S0, S16, S0
    VLDR            S14, [R0,#0x14]
    VLDR            S1, [R0,#0x18]
    VLDR            S3, [R0,#0x1C]
    VLDMIA          R0, {S5-S6}
    VLDR            S7, [R0,#0x20]
    VMUL.F32        S14, S14, S4
    VMUL.F32        S5, S5, S0
    VMUL.F32        S12, S12, S4
    VMUL.F32        S10, S10, S0
    VLDR            S8, [R0,#0x24]
    VMUL.F32        S1, S1, S4
    VMUL.F32        S4, S3, S4
    VMUL.F32        S3, S7, S2
    VLDR            S7, [R0,#0x28]
    VLDR            S14, [R0,#0x2C]
    VADD.F32        S12, S12, S5
    VMUL.F32        S8, S8, S2
    VMUL.F32        S5, S7, S2
    VADD.F32        S0, S1, S0
    VMUL.F32        S2, S14, S2
    VADD.F32        S10, S12, S3
    VADD.F32        S6, S6, S8
    VLDR            S8, [R0,#0x34]
    VADD.F32        S0, S0, S5
    VADD.F32        S2, S4, S2
    VLDR            S4, [R0,#0x30]
    VADD.F32        S4, S10, S4
    VLDR            S10, [R0,#0x3C]
    VADD.F32        S0, S0, S12
    VADD.F32        S2, S2, S10
    VSTR            S4, [R0,#0x30]
    VSTR            S6, [R0,#0x34]
    VSTR            S0, [R0,#0x38]
    VSTR            S2, [R0,#0x3C]
  v16 = MatrixStack::MatrixStackRef::operator->((int)&v37);
  v17 = *(_DWORD *)(v3 + 28);
  v38 = 1065353216;
  v39 = 0;
  v40 = 0;
  v57 = v17;
  glm::rotate<float>((int)&v41, v16, (int)&v57, (int)&v38);
  *(_DWORD *)v16 = v41;
  *(_DWORD *)(v16 + 4) = v42;
  *(_DWORD *)(v16 + 8) = v43;
  *(_DWORD *)(v16 + 12) = v44;
  *(_DWORD *)(v16 + 16) = v45;
  *(_DWORD *)(v16 + 20) = v46;
  *(_DWORD *)(v16 + 24) = v47;
  *(_DWORD *)(v16 + 28) = v48;
  *(_DWORD *)(v16 + 32) = v49;
  *(_DWORD *)(v16 + 36) = v50;
  *(_DWORD *)(v16 + 40) = v51;
  *(_DWORD *)(v16 + 44) = v52;
  *(_DWORD *)(v16 + 48) = v53;
  *(_DWORD *)(v16 + 52) = v54;
  *(_DWORD *)(v16 + 56) = v55;
  *(_DWORD *)(v16 + 60) = v56;
  v18 = MatrixStack::MatrixStackRef::operator->((int)&v37);
  v19 = *(_DWORD *)(v3 + 24);
  v38 = 0;
  v39 = 1065353216;
  v57 = v19;
  glm::rotate<float>((int)&v41, v18, (int)&v57, (int)&v38);
  *(_DWORD *)v18 = v41;
  *(_DWORD *)(v18 + 4) = v42;
  *(_DWORD *)(v18 + 8) = v43;
  *(_DWORD *)(v18 + 12) = v44;
  *(_DWORD *)(v18 + 16) = v45;
  *(_DWORD *)(v18 + 20) = v46;
  *(_DWORD *)(v18 + 24) = v47;
  *(_DWORD *)(v18 + 28) = v48;
  *(_DWORD *)(v18 + 32) = v49;
  *(_DWORD *)(v18 + 36) = v50;
  *(_DWORD *)(v18 + 40) = v51;
  *(_DWORD *)(v18 + 44) = v52;
  *(_DWORD *)(v18 + 48) = v53;
  *(_DWORD *)(v18 + 52) = v54;
  *(_DWORD *)(v18 + 56) = v55;
  *(_DWORD *)(v18 + 60) = v56;
  v20 = *(Tessellator **)(v4 + 40);
  Tessellator::begin(*(_DWORD *)(v4 + 40), 5, 2, 0);
  Tessellator::color(v20, (const Color *)&Color::GREEN);
  Tessellator::vertex(v20, (const Vec3 *)&Vec3::ZERO);
  Tessellator::vertex(v20, (const Vec3 *)&Vec3::UNIT_Y);
  sub_119C884((void **)&v35, "debug");
  mce::RenderMaterialGroup::getMaterial(
    (mce::MaterialPtr *)&v36,
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v35);
  Tessellator::draw((char *)v20, v4, (int)&v36);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v36);
  v21 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v35 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
    }
    else
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  Tessellator::begin((int)v20, 5, 2, 0);
  Tessellator::color(v20, (const Color *)&Color::RED);
  Tessellator::vertex(v20, (const Vec3 *)Vec3::UNIT_X);
  sub_119C884((void **)&v33, "debug");
    (mce::MaterialPtr *)&v34,
    &v33);
  Tessellator::draw((char *)v20, v4, (int)&v34);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v34);
  v22 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v33 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
  Tessellator::color(v20, (const Color *)&Color::BLUE);
  Tessellator::vertex(v20, (const Vec3 *)&Vec3::UNIT_Z);
  sub_119C884((void **)&v31, "debug");
    (mce::MaterialPtr *)&v32,
    &v31);
  Tessellator::draw((char *)v20, v4, (int)&v32);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v32);
  v23 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v31 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v23);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v37);
}


int __fastcall StructureVolumeRenderer::onAppResumed(int result)
{
  *(_BYTE *)(result + 20) = 1;
  return result;
}


int __fastcall StructureVolumeRenderer::_getScreenTranslation(StructureVolumeRenderer *this, const UIControl *a2, UIControl *a3)
{
  UIControl *v3; // r4@1
  int result; // r0@1

  v3 = a3;
  _R6 = UIControl::getPosition(a3);
  _R0 = UIControl::getSize(v3);
  __asm
  {
    VMOV.F32        S0, #0.5
    VLDR            S2, [R0]
    VLDR            S4, [R6]
    VMUL.F32        S2, S2, S0
    VADD.F32        S2, S2, S4
    VSTR            S2, [R5]
    VLDR            S2, [R0,#4]
    VMUL.F32        S0, S2, S0
    VLDR            S2, [R6,#4]
    VADD.F32        S0, S0, S2
    VSTR            S0, [R5,#4]
  }
  result = UIControl::getLayer(v3);
    VMOV            S0, R0
    VLDR            S2, =-500.0
    VCVT.F32.S32    S0, S0
    VSTR            S0, [R5,#8]
  return result;
}


int __fastcall StructureVolumeRenderer::_renderBlocks(StructureVolumeRenderer *this, BaseEntityRenderContext *a2, BlockSource *a3, const AABB *a4)
{
  const AABB *v4; // r4@1
  StructureVolumeRenderer *v5; // r6@1
  BlockSource *v6; // r5@1
  const AABB *v8; // r1@1
  char v13; // r4@3
  void *v14; // r1@4
  int v15; // r8@5
  RenderChunk *v16; // r10@6
  RenderChunkBuilder *v17; // r0@8
  RenderChunkBuilder *v18; // r0@9
  RenderChunkBuilder *v19; // r1@10
  RenderChunkBuilder *v20; // r0@10
  RenderChunkBuilder *v21; // r0@11
  RenderChunkBuilder *v22; // r0@12
  __int64 v23; // r0@16
  BlockSource *v24; // r11@18
  char *v25; // r4@18
  void *v26; // r5@18
  signed int v27; // r1@18
  unsigned int v28; // r2@18
  unsigned int v29; // r1@20
  unsigned int v30; // r7@20
  char *v31; // r9@27
  int v32; // r9@29
  BlockSource *v34; // r4@32
  __int64 v35; // kr00_8@32
  int v36; // r5@32
  int v37; // r0@32
  int v38; // r4@32
  int v39; // r0@32
  int v40; // r1@32
  int v41; // r1@32
  signed int v42; // r0@32
  int v43; // r0@33
  int v44; // r3@33
  int v45; // r0@35
  int v46; // r3@35
  int v47; // r0@37
  int v48; // r3@37
  int v49; // r0@39
  int v50; // r3@39
  int v51; // r0@41
  int v52; // r3@41
  int v53; // r0@43
  int v54; // r3@43
  int v55; // r0@45
  int v56; // r3@45
  int v57; // r0@47
  int v58; // r3@47
  int v59; // r0@49
  int v60; // r3@49
  StructureVolumeRenderer *v61; // r2@52
  StructureVolumeRenderer *v62; // r0@52
  __int64 v64; // [sp+0h] [bp-168h]@0
  void *ptr; // [sp+10h] [bp-158h]@5
  int v66; // [sp+14h] [bp-154h]@5
  StructureVolumeRenderer *v67; // [sp+18h] [bp-150h]@5
  void **v68; // [sp+48h] [bp-120h]@5
  BaseEntityRenderContext *v69; // [sp+4Ch] [bp-11Ch]@1
  void *v70; // [sp+50h] [bp-118h]@4
  StructureVolumeRenderer *v71; // [sp+58h] [bp-110h]@49
  void *v72; // [sp+5Ch] [bp-10Ch]@49
  __int16 v73; // [sp+60h] [bp-108h]@49
  StructureVolumeRenderer *v74; // [sp+64h] [bp-104h]@47
  void *v75; // [sp+68h] [bp-100h]@47
  __int16 v76; // [sp+6Ch] [bp-FCh]@47
  StructureVolumeRenderer *v77; // [sp+70h] [bp-F8h]@45
  void *v78; // [sp+74h] [bp-F4h]@45
  __int16 v79; // [sp+78h] [bp-F0h]@45
  StructureVolumeRenderer *v80; // [sp+7Ch] [bp-ECh]@43
  void *v81; // [sp+80h] [bp-E8h]@43
  __int16 v82; // [sp+84h] [bp-E4h]@43
  StructureVolumeRenderer *v83; // [sp+88h] [bp-E0h]@41
  void *v84; // [sp+8Ch] [bp-DCh]@41
  __int16 v85; // [sp+90h] [bp-D8h]@41
  StructureVolumeRenderer *v86; // [sp+94h] [bp-D4h]@39
  void *v87; // [sp+98h] [bp-D0h]@39
  __int16 v88; // [sp+9Ch] [bp-CCh]@39
  StructureVolumeRenderer *v89; // [sp+A0h] [bp-C8h]@37
  void *v90; // [sp+A4h] [bp-C4h]@37
  __int16 v91; // [sp+A8h] [bp-C0h]@37
  StructureVolumeRenderer *v92; // [sp+ACh] [bp-BCh]@35
  void *v93; // [sp+B0h] [bp-B8h]@35
  __int16 v94; // [sp+B4h] [bp-B4h]@35
  StructureVolumeRenderer *v95; // [sp+B8h] [bp-B0h]@33
  void *v96; // [sp+BCh] [bp-ACh]@33
  __int16 v97; // [sp+C0h] [bp-A8h]@33
  int v98; // [sp+C4h] [bp-A4h]@32
  int v99; // [sp+C8h] [bp-A0h]@32
  int v100; // [sp+CCh] [bp-9Ch]@32
  char v101; // [sp+D0h] [bp-98h]@32
  int v102; // [sp+D4h] [bp-94h]@32
  int v103; // [sp+D8h] [bp-90h]@32
  int v104; // [sp+DCh] [bp-8Ch]@32
  int v105; // [sp+E0h] [bp-88h]@32
  int v106; // [sp+E4h] [bp-84h]@32
  RenderChunkBuilder *v107; // [sp+E8h] [bp-80h]@10
  RenderChunkBuilder *v108; // [sp+ECh] [bp-7Ch]@8
  __int64 v109; // [sp+F0h] [bp-78h]@7
  char v110; // [sp+FCh] [bp-6Ch]@6
  void *v111; // [sp+12Ch] [bp-3Ch]@2
  void *v112; // [sp+130h] [bp-38h]@4

  v4 = a4;
  v5 = this;
  v6 = a3;
  v69 = a2;
  _R0 = AABB::getSize(a4);
  __asm
  {
    VMOV.F32        S0, #1.0
    VMOV            S2, R0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    v13 = 0;
  else
    StructureVolumeRenderer::_generateChunkStartPositions((StructureVolumeRenderer *)&v111, v8, (int)v4);
    v14 = v111;
    v70 = v112;
    if ( v111 == v112 )
    {
      v61 = (StructureVolumeRenderer *)((char *)v5 + 64);
      v62 = (StructureVolumeRenderer *)((char *)v5 + 60);
      v13 = 0;
    }
    else
      v67 = (StructureVolumeRenderer *)((char *)v5 + 64);
      v68 = (void **)((char *)v5 + 60);
      v15 = (int)v111;
      v66 = (int)v4;
      ptr = v111;
      do
      {
        v16 = (RenderChunk *)StructureVolumeRenderer::_getRenderChunk(v5, (const BlockPos *)v15);
        RenderChunk::getDataBounds((RenderChunk *)&v110, (int)v16);
        if ( BlockSource::hasChunksAt(v6, (int)&v110) )
        {
          v109 = *((_QWORD *)v5 + 13);
          if ( RenderChunk::isDirty((int)v16, &v109, 0, 0) == 1 )
          {
            v17 = (RenderChunkBuilder *)*((_DWORD *)v5 + 18);
            *((_DWORD *)v5 + 18) = 0;
            v108 = v17;
            RenderChunk::startRebuild((int)v16, (int *)&v108, (int)&Vec3::ZERO);
            if ( v108 )
            {
              v18 = RenderChunkBuilder::~RenderChunkBuilder(v108);
              operator delete((void *)v18);
            }
            v108 = 0;
            RenderChunk::rebuild(v16, 0, 0);
            RenderChunk::endRebuild((RenderChunk *)&v107, (int)v16);
            v19 = v107;
            v107 = 0;
            v20 = (RenderChunkBuilder *)*((_DWORD *)v5 + 18);
            *((_DWORD *)v5 + 18) = v19;
            if ( v20 )
              v21 = RenderChunkBuilder::~RenderChunkBuilder(v20);
              operator delete((void *)v21);
              if ( v107 )
              {
                v22 = RenderChunkBuilder::~RenderChunkBuilder(v107);
                operator delete((void *)v22);
              }
          }
          if ( RenderChunk::isReady(v16) == 1 && !RenderChunk::isEmpty(v16) )
            v23 = *((_QWORD *)v5 + 8);
            if ( (_DWORD)v23 == HIDWORD(v23) )
              v24 = v6;
              v25 = 0;
              v26 = *v68;
              v27 = v23 - (_DWORD)*v68;
              v28 = v27 >> 2;
              if ( !(v27 >> 2) )
                v28 = 1;
              v29 = v28 + (v27 >> 2);
              v30 = v29;
              if ( 0 != v29 >> 30 )
                v30 = 0x3FFFFFFF;
              if ( v29 < v28 )
              if ( v30 )
                if ( v30 >= 0x40000000 )
                  sub_119C874();
                v25 = (char *)operator new(4 * v30);
                v26 = *v68;
                LODWORD(v23) = *(_DWORD *)v67;
              v31 = &v25[v23 - (_DWORD)v26];
              *(_DWORD *)&v25[v23 - (_DWORD)v26] = v16;
              if ( 0 != ((signed int)v23 - (signed int)v26) >> 2 )
                _aeabi_memmove4(v25, v26);
              v32 = (int)(v31 + 4);
              if ( v26 )
                operator delete(v26);
              v6 = v24;
              *((_DWORD *)v5 + 15) = v25;
              *((_DWORD *)v5 + 16) = v32;
              *((_DWORD *)v5 + 17) = &v25[4 * v30];
            else
              *(_DWORD *)v23 = v16;
              *(_DWORD *)v67 += 4;
            _R11 = getTimeS();
            BlockPos::BlockPos((int)&v101, v66);
            v34 = v6;
            v35 = *(_QWORD *)v15;
            v36 = *(_DWORD *)(v15 + 8);
            v104 = *(_QWORD *)v15 - *(_DWORD *)&v101;
            v105 = HIDWORD(v35) - v102;
            v37 = v36 - v103;
            v6 = v34;
            v106 = v37;
            v38 = BaseEntityRenderContext::getScreenContext(v69);
            Vec3::Vec3((int)&v98, (int)&v104);
            v39 = *(_DWORD *)(v38 + 32);
            v40 = *(_DWORD *)(v39 + 8);
            *(_BYTE *)(v40 + 17) = 1;
            v41 = *(_DWORD *)(v40 + 20);
            *(_DWORD *)v41 = v98;
            *(_DWORD *)(v41 + 4) = v99;
            *(_DWORD *)(v41 + 8) = v100;
            *(_DWORD *)(v41 + 12) = 1065353216;
            mce::ConstantBufferConstantsBase::sync(
              (mce::ConstantBufferConstantsBase *)v39,
              *(mce::RenderContext **)(v38 + 12));
            v42 = RenderChunk::hasLayer(v16, (const TerrainLayer *)&TerrainLayer::OpaqueSeasons);
            __asm { VMOV            D8, R11, R9 }
            if ( v42 == 1 )
              v43 = BaseEntityRenderContext::getScreenContext(v69);
              v95 = (StructureVolumeRenderer *)((char *)v5 + 60);
              v96 = &TerrainLayer::OpaqueSeasons;
              v97 = 256;
              __asm { VSTR            D8, [SP,#0x168+var_168] }
              RenderChunk::render(COERCE_DOUBLE(__PAIR__(v43, (unsigned int)v16)), (int)&v95, v44, v64, 0, 0);
            if ( RenderChunk::hasLayer(v16, (const TerrainLayer *)&TerrainLayer::Opaque) == 1 )
              v45 = BaseEntityRenderContext::getScreenContext(v69);
              v92 = (StructureVolumeRenderer *)((char *)v5 + 60);
              v93 = &TerrainLayer::Opaque;
              v94 = 256;
              RenderChunk::render(COERCE_DOUBLE(__PAIR__(v45, (unsigned int)v16)), (int)&v92, v46, v64, 0, 0);
            if ( RenderChunk::hasLayer(v16, (const TerrainLayer *)&TerrainLayer::DoubleSide) == 1 )
              v47 = BaseEntityRenderContext::getScreenContext(v69);
              v89 = (StructureVolumeRenderer *)((char *)v5 + 60);
              v90 = &TerrainLayer::DoubleSide;
              v91 = 256;
              RenderChunk::render(COERCE_DOUBLE(__PAIR__(v47, (unsigned int)v16)), (int)&v89, v48, v64, 0, 0);
            if ( RenderChunk::hasLayer(v16, (const TerrainLayer *)&TerrainLayer::Alpha) == 1 )
              v49 = BaseEntityRenderContext::getScreenContext(v69);
              v86 = (StructureVolumeRenderer *)((char *)v5 + 60);
              v87 = &TerrainLayer::Alpha;
              v88 = 256;
              RenderChunk::render(COERCE_DOUBLE(__PAIR__(v49, (unsigned int)v16)), (int)&v86, v50, v64, 0, 0);
            if ( RenderChunk::hasLayer(v16, (const TerrainLayer *)&TerrainLayer::AlphaSingleSide) == 1 )
              v51 = BaseEntityRenderContext::getScreenContext(v69);
              v83 = (StructureVolumeRenderer *)((char *)v5 + 60);
              v84 = &TerrainLayer::AlphaSingleSide;
              v85 = 256;
              RenderChunk::render(COERCE_DOUBLE(__PAIR__(v51, (unsigned int)v16)), (int)&v83, v52, v64, 0, 0);
            if ( RenderChunk::hasLayer(v16, (const TerrainLayer *)&TerrainLayer::AlphaSeasons) == 1 )
              v53 = BaseEntityRenderContext::getScreenContext(v69);
              v80 = (StructureVolumeRenderer *)((char *)v5 + 60);
              v81 = &TerrainLayer::AlphaSeasons;
              v82 = 256;
              RenderChunk::render(COERCE_DOUBLE(__PAIR__(v53, (unsigned int)v16)), (int)&v80, v54, v64, 0, 0);
            if ( RenderChunk::hasLayer(v16, (const TerrainLayer *)&TerrainLayer::Water) == 1 )
              v55 = BaseEntityRenderContext::getScreenContext(v69);
              v77 = (StructureVolumeRenderer *)((char *)v5 + 60);
              v78 = &TerrainLayer::Water;
              v79 = 256;
              RenderChunk::render(COERCE_DOUBLE(__PAIR__(v55, (unsigned int)v16)), (int)&v77, v56, v64, 0, 0);
            if ( RenderChunk::hasLayer(v16, (const TerrainLayer *)&TerrainLayer::Blend) == 1 )
              v57 = BaseEntityRenderContext::getScreenContext(v69);
              v74 = (StructureVolumeRenderer *)((char *)v5 + 60);
              v75 = &TerrainLayer::Blend;
              v76 = 256;
              RenderChunk::render(COERCE_DOUBLE(__PAIR__(v57, (unsigned int)v16)), (int)&v74, v58, v64, 0, 0);
            if ( RenderChunk::hasLayer(v16, (const TerrainLayer *)&TerrainLayer::EndPortal) == 1 )
              v59 = BaseEntityRenderContext::getScreenContext(v69);
              v71 = (StructureVolumeRenderer *)((char *)v5 + 60);
              v72 = &TerrainLayer::EndPortal;
              v73 = 256;
              RenderChunk::render(COERCE_DOUBLE(__PAIR__(v59, (unsigned int)v16)), (int)&v71, v60, v64, 0, 0);
            v13 = 1;
        }
        v15 += 12;
      }
      while ( v70 != (void *)v15 );
      v14 = ptr;
    *(_DWORD *)v61 = *(_DWORD *)v62;
    if ( v14 )
      operator delete(v14);
  return v13 & 1;
}


signed int __fastcall StructureVolumeRenderer::_initializeGlobalVariables(int a1, int a2)
{
  int v2; // r0@1
  int v3; // r2@1
  int v4; // r2@1

  v2 = *(_DWORD *)(a2 + 32);
  v3 = *(_DWORD *)(v2 + 8);
  *(_BYTE *)(v3 + 17) = 1;
  v4 = *(_DWORD *)(v3 + 20);
  *(_DWORD *)v4 = 0;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 12) = 1065353216;
  return j_j_j__ZN3mce27ConstantBufferConstantsBase4syncERNS_13RenderContextE(
           (mce::ConstantBufferConstantsBase *)v2,
           *(mce::RenderContext **)(a2 + 12));
}


void __fastcall StructureVolumeRenderer::_getStructureTranslation(StructureVolumeRenderer *this, const AABB *a2, int a3)
{
  _R4 = this;
  AABB::getBounds(this, a3);
  __asm
  {
    VMOV.F32        S0, #-0.5
    VLDR            S2, [R4]
    VLDR            S4, [R4,#4]
    VLDR            S6, [R4,#8]
    VMUL.F32        S2, S2, S0
    VMUL.F32        S4, S4, S0
    VMUL.F32        S0, S6, S0
    VSTR            S2, [R4]
    VSTR            S4, [R4,#4]
    VSTR            S0, [R4,#8]
  }
}


int __fastcall StructureVolumeRenderer::onSourceDestroyed(int result, BlockSource *a2)
{
  *(_DWORD *)(result + 112) = 0;
  return result;
}


MinecraftUICustomRenderer *__fastcall StructureVolumeRenderer::clone(StructureVolumeRenderer *this)
{
  StructureVolumeRenderer *v1; // r4@1
  MinecraftUICustomRenderer *v2; // r5@1
  MinecraftUICustomRenderer *result; // r0@1
  MinecraftUICustomRenderer *v4; // [sp+4h] [bp-14h]@1

  v1 = this;
  v2 = (MinecraftUICustomRenderer *)operator new(0x78u);
  StructureVolumeRenderer::StructureVolumeRenderer(v2);
  v4 = v2;
  std::__shared_ptr<UICustomRenderer,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<StructureVolumeRenderer,std::default_delete<std::default_delete>>(
    (int)v1,
    (int *)&v4);
  result = v4;
  if ( v4 )
    result = (MinecraftUICustomRenderer *)(*(int (**)(void))(*(_DWORD *)v4 + 4))();
  return result;
}


void __fastcall StructureVolumeRenderer::_getStructureArea(StructureVolumeRenderer *this, const UIPropertyBag *a2, int a3)
{
  Json::Value *v3; // r6@1
  StructureVolumeRenderer *v4; // r8@1
  Json::Value *v5; // r5@3
  int v7; // r7@4
  Json::Value *v8; // r6@8
  int v9; // r4@9
  float *v15; // r0@15
  float *v16; // r2@15
  float *v17; // r4@15
  float *v18; // r7@15
  float *v19; // r3@15
  float *v20; // r1@15
  int v21; // r3@19
  int v22; // r2@19
  int v23; // r1@25
  int v24; // r0@25
  float v25; // [sp+0h] [bp-88h]@18
  float v26; // [sp+4h] [bp-84h]@16
  float v27; // [sp+8h] [bp-80h]@20
  float v28; // [sp+Ch] [bp-7Ch]@15
  float v29; // [sp+10h] [bp-78h]@15
  float v30; // [sp+14h] [bp-74h]@15
  int v31; // [sp+18h] [bp-70h]@27
  int v32; // [sp+1Ch] [bp-6Ch]@27
  int v33; // [sp+20h] [bp-68h]@27
  int v34; // [sp+24h] [bp-64h]@27
  int v35; // [sp+28h] [bp-60h]@27
  int v36; // [sp+2Ch] [bp-5Ch]@27
  char v37; // [sp+30h] [bp-58h]@27
  void *v38; // [sp+34h] [bp-54h]@9
  int v39; // [sp+38h] [bp-50h]@9
  int v40; // [sp+3Ch] [bp-4Ch]@10
  void *v41; // [sp+40h] [bp-48h]@4
  int v42; // [sp+44h] [bp-44h]@4
  int v43; // [sp+48h] [bp-40h]@5
  char v44; // [sp+4Ch] [bp-3Ch]@4
  char v45; // [sp+50h] [bp-38h]@9
  int v46; // [sp+54h] [bp-34h]@27
  int v47; // [sp+58h] [bp-30h]@27
  int v48; // [sp+5Ch] [bp-2Ch]@27
  int v49; // [sp+60h] [bp-28h]@21
  int v50; // [sp+64h] [bp-24h]@21
  int v51; // [sp+68h] [bp-20h]@21

  v3 = (Json::Value *)(a3 + 8);
  v4 = this;
  if ( Json::Value::isNull((Json::Value *)(a3 + 8))
    || Json::Value::isObject(v3) != 1
    || (v5 = (Json::Value *)Json::Value::operator[]((int)v3, "#bottom_left_block"), Json::Value::isArray(v5) != 1) )
  {
    v7 = 0;
    _R5 = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
  }
  else
    jsonValConversion<std::vector<int,std::allocator<int>>>::as((int)&v41, (int)&v44, v5);
    v7 = v42;
    _R5 = v41;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  if ( Json::Value::isNull(v3)
    || (v8 = (Json::Value *)Json::Value::operator[]((int)v3, "#top_right_block"), Json::Value::isArray(v8) != 1) )
    v9 = 0;
    _R6 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    jsonValConversion<std::vector<int,std::allocator<int>>>::as((int)&v38, (int)&v45, v8);
    v9 = v39;
    _R6 = v38;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  AABB::AABB(v4);
  _ZF = v7 - (_DWORD)_R5 == 12;
  if ( v7 - (_DWORD)_R5 == 12 )
    _ZF = v9 - (_DWORD)_R6 == 12;
  if ( _ZF )
    __asm { VLDR            S0, [R5] }
    v15 = &v29;
    __asm
    {
      VLDR            S2, [R5,#4]
      VLDR            S4, [R5,#8]
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
    }
    v16 = &v29;
    __asm { VCVT.F32.S32    S4, S4 }
    v17 = &v28;
    v18 = &v30;
    v19 = &v28;
    v20 = &v30;
      VSTR            S0, [SP,#0x88+var_74]
      VSTR            S2, [SP,#0x88+var_78]
      VSTR            S4, [SP,#0x88+var_7C]
      VLDR            S6, [R6]
      VLDR            S8, [R6,#4]
      VLDR            S10, [R6,#8]
      VCVT.F32.S32    S6, S6
      VCVT.F32.S32    S8, S8
      VCVT.F32.S32    S10, S10
      VSTR            S6, [SP,#0x88+var_80]
      VCMPE.F32       S8, S2
      VSTR            S8, [SP,#0x88+var_84]
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S10, S4
      VSTR            S10, [SP,#0x88+var_88]
    if ( _NF ^ _VF )
      v16 = &v26;
      VCMPE.F32       S6, S0
      v19 = &v25;
      VCMPE.F32       S2, S8
    v21 = *(_DWORD *)v19;
    v22 = *(_DWORD *)v16;
      v20 = &v27;
      VCMPE.F32       S4, S10
    v49 = *(_DWORD *)v20;
    v50 = v22;
    v51 = v21;
      v15 = &v26;
      VCMPE.F32       S0, S6
      v17 = &v25;
    __asm { VMRS            APSR_nzcv, FPSCR }
    v23 = *(_DWORD *)v17;
    v24 = *(_DWORD *)v15;
      v18 = &v27;
    v46 = *(_DWORD *)v18;
    v47 = v24;
    v48 = v23;
    AABB::AABB((int)&v31, (int)&v49, (int)&v46);
    *(_DWORD *)v4 = v31;
    *((_DWORD *)v4 + 1) = v32;
    *((_DWORD *)v4 + 2) = v33;
    *((_DWORD *)v4 + 3) = v34;
    *((_DWORD *)v4 + 4) = v35;
    *((_DWORD *)v4 + 5) = v36;
    *((_BYTE *)v4 + 24) = v37;
  if ( _R6 )
    operator delete(_R6);
  if ( _R5 )
    operator delete(_R5);
}


Entity *__fastcall StructureVolumeRenderer::render(StructureVolumeRenderer *this, MinecraftUIRenderContext *a2, __int64 a3, int a4, RectangleArea *a5)
{
  StructureVolumeRenderer *v5; // r4@1
  MinecraftUIRenderContext *v6; // r6@1
  __int64 v7; // kr08_8@1
  Entity *result; // r0@1
  BlockSource *v9; // r8@2
  int v10; // r0@5
  const UIPropertyBag *v11; // r0@5
  int v12; // r0@7
  int v13; // r2@7
  int v14; // r1@7
  int v15; // r1@7
  int v16; // r0@7
  int v17; // r0@7
  BaseEntityRenderContext *v18; // r0@7
  int v19; // r0@7
  int v30; // r0@7
  int v31; // r6@7
  int v32; // r0@7
  int v33; // r6@7
  int v34; // r0@7
  int v39; // r6@9
  int v40; // r0@9
  int v41; // r0@9
  int v42; // r5@9
  Json::Value *v43; // r6@9
  Json::Value *v44; // r6@11
  int v45; // r0@13
  char v46; // r1@13
  Json::Value *v47; // r6@16
  Json::Value *v48; // r6@18
  int v49; // r0@20
  char v50; // r1@20
  Json::Value *v51; // r6@23
  Json::Value *v52; // r6@25
  int v53; // r0@27
  char v54; // r1@27
  Json::Value *v55; // r6@30
  Json::Value *v56; // r6@32
  signed int v57; // r2@34
  int v58; // r0@35
  char v59; // r1@35
  int v60; // r0@37
  float v61; // [sp+4h] [bp-174h]@9
  char v64; // [sp+10h] [bp-168h]@7
  char v65; // [sp+18h] [bp-160h]@7
  char v66; // [sp+7Ch] [bp-FCh]@7
  int v67; // [sp+B8h] [bp-C0h]@5
  int v68; // [sp+BCh] [bp-BCh]@6
  int v69; // [sp+C0h] [bp-B8h]@6
  int v70; // [sp+C4h] [bp-B4h]@6
  int v71; // [sp+C8h] [bp-B0h]@6
  int v72; // [sp+CCh] [bp-ACh]@6
  char v73; // [sp+D0h] [bp-A8h]@6
  int v74; // [sp+D4h] [bp-A4h]@7
  int v75; // [sp+D8h] [bp-A0h]@7
  int v76; // [sp+DCh] [bp-9Ch]@7
  int v77; // [sp+E0h] [bp-98h]@7
  int v78; // [sp+E4h] [bp-94h]@7
  int v79; // [sp+E8h] [bp-90h]@7
  int v80; // [sp+ECh] [bp-8Ch]@7
  int v81; // [sp+F0h] [bp-88h]@7
  int v82; // [sp+F4h] [bp-84h]@7
  int v83; // [sp+F8h] [bp-80h]@7
  int v84; // [sp+FCh] [bp-7Ch]@7
  int v85; // [sp+100h] [bp-78h]@7
  int v86; // [sp+104h] [bp-74h]@7
  int v87; // [sp+108h] [bp-70h]@7
  int v88; // [sp+10Ch] [bp-6Ch]@7
  int v89; // [sp+110h] [bp-68h]@7
  int v90; // [sp+114h] [bp-64h]@7
  int v91; // [sp+118h] [bp-60h]@7
  int v92; // [sp+11Ch] [bp-5Ch]@7
  int v93; // [sp+120h] [bp-58h]@7
  float v94; // [sp+124h] [bp-54h]@7
  float v95; // [sp+128h] [bp-50h]@7
  int v96; // [sp+12Ch] [bp-4Ch]@7

  v5 = this;
  v6 = a2;
  v7 = a3;
  ++*((_QWORD *)this + 13);
  result = (Entity *)ClientInstance::getLocalPlayer((ClientInstance *)a3);
  if ( result )
  {
    v9 = (BlockSource *)Entity::getRegion(result);
    *((_DWORD *)v5 + 28) = v9;
    if ( *((_BYTE *)v5 + 20) )
      BlockSource::addListener(v9, (StructureVolumeRenderer *)((char *)v5 + 8));
    result = (Entity *)ClientInstance::getLevelRenderer((ClientInstance *)v7);
    if ( result )
    {
      v10 = *(_DWORD *)(MinecraftUIRenderContext::getScreenContext(v6) + 12);
      mce::RenderContext::clearDepthStencilBuffer();
      v11 = (const UIPropertyBag *)UIControl::getPropertyBag((UIControl *)HIDWORD(v7));
      StructureVolumeRenderer::_getStructureArea((StructureVolumeRenderer *)&v67, v11, (int)v11);
      if ( !AABB::operator==((int)&v67, (int)v5 + 32) )
      {
        StructureVolumeRenderer::_onAreaChanged(v5, (const AABB *)&v67);
        *((_DWORD *)v5 + 8) = v67;
        *((_DWORD *)v5 + 9) = v68;
        *((_DWORD *)v5 + 10) = v69;
        *((_DWORD *)v5 + 11) = v70;
        *((_DWORD *)v5 + 12) = v71;
        *((_DWORD *)v5 + 13) = v72;
        *((_BYTE *)v5 + 56) = v73;
      }
      v12 = MinecraftUIRenderContext::getScreenContext(v6);
      v13 = *(_DWORD *)(v12 + 32);
      v14 = *(_DWORD *)(v13 + 8);
      *(_BYTE *)(v14 + 17) = 1;
      v15 = *(_DWORD *)(v14 + 20);
      *(_DWORD *)v15 = 0;
      *(_DWORD *)(v15 + 4) = 0;
      *(_DWORD *)(v15 + 8) = 0;
      *(_DWORD *)(v15 + 12) = 1065353216;
      mce::ConstantBufferConstantsBase::sync(
        (mce::ConstantBufferConstantsBase *)v13,
        *(mce::RenderContext **)(v12 + 12));
      v16 = MinecraftUIRenderContext::getScreenContext(v6);
      ScreenContextHelper::makeScreenContextAlphaOverride((UIScreenContext *)&v66, v16, 0.0);
      v17 = ClientInstance::getMinecraftGame((ClientInstance *)v7);
      v18 = (BaseEntityRenderContext *)BaseEntityRenderContext::BaseEntityRenderContext(
                                         (int)&v65,
                                         (int)&v66,
                                         (ClientInstance *)v7,
                                         v17);
      BaseEntityRenderContext::setIgnoreLighting(v18, 1);
      BaseEntityRenderContext::setCameraTargetPosition((BaseEntityRenderContext *)&v65, (const Vec3 *)&v67);
      BaseEntityRenderContext::setWorldClipRegion((BaseEntityRenderContext *)&v65, (const AABB *)&v67);
      v19 = BaseEntityRenderContext::getWorldMatrix((BaseEntityRenderContext *)&v65);
      MatrixStack::pushIdentity((MatrixStack *)&v64, v19);
      _R6 = UIControl::getPosition((UIControl *)HIDWORD(v7));
      _R0 = UIControl::getSize((UIControl *)HIDWORD(v7));
      __asm
        VLDR            S16, [R0]
        VLDR            S20, [R0,#4]
        VLDR            S18, [R6]
        VLDR            S22, [R6,#4]
      _R0 = UIControl::getLayer((UIControl *)HIDWORD(v7));
        VMOV            S0, R0
        VCVT.F32.S32    S24, S0
      _R0 = MatrixStack::MatrixStackRef::operator->((int)&v64);
        VMOV.F32        S0, #0.5
        VLDR            S4, =-500.0
        VLDR            S8, [R0,#8]
        VLDR            S10, [R0,#0xC]
        VADD.F32        S4, S24, S4
        VLDR            S12, [R0,#0x10]
        VLDR            S14, [R0,#0x14]
        VLDR            S1, [R0,#0x18]
        VLDR            S3, [R0,#0x1C]
        VMUL.F32        S2, S20, S0
        VLDMIA          R0, {S5-S6}
        VMUL.F32        S0, S16, S0
        VLDR            S7, [R0,#0x20]
        VADD.F32        S2, S2, S22
        VADD.F32        S0, S0, S18
        VMUL.F32        S14, S14, S2
        VMUL.F32        S6, S6, S0
        VMUL.F32        S5, S5, S0
        VMUL.F32        S12, S12, S2
        VMUL.F32        S10, S10, S0
        VMUL.F32        S0, S8, S0
        VLDR            S8, [R0,#0x24]
        VMUL.F32        S1, S1, S2
        VMUL.F32        S2, S3, S2
        VMUL.F32        S3, S7, S4
        VLDR            S7, [R0,#0x28]
        VADD.F32        S6, S14, S6
        VLDR            S14, [R0,#0x2C]
        VADD.F32        S12, S12, S5
        VMUL.F32        S8, S8, S4
        VMUL.F32        S5, S7, S4
        VADD.F32        S0, S1, S0
        VADD.F32        S2, S2, S10
        VMUL.F32        S4, S14, S4
        VADD.F32        S10, S12, S3
        VLDR            S12, [R0,#0x38]
        VADD.F32        S6, S6, S8
        VLDR            S8, [R0,#0x34]
        VADD.F32        S0, S0, S5
        VADD.F32        S2, S2, S4
        VLDR            S4, [R0,#0x30]
        VADD.F32        S4, S10, S4
        VLDR            S10, [R0,#0x3C]
        VADD.F32        S0, S0, S12
        VSTR            S4, [R0,#0x30]
        VSTR            S6, [R0,#0x34]
        VSTR            S0, [R0,#0x38]
        VSTR            S2, [R0,#0x3C]
        VLDR            S0, [R0,#0x10]
        VNEG.F32        S0, S0
        VSTR            S0, [R0,#0x10]
        VLDR            S0, [R0,#0x14]
        VSTR            S0, [R0,#0x14]
        VLDR            S0, [R0,#0x18]
        VSTR            S0, [R0,#0x18]
        VLDR            S0, [R0,#0x1C]
        VSTR            S0, [R0,#0x1C]
      StructureVolumeRenderer::_updateCursorRotation(v5, (UIControl *)HIDWORD(v7));
      v30 = BaseEntityRenderContext::getScreenContext((BaseEntityRenderContext *)&v65);
      StructureVolumeRenderer::_renderAxisHelpers((int)v5, v30, (UIControl *)HIDWORD(v7));
      v31 = MatrixStack::MatrixStackRef::operator->((int)&v64);
      v32 = *((_DWORD *)v5 + 7);
      v74 = 1065353216;
      v75 = 0;
      v76 = 0;
      v77 = v32;
      glm::rotate<float>((int)&v78, v31, (int)&v77, (int)&v74);
      *(_DWORD *)v31 = v78;
      *(_DWORD *)(v31 + 4) = v79;
      *(_DWORD *)(v31 + 8) = v80;
      *(_DWORD *)(v31 + 12) = v81;
      *(_DWORD *)(v31 + 16) = v82;
      *(_DWORD *)(v31 + 20) = v83;
      *(_DWORD *)(v31 + 24) = v84;
      *(_DWORD *)(v31 + 28) = v85;
      *(_DWORD *)(v31 + 32) = v86;
      *(_DWORD *)(v31 + 36) = v87;
      *(_DWORD *)(v31 + 40) = v88;
      *(_DWORD *)(v31 + 44) = v89;
      *(_DWORD *)(v31 + 48) = v90;
      *(_DWORD *)(v31 + 52) = v91;
      *(_DWORD *)(v31 + 56) = v92;
      *(_DWORD *)(v31 + 60) = v93;
      v33 = MatrixStack::MatrixStackRef::operator->((int)&v64);
      v34 = *((_DWORD *)v5 + 6);
      v94 = 0.0;
      v95 = 1.0;
      v74 = v34;
      v96 = 0;
      glm::rotate<float>((int)&v78, v33, (int)&v74, (int)&v94);
      *(_DWORD *)v33 = v78;
      *(_DWORD *)(v33 + 4) = v79;
      *(_DWORD *)(v33 + 8) = v80;
      *(_DWORD *)(v33 + 12) = v81;
      *(_DWORD *)(v33 + 16) = v82;
      *(_DWORD *)(v33 + 20) = v83;
      *(_DWORD *)(v33 + 24) = v84;
      *(_DWORD *)(v33 + 28) = v85;
      *(_DWORD *)(v33 + 32) = v86;
      *(_DWORD *)(v33 + 36) = v87;
      *(_DWORD *)(v33 + 40) = v88;
      *(_DWORD *)(v33 + 44) = v89;
      *(_DWORD *)(v33 + 48) = v90;
      *(_DWORD *)(v33 + 52) = v91;
      *(_DWORD *)(v33 + 56) = v92;
      *(_DWORD *)(v33 + 60) = v93;
      AABB::getBounds((AABB *)&v94, (int)&v67);
        VLDR            S0, [R0]
        VLDR            S16, [R0,#4]
        VLDR            S18, [SP,#0x178+var_54]
        VCMPE.F32       S0, S16
        VLDR            S20, [SP,#0x178+var_50]
        VMRS            APSR_nzcv, FPSCR
        VLDR            S22, [SP,#0x178+var_4C]
      if ( _NF ^ _VF )
        __asm { VMOVLT.F32      S16, S0 }
        VMUL.F32        S0, S18, S18
        VMUL.F32        S2, S20, S20
        VMUL.F32        S4, S22, S22
        VADD.F32        S0, S2, S0
        VLDR            S2, =0.95
        VMUL.F32        S2, S16, S2
        VADD.F32        S0, S0, S4
        VSQRT.F32       S0, S0
        VDIV.F32        S0, S2, S0
        VLDR            S2, [R0]
        VMUL.F32        S2, S2, S0
        VSTR            S2, [R0]
        VLDR            S2, [R0,#4]
        VSTR            S2, [R0,#4]
        VLDR            S2, [R0,#8]
        VSTR            S2, [R0,#8]
        VLDR            S2, [R0,#0xC]
        VSTR            S2, [R0,#0xC]
        VLDR            S2, [R0,#0x10]
        VSTR            S2, [R0,#0x10]
        VLDR            S2, [R0,#0x14]
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
      AABB::getBounds((AABB *)&v61, (int)&v67);
        VMOV.F32        S0, #-0.5
        VLDR            S2, [SP,#0x178+var_174]
        VLDR            S4, [SP,#0x178+var_170]
        VLDR            S6, [SP,#0x178+var_16C]
        VMUL.F32        S4, S4, S0
        VMUL.F32        S0, S6, S0
        VSTR            S2, [SP,#0x178+var_174]
        VSTR            S4, [SP,#0x178+var_170]
        VSTR            S0, [SP,#0x178+var_16C]
        VLDR            S0, [SP,#0x178+var_174]
        VLDR            S2, [SP,#0x178+var_170]
        VLDR            S4, [SP,#0x178+var_16C]
      v39 = ClientInstance::getGameRenderer((ClientInstance *)v7);
      v40 = MatrixStack::MatrixStackRef::operator*((int)&v64);
      *(_DWORD *)(v39 + 584) = *(_DWORD *)v40;
      *(_DWORD *)(v39 + 588) = *(_DWORD *)(v40 + 4);
      *(_DWORD *)(v39 + 592) = *(_DWORD *)(v40 + 8);
      *(_DWORD *)(v39 + 596) = *(_DWORD *)(v40 + 12);
      *(_DWORD *)(v39 + 600) = *(_DWORD *)(v40 + 16);
      *(_DWORD *)(v39 + 604) = *(_DWORD *)(v40 + 20);
      *(_DWORD *)(v39 + 608) = *(_DWORD *)(v40 + 24);
      *(_DWORD *)(v39 + 612) = *(_DWORD *)(v40 + 28);
      *(_DWORD *)(v39 + 616) = *(_DWORD *)(v40 + 32);
      *(_DWORD *)(v39 + 620) = *(_DWORD *)(v40 + 36);
      *(_DWORD *)(v39 + 624) = *(_DWORD *)(v40 + 40);
      *(_DWORD *)(v39 + 628) = *(_DWORD *)(v40 + 44);
      *(_DWORD *)(v39 + 632) = *(_DWORD *)(v40 + 48);
      *(_DWORD *)(v39 + 636) = *(_DWORD *)(v40 + 52);
      *(_DWORD *)(v39 + 640) = *(_DWORD *)(v40 + 56);
      *(_DWORD *)(v39 + 644) = *(_DWORD *)(v40 + 60);
      v41 = BaseEntityRenderContext::getScreenContext((BaseEntityRenderContext *)&v65);
      StructureVolumeRenderer::_initializeChunkBuilder(v5, v9, *(Tessellator **)(v41 + 40), (const AABB *)&v67);
      v42 = *((_BYTE *)v5 + 21);
      *((_BYTE *)v5 + 21) = 0;
      v43 = (Json::Value *)(UIControl::getPropertyBag((UIControl *)HIDWORD(v7)) + 8);
      if ( !Json::Value::isNull(v43) && Json::Value::isObject(v43) == 1 )
        v44 = (Json::Value *)Json::Value::operator[]((int)v43, "#include_players");
        if ( Json::Value::isBool(v44) == 1 && Json::Value::asBool(v44, 0) == 1 )
        {
          v45 = StructureVolumeRenderer::_renderPlayers(
                  (StructureVolumeRenderer *)1,
                  (BaseEntityRenderContext *)&v65,
                  v9,
                  (const AABB *)&v67);
          v46 = *((_BYTE *)v5 + 21);
          if ( v45 )
            v46 |= 1u;
          *((_BYTE *)v5 + 21) = v46;
        }
      v47 = (Json::Value *)(UIControl::getPropertyBag((UIControl *)HIDWORD(v7)) + 8);
      if ( !Json::Value::isNull(v47) && Json::Value::isObject(v47) == 1 )
        v48 = (Json::Value *)Json::Value::operator[]((int)v47, "#include_entities");
        if ( Json::Value::isBool(v48) == 1 && Json::Value::asBool(v48, 0) == 1 )
          v49 = StructureVolumeRenderer::_renderEntities(
          v50 = *((_BYTE *)v5 + 21);
          if ( v49 )
            v50 |= 1u;
          *((_BYTE *)v5 + 21) = v50;
      v51 = (Json::Value *)(UIControl::getPropertyBag((UIControl *)HIDWORD(v7)) + 8);
      if ( Json::Value::isNull(v51)
        || Json::Value::isObject(v51) != 1
        || (v52 = (Json::Value *)Json::Value::operator[]((int)v51, "#remove_blocks"), Json::Value::isBool(v52) != 1)
        || !Json::Value::asBool(v52, 0) )
        v53 = StructureVolumeRenderer::_renderBlocks(v5, (BaseEntityRenderContext *)&v65, v9, (const AABB *)&v67);
        v54 = *((_BYTE *)v5 + 21);
        if ( v53 )
          v54 |= 1u;
        *((_BYTE *)v5 + 21) = v54;
      v55 = (Json::Value *)(UIControl::getPropertyBag((UIControl *)HIDWORD(v7)) + 8);
      if ( Json::Value::isNull(v55)
        || Json::Value::isObject(v55) != 1
        || (v56 = (Json::Value *)Json::Value::operator[]((int)v55, "#remove_blocks"), Json::Value::isBool(v56) != 1)
        || Json::Value::asBool(v56, 0) != 1 )
        v58 = StructureVolumeRenderer::_renderBlockEntities(
                v5,
                (BaseEntityRenderContext *)&v65,
                v9,
                (const AABB *)&v67,
                0);
        v59 = *((_BYTE *)v5 + 21);
        if ( v58 )
          v59 |= 1u;
        *((_BYTE *)v5 + 21) = v59;
        v60 = StructureVolumeRenderer::_renderBlockEntities(
                1);
        v57 = *((_BYTE *)v5 + 21);
        if ( v60 )
          v57 = 1;
        *((_BYTE *)v5 + 21) = v57;
      else
      if ( v42 != v57 )
        ClientInstance::onGameEventNotification(v7);
      *((_BYTE *)v5 + 20) = 0;
      MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v64);
      result = (Entity *)BaseEntityRenderContext::~BaseEntityRenderContext((BaseEntityRenderContext *)&v65);
    }
  }
  return result;
}


signed int __fastcall StructureVolumeRenderer::_getIncludePlayers(StructureVolumeRenderer *this, const UIPropertyBag *a2)
{
  Json::Value *v2; // r4@1
  Json::Value *v3; // r4@3
  signed int result; // r0@4

  v2 = (const UIPropertyBag *)((char *)a2 + 8);
  if ( Json::Value::isNull((const UIPropertyBag *)((char *)a2 + 8))
    || Json::Value::isObject(v2) != 1
    || (v3 = (Json::Value *)Json::Value::operator[]((int)v2, "#include_players"), Json::Value::isBool(v3) != 1) )
  {
    result = 0;
  }
  else
    result = Json::Value::asBool(v3, 0);
  return result;
}


unsigned __int64 __fastcall StructureVolumeRenderer::onBlockChanged(unsigned int a1, unsigned int a2, int a3)
{
  __int64 v3; // kr08_8@1
  __int64 v4; // kr10_8@1
  unsigned int v5; // r7@1
  int v6; // r4@1
  int v7; // r8@1
  int v8; // r11@2
  _DWORD *v9; // r0@2
  int v10; // r5@2
  int v11; // r10@2
  int v12; // r6@2
  int v13; // r9@7
  unsigned __int64 result; // r0@9
  bool v15; // zf@10
  int v16; // r0@16
  int v17; // r6@17
  bool v18; // zf@20
  int v19; // r0@23
  unsigned __int64 v20; // [sp+0h] [bp-48h]@1
  unsigned int v21; // [sp+8h] [bp-40h]@1
  unsigned int v22; // [sp+Ch] [bp-3Ch]@2
  int v23; // [sp+10h] [bp-38h]@2
  __int64 v24; // [sp+18h] [bp-30h]@23

  v20 = __PAIR__(a1, a2);
  v3 = *(_QWORD *)a3;
  v4 = *(_QWORD *)(a1 + 76);
  v21 = (*(_DWORD *)(a3 + 8) + (*(_DWORD *)(a3 + 8) >> 31 >> 28)) & 0xFFFFFFF0;
  v5 = 143630240 * ((signed int)v3 / 16) + 15698096 * (SHIDWORD(v3) / 16) + v21;
  v6 = v5 % HIDWORD(v4);
  v7 = *(_DWORD *)(v4 + 4 * (v5 % HIDWORD(v4)));
  if ( v7 )
  {
    v8 = *(_DWORD *)v7;
    v22 = (HIDWORD(v3) + ((unsigned int)(SHIDWORD(v3) >> 31) >> 28)) & 0xFFFFFFF0;
    v23 = (v3 + ((unsigned int)((signed int)v3 >> 31) >> 28)) & 0xFFFFFFF0;
    v9 = *(_DWORD **)(v4 + 4 * v6);
    v10 = *(_DWORD *)(*(_DWORD *)v7 + 20);
    v11 = *(_DWORD *)v7;
    v12 = *(_DWORD *)(*(_DWORD *)v7 + 20);
    while ( v12 != v5 || v23 != *(_DWORD *)(v11 + 4) || v22 != *(_DWORD *)(v11 + 8) || v21 != *(_DWORD *)(v11 + 12) )
    {
      v13 = *(_DWORD *)v11;
      if ( *(_DWORD *)v11 )
      {
        v12 = *(_DWORD *)(v13 + 20);
        v9 = (_DWORD *)v11;
        v11 = *(_DWORD *)v11;
        if ( *(_DWORD *)(v13 + 20) % HIDWORD(v4) == v6 )
          continue;
      }
      goto LABEL_9;
    }
    v15 = v9 == 0;
    if ( v9 )
      v15 = *v9 == 0;
    if ( !v15 )
      while ( 1 )
        if ( v10 == v5 && v23 == *(_DWORD *)(v8 + 4) && v22 == *(_DWORD *)(v8 + 8) )
        {
          v16 = *(_DWORD *)(v8 + 12);
          if ( v21 == v16 )
            break;
        }
        v17 = *(_DWORD *)v8;
        if ( *(_DWORD *)v8 )
          v10 = *(_DWORD *)(v17 + 20);
          v7 = v8;
          v8 = *(_DWORD *)v8;
          if ( *(_DWORD *)(v17 + 20) % HIDWORD(v4) == v6 )
            continue;
        goto LABEL_24;
      v18 = v7 == 0;
      if ( v7 )
        v16 = *(_DWORD *)v7;
        v18 = *(_DWORD *)v7 == 0;
      if ( v18 )
LABEL_24:
        sub_119EFAC("_Map_base::at");
      v19 = *(_DWORD *)(v16 + 16);
      v24 = *(_QWORD *)(HIDWORD(v20) + 104);
      RenderChunk::setDirty(v19, &v24, 0);
  }
LABEL_9:
  result = v20;
  *(_DWORD *)(HIDWORD(v20) + 112) = v20;
  return result;
}


char *__fastcall StructureVolumeRenderer::_generateChunkStartPositions(StructureVolumeRenderer *this, const AABB *a2, int a3)
{
  StructureVolumeRenderer *v3; // r4@1
  int v10; // r7@1
  float v12; // r1@1
  int v13; // r6@1
  float v15; // r1@1
  char *result; // r0@1
  int v20; // r10@3
  __int64 v23; // r0@9
  int v24; // [sp+0h] [bp-50h]@1
  int v25; // [sp+4h] [bp-4Ch]@1
  int v26; // [sp+8h] [bp-48h]@1
  int v27; // [sp+Ch] [bp-44h]@1

  v3 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  _R5 = a3;
  *((_DWORD *)this + 2) = 0;
  __asm
  {
    VLDR            S16, =0.0625
    VLDR            S0, [R5]
    VLDR            S20, [R5,#4]
    VMUL.F32        S0, S0, S16
    VLDR            S18, [R5,#8]
    VMOV            R0, S0
  }
  v10 = mce::Math::floor(_R0, *(float *)&a2);
    VMUL.F32        S0, S20, S16
  v13 = mce::Math::floor(_R0, v12);
    VMUL.F32        S0, S18, S16
  result = (char *)mce::Math::floor(_R0, v15);
  _R7 = 16 * v10;
  _R2 = 16 * v13;
  __asm { VMOV            S0, R7 }
  v25 = _R7;
  _R9 = 16 * (_DWORD)result;
  __asm { VCVT.F32.S32    S0, S0 }
  v26 = 16 * v13;
  v27 = 16 * (_DWORD)result;
  __asm { VLDR            S2, [R5,#0xC] }
  v24 = 16 * v13;
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    __asm { VMOV            S0, R9 }
    v20 = 16 * (_DWORD)result + 16;
    __asm
    {
      VCVT.F32.S32    S16, S0
      VMOV            S0, R2
      VCVT.F32.S32    S18, S0
      VLDR            S0, [R5,#0x10]
    }
    do
      __asm
      {
        VCMPE.F32       S18, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        __asm { VLDR            S2, [R5,#0x14] }
        _R6 = _R2;
        do
        {
          __asm { VCMPE.F32       S16, S2 }
          _R8 = v20;
          __asm { VMRS            APSR_nzcv, FPSCR }
          if ( _NF ^ _VF )
          {
            do
            {
              v23 = *(_QWORD *)((char *)v3 + 4);
              if ( (_DWORD)v23 == HIDWORD(v23) )
              {
                result = std::vector<BlockPos,std::allocator<BlockPos>>::_M_emplace_back_aux<BlockPos const&>(
                           (unsigned __int64 *)v3,
                           (int)&v25);
                __asm { VLDR            S2, [R5,#0x14] }
              }
              else
                *(_DWORD *)v23 = _R7;
                *(_DWORD *)(v23 + 4) = _R6;
                *(_DWORD *)(v23 + 8) = _R8 - 16;
                result = (char *)(v23 + 12);
                *((_DWORD *)v3 + 1) = result;
              __asm
                VMOV            S0, R8
                VCVT.F32.S32    S0, S0
              v27 = _R8;
              _R8 += 16;
                VCMPE.F32       S0, S2
                VMRS            APSR_nzcv, FPSCR
            }
            while ( _NF ^ _VF );
            __asm { VLDR            S0, [R5,#0x10] }
          }
          _R6 += 16;
          __asm
            VMOV            S4, R6
            VCVT.F32.S32    S4, S4
          v26 = _R6;
          v27 = _R9;
            VCMPE.F32       S4, S0
            VMRS            APSR_nzcv, FPSCR
        }
        while ( _NF ^ _VF );
        _R2 = v24;
        __asm { VLDR            S2, [R5,#0xC] }
      _R7 += 16;
        VMOV            S4, R7
        VCVT.F32.S32    S4, S4
      v25 = _R7;
      v26 = _R2;
        VCMPE.F32       S4, S2
    while ( _NF ^ _VF );
  return result;
}


signed int __fastcall StructureVolumeRenderer::_getIgnoreBlocks(StructureVolumeRenderer *this, const UIPropertyBag *a2)
{
  Json::Value *v2; // r4@1
  Json::Value *v3; // r4@3
  signed int result; // r0@4

  v2 = (const UIPropertyBag *)((char *)a2 + 8);
  if ( Json::Value::isNull((const UIPropertyBag *)((char *)a2 + 8))
    || Json::Value::isObject(v2) != 1
    || (v3 = (Json::Value *)Json::Value::operator[]((int)v2, "#remove_blocks"), Json::Value::isBool(v3) != 1) )
  {
    result = 0;
  }
  else
    result = Json::Value::asBool(v3, 0);
  return result;
}


int __fastcall StructureVolumeRenderer::_renderPlayers(StructureVolumeRenderer *this, BaseEntityRenderContext *a2, BlockSource *a3, const AABB *a4)
{
  BaseEntityRenderContext *v4; // r4@1
  const AABB *v5; // r8@1
  BlockSource *v6; // r7@1
  char v7; // r6@1
  __int64 v8; // r8@1
  int v9; // r2@5
  char v10; // r10@5
  int v11; // r7@5
  int v12; // r6@6
  float v18; // r3@6
  EntityRenderDispatcher *v20; // [sp+4h] [bp-54h]@1
  char v21; // [sp+8h] [bp-50h]@6
  float v22; // [sp+10h] [bp-48h]@6
  float v25; // [sp+1Ch] [bp-3Ch]@6
  char v26; // [sp+28h] [bp-30h]@6

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v20 = (EntityRenderDispatcher *)BaseEntityRenderContext::getEntityRenderDispatcher(a2);
  v7 = 0;
  v8 = *(_QWORD *)BlockSource::fetchEntities(v6, 0, v5);
  if ( (_DWORD)v8 != HIDWORD(v8) )
  {
    v7 = 0;
    do
    {
      if ( *(_DWORD *)v8 && Entity::hasCategory(*(_DWORD *)v8, 1) == 1 )
      {
        v9 = *(_DWORD *)v8;
        v10 = *(_BYTE *)(*(_DWORD *)v8 + 228);
        *(_BYTE *)(v9 + 228) = 1;
        EntityRenderDispatcher::render(v20, v4, (Entity *)v9);
        v11 = EntityRenderDispatcher::getRenderer(v20, *(Entity **)v8);
        if ( v11 )
        {
          v12 = *(_DWORD *)v8;
          Entity::getInterpolatedPosition((Entity *)&v22, *(float *)v8, *((_DWORD *)v4 + 1));
          _R0 = BaseEntityRenderContext::getCameraTargetPosition(v4);
          __asm
          {
            VLDR            S0, [R0]
            VLDR            S6, [SP,#0x58+var_48]
            VLDR            S2, [R0,#4]
            VLDR            S4, [R0,#8]
            VSUB.F32        S0, S6, S0
            VLDR            S8, [SP,#0x58+var_44]
            VLDR            S10, [SP,#0x58+var_40]
            VSUB.F32        S2, S8, S2
            VSUB.F32        S4, S10, S4
            VSTR            S0, [SP,#0x58+var_3C]
            VSTR            S2, [SP,#0x58+var_38]
            VSTR            S4, [SP,#0x58+var_34]
          }
          Entity::getInterpolatedRotation((Entity *)&v21, *(float *)v8, *((float *)v4 + 1), v18);
          EntityRenderData::EntityRenderData((int)&v26, v12, (int)&v25, (int)&v21);
          (*(void (__fastcall **)(int, BaseEntityRenderContext *, char *))(*(_DWORD *)v11 + 20))(v11, v4, &v26);
        }
        v7 = 1;
        *(_BYTE *)(*(_DWORD *)v8 + 228) = v10;
      }
      LODWORD(v8) = v8 + 4;
    }
    while ( HIDWORD(v8) != (_DWORD)v8 );
  }
  return v7 & 1;
}
