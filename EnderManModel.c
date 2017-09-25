

void __fastcall EnderManModel::~EnderManModel(EnderManModel *this)
{
  EnderManModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E6CAC;
  ModelPart::~ModelPart((EnderManModel *)((char *)this + 4348));
  mce::MaterialPtr::~MaterialPtr((EnderManModel *)((char *)v1 + 4336));
  mce::MaterialPtr::~MaterialPtr((EnderManModel *)((char *)v1 + 4324));
  mce::MaterialPtr::~MaterialPtr((EnderManModel *)((char *)v1 + 4312));
  HumanoidModel::~HumanoidModel(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


AppPlatformListener *__fastcall EnderManModel::~EnderManModel(EnderManModel *this)
{
  EnderManModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E6CAC;
  ModelPart::~ModelPart((EnderManModel *)((char *)this + 4348));
  mce::MaterialPtr::~MaterialPtr((EnderManModel *)((char *)v1 + 4336));
  mce::MaterialPtr::~MaterialPtr((EnderManModel *)((char *)v1 + 4324));
  mce::MaterialPtr::~MaterialPtr((EnderManModel *)((char *)v1 + 4312));
  return j_j_j__ZN13HumanoidModelD2Ev_0(v1);
}


unsigned __int64 __fastcall EnderManModel::render(float a1, float a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  float v13; // r4@1
  int v14; // r5@1
  __int64 v15; // r0@1
  float v18; // [sp+0h] [bp-30h]@0
  int v19; // [sp+4h] [bp-2Ch]@0
  int v20; // [sp+8h] [bp-28h]@0
  int v21; // [sp+Ch] [bp-24h]@0
  int v22; // [sp+10h] [bp-20h]@0

  __asm { VLDR            S4, [SP,#0x30+arg_0] }
  v13 = a2;
  __asm { VLDR            S0, [SP,#0x30+arg_8] }
  v14 = LODWORD(a1);
  __asm
  {
    VLDR            S2, [SP,#0x30+arg_4]
    VLDR            S6, [SP,#0x30+arg_C]
    VLDR            S16, [SP,#0x30+arg_10]
    VSTR            S4, [SP,#0x30+var_30]
    VSTR            S2, [SP,#0x30+var_2C]
    VSTR            S0, [SP,#0x30+var_28]
    VSTR            S6, [SP,#0x30+var_24]
    VSTR            S16, [SP,#0x30+var_20]
  }
  v15 = HumanoidModel::render(a1, a2, a3, a4, v18, v19, v20, v21, v22);
  __asm { VMOV            R3, S16 }
  LODWORD(v15) = v14 + 4348;
  return __PAIR__(LODWORD(v13), ModelPart::render(v15, v14, _R3, 0, 0));
}


_QWORD *__fastcall EnderManModel::EnderManModel(_QWORD *a1, int a2)
{
  _QWORD *v2; // r4@1
  int v3; // r6@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  void *v11; // r0@8
  void *v12; // r0@9
  void *v13; // r0@10
  unsigned int *v15; // r2@12
  signed int v16; // r1@14
  unsigned int *v17; // r2@16
  signed int v18; // r1@18
  unsigned int *v19; // r2@20
  signed int v20; // r1@22
  unsigned int *v21; // r2@24
  signed int v22; // r1@26
  unsigned int *v23; // r2@28
  signed int v24; // r1@30
  unsigned int *v25; // r2@32
  signed int v26; // r1@34
  unsigned int *v27; // r2@36
  signed int v28; // r1@38
  unsigned int *v29; // r2@40
  signed int v30; // r1@42
  unsigned int *v31; // r2@44
  signed int v32; // r1@46
  unsigned int *v33; // r2@48
  signed int v34; // r1@50
  int v35; // [sp+8h] [bp-70h]@10
  int v36; // [sp+10h] [bp-68h]@9
  int v37; // [sp+18h] [bp-60h]@8
  int v38; // [sp+20h] [bp-58h]@7
  int v39; // [sp+28h] [bp-50h]@6
  int v40; // [sp+30h] [bp-48h]@5
  int v41; // [sp+38h] [bp-40h]@4
  int v42; // [sp+40h] [bp-38h]@3
  int v43; // [sp+48h] [bp-30h]@2
  int v44; // [sp+50h] [bp-28h]@1

  v2 = a1;
  v3 = a2;
  HumanoidModel::HumanoidModel(a1, 0.0, -1050673152, 64, 32);
  *(_DWORD *)v2 = &off_26E6CAC;
  *((_WORD *)v2 + 2154) = 0;
  sub_21E94B4((void **)&v44, "enderman");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v2 + 539),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v44);
  v4 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v44 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v43, "enderman_head");
    (mce::MaterialPtr *)((char *)v2 + 4324),
    &v43);
  v5 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v43 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v42, "enderman_scary_face");
    (mce::MaterialPtr *)(v2 + 542),
    &v42);
  v6 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v42 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v2 + 4348)), 0, 0, 64, 32);
  *((_DWORD *)v2 + 7) = v2 + 539;
  sub_21E94B4((void **)&v41, "hat");
  ModelPart::load((int)v2 + 4348, v3, (const void **)&v41, 0);
  v7 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v41 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  *((_DWORD *)v2 + 1109) = v2 + 542;
  sub_21E94B4((void **)&v40, "head");
  ModelPart::load((int)(v2 + 12), v3, (const void **)&v40, 0);
  v8 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v40 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  *((_DWORD *)v2 + 46) = (char *)v2 + 4324;
  sub_21E94B4((void **)&v39, "body");
  ModelPart::load((int)(v2 + 67), v3, (const void **)&v39, 0);
  v9 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v39 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v38, "rightArm");
  ModelPart::load((int)v2 + 756, v3, (const void **)&v38, 0);
  v10 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v38 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v37, "leftArm");
  ModelPart::load((int)(v2 + 122), v3, (const void **)&v37, 0);
  v11 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v37 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v36, "rightLeg");
  ModelPart::load((int)v2 + 1196, v3, (const void **)&v36, 0);
  v12 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v36 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v35, "leftLeg");
  ModelPart::load((int)(v2 + 177), v3, (const void **)&v35, 0);
  v13 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v35 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  return v2;
}


void __fastcall EnderManModel::~EnderManModel(EnderManModel *this)
{
  EnderManModel::~EnderManModel(this);
}


unsigned int __fastcall EnderManModel::setupAnim(EnderManModel *this, float a2, float a3, float a4, float a5, float a6, float a7)
{
  unsigned int result; // r0@17
  float v15; // [sp+0h] [bp-18h]@0
  float v16; // [sp+4h] [bp-14h]@0
  float v17; // [sp+8h] [bp-10h]@0

  __asm { VLDR            S0, [SP,#0x18+arg_0] }
  _R4 = this;
  __asm
  {
    VLDR            S2, [SP,#0x18+arg_4]
    VLDR            S4, [SP,#0x18+arg_8]
    VSTR            S0, [SP,#0x18+var_18]
    VSTR            S2, [SP,#0x18+var_14]
    VSTR            S4, [SP,#0x18+var_10]
  }
  HumanoidModel::setupAnim(this, a2, a3, a4, v15, v16, v17);
  __asm { VMOV.F32        S0, #0.5 }
  *((_BYTE *)_R4 + 149) = 1;
  *((_DWORD *)_R4 + 143) = 0;
  _R1 = (EnderManModel *)((char *)_R4 + 1232);
  *((_DWORD *)_R4 + 135) = -1050673152;
  *((_DWORD *)_R4 + 136) = 2147483648;
  _R0 = (EnderManModel *)((char *)_R4 + 1452);
    VLDR            S2, [R4,#0x318]
    VLDR            S6, =-0.4
    VMUL.F32        S10, S2, S0
    VSTR            S10, [R4,#0x318]
    VLDR            S2, [R4,#0x3F4]
    VMUL.F32        S8, S2, S0
    VSTR            S8, [R4,#0x3F4]
    VLDR            S2, [R1]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R1]
    VLDR            S4, [R0]
    VMUL.F32        S0, S4, S0
    VLDR            S4, =0.4
    VCMPE.F32       S10, S4
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S8, S4
    VSTR            S0, [R0]
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VLDRGT          S10, =0.4 }
    *((_DWORD *)_R4 + 198) = 1053609165;
    VCMPE.F32       S10, S6
    __asm { VLDRGT          S8, =0.4 }
    *((_DWORD *)_R4 + 253) = 1053609165;
    VCMPE.F32       S8, S6
  if ( _NF ^ _VF )
    *((_DWORD *)_R4 + 198) = -1093874483;
    VCMPE.F32       S2, S4
    *((_DWORD *)_R4 + 253) = -1093874483;
    VCMPE.F32       S0, S4
    __asm { VLDRGT          S2, =0.4 }
    *(_DWORD *)_R1 = 1053609165;
    VCMPE.F32       S2, S6
    *(_DWORD *)_R0 = 1053609165;
    __asm { VMOVGT.F32      S0, S4 }
    VCMPE.F32       S0, S6
    *(_DWORD *)_R1 = -1093874483;
  __asm { VMRS            APSR_nzcv, FPSCR }
    *(_DWORD *)_R0 = -1093874483;
  result = *((_WORD *)_R4 + 2154);
  if ( (_BYTE)result )
    *((_DWORD *)_R4 + 198) = -1090519040;
    *((_DWORD *)_R4 + 253) = -1090519040;
    *((_DWORD *)_R4 + 200) = 1028443341;
    *((_DWORD *)_R4 + 255) = -1119040307;
  *((_DWORD *)_R4 + 191) = 0;
  *((_DWORD *)_R4 + 246) = 0;
  *((_DWORD *)_R4 + 301) = 0;
  *((_DWORD *)_R4 + 356) = 0;
  *((_DWORD *)_R4 + 300) = -1063256064;
  *((_DWORD *)_R4 + 355) = -1063256064;
  *((_DWORD *)_R4 + 26) = 2147483648;
  *((_DWORD *)_R4 + 25) = -1051721728;
  *((_DWORD *)_R4 + 1087) = *((_DWORD *)_R4 + 24);
  *((_DWORD *)_R4 + 1088) = -1051721728;
  *((_DWORD *)_R4 + 1089) = 2147483648;
  *((_DWORD *)_R4 + 1096) = *((_DWORD *)_R4 + 33);
  *((_DWORD *)_R4 + 1097) = *((_DWORD *)_R4 + 34);
  *((_DWORD *)_R4 + 1098) = *((_DWORD *)_R4 + 35);
  if ( result >= 0x100 )
    result = -1047527424;
    *((_DWORD *)_R4 + 25) = -1047527424;
  return result;
}
