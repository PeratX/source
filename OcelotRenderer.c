

void __fastcall OcelotRenderer::~OcelotRenderer(OcelotRenderer *this)
{
  OcelotRenderer::~OcelotRenderer(this);
}


int __fastcall OcelotRenderer::OcelotRenderer(int a1, mce::TextureGroup *a2, const GeometryPtr *a3)
{
  int v3; // r4@1
  const GeometryPtr *v4; // r7@1
  mce::TextureGroup *v5; // r6@1
  OcelotModel *v6; // r5@1
  char *v7; // r0@1
  char *v8; // r0@2
  int *v9; // r5@5
  mce::TexturePtr *v10; // r7@5
  char *v11; // r0@5
  char *v12; // r0@6
  int v13; // r7@7
  char *v14; // r0@7
  char *v15; // r0@8
  int v16; // r7@9
  char *v17; // r0@9
  char *v18; // r0@10
  int v19; // r7@11
  char *v20; // r0@11
  char *v21; // r0@12
  unsigned int *v23; // r2@14
  signed int v24; // r1@16
  unsigned int *v25; // r2@18
  signed int v26; // r1@20
  unsigned int *v27; // r2@22
  signed int v28; // r1@24
  unsigned int *v29; // r2@26
  signed int v30; // r1@28
  unsigned int *v31; // r2@30
  signed int v32; // r1@32
  unsigned int *v33; // r2@34
  signed int v34; // r1@36
  unsigned int *v35; // r2@38
  signed int v36; // r1@40
  unsigned int *v37; // r2@42
  signed int v38; // r1@44
  unsigned int *v39; // r2@46
  signed int v40; // r1@48
  unsigned int *v41; // r2@50
  signed int v42; // r1@52
  char *v43; // [sp+4h] [bp-E4h]@11
  char *v44; // [sp+8h] [bp-E0h]@11
  int v45; // [sp+Ch] [bp-DCh]@11
  char v46; // [sp+10h] [bp-D8h]@11
  char *v47; // [sp+2Ch] [bp-BCh]@9
  char *v48; // [sp+30h] [bp-B8h]@9
  int v49; // [sp+34h] [bp-B4h]@9
  char v50; // [sp+38h] [bp-B0h]@9
  char *v51; // [sp+54h] [bp-94h]@7
  char *v52; // [sp+58h] [bp-90h]@7
  int v53; // [sp+5Ch] [bp-8Ch]@7
  char v54; // [sp+60h] [bp-88h]@7
  char *v55; // [sp+7Ch] [bp-6Ch]@5
  char *v56; // [sp+80h] [bp-68h]@5
  int v57; // [sp+84h] [bp-64h]@5
  char v58; // [sp+88h] [bp-60h]@5
  char *v59; // [sp+A4h] [bp-44h]@1
  char *v60; // [sp+A8h] [bp-40h]@1
  int v61; // [sp+ACh] [bp-3Ch]@1
  char v62; // [sp+B0h] [bp-38h]@1
  OcelotModel *v63; // [sp+C8h] [bp-20h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (OcelotModel *)operator new(0x720u);
  OcelotModel::OcelotModel(v6, v4);
  v63 = v6;
  sub_119C884((void **)&v59, "textures/entity/cat/ocelot");
  v60 = v59;
  v59 = (char *)&unk_28898CC;
  v61 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v62, v5, (int)&v60, 0);
  MobRenderer::MobRenderer(v3, (int *)&v63, (mce::TexturePtr *)&v62);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v62);
  v7 = v60 - 12;
  if ( (int *)(v60 - 12) != &dword_28898C0 )
  {
    v23 = (unsigned int *)(v60 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
    }
    else
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  v8 = v59 - 12;
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v59 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  if ( v63 )
    (*(void (**)(void))(*(_DWORD *)v63 + 4))();
  v9 = (int *)(v3 + 644);
  v63 = 0;
  *(_DWORD *)v3 = &off_26DBCB0;
  *(_DWORD *)(v3 + 644) = 0;
  *(_DWORD *)(v3 + 648) = 0;
  *(_DWORD *)(v3 + 652) = 0;
  std::vector<mce::TexturePtr,std::allocator<mce::TexturePtr>>::_M_default_append(v3 + 644, 4u);
  v10 = *(mce::TexturePtr **)(v3 + 644);
  sub_119C884((void **)&v55, "textures/entity/cat/ocelot");
  v56 = v55;
  v55 = (char *)&unk_28898CC;
  v57 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v58, v5, (int)&v56, 0);
  mce::TexturePtr::operator=(v10, (mce::TexturePtr *)&v58);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v58);
  v11 = v56 - 12;
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v56 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = v55 - 12;
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v55 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = *v9;
  sub_119C884((void **)&v51, "textures/entity/cat/blackcat");
  v52 = v51;
  v51 = (char *)&unk_28898CC;
  v53 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v54, v5, (int)&v52, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v13 + 24), (mce::TexturePtr *)&v54);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v54);
  v14 = v52 - 12;
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v52 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = v51 - 12;
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v51 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = *v9;
  sub_119C884((void **)&v47, "textures/entity/cat/red");
  v48 = v47;
  v47 = (char *)&unk_28898CC;
  v49 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v50, v5, (int)&v48, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v16 + 48), (mce::TexturePtr *)&v50);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v50);
  v17 = v48 - 12;
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v48 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  v18 = v47 - 12;
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v47 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v19 = *v9;
  sub_119C884((void **)&v43, "textures/entity/cat/siamese");
  v44 = v43;
  v43 = (char *)&unk_28898CC;
  v45 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v46, v5, (int)&v44, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)(v19 + 72), (mce::TexturePtr *)&v46);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v46);
  v20 = v44 - 12;
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v44 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  v21 = v43 - 12;
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v43 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  return v3;
}


