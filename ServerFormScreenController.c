

int __fastcall ServerFormScreenController::ServerFormScreenController(int a1, int a2, int a3, int *a4, char a5)
{
  int v5; // r4@1
  int *v6; // r7@1
  int v7; // r0@1
  int v8; // r8@1
  unsigned int *v9; // r0@2
  unsigned int v10; // r1@4
  int v11; // r5@7
  unsigned int *v12; // r1@8
  unsigned int v13; // r0@10
  unsigned int *v14; // r6@14
  unsigned int v15; // r0@16
  void (__cdecl *v16)(int); // r3@23
  int v17; // r5@25
  _DWORD *v18; // r0@25
  int v19; // r3@25
  void (__cdecl *v20)(_DWORD); // r3@25
  int v22; // [sp+0h] [bp-40h]@1
  int v23; // [sp+4h] [bp-3Ch]@1
  _DWORD *v24; // [sp+10h] [bp-30h]@25
  int v25; // [sp+14h] [bp-2Ch]@25
  void (__cdecl *v26)(_DWORD); // [sp+18h] [bp-28h]@25
  int v27; // [sp+1Ch] [bp-24h]@25

  v5 = a1;
  v22 = *(_DWORD *)a2;
  v6 = a4;
  v7 = *(_DWORD *)(a2 + 4);
  v8 = a3;
  v23 = v7;
  if ( v7 )
  {
    v9 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
    }
    else
      ++*v9;
  }
  MainMenuScreenController::MainMenuScreenController(v5, (int)&v22);
  v11 = v23;
  if ( v23 )
    v12 = (unsigned int *)(v23 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      v14 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      }
      else
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  *(_DWORD *)v5 = &off_26E3490;
  *(_WORD *)(v5 + 432) = 0;
  sub_21E8AF4((int *)(v5 + 436), v6);
  *(_DWORD *)(v5 + 440) = v8;
  Json::Value::Value((_DWORD *)(v5 + 448), 0);
  j__ZNSt12__shared_ptrI28ServerFormBindingInformationLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_(v5 + 464);
  *(_BYTE *)(v5 + 476) = a5;
  ServerFormScreenController::_registerEventHandlers((ServerFormScreenController *)v5);
  ServerFormScreenController::_registerBindings((ServerFormScreenController *)v5);
  if ( *(_BYTE *)(v5 + 476) )
    *(_BYTE *)(v5 + 432) = 1;
    MinecraftScreenController::_setExitBehavior(v5, 3);
  v16 = *(void (__cdecl **)(int))(v5 + 412);
  if ( v16 )
    v16(v5 + 404);
    *(_DWORD *)(v5 + 412) = 0;
    *(_DWORD *)(v5 + 416) = 0;
  *(_DWORD *)(v5 + 472) = 0;
  v17 = *(_DWORD *)(v5 + 464);
  v18 = operator new(4u);
  *v18 = v5;
  v24 = v18;
  v19 = v25;
  *(_QWORD *)&v24 = *(_QWORD *)(v17 + 24);
  *(_DWORD *)(v17 + 24) = v18;
  *(_DWORD *)(v17 + 28) = v19;
  v26 = *(void (__cdecl **)(_DWORD))(v17 + 32);
  v20 = v26;
  *(_DWORD *)(v17 + 32) = sub_1237FC8;
  v27 = *(_DWORD *)(v17 + 36);
  *(_DWORD *)(v17 + 36) = sub_1237E50;
  if ( v20 )
    v20(&v24);
  return v5;
}


