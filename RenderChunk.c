

int __fastcall RenderChunk::getPosition(int result, int a2)
{
  *(_DWORD *)result = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 12);
  return result;
}


unsigned int *__fastcall RenderChunk::_changeBuildState(int a1, int a2, unsigned int a3)
{
  unsigned int *result; // r0@1
  unsigned int v4; // r3@2

  result = (unsigned int *)(a1 + 208);
  __dmb();
  while ( 1 )
  {
    v4 = __ldrex(result);
    if ( v4 != a2 )
      break;
    if ( !__strex(a3, result) )
      goto LABEL_6;
  }
  __clrex();
LABEL_6:
  return result;
}


unsigned int __fastcall RenderChunk::sortAndCullFaces(RenderChunk *this)
{
  RenderChunk *v1; // r4@1
  int v2; // r5@1
  char v4; // [sp+4h] [bp-1Ch]@1

  v1 = this;
  v2 = *((_DWORD *)this + 91);
  SubChunkPos::SubChunkPos((SubChunkPos *)&v4, (RenderChunk *)((char *)this + 4));
  return RenderChunkSorter::sortAndCullFaces(v2, (int)&v4, (_QWORD *)v1 + 56, (RenderChunk *)((char *)v1 + 532));
}


signed int __fastcall RenderChunk::onCameraMoved(RenderChunk *this, const Vec3 *a2, int a3)
{
  RenderChunk *v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1
  int *v6; // r2@2
  int v7; // r1@2
  int v8; // r3@3
  signed int result; // r0@11
  int v10; // [sp+0h] [bp-28h]@1
  int v11; // [sp+Ch] [bp-1Ch]@1
  int v12; // [sp+10h] [bp-18h]@2
  int v13; // [sp+14h] [bp-14h]@3

  v3 = this;
  v4 = a3;
  BlockPos::BlockPos((int)&v10, (int)a2);
  RenderChunkSorter::signDelta((RenderChunkSorter *)&v11, (RenderChunk *)((char *)v3 + 4), (const BlockPos *)&v10);
  v5 = v11;
  if ( *((_DWORD *)v3 + 83) != v11 )
  {
    v7 = v12;
    v6 = (int *)((char *)v3 + 336);
LABEL_8:
    *((_BYTE *)v3 + 328) = 1;
    *((_DWORD *)v3 + 83) = v5;
    *v6 = v7;
    v8 = v13;
    *((_DWORD *)v3 + 85) = v13;
    goto LABEL_9;
  }
  v6 = (int *)((char *)v3 + 336);
  v7 = *((_DWORD *)v3 + 84);
  if ( v7 != v12 )
    goto LABEL_8;
  v8 = *((_DWORD *)v3 + 85);
  if ( v8 != v13 || v4 == 1 )
LABEL_9:
  if ( v5 == *((_DWORD *)v3 + 86) )
    if ( v7 == *((_DWORD *)v3 + 87) )
    {
      result = 0;
      if ( v8 != *((_DWORD *)v3 + 88) )
        result = 1;
    }
    else
      result = 1;
  else
    result = 1;
  *((_BYTE *)v3 + 532) = result;
  return result;
}


