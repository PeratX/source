

void __fastcall SettingsScreenControllerBase::setUpCallbacksForFloatOption(int a1, int a2, const void **a3, int *a4, int a5)
{
  SettingsScreenControllerBase::setUpCallbacksForFloatOption(a1, a2, a3, a4, a5);
}


void __fastcall SettingsScreenControllerBase::setUpCallbacksForFloatOption(ScreenController *a1, int **a2, int **a3, const char **a4, const char **a5, int a6, int a7, int a8, int a9, int a10, int a11, int *a12, int a13)
{
  ScreenController *v13; // r6@1
  const char **v14; // r4@1
  int **v15; // r9@1
  const char *v22; // r4@4
  int v23; // r0@4
  size_t v25; // r0@7
  int i; // r1@7
  int v27; // t1@8
  int v28; // r4@9
  void (*v29)(void); // r5@9
  _DWORD *v30; // r0@9
  int v31; // r7@9
  __int64 v32; // r1@9
  int *v33; // r4@15
  size_t v34; // r0@15
  int j; // r1@15
  int v36; // t1@16
  void *v37; // r5@17
  __int64 v38; // r0@17
  __int64 v39; // r1@17
  void *v40; // r0@21
  int v41; // r6@22
  void (__fastcall *v42)(char *, int, signed int); // r3@22
  void (__fastcall *v43)(int *, int, signed int); // r3@24
  void (__fastcall *v44)(int *, int, signed int); // r3@26
  void (__fastcall *v45)(int *, int, signed int); // r3@28
  int v46; // r7@30
  void (__fastcall *v47)(int *, int, signed int); // r3@30
  _DWORD *v48; // r0@32
  void (*v49)(void); // r2@32
  void (__fastcall *v50)(_DWORD, _DWORD, _DWORD); // r2@32
  void (__fastcall *v51)(_DWORD, _DWORD, _DWORD); // r2@32
  void (__fastcall *v52)(_DWORD, _DWORD, _DWORD); // r2@32
  int v53; // r1@32
  int v54; // r11@44
  void (__fastcall *v55)(char *, int, signed int); // r3@44
  void (__fastcall *v56)(int *, int, signed int); // r3@46
  void (__fastcall *v57)(int *, int, signed int); // r3@48
  void (__fastcall *v58)(int *, int, signed int); // r3@50
  void *v59; // r5@52
  void (*v60)(void); // r0@52
  __int64 v61; // kr00_8@52
  int v62; // r2@52
  __int64 v63; // kr08_8@52
  int v64; // r2@52
  __int64 v65; // kr10_8@52
  void (__fastcall *v66)(_DWORD, _DWORD, _DWORD); // r0@52
  int v67; // r6@52
  void *v68; // r0@60
  const char *v69; // r5@63
  size_t v70; // r0@63
  int k; // r1@63
  int v72; // t1@64
  void (__fastcall *v73)(int *, int, signed int); // r3@65
  void (__fastcall *v74)(int *, int, signed int); // r3@67
  void *v75; // r7@69
  int v76; // r5@69
  __int64 v77; // r1@69
  int v78; // r3@69
  __int64 v79; // r0@69
  __int64 v80; // r1@69
  void *v81; // r0@75
  void *v82; // r0@78
  unsigned int *v83; // r2@80
  signed int v84; // r1@82
  unsigned int *v85; // r2@84
  signed int v86; // r1@86
  unsigned int *v87; // r2@88
  signed int v88; // r1@90
  unsigned int *v89; // r2@92
  signed int v90; // r1@94
  int **v91; // [sp+10h] [bp-1C0h]@1
  ScreenController *v92; // [sp+14h] [bp-1BCh]@22
  void *v93; // [sp+18h] [bp-1B8h]@69
  __int64 v94; // [sp+20h] [bp-1B0h]@69
  ScreenController *v95; // [sp+28h] [bp-1A8h]@65
  int v96; // [sp+2Ch] [bp-1A4h]@65
  __int64 v97; // [sp+30h] [bp-1A0h]@69
  int v98; // [sp+38h] [bp-198h]@66
  int v99; // [sp+3Ch] [bp-194h]@69
  void (__fastcall *v100)(int *, int *, signed int); // [sp+40h] [bp-190h]@65
  int v101; // [sp+44h] [bp-18Ch]@66
  int v102; // [sp+48h] [bp-188h]@67
  int v103; // [sp+4Ch] [bp-184h]@68
  void (__fastcall *v104)(int *, int *, signed int); // [sp+54h] [bp-17Ch]@67
  int v105; // [sp+58h] [bp-178h]@68
  void *v106; // [sp+5Ch] [bp-174h]@69
  void (*v107)(void); // [sp+64h] [bp-16Ch]@69
  void (__fastcall *v108)(int *, _DWORD *); // [sp+68h] [bp-168h]@69
  int v109; // [sp+6Ch] [bp-164h]@65
  char v110; // [sp+70h] [bp-160h]@45
  void (*v111)(void); // [sp+78h] [bp-158h]@44
  int v112; // [sp+7Ch] [bp-154h]@45
  ScreenController *v113; // [sp+80h] [bp-150h]@46
  int v114; // [sp+84h] [bp-14Ch]@46
  int v115; // [sp+88h] [bp-148h]@47
  void (__fastcall *v116)(int *, int *, signed int); // [sp+90h] [bp-140h]@46
  int v117; // [sp+94h] [bp-13Ch]@47
  int v118; // [sp+98h] [bp-138h]@49
  void (*v119)(void); // [sp+A0h] [bp-130h]@48
  int v120; // [sp+A4h] [bp-12Ch]@49
  int v121; // [sp+A8h] [bp-128h]@51
  void (__fastcall *v122)(_DWORD, _DWORD, _DWORD); // [sp+B0h] [bp-120h]@50
  int v123; // [sp+B4h] [bp-11Ch]@51
  void *v124; // [sp+B8h] [bp-118h]@52
  void (*v125)(void); // [sp+C0h] [bp-110h]@52
  signed int (__fastcall *v126)(int, int, int); // [sp+C4h] [bp-10Ch]@52
  char v127; // [sp+C8h] [bp-108h]@23
  void (*v128)(void); // [sp+D0h] [bp-100h]@22
  int v129; // [sp+D4h] [bp-FCh]@23
  int v130; // [sp+D8h] [bp-F8h]@25
  void (__fastcall *v131)(_DWORD, _DWORD, _DWORD); // [sp+E0h] [bp-F0h]@24
  int v132; // [sp+E4h] [bp-ECh]@25
  int v133; // [sp+E8h] [bp-E8h]@27
  void (__fastcall *v134)(_DWORD, _DWORD, _DWORD); // [sp+F0h] [bp-E0h]@26
  int v135; // [sp+F4h] [bp-DCh]@27
  int v136; // [sp+F8h] [bp-D8h]@29
  void (__fastcall *v137)(_DWORD, _DWORD, _DWORD); // [sp+100h] [bp-D0h]@28
  int v138; // [sp+104h] [bp-CCh]@29
  int v139; // [sp+108h] [bp-C8h]@31
  void (__fastcall *v140)(int *, int *, signed int); // [sp+110h] [bp-C0h]@30
  int v141; // [sp+114h] [bp-BCh]@31
  _DWORD *v142; // [sp+11Ch] [bp-B4h]@32
  void (*v143)(void); // [sp+124h] [bp-ACh]@32
  signed int (__fastcall *v144)(int, int, int); // [sp+128h] [bp-A8h]@32
  void *v145; // [sp+12Ch] [bp-A4h]@17
  __int64 v146; // [sp+134h] [bp-9Ch]@17
  ScreenController *v147; // [sp+13Ch] [bp-94h]@17
  int v148; // [sp+140h] [bp-90h]@17
  void *v149; // [sp+144h] [bp-8Ch]@17
  void (*v150)(void); // [sp+14Ch] [bp-84h]@17
  int v151; // [sp+154h] [bp-7Ch]@17
  void *v152; // [sp+158h] [bp-78h]@9
  __int64 v153; // [sp+160h] [bp-70h]@9
  int v154; // [sp+168h] [bp-68h]@9
  int v155; // [sp+16Ch] [bp-64h]@9
  void (*v156)(void); // [sp+170h] [bp-60h]@9
  int v157; // [sp+174h] [bp-5Ch]@9
  _DWORD *v158; // [sp+178h] [bp-58h]@9
  void (*v159)(void); // [sp+180h] [bp-50h]@9
  void *v160; // [sp+184h] [bp-4Ch]@9
  int v161; // [sp+188h] [bp-48h]@9

  v13 = a1;
  v14 = a4;
  v15 = a3;
  v91 = a2;
  if ( !*(_DWORD *)(a11 + 8)
    || (_R5 = (void (__fastcall *)(int *, int, signed int))(*(int (__fastcall **)(int))(a11 + 12))(a11),
        !*(_DWORD *)(a10 + 8))
    || (_R0 = (*(int (__fastcall **)(int))(a10 + 12))(a10), !*(_DWORD *)(a8 + 8)) )
  {
    sub_21E5F48();
  }
  __asm
    VMOV            S18, R0
    VMOV            S16, R5
  _R0 = (*(int (__fastcall **)(int))(a8 + 12))(a8);
    VMOV            S0, R0
    VSUB.F32        S2, S16, S18
    VSUB.F32        S0, S0, S18
    VDIV.F32        S20, S0, S2
  std::__detail::_Map_base<std::string,std::pair<std::string const,float>,std::allocator<std::pair<std::string const,float>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
    (int)v13 + 460,
    v15);
  __asm { VSTR            S20, [R0] }
  v22 = *v14;
  v23 = *((_DWORD *)v22 - 3);
  _ZF = v23 == 0;
  if ( v23 )
    _R5 = *(void (__fastcall **)(int *, int, signed int))(a7 + 8);
    _ZF = _R5 == 0;
  if ( !_ZF )
    v25 = strlen(v22);
    for ( i = -2128831035; v25; i = 16777619 * (i ^ v27) )
    {
      v27 = *v22++;
      --v25;
    }
    v161 = i;
    v156 = 0;
    _R5(&v154, a7, 2);
    v157 = *(_DWORD *)(a7 + 12);
    v28 = v157;
    v156 = *(void (**)(void))(a7 + 8);
    v29 = v156;
    v159 = 0;
    v30 = operator new(0x10u);
    v31 = v155;
    *v30 = v154;
    v30[1] = v31;
    v30[2] = v29;
    v30[3] = v28;
    v158 = v30;
    v159 = (void (*)(void))sub_124C18C;
    v160 = &loc_124C17C;
    v152 = operator new(1u);
    LODWORD(v32) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
    HIDWORD(v32) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
    v153 = v32;
    ScreenController::bindBool((int)v13, &v161, (int)&v158, (int)&v152);
    if ( (_DWORD)v153 )
      ((void (*)(void))v153)();
    if ( v159 )
      v159();
    if ( v156 )
      v156();
  v33 = *v15;
  v34 = strlen((const char *)*v15);
  for ( j = -2128831035; v34; j = 16777619 * (j ^ v36) )
    v36 = *(_BYTE *)v33;
    v33 = (int *)((char *)v33 + 1);
    --v34;
  v151 = j;
  v147 = v13;
  sub_21E8AF4(&v148, (int *)v15);
  v150 = 0;
  v37 = operator new(8u);
  *(_DWORD *)v37 = v13;
  sub_21E8AF4((int *)v37 + 1, &v148);
  HIDWORD(v38) = sub_124C20C;
  v149 = v37;
  LODWORD(v38) = sub_124C244;
  *(_QWORD *)&v150 = v38;
  v145 = operator new(1u);
  LODWORD(v39) = ZNSt14_Function_base13_Base_managerIZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v39) = ZNSt17_Function_handlerIFbvEZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v146 = v39;
  ScreenController::bindFloat((int)v13, &v151, (int)&v149, (int)&v145);
  if ( (_DWORD)v146 )
    ((void (*)(void))v146)();
  if ( v150 )
    v150();
  v40 = (void *)(v148 - 12);
  if ( (int *)(v148 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v148 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
    else
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  v92 = v13;
  v128 = 0;
  v41 = MinecraftScreenController::_getNameId(v13, v91);
  v42 = *(void (__fastcall **)(char *, int, signed int))(a8 + 8);
  if ( v42 )
    v42(&v127, a8, 2);
    v129 = *(_DWORD *)(a8 + 12);
    v128 = *(void (**)(void))(a8 + 8);
  v131 = 0;
  v43 = *(void (__fastcall **)(int *, int, signed int))(a9 + 8);
  if ( v43 )
    v43(&v130, a9, 2);
    v132 = *(_DWORD *)(a9 + 12);
    v131 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(a9 + 8);
  v134 = 0;
  v44 = *(void (__fastcall **)(int *, int, signed int))(a10 + 8);
  if ( v44 )
    v44(&v133, a10, 2);
    v135 = *(_DWORD *)(a10 + 12);
    v134 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(a10 + 8);
  v137 = 0;
  v45 = *(void (__fastcall **)(int *, int, signed int))(a11 + 8);
  if ( v45 )
    v45(&v136, a11, 2);
    v138 = *(_DWORD *)(a11 + 12);
    v137 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(a11 + 8);
  v140 = 0;
  v46 = 0;
  v47 = *(void (__fastcall **)(int *, int, signed int))(a7 + 8);
  if ( v47 )
    v47(&v139, a7, 2);
    v141 = *(_DWORD *)(a7 + 12);
    v46 = *(_DWORD *)(a7 + 8);
    v140 = *(void (__fastcall **)(int *, int *, signed int))(a7 + 8);
  v143 = 0;
  v48 = operator new(0x50u);
  *(_QWORD *)v48 = *(_QWORD *)&v127;
  v49 = v128;
  v48[2] = v49;
  v48[3] = v129;
  *((_QWORD *)v48 + 2) = *(_QWORD *)&v130;
  v50 = v131;
  v48[6] = v50;
  v48[7] = v132;
  *((_QWORD *)v48 + 4) = *(_QWORD *)&v133;
  v51 = v134;
  v48[10] = v51;
  v48[11] = v135;
  *((_QWORD *)v48 + 6) = *(_QWORD *)&v136;
  v52 = v137;
  v48[14] = v52;
  v48[15] = v138;
  *((_QWORD *)v48 + 8) = *(_QWORD *)&v139;
  v53 = v141;
  v48[18] = v46;
  v48[19] = v53;
  v142 = v48;
  v143 = (void (*)(void))sub_124C620;
  v144 = sub_124C2E4;
  ScreenController::registerSliderFinishedEventHandler((int)v92, v41, (int)&v142);
  if ( v143 )
    v143();
  if ( v140 )
    v140(&v139, &v139, 3);
  if ( v137 )
    v137(&v136, &v136, 3);
  if ( v134 )
    v134(&v133, &v133, 3);
  if ( v131 )
    v131(&v130, &v130, 3);
  if ( v128 )
    v128();
  v54 = MinecraftScreenController::_getNameId(v92, v91);
  v111 = 0;
  v55 = *(void (__fastcall **)(char *, int, signed int))(a7 + 8);
  if ( v55 )
    v55(&v110, a7, 2);
    v112 = *(_DWORD *)(a7 + 12);
    v111 = *(void (**)(void))(a7 + 8);
  v113 = v92;
  sub_21E8AF4(&v114, (int *)v15);
  v116 = 0;
  v56 = *(void (__fastcall **)(int *, int, signed int))(a9 + 8);
  if ( v56 )
    v56(&v115, a9, 2);
    v117 = *(_DWORD *)(a9 + 12);
    v116 = *(void (__fastcall **)(int *, int *, signed int))(a9 + 8);
  v119 = 0;
  v57 = *(void (__fastcall **)(int *, int, signed int))(a10 + 8);
  if ( v57 )
    v57(&v118, a10, 2);
    v120 = *(_DWORD *)(a10 + 12);
    v119 = *(void (**)(void))(a10 + 8);
  v122 = 0;
  v58 = *(void (__fastcall **)(int *, int, signed int))(a11 + 8);
  if ( v58 )
    v58(&v121, a11, 2);
    v123 = *(_DWORD *)(a11 + 12);
    v122 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(a11 + 8);
  v125 = 0;
  v59 = operator new(0x48u);
  *(_QWORD *)v59 = *(_QWORD *)&v110;
  v60 = v111;
  *((_DWORD *)v59 + 2) = v60;
  *((_DWORD *)v59 + 3) = v112;
  *((_DWORD *)v59 + 4) = v113;
  sub_21E8AF4((int *)v59 + 5, &v114);
  v61 = *(_QWORD *)&v115;
  *(_QWORD *)&v115 = *((_QWORD *)v59 + 3);
  *((_QWORD *)v59 + 3) = v61;
  *((_DWORD *)v59 + 8) = v116;
  v62 = v117;
  v117 = *((_DWORD *)v59 + 9);
  *((_DWORD *)v59 + 9) = v62;
  v63 = *(_QWORD *)&v118;
  *(_QWORD *)&v118 = *((_QWORD *)v59 + 5);
  *((_QWORD *)v59 + 5) = v63;
  *((_DWORD *)v59 + 12) = v119;
  v64 = v120;
  v120 = *((_DWORD *)v59 + 13);
  *((_DWORD *)v59 + 13) = v64;
  v65 = *(_QWORD *)&v121;
  *(_QWORD *)&v121 = *((_QWORD *)v59 + 7);
  *((_QWORD *)v59 + 7) = v65;
  v66 = v122;
  *((_DWORD *)v59 + 16) = v66;
  v67 = v123;
  v123 = *((_DWORD *)v59 + 17);
  *((_DWORD *)v59 + 17) = v67;
  v124 = v59;
  v125 = (void (*)(void))sub_124C99C;
  v126 = sub_124C7F4;
  ScreenController::registerSliderChangedEventHandler((int)v92, v54, (int)&v124);
  if ( v125 )
    v125();
  if ( v122 )
    v122(&v121, &v121, 3);
  if ( v119 )
    v119();
  if ( v116 )
    v116(&v115, &v115, 3);
  v68 = (void *)(v114 - 12);
  if ( (int *)(v114 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v114 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j__ZdlPv_9(v68);
  if ( v111 )
    v111();
  v69 = *a5;
  v70 = strlen(*a5);
  for ( k = -2128831035; v70; k = 16777619 * (k ^ v72) )
    v72 = *v69++;
    --v70;
  v109 = k;
  v95 = v92;
  sub_21E8AF4(&v96, (int *)v15);
    VSTR            S18, [SP,#0x1D0+var_1A0]
    VSTR            S16, [SP,#0x1D0+var_1A0+4]
  v100 = 0;
  v73 = *(void (__fastcall **)(int *, int, signed int))(a13 + 8);
  if ( v73 )
    v73(&v98, a13, 2);
    v101 = *(_DWORD *)(a13 + 12);
    v100 = *(void (__fastcall **)(int *, int *, signed int))(a13 + 8);
  sub_21E8AF4(&v102, a12);
  v104 = 0;
  v74 = *(void (__fastcall **)(int *, int, signed int))(a6 + 8);
  if ( v74 )
    v74(&v103, a6, 2);
    v105 = *(_DWORD *)(a6 + 12);
    v104 = *(void (__fastcall **)(int *, int *, signed int))(a6 + 8);
  v107 = 0;
  v75 = operator new(0x34u);
  *(_DWORD *)v75 = v95;
  sub_21E8AF4((int *)v75 + 1, &v96);
  *((_QWORD *)v75 + 1) = v97;
  v76 = (int)v75 + 16;
  v77 = *(_QWORD *)&v98;
  v78 = *((_DWORD *)v75 + 5);
  v98 = *((_DWORD *)v75 + 4);
  v99 = v78;
  *(_QWORD *)v76 = v77;
  *(_DWORD *)(v76 + 8) = v100;
  LODWORD(v77) = v101;
  v101 = *((_DWORD *)v75 + 7);
  *(_DWORD *)(v76 + 12) = v77;
  sub_21E8AF4((int *)v75 + 8, &v102);
  v79 = *(_QWORD *)&v103;
  *(_QWORD *)&v103 = *(_QWORD *)((char *)v75 + 36);
  *(_QWORD *)((char *)v75 + 36) = v79;
  *((_DWORD *)v75 + 11) = v104;
  HIDWORD(v79) = v105;
  v105 = *((_DWORD *)v75 + 12);
  *((_DWORD *)v75 + 12) = HIDWORD(v79);
  v106 = v75;
  v107 = (void (*)(void))sub_124D208;
  v108 = sub_124CBCC;
  v93 = operator new(1u);
  LODWORD(v80) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v80) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v94 = v80;
  ScreenController::bindString((int)v92, &v109, (int)&v106, (int)&v93);
  if ( (_DWORD)v94 )
    ((void (*)(void))v94)();
  if ( v107 )
    v107();
  if ( v104 )
    v104(&v103, &v103, 3);
  v81 = (void *)(v102 - 12);
  if ( (int *)(v102 - 12) != &dword_28898C0 )
    v87 = (unsigned int *)(v102 - 4);
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j__ZdlPv_9(v81);
  if ( v100 )
    v100(&v98, &v98, 3);
  v82 = (void *)(v96 - 12);
  if ( (int *)(v96 - 12) != &dword_28898C0 )
    v89 = (unsigned int *)(v96 - 4);
        v90 = __ldrex(v89);
      while ( __strex(v90 - 1, v89) );
      v90 = (*v89)--;
    if ( v90 <= 0 )
      j_j_j_j__ZdlPv_9(v82);
}


void __fastcall SettingsScreenControllerBase::setUpCallbacksForBooleanOption(ScreenController *a1, int **a2, const char **a3, const char **a4, int a5, int a6, int a7)
{
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption(a1, a2, a3, a4, a5, a6, a7);
}


void __fastcall SettingsScreenControllerBase::setupCallbacksForStringOption(int a1, int a2, int **a3, const char **a4, const char **a5, int a6, int a7)
{
  ScreenController *v7; // r6@1
  const char **v8; // r8@1
  int **v9; // r5@1
  int v10; // r4@1
  int v11; // r0@1
  int v12; // r7@1
  _DWORD *v13; // r0@1
  _DWORD *v14; // r0@1
  __int64 v15; // r1@1
  _DWORD *v16; // r0@1
  __int64 v17; // r1@1
  void (__fastcall *v18)(char *, int, signed int); // r3@1
  void (__fastcall *v19)(char *, int, signed int); // r3@3
  char v20; // [sp+18h] [bp-68h]@4
  void (*v21)(void); // [sp+20h] [bp-60h]@3
  int v22; // [sp+24h] [bp-5Ch]@4
  char v23; // [sp+28h] [bp-58h]@2
  void (*v24)(void); // [sp+30h] [bp-50h]@1
  int v25; // [sp+34h] [bp-4Ch]@2
  _DWORD *v26; // [sp+38h] [bp-48h]@1
  __int64 v27; // [sp+40h] [bp-40h]@1
  _DWORD *v28; // [sp+48h] [bp-38h]@1
  __int64 v29; // [sp+50h] [bp-30h]@1
  _DWORD *v30; // [sp+58h] [bp-28h]@1
  void (*v31)(void); // [sp+60h] [bp-20h]@1
  int (__fastcall *v32)(Option ***); // [sp+64h] [bp-1Ch]@1

  v7 = (ScreenController *)a1;
  v8 = a4;
  v9 = a3;
  v10 = a2;
  v11 = MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(a1 + 424));
  v12 = Options::get(v11, v10);
  v13 = operator new(4u);
  *v13 = v12;
  v30 = v13;
  v31 = (void (*)(void))sub_1249CC4;
  v32 = sub_1249CBC;
  v14 = operator new(4u);
  LODWORD(v15) = sub_1249D10;
  *v14 = v12;
  HIDWORD(v15) = sub_1249CFA;
  v28 = v14;
  v29 = v15;
  v16 = operator new(4u);
  HIDWORD(v17) = sub_1249D46;
  *v16 = v12;
  LODWORD(v17) = sub_1249D66;
  v26 = v16;
  v27 = v17;
  v24 = 0;
  v18 = *(void (__fastcall **)(char *, int, signed int))(a6 + 8);
  if ( v18 )
  {
    v18(&v23, a6, 2);
    v25 = *(_DWORD *)(a6 + 12);
    v24 = *(void (**)(void))(a6 + 8);
  }
  v21 = 0;
  v19 = *(void (__fastcall **)(char *, int, signed int))(a7 + 8);
  if ( v19 )
    v19(&v20, a7, 2);
    v22 = *(_DWORD *)(a7 + 12);
    v21 = *(void (**)(void))(a7 + 8);
  SettingsScreenControllerBase::setupCallbacksForStringOption(
    v7,
    v9,
    v8,
    a5,
    (int)&v30,
    (int)&v28,
    (int)&v26,
    (int)&v23,
    (int)&v20);
  if ( v21 )
    v21();
  if ( v24 )
    v24();
  if ( (_DWORD)v27 )
    ((void (*)(void))v27)();
  if ( (_DWORD)v29 )
    ((void (*)(void))v29)();
  if ( v31 )
    v31();
}


void __fastcall SettingsScreenControllerBase::setUpCallbacksForFloatOption(int a1, int a2, int **a3, int **a4, const char **a5, const char **a6, int *a7, int a8)
{
  ScreenController *v8; // r10@1
  int **v9; // r8@1
  int **v10; // r9@1
  int v11; // r4@1
  int v12; // r0@1
  int v13; // r7@1
  _DWORD *v14; // r0@1
  _DWORD *v15; // r0@1
  __int64 v16; // r1@1
  _DWORD *v17; // r0@1
  __int64 v18; // r1@1
  _DWORD *v19; // r0@1
  __int64 v20; // r1@1
  _DWORD *v21; // r0@1
  __int64 v22; // r1@1
  _DWORD *v23; // r0@1
  __int64 v24; // r1@1
  void (__fastcall *v25)(char *, int, signed int); // r3@1
  char v26; // [sp+28h] [bp-90h]@2
  void (*v27)(void); // [sp+30h] [bp-88h]@1
  int v28; // [sp+34h] [bp-84h]@2
  _DWORD *v29; // [sp+38h] [bp-80h]@1
  __int64 v30; // [sp+40h] [bp-78h]@1
  _DWORD *v31; // [sp+48h] [bp-70h]@1
  __int64 v32; // [sp+50h] [bp-68h]@1
  _DWORD *v33; // [sp+58h] [bp-60h]@1
  __int64 v34; // [sp+60h] [bp-58h]@1
  _DWORD *v35; // [sp+68h] [bp-50h]@1
  __int64 v36; // [sp+70h] [bp-48h]@1
  _DWORD *v37; // [sp+78h] [bp-40h]@1
  __int64 v38; // [sp+80h] [bp-38h]@1
  _DWORD *v39; // [sp+88h] [bp-30h]@1
  void (*v40)(void); // [sp+90h] [bp-28h]@1
  int *(__fastcall *v41)(int *, Option ***); // [sp+94h] [bp-24h]@1

  v8 = (ScreenController *)a1;
  v9 = a4;
  v10 = a3;
  v11 = a2;
  v12 = MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(a1 + 424));
  v13 = Options::get(v12, v11);
  v14 = operator new(4u);
  *v14 = v13;
  v39 = v14;
  v40 = (void (*)(void))sub_124BD74;
  v41 = sub_124BD5E;
  v15 = operator new(4u);
  LODWORD(v16) = sub_124BDB2;
  *v15 = v13;
  HIDWORD(v16) = sub_124BDAA;
  v37 = v15;
  v38 = v16;
  v17 = operator new(4u);
  LODWORD(v18) = sub_124BDF0;
  *v17 = v13;
  HIDWORD(v18) = sub_124BDE8;
  v35 = v17;
  v36 = v18;
  v19 = operator new(4u);
  LODWORD(v20) = sub_124BE46;
  *v19 = v13;
  HIDWORD(v20) = sub_124BE26;
  v33 = v19;
  v34 = v20;
  v21 = operator new(4u);
  LODWORD(v22) = sub_124BE84;
  *v21 = v13;
  HIDWORD(v22) = sub_124BE7C;
  v31 = v21;
  v32 = v22;
  v23 = operator new(4u);
  HIDWORD(v24) = sub_124BEBA;
  LODWORD(v24) = sub_124BEC2;
  *v23 = v13;
  v29 = v23;
  v30 = v24;
  v27 = 0;
  v25 = *(void (__fastcall **)(char *, int, signed int))(a8 + 8);
  if ( v25 )
  {
    v25(&v26, a8, 2);
    v28 = *(_DWORD *)(a8 + 12);
    v27 = *(void (**)(void))(a8 + 8);
  }
  SettingsScreenControllerBase::setUpCallbacksForFloatOption(
    v8,
    v10,
    v9,
    a5,
    a6,
    (int)&v39,
    (int)&v37,
    (int)&v35,
    (int)&v33,
    (int)&v31,
    (int)&v29,
    a7,
    (int)&v26);
  if ( v27 )
    v27();
  if ( (_DWORD)v30 )
    ((void (*)(void))v30)();
  if ( (_DWORD)v32 )
    ((void (*)(void))v32)();
  if ( (_DWORD)v34 )
    ((void (*)(void))v34)();
  if ( (_DWORD)v36 )
    ((void (*)(void))v36)();
  if ( (_DWORD)v38 )
    ((void (*)(void))v38)();
  if ( v40 )
    v40();
}


void __fastcall SettingsScreenControllerBase::setUpCallbacksForChoiceOption(int a1, int a2, int a3, const char **a4)
{
  ScreenController *v4; // r6@1
  const char **v5; // r8@1
  int v6; // r5@1
  int v7; // r7@1
  int v8; // r0@1
  int v9; // r7@1
  _DWORD *v10; // r0@1
  _DWORD *v11; // r0@1
  __int64 v12; // r1@1
  _DWORD *v13; // r0@1
  __int64 v14; // r1@1
  _DWORD *v15; // [sp+8h] [bp-48h]@1
  __int64 v16; // [sp+10h] [bp-40h]@1
  _DWORD *v17; // [sp+18h] [bp-38h]@1
  __int64 v18; // [sp+20h] [bp-30h]@1
  _DWORD *v19; // [sp+28h] [bp-28h]@1
  void (*v20)(void); // [sp+30h] [bp-20h]@1
  int (__fastcall *v21)(Option ***); // [sp+34h] [bp-1Ch]@1

  v4 = (ScreenController *)a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(a1 + 424));
  v9 = Options::get(v8, v7);
  v10 = operator new(4u);
  *v10 = v9;
  v19 = v10;
  v20 = (void (*)(void))sub_124AAE2;
  v21 = sub_124AADA;
  v11 = operator new(4u);
  LODWORD(v12) = sub_124AB20;
  *v11 = v9;
  HIDWORD(v12) = sub_124AB18;
  v17 = v11;
  v18 = v12;
  v13 = operator new(4u);
  LODWORD(v14) = sub_124AB5E;
  *v13 = v9;
  HIDWORD(v14) = sub_124AB56;
  v15 = v13;
  v16 = v14;
  SettingsScreenControllerBase::setUpCallbacksForChoiceOption(v4, v6, v5, (int)&v19, (int)&v17, (int)&v15);
  if ( (_DWORD)v16 )
    ((void (*)(void))v16)();
  if ( (_DWORD)v18 )
    ((void (*)(void))v18)();
  if ( v20 )
    v20();
}


int __fastcall SettingsScreenControllerBase::_getStepSliderValue(int a1, int a2, int **a3, int a4)
{
  int **v4; // r5@1
  int v5; // r4@1
  int v6; // r6@2
  int result; // r0@3

  v4 = a3;
  v5 = a2;
  if ( a4
    || (v6 = a1 + 432,
        !std::_Hashtable<std::string,std::pair<std::string const,int>,std::allocator<std::pair<std::string const,int>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::count(
           (unsigned __int64 *)(a1 + 432),
           a3)) )
  {
    if ( !*(_DWORD *)(v5 + 8) )
      sub_21E5F48();
    result = (*(int (__fastcall **)(int))(v5 + 12))(v5);
  }
  else
    result = *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,int>,std::allocator<std::pair<std::string const,int>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                          v6,
                          v4);
  return result;
}