int __fastcall ServerFormScreenController::isValidData(__int64 a1)
{
  int v1; // r5@1
  int v2; // r4@1
  int v3; // r0@1
  int v4; // r6@1
  __int64 v5; // r0@1
  JsonValidator::Property *v6; // r0@1
  int v7; // r7@1
  __int64 v8; // r0@1
  void *v9; // r0@1
  void *v10; // r0@2
  int v11; // r6@3
  __int64 v12; // r0@3
  JsonValidator::Property *v13; // r0@3
  int v14; // r7@3
  __int64 v15; // r0@3
  void *v16; // r0@3
  __int64 v17; // r0@4
  int v18; // r6@5
  __int64 v19; // r0@5
  JsonValidator::Property *v20; // r0@5
  int v21; // r7@5
  __int64 v22; // r0@5
  void *v23; // r0@5
  __int64 v24; // r0@6
  JsonValidator::Property *v25; // r0@7
  __int64 v26; // r0@7
  int v27; // r6@7
  __int64 v28; // r0@7
  JsonValidator::Property *v29; // r0@7
  int v30; // r7@7
  __int64 v31; // r0@7
  void *v32; // r0@7
  void *v33; // r0@8
  int v34; // r6@9
  __int64 v35; // r0@9
  JsonValidator::Property *v36; // r0@9
  int v37; // r7@9
  __int64 v38; // r0@9
  void *v39; // r0@9
  void *v40; // r0@10
  int v41; // r6@11
  __int64 v42; // r0@11
  JsonValidator::Property *v43; // r0@11
  int v44; // r7@11
  __int64 v45; // r0@11
  void *v46; // r0@11
  void *v47; // r0@12
  __int64 v48; // r0@13
  int v49; // r6@13
  __int64 v50; // r0@13
  JsonValidator::Property *v51; // r0@13
  int v52; // r7@13
  __int64 v53; // r0@13
  void *v54; // r0@13
  __int64 v55; // r0@14
  int v56; // r6@15
  __int64 v57; // r0@15
  JsonValidator::Property *v58; // r0@15
  int v59; // r7@15
  __int64 v60; // r0@15
  void *v61; // r0@15
  void *v62; // r0@16
  __int64 v63; // r0@17
  void *v64; // r0@17
  int v65; // r6@18
  __int64 v66; // r0@18
  JsonValidator::Property *v67; // r0@18
  JsonValidator::Property *v68; // r0@18
  JsonValidator::Property *v69; // r7@18
  __int64 v70; // r0@18
  void *v71; // r0@18
  void *v72; // r0@19
  __int64 v73; // r0@20
  __int64 v74; // r0@20
  void *v75; // r0@20
  __int64 v76; // r0@21
  __int64 v77; // r0@21
  __int64 v78; // r0@22
  JsonValidator::Property *v79; // r0@22
  __int64 v80; // r0@22
  __int64 v81; // r0@22
  int v82; // r6@22
  __int64 v83; // r0@22
  __int64 v84; // r0@22
  void *v85; // r0@22
  __int64 v86; // r0@23
  int v87; // r6@23
  __int64 v88; // r0@23
  __int64 v89; // r0@23
  void *v90; // r0@23
  int v91; // r6@24
  __int64 v92; // r0@24
  JsonValidator::Property *v93; // r0@24
  __int64 v94; // r0@24
  void *v95; // r0@24
  int v96; // r6@25
  __int64 v97; // r0@25
  JsonValidator::Property *v98; // r0@25
  __int64 v99; // r0@25
  void *v100; // r0@25
  int v101; // r6@26
  __int64 v102; // r0@26
  int v103; // r7@26
  __int64 v104; // r0@26
  void *v105; // r0@26
  void *v106; // r0@27
  __int64 v107; // r0@28
  int v108; // r6@28
  __int64 v109; // r0@28
  __int64 v110; // r0@28
  __int64 v111; // r0@28
  int v112; // r6@29
  __int64 v113; // r0@29
  JsonValidator::Property *v114; // r0@29
  JsonValidator::Property *v115; // r0@29
  JsonValidator::Property *v116; // r7@29
  __int64 v117; // r0@29
  void *v118; // r0@29
  void *v119; // r0@30
  __int64 v120; // r0@31
  int v121; // r6@31
  __int64 v122; // r0@31
  __int64 v123; // r0@31
  __int64 v124; // r0@31
  int v125; // r6@32
  __int64 v126; // r0@32
  JsonValidator::Property *v127; // r0@32
  JsonValidator::Property *v128; // r0@32
  __int64 v129; // r0@32
  void *v130; // r0@32
  __int64 v131; // r0@33
  int v132; // r6@33
  __int64 v133; // r0@33
  __int64 v134; // r0@33
  void *v135; // r0@33
  int v136; // r6@34
  __int64 v137; // r0@34
  int v138; // r7@34
  __int64 v139; // r0@34
  void *v140; // r0@34
  void *v141; // r0@35
  int v142; // r6@36
  __int64 v143; // r0@36
  void *v144; // r0@36
  void *v145; // r0@37
  int v146; // r6@38
  __int64 v147; // r0@38
  JsonValidator::Property *v148; // r0@38
  int v149; // r7@38
  __int64 v150; // r0@38
  void *v151; // r0@38
  void *v152; // r0@39
  int v153; // r6@40
  __int64 v154; // r0@40
  JsonValidator::Property *v155; // r0@40
  JsonValidator::Property *v156; // r0@40
  __int64 v157; // r0@40
  void *v158; // r0@40
  __int64 v159; // r0@41
  void *v160; // r0@41
  int v161; // r4@42
  unsigned int *v163; // r2@43
  signed int v164; // r1@45
  unsigned int *v165; // r2@47
  signed int v166; // r1@49
  unsigned int *v167; // r2@51
  signed int v168; // r1@53
  unsigned int *v169; // r2@55
  unsigned int *v170; // r2@59
  signed int v171; // r1@61
  unsigned int *v172; // r2@63
  unsigned int *v173; // r2@67
  signed int v174; // r1@69
  unsigned int *v175; // r2@71
  signed int v176; // r1@73
  unsigned int *v177; // r2@75
  signed int v178; // r1@77
  unsigned int *v179; // r2@79
  signed int v180; // r1@81
  unsigned int *v181; // r2@83
  signed int v182; // r1@85
  unsigned int *v183; // r2@87
  signed int v184; // r1@89
  unsigned int *v185; // r2@91
  signed int v186; // r1@93
  unsigned int *v187; // r2@95
  unsigned int *v188; // r2@99
  signed int v189; // r1@101
  unsigned int *v190; // r2@103
  signed int v191; // r1@105
  unsigned int *v192; // r2@107
  signed int v193; // r1@109
  unsigned int *v194; // r2@111
  signed int v195; // r1@113
  unsigned int *v196; // r2@115
  signed int v197; // r1@117
  unsigned int *v198; // r2@119
  signed int v199; // r1@121
  unsigned int *v200; // r2@123
  unsigned int *v201; // r2@127
  signed int v202; // r1@129
  unsigned int *v203; // r2@131
  signed int v204; // r1@133
  unsigned int *v205; // r2@135
  signed int v206; // r1@137
  unsigned int *v207; // r2@139
  signed int v208; // r1@141
  unsigned int *v209; // r2@143
  signed int v210; // r1@145
  unsigned int *v211; // r2@147
  signed int v212; // r1@149
  unsigned int *v213; // r2@151
  unsigned int *v214; // r2@155
  signed int v215; // r1@157
  unsigned int *v216; // r2@159
  signed int v217; // r1@161
  unsigned int *v218; // r2@163
  unsigned int *v219; // r2@167
  signed int v220; // r1@169
  unsigned int *v221; // r2@171
  signed int v222; // r1@173
  unsigned int *v223; // r2@175
  signed int v224; // r1@177
  unsigned int *v225; // r2@179
  signed int v226; // r1@181
  unsigned int *v227; // r2@183
  signed int v228; // r1@185
  unsigned int *v229; // r2@187
  signed int v230; // r1@189
  unsigned int *v231; // r2@191
  signed int v232; // r1@193
  unsigned int *v233; // r2@195
  signed int v234; // r1@197
  unsigned int *v235; // r2@199
  signed int v236; // r1@201
  unsigned int *v237; // r2@203
  signed int v238; // r1@205
  int v239; // [sp+0h] [bp-E30h]@42
  int v240; // [sp+14h] [bp-E1Ch]@41
  char v241; // [sp+18h] [bp-E18h]@41
  char v242; // [sp+28h] [bp-E08h]@40
  int v243; // [sp+7Ch] [bp-DB4h]@40
  int v244; // [sp+84h] [bp-DACh]@38
  char v245; // [sp+88h] [bp-DA8h]@38
  int v246; // [sp+DCh] [bp-D54h]@38
  int v247; // [sp+E4h] [bp-D4Ch]@36
  int v248; // [sp+ECh] [bp-D44h]@36
  char v249; // [sp+F0h] [bp-D40h]@36
  int v250; // [sp+104h] [bp-D2Ch]@34
  char v251; // [sp+108h] [bp-D28h]@34
  int v252; // [sp+15Ch] [bp-CD4h]@34
  char v253; // [sp+160h] [bp-CD0h]@33
  int v254; // [sp+1B4h] [bp-C7Ch]@33
  char v255; // [sp+1B8h] [bp-C78h]@33
  char v256; // [sp+208h] [bp-C28h]@33
  char v257; // [sp+218h] [bp-C18h]@32
  int v258; // [sp+26Ch] [bp-BC4h]@32
  char v259; // [sp+270h] [bp-BC0h]@32
  char v260; // [sp+2C0h] [bp-B70h]@31
  int v261; // [sp+314h] [bp-B1Ch]@31
  char v262; // [sp+318h] [bp-B18h]@31
  char v263; // [sp+368h] [bp-AC8h]@31
  int v264; // [sp+37Ch] [bp-AB4h]@29
  char v265; // [sp+380h] [bp-AB0h]@29
  int v266; // [sp+3D4h] [bp-A5Ch]@29
  char v267; // [sp+3D8h] [bp-A58h]@29
  char v268; // [sp+428h] [bp-A08h]@28
  int v269; // [sp+47Ch] [bp-9B4h]@28
  char v270; // [sp+480h] [bp-9B0h]@28
  char v271; // [sp+4D0h] [bp-960h]@28
  int v272; // [sp+4E4h] [bp-94Ch]@26
  char v273; // [sp+4E8h] [bp-948h]@26
  int v274; // [sp+53Ch] [bp-8F4h]@26
  char v275; // [sp+540h] [bp-8F0h]@25
  int v276; // [sp+594h] [bp-89Ch]@25
  char v277; // [sp+598h] [bp-898h]@24
  int v278; // [sp+5ECh] [bp-844h]@24
  char v279; // [sp+5F0h] [bp-840h]@23
  int v280; // [sp+644h] [bp-7ECh]@23
  char v281; // [sp+648h] [bp-7E8h]@23
  char v282; // [sp+698h] [bp-798h]@23
  char v283; // [sp+6A8h] [bp-788h]@22
  int v284; // [sp+6FCh] [bp-734h]@22
  char v285; // [sp+700h] [bp-730h]@22
  char v286; // [sp+750h] [bp-6E0h]@22
  char v287; // [sp+760h] [bp-6D0h]@22
  char v288; // [sp+7B0h] [bp-680h]@22
  char v289; // [sp+800h] [bp-630h]@22
  int v290; // [sp+854h] [bp-5DCh]@21
  int v291; // [sp+85Ch] [bp-5D4h]@20
  char v292; // [sp+860h] [bp-5D0h]@20
  char v293; // [sp+8B0h] [bp-580h]@20
  int v294; // [sp+8C4h] [bp-56Ch]@18
  char v295; // [sp+8C8h] [bp-568h]@18
  int v296; // [sp+91Ch] [bp-514h]@18
  int v297; // [sp+924h] [bp-50Ch]@17
  int v298; // [sp+92Ch] [bp-504h]@15
  char v299; // [sp+930h] [bp-500h]@15
  int v300; // [sp+984h] [bp-4ACh]@15
  char v301; // [sp+988h] [bp-4A8h]@15
  int v302; // [sp+9DCh] [bp-454h]@13
  char v303; // [sp+9E0h] [bp-450h]@13
  int v304; // [sp+A34h] [bp-3FCh]@13
  char v305; // [sp+A38h] [bp-3F8h]@13
  char v306; // [sp+A88h] [bp-3A8h]@13
  int v307; // [sp+A9Ch] [bp-394h]@11
  char v308; // [sp+AA0h] [bp-390h]@11
  int v309; // [sp+AF4h] [bp-33Ch]@11
  int v310; // [sp+AFCh] [bp-334h]@9
  char v311; // [sp+B00h] [bp-330h]@9
  int v312; // [sp+B54h] [bp-2DCh]@9
  int v313; // [sp+B5Ch] [bp-2D4h]@7
  char v314; // [sp+B60h] [bp-2D0h]@7
  int v315; // [sp+BB4h] [bp-27Ch]@7
  char v316; // [sp+BB8h] [bp-278h]@7
  char v317; // [sp+C08h] [bp-228h]@7
  int v318; // [sp+C5Ch] [bp-1D4h]@5
  char v319; // [sp+C60h] [bp-1D0h]@5
  int v320; // [sp+CB4h] [bp-17Ch]@5
  char v321; // [sp+CB8h] [bp-178h]@5
  int v322; // [sp+D0Ch] [bp-124h]@3
  char v323; // [sp+D10h] [bp-120h]@3
  int v324; // [sp+D64h] [bp-CCh]@3
  int v325; // [sp+D6Ch] [bp-C4h]@1
  char v326; // [sp+D70h] [bp-C0h]@1
  int v327; // [sp+DC4h] [bp-6Ch]@1
  char v328; // [sp+DC8h] [bp-68h]@1

  v1 = a1;
  LODWORD(a1) = &v328;
  v2 = HIDWORD(a1);
  v3 = JsonValidator::Property::Property(a1);
  JsonValidator::Property::addType(v3, 7);
  sub_21E94B4((void **)&v327, "type");
  v4 = JsonValidator::Property::operator[]((int)&v328, (int **)&v327);
  _aeabi_memclr8(&v326, 80);
  LODWORD(v5) = &v326;
  JsonValidator::Property::Property(v5);
  v6 = (JsonValidator::Property *)JsonValidator::Property::addType((int)&v326, 4);
  v7 = JsonValidator::Property::required(v6);
  sub_21E94B4((void **)&v325, "Type of the image, can be either 'path' for an in-game path or 'url' for a custom image");
  HIDWORD(v8) = JsonValidator::Property::description(v7, &v325);
  LODWORD(v8) = v4;
  JsonValidator::Property::operator=(v8);
  v9 = (void *)(v325 - 12);
  if ( (int *)(v325 - 12) != &dword_28898C0 )
  {
    v163 = (unsigned int *)(v325 - 4);
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
      j_j_j_j__ZdlPv_9(v9);
  }
  JsonValidator::Property::~Property((JsonValidator::Property *)&v326);
  v10 = (void *)(v327 - 12);
  if ( (int *)(v327 - 12) != &dword_28898C0 )
    v165 = (unsigned int *)(v327 - 4);
        v166 = __ldrex(v165);
      while ( __strex(v166 - 1, v165) );
      v166 = (*v165)--;
    if ( v166 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v324, "data");
  v11 = JsonValidator::Property::operator[]((int)&v328, (int **)&v324);
  _aeabi_memclr8(&v323, 80);
  LODWORD(v12) = &v323;
  JsonValidator::Property::Property(v12);
  v13 = (JsonValidator::Property *)JsonValidator::Property::addType((int)&v323, 4);
  v14 = JsonValidator::Property::required(v13);
  sub_21E94B4((void **)&v322, "Either an in-game image path or a url");
  HIDWORD(v15) = JsonValidator::Property::description(v14, &v322);
  LODWORD(v15) = v11;
  JsonValidator::Property::operator=(v15);
  v16 = (void *)(v322 - 12);
  if ( (int *)(v322 - 12) != &dword_28898C0 )
    v167 = (unsigned int *)(v322 - 4);
        v168 = __ldrex(v167);
      while ( __strex(v168 - 1, v167) );
      v168 = (*v167)--;
    if ( v168 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v323);
  HIDWORD(v17) = v324;
  LODWORD(v17) = v324 - 12;
  if ( (int *)(v324 - 12) != &dword_28898C0 )
    v169 = (unsigned int *)(v324 - 4);
        HIDWORD(v17) = __ldrex(v169);
      while ( __strex(HIDWORD(v17) - 1, v169) );
      HIDWORD(v17) = (*v169)--;
    if ( SHIDWORD(v17) <= 0 )
      j_j_j_j__ZdlPv_9((void *)v17);
  LODWORD(v17) = &v321;
  JsonValidator::Property::Property(v17);
  JsonValidator::Property::addType((int)&v321, 7);
  sub_21E94B4((void **)&v320, "title");
  v18 = JsonValidator::Property::operator[]((int)&v321, (int **)&v320);
  _aeabi_memclr8(&v319, 80);
  LODWORD(v19) = &v319;
  JsonValidator::Property::Property(v19);
  v20 = (JsonValidator::Property *)JsonValidator::Property::addType((int)&v319, 4);
  v21 = JsonValidator::Property::required(v20);
  sub_21E94B4((void **)&v318, "Title for the displayed UI");
  HIDWORD(v22) = JsonValidator::Property::description(v21, &v318);
  LODWORD(v22) = v18;
  JsonValidator::Property::operator=(v22);
  v23 = (void *)(v318 - 12);
  if ( (int *)(v318 - 12) != &dword_28898C0 )
    v170 = (unsigned int *)(v318 - 4);
        v171 = __ldrex(v170);
      while ( __strex(v171 - 1, v170) );
      v171 = (*v170)--;
    if ( v171 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v319);
  HIDWORD(v24) = v320;
  LODWORD(v24) = v320 - 12;
  if ( (int *)(v320 - 12) != &dword_28898C0 )
    v172 = (unsigned int *)(v320 - 4);
        HIDWORD(v24) = __ldrex(v172);
      while ( __strex(HIDWORD(v24) - 1, v172) );
      HIDWORD(v24) = (*v172)--;
    if ( SHIDWORD(v24) <= 0 )
      j_j_j_j__ZdlPv_9((void *)v24);
  LODWORD(v24) = &v317;
  JsonValidator::Property::Property(v24);
  v25 = (JsonValidator::Property *)JsonValidator::Property::addType((int)&v317, 4);
  JsonValidator::Property::required(v25);
  LODWORD(v26) = &v316;
  JsonValidator::Property::Property(v26);
  sub_21E94B4((void **)&v315, "content");
  v27 = JsonValidator::Property::operator[]((int)&v316, (int **)&v315);
  _aeabi_memclr8(&v314, 80);
  LODWORD(v28) = &v314;
  JsonValidator::Property::Property(v28);
  v29 = (JsonValidator::Property *)JsonValidator::Property::addType((int)&v314, 4);
  v30 = JsonValidator::Property::required(v29);
  sub_21E94B4((void **)&v313, "Text for the modal to display");
  HIDWORD(v31) = JsonValidator::Property::description(v30, &v313);
  LODWORD(v31) = v27;
  JsonValidator::Property::operator=(v31);
  v32 = (void *)(v313 - 12);
  if ( (int *)(v313 - 12) != &dword_28898C0 )
    v173 = (unsigned int *)(v313 - 4);
        v174 = __ldrex(v173);
      while ( __strex(v174 - 1, v173) );
      v174 = (*v173)--;
    if ( v174 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v314);
  v33 = (void *)(v315 - 12);
  if ( (int *)(v315 - 12) != &dword_28898C0 )
    v175 = (unsigned int *)(v315 - 4);
        v176 = __ldrex(v175);
      while ( __strex(v176 - 1, v175) );
      v176 = (*v175)--;
    if ( v176 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  sub_21E94B4((void **)&v312, "button1");
  v34 = JsonValidator::Property::operator[]((int)&v316, (int **)&v312);
  _aeabi_memclr8(&v311, 80);
  LODWORD(v35) = &v311;
  JsonValidator::Property::Property(v35);
  v36 = (JsonValidator::Property *)JsonValidator::Property::addType((int)&v311, 4);
  v37 = JsonValidator::Property::required(v36);
  sub_21E94B4((void **)&v310, "Text for the left side confirmation button");
  HIDWORD(v38) = JsonValidator::Property::description(v37, &v310);
  LODWORD(v38) = v34;
  JsonValidator::Property::operator=(v38);
  v39 = (void *)(v310 - 12);
  if ( (int *)(v310 - 12) != &dword_28898C0 )
    v177 = (unsigned int *)(v310 - 4);
        v178 = __ldrex(v177);
      while ( __strex(v178 - 1, v177) );
      v178 = (*v177)--;
    if ( v178 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v311);
  v40 = (void *)(v312 - 12);
  if ( (int *)(v312 - 12) != &dword_28898C0 )
    v179 = (unsigned int *)(v312 - 4);
        v180 = __ldrex(v179);
      while ( __strex(v180 - 1, v179) );
      v180 = (*v179)--;
    if ( v180 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  sub_21E94B4((void **)&v309, "button2");
  v41 = JsonValidator::Property::operator[]((int)&v316, (int **)&v309);
  _aeabi_memclr8(&v308, 80);
  LODWORD(v42) = &v308;
  JsonValidator::Property::Property(v42);
  v43 = (JsonValidator::Property *)JsonValidator::Property::addType((int)&v308, 4);
  v44 = JsonValidator::Property::required(v43);
  sub_21E94B4((void **)&v307, "Text for the right side cancel button");
  HIDWORD(v45) = JsonValidator::Property::description(v44, &v307);
  LODWORD(v45) = v41;
  JsonValidator::Property::operator=(v45);
  v46 = (void *)(v307 - 12);
  if ( (int *)(v307 - 12) != &dword_28898C0 )
    v181 = (unsigned int *)(v307 - 4);
        v182 = __ldrex(v181);
      while ( __strex(v182 - 1, v181) );
      v182 = (*v181)--;
    if ( v182 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v308);
  v47 = (void *)(v309 - 12);
  if ( (int *)(v309 - 12) != &dword_28898C0 )
    v183 = (unsigned int *)(v309 - 4);
        v184 = __ldrex(v183);
      while ( __strex(v184 - 1, v183) );
      v184 = (*v183)--;
    if ( v184 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
  Json::Value::Value((Json::Value *)&v306, "modal");
  JsonValidator::Property::addConditionalProperty(
    (JsonValidator::Property *)&v317,
    (const Json::Value *)&v306,
    (const JsonValidator::Property *)&v316);
  Json::Value::~Value((Json::Value *)&v306);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v316);
  LODWORD(v48) = &v305;
  JsonValidator::Property::Property(v48);
  JsonValidator::Property::addType((int)&v305, 7);
  sub_21E94B4((void **)&v304, "content");
  v49 = JsonValidator::Property::operator[]((int)&v305, (int **)&v304);
  _aeabi_memclr8(&v303, 80);
  LODWORD(v50) = &v303;
  JsonValidator::Property::Property(v50);
  v51 = (JsonValidator::Property *)JsonValidator::Property::addType((int)&v303, 4);
  v52 = JsonValidator::Property::required(v51);
  sub_21E94B4((void **)&v302, "Text to be displayed before all of the buttons");
  HIDWORD(v53) = JsonValidator::Property::description(v52, &v302);
  LODWORD(v53) = v49;
  JsonValidator::Property::operator=(v53);
  v54 = (void *)(v302 - 12);
  if ( (int *)(v302 - 12) != &dword_28898C0 )
    v185 = (unsigned int *)(v302 - 4);
        v186 = __ldrex(v185);
      while ( __strex(v186 - 1, v185) );
      v186 = (*v185)--;
    if ( v186 <= 0 )
      j_j_j_j__ZdlPv_9(v54);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v303);
  HIDWORD(v55) = v304;
  LODWORD(v55) = v304 - 12;
  if ( (int *)(v304 - 12) != &dword_28898C0 )
    v187 = (unsigned int *)(v304 - 4);
        HIDWORD(v55) = __ldrex(v187);
      while ( __strex(HIDWORD(v55) - 1, v187) );
      HIDWORD(v55) = (*v187)--;
    if ( SHIDWORD(v55) <= 0 )
      j_j_j_j__ZdlPv_9((void *)v55);
  LODWORD(v55) = &v301;
  JsonValidator::Property::Property(v55);
  JsonValidator::Property::addType((int)&v301, 7);
  sub_21E94B4((void **)&v300, "text");
  v56 = JsonValidator::Property::operator[]((int)&v301, (int **)&v300);
  _aeabi_memclr8(&v299, 80);
  LODWORD(v57) = &v299;
  JsonValidator::Property::Property(v57);
  v58 = (JsonValidator::Property *)JsonValidator::Property::addType((int)&v299, 4);
  v59 = JsonValidator::Property::required(v58);
  sub_21E94B4((void **)&v298, "Text of the button");
  HIDWORD(v60) = JsonValidator::Property::description(v59, &v298);
  LODWORD(v60) = v56;
  JsonValidator::Property::operator=(v60);
  v61 = (void *)(v298 - 12);
  if ( (int *)(v298 - 12) != &dword_28898C0 )
    v188 = (unsigned int *)(v298 - 4);
        v189 = __ldrex(v188);
      while ( __strex(v189 - 1, v188) );
      v189 = (*v188)--;
    if ( v189 <= 0 )
      j_j_j_j__ZdlPv_9(v61);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v299);
  v62 = (void *)(v300 - 12);
  if ( (int *)(v300 - 12) != &dword_28898C0 )
    v190 = (unsigned int *)(v300 - 4);
        v191 = __ldrex(v190);
      while ( __strex(v191 - 1, v190) );
      v191 = (*v190)--;
    if ( v191 <= 0 )
      j_j_j_j__ZdlPv_9(v62);
  sub_21E94B4((void **)&v297, "image");
  LODWORD(v63) = JsonValidator::Property::operator[]((int)&v301, (int **)&v297);
  JsonValidator::Property::operator=(v63);
  v64 = (void *)(v297 - 12);
  if ( (int *)(v297 - 12) != &dword_28898C0 )
    v192 = (unsigned int *)(v297 - 4);
        v193 = __ldrex(v192);
      while ( __strex(v193 - 1, v192) );
      v193 = (*v192)--;
    if ( v193 <= 0 )
      j_j_j_j__ZdlPv_9(v64);
  sub_21E94B4((void **)&v296, "buttons");
  v65 = JsonValidator::Property::operator[]((int)&v305, (int **)&v296);
  _aeabi_memclr8(&v295, 80);
  LODWORD(v66) = &v295;
  JsonValidator::Property::Property(v66);
  v67 = (JsonValidator::Property *)JsonValidator::Property::addType((int)&v295, 6);
  v68 = (JsonValidator::Property *)JsonValidator::Property::required(v67);
  v69 = JsonValidator::Property::addChildProperty(v68, (const JsonValidator::Property *)&v301);
  sub_21E94B4((void **)&v294, "Objects that represent each button");
  HIDWORD(v70) = JsonValidator::Property::description((int)v69, &v294);
  LODWORD(v70) = v65;
  JsonValidator::Property::operator=(v70);
  v71 = (void *)(v294 - 12);
  if ( (int *)(v294 - 12) != &dword_28898C0 )
    v194 = (unsigned int *)(v294 - 4);
        v195 = __ldrex(v194);
      while ( __strex(v195 - 1, v194) );
      v195 = (*v194)--;
    if ( v195 <= 0 )
      j_j_j_j__ZdlPv_9(v71);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v295);
  v72 = (void *)(v296 - 12);
  if ( (int *)(v296 - 12) != &dword_28898C0 )
    v196 = (unsigned int *)(v296 - 4);
        v197 = __ldrex(v196);
      while ( __strex(v197 - 1, v196) );
      v197 = (*v196)--;
    if ( v197 <= 0 )
      j_j_j_j__ZdlPv_9(v72);
  Json::Value::Value((Json::Value *)&v293, "form");
    (const Json::Value *)&v293,
    (const JsonValidator::Property *)&v305);
  Json::Value::~Value((Json::Value *)&v293);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v301);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v305);
  LODWORD(v73) = &v292;
  JsonValidator::Property::Property(v73);
  JsonValidator::Property::addType((int)&v292, 7);
  sub_21E94B4((void **)&v291, "icon");
  LODWORD(v74) = JsonValidator::Property::operator[]((int)&v292, (int **)&v291);
  JsonValidator::Property::operator=(v74);
  v75 = (void *)(v291 - 12);
  if ( (int *)(v291 - 12) != &dword_28898C0 )
    v198 = (unsigned int *)(v291 - 4);
        v199 = __ldrex(v198);
      while ( __strex(v199 - 1, v198) );
      v199 = (*v198)--;
    if ( v199 <= 0 )
      j_j_j_j__ZdlPv_9(v75);
  sub_21E94B4((void **)&v290, "icon_outline");
  LODWORD(v76) = JsonValidator::Property::operator[]((int)&v292, (int **)&v290);
  JsonValidator::Property::operator=(v76);
  HIDWORD(v77) = v290;
  LODWORD(v77) = v290 - 12;
  if ( (int *)(v290 - 12) != &dword_28898C0 )
    v200 = (unsigned int *)(v290 - 4);
        HIDWORD(v77) = __ldrex(v200);
      while ( __strex(HIDWORD(v77) - 1, v200) );
      HIDWORD(v77) = (*v200)--;
    if ( SHIDWORD(v77) <= 0 )
      j_j_j_j__ZdlPv_9((void *)v77);
  LODWORD(v77) = &v289;
  JsonValidator::Property::Property(v77);
  JsonValidator::Property::addType((int)&v289, 7);
  LODWORD(v78) = &v288;
  JsonValidator::Property::Property(v78);
  v79 = (JsonValidator::Property *)JsonValidator::Property::addType((int)&v288, 4);
  JsonValidator::Property::required(v79);
  LODWORD(v80) = &v287;
  JsonValidator::Property::Property(v80);
  Json::Value::Value((Json::Value *)&v286, "label");
    (JsonValidator::Property *)&v288,
    (const Json::Value *)&v286,
    (const JsonValidator::Property *)&v287);
  Json::Value::~Value((Json::Value *)&v286);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v287);
  LODWORD(v81) = &v285;
  JsonValidator::Property::Property(v81);
  sub_21E94B4((void **)&v284, "default");
  v82 = JsonValidator::Property::operator[]((int)&v285, (int **)&v284);
  _aeabi_memclr8(&v283, 80);
  LODWORD(v83) = &v283;
  JsonValidator::Property::Property(v83);
  HIDWORD(v84) = JsonValidator::Property::addType((int)&v283, 5);
  LODWORD(v84) = v82;
  JsonValidator::Property::operator=(v84);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v283);
  v85 = (void *)(v284 - 12);
  if ( (int *)(v284 - 12) != &dword_28898C0 )
    v201 = (unsigned int *)(v284 - 4);
        v202 = __ldrex(v201);
      while ( __strex(v202 - 1, v201) );
      v202 = (*v201)--;
    if ( v202 <= 0 )
      j_j_j_j__ZdlPv_9(v85);
  Json::Value::Value((Json::Value *)&v282, "toggle");
    (const Json::Value *)&v282,
    (const JsonValidator::Property *)&v285);
  Json::Value::~Value((Json::Value *)&v282);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v285);
  LODWORD(v86) = &v281;
  JsonValidator::Property::Property(v86);
  sub_21E94B4((void **)&v280, "default");
  v87 = JsonValidator::Property::operator[]((int)&v281, (int **)&v280);
  _aeabi_memclr8(&v279, 80);
  LODWORD(v88) = &v279;
  JsonValidator::Property::Property(v88);
  HIDWORD(v89) = JsonValidator::Property::addType((int)&v279, 3);
  LODWORD(v89) = v87;
  JsonValidator::Property::operator=(v89);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v279);
  v90 = (void *)(v280 - 12);
  if ( (int *)(v280 - 12) != &dword_28898C0 )
    v203 = (unsigned int *)(v280 - 4);
        v204 = __ldrex(v203);
      while ( __strex(v204 - 1, v203) );
      v204 = (*v203)--;
    if ( v204 <= 0 )
      j_j_j_j__ZdlPv_9(v90);
  sub_21E94B4((void **)&v278, "min");
  v91 = JsonValidator::Property::operator[]((int)&v281, (int **)&v278);
  _aeabi_memclr8(&v277, 80);
  LODWORD(v92) = &v277;
  JsonValidator::Property::Property(v92);
  v93 = (JsonValidator::Property *)JsonValidator::Property::addType((int)&v277, 3);
  HIDWORD(v94) = JsonValidator::Property::required(v93);
  LODWORD(v94) = v91;
  JsonValidator::Property::operator=(v94);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v277);
  v95 = (void *)(v278 - 12);
  if ( (int *)(v278 - 12) != &dword_28898C0 )
    v205 = (unsigned int *)(v278 - 4);
        v206 = __ldrex(v205);
      while ( __strex(v206 - 1, v205) );
      v206 = (*v205)--;
    if ( v206 <= 0 )
      j_j_j_j__ZdlPv_9(v95);
  sub_21E94B4((void **)&v276, "max");
  v96 = JsonValidator::Property::operator[]((int)&v281, (int **)&v276);
  _aeabi_memclr8(&v275, 80);
  LODWORD(v97) = &v275;
  JsonValidator::Property::Property(v97);
  v98 = (JsonValidator::Property *)JsonValidator::Property::addType((int)&v275, 3);
  HIDWORD(v99) = JsonValidator::Property::required(v98);
  LODWORD(v99) = v96;
  JsonValidator::Property::operator=(v99);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v275);
  v100 = (void *)(v276 - 12);
  if ( (int *)(v276 - 12) != &dword_28898C0 )
    v207 = (unsigned int *)(v276 - 4);
        v208 = __ldrex(v207);
      while ( __strex(v208 - 1, v207) );
      v208 = (*v207)--;
    if ( v208 <= 0 )
      j_j_j_j__ZdlPv_9(v100);
  sub_21E94B4((void **)&v274, "step");
  v101 = JsonValidator::Property::operator[]((int)&v281, (int **)&v274);
  _aeabi_memclr8(&v273, 80);
  LODWORD(v102) = &v273;
  JsonValidator::Property::Property(v102);
  v103 = JsonValidator::Property::addType((int)&v273, 3);
  sub_21E94B4((void **)&v272, "Amount the slider should increment each step. Defaults to 1");
  HIDWORD(v104) = JsonValidator::Property::description(v103, &v272);
  LODWORD(v104) = v101;
  JsonValidator::Property::operator=(v104);
  v105 = (void *)(v272 - 12);
  if ( (int *)(v272 - 12) != &dword_28898C0 )
    v209 = (unsigned int *)(v272 - 4);
        v210 = __ldrex(v209);
      while ( __strex(v210 - 1, v209) );
      v210 = (*v209)--;
    if ( v210 <= 0 )
      j_j_j_j__ZdlPv_9(v105);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v273);
  v106 = (void *)(v274 - 12);
  if ( (int *)(v274 - 12) != &dword_28898C0 )
    v211 = (unsigned int *)(v274 - 4);
        v212 = __ldrex(v211);
      while ( __strex(v212 - 1, v211) );
      v212 = (*v211)--;
    if ( v212 <= 0 )
      j_j_j_j__ZdlPv_9(v106);
  Json::Value::Value((Json::Value *)&v271, "slider");
    (const Json::Value *)&v271,
    (const JsonValidator::Property *)&v281);
  Json::Value::~Value((Json::Value *)&v271);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v281);
  LODWORD(v107) = &v270;
  JsonValidator::Property::Property(v107);
  sub_21E94B4((void **)&v269, "default");
  v108 = JsonValidator::Property::operator[]((int)&v270, (int **)&v269);
  _aeabi_memclr8(&v268, 80);
  LODWORD(v109) = &v268;
  JsonValidator::Property::Property(v109);
  HIDWORD(v110) = JsonValidator::Property::addType((int)&v268, 2);
  LODWORD(v110) = v108;
  JsonValidator::Property::operator=(v110);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v268);
  HIDWORD(v111) = v269;
  LODWORD(v111) = v269 - 12;
  if ( (int *)(v269 - 12) != &dword_28898C0 )
    v213 = (unsigned int *)(v269 - 4);
        HIDWORD(v111) = __ldrex(v213);
      while ( __strex(HIDWORD(v111) - 1, v213) );
      HIDWORD(v111) = (*v213)--;
    if ( SHIDWORD(v111) <= 0 )
      j_j_j_j__ZdlPv_9((void *)v111);
  LODWORD(v111) = &v267;
  JsonValidator::Property::Property(v111);
  JsonValidator::Property::addType((int)&v267, 4);
  sub_21E94B4((void **)&v266, "steps");
  v112 = JsonValidator::Property::operator[]((int)&v270, (int **)&v266);
  _aeabi_memclr8(&v265, 80);
  LODWORD(v113) = &v265;
  JsonValidator::Property::Property(v113);
  v114 = (JsonValidator::Property *)JsonValidator::Property::addType((int)&v265, 6);
  v115 = (JsonValidator::Property *)JsonValidator::Property::required(v114);
  v116 = JsonValidator::Property::addChildProperty(v115, (const JsonValidator::Property *)&v267);
  sub_21E94B4((void **)&v264, "Value for each increment of the slider");
  HIDWORD(v117) = JsonValidator::Property::description((int)v116, &v264);
  LODWORD(v117) = v112;
  JsonValidator::Property::operator=(v117);
  v118 = (void *)(v264 - 12);
  if ( (int *)(v264 - 12) != &dword_28898C0 )
    v214 = (unsigned int *)(v264 - 4);
        v215 = __ldrex(v214);
      while ( __strex(v215 - 1, v214) );
      v215 = (*v214)--;
    if ( v215 <= 0 )
      j_j_j_j__ZdlPv_9(v118);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v265);
  v119 = (void *)(v266 - 12);
  if ( (int *)(v266 - 12) != &dword_28898C0 )
    v216 = (unsigned int *)(v266 - 4);
        v217 = __ldrex(v216);
      while ( __strex(v217 - 1, v216) );
      v217 = (*v216)--;
    if ( v217 <= 0 )
      j_j_j_j__ZdlPv_9(v119);
  Json::Value::Value((Json::Value *)&v263, "step_slider");
    (const Json::Value *)&v263,
    (const JsonValidator::Property *)&v270);
  Json::Value::~Value((Json::Value *)&v263);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v267);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v270);
  LODWORD(v120) = &v262;
  JsonValidator::Property::Property(v120);
  sub_21E94B4((void **)&v261, "default");
  v121 = JsonValidator::Property::operator[]((int)&v262, (int **)&v261);
  _aeabi_memclr8(&v260, 80);
  LODWORD(v122) = &v260;
  JsonValidator::Property::Property(v122);
  HIDWORD(v123) = JsonValidator::Property::addType((int)&v260, 2);
  LODWORD(v123) = v121;
  JsonValidator::Property::operator=(v123);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v260);
  HIDWORD(v124) = v261;
  LODWORD(v124) = v261 - 12;
  if ( (int *)(v261 - 12) != &dword_28898C0 )
    v218 = (unsigned int *)(v261 - 4);
        HIDWORD(v124) = __ldrex(v218);
      while ( __strex(HIDWORD(v124) - 1, v218) );
      HIDWORD(v124) = (*v218)--;
    if ( SHIDWORD(v124) <= 0 )
      j_j_j_j__ZdlPv_9((void *)v124);
  LODWORD(v124) = &v259;
  JsonValidator::Property::Property(v124);
  JsonValidator::Property::addType((int)&v259, 4);
  sub_21E94B4((void **)&v258, "options");
  v125 = JsonValidator::Property::operator[]((int)&v262, (int **)&v258);
  _aeabi_memclr8(&v257, 80);
  LODWORD(v126) = &v257;
  JsonValidator::Property::Property(v126);
  v127 = (JsonValidator::Property *)JsonValidator::Property::addType((int)&v257, 6);
  v128 = (JsonValidator::Property *)JsonValidator::Property::required(v127);
  HIDWORD(v129) = JsonValidator::Property::addChildProperty(v128, (const JsonValidator::Property *)&v259);
  LODWORD(v129) = v125;
  JsonValidator::Property::operator=(v129);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v257);
  v130 = (void *)(v258 - 12);
  if ( (int *)(v258 - 12) != &dword_28898C0 )
    v219 = (unsigned int *)(v258 - 4);
        v220 = __ldrex(v219);
      while ( __strex(v220 - 1, v219) );
      v220 = (*v219)--;
    if ( v220 <= 0 )
      j_j_j_j__ZdlPv_9(v130);
  Json::Value::Value((Json::Value *)&v256, "dropdown");
    (const Json::Value *)&v256,
    (const JsonValidator::Property *)&v262);
  Json::Value::~Value((Json::Value *)&v256);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v259);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v262);
  LODWORD(v131) = &v255;
  JsonValidator::Property::Property(v131);
  sub_21E94B4((void **)&v254, "default");
  v132 = JsonValidator::Property::operator[]((int)&v255, (int **)&v254);
  _aeabi_memclr8(&v253, 80);
  LODWORD(v133) = &v253;
  JsonValidator::Property::Property(v133);
  HIDWORD(v134) = JsonValidator::Property::addType((int)&v253, 4);
  LODWORD(v134) = v132;
  JsonValidator::Property::operator=(v134);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v253);
  v135 = (void *)(v254 - 12);
  if ( (int *)(v254 - 12) != &dword_28898C0 )
    v221 = (unsigned int *)(v254 - 4);
        v222 = __ldrex(v221);
      while ( __strex(v222 - 1, v221) );
      v222 = (*v221)--;
    if ( v222 <= 0 )
      j_j_j_j__ZdlPv_9(v135);
  sub_21E94B4((void **)&v252, "placeholder");
  v136 = JsonValidator::Property::operator[]((int)&v255, (int **)&v252);
  _aeabi_memclr8(&v251, 80);
  LODWORD(v137) = &v251;
  JsonValidator::Property::Property(v137);
  v138 = JsonValidator::Property::addType((int)&v251, 4);
  sub_21E94B4((void **)&v250, "Faded text to appear in the textbox before the user types in it.");
  HIDWORD(v139) = JsonValidator::Property::description(v138, &v250);
  LODWORD(v139) = v136;
  JsonValidator::Property::operator=(v139);
  v140 = (void *)(v250 - 12);
  if ( (int *)(v250 - 12) != &dword_28898C0 )
    v223 = (unsigned int *)(v250 - 4);
        v224 = __ldrex(v223);
      while ( __strex(v224 - 1, v223) );
      v224 = (*v223)--;
    if ( v224 <= 0 )
      j_j_j_j__ZdlPv_9(v140);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v251);
  v141 = (void *)(v252 - 12);
  if ( (int *)(v252 - 12) != &dword_28898C0 )
    v225 = (unsigned int *)(v252 - 4);
        v226 = __ldrex(v225);
      while ( __strex(v226 - 1, v225) );
      v226 = (*v225)--;
    if ( v226 <= 0 )
      j_j_j_j__ZdlPv_9(v141);
  Json::Value::Value((Json::Value *)&v249, "input");
    (const Json::Value *)&v249,
    (const JsonValidator::Property *)&v255);
  Json::Value::~Value((Json::Value *)&v249);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v255);
  JsonValidator::Property::requireConditionalProperty((JsonValidator::Property *)&v288);
  sub_21E94B4((void **)&v248, "type");
  v142 = JsonValidator::Property::operator[]((int)&v289, (int **)&v248);
  sub_21E94B4((void **)&v247, "Type of control used");
  HIDWORD(v143) = JsonValidator::Property::description((int)&v288, &v247);
  LODWORD(v143) = v142;
  JsonValidator::Property::operator=(v143);
  v144 = (void *)(v247 - 12);
  if ( (int *)(v247 - 12) != &dword_28898C0 )
    v227 = (unsigned int *)(v247 - 4);
        v228 = __ldrex(v227);
      while ( __strex(v228 - 1, v227) );
      v228 = (*v227)--;
    if ( v228 <= 0 )
      j_j_j_j__ZdlPv_9(v144);
  v145 = (void *)(v248 - 12);
  if ( (int *)(v248 - 12) != &dword_28898C0 )
    v229 = (unsigned int *)(v248 - 4);
        v230 = __ldrex(v229);
      while ( __strex(v230 - 1, v229) );
      v230 = (*v229)--;
    if ( v230 <= 0 )
      j_j_j_j__ZdlPv_9(v145);
  sub_21E94B4((void **)&v246, "text");
  v146 = JsonValidator::Property::operator[]((int)&v289, (int **)&v246);
  _aeabi_memclr8(&v245, 80);
  LODWORD(v147) = &v245;
  JsonValidator::Property::Property(v147);
  v148 = (JsonValidator::Property *)JsonValidator::Property::addType((int)&v245, 4);
  v149 = JsonValidator::Property::required(v148);
  sub_21E94B4((void **)&v244, "Text to be displayed above the control");
  HIDWORD(v150) = JsonValidator::Property::description(v149, &v244);
  LODWORD(v150) = v146;
  JsonValidator::Property::operator=(v150);
  v151 = (void *)(v244 - 12);
  if ( (int *)(v244 - 12) != &dword_28898C0 )
    v231 = (unsigned int *)(v244 - 4);
        v232 = __ldrex(v231);
      while ( __strex(v232 - 1, v231) );
      v232 = (*v231)--;
    if ( v232 <= 0 )
      j_j_j_j__ZdlPv_9(v151);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v245);
  v152 = (void *)(v246 - 12);
  if ( (int *)(v246 - 12) != &dword_28898C0 )
    v233 = (unsigned int *)(v246 - 4);
        v234 = __ldrex(v233);
      while ( __strex(v234 - 1, v233) );
      v234 = (*v233)--;
    if ( v234 <= 0 )
      j_j_j_j__ZdlPv_9(v152);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v288);
  sub_21E94B4((void **)&v243, "content");
  v153 = JsonValidator::Property::operator[]((int)&v292, (int **)&v243);
  _aeabi_memclr8(&v242, 80);
  LODWORD(v154) = &v242;
  JsonValidator::Property::Property(v154);
  v155 = (JsonValidator::Property *)JsonValidator::Property::addType((int)&v242, 6);
  v156 = (JsonValidator::Property *)JsonValidator::Property::required(v155);
  HIDWORD(v157) = JsonValidator::Property::addChildProperty(v156, (const JsonValidator::Property *)&v289);
  LODWORD(v157) = v153;
  JsonValidator::Property::operator=(v157);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v242);
  v158 = (void *)(v243 - 12);
  if ( (int *)(v243 - 12) != &dword_28898C0 )
    v235 = (unsigned int *)(v243 - 4);
        v236 = __ldrex(v235);
      while ( __strex(v236 - 1, v235) );
      v236 = (*v235)--;
    if ( v236 <= 0 )
      j_j_j_j__ZdlPv_9(v158);
  Json::Value::Value((Json::Value *)&v241, "custom_form");
    (const Json::Value *)&v241,
    (const JsonValidator::Property *)&v292);
  Json::Value::~Value((Json::Value *)&v241);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v289);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v292);
  JsonValidator::Property::requireConditionalProperty((JsonValidator::Property *)&v317);
  sub_21E94B4((void **)&v240, "type");
  LODWORD(v159) = JsonValidator::Property::operator[]((int)&v321, (int **)&v240);
  JsonValidator::Property::operator=(v159);
  v160 = (void *)(v240 - 12);
  if ( (int *)(v240 - 12) != &dword_28898C0 )
    v237 = (unsigned int *)(v240 - 4);
        v238 = __ldrex(v237);
      while ( __strex(v238 - 1, v237) );
      v238 = (*v237)--;
    if ( v238 <= 0 )
      j_j_j_j__ZdlPv_9(v160);
  v161 = JsonValidator::validate((int)&v321, v1, v2);
  JsonValidator::generateDocs((JsonValidator *)&v239, (const JsonValidator::Property *)&v321);
  Json::Value::~Value((Json::Value *)&v239);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v317);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v321);
  JsonValidator::Property::~Property((JsonValidator::Property *)&v328);
  return v161;
}


