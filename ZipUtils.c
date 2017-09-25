

signed int __fastcall ZipUtils::unzip(int *a1, int *a2, int a3, int a4)
{
  int *v4; // r8@1
  int v5; // r6@1
  int *v6; // r7@1
  int v7; // r11@1
  __int64 v8; // r0@4
  ZlibFileAccessWrapper *v9; // r0@4
  int v10; // r5@4
  int v11; // r0@4
  int v12; // r9@4
  int v13; // r0@5
  int v14; // r1@5 OVERLAPPED
  signed int v15; // r7@5
  unsigned int v16; // r2@5
  int v17; // r0@8
  unsigned int v18; // r1@10
  unsigned int *v19; // r2@10
  void (*v20)(void); // r3@10
  void *v21; // r0@12
  unsigned int *v22; // r2@13
  signed int v23; // r1@15
  unsigned int v25; // r0@25
  const char *v26; // r5@26
  int *v27; // lr@26
  void *v28; // r0@27
  int v29; // r0@28
  int *v30; // r9@28
  int v31; // r5@28
  int v32; // r0@31
  int v33; // r1@31 OVERLAPPED
  int v34; // r5@31
  unsigned int v35; // r2@31
  int v36; // r0@34
  int v37; // r0@37
  int v38; // r5@37
  int v39; // r1@40
  char v40; // r5@40
  signed int v41; // r12@43
  int v42; // r1@48
  int v43; // r1@52
  int v44; // r2@52
  void (__fastcall *v45)(_DWORD, int); // r3@52
  signed int v46; // r5@52
  unsigned int *v47; // r2@53
  signed int v48; // r1@55
  void *v49; // r0@61
  void *v50; // r0@62
  __int64 v51; // r0@67
  int v52; // r1@67
  char v53; // r5@67
  int v54; // r1@70
  int v55; // r2@70
  void (__fastcall *v56)(_DWORD, int); // r3@70
  signed int v57; // r10@70
  signed int v58; // r1@73
  signed int v59; // r1@77
  signed int v60; // r4@85
  signed int v61; // r4@88
  void *v62; // r0@90
  int v63; // r2@94
  void (__fastcall *v64)(_DWORD, int); // r3@94
  unsigned __int8 v65; // r0@94
  int v66; // r1@94
  int v67; // r1@95
  int v68; // r2@95
  void (__fastcall *v69)(_DWORD, int); // r3@95
  signed int v70; // r0@95
  signed int v71; // r0@96
  int v72; // r1@96
  unsigned __int64 v73; // r2@96
  int v74; // r1@100
  int v75; // r2@100
  void (__fastcall *v76)(_DWORD, int); // r3@100
  int v77; // r1@101
  int v78; // r2@101
  void (__fastcall *v79)(_DWORD, int); // r3@101
  int v80; // r1@103
  int v81; // r2@103
  void (__fastcall *v82)(_DWORD, int); // r3@103
  signed int v83; // r4@103
  int *v84; // r9@109
  int *v85; // r10@109
  signed int v86; // r1@113
  int *v87; // r0@118
  signed int v88; // r1@127
  int v89; // r1@132
  int v90; // r2@132
  void (__fastcall *v91)(_DWORD, int); // r3@132
  char v92; // r4@136
  signed int v93; // [sp+30h] [bp-DA8h]@92
  unsigned int v94; // [sp+38h] [bp-DA0h]@26
  int (**v95)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+3Ch] [bp-D9Ch]@26
  int v96; // [sp+44h] [bp-D94h]@27
  unsigned int v97; // [sp+48h] [bp-D90h]@26
  int v98; // [sp+4Ch] [bp-D8Ch]@136
  int v99; // [sp+50h] [bp-D88h]@136
  char v100; // [sp+54h] [bp-D84h]@136
  void (__cdecl *v101)(char *); // [sp+5Ch] [bp-D7Ch]@136
  char v102; // [sp+64h] [bp-D74h]@136
  char v103; // [sp+68h] [bp-D70h]@101
  void (__cdecl *v104)(_DWORD); // [sp+70h] [bp-D68h]@101
  char v105; // [sp+7Ch] [bp-D5Ch]@98
  void (__fastcall *v106)(char *, char *, signed int); // [sp+84h] [bp-D54h]@98
  char v107; // [sp+8Ch] [bp-D4Ch]@98
  int v108; // [sp+90h] [bp-D48h]@94
  int v109; // [sp+94h] [bp-D44h]@94
  char v110; // [sp+98h] [bp-D40h]@94
  void (__cdecl *v111)(char *); // [sp+A0h] [bp-D38h]@106
  unsigned __int8 v112; // [sp+A8h] [bp-D30h]@94
  void *v113; // [sp+ACh] [bp-D2Ch]@94
  int v114; // [sp+B0h] [bp-D28h]@94
  __int64 v115; // [sp+B4h] [bp-D24h]@67
  char v116; // [sp+BCh] [bp-D1Ch]@67
  void (*v117)(void); // [sp+C4h] [bp-D14h]@67
  char v118; // [sp+CCh] [bp-D0Ch]@67
  int v119; // [sp+D0h] [bp-D08h]@67
  int v120; // [sp+D4h] [bp-D04h]@66
  int v121; // [sp+D8h] [bp-D00h]@66
  int *v122; // [sp+DCh] [bp-CFCh]@66
  int *v123; // [sp+E0h] [bp-CF8h]@66
  int v124; // [sp+E8h] [bp-CF0h]@45
  int v125; // [sp+ECh] [bp-CECh]@45
  int v126; // [sp+F0h] [bp-CE8h]@40
  int v127; // [sp+F4h] [bp-CE4h]@40
  char v128; // [sp+F8h] [bp-CE0h]@40
  void (*v129)(void); // [sp+100h] [bp-CD8h]@40
  char v130; // [sp+108h] [bp-CD0h]@40
  int v131; // [sp+10Ch] [bp-CCCh]@27
  int v132; // [sp+110h] [bp-CC8h]@27
  int v133; // [sp+118h] [bp-CC0h]@27
  char v134; // [sp+11Ch] [bp-CBCh]@132
  unsigned int v135; // [sp+16Ch] [bp-C6Ch]@10
  int v136; // [sp+174h] [bp-C64h]@5
  int v137; // [sp+178h] [bp-C60h]@5
  int v138; // [sp+17Ch] [bp-C5Ch]@5
  void *ptr; // [sp+180h] [bp-C58h]@4
  int v140; // [sp+188h] [bp-C50h]@3
  int v141; // [sp+18Ch] [bp-C4Ch]@3
  int v142; // [sp+190h] [bp-C48h]@2
  int v143; // [sp+194h] [bp-C44h]@2
  int v144; // [sp+198h] [bp-C40h]@1
  int v145; // [sp+19Ch] [bp-C3Ch]@1
  char v146; // [sp+1A8h] [bp-C30h]@26
  char v147; // [sp+5A8h] [bp-830h]@5
  int v148; // [sp+5ACh] [bp-82Ch]@5
  char v149; // [sp+9B0h] [bp-428h]@96
  RakNet *v150; // [sp+DB0h] [bp-28h]@1

  v4 = a1;
  v5 = a3;
  v6 = a2;
  v7 = a4;
  v150 = _stack_chk_guard;
  __dmb();
  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 4) = 0;
  v144 = *a2;
  v145 = *(_DWORD *)(v144 - 12);
  if ( Core::FileSystem::fileOrDirectoryExists((__int64 *)&v144) != 1
    || (v142 = *v6, v143 = *(_DWORD *)(v142 - 12), Core::FileSystem::directoryExists((__int64 *)&v142) != 1) )
  {
    v15 = -1;
  }
  else
    v140 = *v4;
    v141 = *(_DWORD *)(v140 - 12);
    if ( Core::FileSystem::fileOrDirectoryExists((__int64 *)&v140) == 1 )
    {
      HIDWORD(v8) = *(_DWORD *)(v7 + 52);
      LODWORD(v8) = &ptr;
      v9 = (ZlibFileAccessWrapper *)ZlibFileAccessWrapper::ZlibFileAccessWrapper(v8);
      v10 = *v4;
      v11 = ZlibFileAccessWrapper::getZipFunctions(v9);
      v12 = j_unzOpen(v10, v11);
      if ( v12 )
      {
        v136 = *v6;
        v137 = *(_DWORD *)(v136 - 12);
        File::cleanPath((int)&v147, (__int64 *)&v136);
        sub_21E94B4((void **)&v138, (const char *)&v148);
        v13 = v138;
        *(_QWORD *)&v14 = *(_QWORD *)(v138 - 12);
        v15 = v14 + 1;
        if ( v14 + 1 > v16 || *(_DWORD *)(v138 - 4) >= 1 )
        {
          sub_21E6FCC((const void **)&v138, v14 + 1);
          v13 = v138;
          v14 = *(_DWORD *)(v138 - 12);
        }
        *(_BYTE *)(v13 + v14) = 47;
        v17 = v138;
        if ( (int *)(v138 - 12) != &dword_28898C0 )
          *(_DWORD *)(v138 - 4) = 0;
          *(_DWORD *)(v17 - 12) = v15;
          *(_BYTE *)(v17 + v15) = byte_26C67B8[0];
        if ( j_unzGetGlobalInfo(v12, (int)&v135) )
          v15 = j_unzClose(v12, v18, (int)v19, (void (__fastcall *)(_DWORD, int))v20);
          goto LABEL_12;
        v25 = v135;
        __dmb();
        *(_DWORD *)(v5 + 4) = v25;
        if ( v135 )
          v26 = &v146;
          v27 = &dword_28898C0;
          v95 = &pthread_create;
          v97 = 0;
          v94 = 0;
          do
          {
            if ( j_unzGetCurrentFileInfo(v12, (int)&v134, (int)v26, 0x400u, 0, 0, 0, 0) )
            {
              v15 = j_unzClose(v12, v89, v90, v91);
              goto LABEL_12;
            }
            sub_21E94B4((void **)&v133, v26);
            sub_21E8AF4(&v131, &v138);
            sub_21E72F0((const void **)&v131, (const void **)&v133);
            ZipUtils::_zipEncodedPathToUTF8((void **)&v132, &v131);
            v96 = v12;
            v28 = (void *)(v131 - 12);
            if ( (int *)(v131 - 12) != v27 )
              v47 = (unsigned int *)(v131 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v48 = __ldrex(v47);
                while ( __strex(v48 - 1, v47) );
              }
              else
                v48 = (*v47)--;
              if ( v48 <= 0 )
                j_j_j_j__ZdlPv_9(v28);
            v29 = v133;
            v30 = v27;
            v31 = *(_DWORD *)(v133 - 12);
            if ( *(_DWORD *)(v133 - 4) >= 0 )
              sub_21E8010((const void **)&v133);
              v29 = v133;
            if ( *(_BYTE *)(v29 + v31 - 1) == 47 )
              v32 = v132;
              *(_QWORD *)&v33 = *(_QWORD *)(v132 - 12);
              v34 = v33 + 1;
              if ( v33 + 1 > v35 || *(_DWORD *)(v132 - 4) >= 1 )
                sub_21E6FCC((const void **)&v132, v33 + 1);
                v32 = v132;
                v33 = *(_DWORD *)(v132 - 12);
              *(_BYTE *)(v32 + v33) = 47;
              v36 = v132;
              if ( (int *)(v132 - 12) != v27 )
                *(_DWORD *)(v132 - 4) = 0;
                *(_DWORD *)(v36 - 12) = v34;
                *(_BYTE *)(v36 + v34) = byte_26C67B8[0];
            if ( ZipUtils::ZipFileRestrictions::allowFile(v7, &v132) != 1 )
              goto LABEL_46;
            v37 = v132;
            v38 = *(_DWORD *)(v132 - 12);
            if ( *(_DWORD *)(v132 - 4) >= 0 )
              sub_21E8010((const void **)&v132);
              v37 = v132;
            if ( *(_BYTE *)(v37 + v38 - 1) == 47 )
              v126 = v37;
              v127 = *(_DWORD *)(v37 - 12);
              Core::FileSystem::createDirectoryRecursively((int)&v128, (__int64 *)&v126);
              v40 = v130;
              v130 |= 2u;
              v20 = v129;
              if ( v129 )
                v129();
              if ( !(v40 & 1) )
                j_unzClose(v96, v39, (int)v19, (void (__fastcall *)(_DWORD, int))v20);
                v15 = -1;
                v41 = 1;
LABEL_60:
                v12 = v96;
                goto LABEL_61;
LABEL_46:
              v12 = v96;
LABEL_47:
              if ( v97 + 1 < v135 && j_unzGoToNextFile(v12) )
                v15 = j_unzClose(v12, v42, (int)v19, (void (__fastcall *)(_DWORD, int))v20);
                *(_DWORD *)v5 = v97 + 1;
                v41 = 0;
              goto LABEL_61;
            if ( *(_BYTE *)(v7 + 49) )
              v124 = v37;
              v125 = *(_DWORD *)(v37 - 12);
              if ( Core::FileSystem::fileOrDirectoryExists((__int64 *)&v124) )
                goto LABEL_46;
            if ( *(_DWORD *)(*(_DWORD *)(v7 + 56) - 12) )
              v46 = j_unzOpenCurrentFilePassword(v96, 0);
            else
              v46 = j_unzOpenCurrentFile(v96);
            if ( v46 )
              j_unzClose(v96, v43, v44, v45);
              v41 = 1;
              v15 = v46;
              goto LABEL_60;
            v120 = v132;
            v121 = *(_DWORD *)(v132 - 12);
            Core::FileSystem::splitPathIntoFullPathSegments((int)&v122, (__int64 *)&v120);
            if ( (char *)v123 - (char *)v122 >= 5 )
              sub_21E8AF4(&v119, v123 - 2);
              LODWORD(v51) = v119;
              HIDWORD(v51) = *(_DWORD *)(v119 - 12);
              v115 = v51;
              Core::FileSystem::createDirectoryRecursively((int)&v116, &v115);
              v53 = v118;
              v118 |= 2u;
              v20 = v117;
              if ( v117 )
                v117();
              if ( v53 & 1 )
                v57 = 0;
                j_unzCloseCurrentFile(v96, v52, (int)v19, (void (__fastcall *)(_DWORD, int))v20);
                j_unzClose(v96, v54, v55, v56);
                v57 = 1;
              v62 = (void *)(v119 - 12);
              if ( (int *)(v119 - 12) != v27 )
                v19 = (unsigned int *)(v119 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                  {
                    v88 = __ldrex(v19);
                    v20 = (void (*)(void))(v88 - 1);
                  }
                  while ( __strex(v88 - 1, v19) );
                }
                else
                  v88 = *v19;
                  v20 = (void (*)(void))(*v19 - 1);
                  *v19 = (unsigned int)v20;
                if ( v88 <= 0 )
                  j_j_j_j__ZdlPv_9(v62);
              if ( v57 )
                v93 = 1;
                goto LABEL_109;
              v30 = v27;
            v113 = 0;
            v114 = 0;
            v108 = v132;
            v109 = *(_DWORD *)(v132 - 12);
            v94 = v94 & 0xFFFFFFC0 | 0x2E;
            v95 = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))((unsigned int)v95 & 0xFFFFFF00 | v94 & 0xEE);
            Core::File::open((int)&v110, (int)&v113, (__int64 *)&v108, (char)v95);
            v65 = v112;
            v66 = v112 | 2;
            v112 |= 2u;
            if ( v65 & 1 )
              while ( 1 )
                v71 = j_unzReadCurrentFile(v96, (int)&v149, 0x400u);
                if ( v71 <= -1 )
                  j_unzCloseCurrentFile(v96, v72, v73, (void (__fastcall *)(_DWORD, int))HIDWORD(v73));
                  v15 = j_unzClose(v96, v74, v75, v76);
                  v70 = 1;
                  goto LABEL_106;
                if ( v71 < 1 )
                  break;
                LODWORD(v73) = &v149;
                Core::FileImpl::write((Core::FileImpl *)&v105, v113, v73, v71);
                v107 |= 2u;
                if ( v106 )
                  v106(&v105, &v105, 3);
              Core::File::close((Core::File *)&v103, (int *)&v113);
              v79 = (void (__fastcall *)(_DWORD, int))v104;
              if ( v104 )
                v104(&v103);
              v83 = j_unzCloseCurrentFile(v96, v77, v78, v79);
              if ( v83 )
                j_unzClose(v96, v80, v81, v82);
                v70 = 1;
                v15 = v83;
                v70 = 0;
              j_unzCloseCurrentFile(v96, v66, v63, v64);
              v15 = j_unzClose(v96, v67, v68, v69);
              v70 = 1;
LABEL_106:
            v93 = v70;
            if ( v111 )
              v111(&v110);
            Core::File::~File((Core::File *)&v113);
            v27 = v30;
LABEL_109:
            v84 = v123;
            v85 = v122;
            if ( v122 != v123 )
              do
                v87 = (int *)(*v85 - 12);
                if ( v87 != v27 )
                  v19 = (unsigned int *)(*v85 - 4);
                  if ( &pthread_create )
                    __dmb();
                    do
                    {
                      v86 = __ldrex(v19);
                      v20 = (void (*)(void))(v86 - 1);
                    }
                    while ( __strex(v86 - 1, v19) );
                  else
                    v86 = *v19;
                    v20 = (void (*)(void))(*v19 - 1);
                    *v19 = (unsigned int)v20;
                  if ( v86 <= 0 )
                    j_j_j_j__ZdlPv_9(v87);
                ++v85;
              while ( v85 != v84 );
              v85 = v122;
            if ( v85 )
              operator delete(v85);
            v41 = v93;
            v12 = v96;
            if ( !v93 )
              goto LABEL_47;
LABEL_61:
            v26 = &v146;
            v49 = (void *)(v132 - 12);
            if ( (int *)(v132 - 12) != v27 )
              v19 = (unsigned int *)(v132 - 4);
                  v58 = __ldrex(v19);
                  v20 = (void (*)(void))(v58 - 1);
                while ( __strex(v58 - 1, v19) );
                v26 = &v146;
                v58 = *v19;
                v20 = (void (*)(void))(*v19 - 1);
                *v19 = (unsigned int)v20;
              if ( v58 <= 0 )
                v60 = v41;
                j_j_j_j__ZdlPv_9(v49);
                v41 = v60;
            v50 = (void *)(v133 - 12);
            if ( (int *)(v133 - 12) != v27 )
              v19 = (unsigned int *)(v133 - 4);
                  v59 = __ldrex(v19);
                  v20 = (void (*)(void))(v59 - 1);
                while ( __strex(v59 - 1, v19) );
                v59 = *v19;
              if ( v59 <= 0 )
                v61 = v41;
                j_j_j_j__ZdlPv_9(v50);
                v41 = v61;
            if ( v41 )
            v18 = v97 + 1;
            v97 = v18;
          }
          while ( v18 < v135 );
        v15 = j_unzClose(v12, v18, (int)v19, (void (__fastcall *)(_DWORD, int))v20);
        if ( !v15 )
          if ( *(_BYTE *)(v7 + 48) )
            v98 = *v4;
            v99 = *(_DWORD *)(v98 - 12);
            Core::FileSystem::deleteFile((int)&v100, (__int64 *)&v98);
            v92 = v102;
            v102 |= 2u;
            if ( v101 )
              v101(&v100);
            v15 = (v92 & 1) - 1;
          else
            v15 = 0;
