

void __fastcall StoreCatalogItem::setMetadata(int a1, int *a2)
{
  StoreCatalogItem::setMetadata(a1, a2);
}


char *__fastcall StoreCatalogItem::getMashupTabs(StoreCatalogItem *this)
{
  return (char *)this + 92;
}


void __fastcall StoreCatalogItem::setDescription(I18n *a1, int *a2)
{
  int *v2; // r4@1
  I18n *v3; // r5@1
  int v4; // r0@1
  int *v5; // r0@1
  void *v6; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  v4 = I18n::getCurrentLanguage(a1);
  Localization::getFullLanguageCode((Localization *)&v9, v4);
  v5 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                (int)v3 + 200,
                (int **)&v9);
  EntityInteraction::setInteractText(v5, v2);
  v6 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
}


void __fastcall StoreCatalogItem::_setMashupTabs(StoreCatalogItem *this)
{
  StoreCatalogItem::_setMashupTabs(this);
}


unsigned int __fastcall StoreCatalogItem::setup(StoreCatalogItem *this, const SearchResponseDocument *a2)
{
  const SearchResponseDocument *v2; // r5@1
  StoreCatalogItem *v3; // r4@1
  const void **v4; // r5@1
  Json::Value *v5; // r5@5
  unsigned int result; // r0@7
  StoreCatalogItem *v7; // r1@7

  v2 = a2;
  v3 = this;
  EntityInteraction::setInteractText((int *)this, (int *)a2 + 2);
  EntityInteraction::setInteractText((int *)v3 + 4, (int *)v2 + 12);
  EntityInteraction::setInteractText((int *)v3 + 3, (int *)v2 + 16);
  *((_BYTE *)v3 + 105) = 1;
  std::vector<std::string,std::allocator<std::string>>::operator=((int)v3 + 80, (unsigned __int64 *)((char *)v2 + 28));
  EntityInteraction::setInteractText((int *)v3 + 6, (int *)v2 + 14);
  EntityInteraction::setInteractText((int *)v3 + 2, (int *)v2 + 11);
  StoreCatalogItem::setMetadata((int)v3, (int *)v2 + 15);
  *((_BYTE *)v3 + 106) = 0;
  v4 = (const void **)(*((_QWORD *)v3 + 10) >> 32);
  if ( std::__find_if<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__ops::_Iter_equals_val<std::string const>>(
         *((_QWORD *)v3 + 10),
         v4,
         (const void **)&unk_27D6C40) != v4 )
    *((_BYTE *)v3 + 106) = 1;
  if ( !Json::Value::isNull((StoreCatalogItem *)((char *)v3 + 48))
    && Json::Value::isObject((StoreCatalogItem *)((char *)v3 + 48)) == 1
    && ((v5 = (Json::Value *)Json::Value::operator[]((int)v3 + 48, "minPerformanceTier"), Json::Value::isInt(v5))
     || Json::Value::isUInt(v5)) )
  {
    result = Json::Value::asInt(v5, 0);
    v7 = (StoreCatalogItem *)((char *)v3 + 44);
    if ( result > 2 )
    {
      *(_DWORD *)v7 = 0;
      return result;
    }
  }
  else
    result = 0;
  *(_DWORD *)v7 = result;
  return result;
}


char *__fastcall StoreCatalogItem::getCreatorId(StoreCatalogItem *this)
{
  return (char *)this + 8;
}


void __fastcall StoreCatalogItem::setMetadata(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r5@1
  int v4; // [sp+0h] [bp-28h]@1
  int v5; // [sp+10h] [bp-18h]@1

  v2 = a1;
  v3 = a2;
  EntityInteraction::setInteractText((int *)(a1 + 72), a2);
  PropertyBag::PropertyBag(&v4, v3);
  Json::Value::operator=(v2 + 48, (const Json::Value *)&v4);
  *(_DWORD *)(v2 + 64) = v5;
  Json::Value::~Value((Json::Value *)&v4);
  StoreCatalogItem::_setPackIdVersion((StoreCatalogItem *)v2);
  StoreCatalogItem::_setMashupTabs((StoreCatalogItem *)v2);
  StoreCatalogItem::_setCreatorName((StoreCatalogItem *)v2);
}


char *__fastcall StoreCatalogItem::getStartDate(StoreCatalogItem *this)
{
  return (char *)this + 20;
}


void __fastcall StoreCatalogItem::setKeyArtLocation(int a1, int *a2)
{
  StoreCatalogItem::setKeyArtLocation(a1, a2);
}


int __fastcall StoreCatalogItem::setStoreCategory(int result, int a2)
{
  *(_DWORD *)(result + 40) = a2;
  return result;
}


StoreCatalogItem *__fastcall StoreCatalogItem::~StoreCatalogItem(StoreCatalogItem *this)
{
  StoreCatalogItem *v1; // r10@1
  void (*v2)(void); // r3@1
  void (*v3)(void); // r3@3
  int v4; // r1@5
  void *v5; // r0@5
  char *v6; // r0@6
  char *v7; // r0@9
  void *v8; // r5@12
  void *v9; // r7@12
  unsigned int *v10; // r2@14
  signed int v11; // r1@16
  int *v12; // r0@22
  int v13; // r5@27
  int v14; // r7@27
  unsigned int *v15; // r2@29
  signed int v16; // r1@31
  unsigned int *v17; // r2@33
  signed int v18; // r1@35
  int v19; // r1@45
  void *v20; // r0@45
  int *v21; // r0@46
  _DWORD *v22; // r1@51
  _DWORD *v23; // r4@52
  char *v24; // r0@53
  void *v25; // r0@56
  int v26; // r5@58
  int v27; // r7@58
  unsigned int *v28; // r2@60
  signed int v29; // r1@62
  int v30; // r1@68
  void *v31; // r0@68
  void *v32; // r5@73
  void *v33; // r7@73
  unsigned int *v34; // r2@75
  signed int v35; // r1@77
  int *v36; // r0@83
  int v37; // r1@88
  void *v38; // r0@88
  int v39; // r5@89
  int v40; // r7@89
  unsigned int *v41; // r2@91
  signed int v42; // r1@93
  unsigned int *v43; // r2@95
  signed int v44; // r1@97
  unsigned int *v45; // r2@99
  signed int v46; // r1@101
  int v47; // r1@115
  void *v48; // r0@115
  int v49; // r1@116
  void *v50; // r0@116
  int v51; // r1@117
  void *v52; // r0@117
  int v53; // r1@122
  void *v54; // r0@122
  int v55; // r1@123
  void *v56; // r0@123
  int v57; // r1@124
  void *v58; // r0@124
  int v59; // r1@125
  void *v60; // r0@125
  int v61; // r1@126
  void *v62; // r0@126
  int v63; // r1@127
  void *v64; // r0@127
  int *v65; // r0@128
  unsigned int *v67; // r2@130
  signed int v68; // r1@132
  unsigned int *v69; // r2@134
  signed int v70; // r1@136
  unsigned int *v71; // r2@138
  signed int v72; // r1@140
  unsigned int *v73; // r2@142
  signed int v74; // r1@144
  unsigned int *v75; // r2@146
  signed int v76; // r1@148
  unsigned int *v77; // r2@150
  signed int v78; // r1@152
  unsigned int *v79; // r2@154
  signed int v80; // r1@156
  unsigned int *v81; // r2@158
  signed int v82; // r1@160
  unsigned int *v83; // r2@162
  signed int v84; // r1@164

  v1 = this;
  v2 = (void (*)(void))*((_DWORD *)this + 65);
  if ( v2 )
    v2();
  v3 = (void (*)(void))*((_DWORD *)v1 + 61);
  if ( v3 )
    v3();
  v4 = *((_DWORD *)v1 + 57);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
  {
    v67 = (unsigned int *)(v4 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
    }
    else
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  }
  std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)v1 + 200);
  v6 = (char *)*((_DWORD *)v1 + 50);
  if ( v6 && (char *)v1 + 224 != v6 )
    operator delete(v6);
  std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)v1 + 172);
  v7 = (char *)*((_DWORD *)v1 + 43);
  if ( v7 && (char *)v1 + 196 != v7 )
    operator delete(v7);
  v9 = (void *)(*((_QWORD *)v1 + 20) >> 32);
  v8 = (void *)*((_QWORD *)v1 + 20);
  if ( v8 != v9 )
    do
      v12 = (int *)(*(_DWORD *)v8 - 12);
      if ( v12 != &dword_28898C0 )
      {
        v10 = (unsigned int *)(*(_DWORD *)v8 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j_j__ZdlPv_9(v12);
      }
      v8 = (char *)v8 + 4;
    while ( v8 != v9 );
    v8 = (void *)*((_DWORD *)v1 + 40);
  if ( v8 )
    operator delete(v8);
  v14 = *(_QWORD *)((char *)v1 + 148) >> 32;
  v13 = *(_QWORD *)((char *)v1 + 148);
  if ( v13 != v14 )
      v19 = *(_DWORD *)(v13 + 4);
      v20 = (void *)(v19 - 12);
      if ( (int *)(v19 - 12) != &dword_28898C0 )
        v15 = (unsigned int *)(v19 - 4);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 <= 0 )
          j_j_j_j_j__ZdlPv_9(v20);
      v21 = (int *)(*(_DWORD *)v13 - 12);
      if ( v21 != &dword_28898C0 )
        v17 = (unsigned int *)(*(_DWORD *)v13 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j_j__ZdlPv_9(v21);
      v13 += 8;
    while ( v13 != v14 );
    v13 = *((_DWORD *)v1 + 37);
  if ( v13 )
    operator delete((void *)v13);
  v22 = (_DWORD *)*((_DWORD *)v1 + 32);
  if ( v22 )
      v23 = (_DWORD *)*v22;
      std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<std::string const,std::vector<ResourceLocation,std::allocator<ResourceLocation>>>,true>>>::_M_deallocate_node(
        (int)v1 + 120,
        (int)v22);
      v22 = v23;
    while ( v23 );
  _aeabi_memclr4(*((_QWORD *)v1 + 15), 4 * (*((_QWORD *)v1 + 15) >> 32));
  *((_DWORD *)v1 + 32) = 0;
  *((_DWORD *)v1 + 33) = 0;
  v24 = (char *)*((_DWORD *)v1 + 30);
  if ( v24 && (char *)v1 + 144 != v24 )
    operator delete(v24);
  v25 = (void *)*((_DWORD *)v1 + 27);
  if ( v25 )
    operator delete(v25);
  v27 = *(_QWORD *)((char *)v1 + 92) >> 32;
  v26 = *(_QWORD *)((char *)v1 + 92);
  if ( v26 != v27 )
      v30 = *(_DWORD *)(v26 + 4);
      v31 = (void *)(v30 - 12);
      if ( (int *)(v30 - 12) != &dword_28898C0 )
        v28 = (unsigned int *)(v30 - 4);
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
          v29 = (*v28)--;
        if ( v29 <= 0 )
          j_j_j_j_j__ZdlPv_9(v31);
      v26 += 8;
    while ( v26 != v27 );
    v26 = *((_DWORD *)v1 + 23);
  if ( v26 )
    operator delete((void *)v26);
  v33 = (void *)(*((_QWORD *)v1 + 10) >> 32);
  v32 = (void *)*((_QWORD *)v1 + 10);
  if ( v32 != v33 )
      v36 = (int *)(*(_DWORD *)v32 - 12);
      if ( v36 != &dword_28898C0 )
        v34 = (unsigned int *)(*(_DWORD *)v32 - 4);
            v35 = __ldrex(v34);
          while ( __strex(v35 - 1, v34) );
          v35 = (*v34)--;
        if ( v35 <= 0 )
          j_j_j_j_j__ZdlPv_9(v36);
      v32 = (char *)v32 + 4;
    while ( v32 != v33 );
    v32 = (void *)*((_DWORD *)v1 + 20);
  if ( v32 )
    operator delete(v32);
  v37 = *((_DWORD *)v1 + 18);
  v38 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v37 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j_j__ZdlPv_9(v38);
  Json::Value::~Value((StoreCatalogItem *)((char *)v1 + 48));
  v40 = *(_QWORD *)((char *)v1 + 28) >> 32;
  v39 = *(_QWORD *)((char *)v1 + 28);
  if ( v39 != v40 )
      v47 = *(_DWORD *)(v39 + 32);
      v48 = (void *)(v47 - 12);
      if ( (int *)(v47 - 12) != &dword_28898C0 )
        v41 = (unsigned int *)(v47 - 4);
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
          v42 = (*v41)--;
        if ( v42 <= 0 )
          j_j_j_j_j__ZdlPv_9(v48);
      v49 = *(_DWORD *)(v39 + 28);
      v50 = (void *)(v49 - 12);
      if ( (int *)(v49 - 12) != &dword_28898C0 )
        v43 = (unsigned int *)(v49 - 4);
            v44 = __ldrex(v43);
          while ( __strex(v44 - 1, v43) );
          v44 = (*v43)--;
        if ( v44 <= 0 )
          j_j_j_j_j__ZdlPv_9(v50);
      v51 = *(_DWORD *)(v39 + 24);
      v52 = (void *)(v51 - 12);
      if ( (int *)(v51 - 12) != &dword_28898C0 )
        v45 = (unsigned int *)(v51 - 4);
            v46 = __ldrex(v45);
          while ( __strex(v46 - 1, v45) );
          v46 = (*v45)--;
        if ( v46 <= 0 )
          j_j_j_j_j__ZdlPv_9(v52);
      v39 += 48;
    while ( v39 != v40 );
    v39 = *((_DWORD *)v1 + 7);
  if ( v39 )
    operator delete((void *)v39);
  v53 = *((_DWORD *)v1 + 6);
  v54 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v53 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j_j__ZdlPv_9(v54);
  v55 = *((_DWORD *)v1 + 5);
  v56 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v55 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j_j__ZdlPv_9(v56);
  v57 = *((_DWORD *)v1 + 4);
  v58 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v57 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j_j__ZdlPv_9(v58);
  v59 = *((_DWORD *)v1 + 3);
  v60 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v59 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j_j__ZdlPv_9(v60);
  v61 = *((_DWORD *)v1 + 2);
  v62 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v61 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j_j__ZdlPv_9(v62);
  v63 = *((_DWORD *)v1 + 1);
  v64 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v63 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j_j__ZdlPv_9(v64);
  v65 = (int *)(*(_DWORD *)v1 - 12);
  if ( v65 != &dword_28898C0 )
    v83 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j_j__ZdlPv_9(v65);
  return v1;
}


