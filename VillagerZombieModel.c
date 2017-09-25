

void __fastcall VillagerZombieModel::~VillagerZombieModel(VillagerZombieModel *this)
{
  HumanoidModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E5FBC;
  mce::MaterialPtr::~MaterialPtr((VillagerZombieModel *)((char *)this + 4308));
  HumanoidModel::~HumanoidModel(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


_QWORD *__fastcall VillagerZombieModel::VillagerZombieModel(_QWORD *a1, int a2)
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
  int v11; // r0@8
  int v12; // r6@8
  void *v13; // r0@8
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
  int v31; // [sp+4h] [bp-74h]@10
  signed int v32; // [sp+8h] [bp-70h]@10
  int v33; // [sp+Ch] [bp-6Ch]@10
  int v34; // [sp+10h] [bp-68h]@10
  signed __int64 v35; // [sp+14h] [bp-64h]@10
  int v36; // [sp+20h] [bp-58h]@8
  int v37; // [sp+28h] [bp-50h]@7
  int v38; // [sp+30h] [bp-48h]@6
  int v39; // [sp+38h] [bp-40h]@5
  int v40; // [sp+40h] [bp-38h]@4
  int v41; // [sp+48h] [bp-30h]@3
  int v42; // [sp+50h] [bp-28h]@2
  int v43; // [sp+58h] [bp-20h]@1

  v2 = a1;
  v3 = a2;
  HumanoidModel::HumanoidModel(a1, 0.0, 0, 64, 64);
  *(_DWORD *)v2 = &off_26E5FBC;
  sub_21E94B4((void **)&v43, "zombie_villager");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)((char *)v2 + 4308),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v43);
  v4 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v43 - 4);
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
  *((_DWORD *)v2 + 7) = (char *)v2 + 4308;
  sub_21E94B4((void **)&v42, "head");
  ModelPart::load((int)(v2 + 12), v3, (const void **)&v42, 0);
  v5 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v42 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v41, "body");
  ModelPart::load((int)(v2 + 67), v3, (const void **)&v41, 0);
  v6 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v41 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v40, "rightArm");
  ModelPart::load((int)v2 + 756, v3, (const void **)&v40, 0);
  v7 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v40 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v39, "leftArm");
  ModelPart::load((int)(v2 + 122), v3, (const void **)&v39, 0);
  v8 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v39 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v38, "rightLeg");
  ModelPart::load((int)v2 + 1196, v3, (const void **)&v38, 0);
  v9 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v38 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v37, "leftLeg");
  ModelPart::load((int)(v2 + 177), v3, (const void **)&v37, 0);
  v10 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v37 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v36, "waist");
  ModelPart::load((int)v2 + 2076, v3, (const void **)&v36, 0);
  v12 = v11;
  v13 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v36 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  if ( !v12 )
    v34 = 0;
    v35 = 1094713344LL;
    ModelPart::setPos((ModelPart *)((char *)v2 + 2076), (const Vec3 *)&v34);
    v31 = 0;
    v32 = 1094713344;
    v33 = 0;
    ModelPart::setOrigin((ModelPart *)((char *)v2 + 2076), (const Vec3 *)&v31);
  return v2;
}


void __fastcall VillagerZombieModel::~VillagerZombieModel(VillagerZombieModel *this)
{
  VillagerZombieModel::~VillagerZombieModel(this);
}


VillagerZombieModel *__fastcall VillagerZombieModel::setupAnim(VillagerZombieModel *this, float a2, float a3, float a4, float a5, float a6, float a7)
{
  float v15; // r1@1
  float v20; // r1@1
  float v22; // r1@1
  float v25; // r1@1
  float v27; // r1@1
  VillagerZombieModel *result; // r0@1
  float v31; // [sp+0h] [bp-38h]@0
  float v32; // [sp+4h] [bp-34h]@0
  float v33; // [sp+8h] [bp-30h]@0

  __asm { VLDR            S0, [SP,#0x38+arg_0] }
  _R5 = a4;
  __asm { VLDR            S2, [SP,#0x38+arg_4] }
  _R4 = this;
  __asm
  {
    VLDR            S4, [SP,#0x38+arg_8]
    VSTR            S0, [SP,#0x38+var_38]
    VSTR            S2, [SP,#0x38+var_34]
    VSTR            S4, [SP,#0x38+var_30]
  }
  HumanoidModel::setupAnim(this, a2, a3, a4, v31, v32, v33);
  __asm { VLDR            S0, [R4,#0x14] }
  _R0 = &mce::Math::PI;
    VLDR            S16, [R0]
    VMUL.F32        S0, S16, S0
    VMOV            R0, S0
  _R0 = mce::Math::sin(_R0, v15);
    VMOV.F32        S0, #1.0
    VLDR            S2, [R4,#0x14]
    VMOV            S18, R0
    VSUB.F32        S2, S0, S2
    VMUL.F32        S2, S2, S2
    VSUB.F32        S0, S0, S2
    VMUL.F32        S0, S0, S16
    VMOV            R1, S0
  _R0 = mce::Math::sin(_R1, *(float *)&_R1);
    VLDR            S0, =0.09
    VMOV            S20, R5
    VLDR            S2, =-1.2
    VMOV            S4, R0
    VMUL.F32        S0, S20, S0
    VLDR            S6, =0.4
    VMOV.F32        S8, #-0.5
    VMUL.F32        S4, S4, S6
    VLDR            S6, =0.6
    VMUL.F32        S2, S18, S2
  *((_DWORD *)_R4 + 255) = 0;
  __asm { VMUL.F32        S6, S18, S6 }
  *((_DWORD *)_R4 + 200) = 0;
    VMOV            R5, S0
    VMUL.F32        S0, S16, S8
    VADD.F32        S2, S4, S2
    VLDR            S4, =0.1
    VSUB.F32        S8, S6, S4
    VSUB.F32        S4, S4, S6
    VADD.F32        S0, S0, S2
    VSTR            S8, [R4,#0x3F8]
    VSTR            S4, [R4,#0x31C]
    VSTR            S0, [R4,#0x3F4]
    VSTR            S0, [R4,#0x318]
  _R0 = mce::Math::cos(_R5, v20);
    VMOV            S0, R0
    VLDR            S16, =0.05
    VLDR            S2, [R4,#0x3FC]
    VADD.F32        S0, S0, S16
    VSTR            S0, [R4,#0x3FC]
  _R0 = mce::Math::cos(_R5, v22);
    VLDR            S0, =0.067
    VLDR            S2, =-0.05
    VMUL.F32        S4, S4, S2
    VADD.F32        S0, S4, S2
    VLDR            S2, [R4,#0x320]
    VSTR            S0, [R4,#0x320]
  _R0 = mce::Math::sin(_R5, v25);
    VLDR            S2, [R4,#0x3F4]
    VADD.F32        S0, S2, S0
  _R0 = mce::Math::sin(_R5, v27);
    VLDR            S2, [R4,#0x318]
  _R0 = (int)_R4 + 1452;
    VSUB.F32        S0, S2, S0
    VMOV.F32        S2, #0.5
    VLDR            S0, [R0]
    VMUL.F32        S0, S0, S2
    VSTR            S0, [R0]
  result = (VillagerZombieModel *)((char *)_R4 + 1232);
  return result;
}


AppPlatformListener *__fastcall VillagerZombieModel::~VillagerZombieModel(VillagerZombieModel *this)
{
  HumanoidModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E5FBC;
  mce::MaterialPtr::~MaterialPtr((VillagerZombieModel *)((char *)this + 4308));
  return j_j_j__ZN13HumanoidModelD2Ev_0(v1);
}
