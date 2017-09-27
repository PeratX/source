

void __fastcall PackManifest::clearLegacyModuleDependencies(PackManifest *this)
{
  PackManifest::clearLegacyModuleDependencies(this);
}


signed int __fastcall PackManifest::hasModule(PackManifest *this, const PackIdVersion *a2)
{
  ResourceInformation *v2; // r5@1 OVERLAPPED
  ResourceInformation *v3; // r6@1 OVERLAPPED
  const PackIdVersion *v4; // r4@1
  signed int result; // r0@4

  *(_QWORD *)&v2 = *((_QWORD *)this + 10);
  v4 = a2;
  if ( v2 == v3 )
  {
    result = 0;
  }
  else
    while ( ResourceInformation::satisfies(v2, v4) != 1 )
    {
      v2 = (ResourceInformation *)((char *)v2 + 56);
      if ( v3 == v2 )
        return 0;
    }
    result = 1;
  return result;
}


int __fastcall PackManifest::clearModules(int result)
{
  int v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED

  v1 = result;
  *(_QWORD *)&v2 = *(_QWORD *)(result + 80);
  if ( v3 != v2 )
  {
    result = v2;
    do
      result = (int)ResourceInformation::~ResourceInformation((ResourceInformation *)result) + 56;
    while ( v3 != result );
  }
  *(_DWORD *)(v1 + 84) = v2;
  return result;
}


signed int __fastcall PackManifest::getFileSystemFromOrigin(PackManifest *this)
{
  int v1; // r1@1
  signed int result; // r0@2

  v1 = *((_BYTE *)this + 148);
  if ( v1 == 3 )
  {
    result = 2;
  }
  else if ( *((_DWORD *)this + 36) == 1 )
    result = 1;
  else
    if ( v1 == 2 )
      result = 11;
  return result;
}


char *__fastcall PackManifest::getLocation(PackManifest *this)
{
  return (char *)this + 4;
}


  if ( PackManifest::getManifestOrigin(v6) == 1 )
{
    if ( *(_DWORD *)(*(_DWORD *)WorldTemplateInfo::getWorldIconPath(v5) - 12) )
    {
      if ( WorldTemplateInfo::isWorldIconOverridden(v5) )
        v7 = (int *)&Util::EMPTY_STRING;
      else
        v7 = (int *)WorldTemplateInfo::getWorldPath(v5);
    }
    else
      v7 = (int *)&Util::EMPTY_STRING;
  }
  else
  {
    v7 = (int *)&Util::EMPTY_STRING;
  return sub_21E8AF4(v3, v7);
}


int __fastcall PackManifest::setInvalidUUID(int result)
{
  *(_BYTE *)(result + 164) = 0;
  return result;
}