ModalScreenData *__fastcall SettingsScreenControllerBase::confirmationNoAchievementsDialog(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  __int64 v4; // r2@1
  int v6; // [sp+0h] [bp-58h]@2
  void (*v7)(void); // [sp+8h] [bp-50h]@1
  int v8; // [sp+Ch] [bp-4Ch]@2
  void *v9; // [sp+10h] [bp-48h]@1
  int v10; // [sp+14h] [bp-44h]@1
  int v11; // [sp+18h] [bp-40h]@1
  int v12; // [sp+1Ch] [bp-3Ch]@1
  void *v13; // [sp+20h] [bp-38h]@1
  int v14; // [sp+24h] [bp-34h]@1
  int v15; // [sp+28h] [bp-30h]@1
  int v16; // [sp+2Ch] [bp-2Ch]@1
  void *v17; // [sp+30h] [bp-28h]@1
  void *v18; // [sp+34h] [bp-24h]@1
  void *v19; // [sp+38h] [bp-20h]@1
  void *v20; // [sp+3Ch] [bp-1Ch]@1
  int v21; // [sp+40h] [bp-18h]@1
  char v22; // [sp+44h] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  v9 = &unk_28898CC;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = &unk_28898CC;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = &unk_28898CC;
  v18 = &unk_28898CC;
  v19 = &unk_28898CC;
  v20 = &unk_28898CC;
  v21 = 1;
  v22 = 0;
  sub_21E8190(&v13, "options.turnOffAchievements.message", (_BYTE *)0x23);
  sub_21E8190(&v9, "options.turnOffAchievements", (_BYTE *)0x1B);
  sub_21E8190(&v18, "options.continue", (_BYTE *)0x10);
  sub_21E8190(&v20, "options.goBack", (_BYTE *)0xE);
  v7 = 0;
  HIDWORD(v4) = *(_DWORD *)(v3 + 8);
  if ( HIDWORD(v4) )
  {
    ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))HIDWORD(v4))(&v6, v3, 2);
    v8 = *(_DWORD *)(v3 + 12);
    v7 = *(void (**)(void))(v3 + 8);
  }
  LODWORD(v4) = &v6;
  MinecraftScreenController::_displayCustomModalPopup(v2, (int)&v9, v4);
  if ( v7 )
    v7();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v9);
}


void __fastcall SettingsScreenControllerBase::setUpCallbacksForBooleanOption(int a1, int a2, int **a3, const char **a4, const char **a5)
{
  ScreenController *v5; // r6@1
  const char **v6; // r8@1
  int **v7; // r5@1
  int v8; // r7@1
  int v9; // r0@1
  int v10; // r7@1
  _DWORD *v11; // r0@1
  _DWORD *v12; // r0@1
  __int64 v13; // r1@1
  _DWORD *v14; // r0@1
  __int64 v15; // r1@1
  _DWORD *v16; // [sp+10h] [bp-48h]@1
  __int64 v17; // [sp+18h] [bp-40h]@1
  _DWORD *v18; // [sp+20h] [bp-38h]@1
  __int64 v19; // [sp+28h] [bp-30h]@1
  _DWORD *v20; // [sp+30h] [bp-28h]@1
  void (*v21)(void); // [sp+38h] [bp-20h]@1
  int (__fastcall *v22)(Option ***); // [sp+3Ch] [bp-1Ch]@1

  v5 = (ScreenController *)a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(a1 + 424));
  v10 = Options::get(v9, v8);
  v11 = operator new(4u);
  *v11 = v10;
  v20 = v11;
  v21 = (void (*)(void))sub_124A7FC;
  v22 = sub_124A7F4;
  v12 = operator new(4u);
  LODWORD(v13) = sub_124A83A;
  *v12 = v10;
  HIDWORD(v13) = sub_124A832;
  v18 = v12;
  v19 = v13;
  v14 = operator new(4u);
  LODWORD(v15) = sub_124A88E;
  HIDWORD(v15) = sub_124A870;
  *v14 = v10;
  v16 = v14;
  v17 = v15;
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption(v5, v7, v6, a5, (int)&v20, (int)&v18, (int)&v16);
  if ( (_DWORD)v17 )
    ((void (*)(void))v17)();
  if ( (_DWORD)v19 )
    ((void (*)(void))v19)();
  if ( v21 )
    v21();
}


void __fastcall SettingsScreenControllerBase::setUpCallbacksForStepOption(int a1, int a2, const void **a3, int a4, int a5)
{
  SettingsScreenControllerBase::setUpCallbacksForStepOption(a1, a2, a3, a4, a5);
}


void __fastcall SettingsScreenControllerBase::setUpCallbacksForDropdownOption(int a1, int a2, const void **a3, int a4, int a5)
{
  int v5; // r6@1
  const void **v6; // r4@1
  int v7; // r7@1
  int v8; // r8@1
  const void **v9; // r0@1
  const void **v10; // r0@1
  int v11; // r5@1
  char *v12; // r0@2
  char *v13; // r0@3
  char *v14; // r0@4
  unsigned int *v15; // r2@6
  signed int v16; // r1@8
  unsigned int *v17; // r2@10
  signed int v18; // r1@12
  unsigned int *v19; // r2@14
  signed int v20; // r1@16
  unsigned int *v21; // r2@18
  signed int v22; // r1@20
  char *v23; // [sp+Ch] [bp-2Ch]@1
  const void *v24; // [sp+10h] [bp-28h]@1
  char *v25; // [sp+14h] [bp-24h]@1
  char *v26; // [sp+18h] [bp-20h]@1

  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = a2;
  v25 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v25, *((_DWORD *)*a3 - 3) + 1);
  sub_21E7408((const void **)&v25, "#", 1u);
  sub_21E72F0((const void **)&v25, v6);
  v9 = sub_21E7408((const void **)&v25, "_toggle_label", 0xDu);
  v26 = (char *)*v9;
  *v9 = &unk_28898CC;
  v23 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v23, *((_DWORD *)*v6 - 3) + 1);
  sub_21E7408((const void **)&v23, "#", 1u);
  sub_21E72F0((const void **)&v23, v6);
  v10 = sub_21E7408((const void **)&v23, "_enabled", 8u);
  v24 = *v10;
  v11 = (int)v24;
  *v10 = &unk_28898CC;
  SettingsScreenControllerBase::setUpCallbacksForDropdownOption(
    v5,
    v8,
    (int *)v6,
    (const char **)&v26,
    v7,
    a5,
    (const char **)&v24);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v11 - 4);
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
      j_j_j_j__ZdlPv_9((void *)(v11 - 12));
  }
  v12 = v23 - 12;
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v23 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = v26 - 12;
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v26 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = v25 - 12;
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v25 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
}


