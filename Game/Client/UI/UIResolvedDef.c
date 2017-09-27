

signed int __fastcall UIResolvedDef::getAsDraggable(int a1, int **a2, signed int a3)
{
  signed int v3; // r7@1
  Json::Value *v4; // r5@1
  void *v5; // r0@2
  signed int v6; // r6@6
  int v7; // r5@6
  void *v8; // r0@11
  unsigned int *v10; // r2@15
  signed int v11; // r1@17
  unsigned int *v12; // r2@19
  signed int v13; // r1@21
  int v14; // [sp+4h] [bp-2Ch]@2
  int v15; // [sp+8h] [bp-28h]@2

  v3 = a3;
  v4 = UIResolvedDef::getValue(a1, a2, 0);
  if ( Json::Value::isString(v4) == 1 )
  {
    sub_119C884((void **)&v14, (const char *)&unk_257BC67);
    Json::Value::asString(&v15, (int)v4, &v14);
    v5 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v14 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v5);
    }
    if ( sub_119C9E8((const void **)&v15, "not_draggable") )
      if ( sub_119C9E8((const void **)&v15, "horizontal") )
        if ( sub_119C9E8((const void **)&v15, "vertical") )
        {
          v6 = 3;
          v7 = sub_119C9E8((const void **)&v15, "both") != 0;
        }
        else
          v7 = 0;
          v6 = 2;
        v7 = 0;
        v6 = 1;
    else
      v6 = 0;
      v7 = 0;
    v8 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v15 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v8);
    if ( v7 == 1 )
      v6 = v3;
  }
  else
    v6 = v3;
  return v6;
}


_BOOL4 __fastcall UIResolvedDef::isNamed(UIResolvedDef *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 2) - 12) != 0;
}


int __fastcall UIResolvedDef::hasValue(int a1, int **a2)
{
  Json::Value *v2; // r0@1

  v2 = UIResolvedDef::getValue(a1, a2, 0);
  return j_j_j__ZNK4Json5ValueneERKS0_((int)v2, (int)&Json::Value::null);
}


int __fastcall UIResolvedDef::isValid(UIResolvedDef *this)
{
  UIResolvedDef *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( Json::Value::isNull(*((Json::Value **)this + 4)) == 1 )
    result = Json::Value::isNull(*((Json::Value **)v1 + 3)) ^ 1;
  else
    result = 1;
  return result;
}


ui::LayoutOffset *__fastcall UIResolvedDef::getAsLayoutSize(ui::LayoutOffset *a1, int a2, int **a3, const ui::LayoutOffset *a4)
{
  ui::LayoutOffset *v4; // r5@1
  const ui::LayoutOffset *v5; // r4@1
  Json::Value *v6; // r6@1
  ui::LayoutOffset *result; // r0@2

  v4 = a1;
  v5 = a4;
  v6 = UIResolvedDef::getValue(a2, a3, 0);
  if ( Json::Value::isArray(v6) == 1 )
    result = ui::LayoutOffset::LayoutOffset(v4, v6);
  else
    result = ui::LayoutOffset::LayoutOffset(v4, v5);
  return result;
}


void __fastcall UIResolvedDef::create(int a1, Json::Value *a2, unsigned __int64 *a3, int a4, int *a5, Json::Value *a6)
{
  UIResolvedDef::create(a1, a2, a3, a4, a5, a6);
}


