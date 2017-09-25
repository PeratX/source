

void __fastcall PackInstance::getTexturesList(PackInstance *this, int a2)
{
  ResourcePack::getTexturesList(this, *(_QWORD *)(a2 + 104), *(_QWORD *)(a2 + 104) >> 32);
}


int __fastcall PackInstance::PackInstance(int a1, int a2, const void **a3, char a4)
{
  int v4; // r5@1
  int v5; // r6@1
  char v6; // r4@1
  signed int v7; // r7@1
  int result; // r0@1

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = ResourcePack::getSubpackIndex(a2, a3);
  PackReport::PackReport(v5);
  *(_DWORD *)(v5 + 104) = v4;
  *(_DWORD *)(v5 + 108) = v7;
  result = v5;
  *(_BYTE *)(v5 + 112) = v6;
  return result;
}


    while ( PackInstance::getPackCategory(v10) == 1 || PackInstance::getPackCategory(v10) == 2 )
{
LABEL_120:
      v10 = (PackInstance *)((char *)v10 + 120);
      if ( v10 == v9 )
        goto LABEL_121;
    }
    v26 = *(_QWORD *)v4 >> 32;
    v25 = *(_QWORD *)v4;
    v27 = -858993459 * ((v26 - v25) >> 3) >> 2;
    if ( v27 >= 1 )
    {
      v28 = v27 + 1;
      do
      {
        PackInstance::getPackId((PackInstance *)&v122, (int)v10);
        if ( !(*(_QWORD *)v25 ^ v122) && *(_QWORD *)(v25 + 8) == v123 )
        {
          v29 = PackInstance::getVersion(v10);
          v30 = v25;
          if ( SemVersion::operator==((int)v29, v25 + 16) )
            goto LABEL_95;
        }
        v30 = v25 + 40;
        if ( v122 == *(_QWORD *)(v25 + 40) && *(_QWORD *)(v25 + 48) == v123 )
          v31 = PackInstance::getVersion(v10);
          if ( SemVersion::operator==((int)v31, v25 + 56) )
        v30 = v25 + 80;
        if ( v122 == *(_QWORD *)(v25 + 80) && *(_QWORD *)(v25 + 88) == v123 )
          v32 = PackInstance::getVersion(v10);
          if ( SemVersion::operator==((int)v32, v25 + 96) )
        v30 = v25 + 120;
        if ( v122 == *(_QWORD *)(v25 + 120) && *(_QWORD *)(v25 + 128) == v123 )
          v33 = PackInstance::getVersion(v10);
          if ( SemVersion::operator==((int)v33, v25 + 136) )
        --v28;
        v25 += 160;
      }
      while ( v28 > 1 );
    v34 = -858993459 * ((v26 - v25) >> 3);
    if ( v34 == 1 )
      v30 = v25;
LABEL_89:
      PackInstance::getPackId((PackInstance *)&v122, (int)v10);
      if ( !(*(_QWORD *)v30 ^ v122) && *(_QWORD *)(v30 + 8) == v123 )
        v37 = PackInstance::getVersion(v10);
        if ( !SemVersion::operator==((int)v37, v30 + 16) )
          v30 = v26;
        goto LABEL_95;
      goto LABEL_94;
    if ( v34 == 2 )
    else
      if ( v34 != 3 )
LABEL_94:
        v30 = v26;
      if ( !(*(_QWORD *)v25 ^ v122) && *(_QWORD *)(v25 + 8) == v123 )
        v35 = PackInstance::getVersion(v10);
        v30 = v25;
        if ( SemVersion::operator==((int)v35, v25 + 16) )
          goto LABEL_95;
      v30 = v25 + 40;
    PackInstance::getPackId((PackInstance *)&v122, (int)v10);
    if ( *(_QWORD *)v30 ^ v122
      || *(_QWORD *)(v30 + 8) != v123
      || (v36 = PackInstance::getVersion(v10), !SemVersion::operator==((int)v36, v30 + 16)) )
      v30 += 40;
      goto LABEL_89;
LABEL_95:
    v38 = v30 == *(_DWORD *)(v4 + 4);
    v9 = (PackInstance *)v84;
    if ( v38 )
      v39 = (PackManifest *)PackInstance::getManifest(v10);
      v38 = PackManifest::getPackType(v39) == 1;
      v40 = &v137;
      if ( v38 )
        v40 = &v138;
      sub_DA7364((void **)&v122, (const char *)v40 + 4);
      v41 = PackInstance::getResourceLocation(v10);
      ResourceLocation::getFullPath((ResourceLocation *)&v117, v41);
      v42 = *(PackSourceFactory **)v82;
      v43 = (PackManifest *)PackInstance::getManifest(v10);
      v44 = v83;
      v45 = PackManifest::getIdentity(v43);
      v46 = (DirectoryPackSource *)PackSourceFactory::getDirectoryPackSourceContaining(v42, (const PackIdVersion *)v45);
      if ( v46 && DirectoryPackSource::isCopyable(v46) == 1 )
        v116 = v83 + 3;
        v47 = PackInstance::isZipped(v10);
        LODWORD(v48) = v122;
        if ( v47 == 1 )
          *(_DWORD *)s = v122;
          v113 = *(_DWORD *)(v122 - 12);
          v110 = v117;
          v111 = *(_DWORD *)(v117 - 12);
          Core::PathBuffer<Core::StackString<char,1024u>>::getEntryNameWithoutExtension((int)&v131, (__int64 *)&v110);
          Core::PathBuffer<Core::StackString<char,1024u>>::joinParts((int)&v134, s, 1, (int)v79, v133, ".zip");
          v114 = __PAIR__(v136, (unsigned int)v76);
          Core::FileSystem::getUniqueFilePathForFile((int)&v129, &v114);
          sub_DA7364((void **)&v115, v74);
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            (int *)&v116,
            &v115);
          v49 = (void *)(v115 - 12);
          if ( (int *)(v115 - 12) != v83 )
          {
            v17 = (unsigned int *)(v115 - 4);
            if ( v78 )
            {
              __dmb();
              do
                v18 = __ldrex(v17);
              while ( __strex(v18 - 1, v17) );
            }
            else
              v18 = (*v17)--;
            if ( v18 <= 0 )
              j_j_j_j_j__ZdlPv_9(v49);
          }
          v106 = v117;
          v107 = *(_DWORD *)(v117 - 12);
          v104 = v116;
          v105 = *(v116 - 3);
          Core::FileSystem::copyFile((int)&v108, (__int64 *)&v106, (__int64 *)&v104);
          if ( v109 )
            v109();
        else
          HIDWORD(v48) = *(_DWORD *)(v122 - 12);
          LODWORD(v50) = *(_DWORD *)PackInstance::getFolderName(v10);
          HIDWORD(v50) = *(_DWORD *)(v50 - 12);
          *(_QWORD *)&v118 = v48;
          *(_QWORD *)v80 = v50;
          Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v126, (int)&v118, 2);
          v102 = __PAIR__(v128, (unsigned int)v77);
          Core::FileSystem::getUniqueFilePathForDirectory((int)&v124, &v102);
          sub_DA7364((void **)&v103, v75);
            &v103);
          v51 = (void *)(v103 - 12);
          if ( (int *)(v103 - 12) != v83 )
            v19 = (unsigned int *)(v103 - 4);
                v20 = __ldrex(v19);
              while ( __strex(v20 - 1, v19) );
              v20 = (*v19)--;
            if ( v20 <= 0 )
              j_j_j_j_j__ZdlPv_9(v51);
          v95 = v117;
          v96 = *(_DWORD *)(v117 - 12);
          v93 = v116;
          v94 = *(v116 - 3);
          Core::FileSystem::copyDirectoryAndContentsRecursively((int)&v97, (__int64 *)&v95, (__int64 *)&v93);
          if ( v99 )
            v99();
        v52 = *(_DWORD *)v82;
        v53 = (PackManifest *)PackInstance::getManifest(v10);
        v54 = PackManifest::getPackType(v53);
        v55 = PackSourceFactory::getDirectoryPackSource(v52, (int *)&v122, v54);
        if ( v55 )
          sub_DA73B4((int *)&v89, (int *)&v116);
          v56 = (int)v89;
          v89 = v83 + 3;
          v90 = v56;
          v91 = 2;
          v57 = DirectoryPackSource::getPackType(v55);
          v58 = (*(int (__fastcall **)(DirectoryPackSource *))(*(_DWORD *)v55 + 16))(v55);
          Pack::createPack(
            (int)&v92,
            (IContentKeyProvider *)&v90,
            v57,
            v58,
            *(_QWORD *)(v82 + 4),
            *(_QWORD *)(v82 + 4) >> 32,
            0,
            v69,
            v70,
            v71,
            v72,
            v73,
            (int)v74,
            (char)v75,
            (int)v76,
            (int)v77,
            (int)v78,
            (int)v79,
            (int)v80,
            v81,
            v82,
            (int)v83,
            v84,
            v85,
            v86,
            SHIDWORD(v86),
            v87,
            v88,
            (int)v89,
            v90,
            v91,
            (int)v92,
            (int)v93,
            v94,
            v95,
            v96,
            *(int *)&v97,
            v98,
            (int)v99,
            v100,
            v101,
            v102);
          DirectoryPackSource::addPack((int)v55, (int *)&v92);
          if ( v92 )
            v59 = Pack::~Pack(v92);
            operator delete((void *)v59);
          v92 = 0;
          v60 = (void *)(v90 - 12);
          if ( (int *)(v90 - 12) != v83 )
            v21 = (unsigned int *)(v90 - 4);
                v22 = __ldrex(v21);
              while ( __strex(v22 - 1, v21) );
              v22 = (*v21)--;
            if ( v22 <= 0 )
              j_j_j_j_j__ZdlPv_9(v60);
          v61 = v89 - 3;
          if ( v89 - 3 != v83 )
            v23 = (unsigned int *)(v89 - 1);
                v24 = __ldrex(v23);
              while ( __strex(v24 - 1, v23) );
              v24 = (*v23)--;
            if ( v24 <= 0 )
              j_j_j_j_j__ZdlPv_9(v61);
        PackInstance::getPackId((PackInstance *)&v86, (int)v10);
        v62 = PackInstance::getVersion(v10);
        v63 = *(_QWORD *)(v81 + 4);
        if ( (_DWORD)v63 == HIDWORD(v63) )
          std::vector<std::pair<mce::UUID,SemVersion>,std::allocator<std::pair<mce::UUID,SemVersion>>>::_M_emplace_back_aux<mce::UUID const,SemVersion const&>(
            (unsigned __int64 *)v81,
            (int)&v86,
            (int)v62);
          v64 = *(_QWORD *)&v87;
          *(_QWORD *)v63 = v86;
          *(_QWORD *)(v63 + 8) = v64;
          SemVersion::SemVersion(v63 + 16, (int)v62);
          *(_DWORD *)(v81 + 4) += 40;
        v44 = v83;
        v9 = (PackInstance *)v84;
        v65 = v116 - 3;
        if ( v116 - 3 != v83 )
          v15 = (unsigned int *)(v116 - 1);
          if ( v78 )
            __dmb();
            do
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
          else
            v16 = (*v15)--;
          if ( v16 <= 0 )
            j_j_j_j_j__ZdlPv_9(v65);
      v66 = (void *)(v117 - 12);
      if ( (int *)(v117 - 12) != v44 )
        v11 = (unsigned int *)(v117 - 4);
        if ( v78 )
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j_j__ZdlPv_9(v66);
      v83 = v44;
      v67 = (void *)(v122 - 12);
      v38 = (_DWORD)v122 - 12 == (_DWORD)v44;
      v4 = v81;
      if ( !v38 )
        v13 = (unsigned int *)(v122 - 4);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j_j__ZdlPv_9(v67);
    goto LABEL_120;
  }
