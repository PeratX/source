

int __fastcall FilterList::findFilterDefinition(int **a1)
{
  int result; // r0@1

  result = std::_Hashtable<std::string,std::pair<std::string const,FilterTest::Definition>,std::allocator<std::pair<std::string const,FilterTest::Definition>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
             (unsigned __int64 *)&sFilterMap,
             a1);
  if ( result )
    result += 8;
  return result;
}


void __fastcall FilterList::generateDocumentation(FilterList *this, DocumentationSystem *a2)
{
  int v2; // r5@1
  void **v3; // r9@2
  const void **v4; // r8@2
  char *v5; // r7@2
  void *v6; // r10@2
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  unsigned int *v9; // r2@7
  signed int v10; // r1@9
  unsigned int *v11; // r2@11
  signed int v12; // r1@13
  unsigned int *v13; // r2@15
  signed int v14; // r1@17
  int *v15; // r4@28
  signed int v16; // r1@35
  signed int v17; // r1@39
  signed int v18; // r1@43
  signed int v19; // r1@47
  unsigned int *v20; // r2@51
  signed int v21; // r1@53
  unsigned int *v22; // r2@55
  signed int v23; // r1@57
  signed int v24; // r1@59
  signed int v25; // r1@63
  unsigned int *v26; // r2@67
  signed int v27; // r1@69
  unsigned int *v28; // r2@71
  signed int v29; // r1@73
  unsigned int *v30; // r2@75
  signed int v31; // r1@77
  unsigned int *v32; // r2@79
  signed int v33; // r1@81
  unsigned int *v34; // r2@83
  signed int v35; // r1@85
  unsigned int *v36; // r2@87
  signed int v37; // r1@89
  int v38; // r11@123
  const void **v39; // r5@123
  char *v40; // r6@123
  void *v41; // r7@123
  void **v42; // r0@123
  char *v43; // r0@123
  void **v44; // r0@124
  int v45; // r5@124
  char *v46; // r0@124
  const void **v47; // r6@126
  void *v48; // r0@126
  const void **v49; // r0@127
  char *v50; // r0@127
  char *v51; // r0@128
  const void **v52; // r0@130
  char *v53; // r0@130
  char *v54; // r0@131
  void **v55; // r6@132
  const void **v56; // r4@133
  void *v57; // r0@133
  const void **v58; // r0@134
  char *v59; // r0@134
  char *v60; // r0@135
  const void **v61; // r0@137
  char *v62; // r0@137
  char *v63; // r0@138
  const void **v64; // r6@140
  void *v65; // r0@140
  const void **v66; // r0@141
  char *v67; // r0@141
  char *v68; // r0@142
  const void **v69; // r0@144
  char *v70; // r0@144
  char *v71; // r0@145
  const void **v72; // r4@147
  void *v73; // r0@147
  const void **v74; // r0@148
  char *v75; // r0@148
  char *v76; // r0@149
  const void **v77; // r0@151
  char *v78; // r0@151
  char *v79; // r0@152
  size_t v80; // r2@153
  void *v81; // r0@155
  void *v82; // r0@156
  unsigned int *v83; // r2@157
  void *v84; // r6@158
  signed int v85; // r1@159
  unsigned int *v86; // r2@166
  signed int v87; // r1@168
  unsigned int *v88; // r2@170
  signed int v89; // r1@172
  unsigned int *v90; // r2@174
  signed int v91; // r1@176
  unsigned int *v92; // r2@182
  signed int v93; // r1@184
  unsigned int *v94; // r2@186
  signed int v95; // r1@188
  unsigned int *v96; // r2@194
  signed int v97; // r1@196
  unsigned int *v98; // r2@198
  signed int v99; // r1@200
  unsigned int *v100; // r2@202
  signed int v101; // r1@204
  unsigned int *v102; // r2@206
  signed int v103; // r1@208
  unsigned int *v104; // r2@210
  unsigned int *v105; // r2@214
  unsigned int *v106; // r2@218
  unsigned int *v107; // r2@222
  unsigned int *v108; // r2@226
  unsigned int *v109; // r2@230
  char *v110; // r0@265
  char *v111; // r0@266
  char *v112; // r0@267
  void *v113; // r0@268
  int *v114; // [sp+5Ch] [bp-C4h]@2
  char *v115; // [sp+60h] [bp-C0h]@1
  int v116; // [sp+64h] [bp-BCh]@123
  int v117; // [sp+6Ch] [bp-B4h]@161
  int v118; // [sp+74h] [bp-ACh]@156
  int v119; // [sp+7Ch] [bp-A4h]@155
  char *v120; // [sp+80h] [bp-A0h]@87
  char *v121; // [sp+84h] [bp-9Ch]@83
  char *v122; // [sp+88h] [bp-98h]@148
  char *v123; // [sp+8Ch] [bp-94h]@148
  int v124; // [sp+94h] [bp-8Ch]@147
  char *v125; // [sp+98h] [bp-88h]@79
  char *v126; // [sp+9Ch] [bp-84h]@75
  char *v127; // [sp+A0h] [bp-80h]@140
  char *v128; // [sp+A4h] [bp-7Ch]@141
  int v129; // [sp+ACh] [bp-74h]@132
  char *v130; // [sp+B0h] [bp-70h]@71
  char *v131; // [sp+B4h] [bp-6Ch]@67
  char *v132; // [sp+B8h] [bp-68h]@133
  char *v133; // [sp+BCh] [bp-64h]@134
  int v134; // [sp+C4h] [bp-5Ch]@133
  char *v135; // [sp+C8h] [bp-58h]@55
  char *v136; // [sp+CCh] [bp-54h]@51
  char *v137; // [sp+D0h] [bp-50h]@126
  char *v138; // [sp+D4h] [bp-4Ch]@127
  int v139; // [sp+DCh] [bp-44h]@126
  _DWORD *v140; // [sp+E0h] [bp-40h]@3
  char *v141; // [sp+E4h] [bp-3Ch]@124
  void *s1; // [sp+E8h] [bp-38h]@7
  char *v143; // [sp+ECh] [bp-34h]@2
  void *s2; // [sp+F0h] [bp-30h]@11
  int v145; // [sp+F4h] [bp-2Ch]@2

  v115 = DocumentationSystem::getPage((int)this, (const void **)&DocumentationSystem::NODE_FILTERS);
  v115[4] = 0;
  sub_21E8190(
    (void **)v115 + 4,
    "Filters allow data objects to specify test critera which allows their use.",
    (_BYTE *)0x4A);
  sub_21E7408(
    (const void **)v115 + 4,
    "\n\n: For example, a model that includes a filter will only be used when the filter criteria is true.",
    0x63u);
  sub_21E7408((const void **)v115 + 4, "\n\n", 2u);
  sub_21E7408((const void **)v115 + 4, "\n\n: A typical filter consists of four paramters:", 0x30u);
  sub_21E7408((const void **)v115 + 4, "\n\n: name: the name of the test to apply.", 0x28u);
    "\n"
    ": domain: the domain the test should be performed in. An armor slot, for example. This parameter is only used by a few tests.",
    0x7Fu);
    "\n\n: operator: the comparison to apply with the value, such as 'equal' or 'greater'.",
    0x53u);
  sub_21E7408((const void **)v115 + 4, "\n\n: value: the value being compared with the test.", 0x32u);
  sub_21E7408((const void **)v115 + 4, "\n\n: A typical filter looks like the following:", 0x2Eu);
    "\n\n: { \"test\" : \"moon_intensity\", \"subject\" : \"self\", \"operator\" : \"greater\", \"value\" : \"0.5\" } ",
    0x5Fu);
    ": Which results in the calling entity (self) calculating the moon_intensity at its location and returning true if th"
    "e result is greater than 0.5.",
    0x93u);
    "\n\n: Tests can be combined into groups using the collections 'all_of' and 'any_of'.",
    0x52u);
    "\n\n: All tests in an 'all_of' group must pass in order for the group to pass.",
    0x4Cu);
    "\n\n: One or more tests in an 'any_of' group must pass in order for the group to pass.",
    0x54u);
  sub_21E7408((const void **)v115 + 4, "\n\n: Example:", 0xCu);
  sub_21E7408((const void **)v115 + 4, "\n\n: \"all_of\" : [", 0x10u);
    ":   { \"test\" : \"moon_intensity\", \"subject\" : \"self\", \"operator\" : \"greater\", \"value\" : \"0.5\" }, ",
    0x62u);
    "\n\n:   { \"test\" : \"in_water\", \"subject\" : \"target\", \"operator\" : \"equal\", \"value\" : \"true\" } ",
    0x5Cu);
  sub_21E7408((const void **)v115 + 4, "\n\n: ]", 5u);
    ": This filter group will pass only when the moon_intensity is greater than 0.5 AND the caller's target entity is standing in water.",
    0x85u);
  v2 = dword_2803388;
  if ( dword_2803388 )
  {
    v3 = (void **)&v145;
    v4 = (const void **)&v143;
    v5 = "Type";
    v114 = &dword_28898C0;
    v6 = &unk_28898CC;
    while ( 1 )
    {
      v38 = v2;
      v39 = (const void **)(v2 + 4);
      v40 = DocumentationSystem::Node::addNode((int)v115, v39, (int *)(v38 + 12));
      DocumentationSystem::Node::getName(v3, (int)v40);
      v40[4] = 1;
      sub_21E8190((void **)v40 + 6, v5, (_BYTE *)4);
      sub_21E8190((void **)v40 + 7, "Name", (_BYTE *)4);
      sub_21E8190((void **)v40 + 8, "Default", (_BYTE *)7);
      sub_21E8190((void **)v40 + 9, "Description", (_BYTE *)0xB);
      v41 = v6;
      v116 = (int)v40;
      v143 = (char *)v6;
      sub_21E6FCC(v4, *((_DWORD *)*v39 - 3) + 11);
      sub_21E7408(v4, "{ \"test\": \"", 0xBu);
      sub_21E72F0(v4, v39);
      v42 = (void **)sub_21E7408(v4, "\"", 1u);
      s2 = *v42;
      *v42 = v6;
      v43 = v143 - 12;
      if ( (int *)(v143 - 12) != v114 )
      {
        v86 = (unsigned int *)(v143 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v87 = __ldrex(v86);
          while ( __strex(v87 - 1, v86) );
        }
        else
          v87 = (*v86)--;
        if ( v87 <= 0 )
          j_j_j_j__ZdlPv_9(v43);
      }
      v141 = (char *)v6;
      sub_21E6FCC((const void **)&v141, *((_DWORD *)*v39 - 3) + 11);
      sub_21E7408((const void **)&v141, "{ \"test\": \"", 0xBu);
      sub_21E72F0((const void **)&v141, v39);
      v44 = (void **)sub_21E7408((const void **)&v141, "\"", 1u);
      s1 = *v44;
      *v44 = v6;
      v45 = v38;
      v46 = v141 - 12;
      if ( (int *)(v141 - 12) != v114 )
        v88 = (unsigned int *)(v141 - 4);
            v89 = __ldrex(v88);
          while ( __strex(v89 - 1, v88) );
          v45 = v38;
          v89 = (*v88)--;
        if ( v89 <= 0 )
          j_j_j_j__ZdlPv_9(v46);
      v140 = v6;
      if ( *(_DWORD *)(v45 + 16) )
        sub_21E94B4((void **)&v139, "subject");
        _documentParameter((int)v40, (const void **)&v139, *(_DWORD **)(v45 + 16), (int *)&v140);
        v47 = (const void **)&v137;
        v48 = (void *)(v139 - 12);
        if ( (int *)(v139 - 12) != v114 )
          v90 = (unsigned int *)(v139 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v91 = __ldrex(v90);
            while ( __strex(v91 - 1, v90) );
            v47 = (const void **)&v137;
          }
          else
            v91 = (*v90)--;
          if ( v91 <= 0 )
            j_j_j_j__ZdlPv_9(v48);
        v137 = (char *)v6;
        sub_21E6FCC(v47, *(v140 - 3) + 14);
        sub_21E7408(v47, ", \"subject\": \"", 0xEu);
        sub_21E72F0(v47, (const void **)&v140);
        v49 = sub_21E7408(v47, "\"", 1u);
        v138 = (char *)*v49;
        *v49 = v6;
        sub_21E72F0((const void **)&s2, (const void **)&v138);
        v50 = v138 - 12;
        if ( (int *)(v138 - 12) != v114 )
          v92 = (unsigned int *)(v138 - 4);
              v93 = __ldrex(v92);
            while ( __strex(v93 - 1, v92) );
            v93 = (*v92)--;
          if ( v93 <= 0 )
            j_j_j_j__ZdlPv_9(v50);
        v51 = v137 - 12;
        if ( (int *)(v137 - 12) != v114 )
          v94 = (unsigned int *)(v137 - 4);
              v95 = __ldrex(v94);
            while ( __strex(v95 - 1, v94) );
            v95 = (*v94)--;
          if ( v95 <= 0 )
            j_j_j_j__ZdlPv_9(v51);
        if ( !*(_DWORD *)(*(_DWORD *)(v45 + 16) + 4) )
          v135 = (char *)v6;
          sub_21E6FCC((const void **)&v135, *(v140 - 3) + 14);
          sub_21E7408((const void **)&v135, ", \"subject\": \"", 0xEu);
          sub_21E72F0((const void **)&v135, (const void **)&v140);
          v52 = sub_21E7408((const void **)&v135, "\"", 1u);
          v136 = (char *)*v52;
          *v52 = v6;
          sub_21E72F0((const void **)&s1, (const void **)&v136);
          v53 = v136 - 12;
          if ( (int *)(v136 - 12) != v114 )
            v20 = (unsigned int *)(v136 - 4);
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
              j_j_j_j__ZdlPv_9(v53);
          v54 = v135 - 12;
          if ( (int *)(v135 - 12) != v114 )
            v22 = (unsigned int *)(v135 - 4);
                v23 = __ldrex(v22);
              while ( __strex(v23 - 1, v22) );
              v23 = (*v22)--;
            if ( v23 <= 0 )
              j_j_j_j__ZdlPv_9(v54);
      v55 = (void **)&v129;
      if ( *(_DWORD *)(v45 + 20) )
        sub_21E94B4((void **)&v134, "domain");
        _documentParameter(v116, (const void **)&v134, *(_DWORD **)(v45 + 20), (int *)&v140);
        v56 = (const void **)&v132;
        v57 = (void *)(v134 - 12);
        if ( (int *)(v134 - 12) != v114 )
          v96 = (unsigned int *)(v134 - 4);
              v97 = __ldrex(v96);
            while ( __strex(v97 - 1, v96) );
            v55 = (void **)&v129;
            v56 = (const void **)&v132;
            v97 = (*v96)--;
          if ( v97 <= 0 )
            j_j_j_j__ZdlPv_9(v57);
        v132 = (char *)v6;
        sub_21E6FCC(v56, *(v140 - 3) + 13);
        sub_21E7408(v56, ", \"domain\": \"", 0xDu);
        sub_21E72F0(v56, (const void **)&v140);
        v58 = sub_21E7408(v56, "\"", 1u);
        v133 = (char *)*v58;
        *v58 = v6;
        sub_21E72F0((const void **)&s2, (const void **)&v133);
        v59 = v133 - 12;
        if ( (int *)(v133 - 12) != v114 )
          v98 = (unsigned int *)(v133 - 4);
              v99 = __ldrex(v98);
            while ( __strex(v99 - 1, v98) );
            v99 = (*v98)--;
          if ( v99 <= 0 )
            j_j_j_j__ZdlPv_9(v59);
        v60 = v132 - 12;
        if ( (int *)(v132 - 12) != v114 )
          v100 = (unsigned int *)(v132 - 4);
              v101 = __ldrex(v100);
            while ( __strex(v101 - 1, v100) );
            v101 = (*v100)--;
          if ( v101 <= 0 )
            j_j_j_j__ZdlPv_9(v60);
        if ( !*(_DWORD *)(*(_DWORD *)(v45 + 20) + 4) )
          v130 = (char *)v6;
          sub_21E6FCC((const void **)&v130, *(v140 - 3) + 13);
          sub_21E7408((const void **)&v130, ", \"domain\": \"", 0xDu);
          sub_21E72F0((const void **)&v130, (const void **)&v140);
          v61 = sub_21E7408((const void **)&v130, "\"", 1u);
          v131 = (char *)*v61;
          *v61 = v6;
          sub_21E72F0((const void **)&s1, (const void **)&v131);
          v62 = v131 - 12;
          if ( (int *)(v131 - 12) != v114 )
            v26 = (unsigned int *)(v131 - 4);
                v27 = __ldrex(v26);
              while ( __strex(v27 - 1, v26) );
              v27 = (*v26)--;
            if ( v27 <= 0 )
              j_j_j_j__ZdlPv_9(v62);
          v63 = v130 - 12;
          if ( (int *)(v130 - 12) != v114 )
            v28 = (unsigned int *)(v130 - 4);
                v29 = __ldrex(v28);
              while ( __strex(v29 - 1, v28) );
              v29 = (*v28)--;
            if ( v29 <= 0 )
              j_j_j_j__ZdlPv_9(v63);
      if ( *(_DWORD *)(v45 + 24) )
        sub_21E94B4(v55, "operator");
        _documentParameter(v116, (const void **)v55, *(_DWORD **)(v45 + 24), (int *)&v140);
        v64 = (const void **)&v127;
        v65 = (void *)(v129 - 12);
        if ( (int *)(v129 - 12) != v114 )
          v102 = (unsigned int *)(v129 - 4);
              v103 = __ldrex(v102);
            while ( __strex(v103 - 1, v102) );
            v64 = (const void **)&v127;
            v103 = (*v102)--;
          if ( v103 <= 0 )
            j_j_j_j__ZdlPv_9(v65);
        v127 = (char *)v6;
        sub_21E6FCC(v64, *(v140 - 3) + 15);
        sub_21E7408(v64, ", \"operator\": \"", 0xFu);
        sub_21E72F0(v64, (const void **)&v140);
        v66 = sub_21E7408(v64, "\"", 1u);
        v128 = (char *)*v66;
        *v66 = v6;
        sub_21E72F0((const void **)&s2, (const void **)&v128);
        v67 = v128 - 12;
        if ( (int *)(v128 - 12) != v114 )
          v104 = (unsigned int *)(v128 - 4);
              v16 = __ldrex(v104);
            while ( __strex(v16 - 1, v104) );
            v16 = (*v104)--;
          if ( v16 <= 0 )
            j_j_j_j__ZdlPv_9(v67);
        v68 = v127 - 12;
        if ( (int *)(v127 - 12) != v114 )
          v105 = (unsigned int *)(v127 - 4);
              v17 = __ldrex(v105);
            while ( __strex(v17 - 1, v105) );
            v17 = (*v105)--;
          if ( v17 <= 0 )
            j_j_j_j__ZdlPv_9(v68);
        if ( !*(_DWORD *)(*(_DWORD *)(v45 + 24) + 4) )
          v125 = (char *)v6;
          sub_21E6FCC((const void **)&v125, *(v140 - 3) + 15);
          sub_21E7408((const void **)&v125, ", \"operator\": \"", 0xFu);
          sub_21E72F0((const void **)&v125, (const void **)&v140);
          v69 = sub_21E7408((const void **)&v125, "\"", 1u);
          v126 = (char *)*v69;
          *v69 = v6;
          sub_21E72F0((const void **)&s1, (const void **)&v126);
          v70 = v126 - 12;
          if ( (int *)(v126 - 12) != v114 )
            v30 = (unsigned int *)(v126 - 4);
                v31 = __ldrex(v30);
              while ( __strex(v31 - 1, v30) );
              v31 = (*v30)--;
            if ( v31 <= 0 )
              j_j_j_j__ZdlPv_9(v70);
          v71 = v125 - 12;
          if ( (int *)(v125 - 12) != v114 )
            v32 = (unsigned int *)(v125 - 4);
                v33 = __ldrex(v32);
              while ( __strex(v33 - 1, v32) );
              v33 = (*v32)--;
            if ( v33 <= 0 )
              j_j_j_j__ZdlPv_9(v71);
      if ( *(_DWORD *)(v45 + 28) )
        sub_21E94B4((void **)&v124, "value");
        v72 = (const void **)&v140;
        _documentParameter(v116, (const void **)&v124, *(_DWORD **)(v45 + 28), (int *)&v140);
        v73 = (void *)(v124 - 12);
        if ( (int *)(v124 - 12) != v114 )
          v107 = (unsigned int *)(v124 - 4);
              v19 = __ldrex(v107);
            while ( __strex(v19 - 1, v107) );
            v72 = (const void **)&v140;
            v19 = (*v107)--;
          if ( v19 <= 0 )
            j_j_j_j__ZdlPv_9(v73);
        v122 = (char *)v6;
        sub_21E6FCC((const void **)&v122, *(v140 - 3) + 12);
        sub_21E7408((const void **)&v122, ", \"value\": \"", 0xCu);
        sub_21E72F0((const void **)&v122, v72);
        v74 = sub_21E7408((const void **)&v122, "\"", 1u);
        v123 = (char *)*v74;
        *v74 = v6;
        sub_21E72F0((const void **)&s2, (const void **)&v123);
        v75 = v123 - 12;
        if ( (int *)(v123 - 12) != v114 )
          v108 = (unsigned int *)(v123 - 4);
              v24 = __ldrex(v108);
            while ( __strex(v24 - 1, v108) );
            v24 = (*v108)--;
          if ( v24 <= 0 )
            j_j_j_j__ZdlPv_9(v75);
        v76 = v122 - 12;
        if ( (int *)(v122 - 12) != v114 )
          v109 = (unsigned int *)(v122 - 4);
              v25 = __ldrex(v109);
            while ( __strex(v25 - 1, v109) );
            v25 = (*v109)--;
          if ( v25 <= 0 )
            j_j_j_j__ZdlPv_9(v76);
        if ( !*(_DWORD *)(*(_DWORD *)(v45 + 28) + 4) )
          v120 = (char *)v6;
          sub_21E6FCC((const void **)&v120, *(v140 - 3) + 12);
          sub_21E7408((const void **)&v120, ", \"value\": \"", 0xCu);
          sub_21E72F0((const void **)&v120, (const void **)&v140);
          v77 = sub_21E7408((const void **)&v120, "\"", 1u);
          v121 = (char *)*v77;
          *v77 = v6;
          sub_21E72F0((const void **)&s1, (const void **)&v121);
          v78 = v121 - 12;
          if ( (int *)(v121 - 12) != v114 )
            v34 = (unsigned int *)(v121 - 4);
                v35 = __ldrex(v34);
              while ( __strex(v35 - 1, v34) );
              v35 = (*v34)--;
            if ( v35 <= 0 )
              j_j_j_j__ZdlPv_9(v78);
          v79 = v120 - 12;
          if ( (int *)(v120 - 12) != v114 )
            v36 = (unsigned int *)(v120 - 4);
                v37 = __ldrex(v36);
              while ( __strex(v37 - 1, v36) );
              v37 = (*v36)--;
            if ( v37 <= 0 )
              j_j_j_j__ZdlPv_9(v79);
      sub_21E7408((const void **)&s1, " }", 2u);
      sub_21E7408((const void **)&s2, " }", 2u);
      *(_BYTE *)(v116 + 5) = 0;
      sub_21E8190((void **)(v116 + 40), "Examples", (_BYTE *)8);
      v80 = *((_DWORD *)s1 - 3);
      if ( v80 != *((_DWORD *)s2 - 3) || memcmp(s1, s2, v80) )
        break;
      sub_21E94B4((void **)&v117, "Sample json");
      DocumentationSystem::Node::addExample(v116, (const void **)&v117, (int *)&s2);
      v82 = (void *)(v117 - 12);
      if ( (int *)(v117 - 12) != v114 )
        v83 = (unsigned int *)(v117 - 4);
          v84 = v6;
            v85 = __ldrex(v83);
          while ( __strex(v85 - 1, v83) );
LABEL_165:
          v41 = v84;
LABEL_263:
          if ( v85 <= 0 )
            j_j_j_j__ZdlPv_9(v82);
          goto LABEL_265;
LABEL_262:
        v85 = (*v83)--;
        goto LABEL_263;
LABEL_265:
      v110 = (char *)(v140 - 3);
      if ( v140 - 3 != v114 )
        v7 = v140 - 1;
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v110);
      v111 = (char *)s1 - 12;
      if ( (int *)((char *)s1 - 12) != v114 )
        v9 = (unsigned int *)((char *)s1 - 4);
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j__ZdlPv_9(v111);
      v15 = v114;
      v112 = (char *)s2 - 12;
      if ( (int *)((char *)s2 - 12) != v114 )
        v11 = (unsigned int *)((char *)s2 - 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        v15 = v114;
        if ( v12 <= 0 )
          j_j_j_j__ZdlPv_9(v112);
      v4 = (const void **)&v143;
      v6 = v41;
      v114 = v15;
      v113 = (void *)(v145 - 12);
      if ( (int *)(v145 - 12) != v15 )
        v13 = (unsigned int *)(v145 - 4);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j__ZdlPv_9(v113);
      v3 = (void **)&v145;
      v2 = *(_DWORD *)v45;
      v5 = "Type";
      if ( !v2 )
        return;
    }
    sub_21E94B4((void **)&v119, "Full..");
    DocumentationSystem::Node::addExample(v116, (const void **)&v119, (int *)&s2);
    v81 = (void *)(v119 - 12);
    if ( (int *)(v119 - 12) != v114 )
      v106 = (unsigned int *)(v119 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v18 = __ldrex(v106);
        while ( __strex(v18 - 1, v106) );
      else
        v18 = (*v106)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v81);
    sub_21E94B4((void **)&v118, "Short (using Defaults)..");
    DocumentationSystem::Node::addExample(v116, (const void **)&v118, (int *)&s1);
    v82 = (void *)(v118 - 12);
    if ( (int *)(v118 - 12) == v114 )
      goto LABEL_265;
    v83 = (unsigned int *)(v118 - 4);
    if ( &pthread_create )
      v84 = v6;
      __dmb();
      do
        v85 = __ldrex(v83);
      while ( __strex(v85 - 1, v83) );
      goto LABEL_165;
    goto LABEL_262;
  }
}


