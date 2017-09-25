

BaseEntityRenderer *__fastcall NpcRenderer::~NpcRenderer(NpcRenderer *this)
{
  NpcRenderer *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26DBC4C;
  v2 = *((_DWORD *)this + 169);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 169) = 0;
  return j_j_j__ZN19HumanoidMobRendererD2Ev(v1);
}


mce::TexturePtr *__fastcall NpcRenderer::render(int a1, BaseEntityRenderContext *a2, Npc **a3)
{
  Npc **v3; // r4@1
  int v4; // r6@1
  BaseEntityRenderContext *v5; // r5@1
  const void **v6; // r0@1
  char v8; // [sp+4h] [bp-2Ch]@1

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = Npc::getSkinId(*a3);
  NpcRenderer::_getSkinTexture((mce::TexturePtr *)&v8, v4, v6);
  MobRenderer::renderModel(v4, v5, (int)v3, *(_DWORD *)(v4 + 140), (int)&v8);
  return mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v8);
}


void __fastcall NpcRenderer::~NpcRenderer(NpcRenderer *this)
{
  NpcRenderer::~NpcRenderer(this);
}


mce::TexturePtr *__fastcall NpcRenderer::renderGui(int a1, int a2, const void **a3, int a4)
{
  int v4; // r6@1
  int v5; // r5@1
  int v6; // r4@1
  char v8; // [sp+4h] [bp+0h]@1

  v4 = a1;
  v5 = a2;
  v6 = a4;
  NpcRenderer::_getSkinTexture((mce::TexturePtr *)&v8, a1, a3);
  *(_DWORD *)(*(_DWORD *)(v4 + 676) + 32) = &v8;
  NPCModel::renderGui(*(_DWORD *)(v4 + 676), v5, v6);
  return mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v8);
}


int __fastcall NpcRenderer::NpcRenderer(int a1, mce::TextureGroup *a2, const GeometryPtr *a3, int a4)
{
  int v4; // r4@1
  const GeometryPtr *v6; // r8@1
  mce::TextureGroup *v7; // r6@1
  NPCModel *v8; // r5@1
  HumanoidModel *v9; // r5@1
  HumanoidModel *v10; // r5@1
  mce::TexturePtr *v11; // r0@1
  char *v16; // r0@1
  char *v17; // r0@2
  NPCModel *v18; // r5@9
  unsigned int *v20; // r2@10
  signed int v21; // r1@12
  unsigned int *v22; // r2@14
  signed int v23; // r1@16
  int v24; // [sp+4h] [bp-54h]@0
  char *v25; // [sp+Ch] [bp-4Ch]@1
  char *v26; // [sp+10h] [bp-48h]@1
  int v27; // [sp+14h] [bp-44h]@1
  char v28; // [sp+18h] [bp-40h]@1
  HumanoidModel *v29; // [sp+30h] [bp-28h]@1
  HumanoidModel *v30; // [sp+34h] [bp-24h]@1
  NPCModel *v31; // [sp+38h] [bp-20h]@1

  v4 = a1;
  _R7 = a4;
  v6 = a3;
  v7 = a2;
  v8 = (NPCModel *)operator new(0x1450u);
  NPCModel::NPCModel(v8, v6);
  v31 = v8;
  v9 = (HumanoidModel *)operator new(0x10D4u);
  HumanoidModel::HumanoidModel(v9, 1.0, 0.0, 64, 32);
  v30 = v9;
  v10 = (HumanoidModel *)operator new(0x10D4u);
  HumanoidModel::HumanoidModel(v10, 0.5, 0.0, 64, 32);
  v29 = v10;
  sub_119C854((int *)&v25, (int *)(Npc::Skins + 4));
  v26 = v25;
  v25 = (char *)&unk_28898CC;
  v27 = 0;
  v11 = mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v28, v7, (int)&v26, 0);
  __asm
  {
    VMOV            S0, R7
    VSTR            S0, [SP,#0x58+var_54]
  }
  HumanoidMobRenderer::HumanoidMobRenderer(v4, COERCE_FLOAT(&v31), (int *)&v30, &v29, (int)v11, v24);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v28);
  v16 = v26 - 12;
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v26 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    }
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = v25 - 12;
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v25 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  v29 = 0;
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  v30 = 0;
  if ( v31 )
    (*(void (**)(void))(*(_DWORD *)v31 + 4))();
  v31 = 0;
  *(_DWORD *)v4 = &off_26DBC4C;
  *(_DWORD *)(v4 + 672) = v7;
  v18 = (NPCModel *)operator new(0x1450u);
  NPCModel::NPCModel(v18, v6);
  *(_DWORD *)(v4 + 676) = v18;
  return v4;
}


