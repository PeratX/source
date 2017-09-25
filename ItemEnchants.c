

signed int __fastcall ItemEnchants::isEmpty(ItemEnchants *this)
{
  __int64 v1; // r1@1
  bool v2; // zf@1
  signed int result; // r0@4
  __int64 v4; // r1@5

  v1 = *(_QWORD *)((char *)this + 4);
  v2 = (_DWORD)v1 == HIDWORD(v1);
  if ( (_DWORD)v1 == HIDWORD(v1) )
    v2 = (unsigned int)*((_QWORD *)this + 2) == *((_QWORD *)this + 2) >> 32;
  if ( v2 )
  {
    v4 = *(_QWORD *)((char *)this + 28);
    result = 0;
    if ( (_DWORD)v4 == HIDWORD(v4) )
      result = 1;
  }
  else
  return result;
}


int __fastcall ItemEnchants::hasEnchant(ItemEnchants *this, int a2)
{
  int v2; // r4@1
  ItemEnchants *v3; // r5@1
  signed int v4; // r0@1
  EnchantmentInstance *v5; // r5@2 OVERLAPPED
  EnchantmentInstance *v6; // r6@2 OVERLAPPED
  int result; // r0@5

  v2 = a2;
  v3 = this;
  v4 = EnchantUtils::determineActivation((EnchantUtils *)a2, a2);
  if ( v4 == 4 || (*(_QWORD *)&v5 = *(_QWORD *)((char *)v3 + 12 * v4 + 4), v5 == v6) )
  {
LABEL_5:
    result = 0;
  }
  else
    while ( EnchantmentInstance::getEnchantType(v5) != v2 )
    {
      v5 = (EnchantmentInstance *)((char *)v5 + 8);
      if ( v6 == v5 )
        goto LABEL_5;
    }
    result = j_j_j__ZNK19EnchantmentInstance15getEnchantLevelEv(v5);
  return result;
}


int __fastcall ItemEnchants::count(ItemEnchants *this)
{
  return ((signed int)((*((_QWORD *)this + 2) >> 32) - *((_QWORD *)this + 2)) >> 3)
       + ((signed int)((*(_QWORD *)((char *)this + 4) >> 32) - *(_QWORD *)((char *)this + 4)) >> 3)
       + ((signed int)((*(_QWORD *)((char *)this + 28) >> 32) - *(_QWORD *)((char *)this + 28)) >> 3);
}


