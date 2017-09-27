

signed int __fastcall DirectoryPackWithEncryptionAccessStrategy::getPackSize(DirectoryPackWithEncryptionAccessStrategy *this)
{
  bool v1; // zf@1
  signed int v2; // r5@1
  int v4; // [sp+4h] [bp-34h]@1
  int v5; // [sp+8h] [bp-30h]@1
  char v6; // [sp+Ch] [bp-2Ch]@1
  void (*v7)(void); // [sp+14h] [bp-24h]@3
  char v8; // [sp+1Ch] [bp-1Ch]@1
  __int64 v9; // [sp+20h] [bp-18h]@1

  v9 = 0LL;
  v4 = *((_DWORD *)this + 4);
  v5 = *(_DWORD *)(v4 - 12);
  j_Core::FileSystem::getFileOrDirectorySize((int)&v6, (__int64 *)&v4, (int)&v9);
  v1 = (v8 & 1) == 0;
  v8 |= 2u;
  v2 = v9;
  if ( v1 )
    v2 = -1;
  if ( v7 )
    v7();
  return v2;
}


int __fastcall DirectoryPackWithEncryptionAccessStrategy::DirectoryPackWithEncryptionAccessStrategy(DirectoryPackWithEncryptionAccessStrategy *this, const ResourceLocation *a2, const ResourceLocation *a3, const mce::UUID *a4, const IContentKeyProvider *a5)
{
  return DirectoryPackWithEncryptionAccessStrategy::DirectoryPackWithEncryptionAccessStrategy(
           (int)this,
           (int *)a2,
           (int)a3,
           (int)a4,
           (int)a5);
}


char *__fastcall DirectoryPackWithEncryptionAccessStrategy::getPackName(DirectoryPackWithEncryptionAccessStrategy *this)
{
  return (char *)this + 4;
}


int __fastcall DirectoryPackWithEncryptionAccessStrategy::hasFolder(int a1, _DWORD *a2)
{
  __int64 v2; // r1@1
  int v3; // r0@1
  int v4; // r3@1
  int result; // r0@1
  int *v6; // [sp+0h] [bp-430h]@1
  int v7; // [sp+4h] [bp-42Ch]@1
  int v8; // [sp+8h] [bp-428h]@1
  int v9; // [sp+Ch] [bp-424h]@1
  __int64 v10; // [sp+10h] [bp-420h]@1
  char v11; // [sp+1Ch] [bp-414h]@1
  int v12; // [sp+20h] [bp-410h]@1
  int v13; // [sp+420h] [bp-10h]@1
  RakNet *v14; // [sp+424h] [bp-Ch]@1

  v14 = _stack_chk_guard;
  LODWORD(v2) = *a2;
  v3 = *(_DWORD *)(a1 + 16);
  HIDWORD(v2) = *(_DWORD *)(v2 - 12);
  v4 = *(_DWORD *)(v3 - 12);
  v8 = v3;
  v9 = v4;
  v10 = v2;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v11, (int)&v8, 2);
  v6 = &v12;
  v7 = v13;
  result = j_Core::FileSystem::directoryExists((__int64 *)&v6);
  if ( _stack_chk_guard != v14 )
    j___stack_chk_fail_0(result);
  return result;
}


int __fastcall DirectoryPackWithEncryptionAccessStrategy::getAsset(int a1, _DWORD *a2, int *a3)
{
  int v3; // r6@1
  int result; // r0@2

  v3 = a1;
  if ( j_DirectoryPackWithEncryptionAccessStrategy::_getUnencryptedAsset(a1, a2, a3) )
    result = 1;
  else
    result = (*(int (**)(void))(**(_DWORD **)(v3 + 52) + 40))();
  return result;
}