RakNet *__fastcall PackManifest::generateBaseIconPath(PackManifest *this, int a2)
{
  void **v2; // r4@1
  int v3; // r6@1
  int *v4; // r5@1
  int v5; // r0@1
  bool v6; // zf@2
  void *v7; // r0@8
  RakNet *result; // r0@9
  unsigned int *v9; // r2@11
  signed int v10; // r1@13
  int v11; // [sp+0h] [bp-438h]@8
  int v12; // [sp+4h] [bp-434h]@8
  int v13; // [sp+8h] [bp-430h]@6
  int v14; // [sp+Ch] [bp-42Ch]@6
  int v15; // [sp+10h] [bp-428h]@1
  char v16; // [sp+1Ch] [bp-41Ch]@8
  int v17; // [sp+20h] [bp-418h]@8
  RakNet *v18; // [sp+424h] [bp-14h]@1

  v2 = (void **)this;
  v3 = a2;
  v4 = (int *)(a2 + 4);
  v18 = _stack_chk_guard;
  ResourceLocation::getFullPath((ResourceLocation *)&v15, a2 + 4);
  v5 = *(_BYTE *)(v3 + 148);
  if ( v5 != 3 )
  {
    v6 = v5 == 2;
    if ( v5 != 2 )
      v6 = *(_DWORD *)(v3 + 144) == 1;
    if ( v6 )
    {
      v13 = v15;
      v14 = *(_DWORD *)(v15 - 12);
      if ( Core::FileSystem::directoryExists((__int64 *)&v13) == 1 )
        EntityInteraction::setInteractText(&v15, v4);
    }
  }
  v11 = v15;
  v12 = *(_DWORD *)(v15 - 12);
  File::cleanPath((int)&v16, (__int64 *)&v11);
  sub_21E94B4(v2, (const char *)&v17);
  v7 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  result = (RakNet *)(_stack_chk_guard - v18);
  if ( _stack_chk_guard != v18 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall PackManifest::setIdentity(PackManifest *this, const PackIdVersion *a2)
{
  const PackIdVersion *v2; // r5@1
  PackManifest *v3; // r4@1
  int v4; // r0@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r3@1
  int v8; // r12@1
  int v9; // r1@1
  __int16 v10; // r1@1
  int result; // r0@1

  v2 = a2;
  v3 = this;
  v4 = *(_DWORD *)a2;
  v5 = *((_DWORD *)a2 + 1);
  v6 = *((_DWORD *)v2 + 2);
  v7 = *((_DWORD *)v2 + 3);
  v8 = (int)v3 + 16;
  *(_DWORD *)v8 = v4;
  *(_DWORD *)(v8 + 4) = v5;
  *(_DWORD *)(v8 + 8) = v6;
  *(_DWORD *)(v8 + 12) = v7;
  v9 = *((_DWORD *)v2 + 4);
  *((_WORD *)v3 + 18) = *((_WORD *)v2 + 10);
  *((_DWORD *)v3 + 8) = v9;
  EntityInteraction::setInteractText((int *)v3 + 10, (int *)v2 + 6);
  EntityInteraction::setInteractText((int *)v3 + 11, (int *)v2 + 7);
  EntityInteraction::setInteractText((int *)v3 + 12, (int *)v2 + 8);
  v10 = *((_WORD *)v2 + 18);
  *((_BYTE *)v3 + 54) = *((_BYTE *)v2 + 38);
  *((_WORD *)v3 + 26) = v10;
  result = *((_BYTE *)v2 + 40);
  *((_BYTE *)v3 + 56) = result;
  return result;
}


void __fastcall PackManifest::clearPackDependencies(PackManifest *this)
{
  j_j_j__ZNSt6vectorI13PackIdVersionSaIS0_EE15_M_erase_at_endEPS0_((int)this + 92, *((_DWORD *)this + 23));
}


RakNet *__fastcall PackManifest::generateIconPath(PackManifest *this, int a2)
{
  void **v2; // r4@1
  int v3; // r5@1
  RakNet *result; // r0@2
  int v5; // r2@5
  int v6; // r3@5
  int *v7; // r0@5
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  int v10; // r2@11
  int v11; // r2@12
  int v12; // r3@12
  _DWORD *v13; // r0@13
  void *v14; // r0@14
  unsigned int *v15; // r2@17
  signed int v16; // r1@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  _DWORD *v19; // [sp+4h] [bp-1074h]@11
  int v20; // [sp+8h] [bp-1070h]@11
  int *v21; // [sp+Ch] [bp-106Ch]@5
  _DWORD *v22; // [sp+10h] [bp-1068h]@4
  int v23; // [sp+18h] [bp-1060h]@4
  int *v24; // [sp+20h] [bp-1058h]@5
  int v25; // [sp+24h] [bp-1054h]@5
  int v26; // [sp+28h] [bp-1050h]@5
  int v27; // [sp+2Ch] [bp-104Ch]@5
  char v28; // [sp+3Ch] [bp-103Ch]@12
  int v29; // [sp+40h] [bp-1038h]@12
  int v30; // [sp+440h] [bp-C38h]@12
  char v31; // [sp+444h] [bp-C34h]@11
  int v32; // [sp+448h] [bp-C30h]@11
  int v33; // [sp+848h] [bp-830h]@11
  char v34; // [sp+84Ch] [bp-82Ch]@11
  int v35; // [sp+850h] [bp-828h]@11
  int v36; // [sp+C50h] [bp-428h]@11
  char v37; // [sp+C54h] [bp-424h]@5
  int v38; // [sp+C58h] [bp-420h]@5
  int v39; // [sp+1058h] [bp-20h]@5
  RakNet *v40; // [sp+105Ch] [bp-1Ch]@1

  v2 = (void **)this;
  v3 = a2;
  v40 = _stack_chk_guard;
  if ( *(_BYTE *)(a2 + 148) == 3 )
  {
    ResourceLocation::getFullPath(this, a2 + 72);
    result = (RakNet *)(_stack_chk_guard - v40);
    if ( _stack_chk_guard != v40 )
      goto LABEL_16;
  }
  else
    sub_21E94B4((void **)&v23, "pack_icon.png");
    PackManifest::generateBaseIconPath((PackManifest *)&v22, v3);
    if ( *(_DWORD *)(v3 + 144) == 6 )
    {
      ResourceLocation::getFullPath((ResourceLocation *)&v21, v3 + 4);
      v5 = *(_DWORD *)(v23 - 12);
      v6 = *(v21 - 3);
      v24 = v21;
      v25 = v6;
      v26 = v23;
      v27 = v5;
      Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v37, (int)&v24, 2);
      sub_21E91E0(v2, (unsigned int)&v38, v39);
      v7 = v21 - 3;
      if ( v21 - 3 != &dword_28898C0 )
      {
        v8 = (unsigned int *)(v21 - 1);
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
    else if ( *(_BYTE *)(v3 + 148) == 1 )
      v19 = v22;
      v20 = *(v22 - 3);
      Core::PathBuffer<Core::StackString<char,1024u>>::getEntryNameWithoutExtension((int)&v34, (__int64 *)&v19);
      v10 = *(_DWORD *)(v23 - 12);
      v24 = &v35;
      v25 = v36;
      v27 = v10;
      Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v31, (int)&v24, 2);
      sub_21E91E0(v2, (unsigned int)&v32, v33);
    else
      v11 = *(v22 - 3);
      v12 = *(_DWORD *)(v23 - 12);
      v24 = v22;
      v25 = v11;
      v27 = v12;
      Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v28, (int)&v24, 2);
      sub_21E91E0(v2, (unsigned int)&v29, v30);
    v13 = v22 - 3;
    if ( v22 - 3 != &dword_28898C0 )
      v15 = v22 - 1;
      if ( &pthread_create )
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      else
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    v14 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v23 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
LABEL_16:
      _stack_chk_fail(result);
  return result;
}


void **__fastcall PackManifest::getZipFolderPath(PackManifest *this, int a2)
{
  void **result; // r0@2

  if ( *(_BYTE *)(a2 + 148) == 1 )
    result = (void **)PackManifest::generateBaseIconPath(this, a2);
  else
    result = sub_21E94B4((void **)this, (const char *)&unk_257BC67);
  return result;
}


    if ( PackManifest::getManifestType(**(PackManifest ***)(v3 + 12)) == 2 )
{
      sub_119C854(&v101, (int *)v4);
      CatalogPackManifest::setProductId(v7, &v101);
      v8 = (void *)(v101 - 12);
      if ( (int *)(v101 - 12) != &dword_28898C0 )
      {
        v74 = (unsigned int *)(v101 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v75 = __ldrex(v74);
          while ( __strex(v75 - 1, v74) );
        }
        else
          v75 = (*v74)--;
        if ( v75 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v8);
      }
    }
    sub_119C884((void **)&v99, "title");
    sub_F47888(&v100, v4 + 4, (int *)v4, (const void **)&v99);
    PackManifest::setName(v7, &v100);
    v9 = (void *)(v100 - 12);
    if ( (int *)(v100 - 12) != &dword_28898C0 )
    {
      v62 = (unsigned int *)(v100 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v63 = __ldrex(v62);
        while ( __strex(v63 - 1, v62) );
      else
        v63 = (*v62)--;
      if ( v63 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v9);
    v10 = (void *)(v99 - 12);
    if ( (int *)(v99 - 12) != &dword_28898C0 )
      v64 = (unsigned int *)(v99 - 4);
          v65 = __ldrex(v64);
        while ( __strex(v65 - 1, v64) );
        v65 = (*v64)--;
      if ( v65 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v10);
    sub_119C884((void **)&v97, "desc");
    sub_F47888(&v98, v4 + 32, (int *)v4, (const void **)&v97);
    PackManifest::setDescription(v7, &v98);
    v11 = (void *)(v98 - 12);
    if ( (int *)(v98 - 12) != &dword_28898C0 )
      v66 = (unsigned int *)(v98 - 4);
          v67 = __ldrex(v66);
        while ( __strex(v67 - 1, v66) );
        v67 = (*v66)--;
      if ( v67 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v11);
    v12 = (void *)(v97 - 12);
    if ( (int *)(v97 - 12) != &dword_28898C0 )
      v68 = (unsigned int *)(v97 - 4);
          v69 = __ldrex(v68);
        while ( __strex(v69 - 1, v68) );
        v69 = (*v68)--;
      if ( v69 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v12);
    sub_119C854((int *)&v90, (int *)v4);
    ptr = 0;
    v92 = *(_DWORD *)(v4 + 8);
    v93 = 0;
    v94 = *(_DWORD *)(v4 + 16);
    v95 = *(_QWORD *)(v4 + 20);
    v102 = &ptr;
    std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_assign<std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::(std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<std::string const,std::string>,true> const*)#1}>(
      (unsigned int *)&ptr,
      v4 + 4,
      (int *)&v102);
    v13 = *(_QWORD *)(v2 + 64);
    if ( (_DWORD)v13 == HIDWORD(v13) )
      v78 = v3;
      v79 = v4 + 32;
      std::vector<std::pair<std::string,std::unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::string>>>>,std::allocator<std::pair<std::string,std::unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::string>>>>>>::_M_emplace_back_aux<std::pair<std::string,std::unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::string>>>>>(
        (unsigned __int64 *)(v2 + 60),
        (int)&v90);
      v18 = v93;
      while ( v18 )
        v23 = v18;
        v24 = *(_DWORD *)(v18 + 8);
        v18 = *(_DWORD *)v18;
        v25 = (void *)(v24 - 12);
        if ( (int *)(v24 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v24 - 4);
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
            j_j_j_j_j__ZdlPv_9_1(v25);
        v26 = *(_DWORD *)(v23 + 4);
        v27 = (void *)(v26 - 12);
        if ( (int *)(v26 - 12) != &dword_28898C0 )
          v21 = (unsigned int *)(v26 - 4);
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            v22 = (*v21)--;
          if ( v22 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v27);
        operator delete((void *)v23);
    else
      *(_DWORD *)v13 = v90;
      v90 = (char *)&unk_28898CC;
      v14 = ptr;
      *(_DWORD *)(v13 + 4) = ptr;
      HIDWORD(v13) = v92;
      *(_DWORD *)(v13 + 8) = v92;
      v15 = v93;
      *(_DWORD *)(v13 + 12) = v93;
      *(_DWORD *)(v13 + 16) = v94;
      v16 = HIDWORD(v95);
      *(_DWORD *)(v13 + 20) = v95;
      *(_DWORD *)(v13 + 24) = v16;
      v17 = ptr;
      if ( &v96 == ptr )
        v14 = (_DWORD *)(v13 + 28);
        *(_DWORD *)(v13 + 4) = v13 + 28;
        *(_DWORD *)(v13 + 28) = *v17;
      if ( v15 )
        v14[*(_DWORD *)(v15 + 12) % HIDWORD(v13)] = v13 + 12;
      HIDWORD(v95) = 0;
      v96 = 0;
      ptr = &v96;
      v92 = 1;
      v93 = 0;
      v94 = 0;
      *(_DWORD *)(v2 + 64) += 32;
    _aeabi_memclr4(ptr, 4 * v92);
    v94 = 0;
    if ( ptr && &v96 != ptr )
      operator delete(ptr);
    v28 = v90 - 12;
    if ( (int *)(v90 - 12) != &dword_28898C0 )
      v70 = (unsigned int *)(v90 - 4);
          v71 = __ldrex(v70);
        while ( __strex(v71 - 1, v70) );
        v71 = (*v70)--;
      if ( v71 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v28);
    sub_119C854((int *)&v83, (int *)v4);
    v84 = 0;
    v85 = *(_DWORD *)(v4 + 36);
    v86 = 0;
    v87 = *(_DWORD *)(v4 + 44);
    v88 = *(_QWORD *)(v4 + 48);
    v103 = &v84;
      (unsigned int *)&v84,
      v79,
      (int *)&v103);
    v29 = *(_QWORD *)(v2 + 76);
    if ( (_DWORD)v29 == HIDWORD(v29) )
      v34 = v2;
        (unsigned __int64 *)(v2 + 72),
        (int)&v83);
      v35 = v86;
      while ( v35 )
        v40 = v35;
        v41 = *(_DWORD *)(v35 + 8);
        v35 = *(_DWORD *)v35;
        v42 = (void *)(v41 - 12);
        if ( (int *)(v41 - 12) != &dword_28898C0 )
          v36 = (unsigned int *)(v41 - 4);
              v37 = __ldrex(v36);
            while ( __strex(v37 - 1, v36) );
            v37 = (*v36)--;
          if ( v37 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v42);
        v43 = *(_DWORD *)(v40 + 4);
        v44 = (void *)(v43 - 12);
        if ( (int *)(v43 - 12) != &dword_28898C0 )
          v38 = (unsigned int *)(v43 - 4);
              v39 = __ldrex(v38);
            while ( __strex(v39 - 1, v38) );
            v39 = (*v38)--;
          if ( v39 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v44);
        operator delete((void *)v40);
      *(_DWORD *)v29 = v83;
      v83 = (char *)&unk_28898CC;
      v30 = v84;
      *(_DWORD *)(v29 + 4) = v84;
      HIDWORD(v29) = v85;
      *(_DWORD *)(v29 + 8) = v85;
      v31 = v86;
      *(_DWORD *)(v29 + 12) = v86;
      *(_DWORD *)(v29 + 16) = v87;
      v32 = HIDWORD(v88);
      *(_DWORD *)(v29 + 20) = v88;
      *(_DWORD *)(v29 + 24) = v32;
      v33 = v84;
      if ( &v89 == v84 )
        v30 = (_DWORD *)(v29 + 28);
        *(_DWORD *)(v29 + 4) = v29 + 28;
        *(_DWORD *)(v29 + 28) = *v33;
      if ( v31 )
        v30[*(_DWORD *)(v31 + 12) % HIDWORD(v29)] = v29 + 12;
      HIDWORD(v88) = 0;
      v89 = 0;
      v84 = &v89;
      v85 = 1;
      v86 = 0;
      v87 = 0;
      *(_DWORD *)(v2 + 76) += 32;
    _aeabi_memclr4(v84, 4 * v85);
    v87 = 0;
    if ( v84 && &v89 != v84 )
      operator delete(v84);
    v45 = v83 - 12;
    if ( (int *)(v83 - 12) != &dword_28898C0 )
      v72 = (unsigned int *)(v83 - 4);
          v73 = __ldrex(v72);
        while ( __strex(v73 - 1, v72) );
        v73 = (*v72)--;
      if ( v73 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v45);
    *(_QWORD *)&v46 = *(_QWORD *)(v4 + 100);
    if ( v46 != v47 )
      while ( sub_119C9E8((const void **)(v46 + 4), "packicon") )
        v46 += 8;
        if ( v47 == v46 )
          return;
      FetchImageParams::FetchImageParams((const void **)&v82, (unsigned int *)v46, 274877907008LL);
      v48 = *(_QWORD *)(v78 + 4);
      v49 = *(ContentCatalogService **)(v34 + 4);
      if ( HIDWORD(v48) )
        v50 = (unsigned int *)(HIDWORD(v48) + 8);
            v51 = __ldrex(v50);
          while ( __strex(v51 + 1, v50) );
          ++*v50;
      v52 = *(_QWORD *)(v78 + 12);
      if ( HIDWORD(v52) )
        v53 = (unsigned int *)(HIDWORD(v52) + 4);
            v54 = __ldrex(v53);
          while ( __strex(v54 + 1, v53) );
          ++*v53;
      v81 = 0;
      v55 = operator new(0x14u);
      *(_DWORD *)v55 = v34;
      *(_QWORD *)((char *)v55 + 4) = v48;
        v56 = (unsigned int *)(HIDWORD(v48) + 8);
            v57 = __ldrex(v56);
          while ( __strex(v57 + 1, v56) );
          ++*v56;
      LODWORD(v58) = sub_F4B1CC;
      *(_QWORD *)((char *)v55 + 12) = v52;
      HIDWORD(v58) = sub_F4AFE0;
      v80 = v55;
      *(_QWORD *)&v81 = v58;
      ContentCatalogService::fetchImageData(v49, &v82, (int)&v80);
      if ( v81 )
        v81();
        v59 = (unsigned int *)(HIDWORD(v48) + 8);
            v60 = __ldrex(v59);
          while ( __strex(v60 - 1, v59) );
          v60 = (*v59)--;
        if ( v60 == 1 )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v48) + 12))(HIDWORD(v48));
      v61 = (void *)(v82 - 12);
      if ( (int *)(v82 - 12) != &dword_28898C0 )
        v76 = (unsigned int *)(v82 - 4);
            v77 = __ldrex(v76);
          while ( __strex(v77 - 1, v76) );
          v77 = (*v76)--;
        if ( v77 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v61);
  }
}


