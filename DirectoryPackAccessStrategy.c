

void __fastcall DirectoryPackAccessStrategy::createSubPack(_DWORD *a1, int a2, const void **a3)
{
  int v3; // r5@1
  _DWORD *v4; // r4@1
  const void **v5; // r6@1
  int *v6; // r0@1
  int v7; // r7@1
  void *v8; // r0@1
  void *v9; // r5@1
  char v10; // r2@1
  int v11; // r1@3
  void *v12; // r0@3
  char *v13; // r0@4
  unsigned int *v14; // r2@6
  signed int v15; // r1@8
  unsigned int *v16; // r2@10
  signed int v17; // r1@12
  char *v18; // [sp+4h] [bp-24h]@1
  int v19; // [sp+8h] [bp-20h]@1
  int v20; // [sp+Ch] [bp-1Ch]@1

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = sub_21E8AF4((int *)&v18, (int *)(a2 + 8));
  sub_21E72F0((const void **)v6, v5);
  v7 = *(_DWORD *)(v3 + 12);
  v19 = (int)v18;
  v20 = v7;
  v18 = (char *)&unk_28898CC;
  v8 = j_operator new(0x38u);
  v9 = v8;
  v10 = 0;
  if ( v7 != 1 )
    v10 = 1;
  j_DirectoryPackAccessStrategy::DirectoryPackAccessStrategy((int)v8, &v19, v10);
  v11 = v19;
  *v4 = v9;
  v12 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v11 - 4);
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
      j_j_j_j__ZdlPv_9(v12);
  }
  v13 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v18 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
}


RakNet *__fastcall DirectoryPackAccessStrategy::forEachIn(int a1, int *a2, int a3, int a4)
{
  __int64 v4; // r5@1
  int v5; // r8@1
  int v6; // r0@1
  int v7; // r4@1
  int v8; // r2@1
  int v9; // r3@1
  _QWORD *v10; // r0@1
  signed int v11; // r2@1
  RakNet *result; // r0@7
  _QWORD *v13; // [sp+4h] [bp-40h]@1
  void (*v14)(void); // [sp+Ch] [bp-38h]@1
  void (__fastcall *v15)(int, int, unsigned __int64 *); // [sp+10h] [bp-34h]@1
  __int64 v16; // [sp+14h] [bp-30h]@1
  char v17; // [sp+1Ch] [bp-28h]@3
  void (*v18)(void); // [sp+24h] [bp-20h]@3
  int v19; // [sp+30h] [bp-14h]@1
  int v20; // [sp+34h] [bp-10h]@1
  int v21; // [sp+38h] [bp-Ch]@1
  int v22; // [sp+3Ch] [bp-8h]@1
  int v23; // [sp+44h] [bp+0h]@1
  int v24; // [sp+48h] [bp+4h]@1
  int v25; // [sp+448h] [bp+404h]@1
  RakNet *v26; // [sp+44Ch] [bp+408h]@1

  HIDWORD(v4) = a1;
  v5 = a4;
  LODWORD(v4) = a3;
  v26 = _stack_chk_guard;
  v6 = *a2;
  v7 = *(_BYTE *)(HIDWORD(v4) + 20);
  v8 = *(_DWORD *)(*a2 - 12);
  v9 = *(_DWORD *)(*(_DWORD *)(HIDWORD(v4) + 16) - 12);
  v19 = *(_DWORD *)(HIDWORD(v4) + 16);
  v20 = v9;
  v21 = v6;
  v22 = v8;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v23, (int)&v19, 2);
  LODWORD(v16) = &v24;
  HIDWORD(v16) = v25;
  v10 = j_operator new(8u);
  *v10 = v4;
  v13 = v10;
  v14 = (void (*)(void))sub_19A9294;
  v15 = sub_19A90AC;
  v11 = 386;
  if ( (v7 != 0) | v5 )
    v11 = 898;
  j_Core::FileSystem::iterateOverDirectory((int)&v17, &v16, (unsigned int)v11, (int)&v13);
  if ( v18 )
    v18();
  if ( v14 )
    v14();
  result = (RakNet *)(_stack_chk_guard - v26);
  if ( _stack_chk_guard != v26 )
    j___stack_chk_fail_0((int)result);
  return result;
}


