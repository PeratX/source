

int __fastcall EnderDragonRenderer::_getOverlayColor(int result, Entity *a2, float a3, int _R3)
{
  __asm { VMOV            S0, R3 }
  if ( *(Entity **)(*((_DWORD *)a2 + 35) + 28) != (Entity *)((char *)a2 + 716)
    || (_R12 = *(_DWORD *)(LODWORD(a3) + 3448), _R12 <= 1) )
  {
    result = EntityShaderManager::_getOverlayColor((EntityShaderManager *)result, a2, a3);
  }
  else
    __asm
    {
      VMOV            S2, R12
      VCVT.F32.S32    S2, S2
      VADD.F32        S0, S2, S0
      VLDR            S2, =-0.01
      VMUL.F32        S0, S0, S2
      VLDR            S2, =2.3
      VADD.F32        S0, S0, S2
      VSTR            S0, [R0,#0xC]
    }
    *(_DWORD *)result = 1065353216;
    *(_DWORD *)(result + 4) = 1065353216;
    *(_DWORD *)(result + 8) = 1065353216;
  return result;
}


int __fastcall EnderDragonRenderer::setupRotations(int a1, float a2, int a3, int a4, int a5, int a6)
{
  int v10; // r4@1
  int result; // r0@7
  void *v19; // [sp+4h] [bp-9Ch]@3
  void *v20; // [sp+10h] [bp-90h]@3
  void *ptr; // [sp+1Ch] [bp-84h]@1
  int v22; // [sp+28h] [bp-78h]@7
  signed int v23; // [sp+2Ch] [bp-74h]@7
  int v24; // [sp+30h] [bp-70h]@7
  int v25; // [sp+34h] [bp-6Ch]@7
  int v26; // [sp+38h] [bp-68h]@7
  int v27; // [sp+3Ch] [bp-64h]@7
  int v28; // [sp+40h] [bp-60h]@7
  int v29; // [sp+44h] [bp-5Ch]@7
  int v30; // [sp+48h] [bp-58h]@7
  int v31; // [sp+4Ch] [bp-54h]@7
  int v32; // [sp+50h] [bp-50h]@7
  int v33; // [sp+54h] [bp-4Ch]@7
  int v34; // [sp+58h] [bp-48h]@7
  int v35; // [sp+5Ch] [bp-44h]@7
  int v36; // [sp+60h] [bp-40h]@7
  int v37; // [sp+64h] [bp-3Ch]@7
  int v38; // [sp+68h] [bp-38h]@7
  int v39; // [sp+6Ch] [bp-34h]@7
  int v40; // [sp+70h] [bp-30h]@7
  float v41; // [sp+74h] [bp-2Ch]@7

  __asm { VLDR            S0, [SP,#0xA0+arg_4] }
  v10 = LODWORD(a2);
  __asm { VMOV            R5, S0 }
  EnderDragon::getLatencyPos((EnderDragon *)&ptr, SLODWORD(a2), COERCE_FLOAT(7), _R5);
  _R0 = ptr;
  __asm { VLDR            S18, [R0] }
  if ( !_ZF )
    operator delete(ptr);
  EnderDragon::getLatencyPos((EnderDragon *)&v20, v10, COERCE_FLOAT(5), _R5);
  _R0 = v20;
  __asm { VLDR            S16, [R0,#4] }
  EnderDragon::getLatencyPos((EnderDragon *)&v19, v10, COERCE_FLOAT(10), _R5);
  _R0 = v19;
  __asm { VLDR            S20, [R0,#4] }
    operator delete(v19);
  __asm { VSUB.F32        S16, S16, S20 }
  if ( v20 )
    operator delete(v20);
  __asm { VNEG.F32        S0, S18 }
  v22 = 0;
  v23 = 1065353216;
  v24 = 0;
  __asm { VSTR            S0, [SP,#0xA0+var_2C] }
  glm::rotate<float>((int)&v25, a5, (int)&v41, (int)&v22);
  __asm { VMOV.F32        S0, #10.0 }
  *(_DWORD *)a5 = v25;
  *(_DWORD *)(a5 + 4) = v26;
  *(_DWORD *)(a5 + 8) = v27;
  *(_DWORD *)(a5 + 12) = v28;
  __asm { VMUL.F32        S0, S16, S0 }
  *(_DWORD *)(a5 + 16) = v29;
  *(_DWORD *)(a5 + 20) = v30;
  *(_DWORD *)(a5 + 24) = v31;
  *(_DWORD *)(a5 + 28) = v32;
  *(_DWORD *)(a5 + 32) = v33;
  *(_DWORD *)(a5 + 36) = v34;
  *(_DWORD *)(a5 + 40) = v35;
  *(_DWORD *)(a5 + 44) = v36;
  *(_DWORD *)(a5 + 48) = v37;
  *(_DWORD *)(a5 + 52) = v38;
  *(_DWORD *)(a5 + 56) = v39;
  *(_DWORD *)(a5 + 60) = v40;
  v22 = 1065353216;
  v23 = 0;
  result = v33;
  _R1 = v34;
  __asm { VMOV            S0, R0 }
  _R2 = v35;
  __asm { VMOV            S10, R1 }
  _R3 = v36;
  __asm
  {
    VMOV            S12, R2
    VLDR            S2, [SP,#0xA0+var_3C]
    VLDR            S4, [SP,#0xA0+var_38]
    VLDR            S6, [SP,#0xA0+var_34]
    VADD.F32        S0, S2, S0
    VLDR            S8, [SP,#0xA0+var_30]
    VMOV            S2, R3
    VADD.F32        S4, S4, S10
    VADD.F32        S6, S6, S12
    VADD.F32        S2, S8, S2
    VSTR            S0, [R4,#0x30]
    VSTR            S4, [R4,#0x34]
    VSTR            S6, [R4,#0x38]
    VSTR            S2, [R4,#0x3C]
  }
  return result;
}


int __fastcall EnderDragonRenderer::renderEffects(int a1, BaseEntityRenderContext *a2, __int64 *a3)
{
  BaseEntityRenderContext *v3; // r6@1
  __int64 *v5; // r4@1
  int v6; // r0@1
  EnderCrystalRenderer *v8; // r11@1
  int v9; // r4@1
  const Vec3 *v15; // r3@2
  void *v16; // r0@2
  int result; // r0@3
  unsigned int v19; // r0@4
  signed int v20; // r2@4
  int v21; // r1@8
  int v22; // r0@11
  int *v23; // r7@11
  int v24; // r5@11
  int v25; // r0@12
  unsigned int *v29; // r2@14
  signed int v30; // r1@16
  int v31; // r6@22
  int v33; // r6@22
  int v35; // r6@22
  int v37; // r6@22
  int v39; // r6@22
  int v41; // r10@22
  float v45; // ST00_4@22
  float v46; // ST00_4@22
  void *v48; // r0@22
  unsigned int *v49; // r2@26
  signed int v50; // r1@28
  float v51; // [sp+0h] [bp-B70h]@0
  int v52; // [sp+2Ch] [bp-B44h]@1
  BaseEntityRenderContext *v53; // [sp+30h] [bp-B40h]@1
  int v54; // [sp+34h] [bp-B3Ch]@1
  int v55; // [sp+3Ch] [bp-B34h]@14
  char v56; // [sp+40h] [bp-B30h]@22
  int v57; // [sp+4Ch] [bp-B24h]@22
  float v58; // [sp+58h] [bp-B18h]@22
  float v59; // [sp+64h] [bp-B0Ch]@22
  int v60; // [sp+70h] [bp-B00h]@22
  int v61; // [sp+74h] [bp-AFCh]@22
  int v62; // [sp+78h] [bp-AF8h]@22
  char v63; // [sp+7Ch] [bp-AF4h]@12
  int v64; // [sp+84h] [bp-AECh]@8
  int v65; // [sp+88h] [bp-AE8h]@10
  int v66; // [sp+A48h] [bp-128h]@8
  char v67; // [sp+A4Ch] [bp-124h]@10
  int v68; // [sp+A50h] [bp-120h]@10
  int v69; // [sp+A54h] [bp-11Ch]@12
  int v70; // [sp+A5Ch] [bp-114h]@2
  char v71; // [sp+A60h] [bp-110h]@2
  int v72; // [sp+A6Ch] [bp-104h]@2
  char v73; // [sp+A70h] [bp-100h]@1
  int v74; // [sp+A74h] [bp-FCh]@2
  int v75; // [sp+A78h] [bp-F8h]@2
  char v76; // [sp+A7Ch] [bp-F4h]@2
  char v77; // [sp+A88h] [bp-E8h]@2
  char v78; // [sp+A94h] [bp-DCh]@2
  char v79; // [sp+AA0h] [bp-D0h]@2
  char v80; // [sp+AACh] [bp-C4h]@2
  int v81; // [sp+AB8h] [bp-B8h]@22
  int v82; // [sp+ABCh] [bp-B4h]@22
  int v83; // [sp+AC0h] [bp-B0h]@22
  int v84; // [sp+AC4h] [bp-ACh]@22
  int v85; // [sp+AC8h] [bp-A8h]@22
  int v86; // [sp+ACCh] [bp-A4h]@22
  int v87; // [sp+AD0h] [bp-A0h]@22
  int v88; // [sp+AD4h] [bp-9Ch]@22
  int v89; // [sp+AD8h] [bp-98h]@22
  int v90; // [sp+ADCh] [bp-94h]@22
  int v91; // [sp+AE0h] [bp-90h]@22
  int v92; // [sp+AE4h] [bp-8Ch]@22
  int v93; // [sp+AE8h] [bp-88h]@22
  int v94; // [sp+AECh] [bp-84h]@22
  int v95; // [sp+AF0h] [bp-80h]@22
  int v96; // [sp+AF4h] [bp-7Ch]@22
  int v97; // [sp+AF8h] [bp-78h]@22
  int v98; // [sp+AFCh] [bp-74h]@22
  int v99; // [sp+B00h] [bp-70h]@22
  char v100; // [sp+B04h] [bp-6Ch]@22

  v3 = a2;
  _R5 = &v73;
  v52 = a1;
  v53 = a2;
  v5 = a3;
  v54 = BaseEntityRenderContext::getScreenContext(a2);
  v6 = BaseEntityRenderContext::getTessellator(v3);
  _KR00_8 = *v5;
  v8 = (EnderCrystalRenderer *)v6;
  v9 = EnderDragon::getNearestCrystal((EnderDragon *)*v5);
  if ( v9 )
  {
    _R6 = v53;
    Entity::getInterpolatedPosition((Entity *)&v80, *(float *)&_KR00_8, *((_DWORD *)v53 + 1));
    __asm
    {
      VLDR            S16, [R8]
      VLDR            S18, [R8,#4]
      VLDR            S20, [R8,#8]
      VLDR            S22, [R5,#0x3C]
      VLDR            S24, [R5,#0x40]
      VLDR            S26, [R5,#0x44]
    }
    Entity::getInterpolatedPosition((Entity *)&v78, *(float *)&_KR00_8, *((_DWORD *)v53 + 1));
      VSUB.F32        S16, S16, S22
      VLDR            S0, [R5,#0x24]
      VSUB.F32        S18, S18, S24
      VLDR            S2, [R5,#0x28]
      VSUB.F32        S20, S20, S26
      VLDR            S4, [R5,#0x2C]
      VADD.F32        S0, S0, S16
      VADD.F32        S2, S2, S18
      VADD.F32        S4, S4, S20
      VSTR            S0, [R5,#0x30]
      VSTR            S2, [R5,#0x34]
      VSTR            S4, [R5,#0x38]
    Entity::getInterpolatedPosition((Entity *)&v76, *(float *)&v9, *((_DWORD *)v53 + 1));
      VLDR            S0, [R5,#0xC]
      VLDR            S2, [R5,#0x10]
      VLDR            S4, [R5,#0x14]
      VSTR            S0, [R5,#0x18]
      VSTR            S2, [R5,#0x1C]
      VSTR            S4, [R5,#0x20]
    EnderCrystalRenderer::tessellateCrystalBeam(v8, (Tessellator *)&v79, (const Vec3 *)&v77, v15);
      VLDR            S0, [R10,#0x1A0]
      VLDR            S4, =0.01
      VCVT.F32.S32    S0, S0
      VLDR            S2, [R6,#4]
    v72 = 0;
      VADD.F32        S0, S0, S2
      VMUL.F32        S0, S0, S4
      VSTR            S0, [R5]
    v74 = 1065353216;
    v75 = 1065353216;
    __asm { VSTR            S2, [SP,#0xB70+var_B70] }
    EntityShaderManager::_setupShaderParameters(
      v52,
      v54,
      *(float *)&_KR00_8,
      COERCE_FLOAT(&Color::NIL),
      SLODWORD(v51),
      (int)&v72);
    sub_21E94B4((void **)&v70, "entity_beam");
    mce::MaterialPtr::MaterialPtr(
      (mce::MaterialPtr *)&v71,
      (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
      &v70);
    Tessellator::draw((char *)v8, v54, (int)&v71, v52 + 692);
    mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v71);
    v16 = (void *)(v70 - 12);
    if ( (int *)(v70 - 12) != &dword_28898C0 )
      v49 = (unsigned int *)(v70 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v50 = __ldrex(v49);
        while ( __strex(v50 - 1, v49) );
      }
      else
        v50 = (*v49)--;
      if ( v50 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
  }
  result = *(_DWORD *)(_KR00_8 + 3448);
  if ( result >= 2 )
      VMOV            S0, R0
      VLDR            S4, =0.005
      VMOV.F32        S22, #0.5
      VLDR            S18, =0.0
    _R0 = v53;
      VMOV.F32        S6, S18
      VLDR            S2, [R0,#4]
    v19 = 432;
    v20 = 1;
      VADD.F32        S20, S2, S0
      VLDR            S0, =0.0125
      VMOV.F32        S2, #-1.5
      VMUL.F32        S16, S20, S4
      VLDR            S4, =0.8
      VMUL.F32        S0, S20, S0
      VCMPE.F32       S16, S4
      VMRS            APSR_nzcv, FPSCR
      VMOV.F32        S2, S22
      VMOV.F32        S4, #-20.0
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S2, S0 }
      VLDR            S0, =-0.95
      VADD.F32        S0, S2, S0
      VCMPE.F32       S0, #0.0
      __asm { VMOVGT.F32      S6, S0 }
    v64 = 432;
    __asm { VMUL.F32        S0, S6, S4 }
    v66 = 625;
    v21 = 0;
      __asm { VMOVGT.F32      S18, S0 }
    v67 = 0;
    v68 = 0;
    v65 = 432;
    do
      v22 = v19 ^ (v19 >> 30);
      v23 = &v64 + v21;
      v24 = v21++ + 1812433253 * v22;
      v19 = v20++ + 1812433253 * v22;
      v23[2] = v24 + 1;
    while ( v21 != 397 );
    v66 = 624;
    v69 = 398;
    v25 = BaseEntityRenderContext::getWorldMatrix(v53);
    MatrixStack::push((MatrixStack *)&v63, v25);
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v63);
      VLDR            S0, [R0]
      VLDR            S8, [R8]
      VLDR            S10, [R8,#4]
      VMUL.F32        S0, S0, S8
      VLDR            S14, [R0,#0x14]
      VMUL.F32        S2, S2, S8
      VLDR            S1, [R0,#0x10]
      VLDR            S4, [R0,#8]
      VMUL.F32        S14, S14, S10
      VLDR            S6, [R0,#0xC]
      VMUL.F32        S1, S1, S10
      VLDR            S3, [R0,#0x18]
      VMUL.F32        S4, S4, S8
      VLDR            S5, [R0,#0x1C]
      VMUL.F32        S6, S6, S8
      VMUL.F32        S3, S3, S10
      VLDR            S12, [R8,#8]
      VMUL.F32        S10, S5, S10
      VLDR            S7, [R0,#0x20]
      VLDR            S8, [R0,#0x24]
      VMUL.F32        S5, S7, S12
      VLDR            S7, [R0,#0x28]
      VADD.F32        S0, S1, S0
      VADD.F32        S2, S14, S2
      VLDR            S14, [R0,#0x2C]
      VMUL.F32        S8, S8, S12
      VMUL.F32        S1, S7, S12
      VADD.F32        S4, S3, S4
      VADD.F32        S6, S10, S6
      VLDR            S10, [R0,#0x34]
      VMUL.F32        S12, S14, S12
      VADD.F32        S0, S0, S5
      VADD.F32        S2, S2, S8
      VLDR            S8, [R0,#0x30]
      VADD.F32        S4, S4, S1
      VADD.F32        S6, S6, S12
      VLDR            S12, [R0,#0x38]
      VADD.F32        S0, S0, S8
      VLDR            S8, [R0,#0x3C]
      VADD.F32        S2, S2, S10
      VADD.F32        S4, S4, S12
      VADD.F32        S6, S6, S8
      VSTR            S0, [R0,#0x30]
      VSTR            S2, [R0,#0x34]
      VSTR            S4, [R0,#0x38]
      VSTR            S6, [R0,#0x3C]
      VLDR            S0, [R10,#0x134]
      VMUL.F32        S10, S16, S16
      VLDR            S2, [R0,#0x14]
      VMUL.F32        S0, S0, S22
      VLDR            S4, [R0,#0x18]
      VLDR            S8, [R0,#0x10]
      VLDR            S6, [R0,#0x1C]
      VLDR            S12, [R0,#0x30]
      VLDR            S14, [R0,#0x34]
      VADD.F32        S10, S10, S16
      VLDR            S1, [R0,#0x38]
      VLDR            S3, [R0,#0x3C]
      VMUL.F32        S8, S8, S0
      VMUL.F32        S2, S2, S0
      VMUL.F32        S4, S4, S0
      VMUL.F32        S0, S6, S0
      VMOV.F32        S6, #30.0
      VADD.F32        S8, S12, S8
      VADD.F32        S4, S1, S4
      VADD.F32        S0, S3, S0
      VMUL.F32        S16, S10, S6
      VSTR            S8, [R0,#0x30]
      VSTR            S0, [R0,#0x3C]
      VCMPE.F32       S16, #0.0
      __asm
        VMUL.F32        S18, S18, S18
        VMOV.F32        S0, #10.0
        VMOV.F32        S2, #5.0
        VLDR            S4, =0.45
        VMOV.F32        S31, #20.0
        VMUL.F32        S20, S20, S4
        VMOV.F32        S17, #-0.5
        VMOV.F32        S23, #1.0
        VMUL.F32        S0, S18, S0
        VLDR            D12, =2.32830644e-10
        VLDR            S26, =360.0
        VLDR            S30, =-1.732
      _R9 = 0;
        VADD.F32        S22, S0, S2
        VLDR            S19, =1.732
        VLDR            S21, =-0.866
        VLDR            S27, =0.866
      do
        v31 = MatrixStack::MatrixStackRef::operator->((int)&v63);
        _R0 = Random::_genRandInt32((Random *)&v64);
        __asm
        {
          VMOV            S0, R0
          VCVT.F64.U32    D0, S0
        }
        v81 = 1065353216;
        v82 = 0;
        v83 = 0;
          VMUL.F64        D0, D0, D12
          VCVT.F32.F64    S0, D0
          VMUL.F32        S0, S0, S26
          VSTR            S0, [R7,#0x94]
        glm::rotate<float>((int)&v84, v31, (int)&v100, (int)&v81);
        *(_DWORD *)v31 = v84;
        *(_DWORD *)(v31 + 4) = v85;
        *(_DWORD *)(v31 + 8) = v86;
        *(_DWORD *)(v31 + 12) = v87;
        *(_DWORD *)(v31 + 16) = v88;
        *(_DWORD *)(v31 + 20) = v89;
        *(_DWORD *)(v31 + 24) = v90;
        *(_DWORD *)(v31 + 28) = v91;
        *(_DWORD *)(v31 + 32) = v92;
        *(_DWORD *)(v31 + 36) = v93;
        *(_DWORD *)(v31 + 40) = v94;
        *(_DWORD *)(v31 + 44) = v95;
        *(_DWORD *)(v31 + 48) = v96;
        *(_DWORD *)(v31 + 52) = v97;
        *(_DWORD *)(v31 + 56) = v98;
        *(_DWORD *)(v31 + 60) = v99;
        v33 = MatrixStack::MatrixStackRef::operator->((int)&v63);
        v81 = 0;
        v82 = 1065353216;
        glm::rotate<float>((int)&v84, v33, (int)&v100, (int)&v81);
        *(_DWORD *)v33 = v84;
        *(_DWORD *)(v33 + 4) = v85;
        *(_DWORD *)(v33 + 8) = v86;
        *(_DWORD *)(v33 + 12) = v87;
        *(_DWORD *)(v33 + 16) = v88;
        *(_DWORD *)(v33 + 20) = v89;
        *(_DWORD *)(v33 + 24) = v90;
        *(_DWORD *)(v33 + 28) = v91;
        *(_DWORD *)(v33 + 32) = v92;
        *(_DWORD *)(v33 + 36) = v93;
        *(_DWORD *)(v33 + 40) = v94;
        *(_DWORD *)(v33 + 44) = v95;
        *(_DWORD *)(v33 + 48) = v96;
        *(_DWORD *)(v33 + 52) = v97;
        *(_DWORD *)(v33 + 56) = v98;
        *(_DWORD *)(v33 + 60) = v99;
        v35 = MatrixStack::MatrixStackRef::operator->((int)&v63);
        v83 = 1065353216;
        glm::rotate<float>((int)&v84, v35, (int)&v100, (int)&v81);
        *(_DWORD *)v35 = v84;
        *(_DWORD *)(v35 + 4) = v85;
        *(_DWORD *)(v35 + 8) = v86;
        *(_DWORD *)(v35 + 12) = v87;
        *(_DWORD *)(v35 + 16) = v88;
        *(_DWORD *)(v35 + 20) = v89;
        *(_DWORD *)(v35 + 24) = v90;
        *(_DWORD *)(v35 + 28) = v91;
        *(_DWORD *)(v35 + 32) = v92;
        *(_DWORD *)(v35 + 36) = v93;
        *(_DWORD *)(v35 + 40) = v94;
        *(_DWORD *)(v35 + 44) = v95;
        *(_DWORD *)(v35 + 48) = v96;
        *(_DWORD *)(v35 + 52) = v97;
        *(_DWORD *)(v35 + 56) = v98;
        *(_DWORD *)(v35 + 60) = v99;
        v37 = MatrixStack::MatrixStackRef::operator->((int)&v63);
        glm::rotate<float>((int)&v84, v37, (int)&v100, (int)&v81);
        *(_DWORD *)v37 = v84;
        *(_DWORD *)(v37 + 4) = v85;
        *(_DWORD *)(v37 + 8) = v86;
        *(_DWORD *)(v37 + 12) = v87;
        *(_DWORD *)(v37 + 16) = v88;
        *(_DWORD *)(v37 + 20) = v89;
        *(_DWORD *)(v37 + 24) = v90;
        *(_DWORD *)(v37 + 28) = v91;
        *(_DWORD *)(v37 + 32) = v92;
        *(_DWORD *)(v37 + 36) = v93;
        *(_DWORD *)(v37 + 40) = v94;
        *(_DWORD *)(v37 + 44) = v95;
        *(_DWORD *)(v37 + 48) = v96;
        *(_DWORD *)(v37 + 52) = v97;
        *(_DWORD *)(v37 + 56) = v98;
        *(_DWORD *)(v37 + 60) = v99;
        v39 = MatrixStack::MatrixStackRef::operator->((int)&v63);
        glm::rotate<float>((int)&v84, v39, (int)&v100, (int)&v81);
        *(_DWORD *)v39 = v84;
        *(_DWORD *)(v39 + 4) = v85;
        *(_DWORD *)(v39 + 8) = v86;
        *(_DWORD *)(v39 + 12) = v87;
        *(_DWORD *)(v39 + 16) = v88;
        *(_DWORD *)(v39 + 20) = v89;
        *(_DWORD *)(v39 + 24) = v90;
        *(_DWORD *)(v39 + 28) = v91;
        *(_DWORD *)(v39 + 32) = v92;
        *(_DWORD *)(v39 + 36) = v93;
        *(_DWORD *)(v39 + 40) = v94;
        *(_DWORD *)(v39 + 44) = v95;
        *(_DWORD *)(v39 + 48) = v96;
        *(_DWORD *)(v39 + 52) = v97;
        *(_DWORD *)(v39 + 56) = v98;
        *(_DWORD *)(v39 + 60) = v99;
        v41 = MatrixStack::MatrixStackRef::operator->((int)&v63);
          VADD.F32        S0, S0, S20
        glm::rotate<float>((int)&v84, v41, (int)&v100, (int)&v81);
        *(_DWORD *)v41 = v84;
        *(_DWORD *)(v41 + 4) = v85;
        *(_DWORD *)(v41 + 8) = v86;
        *(_DWORD *)(v41 + 12) = v87;
        *(_DWORD *)(v41 + 16) = v88;
        *(_DWORD *)(v41 + 20) = v89;
        *(_DWORD *)(v41 + 24) = v90;
        *(_DWORD *)(v41 + 28) = v91;
        *(_DWORD *)(v41 + 32) = v92;
        *(_DWORD *)(v41 + 36) = v93;
        *(_DWORD *)(v41 + 40) = v94;
        *(_DWORD *)(v41 + 44) = v95;
        *(_DWORD *)(v41 + 48) = v96;
        *(_DWORD *)(v41 + 52) = v97;
        *(_DWORD *)(v41 + 56) = v98;
        *(_DWORD *)(v41 + 60) = v99;
          VCVT.F64.U32    D14, S0
          VMOV            S2, R0
          VMUL.F64        D0, D14, D12
          VCVT.F64.U32    D1, S2
        v60 = 0;
        v61 = 0;
        v62 = 0;
        v57 = 0;
          VMUL.F64        D1, D1, D12
          VCVT.F32.F64    S2, D1
          VADD.F32        S2, S2, S18
          VMUL.F32        S0, S0, S31
          VMUL.F32        S4, S2, S30
          VMUL.F32        S6, S2, S19
          VADD.F32        S8, S2, S2
          VSUB.F32        S2, S17, S2
          VADD.F32        S0, S22, S0
          VADD.F32        S4, S4, S21
          VADD.F32        S6, S6, S27
          VADD.F32        S8, S8, S23
          VSTR            S0, [SP,#0xB70+var_B20]
          VSTR            S4, [SP,#0xB70+var_B0C]
          VSTR            S0, [SP,#0xB70+var_B08]
          VSTR            S6, [SP,#0xB70+var_B18]
          VSTR            S0, [SP,#0xB70+var_B14]
          VSTR            S2, [SP,#0xB70+var_B04]
          VSTR            S2, [SP,#0xB70+var_B10]
          VSTR            S8, [SP,#0xB70+var_B1C]
        Tessellator::begin((int)v8, 2, 9, 0);
        __asm { VSTR            S18, [SP,#0xB70+var_B70] }
        Tessellator::color(v8, 1.0, 1.0, 1.0, v51);
        Tessellator::normal(v8, 0.0, 1.0, 0.0);
        Tessellator::vertexUV(v8, (const Vec3 *)&v60, 0LL);
        Tessellator::color(v8, 1.0, 0.0, 1.0, 0.0);
        Tessellator::vertexUV(v8, (const Vec3 *)&v59, 0LL);
        Tessellator::vertexUV(v8, (const Vec3 *)&v58, 0LL);
        Tessellator::color(v8, 1.0, 1.0, 1.0, v45);
        Tessellator::vertexUV(v8, (const Vec3 *)&v57, 0LL);
        Tessellator::color(v8, 1.0, 1.0, 1.0, v46);
        _R0 = v53;
          VLDR            S0, [R0,#4]
          VSTR            S0, [SP,#0xB70+var_B6C]
        EntityShaderManager::_setupShaderParameters(
          *(float *)&v52,
          v54,
          _KR00_8,
          COERCE_FLOAT(&Color::WHITE),
          COERCE_FLOAT(&Color::NIL));
        sub_21E94B4((void **)&v55, "entity_beam_additive");
        mce::MaterialPtr::MaterialPtr(
          (mce::MaterialPtr *)&v56,
          (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
          &v55);
        Tessellator::draw((char *)v8, v54, (int)&v56);
        mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v56);
        v48 = (void *)(v55 - 12);
        if ( (int *)(v55 - 12) != &dword_28898C0 )
          v29 = (unsigned int *)(v55 - 4);
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
            j_j_j_j__ZdlPv_9(v48);
        ++_R9;
          VMOV            S0, R9
          VCVT.F32.S32    S0, S0
          VCMPE.F32       S0, S16
          VMRS            APSR_nzcv, FPSCR
      while ( _NF ^ _VF );
    result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v63);
  return result;
}


int __fastcall EnderDragonRenderer::EnderDragonRenderer(int a1, mce::TextureGroup *a2, const GeometryPtr *a3)
{
  int v3; // r4@1
  const GeometryPtr *v4; // r7@1
  mce::TextureGroup *v5; // r6@1
  EnderDragonModel *v6; // r5@1
  char *v7; // r0@1
  char *v8; // r0@2
  char *v9; // r0@5
  char *v10; // r0@6
  char *v11; // r0@7
  char *v12; // r0@8
  char *v13; // r0@9
  char *v14; // r0@10
  void *v15; // r0@11
  void *v16; // r0@12
  unsigned int *v18; // r2@14
  signed int v19; // r1@16
  unsigned int *v20; // r2@18
  signed int v21; // r1@20
  unsigned int *v22; // r2@22
  signed int v23; // r1@24
  unsigned int *v24; // r2@26
  signed int v25; // r1@28
  unsigned int *v26; // r2@30
  signed int v27; // r1@32
  unsigned int *v28; // r2@34
  signed int v29; // r1@36
  unsigned int *v30; // r2@38
  signed int v31; // r1@40
  unsigned int *v32; // r2@42
  signed int v33; // r1@44
  unsigned int *v34; // r2@46
  signed int v35; // r1@48
  unsigned int *v36; // r2@50
  signed int v37; // r1@52
  int v38; // [sp+4h] [bp-8Ch]@12
  int v39; // [sp+Ch] [bp-84h]@11
  char *v40; // [sp+14h] [bp-7Ch]@9
  char *v41; // [sp+18h] [bp-78h]@9
  int v42; // [sp+1Ch] [bp-74h]@9
  char *v43; // [sp+24h] [bp-6Ch]@7
  char *v44; // [sp+28h] [bp-68h]@7
  int v45; // [sp+2Ch] [bp-64h]@7
  char *v46; // [sp+34h] [bp-5Ch]@5
  char *v47; // [sp+38h] [bp-58h]@5
  int v48; // [sp+3Ch] [bp-54h]@5
  char *v49; // [sp+44h] [bp-4Ch]@1
  char *v50; // [sp+48h] [bp-48h]@1
  int v51; // [sp+4Ch] [bp-44h]@1
  char v52; // [sp+50h] [bp-40h]@1
  EnderDragonModel *v53; // [sp+68h] [bp-28h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (EnderDragonModel *)operator new(0x1170u);
  EnderDragonModel::EnderDragonModel(v6, v4);
  v53 = v6;
  sub_21E94B4((void **)&v49, "textures/entity/dragon/dragon");
  v50 = v49;
  v49 = (char *)&unk_28898CC;
  v51 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v52, v5, (int)&v50, 0);
  MobRenderer::MobRenderer(v3, (int *)&v53, (mce::TexturePtr *)&v52);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v52);
  v7 = v50 - 12;
  if ( (int *)(v50 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v50 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    }
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  v8 = v49 - 12;
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v49 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  if ( v53 )
    (*(void (**)(void))(*(_DWORD *)v53 + 4))();
  v53 = 0;
  *(_DWORD *)v3 = &off_26E6BEC;
  sub_21E94B4((void **)&v46, "textures/entity/dragon/dragon");
  v47 = v46;
  v48 = 0;
  v46 = (char *)&unk_28898CC;
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 644), v5, (int)&v47, 0);
  v9 = v47 - 12;
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v47 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = v46 - 12;
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v46 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v43, "textures/entity/dragon/dragon_exploding");
  v44 = v43;
  v43 = (char *)&unk_28898CC;
  v45 = 0;
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 668), v5, (int)&v44, 0);
  v11 = v44 - 12;
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v44 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = v43 - 12;
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v43 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v40, "textures/entity/endercrystal/endercrystal_beam");
  v41 = v40;
  v40 = (char *)&unk_28898CC;
  v42 = 0;
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 692), v5, (int)&v41, 0);
  v13 = v41 - 12;
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v41 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = v40 - 12;
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v40 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v39, "entity_dissolve_layer0");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v3 + 716),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v39);
  v15 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v39 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v38, "entity_dissolve_layer1");
    (mce::MaterialPtr *)(v3 + 728),
    &v38);
  v16 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v38 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  return v3;
}


void __fastcall EnderDragonRenderer::~EnderDragonRenderer(EnderDragonRenderer *this)
{
  EnderDragonRenderer::~EnderDragonRenderer(this);
}


BaseEntityRenderer *__fastcall EnderDragonRenderer::~EnderDragonRenderer(EnderDragonRenderer *this)
{
  EnderDragonRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E6BEC;
  mce::MaterialPtr::~MaterialPtr((EnderDragonRenderer *)((char *)this + 728));
  mce::MaterialPtr::~MaterialPtr((EnderDragonRenderer *)((char *)v1 + 716));
  mce::TexturePtr::~TexturePtr((EnderDragonRenderer *)((char *)v1 + 692));
  mce::TexturePtr::~TexturePtr((EnderDragonRenderer *)((char *)v1 + 668));
  mce::TexturePtr::~TexturePtr((EnderDragonRenderer *)((char *)v1 + 644));
  return j_j_j__ZN11MobRendererD2Ev_0(v1);
}


int __fastcall EnderDragonRenderer::render(int a1, BaseEntityRenderContext *this, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r3@1
  BaseEntityRenderContext *v6; // r6@1
  int v7; // r7@1
  int result; // r0@3

  v3 = a1;
  v4 = a3;
  v5 = *(_DWORD *)(a1 + 140);
  v6 = this;
  v7 = *(_DWORD *)(v5 + 28);
  if ( *(_DWORD *)(*(_DWORD *)a3 + 3448) >= 2 )
  {
    *(_DWORD *)(v5 + 28) = a1 + 716;
    MobRenderer::renderModel(a1, this, a3, *(_DWORD *)(a1 + 140), a1 + 668);
    *(_DWORD *)(*(_DWORD *)(v3 + 140) + 28) = v3 + 728;
    v5 = *(_DWORD *)(v3 + 140);
  }
  MobRenderer::renderModel(v3, v6, v4, v5, v3 + 144);
  result = *(_DWORD *)(v3 + 140);
  *(_DWORD *)(result + 28) = v7;
  return result;
}


void __fastcall EnderDragonRenderer::~EnderDragonRenderer(EnderDragonRenderer *this)
{
  EnderDragonRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E6BEC;
  mce::MaterialPtr::~MaterialPtr((EnderDragonRenderer *)((char *)this + 728));
  mce::MaterialPtr::~MaterialPtr((EnderDragonRenderer *)((char *)v1 + 716));
  mce::TexturePtr::~TexturePtr((EnderDragonRenderer *)((char *)v1 + 692));
  mce::TexturePtr::~TexturePtr((EnderDragonRenderer *)((char *)v1 + 668));
  mce::TexturePtr::~TexturePtr((EnderDragonRenderer *)((char *)v1 + 644));
  MobRenderer::~MobRenderer(v1);
  j_j_j__ZdlPv_5((void *)v1);
}
