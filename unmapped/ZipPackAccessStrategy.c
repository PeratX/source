

void __fastcall ZipPackAccessStrategy::~ZipPackAccessStrategy(ZipPackAccessStrategy *this)
{
  ZipPackAccessStrategy *v1; // r0@1

  v1 = ZipPackAccessStrategy::~ZipPackAccessStrategy(this);
  j_j_j__ZdlPv_6((void *)v1);
}


RakNet *__fastcall ZipPackAccessStrategy::forEachIn(int a1, int *a2, int a3)
{
  int v3; // r5@1
  int *v4; // r4@1
  int v5; // r6@1
  int v6; // r7@1
  __int64 v7; // r0@1
  int v8; // r7@1
  int v9; // r0@1
  int v10; // r0@1
  void (__fastcall *v11)(_DWORD, int); // r3@1
  int v12; // r1@1
  void *v13; // r0@1
  unsigned int *v14; // r2@1
  int v15; // r0@3
  int v16; // r2@3
  int v17; // r3@3
  signed int v18; // r8@4
  void *v19; // r0@4
  signed int v20; // r7@8
  void *v21; // r0@8
  unsigned int *v22; // r2@11
  signed int v23; // r1@13
  int v24; // r0@28
  int v25; // r1@30
  int v26; // r2@30
  void (__fastcall *v27)(_DWORD, int); // r3@30
  RakNet *result; // r0@32
  int v29; // [sp+1Ch] [bp-5B4h]@4
  int v30; // [sp+24h] [bp-5ACh]@4
  char v31; // [sp+28h] [bp-5A8h]@4
  int v32; // [sp+78h] [bp-558h]@1
  void *ptr; // [sp+7Ch] [bp-554h]@1
  int v34; // [sp+84h] [bp-54Ch]@1
  int v35; // [sp+88h] [bp-548h]@3
  int v36; // [sp+8Ch] [bp-544h]@3
  int v37; // [sp+90h] [bp-540h]@3
  int v38; // [sp+94h] [bp-53Ch]@3
  char v39; // [sp+A0h] [bp-530h]@4
  char v40; // [sp+1A0h] [bp-430h]@3
  int v41; // [sp+1A4h] [bp-42Ch]@4
  RakNet *v42; // [sp+5A8h] [bp-28h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v42 = _stack_chk_guard;
  v6 = *(_DWORD *)(a1 + 20);
  ResourceLocation::getFullPath((ResourceLocation *)&v32, a1 + 8);
  LODWORD(v7) = &ptr;
  ZlibFileAccessWrapper::ZlibFileAccessWrapper(v7);
  v8 = v32;
  v9 = ZlibFileAccessWrapper::getZipFunctions((ZlibFileAccessWrapper *)&ptr);
  v10 = j_unzOpen64(v8, v9);
  v12 = v32;
  v34 = v10;
  v13 = (void *)(v32 - 12);
  v14 = (unsigned int *)&dword_28898C0;
  if ( (int *)(v32 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v32 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v12 = __ldrex(v14);
        v11 = (void (__fastcall *)(_DWORD, int))(v12 - 1);
      }
      while ( __strex(v12 - 1, v14) );
    }
    else
      v12 = *v14;
      v11 = (void (__fastcall *)(_DWORD, int))(*v14 - 1);
      *v14 = (unsigned int)v11;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  }
  if ( v34 )
    v15 = *v4;
    v16 = *(_DWORD *)(*v4 - 12);
    v17 = *(_DWORD *)(*(_DWORD *)(v3 + 16) - 12);
    v35 = *(_DWORD *)(v3 + 16);
    v36 = v17;
    v37 = v15;
    v38 = v16;
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v40, (int)&v35, 2);
    if ( !j_unzGoToFirstFile(v34) )
        j_unzGetCurrentFileInfo(v34, (int)&v31, (int)&v39, 0x100u, 0, 0, 0, 0);
        sub_21E94B4((void **)&v30, &v39);
        sub_21E94B4((void **)&v29, (const char *)&v41);
        v18 = Util::startsWith(&v30, &v29);
        v19 = (void *)(v29 - 12);
        if ( (int *)(v29 - 12) != &dword_28898C0 )
        {
          v22 = (unsigned int *)(v29 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v23 = __ldrex(v22);
            while ( __strex(v23 - 1, v22) );
          }
          else
            v23 = (*v22)--;
          if ( v23 <= 0 )
            j_j_j_j__ZdlPv_9(v19);
        }
        if ( v18 == 1 )
          if ( !*(_DWORD *)(v5 + 8) )
            sub_21E5F48();
          (*(void (**)(void))(v5 + 12))();
        v20 = j_unzGoToNextFile(v34);
        v12 = v30;
        v21 = (void *)(v30 - 12);
        if ( (int *)(v30 - 12) != &dword_28898C0 )
          v14 = (unsigned int *)(v30 - 4);
            {
              v12 = __ldrex(v14);
              v11 = (void (__fastcall *)(_DWORD, int))(v12 - 1);
            }
            while ( __strex(v12 - 1, v14) );
            v12 = *v14;
            v11 = (void (__fastcall *)(_DWORD, int))(*v14 - 1);
            *v14 = (unsigned int)v11;
          if ( v12 <= 0 )
            j_j_j_j__ZdlPv_9(v21);
      while ( !v20 );
    v24 = v34;
  else
    v24 = 0;
  j_unzCloseCurrentFile(v24, v12, (int)v14, v11);
  j_unzClose(v34, v25, v26, v27);
  if ( ptr )
    operator delete(ptr);
  result = (RakNet *)(_stack_chk_guard - v42);
  if ( _stack_chk_guard != v42 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall ZipPackAccessStrategy::clone(ZipPackAccessStrategy *this, int a2)
{
  ZipPackAccessStrategy *v2; // r4@1
  int v3; // r6@1
  void *v4; // r5@1
  int result; // r0@1

  v2 = this;
  v3 = a2;
  v4 = operator new(0x58u);
  result = ZipPackAccessStrategy::ZipPackAccessStrategy((int)v4, v3);
  *(_DWORD *)v2 = v4;
  return result;
}


int __fastcall ZipPackAccessStrategy::ZipPackAccessStrategy(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  int v4; // r0@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_26EACD4;
  sub_21E8AF4((int *)(a1 + 4), (int *)(a2 + 4));
  sub_21E8AF4((int *)(v2 + 8), (int *)(v3 + 8));
  *(_DWORD *)(v2 + 12) = *(_DWORD *)(v3 + 12);
  sub_21E8AF4((int *)(v2 + 16), (int *)(v3 + 16));
  *(_DWORD *)(v2 + 20) = *(_DWORD *)(v3 + 20);
  *(_BYTE *)(v2 + 24) = *(_BYTE *)(v3 + 24);
  *(_DWORD *)(v2 + 28) = 0;
  *(_DWORD *)(v2 + 36) = 0;
  *(_DWORD *)(v2 + 40) = 0;
  *(_DWORD *)(v2 + 44) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 52) = 0;
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 56) = 0;
  v4 = v2 + 56;
  *(_DWORD *)(v4 + 4) = *(_DWORD *)(v3 + 60);
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 12) = *(_DWORD *)(v3 + 68);
  *(_QWORD *)(v4 + 16) = *(_QWORD *)(v3 + 72);
  std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_assign<std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::(std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>> const&)::{lambda(std::__detail::_Hash_node<std::string,true> const*)#1}>(
    (unsigned int *)(v2 + 56),
    v3 + 56);
  *(_BYTE *)(v2 + 84) = *(_BYTE *)(v3 + 84);
  return v2;
}


