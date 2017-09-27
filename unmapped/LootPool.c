

void __fastcall LootPool::addRandomItems(int a1, int a2, Random *a3, LootTableContext *a4)
{
  LootPool::addRandomItems(a1, a2, a3, a4);
}


void __fastcall LootPool::addRandomItems(int a1, int a2, Random *a3, LootTableContext *a4)
{
  int v4; // r7@1
  LootTableContext *v5; // r9@1
  Random *v6; // r5@1
  int v7; // r8@1
  int v8; // r0@2
  unsigned int v9; // r6@4
  unsigned int v10; // r1@4
  int v11; // r6@4
  int v12; // r6@5
  float v20; // r1@5
  int v21; // r4@5
  int v22; // r4@10
  int v25; // r0@11
  unsigned __int64 v26; // r0@15

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( j_LootItemConditions::allApply((__int64 *)(a1 + 12)) == 1 )
  {
    v8 = *(_DWORD *)(v4 + 24);
    if ( v8 )
    {
      if ( *(_DWORD *)v8 < 1 )
      {
        v11 = 0;
      }
      else
        v9 = *(_DWORD *)v8;
        v10 = j_Random::_genRandInt32(v6) % v9;
        v8 = *(_DWORD *)(v4 + 24);
        v11 = v10;
      if ( *(_DWORD *)(v8 + 4) > 0 )
        __asm { VLDR            D8, =2.32830644e-10 }
        v22 = 0;
        do
        {
          _R0 = j_Random::_genRandInt32(v6);
          __asm { VMOV            S0, R0 }
          ++v22;
          __asm { VCVT.F64.U32    D0, S0 }
          _R0 = *(_DWORD *)(v4 + 24);
          __asm
          {
            VMUL.F64        D0, D0, D8
            VCVT.F32.F64    S0, D0
            VLDR            S2, [R0,#8]
          }
          v25 = *(_DWORD *)(_R0 + 4);
            VCMPE.F32       S0, S2
            VMRS            APSR_nzcv, FPSCR
          if ( _NF ^ _VF )
            ++v11;
        }
        while ( v22 < v25 );
      if ( v11 >= 0 )
        v26 = *(_QWORD *)v4;
        if ( (HIDWORD(v26) - (signed int)v26) >> 2 > v11 )
          j_j_j__ZN13LootPoolEntry10createItemERSt6vectorI12ItemInstanceSaIS1_EER6RandomR16LootTableContext_0(*(int (****)(void))(v26 + 4 * v11));
    }
    else
      v12 = j_RandomValueBounds::getInt((RandomValueBounds *)(v4 + 28), v6);
      _R0 = j_RandomValueBounds::getFloat((RandomValueBounds *)(v4 + 36), v6);
      __asm { VMOV            S16, R0 }
      _R0 = j_LootTableContext::getLuck(v5);
      __asm
        VMOV            S0, R0
        VMUL.F32        S0, S0, S16
        VMOV            R0, S0
      v21 = j_mce::Math::floor(_R0, v20) + v12;
      if ( v21 >= 1 )
          j_LootPool::addRandomItem((unsigned __int64 *)v4, v7, __PAIR__((unsigned int)v5, (unsigned int)v6));
          --v21;
        while ( v21 );
  }
}


int (***__fastcall LootPool::addTier(int (***result)(void), int a2, int a3, int a4, signed int a5))(void)
{
  int v5; // lr@2

  if ( a5 >= 0 )
  {
    v5 = *(_QWORD *)result;
    result = (int (***)(void))((signed int)((*(_QWORD *)result >> 32) - v5) >> 2);
    if ( (signed int)result > a5 )
      result = j_j_j__ZN13LootPoolEntry10createItemERSt6vectorI12ItemInstanceSaIS1_EER6RandomR16LootTableContext_0(*(int (****)(void))(v5 + 4 * a5));
  }
  return result;
}


signed int __fastcall LootPool::deserialize(int a1, Json::Value *a2)
{
  Json::Value *v2; // r8@1
  int v3; // r4@1
  const Json::Value *v4; // r0@1
  const Json::Value *v5; // r0@2
  const Json::Value *v6; // r0@4
  __int64 v7; // kr00_8@4
  int v8; // r6@5
  int v9; // r5@11
  char *v10; // r6@11
  const Json::Value *v11; // r0@20
  void *v12; // r1@20
  void *v13; // r0@20
  int v14; // r5@24
  signed int result; // r0@24
  const Json::Value *v16; // r0@25
  __int64 v17; // r0@25
  int v18; // [sp+0h] [bp-A0h]@25
  int v19; // [sp+14h] [bp-8Ch]@25
  char v20; // [sp+18h] [bp-88h]@24
  char v21; // [sp+20h] [bp-80h]@24
  char v22; // [sp+28h] [bp-78h]@20
  void *ptr; // [sp+3Ch] [bp-64h]@20
  char v24; // [sp+40h] [bp-60h]@4
  char *v25; // [sp+54h] [bp-4Ch]@4
  char *v26; // [sp+58h] [bp-48h]@4
  int v27; // [sp+5Ch] [bp-44h]@4
  char v28; // [sp+60h] [bp-40h]@2
  char v29; // [sp+70h] [bp-30h]@1

  v2 = a2;
  v3 = a1;
  v4 = (const Json::Value *)j_Json::Value::operator[](a2, "rolls");
  j_Json::Value::Value((Json::Value *)&v29, v4);
  j_RandomValueBounds::deserialize((int *)(v3 + 28), (Json::Value *)&v29);
  j_Json::Value::~Value((Json::Value *)&v29);
  if ( j_Json::Value::isMember(v2, "bonus_rolls") == 1 )
  {
    v5 = (const Json::Value *)j_Json::Value::operator[](v2, "bonus_rolls");
    j_Json::Value::Value((Json::Value *)&v28, v5);
    j_RandomValueBounds::deserialize((int *)(v3 + 36), (Json::Value *)&v28);
    j_Json::Value::~Value((Json::Value *)&v28);
  }
  if ( j_Json::Value::isMember(v2, "conditions") == 1 )
    v6 = (const Json::Value *)j_Json::Value::operator[](v2, "conditions");
    j_Json::Value::Value((Json::Value *)&v24, v6);
    j_LootItemConditions::deserialize((int)&v25, (Json::Value *)&v24);
    v7 = *(_QWORD *)(v3 + 12);
    *(_DWORD *)(v3 + 12) = v25;
    v25 = 0;
    *(_DWORD *)(v3 + 16) = v26;
    v26 = 0;
    *(_DWORD *)(v3 + 20) = v27;
    v27 = 0;
    if ( (_DWORD)v7 != HIDWORD(v7) )
    {
      v8 = v7;
      do
      {
        if ( *(_DWORD *)v8 )
          (*(void (**)(void))(**(_DWORD **)v8 + 4))();
        *(_DWORD *)v8 = 0;
        v8 += 4;
      }
      while ( HIDWORD(v7) != v8 );
    }
    if ( (_DWORD)v7 )
      j_operator delete((void *)v7);
    v9 = (int)v26;
    v10 = v25;
    if ( v25 != v26 )
        if ( *(_DWORD *)v10 )
          (*(void (**)(void))(**(_DWORD **)v10 + 4))();
        *(_DWORD *)v10 = 0;
        v10 += 4;
      while ( (char *)v9 != v10 );
      v10 = v25;
    if ( v10 )
      j_operator delete(v10);
    j_Json::Value::~Value((Json::Value *)&v24);
  if ( j_Json::Value::isMember(v2, "tiers") == 1 )
    v11 = (const Json::Value *)j_Json::Value::operator[](v2, "tiers");
    j_Json::Value::Value((Json::Value *)&v22, v11);
    j_LootPoolTiers::deserialize((int **)&ptr, (Json::Value *)&v22);
    v12 = ptr;
    ptr = 0;
    v13 = *(void **)(v3 + 24);
    *(_DWORD *)(v3 + 24) = v12;
    if ( v13 )
      j_operator delete(v13);
      if ( ptr )
        j_operator delete(ptr);
    j_Json::Value::~Value((Json::Value *)&v22);
  v14 = j_Json::Value::operator[](v2, "entries");
  j_Json::Value::begin((Json::Value *)&v21, v14);
  j_Json::Value::end((Json::Value *)&v20, v14);
  for ( result = j_Json::ValueIteratorBase::isEqual(
                   (Json::ValueIteratorBase *)&v21,
                   (const Json::ValueIteratorBase *)&v20);
        !result;
        result = j_Json::ValueIteratorBase::isEqual(
                   (const Json::ValueIteratorBase *)&v20) )
    v16 = (const Json::Value *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v21);
    j_Json::Value::Value((Json::Value *)&v18, v16);
    j_LootPoolEntry::deserialize(&v19, (Json::Value *)&v18);
    v17 = *(_QWORD *)(v3 + 4);
    if ( (_DWORD)v17 == HIDWORD(v17) )
      j_std::vector<std::unique_ptr<LootPoolEntry,std::default_delete<LootPoolEntry>>,std::allocator<std::unique_ptr<LootPoolEntry,std::default_delete<LootPoolEntry>>>>::_M_emplace_back_aux<std::unique_ptr<LootPoolEntry,std::default_delete<LootPoolEntry>>>(
        (_QWORD *)v3,
        &v19);
    else
      HIDWORD(v17) = v19;
      v19 = 0;
      *(_DWORD *)v17 = HIDWORD(v17);
      *(_DWORD *)(v3 + 4) = v17 + 4;
    if ( v19 )
      (*(void (**)(void))(*(_DWORD *)v19 + 8))();
    v19 = 0;
    j_Json::Value::~Value((Json::Value *)&v18);
    j_Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v21);
  return result;
}