DirectoryPackWithEncryptionAccessStrategy *__fastcall DirectoryPackWithEncryptionAccessStrategy::~DirectoryPackWithEncryptionAccessStrategy(DirectoryPackWithEncryptionAccessStrategy *this)
{
  DirectoryPackWithEncryptionAccessStrategy *v1; // r10@1
  unsigned __int64 *v2; // r7@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  unsigned __int64 *v5; // r6@11
  int v6; // r1@11
  void *v7; // r0@11
  char *v8; // r0@13
  int v9; // r0@16
  int v10; // r1@18
  void *v11; // r0@18
  int v12; // r1@19
  void *v13; // r0@19
  int v14; // r1@20
  void *v15; // r0@20
  int v16; // r1@21
  void *v17; // r0@21
  unsigned int *v19; // r2@23
  signed int v20; // r1@25
  unsigned int *v21; // r2@27
  signed int v22; // r1@29
  unsigned int *v23; // r2@31
  signed int v24; // r1@33
  unsigned int *v25; // r2@35
  signed int v26; // r1@37

  v1 = this;
  *(_DWORD *)this = &off_2719F70;
  v2 = (unsigned __int64 *)*((_DWORD *)this + 16);
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
    j_operator delete(v5);
  }
  j___aeabi_memclr4_0(*((_QWORD *)v1 + 7), 4 * (*((_QWORD *)v1 + 7) >> 32));
  *((_DWORD *)v1 + 16) = 0;
  *((_DWORD *)v1 + 17) = 0;
  v8 = (char *)*((_DWORD *)v1 + 14);
  if ( v8 && (char *)v1 + 80 != v8 )
    j_operator delete(v8);
  v9 = *((_DWORD *)v1 + 13);
  if ( v9 )
    (*(void (**)(void))(*(_DWORD *)v9 + 4))();
  *((_DWORD *)v1 + 13) = 0;
  v10 = *((_DWORD *)v1 + 5);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = *((_DWORD *)v1 + 4);
  v13 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v12 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = *((_DWORD *)v1 + 2);
  v15 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v14 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = *((_DWORD *)v1 + 1);
  v17 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v16 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  return v1;
}


int __fastcall DirectoryPackWithEncryptionAccessStrategy::deleteAsset(int a1, _DWORD *a2)
{
  __int64 v2; // r1@1
  int v3; // r0@1
  int v4; // r3@1
  char v5; // r4@1
  __int64 v7; // [sp+4h] [bp-444h]@1
  char v8; // [sp+Ch] [bp-43Ch]@1
  void (*v9)(void); // [sp+14h] [bp-434h]@1
  char v10; // [sp+1Ch] [bp-42Ch]@1
  int v11; // [sp+20h] [bp-428h]@1
  int v12; // [sp+24h] [bp-424h]@1
  __int64 v13; // [sp+28h] [bp-420h]@1
  char v14; // [sp+34h] [bp-414h]@1
  int v15; // [sp+38h] [bp-410h]@1
  int v16; // [sp+438h] [bp-10h]@1
  RakNet *v17; // [sp+43Ch] [bp-Ch]@1

  v17 = _stack_chk_guard;
  LODWORD(v2) = *a2;
  v3 = *(_DWORD *)(a1 + 16);
  HIDWORD(v2) = *(_DWORD *)(v2 - 12);
  v4 = *(_DWORD *)(v3 - 12);
  v11 = v3;
  v12 = v4;
  v13 = v2;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v14, (int)&v11, 2);
  LODWORD(v7) = &v15;
  HIDWORD(v7) = v16;
  j_Core::FileSystem::deleteFile((int)&v8, &v7);
  v5 = v10;
  v10 |= 2u;
  if ( v9 )
    v9();
  if ( _stack_chk_guard != v17 )
    j___stack_chk_fail_0(_stack_chk_guard - v17);
  return v5 & 1;
}