void __fastcall PackManifest::clearLegacyModuleDependencies(PackManifest *this)
{
  PackManifest *v1; // r8@1
  __int64 v2; // kr00_8@1
  int v3; // r7@2
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  int v8; // r1@19
  void *v9; // r0@19
  int *v10; // r0@20

  v1 = this;
  v2 = *((_QWORD *)this + 13);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = v2;
    do
    {
      v8 = *(_DWORD *)(v3 + 4);
      v9 = (void *)(v8 - 12);
      if ( (int *)(v8 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v8 - 4);
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
          j_j_j_j__ZdlPv_9(v9);
      }
      v10 = (int *)(*(_DWORD *)v3 - 12);
      if ( v10 != &dword_28898C0 )
        v6 = (unsigned int *)(*(_DWORD *)v3 - 4);
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      v3 += 8;
    }
    while ( v3 != HIDWORD(v2) );
  }
  *((_DWORD *)v1 + 27) = v2;
}


char *__fastcall PackManifest::getMetaData(PackManifest *this)
{
  return (char *)this + 116;
}


int __fastcall PackManifest::setManifestOrigin(int result, _BYTE *a2)
{
  *(_BYTE *)(result + 148) = *a2;
  return result;
}


int __fastcall PackManifest::setPackSize(int result, int a2, unsigned __int64 a3)
{
  *(_QWORD *)(result + 152) = a3;
  return result;
}


char *__fastcall PackManifest::getModules(PackManifest *this)
{
  return (char *)this + 80;
}


char *__fastcall PackManifest::getNameRaw(PackManifest *this)
{
  return (char *)this + 64;
}


    || (v2 = *(PackManifest **)(a2 + 60), v3 = **a1, PackManifest::getPackCategory(*(PackManifest **)(a2 + 60)) == 1)
{
    || MinecraftScreenModel::_isPremiumLocked(*(MinecraftScreenModel **)(v3 + 424), v2) )
  {
    result = 0;
  }
  else
    result = PackManifest::getPackSize(v2) != 0;
  return result;
}


