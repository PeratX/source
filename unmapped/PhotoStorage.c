

RakNet *__fastcall PhotoStorage::deleteLoosePhoto(Player *a1, Entity *a2, int *a3)
{
  int *v3; // r4@1
  int v4; // r0@1
  int v5; // r2@1
  int v6; // r3@1
  void *v7; // r0@3
  RakNet *result; // r0@4
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  int v11; // [sp+4h] [bp-454h]@1
  __int64 v12; // [sp+8h] [bp-450h]@1
  int v13; // [sp+Ch] [bp-44Ch]@1
  char v14; // [sp+10h] [bp-448h]@1
  void (*v15)(void); // [sp+18h] [bp-440h]@1
  int v16; // [sp+28h] [bp-430h]@1
  int v17; // [sp+2Ch] [bp-42Ch]@1
  int v18; // [sp+30h] [bp-428h]@1
  int v19; // [sp+34h] [bp-424h]@1
  char v20; // [sp+3Ch] [bp-41Ch]@1
  int v21; // [sp+40h] [bp-418h]@1
  int v22; // [sp+440h] [bp-18h]@1
  RakNet *v23; // [sp+444h] [bp-14h]@1

  v3 = a3;
  v23 = _stack_chk_guard;
  j_PhotoStorage::getPhotoPath((PhotoStorage *)&v11, a1, a2);
  v4 = *v3;
  v5 = *(_DWORD *)(*v3 - 12);
  v6 = *(_DWORD *)(v11 - 12);
  v16 = v11;
  v17 = v6;
  v18 = v4;
  v19 = v5;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v20, (int)&v16, 2);
  LODWORD(v12) = &v21;
  v13 = v22;
  j_Core::FileSystem::deleteFile((int)&v14, &v12);
  if ( v15 )
    v15();
  v7 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
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
      j_j_j_j__ZdlPv_9(v7);
  }
  result = (RakNet *)(_stack_chk_guard - v23);
  if ( _stack_chk_guard != v23 )
    j___stack_chk_fail((int)result);
  return result;
}


int __fastcall PhotoStorage::PhotoStorage(double a1)
{
  double v1; // r4@1
  int *v2; // r9@1
  int *v3; // r11@1
  int *v4; // r8@1
  unsigned int v5; // r0@1
  int v6; // r7@3
  void *v7; // r6@3
  void *v8; // r0@4
  __int64 v9; // r1@5
  int v10; // r3@5
  void *v11; // r0@5
  __int64 v12; // r1@6
  int v13; // r3@6
  void *v14; // r0@6
  __int64 v15; // r1@7
  int v16; // r3@7
  void *v17; // r0@7
  unsigned int *v19; // r2@12
  signed int v20; // r1@14
  unsigned int *v21; // r2@16
  signed int v22; // r1@18
  unsigned int *v23; // r2@20
  signed int v24; // r1@22
  unsigned int *v25; // r2@24
  signed int v26; // r1@26
  RakNet *v27; // [sp+10h] [bp-1090h]@1
  int v28; // [sp+14h] [bp-108Ch]@7
  int v29; // [sp+18h] [bp-1088h]@6
  int v30; // [sp+1Ch] [bp-1084h]@5
  int v31; // [sp+20h] [bp-1080h]@4
  int v32; // [sp+24h] [bp-107Ch]@4
  int v33; // [sp+28h] [bp-1078h]@4
  __int64 v34; // [sp+30h] [bp-1070h]@5
  int v35; // [sp+38h] [bp-1068h]@5
  int v36; // [sp+3Ch] [bp-1064h]@5
  char v37; // [sp+54h] [bp-104Ch]@7
  int v38; // [sp+58h] [bp-1048h]@7
  char v39; // [sp+45Ch] [bp-C44h]@6
  int v40; // [sp+460h] [bp-C40h]@6
  char v41; // [sp+864h] [bp-83Ch]@5
  int v42; // [sp+868h] [bp-838h]@5
  char v43; // [sp+C6Ch] [bp-434h]@4
  int v44; // [sp+C70h] [bp-430h]@4

  v1 = a1;
  v27 = _stack_chk_guard;
  *(_DWORD *)LODWORD(a1) = &unk_28898CC;
  *(_DWORD *)(LODWORD(a1) + 4) = &unk_28898CC;
  v2 = (int *)(LODWORD(a1) + 4);
  *(_DWORD *)(LODWORD(a1) + 8) = &unk_28898CC;
  v3 = (int *)(LODWORD(a1) + 8);
  *(_DWORD *)(LODWORD(a1) + 12) = &unk_28898CC;
  v4 = (int *)(LODWORD(a1) + 12);
  *(_DWORD *)(LODWORD(a1) + 24) = 0;
  *(_DWORD *)(LODWORD(a1) + 28) = 0;
  *(_DWORD *)(LODWORD(a1) + 32) = 1065353216;
  LODWORD(a1) += 32;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v5 = sub_21E6254(a1);
  *(_DWORD *)(LODWORD(v1) + 20) = v5;
  if ( v5 == 1 )
  {
    *(_DWORD *)(LODWORD(v1) + 40) = 0;
    v7 = (void *)(LODWORD(v1) + 40);
  }
  else
    if ( v5 >= 0x40000000 )
      sub_21E57F4();
    v6 = 4 * v5;
    v7 = j_operator new(4 * v5);
    j___aeabi_memclr4((int)v7, v6);
  *(_DWORD *)(LODWORD(v1) + 16) = v7;
  v31 = *(_DWORD *)HIDWORD(v1);
  v32 = *(_DWORD *)(v31 - 12);
  j_File::cleanPath((int)&v43, (__int64 *)&v31);
  sub_21E94B4((void **)&v33, (const char *)&v44);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)LODWORD(v1),
    &v33);
  v8 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v33 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
  LODWORD(v9) = *(_DWORD *)LODWORD(v1);
  HIDWORD(v9) = *(_DWORD *)(*(_DWORD *)LODWORD(v1) - 12);
  v10 = *(_DWORD *)(PhotoStorage::BOOKS_DIR - 12);
  v34 = v9;
  v35 = PhotoStorage::BOOKS_DIR;
  v36 = v10;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v41, (int)&v34, 2);
  sub_21E94B4((void **)&v30, (const char *)&v42);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v2, &v30);
  v11 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v30 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  LODWORD(v12) = *(_DWORD *)LODWORD(v1);
  HIDWORD(v12) = *(_DWORD *)(*(_DWORD *)LODWORD(v1) - 12);
  v13 = *(_DWORD *)(PhotoStorage::PHOTO_DIR - 12);
  v34 = v12;
  v35 = PhotoStorage::PHOTO_DIR;
  v36 = v13;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v39, (int)&v34, 2);
  sub_21E94B4((void **)&v29, (const char *)&v40);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v29);
  v14 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v29 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  LODWORD(v15) = *(_DWORD *)LODWORD(v1);
  HIDWORD(v15) = *(_DWORD *)(*(_DWORD *)LODWORD(v1) - 12);
  v16 = *(_DWORD *)(PhotoStorage::MANIFEST_NAME - 12);
  v34 = v15;
  v35 = PhotoStorage::MANIFEST_NAME;
  v36 = v16;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v37, (int)&v34, 2);
  sub_21E94B4((void **)&v28, (const char *)&v38);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v4, &v28);
  v17 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v28 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  PhotoStorage::_readManifest((PhotoStorage *)LODWORD(v1));
  if ( _stack_chk_guard != v27 )
    j___stack_chk_fail(_stack_chk_guard - v27);
  return LODWORD(v1);
}