void __fastcall DirectoryPackAccessStrategy::~DirectoryPackAccessStrategy(DirectoryPackAccessStrategy *this)
{
  DirectoryPackAccessStrategy *v1; // r0@1

  v1 = j_DirectoryPackAccessStrategy::~DirectoryPackAccessStrategy(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall DirectoryPackAccessStrategy::clone(DirectoryPackAccessStrategy *this, int a2)
{
  DirectoryPackAccessStrategy *v2; // r4@1
  int v3; // r6@1
  void *v4; // r5@1
  int result; // r0@1

  v2 = this;
  v3 = a2;
  v4 = j_operator new(0x38u);
  result = j_DirectoryPackAccessStrategy::DirectoryPackAccessStrategy((int)v4, v3);
  *(_DWORD *)v2 = v4;
  return result;
}


int __fastcall DirectoryPackAccessStrategy::DirectoryPackAccessStrategy(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r7@1
  int v4; // r0@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_2719F20;
  sub_21E8AF4((int *)(a1 + 4), (int *)(a2 + 4));
  sub_21E8AF4((int *)(v2 + 8), (int *)(v3 + 8));
  *(_DWORD *)(v2 + 12) = *(_DWORD *)(v3 + 12);
  sub_21E8AF4((int *)(v2 + 16), (int *)(v3 + 16));
  *(_BYTE *)(v2 + 20) = *(_BYTE *)(v3 + 20);
  *(_DWORD *)(v2 + 24) = 0;
  v4 = v2 + 24;
  *(_DWORD *)(v4 + 4) = *(_DWORD *)(v3 + 28);
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 12) = *(_DWORD *)(v3 + 36);
  *(_QWORD *)(v4 + 16) = *(_QWORD *)(v3 + 40);
  j_std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_assign<std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::(std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>> const&)::{lambda(std::__detail::_Hash_node<std::string,true> const*)#1}>(
    (unsigned int *)(v2 + 24),
    v3 + 24);
  *(_BYTE *)(v2 + 52) = *(_BYTE *)(v3 + 52);
  return v2;
}


signed __int64 __fastcall DirectoryPackAccessStrategy::getPackSize(DirectoryPackAccessStrategy *this)
{
  char v1; // r4@1
  signed __int64 result; // r0@3
  int v3; // [sp+4h] [bp-2Ch]@1
  int v4; // [sp+8h] [bp-28h]@1
  char v5; // [sp+Ch] [bp-24h]@1
  void (*v6)(void); // [sp+14h] [bp-1Ch]@1
  char v7; // [sp+1Ch] [bp-14h]@1
  int v8; // [sp+20h] [bp-10h]@1
  int v9; // [sp+24h] [bp-Ch]@1

  v8 = 0;
  v9 = 0;
  v3 = *((_DWORD *)this + 4);
  v4 = *(_DWORD *)(v3 - 12);
  j_Core::FileSystem::getFileOrDirectorySize((int)&v5, (__int64 *)&v3, (int)&v8);
  v1 = v7;
  v7 |= 2u;
  if ( v6 )
    v6();
  result = *(_QWORD *)&v8;
  if ( !(v1 & 1) )
    result = -1LL;
  return result;
}


int __fastcall DirectoryPackAccessStrategy::getStrategyType(DirectoryPackAccessStrategy *this)
{
  return 0;
}


int __fastcall DirectoryPackAccessStrategy::hasAsset(int a1, int **a2)
{
  int result; // r0@2
  __int64 v3; // r1@3
  int v4; // r0@3
  int v5; // r3@3
  int *v6; // [sp+0h] [bp-430h]@3
  int v7; // [sp+4h] [bp-42Ch]@3
  int v8; // [sp+8h] [bp-428h]@3
  int v9; // [sp+Ch] [bp-424h]@3
  __int64 v10; // [sp+10h] [bp-420h]@3
  char v11; // [sp+1Ch] [bp-414h]@3
  int v12; // [sp+20h] [bp-410h]@3
  int v13; // [sp+420h] [bp-10h]@3
  RakNet *v14; // [sp+424h] [bp-Ch]@1

  v14 = _stack_chk_guard;
  if ( *(_BYTE *)(a1 + 52) )
  {
    result = j_std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::find(
               (unsigned __int64 *)(a1 + 24),
               a2) != 0;
  }
  else
    LODWORD(v3) = *a2;
    v4 = *(_DWORD *)(a1 + 16);
    HIDWORD(v3) = *(_DWORD *)(v3 - 12);
    v5 = *(_DWORD *)(v4 - 12);
    v8 = v4;
    v9 = v5;
    v10 = v3;
    j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v11, (int)&v8, 2);
    v6 = &v12;
    v7 = v13;
    result = j_Core::FileSystem::fileOrDirectoryExists((__int64 *)&v6);
  if ( _stack_chk_guard != v14 )
    j___stack_chk_fail_0(result);
  return result;
}


