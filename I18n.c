

void __fastcall I18n::getPackKeywordValue(int *a1, const PackManifest *a2, int *a3)
{
  int *v3; // r5@1
  const PackManifest *v4; // r6@1
  int *v5; // r4@1
  const void **v6; // r0@2
  void *v7; // r0@2
  void *v8; // r4@4
  void *v9; // r6@4
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  int *v12; // r0@14
  int v13; // r0@18
  void *v14; // r6@18
  unsigned int *v15; // r2@20
  signed int v16; // r1@22
  int *v17; // r0@28
  char *v18; // r0@33
  unsigned int *v19; // r2@35
  signed int v20; // r1@37
  unsigned int *v21; // r2@39
  signed int v22; // r1@41
  __int64 v23; // [sp+0h] [bp-48h]@18
  int v24; // [sp+8h] [bp-40h]@18
  __int64 v25; // [sp+Ch] [bp-3Ch]@4
  int v26; // [sp+14h] [bp-34h]@4
  int v27; // [sp+18h] [bp-30h]@2
  char *v28; // [sp+1Ch] [bp-2Ch]@2

  v3 = a3;
  v4 = a2;
  v5 = a1;
  sub_21E8AF4(a1, a3);
  if ( !I18n::mCurrentPackMetaLanguage )
    return;
  I18n::_generatePackKeyPrefix((I18n *)&v27, v4);
  v6 = sub_21E72F0((const void **)&v27, (const void **)v3);
  v28 = (char *)*v6;
  *v6 = &unk_28898CC;
  v7 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v27 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  if ( Localization::getStringIdExists(I18n::mCurrentPackMetaLanguage, (const void **)&v28) == 1 )
    v25 = 0LL;
    v26 = 0;
    Localization::get(I18n::mCurrentPackMetaLanguage, (int *)&v28, v5, (unsigned __int64 *)&v25);
    v9 = (void *)HIDWORD(v25);
    v8 = (void *)v25;
    if ( (_DWORD)v25 != HIDWORD(v25) )
      {
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
            j_j_j_j__ZdlPv_9(v12);
        }
        v8 = (char *)v8 + 4;
      }
      while ( v8 != v9 );
      v8 = (void *)v25;
LABEL_31:
    if ( v8 )
      operator delete(v8);
    goto LABEL_33;
  if ( Localization::getStringIdExists(*(_DWORD *)I18n::mPackKeywordLanguages, (const void **)&v28) == 1 )
    v13 = *(_DWORD *)I18n::mPackKeywordLanguages;
    v23 = 0LL;
    v24 = 0;
    Localization::get(v13, (int *)&v28, v5, (unsigned __int64 *)&v23);
    v14 = (void *)HIDWORD(v23);
    v8 = (void *)v23;
    if ( (_DWORD)v23 != HIDWORD(v23) )
        v17 = (int *)(*(_DWORD *)v8 - 12);
        if ( v17 != &dword_28898C0 )
          v15 = (unsigned int *)(*(_DWORD *)v8 - 4);
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
            v16 = (*v15)--;
          if ( v16 <= 0 )
            j_j_j_j__ZdlPv_9(v17);
      while ( v8 != v14 );
      v8 = (void *)v23;
    goto LABEL_31;
LABEL_33:
  v18 = v28 - 12;
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v28 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
}


signed int __fastcall I18n::_findAvailableLanguageNames(int a1, unsigned __int64 *a2)
{
  int v2; // r5@1
  unsigned __int64 *v3; // r4@1
  signed int result; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  unsigned int *v9; // r2@11
  signed int v10; // r1@13
  unsigned int *v11; // r2@15
  signed int v12; // r1@17
  Json::Value *v13; // r11@35
  void *v14; // r7@36
  void *v15; // r0@36
  void *v16; // r7@37
  void *v17; // r0@37
  int *v18; // r0@40
  void *v19; // r0@41
  void *v20; // r0@42
  int v21; // [sp+Ch] [bp-4Ch]@7
  int v22; // [sp+10h] [bp-48h]@11
  int v23; // [sp+18h] [bp-40h]@3
  int v24; // [sp+1Ch] [bp-3Ch]@15
  char v25; // [sp+20h] [bp-38h]@1
  char v26; // [sp+28h] [bp-30h]@1

  v2 = a1;
  v3 = a2;
  Json::Value::begin((Json::Value *)&v26, a1);
  Json::Value::end((Json::Value *)&v25, v2);
  for ( result = Json::ValueIteratorBase::isEqual(
                   (Json::ValueIteratorBase *)&v26,
                   (const Json::ValueIteratorBase *)&v25);
        !result;
        result = Json::ValueIteratorBase::isEqual(
                   (const Json::ValueIteratorBase *)&v25) )
  {
    v13 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v26);
    if ( Json::Value::isArray(v13) == 1 )
    {
      v14 = Json::Value::operator[]((int)v13, 0);
      sub_21E94B4((void **)&v23, (const char *)&unk_257BC67);
      Json::Value::asString(&v24, (int)v14, &v23);
      v15 = (void *)(v23 - 12);
      if ( (int *)(v23 - 12) != &dword_28898C0 )
      {
        v5 = (unsigned int *)(v23 - 4);
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
          j_j_j_j__ZdlPv_9(v15);
      }
      v16 = Json::Value::operator[]((int)v13, 1u);
      sub_21E94B4((void **)&v21, (const char *)&unk_257BC67);
      Json::Value::asString(&v22, (int)v16, &v21);
      v17 = (void *)(v21 - 12);
      if ( (int *)(v21 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v21 - 4);
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      if ( *(_DWORD *)(v22 - 12)
        || !*(_DWORD *)(*(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                                     v3,
                                     (int **)&v24)
                      - 12) )
        v18 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                       v3,
                       (int **)&v24);
        EntityInteraction::setInteractText(v18, &v22);
      v19 = (void *)(v22 - 12);
      if ( (int *)(v22 - 12) != &dword_28898C0 )
        v9 = (unsigned int *)(v22 - 4);
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v20 = (void *)(v24 - 12);
      if ( (int *)(v24 - 12) != &dword_28898C0 )
        v11 = (unsigned int *)(v24 - 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
    }
    Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v26);
  }
  return result;
}


const void **__fastcall I18n::getLanguageName(int **a1)
{
  int v1; // r0@1
  const void **v2; // r1@1

  v1 = std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)&I18n::mLanguageNames,
         a1);
  v2 = &Util::EMPTY_STRING;
  if ( v1 )
    v2 = (const void **)(v1 + 8);
  return v2;
}


int __fastcall I18n::_addFormatToDictionary(int **a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // r4@1
  int v3; // r0@1

  v2 = a2;
  v3 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
         (unsigned __int64 *)&I18n::mFormatDictionary,
         a1);
  return j_j_j__ZNSt6vectorISsSaISsEEaSERKS1__2(v3, v2);
}


int __fastcall I18n::hasPackKeyEntry(PackManifest *a1, const void **a2)
{
  const void **v2; // r4@1
  const void **v3; // r0@2
  void *v4; // r0@2
  signed int v5; // r4@4
  char *v6; // r0@7
  unsigned int *v8; // r2@9
  signed int v9; // r1@11
  unsigned int *v10; // r2@13
  signed int v11; // r1@15
  int v12; // [sp+0h] [bp-28h]@2
  char *v13; // [sp+4h] [bp-24h]@2

  v2 = a2;
  if ( I18n::mCurrentPackMetaLanguage )
  {
    I18n::_generatePackKeyPrefix((I18n *)&v12, a1);
    v3 = sub_21E72F0((const void **)&v12, v2);
    v13 = (char *)*v3;
    *v3 = &unk_28898CC;
    v4 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v12 - 4);
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
        j_j_j_j__ZdlPv_9(v4);
    }
    if ( Localization::getStringIdExists(I18n::mCurrentPackMetaLanguage, (const void **)&v13) )
      v5 = 1;
    else
      v5 = Localization::getStringIdExists(*(_DWORD *)I18n::mPackKeywordLanguages, (const void **)&v13);
    v6 = v13 - 12;
    if ( (int *)(v13 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v13 - 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
  }
  else
    v5 = 0;
  return v5;
}