void __fastcall NpcRenderer::~NpcRenderer(NpcRenderer *this)
{
  NpcRenderer *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26DBC4C;
  v2 = *((_DWORD *)this + 169);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 169) = 0;
  HumanoidMobRenderer::~HumanoidMobRenderer(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall NpcRenderer::_getSkinTexture(mce::TexturePtr *a1, int a2, const void **a3)
{
  mce::TexturePtr *v3; // r8@1
  int v4; // r9@1
  __int64 v5; // kr00_8@1
  const void *v6; // r6@2
  int v7; // r4@2
  size_t v8; // r7@2
  mce::TextureGroup *v9; // r5@6
  char *v10; // r0@6
  char *v11; // r0@7
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  mce::TextureGroup *v14; // r5@12
  char *v15; // r0@12
  unsigned int *v16; // r2@18
  signed int v17; // r1@20
  unsigned int *v18; // r2@30
  signed int v19; // r1@32
  char *v20; // [sp+4h] [bp-3Ch]@6
  char *v21; // [sp+8h] [bp-38h]@6
  int v22; // [sp+Ch] [bp-34h]@6
  char *v23; // [sp+10h] [bp-30h]@12
  char *v24; // [sp+14h] [bp-2Ch]@12
  int v25; // [sp+18h] [bp-28h]@12

  v3 = a1;
  v4 = a2;
  v5 = *(_QWORD *)&Npc::Skins;
  if ( Npc::Skins == dword_2801854 )
  {
LABEL_6:
    v9 = *(mce::TextureGroup **)(v4 + 672);
    sub_119C854((int *)&v20, (int *)(v5 + 4));
    v21 = v20;
    v20 = (char *)&unk_28898CC;
    v22 = 0;
    mce::TexturePtr::TexturePtr(v3, v9, (int)&v21, 0);
    v10 = v21 - 12;
    if ( (int *)(v21 - 12) != &dword_28898C0 )
    {
      v16 = (unsigned int *)(v21 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      }
      else
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v10);
    }
    v11 = v20 - 12;
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v20 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        goto LABEL_23;
LABEL_22:
      v13 = (*v12)--;
LABEL_23:
      if ( v13 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v11);
      return;
  }
  else
    v6 = *a3;
    v7 = Npc::Skins;
    v8 = *((_DWORD *)*a3 - 3);
    while ( *(_DWORD *)(*(_DWORD *)v7 - 12) != v8 || memcmp(*(const void **)v7, v6, v8) )
      v7 += 8;
      if ( HIDWORD(v5) == v7 )
        goto LABEL_6;
    v14 = *(mce::TextureGroup **)(v4 + 672);
    sub_119C854((int *)&v23, (int *)(v7 + 4));
    v24 = v23;
    v23 = (char *)&unk_28898CC;
    v25 = 0;
    mce::TexturePtr::TexturePtr(v3, v14, (int)&v24, 0);
    v15 = v24 - 12;
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v24 - 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
    v11 = v23 - 12;
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v23 - 4);
      goto LABEL_22;
}


void __fastcall NpcRenderer::_getSkinTexture(mce::TexturePtr *a1, int a2, const void **a3)
{
  NpcRenderer::_getSkinTexture(a1, a2, a3);
}
