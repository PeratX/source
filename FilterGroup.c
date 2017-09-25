

void __fastcall FilterGroup::~FilterGroup(FilterGroup *this)
{
  FilterGroup *v1; // r0@1

  v1 = FilterGroup::~FilterGroup(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall FilterGroup::_parseFilterParam(int a1, const void **a2, const char **a3, int a4, int a5, int a6)
{
  int v6; // r4@1
  const char **v7; // r7@1
  const void **v8; // r8@1
  Json::Value *v9; // r6@2
  void *v10; // r0@4
  unsigned int v11; // r6@5
  __int64 v12; // kr00_8@5
  unsigned int v13; // r4@5
  unsigned int *v14; // r11@5
  unsigned int v15; // r9@6
  _DWORD *v16; // r10@6
  int v17; // r5@6
  _DWORD *v18; // r1@8
  size_t v19; // r2@8
  const void **v20; // r0@12
  const void **v21; // r0@12
  const void **v22; // r0@12
  char *v23; // r0@12
  char *v24; // r0@13
  char *v25; // r0@14
  char *v26; // r0@15
  char *v27; // r0@16
  unsigned int *v28; // r2@17
  signed int v29; // r1@19
  char *v30; // r0@25
  unsigned int *v31; // r2@26
  signed int v32; // r1@28
  const void **v33; // r0@30
  const void **v34; // r0@30
  char *v35; // r0@30
  char *v36; // r0@31
  void *v38; // r0@41
  void *v39; // r0@42
  const void **v40; // r0@51
  const void **v41; // r0@51
  const void **v42; // r0@51
  char *v43; // r0@51
  char *v44; // r0@52
  char *v45; // r0@53
  const void **v46; // r0@59
  const void **v47; // r0@59
  const void **v48; // r0@59
  char *v49; // r0@59
  char *v50; // r0@60
  char *v51; // r0@61
  const void **v52; // r0@67
  const void **v53; // r0@67
  const void **v54; // r0@67
  char *v55; // r0@67
  char *v56; // r0@68
  char *v57; // r0@69
  const void **v58; // r0@75
  const void **v59; // r0@75
  const void **v60; // r0@75
  char *v61; // r0@75
  char *v62; // r0@76
  char *v63; // r0@77
  bool v64; // zf@83
  unsigned int *v65; // r2@91
  signed int v66; // r1@93
  unsigned int *v67; // r2@95
  signed int v68; // r1@97
  unsigned int *v69; // r2@107
  signed int v70; // r1@109
  unsigned int *v71; // r2@111
  signed int v72; // r1@113
  unsigned int *v73; // r2@115
  signed int v74; // r1@117
  unsigned int *v75; // r2@119
  signed int v76; // r1@121
  unsigned int *v77; // r2@123
  signed int v78; // r1@125
  unsigned int *v79; // r2@162
  signed int v80; // r1@164
  unsigned int *v81; // r2@166
  signed int v82; // r1@168
  unsigned int *v83; // r2@170
  signed int v84; // r1@172
  unsigned int *v85; // r2@174
  signed int v86; // r1@176
  unsigned int *v87; // r2@178
  signed int v88; // r1@180
  unsigned int *v89; // r2@182
  signed int v90; // r1@184
  unsigned int *v91; // r2@186
  signed int v92; // r1@188
  unsigned int *v93; // r2@190
  signed int v94; // r1@192
  unsigned int *v95; // r2@194
  signed int v96; // r1@196
  unsigned int *v97; // r2@198
  signed int v98; // r1@200
  unsigned int *v99; // r2@202
  signed int v100; // r1@204
  unsigned int *v101; // r2@206
  signed int v102; // r1@208
  unsigned int *v103; // r2@210
  signed int v104; // r1@212
  unsigned int *v105; // r2@214
  signed int v106; // r1@216
  char *v107; // [sp+10h] [bp-D8h]@49
  __int64 v108; // [sp+14h] [bp-D4h]@49
  char *v109; // [sp+1Ch] [bp-CCh]@75
  char *v110; // [sp+20h] [bp-C8h]@75
  char *v111; // [sp+24h] [bp-C4h]@75
  char *v112; // [sp+28h] [bp-C0h]@75
  int v113; // [sp+2Ch] [bp-BCh]@35
  char *v114; // [sp+30h] [bp-B8h]@35
  int v115; // [sp+34h] [bp-B4h]@35
  int v116; // [sp+38h] [bp-B0h]@35
  char *v117; // [sp+3Ch] [bp-ACh]@51
  char *v118; // [sp+40h] [bp-A8h]@51
  char *v119; // [sp+44h] [bp-A4h]@51
  char *v120; // [sp+48h] [bp-A0h]@51
  int v121; // [sp+4Ch] [bp-9Ch]@25
  char *v122; // [sp+50h] [bp-98h]@25
  __int64 v123; // [sp+54h] [bp-94h]@25
  char *v124; // [sp+5Ch] [bp-8Ch]@67
  char *v125; // [sp+60h] [bp-88h]@67
  char *v126; // [sp+64h] [bp-84h]@67
  char *v127; // [sp+68h] [bp-80h]@67
  int v128; // [sp+70h] [bp-78h]@41
  int v129; // [sp+74h] [bp-74h]@41
  int v130; // [sp+78h] [bp-70h]@41
  int v131; // [sp+7Ch] [bp-6Ch]@41
  __int64 v132; // [sp+80h] [bp-68h]@41
  char *v133; // [sp+88h] [bp-60h]@59
  char *v134; // [sp+8Ch] [bp-5Ch]@59
  char *v135; // [sp+90h] [bp-58h]@59
  char *v136; // [sp+94h] [bp-54h]@59
  char *v137; // [sp+98h] [bp-50h]@12
  char *v138; // [sp+9Ch] [bp-4Ch]@12
  char *v139; // [sp+A0h] [bp-48h]@12
  char *v140; // [sp+A4h] [bp-44h]@12
  int v141; // [sp+ACh] [bp-3Ch]@4
  void *s1; // [sp+B0h] [bp-38h]@4
  char *v143; // [sp+B4h] [bp-34h]@30
  char *v144; // [sp+B8h] [bp-30h]@30
  char *v145; // [sp+BCh] [bp-2Ch]@30

  v6 = a4;
  v7 = a3;
  v8 = a2;
  if ( Json::Value::isMember(a4, a3) )
  {
    v9 = (Json::Value *)Json::Value::operator[](v6, v7);
    if ( Json::Value::isString(v9) != 1 || !*(_DWORD *)(a5 + 40) )
    {
      switch ( *(_DWORD *)a5 )
      {
        case 0:
          if ( Json::Value::isBool(v9) )
          {
            v121 = 1;
            v122 = (char *)&unk_28898CC;
            v123 = (unsigned int)Json::Value::asBool(v9, 0);
            *(_DWORD *)a6 = 1;
            xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
              (int *)(a6 + 4),
              (int *)&v122);
            *(_QWORD *)(a6 + 8) = v123;
            v30 = v122 - 12;
            if ( (int *)(v122 - 12) == &dword_28898C0 )
              return 1;
            v31 = (unsigned int *)(v122 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v32 = __ldrex(v31);
              while ( __strex(v32 - 1, v31) );
              goto LABEL_160;
            }
            goto LABEL_159;
          }
          v124 = (char *)&unk_28898CC;
          sub_21E6FCC((const void **)&v124, *((_DWORD *)*v7 - 3) + 14);
          sub_21E7408((const void **)&v124, "Filter member ", 0xEu);
          sub_21E72F0((const void **)&v124, (const void **)v7);
          v52 = sub_21E7408((const void **)&v124, " of test ", 9u);
          v125 = (char *)*v52;
          *v52 = &unk_28898CC;
          v53 = sub_21E72F0((const void **)&v125, v8);
          v126 = (char *)*v53;
          *v53 = &unk_28898CC;
          v54 = sub_21E7408((const void **)&v126, " must be a boolean", 0x12u);
          v127 = (char *)*v54;
          *v54 = &unk_28898CC;
          JsonUtil::errorMessage((int *)&v127);
          v55 = v127 - 12;
          if ( (int *)(v127 - 12) != &dword_28898C0 )
            v95 = (unsigned int *)(v127 - 4);
                v96 = __ldrex(v95);
              while ( __strex(v96 - 1, v95) );
            else
              v96 = (*v95)--;
            if ( v96 <= 0 )
              j_j_j_j__ZdlPv_9(v55);
          v56 = v126 - 12;
          if ( (int *)(v126 - 12) != &dword_28898C0 )
            v97 = (unsigned int *)(v126 - 4);
                v98 = __ldrex(v97);
              while ( __strex(v98 - 1, v97) );
              v98 = (*v97)--;
            if ( v98 <= 0 )
              j_j_j_j__ZdlPv_9(v56);
          v57 = v125 - 12;
          if ( (int *)(v125 - 12) != &dword_28898C0 )
            v99 = (unsigned int *)(v125 - 4);
                v100 = __ldrex(v99);
              while ( __strex(v100 - 1, v99) );
              v100 = (*v99)--;
            if ( v100 <= 0 )
              j_j_j_j__ZdlPv_9(v57);
          v27 = v124 - 12;
          if ( (int *)(v124 - 12) == &dword_28898C0 )
            return 0;
          v28 = (unsigned int *)(v124 - 4);
          if ( !&pthread_create )
            goto LABEL_103;
          __dmb();
          do
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
          goto LABEL_104;
        case 2:
          if ( Json::Value::isNumeric(v9) )
            v113 = 2;
            v114 = (char *)&unk_28898CC;
            v115 = 0;
            v116 = Json::Value::asFloat(v9, 0.0);
            *(_DWORD *)a6 = 2;
              (int *)&v114);
            *(_QWORD *)(a6 + 8) = *(_QWORD *)&v115;
            v30 = v114 - 12;
            if ( (int *)(v114 - 12) == &dword_28898C0 )
            v31 = (unsigned int *)(v114 - 4);
          v117 = (char *)&unk_28898CC;
          sub_21E6FCC((const void **)&v117, *((_DWORD *)*v7 - 3) + 14);
          sub_21E7408((const void **)&v117, "Filter member ", 0xEu);
          sub_21E72F0((const void **)&v117, (const void **)v7);
          v40 = sub_21E7408((const void **)&v117, " of test ", 9u);
          v118 = (char *)*v40;
          *v40 = &unk_28898CC;
          v41 = sub_21E72F0((const void **)&v118, v8);
          v119 = (char *)*v41;
          *v41 = &unk_28898CC;
          v42 = sub_21E7408((const void **)&v119, " must be a number", 0x11u);
          v120 = (char *)*v42;
          *v42 = &unk_28898CC;
          JsonUtil::errorMessage((int *)&v120);
          v43 = v120 - 12;
          if ( (int *)(v120 - 12) != &dword_28898C0 )
            v83 = (unsigned int *)(v120 - 4);
                v84 = __ldrex(v83);
              while ( __strex(v84 - 1, v83) );
              v84 = (*v83)--;
            if ( v84 <= 0 )
              j_j_j_j__ZdlPv_9(v43);
          v44 = v119 - 12;
          if ( (int *)(v119 - 12) != &dword_28898C0 )
            v85 = (unsigned int *)(v119 - 4);
                v86 = __ldrex(v85);
              while ( __strex(v86 - 1, v85) );
              v86 = (*v85)--;
            if ( v86 <= 0 )
              j_j_j_j__ZdlPv_9(v44);
          v45 = v118 - 12;
          if ( (int *)(v118 - 12) != &dword_28898C0 )
            v87 = (unsigned int *)(v118 - 4);
                v88 = __ldrex(v87);
              while ( __strex(v88 - 1, v87) );
              v88 = (*v87)--;
            if ( v88 <= 0 )
              j_j_j_j__ZdlPv_9(v45);
          v27 = v117 - 12;
          if ( (int *)(v117 - 12) == &dword_28898C0 )
          v28 = (unsigned int *)(v117 - 4);
        case 3:
          if ( Json::Value::isString(v9) )
            sub_21E94B4((void **)&v128, (const char *)&unk_257BC67);
            Json::Value::asString(&v129, (int)v9, &v128);
            v130 = 3;
            sub_21E8AF4(&v131, &v129);
            v132 = 0LL;
            *(_DWORD *)a6 = v130;
              &v131);
            *(_QWORD *)(a6 + 8) = v132;
            v38 = (void *)(v131 - 12);
            if ( (int *)(v131 - 12) != &dword_28898C0 )
              v79 = (unsigned int *)(v131 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v80 = __ldrex(v79);
                while ( __strex(v80 - 1, v79) );
              }
              else
                v80 = (*v79)--;
              if ( v80 <= 0 )
                j_j_j_j__ZdlPv_9(v38);
            v39 = (void *)(v129 - 12);
            if ( (int *)(v129 - 12) != &dword_28898C0 )
              v81 = (unsigned int *)(v129 - 4);
                  v82 = __ldrex(v81);
                while ( __strex(v82 - 1, v81) );
                v82 = (*v81)--;
              if ( v82 <= 0 )
                j_j_j_j__ZdlPv_9(v39);
            v30 = (char *)(v128 - 12);
            if ( (int *)(v128 - 12) == &dword_28898C0 )
            v31 = (unsigned int *)(v128 - 4);
            if ( !&pthread_create )
              goto LABEL_159;
            __dmb();
            do
              v32 = __ldrex(v31);
            while ( __strex(v32 - 1, v31) );
            goto LABEL_160;
          v133 = (char *)&unk_28898CC;
          sub_21E6FCC((const void **)&v133, *((_DWORD *)*v7 - 3) + 14);
          sub_21E7408((const void **)&v133, "Filter member ", 0xEu);
          sub_21E72F0((const void **)&v133, (const void **)v7);
          v46 = sub_21E7408((const void **)&v133, " of test ", 9u);
          v134 = (char *)*v46;
          *v46 = &unk_28898CC;
          v47 = sub_21E72F0((const void **)&v134, v8);
          v135 = (char *)*v47;
          *v47 = &unk_28898CC;
          v48 = sub_21E7408((const void **)&v135, " must be a string", 0x11u);
          v136 = (char *)*v48;
          *v48 = &unk_28898CC;
          JsonUtil::errorMessage((int *)&v136);
          v49 = v136 - 12;
          if ( (int *)(v136 - 12) != &dword_28898C0 )
            v89 = (unsigned int *)(v136 - 4);
                v90 = __ldrex(v89);
              while ( __strex(v90 - 1, v89) );
              v90 = (*v89)--;
            if ( v90 <= 0 )
              j_j_j_j__ZdlPv_9(v49);
          v50 = v135 - 12;
          if ( (int *)(v135 - 12) != &dword_28898C0 )
            v91 = (unsigned int *)(v135 - 4);
                v92 = __ldrex(v91);
              while ( __strex(v92 - 1, v91) );
              v92 = (*v91)--;
            if ( v92 <= 0 )
              j_j_j_j__ZdlPv_9(v50);
          v51 = v134 - 12;
          if ( (int *)(v134 - 12) != &dword_28898C0 )
            v93 = (unsigned int *)(v134 - 4);
                v94 = __ldrex(v93);
              while ( __strex(v94 - 1, v93) );
              v94 = (*v93)--;
            if ( v94 <= 0 )
              j_j_j_j__ZdlPv_9(v51);
          v27 = v133 - 12;
          if ( (int *)(v133 - 12) == &dword_28898C0 )
          v28 = (unsigned int *)(v133 - 4);
        case 1:
          if ( Json::Value::isIntegral(v9) )
            v107 = (char *)&unk_28898CC;
            v108 = (unsigned int)Json::Value::asInt(v9, 0);
              (int *)&v107);
            *(_QWORD *)(a6 + 8) = v108;
            v30 = v107 - 12;
            if ( (int *)(v107 - 12) == &dword_28898C0 )
            v31 = (unsigned int *)(v107 - 4);
          v109 = (char *)&unk_28898CC;
          sub_21E6FCC((const void **)&v109, *((_DWORD *)*v7 - 3) + 14);
          sub_21E7408((const void **)&v109, "Filter member ", 0xEu);
          sub_21E72F0((const void **)&v109, (const void **)v7);
          v58 = sub_21E7408((const void **)&v109, " of test ", 9u);
          v110 = (char *)*v58;
          *v58 = &unk_28898CC;
          v59 = sub_21E72F0((const void **)&v110, v8);
          v111 = (char *)*v59;
          *v59 = &unk_28898CC;
          v60 = sub_21E7408((const void **)&v111, " must be an integer", 0x13u);
          v112 = (char *)*v60;
          *v60 = &unk_28898CC;
          JsonUtil::errorMessage((int *)&v112);
          v61 = v112 - 12;
          if ( (int *)(v112 - 12) != &dword_28898C0 )
            v101 = (unsigned int *)(v112 - 4);
                v102 = __ldrex(v101);
              while ( __strex(v102 - 1, v101) );
              v102 = (*v101)--;
            if ( v102 <= 0 )
              j_j_j_j__ZdlPv_9(v61);
          v62 = v111 - 12;
          if ( (int *)(v111 - 12) != &dword_28898C0 )
            v103 = (unsigned int *)(v111 - 4);
                v104 = __ldrex(v103);
              while ( __strex(v104 - 1, v103) );
              v104 = (*v103)--;
            if ( v104 <= 0 )
              j_j_j_j__ZdlPv_9(v62);
          v63 = v110 - 12;
          if ( (int *)(v110 - 12) != &dword_28898C0 )
            v105 = (unsigned int *)(v110 - 4);
                v106 = __ldrex(v105);
              while ( __strex(v106 - 1, v105) );
              v106 = (*v105)--;
            if ( v106 <= 0 )
              j_j_j_j__ZdlPv_9(v63);
          v27 = v109 - 12;
          if ( (int *)(v109 - 12) == &dword_28898C0 )
          v28 = (unsigned int *)(v109 - 4);
          break;
        default:
          return 1;
      }
      goto LABEL_104;
    }
    sub_21E94B4((void **)&v141, (const char *)&unk_257BC67);
    Json::Value::asString((int *)&s1, (int)v9, &v141);
    v10 = (void *)(v141 - 12);
    if ( (int *)(v141 - 12) != &dword_28898C0 )
      v69 = (unsigned int *)(v141 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v70 = __ldrex(v69);
        while ( __strex(v70 - 1, v69) );
      else
        v70 = (*v69)--;
      if ( v70 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    v11 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
    v12 = *(_QWORD *)(a5 + 28);
    v13 = v11 % (unsigned int)(*(_QWORD *)(a5 + 28) >> 32);
    v14 = *(unsigned int **)(v12 + 4 * v13);
    if ( v14 )
      v15 = *v14;
      v16 = s1;
      v17 = *(_DWORD *)(*v14 + 28);
      while ( 1 )
        if ( v17 == v11 )
        {
          v18 = *(_DWORD **)(v15 + 4);
          v19 = *(v16 - 3);
          if ( v19 == *(v18 - 3) && !memcmp(v16, v18, v19) )
            break;
        }
        if ( *(_DWORD *)v15 )
          v17 = *(_DWORD *)(v12 + 28);
          v14 = (unsigned int *)v15;
          v15 = *(_DWORD *)v15;
          if ( *(_DWORD *)(v12 + 28) % HIDWORD(v12) == v13 )
            continue;
        goto LABEL_12;
      v64 = v14 == 0;
      if ( v14 )
        v13 = *v14;
        v64 = *v14 == 0;
      if ( !v64 )
        *(_DWORD *)a6 = *(_DWORD *)(v13 + 8);
        EntityInteraction::setInteractText((int *)(a6 + 4), (int *)(v13 + 12));
        *(_QWORD *)(a6 + 8) = *(_QWORD *)(v13 + 16);
        v30 = (char *)s1 - 12;
        if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
          v31 = (unsigned int *)((char *)s1 - 4);
          if ( &pthread_create )
          else
LABEL_159:
            v32 = (*v31)--;
LABEL_160:
          if ( v32 <= 0 )
            j_j_j_j__ZdlPv_9(v30);
        return 1;
LABEL_12:
    v137 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v137, *((_DWORD *)*v7 - 3) + 14);
    sub_21E7408((const void **)&v137, "Filter member ", 0xEu);
    sub_21E72F0((const void **)&v137, (const void **)v7);
    v20 = sub_21E7408((const void **)&v137, " of test ", 9u);
    v138 = (char *)*v20;
    *v20 = &unk_28898CC;
    v21 = sub_21E72F0((const void **)&v138, v8);
    v139 = (char *)*v21;
    *v21 = &unk_28898CC;
    v22 = sub_21E7408((const void **)&v139, " must be a preset string.", 0x19u);
    v140 = (char *)*v22;
    *v22 = &unk_28898CC;
    JsonUtil::errorMessage((int *)&v140);
    v23 = v140 - 12;
    if ( (int *)(v140 - 12) != &dword_28898C0 )
      v71 = (unsigned int *)(v140 - 4);
          v72 = __ldrex(v71);
        while ( __strex(v72 - 1, v71) );
        v72 = (*v71)--;
      if ( v72 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    v24 = v139 - 12;
    if ( (int *)(v139 - 12) != &dword_28898C0 )
      v73 = (unsigned int *)(v139 - 4);
          v74 = __ldrex(v73);
        while ( __strex(v74 - 1, v73) );
        v74 = (*v73)--;
      if ( v74 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
    v25 = v138 - 12;
    if ( (int *)(v138 - 12) != &dword_28898C0 )
      v75 = (unsigned int *)(v138 - 4);
          v76 = __ldrex(v75);
        while ( __strex(v76 - 1, v75) );
        v76 = (*v75)--;
      if ( v76 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    v26 = v137 - 12;
    if ( (int *)(v137 - 12) != &dword_28898C0 )
      v77 = (unsigned int *)(v137 - 4);
          v78 = __ldrex(v77);
        while ( __strex(v78 - 1, v77) );
        v78 = (*v77)--;
      if ( v78 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
    v27 = (char *)s1 - 12;
    if ( (int *)((char *)s1 - 12) == &dword_28898C0 )
      return 0;
    v28 = (unsigned int *)((char *)s1 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
LABEL_103:
    v29 = (*v28)--;
LABEL_104:
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
    return 0;
  }
  if ( !*(_DWORD *)(a5 + 4) )
    v143 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v143, *((_DWORD *)*v7 - 3) + 27);
    sub_21E7408((const void **)&v143, "Can't find required member ", 0x1Bu);
    sub_21E72F0((const void **)&v143, (const void **)v7);
    v33 = sub_21E7408((const void **)&v143, " of test ", 9u);
    v144 = (char *)*v33;
    *v33 = &unk_28898CC;
    v34 = sub_21E72F0((const void **)&v144, v8);
    v145 = (char *)*v34;
    *v34 = &unk_28898CC;
    JsonUtil::errorMessage((int *)&v145);
    v35 = v145 - 12;
    if ( (int *)(v145 - 12) != &dword_28898C0 )
      v65 = (unsigned int *)(v145 - 4);
          v66 = __ldrex(v65);
        while ( __strex(v66 - 1, v65) );
        v66 = (*v65)--;
      if ( v66 <= 0 )
        j_j_j_j__ZdlPv_9(v35);
    v36 = v144 - 12;
    if ( (int *)(v144 - 12) != &dword_28898C0 )
      v67 = (unsigned int *)(v144 - 4);
          v68 = __ldrex(v67);
        while ( __strex(v68 - 1, v67) );
        v68 = (*v67)--;
      if ( v68 <= 0 )
        j_j_j_j__ZdlPv_9(v36);
    v27 = v143 - 12;
    if ( (int *)(v143 - 12) == &dword_28898C0 )
    v28 = (unsigned int *)(v143 - 4);
    goto LABEL_103;
  *(_DWORD *)a6 = *(_DWORD *)(a5 + 12);
  EntityInteraction::setInteractText((int *)(a6 + 4), (int *)(a5 + 16));
  *(_QWORD *)(a6 + 8) = *(_QWORD *)(a5 + 20);
  return 1;
}


int __fastcall FilterGroup::FilterGroup(int a1, int a2)
{
  int v2; // r11@1
  int v3; // r8@1
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
  char *v22; // r5@18
  int v23; // r3@19
  unsigned int *v24; // r3@20
  unsigned int v25; // r4@22

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_270084C;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  v4 = 0;
  v5 = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 12) = 0;
  v6 = HIDWORD(v5) - v5;
  *(_DWORD *)(v2 + 16) = 0;
  v7 = v6 >> 3;
  if ( v6 >> 3 )
  {
    if ( v7 >= 0x20000000 )
      sub_21E57F4();
    v4 = (char *)operator new(v6);
  }
  *(_DWORD *)(v2 + 8) = v4;
  *(_DWORD *)(v2 + 12) = v4;
  *(_DWORD *)(v2 + 16) = &v4[8 * v7];
  *(_QWORD *)&v8 = *(_QWORD *)(v3 + 8);
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
  v16 = *(_QWORD *)(v3 + 20);
  *(_DWORD *)(v2 + 20) = 0;
  *(_DWORD *)(v2 + 24) = 0;
  v17 = HIDWORD(v16) - v16;
  *(_DWORD *)(v2 + 28) = 0;
  v18 = v17 >> 3;
  if ( v17 >> 3 )
    if ( v18 >= 0x20000000 )
    v15 = (char *)operator new(v17);
  *(_DWORD *)(v2 + 20) = v15;
  *(_DWORD *)(v2 + 24) = v15;
  *(_DWORD *)(v2 + 28) = &v15[8 * v18];
  *(_QWORD *)&v19 = *(_QWORD *)(v3 + 20);
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
  return v2;
}


int __fastcall FilterGroup::_evaluateMember(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  int result; // r0@2

  v3 = a2;
  v4 = a3 + 36 * *(_WORD *)(a2 + 4);
  if ( (*(int (**)(void))(*(_DWORD *)a1 + 12))() == 1 )
    result = (*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 12))(v3, v4);
  else
    result = 0;
  return result;
}


FilterGroup *__fastcall FilterGroup::~FilterGroup(FilterGroup *this)
{
  FilterGroup *v1; // r8@1
  int v2; // r5@1
  int v3; // r7@1
  int v4; // r4@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r0@5
  unsigned int *v7; // r6@9
  unsigned int v8; // r0@11
  int v9; // r5@20
  int v10; // r7@20
  int v11; // r4@21
  unsigned int *v12; // r1@22
  unsigned int v13; // r0@24
  unsigned int *v14; // r6@28
  unsigned int v15; // r0@30

  v1 = this;
  *(_DWORD *)this = &off_270084C;
  v3 = *(_QWORD *)((char *)this + 20) >> 32;
  v2 = *(_QWORD *)((char *)this + 20);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v2 + 4);
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
      v2 += 8;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 5);
  }
  if ( v2 )
    operator delete((void *)v2);
  v10 = *((_QWORD *)v1 + 1) >> 32;
  v9 = *((_QWORD *)v1 + 1);
  if ( v9 != v10 )
      v11 = *(_DWORD *)(v9 + 4);
      if ( v11 )
        v12 = (unsigned int *)(v11 + 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 == 1 )
          v14 = (unsigned int *)(v11 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
            v15 = (*v14)--;
          if ( v15 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
      v9 += 8;
    while ( v9 != v10 );
    v9 = *((_DWORD *)v1 + 2);
  if ( v9 )
    operator delete((void *)v9);
  return v1;
}


signed int __fastcall FilterGroup::addFilterTest(int a1, int a2)
{
  const void **v2; // r4@1
  int v3; // r5@1
  __int64 v4; // r0@4
  char *v5; // r0@6
  signed int v6; // r4@7
  int v7; // r5@10
  unsigned int *v8; // r1@11
  unsigned int v9; // r0@13
  unsigned int *v10; // r6@17
  unsigned int v11; // r0@19
  unsigned int *v13; // r2@25
  signed int v14; // r1@27
  char *v15; // [sp+0h] [bp-28h]@6
  unsigned int v16; // [sp+4h] [bp-24h]@2
  int v17; // [sp+8h] [bp-20h]@5

  v2 = (const void **)a2;
  v3 = a1;
  if ( !*(_DWORD *)(a2 + 32) )
    sub_21E5F48();
  (*(void (__fastcall **)(unsigned int *, int))(a2 + 36))(&v16, a2 + 24);
  if ( v16 && (*(int (**)(void))(*(_DWORD *)v16 + 8))() == 1 )
  {
    v4 = *(_QWORD *)(v3 + 24);
    if ( (_DWORD)v4 == HIDWORD(v4) )
    {
      std::vector<std::shared_ptr<FilterTest>,std::allocator<std::shared_ptr<FilterTest>>>::_M_emplace_back_aux<std::shared_ptr<FilterTest>>(
        (_QWORD *)(v3 + 20),
        (int)&v16);
    }
    else
      *(_QWORD *)v4 = v16;
      HIDWORD(v4) = v17;
      v17 = 0;
      *(_DWORD *)(v4 + 4) = HIDWORD(v4);
      v16 = 0;
      *(_DWORD *)(v3 + 24) = v4 + 8;
    v6 = 1;
  }
  else
    v15 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v15, *((_DWORD *)*v2 - 3) + 27);
    sub_21E7408((const void **)&v15, "Filter test failed setup ->", 0x1Bu);
    sub_21E72F0((const void **)&v15, v2);
    JsonUtil::errorMessage((int *)&v15);
    v5 = v15 - 12;
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v15 - 4);
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
        j_j_j_j__ZdlPv_9(v5);
    v6 = 0;
  v7 = v17;
  if ( v17 )
    v8 = (unsigned int *)(v17 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  return v6;
}