void __fastcall StoreCatalogItem::setTitle(I18n *a1, int *a2)
{
  StoreCatalogItem::setTitle(a1, a2);
}


void __fastcall StoreCatalogItem::hydrateItem(int a1, ContentCatalogService *a2, int *a3)
{
  StoreCatalogItem::hydrateItem(a1, a2, a3);
}


char *__fastcall StoreCatalogItem::getLastModifiedDate(StoreCatalogItem *this)
{
  return (char *)this + 24;
}


char *__fastcall StoreCatalogItem::getThumbnailUrl(StoreCatalogItem *this)
{
  return (char *)this + 16;
}


signed int __fastcall StoreCatalogItem::hasPackId(int a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // r0@1
  int v5; // r1@1
  __int64 v6; // kr00_8@1
  bool v7; // zf@2
  signed int result; // r0@6

  v6 = *(_QWORD *)(a1 + 28);
  v4 = *(_QWORD *)(a1 + 28) >> 32;
  v5 = v6;
  if ( (_DWORD)v6 == v4 )
  {
LABEL_6:
    result = 0;
  }
  else
    while ( 1 )
    {
      v7 = *(_QWORD *)v5 == a3;
      if ( !(*(_QWORD *)v5 ^ a3) )
        v7 = *(_QWORD *)(v5 + 8) == a4;
      if ( v7 )
        break;
      v5 += 48;
      if ( v4 == v5 )
        goto LABEL_6;
    }
    result = 1;
  return result;
}


unsigned __int64 *__fastcall StoreCatalogItem::setDescDictionary(int a1, int a2)
{
  return j_j_j__ZNSt10_HashtableISsSt4pairIKSsSsESaIS2_ENSt8__detail10_Select1stESt8equal_toISsESt4hashISsENS4_18_Mod_range_hashingENS4_20_Default_ranged_hashENS4_20_Prime_rehash_policyENS4_17_Hashtable_traitsILb1ELb0ELb1EEEEaSERKSF__2(
           (unsigned __int64 *)(a1 + 200),
           a2);
}


int __fastcall StoreCatalogItem::StoreCatalogItem(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r8@1
  int v5; // r11@1
  double v6; // r0@1
  double v7; // r0@1
  int v8; // r7@3
  void *v9; // r6@3
  double v10; // r0@4
  int v11; // r5@6
  void *v12; // r6@6
  unsigned int v13; // r0@7
  int v14; // r5@9
  void *v15; // r6@9
  void (__fastcall *v16)(int, int, signed int); // r3@10
  void (__fastcall *v17)(int, int, signed int); // r3@12

  v3 = a1;
  v4 = a2;
  v5 = a3;
  *(_DWORD *)a1 = &unk_28898CC;
  *(_DWORD *)(a1 + 4) = &unk_28898CC;
  *(_DWORD *)(a1 + 8) = &unk_28898CC;
  sub_119C884((void **)(a1 + 12), (const char *)&unk_257BC67);
  *(_DWORD *)(v3 + 16) = &unk_28898CC;
  *(_DWORD *)(v3 + 20) = &unk_28898CC;
  *(_DWORD *)(v3 + 24) = &unk_28898CC;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 36) = 0;
  *(_DWORD *)(v3 + 40) = 9;
  PropertyBag::PropertyBag((_DWORD *)(v3 + 48));
  *(_DWORD *)(v3 + 72) = &unk_28898CC;
  *(_DWORD *)(v3 + 128) = 0;
  *(_DWORD *)(v3 + 132) = 0;
  _aeabi_memclr4(v3 + 80, 40);
  *(_DWORD *)(v3 + 136) = 1065353216;
  LODWORD(v6) = v3 + 136;
  *(_DWORD *)(LODWORD(v6) + 4) = 0;
  v7 = COERCE_DOUBLE(__PAIR__(10, sub_119C844(v6)));
  *(_DWORD *)(v3 + 124) = LODWORD(v7);
  if ( LODWORD(v7) == 1 )
  {
    *(_DWORD *)(v3 + 144) = 0;
    v9 = (void *)(v3 + 144);
  }
  else
    if ( LODWORD(v7) >= 0x40000000 )
      sub_119C874();
    v8 = 4 * LODWORD(v7);
    v9 = operator new(4 * LODWORD(v7));
    _aeabi_memclr4(v9, v8);
  *(_DWORD *)(v3 + 120) = v9;
  *(_DWORD *)(v3 + 180) = 0;
  *(_DWORD *)(v3 + 184) = 0;
  *(_DWORD *)(v3 + 168) = 0;
  *(_DWORD *)(v3 + 160) = 0;
  *(_DWORD *)(v3 + 164) = 0;
  *(_DWORD *)(v3 + 152) = 0;
  *(_DWORD *)(v3 + 156) = 0;
  *(_DWORD *)(v3 + 148) = 0;
  *(_DWORD *)(v3 + 188) = 1065353216;
  *(_DWORD *)(v3 + 192) = 0;
  LODWORD(v7) = v3 + 188;
  v10 = COERCE_DOUBLE(__PAIR__(10, sub_119C844(v7)));
  *(_DWORD *)(v3 + 176) = LODWORD(v10);
  if ( LODWORD(v10) == 1 )
    *(_DWORD *)(v3 + 196) = 0;
    v12 = (void *)(v3 + 196);
    if ( LODWORD(v10) >= 0x40000000 )
    v11 = 4 * LODWORD(v10);
    v12 = operator new(4 * LODWORD(v10));
    _aeabi_memclr4(v12, v11);
  *(_DWORD *)(v3 + 172) = v12;
  *(_DWORD *)(v3 + 208) = 0;
  *(_DWORD *)(v3 + 212) = 0;
  *(_DWORD *)(v3 + 216) = 1065353216;
  *(_DWORD *)(v3 + 220) = 0;
  LODWORD(v10) = v3 + 216;
  v13 = sub_119C844(v10);
  *(_DWORD *)(v3 + 204) = v13;
  if ( v13 == 1 )
    *(_DWORD *)(v3 + 224) = 0;
    v15 = (void *)(v3 + 224);
    if ( v13 >= 0x40000000 )
    v14 = 4 * v13;
    v15 = operator new(4 * v13);
    _aeabi_memclr4(v15, v14);
  *(_DWORD *)(v3 + 200) = v15;
  *(_DWORD *)(v3 + 244) = 0;
  *(_DWORD *)(v3 + 228) = &unk_28898CC;
  *(_DWORD *)(v3 + 232) = 0;
  v16 = *(void (__fastcall **)(int, int, signed int))(v4 + 8);
  if ( v16 )
    v16(v3 + 236, v4, 2);
    *(_DWORD *)(v3 + 248) = *(_DWORD *)(v4 + 12);
    *(_DWORD *)(v3 + 244) = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v3 + 260) = 0;
  v17 = *(void (__fastcall **)(int, int, signed int))(v5 + 8);
  if ( v17 )
    v17(v3 + 252, v5, 2);
    *(_DWORD *)(v3 + 264) = *(_DWORD *)(v5 + 12);
    *(_DWORD *)(v3 + 260) = *(_DWORD *)(v5 + 8);
  return v3;
}


void __fastcall StoreCatalogItem::setKeyArtLocation(int a1, int *a2)
{
  int v2; // r4@1
  int v3; // r4@1
  __int64 v4; // kr00_8@1
  int *v5; // r0@3
  char *v6; // r0@6
  unsigned int *v7; // r2@8
  signed int v8; // r1@10
  char *v9; // [sp+4h] [bp-24h]@1
  char *v10; // [sp+8h] [bp-20h]@1
  int v11; // [sp+Ch] [bp-1Ch]@1

  v2 = a1;
  sub_119C854((int *)&v9, a2);
  v10 = v9;
  v9 = (char *)&unk_28898CC;
  v11 = 10;
  v3 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<ResourceLocation,std::allocator<ResourceLocation>>>,std::allocator<std::pair<std::string const,std::vector<ResourceLocation,std::allocator<ResourceLocation>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
         (unsigned __int64 *)(v2 + 120),
         (int **)&dword_27D6C3C);
  v4 = *(_QWORD *)v3;
  if ( HIDWORD(v4) == (_DWORD)v4 )
  {
    if ( HIDWORD(v4) == *(_DWORD *)(v3 + 8) )
    {
      std::vector<ResourceLocation,std::allocator<ResourceLocation>>::_M_emplace_back_aux<ResourceLocation const&>(
        (_QWORD *)v3,
        (int)&v10);
    }
    else
      v5 = sub_119C854((int *)HIDWORD(v4), (int *)&v10);
      v5[1] = v11;
      *(_DWORD *)(v3 + 4) += 8;
  }
  else
    EntityInteraction::setInteractText((int *)v4, (int *)&v10);
    *(_DWORD *)(v4 + 4) = v11;
  v6 = v10 - 12;
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
}


