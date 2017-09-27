

void __fastcall LootTable::getAvailableSlots(LootTable *this, Container *a2, Random *a3)
{
  LootTable *v3; // r7@1
  Random *v4; // r9@1
  int v5; // r10@1
  char *v6; // r5@2
  char *v7; // r11@2
  int v8; // r8@2
  int v9; // r6@2
  int v10; // r0@3
  int v11; // r4@3
  int v12; // r0@3
  bool v13; // zf@3
  unsigned int v14; // r1@10
  unsigned int v15; // r0@12
  unsigned int v16; // r4@12
  unsigned int v17; // r0@28
  char *v18; // r4@31
  int v19; // r0@32
  int v20; // r2@32
  void *v21; // r0@33
  unsigned int *v22; // r2@35
  signed int v23; // r1@37
  LootTable *v24; // [sp+0h] [bp-A10h]@1
  char *v25; // [sp+8h] [bp-A08h]@2
  int v26; // [sp+10h] [bp-A00h]@28
  char v27; // [sp+14h] [bp-9FCh]@28
  unsigned int v28; // [sp+9D8h] [bp-38h]@30
  int v29; // [sp+9DCh] [bp-34h]@32
  int v30; // [sp+9E0h] [bp-30h]@32
  int v31; // [sp+9E4h] [bp-2Ch]@31
  int i; // [sp+9E8h] [bp-28h]@31

  v3 = this;
  v24 = this;
  v4 = a3;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v5 = (*(int (__fastcall **)(Random *))(*(_DWORD *)a3 + 44))(a3);
  if ( v5 < 1 )
  {
    v7 = 0;
    v6 = 0;
  }
  else
    v8 = 0;
    v9 = 0;
    v25 = 0;
    do
    {
      v10 = (*(int (__fastcall **)(Random *, int))(*(_DWORD *)v4 + 16))(v4, v9);
      v11 = v10;
      v12 = *(_BYTE *)(v10 + 15);
      v13 = v12 == 0;
      if ( v12 )
        v13 = *(_DWORD *)v11 == 0;
      if ( v13 || j_ItemInstance::isNull((ItemInstance *)v11) || !*(_BYTE *)(v11 + 14) )
      {
        if ( v7 == (char *)v8 )
        {
          v6 = 0;
          v14 = (v7 - v25) >> 2;
          if ( !v14 )
            v14 = 1;
          v15 = v14 + ((v7 - v25) >> 2);
          v16 = v14 + ((v7 - v25) >> 2);
          if ( 0 != v15 >> 30 )
            v16 = 0x3FFFFFFF;
          if ( v15 < v14 )
          if ( v16 )
          {
            if ( v16 >= 0x40000000 )
              sub_21E57F4();
            v6 = (char *)j_operator new(4 * v16);
          }
          *(_DWORD *)&v6[v7 - v25] = v9;
          if ( (v7 - v25) >> 2 )
            j___aeabi_memmove4((int)v6, (int)v25);
          v7 = &v6[v7 - v25 + 4];
          if ( v25 )
            j_operator delete(v25);
          v3 = v24;
          v8 = (int)&v6[4 * v16];
          *(_DWORD *)v24 = v6;
          *((_DWORD *)v24 + 1) = v7;
          *((_DWORD *)v24 + 2) = v8;
          v25 = v6;
        }
        else
          *(_DWORD *)v7 = v9;
          v7 += 4;
          *((_DWORD *)v3 + 1) = v7;
      }
      ++v9;
    }
    while ( v9 < v5 );
  sub_21E94B4((void **)&v26, "default");
  sub_21E66B4((FILE **)&v27, (const void **)&v26);
  v17 = sub_21E67AC((int)&v27) % 0x7FFFFFFFu;
  if ( !v17 )
    v17 = 1;
  v28 = v17;
  if ( v6 != v7 )
    v18 = v6 + 4;
    v31 = 0;
    for ( i = -1; v7 != v18; *(_DWORD *)&v6[4 * v19] = v20 )
      v29 = 0;
      v30 = (v18 - v6) >> 2;
      v19 = std::uniform_int_distribution<unsigned int>::operator()<std::linear_congruential_engine<unsigned int,16807u,0u,2147483647u>>(
              (int)&v31,
              (int)&v28,
              (int)&v29);
      v20 = *(_DWORD *)v18;
      *(_DWORD *)v18 = *(_DWORD *)&v6[4 * v19];
      v18 += 4;
  sub_21E67A0((FILE **)&v27);
  v21 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v26 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
}


