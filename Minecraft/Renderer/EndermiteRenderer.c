

_DWORD *__fastcall EndermiteRenderer::EndermiteRenderer(_DWORD *a1, mce::TextureGroup *a2)
{
  _DWORD *v2; // r4@1
  mce::TextureGroup *v3; // r5@1
  EndermiteModel *v4; // r6@1
  char *v5; // r0@1
  char *v6; // r0@2
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  char *v12; // [sp+4h] [bp-3Ch]@1
  char *v13; // [sp+8h] [bp-38h]@1
  int v14; // [sp+Ch] [bp-34h]@1
  char v15; // [sp+10h] [bp-30h]@1
  EndermiteModel *v16; // [sp+28h] [bp-18h]@1

  v2 = a1;
  v3 = a2;
  v4 = (EndermiteModel *)operator new(0x900u);
  EndermiteModel::EndermiteModel(v4);
  v16 = v4;
  sub_21E94B4((void **)&v12, "textures/entity/endermite");
  v13 = v12;
  v12 = (char *)&unk_28898CC;
  v14 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v15, v3, (int)&v13, 0);
  MobRenderer::MobRenderer((int)v2, (int *)&v16, (mce::TexturePtr *)&v15);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v15);
  v5 = v13 - 12;
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = v12 - 12;
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  if ( v16 )
    (*(void (**)(void))(*(_DWORD *)v16 + 4))();
  *v2 = &off_26E6D04;
  return v2;
}


void __fastcall EndermiteRenderer::~EndermiteRenderer(EndermiteRenderer *this)
{
  BaseEntityRenderer *v1; // r0@1

  v1 = MobRenderer::~MobRenderer(this);
  j_j_j__ZdlPv_5((void *)v1);
}


signed int __fastcall EndermiteRenderer::getFlipDegrees(EndermiteRenderer *this, const Mob *a2)
{
  return 1127481344;
}


_DWORD *__fastcall EndermiteRenderer::EndermiteRenderer(_DWORD *a1, mce::TextureGroup *a2, int *a3)
{
  mce::TextureGroup *v3; // r6@1
  int v4; // r5@1
  _DWORD *v5; // r4@1
  char *v6; // r0@1
  char *v7; // r0@2
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  char *v13; // [sp+8h] [bp-40h]@1
  char *v14; // [sp+Ch] [bp-3Ch]@1
  int v15; // [sp+10h] [bp-38h]@1
  char v16; // [sp+14h] [bp-34h]@1
  int v17; // [sp+2Ch] [bp-1Ch]@1

  v3 = a2;
  v4 = *a3;
  v5 = a1;
  *a3 = 0;
  v17 = v4;
  sub_21E94B4((void **)&v13, "textures/entity/endermite");
  v14 = v13;
  v15 = 0;
  v13 = (char *)&unk_28898CC;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v16, v3, (int)&v14, 0);
  MobRenderer::MobRenderer((int)v5, &v17, (mce::TexturePtr *)&v16);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v16);
  v6 = v14 - 12;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  v7 = v13 - 12;
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v13 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  if ( v17 )
    (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  *v5 = &off_26E6D04;
  return v5;
}


void __fastcall EndermiteRenderer::~EndermiteRenderer(EndermiteRenderer *this)
{
  EndermiteRenderer::~EndermiteRenderer(this);
}
