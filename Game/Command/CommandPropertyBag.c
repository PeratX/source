

Json::Value *__fastcall CommandPropertyBag::set(int a1, const char **a2, int a3, int a4, int a5)
{
  Json::Value *v7; // r0@1
  Json::Value *v8; // r4@1
  int v9; // r0@1
  int v14; // r7@1
  int v16; // r1@1
  int v17; // r0@1
  int v18; // r6@1
  int v20; // r1@1
  int v22; // r0@1
  int v23; // r4@1
  int v25; // r1@1
  int v27; // [sp+0h] [bp-48h]@1
  char v28; // [sp+10h] [bp-38h]@1
  char v29; // [sp+20h] [bp-28h]@1

  _R5 = a4;
  _R6 = a3;
  v7 = (Json::Value *)Json::Value::operator[]((Json::Value *)(a1 + 8), a2);
  v8 = v7;
  v9 = Json::Value::operator[](v7, "x");
  __asm { VMOV            S0, R6 }
  v14 = v9;
  __asm
  {
    VCVT.F64.F32    D0, S0
    VMOV            R2, R3, D0
  }
  Json::Value::Value((Json::Value *)&v29, v16, _R2);
  Json::Value::operator=(v14, (const Json::Value *)&v29);
  Json::Value::~Value((Json::Value *)&v29);
  v17 = Json::Value::operator[](v8, "y");
  __asm { VMOV            S0, R5 }
  v18 = v17;
  Json::Value::Value((Json::Value *)&v28, v20, _R2);
  Json::Value::operator=(v18, (const Json::Value *)&v28);
  _R5 = a5;
  Json::Value::~Value((Json::Value *)&v28);
  v22 = Json::Value::operator[](v8, (const char *)&aRtuz[3]);
  v23 = v22;
  Json::Value::Value((Json::Value *)&v27, v25, _R2);
  Json::Value::operator=(v23, (const Json::Value *)&v27);
  return Json::Value::~Value((Json::Value *)&v27);
}


_DWORD *__fastcall CommandPropertyBag::CommandPropertyBag(int a1, const Json::Value *a2)
{
  _DWORD *v2; // r4@1

  v2 = (_DWORD *)a1;
  PropertyBag::PropertyBag((Json::Value *)(a1 + 8), a2);
  *v2 = &off_26EB1CC;
  return v2;
}


int __fastcall CommandPropertyBag::set(int a1, const char **a2, const Json::Value *a3)
{
  const Json::Value *v3; // r4@1
  int v4; // r0@1

  v3 = a3;
  v4 = Json::Value::operator[]((Json::Value *)(a1 + 8), a2);
  return j_j_j__ZN4Json5ValueaSERKS0__2(v4, v3);
}


Json::Value *__fastcall CommandPropertyBag::addToResultList(int a1, const char **a2, const char **a3)
{
  Json::Value *v3; // r6@1
  const char **v4; // r4@1
  const char **v5; // r5@1
  Json::Value *v6; // r0@1
  Json::Value *result; // r0@1
  Json::Value *v8; // r5@2
  int v9; // [sp+0h] [bp-20h]@2

  v3 = (Json::Value *)(a1 + 8);
  v4 = a3;
  v5 = a2;
  v6 = (Json::Value *)Json::Value::operator[]((Json::Value *)(a1 + 8), a2);
  result = (Json::Value *)Json::Value::isArray(v6);
  if ( result == (Json::Value *)1 )
  {
    v8 = (Json::Value *)Json::Value::operator[](v3, v5);
    Json::Value::Value((int)&v9, v4);
    Json::Value::append(v8, (const Json::Value *)&v9);
    result = Json::Value::~Value((Json::Value *)&v9);
  }
  return result;
}


_DWORD *__fastcall CommandPropertyBag::CommandPropertyBag(int a1)
{
  _DWORD *v1; // r4@1

  v1 = (_DWORD *)a1;
  PropertyBag::PropertyBag((_DWORD *)(a1 + 8));
  *v1 = &off_26EB1CC;
  return v1;
}


CommandPropertyBag *__fastcall CommandPropertyBag::~CommandPropertyBag(CommandPropertyBag *this)
{
  CommandPropertyBag *v1; // r4@1

  v1 = this;
  Json::Value::~Value((CommandPropertyBag *)((char *)this + 8));
  return v1;
}


void **__fastcall CommandPropertyBag::clone(CommandPropertyBag *this, int a2)
{
  CommandPropertyBag *v2; // r4@1
  int v3; // r6@1
  void *v4; // r5@1
  void **result; // r0@1

  v2 = this;
  v3 = a2;
  v4 = operator new(0x20u);
  PropertyBag::PropertyBag((Json::Value *)((char *)v4 + 8), (const Json::Value *)(v3 + 8));
  *(_DWORD *)v2 = v4;
  result = &off_26EB1CC;
  *(_DWORD *)v4 = &off_26EB1CC;
  return result;
}


Json::Value *__fastcall CommandPropertyBag::set(int a1, const char **a2, int a3)
{
  int v3; // r4@1
  Json::Value *v4; // r5@1
  int v5; // r6@1
  int v6; // r6@1
  int v7; // r5@1
  int v9; // [sp+0h] [bp-48h]@1
  char v10; // [sp+10h] [bp-38h]@1
  char v11; // [sp+20h] [bp-28h]@1

  v3 = a3;
  v4 = (Json::Value *)Json::Value::operator[]((Json::Value *)(a1 + 8), a2);
  v5 = Json::Value::operator[](v4, "x");
  Json::Value::Value((Json::Value *)&v11, *(_DWORD *)v3);
  Json::Value::operator=(v5, (const Json::Value *)&v11);
  Json::Value::~Value((Json::Value *)&v11);
  v6 = Json::Value::operator[](v4, "y");
  Json::Value::Value((Json::Value *)&v10, *(_DWORD *)(v3 + 4));
  Json::Value::operator=(v6, (const Json::Value *)&v10);
  Json::Value::~Value((Json::Value *)&v10);
  v7 = Json::Value::operator[](v4, (const char *)&aRtuz[3]);
  Json::Value::Value((Json::Value *)&v9, *(_DWORD *)(v3 + 8));
  Json::Value::operator=(v7, (const Json::Value *)&v9);
  return Json::Value::~Value((Json::Value *)&v9);
}


void __fastcall CommandPropertyBag::~CommandPropertyBag(CommandPropertyBag *this)
{
  CommandPropertyBag::~CommandPropertyBag(this);
}


void __fastcall CommandPropertyBag::~CommandPropertyBag(CommandPropertyBag *this)
{
  CommandPropertyBag *v1; // r4@1

  v1 = this;
  Json::Value::~Value((CommandPropertyBag *)((char *)this + 8));
  j_j_j__ZdlPv_6((void *)v1);
}
