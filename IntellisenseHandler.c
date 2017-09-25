

int __fastcall IntellisenseHandler::_calculateSpaceForAutoComplete(IntellisenseHandler *this)
{
  __int64 v1; // kr00_8@1
  int v2; // r2@1
  int v3; // r0@1
  int v4; // r3@1
  int result; // r0@1
  int v6; // r3@2

  v1 = *((_QWORD *)this + 3);
  v2 = ((signed int)((*(_QWORD *)this >> 32) - *(_QWORD *)this) >> 2) + 1;
  v3 = (*((_DWORD *)this + 8) - HIDWORD(v1)) >> 4;
  v4 = v2 + -858993459 * v3;
  result = -858993459 * v3;
  if ( v4 > (signed int)v1 )
  {
    v6 = 0;
    if ( (signed int)v1 - v2 > -1 )
      v6 = v1 - v2;
    if ( (signed int)v1 - v2 >= result )
      v6 = 0;
    result = v6;
  }
  return result;
}


int *__fastcall IntellisenseHandler::getAutoCompleteText(IntellisenseHandler *this, int a2, signed int a3)
{
  __int64 v3; // kr00_8@1
  __int64 v4; // kr08_8@1
  signed int v5; // r4@1
  signed int v6; // r1@1
  int v7; // r1@1
  int v8; // r5@1
  unsigned __int8 v9; // vf@3
  int v10; // r5@3
  int v11; // r5@6
  int v12; // r6@6
  signed int v13; // r4@6
  signed int v14; // r6@7
  int *v16; // r1@15
  int v17; // r1@16
  bool v18; // zf@21

  v3 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 24);
  v5 = HIDWORD(v3) - v3;
  v6 = *(_DWORD *)(a2 + 32) - HIDWORD(v4);
  v18 = v6 == 0;
  v7 = -858993459 * (v6 >> 4);
  v8 = v7 + ((HIDWORD(v3) - (signed int)v3) >> 2);
  if ( !v18 )
    ++v8;
  v9 = __OFSUB__(v8, (_DWORD)v4);
  v10 = v8 - v4;
  if ( (v10 < 0) ^ v9 )
    a3 += v10;
  if ( a3 <= -1 )
  {
    v16 = (int *)&Util::EMPTY_STRING;
    return sub_21E8AF4((int *)this, v16);
  }
  v11 = v5 >> 2;
  v12 = (v5 >> 2) + 1;
  v13 = v7;
  if ( v7 + v12 > (signed int)v4 )
    v14 = v4 - v12;
    v13 = 0;
    if ( v14 > -1 )
      v13 = v14;
    if ( v14 >= v7 )
      v13 = 0;
  if ( a3 < v13 )
    if ( v7 != v13 && a3 == v13 - 1 )
      return (int *)sub_21E94B4((void **)this, "...");
    v16 = (int *)(HIDWORD(v4) + 80 * a3);
  v17 = a3 - v13;
  if ( v13 > 0 )
    --v17;
  if ( v17 >= v11 || v17 < 0 || v17 >= (signed int)v4 )
  v18 = v13 == 0;
  if ( !v13 )
    v18 = v17 == (_DWORD)v4 - 1;
    v16 = (int *)(v3 + 4 * v17);
  return (int *)sub_21E94B4((void **)this, "...");
}


IntellisenseHandler *__fastcall IntellisenseHandler::~IntellisenseHandler(IntellisenseHandler *this)
{
  IntellisenseHandler *v1; // r9@1
  int v2; // r5@1
  int v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  void *v6; // r0@11
  void *v7; // r0@13
  int v8; // r0@15
  int *v9; // r0@17
  int v10; // r1@22
  void *v11; // r0@22
  void *v12; // r4@23
  void *v13; // r5@23
  unsigned int *v14; // r2@25
  signed int v15; // r1@27
  int *v16; // r0@33
  unsigned int *v18; // r2@39
  signed int v19; // r1@41

  v1 = this;
  v3 = *(_QWORD *)((char *)this + 28) >> 32;
  v2 = *(_QWORD *)((char *)this + 28);
  if ( v2 != v3 )
  {
    do
    {
      v6 = *(void **)(v2 + 60);
      if ( v6 )
        operator delete(v6);
      v7 = *(void **)(v2 + 44);
      if ( v7 )
        operator delete(v7);
      v8 = *(_DWORD *)(v2 + 16);
      if ( v8 )
        (*(void (**)(void))(*(_DWORD *)v8 + 4))();
      *(_DWORD *)(v2 + 16) = 0;
      v9 = (int *)(*(_DWORD *)v2 - 12);
      if ( v9 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
        }
        else
          v5 = (*v4)--;
        if ( v5 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v9);
      }
      v2 += 80;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 7);
  }
  if ( v2 )
    operator delete((void *)v2);
  v10 = *((_DWORD *)v1 + 3);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = (void *)(*(_QWORD *)v1 >> 32);
  v13 = (void *)*(_QWORD *)v1;
  if ( v13 != v12 )
      v16 = (int *)(*(_DWORD *)v13 - 12);
      if ( v16 != &dword_28898C0 )
        v14 = (unsigned int *)(*(_DWORD *)v13 - 4);
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v16);
      v13 = (char *)v13 + 4;
    while ( v13 != v12 );
    v13 = *(void **)v1;
  if ( v13 )
    operator delete(v13);
  return v1;
}


void __fastcall IntellisenseHandler::updateIntellisense(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, void *a33, int a34, int a35, int a36, void *a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63)
{
  IntellisenseHandler::updateIntellisense(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    a15,
    a16,
    a17,
    a18,
    a19,
    a20,
    a21,
    a22,
    a23,
    a24,
    a25,
    a26,
    a27,
    a28,
    a29,
    a30,
    a31,
    a32,
    a33,
    a34,
    a35,
    a36,
    a37,
    a38,
    a39,
    a40,
    a41,
    a42,
    a43,
    a44,
    a45,
    a46,
    a47,
    a48,
    a49,
    a50,
    a51,
    a52,
    a53,
    a54,
    a55,
    a56,
    a57,
    a58,
    a59,
    a60,
    a61,
    a62,
    a63);
}


