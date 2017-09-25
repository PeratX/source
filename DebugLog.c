

signed int DebugLog::rakDebugLog(DebugLog *this, const char *a2, ...)
{
  return 1;
}


void __fastcall DebugLog::createLog(DebugLog *a1)
{
  DebugLog *v1; // r0@1

  j_DebugLog::_initAreaFilterMap(a1);
  j_j_j__ZN8DebugLog22_initPriorityFilterMapEv(v1);
}


void __fastcall DebugLog::_initPriorityFilterMap(DebugLog *this)
{
  DebugLog::_initPriorityFilterMap(this);
}


int __fastcall DebugLog::setTrace(int result, bool a2)
{
  LOBYTE(DebugLog::trace) = result;
  return result;
}


void __fastcall DebugLog::_initPriorityFilterMap(DebugLog *this)
{
  void *v1; // r0@1
  void *v2; // r0@2
  void *v3; // r0@3
  void *v4; // r0@4
  void *v5; // r0@5
  void *v6; // r0@6
  unsigned int *v7; // r2@8
  signed int v8; // r1@10
  unsigned int *v9; // r2@12
  signed int v10; // r1@14
  unsigned int *v11; // r2@16
  signed int v12; // r1@18
  unsigned int *v13; // r2@20
  signed int v14; // r1@22
  unsigned int *v15; // r2@24
  signed int v16; // r1@26
  unsigned int *v17; // r2@28
  signed int v18; // r1@30
  int v19; // [sp+8h] [bp-38h]@6
  int v20; // [sp+10h] [bp-30h]@5
  int v21; // [sp+18h] [bp-28h]@4
  int v22; // [sp+20h] [bp-20h]@3
  int v23; // [sp+28h] [bp-18h]@2
  int v24; // [sp+30h] [bp-10h]@1

  sub_21E94B4((void **)&v24, "VERBOSE");
  *(_DWORD *)j_std::map<std::string,unsigned int,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::operator[](
               (int)&DebugLog::priorityFilterMap,
               (const void **)&v24) = 1;
  v1 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v1);
  }
  sub_21E94B4((void **)&v23, "INFO");
               (const void **)&v23) = 2;
  v2 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v23 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v2);
  sub_21E94B4((void **)&v22, "WARN");
               (const void **)&v22) = 4;
  v3 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v22 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  sub_21E94B4((void **)&v21, "ERROR");
               (const void **)&v21) = 8;
  v4 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v21 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  sub_21E94B4((void **)&v20, "ALL");
               (const void **)&v20) = -1;
  v5 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v20 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v19, "UNKNOWN");
               (const void **)&v19) = 0x40000000;
  v6 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v19 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
}


signed int __fastcall DebugLog::log_va(signed int result, int a2, int a3, int a4, const char *a5, void *a6)
{
  if ( DebugLog::priorityFilter & a2 )
  {
    if ( DebugLog::areaFilter & result )
      result = (signed int)j_j_j__ZN8DebugLog7_log_vaEjjPKciS1_St9__va_list_0(result, a2, a3, a4, a5, a6);
  }
  return result;
}


int __fastcall DebugLog::setFlushImmediate(int result, bool a2)
{
  LOBYTE(DebugLog::flushImmediate) = result;
  return result;
}


