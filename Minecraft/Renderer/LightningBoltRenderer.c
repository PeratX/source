

void __fastcall LightningBoltRenderer::~LightningBoltRenderer(LightningBoltRenderer *this)
{
  EntityRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DBA2C;
  mce::MaterialPtr::~MaterialPtr((LightningBoltRenderer *)((char *)this + 136));
  EntityRenderer::~EntityRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall LightningBoltRenderer::render(mce::MaterialPtr *a1, BaseEntityRenderContext *a2, int a3)
{
  int v3; // r4@1
  Tessellator *v5; // r5@1
  unsigned int v6; // r0@1
  int v7; // r1@1
  signed int v8; // r2@1
  int v9; // r0@2
  int *v10; // r4@2
  int v11; // r6@2
  char *v16; // r9@3
  int *v17; // r4@3
  signed int v18; // r7@3
  unsigned int v19; // r6@4
  unsigned int v20; // r0@4
  unsigned int v24; // r0@7
  signed int v25; // r1@7
  int v26; // r2@7
  int v27; // r0@8
  int *v28; // r7@8
  int v29; // r3@8
  int v30; // r9@9
  int result; // r0@10
  unsigned int v35; // r6@14
  signed int v40; // r6@20
  int v42; // r7@21
  int v43; // r4@21
  int v50; // r0@32
  int v51; // [sp+1Ch] [bp-A9Ch]@1
  int v52; // [sp+20h] [bp-A98h]@9
  BaseEntityRenderContext *v55; // [sp+30h] [bp-A88h]@1
  mce::MaterialPtr *v56; // [sp+34h] [bp-A84h]@1
  mce::MaterialPtr *v57; // [sp+34h] [bp-A84h]@6
  int v58; // [sp+38h] [bp-A80h]@12
  unsigned int v59; // [sp+3Ch] [bp-A7Ch]@1
  unsigned int v60; // [sp+40h] [bp-A78h]@1
  int v61; // [sp+A00h] [bp-B8h]@1
  char v62; // [sp+A04h] [bp-B4h]@1
  int v63; // [sp+A08h] [bp-B0h]@1
  int v64; // [sp+A0Ch] [bp-ACh]@3
  char v65[32]; // [sp+A10h] [bp-A8h]@3
  char v66; // [sp+A30h] [bp-88h]@13
  int v67; // [sp+A4Ch] [bp-6Ch]@3

  v55 = a2;
  v56 = a1;
  v3 = *(_DWORD *)a3;
  v51 = *(_DWORD *)a3;
  _R11 = *(_DWORD *)(a3 + 4);
  v5 = (Tessellator *)BaseEntityRenderContext::getTessellator(a2);
  v6 = *(_DWORD *)(v3 + 3412);
  v59 = v6;
  v61 = 625;
  v7 = 0;
  v8 = 1;
  v62 = 0;
  v63 = 0;
  v60 = v6;
  do
  {
    v9 = v6 ^ (v6 >> 30);
    v10 = (int *)(&v59 + v7);
    v11 = v7++ + 1812433253 * v9;
    v6 = v8++ + 1812433253 * v9;
    v10[2] = v11 + 1;
  }
  while ( v7 != 397 );
  __asm { VLDR            S16, =0.0 }
  v61 = 624;
  __asm { VMOV.F32        S18, S16 }
  v64 = 398;
  v16 = &v65[28];
  v17 = &v67;
  v18 = 8;
    __asm
    {
      VSTR            S16, [R4]
      VSTR            S18, [R9]
    }
    v19 = Random::_genRandInt32((Random *)&v59);
    v20 = Random::_genRandInt32((Random *)&v59);
    --v18;
    v16 -= 4;
    --v17;
    _R1 = v19 % 0xB - 5;
    _R0 = v20 % 0xB - 5;
      VMOV            S0, R1
      VMOV            S2, R0
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VADD.F32        S16, S0, S16
      VADD.F32        S18, S2, S18
  while ( !((unsigned __int8)(_NF ^ _VF) | _ZF) );
  __asm
    VMOV.F32        S24, #1.0
    VMOV.F32        S26, #0.5
    VLDR            S22, =0.1
  v57 = (mce::MaterialPtr *)((char *)v56 + 136);
  _LR = 0;
    VSTR            S18, [SP,#0xAB8+var_A94]
    VSTR            S16, [SP,#0xAB8+var_A90]
    v59 = *(_DWORD *)(v51 + 3412);
    v24 = v59;
    v61 = 625;
    v62 = 0;
    v63 = 0;
    v25 = 1;
    v26 = 0;
    v60 = v59;
    do
      v27 = v24 ^ (v24 >> 30);
      v28 = (int *)(&v59 + v26);
      v29 = v26++ + 1812433253 * v27;
      v24 = v25++ + 1812433253 * v27;
      v28[2] = v29 + 1;
    while ( v26 != 397 );
    __asm { VMOV            S0, LR }
    v52 = _LR;
      VLDR            S2, =0.2
    v61 = 624;
    v30 = 0;
    v64 = 398;
      VMUL.F32        S0, S0, S2
      VADD.F32        S28, S0, S22
      _R10 = 7 - v30;
      result = 0;
      if ( v30 > 0 )
        result = 5 - v30;
      v58 = result;
      if ( _R10 >= result )
      {
        __asm { VLDR            S4, [SP,#0xAB8+var_A90] }
        _R0 = &v66 + 4 * _R10;
        __asm { VLDR            S0, [R0] }
        _R0 = &v65[4 * _R10];
        __asm
        {
          VSUB.F32        S17, S0, S4
          VLDR            S0, [SP,#0xAB8+var_A94]
          VLDR            S2, [R0]
          VSUB.F32        S30, S2, S0
        }
        do
          v35 = Random::_genRandInt32((Random *)&v59);
          if ( v30 )
          {
            _R7 = Random::_genRandInt32((Random *)&v59) % 0x1F - 15;
            _R6 = v35 % 0x1F - 15;
          }
          else
            _R7 = Random::_genRandInt32((Random *)&v59) % 0xB - 5;
            _R6 = v35 % 0xB - 5;
          Tessellator::begin((int)v5, 3, 0, 0);
          Tessellator::color(v5, 0.45, 0.45, 0.5, 0.3);
          __asm
            VMOV            S0, R6
            VMOV            S2, R7
            VCVT.F32.S32    S0, S0
            VCVT.F32.S32    S2, S2
            VMOV.F32        S23, S28
            VMOV.F32        S25, S28
          if ( _ZF )
            _R0 = _R10 - 1;
            __asm
            {
              VMOV            S4, R10
              VMOV            S6, R0
              VCVT.F32.S32    S4, S4
              VCVT.F32.S32    S6, S6
              VMUL.F32        S4, S4, S22
              VMUL.F32        S6, S6, S22
              VADD.F32        S4, S4, S24
              VADD.F32        S6, S6, S24
              VMUL.F32        S23, S4, S28
              VMUL.F32        S25, S6, S28
            }
          __asm { VADD.F32        S19, S17, S0 }
          _R0 = 16 * _R10 + 16;
            VADD.F32        S21, S30, S2
            VADD.F32        S27, S25, S25
          v40 = -1;
          __asm { VMOV            S0, R0 }
          _R0 = 16 * _R10;
            VADD.F32        S29, S23, S23
            VCVT.F32.S32    S31, S0
            VMOV            S0, R0
            VCVT.F32.S32    S20, S0
          do
            __asm { VLDR            S0, [R11] }
            v42 = v40 + 1;
              VLDR            S4, [R11,#8]
              VADD.F32        S18, S0, S26
            v43 = (v40 + 1) | 1;
              VADD.F32        S16, S4, S26
              VLDR            S2, [R11,#4]
              VADD.F32        S2, S2, S20
              VSUB.F32        S4, S18, S25
              VSUB.F32        S0, S16, S25
              VMOV            R2, S2
              VADD.F32        S8, S4, S27
              VADD.F32        S6, S0, S27
            if ( !_CF )
              __asm { VMOVCC.F32      S4, S8 }
            if ( v43 == 3 )
              __asm { VMOVEQ.F32      S0, S6 }
              VADD.F32        S4, S4, S19
              VADD.F32        S0, S0, S21
              VMOV            R1, S4
              VMOV            R3, S0
            Tessellator::vertex(v5, _R1, _R2, _R3);
              VSUB.F32        S0, S18, S23
              VSUB.F32        S2, S16, S23
              VADD.F32        S4, S0, S29
              VADD.F32        S6, S2, S29
              __asm { VMOVCC.F32      S0, S4 }
              __asm { VMOVEQ.F32      S2, S6 }
              VLDR            S4, [R11,#4]
              VADD.F32        S0, S0, S17
              VADD.F32        S2, S2, S30
              VADD.F32        S4, S4, S31
              VMOV            R1, S0
              VMOV            R3, S2
              VMOV            R2, S4
            ++v40;
          while ( v42 != 4 );
          if ( Tessellator::forceTessellateIntercept(v5) )
            Tessellator::triggerIntercept(v5, v57, (const mce::TexturePtr *)&mce::TexturePtr::NONE);
            v50 = BaseEntityRenderContext::getScreenContext(v55);
            Tessellator::draw((char *)v5, v50, (int)v57);
            VMOV.F32        S30, S21
            VMOV.F32        S17, S19
          result = _R10 - 1;
          _VF = __OFSUB__(_R10, v58);
          _ZF = _R10 == v58;
          _NF = _R10-- - v58 < 0;
        while ( !((unsigned __int8)(_NF ^ _VF) | _ZF) );
      }
      ++v30;
    while ( v30 != 3 );
    ++_LR;
  while ( v52 != 3 );
  return result;
}


BaseEntityRenderer *__fastcall LightningBoltRenderer::~LightningBoltRenderer(LightningBoltRenderer *this)
{
  EntityRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DBA2C;
  mce::MaterialPtr::~MaterialPtr((LightningBoltRenderer *)((char *)this + 136));
  return j_j_j__ZN14EntityRendererD2Ev(v1);
}


void __fastcall LightningBoltRenderer::~LightningBoltRenderer(LightningBoltRenderer *this)
{
  LightningBoltRenderer::~LightningBoltRenderer(this);
}


BaseEntityRenderer *__fastcall LightningBoltRenderer::LightningBoltRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2)
{
  BaseEntityRenderer *v2; // r4@1
  void *v3; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a1;
  EntityRenderer::EntityRenderer(a1, a2, 0);
  *(_DWORD *)v2 = &off_26DBA2C;
  sub_119C884((void **)&v7, "lightning");
  mce::MaterialPtr::MaterialPtr(
    (BaseEntityRenderer *)((char *)v2 + 136),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v7);
  v3 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  return v2;
}
