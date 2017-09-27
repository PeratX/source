

TestUIResourcePackStack *__fastcall TestUIResourcePackStack::~TestUIResourcePackStack(TestUIResourcePackStack *this)
{
  TestUIResourcePackStack *v1; // r11@1
  char *v2; // r5@1
  char *v3; // r0@1
  int v4; // r5@4 OVERLAPPED
  int v5; // r6@4 OVERLAPPED
  unsigned int *v6; // r2@6
  signed int v7; // r1@8
  unsigned int *v8; // r2@10
  signed int v9; // r1@12
  int v10; // r1@22
  void *v11; // r0@22
  int *v12; // r0@23
  void *v13; // r5@28
  void *v14; // r7@28
  unsigned int *v15; // r2@30
  signed int v16; // r1@32
  int *v17; // r0@38

  v1 = this;
  *(_DWORD *)this = &off_26D5758;
  v2 = (char *)this + 68;
  std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)this + 44);
  v3 = (char *)*((_DWORD *)v1 + 11);
  if ( v3 && v2 != v3 )
    operator delete(v3);
  *(_QWORD *)&v4 = *((_QWORD *)v1 + 4);
  if ( v4 != v5 )
  {
    do
    {
      v10 = *(_DWORD *)(v4 + 4);
      v11 = (void *)(v10 - 12);
      if ( (int *)(v10 - 12) != &dword_28898C0 )
      {
        v6 = (unsigned int *)(v10 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
        }
        else
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j_j__ZdlPv_9(v11);
      }
      v12 = (int *)(*(_DWORD *)v4 - 12);
      if ( v12 != &dword_28898C0 )
        v8 = (unsigned int *)(*(_DWORD *)v4 - 4);
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j_j__ZdlPv_9(v12);
      v4 += 8;
    }
    while ( v4 != v5 );
    v4 = *((_DWORD *)v1 + 8);
  }
  if ( v4 )
    operator delete((void *)v4);
  v14 = (void *)(*(_QWORD *)((char *)v1 + 20) >> 32);
  v13 = (void *)*(_QWORD *)((char *)v1 + 20);
  if ( v13 != v14 )
      v17 = (int *)(*(_DWORD *)v13 - 12);
      if ( v17 != &dword_28898C0 )
        v15 = (unsigned int *)(*(_DWORD *)v13 - 4);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 <= 0 )
          j_j_j_j_j__ZdlPv_9(v17);
      v13 = (char *)v13 + 4;
    while ( v13 != v14 );
    v13 = (void *)*((_DWORD *)v1 + 5);
  if ( v13 )
    operator delete(v13);
  ResourcePackStack::~ResourcePackStack(v1);
  return v1;
}