int *__fastcall LootTable::LootTable(int *a1, int *a2)
{
  int *result; // r0@1

  result = sub_21E8AF4(a1, a2);
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  return result;
}


void __fastcall LootTable::getAvailableSlots(LootTable *this, Container *a2, Random *a3)
{
  LootTable::getAvailableSlots(this, a2, a3);
}


void __fastcall LootTable::fill(LootTable *this, Container *a2, Random *a3, LootTableContext *a4)
{
  LootTable::fill(this, a2, a3, a4);
}


void __fastcall LootTable::shuffleAndSplitItems(int a1, unsigned __int64 *a2, int a3, Random *a4)
{
  unsigned __int64 *v4; // r4@1
  int v5; // r9@1
  int v6; // r5@1
  int v7; // r6@1
  unsigned __int64 *v8; // r7@2
  signed int v9; // r0@8
  int v10; // r8@9
  int v11; // r0@9
  int v12; // r5@10
  int v13; // r0@14
  signed int v14; // r1@15
  unsigned __int64 *v15; // r8@16
  int v16; // r7@16
  int v17; // r0@16
  int v18; // r5@17
  void *v19; // r0@19
  void *v20; // r0@21
  int v21; // r0@23
  char *v22; // r5@29
  ItemInstance *v23; // r8@29
  signed int v24; // r7@30
  int v25; // r7@31
  signed int v26; // r0@32
  int v27; // r6@33
  void *v28; // r0@35
  void *v29; // r0@37
  int v30; // r0@39
  unsigned int v31; // r5@41
  int v32; // r7@42
  __int64 v33; // r0@46
  __int64 v34; // r0@54
  int v35; // r5@74 OVERLAPPED
  int v36; // r6@74 OVERLAPPED
  unsigned int v37; // r0@74
  int v38; // r4@77
  int v39; // r0@78
  void *v40; // r0@79
  ItemInstance *v41; // r4@80
  ItemInstance *v42; // r5@80
  void *v43; // r0@81
  void *v44; // r0@83
  int v45; // r0@85
  unsigned int *v46; // r2@92
  signed int v47; // r1@94
  Random *v48; // [sp+4h] [bp-AACh]@1
  int v49; // [sp+Ch] [bp-AA4h]@74
  char v50; // [sp+10h] [bp-AA0h]@74
  unsigned int v51; // [sp+9D4h] [bp-DCh]@76
  char v52; // [sp+9D8h] [bp-D8h]@44
  int v53; // [sp+9E0h] [bp-D0h]@64
  unsigned __int8 v54; // [sp+9E6h] [bp-CAh]@52
  void *v55; // [sp+9FCh] [bp-B4h]@62
  void *ptr; // [sp+A0Ch] [bp-A4h]@60
  char v57; // [sp+A20h] [bp-90h]@31
  int v58; // [sp+A28h] [bp-88h]@70
  unsigned __int8 v59; // [sp+A2Eh] [bp-82h]@41
  void *v60; // [sp+A44h] [bp-6Ch]@68
  void *v61; // [sp+A54h] [bp-5Ch]@66
  void *v62; // [sp+A6Ch] [bp-44h]@1
  ItemInstance *v63; // [sp+A70h] [bp-40h]@1
  ItemInstance *v64; // [sp+A74h] [bp-3Ch]@1
  int v65; // [sp+A7Ch] [bp-34h]@78
  int v66; // [sp+A80h] [bp-30h]@78
  int v67; // [sp+A84h] [bp-2Ch]@77
  int i; // [sp+A88h] [bp-28h]@77

  v4 = a2;
  v62 = 0;
  v5 = a3;
  v63 = 0;
  v48 = a4;
  v64 = 0;
  v6 = *a2 >> 32;
  v7 = *a2;
  if ( v7 != v6 )
  {
    v8 = (unsigned __int64 *)&v62;
    while ( *(_BYTE *)(v7 + 14) )
    {
      if ( (unsigned int)*(_BYTE *)(v7 + 14) >= 2 )
      {
        if ( v63 == v64 )
          j_std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance>(v8, v7);
        else
          v63 = (ItemInstance *)((char *)j_ItemInstance::ItemInstance(v63, v7) + 72);
        v13 = *((_DWORD *)v4 + 1);
        v6 = v7 + 72;
        if ( v7 + 72 != v13 )
        {
          v14 = v13 - v6;
          v6 = *((_DWORD *)v4 + 1);
          if ( v14 >= 1 )
          {
            v15 = v8;
            v16 = 954437177 * (v14 >> 3) + 1;
            v17 = v7;
            do
            {
              v18 = v17 + 72;
              j_ItemInstance::operator=(v17, v17 + 72);
              --v16;
              v17 = v18;
            }
            while ( v16 > 1 );
            v6 = *((_DWORD *)v4 + 1);
            v8 = v15;
          }
        }
LABEL_19:
        *((_DWORD *)v4 + 1) = v6 - 72;
        v19 = *(void **)(v6 - 20);
        if ( v19 )
          j_operator delete(v19);
        v20 = *(void **)(v6 - 36);
        if ( v20 )
          j_operator delete(v20);
        v21 = *(_DWORD *)(v6 - 64);
        if ( v21 )
          (*(void (**)(void))(*(_DWORD *)v21 + 4))();
        *(_DWORD *)(v6 - 64) = 0;
        goto LABEL_26;
      }
      v7 += 72;
LABEL_26:
      v6 = *((_DWORD *)v4 + 1);
      if ( v7 == v6 )
        v7 = *(_DWORD *)v4;
        goto LABEL_28;
    }
    if ( v7 + 72 != v6 )
      v9 = v6 - (v7 + 72);
      if ( v9 >= 1 )
        v10 = 954437177 * (v9 >> 3) + 1;
        v11 = v7;
        do
          v12 = v11 + 72;
          j_ItemInstance::operator=(v11, v11 + 72);
          --v10;
          v11 = v12;
        while ( v10 > 1 );
        v6 = *((_DWORD *)v4 + 1);
    goto LABEL_19;
  }
LABEL_28:
  if ( v5 - 954437177 * ((v6 - v7) >> 3) > 0 )
    v22 = (char *)v62;
    v23 = v63;
    if ( (void *)v63 != v62 )
      v24 = v63 - (ItemInstance *)v62;
      do
        v25 = (int)&v22[72 * (j_Random::_genRandInt32(v48) % (954437177 * (v24 >> 3)))];
        j_ItemInstance::ItemInstance((ItemInstance *)&v57, v25);
        if ( (ItemInstance *)(v25 + 72) != v23 )
          v26 = (signed int)v23 + -v25 - 72;
          if ( v26 >= 1 )
            v27 = 954437177 * (v26 >> 3) + 1;
              j_ItemInstance::operator=(v25, v25 + 72);
              --v27;
              v25 += 72;
            while ( v27 > 1 );
        v63 = (ItemInstance *)((char *)v23 - 72);
        v28 = (void *)*((_DWORD *)v23 - 5);
        if ( v28 )
          j_operator delete(v28);
        v29 = (void *)*((_DWORD *)v23 - 9);
        if ( v29 )
          j_operator delete(v29);
        v30 = *((_DWORD *)v23 - 16);
        if ( v30 )
          (*(void (**)(void))(*(_DWORD *)v30 + 4))();
        *((_DWORD *)v23 - 16) = 0;
        v31 = v59;
        if ( (unsigned int)v59 >> 1 )
          v32 = j_Random::_genRandInt32(v48) % (v31 >> 1) + 1;
          v32 = 1;
        j_ItemInstance::ItemInstance((ItemInstance *)&v52, (int)&v57);
        j_ItemInstance::set((ItemInstance *)&v57, v59 - v32);
        j_ItemInstance::set((ItemInstance *)&v52, v32);
        if ( v59 >= 2u && j_Random::_genRandInt32(v48) & 0x8000000 )
          if ( v63 == v64 )
            j_std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance>(
              (unsigned __int64 *)&v62,
              (int)&v57);
          else
            v63 = (ItemInstance *)((char *)j_ItemInstance::ItemInstance(v63, (int)&v57) + 72);
          v33 = *(unsigned __int64 *)((char *)v4 + 4);
          if ( (_DWORD)v33 == HIDWORD(v33) )
            j_std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance>(v4, (int)&v57);
            j_ItemInstance::ItemInstance((ItemInstance *)v33, (int)&v57);
            *((_DWORD *)v4 + 1) += 72;
        if ( v54 >= 2u && j_Random::_genRandInt32(v48) & 0x8000000 )
              (int)&v52);
            v63 = (ItemInstance *)((char *)j_ItemInstance::ItemInstance(v63, (int)&v52) + 72);
          v34 = *(unsigned __int64 *)((char *)v4 + 4);
          if ( (_DWORD)v34 == HIDWORD(v34) )
            j_std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance>(v4, (int)&v52);
            j_ItemInstance::ItemInstance((ItemInstance *)v34, (int)&v52);
        if ( ptr )
          j_operator delete(ptr);
        if ( v55 )
          j_operator delete(v55);
        if ( v53 )
          (*(void (**)(void))(*(_DWORD *)v53 + 4))();
        if ( v61 )
          j_operator delete(v61);
        if ( v60 )
          j_operator delete(v60);
        if ( v58 )
          (*(void (**)(void))(*(_DWORD *)v58 + 4))();
        v22 = (char *)v62;
        v23 = v63;
        v24 = v63 - (ItemInstance *)v62;
      while ( (void *)v63 != v62 );
    v7 = *(_DWORD *)v4;
  j_std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_range_insert<__gnu_cxx::__normal_iterator<ItemInstance*,std::vector<ItemInstance,std::allocator<ItemInstance>>>>(
    (int)v4,
    v7,
    (int)v62,
    (int)v63);
  *(_QWORD *)&v35 = *v4;
  sub_21E94B4((void **)&v49, "default");
  sub_21E66B4((FILE **)&v50, (const void **)&v49);
  v37 = sub_21E67AC((int)&v50) % 0x7FFFFFFFu;
  if ( !v37 )
    v37 = 1;
  v51 = v37;
  if ( v35 != v36 )
    v38 = v35 + 72;
    v67 = 0;
    for ( i = -1; v36 != v38; v38 += 72 )
      v65 = 0;
      v66 = 954437177 * ((v38 - v35) >> 3);
      v39 = std::uniform_int_distribution<unsigned int>::operator()<std::linear_congruential_engine<unsigned int,16807u,0u,2147483647u>>(
              (int)&v67,
              (int)&v51,
              (int)&v65);
      j_std::swap<ItemInstance>(v38, v35 + 72 * v39);
  sub_21E67A0((FILE **)&v50);
  v40 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v49 - 4);
    if ( &pthread_create )
      __dmb();
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
    else
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  v41 = (ItemInstance *)v62;
  v42 = v63;
  if ( v62 != (void *)v63 )
    do
      v43 = (void *)*((_DWORD *)v41 + 13);
      if ( v43 )
        j_operator delete(v43);
      v44 = (void *)*((_DWORD *)v41 + 9);
      if ( v44 )
        j_operator delete(v44);
      v45 = *((_DWORD *)v41 + 2);
      if ( v45 )
        (*(void (**)(void))(*(_DWORD *)v45 + 4))();
      *((_DWORD *)v41 + 2) = 0;
      v41 = (ItemInstance *)((char *)v41 + 72);
    while ( v42 != v41 );
    v41 = (ItemInstance *)v62;
  if ( v41 )
    j_operator delete((void *)v41);
}