Json::Value *__fastcall PackManifest::_serializeMeta(PackManifest *this, Json::Value *a2)
{
  PackManifest *v2; // r9@1
  Json::Value *v3; // r8@1
  const char **v4; // r5@2
  const char **i; // r6@2
  int v6; // r0@4
  int v7; // r6@6
  const char **v8; // r9@7
  int v9; // t1@7
  int v10; // r4@8
  int v11; // r0@10
  int v13; // [sp+0h] [bp-70h]@8
  char v14; // [sp+10h] [bp-60h]@6
  char v15; // [sp+20h] [bp-50h]@3
  char v16; // [sp+30h] [bp-40h]@2
  char v17; // [sp+40h] [bp-30h]@1

  v2 = this;
  v3 = a2;
  Json::Value::Value(&v17, 0);
  if ( (unsigned int)*(_QWORD *)((char *)v2 + 116) != *(_QWORD *)((char *)v2 + 116) >> 32 )
  {
    Json::Value::Value(&v16, 0);
    v4 = (const char **)(*(_QWORD *)((char *)v2 + 116) >> 32);
    for ( i = (const char **)*(_QWORD *)((char *)v2 + 116); v4 != i; ++i )
    {
      Json::Value::Value((int)&v15, i);
      Json::Value::append((Json::Value *)&v16, (const Json::Value *)&v15);
      Json::Value::~Value((Json::Value *)&v15);
    }
    v6 = Json::Value::operator[]((Json::Value *)&v17, "authors");
    Json::Value::operator=(v6, (const Json::Value *)&v16);
    Json::Value::~Value((Json::Value *)&v16);
  }
  if ( *(_DWORD *)(*((_DWORD *)v2 + 33) - 12) )
    v7 = Json::Value::operator[]((Json::Value *)&v17, "license");
    Json::Value::Value((int)&v14, (const char **)v2 + 33);
    Json::Value::operator=(v7, (const Json::Value *)&v14);
    Json::Value::~Value((Json::Value *)&v14);
  v9 = *((_DWORD *)v2 + 32);
  v8 = (const char **)((char *)v2 + 128);
  if ( *(_DWORD *)(v9 - 12) )
    v10 = Json::Value::operator[]((Json::Value *)&v17, "url");
    Json::Value::Value((int)&v13, v8);
    Json::Value::operator=(v10, (const Json::Value *)&v13);
    Json::Value::~Value((Json::Value *)&v13);
  if ( !Json::Value::isNull((Json::Value *)&v17) )
    v11 = Json::Value::operator[](v3, "metadata");
    Json::Value::operator=(v11, (const Json::Value *)&v17);
  return Json::Value::~Value((Json::Value *)&v17);
}


Json::Value *__fastcall PackManifest::_serializeVersion(PackManifest *this, Json::Value *a2, const SemVersion *a3)
{
  SemVersion *v3; // r5@1
  Json::Value *v4; // r4@1
  int v5; // r0@1
  int v6; // r0@1
  int v7; // r0@1
  int v9; // [sp+0h] [bp-40h]@1
  char v10; // [sp+10h] [bp-30h]@1
  char v11; // [sp+20h] [bp-20h]@1

  v3 = a3;
  v4 = a2;
  v5 = SemVersion::getMajor(a3);
  Json::Value::Value((Json::Value *)&v11, v5);
  Json::Value::append(v4, (const Json::Value *)&v11);
  Json::Value::~Value((Json::Value *)&v11);
  v6 = SemVersion::getMinor(v3);
  Json::Value::Value((Json::Value *)&v10, v6);
  Json::Value::append(v4, (const Json::Value *)&v10);
  Json::Value::~Value((Json::Value *)&v10);
  v7 = SemVersion::getPatch(v3);
  Json::Value::Value((Json::Value *)&v9, v7);
  Json::Value::append(v4, (const Json::Value *)&v9);
  return Json::Value::~Value((Json::Value *)&v9);
}


    || (v2 = *(PackManifest **)(a2 + 60), v3 = **a1, PackManifest::getPackCategory(*(PackManifest **)(a2 + 60)) == 1)
{
    || MinecraftScreenModel::_isPremiumLocked(*(MinecraftScreenModel **)(v3 + 424), v2) )
  {
    result = 0;
  }
  else
    result = PackManifest::getPackSize(v2) != 0;
  return result;
}


char *__fastcall PackManifest::getLastModifiedDate(PackManifest *this)
{
  return (char *)this + 160;
}


signed int __fastcall PackManifest::isPremium(PackManifest *this)
{
  signed int result; // r0@2
  int v2; // r1@3

  if ( (*((_DWORD *)this + 36) & 0xFFFFFFFE) == 6 )
  {
    result = 1;
  }
  else
    v2 = *((_DWORD *)this + 35);
    result = 0;
    if ( v2 == 2 )
      result = 1;
  return result;
}


int __fastcall PackManifest::clone(PackManifest *this, int a2)
{
  PackManifest *v2; // r4@1
  int v3; // r6@1
  void *v4; // r5@1
  int result; // r0@1

  v2 = this;
  v3 = a2;
  v4 = operator new(0xB0u);
  result = PackManifest::PackManifest((int)v4, v3);
  *(_DWORD *)v2 = v4;
  return result;
}


Json::Value *__fastcall PackManifest::_serailizeLegacyModuleDependencies(PackManifest *this, Json::Value *a2)
{
  PackManifest *v2; // r5@1
  const char **i; // r4@1
  const char **v4; // r10@1
  int v5; // r7@2
  int v6; // r8@2
  const char **v7; // r4@2
  int v8; // r0@4
  Json::Value *v10; // [sp+4h] [bp-6Ch]@1
  char v11; // [sp+8h] [bp-68h]@2
  char v12; // [sp+18h] [bp-58h]@2
  char v13; // [sp+28h] [bp-48h]@2
  char v14; // [sp+38h] [bp-38h]@1

  v2 = this;
  v10 = a2;
  Json::Value::Value(&v14, 0);
  v4 = (const char **)(*((_QWORD *)v2 + 13) >> 32);
  for ( i = (const char **)*((_QWORD *)v2 + 13); i != v4; i = v7 + 1 )
  {
    Json::Value::Value(&v13, 0);
    v5 = Json::Value::operator[]((Json::Value *)&v13, "uuid");
    Json::Value::Value((int)&v12, i);
    Json::Value::operator=(v5, (const Json::Value *)&v12);
    Json::Value::~Value((Json::Value *)&v12);
    v6 = Json::Value::operator[]((Json::Value *)&v13, "version");
    v7 = i + 1;
    Json::Value::Value((int)&v11, v7);
    Json::Value::operator=(v6, (const Json::Value *)&v11);
    Json::Value::~Value((Json::Value *)&v11);
    Json::Value::append((Json::Value *)&v14, (const Json::Value *)&v13);
    Json::Value::~Value((Json::Value *)&v13);
  }
  if ( !Json::Value::isNull((Json::Value *)&v14) )
    v8 = Json::Value::operator[](v10, "legacy_module_dependencies");
    Json::Value::operator=(v8, (const Json::Value *)&v14);
  return Json::Value::~Value((Json::Value *)&v14);
}


int *__fastcall PackManifest::setMetadata(PackManifest *this, const ResourceMetadata *a2)
{
  PackManifest *v2; // r5@1
  const ResourceMetadata *v3; // r4@1

  v2 = this;
  v3 = a2;
  std::vector<std::string,std::allocator<std::string>>::operator=((int)this + 116, (unsigned __int64 *)a2);
  EntityInteraction::setInteractText((int *)v2 + 32, (int *)v3 + 3);
  return EntityInteraction::setInteractText((int *)v2 + 33, (int *)v3 + 4);
}


Json::Value *__fastcall PackManifest::serialize(PackManifest *this, int a2, Json::Value *a3)
{
  int v3; // r6@1
  Json::Value *v4; // r4@1
  PackManifest *v5; // r5@1
  int v6; // r7@1
  int v8; // [sp+0h] [bp-28h]@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  v6 = Json::Value::operator[](a3, "format_version");
  Json::Value::Value((Json::Value *)&v8, v3);
  Json::Value::operator=(v6, (const Json::Value *)&v8);
  Json::Value::~Value((Json::Value *)&v8);
  PackManifest::_serializeHeader(v5, v4);
  PackManifest::_serializeModules(v5, v4);
  PackManifest::_serializeDependencies(v5, v4);
  PackManifest::_serializeMeta(v5, v4);
  return PackManifest::_serailizeLegacyModuleDependencies(v5, v4);
}


  if ( PackManifest::isPremium(v3) == 1 )
{
  else
    result = 0;
  return result;
}


int __fastcall PackManifest::setHasPlugins(int result, bool a2)
{
  *(_BYTE *)(result + 165) = a2;
  return result;
}