LABEL_12:
        v21 = (void *)(v138 - 12);
          v22 = (unsigned int *)(v138 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v23 = __ldrex(v22);
            while ( __strex(v23 - 1, v22) );
            v23 = (*v22)--;
          if ( v23 <= 0 )
            j_j_j_j__ZdlPv_9(v21);
      }
      else
        v15 = -1;
      if ( ptr )
        operator delete(ptr);
    }
    else
      v15 = -103;
  if ( _stack_chk_guard != v150 )
    _stack_chk_fail(_stack_chk_guard - v150);
  return v15;
}


RakNet *__fastcall ZipUtils::_zipEncodedPathToUTF8(void **a1, int *a2)
{
  void **v2; // r4@1
  int *v3; // r5@1
  void *v4; // r0@3
  RakNet *result; // r0@4
  unsigned int *v6; // r2@6
  signed int v7; // r1@8
  int v8; // [sp+0h] [bp-840h]@3
  int v9; // [sp+4h] [bp-83Ch]@3
  int v10; // [sp+8h] [bp-838h]@3
  int v11; // [sp+Ch] [bp-834h]@2
  int v12; // [sp+10h] [bp-830h]@2
  char v13; // [sp+1Ch] [bp-824h]@3
  int v14; // [sp+20h] [bp-820h]@3
  char v15; // [sp+424h] [bp-41Ch]@2
  int v16; // [sp+428h] [bp-418h]@2
  RakNet *v17; // [sp+82Ch] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  v17 = _stack_chk_guard;
  if ( Util::isValidUTF8(a2) == 1 )
  {
    v11 = *v3;
    v12 = *(_DWORD *)(v11 - 12);
    File::cleanPath((int)&v15, (__int64 *)&v11);
    sub_21E94B4(v2, (const char *)&v16);
  }
  else
    Util::cp437ToUTF8((const void **)&v8, v3);
    v9 = v8;
    v10 = *(_DWORD *)(v8 - 12);
    File::cleanPath((int)&v13, (__int64 *)&v9);
    sub_21E94B4(v2, (const char *)&v14);
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
  result = (RakNet *)(_stack_chk_guard - v17);
  if ( _stack_chk_guard != v17 )
    _stack_chk_fail(result);
  return result;
}