signed int __fastcall FilterGroup::_parseObject(int a1, int a2, Json::Value *a3)
{
  Json::Value *v3; // r5@1
  int v4; // r4@1
  int v5; // r6@1
  signed int v6; // r11@2
  int v7; // r0@5
  int *v9; // r6@14
  int *v10; // r9@14
  __int64 v11; // r0@18
  Json::Value *v12; // r0@21
  int v13; // r7@21
  signed int v14; // r9@23
  int v15; // r5@34
  unsigned int *v16; // r1@35
  unsigned int v17; // r0@37
  unsigned int *v18; // r6@41
  unsigned int v19; // r0@43
  int *v20; // r5@49 OVERLAPPED
  int *v21; // r6@49 OVERLAPPED
  unsigned int *v22; // r2@51
  signed int v23; // r1@53
  int *v24; // r0@59
  char v25; // [sp+4h] [bp-44h]@21
  FilterGroup *v26; // [sp+8h] [bp-40h]@16
  int v27; // [sp+Ch] [bp-3Ch]@19
  int *v28; // [sp+10h] [bp-38h]@4
  int *v29; // [sp+14h] [bp-34h]@14
  char v30; // [sp+1Ch] [bp-2Ch]@4

  v3 = a3;
  v4 = a1;
  v5 = a2;
  if ( Json::Value::isNull(a3) )
    return 0;
  if ( Json::Value::isArray(v3) == 1 )
  {
    Json::Value::begin((Json::Value *)&v28, (int)v3);
    Json::Value::end((Json::Value *)&v30, (int)v3);
    if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v28, (const Json::ValueIteratorBase *)&v30) != 1 )
    {
      while ( 1 )
      {
        v7 = Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v28);
        if ( !FilterGroup::_parseObject(v4, v5, v7) )
          break;
        Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v28);
        if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v28, (const Json::ValueIteratorBase *)&v30) )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  if ( Json::Value::isObject(v3) != 1 )
  if ( Json::Value::isMember(v3, "test") == 1 )
    if ( !FilterGroup::_parseTest((FilterGroup *)v4, v3) )
  Json::Value::getMemberNames((Json::Value *)&v28, (int)v3);
  v10 = v29;
  v9 = v28;
  if ( (unsigned int)(v29 - v28) < 2 || *(_DWORD *)(v4 + 4) != 1 )
    if ( v28 == v29 )
      v14 = 4;
    else
        JsonUtil::ScopeMarker::ScopeMarker(&v25, v9);
        v12 = (Json::Value *)Json::Value::operator[]((int)v3, (const char **)v9);
        v13 = FilterGroup::_parseMember(v4, (const void **)v9, v12);
        JsonUtil::ScopeMarker::~ScopeMarker((JsonUtil::ScopeMarker *)&v25);
        if ( !v13 )
        ++v9;
        if ( v10 == v9 )
        {
          v14 = 4;
          goto LABEL_28;
        }
      v14 = 1;