int __fastcall StoreCatalogItem::fetchImages(__int64 this)
{
  __int64 v1; // kr00_8@1
  unsigned int v2; // r10@3
  unsigned int *v3; // r2@4
  signed int v4; // r1@6
  _DWORD *v5; // r0@12
  void *v6; // r0@14
  _DWORD *v8; // [sp+4h] [bp-3Ch]@12
  int (__fastcall *v9)(void **, void **, int); // [sp+Ch] [bp-34h]@12
  int (__fastcall *v10)(int, int *); // [sp+10h] [bp-30h]@12
  int v11; // [sp+14h] [bp-2Ch]@4

  v1 = this;
  LODWORD(this) = *(_BYTE *)(this + 104);
  if ( !(_DWORD)this )
  {
    *(_BYTE *)(v1 + 104) = 1;
    this = *(_QWORD *)(v1 + 148);
    if ( HIDWORD(this) != (_DWORD)this )
    {
      v2 = 0;
      do
      {
        getFetchImageParams((const void **)&v11, (unsigned int *)(this + 8 * v2), (const void **)(this + 8 * v2 + 4));
        v9 = 0;
        v5 = operator new(0xCu);
        *v5 = v1;
        v5[1] = v1;
        v8 = v5;
        v5[2] = v2;
        v10 = sub_10E1670;
        v9 = sub_10E17E0;
        ContentCatalogService::fetchImageData((ContentCatalogService *)HIDWORD(v1), &v11, (int)&v8);
        if ( v9 )
          v9((void **)&v8, (void **)&v8, 3);
        v6 = (void *)(v11 - 12);
        if ( (int *)(v11 - 12) != &dword_28898C0 )
        {
          v3 = (unsigned int *)(v11 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v4 = __ldrex(v3);
            while ( __strex(v4 - 1, v3) );
          }
          else
            v4 = (*v3)--;
          if ( v4 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v6);
        }
        this = *(_QWORD *)(v1 + 148);
        ++v2;
      }
      while ( v2 < (HIDWORD(this) - (signed int)this) >> 3 );
    }
  }
  return this;
}


void __fastcall StoreCatalogItem::setDescription(I18n *a1, int *a2)
{
  StoreCatalogItem::setDescription(a1, a2);
}


signed int __fastcall StoreCatalogItem::isUpdateAvailable(StoreCatalogItem *this)
{
  int v1; // r0@2
  signed int v2; // r1@2

  if ( !*((_DWORD *)this + 65) )
    sub_119C8E4();
  v1 = (*((int (__fastcall **)(_DWORD, _DWORD))this + 66))((char *)this + 252, (char *)this + 28);
  v2 = 0;
  if ( v1 == 2 )
    v2 = 1;
  return v2;
}


StoreCatalogItem *__fastcall StoreCatalogItem::getScreenshotLocation(StoreCatalogItem *this, int a2)
{
  int v2; // r4@1
  StoreCatalogItem *v3; // r5@1
  int v4; // r0@1
  __int64 v5; // kr00_8@3
  StoreCatalogItem *result; // r0@4

  v2 = a2;
  v3 = this;
  v4 = std::_Hashtable<std::string,std::pair<std::string const,std::vector<ResourceLocation,std::allocator<ResourceLocation>>>,std::allocator<std::pair<std::string const,std::vector<ResourceLocation,std::allocator<ResourceLocation>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)this + 15,
         (int **)&dword_27D6C38);
  if ( v2 >= 0 && v4 && (v5 = *(_QWORD *)(v4 + 8), (HIDWORD(v5) - (signed int)v5) >> 3 > v2) )
    result = (StoreCatalogItem *)(v5 + 8 * v2);
  else
    result = (StoreCatalogItem *)((char *)v3 + 228);
  return result;
}


const void **__fastcall StoreCatalogItem::getDescription(StoreCatalogItem *this)
{
  StoreCatalogItem *v1; // r5@1
  int v2; // r0@1
  unsigned int v3; // r10@1
  __int64 v4; // kr00_8@1
  unsigned int v5; // r7@1
  int *v6; // r6@1
  int v7; // r8@2
  _DWORD *v8; // r9@2
  int v9; // r4@2
  const void *v10; // r1@4
  size_t v11; // r2@4
  int v12; // r0@5
  int v13; // r5@6
  unsigned int v14; // r9@8
  __int64 v15; // kr08_8@8
  unsigned int v16; // r11@8
  int v17; // r6@8
  int v18; // r7@9
  _DWORD *v19; // r8@9
  int v20; // r4@9
  _DWORD *v21; // r1@11
  size_t v22; // r2@11
  int v23; // r5@13
  int v24; // r4@15
  bool v25; // zf@18
  const void **v26; // r4@21
  char *v27; // r0@29
  unsigned int *v29; // r2@31
  signed int v30; // r1@33
  unsigned int *v31; // r2@35
  signed int v32; // r1@37
  StoreCatalogItem *v33; // [sp+0h] [bp-40h]@1
  void *v34; // [sp+8h] [bp-38h]@8
  void *s1; // [sp+Ch] [bp-34h]@1

  v1 = this;
  v2 = I18n::getCurrentLanguage(this);
  Localization::getFullLanguageCode((Localization *)&s1, v2);
  v3 = sub_119C9A4((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v4 = *((_QWORD *)v1 + 25);
  v33 = v1;
  v5 = v3 % (unsigned int)(*((_QWORD *)v1 + 25) >> 32);
  v6 = *(int **)(v4 + 4 * v5);
  if ( !v6 )
    goto LABEL_8;
  v7 = *v6;
  v8 = s1;
  v9 = *(_DWORD *)(*v6 + 12);
  while ( 1 )
  {
    if ( v9 == v3 )
    {
      v10 = *(const void **)(v7 + 4);
      v11 = *(v8 - 3);
      if ( v11 == *((_DWORD *)v10 - 3) )
      {
        v12 = memcmp(v8, v10, v11);
        if ( !v12 )
          break;
      }
    }
    v13 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 )
      v9 = *(_DWORD *)(v13 + 12);
      v6 = (int *)v7;
      v7 = *(_DWORD *)v7;
      if ( *(_DWORD *)(v13 + 12) % HIDWORD(v4) == v5 )
        continue;
  }
  v25 = v6 == 0;
  if ( v6 )
    v12 = *v6;
    v25 = *v6 == 0;
  if ( v25 )
LABEL_8:
    sub_119C884(&v34, "neutral");
    v14 = sub_119C9A4((int *)v34, *((_DWORD *)v34 - 3), -955291385);
    v15 = *((_QWORD *)v33 + 25);
    v16 = v14 % (unsigned int)(*((_QWORD *)v33 + 25) >> 32);
    v17 = *(_DWORD *)(v15 + 4 * v16);
    if ( v17 )
      v18 = *(_DWORD *)v17;
      v19 = v34;
      v20 = *(_DWORD *)(*(_DWORD *)v17 + 12);
      while ( 1 )
        if ( v20 == v14 )
        {
          v21 = *(_DWORD **)(v18 + 4);
          v22 = *(v19 - 3);
          if ( v22 == *(v21 - 3) && !memcmp(v19, v21, v22) )
            break;
        }
        v23 = *(_DWORD *)v18;
        if ( !*(_DWORD *)v18 )
          v24 = 0;
          goto LABEL_25;
        v20 = *(_DWORD *)(v23 + 12);
        v17 = v18;
        v18 = *(_DWORD *)v18;
        if ( *(_DWORD *)(v23 + 12) % HIDWORD(v15) != v16 )
      if ( v17 )
        v24 = *(_DWORD *)v17;
      else
        v24 = 0;
    else
      v24 = 0;
LABEL_25:
    if ( v19 - 3 != &dword_28898C0 )
      v31 = v19 - 1;
      if ( &pthread_create )
        __dmb();
        do
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v19 - 3);
    if ( v24 )
      v26 = (const void **)(v24 + 8);
      v26 = &Util::EMPTY_STRING;
  else
    v26 = (const void **)(v12 + 8);
  v27 = (char *)s1 - 12;
  if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)((char *)s1 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
  return v26;
}


        if ( StoreCatalogItem::isAvailableForPurchase(v21) || StoreCatalogItem::isOwned(v21) == 1 )
{
          v22 = *(ContentCatalogService **)(v6 + 4);
          v23 = (unsigned int *)StoreCatalogItem::getThumbnailUrl(v21);
          getFetchImageParams((const void **)&v49, v23, &Util::EMPTY_STRING);
          v40 = v6;
          v24 = 0;
          v41 = v36;
          v43 = 0;
          v25 = *(void (__fastcall **)(int *, int, signed int))(v3 + 12);
          if ( v25 )
          {
            v25(&v42, v35, 2);
            v44 = *(_DWORD *)(v3 + 16);
            v24 = *(_DWORD *)(v3 + 12);
            v43 = *(void (**)(void))(v3 + 12);
          }
          v45 = v21;
          v47 = 0;
          v26 = operator new(0x1Cu);
          *v26 = *(_QWORD *)&v40;
          v26[1] = *(_QWORD *)&v42;
          v27 = v44;
          *((_DWORD *)v26 + 4) = v24;
          *((_DWORD *)v26 + 5) = v27;
          *((_DWORD *)v26 + 6) = v21;
          v46 = v26;
          v48 = sub_10EACFC;
          v47 = (void (*)(void))sub_10EAE8C;
          ContentCatalogService::fetchImageData(v22, &v49, (int)&v46);
          if ( v47 )
            v47();
          if ( v43 )
            v43();
          v6 = v34;
          v28 = (void *)(v49 - 12);
          if ( (int *)(v49 - 12) != &dword_28898C0 )
            v29 = (unsigned int *)(v49 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v19 = __ldrex(v29);
              while ( __strex(v19 - 1, v29) );
            }
            else
              v19 = (*v29)--;
            if ( v19 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v28);
        }
        else
        {
          v30 = 0;
          v38 = 0;
          v31 = *(void (__fastcall **)(char *, int, signed int))(v3 + 12);
          if ( v31 )
            v31(&v37, v35, 2);
            v39 = *(void (__fastcall **)(char *))(v3 + 16);
            v30 = *(void (**)(void))(v3 + 12);
            v38 = *(void (**)(void))(v3 + 12);
          v32 = *(_DWORD *)(v6 + 244);
          v33 = *(_DWORD *)(v32 + 4 * v36) - 1;
          *(_DWORD *)(v32 + 4 * v36) = v33;
          if ( !v33 )
            if ( v30 )
              v39(&v37);
              v30 = v38;
              v30 = 0;
            *(_BYTE *)(v6 + 241) = 1;
          if ( v30 )
            v30();
        v5 += 68;
      }
      while ( v5 != v10 );
    }
  }
}


