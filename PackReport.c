

void __fastcall PackReport::addError<UIPackError>(int a1, int a2)
{
  PackReport::addError<UIPackError>(a1, a2);
}


    if ( PackReport::hasErrors(v5) )
{
      v6 = "textures/ui/ErrorGlyph";
      return sub_21E94B4(v3, v6);
    }
LABEL_6:
    v6 = "textures/ui/Caution";
    return sub_21E94B4(v3, v6);
  }
  v6 = "textures/ui/WarningGlyph";
  return sub_21E94B4(v3, v6);
}


unsigned int __fastcall PackReport::addError<PackLoadError>(int a1, int a2)
{
  int v2; // r4@1
  __int64 v3; // r0@1
  unsigned int result; // r0@2
  int v5; // r4@4
  unsigned int *v6; // r1@5
  unsigned int *v7; // r5@11
  unsigned int v8; // [sp+4h] [bp-1Ch]@1
  int v9; // [sp+8h] [bp-18h]@2
  char v10; // [sp+Ch] [bp-14h]@1

  v2 = a1;
  std::__shared_ptr<PackLoadError,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<PackLoadError>,PackLoadError const&>(
    (int)&v8,
    (int)&v10,
    a2);
  v3 = *(_QWORD *)(v2 + 16);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    result = std::vector<std::shared_ptr<PackError>,std::allocator<std::shared_ptr<PackError>>>::_M_emplace_back_aux<std::shared_ptr<PackLoadError>>(
               (_QWORD *)(v2 + 12),
               (int)&v8);
  }
  else
    *(_QWORD *)v3 = v8;
    HIDWORD(v3) = v9;
    v9 = 0;
    *(_DWORD *)(v3 + 4) = HIDWORD(v3);
    result = v3 + 8;
    v8 = 0;
    *(_DWORD *)(v2 + 16) = result;
  v5 = v9;
  if ( v9 )
    v6 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v6);
      while ( __strex(result - 1, v6) );
    }
    else
      result = (*v6)--;
    if ( result == 1 )
      v7 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v7);
        while ( __strex(result - 1, v7) );
      }
      else
        result = (*v7)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return result;
}


char *__fastcall PackReport::getErrors(PackReport *this)
{
  return (char *)this + 12;
}


signed int __fastcall PackReport::hasErrors(PackReport *this)
{
  __int64 v1; // r1@1
  signed int result; // r0@1

  v1 = *(_QWORD *)((char *)this + 12);
  result = 0;
  if ( (_DWORD)v1 != HIDWORD(v1) )
    result = 1;
  return result;
}


    if ( PackReport::hasWarnings((PackReport *)(v2 + 80)) )
{
    else
      result = PackReport::hasErrors(v4);
  }
  else
  {
    result = 0;
  return result;
}


signed int __fastcall PackReport::hasWarnings(PackReport *this)
{
  __int64 v1; // r1@1
  signed int result; // r0@1

  v1 = *((_QWORD *)this + 3);
  result = 0;
  if ( (_DWORD)v1 != HIDWORD(v1) )
    result = 1;
  return result;
}


int __fastcall PackReport::setUpgraded(int result, bool a2)
{
  *(_BYTE *)(result + 8) = a2;
  return result;
}


int __fastcall PackReport::setAttemptedUpgrade(int result)
{
  *(_BYTE *)(result + 9) = 1;
  return result;
}


int __fastcall PackReport::setPackType(int result, char a2)
{
  *(_BYTE *)(result + 96) = a2;
  return result;
}


void __fastcall PackReport::serializeEventErrorMessages(PackReport *this, int a2)
{
  PackReport::serializeEventErrorMessages(this, a2);
}


int __fastcall PackReport::PackReport(int a1)
{
  int v1; // r4@1
  int v2; // r5@1

  v1 = a1;
  *(_DWORD *)a1 = &unk_28898CC;
  *(_DWORD *)(a1 + 4) = 0;
  *(_WORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  v2 = a1 + 12;
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 12) = 0;
  *(_DWORD *)(v2 + 16) = 0;
  *(_DWORD *)(v2 + 20) = 0;
  *(_DWORD *)(v2 + 24) = &unk_28898CC;
  *(_DWORD *)(v2 + 28) = &unk_28898CC;
  PackIdVersion::PackIdVersion((PackIdVersion *)(a1 + 48));
  *(_BYTE *)(v1 + 96) = 0;
  return v1;
}


char *__fastcall PackReport::getIdentity(PackReport *this)
{
  return (char *)this + 48;
}


int *__fastcall PackReport::setOriginalIdentity(int a1, int *a2, int *a3)
{
  int v3; // r5@1
  int *v4; // r4@1

  v3 = a1;
  v4 = a3;
  EntityInteraction::setInteractText((int *)(a1 + 36), a2);
  return EntityInteraction::setInteractText((int *)(v3 + 40), v4);
}


int __fastcall PackReport::setLocation(PackReport *this, const ResourceLocation *a2)
{
  const ResourceLocation *v2; // r4@1
  PackReport *v3; // r5@1
  int result; // r0@1

  v2 = a2;
  v3 = this;
  EntityInteraction::setInteractText((int *)this, (int *)a2);
  result = *((_DWORD *)v2 + 1);
  *((_DWORD *)v3 + 1) = result;
  return result;
}