Json::Value *__fastcall UIResolvedDef::getAsColor(int a1, int a2, int **a3, int a4)
{
  int v4; // r4@1
  int v5; // r6@1
  Json::Value *v6; // r5@1
  int v7; // r6@2
  void *v8; // r0@2
  void *v9; // r0@3
  signed int v10; // r6@6
  void *v11; // r0@8
  void *v12; // r0@9
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  int v15; // r1@15
  Json::Value *result; // r0@16
  int v18; // r1@16
  int v19; // r2@16
  int v20; // r3@16
  void **v21; // r0@17
  void *v30; // r0@20
  void *v31; // r0@21
  int v32; // r6@24
  void *v33; // r0@24
  void *v34; // r0@25
  int v35; // r6@27
  void *v36; // r0@27
  void *v37; // r0@28
  int v38; // r6@30
  void *v39; // r0@30
  void *v40; // r0@31
  int v41; // r6@33
  void *v42; // r0@33
  void *v43; // r0@34
  int v44; // r6@36
  void *v45; // r0@36
  void *v46; // r0@37
  int v47; // r6@39
  void *v48; // r0@39
  void *v49; // r0@40
  int v50; // r6@42
  void *v51; // r0@42
  void *v52; // r0@43
  int v53; // r6@45
  void *v54; // r0@45
  void *v55; // r0@46
  int v56; // r6@48
  void *v57; // r0@48
  void *v58; // r0@49
  int v59; // r5@51
  void *v60; // r0@51
  void *v61; // r0@52
  unsigned int *v62; // r2@57
  signed int v63; // r1@59
  unsigned int *v64; // r2@61
  signed int v65; // r1@63
  unsigned int *v66; // r2@66
  signed int v67; // r1@68
  unsigned int *v68; // r2@70
  signed int v69; // r1@72
  unsigned int *v70; // r2@83
  signed int v71; // r1@85
  unsigned int *v72; // r2@95
  signed int v73; // r1@97
  unsigned int *v74; // r2@99
  signed int v75; // r1@101
  unsigned int *v76; // r2@112
  signed int v77; // r1@114
  unsigned int *v78; // r2@116
  signed int v79; // r1@118
  unsigned int *v80; // r2@129
  signed int v81; // r1@131
  unsigned int *v82; // r2@133
  signed int v83; // r1@135
  unsigned int *v84; // r2@146
  signed int v85; // r1@148
  unsigned int *v86; // r2@150
  signed int v87; // r1@152
  unsigned int *v88; // r2@163
  signed int v89; // r1@165
  unsigned int *v90; // r2@167
  signed int v91; // r1@169
  unsigned int *v92; // r2@180
  signed int v93; // r1@182
  unsigned int *v94; // r2@184
  signed int v95; // r1@186
  int *v96; // r0@189
  int v97; // r1@189
  int v98; // r2@189
  int v99; // r3@189
  unsigned int *v100; // r2@199
  signed int v101; // r1@201
  unsigned int *v102; // r2@203
  signed int v103; // r1@205
  unsigned int *v104; // r2@215
  signed int v105; // r1@217
  unsigned int *v106; // r2@219
  signed int v107; // r1@221
  unsigned int *v108; // r2@231
  signed int v109; // r1@233
  unsigned int *v110; // r2@235
  signed int v111; // r1@237
  unsigned int *v112; // r2@247
  signed int v113; // r1@249
  unsigned int *v114; // r2@251
  signed int v115; // r1@253
  int v116; // [sp+0h] [bp-128h]@18
  char v117; // [sp+10h] [bp-118h]@18
  char v118; // [sp+20h] [bp-108h]@18
  char v119; // [sp+30h] [bp-F8h]@18
  char v120; // [sp+40h] [bp-E8h]@18
  int v121; // [sp+54h] [bp-D4h]@51
  int v122; // [sp+58h] [bp-D0h]@51
  int v123; // [sp+60h] [bp-C8h]@48
  int v124; // [sp+64h] [bp-C4h]@48
  int v125; // [sp+6Ch] [bp-BCh]@45
  int v126; // [sp+70h] [bp-B8h]@45
  int v127; // [sp+78h] [bp-B0h]@42
  int v128; // [sp+7Ch] [bp-ACh]@42
  int v129; // [sp+84h] [bp-A4h]@39
  int v130; // [sp+88h] [bp-A0h]@39
  int v131; // [sp+90h] [bp-98h]@36
  int v132; // [sp+94h] [bp-94h]@36
  int v133; // [sp+9Ch] [bp-8Ch]@33
  int v134; // [sp+A0h] [bp-88h]@33
  int v135; // [sp+A8h] [bp-80h]@30
  int v136; // [sp+ACh] [bp-7Ch]@30
  int v137; // [sp+B4h] [bp-74h]@27
  int v138; // [sp+B8h] [bp-70h]@27
  int v139; // [sp+C0h] [bp-68h]@24
  int v140; // [sp+C4h] [bp-64h]@24
  int v141; // [sp+CCh] [bp-5Ch]@6
  int v142; // [sp+D0h] [bp-58h]@6
  int v143; // [sp+D8h] [bp-50h]@5
  int v144; // [sp+DCh] [bp-4Ch]@5
  int v145; // [sp+E4h] [bp-44h]@2
  int v146; // [sp+E8h] [bp-40h]@2

  v4 = a1;
  v5 = a4;
  v6 = UIResolvedDef::getValue(a2, a3, 0);
  if ( Json::Value::isString(v6) == 1 )
  {
    sub_119C884((void **)&v145, (const char *)&unk_257BC67);
    Json::Value::asString(&v146, (int)v6, &v145);
    v7 = sub_119C9E8((const void **)&v146, "white");
    v8 = (void *)(v146 - 12);
    if ( (int *)(v146 - 12) != &dword_28898C0 )
    {
      v62 = (unsigned int *)(v146 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v8);
    }
    v9 = (void *)(v145 - 12);
    if ( (int *)(v145 - 12) != &dword_28898C0 )
      v64 = (unsigned int *)(v145 - 4);
          v65 = __ldrex(v64);
        while ( __strex(v65 - 1, v64) );
        v65 = (*v64)--;
      if ( v65 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v9);
    if ( v7 )
      sub_119C884((void **)&v143, (const char *)&unk_257BC67);
      Json::Value::asString(&v144, (int)v6, &v143);
      if ( sub_119C9E8((const void **)&v144, "grey") )
        sub_119C884((void **)&v141, (const char *)&unk_257BC67);
        Json::Value::asString(&v142, (int)v6, &v141);
        v10 = 0;
        if ( !sub_119C9E8((const void **)&v142, "gray") )
          v10 = 1;
        v11 = (void *)(v142 - 12);
        if ( (int *)(v142 - 12) != &dword_28898C0 )
        {
          v70 = (unsigned int *)(v142 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v71 = __ldrex(v70);
            while ( __strex(v71 - 1, v70) );
          }
          else
            v71 = (*v70)--;
          if ( v71 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v11);
        }
        v12 = (void *)(v141 - 12);
        if ( (int *)(v141 - 12) != &dword_28898C0 )
          v13 = (unsigned int *)(v141 - 4);
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
            v14 = (*v13)--;
          if ( v14 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v12);
        v10 = 1;
      v30 = (void *)(v144 - 12);
      if ( (int *)(v144 - 12) != &dword_28898C0 )
        v66 = (unsigned int *)(v144 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v67 = __ldrex(v66);
          while ( __strex(v67 - 1, v66) );
        else
          v67 = (*v66)--;
        if ( v67 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v30);
      v31 = (void *)(v143 - 12);
      if ( (int *)(v143 - 12) != &dword_28898C0 )
        v68 = (unsigned int *)(v143 - 4);
            v69 = __ldrex(v68);
          while ( __strex(v69 - 1, v68) );
          v69 = (*v68)--;
        if ( v69 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v31);
      if ( v10 == 1 )
        v21 = &Color::GREY;
        sub_119C884((void **)&v139, (const char *)&unk_257BC67);
        Json::Value::asString(&v140, (int)v6, &v139);
        v32 = sub_119C9E8((const void **)&v140, "black");
        v33 = (void *)(v140 - 12);
        if ( (int *)(v140 - 12) != &dword_28898C0 )
          v72 = (unsigned int *)(v140 - 4);
              v73 = __ldrex(v72);
            while ( __strex(v73 - 1, v72) );
            v73 = (*v72)--;
          if ( v73 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v33);
        v34 = (void *)(v139 - 12);
        if ( (int *)(v139 - 12) != &dword_28898C0 )
          v74 = (unsigned int *)(v139 - 4);
              v75 = __ldrex(v74);
            while ( __strex(v75 - 1, v74) );
            v75 = (*v74)--;
          if ( v75 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v34);
        if ( v32 )
          sub_119C884((void **)&v137, (const char *)&unk_257BC67);
          Json::Value::asString(&v138, (int)v6, &v137);
          v35 = sub_119C9E8((const void **)&v138, "red");
          v36 = (void *)(v138 - 12);
          if ( (int *)(v138 - 12) != &dword_28898C0 )
            v76 = (unsigned int *)(v138 - 4);
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
              j_j_j_j_j__ZdlPv_9_1(v36);
          v37 = (void *)(v137 - 12);
          if ( (int *)(v137 - 12) != &dword_28898C0 )
            v78 = (unsigned int *)(v137 - 4);
                v79 = __ldrex(v78);
              while ( __strex(v79 - 1, v78) );
              v79 = (*v78)--;
            if ( v79 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v37);
          if ( v35 )
            sub_119C884((void **)&v135, (const char *)&unk_257BC67);
            Json::Value::asString(&v136, (int)v6, &v135);
            v38 = sub_119C9E8((const void **)&v136, "green");
            v39 = (void *)(v136 - 12);
            if ( (int *)(v136 - 12) != &dword_28898C0 )
              v80 = (unsigned int *)(v136 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v81 = __ldrex(v80);
                while ( __strex(v81 - 1, v80) );
              }
              else
                v81 = (*v80)--;
              if ( v81 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v39);
            v40 = (void *)(v135 - 12);
            if ( (int *)(v135 - 12) != &dword_28898C0 )
              v82 = (unsigned int *)(v135 - 4);
                  v83 = __ldrex(v82);
                while ( __strex(v83 - 1, v82) );
                v83 = (*v82)--;
              if ( v83 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v40);
            if ( v38 )
              sub_119C884((void **)&v133, (const char *)&unk_257BC67);
              Json::Value::asString(&v134, (int)v6, &v133);
              v41 = sub_119C9E8((const void **)&v134, "blue");
              v42 = (void *)(v134 - 12);
              if ( (int *)(v134 - 12) != &dword_28898C0 )
                v84 = (unsigned int *)(v134 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v85 = __ldrex(v84);
                  while ( __strex(v85 - 1, v84) );
                }
                else
                  v85 = (*v84)--;
                if ( v85 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v42);
              v43 = (void *)(v133 - 12);
              if ( (int *)(v133 - 12) != &dword_28898C0 )
                v86 = (unsigned int *)(v133 - 4);
                    v87 = __ldrex(v86);
                  while ( __strex(v87 - 1, v86) );
                  v87 = (*v86)--;
                if ( v87 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v43);
              if ( v41 )
                sub_119C884((void **)&v131, (const char *)&unk_257BC67);
                Json::Value::asString(&v132, (int)v6, &v131);
                v44 = sub_119C9E8((const void **)&v132, "yellow");
                v45 = (void *)(v132 - 12);
                if ( (int *)(v132 - 12) != &dword_28898C0 )
                  v88 = (unsigned int *)(v132 - 4);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v89 = __ldrex(v88);
                    while ( __strex(v89 - 1, v88) );
                  }
                  else
                    v89 = (*v88)--;
                  if ( v89 <= 0 )
                    j_j_j_j_j__ZdlPv_9_1(v45);
                v46 = (void *)(v131 - 12);
                if ( (int *)(v131 - 12) != &dword_28898C0 )
                  v90 = (unsigned int *)(v131 - 4);
                      v91 = __ldrex(v90);
                    while ( __strex(v91 - 1, v90) );
                    v91 = (*v90)--;
                  if ( v91 <= 0 )
                    j_j_j_j_j__ZdlPv_9_1(v46);
                if ( v44 )
                  sub_119C884((void **)&v129, (const char *)&unk_257BC67);
                  Json::Value::asString(&v130, (int)v6, &v129);
                  v47 = sub_119C9E8((const void **)&v130, "orange");
                  v48 = (void *)(v130 - 12);
                  if ( (int *)(v130 - 12) != &dword_28898C0 )
                    v92 = (unsigned int *)(v130 - 4);
                    if ( &pthread_create )
                    {
                      __dmb();
                      do
                        v93 = __ldrex(v92);
                      while ( __strex(v93 - 1, v92) );
                    }
                    else
                      v93 = (*v92)--;
                    if ( v93 <= 0 )
                      j_j_j_j_j__ZdlPv_9_1(v48);
                  v49 = (void *)(v129 - 12);
                  if ( (int *)(v129 - 12) != &dword_28898C0 )
                    v94 = (unsigned int *)(v129 - 4);
                        v95 = __ldrex(v94);
                      while ( __strex(v95 - 1, v94) );
                      v95 = (*v94)--;
                    if ( v95 <= 0 )
                      j_j_j_j_j__ZdlPv_9_1(v49);
                  if ( v47 )
                    sub_119C884((void **)&v127, (const char *)&unk_257BC67);
                    Json::Value::asString(&v128, (int)v6, &v127);
                    v50 = sub_119C9E8((const void **)&v128, "purple");
                    v51 = (void *)(v128 - 12);
                    if ( (int *)(v128 - 12) != &dword_28898C0 )
                      v100 = (unsigned int *)(v128 - 4);
                      if ( &pthread_create )
                      {
                        __dmb();
                        do
                          v101 = __ldrex(v100);
                        while ( __strex(v101 - 1, v100) );
                      }
                      else
                        v101 = (*v100)--;
                      if ( v101 <= 0 )
                        j_j_j_j_j__ZdlPv_9_1(v51);
                    v52 = (void *)(v127 - 12);
                    if ( (int *)(v127 - 12) != &dword_28898C0 )
                      v102 = (unsigned int *)(v127 - 4);
                          v103 = __ldrex(v102);
                        while ( __strex(v103 - 1, v102) );
                        v103 = (*v102)--;
                      if ( v103 <= 0 )
                        j_j_j_j_j__ZdlPv_9_1(v52);
                    if ( v50 )
                      sub_119C884((void **)&v125, (const char *)&unk_257BC67);
                      Json::Value::asString(&v126, (int)v6, &v125);
                      v53 = sub_119C9E8((const void **)&v126, "cyan");
                      v54 = (void *)(v126 - 12);
                      if ( (int *)(v126 - 12) != &dword_28898C0 )
                        v104 = (unsigned int *)(v126 - 4);
                        if ( &pthread_create )
                        {
                          __dmb();
                          do
                            v105 = __ldrex(v104);
                          while ( __strex(v105 - 1, v104) );
                        }
                        else
                          v105 = (*v104)--;
                        if ( v105 <= 0 )
                          j_j_j_j_j__ZdlPv_9_1(v54);
                      v55 = (void *)(v125 - 12);
                      if ( (int *)(v125 - 12) != &dword_28898C0 )
                        v106 = (unsigned int *)(v125 - 4);
                            v107 = __ldrex(v106);
                          while ( __strex(v107 - 1, v106) );
                          v107 = (*v106)--;
                        if ( v107 <= 0 )
                          j_j_j_j_j__ZdlPv_9_1(v55);
                      if ( v53 )
                        sub_119C884((void **)&v123, (const char *)&unk_257BC67);
                        Json::Value::asString(&v124, (int)v6, &v123);
                        v56 = sub_119C9E8((const void **)&v124, "nil");
                        v57 = (void *)(v124 - 12);
                        if ( (int *)(v124 - 12) != &dword_28898C0 )
                          v108 = (unsigned int *)(v124 - 4);
                          if ( &pthread_create )
                          {
                            __dmb();
                            do
                              v109 = __ldrex(v108);
                            while ( __strex(v109 - 1, v108) );
                          }
                          else
                            v109 = (*v108)--;
                          if ( v109 <= 0 )
                            j_j_j_j_j__ZdlPv_9_1(v57);
                        v58 = (void *)(v123 - 12);
                        if ( (int *)(v123 - 12) != &dword_28898C0 )
                          v110 = (unsigned int *)(v123 - 4);
                              v111 = __ldrex(v110);
                            while ( __strex(v111 - 1, v110) );
                            v111 = (*v110)--;
                          if ( v111 <= 0 )
                            j_j_j_j_j__ZdlPv_9_1(v58);
                        if ( v56 )
                          sub_119C884((void **)&v121, (const char *)&unk_257BC67);
                          Json::Value::asString(&v122, (int)v6, &v121);
                          v59 = sub_119C9E8((const void **)&v122, "orange");
                          v60 = (void *)(v122 - 12);
                          if ( (int *)(v122 - 12) != &dword_28898C0 )
                            v112 = (unsigned int *)(v122 - 4);
                            if ( &pthread_create )
                            {
                              __dmb();
                              do
                                v113 = __ldrex(v112);
                              while ( __strex(v113 - 1, v112) );
                            }
                            else
                              v113 = (*v112)--;
                            if ( v113 <= 0 )
                              j_j_j_j_j__ZdlPv_9_1(v60);
                          v61 = (void *)(v121 - 12);
                          if ( (int *)(v121 - 12) != &dword_28898C0 )
                            v114 = (unsigned int *)(v121 - 4);
                                v115 = __ldrex(v114);
                              while ( __strex(v115 - 1, v114) );
                              v115 = (*v114)--;
                            if ( v115 <= 0 )
                              j_j_j_j_j__ZdlPv_9_1(v61);
                          if ( v59 )
                            v21 = &Color::WHITE;
                            v21 = &Color::ORANGE;
                          v21 = &Color::NIL;
                        v21 = &Color::CYAN;
                      v21 = &Color::PURPLE;
                    v21 = &Color::ORANGE;
                  v21 = &Color::YELLOW;
                v21 = &Color::BLUE;
              v21 = &Color::GREEN;
            v21 = &Color::RED;
          v21 = &Color::BLACK;
    else
      v21 = &Color::WHITE;
    v96 = (int *)*v21;
    v97 = *v96;
    v98 = v96[1];
    v99 = v96[2];
    result = (Json::Value *)v96[3];
    *(_DWORD *)v4 = v97;
    *(_DWORD *)(v4 + 4) = v98;
    *(_DWORD *)(v4 + 8) = v99;
    *(_DWORD *)(v4 + 12) = result;
  }
  else if ( Json::Value::isArray(v6) != 1 || Json::Value::isNull(v6) )
    result = *(Json::Value **)v5;
    v18 = *(_DWORD *)(v5 + 4);
    v19 = *(_DWORD *)(v5 + 8);
    v20 = *(_DWORD *)(v5 + 12);
    *(_DWORD *)v4 = *(_DWORD *)v5;
    *(_DWORD *)(v4 + 4) = v18;
    *(_DWORD *)(v4 + 8) = v19;
    *(_DWORD *)(v4 + 12) = v20;
  else
    __asm
      VMOV.F64        D0, #1.0
      VMOV            R2, R3, D0
    Json::Value::Value((Json::Value *)&v120, v15, _R2);
    Json::Value::get((Json::Value *)&v119, (unsigned int)v6, 0, (const Json::Value *)&v120);
    _R8 = Json::Value::asFloat((Json::Value *)&v119, 0.0);
    Json::Value::~Value((Json::Value *)&v119);
    Json::Value::get((Json::Value *)&v118, (unsigned int)v6, (const Json::Value *)1, (const Json::Value *)&v120);
    _R7 = Json::Value::asFloat((Json::Value *)&v118, 0.0);
    Json::Value::~Value((Json::Value *)&v118);
    Json::Value::get((Json::Value *)&v117, (unsigned int)v6, (const Json::Value *)2, (const Json::Value *)&v120);
    _R6 = Json::Value::asFloat((Json::Value *)&v117, 0.0);
    Json::Value::~Value((Json::Value *)&v117);
    Json::Value::get((Json::Value *)&v116, (unsigned int)v6, (const Json::Value *)3, (const Json::Value *)&v120);
    _R0 = Json::Value::asFloat((Json::Value *)&v116, 0.0);
      VMOV            S22, R0
      VMOV            S16, R8
      VMOV            S18, R7
      VMOV            S20, R6
    Json::Value::~Value((Json::Value *)&v116);
      VSTR            S16, [R4]
      VSTR            S18, [R4,#4]
      VSTR            S20, [R4,#8]
      VSTR            S22, [R4,#0xC]
    result = Json::Value::~Value((Json::Value *)&v120);
  return result;
}


int __fastcall UIResolvedDef::getAsSliderManagerBehavior(int a1, int **a2, int a3)
{
  int v3; // r6@1
  Json::Value *v4; // r5@1
  void *v5; // r0@2
  int v6; // r5@3
  void *v7; // r0@3
  unsigned int *v9; // r2@7
  signed int v10; // r1@9
  unsigned int *v11; // r2@11
  signed int v12; // r1@13
  int v13; // [sp+8h] [bp-28h]@2
  int v14; // [sp+Ch] [bp-24h]@2

  v3 = a3;
  v4 = UIResolvedDef::getValue(a1, a2, 0);
  if ( Json::Value::isString(v4) == 1 )
  {
    sub_119C884((void **)&v13, (const char *)&unk_257BC67);
    Json::Value::asString(&v14, (int)v4, &v13);
    v5 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
    {
      v9 = (unsigned int *)(v13 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v5);
    }
    v6 = sub_119C9E8((const void **)&v14, "gather");
    v7 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v14 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v7);
    if ( !v6 )
      v3 = 0;
  }
  return v3;
}


signed int __fastcall UIResolvedDef::getAsTextAlignment(int a1, int **a2, signed int a3)
{
  signed int v3; // r7@1
  Json::Value *v4; // r5@1
  int v5; // r6@2
  void *v6; // r0@2
  void *v7; // r0@3
  int v8; // r6@5
  void *v9; // r0@5
  void *v10; // r0@6
  int v11; // r5@8
  void *v12; // r0@8
  void *v13; // r0@9
  unsigned int *v15; // r2@16
  signed int v16; // r1@18
  unsigned int *v17; // r2@20
  signed int v18; // r1@22
  unsigned int *v19; // r2@24
  signed int v20; // r1@26
  unsigned int *v21; // r2@28
  signed int v22; // r1@30
  unsigned int *v23; // r2@40
  signed int v24; // r1@42
  unsigned int *v25; // r2@44
  signed int v26; // r1@46
  int v27; // [sp+8h] [bp-38h]@8
  int v28; // [sp+Ch] [bp-34h]@8
  int v29; // [sp+14h] [bp-2Ch]@5
  int v30; // [sp+18h] [bp-28h]@5
  int v31; // [sp+20h] [bp-20h]@2
  int v32; // [sp+24h] [bp-1Ch]@2

  v3 = a3;
  v4 = UIResolvedDef::getValue(a1, a2, 0);
  if ( Json::Value::isString(v4) == 1 )
  {
    sub_119C884((void **)&v31, (const char *)&unk_257BC67);
    Json::Value::asString(&v32, (int)v4, &v31);
    v5 = sub_119C9E8((const void **)&v32, "right");
    v6 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
    {
      v15 = (unsigned int *)(v32 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v6);
    }
    v7 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v31 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v7);
    if ( v5 )
      sub_119C884((void **)&v29, (const char *)&unk_257BC67);
      Json::Value::asString(&v30, (int)v4, &v29);
      v8 = sub_119C9E8((const void **)&v30, "center");
      v9 = (void *)(v30 - 12);
      if ( (int *)(v30 - 12) != &dword_28898C0 )
        v19 = (unsigned int *)(v30 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
        }
        else
          v20 = (*v19)--;
        if ( v20 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v9);
      v10 = (void *)(v29 - 12);
      if ( (int *)(v29 - 12) != &dword_28898C0 )
        v21 = (unsigned int *)(v29 - 4);
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
          v22 = (*v21)--;
        if ( v22 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v10);
      if ( v8 )
        sub_119C884((void **)&v27, (const char *)&unk_257BC67);
        Json::Value::asString(&v28, (int)v4, &v27);
        v11 = sub_119C9E8((const void **)&v28, "left");
        v12 = (void *)(v28 - 12);
        if ( (int *)(v28 - 12) != &dword_28898C0 )
          v23 = (unsigned int *)(v28 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v24 = __ldrex(v23);
            while ( __strex(v24 - 1, v23) );
          }
          else
            v24 = (*v23)--;
          if ( v24 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v12);
        v13 = (void *)(v27 - 12);
        if ( (int *)(v27 - 12) != &dword_28898C0 )
          v25 = (unsigned int *)(v27 - 4);
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
            v26 = (*v25)--;
          if ( v26 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v13);
        if ( !v11 )
          v3 = 0;
        v3 = 2;
    else
      v3 = 1;
  }
  return v3;
}


int __fastcall UIResolvedDef::getAsClipOffset(__int64 *a1, int a2, int **a3, __int64 *a4)
{
  __int64 *v4; // r4@1
  __int64 *v5; // r6@1
  Json::Value *v6; // r5@1
  int v7; // r1@1
  __int64 v15; // r0@2
  int v17; // [sp+0h] [bp-50h]@2
  char v18; // [sp+10h] [bp-40h]@2
  char v19; // [sp+20h] [bp-30h]@2

  v4 = a1;
  v5 = a4;
  v6 = UIResolvedDef::getValue(a2, a3, 0);
  if ( Json::Value::isArray(v6) == 1 )
  {
    __asm
    {
      VLDR            D0, =0.0
      VMOV            R2, R3, D0
    }
    Json::Value::Value((Json::Value *)&v19, v7, _R2);
    Json::Value::get((Json::Value *)&v18, (unsigned int)v6, 0, (const Json::Value *)&v19);
    _R6 = Json::Value::asFloat((Json::Value *)&v18, 0.0);
    Json::Value::~Value((Json::Value *)&v18);
    Json::Value::get((Json::Value *)&v17, (unsigned int)v6, (const Json::Value *)1, (const Json::Value *)&v19);
    _R0 = Json::Value::asFloat((Json::Value *)&v17, 0.0);
      VMOV            S18, R0
      VMOV            S16, R6
    Json::Value::~Value((Json::Value *)&v17);
      VSTR            S16, [R4]
      VSTR            S18, [R4,#4]
    LODWORD(v15) = Json::Value::~Value((Json::Value *)&v19);
  }
  else
    v15 = *v5;
    *v4 = *v5;
  return v15;
}


void __fastcall UIResolvedDef::getAsString(int *a1, int a2, int **a3, int *a4)
{
  UIResolvedDef::getAsString(a1, a2, a3, a4);
}


int __fastcall UIResolvedDef::isIgnored(UIResolvedDef *this)
{
  return *(_BYTE *)this;
}


Json::Value *__fastcall UIResolvedDef::getAsUVSize(int a1, int a2, int **a3, int a4)
{
  int v4; // r4@1
  int v5; // r6@1
  Json::Value *v6; // r5@1
  int v7; // r1@1
  Json::Value *result; // r0@2
  int v16; // [sp+0h] [bp-50h]@2
  char v17; // [sp+10h] [bp-40h]@2
  char v18; // [sp+20h] [bp-30h]@2

  v4 = a1;
  v5 = a4;
  v6 = UIResolvedDef::getValue(a2, a3, 0);
  if ( Json::Value::isArray(v6) == 1 )
  {
    __asm
    {
      VLDR            D0, =0.0
      VMOV            R2, R3, D0
    }
    Json::Value::Value((Json::Value *)&v18, v7, _R2);
    Json::Value::get((Json::Value *)&v17, (unsigned int)v6, 0, (const Json::Value *)&v18);
    _R6 = Json::Value::asFloat((Json::Value *)&v17, 0.0);
    Json::Value::~Value((Json::Value *)&v17);
    Json::Value::get((Json::Value *)&v16, (unsigned int)v6, (const Json::Value *)1, (const Json::Value *)&v18);
    _R0 = Json::Value::asFloat((Json::Value *)&v16, 0.0);
      VMOV            S18, R0
      VMOV            S16, R6
    Json::Value::~Value((Json::Value *)&v16);
      VSTR            S16, [R4]
      VSTR            S18, [R4,#4]
    result = Json::Value::~Value((Json::Value *)&v18);
  }
  else
    *(_DWORD *)v4 = *(_DWORD *)v5;
    result = *(Json::Value **)(v5 + 4);
    *(_DWORD *)(v4 + 4) = result;
  return result;
}


int __fastcall UIResolvedDef::getAsInt(int a1, int **a2, int a3)
{
  int v3; // r4@1
  Json::Value *v4; // r5@1
  int result; // r0@2

  v3 = a3;
  v4 = UIResolvedDef::getValue(a1, a2, 0);
  if ( Json::Value::isInt(v4) == 1 )
    result = j_j_j__ZNK4Json5Value5asIntEi_1(v4, 0);
  else
    result = v3;
  return result;
}


Json::Value *__fastcall UIResolvedDef::getValue(int a1, int **a2, bool a3)
{
  int v3; // r5@1
  bool v4; // r4@1
  int **v5; // r7@1
  Json::Value *v6; // r6@2
  Json::Value *result; // r0@7

  v3 = a1;
  v4 = a3;
  v5 = a2;
  if ( *(_BYTE *)a1 )
  {
    v6 = (Json::Value *)&Json::Value::null;
  }
  else
    std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_erase(
      (unsigned __int64 *)(a1 + 44),
      a2);
    v6 = (Json::Value *)Json::Value::operator[](*(_DWORD *)(v3 + 16), (const char **)v5);
    if ( Json::Value::isNull(v6) == 1 )
    {
      v6 = (Json::Value *)Json::Value::operator[](*(_DWORD *)(v3 + 12), (const char **)v5);
      if ( Json::Value::isNull(v6) )
        v6 = (Json::Value *)&Json::Value::null;
    }
  if ( Json::Value::isNull(v6) )
    result = v6;
    result = (Json::Value *)UIResolvedDef::_evaluate((UIResolvedDef *)v3, v6, v4);
  return result;
}


Json::Value *__fastcall UIResolvedDef::getAsUV(int a1, int a2, int **a3, int a4)
{
  int v4; // r4@1
  int v5; // r6@1
  Json::Value *v6; // r5@1
  int v7; // r1@1
  Json::Value *result; // r0@2
  int v16; // [sp+0h] [bp-50h]@2
  char v17; // [sp+10h] [bp-40h]@2
  char v18; // [sp+20h] [bp-30h]@2

  v4 = a1;
  v5 = a4;
  v6 = UIResolvedDef::getValue(a2, a3, 0);
  if ( Json::Value::isArray(v6) == 1 )
  {
    __asm
    {
      VLDR            D0, =0.0
      VMOV            R2, R3, D0
    }
    Json::Value::Value((Json::Value *)&v18, v7, _R2);
    Json::Value::get((Json::Value *)&v17, (unsigned int)v6, 0, (const Json::Value *)&v18);
    _R6 = Json::Value::asFloat((Json::Value *)&v17, 0.0);
    Json::Value::~Value((Json::Value *)&v17);
    Json::Value::get((Json::Value *)&v16, (unsigned int)v6, (const Json::Value *)1, (const Json::Value *)&v18);
    _R0 = Json::Value::asFloat((Json::Value *)&v16, 0.0);
      VMOV            S18, R0
      VMOV            S16, R6
    Json::Value::~Value((Json::Value *)&v16);
      VSTR            S16, [R4]
      VSTR            S18, [R4,#4]
    result = Json::Value::~Value((Json::Value *)&v18);
  }
  else
    *(_DWORD *)v4 = *(_DWORD *)v5;
    result = *(Json::Value **)(v5 + 4);
    *(_DWORD *)(v4 + 4) = result;
  return result;
}


int __fastcall UIResolvedDef::UIResolvedDef(int a1, int a2, int a3, int *a4, int *a5, int anonymous0, __int64 a6)
{
  int v7; // r5@1
  int v8; // r4@1
  int *v9; // r11@1
  int v10; // r7@1
  double v11; // r0@1
  unsigned int v12; // r0@1
  int v13; // r6@3
  void *v14; // r7@3
  Json::Value *v15; // r7@4
  void *v16; // r0@4
  signed int v17; // r0@6
  void *v18; // r0@9
  unsigned int *v20; // r2@12
  signed int v21; // r1@14
  unsigned int *v22; // r2@20
  signed int v23; // r1@22
  int v24; // [sp+Ch] [bp-34h]@9
  int v25; // [sp+14h] [bp-2Ch]@4

  v7 = a1;
  v8 = a2;
  *(_BYTE *)a1 = 0;
  v9 = (int *)(a1 + 8);
  v10 = a3;
  sub_119C854((int *)(a1 + 4), a4);
  sub_119C854(v9, a5);
  *(_QWORD *)(v7 + 12) = __PAIR__(a6, anonymous0);
  *(_DWORD *)(v7 + 20) = v10;
  Json::Value::Value((_DWORD *)(v7 + 24), 0);
  *(_DWORD *)(v7 + 40) = v8;
  *(_DWORD *)(v7 + 52) = 0;
  *(_DWORD *)(v7 + 56) = 0;
  *(_DWORD *)(v7 + 60) = 1065353216;
  *(_DWORD *)(v7 + 64) = 0;
  LODWORD(v11) = v7 + 60;
  v12 = sub_119C844(v11);
  *(_DWORD *)(v7 + 48) = v12;
  if ( v12 == 1 )
  {
    *(_DWORD *)(v7 + 68) = 0;
    v14 = (void *)(v7 + 68);
  }
  else
    if ( v12 >= 0x40000000 )
      sub_119C874();
    v13 = 4 * v12;
    v14 = operator new(4 * v12);
    _aeabi_memclr4(v14, v13);
  *(_DWORD *)(v7 + 44) = v14;
  sub_119C884((void **)&v25, "ignored");
  v15 = UIResolvedDef::getValue(v7, (int **)&v25, 1);
  v16 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v25 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v16);
  if ( Json::Value::isIntegral(v15) == 1 )
    v17 = Json::Value::asBool(v15, 0);
    *(_BYTE *)v7 = v17;
    v17 = *(_BYTE *)v7;
  if ( !v17 )
    UIResolvedDef::_pushVariables((UIResolvedDef *)v7);
    sub_119C884((void **)&v24, "ignored");
    std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_erase(
      (unsigned __int64 *)(v7 + 44),
      (int **)&v24);
    v18 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v24 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
      }
      else
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v18);
  return v7;
}


void __fastcall UIResolvedDef::getAsTextureString(UIResolvedDef *this, int a2)
{
  int v2; // r5@1 OVERLAPPED
  int *v3; // r7@1
  int *v4; // r6@1 OVERLAPPED
  _DWORD *v5; // r0@5
  __int64 v6; // r1@5
  void *v7; // r0@7
  Json::Value *v8; // r5@8
  void *v9; // r0@8
  void *v10; // r0@9
  void *v11; // r0@10
  _QWORD *v12; // r0@12
  Json::Value *v13; // r5@14
  void *v14; // r0@14
  unsigned int *v15; // r2@16
  signed int v16; // r1@18
  unsigned int *v17; // r2@20
  signed int v18; // r1@22
  unsigned int *v19; // r2@24
  signed int v20; // r1@26
  unsigned int *v21; // r2@28
  signed int v22; // r1@30
  unsigned int *v23; // r2@52
  signed int v24; // r1@54
  int v25; // [sp+4h] [bp-6Ch]@14
  int v26; // [sp+Ch] [bp-64h]@14
  _QWORD *v27; // [sp+10h] [bp-60h]@12
  void (*v28)(void); // [sp+18h] [bp-58h]@12
  void (__fastcall *v29)(int **, const char *); // [sp+1Ch] [bp-54h]@12
  int v30; // [sp+24h] [bp-4Ch]@8
  int v31; // [sp+2Ch] [bp-44h]@8
  int v32; // [sp+34h] [bp-3Ch]@7
  _DWORD *v33; // [sp+38h] [bp-38h]@5
  __int64 v34; // [sp+40h] [bp-30h]@5
  __int64 v35; // [sp+48h] [bp-28h]@5
  int v36; // [sp+54h] [bp-1Ch]@1

  v2 = a2;
  v3 = (int *)this;
  v4 = &v36;
  sub_119C884((void **)&v36, "texture:");
  if ( Json::Value::isMember(*(Json::Value **)(v2 + 12), "uv")
    || Json::Value::isMember(*(Json::Value **)(v2 + 16), "uv")
    || Json::Value::isMember(*(Json::Value **)(v2 + 12), "uv_size")
    || Json::Value::isMember(*(Json::Value **)(v2 + 16), "uv_size") == 1 )
  {
    v35 = (unsigned int)"texture";
    v5 = operator new(0x10u);
    LODWORD(v6) = sub_DBB294;
    *v5 = v2;
    v5[1] = (char *)&v35 + 4;
    HIDWORD(v6) = sub_DBB0B8;
    v5[2] = &v35;
    v5[3] = &v36;
    v33 = v5;
    v34 = v6;
    UIResolvedDef::foreachMemberNames(v2, (int)&v33);
    if ( (_DWORD)v34 )
      ((void (*)(void))v34)();
    sub_119C884((void **)&v32, "texture");
    std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_erase(
      (unsigned __int64 *)(v2 + 44),
      (int **)&v32);
    v7 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
    {
      v19 = (unsigned int *)(v32 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      }
      else
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v7);
    }
    sub_119C884((void **)&v31, (const char *)v35);
    v8 = UIResolvedDef::getValue(v2, (int **)&v31, 0);
    sub_119C884((void **)&v30, (const char *)&unk_257BC67);
    Json::Value::asString(v3, (int)v8, &v30);
    v9 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v30 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v9);
    v10 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) == &dword_28898C0 )
      goto LABEL_10;
    v15 = (unsigned int *)(v31 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      goto LABEL_41;
    goto LABEL_40;
  }
  v12 = operator new(8u);
  *v12 = *(_QWORD *)&v2;
  v27 = v12;
  v28 = (void (*)(void))sub_DBB35C;
  v29 = sub_DBB2D4;
  UIResolvedDef::foreachMemberNames(v2, (int)&v27);
  if ( v28 )
    v28();
  sub_119C884((void **)&v26, "texture");
  v13 = UIResolvedDef::getValue(v2, (int **)&v26, 0);
  sub_119C884((void **)&v25, (const char *)&unk_257BC67);
  Json::Value::asString(v3, (int)v13, &v25);
  v14 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v25 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
    else
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v10 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v26 - 4);
LABEL_41:
      if ( v16 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v10);