signed int __fastcall ZipPackAccessStrategy::deleteAsset(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r5@1
  signed int result; // r0@2
  __int64 v5; // r0@3

  v2 = a1;
  v3 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)a1 + 28))() == 1 )
  {
    v5 = *(_QWORD *)(v2 + 48);
    if ( (_DWORD)v5 == HIDWORD(v5) )
    {
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
        (unsigned __int64 *)(v2 + 44),
        v3);
      result = 0;
    }
    else
      sub_21E8AF4((int *)v5, v3);
      *(_DWORD *)(v2 + 48) += 4;
  }
  else
    result = 1;
  return result;
}


char *__fastcall ZipPackAccessStrategy::getPackName(ZipPackAccessStrategy *this)
{
  return (char *)this + 4;
}


signed int __fastcall ZipPackAccessStrategy::generateAssetSet(ZipPackAccessStrategy *this)
{
  ZipPackAccessStrategy *v1; // r4@1
  void (__fastcall *v2)(ZipPackAccessStrategy *, int *, _DWORD **, _DWORD); // r5@1
  _DWORD *v3; // r0@1
  __int64 v4; // r1@1
  void *v5; // r0@3
  void *v6; // r0@5
  signed int result; // r0@6
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  unsigned int *v10; // r2@15
  signed int v11; // r1@17
  int v12; // [sp+0h] [bp-30h]@5
  _DWORD *v13; // [sp+4h] [bp-2Ch]@1
  __int64 v14; // [sp+Ch] [bp-24h]@1
  int v15; // [sp+18h] [bp-18h]@1

  v1 = this;
  v2 = *(void (__fastcall **)(ZipPackAccessStrategy *, int *, _DWORD **, _DWORD))(*(_DWORD *)this + 52);
  sub_21E94B4((void **)&v15, (const char *)&unk_257BC67);
  v3 = operator new(4u);
  LODWORD(v4) = sub_15A2A50;
  *v3 = v1;
  HIDWORD(v4) = sub_15A2948;
  v13 = v3;
  v14 = v4;
  v2(v1, &v15, &v13, 0);
  if ( (_DWORD)v14 )
    ((void (*)(void))v14)();
  v5 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v15 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  if ( !*((_DWORD *)v1 + 17) )
    ResourceLocation::getFullPath((ResourceLocation *)&v12, (int)v1 + 8);
    v6 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v12 - 4);
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
        j_j_j_j__ZdlPv_9(v6);
  result = 1;
  *((_BYTE *)v1 + 84) = 1;
  return result;
}