int __fastcall DirectoryPackAccessStrategy::DirectoryPackAccessStrategy(int a1, int *a2, char a3)
{
  int v3; // r6@1
  int *v4; // r7@1
  char v5; // r5@1
  int *v6; // r4@1
  double v7; // r0@1
  unsigned int v8; // r0@2
  int v9; // r7@4
  void *v10; // r5@4
  void *v11; // r0@5
  unsigned int *v13; // r2@9
  unsigned int *v14; // r2@14
  signed int v15; // r1@16
  int v16; // [sp+Ch] [bp-85Ch]@5
  int v17; // [sp+10h] [bp-858h]@5
  int v18; // [sp+14h] [bp-854h]@5
  int v19; // [sp+18h] [bp-850h]@1
  int v20; // [sp+1Ch] [bp-84Ch]@1
  int v21; // [sp+20h] [bp-848h]@1
  char v22; // [sp+30h] [bp-838h]@5
  int v23; // [sp+34h] [bp-834h]@5
  char v24; // [sp+438h] [bp-430h]@1
  int v25; // [sp+43Ch] [bp-42Ch]@1
  RakNet *v26; // [sp+840h] [bp-28h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v26 = _stack_chk_guard;
  *(_DWORD *)a1 = &off_2719F20;
  *(_DWORD *)(a1 + 4) = &unk_28898CC;
  v6 = (int *)(a1 + 4);
  sub_21E8AF4((int *)(a1 + 8), a2);
  *(_DWORD *)(v3 + 12) = v4[1];
  j_ResourceLocation::getFullPath((ResourceLocation *)&v19, (int)v4);
  v20 = v19;
  v21 = *(_DWORD *)(v19 - 12);
  j_File::cleanPath((int)&v24, (__int64 *)&v20);
  sub_21E94B4((void **)(v3 + 16), (const char *)&v25);
  HIDWORD(v7) = v19;
  LODWORD(v7) = v19 - 12;
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        HIDWORD(v7) = __ldrex(v13);
      while ( __strex(HIDWORD(v7) - 1, v13) );
    }
    else
      HIDWORD(v7) = (*v13)--;
    if ( SHIDWORD(v7) <= 0 )
      j_j_j_j__ZdlPv_9((void *)LODWORD(v7));
  }
  *(_BYTE *)(v3 + 20) = v5;
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 36) = 0;
  *(_DWORD *)(v3 + 40) = 1065353216;
  LODWORD(v7) = v3 + 40;
  *(_DWORD *)(LODWORD(v7) + 4) = 0;
  v8 = sub_21E6254(v7);
  *(_DWORD *)(v3 + 28) = v8;
  if ( v8 == 1 )
    *(_DWORD *)(v3 + 48) = 0;
    v10 = (void *)(v3 + 48);
  else
    if ( v8 >= 0x40000000 )
      sub_21E57F4();
    v9 = 4 * v8;
    v10 = j_operator new(4 * v8);
    j___aeabi_memclr4_0((int)v10, v9);
  *(_DWORD *)(v3 + 24) = v10;
  *(_BYTE *)(v3 + 52) = 0;
  v16 = *(_DWORD *)(v3 + 16);
  v17 = *(_DWORD *)(v16 - 12);
  j_Core::PathBuffer<Core::StackString<char,1024u>>::getEntryNameWithoutExtension((int)&v22, (__int64 *)&v16);
  sub_21E94B4((void **)&v18, (const char *)&v23);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v6, &v18);
  v11 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v18 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  if ( _stack_chk_guard != v26 )
    j___stack_chk_fail_0(_stack_chk_guard - v26);
  return v3;
}