char *__fastcall PackReport::getWarnings(PackReport *this)
{
  return (char *)this + 24;
}


  if ( PackReport::hasErrors((*a1)[5], 3) == 1 )
{
    v5 = v2[1];
    v6 = v2[5];
    v7 = *(void (__cdecl **)(int))(*(_DWORD *)v5 + 48);
LABEL_215:
    v7(v5);
    goto LABEL_216;
  }
  if ( PackReport::hasErrors((PackReport *)v2[5]) )
  {
    v8 = (PackReport *)v2[5];
    v9 = PackReport::getErrors((PackReport *)v2[5]);
    if ( (*(_QWORD *)v9 >> 32) - (unsigned int)*(_QWORD *)v9 != 8 )
      goto LABEL_214;
    v10 = PackReport::getErrors(v8);
    if ( PackError::getPackErrorType(**(PackError ***)v10) != 2 )
    v11 = PackReport::getErrors(v8);
    if ( PackError::getErrorValue(**(PackError ***)v11) != 4 || PackManifest::getManifestOrigin(v4) != 1 )
    v185 = 0;
    std::__shared_ptr<bool,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<bool>,bool>(
      (int)&v186,
      (int)&v183,
      &v185);
    ZipUtils::UnzipSettings::UnzipSettings((ZipUtils::UnzipSettings *)&v183);
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v12 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v12 = &ServiceLocator<AppPlatform>::mDefaultService;
    v23 = v2[8];
    v184 = (*(int (**)(void))(**(_DWORD **)v12 + 316))();
    v181 = 0LL;
    v182 = 0;
    ZipUtils::UnzipSettings::UnzipSettings((ZipUtils::UnzipSettings *)&v180, (const ZipUtils::UnzipSettings *)&v183);
    v138 = v2 + 9;
    v24 = ZipUtils::getFilenames(v2 + 9, (int)&v181, (int)&v180);
    ZipUtils::UnzipSettings::~UnzipSettings((ZipUtils::UnzipSettings *)&v180);
    sub_119C854((int *)&s1, (int *)&Util::EMPTY_STRING);
    v25 = v24 ^ 1;
    v139 = (int *)HIDWORD(v181);
    v26 = (int *)v181;
    if ( (_DWORD)v181 != HIDWORD(v181) )
    {
      do
      {
        Util::split((int)&ptr, v26, 47);
        v27 = v3;
        v28 = *(_QWORD *)&ptr;
        v29 = ptr;
        v30 = ptr;
        if ( ptr != v178 )
        {
          do
          {
            v33 = (int *)(*v29 - 12);
            if ( v33 != &dword_28898C0 )
            {
              v31 = (unsigned int *)(*v29 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v32 = __ldrex(v31);
                while ( __strex(v32 - 1, v31) );
              }
              else
                v32 = (*v31)--;
              if ( v32 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v33);
            }
            ++v29;
          }
          while ( v29 != (_DWORD *)HIDWORD(v28) );
          v30 = ptr;
        }
        v3 = v27;
        if ( v30 )
          operator delete(v30);
        if ( HIDWORD(v28) - (_DWORD)v28 == 4 )
          v34 = *((_DWORD *)s1 - 3);
          if ( v34 != *((_DWORD *)Util::EMPTY_STRING - 3) || memcmp(s1, Util::EMPTY_STRING, v34) )
            v25 = 1;
            break;
          EntityInteraction::setInteractText((int *)&s1, v26);
        ++v26;
      }
      while ( v26 != v139 );
    }
    v35 = 0;
    v36 = (char *)s1;
    v37 = *((_DWORD *)s1 - 3);
    v38 = 0;
    if ( v37 == *((_DWORD *)Util::EMPTY_STRING - 3) )
      v39 = memcmp(s1, Util::EMPTY_STRING, v37) == 0;
      v38 = 0;
      if ( v39 )
        v38 = 1;
    v40 = v38 ^ 1;
    if ( !v25 )
      v35 = 1;
    v140 = v40 & v35;
    if ( (v40 & v35) == 1 )
      v173 = *(_DWORD *)(v3 + 72);
      v174 = *(_DWORD *)(v173 - 12);
      v171 = *v138;
      v172 = *(_DWORD *)(v171 - 12);
      Core::PathBuffer<Core::StackString<char,1024u>>::getEntryNameWithoutExtension((int)&v196, (__int64 *)&v171);
      v41 = v198;
      Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v202, (int)&v173, 1);
      v190 = &v203;
      v191 = v204;
      v193 = v41;
      v192 = &v197;
      Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v199, (int)&v190, 2);
      LODWORD(v175) = &v200;
      HIDWORD(v175) = v201;
      Core::FileSystem::getUniqueFilePathForDirectory((int)&v194, &v175);
      sub_119C884((void **)&v176, (const char *)&v195);
      v167 = v176;
      v168 = *(_DWORD *)(v176 - 12);
      Core::FileSystem::createDirectoryRecursively((int)&v169, (__int64 *)&v167);
      if ( v170 )
        v170();
      v156 = v2[1];
      v42 = TaskGroup::DISK;
      v43 = v2[2];
      v157 = v43;
      if ( v43 )
        v44 = (unsigned int *)(v43 + 4);
        if ( &pthread_create )
          __dmb();
            v45 = __ldrex(v44);
          while ( __strex(v45 + 1, v44) );
        else
          ++*v44;
      v158 = v186;
      v159 = v187;
      if ( v187 )
        v46 = (unsigned int *)(v187 + 4);
            v47 = __ldrex(v46);
          while ( __strex(v47 + 1, v46) );
          ++*v46;
      sub_119C854((int *)&v160, v2 + 7);
      v161 = v2[8];
      sub_119C854(&v162, v138);
      sub_119C854((int *)&v163, &v176);
      ZipUtils::UnzipSettings::UnzipSettings((ZipUtils::UnzipSettings *)&v164, (const ZipUtils::UnzipSettings *)&v183);
      v166 = 0;
      v48 = operator new(0x5Cu);
      v49 = (int)v48;
      *v48 = v156;
      v50 = v157;
      v157 = 0;
      v156 = 0;
      v48[1] = v50;
      v48[2] = v158;
      v51 = v159;
      v159 = 0;
      v158 = 0;
      v48[3] = v51;
      v52 = v160;
      v160 = &unk_28898CC;
      v53 = v161;
      *(_DWORD *)(v49 + 16) = v52;
      *(_DWORD *)(v49 + 20) = v53;
      sub_119C854((int *)(v49 + 24), &v162);
      *(_DWORD *)(v49 + 28) = v163;
      v163 = (char *)&unk_28898CC;
      ZipUtils::UnzipSettings::UnzipSettings(
        (ZipUtils::UnzipSettings *)(v49 + 32),
        (const ZipUtils::UnzipSettings *)&v164);
      HIDWORD(v54) = sub_F55734;
      v165 = v49;
      LODWORD(v54) = sub_F5589C;
      *(_QWORD *)&v166 = v54;
      v141 = v2[1];
      v55 = v2[2];
      v142 = v55;
      if ( v55 )
        v56 = (unsigned int *)(v55 + 4);
            v57 = __ldrex(v56);
          while ( __strex(v57 + 1, v56) );
          ++*v56;
      v143 = v186;
      v144 = v187;
        v58 = (unsigned int *)(v187 + 4);
            v59 = __ldrex(v58);
          while ( __strex(v59 + 1, v58) );
          ++*v58;
      v145 = v2[3];
      v60 = v2[4];
      v146 = v60;
      if ( v60 )
        v61 = (unsigned int *)(v60 + 4);
            v62 = __ldrex(v61);
          while ( __strex(v62 + 1, v61) );
          ++*v61;
      v147 = v2[5];
      v63 = v2[6];
      v148 = v63;
      if ( v63 )
        v64 = (unsigned int *)(v63 + 4);
            v65 = __ldrex(v64);
          while ( __strex(v65 + 1, v64) );
          ++*v64;
      sub_119C854(&v149, v138);
      sub_119C854((int *)&v150, &v176);
      sub_119C854((int *)&v151, (int *)&s1);
      v152 = *((_BYTE *)v2 + 41);
      v154 = 0;
      v66 = operator new(0x34u);
      *(_DWORD *)v66 = v3;
      *((_DWORD *)v66 + 1) = v141;
      *((_DWORD *)v66 + 2) = v142;
      *((_DWORD *)v66 + 3) = v143;
      *((_DWORD *)v66 + 4) = v144;
      *((_DWORD *)v66 + 5) = v145;
      *((_DWORD *)v66 + 6) = v146;
      *((_DWORD *)v66 + 7) = v147;
      *((_DWORD *)v66 + 8) = v148;
      sub_119C854((int *)v66 + 9, &v149);
      *((_DWORD *)v66 + 10) = v150;
      v153 = v66;
      v150 = (char *)&unk_28898CC;
      v67 = v151;
      v151 = &unk_28898CC;
      *((_DWORD *)v66 + 11) = v67;
      *((_BYTE *)v66 + 48) = v152;
      v154 = (void (*)(void))sub_F56094;
      v155 = sub_F55D74;
      TaskGroup::queue(v42, (int)&v165, (int)&v153, 1u, 0xFFFFFFFF);
      if ( v154 )
        v154();
      v68 = (char *)v151 - 12;
      if ( (int *)((char *)v151 - 12) != &dword_28898C0 )
        v124 = (unsigned int *)((char *)v151 - 4);
            v125 = __ldrex(v124);
          while ( __strex(v125 - 1, v124) );
          v125 = (*v124)--;
        if ( v125 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v68);
      v69 = v150 - 12;
      if ( (int *)(v150 - 12) != &dword_28898C0 )
        v126 = (unsigned int *)(v150 - 4);
            v127 = __ldrex(v126);
          while ( __strex(v127 - 1, v126) );
          v127 = (*v126)--;
        if ( v127 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v69);
      v70 = (void *)(v149 - 12);
      if ( (int *)(v149 - 12) != &dword_28898C0 )
        v128 = (unsigned int *)(v149 - 4);
            v129 = __ldrex(v128);
          while ( __strex(v129 - 1, v128) );
          v129 = (*v128)--;
        if ( v129 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v70);
      if ( v166 )
        v166();
      ZipUtils::UnzipSettings::~UnzipSettings((ZipUtils::UnzipSettings *)&v164);
      v95 = v163 - 12;
      if ( (int *)(v163 - 12) != &dword_28898C0 )
        v130 = (unsigned int *)(v163 - 4);
            v131 = __ldrex(v130);
          while ( __strex(v131 - 1, v130) );
          v131 = (*v130)--;
        if ( v131 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v95);
      v96 = (void *)(v162 - 12);
      if ( (int *)(v162 - 12) != &dword_28898C0 )
        v132 = (unsigned int *)(v162 - 4);
            v133 = __ldrex(v132);
          while ( __strex(v133 - 1, v132) );
          v133 = (*v132)--;
        if ( v133 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v96);
      v97 = (char *)v160 - 12;
      if ( (int *)((char *)v160 - 12) != &dword_28898C0 )
        v134 = (unsigned int *)((char *)v160 - 4);
            v135 = __ldrex(v134);
          while ( __strex(v135 - 1, v134) );
          v135 = (*v134)--;
        if ( v135 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v97);
      v98 = v159;
      if ( v159 )
        v99 = (unsigned int *)(v159 + 4);
            v100 = __ldrex(v99);
          while ( __strex(v100 - 1, v99) );
          v100 = (*v99)--;
        if ( v100 == 1 )
          v101 = (unsigned int *)(v98 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v98 + 8))(v98);
          if ( &pthread_create )
            __dmb();
            do
              v102 = __ldrex(v101);
            while ( __strex(v102 - 1, v101) );
          else
            v102 = (*v101)--;
          if ( v102 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v98 + 12))(v98);
      v103 = v157;
      if ( v157 )
        v104 = (unsigned int *)(v157 + 4);
            v105 = __ldrex(v104);
          while ( __strex(v105 - 1, v104) );
          v105 = (*v104)--;
        if ( v105 == 1 )
          v106 = (unsigned int *)(v103 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v103 + 8))(v103);
              v107 = __ldrex(v106);
            while ( __strex(v107 - 1, v106) );
            v107 = (*v106)--;
          if ( v107 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v103 + 12))(v103);
      v108 = (void *)(v176 - 12);
      if ( (int *)(v176 - 12) != &dword_28898C0 )
        v136 = (unsigned int *)(v176 - 4);
            v137 = __ldrex(v136);
          while ( __strex(v137 - 1, v136) );
          v137 = (*v136)--;
        if ( v137 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v108);
      v36 = (char *)s1;
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v122 = (unsigned int *)(v36 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v123 = __ldrex(v122);
        while ( __strex(v123 - 1, v122) );
      else
        v123 = (*v122)--;
      if ( v123 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v36 - 12);
    v110 = (void *)HIDWORD(v181);
    v109 = (void *)v181;
        v113 = (int *)(*(_DWORD *)v109 - 12);
        if ( v113 != &dword_28898C0 )
          v111 = (unsigned int *)(*(_DWORD *)v109 - 4);
              v112 = __ldrex(v111);
            while ( __strex(v112 - 1, v111) );
            v112 = (*v111)--;
          if ( v112 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v113);
        v109 = (char *)v109 + 4;
      while ( v109 != v110 );
      v109 = (void *)v181;
    v1 = &v204;
    if ( v109 )
      operator delete(v109);
    ZipUtils::UnzipSettings::~UnzipSettings((ZipUtils::UnzipSettings *)&v183);
    v114 = v187;
    if ( v187 )
      v115 = (unsigned int *)(v187 + 4);
          v116 = __ldrex(v115);
        while ( __strex(v116 - 1, v115) );
        v116 = (*v115)--;
      if ( v116 == 1 )
        v117 = (unsigned int *)(v114 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v114 + 8))(v114);
            v118 = __ldrex(v117);
          while ( __strex(v118 - 1, v117) );
          v118 = (*v117)--;
        v1 = &v204;
        if ( v118 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v114 + 12))(v114);
    if ( !v140 )
  else
    (*(void (**)(void))(*(_DWORD *)v2[1] + 36))();
    if ( ExternalContentManager::_packExists((ExternalContentManager *)v3, v4) == 1 )
      v5 = v2[1];
      v13 = v2[5];
      v7 = *(void (__cdecl **)(int))(*(_DWORD *)v5 + 48);
      goto LABEL_215;
    v14 = PackManifest::getPackType(v4);
    if ( v14 > 5 || !((1 << v14) & 0x2E) )