void __fastcall SettingsScreenControllerBase::setUpCallbacksForDropdownOption(int a1, int *a2, const char **a3, int a4, int a5, int a6, int a7)
{
  int *v7; // r6@1
  int v8; // r9@1
  const char **v9; // r10@1
  int v10; // r7@1
  void (__fastcall *v11)(char *, int, signed int); // r3@1
  void (__fastcall *v12)(char *, int, signed int); // r3@3
  void *v13; // r0@11
  unsigned int *v14; // r2@13
  signed int v15; // r1@15
  char v16; // [sp+14h] [bp-5Ch]@4
  void (*v17)(void); // [sp+1Ch] [bp-54h]@3
  int v18; // [sp+20h] [bp-50h]@4
  char v19; // [sp+24h] [bp-4Ch]@2
  void (*v20)(void); // [sp+2Ch] [bp-44h]@1
  int v21; // [sp+30h] [bp-40h]@2
  char v22; // [sp+34h] [bp-3Ch]@5
  void (*v23)(void); // [sp+3Ch] [bp-34h]@1
  int v24; // [sp+48h] [bp-28h]@1

  v7 = a2;
  v8 = a4;
  v9 = a3;
  v10 = a1;
  sub_21E94B4((void **)&v24, (const char *)&unk_257BC67);
  v23 = 0;
  v20 = 0;
  v11 = *(void (__fastcall **)(char *, int, signed int))(a6 + 8);
  if ( v11 )
  {
    v11(&v19, a6, 2);
    v21 = *(_DWORD *)(a6 + 12);
    v20 = *(void (**)(void))(a6 + 8);
  }
  v17 = 0;
  v12 = *(void (__fastcall **)(char *, int, signed int))(a7 + 8);
  if ( v12 )
    v12(&v16, a7, 2);
    v18 = *(_DWORD *)(a7 + 12);
    v17 = *(void (**)(void))(a7 + 8);
  SettingsScreenControllerBase::setUpCallbacksForDropdownOption(
    v10,
    v7,
    v9,
    v8,
    a5,
    (const char **)&v24,
    (int)&v22,
    (int)&v19,
    (int)&v16);
  if ( v17 )
    v17();
  if ( v20 )
    v20();
  if ( v23 )
    v23();
  v13 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v24 - 4);
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
      j_j_j_j__ZdlPv_9(v13);
}


void __fastcall SettingsScreenControllerBase::setUpCallbacksForDropdownOption(int a1, int *a2, const char **a3, int a4, int a5, int a6, int a7)
{
  SettingsScreenControllerBase::setUpCallbacksForDropdownOption(a1, a2, a3, a4, a5, a6, a7);
}


void __fastcall SettingsScreenControllerBase::~SettingsScreenControllerBase(SettingsScreenControllerBase *this)
{
  SettingsScreenControllerBase::~SettingsScreenControllerBase(this);
}


void __fastcall SettingsScreenControllerBase::setUpCallbacksForChoiceOption(ScreenController *a1, int a2, const char **a3, int a4, int a5, int a6)
{
  void (__fastcall *v6)(__int64 *, int, signed int); // r5@0
  const char *v7; // r7@1
  int v8; // r4@1
  int v9; // r8@1
  int v10; // r0@1
  bool v11; // zf@1
  size_t v12; // r0@4
  int i; // r1@4
  int v14; // t1@5
  int v15; // r5@6
  void (*v16)(void); // r7@6
  _DWORD *v17; // r0@6
  __int64 v18; // r1@6
  int v19; // r10@12
  int v20; // r8@13
  unsigned int *v21; // r2@14
  signed int v22; // r1@16
  unsigned int *v23; // r2@18
  signed int v24; // r1@20
  _BYTE *v25; // r7@30
  size_t v26; // r0@30
  int j; // r1@30
  int v28; // t1@31
  void (__fastcall *v29)(char *, int, signed int); // r3@32
  void *v30; // r7@34
  void (*v31)(void); // r0@34
  void *v32; // r0@38
  int v33; // r0@41
  unsigned int v34; // r8@41
  void (__fastcall *v35)(char *, int, signed int); // r3@41
  void (__fastcall *v36)(int *, int, signed int); // r3@43
  void *v37; // r7@45
  void (*v38)(void); // r0@45
  __int64 v39; // r0@45
  void *v40; // r0@49
  ScreenController *v41; // [sp+34h] [bp-DCh]@1
  char v42; // [sp+38h] [bp-D8h]@42
  void (*v43)(void); // [sp+40h] [bp-D0h]@41
  int v44; // [sp+44h] [bp-CCh]@42
  int v45; // [sp+48h] [bp-C8h]@18
  int v46; // [sp+4Ch] [bp-C4h]@43
  int v47; // [sp+50h] [bp-C0h]@44
  void (__fastcall *v48)(int *, int *, signed int); // [sp+58h] [bp-B8h]@43
  int v49; // [sp+5Ch] [bp-B4h]@44
  void *v50; // [sp+60h] [bp-B0h]@45
  void (*v51)(void); // [sp+68h] [bp-A8h]@45
  signed int (__fastcall *v52)(int, int); // [sp+6Ch] [bp-A4h]@45
  void *v53; // [sp+70h] [bp-A0h]@34
  void (*v54)(void); // [sp+78h] [bp-98h]@34
  signed int (*v55)(); // [sp+7Ch] [bp-94h]@34
  char v56; // [sp+80h] [bp-90h]@33
  void (*v57)(void); // [sp+88h] [bp-88h]@32
  int v58; // [sp+8Ch] [bp-84h]@33
  int v59; // [sp+90h] [bp-80h]@14
  int v60; // [sp+94h] [bp-7Ch]@34
  void *v61; // [sp+9Ch] [bp-74h]@34
  void (*v62)(void); // [sp+A4h] [bp-6Ch]@34
  signed int (__fastcall *v63)(int); // [sp+A8h] [bp-68h]@34
  int v64; // [sp+ACh] [bp-64h]@32
  void *v65; // [sp+B0h] [bp-60h]@6
  __int64 v66; // [sp+B8h] [bp-58h]@6
  __int64 v67; // [sp+C0h] [bp-50h]@6
  void (*v68)(void); // [sp+C8h] [bp-48h]@6
  int v69; // [sp+CCh] [bp-44h]@6
  _DWORD *v70; // [sp+D4h] [bp-3Ch]@6
  void (*v71)(void); // [sp+DCh] [bp-34h]@6
  int (__fastcall *v72)(int *); // [sp+E0h] [bp-30h]@6
  int v73; // [sp+E4h] [bp-2Ch]@6

  v7 = *a3;
  v8 = a4;
  v41 = a1;
  v9 = a2;
  v10 = *((_DWORD *)*a3 - 3);
  v11 = v10 == 0;
  if ( v10 )
  {
    v6 = *(void (__fastcall **)(__int64 *, int, signed int))(a4 + 8);
    v11 = v6 == 0;
  }
  if ( !v11 )
    v12 = strlen(v7);
    for ( i = -2128831035; v12; i = 16777619 * (i ^ v14) )
    {
      v14 = *v7++;
      --v12;
    }
    v73 = i;
    v68 = 0;
    v6(&v67, v8, 2);
    v69 = *(_DWORD *)(v8 + 12);
    v15 = v69;
    v68 = *(void (**)(void))(v8 + 8);
    v16 = v68;
    v71 = 0;
    v17 = operator new(0x10u);
    *(_QWORD *)v17 = v67;
    v17[2] = v16;
    v17[3] = v15;
    v70 = v17;
    v71 = (void (*)(void))sub_124ABA4;
    v72 = sub_124AB94;
    v65 = operator new(1u);
    LODWORD(v18) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
    HIDWORD(v18) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
    v66 = v18;
    ScreenController::bindBool((int)v41, &v73, (int)&v70, (int)&v65);
    if ( (_DWORD)v66 )
      ((void (*)(void))v66)();
    if ( v71 )
      v71();
    if ( v68 )
      v68();
  v19 = *(_DWORD *)(v9 + 8);
  if ( v19 )
    v20 = a5;
    do
      v25 = *(_BYTE **)(v19 + 4);
      v26 = strlen(*(const char **)(v19 + 4));
      for ( j = -2128831035; v26; j = 16777619 * (j ^ v28) )
      {
        v28 = *v25++;
        --v26;
      }
      v64 = j;
      v57 = 0;
      v29 = *(void (__fastcall **)(char *, int, signed int))(v20 + 8);
      if ( v29 )
        v29(&v56, v20, 2);
        v58 = *(_DWORD *)(v20 + 12);
        v57 = *(void (**)(void))(v20 + 8);
      sub_21E8AF4(&v59, (int *)(v19 + 4));
      v60 = *(_DWORD *)(v19 + 8);
      v62 = 0;
      v30 = operator new(0x18u);
      *(_QWORD *)v30 = *(_QWORD *)&v56;
      v31 = v57;
      *((_DWORD *)v30 + 2) = v31;
      *((_DWORD *)v30 + 3) = v58;
      sub_21E8AF4((int *)v30 + 4, &v59);
      *((_DWORD *)v30 + 5) = v60;
      v61 = v30;
      v63 = sub_124AC22;
      v54 = 0;
      v62 = (void (*)(void))sub_124AC44;
      v53 = operator new(1u);
      v55 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
      v54 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
      ScreenController::bindBool((int)v41, &v64, (int)&v61, (int)&v53);
      if ( v54 )
        v54();
      if ( v62 )
        v62();
      v32 = (void *)(v59 - 12);
      if ( (int *)(v59 - 12) != &dword_28898C0 )
        v21 = (unsigned int *)(v59 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
        }
        else
          v22 = (*v21)--;
        if ( v22 <= 0 )
          j_j_j_j__ZdlPv_9(v32);
      if ( v57 )
        v57();
      v33 = MinecraftScreenController::_getNameId(v41, (int **)(v19 + 4));
      v43 = 0;
      v34 = v33;
      v35 = *(void (__fastcall **)(char *, int, signed int))(a6 + 8);
      if ( v35 )
        v35(&v42, a6, 2);
        v44 = *(_DWORD *)(a6 + 12);
        v43 = *(void (**)(void))(a6 + 8);
      sub_21E8AF4(&v45, (int *)(v19 + 4));
      v46 = *(_DWORD *)(v19 + 8);
      v48 = 0;
      v36 = *(void (__fastcall **)(int *, int, signed int))(v8 + 8);
      if ( v36 )
        v36(&v47, v8, 2);
        v49 = *(_DWORD *)(v8 + 12);
        v48 = *(void (__fastcall **)(int *, int *, signed int))(v8 + 8);
      v51 = 0;
      v37 = operator new(0x28u);
      *(_QWORD *)v37 = *(_QWORD *)&v42;
      v38 = v43;
      *((_DWORD *)v37 + 2) = v38;
      *((_DWORD *)v37 + 3) = v44;
      sub_21E8AF4((int *)v37 + 4, &v45);
      *((_DWORD *)v37 + 5) = v46;
      v39 = *(_QWORD *)&v47;
      *(_QWORD *)&v47 = *((_QWORD *)v37 + 3);
      *((_QWORD *)v37 + 3) = v39;
      *((_DWORD *)v37 + 8) = v48;
      HIDWORD(v39) = v49;
      v49 = *((_DWORD *)v37 + 9);
      v50 = v37;
      v52 = sub_124AD34;
      *((_DWORD *)v37 + 9) = HIDWORD(v39);
      v51 = (void (*)(void))sub_124AD64;
      ScreenController::registerToggleChangeEventHandler((int)v41, v34, (int)&v50);
      if ( v51 )
        v51();
      v20 = a5;
      if ( v48 )
        v48(&v47, &v47, 3);
      v40 = (void *)(v45 - 12);
      if ( (int *)(v45 - 12) != &dword_28898C0 )
        v23 = (unsigned int *)(v45 - 4);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 <= 0 )
          j_j_j_j__ZdlPv_9(v40);
      if ( v43 )
        v43();
      v19 = *(_DWORD *)v19;
    while ( v19 );
}


void __fastcall SettingsScreenControllerBase::setUpCallbacksForBooleanOption(int a1, int a2, const void **a3)
{
  int v3; // r6@1
  const void **v4; // r4@1
  int v5; // r5@1
  const void **v6; // r0@1
  int v7; // r7@1
  char *v8; // r0@2
  char *v9; // r0@3
  unsigned int *v10; // r2@5
  signed int v11; // r1@7
  unsigned int *v12; // r2@9
  signed int v13; // r1@11
  unsigned int *v14; // r2@13
  signed int v15; // r1@15
  char *v16; // [sp+4h] [bp-24h]@1
  const void *v17; // [sp+8h] [bp-20h]@1
  char *v18; // [sp+Ch] [bp-1Ch]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v18 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v18, *((_DWORD *)*a3 - 3) + 1);
  sub_21E7408((const void **)&v18, "#", 1u);
  sub_21E72F0((const void **)&v18, v4);
  v16 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v16, *((_DWORD *)*v4 - 3) + 1);
  sub_21E7408((const void **)&v16, "#", 1u);
  sub_21E72F0((const void **)&v16, v4);
  v6 = sub_21E7408((const void **)&v16, "_enabled", 8u);
  v17 = *v6;
  v7 = (int)v17;
  *v6 = &unk_28898CC;
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption(
    v3,
    v5,
    (int **)v4,
    (const char **)&v18,
    (const char **)&v17);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v7 - 4);
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
      j_j_j_j__ZdlPv_9((void *)(v7 - 12));
  }
  v8 = v16 - 12;
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v16 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v18 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}


void __fastcall SettingsScreenControllerBase::setUpCallbacksForFloatOption(int a1, int a2, const void **a3, int *a4, int a5)
{
  int v5; // r9@1
  const void **v6; // r4@1
  int *v7; // r7@1
  int v8; // r8@1
  const void **v9; // r0@1
  const void **v10; // r0@1
  int v11; // r6@1
  void (__fastcall *v12)(char *, int, signed int); // r3@1
  char *v13; // r0@6
  char *v14; // r0@7
  char *v15; // r0@8
  char *v16; // r0@9
  unsigned int *v17; // r2@11
  signed int v18; // r1@13
  unsigned int *v19; // r2@15
  signed int v20; // r1@17
  unsigned int *v21; // r2@19
  signed int v22; // r1@21
  unsigned int *v23; // r2@23
  signed int v24; // r1@25
  unsigned int *v25; // r2@27
  signed int v26; // r1@29
  char v27; // [sp+14h] [bp-44h]@2
  void (*v28)(void); // [sp+1Ch] [bp-3Ch]@1
  int v29; // [sp+20h] [bp-38h]@2
  char *v30; // [sp+24h] [bp-34h]@1
  const void *v31; // [sp+28h] [bp-30h]@1
  char *v32; // [sp+2Ch] [bp-2Ch]@1
  char *v33; // [sp+30h] [bp-28h]@1
  char *v34; // [sp+34h] [bp-24h]@1

  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = a2;
  v34 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v34, *((_DWORD *)*a3 - 3) + 1);
  sub_21E7408((const void **)&v34, "#", 1u);
  sub_21E72F0((const void **)&v34, v6);
  v32 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v32, *((_DWORD *)*v6 - 3) + 1);
  sub_21E7408((const void **)&v32, "#", 1u);
  sub_21E72F0((const void **)&v32, v6);
  v9 = sub_21E7408((const void **)&v32, "_enabled", 8u);
  v33 = (char *)*v9;
  *v9 = &unk_28898CC;
  v30 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v30, *((_DWORD *)*v6 - 3) + 1);
  sub_21E7408((const void **)&v30, "#", 1u);
  sub_21E72F0((const void **)&v30, v6);
  v10 = sub_21E7408((const void **)&v30, "_slider_label", 0xDu);
  v11 = (int)*v10;
  v31 = *v10;
  *v10 = &unk_28898CC;
  v28 = 0;
  v12 = *(void (__fastcall **)(char *, int, signed int))(a5 + 8);
  if ( v12 )
  {
    v12(&v27, a5, 2);
    v29 = *(_DWORD *)(a5 + 12);
    v28 = *(void (**)(void))(a5 + 8);
  }
  SettingsScreenControllerBase::setUpCallbacksForFloatOption(
    v5,
    v8,
    (int **)v6,
    (int **)&v34,
    (const char **)&v33,
    (const char **)&v31,
    v7,
    (int)&v27);
  if ( v28 )
    v28();
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9((void *)(v11 - 12));
  v13 = v30 - 12;
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v30 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = v33 - 12;
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v33 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = v32 - 12;
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v32 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = v34 - 12;
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v34 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
}