signed int __fastcall ZipPackAccessStrategy::writeAsset(int a1, int *a2, int *a3)
{
  int v3; // r5@1
  int *v4; // r7@1
  int *v5; // r6@1
  int v6; // r0@3
  __int64 v7; // kr00_8@4
  signed int result; // r0@6

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( (*(int (**)(void))(*(_DWORD *)a1 + 28))() == 1 )
  {
    if ( &pthread_create )
    {
      v6 = pthread_mutex_lock((pthread_mutex_t *)(v3 + 28));
      if ( v6 )
        sub_21E5E14(v6);
    }
    v7 = *(_QWORD *)(v3 + 36);
    if ( (_DWORD)v7 == HIDWORD(v7) )
      std::vector<std::pair<std::string,std::string>,std::allocator<std::pair<std::string,std::string>>>::_M_emplace_back_aux<std::string const&,std::string const&>(
        (_QWORD *)(v3 + 32),
        v4,
        v5);
    else
      sub_21E8AF4((int *)v7, v4);
      sub_21E8AF4((int *)(v7 + 4), v5);
      *(_DWORD *)(v3 + 36) += 8;
      pthread_mutex_unlock((pthread_mutex_t *)(v3 + 28));
    result = 1;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall ZipPackAccessStrategy::getAsset(int a1, _DWORD *a2, const void **a3)
{
  int v3; // r6@1
  int *v4; // r4@1
  _DWORD *v5; // r8@1
  int v6; // r5@1
  __int64 v7; // r0@1
  int v8; // r5@1
  int v9; // r0@1
  void *v10; // r0@1
  _DWORD *v11; // r0@3
  int v12; // r2@3
  int v13; // r3@3
  int v14; // r1@3
  unsigned int *v15; // r2@3
  void (__fastcall *v16)(_DWORD, int); // r3@3
  int v17; // r5@4
  int v18; // r7@4
  _DWORD *v19; // r8@5
  size_t v20; // r6@5
  signed int v21; // r4@9
  void *v22; // r0@10
  size_t v23; // r5@13
  signed int v24; // r0@13
  signed int v25; // r6@13
  int v26; // r1@19
  int v27; // r2@19
  void (__fastcall *v28)(_DWORD, int); // r3@19
  unsigned int *v30; // r2@24
  signed int v31; // r1@26
  int v32; // [sp+0h] [bp-450h]@10
  int v33; // [sp+4h] [bp-44Ch]@1
  void *ptr; // [sp+8h] [bp-448h]@1
  int v35; // [sp+10h] [bp-440h]@1
  int v36; // [sp+18h] [bp-438h]@3
  int v37; // [sp+1Ch] [bp-434h]@3
  _DWORD *v38; // [sp+20h] [bp-430h]@3
  int v39; // [sp+24h] [bp-42Ch]@3
  char v40; // [sp+2Ch] [bp-424h]@3
  int v41; // [sp+30h] [bp-420h]@3
  RakNet *v42; // [sp+434h] [bp-1Ch]@1

  v3 = a1;
  v4 = (int *)a3;
  v5 = a2;
  v42 = _stack_chk_guard;
  sub_21E7EE0(a3, 0, *((_BYTE **)*a3 - 3), 0);
  v6 = *(_DWORD *)(v3 + 20);
  ResourceLocation::getFullPath((ResourceLocation *)&v33, v3 + 8);
  LODWORD(v7) = &ptr;
  ZlibFileAccessWrapper::ZlibFileAccessWrapper(v7);
  v8 = v33;
  v9 = ZlibFileAccessWrapper::getZipFunctions((ZlibFileAccessWrapper *)&ptr);
  v35 = j_unzOpen64(v8, v9);
  v10 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
  {
    v30 = (unsigned int *)(v33 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
    }
    else
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  }
  if ( v35 )
    v11 = (_DWORD *)*v5;
    v12 = *(_DWORD *)(*v5 - 12);
    v13 = *(_DWORD *)(*(_DWORD *)(v3 + 16) - 12);
    v36 = *(_DWORD *)(v3 + 16);
    v37 = v13;
    v38 = v11;
    v39 = v12;
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v40, (int)&v36, 2);
    if ( j_unzLocateFile(v35, (const char *)&v41, 2) )
      v17 = *(_QWORD *)(v3 + 32) >> 32;
      v18 = *(_QWORD *)(v3 + 32);
      if ( v18 == v17 )
      {
        v21 = 0;
      }
      else
        v19 = (_DWORD *)*v5;
        v20 = *(v19 - 3);
        while ( 1 )
        {
          v14 = *(_DWORD *)(*(_DWORD *)v18 - 12);
          if ( v14 == v20 && !memcmp(*(const void **)v18, v19, v20) )
            break;
          v18 += 8;
          if ( v17 == v18 )
          {
            v21 = 0;
            goto LABEL_19;
          }
        }
        EntityInteraction::setInteractText(v4, (int *)(v18 + 4));
        v21 = 1;
      j_unzOpenCurrentFile(v35);
        v23 = *(_DWORD *)(*v4 - 12);
        sub_21E849C((char *)v4, v23 + 1024, 0);
        v24 = j_unzReadCurrentFile(v35, *v4 + v23, 0x400u);
        v25 = v24;
        if ( v24 > 0 )
          v23 += v24;
        sub_21E849C((char *)v4, v23, 0);
      while ( v25 > 0 );
      v21 = *(_DWORD *)(*v4 - 12) != 0;
  else
    ResourceLocation::getFullPath((ResourceLocation *)&v32, v3 + 8);
    v14 = v32;
    v15 = (unsigned int *)&dword_28898C0;
    v22 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v32 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v14 = __ldrex(v15);
          v16 = (void (__fastcall *)(_DWORD, int))(v14 - 1);
        while ( __strex(v14 - 1, v15) );
        v14 = *v15;
        v16 = (void (__fastcall *)(_DWORD, int))(*v15 - 1);
        *v15 = (unsigned int)v16;
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
    v21 = 0;
LABEL_19:
  j_unzCloseCurrentFile(v35, v14, (int)v15, v16);
  j_unzClose(v35, v26, v27, v28);
  if ( ptr )
    operator delete(ptr);
  if ( _stack_chk_guard != v42 )
    _stack_chk_fail(_stack_chk_guard - v42);
  return v21;
}


signed int __fastcall ZipPackAccessStrategy::getStrategyType(ZipPackAccessStrategy *this)
{
  return 1;
}


signed int __fastcall ZipPackAccessStrategy::_tryReadFromPendingQueue(int a1, const void **a2, int *a3)
{
  int v3; // r4@1
  int v4; // r7@1
  int *v5; // r8@1
  const void *v6; // r5@2
  size_t v7; // r6@2
  signed int result; // r0@6

  v3 = *(_QWORD *)(a1 + 32) >> 32;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = a3;
  if ( v4 == v3 )
  {
LABEL_6:
    result = 0;
  }
  else
    v6 = *a2;
    v7 = *((_DWORD *)*a2 - 3);
    while ( *(_DWORD *)(*(_DWORD *)v4 - 12) != v7 || memcmp(*(const void **)v4, v6, v7) )
    {
      v4 += 8;
      if ( v3 == v4 )
        goto LABEL_6;
    }
    EntityInteraction::setInteractText(v5, (int *)(v4 + 4));
    result = 1;
  return result;
}


_DWORD *__fastcall ZipPackAccessStrategy::ZipPackAccessStrategy(_DWORD *a1, int a2, int *a3, int *a4)
{
  _DWORD *v4; // r5@1
  int v5; // r6@1
  int *v6; // r4@1
  int *v7; // r9@1
  void **v8; // r8@1
  int v9; // r0@1
  double v10; // r0@3
  unsigned int v11; // r0@3
  int v12; // r6@5
  void *v13; // r4@5
  int v15; // [sp+10h] [bp-10h]@1
  int v16; // [sp+14h] [bp-Ch]@1
  int v17; // [sp+20h] [bp+0h]@1
  int v18; // [sp+24h] [bp+4h]@1
  RakNet *v19; // [sp+428h] [bp+408h]@1

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v19 = _stack_chk_guard;
  *a1 = &off_26EACD4;
  v8 = (void **)(a1 + 1);
  v15 = *a3;
  v16 = *(_DWORD *)(v15 - 12);
  Core::PathBuffer<Core::StackString<char,1024u>>::getEntryNameWithoutExtension((int)&v17, (__int64 *)&v15);
  sub_21E94B4(v8, (const char *)&v18);
  sub_21E8AF4(v4 + 2, v6);
  v4[3] = v6[1];
  sub_21E8AF4(v4 + 4, v7);
  v4[5] = v5;
  v9 = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 28))(v5);
  if ( v9 )
    LOBYTE(v9) = 1;
  *((_BYTE *)v4 + 24) = v9;
  v4[7] = 0;
  v4[16] = 0;
  v4[17] = 0;
  v4[13] = 0;
  v4[11] = 0;
  v4[12] = 0;
  v4[9] = 0;
  v4[10] = 0;
  v4[8] = 0;
  v4[18] = 1065353216;
  *(_QWORD *)&v10 = (unsigned int)(v4 + 18);
  *(_DWORD *)(LODWORD(v10) + 4) = 0;
  v11 = sub_21E6254(v10);
  v4[15] = v11;
  if ( v11 == 1 )
  {
    v4[20] = 0;
    v13 = v4 + 20;
  }
  else
    if ( v11 >= 0x40000000 )
      sub_21E57F4();
    v12 = 4 * v11;
    v13 = operator new(4 * v11);
    _aeabi_memclr4(v13, v12);
  v4[14] = v13;
  *((_BYTE *)v4 + 84) = 0;
  if ( _stack_chk_guard != v19 )
    _stack_chk_fail(_stack_chk_guard - v19);
  return v4;
}