LABEL_214:
      v119 = v2[5];
    v188 = v2[1];
    v15 = v2[2];
    v189 = v15;
    if ( v15 )
      v16 = (unsigned int *)(v15 + 4);
          v17 = __ldrex(v16);
        while ( __strex(v17 + 1, v16) );
        ++*v16;
    ExternalContentManager::_importMCPack(v3, (int)&v188, (int)(v2 + 7), v4, (PackReport *)v2[5], *((_BYTE *)v2 + 40));
    v18 = v189;
    if ( v189 )
      v19 = (unsigned int *)(v189 + 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 == 1 )
        v21 = (unsigned int *)(v18 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
          v22 = (*v21)--;
        if ( v22 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
LABEL_216:
  ExternalContentManager::_packImportCompleted((ExternalContentManager *)v3);
  v120 = (RakNet *)v1[1];
  result = (char *)(_stack_chk_guard - v120);
  if ( _stack_chk_guard != v120 )
    _stack_chk_fail(result);
  return result;
}


signed int __fastcall PackReport::deserialize(PackReport *this, const Json::Value *a2)
{
  const Json::Value *v2; // r5@1
  PackReport *v3; // r4@1
  Json::Value *v4; // r0@1
  const Json::Value *v5; // r0@1
  void *v6; // r5@1
  int v7; // r0@2
  const Json::Value *v8; // r6@2
  Json::Value *v9; // r0@2
  int v10; // r0@2
  __int64 v11; // r0@3
  int v12; // r8@6
  unsigned int *v13; // r1@7
  unsigned int v14; // r0@9
  unsigned int *v15; // r6@13
  unsigned int v16; // r0@15
  void *v17; // r5@21
  signed int result; // r0@21
  int v19; // r0@22
  const Json::Value *v20; // r7@22
  Json::Value *v21; // r0@22
  int v22; // r0@22
  __int64 v23; // r0@23
  int v24; // r9@26
  unsigned int *v25; // r1@27
  unsigned int v26; // r0@29
  unsigned int *v27; // r7@33
  unsigned int v28; // r0@35
  const Json::Value *v29; // [sp+4h] [bp-5Ch]@1
  PackError *v30; // [sp+Ch] [bp-54h]@22
  int v31; // [sp+10h] [bp-50h]@24
  char v32; // [sp+14h] [bp-4Ch]@21
  char v33; // [sp+1Ch] [bp-44h]@21
  PackError *v34; // [sp+24h] [bp-3Ch]@2
  int v35; // [sp+28h] [bp-38h]@4
  char v36; // [sp+2Ch] [bp-34h]@1
  char v37; // [sp+34h] [bp-2Ch]@1

  v2 = a2;
  v3 = this;
  v29 = a2;
  v4 = (Json::Value *)Json::Value::operator[]((int)a2, "upgraded");
  *((_BYTE *)v3 + 8) = Json::Value::asBool(v4, 0);
  v5 = (const Json::Value *)Json::Value::operator[]((int)v2, "location");
  ResourceLocation::deserialize(v3, v5);
  v6 = Json::Value::operator[]((int)v2, "warnings");
  Json::Value::begin((Json::Value *)&v37, (int)v6);
  Json::Value::end((Json::Value *)&v36, (int)v6);
  while ( !Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v37, (const Json::ValueIteratorBase *)&v36) )
  {
    v7 = Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v37);
    v8 = (const Json::Value *)v7;
    v9 = (Json::Value *)Json::Value::operator[](v7, "type");
    v10 = Json::Value::asInt(v9, 0);
    PackErrorFactory::createPackError((int)&v34, v10);
    if ( v34 )
    {
      PackError::deserialize(v34, v8);
      v11 = *(_QWORD *)((char *)v3 + 28);
      if ( (_DWORD)v11 == HIDWORD(v11) )
      {
        std::vector<std::shared_ptr<PackError>,std::allocator<std::shared_ptr<PackError>>>::_M_emplace_back_aux<std::shared_ptr<PackError>>(
          (_QWORD *)v3 + 3,
          (int)&v34);
      }
      else
        *(_DWORD *)v11 = v34;
        *(_DWORD *)(v11 + 4) = 0;
        HIDWORD(v11) = v35;
        v35 = 0;
        *(_DWORD *)(v11 + 4) = HIDWORD(v11);
        v34 = 0;
        *((_DWORD *)v3 + 7) = v11 + 8;
    }
    v12 = v35;
    if ( v35 )
      v13 = (unsigned int *)(v35 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        v15 = (unsigned int *)(v12 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
        if ( &pthread_create )
        {
          __dmb();
          do
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
        }
        else
          v16 = (*v15)--;
        if ( v16 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
    Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v37);
  }
  v17 = Json::Value::operator[]((int)v29, "errors");
  Json::Value::begin((Json::Value *)&v33, (int)v17);
  Json::Value::end((Json::Value *)&v32, (int)v17);
  for ( result = Json::ValueIteratorBase::isEqual(
                   (Json::ValueIteratorBase *)&v33,
                   (const Json::ValueIteratorBase *)&v32);
        !result;
        result = Json::ValueIteratorBase::isEqual(
                   (const Json::ValueIteratorBase *)&v32) )
    v19 = Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v33);
    v20 = (const Json::Value *)v19;
    v21 = (Json::Value *)Json::Value::operator[](v19, "type");
    v22 = Json::Value::asInt(v21, 0);
    PackErrorFactory::createPackError((int)&v30, v22);
    if ( v30 )
      PackError::deserialize(v30, v20);
      v23 = *((_QWORD *)v3 + 2);
      if ( (_DWORD)v23 == HIDWORD(v23) )
          (PackReport *)((char *)v3 + 12),
          (int)&v30);
        *(_DWORD *)v23 = v30;
        *(_DWORD *)(v23 + 4) = 0;
        HIDWORD(v23) = v31;
        v31 = 0;
        *(_DWORD *)(v23 + 4) = HIDWORD(v23);
        v30 = 0;
        *((_DWORD *)v3 + 4) = v23 + 8;
    v24 = v31;
    if ( v31 )
      v25 = (unsigned int *)(v31 + 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 == 1 )
        v27 = (unsigned int *)(v24 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 8))(v24);
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
          v28 = (*v27)--;
        if ( v28 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 12))(v24);
    Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v33);
  return result;
}


