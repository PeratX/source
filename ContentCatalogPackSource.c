

int __fastcall ContentCatalogPackSource::forEachPackConst(int result, int a2)
{
  int *v2; // r5@1 OVERLAPPED
  int *v3; // r6@1 OVERLAPPED
  int i; // r4@1
  int v5; // t1@3

  *(_QWORD *)&v2 = *(_QWORD *)(result + 32);
  for ( i = a2; v3 != v2; result = (*(int (__fastcall **)(int, int))(i + 12))(i, v5) )
  {
    if ( !*(_DWORD *)(i + 8) )
      sub_119C8E4();
    v5 = *v2;
    ++v2;
  }
  return result;
}


void __fastcall ContentCatalogPackSource::load(int a1, int a2)
{
  ContentCatalogPackSource::load(a1, a2);
}


int __fastcall ContentCatalogPackSource::setAsyncCallback(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v11);
    result = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = v4 + 44;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 44);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 52);
  v10 = v13;
  *(_DWORD *)(v4 + 52) = v8;
  v14 = *(_DWORD *)(v4 + 56);
  *(_DWORD *)(v4 + 56) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


void __fastcall ContentCatalogPackSource::~ContentCatalogPackSource(ContentCatalogPackSource *this)
{
  ContentCatalogPackSource::~ContentCatalogPackSource(this);
}


