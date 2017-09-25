

void __fastcall TickingTextureStage::render(int a1, int a2)
{
  TickingTextureStage::render(a1, a2);
}


TickingTextureStage *__fastcall TickingTextureStage::~TickingTextureStage(TickingTextureStage *this)
{
  TickingTextureStage *v1; // r8@1
  int v2; // r5@1
  int v3; // r7@1
  int v4; // r4@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r0@5
  unsigned int *v7; // r6@9
  unsigned int v8; // r0@11

  v1 = this;
  *(_DWORD *)this = &off_26DCAF4;
  mce::TexturePtr::~TexturePtr((TickingTextureStage *)((char *)this + 244));
  *(_DWORD *)v1 = &off_26DCD00;
  mce::Texture::~Texture((TickingTextureStage *)((char *)v1 + 172));
  mce::Texture::~Texture((TickingTextureStage *)((char *)v1 + 108));
  mce::FrameBufferObject::~FrameBufferObject((TickingTextureStage *)((char *)v1 + 28));
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


signed int __fastcall TickingTextureStage::_needsToCreateRenderTarget(TickingTextureStage *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_BYTE *)this + 236);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


int __fastcall TickingTextureStage::resetStage(TickingTextureStage *this)
{
  TickingTextureStage *v1; // r4@1
  int v3; // [sp+0h] [bp-28h]@1

  v1 = this;
  *((_BYTE *)this + 236) = 0;
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v3);
  mce::TexturePtr::operator=((TickingTextureStage *)((char *)v1 + 244), (mce::TexturePtr *)&v3);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v3);
  return mce::FrameBufferObject::destroyFrameBuffer((TickingTextureStage *)((char *)v1 + 28));
}


int __fastcall TickingTextureStage::_createRenderTarget(TickingTextureStage *this, mce::TexturePtr *a2, mce::RenderContext *a3)
{
  TickingTextureStage *v3; // r9@1
  mce::RenderContext *v4; // r10@1
  mce::TexturePtr *v5; // r6@1
  mce::Texture *v6; // r0@1
  int v7; // r0@1
  int v8; // r4@1
  const mce::Texture *v9; // r0@1
  int result; // r0@1
  int v11; // [sp+8h] [bp-78h]@1
  int v12; // [sp+Ch] [bp-74h]@1
  int v13; // [sp+1Ch] [bp-64h]@1
  int v14; // [sp+28h] [bp-58h]@1
  int v15; // [sp+48h] [bp-38h]@1
  int v16; // [sp+4Ch] [bp-34h]@1
  int v17; // [sp+50h] [bp-30h]@1
  int v18; // [sp+54h] [bp-2Ch]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  mce::FrameBufferDescription::FrameBufferDescription((mce::FrameBufferDescription *)&v15);
  v6 = (mce::Texture *)mce::TexturePtr::operator->((int)v5);
  v7 = mce::Texture::getDescription(v6);
  v8 = v7;
  v17 = *(_DWORD *)v7;
  v18 = *(_DWORD *)(v7 + 4);
  v16 = 0;
  v15 = 1;
  mce::FrameBufferObject::createFrameBuffer(
    (TickingTextureStage *)((char *)v3 + 28),
    v4,
    (const mce::FrameBufferDescription *)&v15);
  mce::FrameBufferAttachmentDescription::FrameBufferAttachmentDescription((mce::FrameBufferAttachmentDescription *)&v11);
  v11 = *(_DWORD *)v8;
  v12 = *(_DWORD *)(v8 + 4);
  v13 = 1;
  v14 = 40;
  mce::FrameBufferAttachmentDescription::setTextureFormatAndAttachmentType((int)&v11, 28);
  v9 = (const mce::Texture *)mce::TexturePtr::operator*((int)v5);
  mce::FrameBufferObject::createFrameBufferAttachmentWithTexture(
    (const mce::FrameBufferAttachmentDescription *)&v11,
    v9,
    0,
    0);
  result = mce::FrameBufferObject::finalizeFrameBuffer((TickingTextureStage *)((char *)v3 + 28));
  *((_BYTE *)v3 + 236) = 1;
  return result;
}


