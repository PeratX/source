

void __fastcall DefaultUIRendererCompositorStage::~DefaultUIRendererCompositorStage(DefaultUIRendererCompositorStage *this)
{
  DefaultUIRendererCompositorStage::~DefaultUIRendererCompositorStage(this);
}


int __fastcall DefaultUIRendererCompositorStage::preRender(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@3
  int v5; // r1@3
  int v6; // r0@3
  int result; // r0@3

  v2 = a1;
  v3 = a2;
  if ( *(_BYTE *)(a1 + 28) )
    mce::RenderContext::setRenderTarget(*(mce::RenderContext **)(a2 + 12));
  v4 = *(_DWORD *)(v3 + 12);
  v5 = *(_DWORD *)(v3 + 20);
  mce::RenderContext::setViewport();
  v6 = *(_DWORD *)(v3 + 12);
  mce::RenderContext::clearDepthStencilBuffer();
  result = *(_BYTE *)(v2 + 148);
  if ( !*(_BYTE *)(v2 + 148) )
    result = j_j_j__ZN32DefaultUIRendererCompositorStage16_buildUIQuadMeshER11Tessellator(
               (DefaultUIRendererCompositorStage *)v2,
               *(Tessellator **)(v3 + 40));
  return result;
}


mce::RenderStage *__fastcall DefaultUIRendererCompositorStage::DefaultUIRendererCompositorStage(mce::RenderStage *a1, int a2)
{
  int v2; // r5@1
  mce::RenderStage *v3; // r9@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-34h]@1
  char v9; // [sp+8h] [bp-30h]@1

  v2 = a2;
  v3 = a1;
  mce::RenderStage::RenderStage(a1);
  *(_DWORD *)v3 = &off_26E6D88;
  *((_BYTE *)v3 + 28) = 0;
  *((_DWORD *)v3 + 8) = v2;
  mce::MaterialPtr::MaterialPtr((mce::RenderStage *)((char *)v3 + 36));
  mce::Mesh::Mesh((mce::RenderStage *)((char *)v3 + 48));
  *((_BYTE *)v3 + 148) = 0;
  sub_21E94B4((void **)&v8, "overlay_quad");
  mce::RenderMaterialGroup::getMaterial(
    (mce::MaterialPtr *)&v9,
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v8);
  mce::MaterialPtr::operator=((mce::RenderStage *)((char *)v3 + 36), (mce::MaterialPtr *)&v9);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v9);
  v4 = (void *)(v8 - 12);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  return v3;
}


void __fastcall DefaultUIRendererCompositorStage::~DefaultUIRendererCompositorStage(DefaultUIRendererCompositorStage *this)
{
  DefaultUIRendererCompositorStage *v1; // r8@1
  int v2; // r5@1
  int v3; // r7@1
  int v4; // r4@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r0@5
  unsigned int *v7; // r6@9
  unsigned int v8; // r0@11

  v1 = this;
  *(_DWORD *)this = &off_26E6D88;
  mce::Mesh::~Mesh((DefaultUIRendererCompositorStage *)((char *)this + 48));
  mce::MaterialPtr::~MaterialPtr((DefaultUIRendererCompositorStage *)((char *)v1 + 36));
  *(_DWORD *)v1 = &off_26DCCDC;
  v3 = *(_QWORD *)((char *)v1 + 4) >> 32;
  v2 = *(_QWORD *)((char *)v1 + 4);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v2 + 4);
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        }
        else
          v6 = (*v5)--;
        if ( v6 == 1 )
          v7 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
          }
          else
            v8 = (*v7)--;
          if ( v8 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
      }
      v2 += 8;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 1);
  }
  if ( v2 )
    operator delete((void *)v2);
  j_j_j__ZdlPv_5((void *)v1);
}


mce::Texture *__fastcall DefaultUIRendererCompositorStage::postRender(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r4@1
  GameRenderer *v4; // r0@1
  mce::Texture *result; // r0@1
  MinecraftGame *v6; // r0@2
  char *v7; // r0@2
  int v8; // r5@2
  mce::Texture *v9; // r11@3
  mce::RenderContext *v10; // r8@4
  int v11; // r0@4
  ShaderColor *v12; // r0@4
  signed int i; // [sp+10h] [bp-50h]@2
  int v14; // [sp+14h] [bp-4Ch]@4
  signed int v15; // [sp+18h] [bp-48h]@4
  signed int v16; // [sp+1Ch] [bp-44h]@4
  signed int v17; // [sp+20h] [bp-40h]@4
  char v18; // [sp+24h] [bp-3Ch]@4
  char v19; // [sp+2Ch] [bp-34h]@4
  char v20; // [sp+34h] [bp-2Ch]@4

  v2 = a1;
  v3 = a2;
  v4 = (GameRenderer *)ClientInstance::getGameRenderer(*(ClientInstance **)(a1 + 32));
  result = (mce::Texture *)GameRenderer::useLowFrequencyUIRender(v4);
  if ( result == (mce::Texture *)1 )
  {
    v6 = (MinecraftGame *)ClientInstance::getMinecraftGame(*(ClientInstance **)(v2 + 32));
    v7 = MinecraftGame::getClientInstanceMap(v6);
    v8 = *((_DWORD *)v7 + 3);
    result = (mce::Texture *)(v7 + 4);
    for ( i = (signed int)result; v8 != i; result = (mce::Texture *)i )
    {
      result = (mce::Texture *)ClientInstance::getUITexture(*(ClientInstance **)(v8 + 20));
      v9 = result;
      if ( !result )
        break;
      v10 = *(mce::RenderContext **)(v3 + 12);
      ClientInstance::getViewportInfo(*(ClientInstance **)(v8 + 20));
      mce::RenderContext::setViewport();
      MatrixStack::pushIdentity((MatrixStack *)&v20, *(_DWORD *)(v3 + 16) + 16);
      MatrixStack::pushIdentity((MatrixStack *)&v19, *(_DWORD *)(v3 + 16));
      MatrixStack::pushIdentity((MatrixStack *)&v18, *(_DWORD *)(v3 + 16) + 32);
      v11 = MatrixStack::MatrixStackRef::operator->((int)&v18);
      *(_DWORD *)(v11 + 16) = 0;
      *(_DWORD *)(v11 + 8) = 0;
      *(_DWORD *)(v11 + 12) = 0;
      *(_DWORD *)v11 = 0x40000000;
      *(_DWORD *)(v11 + 4) = 0;
      *(_DWORD *)(v11 + 28) = 0;
      *(_DWORD *)(v11 + 32) = 0;
      *(_DWORD *)(v11 + 20) = -1073741824;
      *(_DWORD *)(v11 + 24) = 0;
      *(_DWORD *)(v11 + 36) = 0;
      *(_DWORD *)(v11 + 40) = -1082130432;
      *(_DWORD *)(v11 + 44) = 0;
      *(_DWORD *)(v11 + 48) = -1082130432;
      *(_DWORD *)(v11 + 52) = 1065353216;
      *(_DWORD *)(v11 + 56) = -1082130432;
      *(_DWORD *)(v11 + 60) = 1065353216;
      mce::Texture::bindTexture(v9, v10, 0, 2u);
      v12 = *(ShaderColor **)(v3 + 48);
      v14 = 1065353216;
      v15 = 1065353216;
      v16 = 1065353216;
      v17 = 1065353216;
      ShaderColor::setColor(v12, (const Color *)&v14);
      mce::Mesh::render((mce::Buffer *)(v2 + 48), v3, v2 + 36, 0, 0);
      mce::Texture::unbindTexture(v9, v10, 0);
      MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v18);
      MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v19);
      MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v20);
      v8 = sub_21D4820(v8);
    }
  }
  return result;
}


