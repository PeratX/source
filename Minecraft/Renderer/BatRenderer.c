

void __fastcall BatRenderer::~BatRenderer(BatRenderer *this)
{
  BatRenderer::~BatRenderer(this);
}


void __fastcall BatRenderer::setupScale(int a1, int a2, int _R2)
{
  BatRenderer::setupScale(a1, a2, _R2);
}


int __fastcall BatRenderer::setupRotations(int a1, Entity *this, int a3, int a4, int a5, int a6)
{
  Entity *v6; // r6@1
  int v8; // r7@1
  int v9; // r8@1
  float v14; // r1@1

  v6 = this;
  _R5 = a3;
  v8 = a1;
  v9 = a4;
  __asm { VMOV            S16, R5 }
  _R4 = a5;
  if ( Entity::isResting(this) )
  {
    __asm
    {
      VLDR            S0, =0.1
      VLDR            S2, [R4,#0x14]
      VLDR            S4, [R4,#0x18]
      VLDR            S8, [R4,#0x10]
      VMUL.F32        S2, S2, S0
      VLDR            S6, [R4,#0x1C]
      VMUL.F32        S4, S4, S0
      VMUL.F32        S8, S8, S0
      VLDR            S10, [R4,#0x34]
      VMUL.F32        S0, S6, S0
      VLDR            S6, [R4,#0x30]
      VLDR            S12, [R4,#0x38]
      VLDR            S14, [R4,#0x3C]
      VSUB.F32        S2, S10, S2
      VSUB.F32        S4, S12, S4
      VSUB.F32        S6, S6, S8
      VSUB.F32        S0, S14, S0
    }
  }
  else
      VLDR            S0, =0.3
      VMUL.F32        S0, S16, S0
      VMOV            R0, S0
    _R0 = mce::Math::cos(_R0, v14);
      VMOV            S2, R0
      VMUL.F32        S0, S2, S0
      VADD.F32        S2, S10, S2
      VADD.F32        S4, S12, S4
      VADD.F32        S6, S6, S8
      VADD.F32        S0, S14, S0
  __asm
    VSTR            S6, [R4,#0x30]
    VSTR            S2, [R4,#0x34]
    VSTR            S4, [R4,#0x38]
    VSTR            S0, [R4,#0x3C]
  return j_j_j__ZNK11MobRenderer14setupRotationsERK6EntityffR6Matrixf_0(v8, *(float *)&v6, _R5, v9, a5, a6);
}


_DWORD *__fastcall BatRenderer::BatRenderer(_DWORD *a1, mce::TextureGroup *a2, const GeometryPtr *a3)
{
  _DWORD *v3; // r4@1
  const GeometryPtr *v4; // r7@1
  mce::TextureGroup *v5; // r5@1
  BatModel *v6; // r6@1
  char *v7; // r0@1
  char *v8; // r0@2
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  char *v14; // [sp+8h] [bp-40h]@1
  char *v15; // [sp+Ch] [bp-3Ch]@1
  int v16; // [sp+10h] [bp-38h]@1
  char v17; // [sp+14h] [bp-34h]@1
  BatModel *v18; // [sp+2Ch] [bp-1Ch]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (BatModel *)operator new(0x71Cu);
  BatModel::BatModel(v6, v4);
  v18 = v6;
  sub_21E94B4((void **)&v14, "textures/entity/bat");
  v15 = v14;
  v14 = (char *)&unk_28898CC;
  v16 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v17, v5, (int)&v15, 0);
  MobRenderer::MobRenderer((int)v3, (int *)&v18, (mce::TexturePtr *)&v17);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v17);
  v7 = v15 - 12;
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v15 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
  }
  v8 = v14 - 12;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v14 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  if ( v18 )
    (*(void (**)(void))(*(_DWORD *)v18 + 4))();
  *v3 = &off_26E6960;
  return v3;
}


void __fastcall BatRenderer::~BatRenderer(BatRenderer *this)
{
  BaseEntityRenderer *v1; // r0@1

  v1 = MobRenderer::~MobRenderer(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall BatRenderer::setupScale(int a1, int a2, int _R2)
{
  __asm
  {
    VLDR            S0, =0.35
    VLDR            S2, [R2]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R2]
    VLDR            S2, [R2,#4]
    VSTR            S2, [R2,#4]
    VLDR            S2, [R2,#8]
    VSTR            S2, [R2,#8]
    VLDR            S2, [R2,#0xC]
    VSTR            S2, [R2,#0xC]
    VLDR            S2, [R2,#0x10]
    VSTR            S2, [R2,#0x10]
    VLDR            S2, [R2,#0x14]
    VSTR            S2, [R2,#0x14]
    VLDR            S2, [R2,#0x18]
    VSTR            S2, [R2,#0x18]
    VLDR            S2, [R2,#0x1C]
    VSTR            S2, [R2,#0x1C]
    VLDR            S2, [R2,#0x20]
    VSTR            S2, [R2,#0x20]
    VLDR            S2, [R2,#0x24]
    VSTR            S2, [R2,#0x24]
    VLDR            S2, [R2,#0x28]
    VSTR            S2, [R2,#0x28]
    VLDR            S2, [R2,#0x2C]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R2,#0x2C]
  }
}
