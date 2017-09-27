

void __fastcall LootPoolEntry::deserialize(int *a1, Json::Value *a2)
{
  LootPoolEntry::deserialize(a1, a2);
}


void __fastcall LootPoolEntry::deserialize(int *a1, Json::Value *a2)
{
  Json::Value *v2; // r11@1
  int *v3; // r10@1
  Json::Value *v4; // r0@1
  Json::Value *v5; // r0@1
  __int64 v6; // r8@1
  const Json::Value *v7; // r0@2
  __int64 v8; // kr00_8@2
  int v9; // r0@2
  bool v10; // zf@2
  int v11; // r0@2
  int v12; // r6@3
  int v13; // r4@9
  char *v14; // r6@9
  int v15; // r6@17
  int v16; // r6@17
  void *v17; // r0@17
  void *v18; // r0@18
  int v19; // r6@20
  int v20; // r6@20
  void *v21; // r0@20
  void *v22; // r0@21
  int v23; // r6@23
  int v24; // r6@23
  void *v25; // r0@23
  void *v26; // r0@24
  void *v27; // r0@26
  int v28; // r3@26
  int v29; // r1@26
  int v30; // r0@28
  int v31; // r1@28
  int v32; // r0@32
  int v33; // r1@32
  int v34; // r4@37
  int v35; // r1@37
  int v36; // r0@37
  __int64 v37; // r4@42
  unsigned int *v38; // r2@50
  signed int v39; // r1@52
  unsigned int *v40; // r2@54
  signed int v41; // r1@56
  unsigned int *v42; // r2@58
  signed int v43; // r1@60
  unsigned int *v44; // r2@62
  signed int v45; // r1@64
  unsigned int *v46; // r2@74
  signed int v47; // r1@76
  unsigned int *v48; // r2@78
  signed int v49; // r1@80
  char v50; // [sp+8h] [bp-B0h]@37
  int v51; // [sp+18h] [bp-A0h]@37
  int v52; // [sp+20h] [bp-98h]@23
  int v53; // [sp+24h] [bp-94h]@23
  char v54; // [sp+28h] [bp-90h]@32
  int v55; // [sp+38h] [bp-80h]@32
  int v56; // [sp+40h] [bp-78h]@20
  int v57; // [sp+44h] [bp-74h]@20
  char v58; // [sp+48h] [bp-70h]@28
  int v59; // [sp+58h] [bp-60h]@28
  int v60; // [sp+60h] [bp-58h]@17
  int v61; // [sp+64h] [bp-54h]@17
  char v62; // [sp+68h] [bp-50h]@2
  char *v63; // [sp+78h] [bp-40h]@2
  char *v64; // [sp+7Ch] [bp-3Ch]@2
  int v65; // [sp+80h] [bp-38h]@2
  int v66; // [sp+84h] [bp-34h]@1
  int v67; // [sp+88h] [bp-30h]@1
  int v68; // [sp+8Ch] [bp-2Ch]@1

  v2 = a2;
  v3 = a1;
  v4 = (Json::Value *)j_Json::Value::operator[](a2, "weight");
  LODWORD(v6) = j_Json::Value::asInt(v4, 1);
  v5 = (Json::Value *)j_Json::Value::operator[](v2, "quality");
  HIDWORD(v6) = j_Json::Value::asInt(v5, 0);
  v66 = 0;
  v67 = 0;
  v68 = 0;
  if ( j_Json::Value::isMember(v2, "conditions") == 1 )
  {
    v7 = (const Json::Value *)j_Json::Value::operator[](v2, "conditions");
    j_Json::Value::Value((Json::Value *)&v62, v7);
    j_LootItemConditions::deserialize((int)&v63, (Json::Value *)&v62);
    v8 = *(_QWORD *)&v66;
    v9 = (int)v63;
    v63 = 0;
    v10 = v66 == v67;
    v66 = v9;
    v11 = (int)v64;
    v64 = 0;
    v67 = v11;
    v68 = v65;
    v65 = 0;
    if ( !v10 )
    {
      v12 = v8;
      do
      {
        if ( *(_DWORD *)v12 )
          (*(void (**)(void))(**(_DWORD **)v12 + 4))();
        *(_DWORD *)v12 = 0;
        v12 += 4;
      }
      while ( HIDWORD(v8) != v12 );
    }
    if ( (_DWORD)v8 )
      j_operator delete((void *)v8);
    v13 = (int)v64;
    v14 = v63;
    if ( v63 != v64 )
        if ( *(_DWORD *)v14 )
          (*(void (**)(void))(**(_DWORD **)v14 + 4))();
        *(_DWORD *)v14 = 0;
        v14 += 4;
      while ( (char *)v13 != v14 );
      v14 = v63;
    if ( v14 )
      j_operator delete(v14);
    j_Json::Value::~Value((Json::Value *)&v62);
  }
  *v3 = 0;
  v15 = j_Json::Value::operator[](v2, "type");
  sub_21E94B4((void **)&v60, (const char *)&unk_257BC67);
  j_Json::Value::asString(&v61, v15, &v60);
  v16 = sub_21E7D6C((const void **)&v61, "item");
  v17 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v61 - 4);
    if ( &pthread_create )
      __dmb();
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
    else
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v60 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  if ( v16 )
    v19 = j_Json::Value::operator[](v2, "type");
    sub_21E94B4((void **)&v56, (const char *)&unk_257BC67);
    j_Json::Value::asString(&v57, v19, &v56);
    v20 = sub_21E7D6C((const void **)&v57, "loot_table");
    v21 = (void *)(v57 - 12);
    if ( (int *)(v57 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v57 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
      else
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    v22 = (void *)(v56 - 12);
    if ( (int *)(v56 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v56 - 4);
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
    if ( v20 )
      v23 = j_Json::Value::operator[](v2, "type");
      sub_21E94B4((void **)&v52, (const char *)&unk_257BC67);
      j_Json::Value::asString(&v53, v23, &v52);
      v24 = sub_21E7D6C((const void **)&v53, "empty");
      v25 = (void *)(v53 - 12);
      if ( (int *)(v53 - 12) != &dword_28898C0 )
        v46 = (unsigned int *)(v53 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v47 = __ldrex(v46);
          while ( __strex(v47 - 1, v46) );
        }
        else
          v47 = (*v46)--;
        if ( v47 <= 0 )
          j_j_j_j__ZdlPv_9(v25);
      v26 = (void *)(v52 - 12);
      if ( (int *)(v52 - 12) != &dword_28898C0 )
        v48 = (unsigned int *)(v52 - 4);
            v49 = __ldrex(v48);
          while ( __strex(v49 - 1, v48) );
          v49 = (*v48)--;
        if ( v49 <= 0 )
          j_j_j_j__ZdlPv_9(v26);
      if ( !v24 )
        v27 = j_operator new(0x1Cu);
        *(_QWORD *)((char *)v27 + 4) = v6;
        *((_DWORD *)v27 + 3) = v66;
        v66 = 0;
        v28 = v67;
        v67 = 0;
        *((_DWORD *)v27 + 4) = v28;
        *((_DWORD *)v27 + 5) = v68;
        *((_DWORD *)v27 + 6) = 0;
        *(_DWORD *)v27 = &off_2725AEC;
        v29 = *v3;
        v68 = 0;
        *v3 = (int)v27;
        if ( v29 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v29 + 8))(v29);
      j_Json::Value::Value((Json::Value *)&v54, v2);
      j_LootTableReference::deserialize(&v55, (Json::Value *)&v54, v6, SHIDWORD(v6), (int)&v66);
      v32 = *v3;
      v33 = v55;
      v55 = 0;
      *v3 = v33;
      if ( v32 )
        (*(void (**)(void))(*(_DWORD *)v32 + 8))();
        if ( v55 )
          (*(void (**)(void))(*(_DWORD *)v55 + 8))();
      j_Json::Value::~Value((Json::Value *)&v54);
  else
    j_Json::Value::Value((Json::Value *)&v58, v2);
    j_LootItem::deserialize(&v59, (Json::Value *)&v58, v6, SHIDWORD(v6), (int)&v66);
    v30 = *v3;
    v31 = v59;
    v59 = 0;
    *v3 = v31;
    if ( v30 )
      (*(void (**)(void))(*(_DWORD *)v30 + 8))();
      if ( v59 )
        (*(void (**)(void))(*(_DWORD *)v59 + 8))();
    j_Json::Value::~Value((Json::Value *)&v58);
  if ( j_Json::Value::isMember(v2, "pools") == 1 )
    v34 = *v3;
    j_Json::Value::Value((Json::Value *)&v50, v2);
    j_LootTableEntry::deserialize(&v51, (const Json::Value *)&v50);
    v35 = v51;
    v51 = 0;
    v36 = *(_DWORD *)(v34 + 24);
    *(_DWORD *)(v34 + 24) = v35;
    if ( v36 )
      (*(void (**)(void))(*(_DWORD *)v36 + 8))();
    if ( v51 )
      (*(void (**)(void))(*(_DWORD *)v51 + 8))();
    j_Json::Value::~Value((Json::Value *)&v50);
  v37 = *(_QWORD *)&v66;
  if ( v66 != v67 )
    do
      if ( *(_DWORD *)v37 )
        (*(void (**)(void))(**(_DWORD **)v37 + 4))();
      *(_DWORD *)v37 = 0;
      LODWORD(v37) = v37 + 4;
    while ( HIDWORD(v37) != (_DWORD)v37 );
    LODWORD(v37) = v66;
  if ( (_DWORD)v37 )
    j_operator delete((void *)v37);
}


char *__fastcall LootPoolEntry::getConditions(LootPoolEntry *this)
{
  return (char *)this + 12;
}


void __fastcall LootPoolEntry::~LootPoolEntry(LootPoolEntry *this)
{
  LootPoolEntry::~LootPoolEntry(this);
}


void __fastcall LootPoolEntry::~LootPoolEntry(LootPoolEntry *this)
{
  LootPoolEntry *v1; // r4@1
  int v2; // r0@1
  char *v3; // r5@3
  char *v4; // r7@3

  v1 = this;
  *(_DWORD *)this = &off_2725A4C;
  v2 = *((_DWORD *)this + 6);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 8))();
  *((_DWORD *)v1 + 6) = 0;
  v4 = (char *)(*(_QWORD *)((char *)v1 + 12) >> 32);
  v3 = (char *)*(_QWORD *)((char *)v1 + 12);
  if ( v3 != v4 )
  {
    do
    {
      if ( *(_DWORD *)v3 )
        (*(void (**)(void))(**(_DWORD **)v3 + 4))();
      *(_DWORD *)v3 = 0;
      v3 += 4;
    }
    while ( v4 != v3 );
    v3 = (char *)*((_DWORD *)v1 + 3);
  }
  if ( v3 )
    j_operator delete(v3);
  j_j_j__ZdlPv_7((void *)v1);
}