signed int __fastcall PackReport::hasErrors(int a1, int a2)
{
  int v2; // r2@1
  int v3; // r12@1
  int v4; // r0@1
  int v5; // lr@2
  bool v6; // zf@3
  int v7; // r3@3
  int v8; // r0@6
  bool v9; // zf@6
  int v10; // r0@11
  signed int result; // r0@23

  v3 = *(_QWORD *)(a1 + 12) >> 32;
  v2 = *(_QWORD *)(a1 + 12);
  v4 = (v3 - v2) >> 5;
  if ( v4 < 1 )
  {
LABEL_10:
    if ( 1 == (v3 - v2) >> 3 )
    {
      v7 = v2;
    }
    else
      v10 = (v3 - v2) >> 3;
      if ( v10 == 2 )
      {
        v7 = v2;
      }
      else
        if ( v10 != 3 )
        {
          v7 = v3;
          goto LABEL_23;
        }
        if ( *(_DWORD *)(*(_DWORD *)v2 + 20) == a2 )
        v7 = v2 + 8;
      if ( *(_DWORD *)(*(_DWORD *)v7 + 20) == a2 )
        goto LABEL_23;
      v7 += 8;
    if ( *(_DWORD *)(*(_DWORD *)v7 + 20) != a2 )
      v7 = v3;
  }
  else
    v5 = v4 + 1;
    while ( 1 )
      v6 = *(_DWORD *)(*(_DWORD *)v2 + 20) == a2;
      if ( *(_DWORD *)(*(_DWORD *)v2 + 20) != a2 )
        v6 = *(_DWORD *)(*(_DWORD *)(v2 + 8) + 20) == a2;
      if ( v6 )
        break;
      v7 = v2 + 16;
      v8 = *(_DWORD *)(*(_DWORD *)(v2 + 16) + 20);
      v9 = v8 == a2;
      if ( v8 != a2 )
        v7 = v2 + 24;
        v9 = *(_DWORD *)(*(_DWORD *)(v2 + 24) + 20) == a2;
      if ( v9 )
      --v5;
      v2 += 32;
      if ( v5 <= 1 )
        goto LABEL_10;
LABEL_23:
  result = 0;
  if ( v7 != v3 )
    result = 1;
  return result;
}