void *__fastcall RenderChunk::getRenderMaterial(double _R0, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8)
{
  int v8; // r5@1
  int v13; // r4@4
  int v14; // r0@4
  float v15; // r1@4
  int v16; // r2@4
  int v17; // r3@4
  float v19; // [sp+0h] [bp-28h]@4
  int v20; // [sp+4h] [bp-24h]@4
  int v21; // [sp+8h] [bp-20h]@4
  int v22; // [sp+Ch] [bp-1Ch]@4

  v8 = HIDWORD(_R0);
  if ( !*(_DWORD *)(a2 + 40) )
    goto LABEL_26;
  __asm
  {
    VLDR            D0, [SP,#0x28+arg_0]
    VLDR            D1, [R0,#0x130]
    VSUB.F64        D0, D0, D1
    VMOV.F64        D1, #2.0
    VCMPE.F64       D0, D1
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    __asm { VSUB.F64        D0, D1, D0 }
    v13 = a2 + 36;
    __asm
    {
      VMOV.F64        D1, #0.5
      VMUL.F64        D0, D0, D1
      VCVT.F32.F64    S16, D0
    }
    v14 = ShaderColor::getColor(*(ShaderColor **)(HIDWORD(_R0) + 48));
    v15 = *(float *)v14;
    v16 = *(_DWORD *)(v14 + 4);
    v17 = *(_DWORD *)(v14 + 8);
    v22 = *(_DWORD *)(v14 + 12);
    v19 = v15;
    v20 = v16;
    v21 = v17;
    __asm { VSTR            S16, [SP,#0x28+var_28] }
    ShaderColor::setColor(*(ShaderColor **)(v8 + 48), (const Color *)&v19);
  else
LABEL_26:
    if ( a5 == 1 )
      if ( a7 == 1 )
      {
        if ( TerrainLayer::Blend == *(_DWORD *)a2 )
          return &TerrainLayer::BlendFogMaterialUnderwater;
        if ( TerrainLayer::Water == *(_DWORD *)a2 )
          return &TerrainLayer::WaterFogMaterialUnderwater;
      }
      else if ( a8 == 1 && TerrainLayer::Opaque == *(_DWORD *)a2 )
        return &TerrainLayer::OpaqueFogMaterialUnderLava;
      return (void *)(a2 + 12);
    if ( a6 != 1 )
          return &TerrainLayer::BlendMaterialUnderwater;
          return &TerrainLayer::WaterMaterialUnderwater;
      return (void *)(a2 + 24);
    v13 = a2 + 48;
  return (void *)v13;
}


__int64 __fastcall RenderChunk::makeReadyAsEmpty(RenderChunk *this, int a2)
{
  RenderChunk *v2; // r4@1
  int v3; // r5@1
  int v4; // r3@1
  _DWORD *v5; // r0@1
  __int64 result; // r0@3
  int v12; // [sp+0h] [bp-18h]@1
  __int16 v13; // [sp+4h] [bp-14h]@1

  v2 = this;
  *((_BYTE *)this + 219) = 0;
  v3 = a2;
  *((_BYTE *)this + 205) = 0;
  mce::Mesh::reset((RenderChunk *)((char *)this + 104));
  *((_DWORD *)v2 + 113) = *((_DWORD *)v2 + 112);
  *((_DWORD *)v2 + 116) = *((_DWORD *)v2 + 115);
  *((_DWORD *)v2 + 119) = *((_DWORD *)v2 + 118);
  *((_DWORD *)v2 + 122) = *((_DWORD *)v2 + 121);
  *((_DWORD *)v2 + 125) = *((_DWORD *)v2 + 124);
  *((_DWORD *)v2 + 128) = *((_DWORD *)v2 + 127);
  *((_DWORD *)v2 + 131) = *((_DWORD *)v2 + 130);
  VisibilityNode::VisibilityNode((VisibilityNode *)&v12, 1);
  v4 = v12;
  v5 = &Brightness::MAX;
  *((_WORD *)v2 + 108) = v13;
  *((_DWORD *)v2 + 53) = v4;
  if ( v3 )
    v5 = &Brightness::MIN;
  _R0 = *(_BYTE *)v5;
  __asm
  {
    VMOV            S0, R0
    VCVT.F32.U32    S0, S0
    VSTR            S0, [R4,#0x128]
  }
  *((_BYTE *)v2 + 292) = v3;
  *((_BYTE *)v2 + 300) = v3 ^ 1;
  result = *(_QWORD *)&Tick::MAX;
  *((_QWORD *)v2 + 39) = *(_QWORD *)&Tick::MAX;
  *((_QWORD *)v2 + 40) = result;
  *((_BYTE *)v2 + 204) = 1;
  return result;
}


void *__fastcall RenderChunk::_chooseMaterial(double _R0, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8)
{
  int v8; // r5@1
  int v13; // r4@4
  int v14; // r0@4
  float v15; // r1@4
  int v16; // r2@4
  int v17; // r3@4
  float v19; // [sp+0h] [bp-28h]@4
  int v20; // [sp+4h] [bp-24h]@4
  int v21; // [sp+8h] [bp-20h]@4
  int v22; // [sp+Ch] [bp-1Ch]@4

  v8 = HIDWORD(_R0);
  if ( !*(_DWORD *)(a2 + 40) )
    goto LABEL_26;
  __asm
  {
    VLDR            D0, [SP,#0x28+arg_0]
    VLDR            D1, [R0,#0x130]
    VSUB.F64        D0, D0, D1
    VMOV.F64        D1, #2.0
    VCMPE.F64       D0, D1
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    __asm { VSUB.F64        D0, D1, D0 }
    v13 = a2 + 36;
    __asm
    {
      VMOV.F64        D1, #0.5
      VMUL.F64        D0, D0, D1
      VCVT.F32.F64    S16, D0
    }
    v14 = ShaderColor::getColor(*(ShaderColor **)(HIDWORD(_R0) + 48));
    v15 = *(float *)v14;
    v16 = *(_DWORD *)(v14 + 4);
    v17 = *(_DWORD *)(v14 + 8);
    v22 = *(_DWORD *)(v14 + 12);
    v19 = v15;
    v20 = v16;
    v21 = v17;
    __asm { VSTR            S16, [SP,#0x28+var_28] }
    ShaderColor::setColor(*(ShaderColor **)(v8 + 48), (const Color *)&v19);
  else
LABEL_26:
    if ( a5 == 1 )
      if ( a7 == 1 )
      {
        if ( TerrainLayer::Blend == *(_DWORD *)a2 )
          return &TerrainLayer::BlendFogMaterialUnderwater;
        if ( TerrainLayer::Water == *(_DWORD *)a2 )
          return &TerrainLayer::WaterFogMaterialUnderwater;
      }
      else if ( a8 == 1 && TerrainLayer::Opaque == *(_DWORD *)a2 )
        return &TerrainLayer::OpaqueFogMaterialUnderLava;
      return (void *)(a2 + 12);
    if ( a6 != 1 )
          return &TerrainLayer::BlendMaterialUnderwater;
          return &TerrainLayer::WaterMaterialUnderwater;
      return (void *)(a2 + 24);
    v13 = a2 + 48;
  return (void *)v13;
}


int __fastcall RenderChunk::setVisibilityChanged(int result)
{
  *(_BYTE *)(result + 219) = 1;
  return result;
}


int __fastcall RenderChunk::setBoundingBox(int result, int a2, int a3, int a4, int a5, int a6, int a7, char a8)
{
  int v8; // r7@1

  v8 = result + 76;
  *(_DWORD *)v8 = a2;
  *(_DWORD *)(v8 + 4) = a3;
  *(_DWORD *)(v8 + 8) = a4;
  *(_DWORD *)(v8 + 12) = a5;
  *(_DWORD *)(v8 + 16) = a6;
  *(_DWORD *)(v8 + 20) = a7;
  *(_BYTE *)(result + 100) = a8;
  return result;
}


int __fastcall RenderChunk::endRebuild(RenderChunk *this, int a2)
{
  int v2; // r5@1
  RenderChunk *v3; // r8@1
  int v4; // r6@1
  const char *v5; // r4@1
  int v6; // r4@4
  int v7; // r2@4
  int v8; // r0@4
  int v9; // r1@4
  int v10; // r3@4
  char v12; // r0@9
  int v13; // r1@12
  unsigned int *v14; // r0@41
  unsigned int v15; // r2@42
  int result; // r0@48
  char v21; // [sp+4h] [bp-84h]@3

  v2 = a2;
  v3 = this;
  v4 = *(_DWORD *)(a2 + 360);
  v5 = (const char *)RenderChunkBuilder::getTessellator(*(RenderChunkBuilder **)(a2 + 360));
  ChunkViewSource::clear(*(ChunkViewSource **)v4);
  if ( Tessellator::isTessellating((Tessellator *)v5) == 1 )
  {
    if ( !Tessellator::forceTessellateIntercept((Tessellator *)v5) )
    {
      Tessellator::end((Tessellator *)&v21, v5, 0, 0);
      mce::Mesh::operator=(v2 + 104, (int)&v21);
      mce::Mesh::~Mesh((mce::Mesh *)&v21);
    }
    v6 = *(_DWORD *)(v2 + 360);
    mce::Mesh::loadIndexBuffer(
      (mce::Mesh *)(v2 + 104),
      *(_DWORD *)(v6 + 384),
      (const void *)*(_QWORD *)(v6 + 200),
      (unsigned int)((*(_QWORD *)(v6 + 200) >> 32) - *(_QWORD *)(v6 + 200)) / *(_DWORD *)(v6 + 384));
    RenderChunkSorter::convertRenderLayersToTerrainLayers(v2 + 536, v2 + 648, v6 + 212);
    v7 = *(_DWORD *)(v6 + 392);
    *(_DWORD *)(v2 + 344) = v7;
    v8 = *(_DWORD *)(v6 + 396);
    *(_DWORD *)(v2 + 348) = v8;
    v9 = *(_DWORD *)(v6 + 400);
    *(_DWORD *)(v2 + 352) = v9;
    v10 = *(_DWORD *)(v2 + 332);
    _ZF = v7 == v10;
    if ( v7 == v10 )
      _ZF = v8 == *(_DWORD *)(v2 + 336);
    if ( _ZF )
      v12 = 0;
      if ( v9 != *(_DWORD *)(v2 + 340) )
        v12 = 1;
      *(_BYTE *)(v2 + 532) = v12;
    else
      *(_BYTE *)(v2 + 532) = 1;
  }
  else
    mce::Mesh::reset((mce::Mesh *)(v2 + 104));
  *(_BYTE *)(v2 + 218) = VisibilityNode::compare((VisibilityNode *)(v2 + 212), (VisibilityNode *)(v4 + 16)) ^ 1;
  v13 = *(_DWORD *)(v4 + 16);
  *(_WORD *)(v2 + 216) = *(_WORD *)(v4 + 20);
  *(_DWORD *)(v2 + 212) = v13;
  *(_DWORD *)(v2 + 296) = *(_DWORD *)(v4 + 12);
  *(_BYTE *)(v2 + 300) = *(_BYTE *)(v4 + 9);
  *(_BYTE *)(v2 + 292) = *(_BYTE *)(v4 + 10);
  _aeabi_memcpy4(v2 + 760, v4 + 108, 80);
  std::vector<RenderChunkQuadInfo,std::allocator<RenderChunkQuadInfo>>::operator=(
    v2 + 448,
    (unsigned __int64 *)(v4 + 24));
    v2 + 460,
    (unsigned __int64 *)(v4 + 36));
    v2 + 472,
    (unsigned __int64 *)(v4 + 48));
    v2 + 484,
    (unsigned __int64 *)(v4 + 60));
    v2 + 496,
    (unsigned __int64 *)(v4 + 72));
    v2 + 508,
    (unsigned __int64 *)(v4 + 84));
    v2 + 520,
    (unsigned __int64 *)(v4 + 96));
  RenderChunkSorter::convertRenderLayersToTerrainLayers(v2 + 648, v2 + 760, v2 + 760);
  *(_BYTE *)(v2 + 356) = 0;
  if ( *(_DWORD *)(v2 + 652) >= 1 && *(_DWORD *)(*(_DWORD *)TerrainLayer::sAllLayers + 4) == 1
    || *(_DWORD *)(v2 + 660) > 0 && *(_DWORD *)(*(_DWORD *)(TerrainLayer::sAllLayers + 4) + 4) == 1
    || *(_DWORD *)(v2 + 668) >= 1 && *(_DWORD *)(*(_DWORD *)(TerrainLayer::sAllLayers + 8) + 4) == 1
    || *(_DWORD *)(v2 + 676) >= 1 && *(_DWORD *)(*(_DWORD *)(TerrainLayer::sAllLayers + 12) + 4) == 1
    || *(_DWORD *)(v2 + 684) >= 1 && *(_DWORD *)(*(_DWORD *)(TerrainLayer::sAllLayers + 16) + 4) == 1
    || *(_DWORD *)(v2 + 692) >= 1 && *(_DWORD *)(*(_DWORD *)(TerrainLayer::sAllLayers + 20) + 4) == 1
    || *(_DWORD *)(v2 + 700) >= 1 && *(_DWORD *)(*(_DWORD *)(TerrainLayer::sAllLayers + 24) + 4) == 1
    || *(_DWORD *)(v2 + 708) >= 1 && *(_DWORD *)(*(_DWORD *)(TerrainLayer::sAllLayers + 28) + 4) == 1
    || *(_DWORD *)(v2 + 716) >= 1 && *(_DWORD *)(*(_DWORD *)(TerrainLayer::sAllLayers + 32) + 4) == 1
    || *(_DWORD *)(v2 + 724) >= 1 && *(_DWORD *)(*(_DWORD *)(TerrainLayer::sAllLayers + 36) + 4) == 1
    || *(_DWORD *)(v2 + 732) >= 1 && *(_DWORD *)(*(_DWORD *)(TerrainLayer::sAllLayers + 40) + 4) == 1
    || *(_DWORD *)(v2 + 740) >= 1 && *(_DWORD *)(*(_DWORD *)(TerrainLayer::sAllLayers + 44) + 4) == 1
    || *(_DWORD *)(v2 + 748) >= 1 && *(_DWORD *)(*(_DWORD *)(TerrainLayer::sAllLayers + 48) + 4) == 1
    || *(_DWORD *)(v2 + 756) >= 1 && *(_DWORD *)(*(_DWORD *)(TerrainLayer::sAllLayers + 52) + 4) == 1 )
    *(_BYTE *)(v2 + 356) = 1;
  v14 = (unsigned int *)(v2 + 208);
  __dmb();
  while ( 1 )
    v15 = __ldrex(v14);
    if ( v15 )
      break;
    if ( !__strex(2u, v14) )
      goto LABEL_46;
  __clrex();
LABEL_46:
  if ( !*(_BYTE *)(v2 + 204) )
    _R0 = getTimeS();
    __asm
      VMOV            D0, R0, R1
      VSTR            D0, [R5,#0x130]
  *(_BYTE *)(v2 + 204) = 1;
  result = *(_DWORD *)(v2 + 360);
  *(_DWORD *)(v2 + 360) = 0;
  *(_DWORD *)v3 = result;
  return result;
}


int __fastcall RenderChunk::render(double a1, int a2, int a3, __int64 a4, int a5, int a6)
{
  int v6; // r6@1
  __int64 v8; // kr08_8@1
  signed int v9; // r2@1
  signed int v10; // r3@1
  int v11; // r0@3
  int v12; // r4@5
  int v13; // r8@5
  int result; // r0@7
  int v15; // r0@8
  unsigned int v16; // r1@8
  void *v21; // r10@11
  int v22; // r0@11
  float v23; // r1@11
  int v24; // r2@11
  int v25; // r3@11
  int v26; // r6@30
  int v27; // r7@30
  __int64 v28; // r0@30
  void *v29; // r3@30
  mce::TexturePtr *v30; // r4@30
  float v31; // [sp+10h] [bp-38h]@11
  int v32; // [sp+14h] [bp-34h]@11
  int v33; // [sp+18h] [bp-30h]@11
  int v34; // [sp+1Ch] [bp-2Ch]@11

  v6 = a2;
  _KR00_8 = a1;
  v8 = *(_QWORD *)LevelRenderer::terrainRenderLayerToGeometryLayer(
                    *(LevelRenderer **)(a2 + 4),
                    (const TerrainLayer *)HIDWORD(a1));
  v9 = *(_BYTE *)(LODWORD(_KR00_8) + 532);
  v10 = 0;
  if ( HIDWORD(v8) != 1 )
    v10 = 1;
  v11 = LODWORD(_KR00_8) + 8 * v8;
  if ( *(_BYTE *)(LODWORD(_KR00_8) + 532) )
    v9 = 1;
  v12 = v11 + 536;
  v13 = v9 & v10;
  if ( v9 & v10 )
    v12 = v11 + 648;
  result = *(_DWORD *)(v12 + 4);
  if ( result >= 1 )
  {
    v15 = *(_DWORD *)(v6 + 4);
    v16 = *(_WORD *)(v6 + 8);
    if ( !*(_DWORD *)(v15 + 40) )
      goto LABEL_37;
    __asm
    {
      VLDR            D0, [SP,#0x48+arg_0]
      VLDR            D1, [R5,#0x130]
      VSUB.F64        D0, D0, D1
      VMOV.F64        D1, #2.0
      VCMPE.F64       D0, D1
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !(_NF ^ _VF) )
LABEL_37:
      if ( !(_BYTE)v16 )
      {
        if ( v16 >= 0x100 )
        {
          v21 = (void *)(v15 + 48);
          goto LABEL_30;
        }
        if ( a5 == 1 )
          if ( TerrainLayer::Blend == *(_DWORD *)v15 )
          {
            v21 = &TerrainLayer::BlendMaterialUnderwater;
            goto LABEL_30;
          }
          if ( TerrainLayer::Water == *(_DWORD *)v15 )
            v21 = &TerrainLayer::WaterMaterialUnderwater;
        v21 = (void *)(v15 + 24);
        goto LABEL_30;
      }
      if ( a5 == 1 )
        if ( TerrainLayer::Blend == *(_DWORD *)v15 )
          v21 = &TerrainLayer::BlendFogMaterialUnderwater;
        if ( TerrainLayer::Water == *(_DWORD *)v15 )
          v21 = &TerrainLayer::WaterFogMaterialUnderwater;
      else if ( a6 == 1 && TerrainLayer::Opaque == *(_DWORD *)v15 )
        v21 = &TerrainLayer::OpaqueFogMaterialUnderLava;
      v21 = (void *)(v15 + 12);
      goto LABEL_30;
    __asm { VSUB.F64        D0, D1, D0 }
    v21 = (void *)(v15 + 36);
      VMOV.F64        D1, #0.5
      VMUL.F64        D0, D0, D1
      VCVT.F32.F64    S16, D0
    v22 = ShaderColor::getColor(*(ShaderColor **)(HIDWORD(_KR00_8) + 48));
    v23 = *(float *)v22;
    v24 = *(_DWORD *)(v22 + 4);
    v25 = *(_DWORD *)(v22 + 8);
    v34 = *(_DWORD *)(v22 + 12);
    v31 = v23;
    v32 = v24;
    v33 = v25;
    __asm { VSTR            S16, [SP,#0x48+var_38] }
    ShaderColor::setColor(*(ShaderColor **)(HIDWORD(_KR00_8) + 48), (const Color *)&v31);
LABEL_30:
    v26 = *(_DWORD *)v15;
    v27 = TerrainLayer::EndPortal;
    mce::Mesh::setIndexBufferUsageMode(LODWORD(_KR00_8) + 104, v13);
    v28 = *(_QWORD *)v12;
    v29 = &RenderChunk::endPortalTexture;
    v30 = (mce::TexturePtr *)&RenderChunk::brightnessTexture;
    if ( v27 == v26 )
      v30 = (mce::TexturePtr *)&RenderChunk::endPortalColorTexture;
    if ( v27 != v26 )
      v29 = &RenderChunk::atlasTexture;
    result = mce::Mesh::render(
               (mce::TexturePtr *)LODWORD(_KR00_8),
               (mce::TexturePtr *)HIDWORD(_KR00_8),
               (int)v21,
               (int)v29,
               v30,
               (mce::TexturePtr *)&RenderChunk::foliageTexture,
               v28,
               SHIDWORD(v28));
  }
  return result;
}


signed int __fastcall RenderChunk::_endFaceSort(RenderChunk *this, RenderChunkSorter *a2)
{
  RenderChunkSorter *v2; // r5@1
  RenderChunk *v3; // r4@1
  int v4; // r2@1
  int v5; // r0@1
  int v6; // r1@1
  signed int result; // r0@3

  v2 = a2;
  v3 = this;
  mce::Mesh::loadIndexBuffer(
    (RenderChunk *)((char *)this + 104),
    *((_DWORD *)a2 + 46),
    (const void *)*(_QWORD *)a2,
    (unsigned int)((*(_QWORD *)a2 >> 32) - *(_QWORD *)a2) / *((_DWORD *)a2 + 46));
  RenderChunkSorter::convertRenderLayersToTerrainLayers((int)v3 + 536, (int)v3 + 648, (int)v2 + 12);
  v4 = *((_DWORD *)v2 + 48);
  *((_DWORD *)v3 + 86) = v4;
  v5 = *((_DWORD *)v2 + 49);
  *((_DWORD *)v3 + 87) = v5;
  v6 = *((_DWORD *)v2 + 50);
  *((_DWORD *)v3 + 88) = v6;
  if ( v4 == *((_DWORD *)v3 + 83) )
  {
    if ( v5 == *((_DWORD *)v3 + 84) )
    {
      result = 0;
      if ( v6 != *((_DWORD *)v3 + 85) )
        result = 1;
    }
    else
      result = 1;
  }
  else
    result = 1;
  *((_BYTE *)v3 + 532) = result;
  return result;
}


char *__fastcall RenderChunk::getIndexRange(RenderChunk *this, const TerrainLayer *a2)
{
  int v2; // r12@1
  char *v3; // r2@1
  char *result; // r0@1

  v2 = *((_BYTE *)this + 532);
  v3 = (char *)this + 8 * *(_QWORD *)a2;
  result = v3 + 536;
  if ( *(_QWORD *)a2 >> 32 != 1 )
    result = v3 + 648;
  if ( !v2 )
    result = v3 + 536;
  return result;
}


_BOOL4 __fastcall RenderChunk::canSeeChunkLookingFrom(RenderChunk *this, unsigned __int8 a2, unsigned __int8 a3)
{
  return ((unsigned __int8)*VisibilityNode::from((RenderChunk *)((char *)this + 212), (char)a2) & (1 << a3)) != 0;
}


int __fastcall RenderChunk::isEmpty(RenderChunk *this)
{
  int result; // r0@2

  if ( *((_BYTE *)this + 204) )
    result = mce::Mesh::isValid((RenderChunk *)((char *)this + 104)) ^ 1;
  else
    result = 0;
  return result;
}


void __fastcall RenderChunk::initTextures(RenderChunk *this, mce::TextureGroup *a2)
{
  mce::TextureGroup *v2; // r4@1
  char *v3; // r0@1
  char *v4; // r0@2
  char *v5; // r0@3
  char *v6; // r0@4
  char *v7; // r0@5
  char *v8; // r0@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  unsigned int *v11; // r2@12
  signed int v12; // r1@14
  unsigned int *v13; // r2@16
  signed int v14; // r1@18
  unsigned int *v15; // r2@20
  signed int v16; // r1@22
  unsigned int *v17; // r2@24
  signed int v18; // r1@26
  unsigned int *v19; // r2@28
  signed int v20; // r1@30
  char *v21; // [sp+8h] [bp-B8h]@5
  char *v22; // [sp+Ch] [bp-B4h]@5
  int v23; // [sp+10h] [bp-B0h]@5
  char v24; // [sp+14h] [bp-ACh]@5
  char *v25; // [sp+30h] [bp-90h]@3
  char *v26; // [sp+34h] [bp-8Ch]@3
  int v27; // [sp+38h] [bp-88h]@3
  char v28; // [sp+3Ch] [bp-84h]@3
  char v29; // [sp+54h] [bp-6Ch]@3
  char v30; // [sp+6Ch] [bp-54h]@3
  char *v31; // [sp+88h] [bp-38h]@1
  char *v32; // [sp+8Ch] [bp-34h]@1
  int v33; // [sp+90h] [bp-30h]@1
  char v34; // [sp+94h] [bp-2Ch]@1

  v2 = this;
  sub_21E94B4((void **)&v31, "atlas.terrain");
  v32 = v31;
  v31 = (char *)&unk_28898CC;
  v33 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v34, v2, (int)&v32, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)&RenderChunk::atlasTexture, (mce::TexturePtr *)&v34);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v34);
  v3 = v32 - 12;
  if ( (int *)(v32 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v32 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = v31 - 12;
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v31 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v30, v2, 1);
  mce::TexturePtr::operator=((mce::TexturePtr *)&RenderChunk::foliageTexture, (mce::TexturePtr *)&v30);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v30);
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v29, v2, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)&RenderChunk::brightnessTexture, (mce::TexturePtr *)&v29);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v29);
  sub_21E94B4((void **)&v25, "textures/entity/end_portal");
  v26 = v25;
  v25 = (char *)&unk_28898CC;
  v27 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v28, v2, (int)&v26, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)&RenderChunk::endPortalTexture, (mce::TexturePtr *)&v28);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v28);
  v5 = v26 - 12;
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v26 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = v25 - 12;
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v25 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v21, "textures/environment/end_portal_colors");
  v22 = v21;
  v21 = (char *)&unk_28898CC;
  v23 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v24, v2, (int)&v22, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)&RenderChunk::endPortalColorTexture, (mce::TexturePtr *)&v24);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v24);
  v7 = v22 - 12;
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v22 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = v21 - 12;
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v21 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
}