int __fastcall DirectoryPackWithEncryptionAccessStrategy::writeAsset(int a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // r4@1
  __int64 v4; // r1@1
  int v5; // r0@1
  int v6; // r3@1
  unsigned __int64 v7; // r2@1
  char v8; // r0@1
  int v9; // r5@1
  char v10; // r4@2
  char v12; // [sp+Ch] [bp-454h]@2
  void (*v13)(void); // [sp+14h] [bp-44Ch]@2
  char v14; // [sp+1Ch] [bp-444h]@2
  __int64 v15; // [sp+20h] [bp-440h]@1
  int v16; // [sp+28h] [bp-438h]@1
  int v17; // [sp+2Ch] [bp-434h]@1
  __int64 v18; // [sp+30h] [bp-430h]@1
  char v19; // [sp+38h] [bp-428h]@1
  void *v20; // [sp+3Ch] [bp-424h]@1
  int v21; // [sp+40h] [bp-420h]@1
  char v22; // [sp+44h] [bp-41Ch]@1
  int v23; // [sp+48h] [bp-418h]@1
  int v24; // [sp+448h] [bp-18h]@1
  RakNet *v25; // [sp+44Ch] [bp-14h]@1

  v3 = a3;
  v25 = _stack_chk_guard;
  LODWORD(v4) = *a2;
  v5 = *(_DWORD *)(a1 + 16);
  HIDWORD(v4) = *(_DWORD *)(v4 - 12);
  v6 = *(_DWORD *)(v5 - 12);
  v16 = v5;
  v17 = v6;
  v18 = v4;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v22, (int)&v16, 2);
  v20 = 0;
  v21 = 0;
  LODWORD(v15) = &v23;
  HIDWORD(v15) = v24;
  j_Core::File::open((int)&v16, (int)&v20, &v15, 15);
  v8 = v19;
  v9 = 0;
  v19 |= 2u;
  if ( v8 & 1 )
  {
    LODWORD(v7) = *v3;
    j_Core::FileImpl::write((Core::FileImpl *)&v12, v20, v7, *(_DWORD *)(*v3 - 12));
    v10 = v14;
    v14 |= 2u;
    if ( v13 )
      v13();
    v9 = v10 & 1;
  }
  if ( (_DWORD)v18 )
    ((void (__cdecl *)(int *))v18)(&v16);
  j_Core::File::~File((Core::File *)&v20);
  if ( _stack_chk_guard != v25 )
    j___stack_chk_fail_0(_stack_chk_guard - v25);
  return v9;
}


char *__fastcall DirectoryPackWithEncryptionAccessStrategy::getPackLocation(DirectoryPackWithEncryptionAccessStrategy *this)
{
  return (char *)this + 8;
}


