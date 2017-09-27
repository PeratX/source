

int __fastcall FlipbookTexture::tick(int result)
{
  __asm
  {
    VLDR            S2, [R0,#0xD8]
    VMOV.F32        S4, #1.0
    VLDR            S0, [R0,#0xCC]
    VCVT.F32.S32    S2, S2
    VDIV.F32        S2, S4, S2
    VADD.F32        S0, S2, S0
    VSTR            S0, [R0,#0xCC]
    VLDR            S2, [R0,#0xD4]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !(_NF ^ _VF) )
    __asm
    {
      VSUBGE.F32      S0, S0, S2
      VSTRGE          S0, [R0,#0xCC]
    }
  return result;
}


FlipbookTexture *__fastcall FlipbookTexture::~FlipbookTexture(FlipbookTexture *this)
{
  FlipbookTexture *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  Tessellator *v4; // r0@2
  Tessellator *v5; // r0@3
  void *v6; // r0@4
  unsigned int *v8; // r12@7
  signed int v9; // r1@9

  v1 = this;
  *(_DWORD *)this = &off_26E6ECC;
  v2 = *((_DWORD *)this + 49);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  mce::Mesh::~Mesh((FlipbookTexture *)((char *)v1 + 96));
  v4 = (Tessellator *)*((_DWORD *)v1 + 23);
  if ( v4 )
    v5 = Tessellator::~Tessellator(v4);
    operator delete((void *)v5);
  *((_DWORD *)v1 + 23) = 0;
  mce::MaterialPtr::~MaterialPtr((FlipbookTexture *)((char *)v1 + 80));
  mce::TexturePtr::~TexturePtr((FlipbookTexture *)((char *)v1 + 56));
  v6 = (void *)*((_DWORD *)v1 + 10);
  if ( v6 )
    operator delete(v6);
  TickingTexture::~TickingTexture(v1);
  return v1;
}


int __fastcall FlipbookTexture::FlipbookTexture(int a1, int a2, TextureUVCoordinateSet *a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // r7@1
  int v9; // r6@1
  int v10; // r4@1
  int v11; // r10@1
  void *v12; // r0@1
  void *v13; // r6@2
  int v14; // r0@2
  mce::TextureContainer *v15; // r7@4
  mce::TextureGroup *v16; // r7@4
  void *v17; // r0@4
  int v18; // r0@5
  int v19; // r1@5 OVERLAPPED
  int v20; // r2@5
  signed int v21; // r2@5
  signed int v22; // r5@7
  __int64 v23; // r2@7
  int v24; // r0@13
  int v25; // r1@13
  int v26; // r0@17
  int v27; // r2@17
  int v28; // r1@17
  unsigned int *v30; // r2@20
  signed int v31; // r1@22
  unsigned int *v32; // r2@24
  signed int v33; // r1@26
  int v34; // [sp+0h] [bp-50h]@4
  int v35; // [sp+4h] [bp-4Ch]@4
  char v36; // [sp+8h] [bp-48h]@4
  int v37; // [sp+24h] [bp-2Ch]@1

  v8 = a4;
  v9 = a2;
  v10 = a1;
  TickingTexture::TickingTexture((TickingTexture *)a1, a3, a7);
  *(_DWORD *)v10 = &off_26E6ECC;
  *(_DWORD *)(v10 + 40) = 0;
  v11 = v10 + 40;
  *(_DWORD *)(v11 + 4) = 0;
  *(_DWORD *)(v11 + 8) = 0;
  *(_DWORD *)(v11 + 12) = v9;
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v10 + 56));
  sub_21E94B4((void **)&v37, "animated_texture_blit");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v10 + 80),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v37);
  v12 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
  {
    v30 = (unsigned int *)(v37 - 4);
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
      j_j_j_j__ZdlPv_9(v12);
  }
  v13 = operator new(0x10Cu);
  Tessellator::Tessellator((int)v13);
  *(_DWORD *)(v10 + 92) = v13;
  mce::Mesh::Mesh((mce::Mesh *)(v10 + 96));
  sub_21E8AF4((int *)(v10 + 196), (int *)v8);
  v14 = a8;
  *(_DWORD *)(v10 + 200) = *(_DWORD *)(v8 + 4);
  if ( a8 <= 1 )
    v14 = 1;
  *(_DWORD *)(v10 + 216) = v14;
  *(_DWORD *)(v10 + 220) = 0;
  *(_DWORD *)(v10 + 224) = 0;
  *(_DWORD *)(v10 + 228) = a6;
  v15 = (mce::TextureContainer *)(mce::TextureGroup::getTexturePair(
                                    *(mce::TextureGroup **)(v10 + 52),
                                    (const ResourceLocation *)(v10 + 196))
                                + 64);
  *(_DWORD *)(v10 + 220) = *(_DWORD *)mce::TextureContainer::getTextureDescription(v15);
  *(_DWORD *)(v10 + 224) = *((_DWORD *)mce::TextureContainer::getTextureDescription(v15) + 1);
  v16 = *(mce::TextureGroup **)(v10 + 52);
  sub_21E8AF4(&v34, (int *)(v10 + 196));
  v35 = *(_DWORD *)(v10 + 200);
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v36, v16, (int)&v34, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v10 + 56), (mce::TexturePtr *)&v36);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v36);
  v17 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v34 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  *(_DWORD *)(v10 + 204) = 0;
  v18 = (signed int)(*(_QWORD *)(v10 + 220) >> 32) / (signed int)*(_QWORD *)(v10 + 220);
  *(_DWORD *)(v10 + 208) = v18;
  *(_QWORD *)&v19 = *(_QWORD *)a5;
  v21 = v20 - v19;
  if ( 0 != v21 >> 2 )
    v18 = v21 >> 2;
  *(_DWORD *)(v10 + 212) = v18;
  v23 = *(_QWORD *)(v10 + 40);
  v22 = HIDWORD(v23) - v23;
  HIDWORD(v23) = (HIDWORD(v23) - (signed int)v23) >> 2;
  if ( v18 <= (unsigned int)(v22 >> 2) )
    if ( (unsigned int)v18 < HIDWORD(v23) )
      *(_DWORD *)(v10 + 44) = v23 + 4 * v18;
  else
    std::vector<int,std::allocator<int>>::_M_default_append(v10 + 40, v18 - HIDWORD(v23));
    v18 = *(_DWORD *)(v10 + 212);
    v19 = *(_DWORD *)a5;
  if ( *(_DWORD *)(a5 + 4) == v19 )
    if ( v18 >= 1 )
      v24 = *(_DWORD *)v11;
      v25 = 0;
      {
        *(_DWORD *)(v24 + 4 * v25) = v25;
        ++v25;
      }
      while ( v25 < *(_DWORD *)(v10 + 212) );
  else if ( v18 >= 1 )
    v26 = *(_DWORD *)v11;
    v27 = 0;
    v28 = *(_DWORD *)a5;
    do
      *(_DWORD *)(v26 + 4 * v27) = *(_DWORD *)(v28 + 4 * v27);
      ++v27;
    while ( v27 < *(_DWORD *)(v10 + 212) );
  return v10;
}