signed int __fastcall DirectoryPackAccessStrategy::writeAsset(int a1, void (__cdecl **a2)(int *), _DWORD *a3)
{
  int v3; // r4@1
  void (__cdecl **v4)(int *); // r5@1
  _DWORD *v5; // r7@1
  int v6; // r1@1
  void (__cdecl *v7)(int *); // r0@1
  int v8; // r3@1
  int v9; // r2@1
  unsigned __int64 v10; // r2@1
  char v11; // r0@1
  signed int v12; // r6@1
  char v13; // r0@2
  void *v14; // r0@4
  unsigned int *v16; // r2@13
  signed int v17; // r1@15
  char v18; // [sp+8h] [bp-880h]@4
  void (__cdecl *v19)(int *); // [sp+10h] [bp-878h]@4
  int v20; // [sp+14h] [bp-874h]@4
  int v21; // [sp+18h] [bp-870h]@4
  char v22; // [sp+1Ch] [bp-86Ch]@2
  void (*v23)(void); // [sp+24h] [bp-864h]@6
  char v24; // [sp+2Ch] [bp-85Ch]@2
  __int64 v25; // [sp+30h] [bp-858h]@1
  int v26; // [sp+38h] [bp-850h]@1
  int v27; // [sp+3Ch] [bp-84Ch]@1
  void (__cdecl *v28)(int *); // [sp+40h] [bp-848h]@1
  int v29; // [sp+44h] [bp-844h]@1
  char v30; // [sp+48h] [bp-840h]@1
  void *v31; // [sp+4Ch] [bp-83Ch]@1
  int v32; // [sp+50h] [bp-838h]@1
  char v33; // [sp+60h] [bp-828h]@4
  int v34; // [sp+64h] [bp-824h]@4
  char v35; // [sp+468h] [bp-420h]@1
  int v36; // [sp+46Ch] [bp-41Ch]@1
  int v37; // [sp+86Ch] [bp-1Ch]@1
  RakNet *v38; // [sp+870h] [bp-18h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v38 = _stack_chk_guard;
  v6 = *(_DWORD *)(a1 + 16);
  v7 = *v4;
  v8 = *(_DWORD *)(v6 - 12);
  v9 = *((_DWORD *)*v4 - 3);
  v26 = v6;
  v27 = v8;
  v28 = v7;
  v29 = v9;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v35, (int)&v26, 2);
  v31 = 0;
  v32 = 0;
  LODWORD(v25) = &v36;
  HIDWORD(v25) = v37;
  j_Core::File::open((int)&v26, (int)&v31, &v25, 15);
  v11 = v30;
  v12 = 0;
  v30 |= 2u;
  if ( v11 & 1 )
  {
    LODWORD(v10) = *v5;
    j_Core::FileImpl::write((Core::FileImpl *)&v22, v31, v10, *(_DWORD *)(*v5 - 12));
    v13 = v24;
    v24 |= 2u;
    if ( v13 & 1 )
    {
      v19 = *v4;
      v20 = *((_DWORD *)v19 - 3);
      j_File::cleanPathSeparators((int)&v33, (__int64 *)&v19);
      sub_21E94B4((void **)&v21, (const char *)&v34);
      j_std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert<std::string,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::string,true>>>>(
        (int *)&v18,
        (unsigned __int64 *)(v3 + 24),
        (int **)&v21);
      v14 = (void *)(v21 - 12);
      if ( (int *)(v21 - 12) != &dword_28898C0 )
      {
        v16 = (unsigned int *)(v21 - 4);
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
      v12 = 1;
    }
    else
      v12 = 0;
    if ( v23 )
      v23();
  }
  if ( v28 )
    v28(&v26);
  j_Core::File::~File((Core::File *)&v31);
  if ( _stack_chk_guard != v38 )
    j___stack_chk_fail_0(_stack_chk_guard - v38);
  return v12;
}


