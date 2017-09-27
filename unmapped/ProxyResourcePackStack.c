

ProxyResourcePackStack *__fastcall ProxyResourcePackStack::~ProxyResourcePackStack(ProxyResourcePackStack *this)
{
  ProxyResourcePackStack *v1; // r11@1
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

  v1 = this;
  *(_DWORD *)this = &off_26D56C0;
  v2 = (char *)this + 56;
  std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)this + 32);
  v3 = (char *)*((_DWORD *)v1 + 8);
  if ( v3 && v2 != v3 )
    operator delete(v3);
  *(_QWORD *)&v4 = *(_QWORD *)((char *)v1 + 20);
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
    v4 = *((_DWORD *)v1 + 5);
  }
  if ( v4 )
    operator delete((void *)v4);
  ResourcePackStack::~ResourcePackStack(v1);
  return v1;
}


signed int __fastcall ProxyResourcePackStack::loadAllVersionsOf(int a1, int **a2, int a3)
{
  signed int v3; // r5@1
  int v4; // r4@1
  int v5; // r0@1
  void *v6; // r4@2
  int v7; // r6@2
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  int v10; // r1@12
  void *v11; // r0@12
  int v13; // [sp+4h] [bp-34h]@2
  void *v14; // [sp+8h] [bp-30h]@1
  void *v15; // [sp+Ch] [bp-2Ch]@1
  int v16; // [sp+10h] [bp-28h]@1

  v3 = 0;
  v14 = 0;
  v15 = 0;
  v4 = a3;
  v16 = 0;
  v5 = std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)(a1 + 32),
         a2);
  if ( v5 )
  {
    v13 = 0;
    std::vector<LoadedResourceData,std::allocator<LoadedResourceData>>::_M_emplace_back_aux<int,std::string const&>(
      (unsigned __int64 *)&v14,
      &v13,
      (int *)(v5 + 8));
    (*(void (__fastcall **)(int, void **))(*(_DWORD *)v4 + 8))(v4, &v14);
    v6 = v15;
    v7 = (int)v14;
    if ( v14 != v15 )
    {
      do
      {
        v10 = *(_DWORD *)(v7 + 4);
        v11 = (void *)(v10 - 12);
        if ( (int *)(v10 - 12) != &dword_28898C0 )
        {
          v8 = (unsigned int *)(v10 - 4);
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
            j_j_j_j_j__ZdlPv_9(v11);
        }
        v7 += 8;
      }
      while ( (void *)v7 != v6 );
      v6 = v14;
    }
    if ( v6 )
      operator delete(v6);
    v3 = 1;
  }
  return v3;
}


void __fastcall ProxyResourcePackStack::~ProxyResourcePackStack(ProxyResourcePackStack *this)
{
  ProxyResourcePackStack::~ProxyResourcePackStack(this);
}


void __fastcall ProxyResourcePackStack::~ProxyResourcePackStack(ProxyResourcePackStack *this)
{
  ProxyResourcePackStack *v1; // r0@1

  v1 = ProxyResourcePackStack::~ProxyResourcePackStack(this);
  j_j_j__ZdlPv_3((void *)v1);
}


int __fastcall ProxyResourcePackStack::loadAllVersionsOf(ProxyResourcePackStack *this, const ResourceLocation *a2)
{
  return std::vector<ResourcePath,std::allocator<ResourcePath>>::vector(
           (int)this,
           (unsigned __int64 *)((char *)a2 + 20));
}