void __fastcall RenderChunk::updateDistanceFromPlayer(RenderChunk *this, const Vec3 *a2)
{
  RenderChunk::updateDistanceFromPlayer(this, a2);
}


int __fastcall RenderChunk::setCenter(int result, int a2)
{
  *(_DWORD *)(result + 16) = *(_DWORD *)a2;
  *(_DWORD *)(result + 20) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a2 + 8);
  return result;
}


signed int __fastcall RenderChunk::setPos(RenderChunk *this, const BlockPos *a2)
{
  RenderChunk *v2; // r4@1
  const BlockPos *v3; // r8@1
  char *v4; // r6@1
  char *v5; // r5@2
  signed int result; // r0@3
  int v7; // r3@6
  int v8; // r1@6
  int v9; // r2@6
  int v10; // r6@6
  _BYTE *v11; // r10@7
  int v12; // t1@8
  int v13; // r0@8
  signed int v14; // r1@9
  signed int v15; // r2@9
  int v16; // r0@9
  signed int v17; // r3@9
  int v18; // r2@9
  int v19; // r7@9
  char v20; // [sp+4h] [bp-64h]@8
  int v21; // [sp+10h] [bp-58h]@8
  int v22; // [sp+14h] [bp-54h]@8
  int v23; // [sp+18h] [bp-50h]@8
  char v24; // [sp+1Ch] [bp-4Ch]@6
  int v25; // [sp+28h] [bp-40h]@6
  int v26; // [sp+2Ch] [bp-3Ch]@6
  int v27; // [sp+30h] [bp-38h]@6
  int v28; // [sp+34h] [bp-34h]@6
  int v29; // [sp+38h] [bp-30h]@6
  int v30; // [sp+3Ch] [bp-2Ch]@6
  char v31; // [sp+40h] [bp-28h]@6

  v2 = this;
  v3 = a2;
  v4 = (char *)this + 4;
  if ( *(_DWORD *)a2 == *((_DWORD *)this + 1) )
  {
    v5 = (char *)this + 8;
    if ( *((_DWORD *)a2 + 1) == *((_DWORD *)this + 2) )
    {
      result = *((_DWORD *)this + 3);
      if ( *((_DWORD *)a2 + 2) == result )
        return result;
    }
  }
  else
  *((_BYTE *)v2 + 204) = 0;
  *((_BYTE *)v2 + 292) = 0;
  *((_DWORD *)v2 + 76) = 0;
  *((_DWORD *)v2 + 77) = 0;
  mce::Mesh::reset((RenderChunk *)((char *)v2 + 104));
  v7 = (int)v2 + 16;
  *((_DWORD *)v2 + 113) = *((_DWORD *)v2 + 112);
  *((_DWORD *)v2 + 116) = *((_DWORD *)v2 + 115);
  *((_DWORD *)v2 + 119) = *((_DWORD *)v2 + 118);
  *((_DWORD *)v2 + 122) = *((_DWORD *)v2 + 121);
  *((_DWORD *)v2 + 125) = *((_DWORD *)v2 + 124);
  *((_DWORD *)v2 + 128) = *((_DWORD *)v2 + 127);
  *((_DWORD *)v2 + 131) = *((_DWORD *)v2 + 130);
  *((_DWORD *)v2 + 1) = *(_DWORD *)v3;
  *(_DWORD *)v5 = *((_DWORD *)v3 + 1);
  *((_DWORD *)v2 + 3) = *((_DWORD *)v3 + 2);
  v8 = *((_DWORD *)v3 + 1) + 8;
  v9 = *((_DWORD *)v3 + 2) + 8;
  *(_DWORD *)v7 = *(_DWORD *)v3 + 8;
  *(_DWORD *)(v7 + 4) = v8;
  *(_DWORD *)(v7 + 8) = v9;
  Vec3::Vec3((int)&v24, (int)v4);
  AABB::AABB((int)&v25, (int)&v24, 1098907648);
  *((_DWORD *)v2 + 19) = v25;
  *((_DWORD *)v2 + 20) = v26;
  *((_DWORD *)v2 + 21) = v27;
  *((_DWORD *)v2 + 22) = v28;
  *((_DWORD *)v2 + 23) = v29;
  *((_DWORD *)v2 + 24) = v30;
  *((_BYTE *)v2 + 100) = v31;
  v10 = unk_2700410;
  if ( unk_2700410 )
    v11 = (_BYTE *)Facing::ALL_FACES;
    do
      v12 = *v11++;
      BlockPos::relative((BlockPos *)&v20, (int)v2 + 16, v12, 8);
      Vec3::Vec3((int)&v21, (int)&v20);
      --v10;
      v13 = (int)v2 + 12 * v12;
      *(_DWORD *)(v13 + 220) = v21;
      *(_DWORD *)(v13 + 224) = v22;
      *(_DWORD *)(v13 + 228) = v23;
    while ( v10 );
  v14 = *((_DWORD *)v3 + 2);
  v15 = *(_DWORD *)v3 - 1;
  v16 = (*(_DWORD *)v3 + 17) >> 4;
  *((_DWORD *)v2 + 7) = v15 >> 4;
  v17 = v14-- + 17;
  v17 >>= 4;
  v18 = v16 - (v15 >> 4) + 1;
  v19 = v17 - (v14 >> 4) + 1;
  *((_DWORD *)v2 + 8) = 0;
  *((_DWORD *)v2 + 9) = v14 >> 4;
  *((_DWORD *)v2 + 10) = v16;
  *((_DWORD *)v2 + 11) = 0;
  *((_DWORD *)v2 + 12) = v17;
  *((_DWORD *)v2 + 13) = v18;
  *((_DWORD *)v2 + 14) = 1;
  result = 16;
  *((_DWORD *)v2 + 15) = v19;
  *((_DWORD *)v2 + 16) = v19 * v18;
  *((_DWORD *)v2 + 17) = v19 * v18;
  *((_DWORD *)v2 + 18) = 16;
  return result;
}