void __fastcall ServerFormScreenController::_registerBindings(ServerFormScreenController *this)
{
  ScreenController *v1; // r4@1 OVERLAPPED
  _DWORD *v2; // r0@1
  _DWORD *v3; // r0@5
  _DWORD *v4; // r0@9
  __int64 v5; // r1@9
  _DWORD *v6; // r0@13
  __int64 v7; // r1@13
  __int64 v8; // r1@13
  _DWORD *v9; // r0@17
  __int64 v10; // r1@17
  __int64 v11; // r1@17
  _DWORD *v12; // r0@21
  __int64 v13; // r1@21
  __int64 v14; // r1@21
  _DWORD *v15; // r0@25
  __int64 v16; // r1@25
  __int64 v17; // r1@25
  _DWORD *v18; // r0@29
  __int64 v19; // r1@29
  __int64 v20; // r1@29
  _DWORD *v21; // r0@33
  __int64 v22; // r1@33
  __int64 v23; // r1@33
  _DWORD *v24; // r0@37
  __int64 v25; // r1@37
  _DWORD *v26; // r0@39
  __int64 v27; // r1@39
  __int64 v28; // r1@39
  _DWORD *v29; // r0@43
  __int64 v30; // r1@43
  __int64 v31; // r1@43
  _DWORD *v32; // r0@47
  __int64 v33; // r1@47
  __int64 v34; // r1@47
  int v35; // r5@51
  _DWORD *v36; // r0@51
  __int64 v37; // r1@51
  void *v38; // r0@53
  _DWORD *v39; // r0@54
  __int64 v40; // r1@54
  __int64 v41; // r1@54
  int v42; // r5@58
  _DWORD *v43; // r0@58
  __int64 v44; // r1@58
  void *v45; // r0@60
  _DWORD *v46; // r0@61
  __int64 v47; // r1@61
  __int64 v48; // r1@61
  _DWORD *v49; // r0@65
  __int64 v50; // r1@65
  __int64 v51; // r1@65
  _DWORD *v52; // r0@69
  __int64 v53; // r1@69
  __int64 v54; // r1@69
  int v55; // r5@73
  _DWORD *v56; // r0@73
  __int64 v57; // r1@73
  void *v58; // r0@75
  _DWORD *v59; // r0@76
  __int64 v60; // r1@76
  __int64 v61; // r1@76
  int v62; // r5@80
  _DWORD *v63; // r0@80
  __int64 v64; // r1@80
  void *v65; // r0@82
  int v66; // r5@83
  _DWORD *v67; // r0@83
  __int64 v68; // r1@83
  void *v69; // r0@85
  _DWORD *v70; // r0@86
  __int64 v71; // r1@86
  __int64 v72; // r1@86
  _DWORD *v73; // r0@90
  __int64 v74; // r1@90
  __int64 v75; // r1@90
  _DWORD *v76; // r0@94
  __int64 v77; // r1@94
  __int64 v78; // r1@94
  _QWORD *v79; // r0@98
  int v80; // r3@98
  __int64 v81; // r1@98
  _QWORD *v82; // r0@100
  int v83; // r3@100
  __int64 v84; // r1@100
  int v85; // r5@102
  _DWORD *v86; // r0@102
  __int64 v87; // r1@102
  void *v88; // r0@104
  _DWORD *v89; // r0@105
  __int64 v90; // r1@105
  __int64 v91; // r1@105
  _DWORD *v92; // r0@109
  __int64 v93; // r1@109
  __int64 v94; // r1@109
  int v95; // r5@113
  _DWORD *v96; // r0@113
  __int64 v97; // r1@113
  void *v98; // r0@115
  int v99; // r5@116
  _DWORD *v100; // r0@116
  __int64 v101; // r1@116
  void *v102; // r0@118
  unsigned int *v103; // r2@120
  signed int v104; // r1@122
  unsigned int *v105; // r2@124
  signed int v106; // r1@126
  unsigned int *v107; // r2@128
  signed int v108; // r1@130
  unsigned int *v109; // r2@132
  signed int v110; // r1@134
  unsigned int *v111; // r2@136
  signed int v112; // r1@138
  unsigned int *v113; // r2@140
  signed int v114; // r1@142
  unsigned int *v115; // r2@144
  signed int v116; // r1@146
  unsigned int *v117; // r2@148
  signed int v118; // r1@150
  _DWORD *v119; // [sp+8h] [bp-470h]@116
  __int64 v120; // [sp+10h] [bp-468h]@116
  int v121; // [sp+1Ch] [bp-45Ch]@116
  _DWORD *v122; // [sp+20h] [bp-458h]@113
  __int64 v123; // [sp+28h] [bp-450h]@113
  int v124; // [sp+34h] [bp-444h]@113
  void *v125; // [sp+38h] [bp-440h]@109
  __int64 v126; // [sp+40h] [bp-438h]@109
  _DWORD *v127; // [sp+48h] [bp-430h]@109
  __int64 v128; // [sp+50h] [bp-428h]@109
  int v129; // [sp+58h] [bp-420h]@109
  int v130; // [sp+5Ch] [bp-41Ch]@109
  void *v131; // [sp+60h] [bp-418h]@105
  __int64 v132; // [sp+68h] [bp-410h]@105
  _DWORD *v133; // [sp+70h] [bp-408h]@105
  __int64 v134; // [sp+78h] [bp-400h]@105
  int v135; // [sp+80h] [bp-3F8h]@105
  int v136; // [sp+84h] [bp-3F4h]@105
  _DWORD *v137; // [sp+88h] [bp-3F0h]@102
  __int64 v138; // [sp+90h] [bp-3E8h]@102
  int v139; // [sp+9Ch] [bp-3DCh]@102
  _QWORD *v140; // [sp+A0h] [bp-3D8h]@100
  __int64 v141; // [sp+A8h] [bp-3D0h]@100
  int v142; // [sp+B0h] [bp-3C8h]@100
  int v143; // [sp+B4h] [bp-3C4h]@100
  _QWORD *v144; // [sp+B8h] [bp-3C0h]@98
  __int64 v145; // [sp+C0h] [bp-3B8h]@98
  int v146; // [sp+C8h] [bp-3B0h]@98
  int v147; // [sp+CCh] [bp-3ACh]@98
  void *v148; // [sp+D0h] [bp-3A8h]@94
  __int64 v149; // [sp+D8h] [bp-3A0h]@94
  _DWORD *v150; // [sp+E0h] [bp-398h]@94
  __int64 v151; // [sp+E8h] [bp-390h]@94
  int v152; // [sp+F0h] [bp-388h]@94
  int v153; // [sp+F4h] [bp-384h]@94
  void *v154; // [sp+F8h] [bp-380h]@90
  __int64 v155; // [sp+100h] [bp-378h]@90
  _DWORD *v156; // [sp+108h] [bp-370h]@90
  __int64 v157; // [sp+110h] [bp-368h]@90
  int v158; // [sp+118h] [bp-360h]@90
  int v159; // [sp+11Ch] [bp-35Ch]@90
  void *v160; // [sp+120h] [bp-358h]@86
  __int64 v161; // [sp+128h] [bp-350h]@86
  _DWORD *v162; // [sp+130h] [bp-348h]@86
  __int64 v163; // [sp+138h] [bp-340h]@86
  int v164; // [sp+140h] [bp-338h]@86
  int v165; // [sp+144h] [bp-334h]@86
  _DWORD *v166; // [sp+148h] [bp-330h]@83
  __int64 v167; // [sp+150h] [bp-328h]@83
  int v168; // [sp+15Ch] [bp-31Ch]@83
  _DWORD *v169; // [sp+160h] [bp-318h]@80
  __int64 v170; // [sp+168h] [bp-310h]@80
  int v171; // [sp+174h] [bp-304h]@80
  void *v172; // [sp+178h] [bp-300h]@76
  __int64 v173; // [sp+180h] [bp-2F8h]@76
  _DWORD *v174; // [sp+188h] [bp-2F0h]@76
  __int64 v175; // [sp+190h] [bp-2E8h]@76
  int v176; // [sp+198h] [bp-2E0h]@76
  int v177; // [sp+19Ch] [bp-2DCh]@76
  _DWORD *v178; // [sp+1A0h] [bp-2D8h]@73
  __int64 v179; // [sp+1A8h] [bp-2D0h]@73
  int v180; // [sp+1B4h] [bp-2C4h]@73
  void *v181; // [sp+1B8h] [bp-2C0h]@69
  __int64 v182; // [sp+1C0h] [bp-2B8h]@69
  _DWORD *v183; // [sp+1C8h] [bp-2B0h]@69
  __int64 v184; // [sp+1D0h] [bp-2A8h]@69
  int v185; // [sp+1D8h] [bp-2A0h]@69
  int v186; // [sp+1DCh] [bp-29Ch]@69
  void *v187; // [sp+1E0h] [bp-298h]@65
  __int64 v188; // [sp+1E8h] [bp-290h]@65
  _DWORD *v189; // [sp+1F0h] [bp-288h]@65
  __int64 v190; // [sp+1F8h] [bp-280h]@65
  int v191; // [sp+200h] [bp-278h]@65
  int v192; // [sp+204h] [bp-274h]@65
  void *v193; // [sp+208h] [bp-270h]@61
  __int64 v194; // [sp+210h] [bp-268h]@61
  _DWORD *v195; // [sp+218h] [bp-260h]@61
  __int64 v196; // [sp+220h] [bp-258h]@61
  int v197; // [sp+228h] [bp-250h]@61
  int v198; // [sp+22Ch] [bp-24Ch]@61
  _DWORD *v199; // [sp+230h] [bp-248h]@58
  __int64 v200; // [sp+238h] [bp-240h]@58
  int v201; // [sp+244h] [bp-234h]@58
  void *v202; // [sp+248h] [bp-230h]@54
  __int64 v203; // [sp+250h] [bp-228h]@54
  _DWORD *v204; // [sp+258h] [bp-220h]@54
  __int64 v205; // [sp+260h] [bp-218h]@54
  int v206; // [sp+268h] [bp-210h]@54
  int v207; // [sp+26Ch] [bp-20Ch]@54
  _DWORD *v208; // [sp+270h] [bp-208h]@51
  __int64 v209; // [sp+278h] [bp-200h]@51
  int v210; // [sp+284h] [bp-1F4h]@51
  void *v211; // [sp+288h] [bp-1F0h]@47
  __int64 v212; // [sp+290h] [bp-1E8h]@47
  _DWORD *v213; // [sp+298h] [bp-1E0h]@47
  __int64 v214; // [sp+2A0h] [bp-1D8h]@47
  int v215; // [sp+2A8h] [bp-1D0h]@47
  int v216; // [sp+2ACh] [bp-1CCh]@47
  void *v217; // [sp+2B0h] [bp-1C8h]@43
  __int64 v218; // [sp+2B8h] [bp-1C0h]@43
  _DWORD *v219; // [sp+2C0h] [bp-1B8h]@43
  __int64 v220; // [sp+2C8h] [bp-1B0h]@43
  int v221; // [sp+2D0h] [bp-1A8h]@43
  int v222; // [sp+2D4h] [bp-1A4h]@43
  void *v223; // [sp+2D8h] [bp-1A0h]@39
  __int64 v224; // [sp+2E0h] [bp-198h]@39
  _DWORD *v225; // [sp+2E8h] [bp-190h]@39
  __int64 v226; // [sp+2F0h] [bp-188h]@39
  int v227; // [sp+2F8h] [bp-180h]@39
  _DWORD *v228; // [sp+2FCh] [bp-17Ch]@37
  __int64 v229; // [sp+304h] [bp-174h]@37
  int v230; // [sp+30Ch] [bp-16Ch]@37
  void *v231; // [sp+310h] [bp-168h]@33
  __int64 v232; // [sp+318h] [bp-160h]@33
  _DWORD *v233; // [sp+320h] [bp-158h]@33
  __int64 v234; // [sp+328h] [bp-150h]@33
  int v235; // [sp+330h] [bp-148h]@33
  void *v236; // [sp+334h] [bp-144h]@29
  __int64 v237; // [sp+33Ch] [bp-13Ch]@29
  _DWORD *v238; // [sp+344h] [bp-134h]@29
  __int64 v239; // [sp+34Ch] [bp-12Ch]@29
  int v240; // [sp+354h] [bp-124h]@29
  void *v241; // [sp+358h] [bp-120h]@25
  __int64 v242; // [sp+360h] [bp-118h]@25
  _DWORD *v243; // [sp+368h] [bp-110h]@25
  __int64 v244; // [sp+370h] [bp-108h]@25
  int v245; // [sp+378h] [bp-100h]@25
  void *v246; // [sp+37Ch] [bp-FCh]@21
  __int64 v247; // [sp+384h] [bp-F4h]@21
  _DWORD *v248; // [sp+38Ch] [bp-ECh]@21
  __int64 v249; // [sp+394h] [bp-E4h]@21
  int v250; // [sp+39Ch] [bp-DCh]@21
  void *v251; // [sp+3A0h] [bp-D8h]@17
  __int64 v252; // [sp+3A8h] [bp-D0h]@17
  _DWORD *v253; // [sp+3B0h] [bp-C8h]@17
  __int64 v254; // [sp+3B8h] [bp-C0h]@17
  int v255; // [sp+3C0h] [bp-B8h]@17
  int v256; // [sp+3C4h] [bp-B4h]@17
  void *v257; // [sp+3C8h] [bp-B0h]@13
  __int64 v258; // [sp+3D0h] [bp-A8h]@13
  _DWORD *v259; // [sp+3D8h] [bp-A0h]@13
  __int64 v260; // [sp+3E0h] [bp-98h]@13
  int v261; // [sp+3E8h] [bp-90h]@13
  int v262; // [sp+3ECh] [bp-8Ch]@13
  void *v263; // [sp+3F0h] [bp-88h]@9
  __int64 v264; // [sp+3F8h] [bp-80h]@9
  _DWORD *v265; // [sp+400h] [bp-78h]@9
  void (*v266)(void); // [sp+408h] [bp-70h]@9
  void (__fastcall *v267)(int *, int, unsigned int); // [sp+40Ch] [bp-6Ch]@9
  int v268; // [sp+410h] [bp-68h]@9
  int v269; // [sp+414h] [bp-64h]@9
  void *v270; // [sp+418h] [bp-60h]@5
  void (*v271)(void); // [sp+420h] [bp-58h]@5
  signed int (*v272)(); // [sp+424h] [bp-54h]@5
  _DWORD *v273; // [sp+428h] [bp-50h]@5
  void (*v274)(void); // [sp+430h] [bp-48h]@5
  int (__fastcall *v275)(int); // [sp+434h] [bp-44h]@5
  int v276; // [sp+438h] [bp-40h]@5
  void *v277; // [sp+43Ch] [bp-3Ch]@1
  void (*v278)(void); // [sp+444h] [bp-34h]@1
  signed int (*v279)(); // [sp+448h] [bp-30h]@1
  _DWORD *v280; // [sp+44Ch] [bp-2Ch]@1
  void (*v281)(void); // [sp+454h] [bp-24h]@1
  int (__fastcall *v282)(int); // [sp+458h] [bp-20h]@1
  int v283; // [sp+45Ch] [bp-1Ch]@1

  v1 = this;
  StringHash::StringHash<char [25]>(&v283, (int)"#server_settings_visible");
  v2 = operator new(4u);
  *v2 = v1;
  v280 = v2;
  v282 = sub_12389A4;
  v281 = (void (*)(void))sub_12389B2;
  v277 = operator new(1u);
  v279 = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v278 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  ScreenController::bindBool((int)v1, &v283, (int)&v280, (int)&v277);
  if ( v278 )
    v278();
  if ( v281 )
    v281();
  v276 = 1705668314;
  v3 = operator new(4u);
  *v3 = v1;
  v273 = v3;
  v275 = sub_12389E8;
  v274 = (void (*)(void))sub_1238A08;
  v270 = operator new(1u);
  v272 = ZNSt17_Function_handlerIFbvEZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v271 = (void (*)(void))ZNSt14_Function_base13_Base_managerIZN16ScreenController7bindIntERK10StringHashRKSt8functionIFivEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  ScreenController::bindInt((int)v1, &v276, (int)&v273, (int)&v270);
  if ( v271 )
    v271();
  if ( v274 )
    v274();
  v268 = -1360249379;
  v269 = -1907933283;
  v4 = operator new(4u);
  *v4 = v1;
  v265 = v4;
  v267 = sub_1238A40;
  v266 = (void (*)(void))sub_1238B38;
  v263 = operator new(1u);
  LODWORD(v5) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v5) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v264 = v5;
  ScreenController::bindStringForCollection((int)v1, &v269, &v268, (int)&v265, (int)&v263);
  if ( (_DWORD)v264 )
    ((void (*)(void))v264)();
  if ( v266 )
    v266();
  v262 = -1907933283;
  v261 = 1261575361;
  v6 = operator new(4u);
  LODWORD(v7) = sub_1238C68;
  *v6 = v1;
  HIDWORD(v7) = sub_1238B70;
  v259 = v6;
  v260 = v7;
  v257 = operator new(1u);
  LODWORD(v8) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v8) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v258 = v8;
  ScreenController::bindStringForCollection((int)v1, &v262, &v261, (int)&v259, (int)&v257);
  if ( (_DWORD)v258 )
    ((void (*)(void))v258)();
  if ( (_DWORD)v260 )
    ((void (*)(void))v260)();
  v256 = -1907933283;
  StringHash::StringHash<char [33]>(&v255, (int)"#form_button_texture_file_system");
  v9 = operator new(4u);
  LODWORD(v10) = sub_1238D98;
  *v9 = v1;
  HIDWORD(v10) = sub_1238CA0;
  v253 = v9;
  v254 = v10;
  v251 = operator new(1u);
  LODWORD(v11) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v11) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v252 = v11;
  ScreenController::bindStringForCollection((int)v1, &v256, &v255, (int)&v253, (int)&v251);
  if ( (_DWORD)v252 )
    ((void (*)(void))v252)();
  if ( (_DWORD)v254 )
    ((void (*)(void))v254)();
  v250 = -900593982;
  v12 = operator new(4u);
  LODWORD(v13) = sub_1238EB4;
  *v12 = v1;
  HIDWORD(v13) = sub_1238DD0;
  v248 = v12;
  v249 = v13;
  v246 = operator new(1u);
  LODWORD(v14) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v14) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v247 = v14;
  ScreenController::bindString((int)v1, &v250, (int)&v248, (int)&v246);
  if ( (_DWORD)v247 )
    ((void (*)(void))v247)();
  if ( (_DWORD)v249 )
    ((void (*)(void))v249)();
  v245 = -491744821;
  v15 = operator new(4u);
  LODWORD(v16) = sub_1238FD0;
  *v15 = v1;
  HIDWORD(v16) = sub_1238EEC;
  v243 = v15;
  v244 = v16;
  v241 = operator new(1u);
  LODWORD(v17) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v17) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v242 = v17;
  ScreenController::bindString((int)v1, &v245, (int)&v243, (int)&v241);
  if ( (_DWORD)v242 )
    ((void (*)(void))v242)();
  if ( (_DWORD)v244 )
    ((void (*)(void))v244)();
  StringHash::StringHash<char [25]>(&v240, (int)"#server_icon_file_system");
  v18 = operator new(4u);
  LODWORD(v19) = sub_12390EC;
  *v18 = v1;
  HIDWORD(v19) = sub_1239008;
  v238 = v18;
  v239 = v19;
  v236 = operator new(1u);
  LODWORD(v20) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v20) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v237 = v20;
  ScreenController::bindString((int)v1, &v240, (int)&v238, (int)&v236);
  if ( (_DWORD)v237 )
    ((void (*)(void))v237)();
  if ( (_DWORD)v239 )
    ((void (*)(void))v239)();
  v235 = -1898813816;
  v21 = operator new(4u);
  LODWORD(v22) = sub_1239208;
  *v21 = v1;
  HIDWORD(v22) = sub_1239124;
  v233 = v21;
  v234 = v22;
  v231 = operator new(1u);
  LODWORD(v23) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v23) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v232 = v23;
  ScreenController::bindString((int)v1, &v235, (int)&v233, (int)&v231);
  if ( (_DWORD)v232 )
    ((void (*)(void))v232)();
  if ( (_DWORD)v234 )
    ((void (*)(void))v234)();
  v230 = 754260601;
  v24 = operator new(4u);
  LODWORD(v25) = sub_1239530;
  *v24 = v1;
  HIDWORD(v25) = sub_1239240;
  v228 = v24;
  v229 = v25;
  ScreenController::bindForGlobal((int)v1, &v230, (int)&v228);
  if ( (_DWORD)v229 )
    ((void (*)(void))v229)();
  StringHash::StringHash<char [23]>(&v227, (int)"#submit_button_visible");
  v26 = operator new(4u);
  LODWORD(v27) = sub_1239578;
  *v26 = v1;
  HIDWORD(v27) = sub_1239566;
  v225 = v26;
  v226 = v27;
  v223 = operator new(1u);
  LODWORD(v28) = ZNSt14_Function_base13_Base_managerIZN16ScreenController8bindBoolERK10StringHashRKSt8functionIFbvEES9_Ed_UlvE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v28) = ZNSt17_Function_handlerIFbvEZN16ScreenController8bindBoolERK10StringHashRKSt8functionIS0_ES8_Ed_UlvE_E9_M_invokeERKSt9_Any_data;
  v224 = v28;
  ScreenController::bindBool((int)v1, &v227, (int)&v225, (int)&v223);
  if ( (_DWORD)v224 )
    ((void (*)(void))v224)();
  if ( (_DWORD)v226 )
    ((void (*)(void))v226)();
  v221 = -2006495815;
  v222 = -1003747471;
  v29 = operator new(4u);
  LODWORD(v30) = sub_12396A8;
  *v29 = v1;
  HIDWORD(v30) = sub_12395B0;
  v219 = v29;
  v220 = v30;
  v217 = operator new(1u);
  LODWORD(v31) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v31) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v218 = v31;
  ScreenController::bindStringForCollection((int)v1, &v222, &v221, (int)&v219, (int)&v217);
  if ( (_DWORD)v218 )
    ((void (*)(void))v218)();
  if ( (_DWORD)v220 )
    ((void (*)(void))v220)();
  v216 = -1003747471;
  v215 = -282148384;
  v32 = operator new(4u);
  LODWORD(v33) = sub_1239718;
  *v32 = v1;
  HIDWORD(v33) = sub_12396E0;
  v213 = v32;
  v214 = v33;
  v211 = operator new(1u);
  LODWORD(v34) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v34) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v212 = v34;
  ScreenController::bindBoolForCollection((int)v1, &v216, &v215, (int)&v213, (int)&v211);
  if ( (_DWORD)v212 )
    ((void (*)(void))v212)();
  if ( (_DWORD)v214 )
    ((void (*)(void))v214)();
  sub_21E94B4((void **)&v210, "custom_toggle");
  v35 = MinecraftScreenController::_getNameId(v1, (int **)&v210);
  v36 = operator new(4u);
  LODWORD(v37) = sub_12397AC;
  *v36 = v1;
  HIDWORD(v37) = sub_1239750;
  v208 = v36;
  v209 = v37;
  ScreenController::registerToggleChangeEventHandler((int)v1, v35, (int)&v208);
  if ( (_DWORD)v209 )
    ((void (*)(void))v209)();
  v38 = (void *)(v210 - 12);
  if ( (int *)(v210 - 12) != &dword_28898C0 )
  {
    v103 = (unsigned int *)(v210 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v104 = __ldrex(v103);
      while ( __strex(v104 - 1, v103) );
    }
    else
      v104 = (*v103)--;
    if ( v104 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  }
  v207 = -1003747471;
  v206 = -1026492383;
  v39 = operator new(4u);
  LODWORD(v40) = sub_1239868;
  *v39 = v1;
  HIDWORD(v40) = sub_12397E4;
  v204 = v39;
  v205 = v40;
  v202 = operator new(1u);
  LODWORD(v41) = ZNSt14_Function_base13_Base_managerIZN16ScreenController22bindFloatForCollectionERK10StringHashS4_RKSt8functionIFfiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v41) = ZNSt17_Function_handlerIFbiEZN16ScreenController22bindFloatForCollectionERK10StringHashS4_RKSt8functionIFfiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v203 = v41;
  ScreenController::bindFloatForCollection((int)v1, &v207, &v206, (int)&v204);
  if ( (_DWORD)v203 )
    ((void (__cdecl *)(void **))v203)(&v202);
  if ( (_DWORD)v205 )
    ((void (__cdecl *)(_DWORD **))v205)(&v204);
  sub_21E94B4((void **)&v201, "custom_slider");
  v42 = MinecraftScreenController::_getNameId(v1, (int **)&v201);
  v43 = operator new(8u);
  LODWORD(v44) = sub_1239B88;
  *v43 = v1;
  v43[1] = v1;
  HIDWORD(v44) = sub_12398A0;
  v199 = v43;
  v200 = v44;
  ScreenController::registerSliderChangedEventHandler((int)v1, v42, (int)&v199);
  if ( (_DWORD)v200 )
    ((void (__cdecl *)(_DWORD **))v200)(&v199);
  v45 = (void *)(v201 - 12);
  if ( (int *)(v201 - 12) != &dword_28898C0 )
    v105 = (unsigned int *)(v201 - 4);
        v106 = __ldrex(v105);
      while ( __strex(v106 - 1, v105) );
      v106 = (*v105)--;
    if ( v106 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  v198 = -1003747471;
  v197 = -1874912057;
  v46 = operator new(4u);
  LODWORD(v47) = sub_123A268;
  *v46 = v1;
  HIDWORD(v47) = sub_1239BDC;
  v195 = v46;
  v196 = v47;
  v193 = operator new(1u);
  LODWORD(v48) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v48) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v194 = v48;
  ScreenController::bindStringForCollection((int)v1, &v198, &v197, (int)&v195, (int)&v193);
  if ( (_DWORD)v194 )
    ((void (*)(void))v194)();
  if ( (_DWORD)v196 )
    ((void (*)(void))v196)();
  v192 = -1003747471;
  StringHash::StringHash<char [26]>(&v191, (int)"#custom_slider_step_value");
  v49 = operator new(4u);
  LODWORD(v50) = sub_123A2D8;
  *v49 = v1;
  HIDWORD(v50) = sub_123A2A0;
  v189 = v49;
  v190 = v50;
  v187 = operator new(1u);
  LODWORD(v51) = ZNSt14_Function_base13_Base_managerIZN16ScreenController20bindIntForCollectionERK10StringHashS4_RKSt8functionIFiiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v51) = ZNSt17_Function_handlerIFbiEZN16ScreenController20bindIntForCollectionERK10StringHashS4_RKSt8functionIFiiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v188 = v51;
  ScreenController::bindIntForCollection((int)v1, &v192, &v191, (int)&v189, (int)&v187);
  if ( (_DWORD)v188 )
    ((void (*)(void))v188)();
  if ( (_DWORD)v190 )
    ((void (*)(void))v190)();
  v186 = -1003747471;
  v185 = -663229901;
  v52 = operator new(4u);
  LODWORD(v53) = sub_123A344;
  *v52 = v1;
  HIDWORD(v53) = sub_123A310;
  v183 = v52;
  v184 = v53;
  v181 = operator new(1u);
  LODWORD(v54) = ZNSt14_Function_base13_Base_managerIZN16ScreenController20bindIntForCollectionERK10StringHashS4_RKSt8functionIFiiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v54) = ZNSt17_Function_handlerIFbiEZN16ScreenController20bindIntForCollectionERK10StringHashS4_RKSt8functionIFiiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v182 = v54;
  ScreenController::bindIntForCollection((int)v1, &v186, &v185, (int)&v183, (int)&v181);
  if ( (_DWORD)v182 )
    ((void (*)(void))v182)();
  if ( (_DWORD)v184 )
    ((void (*)(void))v184)();
  sub_21E94B4((void **)&v180, "custom_slider_step");
  v55 = MinecraftScreenController::_getNameId(v1, (int **)&v180);
  v56 = operator new(4u);
  LODWORD(v57) = sub_123A3E4;
  *v56 = v1;
  HIDWORD(v57) = sub_123A37C;
  v178 = v56;
  v179 = v57;
  ScreenController::registerSliderChangedEventHandler((int)v1, v55, (int)&v178);
  if ( (_DWORD)v179 )
    ((void (*)(void))v179)();
  v58 = (void *)(v180 - 12);
  if ( (int *)(v180 - 12) != &dword_28898C0 )
    v107 = (unsigned int *)(v180 - 4);
        v108 = __ldrex(v107);
      while ( __strex(v108 - 1, v107) );
      v108 = (*v107)--;
    if ( v108 <= 0 )
      j_j_j_j__ZdlPv_9(v58);
  v177 = -1003747471;
  StringHash::StringHash<char [25]>(&v176, (int)"#custom_slider_step_text");
  v59 = operator new(4u);
  LODWORD(v60) = sub_123AB14;
  *v59 = v1;
  HIDWORD(v60) = sub_123A41C;
  v174 = v59;
  v175 = v60;
  v172 = operator new(1u);
  LODWORD(v61) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v61) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v173 = v61;
  ScreenController::bindStringForCollection((int)v1, &v177, &v176, (int)&v174, (int)&v172);
  if ( (_DWORD)v173 )
    ((void (*)(void))v173)();
  if ( (_DWORD)v175 )
    ((void (*)(void))v175)();
  sub_21E94B4((void **)&v171, "button.dropdown_exit");
  v62 = MinecraftScreenController::_getNameId(v1, (int **)&v171);
  v63 = operator new(4u);
  LODWORD(v64) = sub_123AC24;
  *v63 = v1;
  HIDWORD(v64) = sub_123AB4C;
  v169 = v63;
  v170 = v64;
  ScreenController::registerButtonClickHandler((int)v1, v62, (int)&v169);
  if ( (_DWORD)v170 )
    ((void (*)(void))v170)();
  v65 = (void *)(v171 - 12);
  if ( (int *)(v171 - 12) != &dword_28898C0 )
    v109 = (unsigned int *)(v171 - 4);
        v110 = __ldrex(v109);
      while ( __strex(v110 - 1, v109) );
      v110 = (*v109)--;
    if ( v110 <= 0 )
      j_j_j_j__ZdlPv_9(v65);
  sub_21E94B4((void **)&v168, "custom_dropdown");
  v66 = MinecraftScreenController::_getNameId(v1, (int **)&v168);
  v67 = operator new(4u);
  LODWORD(v68) = sub_123ACB8;
  *v67 = v1;
  HIDWORD(v68) = sub_123AC5C;
  v166 = v67;
  v167 = v68;
  ScreenController::registerToggleChangeEventHandler((int)v1, v66, (int)&v166);
  if ( (_DWORD)v167 )
    ((void (*)(void))v167)();
  v69 = (void *)(v168 - 12);
  if ( (int *)(v168 - 12) != &dword_28898C0 )
    v111 = (unsigned int *)(v168 - 4);
        v112 = __ldrex(v111);
      while ( __strex(v112 - 1, v111) );
      v112 = (*v111)--;
    if ( v112 <= 0 )
      j_j_j_j__ZdlPv_9(v69);
  v165 = -1003747471;
  v164 = 609678995;
  v70 = operator new(4u);
  LODWORD(v71) = sub_123AD28;
  *v70 = v1;
  HIDWORD(v71) = sub_123ACF0;
  v162 = v70;
  v163 = v71;
  v160 = operator new(1u);
  LODWORD(v72) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v72) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v161 = v72;
  ScreenController::bindBoolForCollection((int)v1, &v165, &v164, (int)&v162, (int)&v160);
  if ( (_DWORD)v161 )
    ((void (*)(void))v161)();
  if ( (_DWORD)v163 )
    ((void (*)(void))v163)();
  v159 = -1003747471;
  StringHash::StringHash<char [24]>(&v158, (int)"#custom_dropdown_length");
  v73 = operator new(4u);
  LODWORD(v74) = sub_123ADA0;
  *v73 = v1;
  HIDWORD(v74) = sub_123AD60;
  v156 = v73;
  v157 = v74;
  v154 = operator new(1u);
  LODWORD(v75) = ZNSt14_Function_base13_Base_managerIZN16ScreenController20bindIntForCollectionERK10StringHashS4_RKSt8functionIFiiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v75) = ZNSt17_Function_handlerIFbiEZN16ScreenController20bindIntForCollectionERK10StringHashS4_RKSt8functionIFiiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v155 = v75;
  ScreenController::bindIntForCollection((int)v1, &v159, &v158, (int)&v156, (int)&v154);
  if ( (_DWORD)v155 )
    ((void (*)(void))v155)();
  if ( (_DWORD)v157 )
    ((void (*)(void))v157)();
  v153 = -1003747471;
  v152 = 170920229;
  v76 = operator new(4u);
  LODWORD(v77) = sub_123AF50;
  *v76 = v1;
  HIDWORD(v77) = sub_123ADD8;
  v150 = v76;
  v151 = v77;
  v148 = operator new(1u);
  LODWORD(v78) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v78) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v149 = v78;
  ScreenController::bindStringForCollection((int)v1, &v153, &v152, (int)&v150, (int)&v148);
  if ( (_DWORD)v149 )
    ((void (*)(void))v149)();
  if ( (_DWORD)v151 )
    ((void (*)(void))v151)();
  v146 = -2041684574;
  v147 = -1117714286;
  v79 = operator new(8u);
  v80 = 0;
  LODWORD(v81) = sub_123B0B8;
  *v79 = *(_QWORD *)(&v1 - 1);
  HIDWORD(v81) = sub_123AF88;
  v144 = v79;
  v145 = v81;
  ScreenController::bindForCollection((int)v1, &v147, &v146, (int)&v144);
  if ( (_DWORD)v145 )
    ((void (*)(void))v145)();
  v143 = -1117714286;
  v142 = 1018233361;
  v82 = operator new(8u);
  v83 = 0;
  LODWORD(v84) = sub_123B3E0;
  *v82 = *(_QWORD *)(&v1 - 1);
  HIDWORD(v84) = sub_123B170;
  v140 = v82;
  v141 = v84;
  ScreenController::bindForCollection((int)v1, &v143, &v142, (int)&v140);
  if ( (_DWORD)v141 )
    ((void (*)(void))v141)();
  sub_21E94B4((void **)&v139, "custom_dropdown_radio_toggle");
  v85 = MinecraftScreenController::_getNameId(v1, (int **)&v139);
  v86 = operator new(8u);
  LODWORD(v87) = sub_123B614;
  *v86 = 0;
  v86[1] = v1;
  HIDWORD(v87) = sub_123B41C;
  v137 = v86;
  v138 = v87;
  ScreenController::registerToggleChangeEventHandler((int)v1, v85, (int)&v137);
  if ( (_DWORD)v138 )
    ((void (*)(void))v138)();
  v88 = (void *)(v139 - 12);
  if ( (int *)(v139 - 12) != &dword_28898C0 )
    v113 = (unsigned int *)(v139 - 4);
        v114 = __ldrex(v113);
      while ( __strex(v114 - 1, v113) );
      v114 = (*v113)--;
    if ( v114 <= 0 )
      j_j_j_j__ZdlPv_9(v88);
  v136 = -1003747471;
  StringHash::StringHash<char [25]>(&v135, (int)"#custom_placeholder_text");
  v89 = operator new(4u);
  LODWORD(v90) = sub_123B748;
  *v89 = v1;
  HIDWORD(v90) = sub_123B650;
  v133 = v89;
  v134 = v90;
  v131 = operator new(1u);
  LODWORD(v91) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v91) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v132 = v91;
  ScreenController::bindStringForCollection((int)v1, &v136, &v135, (int)&v133, (int)&v131);
  if ( (_DWORD)v132 )
    ((void (*)(void))v132)();
  if ( (_DWORD)v134 )
    ((void (*)(void))v134)();
  v130 = -1003747471;
  v129 = 1887210524;
  v92 = operator new(4u);
  LODWORD(v93) = sub_123B878;
  *v92 = v1;
  HIDWORD(v93) = sub_123B780;
  v127 = v92;
  v128 = v93;
  v125 = operator new(1u);
  LODWORD(v94) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v94) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v126 = v94;
  ScreenController::bindStringForCollection((int)v1, &v130, &v129, (int)&v127, (int)&v125);
  if ( (_DWORD)v126 )
    ((void (*)(void))v126)();
  if ( (_DWORD)v128 )
    ((void (*)(void))v128)();
  sub_21E94B4((void **)&v124, "custom_input");
  v95 = MinecraftScreenController::_getNameId(v1, (int **)&v124);
  v96 = operator new(4u);
  LODWORD(v97) = sub_123BA98;
  *v96 = v1;
  HIDWORD(v97) = sub_123B8B0;
  v122 = v96;
  v123 = v97;
  ScreenController::registerTextEditChangedEventHandler((int)v1, v95, (int)&v122);
  if ( (_DWORD)v123 )
    ((void (*)(void))v123)();
  v98 = (void *)(v124 - 12);
  if ( (int *)(v124 - 12) != &dword_28898C0 )
    v115 = (unsigned int *)(v124 - 4);
        v116 = __ldrex(v115);
      while ( __strex(v116 - 1, v115) );
      v116 = (*v115)--;
    if ( v116 <= 0 )
      j_j_j_j__ZdlPv_9(v98);
  sub_21E94B4((void **)&v121, "button.submit_custom_form");
  v99 = MinecraftScreenController::_getNameId(v1, (int **)&v121);
  v100 = operator new(4u);
  LODWORD(v101) = sub_123BAE6;
  *v100 = v1;
  HIDWORD(v101) = sub_123BACE;
  v119 = v100;
  v120 = v101;
  ScreenController::registerButtonClickHandler((int)v1, v99, (int)&v119);
  if ( (_DWORD)v120 )
    ((void (*)(void))v120)();
  v102 = (void *)(v121 - 12);
  if ( (int *)(v121 - 12) != &dword_28898C0 )
    v117 = (unsigned int *)(v121 - 4);
        v118 = __ldrex(v117);
      while ( __strex(v118 - 1, v117) );
      v118 = (*v117)--;
    if ( v118 <= 0 )
      j_j_j_j__ZdlPv_9(v102);
}


