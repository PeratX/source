

void __fastcall EnderCrystalRenderer::renderEffects(int a1, BaseEntityRenderContext *a2, __int64 *a3)
{
  int v4; // r9@1
  __int64 *v5; // r4@1
  int v6; // r8@1
  int v7; // r0@1
  EnderCrystalRenderer *v9; // r5@1
  char *v10; // r0@1
  const Vec3 *v15; // r3@4
  void *v16; // r0@5
  unsigned int *v17; // r2@6
  signed int v18; // r1@8
  int v19; // [sp+0h] [bp-E0h]@0
  int v20; // [sp+10h] [bp-D0h]@10
  char v21; // [sp+14h] [bp-CCh]@10
  int v22; // [sp+24h] [bp-BCh]@5
  char v23; // [sp+28h] [bp-B8h]@5
  int v24; // [sp+34h] [bp-ACh]@4
  signed int v25; // [sp+3Ch] [bp-A4h]@4
  signed int v26; // [sp+40h] [bp-A0h]@4
  float v27; // [sp+44h] [bp-9Ch]@4
  float v30; // [sp+50h] [bp-90h]@4
  float v31; // [sp+5Ch] [bp-84h]@4
  float v34; // [sp+68h] [bp-78h]@4
  float v35; // [sp+74h] [bp-6Ch]@4
  int v38; // [sp+80h] [bp-60h]@1
  int v39; // [sp+84h] [bp-5Ch]@2
  int v40; // [sp+88h] [bp-58h]@3

  _R6 = a2;
  v4 = a1;
  v5 = a3;
  v6 = BaseEntityRenderContext::getScreenContext(a2);
  v7 = BaseEntityRenderContext::getTessellator(_R6);
  _KR00_8 = *v5;
  v9 = (EnderCrystalRenderer *)v7;
  v10 = Entity::getEntityData((Entity *)*v5);
  SynchedEntityData::getPos((SynchedEntityData *)&v38, (int)v10, 0x30u);
  if ( v38 != BlockPos::ZERO || v39 != unk_2816278 || v40 != dword_281627C )
  {
    Entity::getInterpolatedPosition((Entity *)&v35, *(float *)&_KR00_8, *((_DWORD *)_R6 + 1));
    __asm
    {
      VLDR            S16, [R4]
      VLDR            S18, [R4,#4]
      VLDR            S20, [R4,#8]
      VLDR            S22, [SP,#0xE0+var_6C]
      VLDR            S24, [SP,#0xE0+var_68]
      VLDR            S26, [SP,#0xE0+var_64]
    }
    Vec3::Vec3((int)&v31, (int)&v38);
      VSUB.F32        S16, S16, S22
      VLDR            S0, [SP,#0xE0+var_84]
      VSUB.F32        S18, S18, S24
      VLDR            S2, [SP,#0xE0+var_80]
      VSUB.F32        S20, S20, S26
      VLDR            S4, [SP,#0xE0+var_7C]
      VADD.F32        S0, S0, S16
      VADD.F32        S2, S2, S18
      VADD.F32        S4, S4, S20
      VSTR            S0, [SP,#0xE0+var_78]
      VSTR            S2, [SP,#0xE0+var_74]
      VSTR            S4, [SP,#0xE0+var_70]
    Entity::getInterpolatedPosition((Entity *)&v27, *(float *)&_KR00_8, *((_DWORD *)_R6 + 1));
      VLDR            S0, [SP,#0xE0+var_9C]
      VLDR            S2, [SP,#0xE0+var_98]
      VLDR            S4, [SP,#0xE0+var_94]
      VSTR            S0, [SP,#0xE0+var_90]
      VSTR            S2, [SP,#0xE0+var_8C]
      VSTR            S4, [SP,#0xE0+var_88]
    EnderCrystalRenderer::tessellateCrystalBeam(v9, (Tessellator *)&v34, (const Vec3 *)&v30, v15);
      VLDR            S0, [R7,#0x1A0]
      VLDR            S4, =0.01
      VCVT.F32.S32    S0, S0
      VLDR            S2, [R6,#4]
    v24 = 0;
      VADD.F32        S0, S0, S2
      VMUL.F32        S0, S0, S4
      VSTR            S0, [SP,#0xE0+var_A8]
    v25 = 1065353216;
    v26 = 1065353216;
    __asm { VSTR            S2, [SP,#0xE0+var_E0] }
    EntityShaderManager::_setupShaderParameters(v4, v6, *(float *)&_KR00_8, COERCE_FLOAT(&Color::NIL), v19, (int)&v24);
    if ( Tessellator::forceTessellateIntercept(v9) == 1 )
      sub_21E94B4((void **)&v22, "entity_beam");
      mce::MaterialPtr::MaterialPtr(
        (mce::MaterialPtr *)&v23,
        (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
        &v22);
      Tessellator::triggerIntercept(v9, (const mce::MaterialPtr *)&v23, (const mce::TexturePtr *)(v4 + 888));
      mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v23);
      v16 = (void *)(v22 - 12);
      if ( (int *)(v22 - 12) == &dword_28898C0 )
        return;
      v17 = (unsigned int *)(v22 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        goto LABEL_17;
      }
    else
      sub_21E94B4((void **)&v20, "entity_beam");
        (mce::MaterialPtr *)&v21,
        &v20);
      Tessellator::draw((char *)v9, v6, (int)&v21, v4 + 888);
      mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v21);
      v16 = (void *)(v20 - 12);
      if ( (int *)(v20 - 12) == &dword_28898C0 )
      v17 = (unsigned int *)(v20 - 4);
    v18 = (*v17)--;
LABEL_17:
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  }
}


void __fastcall EnderCrystalRenderer::~EnderCrystalRenderer(EnderCrystalRenderer *this)
{
  EnderCrystalRenderer::~EnderCrystalRenderer(this);
}


BaseEntityRenderer *__fastcall EnderCrystalRenderer::EnderCrystalRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2)
{
  mce::TextureGroup *v2; // r5@1
  BaseEntityRenderer *v3; // r4@1
  char *v4; // r0@1
  char *v5; // r0@2
  char *v6; // r0@3
  char *v7; // r0@4
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  unsigned int *v13; // r2@14
  signed int v14; // r1@16
  unsigned int *v15; // r2@18
  signed int v16; // r1@20
  char *v17; // [sp+8h] [bp-40h]@3
  char *v18; // [sp+Ch] [bp-3Ch]@3
  int v19; // [sp+10h] [bp-38h]@3
  char *v20; // [sp+18h] [bp-30h]@1
  char *v21; // [sp+1Ch] [bp-2Ch]@1
  int v22; // [sp+20h] [bp-28h]@1

  v2 = a2;
  v3 = a1;
  EntityRenderer::EntityRenderer(a1, a2, 0);
  AppPlatformListener::AppPlatformListener((_QWORD *)v3 + 17);
  *(_DWORD *)v3 = &off_26E6B80;
  *((_DWORD *)v3 + 34) = &off_26E6BB0;
  EnderCrystalModel::EnderCrystalModel((BaseEntityRenderer *)((char *)v3 + 144));
  sub_21E94B4((void **)&v20, "textures/entity/endercrystal/endercrystal");
  v21 = v20;
  v20 = (char *)&unk_28898CC;
  v22 = 0;
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 864), v2, (int)&v21, 0);
  v4 = v21 - 12;
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v21 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = v20 - 12;
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v20 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v17, "textures/entity/endercrystal/endercrystal_beam");
  v18 = v17;
  v17 = (char *)&unk_28898CC;
  v19 = 0;
  mce::TexturePtr::TexturePtr((BaseEntityRenderer *)((char *)v3 + 888), v2, (int)&v18, 0);
  v6 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v18 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = v17 - 12;
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  return v3;
}


int __fastcall EnderCrystalRenderer::render(int a1, BaseEntityRenderContext *a2, int a3)
{
  int v4; // r10@1
  int v5; // r5@1
  int v6; // r0@1
  int v8; // r9@1
  unsigned int v13; // r5@1
  unsigned int v14; // r6@1
  int v15; // r8@1
  int v16; // r0@1
  int v21; // r3@1
  float v23; // [sp+0h] [bp-58h]@0
  int v24; // [sp+4h] [bp-54h]@0
  char v25; // [sp+18h] [bp-40h]@1

  _R7 = a2;
  v4 = a1;
  v5 = a3;
  v6 = BaseEntityRenderContext::getScreenContext(a2);
  _KR00_8 = *(_QWORD *)v5;
  v8 = v6;
  __asm { VLDR            S16, [R7,#4] }
  v13 = *(_DWORD *)(*(_QWORD *)v5 + 3416);
  v14 = *(_DWORD *)(_KR00_8 + 3420);
  v15 = *(_DWORD *)(_KR00_8 + 3424);
  v16 = BaseEntityRenderContext::getWorldMatrix(_R7);
  MatrixStack::push((MatrixStack *)&v25, v16);
  _R5 = _aeabi_ul2f(v15 + v13, (v15 + __PAIR__(v14, v13)) >> 32);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v25);
  __asm
  {
    VMOV            S0, R5
    VLDR            S2, [R0,#4]
    VLDR            S8, [R4]
    VADD.F32        S16, S0, S16
    VLDR            S0, [R0]
    VLDR            S10, [R4,#4]
    VMUL.F32        S2, S2, S8
    VLDR            S14, [R0,#0x14]
    VMUL.F32        S0, S0, S8
    VLDR            S1, [R0,#0x10]
    VLDR            S4, [R0,#8]
    VMUL.F32        S14, S14, S10
    VLDR            S6, [R0,#0xC]
    VMUL.F32        S1, S1, S10
    VLDR            S3, [R0,#0x18]
    VMUL.F32        S4, S4, S8
    VLDR            S5, [R0,#0x1C]
    VMUL.F32        S6, S6, S8
    VLDR            S12, [R4,#8]
    VMUL.F32        S3, S3, S10
    VLDR            S7, [R0,#0x24]
    VMUL.F32        S10, S5, S10
    VLDR            S18, =0.2
    VMUL.F32        S5, S7, S12
    VLDR            S8, [R0,#0x20]
    VMUL.F32        S7, S16, S18
    VADD.F32        S2, S14, S2
    VLDR            S14, [R0,#0x28]
    VADD.F32        S0, S1, S0
    VLDR            S1, [R0,#0x2C]
    VMUL.F32        S8, S8, S12
    VMUL.F32        S14, S14, S12
    VADD.F32        S4, S3, S4
    VADD.F32        S6, S10, S6
    VLDR            S10, [R0,#0x34]
    VMUL.F32        S12, S1, S12
    VMOV            R1, S7
    VADD.F32        S2, S2, S5
    VADD.F32        S0, S0, S8
    VLDR            S8, [R0,#0x30]
    VADD.F32        S4, S4, S14
    VADD.F32        S6, S6, S12
    VLDR            S12, [R0,#0x38]
    VADD.F32        S2, S2, S10
    VLDR            S8, [R0,#0x3C]
    VADD.F32        S4, S4, S12
    VADD.F32        S6, S6, S8
    VSTR            S0, [R0,#0x30]
    VSTR            S2, [R0,#0x34]
    VSTR            S4, [R0,#0x38]
    VSTR            S6, [R0,#0x3C]
  }
  _R5 = mce::Math::sin(_R1, *(float *)&_R1);
  v21 = *((_DWORD *)_R7 + 1);
  EntityShaderManager::_setupShaderParameters(v4, v8, *(float *)&_KR00_8);
    VMOV.F32        S2, #0.5
  *(_DWORD *)(v4 + 176) = v4 + 864;
    VMOV.F32        S4, #3.0
    VMUL.F32        S0, S0, S2
    VADD.F32        S0, S0, S2
    VMUL.F32        S2, S0, S0
    VADD.F32        S0, S2, S0
    VMUL.F32        S2, S16, S4
    VMUL.F32        S0, S0, S18
    VSTR            S2, [SP,#0x58+var_58]
    VSTR            S0, [SP,#0x58+var_54]
  EnderCrystalModel::render(COERCE_FLOAT(v4 + 144), *(float *)&v8, _KR00_8, 0, v23, v24, 0, 0, 1031798784);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v25);
}


void __fastcall EnderCrystalRenderer::renderEffects(int a1, BaseEntityRenderContext *a2, __int64 *a3)
{
  EnderCrystalRenderer::renderEffects(a1, a2, a3);
}


signed int __fastcall EnderCrystalRenderer::tessellateCrystalBeam(EnderCrystalRenderer *this, Tessellator *a2, const Vec3 *a3, const Vec3 *a4)
{
  Tessellator *v10; // r6@1
  signed int result; // r0@11
  float v26; // [sp+8h] [bp-80h]@11
  float v27; // [sp+14h] [bp-74h]@11

  _R10 = a3;
  _R5 = a2;
  __asm { VLDR            S0, [R5] }
  v10 = this;
  __asm
  {
    VLDR            S4, [R10]
    VLDR            S2, [R5,#4]
    VLDR            S6, [R10,#4]
    VSUB.F32        S4, S4, S0
    VLDR            S8, [R5,#8]
    VSUB.F32        S6, S6, S2
    VLDR            S10, [R10,#8]
    VSUB.F32        S2, S10, S8
    VMUL.F32        S0, S4, S4
    VMUL.F32        S8, S6, S6
    VMUL.F32        S10, S2, S2
    VADD.F32        S0, S8, S0
    VADD.F32        S0, S0, S10
    VSQRT.F32       S8, S0
    VLDR            S0, =0.0001
    VCMPE.F32       S8, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    _R0 = &Vec3::ZERO;
    __asm
    {
      VLDR            S4, [R0]
      VLDR            S6, [R0,#4]
      VLDR            S2, [R0,#8]
    }
  else
      VDIV.F32        S2, S2, S8
      VDIV.F32        S6, S6, S8
      VDIV.F32        S4, S4, S8
  _R0 = &Vec3::UNIT_Y;
    VLDR            S8, [R0]
    VLDR            S10, [R0,#4]
    VLDR            S12, [R0,#8]
    VMUL.F32        S14, S8, S6
    VMUL.F32        S1, S10, S4
    VMUL.F32        S3, S12, S4
    VMUL.F32        S8, S8, S2
    VMUL.F32        S10, S10, S2
    VMUL.F32        S12, S12, S6
    VSUB.F32        S14, S1, S14
    VSUB.F32        S8, S8, S3
    VSUB.F32        S10, S12, S10
    VMUL.F32        S12, S14, S6
    VMUL.F32        S14, S14, S4
    VMUL.F32        S1, S8, S2
    VMUL.F32        S5, S8, S4
    VMUL.F32        S3, S10, S2
    VMUL.F32        S7, S10, S6
    VSUB.F32        S8, S1, S12
    VSUB.F32        S10, S14, S3
    VSUB.F32        S12, S7, S5
    VMUL.F32        S14, S8, S8
    VMUL.F32        S1, S10, S10
    VMUL.F32        S3, S12, S12
    VADD.F32        S14, S1, S14
    VADD.F32        S14, S14, S3
    VSQRT.F32       S14, S14
    VCMPE.F32       S14, S0
    *(_QWORD *)&_R1 = *(_QWORD *)&Vec3::ZERO;
    _R0 = dword_2822498;
      VDIV.F32        S12, S12, S14
      VDIV.F32        S10, S10, S14
      VDIV.F32        S8, S8, S14
      VMOV            R0, S12
      VMOV            R2, S10
      VMOV            R1, S8
    VMOV            S16, R2
    VMOV            S18, R1
    VMOV            S20, R0
    VMUL.F32        S8, S18, S6
    VMUL.F32        S10, S16, S4
    VMUL.F32        S12, S16, S2
    VMUL.F32        S6, S20, S6
    VMUL.F32        S14, S20, S4
    VMUL.F32        S1, S18, S2
    VSUB.F32        S4, S10, S8
    VSUB.F32        S2, S6, S12
    VSUB.F32        S6, S1, S14
    VMUL.F32        S8, S4, S4
    VMUL.F32        S12, S6, S6
    VADD.F32        S8, S10, S8
    VADD.F32        S8, S8, S12
    VSQRT.F32       S8, S8
    _R8 = *(_QWORD *)&Vec3::ZERO;
    _R7 = dword_2822498;
      VDIV.F32        S0, S4, S8
      VDIV.F32        S4, S6, S8
      VMOV            R7, S0
      VMOV            R9, S4
      VMOV            R8, S2
  _R4 = 0;
  Tessellator::begin((int)v10, 3, 18, 0);
    VMOV.F32        S30, #0.125
    VMOV.F32        S17, #0.75
    VLDR            S19, =0.2
    VMOV            S24, R9
    VMOV            S26, R8
  _R0 = &mce::Math::TAU;
    VMOV            S22, R7
    VLDR            S28, [R0]
  do
    Tessellator::color(v10, 0.0, 0.0, 0.0, 1.0);
    Tessellator::normal(v10, 0.0, 1.0, 0.0);
    _R0 = _R4 % 8;
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VMUL.F32        S0, S0, S30
      VMUL.F32        S0, S0, S28
    _R0 = sinf(_R7);
    __asm { VMOV            S21, R0 }
    _R0 = cosf(_R7);
      VMOV            S4, R4
      VMUL.F32        S2, S21, S17
      VMUL.F32        S0, S0, S17
      VCVT.F32.S32    S4, S4
      VMUL.F32        S6, S2, S18
      VMUL.F32        S8, S0, S26
      VMUL.F32        S10, S2, S16
      VMUL.F32        S12, S0, S24
      VMUL.F32        S4, S4, S30
      VMUL.F32        S2, S2, S20
      VMUL.F32        S0, S0, S22
      VADD.F32        S21, S8, S6
      VLDR            S6, [R5]
      VLDR            S8, [R5,#4]
      VADD.F32        S23, S12, S10
      VLDR            S10, [R5,#8]
      VMOV            R7, S4
      VADD.F32        S25, S0, S2
      VMUL.F32        S0, S21, S19
      VMUL.F32        S2, S23, S19
      VMUL.F32        S4, S25, S19
      VADD.F32        S0, S0, S6
      VADD.F32        S2, S2, S8
      VADD.F32        S4, S10, S4
      VSTR            S0, [SP,#0x88+var_74]
      VSTR            S2, [SP,#0x88+var_70]
      VSTR            S4, [SP,#0x88+var_6C]
    Tessellator::vertexUV(v10, (const Vec3 *)&v27, _R7);
    Tessellator::color(v10, 1.0, 1.0, 1.0, 1.0);
      VLDR            S0, [R10]
      VLDR            S2, [R10,#4]
      VLDR            S4, [R10,#8]
      VADD.F32        S0, S21, S0
      VADD.F32        S2, S23, S2
      VADD.F32        S4, S25, S4
      VSTR            S0, [SP,#0x88+var_80]
      VSTR            S2, [SP,#0x88+var_7C]
      VSTR            S4, [SP,#0x88+var_78]
    result = Tessellator::vertexUV(v10, (const Vec3 *)&v26, __PAIR__(1065353216, _R7));
    ++_R4;
  while ( _R4 != 9 );
  return result;
}


void __fastcall EnderCrystalRenderer::~EnderCrystalRenderer(EnderCrystalRenderer *this)
{
  EnderCrystalRenderer *v1; // r4@1
  ModelPart *v2; // r6@1
  AppPlatformListener *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E6B80;
  v2 = (EnderCrystalRenderer *)((char *)this + 204);
  *((_DWORD *)this + 34) = &off_26E6BB0;
  v3 = (EnderCrystalRenderer *)((char *)this + 136);
  mce::TexturePtr::~TexturePtr((EnderCrystalRenderer *)((char *)this + 888));
  mce::TexturePtr::~TexturePtr((EnderCrystalRenderer *)((char *)v1 + 864));
  *((_DWORD *)v1 + 36) = &off_26E82FC;
  ModelPart::~ModelPart((EnderCrystalRenderer *)((char *)v1 + 644));
  ModelPart::~ModelPart((EnderCrystalRenderer *)((char *)v1 + 424));
  ModelPart::~ModelPart(v2);
  mce::MaterialPtr::~MaterialPtr((EnderCrystalRenderer *)((char *)v1 + 192));
  Model::~Model((EnderCrystalRenderer *)((char *)v1 + 144));
  AppPlatformListener::~AppPlatformListener(v3);
  EntityRenderer::~EntityRenderer(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


BaseEntityRenderer *__fastcall EnderCrystalRenderer::~EnderCrystalRenderer(EnderCrystalRenderer *this)
{
  EnderCrystalRenderer *v1; // r4@1
  ModelPart *v2; // r6@1
  AppPlatformListener *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E6B80;
  v2 = (EnderCrystalRenderer *)((char *)this + 204);
  *((_DWORD *)this + 34) = &off_26E6BB0;
  v3 = (EnderCrystalRenderer *)((char *)this + 136);
  mce::TexturePtr::~TexturePtr((EnderCrystalRenderer *)((char *)this + 888));
  mce::TexturePtr::~TexturePtr((EnderCrystalRenderer *)((char *)v1 + 864));
  *((_DWORD *)v1 + 36) = &off_26E82FC;
  ModelPart::~ModelPart((EnderCrystalRenderer *)((char *)v1 + 644));
  ModelPart::~ModelPart((EnderCrystalRenderer *)((char *)v1 + 424));
  ModelPart::~ModelPart(v2);
  mce::MaterialPtr::~MaterialPtr((EnderCrystalRenderer *)((char *)v1 + 192));
  Model::~Model((EnderCrystalRenderer *)((char *)v1 + 144));
  AppPlatformListener::~AppPlatformListener(v3);
  return j_j_j__ZN14EntityRendererD2Ev_0(v1);
}