int __fastcall ItemEnchants::getTotalValue(ItemEnchants *this, int a2)
{
  ItemEnchants *v2; // r8@1
  __int64 v3; // r6@1
  int k; // r4@3
  int v5; // r0@4
  unsigned int v6; // r0@4
  unsigned int v7; // r0@5
  signed int v8; // r5@7
  int v9; // r0@12
  unsigned int v10; // r0@12
  int v11; // r5@13
  EnchantmentInstance *l; // r6@16
  EnchantmentInstance *v13; // r10@16
  int v14; // r0@17
  unsigned int v15; // r0@17
  int v16; // r5@18
  EnchantmentInstance *m; // r6@21
  EnchantmentInstance *v18; // r9@21
  int v19; // r0@22
  unsigned int v20; // r0@22
  int v21; // r5@23
  __int64 i; // r6@28
  int v23; // r0@29
  unsigned int v24; // r0@29
  unsigned int v25; // r0@30
  signed int v26; // r5@32
  EnchantmentInstance *v27; // r5@35
  EnchantmentInstance *j; // r6@35
  int v29; // r0@36
  unsigned int v30; // r0@36
  unsigned int v31; // r0@37
  signed int v32; // r7@39

  v2 = this;
  v3 = *(_QWORD *)((char *)this + 4);
  if ( a2 )
  {
    if ( (_DWORD)v3 == HIDWORD(v3) )
    {
      k = 0;
    }
    else
      do
      {
        v5 = EnchantmentInstance::getEnchantType((EnchantmentInstance *)v3);
        v6 = Enchant::getFrequency(*(Enchant **)(Enchant::mEnchants + 4 * v5)) - 1;
        if ( v6 > 9 )
          v7 = 0;
        else
          v7 = dword_262E570[v6];
        v8 = v7 >> 1;
        if ( !(v7 >> 1) )
          v8 = 1;
        k += EnchantmentInstance::getEnchantLevel((EnchantmentInstance *)v3) * v8;
        LODWORD(v3) = v3 + 8;
      }
      while ( HIDWORD(v3) != (_DWORD)v3 );
    for ( i = *((_QWORD *)v2 + 2); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 8 )
      v23 = EnchantmentInstance::getEnchantType((EnchantmentInstance *)i);
      v24 = Enchant::getFrequency(*(Enchant **)(Enchant::mEnchants + 4 * v23)) - 1;
      if ( v24 > 9 )
        v25 = 0;
      else
        v25 = dword_262E570[v24];
      v26 = v25 >> 1;
      if ( !(v25 >> 1) )
        v26 = 1;
      k += EnchantmentInstance::getEnchantLevel((EnchantmentInstance *)i) * v26;
    v27 = (EnchantmentInstance *)(*(_QWORD *)((char *)v2 + 28) >> 32);
    for ( j = (EnchantmentInstance *)*(_QWORD *)((char *)v2 + 28); v27 != j; j = (EnchantmentInstance *)((char *)j + 8) )
      v29 = EnchantmentInstance::getEnchantType(j);
      v30 = Enchant::getFrequency(*(Enchant **)(Enchant::mEnchants + 4 * v29)) - 1;
      if ( v30 > 9 )
        v31 = 0;
        v31 = dword_262E570[v30];
      v32 = v31 >> 1;
      if ( !(v31 >> 1) )
        v32 = 1;
      k += EnchantmentInstance::getEnchantLevel(j) * v32;
  }
  else
    for ( k = 0; HIDWORD(v3) != (_DWORD)v3; LODWORD(v3) = v3 + 8 )
      v9 = EnchantmentInstance::getEnchantType((EnchantmentInstance *)v3);
      v10 = Enchant::getFrequency(*(Enchant **)(Enchant::mEnchants + 4 * v9)) - 1;
      if ( v10 > 9 )
        v11 = 0;
        v11 = dword_262E570[v10];
      k += EnchantmentInstance::getEnchantLevel((EnchantmentInstance *)v3) * v11;
    v13 = (EnchantmentInstance *)(*((_QWORD *)v2 + 2) >> 32);
    for ( l = (EnchantmentInstance *)*((_QWORD *)v2 + 2); v13 != l; l = (EnchantmentInstance *)((char *)l + 8) )
      v14 = EnchantmentInstance::getEnchantType(l);
      v15 = Enchant::getFrequency(*(Enchant **)(Enchant::mEnchants + 4 * v14)) - 1;
      if ( v15 > 9 )
        v16 = 0;
        v16 = dword_262E570[v15];
      k += EnchantmentInstance::getEnchantLevel(l) * v16;
    v18 = (EnchantmentInstance *)(*(_QWORD *)((char *)v2 + 28) >> 32);
    for ( m = (EnchantmentInstance *)*(_QWORD *)((char *)v2 + 28); v18 != m; m = (EnchantmentInstance *)((char *)m + 8) )
      v19 = EnchantmentInstance::getEnchantType(m);
      v20 = Enchant::getFrequency(*(Enchant **)(Enchant::mEnchants + 4 * v19)) - 1;
      if ( v20 > 9 )
        v21 = 0;
        v21 = dword_262E570[v20];
      k += EnchantmentInstance::getEnchantLevel(m) * v21;
  return k;
}


int __fastcall ItemEnchants::ItemEnchants(int result, int a2)
{
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  return result;
}


