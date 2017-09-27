

int __fastcall RandomValueBounds::getInt(RandomValueBounds *this, Random *a2)
{
  RandomValueBounds *v2; // r6@1
  Random *v3; // r5@1
  int v4; // r4@1
  float v5; // r1@1
  int v6; // r0@1
  int v7; // r0@2
  unsigned int v8; // r1@3

  v2 = this;
  v3 = a2;
  v4 = j_mce::Math::floor(*(mce::Math **)this, *(float *)&a2);
  v6 = j_mce::Math::floor(*((mce::Math **)v2 + 1), v5);
  if ( v6 >= v4 )
  {
    v7 = v6 + 1;
    if ( v7 == v4 )
      v8 = 0;
    else
      v8 = j_Random::_genRandInt32(v3) % (v7 - v4);
    v4 += v8;
  }
  return v4;
}


int __fastcall RandomValueBounds::deserialize(int *a1, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  int *v3; // r4@1
  int result; // r0@2
  Json::Value *v9; // r0@3
  Json::Value *v10; // r0@3

  v2 = a2;
  v3 = a1;
  if ( j_Json::Value::isNumeric(a2) == 1 )
  {
    result = j_Json::Value::asFloat(v2, 0.0);
    __asm { VMOV            S0, R0 }
    *v3 = result;
    __asm { VSTR            S0, [R4,#4] }
  }
  else
    v9 = (Json::Value *)j_Json::Value::operator[](v2, "min");
    *v3 = j_Json::Value::asFloat(v9, 0.0);
    v10 = (Json::Value *)j_Json::Value::operator[](v2, "max");
    result = j_Json::Value::asFloat(v10, 0.0);
    __asm
    {
      VMOV            S0, R0
      VSTR            S0, [R4,#4]
    }
  return result;
}


int __fastcall RandomValueBounds::getFloat(RandomValueBounds *this, Random *a2)
{
  int result; // r0@1

  __asm
  {
    VLDR            S16, [R0]
    VLDR            S18, [R0,#4]
  }
  _R0 = j_Random::_genRandInt32(a2);
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D1
    VSUB.F32        S2, S18, S16
    VCVT.F32.F64    S0, D0
    VMUL.F32        S0, S0, S2
    VADD.F32        S0, S0, S16
    VMOV            R0, S0
  return result;
}


int __fastcall RandomValueBounds::getMin(RandomValueBounds *this)
{
  return *(_DWORD *)this;
}


signed int __fastcall RandomValueBounds::matchesValue(RandomValueBounds *this, int _R1)
{
  signed int result; // r0@1

  __asm { VMOV            S0, R1 }
  _R2 = this;
  result = 0;
  __asm
  {
    VCVT.F32.S32    S0, S0
    VLDR            S2, [R2,#4]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm
    {
      VLDR            S2, [R2]
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !(_NF ^ _VF) )
      result = 1;
  return result;
}