void __fastcall PhotoStorage::_writeManifest(PhotoStorage *this)
{
  PhotoStorage *v1; // r4@1
  int i; // r6@1
  char *v3; // r0@7
  unsigned int *v4; // r2@9
  signed int v5; // r1@11
  int v6; // [sp+10h] [bp-50h]@5
  int v7; // [sp+14h] [bp-4Ch]@5
  char v8; // [sp+18h] [bp-48h]@5
  void (*v9)(void); // [sp+20h] [bp-40h]@5
  int v10; // [sp+2Ch] [bp-34h]@3
  int v11; // [sp+30h] [bp-30h]@3
  char v12; // [sp+34h] [bp-2Ch]@3
  void (*v13)(void); // [sp+3Ch] [bp-24h]@3
  _DWORD *v14; // [sp+48h] [bp-18h]@1

  v1 = this;
  v14 = &unk_28898CC;
  sub_21E6FCC((const void **)&v14, 32 * *((_DWORD *)this + 7));
  for ( i = *((_DWORD *)v1 + 6); i; i = *(_DWORD *)i )
    sub_21E72F0((const void **)&v14, (const void **)(i + 4));
  v10 = *((_DWORD *)v1 + 3);
  v11 = *(_DWORD *)(v10 - 12);
  j_Core::FileSystem::deleteFile((int)&v12, (__int64 *)&v10);
  if ( v13 )
    v13();
  v6 = *((_DWORD *)v1 + 3);
  v7 = *(_DWORD *)(v6 - 12);
  j_File::writeCreateOrAppendFileData((int)&v8, (__int64 *)&v6, 0, 0, *(v14 - 3), (unsigned int)v14);
  if ( v9 )
    v9();
  v3 = (char *)(v14 - 3);
  if ( v14 - 3 != &dword_28898C0 )
  {
    v4 = v14 - 1;
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
      j_j_j_j__ZdlPv_9(v3);
  }
}


char *__fastcall PhotoStorage::getBookPath(PhotoStorage *this)
{
  return (char *)this + 4;
}


signed int __fastcall PhotoStorage::_addValidFile(int a1, const char **a2)
{
  int v2; // r4@1
  void *v3; // r0@1
  int v4; // r1@2
  signed int v5; // r4@3
  void *v6; // r0@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  unsigned int *v10; // r2@11
  signed int v11; // r1@13
  int v12; // [sp+0h] [bp-28h]@3
  int v13; // [sp+8h] [bp-20h]@1
  int v14; // [sp+Ch] [bp-1Ch]@1

  v2 = a1;
  sub_21E94B4((void **)&v13, *a2);
  j_CryptoUtils::getFileChecksum((Crypto::Hash::Hash *)&v14, &v13);
  v3 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = v14;
  if ( *(_DWORD *)(v14 - 12) )
    j_std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert<std::string const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::string,true>>>>(
      &v12,
      (unsigned __int64 *)(v2 + 16),
      (int **)&v14);
    PhotoStorage::_writeManifest((PhotoStorage *)v2);
    v4 = v14;
    v5 = 1;
  else
    v5 = 0;
  v6 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v4 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  return v5;
}