void __fastcall LootPool::addRandomItem(unsigned __int64 *a1, int a2, __int64 a3)
{
  LootPoolEntry **v3; // r9@1
  int v4; // r6@2
  char *v5; // r8@2
  __int64 *v6; // r0@3
  LootPoolEntry *v7; // r4@4
  int v8; // r0@4
  int v9; // r7@4
  LootPoolEntry *v10; // r10@5
  char *v11; // r4@6
  char *v12; // r1@7
  signed int v13; // r6@7
  int v14; // r5@7
  unsigned int v15; // r0@7
  unsigned int v16; // r2@9
  unsigned int v17; // r11@9
  char *v18; // r8@17
  bool v19; // zf@25
  int (****v20)(void); // r5@28
  signed int v21; // r4@28
  int (***v22)(void); // r6@29
  int v23; // r0@29
  unsigned int v24; // [sp+8h] [bp-38h]@2
  char *ptr; // [sp+Ch] [bp-34h]@2
  LootPoolEntry **v26; // [sp+10h] [bp-30h]@1
  __int64 v27; // [sp+14h] [bp-2Ch]@1

  v27 = a3;
  v3 = (LootPoolEntry **)*a1;
  v26 = (LootPoolEntry **)(*a1 >> 32);
  if ( v3 != v26 )
  {
    v24 = 0;
    v4 = 0;
    v5 = 0;
    ptr = 0;
    do
    {
      v6 = (__int64 *)j_LootPoolEntry::getConditions(*v3);
      if ( j_LootItemConditions::allApply(v6) == 1 )
      {
        v7 = *v3;
        v8 = j_LootTableContext::getLuck((LootTableContext *)HIDWORD(v27));
        v9 = j_LootPoolEntry::getWeight(v7, *(float *)&v8);
        if ( v9 >= 1 )
        {
          v10 = *v3;
          if ( v5 == (char *)v4 )
          {
            v12 = ptr;
            v11 = 0;
            v13 = v5 - ptr;
            v14 = (v5 - ptr) >> 2;
            v15 = (v5 - ptr) >> 2;
            if ( !v14 )
              v15 = 1;
            v16 = v15 + (v13 >> 2);
            v17 = v15 + (v13 >> 2);
            if ( 0 != v16 >> 30 )
              v17 = 0x3FFFFFFF;
            if ( v16 < v15 )
            if ( v17 )
            {
              if ( v17 >= 0x40000000 )
                sub_21E57F4();
              v11 = (char *)j_operator new(4 * v17);
              v12 = ptr;
            }
            *(_DWORD *)&v11[4 * v14] = v10;
            if ( v14 )
              v18 = v12;
              j___aeabi_memmove4_0((int)v11, (int)v12);
              v12 = v18;
            v5 = &v11[4 * v14];
            if ( v12 )
              j_operator delete(v12);
            v4 = (int)&v11[4 * v17];
          }
          else
            *(_DWORD *)v5 = v10;
            v11 = ptr;
          v5 += 4;
          v24 += v9;
          ptr = v11;
        }
      }
      ++v3;
    }
    while ( v26 != v3 );
    v19 = v24 == 0;
    if ( v24 )
      v19 = ptr == v5;
    if ( !v19 )
      v20 = (int (****)(void))ptr;
      v21 = j_Random::_genRandInt32((Random *)v27) % v24;
      while ( 1 )
        v22 = *v20;
        v23 = j_LootTableContext::getLuck((LootTableContext *)HIDWORD(v27));
        v21 -= j_LootPoolEntry::getWeight((LootPoolEntry *)v22, *(float *)&v23);
        if ( v21 <= -1 )
          break;
        ++v20;
        if ( (int (****)(void))v5 == v20 )
          goto LABEL_33;
      j_LootPoolEntry::createItem(*v20);
LABEL_33:
    if ( ptr )
      j_j_j__ZdlPv_7(ptr);
  }
}


void __fastcall LootPool::addRandomItem(unsigned __int64 *a1, int a2, __int64 a3)
{
  LootPool::addRandomItem(a1, a2, a3);
}