char *__fastcall StoreCatalogItem::getEntitlementList(StoreCatalogItem *this, int a2)
{
  int v2; // r6@1
  StoreCatalogItem *v3; // r4@1
  int v4; // r1@1 OVERLAPPED
  int v5; // r2@1 OVERLAPPED
  char *v6; // r5@1
  unsigned int v7; // r7@1
  char *v8; // r0@3
  int v9; // r6@4
  char *result; // r0@6

  v2 = a2;
  v3 = this;
  *(_QWORD *)&v4 = *(_QWORD *)(a2 + 108);
  v6 = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v7 = (v5 - v4) >> 2;
  if ( v7 )
  {
    if ( v7 >= 0x40000000 )
      sub_119C874();
    v8 = (char *)operator new(v5 - v4);
    *(_QWORD *)&v4 = *(_QWORD *)(v2 + 108);
    v6 = v8;
  }
  *(_DWORD *)v3 = v6;
  *((_DWORD *)v3 + 1) = v6;
  *((_DWORD *)v3 + 2) = &v6[4 * v7];
  v9 = (v5 - v4) >> 2;
  if ( 0 != v9 )
    _aeabi_memmove4(v6, v4);
  result = &v6[4 * v9];
  *((_DWORD *)v3 + 1) = result;
  return result;
}


const void **__fastcall StoreCatalogItem::getTitle(StoreCatalogItem *this)
{
  StoreCatalogItem *v1; // r5@1
  int v2; // r0@1
  unsigned int v3; // r10@1
  __int64 v4; // kr00_8@1
  unsigned int v5; // r7@1
  int *v6; // r6@1
  int v7; // r8@2
  _DWORD *v8; // r9@2
  int v9; // r4@2
  const void *v10; // r1@4
  size_t v11; // r2@4
  int v12; // r0@5
  int v13; // r5@6
  unsigned int v14; // r9@8
  __int64 v15; // kr08_8@8
  unsigned int v16; // r11@8
  int v17; // r6@8
  int v18; // r7@9
  _DWORD *v19; // r8@9
  int v20; // r4@9
  _DWORD *v21; // r1@11
  size_t v22; // r2@11
  int v23; // r5@13
  int v24; // r4@15
  bool v25; // zf@18
  const void **v26; // r4@21
  char *v27; // r0@29
  unsigned int *v29; // r2@31
  signed int v30; // r1@33
  unsigned int *v31; // r2@35
  signed int v32; // r1@37
  StoreCatalogItem *v33; // [sp+0h] [bp-40h]@1
  void *v34; // [sp+8h] [bp-38h]@8
  void *s1; // [sp+Ch] [bp-34h]@1

  v1 = this;
  v2 = I18n::getCurrentLanguage(this);
  Localization::getFullLanguageCode((Localization *)&s1, v2);
  v3 = sub_119C9A4((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v4 = *(_QWORD *)((char *)v1 + 172);
  v33 = v1;
  v5 = v3 % (unsigned int)(*(_QWORD *)((char *)v1 + 172) >> 32);
  v6 = *(int **)(v4 + 4 * v5);
  if ( !v6 )
    goto LABEL_8;
  v7 = *v6;
  v8 = s1;
  v9 = *(_DWORD *)(*v6 + 12);
  while ( 1 )
  {
    if ( v9 == v3 )
    {
      v10 = *(const void **)(v7 + 4);
      v11 = *(v8 - 3);
      if ( v11 == *((_DWORD *)v10 - 3) )
      {
        v12 = memcmp(v8, v10, v11);
        if ( !v12 )
          break;
      }
    }
    v13 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 )
      v9 = *(_DWORD *)(v13 + 12);
      v6 = (int *)v7;
      v7 = *(_DWORD *)v7;
      if ( *(_DWORD *)(v13 + 12) % HIDWORD(v4) == v5 )
        continue;
  }
  v25 = v6 == 0;
  if ( v6 )
    v12 = *v6;
    v25 = *v6 == 0;
  if ( v25 )
LABEL_8:
    sub_119C884(&v34, "neutral");
    v14 = sub_119C9A4((int *)v34, *((_DWORD *)v34 - 3), -955291385);
    v15 = *(_QWORD *)((char *)v33 + 172);
    v16 = v14 % (unsigned int)(*(_QWORD *)((char *)v33 + 172) >> 32);
    v17 = *(_DWORD *)(v15 + 4 * v16);
    if ( v17 )
      v18 = *(_DWORD *)v17;
      v19 = v34;
      v20 = *(_DWORD *)(*(_DWORD *)v17 + 12);
      while ( 1 )
        if ( v20 == v14 )
        {
          v21 = *(_DWORD **)(v18 + 4);
          v22 = *(v19 - 3);
          if ( v22 == *(v21 - 3) && !memcmp(v19, v21, v22) )
            break;
        }
        v23 = *(_DWORD *)v18;
        if ( !*(_DWORD *)v18 )
          v24 = 0;
          goto LABEL_25;
        v20 = *(_DWORD *)(v23 + 12);
        v17 = v18;
        v18 = *(_DWORD *)v18;
        if ( *(_DWORD *)(v23 + 12) % HIDWORD(v15) != v16 )
      if ( v17 )
        v24 = *(_DWORD *)v17;
      else
        v24 = 0;
    else
      v24 = 0;
LABEL_25:
    if ( v19 - 3 != &dword_28898C0 )
      v31 = v19 - 1;
      if ( &pthread_create )
        __dmb();
        do
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v19 - 3);
    if ( v24 )
      v26 = (const void **)(v24 + 8);
      v26 = &Util::EMPTY_STRING;
  else
    v26 = (const void **)(v12 + 8);
  v27 = (char *)s1 - 12;
  if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)((char *)s1 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
  return v26;
}


int __fastcall StoreCatalogItem::_setPackIdVersion(StoreCatalogItem *this)
{
  __int64 v1; // r4@1
  PropertyBag *v2; // r6@1
  int result; // r0@1
  int v4; // r0@2
  Json::Value *v5; // r0@2
  int v6; // r6@2
  Json::ValueIteratorBase *v7; // r6@4
  const char *v8; // r9@4
  const char *v9; // r4@4
  unsigned int *v10; // r2@5
  signed int v11; // r1@7
  unsigned int *v12; // r2@9
  signed int v13; // r1@11
  unsigned int *v14; // r2@13
  signed int v15; // r1@15
  unsigned int *v16; // r2@17
  signed int v17; // r1@19
  unsigned int *v18; // r2@21
  signed int v19; // r1@23
  unsigned int *v20; // r2@25
  signed int v21; // r1@27
  unsigned int *v22; // r2@29
  signed int v23; // r1@31
  unsigned int *v24; // r2@33
  signed int v25; // r1@35
  unsigned int *v26; // r2@37
  signed int v27; // r1@39
  unsigned int *v28; // r2@77
  signed int v29; // r1@79
  const char *v30; // r7@80
  unsigned int *v31; // r2@81
  signed int v32; // r1@83
  unsigned int *v33; // r2@85
  signed int v34; // r1@87
  unsigned int *v35; // r2@89
  signed int v36; // r1@91
  unsigned int *v37; // r2@93
  signed int v38; // r1@95
  Json::ValueIteratorBase *v39; // r11@117
  int v40; // r6@117
  void *v41; // r9@117
  void *v42; // r0@117
  void *v43; // r0@118
  void *v44; // r7@119
  void *v45; // r0@119
  void *v46; // r6@120
  char v47; // r6@120
  void *v48; // r0@120
  void *v49; // r0@121
  void *v50; // r0@123
  void *v51; // r0@124
  void *v52; // r0@125
  void *v53; // r0@126
  void *v54; // r0@127
  __int64 v55; // r0@128
  __int64 v56; // r2@130
  void *v57; // r0@131
  void *v58; // r0@132
  void *v59; // r0@133
  void *v60; // r0@134
  __int64 v61; // [sp+48h] [bp-B8h]@3
  int v62; // [sp+54h] [bp-ACh]@89
  int v63; // [sp+5Ch] [bp-A4h]@93
  int v64; // [sp+60h] [bp-A0h]@123
  __int16 v65; // [sp+64h] [bp-9Ch]@123
  int v66; // [sp+68h] [bp-98h]@85
  int v67; // [sp+6Ch] [bp-94h]@81
  int v68; // [sp+70h] [bp-90h]@77
  __int16 v69; // [sp+74h] [bp-8Ch]@123
  char v70; // [sp+76h] [bp-8Ah]@123
  int v71; // [sp+78h] [bp-88h]@122
  __int16 v72; // [sp+7Ch] [bp-84h]@123
  int v73; // [sp+80h] [bp-80h]@33
  int v74; // [sp+84h] [bp-7Ch]@29
  int v75; // [sp+88h] [bp-78h]@25
  __int16 v76; // [sp+8Ch] [bp-74h]@123
  char v77; // [sp+8Eh] [bp-72h]@123
  int v78; // [sp+94h] [bp-6Ch]@21
  int v79; // [sp+98h] [bp-68h]@17
  char v80; // [sp+9Fh] [bp-61h]@122
  int v81; // [sp+A4h] [bp-5Ch]@13
  int v82; // [sp+A8h] [bp-58h]@37
  int v83; // [sp+B0h] [bp-50h]@9
  int v84; // [sp+B4h] [bp-4Ch]@5
  char v85; // [sp+B8h] [bp-48h]@117
  char v86; // [sp+C8h] [bp-38h]@3
  char v87; // [sp+D0h] [bp-30h]@3

  HIDWORD(v1) = this;
  v2 = (StoreCatalogItem *)((char *)this + 48);
  result = PropertyBag::has((StoreCatalogItem *)((char *)this + 48), 12, "packIdentity");
  if ( result == 1 )
  {
    std::vector<PackIdVersion,std::allocator<PackIdVersion>>::_M_erase_at_end(
      HIDWORD(v1) + 28,
      *(_DWORD *)(HIDWORD(v1) + 28));
    v4 = PropertyBag::toJsonValue(v2);
    v5 = (Json::Value *)Json::Value::operator[](v4, "packIdentity");
    v6 = (int)v5;
    result = Json::Value::isArray(v5);
    if ( result == 1 )
    {
      LODWORD(v1) = HIDWORD(v1) + 28;
      v61 = v1;
      Json::Value::begin((Json::Value *)&v87, v6);
      Json::Value::end((Json::Value *)&v86, v6);
      result = Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v87, (const Json::ValueIteratorBase *)&v86);
      if ( !result )
      {
        v7 = (Json::ValueIteratorBase *)&v87;
        v8 = "uuid";
        v9 = (const char *)&unk_257BC67;
        do
        {
          v39 = v7;
          v40 = Json::ValueIteratorBase::deref(v7);
          v41 = Json::Value::operator[](v40, v8);
          sub_119C884((void **)&v83, v9);
          Json::Value::asString(&v84, (int)v41, &v83);
          mce::UUID::fromString((int)&v85, &v84);
          v42 = (void *)(v84 - 12);
          if ( (int *)(v84 - 12) != &dword_28898C0 )
          {
            v10 = (unsigned int *)(v84 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v11 = __ldrex(v10);
              while ( __strex(v11 - 1, v10) );
            }
            else
              v11 = (*v10)--;
            if ( v11 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v42);
          }
          v43 = (void *)(v83 - 12);
          if ( (int *)(v83 - 12) != &dword_28898C0 )
            v12 = (unsigned int *)(v83 - 4);
                v13 = __ldrex(v12);
              while ( __strex(v13 - 1, v12) );
              v13 = (*v12)--;
            if ( v13 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v43);
          v44 = Json::Value::operator[](v40, "version");
          sub_119C884((void **)&v81, v9);
          Json::Value::asString(&v82, (int)v44, &v81);
          v45 = (void *)(v81 - 12);
          if ( (int *)(v81 - 12) != &dword_28898C0 )
            v14 = (unsigned int *)(v81 - 4);
                v15 = __ldrex(v14);
              while ( __strex(v15 - 1, v14) );
              v15 = (*v14)--;
            if ( v15 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v45);
          v46 = Json::Value::operator[](v40, "type");
          sub_119C884((void **)&v78, v9);
          Json::Value::asString(&v79, (int)v46, &v78);
          v47 = PackTypeFromString((int **)&v79);
          v48 = (void *)(v79 - 12);
          if ( (int *)(v79 - 12) != &dword_28898C0 )
            v16 = (unsigned int *)(v79 - 4);
                v17 = __ldrex(v16);
              while ( __strex(v17 - 1, v16) );
              v17 = (*v16)--;
            if ( v17 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v48);
          v49 = (void *)(v78 - 12);
          if ( (int *)(v78 - 12) != &dword_28898C0 )
            v18 = (unsigned int *)(v78 - 4);
                v19 = __ldrex(v18);
              while ( __strex(v19 - 1, v18) );
              v19 = (*v18)--;
            if ( v19 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v49);
          v80 = v47;
          SemVersion::SemVersion((SemVersion *)&v71);
          v7 = v39;
          v30 = v9;
          if ( SemVersion::fromString((const void **)&v82, (int)&v71) == 2 )
            sub_119C884((void **)&v63, v9);
            sub_119C884((void **)&v62, v9);
            SemVersion::SemVersion((int)&v64, 0, 0, 1, &v63, &v62, 0);
            v72 = v65;
            v71 = v64;
            EntityInteraction::setInteractText(&v73, &v66);
            EntityInteraction::setInteractText(&v74, &v67);
            EntityInteraction::setInteractText(&v75, &v68);
            v77 = v70;
            v76 = v69;
            v50 = (void *)(v68 - 12);
            if ( (int *)(v68 - 12) != &dword_28898C0 )
              v28 = (unsigned int *)(v68 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v29 = __ldrex(v28);
                while ( __strex(v29 - 1, v28) );
                v30 = v9;
              }
              else
                v29 = (*v28)--;
              if ( v29 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v50);
            v51 = (void *)(v67 - 12);
            if ( (int *)(v67 - 12) != &dword_28898C0 )
              v31 = (unsigned int *)(v67 - 4);
                  v32 = __ldrex(v31);
                while ( __strex(v32 - 1, v31) );
                v32 = (*v31)--;
              if ( v32 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v51);
            v52 = (void *)(v66 - 12);
            if ( (int *)(v66 - 12) != &dword_28898C0 )
              v33 = (unsigned int *)(v66 - 4);
                  v34 = __ldrex(v33);
                while ( __strex(v34 - 1, v33) );
                v34 = (*v33)--;
              if ( v34 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v52);
            v53 = (void *)(v62 - 12);
            if ( (int *)(v62 - 12) != &dword_28898C0 )
              v35 = (unsigned int *)(v62 - 4);
                  v36 = __ldrex(v35);
                while ( __strex(v36 - 1, v35) );
                v36 = (*v35)--;
              if ( v36 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v53);
            v54 = (void *)(v63 - 12);
            if ( (int *)(v63 - 12) != &dword_28898C0 )
              v37 = (unsigned int *)(v63 - 4);
                  v38 = __ldrex(v37);
                while ( __strex(v38 - 1, v37) );
                v38 = (*v37)--;
              if ( v38 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v54);
          v55 = *(_QWORD *)(HIDWORD(v61) + 32);
          if ( (_DWORD)v55 == HIDWORD(v55) )
            HIDWORD(v56) = &v80;
            LODWORD(v56) = &v71;
            std::vector<PackIdVersion,std::allocator<PackIdVersion>>::_M_emplace_back_aux<mce::UUID &,SemVersion &,PackType &>(
              (unsigned __int64 *)v61,
              (int)&v85,
              v56);
          else
            PackIdVersion::PackIdVersion(v55, (int)&v85, (int)&v71, v80);
            *(_DWORD *)(HIDWORD(v61) + 32) += 48;
          v8 = "uuid";
          v57 = (void *)(v75 - 12);
          if ( (int *)(v75 - 12) != &dword_28898C0 )
            v20 = (unsigned int *)(v75 - 4);
                v21 = __ldrex(v20);
              while ( __strex(v21 - 1, v20) );
              v21 = (*v20)--;
            if ( v21 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v57);
          v58 = (void *)(v74 - 12);
          if ( (int *)(v74 - 12) != &dword_28898C0 )
            v22 = (unsigned int *)(v74 - 4);
                v23 = __ldrex(v22);
              while ( __strex(v23 - 1, v22) );
              v23 = (*v22)--;
            if ( v23 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v58);
          v59 = (void *)(v73 - 12);
          if ( (int *)(v73 - 12) != &dword_28898C0 )
            v24 = (unsigned int *)(v73 - 4);
                v25 = __ldrex(v24);
              while ( __strex(v25 - 1, v24) );
              v25 = (*v24)--;
            if ( v25 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v59);
          v9 = v30;
          v60 = (void *)(v82 - 12);
          if ( (int *)(v82 - 12) != &dword_28898C0 )
            v26 = (unsigned int *)(v82 - 4);
                v27 = __ldrex(v26);
              while ( __strex(v27 - 1, v26) );
              v27 = (*v26)--;
            if ( v27 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v60);
          Json::ValueIteratorBase::increment(v39);
          result = Json::ValueIteratorBase::isEqual(v39, (const Json::ValueIteratorBase *)&v86);
        }
        while ( !result );
      }
    }
  }
  return result;
}