void __fastcall TickingTextureStage::render(int a1, int a2)
{
  int v2; // r10@1
  int v3; // r5@1
  mce::TextureGroup *v4; // r6@1
  int v5; // r4@2
  int v6; // r8@3
  char *v7; // r0@3
  char *v8; // r0@4
  char *v9; // r0@6
  char *v10; // r0@7
  mce::RenderContext *v11; // r8@9
  mce::Texture *v12; // r0@9
  int v13; // r4@9
  int v14; // r0@9
  const mce::Texture *v15; // r0@9
  mce::Texture *v16; // r0@11
  int v18; // r0@11
  int v19; // r7@11
  int v24; // r0@11
  int v25; // r0@12
  unsigned int *v26; // r2@15
  signed int v27; // r1@17
  unsigned int *v28; // r2@19
  signed int v29; // r1@21
  unsigned int *v30; // r2@31
  signed int v31; // r1@33
  unsigned int *v32; // r2@35
  signed int v33; // r1@37
  char *v34; // [sp+Ch] [bp-ACh]@6
  char *v35; // [sp+10h] [bp-A8h]@6
  int v36; // [sp+14h] [bp-A4h]@6
  char v37; // [sp+18h] [bp-A0h]@6
  char *v38; // [sp+34h] [bp-84h]@3
  char *v39; // [sp+38h] [bp-80h]@3
  int v40; // [sp+3Ch] [bp-7Ch]@3
  int v41; // [sp+40h] [bp-78h]@9
  int v42; // [sp+44h] [bp-74h]@9
  int v43; // [sp+48h] [bp-70h]@11
  int v44; // [sp+4Ch] [bp-6Ch]@11
  int v45; // [sp+50h] [bp-68h]@11
  int v46; // [sp+54h] [bp-64h]@9
  int v47; // [sp+60h] [bp-58h]@9
  int v48; // [sp+80h] [bp-38h]@9
  int v49; // [sp+84h] [bp-34h]@9
  int v50; // [sp+88h] [bp-30h]@9
  int v51; // [sp+8Ch] [bp-2Ch]@9

  v2 = a1;
  *(_BYTE *)(a1 + 20) = 0;
  v3 = a2;
  v4 = (mce::TextureGroup *)ClientInstance::getTextures(*(ClientInstance **)(a1 + 240));
  if ( !ClientInstance::getLevel(*(ClientInstance **)(v2 + 240)) )
    return;
  v5 = v2 + 244;
  if ( mce::TexturePtr::operator bool(v2 + 244) )
    goto LABEL_8;
  sub_119C884((void **)&v38, "atlas.terrain");
  v39 = v38;
  v38 = (char *)&unk_28898CC;
  v40 = 0;
  v6 = mce::TextureGroup::isLoaded(v4, (const ResourceLocation *)&v39, 0);
  v7 = v39 - 12;
  if ( (int *)(v39 - 12) != &dword_28898C0 )
  {
    v26 = (unsigned int *)(v39 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
    }
    else
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  v8 = v38 - 12;
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v38 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  if ( v6 )
    sub_119C884((void **)&v34, "atlas.terrain");
    v35 = v34;
    v34 = (char *)&unk_28898CC;
    v36 = 0;
    mce::TextureGroup::getTexture((mce::TexturePtr *)&v37, v4, (int)&v35, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)(v2 + 244), (mce::TexturePtr *)&v37);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v37);
    v9 = v35 - 12;
    if ( (int *)(v35 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v35 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
      }
      else
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v9);
    v10 = v34 - 12;
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v34 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v10);
LABEL_8:
    if ( !*(_BYTE *)(v2 + 236) )
      v11 = *(mce::RenderContext **)(v3 + 12);
      mce::FrameBufferDescription::FrameBufferDescription((mce::FrameBufferDescription *)&v48);
      v12 = (mce::Texture *)mce::TexturePtr::operator->(v2 + 244);
      v13 = mce::Texture::getDescription(v12);
      v50 = *(_DWORD *)v13;
      v51 = *(_DWORD *)(v13 + 4);
      v49 = 0;
      v48 = 1;
      mce::FrameBufferObject::createFrameBuffer(
        (mce::FrameBufferObject *)(v2 + 28),
        v11,
        (const mce::FrameBufferDescription *)&v48);
      mce::FrameBufferAttachmentDescription::FrameBufferAttachmentDescription((mce::FrameBufferAttachmentDescription *)&v41);
      v41 = *(_DWORD *)v13;
      v14 = *(_DWORD *)(v13 + 4);
      v5 = v2 + 244;
      v42 = v14;
      v46 = 1;
      v47 = 40;
      mce::FrameBufferAttachmentDescription::setTextureFormatAndAttachmentType((int)&v41, 28);
      v15 = (const mce::Texture *)mce::TexturePtr::operator*(v2 + 244);
      mce::FrameBufferObject::createFrameBufferAttachmentWithTexture(
        (const mce::FrameBufferAttachmentDescription *)&v41,
        v15,
        0,
        0);
      mce::FrameBufferObject::finalizeFrameBuffer((mce::FrameBufferObject *)(v2 + 28));
      *(_BYTE *)(v2 + 236) = 1;
    if ( mce::TextureGroup::getTickingTextureCount(v4) >= 1 )
      v16 = (mce::Texture *)mce::TexturePtr::operator->(v5);
      mce::Texture::unbindTexture(v16, *(mce::RenderContext **)(v3 + 12), 2u);
      _R4 = mce::FrameBufferObjectBase::getFrameBufferDescription((mce::FrameBufferObjectBase *)(v2 + 28));
      mce::FrameBufferObject::bindFrameBuffer((mce::FrameBufferObject *)(v2 + 28));
      v18 = MatrixStack::getTop((MatrixStack *)(*(_DWORD *)(v3 + 16) + 32));
      v19 = 0;
      *(_DWORD *)v18 = 1065353216;
      *(_DWORD *)(v18 + 12) = 0;
      *(_DWORD *)(v18 + 16) = 0;
      *(_DWORD *)(v18 + 4) = 0;
      *(_DWORD *)(v18 + 8) = 0;
      *(_DWORD *)(v18 + 28) = 0;
      *(_DWORD *)(v18 + 32) = 0;
      *(_DWORD *)(v18 + 20) = 1065353216;
      *(_DWORD *)(v18 + 24) = 0;
      *(_DWORD *)(v18 + 36) = 0;
      *(_DWORD *)(v18 + 40) = 1065353216;
      *(_DWORD *)(v18 + 52) = 0;
      *(_DWORD *)(v18 + 56) = 0;
      *(_DWORD *)(v18 + 44) = 0;
      *(_DWORD *)(v18 + 48) = 0;
      *(_DWORD *)(v18 + 60) = 1065353216;
      v43 = 0;
      v44 = 0;
      v41 = 0;
      v42 = 0;
      v45 = 0;
      v46 = 1065353216;
      __asm
        VLDR            S0, [R4,#8]
        VCVT.F32.U32    S0, S0
        VSTR            S0, [SP,#0xB8+var_78]
        VLDR            S0, [R4,#0xC]
        VSTR            S0, [SP,#0xB8+var_74]
      v24 = *(_DWORD *)(v3 + 12);
      mce::RenderContext::setViewport();
      if ( mce::TextureGroup::getTickingTextureCount(v4) > 0 )
        {
          v25 = mce::TextureGroup::getTickingTexture(v4, v19);
          (*(void (**)(void))(*(_DWORD *)v25 + 12))();
          ++v19;
        }
        while ( v19 < mce::TextureGroup::getTickingTextureCount(v4) );
      *(_BYTE *)(v2 + 20) = 1;
}


void __fastcall TickingTextureStage::~TickingTextureStage(TickingTextureStage *this)
{
  TickingTextureStage *v1; // r0@1

  v1 = TickingTextureStage::~TickingTextureStage(this);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall TickingTextureStage::~TickingTextureStage(TickingTextureStage *this)
{
  TickingTextureStage::~TickingTextureStage(this);
}


mce::RenderStageWithFrameBufferObject *__fastcall TickingTextureStage::TickingTextureStage(mce::RenderStageWithFrameBufferObject *a1, int a2)
{
  int v2; // r5@1
  mce::RenderStageWithFrameBufferObject *v3; // r4@1

  v2 = a2;
  v3 = a1;
  mce::RenderStageWithFrameBufferObject::RenderStageWithFrameBufferObject(a1);
  *(_DWORD *)v3 = &off_26DCAF4;
  *((_BYTE *)v3 + 236) = 0;
  *((_DWORD *)v3 + 60) = v2;
  mce::TexturePtr::TexturePtr((mce::RenderStageWithFrameBufferObject *)((char *)v3 + 244));
  return v3;
}


void __fastcall TickingTextureStage::createRenderTarget(TickingTextureStage *this, mce::RenderContext *a2)
{
  TickingTextureStage *v2; // r4@1
  mce::RenderContext *v3; // r8@1
  mce::TextureGroup *v4; // r6@2
  int v5; // r7@2
  char *v6; // r0@2
  char *v7; // r0@3
  char *v8; // r0@5
  char *v9; // r0@6
  mce::Texture *v10; // r0@8
  int v11; // r7@8
  const mce::Texture *v12; // r0@8
  unsigned int *v13; // r2@11
  signed int v14; // r1@13
  unsigned int *v15; // r2@15
  signed int v16; // r1@17
  unsigned int *v17; // r2@27
  signed int v18; // r1@29
  unsigned int *v19; // r2@31
  signed int v20; // r1@33
  char *v21; // [sp+Ch] [bp-A4h]@5
  char *v22; // [sp+10h] [bp-A0h]@5
  int v23; // [sp+14h] [bp-9Ch]@5
  char v24; // [sp+18h] [bp-98h]@5
  char *v25; // [sp+34h] [bp-7Ch]@2
  char *v26; // [sp+38h] [bp-78h]@2
  int v27; // [sp+3Ch] [bp-74h]@2
  int v28; // [sp+40h] [bp-70h]@8
  int v29; // [sp+44h] [bp-6Ch]@8
  int v30; // [sp+54h] [bp-5Ch]@8
  int v31; // [sp+60h] [bp-50h]@8
  int v32; // [sp+80h] [bp-30h]@8
  int v33; // [sp+84h] [bp-2Ch]@8
  int v34; // [sp+88h] [bp-28h]@8
  int v35; // [sp+8Ch] [bp-24h]@8

  v2 = this;
  v3 = a2;
  if ( !*((_BYTE *)this + 236) )
  {
    v4 = (mce::TextureGroup *)ClientInstance::getTextures(*((ClientInstance **)this + 60));
    sub_119C884((void **)&v25, "atlas.terrain");
    v26 = v25;
    v25 = (char *)&unk_28898CC;
    v27 = 0;
    v5 = mce::TextureGroup::isLoaded(v4, (const ResourceLocation *)&v26, 0);
    v6 = v26 - 12;
    if ( (int *)(v26 - 12) != &dword_28898C0 )
    {
      v13 = (unsigned int *)(v26 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      }
      else
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v6);
    }
    v7 = v25 - 12;
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v25 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v7);
    if ( v5 == 1 )
      sub_119C884((void **)&v21, "atlas.terrain");
      v22 = v21;
      v21 = (char *)&unk_28898CC;
      v23 = 0;
      mce::TextureGroup::getTexture((mce::TexturePtr *)&v24, v4, (int)&v22, 0);
      v8 = v22 - 12;
      if ( (int *)(v22 - 12) != &dword_28898C0 )
        v17 = (unsigned int *)(v22 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
        }
        else
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v8);
      v9 = v21 - 12;
      if ( (int *)(v21 - 12) != &dword_28898C0 )
        v19 = (unsigned int *)(v21 - 4);
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          v20 = (*v19)--;
        if ( v20 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v9);
      if ( !*((_BYTE *)v2 + 236) )
        mce::FrameBufferDescription::FrameBufferDescription((mce::FrameBufferDescription *)&v32);
        v10 = (mce::Texture *)mce::TexturePtr::operator->((int)&v24);
        v11 = mce::Texture::getDescription(v10);
        v34 = *(_DWORD *)v11;
        v35 = *(_DWORD *)(v11 + 4);
        v33 = 0;
        v32 = 1;
        mce::FrameBufferObject::createFrameBuffer(
          (TickingTextureStage *)((char *)v2 + 28),
          v3,
          (const mce::FrameBufferDescription *)&v32);
        mce::FrameBufferAttachmentDescription::FrameBufferAttachmentDescription((mce::FrameBufferAttachmentDescription *)&v28);
        v28 = *(_DWORD *)v11;
        v29 = *(_DWORD *)(v11 + 4);
        v30 = 1;
        v31 = 40;
        mce::FrameBufferAttachmentDescription::setTextureFormatAndAttachmentType((int)&v28, 28);
        v12 = (const mce::Texture *)mce::TexturePtr::operator*((int)&v24);
        mce::FrameBufferObject::createFrameBufferAttachmentWithTexture(
          (const mce::FrameBufferAttachmentDescription *)&v28,
          v12,
          0,
          0);
        mce::FrameBufferObject::finalizeFrameBuffer((TickingTextureStage *)((char *)v2 + 28));
        *((_BYTE *)v2 + 236) = 1;
      mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v24);
  }
}


void __fastcall TickingTextureStage::createRenderTarget(TickingTextureStage *this, mce::RenderContext *a2)
{
  TickingTextureStage::createRenderTarget(this, a2);
}