int __fastcall FlipbookTexture::render(int a1, float a2)
{
  int v9; // r0@1
  int v11; // r4@1
  ShaderColor *v14; // r0@1
  int v15; // r0@1
  int v16; // r1@1
  int v17; // t1@1
  int v18; // r1@1
  int v19; // r3@1
  int v21; // [sp+8h] [bp-40h]@1
  int v22; // [sp+Ch] [bp-3Ch]@1
  int v23; // [sp+10h] [bp-38h]@1

  _R5 = a1;
  __asm
  {
    VMOV.F32        S4, #1.0
    VLDR            S2, [R5,#0xD8]
  }
  _R8 = LODWORD(a2);
    VLDR            S0, [R5,#0xCC]
    VCVT.F32.S32    S2, S2
    VDIV.F32        S2, S4, S2
    VLDR            S4, [R8,#8]
    VMUL.F32        S2, S2, S4
    VADD.F32        S16, S2, S0
    VMOV            R0, S16
  v9 = mce::Math::floor(_R0, a2);
  _R6 = v9;
    VMOV            S0, R6
    VCVT.F32.S32    S18, S0
  v11 = *(_DWORD *)(_R5 + 40);
  _R0 = v11 + 4 * ((v9 + 1) % *(_DWORD *)(_R5 + 212));
    VSUB.F32        S16, S16, S18
    VLDR            S20, [R0]
  _R0 = v11 + 4 * (_R6 % *(_DWORD *)(_R5 + 212));
  __asm { VLDR            S0, [R0] }
  v14 = *(ShaderColor **)(_R8 + 48);
    VCVT.F32.S32    S18, S20
    VCVT.F32.S32    S20, S0
  v21 = 0;
  v22 = 0;
  v23 = 0;
  __asm { VSTR            S16, [SP,#0x48+var_34] }
  ShaderColor::setColor(v14, (const Color *)&v21);
    VLDR            S0, [R5,#0xD0]
    VCVT.F32.S32    S0, S0
  v15 = *(_DWORD *)(_R8 + 32);
  v16 = *(_DWORD *)(v15 + 676);
  v17 = *(_DWORD *)(v16 + 20);
    VDIV.F32        S2, S20, S0
    VDIV.F32        S0, S18, S0
    VSTR            S2, [R2]
  *(_BYTE *)(v16 + 17) = 1;
  v18 = *(_DWORD *)(v15 + 680);
  v19 = *(_DWORD *)(v18 + 20);
  __asm { VSTR            S0, [R3] }
  *(_BYTE *)(v18 + 17) = 1;
  mce::ConstantBufferConstantsBase::sync(
    (mce::ConstantBufferConstantsBase *)(v15 + 668),
    *(mce::RenderContext **)(_R8 + 12));
  return mce::Mesh::render((mce::Buffer *)(_R5 + 96), _R8, _R5 + 80, _R5 + 56, 0, 0);
}


void __fastcall FlipbookTexture::~FlipbookTexture(FlipbookTexture *this)
{
  FlipbookTexture::~FlipbookTexture(this);
}


void __fastcall FlipbookTexture::~FlipbookTexture(FlipbookTexture *this)
{
  FlipbookTexture *v1; // r0@1

  v1 = FlipbookTexture::~FlipbookTexture(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall FlipbookTexture::load(FlipbookTexture *this)
{
  Tessellator *v2; // r5@1
  float v11; // ST04_4@1
  float v12; // ST04_4@1
  unsigned __int64 v17; // ST14_8@2
  float v19; // ST08_4@2
  float v21; // ST04_4@2
  float v22; // ST04_4@2
  float v23; // ST04_4@2
  float v24; // ST04_4@2
  float v26; // ST04_4@2
  float v27; // ST04_4@2
  float v28; // ST04_4@2
  float v29; // ST04_4@2
  float v30; // ST04_4@2
  float v31; // ST04_4@2
  float v32; // ST04_4@2
  float v33; // ST04_4@2
  float v34; // ST04_4@2
  float v35; // ST04_4@2
  float v36; // ST04_4@2
  float v37; // ST04_4@2
  char v39; // [sp+1Ch] [bp-CCh]@3

  _R6 = this;
  v2 = (Tessellator *)*((_DWORD *)this + 23);
  __asm
  {
    VLDR            S0, [R6,#0xD0]
    VCVT.F32.S32    S16, S0
  }
  Tessellator::begin(*((Tessellator **)this + 23), 4, 0);
    VLDR            S18, [R6,#0xC]
    VMOV.F32        S30, #-1.0
    VLDR            S28, [R6,#8]
    VADD.F32        S2, S18, S18
    VADD.F32        S0, S28, S28
    VLDR            S22, [R6,#0x10]
    VLDR            S24, [R6,#0x14]
    VADD.F32        S26, S2, S30
    VADD.F32        S20, S0, S30
    VLDR            S0, [R6,#0x24]
    VCVT.F32.S32    S17, S0
    VMOV            R10, S26
    VMOV            R9, S20
  Tessellator::vertexUV(v2, _R9, _R10, 0.0, 0.0, 0.0);
    VSUB.F32        S0, S22, S28
    VMUL.F32        S0, S17, S0
    VADD.F32        S0, S0, S28
    VADD.F32        S0, S0, S0
    VADD.F32        S22, S0, S30
    VMOV            R8, S22
  Tessellator::vertexUV(v2, _R8, _R10, 0.0, 1.0, 0.0);
    VSUB.F32        S0, S24, S18
    VMOV.F32        S2, #1.0
    VMUL.F32        S0, S0, S17
    VDIV.F32        S16, S2, S16
    VADD.F32        S0, S0, S18
    VSTR            S16, [SP,#0xE8+var_E4]
    VADD.F32        S18, S0, S30
    VMOV            R7, S18
  Tessellator::vertexUV(v2, _R8, _R7, 0.0, 1.0, v11);
  __asm { VSTR            S16, [SP,#0xE8+var_E4] }
  Tessellator::vertexUV(v2, _R9, _R7, 0.0, 0.0, v12);
  _R0 = *((_DWORD *)_R6 + 57);
  if ( _R0 >= 1 )
    _R1 = *((_WORD *)_R6 + 12);
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.S32    S28, S0
      VMOV            S0, R1
      VCVT.F32.U32    S0, S0
    }
    _R11 = *((_WORD *)_R6 + 13);
      VDIV.F32        S0, S28, S0
      VADD.F32        S24, S0, S0
      VSUB.F32        S0, S20, S24
      VMOV            R4, S0
    v17 = __PAIR__((unsigned int)_R6, LODWORD(_R4));
    Tessellator::vertexUV(v2, _R4, _R10, 0.0, 0.0, 0.0);
      VMOV            S0, R11
      VADD.F32        S20, S0, S0
      VSUB.F32        S0, S26, S20
      VMOV            R6, S0
    Tessellator::vertexUV(v2, _R4, _R6, 0.0, 0.0, 0.0);
    Tessellator::vertexUV(v2, _R9, _R6, 0.0, 0.0, 0.0);
    Tessellator::vertexUV(v2, _R9, _R10, 0.0, 0.0, 0.0);
    Tessellator::vertexUV(v2, _R8, _R6, 0.0, 1.0, 0.0);
    Tessellator::vertexUV(v2, _R8, _R10, 0.0, 1.0, 0.0);
    __asm { VADD.F32        S0, S24, S22 }
    v19 = _R9;
    __asm { VMOV            R9, S0 }
    Tessellator::vertexUV(v2, _R9, _R6, 0.0, 1.0, 0.0);
    Tessellator::vertexUV(v2, _R9, _R10, 0.0, 1.0, 0.0);
    __asm { VSTR            S16, [SP,#0xE8+var_E4] }
    Tessellator::vertexUV(v2, _R9, _R7, 0.0, 1.0, v21);
    Tessellator::vertexUV(v2, _R8, _R7, 0.0, 1.0, v22);
    Tessellator::vertexUV(v2, _R8, _R7, 0.0, 1.0, v23);
    Tessellator::vertexUV(v2, _R9, _R7, 0.0, 1.0, v24);
      VADD.F32        S0, S20, S18
      VSTR            S16, [SP,#0xE8+var_E4]
    Tessellator::vertexUV(v2, _R9, _R4, 0.0, 1.0, v26);
    Tessellator::vertexUV(v2, _R8, _R4, 0.0, 1.0, v27);
    Tessellator::vertexUV(v2, _R8, _R7, 0.0, 1.0, v28);
    Tessellator::vertexUV(v2, _R8, _R4, 0.0, 1.0, v29);
    Tessellator::vertexUV(v2, v19, _R4, 0.0, 0.0, v30);
    Tessellator::vertexUV(v2, v19, _R7, 0.0, 0.0, v31);
    Tessellator::vertexUV(v2, v19, _R7, 0.0, 0.0, v32);
    Tessellator::vertexUV(v2, v19, _R4, 0.0, 0.0, v33);
    _R6 = (FlipbookTexture *)HIDWORD(v17);
    Tessellator::vertexUV(v2, *(float *)&v17, _R4, 0.0, 0.0, v34);
    Tessellator::vertexUV(v2, *(float *)&v17, _R7, 0.0, 0.0, v35);
    Tessellator::vertexUV(v2, *(float *)&v17, _R7, 0.0, 0.0, v36);
    Tessellator::vertexUV(v2, v19, _R7, 0.0, 0.0, v37);
    Tessellator::vertexUV(v2, v19, _R10, 0.0, 0.0, 0.0);
    Tessellator::vertexUV(v2, *(float *)&v17, _R10, 0.0, 0.0, 0.0);
  Tessellator::end((Tessellator *)&v39, (const char *)v2, 0, 0);
  mce::Mesh::operator=((int)_R6 + 96, (int)&v39);
  return mce::Mesh::~Mesh((mce::Mesh *)&v39);
}