StoreCatalogItem *__fastcall StoreCatalogItem::getKeyArtLocation(StoreCatalogItem *this, int a2)
{
  int v2; // r4@1
  StoreCatalogItem *v3; // r5@1
  int v4; // r0@1
  __int64 v5; // kr00_8@3
  StoreCatalogItem *result; // r0@4

  v2 = a2;
  v3 = this;
  v4 = std::_Hashtable<std::string,std::pair<std::string const,std::vector<ResourceLocation,std::allocator<ResourceLocation>>>,std::allocator<std::pair<std::string const,std::vector<ResourceLocation,std::allocator<ResourceLocation>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)this + 15,
         (int **)&dword_27D6C3C);
  if ( v2 >= 0 && v4 && (v5 = *(_QWORD *)(v4 + 8), (HIDWORD(v5) - (signed int)v5) >> 3 > v2) )
    result = (StoreCatalogItem *)(v5 + 8 * v2);
  else
    result = (StoreCatalogItem *)((char *)v3 + 228);
  return result;
}


int __fastcall StoreCatalogItem::getPackIdentity(StoreCatalogItem *this, int a2)
{
  StoreCatalogItem *v2; // r4@1
  __int64 v3; // kr00_8@1
  int result; // r0@2
  int v5; // r1@3
  int v6; // r2@3
  int v7; // r3@3

  v2 = this;
  v3 = *(_QWORD *)(a2 + 28);
  if ( HIDWORD(v3) == (_DWORD)v3 )
  {
    result = PackIdVersion::PackIdVersion(this);
  }
  else
    v5 = *(_DWORD *)(v3 + 4);
    v6 = *(_DWORD *)(v3 + 8);
    v7 = *(_DWORD *)(v3 + 12);
    *(_DWORD *)this = *(_DWORD *)v3;
    *((_DWORD *)this + 1) = v5;
    *((_DWORD *)this + 2) = v6;
    *((_DWORD *)this + 3) = v7;
    SemVersion::SemVersion((int)this + 16, v3 + 16);
    result = *(_BYTE *)(v3 + 40);
    *((_BYTE *)v2 + 40) = result;
  return result;
}


signed int __fastcall StoreCatalogItem::setImageMeta(int a1, unsigned __int64 *a2)
{
  int v2; // r4@1
  _DWORD *v3; // r11@1
  _DWORD *v4; // r8@1
  char *v5; // r1@2
  _DWORD *v6; // r5@2
  int (**v7)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r12@2
  unsigned int *v8; // r2@3
  signed int v9; // r6@5
  char *v10; // r6@9
  int (**v11)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r7@9
  int *v12; // r0@10
  signed int v13; // r0@12
  signed int v14; // r7@13
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  __int64 v17; // r0@22
  int v18; // r1@23
  void *v19; // r0@25
  signed int result; // r0@27
  void *v21; // [sp+4h] [bp-34h]@22
  char v22; // [sp+8h] [bp-30h]@2

  v2 = a1;
  std::vector<HydrateResponse::ImageMeta,std::allocator<HydrateResponse::ImageMeta>>::operator=(a1 + 148, a2);
  v3 = *(_DWORD **)(v2 + 160);
  v4 = *(_DWORD **)(v2 + 164);
  if ( v4 != v3 )
  {
    v5 = &v22;
    v6 = *(_DWORD **)(v2 + 160);
    v7 = &pthread_create;
    do
    {
      v12 = (int *)(*v6 - 12);
      if ( v12 != &dword_28898C0 )
      {
        v8 = (unsigned int *)(*v6 - 4);
        if ( v7 )
        {
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
        }
        else
          v9 = (*v8)--;
        if ( v9 <= 0 )
          v10 = v5;
          v11 = v7;
          j_j_j_j_j__ZdlPv_9_1(v12);
          v7 = v11;
          v5 = v10;
      }
      ++v6;
    }
    while ( v6 != v4 );
  }
  *(_DWORD *)(v2 + 164) = v3;
  std::vector<std::string,std::allocator<std::string>>::reserve(
    v2 + 160,
    (signed int)((*(_QWORD *)(v2 + 148) >> 32) - *(_QWORD *)(v2 + 148)) >> 3);
  v13 = (*(_QWORD *)(v2 + 148) >> 32) - *(_QWORD *)(v2 + 148);
  if ( v13 >= 1 )
    v14 = 0;
      v21 = &unk_28898CC;
      v17 = *(_QWORD *)(v2 + 164);
      if ( (_DWORD)v17 == HIDWORD(v17) )
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
          (unsigned __int64 *)(v2 + 160),
          &v21);
        v18 = (int)v21;
      else
        *(_DWORD *)v17 = &unk_28898CC;
        HIDWORD(v17) = &unk_28898CC;
        v21 = &unk_28898CC;
        *(_DWORD *)(v2 + 164) = v17 + 4;
      v19 = (void *)(v18 - 12);
      if ( (int *)(v18 - 12) != &dword_28898C0 )
        v15 = (unsigned int *)(v18 - 4);
        if ( &pthread_create )
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v19);
      ++v14;
      v13 = (*(_QWORD *)(v2 + 148) >> 32) - *(_QWORD *)(v2 + 148);
    while ( v14 < v13 >> 3 );
  result = v13 >> 3;
  *(_DWORD *)(v2 + 76) = result;
  return result;
}


signed int __fastcall StoreCatalogItem::isAvailableForPurchase(StoreCatalogItem *this)
{
  Json::Value *v1; // r4@1
  Json::Value *v2; // r4@3
  signed int result; // r0@4

  v1 = (StoreCatalogItem *)((char *)this + 48);
  if ( Json::Value::isNull((StoreCatalogItem *)((char *)this + 48))
    || Json::Value::isObject(v1) != 1
    || (v2 = (Json::Value *)Json::Value::operator[]((int)v1, "purchasable"), Json::Value::isBool(v2) != 1) )
  {
    result = 1;
  }
  else
    result = Json::Value::asBool(v2, 0);
  return result;
}


char *__fastcall StoreCatalogItem::getPrice(StoreCatalogItem *this)
{
  char *v1; // r1@1

  v1 = (char *)&Util::EMPTY_STRING;
  if ( *((_BYTE *)this + 105) )
    v1 = (char *)this + 12;
  return v1;
}