void __fastcall ContentCatalogPackSource::~ContentCatalogPackSource(ContentCatalogPackSource *this)
{
  ContentCatalogPackSource *v1; // r0@1

  v1 = ContentCatalogPackSource::~ContentCatalogPackSource(this);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall ContentCatalogPackSource::load(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r10@1
  int v4; // r4@1
  unsigned int v5; // r0@1
  int v6; // r5@3
  void *v7; // r4@3
  int v8; // r0@4
  bool v9; // zf@5
  int *i; // r5@8
  int *v11; // r11@8
  __int64 v12; // r8@10
  unsigned int *v13; // r0@11
  unsigned int v14; // r1@13
  unsigned int *v15; // r2@15
  signed int v16; // r1@17
  unsigned int *v17; // r2@19
  signed int v18; // r1@21
  void *v19; // r0@31
  void *v20; // r0@32
  int *j; // r5@34
  int *v22; // r11@34
  void *v23; // r0@37
  void *v24; // r0@37
  int v25; // r0@38
  int v26; // r0@40
  char *v27; // r1@41
  int v28; // r0@42
  char *v29; // r1@43
  unsigned int *v30; // r2@45
  signed int v31; // r1@47
  unsigned int *v32; // r2@49
  signed int v33; // r1@51
  void *v34; // r0@61
  void *v35; // r0@62
  char *v36; // r0@67
  unsigned int *v37; // r2@68
  signed int v38; // r1@70
  __int64 v39; // kr10_8@74
  int v40; // r7@75
  unsigned int *v41; // r2@76
  signed int v42; // r1@78
  void *v43; // r0@84
  int *v44; // r0@87
  __int64 v45; // kr18_8@89
  int v46; // r7@90
  unsigned int *v47; // r2@91
  signed int v48; // r1@93
  void *v49; // r0@99
  int *v50; // r0@102
  ContentCatalogService *v51; // r4@104
  unsigned int *v52; // r0@105
  unsigned int v53; // r1@107
  void *v54; // r0@110
  unsigned int *v55; // r1@111
  unsigned int v56; // r2@113
  __int64 v57; // r1@116
  unsigned int *v58; // r1@119
  unsigned int v59; // r0@121
  __int64 v60; // r4@126
  unsigned int *v61; // r2@128
  signed int v62; // r1@130
  int *v63; // r0@136
  unsigned int *v64; // r1@142
  unsigned int v65; // r0@144
  unsigned int *v66; // r2@150
  signed int v67; // r1@152
  void *v68; // [sp+8h] [bp-A0h]@116
  void (*v69)(void); // [sp+10h] [bp-98h]@110
  int v70[11]; // [sp+18h] [bp-90h]@74
  char *v71; // [sp+48h] [bp-60h]@42
  char *v72; // [sp+50h] [bp-58h]@40
  int v73; // [sp+58h] [bp-50h]@37
  void *ptr; // [sp+5Ch] [bp-4Ch]@37
  char *v75; // [sp+60h] [bp-48h]@37
  char *v76; // [sp+64h] [bp-44h]@37
  int v77; // [sp+6Ch] [bp-3Ch]@49
  int v78; // [sp+70h] [bp-38h]@45
  int v79; // [sp+78h] [bp-30h]@19
  int v80; // [sp+7Ch] [bp-2Ch]@15

  v2 = a1;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  v3 = a2;
  *(_DWORD *)(a1 + 16) = 1065353216;
  v4 = a1 + 16;
  *(_DWORD *)(a1 + 20) = 0;
  v5 = sub_119C844(COERCE_DOUBLE(__PAIR__(10, a1 + 16)));
  *(_DWORD *)(v4 - 12) = v5;
  if ( v5 == 1 )
  {
    *(_DWORD *)(v2 + 24) = 0;
    v7 = (void *)(v2 + 24);
  }
  else
    if ( v5 >= 0x40000000 )
      sub_119C874();
    v6 = 4 * v5;
    v7 = operator new(4 * v5);
    _aeabi_memclr4(v7, v6);
  *(_DWORD *)v2 = v7;
  v8 = *(_DWORD *)(v3 + 28);
  if ( v8 != 1 )
    v9 = v8 == 0;
    if ( !v8 )
      v9 = (unsigned int)*(_QWORD *)(v3 + 32) == *(_QWORD *)(v3 + 32) >> 32;
    if ( !v9 )
    {
      v11 = (int *)(*(_QWORD *)(v3 + 60) >> 32);
      for ( i = (int *)*(_QWORD *)(v3 + 60); i != v11; i += 8 )
      {
        sub_119C884((void **)&v79, "title");
        sub_F47888(&v80, (int)(i + 1), i, (const void **)&v79);
        v19 = (void *)(v80 - 12);
        if ( (int *)(v80 - 12) != &dword_28898C0 )
        {
          v15 = (unsigned int *)(v80 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
          }
          else
            v16 = (*v15)--;
          if ( v16 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v19);
        }
        v20 = (void *)(v79 - 12);
        if ( (int *)(v79 - 12) != &dword_28898C0 )
          v17 = (unsigned int *)(v79 - 4);
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
            v18 = (*v17)--;
          if ( v18 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v20);
      }
      v22 = (int *)(*(_QWORD *)(v3 + 72) >> 32);
      for ( j = (int *)*(_QWORD *)(v3 + 72); j != v22; j += 8 )
        sub_119C884((void **)&v77, "desc");
        sub_F47888(&v78, (int)(j + 1), j, (const void **)&v77);
        v34 = (void *)(v78 - 12);
        if ( (int *)(v78 - 12) != &dword_28898C0 )
          v30 = (unsigned int *)(v78 - 4);
              v31 = __ldrex(v30);
            while ( __strex(v31 - 1, v30) );
            v31 = (*v30)--;
          if ( v31 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v34);
        v35 = (void *)(v77 - 12);
        if ( (int *)(v77 - 12) != &dword_28898C0 )
          v32 = (unsigned int *)(v77 - 4);
              v33 = __ldrex(v32);
            while ( __strex(v33 - 1, v32) );
            v33 = (*v32)--;
          if ( v33 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v35);
      if ( *(_DWORD *)(v3 + 52) )
        (*(void (__fastcall **)(int, _DWORD))(v3 + 56))(v3 + 44, 0);
      return;
    }
    v12 = *(_QWORD *)(v3 + 16);
    if ( HIDWORD(v12) )
      v13 = (unsigned int *)(HIDWORD(v12) + 8);
      if ( &pthread_create )
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 + 1, v13) );
      else
        ++*v13;
    *(_DWORD *)(v3 + 24) = 0;
    *(_DWORD *)(v3 + 28) = 1;
    sub_119C884((void **)&v73, "mashup");
    ptr = 0;
    v75 = 0;
    v76 = 0;
    v23 = operator new(4u);
    ptr = v23;
    v76 = (char *)v23 + 4;
    v75 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                    (int)&v73,
                    (int)&ptr,
                    (int)v23);
    v24 = (void *)(v73 - 12);
    if ( (int *)(v73 - 12) != &dword_28898C0 )
      v66 = (unsigned int *)(v73 - 4);
          v67 = __ldrex(v66);
        while ( __strex(v67 - 1, v66) );
        v67 = (*v66)--;
      if ( v67 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v24);
    v25 = *(_BYTE *)(v3 + 12);
    if ( v25 == 3 )
      sub_119C884((void **)&v71, "worldtemplate");
      v28 = (int)v75;
      if ( v75 == v76 )
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
          (unsigned __int64 *)&ptr,
          &v71);
        v29 = v71;
        *(_DWORD *)v75 = v71;
        v75 = (char *)(v28 + 4);
        v29 = (char *)&unk_28898CC;
        v71 = (char *)&unk_28898CC;
      v36 = v29 - 12;
      if ( (int *)(v29 - 12) != &dword_28898C0 )
        v37 = (unsigned int *)(v29 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
LABEL_163:
          if ( v38 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v36);
          goto LABEL_74;
LABEL_162:
        v38 = (*v37)--;
        goto LABEL_163;
    else if ( v25 == 1 )
      sub_119C884((void **)&v72, "resourcepack");
      v26 = (int)v75;
          &v72);
        v27 = v72;
        *(_DWORD *)v75 = v72;
        v75 = (char *)(v26 + 4);
        v27 = (char *)&unk_28898CC;
        v72 = (char *)&unk_28898CC;
      v36 = v27 - 12;
      if ( (int *)(v27 - 12) != &dword_28898C0 )
        v37 = (unsigned int *)(v27 - 4);
          goto LABEL_163;
        goto LABEL_162;