void __fastcall I18n::loadLanguages(ResourcePackManager *a1, SkinRepository *a2, const void **a3)
{
  __int64 v3; // kr00_8@4
  int *v4; // r10@5
  unsigned int *v5; // r2@6
  signed int v6; // r1@8
  int v7; // r6@14
  int v8; // r1@15
  void *v9; // r0@15
  __int64 v10; // kr08_8@18
  int *v11; // r10@19
  unsigned int *v12; // r2@20
  signed int v13; // r1@22
  int v14; // r6@28
  int v15; // r1@29
  void *v16; // r0@29
  __int64 v17; // kr10_8@32
  int v18; // r2@32
  _DWORD *v19; // r4@33
  unsigned int *v20; // r2@34
  signed int v21; // r1@36
  int *v22; // r0@42
  __int64 v23; // r4@46
  unsigned int *v24; // r2@48
  signed int v25; // r1@50
  int *v26; // r0@56
  int v27; // r4@61
  unsigned int *v28; // r2@63
  signed int v29; // r1@65
  unsigned int *v30; // r2@67
  signed int v31; // r1@69
  int v32; // r6@79
  int v33; // r1@79
  void *v34; // r0@79
  int v35; // r1@80
  void *v36; // r0@80
  int *v37; // r4@85
  void *v38; // r6@85
  int v39; // r0@85
  int *v40; // r4@88
  void *v41; // r6@88
  int v42; // r0@88
  int v43; // r4@90
  int v44; // r1@91
  void *v45; // r0@91
  const void **v46; // r0@93
  int *v47; // r0@95
  size_t v48; // r2@95
  const Localization *v49; // r1@96
  int v50; // r4@97
  void *v51; // r6@97
  int v52; // r0@97
  int v53; // r4@99
  int v54; // r1@100
  void *v55; // r0@100
  char *v56; // r0@104
  int v57; // r4@105
  int v58; // r1@106
  void *v59; // r0@106
  void *v60; // r0@108
  unsigned int *v61; // r2@110
  signed int v62; // r1@112
  unsigned int *v63; // r2@114
  signed int v64; // r1@116
  unsigned int *v65; // r2@118
  signed int v66; // r1@120
  unsigned int *v67; // r2@134
  signed int v68; // r1@136
  unsigned int *v69; // r2@138
  signed int v70; // r1@140
  const void **v71; // [sp+4h] [bp-74h]@1
  ResourcePackManager *v72; // [sp+8h] [bp-70h]@1
  SkinRepository *v73; // [sp+Ch] [bp-6Ch]@2
  int v74; // [sp+10h] [bp-68h]@97
  void *s1; // [sp+14h] [bp-64h]@95
  int v76; // [sp+18h] [bp-60h]@88
  int v77; // [sp+1Ch] [bp-5Ch]@85
  void *ptr; // [sp+20h] [bp-58h]@61
  int v79; // [sp+24h] [bp-54h]@82
  int v80; // [sp+28h] [bp-50h]@61
  int v81; // [sp+2Ch] [bp-4Ch]@82
  int v82; // [sp+38h] [bp-40h]@83
  int v83; // [sp+3Ch] [bp-3Ch]@32
  int v84; // [sp+40h] [bp-38h]@32
  int v85; // [sp+44h] [bp-34h]@32
  int v86; // [sp+4Ch] [bp-2Ch]@2

  v72 = a1;
  v71 = a3;
  if ( I18n::mCurrentLanguage )
  {
    v73 = a2;
    Localization::getFullLanguageCode((Localization *)&v86, I18n::mCurrentLanguage);
  }
  else
    sub_21E94B4((void **)&v86, (const char *)&unk_257BC67);
  I18n::mCurrentLanguage = 0;
  v3 = *(_QWORD *)&I18n::mLanguages;
  if ( dword_27E99C4 != I18n::mLanguages )
    v4 = (int *)I18n::mLanguages;
    do
    {
      v7 = *v4;
      if ( *v4 )
      {
        std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
          v7 + 8,
          *(_DWORD *)(v7 + 16));
        v8 = *(_DWORD *)(v7 + 4);
        v9 = (void *)(v8 - 12);
        if ( (int *)(v8 - 12) != &dword_28898C0 )
        {
          v5 = (unsigned int *)(v8 - 4);
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
            j_j_j_j__ZdlPv_9(v9);
        }
        operator delete((void *)v7);
      }
      *v4 = 0;
      ++v4;
    }
    while ( v4 != (int *)HIDWORD(v3) );
  dword_27E99C4 = v3;
  v10 = *(_QWORD *)&I18n::mAdditionalTranslationsBackup;
  if ( dword_27E99DC != I18n::mAdditionalTranslationsBackup )
    v11 = (int *)I18n::mAdditionalTranslationsBackup;
      v14 = *v11;
      if ( *v11 )
          v14 + 8,
          *(_DWORD *)(v14 + 16));
        v15 = *(_DWORD *)(v14 + 4);
        v16 = (void *)(v15 - 12);
        if ( (int *)(v15 - 12) != &dword_28898C0 )
          v12 = (unsigned int *)(v15 - 4);
              v13 = __ldrex(v12);
            while ( __strex(v13 - 1, v12) );
            v13 = (*v12)--;
          if ( v13 <= 0 )
            j_j_j_j__ZdlPv_9(v16);
        operator delete((void *)v14);
      *v11 = 0;
      ++v11;
    while ( v11 != (int *)HIDWORD(v10) );
  dword_27E99DC = v10;
  I18n::mSkinRepository = v73;
  I18n::mResourcePackManager = v72;
  I18n::findAvailableLanguages((I18n *)&v83, v72);
  v17 = *(_QWORD *)&I18n::mLanguageCodes;
  I18n::mLanguageCodes = v83;
  v83 = 0;
  v18 = v84;
  v84 = 0;
  dword_27E99D0 = v18;
  dword_27E99D4 = v85;
  v85 = 0;
  if ( (_DWORD)v17 != HIDWORD(v17) )
    v19 = (_DWORD *)v17;
      v22 = (int *)(*v19 - 12);
      if ( v22 != &dword_28898C0 )
        v20 = (unsigned int *)(*v19 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
        else
          v21 = (*v20)--;
        if ( v21 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      ++v19;
    while ( v19 != (_DWORD *)HIDWORD(v17) );
  if ( (_DWORD)v17 )
    operator delete((void *)v17);
  v23 = *(_QWORD *)&v83;
  if ( v83 != v84 )
      v26 = (int *)(*(_DWORD *)v23 - 12);
      if ( v26 != &dword_28898C0 )
        v24 = (unsigned int *)(*(_DWORD *)v23 - 4);
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 <= 0 )
          j_j_j_j__ZdlPv_9(v26);
      LODWORD(v23) = v23 + 4;
    while ( (_DWORD)v23 != HIDWORD(v23) );
    LODWORD(v23) = v83;
  if ( (_DWORD)v23 )
    operator delete((void *)v23);
  I18n::findAvailableLanguageNames((I18n *)&ptr, v72);
  std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_move_assign(
    (int)&I18n::mLanguageNames,
    (int)&ptr);
  v27 = v80;
  while ( v27 )
    v32 = v27;
    v33 = *(_DWORD *)(v27 + 8);
    v27 = *(_DWORD *)v27;
    v34 = (void *)(v33 - 12);
    if ( (int *)(v33 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v33 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
      else
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v34);
    v35 = *(_DWORD *)(v32 + 4);
    v36 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v35 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v36);
    operator delete((void *)v32);
  _aeabi_memclr4(ptr, 4 * v79);
  v80 = 0;
  v81 = 0;
  if ( ptr && &v82 != ptr )
    operator delete(ptr);
  v37 = (int *)I18n::mLanguageCodes;
  v38 = operator new(0x20u);
  Localization::Localization((int)v38, v37, 0);
  v77 = (int)v38;
  Localization::loadFromResourcePackManager((int)v38, (int *)v72, (__int64 *)&I18n::mPackReservedKeys);
  v39 = dword_27E99C4;
  if ( dword_27E99C4 == dword_27E99C8 )
    std::vector<std::unique_ptr<Localization,std::default_delete<Localization>>,std::allocator<std::unique_ptr<Localization,std::default_delete<Localization>>>>::_M_emplace_back_aux<std::unique_ptr<Localization,std::default_delete<Localization>>>(
      &I18n::mLanguages,
      &v77);
    v77 = 0;
    *(_DWORD *)dword_27E99C4 = v38;
    dword_27E99C4 = v39 + 4;
  v40 = (int *)I18n::mLanguageCodes;
  v41 = operator new(0x20u);
  Localization::Localization((int)v41, v40, 0);
  v76 = (int)v41;
  v42 = dword_27E99E8;
  if ( dword_27E99E8 == *(_DWORD *)algn_27E99EC )
      &I18n::mPackKeywordLanguages,
      &v76);
    v43 = v76;
    if ( v76 )
      std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
        v76 + 8,
        *(_DWORD *)(v76 + 16));
      v44 = *(_DWORD *)(v43 + 4);
      v45 = (void *)(v44 - 12);
      if ( (int *)(v44 - 12) != &dword_28898C0 )
        v67 = (unsigned int *)(v44 - 4);
            v68 = __ldrex(v67);
          while ( __strex(v68 - 1, v67) );
          v68 = (*v67)--;
        if ( v68 <= 0 )
          j_j_j_j__ZdlPv_9(v45);
      operator delete((void *)v43);
    v76 = 0;
    *(_DWORD *)dword_27E99E8 = v41;
    dword_27E99E8 = v42 + 4;
  v76 = 0;
  v46 = (const void **)&v86;
  if ( *((_DWORD *)*v71 - 3) )
    v46 = v71;
  v47 = (int *)I18n::_getLocaleCodeFor(v46);
  sub_21E8AF4((int *)&s1, v47);
  v48 = *((_DWORD *)s1 - 3);
  if ( v48 != *(_DWORD *)(*(_DWORD *)I18n::mLanguageCodes - 12) || memcmp(s1, *(const void **)I18n::mLanguageCodes, v48) )
    v50 = *(_DWORD *)I18n::mLanguages;
    v51 = operator new(0x20u);
    Localization::Localization((int)v51, (int *)&s1, v50);
    v74 = (int)v51;
    Localization::loadFromResourcePackManager((int)v51, (int *)v72, (__int64 *)&I18n::mPackReservedKeys);
    v52 = dword_27E99C4;
    if ( dword_27E99C4 == dword_27E99C8 )
      std::vector<std::unique_ptr<Localization,std::default_delete<Localization>>,std::allocator<std::unique_ptr<Localization,std::default_delete<Localization>>>>::_M_emplace_back_aux<std::unique_ptr<Localization,std::default_delete<Localization>>>(
        &I18n::mLanguages,
        &v74);
      v53 = v74;
      if ( v74 )
          v74 + 8,
          *(_DWORD *)(v74 + 16));
        v54 = *(_DWORD *)(v53 + 4);
        v55 = (void *)(v54 - 12);
        if ( (int *)(v54 - 12) != &dword_28898C0 )
          v69 = (unsigned int *)(v54 - 4);
              v70 = __ldrex(v69);
            while ( __strex(v70 - 1, v69) );
            v70 = (*v69)--;
          if ( v70 <= 0 )
            j_j_j_j__ZdlPv_9(v55);
        operator delete((void *)v53);
    else
      v74 = 0;
      v49 = (const Localization *)&I18n::mCurrentLanguage;
      *(_DWORD *)dword_27E99C4 = v51;
      dword_27E99C4 = v52 + 4;
  I18n::chooseLanguage(*(I18n **)(dword_27E99C4 - 4), v49);
  if ( v73 )
    SkinRepository::reloadSkinPackLocText(v73);
  v56 = (char *)s1 - 12;
  if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)((char *)s1 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v56);
  v57 = v77;
  if ( v77 )
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
      v77 + 8,
      *(_DWORD *)(v77 + 16));
    v58 = *(_DWORD *)(v57 + 4);
    v59 = (void *)(v58 - 12);
    if ( (int *)(v58 - 12) != &dword_28898C0 )
      v65 = (unsigned int *)(v58 - 4);
          v66 = __ldrex(v65);
        while ( __strex(v66 - 1, v65) );
        v66 = (*v65)--;
      if ( v66 <= 0 )
        j_j_j_j__ZdlPv_9(v59);
    operator delete((void *)v57);
  v60 = (void *)(v86 - 12);
  if ( (int *)(v86 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v86 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v60);
}


int __fastcall I18n::getCurrentLanguage(I18n *this)
{
  return I18n::mCurrentLanguage;
}