void __fastcall StoreCatalogItem::_setCreatorName(StoreCatalogItem *this)
{
  StoreCatalogItem *v1; // r4@1
  Json::Value *v2; // r5@1
  Json::Value *v3; // r5@2
  signed int v4; // r5@3
  void *v5; // r0@5
  void *v6; // r0@7
  unsigned int *v7; // r2@9
  signed int v8; // r1@11
  unsigned int *v9; // r2@13
  signed int v10; // r1@15
  int v11; // [sp+8h] [bp-28h]@3
  int v12; // [sp+Ch] [bp-24h]@3

  v1 = this;
  v2 = (Json::Value *)PropertyBag::toJsonValue((StoreCatalogItem *)((char *)this + 48));
  if ( !Json::Value::isNull(v2) )
  {
    v3 = (Json::Value *)Json::Value::operator[]((int)v2, "creatorName");
    if ( Json::Value::isString(v3) == 1 )
    {
      sub_119C884((void **)&v11, (const char *)&unk_257BC67);
      Json::Value::asString(&v12, (int)v3, &v11);
      v4 = 1;
    }
    else
      sub_119C854(&v12, (int *)&Util::EMPTY_STRING);
      v4 = 0;
    EntityInteraction::setInteractText((int *)v1 + 1, &v12);
    v5 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)(v12 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v5);
    if ( v4 == 1 )
      v6 = (void *)(v11 - 12);
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v9 = (unsigned int *)(v11 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v6);
  }
}


unsigned __int64 *__fastcall StoreCatalogItem::setTitleDictionary(int a1, int a2)
{
  return j_j_j__ZNSt10_HashtableISsSt4pairIKSsSsESaIS2_ENSt8__detail10_Select1stESt8equal_toISsESt4hashISsENS4_18_Mod_range_hashingENS4_20_Default_ranged_hashENS4_20_Prime_rehash_policyENS4_17_Hashtable_traitsILb1ELb0ELb1EEEEaSERKSF__2(
           (unsigned __int64 *)(a1 + 172),
           a2);
}


char *__fastcall StoreCatalogItem::getTags(StoreCatalogItem *this)
{
  return (char *)this + 80;
}


int __fastcall StoreCatalogItem::getSkinPackIdentity(StoreCatalogItem *this, int a2)
{
  StoreCatalogItem *v2; // r4@1
  int v3; // r0@1
  int v4; // r5@1
  int result; // r0@4
  int v6; // r1@5
  int v7; // r2@5
  int v8; // r3@5

  v2 = this;
  v3 = *(_QWORD *)(a2 + 28) >> 32;
  v4 = *(_QWORD *)(a2 + 28);
  if ( v4 == v3 )
  {
LABEL_4:
    result = PackIdVersion::PackIdVersion(v2);
  }
  else
    while ( *(_BYTE *)(v4 + 40) != 5 )
    {
      v4 += 48;
      if ( v3 == v4 )
        goto LABEL_4;
    }
    v6 = *(_DWORD *)(v4 + 4);
    v7 = *(_DWORD *)(v4 + 8);
    v8 = *(_DWORD *)(v4 + 12);
    *(_DWORD *)v2 = *(_DWORD *)v4;
    *((_DWORD *)v2 + 1) = v6;
    *((_DWORD *)v2 + 2) = v7;
    *((_DWORD *)v2 + 3) = v8;
    SemVersion::SemVersion((int)v2 + 16, v4 + 16);
    result = *(_BYTE *)(v4 + 40);
    *((_BYTE *)v2 + 40) = result;
  return result;
}


int __fastcall StoreCatalogItem::getStorePriority(StoreCatalogItem *this)
{
  Json::Value *v1; // r4@1
  Json::Value *v2; // r4@3
  int result; // r0@5

  v1 = (StoreCatalogItem *)((char *)this + 48);
  if ( Json::Value::isNull((StoreCatalogItem *)((char *)this + 48))
    || Json::Value::isObject(v1) != 1
    || (v2 = (Json::Value *)Json::Value::operator[]((int)v1, "storePriority"), !Json::Value::isInt(v2))
    && Json::Value::isUInt(v2) != 1 )
  {
    result = 0;
  }
  else
    result = j_j_j__ZNK4Json5Value5asIntEi_1(v2, 0);
  return result;
}


void __fastcall StoreCatalogItem::_setMashupTabs(StoreCatalogItem *this)
{
  StoreCatalogItem *v1; // r9@1
  int v2; // r10@1
  int v3; // r5@1
  int v4; // r7@2
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // r1@11
  void *v8; // r0@11
  Json::Value *v9; // r6@13
  Json::Value *v10; // r8@14
  void *v11; // r0@16
  void *v12; // r7@16
  int v13; // r7@19
  void *v14; // r0@25
  void *v15; // r0@26
  int v16; // r0@31
  __int64 v17; // kr00_8@37
  void *v18; // r0@40
  int *v19; // r5@42
  signed int v20; // r1@43
  unsigned int *v21; // r2@47
  int *v22; // lr@48
  signed int v23; // r1@49
  int v24; // r0@55
  int v25; // r11@55
  void *v26; // r0@55
  int v27; // r8@58
  void *v28; // r0@64
  void *v29; // r0@68
  __int64 v30; // r0@68
  void *v31; // r0@70
  __int64 v32; // r0@70
  void *v33; // r0@73
  unsigned int *v34; // r2@78
  unsigned int *v35; // r2@86
  signed int v36; // r1@88
  unsigned int *v37; // r2@90
  signed int v38; // r1@92
  unsigned int *v39; // r2@94
  signed int v40; // r1@96
  unsigned __int64 *v41; // [sp+Ch] [bp-64h]@1
  int v42; // [sp+10h] [bp-60h]@47
  int v43; // [sp+14h] [bp-5Ch]@42
  int v44; // [sp+18h] [bp-58h]@55
  int v45; // [sp+1Ch] [bp-54h]@65
  char v46; // [sp+20h] [bp-50h]@41
  char v47; // [sp+28h] [bp-48h]@41
  int v48; // [sp+34h] [bp-3Ch]@28
  int v49; // [sp+38h] [bp-38h]@37
  int v50; // [sp+40h] [bp-30h]@16
  int v51; // [sp+44h] [bp-2Ch]@16

  v1 = this;
  v2 = *((_DWORD *)this + 23);
  v41 = (unsigned __int64 *)((char *)this + 92);
  v3 = *((_DWORD *)this + 24);
  if ( v3 != v2 )
  {
    v4 = *((_DWORD *)this + 23);
    do
    {
      v7 = *(_DWORD *)(v4 + 4);
      v8 = (void *)(v7 - 12);
      if ( (int *)(v7 - 12) != &dword_28898C0 )
      {
        v5 = (unsigned int *)(v7 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v8);
      }
      v4 += 8;
    }
    while ( v4 != v3 );
  }
  *((_DWORD *)v1 + 24) = v2;
  v9 = (Json::Value *)PropertyBag::toJsonValue((StoreCatalogItem *)((char *)v1 + 48));
  if ( !Json::Value::isNull(v9) )
    v10 = (Json::Value *)Json::Value::operator[]((int)v9, "packIdentity");
    if ( !Json::Value::empty(v10) )
      if ( (unsigned int)Json::Value::size(v10) > 1 )
        goto LABEL_112;
      v11 = Json::Value::operator[]((int)v10, 0);
      v12 = Json::Value::operator[]((int)v11, "type");
      sub_119C884((void **)&v50, (const char *)&unk_257BC67);
      Json::Value::asString(&v51, (int)v12, &v50);
      if ( sub_119C9E8((const void **)&v51, "skinpack") )
        if ( sub_119C9E8((const void **)&v51, "resourcepack") )
          if ( sub_119C9E8((const void **)&v51, "worldtemplate") )
          {
            v13 = sub_119C9E8((const void **)&v51, "home");
            if ( v13 )
              v13 = 5;
          }
          else
            v13 = 3;
          v13 = 1;
      else
        v13 = 2;
      v14 = (void *)(v51 - 12);
      if ( (int *)(v51 - 12) != &dword_28898C0 )
        v37 = (unsigned int *)(v51 - 4);
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
          v38 = (*v37)--;
        if ( v38 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v14);
      v15 = (void *)(v50 - 12);
      if ( (int *)(v50 - 12) != &dword_28898C0 )
        v39 = (unsigned int *)(v50 - 4);
            v40 = __ldrex(v39);
          while ( __strex(v40 - 1, v39) );
          v40 = (*v39)--;
        if ( v40 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v15);
      if ( v13 == 3 )
LABEL_112:
        sub_119C884((void **)&v48, "home");
        if ( sub_119C9E8((const void **)&v48, "skinpack") )
          if ( sub_119C9E8((const void **)&v48, "resourcepack") )
            if ( sub_119C9E8((const void **)&v48, "worldtemplate") )
            {
              v16 = sub_119C9E8((const void **)&v48, "home");
              if ( v16 )
                v16 = 5;
            }
            else
              v16 = 3;
            v16 = 1;
          v16 = 2;
        v49 = v16;
        v17 = *((_QWORD *)v1 + 12);
        if ( (_DWORD)v17 == HIDWORD(v17) )
          std::vector<StoreItemMashupData,std::allocator<StoreItemMashupData>>::_M_emplace_back_aux<MashupTabType,std::string const&>(
            v41,
            &v49,
            (int *)&Util::EMPTY_STRING);
          *(_DWORD *)v17 = v16;
          sub_119C854((int *)(v17 + 4), (int *)&Util::EMPTY_STRING);
          *((_DWORD *)v1 + 24) += 8;
        v18 = (void *)(v48 - 12);
        if ( (int *)(v48 - 12) != &dword_28898C0 )
          v35 = (unsigned int *)(v48 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v36 = __ldrex(v35);
            while ( __strex(v36 - 1, v35) );
            v36 = (*v35)--;
          if ( v36 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v18);
        Json::Value::begin((Json::Value *)&v47, (int)v10);
        Json::Value::end((Json::Value *)&v46, (int)v10);
        if ( !Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v47, (const Json::ValueIteratorBase *)&v46) )
          v19 = &v43;
            v24 = Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v47);
            v25 = v24;
            v26 = Json::Value::operator[](v24, "type");
            Json::Value::asString(&v44, (int)v26, (int *)&Util::EMPTY_STRING);
            if ( sub_119C9E8((const void **)&v44, "skinpack") )
              if ( sub_119C9E8((const void **)&v44, "resourcepack") )
              {
                if ( sub_119C9E8((const void **)&v44, "worldtemplate") )
                {
                  v27 = sub_119C9E8((const void **)&v44, "home");
                  if ( v27 )
                    v27 = 5;
                }
                else
                  v27 = 3;
              }
              else
                v27 = 1;
              v27 = 2;
            v28 = (void *)(v44 - 12);
            if ( (int *)(v44 - 12) != &dword_28898C0 )
              v34 = (unsigned int *)(v44 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v20 = __ldrex(v34);
                while ( __strex(v20 - 1, v34) );
                v20 = (*v34)--;
              if ( v20 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v28);
            v45 = v27;
            if ( v27 == 5 )
              goto LABEL_84;
            if ( *((_DWORD *)v1 + 10) == 5 )
              if ( v27 == 1 )
                goto LABEL_84;
              v29 = Json::Value::operator[](v25, "uuid");
              Json::Value::asString(&v42, (int)v29, (int *)&Util::EMPTY_STRING);
              v30 = *((_QWORD *)v1 + 12);
              if ( (_DWORD)v30 == HIDWORD(v30) )
                std::vector<StoreItemMashupData,std::allocator<StoreItemMashupData>>::_M_emplace_back_aux<MashupTabType &,std::string>(
                  v41,
                  &v45,
                  &v42);
                *(_DWORD *)v30 = v27;
                sub_119C854((int *)(v30 + 4), &v42);
                *((_DWORD *)v1 + 24) += 8;
              v19 = &v43;
              v33 = (void *)(v42 - 12);
              if ( (int *)(v42 - 12) == &dword_28898C0 )
              v21 = (unsigned int *)(v42 - 4);
                v22 = &v43;
                  v23 = __ldrex(v21);
                while ( __strex(v23 - 1, v21) );
LABEL_50:
                v19 = v22;
                goto LABEL_52;
              v31 = Json::Value::operator[](v25, "uuid");
              Json::Value::asString(v19, (int)v31, (int *)&Util::EMPTY_STRING);
              v32 = *((_QWORD *)v1 + 12);
              if ( (_DWORD)v32 == HIDWORD(v32) )
                  v19);
                *(_DWORD *)v32 = v27;
                sub_119C854((int *)(v32 + 4), v19);
              v33 = (void *)(v43 - 12);
              if ( (int *)(v43 - 12) == &dword_28898C0 )
              v21 = (unsigned int *)(v43 - 4);
                v22 = v19;
                goto LABEL_50;
            v23 = (*v21)--;