void __fastcall SettingsScreenControllerBase::~SettingsScreenControllerBase(SettingsScreenControllerBase *this)
{
  SettingsScreenControllerBase *v1; // r0@1

  v1 = SettingsScreenControllerBase::~SettingsScreenControllerBase(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall SettingsScreenControllerBase::setUpCallbacksForDropdownOption(int a1, int a2, const void **a3, int a4, int a5)
{
  SettingsScreenControllerBase::setUpCallbacksForDropdownOption(a1, a2, a3, a4, a5);
}


void __fastcall SettingsScreenControllerBase::setupCallbacksForStringOption(ScreenController *a1, int **a2, const char **a3, const char **a4, int a5, int a6, int a7, int a8, int a9)
{
  SettingsScreenControllerBase::setupCallbacksForStringOption(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}


void __fastcall SettingsScreenControllerBase::setUpCallbacksForChoiceOption(ScreenController *a1, int a2, const char **a3, int a4, int a5, int a6)
{
  SettingsScreenControllerBase::setUpCallbacksForChoiceOption(a1, a2, a3, a4, a5, a6);
}


void __fastcall SettingsScreenControllerBase::setupCallbacksForStringOption(int a1, int a2, const void **a3, int a4, int a5)
{
  int v5; // r9@1
  const void **v6; // r4@1
  int v7; // r7@1
  int v8; // r8@1
  const void **v9; // r0@1
  int v10; // r5@1
  void (__fastcall *v11)(char *, int, signed int); // r3@1
  void (__fastcall *v12)(char *, int, signed int); // r3@3
  char *v13; // r0@10
  char *v14; // r0@11
  unsigned int *v15; // r2@13
  signed int v16; // r1@15
  unsigned int *v17; // r2@17
  signed int v18; // r1@19
  unsigned int *v19; // r2@21
  signed int v20; // r1@23
  char v21; // [sp+Ch] [bp-4Ch]@4
  void (*v22)(void); // [sp+14h] [bp-44h]@3
  int v23; // [sp+18h] [bp-40h]@4
  char v24; // [sp+1Ch] [bp-3Ch]@2
  void (*v25)(void); // [sp+24h] [bp-34h]@1
  int v26; // [sp+28h] [bp-30h]@2
  char *v27; // [sp+2Ch] [bp-2Ch]@1
  const void *v28; // [sp+30h] [bp-28h]@1
  char *v29; // [sp+34h] [bp-24h]@1

  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = a2;
  v29 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v29, *((_DWORD *)*a3 - 3) + 1);
  sub_21E7408((const void **)&v29, "#", 1u);
  sub_21E72F0((const void **)&v29, v6);
  v27 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v27, *((_DWORD *)*v6 - 3) + 1);
  sub_21E7408((const void **)&v27, "#", 1u);
  sub_21E72F0((const void **)&v27, v6);
  v9 = sub_21E7408((const void **)&v27, "_enabled", 8u);
  v10 = (int)*v9;
  v28 = *v9;
  *v9 = &unk_28898CC;
  v25 = 0;
  v11 = *(void (__fastcall **)(char *, int, signed int))(v7 + 8);
  if ( v11 )
  {
    v11(&v24, v7, 2);
    v26 = *(_DWORD *)(v7 + 12);
    v25 = *(void (**)(void))(v7 + 8);
  }
  v22 = 0;
  v12 = *(void (__fastcall **)(char *, int, signed int))(a5 + 8);
  if ( v12 )
    v12(&v21, a5, 2);
    v23 = *(_DWORD *)(a5 + 12);
    v22 = *(void (**)(void))(a5 + 8);
  SettingsScreenControllerBase::setupCallbacksForStringOption(
    v5,
    v8,
    (int **)v6,
    (const char **)&v29,
    (const char **)&v28,
    (int)&v24,
    (int)&v21);
  if ( v22 )
    v22();
  if ( v25 )
    v25();
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v10 - 4);
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
      j_j_j_j__ZdlPv_9((void *)(v10 - 12));
  v13 = v27 - 12;
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v27 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = v29 - 12;
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v29 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
}


void __fastcall SettingsScreenControllerBase::setUpCallbacksForFloatOption(ScreenController *a1, int **a2, int **a3, const char **a4, const char **a5, int a6, int a7, int a8, int a9, int a10, int a11, int *a12, int a13)
{
  SettingsScreenControllerBase::setUpCallbacksForFloatOption(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}


void __fastcall SettingsScreenControllerBase::setUpCallbacksForStepOption(ScreenController *a1, int **a2, const char **a3, const char **a4, const char **a5, const char **a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13)
{
  SettingsScreenControllerBase::setUpCallbacksForStepOption(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}


void __fastcall SettingsScreenControllerBase::setUpCallbacksForStepOption(int a1, int a2, const void **a3, int a4, int a5)
{
  int v5; // r6@1
  const void **v6; // r4@1
  int v7; // r7@1
  int v8; // r8@1
  const void **v9; // r0@1
  const void **v10; // r0@1
  const void **v11; // r0@1
  int v12; // r5@1
  void (__fastcall *v13)(char *, int, signed int); // r3@1
  char *v14; // r0@6
  char *v15; // r0@7
  char *v16; // r0@8
  char *v17; // r0@9
  char *v18; // r0@10
  char *v19; // r0@11
  unsigned int *v20; // r2@13
  signed int v21; // r1@15
  unsigned int *v22; // r2@17
  signed int v23; // r1@19
  unsigned int *v24; // r2@21
  signed int v25; // r1@23
  unsigned int *v26; // r2@25
  signed int v27; // r1@27
  unsigned int *v28; // r2@29
  signed int v29; // r1@31
  unsigned int *v30; // r2@33
  signed int v31; // r1@35
  unsigned int *v32; // r2@37
  signed int v33; // r1@39
  char v34; // [sp+18h] [bp-48h]@2
  void (*v35)(void); // [sp+20h] [bp-40h]@1
  int v36; // [sp+24h] [bp-3Ch]@2
  char *v37; // [sp+28h] [bp-38h]@1
  const void *v38; // [sp+2Ch] [bp-34h]@1
  char *v39; // [sp+30h] [bp-30h]@1
  char *v40; // [sp+34h] [bp-2Ch]@1
  char *v41; // [sp+38h] [bp-28h]@1
  char *v42; // [sp+3Ch] [bp-24h]@1
  char *v43; // [sp+40h] [bp-20h]@1

  v5 = a1;
  v6 = a3;
  v7 = a4;
  v8 = a2;
  v43 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v43, *((_DWORD *)*a3 - 3) + 1);
  sub_21E7408((const void **)&v43, "#", 1u);
  sub_21E72F0((const void **)&v43, v6);
  v41 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v41, *((_DWORD *)*v6 - 3) + 1);
  sub_21E7408((const void **)&v41, "#", 1u);
  sub_21E72F0((const void **)&v41, v6);
  v9 = sub_21E7408((const void **)&v41, "_enabled", 8u);
  v42 = (char *)*v9;
  *v9 = &unk_28898CC;
  v39 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v39, *((_DWORD *)*v6 - 3) + 1);
  sub_21E7408((const void **)&v39, "#", 1u);
  sub_21E72F0((const void **)&v39, v6);
  v10 = sub_21E7408((const void **)&v39, "_steps", 6u);
  v40 = (char *)*v10;
  *v10 = &unk_28898CC;
  v37 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v37, *((_DWORD *)*v6 - 3) + 1);
  sub_21E7408((const void **)&v37, "#", 1u);
  sub_21E72F0((const void **)&v37, v6);
  v11 = sub_21E7408((const void **)&v37, "_slider_label", 0xDu);
  v12 = (int)*v11;
  v38 = *v11;
  *v11 = &unk_28898CC;
  v35 = 0;
  v13 = *(void (__fastcall **)(char *, int, signed int))(v7 + 8);
  if ( v13 )
  {
    v13(&v34, v7, 2);
    v36 = *(_DWORD *)(v7 + 12);
    v35 = *(void (**)(void))(v7 + 8);
  }
  SettingsScreenControllerBase::setUpCallbacksForStepOption(
    v5,
    v8,
    (int **)v6,
    (const char **)&v43,
    (const char **)&v42,
    (const char **)&v40,
    (const char **)&v38,
    (int)&v34,
    a5);
  if ( v35 )
    v35();
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    }
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9((void *)(v12 - 12));
  v14 = v37 - 12;
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v37 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = v40 - 12;
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v40 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = v39 - 12;
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v39 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = v42 - 12;
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v42 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = v41 - 12;
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v41 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = v43 - 12;
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v43 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
}


void __fastcall SettingsScreenControllerBase::setUpCallbacksForBooleanOption(int a1, int a2, int **a3, const char **a4, const char **a5)
{
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption(a1, a2, a3, a4, a5);
}


void __fastcall SettingsScreenControllerBase::setupCallbacksForStringOption(int a1, int a2, int **a3, const char **a4, const char **a5, int a6, int a7)
{
  SettingsScreenControllerBase::setupCallbacksForStringOption(a1, a2, a3, a4, a5, a6, a7);
}


void __fastcall SettingsScreenControllerBase::setUpCallbacksForStepOption(int a1, int a2, int **a3, const char **a4, const char **a5, const char **a6, const char **a7, int a8, int a9)
{
  ScreenController *v9; // r10@1
  const char **v10; // r8@1
  int **v11; // r9@1
  int v12; // r4@1
  int v13; // r0@1
  int v14; // r7@1
  _DWORD *v15; // r0@1
  _DWORD *v16; // r0@1
  __int64 v17; // r1@1
  _DWORD *v18; // r0@1
  __int64 v19; // r1@1
  _DWORD *v20; // r0@1
  __int64 v21; // r1@1
  _DWORD *v22; // r0@1
  __int64 v23; // r1@1
  void (__fastcall *v24)(char *, int, signed int); // r3@1
  char v25; // [sp+28h] [bp-80h]@2
  void (*v26)(void); // [sp+30h] [bp-78h]@1
  int v27; // [sp+34h] [bp-74h]@2
  _DWORD *v28; // [sp+38h] [bp-70h]@1
  __int64 v29; // [sp+40h] [bp-68h]@1
  _DWORD *v30; // [sp+48h] [bp-60h]@1
  __int64 v31; // [sp+50h] [bp-58h]@1
  _DWORD *v32; // [sp+58h] [bp-50h]@1
  __int64 v33; // [sp+60h] [bp-48h]@1
  _DWORD *v34; // [sp+68h] [bp-40h]@1
  __int64 v35; // [sp+70h] [bp-38h]@1
  _DWORD *v36; // [sp+78h] [bp-30h]@1
  void (*v37)(void); // [sp+80h] [bp-28h]@1
  int *(__fastcall *v38)(int *, Option ***); // [sp+84h] [bp-24h]@1

  v9 = (ScreenController *)a1;
  v10 = a4;
  v11 = a3;
  v12 = a2;
  v13 = MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(a1 + 424));
  v14 = Options::get(v13, v12);
  v15 = operator new(4u);
  *v15 = v14;
  v36 = v15;
  v37 = (void (*)(void))sub_124D5FE;
  v38 = sub_124D5E8;
  v16 = operator new(4u);
  LODWORD(v17) = sub_124D63C;
  *v16 = v14;
  HIDWORD(v17) = sub_124D634;
  v34 = v16;
  v35 = v17;
  v18 = operator new(4u);
  LODWORD(v19) = sub_124D6D8;
  *v18 = v14;
  HIDWORD(v19) = sub_124D672;
  v32 = v18;
  v33 = v19;
  v20 = operator new(4u);
  LODWORD(v21) = sub_124D716;
  *v20 = v14;
  HIDWORD(v21) = sub_124D70E;
  v30 = v20;
  v31 = v21;
  v22 = operator new(8u);
  HIDWORD(v23) = sub_124D74C;
  *v22 = v9;
  v22[1] = v14;
  LODWORD(v23) = sub_124D754;
  v28 = v22;
  v29 = v23;
  v26 = 0;
  v24 = *(void (__fastcall **)(char *, int, signed int))(a8 + 8);
  if ( v24 )
  {
    v24(&v25, a8, 2);
    v27 = *(_DWORD *)(a8 + 12);
    v26 = *(void (**)(void))(a8 + 8);
  }
  SettingsScreenControllerBase::setUpCallbacksForStepOption(
    v9,
    v11,
    v10,
    a5,
    a6,
    a7,
    (int)&v36,
    (int)&v34,
    (int)&v32,
    (int)&v30,
    (int)&v28,
    (int)&v25,
    a9);
  if ( v26 )
    v26();
  if ( (_DWORD)v29 )
    ((void (*)(void))v29)();
  if ( (_DWORD)v31 )
    ((void (*)(void))v31)();
  if ( (_DWORD)v33 )
    ((void (*)(void))v33)();
  if ( (_DWORD)v35 )
    ((void (*)(void))v35)();
  if ( v37 )
    v37();
}


SettingsScreenControllerBase *__fastcall SettingsScreenControllerBase::~SettingsScreenControllerBase(SettingsScreenControllerBase *this)
{
  SettingsScreenControllerBase *v1; // r10@1
  unsigned __int64 *v2; // r7@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  unsigned __int64 *v5; // r6@11
  int v6; // r1@11
  void *v7; // r0@11
  char *v8; // r0@13
  unsigned __int64 *v9; // r7@16
  unsigned int *v10; // r2@18
  signed int v11; // r1@20
  unsigned __int64 *v12; // r6@26
  int v13; // r1@26
  void *v14; // r0@26
  char *v15; // r0@28
  unsigned __int64 *v16; // r7@31
  unsigned int *v17; // r2@33
  signed int v18; // r1@35
  unsigned __int64 *v19; // r6@41
  int v20; // r1@41
  void *v21; // r0@41
  char *v22; // r0@43

  v1 = this;
  *(_DWORD *)this = &off_26E36E0;
  v2 = (unsigned __int64 *)*((_DWORD *)this + 124);
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
  _aeabi_memclr4(*((_QWORD *)v1 + 61), 4 * (*((_QWORD *)v1 + 61) >> 32));
  *((_DWORD *)v1 + 124) = 0;
  *((_DWORD *)v1 + 125) = 0;
  v8 = (char *)*((_DWORD *)v1 + 122);
  if ( v8 && (char *)v1 + 512 != v8 )
    operator delete(v8);
  v9 = (unsigned __int64 *)*((_DWORD *)v1 + 117);
  while ( v9 )
    v12 = v9;
    v13 = *v9 >> 32;
    v9 = (unsigned __int64 *)*v9;
    v14 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v13 - 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    operator delete(v12);
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 460), 4 * (*(_QWORD *)((char *)v1 + 460) >> 32));
  *((_DWORD *)v1 + 117) = 0;
  *((_DWORD *)v1 + 118) = 0;
  v15 = (char *)*((_DWORD *)v1 + 115);
  if ( v15 && (char *)v1 + 484 != v15 )
    operator delete(v15);
  v16 = (unsigned __int64 *)*((_DWORD *)v1 + 110);
  while ( v16 )
    v19 = v16;
    v20 = *v16 >> 32;
    v16 = (unsigned __int64 *)*v16;
    v21 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v20 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    operator delete(v19);
  _aeabi_memclr4(*((_QWORD *)v1 + 54), 4 * (*((_QWORD *)v1 + 54) >> 32));
  *((_DWORD *)v1 + 110) = 0;
  *((_DWORD *)v1 + 111) = 0;
  v22 = (char *)*((_DWORD *)v1 + 108);
  if ( v22 && (char *)v1 + 456 != v22 )
    operator delete(v22);
  MainMenuScreenController::~MainMenuScreenController(v1);
  return v1;
}


