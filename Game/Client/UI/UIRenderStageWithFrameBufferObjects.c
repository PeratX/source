

char *__fastcall UIRenderStageWithFrameBufferObjects::initStage(int a1, mce::RenderContext *a2, int a3)
{
  int v3; // r8@1
  int v9; // r5@3
  int v10; // r7@3
  int v11; // r4@4
  MinecraftGame *v12; // r0@6
  char *v13; // r0@6
  __int64 v14; // kr00_8@6
  unsigned int v15; // r0@6
  unsigned int v16; // r2@6
  __int64 v17; // r0@7
  int v18; // r6@9
  int v19; // r4@10
  MinecraftGame *v20; // r0@13
  char *v21; // r0@13
  int v22; // r3@13
  int v23; // r7@13
  char *result; // r0@13
  int v25; // r10@14
  unsigned int v26; // r6@14
  __int64 v27; // r0@15
  unsigned int v28; // r2@15
  int v29; // r5@16
  char *v30; // [sp+4h] [bp-84h]@13
  mce::RenderContext *v31; // [sp+8h] [bp-80h]@1
  char v32; // [sp+10h] [bp-78h]@1
  int v33; // [sp+30h] [bp-58h]@2
  signed int v34; // [sp+38h] [bp-50h]@16
  int v35; // [sp+3Ch] [bp-4Ch]@16
  int v36; // [sp+40h] [bp-48h]@16
  signed int v37; // [sp+44h] [bp-44h]@16
  char v38; // [sp+4Ch] [bp-3Ch]@2
  int v39; // [sp+54h] [bp-34h]@1

  v3 = a1;
  _R4 = a3;
  v31 = a2;
  mce::FrameBufferDescription::FrameBufferDescription((mce::FrameBufferDescription *)&v39);
  __asm
  {
    VLDR            S0, [R4]
    VCVTR.U32.F32   S0, S0
    VSTR            S0, [SP,#0x88+var_2C]
    VLDR            S0, [R4,#4]
    VSTR            S0, [SP,#0x88+var_28]
  }
  mce::FrameBufferAttachmentDescription::FrameBufferAttachmentDescription((mce::FrameBufferAttachmentDescription *)&v32);
  if ( v39 >= 2 )
    v38 = 1;
    v33 &= 0xFFFFFFF7;
  v9 = *(_DWORD *)(v3 + 28);
  v10 = *(_DWORD *)(v3 + 32);
  if ( v10 != v9 )
    v11 = *(_DWORD *)(v3 + 28);
    do
    {
      mce::Texture::~Texture((mce::Texture *)(v11 + 140));
      mce::Texture::~Texture((mce::Texture *)(v11 + 76));
      mce::FrameBufferObject::~FrameBufferObject((mce::FrameBufferObject *)v11);
      v11 += 208;
    }
    while ( v10 != v11 );
  *(_DWORD *)(v3 + 32) = v9;
  v12 = (MinecraftGame *)ClientInstance::getMinecraftGame(*(ClientInstance **)(v3 + 40));
  v13 = MinecraftGame::getClientInstanceMap(v12);
  v14 = *(_QWORD *)(v3 + 28);
  v15 = *((_DWORD *)v13 + 5);
  v16 = -991146299 * ((HIDWORD(v14) - (signed int)v14) >> 4);
  if ( v15 <= v16 )
    if ( v15 < v16 )
      v18 = v14 + 208 * v15;
      if ( HIDWORD(v14) != v18 )
      {
        v19 = v14 + 208 * v15;
        do
        {
          mce::Texture::~Texture((mce::Texture *)(v19 + 140));
          mce::Texture::~Texture((mce::Texture *)(v19 + 76));
          mce::FrameBufferObject::~FrameBufferObject((mce::FrameBufferObject *)v19);
          v19 += 208;
        }
        while ( HIDWORD(v14) != v19 );
      }
      *(_DWORD *)(v3 + 32) = v18;
  else
    HIDWORD(v17) = v15 - v16;
    LODWORD(v17) = v3 + 28;
    std::vector<UIFrameBufferObjectData,std::allocator<UIFrameBufferObjectData>>::_M_default_append(v17);
  v20 = (MinecraftGame *)ClientInstance::getMinecraftGame(*(ClientInstance **)(v3 + 40));
  v21 = MinecraftGame::getClientInstanceMap(v20);
  v23 = *((_DWORD *)v21 + 3);
  result = v21 + 4;
  v30 = result;
  if ( (char *)v23 != result )
    v25 = 0;
    v26 = 0;
      v27 = *(_QWORD *)(v3 + 28);
      v28 = -991146299 * ((HIDWORD(v27) - (signed int)v27) >> 4);
      if ( v28 <= v26 )
        sub_119CA78("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)", v26, v28, v22);
      v29 = v27 + v25;
      mce::FrameBufferObject::createFrameBuffer(
        (mce::FrameBufferObject *)(v27 + v25),
        v31,
        (const mce::FrameBufferDescription *)&v39);
      v34 = 0;
      v35 = 0;
      v36 = 0;
      v37 = 0;
      mce::FrameBufferAttachmentDescription::setTextureFormatAndAttachmentType((int)&v32, 87);
      v33 = 40;
      mce::FrameBufferObject::createFrameBufferAttachmentAndTexture(
        (mce::FrameBufferObject *)v29,
        (const mce::FrameBufferAttachmentDescription *)&v32,
        (mce::Texture *)(v29 + 76));
      v34 = 1065353216;
      v37 = 1065353216;
      mce::FrameBufferAttachmentDescription::setTextureFormatAndAttachmentType((int)&v32, 45);
      v33 = 64;
        (mce::Texture *)(v29 + 140));
      mce::FrameBufferObject::finalizeFrameBuffer((mce::FrameBufferObject *)v29);
      *(_BYTE *)(v29 + 204) = *(_BYTE *)(v23 + 16);
      ClientInstance::setUITexture(*(ClientInstance **)(v23 + 20), (mce::Texture *)(v29 + 76));
      ++v26;
      v23 = sub_119CB48(v23);
      v25 += 208;
      result = v30;
    while ( (char *)v23 != v30 );
  return result;
}


int __fastcall UIRenderStageWithFrameBufferObjects::UIRenderStageWithFrameBufferObjects(mce::RenderStage *a1, int a2)
{
  int v2; // r4@1
  int result; // r0@1

  v2 = a2;
  result = mce::RenderStage::RenderStage(a1);
  *(_DWORD *)result = &off_26DCB1C;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 40) = v2;
  *(_BYTE *)(result + 22) = 0;
  return result;
}


int __fastcall UIRenderStageWithFrameBufferObjects::postRender(int a1)
{
  int v1; // r5@1
  MinecraftGame *v2; // r0@1
  int v3; // r0@1
  _BYTE *v4; // r2@1
  mce::FrameBufferObject *v5; // r1@2
  bool v6; // zf@2

  v1 = a1;
  v2 = (MinecraftGame *)ClientInstance::getMinecraftGame(*(ClientInstance **)(a1 + 40));
  v3 = MinecraftGame::getUIRenderClient(v2);
  v4 = (_BYTE *)(*(_DWORD *)(v1 + 28) + 204);
  do
  {
    v5 = (mce::FrameBufferObject *)(v4 - 204);
    v6 = *v4 == v3;
    v4 += 208;
  }
  while ( !v6 );
  if ( v5 != *(mce::FrameBufferObject **)(v1 + 32) )
    mce::FrameBufferObject::transitionFrameBufferToShaderResource(v5);
  return j_j_j__ZN3mce11RenderStage10postRenderER13ScreenContext();
}


void __fastcall UIRenderStageWithFrameBufferObjects::~UIRenderStageWithFrameBufferObjects(UIRenderStageWithFrameBufferObjects *this)
{
  UIRenderStageWithFrameBufferObjects::~UIRenderStageWithFrameBufferObjects(this);
}


UIRenderStageWithFrameBufferObjects *__fastcall UIRenderStageWithFrameBufferObjects::~UIRenderStageWithFrameBufferObjects(UIRenderStageWithFrameBufferObjects *this)
{
  UIRenderStageWithFrameBufferObjects *v1; // r9@1
  MinecraftGame *v2; // r0@1
  char *v3; // r0@1
  int v4; // r5@1
  int v5; // r4@1
  int v6; // r4@4
  int v7; // r5@4
  int v8; // r5@9
  int v9; // r7@9
  int v10; // r4@10
  unsigned int *v11; // r1@11
  unsigned int v12; // r0@13
  unsigned int *v13; // r6@17
  unsigned int v14; // r0@19

  v1 = this;
  *(_DWORD *)this = &off_26DCB1C;
  v2 = (MinecraftGame *)ClientInstance::getMinecraftGame(*((ClientInstance **)this + 10));
  v3 = MinecraftGame::getClientInstanceMap(v2);
  v4 = *((_DWORD *)v3 + 3);
  v5 = (int)(v3 + 4);
  while ( v4 != v5 )
  {
    ClientInstance::setUITexture(*(ClientInstance **)(v4 + 20), 0);
    v4 = sub_119CB48(v4);
  }
  v6 = *(_QWORD *)((char *)v1 + 28) >> 32;
  v7 = *(_QWORD *)((char *)v1 + 28);
  if ( v7 != v6 )
    do
    {
      mce::Texture::~Texture((mce::Texture *)(v7 + 140));
      mce::Texture::~Texture((mce::Texture *)(v7 + 76));
      mce::FrameBufferObject::~FrameBufferObject((mce::FrameBufferObject *)v7);
      v7 += 208;
    }
    while ( v6 != v7 );
    v7 = *((_DWORD *)v1 + 7);
  if ( v7 )
    operator delete((void *)v7);
  *(_DWORD *)v1 = &off_26DCCDC;
  v9 = *(_QWORD *)((char *)v1 + 4) >> 32;
  v8 = *(_QWORD *)((char *)v1 + 4);
  if ( v8 != v9 )
      v10 = *(_DWORD *)(v8 + 4);
      if ( v10 )
      {
        v11 = (unsigned int *)(v10 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
        }
        else
          v12 = (*v11)--;
        if ( v12 == 1 )
          v13 = (unsigned int *)(v10 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
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
            (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
      }
      v8 += 8;
    while ( v8 != v9 );
    v8 = *((_DWORD *)v1 + 1);
  if ( v8 )
    operator delete((void *)v8);
  return v1;
}


mce::FrameBufferAttachmentBase *__fastcall UIRenderStageWithFrameBufferObjects::_setupStage(int a1, int a2, int a3)
{
  int v3; // r7@1
  int v4; // r4@1
  int v5; // r5@1
  MinecraftGame *v6; // r0@1
  int v7; // r0@1
  _BYTE *v8; // r1@1
  mce::FrameBufferObject *v9; // r6@2
  mce::FrameBufferAttachmentBase *result; // r0@4
  int v17; // r0@5

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (MinecraftGame *)ClientInstance::getMinecraftGame(*(ClientInstance **)(a1 + 40));
  v7 = MinecraftGame::getUIRenderClient(v6);
  v8 = (_BYTE *)(*(_DWORD *)(v3 + 28) + 204);
  do
  {
    v9 = (mce::FrameBufferObject *)(v8 - 204);
    _ZF = *v8 == v7;
    v8 += 208;
  }
  while ( !_ZF );
  result = *(mce::FrameBufferAttachmentBase **)(v3 + 32);
  if ( v9 != result )
    mce::FrameBufferObject::bindFrameBuffer(v9);
    _R0 = mce::FrameBufferObjectBase::getFrameBufferDescription(v9);
    __asm
    {
      VLDR            S0, [R0,#8]
      VCVT.F32.U32    S0, S0
      VSTR            S0, [SP,#0x30+var_30]
    }
      VLDR            S0, [R0,#0xC]
      VSTR            S0, [SP,#0x30+var_2C]
    v17 = *(_DWORD *)(v5 + 12);
    result = (mce::FrameBufferAttachmentBase *)mce::RenderContext::setViewport();
    if ( v4 == 1 )
      mce::FrameBufferObject::clearColorAttachment((int)v9, 0);
      result = mce::FrameBufferObject::clearDepthStencilAttachment((int)v9, 0);
  return result;
}


mce::FrameBufferAttachmentBase *__fastcall UIRenderStageWithFrameBufferObjects::preRender(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1

  v2 = a2;
  v3 = a1;
  mce::RenderStage::preRender(a1);
  return j_j_j__ZN35UIRenderStageWithFrameBufferObjects11_setupStageER13ScreenContextb(v3, v2, 1);
}


void __fastcall UIRenderStageWithFrameBufferObjects::~UIRenderStageWithFrameBufferObjects(UIRenderStageWithFrameBufferObjects *this)
{
  UIRenderStageWithFrameBufferObjects *v1; // r0@1

  v1 = UIRenderStageWithFrameBufferObjects::~UIRenderStageWithFrameBufferObjects(this);
  j_j_j__ZdlPv_4((void *)v1);
}