int __fastcall DirectoryPackWithEncryptionAccessStrategy::DirectoryPackWithEncryptionAccessStrategy(int a1, int *a2, int a3, int a4, int a5)
{
  int v5; // r11@1
  int *v6; // r7@1
  int v7; // r6@1
  int v8; // r4@1
  int *v9; // r5@1
  int v10; // r12@1
  int v11; // r2@1
  int v12; // r3@1
  int v13; // r7@1
  double v14; // r0@1
  unsigned int v15; // r0@1
  int v16; // r7@3
  void *v17; // r6@3
  int v18; // r0@4
  int v19; // r0@4
  void *v20; // r0@5
  int v21; // r1@6
  int v22; // r0@6
  int v23; // r4@9
  void *v24; // r0@9
  int v25; // r4@11
  Json::Value *v26; // r0@12
  int v27; // r6@12
  void *v28; // r0@12
  void *v29; // r0@13
  unsigned int *v30; // r2@15
  signed int v31; // r1@17
  unsigned int *v32; // r2@19
  signed int v33; // r1@21
  void *v34; // r0@33
  void (__fastcall *v35)(int, int *, _DWORD **, signed int); // r4@35
  _DWORD *v36; // r0@35
  __int64 v37; // r1@35
  void *v38; // r0@37
  char *v39; // r0@38
  unsigned int *v41; // r2@43
  signed int v42; // r1@45
  unsigned int *v43; // r2@47
  signed int v44; // r1@49
  unsigned int *v45; // r2@51
  signed int v46; // r1@53
  unsigned int *v47; // r2@55
  signed int v48; // r1@57
  unsigned int *v49; // r2@63
  signed int v50; // r1@65
  _DWORD *v51; // [sp+10h] [bp-718h]@35
  __int64 v52; // [sp+18h] [bp-710h]@35
  int v53; // [sp+24h] [bp-704h]@35
  int v54; // [sp+28h] [bp-700h]@33
  char v55; // [sp+2Ch] [bp-6FCh]@13
  int v56; // [sp+38h] [bp-6F0h]@12
  int v57; // [sp+3Ch] [bp-6ECh]@12
  char v58; // [sp+40h] [bp-6E8h]@11
  char v59; // [sp+48h] [bp-6E0h]@11
  char v60; // [sp+50h] [bp-6D8h]@11
  char v61; // [sp+C0h] [bp-668h]@11
  int v62; // [sp+D8h] [bp-650h]@9
  char *v63; // [sp+DCh] [bp-64Ch]@9
  int v64; // [sp+E0h] [bp-648h]@6
  int v65; // [sp+E4h] [bp-644h]@5
  int v66; // [sp+E8h] [bp-640h]@4
  int v67; // [sp+ECh] [bp-63Ch]@4
  char v68; // [sp+FCh] [bp-62Ch]@4
  int v69; // [sp+6FCh] [bp-2Ch]@4
  RakNet *v70; // [sp+700h] [bp-28h]@1

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  v70 = _stack_chk_guard;
  *(_DWORD *)a1 = &off_2719F70;
  *(_DWORD *)(a1 + 4) = &unk_28898CC;
  v9 = (int *)(a1 + 4);
  sub_21E8AF4((int *)(a1 + 8), a2);
  *(_DWORD *)(v5 + 12) = v6[1];
  j_ResourceLocation::getFullPath((ResourceLocation *)(v5 + 16), (int)v6);
  sub_21E8AF4((int *)(v5 + 20), (int *)v7);
  v10 = v5 + 32;
  *(_DWORD *)(v5 + 24) = *(_DWORD *)(v7 + 4);
  v11 = *(_DWORD *)(v8 + 4);
  v12 = *(_DWORD *)(v8 + 8);
  v13 = *(_DWORD *)(v8 + 12);
  *(_DWORD *)v10 = *(_DWORD *)v8;
  *(_DWORD *)(v10 + 4) = v11;
  *(_DWORD *)(v10 + 8) = v12;
  *(_DWORD *)(v10 + 12) = v13;
  *(_DWORD *)(v5 + 48) = a5;
  *(_DWORD *)(v5 + 52) = 0;
  *(_DWORD *)(v5 + 64) = 0;
  *(_DWORD *)(v5 + 68) = 0;
  *(_DWORD *)(v5 + 72) = 1065353216;
  *(_DWORD *)(v5 + 76) = 0;
  LODWORD(v14) = v5 + 72;
  v15 = sub_21E6254(v14);
  *(_DWORD *)(v5 + 60) = v15;
  if ( v15 == 1 )
  {
    *(_DWORD *)(v5 + 80) = 0;
    v17 = (void *)(v5 + 80);
  }
  else
    if ( v15 >= 0x40000000 )
      sub_21E57F4();
    v16 = 4 * v15;
    v17 = j_operator new(4 * v15);
    j___aeabi_memclr4_0((int)v17, v16);
  *(_DWORD *)(v5 + 56) = v17;
  v18 = *(_DWORD *)(v5 + 16);
  v66 = v18;
  v67 = *(_DWORD *)(v18 - 12);
  v19 = j_Core::SplitPathT<1024u,64u>::SplitPathT((int)&v68, (const char **)&v66);
  if ( v69 )
    sub_21E94B4((void **)&v65, *(const char **)(v19 + 8 * v69 + 1016));
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v9, &v65);
    v20 = (void *)(v65 - 12);
    if ( (int *)(v65 - 12) != &dword_28898C0 )
    {
      v43 = (unsigned int *)(v65 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
      }
      else
        v44 = (*v43)--;
      if ( v44 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    }
  j_PackAccessStrategyFactory::createForEncryptedZip(
    (PackAccessStrategyFactory *)&v64,
    (const ResourceLocation *)(v5 + 20),
    *(const IContentKeyProvider **)(v5 + 48));
  v21 = v64;
  v64 = 0;
  v22 = *(_DWORD *)(v5 + 52);
  *(_DWORD *)(v5 + 52) = v21;
  if ( v22 )
    (*(void (**)(void))(*(_DWORD *)v22 + 4))();
    if ( v64 )
      (*(void (**)(void))(*(_DWORD *)v64 + 4))();
  v63 = (char *)&unk_28898CC;
  sub_21E94B4((void **)&v62, "contents.json");
  v23 = j_DirectoryPackWithEncryptionAccessStrategy::_getUnencryptedAsset(v5, &v62, (int *)&v63);
  v24 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v62 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
    else
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  if ( v23 == 1 )
    j_Json::Value::Value(&v61, 0);
    j_Json::Reader::Reader((Json::Reader *)&v60);
    j_Json::Reader::parse((int)&v60, (int *)&v63, (int)&v61, 0);
    v25 = j_Json::Value::operator[]((Json::Value *)&v61, "content");
    j_Json::Value::begin((Json::Value *)&v59, v25);
    j_Json::Value::end((Json::Value *)&v58, v25);
    while ( j_Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v59, (const Json::ValueIteratorBase *)&v58) != 1 )
      v26 = (Json::Value *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v59);
      v27 = j_Json::Value::operator[](v26, "path");
      sub_21E94B4((void **)&v56, (const char *)&unk_257BC67);
      j_Json::Value::asString(&v57, v27, &v56);
      v28 = (void *)(v56 - 12);
      if ( (int *)(v56 - 12) != &dword_28898C0 )
        v30 = (unsigned int *)(v56 - 4);
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
          j_j_j_j__ZdlPv_9(v28);
      j_std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert<std::string const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::string,true>>>>(
        (int *)&v55,
        (unsigned __int64 *)(v5 + 56),
        (int **)&v57);
      v29 = (void *)(v57 - 12);
      if ( (int *)(v57 - 12) != &dword_28898C0 )
        v32 = (unsigned int *)(v57 - 4);
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
          v33 = (*v32)--;
        if ( v33 <= 0 )
          j_j_j_j__ZdlPv_9(v29);
      j_Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v59);
    j_Json::Reader::~Reader((Json::Reader *)&v60);
    j_Json::Value::~Value((Json::Value *)&v61);
    j_ResourceLocation::getFullPath((ResourceLocation *)&v54, v5 + 20);
    v34 = (void *)(v54 - 12);
    if ( (int *)(v54 - 12) != &dword_28898C0 )
      v49 = (unsigned int *)(v54 - 4);
          v50 = __ldrex(v49);
        while ( __strex(v50 - 1, v49) );
        v50 = (*v49)--;
      if ( v50 <= 0 )
        j_j_j_j__ZdlPv_9(v34);
    (*(void (**)(void))(**(_DWORD **)(v5 + 52) + 64))();
  v35 = *(void (__fastcall **)(int, int *, _DWORD **, signed int))(*(_DWORD *)v5 + 52);
  sub_21E94B4((void **)&v53, (const char *)&unk_257BC67);
  v36 = j_operator new(4u);
  LODWORD(v37) = sub_19AA980;
  *v36 = v5;
  HIDWORD(v37) = sub_19AA878;
  v51 = v36;
  v52 = v37;
  v35(v5, &v53, &v51, 1);
  if ( (_DWORD)v52 )
    ((void (*)(void))v52)();
  v38 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v53 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  v39 = v63 - 12;
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v63 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  if ( _stack_chk_guard != v70 )
    j___stack_chk_fail_0(_stack_chk_guard - v70);
  return v5;
}