int __fastcall TestUIResourcePackStack::TestUIResourcePackStack(double a1)
{
  double v1; // kr00_8@1
  int v2; // r5@1
  unsigned int v3; // r0@1
  int v4; // r6@3
  void *v5; // r7@3
  int v6; // r6@4
  unsigned int v7; // r10@5
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  Json::Value *v10; // r0@14
  const char **v11; // r6@14
  __int64 v12; // r0@14
  int v13; // r1@15
  void *v14; // r0@17
  int *v15; // r0@19
  __int64 v16; // r0@19
  int v17; // r1@20
  void *v18; // r0@22
  char *v19; // r0@23
  void *v20; // r0@24
  void *v21; // r0@25
  int v22; // r1@26
  PackReport *v23; // r4@26
  unsigned int v24; // r3@26
  unsigned int v25; // r2@26
  int v26; // r5@29
  PackReport *v27; // r0@30
  void **v28; // r0@33
  void *v29; // r0@33
  unsigned int *v31; // r2@36
  signed int v32; // r1@38
  unsigned int *v33; // r2@40
  signed int v34; // r1@42
  unsigned int *v35; // r2@44
  signed int v36; // r1@46
  unsigned int *v37; // r2@48
  signed int v38; // r1@50
  unsigned int *v39; // r2@52
  signed int v40; // r1@54
  unsigned __int64 *v41; // [sp+4h] [bp-134h]@1
  unsigned __int64 *v42; // [sp+8h] [bp-130h]@1
  int v43; // [sp+10h] [bp-128h]@19
  int v44; // [sp+18h] [bp-120h]@19
  char *v45; // [sp+1Ch] [bp-11Ch]@19
  void *v46; // [sp+20h] [bp-118h]@20
  void **v47; // [sp+24h] [bp-114h]@19
  int v48; // [sp+28h] [bp-110h]@34
  void **v49; // [sp+2Ch] [bp-10Ch]@19
  void **v50; // [sp+30h] [bp-108h]@19
  int v51; // [sp+4Ch] [bp-ECh]@34
  int v52; // [sp+54h] [bp-E4h]@33
  int v53; // [sp+58h] [bp-E0h]@34
  void *v54; // [sp+E4h] [bp-54h]@14
  char v55; // [sp+E8h] [bp-50h]@14
  char v56; // [sp+F0h] [bp-48h]@14
  char v57; // [sp+100h] [bp-38h]@4

  v1 = a1;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = 0;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  *(_DWORD *)(LODWORD(a1) + 8) = 0;
  *(_DWORD *)LODWORD(a1) = &off_26D5758;
  *(_DWORD *)(LODWORD(a1) + 52) = 0;
  *(_DWORD *)(LODWORD(a1) + 56) = 0;
  *(_DWORD *)(LODWORD(a1) + 36) = 0;
  *(_DWORD *)(LODWORD(a1) + 40) = 0;
  *(_DWORD *)(LODWORD(a1) + 24) = 0;
  *(_DWORD *)(LODWORD(a1) + 28) = 0;
  *(_DWORD *)(LODWORD(a1) + 32) = 0;
  v41 = (unsigned __int64 *)(LODWORD(a1) + 32);
  *(_DWORD *)(LODWORD(a1) + 20) = 0;
  v42 = (unsigned __int64 *)(LODWORD(a1) + 20);
  *(_DWORD *)(LODWORD(a1) + 60) = 1065353216;
  v2 = LODWORD(a1) + 60;
  *(_DWORD *)(LODWORD(a1) + 64) = 0;
  LODWORD(a1) += 60;
  v3 = sub_DA7744(a1);
  *(_DWORD *)(LODWORD(v1) + 48) = v3;
  if ( v3 == 1 )
  {
    *(_DWORD *)(LODWORD(v1) + 68) = 0;
    v5 = (void *)(LODWORD(v1) + 68);
  }
  else
    if ( v3 >= 0x40000000 )
      sub_DA7414();
    v4 = 4 * v3;
    v5 = operator new(4 * v3);
    _aeabi_memclr4(v5, v4);
  *(_DWORD *)(v2 - 16) = v5;
  Json::Value::Value(&v57, 0);
  v6 = *(_QWORD *)HIDWORD(v1);
  if ( *(_QWORD *)HIDWORD(v1) >> 32 != v6 )
    v7 = 0;
    do
    {
      Json::Value::Value((Json::Value *)&v56, *(const char **)(v6 + 8 * v7));
      v10 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v57, "ui_defs");
      Json::Value::append(v10, (const Json::Value *)&v56);
      v11 = (const char **)(v6 + 8 * v7);
      std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::pair const&<char const*,std::pair const&>>(
        &v55,
        v2 - 16,
        (int)v11);
      sub_DA7364(&v54, *v11);
      v12 = *(_QWORD *)(LODWORD(v1) + 24);
      if ( (_DWORD)v12 == HIDWORD(v12) )
      {
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(v42, &v54);
        v13 = (int)v54;
      }
      else
        *(_DWORD *)v12 = v54;
        HIDWORD(v12) = &unk_28898CC;
        v54 = &unk_28898CC;
        *(_DWORD *)(LODWORD(v1) + 24) = v12 + 4;
      v14 = (void *)(v13 - 12);
      if ( (int *)(v13 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v13 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
        }
        else
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j_j__ZdlPv_9(v14);
      Json::Value::~Value((Json::Value *)&v56);
      v6 = *(_QWORD *)HIDWORD(v1);
      ++v7;
    }
    while ( v7 < (signed int)((*(_QWORD *)HIDWORD(v1) >> 32) - v6) >> 3 );
  sub_DA7794((int)&v47, 24);
  Json::operator<<((char *)&v49, (const Json::Value *)&v57);
  sub_DA7364((void **)&v44, (const char *)&unk_257BC67);
  sub_DA77A4(&v43, (int)&v50);
  v15 = sub_DA73B4((int *)&v45, &v44);
  sub_DA73B4(v15 + 1, &v43);
  v16 = *(_QWORD *)(LODWORD(v1) + 36);
  if ( (_DWORD)v16 == HIDWORD(v16) )
    std::vector<ResourcePath,std::allocator<ResourcePath>>::_M_emplace_back_aux<ResourcePath>(v41, (int)&v45);
    v17 = (int)v46;
    *(_DWORD *)v16 = v45;
    HIDWORD(v16) = &unk_28898CC;
    v45 = (char *)&unk_28898CC;
    *(_DWORD *)(v16 + 4) = v46;
    v46 = &unk_28898CC;
    *(_DWORD *)(LODWORD(v1) + 36) = v16 + 8;
  v18 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
    else
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9(v18);
  v19 = v45 - 12;
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v45 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v43 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v44 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9(v21);
  v22 = *(_DWORD *)(LODWORD(v1) + 4);
  v23 = *(PackReport **)(LODWORD(v1) + 8);
  v24 = -286331153 * (((signed int)v23 - v22) >> 3);
  v25 = (signed int)((*(_QWORD *)HIDWORD(v1) >> 32) - *(_QWORD *)HIDWORD(v1)) >> 3;
  if ( v25 <= v24 )
    if ( v25 < v24 )
      v26 = v22 + 120 * v25;
      if ( v23 != (PackReport *)v26 )
        v27 = (PackReport *)(v22 + 120 * v25);
        do
          v27 = (PackReport *)((char *)PackReport::~PackReport(v27) + 120);
        while ( v23 != v27 );
      *(_DWORD *)(LODWORD(v1) + 8) = v26;
    std::vector<PackInstance,std::allocator<PackInstance>>::_M_default_append(LODWORD(v1) + 4, v25 - v24);
  v28 = off_26D3F84;
  v47 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v47) = off_26D3F80[0];
  v49 = v28;
  v50 = &off_27734E8;
  v29 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v52 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9(v29);
  v50 = &off_26D40A8;
  sub_DA76D4((unsigned int **)&v51);
  v47 = (void **)off_26D3F68;
  *(void ***)((char *)&v47 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v48 = 0;
  sub_DA76E4(&v53);
  Json::Value::~Value((Json::Value *)&v57);
  return LODWORD(v1);
}