LABEL_52:
            if ( v23 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v33);
LABEL_84:
            Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v47);
          while ( !Json::ValueIteratorBase::isEqual(
                     (Json::ValueIteratorBase *)&v47,
                     (const Json::ValueIteratorBase *)&v46) );
}


signed int __fastcall StoreCatalogItem::isOwned(StoreCatalogItem *this)
{
  __int64 v1; // r4@0
  bool v2; // zf@1
  Entitlement *v3; // t1@5

  v2 = *((_BYTE *)this + 105) == 0;
  if ( *((_BYTE *)this + 105) )
  {
    v1 = *(_QWORD *)((char *)this + 108);
    v2 = HIDWORD(v1) == (_DWORD)v1;
  }
  if ( v2 )
    return 0;
  if ( (_DWORD)v1 != HIDWORD(v1) )
    while ( 1 )
    {
      v3 = *(Entitlement **)v1;
      LODWORD(v1) = v1 + 4;
      if ( !Entitlement::isOwned(v3) )
        break;
      if ( HIDWORD(v1) == (_DWORD)v1 )
        return 1;
    }
  return 1;
}


char *__fastcall StoreCatalogItem::setEntitlement(StoreCatalogItem *this, Entitlement *a2)
{
  StoreCatalogItem *v2; // r4@1
  Entitlement *v3; // r8@1
  __int64 v4; // r0@1
  char *result; // r0@2
  void *v6; // r5@3
  unsigned int v7; // r2@3
  unsigned int v8; // r1@5
  unsigned int v9; // r6@5
  char *v10; // r7@11 OVERLAPPED
  char *v11; // r8@13
  int v12; // r8@15 OVERLAPPED

  v2 = this;
  v3 = a2;
  v4 = *((_QWORD *)this + 14);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v6 = (void *)*((_DWORD *)v2 + 27);
    v7 = ((signed int)v4 - (signed int)v6) >> 2;
    if ( !v7 )
      v7 = 1;
    HIDWORD(v4) = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    v9 = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    if ( 0 != HIDWORD(v4) >> 30 )
      v9 = 0x3FFFFFFF;
    if ( v8 < v7 )
    if ( v9 )
    {
      if ( v9 >= 0x40000000 )
        sub_119C874();
      v10 = (char *)operator new(4 * v9);
      LODWORD(v4) = *(_QWORD *)((char *)v2 + 108) >> 32;
      v6 = (void *)*(_QWORD *)((char *)v2 + 108);
    }
    else
      v10 = 0;
    *(_DWORD *)&v10[v4 - (_DWORD)v6] = v3;
    v11 = &v10[v4 - (_DWORD)v6];
    if ( 0 != ((signed int)v4 - (signed int)v6) >> 2 )
      _aeabi_memmove4(v10, v6);
    v12 = (int)(v11 + 4);
    if ( v6 )
      operator delete(v6);
    result = &v10[4 * v9];
    *(_QWORD *)((char *)v2 + 108) = *(_QWORD *)&v10;
    *((_DWORD *)v2 + 29) = result;
  }
  else
    *(_DWORD *)v4 = v3;
    result = (char *)(*((_DWORD *)v2 + 28) + 4);
    *((_DWORD *)v2 + 28) = result;
  return result;
}


         || (v96 = *(_DWORD *)(v65 + 272), v96 < StoreCatalogItem::getItemPerformanceRequirements(v95)))
{
      {
        v167 = 0;
        v99 = (void (__fastcall *)(char *, int, signed int))v64[19];
        if ( v99 )
        {
          v99(&v166, v159, 2);
          v168 = v64[20];
          v167 = (void (*)(void))v64[19];
        }
        v164 = v191;
        v165 = v192;
        if ( v192 )
          v100 = (unsigned int *)(v192 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v101 = __ldrex(v100);
            while ( __strex(v101 + 1, v100) );
          }
          else
            ++*v100;
        sub_119C854(&v163, v64 + 16);
        StoreCatalogRepository::_onFileFetched(v65, v161, (int)&v166, (unsigned __int64 **)&v164, &v163, v66);
        v140 = (void *)(v163 - 12);
        if ( (int *)(v163 - 12) != &dword_28898C0 )
          v152 = (unsigned int *)(v163 - 4);
              v153 = __ldrex(v152);
            while ( __strex(v153 - 1, v152) );
            v153 = (*v152)--;
          if ( v153 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v140);
        v141 = v165;
        if ( v165 )
          v142 = (unsigned int *)(v165 + 4);
              v143 = __ldrex(v142);
            while ( __strex(v143 - 1, v142) );
            v143 = (*v142)--;
          if ( v143 == 1 )
            v144 = (unsigned int *)(v141 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v141 + 8))(v141);
            if ( &pthread_create )
            {
              __dmb();
              do
                v145 = __ldrex(v144);
              while ( __strex(v145 - 1, v144) );
            }
            else
              v145 = (*v144)--;
            if ( v145 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v141 + 12))(v141);
        if ( v167 )
          v167();
      }
      else
        v97 = v191;
        v98 = *(_QWORD *)(v191 + 4);
        if ( (_DWORD)v98 == HIDWORD(v98) )
          std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>::_M_emplace_back_aux<StoreCatalogItem *&>(
            (_QWORD *)v191,
            (void **)&v185);
        else
          StoreCatalogItemModel::StoreCatalogItemModel((_DWORD *)v98, (void *)v95);
          *(_DWORD *)(v97 + 4) += 4;
        StoreCatalogItem::setTitle(v95, (int *)(v80 + 12));
        StoreCatalogItem::setDescription(v95, (int *)(v80 + 16));
        v114 = *(ContentCatalogService **)(v65 + 4);
        v115 = (unsigned int *)StoreCatalogItem::getThumbnailUrl(v95);
        getFetchImageParams((const void **)&v184, v115, &Util::EMPTY_STRING);
        v169 = v65;
        v170 = v161;
        v172 = 0;
        v116 = (void (__fastcall *)(int *, int, signed int))v64[19];
        if ( v116 )
          v116(&v171, v159, 2);
          v173 = v64[20];
          v172 = (void (*)(void))v64[19];
        v174 = v95;
        v175 = v191;
        v176 = v192;
          v117 = (unsigned int *)(v192 + 4);
              v118 = __ldrex(v117);
            while ( __strex(v118 + 1, v117) );
            ++*v117;
        StoreSearchQuery::StoreSearchQuery(v91, v64 + 1);
        v119 = *(_QWORD *)(v64 + 13);
        v120 = 0;
        v178 = 0;
        v179 = 0;
        v180 = 0;
        v121 = (HIDWORD(v119) - (signed int)v119) >> 2;
        if ( v121 )
          if ( v121 >= 0x40000000 )
            sub_119C874();
          v120 = (char *)operator new(HIDWORD(v119) - v119);
          v119 = *(_QWORD *)(v64 + 13);
        v178 = v120;
        v179 = v120;
        v180 = &v120[4 * v121];
        v160 = v66;
        v122 = v65;
        v179 = (char *)std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                         v119,
                         SHIDWORD(v119),
                         (int)v120);
        v182 = 0;
        v123 = operator new(0x70u);
        v124 = (int)v123;
        *v123 = *(_QWORD *)&v169;
        v123[1] = *(_QWORD *)&v171;
        v125 = v172;
        *(_DWORD *)(v124 + 16) = v125;
        *(_DWORD *)(v124 + 20) = v173;
        *(_DWORD *)(v124 + 24) = v174;
        *(_DWORD *)(v124 + 28) = v175;
        v126 = v176;
        v176 = 0;
        v175 = 0;
        *(_DWORD *)(v124 + 32) = v126;
        StoreSearchQuery::StoreSearchQuery((int *)(v124 + 36), v91);
        v127 = *(_QWORD *)&v178;
        v128 = 0;
        *(_DWORD *)(v124 + 100) = 0;
        *(_DWORD *)(v124 + 104) = 0;
        *(_DWORD *)(v124 + 108) = 0;
        v129 = (HIDWORD(v127) - (signed int)v127) >> 2;
        if ( v129 )
          if ( v129 >= 0x40000000 )
          v128 = (char *)operator new(HIDWORD(v127) - v127);
          v127 = *(_QWORD *)&v178;
        *(_DWORD *)(v124 + 100) = v128;
        *(_DWORD *)(v124 + 104) = v128;
        *(_DWORD *)(v124 + 108) = &v128[4 * v129];
        *(_DWORD *)(v124 + 104) = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                                    v127,
                                    SHIDWORD(v127),
                                    (int)v128);
        v181 = v124;
        v183 = sub_10EC0A4;
        v182 = (void (*)(void))sub_10EC2F0;
        v91 = &v177;
        ContentCatalogService::fetchImageData(v114, &v184, (int)&v181);
        if ( v182 )
          v182();
        v130 = (int)v179;
        v131 = v178;
        v65 = v122;
        if ( v178 != v179 )
          do
            v134 = (int *)(*(_DWORD *)v131 - 12);
            if ( v134 != &dword_28898C0 )
              v132 = (unsigned int *)(*(_DWORD *)v131 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v133 = __ldrex(v132);
                while ( __strex(v133 - 1, v132) );
              }
              else
                v133 = (*v132)--;
              if ( v133 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v134);
            v131 += 4;
          while ( v131 != (char *)v130 );
          v131 = v178;
        v66 = v160;
        if ( v131 )
          operator delete(v131);
        StoreSearchQuery::~StoreSearchQuery((StoreSearchQuery *)&v177);
        v135 = v176;
        if ( v176 )
          v136 = (unsigned int *)(v176 + 4);
              v137 = __ldrex(v136);
            while ( __strex(v137 - 1, v136) );
            v137 = (*v136)--;
          if ( v137 == 1 )
            v138 = (unsigned int *)(v135 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v135 + 8))(v135);
                v139 = __ldrex(v138);
              while ( __strex(v139 - 1, v138) );
              v139 = (*v138)--;
            if ( v139 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v135 + 12))(v135);
        if ( v172 )
          v172();
        v146 = (void *)(v184 - 12);
        if ( (int *)(v184 - 12) != &dword_28898C0 )
          v147 = (unsigned int *)(v184 - 4);
              v148 = __ldrex(v147);
            while ( __strex(v148 - 1, v147) );
            v148 = (*v147)--;
          if ( v148 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v146);
      v80 += 68;
    }
    while ( v80 != v162 );
  }
  v154 = v192;
  if ( v192 )
  {
    v155 = (unsigned int *)(v192 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v156 = __ldrex(v155);
      while ( __strex(v156 - 1, v155) );
    else
      v156 = (*v155)--;
    if ( v156 == 1 )
      v157 = (unsigned int *)(v154 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v154 + 8))(v154);
      if ( &pthread_create )
        __dmb();
        do
          v158 = __ldrex(v157);
        while ( __strex(v158 - 1, v157) );
        v158 = (*v157)--;
      if ( v158 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v154 + 12))(v154);
}


