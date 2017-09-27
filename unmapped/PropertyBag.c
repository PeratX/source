

int __fastcall PropertyBag::get<glm::detail::tvec2<int>>(int a1, Json::Value *this, int a3, int a4, int a5)
{
  Json::Value *v5; // r6@1
  int v6; // r4@1
  const char *v7; // r5@1
  Json::Value *v8; // r5@3
  Json::Value *v9; // r0@4
  int v10; // r6@4
  Json::Value *v11; // r0@4
  int result; // r0@4

  v5 = this;
  v6 = a1;
  v7 = (const char *)a4;
  if ( Json::Value::isNull(this)
    || Json::Value::isObject(v5) != 1
    || (v8 = (Json::Value *)Json::Value::operator[]((int)v5, v7), Json::Value::isArray(v8) != 1) )
  {
    *(_DWORD *)v6 = *(_DWORD *)a5;
    result = *(_DWORD *)(a5 + 4);
    *(_DWORD *)(v6 + 4) = result;
  }
  else
    v9 = (Json::Value *)Json::Value::operator[]((int)v8, 0);
    v10 = Json::Value::asInt(v9, 0);
    v11 = (Json::Value *)Json::Value::operator[]((int)v8, 1u);
    result = Json::Value::asInt(v11, 0);
    *(_DWORD *)v6 = v10;
  return result;
}


_DWORD *__fastcall PropertyBag::PropertyBag(_DWORD *a1, int *a2)
{
  int *v2; // r4@1
  _DWORD *v3; // r5@1
  int v5; // [sp+0h] [bp-80h]@1

  v2 = a2;
  v3 = a1;
  j_Json::Value::Value(a1, 0);
  v3[4] = 0;
  j_Json::Reader::Reader((Json::Reader *)&v5);
  j_Json::Reader::parse((int)&v5, v2, (int)v3, 1);
  j_Json::Reader::~Reader((Json::Reader *)&v5);
  return v3;
}


_DWORD *__fastcall PropertyBag::PropertyBag(_DWORD *a1)
{
  _DWORD *result; // r0@1

  result = j_Json::Value::Value(a1, 0);
  result[4] = 0;
  return result;
}


signed int __fastcall PropertyBag::set(int a1, int a2, const char *a3, unsigned int a4, unsigned int a5)
{
  unsigned __int64 v5; // r4@1
  Json::Value *v6; // r0@1
  unsigned __int64 v8; // [sp+0h] [bp-18h]@1

  v5 = __PAIR__(a5, a4);
  v8 = __PAIR__(a5, a4);
  ++*(_DWORD *)(a1 + 16);
  v6 = (Json::Value *)j_Json::Value::operator[]((Json::Value *)a1, a3);
  return j_assignIfChanged<int,buffer_span<int>>(v6, &v8, (HIDWORD(v5) - (signed int)v5) >> 2);
}


int __fastcall PropertyBag::setChangeVersion(int result, int a2)
{
  *(_DWORD *)(result + 16) = a2;
  return result;
}


signed int __fastcall PropertyBag::set(int a1, int a2, const char *a3, unsigned int a4, unsigned int a5)
{
  unsigned __int64 v5; // r4@1
  Json::Value *v6; // r0@1
  unsigned __int64 v8; // [sp+0h] [bp-18h]@1

  v5 = __PAIR__(a5, a4);
  v8 = __PAIR__(a5, a4);
  ++*(_DWORD *)(a1 + 16);
  v6 = (Json::Value *)j_Json::Value::operator[]((Json::Value *)a1, a3);
  return j_assignIfChanged<std::string,buffer_span<std::string>>(v6, &v8, (HIDWORD(v5) - (signed int)v5) >> 2);
}


signed int __fastcall PropertyBag::set(int a1, int a2, const char *a3, unsigned int a4, unsigned int a5)
{
  unsigned __int64 v5; // r4@1
  Json::Value *v6; // r0@1
  unsigned __int64 v8; // [sp+0h] [bp-18h]@1

  v5 = __PAIR__(a5, a4);
  v8 = __PAIR__(a5, a4);
  ++*(_DWORD *)(a1 + 16);
  v6 = (Json::Value *)j_Json::Value::operator[]((Json::Value *)a1, a3);
  return j_assignIfChanged<int,buffer_span<bool>>(v6, &v8, HIDWORD(v5) - v5);
}


unsigned int __fastcall PropertyBag::set(int a1, int a2, const char *a3, int a4)
{
  int v4; // r4@1
  Json::Value *v5; // r0@1

  v4 = a4;
  ++*(_DWORD *)(a1 + 16);
  v5 = (Json::Value *)j_Json::Value::operator[]((Json::Value *)a1, a3);
  return j_j_j__Z15assignIfChangedIiSt6vectorIbSaIbEEEbRN4Json5ValueERKT0_i(
           v5,
           (_DWORD *)v4,
           (*(_QWORD *)(v4 + 8) >> 32) - (*(_QWORD *)v4 >> 32) + 8 * (*(_QWORD *)(v4 + 8) - *(_QWORD *)v4));
}


Json::Value *__fastcall PropertyBag::PropertyBag(Json::Value *a1, const Json::Value *a2)
{
  Json::Value *result; // r0@1

  result = j_Json::Value::Value(a1, a2);
  *((_DWORD *)result + 4) = 0;
  return result;
}


Json::Value *__fastcall PropertyBag::clone(PropertyBag *this, const Json::Value *a2)
{
  PropertyBag *v2; // r5@1
  const Json::Value *v3; // r4@1
  Json::Value *v4; // r0@1
  Json::Value *result; // r0@1

  v2 = this;
  v3 = a2;
  v4 = (Json::Value *)j_operator new(0x18u);
  result = j_Json::Value::Value(v4, v3);
  *(_DWORD *)v2 = result;
  *((_DWORD *)result + 4) = 0;
  return result;
}


int __fastcall PropertyBag::has(Json::Value *a1, int a2, const char *a3)
{
  const char *v3; // r4@1
  Json::Value *v4; // r5@1
  Json::Value *v5; // r0@3
  int result; // r0@3

  v3 = a3;
  v4 = a1;
  if ( j_Json::Value::isNull(a1) || j_Json::Value::isObject(v4) != 1 )
  {
    result = 0;
  }
  else
    v5 = (Json::Value *)j_Json::Value::operator[]((int)v4, v3);
    result = j_Json::Value::isNull(v5) ^ 1;
  return result;
}


int __fastcall PropertyBag::memberCount(PropertyBag *this)
{
  Json::Value *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( j_Json::Value::isNull(this) )
  {
    result = 0;
  }
  else if ( j_Json::Value::isObject(v1) == 1 )
    result = j_j_j__ZNK4Json5Value4sizeEv_1(v1);
  else
    result = 1;
  return result;
}
