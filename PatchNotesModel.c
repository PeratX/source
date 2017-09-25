

PatchNotesModel *__fastcall PatchNotesModel::~PatchNotesModel(PatchNotesModel *this)
{
  PatchNotesModel *v1; // r5@1
  int v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  int v5; // r1@4
  void *v6; // r0@4
  int v7; // r1@5
  void *v8; // r0@5
  char *v9; // r0@6
  int *v10; // r0@9
  unsigned int *v12; // r2@11
  signed int v13; // r1@13
  unsigned int *v14; // r2@15
  signed int v15; // r1@17
  unsigned int *v16; // r2@19
  signed int v17; // r1@21
  unsigned int *v18; // r2@23
  signed int v19; // r1@25

  v1 = this;
  v2 = *((_DWORD *)this + 11);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 11) = 0;
  v3 = *((_DWORD *)v1 + 10);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v3 - 4);
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
      j_j_j_j_j__ZdlPv_9(v4);
  }
  v5 = *((_DWORD *)v1 + 9);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v5 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9(v6);
  v7 = *((_DWORD *)v1 + 8);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v7 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9(v8);
  std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)v1 + 4);
  v9 = (char *)*((_DWORD *)v1 + 1);
  if ( v9 && (char *)v1 + 28 != v9 )
    operator delete(v9);
  v10 = (int *)(*(_DWORD *)v1 - 12);
  if ( v10 != &dword_28898C0 )
    v18 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  return v1;
}


void __fastcall PatchNotesModel::_getVersionString(PatchNotesModel *this)
{
  PatchNotesModel::_getVersionString(this);
}


PatchNotesModel *__fastcall PatchNotesModel::shouldPreloadPatchNotes(PatchNotesModel *this)
{
  PatchNotesModel *result; // r0@1

  result = PatchNotesModel::mPreloadedPatchNotes[0];
  if ( PatchNotesModel::mPreloadedPatchNotes[0] )
    result = (PatchNotesModel *)1;
  return result;
}


int __fastcall PatchNotesModel::PatchNotesModel(double a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  int v3; // r6@3
  void *v4; // r5@3
  int result; // r0@4

  v1 = LODWORD(a1);
  *(_DWORD *)LODWORD(a1) = &unk_28898CC;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = 0;
  *(_DWORD *)(LODWORD(a1) + 20) = 1065353216;
  LODWORD(a1) += 20;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v2 = sub_DA7744(a1);
  *(_DWORD *)(v1 + 8) = v2;
  if ( v2 == 1 )
  {
    *(_DWORD *)(v1 + 28) = 0;
    v4 = (void *)(v1 + 28);
  }
  else
    if ( v2 >= 0x40000000 )
      sub_DA7414();
    v3 = 4 * v2;
    v4 = operator new(4 * v2);
    _aeabi_memclr4(v4, v3);
  *(_DWORD *)(v1 + 4) = v4;
  *(_DWORD *)(v1 + 32) = &unk_28898CC;
  *(_DWORD *)(v1 + 36) = &unk_28898CC;
  *(_QWORD *)(v1 + 40) = (unsigned int)&unk_28898CC;
  result = v1;
  *(_DWORD *)(v1 + 48) = 0;
  *(_DWORD *)(v1 + 52) = 0;
  return result;
}