signed int __fastcall PhotoStorage::_isValidFile(int a1, const char **a2)
{
  int v2; // r4@1
  void *v3; // r0@1
  unsigned int v4; // r9@2
  __int64 v5; // kr00_8@2
  unsigned int v6; // r11@2
  signed int *v7; // r6@2
  signed int v8; // r7@3
  _DWORD *v9; // r8@3
  int v10; // r4@3
  _DWORD *v11; // r1@5
  size_t v12; // r2@5
  signed int v13; // r5@9
  unsigned int *v15; // r2@18
  signed int v16; // r1@20
  unsigned int *v17; // r2@22
  signed int v18; // r1@24
  int v19; // [sp+4h] [bp-3Ch]@1
  void *s1; // [sp+8h] [bp-38h]@1

  v2 = a1;
  sub_21E94B4((void **)&v19, *a2);
  j_CryptoUtils::getFileChecksum((Crypto::Hash::Hash *)&s1, &v19);
  v3 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v19 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v5 = *(_QWORD *)(v2 + 16);
  v6 = v4 % (unsigned int)(*(_QWORD *)(v2 + 16) >> 32);
  v7 = *(signed int **)(v5 + 4 * v6);
  if ( v7 )
    v8 = *v7;
    v9 = s1;
    v10 = *(_DWORD *)(*v7 + 8);
    while ( 1 )
      if ( v10 == v4 )
      {
        v11 = *(_DWORD **)(v8 + 4);
        v12 = *(v9 - 3);
        if ( v12 == *(v11 - 3) && !j_memcmp(v9, v11, v12) )
          break;
      }
      if ( !*(_DWORD *)v8 )
        v13 = 0;
        goto LABEL_12;
      v10 = *(_DWORD *)(v5 + 8);
      v7 = (signed int *)v8;
      v8 = *(_DWORD *)v8;
      if ( *(_DWORD *)(v5 + 8) % HIDWORD(v5) != v6 )
    if ( v7 )
      v13 = *v7;
      if ( *v7 )
        v13 = 1;
      v13 = 0;
  else
    v13 = 0;
LABEL_12:
  if ( v9 - 3 != &dword_28898C0 )
    v17 = v9 - 1;
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v9 - 3);
  return v13;
}


char *__fastcall PhotoStorage::deleteBookPhoto(int a1, _DWORD *a2, unsigned int *a3)
{
  unsigned int *v3; // r4@1
  __int64 v4; // r1@1
  int v5; // r0@1
  int v6; // r3@1
  unsigned int v7; // r0@1
  unsigned int v8; // r2@1
  int v9; // r3@1
  void *v10; // r0@3
  char *result; // r0@4
  unsigned int *v12; // r2@6
  signed int v13; // r1@8
  int v14; // [sp+4h] [bp-85Ch]@1
  __int64 v15; // [sp+8h] [bp-858h]@1
  int v16; // [sp+Ch] [bp-854h]@1
  char v17; // [sp+10h] [bp-850h]@1
  void (*v18)(void); // [sp+18h] [bp-848h]@1
  int v19; // [sp+28h] [bp-838h]@1
  int v20; // [sp+2Ch] [bp-834h]@1
  unsigned __int64 v21; // [sp+30h] [bp-830h]@1
  char v22; // [sp+3Ch] [bp-824h]@1
  int v23; // [sp+40h] [bp-820h]@1
  int v24; // [sp+440h] [bp-420h]@1
  char v25; // [sp+444h] [bp-41Ch]@1
  int v26; // [sp+448h] [bp-418h]@1
  RakNet *v27; // [sp+84Ch] [bp-14h]@1

  v3 = a3;
  v27 = _stack_chk_guard;
  LODWORD(v4) = *a2;
  v5 = *(_DWORD *)(a1 + 4);
  HIDWORD(v4) = *(_DWORD *)(v4 - 12);
  v6 = *(_DWORD *)(v5 - 12);
  v19 = v5;
  v20 = v6;
  v21 = v4;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v25, (int)&v19, 2);
  sub_21E94B4((void **)&v14, (const char *)&v26);
  v7 = *v3;
  v8 = *(_DWORD *)(*v3 - 12);
  v9 = *(_DWORD *)(v14 - 12);
  v19 = v14;
  v20 = v9;
  v21 = __PAIR__(v8, v7);
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v22, (int)&v19, 2);
  LODWORD(v15) = &v23;
  v16 = v24;
  j_Core::FileSystem::deleteFile((int)&v17, &v15);
  if ( v18 )
    v18();
  v10 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v14 - 4);
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
      j_j_j_j__ZdlPv_9(v10);
  }
  result = (char *)(_stack_chk_guard - v27);
  if ( _stack_chk_guard != v27 )
    j___stack_chk_fail((int)result);
  return result;
}


    if ( PhotoStorage::_isValidFile(v6, (const char **)&v15) == 1 )
{
      v18 = 1023;
      v20 = 0;
      v19 = 0;
      v12 = v5;
      LODWORD(v7) = v4[1];
      HIDWORD(v7) = *(_DWORD *)(v7 + 1028);
      LODWORD(v7) = v7 + 4;
      v11 = v7;
      j_Core::PathBuffer<Core::StackString<char,1024u>>::makePathRelativeToParentPath((int)&v13, (int)&v18, &v12, &v11);
      if ( v14 )
        v14();
      v8 = v4[2];
      v9 = *(_QWORD *)(v8 + 4);
      if ( (_DWORD)v9 == HIDWORD(v9) )
      {
        j_std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<Core::PathBuffer<Core::StackString<char,1024u>> &>(
          (unsigned __int64 *)v4[2],
          (int)&v18);
      }
      else
        sub_21E94B4((void **)v9, &v19);
        *(_DWORD *)(v8 + 4) += 4;
    }
  }
  *(_DWORD *)(v3 + 8) = 0;
  *(_BYTE *)(v3 + 16) = *(_BYTE *)(v3 + 16) & 0xFC | 1;
  result = (char *)(_stack_chk_guard - v23);
  if ( _stack_chk_guard != v23 )
    j___stack_chk_fail((int)result);
  return result;
}


RakNet *__fastcall PhotoStorage::getBookPath(void **a1, int a2, int *a3)
{
  void **v3; // r4@1
  int v4; // r0@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r3@1
  RakNet *result; // r0@1
  int v9; // [sp+0h] [bp-430h]@1
  int v10; // [sp+4h] [bp-42Ch]@1
  int v11; // [sp+8h] [bp-428h]@1
  int v12; // [sp+Ch] [bp-424h]@1
  char v13; // [sp+14h] [bp-41Ch]@1
  int v14; // [sp+18h] [bp-418h]@1
  RakNet *v15; // [sp+41Ch] [bp-14h]@1

  v3 = a1;
  v15 = _stack_chk_guard;
  v4 = *a3;
  v5 = *(_DWORD *)(a2 + 4);
  v6 = *(_DWORD *)(*a3 - 12);
  v7 = *(_DWORD *)(v5 - 12);
  v9 = v5;
  v10 = v7;
  v11 = v4;
  v12 = v6;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v13, (int)&v9, 2);
  sub_21E94B4(v3, (const char *)&v14);
  result = (RakNet *)(_stack_chk_guard - v15);
  if ( _stack_chk_guard != v15 )
    j___stack_chk_fail((int)result);
  return result;
}