LABEL_40:
    v16 = (*v15)--;
    goto LABEL_41;
LABEL_10:
  v11 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v36 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
}


Json::Value *__fastcall UIResolvedDef::getAsSize(int a1, int a2, int **a3, int a4)
{
  int v4; // r4@1
  Json::Value *v6; // r5@1
  int v7; // r1@1
  int v14; // r1@2
  Json::Value *result; // r0@2
  int v18; // [sp+0h] [bp-60h]@2
  char v19; // [sp+10h] [bp-50h]@2
  char v20; // [sp+20h] [bp-40h]@2
  char v21; // [sp+30h] [bp-30h]@2

  v4 = a1;
  _R6 = a4;
  v6 = UIResolvedDef::getValue(a2, a3, 0);
  if ( Json::Value::isArray(v6) == 1 )
  {
    __asm
    {
      VLDR            S0, [R6]
      VCVT.F64.F32    D0, S0
      VMOV            R2, R3, D0
    }
    Json::Value::Value((Json::Value *)&v21, v7, _R2);
      VLDR            S0, [R6,#4]
    Json::Value::Value((Json::Value *)&v20, v14, _R2);
    Json::Value::get((Json::Value *)&v19, (unsigned int)v6, 0, (const Json::Value *)&v21);
    _R6 = Json::Value::asFloat((Json::Value *)&v19, 0.0);
    Json::Value::~Value((Json::Value *)&v19);
    Json::Value::get((Json::Value *)&v18, (unsigned int)v6, (const Json::Value *)1, (const Json::Value *)&v20);
    _R0 = Json::Value::asFloat((Json::Value *)&v18, 0.0);
      VMOV            S18, R0
      VMOV            S16, R6
    Json::Value::~Value((Json::Value *)&v18);
      VSTR            S16, [R4]
      VSTR            S18, [R4,#4]
    Json::Value::~Value((Json::Value *)&v20);
    result = Json::Value::~Value((Json::Value *)&v21);
  }
  else
    *(_DWORD *)v4 = *(_DWORD *)_R6;
    result = *(Json::Value **)(_R6 + 4);
    *(_DWORD *)(v4 + 4) = result;
  return result;
}


int __fastcall UIResolvedDef::getAsFloat(int a1, int **a2, int a3)
{
  int v3; // r4@1
  Json::Value *v4; // r5@1
  int result; // r0@2

  v3 = a3;
  v4 = UIResolvedDef::getValue(a1, a2, 0);
  if ( Json::Value::isNumeric(v4) == 1 )
    result = j_j_j__ZNK4Json5Value7asFloatEf_1(v4, 0.0);
  else
    result = v3;
  return result;
}


void __fastcall UIResolvedDef::getAsTextureString(UIResolvedDef *this, int a2)
{
  UIResolvedDef::getAsTextureString(this, a2);
}


UIResolvedDef *__fastcall UIResolvedDef::~UIResolvedDef(UIResolvedDef *this)
{
  UIResolvedDef *v1; // r11@1
  _DWORD *i; // r0@6
  unsigned __int64 *v3; // r7@9
  unsigned int *v4; // r2@11
  signed int v5; // r1@13
  unsigned __int64 *v6; // r6@19
  int v7; // r1@19
  void *v8; // r0@19
  char *v9; // r0@21
  int v10; // r1@24
  void *v11; // r0@24
  int v12; // r1@25
  void *v13; // r0@25
  unsigned int *v15; // r2@27
  signed int v16; // r1@29
  unsigned int *v17; // r2@31
  signed int v18; // r1@33

  v1 = this;
  if ( !*(_BYTE *)this )
  {
    if ( *((_DWORD *)this + 10) && !Json::Value::isNull((UIResolvedDef *)((char *)this + 24)) )
      *(_DWORD *)(*((_DWORD *)v1 + 10) + 4) -= 4;
    if ( *((_DWORD *)v1 + 14) )
    {
      for ( i = (_DWORD *)*((_DWORD *)v1 + 13); i; i = (_DWORD *)*i )
        ;
    }
  }
  v3 = (unsigned __int64 *)*((_DWORD *)v1 + 13);
  while ( v3 )
    v6 = v3;
    v7 = *v3 >> 32;
    v3 = (unsigned __int64 *)*v3;
    v8 = (void *)(v7 - 12);
    if ( (int *)(v7 - 12) != &dword_28898C0 )
      v4 = (unsigned int *)(v7 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v8);
    operator delete(v6);
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 44), 4 * (*(_QWORD *)((char *)v1 + 44) >> 32));
  *((_DWORD *)v1 + 13) = 0;
  *((_DWORD *)v1 + 14) = 0;
  v9 = (char *)*((_DWORD *)v1 + 11);
  if ( v9 && (char *)v1 + 68 != v9 )
    operator delete(v9);
  Json::Value::~Value((UIResolvedDef *)((char *)v1 + 24));
  v10 = *((_DWORD *)v1 + 2);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = *((_DWORD *)v1 + 1);
  v13 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v12 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  return v1;
}