void __fastcall OcelotRenderer::~OcelotRenderer(OcelotRenderer *this)
{
  OcelotRenderer *v1; // r4@1
  char *v2; // r0@1
  char *v3; // r5@1
  int v4; // r6@2

  v1 = this;
  *(_DWORD *)this = &off_26DBCB0;
  v3 = (char *)(*(_QWORD *)((char *)this + 644) >> 32);
  v2 = (char *)*(_QWORD *)((char *)this + 644);
  if ( v2 != v3 )
  {
    do
    {
      v4 = (int)(v2 + 24);
      (**(void (***)(void))v2)();
      v2 = (char *)v4;
    }
    while ( v3 != (char *)v4 );
    v2 = (char *)*((_DWORD *)v1 + 161);
  }
  if ( v2 )
    operator delete(v2);
  MobRenderer::~MobRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall OcelotRenderer::render(int a1, BaseEntityRenderContext *a2, Entity **a3)
{
  Entity **v3; // r4@1
  int v4; // r6@1
  BaseEntityRenderContext *v5; // r5@1
  int v6; // r7@1
  int v7; // r0@1

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = *(_DWORD *)(a1 + 140);
  v7 = Entity::getVariant(*a3);
  return MobRenderer::renderModel(v4, v5, (int)v3, v6, *(_DWORD *)(v4 + 644) + 24 * v7);
}


BaseEntityRenderer *__fastcall OcelotRenderer::~OcelotRenderer(OcelotRenderer *this)
{
  OcelotRenderer *v1; // r4@1
  char *v2; // r0@1
  char *v3; // r5@1
  int v4; // r6@2

  v1 = this;
  *(_DWORD *)this = &off_26DBCB0;
  v3 = (char *)(*(_QWORD *)((char *)this + 644) >> 32);
  v2 = (char *)*(_QWORD *)((char *)this + 644);
  if ( v2 != v3 )
  {
    do
    {
      v4 = (int)(v2 + 24);
      (**(void (***)(void))v2)();
      v2 = (char *)v4;
    }
    while ( v3 != (char *)v4 );
    v2 = (char *)*((_DWORD *)v1 + 161);
  }
  if ( v2 )
    operator delete(v2);
  return j_j_j__ZN11MobRendererD2Ev(v1);
}