const LootTable *__fastcall LootTable::getRandomItems(LootTable *this, Random *a2, LootTableContext *a3, LootTableContext *a4)
{
  LootTable *v4; // r9@1
  LootTableContext *v5; // r5@1
  Random *v6; // r7@1
  Random *v7; // r8@1
  const LootTable *result; // r0@1
  int *v9; // r4@2
  int *i; // r6@2

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  result = (const LootTable *)LootTableContext::addVisitedTable(a4, a2);
  if ( result == (const LootTable *)1 )
  {
    v9 = (int *)(*(_QWORD *)((char *)v7 + 4) >> 32);
    for ( i = (int *)*(_QWORD *)((char *)v7 + 4); v9 != i; ++i )
      LootPool::addRandomItems(*i, (int)v4, v6, v5);
    result = LootTableContext::removeVisitedTable(v5, v7);
  }
  return result;
}


void __fastcall LootTable::shuffleAndSplitItems(int a1, unsigned __int64 *a2, int a3, Random *a4)
{
  LootTable::shuffleAndSplitItems(a1, a2, a3, a4);
}


Json::Value *__fastcall LootTable::deserialize(int a1, Json::Value *a2)
{
  int v2; // r4@1
  const Json::Value *v3; // r0@1
  const Json::Value *v4; // r7@3
  void *v5; // r6@3
  __int64 v6; // r0@3
  int v8; // [sp+0h] [bp-60h]@3
  void *v9; // [sp+14h] [bp-4Ch]@3
  char v10; // [sp+18h] [bp-48h]@1
  char v11; // [sp+20h] [bp-40h]@1
  char v12; // [sp+28h] [bp-38h]@1

  v2 = a1;
  v3 = (const Json::Value *)j_Json::Value::operator[](a2, "pools");
  j_Json::Value::Value((Json::Value *)&v12, v3);
  j_Json::Value::begin((Json::Value *)&v11, (int)&v12);
  j_Json::Value::end((Json::Value *)&v10, (int)&v12);
  while ( j_Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v11, (const Json::ValueIteratorBase *)&v10) != 1 )
  {
    v4 = (const Json::Value *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v11);
    v5 = j_operator new(0x2Cu);
    j___aeabi_memclr4((int)v5, 44);
    v9 = v5;
    j_Json::Value::Value((Json::Value *)&v8, v4);
    LootPool::deserialize((int)v5, (Json::Value *)&v8);
    j_Json::Value::~Value((Json::Value *)&v8);
    v6 = *(_QWORD *)(v2 + 8);
    if ( (_DWORD)v6 == HIDWORD(v6) )
    {
      std::vector<std::unique_ptr<LootPool,std::default_delete<LootPool>>,std::allocator<std::unique_ptr<LootPool,std::default_delete<LootPool>>>>::_M_emplace_back_aux<std::unique_ptr<LootPool,std::default_delete<LootPool>>>(
        (unsigned __int64 *)(v2 + 4),
        (int *)&v9);
    }
    else
      HIDWORD(v6) = v9;
      v9 = 0;
      *(_DWORD *)v6 = HIDWORD(v6);
      *(_DWORD *)(v2 + 8) = v6 + 4;
    std::unique_ptr<LootPool,std::default_delete<LootPool>>::~unique_ptr(&v9);
    j_Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v11);
  }
  return j_Json::Value::~Value((Json::Value *)&v12);
}