void __fastcall DebugLog::_initAreaFilterMap(DebugLog *this)
{
  void *v1; // r0@1
  void *v2; // r0@2
  void *v3; // r0@3
  void *v4; // r0@4
  void *v5; // r0@5
  void *v6; // r0@6
  void *v7; // r0@7
  void *v8; // r0@8
  void *v9; // r0@9
  void *v10; // r0@10
  void *v11; // r0@11
  void *v12; // r0@12
  void *v13; // r0@13
  void *v14; // r0@14
  void *v15; // r0@15
  void *v16; // r0@16
  void *v17; // r0@17
  void *v18; // r0@18
  void *v19; // r0@19
  void *v20; // r0@20
  void *v21; // r0@21
  void *v22; // r0@22
  void *v23; // r0@23
  void *v24; // r0@24
  void *v25; // r0@25
  void *v26; // r0@26
  void *v27; // r0@27
  void *v28; // r0@28
  void *v29; // r0@29
  unsigned int *v30; // r2@31
  signed int v31; // r1@33
  unsigned int *v32; // r2@35
  signed int v33; // r1@37
  unsigned int *v34; // r2@39
  signed int v35; // r1@41
  unsigned int *v36; // r2@43
  signed int v37; // r1@45
  unsigned int *v38; // r2@47
  signed int v39; // r1@49
  unsigned int *v40; // r2@51
  signed int v41; // r1@53
  unsigned int *v42; // r2@55
  signed int v43; // r1@57
  unsigned int *v44; // r2@59
  signed int v45; // r1@61
  unsigned int *v46; // r2@63
  signed int v47; // r1@65
  unsigned int *v48; // r2@67
  signed int v49; // r1@69
  unsigned int *v50; // r2@71
  signed int v51; // r1@73
  unsigned int *v52; // r2@75
  signed int v53; // r1@77
  unsigned int *v54; // r2@79
  signed int v55; // r1@81
  unsigned int *v56; // r2@83
  signed int v57; // r1@85
  unsigned int *v58; // r2@87
  signed int v59; // r1@89
  unsigned int *v60; // r2@91
  signed int v61; // r1@93
  unsigned int *v62; // r2@95
  signed int v63; // r1@97
  unsigned int *v64; // r2@99
  signed int v65; // r1@101
  unsigned int *v66; // r2@103
  signed int v67; // r1@105
  unsigned int *v68; // r2@107
  signed int v69; // r1@109
  unsigned int *v70; // r2@111
  signed int v71; // r1@113
  unsigned int *v72; // r2@115
  signed int v73; // r1@117
  unsigned int *v74; // r2@119
  signed int v75; // r1@121
  unsigned int *v76; // r2@123
  signed int v77; // r1@125
  unsigned int *v78; // r2@127
  signed int v79; // r1@129
  unsigned int *v80; // r2@131
  signed int v81; // r1@133
  unsigned int *v82; // r2@135
  signed int v83; // r1@137
  unsigned int *v84; // r2@139
  signed int v85; // r1@141
  unsigned int *v86; // r2@143
  signed int v87; // r1@145
  int v88; // [sp+8h] [bp-F0h]@29
  int v89; // [sp+10h] [bp-E8h]@28
  int v90; // [sp+18h] [bp-E0h]@27
  int v91; // [sp+20h] [bp-D8h]@26
  int v92; // [sp+28h] [bp-D0h]@25
  int v93; // [sp+30h] [bp-C8h]@24
  int v94; // [sp+38h] [bp-C0h]@23
  int v95; // [sp+40h] [bp-B8h]@22
  int v96; // [sp+48h] [bp-B0h]@21
  int v97; // [sp+50h] [bp-A8h]@20
  int v98; // [sp+58h] [bp-A0h]@19
  int v99; // [sp+60h] [bp-98h]@18
  int v100; // [sp+68h] [bp-90h]@17
  int v101; // [sp+70h] [bp-88h]@16
  int v102; // [sp+78h] [bp-80h]@15
  int v103; // [sp+80h] [bp-78h]@14
  int v104; // [sp+88h] [bp-70h]@13
  int v105; // [sp+90h] [bp-68h]@12
  int v106; // [sp+98h] [bp-60h]@11
  int v107; // [sp+A0h] [bp-58h]@10
  int v108; // [sp+A8h] [bp-50h]@9
  int v109; // [sp+B0h] [bp-48h]@8
  int v110; // [sp+B8h] [bp-40h]@7
  int v111; // [sp+C0h] [bp-38h]@6
  int v112; // [sp+C8h] [bp-30h]@5
  int v113; // [sp+D0h] [bp-28h]@4
  int v114; // [sp+D8h] [bp-20h]@3
  int v115; // [sp+E0h] [bp-18h]@2
  int v116; // [sp+E8h] [bp-10h]@1

  sub_21E94B4((void **)&v116, "PLATFORM");
  *(_DWORD *)j_std::map<std::string,unsigned int,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::operator[](
               (int)&DebugLog::areaFilterMap,
               (const void **)&v116) = 1;
  v1 = (void *)(v116 - 12);
  if ( (int *)(v116 - 12) != &dword_28898C0 )
  {
    v30 = (unsigned int *)(v116 - 4);
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
      j_j_j_j__ZdlPv_9(v1);
  }
  sub_21E94B4((void **)&v115, "ENTITY");
               (const void **)&v115) = 2;
  v2 = (void *)(v115 - 12);
  if ( (int *)(v115 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v115 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v2);
  sub_21E94B4((void **)&v114, "DATABASE");
               (const void **)&v114) = 4;
  v3 = (void *)(v114 - 12);
  if ( (int *)(v114 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v114 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  sub_21E94B4((void **)&v113, "GUI");
               (const void **)&v113) = 8;
  v4 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v113 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  sub_21E94B4((void **)&v112, "SYSTEM");
               (const void **)&v112) = 16;
  v5 = (void *)(v112 - 12);
  if ( (int *)(v112 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v112 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v111, "NETWORK");
               (const void **)&v111) = 32;
  v6 = (void *)(v111 - 12);
  if ( (int *)(v111 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v111 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v110, "RENDER");
               (const void **)&v110) = 64;
  v7 = (void *)(v110 - 12);
  if ( (int *)(v110 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v110 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v109, "MEMORY");
               (const void **)&v109) = 128;
  v8 = (void *)(v109 - 12);
  if ( (int *)(v109 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v109 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v108, "ANIMATION");
               (const void **)&v108) = 256;
  v9 = (void *)(v108 - 12);
  if ( (int *)(v108 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v108 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v107, "INPUT");
               (const void **)&v107) = 512;
  v10 = (void *)(v107 - 12);
  if ( (int *)(v107 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v107 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v106, "LEVEL");
               (const void **)&v106) = 1024;
  v11 = (void *)(v106 - 12);
  if ( (int *)(v106 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v106 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v105, "SERVER");
               (const void **)&v105) = 2048;
  v12 = (void *)(v105 - 12);
  if ( (int *)(v105 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v105 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v104, "DLC");
               (const void **)&v104) = 4096;
  v13 = (void *)(v104 - 12);
  if ( (int *)(v104 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v104 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v103, "PHYSICS");
               (const void **)&v103) = 0x2000;
  v14 = (void *)(v103 - 12);
  if ( (int *)(v103 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v103 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v102, "FILE");
               (const void **)&v102) = 0x4000;
  v15 = (void *)(v102 - 12);
  if ( (int *)(v102 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v102 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v101, "STORAGE");
               (const void **)&v101) = 0x8000;
  v16 = (void *)(v101 - 12);
  if ( (int *)(v101 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v101 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v100, "REALMS");
               (const void **)&v100) = 0x10000;
  v17 = (void *)(v100 - 12);
  if ( (int *)(v100 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v100 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v99, "REALMSAPI");
               (const void **)&v99) = 0x20000;
  v18 = (void *)(v99 - 12);
  if ( (int *)(v99 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v99 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v98, "XBOXLIVE");
               (const void **)&v98) = 0x40000;
  v19 = (void *)(v98 - 12);
  if ( (int *)(v98 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v98 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v97, "USERMANAGER");
               (const void **)&v97) = 0x80000;
  v20 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v97 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  sub_21E94B4((void **)&v96, "XSAPI");
               (const void **)&v96) = 0x100000;
  v21 = (void *)(v96 - 12);
  if ( (int *)(v96 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v96 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v95, "PERF");
               (const void **)&v95) = 0x200000;
  v22 = (void *)(v95 - 12);
  if ( (int *)(v95 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v95 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v94, "BLOCKS");
               (const void **)&v94) = 0x800000;
  v23 = (void *)(v94 - 12);
  if ( (int *)(v94 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v94 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  sub_21E94B4((void **)&v93, "TELEMETRY");
               (const void **)&v93) = 0x400000;
  v24 = (void *)(v93 - 12);
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v93 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  sub_21E94B4((void **)&v92, "RAKNET");
               (const void **)&v92) = 0x1000000;
  v25 = (void *)(v92 - 12);
  if ( (int *)(v92 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v92 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  sub_21E94B4((void **)&v91, "REMIXAPI");
               (const void **)&v91) = 0x2000000;
  v26 = (void *)(v91 - 12);
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v91 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  sub_21E94B4((void **)&v90, "SOUND");
               (const void **)&v90) = 0x4000000;
  v27 = (void *)(v90 - 12);
  if ( (int *)(v90 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v90 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  sub_21E94B4((void **)&v89, "ALL");
               (const void **)&v89) = -1;
  v28 = (void *)(v89 - 12);
  if ( (int *)(v89 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v89 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  sub_21E94B4((void **)&v88, "LOGI AND SIMILAR ARE DEPRECATED. USE CORRECT LOGGING MACROS! ALOGI, etc.!");
               (const void **)&v88) = 0x40000000;
  v29 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v88 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
}


int __fastcall DebugLog::setAppend(int result, bool a2)
{
  LOBYTE(DebugLog::append) = result;
  return result;
}


char *__fastcall DebugLog::_log_va(signed int a1, int a2, int a3, int a4, const char *a5, void *a6)
{
  int v6; // r4@1
  int v7; // r8@1
  int v8; // r9@1
  unsigned int v9; // r1@1
  const char *v10; // r3@2
  int v11; // r1@6
  const char *v12; // r0@6
  char *v13; // r0@66
  unsigned int v14; // r0@69
  unsigned int v15; // r0@70
  unsigned int v16; // r6@71
  int v17; // r3@71
  int v18; // r0@71
  unsigned int v19; // r2@71
  int v20; // r0@75
  int v21; // r5@75
  unsigned int v22; // r0@79
  int v23; // r0@80
  const char *v24; // r1@80
  const char *v25; // r2@80
  void *v26; // r0@84
  char *result; // r0@85
  unsigned int *v28; // r2@87
  signed int v29; // r1@89
  time_t timer; // [sp+8h] [bp-830h]@66
  int v31; // [sp+Ch] [bp-82Ch]@79
  int v32; // [sp+14h] [bp-824h]@69
  char v33; // [sp+18h] [bp-820h]@66
  char s; // [sp+418h] [bp-420h]@65
  RakNet *v35; // [sp+818h] [bp-20h]@1

  v6 = a2;
  v7 = a4;
  v8 = a3;
  v35 = _stack_chk_guard;
  v9 = a2 + 1;
  if ( v9 > 9 )
    v10 = "UNKNOWN";
  else
    v10 = off_27266F0[v9];
  if ( a1 >= 0x2000 )
  {
    if ( a1 >= 0x100000 )
    {
      if ( a1 < 0x800000 )
      {
        if ( a1 == 0x100000 )
        {
          v12 = "XSAPI";
          goto LABEL_65;
        }
        if ( a1 == 0x200000 )
          v12 = "PERF";
        if ( a1 == 0x400000 )
          v12 = "TELEMETRY";
      }
      else if ( a1 >= 0x2000000 )
        if ( a1 == 0x2000000 )
          v12 = "REMIXAPI";
        if ( a1 == 0x4000000 )
          v12 = "SOUND";
      else
        if ( a1 == 0x800000 )
          v12 = "BLOCKS";
        if ( a1 == 0x1000000 )
          v12 = "RAKNET";
    }
    else if ( a1 < 0x10000 )
      if ( a1 == 0x2000 )
        v12 = "PHYSICS";
        goto LABEL_65;
      if ( a1 == 0x4000 )
        v12 = "FILE";
      if ( a1 == 0x8000 )
        v12 = "STORAGE";
    else if ( a1 >= 0x40000 )
      if ( a1 == 0x40000 )
        v12 = "XBOXLIVE";
      if ( a1 == 0x80000 )
        v12 = "USERMANAGER";
    else
      if ( a1 == 0x10000 )
        v12 = "REALMS";
      if ( a1 == 0x20000 )
        v12 = "REALMSAPI";
LABEL_51:
    v12 = "LOGI AND SIMILAR ARE DEPRECATED. USE CORRECT LOGGING MACROS! ALOGI, etc.!";
    goto LABEL_65;
  }
  if ( a1 > 63 )
    if ( a1 < 512 )
      if ( a1 == 64 )
        v12 = "RENDER";
      if ( a1 == 128 )
        v12 = "MEMORY";
      if ( a1 == 256 )
        v12 = "ANIMATION";
    else if ( a1 >= 2048 )
      if ( a1 == 2048 )
        v12 = "SERVER";
      if ( a1 == 4096 )
        v12 = "DLC";
      if ( a1 == 512 )
        v12 = "INPUT";
      if ( a1 == 1024 )
        v12 = "LEVEL";
    goto LABEL_51;
  v11 = a1 + 1;
  v12 = "PLATFORM";
  switch ( v11 )
    case 0:
      v12 = "ALL";
      break;
    case 3:
      v12 = "ENTITY";
    case 5:
      v12 = "DATABASE";
    case 9:
      v12 = "GUI";
    case 1:
    case 4:
    case 6:
    case 7:
    case 8:
      goto LABEL_51;
    case 2:
    default:
      if ( "PLATFORM" == (char *)16 )
        v12 = "SYSTEM";
        if ( "PLATFORM" != (char *)32 )
          goto LABEL_51;
        v12 = "NETWORK";
LABEL_65:
  j_snprintf(&s, 0x400u, "%s %s ", v10, v12);
  if ( DebugLog::timestamp )
    j_time(&timer);
    v13 = j_ctime(&timer);
    j_sprintf(&v33, " [%s]", v13);
    j_strcat(&s, &v33);
  if ( (_BYTE)DebugLog::trace )
    j_sprintf(&v33, " %s #%d ", v8, v7);
  sub_21E94B4((void **)&v32, &s);
  v14 = j_vsnprintf(&v33, 0x400u, a5, a6);
  if ( v14 > 0x3FE )
    v16 = *(_DWORD *)(v32 - 12);
    sub_21E7434((const void **)&v32, v14 + 1, 32);
    v18 = v32;
    v19 = *(_DWORD *)(v32 - 12);
    if ( v19 <= v16 )
      sub_21E5B04("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)", v16, v19, v17);
    if ( *(_DWORD *)(v32 - 4) >= 0 )
      sub_21E8010((const void **)&v32);
      v18 = v32;
    j_vsprintf((char *)(v18 + v16), a5, a6);
    v15 = j_strlen_0(&v33);
    sub_21E7408((const void **)&v32, &v33, v15);
  v20 = v32;
  v21 = *(_DWORD *)(v32 - 12) - 1;
  if ( *(_DWORD *)(v32 - 4) >= 0 )
    sub_21E8010((const void **)&v32);
    v20 = v32;
  if ( *(_BYTE *)(v20 + v21) != 10 )
    sub_21E7408((const void **)&v32, "\n", 1u);
  v31 = 0;
  timer = 2573;
  v22 = j_strlen_0((const char *)&timer);
  sub_21E7408((const void **)&v32, (char *)&timer, v22);
  if ( v6 == 1 )
    v23 = 2;
    v24 = "Minecraft";
    v25 = "%s";
  else if ( v6 == 2 )
    v23 = 4;
    v23 = 5;
  j___android_log_print(v23, (int)v24, v25);
  v26 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v32 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  result = (char *)(_stack_chk_guard - v35);
  if ( _stack_chk_guard != v35 )
    j___stack_chk_fail_0((int)result);
  return result;
}


int __fastcall DebugLog::togglePriorityFilter(int result, unsigned int a2)
{
  int v2; // r3@1

  v2 = DebugLog::priorityFilter & ~result;
  if ( !(DebugLog::priorityFilter & result) )
    v2 = DebugLog::priorityFilter | result;
  DebugLog::priorityFilter = v2;
  return result;
}


const char *__fastcall DebugLog::_areaFilterString(DebugLog *this, unsigned int a2)
{
  char *v2; // r1@3
  const char *result; // r0@3

  if ( (signed int)this >= 0x2000 )
  {
    if ( (signed int)this >= 0x100000 )
    {
      if ( (signed int)this < 0x800000 )
      {
        if ( this == (DebugLog *)0x100000 )
          return "XSAPI";
        if ( this == (DebugLog *)0x200000 )
          return "PERF";
        if ( this == (DebugLog *)0x400000 )
          return "TELEMETRY";
      }
      else if ( (signed int)this >= 0x2000000 )
        if ( this == (DebugLog *)&loc_2000000 )
          return "REMIXAPI";
        if ( this == (DebugLog *)0x4000000 )
          return "SOUND";
      else
        if ( this == (DebugLog *)0x800000 )
          return "BLOCKS";
        if ( this == (DebugLog *)&loc_1000000 )
          return "RAKNET";
    }
    else if ( (signed int)this < 0x10000 )
      if ( this == (DebugLog *)0x2000 )
        return "PHYSICS";
      if ( this == (DebugLog *)0x4000 )
        return "FILE";
      if ( this == (DebugLog *)0x8000 )
        return "STORAGE";
    else if ( (signed int)this >= 0x40000 )
      if ( this == (DebugLog *)0x40000 )
        return "XBOXLIVE";
      if ( this == (DebugLog *)0x80000 )
        return "USERMANAGER";
    else
      if ( this == (DebugLog *)0x10000 )
        return "REALMS";
      if ( this == (DebugLog *)0x20000 )
        return "REALMSAPI";
    return "LOGI AND SIMILAR ARE DEPRECATED. USE CORRECT LOGGING MACROS! ALOGI, etc.!";
  }
  if ( (signed int)this > 63 )
    if ( (signed int)this < 512 )
      if ( this == (DebugLog *)64 )
        return "RENDER";
      if ( this == (DebugLog *)128 )
        return "MEMORY";
      if ( this == (DebugLog *)256 )
        return "ANIMATION";
    else if ( (signed int)this >= 2048 )
      if ( this == (DebugLog *)2048 )
        return "SERVER";
      if ( this == (DebugLog *)4096 )
        return "DLC";
      if ( this == (DebugLog *)512 )
        return "INPUT";
      if ( this == (DebugLog *)1024 )
        return "LEVEL";
  v2 = (char *)this + 1;
  result = "PLATFORM";
  switch ( v2 )
    case 0u:
      return "ALL";
    case 3u:
      return "ENTITY";
    case 5u:
      return "DATABASE";
    case 9u:
      return "GUI";
    case 1u:
    case 4u:
    case 6u:
    case 7u:
    case 8u:
      return "LOGI AND SIMILAR ARE DEPRECATED. USE CORRECT LOGGING MACROS! ALOGI, etc.!";
    case 2u:
      return result;
    default:
      if ( "PLATFORM" == (char *)16 )
        result = "SYSTEM";
        if ( "PLATFORM" != (char *)32 )
          return "LOGI AND SIMILAR ARE DEPRECATED. USE CORRECT LOGGING MACROS! ALOGI, etc.!";
        result = "NETWORK";
      break;
  return result;
}


const char *__fastcall DebugLog::_priorityFilterString(DebugLog *this, unsigned int a2)
{
  char *v2; // r0@1
  const char *result; // r0@2

  v2 = (char *)this + 1;
  if ( (unsigned int)v2 > 9 )
    result = "UNKNOWN";
  else
    result = off_27266F0[(signed int)v2];
  return result;
}


signed int __fastcall DebugLog::priority(const void **a1)
{
  const void **v1; // r8@1
  int v2; // r0@1
  const void *v3; // r5@2
  size_t v4; // r7@2
  int *v5; // r9@2
  int *v6; // r6@3
  _DWORD *v7; // r0@4
  size_t v8; // r4@4
  size_t v9; // r2@4
  int v10; // r0@6
  _DWORD *v11; // r1@15
  unsigned int v12; // r4@15
  unsigned int v13; // r5@15
  size_t v14; // r2@15
  int v15; // r0@17
  signed int result; // r0@20

  v1 = a1;
  v2 = dword_27B5D04;
  if ( dword_27B5D04 )
  {
    v3 = *v1;
    v4 = *((_DWORD *)*v1 - 3);
    v5 = &dword_27B5D00;
    do
    {
      v6 = (int *)v2;
      while ( 1 )
      {
        v7 = (_DWORD *)v6[4];
        v8 = *(v7 - 3);
        v9 = *(v7 - 3);
        if ( v8 > v4 )
          v9 = v4;
        v10 = j_memcmp_0(v7, v3, v9);
        if ( !v10 )
          v10 = v8 - v4;
        if ( v10 >= 0 )
          break;
        v6 = (int *)v6[3];
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_14;
        }
      }
      v2 = v6[2];
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = &dword_27B5D00;
LABEL_14:
  if ( v6 == &dword_27B5D00 )
    goto LABEL_24;
  v11 = (_DWORD *)v6[4];
  v12 = *((_DWORD *)*v1 - 3);
  v13 = *(v11 - 3);
  v14 = *((_DWORD *)*v1 - 3);
  if ( v12 > v13 )
    v14 = *(v11 - 3);
  v15 = j_memcmp_0(*v1, v11, v14);
  if ( !v15 )
    v15 = v12 - v13;
  if ( v15 < 0 )
LABEL_24:
    result = 0x40000000;
    result = v6[5];
  return result;
}


int __fastcall DebugLog::updateLogSetting(int a1, const char **a2)
{
  int v2; // r4@1
  const char *v3; // r5@1
  void (__fastcall *v5)(int, int); // r5@6
  int v6; // r0@6
  int v7; // r5@6
  void (__fastcall *v8)(int, int); // r5@7
  int v9; // r0@7
  void (__fastcall *v10)(int, int); // r5@8
  int v11; // r0@8
  void (__fastcall *v12)(int, int); // r5@9
  int v13; // r0@9

  v2 = a1;
  v3 = *a2;
  if ( !j_strcmp_0(*a2, "append") )
  {
    v8 = (void (__fastcall *)(int, int))(*(_QWORD *)(*(_DWORD *)v2 + 12) >> 32);
    v9 = ((int (__fastcall *)(int))*(_QWORD *)(*(_DWORD *)v2 + 12))(v2);
    v8(v2, v9 ^ 1);
    v7 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
    LOBYTE(DebugLog::append) = v7;
  }
  else if ( !j_strcmp_0(v3, "flush") )
    v10 = (void (__fastcall *)(int, int))(*(_QWORD *)(*(_DWORD *)v2 + 20) >> 32);
    v11 = ((int (__fastcall *)(int))*(_QWORD *)(*(_DWORD *)v2 + 20))(v2);
    v10(v2, v11 ^ 1);
    v7 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 20))(v2);
    LOBYTE(DebugLog::flushImmediate) = v7;
  else if ( !j_strcmp_0(v3, "timestamp") )
    v12 = (void (__fastcall *)(int, int))(*(_QWORD *)(*(_DWORD *)v2 + 28) >> 32);
    v13 = ((int (__fastcall *)(int))*(_QWORD *)(*(_DWORD *)v2 + 28))(v2);
    v12(v2, v13 ^ 1);
    v7 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 28))(v2);
    DebugLog::timestamp = v7;
  else
    if ( j_strcmp_0(v3, "trace") )
      return 0;
    v5 = (void (__fastcall *)(int, int))(*(_QWORD *)(*(_DWORD *)v2 + 36) >> 32);
    v6 = ((int (__fastcall *)(int))*(_QWORD *)(*(_DWORD *)v2 + 36))(v2);
    v5(v2, v6 ^ 1);
    v7 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 36))(v2);
    LOBYTE(DebugLog::trace) = v7;
  (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
  return v7;
}