RakNet *__fastcall PhotoStorage::getPhotoPath(PhotoStorage *this, Player *a2, Entity *a3)
{
  void **v3; // r4@1
  __int64 v4; // r5@1
  __int64 *v5; // r0@1
  int v6; // r1@1
  __int64 v7; // r0@1
  void *v8; // r0@1
  RakNet *result; // r0@2
  unsigned int *v10; // r2@4
  signed int v11; // r1@6
  int v12; // [sp+0h] [bp-438h]@1
  __int64 v13; // [sp+8h] [bp-430h]@1
  __int64 v14; // [sp+10h] [bp-428h]@1
  char v15; // [sp+1Ch] [bp-41Ch]@1
  int v16; // [sp+20h] [bp-418h]@1
  RakNet *v17; // [sp+424h] [bp-14h]@1

  v3 = (void **)this;
  v17 = _stack_chk_guard;
  LODWORD(v4) = *((_DWORD *)a2 + 2);
  HIDWORD(v4) = *(_DWORD *)(v4 - 12);
  v5 = (__int64 *)j_Entity::getUniqueID(a3);
  j_Util::toString<long long,(void *)0,(void *)0>((void **)&v12, v6, *v5);
  LODWORD(v7) = v12;
  HIDWORD(v7) = *(_DWORD *)(v12 - 12);
  v13 = v4;
  v14 = v7;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v15, (int)&v13, 2);
  sub_21E94B4(v3, (const char *)&v16);
  v8 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
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
      j_j_j_j__ZdlPv_9(v8);
  }
  result = (RakNet *)(_stack_chk_guard - v17);
  if ( _stack_chk_guard != v17 )
    j___stack_chk_fail((int)result);
  return result;
}


int __fastcall PhotoStorage::isValidLoosePhoto(Player *a1, Entity *a2, int *a3)
{
  Player *v3; // r4@1
  int *v4; // r5@1
  int v5; // r0@1
  int v6; // r2@1
  int v7; // r3@1
  signed int v8; // r4@1
  void *v9; // r0@1
  unsigned int *v11; // r2@5
  signed int v12; // r1@7
  int v13; // [sp+0h] [bp-440h]@1
  int *v14; // [sp+4h] [bp-43Ch]@1
  int v15; // [sp+8h] [bp-438h]@1
  int v16; // [sp+10h] [bp-430h]@1
  int v17; // [sp+14h] [bp-42Ch]@1
  int v18; // [sp+18h] [bp-428h]@1
  int v19; // [sp+1Ch] [bp-424h]@1
  char v20; // [sp+24h] [bp-41Ch]@1
  int v21; // [sp+28h] [bp-418h]@1
  int v22; // [sp+428h] [bp-18h]@1
  RakNet *v23; // [sp+42Ch] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v23 = _stack_chk_guard;
  j_PhotoStorage::getPhotoPath((PhotoStorage *)&v13, a1, a2);
  v5 = *v4;
  v6 = *(_DWORD *)(*v4 - 12);
  v7 = *(_DWORD *)(v13 - 12);
  v16 = v13;
  v17 = v7;
  v18 = v5;
  v19 = v6;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v20, (int)&v16, 2);
  v14 = &v21;
  v15 = v22;
  v8 = PhotoStorage::_isValidFile((int)v3, (const char **)&v14);
  v9 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v13 - 4);
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
      j_j_j_j__ZdlPv_9(v9);
  }
  if ( _stack_chk_guard != v23 )
    j___stack_chk_fail(_stack_chk_guard - v23);
  return v8;
}


char *__fastcall PhotoStorage::getBookPhoto(int a1, int *a2, int *a3, int *a4)
{
  int v4; // r5@1
  int *v5; // r8@1
  int *v6; // r6@1
  int v7; // r0@1
  int v8; // r2@1
  int v9; // r3@1
  int v10; // r0@1
  int v11; // r2@1
  int v12; // r3@1
  void *v13; // r0@1
  char *result; // r0@2
  unsigned int *v15; // r2@4
  signed int v16; // r1@6
  int v17; // [sp+0h] [bp-42Ch]@1
  __int64 v18; // [sp+4h] [bp-428h]@1
  int v19; // [sp+8h] [bp-424h]@1
  int v20; // [sp+10h] [bp-41Ch]@1
  int v21; // [sp+14h] [bp-418h]@1
  int v22; // [sp+18h] [bp-414h]@1
  int v23; // [sp+1Ch] [bp-410h]@1
  char v24; // [sp+24h] [bp-408h]@1
  int v25; // [sp+28h] [bp-404h]@1
  int v26; // [sp+428h] [bp-4h]@1
  char v27; // [sp+42Ch] [bp+0h]@1
  int v28; // [sp+430h] [bp+4h]@1
  RakNet *v29; // [sp+834h] [bp+408h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v29 = _stack_chk_guard;
  v7 = *a2;
  v8 = *(_DWORD *)(*a2 - 12);
  v9 = *(_DWORD *)(*(_DWORD *)(v4 + 4) - 12);
  v20 = *(_DWORD *)(v4 + 4);
  v21 = v9;
  v22 = v7;
  v23 = v8;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v27, (int)&v20, 2);
  sub_21E94B4((void **)&v17, (const char *)&v28);
  v10 = *v6;
  v11 = *(_DWORD *)(*v6 - 12);
  v12 = *(_DWORD *)(v17 - 12);
  v20 = v17;
  v21 = v12;
  v22 = v10;
  v23 = v11;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v24, (int)&v20, 2);
  LODWORD(v18) = &v25;
  v19 = v26;
  PhotoStorage::_readFile(v4, &v18, v5);
  v13 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v16 = __ldrex(v15);
        __strex(v16 - 1, v15);
      }
      while ( &v27 );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  }
  result = (char *)(_stack_chk_guard - v29);
  if ( _stack_chk_guard != v29 )
    j___stack_chk_fail((int)result);
  return result;
}


