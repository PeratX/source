

void __fastcall SheepRenderer::~SheepRenderer(SheepRenderer *this)
{
  SheepRenderer::~SheepRenderer(this);
}


BaseEntityRenderer *__fastcall SheepRenderer::~SheepRenderer(SheepRenderer *this)
{
  SheepRenderer *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26DBF64;
  v2 = *((_DWORD *)this + 161);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 161) = 0;
  return j_j_j__ZN11MobRendererD2Ev(v1);
}


int __fastcall SheepRenderer::render(int a1, BaseEntityRenderContext *a2, int *a3)
{
  int *v3; // r4@1
  int v4; // r6@1
  int v5; // r7@1
  const void **v7; // r0@1
  int v8; // r0@2
  char *v9; // r0@2
  int v10; // r1@2
  int v11; // r2@2
  int v12; // r3@2
  int v13; // r12@2
  int v14; // r0@2
  int v15; // r5@3
  char *v16; // r0@3
  unsigned int v21; // kr04_4@3
  int v25; // r0@4
  int *v26; // r1@4

  v3 = a3;
  v4 = a1;
  v5 = *a3;
  _R8 = a2;
  v7 = (const void **)(*(int (__fastcall **)(int))(*(_DWORD *)*a3 + 188))(*a3);
  if ( sub_119C9E8(v7, "jeb_") )
  {
    v8 = Entity::getColor((Entity *)v5);
    v9 = Palette::getColor(v8);
    v10 = *(_DWORD *)v9;
    v11 = *((_DWORD *)v9 + 1);
    v12 = *((_DWORD *)v9 + 2);
    v13 = v5 + 232;
    v14 = *((_DWORD *)v9 + 3);
    *(_DWORD *)v13 = v10;
    *(_DWORD *)(v13 + 4) = v11;
    *(_DWORD *)(v13 + 8) = v12;
    *(_DWORD *)(v5 + 244) = v14;
  }
  else
    v15 = *(_DWORD *)(v5 + 416);
    v16 = Entity::getUniqueID((Entity *)v5);
    __asm { VMOV.F32        S4, #1.0 }
    v21 = v15 + 34628967 * *(_DWORD *)v16;
    _R0 = v21 % 0x19;
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.U32    S0, S0
      VLDR            S2, [R8,#4]
      VADD.F32        S0, S0, S2
      VLDR            S2, =0.04
      VMUL.F32        S16, S0, S2
      VSUB.F32        S18, S4, S16
    }
    _R0 = Palette::getColor(v21 / 0x19 & 0xF);
      VLDR            S20, [R0]
      VLDR            S22, [R0,#4]
      VLDR            S24, [R0,#8]
      VLDR            S26, [R0,#0xC]
    _R0 = Palette::getColor((v21 / 0x19 + 1) & 0xF);
      VLDR            S0, [R0]
      VMUL.F32        S8, S18, S20
      VLDR            S2, [R0,#4]
      VMUL.F32        S10, S18, S22
      VLDR            S4, [R0,#8]
      VMUL.F32        S0, S0, S16
      VLDR            S6, [R0,#0xC]
      VMUL.F32        S2, S2, S16
      VMUL.F32        S4, S4, S16
      VMUL.F32        S12, S18, S24
      VMUL.F32        S6, S6, S16
      VMUL.F32        S14, S18, S26
      VADD.F32        S0, S0, S8
      VADD.F32        S2, S2, S10
      VADD.F32        S4, S4, S12
      VADD.F32        S6, S6, S14
      VSTR            S0, [R7,#0xE8]
      VSTR            S2, [R7,#0xEC]
      VSTR            S4, [R7,#0xF0]
      VSTR            S6, [R7,#0xF4]
  v25 = Entity::getStatusFlag(v5, 29);
  v26 = (int *)(v4 + 140);
  if ( v25 )
    v26 = (int *)(v4 + 644);
  return MobRenderer::renderModel(v4, _R8, (int)v3, *v26, v4 + 144);
}


void __fastcall SheepRenderer::~SheepRenderer(SheepRenderer *this)
{
  SheepRenderer *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26DBF64;
  v2 = *((_DWORD *)this + 161);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 161) = 0;
  MobRenderer::~MobRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall SheepRenderer::SheepRenderer(float a1, mce::TextureGroup *a2, int *a3, int *a4, int a5)
{
  mce::TextureGroup *v5; // r7@1
  int v6; // r6@1
  int *v7; // r8@1
  int v8; // r5@1
  char *v14; // r0@1
  char *v15; // r0@2
  int v16; // r0@5
  unsigned int *v18; // r2@6
  signed int v19; // r1@8
  unsigned int *v20; // r2@10
  signed int v21; // r1@12
  char *v22; // [sp+4h] [bp-44h]@1
  char *v23; // [sp+8h] [bp-40h]@1
  int v24; // [sp+Ch] [bp-3Ch]@1
  char v25; // [sp+10h] [bp-38h]@1
  int v26; // [sp+28h] [bp-20h]@1

  v5 = a2;
  v6 = *a3;
  v7 = a4;
  v8 = LODWORD(a1);
  *a3 = 0;
  v26 = v6;
  sub_119C884((void **)&v22, "textures/entity/sheep/sheep");
  v23 = v22;
  v24 = 0;
  v22 = (char *)&unk_28898CC;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v25, v5, (int)&v23, 0);
  __asm
  {
    VLDR            S0, [SP,#0x48+arg_0]
    VMOV            R3, S0
  }
  MobRenderer::MobRenderer(v8, &v26, (mce::TexturePtr *)&v25);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v25);
  v14 = v23 - 12;
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v23 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = v22 - 12;
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v22 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  if ( v26 )
    (*(void (**)(void))(*(_DWORD *)v26 + 4))();
  *(_DWORD *)v8 = &off_26DBF64;
  v16 = *v7;
  *v7 = 0;
  *(_DWORD *)(v8 + 644) = v16;
  return v8;
}