void __fastcall UIResolvedDef::create(int a1, unsigned __int64 *a2, unsigned __int64 *a3, int a4, int *a5, int *a6)
{
  int v6; // r9@1
  unsigned __int64 *v7; // r7@1
  int v8; // r8@1
  unsigned __int64 *v9; // r5@1
  int *v10; // r4@1
  void *v11; // r0@5
  char *v12; // r0@6
  char *v13; // r0@7
  char *v14; // r0@8
  unsigned int *v15; // r2@10
  signed int v16; // r1@12
  unsigned int *v17; // r2@14
  signed int v18; // r1@16
  unsigned int *v19; // r2@18
  signed int v20; // r1@20
  unsigned int *v21; // r2@22
  signed int v22; // r1@24
  __int64 v23; // [sp+8h] [bp-38h]@0
  int v24; // [sp+10h] [bp-30h]@5
  _DWORD *v25; // [sp+14h] [bp-2Ch]@1
  _DWORD *v26; // [sp+18h] [bp-28h]@1
  char *v27; // [sp+1Ch] [bp-24h]@1

  v6 = a1;
  v7 = a2;
  v8 = a4;
  v9 = a3;
  v27 = (char *)&unk_28898CC;
  v25 = &unk_28898CC;
  v26 = &unk_28898CC;
  v10 = (int *)&v25;
  UIResolvedDef::parseName(a6, (int *)&v27, (int *)&v26, (void **)&v25, a3);
  if ( !*(v26 - 3) )
    EntityInteraction::setInteractText((int *)&v26, a5);
  if ( !*(v25 - 3) )
    v10 = (int *)&v27;
  sub_119C854(&v24, v10);
  LODWORD(v23) = UIDefRepository::findDef(v7, &v26, (int **)&v24);
  UIResolvedDef::UIResolvedDef(v6, (int)v9, v8, (int *)&v26, &v24, v23, v23);
  v11 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v24 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v11);
  }
  v12 = (char *)(v25 - 3);
  if ( v25 - 3 != &dword_28898C0 )
    v17 = v25 - 1;
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = (char *)(v26 - 3);
  if ( v26 - 3 != &dword_28898C0 )
    v19 = v26 - 1;
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  v14 = v27 - 12;
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v27 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
}


Json::Value *__fastcall UIResolvedDef::getAsGridSize(int a1, int a2, int **a3, int a4)
{
  int v4; // r4@1
  int v5; // r6@1
  Json::Value *v6; // r5@1
  int v7; // r6@2
  int v8; // r5@2
  Json::Value *result; // r0@2
  int v10; // [sp+0h] [bp-50h]@2
  char v11; // [sp+10h] [bp-40h]@2
  char v12; // [sp+20h] [bp-30h]@2
  char v13; // [sp+30h] [bp-20h]@2

  v4 = a1;
  v5 = a4;
  v6 = UIResolvedDef::getValue(a2, a3, 0);
  if ( Json::Value::isArray(v6) == 1 )
  {
    Json::Value::Value((Json::Value *)&v13, *(_DWORD *)v5);
    Json::Value::Value((Json::Value *)&v12, *(_DWORD *)(v5 + 4));
    Json::Value::get((Json::Value *)&v11, (unsigned int)v6, 0, (const Json::Value *)&v13);
    v7 = Json::Value::asInt((Json::Value *)&v11, 0);
    Json::Value::~Value((Json::Value *)&v11);
    Json::Value::get((Json::Value *)&v10, (unsigned int)v6, (const Json::Value *)1, (const Json::Value *)&v12);
    v8 = Json::Value::asInt((Json::Value *)&v10, 0);
    Json::Value::~Value((Json::Value *)&v10);
    *(_DWORD *)v4 = v7;
    *(_DWORD *)(v4 + 4) = v8;
    Json::Value::~Value((Json::Value *)&v12);
    result = Json::Value::~Value((Json::Value *)&v13);
  }
  else
    *(_DWORD *)v4 = *(_DWORD *)v5;
    result = *(Json::Value **)(v5 + 4);
    *(_DWORD *)(v4 + 4) = result;
  return result;
}


