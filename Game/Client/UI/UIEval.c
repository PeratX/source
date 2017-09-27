

void __fastcall UIEval::evalExpression(int a1, int a2, __int64 a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, char a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, char a29, int a30, int a31, int a32, char a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, char a47, int a48, int a49, int a50, void *a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int a62, char a63)
{
  UIEval::evalExpression(
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


Json::Value *__fastcall UIEval::evalVariable(const char **a1, unsigned __int64 *a2, int a3)
{
  const char **v3; // r5@1
  unsigned __int64 *v4; // r9@1
  const char *v5; // r0@1
  int v6; // r7@1
  Json::Value *v7; // r6@3
  int i; // r0@4
  int v9; // r4@4
  int v10; // t1@7
  void **v11; // r0@9
  int *v13; // r0@13
  void *v14; // r0@13
  int v15; // r7@15
  unsigned int *v16; // r2@19
  signed int v17; // r1@21
  int v18; // t1@27
  void *v19; // r0@27
  unsigned int *v20; // r2@31
  signed int v21; // r1@33
  int v22; // [sp+4h] [bp-44h]@19
  int v23; // [sp+8h] [bp-40h]@13

  v3 = a1;
  v4 = a2;
  v5 = *a1;
  v6 = a3;
  if ( !*((_DWORD *)v5 - 3) )
  {
    v11 = &Json::Value::null;
    return (Json::Value *)*v11;
  }
  if ( *v5 != 36 )
  v7 = (Json::Value *)Json::Value::operator[](a3, v3);
  if ( Json::Value::isNull(v7) == 1 )
    v9 = *v4 >> 32;
    for ( i = *v4; v9 != i; i = *(_DWORD *)v4 )
    {
      v10 = *(_DWORD *)(v9 - 4);
      v9 -= 4;
      v7 = (Json::Value *)Json::Value::operator[](v10, v3);
      if ( Json::Value::isNull(v7) != 1 )
        return v7;
    }
    v13 = sub_119C854(&v23, (int *)v3);
    sub_119C894((const void **)v13, "|default", 8u);
    v7 = (Json::Value *)Json::Value::operator[](v6, (const char **)&v23);
    v14 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v23 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v14);
    if ( Json::Value::isNull(v7) )
      v15 = *v4 >> 32;
      if ( v15 != (unsigned int)*v4 )
        while ( 1 )
        {
          v18 = *(_DWORD *)(v15 - 4);
          v15 -= 4;
          sub_119C854(&v22, (int *)v3);
          sub_119C894((const void **)&v22, "|default", 8u);
          v7 = (Json::Value *)Json::Value::operator[](v18, (const char **)&v22);
          v19 = (void *)(v22 - 12);
          if ( (int *)(v22 - 12) != &dword_28898C0 )
          {
            v16 = (unsigned int *)(v22 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v17 = __ldrex(v16);
              while ( __strex(v17 - 1, v16) );
            }
            else
              v17 = (*v16)--;
            if ( v17 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v19);
          }
          if ( !Json::Value::isNull(v7) )
            break;
          if ( v15 == *(_DWORD *)v4 )
            return (Json::Value *)&Json::Value::null;
        }
      v11 = &Json::Value::null;
      return (Json::Value *)*v11;
  return v7;
}


void __fastcall UIEval::evalExpression(int a1, int a2, __int64 a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, char a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, char a29, int a30, int a31, int a32, char a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, char a47, int a48, int a49, int a50, void *a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int a62, char a63)
{
  int v63; // r8@1
  int *v64; // r7@1
  int v65; // r0@1
  int v66; // r3@1
  const Json::Value *v67; // r10@2
  unsigned int v68; // r11@2
  signed int v69; // r9@2
  unsigned int v70; // r6@2
  int v71; // r1@3
  _QWORD *v72; // r0@6
  bool v73; // zf@8
  signed int v74; // r2@11
  unsigned int v75; // r7@13
  char v76; // r7@15
  unsigned int v77; // r4@15
  unsigned int v78; // r7@17
  int v79; // r4@23
  int *v80; // r7@23
  Json::Value *v81; // r0@24
  __int64 v82; // kr00_8@26
  unsigned int v83; // r0@27
  char *v84; // r2@27
  int v85; // r1@27
  unsigned int v86; // r7@27
  int v87; // r3@30
  int v88; // r1@30
  int v89; // r2@30
  int v90; // r0@30
  int v91; // r1@32
  char v92; // r0@34
  _BYTE *v93; // r0@41
  int v94; // r4@44
  char *v95; // r11@44
  int v96; // r0@44
  int v97; // r6@44
  int v98; // r1@44
  signed int v99; // r0@44
  unsigned int v100; // r7@44
  int v101; // r2@44
  int v102; // r10@47
  char v103; // r7@47
  void *v104; // r2@47
  void *v105; // r0@52
  int v106; // r1@54
  void *v107; // r3@54
  unsigned int v108; // r6@54
  void *v109; // r2@54
  __int64 v110; // kr18_8@57
  __int64 v111; // r0@58
  char *v112; // r2@58
  signed int v113; // r0@58
  unsigned int v114; // r7@58
  int v115; // r3@61
  int v116; // r1@61
  int v117; // r2@61
  int v118; // r0@61
  int v119; // r1@65
  char v120; // r0@67
  unsigned int *v121; // r2@79
  signed int v122; // r1@81
  unsigned int v123; // r3@93
  int v124; // r4@94
  Json::Value *v125; // r0@95
  __int64 v126; // kr20_8@97
  __int64 v127; // r0@98
  char *v128; // r2@98
  signed int v129; // r0@98
  unsigned int v130; // r7@98
  int v131; // r3@101
  int v132; // r1@101
  int v133; // r2@101
  int v134; // r0@101
  int v135; // r1@103
  char v136; // r0@105
  _BYTE *v137; // r0@110
  int v138; // r6@111
  void *v139; // r4@111
  void **v140; // r5@112
  unsigned int *v141; // r2@121
  signed int v142; // r1@123
  __int64 v143; // [sp+1Ch] [bp-12Ch]@1
  int *v144; // [sp+30h] [bp-118h]@1
  _BYTE *v145; // [sp+34h] [bp-114h]@94
  char v146; // [sp+38h] [bp-110h]@95
  __int64 v147; // [sp+48h] [bp-100h]@98
  char v148; // [sp+54h] [bp-F4h]@101
  int v149; // [sp+58h] [bp-F0h]@101
  int v150; // [sp+5Ch] [bp-ECh]@101
  int v151; // [sp+60h] [bp-E8h]@101
  char v152; // [sp+68h] [bp-E0h]@54
  void *v153; // [sp+78h] [bp-D0h]@54
  int v154; // [sp+7Ch] [bp-CCh]@54
  char *v155; // [sp+80h] [bp-C8h]@54
  char v156; // [sp+84h] [bp-C4h]@57
  int v157; // [sp+88h] [bp-C0h]@57
  int v158; // [sp+8Ch] [bp-BCh]@57
  int v159; // [sp+90h] [bp-B8h]@57
  char *v160; // [sp+98h] [bp-B0h]@44
  char *v161; // [sp+9Ch] [bp-ACh]@44
  char *v162; // [sp+A0h] [bp-A8h]@44
  char v163; // [sp+A4h] [bp-A4h]@47
  char v164; // [sp+A8h] [bp-A0h]@47
  void *v165; // [sp+B8h] [bp-90h]@47
  void *v166; // [sp+BCh] [bp-8Ch]@47
  char *v167; // [sp+C0h] [bp-88h]@47
  char v168; // [sp+C4h] [bp-84h]@50
  int v169; // [sp+C8h] [bp-80h]@50
  int v170; // [sp+CCh] [bp-7Ch]@50
  int v171; // [sp+D0h] [bp-78h]@50
  _BYTE *v172; // [sp+DCh] [bp-6Ch]@23
  char v173; // [sp+E0h] [bp-68h]@2
  void *ptr; // [sp+F0h] [bp-58h]@27
  int v175; // [sp+F4h] [bp-54h]@27
  char v176; // [sp+FCh] [bp-4Ch]@30
  int v177; // [sp+100h] [bp-48h]@30
  int v178; // [sp+104h] [bp-44h]@30
  int v179; // [sp+108h] [bp-40h]@30
  void *v180; // [sp+114h] [bp-34h]@1
  _QWORD *v181; // [sp+118h] [bp-30h]@1
  _QWORD *v182; // [sp+11Ch] [bp-2Ch]@1

  v63 = a1;
  v64 = (int *)a2;
  v143 = a3;
  v144 = (int *)a2;
  v180 = 0;
  v181 = 0;
  v182 = 0;
  j__ZNSt6vectorI12UiExpressionSaIS0_EE19_M_emplace_back_auxIJEEEvDpOT_((unsigned __int64 *)&v180);
  v65 = *v64;
  v66 = *(_DWORD *)(*v64 - 12);
  if ( v66 < 1 )
    goto LABEL_111;
  v67 = (const Json::Value *)&v173;
  v68 = 1835051;
  v69 = 0;
  v70 = 0;
  while ( 1 )
  {
    v71 = *(_BYTE *)(v65 + v70);
    if ( v70 == v69 )
    {
      if ( (v71 | 8) == 40 )
      {
        if ( *(_BYTE *)(v65 + v69) == 40 )
        {
          v72 = v181;
          if ( v181 == v182 )
          {
            j__ZNSt6vectorI12UiExpressionSaIS0_EE19_M_emplace_back_auxIJEEEvDpOT_((unsigned __int64 *)&v180);
          }
          else
            *v181 = 0LL;
            *((_DWORD *)v72 + 2) = 0;
            *((_DWORD *)v72 + 3) = 0;
            *((_BYTE *)v72 + 12) = 1;
            v181 = v72 + 2;
        }
        v70 = v69++ + 1;
      }
      else
        v70 = v69++;
      goto LABEL_75;
    }
    v73 = v71 == 39;
    if ( v71 != 39 )
      v73 = v71 == 34;
    if ( v73 )
      ++v69;
      v74 = 0;
    else
      v74 = 1;
    v75 = (unsigned __int8)(v71 - 42);
    if ( v75 <= 0x14 && (v68 >> v75) & 1 )
      goto LABEL_132;
    v76 = *(_BYTE *)(v65 + v69);
    v77 = (unsigned __int8)(v76 - 32);
    if ( v77 >= 0xA || !((0x311u >> v77) & 1) )
      v78 = (unsigned __int8)(v76 - 42);
      if ( v78 >= 0x15 || !((v68 >> v78) & 1) )
        v69 += v74;
LABEL_63:
        v64 = v144;
        goto LABEL_75;
    if ( v71 != 41 )
LABEL_132:
      if ( v66 < v70 )
        sub_119CA78("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v70, v66);
      v79 = (int)v181;
      v80 = v144;
      sub_119C8C4((void **)&v172, v144, v70, v69 - v70);
      if ( *v172 == 36 )
        v81 = UIEval::evalVariable((const char **)&v172, (unsigned __int64 *)v143, SHIDWORD(v143));
        createTokenFromUIDefVal(v67, v81);
        ExprToken::ExprToken(v67, (const void **)&v172, 1);
      v82 = *(_QWORD *)(v79 - 12);
      if ( (_DWORD)v82 == HIDWORD(v82) )
        std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<ExprToken&>(
          (__int64 *)(v79 - 16),
          (int)v67);
        v90 = *(_DWORD *)(v79 - 12);
        Json::Value::Value((Json::Value *)v82, v67);
        v83 = v175 - (_DWORD)ptr;
        v73 = v175 == (_DWORD)ptr;
        v84 = 0;
        v85 = (v175 - (signed int)ptr) >> 4;
        *(_DWORD *)(v82 + 16) = 0;
        *(_DWORD *)(v82 + 20) = 0;
        v86 = -1431655765 * v85;
        *(_DWORD *)(v82 + 24) = 0;
        if ( !v73 )
          if ( v86 >= 0x5555556 )
            sub_119C874();
          v84 = (char *)operator new(v83);
        *(_DWORD *)(v82 + 16) = v84;
        *(_DWORD *)(v82 + 20) = v84;
        *(_DWORD *)(v82 + 24) = &v84[48 * v86];
        *(_DWORD *)(v82 + 20) = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ExprToken const*,std::vector<ExprToken,std::allocator<ExprToken>>>,ExprToken*>(
                                  (int)ptr,
                                  v175,
                                  (int)v84);
        v87 = v82 + 32;
        v80 = v144;
        *(_BYTE *)(v82 + 28) = v176;
        v88 = v178;
        v89 = v179;
        *(_DWORD *)v87 = v177;
        *(_DWORD *)(v87 + 4) = v88;
        *(_DWORD *)(v87 + 8) = v89;
        v90 = *(_DWORD *)(v79 - 12) + 48;
        *(_DWORD *)(v79 - 12) = v90;
      v91 = *(_DWORD *)(v90 - 8);
      if ( v91 == 4 )
        v92 = *(_BYTE *)(v90 - 20);
        if ( v91 != 5 )
LABEL_39:
          std::_Destroy<ExprToken *,ExprToken>((int)ptr, v175, (int)&ptr);
          if ( ptr )
            operator delete(ptr);
          Json::Value::~Value(v67);
          v93 = v172 - 12;
          if ( (int *)(v172 - 12) != &dword_28898C0 )
            v121 = (unsigned int *)(v172 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v122 = __ldrex(v121);
              while ( __strex(v122 - 1, v121) );
            }
            else
              v122 = (*v121)--;
            if ( v122 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v93);
          v65 = *v80;
          goto LABEL_43;
        v92 = 0;
      *(_BYTE *)(v79 - 4) = v92;
      goto LABEL_39;
LABEL_43:
    if ( *(_BYTE *)(v65 + v69) != 41 )
      v70 = v69;
      goto LABEL_63;
    v94 = (int)v181;
    v95 = 0;
    v97 = (int)(v181 - 2);
    v96 = *((_DWORD *)v181 - 4);
    v98 = *((_DWORD *)v181 - 3);
    v160 = 0;
    v161 = 0;
    v99 = v98 - v96;
    v162 = 0;
    v100 = -1431655765 * (v99 >> 4);
    v101 = v98;
    if ( v99 )
      if ( v100 >= 0x5555556 )
        sub_119C874();
      v95 = (char *)operator new(v99);
      v98 = *(_QWORD *)(v94 - 16) >> 32;
      v101 = *(_QWORD *)(v94 - 16);
    v160 = v95;
    v161 = v95;
    v162 = &v95[48 * v100];
    v102 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ExprToken const*,std::vector<ExprToken,std::allocator<ExprToken>>>,ExprToken*>(
             v101,
             v98,
             (int)v95);
    v161 = (char *)v102;
    v103 = *(_BYTE *)(v94 - 4);
    v163 = *(_BYTE *)(v94 - 4);
    Json::Value::Value(&v164, 0);
    v104 = 0;
    v165 = 0;
    v166 = 0;
    v167 = 0;
    if ( (char *)v102 != v95 )
      if ( (unsigned int)(-1431655765 * ((v102 - (signed int)v95) >> 4)) >= 0x5555556 )
      v104 = operator new(v102 - (_DWORD)v95);
    v165 = v104;
    v166 = v104;
    v167 = (char *)v104 + 16 * ((v102 - (signed int)v95) >> 4);
    v166 = (void *)std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ExprToken const*,std::vector<ExprToken,std::allocator<ExprToken>>>,ExprToken*>(
                     (int)v95,
                     v102,
                     (int)v104);
    v168 = v103;
    v169 = 0;
    v170 = 0;
    v171 = 4;
    std::_Destroy<ExprToken *,ExprToken>((int)v95, v102, (int)&v160);
    if ( v95 )
      operator delete(v95);
    v181 = (_QWORD *)v97;
    std::_Destroy<ExprToken *,ExprToken>(*(_QWORD *)(v94 - 16), *(_QWORD *)(v94 - 16) >> 32, v97);
    v105 = *(void **)(v94 - 16);
    v67 = (const Json::Value *)&v173;
    if ( v105 )
      operator delete(v105);
    Json::Value::Value((Json::Value *)&v152, (const Json::Value *)&v164);
    v68 = 1835051;
    v106 = (int)v166;
    v107 = v166;
    v108 = -1431655765 * (((_BYTE *)v166 - (_BYTE *)v165) >> 4);
    v109 = 0;
    v153 = 0;
    v154 = 0;
    v155 = 0;
    if ( v166 != v165 )
      if ( v108 >= 0x5555556 )
      v109 = operator new((_BYTE *)v166 - (_BYTE *)v165);
      v106 = (int)v166;
      v107 = v165;
    v153 = v109;
    v154 = (int)v109;
    v155 = (char *)v109 + 48 * v108;
    v154 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ExprToken const*,std::vector<ExprToken,std::allocator<ExprToken>>>,ExprToken*>(
             (int)v107,
             v106,
             (int)v109);
    v156 = v168;
    v157 = v169;
    v158 = v170;
    v159 = v171;
    v110 = *(_QWORD *)(v94 - 28);
    if ( (_DWORD)v110 == HIDWORD(v110) )
      std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<ExprToken&>(
        (__int64 *)(v94 - 32),
        (int)&v152);
      v118 = *(_DWORD *)(v94 - 28);
      Json::Value::Value((Json::Value *)v110, (const Json::Value *)&v152);
      v111 = *(_QWORD *)&v153;
      v112 = 0;
      *(_DWORD *)(v110 + 16) = 0;
      *(_DWORD *)(v110 + 20) = 0;
      v113 = HIDWORD(v111) - v111;
      *(_DWORD *)(v110 + 24) = 0;
      v114 = -1431655765 * (v113 >> 4);
      if ( v113 )
        if ( v114 >= 0x5555556 )
          sub_119C874();
        v112 = (char *)operator new(v113);
      *(_DWORD *)(v110 + 16) = v112;
      *(_DWORD *)(v110 + 20) = v112;
      *(_DWORD *)(v110 + 24) = &v112[48 * v114];
      *(_DWORD *)(v110 + 20) = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ExprToken const*,std::vector<ExprToken,std::allocator<ExprToken>>>,ExprToken*>(
                                 (int)v153,
                                 v154,
                                 (int)v112);
      v115 = v110 + 32;
      *(_BYTE *)(v110 + 28) = v156;
      v116 = v158;
      v117 = v159;
      *(_DWORD *)v115 = v157;
      *(_DWORD *)(v115 + 4) = v116;
      *(_DWORD *)(v115 + 8) = v117;
      v118 = *(_DWORD *)(v94 - 28) + 48;
      *(_DWORD *)(v94 - 28) = v118;
    v119 = *(_DWORD *)(v118 - 8);
    v64 = v144;
    if ( v119 == 4 )
      v120 = *(_BYTE *)(v118 - 20);
      goto LABEL_69;
    if ( v119 == 5 )
      v120 = 0;
LABEL_69:
      *(_BYTE *)(v94 - 20) = v120;
    std::_Destroy<ExprToken *,ExprToken>((int)v153, v154, (int)&v153);
    if ( v153 )
      operator delete(v153);
    Json::Value::~Value((Json::Value *)&v152);
    std::_Destroy<ExprToken *,ExprToken>((int)v165, (int)v166, (int)&v165);
    v70 = v69 + 1;
    if ( v165 )
      operator delete(v165);
    Json::Value::~Value((Json::Value *)&v164);
    ++v69;
LABEL_75:
    v65 = *v64;
    if ( !*(_BYTE *)(*v64 + v69) && *(_BYTE *)(v69 + v65 - 1) != 41 )
      break;
    v66 = *(_DWORD *)(v65 - 12);
    if ( v69 >= v66 )
      goto LABEL_111;
  }
  v123 = *(_DWORD *)(v65 - 12);
  if ( v123 < v70 )
    sub_119CA78("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v70, v123);
  v124 = (int)v181;
  sub_119C8C4((void **)&v145, v64, v70, v69 - v70);
  if ( *v145 == 36 )
    v125 = UIEval::evalVariable((const char **)&v145, (unsigned __int64 *)v143, SHIDWORD(v143));
    createTokenFromUIDefVal((const Json::Value *)&v146, v125);
  else
    ExprToken::ExprToken(&v146, (const void **)&v145, 1);
  v126 = *(_QWORD *)(v124 - 12);
  if ( (_DWORD)v126 == HIDWORD(v126) )
    std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<ExprToken&>(
      (__int64 *)(v124 - 16),
      (int)&v146);
    v134 = *(_DWORD *)(v124 - 12);
    Json::Value::Value((Json::Value *)v126, (const Json::Value *)&v146);
    v127 = v147;
    v128 = 0;
    *(_DWORD *)(v126 + 16) = 0;
    *(_DWORD *)(v126 + 20) = 0;
    v129 = HIDWORD(v127) - v127;
    *(_DWORD *)(v126 + 24) = 0;
    v130 = -1431655765 * (v129 >> 4);
    if ( v129 )
      if ( v130 >= 0x5555556 )
      v128 = (char *)operator new(v129);
    *(_DWORD *)(v126 + 16) = v128;
    *(_DWORD *)(v126 + 20) = v128;
    *(_DWORD *)(v126 + 24) = &v128[48 * v130];
    *(_DWORD *)(v126 + 20) = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ExprToken const*,std::vector<ExprToken,std::allocator<ExprToken>>>,ExprToken*>(
                               v147,
                               SHIDWORD(v147),
                               (int)v128);
    v131 = v126 + 32;
    *(_BYTE *)(v126 + 28) = v148;
    v132 = v150;
    v133 = v151;
    *(_DWORD *)v131 = v149;
    *(_DWORD *)(v131 + 4) = v132;
    *(_DWORD *)(v131 + 8) = v133;
    v134 = *(_DWORD *)(v124 - 12) + 48;
    *(_DWORD *)(v124 - 12) = v134;
  v135 = *(_DWORD *)(v134 - 8);
  if ( v135 == 4 )
    v136 = *(_BYTE *)(v134 - 20);
LABEL_107:
    *(_BYTE *)(v124 - 4) = v136;
  else if ( v135 == 5 )
    v136 = 0;
    goto LABEL_107;
  std::_Destroy<ExprToken *,ExprToken>(v147, SHIDWORD(v147), (int)&v147);
  if ( (_DWORD)v147 )
    operator delete((void *)v147);
  Json::Value::~Value((Json::Value *)&v146);
  v137 = v145 - 12;
  if ( (int *)(v145 - 12) != &dword_28898C0 )
    v141 = (unsigned int *)(v145 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v142 = __ldrex(v141);
      while ( __strex(v142 - 1, v141) );
      v142 = (*v141)--;
    if ( v142 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v137);
LABEL_111:
  v138 = (int)v181;
  std::vector<ExprToken,std::allocator<ExprToken>>::vector(v63, v181 - 2);
  v139 = v180;
  *(_BYTE *)(v63 + 12) = *(_BYTE *)(v138 - 4);
  if ( v139 == (void *)v138 )
    v139 = (void *)v138;
LABEL_119:
    operator delete(v139);
    return;
  v140 = (void **)v139;
  do
    std::_Destroy<ExprToken *,ExprToken>(*(_QWORD *)v140, *(_QWORD *)v140 >> 32, (int)v140);
    if ( *v140 )
      operator delete(*v140);
    v140 += 4;
  while ( v140 != (void **)v138 );
  if ( v139 )
    goto LABEL_119;
}