char *__fastcall PatchNotesModel::getPatchDescription(PatchNotesModel *this, int a2)
{
  const void **v2; // r9@1
  int v3; // r10@1
  int v4; // r0@1
  int v5; // r7@1
  int v6; // r5@1
  const void **v7; // r0@1
  const void **v8; // r0@1
  const char *v9; // r6@1
  _DWORD *v10; // r4@1
  int *v11; // r4@1
  int v12; // t1@1
  char *v13; // r0@2
  void *v14; // r0@3
  __int64 v15; // r0@5
  unsigned __int64 v16; // r2@5
  int v17; // r1@6
  void *v18; // r0@9
  void *v19; // r0@10
  char *result; // r0@11
  unsigned int *v21; // r1@13
  signed int v22; // r0@15
  unsigned int *v23; // r2@17
  signed int v24; // r1@19
  unsigned int *v25; // r2@21
  signed int v26; // r1@23
  unsigned int *v27; // r2@25
  signed int v28; // r1@27
  unsigned int *v29; // r2@29
  signed int v30; // r1@31
  RakNet *v31; // [sp+14h] [bp-195Ch]@1
  unsigned int v32; // [sp+18h] [bp-1958h]@8
  int v33; // [sp+2Ch] [bp-1944h]@4
  int v34; // [sp+30h] [bp-1940h]@4
  int v35; // [sp+38h] [bp-1938h]@1
  char *v36; // [sp+3Ch] [bp-1934h]@1
  int v37; // [sp+40h] [bp-1930h]@1
  int v38; // [sp+44h] [bp-192Ch]@1
  int v39; // [sp+48h] [bp-1928h]@1
  int v40; // [sp+4Ch] [bp-1924h]@1
  const char *v41; // [sp+50h] [bp-1920h]@1
  int v42; // [sp+54h] [bp-191Ch]@1
  __int64 v43; // [sp+60h] [bp-1910h]@5
  __int64 v44; // [sp+70h] [bp-1900h]@6
  char v45; // [sp+78h] [bp-18F8h]@6
  int v46; // [sp+7Ch] [bp-18F4h]@6
  int v47; // [sp+47Ch] [bp-14F4h]@6
  void **v48; // [sp+480h] [bp-14F0h]@4
  int v49; // [sp+484h] [bp-14ECh]@9
  void **v50; // [sp+488h] [bp-14E8h]@4
  int v51; // [sp+48Ch] [bp-14E4h]@9
  void **v52; // [sp+14BCh] [bp-4B4h]@4
  int v53; // [sp+14D0h] [bp-4A0h]@7
  int v54; // [sp+152Ch] [bp-444h]@4
  __int16 v55; // [sp+1530h] [bp-440h]@4
  int v56; // [sp+1534h] [bp-43Ch]@4
  int v57; // [sp+1538h] [bp-438h]@4
  int v58; // [sp+153Ch] [bp-434h]@4
  int v59; // [sp+1540h] [bp-430h]@4
  int v60; // [sp+1544h] [bp-42Ch]@1
  int v61; // [sp+1548h] [bp-428h]@1

  v2 = (const void **)this;
  v3 = a2;
  v31 = _stack_chk_guard;
  *(_DWORD *)this = &unk_28898CC;
  v4 = I18n::getCurrentLanguage((I18n *)&unk_28898CC);
  Localization::getFullLanguageCode((Localization *)&v38, v4);
  v5 = *(_DWORD *)(v3 + 32);
  v6 = *(_DWORD *)(v5 - 12);
  sub_DA7364((void **)&v35, "patch_notes_");
  v7 = sub_DA7564((const void **)&v35, (const void **)&v38);
  v36 = (char *)*v7;
  *v7 = &unk_28898CC;
  v8 = sub_DA73D4((const void **)&v36, ".txt", 4u);
  v9 = (const char *)*v8;
  v10 = *v8;
  *v8 = &unk_28898CC;
  v12 = *(v10 - 3);
  v11 = v10 - 3;
  v39 = v5;
  v40 = v6;
  v41 = v9;
  v42 = v12;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v60, (int)&v39, 2);
  sub_DA7364((void **)&v37, (const char *)&v61);
  if ( v11 != &dword_28898C0 )
  {
    v21 = (unsigned int *)(v9 - 4);
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
      j_j_j_j_j__ZdlPv_9(v11);
  }
  v13 = v36 - 12;
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v36 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v35 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9(v14);
  sub_DA8F44((int)&v52);
  v52 = &off_26D3AF0;
  v54 = 0;
  v55 = 0;
  v59 = 0;
  v58 = 0;
  v57 = 0;
  v56 = 0;
  Core::FileStream::FileStream((Core::FileStream *)&v48, (int)off_26D7EA4);
  v48 = &off_26D7E64;
  v52 = &off_26D7E8C;
  v50 = &off_26D7E78;
  v33 = v37;
  v34 = *(_DWORD *)(v37 - 12);
  if ( Core::FileSystem::fileExists((__int64 *)&v33) == 1 )
    LODWORD(v15) = v37;
    HIDWORD(v15) = *(_DWORD *)(v37 - 12);
    v43 = v15;
    Core::FileStream::open((int)&v48, &v43, 8);
  else
    v17 = *(_DWORD *)(*(_DWORD *)(v3 + 32) - 12);
    v39 = *(_DWORD *)(v3 + 32);
    v40 = v17;
    v41 = "patch_notes_en_US.txt";
    v42 = -1;
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v45, (int)&v39, 2);
    LODWORD(v44) = &v46;
    HIDWORD(v44) = v47;
    Core::FileStream::open((int)&v48, &v44, 8);
  if ( !v53 )
    sub_DA96E4((char *)&v48);
    sub_DA96F4((int)&v32, (char *)&v48);
    sub_DA7404(v2, v32);
    std::string::_M_replace_dispatch<std::istreambuf_iterator<char,std::char_traits<char>>>(
      v2,
      (int)*v2,
      (int)*v2 + *((_DWORD *)*v2 - 3),
      *(_DWORD *)((char *)*(v48 - 3) + (_DWORD)&v48 + 120),
      -1,
      0,
      -1);
    Util::normalizeLineEndings((int *)v2);
  v48 = &off_26D7EEC;
  v52 = &off_26D7F14;
  v50 = &off_26D7F00;
  Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v51, (int)&off_26D7F14, v16);
  v48 = &off_26D7F6C;
  v52 = &off_26D7F80;
  v49 = 0;
  sub_DA76E4(&v52);
  v18 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v37 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v38 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9(v19);
  result = (char *)(_stack_chk_guard - v31);
  if ( _stack_chk_guard != v31 )
    _stack_chk_fail(result);
  return result;
}


