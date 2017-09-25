

void __fastcall ArmorStandArmorModel::~ArmorStandArmorModel(ArmorStandArmorModel *this)
{
  ArmorStandArmorModel::~ArmorStandArmorModel(this);
}


_QWORD *__fastcall ArmorStandArmorModel::ArmorStandArmorModel(_QWORD *a1, float a2)
{
  _QWORD *result; // r0@1

  result = HumanoidModel::HumanoidModel(a1, a2, 0, 64, 32);
  *(_DWORD *)result = &off_26E8144;
  return result;
}


int __fastcall ArmorStandArmorModel::prepareMobModel(ArmorStandArmorModel *this, Mob *a2, float a3, float a4, float a5)
{
  Mob *v5; // r5@1
  ArmorStandArmorModel *v6; // r4@1
  int result; // r0@1
  ModelPart *v13; // r2@2
  float v14; // [sp+4h] [bp-6Ch]@2
  float v17; // [sp+10h] [bp-60h]@2
  float v20; // [sp+1Ch] [bp-54h]@2
  float v23; // [sp+28h] [bp-48h]@2
  float v26; // [sp+34h] [bp-3Ch]@2
  float v29; // [sp+40h] [bp-30h]@2
  float v32; // [sp+4Ch] [bp-24h]@2

  v5 = a2;
  v6 = this;
  result = (*(int (__fastcall **)(Mob *))(*(_DWORD *)a2 + 488))(a2);
  if ( result == 317 )
  {
    ArmorStand::getHeadPose((ArmorStand *)&v32, (int)v5);
    __asm
    {
      VLDR            S0, [SP,#0x70+var_24]
      VLDR            S2, [SP,#0x70+var_20]
      VLDR            S4, [SP,#0x70+var_1C]
    }
    _R0 = &mce::Math::DEGRAD;
      VLDR            S16, [R0]
      VMUL.F32        S0, S0, S16
      VMUL.F32        S2, S2, S16
      VMUL.F32        S4, S4, S16
      VSTR            S0, [R4,#0x84]
      VSTR            S2, [R4,#0x88]
      VSTR            S4, [R4,#0x8C]
    ArmorStand::getBodyPose((ArmorStand *)&v29, (int)v5);
      VLDR            S0, [SP,#0x70+var_30]
      VLDR            S2, [SP,#0x70+var_2C]
      VLDR            S4, [SP,#0x70+var_28]
      VSTR            S0, [R4,#0x23C]
      VSTR            S2, [R4,#0x240]
      VSTR            S4, [R4,#0x244]
    ArmorStand::getLeftArmPose((ArmorStand *)&v26, (int)v5);
      VLDR            S0, [SP,#0x70+var_3C]
      VLDR            S2, [SP,#0x70+var_38]
      VLDR            S4, [SP,#0x70+var_34]
      VSTR            S0, [R4,#0x3F4]
      VSTR            S2, [R4,#0x3F8]
      VSTR            S4, [R4,#0x3FC]
    ArmorStand::getRightArmPose((ArmorStand *)&v23, (int)v5);
      VLDR            S0, [SP,#0x70+var_48]
      VLDR            S2, [SP,#0x70+var_44]
      VLDR            S4, [SP,#0x70+var_40]
      VSTR            S0, [R4,#0x318]
      VSTR            S2, [R4,#0x31C]
      VSTR            S4, [R4,#0x320]
    ArmorStand::getLeftLegPose((ArmorStand *)&v20, (int)v5);
      VLDR            S0, [SP,#0x70+var_54]
      VLDR            S2, [SP,#0x70+var_50]
      VLDR            S4, [SP,#0x70+var_4C]
      VSTR            S0, [R0]
      VSTR            S2, [R0]
      VSTR            S4, [R0]
    ArmorStand::getRightLegPose((ArmorStand *)&v17, (int)v5);
      VLDR            S0, [SP,#0x70+var_60]
      VLDR            S2, [SP,#0x70+var_5C]
      VLDR            S4, [SP,#0x70+var_58]
    ArmorStand::getRightItemPose((ArmorStand *)&v14, (int)v5);
      VLDR            S0, [SP,#0x70+var_6C]
      VLDR            S2, [SP,#0x70+var_68]
      VLDR            S4, [SP,#0x70+var_64]
    result = Model::copyModelPart(
               (ArmorStandArmorModel *)((char *)v6 + 96),
               (ArmorStandArmorModel *)((char *)v6 + 316),
               v13);
  }
  return result;
}


void __fastcall ArmorStandArmorModel::~ArmorStandArmorModel(ArmorStandArmorModel *this)
{
  AppPlatformListener *v1; // r0@1

  v1 = HumanoidModel::~HumanoidModel(this);
  j_j_j__ZdlPv_5((void *)v1);
}


_QWORD *__fastcall ArmorStandArmorModel::ArmorStandArmorModel(_QWORD *a1, int a2)
{
  _QWORD *result; // r0@1

  result = HumanoidModel::HumanoidModel(a1, a2);
  *(_DWORD *)result = &off_26E8144;
  return result;
}
