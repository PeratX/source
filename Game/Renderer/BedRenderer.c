

void __fastcall BedRenderer::~BedRenderer(BedRenderer *this)
{
  BedRenderer::~BedRenderer(this);
}


BaseEntityRenderer *__fastcall BedRenderer::BedRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2)
{
  BaseEntityRenderer *v2; // r4@1
  char v3; // r0@1
  signed int v4; // r5@4
  unsigned int *v5; // r2@5
  signed int v6; // r1@7
  unsigned int *v7; // r2@9
  signed int v8; // r1@11
  char *v9; // r0@21
  char *v10; // r0@21
  char *v11; // r0@22
  mce::TextureGroup *v13; // [sp+4Ch] [bp-54h]@1
  char *v14; // [sp+50h] [bp-50h]@9
  char *v15; // [sp+54h] [bp-4Ch]@5
  int v16; // [sp+58h] [bp-48h]@21
  char v17; // [sp+5Ch] [bp-44h]@21

  v13 = a2;
  v2 = a1;
  BaseEntityRenderer::BaseEntityRenderer(a1);
  *(_DWORD *)v2 = &off_26E67CC;
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v2 + 76));
  BedModel::BedModel((BaseEntityRenderer *)((char *)v2 + 100));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v2 + 600));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v2 + 624));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v2 + 648));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v2 + 672));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v2 + 696));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v2 + 720));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v2 + 744));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v2 + 768));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v2 + 792));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v2 + 816));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v2 + 840));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v2 + 864));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v2 + 888));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v2 + 912));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v2 + 936));
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v2 + 960));
  v3 = byte_27E3A5C;
  __dmb();
  if ( !(v3 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27E3A5C) )
  {
    gsl::basic_string_span<char const,-1>::remove_z<26u>((int)dword_27E39DC, (int)"textures/entity/bed/white");
    gsl::basic_string_span<char const,-1>::remove_z<27u>((int)&dword_27E39DC[2], (int)"textures/entity/bed/orange");
    gsl::basic_string_span<char const,-1>::remove_z<28u>((int)&dword_27E39DC[4], (int)"textures/entity/bed/magenta");
    gsl::basic_string_span<char const,-1>::remove_z<31u>((int)&dword_27E39DC[6], (int)"textures/entity/bed/light_blue");
    gsl::basic_string_span<char const,-1>::remove_z<27u>((int)&dword_27E39DC[8], (int)"textures/entity/bed/yellow");
    gsl::basic_string_span<char const,-1>::remove_z<25u>((int)&dword_27E39DC[10], (int)"textures/entity/bed/lime");
    gsl::basic_string_span<char const,-1>::remove_z<25u>((int)&dword_27E39DC[12], (int)"textures/entity/bed/pink");
    gsl::basic_string_span<char const,-1>::remove_z<25u>((int)&dword_27E39DC[14], (int)"textures/entity/bed/gray");
    gsl::basic_string_span<char const,-1>::remove_z<27u>((int)&dword_27E39DC[16], (int)"textures/entity/bed/silver");
    gsl::basic_string_span<char const,-1>::remove_z<25u>((int)&dword_27E39DC[18], (int)"textures/entity/bed/cyan");
    gsl::basic_string_span<char const,-1>::remove_z<27u>((int)&dword_27E39DC[20], (int)"textures/entity/bed/purple");
    gsl::basic_string_span<char const,-1>::remove_z<25u>((int)&dword_27E39DC[22], (int)"textures/entity/bed/blue");
    gsl::basic_string_span<char const,-1>::remove_z<26u>((int)&dword_27E39DC[24], (int)"textures/entity/bed/brown");
    gsl::basic_string_span<char const,-1>::remove_z<26u>((int)&dword_27E39DC[26], (int)"textures/entity/bed/green");
    gsl::basic_string_span<char const,-1>::remove_z<24u>((int)&dword_27E39DC[28], (int)"textures/entity/bed/red");
    gsl::basic_string_span<char const,-1>::remove_z<26u>((int)&dword_27E39DC[30], (int)"textures/entity/bed/black");
    j___cxa_guard_release((unsigned int *)&byte_27E3A5C);
  }
  v4 = 0;
  do
    sub_21E91E0((void **)&v14, dword_27E39DC[2 * v4 + 1], dword_27E39DC[2 * v4]);
    v9 = v14;
    v14 = (char *)&unk_28898CC;
    v15 = v9;
    v16 = 0;
    mce::TextureGroup::getTexture((mce::TexturePtr *)&v17, v13, (int)&v15, 0);
    mce::TexturePtr::operator=((BaseEntityRenderer *)((char *)v2 + 24 * v4 + 600), (mce::TexturePtr *)&v17);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v17);
    v10 = v15 - 12;
    if ( (int *)(v15 - 12) != &dword_28898C0 )
    {
      v5 = (unsigned int *)(v15 - 4);
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
        j_j_j_j__ZdlPv_9(v10);
    }
    v11 = v14 - 12;
    if ( (int *)(v14 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)(v14 - 4);
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
        v8 = (*v7)--;
      if ( v8 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    ++v4;
  while ( v4 < 16 );
  return v2;
}


int __fastcall BedRenderer::render(BedRenderer *this, BaseEntityRenderContext *a2, BlockEntityRenderData *a3)
{
  BedRenderer *v4; // r11@1
  BlockEntityRenderData *v5; // r6@1
  int v6; // r0@1
  __int64 v7; // kr00_8@1
  int v8; // r7@1
  char *v10; // r0@1
  BedBlock *v11; // r0@1
  char v12; // r4@1
  int v13; // r6@1
  int v14; // r1@1
  int result; // r0@1
  int v16; // ST10_4@3
  int v17; // ST18_4@3
  int v18; // r11@3
  int v19; // r0@3
  int v25; // r6@3
  int v28; // r4@3
  int v29; // r4@3
  char *v30; // r4@3
  int v31; // r0@3
  int v32; // [sp+0h] [bp-A8h]@0
  int v33; // [sp+1Ch] [bp-8Ch]@1
  char v34; // [sp+20h] [bp-88h]@3
  int v35; // [sp+28h] [bp-80h]@3
  int v36; // [sp+2Ch] [bp-7Ch]@3
  int v37; // [sp+30h] [bp-78h]@3
  int v38; // [sp+34h] [bp-74h]@3
  int v39; // [sp+38h] [bp-70h]@3
  int v40; // [sp+3Ch] [bp-6Ch]@3
  int v41; // [sp+40h] [bp-68h]@3
  int v42; // [sp+44h] [bp-64h]@3
  int v43; // [sp+48h] [bp-60h]@3
  int v44; // [sp+4Ch] [bp-5Ch]@3
  int v45; // [sp+50h] [bp-58h]@3
  int v46; // [sp+54h] [bp-54h]@3
  int v47; // [sp+58h] [bp-50h]@3
  int v48; // [sp+5Ch] [bp-4Ch]@3
  int v49; // [sp+60h] [bp-48h]@3
  int v50; // [sp+64h] [bp-44h]@3
  int v51; // [sp+68h] [bp-40h]@3
  int v52; // [sp+6Ch] [bp-3Ch]@3
  int v53; // [sp+70h] [bp-38h]@3
  int v54; // [sp+74h] [bp-34h]@3

  _R9 = a2;
  v4 = this;
  v5 = a3;
  v6 = BaseEntityRenderContext::getScreenContext(a2);
  v7 = *(_QWORD *)v5;
  v8 = v6;
  _R8 = *((_DWORD *)v5 + 2);
  v10 = BlockEntity::getPosition((BlockEntity *)(*(_QWORD *)v5 >> 32));
  v11 = (BedBlock *)BlockSource::getData((BlockSource *)v7, (const BlockPos *)v10);
  v12 = (char)v11;
  v33 = *((_DWORD *)v5 + 3);
  v13 = *((_DWORD *)v5 + 4);
  result = BedBlock::isHeadPiece(v11, v14);
  if ( result == 1 )
  {
    result = *(_DWORD *)BlockEntity::getType((BlockEntity *)HIDWORD(v7));
    if ( result == 27 )
    {
      v16 = v13;
      v17 = (int)v4;
      v18 = *(_DWORD *)(HIDWORD(v7) + 104);
      v19 = BaseEntityRenderContext::getWorldMatrix(_R9);
      MatrixStack::push((MatrixStack *)&v34, v19);
      _R0 = MatrixStack::MatrixStackRef::operator->((int)&v34);
      __asm { VMOV.F32        S4, #0.5625 }
      v25 = v12 & 3;
      __asm { VLDR            S8, [R8,#4] }
      _R2 = (char *)&unk_261098C + 4 * v25;
      __asm
      {
        VLDR            S6, [R8]
        VLDR            S10, [R8,#8]
        VLDR            S2, [R2]
      }
      _R1 = (char *)&unk_261099C + 4 * v25;
        VLDR            S1, [R0,#0x10]
        VADD.F32        S4, S8, S4
        VLDR            S0, [R1]
        VADD.F32        S2, S6, S2
        VLDR            S6, [R0]
        VLDR            S8, [R0,#4]
        VADD.F32        S0, S10, S0
        VLDR            S10, [R0,#0x14]
        VLDR            S14, [R0,#0xC]
        VLDR            S3, [R0,#0x18]
        VLDR            S12, [R0,#8]
        VMUL.F32        S10, S10, S4
        VLDR            S5, [R0,#0x1C]
        VMUL.F32        S8, S8, S2
        VLDR            S7, [R0,#0x20]
        VMUL.F32        S6, S6, S2
        VMUL.F32        S1, S1, S4
        VMUL.F32        S14, S14, S2
        VMUL.F32        S2, S12, S2
        VLDR            S12, [R0,#0x24]
        VMUL.F32        S3, S3, S4
        VMUL.F32        S4, S5, S4
        VMUL.F32        S5, S7, S0
        VLDR            S7, [R0,#0x28]
        VADD.F32        S8, S10, S8
        VLDR            S10, [R0,#0x2C]
        VADD.F32        S6, S1, S6
        VMUL.F32        S12, S12, S0
        VMUL.F32        S1, S7, S0
        VADD.F32        S2, S3, S2
        VMUL.F32        S0, S10, S0
        VLDR            S10, [R0,#0x34]
        VADD.F32        S4, S4, S14
        VADD.F32        S6, S6, S5
        VADD.F32        S8, S8, S12
        VLDR            S12, [R0,#0x38]
        VADD.F32        S2, S2, S1
        VADD.F32        S0, S4, S0
        VLDR            S4, [R0,#0x30]
        VADD.F32        S4, S6, S4
        VLDR            S6, [R0,#0x3C]
        VADD.F32        S8, S8, S10
        VADD.F32        S2, S2, S12
        VADD.F32        S0, S0, S6
        VSTR            S4, [R0,#0x30]
        VSTR            S8, [R0,#0x34]
        VSTR            S2, [R0,#0x38]
        VSTR            S0, [R0,#0x3C]
      v28 = MatrixStack::MatrixStackRef::operator->((int)&v34);
      v35 = 1065353216;
      v36 = 0;
      v37 = 0;
      v54 = 1119092736;
      glm::rotate<float>((int)&v38, v28, (int)&v54, (int)&v35);
      *(_DWORD *)v28 = v38;
      *(_DWORD *)(v28 + 4) = v39;
      *(_DWORD *)(v28 + 8) = v40;
      *(_DWORD *)(v28 + 12) = v41;
      *(_DWORD *)(v28 + 16) = v42;
      *(_DWORD *)(v28 + 20) = v43;
      *(_DWORD *)(v28 + 24) = v44;
      *(_DWORD *)(v28 + 28) = v45;
      *(_DWORD *)(v28 + 32) = v46;
      *(_DWORD *)(v28 + 36) = v47;
      *(_DWORD *)(v28 + 40) = v48;
      *(_DWORD *)(v28 + 44) = v49;
      *(_DWORD *)(v28 + 48) = v50;
      *(_DWORD *)(v28 + 52) = v51;
      *(_DWORD *)(v28 + 56) = v52;
      *(_DWORD *)(v28 + 60) = v53;
      v29 = MatrixStack::MatrixStackRef::operator->((int)&v34);
      v35 = 0;
      v37 = 1065353216;
      v54 = dword_26109AC[v25];
      glm::rotate<float>((int)&v38, v29, (int)&v54, (int)&v35);
      *(_DWORD *)v29 = v38;
      *(_DWORD *)(v29 + 4) = v39;
      *(_DWORD *)(v29 + 8) = v40;
      *(_DWORD *)(v29 + 12) = v41;
      *(_DWORD *)(v29 + 16) = v42;
      *(_DWORD *)(v29 + 20) = v43;
      *(_DWORD *)(v29 + 24) = v44;
      *(_DWORD *)(v29 + 28) = v45;
      *(_DWORD *)(v29 + 32) = v46;
      *(_DWORD *)(v29 + 36) = v47;
      *(_DWORD *)(v29 + 40) = v48;
      *(_DWORD *)(v29 + 44) = v49;
      *(_DWORD *)(v29 + 48) = v50;
      *(_DWORD *)(v29 + 52) = v51;
      *(_DWORD *)(v29 + 56) = v52;
      *(_DWORD *)(v29 + 60) = v53;
      v30 = BlockEntity::getPosition((BlockEntity *)HIDWORD(v7));
      __asm { VLDR            S16, [R9,#4] }
      v31 = BaseEntityRenderContext::isIgnoringLightning(_R9);
      __asm { VSTR            S16, [SP,#0xA8+var_A8] }
      EntityShaderManager::_setupShaderParameters(v17, v8, v7, (int)v30, v32, v31, &Vec2::ONE);
      BlockEntityRenderer::_renderModel(v17, v8, v17 + 100, v17 + 24 * v7 + 600, v33, v16);
      result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v34);
    }
  }
  return result;
}


int __fastcall BedRenderer::~BedRenderer(BedRenderer *this)
{
  BedRenderer *v1; // r4@1
  ModelPart *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E67CC;
  v2 = (BedRenderer *)((char *)this + 160);
  mce::TexturePtr::~TexturePtr((BedRenderer *)((char *)this + 960));
  mce::TexturePtr::~TexturePtr((BedRenderer *)((char *)v1 + 936));
  mce::TexturePtr::~TexturePtr((BedRenderer *)((char *)v1 + 912));
  mce::TexturePtr::~TexturePtr((BedRenderer *)((char *)v1 + 888));
  mce::TexturePtr::~TexturePtr((BedRenderer *)((char *)v1 + 864));
  mce::TexturePtr::~TexturePtr((BedRenderer *)((char *)v1 + 840));
  mce::TexturePtr::~TexturePtr((BedRenderer *)((char *)v1 + 816));
  mce::TexturePtr::~TexturePtr((BedRenderer *)((char *)v1 + 792));
  mce::TexturePtr::~TexturePtr((BedRenderer *)((char *)v1 + 768));
  mce::TexturePtr::~TexturePtr((BedRenderer *)((char *)v1 + 744));
  mce::TexturePtr::~TexturePtr((BedRenderer *)((char *)v1 + 720));
  mce::TexturePtr::~TexturePtr((BedRenderer *)((char *)v1 + 696));
  mce::TexturePtr::~TexturePtr((BedRenderer *)((char *)v1 + 672));
  mce::TexturePtr::~TexturePtr((BedRenderer *)((char *)v1 + 648));
  mce::TexturePtr::~TexturePtr((BedRenderer *)((char *)v1 + 624));
  mce::TexturePtr::~TexturePtr((BedRenderer *)((char *)v1 + 600));
  *((_DWORD *)v1 + 25) = &off_26E81F4;
  ModelPart::~ModelPart((BedRenderer *)((char *)v1 + 380));
  ModelPart::~ModelPart(v2);
  mce::MaterialPtr::~MaterialPtr((BedRenderer *)((char *)v1 + 148));
  Model::~Model((BedRenderer *)((char *)v1 + 100));
  mce::TexturePtr::~TexturePtr((BedRenderer *)((char *)v1 + 76));
  return j_j_j__ZN19BlockEntityRendererD2Ev_0(v1);
}


void __fastcall BedRenderer::~BedRenderer(BedRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)BedRenderer::~BedRenderer(this);
  j_j_j__ZdlPv_5(v1);
}