signed int __fastcall UIResolvedDef::getAsAnchorPoint(int a1, int **a2, signed int a3)
{
  signed int v3; // r7@1
  Json::Value *v4; // r5@1
  void *v5; // r0@2
  signed int v6; // r6@11
  int v7; // r5@11
  unsigned int *v8; // r2@17
  signed int v9; // r1@19
  void *v10; // r0@29
  unsigned int *v12; // r2@33
  signed int v13; // r1@35
  int v14; // [sp+4h] [bp-2Ch]@2
  int v15; // [sp+8h] [bp-28h]@2

  v3 = a3;
  v4 = UIResolvedDef::getValue(a1, a2, 0);
  if ( Json::Value::isString(v4) == 1 )
  {
    sub_119C884((void **)&v14, (const char *)&unk_257BC67);
    Json::Value::asString(&v15, (int)v4, &v14);
    v5 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v14 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v5);
    }
    if ( sub_119C9E8((const void **)&v15, "top_left") )
      if ( sub_119C9E8((const void **)&v15, "top_middle") )
        if ( sub_119C9E8((const void **)&v15, "top_right") )
        {
          if ( sub_119C9E8((const void **)&v15, "right_middle") )
          {
            if ( sub_119C9E8((const void **)&v15, "bottom_right") )
            {
              if ( sub_119C9E8((const void **)&v15, "bottom_middle") )
              {
                if ( sub_119C9E8((const void **)&v15, "bottom_left") )
                {
                  if ( sub_119C9E8((const void **)&v15, "left_middle") )
                  {
                    v6 = 4;
                    v7 = sub_119C9E8((const void **)&v15, "center") != 0;
                  }
                  else
                    v7 = 0;
                    v6 = 3;
                }
                else
                  v7 = 0;
                  v6 = 6;
              }
              else
                v7 = 0;
                v6 = 7;
            }
            else
              v7 = 0;
              v6 = 8;
          }
          else
            v7 = 0;
            v6 = 5;
        }
        else
          v7 = 0;
          v6 = 2;
        v7 = 0;
        v6 = 1;
    else
      v6 = 0;
      v7 = 0;
    v10 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v15 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v10);
    if ( v7 == 1 )
      v6 = v3;
  }
  else
    v6 = v3;
  return v6;
}


signed int __fastcall UIResolvedDef::getAsBindingCondition(int a1, int **a2, signed int a3)
{
  signed int v3; // r7@1
  Json::Value *v4; // r5@1
  void *v5; // r0@2
  signed int v6; // r6@8
  int v7; // r5@8
  unsigned int *v8; // r2@14
  signed int v9; // r1@16
  void *v10; // r0@19
  unsigned int *v12; // r2@23
  signed int v13; // r1@25
  int v14; // [sp+4h] [bp-2Ch]@2
  int v15; // [sp+8h] [bp-28h]@2

  v3 = a3;
  v4 = UIResolvedDef::getValue(a1, a2, 0);
  if ( Json::Value::isString(v4) == 1 )
  {
    sub_119C884((void **)&v14, (const char *)&unk_257BC67);
    Json::Value::asString(&v15, (int)v4, &v14);
    v5 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v14 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v5);
    }
    if ( sub_119C9E8((const void **)&v15, "none") )
      if ( sub_119C9E8((const void **)&v15, "always") )
        if ( sub_119C9E8((const void **)&v15, "always_when_visible") )
        {
          if ( sub_119C9E8((const void **)&v15, "once") )
          {
            if ( sub_119C9E8((const void **)&v15, "visible") )
            {
              v6 = 5;
              v7 = sub_119C9E8((const void **)&v15, "visibility_changed") != 0;
            }
            else
              v7 = 0;
              v6 = 4;
          }
          else
            v7 = 0;
            v6 = 1;
        }
        else
          v7 = 0;
          v6 = 3;
        v7 = 0;
        v6 = 2;
    else
      v6 = 0;
      v7 = 0;
    v10 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v15 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v10);
    if ( v7 == 1 )
      v6 = v3;
  }
  else
    v6 = v3;
  return v6;
}


signed int __fastcall UIResolvedDef::getAsBindingType(int a1, int **a2, signed int a3)
{
  signed int v3; // r7@1
  Json::Value *v4; // r5@1
  void *v5; // r0@2
  signed int v6; // r6@7
  int v7; // r5@7
  void *v8; // r0@13
  unsigned int *v10; // r2@17
  signed int v11; // r1@19
  unsigned int *v12; // r2@21
  signed int v13; // r1@23
  int v14; // [sp+4h] [bp-2Ch]@2
  int v15; // [sp+8h] [bp-28h]@2

  v3 = a3;
  v4 = UIResolvedDef::getValue(a1, a2, 0);
  if ( Json::Value::isString(v4) == 1 )
  {
    sub_119C884((void **)&v14, (const char *)&unk_257BC67);
    Json::Value::asString(&v15, (int)v4, &v14);
    v5 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v14 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v5);
    }
    if ( sub_119C9E8((const void **)&v15, "global") )
      if ( sub_119C9E8((const void **)&v15, "collection") )
        if ( sub_119C9E8((const void **)&v15, "collection_details") )
        {
          if ( sub_119C9E8((const void **)&v15, "view") )
          {
            v6 = 0;
            v7 = sub_119C9E8((const void **)&v15, "none") != 0;
          }
          else
            v7 = 0;
            v6 = 4;
        }
        else
          v7 = 0;
          v6 = 3;
        v7 = 0;
        v6 = 2;
    else
      v7 = 0;
      v6 = 1;
    v8 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v15 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v8);
    if ( v7 == 1 )
      v6 = v3;
  }
  else
    v6 = v3;
  return v6;
}


signed int __fastcall UIResolvedDef::_popVariables(UIResolvedDef *this)
{
  UIResolvedDef *v1; // r4@1
  signed int result; // r0@1

  v1 = this;
  result = *((_DWORD *)this + 10);
  if ( result )
  {
    result = Json::Value::isNull((UIResolvedDef *)((char *)v1 + 24));
    if ( !result )
    {
      result = *((_DWORD *)v1 + 10);
      *(_DWORD *)(result + 4) -= 4;
    }
  }
  return result;
}


signed int __fastcall UIResolvedDef::getAsClipDirection(int a1, int **a2, signed int a3)
{
  signed int v3; // r7@1
  Json::Value *v4; // r5@1
  void *v5; // r0@2
  signed int v6; // r6@7
  int v7; // r5@7
  void *v8; // r0@13
  unsigned int *v10; // r2@17
  signed int v11; // r1@19
  unsigned int *v12; // r2@21
  signed int v13; // r1@23
  int v14; // [sp+4h] [bp-2Ch]@2
  int v15; // [sp+8h] [bp-28h]@2

  v3 = a3;
  v4 = UIResolvedDef::getValue(a1, a2, 0);
  if ( Json::Value::isString(v4) == 1 )
  {
    sub_119C884((void **)&v14, (const char *)&unk_257BC67);
    Json::Value::asString(&v15, (int)v4, &v14);
    v5 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v14 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v5);
    }
    if ( sub_119C9E8((const void **)&v15, "left") )
      if ( sub_119C9E8((const void **)&v15, "right") )
        if ( sub_119C9E8((const void **)&v15, "up") )
        {
          if ( sub_119C9E8((const void **)&v15, "down") )
          {
            v6 = 5;
            v7 = sub_119C9E8((const void **)&v15, "center") != 0;
          }
          else
            v7 = 0;
            v6 = 4;
        }
        else
          v7 = 0;
          v6 = 3;
        v7 = 0;
        v6 = 2;
    else
      v7 = 0;
      v6 = 1;
    v8 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v15 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v8);
    if ( v7 == 1 )
      v6 = v3;
  }
  else
    v6 = v3;
  return v6;
}


signed int __fastcall UIResolvedDef::getDefType(UIResolvedDef *this)
{
  UIResolvedDef *v1; // r4@1
  Json::Value *v2; // r5@1
  void *v3; // r0@1
  signed int v4; // r4@3
  void *v5; // r0@3
  void *v6; // r0@4
  unsigned int *v7; // r2@5
  signed int v8; // r1@7
  unsigned int *v10; // r2@11
  signed int v11; // r1@13
  unsigned int *v12; // r2@19
  signed int v13; // r1@21
  int v14; // [sp+4h] [bp-24h]@3
  int v15; // [sp+8h] [bp-20h]@3
  int v16; // [sp+10h] [bp-18h]@1

  v1 = this;
  sub_119C884((void **)&v16, "type");
  v2 = UIResolvedDef::getValue((int)v1, (int **)&v16, 0);
  v3 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v16 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  if ( Json::Value::isString(v2) == 1 )
    sub_119C884((void **)&v14, (const char *)&unk_257BC67);
    Json::Value::asString(&v15, (int)v2, &v14);
    v4 = defTypeFromString((const void **)&v15);
    v5 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v15 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v5);
    v6 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)(v14 - 4);
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
        v8 = (*v7)--;
      if ( v8 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v6);
  else
    v4 = 18;
  return v4;
}


signed int __fastcall UIResolvedDef::getAsAnimationType(int a1, int **a2, signed int a3)
{
  signed int v3; // r7@1
  Json::Value *v4; // r5@1
  void *v5; // r0@2
  signed int v6; // r6@10
  int v7; // r5@10
  unsigned int *v8; // r2@16
  signed int v9; // r1@18
  void *v10; // r0@27
  unsigned int *v12; // r2@31
  signed int v13; // r1@33
  int v14; // [sp+4h] [bp-2Ch]@2
  int v15; // [sp+8h] [bp-28h]@2

  v3 = a3;
  v4 = UIResolvedDef::getValue(a1, a2, 0);
  if ( Json::Value::isString(v4) == 1 )
  {
    sub_119C884((void **)&v14, (const char *)&unk_257BC67);
    Json::Value::asString(&v15, (int)v4, &v14);
    v5 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v14 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v5);
    }
    if ( sub_119C9E8((const void **)&v15, "alpha") )
      if ( sub_119C9E8((const void **)&v15, "clip") )
        if ( sub_119C9E8((const void **)&v15, "color") )
        {
          if ( sub_119C9E8((const void **)&v15, "flip_book") )
          {
            if ( sub_119C9E8((const void **)&v15, "offset") )
            {
              if ( sub_119C9E8((const void **)&v15, "size") )
              {
                if ( sub_119C9E8((const void **)&v15, "uv") )
                {
                  v6 = 7;
                  v7 = sub_119C9E8((const void **)&v15, "wait") != 0;
                }
                else
                  v7 = 0;
                  v6 = 6;
              }
              else
                v7 = 0;
                v6 = 5;
            }
            else
              v7 = 0;
              v6 = 4;
          }
          else
            v7 = 0;
            v6 = 3;
        }
        else
          v7 = 0;
          v6 = 2;
        v7 = 0;
        v6 = 1;
    else
      v6 = 0;
      v7 = 0;
    v10 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v15 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v10);
    if ( v7 == 1 )
      v6 = v3;
  }
  else
    v6 = v3;
  return v6;
}


signed int __fastcall UIResolvedDef::getAsBool(int a1, int **a2, signed int a3)
{
  signed int v3; // r4@1
  Json::Value *v4; // r5@1

  v3 = a3;
  v4 = UIResolvedDef::getValue(a1, a2, 0);
  if ( Json::Value::isIntegral(v4) == 1 )
    v3 = Json::Value::asBool(v4, 0);
  return v3;
}