char *__fastcall IntellisenseHandler::getAutoCompleteMessages(IntellisenseHandler *this)
{
  return (char *)this + 28;
}


void __fastcall IntellisenseHandler::updateIntellisense(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, void *a33, int a34, int a35, int a36, void *a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63)
{
  int v63; // r8@0
  int v64; // r6@1
  int v65; // r7@1
  int v66; // r5@1
  int v67; // r11@1
  unsigned int v68; // r0@2
  unsigned int *v69; // r10@2
  unsigned int v70; // r1@5
  unsigned int v71; // r2@6
  bool v72; // zf@7
  int v73; // r0@10
  MinecraftCommands *v74; // r4@11
  unsigned int v75; // r7@11
  _BYTE *v76; // r1@11
  int v77; // r2@12
  CommandRegistry *v78; // r0@20
  bool v79; // zf@20
  __int64 v80; // kr00_8@23
  unsigned int v81; // r3@23
  unsigned int v82; // r2@24
  unsigned int v83; // r3@24
  const void **v84; // r0@25
  const void **v85; // r0@25
  const void **v86; // r0@25
  void *v87; // r1@25
  __int64 v88; // kr08_8@25
  char *v89; // r1@26
  char *v90; // r0@28
  char *v91; // r0@29
  char *v92; // r0@30
  void *v93; // r0@31
  void *v94; // r0@32
  void *v95; // r0@33
  void *v96; // r0@34
  unsigned int *v97; // r2@37
  signed int v98; // r1@39
  unsigned int *v99; // r2@41
  signed int v100; // r1@43
  unsigned int *v101; // r2@45
  signed int v102; // r1@47
  unsigned int *v103; // r2@49
  signed int v104; // r1@51
  unsigned int *v105; // r2@53
  signed int v106; // r1@55
  unsigned int *v107; // r2@57
  signed int v108; // r1@59
  unsigned int *v109; // r2@61
  signed int v110; // r1@63
  int v111; // r0@95
  bool v112; // zf@95
  void **v113; // r7@98
  unsigned int v114; // r2@99
  unsigned int v115; // r3@99
  unsigned int v116; // r3@100
  unsigned int v117; // r2@100
  const void **v118; // r0@103
  const void **v119; // r0@103
  const void **v120; // r0@103
  const void **v121; // r0@103
  const void **v122; // r0@103
  char *v123; // r0@103
  char *v124; // r0@104
  char *v125; // r0@105
  char *v126; // r0@106
  void *v127; // r0@107
  const void **v128; // r0@109
  const void **v129; // r0@109
  char *v130; // r0@109
  char *v131; // r0@110
  void *v132; // r0@111
  char *v133; // r0@119
  __int64 v134; // kr18_8@120
  char *v135; // r0@129
  char *v136; // r0@130
  void *v137; // r0@131
  void *v138; // r0@132
  void *v139; // r0@133
  void *v140; // r0@134
  unsigned int *v141; // r2@137
  signed int v142; // r1@139
  unsigned int *v143; // r2@141
  signed int v144; // r1@143
  unsigned int *v145; // r2@145
  signed int v146; // r1@147
  unsigned int *v147; // r2@149
  signed int v148; // r1@151
  unsigned int *v149; // r2@153
  signed int v150; // r1@155
  unsigned int *v151; // r2@157
  signed int v152; // r1@159
  unsigned int *v153; // r2@161
  signed int v154; // r1@163
  unsigned int *v155; // r2@165
  signed int v156; // r1@167
  unsigned int *v157; // r2@169
  signed int v158; // r1@171
  unsigned int *v159; // r2@173
  signed int v160; // r1@175
  unsigned int *v161; // r2@177
  signed int v162; // r1@179
  unsigned int *v163; // r2@181
  signed int v164; // r1@183
  unsigned int *v165; // r2@185
  signed int v166; // r1@187
  unsigned int *v167; // r2@189
  signed int v168; // r1@191
  unsigned int *v169; // r2@237
  signed int v170; // r1@239
  void *v171; // r5@259
  void *v172; // r7@259
  unsigned int *v173; // r2@261
  signed int v174; // r1@263
  int *v175; // r0@269
  void *v176; // r0@274
  unsigned int v177; // r0@280
  unsigned int *v178; // r5@284
  unsigned int v179; // r0@286
  unsigned int *v180; // r2@292
  signed int v181; // r1@294
  unsigned int v182; // [sp+1Ch] [bp-144h]@20
  void *v183; // [sp+28h] [bp-138h]@0
  char *v184; // [sp+2Ch] [bp-134h]@119
  char v185; // [sp+30h] [bp-130h]@113
  int v186; // [sp+38h] [bp-128h]@117
  void *v187; // [sp+54h] [bp-10Ch]@115
  void *ptr; // [sp+64h] [bp-FCh]@113
  _DWORD *v189; // [sp+78h] [bp-E8h]@112
  int v190; // [sp+80h] [bp-E0h]@112
  int v191; // [sp+88h] [bp-D8h]@127
  void *v192; // [sp+A4h] [bp-BCh]@125
  void *v193; // [sp+B4h] [bp-ACh]@123
  int v194; // [sp+CCh] [bp-94h]@109
  char *v195; // [sp+D0h] [bp-90h]@109
  char *v196; // [sp+D4h] [bp-8Ch]@109
  int v197; // [sp+D8h] [bp-88h]@103
  char *v198; // [sp+DCh] [bp-84h]@103
  char *v199; // [sp+E0h] [bp-80h]@103
  char *v200; // [sp+E4h] [bp-7Ch]@103
  char *v201; // [sp+E8h] [bp-78h]@103
  char *v202; // [sp+ECh] [bp-74h]@103
  int v203; // [sp+F0h] [bp-70h]@101
  int v204; // [sp+F4h] [bp-6Ch]@101
  int v205; // [sp+F8h] [bp-68h]@100
  int v206; // [sp+FCh] [bp-64h]@98
  int v207; // [sp+100h] [bp-60h]@95
  int v208; // [sp+104h] [bp-5Ch]@25
  char *v209; // [sp+108h] [bp-58h]@25
  char *v210; // [sp+10Ch] [bp-54h]@25
  char *v211; // [sp+110h] [bp-50h]@25
  int v212; // [sp+114h] [bp-4Ch]@25
  int v213; // [sp+118h] [bp-48h]@24
  int v214; // [sp+11Ch] [bp-44h]@23
  char v215; // [sp+120h] [bp-40h]@20
  int v216; // [sp+124h] [bp-3Ch]@274
  void *v217; // [sp+128h] [bp-38h]@21
  void *v218; // [sp+12Ch] [bp-34h]@21
  const CommandOrigin *v219; // [sp+134h] [bp-2Ch]@11

  v64 = a3;
  v65 = a2;
  v66 = a1;
  IntellisenseHandler::clearMessages((IntellisenseHandler *)a1);
  v67 = *(_DWORD *)(v65 + 4);
  if ( v67 )
  {
    v68 = *(_DWORD *)(v67 + 4);
    v69 = (unsigned int *)(v67 + 4);
    while ( v68 )
    {
      __dmb();
      v70 = __ldrex(v69);
      if ( v70 == v68 )
      {
        v71 = __strex(v68 + 1, v69);
        v68 = v70;
        if ( !v71 )
        {
          __dmb();
          v72 = *v69 == 0;
          if ( *v69 )
          {
            v65 = *(_DWORD *)v65;
            v72 = v65 == 0;
          }
          if ( v72 )
            goto LABEL_301;
          v73 = MinecraftScreenModel::getClientModel((MinecraftScreenModel *)v65);
          if ( !(*(int (**)(void))(*(_DWORD *)v73 + 8))() )
          ClientInstanceScreenModel::getPlayerCommandOrigin((ClientInstanceScreenModel *)&v219, v65);
          v74 = (MinecraftCommands *)MinecraftScreenModel::getCommands((MinecraftScreenModel *)v65);
          v75 = *(_DWORD *)(*(_DWORD *)v64 - 12);
          v76 = *(_BYTE **)v64;
          if ( v75 )
            v77 = *(_DWORD *)(*(_DWORD *)v64 - 12);
            v76 = *(_BYTE **)v64;
            while ( *v76 == 32 )
            {
              --v77;
              ++v76;
              if ( !v77 )
                goto LABEL_275;
            }
          if ( v76 != (_BYTE *)(*(_DWORD *)v64 + v75) && *v76 == 47 )
            if ( *(_DWORD *)(*(_DWORD *)(v66 + 12) - 12) )
              v75 = *(_DWORD *)(*(_DWORD *)(v66 + 12) - 12);
            v78 = (CommandRegistry *)MinecraftCommands::getRegistry(v74);
            CommandRegistry::getOverloadSyntaxInformation((CommandSyntaxInformation *)&v215, v78, v219, (int *)v64, v75);
            v182 = v75;
            v79 = v215 == 0;
            if ( v215 )
              v63 = (int)v217;
              v183 = v218;
              v79 = v217 == v218;
            if ( !v79 )
              do
              {
                sub_21E9040((void **)&v214, (int *)v63, 0, *(_DWORD *)(v63 + 4));
                v80 = *(_QWORD *)v63;
                v81 = *(_DWORD *)(*(_QWORD *)v63 - 12);
                if ( v81 < (unsigned int)(*(_QWORD *)v63 >> 32) )
                  sub_21E5B04(
                    "%s: __pos (which is %zu) > this->size() (which is %zu)",
                    (int)"basic_string::substr",
                    SHIDWORD(v80),
                    v81);
                sub_21E9040((void **)&v213, (int *)v63, HIDWORD(v80), *(_DWORD *)(v63 + 8));
                v82 = *(_DWORD *)(v63 + 8) + *(_DWORD *)(v63 + 4);
                v83 = *(_DWORD *)(*(_DWORD *)v63 - 12);
                if ( v83 < v82 )
                    v82,
                    v83);
                sub_21E9040((void **)&v212, (int *)v63, v82, 0xFFFFFFFF);
                sub_21E8AF4(&v208, &v214);
                sub_21E72F0((const void **)&v208, (const void **)&v213);
                v84 = sub_21E72F0((const void **)&v208, dword_27DF698);
                v209 = (char *)*v84;
                *v84 = &unk_28898CC;
                v85 = sub_21E72F0((const void **)&v209, (const void **)&v212);
                v210 = (char *)*v85;
                *v85 = &unk_28898CC;
                v86 = sub_21E72F0((const void **)&v210, (const void **)&unk_27DF684);
                v87 = (void *)*v86;
                v211 = (char *)*v86;
                *v86 = &unk_28898CC;
                v88 = *(_QWORD *)(v66 + 4);
                if ( (_DWORD)v88 == HIDWORD(v88) )
                {
                  std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
                    (unsigned __int64 *)v66,
                    &v211);
                  v89 = v211;
                }
                else
                  *(_DWORD *)v88 = v87;
                  v89 = (char *)&unk_28898CC;
                  v211 = (char *)&unk_28898CC;
                  *(_DWORD *)(v66 + 4) = v88 + 4;
                v90 = v89 - 12;
                if ( (int *)(v89 - 12) != &dword_28898C0 )
                  v97 = (unsigned int *)(v89 - 4);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v98 = __ldrex(v97);
                    while ( __strex(v98 - 1, v97) );
                  }
                  else
                    v98 = (*v97)--;
                  if ( v98 <= 0 )
                    j_j_j_j__ZdlPv_9(v90);
                v91 = v210 - 12;
                if ( (int *)(v210 - 12) != &dword_28898C0 )
                  v99 = (unsigned int *)(v210 - 4);
                      v100 = __ldrex(v99);
                    while ( __strex(v100 - 1, v99) );
                    v100 = (*v99)--;
                  if ( v100 <= 0 )
                    j_j_j_j__ZdlPv_9(v91);
                v92 = v209 - 12;
                if ( (int *)(v209 - 12) != &dword_28898C0 )
                  v101 = (unsigned int *)(v209 - 4);
                      v102 = __ldrex(v101);
                    while ( __strex(v102 - 1, v101) );
                    v102 = (*v101)--;
                  if ( v102 <= 0 )
                    j_j_j_j__ZdlPv_9(v92);
                v93 = (void *)(v208 - 12);
                if ( (int *)(v208 - 12) != &dword_28898C0 )
                  v103 = (unsigned int *)(v208 - 4);
                      v104 = __ldrex(v103);
                    while ( __strex(v104 - 1, v103) );
                    v104 = (*v103)--;
                  if ( v104 <= 0 )
                    j_j_j_j__ZdlPv_9(v93);
                v94 = (void *)(v212 - 12);
                if ( (int *)(v212 - 12) != &dword_28898C0 )
                  v105 = (unsigned int *)(v212 - 4);
                      v106 = __ldrex(v105);
                    while ( __strex(v106 - 1, v105) );
                    v106 = (*v105)--;
                  if ( v106 <= 0 )
                    j_j_j_j__ZdlPv_9(v94);
                v95 = (void *)(v213 - 12);
                if ( (int *)(v213 - 12) != &dword_28898C0 )
                  v107 = (unsigned int *)(v213 - 4);
                      v108 = __ldrex(v107);
                    while ( __strex(v108 - 1, v107) );
                    v108 = (*v107)--;
                  if ( v108 <= 0 )
                    j_j_j_j__ZdlPv_9(v95);
                v96 = (void *)(v214 - 12);
                if ( (int *)(v214 - 12) != &dword_28898C0 )
                  v109 = (unsigned int *)(v214 - 4);
                      v110 = __ldrex(v109);
                    while ( __strex(v110 - 1, v109) );
                    v110 = (*v109)--;
                  if ( v110 <= 0 )
                    j_j_j_j__ZdlPv_9(v96);
                v63 += 12;
              }
              while ( (void *)v63 != v183 );
            v111 = MinecraftCommands::getRegistry(v74);
            CommandRegistry::getAutoCompleteOptions(&v207, v111, (int)v219, (int *)v64, v75);
            v112 = *(_BYTE *)v207 == 0;
            if ( *(_BYTE *)v207 )
              v64 = *(_QWORD *)(v207 + 4);
              v182 = *(_QWORD *)(v207 + 4) >> 32;
              v112 = v64 == v182;
            if ( !v112 )
              v113 = (void **)&v206;
                sub_21E9040(v113, (int *)v64, 0, *(_DWORD *)(v64 + 12));
                v114 = *(_DWORD *)(v64 + 12);
                v115 = *(_DWORD *)(*(_DWORD *)v64 - 12);
                if ( v115 < v114 )
                    v114,
                    v115);
                sub_21E9040((void **)&v205, (int *)v64, v114, *(_DWORD *)(v64 + 16));
                v116 = *(_DWORD *)(*(_DWORD *)v64 - 12);
                v117 = (*(_QWORD *)(v64 + 12) >> 32) + *(_QWORD *)(v64 + 12);
                if ( v116 < v117 )
                    v117,
                    v116);
                sub_21E9040((void **)&v204, (int *)v64, v117, 0xFFFFFFFF);
                sub_21E8AF4(&v203, (int *)dword_27DF698);
                if ( *(_BYTE *)(v64 + 32) )
                  EntityInteraction::setInteractText(&v203, (int *)&unk_27DF674);
                sub_21E8AF4(&v197, &v203);
                sub_21E72F0((const void **)&v197, (const void **)v113);
                v118 = sub_21E72F0((const void **)&v197, (const void **)&unk_27DF684);
                v198 = (char *)*v118;
                *v118 = &unk_28898CC;
                v119 = sub_21E72F0((const void **)&v198, (const void **)&v205);
                v199 = (char *)*v119;
                *v119 = &unk_28898CC;
                v120 = sub_21E72F0((const void **)&v199, (const void **)&v203);
                v200 = (char *)*v120;
                *v120 = &unk_28898CC;
                v121 = sub_21E72F0((const void **)&v200, (const void **)&v204);
                v201 = (char *)*v121;
                *v121 = &unk_28898CC;
                v122 = sub_21E72F0((const void **)&v201, (const void **)&unk_27DF684);
                v202 = (char *)*v122;
                *v122 = &unk_28898CC;
                v123 = v201 - 12;
                if ( (int *)(v201 - 12) != &dword_28898C0 )
                  v141 = (unsigned int *)(v201 - 4);
                      v142 = __ldrex(v141);
                    while ( __strex(v142 - 1, v141) );
                    v142 = (*v141)--;
                  if ( v142 <= 0 )
                    j_j_j_j__ZdlPv_9(v123);
                v124 = v200 - 12;
                if ( (int *)(v200 - 12) != &dword_28898C0 )
                  v143 = (unsigned int *)(v200 - 4);
                      v144 = __ldrex(v143);
                    while ( __strex(v144 - 1, v143) );
                    v144 = (*v143)--;
                  if ( v144 <= 0 )
                    j_j_j_j__ZdlPv_9(v124);
                v125 = v199 - 12;
                if ( (int *)(v199 - 12) != &dword_28898C0 )
                  v145 = (unsigned int *)(v199 - 4);
                      v146 = __ldrex(v145);
                    while ( __strex(v146 - 1, v145) );
                    v146 = (*v145)--;
                  if ( v146 <= 0 )
                    j_j_j_j__ZdlPv_9(v125);
                v126 = v198 - 12;
                if ( (int *)(v198 - 12) != &dword_28898C0 )
                  v147 = (unsigned int *)(v198 - 4);
                      v148 = __ldrex(v147);
                    while ( __strex(v148 - 1, v147) );
                    v148 = (*v147)--;
                  if ( v148 <= 0 )
                    j_j_j_j__ZdlPv_9(v126);
                v127 = (void *)(v197 - 12);
                if ( (int *)(v197 - 12) != &dword_28898C0 )
                  v149 = (unsigned int *)(v197 - 4);
                      v150 = __ldrex(v149);
                    while ( __strex(v150 - 1, v149) );
                    v150 = (*v149)--;
                  if ( v150 <= 0 )
                    j_j_j_j__ZdlPv_9(v127);
                if ( *(_DWORD *)(*(_DWORD *)(v64 + 8) - 12) )
                  sub_21E8AF4(&v194, (int *)dword_27DF664);
                  sub_21E7408((const void **)&v194, " - ", 3u);
                  v128 = sub_21E72F0((const void **)&v194, (const void **)&unk_27DF690);
                  v195 = (char *)*v128;
                  *v128 = &unk_28898CC;
                  v129 = sub_21E72F0((const void **)&v195, (const void **)(v64 + 8));
                  v196 = (char *)*v129;
                  *v129 = &unk_28898CC;
                  sub_21E72F0((const void **)&v202, (const void **)&v196);
                  v130 = v196 - 12;
                  if ( (int *)(v196 - 12) != &dword_28898C0 )
                    v163 = (unsigned int *)(v196 - 4);
                    if ( &pthread_create )
                    {
                      __dmb();
                      do
                        v164 = __ldrex(v163);
                      while ( __strex(v164 - 1, v163) );
                    }
                    else
                      v164 = (*v163)--;
                    if ( v164 <= 0 )
                      j_j_j_j__ZdlPv_9(v130);
                  v131 = v195 - 12;
                  if ( (int *)(v195 - 12) != &dword_28898C0 )
                    v165 = (unsigned int *)(v195 - 4);
                        v166 = __ldrex(v165);
                      while ( __strex(v166 - 1, v165) );
                      v166 = (*v165)--;
                    if ( v166 <= 0 )
                      j_j_j_j__ZdlPv_9(v131);
                  v132 = (void *)(v194 - 12);
                  if ( (int *)(v194 - 12) != &dword_28898C0 )
                    v167 = (unsigned int *)(v194 - 4);
                        v168 = __ldrex(v167);
                      while ( __strex(v168 - 1, v167) );
                      v168 = (*v167)--;
                    if ( v168 <= 0 )
                      j_j_j_j__ZdlPv_9(v132);
                sub_21E72F0((const void **)&v202, (const void **)&unk_27DF694);
                v189 = &unk_28898CC;
                ItemInstance::ItemInstance((int)&v190);
                xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                  (int *)&v189,
                  (int *)&v202);
                if ( CommandItem::operator bool(v64 + 24) == 1 )
                  CommandItem::getInstance((CommandItem *)&v185, v64 + 24, 1, 0);
                  ItemInstance::operator=((int)&v190, (int)&v185);
                  if ( ptr )
                    operator delete(ptr);
                  if ( v187 )
                    operator delete(v187);
                  if ( v186 )
                    (*(void (**)(void))(*(_DWORD *)v186 + 4))();
                  v184 = (char *)&unk_28898CC;
                  v186 = 0;
                  sub_21E6FCC((const void **)&v184, *(v189 - 3) + 3);
                  sub_21E7408((const void **)&v184, "   ", 3u);
                  sub_21E72F0((const void **)&v184, (const void **)&v189);
                  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                    (int *)&v189,
                    (int *)&v184);
                  v133 = v184 - 12;
                  if ( (int *)(v184 - 12) != &dword_28898C0 )
                    v169 = (unsigned int *)(v184 - 4);
                        v170 = __ldrex(v169);
                      while ( __strex(v170 - 1, v169) );
                      v170 = (*v169)--;
                    if ( v170 <= 0 )
                      j_j_j_j__ZdlPv_9(v133);
                v134 = *(_QWORD *)(v66 + 32);
                if ( (_DWORD)v134 == HIDWORD(v134) )
                  std::vector<IntellisenseHandler::AutoCompleteMessage,std::allocator<IntellisenseHandler::AutoCompleteMessage>>::_M_emplace_back_aux<IntellisenseHandler::AutoCompleteMessage&>(
                    (unsigned __int64 *)(v66 + 28),
                    (int *)&v189);
                  sub_21E8AF4((int *)v134, (int *)&v189);
                  ItemInstance::ItemInstance((ItemInstance *)(v134 + 8), (int)&v190);
                  *(_DWORD *)(v66 + 32) += 80;
                *(_BYTE *)(v66 + 21) = 1;
                if ( v193 )
                  operator delete(v193);
                v113 = (void **)&v206;
                if ( v192 )
                  operator delete(v192);
                if ( v191 )
                  (*(void (**)(void))(*(_DWORD *)v191 + 4))();
                v191 = 0;
                v135 = (char *)(v189 - 3);
                if ( v189 - 3 != &dword_28898C0 )
                  v151 = v189 - 1;
                      v152 = __ldrex(v151);
                    while ( __strex(v152 - 1, v151) );
                    v113 = (void **)&v206;
                    v152 = (*v151)--;
                  if ( v152 <= 0 )
                    j_j_j_j__ZdlPv_9(v135);
                v136 = v202 - 12;
                if ( (int *)(v202 - 12) != &dword_28898C0 )
                  v153 = (unsigned int *)(v202 - 4);
                      v154 = __ldrex(v153);
                    while ( __strex(v154 - 1, v153) );
                    v154 = (*v153)--;
                  if ( v154 <= 0 )
                    j_j_j_j__ZdlPv_9(v136);
                v137 = (void *)(v203 - 12);
                if ( (int *)(v203 - 12) != &dword_28898C0 )
                  v155 = (unsigned int *)(v203 - 4);
                      v156 = __ldrex(v155);
                    while ( __strex(v156 - 1, v155) );
                    v156 = (*v155)--;
                  if ( v156 <= 0 )
                    j_j_j_j__ZdlPv_9(v137);
                v138 = (void *)(v204 - 12);
                if ( (int *)(v204 - 12) != &dword_28898C0 )
                  v157 = (unsigned int *)(v204 - 4);
                      v158 = __ldrex(v157);
                    while ( __strex(v158 - 1, v157) );
                    v158 = (*v157)--;
                  if ( v158 <= 0 )
                    j_j_j_j__ZdlPv_9(v138);
                v139 = (void *)(v205 - 12);
                if ( (int *)(v205 - 12) != &dword_28898C0 )
                  v159 = (unsigned int *)(v205 - 4);
                      v160 = __ldrex(v159);
                    while ( __strex(v160 - 1, v159) );
                    v160 = (*v159)--;
                  if ( v160 <= 0 )
                    j_j_j_j__ZdlPv_9(v139);
                v140 = (void *)(v206 - 12);
                if ( (int *)(v206 - 12) != &dword_28898C0 )
                  v161 = (unsigned int *)(v206 - 4);
                      v162 = __ldrex(v161);
                    while ( __strex(v162 - 1, v161) );
                    v162 = (*v161)--;
                  if ( v162 <= 0 )
                    j_j_j_j__ZdlPv_9(v140);
                v64 += 36;
              while ( v64 != v182 );
            std::unique_ptr<AutoCompleteInformation,std::default_delete<AutoCompleteInformation>>::~unique_ptr(&v207);
            v172 = v218;
            v171 = v217;
            if ( v217 != v218 )
                v175 = (int *)(*(_DWORD *)v171 - 12);
                if ( v175 != &dword_28898C0 )
                  v173 = (unsigned int *)(*(_DWORD *)v171 - 4);
                      v174 = __ldrex(v173);
                    while ( __strex(v174 - 1, v173) );
                    v174 = (*v173)--;
                  if ( v174 <= 0 )
                    j_j_j_j__ZdlPv_9(v175);
                v171 = (char *)v171 + 12;
              while ( v171 != v172 );
              v171 = v217;
            if ( v171 )
              operator delete(v171);
            v176 = (void *)(v216 - 12);
            if ( (int *)(v216 - 12) != &dword_28898C0 )
              v180 = (unsigned int *)(v216 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v181 = __ldrex(v180);
                while ( __strex(v181 - 1, v180) );
              else
                v181 = (*v180)--;
              if ( v181 <= 0 )
                j_j_j_j__ZdlPv_9(v176);
LABEL_275:
          if ( v219 )
            (*(void (**)(void))(*(_DWORD *)v219 + 4))();
          if ( v67 )
LABEL_301:
            if ( &pthread_create )
              __dmb();
                v177 = __ldrex(v69);
              while ( __strex(v177 - 1, v69) );
            else
              v177 = (*v69)--;
            if ( v177 == 1 )
              v178 = (unsigned int *)(v67 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v67 + 8))(v67);
                  v179 = __ldrex(v178);
                while ( __strex(v179 - 1, v178) );
                v179 = (*v178)--;
              if ( v179 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v67 + 12))(v67);
          return;
        }
      }
      else
        __clrex();
    }
  }
}