void __fastcall RenderChunk::updateDistanceFromPlayer(RenderChunk *this, const Vec3 *a2)
{
  float v7; // [sp+4h] [bp-1Ch]@1

  _R4 = a2;
  Vec3::Vec3((int)&v7, (int)this + 16);
  __asm
  {
    VLDR            S0, [R4]
    VLDR            S6, [SP,#0x20+var_1C]
    VLDR            S2, [R4,#4]
    VLDR            S8, [SP,#0x20+var_18]
    VSUB.F32        S0, S6, S0
    VLDR            S4, [R4,#8]
    VSUB.F32        S2, S8, S2
    VLDR            S10, [SP,#0x20+var_14]
    VSUB.F32        S4, S10, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VSTR            S0, [R5]
  }
}


int __fastcall RenderChunk::endFaceSortOnly(RenderChunk *this, int a2)
{
  int v2; // r5@1
  RenderChunk *v3; // r8@1
  int v4; // r4@1
  int v5; // r2@1
  int v6; // r0@1
  int v7; // r1@1
  char v8; // r0@3
  unsigned int *v9; // r0@8
  unsigned int v10; // r2@9
  int result; // r0@13

  v2 = a2;
  v3 = this;
  v4 = *(_DWORD *)(a2 + 364);
  mce::Mesh::loadIndexBuffer(
    (mce::Mesh *)(a2 + 104),
    *(_DWORD *)(v4 + 184),
    (const void *)*(_QWORD *)v4,
    (unsigned int)((*(_QWORD *)v4 >> 32) - *(_QWORD *)v4) / *(_DWORD *)(v4 + 184));
  RenderChunkSorter::convertRenderLayersToTerrainLayers(v2 + 536, v2 + 648, v4 + 12);
  v5 = *(_DWORD *)(v4 + 192);
  *(_DWORD *)(v2 + 344) = v5;
  v6 = *(_DWORD *)(v4 + 196);
  *(_DWORD *)(v2 + 348) = v6;
  v7 = *(_DWORD *)(v4 + 200);
  *(_DWORD *)(v2 + 352) = v7;
  if ( v5 == *(_DWORD *)(v2 + 332) )
  {
    if ( v6 == *(_DWORD *)(v2 + 336) )
    {
      v8 = 0;
      if ( v7 != *(_DWORD *)(v2 + 340) )
        v8 = 1;
    }
    else
      v8 = 1;
  }
  else
    v8 = 1;
  *(_BYTE *)(v2 + 532) = v8;
  v9 = (unsigned int *)(v2 + 208);
  __dmb();
  while ( 1 )
    v10 = __ldrex(v9);
    if ( v10 != 1 )
      break;
    if ( !__strex(2u, v9) )
      goto LABEL_13;
  __clrex();
LABEL_13:
  result = *(_DWORD *)(v2 + 364);
  *(_DWORD *)(v2 + 364) = 0;
  *(_DWORD *)v3 = result;
  return result;
}


int __fastcall RenderChunk::getDataBounds(int result, int a2)
{
  *(_DWORD *)result = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(result + 28) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(result + 32) = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(result + 36) = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(result + 40) = *(_DWORD *)(a2 + 68);
  *(_DWORD *)(result + 44) = *(_DWORD *)(a2 + 72);
  return result;
}


int __fastcall RenderChunk::distanceToSqr(RenderChunk *this, const Entity *_R1)
{
  int result; // r0@1

  __asm
  {
    VLDR            S0, [R0,#0x10]
    VLDR            S2, [R0,#0x14]
    VLDR            S4, [R0,#0x18]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VLDR            S6, [R1,#0x48]
    VLDR            S8, [R1,#0x4C]
    VLDR            S10, [R1,#0x50]
    VCVT.F32.S32    S4, S4
    VSUB.F32        S0, S6, S0
    VSUB.F32        S2, S8, S2
    VSUB.F32        S4, S10, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VMOV            R0, S0
  }
  return result;
}


int __fastcall RenderChunk::setDirty(int result, _QWORD *a2, int a3)
{
  char v3; // r3@1

  v3 = *(_BYTE *)(result + 205);
  if ( a3 )
    v3 |= 1u;
  *(_BYTE *)(result + 205) = v3;
  *(_QWORD *)(result + 312) = *a2;
  if ( *(_QWORD *)(result + 320) == *(_QWORD *)&Tick::MAX )
  {
    result += 320;
    *(_QWORD *)result = *a2;
  }
  return result;
}


int __fastcall RenderChunk::getCenter(int result, int a2)
{
  *(_DWORD *)result = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 24);
  return result;
}


signed int __fastcall RenderChunk::getPriority(RenderChunk *this, const RenderChunk *_R1)
{
  signed int result; // r0@1

  __asm { VLDR            S0, [R0] }
  result = 1;
  __asm
  {
    VLDR            S2, [R1]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    result = -1;
  if ( _ZF )
    result = 0;
  return result;
}


signed int __fastcall RenderChunk::_tryChangeBuildState(int a1, int a2, unsigned int a3)
{
  unsigned int *v3; // r0@1
  unsigned int v4; // r3@2
  signed int result; // r0@4

  v3 = (unsigned int *)(a1 + 208);
  __dmb();
  while ( 1 )
  {
    v4 = __ldrex(v3);
    if ( v4 != a2 )
      break;
    if ( !__strex(a3, v3) )
    {
      result = 1;
      __dmb();
      return result;
    }
  }
  __clrex();
  result = 0;
  return result;
}


int __fastcall RenderChunk::setPosition(int result, int a2)
{
  *(_DWORD *)(result + 4) = *(_DWORD *)a2;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a2 + 8);
  return result;
}


unsigned int *__fastcall RenderChunk::startRebuild(int a1, int *a2, int a3)
{
  int v3; // r5@1
  int v4; // r2@1
  int v5; // r4@1
  RenderChunkBuilder *v6; // r0@1
  RenderChunkBuilder *v7; // r0@2
  RenderChunkSorter *v8; // r0@3
  RenderChunkSorter *v9; // r0@4
  int v10; // r4@5
  int v11; // t1@5
  __int64 v12; // kr00_8@5
  ChunkViewSource *v13; // r0@5
  int v14; // r0@5
  int v15; // r2@5
  __int64 v16; // r0@5
  unsigned int *result; // r0@5
  unsigned int v18; // r1@6
  char v19; // [sp+4h] [bp-44h]@5
  int v20; // [sp+10h] [bp-38h]@5
  int v21; // [sp+14h] [bp-34h]@5
  int v22; // [sp+18h] [bp-30h]@5
  int v23; // [sp+1Ch] [bp-2Ch]@5
  int v24; // [sp+20h] [bp-28h]@5
  int v25; // [sp+24h] [bp-24h]@5
  int v26; // [sp+28h] [bp-20h]@5
  int v27; // [sp+2Ch] [bp-1Ch]@5
  int v28; // [sp+30h] [bp-18h]@5

  v3 = a3;
  v4 = *a2;
  v5 = a1;
  *a2 = 0;
  v6 = *(RenderChunkBuilder **)(a1 + 360);
  *(_DWORD *)(v5 + 360) = v4;
  if ( v6 )
  {
    v7 = RenderChunkBuilder::~RenderChunkBuilder(v6);
    operator delete((void *)v7);
  }
  v8 = *(RenderChunkSorter **)(v5 + 364);
  *(_DWORD *)(v5 + 364) = 0;
  if ( v8 )
    v9 = RenderChunkSorter::~RenderChunkSorter(v8);
    operator delete((void *)v9);
  v11 = *(_DWORD *)(v5 + 4);
  v10 = v5 + 4;
  v12 = *(_QWORD *)(v10 + 4);
  v13 = **(ChunkViewSource ***)(v10 + 356);
  v23 = v11 + 17;
  v26 = v11 - 1;
  v24 = v12 + 17;
  v27 = v12 - 1;
  v25 = HIDWORD(v12) + 17;
  v28 = HIDWORD(v12) - 1;
  ChunkViewSource::move(v13, (const BlockPos *)&v26, (const BlockPos *)&v23);
  v14 = *(_DWORD *)(v10 + 356);
  *(_BYTE *)(v14 + 8) = *(_BYTE *)(v10 + 215);
  *(_BYTE *)(v10 + 215) = 0;
  v15 = *(_DWORD *)(v10 + 208);
  *(_WORD *)(v14 + 20) = *(_WORD *)(v10 + 212);
  *(_DWORD *)(v14 + 16) = v15;
  BlockPos::BlockPos((int)&v19, v3);
  RenderChunkSorter::signDelta((RenderChunkSorter *)&v20, (const BlockPos *)v10, (const BlockPos *)&v19);
  *(_DWORD *)(v10 + 328) = v20;
  *(_DWORD *)(v10 + 332) = v21;
  *(_DWORD *)(v10 + 336) = v22;
  *(_BYTE *)(v10 + 201) = 0;
  v16 = *(_QWORD *)&Tick::MAX;
  *(_QWORD *)(v10 + 316) = *(_QWORD *)&Tick::MAX;
  *(_QWORD *)(v10 + 308) = v16;
  result = (unsigned int *)(v10 + 204);
  *(_BYTE *)(v10 + 324) = 0;
  __dmb();
  while ( 1 )
    v18 = __ldrex(result);
    if ( v18 != 2 )
      break;
    if ( !__strex(0, result) )
      goto LABEL_10;
  __clrex();
LABEL_10:
  return result;
}


char *__fastcall RenderChunk::getBoundingBox(RenderChunk *this, int a2)
{
  int v2; // r1@1
  int v3; // r2@1
  int v4; // r3@1
  int v5; // r12@1
  char *result; // r0@1
  int v7; // r3@1
  int v8; // r12@1
  int v9; // lr@1

  v2 = a2 + 76;
  v3 = *(_DWORD *)v2;
  v4 = *(_DWORD *)(v2 + 4);
  v5 = *(_DWORD *)(v2 + 8);
  v2 += 12;
  *(_DWORD *)this = v3;
  *((_DWORD *)this + 1) = v4;
  *((_DWORD *)this + 2) = v5;
  result = (char *)this + 12;
  v7 = *(_DWORD *)(v2 + 4);
  v8 = *(_DWORD *)(v2 + 8);
  v9 = *(_DWORD *)(v2 + 12);
  *(_DWORD *)result = *(_DWORD *)v2;
  *((_DWORD *)result + 1) = v7;
  *((_DWORD *)result + 2) = v8;
  *((_DWORD *)result + 3) = v9;
  return result;
}


void __fastcall RenderChunk::initTextures(RenderChunk *this, mce::TextureGroup *a2)
{
  RenderChunk::initTextures(this, a2);
}


int __fastcall RenderChunk::shouldFallBackToUnsorted(RenderChunk *this, const TerrainLayer *a2)
{
  char v2; // r2@1
  int v3; // r0@1

  v2 = 0;
  v3 = *((_BYTE *)this + 532);
  if ( *((_DWORD *)a2 + 1) != 1 )
    v2 = 1;
  return (v3 != 0) & (unsigned __int8)v2;
}


mce::TexturePtr *__fastcall RenderChunk::deinitTextures(RenderChunk *this)
{
  int v2; // [sp+0h] [bp-80h]@1
  char v3; // [sp+18h] [bp-68h]@1
  char v4; // [sp+30h] [bp-50h]@1
  char v5; // [sp+48h] [bp-38h]@1
  char v6; // [sp+60h] [bp-20h]@1

  mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v6);
  mce::TexturePtr::operator=((mce::TexturePtr *)&RenderChunk::atlasTexture, (mce::TexturePtr *)&v6);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v6);
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v5);
  mce::TexturePtr::operator=((mce::TexturePtr *)&RenderChunk::foliageTexture, (mce::TexturePtr *)&v5);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v5);
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v4);
  mce::TexturePtr::operator=((mce::TexturePtr *)&RenderChunk::brightnessTexture, (mce::TexturePtr *)&v4);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v4);
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v3);
  mce::TexturePtr::operator=((mce::TexturePtr *)&RenderChunk::endPortalTexture, (mce::TexturePtr *)&v3);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v3);
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v2);
  mce::TexturePtr::operator=((mce::TexturePtr *)&RenderChunk::endPortalColorTexture, (mce::TexturePtr *)&v2);
  return mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v2);
}