int __fastcall DirectoryPackWithEncryptionAccessStrategy::isWritable(DirectoryPackWithEncryptionAccessStrategy *this)
{
  return 0;
}


int __fastcall DirectoryPackWithEncryptionAccessStrategy::_getUnencryptedAsset(int a1, _DWORD *a2, int *a3)
{
  int *v3; // r4@1
  __int64 v4; // r1@1
  int v5; // r0@1
  int v6; // r3@1
  void *v7; // r0@2
  int v8; // r6@4
  void (__fastcall *v9)(int *, int, int *); // r7@4
  void *v10; // r0@4
  void *v11; // r0@5
  int result; // r0@6
  unsigned int *v13; // r2@8
  signed int v14; // r1@10
  unsigned int *v15; // r2@12
  signed int v16; // r1@14
  int v17; // [sp+0h] [bp-438h]@4
  int v18; // [sp+4h] [bp-434h]@4
  int v19; // [sp+8h] [bp-430h]@1
  int v20; // [sp+Ch] [bp-42Ch]@1
  __int64 v21; // [sp+10h] [bp-428h]@1
  char v22; // [sp+18h] [bp-420h]@1
  int v23; // [sp+1Ch] [bp-41Ch]@4
  RakNet *v24; // [sp+420h] [bp-18h]@1

  v3 = a3;
  v24 = _stack_chk_guard;
  LODWORD(v4) = *a2;
  v5 = *(_DWORD *)(a1 + 16);
  HIDWORD(v4) = *(_DWORD *)(v4 - 12);
  v6 = *(_DWORD *)(v5 - 12);
  v19 = v5;
  v20 = v6;
  v21 = v4;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v22, (int)&v19, 2);
  if ( *(_DWORD *)j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v7 = j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v7 = &ServiceLocator<AppPlatform>::mDefaultService;
  v8 = *(_DWORD *)v7;
  v9 = *(void (__fastcall **)(int *, int, int *))(**(_DWORD **)v7 + 376);
  sub_21E94B4((void **)&v17, (const char *)&v23);
  v9(&v18, v8, &v17);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v18);
  v10 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  }
  v11 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  result = *(_DWORD *)(*v3 - 12) != 0;
  if ( _stack_chk_guard != v24 )
    j___stack_chk_fail_0(result);
  return result;
}


