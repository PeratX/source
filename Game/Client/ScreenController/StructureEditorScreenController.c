

void __fastcall StructureEditorScreenController::_registerRotationDropdown(StructureEditorScreenController *this)
{
  ScreenController *v1; // r8@1
  double v2; // r0@1
  void *v3; // r0@1
  void *v4; // r0@2
  void *v5; // r0@3
  void *v6; // r0@4
  __int64 v7; // r6@5
  double v8; // r0@5
  void *v9; // r0@5
  void *v10; // r0@6
  void *v11; // r0@7
  void *v12; // r0@8
  void *v13; // r0@9
  __int64 v14; // r1@9
  __int64 v15; // r1@9
  int v16; // r4@13
  _DWORD *v17; // r0@13
  __int64 v18; // r1@13
  void *v19; // r0@15
  int v20; // r4@16
  _DWORD *v21; // r0@16
  __int64 v22; // r1@16
  char *v23; // r4@18
  size_t v24; // r0@18
  int i; // r1@18
  int v26; // t1@19
  _DWORD *v27; // r0@20
  __int64 v28; // r1@20
  __int64 v29; // r1@20
  char *v30; // r0@24
  _DWORD *v31; // r0@25
  int v32; // r4@25
  _DWORD *v33; // r2@25
  unsigned int v34; // r1@25
  int v35; // r0@25
  bool v36; // zf@25
  int v37; // r7@25
  int v38; // r3@25
  int v39; // r6@26
  __int64 v40; // r1@30
  int v41; // r4@34
  unsigned int *v42; // r2@36
  signed int v43; // r1@38
  void *v44; // r5@44
  int v45; // r1@44
  void *v46; // r0@44
  int v47; // r9@49
  unsigned int *v48; // r2@51
  signed int v49; // r1@53
  unsigned int *v50; // r2@55
  signed int v51; // r1@57
  _BYTE *v52; // r7@67
  size_t v53; // r0@67
  int j; // r1@67
  int v55; // t1@68
  void *v56; // r7@69
  void *v57; // r0@73
  int v58; // r11@74
  void *v59; // r7@74
  void *v60; // r0@76
  void *v61; // r0@78
  int v62; // r6@79
  unsigned int *v63; // r2@81
  signed int v64; // r1@83
  void *v65; // r5@89
  int v66; // r1@89
  void *v67; // r0@89
  unsigned __int64 *v68; // r6@94
  unsigned int *v69; // r2@96
  signed int v70; // r1@98
  unsigned __int64 *v71; // r5@104
  int v72; // r1@104
  void *v73; // r0@104
  unsigned int *v74; // r2@110
  signed int v75; // r1@112
  unsigned int *v76; // r2@114
  signed int v77; // r1@116
  unsigned int *v78; // r2@118
  signed int v79; // r1@120
  unsigned int *v80; // r2@122
  signed int v81; // r1@124
  unsigned int *v82; // r2@126
  signed int v83; // r1@128
  unsigned int *v84; // r2@130
  signed int v85; // r1@132
  unsigned int *v86; // r2@134
  signed int v87; // r1@136
  unsigned int *v88; // r2@138
  signed int v89; // r1@140
  unsigned int *v90; // r2@142
  signed int v91; // r1@144
  unsigned int *v92; // r2@146
  signed int v93; // r1@148
  unsigned int *v94; // r2@190
  signed int v95; // r1@192
  __int64 v96; // [sp+0h] [bp-238h]@5
  int v97; // [sp+3Ch] [bp-1FCh]@55
  int v98; // [sp+40h] [bp-1F8h]@74
  void *v99; // [sp+44h] [bp-1F4h]@74
  int (__fastcall *v100)(int *, int *, int); // [sp+4Ch] [bp-1ECh]@74
  signed int (__fastcall *v101)(int *, int); // [sp+50h] [bp-1E8h]@74
  void *v102; // [sp+54h] [bp-1E4h]@69
  int (__fastcall *v103)(void **, void **, int); // [sp+5Ch] [bp-1DCh]@69
  signed int (*v104)(); // [sp+60h] [bp-1D8h]@69
  ScreenController *v105; // [sp+64h] [bp-1D4h]@69
  int v106; // [sp+68h] [bp-1D0h]@51
  int v107; // [sp+6Ch] [bp-1CCh]@69
  void *v108; // [sp+70h] [bp-1C8h]@69
  int (__fastcall *v109)(int *, int *, int); // [sp+78h] [bp-1C0h]@69
  signed int (__fastcall *v110)(int **); // [sp+7Ch] [bp-1BCh]@69
  int v111; // [sp+80h] [bp-1B8h]@69
  void *v112; // [sp+84h] [bp-1B4h]@30
  __int64 v113; // [sp+8Ch] [bp-1ACh]@30
  ScreenController *v114; // [sp+94h] [bp-1A4h]@25
  void *ptr; // [sp+98h] [bp-1A0h]@25
  unsigned int v116; // [sp+9Ch] [bp-19Ch]@25
  int v117; // [sp+A0h] [bp-198h]@25
  int v118; // [sp+A4h] [bp-194h]@25
  __int64 v119; // [sp+A8h] [bp-190h]@25
  int v120; // [sp+B0h] [bp-188h]@25
  int v121; // [sp+B4h] [bp-184h]@30
  int (__fastcall *v122)(_DWORD *, _DWORD *, int); // [sp+BCh] [bp-17Ch]@25
  int *(__fastcall *v123)(int *, int **); // [sp+C0h] [bp-178h]@30
  int v124; // [sp+C4h] [bp-174h]@25
  void *v125; // [sp+C8h] [bp-170h]@20
  __int64 v126; // [sp+D0h] [bp-168h]@20
  _DWORD *v127; // [sp+D8h] [bp-160h]@20
  __int64 v128; // [sp+E0h] [bp-158h]@20
  char *s; // [sp+E8h] [bp-150h]@18
  int v130; // [sp+ECh] [bp-14Ch]@20
  _DWORD *v131; // [sp+F0h] [bp-148h]@16
  __int64 v132; // [sp+F8h] [bp-140h]@16
  _DWORD *v133; // [sp+100h] [bp-138h]@13
  __int64 v134; // [sp+108h] [bp-130h]@13
  int v135; // [sp+114h] [bp-124h]@13
  int v136; // [sp+11Ch] [bp-11Ch]@13
  void *v137; // [sp+120h] [bp-118h]@9
  __int64 v138; // [sp+128h] [bp-110h]@9
  void *v139; // [sp+130h] [bp-108h]@9
  __int64 v140; // [sp+138h] [bp-100h]@9
  int v141; // [sp+140h] [bp-F8h]@9
  char v142; // [sp+14Ch] [bp-ECh]@5
  int v143; // [sp+150h] [bp-E8h]@5
  int v144; // [sp+154h] [bp-E4h]@5
  int v145; // [sp+158h] [bp-E0h]@5
  int v146; // [sp+15Ch] [bp-DCh]@5
  int v147; // [sp+160h] [bp-D8h]@5
  int v148; // [sp+164h] [bp-D4h]@5
  int v149; // [sp+168h] [bp-D0h]@5
  int v150; // [sp+16Ch] [bp-CCh]@5
  void *v151; // [sp+170h] [bp-C8h]@5
  unsigned int v152; // [sp+174h] [bp-C4h]@25
  int v153; // [sp+178h] [bp-C0h]@79
  int v154; // [sp+17Ch] [bp-BCh]@25
  __int64 v155; // [sp+180h] [bp-B8h]@25
  int v156; // [sp+188h] [bp-B0h]@92
  int v157; // [sp+198h] [bp-A0h]@1
  int v158; // [sp+19Ch] [bp-9Ch]@1
  int v159; // [sp+1A0h] [bp-98h]@1
  int v160; // [sp+1A4h] [bp-94h]@1
  int v161; // [sp+1A8h] [bp-90h]@1
  int v162; // [sp+1ACh] [bp-8Ch]@1
  int v163; // [sp+1B0h] [bp-88h]@1
  int v164; // [sp+1B4h] [bp-84h]@1
  void *v165; // [sp+1B8h] [bp-80h]@1
  int v166; // [sp+1BCh] [bp-7Ch]@106
  unsigned __int64 *v167; // [sp+1C0h] [bp-78h]@49
  int v168; // [sp+1C4h] [bp-74h]@106
  int v169; // [sp+1D0h] [bp-68h]@107
  char v170; // [sp+208h] [bp-30h]@5

  v1 = this;
  sub_21E94B4((void **)&v157, "#rotation_none");
  v158 = 0;
  sub_21E94B4((void **)&v159, "#rotation_90");
  v160 = 1;
  sub_21E94B4((void **)&v161, "#rotation_180");
  v162 = 2;
  sub_21E94B4((void **)&v163, "#rotation_270");
  v164 = 3;
  LODWORD(v2) = &v165;
  std::_Hashtable<std::string,std::pair<std::string const,int>,std::allocator<std::pair<std::string const,int>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_Hashtable<std::pair<std::string const,int> const*>(
    v2,
    (int **)&v165,
    0);
  v3 = (void *)(v163 - 12);
  if ( (int *)(v163 - 12) != &dword_28898C0 )
  {
    v74 = (unsigned int *)(v163 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (void *)(v161 - 12);
  if ( (int *)(v161 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v161 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  v5 = (void *)(v159 - 12);
  if ( (int *)(v159 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v159 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v157 - 12);
  if ( (int *)(v157 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v157 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v143 = 0;
  sub_21E94B4((void **)&v144, "structure_block.rotation.none");
  v145 = 1;
  sub_21E94B4((void **)&v146, "structure_block.rotation.90");
  v147 = 2;
  sub_21E94B4((void **)&v148, "structure_block.rotation.180");
  v149 = 3;
  sub_21E94B4((void **)&v150, "structure_block.rotation.270");
  HIDWORD(v7) = &v170;
  LODWORD(v7) = &v142;
  v96 = v7;
  LODWORD(v8) = &v151;
  std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_Hashtable<std::pair<int const,std::string> const*>(
    v8,
    (unsigned int *)&v151,
  v9 = (void *)(v150 - 12);
  if ( (int *)(v150 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v150 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v148 - 12);
  if ( (int *)(v148 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v148 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v146 - 12);
  if ( (int *)(v146 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v146 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v144 - 12);
  if ( (int *)(v144 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v144 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  StringHash::StringHash<char [27]>(&v141, (int)"#rotation_dropdown_enabled");
  v13 = operator new(1u);
  LODWORD(v14) = sub_126DFE4;
  v139 = v13;
  HIDWORD(v14) = sub_126DFE0;
  v140 = v14;
  v137 = operator new(1u);
  LODWORD(v15) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v15) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v138 = v15;
  ScreenController::bindBool((int)v1, &v141, (int)&v139, (int)&v137);
  if ( (_DWORD)v138 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, char *, char *))v138)(&v137, &v137, 3, v138, &v142, &v170);
  if ( (_DWORD)v140 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, _DWORD, _DWORD))v140)(
      &v139,
      3,
      v140,
      v96,
      HIDWORD(v96));
  sub_21E94B4((void **)&v136, "rotation_dropdown");
  sub_21E94B4((void **)&v135, "button.dropdown_exit");
  v16 = MinecraftScreenController::_getNameId(v1, (int **)&v135);
  v17 = operator new(4u);
  LODWORD(v18) = sub_126E020;
  *v17 = v1;
  HIDWORD(v18) = sub_126E012;
  v133 = v17;
  v134 = v18;
  ScreenController::registerButtonClickHandler((int)v1, v16, (int)&v133);
  if ( (_DWORD)v134 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v134)(
      &v133,
      v134,
  v19 = (void *)(v135 - 12);
  if ( (int *)(v135 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v135 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = MinecraftScreenController::_getNameId(v1, (int **)&v136);
  v21 = operator new(4u);
  LODWORD(v22) = sub_126E064;
  *v21 = v1;
  HIDWORD(v22) = sub_126E056;
  v131 = v21;
  v132 = v22;
  ScreenController::registerToggleChangeEventHandler((int)v1, v20, (int)&v131);
  if ( (_DWORD)v132 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v132)(
      &v131,
      v132,
  s = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&s, *(_DWORD *)(v136 - 12) + 1);
  sub_21E7408((const void **)&s, "#", 1u);
  sub_21E72F0((const void **)&s, (const void **)&v136);
  v23 = s;
  v24 = strlen(s);
  for ( i = -2128831035; v24; i = 16777619 * (i ^ v26) )
    v26 = (unsigned __int8)*v23++;
    --v24;
  v130 = i;
  v27 = operator new(4u);
  LODWORD(v28) = sub_126E0AA;
  *v27 = v1;
  HIDWORD(v28) = sub_126E09A;
  v127 = v27;
  v128 = v28;
  v125 = operator new(1u);
  LODWORD(v29) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v29) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v126 = v29;
  ScreenController::bindBool((int)v1, &v130, (int)&v127, (int)&v125);
  if ( (_DWORD)v126 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, _DWORD, _DWORD))v126)(
      &v125,
      v126,
  if ( (_DWORD)v128 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v128)(
      &v127,
      v128,
  v30 = s - 12;
  if ( (int *)(s - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(s - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  StringHash::StringHash<char [32]>(&v124, (int)"#rotation_dropdown_toggle_label");
  v114 = v1;
  ptr = 0;
  v116 = v152;
  v117 = 0;
  v118 = v154;
  v119 = v155;
  std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_assign<std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::(std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<int const,std::string>,false> const*)#1}>(
    (unsigned int *)&ptr,
    (int)&v151);
  v122 = 0;
  v31 = operator new(0x20u);
  v32 = (int)v31;
  *v31 = v1;
  v33 = ptr;
  v34 = v116;
  v35 = v117;
  v36 = &v120 == ptr;
  v37 = v118;
  *(_DWORD *)(v32 + 4) = ptr;
  *(_DWORD *)(v32 + 8) = v34;
  *(_DWORD *)(v32 + 12) = v35;
  *(_DWORD *)(v32 + 16) = v37;
  v38 = HIDWORD(v119);
  *(_DWORD *)(v32 + 20) = v119;
  *(_DWORD *)(v32 + 24) = v38;
  if ( v36 )
    v39 = v32 + 28;
    *(_DWORD *)(v32 + 4) = v32 + 28;
    *(_DWORD *)(v32 + 28) = *v33;
  else
    v39 = (int)v33;
  if ( v35 )
    *(_DWORD *)(v39 + 4 * (*(_DWORD *)(v35 + 4) % v34)) = v32 + 12;
  HIDWORD(v119) = 0;
  ptr = &v120;
  v116 = 1;
  v118 = 0;
  v120 = 0;
  v121 = v32;
  v122 = sub_126E168;
  v123 = sub_126E0E0;
  v112 = operator new(1u);
  LODWORD(v40) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v40) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v113 = v40;
  ScreenController::bindString((int)v1, &v124, (int)&v121, (int)&v112);
  if ( (_DWORD)v113 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, _DWORD, _DWORD))v113)(
      &v112,
      v113,
  if ( v122 )
    ((void (__cdecl *)(int *, int *, signed int, int (__fastcall *)(_DWORD *, _DWORD *, int), _DWORD, _DWORD))v122)(
      &v121,
      v122,
  v41 = v117;
  while ( v41 )
    v44 = (void *)v41;
    v45 = *(_DWORD *)(v41 + 8);
    v41 = *(_DWORD *)v41;
    v46 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v45 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
      }
      else
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j__ZdlPv_9(v46);
    operator delete(v44);
  _aeabi_memclr4(ptr, 4 * v116);
  if ( ptr && &v120 != ptr )
    operator delete(ptr);
  v47 = (int)v167;
  if ( v167 )
    do
      v52 = *(_BYTE **)(v47 + 4);
      v53 = strlen(*(const char **)(v47 + 4));
      for ( j = -2128831035; v53; j = 16777619 * (j ^ v55) )
        v55 = *v52++;
        --v53;
      v111 = j;
      v105 = v1;
      sub_21E8AF4(&v106, (int *)(v47 + 4));
      v107 = *(_DWORD *)(v47 + 8);
      v109 = 0;
      v56 = operator new(0xCu);
      *(_DWORD *)v56 = v105;
      sub_21E8AF4((int *)v56 + 1, &v106);
      *((_DWORD *)v56 + 2) = v107;
      v108 = v56;
      v110 = sub_126E26C;
      v109 = sub_126E2A0;
      v103 = 0;
      v102 = operator new(1u);
      v104 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
      v103 = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
      ScreenController::bindBool((int)v1, &v111, (int)&v108, (int)&v102);
      if ( v103 )
        v103(&v102, &v102, 3);
      if ( v109 )
        v109((int *)&v108, (int *)&v108, 3);
      v57 = (void *)(v106 - 12);
      if ( (int *)(v106 - 12) != &dword_28898C0 )
        v48 = (unsigned int *)(v106 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v49 = __ldrex(v48);
          while ( __strex(v49 - 1, v48) );
        }
        else
          v49 = (*v48)--;
        if ( v49 <= 0 )
          j_j_j_j__ZdlPv_9(v57);
      v58 = MinecraftScreenController::_getNameId(v1, (int **)(v47 + 4));
      sub_21E8AF4(&v97, (int *)(v47 + 4));
      v98 = *(_DWORD *)(v47 + 8);
      v100 = 0;
      v59 = operator new(0xCu);
      *(_DWORD *)v59 = v1;
      sub_21E8AF4((int *)v59 + 1, &v97);
      *((_DWORD *)v59 + 2) = v98;
      v99 = v59;
      v101 = sub_126E348;
      v100 = sub_126E3D4;
      ScreenController::registerToggleChangeEventHandler((int)v1, v58, (int)&v99);
      if ( v100 )
        ((void (__cdecl *)(void **, void **, signed int, int (__fastcall *)(int *, int *, int), _DWORD, _DWORD))v100)(
          &v99,
          3,
          v100,
          v96,
          HIDWORD(v96));
      v60 = (void *)(v97 - 12);
      if ( (int *)(v97 - 12) != &dword_28898C0 )
        v50 = (unsigned int *)(v97 - 4);
            v51 = __ldrex(v50);
          while ( __strex(v51 - 1, v50) );
          v51 = (*v50)--;
        if ( v51 <= 0 )
          j_j_j_j__ZdlPv_9(v60);
      v47 = *(_DWORD *)v47;
    while ( v47 );
  v61 = (void *)(v136 - 12);
  if ( (int *)(v136 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v136 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j__ZdlPv_9(v61);
  v62 = v153;
  while ( v62 )
    v65 = (void *)v62;
    v66 = *(_DWORD *)(v62 + 8);
    v62 = *(_DWORD *)v62;
    v67 = (void *)(v66 - 12);
    if ( (int *)(v66 - 12) != &dword_28898C0 )
      v63 = (unsigned int *)(v66 - 4);
          v64 = __ldrex(v63);
        while ( __strex(v64 - 1, v63) );
        v64 = (*v63)--;
      if ( v64 <= 0 )
        j_j_j_j__ZdlPv_9(v67);
    operator delete(v65);
  _aeabi_memclr4(v151, 4 * v152);
  v153 = 0;
  v154 = 0;
  if ( v151 && &v156 != v151 )
    operator delete(v151);
  v68 = v167;
  while ( v68 )
    v71 = v68;
    v72 = *v68 >> 32;
    v68 = (unsigned __int64 *)*v68;
    v73 = (void *)(v72 - 12);
    if ( (int *)(v72 - 12) != &dword_28898C0 )
      v69 = (unsigned int *)(v72 - 4);
          v70 = __ldrex(v69);
        while ( __strex(v70 - 1, v69) );
        v70 = (*v69)--;
      if ( v70 <= 0 )
        j_j_j_j__ZdlPv_9(v73);
    operator delete(v71);
  _aeabi_memclr4(v165, 4 * v166);
  v167 = 0;
  v168 = 0;
  if ( v165 )
    if ( &v169 != v165 )
      operator delete(v165);
}


int __fastcall StructureEditorScreenController::_getTextEditValueAsFloat(int a1, int a2)
{
  void *v6; // r0@5
  int result; // r0@6
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  int v10; // [sp+0h] [bp-28h]@2
  int v11; // [sp+4h] [bp-24h]@1

  StructureEditorScreenController::_getTextEditValue(&v11, a2, a2);
  if ( *(_DWORD *)(v11 - 12) && (v10 = 0, !Util::toFloat<float,(void *)0>((unsigned int *)&v11, &v10)) )
    __asm { VLDR            S16, [SP,#0x28+var_28] }
  else
    __asm { VLDR            S16, =0.0 }
  v6 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v11 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  __asm { VMOV            R0, S16 }
  return result;
}


StructureBlockEntity *__fastcall StructureEditorScreenController::_validateAndSetSize(StructureEditorScreenController *this, int a2, int a3)
{
  int v3; // r4@1
  int *v4; // r5@1
  int v5; // r7@1
  StructureBlockEntity *result; // r0@1
  StructureBlockEntity *v7; // r6@1
  char *v8; // r0@2
  int v9; // [sp+0h] [bp-20h]@1
  int v10; // [sp+4h] [bp-1Ch]@2
  int v11; // [sp+8h] [bp-18h]@2

  v3 = a2;
  v9 = 32;
  v4 = &v9;
  v5 = a3;
  result = BlockScreenController::_getBaseBlockEntity(
             (int)this,
             (StructureEditorScreenController *)((char *)this + 456),
             &v9);
  v7 = result;
  if ( result )
  {
    v8 = StructureBlockEntity::getStructureSize(result);
    v9 = *(_DWORD *)v8;
    v10 = *((_DWORD *)v8 + 1);
    v11 = *((_DWORD *)v8 + 2);
    if ( v5 == 2 )
    {
      v4 = &v11;
    }
    else if ( v5 == 1 )
      v4 = &v10;
    *v4 = v3;
    result = (StructureBlockEntity *)StructureBlockEntity::setStructureSize(v7, (const BlockPos *)&v9);
  }
  return result;
}


BlockEntity *__fastcall StructureEditorScreenController::_onStructureTypeChanged(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  BlockEntity *result; // r0@1
  int v5; // r1@3
  int v6; // [sp+4h] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  v6 = 32;
  result = BlockScreenController::_getBaseBlockEntity(a1, (const BlockPos *)(a1 + 456), &v6);
  if ( result )
  {
    if ( v3 == 4 )
    {
      v5 = 4;
    }
    else
      v5 = v3;
      if ( !*(_BYTE *)(v2 + 475) )
        v5 = 4;
      if ( v3 != 5 )
        v5 = v3;
    result = (BlockEntity *)StructureBlockEntity::changeStructureType(result, v5);
  }
  return result;
}


void __fastcall StructureEditorScreenController::_getTextEditValue(int *a1, int a2, int a3)
{
  int *v3; // r4@1
  int v4; // r5@1
  Json::Value *v5; // r5@1
  Json::Value *v6; // r6@3
  const char *v7; // r6@4
  Json::Value *v8; // r5@8
  char *v9; // r1@9
  char *v10; // r0@11
  char *v11; // r0@12
  char *v12; // r0@13
  unsigned int *v13; // r2@15
  signed int v14; // r1@17
  unsigned int *v15; // r2@19
  signed int v16; // r1@21
  unsigned int *v17; // r2@23
  signed int v18; // r1@25
  char *v19; // [sp+4h] [bp-2Ch]@6
  const char *v20; // [sp+Ch] [bp-24h]@1
  const char *v21; // [sp+10h] [bp-20h]@4
  char v22; // [sp+14h] [bp-1Ch]@4
  char v23; // [sp+18h] [bp-18h]@9

  v3 = a1;
  v4 = *(_DWORD *)(a3 + 12);
  sub_21E94B4((void **)&v20, (const char *)&unk_257BC67);
  v5 = (Json::Value *)(v4 + 8);
  if ( Json::Value::isNull(v5)
    || Json::Value::isObject(v5) != 1
    || (v6 = (Json::Value *)Json::Value::operator[]((int)v5, "#property_field"), Json::Value::isString(v6) != 1) )
  {
    v7 = v20;
    v21 = v20;
    v20 = (const char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as((int *)&v21, (int)&v22, (int)v6);
    v7 = v21;
  sub_21E94B4((void **)&v19, (const char *)&unk_257BC67);
    || (v8 = (Json::Value *)Json::Value::operator[]((int)v5, v7), Json::Value::isString(v8) != 1) )
    *v3 = (int)v19;
    v9 = (char *)&unk_28898CC;
    v19 = (char *)&unk_28898CC;
    jsonValConversion<std::string>::as(v3, (int)&v23, (int)v8);
    v9 = v19;
  v10 = v9 - 12;
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v9 - 4);
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
  v11 = (char *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v21 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (char *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v20 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
}


int __fastcall StructureEditorScreenController::_getStructureBlockMirrorMode(StructureEditorScreenController *this)
{
  BlockEntity *v1; // r0@1
  char *v2; // r0@2
  int result; // r0@2
  int v4; // [sp+4h] [bp-Ch]@1

  v4 = 32;
  v1 = BlockScreenController::_getBaseBlockEntity(
         (int)this,
         (StructureEditorScreenController *)((char *)this + 456),
         &v4);
  if ( v1 )
  {
    v2 = StructureBlockEntity::getStructureSettings(v1);
    result = *(_DWORD *)StructureSettings::getMirror((StructureSettings *)v2);
  }
  else
    result = 0;
  return result;
}


_BOOL4 __fastcall StructureEditorScreenController::_showStructureRenderer(StructureEditorScreenController *this)
{
  MinecraftglTFExporter *v1; // r0@1

  v1 = (MinecraftglTFExporter *)*((_DWORD *)this + 119);
  return !v1 || !MinecraftglTFExporter::isSerializing(v1);
}


void __fastcall StructureEditorScreenController::_updateStructureBlock(StructureEditorScreenController *this, bool a2)
{
  StructureEditorScreenController *v2; // r5@1
  const BlockPos *v3; // r6@1
  bool v4; // r4@1
  BlockEntity *v5; // r0@1
  int v6; // [sp+4h] [bp-14h]@1

  v2 = this;
  v3 = (StructureEditorScreenController *)((char *)this + 456);
  v4 = a2;
  v6 = 32;
  v5 = BlockScreenController::_getBaseBlockEntity(
         (int)this,
         (StructureEditorScreenController *)((char *)this + 456),
         &v6);
  if ( v5 )
    StructureBlockEntity::acceptTempData(v5);
  ClientInstanceScreenModel::sendStructureBlockUpdatePacket(*((ClientInstanceScreenModel **)v2 + 106), v3, v4);
}


StructureBlockEntity *__fastcall StructureEditorScreenController::_initiateExport(StructureEditorScreenController *this)
{
  StructureEditorScreenController *v1; // r4@1
  const BlockPos *v2; // r5@1
  StructureBlockEntity *result; // r0@1
  StructureBlockEntity *v4; // r6@1
  signed int v5; // r1@3
  bool v6; // nf@3
  unsigned __int8 v7; // vf@3
  bool v8; // zf@6
  BlockEntity *v9; // r0@9
  int v10; // [sp+0h] [bp-18h]@1
  int v11; // [sp+4h] [bp-14h]@9

  v1 = this;
  v2 = (StructureEditorScreenController *)((char *)this + 456);
  v10 = 32;
  result = BlockScreenController::_getBaseBlockEntity(
             (int)this,
             (StructureEditorScreenController *)((char *)this + 456),
             &v10);
  v4 = result;
  if ( result )
  {
    result = (StructureBlockEntity *)StructureBlockEntity::getStructureSize(result);
    if ( *(_DWORD *)result >= 1 )
    {
      v5 = *((_DWORD *)result + 1);
      v7 = __OFSUB__(v5, 1);
      v6 = v5 - 1 < 0;
      if ( v5 >= 1 )
      {
        result = (StructureBlockEntity *)*((_DWORD *)result + 2);
        v7 = __OFSUB__(result, 1);
        v6 = (signed int)result - 1 < 0;
      }
      if ( !(v6 ^ v7) )
        result = *(StructureBlockEntity **)(*(_DWORD *)StructureBlockEntity::getStructureName(v4) - 12);
        v8 = result == 0;
        if ( result )
        {
          result = (StructureBlockEntity *)*((_BYTE *)v1 + 474);
          v8 = result == 0;
        }
        if ( !v8 )
          v11 = 32;
          v9 = BlockScreenController::_getBaseBlockEntity((int)v1, v2, &v11);
          if ( v9 )
            StructureBlockEntity::acceptTempData(v9);
          result = (StructureBlockEntity *)StructureEditorScreenController::_initiateFileGeneration(v1);
    }
  }
  return result;
}


void __fastcall StructureEditorScreenController::_registerModeDropdown(StructureEditorScreenController *this)
{
  StructureEditorScreenController::_registerModeDropdown(this);
}


signed int __fastcall StructureEditorScreenController::_isStillValid(StructureEditorScreenController *this)
{
  StructureEditorScreenController *v1; // r4@1
  signed int result; // r0@3

  v1 = this;
  if ( BlockScreenController::_isStillValid(this) == 1 && *((_BYTE *)v1 + 475) )
    result = BlockScreenController::_isStillValid(v1);
  else
    result = 0;
  return result;
}


signed int __fastcall StructureEditorScreenController::_getStructureBlockMode(StructureEditorScreenController *this)
{
  StructureEditorScreenController *v1; // r4@1
  BlockEntity *v2; // r0@1
  int v3; // r1@2
  signed int v4; // r2@2
  signed int result; // r0@4
  int v6; // [sp+4h] [bp-Ch]@1

  v1 = this;
  v6 = 32;
  v2 = BlockScreenController::_getBaseBlockEntity(
         (int)this,
         (StructureEditorScreenController *)((char *)this + 456),
         &v6);
  if ( v2 )
  {
    v3 = StructureBlockEntity::getStructureType(v2);
    v4 = v3;
    if ( v3 != 5 )
      v4 = 4;
    result = v4;
    if ( !*((_BYTE *)v1 + 475) )
      result = 4;
      result = v4;
  }
  else
    result = 4;
  return result;
}


StructureBlockEntity *__fastcall StructureEditorScreenController::_resetChanges(StructureEditorScreenController *this)
{
  StructureBlockEntity *result; // r0@1
  int v2; // [sp+4h] [bp-Ch]@1

  v2 = 32;
  result = BlockScreenController::_getBaseBlockEntity(
             (int)this,
             (StructureEditorScreenController *)((char *)this + 456),
             &v2);
  if ( result )
    result = (StructureBlockEntity *)StructureBlockEntity::resetTempData(result);
  return result;
}


void __fastcall StructureEditorScreenController::_registerMirrorDropdown(StructureEditorScreenController *this)
{
  ScreenController *v1; // r8@1
  double v2; // r0@1
  void *v3; // r0@1
  void *v4; // r0@2
  void *v5; // r0@3
  __int64 v6; // r6@4
  double v7; // r0@4
  void *v8; // r0@4
  void *v9; // r0@5
  void *v10; // r0@6
  void *v11; // r0@7
  __int64 v12; // r1@7
  __int64 v13; // r1@7
  int v14; // r4@11
  _DWORD *v15; // r0@11
  __int64 v16; // r1@11
  void *v17; // r0@13
  int v18; // r4@14
  _DWORD *v19; // r0@14
  __int64 v20; // r1@14
  char *v21; // r4@16
  size_t v22; // r0@16
  int i; // r1@16
  int v24; // t1@17
  _DWORD *v25; // r0@18
  __int64 v26; // r1@18
  __int64 v27; // r1@18
  char *v28; // r0@22
  _DWORD *v29; // r0@23
  int v30; // r4@23
  _DWORD *v31; // r2@23
  unsigned int v32; // r1@23
  int v33; // r0@23
  bool v34; // zf@23
  int v35; // r7@23
  int v36; // r3@23
  int v37; // r6@24
  __int64 v38; // r1@28
  int v39; // r4@32
  unsigned int *v40; // r2@34
  signed int v41; // r1@36
  void *v42; // r5@42
  int v43; // r1@42
  void *v44; // r0@42
  int v45; // r9@47
  unsigned int *v46; // r2@49
  signed int v47; // r1@51
  unsigned int *v48; // r2@53
  signed int v49; // r1@55
  _BYTE *v50; // r7@65
  size_t v51; // r0@65
  int j; // r1@65
  int v53; // t1@66
  void *v54; // r7@67
  void *v55; // r0@71
  int v56; // r11@72
  void *v57; // r7@72
  void *v58; // r0@74
  void *v59; // r0@76
  int v60; // r6@77
  unsigned int *v61; // r2@79
  signed int v62; // r1@81
  void *v63; // r5@87
  int v64; // r1@87
  void *v65; // r0@87
  unsigned __int64 *v66; // r6@92
  unsigned int *v67; // r2@94
  signed int v68; // r1@96
  unsigned __int64 *v69; // r5@102
  int v70; // r1@102
  void *v71; // r0@102
  unsigned int *v72; // r2@108
  signed int v73; // r1@110
  unsigned int *v74; // r2@112
  signed int v75; // r1@114
  unsigned int *v76; // r2@116
  signed int v77; // r1@118
  unsigned int *v78; // r2@120
  signed int v79; // r1@122
  unsigned int *v80; // r2@124
  signed int v81; // r1@126
  unsigned int *v82; // r2@128
  signed int v83; // r1@130
  unsigned int *v84; // r2@132
  signed int v85; // r1@134
  unsigned int *v86; // r2@136
  signed int v87; // r1@138
  unsigned int *v88; // r2@172
  signed int v89; // r1@174
  __int64 v90; // [sp+0h] [bp-220h]@4
  int v91; // [sp+3Ch] [bp-1E4h]@53
  int v92; // [sp+40h] [bp-1E0h]@72
  void *v93; // [sp+44h] [bp-1DCh]@72
  int (__fastcall *v94)(int *, int *, int); // [sp+4Ch] [bp-1D4h]@72
  signed int (__fastcall *v95)(int *, int); // [sp+50h] [bp-1D0h]@72
  void *v96; // [sp+54h] [bp-1CCh]@67
  int (__fastcall *v97)(void **, void **, int); // [sp+5Ch] [bp-1C4h]@67
  signed int (*v98)(); // [sp+60h] [bp-1C0h]@67
  ScreenController *v99; // [sp+64h] [bp-1BCh]@67
  int v100; // [sp+68h] [bp-1B8h]@49
  int v101; // [sp+6Ch] [bp-1B4h]@67
  void *v102; // [sp+70h] [bp-1B0h]@67
  int (__fastcall *v103)(int *, int *, int); // [sp+78h] [bp-1A8h]@67
  signed int (__fastcall *v104)(int **); // [sp+7Ch] [bp-1A4h]@67
  int v105; // [sp+80h] [bp-1A0h]@67
  void *v106; // [sp+84h] [bp-19Ch]@28
  __int64 v107; // [sp+8Ch] [bp-194h]@28
  ScreenController *v108; // [sp+94h] [bp-18Ch]@23
  void *ptr; // [sp+98h] [bp-188h]@23
  unsigned int v110; // [sp+9Ch] [bp-184h]@23
  int v111; // [sp+A0h] [bp-180h]@23
  int v112; // [sp+A4h] [bp-17Ch]@23
  __int64 v113; // [sp+A8h] [bp-178h]@23
  int v114; // [sp+B0h] [bp-170h]@23
  int v115; // [sp+B4h] [bp-16Ch]@28
  int (__fastcall *v116)(_DWORD *, _DWORD *, int); // [sp+BCh] [bp-164h]@23
  int *(__fastcall *v117)(int *, int **); // [sp+C0h] [bp-160h]@28
  int v118; // [sp+C4h] [bp-15Ch]@23
  void *v119; // [sp+C8h] [bp-158h]@18
  __int64 v120; // [sp+D0h] [bp-150h]@18
  _DWORD *v121; // [sp+D8h] [bp-148h]@18
  __int64 v122; // [sp+E0h] [bp-140h]@18
  char *s; // [sp+E8h] [bp-138h]@16
  int v124; // [sp+ECh] [bp-134h]@18
  _DWORD *v125; // [sp+F0h] [bp-130h]@14
  __int64 v126; // [sp+F8h] [bp-128h]@14
  _DWORD *v127; // [sp+100h] [bp-120h]@11
  __int64 v128; // [sp+108h] [bp-118h]@11
  int v129; // [sp+114h] [bp-10Ch]@11
  int v130; // [sp+11Ch] [bp-104h]@11
  void *v131; // [sp+120h] [bp-100h]@7
  __int64 v132; // [sp+128h] [bp-F8h]@7
  void *v133; // [sp+130h] [bp-F0h]@7
  __int64 v134; // [sp+138h] [bp-E8h]@7
  int v135; // [sp+140h] [bp-E0h]@7
  char v136; // [sp+14Ch] [bp-D4h]@4
  int v137; // [sp+150h] [bp-D0h]@4
  int v138; // [sp+154h] [bp-CCh]@4
  int v139; // [sp+158h] [bp-C8h]@4
  int v140; // [sp+15Ch] [bp-C4h]@4
  int v141; // [sp+160h] [bp-C0h]@4
  int v142; // [sp+164h] [bp-BCh]@4
  void *v143; // [sp+168h] [bp-B8h]@4
  unsigned int v144; // [sp+16Ch] [bp-B4h]@23
  int v145; // [sp+170h] [bp-B0h]@77
  int v146; // [sp+174h] [bp-ACh]@23
  __int64 v147; // [sp+178h] [bp-A8h]@23
  int v148; // [sp+180h] [bp-A0h]@90
  int v149; // [sp+190h] [bp-90h]@1
  int v150; // [sp+194h] [bp-8Ch]@1
  int v151; // [sp+198h] [bp-88h]@1
  int v152; // [sp+19Ch] [bp-84h]@1
  int v153; // [sp+1A0h] [bp-80h]@1
  int v154; // [sp+1A4h] [bp-7Ch]@1
  void *v155; // [sp+1A8h] [bp-78h]@1
  int v156; // [sp+1ACh] [bp-74h]@104
  unsigned __int64 *v157; // [sp+1B0h] [bp-70h]@47
  int v158; // [sp+1B4h] [bp-6Ch]@104
  int v159; // [sp+1C0h] [bp-60h]@105
  char v160; // [sp+1F0h] [bp-30h]@4

  v1 = this;
  sub_21E94B4((void **)&v149, "#mirror_none");
  v150 = 0;
  sub_21E94B4((void **)&v151, "#mirror_left_right");
  v152 = 1;
  sub_21E94B4((void **)&v153, "#mirror_front_back");
  v154 = 2;
  LODWORD(v2) = &v155;
  std::_Hashtable<std::string,std::pair<std::string const,int>,std::allocator<std::pair<std::string const,int>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_Hashtable<std::pair<std::string const,int> const*>(
    v2,
    (int **)&v155,
    0);
  v3 = (void *)(v153 - 12);
  if ( (int *)(v153 - 12) != &dword_28898C0 )
  {
    v72 = (unsigned int *)(v153 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
    }
    else
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (void *)(v151 - 12);
  if ( (int *)(v151 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v151 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  v5 = (void *)(v149 - 12);
  if ( (int *)(v149 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v149 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v137 = 0;
  sub_21E94B4((void **)&v138, "structure_block.mirror.none");
  v139 = 1;
  sub_21E94B4((void **)&v140, "structure_block.mirror.left_right");
  v141 = 2;
  sub_21E94B4((void **)&v142, "structure_block.mirror.front_back");
  HIDWORD(v6) = &v160;
  LODWORD(v6) = &v136;
  v90 = v6;
  LODWORD(v7) = &v143;
  std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_Hashtable<std::pair<int const,std::string> const*>(
    v7,
    (unsigned int *)&v143,
  v8 = (void *)(v142 - 12);
  if ( (int *)(v142 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v142 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v140 - 12);
  if ( (int *)(v140 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v140 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v138 - 12);
  if ( (int *)(v138 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v138 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  StringHash::StringHash<char [25]>(&v135, (int)"#mirror_dropdown_enabled");
  v11 = operator new(1u);
  LODWORD(v12) = sub_126E480;
  v133 = v11;
  HIDWORD(v12) = sub_126E47C;
  v134 = v12;
  v131 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v132 = v13;
  ScreenController::bindBool((int)v1, &v135, (int)&v133, (int)&v131);
  if ( (_DWORD)v132 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, char *, char *))v132)(&v131, &v131, 3, v132, &v136, &v160);
  if ( (_DWORD)v134 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, _DWORD, _DWORD))v134)(
      &v133,
      3,
      v134,
      v90,
      HIDWORD(v90));
  sub_21E94B4((void **)&v130, "mirror_dropdown");
  sub_21E94B4((void **)&v129, "button.dropdown_exit");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v129);
  v15 = operator new(4u);
  LODWORD(v16) = sub_126E4BC;
  *v15 = v1;
  HIDWORD(v16) = sub_126E4AE;
  v127 = v15;
  v128 = v16;
  ScreenController::registerButtonClickHandler((int)v1, v14, (int)&v127);
  if ( (_DWORD)v128 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v128)(
      &v127,
      v128,
  v17 = (void *)(v129 - 12);
  if ( (int *)(v129 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v129 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = MinecraftScreenController::_getNameId(v1, (int **)&v130);
  v19 = operator new(4u);
  LODWORD(v20) = sub_126E500;
  *v19 = v1;
  HIDWORD(v20) = sub_126E4F2;
  v125 = v19;
  v126 = v20;
  ScreenController::registerToggleChangeEventHandler((int)v1, v18, (int)&v125);
  if ( (_DWORD)v126 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v126)(
      &v125,
      v126,
  s = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&s, *(_DWORD *)(v130 - 12) + 1);
  sub_21E7408((const void **)&s, "#", 1u);
  sub_21E72F0((const void **)&s, (const void **)&v130);
  v21 = s;
  v22 = strlen(s);
  for ( i = -2128831035; v22; i = 16777619 * (i ^ v24) )
    v24 = (unsigned __int8)*v21++;
    --v22;
  v124 = i;
  v25 = operator new(4u);
  LODWORD(v26) = sub_126E546;
  *v25 = v1;
  HIDWORD(v26) = sub_126E536;
  v121 = v25;
  v122 = v26;
  v119 = operator new(1u);
  LODWORD(v27) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v27) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v120 = v27;
  ScreenController::bindBool((int)v1, &v124, (int)&v121, (int)&v119);
  if ( (_DWORD)v120 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, _DWORD, _DWORD))v120)(
      &v119,
      v120,
  if ( (_DWORD)v122 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v122)(
      &v121,
      v122,
  v28 = s - 12;
  if ( (int *)(s - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(s - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  StringHash::StringHash<char [30]>(&v118, (int)"#mirror_dropdown_toggle_label");
  v108 = v1;
  ptr = 0;
  v110 = v144;
  v111 = 0;
  v112 = v146;
  v113 = v147;
  std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_assign<std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::(std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<int const,std::string>,false> const*)#1}>(
    (unsigned int *)&ptr,
    (int)&v143);
  v116 = 0;
  v29 = operator new(0x20u);
  v30 = (int)v29;
  *v29 = v1;
  v31 = ptr;
  v32 = v110;
  v33 = v111;
  v34 = &v114 == ptr;
  v35 = v112;
  *(_DWORD *)(v30 + 4) = ptr;
  *(_DWORD *)(v30 + 8) = v32;
  *(_DWORD *)(v30 + 12) = v33;
  *(_DWORD *)(v30 + 16) = v35;
  v36 = HIDWORD(v113);
  *(_DWORD *)(v30 + 20) = v113;
  *(_DWORD *)(v30 + 24) = v36;
  if ( v34 )
    v37 = v30 + 28;
    *(_DWORD *)(v30 + 4) = v30 + 28;
    *(_DWORD *)(v30 + 28) = *v31;
  else
    v37 = (int)v31;
  if ( v33 )
    *(_DWORD *)(v37 + 4 * (*(_DWORD *)(v33 + 4) % v32)) = v30 + 12;
  HIDWORD(v113) = 0;
  ptr = &v114;
  v110 = 1;
  v112 = 0;
  v114 = 0;
  v115 = v30;
  v116 = sub_126E604;
  v117 = sub_126E57C;
  v106 = operator new(1u);
  LODWORD(v38) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v38) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v107 = v38;
  ScreenController::bindString((int)v1, &v118, (int)&v115, (int)&v106);
  if ( (_DWORD)v107 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, _DWORD, _DWORD))v107)(
      &v106,
      v107,
  if ( v116 )
    ((void (__cdecl *)(int *, int *, signed int, int (__fastcall *)(_DWORD *, _DWORD *, int), _DWORD, _DWORD))v116)(
      &v115,
      v116,
  v39 = v111;
  while ( v39 )
    v42 = (void *)v39;
    v43 = *(_DWORD *)(v39 + 8);
    v39 = *(_DWORD *)v39;
    v44 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v43 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
      }
      else
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j__ZdlPv_9(v44);
    operator delete(v42);
  _aeabi_memclr4(ptr, 4 * v110);
  if ( ptr && &v114 != ptr )
    operator delete(ptr);
  v45 = (int)v157;
  if ( v157 )
    do
      v50 = *(_BYTE **)(v45 + 4);
      v51 = strlen(*(const char **)(v45 + 4));
      for ( j = -2128831035; v51; j = 16777619 * (j ^ v53) )
        v53 = *v50++;
        --v51;
      v105 = j;
      v99 = v1;
      sub_21E8AF4(&v100, (int *)(v45 + 4));
      v101 = *(_DWORD *)(v45 + 8);
      v103 = 0;
      v54 = operator new(0xCu);
      *(_DWORD *)v54 = v99;
      sub_21E8AF4((int *)v54 + 1, &v100);
      *((_DWORD *)v54 + 2) = v101;
      v102 = v54;
      v104 = sub_126E708;
      v103 = sub_126E73C;
      v97 = 0;
      v96 = operator new(1u);
      v98 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
      v97 = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
      ScreenController::bindBool((int)v1, &v105, (int)&v102, (int)&v96);
      if ( v97 )
        v97(&v96, &v96, 3);
      if ( v103 )
        v103((int *)&v102, (int *)&v102, 3);
      v55 = (void *)(v100 - 12);
      if ( (int *)(v100 - 12) != &dword_28898C0 )
        v46 = (unsigned int *)(v100 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v47 = __ldrex(v46);
          while ( __strex(v47 - 1, v46) );
        }
        else
          v47 = (*v46)--;
        if ( v47 <= 0 )
          j_j_j_j__ZdlPv_9(v55);
      v56 = MinecraftScreenController::_getNameId(v1, (int **)(v45 + 4));
      sub_21E8AF4(&v91, (int *)(v45 + 4));
      v92 = *(_DWORD *)(v45 + 8);
      v94 = 0;
      v57 = operator new(0xCu);
      *(_DWORD *)v57 = v1;
      sub_21E8AF4((int *)v57 + 1, &v91);
      *((_DWORD *)v57 + 2) = v92;
      v93 = v57;
      v95 = sub_126E7E4;
      v94 = sub_126E86C;
      ScreenController::registerToggleChangeEventHandler((int)v1, v56, (int)&v93);
      if ( v94 )
        ((void (__cdecl *)(void **, void **, signed int, int (__fastcall *)(int *, int *, int), _DWORD, _DWORD))v94)(
          &v93,
          3,
          v94,
          v90,
          HIDWORD(v90));
      v58 = (void *)(v91 - 12);
      if ( (int *)(v91 - 12) != &dword_28898C0 )
        v48 = (unsigned int *)(v91 - 4);
            v49 = __ldrex(v48);
          while ( __strex(v49 - 1, v48) );
          v49 = (*v48)--;
        if ( v49 <= 0 )
          j_j_j_j__ZdlPv_9(v58);
      v45 = *(_DWORD *)v45;
    while ( v45 );
  v59 = (void *)(v130 - 12);
  if ( (int *)(v130 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v130 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v59);
  v60 = v145;
  while ( v60 )
    v63 = (void *)v60;
    v64 = *(_DWORD *)(v60 + 8);
    v60 = *(_DWORD *)v60;
    v65 = (void *)(v64 - 12);
    if ( (int *)(v64 - 12) != &dword_28898C0 )
      v61 = (unsigned int *)(v64 - 4);
          v62 = __ldrex(v61);
        while ( __strex(v62 - 1, v61) );
        v62 = (*v61)--;
      if ( v62 <= 0 )
        j_j_j_j__ZdlPv_9(v65);
    operator delete(v63);
  _aeabi_memclr4(v143, 4 * v144);
  v145 = 0;
  v146 = 0;
  if ( v143 && &v148 != v143 )
    operator delete(v143);
  v66 = v157;
  while ( v66 )
    v69 = v66;
    v70 = *v66 >> 32;
    v66 = (unsigned __int64 *)*v66;
    v71 = (void *)(v70 - 12);
    if ( (int *)(v70 - 12) != &dword_28898C0 )
      v67 = (unsigned int *)(v70 - 4);
          v68 = __ldrex(v67);
        while ( __strex(v68 - 1, v67) );
        v68 = (*v67)--;
      if ( v68 <= 0 )
        j_j_j_j__ZdlPv_9(v71);
    operator delete(v69);
  _aeabi_memclr4(v155, 4 * v156);
  v157 = 0;
  v158 = 0;
  if ( v155 )
    if ( &v159 != v155 )
      operator delete(v155);
}


void __fastcall StructureEditorScreenController::_registerBindings(StructureEditorScreenController *this)
{
  StructureEditorScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  _DWORD *v3; // r0@5
  _DWORD *v4; // r0@9
  _DWORD *v5; // r0@13
  _DWORD *v6; // r0@17
  _DWORD *v7; // r0@21
  _DWORD *v8; // r0@25
  _DWORD *v9; // r0@33
  _DWORD *v10; // r0@37
  _DWORD *v11; // r0@41
  _DWORD *v12; // r0@49
  _DWORD *v13; // r0@53
  __int64 v14; // r1@53
  __int64 v15; // r1@53
  _DWORD *v16; // r0@57
  __int64 v17; // r1@57
  __int64 v18; // r1@57
  _DWORD *v19; // r0@61
  __int64 v20; // r1@61
  _DWORD *v21; // r0@61
  __int64 v22; // r1@61
  _DWORD *v23; // r0@65
  __int64 v24; // r1@65
  _DWORD *v25; // r0@65
  __int64 v26; // r1@65
  _DWORD *v27; // r0@69
  __int64 v28; // r1@69
  _DWORD *v29; // r0@69
  __int64 v30; // r1@69
  _DWORD *v31; // r0@73
  __int64 v32; // r1@73
  _DWORD *v33; // r0@73
  __int64 v34; // r1@73
  _DWORD *v35; // r0@77
  __int64 v36; // r1@77
  _DWORD *v37; // r0@77
  __int64 v38; // r1@77
  _DWORD *v39; // r0@81
  __int64 v40; // r1@81
  _DWORD *v41; // r0@81
  __int64 v42; // r1@81
  _DWORD *v43; // r0@85
  __int64 v44; // r1@85
  __int64 v45; // r1@85
  __int64 v46; // r1@89
  _DWORD *v47; // r0@93
  __int64 v48; // r1@93
  __int64 v49; // r1@93
  _DWORD *v50; // r0@97
  __int64 v51; // r1@97
  __int64 v52; // r1@97
  _DWORD *v53; // r0@101
  __int64 v54; // r1@101
  __int64 v55; // r1@101
  __int64 v56; // r1@105
  _DWORD *v57; // r0@109
  __int64 v58; // r1@109
  __int64 v59; // r1@109
  _DWORD *v60; // r0@113
  __int64 v61; // r1@113
  __int64 v62; // r1@113
  _DWORD *v63; // r0@117
  __int64 v64; // r1@117
  __int64 v65; // r1@117
  __int64 v66; // r1@121
  _DWORD *v67; // r0@125
  __int64 v68; // r1@125
  __int64 v69; // r1@125
  _DWORD *v70; // r0@129
  __int64 v71; // r1@129
  __int64 v72; // r1@129
  _DWORD *v73; // r0@133
  __int64 v74; // r1@133
  _DWORD *v75; // r0@133
  __int64 v76; // r1@133
  _DWORD *v77; // r0@137
  __int64 v78; // r1@137
  _DWORD *v79; // r0@137
  __int64 v80; // r1@137
  _DWORD *v81; // r0@141
  __int64 v82; // r1@141
  _DWORD *v83; // r0@143
  __int64 v84; // r1@143
  _DWORD *v85; // r0@145
  __int64 v86; // r1@145
  _DWORD *v87; // r0@147
  __int64 v88; // r1@147
  _DWORD *v89; // r0@149
  __int64 v90; // r1@149
  _DWORD *v91; // r0@151
  __int64 v92; // r1@151
  __int64 v93; // r1@151
  _DWORD *v94; // r0@155
  __int64 v95; // r1@155
  __int64 v96; // r1@155
  _DWORD *v97; // r0@159
  __int64 v98; // r1@159
  __int64 v99; // r1@159
  void *v100; // [sp+8h] [bp-5D8h]@159
  __int64 v101; // [sp+10h] [bp-5D0h]@159
  _DWORD *v102; // [sp+18h] [bp-5C8h]@159
  __int64 v103; // [sp+20h] [bp-5C0h]@159
  int v104; // [sp+28h] [bp-5B8h]@159
  void *v105; // [sp+2Ch] [bp-5B4h]@155
  __int64 v106; // [sp+34h] [bp-5ACh]@155
  _DWORD *v107; // [sp+3Ch] [bp-5A4h]@155
  __int64 v108; // [sp+44h] [bp-59Ch]@155
  int v109; // [sp+4Ch] [bp-594h]@155
  void *v110; // [sp+50h] [bp-590h]@151
  __int64 v111; // [sp+58h] [bp-588h]@151
  _DWORD *v112; // [sp+60h] [bp-580h]@151
  __int64 v113; // [sp+68h] [bp-578h]@151
  int v114; // [sp+70h] [bp-570h]@151
  _DWORD *v115; // [sp+74h] [bp-56Ch]@149
  __int64 v116; // [sp+7Ch] [bp-564h]@149
  int v117; // [sp+84h] [bp-55Ch]@149
  _DWORD *v118; // [sp+88h] [bp-558h]@147
  __int64 v119; // [sp+90h] [bp-550h]@147
  int v120; // [sp+98h] [bp-548h]@147
  _DWORD *v121; // [sp+9Ch] [bp-544h]@145
  __int64 v122; // [sp+A4h] [bp-53Ch]@145
  int v123; // [sp+ACh] [bp-534h]@145
  _DWORD *v124; // [sp+B0h] [bp-530h]@143
  __int64 v125; // [sp+B8h] [bp-528h]@143
  int v126; // [sp+C0h] [bp-520h]@143
  _DWORD *v127; // [sp+C4h] [bp-51Ch]@141
  __int64 v128; // [sp+CCh] [bp-514h]@141
  int v129; // [sp+D4h] [bp-50Ch]@141
  _DWORD *v130; // [sp+D8h] [bp-508h]@137
  __int64 v131; // [sp+E0h] [bp-500h]@137
  _DWORD *v132; // [sp+E8h] [bp-4F8h]@137
  __int64 v133; // [sp+F0h] [bp-4F0h]@137
  int v134; // [sp+F8h] [bp-4E8h]@137
  _DWORD *v135; // [sp+FCh] [bp-4E4h]@133
  __int64 v136; // [sp+104h] [bp-4DCh]@133
  _DWORD *v137; // [sp+10Ch] [bp-4D4h]@133
  __int64 v138; // [sp+114h] [bp-4CCh]@133
  int v139; // [sp+11Ch] [bp-4C4h]@133
  void *v140; // [sp+120h] [bp-4C0h]@129
  __int64 v141; // [sp+128h] [bp-4B8h]@129
  _DWORD *v142; // [sp+130h] [bp-4B0h]@129
  __int64 v143; // [sp+138h] [bp-4A8h]@129
  int v144; // [sp+140h] [bp-4A0h]@129
  void *v145; // [sp+144h] [bp-49Ch]@125
  __int64 v146; // [sp+14Ch] [bp-494h]@125
  _DWORD *v147; // [sp+154h] [bp-48Ch]@125
  __int64 v148; // [sp+15Ch] [bp-484h]@125
  int v149; // [sp+164h] [bp-47Ch]@125
  void *v150; // [sp+168h] [bp-478h]@121
  __int64 v151; // [sp+170h] [bp-470h]@121
  void *v152; // [sp+178h] [bp-468h]@121
  void (*v153)(void); // [sp+180h] [bp-460h]@121
  signed int (*v154)(); // [sp+184h] [bp-45Ch]@121
  int v155; // [sp+188h] [bp-458h]@121
  void *v156; // [sp+18Ch] [bp-454h]@117
  __int64 v157; // [sp+194h] [bp-44Ch]@117
  _DWORD *v158; // [sp+19Ch] [bp-444h]@117
  __int64 v159; // [sp+1A4h] [bp-43Ch]@117
  int v160; // [sp+1ACh] [bp-434h]@117
  void *v161; // [sp+1B0h] [bp-430h]@113
  __int64 v162; // [sp+1B8h] [bp-428h]@113
  _DWORD *v163; // [sp+1C0h] [bp-420h]@113
  __int64 v164; // [sp+1C8h] [bp-418h]@113
  int v165; // [sp+1D0h] [bp-410h]@113
  void *v166; // [sp+1D4h] [bp-40Ch]@109
  __int64 v167; // [sp+1DCh] [bp-404h]@109
  _DWORD *v168; // [sp+1E4h] [bp-3FCh]@109
  __int64 v169; // [sp+1ECh] [bp-3F4h]@109
  int v170; // [sp+1F4h] [bp-3ECh]@109
  void *v171; // [sp+1F8h] [bp-3E8h]@105
  __int64 v172; // [sp+200h] [bp-3E0h]@105
  void *v173; // [sp+208h] [bp-3D8h]@105
  void (*v174)(void); // [sp+210h] [bp-3D0h]@105
  signed int (*v175)(); // [sp+214h] [bp-3CCh]@105
  int v176; // [sp+218h] [bp-3C8h]@105
  void *v177; // [sp+21Ch] [bp-3C4h]@101
  __int64 v178; // [sp+224h] [bp-3BCh]@101
  _DWORD *v179; // [sp+22Ch] [bp-3B4h]@101
  __int64 v180; // [sp+234h] [bp-3ACh]@101
  int v181; // [sp+23Ch] [bp-3A4h]@101
  void *v182; // [sp+240h] [bp-3A0h]@97
  __int64 v183; // [sp+248h] [bp-398h]@97
  _DWORD *v184; // [sp+250h] [bp-390h]@97
  __int64 v185; // [sp+258h] [bp-388h]@97
  int v186; // [sp+260h] [bp-380h]@97
  void *v187; // [sp+264h] [bp-37Ch]@93
  __int64 v188; // [sp+26Ch] [bp-374h]@93
  _DWORD *v189; // [sp+274h] [bp-36Ch]@93
  __int64 v190; // [sp+27Ch] [bp-364h]@93
  int v191; // [sp+284h] [bp-35Ch]@93
  void *v192; // [sp+288h] [bp-358h]@89
  __int64 v193; // [sp+290h] [bp-350h]@89
  void *v194; // [sp+298h] [bp-348h]@89
  void (*v195)(void); // [sp+2A0h] [bp-340h]@89
  signed int (*v196)(); // [sp+2A4h] [bp-33Ch]@89
  int v197; // [sp+2A8h] [bp-338h]@89
  void *v198; // [sp+2ACh] [bp-334h]@85
  __int64 v199; // [sp+2B4h] [bp-32Ch]@85
  _DWORD *v200; // [sp+2BCh] [bp-324h]@85
  __int64 v201; // [sp+2C4h] [bp-31Ch]@85
  int v202; // [sp+2CCh] [bp-314h]@85
  _DWORD *v203; // [sp+2D0h] [bp-310h]@81
  __int64 v204; // [sp+2D8h] [bp-308h]@81
  _DWORD *v205; // [sp+2E0h] [bp-300h]@81
  __int64 v206; // [sp+2E8h] [bp-2F8h]@81
  int v207; // [sp+2F0h] [bp-2F0h]@81
  int v208; // [sp+2F4h] [bp-2ECh]@81
  _DWORD *v209; // [sp+2F8h] [bp-2E8h]@77
  __int64 v210; // [sp+300h] [bp-2E0h]@77
  _DWORD *v211; // [sp+308h] [bp-2D8h]@77
  __int64 v212; // [sp+310h] [bp-2D0h]@77
  int v213; // [sp+318h] [bp-2C8h]@77
  int v214; // [sp+31Ch] [bp-2C4h]@77
  _DWORD *v215; // [sp+320h] [bp-2C0h]@73
  __int64 v216; // [sp+328h] [bp-2B8h]@73
  _DWORD *v217; // [sp+330h] [bp-2B0h]@73
  __int64 v218; // [sp+338h] [bp-2A8h]@73
  int v219; // [sp+340h] [bp-2A0h]@73
  int v220; // [sp+344h] [bp-29Ch]@73
  _DWORD *v221; // [sp+348h] [bp-298h]@69
  __int64 v222; // [sp+350h] [bp-290h]@69
  _DWORD *v223; // [sp+358h] [bp-288h]@69
  __int64 v224; // [sp+360h] [bp-280h]@69
  int v225; // [sp+368h] [bp-278h]@69
  int v226; // [sp+36Ch] [bp-274h]@69
  _DWORD *v227; // [sp+370h] [bp-270h]@65
  __int64 v228; // [sp+378h] [bp-268h]@65
  _DWORD *v229; // [sp+380h] [bp-260h]@65
  __int64 v230; // [sp+388h] [bp-258h]@65
  int v231; // [sp+390h] [bp-250h]@65
  int v232; // [sp+394h] [bp-24Ch]@65
  _DWORD *v233; // [sp+398h] [bp-248h]@61
  __int64 v234; // [sp+3A0h] [bp-240h]@61
  _DWORD *v235; // [sp+3A8h] [bp-238h]@61
  __int64 v236; // [sp+3B0h] [bp-230h]@61
  int v237; // [sp+3B8h] [bp-228h]@61
  void *v238; // [sp+3BCh] [bp-224h]@57
  __int64 v239; // [sp+3C4h] [bp-21Ch]@57
  _DWORD *v240; // [sp+3CCh] [bp-214h]@57
  __int64 v241; // [sp+3D4h] [bp-20Ch]@57
  int v242; // [sp+3DCh] [bp-204h]@57
  void *v243; // [sp+3E0h] [bp-200h]@53
  __int64 v244; // [sp+3E8h] [bp-1F8h]@53
  _DWORD *v245; // [sp+3F0h] [bp-1F0h]@53
  __int64 v246; // [sp+3F8h] [bp-1E8h]@53
  int v247; // [sp+400h] [bp-1E0h]@53
  void *v248; // [sp+404h] [bp-1DCh]@49
  void (*v249)(void); // [sp+40Ch] [bp-1D4h]@49
  signed int (*v250)(); // [sp+410h] [bp-1D0h]@49
  _DWORD *v251; // [sp+414h] [bp-1CCh]@49
  void (*v252)(void); // [sp+41Ch] [bp-1C4h]@49
  int (__fastcall *v253)(int **); // [sp+420h] [bp-1C0h]@49
  int v254; // [sp+424h] [bp-1BCh]@49
  void *v255; // [sp+428h] [bp-1B8h]@45
  void (*v256)(void); // [sp+430h] [bp-1B0h]@45
  signed int (*v257)(); // [sp+434h] [bp-1ACh]@45
  void *v258; // [sp+438h] [bp-1A8h]@45
  void (*v259)(void); // [sp+440h] [bp-1A0h]@45
  signed int (*v260)(); // [sp+444h] [bp-19Ch]@45
  int v261; // [sp+448h] [bp-198h]@45
  void *v262; // [sp+44Ch] [bp-194h]@41
  void (*v263)(void); // [sp+454h] [bp-18Ch]@41
  signed int (*v264)(); // [sp+458h] [bp-188h]@41
  _DWORD *v265; // [sp+45Ch] [bp-184h]@41
  void (*v266)(void); // [sp+464h] [bp-17Ch]@41
  signed int (__fastcall *v267)(int **); // [sp+468h] [bp-178h]@41
  int v268; // [sp+46Ch] [bp-174h]@41
  void *v269; // [sp+470h] [bp-170h]@37
  void (*v270)(void); // [sp+478h] [bp-168h]@37
  signed int (*v271)(); // [sp+47Ch] [bp-164h]@37
  _DWORD *v272; // [sp+480h] [bp-160h]@37
  void (*v273)(void); // [sp+488h] [bp-158h]@37
  int (__fastcall *v274)(int **); // [sp+48Ch] [bp-154h]@37
  int v275; // [sp+490h] [bp-150h]@37
  void *v276; // [sp+494h] [bp-14Ch]@33
  void (*v277)(void); // [sp+49Ch] [bp-144h]@33
  signed int (*v278)(); // [sp+4A0h] [bp-140h]@33
  _DWORD *v279; // [sp+4A4h] [bp-13Ch]@33
  void (*v280)(void); // [sp+4ACh] [bp-134h]@33
  int (__fastcall *v281)(int **); // [sp+4B0h] [bp-130h]@33
  int v282; // [sp+4B4h] [bp-12Ch]@33
  void *v283; // [sp+4B8h] [bp-128h]@29
  void (*v284)(void); // [sp+4C0h] [bp-120h]@29
  signed int (*v285)(); // [sp+4C4h] [bp-11Ch]@29
  void *v286; // [sp+4C8h] [bp-118h]@29
  void (*v287)(void); // [sp+4D0h] [bp-110h]@29
  signed int (*v288)(); // [sp+4D4h] [bp-10Ch]@29
  int v289; // [sp+4D8h] [bp-108h]@29
  void *v290; // [sp+4DCh] [bp-104h]@25
  void (*v291)(void); // [sp+4E4h] [bp-FCh]@25
  signed int (*v292)(); // [sp+4E8h] [bp-F8h]@25
  _DWORD *v293; // [sp+4ECh] [bp-F4h]@25
  void (*v294)(void); // [sp+4F4h] [bp-ECh]@25
  int (__fastcall *v295)(int **); // [sp+4F8h] [bp-E8h]@25
  int v296; // [sp+4FCh] [bp-E4h]@25
  void *v297; // [sp+500h] [bp-E0h]@21
  void (*v298)(void); // [sp+508h] [bp-D8h]@21
  signed int (*v299)(); // [sp+50Ch] [bp-D4h]@21
  _DWORD *v300; // [sp+510h] [bp-D0h]@21
  void (*v301)(void); // [sp+518h] [bp-C8h]@21
  signed int (*v302)(); // [sp+51Ch] [bp-C4h]@21
  int v303; // [sp+520h] [bp-C0h]@21
  void *v304; // [sp+524h] [bp-BCh]@17
  void (*v305)(void); // [sp+52Ch] [bp-B4h]@17
  signed int (*v306)(); // [sp+530h] [bp-B0h]@17
  _DWORD *v307; // [sp+534h] [bp-ACh]@17
  void (*v308)(void); // [sp+53Ch] [bp-A4h]@17
  signed int (__fastcall *v309)(int **); // [sp+540h] [bp-A0h]@17
  int v310; // [sp+544h] [bp-9Ch]@17
  void *v311; // [sp+548h] [bp-98h]@13
  void (*v312)(void); // [sp+550h] [bp-90h]@13
  signed int (*v313)(); // [sp+554h] [bp-8Ch]@13
  _DWORD *v314; // [sp+558h] [bp-88h]@13
  void (*v315)(void); // [sp+560h] [bp-80h]@13
  signed int (__fastcall *v316)(int **); // [sp+564h] [bp-7Ch]@13
  int v317; // [sp+568h] [bp-78h]@13
  void *v318; // [sp+56Ch] [bp-74h]@9
  void (*v319)(void); // [sp+574h] [bp-6Ch]@9
  signed int (*v320)(); // [sp+578h] [bp-68h]@9
  _DWORD *v321; // [sp+57Ch] [bp-64h]@9
  void (*v322)(void); // [sp+584h] [bp-5Ch]@9
  int (__fastcall *v323)(int **); // [sp+588h] [bp-58h]@9
  int v324; // [sp+58Ch] [bp-54h]@9
  void *v325; // [sp+590h] [bp-50h]@5
  void (*v326)(void); // [sp+598h] [bp-48h]@5
  signed int (*v327)(); // [sp+59Ch] [bp-44h]@5
  _DWORD *v328; // [sp+5A0h] [bp-40h]@5
  void (*v329)(void); // [sp+5A8h] [bp-38h]@5
  int (__fastcall *v330)(int **); // [sp+5ACh] [bp-34h]@5
  int v331; // [sp+5B0h] [bp-30h]@5
  void *v332; // [sp+5B4h] [bp-2Ch]@1
  void (*v333)(void); // [sp+5BCh] [bp-24h]@1
  signed int (*v334)(); // [sp+5C0h] [bp-20h]@1
  _DWORD *v335; // [sp+5C4h] [bp-1Ch]@1
  void (*v336)(void); // [sp+5CCh] [bp-14h]@1
  int (__fastcall *v337)(int **); // [sp+5D0h] [bp-10h]@1
  char v338; // [sp+5D4h] [bp-Ch]@1

  v1 = this;
  StringHash::StringHash<char [25]>(&v338, (int)"#save_mode_panel_visible");
  v2 = operator new(4u);
  *v2 = v1;
  v335 = v2;
  v337 = sub_126C060;
  v336 = (void (*)(void))sub_126C084;
  v332 = operator new(1u);
  v334 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v333 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, (int *)&v338, (int)&v335, (int)&v332);
  if ( v333 )
    v333();
  if ( v336 )
    v336();
  StringHash::StringHash<char [25]>(&v331, (int)"#load_mode_panel_visible");
  v3 = operator new(4u);
  *v3 = v1;
  v328 = v3;
  v330 = sub_126C0BA;
  v329 = (void (*)(void))sub_126C0DE;
  v325 = operator new(1u);
  v327 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v326 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v331, (int)&v328, (int)&v325);
  if ( v326 )
    v326();
  if ( v329 )
    v329();
  StringHash::StringHash<char [27]>(&v324, (int)"#corner_mode_panel_visible");
  v4 = operator new(4u);
  *v4 = v1;
  v321 = v4;
  v323 = sub_126C114;
  v322 = (void (*)(void))sub_126C138;
  v318 = operator new(1u);
  v320 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v319 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v324, (int)&v321, (int)&v318);
  if ( v319 )
    v319();
  if ( v322 )
    v322();
  StringHash::StringHash<char [27]>(&v317, (int)"#export_mode_panel_visible");
  v5 = operator new(4u);
  *v5 = v1;
  v314 = v5;
  v316 = sub_126C16E;
  v315 = (void (*)(void))sub_126C1B0;
  v311 = operator new(1u);
  v313 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v312 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v317, (int)&v314, (int)&v311);
  if ( v312 )
    v312();
  if ( v315 )
    v315();
  v310 = 2029835494;
  v6 = operator new(4u);
  *v6 = v1;
  v307 = v6;
  v309 = sub_126C1E6;
  v308 = (void (*)(void))sub_126C244;
  v304 = operator new(1u);
  v306 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v305 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v310, (int)&v307, (int)&v304);
  if ( v305 )
    v305();
  if ( v308 )
    v308();
  v303 = -256832007;
  v7 = operator new(4u);
  *v7 = v1;
  v300 = v7;
  v302 = sub_126C27A;
  v301 = (void (*)(void))sub_126C27E;
  v297 = operator new(1u);
  v299 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v298 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v303, (int)&v300, (int)&v297);
  if ( v298 )
    v298();
  if ( v301 )
    v301();
  StringHash::StringHash<char [31]>(&v296, (int)"#invisible_blocks_binding_name");
  v8 = operator new(4u);
  *v8 = v1;
  v293 = v8;
  v295 = sub_126C2B4;
  v294 = (void (*)(void))sub_126C2DA;
  v290 = operator new(1u);
  v292 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v291 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v296, (int)&v293, (int)&v290);
  if ( v291 )
    v291();
  if ( v294 )
    v294();
  StringHash::StringHash<char [26]>(&v289, (int)"#invisible_blocks_enabled");
  v286 = operator new(1u);
  v288 = sub_126C310;
  v287 = (void (*)(void))sub_126C314;
  v283 = operator new(1u);
  v285 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v284 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v289, (int)&v286, (int)&v283);
  if ( v284 )
    v284();
  if ( v287 )
    v287();
  StringHash::StringHash<char [29]>(&v282, (int)"#invisible_blocks_toggle_off");
  v9 = operator new(4u);
  *v9 = v1;
  v279 = v9;
  v281 = sub_126C342;
  v280 = (void (*)(void))sub_126C36C;
  v276 = operator new(1u);
  v278 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v277 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v282, (int)&v279, (int)&v276);
  if ( v277 )
    v277();
  if ( v280 )
    v280();
  StringHash::StringHash<char [28]>(&v275, (int)"#invisible_blocks_toggle_on");
  v10 = operator new(4u);
  *v10 = v1;
  v272 = v10;
  v274 = sub_126C3A2;
  v273 = (void (*)(void))sub_126C3C8;
  v269 = operator new(1u);
  v271 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v270 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v275, (int)&v272, (int)&v269);
  if ( v270 )
    v270();
  if ( v273 )
    v273();
  StringHash::StringHash<char [31]>(&v268, (int)"#include_entities_binding_name");
  v11 = operator new(4u);
  *v11 = v1;
  v265 = v11;
  v267 = sub_126C3FE;
  v266 = (void (*)(void))sub_126C424;
  v262 = operator new(1u);
  v264 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v263 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v268, (int)&v265, (int)&v262);
  if ( v263 )
    v263();
  if ( v266 )
    v266();
  StringHash::StringHash<char [26]>(&v261, (int)"#include_entities_enabled");
  v258 = operator new(1u);
  v260 = sub_126C45A;
  v259 = (void (*)(void))sub_126C45E;
  v255 = operator new(1u);
  v257 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v256 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v261, (int)&v258, (int)&v255);
  if ( v256 )
    v256();
  if ( v259 )
    v259();
  StringHash::StringHash<char [29]>(&v254, (int)"#include_entities_toggle_off");
  v12 = operator new(4u);
  *v12 = v1;
  v251 = v12;
  v253 = sub_126C48C;
  v252 = (void (*)(void))sub_126C4B6;
  v248 = operator new(1u);
  v250 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v249 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v254, (int)&v251, (int)&v248);
  if ( v249 )
    v249();
  if ( v252 )
    v252();
  StringHash::StringHash<char [28]>(&v247, (int)"#include_entities_toggle_on");
  v13 = operator new(4u);
  LODWORD(v14) = sub_126C512;
  *v13 = v1;
  HIDWORD(v14) = sub_126C4EC;
  v245 = v13;
  v246 = v14;
  v243 = operator new(1u);
  LODWORD(v15) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v15) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v244 = v15;
  ScreenController::bindBool((int)v1, &v247, (int)&v245, (int)&v243);
  if ( (_DWORD)v244 )
    ((void (*)(void))v244)();
  if ( (_DWORD)v246 )
    ((void (*)(void))v246)();
  StringHash::StringHash<char [25]>(&v242, (int)"#block_type_icon_texture");
  v16 = operator new(4u);
  LODWORD(v17) = sub_126C554;
  *v16 = v1;
  HIDWORD(v17) = sub_126C548;
  v240 = v16;
  v241 = v17;
  v238 = operator new(1u);
  LODWORD(v18) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v18) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v239 = v18;
  ScreenController::bindString((int)v1, &v242, (int)&v240, (int)&v238);
  if ( (_DWORD)v239 )
    ((void (*)(void))v239)();
  if ( (_DWORD)v241 )
    ((void (*)(void))v241)();
  StringHash::StringHash<char [37]>(&v237, (int)"#structure_name_content_binding_name");
  v19 = operator new(4u);
  LODWORD(v20) = sub_126C5CC;
  *v19 = v1;
  HIDWORD(v20) = sub_126C58C;
  v235 = v19;
  v236 = v20;
  v21 = operator new(4u);
  LODWORD(v22) = sub_126C614;
  *v21 = v1;
  HIDWORD(v22) = sub_126C602;
  v233 = v21;
  v234 = v22;
  ScreenController::bindString((int)v1, &v237, (int)&v235, (int)&v233);
  if ( (_DWORD)v234 )
    ((void (*)(void))v234)();
  if ( (_DWORD)v236 )
    ((void (*)(void))v236)();
  v232 = -456435883;
  v231 = -598816852;
  v23 = operator new(4u);
  LODWORD(v24) = sub_126C6A0;
  *v23 = v1;
  HIDWORD(v24) = sub_126C64C;
  v229 = v23;
  v230 = v24;
  v25 = operator new(4u);
  LODWORD(v26) = sub_126C6E8;
  *v25 = v1;
  HIDWORD(v26) = sub_126C6D6;
  v227 = v25;
  v228 = v26;
  ScreenController::bindStringForCollection((int)v1, &v232, &v231, (int)&v229, (int)&v227);
  if ( (_DWORD)v228 )
    ((void (*)(void))v228)();
  if ( (_DWORD)v230 )
    ((void (*)(void))v230)();
  v226 = -658132333;
  v225 = -195703398;
  v27 = operator new(4u);
  LODWORD(v28) = sub_126C774;
  *v27 = v1;
  HIDWORD(v28) = sub_126C720;
  v223 = v27;
  v224 = v28;
  v29 = operator new(4u);
  LODWORD(v30) = sub_126C7BC;
  *v29 = v1;
  HIDWORD(v30) = sub_126C7AA;
  v221 = v29;
  v222 = v30;
  ScreenController::bindStringForCollection((int)v1, &v226, &v225, (int)&v223, (int)&v221);
  if ( (_DWORD)v222 )
    ((void (*)(void))v222)();
  if ( (_DWORD)v224 )
    ((void (*)(void))v224)();
  v220 = 918243350;
  v219 = 352384011;
  v31 = operator new(4u);
  LODWORD(v32) = sub_126C848;
  *v31 = v1;
  HIDWORD(v32) = sub_126C7F4;
  v217 = v31;
  v218 = v32;
  v33 = operator new(4u);
  LODWORD(v34) = sub_126C890;
  *v33 = v1;
  HIDWORD(v34) = sub_126C87E;
  v215 = v33;
  v216 = v34;
  ScreenController::bindStringForCollection((int)v1, &v220, &v219, (int)&v217, (int)&v215);
  if ( (_DWORD)v216 )
    ((void (*)(void))v216)();
  if ( (_DWORD)v218 )
    ((void (*)(void))v218)();
  v214 = 242907614;
  v213 = 650963787;
  v35 = operator new(4u);
  LODWORD(v36) = sub_126C91C;
  *v35 = v1;
  HIDWORD(v36) = sub_126C8C8;
  v211 = v35;
  v212 = v36;
  v37 = operator new(4u);
  LODWORD(v38) = sub_126C964;
  *v37 = v1;
  HIDWORD(v38) = sub_126C952;
  v209 = v37;
  v210 = v38;
  ScreenController::bindStringForCollection((int)v1, &v214, &v213, (int)&v211, (int)&v209);
  if ( (_DWORD)v210 )
    ((void (*)(void))v210)();
  if ( (_DWORD)v212 )
    ((void (*)(void))v212)();
  v208 = 701261872;
  StringHash::StringHash<char [24]>(&v207, (int)"#export_offset_edit_box");
  v39 = operator new(4u);
  LODWORD(v40) = sub_126C9F0;
  *v39 = v1;
  HIDWORD(v40) = sub_126C99C;
  v205 = v39;
  v206 = v40;
  v41 = operator new(4u);
  LODWORD(v42) = sub_126CA38;
  *v41 = v1;
  HIDWORD(v42) = sub_126CA26;
  v203 = v41;
  v204 = v42;
  ScreenController::bindStringForCollection((int)v1, &v208, &v207, (int)&v205, (int)&v203);
  if ( (_DWORD)v204 )
    ((void (*)(void))v204)();
  if ( (_DWORD)v206 )
    ((void (*)(void))v206)();
  StringHash::StringHash<char [30]>(&v202, (int)"#include_players_binding_name");
  v43 = operator new(4u);
  LODWORD(v44) = sub_126CA94;
  *v43 = v1;
  HIDWORD(v44) = sub_126CA6E;
  v200 = v43;
  v201 = v44;
  v198 = operator new(1u);
  LODWORD(v45) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v45) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v199 = v45;
  ScreenController::bindBool((int)v1, &v202, (int)&v200, (int)&v198);
  if ( (_DWORD)v199 )
    ((void (*)(void))v199)();
  if ( (_DWORD)v201 )
    ((void (*)(void))v201)();
  StringHash::StringHash<char [25]>(&v197, (int)"#include_players_enabled");
  v194 = operator new(1u);
  v195 = (void (*)(void))sub_126CACE;
  v196 = sub_126CACA;
  v192 = operator new(1u);
  LODWORD(v46) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v46) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v193 = v46;
  ScreenController::bindBool((int)v1, &v197, (int)&v194, (int)&v192);
  if ( (_DWORD)v193 )
    ((void (*)(void))v193)();
  if ( v195 )
    v195();
  StringHash::StringHash<char [28]>(&v191, (int)"#include_players_toggle_off");
  v47 = operator new(4u);
  LODWORD(v48) = sub_126CB26;
  *v47 = v1;
  HIDWORD(v48) = sub_126CAFC;
  v189 = v47;
  v190 = v48;
  v187 = operator new(1u);
  LODWORD(v49) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v49) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v188 = v49;
  ScreenController::bindBool((int)v1, &v191, (int)&v189, (int)&v187);
  if ( (_DWORD)v188 )
    ((void (*)(void))v188)();
  if ( (_DWORD)v190 )
    ((void (*)(void))v190)();
  StringHash::StringHash<char [27]>(&v186, (int)"#include_players_toggle_on");
  v50 = operator new(4u);
  LODWORD(v51) = sub_126CB82;
  *v50 = v1;
  HIDWORD(v51) = sub_126CB5C;
  v184 = v50;
  v185 = v51;
  v182 = operator new(1u);
  LODWORD(v52) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v52) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v183 = v52;
  ScreenController::bindBool((int)v1, &v186, (int)&v184, (int)&v182);
  if ( (_DWORD)v183 )
    ((void (*)(void))v183)();
  if ( (_DWORD)v185 )
    ((void (*)(void))v185)();
  StringHash::StringHash<char [28]>(&v181, (int)"#remove_blocks_binding_name");
  v53 = operator new(4u);
  LODWORD(v54) = sub_126CBDE;
  *v53 = v1;
  HIDWORD(v54) = sub_126CBB8;
  v179 = v53;
  v180 = v54;
  v177 = operator new(1u);
  LODWORD(v55) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v55) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v178 = v55;
  ScreenController::bindBool((int)v1, &v181, (int)&v179, (int)&v177);
  if ( (_DWORD)v178 )
    ((void (*)(void))v178)();
  if ( (_DWORD)v180 )
    ((void (*)(void))v180)();
  StringHash::StringHash<char [23]>(&v176, (int)"#remove_blocks_enabled");
  v173 = operator new(1u);
  v174 = (void (*)(void))sub_126CC18;
  v175 = sub_126CC14;
  v171 = operator new(1u);
  LODWORD(v56) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v56) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v172 = v56;
  ScreenController::bindBool((int)v1, &v176, (int)&v173, (int)&v171);
  if ( (_DWORD)v172 )
    ((void (*)(void))v172)();
  if ( v174 )
    v174();
  StringHash::StringHash<char [26]>(&v170, (int)"#remove_blocks_toggle_off");
  v57 = operator new(4u);
  LODWORD(v58) = sub_126CC70;
  *v57 = v1;
  HIDWORD(v58) = sub_126CC46;
  v168 = v57;
  v169 = v58;
  v166 = operator new(1u);
  LODWORD(v59) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v59) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v167 = v59;
  ScreenController::bindBool((int)v1, &v170, (int)&v168, (int)&v166);
  if ( (_DWORD)v167 )
    ((void (*)(void))v167)();
  if ( (_DWORD)v169 )
    ((void (*)(void))v169)();
  StringHash::StringHash<char [25]>(&v165, (int)"#remove_blocks_toggle_on");
  v60 = operator new(4u);
  LODWORD(v61) = sub_126CCCC;
  *v60 = v1;
  HIDWORD(v61) = sub_126CCA6;
  v163 = v60;
  v164 = v61;
  v161 = operator new(1u);
  LODWORD(v62) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v62) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v162 = v62;
  ScreenController::bindBool((int)v1, &v165, (int)&v163, (int)&v161);
  if ( (_DWORD)v162 )
    ((void (*)(void))v162)();
  if ( (_DWORD)v164 )
    ((void (*)(void))v164)();
  StringHash::StringHash<char [32]>(&v160, (int)"#show_bounding_box_binding_name");
  v63 = operator new(4u);
  LODWORD(v64) = sub_126CD28;
  *v63 = v1;
  HIDWORD(v64) = sub_126CD02;
  v158 = v63;
  v159 = v64;
  v156 = operator new(1u);
  LODWORD(v65) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v65) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v157 = v65;
  ScreenController::bindBool((int)v1, &v160, (int)&v158, (int)&v156);
  if ( (_DWORD)v157 )
    ((void (*)(void))v157)();
  if ( (_DWORD)v159 )
    ((void (*)(void))v159)();
  StringHash::StringHash<char [27]>(&v155, (int)"#show_bounding_box_enabled");
  v152 = operator new(1u);
  v153 = (void (*)(void))sub_126CD62;
  v154 = sub_126CD5E;
  v150 = operator new(1u);
  LODWORD(v66) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v66) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v151 = v66;
  ScreenController::bindBool((int)v1, &v155, (int)&v152, (int)&v150);
  if ( (_DWORD)v151 )
    ((void (*)(void))v151)();
  if ( v153 )
    v153();
  StringHash::StringHash<char [30]>(&v149, (int)"#show_bounding_box_toggle_off");
  v67 = operator new(4u);
  LODWORD(v68) = sub_126CDBA;
  *v67 = v1;
  HIDWORD(v68) = sub_126CD90;
  v147 = v67;
  v148 = v68;
  v145 = operator new(1u);
  LODWORD(v69) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v69) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v146 = v69;
  ScreenController::bindBool((int)v1, &v149, (int)&v147, (int)&v145);
  if ( (_DWORD)v146 )
    ((void (*)(void))v146)();
  if ( (_DWORD)v148 )
    ((void (*)(void))v148)();
  StringHash::StringHash<char [29]>(&v144, (int)"#show_bounding_box_toggle_on");
  v70 = operator new(4u);
  LODWORD(v71) = sub_126CE16;
  *v70 = v1;
  HIDWORD(v71) = sub_126CDF0;
  v142 = v70;
  v143 = v71;
  v140 = operator new(1u);
  LODWORD(v72) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v72) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v141 = v72;
  ScreenController::bindBool((int)v1, &v144, (int)&v142, (int)&v140);
  if ( (_DWORD)v141 )
    ((void (*)(void))v141)();
  if ( (_DWORD)v143 )
    ((void (*)(void))v143)();
  StringHash::StringHash<char [42]>(&v139, (int)"#structure_integrity_content_binding_name");
  v73 = operator new(4u);
  LODWORD(v74) = sub_126CE90;
  *v73 = v1;
  HIDWORD(v74) = sub_126CE4C;
  v137 = v73;
  v138 = v74;
  v75 = operator new(4u);
  LODWORD(v76) = sub_126CED8;
  *v75 = v1;
  HIDWORD(v76) = sub_126CEC6;
  v135 = v75;
  v136 = v76;
  ScreenController::bindString((int)v1, &v139, (int)&v137, (int)&v135);
  if ( (_DWORD)v136 )
    ((void (*)(void))v136)();
  if ( (_DWORD)v138 )
    ((void (*)(void))v138)();
  StringHash::StringHash<char [37]>(&v134, (int)"#structure_seed_content_binding_name");
  v77 = operator new(4u);
  LODWORD(v78) = sub_126CF54;
  *v77 = v1;
  HIDWORD(v78) = sub_126CF10;
  v132 = v77;
  v133 = v78;
  v79 = operator new(4u);
  LODWORD(v80) = sub_126CF9C;
  *v79 = v1;
  HIDWORD(v80) = sub_126CF8A;
  v130 = v79;
  v131 = v80;
  ScreenController::bindString((int)v1, &v134, (int)&v132, (int)&v130);
  if ( (_DWORD)v131 )
    ((void (*)(void))v131)();
  if ( (_DWORD)v133 )
    ((void (*)(void))v133)();
  v129 = -198651639;
  v81 = operator new(4u);
  LODWORD(v82) = sub_126D058;
  *v81 = v1;
  HIDWORD(v82) = sub_126CFD2;
  v127 = v81;
  v128 = v82;
  ScreenController::bindForGlobal((int)v1, &v129, (int)&v127);
  if ( (_DWORD)v128 )
    ((void (*)(void))v128)();
  v126 = -204090810;
  v83 = operator new(4u);
  LODWORD(v84) = sub_126D114;
  *v83 = v1;
  HIDWORD(v84) = sub_126D08E;
  v124 = v83;
  v125 = v84;
  ScreenController::bindForGlobal((int)v1, &v126, (int)&v124);
  if ( (_DWORD)v125 )
    ((void (*)(void))v125)();
  v123 = 519050724;
  v85 = operator new(4u);
  LODWORD(v86) = sub_126D182;
  *v85 = v1;
  HIDWORD(v86) = sub_126D14A;
  v121 = v85;
  v122 = v86;
  ScreenController::bindForGlobal((int)v1, &v123, (int)&v121);
  if ( (_DWORD)v122 )
    ((void (*)(void))v122)();
  v120 = 1604337397;
  v87 = operator new(4u);
  LODWORD(v88) = sub_126D1F0;
  *v87 = v1;
  HIDWORD(v88) = sub_126D1B8;
  v118 = v87;
  v119 = v88;
  ScreenController::bindForGlobal((int)v1, &v120, (int)&v118);
  if ( (_DWORD)v119 )
    ((void (*)(void))v119)();
  v117 = -165342465;
  v89 = operator new(4u);
  LODWORD(v90) = sub_126D25E;
  *v89 = v1;
  HIDWORD(v90) = sub_126D226;
  v115 = v89;
  v116 = v90;
  ScreenController::bindForGlobal((int)v1, &v117, (int)&v115);
  if ( (_DWORD)v116 )
    ((void (*)(void))v116)();
  StringHash::StringHash<char [28]>(&v114, (int)"#structure_renderer_visible");
  v91 = operator new(4u);
  LODWORD(v92) = sub_126D2B4;
  *v91 = v1;
  HIDWORD(v92) = sub_126D294;
  v112 = v91;
  v113 = v92;
  v110 = operator new(1u);
  LODWORD(v93) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v93) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v111 = v93;
  ScreenController::bindBool((int)v1, &v114, (int)&v112, (int)&v110);
  if ( (_DWORD)v111 )
    ((void (*)(void))v111)();
  if ( (_DWORD)v113 )
    ((void (*)(void))v113)();
  StringHash::StringHash<char [24]>(&v109, (int)"#progress_panel_visible");
  v94 = operator new(4u);
  LODWORD(v95) = sub_126D30A;
  *v94 = v1;
  HIDWORD(v95) = sub_126D2EA;
  v107 = v94;
  v108 = v95;
  v105 = operator new(1u);
  LODWORD(v96) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v96) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v106 = v96;
  ScreenController::bindBool((int)v1, &v109, (int)&v107, (int)&v105);
  if ( (_DWORD)v106 )
    ((void (*)(void))v106)();
  if ( (_DWORD)v108 )
    ((void (*)(void))v108)();
  v104 = -562286346;
  v97 = operator new(4u);
  LODWORD(v98) = sub_126D384;
  *v97 = v1;
  HIDWORD(v98) = sub_126D340;
  v102 = v97;
  v103 = v98;
  v100 = operator new(1u);
  LODWORD(v99) = ZNSt14_Function_base13_Base_managerIZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v99) = ZNSt17_Function_handlerIFbvEZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v101 = v99;
  ScreenController::bindFloat((int)v1, &v104, (int)&v102, (int)&v100);
  if ( (_DWORD)v101 )
    ((void (*)(void))v101)();
  if ( (_DWORD)v103 )
    ((void (*)(void))v103)();
}


