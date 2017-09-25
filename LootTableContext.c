

int __fastcall LootTableContext::getEntity(int a1, int a2)
{
  int v2; // r4@4
  int v3; // r1@8
  int v4; // r5@9
  int v5; // r1@9
  unsigned int v7; // [sp+8h] [bp-18h]@9
  unsigned int v8; // [sp+Ch] [bp-14h]@9

  if ( a2 == 2 )
  {
    v2 = *(_DWORD *)(a1 + 12);
  }
  else if ( a2 == 1 )
    v3 = *(_DWORD *)(a1 + 16);
    v2 = 0;
    if ( v3 )
    {
      v4 = *(_DWORD *)(a1 + 4);
      (*(void (__fastcall **)(unsigned int *))(*(_DWORD *)v3 + 32))(&v7);
      v2 = j_Level::fetchEntity(v4, v5, v7, v8, 0);
    }
  else if ( a2 )
  else
    v2 = *(_DWORD *)(a1 + 8);
  return v2;
}


int __fastcall LootTableContext::Builder::withLuck(int result, float a2)
{
  *(float *)(result + 4) = a2;
  return result;
}


int __fastcall LootTableContext::Builder::withKillerPlayer(int result, Player *a2)
{
  *(_DWORD *)(result + 12) = a2;
  return result;
}


int __fastcall LootTableContext::getLuck(LootTableContext *this)
{
  return *(_DWORD *)this;
}


unsigned int __fastcall LootTableContext::Builder::create(LootTableContext::Builder *this, int a2)
{
  LootTableContext::Builder *v2; // r4@1
  int v3; // r0@1
  int v4; // r2@1
  int v5; // r3@1
  int v6; // r6@1
  int v7; // r1@1
  double v8; // r0@1
  unsigned int result; // r0@1
  int v10; // r6@3
  void *v11; // r5@3

  v2 = this;
  v3 = *(_DWORD *)a2;
  v4 = *(_DWORD *)(a2 + 4);
  v5 = *(_DWORD *)(a2 + 8);
  v6 = *(_DWORD *)(a2 + 12);
  v7 = *(_DWORD *)(a2 + 16);
  *(_DWORD *)v2 = v4;
  *((_DWORD *)v2 + 1) = v3;
  *((_DWORD *)v2 + 2) = v5;
  *((_DWORD *)v2 + 3) = v6;
  *((_DWORD *)v2 + 4) = v7;
  HIDWORD(v8) = 10;
  *((_DWORD *)v2 + 7) = 0;
  *((_DWORD *)v2 + 8) = 0;
  *((_DWORD *)v2 + 9) = 1065353216;
  LODWORD(v8) = (char *)v2 + 36;
  *(_DWORD *)(LODWORD(v8) + 4) = 0;
  result = sub_21E6254(v8);
  *((_DWORD *)v2 + 6) = result;
  if ( result == 1 )
  {
    *((_DWORD *)v2 + 11) = 0;
    *((_DWORD *)v2 + 5) = (char *)v2 + 44;
  }
  else
    if ( result >= 0x40000000 )
      sub_21E57F4();
    v10 = 4 * result;
    v11 = j_operator new(4 * result);
    result = j___aeabi_memclr4((int)v11, v10);
    *((_DWORD *)v2 + 5) = v11;
  return result;
}


const LootTable *__fastcall LootTableContext::removeVisitedTable(LootTableContext *this, const LootTable *a2)
{
  LootTableContext *v2; // r9@1
  const LootTable *v3; // r7@1
  unsigned int v4; // r6@1
  unsigned int v5; // r0@1
  int v6; // r4@1
  const LootTable *result; // r0@1
  unsigned int v8; // r1@1
  unsigned int v9; // r11@1
  void **v10; // r10@1
  void **v11; // r8@2
  void **v12; // r4@2
  unsigned int v13; // r0@5
  int v14; // r1@5
  void **v15; // r7@8
  int v16; // r1@10
  _DWORD *v17; // r5@13
  int v18; // r1@14
  int v19; // r1@15
  int v20; // [sp+0h] [bp-28h]@1

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 6);
  v5 = (unsigned int)a2;
  v6 = *((_DWORD *)v2 + 5);
  v20 = *((_DWORD *)v2 + 5);
  v8 = (unsigned int)a2 % v4;
  result = (const LootTable *)(v5 / v4);
  v9 = v8;
  v10 = *(void ***)(v6 + 4 * v8);
  if ( v10 )
  {
    v11 = (void **)*v10;
    v12 = *(void ***)(v6 + 4 * v8);
    while ( 1 )
    {
      result = (const LootTable *)v11[1];
      if ( result == v3 )
        break;
      if ( *v11 )
      {
        v13 = *((_DWORD *)*v11 + 1);
        v14 = v13 % v4;
        result = (const LootTable *)(v13 / v4);
        v12 = v11;
        v11 = (void **)*v11;
        if ( v14 == v9 )
          continue;
      }
      return result;
    }
    if ( v12 )
      v15 = (void **)*v12;
      if ( v10 != v12 )
        if ( *v15 )
        {
          v16 = *((_DWORD *)*v15 + 1) % v4;
          if ( v16 != v9 )
            *(_DWORD *)(v20 + 4 * v16) = v12;
        }
        goto LABEL_20;
      v17 = *v15;
      if ( *v15 )
        v18 = v17[1] % v4;
        if ( v18 == v9 )
LABEL_20:
          *v12 = *v15;
          j_operator delete(v15);
          result = (const LootTable *)(*((_DWORD *)v2 + 8) - 1);
          *((_DWORD *)v2 + 8) = result;
          return result;
        *(_DWORD *)(v20 + 4 * v18) = v10;
        v19 = *((_DWORD *)v2 + 5);
        v10 = *(void ***)(v19 + 4 * v9);
      else
      if ( (void **)((char *)v2 + 28) == v10 )
        *v10 = v17;
      *(_DWORD *)(v19 + 4 * v9) = 0;
      goto LABEL_20;
  }
  return result;
}