LABEL_74:
    SearchQuery::SearchQuery((int)v70, (int *)&CatalogContentType::DurableOffer);
    SearchQuery::addTags((int)v70, (unsigned __int64 *)&ptr);
    v39 = *(_QWORD *)(v3 + 60);
    if ( HIDWORD(v39) != (_DWORD)v39 )
      v40 = *(_QWORD *)(v3 + 60);
      do
        std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear(v40 + 4);
        v43 = *(void **)(v40 + 4);
        if ( v43 && (void *)(v40 + 28) != v43 )
          operator delete(v43);
        v44 = (int *)(*(_DWORD *)v40 - 12);
        if ( v44 != &dword_28898C0 )
          v41 = (unsigned int *)(*(_DWORD *)v40 - 4);
              v42 = __ldrex(v41);
            while ( __strex(v42 - 1, v41) );
            v42 = (*v41)--;
          if ( v42 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v44);
        v40 += 32;
      while ( v40 != HIDWORD(v39) );
    *(_DWORD *)(v3 + 64) = v39;
    v45 = *(_QWORD *)(v3 + 72);
    if ( HIDWORD(v45) != (_DWORD)v45 )
      v46 = *(_QWORD *)(v3 + 72);
        std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear(v46 + 4);
        v49 = *(void **)(v46 + 4);
        if ( v49 && (void *)(v46 + 28) != v49 )
          operator delete(v49);
        v50 = (int *)(*(_DWORD *)v46 - 12);
        if ( v50 != &dword_28898C0 )
          v47 = (unsigned int *)(*(_DWORD *)v46 - 4);
              v48 = __ldrex(v47);
            while ( __strex(v48 - 1, v47) );
            v48 = (*v47)--;
          if ( v48 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v50);
        v46 += 32;
      while ( v46 != HIDWORD(v45) );
    *(_DWORD *)(v3 + 76) = v45;
    v51 = *(ContentCatalogService **)(v3 + 4);
      v52 = (unsigned int *)(HIDWORD(v12) + 8);
          v53 = __ldrex(v52);
        while ( __strex(v53 + 1, v52) );
        ++*v52;
    v69 = 0;
    v54 = operator new(0xCu);
    *(_DWORD *)v54 = v3;
    *(_QWORD *)((char *)v54 + 4) = v12;
      v55 = (unsigned int *)(HIDWORD(v12) + 8);
          v56 = __ldrex(v55);
        while ( __strex(v56 + 1, v55) );
        ++*v55;
    LODWORD(v57) = sub_F49900;
    v68 = v54;
    HIDWORD(v57) = sub_F482DC;
    *(_QWORD *)&v69 = v57;
    ContentCatalogService::searchCatalog(v51, v70, (int)&v68);
    if ( v69 )
      v69();
      v58 = (unsigned int *)(HIDWORD(v12) + 8);
          v59 = __ldrex(v58);
        while ( __strex(v59 - 1, v58) );
        v59 = (*v58)--;
      if ( v59 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v12) + 12))(HIDWORD(v12));
    SearchQuery::~SearchQuery((SearchQuery *)v70);
    v60 = *(_QWORD *)&ptr;
    if ( ptr != v75 )
        v63 = (int *)(*(_DWORD *)v60 - 12);
        if ( v63 != &dword_28898C0 )
          v61 = (unsigned int *)(*(_DWORD *)v60 - 4);
              v62 = __ldrex(v61);
            while ( __strex(v62 - 1, v61) );
            v62 = (*v61)--;
          if ( v62 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v63);
        LODWORD(v60) = v60 + 4;
      while ( (_DWORD)v60 != HIDWORD(v60) );
      LODWORD(v60) = ptr;
    if ( (_DWORD)v60 )
      operator delete((void *)v60);
      v64 = (unsigned int *)(HIDWORD(v12) + 8);
          v65 = __ldrex(v64);
        while ( __strex(v65 - 1, v64) );
        v65 = (*v64)--;
      if ( v65 == 1 )
}