const void **__fastcall PatchNotesModel::_getStringWithCurrentLanguage(I18n *a1)
{
  I18n *v1; // r5@1
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
  unsigned __int64 v15; // kr08_8@8
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
  unsigned __int64 *v33; // [sp+0h] [bp-40h]@1
  void *v34; // [sp+8h] [bp-38h]@8
  void *s1; // [sp+Ch] [bp-34h]@1

  v1 = a1;
  v2 = I18n::getCurrentLanguage(a1);
  Localization::getFullLanguageCode((Localization *)&s1, v2);
  v3 = sub_DA7754((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v4 = *(_QWORD *)v1;
  v33 = (unsigned __int64 *)v1;
  v5 = v3 % (unsigned int)(*(_QWORD *)v1 >> 32);
  v6 = *(int **)(*(_QWORD *)v1 + 4 * v5);
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
    sub_DA7364(&v34, "en_US");
    v14 = sub_DA7754((int *)v34, *((_DWORD *)v34 - 3), -955291385);
    v15 = *v33;
    v16 = v14 % (*v33 >> 32);
    v17 = *(_DWORD *)(*v33 + 4 * v16);
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
        j_j_j_j_j__ZdlPv_9(v19 - 3);
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
      j_j_j_j_j__ZdlPv_9(v27);
  return v26;
}


void __fastcall PatchNotesModel::preloadPatchNotes(PatchNotesModel *this)
{
  PatchNotesModel::preloadPatchNotes(this);
}


Json::Value *__fastcall PatchNotesModel::_processSearchResponse(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r7@2
  void *v4; // r0@2
  void *v5; // r0@3
  size_t v6; // r2@4
  signed int v7; // r0@6
  Json::Value *result; // r0@7
  ContentCatalogService *v9; // r6@13
  _DWORD *v10; // r0@13
  char *v11; // r0@15
  void *v12; // r0@16
  void *v13; // r0@17
  void *v14; // r0@18
  char *v15; // r0@19
  char *v16; // r0@20
  char *v17; // r0@21
  unsigned int *v18; // r2@23
  signed int v19; // r1@25
  unsigned int *v20; // r2@27
  signed int v21; // r1@29
  unsigned int *v22; // r2@31
  signed int v23; // r1@33
  unsigned int *v24; // r2@35
  signed int v25; // r1@37
  unsigned int *v26; // r2@55
  signed int v27; // r1@57
  unsigned int *v28; // r2@59
  signed int v29; // r1@61
  unsigned int *v30; // r2@63
  signed int v31; // r1@65
  unsigned int *v32; // r2@67
  signed int v33; // r1@69
  unsigned int *v34; // r2@71
  signed int v35; // r1@73
  char *v36; // [sp+8h] [bp-78h]@13
  _DWORD *v37; // [sp+Ch] [bp-74h]@13
  void (*v38)(void); // [sp+14h] [bp-6Ch]@13
  Json::Value *(__fastcall *v39)(int **, int); // [sp+18h] [bp-68h]@13
  char *v40; // [sp+1Ch] [bp-64h]@13
  int v41; // [sp+20h] [bp-60h]@13
  int v42; // [sp+24h] [bp-5Ch]@17
  int v43; // [sp+28h] [bp-58h]@16
  void *s1; // [sp+30h] [bp-50h]@4
  int v45; // [sp+38h] [bp-48h]@2
  int v46; // [sp+40h] [bp-40h]@2
  void *s2; // [sp+44h] [bp-3Ch]@2
  char v48; // [sp+48h] [bp-38h]@2

  v2 = a1;
  if ( *(_DWORD *)a2 < 1 )
  {
    result = (Json::Value *)1;
    *(_BYTE *)(v2 + 52) = 1;
  }
  else
    v3 = *(_DWORD *)(a2 + 8);
    CatalogInfo::CatalogInfo((CatalogInfo *)&v48);
    sub_DA7364((void **)&v46, "last_seen_patch_notes");
    sub_DA7364((void **)&v45, (const char *)&unk_257BC67);
    CatalogInfo::get<std::string>((int *)&s2, (Json::Value *)&v48, (const char **)&v46, &v45);
    v4 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) != &dword_28898C0 )
    {
      v18 = (unsigned int *)(v45 - 4);
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
        j_j_j_j_j__ZdlPv_9(v4);
    }
    v5 = (void *)(v46 - 12);
    if ( (int *)(v46 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v46 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j_j__ZdlPv_9(v5);
    sub_DA73B4((int *)&s1, (int *)(v3 - 12));
    v6 = *((_DWORD *)s2 - 3);
    if ( v6 )
      if ( *((_DWORD *)s1 - 3) == v6 )
        v7 = memcmp(s1, s2, v6) != 0;
        v7 = 1;
    else
      v7 = 1;
    *(_BYTE *)(v2 + 53) = v7;
    if ( v7 || !*(_BYTE *)(v2 + 54) )
      v9 = *(ContentCatalogService **)(v2 + 44);
      v40 = (char *)&unk_28898CC;
      HydrateParams::HydrateParams(&v41, (int *)(v3 - 60), (int *)(v3 - 12), &v40);
      sub_DA73B4((int *)&v36, (int *)&s1);
      v38 = 0;
      v10 = operator new(8u);
      *v10 = v2;
      v10[1] = v36;
      v36 = (char *)&unk_28898CC;
      v37 = v10;
      v38 = (void (*)(void))sub_CF4D0C;
      v39 = sub_CF4D00;
      ContentCatalogService::hydrateItem(v9, &v41, (int)&v37);
      if ( v38 )
        v38();
      v11 = v36 - 12;
      if ( (int *)(v36 - 12) != &dword_28898C0 )
        v26 = (unsigned int *)(v36 - 4);
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
          j_j_j_j_j__ZdlPv_9(v11);
      v12 = (void *)(v43 - 12);
      if ( (int *)(v43 - 12) != &dword_28898C0 )
        v28 = (unsigned int *)(v43 - 4);
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
          v29 = (*v28)--;
        if ( v29 <= 0 )
          j_j_j_j_j__ZdlPv_9(v12);
      v13 = (void *)(v42 - 12);
      if ( (int *)(v42 - 12) != &dword_28898C0 )
        v30 = (unsigned int *)(v42 - 4);
            v31 = __ldrex(v30);
          while ( __strex(v31 - 1, v30) );
          v31 = (*v30)--;
        if ( v31 <= 0 )
          j_j_j_j_j__ZdlPv_9(v13);
      v14 = (void *)(v41 - 12);
      if ( (int *)(v41 - 12) != &dword_28898C0 )
        v32 = (unsigned int *)(v41 - 4);
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
          v33 = (*v32)--;
        if ( v33 <= 0 )
          j_j_j_j_j__ZdlPv_9(v14);
      v15 = v40 - 12;
      if ( (int *)(v40 - 12) != &dword_28898C0 )
        v34 = (unsigned int *)(v40 - 4);
            v35 = __ldrex(v34);
          while ( __strex(v35 - 1, v34) );
          v35 = (*v34)--;
        if ( v35 <= 0 )
          j_j_j_j_j__ZdlPv_9(v15);
      *(_BYTE *)(v2 + 52) = 1;
    v16 = (char *)s1 - 12;
    if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)((char *)s1 - 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j_j__ZdlPv_9(v16);
    v17 = (char *)s2 - 12;
    if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)((char *)s2 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j_j__ZdlPv_9(v17);
    result = CatalogInfo::~CatalogInfo((CatalogInfo *)&v48);
  return result;
}


PatchNotesModel **__fastcall PatchNotesModel::getPreloadedPatchNotes(PatchNotesModel *this)
{
  return PatchNotesModel::mPreloadedPatchNotes;
}


void __fastcall PatchNotesModel::fetch(PatchNotesModel *this, bool a2)
{
  PatchNotesModel::fetch(this, a2);
}


char *__fastcall PatchNotesModel::getOfferImage(PatchNotesModel *this)
{
  return (char *)this + 40;
}


Json::Value *__fastcall PatchNotesModel::_processItemResponse(int a1, int a2, const char **a3)
{
  int v3; // r6@1
  int v4; // r10@1
  const char **v5; // r9@1
  Json::Value *v6; // r4@3
  int *v7; // r5@6
  ContentCatalogService *v8; // r4@7
  _DWORD *v9; // r0@7
  __int64 v10; // r1@7
  void *v11; // r0@9
  void *v12; // r0@10
  void *v13; // r0@11
  char *v14; // r0@12
  void *v15; // r0@13
  __int64 v16; // r4@14
  int v17; // r7@15
  int v18; // r4@16
  void *v19; // r0@16
  const char *v20; // r0@18
  int v21; // r11@19
  Json::Value *v22; // r0@19
  char v23; // r0@19
  void *v24; // r0@20
  unsigned int *v25; // r2@22
  signed int v26; // r1@24
  int v27; // r0@31
  void *v28; // r0@31
  __int64 v29; // kr00_8@34
  int v30; // r5@35
  _DWORD *v31; // r0@35
  __int64 v32; // r1@35
  __int64 v33; // kr08_8@38
  int v34; // r4@39
  _DWORD *v35; // r0@39
  __int64 v36; // r1@39
  int v37; // r4@43
  void *v38; // r0@43
  int *v39; // r4@44
  int *v40; // r6@44
  unsigned int *v41; // r2@46
  signed int v42; // r1@48
  int *v43; // r0@54
  unsigned int *v45; // r2@60
  signed int v46; // r1@62
  unsigned int *v47; // r2@64
  signed int v48; // r1@66
  unsigned int *v49; // r2@68
  signed int v50; // r1@70
  unsigned int *v51; // r2@72
  signed int v52; // r1@74
  unsigned int *v53; // r2@76
  signed int v54; // r1@78
  unsigned int *v55; // r2@80
  signed int v56; // r1@82
  unsigned int *v57; // r2@108
  signed int v58; // r1@110
  unsigned int *v59; // r2@116
  signed int v60; // r1@118
  int v61; // [sp+1Ch] [bp-134h]@43
  _DWORD *v62; // [sp+20h] [bp-130h]@39
  __int64 v63; // [sp+28h] [bp-128h]@39
  _DWORD *v64; // [sp+30h] [bp-120h]@35
  __int64 v65; // [sp+38h] [bp-118h]@35
  int v66; // [sp+44h] [bp-10Ch]@31
  char v67; // [sp+48h] [bp-108h]@19
  int v68; // [sp+5Ch] [bp-F4h]@18
  char v69; // [sp+60h] [bp-F0h]@30
  char v70; // [sp+68h] [bp-E8h]@17
  int v71; // [sp+74h] [bp-DCh]@16
  char v72; // [sp+78h] [bp-D8h]@15
  char v73; // [sp+88h] [bp-C8h]@14
  _DWORD *v74; // [sp+9Ch] [bp-B4h]@7
  __int64 v75; // [sp+A4h] [bp-ACh]@7
  char *v76; // [sp+ACh] [bp-A4h]@7
  int v77; // [sp+B4h] [bp-9Ch]@7
  int v78; // [sp+B8h] [bp-98h]@7
  int v79; // [sp+BCh] [bp-94h]@10
  int v80; // [sp+C0h] [bp-90h]@9
  char v81; // [sp+C8h] [bp-88h]@6
  int *v82; // [sp+ECh] [bp-64h]@4
  int *v83; // [sp+F0h] [bp-60h]@5
  int v84; // [sp+F4h] [bp-5Ch]@5
  char v85; // [sp+F8h] [bp-58h]@1
  char v86; // [sp+114h] [bp-3Ch]@4
  char v87; // [sp+118h] [bp-38h]@43

  v3 = a2;
  v4 = a1;
  v5 = a3;
  PropertyBag::PropertyBag(&v85, (int *)(a2 + 72));
  std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::operator=(
    (unsigned __int64 *)(v4 + 4),
    v3 + 4);
  if ( Json::Value::isNull((Json::Value *)&v85)
    || Json::Value::isObject((Json::Value *)&v85) != 1
    || (v6 = (Json::Value *)Json::Value::operator[]((int)&v85, "offers"), Json::Value::isArray(v6) != 1) )
  {
    v82 = 0;
    v83 = 0;
    v84 = 0;
  }
  else
    jsonValConversion<std::vector<std::string,std::allocator<std::string>>>::as((int)&v82, (int)&v86, v6);
  CatalogInfo::CatalogInfo((CatalogInfo *)&v81);
  v7 = v82;
  if ( v82 == v83 )
    *(_WORD *)(v4 + 50) = 257;
    v8 = *(ContentCatalogService **)(v4 + 44);
    sub_DA7364((void **)&v77, (const char *)&unk_257BC67);
    v76 = (char *)&unk_28898CC;
    HydrateParams::HydrateParams(&v78, v7, &v77, &v76);
    v9 = operator new(4u);
    LODWORD(v10) = sub_CF4E7C;
    *v9 = v4;
    HIDWORD(v10) = sub_CF4DAC;
    v74 = v9;
    v75 = v10;
    ContentCatalogService::hydrateItem(v8, &v78, (int)&v74);
    if ( (_DWORD)v75 )
      ((void (*)(void))v75)();
    v11 = (void *)(v80 - 12);
    if ( (int *)(v80 - 12) != &dword_28898C0 )
    {
      v45 = (unsigned int *)(v80 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
      }
      else
        v46 = (*v45)--;
      if ( v46 <= 0 )
        j_j_j_j_j__ZdlPv_9(v11);
    }
    v12 = (void *)(v79 - 12);
    if ( (int *)(v79 - 12) != &dword_28898C0 )
      v47 = (unsigned int *)(v79 - 4);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 <= 0 )
        j_j_j_j_j__ZdlPv_9(v12);
    v13 = (void *)(v78 - 12);
    if ( (int *)(v78 - 12) != &dword_28898C0 )
      v49 = (unsigned int *)(v78 - 4);
          v50 = __ldrex(v49);
        while ( __strex(v50 - 1, v49) );
        v50 = (*v49)--;
      if ( v50 <= 0 )
        j_j_j_j_j__ZdlPv_9(v13);
    v14 = v76 - 12;
    if ( (int *)(v76 - 12) != &dword_28898C0 )
      v51 = (unsigned int *)(v76 - 4);
          v52 = __ldrex(v51);
        while ( __strex(v52 - 1, v51) );
        v52 = (*v51)--;
      if ( v52 <= 0 )
        j_j_j_j_j__ZdlPv_9(v14);
    v15 = (void *)(v77 - 12);
    if ( (int *)(v77 - 12) != &dword_28898C0 )
      v53 = (unsigned int *)(v77 - 4);
          v54 = __ldrex(v53);
        while ( __strex(v54 - 1, v53) );
        v54 = (*v53)--;
      if ( v54 <= 0 )
        j_j_j_j_j__ZdlPv_9(v15);
    Json::Value::Value(&v73, 0);
    v16 = *(_QWORD *)&v82;
    if ( v82 != v83 )
      do
        v17 = Json::Value::operator[]((Json::Value *)&v73, (const char **)v16);
        Json::Value::Value((Json::Value *)&v72, 1);
        Json::Value::operator=(v17, (const Json::Value *)&v72);
        Json::Value::~Value((Json::Value *)&v72);
        LODWORD(v16) = v16 + 4;
      while ( HIDWORD(v16) != (_DWORD)v16 );
    sub_DA7364((void **)&v71, "newProductIds");
    v18 = CatalogInfo::getAsJsonValue((Json::Value *)&v81, (const char **)&v71);
    v19 = (void *)(v71 - 12);
    if ( (int *)(v71 - 12) != &dword_28898C0 )
      v55 = (unsigned int *)(v71 - 4);
          v56 = __ldrex(v55);
        while ( __strex(v56 - 1, v55) );
        v56 = (*v55)--;
      if ( v56 <= 0 )
        j_j_j_j_j__ZdlPv_9(v19);
    Json::Value::begin((Json::Value *)&v70, v18);
    while ( 1 )
      Json::Value::end((Json::Value *)&v69, v18);
      if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v70, (const Json::ValueIteratorBase *)&v69) == 1 )
        break;
      v20 = (const char *)Json::ValueIteratorBase::memberName((Json::ValueIteratorBase *)&v70);
      sub_DA7364((void **)&v68, v20);
      if ( Json::Value::isMember((int)&v73, (const char **)&v68) == 1 )
        v21 = Json::Value::operator[]((Json::Value *)&v73, (const char **)&v68);
        v22 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v70);
        v23 = Json::Value::asBool(v22, 0);
        Json::Value::Value((Json::Value *)&v67, v23);
        Json::Value::operator=(v21, (const Json::Value *)&v67);
        Json::Value::~Value((Json::Value *)&v67);
      v24 = (void *)(v68 - 12);
      if ( (int *)(v68 - 12) != &dword_28898C0 )
        v25 = (unsigned int *)(v68 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
        }
        else
          v26 = (*v25)--;
        if ( v26 <= 0 )
          j_j_j_j_j__ZdlPv_9(v24);
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v70);
    sub_DA7364((void **)&v66, "newProductIds");
    v27 = Json::Value::operator[]((Json::Value *)&v81, (const char **)&v66);
    Json::Value::operator=(v27, (const Json::Value *)&v73);
    v28 = (void *)(v66 - 12);
    if ( (int *)(v66 - 12) != &dword_28898C0 )
      v59 = (unsigned int *)(v66 - 4);
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
        v60 = (*v59)--;
      if ( v60 <= 0 )
        j_j_j_j_j__ZdlPv_9(v28);
    Json::Value::~Value((Json::Value *)&v73);
  v29 = *(_QWORD *)(v3 + 100);
  if ( (_DWORD)v29 == HIDWORD(v29) )
    *(_BYTE *)(v4 + 52) = 1;
    v30 = *(_DWORD *)(v4 + 44);
    v31 = operator new(4u);
    LODWORD(v32) = sub_CF4F12;
    *v31 = v4;
    HIDWORD(v32) = sub_CF4EFE;
    v64 = v31;
    v65 = v32;
    ContentCatalogService::fetchFileData(v30, (int *)v29, (int)&v64);
    if ( (_DWORD)v65 )
      ((void (*)(void))v65)();
  v33 = *(_QWORD *)(v3 + 88);
  if ( (_DWORD)v33 == HIDWORD(v33) )
    v34 = *(_DWORD *)(v4 + 44);
    v35 = operator new(4u);
    LODWORD(v36) = sub_CF4F66;
    *v35 = v4;
    HIDWORD(v36) = sub_CF4F48;
    v62 = v35;
    v63 = v36;
    ContentCatalogService::fetchFileData(v34, (int *)(v33 + 8), (int)&v62);
    if ( (_DWORD)v63 )
      ((void (*)(void))v63)();
  if ( !*(_BYTE *)(v4 + 52) )
    sub_DA7364((void **)&v61, "last_seen_patch_notes");
    v37 = Json::Value::operator[]((Json::Value *)&v81, (const char **)&v61);
    Json::Value::Value((int)&v87, v5);
    Json::Value::operator=(v37, (const Json::Value *)&v87);
    Json::Value::~Value((Json::Value *)&v87);
    v38 = (void *)(v61 - 12);
    if ( (int *)(v61 - 12) != &dword_28898C0 )
      v57 = (unsigned int *)(v61 - 4);
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
        v58 = (*v57)--;
      if ( v58 <= 0 )
        j_j_j_j_j__ZdlPv_9(v38);
  CatalogInfo::save((CatalogInfo *)&v81);
  CatalogInfo::~CatalogInfo((CatalogInfo *)&v81);
  v40 = v83;
  v39 = v82;
  if ( v82 != v83 )
    do
      v43 = (int *)(*v39 - 12);
      if ( v43 != &dword_28898C0 )
        v41 = (unsigned int *)(*v39 - 4);
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
          v42 = (*v41)--;
        if ( v42 <= 0 )
          j_j_j_j_j__ZdlPv_9(v43);
      ++v39;
    while ( v39 != v40 );
    v39 = v82;
  if ( v39 )
    operator delete(v39);
  return Json::Value::~Value((Json::Value *)&v85);
}