Json::Value *__fastcall I18n::findAvailableLanguages(I18n *this, ResourcePackManager *a2)
{
  I18n *v2; // r11@1
  ResourcePackManager *v3; // r4@1
  void (__fastcall *v4)(int *, ResourcePackManager *, char **); // r5@1
  char *v5; // r0@1
  char *v6; // r0@2
  __int64 v7; // r4@3
  int v8; // r6@7
  unsigned int *v9; // r2@9
  signed int v10; // r1@11
  unsigned int *v11; // r2@13
  signed int v12; // r1@15
  int v13; // r1@25
  void *v14; // r0@25
  int *v15; // r0@26
  unsigned int *v17; // r2@32
  signed int v18; // r1@34
  unsigned int *v19; // r2@36
  signed int v20; // r1@38
  char *v21; // [sp+0h] [bp-C0h]@1
  char *v22; // [sp+4h] [bp-BCh]@1
  int v23; // [sp+8h] [bp-B8h]@1
  int v24; // [sp+Ch] [bp-B4h]@1
  int v25; // [sp+10h] [bp-B0h]@3
  char v26; // [sp+18h] [bp-A8h]@1
  char v27; // [sp+88h] [bp-38h]@1

  v2 = this;
  v3 = a2;
  Json::Value::Value(&v27, 0);
  Json::Reader::Reader((Json::Reader *)&v26);
  v4 = *(void (__fastcall **)(int *, ResourcePackManager *, char **))(*(_DWORD *)v3 + 16);
  sub_21E8AF4((int *)&v21, (int *)&unk_27E9A40);
  v22 = v21;
  v21 = (char *)&unk_28898CC;
  v23 = 0;
  v4(&v24, v3, &v22);
  v5 = v22 - 12;
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = v21 - 12;
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v21 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  *(_DWORD *)v2 = 0;
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = 0;
  v7 = *(_QWORD *)&v24;
  if ( v24 != v25 )
    do
      if ( Json::Reader::parse((int)&v26, (int *)(v7 + 4), (int)&v27, 1) == 1 )
        I18n::_findAvailableLanguages((int)&v27, (int)v2);
      LODWORD(v7) = v7 + 8;
    while ( HIDWORD(v7) != (_DWORD)v7 );
    LODWORD(v7) = v25;
    v8 = v24;
    if ( v24 != v25 )
      {
        v13 = *(_DWORD *)(v8 + 4);
        v14 = (void *)(v13 - 12);
        if ( (int *)(v13 - 12) != &dword_28898C0 )
        {
          v9 = (unsigned int *)(v13 - 4);
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
            j_j_j_j__ZdlPv_9(v14);
        }
        v15 = (int *)(*(_DWORD *)v8 - 12);
        if ( v15 != &dword_28898C0 )
          v11 = (unsigned int *)(*(_DWORD *)v8 - 4);
              v12 = __ldrex(v11);
            while ( __strex(v12 - 1, v11) );
            v12 = (*v11)--;
          if ( v12 <= 0 )
            j_j_j_j__ZdlPv_9(v15);
        v8 += 8;
      }
      while ( v8 != (_DWORD)v7 );
      LODWORD(v7) = v24;
  if ( (_DWORD)v7 )
    operator delete((void *)v7);
  Json::Reader::~Reader((Json::Reader *)&v26);
  return Json::Value::~Value((Json::Value *)&v27);
}


void __fastcall I18n::appendAdditionalTranslations(int a1, int *a2)
{
  int v2; // r10@1
  Localization *v3; // r5@2
  const Localization *v4; // r11@4
  void *v5; // r7@4
  void *v6; // r8@4
  unsigned int *v7; // r2@6
  signed int v8; // r1@8
  int *v9; // r0@14
  void *v10; // r4@19
  void *v11; // r7@19
  unsigned int *v12; // r2@21
  signed int v13; // r1@23
  int *v14; // r0@29
  void *v15; // r4@36
  void *v16; // r5@36
  unsigned int *v17; // r2@38
  signed int v18; // r1@40
  int *v19; // r0@46
  void *v20; // r4@51
  void *v21; // r5@51
  unsigned int *v22; // r2@53
  signed int v23; // r1@55
  int *v24; // r0@61
  int *i; // [sp+8h] [bp-60h]@1
  __int64 v26; // [sp+10h] [bp-58h]@36
  int v27; // [sp+18h] [bp-50h]@36
  void *v28; // [sp+1Ch] [bp-4Ch]@36
  void *v29; // [sp+20h] [bp-48h]@36
  int v30; // [sp+24h] [bp-44h]@36
  __int64 v31; // [sp+28h] [bp-40h]@4
  int v32; // [sp+30h] [bp-38h]@4
  void *v33; // [sp+34h] [bp-34h]@4
  void *v34; // [sp+38h] [bp-30h]@4
  int v35; // [sp+3Ch] [bp-2Ch]@4

  v2 = *(_DWORD *)(a1 + 8);
  for ( i = a2; v2; v2 = *(_DWORD *)v2 )
  {
    v3 = (Localization *)I18n::_findLocaleFor((const void **)(v2 + 4));
    if ( v3 && v3 == *(Localization **)I18n::mLanguages )
    {
      v29 = 0;
      v30 = 0;
      v26 = 0LL;
      v27 = 0;
      v28 = 0;
      Localization::appendTranslations((int)v3, (int *)(v2 + 8), (__int64 *)&v28, &v26, i);
      v15 = (void *)HIDWORD(v26);
      v16 = (void *)v26;
      if ( (_DWORD)v26 != HIDWORD(v26) )
      {
        do
        {
          v19 = (int *)(*(_DWORD *)v16 - 12);
          if ( v19 != &dword_28898C0 )
          {
            v17 = (unsigned int *)(*(_DWORD *)v16 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v18 = __ldrex(v17);
              while ( __strex(v18 - 1, v17) );
            }
            else
              v18 = (*v17)--;
            if ( v18 <= 0 )
              j_j_j_j__ZdlPv_9(v19);
          }
          v16 = (char *)v16 + 4;
        }
        while ( v16 != v15 );
        v16 = (void *)v26;
      }
      if ( v16 )
        operator delete(v16);
      v20 = v29;
      v21 = v28;
      if ( v28 != v29 )
          v24 = (int *)(*(_DWORD *)v21 - 12);
          if ( v24 != &dword_28898C0 )
            v22 = (unsigned int *)(*(_DWORD *)v21 - 4);
                v23 = __ldrex(v22);
              while ( __strex(v23 - 1, v22) );
              v23 = (*v22)--;
            if ( v23 <= 0 )
              j_j_j_j__ZdlPv_9(v24);
          v21 = (char *)v21 + 4;
        while ( v21 != v20 );
        v21 = v28;
      if ( v21 )
        operator delete(v21);
    }
    else
      v4 = (const Localization *)I18n::_getAdditionalTranslationsBackupLocale((int *)(v2 + 4), 1);
      v34 = 0;
      v35 = 0;
      v31 = 0LL;
      v32 = 0;
      v33 = 0;
      Localization::appendTranslations((int)v4, (int *)(v2 + 8), (__int64 *)&v33, &v31, i);
      v5 = (void *)HIDWORD(v31);
      v6 = (void *)v31;
      if ( (_DWORD)v31 != HIDWORD(v31) )
          v9 = (int *)(*(_DWORD *)v6 - 12);
          if ( v9 != &dword_28898C0 )
            v7 = (unsigned int *)(*(_DWORD *)v6 - 4);
                v8 = __ldrex(v7);
              while ( __strex(v8 - 1, v7) );
              v8 = (*v7)--;
            if ( v8 <= 0 )
              j_j_j_j__ZdlPv_9(v9);
          v6 = (char *)v6 + 4;
        while ( v6 != v5 );
        v6 = (void *)v31;
      if ( v6 )
        operator delete(v6);
      v10 = v34;
      v11 = v33;
      if ( v33 != v34 )
          v14 = (int *)(*(_DWORD *)v11 - 12);
          if ( v14 != &dword_28898C0 )
            v12 = (unsigned int *)(*(_DWORD *)v11 - 4);
                v13 = __ldrex(v12);
              while ( __strex(v13 - 1, v12) );
              v13 = (*v12)--;
            if ( v13 <= 0 )
              j_j_j_j__ZdlPv_9(v14);
          v11 = (char *)v11 + 4;
        while ( v11 != v10 );
        v11 = v33;
      if ( v11 )
        operator delete(v11);
      if ( v3 )
        Localization::appendTranslations(v3, v4);
  }
}


void __fastcall I18n::_setLanguageSupportsHypenSplitting(I18n *this, const Localization *a2)
{
  I18n::_setLanguageSupportsHypenSplitting(this, a2);
}


void __fastcall I18n::chooseLanguage(const void **a1)
{
  I18n::chooseLanguage(a1);
}


signed int __fastcall I18n::isPackKeyword(const void **a1)
{
  int v1; // r4@1
  const void **v2; // r0@1
  signed int v3; // r1@1

  v1 = dword_27E99F4;
  v2 = std::__find_if<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__ops::_Iter_equals_val<std::string const>>(
         I18n::mPackReservedKeys,
         (const void **)dword_27E99F4,
         a1);
  v3 = 0;
  if ( v2 != (const void **)v1 )
    v3 = 1;
  return v3;
}


int __fastcall I18n::getLocaleFor(const void **a1)
{
  int result; // r0@1

  result = I18n::_findLocaleFor(a1);
  if ( !result )
    result = *(_DWORD *)I18n::mLanguages;
  return result;
}


const void **__fastcall I18n::_getLocaleCodeFor(const void **a1)
{
  int *v1; // r5@1
  int v2; // r6@1
  const void **v3; // r4@1
  int v4; // r4@2
  int v5; // r6@2
  int v6; // r0@2
  int v7; // r7@3
  int *v8; // r5@4
  int v9; // r0@10
  _BYTE *v10; // r0@22
  unsigned int *v12; // r2@24
  signed int v13; // r1@26
  _BYTE *v14; // [sp+4h] [bp-1Ch]@2

  v1 = (int *)a1;
  v2 = dword_27E99D0;
  v3 = std::__find_if<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__ops::_Iter_equals_val<std::string const>>(
         I18n::mLanguageCodes,
         (const void **)dword_27E99D0,
         a1);
  if ( v3 != (const void **)v2 )
    return v3;
  Localization::getLanguageCode((void **)&v14, v1);
  v5 = dword_27E99D0;
  v4 = I18n::mLanguageCodes;
  v6 = (dword_27E99D0 - I18n::mLanguageCodes) >> 4;
  if ( v6 >= 1 )
  {
    v7 = v6 + 1;
    do
    {
      v8 = (int *)v4;
      if ( sub_21E76A0((int *)v4, v14, 0, *((_DWORD *)v14 - 3)) != -1 )
        goto LABEL_20;
      v8 = (int *)(v4 + 4);
      if ( sub_21E76A0((int *)(v4 + 4), v14, 0, *((_DWORD *)v14 - 3)) != -1 )
      v8 = (int *)(v4 + 8);
      if ( sub_21E76A0((int *)(v4 + 8), v14, 0, *((_DWORD *)v14 - 3)) != -1 )
      v8 = (int *)(v4 + 12);
      if ( sub_21E76A0((int *)(v4 + 12), v14, 0, *((_DWORD *)v14 - 3)) != -1 )
      --v7;
      v4 += 16;
    }
    while ( v7 > 1 );
  }
  if ( 1 == (v5 - v4) >> 2 )
    v8 = (int *)v4;
    goto LABEL_18;
  v9 = (v5 - v4) >> 2;
  if ( v9 == 3 )
    if ( sub_21E76A0((int *)v4, v14, 0, *((_DWORD *)v14 - 3)) != -1 )
      goto LABEL_20;
    v4 += 4;
    goto LABEL_16;
  if ( v9 == 2 )
LABEL_16:
    v8 = (int *)(v4 + 4);
LABEL_18:
    if ( sub_21E76A0(v8, v14, 0, *((_DWORD *)v14 - 3)) == -1 )
      v8 = (int *)v5;
    goto LABEL_20;
  v8 = (int *)v5;
LABEL_20:
  v3 = (const void **)I18n::mLanguageCodes;
  if ( v8 != (int *)dword_27E99D0 )
    v3 = (const void **)v8;
  v10 = v14 - 12;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  return v3;
}