void __fastcall PackReport::addError<UIPackError>(int a1, int a2)
{
  int v2; // r4@1
  __int64 v3; // r0@1
  int v4; // r4@4
  unsigned int *v5; // r1@5
  unsigned int v6; // r0@7
  unsigned int *v7; // r5@11
  unsigned int v8; // r0@13
  unsigned int v9; // [sp+4h] [bp-1Ch]@1
  int v10; // [sp+8h] [bp-18h]@2
  char v11; // [sp+Ch] [bp-14h]@1

  v2 = a1;
  std::__shared_ptr<UIPackError,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<UIPackError>,UIPackError const&>(
    (int)&v9,
    (int)&v11,
    a2);
  v3 = *(_QWORD *)(v2 + 16);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    std::vector<std::shared_ptr<PackError>,std::allocator<std::shared_ptr<PackError>>>::_M_emplace_back_aux<std::shared_ptr<UIPackError>>(
      (_QWORD *)(v2 + 12),
      (int)&v9);
  }
  else
    *(_QWORD *)v3 = v9;
    HIDWORD(v3) = v10;
    v10 = 0;
    *(_DWORD *)(v3 + 4) = HIDWORD(v3);
    v9 = 0;
    *(_DWORD *)(v2 + 16) = v3 + 8;
  v4 = v10;
  if ( v10 )
    v5 = (unsigned int *)(v10 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 == 1 )
      v7 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
}


unsigned int __fastcall PackReport::addError<PackDiscoveryError>(int a1, int a2)
{
  int v2; // r4@1
  __int64 v3; // r0@1
  unsigned int result; // r0@2
  int v5; // r4@4
  unsigned int *v6; // r1@5
  unsigned int *v7; // r5@11
  unsigned int v8; // [sp+4h] [bp-1Ch]@1
  int v9; // [sp+8h] [bp-18h]@2
  char v10; // [sp+Ch] [bp-14h]@1

  v2 = a1;
  std::__shared_ptr<PackDiscoveryError,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<PackDiscoveryError>,PackDiscoveryError const&>(
    (int)&v8,
    (int)&v10,
    a2);
  v3 = *(_QWORD *)(v2 + 16);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    result = std::vector<std::shared_ptr<PackError>,std::allocator<std::shared_ptr<PackError>>>::_M_emplace_back_aux<std::shared_ptr<PackDiscoveryError>>(
               (_QWORD *)(v2 + 12),
               (int)&v8);
  }
  else
    *(_QWORD *)v3 = v8;
    HIDWORD(v3) = v9;
    v9 = 0;
    *(_DWORD *)(v3 + 4) = HIDWORD(v3);
    result = v3 + 8;
    v8 = 0;
    *(_DWORD *)(v2 + 16) = result;
  v5 = v9;
  if ( v9 )
    v6 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v6);
      while ( __strex(result - 1, v6) );
    }
    else
      result = (*v6)--;
    if ( result == 1 )
      v7 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v7);
        while ( __strex(result - 1, v7) );
      }
      else
        result = (*v7)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return result;
}


char *__fastcall PackReport::getOriginalVersion(PackReport *this)
{
  return (char *)this + 40;
}


int *__fastcall PackReport::PackReport(int *a1, int *a2)
{
  int *v2; // r8@1
  int *v3; // r11@1
  char *v4; // r0@1
  __int64 v5; // r1@1
  signed int v6; // r1@1
  unsigned int v7; // r6@1
  int v8; // r1@4 OVERLAPPED
  int v9; // r2@4 OVERLAPPED
  int v10; // r12@5
  char *v11; // r3@5
  int v12; // r7@6
  unsigned int *v13; // r7@7
  unsigned int v14; // r4@9
  char *v15; // r0@14
  __int64 v16; // r1@14
  signed int v17; // r1@14
  unsigned int v18; // r6@14
  int v19; // r1@17 OVERLAPPED
  int v20; // r2@17 OVERLAPPED
  int v21; // r12@18
  char *v22; // r3@18
  int v23; // r7@19
  unsigned int *v24; // r7@20
  unsigned int v25; // r4@22
  int v26; // r12@27
  int v27; // r1@27
  int v28; // r2@27
  int v29; // r3@27

  v2 = a2;
  v3 = a1;
  sub_DA73B4(a1, a2);
  v3[1] = v2[1];
  *((_WORD *)v3 + 4) = *((_WORD *)v2 + 4);
  v4 = 0;
  v5 = *(_QWORD *)(v2 + 3);
  v3[3] = 0;
  v3[4] = 0;
  v6 = HIDWORD(v5) - v5;
  v3[5] = 0;
  v7 = v6 >> 3;
  if ( v6 >> 3 )
  {
    if ( v7 >= 0x20000000 )
      sub_DA7414();
    v4 = (char *)operator new(v6);
  }
  v3[3] = (int)v4;
  v3[4] = (int)v4;
  v3[5] = (int)&v4[8 * v7];
  *(_QWORD *)&v8 = *(_QWORD *)(v2 + 3);
  if ( v8 != v9 )
    v10 = -v8;
    v11 = v4;
    do
    {
      *(_DWORD *)v11 = *(_DWORD *)v8;
      v12 = *(_DWORD *)(v8 + 4);
      *((_DWORD *)v11 + 1) = v12;
      if ( v12 )
      {
        v13 = (unsigned int *)(v12 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 + 1, v13) );
        }
        else
          ++*v13;
      }
      v8 += 8;
      v11 += 8;
    }
    while ( v8 != v9 );
    v4 += ((v9 - 8 + v10) & 0xFFFFFFF8) + 8;
  v15 = 0;
  v16 = *((_QWORD *)v2 + 3);
  v3[6] = 0;
  v3[7] = 0;
  v17 = HIDWORD(v16) - v16;
  v3[8] = 0;
  v18 = v17 >> 3;
  if ( v17 >> 3 )
    if ( v18 >= 0x20000000 )
    v15 = (char *)operator new(v17);
  v3[6] = (int)v15;
  v3[7] = (int)v15;
  v3[8] = (int)&v15[8 * v18];
  *(_QWORD *)&v19 = *((_QWORD *)v2 + 3);
  if ( v19 != v20 )
    v21 = -v19;
    v22 = v15;
      *(_DWORD *)v22 = *(_DWORD *)v19;
      v23 = *(_DWORD *)(v19 + 4);
      *((_DWORD *)v22 + 1) = v23;
      if ( v23 )
        v24 = (unsigned int *)(v23 + 4);
            v25 = __ldrex(v24);
          while ( __strex(v25 + 1, v24) );
          ++*v24;
      v19 += 8;
      v22 += 8;
    while ( v19 != v20 );
    v15 += ((v20 - 8 + v21) & 0xFFFFFFF8) + 8;
  sub_DA73B4(v3 + 9, v2 + 9);
  sub_DA73B4(v3 + 10, v2 + 10);
  v26 = (int)(v3 + 12);
  v27 = v2[13];
  v28 = v2[14];
  v29 = v2[15];
  *(_DWORD *)v26 = v2[12];
  *(_DWORD *)(v26 + 4) = v27;
  *(_DWORD *)(v26 + 8) = v28;
  *(_DWORD *)(v26 + 12) = v29;
  SemVersion::SemVersion((int)(v3 + 16), (int)(v2 + 16));
  *((_BYTE *)v3 + 88) = *((_BYTE *)v2 + 88);
  *((_BYTE *)v3 + 96) = *((_BYTE *)v2 + 96);
  return v3;
}


