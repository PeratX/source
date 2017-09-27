

int __fastcall WolfRenderer::WolfRenderer(int a1, mce::TextureGroup *a2, const GeometryPtr *a3)
{
  int v3; // r4@1
  const GeometryPtr *v4; // r7@1
  mce::TextureGroup *v5; // r5@1
  WolfModel *v6; // r6@1
  char *v7; // r0@1
  char *v8; // r0@2
  char *v9; // r0@5
  char *v10; // r0@6
  char *v11; // r0@7
  char *v12; // r0@8
  unsigned int *v14; // r2@10
  signed int v15; // r1@12
  unsigned int *v16; // r2@14
  signed int v17; // r1@16
  unsigned int *v18; // r2@18
  signed int v19; // r1@20
  unsigned int *v20; // r2@22
  signed int v21; // r1@24
  unsigned int *v22; // r2@26
  signed int v23; // r1@28
  unsigned int *v24; // r2@30
  signed int v25; // r1@32
  char *v26; // [sp+8h] [bp-60h]@7
  char *v27; // [sp+Ch] [bp-5Ch]@7
  int v28; // [sp+10h] [bp-58h]@7
  char *v29; // [sp+18h] [bp-50h]@5
  char *v30; // [sp+1Ch] [bp-4Ch]@5
  int v31; // [sp+20h] [bp-48h]@5
  char *v32; // [sp+28h] [bp-40h]@1
  char *v33; // [sp+2Ch] [bp-3Ch]@1
  int v34; // [sp+30h] [bp-38h]@1
  char v35; // [sp+34h] [bp-34h]@1
  WolfModel *v36; // [sp+4Ch] [bp-1Ch]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (WolfModel *)operator new(0x71Cu);
  WolfModel::WolfModel(v6, v4);
  v36 = v6;
  sub_119C884((void **)&v32, "textures/entity/wolf/wolf");
  v33 = v32;
  v32 = (char *)&unk_28898CC;
  v34 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v35, v5, (int)&v33, 0);
  MobRenderer::MobRenderer(v3, (int *)&v36, (mce::TexturePtr *)&v35);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v35);
  v7 = v33 - 12;
  if ( (int *)(v33 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v33 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  v8 = v32 - 12;
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v32 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  if ( v36 )
    (*(void (**)(void))(*(_DWORD *)v36 + 4))();
  v36 = 0;
  *(_DWORD *)v3 = &off_26DC6C0;
  sub_119C884((void **)&v29, "textures/entity/wolf/wolf_angry");
  v30 = v29;
  v31 = 0;
  v29 = (char *)&unk_28898CC;
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 644), v5, (int)&v30, 0);
  v9 = v30 - 12;
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v30 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = v29 - 12;
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v29 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  sub_119C884((void **)&v26, "textures/entity/wolf/wolf_tame");
  v27 = v26;
  v26 = (char *)&unk_28898CC;
  v28 = 0;
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)(v3 + 668), v5, (int)&v27, 0);
  v11 = v27 - 12;
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v27 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = v26 - 12;
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v26 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  return v3;
}


void __fastcall WolfRenderer::~WolfRenderer(WolfRenderer *this)
{
  WolfRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DC6C0;
  mce::TexturePtr::~TexturePtr((WolfRenderer *)((char *)this + 668));
  mce::TexturePtr::~TexturePtr((WolfRenderer *)((char *)v1 + 644));
  MobRenderer::~MobRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


BaseEntityRenderer *__fastcall WolfRenderer::~WolfRenderer(WolfRenderer *this)
{
  WolfRenderer *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DC6C0;
  mce::TexturePtr::~TexturePtr((WolfRenderer *)((char *)this + 668));
  mce::TexturePtr::~TexturePtr((WolfRenderer *)((char *)v1 + 644));
  return j_j_j__ZN11MobRendererD2Ev(v1);
}


int __fastcall WolfRenderer::render(int a1, BaseEntityRenderContext *a2, Entity **a3)
{
  Entity **v3; // r4@1
  int v4; // r6@1
  Entity *v5; // r7@1
  BaseEntityRenderContext *v6; // r8@1
  char *v7; // r5@1
  int v8; // r0@2
  char *v9; // r0@4
  int v10; // r1@4
  int v11; // r2@4
  int v12; // r3@4
  int v13; // r0@4
  int v14; // r5@4
  int v15; // r2@4
  int v17; // [sp+8h] [bp-20h]@4
  int v18; // [sp+Ch] [bp-1Ch]@4

  v3 = a3;
  v4 = a1;
  v5 = *a3;
  v6 = a2;
  v7 = (char *)*a3 + 232;
  if ( Entity::isTame(*a3) == 1 )
    v8 = Entity::getColor(v5);
  else
    v8 = 0;
  v9 = Palette::getColor(v8);
  v10 = *(_DWORD *)v9;
  v11 = *((_DWORD *)v9 + 1);
  v12 = *((_DWORD *)v9 + 2);
  v13 = *((_DWORD *)v9 + 3);
  *(_DWORD *)v7 = v10;
  *((_DWORD *)v7 + 1) = v11;
  *((_DWORD *)v7 + 2) = v12;
  *((_DWORD *)v7 + 3) = v13;
  v14 = Entity::getStatusFlag((int)v5, 24);
  Entity::getOwnerId((Entity *)&v17, (int)v5);
  v15 = v4 + 144;
  if ( (v17 & v18) != -1 )
    v15 = v4 + 668;
  if ( v14 )
    v15 = v4 + 644;
  return MobRenderer::renderModel(v4, v6, (int)v3, *(_DWORD *)(v4 + 140), v15);
}


void __fastcall WolfRenderer::~WolfRenderer(WolfRenderer *this)
{
  WolfRenderer::~WolfRenderer(this);
}