void __fastcall SettingsScreenControllerBase::setUpCallbacksForStepOption(int a1, int a2, int **a3, const char **a4, const char **a5, const char **a6, const char **a7, int a8, int a9)
{
  SettingsScreenControllerBase::setUpCallbacksForStepOption(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}


void __fastcall SettingsScreenControllerBase::setupCallbacksForStringOption(ScreenController *a1, int **a2, const char **a3, const char **a4, int a5, int a6, int a7, int a8, int a9)
{
  const char *v9; // r6@1
  ScreenController *v10; // r11@1
  const char **v11; // r5@1
  int **v12; // r8@1
  size_t v13; // r0@1
  int i; // r1@1
  int v15; // t1@2
  void (__fastcall *v16)(int *, int, signed int); // r3@3
  int v17; // r4@4
  _DWORD *v18; // r0@6
  int v19; // r7@6
  __int64 v20; // r1@6
  const char *v21; // r4@12
  int v22; // r0@12
  bool v23; // zf@12
  size_t v24; // r0@15
  int j; // r1@15
  int v26; // t1@16
  void (*v27)(void); // r4@17
  _DWORD *v28; // r0@17
  int v29; // r2@17
  __int64 v30; // r1@17
  ScreenController *v31; // r5@23
  int v32; // r11@23
  void (__fastcall *v33)(char *, int, signed int); // r3@23
  void (__fastcall *v34)(int *, int, signed int); // r3@25
  int v35; // r4@27
  void (__fastcall *v36)(int *, int, signed int); // r3@27
  _DWORD *v37; // r0@29
  void (*v38)(void); // r1@29
  int v39; // r3@29
  void (__fastcall *v40)(_DWORD, _DWORD, _DWORD); // r1@29
  int v41; // r3@29
  int v42; // r1@29
  int v43; // r8@37
  void (__fastcall *v44)(char *, int, signed int); // r3@37
  void (__fastcall *v45)(int *, int, signed int); // r3@39
  int v46; // r7@41
  void (__fastcall *v47)(int *, int, signed int); // r3@41
  _DWORD *v48; // r0@43
  void (*v49)(void); // r1@43
  int v50; // r3@43
  void (__fastcall *v51)(_DWORD, _DWORD, _DWORD); // r1@43
  int v52; // r3@43
  int v53; // r1@43
  char v54; // [sp+8h] [bp-110h]@38
  void (*v55)(void); // [sp+10h] [bp-108h]@37
  int v56; // [sp+14h] [bp-104h]@38
  int v57; // [sp+18h] [bp-100h]@40
  int v58; // [sp+1Ch] [bp-FCh]@43
  void (__fastcall *v59)(_DWORD, _DWORD, _DWORD); // [sp+20h] [bp-F8h]@39
  int v60; // [sp+24h] [bp-F4h]@40
  int v61; // [sp+28h] [bp-F0h]@42
  int v62; // [sp+2Ch] [bp-ECh]@43
  void (__fastcall *v63)(int *, int *, signed int); // [sp+30h] [bp-E8h]@41
  int v64; // [sp+34h] [bp-E4h]@42
  _DWORD *v65; // [sp+38h] [bp-E0h]@43
  void (*v66)(void); // [sp+40h] [bp-D8h]@43
  signed int (__fastcall *v67)(int *, int); // [sp+44h] [bp-D4h]@43
  char v68; // [sp+48h] [bp-D0h]@24
  void (*v69)(void); // [sp+50h] [bp-C8h]@23
  int v70; // [sp+54h] [bp-C4h]@24
  int v71; // [sp+58h] [bp-C0h]@26
  int v72; // [sp+5Ch] [bp-BCh]@29
  void (__fastcall *v73)(_DWORD, _DWORD, _DWORD); // [sp+60h] [bp-B8h]@25
  int v74; // [sp+64h] [bp-B4h]@26
  int v75; // [sp+68h] [bp-B0h]@28
  int v76; // [sp+6Ch] [bp-ACh]@29
  void (__fastcall *v77)(int *, int *, signed int); // [sp+70h] [bp-A8h]@27
  int v78; // [sp+74h] [bp-A4h]@28
  _DWORD *v79; // [sp+78h] [bp-A0h]@29
  void (*v80)(void); // [sp+80h] [bp-98h]@29
  signed int (__fastcall *v81)(int *, int); // [sp+84h] [bp-94h]@29
  void *v82; // [sp+88h] [bp-90h]@17
  __int64 v83; // [sp+90h] [bp-88h]@17
  char v84; // [sp+98h] [bp-80h]@17
  void (*v85)(void); // [sp+A0h] [bp-78h]@17
  int v86; // [sp+A4h] [bp-74h]@17
  _DWORD *v87; // [sp+ACh] [bp-6Ch]@17
  void (*v88)(void); // [sp+B4h] [bp-64h]@17
  int (__fastcall *v89)(int *); // [sp+B8h] [bp-60h]@17
  int v90; // [sp+BCh] [bp-5Ch]@17
  void *v91; // [sp+C0h] [bp-58h]@6
  __int64 v92; // [sp+C8h] [bp-50h]@6
  int v93; // [sp+D0h] [bp-48h]@4
  int v94; // [sp+D4h] [bp-44h]@6
  void (*v95)(void); // [sp+D8h] [bp-40h]@3
  int v96; // [sp+DCh] [bp-3Ch]@4
  _DWORD *v97; // [sp+E0h] [bp-38h]@6
  void (*v98)(void); // [sp+E8h] [bp-30h]@6
  int (__fastcall *v99)(int, int *); // [sp+ECh] [bp-2Ch]@6
  int v100; // [sp+F0h] [bp-28h]@3

  v9 = *a3;
  v10 = a1;
  v11 = a4;
  v12 = a2;
  v13 = strlen(*a3);
  for ( i = -2128831035; v13; i = 16777619 * (i ^ v15) )
  {
    v15 = *v9++;
    --v13;
  }
  v100 = i;
  v95 = 0;
  v16 = *(void (__fastcall **)(int *, int, signed int))(a6 + 8);
  if ( v16 )
    v16(&v93, a6, 2);
    v9 = *(const char **)(a6 + 12);
    v96 = *(_DWORD *)(a6 + 12);
    v17 = *(_DWORD *)(a6 + 8);
    v95 = *(void (**)(void))(a6 + 8);
  else
    v17 = 0;
  v98 = 0;
  v18 = operator new(0x10u);
  v19 = v94;
  *v18 = v93;
  v18[1] = v19;
  v18[2] = v17;
  v18[3] = v9;
  v97 = v18;
  v98 = (void (*)(void))sub_1249DAE;
  v99 = sub_1249D9C;
  v91 = operator new(1u);
  LODWORD(v20) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v20) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v92 = v20;
  ScreenController::bindString((int)v10, &v100, (int)&v97, (int)&v91);
  if ( (_DWORD)v92 )
    ((void (*)(void))v92)();
  if ( v98 )
    v98();
  if ( v95 )
    v95();
  v21 = *v11;
  v22 = *((_DWORD *)*v11 - 3);
  v23 = v22 == 0;
  if ( v22 )
    v11 = *(const char ***)(a5 + 8);
    v23 = v11 == 0;
  if ( !v23 )
    v24 = strlen(v21);
    for ( j = -2128831035; v24; j = 16777619 * (j ^ v26) )
    {
      v26 = *v21++;
      --v24;
    }
    v90 = j;
    v85 = 0;
    ((void (__fastcall *)(char *, int, signed int))v11)(&v84, a5, 2);
    v86 = *(_DWORD *)(a5 + 12);
    v85 = *(void (**)(void))(a5 + 8);
    v27 = v85;
    v88 = 0;
    v28 = operator new(0x10u);
    *(_QWORD *)v28 = *(_QWORD *)&v84;
    v29 = v86;
    v28[2] = v27;
    v28[3] = v29;
    v87 = v28;
    v88 = (void (*)(void))sub_1249E3C;
    v89 = sub_1249E2C;
    v82 = operator new(1u);
    LODWORD(v30) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
    HIDWORD(v30) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
    v83 = v30;
    ScreenController::bindBool((int)v10, &v90, (int)&v87, (int)&v82);
    if ( (_DWORD)v83 )
      ((void (*)(void))v83)();
    if ( v88 )
      v88();
    if ( v85 )
      v85();
  v31 = v10;
  v32 = MinecraftScreenController::_getNameId(v10, v12);
  v69 = 0;
  v33 = *(void (__fastcall **)(char *, int, signed int))(a7 + 8);
  if ( v33 )
    v33(&v68, a7, 2);
    v70 = *(_DWORD *)(a7 + 12);
    v69 = *(void (**)(void))(a7 + 8);
  v73 = 0;
  v34 = *(void (__fastcall **)(int *, int, signed int))(a8 + 8);
  if ( v34 )
    v34(&v71, a8, 2);
    v74 = *(_DWORD *)(a8 + 12);
    v73 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(a8 + 8);
  v77 = 0;
  v35 = 0;
  v36 = *(void (__fastcall **)(int *, int, signed int))(a5 + 8);
  if ( v36 )
    v36(&v75, a5, 2);
    v78 = *(_DWORD *)(a5 + 12);
    v35 = *(_DWORD *)(a5 + 8);
    v77 = *(void (__fastcall **)(int *, int *, signed int))(a5 + 8);
  v80 = 0;
  v37 = operator new(0x30u);
  *(_QWORD *)v37 = *(_QWORD *)&v68;
  v38 = v69;
  v37[2] = v38;
  v37[3] = v70;
  v39 = v72;
  v37[4] = v71;
  v37[5] = v39;
  v40 = v73;
  v37[6] = v40;
  v37[7] = v74;
  v41 = v76;
  v37[8] = v75;
  v37[9] = v41;
  v42 = v78;
  v37[10] = v35;
  v37[11] = v42;
  v79 = v37;
  v80 = (void (*)(void))sub_124A22C;
  v81 = sub_1249EBC;
  ScreenController::registerTextEditChangedEventHandler((int)v31, v32, (int)&v79);
  if ( v80 )
    v80();
  if ( v77 )
    v77(&v75, &v75, 3);
  if ( v73 )
    v73(&v71, &v71, 3);
  if ( v69 )
    v69();
  v43 = MinecraftScreenController::_getNameId(v31, v12);
  v55 = 0;
  v44 = *(void (__fastcall **)(char *, int, signed int))(a7 + 8);
  if ( v44 )
    v44(&v54, a7, 2);
    v56 = *(_DWORD *)(a7 + 12);
    v55 = *(void (**)(void))(a7 + 8);
  v59 = 0;
  v45 = *(void (__fastcall **)(int *, int, signed int))(a9 + 8);
  if ( v45 )
    v45(&v57, a9, 2);
    v60 = *(_DWORD *)(a9 + 12);
    v59 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(a9 + 8);
  v63 = 0;
  v46 = 0;
  v47 = *(void (__fastcall **)(int *, int, signed int))(a5 + 8);
  if ( v47 )
    v47(&v61, a5, 2);
    v64 = *(_DWORD *)(a5 + 12);
    v46 = *(_DWORD *)(a5 + 8);
    v63 = *(void (__fastcall **)(int *, int *, signed int))(a5 + 8);
  v66 = 0;
  v48 = operator new(0x30u);
  *(_QWORD *)v48 = *(_QWORD *)&v54;
  v49 = v55;
  v48[2] = v49;
  v48[3] = v56;
  v50 = v58;
  v48[4] = v57;
  v48[5] = v50;
  v51 = v59;
  v48[6] = v51;
  v48[7] = v60;
  v52 = v62;
  v48[8] = v61;
  v48[9] = v52;
  v53 = v64;
  v48[10] = v46;
  v48[11] = v53;
  v65 = v48;
  v66 = (void (*)(void))sub_124A6C8;
  v67 = sub_124A358;
  ScreenController::registerTextEditFinishedEventHandler((int)v31, v43, (int)&v65);
  if ( v66 )
    v66();
  if ( v63 )
    v63(&v61, &v61, 3);
  if ( v59 )
    v59(&v57, &v57, 3);
  if ( v55 )
    v55();
}


void __fastcall SettingsScreenControllerBase::setUpCallbacksForFloatOption(int a1, int a2, int **a3, int **a4, const char **a5, const char **a6, int *a7, int a8)
{
  SettingsScreenControllerBase::setUpCallbacksForFloatOption(a1, a2, a3, a4, a5, a6, a7, a8);
}


void __fastcall SettingsScreenControllerBase::setUpCallbacksForBooleanOption(int a1, int a2, const void **a3)
{
  SettingsScreenControllerBase::setUpCallbacksForBooleanOption(a1, a2, a3);
}


void __fastcall SettingsScreenControllerBase::setUpCallbacksForDropdownOption(int a1, int *a2, const char **a3, int a4, int a5, const char **a6, int a7, int a8, int a9)
{
  SettingsScreenControllerBase::setUpCallbacksForDropdownOption(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}


int __fastcall SettingsScreenControllerBase::_getSliderProgressValue(int a1, int **a2)
{
  unsigned __int64 *v2; // r5@1
  int **v3; // r4@1
  int result; // r0@2

  v2 = (unsigned __int64 *)(a1 + 460);
  v3 = a2;
  if ( std::_Hashtable<std::string,std::pair<std::string const,float>,std::allocator<std::pair<std::string const,float>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)(a1 + 460),
         a2) )
  {
    _R0 = std::__detail::_Map_base<std::string,std::pair<std::string const,float>,std::allocator<std::pair<std::string const,float>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
            v2,
            v3);
    __asm
    {
      VLDR            S0, [R0]
      VMOV            R0, S0
    }
  }
  else
      VLDR            S0, =0.0
  return result;
}


void __fastcall SettingsScreenControllerBase::setUpCallbacksForDropdownOption(int a1, int a2, int *a3, const char **a4, int a5, int a6, const char **a7)
{
  int v7; // r6@1
  const char **v8; // r8@1
  int *v9; // r9@1
  int v10; // r7@1
  int v11; // r0@1
  int v12; // r7@1
  _DWORD *v13; // r0@1
  _DWORD *v14; // r0@1
  __int64 v15; // r1@1
  _DWORD *v16; // r0@1
  __int64 v17; // r4@1
  _DWORD *v18; // [sp+14h] [bp-4Ch]@1
  __int64 v19; // [sp+1Ch] [bp-44h]@1
  _DWORD *v20; // [sp+24h] [bp-3Ch]@1
  __int64 v21; // [sp+2Ch] [bp-34h]@1
  _DWORD *v22; // [sp+34h] [bp-2Ch]@1
  void (*v23)(void); // [sp+3Ch] [bp-24h]@1
  int (__fastcall *v24)(Option ***); // [sp+40h] [bp-20h]@1

  v7 = a1;
  v8 = a4;
  v9 = a3;
  v10 = a2;
  v11 = MinecraftScreenModel::getOptions(*(MinecraftScreenModel **)(a1 + 424));
  v12 = Options::get(v11, v10);
  v13 = operator new(4u);
  *v13 = v12;
  v22 = v13;
  v23 = (void (*)(void))sub_124AEF0;
  v24 = sub_124AEE8;
  v14 = operator new(4u);
  LODWORD(v15) = sub_124AF2E;
  *v14 = v12;
  HIDWORD(v15) = sub_124AF26;
  v20 = v14;
  v21 = v15;
  v16 = operator new(4u);
  HIDWORD(v17) = sub_124AF64;
  LODWORD(v17) = sub_124AF6C;
  *v16 = v12;
  v18 = v16;
  v19 = v17;
  SettingsScreenControllerBase::setUpCallbacksForDropdownOption(v7, v9, v8, a5, a6, a7, (int)&v22, (int)&v20, (int)&v18);
  if ( (_DWORD)v19 )
    ((void (*)(void))v19)();
  if ( (_DWORD)v21 )
    ((void (*)(void))v21)();
  if ( v23 )
    v23();
}


void __fastcall SettingsScreenControllerBase::setUpCallbacksForDropdownOption(int a1, int a2, int *a3, const char **a4, int a5, int a6, const char **a7)
{
  SettingsScreenControllerBase::setUpCallbacksForDropdownOption(a1, a2, a3, a4, a5, a6, a7);
}


