

ZombieModel *__fastcall SkeletonModel::SkeletonModel(ZombieModel *a1, const GeometryPtr *a2, int a3)
{
  int v3; // r5@1
  ZombieModel *v4; // r4@1
  const char *v5; // r1@1
  void *v6; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  int v10; // [sp+4h] [bp-1Ch]@3

  v3 = a3;
  v4 = a1;
  ZombieModel::ZombieModel(a1, a2);
  v5 = "armor";
  *(_DWORD *)v4 = &off_26DB238;
  if ( !v3 )
    v5 = "skeleton";
  sub_119C884((void **)&v10, v5);
  mce::MaterialPtr::MaterialPtr(
    (ZombieModel *)((char *)v4 + 4320),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v10);
  v6 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v10 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  *((_DWORD *)v4 + 7) = (char *)v4 + 4308;
  return v4;
}


AppPlatformListener *__fastcall SkeletonModel::~SkeletonModel(SkeletonModel *this)
{
  SkeletonModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DB238;
  mce::MaterialPtr::~MaterialPtr((SkeletonModel *)((char *)this + 4320));
  *(_DWORD *)v1 = &off_26DB290;
  mce::MaterialPtr::~MaterialPtr((SkeletonModel *)((char *)v1 + 4308));
  return j_j_j__ZN13HumanoidModelD2Ev(v1);
}


int __fastcall SkeletonModel::prepareMobModel(SkeletonModel *this, Mob *a2, float a3, float a4, float a5)
{
  Mob *v5; // r6@1
  SkeletonModel *v6; // r7@1
  float v7; // r4@1
  float v8; // r5@1
  __int64 v9; // r0@1
  int v10; // r0@1

  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = SynchedEntityData::getInt64((Mob *)((char *)a2 + 176), 6);
  v10 = v9 | HIDWORD(v9);
  if ( v10 )
    LOBYTE(v10) = 1;
  *((_BYTE *)v6 + 4277) = v10;
  return j_j_j__ZN13HumanoidModel15prepareMobModelER3Mobfff(v6, v5, v8, v7, a5);
}


void __fastcall SkeletonModel::~SkeletonModel(SkeletonModel *this)
{
  SkeletonModel::~SkeletonModel(this);
}


void __fastcall SkeletonModel::~SkeletonModel(SkeletonModel *this)
{
  SkeletonModel *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26DB238;
  mce::MaterialPtr::~MaterialPtr((SkeletonModel *)((char *)this + 4320));
  *(_DWORD *)v1 = &off_26DB290;
  mce::MaterialPtr::~MaterialPtr((SkeletonModel *)((char *)v1 + 4308));
  HumanoidModel::~HumanoidModel(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall SkeletonModel::setupAnim(SkeletonModel *this, float a2, float a3, float a4, float a5, float a6, float a7)
{
  float v14; // r1@1
  int result; // r0@1
  float v19; // [sp+0h] [bp-20h]@0
  float v20; // [sp+4h] [bp-1Ch]@0
  float v21; // [sp+8h] [bp-18h]@0

  __asm { VLDR            S0, [SP,#0x20+arg_0] }
  _R4 = this;
  __asm
  {
    VLDR            S2, [SP,#0x20+arg_4]
    VLDR            S4, [SP,#0x20+arg_8]
    VSTR            S0, [SP,#0x20+var_20]
    VSTR            S2, [SP,#0x20+var_1C]
    VSTR            S4, [SP,#0x20+var_18]
  }
  HumanoidModel::setupAnim(this, a2, a3, a4, v19, v20, v21);
  __asm { VLDR            S0, [R4,#0x14] }
  _R0 = &mce::Math::PI;
    VLDR            S16, [R0]
    VMUL.F32        S0, S16, S0
    VMOV            R0, S0
  _R0 = mce::Math::sin(_R0, v14);
    VMOV.F32        S0, #1.0
    VLDR            S2, [R4,#0x14]
    VSUB.F32        S2, S0, S2
    VMUL.F32        S2, S2, S2
    VSUB.F32        S0, S0, S2
    VMUL.F32        S0, S0, S16
    VMOV            S16, R0
    VMOV            R1, S0
  _R0 = mce::Math::sin(_R1, *(float *)&_R1);
    VLDR            S0, =0.6
    VMOV            S6, R0
    VLDR            S2, =1.2
  result = 0;
    VLDR            S4, =-0.4
    VMUL.F32        S2, S16, S2
  *((_DWORD *)_R4 + 200) = 0;
    VMUL.F32        S4, S6, S4
    VLDR            S6, =0.1
  *((_DWORD *)_R4 + 255) = 0;
    VSUB.F32        S8, S0, S6
    VSUB.F32        S0, S6, S0
    VADD.F32        S2, S2, S4
    VSTR            S8, [R4,#0x31C]
    VSTR            S0, [R4,#0x3F8]
    VLDR            S0, [R4,#0x318]
    VSTR            S0, [R4,#0x318]
    VLDR            S0, [R4,#0x3F4]
    VSTR            S0, [R4,#0x3F4]
  return result;
}