int __fastcall DirectoryPackWithEncryptionAccessStrategy::DirectoryPackWithEncryptionAccessStrategy(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r6@1
  int v4; // r12@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r3@1
  int v8; // r0@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_2719F70;
  sub_21E8AF4((int *)(a1 + 4), (int *)(a2 + 4));
  sub_21E8AF4((int *)(v2 + 8), (int *)(v3 + 8));
  *(_DWORD *)(v2 + 12) = *(_DWORD *)(v3 + 12);
  sub_21E8AF4((int *)(v2 + 16), (int *)(v3 + 16));
  sub_21E8AF4((int *)(v2 + 20), (int *)(v3 + 20));
  *(_DWORD *)(v2 + 24) = *(_DWORD *)(v3 + 24);
  v4 = v2 + 32;
  v5 = *(_DWORD *)(v3 + 36);
  v6 = *(_DWORD *)(v3 + 40);
  v7 = *(_DWORD *)(v3 + 44);
  *(_DWORD *)v4 = *(_DWORD *)(v3 + 32);
  *(_DWORD *)(v4 + 4) = v5;
  *(_DWORD *)(v4 + 8) = v6;
  *(_DWORD *)(v4 + 12) = v7;
  *(_DWORD *)(v2 + 48) = *(_DWORD *)(v3 + 48);
  (*(void (__fastcall **)(int))(**(_DWORD **)(v3 + 52) + 8))(v2 + 52);
  *(_DWORD *)(v2 + 56) = 0;
  v8 = v2 + 56;
  *(_DWORD *)(v8 + 4) = *(_DWORD *)(v3 + 60);
  *(_DWORD *)(v8 + 8) = 0;
  *(_DWORD *)(v8 + 12) = *(_DWORD *)(v3 + 68);
  *(_QWORD *)(v8 + 16) = *(_QWORD *)(v3 + 72);
  j_std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_assign<std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::(std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>> const&)::{lambda(std::__detail::_Hash_node<std::string,true> const*)#1}>(
    (unsigned int *)(v2 + 56),
    v3 + 56);
  return v2;
}


int __fastcall DirectoryPackWithEncryptionAccessStrategy::isIncomplete(DirectoryPackWithEncryptionAccessStrategy *this)
{
  __int64 v1; // r1@1
  int v2; // r0@1
  int v3; // r3@1
  int result; // r0@1
  int *v5; // [sp+0h] [bp-430h]@1
  int v6; // [sp+4h] [bp-42Ch]@1
  int v7; // [sp+8h] [bp-428h]@1
  int v8; // [sp+Ch] [bp-424h]@1
  __int64 v9; // [sp+10h] [bp-420h]@1
  char v10; // [sp+1Ch] [bp-414h]@1
  int v11; // [sp+20h] [bp-410h]@1
  int v12; // [sp+420h] [bp-10h]@1
  RakNet *v13; // [sp+424h] [bp-Ch]@1

  v13 = _stack_chk_guard;
  LODWORD(v1) = PackAccessStrategy::PACK_IMPORT_LOCK_FILE;
  v2 = *((_DWORD *)this + 4);
  HIDWORD(v1) = *(_DWORD *)(PackAccessStrategy::PACK_IMPORT_LOCK_FILE - 12);
  v3 = *(_DWORD *)(v2 - 12);
  v7 = v2;
  v8 = v3;
  v9 = v1;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v10, (int)&v7, 2);
  v5 = &v11;
  v6 = v12;
  result = j_Core::FileSystem::fileOrDirectoryExists((__int64 *)&v5);
  if ( _stack_chk_guard != v13 )
    j___stack_chk_fail_0(result);
  return result;
}