LABEL_28:
    v6 = 0;
    if ( v14 == 4 )
      v14 = 0;
  else
    (*(void (__fastcall **)(FilterGroup **, int, _DWORD))(*(_DWORD *)v4 + 8))(&v26, v4, 0);
    if ( v26 )
      if ( FilterGroup::parse(v26, v3) == 1 )
        v11 = *(_QWORD *)(v4 + 12);
        if ( (_DWORD)v11 == HIDWORD(v11) )
          std::vector<std::shared_ptr<FilterGroup>,std::allocator<std::shared_ptr<FilterGroup>>>::_M_emplace_back_aux<std::shared_ptr<FilterGroup>>(
            (_QWORD *)(v4 + 8),
            (int)&v26);
        else
          *(_QWORD *)v11 = (unsigned int)v26;
          HIDWORD(v11) = v27;
          v27 = 0;
          *(_DWORD *)(v11 + 4) = HIDWORD(v11);
          v26 = 0;
          *(_DWORD *)(v4 + 12) = v11 + 8;
        v6 = 1;
      else
        v6 = 0;
      v6 = 0;
    v15 = v27;
    if ( v27 )
      v16 = (unsigned int *)(v27 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 == 1 )
        v18 = (unsigned int *)(v15 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
        if ( &pthread_create )
          __dmb();
          do
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
    v14 = 1;
  *(_QWORD *)&v20 = *(_QWORD *)&v28;
  if ( v28 != v29 )
    do
      v24 = (int *)(*v20 - 12);
      if ( v24 != &dword_28898C0 )
        v22 = (unsigned int *)(*v20 - 4);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j__ZdlPv_9(v24);
      ++v20;
    while ( v20 != v21 );
    v20 = v28;
  if ( v20 )
    operator delete(v20);
  if ( !v14 )
    v6 = 1;
  return v6;
}