int __fastcall IntellisenseHandler::setNeedsLayoutUpdate(int result, bool a2)
{
  *(_BYTE *)(result + 21) = a2;
  return result;
}


char *__fastcall IntellisenseHandler::resetTabCompleteProgress(IntellisenseHandler *this)
{
  *((_DWORD *)this + 4) = 0;
  *((_BYTE *)this + 20) = 1;
  return sub_21E7EE0((const void **)this + 3, 0, *(_BYTE **)(*((_DWORD *)this + 3) - 12), 0);
}


void __fastcall IntellisenseHandler::clearMessages(IntellisenseHandler *this)
{
  IntellisenseHandler::clearMessages(this);
}


signed int __fastcall IntellisenseHandler::isSlashCommand(_DWORD *a1)
{
  _BYTE *v1; // r0@1
  int v2; // r12@1
  _BYTE *v3; // r1@1
  int v4; // r3@2
  int v5; // r2@5
  signed int result; // r0@5

  v1 = (_BYTE *)*a1;
  v2 = *((_DWORD *)v1 - 3);
  v3 = v1;
  if ( v2 )
  {
    v4 = *((_DWORD *)v1 - 3);
    v3 = v1;
    do
    {
      if ( *v3 != 32 )
        break;
      --v4;
      ++v3;
    }
    while ( v4 );
  }
  v5 = (int)&v1[v2];
  result = 0;
  if ( v3 != (_BYTE *)v5 && *v3 == 47 )
    result = 1;
  return result;
}