signed int __fastcall ZipUtils::getFilenames(int *a1, int a2, int a3)
{
  int *v3; // r5@1
  int v4; // r4@1
  __int64 v5; // r0@1
  ZlibFileAccessWrapper *v6; // r0@1
  int v7; // r5@1
  int v8; // r0@1
  int v9; // r0@1
  int v10; // r5@1
  int v11; // r1@2
  unsigned int *v12; // r2@2
  void (__fastcall *v13)(_DWORD, int); // r3@2
  signed int v14; // r10@2
  signed int v15; // r4@4
  __int64 v16; // r0@13
  void *v17; // r0@16
  int v18; // r1@18
  int v19; // r2@18
  void (__fastcall *v20)(_DWORD, int); // r3@18
  int v22; // [sp+18h] [bp-5A0h]@13
  int v23; // [sp+1Ch] [bp-59Ch]@13
  int v24; // [sp+24h] [bp-594h]@5
  char v25; // [sp+28h] [bp-590h]@13
  void *ptr; // [sp+78h] [bp-540h]@1
  char v27; // [sp+88h] [bp-530h]@13
  int v28; // [sp+8Ch] [bp-52Ch]@14
  char v29; // [sp+490h] [bp-128h]@13
  RakNet *v30; // [sp+590h] [bp-28h]@1

  v3 = a1;
  v4 = a2;
  v30 = _stack_chk_guard;
  LODWORD(v5) = &ptr;
  HIDWORD(v5) = *(_DWORD *)(a3 + 52);
  v6 = (ZlibFileAccessWrapper *)ZlibFileAccessWrapper::ZlibFileAccessWrapper(v5);
  v7 = *v3;
  v8 = ZlibFileAccessWrapper::getZipFunctions(v6);
  v9 = j_unzOpen64(v7, v8);
  v10 = v9;
  if ( v9 )
  {
    v14 = j_unzGoToFirstFile(v9);
    while ( !v14 )
    {
      j_unzGetCurrentFileInfo(v10, (int)&v25, (int)&v29, 0x100u, 0, 0, 0, 0);
      sub_21E94B4((void **)&v24, &v29);
      v22 = v24;
      v23 = *(_DWORD *)(v24 - 12);
      File::cleanPath((int)&v27, (__int64 *)&v22);
      v16 = *(_QWORD *)(v4 + 4);
      if ( (_DWORD)v16 == HIDWORD(v16) )
      {
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<Core::PathBuffer<Core::StackString<char,1024u>>>(
          (unsigned __int64 *)v4,
          (int)&v27);
      }
      else
        sub_21E94B4((void **)v16, (const char *)&v28);
        *(_DWORD *)(v4 + 4) += 4;
      v14 = j_unzGoToNextFile(v10);
      v11 = v24;
      v17 = (void *)(v24 - 12);
      if ( (int *)(v24 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v24 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
          {
            v11 = __ldrex(v12);
            v13 = (void (__fastcall *)(_DWORD, int))(v11 - 1);
          }
          while ( __strex(v11 - 1, v12) );
        }
        else
          v11 = *v12;
          v13 = (void (__fastcall *)(_DWORD, int))(*v12 - 1);
          *v12 = (unsigned int)v13;
        if ( v11 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
    }
    j_unzCloseCurrentFile(v10, v11, (int)v12, v13);
    j_unzClose(v10, v18, v19, v20);
    v15 = 0;
    if ( v14 == -100 )
      v15 = 1;
  }
  else
  if ( ptr )
    operator delete(ptr);
  if ( _stack_chk_guard != v30 )
    _stack_chk_fail(_stack_chk_guard - v30);
  return v15;
}


ZipUtils::ZipFileRestrictions *__fastcall ZipUtils::ZipFileRestrictions::~ZipFileRestrictions(ZipUtils::ZipFileRestrictions *this)
{
  ZipUtils::ZipFileRestrictions *v1; // r4@1

  v1 = this;
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
    (int)this + 24,
    *((_DWORD *)this + 8));
    (int)v1,
    *((_DWORD *)v1 + 2));
  return v1;
}