PhotoStorage *__fastcall PhotoStorage::~PhotoStorage(PhotoStorage *this)
{
  PhotoStorage *v1; // r10@1
  unsigned __int64 *v2; // r7@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  unsigned __int64 *v5; // r6@11
  int v6; // r1@11
  void *v7; // r0@11
  char *v8; // r0@13
  int v9; // r1@16
  void *v10; // r0@16
  int v11; // r1@17
  void *v12; // r0@17
  int v13; // r1@18
  void *v14; // r0@18
  int *v15; // r0@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  unsigned int *v19; // r2@25
  signed int v20; // r1@27
  unsigned int *v21; // r2@29
  signed int v22; // r1@31
  unsigned int *v23; // r2@33
  signed int v24; // r1@35

  v1 = this;
  v2 = (unsigned __int64 *)*((_DWORD *)this + 6);
  while ( v2 )
  {
    v5 = v2;
    v6 = *v2 >> 32;
    v2 = (unsigned __int64 *)*v2;
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
    operator delete(v5);
  }
  _aeabi_memclr4(*((_QWORD *)v1 + 2), 4 * (*((_QWORD *)v1 + 2) >> 32));
  *((_DWORD *)v1 + 6) = 0;
  *((_DWORD *)v1 + 7) = 0;
  v8 = (char *)*((_DWORD *)v1 + 4);
  if ( v8 && (char *)v1 + 40 != v8 )
    operator delete(v8);
  v9 = *((_DWORD *)v1 + 3);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = *((_DWORD *)v1 + 2);
  v12 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v11 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = *((_DWORD *)v1 + 1);
  v14 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v13 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (int *)(*(_DWORD *)v1 - 12);
  if ( v15 != &dword_28898C0 )
    v23 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  return v1;
}


signed int __fastcall PhotoStorage::isValidBookPhoto(int a1, int *a2, int *a3)
{
  int v3; // r4@1
  int *v4; // r5@1
  int v5; // r0@1
  int v6; // r2@1
  int v7; // r3@1
  int v8; // r0@1
  int v9; // r2@1
  int v10; // r3@1
  signed int v11; // r4@1
  void *v12; // r0@1
  unsigned int *v14; // r2@5
  signed int v15; // r1@7
  int v16; // [sp+0h] [bp-10h]@1
  int *v17; // [sp+4h] [bp-Ch]@1
  int v18; // [sp+8h] [bp-8h]@1
  int v19; // [sp+10h] [bp+0h]@1
  int v20; // [sp+14h] [bp+4h]@1
  int v21; // [sp+18h] [bp+8h]@1
  int v22; // [sp+1Ch] [bp+Ch]@1
  char v23; // [sp+20h] [bp+10h]@1
  int v24; // [sp+24h] [bp+14h]@1
  int v25; // [sp+424h] [bp+414h]@1
  char v26; // [sp+428h] [bp+418h]@1
  int v27; // [sp+42Ch] [bp+41Ch]@1
  RakNet *v28; // [sp+830h] [bp+820h]@1

  v3 = a1;
  v4 = a3;
  v28 = _stack_chk_guard;
  v5 = *a2;
  v6 = *(_DWORD *)(*a2 - 12);
  v7 = *(_DWORD *)(*(_DWORD *)(v3 + 4) - 12);
  v19 = *(_DWORD *)(v3 + 4);
  v20 = v7;
  v21 = v5;
  v22 = v6;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v26, (int)&v19, 2);
  sub_21E94B4((void **)&v16, (const char *)&v27);
  v8 = *v4;
  v9 = *(_DWORD *)(*v4 - 12);
  v10 = *(_DWORD *)(v16 - 12);
  v19 = v16;
  v20 = v10;
  v21 = v8;
  v22 = v9;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v23, (int)&v19, 2);
  v17 = &v24;
  v18 = v25;
  v11 = PhotoStorage::_isValidFile(v3, (const char **)&v17);
  v12 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v15 = __ldrex(v14);
        __strex(v15 - 1, v14);
      }
      while ( &v19 );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  }
  if ( _stack_chk_guard != v28 )
    j___stack_chk_fail(_stack_chk_guard - v28);
  return v11;
}


RakNet *__fastcall PhotoStorage::storeLoosePhoto(Player *a1, Entity *a2, int *a3, unsigned int *a4)
{
  Player *v4; // r5@1
  int *v5; // r6@1
  unsigned int *v6; // r4@1
  int v7; // r0@1
  int v8; // r2@1
  int v9; // r3@1
  void *v10; // r0@1
  RakNet *result; // r0@2
  unsigned int *v12; // r2@4
  signed int v13; // r1@6
  int v14; // [sp+0h] [bp-440h]@1
  __int64 v15; // [sp+4h] [bp-43Ch]@1
  int v16[3]; // [sp+8h] [bp-438h]@1
  int v17; // [sp+10h] [bp-430h]@1
  int v18; // [sp+14h] [bp-42Ch]@1
  int v19; // [sp+18h] [bp-428h]@1
  int v20; // [sp+1Ch] [bp-424h]@1
  char v21; // [sp+24h] [bp-41Ch]@1
  int v22; // [sp+28h] [bp-418h]@1
  int v23; // [sp+428h] [bp-18h]@1
  RakNet *v24; // [sp+42Ch] [bp-14h]@1

  v4 = a1;
  v5 = a3;
  v6 = a4;
  v24 = _stack_chk_guard;
  j_PhotoStorage::getPhotoPath((PhotoStorage *)&v14, a1, a2);
  v7 = *v5;
  v8 = *(_DWORD *)(*v5 - 12);
  v9 = *(_DWORD *)(v14 - 12);
  v17 = v14;
  v18 = v9;
  v19 = v7;
  v20 = v8;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v21, (int)&v17, 2);
  LODWORD(v15) = &v22;
  v16[0] = v23;
  PhotoStorage::_writeFile((int)v4, &v15, v6);
  v10 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v14 - 4);
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
      j_j_j_j__ZdlPv_9(v10);
  }
  result = (RakNet *)(_stack_chk_guard - v24);
  if ( _stack_chk_guard != v24 )
    j___stack_chk_fail((int)result);
  return result;
}


