

void __fastcall TripodCameraRenderer::~TripodCameraRenderer(TripodCameraRenderer *this)
{
  TripodCameraRenderer::~TripodCameraRenderer(this);
}


void __fastcall TripodCameraRenderer::~TripodCameraRenderer(TripodCameraRenderer *this)
{
  BaseEntityRenderer *v1; // r0@1

  v1 = MobRenderer::~MobRenderer(this);
  j_j_j__ZdlPv_4((void *)v1);
}


TripodCameraRenderer *__fastcall TripodCameraRenderer::TripodCameraRenderer(TripodCameraRenderer *a1, mce::TextureGroup *a2)
{
  TripodCameraRenderer *v2; // r4@1
  mce::TextureGroup *v3; // r5@1
  TripodCameraModel *v4; // r6@1
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
  TripodCameraModel *v16; // [sp+28h] [bp-18h]@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_26DC3E4;
  v4 = (TripodCameraModel *)operator new(0x48Cu);
  TripodCameraModel::TripodCameraModel(v4, v2);
  v16 = v4;
  sub_119C884((void **)&v12, "textures/entity/camera_tripod");
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
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  v6 = v12 - 12;
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  if ( v16 )
    (*(void (**)(void))(*(_DWORD *)v16 + 4))();
  *(_DWORD *)v2 = &off_26DC3E4;
  return v2;
}


int __fastcall TripodCameraRenderer::setupColorOverlay(float a1, int a2, float a3, float a4, int a5)
{
  __asm
  {
    VLDR            S0, [SP,#0x10+arg_0]
    VSTR            S0, [SP,#0x10+var_10]
  }
  return EntityShaderManager::_setupShaderParameters(SLODWORD(a1), a2, a3, a4);
}