int __fastcall RenderChunk::reset(RenderChunk *this)
{
  RenderChunk *v1; // r4@1
  int result; // r0@1

  v1 = this;
  *((_BYTE *)this + 204) = 0;
  *((_BYTE *)this + 292) = 0;
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 77) = 0;
  mce::Mesh::reset((RenderChunk *)((char *)this + 104));
  *((_DWORD *)v1 + 113) = *((_DWORD *)v1 + 112);
  *((_DWORD *)v1 + 116) = *((_DWORD *)v1 + 115);
  *((_DWORD *)v1 + 119) = *((_DWORD *)v1 + 118);
  *((_DWORD *)v1 + 122) = *((_DWORD *)v1 + 121);
  *((_DWORD *)v1 + 125) = *((_DWORD *)v1 + 124);
  *((_DWORD *)v1 + 128) = *((_DWORD *)v1 + 127);
  result = *((_DWORD *)v1 + 130);
  *((_DWORD *)v1 + 131) = result;
  return result;
}


int __fastcall RenderChunk::setDataBounds(int a1, int a2)
{
  int v2; // r0@1
  int v3; // r1@1
  int v4; // r2@1
  int v5; // r3@1
  int v6; // r4@1
  int v7; // r5@1
  int v8; // r12@1
  int v9; // lr@1
  int result; // r0@1
  int v11; // r3@1
  int v12; // r4@1
  int v13; // r5@1
  int v14; // r12@1
  int v15; // lr@1

  v2 = a1 + 28;
  v4 = *(_DWORD *)a2;
  v5 = *(_DWORD *)(a2 + 4);
  v6 = *(_DWORD *)(a2 + 8);
  v7 = *(_DWORD *)(a2 + 12);
  v8 = *(_DWORD *)(a2 + 16);
  v9 = *(_DWORD *)(a2 + 20);
  v3 = a2 + 24;
  *(_DWORD *)v2 = v4;
  *(_DWORD *)(v2 + 4) = v5;
  *(_DWORD *)(v2 + 8) = v6;
  *(_DWORD *)(v2 + 12) = v7;
  *(_DWORD *)(v2 + 16) = v8;
  *(_DWORD *)(v2 + 20) = v9;
  result = v2 + 24;
  v11 = *(_DWORD *)(v3 + 4);
  v12 = *(_DWORD *)(v3 + 8);
  v13 = *(_DWORD *)(v3 + 12);
  v14 = *(_DWORD *)(v3 + 16);
  v15 = *(_DWORD *)(v3 + 20);
  *(_DWORD *)result = *(_DWORD *)v3;
  *(_DWORD *)(result + 4) = v11;
  *(_DWORD *)(result + 8) = v12;
  *(_DWORD *)(result + 12) = v13;
  *(_DWORD *)(result + 16) = v14;
  *(_DWORD *)(result + 20) = v15;
  return result;
}