void __fastcall FilterList::initialize(FilterList *this)
{
  void *v1; // r4@1
  void *v2; // r5@2
  void *v3; // r0@5
  void *v4; // r0@6
  void *v5; // r0@9
  void *v6; // r0@10
  void *v7; // r0@13
  void *v8; // r0@14
  void *v9; // r0@17
  void *v10; // r0@18
  void *v11; // r0@21
  void *v12; // r0@22
  void *v13; // r0@25
  void *v14; // r0@26
  void *v15; // r0@29
  void *v16; // r0@30
  void *v17; // r0@33
  void *v18; // r0@34
  void *v19; // r0@37
  void *v20; // r0@38
  void *v21; // r0@41
  void *v22; // r0@42
  void *v23; // r0@45
  void *v24; // r0@46
  void *v25; // r0@49
  void *v26; // r0@50
  void *v27; // r0@53
  void *v28; // r0@54
  void *v29; // r0@57
  void *v30; // r0@58
  void *v31; // r0@61
  void *v32; // r0@62
  void *v33; // r0@65
  void *v34; // r0@66
  void *v35; // r0@69
  void *v36; // r0@70
  void *v37; // r0@73
  void *v38; // r0@74
  void *v39; // r0@77
  void *v40; // r0@78
  void *v41; // r0@81
  void *v42; // r0@82
  void *v43; // r0@85
  void *v44; // r0@86
  void *v45; // r0@89
  void *v46; // r0@90
  void *v47; // r0@93
  void *v48; // r0@94
  void *v49; // r0@97
  void *v50; // r0@98
  void *v51; // r0@101
  void *v52; // r0@102
  void *v53; // r0@105
  void *v54; // r0@106
  void *v55; // r0@109
  void *v56; // r0@110
  void *v57; // r0@113
  void *v58; // r0@114
  void *v59; // r0@117
  void *v60; // r0@118
  void *v61; // r0@121
  void *v62; // r0@122
  void *v63; // r0@125
  void *v64; // r0@126
  void *v65; // r0@129
  void *v66; // r0@130
  void *v67; // r0@133
  void *v68; // r0@134
  void *v69; // r0@137
  void *v70; // r0@138
  EntityFilterGroup *v71; // r0@139
  unsigned int *v72; // r2@142
  signed int v73; // r1@144
  unsigned int *v74; // r2@146
  signed int v75; // r1@148
  unsigned int *v76; // r2@150
  signed int v77; // r1@152
  unsigned int *v78; // r2@154
  signed int v79; // r1@156
  unsigned int *v80; // r2@158
  signed int v81; // r1@160
  unsigned int *v82; // r2@162
  signed int v83; // r1@164
  unsigned int *v84; // r2@166
  signed int v85; // r1@168
  unsigned int *v86; // r2@170
  signed int v87; // r1@172
  unsigned int *v88; // r2@174
  signed int v89; // r1@176
  unsigned int *v90; // r2@178
  signed int v91; // r1@180
  unsigned int *v92; // r2@182
  signed int v93; // r1@184
  unsigned int *v94; // r2@186
  signed int v95; // r1@188
  unsigned int *v96; // r2@190
  signed int v97; // r1@192
  unsigned int *v98; // r2@194
  signed int v99; // r1@196
  unsigned int *v100; // r2@198
  signed int v101; // r1@200
  unsigned int *v102; // r2@202
  signed int v103; // r1@204
  unsigned int *v104; // r2@206
  signed int v105; // r1@208
  unsigned int *v106; // r2@210
  signed int v107; // r1@212
  unsigned int *v108; // r2@214
  signed int v109; // r1@216
  unsigned int *v110; // r2@218
  signed int v111; // r1@220
  unsigned int *v112; // r2@222
  signed int v113; // r1@224
  unsigned int *v114; // r2@226
  signed int v115; // r1@228
  unsigned int *v116; // r2@230
  signed int v117; // r1@232
  unsigned int *v118; // r2@234
  signed int v119; // r1@236
  unsigned int *v120; // r2@238
  signed int v121; // r1@240
  unsigned int *v122; // r2@242
  signed int v123; // r1@244
  unsigned int *v124; // r2@246
  signed int v125; // r1@248
  unsigned int *v126; // r2@250
  signed int v127; // r1@252
  unsigned int *v128; // r2@254
  signed int v129; // r1@256
  unsigned int *v130; // r2@258
  signed int v131; // r1@260
  unsigned int *v132; // r2@262
  signed int v133; // r1@264
  unsigned int *v134; // r2@266
  signed int v135; // r1@268
  unsigned int *v136; // r2@270
  signed int v137; // r1@272
  unsigned int *v138; // r2@274
  signed int v139; // r1@276
  unsigned int *v140; // r2@278
  signed int v141; // r1@280
  unsigned int *v142; // r2@282
  signed int v143; // r1@284
  unsigned int *v144; // r2@286
  signed int v145; // r1@288
  unsigned int *v146; // r2@290
  signed int v147; // r1@292
  unsigned int *v148; // r2@294
  signed int v149; // r1@296
  unsigned int *v150; // r2@298
  signed int v151; // r1@300
  unsigned int *v152; // r2@302
  signed int v153; // r1@304
  unsigned int *v154; // r2@306
  signed int v155; // r1@308
  unsigned int *v156; // r2@310
  signed int v157; // r1@312
  unsigned int *v158; // r2@314
  signed int v159; // r1@316
  unsigned int *v160; // r2@318
  signed int v161; // r1@320
  unsigned int *v162; // r2@322
  signed int v163; // r1@324
  unsigned int *v164; // r2@326
  signed int v165; // r1@328
  unsigned int *v166; // r2@330
  signed int v167; // r1@332
  unsigned int *v168; // r2@334
  signed int v169; // r1@336
  unsigned int *v170; // r2@338
  signed int v171; // r1@340
  unsigned int *v172; // r2@342
  signed int v173; // r1@344
  unsigned int *v174; // r2@346
  signed int v175; // r1@348
  unsigned int *v176; // r2@350
  signed int v177; // r1@352
  unsigned int *v178; // r2@354
  signed int v179; // r1@356
  unsigned int *v180; // r2@358
  signed int v181; // r1@360
  unsigned int *v182; // r2@362
  signed int v183; // r1@364
  unsigned int *v184; // r2@366
  signed int v185; // r1@368
  unsigned int *v186; // r2@370
  signed int v187; // r1@372
  unsigned int *v188; // r2@374
  signed int v189; // r1@376
  unsigned int *v190; // r2@378
  signed int v191; // r1@380
  unsigned int *v192; // r2@382
  signed int v193; // r1@384
  unsigned int *v194; // r2@386
  signed int v195; // r1@388
  unsigned int *v196; // r2@390
  signed int v197; // r1@392
  unsigned int *v198; // r2@394
  signed int v199; // r1@396
  unsigned int *v200; // r2@398
  signed int v201; // r1@400
  unsigned int *v202; // r2@402
  signed int v203; // r1@404
  unsigned int *v204; // r2@406
  signed int v205; // r1@408
  unsigned int *v206; // r2@410
  signed int v207; // r1@412
  void *v208; // [sp+Ch] [bp-454h]@135
  void (*v209)(void); // [sp+14h] [bp-44Ch]@135
  int (*v210)(); // [sp+18h] [bp-448h]@135
  int v211; // [sp+20h] [bp-440h]@135
  int v212; // [sp+28h] [bp-438h]@135
  void *v213; // [sp+2Ch] [bp-434h]@131
  void (*v214)(void); // [sp+34h] [bp-42Ch]@131
  int (*v215)(); // [sp+38h] [bp-428h]@131
  int v216; // [sp+40h] [bp-420h]@131
  int v217; // [sp+48h] [bp-418h]@131
  void *v218; // [sp+4Ch] [bp-414h]@127
  void (*v219)(void); // [sp+54h] [bp-40Ch]@127
  int (*v220)(); // [sp+58h] [bp-408h]@127
  int v221; // [sp+60h] [bp-400h]@127
  int v222; // [sp+68h] [bp-3F8h]@127
  void *v223; // [sp+6Ch] [bp-3F4h]@123
  void (*v224)(void); // [sp+74h] [bp-3ECh]@123
  int (*v225)(); // [sp+78h] [bp-3E8h]@123
  int v226; // [sp+80h] [bp-3E0h]@123
  int v227; // [sp+88h] [bp-3D8h]@123
  void *v228; // [sp+8Ch] [bp-3D4h]@119
  void (*v229)(void); // [sp+94h] [bp-3CCh]@119
  int (*v230)(); // [sp+98h] [bp-3C8h]@119
  int v231; // [sp+A0h] [bp-3C0h]@119
  int v232; // [sp+A8h] [bp-3B8h]@119
  void *v233; // [sp+ACh] [bp-3B4h]@115
  void (*v234)(void); // [sp+B4h] [bp-3ACh]@115
  int (*v235)(); // [sp+B8h] [bp-3A8h]@115
  int v236; // [sp+C0h] [bp-3A0h]@115
  int v237; // [sp+C8h] [bp-398h]@115
  void *v238; // [sp+CCh] [bp-394h]@111
  void (*v239)(void); // [sp+D4h] [bp-38Ch]@111
  int (*v240)(); // [sp+D8h] [bp-388h]@111
  int v241; // [sp+E0h] [bp-380h]@111
  int v242; // [sp+E8h] [bp-378h]@111
  void *v243; // [sp+ECh] [bp-374h]@107
  void (*v244)(void); // [sp+F4h] [bp-36Ch]@107
  int (*v245)(); // [sp+F8h] [bp-368h]@107
  int v246; // [sp+100h] [bp-360h]@107
  int v247; // [sp+108h] [bp-358h]@107
  void *v248; // [sp+10Ch] [bp-354h]@103
  void (*v249)(void); // [sp+114h] [bp-34Ch]@103
  int (*v250)(); // [sp+118h] [bp-348h]@103
  int v251; // [sp+120h] [bp-340h]@103
  int v252; // [sp+128h] [bp-338h]@103
  void *v253; // [sp+12Ch] [bp-334h]@99
  void (*v254)(void); // [sp+134h] [bp-32Ch]@99
  int (*v255)(); // [sp+138h] [bp-328h]@99
  int v256; // [sp+140h] [bp-320h]@99
  int v257; // [sp+148h] [bp-318h]@99
  void *v258; // [sp+14Ch] [bp-314h]@95
  void (*v259)(void); // [sp+154h] [bp-30Ch]@95
  int (*v260)(); // [sp+158h] [bp-308h]@95
  int v261; // [sp+160h] [bp-300h]@95
  int v262; // [sp+168h] [bp-2F8h]@95
  void *v263; // [sp+16Ch] [bp-2F4h]@91
  void (*v264)(void); // [sp+174h] [bp-2ECh]@91
  int (*v265)(); // [sp+178h] [bp-2E8h]@91
  int v266; // [sp+180h] [bp-2E0h]@91
  int v267; // [sp+188h] [bp-2D8h]@91
  void *v268; // [sp+18Ch] [bp-2D4h]@87
  void (*v269)(void); // [sp+194h] [bp-2CCh]@87
  int (*v270)(); // [sp+198h] [bp-2C8h]@87
  int v271; // [sp+1A0h] [bp-2C0h]@87
  int v272; // [sp+1A8h] [bp-2B8h]@87
  void *v273; // [sp+1ACh] [bp-2B4h]@83
  void (*v274)(void); // [sp+1B4h] [bp-2ACh]@83
  int (*v275)(); // [sp+1B8h] [bp-2A8h]@83
  int v276; // [sp+1C0h] [bp-2A0h]@83
  int v277; // [sp+1C8h] [bp-298h]@83
  void *v278; // [sp+1CCh] [bp-294h]@79
  void (*v279)(void); // [sp+1D4h] [bp-28Ch]@79
  int (*v280)(); // [sp+1D8h] [bp-288h]@79
  int v281; // [sp+1E0h] [bp-280h]@79
  int v282; // [sp+1E8h] [bp-278h]@79
  void *v283; // [sp+1ECh] [bp-274h]@75
  void (*v284)(void); // [sp+1F4h] [bp-26Ch]@75
  int (*v285)(); // [sp+1F8h] [bp-268h]@75
  int v286; // [sp+200h] [bp-260h]@75
  int v287; // [sp+208h] [bp-258h]@75
  void *v288; // [sp+20Ch] [bp-254h]@71
  void (*v289)(void); // [sp+214h] [bp-24Ch]@71
  int (*v290)(); // [sp+218h] [bp-248h]@71
  int v291; // [sp+220h] [bp-240h]@71
  int v292; // [sp+228h] [bp-238h]@71
  void *v293; // [sp+22Ch] [bp-234h]@67
  void (*v294)(void); // [sp+234h] [bp-22Ch]@67
  int (*v295)(); // [sp+238h] [bp-228h]@67
  int v296; // [sp+240h] [bp-220h]@67
  int v297; // [sp+248h] [bp-218h]@67
  void *v298; // [sp+24Ch] [bp-214h]@63
  void (*v299)(void); // [sp+254h] [bp-20Ch]@63
  int (*v300)(); // [sp+258h] [bp-208h]@63
  int v301; // [sp+260h] [bp-200h]@63
  int v302; // [sp+268h] [bp-1F8h]@63
  void *v303; // [sp+26Ch] [bp-1F4h]@59
  void (*v304)(void); // [sp+274h] [bp-1ECh]@59
  int (*v305)(); // [sp+278h] [bp-1E8h]@59
  int v306; // [sp+280h] [bp-1E0h]@59
  int v307; // [sp+288h] [bp-1D8h]@59
  void *v308; // [sp+28Ch] [bp-1D4h]@55
  void (*v309)(void); // [sp+294h] [bp-1CCh]@55
  int (*v310)(); // [sp+298h] [bp-1C8h]@55
  int v311; // [sp+2A0h] [bp-1C0h]@55
  int v312; // [sp+2A8h] [bp-1B8h]@55
  void *v313; // [sp+2ACh] [bp-1B4h]@51
  void (*v314)(void); // [sp+2B4h] [bp-1ACh]@51
  int (*v315)(); // [sp+2B8h] [bp-1A8h]@51
  int v316; // [sp+2C0h] [bp-1A0h]@51
  int v317; // [sp+2C8h] [bp-198h]@51
  void *v318; // [sp+2CCh] [bp-194h]@47
  void (*v319)(void); // [sp+2D4h] [bp-18Ch]@47
  int (*v320)(); // [sp+2D8h] [bp-188h]@47
  int v321; // [sp+2E0h] [bp-180h]@47
  int v322; // [sp+2E8h] [bp-178h]@47
  void *v323; // [sp+2ECh] [bp-174h]@43
  void (*v324)(void); // [sp+2F4h] [bp-16Ch]@43
  int (*v325)(); // [sp+2F8h] [bp-168h]@43
  int v326; // [sp+300h] [bp-160h]@43
  int v327; // [sp+308h] [bp-158h]@43
  void *v328; // [sp+30Ch] [bp-154h]@39
  void (*v329)(void); // [sp+314h] [bp-14Ch]@39
  int (*v330)(); // [sp+318h] [bp-148h]@39
  int v331; // [sp+320h] [bp-140h]@39
  int v332; // [sp+328h] [bp-138h]@39
  void *v333; // [sp+32Ch] [bp-134h]@35
  void (*v334)(void); // [sp+334h] [bp-12Ch]@35
  int (__fastcall *v335)(int); // [sp+338h] [bp-128h]@35
  int v336; // [sp+340h] [bp-120h]@35
  int v337; // [sp+348h] [bp-118h]@35
  void *v338; // [sp+34Ch] [bp-114h]@31
  void (*v339)(void); // [sp+354h] [bp-10Ch]@31
  int (__fastcall *v340)(int); // [sp+358h] [bp-108h]@31
  int v341; // [sp+360h] [bp-100h]@31
  int v342; // [sp+368h] [bp-F8h]@31
  void *v343; // [sp+36Ch] [bp-F4h]@27
  void (*v344)(void); // [sp+374h] [bp-ECh]@27
  int (__fastcall *v345)(int); // [sp+378h] [bp-E8h]@27
  int v346; // [sp+380h] [bp-E0h]@27
  int v347; // [sp+388h] [bp-D8h]@27
  void *v348; // [sp+38Ch] [bp-D4h]@23
  void (*v349)(void); // [sp+394h] [bp-CCh]@23
  int (__fastcall *v350)(int); // [sp+398h] [bp-C8h]@23
  int v351; // [sp+3A0h] [bp-C0h]@23
  int v352; // [sp+3A8h] [bp-B8h]@23
  void *v353; // [sp+3ACh] [bp-B4h]@19
  void (*v354)(void); // [sp+3B4h] [bp-ACh]@19
  int (__fastcall *v355)(int); // [sp+3B8h] [bp-A8h]@19
  int v356; // [sp+3C0h] [bp-A0h]@19
  int v357; // [sp+3C8h] [bp-98h]@19
  void *v358; // [sp+3CCh] [bp-94h]@15
  void (*v359)(void); // [sp+3D4h] [bp-8Ch]@15
  int (__fastcall *v360)(int); // [sp+3D8h] [bp-88h]@15
  int v361; // [sp+3E0h] [bp-80h]@15
  int v362; // [sp+3E8h] [bp-78h]@15
  void *v363; // [sp+3ECh] [bp-74h]@11
  void (*v364)(void); // [sp+3F4h] [bp-6Ch]@11
  int (__fastcall *v365)(int); // [sp+3F8h] [bp-68h]@11
  int v366; // [sp+400h] [bp-60h]@11
  int v367; // [sp+408h] [bp-58h]@11
  void *v368; // [sp+40Ch] [bp-54h]@7
  void (*v369)(void); // [sp+414h] [bp-4Ch]@7
  int (__fastcall *v370)(int); // [sp+418h] [bp-48h]@7
  int v371; // [sp+420h] [bp-40h]@7
  int v372; // [sp+428h] [bp-38h]@7
  void *v373; // [sp+42Ch] [bp-34h]@3
  void (*v374)(void); // [sp+434h] [bp-2Ch]@3
  int (__fastcall *v375)(int); // [sp+438h] [bp-28h]@3
  int v376; // [sp+440h] [bp-20h]@3
  int v377; // [sp+448h] [bp-18h]@3

  v1 = (void *)dword_2803388;
  if ( dword_2803388 )
  {
    do
    {
      v2 = *(void **)v1;
      std::pair<std::string const,FilterTest::Definition>::~pair((int)v1 + 4);
      operator delete(v1);
      v1 = v2;
    }
    while ( v2 );
  }
  _aeabi_memclr4(sFilterMap, 4 * *(_DWORD *)algn_2803384);
  dword_2803388 = 0;
  *(_DWORD *)algn_280338C = 0;
  sub_21E94B4((void **)&v377, "is_daytime");
  sub_21E94B4((void **)&v376, "Returns true during the daylight hours.");
  v373 = operator new(1u);
  v375 = sub_178CD74;
  v374 = (void (*)(void))sub_178CD8E;
  _addFilterDefinition(
    &v377,
    &v376,
    (int)&gFilterSubjectParam,
    0,
    (int)&gFilterOperatorParam,
    (int)&gFilterOptionalBoolParam,
    (int)&v373);
  if ( v374 )
    v374();
  v3 = (void *)(v376 - 12);
  if ( (int *)(v376 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v376 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
    else
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  v4 = (void *)(v377 - 12);
  if ( (int *)(v377 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v377 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  sub_21E94B4((void **)&v372, "clock_time");
  sub_21E94B4(
    (void **)&v371,
    "Compares the current time with a float value in the range (0.0, 1.0).\r0.0= Noon\r0.25= Sunset\r0.5= Midnight\r0.75= Sunrise");
  v368 = operator new(1u);
  v370 = sub_178CF44;
  v369 = (void (*)(void))sub_178CF5E;
    &v372,
    &v371,
    (int)&gFilterRequiredFloatParam,
    (int)&v368);
  if ( v369 )
    v369();
  v5 = (void *)(v371 - 12);
  if ( (int *)(v371 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v371 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v372 - 12);
  if ( (int *)(v372 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v372 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v367, "moon_intensity");
  sub_21E94B4((void **)&v366, "Compares the current moon intensity with a float value in the range (0.0, 1.0)");
  v363 = operator new(1u);
  v364 = (void (*)(void))sub_178D12E;
  v365 = sub_178D114;
    &v367,
    &v366,
    (int)&v363);
  if ( v364 )
    v364();
  v7 = (void *)(v366 - 12);
  if ( (int *)(v366 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v366 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (void *)(v367 - 12);
  if ( (int *)(v367 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v367 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v362, "moon_phase");
  sub_21E94B4((void **)&v361, "Compares the current moon phase with an integer value in the range (0, 7).");
  v358 = operator new(1u);
  v359 = (void (*)(void))sub_178D2FE;
  v360 = sub_178D2E4;
    &v362,
    &v361,
    (int)&gFilterRequiredIntParam,
    (int)&v358);
  if ( v359 )
    v359();
  v9 = (void *)(v361 - 12);
  if ( (int *)(v361 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v361 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v362 - 12);
  if ( (int *)(v362 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v362 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v357, "has_equipment");
  sub_21E94B4((void **)&v356, "Tests for the presence of a named item in the designated slot of the subject entity.");
  v353 = operator new(1u);
  v354 = (void (*)(void))sub_178D4CE;
  v355 = sub_178D4B4;
    &v357,
    &v356,
    (int)&gEquipmentSlotParam,
    (int)&gEquipmentNameParam,
    (int)&v353);
  if ( v354 )
    v354();
  v11 = (void *)(v356 - 12);
  if ( (int *)(v356 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v356 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v357 - 12);
  if ( (int *)(v357 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v357 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v352, "is_underground");
    (void **)&v351,
    "Returns true when the subject entity is underground. An entity is considered underground if there are non-solid blocks above it.");
  v348 = operator new(1u);
  v349 = (void (*)(void))sub_178D6A2;
  v350 = sub_178D688;
    &v352,
    &v351,
    (int)&v348);
  if ( v349 )
    v349();
  v13 = (void *)(v351 - 12);
  if ( (int *)(v351 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v351 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v352 - 12);
  if ( (int *)(v352 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v352 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v347, "is_underwater");
    (void **)&v346,
    "Returns true when the subject entity is under water. An entity is considered underwater if it is completely submerge"
    "d in water blocks.");
  v343 = operator new(1u);
  v344 = (void (*)(void))sub_178D872;
  v345 = sub_178D858;
    &v347,
    &v346,
    (int)&v343);
  if ( v344 )
    v344();
  v15 = (void *)(v346 - 12);
  if ( (int *)(v346 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v346 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v347 - 12);
  if ( (int *)(v347 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v347 - 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v342, "in_water");
  sub_21E94B4((void **)&v341, "Returns true when the subject entity is in water.");
  v338 = operator new(1u);
  v339 = (void (*)(void))sub_178DA42;
  v340 = sub_178DA28;
    &v342,
    &v341,
    (int)&v338);
  if ( v339 )
    v339();
  v17 = (void *)(v341 - 12);
  if ( (int *)(v341 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v341 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v342 - 12);
  if ( (int *)(v342 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v342 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v337, "in_lava");
  sub_21E94B4((void **)&v336, "Returns true when the subject entity is in lava.");
  v333 = operator new(1u);
  v334 = (void (*)(void))sub_178DC12;
  v335 = sub_178DBF8;
    &v337,
    &v336,
    (int)&v333);
  if ( v334 )
    v334();
  v19 = (void *)(v336 - 12);
  if ( (int *)(v336 - 12) != &dword_28898C0 )
    v104 = (unsigned int *)(v336 - 4);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v337 - 12);
  if ( (int *)(v337 - 12) != &dword_28898C0 )
    v106 = (unsigned int *)(v337 - 4);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  sub_21E94B4((void **)&v332, "in_clouds");
  sub_21E94B4((void **)&v331, "Returns true when the subject entity is in the clouds.");
  v328 = operator new(1u);
  v329 = (void (*)(void))sub_178DDE2;
  v330 = sub_178DDC8;
    &v332,
    &v331,
    (int)&v328);
  if ( v329 )
    v329();
  v21 = (void *)(v331 - 12);
  if ( (int *)(v331 - 12) != &dword_28898C0 )
    v108 = (unsigned int *)(v331 - 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v332 - 12);
  if ( (int *)(v332 - 12) != &dword_28898C0 )
    v110 = (unsigned int *)(v332 - 4);
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v327, "on_ladder");
  sub_21E94B4((void **)&v326, "Returns true when the subject entity is on a ladder.");
  v323 = operator new(1u);
  v324 = (void (*)(void))sub_178DFB2;
  v325 = sub_178DF98;
    &v327,
    &v326,
    (int)&v323);
  if ( v324 )
    v324();
  v23 = (void *)(v326 - 12);
  if ( (int *)(v326 - 12) != &dword_28898C0 )
    v112 = (unsigned int *)(v326 - 4);
        v113 = __ldrex(v112);
      while ( __strex(v113 - 1, v112) );
      v113 = (*v112)--;
    if ( v113 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = (void *)(v327 - 12);
  if ( (int *)(v327 - 12) != &dword_28898C0 )
    v114 = (unsigned int *)(v327 - 4);
        v115 = __ldrex(v114);
      while ( __strex(v115 - 1, v114) );
      v115 = (*v114)--;
    if ( v115 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  sub_21E94B4((void **)&v322, "has_component");
  sub_21E94B4((void **)&v321, "Returns true when the subject entity contains the named component.");
  v318 = operator new(1u);
  v319 = (void (*)(void))sub_178E182;
  v320 = sub_178E168;
    &v322,
    &v321,
    (int)&gComponentNameParam,
    (int)&v318);
  if ( v319 )
    v319();
  v25 = (void *)(v321 - 12);
  if ( (int *)(v321 - 12) != &dword_28898C0 )
    v116 = (unsigned int *)(v321 - 4);
        v117 = __ldrex(v116);
      while ( __strex(v117 - 1, v116) );
      v117 = (*v116)--;
    if ( v117 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = (void *)(v322 - 12);
  if ( (int *)(v322 - 12) != &dword_28898C0 )
    v118 = (unsigned int *)(v322 - 4);
        v119 = __ldrex(v118);
      while ( __strex(v119 - 1, v118) );
      v119 = (*v118)--;
    if ( v119 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  sub_21E94B4((void **)&v317, "is_family");
  sub_21E94B4((void **)&v316, "Returns true when the subject entity is a member of the named family.");
  v313 = operator new(1u);
  v314 = (void (*)(void))sub_178E362;
  v315 = sub_178E348;
    &v317,
    &v316,
    (int)&gFamilyNameParam,
    (int)&v313);
  if ( v314 )
    v314();
  v27 = (void *)(v316 - 12);
  if ( (int *)(v316 - 12) != &dword_28898C0 )
    v120 = (unsigned int *)(v316 - 4);
        v121 = __ldrex(v120);
      while ( __strex(v121 - 1, v120) );
      v121 = (*v120)--;
    if ( v121 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = (void *)(v317 - 12);
  if ( (int *)(v317 - 12) != &dword_28898C0 )
    v122 = (unsigned int *)(v317 - 4);
        v123 = __ldrex(v122);
      while ( __strex(v123 - 1, v122) );
      v123 = (*v122)--;
    if ( v123 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  sub_21E94B4((void **)&v312, "has_ability");
  sub_21E94B4((void **)&v311, "Returns true when the subject entity has the named ability.");
  v308 = operator new(1u);
  v309 = (void (*)(void))sub_178E542;
  v310 = sub_178E528;
    &v312,
    &v311,
    (int)&gAbilitiesParam,
    (int)&v308);
  if ( v309 )
    v309();
  v29 = (void *)(v311 - 12);
  if ( (int *)(v311 - 12) != &dword_28898C0 )
    v124 = (unsigned int *)(v311 - 4);
        v125 = __ldrex(v124);
      while ( __strex(v125 - 1, v124) );
      v125 = (*v124)--;
    if ( v125 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = (void *)(v312 - 12);
  if ( (int *)(v312 - 12) != &dword_28898C0 )
    v126 = (unsigned int *)(v312 - 4);
        v127 = __ldrex(v126);
      while ( __strex(v127 - 1, v126) );
      v127 = (*v126)--;
    if ( v127 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  sub_21E94B4((void **)&v307, "has_damage");
  sub_21E94B4((void **)&v306, "Returns true when the subject entity receives the named damage type.");
  v303 = operator new(1u);
  v304 = (void (*)(void))sub_178E712;
  v305 = sub_178E6F8;
    &v307,
    &v306,
    (int)&gDamageTypeParam,
    (int)&v303);
  if ( v304 )
    v304();
  v31 = (void *)(v306 - 12);
  if ( (int *)(v306 - 12) != &dword_28898C0 )
    v128 = (unsigned int *)(v306 - 4);
        v129 = __ldrex(v128);
      while ( __strex(v129 - 1, v128) );
      v129 = (*v128)--;
    if ( v129 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  v32 = (void *)(v307 - 12);
  if ( (int *)(v307 - 12) != &dword_28898C0 )
    v130 = (unsigned int *)(v307 - 4);
        v131 = __ldrex(v130);
      while ( __strex(v131 - 1, v130) );
      v131 = (*v130)--;
    if ( v131 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  sub_21E94B4((void **)&v302, "is_color");
  sub_21E94B4((void **)&v301, "Returns true if the subject entity is the named color.");
  v298 = operator new(1u);
  v299 = (void (*)(void))sub_178E8E2;
  v300 = sub_178E8C8;
    &v302,
    &v301,
    (int)&gColorTypeParam,
    (int)&v298);
  if ( v299 )
    v299();
  v33 = (void *)(v301 - 12);
  if ( (int *)(v301 - 12) != &dword_28898C0 )
    v132 = (unsigned int *)(v301 - 4);
        v133 = __ldrex(v132);
      while ( __strex(v133 - 1, v132) );
      v133 = (*v132)--;
    if ( v133 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  v34 = (void *)(v302 - 12);
  if ( (int *)(v302 - 12) != &dword_28898C0 )
    v134 = (unsigned int *)(v302 - 4);
        v135 = __ldrex(v134);
      while ( __strex(v135 - 1, v134) );
      v135 = (*v134)--;
    if ( v135 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  sub_21E94B4((void **)&v297, "is_owner");
  sub_21E94B4((void **)&v296, "Returns true if the subject entity is the owner of the calling entity.");
  v293 = operator new(1u);
  v294 = (void (*)(void))sub_178EAB2;
  v295 = sub_178EA98;
    &v297,
    &v296,
    (int)&v293);
  if ( v294 )
    v294();
  v35 = (void *)(v296 - 12);
  if ( (int *)(v296 - 12) != &dword_28898C0 )
    v136 = (unsigned int *)(v296 - 4);
        v137 = __ldrex(v136);
      while ( __strex(v137 - 1, v136) );
      v137 = (*v136)--;
    if ( v137 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  v36 = (void *)(v297 - 12);
  if ( (int *)(v297 - 12) != &dword_28898C0 )
    v138 = (unsigned int *)(v297 - 4);
        v139 = __ldrex(v138);
      while ( __strex(v139 - 1, v138) );
      v139 = (*v138)--;
    if ( v139 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  sub_21E94B4((void **)&v292, "is_target");
  sub_21E94B4((void **)&v291, "Returns true if the subject entity is the target of the calling entity.");
  v288 = operator new(1u);
  v289 = (void (*)(void))sub_178EC82;
  v290 = sub_178EC68;
    &v292,
    &v291,
    (int)&v288);
  if ( v289 )
    v289();
  v37 = (void *)(v291 - 12);
  if ( (int *)(v291 - 12) != &dword_28898C0 )
    v140 = (unsigned int *)(v291 - 4);
        v141 = __ldrex(v140);
      while ( __strex(v141 - 1, v140) );
      v141 = (*v140)--;
    if ( v141 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  v38 = (void *)(v292 - 12);
  if ( (int *)(v292 - 12) != &dword_28898C0 )
    v142 = (unsigned int *)(v292 - 4);
        v143 = __ldrex(v142);
      while ( __strex(v143 - 1, v142) );
      v143 = (*v142)--;
    if ( v143 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  sub_21E94B4((void **)&v287, "is_immobile");
    (void **)&v286,
    "Returns true if the subject entity is immobile. An entity is immobile if it lacks AI goals, has just changed dimensi"
    "ons or if it is a mob and has no health.");
  v283 = operator new(1u);
  v284 = (void (*)(void))sub_178EE52;
  v285 = sub_178EE38;
    &v287,
    &v286,
    (int)&v283);
  if ( v284 )
    v284();
  v39 = (void *)(v286 - 12);
  if ( (int *)(v286 - 12) != &dword_28898C0 )
    v144 = (unsigned int *)(v286 - 4);
        v145 = __ldrex(v144);
      while ( __strex(v145 - 1, v144) );
      v145 = (*v144)--;
    if ( v145 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  v40 = (void *)(v287 - 12);
  if ( (int *)(v287 - 12) != &dword_28898C0 )
    v146 = (unsigned int *)(v287 - 4);
        v147 = __ldrex(v146);
      while ( __strex(v147 - 1, v146) );
      v147 = (*v146)--;
    if ( v147 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  sub_21E94B4((void **)&v282, "is_moving");
  sub_21E94B4((void **)&v281, "Returns true if the subject entity is moving.");
  v278 = operator new(1u);
  v279 = (void (*)(void))sub_178F022;
  v280 = sub_178F008;
    &v282,
    &v281,
    (int)&v278);
  if ( v279 )
    v279();
  v41 = (void *)(v281 - 12);
  if ( (int *)(v281 - 12) != &dword_28898C0 )
    v148 = (unsigned int *)(v281 - 4);
        v149 = __ldrex(v148);
      while ( __strex(v149 - 1, v148) );
      v149 = (*v148)--;
    if ( v149 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  v42 = (void *)(v282 - 12);
  if ( (int *)(v282 - 12) != &dword_28898C0 )
    v150 = (unsigned int *)(v282 - 4);
        v151 = __ldrex(v150);
      while ( __strex(v151 - 1, v150) );
      v151 = (*v150)--;
    if ( v151 <= 0 )
      j_j_j_j__ZdlPv_9(v42);
  sub_21E94B4((void **)&v277, "is_sneaking");
  sub_21E94B4((void **)&v276, "Returns true if the subject entity is sneaking.");
  v273 = operator new(1u);
  v274 = (void (*)(void))sub_178F1F2;
  v275 = sub_178F1D8;
    &v277,
    &v276,
    (int)&v273);
  if ( v274 )
    v274();
  v43 = (void *)(v276 - 12);
  if ( (int *)(v276 - 12) != &dword_28898C0 )
    v152 = (unsigned int *)(v276 - 4);
        v153 = __ldrex(v152);
      while ( __strex(v153 - 1, v152) );
      v153 = (*v152)--;
    if ( v153 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  v44 = (void *)(v277 - 12);
  if ( (int *)(v277 - 12) != &dword_28898C0 )
    v154 = (unsigned int *)(v277 - 4);
        v155 = __ldrex(v154);
      while ( __strex(v155 - 1, v154) );
      v155 = (*v154)--;
    if ( v155 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  sub_21E94B4((void **)&v272, "is_climbing");
  sub_21E94B4((void **)&v271, "Returns true if the subject entity is climbing.");
  v268 = operator new(1u);
  v269 = (void (*)(void))sub_178F3C2;
  v270 = sub_178F3A8;
    &v272,
    &v271,
    (int)&v268);
  if ( v269 )
    v269();
  v45 = (void *)(v271 - 12);
  if ( (int *)(v271 - 12) != &dword_28898C0 )
    v156 = (unsigned int *)(v271 - 4);
        v157 = __ldrex(v156);
      while ( __strex(v157 - 1, v156) );
      v157 = (*v156)--;
    if ( v157 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  v46 = (void *)(v272 - 12);
  if ( (int *)(v272 - 12) != &dword_28898C0 )
    v158 = (unsigned int *)(v272 - 4);
        v159 = __ldrex(v158);
      while ( __strex(v159 - 1, v158) );
      v159 = (*v158)--;
    if ( v159 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  sub_21E94B4((void **)&v267, "is_riding");
  sub_21E94B4((void **)&v266, "Returns true if the subject entity is riding on another entity.");
  v263 = operator new(1u);
  v264 = (void (*)(void))sub_178F592;
  v265 = sub_178F578;
    &v267,
    &v266,
    (int)&v263);
  if ( v264 )
    v264();
  v47 = (void *)(v266 - 12);
  if ( (int *)(v266 - 12) != &dword_28898C0 )
    v160 = (unsigned int *)(v266 - 4);
        v161 = __ldrex(v160);
      while ( __strex(v161 - 1, v160) );
      v161 = (*v160)--;
    if ( v161 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
  v48 = (void *)(v267 - 12);
  if ( (int *)(v267 - 12) != &dword_28898C0 )
    v162 = (unsigned int *)(v267 - 4);
        v163 = __ldrex(v162);
      while ( __strex(v163 - 1, v162) );
      v163 = (*v162)--;
    if ( v163 <= 0 )
      j_j_j_j__ZdlPv_9(v48);
  sub_21E94B4((void **)&v262, "in_caravan");
  sub_21E94B4((void **)&v261, "Returns true if the subject entity is in a caravan.");
  v258 = operator new(1u);
  v259 = (void (*)(void))sub_178F762;
  v260 = sub_178F748;
    &v262,
    &v261,
    (int)&v258);
  if ( v259 )
    v259();
  v49 = (void *)(v261 - 12);
  if ( (int *)(v261 - 12) != &dword_28898C0 )
    v164 = (unsigned int *)(v261 - 4);
        v165 = __ldrex(v164);
      while ( __strex(v165 - 1, v164) );
      v165 = (*v164)--;
    if ( v165 <= 0 )
      j_j_j_j__ZdlPv_9(v49);
  v50 = (void *)(v262 - 12);
  if ( (int *)(v262 - 12) != &dword_28898C0 )
    v166 = (unsigned int *)(v262 - 4);
        v167 = __ldrex(v166);
      while ( __strex(v167 - 1, v166) );
      v167 = (*v166)--;
    if ( v167 <= 0 )
      j_j_j_j__ZdlPv_9(v50);
  sub_21E94B4((void **)&v257, "is_variant");
  sub_21E94B4((void **)&v256, "Returns true if the subject entity is the variant number provided.");
  v253 = operator new(1u);
  v254 = (void (*)(void))sub_178F932;
  v255 = sub_178F918;
    &v257,
    &v256,
    (int)&v253);
  if ( v254 )
    v254();
  v51 = (void *)(v256 - 12);
  if ( (int *)(v256 - 12) != &dword_28898C0 )
    v168 = (unsigned int *)(v256 - 4);
        v169 = __ldrex(v168);
      while ( __strex(v169 - 1, v168) );
      v169 = (*v168)--;
    if ( v169 <= 0 )
      j_j_j_j__ZdlPv_9(v51);
  v52 = (void *)(v257 - 12);
  if ( (int *)(v257 - 12) != &dword_28898C0 )
    v170 = (unsigned int *)(v257 - 4);
        v171 = __ldrex(v170);
      while ( __strex(v171 - 1, v170) );
      v171 = (*v170)--;
    if ( v171 <= 0 )
      j_j_j_j__ZdlPv_9(v52);
  sub_21E94B4((void **)&v252, "is_difficulty");
  sub_21E94B4((void **)&v251, "Tests the current difficulty level of the game.");
  v248 = operator new(1u);
  v249 = (void (*)(void))sub_178FB02;
  v250 = sub_178FAE8;
    &v252,
    &v251,
    (int)&gFilterDifficultyParam,
    (int)&v248);
  if ( v249 )
    v249();
  v53 = (void *)(v251 - 12);
  if ( (int *)(v251 - 12) != &dword_28898C0 )
    v172 = (unsigned int *)(v251 - 4);
        v173 = __ldrex(v172);
      while ( __strex(v173 - 1, v172) );
      v173 = (*v172)--;
    if ( v173 <= 0 )
      j_j_j_j__ZdlPv_9(v53);
  v54 = (void *)(v252 - 12);
  if ( (int *)(v252 - 12) != &dword_28898C0 )
    v174 = (unsigned int *)(v252 - 4);
        v175 = __ldrex(v174);
      while ( __strex(v175 - 1, v174) );
      v175 = (*v174)--;
    if ( v175 <= 0 )
      j_j_j_j__ZdlPv_9(v54);
  sub_21E94B4((void **)&v247, "is_game_rule");
  sub_21E94B4((void **)&v246, "Tests whether a named game rule is active.");
  v243 = operator new(1u);
  v244 = (void (*)(void))sub_178FCD2;
  v245 = sub_178FCB8;
    &v247,
    &v246,
    (int)&gGameRuleNameParam,
    (int)&v243);
  if ( v244 )
    v244();
  v55 = (void *)(v246 - 12);
  if ( (int *)(v246 - 12) != &dword_28898C0 )
    v176 = (unsigned int *)(v246 - 4);
        v177 = __ldrex(v176);
      while ( __strex(v177 - 1, v176) );
      v177 = (*v176)--;
    if ( v177 <= 0 )
      j_j_j_j__ZdlPv_9(v55);
  v56 = (void *)(v247 - 12);
  if ( (int *)(v247 - 12) != &dword_28898C0 )
    v178 = (unsigned int *)(v247 - 4);
        v179 = __ldrex(v178);
      while ( __strex(v179 - 1, v178) );
      v179 = (*v178)--;
    if ( v179 <= 0 )
      j_j_j_j__ZdlPv_9(v56);
  sub_21E94B4((void **)&v242, "is_biome");
  sub_21E94B4((void **)&v241, "Tests whether the Subject is currently in the named biome.");
  v238 = operator new(1u);
  v239 = (void (*)(void))sub_178FEB6;
  v240 = sub_178FE9C;
    &v242,
    &v241,
    (int)&gFilterBiomeParam,
    (int)&v238);
  if ( v239 )
    v239();
  v57 = (void *)(v241 - 12);
  if ( (int *)(v241 - 12) != &dword_28898C0 )
    v180 = (unsigned int *)(v241 - 4);
        v181 = __ldrex(v180);
      while ( __strex(v181 - 1, v180) );
      v181 = (*v180)--;
    if ( v181 <= 0 )
      j_j_j_j__ZdlPv_9(v57);
  v58 = (void *)(v242 - 12);
  if ( (int *)(v242 - 12) != &dword_28898C0 )
    v182 = (unsigned int *)(v242 - 4);
        v183 = __ldrex(v182);
      while ( __strex(v183 - 1, v182) );
      v183 = (*v182)--;
    if ( v183 <= 0 )
      j_j_j_j__ZdlPv_9(v58);
  sub_21E94B4((void **)&v237, "is_snow_covered");
  sub_21E94B4((void **)&v236, "Tests whether the Subject is in an area with snow cover");
  v233 = operator new(1u);
  v234 = (void (*)(void))sub_1790086;
  v235 = sub_179006C;
    &v237,
    &v236,
    (int)&v233);
  if ( v234 )
    v234();
  v59 = (void *)(v236 - 12);
  if ( (int *)(v236 - 12) != &dword_28898C0 )
    v184 = (unsigned int *)(v236 - 4);
        v185 = __ldrex(v184);
      while ( __strex(v185 - 1, v184) );
      v185 = (*v184)--;
    if ( v185 <= 0 )
      j_j_j_j__ZdlPv_9(v59);
  v60 = (void *)(v237 - 12);
  if ( (int *)(v237 - 12) != &dword_28898C0 )
    v186 = (unsigned int *)(v237 - 4);
        v187 = __ldrex(v186);
      while ( __strex(v187 - 1, v186) );
      v187 = (*v186)--;
    if ( v187 <= 0 )
      j_j_j_j__ZdlPv_9(v60);
  sub_21E94B4((void **)&v232, "is_humid");
  sub_21E94B4((void **)&v231, "Tests whether the Subject is in an area with humidity");
  v228 = operator new(1u);
  v229 = (void (*)(void))sub_1790256;
  v230 = sub_179023C;
    &v232,
    &v231,
    (int)&v228);
  if ( v229 )
    v229();
  v61 = (void *)(v231 - 12);
  if ( (int *)(v231 - 12) != &dword_28898C0 )
    v188 = (unsigned int *)(v231 - 4);
        v189 = __ldrex(v188);
      while ( __strex(v189 - 1, v188) );
      v189 = (*v188)--;
    if ( v189 <= 0 )
      j_j_j_j__ZdlPv_9(v61);
  v62 = (void *)(v232 - 12);
  if ( (int *)(v232 - 12) != &dword_28898C0 )
    v190 = (unsigned int *)(v232 - 4);
        v191 = __ldrex(v190);
      while ( __strex(v191 - 1, v190) );
      v191 = (*v190)--;
    if ( v191 <= 0 )
      j_j_j_j__ZdlPv_9(v62);
  sub_21E94B4((void **)&v227, "is_temperature_type");
  sub_21E94B4((void **)&v226, "Tests whether the current temperature is a given type.");
  v223 = operator new(1u);
  v224 = (void (*)(void))sub_1790426;
  v225 = sub_179040C;
    &v227,
    &v226,
    (int)&gFilterTemperatureTypeParam,
    (int)&v223);
  if ( v224 )
    v224();
  v63 = (void *)(v226 - 12);
  if ( (int *)(v226 - 12) != &dword_28898C0 )
    v192 = (unsigned int *)(v226 - 4);
        v193 = __ldrex(v192);
      while ( __strex(v193 - 1, v192) );
      v193 = (*v192)--;
    if ( v193 <= 0 )
      j_j_j_j__ZdlPv_9(v63);
  v64 = (void *)(v227 - 12);
  if ( (int *)(v227 - 12) != &dword_28898C0 )
    v194 = (unsigned int *)(v227 - 4);
        v195 = __ldrex(v194);
      while ( __strex(v195 - 1, v194) );
      v195 = (*v194)--;
    if ( v195 <= 0 )
      j_j_j_j__ZdlPv_9(v64);
  sub_21E94B4((void **)&v222, "is_temperature_value");
    (void **)&v221,
    "Tests the current temperature against a provided value in the range (0.0, 1.0) where 0.0f is the coldest temp and 1."
    "0f is the hottest.");
  v218 = operator new(1u);
  v219 = (void (*)(void))sub_17905F6;
  v220 = sub_17905DC;
    &v222,
    &v221,
    (int)&gFilterTemperatureValueParam,
    (int)&v218);
  if ( v219 )
    v219();
  v65 = (void *)(v221 - 12);
  if ( (int *)(v221 - 12) != &dword_28898C0 )
    v196 = (unsigned int *)(v221 - 4);
        v197 = __ldrex(v196);
      while ( __strex(v197 - 1, v196) );
      v197 = (*v196)--;
    if ( v197 <= 0 )
      j_j_j_j__ZdlPv_9(v65);
  v66 = (void *)(v222 - 12);
  if ( (int *)(v222 - 12) != &dword_28898C0 )
    v198 = (unsigned int *)(v222 - 4);
        v199 = __ldrex(v198);
      while ( __strex(v199 - 1, v198) );
      v199 = (*v198)--;
    if ( v199 <= 0 )
      j_j_j_j__ZdlPv_9(v66);
  sub_21E94B4((void **)&v217, "is_brightness");
  sub_21E94B4((void **)&v216, "Tests the current brightness against a provided value in the range (0.0f, 1.0f).");
  v213 = operator new(1u);
  v214 = (void (*)(void))sub_17907C6;
  v215 = sub_17907AC;
    &v217,
    &v216,
    (int)&gFilterBrightnessParam,
    (int)&v213);
  if ( v214 )
    v214();
  v67 = (void *)(v216 - 12);
  if ( (int *)(v216 - 12) != &dword_28898C0 )
    v200 = (unsigned int *)(v216 - 4);
        v201 = __ldrex(v200);
      while ( __strex(v201 - 1, v200) );
      v201 = (*v200)--;
    if ( v201 <= 0 )
      j_j_j_j__ZdlPv_9(v67);
  v68 = (void *)(v217 - 12);
  if ( (int *)(v217 - 12) != &dword_28898C0 )
    v202 = (unsigned int *)(v217 - 4);
        v203 = __ldrex(v202);
      while ( __strex(v203 - 1, v202) );
      v203 = (*v202)--;
    if ( v203 <= 0 )
      j_j_j_j__ZdlPv_9(v68);
  sub_21E94B4((void **)&v212, "is_altitude");
  sub_21E94B4((void **)&v211, "Tests the current altitude against a provided value. 0= bedrock elevation.");
  v208 = operator new(1u);
  v209 = (void (*)(void))sub_1790996;
  v210 = sub_179097C;
    &v212,
    &v211,
    (int)&gFilterAltitudeParam,
    (int)&v208);
  if ( v209 )
    v209();
  v69 = (void *)(v211 - 12);
  if ( (int *)(v211 - 12) != &dword_28898C0 )
    v204 = (unsigned int *)(v211 - 4);
        v205 = __ldrex(v204);
      while ( __strex(v205 - 1, v204) );
      v205 = (*v204)--;
    if ( v205 <= 0 )
      j_j_j_j__ZdlPv_9(v69);
  v70 = (void *)(v212 - 12);
  if ( (int *)(v212 - 12) != &dword_28898C0 )
    v206 = (unsigned int *)(v212 - 4);
        v207 = __ldrex(v206);
      while ( __strex(v207 - 1, v206) );
      v207 = (*v206)--;
    if ( v207 <= 0 )
      j_j_j_j__ZdlPv_9(v70);
  v71 = (EntityFilterGroup *)DocumentationSystem::getSystem((DocumentationSystem *)v70);
  if ( v71 )
    v71 = (EntityFilterGroup *)DocumentationSystem::registerDocumentation();
  EntityFilterGroup::initialize(v71);
}


void __fastcall FilterList::initialize(FilterList *this)
{
  FilterList::initialize(this);
}