signed int __fastcall UIResolvedDef::getAsOrientation(int a1, int **a2, signed int a3)
{
  signed int v3; // r7@1
  Json::Value *v4; // r5@1
  void *v5; // r0@2
  signed int v6; // r5@5
  int v7; // r6@5
  void *v8; // r0@9
  unsigned int *v10; // r2@13
  signed int v11; // r1@15
  unsigned int *v12; // r2@17
  signed int v13; // r1@19
  int v14; // [sp+4h] [bp-2Ch]@2
  int v15; // [sp+8h] [bp-28h]@2

  v3 = a3;
  v4 = UIResolvedDef::getValue(a1, a2, 0);
  if ( Json::Value::isString(v4) == 1 )
  {
    sub_119C884((void **)&v14, (const char *)&unk_257BC67);
    Json::Value::asString(&v15, (int)v4, &v14);
    v5 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v14 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v5);
    }
    if ( sub_119C9E8((const void **)&v15, "horizontal") )
      if ( sub_119C9E8((const void **)&v15, "vertical") )
        v6 = 2;
        v7 = sub_119C9E8((const void **)&v15, "none") != 0;
        v7 = 0;
        v6 = 1;
    else
      v6 = 0;
      v7 = 0;
    v8 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v15 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v8);
    if ( v7 == 1 )
      v6 = v3;
  }
  else
    v6 = v3;
  return v6;
}


void __fastcall UIResolvedDef::create(int a1, unsigned __int64 *a2, unsigned __int64 *a3, int a4, int *a5, int *a6)
{
  UIResolvedDef::create(a1, a2, a3, a4, a5, a6);
}


void __fastcall UIResolvedDef::foreachMemberNames(int a1, int a2)
{
  int v2; // r10@1
  char *v3; // r11@1
  char *v4; // r4@1
  int v5; // r8@1
  void *v6; // r0@3
  void *v7; // r6@3
  signed int v8; // r8@5
  char *v9; // r7@5
  int v10; // r4@5
  unsigned int v11; // r0@5
  unsigned int v12; // r1@7
  unsigned int v13; // r5@7
  void *v14; // r0@23
  void *v15; // r6@23
  signed int v16; // r8@25
  char *v17; // r7@25
  int v18; // r4@25
  unsigned int v19; // r0@25
  unsigned int v20; // r1@27
  unsigned int v21; // r5@27
  char *v22; // r5@42
  int v23; // [sp+0h] [bp-48h]@1
  char v24; // [sp+4h] [bp-44h]@22
  char v25; // [sp+Ch] [bp-3Ch]@21
  char v26; // [sp+14h] [bp-34h]@2
  char v27; // [sp+1Ch] [bp-2Ch]@1

  v2 = a1;
  v23 = a2;
  Json::Value::begin((Json::Value *)&v27, *(_DWORD *)(a1 + 12));
  v3 = 0;
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    Json::Value::end((Json::Value *)&v26, *(_DWORD *)(v2 + 12));
    if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v27, (const Json::ValueIteratorBase *)&v26) == 1 )
      break;
    v6 = Json::ValueIteratorBase::memberName((Json::ValueIteratorBase *)&v27);
    v7 = v6;
    if ( v4 == (char *)v5 )
    {
      v8 = v4 - v3;
      v9 = 0;
      v10 = (v4 - v3) >> 2;
      v11 = v10;
      if ( !(v8 >> 2) )
        v11 = 1;
      v12 = v11 + (v8 >> 2);
      v13 = v11 + (v8 >> 2);
      if ( 0 != v12 >> 30 )
        v13 = 0x3FFFFFFF;
      if ( v12 < v11 )
      if ( v13 )
      {
        if ( v13 >= 0x40000000 )
          sub_119C874();
        v9 = (char *)operator new(4 * v13);
      }
      *(_DWORD *)&v9[4 * v10] = v7;
      if ( v10 )
        _aeabi_memmove4(v9, v3);
      v4 = &v9[4 * v10];
      if ( v3 )
        operator delete(v3);
      v5 = (int)&v9[4 * v13];
      v3 = v9;
    }
    else
      *(_DWORD *)v4 = v6;
    v4 += 4;
    Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v27);
  }
  Json::Value::begin((Json::Value *)&v25, *(_DWORD *)(v2 + 16));
    Json::Value::end((Json::Value *)&v24, *(_DWORD *)(v2 + 16));
    if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v25, (const Json::ValueIteratorBase *)&v24) == 1 )
    v14 = Json::ValueIteratorBase::memberName((Json::ValueIteratorBase *)&v25);
    v15 = v14;
      v16 = v4 - v3;
      v17 = 0;
      v18 = (v4 - v3) >> 2;
      v19 = v18;
      if ( !(v16 >> 2) )
        v19 = 1;
      v20 = v19 + (v16 >> 2);
      v21 = v19 + (v16 >> 2);
      if ( 0 != v20 >> 30 )
        v21 = 0x3FFFFFFF;
      if ( v20 < v19 )
      if ( v21 )
        if ( v21 >= 0x40000000 )
        v17 = (char *)operator new(4 * v21);
      *(_DWORD *)&v17[4 * v18] = v15;
      if ( v18 )
        _aeabi_memmove4(v17, v3);
      v4 = &v17[4 * v18];
      v5 = (int)&v17[4 * v21];
      v3 = v17;
      *(_DWORD *)v4 = v14;
    Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v25);
  if ( v3 != v4 )
    v22 = v3;
    do
      if ( !*(_DWORD *)(v23 + 8) )
        sub_119C8E4();
      (*(void (__fastcall **)(int, _DWORD))(v23 + 12))(v23, *(_DWORD *)v22);
      v22 += 4;
    while ( v4 != v22 );
  if ( v3 )
    operator delete(v3);
}


int __fastcall UIResolvedDef::UIResolvedDef(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  int v5; // r4@1
  int *v6; // r0@1
  void *v7; // r0@1
  void *v8; // r0@2
  unsigned int *v10; // r2@4
  signed int v11; // r1@6
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  __int64 v14; // [sp+8h] [bp-38h]@0
  int v15; // [sp+14h] [bp-2Ch]@1
  int v16; // [sp+1Ch] [bp-24h]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  sub_119C884((void **)&v16, (const char *)&unk_257BC67);
  v6 = (int *)sub_119C884((void **)&v15, (const char *)&unk_257BC67);
  LODWORD(v14) = v4;
  UIResolvedDef::UIResolvedDef(v5, v3, 0, &v16, v6, v4, v14);
  v7 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v15 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v7);
  }
  v8 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v16 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  return v5;
}


char *__fastcall UIResolvedDef::getName(UIResolvedDef *this)
{
  return (char *)this + 8;
}


char *__fastcall UIResolvedDef::getNamespace(UIResolvedDef *this)
{
  return (char *)this + 4;
}


char *__fastcall UIResolvedDef::_pushVariables(UIResolvedDef *this)
{
  UIResolvedDef *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  Json::Value *v4; // r5@3
  void *v5; // r0@3
  Json::Value *v6; // r7@7
  char *result; // r0@13
  int v8; // r5@14
  int v9; // r7@15
  __int64 v10; // r0@15
  void *v11; // r8@17
  signed int v12; // r1@17
  unsigned int v13; // r2@17
  unsigned int v14; // r1@19
  unsigned int v15; // r4@19
  char *v16; // r6@25
  unsigned int *v17; // r2@26
  signed int v18; // r1@28
  char *v19; // r5@31
  int v20; // r5@33
  char v21; // [sp+4h] [bp-44h]@6
  char v22; // [sp+Ch] [bp-3Ch]@6
  int v23; // [sp+18h] [bp-30h]@3
  _DWORD *v24; // [sp+1Ch] [bp-2Ch]@1
  __int64 v25; // [sp+24h] [bp-24h]@1

  v1 = this;
  v2 = operator new(4u);
  LODWORD(v3) = sub_DBB510;
  *v2 = v1;
  HIDWORD(v3) = sub_DBB398;
  v24 = v2;
  v25 = v3;
  UIResolvedDef::foreachMemberNames((int)v1, (int)&v24);
  if ( (_DWORD)v25 )
    ((void (*)(void))v25)();
  sub_119C884((void **)&v23, "variables");
  v4 = UIResolvedDef::getValue((int)v1, (int **)&v23, 0);
  v5 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v23 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  if ( !Json::Value::isNull(v4) )
    if ( Json::Value::isArray(v4) == 1 )
      Json::Value::begin((Json::Value *)&v22, (int)v4);
      Json::Value::end((Json::Value *)&v21, (int)v4);
      if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v22, (const Json::ValueIteratorBase *)&v21) != 1 )
      {
        do
        {
          v6 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v22);
          if ( Json::Value::isObject(v6) == 1 )
            sub_DBA860(v1, (int)v6);
          Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v22);
        }
        while ( !Json::ValueIteratorBase::isEqual(
                   (Json::ValueIteratorBase *)&v22,
                   (const Json::ValueIteratorBase *)&v21) );
      }
    else if ( Json::Value::isObject(v4) == 1 )
      sub_DBA860(v1, (int)v4);
  result = (char *)*((_DWORD *)v1 + 10);
  if ( result )
    v8 = (int)v1 + 24;
    result = (char *)Json::Value::isNull((UIResolvedDef *)((char *)v1 + 24));
    if ( !result )
      v9 = *((_DWORD *)v1 + 10);
      v10 = *(_QWORD *)(v9 + 4);
      if ( (_DWORD)v10 == HIDWORD(v10) )
        v11 = *(void **)v9;
        v12 = v10 - *(_DWORD *)v9;
        v13 = v12 >> 2;
        if ( !(v12 >> 2) )
          v13 = 1;
        v14 = v13 + (v12 >> 2);
        v15 = v14;
        if ( 0 != v14 >> 30 )
          v15 = 0x3FFFFFFF;
        if ( v14 < v13 )
        if ( v15 )
          if ( v15 >= 0x40000000 )
            sub_119C874();
          v16 = (char *)operator new(4 * v15);
          LODWORD(v10) = *(_QWORD *)v9 >> 32;
          v11 = (void *)*(_QWORD *)v9;
        else
          v16 = 0;
        *(_DWORD *)&v16[v10 - (_DWORD)v11] = v8;
        v19 = &v16[v10 - (_DWORD)v11];
        if ( 0 != ((signed int)v10 - (signed int)v11) >> 2 )
          _aeabi_memmove4(v16, v11);
        v20 = (int)(v19 + 4);
        if ( v11 )
          operator delete(v11);
        result = &v16[4 * v15];
        *(_DWORD *)v9 = v16;
        *(_DWORD *)(v9 + 4) = v20;
        *(_DWORD *)(v9 + 8) = result;
      else
        *(_DWORD *)v10 = v8;
        result = (char *)(*(_DWORD *)(v9 + 4) + 4);
        *(_DWORD *)(v9 + 4) = result;
  return result;
}


void __fastcall UIResolvedDef::create(int a1, Json::Value *a2, unsigned __int64 *a3, int a4, int *a5, Json::Value *a6)
{
  int v6; // r5@1
  int v7; // r8@1
  unsigned __int64 *v8; // r6@1
  unsigned __int64 *v9; // r10@1
  const char *v10; // r0@3
  Json::Value *v11; // r4@5
  Json::Value *v12; // r7@5
  char *v13; // r0@8
  char *v14; // r0@9
  char *v15; // r0@10
  void *v16; // r0@11
  unsigned int *v17; // r2@12
  signed int v18; // r1@14
  unsigned int *v19; // r2@18
  signed int v20; // r1@20
  unsigned int *v21; // r2@22
  signed int v22; // r1@24
  unsigned int *v23; // r2@26
  signed int v24; // r1@28
  __int64 v25; // [sp+8h] [bp-48h]@0
  _DWORD *v26; // [sp+10h] [bp-40h]@3
  _DWORD *v27; // [sp+14h] [bp-3Ch]@3
  char *v28; // [sp+18h] [bp-38h]@3
  char v29; // [sp+20h] [bp-30h]@3
  int v30; // [sp+28h] [bp-28h]@3

  v6 = a1;
  v7 = a4;
  v8 = a3;
  v9 = (unsigned __int64 *)a2;
  if ( Json::Value::isObject(a6) != 1 || Json::Value::size(a6) != 1 )
  {
    UIResolvedDef::UIResolvedDef(v6, (int)&UIResolvedDef::mNull);
  }
  else
    Json::Value::begin((Json::Value *)&v29, (int)a6);
    v10 = (const char *)Json::ValueIteratorBase::memberName((Json::ValueIteratorBase *)&v29);
    sub_119C884((void **)&v30, v10);
    v28 = (char *)&unk_28898CC;
    v26 = &unk_28898CC;
    v27 = &unk_28898CC;
    UIResolvedDef::parseName(&v30, (int *)&v28, (int *)&v27, (void **)&v26, v8);
    if ( !*(v27 - 3) )
      EntityInteraction::setInteractText((int *)&v27, a5);
    v11 = (Json::Value *)Json::Value::operator[]((int)a6, (const char **)&v30);
    v12 = v11;
    if ( *(v26 - 3) )
    {
      v12 = (Json::Value *)UIDefRepository::findDef(v9, &v27, &v26);
      if ( Json::Value::isNull(v12) )
        v12 = v11;
    }
    LODWORD(v25) = v11;
    UIResolvedDef::UIResolvedDef(v6, (int)v8, v7, (int *)&v27, (int *)&v28, (int)v12, v25);
    v13 = (char *)(v26 - 3);
    if ( v26 - 3 != &dword_28898C0 )
      v19 = v26 - 1;
      if ( &pthread_create )
      {
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      }
      else
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v13);
    v14 = (char *)(v27 - 3);
    if ( v27 - 3 != &dword_28898C0 )
      v21 = v27 - 1;
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v14);
    v15 = v28 - 12;
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v28 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
    v16 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v30 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v16);
}


