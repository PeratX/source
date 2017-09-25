

int __fastcall ChickenRenderer::getBob(ChickenRenderer *this, Mob *a2, float a3)
{
  Mob *v3; // r4@1
  float v16; // r1@1
  int result; // r0@1

  v3 = a2;
  _R5 = a3;
  _R6 = Chicken::getOFlap(a2);
  _R0 = Chicken::getFlap(v3);
  __asm { VMOV            S16, R0 }
  _R0 = Chicken::getOFlap(v3);
  __asm
  {
    VMOV            S0, R0
    VMOV            S2, R6
    VSUB.F32        S0, S16, S0
    VMOV            S16, R5
    VMUL.F32        S0, S0, S16
    VADD.F32        S18, S0, S2
  }
  _R5 = Chicken::getOFlapSpeed(v3);
  _R0 = Chicken::getFlapSpeed(v3);
    VMOV            R6, S18
    VMOV            S18, R0
  _R0 = Chicken::getOFlapSpeed(v3);
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


void __fastcall ChickenRenderer::~ChickenRenderer(ChickenRenderer *this)
{
  BaseEntityRenderer *v1; // r0@1

  v1 = MobRenderer::~MobRenderer(this);
  j_j_j__ZdlPv_5((void *)v1);
}


_DWORD *__fastcall ChickenRenderer::ChickenRenderer(_DWORD *a1, mce::TextureGroup *a2, int *a3)
{
  mce::TextureGroup *v3; // r7@1
  int v4; // r6@1
  _DWORD *v5; // r8@1
  char *v6; // r0@1
  char *v7; // r0@2
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  char *v13; // [sp+4h] [bp-44h]@1
  char *v14; // [sp+8h] [bp-40h]@1
  int v15; // [sp+Ch] [bp-3Ch]@1
  char v16; // [sp+10h] [bp-38h]@1
  int v17; // [sp+28h] [bp-20h]@1

  v3 = a2;
  v4 = *a3;
  v5 = a1;
  *a3 = 0;
  v17 = v4;
  sub_21E94B4((void **)&v13, "textures/entity/chicken");
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
  *v5 = &off_26E6A90;
  return v5;
}


void __fastcall ChickenRenderer::~ChickenRenderer(ChickenRenderer *this)
{
  ChickenRenderer::~ChickenRenderer(this);
}