int __fastcall StructureEditorScreenController::_initiateFileGeneration(StructureEditorScreenController *this)
{
  StructureEditorScreenController *v1; // r4@1
  __int64 v2; // r0@1
  StructureBlockEntity *v3; // r5@1
  signed int v4; // r1@3
  bool v5; // nf@3
  unsigned __int8 v6; // vf@3
  char *v7; // r5@7
  int v8; // r6@7
  _DWORD *v9; // r0@7
  int v10; // r5@7
  unsigned int *v11; // r4@14
  int v12; // r4@21
  unsigned int *v13; // r5@28
  _DWORD *v15; // [sp+4h] [bp-2Ch]@7
  int (*v16)(void); // [sp+Ch] [bp-24h]@7
  int (__fastcall *v17)(int **, char); // [sp+10h] [bp-20h]@7
  char v18; // [sp+14h] [bp-1Ch]@7
  int v19; // [sp+18h] [bp-18h]@7
  int v20; // [sp+1Ch] [bp-14h]@1

  v1 = this;
  v20 = 32;
  LODWORD(v2) = BlockScreenController::_getBaseBlockEntity(
                  (int)this,
                  (StructureEditorScreenController *)((char *)this + 456),
                  &v20);
  v3 = (StructureBlockEntity *)v2;
  if ( (_DWORD)v2 )
  {
    LODWORD(v2) = StructureBlockEntity::getStructureSize((StructureBlockEntity *)v2);
    if ( *(_DWORD *)v2 >= 1 )
    {
      v4 = *(_DWORD *)(v2 + 4);
      v6 = __OFSUB__(v4, 1);
      v5 = v4 - 1 < 0;
      if ( v4 >= 1 )
      {
        LODWORD(v2) = *(_DWORD *)(v2 + 8);
        v6 = __OFSUB__((_DWORD)v2, 1);
        v5 = (signed int)v2 - 1 < 0;
      }
      if ( !(v5 ^ v6) )
        LODWORD(v2) = *(_DWORD *)(*(_DWORD *)StructureBlockEntity::getStructureName(v3) - 12);
        if ( (_DWORD)v2 )
        {
          v7 = BlockEntity::getPosition(v3);
          v8 = *((_DWORD *)v1 + 106);
          v9 = operator new(4u);
          *v9 = v1;
          v15 = v9;
          v16 = (int (*)(void))sub_126E924;
          v17 = sub_126E914;
          ClientInstanceScreenModel::initiateRemix3DExport((int)&v18, v8, (const BlockPos *)v7, (int)&v15);
          v2 = *(_QWORD *)&v18;
          *(_DWORD *)&v18 = 0;
          v19 = 0;
          *((_DWORD *)v1 + 119) = v2;
          v10 = *((_DWORD *)v1 + 120);
          *((_DWORD *)v1 + 120) = HIDWORD(v2);
          if ( v10 )
          {
            HIDWORD(v2) = v10 + 4;
            if ( &pthread_create )
            {
              __dmb();
              do
                LODWORD(v2) = __ldrex((unsigned int *)HIDWORD(v2));
              while ( __strex(v2 - 1, (unsigned int *)HIDWORD(v2)) );
            }
            else
              LODWORD(v2) = (*(_DWORD *)HIDWORD(v2))--;
            if ( (_DWORD)v2 == 1 )
              v11 = (unsigned int *)(v10 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
              if ( &pthread_create )
              {
                __dmb();
                do
                  LODWORD(v2) = __ldrex(v11);
                while ( __strex(v2 - 1, v11) );
              }
              else
                LODWORD(v2) = (*v11)--;
              if ( (_DWORD)v2 == 1 )
                LODWORD(v2) = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
          }
          v12 = v19;
          if ( v19 )
            HIDWORD(v2) = v19 + 4;
              v13 = (unsigned int *)(v12 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
                  LODWORD(v2) = __ldrex(v13);
                while ( __strex(v2 - 1, v13) );
                LODWORD(v2) = (*v13)--;
                LODWORD(v2) = (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
          if ( v16 )
            LODWORD(v2) = v16();
        }
    }
  }
  return v2;
}


void __fastcall StructureEditorScreenController::_registerMirrorDropdown(StructureEditorScreenController *this)
{
  StructureEditorScreenController::_registerMirrorDropdown(this);
}


void __fastcall StructureEditorScreenController::_getTextEditValue(int *a1, int a2, int a3)
{
  StructureEditorScreenController::_getTextEditValue(a1, a2, a3);
}


void __fastcall StructureEditorScreenController::_validateAndSetSeed(StructureEditorScreenController *this, int a2)
{
  int v2; // r8@1
  BlockEntity *v3; // r0@1
  StructureBlockEntity *v4; // r6@1
  char *v5; // r0@2
  int v6; // r4@2
  int v7; // r5@2
  int v8; // r7@2
  int v9; // r4@2
  int v10; // r5@2
  int v11; // r7@2
  int v12; // [sp+0h] [bp-58h]@1
  int v13; // [sp+4h] [bp-54h]@2
  int v14; // [sp+8h] [bp-50h]@2
  int v15; // [sp+Ch] [bp-4Ch]@2
  int v16; // [sp+10h] [bp-48h]@2
  int v17; // [sp+14h] [bp-44h]@2
  int v18; // [sp+18h] [bp-40h]@2
  int v19; // [sp+1Ch] [bp-3Ch]@2
  int v20; // [sp+20h] [bp-38h]@2
  int v21; // [sp+24h] [bp-34h]@2
  int v22; // [sp+28h] [bp-30h]@2
  int v23; // [sp+2Ch] [bp-2Ch]@2
  int v24; // [sp+30h] [bp-28h]@2
  int v25; // [sp+34h] [bp-24h]@2

  v2 = a2;
  v12 = 32;
  v3 = BlockScreenController::_getBaseBlockEntity(
         (int)this,
         (StructureEditorScreenController *)((char *)this + 456),
         &v12);
  v4 = v3;
  if ( v3 )
  {
    v5 = StructureBlockEntity::getStructureSettings(v3);
    v6 = *((_DWORD *)v5 + 1);
    v7 = *((_DWORD *)v5 + 2);
    v8 = *((_DWORD *)v5 + 3);
    v12 = *(_DWORD *)v5;
    v13 = v6;
    v14 = v7;
    v15 = v8;
    v9 = *((_DWORD *)v5 + 5);
    v10 = *((_DWORD *)v5 + 6);
    v11 = *((_DWORD *)v5 + 7);
    v16 = *((_DWORD *)v5 + 4);
    v17 = v9;
    v18 = v10;
    v19 = v11;
    v24 = 0;
    v25 = 0;
    v22 = 0;
    v23 = 0;
    v20 = 0;
    v21 = 0;
    v20 = *((_DWORD *)v5 + 8);
    v21 = *((_DWORD *)v5 + 9);
    v22 = *((_DWORD *)v5 + 10);
    v23 = *((_DWORD *)v5 + 11);
    v24 = *((_DWORD *)v5 + 12);
    v25 = *((_DWORD *)v5 + 13);
    StructureSettings::setSeed((StructureSettings *)&v12, v2);
    StructureBlockEntity::setStructureSettings(v4, (const StructureSettings *)&v12);
  }
}


void __fastcall StructureEditorScreenController::_initiateLoad(StructureEditorScreenController *this)
{
  StructureEditorScreenController *v1; // r5@1
  const BlockPos *v2; // r4@1
  BlockEntity *v3; // r0@1
  int v4; // [sp+4h] [bp-14h]@1

  v1 = this;
  v2 = (StructureEditorScreenController *)((char *)this + 456);
  v4 = 32;
  v3 = BlockScreenController::_getBaseBlockEntity(
         (int)this,
         (StructureEditorScreenController *)((char *)this + 456),
         &v4);
  if ( v3 )
    StructureBlockEntity::acceptTempData(v3);
  ClientInstanceScreenModel::sendStructureBlockUpdatePacket(*((ClientInstanceScreenModel **)v1 + 106), v2, 1);
}


int __fastcall StructureEditorScreenController::addStaticScreenVars(StructureEditorScreenController *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  StructureEditorScreenController *v3; // r5@1
  int v4; // r6@1
  int v6; // [sp+0h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  v4 = Json::Value::operator[](a2, "$3DExport_support");
  Json::Value::Value((Json::Value *)&v6, *((_BYTE *)v3 + 475));
  Json::Value::operator=(v4, (const Json::Value *)&v6);
  Json::Value::~Value((Json::Value *)&v6);
  return ScreenController::addStaticScreenVars(v3, v2);
}


char *__fastcall StructureEditorScreenController::_detectCorners(StructureEditorScreenController *this)
{
  StructureEditorScreenController *v1; // r4@1
  const BlockPos *v2; // r5@1
  BlockEntity *v3; // r0@1
  int v5; // [sp+4h] [bp-14h]@1

  v1 = this;
  v2 = (StructureEditorScreenController *)((char *)this + 456);
  v5 = 32;
  v3 = BlockScreenController::_getBaseBlockEntity(
         (int)this,
         (StructureEditorScreenController *)((char *)this + 456),
         &v5);
  if ( v3 )
    StructureBlockEntity::acceptTempData(v3);
  return ClientInstanceScreenModel::detectStructureBlockCorners(*((ClientInstanceScreenModel **)v1 + 106), v2);
}


signed int __fastcall StructureEditorScreenController::handleGameEventNotification(int a1, int a2)
{
  int v2; // r2@1
  signed int result; // r0@1

  v2 = a1;
  result = 0;
  if ( a2 == 21 )
  {
    *(_BYTE *)(v2 + 474) = 0;
    result = 1;
  }
  else if ( a2 == 20 )
    *(_BYTE *)(v2 + 474) = 1;
  return result;
}


StructureBlockEntity *__fastcall StructureEditorScreenController::_validateAndSetOffset(StructureEditorScreenController *this, int a2, int a3)
{
  int v3; // r4@1
  int *v4; // r5@1
  int v5; // r7@1
  StructureBlockEntity *result; // r0@1
  StructureBlockEntity *v7; // r6@1
  char *v8; // r0@2
  int v9; // [sp+0h] [bp-20h]@1
  int v10; // [sp+4h] [bp-1Ch]@2
  int v11; // [sp+8h] [bp-18h]@2

  v3 = a2;
  v9 = 32;
  v4 = &v9;
  v5 = a3;
  result = BlockScreenController::_getBaseBlockEntity(
             (int)this,
             (StructureEditorScreenController *)((char *)this + 456),
             &v9);
  v7 = result;
  if ( result )
  {
    v8 = StructureBlockEntity::getStructureOffset(result);
    v9 = *(_DWORD *)v8;
    v10 = *((_DWORD *)v8 + 1);
    v11 = *((_DWORD *)v8 + 2);
    if ( v5 == 2 )
    {
      v4 = &v11;
    }
    else if ( v5 == 1 )
      v4 = &v10;
    *v4 = v3;
    result = (StructureBlockEntity *)StructureBlockEntity::setStructureOffset(v7, (const BlockPos *)&v9);
  }
  return result;
}


int __fastcall StructureEditorScreenController::StructureEditorScreenController(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  int v8; // r6@7
  unsigned int *v9; // r1@8
  unsigned int v10; // r0@10
  unsigned int *v11; // r7@14
  unsigned int v12; // r0@16
  _DWORD *v13; // r0@22
  BlockEntity *v14; // r0@24
  int v16; // [sp+0h] [bp-20h]@1
  int v17; // [sp+4h] [bp-1Ch]@1
  int v18; // [sp+8h] [bp-18h]@24

  v3 = a1;
  v16 = *(_DWORD *)a2;
  v4 = a3;
  v5 = *(_DWORD *)(a2 + 4);
  v17 = v5;
  if ( v5 )
  {
    v6 = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
    }
    else
      ++*v6;
  }
  BlockScreenController::BlockScreenController(v3, (int)&v16, a3, 32);
  v8 = v17;
  if ( v17 )
    v9 = (unsigned int *)(v17 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  *(_DWORD *)v3 = &off_26E3A28;
  *(_DWORD *)(v3 + 456) = *(_DWORD *)v4;
  *(_DWORD *)(v3 + 460) = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v3 + 464) = *(_DWORD *)(v4 + 8);
  *(_BYTE *)(v3 + 474) = 0;
  *(_WORD *)(v3 + 472) = 0;
  *(_DWORD *)(v3 + 468) = 0;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v13 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v13 = &ServiceLocator<AppPlatform>::mDefaultService;
  *(_BYTE *)(v3 + 475) = (*(int (__cdecl **)(_DWORD))(*(_DWORD *)*v13 + 192))(*v13);
  *(_DWORD *)(v3 + 476) = 0;
  *(_DWORD *)(v3 + 480) = 0;
  MinecraftScreenController::_setExitBehavior(v3, 0);
  v18 = 32;
  v14 = BlockScreenController::_getBaseBlockEntity(v3, (const BlockPos *)(v3 + 456), &v18);
  if ( v14 )
    StructureBlockEntity::resetTempData(v14);
  StructureEditorScreenController::_registerEventHandlers((StructureEditorScreenController *)v3);
  StructureEditorScreenController::_registerBindings((StructureEditorScreenController *)v3);
  StructureEditorScreenController::_registerModeDropdown((StructureEditorScreenController *)v3);
  StructureEditorScreenController::_registerRotationDropdown((StructureEditorScreenController *)v3);
  StructureEditorScreenController::_registerMirrorDropdown((StructureEditorScreenController *)v3);
  return v3;
}


int __fastcall StructureEditorScreenController::_getExportProgress(StructureEditorScreenController *this)
{
  StructureEditorScreenController *v1; // r4@1
  MinecraftglTFExporter *v2; // r0@1
  char *v3; // r0@3
  int result; // r0@3

  v1 = this;
  v2 = (MinecraftglTFExporter *)*((_DWORD *)this + 119);
  if ( v2 && MinecraftglTFExporter::isSerializing(v2) == 1 )
  {
    v3 = MinecraftglTFExporter::getProgressHandler(*((MinecraftglTFExporter **)v1 + 119));
    result = j_j_j__ZNK21MinecraftglTFExporter18glTFExportProgress11getProgressEv((MinecraftglTFExporter::glTFExportProgress *)v3);
  }
  else
    result = 0;
  return result;
}


void __fastcall StructureEditorScreenController::_registerRotationDropdown(StructureEditorScreenController *this)
{
  StructureEditorScreenController::_registerRotationDropdown(this);
}


_BOOL4 __fastcall StructureEditorScreenController::_showExportProgress(StructureEditorScreenController *this)
{
  MinecraftglTFExporter *v1; // r0@1

  v1 = (MinecraftglTFExporter *)*((_DWORD *)this + 119);
  return v1 && MinecraftglTFExporter::isSerializing(v1);
}


void *__fastcall StructureEditorScreenController::_getBlockTypeIcon(StructureEditorScreenController *this, int a2)
{
  int v2; // r5@1
  void **v3; // r4@1
  BlockEntity *v4; // r0@1
  int v5; // r0@2
  int v6; // r1@2
  signed int v7; // r2@2
  signed int v8; // r5@4
  void *result; // r0@10
  int v10; // [sp+8h] [bp-18h]@1

  v2 = a2;
  v3 = (void **)this;
  v10 = 32;
  v4 = BlockScreenController::_getBaseBlockEntity(a2, (const BlockPos *)(a2 + 456), &v10);
  if ( v4 )
  {
    v5 = StructureBlockEntity::getStructureType(v4);
    v6 = *(_BYTE *)(v2 + 475);
    v7 = v5;
    if ( v5 != 5 )
      v7 = 4;
    v8 = v7;
    if ( !v6 )
      v8 = 4;
      v8 = v7;
  }
  else
    v8 = 4;
  result = sub_21E94B4(v3, "textures/ui/");
  switch ( v8 )
    case 0:
      result = sub_21E7408((const void **)v3, "structure_block_data", 0x14u);
      break;
    case 4:
      result = sub_21E7408((const void **)v3, "structure_block", 0xFu);
    case 2:
      result = sub_21E7408((const void **)v3, "structure_block_load", 0x14u);
    case 3:
      result = sub_21E7408((const void **)v3, "structure_block_corner", 0x16u);
    case 1:
      result = sub_21E7408((const void **)v3, "structure_block_save", 0x14u);
    case 5:
      result = sub_21E7408((const void **)v3, "structure_block_export", 0x16u);
    default:
      return result;
  return result;
}


signed int __fastcall StructureEditorScreenController::_shouldInitiateRemixExport(StructureEditorScreenController *this)
{
  StructureEditorScreenController *v1; // r5@1
  signed int v2; // r4@1

  v1 = this;
  v2 = 0;
  if ( MinecraftScreenModel::isNetworkEnabled(*((MinecraftScreenModel **)this + 95), 0) == 1 )
    v2 = MinecraftScreenModel::isXBLEnabled(*((MinecraftScreenModel **)v1 + 95));
  return v2;
}


void __fastcall StructureEditorScreenController::~StructureEditorScreenController(StructureEditorScreenController *this)
{
  StructureEditorScreenController::~StructureEditorScreenController(this);
}


StructureEditorScreenController *__fastcall StructureEditorScreenController::~StructureEditorScreenController(StructureEditorScreenController *this)
{
  StructureEditorScreenController *v1; // r4@1
  const BlockPos *v2; // r5@1
  BlockEntity *v3; // r0@1
  int v4; // r5@3
  unsigned int *v5; // r1@4
  unsigned int v6; // r0@6
  unsigned int *v7; // r6@10
  unsigned int v8; // r0@12
  int v10; // [sp+0h] [bp-18h]@1

  v1 = this;
  v2 = (StructureEditorScreenController *)((char *)this + 456);
  *(_DWORD *)this = &off_26E3A28;
  v10 = 32;
  v3 = BlockScreenController::_getBaseBlockEntity(
         (int)this,
         (StructureEditorScreenController *)((char *)this + 456),
         &v10);
  if ( v3 )
    StructureBlockEntity::acceptTempData(v3);
  ClientInstanceScreenModel::sendStructureBlockUpdatePacket(*((ClientInstanceScreenModel **)v1 + 106), v2, 0);
  v4 = *((_DWORD *)v1 + 120);
  if ( v4 )
  {
    v5 = (unsigned int *)(v4 + 4);
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
  BlockScreenController::~BlockScreenController(v1);
  return v1;
}


void __fastcall StructureEditorScreenController::~StructureEditorScreenController(StructureEditorScreenController *this)
{
  StructureEditorScreenController *v1; // r0@1

  v1 = StructureEditorScreenController::~StructureEditorScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall StructureEditorScreenController::_onStructureRotationChanged(StructureEditorScreenController *this, Rotation a2)
{
  Rotation v2; // r8@1
  BlockEntity *v3; // r0@1
  StructureBlockEntity *v4; // r6@1
  char *v5; // r0@2
  int v6; // r4@2
  int v7; // r5@2
  int v8; // r7@2
  int v9; // r4@2
  int v10; // r5@2
  int v11; // r7@2
  int v12; // [sp+0h] [bp-58h]@1
  int v13; // [sp+4h] [bp-54h]@2
  int v14; // [sp+8h] [bp-50h]@2
  int v15; // [sp+Ch] [bp-4Ch]@2
  int v16; // [sp+10h] [bp-48h]@2
  int v17; // [sp+14h] [bp-44h]@2
  int v18; // [sp+18h] [bp-40h]@2
  int v19; // [sp+1Ch] [bp-3Ch]@2
  int v20; // [sp+20h] [bp-38h]@2
  int v21; // [sp+24h] [bp-34h]@2
  int v22; // [sp+28h] [bp-30h]@2
  int v23; // [sp+2Ch] [bp-2Ch]@2
  int v24; // [sp+30h] [bp-28h]@2
  int v25; // [sp+34h] [bp-24h]@2

  v2 = a2;
  v12 = 32;
  v3 = BlockScreenController::_getBaseBlockEntity(
         (int)this,
         (StructureEditorScreenController *)((char *)this + 456),
         &v12);
  v4 = v3;
  if ( v3 )
  {
    v5 = StructureBlockEntity::getStructureSettings(v3);
    v6 = *((_DWORD *)v5 + 1);
    v7 = *((_DWORD *)v5 + 2);
    v8 = *((_DWORD *)v5 + 3);
    v12 = *(_DWORD *)v5;
    v13 = v6;
    v14 = v7;
    v15 = v8;
    v9 = *((_DWORD *)v5 + 5);
    v10 = *((_DWORD *)v5 + 6);
    v11 = *((_DWORD *)v5 + 7);
    v16 = *((_DWORD *)v5 + 4);
    v17 = v9;
    v18 = v10;
    v19 = v11;
    v24 = 0;
    v25 = 0;
    v22 = 0;
    v23 = 0;
    v20 = 0;
    v21 = 0;
    v20 = *((_DWORD *)v5 + 8);
    v21 = *((_DWORD *)v5 + 9);
    v22 = *((_DWORD *)v5 + 10);
    v23 = *((_DWORD *)v5 + 11);
    v24 = *((_DWORD *)v5 + 12);
    v25 = *((_DWORD *)v5 + 13);
    StructureSettings::setRotation((StructureSettings *)&v12, v2);
    StructureBlockEntity::setStructureSettings(v4, (const StructureSettings *)&v12);
  }
}


void __fastcall StructureEditorScreenController::_registerBindings(StructureEditorScreenController *this)
{
  StructureEditorScreenController::_registerBindings(this);
}


int __fastcall StructureEditorScreenController::_getTextEditValueAsInt(int a1, int a2)
{
  int v2; // r4@3
  void *v3; // r0@5
  unsigned int *v5; // r2@7
  signed int v6; // r1@9
  int v7; // [sp+0h] [bp-20h]@2
  int v8; // [sp+4h] [bp-1Ch]@1

  StructureEditorScreenController::_getTextEditValue(&v8, a2, a2);
  if ( *(_DWORD *)(v8 - 12) && (v7 = 0, !Util::toInt<int,(void *)0>((unsigned int *)&v8, &v7)) )
    v2 = v7;
  else
    v2 = 0;
  v3 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v8 - 4);
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
  return v2;
}


void __fastcall StructureEditorScreenController::_registerModeDropdown(StructureEditorScreenController *this)
{
  ScreenController *v1; // r8@1
  double v2; // r0@1
  void *v3; // r0@1
  void *v4; // r0@2
  void *v5; // r0@3
  void *v6; // r0@4
  __int64 v7; // r6@5
  double v8; // r0@5
  void *v9; // r0@5
  void *v10; // r0@6
  void *v11; // r0@7
  void *v12; // r0@8
  void *v13; // r0@9
  void *v14; // r0@10
  void *v15; // r0@11
  __int64 v16; // r1@11
  __int64 v17; // r1@11
  int v18; // r4@15
  _DWORD *v19; // r0@15
  __int64 v20; // r1@15
  void *v21; // r0@17
  int v22; // r4@18
  _DWORD *v23; // r0@18
  __int64 v24; // r1@18
  char *v25; // r4@20
  size_t v26; // r0@20
  int i; // r1@20
  int v28; // t1@21
  _DWORD *v29; // r0@22
  __int64 v30; // r1@22
  __int64 v31; // r1@22
  char *v32; // r0@26
  _DWORD *v33; // r0@27
  int v34; // r4@27
  _DWORD *v35; // r2@27
  unsigned int v36; // r1@27
  int v37; // r0@27
  bool v38; // zf@27
  int v39; // r7@27
  int v40; // r3@27
  int v41; // r6@28
  __int64 v42; // r1@32
  int v43; // r4@36
  unsigned int *v44; // r2@38
  signed int v45; // r1@40
  void *v46; // r5@46
  int v47; // r1@46
  void *v48; // r0@46
  int v49; // r9@51
  unsigned int *v50; // r2@53
  signed int v51; // r1@55
  unsigned int *v52; // r2@57
  signed int v53; // r1@59
  _BYTE *v54; // r7@69
  size_t v55; // r0@69
  int j; // r1@69
  int v57; // t1@70
  void *v58; // r7@71
  void *v59; // r0@75
  int v60; // r11@76
  void *v61; // r7@76
  void *v62; // r0@78
  void *v63; // r0@80
  int v64; // r6@81
  unsigned int *v65; // r2@83
  signed int v66; // r1@85
  void *v67; // r5@91
  int v68; // r1@91
  void *v69; // r0@91
  unsigned __int64 *v70; // r6@96
  unsigned int *v71; // r2@98
  signed int v72; // r1@100
  unsigned __int64 *v73; // r5@106
  int v74; // r1@106
  void *v75; // r0@106
  unsigned int *v76; // r2@112
  signed int v77; // r1@114
  unsigned int *v78; // r2@116
  signed int v79; // r1@118
  unsigned int *v80; // r2@120
  signed int v81; // r1@122
  unsigned int *v82; // r2@124
  signed int v83; // r1@126
  unsigned int *v84; // r2@128
  signed int v85; // r1@130
  unsigned int *v86; // r2@132
  signed int v87; // r1@134
  unsigned int *v88; // r2@136
  signed int v89; // r1@138
  unsigned int *v90; // r2@140
  signed int v91; // r1@142
  unsigned int *v92; // r2@144
  signed int v93; // r1@146
  unsigned int *v94; // r2@148
  signed int v95; // r1@150
  unsigned int *v96; // r2@152
  signed int v97; // r1@154
  unsigned int *v98; // r2@156
  signed int v99; // r1@158
  unsigned int *v100; // r2@208
  signed int v101; // r1@210
  __int64 v102; // [sp+0h] [bp-250h]@5
  int v103; // [sp+3Ch] [bp-214h]@57
  int v104; // [sp+40h] [bp-210h]@76
  void *v105; // [sp+44h] [bp-20Ch]@76
  int (__fastcall *v106)(int *, int *, int); // [sp+4Ch] [bp-204h]@76
  signed int (__fastcall *v107)(int *, int); // [sp+50h] [bp-200h]@76
  void *v108; // [sp+54h] [bp-1FCh]@71
  int (__fastcall *v109)(void **, void **, int); // [sp+5Ch] [bp-1F4h]@71
  signed int (*v110)(); // [sp+60h] [bp-1F0h]@71
  ScreenController *v111; // [sp+64h] [bp-1ECh]@71
  int v112; // [sp+68h] [bp-1E8h]@53
  int v113; // [sp+6Ch] [bp-1E4h]@71
  void *v114; // [sp+70h] [bp-1E0h]@71
  int (__fastcall *v115)(int *, int *, int); // [sp+78h] [bp-1D8h]@71
  signed int (__fastcall *v116)(int *); // [sp+7Ch] [bp-1D4h]@71
  int v117; // [sp+80h] [bp-1D0h]@71
  void *v118; // [sp+84h] [bp-1CCh]@32
  __int64 v119; // [sp+8Ch] [bp-1C4h]@32
  ScreenController *v120; // [sp+94h] [bp-1BCh]@27
  void *ptr; // [sp+98h] [bp-1B8h]@27
  unsigned int v122; // [sp+9Ch] [bp-1B4h]@27
  int v123; // [sp+A0h] [bp-1B0h]@27
  int v124; // [sp+A4h] [bp-1ACh]@27
  __int64 v125; // [sp+A8h] [bp-1A8h]@27
  int v126; // [sp+B0h] [bp-1A0h]@27
  int v127; // [sp+B4h] [bp-19Ch]@32
  int (__fastcall *v128)(_DWORD *, _DWORD *, int); // [sp+BCh] [bp-194h]@27
  int *(__fastcall *v129)(int *, int **); // [sp+C0h] [bp-190h]@32
  int v130; // [sp+C4h] [bp-18Ch]@27
  void *v131; // [sp+C8h] [bp-188h]@22
  __int64 v132; // [sp+D0h] [bp-180h]@22
  _DWORD *v133; // [sp+D8h] [bp-178h]@22
  __int64 v134; // [sp+E0h] [bp-170h]@22
  char *s; // [sp+E8h] [bp-168h]@20
  int v136; // [sp+ECh] [bp-164h]@22
  _DWORD *v137; // [sp+F0h] [bp-160h]@18
  __int64 v138; // [sp+F8h] [bp-158h]@18
  _DWORD *v139; // [sp+100h] [bp-150h]@15
  __int64 v140; // [sp+108h] [bp-148h]@15
  int v141; // [sp+114h] [bp-13Ch]@15
  int v142; // [sp+11Ch] [bp-134h]@15
  void *v143; // [sp+120h] [bp-130h]@11
  __int64 v144; // [sp+128h] [bp-128h]@11
  void *v145; // [sp+130h] [bp-120h]@11
  __int64 v146; // [sp+138h] [bp-118h]@11
  int v147; // [sp+140h] [bp-110h]@11
  char v148; // [sp+14Ch] [bp-104h]@5
  int v149; // [sp+150h] [bp-100h]@5
  int v150; // [sp+154h] [bp-FCh]@5
  int v151; // [sp+158h] [bp-F8h]@5
  int v152; // [sp+15Ch] [bp-F4h]@5
  int v153; // [sp+160h] [bp-F0h]@5
  int v154; // [sp+164h] [bp-ECh]@5
  int v155; // [sp+168h] [bp-E8h]@5
  int v156; // [sp+16Ch] [bp-E4h]@5
  int v157; // [sp+170h] [bp-E0h]@5
  int v158; // [sp+174h] [bp-DCh]@5
  int v159; // [sp+178h] [bp-D8h]@5
  int v160; // [sp+17Ch] [bp-D4h]@5
  void *v161; // [sp+180h] [bp-D0h]@5
  unsigned int v162; // [sp+184h] [bp-CCh]@27
  int v163; // [sp+188h] [bp-C8h]@81
  int v164; // [sp+18Ch] [bp-C4h]@27
  __int64 v165; // [sp+190h] [bp-C0h]@27
  int v166; // [sp+198h] [bp-B8h]@94
  int v167; // [sp+1A8h] [bp-A8h]@1
  int v168; // [sp+1ACh] [bp-A4h]@1
  int v169; // [sp+1B0h] [bp-A0h]@1
  int v170; // [sp+1B4h] [bp-9Ch]@1
  int v171; // [sp+1B8h] [bp-98h]@1
  int v172; // [sp+1BCh] [bp-94h]@1
  int v173; // [sp+1C0h] [bp-90h]@1
  int v174; // [sp+1C4h] [bp-8Ch]@1
  void *v175; // [sp+1C8h] [bp-88h]@1
  int v176; // [sp+1CCh] [bp-84h]@108
  unsigned __int64 *v177; // [sp+1D0h] [bp-80h]@51
  int v178; // [sp+1D4h] [bp-7Ch]@108
  int v179; // [sp+1E0h] [bp-70h]@109
  char v180; // [sp+220h] [bp-30h]@5

  v1 = this;
  sub_21E94B4((void **)&v167, "#structure_save_mode");
  v168 = 1;
  sub_21E94B4((void **)&v169, "#structure_load_mode");
  v170 = 2;
  sub_21E94B4((void **)&v171, "#structure_corner_mode");
  v172 = 3;
  sub_21E94B4((void **)&v173, "#structure_export_mode");
  v174 = 5;
  LODWORD(v2) = &v175;
  std::_Hashtable<std::string,std::pair<std::string const,StructureBlockType>,std::allocator<std::pair<std::string const,StructureBlockType>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_Hashtable<std::pair<std::string const,StructureBlockType> const*>(
    v2,
    (int **)&v175,
    0);
  v3 = (void *)(v173 - 12);
  if ( (int *)(v173 - 12) != &dword_28898C0 )
  {
    v76 = (unsigned int *)(v173 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
    }
    else
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (void *)(v171 - 12);
  if ( (int *)(v171 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v171 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  v5 = (void *)(v169 - 12);
  if ( (int *)(v169 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v169 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v167 - 12);
  if ( (int *)(v167 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v167 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v149 = 0;
  sub_21E94B4((void **)&v150, "structure_block.mode.invalid");
  v151 = 1;
  sub_21E94B4((void **)&v152, "structure_block.mode.invalid");
  v153 = 2;
  sub_21E94B4((void **)&v154, "structure_block.mode.invalid");
  v155 = 3;
  sub_21E94B4((void **)&v156, "structure_block.mode.invalid");
  v157 = 5;
  sub_21E94B4((void **)&v158, "structure_block.mode.export");
  v159 = 4;
  sub_21E94B4((void **)&v160, "structure_block.mode.invalid");
  HIDWORD(v7) = &v180;
  LODWORD(v7) = &v148;
  v102 = v7;
  LODWORD(v8) = &v161;
  std::_Hashtable<StructureBlockType,std::pair<StructureBlockType const,std::string>,std::allocator<std::pair<StructureBlockType const,std::string>>,std::__detail::_Select1st,std::equal_to<StructureBlockType>,std::hash<StructureBlockType>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_Hashtable<std::pair<StructureBlockType const,std::string> const*>(
    v8,
    (unsigned int *)&v161,
  v9 = (void *)(v160 - 12);
  if ( (int *)(v160 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v160 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v158 - 12);
  if ( (int *)(v158 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v158 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v156 - 12);
  if ( (int *)(v156 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v156 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v154 - 12);
  if ( (int *)(v154 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v154 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v152 - 12);
  if ( (int *)(v152 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v152 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v150 - 12);
  if ( (int *)(v150 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v150 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  StringHash::StringHash<char [23]>(&v147, (int)"#mode_dropdown_enabled");
  v15 = operator new(1u);
  LODWORD(v16) = sub_126DB54;
  v145 = v15;
  HIDWORD(v16) = &loc_126DB50;
  v146 = v16;
  v143 = operator new(1u);
  LODWORD(v17) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v17) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v144 = v17;
  ScreenController::bindBool((int)v1, &v147, (int)&v145, (int)&v143);
  if ( (_DWORD)v144 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, char *, char *))v144)(&v143, &v143, 3, v144, &v148, &v180);
  if ( (_DWORD)v146 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, _DWORD, _DWORD))v146)(
      &v145,
      3,
      v146,
      v102,
      HIDWORD(v102));
  sub_21E94B4((void **)&v142, "mode_dropdown");
  sub_21E94B4((void **)&v141, "button.dropdown_exit");
  v18 = MinecraftScreenController::_getNameId(v1, (int **)&v141);
  v19 = operator new(4u);
  LODWORD(v20) = sub_126DB90;
  *v19 = v1;
  HIDWORD(v20) = sub_126DB82;
  v139 = v19;
  v140 = v20;
  ScreenController::registerButtonClickHandler((int)v1, v18, (int)&v139);
  if ( (_DWORD)v140 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v140)(
      &v139,
      v140,
  v21 = (void *)(v141 - 12);
  if ( (int *)(v141 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v141 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = MinecraftScreenController::_getNameId(v1, (int **)&v142);
  v23 = operator new(4u);
  LODWORD(v24) = sub_126DBD4;
  *v23 = v1;
  HIDWORD(v24) = sub_126DBC6;
  v137 = v23;
  v138 = v24;
  ScreenController::registerToggleChangeEventHandler((int)v1, v22, (int)&v137);
  if ( (_DWORD)v138 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v138)(
      &v137,
      v138,
  s = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&s, *(_DWORD *)(v142 - 12) + 1);
  sub_21E7408((const void **)&s, "#", 1u);
  sub_21E72F0((const void **)&s, (const void **)&v142);
  v25 = s;
  v26 = strlen(s);
  for ( i = -2128831035; v26; i = 16777619 * (i ^ v28) )
    v28 = (unsigned __int8)*v25++;
    --v26;
  v136 = i;
  v29 = operator new(4u);
  LODWORD(v30) = sub_126DC1A;
  *v29 = v1;
  HIDWORD(v30) = sub_126DC0A;
  v133 = v29;
  v134 = v30;
  v131 = operator new(1u);
  LODWORD(v31) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v31) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v132 = v31;
  ScreenController::bindBool((int)v1, &v136, (int)&v133, (int)&v131);
  if ( (_DWORD)v132 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, _DWORD, _DWORD))v132)(
      &v131,
      v132,
  if ( (_DWORD)v134 )
    ((void (__cdecl *)(_DWORD **, _DWORD **, signed int, _DWORD, _DWORD, _DWORD))v134)(
      &v133,
      v134,
  v32 = s - 12;
  if ( (int *)(s - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(s - 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  StringHash::StringHash<char [28]>(&v130, (int)"#mode_dropdown_toggle_label");
  v120 = v1;
  ptr = 0;
  v122 = v162;
  v123 = 0;
  v124 = v164;
  v125 = v165;
  std::_Hashtable<StructureBlockType,std::pair<StructureBlockType const,std::string>,std::allocator<std::pair<StructureBlockType const,std::string>>,std::__detail::_Select1st,std::equal_to<StructureBlockType>,std::hash<StructureBlockType>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_assign<std::_Hashtable<StructureBlockType,std::pair<StructureBlockType const,std::string>,std::allocator<std::pair<StructureBlockType const,std::string>>,std::__detail::_Select1st,std::equal_to<StructureBlockType>,std::hash<StructureBlockType>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::(std::_Hashtable<StructureBlockType,std::pair<StructureBlockType const,std::string>,std::allocator<std::pair<StructureBlockType const,std::string>>,std::__detail::_Select1st,std::equal_to<StructureBlockType>,std::hash<StructureBlockType>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<StructureBlockType const,std::string>,true> const*)#1}>(
    (unsigned int *)&ptr,
    (int)&v161);
  v128 = 0;
  v33 = operator new(0x20u);
  v34 = (int)v33;
  *v33 = v1;
  v35 = ptr;
  v36 = v122;
  v37 = v123;
  v38 = &v126 == ptr;
  v39 = v124;
  *(_DWORD *)(v34 + 4) = ptr;
  *(_DWORD *)(v34 + 8) = v36;
  *(_DWORD *)(v34 + 12) = v37;
  *(_DWORD *)(v34 + 16) = v39;
  v40 = HIDWORD(v125);
  *(_DWORD *)(v34 + 20) = v125;
  *(_DWORD *)(v34 + 24) = v40;
  if ( v38 )
    v41 = v34 + 28;
    *(_DWORD *)(v34 + 4) = v34 + 28;
    *(_DWORD *)(v34 + 28) = *v35;
  else
    v41 = (int)v35;
  if ( v37 )
    *(_DWORD *)(v41 + 4 * (*(_DWORD *)(v37 + 12) % v36)) = v34 + 12;
  HIDWORD(v125) = 0;
  ptr = &v126;
  v122 = 1;
  v124 = 0;
  v126 = 0;
  v127 = v34;
  v128 = sub_126DCF0;
  v129 = sub_126DC50;
  v118 = operator new(1u);
  LODWORD(v42) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v42) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v119 = v42;
  ScreenController::bindString((int)v1, &v130, (int)&v127, (int)&v118);
  if ( (_DWORD)v119 )
    ((void (__cdecl *)(void **, void **, signed int, _DWORD, _DWORD, _DWORD))v119)(
      &v118,
      v119,
  if ( v128 )
    ((void (__cdecl *)(int *, int *, signed int, int (__fastcall *)(_DWORD *, _DWORD *, int), _DWORD, _DWORD))v128)(
      &v127,
      v128,
  v43 = v123;
  while ( v43 )
    v46 = (void *)v43;
    v47 = *(_DWORD *)(v43 + 8);
    v43 = *(_DWORD *)v43;
    v48 = (void *)(v47 - 12);
    if ( (int *)(v47 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v47 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
      }
      else
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j__ZdlPv_9(v48);
    operator delete(v46);
  _aeabi_memclr4(ptr, 4 * v122);
  if ( ptr && &v126 != ptr )
    operator delete(ptr);
  v49 = (int)v177;
  if ( v177 )
    do
      v54 = *(_BYTE **)(v49 + 4);
      v55 = strlen(*(const char **)(v49 + 4));
      for ( j = -2128831035; v55; j = 16777619 * (j ^ v57) )
        v57 = *v54++;
        --v55;
      v117 = j;
      v111 = v1;
      sub_21E8AF4(&v112, (int *)(v49 + 4));
      v113 = *(_DWORD *)(v49 + 8);
      v115 = 0;
      v58 = operator new(0xCu);
      *(_DWORD *)v58 = v111;
      sub_21E8AF4((int *)v58 + 1, &v112);
      *((_DWORD *)v58 + 2) = v113;
      v114 = v58;
      v116 = sub_126DDF4;
      v115 = sub_126DE40;
      v109 = 0;
      v108 = operator new(1u);
      v110 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
      v109 = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
      ScreenController::bindBool((int)v1, &v117, (int)&v114, (int)&v108);
      if ( v109 )
        v109(&v108, &v108, 3);
      if ( v115 )
        v115((int *)&v114, (int *)&v114, 3);
      v59 = (void *)(v112 - 12);
      if ( (int *)(v112 - 12) != &dword_28898C0 )
        v50 = (unsigned int *)(v112 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v51 = __ldrex(v50);
          while ( __strex(v51 - 1, v50) );
        }
        else
          v51 = (*v50)--;
        if ( v51 <= 0 )
          j_j_j_j__ZdlPv_9(v59);
      v60 = MinecraftScreenController::_getNameId(v1, (int **)(v49 + 4));
      sub_21E8AF4(&v103, (int *)(v49 + 4));
      v104 = *(_DWORD *)(v49 + 8);
      v106 = 0;
      v61 = operator new(0xCu);
      *(_DWORD *)v61 = v1;
      sub_21E8AF4((int *)v61 + 1, &v103);
      *((_DWORD *)v61 + 2) = v104;
      v105 = v61;
      v107 = sub_126DEE8;
      v106 = sub_126DF38;
      ScreenController::registerToggleChangeEventHandler((int)v1, v60, (int)&v105);
      if ( v106 )
        ((void (__cdecl *)(void **, void **, signed int, int (__fastcall *)(int *, int *, int), _DWORD, _DWORD))v106)(
          &v105,
          3,
          v106,
          v102,
          HIDWORD(v102));
      v62 = (void *)(v103 - 12);
      if ( (int *)(v103 - 12) != &dword_28898C0 )
        v52 = (unsigned int *)(v103 - 4);
            v53 = __ldrex(v52);
          while ( __strex(v53 - 1, v52) );
          v53 = (*v52)--;
        if ( v53 <= 0 )
          j_j_j_j__ZdlPv_9(v62);
      v49 = *(_DWORD *)v49;
    while ( v49 );
  v63 = (void *)(v142 - 12);
  if ( (int *)(v142 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v142 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j__ZdlPv_9(v63);
  v64 = v163;
  while ( v64 )
    v67 = (void *)v64;
    v68 = *(_DWORD *)(v64 + 8);
    v64 = *(_DWORD *)v64;
    v69 = (void *)(v68 - 12);
    if ( (int *)(v68 - 12) != &dword_28898C0 )
      v65 = (unsigned int *)(v68 - 4);
          v66 = __ldrex(v65);
        while ( __strex(v66 - 1, v65) );
        v66 = (*v65)--;
      if ( v66 <= 0 )
        j_j_j_j__ZdlPv_9(v69);
    operator delete(v67);
  _aeabi_memclr4(v161, 4 * v162);
  v163 = 0;
  v164 = 0;
  if ( v161 && &v166 != v161 )
    operator delete(v161);
  v70 = v177;
  while ( v70 )
    v73 = v70;
    v74 = *v70 >> 32;
    v70 = (unsigned __int64 *)*v70;
    v75 = (void *)(v74 - 12);
    if ( (int *)(v74 - 12) != &dword_28898C0 )
      v71 = (unsigned int *)(v74 - 4);
          v72 = __ldrex(v71);
        while ( __strex(v72 - 1, v71) );
        v72 = (*v71)--;
      if ( v72 <= 0 )
        j_j_j_j__ZdlPv_9(v75);
    operator delete(v73);
  _aeabi_memclr4(v175, 4 * v176);
  v177 = 0;
  v178 = 0;
  if ( v175 )
    if ( &v179 != v175 )
      operator delete(v175);
}


signed int __fastcall StructureEditorScreenController::_canExport(StructureEditorScreenController *this)
{
  StructureEditorScreenController *v1; // r4@1
  BlockEntity *v2; // r0@1
  StructureBlockEntity *v3; // r5@1
  char *v4; // r0@2
  signed int v5; // r1@3
  bool v6; // nf@3
  unsigned __int8 v7; // vf@3
  int v8; // r0@4
  int v9; // r0@6
  bool v10; // zf@6
  signed int result; // r0@9
  int v12; // [sp+4h] [bp-14h]@1

  v1 = this;
  v12 = 32;
  v2 = BlockScreenController::_getBaseBlockEntity(
         (int)this,
         (StructureEditorScreenController *)((char *)this + 456),
         &v12);
  v3 = v2;
  if ( !v2 )
    goto LABEL_13;
  v4 = StructureBlockEntity::getStructureSize(v2);
  if ( *(_DWORD *)v4 < 1 )
  v5 = *((_DWORD *)v4 + 1);
  v7 = __OFSUB__(v5, 1);
  v6 = v5 - 1 < 0;
  if ( v5 >= 1 )
  {
    v8 = *((_DWORD *)v4 + 2);
    v7 = __OFSUB__(v8, 1);
    v6 = v8 - 1 < 0;
  }
  if ( v6 ^ v7 )
  v9 = *(_DWORD *)(*(_DWORD *)StructureBlockEntity::getStructureName(v3) - 12);
  v10 = v9 == 0;
  if ( v9 )
    v10 = *((_BYTE *)v1 + 474) == 0;
  if ( v10 )
LABEL_13:
    result = 0;
  else
    result = 1;
  return result;
}


void __fastcall StructureEditorScreenController::_registerEventHandlers(StructureEditorScreenController *this)
{
  StructureEditorScreenController::_registerEventHandlers(this);
}


void __fastcall StructureEditorScreenController::_validateAndSetIntegrity(StructureEditorScreenController *this, float a2)
{
  float v2; // r8@1
  BlockEntity *v3; // r0@1
  StructureBlockEntity *v4; // r10@1
  char *v5; // r0@2
  int v6; // r5@2
  int v7; // r6@2
  int v8; // r7@2
  int v9; // r5@2
  int v10; // r6@2
  int v11; // r7@2
  int v12; // [sp+0h] [bp-58h]@1
  int v13; // [sp+4h] [bp-54h]@2
  int v14; // [sp+8h] [bp-50h]@2
  int v15; // [sp+Ch] [bp-4Ch]@2
  int v16; // [sp+10h] [bp-48h]@2
  int v17; // [sp+14h] [bp-44h]@2
  int v18; // [sp+18h] [bp-40h]@2
  int v19; // [sp+1Ch] [bp-3Ch]@2
  int v20; // [sp+20h] [bp-38h]@2
  int v21; // [sp+24h] [bp-34h]@2
  int v22; // [sp+28h] [bp-30h]@2
  int v23; // [sp+2Ch] [bp-2Ch]@2
  int v24; // [sp+30h] [bp-28h]@2
  int v25; // [sp+34h] [bp-24h]@2

  v2 = a2;
  v12 = 32;
  v3 = BlockScreenController::_getBaseBlockEntity(
         (int)this,
         (StructureEditorScreenController *)((char *)this + 456),
         &v12);
  v4 = v3;
  if ( v3 )
  {
    v5 = StructureBlockEntity::getStructureSettings(v3);
    v6 = *((_DWORD *)v5 + 1);
    v7 = *((_DWORD *)v5 + 2);
    v8 = *((_DWORD *)v5 + 3);
    v12 = *(_DWORD *)v5;
    v13 = v6;
    v14 = v7;
    v15 = v8;
    v9 = *((_DWORD *)v5 + 5);
    v10 = *((_DWORD *)v5 + 6);
    v11 = *((_DWORD *)v5 + 7);
    v16 = *((_DWORD *)v5 + 4);
    v17 = v9;
    v18 = v10;
    v19 = v11;
    v24 = 0;
    v25 = 0;
    v22 = 0;
    v23 = 0;
    v20 = 0;
    v21 = 0;
    v20 = *((_DWORD *)v5 + 8);
    v21 = *((_DWORD *)v5 + 9);
    v22 = *((_DWORD *)v5 + 10);
    v23 = *((_DWORD *)v5 + 11);
    v24 = *((_DWORD *)v5 + 12);
    v25 = *((_DWORD *)v5 + 13);
    StructureSettings::setIntegrity((StructureSettings *)&v12, v2);
    StructureBlockEntity::setStructureSettings(v4, (const StructureSettings *)&v12);
  }
}


void __fastcall StructureEditorScreenController::_onStructureMirrorChanged(int a1, int a2)
{
  int v2; // r8@1
  BlockEntity *v3; // r0@1
  StructureBlockEntity *v4; // r6@1
  char *v5; // r0@2
  int v6; // r4@2
  int v7; // r5@2
  int v8; // r7@2
  int v9; // r4@2
  int v10; // r5@2
  int v11; // r7@2
  int v12; // [sp+0h] [bp-58h]@1
  int v13; // [sp+4h] [bp-54h]@2
  int v14; // [sp+8h] [bp-50h]@2
  int v15; // [sp+Ch] [bp-4Ch]@2
  int v16; // [sp+10h] [bp-48h]@2
  int v17; // [sp+14h] [bp-44h]@2
  int v18; // [sp+18h] [bp-40h]@2
  int v19; // [sp+1Ch] [bp-3Ch]@2
  int v20; // [sp+20h] [bp-38h]@2
  int v21; // [sp+24h] [bp-34h]@2
  int v22; // [sp+28h] [bp-30h]@2
  int v23; // [sp+2Ch] [bp-2Ch]@2
  int v24; // [sp+30h] [bp-28h]@2
  int v25; // [sp+34h] [bp-24h]@2

  v2 = a2;
  v12 = 32;
  v3 = BlockScreenController::_getBaseBlockEntity(a1, (const BlockPos *)(a1 + 456), &v12);
  v4 = v3;
  if ( v3 )
  {
    v5 = StructureBlockEntity::getStructureSettings(v3);
    v6 = *((_DWORD *)v5 + 1);
    v7 = *((_DWORD *)v5 + 2);
    v8 = *((_DWORD *)v5 + 3);
    v12 = *(_DWORD *)v5;
    v13 = v6;
    v14 = v7;
    v15 = v8;
    v9 = *((_DWORD *)v5 + 5);
    v10 = *((_DWORD *)v5 + 6);
    v11 = *((_DWORD *)v5 + 7);
    v16 = *((_DWORD *)v5 + 4);
    v17 = v9;
    v18 = v10;
    v19 = v11;
    v24 = 0;
    v25 = 0;
    v22 = 0;
    v23 = 0;
    v20 = 0;
    v21 = 0;
    v20 = *((_DWORD *)v5 + 8);
    v21 = *((_DWORD *)v5 + 9);
    v22 = *((_DWORD *)v5 + 10);
    v23 = *((_DWORD *)v5 + 11);
    v24 = *((_DWORD *)v5 + 12);
    v25 = *((_DWORD *)v5 + 13);
    StructureSettings::setMirror((int)&v12, v2);
    StructureBlockEntity::setStructureSettings(v4, (const StructureSettings *)&v12);
  }
}


BlockEntity *__fastcall StructureEditorScreenController::_getStructureBlockEntity(StructureEditorScreenController *this)
{
  int v2; // [sp+4h] [bp-Ch]@1

  v2 = 32;
  return BlockScreenController::_getBaseBlockEntity(
           (int)this,
           (StructureEditorScreenController *)((char *)this + 456),
           &v2);
}


void __fastcall StructureEditorScreenController::_initiateSave(StructureEditorScreenController *this)
{
  StructureEditorScreenController *v1; // r5@1
  const BlockPos *v2; // r4@1
  BlockEntity *v3; // r0@1
  int v4; // [sp+4h] [bp-14h]@1

  v1 = this;
  v2 = (StructureEditorScreenController *)((char *)this + 456);
  v4 = 32;
  v3 = BlockScreenController::_getBaseBlockEntity(
         (int)this,
         (StructureEditorScreenController *)((char *)this + 456),
         &v4);
  if ( v3 )
    StructureBlockEntity::acceptTempData(v3);
  ClientInstanceScreenModel::sendStructureBlockUpdatePacket(*((ClientInstanceScreenModel **)v1 + 106), v2, 1);
}


void __fastcall StructureEditorScreenController::_registerEventHandlers(StructureEditorScreenController *this)
{
  ScreenController *v1; // r4@1
  int v2; // r5@1
  _DWORD *v3; // r0@1
  __int64 v4; // r1@1
  void *v5; // r0@3
  int v6; // r5@4
  _DWORD *v7; // r0@4
  __int64 v8; // r1@4
  void *v9; // r0@6
  int v10; // r5@7
  _DWORD *v11; // r0@7
  __int64 v12; // r1@7
  void *v13; // r0@9
  int v14; // r5@10
  _DWORD *v15; // r0@10
  __int64 v16; // r1@10
  void *v17; // r0@12
  int v18; // r5@13
  _DWORD *v19; // r0@13
  __int64 v20; // r1@13
  void *v21; // r0@15
  int v22; // r5@16
  _DWORD *v23; // r0@16
  __int64 v24; // r1@16
  void *v25; // r0@18
  int v26; // r5@19
  _DWORD *v27; // r0@19
  __int64 v28; // r1@19
  void *v29; // r0@21
  int v30; // r5@22
  _DWORD *v31; // r0@22
  __int64 v32; // r1@22
  void *v33; // r0@24
  int v34; // r5@25
  _DWORD *v35; // r0@25
  __int64 v36; // r1@25
  void *v37; // r0@27
  int v38; // r5@28
  _DWORD *v39; // r0@28
  __int64 v40; // r1@28
  void *v41; // r0@30
  int v42; // r5@31
  _DWORD *v43; // r0@31
  __int64 v44; // r1@31
  void *v45; // r0@33
  int v46; // r5@34
  _DWORD *v47; // r0@34
  __int64 v48; // r1@34
  void *v49; // r0@36
  int v50; // r5@37
  _DWORD *v51; // r0@37
  __int64 v52; // r1@37
  void *v53; // r0@39
  int v54; // r5@40
  _DWORD *v55; // r0@40
  __int64 v56; // r1@40
  void *v57; // r0@42
  int v58; // r5@43
  _DWORD *v59; // r0@43
  __int64 v60; // r1@43
  void *v61; // r0@45
  int v62; // r5@46
  _DWORD *v63; // r0@46
  __int64 v64; // r1@46
  void *v65; // r0@48
  int v66; // r5@49
  _DWORD *v67; // r0@49
  __int64 v68; // r1@49
  void *v69; // r0@51
  int v70; // r5@52
  _DWORD *v71; // r0@52
  __int64 v72; // r1@52
  void *v73; // r0@54
  unsigned int *v74; // r2@56
  signed int v75; // r1@58
  unsigned int *v76; // r2@60
  signed int v77; // r1@62
  unsigned int *v78; // r2@64
  signed int v79; // r1@66
  unsigned int *v80; // r2@68
  signed int v81; // r1@70
  unsigned int *v82; // r2@72
  signed int v83; // r1@74
  unsigned int *v84; // r2@76
  signed int v85; // r1@78
  unsigned int *v86; // r2@80
  signed int v87; // r1@82
  unsigned int *v88; // r2@84
  signed int v89; // r1@86
  unsigned int *v90; // r2@88
  signed int v91; // r1@90
  unsigned int *v92; // r2@92
  signed int v93; // r1@94
  unsigned int *v94; // r2@96
  signed int v95; // r1@98
  unsigned int *v96; // r2@100
  signed int v97; // r1@102
  unsigned int *v98; // r2@104
  signed int v99; // r1@106
  unsigned int *v100; // r2@108
  signed int v101; // r1@110
  unsigned int *v102; // r2@112
  signed int v103; // r1@114
  unsigned int *v104; // r2@116
  signed int v105; // r1@118
  unsigned int *v106; // r2@120
  signed int v107; // r1@122
  unsigned int *v108; // r2@124
  signed int v109; // r1@126
  _DWORD *v110; // [sp+4h] [bp-1C4h]@52
  __int64 v111; // [sp+Ch] [bp-1BCh]@52
  int v112; // [sp+18h] [bp-1B0h]@52
  _DWORD *v113; // [sp+1Ch] [bp-1ACh]@49
  __int64 v114; // [sp+24h] [bp-1A4h]@49
  int v115; // [sp+30h] [bp-198h]@49
  _DWORD *v116; // [sp+34h] [bp-194h]@46
  __int64 v117; // [sp+3Ch] [bp-18Ch]@46
  int v118; // [sp+48h] [bp-180h]@46
  _DWORD *v119; // [sp+4Ch] [bp-17Ch]@43
  __int64 v120; // [sp+54h] [bp-174h]@43
  int v121; // [sp+60h] [bp-168h]@43
  _DWORD *v122; // [sp+64h] [bp-164h]@40
  __int64 v123; // [sp+6Ch] [bp-15Ch]@40
  int v124; // [sp+78h] [bp-150h]@40
  _DWORD *v125; // [sp+7Ch] [bp-14Ch]@37
  __int64 v126; // [sp+84h] [bp-144h]@37
  int v127; // [sp+90h] [bp-138h]@37
  _DWORD *v128; // [sp+94h] [bp-134h]@34
  __int64 v129; // [sp+9Ch] [bp-12Ch]@34
  int v130; // [sp+A8h] [bp-120h]@34
  _DWORD *v131; // [sp+ACh] [bp-11Ch]@31
  __int64 v132; // [sp+B4h] [bp-114h]@31
  int v133; // [sp+C0h] [bp-108h]@31
  _DWORD *v134; // [sp+C4h] [bp-104h]@28
  __int64 v135; // [sp+CCh] [bp-FCh]@28
  int v136; // [sp+D8h] [bp-F0h]@28
  _DWORD *v137; // [sp+DCh] [bp-ECh]@25
  __int64 v138; // [sp+E4h] [bp-E4h]@25
  int v139; // [sp+F0h] [bp-D8h]@25
  _DWORD *v140; // [sp+F4h] [bp-D4h]@22
  __int64 v141; // [sp+FCh] [bp-CCh]@22
  int v142; // [sp+108h] [bp-C0h]@22
  _DWORD *v143; // [sp+10Ch] [bp-BCh]@19
  __int64 v144; // [sp+114h] [bp-B4h]@19
  int v145; // [sp+120h] [bp-A8h]@19
  _DWORD *v146; // [sp+124h] [bp-A4h]@16
  __int64 v147; // [sp+12Ch] [bp-9Ch]@16
  int v148; // [sp+138h] [bp-90h]@16
  _DWORD *v149; // [sp+13Ch] [bp-8Ch]@13
  __int64 v150; // [sp+144h] [bp-84h]@13
  int v151; // [sp+150h] [bp-78h]@13
  _DWORD *v152; // [sp+154h] [bp-74h]@10
  __int64 v153; // [sp+15Ch] [bp-6Ch]@10
  int v154; // [sp+168h] [bp-60h]@10
  _DWORD *v155; // [sp+16Ch] [bp-5Ch]@7
  __int64 v156; // [sp+174h] [bp-54h]@7
  int v157; // [sp+180h] [bp-48h]@7
  _DWORD *v158; // [sp+184h] [bp-44h]@4
  __int64 v159; // [sp+18Ch] [bp-3Ch]@4
  int v160; // [sp+198h] [bp-30h]@4
  _DWORD *v161; // [sp+19Ch] [bp-2Ch]@1
  __int64 v162; // [sp+1A4h] [bp-24h]@1
  int v163; // [sp+1B0h] [bp-18h]@1

  v1 = this;
  sub_21E94B4((void **)&v163, "#structure_name");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v163);
  v3 = operator new(4u);
  LODWORD(v4) = sub_126B7D8;
  *v3 = v1;
  HIDWORD(v4) = sub_126B6F0;
  v161 = v3;
  v162 = v4;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v2, (int)&v161);
  if ( (_DWORD)v162 )
    ((void (*)(void))v162)();
  v5 = (void *)(v163 - 12);
  if ( (int *)(v163 - 12) != &dword_28898C0 )
  {
    v74 = (unsigned int *)(v163 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v160, "#save_size_edit_box");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v160);
  v7 = operator new(4u);
  LODWORD(v8) = sub_126B878;
  *v7 = v1;
  HIDWORD(v8) = sub_126B80E;
  v158 = v7;
  v159 = v8;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v6, (int)&v158);
  if ( (_DWORD)v159 )
    ((void (*)(void))v159)();
  v9 = (void *)(v160 - 12);
  if ( (int *)(v160 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v160 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v157, "#save_offset_edit_box");
  v10 = MinecraftScreenController::_getNameId(v1, (int **)&v157);
  v11 = operator new(4u);
  LODWORD(v12) = sub_126B918;
  *v11 = v1;
  HIDWORD(v12) = sub_126B8AE;
  v155 = v11;
  v156 = v12;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v10, (int)&v155);
  if ( (_DWORD)v156 )
    ((void (*)(void))v156)();
  v13 = (void *)(v157 - 12);
  if ( (int *)(v157 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v157 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v154, "#load_offset_edit_box");
  v14 = MinecraftScreenController::_getNameId(v1, (int **)&v154);
  v15 = operator new(4u);
  LODWORD(v16) = sub_126B9B8;
  *v15 = v1;
  HIDWORD(v16) = sub_126B94E;
  v152 = v15;
  v153 = v16;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v14, (int)&v152);
  if ( (_DWORD)v153 )
    ((void (*)(void))v153)();
  v17 = (void *)(v154 - 12);
  if ( (int *)(v154 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v154 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v151, "#export_size_edit_box");
  v18 = MinecraftScreenController::_getNameId(v1, (int **)&v151);
  v19 = operator new(4u);
  LODWORD(v20) = sub_126BA58;
  *v19 = v1;
  HIDWORD(v20) = sub_126B9EE;
  v149 = v19;
  v150 = v20;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v18, (int)&v149);
  if ( (_DWORD)v150 )
    ((void (*)(void))v150)();
  v21 = (void *)(v151 - 12);
  if ( (int *)(v151 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v151 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v148, "#export_offset_edit_box");
  v22 = MinecraftScreenController::_getNameId(v1, (int **)&v148);
  v23 = operator new(4u);
  LODWORD(v24) = sub_126BAF8;
  *v23 = v1;
  HIDWORD(v24) = sub_126BA8E;
  v146 = v23;
  v147 = v24;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v22, (int)&v146);
  if ( (_DWORD)v147 )
    ((void (*)(void))v147)();
  v25 = (void *)(v148 - 12);
  if ( (int *)(v148 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v148 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  sub_21E94B4((void **)&v145, "#structure_integrity");
  v26 = MinecraftScreenController::_getNameId(v1, (int **)&v145);
  v27 = operator new(4u);
  LODWORD(v28) = sub_126BBBA;
  *v27 = v1;
  HIDWORD(v28) = sub_126BB2E;
  v143 = v27;
  v144 = v28;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v26, (int)&v143);
  if ( (_DWORD)v144 )
    ((void (*)(void))v144)();
  v29 = (void *)(v145 - 12);
  if ( (int *)(v145 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v145 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  sub_21E94B4((void **)&v142, "#structure_seed");
  v30 = MinecraftScreenController::_getNameId(v1, (int **)&v142);
  v31 = operator new(4u);
  LODWORD(v32) = sub_126BC7A;
  *v31 = v1;
  HIDWORD(v32) = sub_126BBF0;
  v140 = v31;
  v141 = v32;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v30, (int)&v140);
  if ( (_DWORD)v141 )
    ((void (*)(void))v141)();
  v33 = (void *)(v142 - 12);
  if ( (int *)(v142 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v142 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  sub_21E94B4((void **)&v139, "button.structure_reset");
  v34 = MinecraftScreenController::_getNameId(v1, (int **)&v139);
  v35 = operator new(4u);
  LODWORD(v36) = sub_126BCD4;
  *v35 = v1;
  HIDWORD(v36) = sub_126BCB0;
  v137 = v35;
  v138 = v36;
  ScreenController::registerButtonClickHandler((int)v1, v34, (int)&v137);
  if ( (_DWORD)v138 )
    ((void (*)(void))v138)();
  v37 = (void *)(v139 - 12);
  if ( (int *)(v139 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v139 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  sub_21E94B4((void **)&v136, "button.structure_detect");
  v38 = MinecraftScreenController::_getNameId(v1, (int **)&v136);
  v39 = operator new(4u);
  LODWORD(v40) = sub_126BD3C;
  *v39 = v1;
  HIDWORD(v40) = sub_126BD0A;
  v134 = v39;
  v135 = v40;
  ScreenController::registerButtonClickHandler((int)v1, v38, (int)&v134);
  if ( (_DWORD)v135 )
    ((void (*)(void))v135)();
  v41 = (void *)(v136 - 12);
  if ( (int *)(v136 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v136 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  sub_21E94B4((void **)&v133, "button.structure_export");
  v42 = MinecraftScreenController::_getNameId(v1, (int **)&v133);
  v43 = operator new(4u);
  LODWORD(v44) = sub_126BD80;
  *v43 = v1;
  HIDWORD(v44) = sub_126BD72;
  v131 = v43;
  v132 = v44;
  ScreenController::registerButtonClickHandler((int)v1, v42, (int)&v131);
  if ( (_DWORD)v132 )
    ((void (*)(void))v132)();
  v45 = (void *)(v133 - 12);
  if ( (int *)(v133 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v133 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  sub_21E94B4((void **)&v130, "button.structure_save");
  v46 = MinecraftScreenController::_getNameId(v1, (int **)&v130);
  v47 = operator new(4u);
  LODWORD(v48) = sub_126BDEA;
  *v47 = v1;
  HIDWORD(v48) = sub_126BDB6;
  v128 = v47;
  v129 = v48;
  ScreenController::registerButtonClickHandler((int)v1, v46, (int)&v128);
  if ( (_DWORD)v129 )
    ((void (*)(void))v129)();
  v49 = (void *)(v130 - 12);
  if ( (int *)(v130 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v130 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j__ZdlPv_9(v49);
  sub_21E94B4((void **)&v127, "button.structure_load");
  v50 = MinecraftScreenController::_getNameId(v1, (int **)&v127);
  v51 = operator new(4u);
  LODWORD(v52) = sub_126BE54;
  *v51 = v1;
  HIDWORD(v52) = sub_126BE20;
  v125 = v51;
  v126 = v52;
  ScreenController::registerButtonClickHandler((int)v1, v50, (int)&v125);
  if ( (_DWORD)v126 )
    ((void (*)(void))v126)();
  v53 = (void *)(v127 - 12);
  if ( (int *)(v127 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v127 - 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j__ZdlPv_9(v53);
  sub_21E94B4((void **)&v124, "#invisible_blocks_toggle");
  v54 = MinecraftScreenController::_getNameId(v1, (int **)&v124);
  v55 = operator new(4u);
  LODWORD(v56) = sub_126BEB2;
  *v55 = v1;
  HIDWORD(v56) = sub_126BE8A;
  v122 = v55;
  v123 = v56;
  ScreenController::registerToggleChangeEventHandler((int)v1, v54, (int)&v122);
  if ( (_DWORD)v123 )
    ((void (*)(void))v123)();
  v57 = (void *)(v124 - 12);
  if ( (int *)(v124 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v124 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j__ZdlPv_9(v57);
  sub_21E94B4((void **)&v121, "#include_entities_toggle");
  v58 = MinecraftScreenController::_getNameId(v1, (int **)&v121);
  v59 = operator new(4u);
  LODWORD(v60) = sub_126BF10;
  *v59 = v1;
  HIDWORD(v60) = sub_126BEE8;
  v119 = v59;
  v120 = v60;
  ScreenController::registerToggleChangeEventHandler((int)v1, v58, (int)&v119);
  if ( (_DWORD)v120 )
    ((void (*)(void))v120)();
  v61 = (void *)(v121 - 12);
  if ( (int *)(v121 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v121 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j__ZdlPv_9(v61);
  sub_21E94B4((void **)&v118, "#include_players_toggle");
  v62 = MinecraftScreenController::_getNameId(v1, (int **)&v118);
  v63 = operator new(4u);
  LODWORD(v64) = sub_126BF6E;
  *v63 = v1;
  HIDWORD(v64) = sub_126BF46;
  v116 = v63;
  v117 = v64;
  ScreenController::registerToggleChangeEventHandler((int)v1, v62, (int)&v116);
  if ( (_DWORD)v117 )
    ((void (*)(void))v117)();
  v65 = (void *)(v118 - 12);
  if ( (int *)(v118 - 12) != &dword_28898C0 )
    v104 = (unsigned int *)(v118 - 4);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j__ZdlPv_9(v65);
  sub_21E94B4((void **)&v115, "#remove_blocks_toggle");
  v66 = MinecraftScreenController::_getNameId(v1, (int **)&v115);
  v67 = operator new(4u);
  LODWORD(v68) = sub_126BFCC;
  *v67 = v1;
  HIDWORD(v68) = sub_126BFA4;
  v113 = v67;
  v114 = v68;
  ScreenController::registerToggleChangeEventHandler((int)v1, v66, (int)&v113);
  if ( (_DWORD)v114 )
    ((void (*)(void))v114)();
  v69 = (void *)(v115 - 12);
  if ( (int *)(v115 - 12) != &dword_28898C0 )
    v106 = (unsigned int *)(v115 - 4);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j__ZdlPv_9(v69);
  sub_21E94B4((void **)&v112, "#show_bounding_box_toggle");
  v70 = MinecraftScreenController::_getNameId(v1, (int **)&v112);
  v71 = operator new(4u);
  LODWORD(v72) = sub_126C02A;
  *v71 = v1;
  HIDWORD(v72) = sub_126C002;
  v110 = v71;
  v111 = v72;
  ScreenController::registerToggleChangeEventHandler((int)v1, v70, (int)&v110);
  if ( (_DWORD)v111 )
    ((void (*)(void))v111)();
  v73 = (void *)(v112 - 12);
  if ( (int *)(v112 - 12) != &dword_28898C0 )
    v108 = (unsigned int *)(v112 - 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 <= 0 )
      j_j_j_j__ZdlPv_9(v73);
}


int __fastcall StructureEditorScreenController::_getStructureBlockRotationMode(StructureEditorScreenController *this)
{
  BlockEntity *v1; // r0@1
  char *v2; // r0@2
  int result; // r0@2
  int v4; // [sp+4h] [bp-Ch]@1

  v4 = 32;
  v1 = BlockScreenController::_getBaseBlockEntity(
         (int)this,
         (StructureEditorScreenController *)((char *)this + 456),
         &v4);
  if ( v1 )
  {
    v2 = StructureBlockEntity::getStructureSettings(v1);
    result = *(_WORD *)StructureSettings::getRotation((StructureSettings *)v2);
  }
  else
    result = 0;
  return result;
}


int __fastcall StructureEditorScreenController::tick(StructureEditorScreenController *this)
{
  StructureEditorScreenController *v1; // r4@1
  int v2; // r5@1
  MinecraftglTFExporter *v3; // r0@1
  bool v4; // zf@1
  int v5; // r6@4
  char *v6; // r0@4
  char *v7; // r6@5
  int v8; // r7@5
  void *v10; // [sp+4h] [bp-24h]@5
  void (*v11)(void); // [sp+Ch] [bp-1Ch]@5
  int (*v12)(); // [sp+10h] [bp-18h]@5

  v1 = this;
  v2 = MinecraftScreenController::tick(this);
  v3 = (MinecraftglTFExporter *)*((_DWORD *)v1 + 119);
  v4 = v3 == 0;
  if ( v3 )
    v4 = *((_BYTE *)v1 + 472) == 0;
  if ( !v4 )
  {
    v5 = *((_DWORD *)v1 + 106);
    v6 = MinecraftglTFExporter::getExportData(v3);
    MinecraftScreenModel::fireglTFExportEvent(v5, (int)v6, *((_BYTE *)v1 + 473) ^ 1);
    if ( *((_BYTE *)v1 + 473) )
    {
      v7 = MinecraftglTFExporter::getExportData(*((MinecraftglTFExporter **)v1 + 119));
      v8 = *((_DWORD *)v1 + 106);
      v10 = operator new(1u);
      v11 = (void (*)(void))sub_126B6C2;
      v12 = nullsub_58;
      ClientInstanceScreenModel::initiateGLBFileSave(v8, (int *)v7, (int *)v7 + 1, (int)&v10);
      if ( v11 )
        v11();
      if ( MinecraftScreenModel::isNetworkEnabled(*((MinecraftScreenModel **)v1 + 95), 0) == 1
        && MinecraftScreenModel::isXBLEnabled(*((MinecraftScreenModel **)v1 + 95)) == 1 )
      {
        MinecraftScreenModel::navigateToRemixPreviewScreen(
          *((MinecraftScreenModel **)v1 + 106),
          (const glTFExportData *)v7);
      }
      *((_BYTE *)v1 + 473) = 0;
    }
    *((_BYTE *)v1 + 472) = 0;
  }
  return v2;
}


StructureBlockEntity *__fastcall StructureEditorScreenController::_validateChanges(StructureEditorScreenController *this)
{
  StructureBlockEntity *result; // r0@1
  int v2; // [sp+4h] [bp-Ch]@1

  v2 = 32;
  result = BlockScreenController::_getBaseBlockEntity(
             (int)this,
             (StructureEditorScreenController *)((char *)this + 456),
             &v2);
  if ( result )
    result = (StructureBlockEntity *)StructureBlockEntity::acceptTempData(result);
  return result;
}