int __fastcall DirectoryPackWithEncryptionAccessStrategy::clone(DirectoryPackWithEncryptionAccessStrategy *this, int a2)
{
  DirectoryPackWithEncryptionAccessStrategy *v2; // r4@1
  int v3; // r6@1
  void *v4; // r5@1
  int result; // r0@1

  v2 = this;
  v3 = a2;
  v4 = j_operator new(0x58u);
  result = j_DirectoryPackWithEncryptionAccessStrategy::DirectoryPackWithEncryptionAccessStrategy((int)v4, v3);
  *(_DWORD *)v2 = v4;
  return result;
}


int __fastcall DirectoryPackWithEncryptionAccessStrategy::unload(DirectoryPackWithEncryptionAccessStrategy *this)
{
  int result; // r0@1

  result = *((_DWORD *)this + 13);
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 68))();
  return result;
}


signed int __fastcall DirectoryPackWithEncryptionAccessStrategy::getStrategyType(DirectoryPackWithEncryptionAccessStrategy *this)
{
  return 2;
}


void __fastcall DirectoryPackWithEncryptionAccessStrategy::~DirectoryPackWithEncryptionAccessStrategy(DirectoryPackWithEncryptionAccessStrategy *this)
{
  DirectoryPackWithEncryptionAccessStrategy::~DirectoryPackWithEncryptionAccessStrategy(this);
}


void __fastcall DirectoryPackWithEncryptionAccessStrategy::~DirectoryPackWithEncryptionAccessStrategy(DirectoryPackWithEncryptionAccessStrategy *this)
{
  DirectoryPackWithEncryptionAccessStrategy *v1; // r0@1

  v1 = j_DirectoryPackWithEncryptionAccessStrategy::~DirectoryPackWithEncryptionAccessStrategy(this);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall DirectoryPackWithEncryptionAccessStrategy::createSubPack(DirectoryPackAccessStrategy **a1, int a2, const void **a3)
{
  DirectoryPackWithEncryptionAccessStrategy::createSubPack(a1, a2, a3);
}


void __fastcall DirectoryPackWithEncryptionAccessStrategy::createSubPack(DirectoryPackAccessStrategy **a1, int a2, const void **a3)
{
  int v3; // r5@1
  DirectoryPackAccessStrategy **v4; // r4@1
  const void **v5; // r6@1
  int *v6; // r0@1
  int v7; // r1@1
  DirectoryPackAccessStrategy *v8; // r5@1
  int v9; // r1@1
  void *v10; // r0@1
  char *v11; // r0@2
  unsigned int *v12; // r2@4
  signed int v13; // r1@6
  unsigned int *v14; // r2@8
  signed int v15; // r1@10
  char *v16; // [sp+0h] [bp-20h]@1
  int v17; // [sp+4h] [bp-1Ch]@1
  int v18; // [sp+8h] [bp-18h]@1

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = sub_21E8AF4((int *)&v16, (int *)(a2 + 8));
  sub_21E72F0((const void **)v6, v5);
  v7 = *(_DWORD *)(v3 + 12);
  v17 = (int)v16;
  v18 = v7;
  v16 = (char *)&unk_28898CC;
  v8 = (DirectoryPackAccessStrategy *)j_operator new(0x38u);
  j_DirectoryPackAccessStrategy::DirectoryPackAccessStrategy(v8, (const ResourceLocation *)&v17, 1);
  v9 = v17;
  *v4 = v8;
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v9 - 4);
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
  v11 = v16 - 12;
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v16 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
}


