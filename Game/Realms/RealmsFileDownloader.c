

void __fastcall RealmsFileDownloader::~RealmsFileDownloader(RealmsFileDownloader *this)
{
  RealmsFileDownloader::~RealmsFileDownloader(this);
}


void __fastcall RealmsFileDownloader::~RealmsFileDownloader(RealmsFileDownloader *this)
{
  void *v1; // r0@1

  v1 = (void *)StreamFileDownloader::~StreamFileDownloader(this);
  j_j_j__ZdlPv_6(v1);
}


void __fastcall RealmsFileDownloader::_retryFileDownloader(int a1, int a2, int a3)
{
  RealmsFileDownloader::_retryFileDownloader(a1, a2, a3);
}


void __fastcall RealmsFileDownloader::initFileDownloader(int a1, int *a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // r5@1
  int *v8; // r6@1
  int v9; // r7@1
  int *v10; // r8@1
  int *v11; // r4@4
  StreamFileDownloader::DownloadInfo *v12; // r0@4
  StreamFileDownloader::DownloadInfo *v13; // r0@5
  int v14; // r4@6
  unsigned int v15; // r1@7
  unsigned int *v16; // r0@7
  unsigned int v17; // r2@10
  unsigned int v18; // r3@11
  unsigned int *v19; // r11@14
  unsigned int v20; // r1@19
  unsigned int v21; // r1@23
  unsigned int v22; // r0@29
  int v23; // r10@34
  unsigned int v24; // r0@36
  void (__fastcall *v25)(int *, int, signed int); // r3@39
  unsigned int *v26; // r0@42
  unsigned int v27; // r1@44
  __int64 v28; // r0@47
  _DWORD *v29; // r0@47
  int v30; // r9@47
  int v31; // r0@47
  unsigned int *v32; // r0@48
  unsigned int v33; // r1@50
  int v34; // r4@53
  __int64 v35; // r0@53
  int v36; // r2@53
  void (*v37)(void); // r3@53
  char *v38; // r0@56
  void *v39; // r0@57
  int v40; // r0@58
  unsigned int *v41; // r2@59
  unsigned int v42; // r1@61
  void (__fastcall *v43)(char *, int, signed int); // r3@66
  char *v44; // r0@70
  void *v45; // r0@71
  int v46; // r0@72
  unsigned int *v47; // r2@73
  unsigned int v48; // r1@75
  int v49; // r8@80
  unsigned int v50; // r0@82
  void (__fastcall *v51)(int *, int, signed int); // r3@85
  unsigned int *v52; // r0@88
  unsigned int v53; // r1@90
  __int64 v54; // r2@93
  int v55; // r0@93
  _DWORD *v56; // r0@93
  _DWORD *v57; // r7@93
  int v58; // r0@93
  unsigned int *v59; // r0@94
  unsigned int v60; // r1@96
  __int64 v61; // r0@99
  int v62; // r5@99
  char *v63; // r1@99
  int v64; // r3@99
  void (*v65)(void); // r3@99
  char *v66; // r0@101
  void *v67; // r0@104
  void *v68; // r0@105
  int v69; // r0@106
  unsigned int *v70; // r2@107
  unsigned int v71; // r1@109
  void (__fastcall *v72)(char *, int, signed int); // r3@114
  char *v73; // r0@116
  void *v74; // r0@119
  void *v75; // r0@120
  int v76; // r0@121
  unsigned int *v77; // r2@122
  unsigned int v78; // r1@124
  int v79; // r4@129
  void *v80; // r0@137
  unsigned int v81; // r0@144
  void *v82; // r0@149
  unsigned int *v83; // r2@151
  signed int v84; // r1@153
  unsigned int *v85; // r2@159
  signed int v86; // r1@161
  unsigned int *v87; // r2@163
  signed int v88; // r1@165
  unsigned int *v89; // r2@167
  signed int v90; // r1@169
  unsigned int *v91; // r2@171
  signed int v92; // r1@173
  unsigned int *v93; // r2@175
  signed int v94; // r1@177
  unsigned int *v95; // r2@179
  signed int v96; // r1@181
  unsigned int *v97; // r2@183
  signed int v98; // r1@185
  unsigned int *v99; // r2@187
  signed int v100; // r1@189
  unsigned int *v101; // r2@191
  signed int v102; // r1@193
  unsigned int *v103; // r2@195
  signed int v104; // r1@197
  unsigned int *v105; // r2@199
  signed int v106; // r1@201
  const void **v107; // [sp+8h] [bp-160h]@47
  int v108; // [sp+14h] [bp-154h]@37
  int v109; // [sp+18h] [bp-150h]@14
  int v110; // [sp+18h] [bp-150h]@93
  char v111; // [sp+20h] [bp-148h]@132
  void (*v112)(void); // [sp+28h] [bp-140h]@131
  int v113; // [sp+2Ch] [bp-13Ch]@132
  char v114; // [sp+30h] [bp-138h]@130
  void (*v115)(void); // [sp+38h] [bp-130h]@129
  int v116; // [sp+3Ch] [bp-12Ch]@130
  int v117; // [sp+44h] [bp-124h]@129
  int v118; // [sp+48h] [bp-120h]@80
  int v119; // [sp+4Ch] [bp-11Ch]@80
  int v120; // [sp+50h] [bp-118h]@85
  __int64 v121; // [sp+58h] [bp-110h]@85
  int v122; // [sp+60h] [bp-108h]@85
  int v123; // [sp+68h] [bp-100h]@86
  void (*v124)(void); // [sp+70h] [bp-F8h]@85
  int v125; // [sp+74h] [bp-F4h]@86
  char *v126; // [sp+78h] [bp-F0h]@87
  char v127; // [sp+84h] [bp-E4h]@115
  void (*v128)(void); // [sp+8Ch] [bp-DCh]@114
  int v129; // [sp+90h] [bp-D8h]@115
  int v130; // [sp+94h] [bp-D4h]@34
  int v131; // [sp+98h] [bp-D0h]@34
  int v132; // [sp+9Ch] [bp-CCh]@39
  char *v133; // [sp+A0h] [bp-C8h]@39
  int v134; // [sp+A4h] [bp-C4h]@40
  void (*v135)(void); // [sp+ACh] [bp-BCh]@39
  int v136; // [sp+B0h] [bp-B8h]@40
  char v137; // [sp+B4h] [bp-B4h]@67
  void (*v138)(void); // [sp+BCh] [bp-ACh]@66
  int v139; // [sp+C0h] [bp-A8h]@67
  int v140; // [sp+C4h] [bp-A4h]@1
  int v141; // [sp+C8h] [bp-A0h]@41
  int v142; // [sp+CCh] [bp-9Ch]@41
  int v143; // [sp+D0h] [bp-98h]@47
  char *v144; // [sp+D4h] [bp-94h]@47
  __int64 v145; // [sp+D8h] [bp-90h]@47
  void (__fastcall *v146)(__int64 *, __int64 *, signed int); // [sp+E0h] [bp-88h]@47
  int v147; // [sp+E4h] [bp-84h]@47
  int v148; // [sp+E8h] [bp-80h]@53
  int v149; // [sp+ECh] [bp-7Ch]@53
  void (*v150)(void); // [sp+F0h] [bp-78h]@47
  int v151; // [sp+F4h] [bp-74h]@53
  int v152; // [sp+F8h] [bp-70h]@87
  int v153; // [sp+FCh] [bp-6Ch]@87
  int v154; // [sp+100h] [bp-68h]@93
  __int64 v155; // [sp+108h] [bp-60h]@93
  int v156; // [sp+110h] [bp-58h]@93
  __int64 v157; // [sp+118h] [bp-50h]@93
  void (*v158)(void); // [sp+120h] [bp-48h]@93
  int v159; // [sp+124h] [bp-44h]@93
  char *v160; // [sp+128h] [bp-40h]@93
  __int64 v161; // [sp+130h] [bp-38h]@99
  void (*v162)(void); // [sp+138h] [bp-30h]@93
  int v163; // [sp+13Ch] [bp-2Ch]@99

  v7 = a4;
  v8 = (int *)(a4 + 16);
  v9 = a1;
  v10 = a2;
  sub_21E8AF4(&v140, (int *)(a4 + 16));
  if ( *(_DWORD *)(v9 + 12) )
  {
    if ( !*(_DWORD *)(a7 + 8) )
      sub_21E5F48();
    (*(void (__fastcall **)(int, signed int))(a7 + 12))(a7, 1);
  }
  else
    v11 = (int *)operator new(0x98u);
    StreamFileDownloader::DownloadInfo::DownloadInfo(v11, v10);
    v12 = *(StreamFileDownloader::DownloadInfo **)(v9 + 12);
    *(_DWORD *)(v9 + 12) = v11;
    if ( v12 )
    {
      v13 = StreamFileDownloader::DownloadInfo::~DownloadInfo(v12);
      operator delete((void *)v13);
    }
    v14 = *(_DWORD *)(v9 + 8);
    if ( !v14 )
      std::__throw_bad_weak_ptr();
    v15 = *(_DWORD *)(v14 + 4);
    v16 = (unsigned int *)(v14 + 4);
    do
      while ( 1 )
      {
        if ( !v15 )
          std::__throw_bad_weak_ptr();
        __dmb();
        v17 = __ldrex(v16);
        if ( v17 == v15 )
          break;
        __clrex();
        v15 = v17;
      }
      v18 = __strex(v15 + 1, v16);
      v15 = v17;
    while ( v18 );
    __dmb();
    v19 = (unsigned int *)(v14 + 8);
    v109 = *(_DWORD *)(v9 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 + 1, v19) );
    else
      ++*v19;
        v21 = __ldrex(v16);
      while ( __strex(v21 - 1, v16) );
      v21 = (*v16)--;
    if ( v21 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
      if ( &pthread_create )
        do
          v22 = __ldrex(v19);
        while ( __strex(v22 - 1, v19) );
      else
        v22 = (*v19)--;
      if ( v22 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
    v23 = *(_DWORD *)(v9 + 12);
    v130 = v109;
    v131 = v14;
        v24 = __ldrex(v19);
      while ( __strex(v24 + 1, v19) );
      v108 = v14;
    sub_21E8AF4(&v132, v10);
    sub_21E8AF4((int *)&v133, &v140);
    v135 = 0;
    v25 = *(void (__fastcall **)(int *, int, signed int))(a7 + 8);
    if ( v25 )
      v25(&v134, a7, 2);
      v136 = *(_DWORD *)(a7 + 12);
      v135 = *(void (**)(void))(a7 + 8);
    v141 = v130;
    v142 = v131;
    if ( v131 )
      v26 = (unsigned int *)(v131 + 8);
          v27 = __ldrex(v26);
        while ( __strex(v27 + 1, v26) );
        ++*v26;
    v107 = (const void **)v10;
    sub_21E8AF4(&v143, &v132);
    v144 = v133;
    v133 = (char *)&unk_28898CC;
    v28 = *(_QWORD *)&v134;
    *(_QWORD *)&v134 = v145;
    v145 = v28;
    LODWORD(v28) = v135;
    v146 = (void (__fastcall *)(__int64 *, __int64 *, signed int))v28;
    LODWORD(v28) = v136;
    v136 = v147;
    v147 = v28;
    v150 = 0;
    v29 = operator new(0x20u);
    v30 = (int)v29;
    *v29 = v141;
    v31 = v142;
    *(_DWORD *)(v30 + 4) = v142;
    if ( v31 )
      v32 = (unsigned int *)(v31 + 8);
          v33 = __ldrex(v32);
        while ( __strex(v33 + 1, v32) );
        ++*v32;
    sub_21E8AF4((int *)(v30 + 8), &v143);
    v34 = v23 + 64;
    *(_DWORD *)(v30 + 12) = v144;
    v144 = (char *)&unk_28898CC;
    v35 = v145;
    v145 = *(_QWORD *)(v30 + 16);
    *(_QWORD *)(v30 + 16) = v35;
    LODWORD(v35) = v146;
    v146 = 0;
    *(_DWORD *)(v30 + 24) = v35;
    HIDWORD(v35) = v147;
    v147 = *(_DWORD *)(v30 + 28);
    *(_DWORD *)(v30 + 28) = HIDWORD(v35);
    v148 = v30;
    v36 = v149;
    *(_QWORD *)&v148 = *(_QWORD *)(v23 + 64);
    *(_DWORD *)v34 = v30;
    *(_DWORD *)(v34 + 4) = v36;
    v150 = *(void (**)(void))(v23 + 72);
    v37 = v150;
    *(_DWORD *)(v23 + 72) = sub_1614BF4;
    v151 = *(_DWORD *)(v23 + 76);
    *(_DWORD *)(v23 + 76) = sub_1614688;
    if ( v37 )
      v37();
      if ( v146 )
        v146(&v145, &v145, 3);
    v38 = v144 - 12;
    if ( (int *)(v144 - 12) != &dword_28898C0 )
      v85 = (unsigned int *)(v144 - 4);
          v86 = __ldrex(v85);
        while ( __strex(v86 - 1, v85) );
        v86 = (*v85)--;
      if ( v86 <= 0 )
        j_j_j_j__ZdlPv_9(v38);
    v39 = (void *)(v143 - 12);
    if ( (int *)(v143 - 12) != &dword_28898C0 )
      v87 = (unsigned int *)(v143 - 4);
          v88 = __ldrex(v87);
        while ( __strex(v88 - 1, v87) );
        v88 = (*v87)--;
      if ( v88 <= 0 )
        j_j_j_j__ZdlPv_9(v39);
    v40 = v142;
    if ( v142 )
      v41 = (unsigned int *)(v142 + 8);
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
        v42 = (*v41)--;
      if ( v42 == 1 )
        (*(void (**)(void))(*(_DWORD *)v40 + 12))();
    v138 = 0;
    v43 = *(void (__fastcall **)(char *, int, signed int))(v23 + 72);
    if ( v43 )
      v43(&v137, v23 + 64, 2);
      v139 = *(_DWORD *)(v23 + 76);
      v138 = *(void (**)(void))(v23 + 72);
    if ( v135 )
      v135();
    v44 = v133 - 12;
    if ( (int *)(v133 - 12) != &dword_28898C0 )
      v89 = (unsigned int *)(v133 - 4);
          v90 = __ldrex(v89);
        while ( __strex(v90 - 1, v89) );
        v90 = (*v89)--;
      if ( v90 <= 0 )
        j_j_j_j__ZdlPv_9(v44);
    v45 = (void *)(v132 - 12);
    if ( (int *)(v132 - 12) != &dword_28898C0 )
      v91 = (unsigned int *)(v132 - 4);
          v92 = __ldrex(v91);
        while ( __strex(v92 - 1, v91) );
        v92 = (*v91)--;
      if ( v92 <= 0 )
        j_j_j_j__ZdlPv_9(v45);
    v46 = v131;
      v47 = (unsigned int *)(v131 + 8);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 == 1 )
        (*(void (**)(void))(*(_DWORD *)v46 + 12))();
    v49 = *(_DWORD *)(v9 + 12);
    v118 = v109;
    v119 = v108;
        v50 = __ldrex(v19);
      while ( __strex(v50 + 1, v19) );
    sub_21E8AF4(&v120, (int *)v7);
    v121 = *(_QWORD *)(v7 + 8);
    sub_21E8AF4(&v122, v8);
    v124 = 0;
    v51 = *(void (__fastcall **)(int *, int, signed int))(a7 + 8);
    if ( v51 )
      v51(&v123, a7, 2);
      v125 = *(_DWORD *)(a7 + 12);
      v124 = *(void (**)(void))(a7 + 8);
    sub_21E8AF4((int *)&v126, &v140);
    v152 = v118;
    v153 = v119;
    if ( v119 )
      v52 = (unsigned int *)(v119 + 8);
          v53 = __ldrex(v52);
        while ( __strex(v53 + 1, v52) );
        ++*v52;
    sub_21E8AF4(&v154, &v120);
    v110 = v9;
    v155 = v121;
    sub_21E8AF4(&v156, &v122);
    v54 = *(_QWORD *)&v123;
    *(_QWORD *)&v123 = v157;
    v157 = v54;
    v158 = v124;
    v55 = v125;
    v125 = v159;
    v159 = v55;
    v160 = v126;
    v126 = (char *)&unk_28898CC;
    v162 = 0;
    v56 = operator new(0x38u);
    v57 = v56;
    *v56 = v152;
    v58 = v153;
    v57[1] = v153;
    if ( v58 )
      v59 = (unsigned int *)(v58 + 8);
          v60 = __ldrex(v59);
        while ( __strex(v60 + 1, v59) );
        ++*v59;
    sub_21E8AF4(v57 + 2, &v154);
    *((_QWORD *)v57 + 2) = v155;
    sub_21E8AF4(v57 + 6, &v156);
    v61 = v157;
    v62 = v49 + 80;
    v157 = *((_QWORD *)v57 + 4);
    *((_QWORD *)v57 + 4) = v61;
    v57[10] = v158;
    v158 = 0;
    HIDWORD(v61) = v159;
    v159 = v57[11];
    LODWORD(v61) = v160;
    v57[11] = HIDWORD(v61);
    v63 = (char *)&unk_28898CC;
    v57[12] = v61;
    v160 = (char *)&unk_28898CC;
    LODWORD(v161) = v57;
    v64 = HIDWORD(v161);
    v161 = *(_QWORD *)(v49 + 80);
    *(_DWORD *)v62 = v57;
    *(_DWORD *)(v62 + 4) = v64;
    v162 = *(void (**)(void))(v49 + 88);
    v65 = v162;
    *(_DWORD *)(v49 + 88) = sub_1615ABC;
    v163 = *(_DWORD *)(v49 + 92);
    *(_DWORD *)(v49 + 92) = sub_161512C;
    if ( v65 )
      v65();
      v63 = v160;
    v66 = v63 - 12;
    if ( (int *)(v63 - 12) != &dword_28898C0 )
      v93 = (unsigned int *)(v63 - 4);
          v94 = __ldrex(v93);
        while ( __strex(v94 - 1, v93) );
        v94 = (*v93)--;
      if ( v94 <= 0 )
        j_j_j_j__ZdlPv_9(v66);
    if ( v158 )
      ((void (__fastcall *)(__int64 *, __int64 *, signed int))v158)(&v157, &v157, 3);
    v67 = (void *)(v156 - 12);
    if ( (int *)(v156 - 12) != &dword_28898C0 )
      v95 = (unsigned int *)(v156 - 4);
          v96 = __ldrex(v95);
        while ( __strex(v96 - 1, v95) );
        v96 = (*v95)--;
      if ( v96 <= 0 )
        j_j_j_j__ZdlPv_9(v67);
    v68 = (void *)(v154 - 12);
    if ( (int *)(v154 - 12) != &dword_28898C0 )
      v97 = (unsigned int *)(v154 - 4);
          v98 = __ldrex(v97);
        while ( __strex(v98 - 1, v97) );
        v98 = (*v97)--;
      if ( v98 <= 0 )
        j_j_j_j__ZdlPv_9(v68);
    v69 = v153;
    if ( v153 )
      v70 = (unsigned int *)(v153 + 8);
          v71 = __ldrex(v70);
        while ( __strex(v71 - 1, v70) );
        v71 = (*v70)--;
      if ( v71 == 1 )
        (*(void (**)(void))(*(_DWORD *)v69 + 12))();
    v128 = 0;
    v72 = *(void (__fastcall **)(char *, int, signed int))(v49 + 88);
    if ( v72 )
      v72(&v127, v49 + 80, 2);
      v129 = *(_DWORD *)(v49 + 92);
      v128 = *(void (**)(void))(v49 + 88);
    v73 = v126 - 12;
    if ( (int *)(v126 - 12) != &dword_28898C0 )
      v99 = (unsigned int *)(v126 - 4);
          v100 = __ldrex(v99);
        while ( __strex(v100 - 1, v99) );
        v100 = (*v99)--;
      if ( v100 <= 0 )
        j_j_j_j__ZdlPv_9(v73);
    if ( v124 )
      v124();
    v74 = (void *)(v122 - 12);
    if ( (int *)(v122 - 12) != &dword_28898C0 )
      v101 = (unsigned int *)(v122 - 4);
          v102 = __ldrex(v101);
        while ( __strex(v102 - 1, v101) );
        v102 = (*v101)--;
      if ( v102 <= 0 )
        j_j_j_j__ZdlPv_9(v74);
    v75 = (void *)(v120 - 12);
    if ( (int *)(v120 - 12) != &dword_28898C0 )
      v103 = (unsigned int *)(v120 - 4);
          v104 = __ldrex(v103);
        while ( __strex(v104 - 1, v103) );
        v104 = (*v103)--;
      if ( v104 <= 0 )
        j_j_j_j__ZdlPv_9(v75);
    v76 = v119;
      v77 = (unsigned int *)(v119 + 8);
          v78 = __ldrex(v77);
        while ( __strex(v78 - 1, v77) );
        v78 = (*v77)--;
      if ( v78 == 1 )
        (*(void (**)(void))(*(_DWORD *)v76 + 12))();
    v79 = *(_DWORD *)(v110 + 60);
    sub_21E94B4((void **)&v117, "latest");
    v115 = 0;
    if ( v138 )
      ((void (__fastcall *)(char *, char *, signed int))v138)(&v114, &v137, 2);
      v116 = v139;
      v115 = v138;
    v112 = 0;
    if ( v128 )
      ((void (__fastcall *)(char *, char *, signed int))v128)(&v111, &v127, 2);
      v113 = v129;
      v112 = v128;
    RealmsAPI::initiateWorldDownload(v79, v107, 1, (const void **)&v117, (int)&v114, (int)&v111);
    if ( v112 )
      v112();
    if ( v115 )
      v115();
    v80 = (void *)(v117 - 12);
    if ( (int *)(v117 - 12) != &dword_28898C0 )
      v105 = (unsigned int *)(v117 - 4);
          v106 = __ldrex(v105);
        while ( __strex(v106 - 1, v105) );
        v106 = (*v105)--;
      if ( v106 <= 0 )
        j_j_j_j__ZdlPv_9(v80);
      v128();
      v138();
        v81 = __ldrex(v19);
      while ( __strex(v81 - 1, v19) );
      v81 = (*v19)--;
    if ( v81 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v108 + 12))(v108);
  v82 = (void *)(v140 - 12);
  if ( (int *)(v140 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v140 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j__ZdlPv_9(v82);
}


void __fastcall RealmsFileDownloader::_retryFileDownloader(int a1, int a2, int a3)
{
  int v3; // r6@1
  const void **v4; // r4@1
  int v5; // r8@2
  int v6; // r7@2
  void (__fastcall *v7)(char *, int, signed int); // r3@2
  void (__fastcall *v8)(char *, int, signed int); // r3@4
  void *v9; // r0@10
  unsigned int *v10; // r2@14
  signed int v11; // r1@16
  char v12; // [sp+Ch] [bp-44h]@5
  void (*v13)(void); // [sp+14h] [bp-3Ch]@4
  int v14; // [sp+18h] [bp-38h]@5
  char v15; // [sp+1Ch] [bp-34h]@3
  void (*v16)(void); // [sp+24h] [bp-2Ch]@2
  int v17; // [sp+28h] [bp-28h]@3
  int v18; // [sp+30h] [bp-20h]@2

  v3 = a1;
  v4 = *(const void ***)(a1 + 12);
  if ( v4 )
  {
    v5 = *(_DWORD *)(a1 + 60);
    sub_21E94B4((void **)&v18, "latest");
    v6 = *(_DWORD *)(v3 + 12);
    v16 = 0;
    v7 = *(void (__fastcall **)(char *, int, signed int))(v6 + 72);
    if ( v7 )
    {
      v7(&v15, v6 + 64, 2);
      v17 = *(_DWORD *)(v6 + 76);
      v16 = *(void (**)(void))(v6 + 72);
      v6 = *(_DWORD *)(v3 + 12);
    }
    v13 = 0;
    v8 = *(void (__fastcall **)(char *, int, signed int))(v6 + 88);
    if ( v8 )
      v8(&v12, v6 + 80, 2);
      v14 = *(_DWORD *)(v6 + 92);
      v13 = *(void (**)(void))(v6 + 88);
    RealmsAPI::initiateWorldDownload(v5, v4, 1, (const void **)&v18, (int)&v15, (int)&v12);
    if ( v13 )
      v13();
    if ( v16 )
      v16();
    v9 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v18 - 4);
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
        j_j_j_j__ZdlPv_9(v9);
  }
  else
    if ( !*(_DWORD *)(a3 + 8) )
      sub_21E5F48();
    (*(void (__fastcall **)(int, _DWORD))(a3 + 12))(a3, 0);
}


void __fastcall RealmsFileDownloader::initFileDownloader(int a1, int *a2, int a3, int a4, int a5, int a6, int a7)
{
  RealmsFileDownloader::initFileDownloader(a1, a2, a3, a4, a5, a6, a7);
}


IFileChunkDownloader *__fastcall RealmsFileDownloader::RealmsFileDownloader(IFileChunkDownloader *a1, int a2)
{
  int v2; // r4@1
  IFileChunkDownloader *result; // r0@1

  v2 = a2;
  result = StreamFileDownloader::StreamFileDownloader(a1);
  *(_DWORD *)result = &off_26EBCD0;
  *((_DWORD *)result + 15) = v2;
  return result;
}