void __fastcall SettingsScreenControllerBase::setUpCallbacksForStepOption(ScreenController *a1, int **a2, const char **a3, const char **a4, const char **a5, const char **a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13)
{
  const char *v13; // r4@0
  ScreenController *v14; // r11@1
  const char **v15; // r10@1
  void (__fastcall *v16)(int *, int, signed int); // r5@1
  bool v17; // zf@1
  size_t v18; // r0@4
  int i; // r1@4
  int v20; // t1@5
  int v21; // r4@6
  void (*v22)(void); // r5@6
  _DWORD *v23; // r0@6
  int v24; // r7@6
  __int64 v25; // r1@6
  const char *v26; // r4@12
  size_t v27; // r0@12
  int j; // r1@12
  int v29; // t1@13
  void (__fastcall *v30)(char *, int, signed int); // r3@14
  void (__fastcall *v31)(int *, int, signed int); // r3@16
  void *v32; // r4@18
  void (*v33)(void); // r0@18
  void (__fastcall *v34)(_DWORD, _DWORD, _DWORD); // r0@18
  __int64 v35; // r1@18
  __int64 v36; // r1@18
  void *v37; // r0@22
  const char *v38; // r4@27
  size_t v39; // r0@27
  int k; // r1@27
  int v41; // t1@28
  int v42; // r5@29
  void (__fastcall *v43)(char *, int, signed int); // r3@29
  _DWORD *v44; // r0@31
  int v45; // r2@31
  __int64 v46; // r1@31
  const char *v47; // r5@37
  size_t v48; // r0@37
  int l; // r1@37
  int v50; // t1@38
  void (__fastcall *v51)(char *, int, signed int); // r3@39
  void (__fastcall *v52)(int *, int, signed int); // r3@41
  void (__fastcall *v53)(int *, int, signed int); // r3@43
  void *v54; // r4@45
  void (*v55)(void); // r0@45
  __int64 v56; // r1@45 OVERLAPPED
  int v57; // r3@45
  __int64 v58; // kr00_8@45
  __int64 v59; // r1@45
  int v60; // r7@53
  void *v61; // r0@53
  void (__fastcall *v62)(int *, int, signed int); // r3@57
  void (__fastcall *v63)(int *, int, signed int); // r3@59
  void (__fastcall *v64)(int *, int, signed int); // r3@61
  void (__fastcall *v65)(int *, int, signed int); // r3@63
  void *v66; // r6@65
  __int64 v67; // r0@65 OVERLAPPED
  int v68; // r2@65
  __int64 v69; // kr08_8@65
  int v70; // r2@65
  __int64 v71; // kr10_8@65
  int v72; // r2@65
  __int64 v73; // kr18_8@65
  void *v74; // r0@75
  unsigned int *v75; // r2@76
  signed int v76; // r1@78
  void (__fastcall *v77)(int *, int, signed int); // r3@80
  void (__fastcall *v78)(int *, int, signed int); // r3@82
  void (__fastcall *v79)(int *, int, signed int); // r3@84
  void *v80; // r4@86
  __int64 v81; // r0@86 OVERLAPPED
  int v82; // r2@86
  int v83; // r2@86
  void *v84; // r0@94
  void (__fastcall *v85)(int *, int, signed int); // r3@95
  void (__fastcall *v86)(int *, int, signed int); // r3@97
  void (__fastcall *v87)(int *, int, signed int); // r3@99
  void (__fastcall *v88)(int *, int, signed int); // r3@101
  void *v89; // r6@103
  __int64 v90; // r0@103 OVERLAPPED
  int v91; // r2@103
  __int64 v92; // kr20_8@103
  int v93; // r2@103
  __int64 v94; // kr28_8@103
  int v95; // r2@103
  __int64 v96; // kr30_8@103
  unsigned int *v97; // r2@115
  signed int v98; // r1@117
  unsigned int *v99; // r2@119
  signed int v100; // r1@121
  unsigned int *v101; // r2@131
  signed int v102; // r1@133
  int v103; // [sp+4h] [bp-244h]@56
  int **v104; // [sp+8h] [bp-240h]@1
  int v105; // [sp+8h] [bp-240h]@95
  int v106; // [sp+Ch] [bp-23Ch]@95
  int v107; // [sp+10h] [bp-238h]@96
  void (*v108)(void); // [sp+18h] [bp-230h]@95
  int v109; // [sp+1Ch] [bp-22Ch]@96
  int v110; // [sp+20h] [bp-228h]@98
  int v111; // [sp+24h] [bp-224h]@103
  void (*v112)(void); // [sp+28h] [bp-220h]@97
  int v113; // [sp+2Ch] [bp-21Ch]@98
  int v114; // [sp+30h] [bp-218h]@100
  int v115; // [sp+34h] [bp-214h]@103
  void (*v116)(void); // [sp+38h] [bp-210h]@99
  int v117; // [sp+3Ch] [bp-20Ch]@100
  int v118; // [sp+40h] [bp-208h]@102
  int v119; // [sp+44h] [bp-204h]@103
  void (*v120)(void); // [sp+48h] [bp-200h]@101
  int v121; // [sp+4Ch] [bp-1FCh]@102
  ScreenController *v122; // [sp+50h] [bp-1F8h]@103
  void *v123; // [sp+54h] [bp-1F4h]@103
  void (*v124)(void); // [sp+5Ch] [bp-1ECh]@103
  int (__fastcall *v125)(int, int, int); // [sp+60h] [bp-1E8h]@103
  int v126; // [sp+64h] [bp-1E4h]@80
  int v127; // [sp+68h] [bp-1E0h]@81
  void (*v128)(void); // [sp+70h] [bp-1D8h]@80
  int v129; // [sp+74h] [bp-1D4h]@81
  int v130; // [sp+78h] [bp-1D0h]@83
  void (*v131)(void); // [sp+80h] [bp-1C8h]@82
  int v132; // [sp+84h] [bp-1C4h]@83
  int v133; // [sp+88h] [bp-1C0h]@85
  void (*v134)(void); // [sp+90h] [bp-1B8h]@84
  int v135; // [sp+94h] [bp-1B4h]@85
  ScreenController *v136; // [sp+98h] [bp-1B0h]@86
  void *v137; // [sp+9Ch] [bp-1ACh]@86
  void (*v138)(void); // [sp+A4h] [bp-1A4h]@86
  signed int (__fastcall *v139)(int, int, int); // [sp+A8h] [bp-1A0h]@86
  int v140; // [sp+ACh] [bp-19Ch]@57
  int v141; // [sp+B0h] [bp-198h]@58
  void (*v142)(void); // [sp+B8h] [bp-190h]@57
  int v143; // [sp+BCh] [bp-18Ch]@58
  int v144; // [sp+C0h] [bp-188h]@60
  int v145; // [sp+C4h] [bp-184h]@65
  void (*v146)(void); // [sp+C8h] [bp-180h]@59
  int v147; // [sp+CCh] [bp-17Ch]@60
  int v148; // [sp+D0h] [bp-178h]@62
  int v149; // [sp+D4h] [bp-174h]@65
  void (*v150)(void); // [sp+D8h] [bp-170h]@61
  int v151; // [sp+DCh] [bp-16Ch]@62
  int v152; // [sp+E0h] [bp-168h]@64
  int v153; // [sp+E4h] [bp-164h]@65
  void (*v154)(void); // [sp+E8h] [bp-160h]@63
  int v155; // [sp+ECh] [bp-15Ch]@64
  void *v156; // [sp+F0h] [bp-158h]@65
  void (*v157)(void); // [sp+F8h] [bp-150h]@65
  signed int (__fastcall *v158)(int, int, int); // [sp+FCh] [bp-14Ch]@65
  void *v159; // [sp+100h] [bp-148h]@45
  __int64 v160; // [sp+108h] [bp-140h]@45
  char v161; // [sp+110h] [bp-138h]@40
  void (*v162)(void); // [sp+118h] [bp-130h]@39
  int v163; // [sp+11Ch] [bp-12Ch]@40
  int v164; // [sp+120h] [bp-128h]@41
  int v165; // [sp+124h] [bp-124h]@42
  void (__fastcall *v166)(int *, int *, signed int); // [sp+12Ch] [bp-11Ch]@41
  int v167; // [sp+130h] [bp-118h]@42
  int v168; // [sp+134h] [bp-114h]@44
  int v169; // [sp+138h] [bp-110h]@45
  void (__fastcall *v170)(int *, int *, signed int); // [sp+13Ch] [bp-10Ch]@43
  int v171; // [sp+140h] [bp-108h]@44
  char v172; // [sp+144h] [bp-104h]@45
  ScreenController *v173; // [sp+148h] [bp-100h]@45
  void *v174; // [sp+14Ch] [bp-FCh]@45
  void (*v175)(void); // [sp+154h] [bp-F4h]@45
  void (__fastcall *v176)(int *, int); // [sp+158h] [bp-F0h]@45
  int v177; // [sp+15Ch] [bp-ECh]@39
  void *v178; // [sp+160h] [bp-E8h]@31
  __int64 v179; // [sp+168h] [bp-E0h]@31
  char v180; // [sp+170h] [bp-D8h]@30
  void (*v181)(void); // [sp+178h] [bp-D0h]@29
  int v182; // [sp+17Ch] [bp-CCh]@30
  _DWORD *v183; // [sp+184h] [bp-C4h]@31
  void (*v184)(void); // [sp+18Ch] [bp-BCh]@31
  int (__fastcall *v185)(int); // [sp+190h] [bp-B8h]@31
  int v186; // [sp+194h] [bp-B4h]@29
  void *v187; // [sp+198h] [bp-B0h]@18
  __int64 v188; // [sp+1A0h] [bp-A8h]@18
  char v189; // [sp+1A8h] [bp-A0h]@15
  void (*v190)(void); // [sp+1B0h] [bp-98h]@14
  int v191; // [sp+1B4h] [bp-94h]@15
  int v192; // [sp+1B8h] [bp-90h]@17
  void (__fastcall *v193)(_DWORD, _DWORD, _DWORD); // [sp+1C0h] [bp-88h]@16
  int v194; // [sp+1C4h] [bp-84h]@17
  int v195; // [sp+1C8h] [bp-80h]@18
  char v196; // [sp+1CCh] [bp-7Ch]@18
  ScreenController *v197; // [sp+1D0h] [bp-78h]@18
  void *v198; // [sp+1D4h] [bp-74h]@18
  void (*v199)(void); // [sp+1DCh] [bp-6Ch]@18
  int v200; // [sp+1E4h] [bp-64h]@14
  void *v201; // [sp+1E8h] [bp-60h]@6
  __int64 v202; // [sp+1F0h] [bp-58h]@6
  int v203; // [sp+1F8h] [bp-50h]@6
  int v204; // [sp+1FCh] [bp-4Ch]@6
  void (*v205)(void); // [sp+200h] [bp-48h]@6
  int v206; // [sp+204h] [bp-44h]@6
  _DWORD *v207; // [sp+20Ch] [bp-3Ch]@6
  void (*v208)(void); // [sp+214h] [bp-34h]@6
  int (__fastcall *v209)(int *); // [sp+218h] [bp-30h]@6
  int v210; // [sp+21Ch] [bp-2Ch]@6

  v14 = a1;
  v104 = a2;
  v15 = a3;
  v16 = *(void (__fastcall **)(int *, int, signed int))(a8 + 8);
  v17 = v16 == 0;
  if ( v16 )
  {
    v13 = *a4;
    v17 = *((_DWORD *)*a4 - 3) == 0;
  }
  if ( !v17 )
    v18 = strlen(v13);
    for ( i = -2128831035; v18; i = 16777619 * (i ^ v20) )
    {
      v20 = *v13++;
      --v18;
    }
    v210 = i;
    v205 = 0;
    v16(&v203, a8, 2);
    v206 = *(_DWORD *)(a8 + 12);
    v21 = v206;
    v205 = *(void (**)(void))(a8 + 8);
    v22 = v205;
    v208 = 0;
    v23 = operator new(0x10u);
    v24 = v204;
    *v23 = v203;
    v23[1] = v24;
    v23[2] = v22;
    v23[3] = v21;
    v207 = v23;
    v208 = (void (*)(void))sub_124D79E;
    v209 = sub_124D78E;
    v201 = operator new(1u);
    LODWORD(v25) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
    HIDWORD(v25) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
    v202 = v25;
    ScreenController::bindBool((int)v14, &v210, (int)&v207, (int)&v201);
    if ( (_DWORD)v202 )
      ((void (*)(void))v202)();
    if ( v208 )
      v208();
    if ( v205 )
      v205();
  v26 = *v15;
  v27 = strlen(*v15);
  for ( j = -2128831035; v27; j = 16777619 * (j ^ v29) )
    v29 = *v26++;
    --v27;
  v200 = j;
  v190 = 0;
  v30 = *(void (__fastcall **)(char *, int, signed int))(a9 + 8);
  if ( v30 )
    v30(&v189, a9, 2);
    v191 = *(_DWORD *)(a9 + 12);
    v190 = *(void (**)(void))(a9 + 8);
  v193 = 0;
  v31 = *(void (__fastcall **)(int *, int, signed int))(a10 + 8);
  if ( v31 )
    v31(&v192, a10, 2);
    v194 = *(_DWORD *)(a10 + 12);
    v193 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(a10 + 8);
  sub_21E8AF4(&v195, (int *)v15);
  v196 = a13;
  v197 = v14;
  v199 = 0;
  v32 = operator new(0x2Cu);
  *(_QWORD *)v32 = *(_QWORD *)&v189;
  v33 = v190;
  *((_DWORD *)v32 + 2) = v33;
  *((_DWORD *)v32 + 3) = v191;
  *((_QWORD *)v32 + 2) = *(_QWORD *)&v192;
  v34 = v193;
  *((_DWORD *)v32 + 6) = v34;
  *((_DWORD *)v32 + 7) = v194;
  sub_21E8AF4((int *)v32 + 8, &v195);
  LODWORD(v35) = sub_124D8F4;
  HIDWORD(v35) = sub_124D81C;
  *(_QWORD *)((char *)v32 + 36) = *(_QWORD *)&v196;
  v198 = v32;
  *(_QWORD *)&v199 = v35;
  v187 = operator new(1u);
  LODWORD(v36) = ZNSt14_Function_base13_Base_managerIZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v36) = ZNSt17_Function_handlerIFbvEZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v188 = v36;
  ScreenController::bindInt((int)v14, &v200, (int)&v198, (int)&v187);
  if ( (_DWORD)v188 )
    ((void (*)(void))v188)();
  if ( v199 )
    v199();
  v37 = (void *)(v195 - 12);
  if ( (int *)(v195 - 12) != &dword_28898C0 )
    v97 = (unsigned int *)(v195 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v98 = __ldrex(v97);
      while ( __strex(v98 - 1, v97) );
    else
      v98 = (*v97)--;
    if ( v98 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  if ( v193 )
    v193(&v192, &v192, 3);
  if ( v190 )
    v190();
  v38 = *a5;
  v39 = strlen(*a5);
  for ( k = -2128831035; v39; k = 16777619 * (k ^ v41) )
    v41 = *v38++;
    --v39;
  v186 = k;
  v181 = 0;
  v42 = 0;
  v43 = *(void (__fastcall **)(char *, int, signed int))(a9 + 8);
  if ( v43 )
    v43(&v180, a9, 2);
    v182 = *(_DWORD *)(a9 + 12);
    v42 = *(_DWORD *)(a9 + 8);
    v181 = *(void (**)(void))(a9 + 8);
  v184 = 0;
  v44 = operator new(0x10u);
  *(_QWORD *)v44 = *(_QWORD *)&v180;
  v45 = v182;
  v44[2] = v42;
  v44[3] = v45;
  v183 = v44;
  v184 = (void (*)(void))sub_124DA6C;
  v185 = sub_124DA38;
  v178 = operator new(1u);
  LODWORD(v46) = ZNSt14_Function_base13_Base_managerIZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v46) = ZNSt17_Function_handlerIFbvEZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v179 = v46;
  ScreenController::bindInt((int)v14, &v186, (int)&v183, (int)&v178);
  if ( (_DWORD)v179 )
    ((void (*)(void))v179)();
  if ( v184 )
    v184();
  if ( v181 )
    v181();
  v47 = *a6;
  v48 = strlen(*a6);
  for ( l = -2128831035; v48; l = 16777619 * (l ^ v50) )
    v50 = *v47++;
    --v48;
  v177 = l;
  v162 = 0;
  v51 = *(void (__fastcall **)(char *, int, signed int))(a7 + 8);
  if ( v51 )
    v51(&v161, a7, 2);
    v163 = *(_DWORD *)(a7 + 12);
    v162 = *(void (**)(void))(a7 + 8);
  sub_21E8AF4(&v164, (int *)v15);
  v166 = 0;
  v52 = *(void (__fastcall **)(int *, int, signed int))(a10 + 8);
  if ( v52 )
    v52(&v165, a10, 2);
    v167 = *(_DWORD *)(a10 + 12);
    v166 = *(void (__fastcall **)(int *, int *, signed int))(a10 + 8);
  v170 = 0;
  v53 = *(void (__fastcall **)(int *, int, signed int))(a12 + 8);
  if ( v53 )
    v53(&v168, a12, 2);
    v171 = *(_DWORD *)(a12 + 12);
    v170 = *(void (__fastcall **)(int *, int *, signed int))(a12 + 8);
  v172 = a13;
  v173 = v14;
  v175 = 0;
  v54 = operator new(0x3Cu);
  *(_QWORD *)v54 = *(_QWORD *)&v161;
  v55 = v162;
  *((_DWORD *)v54 + 2) = v55;
  *((_DWORD *)v54 + 3) = v163;
  sub_21E8AF4((int *)v54 + 4, &v164);
  v56 = *(_QWORD *)&v165;
  *(_QWORD *)&v165 = *(_QWORD *)((char *)v54 + 20);
  *(_QWORD *)((char *)v54 + 20) = v56;
  *((_DWORD *)v54 + 7) = v166;
  v57 = v167;
  v167 = *((_DWORD *)v54 + 8);
  *((_DWORD *)v54 + 8) = v57;
  *(__int64 *)((char *)&v56 + 4) = *(_QWORD *)&v168;
  v58 = *(_QWORD *)((char *)v54 + 36);
  v168 = *(_QWORD *)((char *)v54 + 36);
  v169 = HIDWORD(v58);
  *(_QWORD *)((char *)v54 + 36) = *(__int64 *)((char *)&v56 + 4);
  HIDWORD(v56) = v170;
  *((_DWORD *)v54 + 11) = HIDWORD(v56);
  HIDWORD(v56) = *((_DWORD *)v54 + 12);
  *((_DWORD *)v54 + 12) = v171;
  v171 = HIDWORD(v56);
  *(_QWORD *)((char *)v54 + 52) = *(_QWORD *)&v172;
  v174 = v54;
  v175 = (void (*)(void))sub_124E0BC;
  v176 = sub_124DAEC;
  v159 = operator new(1u);
  LODWORD(v59) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v59) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v160 = v59;
  ScreenController::bindString((int)v14, &v177, (int)&v174, (int)&v159);
  if ( (_DWORD)v160 )
    ((void (*)(void))v160)();
  if ( v175 )
    v175();
  if ( v170 )
    v170(&v168, &v168, 3);
  if ( v166 )
    v166(&v165, &v165, 3);
  v60 = a10;
  v61 = (void *)(v164 - 12);
  if ( (int *)(v164 - 12) != &dword_28898C0 )
    v99 = (unsigned int *)(v164 - 4);
        v100 = __ldrex(v99);
      while ( __strex(v100 - 1, v99) );
      v60 = a10;
      v100 = (*v99)--;
    if ( v100 <= 0 )
      j_j_j_j__ZdlPv_9(v61);
  if ( v162 )
    v162();
  v103 = MinecraftScreenController::_getNameId(v14, v104);
  if ( a13 == 1 )
    sub_21E8AF4(&v140, (int *)v15);
    v142 = 0;
    v62 = *(void (__fastcall **)(int *, int, signed int))(a8 + 8);
    if ( v62 )
      v62(&v141, a8, 2);
      v143 = *(_DWORD *)(a8 + 12);
      v142 = *(void (**)(void))(a8 + 8);
    v146 = 0;
    v63 = *(void (__fastcall **)(int *, int, signed int))(a9 + 8);
    if ( v63 )
      v63(&v144, a9, 2);
      v147 = *(_DWORD *)(a9 + 12);
      v146 = *(void (**)(void))(a9 + 8);
    v150 = 0;
    v64 = *(void (__fastcall **)(int *, int, signed int))(v60 + 8);
    if ( v64 )
      v64(&v148, v60, 2);
      v151 = *(_DWORD *)(v60 + 12);
      v150 = *(void (**)(void))(v60 + 8);
    v154 = 0;
    v65 = *(void (__fastcall **)(int *, int, signed int))(a11 + 8);
    if ( v65 )
      v65(&v152, a11, 2);
      v155 = *(_DWORD *)(a11 + 12);
      v154 = *(void (**)(void))(a11 + 8);
    v157 = 0;
    v66 = operator new(0x44u);
    sub_21E8AF4((int *)v66, &v140);
    v67 = *(_QWORD *)&v141;
    *(_QWORD *)&v141 = *(_QWORD *)((char *)v66 + 4);
    *(_QWORD *)((char *)v66 + 4) = v67;
    *((_DWORD *)v66 + 3) = v142;
    v68 = v143;
    v143 = *((_DWORD *)v66 + 4);
    *((_DWORD *)v66 + 4) = v68;
    *(__int64 *)((char *)&v67 + 4) = *(_QWORD *)&v144;
    v69 = *(_QWORD *)((char *)v66 + 20);
    v144 = *(_QWORD *)((char *)v66 + 20);
    v145 = HIDWORD(v69);
    *(_QWORD *)((char *)v66 + 20) = *(__int64 *)((char *)&v67 + 4);
    *((_DWORD *)v66 + 7) = v146;
    v70 = v147;
    v147 = *((_DWORD *)v66 + 8);
    *((_DWORD *)v66 + 8) = v70;
    *(__int64 *)((char *)&v67 + 4) = *(_QWORD *)&v148;
    v71 = *(_QWORD *)((char *)v66 + 36);
    v148 = *(_QWORD *)((char *)v66 + 36);
    v149 = HIDWORD(v71);
    *(_QWORD *)((char *)v66 + 36) = *(__int64 *)((char *)&v67 + 4);
    *((_DWORD *)v66 + 11) = v150;
    v72 = v151;
    v151 = *((_DWORD *)v66 + 12);
    *((_DWORD *)v66 + 12) = v72;
    *(__int64 *)((char *)&v67 + 4) = *(_QWORD *)&v152;
    v73 = *(_QWORD *)((char *)v66 + 52);
    v152 = *(_QWORD *)((char *)v66 + 52);
    v153 = HIDWORD(v73);
    *(_QWORD *)((char *)v66 + 52) = *(__int64 *)((char *)&v67 + 4);
    HIDWORD(v67) = v154;
    *((_DWORD *)v66 + 15) = HIDWORD(v67);
    HIDWORD(v67) = v155;
    v155 = *((_DWORD *)v66 + 16);
    *((_DWORD *)v66 + 16) = HIDWORD(v67);
    v156 = v66;
    v157 = (void (*)(void))sub_124E354;
    v158 = sub_124E29C;
    ScreenController::registerSliderChangedEventHandler((int)v14, v103, (int)&v156);
    if ( v157 )
      v157();
    if ( v154 )
      v154();
    if ( v150 )
      v150();
    if ( v146 )
      v146();
    if ( v142 )
      v142();
    v74 = (void *)(v140 - 12);
    if ( (int *)(v140 - 12) != &dword_28898C0 )
      v75 = (unsigned int *)(v140 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v76 = __ldrex(v75);
        while ( __strex(v76 - 1, v75) );
        goto LABEL_140;
      }
LABEL_139:
      v76 = (*v75)--;
