

int __fastcall FloatRange::getValue(FloatRange *this, Random *a2)
{
  int result; // r0@1

  __asm
  {
    VLDR            S16, [R0]
    VLDR            S18, [R0,#4]
  }
  _R0 = Random::_genRandInt32(a2);
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


signed int __fastcall FloatRange::parseJson(int a1, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  int v4; // r0@3
  Json::Value *v5; // r0@5
  Json::Value *v6; // r0@5
  Json::Value *v8; // r0@9
  Json::Value *v9; // r0@9

  v2 = a2;
  _R4 = a1;
  if ( !Json::Value::isNull(a2) )
  {
    if ( Json::Value::isNumeric(v2) == 1 )
    {
      v4 = Json::Value::asFloat(v2, 0.0);
      *(_DWORD *)_R4 = v4;
      *(_DWORD *)(_R4 + 4) = v4;
      return 1;
    }
    if ( Json::Value::isObject(v2) == 1 )
      v5 = (Json::Value *)Json::Value::operator[](v2, "range_min");
      *(_DWORD *)_R4 = Json::Value::asFloat(v5, 0.0);
      v6 = (Json::Value *)Json::Value::operator[](v2, "range_max");
      *(_DWORD *)(_R4 + 4) = Json::Value::asFloat(v6, 0.0);
    if ( Json::Value::isArray(v2) == 1 && (unsigned int)Json::Value::size(v2) >= 2 )
      v8 = (Json::Value *)Json::Value::operator[]((int)v2, 0);
      *(_DWORD *)_R4 = Json::Value::asFloat(v8, 0.0);
      v9 = (Json::Value *)Json::Value::operator[]((int)v2, 1u);
      _R0 = Json::Value::asFloat(v9, 0.0);
      *(_DWORD *)(_R4 + 4) = _R0;
      __asm
      {
        VMOV            S0, R0
        VLDR            S2, [R4]
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        __asm
        {
          VSTR            S0, [R4]
          VSTR            S2, [R4,#4]
        }
  }
  return 0;
}