signed int __fastcall ZipUtils::zip(int *a1, int *a2, int a3, int a4)
{
  int *v4; // r6@1
  int v5; // r5@1
  int *v6; // r10@1
  int v7; // r9@1
  bool v8; // zf@3
  signed int v9; // r8@7
  int v10; // r0@9
  char *v11; // r1@10
  char *v12; // r0@14
  int v13; // r0@17
  int v14; // r4@20
  void *v15; // r6@20
  __int64 v16; // r0@21
  const char **v17; // r7@22
  signed int v18; // r11@23
  signed int v19; // r4@24
  void *v20; // r0@24
  __int64 v21; // r0@27
  __int64 v22; // r0@27
  __int32 v23; // r1@27
  struct tm *v24; // r0@29
  unsigned int v25; // r4@31
  _BYTE *v26; // r0@31
  void *v27; // r0@32
  unsigned int v28; // r3@33
  _BYTE *v29; // r2@34
  __int64 v30; // kr00_8@36
  int v31; // r3@36
  int v32; // r0@38
  signed int v33; // r4@39
  int v34; // r11@40
  __int64 v35; // r0@40
  unsigned int v36; // r6@40
  unsigned __int64 v37; // r2@40
  char v38; // r0@40
  char v39; // r0@44
  signed int v40; // r4@45
  unsigned int *v41; // r2@58
  signed int v42; // r1@60
  unsigned int *v43; // r2@66
  signed int v44; // r1@68
  unsigned int *v45; // r2@70
  signed int v46; // r1@72
  void *v47; // r0@78
  unsigned int v48; // r0@81
  unsigned int *v49; // r2@84
  signed int v50; // r1@86
  const char **v51; // r4@105
  const char **v52; // r7@105
  unsigned int *v53; // r2@107
  signed int v54; // r1@109
  int *v55; // r0@115
  RakNet *v56; // r1@120
  unsigned int *v58; // r2@123
  signed int v59; // r1@125
  int (**v60)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+50h] [bp-1B88h]@23
  int (**v61)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+54h] [bp-1B84h]@23
  unsigned int v62; // [sp+58h] [bp-1B80h]@23
  const char **v63; // [sp+60h] [bp-1B78h]@22
  char v64; // [sp+68h] [bp-1B70h]@55
  void (*v65)(void); // [sp+70h] [bp-1B68h]@55
  char v66; // [sp+7Ch] [bp-1B5Ch]@44
  void (*v67)(void); // [sp+84h] [bp-1B54h]@49
  char v68; // [sp+8Ch] [bp-1B4Ch]@44
  __int64 v69; // [sp+90h] [bp-1B48h]@43
  __int64 v70; // [sp+9Ch] [bp-1B3Ch]@40
  char v71; // [sp+A4h] [bp-1B34h]@40
  void (__cdecl *v72)(char *); // [sp+ACh] [bp-1B2Ch]@75
  char v73; // [sp+B4h] [bp-1B24h]@40
  void *v74; // [sp+B8h] [bp-1B20h]@40
  int v75; // [sp+BCh] [bp-1B1Ch]@40
  _BYTE *v76; // [sp+C0h] [bp-1B18h]@31
  int v77; // [sp+C4h] [bp-1B14h]@31
  int v78; // [sp+C8h] [bp-1B10h]@31
  time_t timer; // [sp+CCh] [bp-1B0Ch]@30
  __int64 v80; // [sp+D0h] [bp-1B08h]@27
  char v81; // [sp+D8h] [bp-1B00h]@27
  void (__cdecl *v82)(char *); // [sp+E0h] [bp-1AF8h]@27
  File *v83; // [sp+ECh] [bp-1AECh]@27
  int v84; // [sp+F0h] [bp-1AE8h]@27
  int v85; // [sp+F4h] [bp-1AE4h]@31
  int v86; // [sp+F8h] [bp-1AE0h]@31
  int v87; // [sp+FCh] [bp-1ADCh]@31
  int v88; // [sp+100h] [bp-1AD8h]@31
  int v89; // [sp+104h] [bp-1AD4h]@31
  __int64 v90; // [sp+118h] [bp-1AC0h]@27
  int v91; // [sp+120h] [bp-1AB8h]@24
  char *v92; // [sp+124h] [bp-1AB4h]@9
  __int64 v93; // [sp+128h] [bp-1AB0h]@3
  char v94; // [sp+130h] [bp-1AA8h]@3
  void (*v95)(void); // [sp+138h] [bp-1AA0h]@5
  char v96; // [sp+140h] [bp-1A98h]@3
  __int64 v97; // [sp+144h] [bp-1A94h]@2
  __int64 v98; // [sp+14Ch] [bp-1A8Ch]@1
  int v99; // [sp+154h] [bp-1A84h]@1
  int v100; // [sp+158h] [bp-1A80h]@1
  const char **v101; // [sp+15Ch] [bp-1A7Ch]@1
  const char **v102; // [sp+160h] [bp-1A78h]@1
  const char **v103; // [sp+164h] [bp-1A74h]@1
  int *v104; // [sp+168h] [bp-1A70h]@17
  int v105; // [sp+16Ch] [bp-1A6Ch]@17
  char v106; // [sp+188h] [bp-1A50h]@27
  int v107; // [sp+590h] [bp-1648h]@16
  char v108; // [sp+594h] [bp-1644h]@19
  int v109; // [sp+994h] [bp-1244h]@16
  int v110; // [sp+998h] [bp-1240h]@3
  int v111; // [sp+99Ch] [bp-123Ch]@3
  int v112; // [sp+D9Ch] [bp-E3Ch]@3
  char v113; // [sp+DA0h] [bp-E38h]@1
  int v114; // [sp+DA4h] [bp-E34h]@1
  int v115; // [sp+11A4h] [bp-A34h]@1
  int v116; // [sp+11A8h] [bp-A30h]@44
  int v117; // [sp+15A8h] [bp-630h]@17
  int v118; // [sp+1BA8h] [bp-30h]@17
  RakNet *v119; // [sp+1BACh] [bp-2Ch]@1

  v4 = a2;
  v5 = a3;
  v6 = &v115;
  v7 = a4;
  v119 = _stack_chk_guard;
  v101 = 0;
  v102 = 0;
  v103 = 0;
  __dmb();
  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 4) = 0;
  v99 = *a1;
  v100 = *(_DWORD *)(v99 - 12);
  File::cleanPath((int)&v113, (__int64 *)&v99);
  LODWORD(v98) = &v114;
  HIDWORD(v98) = v115;
  if ( !Core::FileSystem::fileOrDirectoryExists(&v98) )
  {
    v9 = -1;
    goto LABEL_105;
  }
  LODWORD(v97) = &v114;
  HIDWORD(v97) = v115;
  if ( Core::FileSystem::directoryExists(&v97) == 1 )
    v110 = 1023;
    v112 = v115;
    _aeabi_memcpy4(&v111, &v114, v115 + 1);
    LODWORD(v93) = &v111;
    HIDWORD(v93) = v112;
    Core::FileSystem::getDirectoryFilesRecursively((int)&v94, (int)&v101, &v93);
    v8 = (v96 & 1) == 0;
    v96 |= 2u;
    if ( v8 || v101 == v102 )
    {
      if ( v95 )
        v95();
      v9 = -1;
      goto LABEL_105;
    }
    if ( v95 )
      v95();
  else
    Core::PathBuffer<std::string>::PathBuffer<Core::StackString<char,1024u>>((int *)&v92, (int)&v113);
    v10 = (int)v102;
    if ( v102 == v103 )
      std::vector<Core::PathBuffer<std::string>,std::allocator<Core::PathBuffer<std::string>>>::_M_emplace_back_aux<Core::PathBuffer<std::string>>(
        (unsigned __int64 *)&v101,
        &v92);
      v11 = v92;
    else
      *v102 = v92;
      v102 = (const char **)(v10 + 4);
      v11 = (char *)&unk_28898CC;
      v92 = (char *)&unk_28898CC;
    v12 = v11 - 12;
    if ( (int *)(v11 - 12) != &dword_28898C0 )
      v58 = (unsigned int *)(v11 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v59 = __ldrex(v58);
        while ( __strex(v59 - 1, v58) );
      }
      else
        v59 = (*v58)--;
      if ( v59 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
  if ( *(_BYTE *)(v7 + 48) )
    v107 = 1023;
    v109 = v115;
    _aeabi_memcpy4((unsigned int)&v107 | 4, &v114, v115 + 1);
    v104 = &v114;
    v105 = v115;
    v13 = Core::SplitPathT<1024u,64u>::SplitPathT((int)&v117, (const char **)&v104);
    if ( v118 )
      Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::Path>((unsigned int *)&v107, v13 + 1024, v118 - 1);
      _aeabi_memclr8(&v107, 1028);
      v107 = 1023;
      v109 = 0;
      v108 = 0;
  v14 = v109;
  v15 = j_zipOpen64(*v4, 0);
  if ( !v15 )
    goto LABEL_104;
  v16 = *(_QWORD *)&v101;
  if ( v101 == v102 )
  *(_DWORD *)(v5 + 4) = (HIDWORD(v16) - (signed int)v16) >> 2;
  v17 = v101;
  v63 = v102;
LABEL_103:
    v9 = j_zipClose((int)v15, 0);
  v62 = v14 + 1;
  v9 = -1;
  v18 = 0;
  v61 = &pthread_create;
  v60 = &pthread_create;
  while ( 1 )
    sub_21E94B4((void **)&v91, *v17);
    v19 = ZipUtils::ZipFileRestrictions::allowFile(v7, &v91);
    v20 = (void *)(v91 - 12);
    if ( (int *)(v91 - 12) != &dword_28898C0 )
      v41 = (unsigned int *)(v91 - 4);
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
        v42 = (*v41)--;
      if ( v42 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    if ( !v19 )
      goto LABEL_80;
    if ( v18 )
      break;
    LODWORD(v21) = *v17;
    HIDWORD(v21) = *((_DWORD *)*v17 - 3);
    v90 = v21;
    File::cleanPath((int)&v106, &v90);
    Core::PathBuffer<std::string>::operator=<Core::StackString<char,1024u>>((int *)v17, (int)&v106);
    _aeabi_memclr8(&v84, 36);
    LODWORD(v22) = *v17;
    HIDWORD(v22) = *((_DWORD *)*v17 - 3);
    v80 = v22;
    Core::FileSystem::getLastModificationTime((int)&v81, &v80, (int)&v83);
    if ( v82 )
      v82(&v81);
    v24 = File::getLastModifiedDateAsLocalTime(v83, v23);
    if ( !v24 )
      time(&timer);
      v24 = localtime(&timer);
    v84 = v24->tm_sec;
    v85 = v24->tm_min;
    v86 = v24->tm_hour;
    v87 = v24->tm_mday;
    v88 = v24->tm_mon;
    v89 = v24->tm_year;
    sub_21E94B4((void **)&v78, *v17);
    sub_21E91E0((void **)&v77, (unsigned int)*v17, *((_DWORD *)*v17 - 3));
    sub_21E91E0((void **)&v76, (unsigned int)&v107 | 4, v109);
    v25 = sub_21E76A0(&v77, v76, 0, *((_DWORD *)v76 - 3));
    v26 = v76 - 12;
    if ( (int *)(v76 - 12) != &dword_28898C0 )
      v43 = (unsigned int *)(v76 - 4);
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
        v44 = (*v43)--;
      if ( v44 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
    v27 = (void *)(v77 - 12);
    if ( (int *)(v77 - 12) != &dword_28898C0 )
      v45 = (unsigned int *)(v77 - 4);
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
        v46 = (*v45)--;
      if ( v46 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    v28 = *(_DWORD *)(v78 - 12);
    if ( v28 < v25 )
      sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::erase", v25, v28);
    v29 = (_BYTE *)(v28 - v25);
    if ( v28 - v25 > v62 )
      v29 = (_BYTE *)v62;
    sub_21E7EE0((const void **)&v78, v25, v29, 0);
    v30 = *(_QWORD *)(v7 + 52);
    v31 = *(_DWORD *)(HIDWORD(v30) - 12);
    if ( v31 )
      v31 = *(_QWORD *)(v7 + 52) >> 32;
    v32 = j_zipOpenNewFileInZip3_64((int)v15, v78, (int)&v84, 0, 0, 0, 0, 0, 8, v30, 0, -15, 8, 0, v31, 0, 1);
    v18 = v32;
    if ( v32 )
      v33 = 1;
      v9 = v32;
      v34 = (int)v15;
      v74 = 0;
      v75 = 0;
      LODWORD(v35) = *v17;
      HIDWORD(v35) = *((_DWORD *)*v17 - 3);
      v70 = v35;
      v36 = (unsigned int)v60 & 0xFFFFFFC0 | 0x21;
      Core::File::open((int)&v71, (int)&v74, &v70, v36 & 0xE1);
      v60 = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))((unsigned int)v60 & 0xFFFFFFC0 | 0x21);
      v61 = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))((unsigned int)v61 & 0xFFFFFF00 | v36 & 0xE1);
      v38 = v73;
      v73 |= 2u;
      if ( v38 & 1 )
        v15 = (void *)v34;
        v69 = 0LL;
        {
          LODWORD(v37) = &v116;
          Core::FileImpl::read((Core::FileImpl *)&v66, v74, v37, (unsigned __int64 *)0x400, 0, (unsigned __int64 *)&v69);
          v39 = v68;
          v68 |= 2u;
          if ( v39 & 1 )
          {
            if ( v69 )
            {
              v18 = j_zipWriteInFileInZip((int)v15, &v116, v69);
              v40 = 0;
            }
            else
              v18 = 0;
          }
          else
            v18 = j_zipClose((int)v15, 0);
            v40 = 1;
            v9 = v18;
          HIDWORD(v37) = v67;
          if ( v67 )
            v67();
          if ( v40 )
            v33 = 1;
            goto LABEL_75;
        }
        while ( !v18 && v69 );
        v18 = j_zipCloseFileInZip((int)v15);
        if ( v18 )
          goto LABEL_42;
        Core::File::close((Core::File *)&v64, (int *)&v74);
        if ( v65 )
          v65();
        v33 = 0;
        v18 = 0;
        v18 = j_zipClose(v34, 0);