void __fastcall DebugLog::_initAreaFilterMap(DebugLog *this)
{
  DebugLog::_initAreaFilterMap(this);
}


int __fastcall DebugLog::updateLogFilter(int a1, const char **a2, unsigned __int64 *a3, const void **a4)
{
  unsigned __int64 *v4; // r4@1
  const char *v5; // r5@1
  int v6; // r6@1
  int result; // r0@2
  int *v8; // r1@3
  int *v9; // r7@4
  int *v10; // r1@5
  int *v11; // r7@6
  unsigned int *v12; // r2@7
  signed int v13; // r1@9
  unsigned int *v14; // r2@15
  signed int v15; // r1@17
  unsigned int *v16; // r2@19
  signed int v17; // r1@21
  unsigned int *v18; // r2@23
  signed int v19; // r1@25
  unsigned int *v20; // r2@27
  signed int v21; // r1@29
  _BYTE *v22; // r0@47
  char *v23; // r5@48
  char *v24; // r4@49
  const void **i; // r11@54
  int v26; // t1@55
  int v27; // r0@56
  int *v28; // r4@56
  void *v29; // r5@57
  int *v30; // r10@57
  size_t v31; // r6@57
  _DWORD *v32; // r0@59
  size_t v33; // r7@59
  size_t v34; // r2@59
  int v35; // r0@61
  _DWORD *v36; // r10@68
  _DWORD *v37; // r1@68
  unsigned int v38; // r5@68
  unsigned int v39; // r6@68
  size_t v40; // r2@68
  int v41; // r0@70
  int v42; // r8@73
  int v43; // r1@74
  const void **v44; // r0@78
  char *v45; // r0@78
  const void **v46; // r0@79
  char *v47; // r0@79
  int *v48; // r1@80
  char *v49; // r0@82
  char *v50; // r0@83
  char *v51; // r0@84
  unsigned int *v52; // r2@87
  signed int v53; // r1@89
  unsigned int *v54; // r2@95
  signed int v55; // r1@97
  unsigned int *v56; // r2@99
  signed int v57; // r1@101
  unsigned int *v58; // r2@103
  signed int v59; // r1@105
  unsigned int *v60; // r2@107
  signed int v61; // r1@109
  _BYTE *v62; // r0@127
  char *v63; // r5@128
  char *v64; // r4@129
  const void **j; // r11@134
  int v66; // t1@135
  int v67; // r0@136
  int *v68; // r4@136
  void *v69; // r5@137
  int *v70; // r10@137
  size_t v71; // r6@137
  _DWORD *v72; // r0@139
  size_t v73; // r7@139
  size_t v74; // r2@139
  int v75; // r0@141
  _DWORD *v76; // r10@148
  _DWORD *v77; // r1@148
  unsigned int v78; // r5@148
  unsigned int v79; // r6@148
  size_t v80; // r2@148
  int v81; // r0@150
  int v82; // r8@153
  int v83; // r1@154
  const void **v84; // r0@158
  char *v85; // r0@158
  const void **v86; // r0@159
  char *v87; // r0@159
  int *v88; // r1@160
  char *v89; // r0@162
  char *v90; // r0@163
  char *v91; // r0@164
  int v92; // [sp+18h] [bp-58h]@2
  int v93; // [sp+18h] [bp-58h]@5
  const void **v94; // [sp+1Ch] [bp-54h]@1
  int v95; // [sp+24h] [bp-4Ch]@3
  int v96; // [sp+24h] [bp-4Ch]@5
  int *v97; // [sp+28h] [bp-48h]@47
  int *v98; // [sp+28h] [bp-48h]@127
  char *v99; // [sp+2Ch] [bp-44h]@99
  char *v100; // [sp+30h] [bp-40h]@95
  char *v101; // [sp+34h] [bp-3Ch]@19
  char *v102; // [sp+38h] [bp-38h]@23
  char *v103; // [sp+3Ch] [bp-34h]@15
  char *v104; // [sp+40h] [bp-30h]@27
  void *s2; // [sp+44h] [bp-2Ch]@4

  v4 = a3;
  v5 = *a2;
  v6 = a1;
  v94 = a4;
  if ( !j_strcmp_0(*a2, "area") )
  {
    v93 = v6;
    result = *v4 >> 32;
    v10 = (int *)*v4;
    v96 = result;
    if ( v10 == (int *)result )
      return result;
    v11 = (int *)&s2;
    while ( 1 )
    {
      v97 = v10;
      sub_21E8AF4(v11, v10);
      v22 = s2;
      if ( *((_DWORD *)s2 - 1) <= -1 )
      {
        v23 = (char *)s2;
      }
      else
        sub_21E8010((const void **)v11);
        if ( *((_DWORD *)s2 - 1) > -1 )
        {
          sub_21E8010((const void **)v11);
          v22 = s2;
          v24 = (char *)s2 + *((_DWORD *)s2 - 3);
          if ( *((_DWORD *)s2 - 1) > -1 )
          {
            sub_21E8010((const void **)v11);
            v22 = s2;
          }
          goto LABEL_54;
        }
        v22 = s2;
      v24 = &v22[*((_DWORD *)v22 - 3)];
LABEL_54:
      for ( i = (const void **)v11; v24 != v23; ++v22 )
        v26 = (unsigned __int8)*v23++;
        *v22 = *(_BYTE *)(toupper_tab_ + 2 * v26 + 2);
      v27 = dword_27B5CEC;
      v28 = &dword_27B5CE8;
      if ( dword_27B5CEC )
        v29 = s2;
        v30 = &dword_27B5CE8;
        v31 = *((_DWORD *)s2 - 3);
        do
          v28 = (int *)v27;
          while ( 1 )
            v32 = (_DWORD *)v28[4];
            v33 = *(v32 - 3);
            v34 = *(v32 - 3);
            if ( v33 > v31 )
              v34 = v31;
            v35 = j_memcmp_0(v32, v29, v34);
            if ( !v35 )
              v35 = v33 - v31;
            if ( v35 >= 0 )
              break;
            v28 = (int *)v28[3];
            if ( !v28 )
            {
              v28 = v30;
              goto LABEL_67;
            }
          v27 = v28[2];
          v30 = v28;
        while ( v27 );
LABEL_67:
      v11 = (int *)i;
      if ( v28 != &dword_27B5CE8 )
        v36 = s2;
        v37 = (_DWORD *)v28[4];
        v38 = *((_DWORD *)s2 - 3);
        v39 = *(v37 - 3);
        v40 = *((_DWORD *)s2 - 3);
        if ( v38 > v39 )
          v40 = *(v37 - 3);
        v41 = j_memcmp_0(s2, v37, v40);
        if ( !v41 )
          v41 = v38 - v39;
        if ( v41 >= 0 )
          v42 = v28[5];
          if ( v42 != 0x40000000 )
            v43 = DebugLog::areaFilter & ~v42;
            if ( !(DebugLog::areaFilter & v42) )
              v43 = DebugLog::areaFilter | v42;
            DebugLog::areaFilter = v43;
            if ( *(_DWORD *)v93 )
              (*(void (**)(void))(**(_DWORD **)v93 + 44))();
              (*(void (**)(void))(**(_DWORD **)v93 + 8))();
              v36 = s2;
            v103 = (char *)&unk_28898CC;
            sub_21E6FCC((const void **)&v103, *(v36 - 3) + 9);
            sub_21E7408((const void **)&v103, "log area ", 9u);
            sub_21E72F0((const void **)&v103, i);
            v44 = sub_21E7408((const void **)&v103, " enabled\n", 9u);
            v104 = (char *)*v44;
            *v44 = &unk_28898CC;
            v45 = v103 - 12;
            if ( (int *)(v103 - 12) != &dword_28898C0 )
              v14 = (unsigned int *)(v103 - 4);
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
                j_j_j_j__ZdlPv_9(v45);
            v101 = (char *)&unk_28898CC;
            sub_21E6FCC((const void **)&v101, *((_DWORD *)s2 - 3) + 9);
            sub_21E7408((const void **)&v101, "log area ", 9u);
            sub_21E72F0((const void **)&v101, i);
            v46 = sub_21E7408((const void **)&v101, " disabled\n", 0xAu);
            v102 = (char *)*v46;
            *v46 = &unk_28898CC;
            v47 = v101 - 12;
            if ( (int *)(v101 - 12) != &dword_28898C0 )
              v16 = (unsigned int *)(v101 - 4);
                  v17 = __ldrex(v16);
                while ( __strex(v17 - 1, v16) );
                v17 = (*v16)--;
              if ( v17 <= 0 )
                j_j_j_j__ZdlPv_9(v47);
            v48 = (int *)&v102;
            if ( DebugLog::areaFilter & v42 )
              v48 = (int *)&v104;
            sub_21E72F0(v94, (const void **)v48);
            v49 = v102 - 12;
            if ( (int *)(v102 - 12) != &dword_28898C0 )
              v18 = (unsigned int *)(v102 - 4);
                  v19 = __ldrex(v18);
                while ( __strex(v19 - 1, v18) );
                v19 = (*v18)--;
              if ( v19 <= 0 )
                j_j_j_j__ZdlPv_9(v49);
            v50 = v104 - 12;
            if ( (int *)(v104 - 12) != &dword_28898C0 )
              v20 = (unsigned int *)(v104 - 4);
                  v21 = __ldrex(v20);
                while ( __strex(v21 - 1, v20) );
                v21 = (*v20)--;
              if ( v21 <= 0 )
                j_j_j_j__ZdlPv_9(v50);
      v51 = (char *)s2 - 12;
      if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)((char *)s2 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
        else
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v51);
      result = v96;
      v10 = v97 + 1;
      if ( v97 + 1 == (int *)v96 )
        return result;
    }
  }
  v92 = v6;
  result = j_strcmp_0(v5, "priority");
  if ( !result )
    v8 = (int *)*v4;
    v95 = result;
    if ( v8 != (int *)result )
      v9 = (int *)&s2;
      do
        v98 = v8;
        sub_21E8AF4(v9, v8);
        v62 = s2;
        if ( *((_DWORD *)s2 - 1) <= -1 )
          v63 = (char *)s2;
          sub_21E8010((const void **)v9);
            sub_21E8010((const void **)v9);
            v62 = s2;
            v64 = (char *)s2 + *((_DWORD *)s2 - 3);
            if ( *((_DWORD *)s2 - 1) > -1 )
              sub_21E8010((const void **)v9);
              v62 = s2;
            goto LABEL_134;
          v62 = s2;
        v64 = &v62[*((_DWORD *)v62 - 3)];