int __fastcall ContentCatalogPackSource::forEachPack(int result, int a2)
{
  int *v2; // r5@1 OVERLAPPED
  int *v3; // r6@1 OVERLAPPED
  int i; // r4@1
  int v5; // t1@3

  *(_QWORD *)&v2 = *(_QWORD *)(result + 32);
  for ( i = a2; v3 != v2; result = (*(int (__fastcall **)(int, int))(i + 12))(i, v5) )
  {
    if ( !*(_DWORD *)(i + 8) )
      sub_119C8E4();
    v5 = *v2;
    ++v2;
  }
  return result;
}


int __fastcall ContentCatalogPackSource::_handleAsyncCallback(int result)
{
  int v1; // r1@1
  unsigned __int8 v2; // vf@1

  v1 = *(_DWORD *)(result + 24);
  v2 = __OFSUB__(v1--, 1);
  *(_DWORD *)(result + 24) = v1;
  if ( (unsigned __int8)((v1 < 0) ^ v2) | (v1 == 0) )
  {
    if ( *(_DWORD *)(result + 52) )
      result = (*(int (__fastcall **)(int, signed int))(result + 56))(result + 44, 1);
  }
  return result;
}


int __fastcall ContentCatalogPackSource::ContentCatalogPackSource(int a1, int a2, int a3, char a4, int a5)
{
  int v5; // r4@1
  void *v6; // r0@1
  void (__fastcall *v7)(int, int, signed int); // r3@3
  int result; // r0@5
  void *ptr; // [sp+4h] [bp-1Ch]@1

  v5 = a1;
  *(_DWORD *)a1 = &off_26DCE3C;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = a3;
  *(_BYTE *)(a1 + 12) = a4;
  v6 = operator new(1u);
  *(_BYTE *)v6 = 1;
  ptr = v6;
  std::__shared_ptr<bool,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<bool,std::default_delete<bool>>(v5 + 16, (int *)&ptr);
  if ( ptr )
    operator delete(ptr);
  ptr = 0;
  *(_DWORD *)(v5 + 52) = 0;
  *(_DWORD *)(v5 + 32) = 0;
  *(_DWORD *)(v5 + 36) = 0;
  *(_DWORD *)(v5 + 40) = 0;
  *(_DWORD *)(v5 + 24) = 0;
  *(_DWORD *)(v5 + 28) = 0;
  v7 = *(void (__fastcall **)(int, int, signed int))(a5 + 8);
  if ( v7 )
  {
    v7(v5 + 44, a5, 2);
    *(_DWORD *)(v5 + 56) = *(_DWORD *)(a5 + 12);
    *(_DWORD *)(v5 + 52) = *(_DWORD *)(a5 + 8);
  }
  *(_DWORD *)(v5 + 60) = 0;
  *(_DWORD *)(v5 + 64) = 0;
  result = v5;
  *(_DWORD *)(v5 + 68) = 0;
  *(_DWORD *)(v5 + 72) = 0;
  *(_DWORD *)(v5 + 76) = 0;
  *(_DWORD *)(v5 + 80) = 0;
  return result;
}


