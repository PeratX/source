

void __fastcall ParrotRenderer::~ParrotRenderer(ParrotRenderer *this)
{
  ParrotRenderer::~ParrotRenderer(this);
}


int __fastcall ParrotRenderer::getBob(ParrotRenderer *this, Mob *a2, float a3)
{
  Mob *v3; // r4@1
  float v16; // r1@1
  int result; // r0@1

  v3 = a2;
  _R5 = a3;
  _R6 = Parrot::getOFlap(a2);
  _R0 = Parrot::getFlap(v3);
  __asm { VMOV            S16, R0 }
  _R0 = Parrot::getOFlap(v3);
  __asm
  {
    VMOV            S0, R0
    VMOV            S2, R6
    VSUB.F32        S0, S16, S0
    VMOV            S16, R5
    VMUL.F32        S0, S0, S16
    VADD.F32        S18, S0, S2
  }
  _R5 = Parrot::getOFlapSpeed(v3);
  _R0 = Parrot::getFlapSpeed(v3);
    VMOV            R6, S18
    VMOV            S18, R0
  _R0 = Parrot::getOFlapSpeed(v3);
    VSUB.F32        S0, S18, S0
    VMUL.F32        S16, S0, S16
  _R0 = mce::Math::sin(_R6, v16);
    VMOV.F32        S0, #1.0
    VMOV            S2, R5
    VMOV            S4, R0
    VADD.F32        S2, S16, S2
    VADD.F32        S0, S4, S0
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  return result;
}


BaseEntityRenderer *__fastcall ParrotRenderer::~ParrotRenderer(ParrotRenderer *this)
{
  ParrotRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DBD80;
  mce::TexturePtr::~TexturePtr((ParrotRenderer *)((char *)this + 740));
  mce::TexturePtr::~TexturePtr((ParrotRenderer *)((char *)v1 + 716));
  mce::TexturePtr::~TexturePtr((ParrotRenderer *)((char *)v1 + 692));
  mce::TexturePtr::~TexturePtr((ParrotRenderer *)((char *)v1 + 668));
  mce::TexturePtr::~TexturePtr((ParrotRenderer *)((char *)v1 + 644));
  return j_j_j__ZN11MobRendererD2Ev(v1);
}


int __fastcall ParrotRenderer::render(int a1, BaseEntityRenderContext *a2, Entity **a3)
{
  Entity **v3; // r4@1
  int v4; // r6@1
  BaseEntityRenderContext *v5; // r5@1
  int v6; // r0@1
  signed int v7; // r1@1

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = Entity::getVariant(*a3);
  v7 = v6;
  if ( v6 <= 0 )
    v7 = 0;
  if ( v6 > 5 )
    v7 = 5;
  return MobRenderer::renderModel(v4, v5, (int)v3, *(_DWORD *)(v4 + 140), v4 + 24 * v7 + 644);
}


void __fastcall ParrotRenderer::~ParrotRenderer(ParrotRenderer *this)
{
  ParrotRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DBD80;
  mce::TexturePtr::~TexturePtr((ParrotRenderer *)((char *)this + 740));
  mce::TexturePtr::~TexturePtr((ParrotRenderer *)((char *)v1 + 716));
  mce::TexturePtr::~TexturePtr((ParrotRenderer *)((char *)v1 + 692));
  mce::TexturePtr::~TexturePtr((ParrotRenderer *)((char *)v1 + 668));
  mce::TexturePtr::~TexturePtr((ParrotRenderer *)((char *)v1 + 644));
  MobRenderer::~MobRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall ParrotRenderer::ParrotRenderer(int a1, mce::TextureGroup *a2, const GeometryPtr *a3)
{
  int v3; // r11@1
  const GeometryPtr *v4; // r6@1
  mce::TextureGroup *v5; // r5@1
  ParrotModel *v6; // r7@1
  char *v7; // r0@1
  char *v8; // r0@2
  char v9; // r0@5
  signed int v10; // r4@8
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  unsigned int *v13; // r2@13
  signed int v14; // r1@15
  char *v15; // r0@25
  char *v16; // r0@25
  char *v17; // r0@26
  unsigned int *v19; // r2@29
  signed int v20; // r1@31
  unsigned int *v21; // r2@33
  signed int v22; // r1@35
  char *v23; // [sp+1Ch] [bp-8Ch]@13
  char *v24; // [sp+20h] [bp-88h]@9
  int v25; // [sp+24h] [bp-84h]@25
  char v26; // [sp+28h] [bp-80h]@25
  char *v27; // [sp+58h] [bp-50h]@1
  char *v28; // [sp+5Ch] [bp-4Ch]@1
  int v29; // [sp+60h] [bp-48h]@1
  char v30; // [sp+64h] [bp-44h]@1
  ParrotModel *v31; // [sp+7Ch] [bp-2Ch]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (ParrotModel *)operator new(0x9B8u);
  ParrotModel::ParrotModel(v6, v4);
  v31 = v6;
  sub_119C884((void **)&v27, "textures/entity/parrot/parrot_yellow_blue");
  v28 = v27;
  v27 = (char *)&unk_28898CC;
  v29 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v30, v5, (int)&v28, 0);
  MobRenderer::MobRenderer(v3, (int *)&v31, (mce::TexturePtr *)&v30);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v30);
  v7 = v28 - 12;
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v28 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  v8 = v27 - 12;
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v27 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  if ( v31 )
    (*(void (**)(void))(*(_DWORD *)v31 + 4))();
  v31 = 0;
  *(_DWORD *)v3 = &off_26DBD80;
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 644));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 668));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 692));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 716));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 740));
  v9 = byte_27CFEA0[0];
  __dmb();
  if ( !(v9 & 1) && j___cxa_guard_acquire((unsigned int *)byte_27CFEA0) )
    sub_119C884((void **)&dword_27CFEA4, "textures/entity/parrot/parrot_red_blue");
    sub_119C884((void **)&dword_27CFEA8, "textures/entity/parrot/parrot_blue");
    sub_119C884((void **)&dword_27CFEAC, "textures/entity/parrot/parrot_green");
    sub_119C884((void **)&dword_27CFEB0, "textures/entity/parrot/parrot_yellow_blue");
    sub_119C884((void **)&dword_27CFEB4, "textures/entity/parrot/parrot_grey");
    _cxa_atexit(sub_9ECA58);
    j___cxa_guard_release((unsigned int *)byte_27CFEA0);
  v10 = 0;
  do
    sub_119C854((int *)&v23, (int *)&byte_27CFEA0[4 * v10 + 4]);
    v15 = v23;
    v23 = (char *)&unk_28898CC;
    v24 = v15;
    v25 = 0;
    mce::TextureGroup::getTexture((mce::TexturePtr *)&v26, v5, (int)&v24, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)(v3 + 24 * v10 + 644), (mce::TexturePtr *)&v26);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v26);
    v16 = v24 - 12;
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v24 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v16);
    v17 = v23 - 12;
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v23 - 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v17);
    ++v10;
  while ( v10 < 5 );
  return v3;
}