signed int __fastcall RenderChunk::isDirty(int a1, __int64 *a2, int a3, int a4)
{
  int v4; // r12@1
  __int64 v5; // kr08_8@1
  signed int result; // r0@1
  signed int v7; // r4@1
  signed int v8; // r6@3
  unsigned int v9; // r2@8
  unsigned int v10; // r7@8
  __int64 v11; // kr10_8@8
  __int64 v12; // kr18_8@8
  signed int v13; // r5@10
  __int64 v14; // kr20_8@20
  signed int v15; // r3@20

  v4 = a1;
  v5 = *(_QWORD *)(a1 + 312);
  result = 0;
  v7 = 0;
  if ( (unsigned int)v5 >= Tick::MAX )
    v7 = 1;
  v8 = 0;
  if ( HIDWORD(v5) >= *(&Tick::MAX + 1) )
    v8 = 1;
  if ( HIDWORD(v5) == *(&Tick::MAX + 1) )
    v8 = v7;
  if ( !v8 )
  {
    v11 = v5 + a3;
    v9 = (unsigned __int64)(v5 + a3) >> 32;
    v10 = v11;
    v12 = *a2;
    if ( *(_BYTE *)(v4 + 205) )
      v10 = v5;
    v13 = 0;
    if ( (unsigned int)v12 >= v10 )
      v13 = 1;
      v9 = HIDWORD(v5);
    if ( HIDWORD(v12) >= v9 )
      result = 1;
    if ( HIDWORD(v12) == v9 )
      result = v13;
    if ( result )
    {
    }
    else
      result = 0;
      v14 = *(_QWORD *)(v4 + 320) + a4;
      v15 = 0;
      if ( (unsigned int)v12 >= (unsigned int)v14 )
        v15 = 1;
      if ( HIDWORD(v12) >= HIDWORD(v14) )
        result = 1;
      if ( HIDWORD(v12) == HIDWORD(v14) )
        result = v15;
  }
  return result;
}