LABEL_140:
      if ( v76 <= 0 )
        j_j_j_j__ZdlPv_9(v74);
      return;
  else
    sub_21E8AF4(&v126, (int *)v15);
    v128 = 0;
    v77 = *(void (__fastcall **)(int *, int, signed int))(a8 + 8);
    if ( v77 )
      v77(&v127, a8, 2);
      v129 = *(_DWORD *)(a8 + 12);
      v128 = *(void (**)(void))(a8 + 8);
    v131 = 0;
    v78 = *(void (__fastcall **)(int *, int, signed int))(a9 + 8);
    if ( v78 )
      v78(&v130, a9, 2);
      v132 = *(_DWORD *)(a9 + 12);
      v131 = *(void (**)(void))(a9 + 8);
    v134 = 0;
    v79 = *(void (__fastcall **)(int *, int, signed int))(v60 + 8);
    if ( v79 )
      v79(&v133, v60, 2);
      v135 = *(_DWORD *)(v60 + 12);
      v134 = *(void (**)(void))(v60 + 8);
    v136 = v14;
    v138 = 0;
    v80 = operator new(0x38u);
    sub_21E8AF4((int *)v80, &v126);
    v81 = *(_QWORD *)&v127;
    *(_QWORD *)&v127 = *(_QWORD *)((char *)v80 + 4);
    *(_QWORD *)((char *)v80 + 4) = v81;
    *((_DWORD *)v80 + 3) = v128;
    v82 = v129;
    v129 = *((_DWORD *)v80 + 4);
    *((_DWORD *)v80 + 4) = v82;
    *(__int64 *)((char *)&v81 + 4) = *(_QWORD *)&v130;
    *(_QWORD *)&v130 = *(_QWORD *)((char *)v80 + 20);
    *(_QWORD *)((char *)v80 + 20) = *(__int64 *)((char *)&v81 + 4);
    *((_DWORD *)v80 + 7) = v131;
    v83 = v132;
    v132 = *((_DWORD *)v80 + 8);
    *((_DWORD *)v80 + 8) = v83;
    *(__int64 *)((char *)&v81 + 4) = *(_QWORD *)&v133;
    *(_QWORD *)&v133 = *(_QWORD *)((char *)v80 + 36);
    *(_QWORD *)((char *)v80 + 36) = *(__int64 *)((char *)&v81 + 4);
    HIDWORD(v81) = v134;
    *((_DWORD *)v80 + 11) = HIDWORD(v81);
    HIDWORD(v81) = v135;
    v135 = *((_DWORD *)v80 + 12);
    *((_DWORD *)v80 + 12) = HIDWORD(v81);
    *((_DWORD *)v80 + 13) = v136;
    v137 = v80;
    v138 = (void (*)(void))sub_124E698;
    v139 = sub_124E574;
    ScreenController::registerSliderChangedEventHandler((int)v14, v103, (int)&v137);
    if ( v138 )
      v138();
    if ( v134 )
      v134();
    if ( v131 )
      v131();
    if ( v128 )
      v128();
    v84 = (void *)(v126 - 12);
    if ( (int *)(v126 - 12) != &dword_28898C0 )
      v101 = (unsigned int *)(v126 - 4);
          v102 = __ldrex(v101);
        while ( __strex(v102 - 1, v101) );
      else
        v102 = (*v101)--;
      if ( v102 <= 0 )
        j_j_j_j__ZdlPv_9(v84);
    v105 = MinecraftScreenController::_getNameId(v14, v104);
    sub_21E8AF4(&v106, (int *)v15);
    v108 = 0;
    v85 = *(void (__fastcall **)(int *, int, signed int))(a8 + 8);
    if ( v85 )
      v85(&v107, a8, 2);
      v109 = *(_DWORD *)(a8 + 12);
      v108 = *(void (**)(void))(a8 + 8);
    v112 = 0;
    v86 = *(void (__fastcall **)(int *, int, signed int))(a9 + 8);
    if ( v86 )
      v86(&v110, a9, 2);
      v113 = *(_DWORD *)(a9 + 12);
      v112 = *(void (**)(void))(a9 + 8);
    v116 = 0;
    v87 = *(void (__fastcall **)(int *, int, signed int))(v60 + 8);
    if ( v87 )
      v87(&v114, v60, 2);
      v117 = *(_DWORD *)(v60 + 12);
      v116 = *(void (**)(void))(v60 + 8);
    v120 = 0;
    v88 = *(void (__fastcall **)(int *, int, signed int))(a11 + 8);
    if ( v88 )
      v88(&v118, a11, 2);
      v121 = *(_DWORD *)(a11 + 12);
      v120 = *(void (**)(void))(a11 + 8);
    v122 = v14;
    v124 = 0;
    v89 = operator new(0x48u);
    sub_21E8AF4((int *)v89, &v106);
    v90 = *(_QWORD *)&v107;
    *(_QWORD *)&v107 = *(_QWORD *)((char *)v89 + 4);
    *(_QWORD *)((char *)v89 + 4) = v90;
    *((_DWORD *)v89 + 3) = v108;
    v91 = v109;
    v109 = *((_DWORD *)v89 + 4);
    *((_DWORD *)v89 + 4) = v91;
    *(__int64 *)((char *)&v90 + 4) = *(_QWORD *)&v110;
    v92 = *(_QWORD *)((char *)v89 + 20);
    v110 = *(_QWORD *)((char *)v89 + 20);
    v111 = HIDWORD(v92);
    *(_QWORD *)((char *)v89 + 20) = *(__int64 *)((char *)&v90 + 4);
    *((_DWORD *)v89 + 7) = v112;
    v93 = v113;
    v113 = *((_DWORD *)v89 + 8);
    *((_DWORD *)v89 + 8) = v93;
    *(__int64 *)((char *)&v90 + 4) = *(_QWORD *)&v114;
    v94 = *(_QWORD *)((char *)v89 + 36);
    v114 = *(_QWORD *)((char *)v89 + 36);
    v115 = HIDWORD(v94);
    *(_QWORD *)((char *)v89 + 36) = *(__int64 *)((char *)&v90 + 4);
    *((_DWORD *)v89 + 11) = v116;
    v95 = v117;
    v117 = *((_DWORD *)v89 + 12);
    *((_DWORD *)v89 + 12) = v95;
    *(__int64 *)((char *)&v90 + 4) = *(_QWORD *)&v118;
    v96 = *(_QWORD *)((char *)v89 + 52);
    v118 = *(_QWORD *)((char *)v89 + 52);
    v119 = HIDWORD(v96);
    *(_QWORD *)((char *)v89 + 52) = *(__int64 *)((char *)&v90 + 4);
    HIDWORD(v90) = v120;
    *((_DWORD *)v89 + 15) = HIDWORD(v90);
    HIDWORD(v90) = v121;
    v121 = *((_DWORD *)v89 + 16);
    *((_DWORD *)v89 + 16) = HIDWORD(v90);
    *((_DWORD *)v89 + 17) = v122;
    v123 = v89;
    v124 = (void (*)(void))sub_124E8F4;
    v125 = sub_124E86C;
    ScreenController::registerSliderFinishedEventHandler((int)v14, v105, (int)&v123);
    if ( v124 )
      v124();
    if ( v120 )
      v120();
    if ( v116 )
      v116();
    if ( v112 )
      v112();
    if ( v108 )
      v108();
    v74 = (void *)(v106 - 12);
    if ( (int *)(v106 - 12) != &dword_28898C0 )
      v75 = (unsigned int *)(v106 - 4);
      goto LABEL_139;
}


int __fastcall SettingsScreenControllerBase::SettingsScreenControllerBase(int a1, int a2)
{
  int v2; // r9@1
  int v3; // r0@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  double v6; // r0@7
  int v7; // r5@7
  int v8; // r0@10
  unsigned int *v9; // r6@14
  double v10; // r0@21
  int v11; // r6@23
  void *v12; // r5@23
  double v13; // r0@24
  int v14; // r6@26
  void *v15; // r5@26
  unsigned int v16; // r0@27
  int v17; // r6@29
  void *v18; // r5@29
  int v20; // [sp+4h] [bp-34h]@1
  int v21; // [sp+8h] [bp-30h]@1

  v2 = a1;
  v20 = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  v21 = v3;
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
  }
  MainMenuScreenController::MainMenuScreenController(v2, (int)&v20);
  v7 = v21;
  if ( v21 )
    HIDWORD(v6) = v21 + 4;
        LODWORD(v6) = __ldrex((unsigned int *)HIDWORD(v6));
      while ( __strex(LODWORD(v6) - 1, (unsigned int *)HIDWORD(v6)) );
      LODWORD(v6) = (*(_DWORD *)HIDWORD(v6))--;
    if ( v8 == 1 )
      v9 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
      if ( &pthread_create )
      {
        __dmb();
        do
        {
          LODWORD(v6) = __ldrex(v9);
          HIDWORD(v6) = LODWORD(v6) - 1;
        }
        while ( __strex(LODWORD(v6) - 1, v9) );
      }
      else
        LODWORD(v6) = (*v9)--;
      if ( LODWORD(v6) == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  *(_DWORD *)v2 = &off_26E36E0;
  *(_DWORD *)(v2 + 440) = 0;
  *(_DWORD *)(v2 + 444) = 0;
  *(_DWORD *)(v2 + 448) = 1065353216;
  *(_DWORD *)(v2 + 452) = 0;
  LODWORD(v6) = v2 + 448;
  v10 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(v6)));
  *(_DWORD *)(v2 + 436) = LODWORD(v10);
  if ( LODWORD(v10) == 1 )
    v12 = (void *)(v2 + 456);
    *(_DWORD *)(v2 + 456) = 0;
  else
    if ( LODWORD(v10) >= 0x40000000 )
      sub_21E57F4();
    v11 = 4 * LODWORD(v10);
    v12 = operator new(4 * LODWORD(v10));
    _aeabi_memclr4(v12, v11);
  *(_DWORD *)(v2 + 432) = v12;
  *(_DWORD *)(v2 + 468) = 0;
  *(_DWORD *)(v2 + 472) = 0;
  *(_DWORD *)(v2 + 476) = 1065353216;
  *(_DWORD *)(v2 + 480) = 0;
  LODWORD(v10) = v2 + 476;
  v13 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(v10)));
  *(_DWORD *)(v2 + 464) = LODWORD(v13);
  if ( LODWORD(v13) == 1 )
    v15 = (void *)(v2 + 484);
    *(_DWORD *)(v2 + 484) = 0;
    if ( LODWORD(v13) >= 0x40000000 )
    v14 = 4 * LODWORD(v13);
    v15 = operator new(4 * LODWORD(v13));
    _aeabi_memclr4(v15, v14);
  *(_DWORD *)(v2 + 460) = v15;
  *(_DWORD *)(v2 + 496) = 0;
  *(_DWORD *)(v2 + 500) = 0;
  *(_DWORD *)(v2 + 504) = 1065353216;
  *(_DWORD *)(v2 + 508) = 0;
  LODWORD(v13) = v2 + 504;
  v16 = sub_21E6254(v13);
  *(_DWORD *)(v2 + 492) = v16;
  if ( v16 == 1 )
    v18 = (void *)(v2 + 512);
    *(_DWORD *)(v2 + 512) = 0;
    if ( v16 >= 0x40000000 )
    v17 = 4 * v16;
    v18 = operator new(4 * v16);
    _aeabi_memclr4(v18, v17);
  *(_DWORD *)(v2 + 488) = v18;
  return v2;
}