void __fastcall UIResolvedDef::foreachMemberNames(int a1, int a2)
{
  UIResolvedDef::foreachMemberNames(a1, a2);
}


Json::Value *__fastcall UIResolvedDef::getBaseValue(int a1, int **a2)
{
  int v2; // r5@1
  int **v3; // r4@1
  Json::Value *result; // r0@2
  Json::Value *v5; // r6@3

  v2 = a1;
  v3 = a2;
  if ( *(_BYTE *)a1 )
  {
    result = (Json::Value *)&Json::Value::null;
  }
  else
    std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_erase(
      (unsigned __int64 *)(a1 + 44),
      a2);
    v5 = (Json::Value *)Json::Value::operator[](*(_DWORD *)(v2 + 16), (const char **)v3);
    if ( Json::Value::isNull(v5) == 1 )
    {
      v5 = (Json::Value *)Json::Value::operator[](*(_DWORD *)(v2 + 12), (const char **)v3);
      if ( Json::Value::isNull(v5) )
        v5 = (Json::Value *)&Json::Value::null;
    }
    result = v5;
  return result;
}


int __fastcall UIResolvedDef::getAsButtonId(int a1, int **a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  Json::Value *v5; // r6@1
  unsigned __int64 *v6; // r5@2
  void *v7; // r0@3
  void *v8; // r0@4
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  int v14; // [sp+8h] [bp-28h]@3
  int v15; // [sp+Ch] [bp-24h]@3

  v3 = a3;
  v4 = a1;
  v5 = UIResolvedDef::getValue(a1, a2, 0);
  if ( Json::Value::isString(v5) == 1 )
  {
    v6 = *(unsigned __int64 **)(v4 + 20);
    if ( v6 )
    {
      sub_119C884((void **)&v14, (const char *)&unk_257BC67);
      Json::Value::asString(&v15, (int)v5, &v14);
      v3 = NameRegistry::getNameId(v6, (int **)&v15);
      v7 = (void *)(v15 - 12);
      if ( (int *)(v15 - 12) != &dword_28898C0 )
      {
        v10 = (unsigned int *)(v15 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v7);
      }
      v8 = (void *)(v14 - 12);
      if ( (int *)(v14 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v14 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v8);
    }
  }
  return v3;
}


void __fastcall UIResolvedDef::parseName(int *a1, int *a2, int *a3, void **a4, unsigned __int64 *a5)
{
  int *v5; // r4@1
  int *v6; // r6@1
  int *v7; // r8@1
  int *v8; // r7@1
  int *v9; // r0@1
  int *v10; // r0@1
  unsigned int v11; // r7@1
  void *v12; // r0@2
  _BYTE *v13; // r2@3
  unsigned int v14; // r6@9
  void *v15; // r0@10
  _BYTE *v16; // r2@11
  void *v17; // r0@14
  unsigned int *v18; // r2@16
  signed int v19; // r1@18
  unsigned int *v20; // r2@20
  signed int v21; // r1@22
  unsigned int *v22; // r2@24
  signed int v23; // r1@26
  int v24; // [sp+0h] [bp-28h]@10
  int v25; // [sp+4h] [bp-24h]@2
  int v26; // [sp+8h] [bp-20h]@1

  v5 = a2;
  v6 = (int *)a4;
  v7 = a3;
  v8 = a1;
  v9 = (int *)sub_119CAD8(a4, (char *)&unk_257BC67, 0);
  v10 = EntityInteraction::setInteractText(v7, v9);
  EntityInteraction::setInteractText(v5, v10);
  UIResolvedDef::_replaceVarsInRefString(&v26, v8, a5);
  v11 = sub_119CA58(&v26, "@", 0, 1u);
  if ( v11 == -1 )
  {
    EntityInteraction::setInteractText(v5, &v26);
  }
  else
    sub_119C8C4((void **)&v25, &v26, 0, v11);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v5, &v25);
    v12 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
    {
      v20 = (unsigned int *)(v25 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v12);
    }
    v13 = *(_BYTE **)(v26 - 12);
    if ( (unsigned int)v13 > v11 + 1 )
      v13 = (_BYTE *)(v11 + 1);
    sub_119CA68((const void **)&v26, 0, v13, 0);
    EntityInteraction::setInteractText(v6, &v26);
  if ( *(_DWORD *)(*v6 - 12) )
    v5 = v6;
  v14 = sub_119CA58(v5, ".", 0, 1u);
  if ( v14 != -1 )
    sub_119C8C4((void **)&v24, v5, 0, v14);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v7, &v24);
    v15 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v24 - 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
    v16 = *(_BYTE **)(*v5 - 12);
    if ( (unsigned int)v16 > v14 + 1 )
      v16 = (_BYTE *)(v14 + 1);
    sub_119CA68((const void **)v5, 0, v16, 0);
  v17 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v26 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
}


void __fastcall UIResolvedDef::getAsStringVector(int a1, int a2, int **a3, unsigned __int64 *a4)
{
  int v4; // r10@1
  unsigned __int64 *v5; // r4@1
  Json::Value *v6; // r9@1
  int v7; // r5@2
  __int64 v8; // kr00_8@2
  unsigned int v9; // r1@2
  int v10; // r8@6
  _DWORD *v11; // r7@7
  unsigned int *v12; // r2@8
  signed int v13; // r6@10
  int *v14; // r0@15
  void *v15; // r0@18
  const Json::Value *v16; // r7@20
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  unsigned int *v19; // r2@25
  signed int v20; // r1@27
  int v21; // r8@37
  void *v22; // r0@37
  void *v23; // r0@38
  unsigned int *v24; // r2@41
  signed int v25; // r1@43
  int v26; // [sp+14h] [bp-5Ch]@25
  char v27; // [sp+18h] [bp-58h]@37
  char v28; // [sp+28h] [bp-48h]@37
  int v29; // [sp+3Ch] [bp-34h]@21
  int v30; // [sp+44h] [bp-2Ch]@2

  v4 = a1;
  v5 = a4;
  v6 = UIResolvedDef::getValue(a2, a3, 0);
  if ( Json::Value::isArray(v6) == 1 )
  {
    *(_DWORD *)v4 = 0;
    *(_DWORD *)(v4 + 4) = 0;
    *(_DWORD *)(v4 + 8) = 0;
    v7 = Json::Value::size(v6);
    sub_119C884((void **)&v30, (const char *)&unk_257BC67);
    v8 = *(_QWORD *)v4;
    v9 = (HIDWORD(v8) - (signed int)v8) >> 2;
    if ( v7 <= v9 )
    {
      if ( v7 < v9 )
      {
        v10 = v8 + 4 * v7;
        if ( HIDWORD(v8) != v10 )
        {
          v11 = (_DWORD *)(v8 + 4 * v7);
          do
          {
            v14 = (int *)(*v11 - 12);
            if ( v14 != &dword_28898C0 )
            {
              v12 = (unsigned int *)(*v11 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v13 = __ldrex(v12);
                while ( __strex(v13 - 1, v12) );
              }
              else
                v13 = (*v12)--;
              if ( v13 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v14);
            }
            ++v11;
          }
          while ( v11 != (_DWORD *)HIDWORD(v8) );
        }
        *(_DWORD *)(v4 + 4) = v10;
      }
    }
    else
      std::vector<std::string,std::allocator<std::string>>::_M_fill_insert(v4, (int *)HIDWORD(v8), v7 - v9, &v30);
    v15 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v30 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
      else
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
    if ( v7 >= 1 )
      v16 = 0;
      do
        v21 = *(_DWORD *)v4;
        Json::Value::Value((Json::Value *)&v27, (const char *)&unk_257BC67);
        Json::Value::get((Json::Value *)&v28, (unsigned int)v6, v16, (const Json::Value *)&v27);
        sub_119C884((void **)&v26, (const char *)&unk_257BC67);
        Json::Value::asString(&v29, (int)&v28, &v26);
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
          (int *)(v21 + 4 * (_DWORD)v16),
          &v29);
        v22 = (void *)(v29 - 12);
        if ( (int *)(v29 - 12) != &dword_28898C0 )
          v17 = (unsigned int *)(v29 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
          else
            v18 = (*v17)--;
          if ( v18 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v22);
        v23 = (void *)(v26 - 12);
        if ( (int *)(v26 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v26 - 4);
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v23);
        Json::Value::~Value((Json::Value *)&v28);
        Json::Value::~Value((Json::Value *)&v27);
        v16 = (const Json::Value *)((char *)v16 + 1);
      while ( (signed int)v16 < v7 );
  }
  else
    std::vector<std::string,std::allocator<std::string>>::vector(v4, v5);
}


Json::Value *__fastcall UIResolvedDef::getAsPropertyBag(UIPropertyBag **a1, int a2, int **a3, UIPropertyBag **a4)
{
  UIResolvedDef *v4; // r5@1
  UIPropertyBag **v5; // r8@1
  UIPropertyBag **v6; // r6@1
  Json::Value *v7; // r0@1
  Json::Value *v8; // r0@1
  const Json::Value *v9; // r0@5
  int v10; // r4@5
  const Json::Value *v11; // r0@5
  UIPropertyBag *v12; // r0@6
  UIPropertyBag *v13; // r5@7
  int v15; // [sp+0h] [bp-38h]@3
  char v16; // [sp+8h] [bp-30h]@3
  char v17; // [sp+10h] [bp-28h]@1

  v4 = (UIResolvedDef *)a2;
  v5 = a1;
  v6 = a4;
  v7 = UIResolvedDef::getValue(a2, a3, 0);
  v8 = Json::Value::Value((Json::Value *)&v17, v7);
  if ( Json::Value::isNull(v8) || Json::Value::isObject((Json::Value *)&v17) != 1 )
  {
    v12 = *v6;
    *v6 = 0;
    *v5 = v12;
  }
  else
    Json::Value::begin((Json::Value *)&v16, (int)&v17);
    Json::Value::end((Json::Value *)&v15, (int)&v17);
    while ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v16, (const Json::ValueIteratorBase *)&v15) != 1 )
    {
      v9 = (const Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v16);
      v10 = (int)v9;
      v11 = (const Json::Value *)UIResolvedDef::_evaluate(v4, v9, 0);
      Json::Value::operator=(v10, v11);
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v16);
    }
    v13 = (UIPropertyBag *)operator new(0x28u);
    UIPropertyBag::UIPropertyBag(v13, (const Json::Value *)&v17);
    *v5 = v13;
  return Json::Value::~Value((Json::Value *)&v17);
}


signed int __fastcall UIResolvedDef::getAsFontSize(int a1, int **a2, signed int a3)
{
  signed int v3; // r7@1
  Json::Value *v4; // r5@1
  void *v5; // r0@2
  signed int v6; // r6@6
  int v7; // r5@6
  void *v8; // r0@11
  unsigned int *v10; // r2@15
  signed int v11; // r1@17
  unsigned int *v12; // r2@19
  signed int v13; // r1@21
  int v14; // [sp+4h] [bp-2Ch]@2
  int v15; // [sp+8h] [bp-28h]@2

  v3 = a3;
  v4 = UIResolvedDef::getValue(a1, a2, 0);
  if ( Json::Value::isString(v4) == 1 )
  {
    sub_119C884((void **)&v14, (const char *)&unk_257BC67);
    Json::Value::asString(&v15, (int)v4, &v14);
    v5 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v14 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v5);
    }
    if ( sub_119C9E8((const void **)&v15, "small") )
      if ( sub_119C9E8((const void **)&v15, "normal") )
        if ( sub_119C9E8((const void **)&v15, "large") )
        {
          v6 = 3;
          v7 = sub_119C9E8((const void **)&v15, "extra_large") != 0;
        }
        else
          v7 = 0;
          v6 = 2;
        v7 = 0;
        v6 = 1;
    else
      v6 = 0;
      v7 = 0;
    v8 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v15 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v8);
    if ( v7 == 1 )
      v6 = v3;
  }
  else
    v6 = v3;
  return v6;
}


void __fastcall UIResolvedDef::getAsStringVector(int a1, int a2, int **a3, unsigned __int64 *a4)
{
  UIResolvedDef::getAsStringVector(a1, a2, a3, a4);
}