RakNet *__fastcall PackManifest::setLastModifiedDate(PackManifest *this, __int32 a2)
{
  PackManifest *v2; // r4@1
  struct tm *v3; // r5@1
  void *v4; // r0@2
  RakNet *result; // r0@3
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  int v8; // [sp+4h] [bp-64h]@2
  time_t timer; // [sp+8h] [bp-60h]@1
  char v10; // [sp+10h] [bp-58h]@2
  RakNet *v11; // [sp+54h] [bp-14h]@1

  v2 = this;
  v11 = _stack_chk_guard;
  timer = a2;
  v3 = gmtime(&timer);
  if ( v3 )
  {
    _aeabi_memclr8(&v10, 64);
    strftime(&v10, 0x40u, "%FT%TZ", v3);
    sub_21E94B4((void **)&v8, &v10);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v2 + 40,
      &v8);
    v4 = (void *)(v8 - 12);
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
        j_j_j_j__ZdlPv_9(v4);
    }
  }
  result = (RakNet *)(_stack_chk_guard - v11);
  if ( _stack_chk_guard != v11 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall PackManifest::setHidden(int result, bool a2)
{
  *(_BYTE *)(result + 150) = a2;
  return result;
}


int __fastcall PackManifest::addLegacyModuleDependency(PackManifest *this, const LegacyPackIdVersion *a2)
{
  PackManifest *v2; // r4@1
  const LegacyPackIdVersion *v3; // r6@1
  __int64 v4; // kr00_8@1
  int result; // r0@2

  v2 = this;
  v3 = a2;
  v4 = *(_QWORD *)((char *)this + 108);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    result = j_j_j__ZNSt6vectorI19LegacyPackIdVersionSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_(
               (_QWORD *)this + 13,
               (int)a2);
  }
  else
    sub_21E8AF4((int *)v4, (int *)a2);
    sub_21E8AF4((int *)(v4 + 4), (int *)v3 + 1);
    result = *((_DWORD *)v2 + 27) + 8;
    *((_DWORD *)v2 + 27) = result;
  return result;
}


char *__fastcall PackManifest::getDependentPackIdentities(PackManifest *this)
{
  return (char *)this + 92;
}


signed int __fastcall PackManifest::hasModuleType(int a1, int a2)
{
  int v2; // r0@1
  int v3; // r2@1
  __int64 v4; // kr00_8@1
  signed int result; // r0@2

  v4 = *(_QWORD *)(a1 + 80);
  v2 = *(_QWORD *)(a1 + 80) >> 32;
  v3 = v4;
  if ( (_DWORD)v4 == v2 )
  {
    result = 0;
  }
  else
    while ( *(_DWORD *)(v3 + 48) != a2 )
    {
      v3 += 56;
      if ( v2 == v3 )
        return 0;
    }
    result = 1;
  return result;
}


char *__fastcall PackManifest::getDescriptionRaw(PackManifest *this)
{
  return (char *)this + 68;
}


  if ( PackManifest::isPremium(v3) == 1 )
{
  else
    result = 0;
  return result;
}


int __fastcall PackManifest::setPackCategory(int result, int a2)
{
  *(_DWORD *)(result + 140) = a2;
  return result;
}


Json::Value *__fastcall PackManifest::_serializeDependencies(PackManifest *this, Json::Value *a2)
{
  PackManifest *v2; // r4@1
  Json::Value *v3; // r7@1
  int i; // r5@1
  int v5; // r8@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // r11@11
  void *v9; // r0@11
  PackManifest *v10; // r0@12
  int v11; // r0@12
  int v12; // r0@14
  char v14; // [sp+8h] [bp-70h]@12
  int v15; // [sp+1Ch] [bp-5Ch]@3
  char v16; // [sp+20h] [bp-58h]@11
  char v17; // [sp+30h] [bp-48h]@11
  char v18; // [sp+40h] [bp-38h]@1

  v2 = this;
  v3 = a2;
  Json::Value::Value(&v18, 0);
  v5 = *(_QWORD *)((char *)v2 + 92) >> 32;
  for ( i = *(_QWORD *)((char *)v2 + 92); i != v5; i += 48 )
  {
    Json::Value::Value(&v17, 0);
    v8 = Json::Value::operator[]((Json::Value *)&v17, "uuid");
    mce::UUID::asString((mce::UUID *)&v15);
    Json::Value::Value((int)&v16, (const char **)&v15);
    Json::Value::operator=(v8, (const Json::Value *)&v16);
    Json::Value::~Value((Json::Value *)&v16);
    v9 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
    {
      v6 = (unsigned int *)(v15 - 4);
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
        j_j_j_j__ZdlPv_9(v9);
    }
    v10 = (PackManifest *)Json::Value::Value(&v14, 0);
    PackManifest::_serializeVersion(v10, (Json::Value *)&v14, (const SemVersion *)(i + 16));
    v11 = Json::Value::operator[]((Json::Value *)&v17, "version");
    Json::Value::operator=(v11, (const Json::Value *)&v14);
    Json::Value::append((Json::Value *)&v18, (const Json::Value *)&v17);
    Json::Value::~Value((Json::Value *)&v14);
    Json::Value::~Value((Json::Value *)&v17);
  }
  if ( !Json::Value::isNull((Json::Value *)&v18) )
    v12 = Json::Value::operator[](v3, "dependencies");
    Json::Value::operator=(v12, (const Json::Value *)&v18);
  return Json::Value::~Value((Json::Value *)&v18);
}


