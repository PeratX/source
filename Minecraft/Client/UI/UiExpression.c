

int __fastcall UiExpression::addToken(int a1, const Json::Value *a2)
{
  int v2; // r4@1
  const Json::Value *v3; // r6@1
  __int64 v4; // kr00_8@1
  int v5; // r3@2
  int v6; // r1@2
  int v7; // r2@2
  int result; // r0@2
  int v9; // r1@4

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 4);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<ExprToken&>((__int64 *)a1, (int)a2);
    result = *(_DWORD *)(v2 + 4);
  }
  else
    Json::Value::Value((Json::Value *)v4, a2);
    std::vector<ExprToken,std::allocator<ExprToken>>::vector(v4 + 16, (unsigned __int64 *)v3 + 2);
    *(_BYTE *)(v4 + 28) = *((_BYTE *)v3 + 28);
    v5 = v4 + 32;
    v6 = *((_DWORD *)v3 + 9);
    v7 = *((_DWORD *)v3 + 10);
    *(_DWORD *)v5 = *((_DWORD *)v3 + 8);
    *(_DWORD *)(v5 + 4) = v6;
    *(_DWORD *)(v5 + 8) = v7;
    result = *(_DWORD *)(v2 + 4) + 48;
    *(_DWORD *)(v2 + 4) = result;
  v9 = *(_DWORD *)(result - 8);
  if ( v9 == 4 )
    result = *(_BYTE *)(result - 20);
    if ( v9 != 5 )
      return result;
    result = 0;
  *(_BYTE *)(v2 + 12) = result;
  return result;
}


void __fastcall UiExpression::updatePropertiesWithOverride(unsigned __int64 *a1, const void **a2)
{
  UiExpression::updatePropertiesWithOverride(a1, a2);
}


int __fastcall UiExpression::setStatic(int result, bool a2)
{
  *(_BYTE *)(result + 12) = a2;
  return result;
}


void __fastcall UiExpression::updatePropertiesWithOverride(unsigned __int64 *a1, const void **a2)
{
  int v2; // r6@2
  int v3; // r9@2
  int v4; // r4@2
  char *v5; // r7@2
  char *i; // r11@2
  signed int v7; // r8@5
  char *v8; // r5@5
  int v9; // r7@5
  unsigned int v10; // r0@5
  unsigned int v11; // r1@7
  unsigned int v12; // r4@7
  int v13; // r5@23
  int v14; // t1@23
  int v15; // r0@23
  __int64 v16; // r8@24
  signed int v17; // r7@27
  char *v18; // r6@27
  signed int v19; // r10@27
  unsigned int v20; // r0@27
  unsigned int v21; // r1@29
  unsigned int v22; // r4@29
  const void **v23; // [sp+Ch] [bp-5Ch]@1
  char v24; // [sp+10h] [bp-58h]@45
  void *ptr; // [sp+20h] [bp-48h]@45
  int v26; // [sp+24h] [bp-44h]@45

  v23 = a2;
  if ( *((_DWORD *)*a2 - 3) )
  {
    v3 = *a1 >> 32;
    v2 = *a1;
    v4 = 0;
    v5 = 0;
    for ( i = 0; v3 != v2; v5 += 4 )
    {
      if ( v5 == (char *)v4 )
      {
        v7 = v5 - i;
        v8 = 0;
        v9 = (v5 - i) >> 2;
        v10 = v9;
        if ( !(v7 >> 2) )
          v10 = 1;
        v11 = v10 + (v7 >> 2);
        v12 = v10 + (v7 >> 2);
        if ( 0 != v11 >> 30 )
          v12 = 0x3FFFFFFF;
        if ( v11 < v10 )
        if ( v12 )
        {
          if ( v12 >= 0x40000000 )
            sub_119C874();
          v8 = (char *)operator new(4 * v12);
        }
        *(_DWORD *)&v8[4 * v9] = v2;
        if ( v9 )
          _aeabi_memmove4(v8, i);
        v5 = &v8[4 * v9];
        if ( i )
          operator delete(i);
        v4 = (int)&v8[4 * v12];
        i = v8;
      }
      else
        *(_DWORD *)v5 = v2;
      v2 += 48;
    }
    if ( i != v5 )
      while ( 1 )
        v14 = *((_DWORD *)v5 - 1);
        v5 -= 4;
        v13 = v14;
        v15 = *(_DWORD *)(v14 + 40);
        if ( v15 != 4 )
          goto LABEL_44;
        v16 = *(_QWORD *)(v13 + 16);
        if ( (_DWORD)v16 != HIDWORD(v16) )
          break;
LABEL_48:
        if ( i == v5 )
          goto LABEL_49;
      do
        if ( v5 == (char *)v4 )
          v17 = v5 - i;
          v18 = 0;
          v19 = v17 >> 2;
          v20 = v17 >> 2;
          if ( !(v17 >> 2) )
            v20 = 1;
          v21 = v20 + (v17 >> 2);
          v22 = v20 + (v17 >> 2);
          if ( 0 != v21 >> 30 )
            v22 = 0x3FFFFFFF;
          if ( v21 < v20 )
          if ( v22 )
          {
            if ( v22 >= 0x40000000 )
              sub_119C874();
            v18 = (char *)operator new(4 * v22);
          }
          *(_DWORD *)&v18[4 * v19] = v16;
          if ( v19 )
            _aeabi_memmove4(v18, i);
          v5 = &v18[4 * v19];
          if ( i )
            operator delete(i);
          v4 = (int)&v18[4 * v22];
          i = v18;
        else
          *(_DWORD *)v5 = v16;
        LODWORD(v16) = v16 + 48;
        v5 += 4;
      while ( HIDWORD(v16) != (_DWORD)v16 );
      v15 = *(_DWORD *)(v13 + 40);
LABEL_44:
      if ( v15 == 5 )
        ExprToken::ExprToken(&v24, v23, 1);
        ExprToken::operator=(v13, (const Json::Value *)&v24);
        std::_Destroy<ExprToken *,ExprToken>((int)ptr, v26, (int)&ptr);
        if ( ptr )
          operator delete(ptr);
        Json::Value::~Value((Json::Value *)&v24);
      goto LABEL_48;
LABEL_49:
    if ( i )
      operator delete(i);
  }
}