signed int __fastcall TestUIResourcePackStack::loadAllVersionsOf(int a1, const void **a2, int a3)
{
  int v3; // r5@1
  int v4; // r7@1
  __int64 v5; // r0@2
  int *v6; // r11@2
  signed int v7; // r2@2
  int v8; // r8@5
  void *v9; // r0@6
  int v10; // r4@8
  unsigned __int64 *v11; // r7@8
  int **v12; // r6@8
  int *v13; // r2@9
  void *v14; // r0@9
  void *v15; // r10@13
  char *v16; // r1@14
  int *v17; // r6@14
  unsigned int *v18; // r2@15
  signed int v19; // r5@17
  char *v20; // r5@21
  int *v21; // r0@22
  __int64 v22; // r4@26
  void *v23; // r9@27
  unsigned int *v24; // r2@28
  signed int v25; // r1@30
  int v26; // r1@36
  void *v27; // r0@36
  signed int result; // r0@42
  unsigned int *v29; // r2@45
  signed int v30; // r1@47
  void *v31; // [sp+4h] [bp-44h]@13
  int v32; // [sp+8h] [bp-40h]@9
  int v33; // [sp+10h] [bp-38h]@6
  void *ptr; // [sp+14h] [bp-34h]@1
  void *v35; // [sp+18h] [bp-30h]@1
  void *v36; // [sp+1Ch] [bp-2Ch]@1
  char v37; // [sp+20h] [bp-28h]@14

  v3 = a3;
  v4 = a1;
  ptr = 0;
  v35 = 0;
  v36 = 0;
  if ( sub_DA7374(a2, (const char *)&unk_257BC67) )
  {
    v5 = *(_QWORD *)(v4 + 20);
    v6 = 0;
    v7 = HIDWORD(v5) - v5;
    if ( (HIDWORD(v5) - (signed int)v5) >> 2 )
    {
      if ( (unsigned int)(v7 >> 2) >= 0x40000000 )
        sub_DA7414();
      v6 = (int *)operator new(v7);
      v5 = *(_QWORD *)(v4 + 20);
    }
    v8 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
           v5,
           SHIDWORD(v5),
           (int)v6);
  }
  else
    sub_DA7364((void **)&v33, (const char *)&unk_257BC67);
    v6 = (int *)operator new(4u);
    std::__uninitialized_fill_n<false>::__uninit_fill_n<std::string *,unsigned int,std::string>(v6, 1, &v33);
    v8 = (int)(v6 + 1);
    v9 = (void *)(v33 - 12);
    if ( (int *)(v33 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v33 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
      }
      else
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j_j__ZdlPv_9(v9);
  if ( (v8 - (signed int)v6) >> 2 )
    v10 = ((v8 - (signed int)v6) >> 2) - 1;
    v11 = (unsigned __int64 *)(v4 + 44);
    v12 = (int **)&v6[v10];
    do
      v32 = v10;
      v13 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                     v11,
                     v12);
      v14 = v35;
      if ( v35 == v36 )
        std::vector<LoadedResourceData,std::allocator<LoadedResourceData>>::_M_emplace_back_aux<int &,std::string const&>(
          (unsigned __int64 *)&ptr,
          &v32,
          v13);
        *(_DWORD *)v35 = v10;
        sub_DA73B4((int *)v14 + 1, v13);
        v35 = (char *)v35 + 8;
      --v10;
      --v12;
    while ( v10 != -1 );
  (*(void (__fastcall **)(int, void **))(*(_DWORD *)v3 + 8))(v3, &ptr);
  v15 = ptr;
  v31 = v35;
  if ( v6 != (int *)v8 )
    v16 = &v37;
    v17 = v6;
      v21 = (int *)(*v17 - 12);
      if ( v21 != &dword_28898C0 )
        v18 = (unsigned int *)(*v17 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
        }
        else
          v19 = (*v18)--;
        if ( v19 <= 0 )
          v20 = v16;
          j_j_j_j_j__ZdlPv_9(v21);
          v16 = v20;
      ++v17;
    while ( v17 != (int *)v8 );
  if ( v6 )
    operator delete(v6);
  v22 = *(_QWORD *)&ptr;
  if ( ptr == v35 )
    v23 = v31;
      v26 = *(_DWORD *)(v22 + 4);
      v27 = (void *)(v26 - 12);
      if ( (int *)(v26 - 12) != &dword_28898C0 )
        v24 = (unsigned int *)(v26 - 4);
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 <= 0 )
          j_j_j_j_j__ZdlPv_9(v27);
      LODWORD(v22) = v22 + 8;
    while ( (_DWORD)v22 != HIDWORD(v22) );
    LODWORD(v22) = ptr;
  if ( (_DWORD)v22 )
    operator delete((void *)v22);
  result = 0;
  if ( v15 != v23 )
    result = 1;
  return result;
}


void __fastcall TestUIResourcePackStack::~TestUIResourcePackStack(TestUIResourcePackStack *this)
{
  TestUIResourcePackStack::~TestUIResourcePackStack(this);
}


void __fastcall TestUIResourcePackStack::~TestUIResourcePackStack(TestUIResourcePackStack *this)
{
  TestUIResourcePackStack *v1; // r0@1

  v1 = TestUIResourcePackStack::~TestUIResourcePackStack(this);
  j_j_j__ZdlPv_3((void *)v1);
}