signed int __fastcall ItemEnchants::addEnchant(int *a1, unsigned int a2, unsigned int a3)
{
  int *v3; // r4@1
  EnchantUtils *v4; // r0@1
  int v5; // r1@1
  signed int v6; // r0@1
  int v8; // r2@5
  int v9; // r0@5
  __int64 v10; // r0@5
  int v11; // t1@5
  char v12; // [sp+4h] [bp-1Ch]@1
  int v13; // [sp+8h] [bp-18h]@4
  int v14; // [sp+Ch] [bp-14h]@4
  unsigned __int64 v15; // [sp+10h] [bp-10h]@1

  v3 = a1;
  v15 = __PAIR__(a3, a2);
  ItemEnchants::canEnchant((int)&v12, a1, __PAIR__(a3, a2));
  v4 = (EnchantUtils *)EnchantmentInstance::getEnchantType((EnchantmentInstance *)&v15);
  v6 = EnchantUtils::determineActivation(v4, v5);
  if ( v12 == 3 )
  {
    v8 = (int)&v3[3 * v6];
    v9 = (int)&v3[3 * v6];
    v11 = *(_DWORD *)(v9 + 8);
    LODWORD(v10) = v9 + 8;
    HIDWORD(v10) = v11;
    if ( v11 == *(_DWORD *)(v10 + 4) )
    {
      LODWORD(v10) = v8 + 4;
      std::vector<EnchantmentInstance,std::allocator<EnchantmentInstance>>::_M_emplace_back_aux<EnchantmentInstance const&>(v10);
    }
    else
      *(_QWORD *)HIDWORD(v10) = v15;
      *(_DWORD *)v10 += 8;
  }
  else
    if ( v12 != 2 )
      return 0;
    EnchantmentInstance::setEnchantLevel((EnchantmentInstance *)(v3[3 * v6 + 1] + 8 * v13), v14);
  return 1;
}


int __fastcall ItemEnchants::ItemEnchants(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r0@1
  void *v6; // r0@1
  int v7; // r1@1
  int v8; // r1@1
  void *v9; // r0@3
  int v10; // r1@3
  int v11; // r1@3

  v2 = a1;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  v3 = a2;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = 0;
  v4 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = v4;
  v5 = *(_DWORD *)(v2 + 12);
  *(_DWORD *)(v2 + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = v5;
  v6 = *(void **)(v2 + 16);
  *(_DWORD *)(v2 + 16) = 0;
  *(_DWORD *)(v2 + 20) = 0;
  *(_DWORD *)(v2 + 24) = 0;
  *(_DWORD *)(v2 + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 16) = 0;
  v7 = *(_DWORD *)(v2 + 20);
  *(_DWORD *)(v2 + 20) = *(_DWORD *)(v3 + 20);
  *(_DWORD *)(v3 + 20) = v7;
  v8 = *(_DWORD *)(v2 + 24);
  *(_DWORD *)(v2 + 24) = *(_DWORD *)(v3 + 24);
  *(_DWORD *)(v3 + 24) = v8;
  if ( v6 )
    operator delete(v6);
  v9 = *(void **)(v2 + 28);
  *(_DWORD *)(v2 + 28) = 0;
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 36) = 0;
  *(_DWORD *)(v2 + 28) = *(_DWORD *)(v3 + 28);
  *(_DWORD *)(v3 + 28) = 0;
  v10 = *(_DWORD *)(v2 + 32);
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(v3 + 32);
  *(_DWORD *)(v3 + 32) = v10;
  v11 = *(_DWORD *)(v2 + 36);
  *(_DWORD *)(v2 + 36) = *(_DWORD *)(v3 + 36);
  *(_DWORD *)(v3 + 36) = v11;
  if ( v9 )
    operator delete(v9);
  return v2;
}


ItemEnchants *__fastcall ItemEnchants::ItemEnchants(ItemEnchants *this, int a2, const ListTag *a3)
{
  ItemEnchants *v3; // r4@1

  v3 = this;
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  ItemEnchants::_fromList(this, a3);
  return v3;
}


void __fastcall ItemEnchants::getEnchantNames(ItemEnchants *this, int a2)
{
  ItemEnchants::getEnchantNames(this, a2);
}