int __fastcall PackManifest::PackManifest(int a1, char a2)
{
  char v2; // r5@1
  int v3; // r4@1
  int result; // r0@1

  v2 = a2;
  v3 = a1;
  *(_DWORD *)a1 = &off_26EAB68;
  *(_DWORD *)(a1 + 4) = &unk_28898CC;
  *(_DWORD *)(a1 + 8) = 0;
  PackIdVersion::PackIdVersion((PackIdVersion *)(a1 + 16));
  *(_DWORD *)(v3 + 64) = &unk_28898CC;
  *(_DWORD *)(v3 + 68) = &unk_28898CC;
  *(_DWORD *)(v3 + 72) = &unk_28898CC;
  _aeabi_memclr4(v3 + 76, 40);
  ResourceMetadata::ResourceMetadata(v3 + 116);
  *(_BYTE *)(v3 + 136) = 0;
  *(_DWORD *)(v3 + 140) = 0;
  *(_BYTE *)(v3 + 148) = 4;
  *(_BYTE *)(v3 + 149) = v2;
  *(_BYTE *)(v3 + 150) = 0;
  *(_DWORD *)(v3 + 152) = 0;
  *(_DWORD *)(v3 + 156) = 0;
  *(_DWORD *)(v3 + 160) = &unk_28898CC;
  *(_BYTE *)(v3 + 164) = 1;
  result = v3;
  *(_BYTE *)(v3 + 165) = 0;
  *(_BYTE *)(v3 + 166) = 0;
  *(_DWORD *)(v3 + 168) = 0;
  *(_DWORD *)(v3 + 172) = 0;
  return result;
}


  if ( PackManifest::isHidden(v4) )
{
  if ( Pack::getSubpackInfoStack(v2) )
  {
    v5 = (unsigned __int64 *)Pack::getSubpackInfoStack(v2);
    v6 = SubpackInfoCollection::getSubpackIndex(v5, &Util::EMPTY_STRING);
  }
  else
    v6 = -1;
  v55 = v2;
  v56 = (char *)&unk_28898CC;
  PackReport::PackReport((int)&v57);
  v77 = 0;
  v78 = v6;
  v7 = *(PackSourceReport **)(v3 + 8);
  v8 = (PackManifest *)Pack::getManifest(v2);
  v9 = PackManifest::getIdentity(v8);
  v10 = PackSourceReport::getReport(v7, (const PackIdVersion *)v9);
  if ( v10 )
    EntityInteraction::setInteractText(&v57, (int *)v10);
    v58 = *(_DWORD *)(v10 + 4);
    v59 = *(_WORD *)(v10 + 8);
    std::vector<std::shared_ptr<PackError>,std::allocator<std::shared_ptr<PackError>>>::operator=(
      (int)&v60,
      (__int64 *)(v10 + 12));
      (int)&v61,
      (__int64 *)(v10 + 24));
    EntityInteraction::setInteractText(&v62, (int *)(v10 + 36));
    EntityInteraction::setInteractText(&v63, (int *)(v10 + 40));
    v11 = *(_DWORD *)(v10 + 52);
    v12 = *(_DWORD *)(v10 + 56);
    v13 = *(_DWORD *)(v10 + 60);
    v64 = *(_DWORD *)(v10 + 48);
    v65 = v11;
    v66 = v12;
    v67 = v13;
    v14 = *(_DWORD *)(v10 + 64);
    v69 = *(_WORD *)(v10 + 68);
    v68 = v14;
    EntityInteraction::setInteractText(&v70, (int *)(v10 + 72));
    EntityInteraction::setInteractText(&v71, (int *)(v10 + 76));
    EntityInteraction::setInteractText(&v72, (int *)(v10 + 80));
    v15 = *(_WORD *)(v10 + 84);
    v74 = *(_BYTE *)(v10 + 86);
    v73 = v15;
    v75 = *(_BYTE *)(v10 + 88);
    v76 = *(_BYTE *)(v10 + 96);
    v77 = PackReport::hasWarnings((PackReport *)v10);
  v17 = (Pack **)(*(_QWORD *)*(_DWORD *)(v3 + 4) >> 32);
  v16 = *(_QWORD *)*(_DWORD *)(v3 + 4);
  v18 = -286331153 * (((signed int)v17 - v16) >> 3) >> 2;
  if ( v18 >= 1 )
    v19 = v18 + 1;
    do
    {
      v20 = (PackManifest *)Pack::getManifest(v55);
      v21 = PackManifest::getIdentity(v20);
      v22 = (PackManifest *)Pack::getManifest(*(Pack **)v16);
      v23 = PackManifest::getIdentity(v22);
      v24 = (Pack **)v16;
      if ( PackIdVersion::operator==((int)v21, (int)v23) )
        goto LABEL_27;
      v25 = (PackManifest *)Pack::getManifest(v55);
      v26 = PackManifest::getIdentity(v25);
      v24 = (Pack **)(v16 + 120);
      v27 = (PackManifest *)Pack::getManifest(*(Pack **)(v16 + 120));
      v28 = PackManifest::getIdentity(v27);
      if ( PackIdVersion::operator==((int)v26, (int)v28) )
      v29 = (PackManifest *)Pack::getManifest(v55);
      v30 = PackManifest::getIdentity(v29);
      v24 = (Pack **)(v16 + 240);
      v31 = (PackManifest *)Pack::getManifest(*(Pack **)(v16 + 240));
      v32 = PackManifest::getIdentity(v31);
      if ( PackIdVersion::operator==((int)v30, (int)v32) )
      v33 = (PackManifest *)Pack::getManifest(v55);
      v34 = PackManifest::getIdentity(v33);
      v24 = (Pack **)(v16 + 360);
      v35 = (PackManifest *)Pack::getManifest(*(Pack **)(v16 + 360));
      v36 = PackManifest::getIdentity(v35);
      if ( PackIdVersion::operator==((int)v34, (int)v36) )
      --v19;
      v16 += 480;
    }
    while ( v19 > 1 );
  v37 = -286331153 * (((signed int)v17 - v16) >> 3);
  if ( v37 == 1 )
    v24 = (Pack **)v16;
    goto LABEL_23;
  if ( v37 == 2 )
LABEL_21:
    v42 = (PackManifest *)Pack::getManifest(v55);
    v43 = PackManifest::getIdentity(v42);
    v44 = (PackManifest *)Pack::getManifest(*v24);
    v45 = PackManifest::getIdentity(v44);
    if ( !PackIdVersion::operator==((int)v43, (int)v45) )
      v24 += 30;
LABEL_23:
      v46 = (PackManifest *)Pack::getManifest(v55);
      v47 = PackManifest::getIdentity(v46);
      v48 = (PackManifest *)Pack::getManifest(*v24);
      v49 = PackManifest::getIdentity(v48);
      if ( !PackIdVersion::operator==((int)v47, (int)v49) )
        v24 = v17;
      goto LABEL_27;
    goto LABEL_27;
  if ( v37 != 3 )
    v24 = v17;
  v38 = (PackManifest *)Pack::getManifest(v55);
  v39 = PackManifest::getIdentity(v38);
  v40 = (PackManifest *)Pack::getManifest(*(Pack **)v16);
  v41 = PackManifest::getIdentity(v40);
  v24 = (Pack **)v16;
  if ( !PackIdVersion::operator==((int)v39, (int)v41) )
    v24 = (Pack **)(v16 + 120);
    goto LABEL_21;
LABEL_27:
  if ( v24 == *(Pack ***)(*(_DWORD *)(v3 + 4) + 4) )
    v50 = *(_DWORD *)v3;
    v51 = *(_QWORD *)(*(_DWORD *)v3 + 4);
    if ( (_DWORD)v51 == HIDWORD(v51) )
      std::vector<PackModel,std::allocator<PackModel>>::_M_emplace_back_aux<PackModel const&>(
        *(unsigned __int64 **)v3,
        (int)&v55);
    else
      *(_DWORD *)v51 = v55;
      sub_21E8AF4((int *)(v51 + 4), (int *)((unsigned int)&v55 | 4));
      PackReport::PackReport((int *)(v51 + 8), &v57);
      *(_QWORD *)(v51 + 112) = *(_QWORD *)&v77;
      *(_DWORD *)(v50 + 4) += 120;
  PackReport::~PackReport((PackReport *)&v57);
  v52 = v56 - 12;
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v56 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v52);
}


void __fastcall PackManifest::getDescription(PackManifest *this, int a2)
{
  const PackManifest *v2; // r6@1
  int *v3; // r4@1
  int *v4; // r5@1

  v2 = (const PackManifest *)a2;
  v3 = (int *)(a2 + 68);
  v4 = (int *)this;
  if ( I18n::isPackKeyword((const void **)(a2 + 68)) == 1 )
    I18n::getPackKeywordValue(v4, v2, v3);
  else
    sub_21E8AF4(v4, v3);
}


char *__fastcall PackManifest::addPackDependency(PackManifest *this, const PackIdVersion *a2)
{
  PackManifest *v2; // r4@1
  const PackIdVersion *v3; // r5@1
  __int64 v4; // kr00_8@1
  int v5; // r1@2
  int v6; // r2@2
  int v7; // r3@2
  char *result; // r0@2

  v2 = this;
  v3 = a2;
  v4 = *((_QWORD *)this + 12);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    result = j_j_j__ZNSt6vectorI13PackIdVersionSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_(
               (unsigned __int64 *)((char *)this + 92),
               (int)a2);
  }
  else
    v5 = *((_DWORD *)a2 + 1);
    v6 = *((_DWORD *)v3 + 2);
    v7 = *((_DWORD *)v3 + 3);
    *(_DWORD *)v4 = *(_DWORD *)v3;
    *(_DWORD *)(v4 + 4) = v5;
    *(_DWORD *)(v4 + 8) = v6;
    *(_DWORD *)(v4 + 12) = v7;
    SemVersion::SemVersion(v4 + 16, (int)v3 + 16);
    *(_BYTE *)(v4 + 40) = *((_BYTE *)v3 + 40);
    result = (char *)(*((_DWORD *)v2 + 24) + 48);
    *((_DWORD *)v2 + 24) = result;
  return result;
}


void __fastcall PackManifest::~PackManifest(PackManifest *this)
{
  PackManifest::~PackManifest(this);
}


char *__fastcall PackManifest::getPackIconLocation(PackManifest *this)
{
  return (char *)this + 72;
}


int __fastcall PackManifest::setPlatformLocked(int result, bool a2)
{
  *(_BYTE *)(result + 166) = a2;
  return result;
}


char *__fastcall PackManifest::getIdentity(PackManifest *this)
{
  return (char *)this + 16;
}


int __fastcall PackManifest::setLocation(PackManifest *this, const ResourceLocation *a2)
{
  PackManifest *v2; // r5@1
  const ResourceLocation *v3; // r4@1
  int result; // r0@1

  v2 = this;
  v3 = a2;
  EntityInteraction::setInteractText((int *)this + 1, (int *)a2);
  result = *((_DWORD *)v3 + 1);
  *((_DWORD *)v2 + 2) = result;
  return result;
}


int __fastcall PackManifest::setPackType(int result, char a2)
{
  *(_BYTE *)(result + 136) = a2;
  return result;
}