signed int __fastcall ZipPackAccessStrategy::hasAsset(int a1, int **a2)
{
  int v2; // r5@1
  int **v3; // r4@1
  signed int v4; // r4@3
  int v5; // r6@4
  __int64 v6; // r0@4
  int v7; // r6@4
  int v8; // r0@4
  int v9; // r0@4
  void (__fastcall *v10)(_DWORD, int); // r3@4
  int v11; // r1@4
  void *v12; // r0@4
  unsigned int *v13; // r2@4
  int *v14; // r0@6
  int v15; // r2@6
  int v16; // r3@6
  int v17; // r0@6
  char *v18; // r1@9
  __int64 v19; // r6@9
  int *v20; // r4@10
  size_t v21; // r5@10
  int v22; // r1@17
  int v23; // r2@17
  void (__fastcall *v24)(_DWORD, int); // r3@17
  void **v25; // r0@19
  char *v26; // r0@21
  int v27; // r0@23
  unsigned int *v29; // r2@30
  signed int v30; // r1@32
  int v31; // [sp+0h] [bp-450h]@4
  void *ptr; // [sp+4h] [bp-44Ch]@4
  int v33; // [sp+Ch] [bp-444h]@4
  char *v34; // [sp+10h] [bp-440h]@9
  int v35; // [sp+18h] [bp-438h]@6
  int v36; // [sp+1Ch] [bp-434h]@6
  int *v37; // [sp+20h] [bp-430h]@6
  int v38; // [sp+24h] [bp-42Ch]@6
  char v39; // [sp+2Ch] [bp-424h]@6
  int v40; // [sp+30h] [bp-420h]@6
  RakNet *v41; // [sp+434h] [bp-1Ch]@1

  v2 = a1;
  v3 = a2;
  v41 = _stack_chk_guard;
  if ( !*(_BYTE *)(a1 + 84) )
  {
    v5 = *(_DWORD *)(a1 + 20);
    ResourceLocation::getFullPath((ResourceLocation *)&v31, a1 + 8);
    LODWORD(v6) = &ptr;
    ZlibFileAccessWrapper::ZlibFileAccessWrapper(v6);
    v7 = v31;
    v8 = ZlibFileAccessWrapper::getZipFunctions((ZlibFileAccessWrapper *)&ptr);
    v9 = j_unzOpen64(v7, v8);
    v11 = v31;
    v33 = v9;
    v12 = (void *)(v31 - 12);
    v13 = (unsigned int *)&dword_28898C0;
    if ( (int *)(v31 - 12) != &dword_28898C0 )
    {
      v13 = (unsigned int *)(v31 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
        {
          v11 = __ldrex(v13);
          v10 = (void (__fastcall *)(_DWORD, int))(v11 - 1);
        }
        while ( __strex(v11 - 1, v13) );
      }
      else
        v11 = *v13;
        v10 = (void (__fastcall *)(_DWORD, int))(*v13 - 1);
        *v13 = (unsigned int)v10;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    }
    if ( v33 )
      v14 = *v3;
      v15 = *(*v3 - 3);
      v16 = *(_DWORD *)(*(_DWORD *)(v2 + 16) - 12);
      v35 = *(_DWORD *)(v2 + 16);
      v36 = v16;
      v37 = v14;
      v38 = v15;
      Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v39, (int)&v35, 2);
      v11 = j_unzLocateFile(v33, (const char *)&v40, 2);
      v17 = v33;
      v4 = 0;
      if ( !v11 )
        v4 = 1;
    else
      v17 = 0;
    j_unzCloseCurrentFile(v17, v11, (int)v13, v10);
    j_unzClose(v33, v22, v23, v24);
    if ( ptr )
      operator delete(ptr);
    goto LABEL_19;
  }
  if ( std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::find(
         (unsigned __int64 *)(a1 + 56),
         a2) )
    v4 = 1;
LABEL_19:
    v25 = &_stack_chk_guard_ptr;
    goto LABEL_23;
  v18 = (char *)&unk_28898CC;
  v34 = (char *)&unk_28898CC;
  v19 = *(_QWORD *)(v2 + 32);
  if ( (_DWORD)v19 == HIDWORD(v19) )
LABEL_15:
    v4 = 0;
  else
    v20 = *v3;
    v21 = *(v20 - 3);
    while ( *(_DWORD *)(*(_DWORD *)v19 - 12) != v21 || memcmp(*(const void **)v19, v20, v21) )
      LODWORD(v19) = v19 + 8;
      if ( HIDWORD(v19) == (_DWORD)v19 )
        v18 = (char *)&unk_28898CC;
        goto LABEL_15;
    EntityInteraction::setInteractText((int *)&v34, (int *)(v19 + 4));
    v18 = v34;
  v26 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v25 = &_stack_chk_guard_ptr;
LABEL_23:
  v27 = *(_DWORD *)*v25 - (_DWORD)v41;
  if ( v27 )
    _stack_chk_fail(v27);
  return v4;
}


int __fastcall ZipPackAccessStrategy::isIncomplete(ZipPackAccessStrategy *this)
{
  return 0;
}


char *__fastcall ZipPackAccessStrategy::getPackLocation(ZipPackAccessStrategy *this)
{
  return (char *)this + 8;
}


void __fastcall ZipPackAccessStrategy::~ZipPackAccessStrategy(ZipPackAccessStrategy *this)
{
  ZipPackAccessStrategy::~ZipPackAccessStrategy(this);
}