int (***__fastcall LootPoolEntry::createItem(int (***a1)(void)))(void)
{
  int (***v1)(void); // r7@1
  int (***result)(void); // r0@1

  v1 = a1;
  result = (int (***)(void))(**a1)();
  if ( result == (int (***)(void))1 )
  {
    result = (int (***)(void))v1[6];
    if ( result )
      result = (int (***)(void))(**result)();
  }
  return result;
}


int __fastcall LootPoolEntry::getWeight(LootPoolEntry *this, float _R1)
{
  int result; // r0@1

  __asm
  {
    VLDR            S2, [R0,#8]
    VMOV            S4, R1
    VLDR            S0, [R0,#4]
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S0, S0
    VMUL.F32        S2, S2, S4
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  }
  result = j_mce::Math::floor(_R0, _R1);
  if ( result <= 0 )
    result = 0;
  return result;
}


LootPoolEntry *__fastcall LootPoolEntry::~LootPoolEntry(LootPoolEntry *this)
{
  LootPoolEntry *v1; // r4@1
  int v2; // r0@1
  char *v3; // r5@3
  char *v4; // r7@3

  v1 = this;
  *(_DWORD *)this = &off_2725A4C;
  v2 = *((_DWORD *)this + 6);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 8))();
  *((_DWORD *)v1 + 6) = 0;
  v4 = (char *)(*(_QWORD *)((char *)v1 + 12) >> 32);
  v3 = (char *)*(_QWORD *)((char *)v1 + 12);
  if ( v3 != v4 )
  {
    do
    {
      if ( *(_DWORD *)v3 )
        (*(void (**)(void))(**(_DWORD **)v3 + 4))();
      *(_DWORD *)v3 = 0;
      v3 += 4;
    }
    while ( v4 != v3 );
    v3 = (char *)*((_DWORD *)v1 + 3);
  }
  if ( v3 )
    j_operator delete(v3);
  return v1;
}