int __fastcall IntellisenseHandler::getAutoCompleteItemId(IntellisenseHandler *this, int a2)
{
  int v2; // r3@1
  int v3; // r4@1
  __int64 v4; // kr08_8@1
  bool v5; // zf@1
  signed int v6; // r0@1
  int v7; // r2@1
  signed int v8; // r0@1
  int v9; // r3@1
  unsigned __int8 v10; // vf@3
  int v11; // r3@3
  int v12; // lr@6
  int v13; // r0@6
  signed int v14; // r2@11
  signed int v15; // r3@13
  int v16; // r0@17
  ItemInstance *v17; // r0@17
  int v18; // t1@17
  int result; // r0@18

  v2 = *(_QWORD *)this >> 32;
  v3 = *(_QWORD *)this;
  v4 = *((_QWORD *)this + 3);
  v6 = *((_DWORD *)this + 8) - HIDWORD(v4);
  v5 = v6 == 0;
  v7 = -858993459 * (v6 >> 4);
  v8 = v2 - v3;
  v9 = v7 + ((v2 - v3) >> 2);
  if ( !v5 )
    ++v9;
  v10 = __OFSUB__(v9, (_DWORD)v4);
  v11 = v9 - v4;
  if ( (v11 < 0) ^ v10 )
    a2 += v11;
  if ( a2 < 0 )
    goto LABEL_22;
  v12 = (v8 >> 2) + 1;
  v13 = v7;
  if ( v7 + v12 > (signed int)v4 )
  {
    v13 = 0;
    if ( (signed int)v4 - v12 > -1 )
      v13 = v4 - v12;
    if ( (signed int)v4 - v12 >= v7 )
      v13 = 0;
  }
  v5 = v7 == v13;
  v14 = 0;
  if ( v5 )
    v14 = 1;
  v15 = 0;
  if ( a2 != v13 - 1 )
    v15 = 1;
  if ( a2 < v13
    && (v14 | v15) == 1
    && (v16 = HIDWORD(v4) + 80 * a2, v18 = *(_DWORD *)(v16 + 8), v17 = (ItemInstance *)(v16 + 8), v18) )
    result = j_j_j__ZNK12ItemInstance8getIdAuxEv(v17);
  else
LABEL_22:
    result = 0;
  return result;
}