signed int __fastcall FilterGroup::_setupContext(int a1, int a2, int a3)
{
  int v3; // r4@1
  Entity *v4; // r0@1
  int v5; // r5@2
  bool v6; // zf@2
  char v7; // r0@5
  char v8; // r0@8
  char v9; // r0@11
  char v10; // r0@14
  int v11; // r0@18
  BlockSource *v12; // r1@22
  Entity *v14; // r0@31
  int v15; // r0@33
  int v16; // r0@34
  int v17; // [sp+4h] [bp-2Ch]@34
  int v18; // [sp+8h] [bp-28h]@34
  int v19; // [sp+Ch] [bp-24h]@34

  v3 = a3;
  v4 = *(Entity **)(a3 + 4);
  if ( !v4 )
  {
    v4 = *(Entity **)a3;
    *(_DWORD *)(a3 + 4) = *(_DWORD *)a3;
    v5 = *(_WORD *)(a2 + 4);
    v6 = v5 == 0;
    if ( *(_WORD *)(a2 + 4) )
      v6 = *(_DWORD *)(a3 + 8) == 0;
    if ( !v6 )
    {
      v7 = byte_2803918;
      __dmb();
      if ( !(v7 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_2803918) )
      {
        sub_21E94B4((void **)&unk_2803914, "other");
        _cxa_atexit(sub_21E6EDC);
        j___cxa_guard_release((unsigned int *)&byte_2803918);
      }
      v8 = byte_2803920;
      if ( !(v8 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_2803920) )
        sub_21E94B4((void **)&unk_280391C, "parent");
        j___cxa_guard_release((unsigned int *)&byte_2803920);
      v9 = byte_2803928;
      if ( !(v9 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_2803928) )
        sub_21E94B4((void **)&unk_2803924, "player");
        j___cxa_guard_release((unsigned int *)&byte_2803928);
      v10 = byte_2803930[0];
      if ( !(v10 & 1) && j___cxa_guard_acquire(byte_2803930) )
        sub_21E94B4((void **)&unk_280392C, "target");
        j___cxa_guard_release(byte_2803930);
      if ( (unsigned __int16)(v5 - 1) >= 4u )
        return 0;
      v11 = std::_Hashtable<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
              *(unsigned __int64 **)(v3 + 8),
              (int **)*(&off_2700860 + (signed __int16)(v5 - 1)));
      if ( v11 )
        v4 = *(Entity **)(v11 + 24);
      else
        v4 = 0;
      *(_DWORD *)(v3 + 4) = v4;
    }
  }
  v12 = *(BlockSource **)(v3 + 12);
  if ( !v12 )
    if ( v4 )
      v12 = (BlockSource *)Entity::getRegion(v4);
      *(_DWORD *)(v3 + 12) = v12;
    else
      v12 = 0;
  if ( !*(_DWORD *)(v3 + 16) && v12 )
    *(_DWORD *)(v3 + 16) = BlockSource::getDimensionConst(v12);
  if ( *(_DWORD *)(v3 + 20) )
    goto LABEL_33;
  v14 = *(Entity **)(v3 + 4);
  if ( v14 )
    *(_DWORD *)(v3 + 20) = Entity::getLevel(v14);