void __fastcall I18n::appendAdditionalTranslations(int a1, int *a2)
{
  I18n::appendAdditionalTranslations(a1, a2);
}


int __fastcall I18n::_getLocaleFor(const void **a1)
{
  int result; // r0@1

  result = I18n::_findLocaleFor(a1);
  if ( !result )
    result = *(_DWORD *)I18n::mLanguages;
  return result;
}


int __fastcall I18n::_getPackKeywordLocale(int *a1)
{
  int *v1; // r10@1
  int v2; // r4@1
  int *v3; // r5@1
  unsigned int *v4; // r1@5
  signed int v5; // r0@7
  char *v6; // r6@12
  size_t v7; // r2@12
  char *v8; // r7@12
  signed int v9; // r8@13
  void *v10; // r5@20
  int v11; // r0@20
  int v12; // r4@22
  int v13; // r1@23
  void *v14; // r0@23
  unsigned int *v16; // r2@27
  signed int v17; // r1@29
  int v18; // [sp+8h] [bp-38h]@20
  void *s1; // [sp+Ch] [bp-34h]@12

  v1 = a1;
  v2 = dword_27E99E8;
  v3 = (int *)I18n::mPackKeywordLanguages;
  if ( I18n::mPackKeywordLanguages == dword_27E99E8 )
  {
LABEL_20:
    v10 = operator new(0x20u);
    Localization::Localization((int)v10, v1);
    v18 = (int)v10;
    v11 = dword_27E99E8;
    if ( dword_27E99E8 == *(_DWORD *)algn_27E99EC )
    {
      std::vector<std::unique_ptr<Localization,std::default_delete<Localization>>,std::allocator<std::unique_ptr<Localization,std::default_delete<Localization>>>>::_M_emplace_back_aux<std::unique_ptr<Localization,std::default_delete<Localization>>>(
        &I18n::mPackKeywordLanguages,
        &v18);
      v12 = v18;
      if ( v18 )
      {
        std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
          v18 + 8,
          *(_DWORD *)(v18 + 16));
        v13 = *(_DWORD *)(v12 + 4);
        v14 = (void *)(v13 - 12);
        if ( (int *)(v13 - 12) != &dword_28898C0 )
        {
          v16 = (unsigned int *)(v13 - 4);
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
            j_j_j_j__ZdlPv_9(v14);
        }
        operator delete((void *)v12);
      }
    }
    else
      v18 = 0;
      *(_DWORD *)dword_27E99E8 = v10;
      dword_27E99E8 = v11 + 4;
    v18 = 0;
    v3 = (int *)(dword_27E99E8 - 4);
  }
  else
    while ( 1 )
      Localization::getFullLanguageCode((Localization *)&s1, *v3);
      v6 = (char *)s1;
      v8 = (char *)s1 - 12;
      v7 = *((_DWORD *)s1 - 3);
      if ( v7 == *(_DWORD *)(*v1 - 12) )
        v9 = 0;
        if ( !memcmp(s1, (const void *)*v1, v7) )
          v9 = 1;
      else
      if ( (int *)v8 != &dword_28898C0 )
        v4 = (unsigned int *)(v6 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
        else
          v5 = (*v4)--;
        if ( v5 <= 0 )
          j_j_j_j__ZdlPv_9(v8);
      if ( v9 )
        break;
      ++v3;
      if ( v3 == (int *)v2 )
        goto LABEL_20;
  return *v3;
}


void __fastcall I18n::get(int *a1, int **a2)
{
  I18n::get(a1, a2);
}


void __fastcall I18n::_generatePackKeyPrefix(I18n *this, const PackManifest *a2)
{
  I18n::_generatePackKeyPrefix(this, a2);
}