void __fastcall PhotoStorage::_readManifest(PhotoStorage *this)
{
  PhotoStorage *v1; // r4@1
  char *v2; // r1@3
  unsigned __int64 *v3; // r4@4
  unsigned int v4; // r5@4
  int v5; // r0@5
  char *v6; // r0@8
  unsigned int *v7; // r2@12
  signed int v8; // r1@14
  char v9; // [sp+4h] [bp-54h]@7
  _DWORD *v10; // [sp+Ch] [bp-4Ch]@3
  int v11; // [sp+10h] [bp-48h]@1
  int v12; // [sp+14h] [bp-44h]@1
  char v13; // [sp+18h] [bp-40h]@1
  void (*v14)(void); // [sp+20h] [bp-38h]@1
  void *ptr; // [sp+2Ch] [bp-2Ch]@1
  int v16; // [sp+30h] [bp-28h]@1
  int v17; // [sp+34h] [bp-24h]@1

  v1 = this;
  ptr = 0;
  v16 = 0;
  v17 = 0;
  v11 = *((_DWORD *)this + 3);
  v12 = *(_DWORD *)(v11 - 12);
  j_Core::FileSystem::readFileData((int)&v13, (__int64 *)&v11, (int)&ptr);
  if ( v14 )
    v14();
  v10 = &unk_28898CC;
  sub_21E849C((char *)&v10, 0x20u, 0);
  v2 = (char *)ptr;
  if ( (unsigned int)(v16 - (_DWORD)ptr) >= 0x20 )
  {
    v3 = (unsigned __int64 *)((char *)v1 + 16);
    v4 = 32;
    do
    {
      v5 = (int)v10;
      if ( *(v10 - 1) >= 0 )
      {
        sub_21E8010((const void **)&v10);
        v2 = (char *)ptr;
        v5 = (int)v10;
      }
      j___aeabi_memcpy(v5, (int)&v2[v4 - 32], 32);
      j_std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert<std::string const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::string,true>>>>(
        (int *)&v9,
        v3,
        &v10);
      v2 = (char *)ptr;
      v4 += 32;
    }
    while ( v4 <= v16 - (signed int)ptr );
  }
  v6 = (char *)(v10 - 3);
  if ( v10 - 3 != &dword_28898C0 )
    v7 = v10 - 1;
    if ( &pthread_create )
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  if ( ptr )
    j_operator delete(ptr);
}


void __fastcall PhotoStorage::_writeManifest(PhotoStorage *this)
{
  PhotoStorage::_writeManifest(this);
}


char *__fastcall PhotoStorage::getPhotoPath(PhotoStorage *this)
{
  return (char *)this + 8;
}


RakNet *__fastcall PhotoStorage::getLoosePhotos(Player *a1, Entity *a2, _QWORD *a3)
{
  _QWORD *v3; // r11@1
  Entity *v4; // r12@1
  __int64 v5; // kr00_8@1
  int *v6; // r1@2
  _DWORD *v7; // r5@2
  unsigned int *v8; // r2@3
  signed int v9; // r7@5
  Entity *v10; // r4@9
  int *v11; // r7@9
  int *v12; // r0@10
  char *v13; // r6@12
  unsigned int v14; // r5@12
  char *v15; // r7@12
  int v16; // r0@12
  int v17; // r1@18
  unsigned int v18; // r5@18
  int v19; // r0@18
  _DWORD *v20; // r0@23
  __int64 v21; // r1@23
  RakNet *result; // r0@27
  unsigned int *v23; // r1@29
  signed int v24; // r0@31
  Player *v25; // [sp+4h] [bp-86Ch]@1
  _DWORD *v26; // [sp+8h] [bp-868h]@23
  __int64 v27; // [sp+10h] [bp-860h]@23
  char *v28; // [sp+18h] [bp-858h]@23
  int v29; // [sp+1Ch] [bp-854h]@23
  char v30; // [sp+20h] [bp-850h]@23
  void (*v31)(void); // [sp+28h] [bp-848h]@23
  void *ptr; // [sp+34h] [bp-83Ch]@12
  int v33; // [sp+38h] [bp-838h]@18
  char v34; // [sp+3Ch] [bp-834h]@18
  int v35; // [sp+43Ch] [bp-434h]@18
  int v36; // [sp+440h] [bp-430h]@2
  char v37; // [sp+444h] [bp-42Ch]@12
  int v38; // [sp+844h] [bp-2Ch]@12
  RakNet *v39; // [sp+848h] [bp-28h]@1

  v25 = a1;
  v3 = a3;
  v4 = a2;
  v39 = _stack_chk_guard;
  v5 = *a3;
  if ( HIDWORD(v5) != (_DWORD)v5 )
  {
    v6 = &v36;
    v7 = (_DWORD *)v5;
    do
    {
      v12 = (int *)(*v7 - 12);
      if ( v12 != &dword_28898C0 )
      {
        v8 = (unsigned int *)(*v7 - 4);
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
          v10 = v4;
          v11 = v6;
          j_j_j_j__ZdlPv_9(v12);
          v6 = v11;
          v4 = v10;
      }
      ++v7;
    }
    while ( v7 != (_DWORD *)HIDWORD(v5) );
  }
  *((_DWORD *)v3 + 1) = v5;
  j_PhotoStorage::getPhotoPath((PhotoStorage *)&ptr, v25, v4);
  v13 = (char *)ptr;
  v15 = (char *)ptr - 12;
  v14 = *((_DWORD *)ptr - 3);
  v36 = 1023;
  v16 = 0;
  v37 = 0;
  v38 = 0;
  if ( v14 < 0x400 )
    if ( v14 )
      j___aeabi_memcpy((int)&v37, (int)ptr, v14);
    *((_BYTE *)&v36 + v14 + 4) = 0;
    v16 = v38 + v14;
  else
    v37 = 0;
  v38 = v16;
  if ( (int *)v15 != &dword_28898C0 )
    v23 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
    else
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v17 = *(_DWORD *)v25;
  v18 = *(_DWORD *)(*(_DWORD *)v25 - 12);
  v33 = 1023;
  v19 = 0;
  v34 = 0;
  v35 = 0;
  if ( v18 < 0x400 )
    if ( v18 )
      j___aeabi_memcpy((int)&v34, v17, v18);
    *((_BYTE *)&v33 + v18 + 4) = 0;
    v19 = v35 + v18;
    v34 = 0;
  v35 = v19;
  v28 = &v37;
  v29 = v38;
  v20 = j_operator new(0xCu);
  LODWORD(v21) = sub_197BCC4;
  *v20 = v25;
  v20[1] = &v33;
  HIDWORD(v21) = sub_197BBD4;
  v20[2] = v3;
  v26 = v20;
  v27 = v21;
  j_Core::FileSystem::iterateOverDirectory((int)&v30, (__int64 *)&v28, 130LL, (int)&v26);
  if ( v31 )
    v31();
  if ( (_DWORD)v27 )
    ((void (*)(void))v27)();
  result = (RakNet *)(_stack_chk_guard - v39);
  if ( _stack_chk_guard != v39 )
    j___stack_chk_fail((int)result);
  return result;
}