LABEL_121:
  result = (char *)(_stack_chk_guard - v139);
  if ( _stack_chk_guard != v139 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall PackInstance::isCompatiblePack(int a1, int *a2)
{
  int *v2; // r4@1
  __int64 *v3; // r0@1

  v2 = a2;
  v3 = (__int64 *)ResourcePack::getSubpackInfoStack(*(ResourcePack **)(a1 + 104));
  return j_j_j__ZNK21SubpackInfoCollection12isCompatibleERK15ContentTierInfo_0(v3, v2);
}


void __fastcall PackInstance::setLocale(int a1, int a2)
{
  PackInstance::setLocale(a1, a2);
}


void __fastcall PackInstance::getTexturesList(PackInstance *this, int a2)
{
  PackInstance::getTexturesList(this, a2);
}


int __fastcall PackInstance::hasExtraResourcesForLocale(int a1, int a2)
{
  return j_j_j__ZNK12ResourcePack26hasExtraResourcesForLocaleERKSsi(
           *(_QWORD *)(a1 + 104),
           a2,
           *(_QWORD *)(a1 + 104) >> 32);
}


int __fastcall PackInstance::forEachIn(int a1, int a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r6@1
  int v6; // r4@1
  int v7; // r5@1
  void (__fastcall *v8)(char *, int, signed int); // r3@1
  int v9; // r8@1
  int result; // r0@3
  char v11; // [sp+8h] [bp-28h]@2
  int (*v12)(void); // [sp+10h] [bp-20h]@1
  int v13; // [sp+14h] [bp-1Ch]@2

  v4 = a1;
  v5 = *(_DWORD *)(a1 + 104);
  v6 = a3;
  v12 = 0;
  v7 = a4;
  v8 = *(void (__fastcall **)(char *, int, signed int))(a3 + 8);
  v9 = a2;
  if ( v8 )
  {
    v8(&v11, a3, 2);
    v13 = *(_DWORD *)(v6 + 12);
    v12 = *(int (**)(void))(v6 + 8);
  }
  result = ResourcePack::forEachIn(v5, v9, (int)&v11, *(_DWORD *)(v4 + 108), v7);
  if ( v12 )
    result = v12();
  return result;
}


int __fastcall PackInstance::PackInstance(int a1, int a2, int a3, char a4)
{
  char v4; // r4@1
  int v5; // r5@1
  int v6; // r6@1
  int result; // r0@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  result = PackReport::PackReport(a1);
  *(_DWORD *)(result + 104) = v6;
  *(_DWORD *)(result + 108) = v5;
  *(_BYTE *)(result + 112) = v4;
  return result;
}


void __fastcall PackInstance::setLocale(int a1, int a2)
{
  j_j_j__ZN12ResourcePack9setLocaleERKSs(*(_DWORD *)(a1 + 104), a2);
}


int __fastcall PackInstance::getPackId(PackInstance *this, int a2)
{
  PackInstance *v2; // r4@1
  char *v3; // r0@1
  int v4; // r1@1
  int v5; // r2@1
  int v6; // r3@1
  int result; // r0@1

  v2 = this;
  v3 = ResourcePack::getPackId(*(ResourcePack **)(a2 + 104));
  v4 = *(_DWORD *)v3;
  v5 = *((_DWORD *)v3 + 1);
  v6 = *((_DWORD *)v3 + 2);
  result = *((_DWORD *)v3 + 3);
  *(_DWORD *)v2 = v4;
  *((_DWORD *)v2 + 1) = v5;
  *((_DWORD *)v2 + 2) = v6;
  *((_DWORD *)v2 + 3) = result;
  return result;
}


signed int __fastcall PackInstance::getTierInfo(PackInstance *this)
{
  PackInstance *v1; // r4@1
  SubpackInfoCollection *v2; // r0@1

  v1 = this;
  v2 = (SubpackInfoCollection *)ResourcePack::getSubpackInfoStack(*((ResourcePack **)this + 26));
  return j_j_j__ZNK21SubpackInfoCollection21getSubpackContentTierEi(v2, *((_DWORD *)v1 + 27));
}


int __fastcall PackInstance::setToDefaultSubpack(int a1, int *a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  __int64 *v4; // r0@1
  int result; // r0@1

  v2 = a1;
  v3 = a2;
  v4 = (__int64 *)ResourcePack::getSubpackInfoStack(*(ResourcePack **)(a1 + 104));
  result = SubpackInfoCollection::getDefaultSubpackIndex(v4, v3);
  *(_DWORD *)(v2 + 108) = result;
  return result;
}


int __fastcall PackInstance::isCompatibleSubpack(int a1, _DWORD *a2)
{
  int v2; // r5@1
  _DWORD *v3; // r4@1
  __int64 *v4; // r0@1

  v2 = a1;
  v3 = a2;
  v4 = (__int64 *)ResourcePack::getSubpackInfoStack(*(ResourcePack **)(a1 + 104));
  return j_j_j__ZNK21SubpackInfoCollection19isCompatibleSubpackEiRK15ContentTierInfo(v4, *(_DWORD *)(v2 + 108), v3);
}


int __fastcall PackInstance::PackInstance(int a1, int a2, char a3)
{
  char v3; // r4@1
  __int64 v4; // r5@1
  int result; // r0@1

  v3 = a3;
  v4 = *(_QWORD *)(a2 + 104);
  result = PackReport::PackReport(a1);
  *(_QWORD *)(result + 104) = v4;
  *(_BYTE *)(result + 112) = v3;
  return result;
}