StoreCatalogItem *__fastcall StoreCatalogItem::getPanoramaLocation(StoreCatalogItem *this, int a2)
{
  int v2; // r4@1
  StoreCatalogItem *v3; // r5@1
  int v4; // r0@1
  __int64 v5; // kr00_8@3
  StoreCatalogItem *result; // r0@4

  v2 = a2;
  v3 = this;
  v4 = std::_Hashtable<std::string,std::pair<std::string const,std::vector<ResourceLocation,std::allocator<ResourceLocation>>>,std::allocator<std::pair<std::string const,std::vector<ResourceLocation,std::allocator<ResourceLocation>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)this + 15,
         (int **)algn_27D6C34);
  if ( v2 >= 0 && v4 && (v5 = *(_QWORD *)(v4 + 8), (HIDWORD(v5) - (signed int)v5) >> 3 > v2) )
    result = (StoreCatalogItem *)(v5 + 8 * v2);
  else
    result = (StoreCatalogItem *)((char *)v3 + 228);
  return result;
}


             || (v29 = *(_DWORD *)(v6 + 272), v29 < StoreCatalogItem::getItemPerformanceRequirements(v28)))
{
          {
            v32 = 0;
            v33 = *(_DWORD *)(v3 + 4);
            v48 = 0;
            v34 = *(void (__fastcall **)(char *, int, signed int))(v3 + 16);
            if ( v34 )
            {
              v34(&v47, v45, 2);
              v49 = *(void (__fastcall **)(char *))(v3 + 20);
              v32 = *(void (**)(void))(v3 + 16);
              v48 = *(void (**)(void))(v3 + 16);
            }
            v35 = *(_DWORD *)(v6 + 244);
            v36 = *(_DWORD *)(v35 + 4 * v46) - 1;
            *(_DWORD *)(v35 + 4 * v46) = v36;
            if ( !v36 )
              StoreCatalogRepository::_sortCatalogRow(v35, v33);
              if ( v48 )
              {
                v49(&v47);
                v32 = v48;
              }
              else
                v32 = 0;
              *(_BYTE *)(v6 + 241) = 1;
            if ( v32 )
              v32();
          }
          else
            v30 = *(_DWORD *)(v3 + 4);
            v31 = *(_QWORD *)(v30 + 28);
            if ( (_DWORD)v31 == HIDWORD(v31) )
              std::vector<StoreCatalogItemModel,std::allocator<StoreCatalogItemModel>>::_M_emplace_back_aux<StoreCatalogItem *&>(
                (_QWORD *)(v30 + 24),
                (void **)&v61);
            else
              StoreCatalogItemModel::StoreCatalogItemModel((_DWORD *)v31, (void *)v28);
              *(_DWORD *)(v30 + 28) += 4;
            StoreCatalogItem::setTitle(v28, (int *)(v5 + 12));
            StoreCatalogItem::setDescription(v28, (int *)(v5 + 16));
            v37 = *(ContentCatalogService **)(v6 + 4);
            v38 = (unsigned int *)StoreCatalogItem::getThumbnailUrl(v28);
            getFetchImageParams((const void **)&v60, v38, &Util::EMPTY_STRING);
            v39 = 0;
            v50 = v6;
            v51 = v46;
            v53 = 0;
            v40 = *(void (__fastcall **)(int *, int, signed int))(v3 + 16);
            if ( v40 )
              v40(&v52, v45, 2);
              v54 = *(_DWORD *)(v3 + 20);
              v39 = *(_DWORD *)(v3 + 16);
              v53 = *(void (**)(void))(v3 + 16);
            v55 = *(_DWORD *)(v3 + 4);
            v56 = v28;
            v58 = 0;
            v41 = operator new(0x20u);
            *v41 = *(_QWORD *)&v50;
            v41[1] = *(_QWORD *)&v52;
            v42 = v54;
            *((_DWORD *)v41 + 4) = v39;
            *((_DWORD *)v41 + 5) = v42;
            v41[3] = *(_QWORD *)&v55;
            v57 = v41;
            v59 = sub_10ECA7A;
            v58 = (void (*)(void))sub_10ECB16;
            ContentCatalogService::fetchImageData(v37, &v60, (int)&v57);
            if ( v58 )
              v58();
            v19 = 0;
            if ( v53 )
              v53();
            v43 = (void *)(v60 - 12);
            if ( (int *)(v60 - 12) != &dword_28898C0 )
              v44 = (unsigned int *)(v60 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v20 = __ldrex(v44);
                while ( __strex(v20 - 1, v44) );
                v20 = (*v44)--;
              if ( v20 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v43);
        }
        v5 += 68;
      }
      while ( v5 != v4 );
    }
  }
}


char *__fastcall StoreCatalogItem::getMetadataRaw(StoreCatalogItem *this)
{
  return (char *)this + 72;
}


int __fastcall StoreCatalogItem::getInstallState(StoreCatalogItem *this)
{
  if ( !*((_DWORD *)this + 65) )
    sub_119C8E4();
  return (*((int (__fastcall **)(_DWORD, _DWORD))this + 66))((char *)this + 252, (char *)this + 28);
}


char *__fastcall StoreCatalogItem::getCreatorName(StoreCatalogItem *this)
{
  return (char *)this + 4;
}


signed int __fastcall StoreCatalogItem::isInstalled(StoreCatalogItem *this)
{
  unsigned int v1; // r1@2
  signed int result; // r0@2

  if ( !*((_DWORD *)this + 65) )
    sub_119C8E4();
  v1 = (*((int (__fastcall **)(_DWORD, _DWORD))this + 66))((char *)this + 252, (char *)this + 28) - 1;
  result = 0;
  if ( v1 < 2 )
    result = 1;
  return result;
}


unsigned int __fastcall StoreCatalogItem::_setPerformanceTierRequirement(StoreCatalogItem *this)
{
  StoreCatalogItem *v1; // r4@1
  Json::Value *v2; // r5@1
  Json::Value *v3; // r5@3
  unsigned int result; // r0@5
  StoreCatalogItem *v5; // r1@5

  v1 = this;
  v2 = (StoreCatalogItem *)((char *)this + 48);
  if ( !Json::Value::isNull((StoreCatalogItem *)((char *)this + 48))
    && Json::Value::isObject(v2) == 1
    && ((v3 = (Json::Value *)Json::Value::operator[]((int)v2, "minPerformanceTier"), Json::Value::isInt(v3))
     || Json::Value::isUInt(v3)) )
  {
    result = Json::Value::asInt(v3, 0);
    v5 = (StoreCatalogItem *)((char *)v1 + 44);
    if ( result > 2 )
    {
      *(_DWORD *)v5 = 0;
      return result;
    }
  }
  else
    result = 0;
  *(_DWORD *)v5 = result;
  return result;
}


void __fastcall StoreCatalogItem::setTitle(I18n *a1, int *a2)
{
  int *v2; // r4@1
  I18n *v3; // r5@1
  int v4; // r0@1
  int *v5; // r0@1
  void *v6; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  v4 = I18n::getCurrentLanguage(a1);
  Localization::getFullLanguageCode((Localization *)&v9, v4);
  v5 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                (int)v3 + 172,
                (int **)&v9);
  EntityInteraction::setInteractText(v5, v2);
  v6 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
}


char *__fastcall StoreCatalogItem::getMetadata(StoreCatalogItem *this)
{
  return (char *)this + 48;
}


int __fastcall StoreCatalogItem::_getImageByPropertyandIndex(int a1, int **a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  int v5; // r0@1
  __int64 v6; // kr00_8@3
  int result; // r0@4

  v3 = a1;
  v4 = a3;
  v5 = std::_Hashtable<std::string,std::pair<std::string const,std::vector<ResourceLocation,std::allocator<ResourceLocation>>>,std::allocator<std::pair<std::string const,std::vector<ResourceLocation,std::allocator<ResourceLocation>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)(a1 + 120),
         a2);
  if ( v4 >= 0 && v5 && (v6 = *(_QWORD *)(v5 + 8), (HIDWORD(v6) - (signed int)v6) >> 3 > v4) )
    result = v6 + 8 * v4;
  else
    result = v3 + 228;
  return result;
}


char *__fastcall StoreCatalogItem::getPackIdentities(StoreCatalogItem *this)
{
  return (char *)this + 28;
}


const void **__fastcall StoreCatalogItem::_setIsFeatured(StoreCatalogItem *this)
{
  StoreCatalogItem *v1; // r4@1
  const void **v2; // r5@1
  const void **result; // r0@1

  v1 = this;
  *((_BYTE *)this + 106) = 0;
  v2 = (const void **)(*((_QWORD *)this + 10) >> 32);
  result = std::__find_if<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__ops::_Iter_equals_val<std::string const>>(
             *((_QWORD *)this + 10),
             v2,
             (const void **)&unk_27D6C40);
  if ( result != v2 )
  {
    result = (const void **)1;
    *((_BYTE *)v1 + 106) = 1;
  }
  return result;
}


void __fastcall StoreCatalogItem::hydrateItem(int a1, ContentCatalogService *a2, int *a3)
{
  int v3; // r5@1
  ContentCatalogService *v4; // r4@1
  _DWORD *v5; // r0@2
  __int64 v6; // r1@2
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  char *v10; // r0@7
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  unsigned int *v13; // r2@13
  signed int v14; // r1@15
  unsigned int *v15; // r2@17
  signed int v16; // r1@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  _DWORD *v19; // [sp+0h] [bp-38h]@2
  __int64 v20; // [sp+8h] [bp-30h]@2
  char *v21; // [sp+10h] [bp-28h]@2
  int v22; // [sp+14h] [bp-24h]@2
  int v23; // [sp+18h] [bp-20h]@5
  int v24; // [sp+1Ch] [bp-1Ch]@4

  v3 = a1;
  v4 = a2;
  if ( !*(_BYTE *)(a1 + 107) )
  {
    *(_BYTE *)(a1 + 107) = 1;
    v21 = (char *)&unk_28898CC;
    HydrateParams::HydrateParams(&v22, (int *)a1, a3, &v21);
    v5 = operator new(8u);
    LODWORD(v6) = sub_10E19CC;
    *v5 = v3;
    v5[1] = v4;
    HIDWORD(v6) = sub_10E1988;
    v19 = v5;
    v20 = v6;
    ContentCatalogService::hydrateItem(v4, &v22, (int)&v19);
    if ( (_DWORD)v20 )
      ((void (*)(void))v20)();
    v7 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
    {
      v11 = (unsigned int *)(v24 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v7);
    }
    v8 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v23 - 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v8);
    v9 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v22 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v9);
    v10 = v21 - 12;
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v21 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v10);
  }
}


void __fastcall StoreCatalogItem::_setCreatorName(StoreCatalogItem *this)
{
  StoreCatalogItem::_setCreatorName(this);
}