void __fastcall SettingsScreenControllerBase::setUpCallbacksForDropdownOption(int a1, int *a2, const char **a3, int a4, int a5, const char **a6, int a7, int a8, int a9)
{
  void (__fastcall *v9)(int *, int, signed int); // r5@0
  int v10; // r6@1
  int v11; // r10@1
  const char **v12; // r9@1
  int *v13; // r11@1
  const char *v14; // r4@1
  int v15; // r0@1
  bool v16; // zf@1
  size_t v17; // r0@4
  int i; // r1@4
  int v19; // t1@5
  int v20; // r4@6
  void (*v21)(void); // r5@6
  _DWORD *v22; // r0@6
  int v23; // r7@6
  __int64 v24; // r1@6
  int v25; // r4@14
  int *v26; // r5@14
  void *v27; // r0@16
  void *v28; // r0@17
  int v29; // r7@18
  int v30; // r4@18
  int *v31; // r0@18
  __int64 *v32; // r6@18
  void (__fastcall *v33)(int *, int, signed int); // r3@18
  void *v34; // r5@20
  __int64 v35; // r0@20
  void *v36; // r0@24
  char *v37; // r4@25
  size_t v38; // r0@25
  int j; // r1@25
  int v40; // t1@26
  int *v41; // r4@27
  __int64 v42; // r1@27
  void *v43; // r0@31
  char *v44; // r0@32
  const char *v45; // r4@33
  size_t v46; // r0@33
  int k; // r1@33
  int v48; // t1@34
  void (__fastcall *v49)(__int64 *, int, signed int); // r3@35
  void *v50; // r4@37
  void (*v51)(void); // r0@37
  int v52; // r0@37
  __int64 v53; // r0@37
  __int64 v54; // r1@37
  ScreenController *v55; // r8@39
  int v56; // r7@41
  unsigned int *v57; // r2@43
  signed int v58; // r1@45
  void *v59; // r6@51
  int v60; // r1@51
  void *v61; // r0@51
  int v62; // r5@56
  int v63; // r9@58
  unsigned int *v64; // r2@60
  signed int v65; // r1@62
  unsigned int *v66; // r2@64
  signed int v67; // r1@66
  unsigned int *v68; // r2@68
  signed int v69; // r1@70
  _BYTE *v70; // r4@84
  size_t v71; // r0@84
  int l; // r1@84
  int v73; // t1@85
  void (__fastcall *v74)(char *, int, signed int); // r3@86
  void *v75; // r4@88
  void (*v76)(void); // r0@88
  void *v77; // r0@92
  int v78; // r0@95
  unsigned int v79; // r11@95
  void (__fastcall *v80)(char *, int, signed int); // r3@95
  void (__fastcall *v81)(int *, int, signed int); // r3@97
  void *v82; // r4@99
  void (*v83)(void); // r0@99
  __int64 v84; // r0@99
  void *v85; // r0@103
  void *v86; // r0@104
  unsigned int *v87; // r2@109
  signed int v88; // r1@111
  unsigned int *v89; // r2@113
  signed int v90; // r1@115
  unsigned int *v91; // r2@117
  signed int v92; // r1@119
  unsigned int *v93; // r2@121
  signed int v94; // r1@123
  unsigned int *v95; // r2@125
  signed int v96; // r1@127
  int *v97; // [sp+28h] [bp-1D0h]@39
  _DWORD *v98; // [sp+2Ch] [bp-1CCh]@99
  char v99; // [sp+40h] [bp-1B8h]@96
  void (*v100)(void); // [sp+48h] [bp-1B0h]@95
  int v101; // [sp+4Ch] [bp-1ACh]@96
  int v102; // [sp+50h] [bp-1A8h]@68
  int v103; // [sp+54h] [bp-1A4h]@97
  int v104; // [sp+58h] [bp-1A0h]@64
  int v105; // [sp+5Ch] [bp-19Ch]@98
  void (*v106)(void); // [sp+64h] [bp-194h]@97
  int v107; // [sp+68h] [bp-190h]@98
  ScreenController *v108; // [sp+6Ch] [bp-18Ch]@99
  void *v109; // [sp+70h] [bp-188h]@99
  void (*v110)(void); // [sp+78h] [bp-180h]@99
  signed int (__fastcall *v111)(int, int); // [sp+7Ch] [bp-17Ch]@99
  void *v112; // [sp+80h] [bp-178h]@88
  int (__fastcall *v113)(void **, void **, int); // [sp+88h] [bp-170h]@88
  signed int (*v114)(); // [sp+8Ch] [bp-16Ch]@88
  char v115; // [sp+90h] [bp-168h]@87
  void (*v116)(void); // [sp+98h] [bp-160h]@86
  int v117; // [sp+9Ch] [bp-15Ch]@87
  int v118; // [sp+A0h] [bp-158h]@60
  int v119; // [sp+A4h] [bp-154h]@88
  void *v120; // [sp+ACh] [bp-14Ch]@88
  int (__fastcall *v121)(int *, int *, int); // [sp+B4h] [bp-144h]@88
  signed int (__fastcall *v122)(int); // [sp+B8h] [bp-140h]@88
  int v123; // [sp+BCh] [bp-13Ch]@86
  void *v124; // [sp+C0h] [bp-138h]@37
  __int64 v125; // [sp+C8h] [bp-130h]@37
  __int64 v126; // [sp+D0h] [bp-128h]@36
  void (*v127)(void); // [sp+D8h] [bp-120h]@35
  int v128; // [sp+DCh] [bp-11Ch]@36
  void *ptr; // [sp+E0h] [bp-118h]@37
  int v130; // [sp+E4h] [bp-114h]@37
  int v131; // [sp+E8h] [bp-110h]@37
  int v132; // [sp+ECh] [bp-10Ch]@37
  __int64 v133; // [sp+F0h] [bp-108h]@37
  int v134; // [sp+F8h] [bp-100h]@54
  void *v135; // [sp+100h] [bp-F8h]@37
  void (*v136)(void); // [sp+108h] [bp-F0h]@37
  int v137; // [sp+110h] [bp-E8h]@35
  void *v138; // [sp+114h] [bp-E4h]@27
  __int64 v139; // [sp+11Ch] [bp-DCh]@27
  int v140; // [sp+124h] [bp-D4h]@27
  int v141; // [sp+128h] [bp-D0h]@27
  int *v142; // [sp+12Ch] [bp-CCh]@27
  void (*v143)(void); // [sp+134h] [bp-C4h]@27
  int (__fastcall *v144)(int ***); // [sp+138h] [bp-C0h]@27
  char *s; // [sp+13Ch] [bp-BCh]@25
  int v146; // [sp+140h] [bp-B8h]@27
  int v147; // [sp+144h] [bp-B4h]@18
  void (*v148)(void); // [sp+150h] [bp-A8h]@18
  int v149; // [sp+154h] [bp-A4h]@19
  int v150; // [sp+158h] [bp-A0h]@20
  void *v151; // [sp+15Ch] [bp-9Ch]@20
  void (*v152)(void); // [sp+164h] [bp-94h]@20
  signed int (__fastcall *v153)(int, int); // [sp+168h] [bp-90h]@20
  int v154; // [sp+16Ch] [bp-8Ch]@14
  int v155; // [sp+170h] [bp-88h]@14
  int *v156; // [sp+174h] [bp-84h]@14
  void (*v157)(void); // [sp+17Ch] [bp-7Ch]@14
  signed int (__fastcall *v158)(int ***); // [sp+180h] [bp-78h]@14
  int v159; // [sp+188h] [bp-70h]@14
  char v160; // [sp+18Ch] [bp-6Ch]@13
  char v161; // [sp+197h] [bp-61h]@13
  void *v162; // [sp+198h] [bp-60h]@6
  __int64 v163; // [sp+1A0h] [bp-58h]@6
  int v164; // [sp+1A8h] [bp-50h]@6
  int v165; // [sp+1ACh] [bp-4Ch]@6
  void (*v166)(void); // [sp+1B0h] [bp-48h]@6
  int v167; // [sp+1B4h] [bp-44h]@6
  _DWORD *v168; // [sp+1B8h] [bp-40h]@6
  void (*v169)(void); // [sp+1C0h] [bp-38h]@6
  int (__fastcall *v170)(int *); // [sp+1C4h] [bp-34h]@6
  int v171; // [sp+1C8h] [bp-30h]@6

  v10 = a1;
  v11 = a4;
  v12 = a3;
  v13 = a2;
  v14 = *a6;
  v15 = *((_DWORD *)*a6 - 3);
  v16 = v15 == 0;
  if ( v15 )
  {
    v9 = *(void (__fastcall **)(int *, int, signed int))(a7 + 8);
    v16 = v9 == 0;
  }
  if ( !v16 )
    v17 = strlen(*a6);
    for ( i = -2128831035; v17; i = 16777619 * (i ^ v19) )
    {
      v19 = *v14++;
      --v17;
    }
    v171 = i;
    v166 = 0;
    v9(&v164, a7, 2);
    v167 = *(_DWORD *)(a7 + 12);
    v20 = v167;
    v166 = *(void (**)(void))(a7 + 8);
    v21 = v166;
    v169 = 0;
    v22 = operator new(0x10u);
    v23 = v165;
    *v22 = v164;
    v22[1] = v23;
    v22[2] = v21;
    v22[3] = v20;
    v168 = v22;
    v169 = (void (*)(void))sub_124AFB2;
    v170 = sub_124AFA2;
    v162 = operator new(1u);
    LODWORD(v24) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
    HIDWORD(v24) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
    v163 = v24;
    ScreenController::bindBool(v10, &v171, (int)&v168, (int)&v162);
    if ( (_DWORD)v163 )
      ((void (*)(void))v163)();
    if ( v169 )
      v169();
    if ( v166 )
      v166();
  if ( !std::_Hashtable<std::string,std::pair<std::string const,bool>,std::allocator<std::pair<std::string const,bool>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
          (unsigned __int64 *)(v10 + 488),
          (int **)v13) )
    v161 = 0;
    std::_Hashtable<std::string,std::pair<std::string const,bool>,std::allocator<std::pair<std::string const,bool>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string const&,bool>(
      &v160,
      (unsigned __int64 *)(v10 + 488),
      v13,
      &v161);
  sub_21E94B4((void **)&v159, "button.dropdown_exit");
  v25 = MinecraftScreenController::_getNameId((ScreenController *)v10, (int **)&v159);
  sub_21E8AF4(&v154, v13);
  v155 = v10;
  v157 = 0;
  v26 = (int *)operator new(8u);
  sub_21E8AF4(v26, &v154);
  v26[1] = v155;
  v156 = v26;
  v157 = (void (*)(void))sub_124B21C;
  v158 = sub_124B204;
  ScreenController::registerButtonClickHandler(v10, v25, (int)&v156);
  if ( v157 )
    v157();
  v27 = (void *)(v154 - 12);
  if ( (int *)(v154 - 12) != &dword_28898C0 )
    v87 = (unsigned int *)(v154 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
    else
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = (void *)(v159 - 12);
  if ( (int *)(v159 - 12) != &dword_28898C0 )
    v89 = (unsigned int *)(v159 - 4);
        v90 = __ldrex(v89);
      while ( __strex(v90 - 1, v89) );
      v90 = (*v89)--;
    if ( v90 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = v10;
  v30 = MinecraftScreenController::_getNameId((ScreenController *)v10, (int **)v13);
  v31 = sub_21E8AF4(&v147, v13);
  v32 = (__int64 *)(v31 + 1);
  v148 = 0;
  v33 = *(void (__fastcall **)(int *, int, signed int))(a7 + 8);
  if ( v33 )
    v33(v31 + 1, a7, 2);
    v149 = *(_DWORD *)(a7 + 12);
    v148 = *(void (**)(void))(a7 + 8);
  v150 = v29;
  v152 = 0;
  v34 = operator new(0x18u);
  sub_21E8AF4((int *)v34, &v147);
  v35 = *v32;
  *v32 = *(_QWORD *)((char *)v34 + 4);
  *(_QWORD *)((char *)v34 + 4) = v35;
  LODWORD(v35) = v148;
  *((_DWORD *)v34 + 3) = v35;
  HIDWORD(v35) = v149;
  v149 = *((_DWORD *)v34 + 4);
  *((_DWORD *)v34 + 4) = HIDWORD(v35);
  *((_DWORD *)v34 + 5) = v150;
  v151 = v34;
  v152 = (void (*)(void))sub_124B2E8;
  v153 = sub_124B2BC;
  ScreenController::registerToggleChangeEventHandler(v29, v30, (int)&v151);
  if ( v152 )
    v152();
  if ( v148 )
    v148();
  v36 = (void *)(v147 - 12);
  if ( (int *)(v147 - 12) != &dword_28898C0 )
    v91 = (unsigned int *)(v147 - 4);
        v92 = __ldrex(v91);
      while ( __strex(v92 - 1, v91) );
      v92 = (*v91)--;
    if ( v92 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  s = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&s, *(_DWORD *)(*v13 - 12) + 1);
  sub_21E7408((const void **)&s, "#", 1u);
  sub_21E72F0((const void **)&s, (const void **)v13);
  v37 = s;
  v38 = strlen(s);
  for ( j = -2128831035; v38; j = 16777619 * (j ^ v40) )
    v40 = (unsigned __int8)*v37++;
    --v38;
  v146 = j;
  sub_21E8AF4(&v140, v13);
  v141 = v29;
  v143 = 0;
  v41 = (int *)operator new(8u);
  sub_21E8AF4(v41, &v140);
  v41[1] = v141;
  v142 = v41;
  v143 = (void (*)(void))sub_124B424;
  v144 = sub_124B410;
  v138 = operator new(1u);
  LODWORD(v42) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v42) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v139 = v42;
  ScreenController::bindBool(v29, &v146, (int)&v142, (int)&v138);
  if ( (_DWORD)v139 )
    ((void (*)(void))v139)();
  if ( v143 )
    v143();
  v43 = (void *)(v140 - 12);
  if ( (int *)(v140 - 12) != &dword_28898C0 )
    v93 = (unsigned int *)(v140 - 4);
        v94 = __ldrex(v93);
      while ( __strex(v94 - 1, v93) );
      v94 = (*v93)--;
    if ( v94 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  v44 = s - 12;
  if ( (int *)(s - 12) != &dword_28898C0 )
    v95 = (unsigned int *)(s - 4);
        v96 = __ldrex(v95);
      while ( __strex(v96 - 1, v95) );
      v96 = (*v95)--;
    if ( v96 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  v45 = *v12;
  v46 = strlen(*v12);
  for ( k = -2128831035; v46; k = 16777619 * (k ^ v48) )
    v48 = *v45++;
    --v46;
  v137 = k;
  v127 = 0;
  v49 = *(void (__fastcall **)(__int64 *, int, signed int))(a8 + 8);
  if ( v49 )
    v49(&v126, a8, 2);
    v128 = *(_DWORD *)(a8 + 12);
    v127 = *(void (**)(void))(a8 + 8);
  ptr = 0;
  v130 = *(_DWORD *)(a5 + 4);
  v131 = 0;
  v132 = *(_DWORD *)(a5 + 12);
  v133 = *(_QWORD *)(a5 + 16);
  std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_assign<std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::(std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<int const,std::string>,false> const*)#1}>(
    (unsigned int *)&ptr,
    a5);
  v136 = 0;
  v50 = operator new(0x2Cu);
  *(_QWORD *)v50 = v126;
  v51 = v127;
  *((_DWORD *)v50 + 2) = v51;
  *((_DWORD *)v50 + 3) = v128;
  *((_DWORD *)v50 + 4) = 0;
  v52 = (int)v50 + 16;
  *(_DWORD *)(v52 + 4) = v130;
  *(_DWORD *)(v52 + 8) = 0;
  *(_DWORD *)(v52 + 12) = v132;
  *(_QWORD *)(v52 + 16) = v133;
    (unsigned int *)v50 + 4,
    (int)&ptr);
  HIDWORD(v53) = sub_124B4C4;
  v135 = v50;
  LODWORD(v53) = sub_124B5C0;
  *(_QWORD *)&v136 = v53;
  v124 = operator new(1u);
  LODWORD(v54) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v54) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v125 = v54;
  ScreenController::bindString(v29, &v137, (int)&v135, (int)&v124);
  if ( (_DWORD)v125 )
    ((void (*)(void))v125)();
  v55 = (ScreenController *)v29;
  v97 = v13;
  if ( v136 )
    v136();
  v56 = v131;
  while ( v56 )
    v59 = (void *)v56;
    v60 = *(_DWORD *)(v56 + 8);
    v56 = *(_DWORD *)v56;
    v61 = (void *)(v60 - 12);
    if ( (int *)(v60 - 12) != &dword_28898C0 )
      v57 = (unsigned int *)(v60 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
      }
      else
        v58 = (*v57)--;
      if ( v58 <= 0 )
        j_j_j_j__ZdlPv_9(v61);
    operator delete(v59);
  _aeabi_memclr4(ptr, 4 * v130);
  v132 = 0;
  if ( ptr && &v134 != ptr )
    operator delete(ptr);
  v62 = a8;
  if ( v127 )
    v127();
  v63 = *(_DWORD *)(v11 + 8);
  if ( v63 )
    do
      v70 = *(_BYTE **)(v63 + 4);
      v71 = strlen(*(const char **)(v63 + 4));
      for ( l = -2128831035; v71; l = 16777619 * (l ^ v73) )
        v73 = *v70++;
        --v71;
      v123 = l;
      v116 = 0;
      v74 = *(void (__fastcall **)(char *, int, signed int))(v62 + 8);
      if ( v74 )
        v74(&v115, v62, 2);
        v117 = *(_DWORD *)(v62 + 12);
        v116 = *(void (**)(void))(v62 + 8);
      sub_21E8AF4(&v118, (int *)(v63 + 4));
      v119 = *(_DWORD *)(v63 + 8);
      v121 = 0;
      v75 = operator new(0x18u);
      *(_QWORD *)v75 = *(_QWORD *)&v115;
      v76 = v116;
      *((_DWORD *)v75 + 2) = v76;
      *((_DWORD *)v75 + 3) = v117;
      sub_21E8AF4((int *)v75 + 4, &v118);
      *((_DWORD *)v75 + 5) = v119;
      v120 = v75;
      v122 = sub_124B70C;
      v113 = 0;
      v121 = sub_124B72C;
      v112 = operator new(1u);
      v114 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
      v113 = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
      ScreenController::bindBool((int)v55, &v123, (int)&v120, (int)&v112);
      if ( v113 )
        v113(&v112, &v112, 3);
      if ( v121 )
        v121((int *)&v120, (int *)&v120, 3);
      v77 = (void *)(v118 - 12);
      if ( (int *)(v118 - 12) != &dword_28898C0 )
        v64 = (unsigned int *)(v118 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v65 = __ldrex(v64);
          while ( __strex(v65 - 1, v64) );
        }
        else
          v65 = (*v64)--;
        if ( v65 <= 0 )
          j_j_j_j__ZdlPv_9(v77);
      if ( v116 )
        v116();
      v78 = MinecraftScreenController::_getNameId(v55, (int **)(v63 + 4));
      v100 = 0;
      v79 = v78;
      v80 = *(void (__fastcall **)(char *, int, signed int))(a9 + 8);
      if ( v80 )
        v80(&v99, a9, 2);
        v101 = *(_DWORD *)(a9 + 12);
        v100 = *(void (**)(void))(a9 + 8);
      sub_21E8AF4(&v102, (int *)(v63 + 4));
      v103 = *(_DWORD *)(v63 + 8);
      sub_21E8AF4(&v104, v97);
      v106 = 0;
      v81 = *(void (__fastcall **)(int *, int, signed int))(a7 + 8);
      if ( v81 )
        v81(&v105, a7, 2);
        v107 = *(_DWORD *)(a7 + 12);
        v106 = *(void (**)(void))(a7 + 8);
      v108 = v55;
      v98 = (_DWORD *)v63;
      v110 = 0;
      v82 = operator new(0x30u);
      *(_QWORD *)v82 = *(_QWORD *)&v99;
      v83 = v100;
      *((_DWORD *)v82 + 2) = v83;
      *((_DWORD *)v82 + 3) = v101;
      sub_21E8AF4((int *)v82 + 4, &v102);
      *((_DWORD *)v82 + 5) = v103;
      sub_21E8AF4((int *)v82 + 6, &v104);
      v84 = *(_QWORD *)&v105;
      *(_QWORD *)&v105 = *(_QWORD *)((char *)v82 + 28);
      *(_QWORD *)((char *)v82 + 28) = v84;
      *((_DWORD *)v82 + 9) = v106;
      HIDWORD(v84) = v107;
      v107 = *((_DWORD *)v82 + 10);
      LODWORD(v84) = v108;
      *((_DWORD *)v82 + 10) = HIDWORD(v84);
      *((_DWORD *)v82 + 11) = v84;
      v109 = v82;
      v111 = sub_124B81C;
      v110 = (void (*)(void))sub_124B85C;
      ScreenController::registerToggleChangeEventHandler((int)v55, v79, (int)&v109);
      if ( v110 )
        v110();
      if ( v106 )
        v106();
      v85 = (void *)(v104 - 12);
      if ( (int *)(v104 - 12) != &dword_28898C0 )
        v66 = (unsigned int *)(v104 - 4);
            v67 = __ldrex(v66);
          while ( __strex(v67 - 1, v66) );
          v67 = (*v66)--;
        if ( v67 <= 0 )
          j_j_j_j__ZdlPv_9(v85);
      v86 = (void *)(v102 - 12);
      if ( (int *)(v102 - 12) != &dword_28898C0 )
        v68 = (unsigned int *)(v102 - 4);
            v69 = __ldrex(v68);
          while ( __strex(v69 - 1, v68) );
          v69 = (*v68)--;
        if ( v69 <= 0 )
          j_j_j_j__ZdlPv_9(v86);
      v62 = a8;
      if ( v100 )
        v100();
      v63 = *(_DWORD *)v63;
    while ( *v98 );
}


void __fastcall SettingsScreenControllerBase::setUpCallbacksForBooleanOption(ScreenController *a1, int **a2, const char **a3, const char **a4, int a5, int a6, int a7)
{
  void (__fastcall *v7)(char *, int, signed int); // r4@0
  const char *v8; // r5@1
  ScreenController *v9; // r9@1
  const char **v10; // r7@1
  int **v11; // r8@1
  size_t v12; // r0@1
  int i; // r1@1
  int v14; // t1@2
  void (__fastcall *v15)(int *, int, signed int); // r3@3
  int v16; // r6@4
  _DWORD *v17; // r0@6
  int v18; // r5@6
  __int64 v19; // r1@6
  const char *v20; // r7@12
  int v21; // r0@12
  bool v22; // zf@12
  size_t v23; // r0@15
  int j; // r1@15
  int v25; // t1@16
  void (*v26)(void); // r4@17
  _DWORD *v27; // r0@17
  int v28; // r2@17
  __int64 v29; // r1@17
  int v30; // r4@23
  int v31; // r7@23
  void (__fastcall *v32)(int *, int, signed int); // r3@23
  void (__fastcall *v33)(int *, int, signed int); // r3@25
  _DWORD *v34; // r0@27
  void (*v35)(void); // r1@27
  int v36; // r1@27
  int v37; // [sp+0h] [bp-B8h]@24
  void (*v38)(void); // [sp+8h] [bp-B0h]@23
  int v39; // [sp+Ch] [bp-ACh]@24
  int v40; // [sp+10h] [bp-A8h]@26
  void (__fastcall *v41)(int *, int *, signed int); // [sp+18h] [bp-A0h]@25
  int v42; // [sp+1Ch] [bp-9Ch]@26
  _DWORD *v43; // [sp+20h] [bp-98h]@27
  void (*v44)(void); // [sp+28h] [bp-90h]@27
  signed int (__fastcall *v45)(int, int); // [sp+2Ch] [bp-8Ch]@27
  void *v46; // [sp+30h] [bp-88h]@17
  __int64 v47; // [sp+38h] [bp-80h]@17
  char v48; // [sp+40h] [bp-78h]@17
  void (*v49)(void); // [sp+48h] [bp-70h]@17
  int v50; // [sp+4Ch] [bp-6Ch]@17
  _DWORD *v51; // [sp+54h] [bp-64h]@17
  void (*v52)(void); // [sp+5Ch] [bp-5Ch]@17
  int (__fastcall *v53)(int *); // [sp+60h] [bp-58h]@17
  int v54; // [sp+64h] [bp-54h]@17
  void *v55; // [sp+68h] [bp-50h]@6
  __int64 v56; // [sp+70h] [bp-48h]@6
  int v57; // [sp+78h] [bp-40h]@4
  int v58; // [sp+7Ch] [bp-3Ch]@6
  void (*v59)(void); // [sp+80h] [bp-38h]@3
  int v60; // [sp+84h] [bp-34h]@4
  _DWORD *v61; // [sp+88h] [bp-30h]@6
  void (*v62)(void); // [sp+90h] [bp-28h]@6
  int (__fastcall *v63)(int *); // [sp+94h] [bp-24h]@6
  int v64; // [sp+98h] [bp-20h]@3

  v8 = *a3;
  v9 = a1;
  v10 = a4;
  v11 = a2;
  v12 = strlen(*a3);
  for ( i = -2128831035; v12; i = 16777619 * (i ^ v14) )
  {
    v14 = *v8++;
    --v12;
  }
  v64 = i;
  v59 = 0;
  v15 = *(void (__fastcall **)(int *, int, signed int))(a6 + 8);
  if ( v15 )
    v15(&v57, a6, 2);
    v7 = *(void (__fastcall **)(char *, int, signed int))(a6 + 12);
    v60 = *(_DWORD *)(a6 + 12);
    v16 = *(_DWORD *)(a6 + 8);
    v59 = *(void (**)(void))(a6 + 8);
  else
    v16 = 0;
  v62 = 0;
  v17 = operator new(0x10u);
  v18 = v58;
  *v17 = v57;
  v17[1] = v18;
  v17[2] = v16;
  v17[3] = v7;
  v61 = v17;
  v62 = (void (*)(void))sub_124A8D4;
  v63 = sub_124A8C4;
  v55 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v56 = v19;
  ScreenController::bindBool((int)v9, &v64, (int)&v61, (int)&v55);
  if ( (_DWORD)v56 )
    ((void (*)(void))v56)();
  if ( v62 )
    v62();
  if ( v59 )
    v59();
  v20 = *v10;
  v21 = *((_DWORD *)v20 - 3);
  v22 = v21 == 0;
  if ( v21 )
    v7 = *(void (__fastcall **)(char *, int, signed int))(a5 + 8);
    v22 = v7 == 0;
  if ( !v22 )
    v23 = strlen(v20);
    for ( j = -2128831035; v23; j = 16777619 * (j ^ v25) )
    {
      v25 = *v20++;
      --v23;
    }
    v54 = j;
    v49 = 0;
    v7(&v48, a5, 2);
    v50 = *(_DWORD *)(a5 + 12);
    v49 = *(void (**)(void))(a5 + 8);
    v26 = v49;
    v52 = 0;
    v27 = operator new(0x10u);
    *(_QWORD *)v27 = *(_QWORD *)&v48;
    v28 = v50;
    v27[2] = v26;
    v27[3] = v28;
    v51 = v27;
    v52 = (void (*)(void))sub_124A962;
    v53 = sub_124A952;
    v46 = operator new(1u);
    LODWORD(v29) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
    HIDWORD(v29) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
    v47 = v29;
    ScreenController::bindBool((int)v9, &v54, (int)&v51, (int)&v46);
    if ( (_DWORD)v47 )
      ((void (*)(void))v47)();
    if ( v52 )
      v52();
    if ( v49 )
      v49();
  v30 = 0;
  v31 = MinecraftScreenController::_getNameId(v9, v11);
  v38 = 0;
  v32 = *(void (__fastcall **)(int *, int, signed int))(a7 + 8);
  if ( v32 )
    v32(&v37, a7, 2);
    v39 = *(_DWORD *)(a7 + 12);
    v38 = *(void (**)(void))(a7 + 8);
  v41 = 0;
  v33 = *(void (__fastcall **)(int *, int, signed int))(a5 + 8);
  if ( v33 )
    v33(&v40, a5, 2);
    v42 = *(_DWORD *)(a5 + 12);
    v30 = *(_DWORD *)(a5 + 8);
    v41 = *(void (__fastcall **)(int *, int *, signed int))(a5 + 8);
  v44 = 0;
  v34 = operator new(0x20u);
  *(_QWORD *)v34 = *(_QWORD *)&v37;
  v35 = v38;
  v34[2] = v35;
  v34[3] = v39;
  *((_QWORD *)v34 + 2) = *(_QWORD *)&v40;
  v36 = v42;
  v34[6] = v30;
  v34[7] = v36;
  v43 = v34;
  v44 = (void (*)(void))sub_124AA0A;
  v45 = sub_124A9E0;
  ScreenController::registerToggleChangeEventHandler((int)v9, v31, (int)&v43);
  if ( v44 )
    v44();
  if ( v41 )
    v41(&v40, &v40, 3);
  if ( v38 )
    v38();
}