signed int __fastcall DirectoryPackAccessStrategy::isWritable(DirectoryPackAccessStrategy *this)
{
  return 1;
}


int __fastcall DirectoryPackAccessStrategy::deleteAsset(int a1, int **a2)
{
  int v2; // r4@1
  int **v3; // r5@1
  int *v4; // r0@3
  int v5; // r3@3
  int v6; // r2@3
  char v7; // r4@3
  __int64 v9; // [sp+4h] [bp-44Ch]@3
  char v10; // [sp+Ch] [bp-444h]@3
  void (*v11)(void); // [sp+14h] [bp-43Ch]@3
  char v12; // [sp+1Ch] [bp-434h]@3
  int v13; // [sp+20h] [bp-430h]@3
  int v14; // [sp+24h] [bp-42Ch]@3
  int *v15; // [sp+28h] [bp-428h]@3
  int v16; // [sp+2Ch] [bp-424h]@3
  char v17; // [sp+34h] [bp-41Ch]@3
  int v18; // [sp+38h] [bp-418h]@3
  int v19; // [sp+438h] [bp-18h]@3
  RakNet *v20; // [sp+43Ch] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  v20 = _stack_chk_guard;
  if ( *(_BYTE *)(a1 + 52) )
    j_std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_erase(
      (unsigned __int64 *)(a1 + 24),
      a2);
  v4 = *v3;
  v5 = *(_DWORD *)(*(_DWORD *)(v2 + 16) - 12);
  v6 = *(*v3 - 3);
  v13 = *(_DWORD *)(v2 + 16);
  v14 = v5;
  v15 = v4;
  v16 = v6;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v17, (int)&v13, 2);
  LODWORD(v9) = &v18;
  HIDWORD(v9) = v19;
  j_Core::FileSystem::deleteFile((int)&v10, &v9);
  v7 = v12;
  v12 |= 2u;
  if ( v11 )
    v11();
  if ( _stack_chk_guard != v20 )
    j___stack_chk_fail_0(_stack_chk_guard - v20);
  return v7 & 1;
}


void __fastcall DirectoryPackAccessStrategy::~DirectoryPackAccessStrategy(DirectoryPackAccessStrategy *this)
{
  DirectoryPackAccessStrategy::~DirectoryPackAccessStrategy(this);
}


char *__fastcall DirectoryPackAccessStrategy::getPackName(DirectoryPackAccessStrategy *this)
{
  return (char *)this + 4;
}


char *__fastcall DirectoryPackAccessStrategy::getPackLocation(DirectoryPackAccessStrategy *this)
{
  return (char *)this + 8;
}


void __fastcall DirectoryPackAccessStrategy::createSubPack(_DWORD *a1, int a2, const void **a3)
{
  DirectoryPackAccessStrategy::createSubPack(a1, a2, a3);
}


int __fastcall DirectoryPackAccessStrategy::getAsset(int a1, int *a2, int *a3)
{
  int v3; // r5@1
  int *v4; // r6@1
  int *v5; // r8@1
  int *v6; // r0@2
  int v7; // r7@4
  int v8; // r0@4
  int v9; // r6@4
  int v10; // r3@4
  void (__fastcall *v11)(int *, int, int *); // r4@4
  void *v12; // r0@4
  void *v13; // r0@5
  int result; // r0@6
  unsigned int *v15; // r2@8
  signed int v16; // r1@10
  unsigned int *v17; // r2@12
  signed int v18; // r1@14
  int v19; // [sp+0h] [bp-440h]@4
  int v20; // [sp+4h] [bp-43Ch]@4
  int v21; // [sp+8h] [bp-438h]@4
  int v22; // [sp+Ch] [bp-434h]@4
  int v23; // [sp+10h] [bp-430h]@4
  int v24; // [sp+14h] [bp-42Ch]@4
  char v25; // [sp+1Ch] [bp-424h]@4
  int v26; // [sp+20h] [bp-420h]@4
  RakNet *v27; // [sp+424h] [bp-1Ch]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v27 = _stack_chk_guard;
  if ( *(_DWORD *)j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v6 = (int *)j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v6 = (int *)&ServiceLocator<AppPlatform>::mDefaultService;
  v7 = *v6;
  v8 = *v4;
  v9 = *(_DWORD *)(*(_DWORD *)(v3 + 16) - 12);
  v10 = *(_DWORD *)(v8 - 12);
  v11 = *(void (__fastcall **)(int *, int, int *))(*(_DWORD *)v7 + 376);
  v21 = *(_DWORD *)(v3 + 16);
  v22 = v9;
  v23 = v8;
  v24 = v10;
  j_Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v25, (int)&v21, 2);
  sub_21E94B4((void **)&v19, (const char *)&v26);
  v11(&v20, v7, &v19);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v5, &v20);
  v12 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v20 - 4);
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
      j_j_j_j__ZdlPv_9(v12);
  }
  v13 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v19 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  result = *(_DWORD *)(*v5 - 12) != 0;
  if ( _stack_chk_guard != v27 )
    j___stack_chk_fail_0(result);
  return result;
}