unsigned int __fastcall IntellisenseHandler::handleTabComplete(int a1, int a2, int *a3, unsigned int a4)
{
  MinecraftScreenModel *v4; // r8@0
  int v5; // r6@1
  unsigned int v6; // r7@1
  unsigned int result; // r0@1
  int *v8; // r11@1
  int v9; // r4@3
  unsigned int *v10; // r5@4
  unsigned int v11; // r2@7
  unsigned int v12; // r3@8
  bool v13; // zf@9
  int v14; // r0@12
  MinecraftCommands *v15; // r9@13
  int v16; // r0@13
  int v17; // r12@14
  unsigned int v18; // r3@14
  _BYTE *v19; // r1@14
  int v20; // r2@15
  int *v21; // r10@21
  void *v22; // r0@22
  int v23; // r0@23
  int v24; // r0@23
  bool v25; // zf@23
  unsigned int v26; // r6@26
  const void **v27; // r0@26
  char *v28; // r0@26
  void *v29; // r0@27
  unsigned int *v30; // r5@38
  unsigned int *v31; // r2@46
  signed int v32; // r1@48
  unsigned int *v33; // r2@50
  signed int v34; // r1@52
  unsigned int *v35; // r12@54
  signed int v36; // r1@56
  int v37; // [sp+4h] [bp-3Ch]@26
  char *v38; // [sp+8h] [bp-38h]@26
  int v39; // [sp+Ch] [bp-34h]@23
  unsigned int v40; // [sp+10h] [bp-30h]@23
  int v41; // [sp+14h] [bp-2Ch]@22

  v5 = a1;
  v6 = a4;
  result = *(_BYTE *)(a1 + 20);
  v8 = a3;
  if ( result )
  {
    v6 = 0;
    *(_BYTE *)(v5 + 20) = 0;
  }
  v9 = *(_DWORD *)(a2 + 4);
  if ( v9 )
    result = *(_DWORD *)(v9 + 4);
    v10 = (unsigned int *)(v9 + 4);
    while ( result )
    {
      __dmb();
      v11 = __ldrex(v10);
      if ( v11 == result )
      {
        v12 = __strex(result + 1, v10);
        result = v11;
        if ( !v12 )
        {
          __dmb();
          v13 = *v10 == 0;
          if ( *v10 )
          {
            v4 = *(MinecraftScreenModel **)a2;
            v13 = *(_DWORD *)a2 == 0;
          }
          if ( v13 )
            goto LABEL_72;
          v14 = MinecraftScreenModel::getClientModel(v4);
          if ( !(*(int (**)(void))(*(_DWORD *)v14 + 8))() )
          v15 = (MinecraftCommands *)MinecraftScreenModel::getCommands(v4);
          v16 = MinecraftScreenModel::getClientModel(v4);
          if ( (*(int (**)(void))(*(_DWORD *)v16 + 8))() != 1 )
          v17 = *v8;
          v18 = *(_DWORD *)(*v8 - 12);
          v19 = (_BYTE *)*v8;
          if ( v18 )
            v20 = *(_DWORD *)(*v8 - 12);
            v19 = (_BYTE *)*v8;
            while ( 1 )
            {
              result = *v19;
              if ( result != 32 )
                break;
              --v20;
              ++v19;
              if ( !v20 )
                goto LABEL_31;
            }
          result = v17 + v18;
          if ( v19 != (_BYTE *)(v17 + v18) )
            result = *v19;
            if ( result == 47 )
              v21 = (int *)(v5 + 12);
              if ( !*(_DWORD *)(*(_DWORD *)(v5 + 12) - 12) )
              {
                sub_21E9040((void **)&v41, v8, 0, v18);
                xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                  (int *)(v5 + 12),
                  &v41);
                v22 = (void *)(v41 - 12);
                if ( (int *)(v41 - 12) != &dword_28898C0 )
                {
                  v35 = (unsigned int *)(v41 - 4);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v36 = __ldrex(v35);
                    while ( __strex(v36 - 1, v35) );
                  }
                  else
                    v36 = (*v35)--;
                  if ( v36 <= 0 )
                    j_j_j_j__ZdlPv_9(v22);
                }
              }
              ClientInstanceScreenModel::getPlayerCommandOrigin((ClientInstanceScreenModel *)&v40, (int)v4);
              v23 = MinecraftCommands::getRegistry(v15);
              CommandRegistry::getAutoCompleteOptions(&v39, v23, v40, (int *)(v5 + 12), *(_DWORD *)(*v8 - 12));
              v24 = v39;
              v25 = *(_BYTE *)v39 == 0;
              if ( *(_BYTE *)v39 )
                v24 = *(_QWORD *)(v39 + 4) >> 32;
                v15 = (MinecraftCommands *)*(_QWORD *)(v39 + 4);
                v25 = v15 == (MinecraftCommands *)v24;
              if ( !v25 )
                *(_DWORD *)(v5 + 16) = v6;
                v26 = (unsigned int)v15 + 36 * (v6 % (954437177 * ((v24 - (signed int)v15) >> 2)));
                sub_21E9040((void **)&v37, v21, 0, *(_DWORD *)(v26 + 20));
                v27 = sub_21E72F0((const void **)&v37, (const void **)(v26 + 4));
                v38 = (char *)*v27;
                *v27 = &unk_28898CC;
                  v8,
                  (int *)&v38);
                v28 = v38 - 12;
                if ( (int *)(v38 - 12) != &dword_28898C0 )
                  v31 = (unsigned int *)(v38 - 4);
                      v32 = __ldrex(v31);
                    while ( __strex(v32 - 1, v31) );
                    v32 = (*v31)--;
                  if ( v32 <= 0 )
                    j_j_j_j__ZdlPv_9(v28);
                v29 = (void *)(v37 - 12);
                if ( (int *)(v37 - 12) != &dword_28898C0 )
                  v33 = (unsigned int *)(v37 - 4);
                      v34 = __ldrex(v33);
                    while ( __strex(v34 - 1, v33) );
                    v34 = (*v33)--;
                  if ( v34 <= 0 )
                    j_j_j_j__ZdlPv_9(v29);
                MinecraftScreenModel::updateTextBoxText();
              std::unique_ptr<AutoCompleteInformation,std::default_delete<AutoCompleteInformation>>::~unique_ptr(&v39);
              result = v40;
              if ( v40 )
                result = (*(int (**)(void))(*(_DWORD *)v40 + 4))();
LABEL_31:
          if ( v9 )
LABEL_72:
            if ( &pthread_create )
              __dmb();
              do
                result = __ldrex(v10);
              while ( __strex(result - 1, v10) );
            else
              result = (*v10)--;
            if ( result == 1 )
              v30 = (unsigned int *)(v9 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
              if ( &pthread_create )
                __dmb();
                do
                  result = __ldrex(v30);
                while ( __strex(result - 1, v30) );
              else
                result = (*v30)--;
              if ( result == 1 )
                result = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
          return result;
        }
      }
      else
        __clrex();
    }
  return result;
}