int __fastcall LootTableContext::getKillerEntity(LootTableContext *this)
{
  int v1; // r1@1
  int v2; // r4@1
  int v3; // r5@2
  int v4; // r1@2
  unsigned int v6; // [sp+8h] [bp-18h]@2
  unsigned int v7; // [sp+Ch] [bp-14h]@2

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 )
  {
    v3 = *((_DWORD *)this + 1);
    (*(void (__fastcall **)(unsigned int *))(*(_DWORD *)v1 + 32))(&v6);
    v2 = j_Level::fetchEntity(v3, v4, v6, v7, 0);
  }
  return v2;
}


int __fastcall LootTableContext::Builder::withDeathSource(int result, const EntityDamageSource *a2)
{
  *(_DWORD *)(result + 16) = a2;
  return result;
}


int __fastcall LootTableContext::Builder::withThisEntity(int result, Entity *a2)
{
  *(_DWORD *)(result + 8) = a2;
  return result;
}


signed int __fastcall LootTableContext::addVisitedTable(LootTableContext *this, const LootTable *a2)
{
  const LootTable *v2; // r4@1
  char *v3; // r8@1
  unsigned int v4; // r7@1
  int v5; // r9@1
  int *v6; // r0@1
  int v7; // r6@2
  int v8; // r5@4
  bool v9; // zf@7
  signed int result; // r0@10
  _DWORD *v11; // r0@11

  v2 = a2;
  v3 = (char *)this + 20;
  v4 = *((_DWORD *)this + 6);
  v5 = (unsigned int)a2 % *((_DWORD *)this + 6);
  v6 = *(int **)(*((_DWORD *)this + 5) + 4 * v5);
  if ( !v6 )
    goto LABEL_11;
  v7 = *v6;
  while ( *(const LootTable **)(v7 + 4) != a2 )
  {
    v8 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 )
    {
      v6 = (int *)v7;
      v7 = *(_DWORD *)v7;
      if ( *(_DWORD *)(v8 + 4) % v4 == v5 )
        continue;
    }
  }
  v9 = v6 == 0;
  if ( v6 )
    v9 = *v6 == 0;
  if ( v9 )
LABEL_11:
    v11 = j_operator new(8u);
    *v11 = 0;
    v11[1] = v2;
    std::_Hashtable<LootTable const*,LootTable const*,std::allocator<LootTable const*>,std::__detail::_Identity,std::equal_to<LootTable const*>,std::hash<LootTable const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::_M_insert_unique_node(
      (int)v3,
      v5,
      (unsigned int)v2,
      (int)v11);
    result = 1;
  else
    result = 0;
  return result;
}


int __fastcall LootTableContext::Builder::Builder(int result, Level *a2)
{
  *(_QWORD *)result = (unsigned int)a2;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  return result;
}


int __fastcall LootTableContext::LootTableContext(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r4@1
  double v7; // r0@1
  unsigned int v8; // r0@1
  int v9; // r6@3
  void *v10; // r5@3
  int result; // r0@4

  v6 = a1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a3;
  *(_DWORD *)(a1 + 8) = a4;
  *(_DWORD *)(a1 + 12) = a5;
  *(_DWORD *)(a1 + 16) = a6;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  HIDWORD(v7) = 10;
  *(_DWORD *)(a1 + 36) = 1065353216;
  LODWORD(v7) = a1 + 36;
  *(_DWORD *)(LODWORD(v7) + 4) = 0;
  v8 = sub_21E6254(v7);
  *(_DWORD *)(v6 + 24) = v8;
  if ( v8 == 1 )
  {
    *(_DWORD *)(v6 + 44) = 0;
    v10 = (void *)(v6 + 44);
  }
  else
    if ( v8 >= 0x40000000 )
      sub_21E57F4();
    v9 = 4 * v8;
    v10 = j_operator new(4 * v8);
    j___aeabi_memclr4((int)v10, v9);
  result = v6;
  *(_DWORD *)(v6 + 20) = v10;
  return result;
}
