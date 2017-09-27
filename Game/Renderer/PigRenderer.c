

int __fastcall PigRenderer::PigRenderer(int a1, mce::TextureGroup *a2, const GeometryPtr *a3)
{
  int v3; // r8@1
  const GeometryPtr *v4; // r4@1
  mce::TextureGroup *v5; // r5@1
  PigModel *v6; // r7@1
  char *v7; // r0@1
  char *v8; // r0@2
  char *v9; // r0@5
  char *v10; // r0@6
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  unsigned int *v14; // r2@12
  signed int v15; // r1@14
  unsigned int *v16; // r2@16
  signed int v17; // r1@18
  unsigned int *v18; // r2@20
  signed int v19; // r1@22
  char *v20; // [sp+4h] [bp-6Ch]@5
  char *v21; // [sp+8h] [bp-68h]@5
  int v22; // [sp+Ch] [bp-64h]@5
  char v23; // [sp+10h] [bp-60h]@5
  char *v24; // [sp+2Ch] [bp-44h]@1
  char *v25; // [sp+30h] [bp-40h]@1
  int v26; // [sp+34h] [bp-3Ch]@1
  char v27; // [sp+38h] [bp-38h]@1
  PigModel *v28; // [sp+50h] [bp-20h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (PigModel *)operator new(0x648u);
  PigModel::PigModel(v6, v4);
  v28 = v6;
  sub_119C884((void **)&v24, "textures/entity/pig/pig");
  v25 = v24;
  v24 = (char *)&unk_28898CC;
  v26 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v27, v5, (int)&v25, 0);
  MobRenderer::MobRenderer(v3, (int *)&v28, (mce::TexturePtr *)&v27);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v27);
  v7 = v25 - 12;
  if ( (int *)(v25 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v25 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  v8 = v24 - 12;
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v24 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  if ( v28 )
    (*(void (**)(void))(*(_DWORD *)v28 + 4))();
  v28 = 0;
  *(_DWORD *)v3 = &off_26DBDE0;
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 644));
  sub_119C884((void **)&v20, "textures/entity/pig/pig_saddle");
  v21 = v20;
  v20 = (char *)&unk_28898CC;
  v22 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v23, v5, (int)&v21, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v3 + 644), (mce::TexturePtr *)&v23);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v23);
  v9 = v21 - 12;
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v21 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = v20 - 12;
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v20 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  return v3;
}


int __fastcall PigRenderer::getSkinPtr(PigRenderer *this, Entity *a2)
{
  PigRenderer *v2; // r4@1
  int v3; // r0@1
  int v4; // r1@1

  v2 = this;
  v3 = Entity::hasSaddle(a2);
  v4 = (int)v2 + 144;
  if ( v3 )
    v4 = (int)v2 + 644;
  return v4;
}


void __fastcall PigRenderer::~PigRenderer(PigRenderer *this)
{
  PigRenderer::~PigRenderer(this);
}


BaseEntityRenderer *__fastcall PigRenderer::~PigRenderer(PigRenderer *this)
{
  PigRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DBDE0;
  mce::TexturePtr::~TexturePtr((PigRenderer *)((char *)this + 644));
  return j_j_j__ZN11MobRendererD2Ev(v1);
}


void __fastcall PigRenderer::~PigRenderer(PigRenderer *this)
{
  PigRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DBDE0;
  mce::TexturePtr::~TexturePtr((PigRenderer *)((char *)this + 644));
  MobRenderer::~MobRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}