Json::Value *__fastcall UIResolvedDef::getAsSliceSize(int a1, int a2, int **a3, int a4)
{
  int v4; // r4@1
  int v5; // r6@1
  Json::Value *v6; // r5@1
  int v7; // r1@1
  int v13; // r8@2
  int v14; // r7@2
  int v15; // r6@2
  Json::Value *result; // r0@2
  int v18; // r0@4
  int v19; // r1@5
  int v20; // r2@5
  int v21; // r3@5
  float v22; // [sp+0h] [bp-78h]@0
  char v23; // [sp+8h] [bp-70h]@2
  char v24; // [sp+18h] [bp-60h]@2
  char v25; // [sp+28h] [bp-50h]@2
  char v26; // [sp+38h] [bp-40h]@2
  char v27; // [sp+48h] [bp-30h]@2

  v4 = a1;
  v5 = a4;
  v6 = UIResolvedDef::getValue(a2, a3, 0);
  if ( Json::Value::isArray(v6) == 1 )
  {
    __asm
    {
      VLDR            D0, =0.0
      VMOV            R2, R3, D0
    }
    Json::Value::Value((Json::Value *)&v27, v7, _R2);
    Json::Value::get((Json::Value *)&v26, (unsigned int)v6, 0, (const Json::Value *)&v27);
    v13 = Json::Value::asFloat((Json::Value *)&v26, 0.0);
    Json::Value::~Value((Json::Value *)&v26);
    Json::Value::get((Json::Value *)&v25, (unsigned int)v6, (const Json::Value *)1, (const Json::Value *)&v27);
    v14 = Json::Value::asFloat((Json::Value *)&v25, 0.0);
    Json::Value::~Value((Json::Value *)&v25);
    Json::Value::get((Json::Value *)&v24, (unsigned int)v6, (const Json::Value *)2, (const Json::Value *)&v27);
    v15 = Json::Value::asFloat((Json::Value *)&v24, 0.0);
    Json::Value::~Value((Json::Value *)&v24);
    Json::Value::get((Json::Value *)&v23, (unsigned int)v6, (const Json::Value *)3, (const Json::Value *)&v27);
    _R0 = Json::Value::asFloat((Json::Value *)&v23, 0.0);
    __asm { VMOV            S16, R0 }
    Json::Value::~Value((Json::Value *)&v23);
    __asm { VSTR            S16, [SP,#0x78+var_78] }
    ui::SliceSize::SliceSize((ui::SliceSize *)v4, *(float *)&v13, *(float *)&v14, *(float *)&v15, v22);
    result = Json::Value::~Value((Json::Value *)&v27);
  }
  else if ( Json::Value::isNumeric(v6) == 1 )
    v18 = Json::Value::asFloat(v6, 0.0);
    result = (Json::Value *)ui::SliceSize::SliceSize(
                              (ui::SliceSize *)v4,
                              *(float *)&v18,
                              *(float *)&v18);
  else
    result = *(Json::Value **)v5;
    v19 = *(_DWORD *)(v5 + 4);
    v20 = *(_DWORD *)(v5 + 8);
    v21 = *(_DWORD *)(v5 + 12);
    *(_DWORD *)v4 = *(_DWORD *)v5;
    *(_DWORD *)(v4 + 4) = v19;
    *(_DWORD *)(v4 + 8) = v20;
    *(_DWORD *)(v4 + 12) = v21;
  return result;
}


signed int __fastcall UIResolvedDef::getAsToggleManagerBehavior(int a1, int **a2, signed int a3)
{
  signed int v3; // r7@1
  Json::Value *v4; // r5@1
  void *v5; // r0@2
  signed int v6; // r6@6
  int v7; // r5@6
  void *v8; // r0@11
  unsigned int *v10; // r2@15
  signed int v11; // r1@17
  unsigned int *v12; // r2@19
  signed int v13; // r1@21
  int v14; // [sp+4h] [bp-2Ch]@2
  int v15; // [sp+8h] [bp-28h]@2

  v3 = a3;
  v4 = UIResolvedDef::getValue(a1, a2, 0);
  if ( Json::Value::isString(v4) == 1 )
  {
    sub_119C884((void **)&v14, (const char *)&unk_257BC67);
    Json::Value::asString(&v15, (int)v4, &v14);
    v5 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v14 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v5);
    }
    if ( sub_119C9E8((const void **)&v15, "clear") )
      if ( sub_119C9E8((const void **)&v15, "select") )
        if ( sub_119C9E8((const void **)&v15, "gather") )
        {
          v6 = 3;
          v7 = sub_119C9E8((const void **)&v15, "default") != 0;
        }
        else
          v7 = 0;
          v6 = 2;
        v7 = 0;
        v6 = 1;
    else
      v6 = 0;
      v7 = 0;
    v8 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v15 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v8);
    if ( v7 == 1 )
      v6 = v3;
  }
  else
    v6 = v3;
  return v6;
}


int *__fastcall UIResolvedDef::_replaceVarsInRefString(int *a1, int *a2, unsigned __int64 *a3)
{
  int *v3; // r6@1
  int *v4; // r7@1
  int v5; // r0@3
  int v6; // r3@3
  unsigned int v7; // r9@4
  int v8; // r4@4
  char v9; // r1@4
  int v10; // r11@5
  bool v11; // zf@8
  void *v12; // r0@13
  void *v13; // r0@14
  int *v14; // r0@16
  int v15; // r1@16 OVERLAPPED
  int v16; // r10@16
  unsigned int v17; // r2@16
  int v18; // r0@19
  unsigned int *v19; // r2@25
  signed int v20; // r1@27
  unsigned int *v21; // r2@29
  signed int v22; // r1@31
  int *result; // r0@43
  void *v24; // r0@46
  void *v25; // r0@47
  unsigned int *v26; // r2@49
  signed int v27; // r1@51
  unsigned int *v28; // r2@53
  signed int v29; // r1@55
  unsigned __int64 *v30; // [sp+8h] [bp-40h]@1
  int v31; // [sp+Ch] [bp-3Ch]@46
  int v32; // [sp+10h] [bp-38h]@46
  int v33; // [sp+14h] [bp-34h]@13
  int v34; // [sp+18h] [bp-30h]@13
  int *v35; // [sp+1Ch] [bp-2Ch]@3

  v3 = a2;
  v4 = a1;
  v30 = a3;
  if ( a3 && sub_119C8B4(a2, 36, 0) != (char *)-1 )
  {
    v35 = (int *)&unk_28898CC;
    v5 = *v3;
    v6 = *(_DWORD *)(*v3 - 12);
    if ( v6 >= 1 )
    {
      v7 = -1;
      v8 = 0;
      v9 = 1;
      do
      {
        v10 = *(_BYTE *)(v5 + v8);
        if ( v9 & 1 )
        {
          if ( v10 == 36 )
          {
            v7 = v8;
          }
          else
            v14 = v35;
            *(_QWORD *)&v15 = *(_QWORD *)(v35 - 3);
            v16 = v15 + 1;
            if ( v15 + 1 > v17 || *(v35 - 1) >= 1 )
            {
              sub_119CAF8((const void **)&v35, v15 + 1);
              v14 = v35;
              v15 = *(v35 - 3);
            }
            *((_BYTE *)v14 + v15) = v10;
            v18 = (int)v35;
            if ( v35 - 3 == &dword_28898C0 )
              v7 = -1;
            else
              *(v35 - 1) = 0;
              *(_DWORD *)(v18 - 12) = v16;
              *(_BYTE *)(v18 + v16) = byte_26C67B8[0];
        }
        else
          v11 = v10 == 64;
          if ( v10 != 64 )
            v11 = v10 == 36;
          if ( v11 )
            if ( v6 < v7 )
              sub_119CA78("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v7, v6);
            sub_119C8C4((void **)&v33, v3, v7, v8 - v7);
            sub_DBAA50(&v34, &v33, v30);
            sub_119C8A4((const void **)&v35, (const void **)&v34);
            v12 = (void *)(v34 - 12);
            if ( (int *)(v34 - 12) != &dword_28898C0 )
              v19 = (unsigned int *)(v34 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v20 = __ldrex(v19);
                while ( __strex(v20 - 1, v19) );
              }
              else
                v20 = (*v19)--;
              if ( v20 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v12);
            v13 = (void *)(v33 - 12);
            if ( (int *)(v33 - 12) != &dword_28898C0 )
              v21 = (unsigned int *)(v33 - 4);
                  v22 = __ldrex(v21);
                while ( __strex(v22 - 1, v21) );
                v22 = (*v21)--;
              if ( v22 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v13);
            --v8;
            v7 = -1;
        v5 = *v3;
        v9 = 0;
        ++v8;
        if ( v7 == -1 )
          v9 = 1;
        v6 = *(_DWORD *)(v5 - 12);
      }
      while ( v8 < v6 );
      if ( v7 != -1 )
        if ( v6 < v7 )
          sub_119CA78("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v7, v6);
        sub_119C8C4((void **)&v31, v3, v7, 0xFFFFFFFF);
        sub_DBAA50(&v32, &v31, v30);
        sub_119C8A4((const void **)&v35, (const void **)&v32);
        v24 = (void *)(v32 - 12);
        if ( (int *)(v32 - 12) != &dword_28898C0 )
          v26 = (unsigned int *)(v32 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v27 = __ldrex(v26);
            while ( __strex(v27 - 1, v26) );
            v27 = (*v26)--;
          if ( v27 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v24);
        v25 = (void *)(v31 - 12);
        if ( (int *)(v31 - 12) != &dword_28898C0 )
          v28 = (unsigned int *)(v31 - 4);
              v29 = __ldrex(v28);
            while ( __strex(v29 - 1, v28) );
            v29 = (*v28)--;
          if ( v29 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v25);
    }
    result = v35;
    *v4 = (int)v35;
  }
  else
    result = sub_119C854(v4, v3);
  return result;
}


int __fastcall UIResolvedDef::getAsPropetyEvaluation(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, char a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, char a24)
{
  return UIResolvedDef::getAsPropetyEvaluation(
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
           a24);
}


void __fastcall UIResolvedDef::parseName(int *a1, int *a2, int *a3, void **a4, unsigned __int64 *a5)
{
  UIResolvedDef::parseName(a1, a2, a3, a4, a5);
}


void __fastcall UIResolvedDef::getAsString(int *a1, int a2, int **a3, int *a4)
{
  int *v4; // r4@1
  int *v5; // r6@1
  Json::Value *v6; // r5@1
  void *v7; // r0@2
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  int v10; // [sp+4h] [bp-1Ch]@2

  v4 = a1;
  v5 = a4;
  v6 = UIResolvedDef::getValue(a2, a3, 0);
  if ( Json::Value::isString(v6) == 1 )
  {
    sub_119C884((void **)&v10, (const char *)&unk_257BC67);
    Json::Value::asString(v4, (int)v6, &v10);
    v7 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v10 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v7);
    }
  }
  else
    sub_119C854(v4, v5);
}


int __fastcall UIResolvedDef::UIResolvedDef(int a1, int a2)
{
  int v2; // r7@1
  int v3; // r5@1
  int *v4; // r4@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r3@1
  int v8; // r0@1

  v2 = a2;
  v3 = a1;
  v4 = (int *)(a2 + 8);
  *(_BYTE *)a1 = *(_BYTE *)a2;
  sub_119C854((int *)(a1 + 4), (int *)(a2 + 4));
  sub_119C854((int *)(v3 + 8), v4);
  v5 = *(_DWORD *)(v2 + 16);
  v6 = *(_DWORD *)(v2 + 20);
  v7 = v3 + 12;
  *(_DWORD *)v7 = *(_DWORD *)(v2 + 12);
  *(_DWORD *)(v7 + 4) = v5;
  *(_DWORD *)(v7 + 8) = v6;
  Json::Value::Value((Json::Value *)(v3 + 24), (const Json::Value *)(v2 + 24));
  *(_DWORD *)(v3 + 40) = *(_DWORD *)(v2 + 40);
  *(_DWORD *)(v3 + 44) = 0;
  v8 = v3 + 44;
  *(_DWORD *)(v8 + 4) = *(_DWORD *)(v2 + 48);
  *(_DWORD *)(v8 + 8) = 0;
  *(_DWORD *)(v8 + 12) = *(_DWORD *)(v2 + 56);
  *(_QWORD *)(v8 + 16) = *(_QWORD *)(v2 + 60);
  std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_assign<std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::(std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>> const&)::{lambda(std::__detail::_Hash_node<std::string,true> const*)#1}>(
    (unsigned int *)(v3 + 44),
    v2 + 44);
  return v3;
}