int __fastcall ProxyResourcePackStack::ProxyResourcePackStack(double a1)
{
  double v1; // kr00_8@1
  unsigned __int64 *v2; // r9@1
  int v3; // r7@1
  unsigned int v4; // r0@1
  int v5; // r4@3
  void *v6; // r5@3
  _DWORD *v7; // r7@4
  Json::Value *v8; // r0@4
  int *v9; // r0@4
  __int64 v10; // r0@4
  int v11; // r1@5
  void *v12; // r0@7
  char *v13; // r0@8
  void *v14; // r0@9
  void *v15; // r0@10
  int v16; // r1@11
  PackReport *v17; // r4@11
  unsigned int v18; // r2@11
  int v19; // r5@14
  PackReport *v20; // r0@15
  void **v21; // r0@18
  void *v22; // r0@18
  unsigned int *v24; // r2@21
  signed int v25; // r1@23
  unsigned int *v26; // r2@25
  signed int v27; // r1@27
  unsigned int *v28; // r2@29
  signed int v29; // r1@31
  unsigned int *v30; // r2@33
  signed int v31; // r1@35
  unsigned int *v32; // r2@37
  signed int v33; // r1@39
  int v34; // [sp+8h] [bp-120h]@4
  int v35; // [sp+10h] [bp-118h]@4
  char *v36; // [sp+14h] [bp-114h]@4
  void *v37; // [sp+18h] [bp-110h]@5
  void **v38; // [sp+1Ch] [bp-10Ch]@4
  int v39; // [sp+20h] [bp-108h]@19
  void **v40; // [sp+24h] [bp-104h]@4
  void **v41; // [sp+28h] [bp-100h]@4
  int v42; // [sp+44h] [bp-E4h]@19
  int v43; // [sp+4Ch] [bp-DCh]@18
  int v44; // [sp+50h] [bp-D8h]@19
  char v45; // [sp+D8h] [bp-50h]@4
  char v46; // [sp+E0h] [bp-48h]@4
  char v47; // [sp+F0h] [bp-38h]@4

  v1 = a1;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = 0;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  *(_DWORD *)(LODWORD(a1) + 8) = 0;
  *(_DWORD *)LODWORD(a1) = &off_26D56C0;
  *(_DWORD *)(LODWORD(a1) + 20) = 0;
  v2 = (unsigned __int64 *)(LODWORD(a1) + 20);
  *(_DWORD *)(LODWORD(a1) + 24) = 0;
  *(_DWORD *)(LODWORD(a1) + 28) = 0;
  *(_DWORD *)(LODWORD(a1) + 40) = 0;
  *(_DWORD *)(LODWORD(a1) + 44) = 0;
  *(_DWORD *)(LODWORD(a1) + 48) = 1065353216;
  v3 = LODWORD(a1) + 48;
  *(_DWORD *)(LODWORD(a1) + 52) = 0;
  LODWORD(a1) += 48;
  v4 = sub_DA7744(a1);
  *(_DWORD *)(LODWORD(v1) + 36) = v4;
  if ( v4 == 1 )
  {
    *(_DWORD *)(LODWORD(v1) + 56) = 0;
    v6 = (void *)(LODWORD(v1) + 56);
  }
  else
    if ( v4 >= 0x40000000 )
      sub_DA7414();
    v5 = 4 * v4;
    v6 = operator new(4 * v4);
    _aeabi_memclr4(v6, v5);
  v7 = (_DWORD *)(v3 - 16);
  *v7 = v6;
  Json::Value::Value(&v47, 0);
  Json::Value::Value((Json::Value *)&v46, *(const char **)HIDWORD(v1));
  v8 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v47, "ui_defs");
  Json::Value::append(v8, (const Json::Value *)&v46);
  std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::pair const&<char const*,std::pair const&>>(
    &v45,
    (int)v7,
    SHIDWORD(v1));
  sub_DA7794((int)&v38, 24);
  Json::operator<<((char *)&v40, (const Json::Value *)&v47);
  sub_DA7364((void **)&v35, (const char *)&unk_257BC67);
  sub_DA77A4(&v34, (int)&v41);
  v9 = sub_DA73B4((int *)&v36, &v35);
  sub_DA73B4(v9 + 1, &v34);
  v10 = *(_QWORD *)(LODWORD(v1) + 24);
  if ( (_DWORD)v10 == HIDWORD(v10) )
    std::vector<ResourcePath,std::allocator<ResourcePath>>::_M_emplace_back_aux<ResourcePath>(v2, (int)&v36);
    v11 = (int)v37;
    *(_DWORD *)v10 = v36;
    HIDWORD(v10) = &unk_28898CC;
    v36 = (char *)&unk_28898CC;
    *(_DWORD *)(v10 + 4) = v37;
    v37 = &unk_28898CC;
    *(_DWORD *)(LODWORD(v1) + 24) = v10 + 8;
  v12 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
    }
    else
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
  v13 = v36 - 12;
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v36 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v34 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v35 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
  v16 = *(_DWORD *)(LODWORD(v1) + 4);
  v17 = *(PackReport **)(LODWORD(v1) + 8);
  v18 = -286331153 * (((signed int)v17 - v16) >> 3);
  if ( v17 == (PackReport *)v16 )
    std::vector<PackInstance,std::allocator<PackInstance>>::_M_default_append(LODWORD(v1) + 4, 1 - v18);
  else if ( v18 >= 2 )
    v19 = v16 + 120;
    if ( v17 != (PackReport *)(v16 + 120) )
      v20 = (PackReport *)(v16 + 120);
        v20 = (PackReport *)((char *)PackReport::~PackReport(v20) + 120);
      while ( v17 != v20 );
    *(_DWORD *)(LODWORD(v1) + 8) = v19;
  v21 = off_26D3F84;
  v38 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v38) = off_26D3F80[0];
  v40 = v21;
  v41 = &off_27734E8;
  v22 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v43 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9(v22);
  v41 = &off_26D40A8;
  sub_DA76D4((unsigned int **)&v42);
  v38 = (void **)off_26D3F68;
  *(void ***)((char *)&v38 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v39 = 0;
  sub_DA76E4(&v44);
  Json::Value::~Value((Json::Value *)&v46);
  Json::Value::~Value((Json::Value *)&v47);
  return LODWORD(v1);
}