void __fastcall ServerFormScreenController::_registerEventHandlers(ServerFormScreenController *this)
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
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  unsigned int *v12; // r2@12
  signed int v13; // r1@14
  _DWORD *v14; // [sp+4h] [bp-44h]@4
  __int64 v15; // [sp+Ch] [bp-3Ch]@4
  int v16; // [sp+18h] [bp-30h]@4
  _DWORD *v17; // [sp+1Ch] [bp-2Ch]@1
  __int64 v18; // [sp+24h] [bp-24h]@1
  int v19; // [sp+30h] [bp-18h]@1

  v1 = this;
  sub_21E94B4((void **)&v19, "button.form_button_click");
  v2 = MinecraftScreenController::_getNameId(v1, (int **)&v19);
  v3 = operator new(4u);
  LODWORD(v4) = sub_12388E4;
  *v3 = v1;
  HIDWORD(v4) = sub_1238858;
  v17 = v3;
  v18 = v4;
  ScreenController::registerButtonClickHandler((int)v1, v2, (int)&v17);
  if ( (_DWORD)v18 )
    ((void (*)(void))v18)();
  v5 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v19 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v16, "button.menu_exit");
  v6 = MinecraftScreenController::_getNameId(v1, (int **)&v16);
  v7 = operator new(4u);
  LODWORD(v8) = sub_123896E;
  *v7 = v1;
  HIDWORD(v8) = sub_123891A;
  v14 = v7;
  v15 = v8;
  ScreenController::registerButtonClickHandler((int)v1, v6, (int)&v14);
  if ( (_DWORD)v15 )
    ((void (*)(void))v15)();
  v9 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v16 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}


