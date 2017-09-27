

void __fastcall RandomAuxValueFunction::~RandomAuxValueFunction(RandomAuxValueFunction *this)
{
  RandomAuxValueFunction::~RandomAuxValueFunction(this);
}


void __fastcall RandomAuxValueFunction::~RandomAuxValueFunction(RandomAuxValueFunction *this)
{
  RandomAuxValueFunction *v1; // r4@1
  char *v2; // r5@1 OVERLAPPED
  char *v3; // r6@1 OVERLAPPED

  v1 = this;
  *(_DWORD *)this = &off_2719858;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 4);
  if ( v2 != v3 )
  {
    do
    {
      if ( *(_DWORD *)v2 )
        (*(void (**)(void))(**(_DWORD **)v2 + 4))();
      *(_DWORD *)v2 = 0;
      v2 += 4;
    }
    while ( v3 != v2 );
    v2 = (char *)*((_DWORD *)v1 + 1);
  }
  if ( v2 )
    j_operator delete(v2);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall RandomAuxValueFunction::apply(RandomAuxValueFunction *this, ItemInstance *a2, Random *a3, LootTableContext *a4)
{
  ItemInstance *v4; // r4@1
  int v5; // r1@1

  v4 = a2;
  v5 = (signed __int16)RandomValueBounds::getInt((RandomAuxValueFunction *)((char *)this + 16), a3);
  return j_j_j__ZN12ItemInstance11setAuxValueEs_0(v4, v5);
}


_DWORD *__fastcall RandomAuxValueFunction::deserialize(_DWORD *a1, Json::Value *a2, int a3)
{
  int v3; // r5@1
  _DWORD *v4; // r4@1
  const Json::Value *v5; // r0@1
  _DWORD *result; // r0@1
  int v7; // [sp+0h] [bp-30h]@1
  __int64 v8; // [sp+10h] [bp-20h]@1

  v3 = a3;
  v4 = a1;
  v8 = 0LL;
  v5 = (const Json::Value *)j_Json::Value::operator[](a2, "values");
  j_Json::Value::Value((Json::Value *)&v7, v5);
  RandomValueBounds::deserialize((int *)&v8, (Json::Value *)&v7);
  j_Json::Value::~Value((Json::Value *)&v7);
  result = j_operator new(0x18u);
  result[1] = *(_DWORD *)v3;
  *(_DWORD *)v3 = 0;
  result[2] = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(v3 + 4) = 0;
  result[3] = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  *result = &off_2719870;
  *((_QWORD *)result + 2) = v8;
  *v4 = result;
  return result;
}