int __fastcall PackReport::setIdentity(PackReport *this, const PackIdVersion *a2)
{
  const PackIdVersion *v2; // r5@1
  PackReport *v3; // r4@1
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
  v8 = (int)v3 + 48;
  *(_DWORD *)v8 = v4;
  *(_DWORD *)(v8 + 4) = v5;
  *(_DWORD *)(v8 + 8) = v6;
  *(_DWORD *)(v8 + 12) = v7;
  v9 = *((_DWORD *)v2 + 4);
  *((_WORD *)v3 + 34) = *((_WORD *)v2 + 10);
  *((_DWORD *)v3 + 16) = v9;
  EntityInteraction::setInteractText((int *)v3 + 18, (int *)v2 + 6);
  EntityInteraction::setInteractText((int *)v3 + 19, (int *)v2 + 7);
  EntityInteraction::setInteractText((int *)v3 + 20, (int *)v2 + 8);
  v10 = *((_WORD *)v2 + 18);
  *((_BYTE *)v3 + 86) = *((_BYTE *)v2 + 38);
  *((_WORD *)v3 + 42) = v10;
  result = *((_BYTE *)v2 + 40);
  *((_BYTE *)v3 + 88) = result;
  return result;
}


int __fastcall PackReport::clear(int result)
{
  int v1; // r9@1
  __int64 v2; // kr00_8@1
  int v3; // r4@2
  int v4; // r6@3
  unsigned int *v5; // r1@4
  unsigned int *v6; // r5@10
  __int64 v7; // kr08_8@18
  int v8; // r4@19
  int v9; // r6@20
  unsigned int *v10; // r1@21
  unsigned int *v11; // r5@27

  v1 = result;
  v2 = *(_QWORD *)(result + 12);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = v2;
    result = (int)&pthread_create_ptr;
    do
    {
      v4 = *(_DWORD *)(v3 + 4);
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = __ldrex(v5);
          while ( __strex(result - 1, v5) );
        }
        else
          result = (*v5)--;
        if ( result == 1 )
          v6 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          if ( &pthread_create )
          {
            __dmb();
            do
              result = __ldrex(v6);
            while ( __strex(result - 1, v6) );
          }
          else
            result = (*v6)--;
          if ( result == 1 )
            result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
      }
      v3 += 8;
    }
    while ( v3 != HIDWORD(v2) );
  }
  *(_DWORD *)(v1 + 16) = v2;
  v7 = *(_QWORD *)(v1 + 24);
  if ( HIDWORD(v7) != (_DWORD)v7 )
    v8 = v7;
      v9 = *(_DWORD *)(v8 + 4);
      if ( v9 )
        v10 = (unsigned int *)(v9 + 4);
            result = __ldrex(v10);
          while ( __strex(result - 1, v10) );
          result = (*v10)--;
          v11 = (unsigned int *)(v9 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
              result = __ldrex(v11);
            while ( __strex(result - 1, v11) );
            result = (*v11)--;
            result = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
      v8 += 8;
    while ( v8 != HIDWORD(v7) );
  *(_DWORD *)(v1 + 28) = v7;
  return result;
}


char *__fastcall PackReport::getOriginalName(PackReport *this)
{
  return (char *)this + 36;
}


Json::Value *__fastcall PackReport::serialize(PackReport *this, Json::Value *a2)
{
  PackReport *v2; // r9@1
  Json::Value *v3; // r8@1
  __int64 i; // r4@1
  __int64 j; // r4@3
  int v6; // r0@5
  int v7; // r6@5
  int v8; // r0@5
  int v9; // r0@5
  int v11; // [sp+0h] [bp-80h]@5
  char v12; // [sp+10h] [bp-70h]@5
  char v13; // [sp+20h] [bp-60h]@4
  char v14; // [sp+30h] [bp-50h]@3
  char v15; // [sp+40h] [bp-40h]@2
  char v16; // [sp+50h] [bp-30h]@1

  v2 = this;
  v3 = a2;
  Json::Value::Value(&v16, 0);
  for ( i = *((_QWORD *)v2 + 3); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 8 )
  {
    Json::Value::Value(&v15, 0);
    PackError::serialize(*(PackError **)i, (Json::Value *)&v15);
    Json::Value::append((Json::Value *)&v16, (const Json::Value *)&v15);
    Json::Value::~Value((Json::Value *)&v15);
  }
  Json::Value::Value(&v14, 0);
  for ( j = *(_QWORD *)((char *)v2 + 12); HIDWORD(j) != (_DWORD)j; LODWORD(j) = j + 8 )
    Json::Value::Value(&v13, 0);
    PackError::serialize(*(PackError **)j, (Json::Value *)&v13);
    Json::Value::append((Json::Value *)&v14, (const Json::Value *)&v13);
    Json::Value::~Value((Json::Value *)&v13);
  Json::Value::Value(&v12, 0);
  ResourceLocation::serialize(v2, (Json::Value *)&v12);
  v6 = Json::Value::operator[](v3, "location");
  Json::Value::operator=(v6, (const Json::Value *)&v12);
  v7 = Json::Value::operator[](v3, "upgraded");
  Json::Value::Value((Json::Value *)&v11, *((_BYTE *)v2 + 8));
  Json::Value::operator=(v7, (const Json::Value *)&v11);
  Json::Value::~Value((Json::Value *)&v11);
  v8 = Json::Value::operator[](v3, "warnings");
  Json::Value::operator=(v8, (const Json::Value *)&v16);
  v9 = Json::Value::operator[](v3, "errors");
  Json::Value::operator=(v9, (const Json::Value *)&v14);
  Json::Value::~Value((Json::Value *)&v12);
  Json::Value::~Value((Json::Value *)&v14);
  return Json::Value::~Value((Json::Value *)&v16);
}


