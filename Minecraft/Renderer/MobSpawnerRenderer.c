

void __fastcall MobSpawnerRenderer::~MobSpawnerRenderer(MobSpawnerRenderer *this)
{
  MobSpawnerRenderer::~MobSpawnerRenderer(this);
}


Entity *__fastcall MobSpawnerRenderer::render(MobSpawnerRenderer *this, BaseEntityRenderContext *a2, BlockEntityRenderData *a3)
{
  BlockSource *v3; // r4@1
  BaseMobSpawner *v6; // r0@1
  BaseMobSpawner *v7; // r7@1
  Entity *result; // r0@1
  int v11; // r0@2
  float *v17; // r1@2
  int v18; // r0@4
  int v20; // r6@4
  int v24; // r6@4
  int v27; // r0@4
  float v28; // [sp+Ch] [bp-A4h]@4
  char v29; // [sp+18h] [bp-98h]@4
  int v30; // [sp+20h] [bp-90h]@2
  float v31; // [sp+24h] [bp-8Ch]@2
  char v32; // [sp+28h] [bp-88h]@2
  int v33; // [sp+30h] [bp-80h]@4
  signed int v34; // [sp+34h] [bp-7Ch]@4
  int v35; // [sp+38h] [bp-78h]@4
  int v36; // [sp+3Ch] [bp-74h]@4
  int v37; // [sp+40h] [bp-70h]@4
  int v38; // [sp+44h] [bp-6Ch]@4
  int v39; // [sp+48h] [bp-68h]@4
  int v40; // [sp+4Ch] [bp-64h]@4
  int v41; // [sp+50h] [bp-60h]@4
  int v42; // [sp+54h] [bp-5Ch]@4
  int v43; // [sp+58h] [bp-58h]@4
  int v44; // [sp+5Ch] [bp-54h]@4
  int v45; // [sp+60h] [bp-50h]@4
  int v46; // [sp+64h] [bp-4Ch]@4
  int v47; // [sp+68h] [bp-48h]@4
  int v48; // [sp+6Ch] [bp-44h]@4
  int v49; // [sp+70h] [bp-40h]@4
  int v50; // [sp+74h] [bp-3Ch]@4
  int v51; // [sp+78h] [bp-38h]@4
  float v52; // [sp+7Ch] [bp-34h]@4

  v3 = (BlockSource *)*(_QWORD *)a3;
  _R10 = a2;
  _R11 = *((_DWORD *)a3 + 2);
  v6 = (BaseMobSpawner *)MobSpawnerBlockEntity::getSpawner((MobSpawnerBlockEntity *)(*(_QWORD *)a3 >> 32));
  v7 = v6;
  result = (Entity *)BaseMobSpawner::getDisplayEntity(v6, v3);
  _R9 = result;
  if ( result )
  {
    _R8 = BaseEntityRenderContext::getCameraTargetPosition(_R10);
    v11 = BaseEntityRenderContext::getWorldMatrix(_R10);
    MatrixStack::push((MatrixStack *)&v32, v11);
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v32);
    __asm
    {
      VMOV.F32        S0, #0.5
      VLDR            S2, [R11]
      VLDR            S4, [R11,#4]
    }
    v17 = &v31;
      VLDR            S1, [R0,#0x10]
      VLDR            S6, [R11,#8]
      VLDR            S8, [R0]
      VMUL.F32        S1, S1, S4
      VLDR            S7, [R0,#0x14]
      VLDR            S10, [R0,#4]
      VADD.F32        S2, S2, S0
      VLDR            S12, [R0,#8]
      VADD.F32        S0, S6, S0
      VLDR            S14, [R0,#0xC]
      VLDR            S3, [R0,#0x18]
      VMUL.F32        S7, S7, S4
      VLDR            S5, [R0,#0x1C]
      VMUL.F32        S8, S8, S2
      VMUL.F32        S6, S10, S2
      VMUL.F32        S10, S5, S4
      VLDR            S5, [R0,#0x20]
      VMUL.F32        S4, S3, S4
      VLDR            S3, [R0,#0x24]
      VMUL.F32        S12, S12, S2
      VMUL.F32        S2, S14, S2
      VMUL.F32        S14, S3, S0
      VMUL.F32        S3, S5, S0
      VLDR            S5, [R0,#0x28]
      VADD.F32        S8, S1, S8
      VLDR            S1, [R0,#0x2C]
      VADD.F32        S6, S7, S6
      VMUL.F32        S5, S5, S0
      VADD.F32        S4, S4, S12
      VLDR            S12, [R0,#0x38]
      VADD.F32        S2, S10, S2
      VLDR            S10, [R0,#0x34]
      VMUL.F32        S0, S1, S0
      VADD.F32        S8, S8, S3
      VADD.F32        S6, S6, S14
      VADD.F32        S4, S4, S5
      VADD.F32        S0, S2, S0
      VLDR            S2, [R0,#0x30]
      VADD.F32        S2, S8, S2
      VLDR            S8, [R0,#0x3C]
      VADD.F32        S6, S6, S10
      VADD.F32        S0, S0, S8
      VSTR            S2, [R0,#0x30]
      VSTR            S6, [R0,#0x34]
      VSTR            S4, [R0,#0x38]
      VMOV.F32        S4, #1.0
      VSTR            S0, [R0,#0x3C]
      VLDR            S0, [R9,#0x130]
      VLDR            S2, [R9,#0x134]
    v30 = 1065353216;
      VDIV.F32        S0, S4, S0
      VCMPE.F32       S0, S4
      VSTR            S0, [SP,#0xB0+var_8C]
      VMRS            APSR_nzcv, FPSCR
    if ( !(_NF ^ _VF) )
      v17 = (float *)&v30;
    v31 = *v17;
    v18 = BaseEntityRenderContext::getWorldMatrix(_R10);
    MatrixStack::push((MatrixStack *)&v29, v18);
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v29);
      VLDR            S16, =0.4
      VLDR            S0, [R0,#0x14]
      VLDR            S2, [R0,#0x18]
      VLDR            S4, [R0,#0x1C]
      VMUL.F32        S0, S0, S16
      VLDR            S6, [R0,#0x10]
      VMUL.F32        S2, S2, S16
      VMUL.F32        S4, S4, S16
      VMUL.F32        S6, S6, S16
      VLDR            S8, [R0,#0x30]
      VLDR            S14, [R0,#0x3C]
      VADD.F32        S0, S10, S0
      VADD.F32        S2, S12, S2
      VADD.F32        S4, S14, S4
      VADD.F32        S6, S8, S6
      VSTR            S6, [R0,#0x30]
      VSTR            S0, [R0,#0x34]
      VSTR            S2, [R0,#0x38]
      VSTR            S4, [R0,#0x3C]
    v20 = MatrixStack::MatrixStackRef::operator->((int)&v29);
    _R5 = BaseMobSpawner::getOSpin(v7);
    _R4 = BaseMobSpawner::getSpin(v7);
    _R0 = BaseMobSpawner::getOSpin(v7);
      VMOV            S2, R4
      VMOV            S4, R0
      VMOV            S0, R5
      VSUB.F32        S2, S2, S4
      VLDR            S4, [R10,#4]
    v33 = 0;
    v34 = 1065353216;
    v35 = 0;
      VMUL.F32        S2, S4, S2
      VMOV.F32        S4, #10.0
      VMUL.F32        S0, S0, S4
      VSTR            S0, [SP,#0xB0+var_34]
    glm::rotate<float>((int)&v36, v20, (int)&v52, (int)&v33);
    *(_DWORD *)v20 = v36;
    *(_DWORD *)(v20 + 4) = v37;
    *(_DWORD *)(v20 + 8) = v38;
    *(_DWORD *)(v20 + 12) = v39;
    *(_DWORD *)(v20 + 16) = v40;
    *(_DWORD *)(v20 + 20) = v41;
    *(_DWORD *)(v20 + 24) = v42;
    *(_DWORD *)(v20 + 28) = v43;
    *(_DWORD *)(v20 + 32) = v44;
    *(_DWORD *)(v20 + 36) = v45;
    *(_DWORD *)(v20 + 40) = v46;
    *(_DWORD *)(v20 + 44) = v47;
    *(_DWORD *)(v20 + 48) = v48;
    *(_DWORD *)(v20 + 52) = v49;
    *(_DWORD *)(v20 + 56) = v50;
    *(_DWORD *)(v20 + 60) = v51;
    v24 = MatrixStack::MatrixStackRef::operator->((int)&v29);
    v33 = 1065353216;
    v34 = 0;
    v52 = -30.0;
    glm::rotate<float>((int)&v36, v24, (int)&v52, (int)&v33);
    *(_DWORD *)v24 = v36;
    *(_DWORD *)(v24 + 4) = v37;
    *(_DWORD *)(v24 + 8) = v38;
    *(_DWORD *)(v24 + 12) = v39;
    *(_DWORD *)(v24 + 16) = v40;
    *(_DWORD *)(v24 + 20) = v41;
    *(_DWORD *)(v24 + 24) = v42;
    *(_DWORD *)(v24 + 28) = v43;
    *(_DWORD *)(v24 + 32) = v44;
    *(_DWORD *)(v24 + 36) = v45;
    *(_DWORD *)(v24 + 40) = v46;
    *(_DWORD *)(v24 + 44) = v47;
    *(_DWORD *)(v24 + 48) = v48;
    *(_DWORD *)(v24 + 52) = v49;
    *(_DWORD *)(v24 + 56) = v50;
    *(_DWORD *)(v24 + 60) = v51;
      VSUB.F32        S0, S10, S0
      VSUB.F32        S2, S12, S2
      VSUB.F32        S4, S14, S4
      VSUB.F32        S6, S8, S6
      VLDR            S0, [SP,#0xB0+var_8C]
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
      VLDR            S0, [R11]
      VLDR            S6, [R8]
      VLDR            S2, [R11,#4]
      VLDR            S8, [R8,#4]
      VLDR            S4, [R11,#8]
      VLDR            S10, [R8,#8]
      VADD.F32        S4, S10, S4
      VSTR            S0, [SP,#0xB0+var_A4]
      VSTR            S2, [SP,#0xB0+var_A0]
      VSTR            S4, [SP,#0xB0+var_9C]
    Entity::moveTo((int)_R9, (int)&v28);
    v27 = BaseEntityRenderContext::getEntityRenderDispatcher(_R10);
    EntityRenderDispatcher::render(v27, (int)_R10, _R9, (int)&Vec3::ZERO, (int)&Vec2::ZERO);
    MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v29);
    result = (Entity *)MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v32);
  }
  return result;
}


void __fastcall MobSpawnerRenderer::~MobSpawnerRenderer(MobSpawnerRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)BlockEntityRenderer::~BlockEntityRenderer(this);
  j_j_j__ZdlPv_4(v1);
}