void __fastcall UiExpression::getProperties(UiExpression *this, unsigned __int64 *a2)
{
  UiExpression::getProperties(this, a2);
}


void __fastcall UiExpression::evaluate(__int64 this, UIPropertyBag *a2)
{
  int v2; // r4@1
  UIPropertyBag *v3; // r10@1
  __int64 *v4; // r2@1
  Json::Value *v5; // r7@1
  int *v6; // r5@2
  const Json::Value *v7; // r8@2
  void **v8; // r11@2
  void **v9; // r7@2
  int v10; // r6@2
  int v11; // r6@3
  void **v12; // r5@3
  signed int v13; // r0@3
  unsigned int v14; // r7@3
  void *v15; // r2@3
  int v16; // r1@6
  int v17; // r2@6
  __int64 v18; // r0@11
  Json::Value *v19; // r6@14
  char *v20; // r2@15
  signed int v22; // r0@15
  unsigned int v23; // r9@15
  int v24; // r3@18
  int v25; // r1@18
  int v26; // r2@18
  Json::Value *v27; // r1@21
  int v28; // r12@21
  signed int v29; // r6@22
  unsigned int v30; // r2@22
  unsigned int v31; // r2@25
  int v32; // r2@26
  unsigned int v33; // r3@26
  Json::Value *v34; // r0@29
  int v35; // r8@30
  int v36; // r0@30
  void *v37; // r2@30
  int v38; // r1@30
  signed int v39; // r0@30
  unsigned int v40; // r9@30
  int v41; // r1@33
  int v42; // r2@33
  int v43; // r8@33
  void *v44; // r2@33
  int v45; // r0@33
  int v46; // r1@33
  signed int v47; // r0@33
  unsigned int v48; // r9@33
  int v49; // r1@36
  int v50; // r2@36
  int v51; // r3@36
  int v52; // r6@36
  Json::Value *v53; // r4@40
  int v54; // r6@40
  int v55; // t1@40
  int v56; // r6@42
  Json::Value *v57; // r4@42
  int v58; // r6@42
  int v59; // t1@42
  char v60; // r0@47
  Json::Value *v61; // r0@48
  int v62; // r1@48
  int v63; // r1@48
  int v64; // r2@48
  int v65; // r3@48
  int v71; // r1@50
  Json::Value *v72; // r0@51
  int v73; // r1@51
  int v74; // r1@51
  int v75; // r2@51
  int v76; // r3@51
  int v79; // r1@53
  Json::Value *v80; // r0@54
  int v81; // r1@54
  int v82; // r1@54
  int v83; // r2@54
  int v84; // r3@54
  int v85; // r0@55
  Json::Value *v86; // r0@56
  int v87; // r1@56
  int v88; // r1@56
  int v89; // r2@56
  int v90; // r3@56
  int v91; // r0@57
  Json::Value *v92; // r0@58
  int v93; // r1@58
  int v94; // r1@58
  int v95; // r2@58
  int v96; // r3@58
  char *v97; // r0@62
  __int64 v98; // r0@99
  int v99; // r0@100
  unsigned int v100; // r2@102
  int v101; // r2@103
  unsigned int v102; // r1@106
  int v103; // r3@114
  unsigned int v104; // r2@115
  int v105; // r2@118
  void *v106; // r2@132
  signed int v107; // r0@132
  unsigned int v108; // r6@132
  int v109; // r1@135
  int v110; // r2@135
  char v111; // r0@138
  void *v112; // r0@140
  unsigned int *v113; // r2@141
  signed int v114; // r1@143
  int v117; // r1@145
  int v118; // r0@147
  int v119; // r4@151
  Json::Value *v120; // r6@151
  void *v121; // r0@152
  int v122; // r0@127
  int v123; // [sp+0h] [bp-280h]@0
  int *v124; // [sp+4h] [bp-27Ch]@2
  int *v125; // [sp+8h] [bp-278h]@2
  int *v126; // [sp+Ch] [bp-274h]@2
  int *v127; // [sp+10h] [bp-270h]@2
  void **v128; // [sp+14h] [bp-26Ch]@2
  void **v129; // [sp+18h] [bp-268h]@2
  void **v130; // [sp+1Ch] [bp-264h]@2
  void **v131; // [sp+20h] [bp-260h]@2
  int v132; // [sp+24h] [bp-25Ch]@2
  int *v133; // [sp+28h] [bp-258h]@2
  void **v134; // [sp+2Ch] [bp-254h]@2
  void **v135; // [sp+30h] [bp-250h]@2
  int *v136; // [sp+34h] [bp-24Ch]@2
  void **v137; // [sp+38h] [bp-248h]@2
  int *v138; // [sp+3Ch] [bp-244h]@2
  void **v139; // [sp+40h] [bp-240h]@2
  int v140; // [sp+44h] [bp-23Ch]@3
  int v141; // [sp+48h] [bp-238h]@3
  __int64 *v142; // [sp+4Ch] [bp-234h]@3
  int *v143; // [sp+50h] [bp-230h]@2
  int v144; // [sp+54h] [bp-22Ch]@123
  int v145; // [sp+58h] [bp-228h]@123
  int v146; // [sp+5Ch] [bp-224h]@123
  int v147; // [sp+60h] [bp-220h]@123
  int v148; // [sp+64h] [bp-21Ch]@123
  void *v149; // [sp+68h] [bp-218h]@123
  int v150; // [sp+6Ch] [bp-214h]@123
  char *v151; // [sp+70h] [bp-210h]@123
  int v152; // [sp+74h] [bp-20Ch]@123
  int v153; // [sp+78h] [bp-208h]@123
  int v154; // [sp+7Ch] [bp-204h]@123
  int v155; // [sp+80h] [bp-200h]@123
  int v156; // [sp+84h] [bp-1FCh]@123
  int v157[4]; // [sp+88h] [bp-1F8h]@9
  char v158; // [sp+98h] [bp-1E8h]@2
  char v159; // [sp+9Ch] [bp-1E4h]@123
  int v160; // [sp+A0h] [bp-1E0h]@123
  int v161; // [sp+A4h] [bp-1DCh]@123
  void *ptr; // [sp+A8h] [bp-1D8h]@2
  void *v163; // [sp+ACh] [bp-1D4h]@7
  int v164; // [sp+B0h] [bp-1D0h]@123
  int v165; // [sp+B4h] [bp-1CCh]@123
  int v166; // [sp+B8h] [bp-1C8h]@123
  int v167; // [sp+BCh] [bp-1C4h]@123
  int v168; // [sp+C0h] [bp-1C0h]@123
  int v169; // [sp+C4h] [bp-1BCh]@123
  int v170[4]; // [sp+C8h] [bp-1B8h]@2
  void *v171; // [sp+D8h] [bp-1A8h]@2
  _BYTE *v172; // [sp+DCh] [bp-1A4h]@3
  char *v173; // [sp+E0h] [bp-1A0h]@3
  int v174[3]; // [sp+E4h] [bp-19Ch]@2
  int v175; // [sp+F0h] [bp-190h]@10
  int v176; // [sp+FCh] [bp-184h]@1
  Json::Value *v177; // [sp+100h] [bp-180h]@1
  Json::Value *v178; // [sp+104h] [bp-17Ch]@1
  char v179; // [sp+108h] [bp-178h]@55
  void *v180; // [sp+118h] [bp-168h]@2
  int v181; // [sp+11Ch] [bp-164h]@55
  int v182; // [sp+120h] [bp-160h]@55
  char v183; // [sp+124h] [bp-15Ch]@55
  int v184; // [sp+128h] [bp-158h]@2
  signed __int64 v185; // [sp+12Ch] [bp-154h]@55
  char v186; // [sp+138h] [bp-148h]@50
  void *v187; // [sp+148h] [bp-138h]@2
  int v188; // [sp+14Ch] [bp-134h]@50
  int v189; // [sp+150h] [bp-130h]@50
  char v190; // [sp+154h] [bp-12Ch]@50
  int v191; // [sp+158h] [bp-128h]@2
  signed __int64 v192; // [sp+15Ch] [bp-124h]@50
  char v193; // [sp+168h] [bp-118h]@57
  void *v194; // [sp+178h] [bp-108h]@2
  int v195; // [sp+17Ch] [bp-104h]@57
  int v196; // [sp+180h] [bp-100h]@57
  char v197; // [sp+184h] [bp-FCh]@57
  int v198; // [sp+188h] [bp-F8h]@2
  signed __int64 v199; // [sp+18Ch] [bp-F4h]@57
  char v200; // [sp+198h] [bp-E8h]@53
  void *v201; // [sp+1A8h] [bp-D8h]@2
  int v202; // [sp+1ACh] [bp-D4h]@53
  int v203; // [sp+1B0h] [bp-D0h]@53
  char v204; // [sp+1B4h] [bp-CCh]@53
  int v205; // [sp+1B8h] [bp-C8h]@2
  signed __int64 v206; // [sp+1BCh] [bp-C4h]@53
  char v207; // [sp+1C8h] [bp-B8h]@47
  void *v208; // [sp+1D8h] [bp-A8h]@2
  int v209; // [sp+1DCh] [bp-A4h]@47
  int v210; // [sp+1E0h] [bp-A0h]@47
  char v211; // [sp+1E4h] [bp-9Ch]@47
  int v212; // [sp+1E8h] [bp-98h]@2
  int v213; // [sp+1F0h] [bp-90h]@47
  char v214; // [sp+1F8h] [bp-88h]@33
  void *v215; // [sp+208h] [bp-78h]@2
  int v216; // [sp+20Ch] [bp-74h]@33
  char *v217; // [sp+210h] [bp-70h]@33
  char v218; // [sp+214h] [bp-6Ch]@36
  int v219; // [sp+218h] [bp-68h]@2
  char v220; // [sp+228h] [bp-58h]@29
  void *v221; // [sp+238h] [bp-48h]@2
  int v222; // [sp+23Ch] [bp-44h]@30
  char *v223; // [sp+240h] [bp-40h]@30
  char v224; // [sp+244h] [bp-3Ch]@33
  int v225; // [sp+248h] [bp-38h]@2
  int v226; // [sp+24Ch] [bp-34h]@49

  v2 = 0;
  v3 = a2;
  v176 = 0;
  v177 = 0;
  v4 = (__int64 *)HIDWORD(this);
  v5 = (Json::Value *)this;
  v178 = 0;
  if ( (signed int)((*(_QWORD *)HIDWORD(this) >> 32) - *(_QWORD *)HIDWORD(this)) >= 1 )
  {
    v6 = v170;
    v131 = &v180;
    v127 = &v184;
    v130 = &v187;
    v126 = &v191;
    v129 = &v194;
    v125 = &v198;
    v128 = &v201;
    v124 = &v205;
    v134 = &v208;
    v133 = &v212;
    LODWORD(this) = *(_DWORD *)HIDWORD(this);
    v7 = (const Json::Value *)&v158;
    v132 = (int)v5;
    v135 = &v215;
    v8 = &v171;
    v9 = &ptr;
    v136 = &v219;
    v10 = 0;
    v137 = &v221;
    v138 = &v225;
    v139 = &v171;
    v143 = &v174[1];
    while ( 1 )
    {
      v141 = v10;
      v142 = v4;
      v140 = 3 * v10;
      v11 = this + 48 * v10;
      Json::Value::Value((Json::Value *)v6, (const Json::Value *)v11);
      v12 = v9;
      v13 = *(_DWORD *)(v11 + 20) - *(_DWORD *)(v11 + 16);
      v14 = -1431655765 * (v13 >> 4);
      v15 = 0;
      v171 = 0;
      v172 = 0;
      v173 = 0;
      if ( v13 )
      {
        if ( v14 >= 0x5555556 )
          sub_119C874();
        v15 = operator new(v13);
      }
      v171 = v15;
      v172 = v15;
      v173 = (char *)v15 + 48 * v14;
      v172 = (_BYTE *)std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ExprToken const*,std::vector<ExprToken,std::allocator<ExprToken>>>,ExprToken*>(
                        *(_DWORD *)(v11 + 16),
                        *(_DWORD *)(v11 + 20),
                        (int)v15);
      v9 = v12;
      LOBYTE(v174[0]) = *(_BYTE *)(v11 + 28);
      v6 = v170;
      v16 = *(_DWORD *)(v11 + 36);
      v17 = *(_DWORD *)(v11 + 40);
      *v143 = *(_DWORD *)(v11 + 32);
      v143[1] = v16;
      v143[2] = v17;
      while ( v175 == 4 )
        LODWORD(v18) = v157;
        HIDWORD(v18) = v8;
        UiExpression::evaluate(v18, v3);
        createTokenFromUIDefVal(v7, (Json::Value *)v157);
        ExprToken::operator=((int)v170, v7);
        std::_Destroy<ExprToken *,ExprToken>((int)ptr, (int)v163, (int)v9);
        if ( ptr )
          operator delete(ptr);
        Json::Value::~Value(v7);
        Json::Value::~Value((Json::Value *)v157);
      if ( v175 == 5 )
        getPropertyValue((ExprToken *)v170, v3);
      v19 = v177;
      if ( v177 == v178 )
        std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<ExprToken const&>(
          (__int64 *)&v176,
          (int)v170);
      else
        Json::Value::Value(v177, (const Json::Value *)v170);
        v20 = 0;
        v22 = v172 - (_BYTE *)v171;
        _ZF = v172 == v171;
        *((_DWORD *)v19 + 4) = 0;
        *((_DWORD *)v19 + 5) = 0;
        *((_DWORD *)v19 + 6) = 0;
        v23 = -1431655765 * (v22 >> 4);
        if ( !_ZF )
        {
          if ( v23 >= 0x5555556 )
            sub_119C874();
          v20 = (char *)operator new(v22);
        }
        *((_DWORD *)v19 + 4) = v20;
        *((_DWORD *)v19 + 5) = v20;
        *((_DWORD *)v19 + 6) = &v20[48 * v23];
        *((_DWORD *)v19 + 5) = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ExprToken const*,std::vector<ExprToken,std::allocator<ExprToken>>>,ExprToken*>(
                                 (int)v171,
                                 (int)v172,
                                 (int)v20);
        v24 = (int)v19 + 32;
        *((_BYTE *)v19 + 28) = v174[0];
        v25 = v143[1];
        v26 = v143[2];
        *(_DWORD *)v24 = *v143;
        *(_DWORD *)(v24 + 4) = v25;
        *(_DWORD *)(v24 + 8) = v26;
        v177 = (Json::Value *)((char *)v177 + 48);
      if ( v175 == 3 )
        goto LABEL_124;
      v27 = v177;
      v28 = v176;
      if ( (Json::Value *)((char *)v177 - v176) == (Json::Value *)96 )
        v29 = -1431655765;
        v30 = *(_DWORD *)(v176 + 32) - 6;
        if ( v30 > 4 || !((0x13u >> (v30 & 0x1F)) & 1) )
          goto LABEL_99;
        v31 = -1431655765 * (((signed int)v177 - v176) >> 4);
        if ( v31 < 3 )
        v32 = v176 + 16 * (((signed int)v177 - v176) >> 4);
        v33 = *(_DWORD *)(v32 - 64) - 6;
        if ( v33 > 4 || !((0x13u >> (v33 & 0x1F)) & 1) || *(_DWORD *)(v32 - 104) != 3 )
      v34 = (Json::Value *)&v220;
      while ( 1 )
        v35 = v28 + 48 * ((((signed int)v27 - v28) >> 4) * v29 - 1);
        Json::Value::Value(v34, (const Json::Value *)v35);
        v36 = *(_DWORD *)(v35 + 16);
        v37 = 0;
        v38 = *(_DWORD *)(v35 + 20);
        v221 = 0;
        v222 = 0;
        v39 = v38 - v36;
        v223 = 0;
        v40 = (v39 >> 4) * v29;
        if ( v39 )
          if ( v40 >= 0x5555556 )
          v37 = operator new(v39);
        v221 = v37;
        v222 = (int)v37;
        v223 = (char *)v37 + 48 * v40;
        v222 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ExprToken const*,std::vector<ExprToken,std::allocator<ExprToken>>>,ExprToken*>(
                 *(_DWORD *)(v35 + 16),
                 *(_DWORD *)(v35 + 20),
                 (int)v37);
        v224 = *(_BYTE *)(v35 + 28);
        v41 = *(_DWORD *)(v35 + 36);
        v42 = *(_DWORD *)(v35 + 40);
        *v138 = *(_DWORD *)(v35 + 32);
        v138[1] = v41;
        v138[2] = v42;
        v43 = v176 + 48 * ((((signed int)v177 - v176) >> 4) * v29 - 2);
        Json::Value::Value((Json::Value *)&v214, (const Json::Value *)v43);
        v44 = 0;
        v45 = *(_DWORD *)(v43 + 16);
        v46 = *(_DWORD *)(v43 + 20);
        v215 = 0;
        v216 = 0;
        v47 = v46 - v45;
        v217 = 0;
        v48 = (v47 >> 4) * v29;
        if ( v47 )
          if ( v48 >= 0x5555556 )
          v44 = operator new(v47);
        v215 = v44;
        v216 = (int)v44;
        v217 = (char *)v44 + 48 * v48;
        v49 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ExprToken const*,std::vector<ExprToken,std::allocator<ExprToken>>>,ExprToken*>(
                *(_DWORD *)(v43 + 16),
                *(_DWORD *)(v43 + 20),
                (int)v44);
        v216 = v49;
        v218 = *(_BYTE *)(v43 + 28);
        v50 = *(_DWORD *)(v43 + 36);
        v51 = *(_DWORD *)(v43 + 40);
        *v136 = *(_DWORD *)(v43 + 32);
        v136[1] = v50;
        v136[2] = v51;
        v52 = (int)v177;
        if ( (unsigned int)(-1431655765 * (((signed int)v177 - v176) >> 4)) >= 3
          && *(_DWORD *)(v176 + 16 * (((signed int)v177 - v176) >> 4) - 104) != 3 )
          break;
        if ( (unsigned int)(v219 - 6) > 4 || !((0x13u >> ((v219 - 6) & 0x1F)) & 1) )
          std::_Destroy<ExprToken *,ExprToken>((int)v215, v49, (int)v135);
          if ( v215 )
            operator delete(v215);
          Json::Value::~Value((Json::Value *)&v214);
          std::_Destroy<ExprToken *,ExprToken>((int)v221, v222, (int)v137);
          if ( v221 )
            operator delete(v221);
          Json::Value::~Value((Json::Value *)&v220);
          v29 = -1431655765;
          goto LABEL_98;
        v53 = (Json::Value *)((char *)v177 - 48);
        v177 = (Json::Value *)((char *)v177 - 48);
        v55 = *(_DWORD *)(v52 - 32);
        v54 = v52 - 32;
        std::_Destroy<ExprToken *,ExprToken>(v55, *(_DWORD *)(v54 + 4), v54);
        if ( *(_DWORD *)v54 )
          operator delete(*(void **)v54);
        Json::Value::~Value(v53);
        v56 = (int)v177;
        v57 = (Json::Value *)((char *)v177 - 48);
        v59 = *(_DWORD *)(v56 - 32);
        v58 = v56 - 32;
        std::_Destroy<ExprToken *,ExprToken>(v59, *(_DWORD *)(v58 + 4), v58);
        if ( *(_DWORD *)v58 )
          operator delete(*(void **)v58);
        Json::Value::~Value(v57);
        if ( v219 == 6 )
          if ( v226 == 3 )
          {
            _R0 = Json::Value::asFloat((Json::Value *)&v220, 0.0);
            __asm
            {
              VMOV            S0, R0
              VCVT.F64.F32    D0, S0
              VMOV            R2, R3, D0
            }
            Json::Value::Value((Json::Value *)&v186, v71, _R2);
            v187 = 0;
            v188 = 0;
            v189 = 0;
            v190 = 1;
            v191 = 0;
            v192 = 4294967299LL;
            if ( v177 == v178 )
              std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<ExprToken>(
                (__int64 *)&v176,
                (int)&v186);
            else
              v72 = Json::Value::Value(v177, (const Json::Value *)&v186);
              *((_DWORD *)v72 + 4) = 0;
              *((_DWORD *)v72 + 5) = 0;
              *((_DWORD *)v72 + 6) = 0;
              *((_DWORD *)v72 + 4) = v187;
              v187 = 0;
              v73 = *((_DWORD *)v72 + 5);
              *((_DWORD *)v72 + 5) = v188;
              v188 = v73;
              v74 = *((_DWORD *)v72 + 6);
              *((_DWORD *)v72 + 6) = v189;
              v189 = v74;
              *((_BYTE *)v72 + 28) = v190;
              v72 = (Json::Value *)((char *)v72 + 32);
              v75 = v126[1];
              v76 = v126[2];
              *(_DWORD *)v72 = *v126;
              *((_DWORD *)v72 + 1) = v75;
              *((_DWORD *)v72 + 2) = v76;
              v177 = (Json::Value *)((char *)v177 + 48);
            std::_Destroy<ExprToken *,ExprToken>((int)v187, v188, (int)v130);
            if ( v187 )
              operator delete(v187);
            v97 = &v186;
          }
          else
            v85 = Json::Value::asInt((Json::Value *)&v220, 0);
            Json::Value::Value((Json::Value *)&v179, v85);
            v180 = 0;
            v181 = 0;
            v182 = 0;
            v183 = 1;
            v184 = 0;
            v185 = 4294967298LL;
                (int)&v179);
              v86 = Json::Value::Value(v177, (const Json::Value *)&v179);
              *((_DWORD *)v86 + 4) = 0;
              *((_DWORD *)v86 + 5) = 0;
              *((_DWORD *)v86 + 6) = 0;
              *((_DWORD *)v86 + 4) = v180;
              v180 = 0;
              v87 = *((_DWORD *)v86 + 5);
              *((_DWORD *)v86 + 5) = v181;
              v181 = v87;
              v88 = *((_DWORD *)v86 + 6);
              *((_DWORD *)v86 + 6) = v182;
              v182 = v88;
              *((_BYTE *)v86 + 28) = v183;
              v86 = (Json::Value *)((char *)v86 + 32);
              v89 = v127[1];
              v90 = v127[2];
              *(_DWORD *)v86 = *v127;
              *((_DWORD *)v86 + 1) = v89;
              *((_DWORD *)v86 + 2) = v90;
            std::_Destroy<ExprToken *,ExprToken>((int)v180, v181, (int)v131);
            if ( v180 )
              operator delete(v180);
            v97 = &v179;
          goto LABEL_79;
        if ( v219 == 7 )
              VNEG.F32        S0, S0
            Json::Value::Value((Json::Value *)&v200, v79, _R2);
            v201 = 0;
            v202 = 0;
            v203 = 0;
            v204 = 1;
            v205 = 0;
            v206 = 4294967299LL;
                (int)&v200);
              v80 = Json::Value::Value(v177, (const Json::Value *)&v200);
              *((_DWORD *)v80 + 4) = 0;
              *((_DWORD *)v80 + 5) = 0;
              *((_DWORD *)v80 + 6) = 0;
              *((_DWORD *)v80 + 4) = v201;
              v201 = 0;
              v81 = *((_DWORD *)v80 + 5);
              *((_DWORD *)v80 + 5) = v202;
              v202 = v81;
              v82 = *((_DWORD *)v80 + 6);
              *((_DWORD *)v80 + 6) = v203;
              v203 = v82;
              *((_BYTE *)v80 + 28) = v204;
              v80 = (Json::Value *)((char *)v80 + 32);
              v83 = v124[1];
              v84 = v124[2];
              *(_DWORD *)v80 = *v124;
              *((_DWORD *)v80 + 1) = v83;
              *((_DWORD *)v80 + 2) = v84;
            std::_Destroy<ExprToken *,ExprToken>((int)v201, v202, (int)v128);
            if ( v201 )
              operator delete(v201);
            v97 = &v200;
            v91 = Json::Value::asInt((Json::Value *)&v220, 0);
            Json::Value::Value((Json::Value *)&v193, -v91);
            v194 = 0;
            v195 = 0;
            v196 = 0;
            v197 = 1;
            v198 = 0;
            v199 = 4294967298LL;
                (int)&v193);
              v92 = Json::Value::Value(v177, (const Json::Value *)&v193);
              *((_DWORD *)v92 + 4) = 0;
              *((_DWORD *)v92 + 5) = 0;
              *((_DWORD *)v92 + 6) = 0;
              *((_DWORD *)v92 + 4) = v194;
              v194 = 0;
              v93 = *((_DWORD *)v92 + 5);
              *((_DWORD *)v92 + 5) = v195;
              v195 = v93;
              v94 = *((_DWORD *)v92 + 6);
              *((_DWORD *)v92 + 6) = v196;
              v196 = v94;
              *((_BYTE *)v92 + 28) = v197;
              v92 = (Json::Value *)((char *)v92 + 32);
              v95 = v125[1];
              v96 = v125[2];
              *(_DWORD *)v92 = *v125;
              *((_DWORD *)v92 + 1) = v95;
              *((_DWORD *)v92 + 2) = v96;
            std::_Destroy<ExprToken *,ExprToken>((int)v194, v195, (int)v129);
            if ( v194 )
              operator delete(v194);
            v97 = &v193;
        if ( v219 == 10 )
          v60 = Json::Value::asBool((Json::Value *)&v220, 0);
          Json::Value::Value((Json::Value *)&v207, v60 ^ 1);
          v208 = 0;
          v209 = 0;
          v210 = 0;
          v211 = 1;
          *(_QWORD *)&v212 = 0x100000000LL;
          v213 = 1;
          if ( v177 == v178 )
            std::vector<ExprToken,std::allocator<ExprToken>>::_M_emplace_back_aux<ExprToken>(
              (__int64 *)&v176,
              (int)&v207);
            v61 = Json::Value::Value(v177, (const Json::Value *)&v207);
            *((_DWORD *)v61 + 4) = 0;
            *((_DWORD *)v61 + 5) = 0;
            *((_DWORD *)v61 + 6) = 0;
            *((_DWORD *)v61 + 4) = v208;
            v208 = 0;
            v62 = *((_DWORD *)v61 + 5);
            *((_DWORD *)v61 + 5) = v209;
            v209 = v62;
            v63 = *((_DWORD *)v61 + 6);
            *((_DWORD *)v61 + 6) = v210;
            v210 = v63;
            *((_BYTE *)v61 + 28) = v211;
            v61 = (Json::Value *)((char *)v61 + 32);
            v64 = v133[1];
            v65 = v133[2];
            *(_DWORD *)v61 = *v133;
            *((_DWORD *)v61 + 1) = v64;
            *((_DWORD *)v61 + 2) = v65;
            v177 = (Json::Value *)((char *)v177 + 48);
          std::_Destroy<ExprToken *,ExprToken>((int)v208, v209, (int)v134);
          if ( v208 )
            operator delete(v208);
          v97 = &v207;