signed int __fastcall PhotoStorage::_readFile(int a1, __int64 *a2, int *a3)
{
  __int64 *v3; // r5@1
  int *v4; // r4@1
  signed int v5; // r1@1
  signed int result; // r0@1
  void *v7; // r0@4
  unsigned int *v8; // r2@9
  signed int v9; // r1@11
  int v10; // [sp+4h] [bp-4Ch]@4
  __int64 v11; // [sp+8h] [bp-48h]@2
  char v12; // [sp+10h] [bp-40h]@2
  void (*v13)(void); // [sp+18h] [bp-38h]@2
  void *ptr; // [sp+24h] [bp-2Ch]@2
  int v15; // [sp+28h] [bp-28h]@2
  int v16; // [sp+2Ch] [bp-24h]@2
  const char *v17[3]; // [sp+30h] [bp-20h]@1

  v3 = a2;
  v4 = a3;
  *(_QWORD *)v17 = *a2;
  v5 = PhotoStorage::_isValidFile(a1, v17);
  result = 0;
  if ( v5 == 1 )
  {
    ptr = 0;
    v15 = 0;
    v16 = 0;
    v11 = *v3;
    j_Core::FileSystem::readFileData((int)&v12, &v11, (int)&ptr);
    if ( v13 )
      v13();
    sub_21E91E0((void **)&v10, (unsigned int)ptr, v15 - (_DWORD)ptr);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v4, &v10);
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
    if ( ptr )
      j_operator delete(ptr);
    result = 1;
  }
  return result;
}


signed int __fastcall PhotoStorage::_writeFile(int a1, __int64 *a2, unsigned int *a3)
{
  __int64 *v3; // r5@1
  int v4; // r4@1
  unsigned int *v5; // r6@1
  char v6; // r0@3
  int v7; // r7@3
  char v8; // r0@4
  signed int result; // r0@9
  __int64 v10; // [sp+10h] [bp-78h]@9
  __int64 v11; // [sp+18h] [bp-70h]@4
  char v12; // [sp+24h] [bp-64h]@4
  void (*v13)(void); // [sp+2Ch] [bp-5Ch]@4
  char v14; // [sp+34h] [bp-54h]@4
  __int64 v15; // [sp+38h] [bp-50h]@3
  char v16; // [sp+44h] [bp-44h]@3
  void (*v17)(void); // [sp+4Ch] [bp-3Ch]@6
  char v18; // [sp+54h] [bp-34h]@3
  __int64 v19; // [sp+58h] [bp-30h]@1
  char v20; // [sp+60h] [bp-28h]@1
  void (*v21)(void); // [sp+68h] [bp-20h]@1

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v19 = *a2;
  j_Core::FileSystem::deleteFile((int)&v20, &v19);
  if ( v21 )
    v21();
  v15 = *v3;
  j_Core::FileSystem::createDirectoryForFile((int)&v16, &v15);
  v6 = v18;
  v7 = 0;
  v18 |= 2u;
  if ( v6 & 1 )
  {
    v11 = *v3;
    j_File::writeCreateOrAppendFileData((int)&v12, &v11, 0, 0, *(_DWORD *)(*v5 - 12), *v5);
    v8 = v14;
    v14 |= 2u;
    v7 = v8 & 1;
    if ( v13 )
      v13();
  }
  if ( v17 )
    v17();
  if ( v7 == 1 )
    v10 = *v3;
    result = PhotoStorage::_addValidFile(v4, (const char **)&v10);
  else
    result = 0;
  return result;
}