void __fastcall PackReport::addWarning<UIPackError>(int a1, int a2)
{
  PackReport::addWarning<UIPackError>(a1, a2);
}


unsigned int __fastcall PackReport::addWarning<PackDiscoveryError>(int a1, int a2)
{
  int v2; // r4@1
  __int64 v3; // r0@1
  unsigned int result; // r0@2
  int v5; // r4@4
  unsigned int *v6; // r1@5
  unsigned int *v7; // r5@11
  unsigned int v8; // [sp+4h] [bp-1Ch]@1
  int v9; // [sp+8h] [bp-18h]@2
  char v10; // [sp+Ch] [bp-14h]@1

  v2 = a1;
  std::__shared_ptr<PackDiscoveryError,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<PackDiscoveryError>,PackDiscoveryError const&>(
    (int)&v8,
    (int)&v10,
    a2);
  v3 = *(_QWORD *)(v2 + 28);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    result = std::vector<std::shared_ptr<PackError>,std::allocator<std::shared_ptr<PackError>>>::_M_emplace_back_aux<std::shared_ptr<PackDiscoveryError>>(
               (_QWORD *)(v2 + 24),
               (int)&v8);
  }
  else
    *(_QWORD *)v3 = v8;
    HIDWORD(v3) = v9;
    v9 = 0;
    *(_DWORD *)(v3 + 4) = HIDWORD(v3);
    result = v3 + 8;
    v8 = 0;
    *(_DWORD *)(v2 + 28) = result;
  v5 = v9;
  if ( v9 )
    v6 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v6);
      while ( __strex(result - 1, v6) );
    }
    else
      result = (*v6)--;
    if ( result == 1 )
      v7 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v7);
        while ( __strex(result - 1, v7) );
      }
      else
        result = (*v7)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return result;
}


int __fastcall PackReport::setUpgradeSuccess(int result)
{
  *(_BYTE *)(result + 8) = 1;
  return result;
}


int __fastcall PackReport::PackReport(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r12@1
  int v5; // r2@1
  int v6; // r2@1
  int v7; // r1@1
  int v8; // r1@1
  int v9; // r1@1
  int v10; // r2@1
  int v11; // r3@1

  v2 = a1;
  v3 = a2;
  v4 = a1 + 48;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)a2 = &unk_28898CC;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_WORD *)(a1 + 8) = *(_WORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = 0;
  v5 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 16) = v5;
  v6 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a2 + 20) = v6;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 24) = 0;
  v7 = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(v3 + 28);
  *(_DWORD *)(v3 + 28) = v7;
  v8 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(v3 + 32);
  *(_DWORD *)(v3 + 32) = v8;
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(v3 + 36);
  *(_DWORD *)(v3 + 36) = &unk_28898CC;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(v3 + 40);
  *(_DWORD *)(v3 + 40) = &unk_28898CC;
  v9 = *(_DWORD *)(v3 + 52);
  v10 = *(_DWORD *)(v3 + 56);
  v11 = *(_DWORD *)(v3 + 60);
  *(_DWORD *)v4 = *(_DWORD *)(v3 + 48);
  *(_DWORD *)(v4 + 4) = v9;
  *(_DWORD *)(v4 + 8) = v10;
  *(_DWORD *)(v4 + 12) = v11;
  SemVersion::SemVersion(a1 + 64, v3 + 64);
  *(_BYTE *)(v2 + 88) = *(_BYTE *)(v3 + 88);
  *(_BYTE *)(v2 + 96) = *(_BYTE *)(v3 + 96);
  return v2;
}


void __fastcall PackReport::addWarning<UIPackError>(int a1, int a2)
{
  int v2; // r4@1
  __int64 v3; // r0@1
  int v4; // r4@4
  unsigned int *v5; // r1@5
  unsigned int v6; // r0@7
  unsigned int *v7; // r5@11
  unsigned int v8; // r0@13
  unsigned int v9; // [sp+4h] [bp-1Ch]@1
  int v10; // [sp+8h] [bp-18h]@2
  char v11; // [sp+Ch] [bp-14h]@1

  v2 = a1;
  std::__shared_ptr<UIPackError,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<UIPackError>,UIPackError const&>(
    (int)&v9,
    (int)&v11,
    a2);
  v3 = *(_QWORD *)(v2 + 28);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    std::vector<std::shared_ptr<PackError>,std::allocator<std::shared_ptr<PackError>>>::_M_emplace_back_aux<std::shared_ptr<UIPackError>>(
      (_QWORD *)(v2 + 24),
      (int)&v9);
  }
  else
    *(_QWORD *)v3 = v9;
    HIDWORD(v3) = v10;
    v10 = 0;
    *(_DWORD *)(v3 + 4) = HIDWORD(v3);
    v9 = 0;
    *(_DWORD *)(v2 + 28) = v3 + 8;
  v4 = v10;
  if ( v10 )
    v5 = (unsigned int *)(v10 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 == 1 )
      v7 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
}


