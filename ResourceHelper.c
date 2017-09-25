

Json::Value *__fastcall ResourceHelper::serializePackStackEntry(ResourceHelper *this, const PackInstanceId *a2, Json::Value *a3)
{
  Json::Value *v3; // r8@1
  ResourceHelper *v4; // r4@1
  int v5; // r6@1
  void *v6; // r0@1
  int v7; // r0@2
  int v8; // r0@2
  int v9; // r0@2
  int v10; // r0@2
  const char **v11; // r4@2
  int v12; // t1@2
  int v13; // r5@3
  unsigned int *v15; // r2@5
  signed int v16; // r1@7
  int v17; // [sp+0h] [bp-80h]@3
  char v18; // [sp+10h] [bp-70h]@2
  char v19; // [sp+20h] [bp-60h]@2
  char v20; // [sp+30h] [bp-50h]@2
  char v21; // [sp+40h] [bp-40h]@2
  int v22; // [sp+54h] [bp-2Ch]@1
  char v23; // [sp+58h] [bp-28h]@1

  v3 = a2;
  v4 = this;
  v5 = j_Json::Value::operator[](a2, "pack_id");
  j_mce::UUID::asString((mce::UUID *)&v22);
  j_Json::Value::Value((int)&v23, (const char **)&v22);
  j_Json::Value::operator=(v5, (const Json::Value *)&v23);
  j_Json::Value::~Value((Json::Value *)&v23);
  v6 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v22 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  j_Json::Value::Value(&v21, 0);
  v7 = j_SemVersion::getMajor((ResourceHelper *)((char *)v4 + 16));
  j_Json::Value::Value((Json::Value *)&v20, v7);
  j_Json::Value::append((Json::Value *)&v21, (const Json::Value *)&v20);
  j_Json::Value::~Value((Json::Value *)&v20);
  v8 = j_SemVersion::getMinor((ResourceHelper *)((char *)v4 + 16));
  j_Json::Value::Value((Json::Value *)&v19, v8);
  j_Json::Value::append((Json::Value *)&v21, (const Json::Value *)&v19);
  j_Json::Value::~Value((Json::Value *)&v19);
  v9 = j_SemVersion::getPatch((ResourceHelper *)((char *)v4 + 16));
  j_Json::Value::Value((Json::Value *)&v18, v9);
  j_Json::Value::append((Json::Value *)&v21, (const Json::Value *)&v18);
  j_Json::Value::~Value((Json::Value *)&v18);
  v10 = j_Json::Value::operator[](v3, "version");
  j_Json::Value::operator=(v10, (const Json::Value *)&v21);
  v12 = *((_DWORD *)v4 + 12);
  v11 = (const char **)((char *)v4 + 48);
  if ( *(_DWORD *)(v12 - 12) )
    v13 = j_Json::Value::operator[](v3, "subpack");
    j_Json::Value::Value((int)&v17, v11);
    j_Json::Value::operator=(v13, (const Json::Value *)&v17);
    j_Json::Value::~Value((Json::Value *)&v17);
  return j_Json::Value::~Value((Json::Value *)&v21);
}