LABEL_79:
          Json::Value::~Value((Json::Value *)v97);
        std::_Destroy<ExprToken *,ExprToken>((int)v215, v216, (int)v135);
        if ( v215 )
          operator delete(v215);
        Json::Value::~Value((Json::Value *)&v214);
        std::_Destroy<ExprToken *,ExprToken>((int)v221, v222, (int)v137);
        if ( v221 )
          operator delete(v221);
        Json::Value::~Value((Json::Value *)&v220);
        v27 = v177;
        v28 = v176;
        v34 = (Json::Value *)&v220;
        if ( (unsigned int)(-1431655765 * (((signed int)v177 - v176) >> 4)) <= 1 )
      std::_Destroy<ExprToken *,ExprToken>((int)v215, v49, (int)v135);
      if ( v215 )
        operator delete(v215);
      Json::Value::~Value((Json::Value *)&v214);
      std::_Destroy<ExprToken *,ExprToken>((int)v221, v222, (int)v137);
      if ( v221 )
        operator delete(v221);
      Json::Value::~Value((Json::Value *)&v220);
      v29 = -1431655765;
LABEL_98:
      v8 = v139;
      v7 = (const Json::Value *)&v158;
LABEL_99:
      v98 = *v142;
      if ( v141 >= ((HIDWORD(v98) - (signed int)v98) >> 4) * v29 - 1 )
        v99 = 0;
        v99 = *(_DWORD *)(v98 + 16 * v140 + 80);
      v100 = (((signed int)v177 - v176) >> 4) * v29;
      if ( v100 >= 2 )
        v101 = *(_DWORD *)(v176 + 48 * v100 - 64);
        if ( v101 )
          if ( v99 )
            if ( (unsigned int)(v99 - 1) >= 2 )
              if ( (unsigned int)(v99 - 3) >= 3 )
              {
                if ( (v99 | 1) == 7 )
                {
                  v102 = 3;
                }
                else
                  v102 = 0;
                  if ( (v99 | 1) == 9 )
                    v102 = 4;
              }
              else
                v102 = 2;
              v102 = 1;
            v102 = 0;
          v103 = v101 - 1;
          if ( (unsigned int)(v101 - 1) >= 2 )
            v103 = v101 - 3;
            if ( (unsigned int)(v101 - 3) >= 3 )
              v105 = v101 | 1;
              if ( v105 == 7 )
                v104 = 3;
                _ZF = v105 == 9;
                v104 = 0;
                if ( _ZF )
                  v104 = 4;
              v104 = 2;
            v104 = 1;
          if ( v102 <= v104 )
            sub_DB0098(
              v99,
              (int)&v176,
              v104,
              v103,
              v123,
              (int)v124,
              (int)v125,
              (int)v126,
              (int)v127,
              (int)v128,
              (int)v129,
              (int)v130,
              (int)v131,
              v132,
              (int)v133,
              (int)v134,
              (int)v135,
              (int)v136,
              (int)v137,
              (int)v138,
              (int)v139,
              v140,
              v141,
              (int)v142,
              (int)v143,
              v144,
              v145,
              v146,
              v147,
              v148,
              (int)v149,
              v150,
              (int)v151,
              v152,
              v153,
              v154,
              v155,
              v156,
              v157[0],
              v157[1],
              v157[2],
              v157[3],
              *(int *)&v158,
              v159,
              v160,
              v161,
              (int)ptr,
              v163,
              v164,
              v165,
              v166,
              v167,
              v168,
              v169,
              v170[0],
              v170[1],
              v170[2],
              v170[3],
              (int)v171,
              v172,
              (int)v173,
              v174[0],
              v174[1]);