RakNet *__fastcall PhotoStorage::setValidLoosePhoto(Player *a1, Entity *a2, int *a3)
{
  Player *v3; // r4@1
  int *v4; // r5@1
  int v5; // r0@1
  int v6; // r2@1
  int v7; // r3@1
  void *v8; // r0@1
  RakNet *result; // r0@2
  unsigned int *v10; // r2@4
  signed int v11; // r1@6
  int v12; // [sp+0h] [bp-440h]@1
  int *v13; // [sp+4h] [bp-43Ch]@1
  int v14; // [sp+8h] [bp-438h]@1
  int v15; // [sp+10h] [bp-430h]@1
  int v16; // [sp+14h] [bp-42Ch]@1
  int v17; // [sp+18h] [bp-428h]@1
  int v18; // [sp+1Ch] [bp-424h]@1
  char v19; // [sp+24h] [bp-41Ch]@1
  int v20; // [sp+28h] [bp-418h]@1
  int v21; // [sp+428h] [bp-18h]@1
  RakNet *v22; // [sp+42Ch] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v22 = _stack_chk_guard;
  j_PhotoStorage::getPhotoPath((PhotoStorage *)&v12, a1, a2);
  v5 = *v4;
  v6 = *(_DWORD *)(*v4 - 12);
  v7 = *(_DWORD *)(v12 - 12);
  v15 = v12;
  v16 = v7;
  v17 = v5;
  v18 = v6;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v19, (int)&v15, 2);
  v13 = &v20;
  v14 = v21;
  PhotoStorage::_addValidFile((int)v3, (const char **)&v13);
  v8 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
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
      j_j_j_j__ZdlPv_9(v8);
  }
  result = (RakNet *)(_stack_chk_guard - v22);
  if ( _stack_chk_guard != v22 )
    j___stack_chk_fail((int)result);
  return result;
}


RakNet *__fastcall PhotoStorage::getLoosePhoto(Player *a1, Entity *a2, int *a3, int *a4)
{
  Player *v4; // r5@1
  int *v5; // r6@1
  int *v6; // r4@1
  int v7; // r0@1
  int v8; // r2@1
  int v9; // r3@1
  void *v10; // r0@1
  RakNet *result; // r0@2
  unsigned int *v12; // r2@4
  signed int v13; // r1@6
  int v14; // [sp+0h] [bp-440h]@1
  __int64 v15; // [sp+4h] [bp-43Ch]@1
  int v16[3]; // [sp+8h] [bp-438h]@1
  int v17; // [sp+10h] [bp-430h]@1
  int v18; // [sp+14h] [bp-42Ch]@1
  int v19; // [sp+18h] [bp-428h]@1
  int v20; // [sp+1Ch] [bp-424h]@1
  char v21; // [sp+24h] [bp-41Ch]@1
  int v22; // [sp+28h] [bp-418h]@1
  int v23; // [sp+428h] [bp-18h]@1
  RakNet *v24; // [sp+42Ch] [bp-14h]@1

  v4 = a1;
  v5 = a3;
  v6 = a4;
  v24 = _stack_chk_guard;
  j_PhotoStorage::getPhotoPath((PhotoStorage *)&v14, a1, a2);
  v7 = *v5;
  v8 = *(_DWORD *)(*v5 - 12);
  v9 = *(_DWORD *)(v14 - 12);
  v17 = v14;
  v18 = v9;
  v19 = v7;
  v20 = v8;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v21, (int)&v17, 2);
  LODWORD(v15) = &v22;
  v16[0] = v23;
  PhotoStorage::_readFile((int)v4, &v15, v6);
  v10 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v14 - 4);
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
      j_j_j_j__ZdlPv_9(v10);
  }
  result = (RakNet *)(_stack_chk_guard - v24);
  if ( _stack_chk_guard != v24 )
    j___stack_chk_fail((int)result);
  return result;
}


RakNet *__fastcall PhotoStorage::storeBookPhoto(int a1, int *a2, int *a3, unsigned int *a4)
{
  int v4; // r5@1
  unsigned int *v5; // r8@1
  int *v6; // r6@1
  int v7; // r0@1
  int v8; // r2@1
  int v9; // r3@1
  int v10; // r0@1
  int v11; // r2@1
  int v12; // r3@1
  void *v13; // r0@1
  RakNet *result; // r0@2
  unsigned int *v15; // r2@4
  signed int v16; // r1@6
  int v17; // [sp+0h] [bp-42Ch]@1
  __int64 v18; // [sp+4h] [bp-428h]@1
  int v19; // [sp+10h] [bp-41Ch]@1
  int v20; // [sp+14h] [bp-418h]@1
  int v21; // [sp+18h] [bp-414h]@1
  int v22; // [sp+1Ch] [bp-410h]@1
  char v23; // [sp+24h] [bp-408h]@1
  int v24; // [sp+28h] [bp-404h]@1
  int v25; // [sp+428h] [bp-4h]@1
  char v26; // [sp+42Ch] [bp+0h]@1
  int v27; // [sp+430h] [bp+4h]@1
  RakNet *v28; // [sp+834h] [bp+408h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v28 = _stack_chk_guard;
  v7 = *a2;
  v8 = *(_DWORD *)(*a2 - 12);
  v9 = *(_DWORD *)(*(_DWORD *)(v4 + 4) - 12);
  v19 = *(_DWORD *)(v4 + 4);
  v20 = v9;
  v21 = v7;
  v22 = v8;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v26, (int)&v19, 2);
  sub_21E94B4((void **)&v17, (const char *)&v27);
  v10 = *v6;
  v11 = *(_DWORD *)(*v6 - 12);
  v12 = *(_DWORD *)(v17 - 12);
  v19 = v17;
  v20 = v12;
  v21 = v10;
  v22 = v11;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v23, (int)&v19, 2);
  LODWORD(v18) = &v24;
  HIDWORD(v18) = v25;
  PhotoStorage::_writeFile(v4, &v18, v5);
  v13 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v16 = __ldrex(v15);
        __strex(v16 - 1, v15);
      }
      while ( &v26 );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  }
  result = (RakNet *)(_stack_chk_guard - v28);
  if ( _stack_chk_guard != v28 )
    j___stack_chk_fail((int)result);
  return result;
}


void __fastcall PhotoStorage::_readManifest(PhotoStorage *this)
{
  PhotoStorage::_readManifest(this);
}
