

void __fastcall ProjectileFactory::initFactory(ProjectileFactory *this)
{
  ProjectileFactory::initFactory(this);
}


void __fastcall ProjectileFactory::initFactory(ProjectileFactory *this)
{
  int v1; // r4@1
  void *v2; // r0@1
  int v3; // r3@1
  void (*v4)(void); // r3@1
  void *v5; // r0@3
  int v6; // r4@4
  void *v7; // r0@4
  int v8; // r3@4
  void (*v9)(void); // r3@4
  void *v10; // r0@6
  int v11; // r4@7
  void *v12; // r0@7
  int v13; // r3@7
  void (*v14)(void); // r3@7
  void *v15; // r0@9
  int v16; // r4@10
  void *v17; // r0@10
  int v18; // r3@10
  void (*v19)(void); // r3@10
  void *v20; // r0@12
  int v21; // r4@13
  void *v22; // r0@13
  int v23; // r3@13
  void (*v24)(void); // r3@13
  void *v25; // r0@15
  int v26; // r4@16
  void *v27; // r0@16
  int v28; // r3@16
  void (*v29)(void); // r3@16
  void *v30; // r0@18
  int v31; // r4@19
  void *v32; // r0@19
  int v33; // r3@19
  void (*v34)(void); // r3@19
  void *v35; // r0@21
  int v36; // r4@22
  void *v37; // r0@22
  int v38; // r3@22
  void (*v39)(void); // r3@22
  void *v40; // r0@24
  int v41; // r4@25
  void *v42; // r0@25
  int v43; // r3@25
  void (*v44)(void); // r3@25
  void *v45; // r0@27
  int v46; // r4@28
  void *v47; // r0@28
  int v48; // r3@28
  void (*v49)(void); // r3@28
  void *v50; // r0@30
  int v51; // r4@31
  void *v52; // r0@31
  int v53; // r3@31
  void (*v54)(void); // r3@31
  void *v55; // r0@33
  int v56; // r4@34
  void *v57; // r0@34
  int v58; // r3@34
  void (*v59)(void); // r3@34
  void *v60; // r0@36
  int v61; // r4@37
  void *v62; // r0@37
  int v63; // r3@37
  void (*v64)(void); // r3@37
  void *v65; // r0@39
  int v66; // r4@40
  void *v67; // r0@40
  int v68; // r3@40
  void (*v69)(void); // r3@40
  void *v70; // r0@42
  int v71; // r4@43
  void *v72; // r0@43
  int v73; // r3@43
  void (*v74)(void); // r3@43
  void *v75; // r0@45
  unsigned int *v76; // r2@47
  signed int v77; // r1@49
  unsigned int *v78; // r2@51
  signed int v79; // r1@53
  unsigned int *v80; // r2@55
  signed int v81; // r1@57
  unsigned int *v82; // r2@59
  signed int v83; // r1@61
  unsigned int *v84; // r2@63
  signed int v85; // r1@65
  unsigned int *v86; // r2@67
  signed int v87; // r1@69
  unsigned int *v88; // r2@71
  signed int v89; // r1@73
  unsigned int *v90; // r2@75
  signed int v91; // r1@77
  unsigned int *v92; // r2@79
  signed int v93; // r1@81
  unsigned int *v94; // r2@83
  signed int v95; // r1@85
  unsigned int *v96; // r2@87
  signed int v97; // r1@89
  unsigned int *v98; // r2@91
  signed int v99; // r1@93
  unsigned int *v100; // r2@95
  signed int v101; // r1@97
  unsigned int *v102; // r2@99
  signed int v103; // r1@101
  unsigned int *v104; // r2@103
  signed int v105; // r1@105
  int v106; // [sp+4h] [bp-17Ch]@43
  int v107; // [sp+Ch] [bp-174h]@40
  int v108; // [sp+14h] [bp-16Ch]@37
  int v109; // [sp+1Ch] [bp-164h]@34
  int v110; // [sp+24h] [bp-15Ch]@31
  int v111; // [sp+2Ch] [bp-154h]@28
  int v112; // [sp+34h] [bp-14Ch]@25
  int v113; // [sp+3Ch] [bp-144h]@22
  int v114; // [sp+44h] [bp-13Ch]@19
  int v115; // [sp+4Ch] [bp-134h]@16
  int v116; // [sp+54h] [bp-12Ch]@13
  int v117; // [sp+5Ch] [bp-124h]@10
  int v118; // [sp+64h] [bp-11Ch]@7
  int v119; // [sp+6Ch] [bp-114h]@4
  int v120; // [sp+74h] [bp-10Ch]@1
  void *v121; // [sp+78h] [bp-108h]@1
  int v122; // [sp+7Ch] [bp-104h]@1
  void (*v123)(void); // [sp+80h] [bp-100h]@1
  int v124; // [sp+84h] [bp-FCh]@1
  void *v125; // [sp+88h] [bp-F8h]@4
  int v126; // [sp+8Ch] [bp-F4h]@4
  void (*v127)(void); // [sp+90h] [bp-F0h]@4
  int v128; // [sp+94h] [bp-ECh]@4
  void *v129; // [sp+98h] [bp-E8h]@7
  int v130; // [sp+9Ch] [bp-E4h]@7
  void (*v131)(void); // [sp+A0h] [bp-E0h]@7
  int v132; // [sp+A4h] [bp-DCh]@7
  void *v133; // [sp+A8h] [bp-D8h]@10
  int v134; // [sp+ACh] [bp-D4h]@10
  void (*v135)(void); // [sp+B0h] [bp-D0h]@10
  int v136; // [sp+B4h] [bp-CCh]@10
  void *v137; // [sp+B8h] [bp-C8h]@13
  int v138; // [sp+BCh] [bp-C4h]@13
  void (*v139)(void); // [sp+C0h] [bp-C0h]@13
  int v140; // [sp+C4h] [bp-BCh]@13
  void *v141; // [sp+C8h] [bp-B8h]@16
  int v142; // [sp+CCh] [bp-B4h]@16
  void (*v143)(void); // [sp+D0h] [bp-B0h]@16
  int v144; // [sp+D4h] [bp-ACh]@16
  void *v145; // [sp+D8h] [bp-A8h]@19
  int v146; // [sp+DCh] [bp-A4h]@19
  void (*v147)(void); // [sp+E0h] [bp-A0h]@19
  int v148; // [sp+E4h] [bp-9Ch]@19
  void *v149; // [sp+E8h] [bp-98h]@22
  int v150; // [sp+ECh] [bp-94h]@22
  void (*v151)(void); // [sp+F0h] [bp-90h]@22
  int v152; // [sp+F4h] [bp-8Ch]@22
  void *v153; // [sp+F8h] [bp-88h]@25
  int v154; // [sp+FCh] [bp-84h]@25
  void (*v155)(void); // [sp+100h] [bp-80h]@25
  int v156; // [sp+104h] [bp-7Ch]@25
  void *v157; // [sp+108h] [bp-78h]@28
  int v158; // [sp+10Ch] [bp-74h]@28
  void (*v159)(void); // [sp+110h] [bp-70h]@28
  int v160; // [sp+114h] [bp-6Ch]@28
  void *v161; // [sp+118h] [bp-68h]@31
  int v162; // [sp+11Ch] [bp-64h]@31
  void (*v163)(void); // [sp+120h] [bp-60h]@31
  int v164; // [sp+124h] [bp-5Ch]@31
  void *v165; // [sp+128h] [bp-58h]@34
  int v166; // [sp+12Ch] [bp-54h]@34
  void (*v167)(void); // [sp+130h] [bp-50h]@34
  int v168; // [sp+134h] [bp-4Ch]@34
  void *v169; // [sp+138h] [bp-48h]@37
  int v170; // [sp+13Ch] [bp-44h]@37
  void (*v171)(void); // [sp+140h] [bp-40h]@37
  int v172; // [sp+144h] [bp-3Ch]@37
  void *v173; // [sp+148h] [bp-38h]@40
  int v174; // [sp+14Ch] [bp-34h]@40
  void (*v175)(void); // [sp+150h] [bp-30h]@40
  int v176; // [sp+154h] [bp-2Ch]@40
  void *v177; // [sp+158h] [bp-28h]@43
  int v178; // [sp+15Ch] [bp-24h]@43
  void (*v179)(void); // [sp+160h] [bp-20h]@43
  int v180; // [sp+164h] [bp-1Ch]@43

  sub_21E94B4((void **)&v120, "impact_damage");
  v1 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
         (int)&ProjectileFactory::mSubcomponentMap,
         (int **)&v120);
  v2 = operator new(1u);
  v121 = v2;
  v3 = v122;
  *(_QWORD *)&v121 = *(_QWORD *)v1;
  *(_DWORD *)v1 = v2;
  *(_DWORD *)(v1 + 4) = v3;
  v123 = *(void (**)(void))(v1 + 8);
  v4 = v123;
  *(_DWORD *)(v1 + 8) = sub_1781F1E;
  v124 = *(_DWORD *)(v1 + 12);
  *(_DWORD *)(v1 + 12) = sub_1781EFC;
  if ( v4 )
    v4();
  v5 = (void *)(v120 - 12);
  if ( (int *)(v120 - 12) != &dword_28898C0 )
  {
    v76 = (unsigned int *)(v120 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v119, "stick_in_ground");
  v6 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
         (int **)&v119);
  v7 = operator new(1u);
  v125 = v7;
  v8 = v126;
  *(_QWORD *)&v125 = *(_QWORD *)v6;
  *(_DWORD *)v6 = v7;
  *(_DWORD *)(v6 + 4) = v8;
  v127 = *(void (**)(void))(v6 + 8);
  v9 = v127;
  *(_DWORD *)(v6 + 8) = sub_1781F6E;
  v128 = *(_DWORD *)(v6 + 12);
  *(_DWORD *)(v6 + 12) = sub_1781F4C;
  if ( v9 )
    v9();
  v10 = (void *)(v119 - 12);
  if ( (int *)(v119 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v119 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v118, "arrow_effect");
  v11 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (int)&ProjectileFactory::mSubcomponentMap,
          (int **)&v118);
  v12 = operator new(1u);
  v129 = v12;
  v13 = v130;
  *(_QWORD *)&v129 = *(_QWORD *)v11;
  *(_DWORD *)v11 = v12;
  *(_DWORD *)(v11 + 4) = v13;
  v131 = *(void (**)(void))(v11 + 8);
  v14 = v131;
  *(_DWORD *)(v11 + 8) = sub_1781FDC;
  v132 = *(_DWORD *)(v11 + 12);
  *(_DWORD *)(v11 + 12) = sub_1781F9C;
  if ( v14 )
    v14();
  v15 = (void *)(v118 - 12);
  if ( (int *)(v118 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v118 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v117, "definition_event");
  v16 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (int **)&v117);
  v17 = operator new(1u);
  v133 = v17;
  v18 = v134;
  *(_QWORD *)&v133 = *(_QWORD *)v16;
  *(_DWORD *)v16 = v17;
  *(_DWORD *)(v16 + 4) = v18;
  v135 = *(void (**)(void))(v16 + 8);
  v19 = v135;
  *(_DWORD *)(v16 + 8) = sub_178202C;
  v136 = *(_DWORD *)(v16 + 12);
  *(_DWORD *)(v16 + 12) = sub_178200A;
  if ( v19 )
    v19();
  v20 = (void *)(v117 - 12);
  if ( (int *)(v117 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v117 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  sub_21E94B4((void **)&v116, "thrown_potion_effect");
  v21 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (int **)&v116);
  v22 = operator new(1u);
  v137 = v22;
  v23 = v138;
  *(_QWORD *)&v137 = *(_QWORD *)v21;
  *(_DWORD *)v21 = v22;
  *(_DWORD *)(v21 + 4) = v23;
  v139 = *(void (**)(void))(v21 + 8);
  v24 = v139;
  *(_DWORD *)(v21 + 8) = sub_1782094;
  v140 = *(_DWORD *)(v21 + 12);
  *(_DWORD *)(v21 + 12) = sub_178205C;
  if ( v24 )
    v24();
  v25 = (void *)(v116 - 12);
  if ( (int *)(v116 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v116 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  sub_21E94B4((void **)&v115, "douse_fire");
  v26 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (int **)&v115);
  v27 = operator new(1u);
  v141 = v27;
  v28 = v142;
  *(_QWORD *)&v141 = *(_QWORD *)v26;
  *(_DWORD *)v26 = v27;
  *(_DWORD *)(v26 + 4) = v28;
  v143 = *(void (**)(void))(v26 + 8);
  v29 = v143;
  *(_DWORD *)(v26 + 8) = sub_17820E4;
  v144 = *(_DWORD *)(v26 + 12);
  *(_DWORD *)(v26 + 12) = sub_17820C2;
  if ( v29 )
    v29();
  v30 = (void *)(v115 - 12);
  if ( (int *)(v115 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v115 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  sub_21E94B4((void **)&v114, "spawn_chance");
  v31 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (int **)&v114);
  v32 = operator new(1u);
  v145 = v32;
  v33 = v146;
  *(_QWORD *)&v145 = *(_QWORD *)v31;
  *(_DWORD *)v31 = v32;
  *(_DWORD *)(v31 + 4) = v33;
  v147 = *(void (**)(void))(v31 + 8);
  v34 = v147;
  *(_DWORD *)(v31 + 8) = sub_1782134;
  v148 = *(_DWORD *)(v31 + 12);
  *(_DWORD *)(v31 + 12) = sub_1782112;
  if ( v34 )
    v34();
  v35 = (void *)(v114 - 12);
  if ( (int *)(v114 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v114 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  sub_21E94B4((void **)&v113, "remove_on_hit");
  v36 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (int **)&v113);
  v37 = operator new(1u);
  v149 = v37;
  v38 = v150;
  *(_QWORD *)&v149 = *(_QWORD *)v36;
  *(_DWORD *)v36 = v37;
  *(_DWORD *)(v36 + 4) = v38;
  v151 = *(void (**)(void))(v36 + 8);
  v39 = v151;
  *(_DWORD *)(v36 + 8) = sub_1782184;
  v152 = *(_DWORD *)(v36 + 12);
  *(_DWORD *)(v36 + 12) = sub_1782162;
  if ( v39 )
    v39();
  v40 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v113 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  sub_21E94B4((void **)&v112, "grant_xp");
  v41 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (int **)&v112);
  v42 = operator new(1u);
  v153 = v42;
  v43 = v154;
  *(_QWORD *)&v153 = *(_QWORD *)v41;
  *(_DWORD *)v41 = v42;
  *(_DWORD *)(v41 + 4) = v43;
  v155 = *(void (**)(void))(v41 + 8);
  v44 = v155;
  *(_DWORD *)(v41 + 8) = sub_17821D4;
  v156 = *(_DWORD *)(v41 + 12);
  *(_DWORD *)(v41 + 12) = sub_17821B2;
  if ( v44 )
    v44();
  v45 = (void *)(v112 - 12);
  if ( (int *)(v112 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v112 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  sub_21E94B4((void **)&v111, "teleport_owner");
  v46 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (int **)&v111);
  v47 = operator new(1u);
  v157 = v47;
  v48 = v158;
  *(_QWORD *)&v157 = *(_QWORD *)v46;
  *(_DWORD *)v46 = v47;
  *(_DWORD *)(v46 + 4) = v48;
  v159 = *(void (**)(void))(v46 + 8);
  v49 = v159;
  *(_DWORD *)(v46 + 8) = sub_1782224;
  v160 = *(_DWORD *)(v46 + 12);
  *(_DWORD *)(v46 + 12) = sub_1782202;
  if ( v49 )
    v49();
  v50 = (void *)(v111 - 12);
  if ( (int *)(v111 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v111 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j__ZdlPv_9(v50);
  sub_21E94B4((void **)&v110, "mob_effect");
  v51 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (int **)&v110);
  v52 = operator new(1u);
  v161 = v52;
  v53 = v162;
  *(_QWORD *)&v161 = *(_QWORD *)v51;
  *(_DWORD *)v51 = v52;
  *(_DWORD *)(v51 + 4) = v53;
  v163 = *(void (**)(void))(v51 + 8);
  v54 = v163;
  *(_DWORD *)(v51 + 8) = sub_1782274;
  v164 = *(_DWORD *)(v51 + 12);
  *(_DWORD *)(v51 + 12) = sub_1782252;
  if ( v54 )
    v54();
  v55 = (void *)(v110 - 12);
  if ( (int *)(v110 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v110 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j__ZdlPv_9(v55);
  sub_21E94B4((void **)&v109, "catch_fire");
  v56 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (int **)&v109);
  v57 = operator new(1u);
  v165 = v57;
  v58 = v166;
  *(_QWORD *)&v165 = *(_QWORD *)v56;
  *(_DWORD *)v56 = v57;
  *(_DWORD *)(v56 + 4) = v58;
  v167 = *(void (**)(void))(v56 + 8);
  v59 = v167;
  *(_DWORD *)(v56 + 8) = sub_17822C4;
  v168 = *(_DWORD *)(v56 + 12);
  *(_DWORD *)(v56 + 12) = sub_17822A2;
  if ( v59 )
    v59();
  v60 = (void *)(v109 - 12);
  if ( (int *)(v109 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v109 - 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j__ZdlPv_9(v60);
  sub_21E94B4((void **)&v108, "spawn_aoe_cloud");
  v61 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (int **)&v108);
  v62 = operator new(1u);
  v169 = v62;
  v63 = v170;
  *(_QWORD *)&v169 = *(_QWORD *)v61;
  *(_DWORD *)v61 = v62;
  *(_DWORD *)(v61 + 4) = v63;
  v171 = *(void (**)(void))(v61 + 8);
  v64 = v171;
  *(_DWORD *)(v61 + 8) = sub_1782314;
  v172 = *(_DWORD *)(v61 + 12);
  *(_DWORD *)(v61 + 12) = sub_17822F2;
  if ( v64 )
    v64();
  v65 = (void *)(v108 - 12);
  if ( (int *)(v108 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v108 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j__ZdlPv_9(v65);
  sub_21E94B4((void **)&v107, "particle_on_hit");
  v66 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (int **)&v107);
  v67 = operator new(1u);
  v173 = v67;
  v68 = v174;
  *(_QWORD *)&v173 = *(_QWORD *)v66;
  *(_DWORD *)v66 = v67;
  *(_DWORD *)(v66 + 4) = v68;
  v175 = *(void (**)(void))(v66 + 8);
  v69 = v175;
  *(_DWORD *)(v66 + 8) = sub_1782364;
  v176 = *(_DWORD *)(v66 + 12);
  *(_DWORD *)(v66 + 12) = sub_1782342;
  if ( v69 )
    v69();
  v70 = (void *)(v107 - 12);
  if ( (int *)(v107 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v107 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j__ZdlPv_9(v70);
  sub_21E94B4((void **)&v106, "potion_effect");
  v71 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (int **)&v106);
  v72 = operator new(1u);
  v177 = v72;
  v73 = v178;
  *(_QWORD *)&v177 = *(_QWORD *)v71;
  *(_DWORD *)v71 = v72;
  *(_DWORD *)(v71 + 4) = v73;
  v179 = *(void (**)(void))(v71 + 8);
  v74 = v179;
  *(_DWORD *)(v71 + 8) = sub_17823B4;
  v180 = *(_DWORD *)(v71 + 12);
  *(_DWORD *)(v71 + 12) = sub_1782392;
  if ( v74 )
    v74();
  v75 = (void *)(v106 - 12);
  if ( (int *)(v106 - 12) != &dword_28898C0 )
    v104 = (unsigned int *)(v106 - 4);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j__ZdlPv_9(v75);
}


_DWORD *__fastcall ProjectileFactory::ProjectileFactory(_DWORD *result, int a2)
{
  *result = a2;
  return result;
}


signed int __fastcall ProjectileFactory::shootProjectileFromDefinition(Level **a1, int *a2, Entity *a3, int a4, int a5, int a6)
{
  Entity *v6; // r4@1
  Level **v8; // r9@1
  Level *v9; // r5@3
  int (__fastcall *v10)(Level *, int, int *); // r6@3
  int v11; // r1@3
  int v12; // r0@3
  Entity *v13; // r5@3
  void (__fastcall *v14)(Entity *); // r6@5
  __int64 v15; // r2@5
  ProjectileComponent *v16; // r0@7
  ProjectileComponent *v21; // r0@8
  signed int v22; // r4@10
  ProjectileComponent *v23; // r0@13
  ProjectileComponent *v24; // r0@15
  int v25; // r0@16
  float v29; // r1@16
  __int64 v30; // r2@16
  float v34; // r1@17
  int v37; // r0@19
  __int64 v40; // r2@19
  int v41; // r0@19
  int v43; // r0@19
  ProjectileComponent *v44; // r0@19
  ProjectileComponent *v46; // r0@25
  int v48; // r0@27
  ProjectileComponent *v54; // r8@32
  ProjectileComponent *v55; // r0@32
  int v56; // r10@32
  ProjectileComponent *v57; // r0@32
  ProjectileComponent *v60; // r0@32
  Entity *v62; // r0@32
  Level *v64; // r8@34
  int v65; // r9@34
  ProjectileComponent *v66; // r0@34
  int v67; // r6@34
  void (__fastcall *v68)(Entity *); // r6@35
  __int64 v69; // r2@35
  ShooterComponent *v70; // r0@36
  void (__fastcall *v71)(Entity *, int); // r6@37
  ShooterComponent *v72; // r0@37
  int v73; // r0@37
  void *v74; // r0@41
  void *v75; // r0@42
  void *v76; // r0@43
  unsigned int *v78; // r2@45
  signed int v79; // r1@47
  unsigned int *v80; // r2@49
  signed int v81; // r1@51
  unsigned int *v82; // r2@53
  signed int v83; // r1@55
  char v84; // [sp+14h] [bp-154h]@34
  int v85; // [sp+20h] [bp-148h]@27
  __int64 v86; // [sp+28h] [bp-140h]@27
  int v87; // [sp+30h] [bp-138h]@27
  float v88; // [sp+34h] [bp-134h]@30
  __int64 v89; // [sp+3Ch] [bp-12Ch]@30
  int v90; // [sp+44h] [bp-124h]@30
  __int64 v91; // [sp+48h] [bp-120h]@23
  int v92; // [sp+50h] [bp-118h]@23
  float v93; // [sp+5Ch] [bp-10Ch]@19
  char v96; // [sp+68h] [bp-100h]@19
  float v98; // [sp+74h] [bp-F4h]@19
  float v99; // [sp+80h] [bp-E8h]@19
  char v100; // [sp+8Ch] [bp-DCh]@19
  char v101; // [sp+90h] [bp-D8h]@19
  char v102; // [sp+94h] [bp-D4h]@17
  char v104; // [sp+A0h] [bp-C8h]@16
  float v106; // [sp+ACh] [bp-BCh]@16
  char v107; // [sp+B8h] [bp-B0h]@14
  char v109; // [sp+C4h] [bp-A4h]@9
  char v111; // [sp+D0h] [bp-98h]@8
  int v113; // [sp+DCh] [bp-8Ch]@3
  char v114; // [sp+E0h] [bp-88h]@2
  char v115; // [sp+E8h] [bp-80h]@2
  int v116; // [sp+F4h] [bp-74h]@2
  int v117; // [sp+F8h] [bp-70h]@2
  int v118; // [sp+FCh] [bp-6Ch]@42
  int v119; // [sp+100h] [bp-68h]@41

  v6 = a3;
  _R7 = a4;
  v8 = a1;
  if ( !a3 )
    return 0;
  EntityDefinitionIdentifier::EntityDefinitionIdentifier((int)&v117, a2);
  (*(void (__fastcall **)(char *, Entity *))(*(_DWORD *)v6 + 68))(&v115, v6);
  Entity::getRotation((Entity *)&v114, (int)v6);
  EntityFactory::createSpawnedEntity((Entity **)&v116, (const void **)&v117, (int)v6, (int)&v115, &v114);
  if ( v116 )
  {
    v9 = *v8;
    v10 = *(int (__fastcall **)(Level *, int, int *))(*(_DWORD *)*v8 + 44);
    v11 = Entity::getRegion(v6);
    v12 = v116;
    v116 = 0;
    v113 = v12;
    v13 = (Entity *)v10(v9, v11, &v113);
    if ( v113 )
      (*(void (**)(void))(*(_DWORD *)v113 + 32))();
    v113 = 0;
    v14 = *(void (__fastcall **)(Entity *))(*(_DWORD *)v13 + 348);
    v15 = *(_QWORD *)Entity::getUniqueID(v6);
    v14(v13);
    if ( Entity::getProjectileComponent(v13) )
    {
      if ( !Entity::getTarget(v6) )
      {
        v16 = (ProjectileComponent *)Entity::getProjectileComponent(v13);
        if ( ProjectileComponent::getShootTarget(v16) )
        {
LABEL_33:
          if ( Entity::getProjectileComponent(v13) )
          {
            v64 = *v8;
            v65 = Entity::getRegion(v6);
            v66 = (ProjectileComponent *)Entity::getProjectileComponent(v13);
            v67 = ProjectileComponent::getShootSound(v66);
            Entity::getAttachPos((AABB *)&v84, (int)v6, 2, 0);
            Level::broadcastSoundEvent(v64, v65, v67, (int)&v84, -1, 1, 0, 0);
          }
          v68 = *(void (__fastcall **)(Entity *))(*(_DWORD *)v13 + 348);
          v69 = *(_QWORD *)Entity::getUniqueID(v6);
          v68(v13);
          if ( Entity::getShooterComponent(v6) )
            v70 = (ShooterComponent *)Entity::getShooterComponent(v6);
            if ( ShooterComponent::getAuxValue(v70) != -1 )
            {
              v71 = *(void (__fastcall **)(Entity *, int))(*(_DWORD *)v13 + 676);
              v72 = (ShooterComponent *)Entity::getShooterComponent(v6);
              v73 = ShooterComponent::getAuxValue(v72);
              v71(v13, v73);
            }
          v22 = 1;
          goto LABEL_39;
        }
      }
      (*(void (__fastcall **)(char *, Entity *))(*(_DWORD *)v6 + 68))(&v111, v6);
      __asm { VLDR            S16, [SP,#0x168+var_94] }
      v21 = (ProjectileComponent *)Entity::getProjectileComponent(v13);
      if ( ProjectileComponent::getAnchor(v21) == 1 )
        Entity::getAttachPos((AABB *)&v109, (int)v6, 6, 0);
        __asm { VLDR            S16, [SP,#0x168+var_A0] }
      else
        v23 = (ProjectileComponent *)Entity::getProjectileComponent(v13);
        if ( ProjectileComponent::getAnchor(v23) == 2 )
          Entity::getAttachPos((AABB *)&v107, (int)v6, 1, 0);
          __asm { VLDR            S16, [SP,#0x168+var_AC] }
      v24 = (ProjectileComponent *)Entity::getProjectileComponent(v13);
      if ( ProjectileComponent::getShootTarget(v24) == 1 )
        v25 = Entity::getTarget(v6);
        LODWORD(_R6) = v25;
        _R0 = (*(int (**)(void))(*(_DWORD *)v25 + 52))();
        __asm { VLDR            S20, [R0] }
        (*(void (__fastcall **)(float *, Entity *))(*(_DWORD *)v6 + 68))(&v106, v6);
        __asm
          VLDR            S18, [R6,#0x10C]
          VLDR            S24, [R6,#0x118]
          VLDR            S22, [SP,#0x168+var_BC]
        _R0 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)LODWORD(_R6) + 52))(LODWORD(_R6));
        __asm { VLDR            S26, [R0,#8] }
        (*(void (__fastcall **)(char *, _DWORD))(*(_DWORD *)v6 + 68))(&v104, v6);
          VLDR            S0, [SP,#0x168+var_C0]
          VSUB.F32        S20, S20, S22
          VSUB.F32        S22, S26, S0
          VMUL.F32        S0, S20, S20
          VMUL.F32        S2, S22, S22
          VADD.F32        S0, S2, S0
          VMOV            R0, S0
        HIDWORD(_R6) = mce::Math::sqrt(_R0, v29);
          VMOV.F32        S0, #0.5
          VSUB.F32        S2, S24, S18
          VMUL.F32        S0, S2, S0
          VADD.F32        S24, S0, S18
          VMOV            S18, R7
        (*(void (__fastcall **)(char *, _DWORD))(*(_DWORD *)v6 + 68))(&v102, v6);
        _R0 = a6;
          VMOV            S20, R7
          VLDR            S24, [SP,#0x168+var_D0]
          VMOV            S22, R0
          VADD.F32        S0, S0, S2
        HIDWORD(_R6) = mce::Math::sqrt(_R0, v34);
        _R0 = a5;
          VMOV            S0, R0
          VADD.F32        S24, S24, S0
      __asm
        VLDR            S0, =1.0e-7
        VCMPE.F32       S18, S0
        VMRS            APSR_nzcv, FPSCR
      if ( !(_NF ^ _VF) )
          VMOV            R0, S22
          VMOV            R1, S20
        v37 = mce::Math::atan2(_R0, v30);
        mce::Degree::Degree((int)&v101, v37);
        _R0 = mce::Degree::asFloat((mce::Degree *)&v101);
          VSUB.F32        S24, S24, S16
          VLDR            S26, [R0]
          VMOV            R1, S24
        v41 = mce::Math::atan2(__PAIR__(HIDWORD(_R6), _R1), v40);
        mce::Degree::Degree((int)&v100, v41);
        _R0 = mce::Degree::asFloat((mce::Degree *)&v100);
        __asm { VLDR            S28, [R0] }
        (*(void (__fastcall **)(float *, _DWORD))(*(_DWORD *)v6 + 68))(&v98, v6);
        __asm { VLDR            S30, [SP,#0x168+var_F4] }
        (*(void (__fastcall **)(char *, _DWORD))(*(_DWORD *)v6 + 68))(&v96, v6);
        __asm { VLDR            S17, [SP,#0x168+var_F8] }
        v43 = Entity::getProjectileComponent(v13);
        ProjectileComponent::getOffset((ProjectileComponent *)&v93, v43);
          VLDR            S0, =-90.0
          VNEG.F32        S2, S28
          VDIV.F32        S4, S20, S18
          VADD.F32        S26, S26, S0
          VLDR            S6, [SP,#0x168+var_10C]
          VDIV.F32        S0, S22, S18
          VADD.F32        S4, S30, S4
          VLDR            S8, [SP,#0x168+var_108]
          VADD.F32        S0, S17, S0
          VLDR            S10, [SP,#0x168+var_104]
          VSTR            S26, [SP,#0x168+var_114]
          VSTR            S2, [SP,#0x168+var_110]
          VADD.F32        S4, S4, S6
          VADD.F32        S6, S8, S16
          VADD.F32        S0, S0, S10
          VSTR            S4, [SP,#0x168+var_E8]
          VSTR            S6, [SP,#0x168+var_E4]
          VSTR            S0, [SP,#0x168+var_E0]
        Entity::moveTo((int)v13, (int)&v99);
        v44 = (ProjectileComponent *)Entity::getProjectileComponent(v13);
        _R0 = ProjectileComponent::getGravity(v44);
          VMUL.F32        S0, S22, S22
          VMUL.F32        S2, S20, S20
          VMUL.F32        S4, S24, S24
          VMOV            S16, R0
          VLDR            S2, =0.0001
          VADD.F32        S0, S0, S4
          VSQRT.F32       S0, S0
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          v92 = dword_2822498;
          v91 = *(_QWORD *)&Vec3::ZERO;
        else
          __asm
            VDIV.F32        S2, S20, S0
            VDIV.F32        S4, S24, S0
            VDIV.F32        S0, S22, S0
            VSTR            S2, [SP,#0x168+var_120]
            VSTR            S4, [SP,#0x168+var_120+4]
            VSTR            S0, [SP,#0x168+var_118]
          VCMPE.F32       S16, #0.0
        if ( !_ZF )
          v46 = (ProjectileComponent *)Entity::getProjectileComponent(v13);
          LODWORD(_R0) = ProjectileComponent::getThrowPower(v46);
            VMOV.F32        S4, #-2.0
            VMOV            S2, R0
            VMUL.F32        S0, S16, S18
            VMUL.F32        S20, S2, S2
            VMUL.F32        S2, S24, S4
            VMUL.F32        S4, S0, S18
            VMUL.F32        S2, S2, S20
            VSUB.F32        S2, S2, S4
            VMUL.F32        S4, S20, S20
            VMUL.F32        S2, S2, S16
            VADD.F32        S2, S4, S2
            VCMPE.F32       S2, #0.0
            VMRS            APSR_nzcv, FPSCR
          if ( _NF ^ _VF )
            v85 = -1036779520;
            __asm { VSTR            S26, [SP,#0x168+var_144] }
            Vec3::directionFromRotation((int)&v86, COERCE_FLOAT(&v85));
            v91 = v86;
            v48 = v87;
          else
            __asm
              VSQRT.F32       S16, S2
              VADD.F32        S2, S16, S20
              VCVT.F64.F32    D0, S0
              VMOV            R6, R7, D0
              VCVT.F64.F32    D1, S2
              VMOV            R0, R1, D1
            _R0 = COERCE_UNSIGNED_INT64(atan2(_R0, _R6));
              VSUB.F32        S0, S20, S16
              VMOV            D9, R0, R1
            _R3 = &mce::Math::RADDEG;
              VMOV            R2, R12, D0
              VLDR            S0, [R3]
              VCVT.F64.F32    D8, S0
            _R0 = COERCE_UNSIGNED_INT64(atan2(COERCE_DOUBLE(__PAIR__(_R12, _R2)), _R6));
              VMOV            D0, R0, R1
              VMUL.F64        D1, D8, D9
              VMUL.F64        D0, D0, D8
              VCVT.F32.F64    S2, D1
              VCVT.F32.F64    S0, D0
              VCMPE.F32       S2, S0
              VMRS            APSR_nzcv, FPSCR
            if ( _NF ^ _VF )
              __asm { VMOVLT.F32      S0, S2 }
              VNEG.F32        S0, S0
              VSTR            S0, [SP,#0x168+var_134]
              VSTR            S26, [SP,#0x168+var_130]
            Vec3::directionFromRotation((int)&v89, COERCE_FLOAT(&v88));
            v91 = v89;
            v48 = v90;
          v92 = v48;
        v54 = (ProjectileComponent *)Entity::getProjectileComponent(v13);
        v55 = (ProjectileComponent *)Entity::getProjectileComponent(v13);
        v56 = ProjectileComponent::getThrowPower(v55);
        v57 = (ProjectileComponent *)Entity::getProjectileComponent(v13);
        _R6 = ProjectileComponent::getUncertaintyBase(v57);
        _R0 = Level::getDifficulty(*v8);
          VCVT.F32.S32    S16, S0
        v60 = (ProjectileComponent *)Entity::getProjectileComponent(v13);
        _R7 = ProjectileComponent::getUncertaintyMultiplier(v60);
        v62 = (Entity *)Entity::getTarget(v6);
          VMOV            S2, R7
          VMOV            S0, R6
          VMUL.F32        S2, S2, S16
          VSUB.F32        S0, S0, S2
          VMOV            R3, S0
        ProjectileComponent::shoot(v54, (const Vec3 *)&v91, *(float *)&v56, _R3, (const Vec3 *)&Vec3::ZERO, v62);
        goto LABEL_33;
      v22 = 0;
    }
    else
LABEL_39:
    if ( v116 )
      (*(void (**)(void))(*(_DWORD *)v116 + 32))();
    goto LABEL_41;
  }
  v22 = 0;
LABEL_41:
  v74 = (void *)(v119 - 12);
  if ( (int *)(v119 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v119 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v74);
  v75 = (void *)(v118 - 12);
  if ( (int *)(v118 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v118 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j__ZdlPv_9(v75);
  v76 = (void *)(v117 - 12);
  if ( (int *)(v117 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v117 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v76);
  return v22;
}


int __fastcall ProjectileFactory::createSubcomponent(int **a1, int a2, int **a3)
{
  int **v3; // r4@1
  int v4; // r5@1
  int result; // r0@1
  int *v6; // r6@3
  int v7; // r0@3
  int *v8; // [sp+4h] [bp-14h]@3

  v3 = a1;
  v4 = a2;
  *a1 = 0;
  result = std::_Hashtable<std::string,std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>,std::allocator<std::pair<std::string const,std::function<std::unique_ptr<OnHitSubcomponent,std::default_delete<OnHitSubcomponent>> ()(void)>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
             (unsigned __int64 *)&ProjectileFactory::mSubcomponentMap,
             a3);
  if ( result )
  {
    if ( !*(_DWORD *)(result + 16) )
      sub_21E5F48();
    (*(void (__fastcall **)(int **, int))(result + 20))(&v8, result + 8);
    v6 = v8;
    *v3 = v8;
    v7 = *v6;
    v8 = 0;
    result = (*(int (__fastcall **)(int *, int))(v7 + 8))(v6, v4);
  }
  return result;
}