LABEL_134:
        for ( j = (const void **)v9; v64 != v63; ++v62 )
          v66 = (unsigned __int8)*v63++;
          *v62 = *(_BYTE *)(toupper_tab_ + 2 * v66 + 2);
        v67 = dword_27B5D04;
        v68 = &dword_27B5D00;
        if ( dword_27B5D04 )
          v69 = s2;
          v70 = &dword_27B5D00;
          v71 = *((_DWORD *)s2 - 3);
            v68 = (int *)v67;
            while ( 1 )
              v72 = (_DWORD *)v68[4];
              v73 = *(v72 - 3);
              v74 = *(v72 - 3);
              if ( v73 > v71 )
                v74 = v71;
              v75 = j_memcmp_0(v72, v69, v74);
              if ( !v75 )
                v75 = v73 - v71;
              if ( v75 >= 0 )
                break;
              v68 = (int *)v68[3];
              if ( !v68 )
                v68 = v70;
                goto LABEL_147;
            v67 = v68[2];
            v70 = v68;
          while ( v67 );
LABEL_147:
        v9 = (int *)j;
        if ( v68 != &dword_27B5D00 )
          v76 = s2;
          v77 = (_DWORD *)v68[4];
          v78 = *((_DWORD *)s2 - 3);
          v79 = *(v77 - 3);
          v80 = *((_DWORD *)s2 - 3);
          if ( v78 > v79 )
            v80 = *(v77 - 3);
          v81 = j_memcmp_0(s2, v77, v80);
          if ( !v81 )
            v81 = v78 - v79;
          if ( v81 >= 0 )
            v82 = v68[5];
            if ( v82 != 0x40000000 )
              v83 = DebugLog::priorityFilter & ~v82;
              if ( !(DebugLog::priorityFilter & v82) )
                v83 = DebugLog::priorityFilter | v82;
              DebugLog::priorityFilter = v83;
              if ( *(_DWORD *)v92 )
                (*(void (**)(void))(**(_DWORD **)v92 + 48))();
                (*(void (**)(void))(**(_DWORD **)v92 + 8))();
                v76 = s2;
              v100 = (char *)&unk_28898CC;
              sub_21E6FCC((const void **)&v100, *(v76 - 3) + 8);
              sub_21E7408((const void **)&v100, "log pri ", 8u);
              sub_21E72F0((const void **)&v100, j);
              v84 = sub_21E7408((const void **)&v100, " enabled\n", 9u);
              v104 = (char *)*v84;
              *v84 = &unk_28898CC;
              v85 = v100 - 12;
              if ( (int *)(v100 - 12) != &dword_28898C0 )
                v54 = (unsigned int *)(v100 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v55 = __ldrex(v54);
                  while ( __strex(v55 - 1, v54) );
                }
                else
                  v55 = (*v54)--;
                if ( v55 <= 0 )
                  j_j_j_j__ZdlPv_9(v85);
              v99 = (char *)&unk_28898CC;
              sub_21E6FCC((const void **)&v99, *((_DWORD *)s2 - 3) + 8);
              sub_21E7408((const void **)&v99, "log pri ", 8u);
              sub_21E72F0((const void **)&v99, j);
              v86 = sub_21E7408((const void **)&v99, " disabled\n", 0xAu);
              v102 = (char *)*v86;
              *v86 = &unk_28898CC;
              v87 = v99 - 12;
              if ( (int *)(v99 - 12) != &dword_28898C0 )
                v56 = (unsigned int *)(v99 - 4);
                    v57 = __ldrex(v56);
                  while ( __strex(v57 - 1, v56) );
                  v57 = (*v56)--;
                if ( v57 <= 0 )
                  j_j_j_j__ZdlPv_9(v87);
              v88 = (int *)&v102;
              if ( DebugLog::priorityFilter & v82 )
                v88 = (int *)&v104;
              sub_21E72F0(v94, (const void **)v88);
              v89 = v102 - 12;
              if ( (int *)(v102 - 12) != &dword_28898C0 )
                v58 = (unsigned int *)(v102 - 4);
                    v59 = __ldrex(v58);
                  while ( __strex(v59 - 1, v58) );
                  v59 = (*v58)--;
                if ( v59 <= 0 )
                  j_j_j_j__ZdlPv_9(v89);
              v90 = v104 - 12;
              if ( (int *)(v104 - 12) != &dword_28898C0 )
                v60 = (unsigned int *)(v104 - 4);
                    v61 = __ldrex(v60);
                  while ( __strex(v61 - 1, v60) );
                  v61 = (*v60)--;
                if ( v61 <= 0 )
                  j_j_j_j__ZdlPv_9(v90);
        v91 = (char *)s2 - 12;
        if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
          v52 = (unsigned int *)((char *)s2 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v53 = __ldrex(v52);
            while ( __strex(v53 - 1, v52) );
          else
            v53 = (*v52)--;
          if ( v53 <= 0 )
            j_j_j_j__ZdlPv_9(v91);
        result = v95;
        v8 = v98 + 1;
      while ( v98 + 1 != (int *)v95 );
  return result;
}