void __fastcall LootTable::fill(LootTable *this, Container *a2, Random *a3, LootTableContext *a4)
{
  Random *v4; // r4@1
  Random *v5; // r6@1
  Container *v6; // r1@1
  int v7; // r7@1
  void *v8; // r8@1
  int v9; // r5@1
  int i; // r6@1
  __int64 v11; // r4@6
  void *v12; // r0@7
  void *v13; // r0@9
  int v14; // r0@11
  void *v15; // [sp+0h] [bp-30h]@1
  int v16; // [sp+4h] [bp-2Ch]@1
  int v17; // [sp+Ch] [bp-24h]@1
  int v18; // [sp+10h] [bp-20h]@1

  v4 = a2;
  v5 = a3;
  j_LootTable::getRandomItems((LootTable *)&v17, this, a3, a4);
  LootTable::getAvailableSlots((LootTable *)&v15, v6, v4);
  v7 = v16;
  v8 = v15;
  LootTable::shuffleAndSplitItems(v16 - (_DWORD)v15, (unsigned __int64 *)&v17, (v16 - (signed int)v15) >> 2, v5);
  v9 = v18;
  for ( i = v17; v9 != i; v16 = v7 )
  {
    if ( v8 == (void *)v7 )
      break;
    (*(void (__fastcall **)(Random *, _DWORD, int))(*(_DWORD *)v4 + 32))(v4, *(_DWORD *)(v7 - 4), i);
    v7 -= 4;
    i += 72;
  }
  if ( v8 )
    j_operator delete(v8);
  v11 = *(_QWORD *)&v17;
  if ( v17 != v18 )
    do
    {
      v12 = *(void **)(v11 + 52);
      if ( v12 )
        j_operator delete(v12);
      v13 = *(void **)(v11 + 36);
      if ( v13 )
        j_operator delete(v13);
      v14 = *(_DWORD *)(v11 + 8);
      if ( v14 )
        (*(void (**)(void))(*(_DWORD *)v14 + 4))();
      *(_DWORD *)(v11 + 8) = 0;
      LODWORD(v11) = v11 + 72;
    }
    while ( HIDWORD(v11) != (_DWORD)v11 );
    LODWORD(v11) = v17;
  if ( (_DWORD)v11 )
    j_operator delete((void *)v11);
}