int __fastcall PackManifest::PackManifest(int a1, int a2)
{
  int v2; // r8@1
  int v3; // r4@1
  int v4; // r12@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r3@1
  int v8; // r1@1
  int v9; // r2@1
  int v10; // r3@1
  int v11; // r5@1
  int v12; // r6@1
  int v13; // r7@1
  int v14; // r3@1
  int v15; // r1@1
  int v16; // r2@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_26EAB68;
  sub_21E8AF4((int *)(a1 + 4), (int *)(a2 + 4));
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(v3 + 8);
  v4 = v2 + 16;
  v5 = *(_DWORD *)(v3 + 20);
  v6 = *(_DWORD *)(v3 + 24);
  v7 = *(_DWORD *)(v3 + 28);
  *(_DWORD *)v4 = *(_DWORD *)(v3 + 16);
  *(_DWORD *)(v4 + 4) = v5;
  *(_DWORD *)(v4 + 8) = v6;
  *(_DWORD *)(v4 + 12) = v7;
  SemVersion::SemVersion(v2 + 32, v3 + 32);
  *(_BYTE *)(v2 + 56) = *(_BYTE *)(v3 + 56);
  sub_21E8AF4((int *)(v2 + 64), (int *)(v3 + 64));
  sub_21E8AF4((int *)(v2 + 68), (int *)(v3 + 68));
  sub_21E8AF4((int *)(v2 + 72), (int *)(v3 + 72));
  *(_DWORD *)(v2 + 76) = *(_DWORD *)(v3 + 76);
  std::vector<ResourceInformation,std::allocator<ResourceInformation>>::vector(v2 + 80, (unsigned __int64 *)(v3 + 80));
  std::vector<PackIdVersion,std::allocator<PackIdVersion>>::vector(v2 + 92, (unsigned __int64 *)(v3 + 92));
  std::vector<LegacyPackIdVersion,std::allocator<LegacyPackIdVersion>>::vector(v2 + 104, (unsigned __int64 *)(v3 + 104));
  ResourceMetadata::ResourceMetadata(v2 + 116, (unsigned __int64 *)(v3 + 116));
  v8 = v2 + 136;
  v9 = *(_DWORD *)(v3 + 140);
  v10 = *(_DWORD *)(v3 + 144);
  v11 = *(_DWORD *)(v3 + 148);
  v12 = *(_DWORD *)(v3 + 152);
  v13 = *(_DWORD *)(v3 + 156);
  *(_DWORD *)v8 = *(_DWORD *)(v3 + 136);
  *(_DWORD *)(v8 + 4) = v9;
  *(_DWORD *)(v8 + 8) = v10;
  *(_DWORD *)(v8 + 12) = v11;
  *(_DWORD *)(v8 + 16) = v12;
  *(_DWORD *)(v8 + 20) = v13;
  sub_21E8AF4((int *)(v2 + 160), (int *)(v3 + 160));
  v14 = v2 + 164;
  v15 = *(_DWORD *)(v3 + 168);
  v16 = *(_DWORD *)(v3 + 172);
  *(_DWORD *)v14 = *(_DWORD *)(v3 + 164);
  *(_DWORD *)(v14 + 4) = v15;
  *(_DWORD *)(v14 + 8) = v16;
  return v2;
}


void __fastcall PackManifest::getDescription(PackManifest *this, int a2)
{
  PackManifest::getDescription(this, a2);
}


int __fastcall PackManifest::setFormatVersion(int result, int a2)
{
  *(_DWORD *)(result + 168) = a2;
  return result;
}


int __fastcall PackManifest::setOriginalFormatVersion(int result, int a2)
{
  *(_DWORD *)(result + 172) = a2;
  return result;
}


Json::Value *__fastcall PackManifest::_serializeModules(PackManifest *this, Json::Value *a2)
{
  PackManifest *v2; // r4@1
  int v3; // r5@1
  const Json::Value *v4; // r4@2
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  const Json::Value *v7; // r9@11
  int v8; // r4@11
  void *v9; // r0@11
  int v10; // r4@12
  PackManifest *v11; // r0@12
  int v12; // r0@12
  int v13; // r9@12
  char *v14; // r0@12
  int v15; // r0@14
  Json::Value *v17; // [sp+4h] [bp-9Ch]@1
  int v18; // [sp+Ch] [bp-94h]@1
  char v19; // [sp+10h] [bp-90h]@2
  char v20; // [sp+20h] [bp-80h]@12
  char v21; // [sp+30h] [bp-70h]@12
  int v22; // [sp+44h] [bp-5Ch]@3
  char v23; // [sp+48h] [bp-58h]@11
  char v24; // [sp+58h] [bp-48h]@11
  char v25; // [sp+68h] [bp-38h]@1

  v2 = this;
  v17 = a2;
  Json::Value::Value(&v25, 0);
  v3 = *((_QWORD *)v2 + 10);
  v18 = *((_QWORD *)v2 + 10) >> 32;
  if ( v3 != v18 )
  {
    v4 = (const Json::Value *)&v19;
    do
    {
      v7 = v4;
      Json::Value::Value(&v24, 0);
      v8 = Json::Value::operator[]((Json::Value *)&v24, "uuid");
      mce::UUID::asString((mce::UUID *)&v22);
      Json::Value::Value((int)&v23, (const char **)&v22);
      Json::Value::operator=(v8, (const Json::Value *)&v23);
      Json::Value::~Value((Json::Value *)&v23);
      v9 = (void *)(v22 - 12);
      if ( (int *)(v22 - 12) != &dword_28898C0 )
      {
        v5 = (unsigned int *)(v22 - 4);
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
      v10 = Json::Value::operator[]((Json::Value *)&v24, "description");
      Json::Value::Value((int)&v21, (const char **)v3);
      Json::Value::operator=(v10, (const Json::Value *)&v21);
      Json::Value::~Value((Json::Value *)&v21);
      v11 = (PackManifest *)Json::Value::Value(&v20, 0);
      PackManifest::_serializeVersion(v11, (Json::Value *)&v20, (const SemVersion *)(v3 + 4));
      v4 = v7;
      v12 = Json::Value::operator[]((Json::Value *)&v24, "version");
      Json::Value::operator=(v12, (const Json::Value *)&v20);
      v13 = Json::Value::operator[]((Json::Value *)&v24, "type");
      v14 = ResourceInformation::StringFromResourceType(*(_DWORD *)(v3 + 48));
      Json::Value::Value((int)v4, (const char **)v14);
      Json::Value::operator=(v13, v4);
      Json::Value::~Value(v4);
      Json::Value::append((Json::Value *)&v25, (const Json::Value *)&v24);
      Json::Value::~Value((Json::Value *)&v20);
      Json::Value::~Value((Json::Value *)&v24);
      v3 += 56;
    }
    while ( v3 != v18 );
  }
  if ( !Json::Value::isNull((Json::Value *)&v25) )
    v15 = Json::Value::operator[](v17, "modules");
    Json::Value::operator=(v15, (const Json::Value *)&v25);
  return Json::Value::~Value((Json::Value *)&v25);
}


void __fastcall PackManifest::getName(PackManifest *this, int a2)
{
  PackManifest::getName(this, a2);
}


char *__fastcall PackManifest::addModule(PackManifest *this, const ResourceInformation *a2)
{
  PackManifest *v2; // r4@1
  __int64 v3; // kr00_8@1
  char *result; // r0@2

  v2 = this;
  v3 = *(_QWORD *)((char *)this + 84);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    result = j_j_j__ZNSt6vectorI19ResourceInformationSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_(
               (unsigned __int64 *)this + 10,
               (int *)a2);
  }
  else
    ResourceInformation::ResourceInformation((int *)v3, (int *)a2);
    result = (char *)(*((_DWORD *)v2 + 21) + 56);
    *((_DWORD *)v2 + 21) = result;
  return result;
}


  if ( PackManifest::getPackOrigin(*(PackManifest **)(v3 + 460)) != 1 )
{
    if ( PackManifest::getManifestOrigin(v4) != 2 )
    {
      v5 = 2;
      goto LABEL_7;
    }
    goto LABEL_5;
  }
  v5 = 1;