Json::Reader *__fastcall ServerFormScreenController::_validateFormData(int a1, int *a2)
{
  int v2; // r8@1
  int *v3; // r4@1
  __int64 v4; // r0@1
  void *v5; // r0@4
  int *v6; // r4@5
  int *i; // r5@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  void *v10; // r0@15
  void *v11; // r0@17
  _DWORD *v12; // r0@18
  __int64 v13; // r1@18 OVERLAPPED
  void *v14; // r0@20
  int *v15; // r4@22
  int *v16; // r6@22
  unsigned int *v17; // r2@24
  signed int v18; // r1@26
  int *v19; // r0@32
  unsigned int *v21; // r2@38
  signed int v22; // r1@40
  unsigned int *v23; // r2@42
  signed int v24; // r1@44
  unsigned int *v25; // r2@46
  signed int v26; // r1@48
  _DWORD *v27; // [sp+0h] [bp-110h]@18
  __int64 v28; // [sp+8h] [bp-108h]@18
  int v29; // [sp+10h] [bp-100h]@17
  int v30; // [sp+14h] [bp-FCh]@7
  int v31; // [sp+18h] [bp-F8h]@4
  int v32; // [sp+20h] [bp-F0h]@4
  void *v33; // [sp+24h] [bp-ECh]@4
  int v34; // [sp+28h] [bp-E8h]@4
  int v35; // [sp+2Ch] [bp-E4h]@4
  int v36; // [sp+30h] [bp-E0h]@4
  void *v37; // [sp+34h] [bp-DCh]@4
  int v38; // [sp+38h] [bp-D8h]@4
  int v39; // [sp+3Ch] [bp-D4h]@4
  int v40; // [sp+40h] [bp-D0h]@4
  void *v41; // [sp+44h] [bp-CCh]@4
  void *v42; // [sp+48h] [bp-C8h]@4
  void *v43; // [sp+4Ch] [bp-C4h]@4
  void *v44; // [sp+50h] [bp-C0h]@4
  int v45; // [sp+54h] [bp-BCh]@4
  char v46; // [sp+58h] [bp-B8h]@4
  int *v47; // [sp+5Ch] [bp-B4h]@1
  int *v48; // [sp+60h] [bp-B0h]@1
  int v49; // [sp+64h] [bp-ACh]@1
  char v50; // [sp+68h] [bp-A8h]@1
  char v51; // [sp+78h] [bp-98h]@1

  v2 = a1;
  v3 = a2;
  Json::Reader::Reader((Json::Reader *)&v51);
  Json::Value::Value(&v50, 0);
  v47 = 0;
  v48 = 0;
  v49 = 0;
  if ( Json::Reader::parse((int)&v51, v3, (int)&v50, 0) != 1
    || (LODWORD(v4) = &v50, ServerFormScreenController::isValidData(v4) != 1) )
  {
    v33 = &unk_28898CC;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v37 = &unk_28898CC;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v41 = &unk_28898CC;
    v42 = &unk_28898CC;
    v43 = &unk_28898CC;
    v44 = &unk_28898CC;
    v45 = 1;
    v46 = 0;
    sub_21E94B4((void **)&v32, "\n");
    Json::Reader::getFormatedErrorMessages((Json::Reader *)&v31, (int)&v51);
    sub_21E72F0((const void **)&v32, (const void **)&v31);
    v5 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
    {
      v21 = (unsigned int *)(v31 - 4);
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
        j_j_j_j__ZdlPv_9(v5);
    }
    v6 = v48;
    for ( i = v47; i != v6; ++i )
      sub_21E8AF4(&v30, i);
      sub_21E7408((const void **)&v30, "\n", 1u);
      sub_21E72F0((const void **)&v32, (const void **)&v30);
      v10 = (void *)(v30 - 12);
      if ( (int *)(v30 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v30 - 4);
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
          j_j_j_j__ZdlPv_9(v10);
    sub_21E8190(&v33, "serverUI.errorTitle", (_BYTE *)0x13);
    sub_21E8190(&v37, "serverUI.errorDescription", (_BYTE *)0x19);
    sub_21E8AF4(&v29, &v32);
    std::vector<std::string,std::allocator<std::string>>::_M_assign_aux<std::string const*>(
      (int)&v38,
      (int)&v29,
      (int)&v30);
    v11 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v29 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    sub_21E8190(&v43, "gui.ok", (_BYTE *)6);
    v45 = 2;
    v12 = operator new(4u);
    LODWORD(v13) = sub_12380A6;
    *v12 = v2;
    HIDWORD(v13) = sub_123809C;
    v27 = v12;
    v28 = v13;
    HIDWORD(v13) = &v27;
    MinecraftScreenController::_displayCustomModalPopup(v2, (int)&v33, *(__int64 *)((char *)&v13 + 4));
    if ( (_DWORD)v28 )
      ((void (*)(void))v28)();
    *(_DWORD *)(v2 + 472) = 1;
    v14 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v32 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    ModalScreenData::~ModalScreenData((ModalScreenData *)&v33);
  }
  else
    Json::Value::operator=(v2 + 448, (const Json::Value *)&v50);
    *(_BYTE *)(v2 + 432) = 0;
    ServerFormScreenController::createScreen((ServerFormScreenController *)v2);
  v16 = v48;
  v15 = v47;
  if ( v47 != v48 )
    do
      v19 = (int *)(*v15 - 12);
      if ( v19 != &dword_28898C0 )
        v17 = (unsigned int *)(*v15 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      ++v15;
    while ( v15 != v16 );
    v15 = v47;
  if ( v15 )
    operator delete(v15);
  Json::Value::~Value((Json::Value *)&v50);
  return Json::Reader::~Reader((Json::Reader *)&v51);
}


void __fastcall ServerFormScreenController::_registerBindings(ServerFormScreenController *this)
{
  ServerFormScreenController::_registerBindings(this);
}


void __fastcall ServerFormScreenController::_registerEventHandlers(ServerFormScreenController *this)
{
  ServerFormScreenController::_registerEventHandlers(this);
}


int __fastcall ServerFormScreenController::tick(ServerFormScreenController *this)
{
  ServerFormScreenController *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@1

  v1 = this;
  v2 = MinecraftScreenController::tick(this);
  v3 = *((_DWORD *)v1 + 118);
  *((_DWORD *)v1 + 118) = 0;
  return v2 | v3;
}


ServerFormScreenController *__fastcall ServerFormScreenController::~ServerFormScreenController(ServerFormScreenController *this)
{
  ServerFormScreenController *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  int v7; // r1@15
  void *v8; // r0@15
  unsigned int *v10; // r2@17
  signed int v11; // r1@19

  v1 = this;
  *(_DWORD *)this = &off_26E3490;
  v2 = *((_DWORD *)this + 117);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  Json::Value::~Value((ServerFormScreenController *)((char *)v1 + 448));
  v7 = *((_DWORD *)v1 + 109);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v7 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  MainMenuScreenController::~MainMenuScreenController(v1);
  return v1;
}


signed int __fastcall ServerFormScreenController::onOpen(ServerFormScreenController *this)
{
  ServerFormScreenController *v1; // r4@1
  signed int result; // r0@1

  v1 = this;
  result = *((_BYTE *)this + 432);
  if ( !result )
  {
    ServerFormScreenController::_validateFormData((int)v1, (int *)v1 + 109);
    result = 1;
    *((_BYTE *)v1 + 432) = 1;
  }
  return result;
}


int __fastcall ServerFormScreenController::setFormData(ServerFormScreenController *this, const Json::Value *a2)
{
  ServerFormScreenController *v2; // r4@1
  int result; // r0@1

  v2 = this;
  Json::Value::operator=((int)this + 448, a2);
  result = 0;
  *((_BYTE *)v2 + 432) = 0;
  return result;
}


ModalScreenData *__fastcall ServerFormScreenController::createScreen(ServerFormScreenController *this)
{
  ServerFormScreenController *v1; // r4@1
  ModalScreenData *result; // r0@1
  void *v3; // r6@3
  signed int v4; // r6@3
  void *v5; // r6@4
  void *v6; // r0@4
  void *v7; // r0@5
  void *v8; // r6@6
  void *v9; // r0@6
  void *v10; // r0@7
  void *v11; // r7@8
  void *v12; // r0@8
  void *v13; // r0@9
  void *v14; // r5@10
  void *v15; // r0@10
  void *v16; // r0@11
  _DWORD *v17; // r0@12
  __int64 v18; // r1@12 OVERLAPPED
  void *v19; // r6@15
  signed int v20; // r6@15
  int v21; // r0@16
  void *v22; // r6@16
  void *v23; // r0@16
  void *v24; // r0@17
  void *v25; // r5@18
  void *v26; // r0@18
  void *v27; // r0@19
  void *v28; // r0@21
  void *v29; // r6@23
  signed int v30; // r6@23
  int v31; // r0@24
  void *v32; // r5@24
  void *v33; // r0@24
  void *v34; // r0@25
  void *v35; // r0@27
  unsigned int *v36; // r2@33
  signed int v37; // r1@35
  unsigned int *v38; // r2@37
  signed int v39; // r1@39
  unsigned int *v40; // r2@41
  signed int v41; // r1@43
  unsigned int *v42; // r2@45
  signed int v43; // r1@47
  unsigned int *v44; // r2@49
  signed int v45; // r1@51
  unsigned int *v46; // r2@53
  signed int v47; // r1@55
  unsigned int *v48; // r2@57
  signed int v49; // r1@59
  unsigned int *v50; // r2@61
  signed int v51; // r1@63
  unsigned int *v52; // r2@73
  signed int v53; // r1@75
  unsigned int *v54; // r2@77
  signed int v55; // r1@79
  unsigned int *v56; // r2@89
  signed int v57; // r1@91
  unsigned int *v58; // r2@93
  signed int v59; // r1@95
  unsigned int *v60; // r2@105
  signed int v61; // r1@107
  unsigned int *v62; // r2@125
  signed int v63; // r1@127
  unsigned int *v64; // r2@129
  signed int v65; // r1@131
  unsigned int *v66; // r2@133
  signed int v67; // r1@135
  int v68; // [sp+4h] [bp-154h]@26
  int v69; // [sp+Ch] [bp-14Ch]@24
  int v70; // [sp+10h] [bp-148h]@24
  char v71; // [sp+17h] [bp-141h]@24
  char v72; // [sp+18h] [bp-140h]@24
  const char *v73[5]; // [sp+40h] [bp-118h]@23
  int v74; // [sp+58h] [bp-100h]@20
  int v75; // [sp+60h] [bp-F8h]@18
  int v76; // [sp+64h] [bp-F4h]@18
  int v77; // [sp+6Ch] [bp-ECh]@16
  int v78; // [sp+70h] [bp-E8h]@16
  char v79; // [sp+77h] [bp-E1h]@16
  char v80; // [sp+78h] [bp-E0h]@16
  const char *v81[4]; // [sp+A0h] [bp-B8h]@15
  _DWORD *v82; // [sp+B0h] [bp-A8h]@12
  __int64 v83; // [sp+B8h] [bp-A0h]@12
  int v84; // [sp+C4h] [bp-94h]@10
  int v85; // [sp+C8h] [bp-90h]@10
  int v86; // [sp+D0h] [bp-88h]@8
  int v87; // [sp+D4h] [bp-84h]@8
  int v88; // [sp+DCh] [bp-7Ch]@6
  int v89; // [sp+E0h] [bp-78h]@6
  int v90; // [sp+E8h] [bp-70h]@4
  int v91; // [sp+ECh] [bp-6Ch]@4
  void *v92; // [sp+F0h] [bp-68h]@4
  int v93; // [sp+F4h] [bp-64h]@4
  int v94; // [sp+F8h] [bp-60h]@4
  int v95; // [sp+FCh] [bp-5Ch]@4
  void *v96; // [sp+100h] [bp-58h]@4
  int v97; // [sp+104h] [bp-54h]@4
  int v98; // [sp+108h] [bp-50h]@4
  int v99; // [sp+10Ch] [bp-4Ch]@4
  void *v100; // [sp+110h] [bp-48h]@4
  void *v101; // [sp+114h] [bp-44h]@4
  void *v102; // [sp+118h] [bp-40h]@4
  void *v103; // [sp+11Ch] [bp-3Ch]@4
  int v104; // [sp+120h] [bp-38h]@4
  char v105; // [sp+124h] [bp-34h]@4
  const char *v106[5]; // [sp+128h] [bp-30h]@3

  v1 = this;
  result = (ModalScreenData *)*((_BYTE *)this + 432);
  if ( !result )
  {
    *((_BYTE *)v1 + 432) = 1;
    ServerFormBindingInformation::createBindingData(
      *((ServerFormBindingInformation **)v1 + 116),
      (ServerFormScreenController *)((char *)v1 + 448));
    result = (ModalScreenData *)Json::Value::isObject((ServerFormScreenController *)((char *)v1 + 448));
    if ( result == (ModalScreenData *)1 )
    {
      v3 = Json::Value::operator[]((int)v1 + 448, "type");
      Json::Value::Value((Json::Value *)v106, "modal");
      v4 = Json::Value::operator==((int)v3, v106);
      Json::Value::~Value((Json::Value *)v106);
      if ( v4 == 1 )
      {
        v92 = &unk_28898CC;
        v93 = 0;
        v94 = 0;
        v95 = 0;
        v96 = &unk_28898CC;
        v97 = 0;
        v98 = 0;
        v99 = 0;
        v100 = &unk_28898CC;
        v101 = &unk_28898CC;
        v102 = &unk_28898CC;
        v103 = &unk_28898CC;
        v104 = 1;
        v105 = 0;
        v5 = Json::Value::operator[]((int)v1 + 448, "content");
        sub_21E94B4((void **)&v90, (const char *)&unk_257BC67);
        Json::Value::asString(&v91, (int)v5, &v90);
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
          (int *)&v96,
          &v91);
        v6 = (void *)(v91 - 12);
        if ( (int *)(v91 - 12) != &dword_28898C0 )
        {
          v36 = (unsigned int *)(v91 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v37 = __ldrex(v36);
            while ( __strex(v37 - 1, v36) );
          }
          else
            v37 = (*v36)--;
          if ( v37 <= 0 )
            j_j_j_j__ZdlPv_9(v6);
        }
        v7 = (void *)(v90 - 12);
        if ( (int *)(v90 - 12) != &dword_28898C0 )
          v38 = (unsigned int *)(v90 - 4);
              v39 = __ldrex(v38);
            while ( __strex(v39 - 1, v38) );
            v39 = (*v38)--;
          if ( v39 <= 0 )
            j_j_j_j__ZdlPv_9(v7);
        v8 = Json::Value::operator[]((int)v1 + 448, "title");
        sub_21E94B4((void **)&v88, (const char *)&unk_257BC67);
        Json::Value::asString(&v89, (int)v8, &v88);
          (int *)&v92,
          &v89);
        v9 = (void *)(v89 - 12);
        if ( (int *)(v89 - 12) != &dword_28898C0 )
          v40 = (unsigned int *)(v89 - 4);
              v41 = __ldrex(v40);
            while ( __strex(v41 - 1, v40) );
            v41 = (*v40)--;
          if ( v41 <= 0 )
            j_j_j_j__ZdlPv_9(v9);
        v10 = (void *)(v88 - 12);
        if ( (int *)(v88 - 12) != &dword_28898C0 )
          v42 = (unsigned int *)(v88 - 4);
              v43 = __ldrex(v42);
            while ( __strex(v43 - 1, v42) );
            v43 = (*v42)--;
          if ( v43 <= 0 )
            j_j_j_j__ZdlPv_9(v10);
        v11 = Json::Value::operator[]((int)v1 + 448, "button1");
        sub_21E94B4((void **)&v86, (const char *)&unk_257BC67);
        Json::Value::asString(&v87, (int)v11, &v86);
          (int *)&v101,
          &v87);
        v12 = (void *)(v87 - 12);
        if ( (int *)(v87 - 12) != &dword_28898C0 )
          v44 = (unsigned int *)(v87 - 4);
              v45 = __ldrex(v44);
            while ( __strex(v45 - 1, v44) );
            v45 = (*v44)--;
          if ( v45 <= 0 )
            j_j_j_j__ZdlPv_9(v12);
        v13 = (void *)(v86 - 12);
        if ( (int *)(v86 - 12) != &dword_28898C0 )
          v46 = (unsigned int *)(v86 - 4);
              v47 = __ldrex(v46);
            while ( __strex(v47 - 1, v46) );
            v47 = (*v46)--;
          if ( v47 <= 0 )
            j_j_j_j__ZdlPv_9(v13);
        v14 = Json::Value::operator[]((int)v1 + 448, "button2");
        sub_21E94B4((void **)&v84, (const char *)&unk_257BC67);
        Json::Value::asString(&v85, (int)v14, &v84);
          (int *)&v103,
          &v85);
        v15 = (void *)(v85 - 12);
        if ( (int *)(v85 - 12) != &dword_28898C0 )
          v48 = (unsigned int *)(v85 - 4);
              v49 = __ldrex(v48);
            while ( __strex(v49 - 1, v48) );
            v49 = (*v48)--;
          if ( v49 <= 0 )
            j_j_j_j__ZdlPv_9(v15);
        v16 = (void *)(v84 - 12);
        if ( (int *)(v84 - 12) != &dword_28898C0 )
          v50 = (unsigned int *)(v84 - 4);
              v51 = __ldrex(v50);
            while ( __strex(v51 - 1, v50) );
            v51 = (*v50)--;
          if ( v51 <= 0 )
            j_j_j_j__ZdlPv_9(v16);
        v17 = operator new(4u);
        LODWORD(v18) = sub_1238128;
        *v17 = v1;
        HIDWORD(v18) = sub_12380DC;
        v82 = v17;
        v83 = v18;
        HIDWORD(v18) = &v82;
        MinecraftScreenController::_displayCustomModalPopup((int)v1, (int)&v92, *(__int64 *)((char *)&v18 + 4));
        if ( (_DWORD)v83 )
          ((void (*)(void))v83)();
        result = ModalScreenData::~ModalScreenData((ModalScreenData *)&v92);
      }
      else
        v19 = Json::Value::operator[]((int)v1 + 448, "type");
        Json::Value::Value((Json::Value *)v81, "form");
        v20 = Json::Value::operator==((int)v19, v81);
        Json::Value::~Value((Json::Value *)v81);
        if ( v20 == 1 )
          v21 = UIPropertyBag::UIPropertyBag((int)&v80);
          UIPropertyBag::set<char [13]>(v21, 4, "name", "popup_dialog");
          v79 = 1;
          UIPropertyBag::set<bool>((int)&v80, 9, "exclusive", &v79);
          UIPropertyBag::set<char [10]>((int)&v80, 10, "control_id", "long_form");
          v22 = Json::Value::operator[]((int)v1 + 448, "title");
          sub_21E94B4((void **)&v77, (const char *)&unk_257BC67);
          Json::Value::asString(&v78, (int)v22, &v77);
          UIPropertyBag::set<std::string>((int)&v80, 11, "#title_text", (const void **)&v78);
          v23 = (void *)(v78 - 12);
          if ( (int *)(v78 - 12) != &dword_28898C0 )
            v52 = (unsigned int *)(v78 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v53 = __ldrex(v52);
              while ( __strex(v53 - 1, v52) );
            }
            else
              v53 = (*v52)--;
            if ( v53 <= 0 )
              j_j_j_j__ZdlPv_9(v23);
          v24 = (void *)(v77 - 12);
          if ( (int *)(v77 - 12) != &dword_28898C0 )
            v54 = (unsigned int *)(v77 - 4);
                v55 = __ldrex(v54);
              while ( __strex(v55 - 1, v54) );
              v55 = (*v54)--;
            if ( v55 <= 0 )
              j_j_j_j__ZdlPv_9(v24);
          v25 = Json::Value::operator[]((int)v1 + 448, "content");
          sub_21E94B4((void **)&v75, (const char *)&unk_257BC67);
          Json::Value::asString(&v76, (int)v25, &v75);
          UIPropertyBag::set<std::string>((int)&v80, 10, "#form_text", (const void **)&v76);
          v26 = (void *)(v76 - 12);
          if ( (int *)(v76 - 12) != &dword_28898C0 )
            v56 = (unsigned int *)(v76 - 4);
                v57 = __ldrex(v56);
              while ( __strex(v57 - 1, v56) );
              v57 = (*v56)--;
            if ( v57 <= 0 )
              j_j_j_j__ZdlPv_9(v26);
          v27 = (void *)(v75 - 12);
          if ( (int *)(v75 - 12) != &dword_28898C0 )
            v58 = (unsigned int *)(v75 - 4);
                v59 = __ldrex(v58);
              while ( __strex(v59 - 1, v58) );
              v59 = (*v58)--;
            if ( v59 <= 0 )
              j_j_j_j__ZdlPv_9(v27);
          sub_21E94B4((void **)&v74, "server_form_factory");
          if ( !*((_DWORD *)v1 + 3) )
            sub_21E5F48();
          (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v1 + 4))((char *)v1 + 4, &v74, &v80);
          v28 = (void *)(v74 - 12);
          if ( (int *)(v74 - 12) != &dword_28898C0 )
            v60 = (unsigned int *)(v74 - 4);
                v61 = __ldrex(v60);
              while ( __strex(v61 - 1, v60) );
              v61 = (*v60)--;
            if ( v61 <= 0 )
              j_j_j_j__ZdlPv_9(v28);
          result = UIPropertyBag::~UIPropertyBag((UIPropertyBag *)&v80);
        else
          v29 = Json::Value::operator[]((int)v1 + 448, "type");
          Json::Value::Value((Json::Value *)v73, "custom_form");
          v30 = Json::Value::operator==((int)v29, v73);
          Json::Value::~Value((Json::Value *)v73);
          if ( v30 == 1 )
            v31 = UIPropertyBag::UIPropertyBag((int)&v72);
            UIPropertyBag::set<char [13]>(v31, 4, "name", "popup_dialog");
            v71 = 1;
            UIPropertyBag::set<bool>((int)&v72, 9, "exclusive", &v71);
            UIPropertyBag::set<char [12]>((int)&v72, 10, "control_id", "custom_form");
            v32 = Json::Value::operator[]((int)v1 + 448, "title");
            sub_21E94B4((void **)&v69, (const char *)&unk_257BC67);
            Json::Value::asString(&v70, (int)v32, &v69);
            UIPropertyBag::set<std::string>((int)&v72, 11, "#title_text", (const void **)&v70);
            v33 = (void *)(v70 - 12);
            if ( (int *)(v70 - 12) != &dword_28898C0 )
              v62 = (unsigned int *)(v70 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v63 = __ldrex(v62);
                while ( __strex(v63 - 1, v62) );
              }
              else
                v63 = (*v62)--;
              if ( v63 <= 0 )
                j_j_j_j__ZdlPv_9(v33);
            v34 = (void *)(v69 - 12);
            if ( (int *)(v69 - 12) != &dword_28898C0 )
              v64 = (unsigned int *)(v69 - 4);
                  v65 = __ldrex(v64);
                while ( __strex(v65 - 1, v64) );
                v65 = (*v64)--;
              if ( v65 <= 0 )
                j_j_j_j__ZdlPv_9(v34);
            sub_21E94B4((void **)&v68, "server_form_factory");
            if ( !*((_DWORD *)v1 + 3) )
              sub_21E5F48();
            (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD))v1 + 4))((char *)v1 + 4, &v68, &v72);
            v35 = (void *)(v68 - 12);
            if ( (int *)(v68 - 12) != &dword_28898C0 )
              v66 = (unsigned int *)(v68 - 4);
                  v67 = __ldrex(v66);
                while ( __strex(v67 - 1, v66) );
                v67 = (*v66)--;
              if ( v67 <= 0 )
                j_j_j_j__ZdlPv_9(v35);
            result = UIPropertyBag::~UIPropertyBag((UIPropertyBag *)&v72);
            result = (ModalScreenData *)*((_BYTE *)v1 + 476);
            if ( !*((_BYTE *)v1 + 476) )
              result = (ModalScreenData *)(*(int (__fastcall **)(ServerFormScreenController *))(*(_DWORD *)v1 + 92))(v1);
    }
    *((_DWORD *)v1 + 118) = 1;
  }
  return result;
}