int __fastcall IntellisenseHandler::IntellisenseHandler(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 12) = (unsigned int)&unk_28898CC;
  *(_WORD *)(result + 20) = 257;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  return result;
}


int __fastcall IntellisenseHandler::_adjustAutoCompleteIndex(IntellisenseHandler *this, int a2)
{
  __int64 v2; // kr00_8@1
  __int64 v3; // kr08_8@1
  bool v4; // zf@1
  signed int v5; // r0@1
  int v6; // r0@1
  unsigned __int8 v7; // vf@3
  int v8; // r0@3

  v2 = *(_QWORD *)this;
  v3 = *((_QWORD *)this + 3);
  v5 = *((_DWORD *)this + 8) - HIDWORD(v3);
  v4 = v5 == 0;
  v6 = -858993459 * (v5 >> 4) + ((HIDWORD(v2) - (signed int)v2) >> 2);
  if ( !v4 )
    ++v6;
  v7 = __OFSUB__(v6, (_DWORD)v3);
  v8 = v6 - v3;
  if ( (v8 < 0) ^ v7 )
    a2 += v8;
  return a2;
}


void __fastcall IntellisenseHandler::clearMessages(IntellisenseHandler *this)
{
  IntellisenseHandler *v1; // r11@1
  __int64 v2; // kr00_8@1
  int v3; // r4@2
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  void *v6; // r0@11
  void *v7; // r0@13
  int v8; // r0@15
  int *v9; // r0@17
  __int64 v10; // kr08_8@19
  _DWORD *v11; // r4@20
  unsigned int *v12; // r2@21
  signed int v13; // r1@23
  int *v14; // r0@29

  v1 = this;
  v2 = *(_QWORD *)((char *)this + 28);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = v2;
    do
    {
      v6 = *(void **)(v3 + 60);
      if ( v6 )
        operator delete(v6);
      v7 = *(void **)(v3 + 44);
      if ( v7 )
        operator delete(v7);
      v8 = *(_DWORD *)(v3 + 16);
      if ( v8 )
        (*(void (**)(void))(*(_DWORD *)v8 + 4))();
      *(_DWORD *)(v3 + 16) = 0;
      v9 = (int *)(*(_DWORD *)v3 - 12);
      if ( v9 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v3 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
        }
        else
          v5 = (*v4)--;
        if ( v5 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      }
      v3 += 80;
    }
    while ( v3 != HIDWORD(v2) );
  }
  *((_DWORD *)v1 + 8) = v2;
  v10 = *(_QWORD *)v1;
  if ( HIDWORD(v10) != (_DWORD)v10 )
    v11 = (_DWORD *)v10;
      v14 = (int *)(*v11 - 12);
      if ( v14 != &dword_28898C0 )
        v12 = (unsigned int *)(*v11 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v14);
      ++v11;
    while ( v11 != (_DWORD *)HIDWORD(v10) );
  *((_DWORD *)v1 + 1) = v10;
}


int __fastcall IntellisenseHandler::setAutoCompleteGridSize(int result, int a2)
{
  *(_DWORD *)(result + 24) = a2;
  return result;
}