LABEL_33:
    v15 = *(_DWORD *)(v3 + 4);
    if ( v15 )
      v16 = (*(int (**)(void))(*(_DWORD *)v15 + 52))();
      BlockPos::BlockPos((int)&v17, v16);
      *(_DWORD *)(v3 + 24) = v17;
      *(_DWORD *)(v3 + 28) = v18;
      *(_DWORD *)(v3 + 32) = v19;
  return 1;
}


signed int __fastcall FilterGroup::evaluate(int a1, int a2)
{
  int v2; // r9@1
  int *v3; // r6@1
  int *v4; // r7@1
  int v5; // r8@1
  __int64 v6; // r4@6
  int v7; // r6@7
  int v8; // r7@8
  __int64 v9; // r4@16
  int v10; // r6@17
  int v11; // r7@18

  v2 = a1;
  v3 = *(int **)(a1 + 8);
  v4 = *(int **)(a1 + 12);
  v5 = a2;
  if ( *(_DWORD *)(a1 + 4) )
  {
    if ( v3 != v4 )
    {
      while ( !*v3 || !FilterGroup::evaluate(*v3, v5) )
      {
        v3 += 2;
        if ( v4 == v3 )
          goto LABEL_6;
      }
      return 1;
    }
LABEL_6:
    v6 = *(_QWORD *)(v2 + 20);
    if ( (_DWORD)v6 != HIDWORD(v6) )
      while ( 1 )
        v7 = *(_DWORD *)v6;
        if ( *(_DWORD *)v6 )
        {
          v8 = v5 + 36 * *(_WORD *)(v7 + 4);
          if ( (*(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v2 + 12))(
                 v2,
                 *(_DWORD *)v6,
                 v5 + 36 * *(_WORD *)(v7 + 4)) == 1 )
          {
            if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)v7 + 12))(v7, v8) )
              break;
          }
        }
        LODWORD(v6) = v6 + 8;
        if ( HIDWORD(v6) == (_DWORD)v6 )
          return 0;
  }
  else if ( v3 == v4 )