int __fastcall ZipPackAccessStrategy::hasFolder(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r5@1
  int v4; // r6@1
  __int64 v5; // r0@1
  int v6; // r6@1
  int v7; // r0@1
  int v8; // r0@1
  void (__fastcall *v9)(_DWORD, int); // r3@1
  int v10; // r1@1
  void *v11; // r0@1
  unsigned int *v12; // r2@1
  int v13; // r0@3
  int v14; // r2@3
  int v15; // r3@3
  int v16; // r0@3
  int v17; // r4@3
  int v18; // r1@6 OVERLAPPED
  int v19; // r4@6
  unsigned int v20; // r2@6
  int v21; // r0@9
  int v22; // r4@11
  char v23; // r9@12
  int v24; // r0@13
  unsigned int *v25; // r2@14
  signed int v26; // r1@16
  signed int v27; // r8@23
  signed int v28; // r5@23
  void *v29; // r0@25
  signed int v30; // r0@26
  void *v31; // r0@30
  int v32; // r1@32
  int v33; // r2@32
  void (__fastcall *v34)(_DWORD, int); // r3@32
  int v36; // [sp+18h] [bp-5B0h]@14
  char v37; // [sp+1Ch] [bp-5ACh]@22
  int v38; // [sp+6Ch] [bp-55Ch]@3
  int v39; // [sp+70h] [bp-558h]@1
  void *ptr; // [sp+74h] [bp-554h]@1
  int v41; // [sp+7Ch] [bp-54Ch]@1
  int v42; // [sp+80h] [bp-548h]@3
  int v43; // [sp+84h] [bp-544h]@3
  int v44; // [sp+88h] [bp-540h]@3
  int v45; // [sp+8Ch] [bp-53Ch]@3
  char v46; // [sp+98h] [bp-530h]@22
  char v47; // [sp+198h] [bp-430h]@3
  int v48; // [sp+19Ch] [bp-42Ch]@3
  RakNet *v49; // [sp+5A0h] [bp-28h]@1

  v2 = a1;
  v3 = a2;
  v49 = _stack_chk_guard;
  v4 = *(_DWORD *)(a1 + 20);
  ResourceLocation::getFullPath((ResourceLocation *)&v39, a1 + 8);
  LODWORD(v5) = &ptr;
  ZlibFileAccessWrapper::ZlibFileAccessWrapper(v5);
  v6 = v39;
  v7 = ZlibFileAccessWrapper::getZipFunctions((ZlibFileAccessWrapper *)&ptr);
  v8 = j_unzOpen64(v6, v7);
  v10 = v39;
  v41 = v8;
  v11 = (void *)(v39 - 12);
  v12 = (unsigned int *)&dword_28898C0;
  if ( (int *)(v39 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v39 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v10 = __ldrex(v12);
        v9 = (void (__fastcall *)(_DWORD, int))(v10 - 1);
      }
      while ( __strex(v10 - 1, v12) );
    }
    else
      v10 = *v12;
      v9 = (void (__fastcall *)(_DWORD, int))(*v12 - 1);
      *v12 = (unsigned int)v9;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  }
  if ( v41 )
    v13 = *v3;
    v14 = *(_DWORD *)(*v3 - 12);
    v15 = *(_DWORD *)(*(_DWORD *)(v2 + 16) - 12);
    v42 = *(_DWORD *)(v2 + 16);
    v43 = v15;
    v44 = v13;
    v45 = v14;
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v47, (int)&v42, 2);
    sub_21E94B4((void **)&v38, (const char *)&v48);
    v16 = v38;
    v17 = *(_DWORD *)(v38 - 12);
    if ( *(_DWORD *)(v38 - 4) >= 0 )
      sub_21E8010((const void **)&v38);
      v16 = v38;
    if ( *(_BYTE *)(v16 + v17 - 1) != 47 )
      *(_QWORD *)&v18 = *(_QWORD *)(v16 - 12);
      v19 = v18 + 1;
      if ( v18 + 1 > v20 || *(_DWORD *)(v16 - 4) >= 1 )
        sub_21E6FCC((const void **)&v38, v18 + 1);
        v16 = v38;
        v18 = *(_DWORD *)(v38 - 12);
      *(_BYTE *)(v16 + v18) = 47;
      v21 = v38;
      if ( (int *)(v38 - 12) != &dword_28898C0 )
        *(_DWORD *)(v38 - 4) = 0;
        *(_DWORD *)(v21 - 12) = v19;
        *(_BYTE *)(v21 + v19) = byte_26C67B8[0];
    v22 = 0;
    if ( !j_unzGoToFirstFile(v41) )
      v23 = 0;
        j_unzGetCurrentFileInfo(v41, (int)&v37, (int)&v46, 0x100u, 0, 0, 0, 0);
        sub_21E94B4((void **)&v36, &v46);
        if ( Util::startsWith(&v36, &v38) )
        {
          v27 = 0;
          v23 = 1;
          v28 = 0;
        }
        else
          v28 = j_unzGoToNextFile(v41);
          v27 = 1;
        v29 = (void *)(v36 - 12);
        if ( (int *)(v36 - 12) != &dword_28898C0 )
          v25 = (unsigned int *)(v36 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
            {
              v26 = __ldrex(v25);
              v9 = (void (__fastcall *)(_DWORD, int))(v26 - 1);
            }
            while ( __strex(v26 - 1, v25) );
          }
          else
            v26 = *v25;
            v9 = (void (__fastcall *)(_DWORD, int))(*v25 - 1);
            *v25 = (unsigned int)v9;
          if ( v26 <= 0 )
            j_j_j_j__ZdlPv_9(v29);
        v30 = 0;
        if ( !v28 )
          v30 = 1;
      while ( v27 & v30 );
      v22 = v23 & 1;
    v10 = v38;
    v12 = (unsigned int *)&dword_28898C0;
    v31 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v38 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v10 = __ldrex(v12);
          v9 = (void (__fastcall *)(_DWORD, int))(v10 - 1);
        while ( __strex(v10 - 1, v12) );
      else
        v10 = *v12;
        v9 = (void (__fastcall *)(_DWORD, int))(*v12 - 1);
        *v12 = (unsigned int)v9;
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v31);
    v24 = v41;
  else
    v24 = 0;
  j_unzCloseCurrentFile(v24, v10, (int)v12, v9);
  j_unzClose(v41, v32, v33, v34);
  if ( ptr )
    operator delete(ptr);
  if ( _stack_chk_guard != v49 )
    _stack_chk_fail(_stack_chk_guard - v49);
  return v22;
}


RakNet *__fastcall ZipPackAccessStrategy::createSubPack(_DWORD *a1, int a2, int *a3)
{
  _DWORD *v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1
  __int64 v6; // kr00_8@1
  int v7; // r2@1
  int v8; // r3@1
  RakNet *result; // r0@1
  int v10; // [sp+4h] [bp-14h]@1
  int v11; // [sp+8h] [bp-10h]@1
  int v12; // [sp+Ch] [bp-Ch]@1
  int v13; // [sp+10h] [bp-8h]@1
  int v14; // [sp+14h] [bp-4h]@1
  int v15; // [sp+18h] [bp+0h]@1
  RakNet *v16; // [sp+420h] [bp+408h]@1

  v3 = a1;
  v4 = a2;
  v16 = _stack_chk_guard;
  v5 = *a3;
  v6 = *(_QWORD *)(a2 + 16);
  v7 = *(_DWORD *)(*a3 - 12);
  v8 = *(_DWORD *)(v6 - 12);
  v11 = *(_QWORD *)(a2 + 16);
  v12 = v8;
  v13 = v5;
  v14 = v7;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v15, (int)&v11, 2);
  std::make_unique<ZipPackAccessStrategy,IFileAccess &,ResourceLocation const&,Core::PathBuffer<Core::StackString<char,1024u>>>(
    &v10,
    SHIDWORD(v6),
    (int *)(v4 + 8),
    (int)&v15);
  *v3 = v10;
  result = (RakNet *)(_stack_chk_guard - v16);
  if ( _stack_chk_guard != v16 )
    _stack_chk_fail(result);
  return result;
}