LABEL_42:
        v33 = 1;
        v9 = v18;
LABEL_75:
      if ( v72 )
        v72(&v71);
      Core::File::~File((Core::File *)&v74);
    v47 = (void *)(v78 - 12);
    if ( (int *)(v78 - 12) != &dword_28898C0 )
      v49 = (unsigned int *)(v78 - 4);
          v50 = __ldrex(v49);
        while ( __strex(v50 - 1, v49) );
        v50 = (*v49)--;
      if ( v50 <= 0 )
        j_j_j_j__ZdlPv_9(v47);
    if ( v33 )
      goto LABEL_104;
LABEL_80:
    __dmb();
    do
      v48 = __ldrex((unsigned int *)v5);
    while ( __strex(v48 + 1, (unsigned int *)v5) );
    ++v17;
    if ( v17 == v63 )
      goto LABEL_103;
  v9 = j_zipClose((int)v15, 0);
LABEL_104:
LABEL_105:
  v52 = v102;
  v51 = v101;
  if ( v101 != v102 )
      v55 = (int *)(*v51 - 12);
      if ( v55 != &dword_28898C0 )
        v53 = (unsigned int *)(*v51 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v54 = __ldrex(v53);
          while ( __strex(v54 - 1, v53) );
        else
          v54 = (*v53)--;
        if ( v54 <= 0 )
          j_j_j_j__ZdlPv_9(v55);
      ++v51;
    while ( v51 != v52 );
    v51 = v101;
  if ( v51 )
    operator delete(v51);
  v56 = (RakNet *)v6[642];
  if ( _stack_chk_guard != v56 )
    _stack_chk_fail(_stack_chk_guard - v56);
  return v9;
}