LABEL_124:
      std::_Destroy<ExprToken *,ExprToken>((int)v171, (int)v172, (int)v8);
      v10 = v141 + 1;
      if ( v171 )
        operator delete(v171);
      Json::Value::~Value((Json::Value *)v170);
      v4 = v142;
      this = *v142;
      if ( v10 >= -1431655765 * ((HIDWORD(this) - (signed int)this) >> 4) )
        v2 = (int)v177;
        v122 = v176;
        v5 = (Json::Value *)v132;
        goto LABEL_131;
    }
  }
  v122 = 0;
LABEL_131:
  if ( v2 - v122 == 48 )
    Json::Value::Value((Json::Value *)&v145, (const Json::Value *)(v2 - 48));
    v106 = 0;
    v107 = (*(_QWORD *)(v2 - 32) >> 32) - *(_QWORD *)(v2 - 32);
    v149 = 0;
    v150 = 0;
    v151 = 0;
    v108 = -1431655765 * (v107 >> 4);
    if ( v107 )
      if ( v108 >= 0x5555556 )
        sub_119C874();
      v106 = operator new(v107);
    v149 = v106;
    v150 = (int)v106;
    v151 = (char *)v106 + 48 * v108;
    v150 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ExprToken const*,std::vector<ExprToken,std::allocator<ExprToken>>>,ExprToken*>(
             *(_QWORD *)(v2 - 32),
             *(_QWORD *)(v2 - 32) >> 32,
             (int)v106);
    LOBYTE(v152) = *(_BYTE *)(v2 - 20);
    v109 = *(_DWORD *)(v2 - 12);
    v110 = *(_DWORD *)(v2 - 8);
    v153 = *(_DWORD *)(v2 - 16);
    v154 = v109;
    v155 = v110;
    if ( v110 == 5 )
      getPropertyValue((ExprToken *)&v145, v3);
    switch ( v154 )
      case 1:
        v111 = Json::Value::asBool((Json::Value *)&v145, 0);
        Json::Value::Value(v5, v111);
        break;
      case 4:
        ExprToken::asString((ExprToken *)&v144, (int)&v145);
        Json::Value::Value((int)v5, (const char **)&v144);
        v112 = (void *)(v144 - 12);
        if ( (int *)(v144 - 12) != &dword_28898C0 )
          v113 = (unsigned int *)(v144 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v114 = __ldrex(v113);
            while ( __strex(v114 - 1, v113) );
            v114 = (*v113)--;
          if ( v114 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v112);
      case 3:
        _R0 = Json::Value::asFloat((Json::Value *)&v145, 0.0);
        __asm
          VMOV            S0, R0
          VCVT.F64.F32    D0, S0
          VMOV            R2, R3, D0
        Json::Value::Value(v5, v117, _R2);
      case 5:
        Json::Value::Value(v5, (const Json::Value *)&v145);
      default:
        v118 = Json::Value::asInt((Json::Value *)&v145, 0);
        Json::Value::Value(v5, v118);
    std::_Destroy<ExprToken *,ExprToken>((int)v149, v150, (int)&v149);
    if ( v149 )
      operator delete(v149);
    Json::Value::~Value((Json::Value *)&v145);
  else
    Json::Value::Value(v5, (const Json::Value *)&Json::Value::null);
  v120 = v177;
  v119 = v176;
  if ( (Json::Value *)v176 != v177 )
    do
      std::_Destroy<ExprToken *,ExprToken>(*(_DWORD *)(v119 + 16), *(_DWORD *)(v119 + 20), v119 + 16);
      v121 = *(void **)(v119 + 16);
      if ( v121 )
        operator delete(v121);
      Json::Value::~Value((Json::Value *)v119);
      v119 += 48;
    while ( v120 != (Json::Value *)v119 );
    v119 = v176;
  if ( v119 )
    operator delete((void *)v119);
}