char *__fastcall PatchNotesModel::getOfferProductId(PatchNotesModel *this)
{
  return (char *)this + 36;
}


void __fastcall PatchNotesModel::_unzipDescription(int a1, int *a2)
{
  PatchNotesModel::_unzipDescription(a1, a2);
}


unsigned int __fastcall PatchNotesModel::ready(PatchNotesModel *this)
{
  unsigned int result; // r0@2
  unsigned int v2; // r0@3
  signed int v3; // r1@3
  int v4; // r2@5

  if ( *((_BYTE *)this + 49) )
  {
    v2 = *((_DWORD *)this + 12);
    v3 = v2 >> 24;
    if ( v2 >> 24 )
      v3 = 1;
    v4 = v2 & 0xFF0000;
    if ( v2 & 0xFF0000 )
      v4 = 1;
    v2 = (unsigned __int8)v2;
    if ( (_BYTE)v2 )
      v2 = 1;
    result = v2 & v4 & v3;
  }
  else
    result = 0;
  return result;
}


            if ( PatchNotesModel::ready(v9) == 1 )
{
              MinecraftScreenModel::leaveScreen((MinecraftScreenModel *)v1);
              v13 = *(PatchNotesModel **)(v1 + 84);
              *(_DWORD *)(v1 + 84) = 0;
              v16 = v13;
              MainMenuScreenModel::navigateToPatchNotesScreen(v1, &v16);
              if ( v16 )
              {
                v14 = PatchNotesModel::~PatchNotesModel(v16);
                operator delete((void *)v14);
              }
              v16 = 0;
            }
            else if ( PatchNotesModel::failed(v9) == 1 )
            {
          }
          if ( &pthread_create )
          {
            __dmb();
            do
              result = __ldrex(v5);
            while ( __strex(result - 1, v5) );
          else
            result = (*v5)--;
          if ( result == 1 )
            v15 = (unsigned int *)(v3 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
            if ( &pthread_create )
              __dmb();
              do
                result = __ldrex(v15);
              while ( __strex(result - 1, v15) );
            else
              result = (*v15)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          return result;
        }
      }
      else
      {
        __clrex();
        v4 = v6;
    }
  }
  return result;
}