int __fastcall ItemEnchants::_toList(ItemEnchants *this, int a2)
{
  ItemEnchants *v2; // r4@1
  int v3; // r5@1
  _DWORD *v4; // r7@1
  int v5; // r1@1
  void *v6; // r0@1
  _QWORD *v7; // r11@2
  EnchantmentInstance *v8; // r9@3 OVERLAPPED
  EnchantmentInstance *v9; // r10@3 OVERLAPPED
  void *v10; // r5@8
  __int16 v11; // r0@8
  void *v12; // r0@8
  __int16 v13; // r0@9
  void *v14; // r0@9
  int v15; // r0@10
  unsigned int *v16; // r2@11
  signed int v17; // r1@13
  unsigned int *v18; // r2@15
  signed int v19; // r1@17
  int result; // r0@27
  unsigned int *v21; // r2@29
  signed int v22; // r1@31
  int v23; // [sp+4h] [bp-44h]@2
  void *v24; // [sp+8h] [bp-40h]@4
  int v25; // [sp+10h] [bp-38h]@9
  int v26; // [sp+18h] [bp-30h]@8
  int v27; // [sp+1Ch] [bp-2Ch]@1

  v2 = this;
  v3 = a2;
  sub_21E8AF4(&v27, &ItemInstance::TAG_ENCHANTS);
  v4 = operator new(0x14u);
  ListTag::ListTag(v4);
  v5 = v27;
  *(_DWORD *)v2 = v4;
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
  {
    v21 = (unsigned int *)(v5 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    }
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  v23 = v3 + 40;
  v7 = (_QWORD *)(v3 + 4);
  do
    *(_QWORD *)&v8 = *v7;
    while ( v8 != v9 )
      v10 = operator new(0x1Cu);
      CompoundTag::CompoundTag((int)v10);
      sub_21E94B4((void **)&v26, "id");
      v11 = EnchantmentInstance::getEnchantType(v8);
      CompoundTag::putShort((int)v10, (const void **)&v26, v11);
      v12 = (void *)(v26 - 12);
      if ( (int *)(v26 - 12) != &dword_28898C0 )
      {
        v16 = (unsigned int *)(v26 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
        }
        else
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      }
      sub_21E94B4((void **)&v25, "lvl");
      v13 = EnchantmentInstance::getEnchantLevel(v8);
      CompoundTag::putShort((int)v10, (const void **)&v25, v13);
      v14 = (void *)(v25 - 12);
      if ( (int *)(v25 - 12) != &dword_28898C0 )
        v18 = (unsigned int *)(v25 - 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j__ZdlPv_9(v14);
      v15 = *(_DWORD *)v2;
      v24 = v10;
      ListTag::add(v15, (int *)&v24);
      if ( v24 )
        (*(void (**)(void))(*(_DWORD *)v24 + 4))();
      v8 = (EnchantmentInstance *)((char *)v8 + 8);
      v24 = 0;
    v7 = (_QWORD *)((char *)v7 + 12);
    result = v23;
  while ( v7 != (_QWORD *)v23 );
  return result;
}


char *__fastcall ItemEnchants::getEnchants(ItemEnchants *this, int a2, int a3)
{
  ItemEnchants *v3; // r4@1
  int v4; // r5@1
  char *result; // r0@1
  char *v6; // r2@1
  int v7; // r5@1
  char *v8; // t1@1
  char *v9; // r3@1
  unsigned int v10; // r1@1
  unsigned int v11; // r6@1
  int v12; // r12@5
  char *v13; // r6@5
  __int64 v14; // kr00_8@6

  v3 = this;
  v4 = a2 + 12 * a3;
  result = 0;
  v8 = *(char **)(v4 + 4);
  v7 = v4 + 4;
  v6 = v8;
  v9 = *(char **)(v7 + 4);
  *(_DWORD *)v3 = 0;
  *((_DWORD *)v3 + 1) = 0;
  v10 = v9 - v8;
  *((_DWORD *)v3 + 2) = 0;
  v11 = (v9 - v8) >> 3;
  if ( v11 )
  {
    if ( v11 >= 0x20000000 )
      sub_21E57F4();
    result = (char *)operator new(v10);
    v9 = *(char **)(v7 + 4);
    v6 = *(char **)v7;
  }
  *(_DWORD *)v3 = result;
  *((_DWORD *)v3 + 1) = result;
  *((_DWORD *)v3 + 2) = &result[8 * v11];
  if ( v6 != v9 )
    v12 = -(signed int)v6;
    v13 = result;
    do
    {
      v14 = *(_QWORD *)v6;
      v6 += 8;
      *(_QWORD *)v13 = v14;
      v13 += 8;
    }
    while ( v9 != v6 );
    result += ((unsigned int)&v9[v12 - 8] & 0xFFFFFFF8) + 8;
  return result;
}


signed int __fastcall ItemEnchants::canEnchant(int a1, int *a2, __int64 a3)
{
  int v3; // r9@1
  int *v4; // r6@1
  int v5; // r5@1
  int v6; // r1@1
  unsigned int v7; // r7@1
  int v8; // r8@3
  int v9; // r0@3
  int v10; // r8@3
  int v11; // t1@3
  int v12; // r10@4
  __int64 v13; // r4@4
  EnchantmentInstance *v14; // r6@5
  Enchant *v15; // r7@6
  int v16; // r0@6
  char v17; // r0@8
  signed int result; // r0@9
  int v19; // r7@10
  int v20; // r8@11
  int v21; // r7@11
  int v22; // r0@11
  int v23; // r0@16
  __int64 v24; // [sp+4h] [bp-2Ch]@1

  v3 = a1;
  v4 = a2;
  v24 = a3;
  v5 = EnchantmentInstance::getEnchantType((EnchantmentInstance *)&v24);
  v7 = EnchantUtils::determineActivation((EnchantUtils *)v5, v6);
  if ( v7 >= 3 || Enchant::canEnchant(*(Enchant **)(Enchant::mEnchants + 4 * v5), *v4) != 1 )
  {
    result = 0;
    *(_BYTE *)v3 = 0;
LABEL_15:
    *(_DWORD *)(v3 + 4) = 0;
    *(_DWORD *)(v3 + 8) = 0;
    return result;
  }
  v8 = (int)&v4[3 * v7];
  v11 = *(_DWORD *)(v8 + 4);
  v10 = v8 + 4;
  v9 = v11;
  if ( *(_DWORD *)(v10 + 4) == v11 )
LABEL_8:
    v17 = 3;
LABEL_14:
    *(_BYTE *)v3 = v17;
    goto LABEL_15;
  v12 = 0;
  LODWORD(v13) = 0;
  while ( 1 )
    v14 = (EnchantmentInstance *)(v9 + v12);
    if ( EnchantmentInstance::getEnchantType((EnchantmentInstance *)(v9 + v12)) == v5 )
      break;
    v15 = *(Enchant **)(Enchant::mEnchants + 4 * v5);
    v16 = EnchantmentInstance::getEnchantType(v14);
    if ( !Enchant::isCompatibleWith(v15, v16) )
      goto LABEL_13;
    v9 = *(_DWORD *)v10;
    v12 += 8;
    LODWORD(v13) = v13 + 1;
    if ( (unsigned int)v13 >= (*(_DWORD *)(v10 + 4) - *(_DWORD *)v10) >> 3 )
      goto LABEL_8;
  v19 = EnchantmentInstance::getEnchantLevel(v14);
  if ( v19 >= (*(int (**)(void))(**(_DWORD **)(Enchant::mEnchants + 4 * v5) + 20))() )
LABEL_13:
    v17 = 1;
    goto LABEL_14;
  v20 = EnchantmentInstance::getEnchantLevel(v14);
  v21 = EnchantmentInstance::getEnchantLevel((EnchantmentInstance *)&v24);
  v22 = EnchantmentInstance::getEnchantLevel(v14);
  HIDWORD(v13) = v22;
  if ( v20 == v21 )
    HIDWORD(v13) = v22 + 1;
  else
    v23 = EnchantmentInstance::getEnchantLevel((EnchantmentInstance *)&v24);
    if ( SHIDWORD(v13) < v23 )
      HIDWORD(v13) = v23;
  result = 2;
  *(_BYTE *)v3 = 2;
  *(_QWORD *)(v3 + 4) = v13;
  return result;
}


char *__fastcall ItemEnchants::getAllEnchants(ItemEnchants *this, int a2)
{
  ItemEnchants *v2; // r4@1
  int v3; // r5@1
  char *result; // r0@1
  char *v5; // r6@1
  char *v6; // r7@2
  __int64 i; // r0@2
  __int64 j; // r6@8
  __int64 v9; // r0@9
  _QWORD *v10; // r5@13
  _QWORD *k; // r6@13
  __int64 v12; // kr08_8@13
  __int64 v13; // r0@14

  v2 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v3 = a2;
  *((_DWORD *)this + 2) = 0;
  result = (char *)(*(_QWORD *)(a2 + 4) >> 32);
  v5 = (char *)*(_QWORD *)(a2 + 4);
  if ( v5 != result )
  {
    v6 = result - 8;
    for ( i = 0LL; ; i = *(_QWORD *)((char *)v2 + 4) )
    {
      if ( (_DWORD)i == HIDWORD(i) )
      {
        result = std::vector<EnchantmentInstance,std::allocator<EnchantmentInstance>>::_M_emplace_back_aux<EnchantmentInstance const&>(__PAIR__((unsigned int)v5, (unsigned int)v2));
      }
      else
        *(_QWORD *)i = *(_QWORD *)v5;
        result = (char *)(i + 8);
        *((_DWORD *)v2 + 1) = result;
      if ( v6 == v5 )
        break;
      v5 += 8;
    }
  }
  for ( j = *(_QWORD *)(v3 + 16); HIDWORD(j) != (_DWORD)j; LODWORD(j) = j + 8 )
    v9 = *(_QWORD *)((char *)v2 + 4);
    if ( (_DWORD)v9 == HIDWORD(v9) )
      result = std::vector<EnchantmentInstance,std::allocator<EnchantmentInstance>>::_M_emplace_back_aux<EnchantmentInstance const&>(__PAIR__(j, (unsigned int)v2));
    else
      *(_QWORD *)v9 = *(_QWORD *)j;
      result = (char *)(v9 + 8);
      *((_DWORD *)v2 + 1) = result;
  v12 = *(_QWORD *)(v3 + 28);
  v10 = (_QWORD *)(*(_QWORD *)(v3 + 28) >> 32);
  for ( k = (_QWORD *)v12; v10 != k; ++k )
    v13 = *(_QWORD *)((char *)v2 + 4);
    if ( (_DWORD)v13 == HIDWORD(v13) )
      result = std::vector<EnchantmentInstance,std::allocator<EnchantmentInstance>>::_M_emplace_back_aux<EnchantmentInstance const&>(__PAIR__((unsigned int)k, (unsigned int)v2));
      *(_QWORD *)v13 = *k;
      result = (char *)(v13 + 8);
  return result;
}


signed int __fastcall ItemEnchants::_fromList(ItemEnchants *this, const ListTag *a2)
{
  signed int result; // r0@1
  int *v3; // r6@2
  unsigned int v4; // r7@2
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  int v9; // r10@19
  EnchantUtils *v10; // r8@19
  void *v11; // r0@19
  int v12; // r4@20
  int *v13; // r10@20
  void *v14; // r0@20
  __int64 v15; // r2@21
  signed int v16; // r6@21
  int v17; // r0@22
  __int64 v18; // r0@22
  int v19; // t1@22
  ItemEnchants *v20; // [sp+4h] [bp-4Ch]@1
  signed int v21; // [sp+8h] [bp-48h]@1
  const ListTag *v22; // [sp+Ch] [bp-44h]@1
  char v23; // [sp+10h] [bp-40h]@22
  int v24; // [sp+1Ch] [bp-34h]@2
  int v25; // [sp+24h] [bp-2Ch]@3

  *((_DWORD *)this + 2) = *((_DWORD *)this + 1);
  *((_DWORD *)this + 5) = *((_DWORD *)this + 4);
  v20 = this;
  *((_DWORD *)this + 8) = *((_DWORD *)this + 7);
  v22 = a2;
  result = ListTag::size(a2);
  v21 = result;
  if ( result )
  {
    v3 = &v24;
    v4 = 0;
    do
    {
      v9 = ListTag::getCompound(v22, v4);
      sub_21E94B4((void **)&v25, "id");
      v10 = (EnchantUtils *)CompoundTag::getShort(v9, (const void **)&v25);
      v11 = (void *)(v25 - 12);
      if ( (int *)(v25 - 12) != &dword_28898C0 )
      {
        v5 = (unsigned int *)(v25 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        }
        else
          v6 = (*v5)--;
        if ( v6 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      }
      sub_21E94B4((void **)v3, "lvl");
      v12 = CompoundTag::getShort(v9, (const void **)v3);
      v8 = v24;
      v13 = v3;
      v14 = (void *)(v24 - 12);
      if ( (int *)(v24 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v24 - 4);
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v14);
      v16 = EnchantUtils::determineActivation(v10, v8);
      if ( v16 != 4 )
        LODWORD(v15) = v12;
        EnchantmentInstance::EnchantmentInstance(&v23, (int)v10, v15);
        v17 = (int)v20 + 12 * v16;
        v19 = *(_DWORD *)(v17 + 8);
        LODWORD(v18) = v17 + 8;
        HIDWORD(v18) = v19;
        if ( v19 == *(_DWORD *)(v18 + 4) )
          LODWORD(v18) = (char *)v20 + 12 * v16 + 4;
          std::vector<EnchantmentInstance,std::allocator<EnchantmentInstance>>::_M_emplace_back_aux<EnchantmentInstance>(v18);
          *(_QWORD *)HIDWORD(v18) = *(_QWORD *)&v23;
          *(_DWORD *)v18 += 8;
      ++v4;
      result = v21;
      v3 = v13;
    }
    while ( v4 != v21 );
  }
  return result;
}


void __fastcall ItemEnchants::getEnchantNames(ItemEnchants *this, int a2)
{
  ItemEnchants *v2; // r8@1
  EnchantmentInstance *v3; // r5@1
  EnchantmentInstance *v4; // r10@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // r7@11
  int v8; // r0@11
  __int64 v9; // r0@11
  int v10; // r1@12
  void *v11; // r0@14
  void *v12; // [sp+0h] [bp-38h]@11
  EnchantmentInstance *v13; // [sp+4h] [bp-34h]@1
  EnchantmentInstance *v14; // [sp+8h] [bp-30h]@1

  v2 = this;
  ItemEnchants::getAllEnchants((ItemEnchants *)&v13, a2);
  *(_DWORD *)v2 = 0;
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = 0;
  v4 = v14;
  v3 = v13;
  std::vector<std::string,std::allocator<std::string>>::reserve((int)v2, (v14 - v13) >> 3);
  if ( v3 != v4 )
  {
    do
    {
      v7 = EnchantmentInstance::getEnchantType(v3);
      v8 = EnchantmentInstance::getEnchantLevel(v3);
      EnchantUtils::getEnchantNameAndLevel((EnchantUtils *)&v12, v7, v8);
      v9 = *(_QWORD *)((char *)v2 + 4);
      if ( (_DWORD)v9 == HIDWORD(v9) )
      {
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
          (unsigned __int64 *)v2,
          &v12);
        v10 = (int)v12;
      }
      else
        *(_DWORD *)v9 = v12;
        HIDWORD(v9) = &unk_28898CC;
        v12 = &unk_28898CC;
        *((_DWORD *)v2 + 1) = v9 + 4;
      v11 = (void *)(v10 - 12);
      if ( (int *)(v10 - 12) != &dword_28898C0 )
        v5 = (unsigned int *)(v10 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        }
        else
          v6 = (*v5)--;
        if ( v6 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      v3 = (EnchantmentInstance *)((char *)v3 + 8);
    }
    while ( v3 != v4 );
    v3 = v13;
  }
  if ( v3 )
    operator delete((void *)v3);
}


int __fastcall ItemEnchants::getSlot(ItemEnchants *this)
{
  return *(_DWORD *)this;
}


int __fastcall ItemEnchants::addEnchants(ItemEnchants *this, const ItemEnchants *a2)
{
  int *v2; // r6@1
  __int64 v3; // kr00_8@1
  int v4; // r5@1
  unsigned __int64 *v5; // r4@2
  signed int v6; // r0@3
  unsigned __int64 *v8; // [sp+4h] [bp-24h]@1
  unsigned __int64 *v9; // [sp+8h] [bp-20h]@1

  v2 = (int *)this;
  ItemEnchants::getAllEnchants((ItemEnchants *)&v8, (int)a2);
  v3 = *(_QWORD *)&v8;
  v4 = 0;
  if ( v8 != v9 )
  {
    v5 = v8;
    do
    {
      v6 = ItemEnchants::addEnchant(v2, *v5, *v5 >> 32);
      ++v5;
      if ( v6 )
        ++v4;
    }
    while ( v5 != (unsigned __int64 *)HIDWORD(v3) );
  }
  if ( (_DWORD)v3 )
    operator delete((void *)v3);
  return v4;
}
