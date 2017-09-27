

void __fastcall RabbitRenderer::~RabbitRenderer(RabbitRenderer *this)
{
  RabbitRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DBF04;
  mce::TexturePtr::~TexturePtr((RabbitRenderer *)((char *)this + 788));
  mce::TexturePtr::~TexturePtr((RabbitRenderer *)((char *)v1 + 764));
  mce::TexturePtr::~TexturePtr((RabbitRenderer *)((char *)v1 + 740));
  mce::TexturePtr::~TexturePtr((RabbitRenderer *)((char *)v1 + 716));
  mce::TexturePtr::~TexturePtr((RabbitRenderer *)((char *)v1 + 692));
  mce::TexturePtr::~TexturePtr((RabbitRenderer *)((char *)v1 + 668));
  mce::TexturePtr::~TexturePtr((RabbitRenderer *)((char *)v1 + 644));
  MobRenderer::~MobRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall RabbitRenderer::render(int a1, BaseEntityRenderContext *a2, Rabbit **a3)
{
  Rabbit **v3; // r4@1
  int v4; // r6@1
  Rabbit *v5; // r7@1
  BaseEntityRenderContext *v6; // r8@1
  unsigned int v7; // r5@1
  const void **v8; // r0@1

  v3 = a3;
  v4 = a1;
  v5 = *a3;
  v6 = a2;
  v7 = Rabbit::getRabbitType(*a3);
  v8 = (const void **)(*(int (__fastcall **)(Rabbit *))(*(_DWORD *)v5 + 188))(v5);
  if ( !sub_119C9E8(v8, "Toast") )
    v7 = 6;
  if ( v7 > 6 )
    v7 = 0;
  return MobRenderer::renderModel(v4, v6, (int)v3, *(_DWORD *)(v4 + 140), v4 + 24 * v7 + 644);
}


int __fastcall RabbitRenderer::RabbitRenderer(int a1, int *a2, mce::TextureGroup *a3)
{
  int v3; // r6@1
  mce::TextureGroup *v4; // r7@1
  int v5; // r11@1
  char *v6; // r0@1
  char *v7; // r0@2
  char v8; // r0@5
  signed int v9; // r4@8
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  char *v14; // r0@25
  char *v15; // r0@25
  char *v16; // r0@26
  unsigned int *v18; // r2@29
  signed int v19; // r1@31
  unsigned int *v20; // r2@33
  signed int v21; // r1@35
  char *v22; // [sp+24h] [bp-94h]@13
  char *v23; // [sp+28h] [bp-90h]@9
  int v24; // [sp+2Ch] [bp-8Ch]@25
  char v25; // [sp+30h] [bp-88h]@25
  char *v26; // [sp+68h] [bp-50h]@1
  char *v27; // [sp+6Ch] [bp-4Ch]@1
  int v28; // [sp+70h] [bp-48h]@1
  char v29; // [sp+74h] [bp-44h]@1
  int v30; // [sp+8Ch] [bp-2Ch]@1

  v3 = *a2;
  v4 = a3;
  v5 = a1;
  *a2 = 0;
  v30 = v3;
  sub_119C884((void **)&v26, "textures/entity/rabbit/brown");
  v27 = v26;
  v28 = 0;
  v26 = (char *)&unk_28898CC;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v29, v4, (int)&v27, 0);
  MobRenderer::MobRenderer(v5, &v30, (mce::TexturePtr *)&v29);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v29);
  v6 = v27 - 12;
  if ( (int *)(v27 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v27 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  v7 = v26 - 12;
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v26 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  v30 = 0;
  *(_DWORD *)v5 = &off_26DBF04;
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 644));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 668));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 692));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 716));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 740));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 764));
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v5 + 788));
  v8 = byte_27D0180[0];
  __dmb();
  if ( !(v8 & 1) && j___cxa_guard_acquire((unsigned int *)byte_27D0180) )
    sub_119C884((void **)&dword_27D0184, "textures/entity/rabbit/brown");
    sub_119C884((void **)&dword_27D0188, "textures/entity/rabbit/white");
    sub_119C884((void **)&dword_27D018C, "textures/entity/rabbit/blackrabbit");
    sub_119C884((void **)&dword_27D0190, "textures/entity/rabbit/white_splotched");
    sub_119C884((void **)&dword_27D0194, "textures/entity/rabbit/gold");
    sub_119C884((void **)&dword_27D0198, "textures/entity/rabbit/salt");
    sub_119C884((void **)&dword_27D019C, "textures/entity/rabbit/toast");
    _cxa_atexit(sub_9ECD74);
    j___cxa_guard_release((unsigned int *)byte_27D0180);
  v9 = 0;
  do
    sub_119C854((int *)&v22, (int *)&byte_27D0180[4 * v9 + 4]);
    v14 = v22;
    v22 = (char *)&unk_28898CC;
    v23 = v14;
    v24 = 0;
    mce::TextureGroup::getTexture((mce::TexturePtr *)&v25, v4, (int)&v23, 0);
    mce::TexturePtr::operator=((mce::TexturePtr *)(v5 + 24 * v9 + 644), (mce::TexturePtr *)&v25);
    mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v25);
    v15 = v23 - 12;
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v23 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
    v16 = v22 - 12;
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v22 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v16);
    ++v9;
  while ( v9 < 7 );
  return v5;
}


BaseEntityRenderer *__fastcall RabbitRenderer::~RabbitRenderer(RabbitRenderer *this)
{
  RabbitRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DBF04;
  mce::TexturePtr::~TexturePtr((RabbitRenderer *)((char *)this + 788));
  mce::TexturePtr::~TexturePtr((RabbitRenderer *)((char *)v1 + 764));
  mce::TexturePtr::~TexturePtr((RabbitRenderer *)((char *)v1 + 740));
  mce::TexturePtr::~TexturePtr((RabbitRenderer *)((char *)v1 + 716));
  mce::TexturePtr::~TexturePtr((RabbitRenderer *)((char *)v1 + 692));
  mce::TexturePtr::~TexturePtr((RabbitRenderer *)((char *)v1 + 668));
  mce::TexturePtr::~TexturePtr((RabbitRenderer *)((char *)v1 + 644));
  return j_j_j__ZN11MobRendererD2Ev(v1);
}


void __fastcall RabbitRenderer::~RabbitRenderer(RabbitRenderer *this)
{
  RabbitRenderer::~RabbitRenderer(this);
}


char *__fastcall RabbitRenderer::getTexture(RabbitRenderer *this, int a2)
{
  if ( (unsigned int)a2 > 6 )
    a2 = 0;
  return (char *)this + 24 * a2 + 644;
}