RakNet *__fastcall DirectoryPackWithEncryptionAccessStrategy::forEachIn(unsigned int a1, int *a2, unsigned int a3)
{
  unsigned __int64 v3; // r4@1
  int v4; // r0@1
  int v5; // r2@1
  int v6; // r3@1
  _QWORD *v7; // r0@1
  RakNet *result; // r0@5
  _QWORD *v9; // [sp+4h] [bp-45Ch]@1
  void (*v10)(void); // [sp+Ch] [bp-454h]@1
  char *(__fastcall *v11)(int, int **, __int64 *); // [sp+10h] [bp-450h]@1
  __int64 v12; // [sp+14h] [bp-44Ch]@1
  char v13; // [sp+1Ch] [bp-444h]@1
  void (*v14)(void); // [sp+24h] [bp-43Ch]@1
  int v15; // [sp+30h] [bp-430h]@1
  int v16; // [sp+34h] [bp-42Ch]@1
  int v17; // [sp+38h] [bp-428h]@1
  int v18; // [sp+3Ch] [bp-424h]@1
  char v19; // [sp+44h] [bp-41Ch]@1
  int v20; // [sp+48h] [bp-418h]@1
  int v21; // [sp+448h] [bp-18h]@1
  RakNet *v22; // [sp+44Ch] [bp-14h]@1

  v3 = __PAIR__(a1, a3);
  v22 = _stack_chk_guard;
  v4 = *a2;
  v5 = *(_DWORD *)(*a2 - 12);
  v6 = *(_DWORD *)(*(_DWORD *)(HIDWORD(v3) + 16) - 12);
  v15 = *(_DWORD *)(HIDWORD(v3) + 16);
  v16 = v6;
  v17 = v4;
  v18 = v5;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v19, (int)&v15, 2);
  LODWORD(v12) = &v20;
  HIDWORD(v12) = v21;
  v7 = j_operator new(8u);
  *v7 = v3;
  v9 = v7;
  v10 = (void (*)(void))sub_19AAB28;
  v11 = sub_19AA9B8;
  j_Core::FileSystem::iterateOverDirectory((int)&v13, &v12, 898LL, (int)&v9);
  if ( v14 )
    v14();
  if ( v10 )
    v10();
  result = (RakNet *)(_stack_chk_guard - v22);
  if ( _stack_chk_guard != v22 )
    j___stack_chk_fail_0((int)result);
  return result;
}


signed int __fastcall DirectoryPackWithEncryptionAccessStrategy::hasAsset(int a1, int **a2)
{
  int v2; // r5@1
  int **v3; // r4@1
  signed int result; // r0@2
  int *v5; // r0@5
  int v6; // r3@5
  int v7; // r2@5
  int *v8; // [sp+0h] [bp-438h]@5
  int v9; // [sp+4h] [bp-434h]@5
  int v10; // [sp+8h] [bp-430h]@5
  int v11; // [sp+Ch] [bp-42Ch]@5
  int *v12; // [sp+10h] [bp-428h]@5
  int v13; // [sp+14h] [bp-424h]@5
  char v14; // [sp+1Ch] [bp-41Ch]@5
  int v15; // [sp+20h] [bp-418h]@5
  int v16; // [sp+420h] [bp-18h]@5
  RakNet *v17; // [sp+424h] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  v17 = _stack_chk_guard;
  if ( *(_DWORD *)(a1 + 68) )
  {
    result = j_std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::find(
               (unsigned __int64 *)(a1 + 56),
               a2) != 0;
  }
  else if ( (*(int (**)(void))(**(_DWORD **)(a1 + 52) + 32))() )
    result = 1;
  else
    v5 = *v3;
    v6 = *(_DWORD *)(*(_DWORD *)(v2 + 16) - 12);
    v7 = *(*v3 - 3);
    v10 = *(_DWORD *)(v2 + 16);
    v11 = v6;
    v12 = v5;
    v13 = v7;
    j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v14, (int)&v10, 2);
    v8 = &v15;
    v9 = v16;
    result = j_Core::FileSystem::fileOrDirectoryExists((__int64 *)&v8);
  if ( _stack_chk_guard != v17 )
    j___stack_chk_fail_0(result);
  return result;
}