void __fastcall PatchNotesModel::preloadPatchNotes(PatchNotesModel *this)
{
  if ( PatchNotesModel::mPreloadedPatchNotes[0] )
    j_j_j__ZN15PatchNotesModel5fetchEb(PatchNotesModel::mPreloadedPatchNotes[0], 1);
}


void __fastcall PatchNotesModel::fetch(PatchNotesModel *this, bool a2)
{
  PatchNotesModel *v2; // r4@1
  bool v3; // r5@1
  AppPlatform **v4; // r0@3
  int *v5; // r0@5
  int *v6; // r0@5
  int v7; // r1@5
  int v8; // r0@5
  void *v9; // r0@7
  ContentCatalogService *v10; // r5@8
  _DWORD *v11; // r0@8
  __int64 v12; // r1@8
  void *v13; // r0@10
  void *v14; // r0@11
  unsigned int *v15; // r2@13
  signed int v16; // r1@15
  unsigned int *v17; // r2@17
  signed int v18; // r1@19
  unsigned int *v19; // r2@29
  signed int v20; // r1@31
  _DWORD *v21; // [sp+4h] [bp-64h]@8
  __int64 v22; // [sp+Ch] [bp-5Ch]@8
  int v23[11]; // [sp+14h] [bp-54h]@8
  int v24; // [sp+40h] [bp-28h]@8
  int v25; // [sp+48h] [bp-20h]@8
  int v26; // [sp+4Ch] [bp-1Ch]@5
  int v27; // [sp+50h] [bp-18h]@5

  v2 = this;
  v3 = a2;
  if ( !*((_DWORD *)this + 11) )
  {
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v4 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v4 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
    v5 = AppPlatform::getTempPath(*v4);
    v6 = sub_DA73B4(&v26, v5);
    sub_DA73D4((const void **)v6, "/ContentCache/PatchNotes", 0x18u);
    std::make_unique<ContentCatalogService,std::string>(&v27, &v26);
    v7 = v27;
    v27 = 0;
    v8 = *((_DWORD *)v2 + 11);
    *((_DWORD *)v2 + 11) = v7;
    if ( v8 )
      (*(void (**)(void))(*(_DWORD *)v8 + 4))();
    v9 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
    {
      v19 = (unsigned int *)(v26 - 4);
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
        j_j_j_j_j__ZdlPv_9(v9);
    }
  }
  *((_BYTE *)v2 + 54) = v3;
  sub_DA7364((void **)&v25, "minecraft");
  PatchNotesModel::_getVersionString((PatchNotesModel *)&v24);
  SearchQuery::SearchQuery((int)v23, (int *)&CatalogContentType::PatchNotes);
  SearchQuery::setPlatform((int)v23, &v25);
  SearchQuery::addTag((int)v23, &v24);
  v10 = (ContentCatalogService *)*((_DWORD *)v2 + 11);
  v11 = operator new(4u);
  LODWORD(v12) = sub_CF4864;
  *v11 = v2;
  HIDWORD(v12) = sub_CF485C;
  v21 = v11;
  v22 = v12;
  ContentCatalogService::searchCatalog(v10, v23, (int)&v21);
  if ( (_DWORD)v22 )
    ((void (*)(void))v22)();
  SearchQuery::~SearchQuery((SearchQuery *)v23);
  v13 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v25 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v14);
}