int __fastcall DebugLog::setTimestamp(int result, bool a2)
{
  DebugLog::timestamp = result;
  return result;
}


int __fastcall DebugLog::toggleAreaFilter(int result, unsigned int a2)
{
  int v2; // r3@1

  v2 = DebugLog::areaFilter & ~result;
  if ( !(DebugLog::areaFilter & result) )
    v2 = DebugLog::areaFilter | result;
  DebugLog::areaFilter = v2;
  return result;
}


int __fastcall DebugLog::filterLog(DebugLog *this, unsigned int a2, unsigned int a3)
{
  int result; // r0@2

  if ( DebugLog::priorityFilter & a2 )
    result = ((unsigned int)this & DebugLog::areaFilter) != 0;
  else
    result = 0;
  return result;
}


void __fastcall DebugLog::createLog(DebugLog *a1)
{
  DebugLog::createLog(a1);
}


_DWORD *__fastcall DebugLog::updateLogSetting(const char **a1, char a2)
{
  const char *v2; // r5@1
  char v3; // r4@1
  _DWORD *result; // r0@4

  v2 = *a1;
  v3 = a2;
  if ( !j_strcmp_0(*a1, "append") )
  {
    result = &DebugLog::logFileCreated;
    LOBYTE(DebugLog::append) = v3;
  }
  else if ( !j_strcmp_0(v2, "flush") )
    LOBYTE(DebugLog::flushImmediate) = v3;
  else if ( !j_strcmp_0(v2, "timestamp") )
    DebugLog::timestamp = v3;
  else
    result = (_DWORD *)j_strcmp_0(v2, "trace");
    if ( !result )
    {
      result = &DebugLog::logFileCreated;
      LOBYTE(DebugLog::trace) = v3;
    }
  return result;
}