ZipUtils::UnzipSettings *__fastcall ZipUtils::UnzipSettings::UnzipSettings(ZipUtils::UnzipSettings *this, const ZipUtils::UnzipSettings *a2)
{
  ZipUtils::UnzipSettings *v2; // r4@1
  const ZipUtils::UnzipSettings *v3; // r5@1
  char *v4; // r2@1
  int v5; // r1@1
  _DWORD *v6; // r0@2
  _DWORD *v7; // r2@2
  _DWORD *v8; // r1@3
  _DWORD *v9; // r1@5
  int v10; // r2@7
  int v11; // r1@7
  _DWORD *v12; // r0@8
  _DWORD *v13; // r2@8
  _DWORD *v14; // r1@9
  _DWORD *v15; // r1@11

  v2 = this;
  v3 = a2;
  *((_DWORD *)this + 1) = 0;
  v4 = (char *)this + 4;
  *((_DWORD *)v4 + 1) = 0;
  *((_DWORD *)v4 + 2) = 0;
  *((_DWORD *)v4 + 3) = 0;
  *((_DWORD *)v4 + 4) = 0;
  *((_DWORD *)v4 + 2) = v4;
  *((_DWORD *)v4 + 3) = v4;
  v5 = *((_DWORD *)a2 + 2);
  if ( v5 )
  {
    v6 = std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_copy(
           (int)this,
           v5,
           (int)v4);
    v7 = v6;
    *((_DWORD *)v2 + 2) = v6;
    do
    {
      v8 = v7;
      v7 = (_DWORD *)v7[2];
    }
    while ( v7 );
    *((_DWORD *)v2 + 3) = v8;
      v9 = v6;
      v6 = (_DWORD *)v6[3];
    while ( v6 );
    *((_DWORD *)v2 + 4) = v9;
    *((_DWORD *)v2 + 5) = *((_DWORD *)v3 + 5);
  }
  *((_DWORD *)v2 + 7) = 0;
  v10 = (int)v2 + 28;
  *(_DWORD *)(v10 + 4) = 0;
  *(_DWORD *)(v10 + 8) = 0;
  *(_DWORD *)(v10 + 12) = 0;
  *(_DWORD *)(v10 + 16) = 0;
  *(_DWORD *)(v10 + 8) = v10;
  *(_DWORD *)(v10 + 12) = v10;
  v11 = *((_DWORD *)v3 + 8);
  if ( v11 )
    v12 = std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_copy(
            (int)v2 + 24,
            v11,
            v10);
    v13 = v12;
    *((_DWORD *)v2 + 8) = v12;
      v14 = v13;
      v13 = (_DWORD *)v13[2];
    while ( v13 );
    *((_DWORD *)v2 + 9) = v14;
      v15 = v12;
      v12 = (_DWORD *)v12[3];
    while ( v12 );
    *((_DWORD *)v2 + 10) = v15;
    *((_DWORD *)v2 + 11) = *((_DWORD *)v3 + 11);
  *((_QWORD *)v2 + 6) = *((_QWORD *)v3 + 6);
  sub_119C854((int *)v2 + 14, (int *)v3 + 14);
  return v2;
}


ZipUtils::ZipSettings *__fastcall ZipUtils::ZipSettings::ZipSettings(ZipUtils::ZipSettings *this, const ZipUtils::ZipSettings *a2)
{
  ZipUtils::ZipSettings *v2; // r4@1
  const ZipUtils::ZipSettings *v3; // r5@1
  char *v4; // r2@1
  int v5; // r1@1
  _DWORD *v6; // r0@2
  _DWORD *v7; // r2@2
  _DWORD *v8; // r1@3
  _DWORD *v9; // r1@5
  int v10; // r2@7
  int v11; // r1@7
  _DWORD *v12; // r0@8
  _DWORD *v13; // r2@8
  _DWORD *v14; // r1@9
  _DWORD *v15; // r1@11

  v2 = this;
  v3 = a2;
  *((_DWORD *)this + 1) = 0;
  v4 = (char *)this + 4;
  *((_DWORD *)v4 + 1) = 0;
  *((_DWORD *)v4 + 2) = 0;
  *((_DWORD *)v4 + 3) = 0;
  *((_DWORD *)v4 + 4) = 0;
  *((_DWORD *)v4 + 2) = v4;
  *((_DWORD *)v4 + 3) = v4;
  v5 = *((_DWORD *)a2 + 2);
  if ( v5 )
  {
    v6 = std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_copy(
           (int)this,
           v5,
           (int)v4);
    v7 = v6;
    *((_DWORD *)v2 + 2) = v6;
    do
    {
      v8 = v7;
      v7 = (_DWORD *)v7[2];
    }
    while ( v7 );
    *((_DWORD *)v2 + 3) = v8;
      v9 = v6;
      v6 = (_DWORD *)v6[3];
    while ( v6 );
    *((_DWORD *)v2 + 4) = v9;
    *((_DWORD *)v2 + 5) = *((_DWORD *)v3 + 5);
  }
  *((_DWORD *)v2 + 7) = 0;
  v10 = (int)v2 + 28;
  *(_DWORD *)(v10 + 4) = 0;
  *(_DWORD *)(v10 + 8) = 0;
  *(_DWORD *)(v10 + 12) = 0;
  *(_DWORD *)(v10 + 16) = 0;
  *(_DWORD *)(v10 + 8) = v10;
  *(_DWORD *)(v10 + 12) = v10;
  v11 = *((_DWORD *)v3 + 8);
  if ( v11 )
    v12 = std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_copy(
            (int)v2 + 24,
            v11,
            v10);
    v13 = v12;
    *((_DWORD *)v2 + 8) = v12;
      v14 = v13;
      v13 = (_DWORD *)v13[2];
    while ( v13 );
    *((_DWORD *)v2 + 9) = v14;
      v15 = v12;
      v12 = (_DWORD *)v12[3];
    while ( v12 );
    *((_DWORD *)v2 + 10) = v15;
    *((_DWORD *)v2 + 11) = *((_DWORD *)v3 + 11);
  *((_QWORD *)v2 + 6) = *((_QWORD *)v3 + 6);
  sub_21E8AF4((int *)v2 + 14, (int *)v3 + 14);
  return v2;
}