LABEL_7:
  ResourceUtil::stringFromPath(&v8, v5);
  return sub_15903B4(v2, v9, v8);
}


void __fastcall PackManifest::~PackManifest(PackManifest *this)
{
  WorldTemplatePackManifest *v1; // r0@1

  v1 = WorldTemplatePackManifest::~WorldTemplatePackManifest(this);
  j_j_j__ZdlPv_5((void *)v1);
}


signed int __fastcall PackManifest::hasLegacyModuleDependencies(PackManifest *this)
{
  __int64 v1; // r1@1
  signed int result; // r0@1

  v1 = *((_QWORD *)this + 13);
  result = 0;
  if ( (_DWORD)v1 != HIDWORD(v1) )
    result = 1;
  return result;
}


char *__fastcall PackManifest::getLegacyModuleDependencies(PackManifest *this)
{
  return (char *)this + 104;
}


int __fastcall PackManifest::setPackIconLocation(PackManifest *this, const ResourceLocation *a2)
{
  PackManifest *v2; // r5@1
  const ResourceLocation *v3; // r4@1
  int result; // r0@1

  v2 = this;
  v3 = a2;
  EntityInteraction::setInteractText((int *)this + 18, (int *)a2);
  result = *((_DWORD *)v3 + 1);
  *((_DWORD *)v2 + 19) = result;
  return result;
}


int __fastcall PackManifest::setPackOrigin(int result, int a2)
{
  *(_DWORD *)(result + 144) = a2;
  return result;
}


      if ( PackManifest::isPremium(*(PackManifest **)(*(_DWORD *)v7 + 60)) )
{
      v12 = v7;
      if ( PackManifest::getPackOrigin(*(PackManifest **)(v11 + 60)) == 1 )
        goto LABEL_30;
      v12 = v7 + 4;
      v13 = *(_DWORD *)(v7 + 4);
      if ( PackManifest::isPremium(*(PackManifest **)(v13 + 60)) )
      if ( PackManifest::getPackOrigin(*(PackManifest **)(v13 + 60)) == 1 )
      v12 = v7 + 8;
      v14 = *(_DWORD *)(v7 + 8);
      if ( PackManifest::isPremium(*(PackManifest **)(v14 + 60)) )
      if ( PackManifest::getPackOrigin(*(PackManifest **)(v14 + 60)) == 1 )
      v12 = v7 + 12;
      v15 = *(_DWORD *)(v7 + 12);
      if ( PackManifest::isPremium(*(PackManifest **)(v15 + 60))
        || PackManifest::getPackOrigin(*(PackManifest **)(v15 + 60)) == 1 )
      {
      }
      --v10;
      v7 += 16;
    }
    while ( v10 > 1 );
  }
  if ( 1 == (v8 - v7) >> 2 )
  {
    v12 = v7;
LABEL_25:
    v19 = *(_DWORD *)v12;
    if ( !PackManifest::isPremium(*(PackManifest **)(*(_DWORD *)v12 + 60))
      && PackManifest::getPackOrigin(*(PackManifest **)(v19 + 60)) != 1 )
    {
      v12 = v8;
    goto LABEL_30;
  v16 = (v8 - v7) >> 2;
  if ( v16 == 2 )
LABEL_21:
    v18 = *(_DWORD *)v12;
    if ( PackManifest::isPremium(*(PackManifest **)(*(_DWORD *)v12 + 60))
      || PackManifest::getPackOrigin(*(PackManifest **)(v18 + 60)) == 1 )
      goto LABEL_30;
    v12 += 4;
    goto LABEL_25;
  if ( v16 != 3 )
    v12 = v8;
  v17 = *(_DWORD *)v7;
  v12 = v7;
  if ( !PackManifest::isPremium(*(PackManifest **)(*(_DWORD *)v7 + 60)) )
    if ( PackManifest::getPackOrigin(*(PackManifest **)(v17 + 60)) != 1 )
      goto LABEL_21;
LABEL_30:
  if ( v12 != v8 )
    v20 = v12 + 4;
    while ( v20 != v8 )
      while ( 1 )
        v22 = *(_DWORD *)v20;
        if ( PackManifest::isPremium(*(PackManifest **)(*(_DWORD *)v20 + 60)) != 1
          && PackManifest::getPackOrigin(*(PackManifest **)(v22 + 60)) != 1 )
        {
          break;
        }
        v20 += 4;
        if ( v8 == v20 )
          goto LABEL_37;
      v21 = *(_DWORD *)v20;
      v20 += 4;
      *(_DWORD *)v12 = v21;
      v12 += 4;
LABEL_37:
    v8 = v12;
  result = *(_DWORD *)(v3 + 4);
  if ( v8 != result )
    *(_DWORD *)(v3 + 4) = v8;
  return result;
}


Json::Value *__fastcall PackManifest::_serializeHeader(PackManifest *this, Json::Value *a2)
{
  PackManifest *v2; // r5@1
  Json::Value *v3; // r4@1
  Json::Value *v4; // r0@1
  int v5; // r6@1
  int v6; // r6@1
  int v7; // r6@1
  void *v8; // r0@1
  int v9; // r6@2
  PackManifest *v10; // r0@2
  int v11; // r0@2
  int v12; // r0@2
  unsigned int *v14; // r2@3
  signed int v15; // r1@5
  int v16; // [sp+0h] [bp-80h]@2
  char v17; // [sp+10h] [bp-70h]@2
  int v18; // [sp+24h] [bp-5Ch]@1
  char v19; // [sp+28h] [bp-58h]@1
  char v20; // [sp+38h] [bp-48h]@1
  char v21; // [sp+48h] [bp-38h]@1
  char v22; // [sp+58h] [bp-28h]@1

  v2 = this;
  v3 = a2;
  v4 = (Json::Value *)Json::Value::Value(&v22, 0);
  v5 = Json::Value::operator[](v4, "name");
  Json::Value::Value((int)&v21, (const char **)v2 + 16);
  Json::Value::operator=(v5, (const Json::Value *)&v21);
  Json::Value::~Value((Json::Value *)&v21);
  v6 = Json::Value::operator[]((Json::Value *)&v22, "description");
  Json::Value::Value((int)&v20, (const char **)v2 + 17);
  Json::Value::operator=(v6, (const Json::Value *)&v20);
  Json::Value::~Value((Json::Value *)&v20);
  v7 = Json::Value::operator[]((Json::Value *)&v22, "uuid");
  mce::UUID::asString((mce::UUID *)&v18);
  Json::Value::Value((int)&v19, (const char **)&v18);
  Json::Value::operator=(v7, (const Json::Value *)&v19);
  Json::Value::~Value((Json::Value *)&v19);
  v8 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v18 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
  }
  v9 = Json::Value::operator[]((Json::Value *)&v22, "platform_locked");
  Json::Value::Value((Json::Value *)&v17, *((_BYTE *)v2 + 166));
  Json::Value::operator=(v9, (const Json::Value *)&v17);
  Json::Value::~Value((Json::Value *)&v17);
  v10 = (PackManifest *)Json::Value::Value(&v16, 0);
  PackManifest::_serializeVersion(v10, (Json::Value *)&v16, (PackManifest *)((char *)v2 + 32));
  v11 = Json::Value::operator[]((Json::Value *)&v22, "version");
  Json::Value::operator=(v11, (const Json::Value *)&v16);
  v12 = Json::Value::operator[](v3, "header");
  Json::Value::operator=(v12, (const Json::Value *)&v22);
  Json::Value::~Value((Json::Value *)&v16);
  return Json::Value::~Value((Json::Value *)&v22);
}


void __fastcall PackManifest::getName(PackManifest *this, int a2)
{
  const PackManifest *v2; // r6@1
  int *v3; // r4@1
  int *v4; // r5@1

  v2 = (const PackManifest *)a2;
  v3 = (int *)(a2 + 64);
  v4 = (int *)this;
  if ( I18n::isPackKeyword((const void **)(a2 + 64)) == 1 )
    I18n::getPackKeywordValue(v4, v2, v3);
  else
    sub_21E8AF4(v4, v3);
}


int __fastcall PackManifest::setManifestType(int result, _BYTE *a2)
{
  *(_BYTE *)(result + 149) = *a2;
  return result;
}
