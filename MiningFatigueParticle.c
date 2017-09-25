

int __fastcall MiningFatigueParticle::normalTick(int result)
{
  signed int v1; // r1@1

  v1 = *(_DWORD *)(result + 4);
  *(_DWORD *)(result + 4) = v1 + 1;
  if ( v1 >= 49 )
    *(_BYTE *)(result + 8) = 1;
  return result;
}


int __fastcall MiningFatigueParticle::MiningFatigueParticle(int result)
{
  *(_QWORD *)result = (unsigned int)&off_26E66A4;
  *(_BYTE *)(result + 8) = 0;
  return result;
}


int __fastcall MiningFatigueParticle::render(MiningFatigueParticle *this, BaseEntityRenderContext *a2, const Vec3 *a3, float a4)
{
  int v6; // r2@2
  int v7; // r0@2
  void *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  Guardian *v11; // r0@8
  int v12; // r9@9
  int v13; // r0@9
  int v18; // r0@9
  int v19; // r7@9
  int v20; // r7@9
  int v21; // r7@9
  int v23; // r7@9
  float v25; // r1@9
  Entity *v27; // r2@9
  unsigned int *v29; // r2@10
  signed int v30; // r1@12
  unsigned int *v31; // r2@14
  signed int v32; // r1@16
  unsigned int *v33; // r2@18
  signed int v34; // r1@20
  int v35; // [sp+4h] [bp-ACh]@9
  signed int v36; // [sp+8h] [bp-A8h]@9
  int v37; // [sp+Ch] [bp-A4h]@9
  float v38; // [sp+10h] [bp-A0h]@9
  char v40; // [sp+18h] [bp-98h]@9
  int v41; // [sp+20h] [bp-90h]@2
  int v42; // [sp+24h] [bp-8Ch]@6
  int v43; // [sp+28h] [bp-88h]@5
  int v44; // [sp+2Ch] [bp-84h]@2
  int v45; // [sp+30h] [bp-80h]@9
  signed int v46; // [sp+34h] [bp-7Ch]@9
  int v47; // [sp+38h] [bp-78h]@9
  int v48; // [sp+3Ch] [bp-74h]@9
  int v49; // [sp+40h] [bp-70h]@9
  int v50; // [sp+44h] [bp-6Ch]@9
  int v51; // [sp+48h] [bp-68h]@9
  int v52; // [sp+4Ch] [bp-64h]@9
  int v53; // [sp+50h] [bp-60h]@9
  int v54; // [sp+54h] [bp-5Ch]@9
  int v55; // [sp+58h] [bp-58h]@9
  int v56; // [sp+5Ch] [bp-54h]@9
  int v57; // [sp+60h] [bp-50h]@9
  int v58; // [sp+64h] [bp-4Ch]@9
  int v59; // [sp+68h] [bp-48h]@9
  int v60; // [sp+6Ch] [bp-44h]@9
  int v61; // [sp+70h] [bp-40h]@9
  int v62; // [sp+74h] [bp-3Ch]@9
  int v63; // [sp+78h] [bp-38h]@9
  float v64; // [sp+7Ch] [bp-34h]@9

  _R8 = this;
  _R4 = a2;
  if ( !MiningFatigueParticle::mDummyGuardian )
  {
    EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v41, 2866);
    EntityFactory::createSpawnedEntity((Entity **)&v44, (const void **)&v41, 0, (int)&Vec3::ZERO, &Vec2::ZERO);
    v6 = v44;
    v44 = 0;
    v7 = MiningFatigueParticle::mDummyGuardian;
    MiningFatigueParticle::mDummyGuardian = v6;
    if ( v7 )
    {
      (*(void (**)(void))(*(_DWORD *)v7 + 32))();
      if ( v44 )
        (*(void (**)(void))(*(_DWORD *)v44 + 32))();
    }
    v8 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v43 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
      }
      else
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    v9 = (void *)(v42 - 12);
    if ( (int *)(v42 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v42 - 4);
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    v10 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v41 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    v11 = (Guardian *)MiningFatigueParticle::mDummyGuardian;
    *(_BYTE *)(MiningFatigueParticle::mDummyGuardian + 228) = 1;
    Guardian::setElderGhost(v11);
  }
  v12 = BaseEntityRenderContext::getEntityRenderDispatcher(_R4);
  v13 = BaseEntityRenderContext::getWorldMatrix(_R4);
  MatrixStack::push((MatrixStack *)&v40, v13);
  __asm
    VLDR            S0, [R8,#4]
    VCVT.F32.S32    S16, S0
    VLDR            S18, [R4,#4]
  v18 = BaseEntityRenderContext::getCameraEntity(_R4);
  Entity::getRotation((Entity *)&v38, v18);
  v19 = MatrixStack::MatrixStackRef::operator->((int)&v40);
    VLDR            S0, [SP,#0xB0+var_9C]
    VLDR            S2, =180.0
    VSUB.F32        S0, S2, S0
  v45 = 0;
  v46 = 1065353216;
  v47 = 0;
  __asm { VSTR            S0, [SP,#0xB0+var_34] }
  glm::rotate<float>((int)&v48, v19, (int)&v64, (int)&v45);
  *(_DWORD *)v19 = v48;
  *(_DWORD *)(v19 + 4) = v49;
  *(_DWORD *)(v19 + 8) = v50;
  *(_DWORD *)(v19 + 12) = v51;
  *(_DWORD *)(v19 + 16) = v52;
  *(_DWORD *)(v19 + 20) = v53;
  *(_DWORD *)(v19 + 24) = v54;
  *(_DWORD *)(v19 + 28) = v55;
  *(_DWORD *)(v19 + 32) = v56;
  *(_DWORD *)(v19 + 36) = v57;
  *(_DWORD *)(v19 + 40) = v58;
  *(_DWORD *)(v19 + 44) = v59;
  *(_DWORD *)(v19 + 48) = v60;
  *(_DWORD *)(v19 + 52) = v61;
  *(_DWORD *)(v19 + 56) = v62;
  *(_DWORD *)(v19 + 60) = v63;
  v20 = MatrixStack::MatrixStackRef::operator->((int)&v40);
    VLDR            S0, [SP,#0xB0+var_A0]
    VNEG.F32        S0, S0
  v45 = 1065353216;
  v46 = 0;
  glm::rotate<float>((int)&v48, v20, (int)&v64, (int)&v45);
  *(_DWORD *)v20 = v48;
  *(_DWORD *)(v20 + 4) = v49;
  *(_DWORD *)(v20 + 8) = v50;
  *(_DWORD *)(v20 + 12) = v51;
  *(_DWORD *)(v20 + 16) = v52;
  *(_DWORD *)(v20 + 20) = v53;
  *(_DWORD *)(v20 + 24) = v54;
  *(_DWORD *)(v20 + 28) = v55;
  *(_DWORD *)(v20 + 32) = v56;
  *(_DWORD *)(v20 + 36) = v57;
  *(_DWORD *)(v20 + 40) = v58;
  *(_DWORD *)(v20 + 44) = v59;
  *(_DWORD *)(v20 + 48) = v60;
  *(_DWORD *)(v20 + 52) = v61;
  *(_DWORD *)(v20 + 56) = v62;
  *(_DWORD *)(v20 + 60) = v63;
  v21 = MatrixStack::MatrixStackRef::operator->((int)&v40);
    VADD.F32        S18, S16, S18
    VLDR            S0, =0.04
    VMOV.F32        S2, #-1.0
    VMUL.F32        S0, S18, S0
    VADD.F32        S0, S0, S2
    VMUL.F32        S2, S0, S0
    VMUL.F32        S16, S2, S0
    VLDR            S0, =90.0
    VMUL.F32        S0, S16, S0
    VSTR            S0, [SP,#0xB0+var_34]
  glm::rotate<float>((int)&v48, v21, (int)&v64, (int)&v45);
  *(_DWORD *)v21 = v48;
  *(_DWORD *)(v21 + 4) = v49;
  *(_DWORD *)(v21 + 8) = v50;
  *(_DWORD *)(v21 + 12) = v51;
  *(_DWORD *)(v21 + 16) = v52;
  *(_DWORD *)(v21 + 20) = v53;
  *(_DWORD *)(v21 + 24) = v54;
  *(_DWORD *)(v21 + 28) = v55;
  *(_DWORD *)(v21 + 32) = v56;
  *(_DWORD *)(v21 + 36) = v57;
  *(_DWORD *)(v21 + 40) = v58;
  *(_DWORD *)(v21 + 44) = v59;
  *(_DWORD *)(v21 + 48) = v60;
  *(_DWORD *)(v21 + 52) = v61;
  *(_DWORD *)(v21 + 56) = v62;
  *(_DWORD *)(v21 + 60) = v63;
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v40);
    VMOV.F32        S0, #0.5
    VLDR            S4, [R0,#0x14]
    VMOV.F32        S2, #-3.0
    VLDR            S6, [R0,#0x18]
    VLDR            S10, [R0,#0x20]
    VLDR            S12, [R0,#0x24]
    VLDR            S14, [R0,#0x28]
    VLDR            S3, [R0,#0x10]
    VLDR            S8, [R0,#0x1C]
    VLDR            S1, [R0,#0x2C]
    VMUL.F32        S4, S4, S0
    VMUL.F32        S12, S12, S2
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
  v23 = MatrixStack::MatrixStackRef::operator->((int)&v40);
  __asm { VMOV            R0, S18 }
  _R0 = mce::Math::sin(_R0, v25);
    VMOV.F32        S0, #1.0
    VABS.F32        S2, S16
    VSUB.F32        S0, S0, S2
    VMOV            S2, R0
  v47 = 1065353216;
    VADD.F32        S2, S2, S2
    VMUL.F32        S0, S0, S0
    VMUL.F32        S0, S0, S2
  glm::rotate<float>((int)&v48, v23, (int)&v64, (int)&v45);
  *(_DWORD *)v23 = v48;
  *(_DWORD *)(v23 + 4) = v49;
  *(_DWORD *)(v23 + 8) = v50;
  *(_DWORD *)(v23 + 12) = v51;
  *(_DWORD *)(v23 + 16) = v52;
  *(_DWORD *)(v23 + 20) = v53;
  *(_DWORD *)(v23 + 24) = v54;
  *(_DWORD *)(v23 + 28) = v55;
  *(_DWORD *)(v23 + 32) = v56;
  *(_DWORD *)(v23 + 36) = v57;
  *(_DWORD *)(v23 + 40) = v58;
  *(_DWORD *)(v23 + 44) = v59;
  *(_DWORD *)(v23 + 48) = v60;
  *(_DWORD *)(v23 + 52) = v61;
  *(_DWORD *)(v23 + 56) = v62;
  *(_DWORD *)(v23 + 60) = v63;
  v27 = (Entity *)MiningFatigueParticle::mDummyGuardian;
  *(_DWORD *)(MiningFatigueParticle::mDummyGuardian + 416) = *((_DWORD *)_R8 + 1);
  v35 = 0;
  v36 = 1072064102;
  v37 = 0;
  EntityRenderDispatcher::render(v12, (int)_R4, v27, (int)&v35, (int)&Vec2::ZERO);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v40);
}