void *__fastcall RenderChunk::getRenderTexture(RenderChunk *this, const TerrainLayer *a2)
{
  void *result; // r0@1

  result = &RenderChunk::endPortalTexture;
  if ( TerrainLayer::EndPortal != *(_DWORD *)a2 )
    result = &RenderChunk::atlasTexture;
  return result;
}


int __fastcall RenderChunk::getFacing(int result, int a2, int a3)
{
  int v3; // r2@1
  __int64 v4; // kr00_8@1
  __int64 v5; // kr08_8@1
  int v6; // r1@1

  v3 = 3 * a3;
  v4 = *(_QWORD *)(a2 + 16);
  v5 = *(_QWORD *)&Facing::DIRECTION[v3 + 1];
  v6 = *(_DWORD *)(a2 + 24) + 16 * HIDWORD(v5);
  *(_DWORD *)result = v4 + 16 * Facing::DIRECTION[v3];
  *(_DWORD *)(result + 4) = HIDWORD(v4) + 16 * v5;
  *(_DWORD *)(result + 8) = v6;
  return result;
}


char *__fastcall RenderChunk::getFaceCenter(RenderChunk *this, int a2)
{
  return (char *)this + 12 * a2 + 220;
}


signed int __fastcall RenderChunk::isBuildState(int a1, int a2)
{
  int v2; // r2@1
  signed int result; // r0@1

  v2 = *(_DWORD *)(a1 + 208);
  result = 0;
  if ( v2 == a2 )
    result = 1;
  __dmb();
  return result;
}