LABEL_16:
    v9 = *(_QWORD *)(v2 + 20);
    if ( (_DWORD)v9 == HIDWORD(v9) )
    while ( 1 )
      v10 = *(_DWORD *)v9;
      if ( *(_DWORD *)v9 )
        v11 = v5 + 36 * *(_WORD *)(v10 + 4);
        if ( (*(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v2 + 12))(
               v2,
               *(_DWORD *)v9,
               v5 + 36 * *(_WORD *)(v10 + 4)) != 1
          || (*(int (__fastcall **)(int, int))(*(_DWORD *)v10 + 12))(v10, v11) != 1 )
          break;
      LODWORD(v9) = v9 + 8;
      if ( HIDWORD(v9) == (_DWORD)v9 )
        return 1;
  else
    while ( !*v3 || FilterGroup::evaluate(*v3, v5) == 1 )
      v3 += 2;
      if ( v4 == v3 )
        goto LABEL_16;
  return 0;
}


signed int __fastcall FilterGroup::_parseFilterInputs(int a1, int a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r8@1
  int v6; // r4@1
  signed int v7; // r7@2
  void *v8; // r0@2
  signed __int16 v9; // r0@5
  char *v10; // r0@6
  unsigned int *v11; // r2@7
  signed int v12; // r1@9
  char *v13; // r0@15
  signed int v14; // r7@17
  void *v15; // r0@17
  signed __int16 v16; // r0@20
  unsigned int *v17; // r2@26
  signed int v18; // r1@28
  char *v19; // r0@35
  signed int v20; // r7@37
  void *v21; // r0@37
  signed int v22; // r4@40
  void *v23; // r0@40
  unsigned int *v25; // r2@43
  signed int v26; // r1@45
  unsigned int *v27; // r2@47
  signed int v28; // r1@49
  unsigned int *v29; // r2@55
  signed int v30; // r1@57
  unsigned int *v31; // r2@63
  signed int v32; // r1@65
  unsigned int *v33; // r2@71
  signed int v34; // r1@73
  int v35; // [sp+10h] [bp-58h]@40
  int v36; // [sp+18h] [bp-50h]@37
  int v37; // [sp+20h] [bp-48h]@17
  int v38; // [sp+24h] [bp-44h]@17
  char *v39; // [sp+28h] [bp-40h]@17
  int v40; // [sp+2Ch] [bp-3Ch]@17
  int v41; // [sp+30h] [bp-38h]@17
  int v42; // [sp+38h] [bp-30h]@2
  int v43; // [sp+3Ch] [bp-2Ch]@2
  char *v44; // [sp+40h] [bp-28h]@2
  int v45; // [sp+44h] [bp-24h]@2
  int v46; // [sp+48h] [bp-20h]@2

  v4 = a3;
  v5 = a4;
  v6 = a2;
  if ( *(_DWORD *)(a3 + 8) )
  {
    v43 = 1;
    v44 = (char *)&unk_28898CC;
    v45 = 0;
    v46 = 0;
    sub_21E94B4((void **)&v42, "subject");
    v7 = FilterGroup::_parseFilterParam(
           *(_DWORD *)(v4 + 8),
           (const void **)v4,
           (const char **)&v42,
           v6,
           (int)&v43);
    v8 = (void *)(v42 - 12);
    if ( (int *)(v42 - 12) != &dword_28898C0 )
    {
      v17 = (unsigned int *)(v42 - 4);
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
        j_j_j_j__ZdlPv_9(v8);
    }
    if ( !v7 )
      v10 = v44 - 12;
      if ( (int *)(v44 - 12) == &dword_28898C0 )
        return 0;
      v11 = (unsigned int *)(v44 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
LABEL_60:
        if ( v12 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
LABEL_59:
      v12 = (*v11)--;
      goto LABEL_60;
    switch ( v45 )
      case 1:
        v9 = 1;
        break;
      case 3:
        v9 = 3;
      case 4:
        v9 = 4;
      case 2:
        v9 = 2;
      default:
        v9 = 0;
    *(_WORD *)v5 = v9;
    v13 = v44 - 12;
    if ( (int *)(v44 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v44 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
  }
  if ( !*(_DWORD *)(v4 + 16) )
    goto LABEL_36;
  v38 = 1;
  v39 = (char *)&unk_28898CC;
  v40 = 0;
  v41 = 0;
  sub_21E94B4((void **)&v37, "operator");
  v14 = FilterGroup::_parseFilterParam(
          *(_DWORD *)(v4 + 16),
          (const void **)v4,
          (const char **)&v37,
          v6,
          (int)&v38);
  v15 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v37 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
    else
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  if ( !v14 )
    v10 = v39 - 12;
    if ( (int *)(v39 - 12) == &dword_28898C0 )
      return 0;
    v11 = (unsigned int *)(v39 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    goto LABEL_59;
  switch ( v40 )
    case 1:
      v16 = 1;
      break;
    case 5:
      v16 = 5;
    case 3:
      v16 = 3;
    case 4:
      v16 = 4;
    case 2:
      v16 = 2;
    default:
      v16 = 0;
  *(_WORD *)(v5 + 20) = v16;
  v19 = v39 - 12;
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v39 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
LABEL_36:
  if ( !*(_DWORD *)(v4 + 12) )
    goto LABEL_93;
  sub_21E94B4((void **)&v36, "domain");
  v20 = FilterGroup::_parseFilterParam(
          *(_DWORD *)(v4 + 12),
          (const char **)&v36,
          v5 + 4);
  v21 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v36 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  if ( v20 )
LABEL_93:
    if ( !*(_DWORD *)(v4 + 20) )
      return 1;
    sub_21E94B4((void **)&v35, "value");
    v22 = FilterGroup::_parseFilterParam(
            *(_DWORD *)(v4 + 20),
            (const void **)v4,
            (const char **)&v35,
            v6,
            v5 + 24);
    v23 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v35 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    if ( v22 )
  return 0;
}


int __fastcall FilterGroup::_parseMember(int a1, const void **a2, Json::Value *a3)
{
  Json::Value *v3; // r5@1
  int v4; // r4@1
  const void **v5; // r6@1
  signed int v6; // r4@2
  signed int v8; // r6@11
  __int64 v9; // r0@13
  __int64 v11; // r0@22
  int v12; // r4@26
  unsigned int *v13; // r1@27
  unsigned int v14; // r0@29
  unsigned int *v15; // r5@33
  unsigned int v16; // r0@35
  int v17; // r5@45
  unsigned int *v18; // r1@46
  unsigned int v19; // r0@48
  unsigned int *v20; // r6@52
  unsigned int v21; // r0@54
  FilterGroup *v22; // [sp+0h] [bp-20h]@20
  int v23; // [sp+4h] [bp-1Ch]@23
  FilterGroup *v24; // [sp+8h] [bp-18h]@11
  int v25; // [sp+Ch] [bp-14h]@14

  v3 = a3;
  v4 = a1;
  v5 = a2;
  if ( Json::Value::isNull(a3) )
    return 0;
  if ( sub_21E7D6C(v5, "all_of") && sub_21E7D6C(v5, "all") && sub_21E7D6C(v5, "AND") )
  {
    if ( sub_21E7D6C(v5, "any_of") && sub_21E7D6C(v5, "any") && sub_21E7D6C(v5, "OR") )
      return (*(int (__fastcall **)(int, const void **, Json::Value *))(*(_DWORD *)v4 + 16))(v4, v5, v3);
    if ( *(_DWORD *)(v4 + 4) != 1 )
    {
      (*(void (__fastcall **)(FilterGroup **, int, signed int))(*(_DWORD *)v4 + 8))(&v22, v4, 1);
      if ( v22 )
      {
        if ( FilterGroup::parse(v22, v3) == 1 )
        {
          v11 = *(_QWORD *)(v4 + 12);
          if ( (_DWORD)v11 == HIDWORD(v11) )
          {
            std::vector<std::shared_ptr<FilterGroup>,std::allocator<std::shared_ptr<FilterGroup>>>::_M_emplace_back_aux<std::shared_ptr<FilterGroup>>(
              (_QWORD *)(v4 + 8),
              (int)&v22);
          }
          else
            *(_QWORD *)v11 = (unsigned int)v22;
            HIDWORD(v11) = v23;
            v23 = 0;
            *(_DWORD *)(v11 + 4) = HIDWORD(v11);
            v22 = 0;
            *(_DWORD *)(v4 + 12) = v11 + 8;
          v6 = 1;
        }
        else
          v6 = 0;
      }
      else
        v6 = 0;
      v17 = v23;
      if ( v23 )
        v18 = (unsigned int *)(v23 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 == 1 )
          v20 = (unsigned int *)(v17 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
          if ( &pthread_create )
            __dmb();
            do
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
            v21 = (*v20)--;
          if ( v21 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
      return v6;
    }
    return FilterGroup::parse((FilterGroup *)v4, v3);
  }
  if ( !*(_DWORD *)(v4 + 4) )
  v8 = 0;
  (*(void (__fastcall **)(FilterGroup **, int, _DWORD))(*(_DWORD *)v4 + 8))(&v24, v4, 0);
  if ( v24 )
    if ( FilterGroup::parse(v24, v3) == 1 )
      v9 = *(_QWORD *)(v4 + 12);
      if ( (_DWORD)v9 == HIDWORD(v9) )
        std::vector<std::shared_ptr<FilterGroup>,std::allocator<std::shared_ptr<FilterGroup>>>::_M_emplace_back_aux<std::shared_ptr<FilterGroup>>(
          (_QWORD *)(v4 + 8),
          (int)&v24);
        *(_QWORD *)v9 = (unsigned int)v24;
        HIDWORD(v9) = v25;
        v25 = 0;
        *(_DWORD *)(v9 + 4) = HIDWORD(v9);
        v24 = 0;
        *(_DWORD *)(v4 + 12) = v9 + 8;
      v8 = 1;
    else
      v8 = 0;
  v12 = v25;
  if ( v25 )
    v13 = (unsigned int *)(v25 + 4);
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
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  return v8;
}


signed int __fastcall FilterGroup::_parseTest(FilterGroup *this, const Json::Value *a2)
{
  const Json::Value *v2; // r5@1
  FilterGroup *v3; // r4@1
  Json::Value *v4; // r6@2
  void *v5; // r0@4
  int v6; // r6@5
  signed int v7; // r4@7
  void *v8; // r0@8
  char *v10; // r0@11
  char *v11; // r0@13
  char *v12; // r0@15
  void *v13; // r0@16
  void *v14; // r0@17
  unsigned int *v15; // r2@18
  signed int v16; // r1@20
  unsigned int *v17; // r2@22
  signed int v18; // r1@24
  unsigned int *v19; // r2@30
  signed int v20; // r1@32
  unsigned int *v21; // r2@34
  signed int v22; // r1@36
  unsigned int *v23; // r2@38
  signed int v24; // r1@40
  unsigned int *v25; // r2@49
  signed int v26; // r1@51
  unsigned int *v27; // r2@60
  signed int v28; // r1@62
  char *v29; // [sp+0h] [bp-58h]@13
  __int16 v30; // [sp+4h] [bp-54h]@6
  int v31; // [sp+8h] [bp-50h]@6
  __int64 v32; // [sp+Ch] [bp-4Ch]@6
  int v33; // [sp+14h] [bp-44h]@6
  __int16 v34; // [sp+18h] [bp-40h]@6
  int v35; // [sp+1Ch] [bp-3Ch]@6
  char *v36; // [sp+20h] [bp-38h]@6
  signed int v37; // [sp+24h] [bp-34h]@6
  int v38; // [sp+28h] [bp-30h]@6
  char *v39; // [sp+2Ch] [bp-2Ch]@11
  int v40; // [sp+34h] [bp-24h]@4
  int v41; // [sp+38h] [bp-20h]@4
  int v42; // [sp+40h] [bp-18h]@8

  v2 = a2;
  v3 = this;
  if ( Json::Value::isNull(a2) )
    return 0;
  v4 = (Json::Value *)Json::Value::operator[]((int)v2, "test");
  if ( Json::Value::isNull(v4) || !Json::Value::isString(v4) )
  {
    sub_21E94B4((void **)&v42, "Filter member 'test' is not a string");
    JsonUtil::errorMessage(&v42);
    v8 = (void *)(v42 - 12);
    if ( (int *)(v42 - 12) != &dword_28898C0 )
    {
      v17 = (unsigned int *)(v42 - 4);
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
        j_j_j_j__ZdlPv_9(v8);
    }
  }
  sub_21E94B4((void **)&v40, (const char *)&unk_257BC67);
  Json::Value::asString(&v41, (int)v4, &v40);
  v5 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v40 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = FilterList::findFilterDefinition((int **)&v41);
  if ( v6 )
    v30 = 0;
    v31 = 1;
    v32 = (unsigned int)&unk_28898CC;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = (char *)&unk_28898CC;
    v37 = 1;
    v38 = 0;
    if ( FilterGroup::_parseFilterInputs((int)v3, (int)v2, v6, (int)&v30) )
      v7 = FilterGroup::addFilterTest((int)v3, v6);
      v29 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v29, *(_DWORD *)(v41 - 12) + 37);
      sub_21E7408((const void **)&v29, "Filter test failed to parse inputs ->", 0x25u);
      sub_21E72F0((const void **)&v29, (const void **)&v41);
      JsonUtil::errorMessage((int *)&v29);
      v11 = v29 - 12;
      if ( (int *)(v29 - 12) != &dword_28898C0 )
        v27 = (unsigned int *)(v29 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
        }
        else
          v28 = (*v27)--;
        if ( v28 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      v7 = 0;
    v12 = v36 - 12;
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v36 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    v13 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v32 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
  else
    v39 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v39, *(_DWORD *)(v41 - 12) + 25);
    sub_21E7408((const void **)&v39, "Filter test not found -> ", 0x19u);
    sub_21E72F0((const void **)&v39, (const void **)&v41);
    JsonUtil::errorMessage((int *)&v39);
    v10 = v39 - 12;
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v39 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    v7 = 0;
  v14 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v41 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  return v7;
}


signed int __fastcall FilterGroup::addFilterTest(int a1, int **a2)
{
  int v2; // r5@1
  int v3; // r1@1
  signed int result; // r0@2

  v2 = a1;
  v3 = FilterList::findFilterDefinition(a2);
  if ( v3 )
    result = FilterGroup::addFilterTest(v2, v3);
  else
    result = 0;
  return result;
}


void __fastcall FilterGroup::~FilterGroup(FilterGroup *this)
{
  FilterGroup::~FilterGroup(this);
}


int __fastcall FilterGroup::parse(FilterGroup *this, const Json::Value *a2)
{
  const Json::Value *v2; // r4@1
  FilterGroup *v3; // r5@1
  int v4; // r4@1
  void *v5; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v9, "top");
  v4 = FilterGroup::_parseObject((int)v3, (int)&v9, (int)v2);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v9 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  return v4;
}
