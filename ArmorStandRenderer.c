

int __fastcall ArmorStandRenderer::setupRotations(int a1, int a2, int a3, int _R3, int a5)
{
  int result; // r0@1
  int v10; // [sp+0h] [bp-58h]@1
  signed int v11; // [sp+4h] [bp-54h]@1
  int v12; // [sp+8h] [bp-50h]@1
  int v13; // [sp+Ch] [bp-4Ch]@1
  int v14; // [sp+10h] [bp-48h]@1
  int v15; // [sp+14h] [bp-44h]@1
  int v16; // [sp+18h] [bp-40h]@1
  int v17; // [sp+1Ch] [bp-3Ch]@1
  int v18; // [sp+20h] [bp-38h]@1
  int v19; // [sp+24h] [bp-34h]@1
  int v20; // [sp+28h] [bp-30h]@1
  int v21; // [sp+2Ch] [bp-2Ch]@1
  int v22; // [sp+30h] [bp-28h]@1
  int v23; // [sp+34h] [bp-24h]@1
  int v24; // [sp+38h] [bp-20h]@1
  int v25; // [sp+3Ch] [bp-1Ch]@1
  int v26; // [sp+40h] [bp-18h]@1
  int v27; // [sp+44h] [bp-14h]@1
  int v28; // [sp+48h] [bp-10h]@1
  float v29; // [sp+4Ch] [bp-Ch]@1

  __asm
  {
    VMOV            S2, R3
    VLDR            S0, =180.0
    VSUB.F32        S0, S0, S2
  }
  v10 = 0;
  v11 = 1065353216;
  v12 = 0;
  __asm { VSTR            S0, [SP,#0x58+var_C] }
  glm::rotate<float>((int)&v13, a5, (int)&v29, (int)&v10);
  *(_DWORD *)a5 = v13;
  *(_DWORD *)(a5 + 4) = v14;
  *(_DWORD *)(a5 + 8) = v15;
  *(_DWORD *)(a5 + 12) = v16;
  *(_DWORD *)(a5 + 16) = v17;
  *(_DWORD *)(a5 + 20) = v18;
  *(_DWORD *)(a5 + 24) = v19;
  *(_DWORD *)(a5 + 28) = v20;
  *(_DWORD *)(a5 + 32) = v21;
  *(_DWORD *)(a5 + 36) = v22;
  *(_DWORD *)(a5 + 40) = v23;
  *(_DWORD *)(a5 + 44) = v24;
  *(_DWORD *)(a5 + 48) = v25;
  *(_DWORD *)(a5 + 52) = v26;
  *(_DWORD *)(a5 + 56) = v27;
  result = v28;
  *(_DWORD *)(a5 + 60) = v28;
  return result;
}


void __fastcall ArmorStandRenderer::~ArmorStandRenderer(ArmorStandRenderer *this)
{
  ArmorStandRenderer::~ArmorStandRenderer(this);
}


_DWORD *__fastcall ArmorStandRenderer::ArmorStandRenderer(_DWORD *a1, int *a2, int a3)
{
  int v3; // r6@1
  _DWORD *v4; // r4@1
  int v5; // r7@1
  _QWORD *v6; // r5@1
  _QWORD *v7; // r6@1
  int v8; // r0@1
  char v10; // [sp+8h] [bp-38h]@1
  _QWORD *v11; // [sp+20h] [bp-20h]@1
  _QWORD *v12; // [sp+24h] [bp-1Ch]@1
  int v13; // [sp+28h] [bp-18h]@1

  v3 = *a2;
  v4 = a1;
  v5 = a3;
  *a2 = 0;
  v13 = v3;
  v6 = operator new(0x10D4u);
  ArmorStandArmorModel::ArmorStandArmorModel(v6, 1.0);
  v12 = v6;
  v7 = operator new(0x10D4u);
  ArmorStandArmorModel::ArmorStandArmorModel(v7, 0.5);
  v11 = v7;
  v8 = mce::TexturePtr::TexturePtr((int)&v10, v5);
  HumanoidMobRenderer::HumanoidMobRenderer((int)v4, COERCE_FLOAT(&v13), (int *)&v12, &v11, v8, 0);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v10);
  if ( v11 )
    (*(void (**)(void))(*(_DWORD *)v11 + 4))();
  v11 = 0;
  if ( v12 )
    (*(void (**)(void))(*(_DWORD *)v12 + 4))();
  v12 = 0;
  if ( v13 )
    (*(void (**)(void))(*(_DWORD *)v13 + 4))();
  *v4 = &off_26E688C;
  return v4;
}


int __fastcall ArmorStandRenderer::getBob(ArmorStandRenderer *this, Mob *a2, float a3)
{
  return 0;
}


void __fastcall ArmorStandRenderer::~ArmorStandRenderer(ArmorStandRenderer *this)
{
  BaseEntityRenderer *v1; // r0@1

  v1 = HumanoidMobRenderer::~HumanoidMobRenderer(this);
  j_j_j__ZdlPv_5((void *)v1);
}