ZipPackAccessStrategy *__fastcall ZipPackAccessStrategy::~ZipPackAccessStrategy(ZipPackAccessStrategy *this)
{
  ZipPackAccessStrategy *v1; // r11@1
  char *v2; // r10@1
  __int64 v3; // r0@1
  bool v4; // zf@1
  AppPlatform **v5; // r0@5
  int v6; // r0@7
  int v7; // r1@7
  int v8; // r4@7
  unsigned int v9; // r4@9
  signed int v10; // r6@9
  void *v11; // r0@9
  void *v12; // r0@10
  int v13; // r9@12
  int v14; // r0@13
  int v15; // r2@13
  unsigned __int64 v16; // r2@13
  char v17; // r0@13
  int *j; // r4@21
  int *v19; // r7@21
  int v20; // r0@22
  int v21; // r2@22
  int *v22; // r0@27
  int *v23; // r2@27
  int *v24; // r1@28
  int *v25; // r1@30
  int *v26; // r0@33
  int *v27; // r2@33
  int *v28; // r1@34
  int *v29; // r1@36
  void *v30; // r0@38
  void *v31; // r0@39
  unsigned __int64 *v32; // r4@42
  unsigned int *v33; // r2@44
  signed int v34; // r1@46
  unsigned __int64 *v35; // r6@52
  int v36; // r1@52
  void *v37; // r0@52
  char *v38; // r0@54
  void *v39; // r4@57
  void *v40; // r5@57
  unsigned int *v41; // r2@59
  signed int v42; // r1@61
  int *v43; // r0@67
  int v44; // r4@72
  int v45; // r5@72
  unsigned int *v46; // r2@74
  signed int v47; // r1@76
  unsigned int *v48; // r2@78
  signed int v49; // r1@80
  int v50; // r1@90
  void *v51; // r0@90
  int *v52; // r0@91
  int v53; // r1@96
  void *v54; // r0@96
  int v55; // r1@97
  void *v56; // r0@97
  int v57; // r1@98
  void *v58; // r0@98
  RakNet *v59; // r1@99
  unsigned int *v61; // r2@102
  signed int v62; // r1@104
  unsigned int *v63; // r2@106
  signed int v64; // r1@108
  unsigned int *v65; // r2@110
  signed int v66; // r1@112
  unsigned int *v67; // r2@114
  signed int v68; // r1@116
  unsigned int *v69; // r2@118
  signed int v70; // r1@120
  unsigned int *v71; // r2@142
  signed int v72; // r1@144
  unsigned int *v73; // r2@146
  signed int v74; // r1@148
  int v75; // [sp+10h] [bp-1200h]@12
  ZipPackAccessStrategy *v76; // [sp+14h] [bp-11FCh]@12
  int i; // [sp+1Ch] [bp-11F4h]@12
  char v78; // [sp+28h] [bp-11E8h]@27
  int v79; // [sp+2Ch] [bp-11E4h]@26
  int *v80; // [sp+30h] [bp-11E0h]@26
  int *v81; // [sp+34h] [bp-11DCh]@26
  int *v82; // [sp+38h] [bp-11D8h]@26
  int v83; // [sp+3Ch] [bp-11D4h]@26
  int v84; // [sp+40h] [bp-11D0h]@33
  int v85; // [sp+44h] [bp-11CCh]@32
  int *v86; // [sp+48h] [bp-11C8h]@32
  int *v87; // [sp+4Ch] [bp-11C4h]@32
  int *v88; // [sp+50h] [bp-11C0h]@32
  int v89; // [sp+54h] [bp-11BCh]@32
  __int64 v90; // [sp+58h] [bp-11B8h]@38
  int v91; // [sp+60h] [bp-11B0h]@38
  int v92; // [sp+64h] [bp-11ACh]@26
  int v93; // [sp+68h] [bp-11A8h]@26
  char v94; // [sp+6Ch] [bp-11A4h]@26
  int v95; // [sp+74h] [bp-119Ch]@26
  int v96; // [sp+80h] [bp-1190h]@31
  int v97; // [sp+8Ch] [bp-1184h]@32
  int v98; // [sp+98h] [bp-1178h]@37
  char v99; // [sp+9Ch] [bp-1174h]@26
  int v100; // [sp+A4h] [bp-116Ch]@38
  __int64 v101; // [sp+A8h] [bp-1168h]@23
  char v102; // [sp+B0h] [bp-1160h]@23
  void (__fastcall *v103)(char *, char *, signed int); // [sp+B8h] [bp-1158h]@23
  char v104; // [sp+C0h] [bp-1150h]@23
  __int64 v105; // [sp+C4h] [bp-114Ch]@22
  char v106; // [sp+CCh] [bp-1144h]@16
  void (__fastcall *v107)(char *, char *, signed int); // [sp+D4h] [bp-113Ch]@16
  char v108; // [sp+E0h] [bp-1130h]@14
  void (__fastcall *v109)(char *, char *, signed int); // [sp+E8h] [bp-1128h]@14
  char v110; // [sp+F0h] [bp-1120h]@14
  __int64 v111; // [sp+F4h] [bp-111Ch]@13
  char v112; // [sp+FCh] [bp-1114h]@13
  void (__fastcall *v113)(char *, char *, signed int); // [sp+104h] [bp-110Ch]@18
  char v114; // [sp+10Ch] [bp-1104h]@13
  void *v115; // [sp+110h] [bp-1100h]@13
  int v116; // [sp+114h] [bp-10FCh]@13
  char v117; // [sp+118h] [bp-10F8h]@9
  int v118; // [sp+154h] [bp-10BCh]@9
  int v119; // [sp+158h] [bp-10B8h]@9
  __int64 v120; // [sp+15Ch] [bp-10B4h]@7
  char v121; // [sp+164h] [bp-10ACh]@7
  void (*v122)(void); // [sp+16Ch] [bp-10A4h]@7
  __int64 v123; // [sp+178h] [bp-1098h]@7
  char v124; // [sp+180h] [bp-1090h]@4
  int v125; // [sp+188h] [bp-1088h]@7
  int v126; // [sp+18Ch] [bp-1084h]@7
  const char *v127; // [sp+190h] [bp-1080h]@7
  signed int v128; // [sp+194h] [bp-107Ch]@7
  const char *v129; // [sp+198h] [bp-1078h]@7
  int v130; // [sp+19Ch] [bp-1074h]@7
  int *v131; // [sp+1A8h] [bp-1068h]@13
  int v132; // [sp+1ACh] [bp-1064h]@13
  int v133; // [sp+1B0h] [bp-1060h]@13
  int v134; // [sp+1B4h] [bp-105Ch]@13
  char v135; // [sp+1C4h] [bp-104Ch]@22
  int v136; // [sp+1C8h] [bp-1048h]@22
  int v137; // [sp+5C8h] [bp-C48h]@22
  char v138; // [sp+5CCh] [bp-C44h]@13
  int v139; // [sp+5D0h] [bp-C40h]@13
  int v140; // [sp+9D0h] [bp-840h]@13
  char v141; // [sp+9D4h] [bp-83Ch]@7
  char v142; // [sp+9D8h] [bp-838h]@7
  int v143; // [sp+DD8h] [bp-438h]@7
  char v144; // [sp+DDCh] [bp-434h]@7
  int v145; // [sp+DE0h] [bp-430h]@7
  char v146; // [sp+11E0h] [bp-30h]@1
  RakNet *v147; // [sp+11E4h] [bp-2Ch]@1

  v1 = this;
  v2 = &v146;
  v147 = _stack_chk_guard;
  *(_DWORD *)this = &off_26EACD4;
  v3 = *((_QWORD *)this + 4);
  v4 = (_DWORD)v3 == HIDWORD(v3);
  if ( (_DWORD)v3 == HIDWORD(v3) )
    v4 = (unsigned int)*(_QWORD *)((char *)v1 + 44) == *(_QWORD *)((char *)v1 + 44) >> 32;
  if ( !v4 )
  {
    ZipUtils::ZipProgress::ZipProgress((ZipUtils::ZipProgress *)&v124);
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v5 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v5 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
    v6 = *AppPlatform::getTempPath(*v5);
    v7 = *(_DWORD *)(v6 - 12);
    v125 = v6;
    v126 = v7;
    v127 = "AccessStrategy";
    v128 = -1;
    v129 = "zip";
    v130 = -1;
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v144, (int)&v125, 3);
    LODWORD(v123) = &v145;
    HIDWORD(v123) = *(_DWORD *)&v146;
    Core::FileSystem::getUniqueFilePathForDirectory((int)&v141, &v123);
    v8 = v143;
    _aeabi_memcpy4(&v145, &v142, v143 + 1);
    v142 = 0;
    *(_DWORD *)&v146 = v8;
    v143 = 0;
    LODWORD(v120) = &v145;
    HIDWORD(v120) = v8;
    Core::FileSystem::createDirectoryRecursively((int)&v121, &v120);
    if ( v122 )
      v122();
    v9 = (unsigned int)v1 + 8;
    ResourceLocation::getFullPath((ResourceLocation *)&v119, (int)v1 + 8);
    sub_21E94B4((void **)&v118, (const char *)&v145);
    ZipUtils::UnzipSettings::UnzipSettings((ZipUtils::UnzipSettings *)&v117);
    v10 = ZipUtils::unzip(&v119, &v118, (int)&v124, (int)&v117);
    ZipUtils::UnzipSettings::~UnzipSettings((ZipUtils::UnzipSettings *)&v117);
    v11 = (void *)(v118 - 12);
    if ( (int *)(v118 - 12) != &dword_28898C0 )
    {
      v61 = (unsigned int *)(v118 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v62 = __ldrex(v61);
        while ( __strex(v62 - 1, v61) );
      }
      else
        v62 = (*v61)--;
      if ( v62 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    }
    v12 = (void *)(v119 - 12);
    if ( (int *)(v119 - 12) != &dword_28898C0 )
      v63 = (unsigned int *)(v119 - 4);
          v64 = __ldrex(v63);
        while ( __strex(v64 - 1, v63) );
        v64 = (*v63)--;
      if ( v64 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    if ( !v10 )
      v75 = (int)v1 + 8;
      v13 = *((_QWORD *)v1 + 4);
      v76 = v1;
      for ( i = *((_QWORD *)v1 + 4) >> 32; i != v13; v13 += 8 )
        v14 = *(_DWORD *)v13;
        v15 = *(_DWORD *)(*(_DWORD *)v13 - 12);
        v131 = &v145;
        v132 = *(_DWORD *)&v146;
        v133 = v14;
        v134 = v15;
        Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v138, (int)&v131, 2);
        v115 = 0;
        v116 = 0;
        LODWORD(v111) = &v139;
        HIDWORD(v111) = v140;
        v9 = v9 & 0xFFFFFFC0 | 0xF;
        v1 = (ZipPackAccessStrategy *)((unsigned int)v1 & 0xFFFFFF00 | v9 & 0xCF);
        Core::File::open((int)&v112, (int)&v115, &v111, (char)v1);
        v17 = v114;
        v114 |= 2u;
        if ( v17 & 1 )
        {
          LODWORD(v16) = *(_DWORD *)(v13 + 4);
          Core::FileImpl::write((Core::FileImpl *)&v108, v115, v16, *(_DWORD *)(v16 - 12));
          v110 |= 2u;
          if ( v109 )
            v109(&v108, &v108, 3);
          Core::File::close((Core::File *)&v106, (int *)&v115);
          if ( v107 )
            v107(&v106, &v106, 3);
        }
        if ( v113 )
          v113(&v112, &v112, 3);
        Core::File::~File((Core::File *)&v115);
      v19 = (int *)(*(_QWORD *)((char *)v76 + 44) >> 32);
      for ( j = (int *)*(_QWORD *)((char *)v76 + 44); v19 != j; ++j )
        v20 = *j;
        v21 = *(_DWORD *)(*j - 12);
        v133 = v20;
        v134 = v21;
        Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v135, (int)&v131, 2);
        LODWORD(v105) = &v136;
        HIDWORD(v105) = v137;
        if ( Core::FileSystem::fileOrDirectoryExists(&v105) == 1 )
          LODWORD(v101) = &v136;
          HIDWORD(v101) = v137;
          Core::FileSystem::deleteFile((int)&v102, &v101);
          v104 |= 2u;
          if ( v103 )
            v103(&v102, &v102, 3);
      v1 = v76;
      ZipUtils::ZipSettings::ZipSettings((ZipUtils::ZipSettings *)&v94);
      v2 = &v146;
      v99 = 1;
      sub_21E94B4((void **)&v93, (const char *)&v145);
      ResourceLocation::getFullPath((ResourceLocation *)&v92, v75);
      v83 = 0;
      v79 = 0;
      v80 = 0;
      v81 = &v79;
      v82 = &v79;
      if ( v95 )
        v22 = std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_copy(
                (int)&v78,
                v95,
                (int)&v79);
        v23 = v22;
        v80 = v22;
          v24 = v23;
          v23 = (int *)v23[2];
        while ( v23 );
        v81 = v24;
          v25 = v22;
          v22 = (int *)v22[3];
        while ( v22 );
        v82 = v25;
        v83 = v96;
      v89 = 0;
      v85 = 0;
      v86 = 0;
      v87 = &v85;
      v88 = &v85;
      if ( v97 )
        v26 = std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_copy(
                (int)&v84,
                v97,
                (int)&v85);
        v27 = v26;
        v86 = v26;
          v28 = v27;
          v27 = (int *)v27[2];
        while ( v27 );
        v87 = v28;
          v29 = v26;
          v26 = (int *)v26[3];
        while ( v26 );
        v88 = v29;
        v89 = v98;
      v90 = *(_QWORD *)&v99;
      sub_21E8AF4(&v91, &v100);
      ZipUtils::zip(&v93, &v92, (int)&v124, (int)&v78);
      ZipUtils::ZipSettings::~ZipSettings((ZipUtils::ZipSettings *)&v78);
      v30 = (void *)(v92 - 12);
      if ( (int *)(v92 - 12) != &dword_28898C0 )
        v71 = (unsigned int *)(v92 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v72 = __ldrex(v71);
          while ( __strex(v72 - 1, v71) );
        else
          v72 = (*v71)--;
        if ( v72 <= 0 )
          j_j_j_j__ZdlPv_9(v30);
      v31 = (void *)(v93 - 12);
      if ( (int *)(v93 - 12) != &dword_28898C0 )
        v73 = (unsigned int *)(v93 - 4);
            v74 = __ldrex(v73);
          while ( __strex(v74 - 1, v73) );
          v74 = (*v73)--;
        if ( v74 <= 0 )
          j_j_j_j__ZdlPv_9(v31);
      ZipUtils::ZipSettings::~ZipSettings((ZipUtils::ZipSettings *)&v94);
    ZipUtils::ZipProgress::~ZipProgress((ZipUtils::ZipProgress *)&v124);
  }
  v32 = (unsigned __int64 *)*((_DWORD *)v1 + 16);
  while ( v32 )
    v35 = v32;
    v36 = *v32 >> 32;
    v32 = (unsigned __int64 *)*v32;
    v37 = (void *)(v36 - 12);
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v36 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j__ZdlPv_9(v37);
    operator delete(v35);
  _aeabi_memclr4(*((_QWORD *)v1 + 7), 4 * (*((_QWORD *)v1 + 7) >> 32));
  *((_DWORD *)v1 + 16) = 0;
  *((_DWORD *)v1 + 17) = 0;
  v38 = (char *)*((_DWORD *)v1 + 14);
  if ( v38 && (char *)v1 + 80 != v38 )
    operator delete(v38);
  v39 = (void *)(*(_QWORD *)((char *)v1 + 44) >> 32);
  v40 = (void *)*(_QWORD *)((char *)v1 + 44);
  if ( v40 != v39 )
    do
      v43 = (int *)(*(_DWORD *)v40 - 12);
      if ( v43 != &dword_28898C0 )
        v41 = (unsigned int *)(*(_DWORD *)v40 - 4);
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
          v42 = (*v41)--;
        if ( v42 <= 0 )
          j_j_j_j__ZdlPv_9(v43);
      v40 = (char *)v40 + 4;
    while ( v40 != v39 );
    v40 = (void *)*((_DWORD *)v1 + 11);
  if ( v40 )
    operator delete(v40);
  v44 = *((_QWORD *)v1 + 4) >> 32;
  v45 = *((_QWORD *)v1 + 4);
  if ( v45 != v44 )
      v50 = *(_DWORD *)(v45 + 4);
      v51 = (void *)(v50 - 12);
      if ( (int *)(v50 - 12) != &dword_28898C0 )
        v46 = (unsigned int *)(v50 - 4);
            v47 = __ldrex(v46);
          while ( __strex(v47 - 1, v46) );
          v47 = (*v46)--;
        if ( v47 <= 0 )
          j_j_j_j__ZdlPv_9(v51);
      v52 = (int *)(*(_DWORD *)v45 - 12);
      if ( v52 != &dword_28898C0 )
        v48 = (unsigned int *)(*(_DWORD *)v45 - 4);
            v49 = __ldrex(v48);
          while ( __strex(v49 - 1, v48) );
          v49 = (*v48)--;
        if ( v49 <= 0 )
          j_j_j_j__ZdlPv_9(v52);
      v45 += 8;
    while ( v45 != v44 );
    v45 = *((_DWORD *)v1 + 8);
  if ( v45 )
    operator delete((void *)v45);
  v53 = *((_DWORD *)v1 + 4);
  v54 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v53 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v54);
  v55 = *((_DWORD *)v1 + 2);
  v56 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v55 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j__ZdlPv_9(v56);
  v57 = *((_DWORD *)v1 + 1);
  v58 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v57 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j__ZdlPv_9(v58);
  v59 = (RakNet *)*((_DWORD *)v2 + 1);
  if ( _stack_chk_guard != v59 )
    _stack_chk_fail(_stack_chk_guard - v59);
  return v1;
}


__int64 __fastcall ZipPackAccessStrategy::getPackSize(ZipPackAccessStrategy *this)
{
  void *v1; // r0@3
  unsigned int *v3; // r2@5
  signed int v4; // r1@7
  int v5; // [sp+0h] [bp-40h]@1
  int v6; // [sp+4h] [bp-3Ch]@1
  int v7; // [sp+8h] [bp-38h]@1
  char v8; // [sp+Ch] [bp-34h]@1
  void (*v9)(void); // [sp+14h] [bp-2Ch]@1
  int v10; // [sp+20h] [bp-20h]@1
  int v11; // [sp+24h] [bp-1Ch]@1

  v10 = 0;
  v11 = 0;
  ResourceLocation::getFullPath((ResourceLocation *)&v5, (int)this + 8);
  v6 = v5;
  v7 = *(_DWORD *)(v5 - 12);
  Core::FileSystem::getFileOrDirectorySize((int)&v8, (__int64 *)&v6, (int)&v10);
  if ( v9 )
    v9();
  v1 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
  {
    v3 = (unsigned int *)(v5 - 4);
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
      j_j_j_j__ZdlPv_9(v1);
  }
  return *(_QWORD *)&v10;
}