ZipUtils::UnzipSettings *__fastcall ZipUtils::UnzipSettings::~UnzipSettings(ZipUtils::UnzipSettings *this)
{
  ZipUtils::UnzipSettings *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  v2 = *((_DWORD *)this + 14);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
    (int)v1 + 24,
    *((_DWORD *)v1 + 8));
    (int)v1,
    *((_DWORD *)v1 + 2));
  return v1;
}


int __fastcall ZipUtils::ZipProgress::ZipProgress(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  __dmb();
  return result;
}


signed int __fastcall ZipUtils::ZipFileRestrictions::addRestrictedExtensions(signed int result, unsigned __int64 *a2)
{
  const void **v2; // r4@1
  const void **v3; // r7@1
  int v4; // r5@2
  char v5; // [sp+4h] [bp-1Ch]@3

  v3 = (const void **)(*a2 >> 32);
  v2 = (const void **)*a2;
  if ( v2 != v3 )
  {
    v4 = result + 24;
    do
    {
      result = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert((int)&v5, v4, v2);
      ++v2;
    }
    while ( v3 != v2 );
  }
  return result;
}


signed int __fastcall ZipUtils::ZipFileRestrictions::addForbiddenExtensions(signed int result, unsigned __int64 *a2)
{
  const void **v2; // r5@1
  const void **v3; // r7@1
  int i; // r4@1
  char v5; // [sp+4h] [bp-1Ch]@2

  v3 = (const void **)(*a2 >> 32);
  v2 = (const void **)*a2;
  for ( i = result; v3 != v2; ++v2 )
    result = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert((int)&v5, i, v2);
  return result;
}


int (**__fastcall ZipUtils::ZipProgressList::createProgress(ZipUtils::ZipProgressList *this, int a2))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  ZipUtils::ZipProgressList *v2; // r5@1
  int v3; // r6@1
  pthread_mutex_t *v4; // r8@1
  int v5; // r0@2
  __int64 v6; // r0@3
  int v7; // r4@6
  unsigned int *v8; // r1@7
  unsigned int v9; // r0@9
  unsigned int *v10; // r7@13
  unsigned int v11; // r0@15
  int v12; // r0@20
  int v13; // r0@20
  unsigned int *v14; // r0@21
  unsigned int v15; // r1@23
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@26
  unsigned int v17; // [sp+4h] [bp-24h]@3
  int v18; // [sp+8h] [bp-20h]@4

  v2 = this;
  v3 = a2;
  v4 = (pthread_mutex_t *)(a2 + 12);
  if ( &pthread_create )
  {
    v5 = pthread_mutex_lock((pthread_mutex_t *)(a2 + 12));
    if ( v5 )
      sub_21E5E14(v5);
  }
  j__ZNSt12__shared_ptrIN8ZipUtils11ZipProgressELN9__gnu_cxx12_Lock_policyE2EEC2ISaIS1_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v17);
  v6 = *(_QWORD *)(v3 + 4);
  if ( (_DWORD)v6 == HIDWORD(v6) )
    std::vector<std::shared_ptr<ZipUtils::ZipProgress>,std::allocator<std::shared_ptr<ZipUtils::ZipProgress>>>::_M_emplace_back_aux<std::shared_ptr<ZipUtils::ZipProgress>>(
      (_QWORD *)v3,
      (int)&v17);
  else
    *(_QWORD *)v6 = v17;
    HIDWORD(v6) = v18;
    v18 = 0;
    *(_DWORD *)(v6 + 4) = HIDWORD(v6);
    v17 = 0;
    *(_DWORD *)(v3 + 4) = v6 + 8;
  v7 = v18;
  if ( v18 )
    v8 = (unsigned int *)(v18 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  v12 = *(_DWORD *)(v3 + 4);
  *(_DWORD *)v2 = *(_DWORD *)(v12 - 8);
  v13 = *(_DWORD *)(v12 - 4);
  *((_DWORD *)v2 + 1) = v13;
  if ( v13 )
    v14 = (unsigned int *)(v13 + 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      ++*v14;
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))pthread_mutex_unlock(v4);
  return result;
}


int __fastcall ZipUtils::ZipProgressList::getProgress(ZipUtils::ZipProgressList *this)
{
  ZipUtils::ZipProgressList *v1; // r5@1
  pthread_mutex_t *v2; // r4@1
  int v3; // r0@2
  __int64 v8; // r0@3
  int v10; // t1@4
  int result; // r0@8

  v1 = this;
  v2 = (pthread_mutex_t *)((char *)this + 12);
  if ( &pthread_create )
  {
    v3 = pthread_mutex_lock(v2);
    if ( v3 )
      sub_21E5E14(v3);
  }
  __asm { VLDR            S16, =0.0 }
  v8 = *(_QWORD *)v1;
  __asm { VMOV.F32        S18, S16 }
  if ( (_DWORD)v8 != HIDWORD(v8) )
    do
    {
      _R2 = **(_DWORD **)v8;
      __dmb();
      v10 = *(_DWORD *)v8;
      LODWORD(v8) = v8 + 8;
      __asm
      {
        VMOV            S0, R2
        VCVT.F32.U32    S0, S0
      }
      _R2 = *(_DWORD *)(v10 + 4);
        VMOV            S2, R2
        VCVT.F32.U32    S2, S2
        VADD.F32        S16, S0, S16
        VADD.F32        S18, S2, S18
    }
    while ( !_ZF );
    pthread_mutex_unlock(v2);
  __asm
    VDIV.F32        S0, S16, S18
    VMOV            R0, S0
  return result;
}