int __fastcall DefaultUIRendererCompositorStage::_buildUIQuadMesh(DefaultUIRendererCompositorStage *this, Tessellator *a2)
{
  DefaultUIRendererCompositorStage *v2; // r6@1
  char *v3; // r4@1
  Tessellator *v4; // r5@1
  char v10; // [sp+4h] [bp-A4h]@1
  int v11; // [sp+68h] [bp-40h]@1
  int v12; // [sp+70h] [bp-38h]@1
  int v13; // [sp+74h] [bp-34h]@1
  int v14; // [sp+78h] [bp-30h]@1
  int v15; // [sp+7Ch] [bp-2Ch]@1
  int v16; // [sp+80h] [bp-28h]@1
  signed int v17; // [sp+84h] [bp-24h]@1
  int v18; // [sp+88h] [bp-20h]@1
  int v19; // [sp+8Ch] [bp-1Ch]@1
  float v20; // [sp+90h] [bp-18h]@1
  int v21; // [sp+94h] [bp-14h]@1

  v2 = this;
  v3 = (char *)this + 48;
  v4 = a2;
  mce::Mesh::reset((DefaultUIRendererCompositorStage *)((char *)this + 48));
  *((_BYTE *)v2 + 148) = 1;
  Tessellator::begin((int)v4, 2, 4, 0);
  v19 = 1065353216;
  v20 = 0.0;
  v21 = 0;
  v17 = 1065353216;
  v18 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  Tessellator::vertexUV(v4, (const Vec3 *)&v13, 4575657221408423936LL);
  Tessellator::vertexUV(v4, (const Vec3 *)&v19, 4575657222473777152LL);
  __asm
  {
    VMOV.F32        S0, #1.0
    VLDR            S2, [SP,#0xA8+var_18]
  }
  v11 = v19;
    VADD.F32        S0, S2, S0
    VSTR            S0, [SP,#0xA8+var_3C]
  v12 = v21;
  Tessellator::vertexUV(v4, (const Vec3 *)&v11, 1065353216LL);
  Tessellator::vertexUV(v4, (const Vec3 *)&v16, 0LL);
  Tessellator::beginIndices(v4, 6);
  Tessellator::triangle(v4, 3u, 2u, 1u);
  Tessellator::triangle(v4, 0, 3u, 1u);
  Tessellator::end((Tessellator *)&v10, (const char *)v4, 0, 0);
  mce::Mesh::operator=((int)v3, (int)&v10);
  return mce::Mesh::~Mesh((mce::Mesh *)&v10);
}


DefaultUIRendererCompositorStage *__fastcall DefaultUIRendererCompositorStage::~DefaultUIRendererCompositorStage(DefaultUIRendererCompositorStage *this)
{
  DefaultUIRendererCompositorStage *v1; // r8@1
  int v2; // r5@1
  int v3; // r7@1
  int v4; // r4@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r0@5
  unsigned int *v7; // r6@9
  unsigned int v8; // r0@11

  v1 = this;
  *(_DWORD *)this = &off_26E6D88;
  mce::Mesh::~Mesh((DefaultUIRendererCompositorStage *)((char *)this + 48));
  mce::MaterialPtr::~MaterialPtr((DefaultUIRendererCompositorStage *)((char *)v1 + 36));
  *(_DWORD *)v1 = &off_26DCCDC;
  v3 = *(_QWORD *)((char *)v1 + 4) >> 32;
  v2 = *(_QWORD *)((char *)v1 + 4);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v2 + 4);
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        }
        else
          v6 = (*v5)--;
        if ( v6 == 1 )
          v7 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
          }
          else
            v8 = (*v7)--;
          if ( v8 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
      }
      v2 += 8;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 1);
  }
  if ( v2 )
    operator delete((void *)v2);
  return v1;
}