void __fastcall DirectoryPackAccessStrategy::generateAssetSet(DirectoryPackAccessStrategy *this)
{
  DirectoryPackAccessStrategy *v1; // r10@1
  int (__fastcall *v2)(DirectoryPackAccessStrategy *, int *, char **); // r5@1
  int v3; // r5@1
  void *v4; // r0@1
  int v5; // r5@3
  Json::Value *v6; // r0@4
  int v7; // r11@4
  void *v8; // r0@4
  void *v9; // r0@5
  unsigned int *v10; // r2@7
  signed int v11; // r1@9
  unsigned int *v12; // r2@11
  signed int v13; // r1@13
  void *v14; // r0@26
  void (__fastcall *v15)(DirectoryPackAccessStrategy *, int *, _DWORD **, signed int); // r5@29
  _DWORD *v16; // r0@29
  __int64 v17; // r1@29
  void *v18; // r0@31
  int v19; // r0@33
  void *v20; // r0@33
  char *v21; // r0@35
  unsigned int *v22; // r2@37
  signed int v23; // r1@39
  unsigned int *v24; // r2@41
  signed int v25; // r1@43
  unsigned int *v26; // r2@53
  signed int v27; // r1@55
  unsigned int *v28; // r2@61
  signed int v29; // r1@63
  int v30; // [sp+8h] [bp-F8h]@33
  _DWORD *v31; // [sp+Ch] [bp-F4h]@29
  __int64 v32; // [sp+14h] [bp-ECh]@29
  int v33; // [sp+20h] [bp-E0h]@29
  char v34; // [sp+24h] [bp-DCh]@5
  int v35; // [sp+30h] [bp-D0h]@4
  int v36; // [sp+34h] [bp-CCh]@4
  char v37; // [sp+38h] [bp-C8h]@3
  char v38; // [sp+40h] [bp-C0h]@3
  char v39; // [sp+48h] [bp-B8h]@3
  char v40; // [sp+B8h] [bp-48h]@3
  int v41; // [sp+CCh] [bp-34h]@1
  char *v42; // [sp+D0h] [bp-30h]@1

  v1 = this;
  v42 = (char *)&unk_28898CC;
  v2 = *(int (__fastcall **)(DirectoryPackAccessStrategy *, int *, char **))(*(_DWORD *)this + 40);
  sub_21E94B4((void **)&v41, "contents.json");
  v3 = v2(v1, &v41, &v42);
  v4 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
  {
    v22 = (unsigned int *)(v41 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  if ( v3 == 1 )
    j_Json::Value::Value(&v40, 0);
    j_Json::Reader::Reader((Json::Reader *)&v39);
    j_Json::Reader::parse((int)&v39, (int *)&v42, (int)&v40, 0);
    v5 = j_Json::Value::operator[]((Json::Value *)&v40, "content");
    j_Json::Value::begin((Json::Value *)&v38, v5);
    j_Json::Value::end((Json::Value *)&v37, v5);
    while ( j_Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v38, (const Json::ValueIteratorBase *)&v37) != 1 )
      v6 = (Json::Value *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v38);
      v7 = j_Json::Value::operator[](v6, "path");
      sub_21E94B4((void **)&v35, (const char *)&unk_257BC67);
      j_Json::Value::asString(&v36, v7, &v35);
      v8 = (void *)(v35 - 12);
      if ( (int *)(v35 - 12) != &dword_28898C0 )
      {
        v10 = (unsigned int *)(v35 - 4);
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
      j_std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert<std::string const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::string,true>>>>(
        (int *)&v34,
        (unsigned __int64 *)v1 + 3,
        (int **)&v36);
      v9 = (void *)(v36 - 12);
      if ( (int *)(v36 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v36 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      j_Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v38);
    *((_BYTE *)v1 + 52) = 1;
    j_Json::Reader::~Reader((Json::Reader *)&v39);
    j_Json::Value::~Value((Json::Value *)&v40);
  else
    if ( *(_DWORD *)j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v14 = j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      v14 = &ServiceLocator<AppPlatform>::mDefaultService;
    if ( (*(int (**)(void))(**(_DWORD **)v14 + 248))() == 1 )
      v15 = *(void (__fastcall **)(DirectoryPackAccessStrategy *, int *, _DWORD **, signed int))(*(_DWORD *)v1 + 52);
      sub_21E94B4((void **)&v33, (const char *)&unk_257BC67);
      v16 = j_operator new(4u);
      LODWORD(v17) = sub_19A9074;
      *v16 = v1;
      HIDWORD(v17) = sub_19A8F6C;
      v31 = v16;
      v32 = v17;
      v15(v1, &v33, &v31, 1);
      if ( (_DWORD)v32 )
        ((void (*)(void))v32)();
      v18 = (void *)(v33 - 12);
      if ( (int *)(v33 - 12) != &dword_28898C0 )
        v26 = (unsigned int *)(v33 - 4);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      if ( !*((_DWORD *)v1 + 9) )
        v19 = (*(int (__fastcall **)(DirectoryPackAccessStrategy *))(*(_DWORD *)v1 + 16))(v1);
        j_ResourceLocation::getFullPath((ResourceLocation *)&v30, v19);
        v20 = (void *)(v30 - 12);
        if ( (int *)(v30 - 12) != &dword_28898C0 )
          v28 = (unsigned int *)(v30 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v29 = __ldrex(v28);
            while ( __strex(v29 - 1, v28) );
          }
          else
            v29 = (*v28)--;
          if ( v29 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
      *((_BYTE *)v1 + 52) = 1;
  v21 = v42 - 12;
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v42 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
}


void __fastcall DirectoryPackAccessStrategy::generateAssetSet(DirectoryPackAccessStrategy *this)
{
  DirectoryPackAccessStrategy::generateAssetSet(this);
}


DirectoryPackAccessStrategy *__fastcall DirectoryPackAccessStrategy::~DirectoryPackAccessStrategy(DirectoryPackAccessStrategy *this)
{
  DirectoryPackAccessStrategy *v1; // r10@1
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
  unsigned int *v16; // r2@20
  signed int v17; // r1@22
  unsigned int *v18; // r2@24
  signed int v19; // r1@26
  unsigned int *v20; // r2@28
  signed int v21; // r1@30

  v1 = this;
  *(_DWORD *)this = &off_2719F20;
  v2 = (unsigned __int64 *)*((_DWORD *)this + 8);
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
  j___aeabi_memclr4_0(*((_QWORD *)v1 + 3), 4 * (*((_QWORD *)v1 + 3) >> 32));
  *((_DWORD *)v1 + 8) = 0;
  *((_DWORD *)v1 + 9) = 0;
  v8 = (char *)*((_DWORD *)v1 + 6);
  if ( v8 && (char *)v1 + 48 != v8 )
    j_operator delete(v8);
  v9 = *((_DWORD *)v1 + 4);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = *((_DWORD *)v1 + 2);
  v12 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v11 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = *((_DWORD *)v1 + 1);
  v14 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v13 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  return v1;
}


int __fastcall DirectoryPackAccessStrategy::hasFolder(int a1, _DWORD *a2)
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


int __fastcall DirectoryPackAccessStrategy::isIncomplete(DirectoryPackAccessStrategy *this)
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