signed int __fastcall ZipUtils::ZipFileRestrictions::allowFile(int a1, int *a2)
{
  int v2; // r9@1
  int *v3; // r8@1
  int v4; // r0@2
  int v5; // r10@2
  int v6; // r7@2
  void *v7; // r6@3
  int v8; // r11@3
  size_t v9; // r4@3
  _DWORD *v10; // r0@5
  size_t v11; // r5@5
  size_t v12; // r2@5
  int v13; // r0@7
  char *v14; // r6@14
  _DWORD *v15; // r1@14
  unsigned int v16; // r4@14
  unsigned int v17; // r5@14
  size_t v18; // r2@14
  int v19; // r0@16
  signed int result; // r0@24
  int v21; // r0@26
  int v22; // r8@26
  int v23; // r6@26
  void *v24; // r4@27
  int v25; // r9@27
  size_t v26; // r7@27
  _DWORD *v27; // r0@29
  size_t v28; // r5@29
  size_t v29; // r2@29
  int v30; // r0@31
  char *v31; // r4@38
  _DWORD *v32; // r1@38
  unsigned int v33; // r5@38
  unsigned int v34; // r7@38
  size_t v35; // r2@38
  int v36; // r0@40
  unsigned int *v37; // r2@52
  signed int v38; // r1@54
  unsigned int *v39; // r2@56
  signed int v40; // r1@58
  int v41; // [sp+0h] [bp-850h]@26
  int v42; // [sp+4h] [bp-84Ch]@26
  int v43; // [sp+8h] [bp-848h]@2
  int v44; // [sp+Ch] [bp-844h]@2
  void *s2; // [sp+10h] [bp-840h]@2
  char v46; // [sp+18h] [bp-838h]@26
  int v47; // [sp+1Ch] [bp-834h]@26
  int v48; // [sp+41Ch] [bp-434h]@26
  char v49; // [sp+420h] [bp-430h]@2
  int v50; // [sp+424h] [bp-42Ch]@2
  int v51; // [sp+824h] [bp-2Ch]@2
  RakNet *v52; // [sp+828h] [bp-28h]@1

  v2 = a1;
  v3 = a2;
  v52 = _stack_chk_guard;
  if ( !*(_DWORD *)(a1 + 20) )
    goto LABEL_70;
  v43 = *a2;
  v44 = *(_DWORD *)(v43 - 12);
  Core::PathBuffer<Core::StackString<char,1024u>>::getEntryExtensionWithoutDot((int)&v49, (__int64 *)&v43);
  Util::toLower(&s2, v51, (unsigned int)&v50);
  v4 = *(_DWORD *)(v2 + 8);
  v5 = v2 + 4;
  v6 = v2 + 4;
  if ( v4 )
  {
    v7 = s2;
    v8 = v2 + 4;
    v9 = *((_DWORD *)s2 - 3);
    do
    {
      v6 = v4;
      while ( 1 )
      {
        v10 = *(_DWORD **)(v6 + 16);
        v11 = *(v10 - 3);
        v12 = *(v10 - 3);
        if ( v11 > v9 )
          v12 = v9;
        v13 = memcmp(v10, v7, v12);
        if ( !v13 )
          v13 = v11 - v9;
        if ( v13 >= 0 )
          break;
        v6 = *(_DWORD *)(v6 + 12);
        if ( !v6 )
        {
          v6 = v8;
          goto LABEL_13;
        }
      }
      v4 = *(_DWORD *)(v6 + 8);
      v8 = v6;
    }
    while ( v4 );
  }
LABEL_13:
  if ( v6 == v5 )
    v14 = (char *)s2;
    v6 = v2 + 4;
  else
    v15 = *(_DWORD **)(v6 + 16);
    v16 = *((_DWORD *)s2 - 3);
    v17 = *(v15 - 3);
    v18 = *((_DWORD *)s2 - 3);
    if ( v16 > v17 )
      v18 = *(v15 - 3);
    v19 = memcmp(s2, v15, v18);
    if ( !v19 )
      v19 = v16 - v17;
    if ( v19 < 0 )
      v6 = v2 + 4;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
    else
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v14 - 12);
  if ( v6 != v5 )
    result = 0;
    if ( !*(_DWORD *)(v2 + 44) )
      goto LABEL_71;
LABEL_70:
    v41 = *v3;
    v42 = *(_DWORD *)(v41 - 12);
    Core::PathBuffer<Core::StackString<char,1024u>>::getEntryExtensionWithoutDot((int)&v46, (__int64 *)&v41);
    Util::toLower(&s2, v48, (unsigned int)&v47);
    v21 = *(_DWORD *)(v2 + 32);
    v22 = v2 + 28;
    v23 = v2 + 28;
    if ( v21 )
      v24 = s2;
      v25 = v2 + 28;
      v26 = *((_DWORD *)s2 - 3);
        v23 = v21;
        while ( 1 )
          v27 = *(_DWORD **)(v23 + 16);
          v28 = *(v27 - 3);
          v29 = *(v27 - 3);
          if ( v28 > v26 )
            v29 = v26;
          v30 = memcmp(v27, v24, v29);
          if ( !v30 )
            v30 = v28 - v26;
          if ( v30 >= 0 )
            break;
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v25;
            goto LABEL_37;
          }
        v21 = *(_DWORD *)(v23 + 8);
        v25 = v23;
      while ( v21 );
LABEL_37:
    if ( v23 == v22 )
      v31 = (char *)s2;
      v23 = v22;
      v32 = *(_DWORD **)(v23 + 16);
      v33 = *((_DWORD *)s2 - 3);
      v34 = *(v32 - 3);
      v35 = *((_DWORD *)s2 - 3);
      if ( v33 > v34 )
        v35 = *(v32 - 3);
      v36 = memcmp(s2, v32, v35);
      if ( !v36 )
        v36 = v33 - v34;
      if ( v36 < 0 )
        v23 = v22;
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v39 = (unsigned int *)(v31 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v40 = __ldrex(v39);
        while ( __strex(v40 - 1, v39) );
      else
        v40 = (*v39)--;
      if ( v40 <= 0 )
        j_j_j_j__ZdlPv_9(v31 - 12);
      result = 0;
LABEL_71:
      result = 1;
  if ( _stack_chk_guard != v52 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall ZipUtils::ZipSettings::ZipSettings(int result)
{
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 12) = result + 4;
  *(_DWORD *)(result + 16) = result + 4;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 36) = result + 28;
  *(_DWORD *)(result + 40) = result + 28;
  *(_BYTE *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = -1;
  *(_DWORD *)(result + 56) = &unk_28898CC;
  return result;
}


int __fastcall ZipUtils::ZipProgress::clear(int result)
{
  __dmb();
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  return result;
}


signed int __fastcall ZipUtils::exists(int *a1, const char **a2)
{
  const char **v2; // r6@1
  signed int v3; // r4@1
  int v4; // r0@1
  int v5; // r5@1
  signed int v6; // r6@2
  int v7; // r1@2
  int v8; // r2@2
  void (__fastcall *v9)(_DWORD, int); // r3@2

  v2 = a2;
  v3 = 0;
  v4 = j_unzOpen64(*a1, 0);
  v5 = v4;
  if ( v4 )
  {
    v6 = j_unzLocateFile(v4, *v2, 2);
    j_unzClose(v5, v7, v8, v9);
    if ( !v6 )
      v3 = 1;
  }
  return v3;
}


int __fastcall ZipUtils::ZipSettings::ZipSettings(int result, int a2)
{
  void *v2; // r2@1

  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 12) = result + 4;
  *(_DWORD *)(result + 16) = result + 4;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 36) = result + 28;
  *(_DWORD *)(result + 40) = result + 28;
  v2 = &unk_28898CC;
  *(_BYTE *)(result + 48) = 0;
  *(_QWORD *)(result + 52) = *(_QWORD *)&a2;
  return result;
}


int __fastcall ZipUtils::ZipFileRestrictions::ZipFileRestrictions(int result)
{
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 12) = result + 4;
  *(_DWORD *)(result + 16) = result + 4;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 36) = result + 28;
  *(_DWORD *)(result + 40) = result + 28;
  return result;
}


int __fastcall ZipUtils::UnzipSettings::UnzipSettings(int result)
{
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 12) = result + 4;
  *(_DWORD *)(result + 16) = result + 4;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 36) = result + 28;
  *(_DWORD *)(result + 40) = result + 28;
  *(_BYTE *)(result + 48) = 0;
  *(_BYTE *)(result + 49) = 0;
  *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 56) = &unk_28898CC;
  return result;
}


ZipUtils::ZipSettings *__fastcall ZipUtils::ZipSettings::~ZipSettings(ZipUtils::ZipSettings *this)
{
  ZipUtils::ZipSettings *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  v2 = *((_DWORD *)this + 14);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
    (int)v1 + 24,
    *((_DWORD *)v1 + 8));
    (int)v1,
    *((_DWORD *)v1 + 2));
  return v1;
}