ContentCatalogPackSource *__fastcall ContentCatalogPackSource::~ContentCatalogPackSource(ContentCatalogPackSource *this)
{
  ContentCatalogPackSource *v1; // r10@1
  int v2; // r5@1
  int v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  void *v6; // r0@11
  int *v7; // r0@14
  int v8; // r5@19
  int v9; // r7@19
  unsigned int *v10; // r2@21
  signed int v11; // r1@23
  void *v12; // r0@29
  int *v13; // r0@32
  void (*v14)(void); // r3@37
  Pack **v15; // r5@39 OVERLAPPED
  Pack **v16; // r6@39 OVERLAPPED
  Pack *v17; // r0@41
  int v18; // r5@46
  unsigned int *v19; // r1@47
  unsigned int v20; // r0@49
  unsigned int *v21; // r6@53
  unsigned int v22; // r0@55

  v1 = this;
  *(_DWORD *)this = &off_26DCE3C;
  v3 = *((_QWORD *)this + 9) >> 32;
  v2 = *((_QWORD *)this + 9);
  if ( v2 != v3 )
  {
    do
    {
      std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear(v2 + 4);
      v6 = *(void **)(v2 + 4);
      if ( v6 && (void *)(v2 + 28) != v6 )
        operator delete(v6);
      v7 = (int *)(*(_DWORD *)v2 - 12);
      if ( v7 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v7);
      }
      v2 += 32;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 18);
  }
  if ( v2 )
    operator delete((void *)v2);
  v9 = *(_QWORD *)((char *)v1 + 60) >> 32;
  v8 = *(_QWORD *)((char *)v1 + 60);
  if ( v8 != v9 )
      std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear(v8 + 4);
      v12 = *(void **)(v8 + 4);
      if ( v12 && (void *)(v8 + 28) != v12 )
        operator delete(v12);
      v13 = (int *)(*(_DWORD *)v8 - 12);
      if ( v13 != &dword_28898C0 )
        v10 = (unsigned int *)(*(_DWORD *)v8 - 4);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v13);
      v8 += 32;
    while ( v8 != v9 );
    v8 = *((_DWORD *)v1 + 15);
  if ( v8 )
    operator delete((void *)v8);
  v14 = (void (*)(void))*((_DWORD *)v1 + 13);
  if ( v14 )
    v14();
  *(_QWORD *)&v15 = *((_QWORD *)v1 + 4);
  if ( v15 != v16 )
      if ( *v15 )
        v17 = Pack::~Pack(*v15);
        operator delete((void *)v17);
      *v15 = 0;
      ++v15;
    while ( v16 != v15 );
    v15 = (Pack **)*((_DWORD *)v1 + 8);
  if ( v15 )
    operator delete(v15);
  v18 = *((_DWORD *)v1 + 5);
  if ( v18 )
    v19 = (unsigned int *)(v18 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    else
      v20 = (*v19)--;
    if ( v20 == 1 )
      v21 = (unsigned int *)(v18 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
      if ( &pthread_create )
        __dmb();
        do
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
      else
        v22 = (*v21)--;
      if ( v22 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
  PackSource::~PackSource(v1);
  return v1;
}