void __fastcall I18n::chooseLanguage(const void **a1)
{
  const void **v1; // r4@1
  I18n *v2; // r0@1
  const Localization *v3; // r1@1
  int *v4; // r0@4
  int v5; // r4@5
  Localization *v6; // r5@7
  int v7; // r4@7
  int *v8; // r5@7
  unsigned int *v9; // r1@11
  signed int v10; // r0@13
  char *v11; // r7@18
  size_t v12; // r2@18
  char *v13; // r6@18
  signed int v14; // r8@19
  int v15; // r0@27
  const Localization *v16; // r1@27
  Localization *v17; // r2@29
  Localization *v18; // r0@30
  int v19; // r4@30
  int v20; // r1@31
  void *v21; // r0@31
  Localization *v22; // r4@36
  int v23; // r1@37
  void *v24; // r0@37
  char *v25; // r0@39
  unsigned int *v26; // r2@41
  signed int v27; // r1@43
  unsigned int *v28; // r2@45
  signed int v29; // r1@47
  unsigned int *v30; // r2@53
  signed int v31; // r1@55
  Localization *v32; // [sp+4h] [bp-34h]@7
  const void *v33; // [sp+8h] [bp-30h]@4
  const void *v34; // [sp+Ch] [bp-2Ch]@18

  v1 = a1;
  v2 = (I18n *)I18n::_findLocaleFor(a1);
  if ( v2 )
  {
    j_j_j__ZN4I18n14chooseLanguageERK12Localization(v2, v3);
  }
  else if ( I18n::mResourcePackManager )
    v4 = (int *)I18n::_getLocaleCodeFor(v1);
    sub_21E8AF4((int *)&v33, v4);
    if ( I18n::mLanguages == dword_27E99C4 )
      v5 = 0;
    else
      v5 = *(_DWORD *)I18n::mLanguages;
    v6 = (Localization *)operator new(0x20u);
    Localization::Localization((int)v6, (int *)&v33, v5);
    v32 = v6;
    Localization::loadFromResourcePackManager(
      (int)v6,
      (int *)I18n::mResourcePackManager,
      (__int64 *)&I18n::mPackReservedKeys);
    v7 = dword_27E99DC;
    v8 = (int *)I18n::mAdditionalTranslationsBackup;
    if ( I18n::mAdditionalTranslationsBackup != dword_27E99DC )
    {
      while ( 1 )
      {
        Localization::getFullLanguageCode((Localization *)&v34, *v8);
        v11 = (char *)v34;
        v13 = (char *)v34 - 12;
        v12 = *((_DWORD *)v34 - 3);
        if ( v12 == *((_DWORD *)v33 - 3) )
        {
          v14 = 0;
          if ( !memcmp(v34, v33, v12) )
            v14 = 1;
        }
        else
        if ( (int *)v13 != &dword_28898C0 )
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
            j_j_j_j__ZdlPv_9(v13);
        if ( v14 )
          break;
        ++v8;
        if ( v8 == (int *)v7 )
          goto LABEL_27;
      }
      if ( *v8 )
        Localization::appendTranslations(v32, (const Localization *)*v8);
    }
LABEL_27:
    v15 = dword_27E99C4;
    v16 = (const Localization *)I18n::mLanguages;
    if ( (unsigned int)((dword_27E99C4 - I18n::mLanguages) >> 2) > 1 )
      v18 = v32;
      v32 = 0;
      v19 = *(_DWORD *)(I18n::mLanguages + 4);
      *(_DWORD *)(I18n::mLanguages + 4) = v18;
      if ( v19 )
        std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
          v19 + 8,
          *(_DWORD *)(v19 + 16));
        v20 = *(_DWORD *)(v19 + 4);
        v21 = (void *)(v20 - 12);
        if ( (int *)(v20 - 12) != &dword_28898C0 )
          v30 = (unsigned int *)(v20 - 4);
              v31 = __ldrex(v30);
            while ( __strex(v31 - 1, v30) );
            v31 = (*v30)--;
          if ( v31 <= 0 )
            j_j_j_j__ZdlPv_9(v21);
        operator delete((void *)v19);
    else if ( dword_27E99C4 == dword_27E99C8 )
      std::vector<std::unique_ptr<Localization,std::default_delete<Localization>>,std::allocator<std::unique_ptr<Localization,std::default_delete<Localization>>>>::_M_emplace_back_aux<std::unique_ptr<Localization,std::default_delete<Localization>>>(
        &I18n::mLanguages,
        (int *)&v32);
      v17 = v32;
      v16 = (const Localization *)&I18n::mCurrentLanguage;
      *(_DWORD *)dword_27E99C4 = v17;
      dword_27E99C4 = v15 + 4;
    I18n::chooseLanguage(*(I18n **)(dword_27E99C4 - 4), v16);
    if ( I18n::mSkinRepository )
      SkinRepository::reloadSkinPackLocText((SkinRepository *)I18n::mSkinRepository);
    v22 = v32;
    if ( v32 )
      std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
        (int)v32 + 8,
        *((_DWORD *)v32 + 4));
      v23 = *((_DWORD *)v22 + 1);
      v24 = (void *)(v23 - 12);
      if ( (int *)(v23 - 12) != &dword_28898C0 )
        v28 = (unsigned int *)(v23 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
          v29 = (*v28)--;
        if ( v29 <= 0 )
          j_j_j_j__ZdlPv_9(v24);
      operator delete((void *)v22);
    v25 = (char *)v33 - 12;
    if ( (int *)((char *)v33 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)((char *)v33 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
      else
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
}


int __fastcall I18n::_findLocaleFor(const void **a1)
{
  int *v1; // r0@1
  int v2; // r4@1
  int *v3; // r5@1
  unsigned int *v4; // r1@5
  signed int v5; // r0@7
  int v6; // r7@12
  size_t v7; // r2@12
  char *v8; // r6@12
  signed int v9; // r8@13
  int v10; // r4@4
  char *v11; // r0@21
  unsigned int *v13; // r2@23
  signed int v14; // r1@25
  char *v15; // [sp+0h] [bp-38h]@12
  const void *v16; // [sp+4h] [bp-34h]@1

  v1 = (int *)I18n::_getLocaleCodeFor(a1);
  sub_21E8AF4((int *)&v16, v1);
  v2 = dword_27E99C4;
  v3 = (int *)I18n::mLanguages;
  if ( I18n::mLanguages == dword_27E99C4 )
  {
    v10 = 0;
  }
  else
    while ( 1 )
    {
      Localization::getFullLanguageCode((Localization *)&v15, *v3);
      v6 = (int)v15;
      v8 = v15 - 12;
      v7 = *((_DWORD *)v15 - 3);
      if ( v7 == *((_DWORD *)v16 - 3) )
      {
        v9 = 0;
        if ( !memcmp(v15, v16, v7) )
          v9 = 1;
      }
      else
      if ( (int *)v8 != &dword_28898C0 )
        v4 = (unsigned int *)(v6 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
        }
        else
          v5 = (*v4)--;
        if ( v5 <= 0 )
          j_j_j_j__ZdlPv_9(v8);
      if ( v9 == 1 )
        break;
      ++v3;
      if ( v3 == (int *)v2 )
        v10 = 0;
        goto LABEL_21;
    }
    v10 = *v3;
LABEL_21:
  v11 = (char *)v16 - 12;
  if ( (int *)((char *)v16 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)((char *)v16 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  return v10;
}


void __fastcall I18n::chooseLanguage(I18n *this, const Localization *a2)
{
  I18n *v2; // r4@1
  Localization *v3; // r1@1
  char *v4; // r0@1
  unsigned int *v5; // r2@3
  Localization *v6; // [sp+4h] [bp-1Ch]@1

  v2 = this;
  I18n::mCurrentLanguage = this;
  Localization::getFullLanguageCode((Localization *)&v6, (int)this);
  I18n::mCurrentPackMetaLanguage = I18n::_getPackKeywordLocale((int *)&v6);
  v3 = v6;
  v4 = (char *)v6 - 12;
  if ( (int *)((char *)v6 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)((char *)v6 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v3 = (Localization *)__ldrex(v5);
      while ( __strex((unsigned int)v3 - 1, v5) );
    }
    else
      v3 = (Localization *)(*v5)--;
    if ( (signed int)v3 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  I18n::_setLanguageSupportsHypenSplitting(v2, v3);
}


void __fastcall I18n::chooseLanguage(I18n *this, const Localization *a2)
{
  I18n::chooseLanguage(this, a2);
}


void __fastcall I18n::getLocalizedAssetFileWithFallback(int *a1, int *a2, const void **a3)
{
  int *v3; // r8@1
  int *v4; // r6@1
  const void **v5; // r5@1
  const void **v6; // r0@1
  void *v7; // r0@1
  void *v8; // r0@3
  int v9; // r7@5
  void (__fastcall *v10)(int *, int, int *); // r4@5
  void *v11; // r0@6
  void *v12; // r0@8
  const void **v13; // r0@10
  char *v14; // r0@10
  void *v15; // r0@11
  void *v16; // r0@13
  int v17; // r5@15
  void (__fastcall *v18)(int *, int, int *); // r6@15
  void *v19; // r0@16
  void *v20; // r0@18
  void *v21; // r0@19
  char *v22; // r0@20
  void *v23; // r0@21
  unsigned int *v24; // r2@23
  signed int v25; // r1@25
  unsigned int *v26; // r2@27
  signed int v27; // r1@29
  unsigned int *v28; // r2@31
  signed int v29; // r1@33
  unsigned int *v30; // r2@35
  signed int v31; // r1@37
  unsigned int *v32; // r2@55
  signed int v33; // r1@57
  unsigned int *v34; // r2@59
  signed int v35; // r1@61
  unsigned int *v36; // r2@63
  signed int v37; // r1@65
  unsigned int *v38; // r2@67
  signed int v39; // r1@69
  int v40; // [sp+4h] [bp-3Ch]@18
  int v41; // [sp+8h] [bp-38h]@18
  int v42; // [sp+Ch] [bp-34h]@10
  char *v43; // [sp+10h] [bp-30h]@10
  int v44; // [sp+14h] [bp-2Ch]@8
  int v45; // [sp+18h] [bp-28h]@1
  char *v46; // [sp+1Ch] [bp-24h]@1
  int v47; // [sp+20h] [bp-20h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  Localization::getFullLanguageCode((Localization *)&v47, I18n::mCurrentLanguage);
  sub_21E8AF4(&v45, v4);
  sub_21E72F0((const void **)&v45, (const void **)&v47);
  v6 = sub_21E72F0((const void **)&v45, v5);
  v46 = (char *)*v6;
  *v6 = &unk_28898CC;
  v7 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
  {
    v24 = (unsigned int *)(v45 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
  }
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v8 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v8 = &ServiceLocator<AppPlatform>::mDefaultService;
  v9 = *(_DWORD *)v8;
  v10 = *(void (__fastcall **)(int *, int, int *))(**(_DWORD **)v8 + 376);
    v11 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v11 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (__fastcall **)(int *))(**(_DWORD **)v11 + 372))(&v44);
  v10(v3, v9, &v44);
  v12 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v44 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  if ( !*(_DWORD *)(*v3 - 12) )
    sub_21E8AF4(&v42, v4);
    sub_21E7408((const void **)&v42, "en_US", 5u);
    v13 = sub_21E72F0((const void **)&v42, v5);
    v43 = (char *)*v13;
    *v13 = &unk_28898CC;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v46,
      (int *)&v43);
    v14 = v43 - 12;
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v43 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
      }
      else
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    v15 = (void *)(v42 - 12);
    if ( (int *)(v42 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v42 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v16 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      v16 = &ServiceLocator<AppPlatform>::mDefaultService;
    v17 = *(_DWORD *)v16;
    v18 = *(void (__fastcall **)(int *, int, int *))(**(_DWORD **)v16 + 376);
      v19 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      v19 = &ServiceLocator<AppPlatform>::mDefaultService;
    (*(void (__fastcall **)(int *))(**(_DWORD **)v19 + 372))(&v40);
    v18(&v41, v17, &v40);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v41);
    v20 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v41 - 4);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    v21 = (void *)(v40 - 12);
    if ( (int *)(v40 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)(v40 - 4);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
  Util::normalizeLineEndings(v3);
  v22 = v46 - 12;
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v46 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v47 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
}


void __fastcall I18n::appendLanguageStrings(int a1)
{
  I18n::appendLanguageStrings(a1);
}


Json::Value *__fastcall I18n::loadLanguageKeywordsFromPack(const PackManifest *a1, int a2)
{
  const PackManifest *v2; // r10@1
  int v3; // r4@1
  __int64 v4; // r6@3 OVERLAPPED
  unsigned int *v5; // r2@5
  signed int v6; // r1@7
  int v7; // r5@13
  void *v8; // r0@13
  _DWORD *v9; // r5@15 OVERLAPPED
  unsigned int *v10; // r2@17
  signed int v11; // r1@19
  int *v12; // r0@25
  char *v13; // r0@30
  unsigned int *v15; // r2@32
  signed int v16; // r1@34
  int v17; // [sp+4h] [bp-BCh]@5
  __int64 v18; // [sp+8h] [bp-B8h]@3
  int v19; // [sp+10h] [bp-B0h]@3
  char *v20; // [sp+14h] [bp-ACh]@1
  char v21; // [sp+18h] [bp-A8h]@1
  char v22; // [sp+88h] [bp-38h]@1

  v2 = a1;
  v3 = a2;
  Json::Value::Value(&v22, 0);
  Json::Reader::Reader((Json::Reader *)&v21);
  v20 = (char *)&unk_28898CC;
  if ( (*(int (__fastcall **)(int, void *, char **))(*(_DWORD *)v3 + 40))(v3, &unk_27E9A40, &v20) == 1
    && Json::Reader::parse((int)&v21, (int *)&v20, (int)&v22, 1) == 1 )
  {
    v18 = 0LL;
    v19 = 0;
    I18n::_findAvailableLanguages((int)&v22, (int)&v18);
    v4 = v18;
    if ( (_DWORD)v18 != HIDWORD(v18) )
    {
      do
      {
        v7 = I18n::_getPackKeywordLocale((int *)v4);
        I18n::_generatePackKeyPrefix((I18n *)&v17, v2);
        Localization::loadFromPack(v7, (int)&v17, v3, (__int64 *)&I18n::mPackReservedKeys);
        v8 = (void *)(v17 - 12);
        if ( (int *)(v17 - 12) != &dword_28898C0 )
        {
          v5 = (unsigned int *)(v17 - 4);
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
            j_j_j_j__ZdlPv_9(v8);
        }
        LODWORD(v4) = v4 + 4;
      }
      while ( (_DWORD)v4 != HIDWORD(v4) );
      *(__int64 *)((char *)&v4 - 4) = v18;
      if ( (_DWORD)v18 != HIDWORD(v18) )
        do
          v12 = (int *)(*v9 - 12);
          if ( v12 != &dword_28898C0 )
            v10 = (unsigned int *)(*v9 - 4);
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
              j_j_j_j__ZdlPv_9(v12);
          ++v9;
        while ( v9 != (_DWORD *)v4 );
        LODWORD(v4) = v18;
    }
    if ( (_DWORD)v4 )
      operator delete((void *)v4);
  }
  v13 = v20 - 12;
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v20 - 4);
    if ( &pthread_create )
      __dmb();
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  Json::Reader::~Reader((Json::Reader *)&v21);
  return Json::Value::~Value((Json::Value *)&v22);
}


signed int __fastcall I18n::_findAvailableLanguages(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  signed int result; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  int v9; // r11@19
  void *v10; // r0@19
  const void **v11; // r7@20
  const void **v12; // r0@20
  char *v13; // r0@24
  int v14; // [sp+8h] [bp-40h]@3
  void *v15; // [sp+Ch] [bp-3Ch]@7
  char v16; // [sp+10h] [bp-38h]@1
  char v17; // [sp+18h] [bp-30h]@1

  v2 = a1;
  v3 = a2;
  Json::Value::begin((Json::Value *)&v17, a1);
  Json::Value::end((Json::Value *)&v16, v2);
  for ( result = Json::ValueIteratorBase::isEqual(
                   (Json::ValueIteratorBase *)&v17,
                   (const Json::ValueIteratorBase *)&v16);
        !result;
        result = Json::ValueIteratorBase::isEqual(
                   (const Json::ValueIteratorBase *)&v16) )
  {
    v9 = Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v17);
    sub_21E94B4((void **)&v14, (const char *)&unk_257BC67);
    Json::Value::asString((int *)&v15, v9, &v14);
    v10 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
    {
      v5 = (unsigned int *)(v14 - 4);
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
        j_j_j_j__ZdlPv_9(v10);
    }
    v11 = (const void **)(*(_QWORD *)v3 >> 32);
    v12 = std::__find_if<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__ops::_Iter_equals_val<std::string const>>(
            *(_QWORD *)v3,
            v11,
            (const void **)&v15);
    if ( v12 == v11 )
      if ( v12 == *(const void ***)(v3 + 8) )
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
          (unsigned __int64 *)v3,
          &v15);
        *v12 = v15;
        v15 = &unk_28898CC;
        *(_DWORD *)(v3 + 4) = v12 + 1;
    v13 = (char *)v15 - 12;
    if ( (int *)((char *)v15 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)((char *)v15 - 4);
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
        v8 = (*v7)--;
      if ( v8 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v17);
  }
  return result;
}


int __fastcall I18n::clearLanguages(I18n *this)
{
  __int64 v1; // kr00_8@1
  int *v2; // r7@2
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  int v5; // r5@11
  int v6; // r1@12
  void *v7; // r0@12
  _DWORD *v8; // r1@15
  _DWORD *v9; // r5@16
  int result; // r0@17

  I18n::mCurrentLanguage = 0;
  v1 = *(_QWORD *)&I18n::mLanguages;
  if ( dword_27E99C4 != I18n::mLanguages )
  {
    v2 = (int *)I18n::mLanguages;
    do
    {
      v5 = *v2;
      if ( *v2 )
      {
        std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
          v5 + 8,
          *(_DWORD *)(v5 + 16));
        v6 = *(_DWORD *)(v5 + 4);
        v7 = (void *)(v6 - 12);
        if ( (int *)(v6 - 12) != &dword_28898C0 )
        {
          v3 = (unsigned int *)(v6 - 4);
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
            j_j_j_j__ZdlPv_9(v7);
        }
        operator delete((void *)v5);
      }
      *v2 = 0;
      ++v2;
    }
    while ( v2 != (int *)HIDWORD(v1) );
  }
  v8 = (_DWORD *)dword_27E9A28;
  dword_27E99C4 = v1;
  if ( dword_27E9A28 )
      v9 = (_DWORD *)*v8;
      std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,true>>>::_M_deallocate_node(
        (int)&I18n::mFormatDictionary,
        (int)v8);
      v8 = v9;
    while ( v9 );
  _aeabi_memclr4(I18n::mFormatDictionary, 4 * *(_DWORD *)algn_27E9A24);
  result = 0;
  dword_27E9A28 = 0;
  *(_DWORD *)algn_27E9A2C = 0;
  return result;
}


void __fastcall I18n::appendLanguageStrings(int a1)
{
  int v1; // r10@1
  int (__fastcall *v2)(int, char **, char **); // r5@2
  const void **v3; // r0@2
  const void **v4; // r0@2
  int v5; // r5@2
  char *v6; // r0@2
  char *v7; // r0@3
  void *v8; // r0@4
  int v9; // r5@6
  int *v10; // r0@6
  void *v11; // r0@6
  void *v12; // r5@7
  void *v13; // r7@7
  unsigned int *v14; // r2@9
  signed int v15; // r1@11
  int *v16; // r0@17
  int *v17; // r9@22
  void **v18; // r6@23
  unsigned int *v19; // r2@24
  signed int v20; // r1@26
  unsigned int *v21; // r2@28
  signed int v22; // r1@30
  unsigned int *v23; // r2@32
  signed int v24; // r1@34
  unsigned int *v25; // r2@36
  signed int v26; // r1@38
  unsigned int *v27; // r2@40
  signed int v28; // r1@42
  unsigned int *v29; // r2@64
  signed int v30; // r1@66
  int v31; // r5@72
  void *v32; // r0@72
  void *v33; // r5@73
  void *v34; // r7@73
  unsigned int *v35; // r2@75
  signed int v36; // r1@77
  int *v37; // r0@83
  int (__fastcall *v38)(int, char **, char **); // r4@88
  const void **v39; // r0@88
  const void **v40; // r0@88
  void **v41; // r11@88
  int v42; // r6@88
  int v43; // r10@88
  char *v44; // r0@88
  char *v45; // r0@89
  void *v46; // r0@90
  int v47; // r5@92
  int *v48; // r0@92
  void *v49; // r0@92
  void *v50; // r5@93
  void *v51; // r7@93
  unsigned int *v52; // r2@95
  signed int v53; // r1@97
  int *v54; // r0@103
  char *v55; // r0@108
  char *v56; // r0@110
  unsigned int *v57; // r2@112
  signed int v58; // r1@114
  unsigned int *v59; // r2@116
  signed int v60; // r1@118
  unsigned int *v61; // r2@120
  signed int v62; // r1@122
  unsigned int *v63; // r2@136
  signed int v64; // r1@138
  unsigned int *v65; // r2@140
  signed int v66; // r1@142
  int v67; // [sp+18h] [bp-80h]@64
  void *v68; // [sp+1Ch] [bp-7Ch]@92
  void *v69; // [sp+20h] [bp-78h]@92
  int v70; // [sp+24h] [bp-74h]@92
  int v71; // [sp+28h] [bp-70h]@36
  char *v72; // [sp+2Ch] [bp-6Ch]@32
  char *v73; // [sp+30h] [bp-68h]@28
  char *v74; // [sp+34h] [bp-64h]@40
  int v75; // [sp+3Ch] [bp-5Ch]@23
  void *v76; // [sp+40h] [bp-58h]@72
  void *v77; // [sp+44h] [bp-54h]@72
  int v78; // [sp+48h] [bp-50h]@72
  int v79; // [sp+50h] [bp-48h]@6
  void *v80; // [sp+54h] [bp-44h]@6
  void *v81; // [sp+58h] [bp-40h]@6
  int v82; // [sp+5Ch] [bp-3Ch]@6
  int v83; // [sp+60h] [bp-38h]@2
  char *v84; // [sp+64h] [bp-34h]@2
  char *v85; // [sp+68h] [bp-30h]@2
  char *v86; // [sp+6Ch] [bp-2Ch]@2

  v1 = a1;
  if ( dword_27E99C4 != I18n::mLanguages )
  {
    v86 = (char *)&unk_28898CC;
    v2 = *(int (__fastcall **)(int, char **, char **))(*(_DWORD *)a1 + 40);
    Localization::getFullLanguageCode((Localization *)&v83, *(_DWORD *)I18n::mLanguages);
    v3 = sub_21E82D8((const void **)&v83, 0, (unsigned int)"texts/", (_BYTE *)6);
    v84 = (char *)*v3;
    *v3 = &unk_28898CC;
    v4 = sub_21E7408((const void **)&v84, ".lang", 5u);
    v85 = (char *)*v4;
    *v4 = &unk_28898CC;
    v5 = v2(v1, &v85, &v86);
    v6 = v85 - 12;
    if ( (int *)(v85 - 12) != &dword_28898C0 )
    {
      v57 = (unsigned int *)(v85 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
      }
      else
        v58 = (*v57)--;
      if ( v58 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    }
    v7 = v84 - 12;
    if ( (int *)(v84 - 12) != &dword_28898C0 )
      v59 = (unsigned int *)(v84 - 4);
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
        v60 = (*v59)--;
      if ( v60 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    v8 = (void *)(v83 - 12);
    if ( (int *)(v83 - 12) != &dword_28898C0 )
      v61 = (unsigned int *)(v83 - 4);
          v62 = __ldrex(v61);
        while ( __strex(v62 - 1, v61) );
        v62 = (*v61)--;
      if ( v62 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    if ( v5 == 1 )
      v9 = *(_DWORD *)I18n::mLanguages;
      v80 = 0;
      v81 = 0;
      v82 = 0;
      v10 = (int *)sub_21E94B4((void **)&v79, (const char *)&unk_257BC67);
      Localization::appendTranslations(v9, (int *)&v86, (__int64 *)&I18n::mPackReservedKeys, (__int64 *)&v80, v10);
      v11 = (void *)(v79 - 12);
      if ( (int *)(v79 - 12) != &dword_28898C0 )
        v63 = (unsigned int *)(v79 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v64 = __ldrex(v63);
          while ( __strex(v64 - 1, v63) );
        }
        else
          v64 = (*v63)--;
        if ( v64 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      v13 = v81;
      v12 = v80;
      if ( v80 != v81 )
          v16 = (int *)(*(_DWORD *)v12 - 12);
          if ( v16 != &dword_28898C0 )
          {
            v14 = (unsigned int *)(*(_DWORD *)v12 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v15 = __ldrex(v14);
              while ( __strex(v15 - 1, v14) );
            }
            else
              v15 = (*v14)--;
            if ( v15 <= 0 )
              j_j_j_j__ZdlPv_9(v16);
          }
          v12 = (char *)v12 + 4;
        while ( v12 != v13 );
        v12 = v80;
      if ( v12 )
        operator delete(v12);
    v17 = (int *)(I18n::mLanguages + 4);
    if ( I18n::mLanguages + 4 != dword_27E99C4 )
      v18 = (void **)&v75;
      do
        v31 = *v17;
        v76 = 0;
        v77 = 0;
        v78 = 0;
        sub_21E94B4(v18, (const char *)&unk_257BC67);
        Localization::appendTranslations(
          v31,
          (int *)&v86,
          (__int64 *)&I18n::mPackReservedKeys,
          (__int64 *)&v76,
          (int *)v18);
        v32 = (void *)(v75 - 12);
        if ( (int *)(v75 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v75 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
          else
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j__ZdlPv_9(v32);
        v34 = v77;
        v33 = v76;
        if ( v76 != v77 )
            v37 = (int *)(*(_DWORD *)v33 - 12);
            if ( v37 != &dword_28898C0 )
              v35 = (unsigned int *)(*(_DWORD *)v33 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v36 = __ldrex(v35);
                while ( __strex(v36 - 1, v35) );
              }
              else
                v36 = (*v35)--;
              if ( v36 <= 0 )
                j_j_j_j__ZdlPv_9(v37);
            v33 = (char *)v33 + 4;
          while ( v33 != v34 );
          v33 = v76;
        if ( v33 )
          operator delete(v33);
        v74 = (char *)&unk_28898CC;
        v38 = *(int (__fastcall **)(int, char **, char **))(*(_DWORD *)v1 + 40);
        Localization::getFullLanguageCode((Localization *)&v71, *v17);
        v39 = sub_21E82D8((const void **)&v71, 0, (unsigned int)"texts/", (_BYTE *)6);
        v72 = (char *)*v39;
        *v39 = &unk_28898CC;
        v40 = sub_21E7408((const void **)&v72, ".lang", 5u);
        v41 = v18;
        v73 = (char *)*v40;
        *v40 = &unk_28898CC;
        v42 = v1;
        v43 = v38(v1, &v73, &v74);
        v44 = v73 - 12;
        if ( (int *)(v73 - 12) != &dword_28898C0 )
          v21 = (unsigned int *)(v73 - 4);
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            v22 = (*v21)--;
          if ( v22 <= 0 )
            j_j_j_j__ZdlPv_9(v44);
        v45 = v72 - 12;
        if ( (int *)(v72 - 12) != &dword_28898C0 )
          v23 = (unsigned int *)(v72 - 4);
              v24 = __ldrex(v23);
            while ( __strex(v24 - 1, v23) );
            v24 = (*v23)--;
          if ( v24 <= 0 )
            j_j_j_j__ZdlPv_9(v45);
        v46 = (void *)(v71 - 12);
        if ( (int *)(v71 - 12) != &dword_28898C0 )
          v25 = (unsigned int *)(v71 - 4);
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
            v26 = (*v25)--;
          if ( v26 <= 0 )
            j_j_j_j__ZdlPv_9(v46);
        if ( v43 == 1 )
          v47 = *v17;
          v68 = 0;
          v69 = 0;
          v70 = 0;
          v48 = (int *)sub_21E94B4((void **)&v67, (const char *)&unk_257BC67);
          Localization::appendTranslations(v47, (int *)&v74, (__int64 *)&I18n::mPackReservedKeys, (__int64 *)&v68, v48);
          v49 = (void *)(v67 - 12);
          if ( (int *)(v67 - 12) != &dword_28898C0 )
            v29 = (unsigned int *)(v67 - 4);
                v30 = __ldrex(v29);
              while ( __strex(v30 - 1, v29) );
              v30 = (*v29)--;
            if ( v30 <= 0 )
              j_j_j_j__ZdlPv_9(v49);
          v51 = v69;
          v50 = v68;
          if ( v68 != v69 )
              v54 = (int *)(*(_DWORD *)v50 - 12);
              if ( v54 != &dword_28898C0 )
                v52 = (unsigned int *)(*(_DWORD *)v50 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v53 = __ldrex(v52);
                  while ( __strex(v53 - 1, v52) );
                }
                else
                  v53 = (*v52)--;
                if ( v53 <= 0 )
                  j_j_j_j__ZdlPv_9(v54);
              v50 = (char *)v50 + 4;
            while ( v50 != v51 );
            v50 = v68;
          if ( v50 )
            operator delete(v50);
        v1 = v42;
        v55 = v74 - 12;
        if ( (int *)(v74 - 12) != &dword_28898C0 )
          v27 = (unsigned int *)(v74 - 4);
              v28 = __ldrex(v27);
            while ( __strex(v28 - 1, v27) );
            v28 = (*v27)--;
          if ( v28 <= 0 )
            j_j_j_j__ZdlPv_9(v55);
        ++v17;
        v18 = v41;
      while ( v17 != (int *)dword_27E99C4 );
    v56 = v86 - 12;
    if ( (int *)(v86 - 12) != &dword_28898C0 )
      v65 = (unsigned int *)(v86 - 4);
          v66 = __ldrex(v65);
        while ( __strex(v66 - 1, v65) );
        v66 = (*v65)--;
      if ( v66 <= 0 )
        j_j_j_j__ZdlPv_9(v56);
  }
}


void __fastcall I18n::_setLanguageSupportsHypenSplitting(I18n *this, const Localization *a2)
{
  int v2; // r0@4
  char v3; // r2@4
  void *v4; // r0@10
  unsigned int *v5; // r2@12
  signed int v6; // r1@14
  int v7; // [sp+4h] [bp-1Ch]@1

  Localization::getFullLanguageCode((Localization *)&v7, (int)this);
  if ( sub_21E7D6C((const void **)&v7, "ja_JP") )
  {
    if ( sub_21E7D6C((const void **)&v7, "ko_KR") )
    {
      if ( sub_21E7D6C((const void **)&v7, "zh_CN") )
      {
        v2 = sub_21E7D6C((const void **)&v7, "zh_TW");
        v3 = v2;
        if ( v2 )
          v3 = 1;
      }
      else
        v3 = 0;
    }
    else
      v3 = 0;
  }
  else
    v3 = 0;
  I18n::mLanguageSupportsHypenSplitting = v3;
  v4 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v5 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
}


Json::Value *__fastcall I18n::findAvailableLanguageNames(I18n *this, ResourcePackManager *a2)
{
  I18n *v2; // r10@1
  ResourcePackManager *v3; // r4@1
  void (__fastcall *v4)(void **, ResourcePackManager *, char **); // r5@1
  char *v5; // r0@1
  double v6; // r0@2
  unsigned int v7; // r0@3
  int v8; // r7@5
  void *v9; // r4@5
  __int64 v10; // r4@6
  void *v11; // r6@10
  unsigned int *v12; // r2@12
  signed int v13; // r1@14
  unsigned int *v14; // r2@16
  signed int v15; // r1@18
  int v16; // r1@28
  void *v17; // r0@28
  int *v18; // r0@29
  unsigned int *v20; // r2@35
  signed int v21; // r1@37
  unsigned int *v22; // r2@39
  char *v23; // [sp+0h] [bp-C0h]@1
  char *v24; // [sp+4h] [bp-BCh]@1
  int v25; // [sp+8h] [bp-B8h]@1
  void *ptr; // [sp+Ch] [bp-B4h]@1
  void *v27; // [sp+10h] [bp-B0h]@6
  char v28; // [sp+18h] [bp-A8h]@1
  char v29; // [sp+88h] [bp-38h]@1

  v2 = this;
  v3 = a2;
  Json::Value::Value(&v29, 0);
  Json::Reader::Reader((Json::Reader *)&v28);
  v4 = *(void (__fastcall **)(void **, ResourcePackManager *, char **))(*(_DWORD *)v3 + 16);
  sub_21E8AF4((int *)&v23, (int *)&unk_27E9A44);
  v24 = v23;
  v23 = (char *)&unk_28898CC;
  v25 = 0;
  v4(&ptr, v3, &v24);
  v5 = v24 - 12;
  if ( (int *)(v24 - 12) != &dword_28898C0 )
  {
    v20 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    }
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  HIDWORD(v6) = v23;
  LODWORD(v6) = v23 - 12;
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v23 - 4);
        HIDWORD(v6) = __ldrex(v22);
      while ( __strex(HIDWORD(v6) - 1, v22) );
      HIDWORD(v6) = (*v22)--;
    if ( SHIDWORD(v6) <= 0 )
      j_j_j_j__ZdlPv_9((void *)LODWORD(v6));
  *((_DWORD *)v2 + 2) = 0;
  *((_DWORD *)v2 + 3) = 0;
  *((_DWORD *)v2 + 4) = 1065353216;
  LODWORD(v6) = (char *)v2 + 16;
  *(_DWORD *)(LODWORD(v6) + 4) = 0;
  v7 = sub_21E6254(v6);
  *((_DWORD *)v2 + 1) = v7;
  if ( v7 == 1 )
    *((_DWORD *)v2 + 6) = 0;
    v9 = (char *)v2 + 24;
  else
    if ( v7 >= 0x40000000 )
      sub_21E57F4();
    v8 = 4 * v7;
    v9 = operator new(4 * v7);
    _aeabi_memclr4(v9, v8);
  *(_DWORD *)v2 = v9;
  v10 = *(_QWORD *)&ptr;
  if ( ptr != v27 )
    do
      if ( Json::Reader::parse((int)&v28, (int *)(v10 + 4), (int)&v29, 1) == 1 )
        I18n::_findAvailableLanguageNames((int)&v29, (unsigned __int64 *)v2);
      LODWORD(v10) = v10 + 8;
    while ( HIDWORD(v10) != (_DWORD)v10 );
    LODWORD(v10) = v27;
    v11 = ptr;
    if ( ptr != v27 )
      {
        v16 = *((_DWORD *)v11 + 1);
        v17 = (void *)(v16 - 12);
        if ( (int *)(v16 - 12) != &dword_28898C0 )
        {
          v12 = (unsigned int *)(v16 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v13 = __ldrex(v12);
            while ( __strex(v13 - 1, v12) );
          }
          else
            v13 = (*v12)--;
          if ( v13 <= 0 )
            j_j_j_j__ZdlPv_9(v17);
        }
        v18 = (int *)(*(_DWORD *)v11 - 12);
        if ( v18 != &dword_28898C0 )
          v14 = (unsigned int *)(*(_DWORD *)v11 - 4);
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
            v15 = (*v14)--;
          if ( v15 <= 0 )
            j_j_j_j__ZdlPv_9(v18);
        v11 = (char *)v11 + 8;
      }
      while ( v11 != (void *)v10 );
      LODWORD(v10) = ptr;
  if ( (_DWORD)v10 )
    operator delete((void *)v10);
  Json::Reader::~Reader((Json::Reader *)&v28);
  return Json::Value::~Value((Json::Value *)&v29);
}


void __fastcall I18n::_generatePackKeyPrefix(I18n *this, const PackManifest *a2)
{
  PackManifest *v2; // r5@1
  I18n *v3; // r4@1
  char *v4; // r0@1
  char *v5; // r0@1
  const void **v6; // r0@1
  void *v7; // r0@1
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  int v10; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  PackManifest::getIdentity(a2);
  mce::UUID::asString((mce::UUID *)&v10);
  v4 = PackManifest::getIdentity(v2);
  v5 = SemVersion::asString((SemVersion *)(v4 + 16));
  v6 = sub_21E72F0((const void **)&v10, (const void **)v5);
  *(_DWORD *)v3 = *v6;
  *v6 = &unk_28898CC;
  v7 = (void *)(v10 - 12);
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
      j_j_j_j__ZdlPv_9(v7);
  }
}


void __fastcall I18n::getLocalizedAssetFileWithFallback(int *a1, int *a2, const void **a3)
{
  I18n::getLocalizedAssetFileWithFallback(a1, a2, a3);
}


int __fastcall I18n::languageSupportsHypenSplitting(I18n *this)
{
  return I18n::mLanguageSupportsHypenSplitting;
}


void __fastcall I18n::loadLanguages(ResourcePackManager *a1, SkinRepository *a2, const void **a3)
{
  I18n::loadLanguages(a1, a2, a3);
}


int __fastcall I18n::_getFormatParmas(int **a1, int a2)
{
  int v2; // r4@1
  int result; // r0@1

  v2 = a2;
  result = std::_Hashtable<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
             (unsigned __int64 *)&I18n::mFormatDictionary,
             a1);
  if ( result )
    result = j_j_j__ZNSt6vectorISsSaISsEEaSERKS1__2(v2, (unsigned __int64 *)(result + 8));
  return result;
}


void __fastcall I18n::loadAllLanguages(I18n *this, ResourcePackManager *a2)
{
  I18n *v2; // r10@1
  __int64 v3; // kr00_8@1
  int v4; // r2@1
  _DWORD *v5; // r5@2
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int *v8; // r0@11
  int v9; // r4@15
  void *v10; // r5@15
  unsigned int *v11; // r2@17
  signed int v12; // r1@19
  int *v13; // r0@25
  int v14; // r4@30
  unsigned int *v15; // r2@32
  signed int v16; // r1@34
  unsigned int *v17; // r2@36
  signed int v18; // r1@38
  int v19; // r7@48
  int v20; // r1@48
  void *v21; // r0@48
  int v22; // r1@49
  void *v23; // r0@49
  int *i; // r5@54
  int v25; // r11@54
  unsigned int *v26; // r2@56
  signed int v27; // r1@58
  int v28; // r6@65
  void *v29; // r7@67
  int v30; // r0@67
  int v31; // r7@69
  int v32; // r1@70
  void *v33; // r0@70
  int v34; // [sp+4h] [bp-54h]@67
  void *ptr; // [sp+8h] [bp-50h]@30
  int v36; // [sp+Ch] [bp-4Ch]@51
  int v37; // [sp+10h] [bp-48h]@30
  int v38; // [sp+14h] [bp-44h]@51
  int v39; // [sp+20h] [bp-38h]@52
  void *v40; // [sp+24h] [bp-34h]@1
  void *v41; // [sp+28h] [bp-30h]@1
  int v42; // [sp+2Ch] [bp-2Ch]@1

  v2 = this;
  I18n::findAvailableLanguages((I18n *)&v40, this);
  v3 = *(_QWORD *)&I18n::mLanguageCodes;
  I18n::mLanguageCodes = v40;
  v40 = 0;
  v4 = (int)v41;
  v41 = 0;
  dword_27E99D0 = v4;
  dword_27E99D4 = v42;
  v42 = 0;
  if ( (_DWORD)v3 != HIDWORD(v3) )
  {
    v5 = (_DWORD *)v3;
    do
    {
      v8 = (int *)(*v5 - 12);
      if ( v8 != &dword_28898C0 )
      {
        v6 = (unsigned int *)(*v5 - 4);
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
          j_j_j_j__ZdlPv_9(v8);
      }
      ++v5;
    }
    while ( v5 != (_DWORD *)HIDWORD(v3) );
  }
  if ( (_DWORD)v3 )
    operator delete((void *)v3);
  v9 = (int)v41;
  v10 = v40;
  if ( v40 != v41 )
      v13 = (int *)(*(_DWORD *)v10 - 12);
      if ( v13 != &dword_28898C0 )
        v11 = (unsigned int *)(*(_DWORD *)v10 - 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
      v10 = (char *)v10 + 4;
    while ( v10 != (void *)v9 );
    v10 = v40;
  if ( v10 )
    operator delete(v10);
  I18n::findAvailableLanguageNames((I18n *)&ptr, v2);
  std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_move_assign(
    (int)&I18n::mLanguageNames,
    (int)&ptr);
  v14 = v37;
  while ( v14 )
    v19 = v14;
    v20 = *(_DWORD *)(v14 + 8);
    v14 = *(_DWORD *)v14;
    v21 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v20 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      else
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    v22 = *(_DWORD *)(v19 + 4);
    v23 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v22 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    operator delete((void *)v19);
  _aeabi_memclr4(ptr, 4 * v36);
  v37 = 0;
  v38 = 0;
  if ( ptr && &v39 != ptr )
    operator delete(ptr);
  v25 = dword_27E99D0;
  for ( i = (int *)I18n::mLanguageCodes; i != (int *)v25; ++i )
    if ( I18n::mLanguages == dword_27E99C4 )
      v28 = 0;
    else
      v28 = *(_DWORD *)I18n::mLanguages;
    v29 = operator new(0x20u);
    Localization::Localization((int)v29, i, v28);
    v34 = (int)v29;
    Localization::loadFromResourcePackManager((int)v29, (int *)v2, (__int64 *)&I18n::mPackReservedKeys);
    v30 = dword_27E99C4;
    if ( dword_27E99C4 == dword_27E99C8 )
      std::vector<std::unique_ptr<Localization,std::default_delete<Localization>>,std::allocator<std::unique_ptr<Localization,std::default_delete<Localization>>>>::_M_emplace_back_aux<std::unique_ptr<Localization,std::default_delete<Localization>>>(
        &I18n::mLanguages,
        &v34);
      v31 = v34;
      if ( v34 )
        std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
          v34 + 8,
          *(_DWORD *)(v34 + 16));
        v32 = *(_DWORD *)(v31 + 4);
        v33 = (void *)(v32 - 12);
        if ( (int *)(v32 - 12) != &dword_28898C0 )
          v26 = (unsigned int *)(v32 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v27 = __ldrex(v26);
            while ( __strex(v27 - 1, v26) );
          }
          else
            v27 = (*v26)--;
          if ( v27 <= 0 )
            j_j_j_j__ZdlPv_9(v33);
        operator delete((void *)v31);
      v34 = 0;
      *(_DWORD *)dword_27E99C4 = v29;
      dword_27E99C4 = v30 + 4;
}


void __fastcall I18n::get(int *a1, int *a2, unsigned __int64 *a3)
{
  I18n::get(a1, a2, a3);
}


void __fastcall I18n::getPackKeywordValue(int *a1, const PackManifest *a2, int *a3)
{
  I18n::getPackKeywordValue(a1, a2, a3);
}


void __fastcall I18n::get(int *a1, int **a2)
{
  int *v2; // r5@1
  int *v3; // r4@1
  int v4; // r0@1
  void *v5; // r4@3
  void *v6; // r6@3
  unsigned int *v7; // r2@5
  signed int v8; // r1@7
  int *v9; // r0@13
  void *v10; // [sp+4h] [bp-34h]@1
  void *v11; // [sp+8h] [bp-30h]@1
  int v12; // [sp+Ch] [bp-2Ch]@1

  v2 = a1;
  v3 = (int *)a2;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v4 = std::_Hashtable<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)&I18n::mFormatDictionary,
         a2);
  if ( v4 )
    std::vector<std::string,std::allocator<std::string>>::operator=((int)&v10, (unsigned __int64 *)(v4 + 8));
  I18n::get(v2, v3, (unsigned __int64 *)&v10);
  v6 = v11;
  v5 = v10;
  if ( v10 != v11 )
  {
    do
    {
      v9 = (int *)(*(_DWORD *)v5 - 12);
      if ( v9 != &dword_28898C0 )
      {
        v7 = (unsigned int *)(*(_DWORD *)v5 - 4);
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
          j_j_j_j__ZdlPv_9(v9);
      }
      v5 = (char *)v5 + 4;
    }
    while ( v5 != v6 );
    v5 = v10;
  }
  if ( v5 )
    operator delete(v5);
}


void __fastcall I18n::get(int *a1, int *a2, unsigned __int64 *a3)
{
  int *v3; // r5@1
  int *v4; // r4@1
  char *v5; // r0@4
  unsigned int *v6; // r2@6
  signed int v7; // r1@8
  char *v8; // [sp+4h] [bp-1Ch]@1

  v3 = a1;
  v4 = a2;
  v8 = (char *)&unk_28898CC;
  if ( I18n::mCurrentLanguage && Localization::get(I18n::mCurrentLanguage, a2, (int *)&v8, a3) )
    v4 = (int *)&v8;
  sub_21E8AF4(v3, v4);
  v5 = v8 - 12;
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
}


int __fastcall I18n::_getAdditionalTranslationsBackupLocale(int *a1, int a2)
{
  int *v2; // r11@1
  int v3; // r4@1
  int *v4; // r6@1
  unsigned int *v5; // r1@5
  signed int v6; // r0@7
  char *v7; // r5@12
  size_t v8; // r2@12
  char *v9; // r7@12
  signed int v10; // r9@13
  int result; // r0@19
  void *v12; // r5@21
  int v13; // r0@21
  int v14; // r4@24
  int v15; // r1@25
  void *v16; // r0@25
  unsigned int *v17; // r2@28
  signed int v18; // r1@30
  int v19; // [sp+4h] [bp-3Ch]@1
  int v20; // [sp+8h] [bp-38h]@21
  void *s1; // [sp+Ch] [bp-34h]@12

  v2 = a1;
  v19 = a2;
  v3 = dword_27E99DC;
  v4 = (int *)I18n::mAdditionalTranslationsBackup;
  if ( I18n::mAdditionalTranslationsBackup == dword_27E99DC )
  {
LABEL_20:
    if ( v19 == 1 )
    {
      v12 = operator new(0x20u);
      Localization::Localization((int)v12, v2);
      v20 = (int)v12;
      v13 = dword_27E99DC;
      if ( dword_27E99DC == unk_27E99E0 )
      {
        std::vector<std::unique_ptr<Localization,std::default_delete<Localization>>,std::allocator<std::unique_ptr<Localization,std::default_delete<Localization>>>>::_M_emplace_back_aux<std::unique_ptr<Localization,std::default_delete<Localization>>>(
          &I18n::mAdditionalTranslationsBackup,
          &v20);
        v14 = v20;
        if ( v20 )
        {
          std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
            v20 + 8,
            *(_DWORD *)(v20 + 16));
          v15 = *(_DWORD *)(v14 + 4);
          v16 = (void *)(v15 - 12);
          if ( (int *)(v15 - 12) != &dword_28898C0 )
          {
            v17 = (unsigned int *)(v15 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v18 = __ldrex(v17);
              while ( __strex(v18 - 1, v17) );
            }
            else
              v18 = (*v17)--;
            if ( v18 <= 0 )
              j_j_j_j__ZdlPv_9(v16);
          }
          operator delete((void *)v14);
        }
      }
      else
        v20 = 0;
        *(_DWORD *)dword_27E99DC = v12;
        dword_27E99DC = v13 + 4;
      v20 = 0;
      result = *(_DWORD *)(dword_27E99DC - 4);
    }
    else
      result = 0;
  }
  else
    while ( 1 )
      Localization::getFullLanguageCode((Localization *)&s1, *v4);
      v7 = (char *)s1;
      v9 = (char *)s1 - 12;
      v8 = *((_DWORD *)s1 - 3);
      if ( v8 == *(_DWORD *)(*v2 - 12) )
        v10 = 0;
        if ( !memcmp(s1, (const void *)*v2, v8) )
          v10 = 1;
      if ( (int *)v9 != &dword_28898C0 )
        v5 = (unsigned int *)(v7 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        else
          v6 = (*v5)--;
        if ( v6 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      if ( v10 == 1 )
        break;
      ++v4;
      if ( v4 == (int *)v3 )
        goto LABEL_20;
    result = *v4;
  return result;
}


_DWORD *__fastcall I18n::getSupportedLanguageCodes(I18n *this)
{
  return &I18n::mLanguageCodes;
}
