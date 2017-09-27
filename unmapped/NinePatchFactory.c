

void __fastcall NinePatchFactory::createSymmetrical(int a1, float a2, float _R2, int _R3, int a5, int a6, int a7)
{
  float v11; // r5@1
  NinePatchLayer **v12; // r4@1
  mce::TextureGroup *v19; // r6@3
  void *v20; // r0@3
  unsigned int *v21; // r2@5
  signed int v22; // r1@7
  int v23; // [sp+8h] [bp-78h]@3
  int v24; // [sp+Ch] [bp-74h]@3
  char v25; // [sp+10h] [bp-70h]@3
  float v26; // [sp+28h] [bp-58h]@3
  signed int v27; // [sp+58h] [bp-28h]@1
  signed int v28; // [sp+5Ch] [bp-24h]@1
  float v29; // [sp+60h] [bp-20h]@3
  float v30; // [sp+64h] [bp-1Ch]@3

  __asm { VLDR            S0, [SP,#0x80+arg_4] }
  v11 = a2;
  __asm
  {
    VLDR            S2, [SP,#0x80+arg_8]
    VMOV            S4, R3
    VSTR            S0, [SP,#0x80+var_1C]
  }
  v12 = (NinePatchLayer **)a1;
  __asm { VSTR            S2, [SP,#0x80+var_20] }
  _R1 = *(_DWORD *)(LODWORD(_R2) + 8);
  __asm { VLDR            S2, [R2,#4] }
  _R3 = _R1 - _R3;
    VLDR            S0, [R2]
    VCVT.F32.S32    S1, S4
  _R0 = a5;
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S4, S4
  _R2 = *(_DWORD *)(LODWORD(_R2) + 12);
    VMOV            S6, R1
    VCVT.F32.S32    S10, S6
    VMOV            S6, R0
  _R0 = _R2 - a5;
    VCVT.F32.S32    S3, S6
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S12, S6
    VMOV            S6, R2
    VADD.F32        S8, S4, S0
    VCVT.F32.S32    S14, S6
  _R0 = *(_QWORD *)(LODWORD(v11) + 12);
    VADD.F32        S6, S0, S1
    VSTR            S0, [SP,#0x80+var_58]
    VADD.F32        S10, S10, S0
    VADD.F32        S4, S2, S3
    VADD.F32        S12, S12, S2
    VADD.F32        S14, S14, S2
    VSTR            S6, [SP,#0x80+var_54]
    VSTR            S8, [SP,#0x80+var_50]
    VSTR            S10, [SP,#0x80+var_4C]
    VSTR            S2, [SP,#0x80+var_48]
    VSTR            S4, [SP,#0x80+var_44]
    VSTR            S12, [SP,#0x80+var_40]
    VSTR            S14, [SP,#0x80+var_3C]
    VSTR            S1, [SP,#0x80+var_38]
    VSTR            S1, [SP,#0x80+var_34]
    VSTR            S3, [SP,#0x80+var_30]
    VSTR            S3, [SP,#0x80+var_2C]
  v27 = -1;
  v28 = -1;
  if ( !(_NF ^ _VF) )
    __asm
    {
      VMOV            S3, R0
      VMOV            S5, R1
      VCVT.F32.S32    S3, S3
      VMOV.F32        S1, #1.0
      VCVT.F32.S32    S5, S5
      VDIV.F32        S3, S1, S3
      VDIV.F32        S1, S1, S5
      VMUL.F32        S0, S0, S3
      VMUL.F32        S6, S6, S3
      VMUL.F32        S8, S8, S3
      VMUL.F32        S10, S10, S3
      VMUL.F32        S2, S2, S1
      VMUL.F32        S4, S4, S1
      VMUL.F32        S12, S12, S1
      VMUL.F32        S14, S14, S1
      VSTR            S0, [SP,#0x80+var_58]
      VSTR            S6, [SP,#0x80+var_54]
      VSTR            S8, [SP,#0x80+var_50]
      VSTR            S10, [SP,#0x80+var_4C]
      VSTR            S2, [SP,#0x80+var_48]
      VSTR            S4, [SP,#0x80+var_44]
      VSTR            S12, [SP,#0x80+var_40]
      VSTR            S14, [SP,#0x80+var_3C]
    }
    *(_QWORD *)&v27 = _R0;
  v19 = *(mce::TextureGroup **)LODWORD(v11);
  sub_21E8AF4(&v23, (int *)(LODWORD(v11) + 4));
  v24 = *(_DWORD *)(LODWORD(v11) + 8);
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v25, v19, (int)&v23, 0);
  std::make_unique<NinePatchLayer,NinePatchDescription,mce::TexturePtr,float &,float &>(
    v12,
    (int)&v26,
    (int)&v25,
    (int)&v30,
    (int)&v29);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v25);
  v20 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
}


int __fastcall NinePatchFactory::NinePatchFactory(int a1, mce::TextureGroup *a2, int *a3)
{
  int v3; // r4@1
  const ResourceLocation *v4; // r5@1
  int *v5; // r6@1
  mce::TextureGroup *v6; // r7@1
  __int64 v7; // r0@1
  mce::TextureContainer *v8; // r6@1

  v3 = a1;
  v4 = (const ResourceLocation *)(a1 + 4);
  v5 = a3;
  v6 = a2;
  *(_DWORD *)a1 = a2;
  sub_21E8AF4((int *)(a1 + 4), a3);
  LODWORD(v7) = v5[1];
  HIDWORD(v7) = 1;
  *(_QWORD *)(v3 + 8) = v7;
  *(_DWORD *)(v3 + 16) = 1;
  v8 = (mce::TextureContainer *)(mce::TextureGroup::getTexturePair(v6, v4) + 64);
  *(_DWORD *)(v3 + 12) = *(_DWORD *)mce::TextureContainer::getTextureDescription(v8);
  *(_DWORD *)(v3 + 16) = *((_DWORD *)mce::TextureContainer::getTextureDescription(v8) + 1);
  return v3;
}


void __fastcall NinePatchFactory::createSymmetrical(int a1, float a2, float _R2, int _R3, int a5, int a6, int a7)
{
  NinePatchFactory::createSymmetrical(a1, a2, _R2, _R3, a5, a6, a7);
}