PackReport *__fastcall PackReport::~PackReport(PackReport *this)
{
  PackReport *v1; // r8@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  int v10; // r1@5
  void *v11; // r0@5
  int v12; // r5@6
  int v13; // r7@6
  int v14; // r4@7
  unsigned int *v15; // r1@8
  unsigned int v16; // r0@10
  unsigned int *v17; // r6@14
  unsigned int v18; // r0@16
  int v19; // r5@25
  int v20; // r7@25
  int v21; // r4@26
  unsigned int *v22; // r1@27
  unsigned int v23; // r0@29
  unsigned int *v24; // r6@33
  unsigned int v25; // r0@35
  int *v26; // r0@44
  unsigned int *v28; // r2@46
  signed int v29; // r1@48
  unsigned int *v30; // r2@50
  signed int v31; // r1@52
  unsigned int *v32; // r2@54
  signed int v33; // r1@56
  unsigned int *v34; // r2@58
  signed int v35; // r1@60
  unsigned int *v36; // r2@62
  signed int v37; // r1@64
  unsigned int *v38; // r2@66
  signed int v39; // r1@68

  v1 = this;
  v2 = *((_DWORD *)this + 20);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v28 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 19);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v4 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 18);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v6 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 10);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v8 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  v10 = *((_DWORD *)v1 + 9);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v10 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  v13 = *((_QWORD *)v1 + 3) >> 32;
  v12 = *((_QWORD *)v1 + 3);
  if ( v12 != v13 )
    do
      v14 = *(_DWORD *)(v12 + 4);
      if ( v14 )
      {
        v15 = (unsigned int *)(v14 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
        }
        else
          v16 = (*v15)--;
        if ( v16 == 1 )
          v17 = (unsigned int *)(v14 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          if ( &pthread_create )
          {
            __dmb();
            do
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
          }
          else
            v18 = (*v17)--;
          if ( v18 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
      }
      v12 += 8;
    while ( v12 != v13 );
    v12 = *((_DWORD *)v1 + 6);
  if ( v12 )
    operator delete((void *)v12);
  v20 = *(_QWORD *)((char *)v1 + 12) >> 32;
  v19 = *(_QWORD *)((char *)v1 + 12);
  if ( v19 != v20 )
      v21 = *(_DWORD *)(v19 + 4);
      if ( v21 )
        v22 = (unsigned int *)(v21 + 4);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 == 1 )
          v24 = (unsigned int *)(v21 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
              v25 = __ldrex(v24);
            while ( __strex(v25 - 1, v24) );
            v25 = (*v24)--;
          if ( v25 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
      v19 += 8;
    while ( v19 != v20 );
    v19 = *((_DWORD *)v1 + 3);
  if ( v19 )
    operator delete((void *)v19);
  v26 = (int *)(*(_DWORD *)v1 - 12);
  if ( v26 != &dword_28898C0 )
    v38 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j_j__ZdlPv_9(v26);
  return v1;
}


void __fastcall PackReport::serializeEventErrorMessages(PackReport *this, int a2)
{
  const void **v2; // r10@1
  int v3; // r9@1
  int *v4; // r5@1
  int *i; // r7@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  void *v8; // r0@11
  int *v9; // r6@13
  int *j; // r7@13
  unsigned int *v11; // r2@15
  signed int v12; // r1@17
  void *v13; // r0@23
  int v14; // [sp+0h] [bp-40h]@15
  int v15; // [sp+4h] [bp-3Ch]@3

  v2 = (const void **)this;
  v3 = a2;
  *(_DWORD *)this = &unk_28898CC;
  v4 = (int *)(*(_QWORD *)(a2 + 24) >> 32);
  for ( i = (int *)*(_QWORD *)(a2 + 24); i != v4; i += 2 )
  {
    PackError::getEventErrorMessage((PackError *)&v15, *i);
    sub_21E72F0(v2, (const void **)&v15);
    v8 = (void *)(v15 - 12);
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
        j_j_j_j__ZdlPv_9(v8);
    }
  }
  v9 = (int *)(*(_QWORD *)(v3 + 12) >> 32);
  for ( j = (int *)*(_QWORD *)(v3 + 12); j != v9; j += 2 )
    PackError::getEventErrorMessage((PackError *)&v14, *j);
    sub_21E72F0(v2, (const void **)&v14);
    v13 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v14 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
}


int __fastcall PackReport::merge(int a1, unsigned int a2)
{
  int v2; // r4@1
  unsigned int v3; // r8@1
  unsigned int v4; // r0@1
  unsigned int v5; // r2@2
  int v6; // r5@8
  signed int v7; // r0@8
  int v8; // r6@9
  __int64 v9; // r0@10
  int v10; // r5@14
  int result; // r0@14
  int v12; // r6@15
  __int64 v13; // r0@16

  v2 = a1;
  v3 = a2;
  v4 = *(_WORD *)(a1 + 8);
  if ( (_BYTE)v4 )
  {
    LOBYTE(a2) = *(_BYTE *)(a2 + 9);
    LOBYTE(v5) = 1;
  }
  else
    v5 = *(_WORD *)(a2 + 8);
    a2 = v5 >> 8;
  *(_BYTE *)(v2 + 8) = v5;
  if ( v4 >= 0x100 )
    LOBYTE(a2) = 1;
  *(_BYTE *)(v2 + 9) = a2;
  if ( !*(_DWORD *)(*(_DWORD *)v2 - 12) )
    EntityInteraction::setInteractText((int *)v2, (int *)v3);
    *(_DWORD *)(v2 + 4) = *(_DWORD *)(v3 + 4);
  std::vector<std::shared_ptr<PackError>,std::allocator<std::shared_ptr<PackError>>>::reserve(
    v2 + 12,
    ((signed int)((*(_QWORD *)(v3 + 12) >> 32) - *(_QWORD *)(v3 + 12)) >> 3)
  + ((*(_DWORD *)(v2 + 16) - *(_DWORD *)(v2 + 12)) >> 3));
    v2 + 24,
    ((signed int)((*(_QWORD *)(v3 + 24) >> 32) - *(_QWORD *)(v3 + 24)) >> 3)
  + ((*(_DWORD *)(v2 + 28) - *(_DWORD *)(v2 + 24)) >> 3));
  v6 = *(_QWORD *)(v3 + 12);
  v7 = (*(_QWORD *)(v3 + 12) >> 32) - v6;
  if ( v7 >= 1 )
    v8 = (v7 >> 3) + 1;
    do
    {
      v9 = *(_QWORD *)(v2 + 16);
      if ( (_DWORD)v9 == HIDWORD(v9) )
      {
        std::vector<std::shared_ptr<PackError>,std::allocator<std::shared_ptr<PackError>>>::_M_emplace_back_aux<std::shared_ptr<PackError>>(
          (_QWORD *)(v2 + 12),
          v6);
      }
      else
        *(_QWORD *)v9 = *(_DWORD *)v6;
        HIDWORD(v9) = *(_DWORD *)(v6 + 4);
        *(_DWORD *)(v6 + 4) = 0;
        *(_DWORD *)(v9 + 4) = HIDWORD(v9);
        *(_DWORD *)v6 = 0;
        *(_DWORD *)(v2 + 16) = v9 + 8;
      --v8;
      v6 += 8;
    }
    while ( v8 > 1 );
  v10 = *(_QWORD *)(v3 + 24);
  result = (*(_QWORD *)(v3 + 24) >> 32) - v10;
  if ( result >= 1 )
    v12 = (result >> 3) + 1;
      v13 = *(_QWORD *)(v2 + 28);
      if ( (_DWORD)v13 == HIDWORD(v13) )
        result = std::vector<std::shared_ptr<PackError>,std::allocator<std::shared_ptr<PackError>>>::_M_emplace_back_aux<std::shared_ptr<PackError>>(
                   (_QWORD *)(v2 + 24),
                   v10);
        *(_QWORD *)v13 = *(_DWORD *)v10;
        HIDWORD(v13) = *(_DWORD *)(v10 + 4);
        *(_DWORD *)(v10 + 4) = 0;
        *(_DWORD *)(v13 + 4) = HIDWORD(v13);
        result = v13 + 8;
        *(_DWORD *)v10 = 0;
        *(_DWORD *)(v2 + 28) = result;
      --v12;
      v10 += 8;
    while ( v12 > 1 );
  return result;
}