void __fastcall UiExpression::evaluate(__int64 this, UIPropertyBag *a2)
{
  UiExpression::evaluate(this, a2);
}


signed int __fastcall UiExpression::empty(UiExpression *this)
{
  __int64 v1; // r1@1
  signed int result; // r0@1

  v1 = *(_QWORD *)this;
  result = 0;
  if ( (_DWORD)v1 == HIDWORD(v1) )
    result = 1;
  return result;
}


void __fastcall UiExpression::getProperties(UiExpression *this, unsigned __int64 *a2)
{
  int v2; // r7@1
  char *v3; // r4@1
  char *v4; // r9@1
  int i; // r5@1
  int v6; // r8@1
  signed int v7; // r11@4
  char *v8; // r6@4
  int v9; // r4@4
  unsigned int v10; // r0@4
  unsigned int v11; // r1@6
  unsigned int v12; // r7@6
  unsigned int *v13; // r2@23
  signed int v14; // r1@25
  int v15; // r11@31
  int v16; // t1@31
  int v17; // r0@31
  int v18; // r5@32
  int v19; // r8@32
  signed int v20; // r4@35
  char *v21; // r6@35
  signed int v22; // r10@35
  unsigned int v23; // r0@35
  unsigned int v24; // r1@37
  unsigned int v25; // r7@37
  __int64 v26; // r0@53
  void *v27; // r0@56
  UiExpression *v28; // [sp+8h] [bp-38h]@1
  int v29; // [sp+Ch] [bp-34h]@23

  v2 = 0;
  v28 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v3 = 0;
  *((_DWORD *)this + 2) = 0;
  v4 = 0;
  v6 = *a2 >> 32;
  for ( i = *a2; v6 != i; v3 += 4 )
  {
    if ( v3 == (char *)v2 )
    {
      v7 = v3 - v4;
      v8 = 0;
      v9 = (v3 - v4) >> 2;
      v10 = v9;
      if ( !(v7 >> 2) )
        v10 = 1;
      v11 = v10 + (v7 >> 2);
      v12 = v10 + (v7 >> 2);
      if ( 0 != v11 >> 30 )
        v12 = 0x3FFFFFFF;
      if ( v11 < v10 )
      if ( v12 )
      {
        if ( v12 >= 0x40000000 )
          sub_119C874();
        v8 = (char *)operator new(4 * v12);
      }
      *(_DWORD *)&v8[4 * v9] = i;
      if ( v9 )
        _aeabi_memmove4(v8, v4);
      v3 = &v8[4 * v9];
      if ( v4 )
        operator delete(v4);
      v2 = (int)&v8[4 * v12];
      v4 = v8;
    }
    else
      *(_DWORD *)v3 = i;
    i += 48;
  }
  if ( v4 != v3 )
    while ( 1 )
      v16 = *((_DWORD *)v3 - 1);
      v3 -= 4;
      v15 = v16;
      v17 = *(_DWORD *)(v16 + 40);
      if ( v17 != 4 )
        goto LABEL_52;
      v19 = *(_QWORD *)(v15 + 16) >> 32;
      v18 = *(_QWORD *)(v15 + 16);
      if ( v18 != v19 )
        break;
LABEL_57:
      if ( v4 == v3 )
        goto LABEL_58;
    do
      if ( v3 == (char *)v2 )
        v20 = v3 - v4;
        v21 = 0;
        v22 = v20 >> 2;
        v23 = v20 >> 2;
        if ( !(v20 >> 2) )
          v23 = 1;
        v24 = v23 + (v20 >> 2);
        v25 = v23 + (v20 >> 2);
        if ( 0 != v24 >> 30 )
          v25 = 0x3FFFFFFF;
        if ( v24 < v23 )
        if ( v25 )
        {
          if ( v25 >= 0x40000000 )
            sub_119C874();
          v21 = (char *)operator new(4 * v25);
        }
        *(_DWORD *)&v21[4 * v22] = v18;
        if ( v22 )
          _aeabi_memmove4(v21, v4);
        v3 = &v21[4 * v22];
        if ( v4 )
          operator delete(v4);
        v2 = (int)&v21[4 * v25];
        v4 = v21;
      else
        *(_DWORD *)v3 = v18;
      v18 += 48;
      v3 += 4;
    while ( v19 != v18 );
    v17 = *(_DWORD *)(v15 + 40);
LABEL_52:
    if ( v17 == 5 )
      ExprToken::asString((ExprToken *)&v29, v15);
      v26 = *(_QWORD *)((char *)v28 + 4);
      if ( (_DWORD)v26 == HIDWORD(v26) )
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
          (unsigned __int64 *)v28,
          &v29);
        *((_DWORD *)v28 + 1) = sub_119C854((int *)v26, &v29) + 1;
      v27 = (void *)(v29 - 12);
      if ( (int *)(v29 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v29 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
        else
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v27);
    goto LABEL_57;
LABEL_58:
  if ( v4 )
    operator delete(v4);
}