int __fastcall PatchNotesModel::update(PatchNotesModel *this)
{
  int result; // r0@1

  result = *((_DWORD *)this + 11);
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 8))();
  return result;
}


void __fastcall PatchNotesModel::_unzipDescription(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r5@1
  AppPlatform **v4; // r0@2
  int *v5; // r0@4
  int *v6; // r0@4
  signed int v7; // r5@8
  void *v8; // r0@10
  unsigned int *v9; // r2@12
  signed int v10; // r1@14
  char v11; // [sp+4h] [bp-94h]@8
  int v12; // [sp+40h] [bp-58h]@6
  int v13; // [sp+44h] [bp-54h]@6
  char v14; // [sp+48h] [bp-50h]@6
  void (*v15)(void); // [sp+50h] [bp-48h]@6
  char v16; // [sp+5Ch] [bp-3Ch]@6
  int v17; // [sp+64h] [bp-34h]@4
  int v18; // [sp+68h] [bp-30h]@4
  char v19; // [sp+6Ch] [bp-2Ch]@4
  void (*v20)(void); // [sp+74h] [bp-24h]@4
  int v21; // [sp+80h] [bp-18h]@4

  v2 = a1;
  v3 = a2;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v4 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v4 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v5 = AppPlatform::getTempPath(*v4);
  v6 = sub_DA73B4(&v21, v5);
  sub_DA73D4((const void **)v6, "/ContentCache/PatchNotes/DescriptionFiles/", 0x2Au);
  v17 = v21;
  v18 = *(_DWORD *)(v21 - 12);
  Core::FileSystem::deleteDirectoryAndContentsRecursively((int)&v19, (__int64 *)&v17);
  if ( v20 )
    v20();
  ZipUtils::ZipProgress::ZipProgress((ZipUtils::ZipProgress *)&v16);
  v12 = v21;
  v13 = *(_DWORD *)(v21 - 12);
  Core::FileSystem::createDirectoryRecursively((int)&v14, (__int64 *)&v12);
  if ( v15 )
    v15();
  ZipUtils::UnzipSettings::UnzipSettings((ZipUtils::UnzipSettings *)&v11);
  v7 = ZipUtils::unzip(v3, &v21, (int)&v16, (int)&v11);
  ZipUtils::UnzipSettings::~UnzipSettings((ZipUtils::UnzipSettings *)&v11);
  if ( !v7 )
    EntityInteraction::setInteractText((int *)(v2 + 32), &v21);
  ZipUtils::ZipProgress::~ZipProgress((ZipUtils::ZipProgress *)&v16);
  v8 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v21 - 4);
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
      j_j_j_j_j__ZdlPv_9(v8);
  }
}


void __fastcall PatchNotesModel::_getVersionString(PatchNotesModel *this)
{
  PatchNotesModel *v1; // r4@1
  const void **v2; // r0@1
  void *v3; // r0@1
  void *v4; // r0@2
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  unsigned int *v7; // r2@8
  signed int v8; // r1@10
  int v9; // [sp+4h] [bp-2Ch]@1
  int v10; // [sp+Ch] [bp-24h]@1

  v1 = this;
  sub_DA7364((void **)&v10, (const char *)&unk_257BC67);
  Common::getGameVersionStringNet((Common *)&v9);
  v2 = sub_DA7564((const void **)&v9, (const void **)&v10);
  *(_DWORD *)v1 = *v2;
  *v2 = &unk_28898CC;
  v3 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v9 - 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v10 - 4);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9(v4);
}