int __fastcall RenderChunk::RenderChunk(int a1, const BlockPos *a2)
{
  int v2; // r4@1
  __int64 v3; // r0@1
  const BlockPos *v4; // r6@1

  v2 = a1;
  LODWORD(v3) = 2139095039;
  v4 = a2;
  HIDWORD(v3) = 0x7FFFFFFF;
  *(_QWORD *)v2 = v3;
  *(_DWORD *)(v2 + 8) = 0x7FFFFFFF;
  *(_DWORD *)(v2 + 12) = 0x7FFFFFFF;
  _aeabi_memclr4(v2 + 16, 60);
  AABB::AABB((AABB *)(v2 + 76));
  mce::Mesh::Mesh((mce::Mesh *)(v2 + 104));
  *(_BYTE *)(v2 + 204) = 0;
  *(_BYTE *)(v2 + 205) = 0;
  *(_DWORD *)(v2 + 208) = 2;
  VisibilityNode::VisibilityNode((VisibilityNode *)(v2 + 212), 0);
  *(_BYTE *)(v2 + 218) = 0;
  *(_BYTE *)(v2 + 219) = 1;
  *(_DWORD *)(v2 + 220) = 0;
  *(_DWORD *)(v2 + 224) = 0;
  *(_DWORD *)(v2 + 228) = 0;
  *(_DWORD *)(v2 + 232) = 0;
  *(_DWORD *)(v2 + 236) = 0;
  *(_DWORD *)(v2 + 240) = 0;
  *(_DWORD *)(v2 + 244) = 0;
  *(_DWORD *)(v2 + 248) = 0;
  *(_DWORD *)(v2 + 252) = 0;
  *(_DWORD *)(v2 + 256) = 0;
  *(_DWORD *)(v2 + 260) = 0;
  *(_DWORD *)(v2 + 264) = 0;
  *(_DWORD *)(v2 + 268) = 0;
  *(_DWORD *)(v2 + 272) = 0;
  *(_DWORD *)(v2 + 276) = 0;
  *(_DWORD *)(v2 + 280) = 0;
  *(_DWORD *)(v2 + 284) = 0;
  *(_DWORD *)(v2 + 288) = 0;
  *(_BYTE *)(v2 + 292) = 0;
  *(_DWORD *)(v2 + 296) = 0;
  *(_BYTE *)(v2 + 300) = 0;
  *(_DWORD *)(v2 + 320) = 0;
  *(_DWORD *)(v2 + 324) = 0;
  *(_DWORD *)(v2 + 312) = 0;
  *(_DWORD *)(v2 + 316) = 0;
  *(_DWORD *)(v2 + 304) = 0;
  *(_DWORD *)(v2 + 308) = 0;
  *(_BYTE *)(v2 + 328) = 1;
  *(_DWORD *)(v2 + 360) = 0;
  *(_DWORD *)(v2 + 364) = 0;
  *(_DWORD *)(v2 + 368) = 0;
  *(_BYTE *)(v2 + 356) = 0;
  *(_DWORD *)(v2 + 348) = 0;
  *(_DWORD *)(v2 + 352) = 0;
  *(_DWORD *)(v2 + 340) = 0;
  *(_DWORD *)(v2 + 344) = 0;
  *(_DWORD *)(v2 + 332) = 0;
  *(_DWORD *)(v2 + 336) = 0;
  *(_DWORD *)(v2 + 372) = 0;
  *(_DWORD *)(v2 + 376) = 0;
  *(_DWORD *)(v2 + 380) = 0;
  *(_DWORD *)(v2 + 384) = 0;
  *(_DWORD *)(v2 + 388) = 0;
  *(_DWORD *)(v2 + 392) = 0;
  *(_DWORD *)(v2 + 396) = 0;
  *(_DWORD *)(v2 + 400) = 0;
  *(_DWORD *)(v2 + 404) = 0;
  *(_DWORD *)(v2 + 408) = 0;
  *(_DWORD *)(v2 + 412) = 0;
  *(_DWORD *)(v2 + 416) = 0;
  *(_DWORD *)(v2 + 420) = 0;
  *(_DWORD *)(v2 + 424) = 0;
  *(_DWORD *)(v2 + 428) = 0;
  *(_DWORD *)(v2 + 432) = 0;
  *(_DWORD *)(v2 + 436) = 0;
  *(_DWORD *)(v2 + 440) = 0;
  *(_DWORD *)(v2 + 444) = 0;
  _aeabi_memclr4(v2 + 448, 85);
  _aeabi_memclr4(v2 + 536, 304);
  RenderChunk::setPos((RenderChunk *)v2, v4);
  return v2;
}


int __fastcall RenderChunk::_resetFaceMetadata(int result)
{
  *(_DWORD *)(result + 452) = *(_DWORD *)(result + 448);
  *(_DWORD *)(result + 464) = *(_DWORD *)(result + 460);
  *(_DWORD *)(result + 476) = *(_DWORD *)(result + 472);
  *(_DWORD *)(result + 488) = *(_DWORD *)(result + 484);
  *(_DWORD *)(result + 500) = *(_DWORD *)(result + 496);
  *(_DWORD *)(result + 512) = *(_DWORD *)(result + 508);
  *(_DWORD *)(result + 524) = *(_DWORD *)(result + 520);
  return result;
}


signed int __fastcall RenderChunk::isBottom(RenderChunk *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 2);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


unsigned int *__fastcall RenderChunk::startFaceSortOnly(int a1, int *a2, int a3)
{
  int v3; // r4@1
  int v4; // r0@1
  int v5; // r5@1
  RenderChunkSorter *v6; // r6@1
  unsigned int *result; // r0@3
  unsigned int v8; // r2@4
  char v9; // [sp+4h] [bp-2Ch]@3
  int v10; // [sp+10h] [bp-20h]@3
  int v11; // [sp+14h] [bp-1Ch]@3
  int v12; // [sp+18h] [bp-18h]@3

  v3 = a1;
  v4 = *a2;
  v5 = a3;
  *a2 = 0;
  v6 = *(RenderChunkSorter **)(v3 + 364);
  *(_DWORD *)(v3 + 364) = v4;
  if ( v6 )
  {
    RenderChunkSorter::~RenderChunkSorter(v6);
    operator delete((void *)v6);
    v4 = *(_DWORD *)(v3 + 364);
  }
  RenderChunkSorter::setSourceLayers(v4, v3 + 760, v3 + 840);
  BlockPos::BlockPos((int)&v9, v5);
  RenderChunkSorter::signDelta((RenderChunkSorter *)&v10, (const BlockPos *)(v3 + 4), (const BlockPos *)&v9);
  *(_DWORD *)(v3 + 332) = v10;
  *(_DWORD *)(v3 + 336) = v11;
  *(_DWORD *)(v3 + 340) = v12;
  result = (unsigned int *)(v3 + 208);
  *(_BYTE *)(v3 + 328) = 0;
  __dmb();
  while ( 1 )
    v8 = __ldrex(result);
    if ( v8 != 2 )
      break;
    if ( !__strex(1u, result) )
      goto LABEL_8;
  __clrex();
LABEL_8:
  return result;
}


RenderChunk *__fastcall RenderChunk::~RenderChunk(RenderChunk *this)
{
  RenderChunk *v1; // r4@1
  RenderChunkSorter *v2; // r0@1
  RenderChunkSorter *v3; // r0@2
  RenderChunkBuilder *v4; // r0@3
  RenderChunkBuilder *v5; // r0@4

  v1 = this;
  std::array<std::vector<RenderChunkQuadInfo,std::allocator<RenderChunkQuadInfo>>,7u>::~array((int)this + 448);
  v2 = (RenderChunkSorter *)*((_DWORD *)v1 + 91);
  if ( v2 )
  {
    v3 = RenderChunkSorter::~RenderChunkSorter(v2);
    operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 91) = 0;
  v4 = (RenderChunkBuilder *)*((_DWORD *)v1 + 90);
  if ( v4 )
    v5 = RenderChunkBuilder::~RenderChunkBuilder(v4);
    operator delete((void *)v5);
  *((_DWORD *)v1 + 90) = 0;
  mce::Mesh::~Mesh((RenderChunk *)((char *)v1 + 104));
  return v1;
}


signed int __fastcall RenderChunk::hasLayer(RenderChunk *this, const TerrainLayer *a2)
{
  bool v2; // zf@1
  int v3; // r3@1
  char *v4; // r0@1
  int v5; // r1@1
  signed int result; // r0@5

  v2 = *(_QWORD *)a2 >> 32 == 1;
  v3 = *((_BYTE *)this + 532);
  v4 = (char *)this + 8 * *(_QWORD *)a2;
  v5 = (int)(v4 + 536);
  if ( !v2 )
    v5 = (int)(v4 + 648);
  if ( !v3 )
    v5 = (int)(v4 + 536);
  result = 0;
  if ( *(_DWORD *)(v5 + 4) > 0 )
    result = 1;
  return result;
}