signed int __fastcall DebugLog::area(const void **a1)
{
  const void **v1; // r8@1
  int v2; // r0@1
  const void *v3; // r5@2
  size_t v4; // r7@2
  int *v5; // r9@2
  int *v6; // r6@3
  _DWORD *v7; // r0@4
  size_t v8; // r4@4
  size_t v9; // r2@4
  int v10; // r0@6
  _DWORD *v11; // r1@15
  unsigned int v12; // r4@15
  unsigned int v13; // r5@15
  size_t v14; // r2@15
  int v15; // r0@17
  signed int result; // r0@20

  v1 = a1;
  v2 = dword_27B5CEC;
  if ( dword_27B5CEC )
  {
    v3 = *v1;
    v4 = *((_DWORD *)*v1 - 3);
    v5 = &dword_27B5CE8;
    do
    {
      v6 = (int *)v2;
      while ( 1 )
      {
        v7 = (_DWORD *)v6[4];
        v8 = *(v7 - 3);
        v9 = *(v7 - 3);
        if ( v8 > v4 )
          v9 = v4;
        v10 = j_memcmp_0(v7, v3, v9);
        if ( !v10 )
          v10 = v8 - v4;
        if ( v10 >= 0 )
          break;
        v6 = (int *)v6[3];
        if ( !v6 )
        {
          v6 = v5;
          goto LABEL_14;
        }
      }
      v2 = v6[2];
      v5 = v6;
    }
    while ( v2 );
  }
  else
    v6 = &dword_27B5CE8;
LABEL_14:
  if ( v6 == &dword_27B5CE8 )
    goto LABEL_24;
  v11 = (_DWORD *)v6[4];
  v12 = *((_DWORD *)*v1 - 3);
  v13 = *(v11 - 3);
  v14 = *((_DWORD *)*v1 - 3);
  if ( v12 > v13 )
    v14 = *(v11 - 3);
  v15 = j_memcmp_0(*v1, v11, v14);
  if ( !v15 )
    v15 = v12 - v13;
  if ( v15 < 0 )
LABEL_24:
    result = 0x40000000;
    result = v6[5];
  return result;
}


int (**__fastcall DebugLog::initializeLogExtensions(DebugLog *this))(const char *, ...)
{
  int (**result)(const char *, ...); // r0@1

  result = &RakNet::rakDebugLogCallback;
  RakNet::rakDebugLogCallback = (int (*)(const char *, ...))DebugLog::rakDebugLog;
  return result;
}
