

int __fastcall UITextureInfo::setNinesliceSize(int result, const ui::SliceSize *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int v4; // r12@1
  int v5; // r1@1

  v2 = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 1);
  v4 = *((_DWORD *)a2 + 2);
  v5 = *((_DWORD *)a2 + 3);
  *(_DWORD *)result = v2;
  *(_DWORD *)(result + 4) = v3;
  *(_DWORD *)(result + 8) = v4;
  *(_DWORD *)(result + 12) = v5;
  return result;
}


int __fastcall UITextureInfo::setBaseUVSize(int result, int a2)
{
  *(_DWORD *)(result + 20) = *(_DWORD *)a2;
  *(_DWORD *)(result + 24) = *(_DWORD *)(a2 + 4);
  return result;
}


char *__fastcall UITextureInfo::getBaseUVSize(UITextureInfo *this)
{
  return (char *)this + 20;
}


Json::Value *__fastcall UITextureInfo::load(UITextureInfo *this, const ResourceLocation *a2, const Json::Value *a3)
{
  const Json::Value *v3; // r5@1
  const Json::Value *v5; // r0@1
  Json::Value *v6; // r0@1
  int v13; // r1@4
  int v14; // r2@4
  int v15; // r3@4
  const Json::Value *v20; // r0@18
  float v24; // [sp+0h] [bp-A8h]@0
  char v25; // [sp+8h] [bp-A0h]@21
  char v26; // [sp+18h] [bp-90h]@21
  char v27; // [sp+28h] [bp-80h]@18
  char v28; // [sp+38h] [bp-70h]@15
  char v29; // [sp+48h] [bp-60h]@13
  char v30; // [sp+58h] [bp-50h]@11
  char v31; // [sp+68h] [bp-40h]@9
  char v32; // [sp+78h] [bp-30h]@4
  int v33; // [sp+7Ch] [bp-2Ch]@4
  int v34; // [sp+80h] [bp-28h]@4
  int v35; // [sp+84h] [bp-24h]@4
  char v36; // [sp+88h] [bp-20h]@1

  v3 = a3;
  _R4 = this;
  v5 = (const Json::Value *)Json::Value::operator[]((int)a3, "nineslice_size");
  v6 = Json::Value::Value((Json::Value *)&v36, v5);
  if ( Json::Value::isNumeric(v6) == 1 )
  {
    _R0 = Json::Value::asFloat((Json::Value *)&v36, 0.0);
    __asm
    {
      VMOV            S0, R0
      VLDR            S2, =0.0
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S0, S2 }
      VMOV            R1, S0
      VSTR            S0, [SP,#0xA8+var_A8]
    ui::SliceSize::SliceSize((ui::SliceSize *)&v32, _R1, _R1, _R1, v24);
    v13 = v33;
    v14 = v34;
    v15 = v35;
    *(_DWORD *)_R4 = *(_DWORD *)&v32;
    *((_DWORD *)_R4 + 1) = v13;
    *((_DWORD *)_R4 + 2) = v14;
    *((_DWORD *)_R4 + 3) = v15;
LABEL_5:
    *((_BYTE *)_R4 + 16) = 1;
    goto LABEL_18;
  }
  if ( !Json::Value::isNull((Json::Value *)&v36)
    && Json::Value::isArray((Json::Value *)&v36) == 1
    && Json::Value::size((Json::Value *)&v36) >= 4 )
    Json::Value::get((Json::Value *)&v31, (unsigned int)&v36, 0, (const Json::Value *)&Json::Value::null);
    _R0 = Json::Value::asFloat((Json::Value *)&v31, 0.0);
      VSTR            S0, [R4]
    Json::Value::~Value((Json::Value *)&v31);
      VLDR            S0, [R4]
      *(_DWORD *)_R4 = 0;
    Json::Value::get(
      (Json::Value *)&v30,
      (unsigned int)&v36,
      (const Json::Value *)1,
      (const Json::Value *)&Json::Value::null);
    _R0 = Json::Value::asFloat((Json::Value *)&v30, 0.0);
      VSTR            S0, [R4,#4]
    Json::Value::~Value((Json::Value *)&v30);
      VLDR            S0, [R4,#4]
      *((_DWORD *)_R4 + 1) = 0;
      (Json::Value *)&v29,
      (const Json::Value *)2,
    _R0 = Json::Value::asFloat((Json::Value *)&v29, 0.0);
      VSTR            S0, [R4,#8]
    Json::Value::~Value((Json::Value *)&v29);
      VLDR            S0, [R4,#8]
      *((_DWORD *)_R4 + 2) = 0;
      (Json::Value *)&v28,
      (const Json::Value *)3,
    _R0 = Json::Value::asFloat((Json::Value *)&v28, 0.0);
      VSTR            S0, [R4,#0xC]
    Json::Value::~Value((Json::Value *)&v28);
      VLDR            S0, [R4,#0xC]
      *((_DWORD *)_R4 + 3) = 0;
    goto LABEL_5;
LABEL_18:
  v20 = (const Json::Value *)Json::Value::operator[]((int)v3, "base_size");
  Json::Value::Value((Json::Value *)&v27, v20);
  if ( !Json::Value::isNull((Json::Value *)&v27)
    && Json::Value::isArray((Json::Value *)&v27) == 1
    && Json::Value::size((Json::Value *)&v27) >= 2 )
    Json::Value::get((Json::Value *)&v26, (unsigned int)&v27, 0, (const Json::Value *)&Json::Value::null);
    _R0 = Json::Value::asFloat((Json::Value *)&v26, 0.0);
      VSTR            S0, [R4,#0x14]
    Json::Value::~Value((Json::Value *)&v26);
      (Json::Value *)&v25,
      (unsigned int)&v27,
    _R0 = Json::Value::asFloat((Json::Value *)&v25, 0.0);
      VSTR            S0, [R4,#0x18]
    Json::Value::~Value((Json::Value *)&v25);
  Json::Value::~Value((Json::Value *)&v27);
  return Json::Value::~Value((Json::Value *)&v36);
}