signed int __fastcall ResourceHelper::deserializePackStackEntry(Json::Value *a1, int a2, int *a3)
{
  int *v3; // r6@1
  int v4; // r4@1
  Json::Value *v5; // r10@1
  void *v6; // r5@2
  void *v7; // r0@2
  bool v8; // zf@3
  int *v9; // r0@7
  char *v10; // r0@7
  Json::Value *v11; // r7@9
  void *v12; // r0@10
  int *v13; // r0@12
  void *v14; // r0@12
  void *v15; // r0@13
  void *v16; // r0@14
  void *v17; // r0@15
  void *v18; // r0@16
  char *v19; // r0@17
  unsigned int *v20; // r2@18
  signed int v21; // r1@20
  void *v23; // r0@25
  void *v24; // r0@26
  void *v25; // r0@27
  Json::Value *v26; // r0@28
  __int16 v27; // r8@28
  Json::Value *v28; // r0@28
  __int16 v29; // r11@28
  Json::Value *v30; // r0@28
  __int16 v31; // r6@28
  int *v32; // r0@28
  void *v33; // r0@28
  void *v34; // r0@29
  void *v35; // r0@30
  void *v36; // r0@31
  unsigned int *v37; // r2@33
  signed int v38; // r1@35
  unsigned int *v39; // r2@37
  signed int v40; // r1@39
  unsigned int *v41; // r2@41
  signed int v42; // r1@43
  unsigned int *v43; // r2@49
  signed int v44; // r1@51
  unsigned int *v45; // r2@53
  signed int v46; // r1@55
  unsigned int *v47; // r2@57
  signed int v48; // r1@59
  unsigned int *v49; // r2@61
  signed int v50; // r1@63
  unsigned int *v51; // r2@65
  signed int v52; // r1@67
  int v53; // r1@72
  __int64 v54; // r2@72
  int v55; // r1@72
  __int16 v56; // r1@72
  void *v57; // r0@72
  void *v58; // r0@73
  void *v59; // r0@74
  Json::Value *v60; // r5@75
  void *v61; // r0@76
  void *v62; // r0@77
  void *v63; // r0@78
  void *v64; // r0@79
  void *v65; // r0@80
  void *v66; // r0@81
  unsigned int *v67; // r2@83
  signed int v68; // r1@85
  unsigned int *v69; // r2@87
  signed int v70; // r1@89
  unsigned int *v71; // r2@91
  signed int v72; // r1@93
  unsigned int *v73; // r2@95
  signed int v74; // r1@97
  unsigned int *v75; // r2@99
  signed int v76; // r1@101
  unsigned int *v77; // r2@103
  signed int v78; // r1@105
  unsigned int *v79; // r2@107
  signed int v80; // r1@109
  unsigned int *v81; // r2@111
  signed int v82; // r1@113
  unsigned int *v83; // r2@115
  signed int v84; // r1@117
  unsigned int *v85; // r2@159
  signed int v86; // r1@161
  unsigned int *v87; // r2@187
  signed int v88; // r1@189
  unsigned int *v89; // r2@191
  signed int v90; // r1@193
  unsigned int *v91; // r2@195
  signed int v92; // r1@197
  unsigned int *v93; // r2@199
  signed int v94; // r1@201
  int v95; // [sp+10h] [bp-108h]@76
  int v96; // [sp+14h] [bp-104h]@76
  __int64 v97; // [sp+18h] [bp-100h]@72
  __int64 v98; // [sp+20h] [bp-F8h]@72
  int v99; // [sp+28h] [bp-F0h]@72
  __int16 v100; // [sp+2Ch] [bp-ECh]@72
  int v101; // [sp+30h] [bp-E8h]@72
  int v102; // [sp+34h] [bp-E4h]@72
  int v103; // [sp+38h] [bp-E0h]@72
  __int16 v104; // [sp+3Ch] [bp-DCh]@72
  char v105; // [sp+3Eh] [bp-DAh]@72
  char v106; // [sp+40h] [bp-D8h]@72
  int v107; // [sp+4Ch] [bp-CCh]@28
  int v108; // [sp+54h] [bp-C4h]@28
  int v109; // [sp+58h] [bp-C0h]@28
  __int16 v110; // [sp+5Ch] [bp-BCh]@28
  int v111; // [sp+60h] [bp-B8h]@28
  int v112; // [sp+64h] [bp-B4h]@28
  int v113; // [sp+68h] [bp-B0h]@28
  __int16 v114; // [sp+6Ch] [bp-ACh]@28
  char v115; // [sp+6Eh] [bp-AAh]@28
  int v116; // [sp+74h] [bp-A4h]@12
  int v117; // [sp+7Ch] [bp-9Ch]@12
  int v118; // [sp+80h] [bp-98h]@12
  __int16 v119; // [sp+84h] [bp-94h]@12
  int v120; // [sp+88h] [bp-90h]@12
  int v121; // [sp+8Ch] [bp-8Ch]@12
  int v122; // [sp+90h] [bp-88h]@12
  __int16 v123; // [sp+94h] [bp-84h]@12
  char v124; // [sp+96h] [bp-82h]@12
  int v125; // [sp+9Ch] [bp-7Ch]@10
  int v126; // [sp+A0h] [bp-78h]@7
  __int16 v127; // [sp+A4h] [bp-74h]@12
  int v128; // [sp+A8h] [bp-70h]@12
  int v129; // [sp+ACh] [bp-6Ch]@12
  int v130; // [sp+B0h] [bp-68h]@12
  __int16 v131; // [sp+B4h] [bp-64h]@12
  char v132; // [sp+B6h] [bp-62h]@12
  __int64 v133; // [sp+B8h] [bp-60h]@7
  __int64 v134; // [sp+C0h] [bp-58h]@7
  void *v135; // [sp+CCh] [bp-4Ch]@7
  __int64 v136; // [sp+D0h] [bp-48h]@3
  __int64 v137; // [sp+D8h] [bp-40h]@4
  int v138; // [sp+E8h] [bp-30h]@2
  int v139; // [sp+ECh] [bp-2Ch]@2

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( j_Json::Value::isObject(a1) != 1 )
    return 0;
  v6 = j_Json::Value::operator[]((int)v5, "pack_id");
  sub_21E94B4((void **)&v138, (const char *)&unk_257BC67);
  j_Json::Value::asString(&v139, (int)v6, &v138);
  v7 = (void *)(v138 - 12);
  if ( (int *)(v138 - 12) != &dword_28898C0 )
  {
    v39 = (unsigned int *)(v138 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
    }
    else
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  j_mce::UUID::fromString((int)&v136, &v139);
  v8 = v136 == 0;
  if ( !v136 )
    v8 = v137 == 0;
  if ( v8 )
    j_Crypto::Hash::Hash::Hash((int)&v126, 0);
    v9 = sub_21E8AF4((int *)&v135, v3);
    sub_21E72F0((const void **)v9, (const void **)&v139);
    j_Crypto::Hash::Hash::update((Crypto::Hash::Hash *)&v126, v135, *((_DWORD *)v135 - 3));
    j_Crypto::Hash::Hash::getUUID((Crypto::Hash::Hash *)&v133, (int)&v126);
    v136 = v133;
    v137 = v134;
    v10 = (char *)v135 - 12;
    if ( (int *)((char *)v135 - 12) != &dword_28898C0 )
      v85 = (unsigned int *)((char *)v135 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v86 = __ldrex(v85);
        while ( __strex(v86 - 1, v85) );
      }
      else
        v86 = (*v85)--;
      if ( v86 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    j_Crypto::Hash::Hash::~Hash((Crypto::Hash::Hash *)&v126);
  j_SemVersion::SemVersion((SemVersion *)&v126);
  v11 = (Json::Value *)j_Json::Value::operator[]((int)v5, "version");
  if ( j_Json::Value::isString(v11) == 1 )
    sub_21E94B4((void **)&v125, (const char *)&unk_257BC67);
    j_Json::Value::asString((int *)&v135, (int)v11, &v125);
    v12 = (void *)(v125 - 12);
    if ( (int *)(v125 - 12) != &dword_28898C0 )
      v41 = (unsigned int *)(v125 - 4);
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
        v42 = (*v41)--;
      if ( v42 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    if ( j_SemVersion::fromString((const void **)&v135, (int)&v126) == 2 )
      sub_21E94B4((void **)&v117, (const char *)&unk_257BC67);
      v13 = (int *)sub_21E94B4((void **)&v116, (const char *)&unk_257BC67);
      j_SemVersion::SemVersion((int)&v118, 1, 0, 0, &v117, v13, 0);
      v127 = v119;
      v126 = v118;
      EntityInteraction::setInteractText(&v128, &v120);
      EntityInteraction::setInteractText(&v129, &v121);
      EntityInteraction::setInteractText(&v130, &v122);
      v132 = v124;
      v131 = v123;
      v14 = (void *)(v122 - 12);
      if ( (int *)(v122 - 12) != &dword_28898C0 )
        v43 = (unsigned int *)(v122 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v44 = __ldrex(v43);
          while ( __strex(v44 - 1, v43) );
        }
        else
          v44 = (*v43)--;
        if ( v44 <= 0 )
          j_j_j_j__ZdlPv_9(v14);
      v15 = (void *)(v121 - 12);
      if ( (int *)(v121 - 12) != &dword_28898C0 )
        v45 = (unsigned int *)(v121 - 4);
            v46 = __ldrex(v45);
          while ( __strex(v46 - 1, v45) );
          v46 = (*v45)--;
        if ( v46 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      v16 = (void *)(v120 - 12);
      if ( (int *)(v120 - 12) != &dword_28898C0 )
        v47 = (unsigned int *)(v120 - 4);
            v48 = __ldrex(v47);
          while ( __strex(v48 - 1, v47) );
          v48 = (*v47)--;
        if ( v48 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
      v17 = (void *)(v116 - 12);
      if ( (int *)(v116 - 12) != &dword_28898C0 )
        v49 = (unsigned int *)(v116 - 4);
            v50 = __ldrex(v49);
          while ( __strex(v50 - 1, v49) );
          v50 = (*v49)--;
        if ( v50 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      v18 = (void *)(v117 - 12);
      if ( (int *)(v117 - 12) != &dword_28898C0 )
        v51 = (unsigned int *)(v117 - 4);
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
          v52 = (*v51)--;
        if ( v52 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
    v19 = (char *)v135 - 12;
    if ( (int *)((char *)v135 - 12) == &dword_28898C0 )
      goto LABEL_72;
    v20 = (unsigned int *)((char *)v135 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 > 0 )
  else
    if ( j_Json::Value::isArray(v11) != 1 )
    if ( j_Json::Value::size(v11) != 3 )
    v23 = j_Json::Value::operator[]((int)v11, 0);
    if ( j_Json::Value::isConvertibleTo((int)v23, 2) != 1 )
    v24 = j_Json::Value::operator[]((int)v11, 1u);
    if ( j_Json::Value::isConvertibleTo((int)v24, 2) != 1 )
    v25 = j_Json::Value::operator[]((int)v11, 2u);
    if ( j_Json::Value::isConvertibleTo((int)v25, 2) != 1 )
    v26 = (Json::Value *)j_Json::Value::operator[]((int)v11, 0);
    v27 = j_Json::Value::asUInt(v26, 0);
    v28 = (Json::Value *)j_Json::Value::operator[]((int)v11, 1u);
    v29 = j_Json::Value::asUInt(v28, 0);
    v30 = (Json::Value *)j_Json::Value::operator[]((int)v11, 2u);
    v31 = j_Json::Value::asUInt(v30, 0);
    sub_21E94B4((void **)&v108, (const char *)&unk_257BC67);
    v32 = (int *)sub_21E94B4((void **)&v107, (const char *)&unk_257BC67);
    j_SemVersion::SemVersion((int)&v109, v27, v29, v31, &v108, v32, 0);
    v127 = v110;
    v126 = v109;
    EntityInteraction::setInteractText(&v128, &v111);
    EntityInteraction::setInteractText(&v129, &v112);
    EntityInteraction::setInteractText(&v130, &v113);
    v132 = v115;
    v131 = v114;
    v33 = (void *)(v113 - 12);
    if ( (int *)(v113 - 12) != &dword_28898C0 )
      v87 = (unsigned int *)(v113 - 4);
          v88 = __ldrex(v87);
        while ( __strex(v88 - 1, v87) );
        v88 = (*v87)--;
      if ( v88 <= 0 )
        j_j_j_j__ZdlPv_9(v33);
    v34 = (void *)(v112 - 12);
    if ( (int *)(v112 - 12) != &dword_28898C0 )
      v89 = (unsigned int *)(v112 - 4);
          v90 = __ldrex(v89);
        while ( __strex(v90 - 1, v89) );
        v90 = (*v89)--;
      if ( v90 <= 0 )
        j_j_j_j__ZdlPv_9(v34);
    v35 = (void *)(v111 - 12);
    if ( (int *)(v111 - 12) != &dword_28898C0 )
      v91 = (unsigned int *)(v111 - 4);
          v92 = __ldrex(v91);
        while ( __strex(v92 - 1, v91) );
        v92 = (*v91)--;
      if ( v92 <= 0 )
        j_j_j_j__ZdlPv_9(v35);
    v36 = (void *)(v107 - 12);
    if ( (int *)(v107 - 12) != &dword_28898C0 )
      v93 = (unsigned int *)(v107 - 4);
          v94 = __ldrex(v93);
        while ( __strex(v94 - 1, v93) );
        v94 = (*v93)--;
      if ( v94 <= 0 )
        j_j_j_j__ZdlPv_9(v36);
    v19 = (char *)(v108 - 12);
    if ( (int *)(v108 - 12) == &dword_28898C0 )
    v37 = (unsigned int *)(v108 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 > 0 )
  j_j_j_j__ZdlPv_9(v19);
LABEL_72:
  v97 = v136;
  v98 = v137;
  v100 = v127;
  v99 = v126;
  sub_21E8AF4(&v101, &v128);
  sub_21E8AF4(&v102, &v129);
  sub_21E8AF4(&v103, &v130);
  v105 = v132;
  v104 = v131;
  v106 = 0;
  v53 = HIDWORD(v97);
  v54 = v98;
  *(_DWORD *)v4 = v97;
  *(_DWORD *)(v4 + 4) = v53;
  *(_QWORD *)(v4 + 8) = v54;
  v55 = v99;
  *(_WORD *)(v4 + 20) = v100;
  *(_DWORD *)(v4 + 16) = v55;
  EntityInteraction::setInteractText((int *)(v4 + 24), &v101);
  EntityInteraction::setInteractText((int *)(v4 + 28), &v102);
  EntityInteraction::setInteractText((int *)(v4 + 32), &v103);
  v56 = v104;
  *(_BYTE *)(v4 + 38) = v105;
  *(_WORD *)(v4 + 36) = v56;
  *(_BYTE *)(v4 + 40) = v106;
  v57 = (void *)(v103 - 12);
  if ( (int *)(v103 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v103 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j__ZdlPv_9(v57);
  v58 = (void *)(v102 - 12);
  if ( (int *)(v102 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v102 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j__ZdlPv_9(v58);
  v59 = (void *)(v101 - 12);
  if ( (int *)(v101 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v101 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j__ZdlPv_9(v59);
  v60 = (Json::Value *)j_Json::Value::operator[]((int)v5, "subpack");
  if ( j_Json::Value::isString(v60) == 1 )
    sub_21E94B4((void **)&v95, (const char *)&unk_257BC67);
    j_Json::Value::asString(&v96, (int)v60, &v95);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)(v4 + 48),
      &v96);
    v61 = (void *)(v96 - 12);
    if ( (int *)(v96 - 12) != &dword_28898C0 )
      v81 = (unsigned int *)(v96 - 4);
          v82 = __ldrex(v81);
        while ( __strex(v82 - 1, v81) );
        v82 = (*v81)--;
      if ( v82 <= 0 )
        j_j_j_j__ZdlPv_9(v61);
    v62 = (void *)(v95 - 12);
    if ( (int *)(v95 - 12) != &dword_28898C0 )
      v83 = (unsigned int *)(v95 - 4);
          v84 = __ldrex(v83);
        while ( __strex(v84 - 1, v83) );
        v84 = (*v83)--;
      if ( v84 <= 0 )
        j_j_j_j__ZdlPv_9(v62);
  v63 = (void *)(v130 - 12);
  if ( (int *)(v130 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v130 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j__ZdlPv_9(v63);
  v64 = (void *)(v129 - 12);
  if ( (int *)(v129 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v129 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j__ZdlPv_9(v64);
  v65 = (void *)(v128 - 12);
  if ( (int *)(v128 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v128 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j__ZdlPv_9(v65);
  v66 = (void *)(v139 - 12);
  if ( (int *)(v139 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v139 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j__ZdlPv_9(v66);
  return 1;
}