Json::Value *__fastcall ServerFormScreenController::_sendCustomFormData(ServerFormScreenController *this)
{
  ServerFormScreenController *v1; // r8@1
  int v2; // r4@1
  unsigned int v3; // r5@1
  Json::Value *v4; // r7@3
  int v5; // r4@3
  const Json::Value *v6; // r0@3
  int v8; // [sp+0h] [bp-48h]@1
  char v9; // [sp+8h] [bp-40h]@1
  char v10; // [sp+10h] [bp-38h]@1

  v1 = this;
  Json::Value::Value(&v10, 0);
  v2 = Json::Value::operator[]((Json::Value *)(*((_DWORD *)v1 + 116) + 8), "contentItems");
  Json::Value::begin((Json::Value *)&v9, v2);
  Json::Value::end((Json::Value *)&v8, v2);
  v3 = 0;
  while ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v9, (const Json::ValueIteratorBase *)&v8) != 1 )
  {
    v4 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v9);
    v5 = Json::Value::operator[]((int)&v10, v3);
    v6 = (const Json::Value *)Json::Value::operator[](v4, "value");
    Json::Value::operator=(v5, v6);
    ++v3;
    Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v9);
  }
  MinecraftScreenModel::completeServerForm(
    *((MinecraftScreenModel **)v1 + 95),
    *((_DWORD *)v1 + 110),
    (const Json::Value *)&v10);
  return Json::Value::~Value((Json::Value *)&v10);
}


void __fastcall ServerFormScreenController::~ServerFormScreenController(ServerFormScreenController *this)
{
  ServerFormScreenController::~ServerFormScreenController(this);
}


signed int __fastcall ServerFormScreenController::handleGameEventNotification(int a1, int a2)
{
  int v2; // r4@1
  int *v3; // r0@2
  void *v4; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  int v8; // [sp+4h] [bp-1Ch]@2

  v2 = a1;
  if ( a2 == 12 )
  {
    v3 = (int *)MinecraftScreenModel::getServerSettingsData(*(MinecraftScreenModel **)(a1 + 424));
    sub_21E8AF4(&v8, v3);
    *(_DWORD *)(v2 + 440) = MinecraftScreenModel::getServerSettingsId(*(MinecraftScreenModel **)(v2 + 424));
    ServerFormScreenController::_validateFormData(v2, &v8);
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
  }
  return 1;
}


void __fastcall ServerFormScreenController::~ServerFormScreenController(ServerFormScreenController *this)
{
  ServerFormScreenController *v1; // r0@1

  v1 = ServerFormScreenController::~ServerFormScreenController(this);
  j_j_j__ZdlPv_5((void *)v1);
}
