

void __fastcall LayoutRule::clearTerms(LayoutRule *this)
{
  LayoutRule *v1; // r9@1
  __int64 v2; // kr00_8@1
  int v3; // r11@2
  void (*v4)(void); // r3@3
  int v5; // r5@5
  int v6; // r7@5
  int v7; // r0@6
  unsigned int *v8; // r2@7
  unsigned int v9; // r1@9

  v1 = this;
  v2 = *(_QWORD *)this;
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = v2;
    do
    {
      v4 = *(void (**)(void))(v3 + 24);
      if ( v4 )
        v4();
      v6 = *(_QWORD *)(v3 + 4) >> 32;
      v5 = *(_QWORD *)(v3 + 4);
      if ( v5 != v6 )
      {
        do
        {
          v7 = *(_DWORD *)(v5 + 8);
          if ( v7 )
          {
            v8 = (unsigned int *)(v7 + 8);
            if ( &pthread_create )
            {
              __dmb();
              do
                v9 = __ldrex(v8);
              while ( __strex(v9 - 1, v8) );
            }
            else
              v9 = (*v8)--;
            if ( v9 == 1 )
              (*(void (**)(void))(*(_DWORD *)v7 + 12))();
          }
          v5 += 20;
        }
        while ( v5 != v6 );
        v5 = *(_DWORD *)(v3 + 4);
      }
      if ( v5 )
        operator delete((void *)v5);
      v3 += 40;
    }
    while ( v3 != HIDWORD(v2) );
  }
  *((_DWORD *)v1 + 1) = v2;
}


void __fastcall LayoutRule::addDependsOnMeEntriesForInvalidation(LayoutRule *this, const VariableRef *a2, int a3)
{
  LayoutRule::addDependsOnMeEntriesForInvalidation(this, a2, a3);
}


int __fastcall LayoutRule::addGridItemSizeTerms(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r9@1
  char v6; // r2@1
  _DWORD *v7; // r0@3
  int v8; // r2@3
  bool v9; // zf@3
  unsigned int *v10; // r2@4
  unsigned int v11; // r3@6
  int v12; // r2@9
  int v13; // r2@9
  unsigned int *v14; // r2@10
  unsigned int v15; // r3@12
  int v16; // r2@15
  __int64 v17; // r0@15
  int v18; // r2@17
  unsigned int v19; // r3@17
  unsigned int v20; // r2@19
  unsigned int v21; // r11@19
  char *v22; // r5@25
  int v23; // r0@27
  int v24; // r6@27
  int v25; // r10@27
  void (*v26)(void); // r3@29
  int v27; // r4@31
  int v28; // r8@31
  int v29; // r0@32
  unsigned int *v30; // r2@33
  unsigned int v31; // r1@35
  int v32; // r4@46
  __int64 v33; // r4@49
  int v34; // r0@50
  unsigned int *v35; // r2@51
  unsigned int v36; // r1@53
  int v37; // r0@62
  unsigned int *v38; // r2@63
  unsigned int v39; // r1@65
  int result; // r0@70
  unsigned int *v41; // r2@71
  unsigned int v42; // r1@73
  unsigned __int64 v43; // [sp+4h] [bp-64h]@28
  int v44; // [sp+Ch] [bp-5Ch]@15
  int v45; // [sp+10h] [bp-58h]@3
  int v46; // [sp+14h] [bp-54h]@3
  int v47; // [sp+18h] [bp-50h]@3
  int v48; // [sp+1Ch] [bp-4Ch]@9
  char v49; // [sp+20h] [bp-48h]@9
  int v50; // [sp+24h] [bp-44h]@3
  int v51; // [sp+28h] [bp-40h]@9
  int v52; // [sp+2Ch] [bp-3Ch]@9
  int v53; // [sp+30h] [bp-38h]@15
  char v54; // [sp+34h] [bp-34h]@15
  char *v55; // [sp+38h] [bp-30h]@3
  char *v56; // [sp+3Ch] [bp-2Ch]@3
  char *v57; // [sp+40h] [bp-28h]@3

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = 9;
  if ( v3 == 2 )
    v6 = 8;
  VariableRef::VariableRef((int)&v45, a2, v6);
  VariableRef::VariableRef((int)&v50, v4, v3);
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v7 = operator new(0x28u);
  *v7 = v45;
  v7[1] = v46;
  v8 = v47;
  v55 = (char *)v7;
  v57 = (char *)(v7 + 10);
  v9 = v47 == 0;
  v7[2] = v47;
  if ( !v9 )
  {
    v10 = (unsigned int *)(v8 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
    }
    else
      ++*v10;
  }
  v12 = v48;
  *((_BYTE *)v7 + 16) = v49;
  v7[3] = v12;
  v7[5] = v50;
  v7[6] = v51;
  v13 = v52;
  v7[7] = v52;
  if ( v13 )
    v14 = (unsigned int *)(v13 + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      ++*v14;
  v16 = v53;
  *((_BYTE *)v7 + 36) = v54;
  v7[8] = v16;
  v56 = (char *)(v7 + 10);
  v44 = 10;
  v17 = *(_QWORD *)(v5 + 4);
  if ( (_DWORD)v17 == HIDWORD(v17) )
    HIDWORD(v17) = *(_DWORD *)v5;
    v18 = ((signed int)v17 - *(_DWORD *)v5) >> 3;
    v19 = -858993459 * v18;
    if ( (_DWORD)v17 == *(_DWORD *)v5 )
      v19 = 1;
    v20 = v19 + -858993459 * v18;
    v21 = v20;
    if ( v20 > 0x6666666 )
      v21 = 107374182;
    if ( v20 < v19 )
    if ( v21 )
      if ( v21 >= 0x6666667 )
        sub_21E57F4();
      v22 = (char *)operator new(40 * v21);
      LODWORD(v17) = *(_QWORD *)v5 >> 32;
      HIDWORD(v17) = *(_QWORD *)v5;
      v22 = 0;
    sub_12C5AD0((int)&v22[v17 - HIDWORD(v17)], (int)&v55, &v44);
    v23 = std::uninitialized_copy<LayoutRuleTerm *,LayoutRuleTerm *>(*(_QWORD *)v5, *(_QWORD *)v5 >> 32, (int)v22);
    v25 = *(_QWORD *)v5 >> 32;
    v24 = *(_QWORD *)v5;
    if ( v24 != v25 )
      v43 = __PAIR__((unsigned int)v22, v23);
      {
        v26 = *(void (**)(void))(v24 + 24);
        if ( v26 )
          v26();
        v28 = *(_QWORD *)(v24 + 4) >> 32;
        v27 = *(_QWORD *)(v24 + 4);
        if ( v27 != v28 )
        {
          do
          {
            v29 = *(_DWORD *)(v27 + 8);
            if ( v29 )
            {
              v30 = (unsigned int *)(v29 + 8);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v31 = __ldrex(v30);
                while ( __strex(v31 - 1, v30) );
              }
              else
                v31 = (*v30)--;
              if ( v31 == 1 )
                (*(void (**)(void))(*(_DWORD *)v29 + 12))();
            }
            v27 += 20;
          }
          while ( v27 != v28 );
          v27 = *(_DWORD *)(v24 + 4);
        }
        if ( v27 )
          operator delete((void *)v27);
        v24 += 40;
      }
      while ( v24 != v25 );
      v24 = *(_DWORD *)v5;
      v22 = (char *)HIDWORD(v43);
      v23 = v43;
    v32 = v23 + 40;
    if ( v24 )
      operator delete((void *)v24);
    *(_DWORD *)v5 = v22;
    *(_DWORD *)(v5 + 4) = v32;
    *(_DWORD *)(v5 + 8) = &v22[40 * v21];
  else
    sub_12C5AD0(v17, (int)&v55, &v44);
    *(_DWORD *)(v5 + 4) += 40;
  v33 = *(_QWORD *)&v55;
  if ( v55 != v56 )
    do
      v34 = *(_DWORD *)(v33 + 8);
      if ( v34 )
        v35 = (unsigned int *)(v34 + 8);
        if ( &pthread_create )
          __dmb();
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
        else
          v36 = (*v35)--;
        if ( v36 == 1 )
          (*(void (**)(void))(*(_DWORD *)v34 + 12))();
      LODWORD(v33) = v33 + 20;
    while ( (_DWORD)v33 != HIDWORD(v33) );
    LODWORD(v33) = v55;
  if ( (_DWORD)v33 )
    operator delete((void *)v33);
  v37 = v52;
  if ( v52 )
    v38 = (unsigned int *)(v52 + 8);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 == 1 )
      (*(void (**)(void))(*(_DWORD *)v37 + 12))();
  result = v47;
  if ( v47 )
    v41 = (unsigned int *)(v47 + 8);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int __fastcall LayoutRule::addStackPanelItemPositionTerms(int a1, int a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r4@1
  int v6; // r5@1
  __int64 v7; // r0@1
  int v8; // r0@4
  char v9; // r7@4
  unsigned int *v10; // r2@7
  unsigned int v11; // r1@9
  __int64 v12; // r0@14
  int result; // r0@17
  unsigned int *v14; // r2@18
  unsigned int v15; // r1@20
  int v16; // [sp+4h] [bp-4Ch]@14
  int v17; // [sp+8h] [bp-48h]@14
  char v18; // [sp+Ch] [bp-44h]@14
  int v19; // [sp+14h] [bp-3Ch]@17
  int v20; // [sp+20h] [bp-30h]@1
  int v21; // [sp+24h] [bp-2Ch]@1
  char v22; // [sp+28h] [bp-28h]@1
  int v23; // [sp+30h] [bp-20h]@4

  v4 = a4;
  v5 = a1;
  v6 = a2;
  VariableRef::VariableRef((int)&v22, a2, a4);
  v21 = 1065353216;
  v20 = 11;
  v7 = *(_QWORD *)(v5 + 4);
  if ( (_DWORD)v7 == HIDWORD(v7) )
  {
    std::vector<LayoutRuleTerm,std::allocator<LayoutRuleTerm>>::_M_emplace_back_aux<VariableRef,float,LayoutRuleTermType>(
      (unsigned __int64 *)v5,
      (int)&v22,
      &v21,
      &v20);
  }
  else
    LayoutRuleTerm::LayoutRuleTerm(v7, (int)&v22, 1065353216, 11);
    *(_DWORD *)(v5 + 4) += 40;
  v8 = v23;
  v9 = 3;
  if ( !v4 )
    v9 = 2;
  if ( v23 )
    v10 = (unsigned int *)(v23 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 == 1 )
      (*(void (**)(void))(*(_DWORD *)v8 + 12))();
  VariableRef::VariableRef((int)&v18, v6, v9);
  v17 = 1065353216;
  v16 = 11;
  v12 = *(_QWORD *)(v5 + 4);
  if ( (_DWORD)v12 == HIDWORD(v12) )
      (int)&v18,
      &v17,
      &v16);
    LayoutRuleTerm::LayoutRuleTerm(v12, (int)&v18, 1065353216, 11);
  result = v19;
  if ( v19 )
    v14 = (unsigned int *)(v19 + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


_DWORD *__fastcall LayoutRule::toString(LayoutRule *this, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // r4@1
  LayoutRuleTerm *i; // r7@1
  LayoutRuleTerm *v4; // r9@1
  char *v5; // r4@3
  int v6; // r6@3
  char v7; // r1@5
  char *v8; // r0@7
  void *v9; // r0@7
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  void **v12; // r0@19
  void *v13; // r0@19
  unsigned int *v15; // r2@21
  signed int v16; // r1@23
  int *v17; // [sp+4h] [bp-ECh]@1
  int v18; // [sp+8h] [bp-E8h]@3
  void **v19; // [sp+Ch] [bp-E4h]@1
  int v20; // [sp+10h] [bp-E0h]@20
  void **v21; // [sp+14h] [bp-DCh]@3
  void **v22; // [sp+18h] [bp-D8h]@19
  int v23; // [sp+34h] [bp-BCh]@20
  int v24; // [sp+3Ch] [bp-B4h]@19
  int v25; // [sp+40h] [bp-B0h]@20

  v2 = a2;
  v17 = (int *)this;
  sub_21D103C((int)&v19, 24);
  v4 = (LayoutRuleTerm *)(*v2 >> 32);
  for ( i = (LayoutRuleTerm *)*v2; i != v4; i = (LayoutRuleTerm *)((char *)i + 40) )
  {
    if ( !LayoutRuleTerm::isZeroTerm(i) )
    {
      LayoutRuleTerm::toString((LayoutRuleTerm *)&v18, (int)i);
      v5 = sub_21CBF38((char *)&v21, v18, *(_DWORD *)(v18 - 12));
      v6 = *(_DWORD *)&v5[*(_DWORD *)(*(_DWORD *)v5 - 12) + 124];
      if ( !v6 )
        sub_21E5824();
      if ( *(_BYTE *)(v6 + 28) )
      {
        v7 = *(_BYTE *)(v6 + 39);
      }
      else
        sub_21B50F0(v6);
        v7 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v6 + 24))(v6, 10);
      v8 = sub_21CBC4C(v5, v7);
      sub_21CB78C(v8);
      v9 = (void *)(v18 - 12);
      if ( (int *)(v18 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v18 - 4);
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
          j_j_j_j__ZdlPv_9(v9);
    }
  }
  sub_21CFED8(v17, (int)&v22);
  v12 = off_26D3F84;
  v19 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v19) = off_26D3F80[0];
  v21 = v12;
  v22 = &off_27734E8;
  v13 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v22 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v23);
  v19 = (void **)off_26D3F68;
  *(void ***)((char *)&v19 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v20 = 0;
  return sub_21B6560(&v25);
}


int __fastcall LayoutRule::addGridItemPositionTerms(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r8@1
  int v6; // r10@1
  char v7; // r4@1
  char v8; // r7@1
  char v9; // r0@1
  bool v10; // zf@3
  int v11; // r9@3
  bool v12; // zf@6
  _DWORD *v13; // r0@10
  int v14; // r2@10
  unsigned int *v15; // r2@11
  unsigned int v16; // r3@13
  int v17; // r2@16
  int v18; // r2@16
  unsigned int *v19; // r2@17
  unsigned int v20; // r3@19
  int v21; // r2@22
  __int64 v22; // kr00_8@22
  int v23; // r6@23
  int v24; // r4@23
  __int64 v25; // r4@24
  int v26; // r0@25
  unsigned int *v27; // r2@26
  unsigned int v28; // r1@28
  int v29; // r0@37
  unsigned int *v30; // r2@38
  unsigned int v31; // r1@40
  int v32; // r0@45
  unsigned int *v33; // r2@46
  unsigned int v34; // r1@48
  _DWORD *v35; // r0@53
  int v36; // r2@53
  unsigned int *v37; // r2@54
  unsigned int v38; // r3@56
  int v39; // r2@59
  int v40; // r2@59
  unsigned int *v41; // r2@60
  unsigned int v42; // r3@62
  int v43; // r2@65
  __int64 v44; // r0@65
  int v45; // r2@67
  unsigned int v46; // r3@67
  unsigned int v47; // r2@69
  unsigned int v48; // r11@69
  char *v49; // r5@75
  _DWORD *v50; // r0@9
  int v51; // r2@76
  unsigned int *v52; // r2@77
  unsigned int v53; // r3@79
  int v54; // r0@82
  int v55; // r6@82
  int v56; // r9@82
  void (*v57)(void); // r3@84
  int v58; // r5@86
  int v59; // r8@86
  int v60; // r0@87
  unsigned int *v61; // r2@88
  unsigned int v62; // r1@90
  int v63; // r4@101
  __int64 v64; // r4@104
  int v65; // r0@105
  unsigned int *v66; // r2@106
  unsigned int v67; // r1@108
  int v68; // r0@117
  unsigned int *v69; // r2@118
  unsigned int v70; // r1@120
  int result; // r0@125
  unsigned int *v72; // r2@126
  unsigned int v73; // r1@128
  int v74; // r2@131
  int v75; // r2@131
  unsigned int *v76; // r2@132
  unsigned int v77; // r3@134
  int v78; // r2@137
  int v79; // r2@137
  unsigned int *v80; // r2@138
  unsigned int v81; // r3@140
  int v82; // r2@143
  __int64 v83; // r0@143
  int v84; // r2@145
  unsigned int v85; // r3@145
  unsigned int v86; // r2@147
  unsigned int v87; // r11@147
  char *v88; // r5@153
  int v89; // r0@155
  int v90; // r6@155
  int v91; // r9@155
  void (*v92)(void); // r3@157
  int v93; // r5@159
  int v94; // r8@159
  int v95; // r0@160
  unsigned int *v96; // r2@161
  unsigned int v97; // r1@163
  int v98; // r4@174
  __int64 v99; // r4@177
  int v100; // r0@178
  unsigned int *v101; // r2@179
  unsigned int v102; // r1@181
  int v103; // r0@190
  unsigned int *v104; // r2@191
  unsigned int v105; // r1@193
  int v106; // r0@198
  unsigned int *v107; // r2@199
  unsigned int v108; // r1@201
  unsigned __int64 v109; // [sp+4h] [bp-F4h]@83
  unsigned __int64 v110; // [sp+4h] [bp-F4h]@156
  int v111; // [sp+Ch] [bp-ECh]@143
  int v112; // [sp+10h] [bp-E8h]@9
  int v113; // [sp+14h] [bp-E4h]@76
  int v114; // [sp+18h] [bp-E0h]@76
  int v115; // [sp+1Ch] [bp-DCh]@131
  char v116; // [sp+20h] [bp-D8h]@131
  int v117; // [sp+24h] [bp-D4h]@9
  int v118; // [sp+28h] [bp-D0h]@131
  int v119; // [sp+2Ch] [bp-CCh]@131
  int v120; // [sp+30h] [bp-C8h]@137
  char v121; // [sp+34h] [bp-C4h]@137
  int v122; // [sp+38h] [bp-C0h]@9
  int v123; // [sp+3Ch] [bp-BCh]@137
  int v124; // [sp+40h] [bp-B8h]@137
  int v125; // [sp+44h] [bp-B4h]@143
  char v126; // [sp+48h] [bp-B0h]@143
  char *v127; // [sp+50h] [bp-A8h]@9
  char *v128; // [sp+54h] [bp-A4h]@9
  char *v129; // [sp+58h] [bp-A0h]@9
  int v130; // [sp+5Ch] [bp-9Ch]@65
  int v131; // [sp+60h] [bp-98h]@53
  int v132; // [sp+64h] [bp-94h]@53
  int v133; // [sp+68h] [bp-90h]@53
  int v134; // [sp+6Ch] [bp-8Ch]@59
  char v135; // [sp+70h] [bp-88h]@59
  int v136; // [sp+74h] [bp-84h]@53
  int v137; // [sp+78h] [bp-80h]@59
  int v138; // [sp+7Ch] [bp-7Ch]@59
  int v139; // [sp+80h] [bp-78h]@65
  char v140; // [sp+84h] [bp-74h]@65
  char *v141; // [sp+8Ch] [bp-6Ch]@53
  char *v142; // [sp+90h] [bp-68h]@53
  char *v143; // [sp+94h] [bp-64h]@53
  int v144; // [sp+98h] [bp-60h]@22
  int v145; // [sp+9Ch] [bp-5Ch]@22
  int v146; // [sp+A0h] [bp-58h]@10
  int v147; // [sp+A4h] [bp-54h]@10
  int v148; // [sp+A8h] [bp-50h]@10
  int v149; // [sp+ACh] [bp-4Ch]@16
  char v150; // [sp+B0h] [bp-48h]@16
  int v151; // [sp+B4h] [bp-44h]@10
  int v152; // [sp+B8h] [bp-40h]@16
  int v153; // [sp+BCh] [bp-3Ch]@16
  int v154; // [sp+C0h] [bp-38h]@22
  char v155; // [sp+C4h] [bp-34h]@22
  char *v156; // [sp+C8h] [bp-30h]@10
  char *v157; // [sp+CCh] [bp-2Ch]@10
  char *v158; // [sp+D0h] [bp-28h]@10

  v5 = a2;
  v6 = a1;
  v7 = 7;
  v8 = 3;
  v9 = 9;
  if ( !a4 )
  {
    v7 = 6;
    v8 = 2;
    v9 = 8;
  }
  v10 = a4 == 0;
  v11 = a3;
    v10 = a5 == 0;
  if ( v10 )
    goto LABEL_219;
  v12 = a4 == 1;
  if ( a4 == 1 )
    v12 = a5 == 1;
  if ( v12 )
LABEL_219:
    VariableRef::VariableRef((int)&v146, a3, v8);
    VariableRef::VariableRef((int)&v151, v11, v7);
    v156 = 0;
    v157 = 0;
    v158 = 0;
    v13 = operator new(0x28u);
    *v13 = v146;
    v13[1] = v147;
    v14 = v148;
    v156 = (char *)v13;
    v158 = (char *)(v13 + 10);
    v10 = v148 == 0;
    v13[2] = v148;
    if ( !v10 )
    {
      v15 = (unsigned int *)(v14 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 + 1, v15) );
      }
      else
        ++*v15;
    }
    v17 = v149;
    *((_BYTE *)v13 + 16) = v150;
    v13[3] = v17;
    v13[5] = v151;
    v13[6] = v152;
    v18 = v153;
    v13[7] = v153;
    if ( v18 )
      v19 = (unsigned int *)(v18 + 8);
          v20 = __ldrex(v19);
        while ( __strex(v20 + 1, v19) );
        ++*v19;
    v21 = v154;
    *((_BYTE *)v13 + 36) = v155;
    v13[8] = v21;
    v157 = (char *)(v13 + 10);
    v145 = 1065353216;
    v144 = 9;
    v22 = *(_QWORD *)(v6 + 4);
    if ( (_DWORD)v22 == HIDWORD(v22) )
      std::vector<LayoutRuleTerm,std::allocator<LayoutRuleTerm>>::_M_emplace_back_aux<std::vector<VariableRef,std::allocator<VariableRef>>,float,LayoutRuleTermType>(
        (unsigned __int64 *)v6,
        (int)&v156,
        &v145,
        &v144);
      v25 = *(_QWORD *)&v156;
      if ( v156 != v157 )
        {
          v26 = *(_DWORD *)(v25 + 8);
          if ( v26 )
          {
            v27 = (unsigned int *)(v26 + 8);
            if ( &pthread_create )
            {
              __dmb();
              do
                v28 = __ldrex(v27);
              while ( __strex(v28 - 1, v27) );
            }
            else
              v28 = (*v27)--;
            if ( v28 == 1 )
              (*(void (**)(void))(*(_DWORD *)v26 + 12))();
          }
          LODWORD(v25) = v25 + 20;
        }
        while ( (_DWORD)v25 != HIDWORD(v25) );
        HIDWORD(v25) = v156;
      if ( HIDWORD(v25) )
        operator delete((void *)HIDWORD(v25));
    else
      v23 = (int)v156;
      v156 = 0;
      v157 = 0;
      v24 = (int)v158;
      v158 = 0;
      *(_DWORD *)v22 = 9;
      *(_DWORD *)(v22 + 4) = v23;
      *(_DWORD *)(v22 + 8) = v13 + 10;
      *(_DWORD *)(v22 + 12) = v24;
      *(_DWORD *)(v22 + 24) = 0;
      *(_DWORD *)(v22 + 32) = 1065353216;
      *(_DWORD *)(v22 + 36) = 0;
      *(_DWORD *)(v6 + 4) += 40;
    v29 = v153;
    if ( v153 )
      v30 = (unsigned int *)(v153 + 8);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 == 1 )
        (*(void (**)(void))(*(_DWORD *)v29 + 12))();
    v32 = v148;
    if ( v148 )
      v33 = (unsigned int *)(v148 + 8);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 == 1 )
        (*(void (**)(void))(*(_DWORD *)v32 + 12))();
    VariableRef::VariableRef((int)&v131, v5, v8);
    VariableRef::VariableRef((int)&v136, v11, v8);
    v141 = 0;
    v142 = 0;
    v143 = 0;
    v35 = operator new(0x28u);
    *v35 = v131;
    v35[1] = v132;
    v36 = v133;
    v141 = (char *)v35;
    v143 = (char *)(v35 + 10);
    v10 = v133 == 0;
    v35[2] = v133;
      v37 = (unsigned int *)(v36 + 8);
          v38 = __ldrex(v37);
        while ( __strex(v38 + 1, v37) );
        ++*v37;
    v39 = v134;
    *((_BYTE *)v35 + 16) = v135;
    v35[3] = v39;
    v35[5] = v136;
    v35[6] = v137;
    v40 = v138;
    v35[7] = v138;
    if ( v40 )
      v41 = (unsigned int *)(v40 + 8);
          v42 = __ldrex(v41);
        while ( __strex(v42 + 1, v41) );
        ++*v41;
    v43 = v139;
    *((_BYTE *)v35 + 36) = v140;
    v35[8] = v43;
    v142 = (char *)(v35 + 10);
    v130 = 14;
    v44 = *(_QWORD *)(v6 + 4);
    if ( (_DWORD)v44 == HIDWORD(v44) )
      HIDWORD(v44) = *(_DWORD *)v6;
      v45 = ((signed int)v44 - *(_DWORD *)v6) >> 3;
      v46 = -858993459 * v45;
      if ( (_DWORD)v44 == *(_DWORD *)v6 )
        v46 = 1;
      v47 = v46 + -858993459 * v45;
      v48 = v47;
      if ( v47 > 0x6666666 )
        v48 = 107374182;
      if ( v47 < v46 )
      if ( v48 )
        if ( v48 >= 0x6666667 )
          sub_21E57F4();
        v49 = (char *)operator new(40 * v48);
        LODWORD(v44) = *(_QWORD *)v6 >> 32;
        HIDWORD(v44) = *(_QWORD *)v6;
        v49 = 0;
      sub_12C574C((int)&v49[v44 - HIDWORD(v44)], (int)&v141, &v130);
      v54 = std::uninitialized_copy<LayoutRuleTerm *,LayoutRuleTerm *>(*(_QWORD *)v6, *(_QWORD *)v6 >> 32, (int)v49);
      v56 = *(_QWORD *)v6 >> 32;
      v55 = *(_QWORD *)v6;
      if ( v55 != v56 )
        v109 = __PAIR__((unsigned int)v49, v54);
          v57 = *(void (**)(void))(v55 + 24);
          if ( v57 )
            v57();
          v59 = *(_QWORD *)(v55 + 4) >> 32;
          v58 = *(_QWORD *)(v55 + 4);
          if ( v58 != v59 )
            do
              v60 = *(_DWORD *)(v58 + 8);
              if ( v60 )
              {
                v61 = (unsigned int *)(v60 + 8);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v62 = __ldrex(v61);
                  while ( __strex(v62 - 1, v61) );
                }
                else
                  v62 = (*v61)--;
                if ( v62 == 1 )
                  (*(void (**)(void))(*(_DWORD *)v60 + 12))();
              }
              v58 += 20;
            while ( v58 != v59 );
            v58 = *(_DWORD *)(v55 + 4);
          if ( v58 )
            operator delete((void *)v58);
          v55 += 40;
        while ( v55 != v56 );
        v55 = *(_DWORD *)v6;
        v49 = (char *)HIDWORD(v109);
        v54 = v109;
      v63 = v54 + 40;
      if ( v55 )
        operator delete((void *)v55);
      *(_DWORD *)v6 = v49;
      *(_DWORD *)(v6 + 4) = v63;
      *(_DWORD *)(v6 + 8) = &v49[40 * v48];
      sub_12C574C(v44, (int)&v141, &v130);
    v64 = *(_QWORD *)&v141;
    if ( v141 != v142 )
      do
        v65 = *(_DWORD *)(v64 + 8);
        if ( v65 )
          v66 = (unsigned int *)(v65 + 8);
          if ( &pthread_create )
            __dmb();
              v67 = __ldrex(v66);
            while ( __strex(v67 - 1, v66) );
          else
            v67 = (*v66)--;
          if ( v67 == 1 )
            (*(void (**)(void))(*(_DWORD *)v65 + 12))();
        LODWORD(v64) = v64 + 20;
      while ( (_DWORD)v64 != HIDWORD(v64) );
      LODWORD(v64) = v141;
    if ( (_DWORD)v64 )
      operator delete((void *)v64);
    v68 = v138;
    if ( v138 )
      v69 = (unsigned int *)(v138 + 8);
          v70 = __ldrex(v69);
        while ( __strex(v70 - 1, v69) );
        v70 = (*v69)--;
      if ( v70 == 1 )
        (*(void (**)(void))(*(_DWORD *)v68 + 12))();
    result = v133;
    if ( v133 )
      v72 = (unsigned int *)(v133 + 8);
          v73 = __ldrex(v72);
        while ( __strex(v73 - 1, v72) );
        goto LABEL_210;
LABEL_211:
      v73 = (*v72)--;
LABEL_212:
      if ( v73 == 1 )
        result = (*(int (**)(void))(*(_DWORD *)result + 12))();
      return result;
  else
    VariableRef::VariableRef((int)&v112, a2, v9);
    VariableRef::VariableRef((int)&v117, v5, v8);
    VariableRef::VariableRef((int)&v122, v11, v7);
    v127 = 0;
    v128 = 0;
    v129 = 0;
    v50 = operator new(0x3Cu);
    *v50 = v112;
    v50[1] = v113;
    v51 = v114;
    v127 = (char *)v50;
    v129 = (char *)(v50 + 15);
    v10 = v114 == 0;
    v50[2] = v114;
      v52 = (unsigned int *)(v51 + 8);
          v53 = __ldrex(v52);
        while ( __strex(v53 + 1, v52) );
        ++*v52;
    v74 = v115;
    *((_BYTE *)v50 + 16) = v116;
    v50[3] = v74;
    v50[5] = v117;
    v50[6] = v118;
    v75 = v119;
    v50[7] = v119;
    if ( v75 )
      v76 = (unsigned int *)(v75 + 8);
          v77 = __ldrex(v76);
        while ( __strex(v77 + 1, v76) );
        ++*v76;
    v78 = v120;
    *((_BYTE *)v50 + 36) = v121;
    v50[8] = v78;
    v50[10] = v122;
    v50[11] = v123;
    v79 = v124;
    v50[12] = v124;
    if ( v79 )
      v80 = (unsigned int *)(v79 + 8);
          v81 = __ldrex(v80);
        while ( __strex(v81 + 1, v80) );
        ++*v80;
    v82 = v125;
    *((_BYTE *)v50 + 56) = v126;
    v50[13] = v82;
    v128 = (char *)(v50 + 15);
    v111 = 8;
    v83 = *(_QWORD *)(v6 + 4);
    if ( (_DWORD)v83 == HIDWORD(v83) )
      HIDWORD(v83) = *(_DWORD *)v6;
      v84 = ((signed int)v83 - *(_DWORD *)v6) >> 3;
      v85 = -858993459 * v84;
      if ( (_DWORD)v83 == *(_DWORD *)v6 )
        v85 = 1;
      v86 = v85 + -858993459 * v84;
      v87 = v86;
      if ( v86 > 0x6666666 )
        v87 = 107374182;
      if ( v86 < v85 )
      if ( v87 )
        if ( v87 >= 0x6666667 )
        v88 = (char *)operator new(40 * v87);
        LODWORD(v83) = *(_QWORD *)v6 >> 32;
        HIDWORD(v83) = *(_QWORD *)v6;
        v88 = 0;
      sub_12C5904((int)&v88[v83 - HIDWORD(v83)], (int)&v127, &v111);
      v89 = std::uninitialized_copy<LayoutRuleTerm *,LayoutRuleTerm *>(*(_QWORD *)v6, *(_QWORD *)v6 >> 32, (int)v88);
      v91 = *(_QWORD *)v6 >> 32;
      v90 = *(_QWORD *)v6;
      if ( v90 != v91 )
        v110 = __PAIR__((unsigned int)v88, v89);
          v92 = *(void (**)(void))(v90 + 24);
          if ( v92 )
            v92();
          v94 = *(_QWORD *)(v90 + 4) >> 32;
          v93 = *(_QWORD *)(v90 + 4);
          if ( v93 != v94 )
              v95 = *(_DWORD *)(v93 + 8);
              if ( v95 )
                v96 = (unsigned int *)(v95 + 8);
                    v97 = __ldrex(v96);
                  while ( __strex(v97 - 1, v96) );
                  v97 = (*v96)--;
                if ( v97 == 1 )
                  (*(void (**)(void))(*(_DWORD *)v95 + 12))();
              v93 += 20;
            while ( v93 != v94 );
            v93 = *(_DWORD *)(v90 + 4);
          if ( v93 )
            operator delete((void *)v93);
          v90 += 40;
        while ( v90 != v91 );
        v90 = *(_DWORD *)v6;
        v88 = (char *)HIDWORD(v110);
        v89 = v110;
      v98 = v89 + 40;
      if ( v90 )
        operator delete((void *)v90);
      *(_DWORD *)v6 = v88;
      *(_DWORD *)(v6 + 4) = v98;
      *(_DWORD *)(v6 + 8) = &v88[40 * v87];
      sub_12C5904(v83, (int)&v127, &v111);
    v99 = *(_QWORD *)&v127;
    if ( v127 != v128 )
        v100 = *(_DWORD *)(v99 + 8);
        if ( v100 )
          v101 = (unsigned int *)(v100 + 8);
              v102 = __ldrex(v101);
            while ( __strex(v102 - 1, v101) );
            v102 = (*v101)--;
          if ( v102 == 1 )
            (*(void (**)(void))(*(_DWORD *)v100 + 12))();
        LODWORD(v99) = v99 + 20;
      while ( (_DWORD)v99 != HIDWORD(v99) );
      LODWORD(v99) = v127;
    if ( (_DWORD)v99 )
      operator delete((void *)v99);
    v103 = v124;
    if ( v124 )
      v104 = (unsigned int *)(v124 + 8);
          v105 = __ldrex(v104);
        while ( __strex(v105 - 1, v104) );
        v105 = (*v104)--;
      if ( v105 == 1 )
        (*(void (**)(void))(*(_DWORD *)v103 + 12))();
    v106 = v119;
    if ( v119 )
      v107 = (unsigned int *)(v119 + 8);
          v108 = __ldrex(v107);
        while ( __strex(v108 - 1, v107) );
        v108 = (*v107)--;
      if ( v108 == 1 )
        (*(void (**)(void))(*(_DWORD *)v106 + 12))();
    result = v114;
    if ( v114 )
      v72 = (unsigned int *)(v114 + 8);
LABEL_210:
        goto LABEL_212;
      goto LABEL_211;
  return result;
}


int __fastcall LayoutRule::addDynamicGridItemGridPositionTerm(int a1, int a2, int a3, char a4, int a5, int a6)
{
  int v6; // r9@1
  char v7; // r5@1
  int v8; // r7@1
  int v9; // r4@1
  unsigned int *v10; // r2@2
  unsigned int v11; // r3@4
  char v12; // r5@7
  _DWORD *v13; // r0@9
  int v14; // r2@9
  bool v15; // zf@9
  unsigned int *v16; // r2@10
  unsigned int v17; // r3@12
  int v18; // r2@15
  int v19; // r2@15
  unsigned int *v20; // r2@16
  unsigned int v21; // r3@18
  int v22; // r2@21
  __int64 v23; // r0@21
  int v24; // r2@23
  unsigned int v25; // r3@23
  unsigned int v26; // r2@25
  unsigned int v27; // r11@25
  char *v28; // r5@31
  int v29; // r0@33
  int v30; // r6@33
  int v31; // r10@33
  void (*v32)(void); // r3@35
  int v33; // r5@37
  int v34; // r8@37
  int v35; // r0@38
  unsigned int *v36; // r2@39
  unsigned int v37; // r1@41
  int v38; // r4@52
  __int64 v39; // r4@55
  int v40; // r0@56
  unsigned int *v41; // r2@57
  unsigned int v42; // r1@59
  int v43; // r0@68
  unsigned int *v44; // r2@69
  unsigned int v45; // r1@71
  int v46; // r0@76
  unsigned int *v47; // r2@77
  unsigned int v48; // r1@79
  int v49; // r0@84
  unsigned int *v50; // r2@85
  unsigned int v51; // r1@87
  int result; // r0@92
  unsigned int *v53; // r2@93
  unsigned int v54; // r1@95
  unsigned __int64 v55; // [sp+4h] [bp-84h]@34
  int v56; // [sp+Ch] [bp-7Ch]@21
  int v57; // [sp+10h] [bp-78h]@9
  int v58; // [sp+14h] [bp-74h]@9
  int v59; // [sp+18h] [bp-70h]@9
  int v60; // [sp+1Ch] [bp-6Ch]@15
  char v61; // [sp+20h] [bp-68h]@15
  int v62; // [sp+24h] [bp-64h]@9
  int v63; // [sp+28h] [bp-60h]@15
  int v64; // [sp+2Ch] [bp-5Ch]@15
  int v65; // [sp+30h] [bp-58h]@21
  char v66; // [sp+34h] [bp-54h]@21
  char *v67; // [sp+3Ch] [bp-4Ch]@9
  char *v68; // [sp+40h] [bp-48h]@9
  char *v69; // [sp+44h] [bp-44h]@9
  int v70; // [sp+48h] [bp-40h]@1
  int v71; // [sp+4Ch] [bp-3Ch]@1
  int v72; // [sp+50h] [bp-38h]@7
  char v73; // [sp+54h] [bp-34h]@7
  int v74; // [sp+58h] [bp-30h]@7
  int v75; // [sp+5Ch] [bp-2Ch]@1
  int v76; // [sp+60h] [bp-28h]@1

  v6 = a1;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  UIControl::weakRef((UIControl *)&v75, a2);
  v70 = v75;
  v71 = v76;
  if ( v76 )
  {
    v10 = (unsigned int *)(v76 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
    }
    else
      ++*v10;
  }
  v72 = a5;
  v73 = v7;
  v12 = 2;
  v74 = a6;
  if ( a5 == 1 )
    v12 = 3;
  VariableRef::VariableRef((int)&v57, v9, v12);
  VariableRef::VariableRef((int)&v62, v8, v12);
  v67 = 0;
  v68 = 0;
  v69 = 0;
  v13 = operator new(0x28u);
  *v13 = v57;
  v13[1] = v58;
  v14 = v59;
  v67 = (char *)v13;
  v69 = (char *)(v13 + 10);
  v15 = v59 == 0;
  v13[2] = v59;
  if ( !v15 )
    v16 = (unsigned int *)(v14 + 8);
        v17 = __ldrex(v16);
      while ( __strex(v17 + 1, v16) );
      ++*v16;
  v18 = v60;
  *((_BYTE *)v13 + 16) = v61;
  v13[3] = v18;
  v13[5] = v62;
  v13[6] = v63;
  v19 = v64;
  v13[7] = v64;
  if ( v19 )
    v20 = (unsigned int *)(v19 + 8);
        v21 = __ldrex(v20);
      while ( __strex(v21 + 1, v20) );
      ++*v20;
  v22 = v65;
  *((_BYTE *)v13 + 36) = v66;
  v13[8] = v22;
  v68 = (char *)(v13 + 10);
  v56 = 15;
  v23 = *(_QWORD *)(v6 + 4);
  if ( (_DWORD)v23 == HIDWORD(v23) )
    HIDWORD(v23) = *(_DWORD *)v6;
    v24 = ((signed int)v23 - *(_DWORD *)v6) >> 3;
    v25 = -858993459 * v24;
    if ( (_DWORD)v23 == *(_DWORD *)v6 )
      v25 = 1;
    v26 = v25 + -858993459 * v24;
    v27 = v26;
    if ( v26 > 0x6666666 )
      v27 = 107374182;
    if ( v26 < v25 )
    if ( v27 )
      if ( v27 >= 0x6666667 )
        sub_21E57F4();
      v28 = (char *)operator new(40 * v27);
      LODWORD(v23) = *(_QWORD *)v6 >> 32;
      HIDWORD(v23) = *(_QWORD *)v6;
      v28 = 0;
    sub_12C504C((int)&v28[v23 - HIDWORD(v23)], (int)&v67, (int)&v70, &v56);
    v29 = std::uninitialized_copy<LayoutRuleTerm *,LayoutRuleTerm *>(*(_QWORD *)v6, *(_QWORD *)v6 >> 32, (int)v28);
    v31 = *(_QWORD *)v6 >> 32;
    v30 = *(_QWORD *)v6;
    if ( v30 != v31 )
      v55 = __PAIR__((unsigned int)v28, v29);
      {
        v32 = *(void (**)(void))(v30 + 24);
        if ( v32 )
          v32();
        v34 = *(_QWORD *)(v30 + 4) >> 32;
        v33 = *(_QWORD *)(v30 + 4);
        if ( v33 != v34 )
        {
          do
          {
            v35 = *(_DWORD *)(v33 + 8);
            if ( v35 )
            {
              v36 = (unsigned int *)(v35 + 8);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v37 = __ldrex(v36);
                while ( __strex(v37 - 1, v36) );
              }
              else
                v37 = (*v36)--;
              if ( v37 == 1 )
                (*(void (**)(void))(*(_DWORD *)v35 + 12))();
            }
            v33 += 20;
          }
          while ( v33 != v34 );
          v33 = *(_DWORD *)(v30 + 4);
        }
        if ( v33 )
          operator delete((void *)v33);
        v30 += 40;
      }
      while ( v30 != v31 );
      v30 = *(_DWORD *)v6;
      v28 = (char *)HIDWORD(v55);
      v29 = v55;
    v38 = v29 + 40;
    if ( v30 )
      operator delete((void *)v30);
    *(_DWORD *)v6 = v28;
    *(_DWORD *)(v6 + 4) = v38;
    *(_DWORD *)(v6 + 8) = &v28[40 * v27];
  else
    sub_12C504C(v23, (int)&v67, (int)&v70, &v56);
    *(_DWORD *)(v6 + 4) += 40;
  v39 = *(_QWORD *)&v67;
  if ( v67 != v68 )
    do
      v40 = *(_DWORD *)(v39 + 8);
      if ( v40 )
        v41 = (unsigned int *)(v40 + 8);
        if ( &pthread_create )
          __dmb();
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
        else
          v42 = (*v41)--;
        if ( v42 == 1 )
          (*(void (**)(void))(*(_DWORD *)v40 + 12))();
      LODWORD(v39) = v39 + 20;
    while ( (_DWORD)v39 != HIDWORD(v39) );
    LODWORD(v39) = v67;
  if ( (_DWORD)v39 )
    operator delete((void *)v39);
  v43 = v64;
  if ( v64 )
    v44 = (unsigned int *)(v64 + 8);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 == 1 )
      (*(void (**)(void))(*(_DWORD *)v43 + 12))();
  v46 = v59;
  if ( v59 )
    v47 = (unsigned int *)(v59 + 8);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 == 1 )
      (*(void (**)(void))(*(_DWORD *)v46 + 12))();
  v49 = v71;
  if ( v71 )
    v50 = (unsigned int *)(v71 + 8);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 == 1 )
      (*(void (**)(void))(*(_DWORD *)v49 + 12))();
  result = v76;
    v53 = (unsigned int *)(v76 + 8);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


signed int __fastcall LayoutRule::isSatisfiable(LayoutRule *this, int a2, int a3)
{
  int v3; // r5@1 OVERLAPPED
  int v4; // r6@1 OVERLAPPED
  VariableRef *v5; // r4@4
  VariableRef *v6; // r7@4
  LayoutVariable *v7; // r0@5

  *(_QWORD *)&v3 = *(_QWORD *)this;
  while ( 1 )
  {
    if ( v3 == v4 )
      return 1;
    v6 = (VariableRef *)(*(_QWORD *)(v3 + 4) >> 32);
    v5 = (VariableRef *)*(_QWORD *)(v3 + 4);
    if ( v5 != v6 )
      break;
LABEL_2:
    v3 += 40;
  }
    v7 = (LayoutVariable *)VariableRef::getVariable(v5, a2, a3);
    if ( v7 )
    {
      if ( LayoutVariable::isSatisfied(v7) != 1 )
        return 0;
    }
    v5 = (VariableRef *)((char *)v5 + 20);
    if ( v6 == v5 )
      goto LABEL_2;
}


void __fastcall LayoutRule::addDependsOnMeEntriesForInvalidation(LayoutRule *this, const VariableRef *a2, int a3)
{
  int v3; // r7@1 OVERLAPPED
  int v4; // r8@1 OVERLAPPED
  int v5; // r9@1
  const VariableRef *v6; // r5@1
  VariableRef *v7; // r4@4
  VariableRef *i; // r6@4
  int v9; // r1@5
  int v10; // r2@5
  LayoutVariable *v11; // r0@6

  *(_QWORD *)&v3 = *(_QWORD *)this;
  v5 = a3;
  v6 = a2;
  while ( v3 != v4 )
  {
    v7 = (VariableRef *)(*(_QWORD *)(v3 + 4) >> 32);
    for ( i = (VariableRef *)*(_QWORD *)(v3 + 4); v7 != i; i = (VariableRef *)((char *)i + 20) )
    {
      if ( VariableRef::isValid(i) == 1 )
      {
        v11 = (LayoutVariable *)VariableRef::getVariable(i, v9, v10);
        if ( v11 )
          LayoutVariable::addDependsOnMeVariable(v11, v6, v5);
      }
    }
    v3 += 40;
  }
}


int __fastcall LayoutRule::addGridSizeTerms(float a1, int a2, int a3, char a4, int a5)
{
  char v9; // r7@1
  int v10; // r4@1
  float v11; // r8@1
  char v12; // r2@1
  char *v13; // r0@3
  int v14; // r1@3
  int v15; // r2@3
  unsigned int *v16; // r2@4
  unsigned int v17; // r3@6
  int v18; // r2@9
  int v19; // r2@9
  unsigned int *v20; // r2@10
  unsigned int v21; // r3@12
  __int64 v22; // r2@15
  int v23; // r0@15
  int v24; // r6@16
  float v25; // r5@16
  char *v26; // r4@17
  int v27; // r5@17
  int v28; // r0@18
  unsigned int *v29; // r2@19
  unsigned int v30; // r1@21
  int v31; // r0@30
  unsigned int *v32; // r2@31
  unsigned int v33; // r1@33
  int result; // r0@38
  unsigned int *v35; // r2@39
  unsigned int v36; // r1@41
  int v37; // [sp+4h] [bp-54h]@15
  int v38; // [sp+8h] [bp-50h]@3
  int v39; // [sp+Ch] [bp-4Ch]@3
  int v40; // [sp+10h] [bp-48h]@3
  int v41; // [sp+14h] [bp-44h]@9
  char v42; // [sp+18h] [bp-40h]@9
  int v43; // [sp+1Ch] [bp-3Ch]@3
  int v44; // [sp+20h] [bp-38h]@9
  int v45; // [sp+24h] [bp-34h]@9
  int v46; // [sp+28h] [bp-30h]@15
  char v47; // [sp+2Ch] [bp-2Ch]@15
  char *v48; // [sp+30h] [bp-28h]@3
  char *v49; // [sp+34h] [bp-24h]@3
  char *v50; // [sp+38h] [bp-20h]@3
  float v51; // [sp+3Ch] [bp-1Ch]@16

  __asm { VLDR            S0, [SP,#0x58+arg_0] }
  v9 = a4;
  v10 = a3;
  v11 = a1;
  v12 = 9;
  __asm { VSTR            S0, [SP,#0x58+var_1C] }
  if ( _ZF )
    v12 = 8;
  VariableRef::VariableRef((int)&v38, a2, v12);
  VariableRef::VariableRef((int)&v43, v10, v9);
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v13 = (char *)operator new(0x28u);
  v14 = (int)(v13 + 40);
  *(_DWORD *)v13 = v38;
  *((_DWORD *)v13 + 1) = v39;
  v15 = v40;
  v48 = v13;
  v50 = v13 + 40;
  _ZF = v40 == 0;
  *((_DWORD *)v13 + 2) = v40;
  if ( !_ZF )
  {
    v16 = (unsigned int *)(v15 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 + 1, v16) );
    }
    else
      ++*v16;
  }
  v18 = v41;
  v13[16] = v42;
  *((_DWORD *)v13 + 3) = v18;
  *((_DWORD *)v13 + 5) = v43;
  *((_DWORD *)v13 + 6) = v44;
  v19 = v45;
  *((_DWORD *)v13 + 7) = v45;
  if ( v19 )
    v20 = (unsigned int *)(v19 + 8);
        v21 = __ldrex(v20);
      while ( __strex(v21 + 1, v20) );
      ++*v20;
  LODWORD(v22) = v46;
  v13[36] = v47;
  *((_DWORD *)v13 + 8) = v22;
  LODWORD(v22) = 4;
  v49 = v13 + 40;
  v37 = 4;
  v23 = *(_QWORD *)(LODWORD(v11) + 4);
  if ( v23 == *(_QWORD *)(LODWORD(v11) + 4) >> 32 )
    std::vector<LayoutRuleTerm,std::allocator<LayoutRuleTerm>>::_M_emplace_back_aux<std::vector<VariableRef,std::allocator<VariableRef>>,float &,LayoutRuleTermType>(
      (unsigned __int64 *)LODWORD(v11),
      (int)&v48,
      (int *)&v51,
      &v37);
    v26 = v49;
    v27 = (int)v48;
    if ( v48 != v49 )
      {
        v28 = *(_DWORD *)(v27 + 8);
        if ( v28 )
        {
          v29 = (unsigned int *)(v28 + 8);
          if ( &pthread_create )
          {
            __dmb();
            do
              v30 = __ldrex(v29);
            while ( __strex(v30 - 1, v29) );
          }
          else
            v30 = (*v29)--;
          if ( v30 == 1 )
            (*(void (**)(void))(*(_DWORD *)v28 + 12))();
        }
        v27 += 20;
      }
      while ( (char *)v27 != v26 );
      v26 = v48;
    if ( v26 )
      operator delete(v26);
  else
    HIDWORD(v22) = v48;
    v48 = 0;
    v49 = 0;
    v24 = (int)v50;
    v25 = v51;
    v50 = 0;
    *(_QWORD *)v23 = v22;
    *(_DWORD *)(v23 + 8) = v14;
    *(_DWORD *)(v23 + 12) = v24;
    *(_DWORD *)(v23 + 24) = 0;
    *(float *)(v23 + 32) = v25;
    *(_DWORD *)(v23 + 36) = 0;
    *(_DWORD *)(LODWORD(v11) + 4) += 40;
  v31 = v45;
  if ( v45 )
    v32 = (unsigned int *)(v45 + 8);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 == 1 )
      (*(void (**)(void))(*(_DWORD *)v31 + 12))();
  result = v40;
  if ( v40 )
    v35 = (unsigned int *)(v40 + 8);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int __fastcall LayoutRule::addAxisOffsetTerms(int a1, int a2, int a3, unsigned __int64 *a4)
{
  int v4; // r11@1
  int result; // r0@1
  int v7; // r10@1
  char v12; // r0@7
  __int64 v13; // r6@9
  __int64 i; // r0@10
  int v15; // r1@13
  unsigned int *v16; // r1@14
  unsigned int v17; // r2@16
  int v18; // r0@20
  unsigned int *v19; // r2@21
  unsigned int v20; // r1@23
  __int64 v21; // r0@30
  __int64 v22; // r0@32
  __int64 v24; // r0@34
  __int64 v26; // r0@36
  __int64 v28; // r0@38
  __int64 v29; // r0@40
  char v31; // r0@42
  unsigned __int16 v32; // r0@44
  int v33; // r6@45
  GridComponent *v34; // r0@46
  int j; // r6@48
  __int64 v36; // kr08_8@48
  int v37; // r0@51
  unsigned int *v38; // r0@52
  unsigned int v39; // r1@54
  __int64 v40; // r0@57
  int v41; // r0@60
  unsigned int *v42; // r2@61
  unsigned int v43; // r1@63
  int v44; // r0@68
  unsigned int *v45; // r2@69
  unsigned int v46; // r1@71
  char v47; // r0@76
  unsigned __int16 v48; // r0@78
  int v49; // r6@79
  GridComponent *v50; // r0@80
  int k; // r6@82
  __int64 v52; // kr10_8@82
  int v53; // r0@85
  unsigned int *v54; // r0@86
  unsigned int v55; // r1@88
  __int64 v56; // r0@91
  int v57; // r0@94
  unsigned int *v58; // r2@95
  unsigned int v59; // r1@97
  int v60; // r0@102
  unsigned int *v61; // r2@103
  unsigned int v62; // r1@105
  int v63; // r2@110
  unsigned int v64; // r3@110
  unsigned int v65; // r2@112
  unsigned int v66; // r6@112
  void *v67; // r2@118
  int v68; // r0@120
  unsigned int *v69; // r2@121
  unsigned int v70; // r1@123
  int v71; // r4@148
  int v72; // r4@148
  int v73; // r7@148
  int v74; // r10@148
  void (*v75)(void); // r3@149
  int v76; // r9@151
  int v77; // r11@151
  int v78; // r0@152
  unsigned int *v79; // r2@153
  unsigned int v80; // r1@155
  __int64 v81; // r6@166
  __int64 v82; // r6@169
  int v83; // r0@170
  unsigned int *v84; // r2@171
  unsigned int v85; // r1@173
  int v86; // [sp+18h] [bp-128h]@148
  unsigned int v87; // [sp+1Ch] [bp-124h]@148
  int v88; // [sp+20h] [bp-120h]@148
  int v89; // [sp+24h] [bp-11Ch]@148
  int v90; // [sp+34h] [bp-10Ch]@1
  int v91; // [sp+38h] [bp-108h]@1
  int v92; // [sp+3Ch] [bp-104h]@30
  int v93; // [sp+40h] [bp-100h]@9
  int v94; // [sp+44h] [bp-FCh]@9
  int v95; // [sp+48h] [bp-F8h]@9
  char v96; // [sp+4Fh] [bp-F1h]@9
  int v97; // [sp+50h] [bp-F0h]@91
  int v98; // [sp+54h] [bp-ECh]@85
  int v99; // [sp+58h] [bp-E8h]@85
  char v100; // [sp+5Ch] [bp-E4h]@91
  int v101; // [sp+64h] [bp-DCh]@94
  int v102; // [sp+70h] [bp-D0h]@57
  int v103; // [sp+74h] [bp-CCh]@51
  int v104; // [sp+78h] [bp-C8h]@51
  char v105; // [sp+7Ch] [bp-C4h]@57
  int v106; // [sp+84h] [bp-BCh]@60
  int v107; // [sp+90h] [bp-B0h]@32
  char v108; // [sp+94h] [bp-ACh]@32
  int v109; // [sp+9Ch] [bp-A4h]@120
  int v110; // [sp+A8h] [bp-98h]@36
  char v111; // [sp+ACh] [bp-94h]@36
  int v112; // [sp+B4h] [bp-8Ch]@132
  int v113; // [sp+C0h] [bp-80h]@34
  char v114; // [sp+C4h] [bp-7Ch]@34
  int v115; // [sp+CCh] [bp-74h]@126
  int v116; // [sp+D8h] [bp-68h]@40
  char v117; // [sp+DCh] [bp-64h]@40
  int v118; // [sp+E4h] [bp-5Ch]@139
  int v119; // [sp+F0h] [bp-50h]@38
  int v120; // [sp+F4h] [bp-4Ch]@58
  int v121; // [sp+F8h] [bp-48h]@13
  int v122; // [sp+FCh] [bp-44h]@13

  v90 = a2;
  v4 = a1;
  result = *a4 >> 32;
  _R8 = *a4;
  v7 = a3;
  v91 = result;
  if ( _R8 != result )
  {
    __asm
    {
      VMOV.F32        S16, #1.0
      VMOV.F32        S18, #-1.0
    }
    do
      __asm { VMOV.F32        S0, S16 }
      if ( *(_DWORD *)(_R8 + 8) == 1 )
        __asm { VMOVEQ.F32      S0, S18 }
      __asm
      {
        VLDR            S2, [R8,#4]
        VMUL.F32        S20, S2, S0
        VCMPE.F32       S20, #0.0
        VSTR            S20, [SP,#0x140+var_4C]
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !_ZF )
        switch ( *(_DWORD *)_R8 )
        {
          case 7:
          case 8:
            v12 = 3;
            if ( *(_DWORD *)_R8 == 7 )
              v12 = 2;
            v96 = v12;
            v93 = 0;
            v94 = 0;
            v95 = 0;
            v13 = *(_QWORD *)UIControl::getChildren((UIControl *)v7);
            if ( (_DWORD)v13 != HIDWORD(v13) )
            {
              for ( i = 0LL; ; i = *(_QWORD *)&v94 )
              {
                if ( (_DWORD)i == HIDWORD(i) )
                {
                  std::vector<VariableRef,std::allocator<VariableRef>>::_M_emplace_back_aux<std::shared_ptr<UIControl> const&,LayoutVariableType &>(
                    (unsigned __int64 *)&v93,
                    v13,
                    &v96);
                }
                else
                  v121 = *(_DWORD *)v13;
                  v15 = *(_DWORD *)(v13 + 4);
                  v122 = v15;
                  if ( v15 )
                  {
                    v16 = (unsigned int *)(v15 + 8);
                    if ( &pthread_create )
                    {
                      __dmb();
                      do
                        v17 = __ldrex(v16);
                      while ( __strex(v17 + 1, v16) );
                    }
                    else
                      ++*v16;
                  }
                  VariableRef::VariableRef(i, (int)&v121, v96);
                  v18 = v122;
                  if ( v122 )
                    v19 = (unsigned int *)(v122 + 8);
                        v20 = __ldrex(v19);
                      while ( __strex(v20 - 1, v19) );
                      v20 = (*v19)--;
                    if ( v20 == 1 )
                      (*(void (**)(void))(*(_DWORD *)v18 + 12))();
                  v94 += 20;
                LODWORD(v13) = v13 + 8;
                if ( (_DWORD)v13 == HIDWORD(v13) )
                  break;
              }
            }
            v92 = 3;
            v21 = *(_QWORD *)(v4 + 4);
            if ( (_DWORD)v21 == HIDWORD(v21) )
              HIDWORD(v21) = *(_DWORD *)v4;
              v63 = ((signed int)v21 - *(_DWORD *)v4) >> 3;
              v64 = -858993459 * v63;
              if ( (_DWORD)v21 == *(_DWORD *)v4 )
                v64 = 1;
              v65 = v64 + -858993459 * v63;
              v66 = v65;
              if ( v65 > 0x6666666 )
                v66 = 107374182;
              if ( v65 < v64 )
              if ( v66 )
                if ( v66 >= 0x6666667 )
                  sub_21E57F4();
                v67 = operator new(40 * v66);
                LODWORD(v21) = *(_QWORD *)v4 >> 32;
                HIDWORD(v21) = *(_QWORD *)v4;
              else
                v67 = 0;
              v71 = (int)v67;
              sub_12C4C48((int)v67 + v21 - HIDWORD(v21), (int)&v93, &v92);
              v86 = std::uninitialized_copy<LayoutRuleTerm *,LayoutRuleTerm *>(*(_QWORD *)v4, *(_QWORD *)v4 >> 32, v71);
              v87 = v66;
              v88 = v71;
              v89 = v7;
              v72 = v4;
              v73 = *(_QWORD *)v4 >> 32;
              v74 = *(_QWORD *)v4;
              if ( v74 != v73 )
                do
                  v75 = *(void (**)(void))(v74 + 24);
                  if ( v75 )
                    v75();
                  v76 = *(_QWORD *)(v74 + 4) >> 32;
                  v77 = *(_QWORD *)(v74 + 4);
                  if ( v77 != v76 )
                    do
                      v78 = *(_DWORD *)(v77 + 8);
                      if ( v78 )
                      {
                        v79 = (unsigned int *)(v78 + 8);
                        if ( &pthread_create )
                        {
                          __dmb();
                          do
                            v80 = __ldrex(v79);
                          while ( __strex(v80 - 1, v79) );
                        }
                        else
                          v80 = (*v79)--;
                        if ( v80 == 1 )
                          (*(void (**)(void))(*(_DWORD *)v78 + 12))();
                      }
                      v77 += 20;
                    while ( v77 != v76 );
                    v77 = *(_DWORD *)(v74 + 4);
                  if ( v77 )
                    operator delete((void *)v77);
                  v74 += 40;
                while ( v74 != v73 );
                v74 = *(_DWORD *)v72;
              LODWORD(v81) = v88;
              if ( v74 )
                operator delete((void *)v74);
              v4 = v72;
              HIDWORD(v81) = v86 + 40;
              *(_QWORD *)v72 = v81;
              v7 = v89;
              *(_DWORD *)(v72 + 8) = v88 + 40 * v87;
            else
              sub_12C4C48(v21, (int)&v93, &v92);
              *(_DWORD *)(v4 + 4) += 40;
            v82 = *(_QWORD *)&v93;
            if ( v93 != v94 )
              do
                v83 = *(_DWORD *)(v82 + 8);
                if ( v83 )
                  v84 = (unsigned int *)(v83 + 8);
                  if ( &pthread_create )
                    __dmb();
                      v85 = __ldrex(v84);
                    while ( __strex(v85 - 1, v84) );
                  else
                    v85 = (*v84)--;
                  if ( v85 == 1 )
                    (*(void (**)(void))(*(_DWORD *)v83 + 12))();
                LODWORD(v82) = v82 + 20;
              while ( (_DWORD)v82 != HIDWORD(v82) );
              LODWORD(v82) = v93;
            if ( (_DWORD)v82 )
              operator delete((void *)v82);
            break;
          case 4:
            VariableRef::VariableRef((int)&v108, v7, 3);
            v107 = 1;
            v22 = *(_QWORD *)(v4 + 4);
            if ( (_DWORD)v22 == HIDWORD(v22) )
              std::vector<LayoutRuleTerm,std::allocator<LayoutRuleTerm>>::_M_emplace_back_aux<VariableRef,float &,LayoutRuleTermType>(
                (unsigned __int64 *)v4,
                (int)&v108,
                &v120,
                &v107);
              __asm { VMOV            R2, S20 }
              LayoutRuleTerm::LayoutRuleTerm(v22, (int)&v108, _R2, 1);
            v68 = v109;
            if ( v109 )
              v69 = (unsigned int *)(v109 + 8);
              if ( !&pthread_create )
                goto LABEL_144;
              __dmb();
                v70 = __ldrex(v69);
              while ( __strex(v70 - 1, v69) );
              goto LABEL_145;
          case 2:
            VariableRef::VariableRef((int)&v114, v90, 3);
            v113 = 0;
            v24 = *(_QWORD *)(v4 + 4);
            if ( (_DWORD)v24 == HIDWORD(v24) )
                (int)&v114,
                &v113);
              LayoutRuleTerm::LayoutRuleTerm(v24, (int)&v114, _R2, 0);
            v68 = v115;
            if ( v115 )
              v69 = (unsigned int *)(v115 + 8);
          case 3:
            VariableRef::VariableRef((int)&v111, v7, 2);
            v110 = 1;
            v26 = *(_QWORD *)(v4 + 4);
            if ( (_DWORD)v26 == HIDWORD(v26) )
                (int)&v111,
                &v110);
              LayoutRuleTerm::LayoutRuleTerm(v26, (int)&v111, _R2, 1);
            v68 = v112;
            if ( v112 )
              v69 = (unsigned int *)(v112 + 8);
          case 0:
            v119 = 5;
            v28 = *(_QWORD *)(v4 + 4);
            if ( (_DWORD)v28 == HIDWORD(v28) )
              std::vector<LayoutRuleTerm,std::allocator<LayoutRuleTerm>>::_M_emplace_back_aux<float &,LayoutRuleTermType>(
                &v119);
              *(_QWORD *)v28 = 5LL;
              *(_DWORD *)(v28 + 8) = 0;
              *(_DWORD *)(v28 + 12) = 0;
              *(_DWORD *)(v28 + 24) = 0;
              *(_DWORD *)(v28 + 32) = 0;
              __asm { VSTR            S20, [R0,#0x24] }
              *(_DWORD *)(v4 + 4) = v28 + 40;
          case 1:
            VariableRef::VariableRef((int)&v117, v90, 2);
            v116 = 0;
            v29 = *(_QWORD *)(v4 + 4);
            if ( (_DWORD)v29 == HIDWORD(v29) )
                (int)&v117,
                &v116);
              LayoutRuleTerm::LayoutRuleTerm(v29, (int)&v117, _R2, 0);
            v68 = v118;
            if ( v118 )
              v69 = (unsigned int *)(v118 + 8);
              if ( &pthread_create )
                __dmb();
                  v70 = __ldrex(v69);
                while ( __strex(v70 - 1, v69) );
LABEL_144:
                v70 = (*v69)--;
LABEL_145:
              if ( v70 == 1 )
                (*(void (**)(void))(*(_DWORD *)v68 + 12))();
          case 5:
            v31 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
            __dmb();
            if ( !(v31 & 1)
              && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id) )
              v32 = typeid_t<UIComponent>::count[0]++;
              type_id<UIComponent,GridComponent>(void)::id[0] = v32;
              j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id);
            v33 = type_id<UIComponent,GridComponent>(void)::id[0];
            if ( UIControl::_hasComponent((UIControl *)v7, type_id<UIComponent,GridComponent>(void)::id[0]) != 1
              || (v34 = *(GridComponent **)(*(_DWORD *)(v7 + 108)
                                          + 4 * UIControl::_getComponentIndex((UIControl *)v7, v33))) == 0
              || !GridComponent::isDynamic(v34) )
              v36 = *(_QWORD *)UIControl::getChildren((UIControl *)v7);
              for ( j = v36; j != HIDWORD(v36); j += 8 )
                v103 = *(_DWORD *)j;
                v37 = *(_DWORD *)(j + 4);
                v104 = v37;
                if ( v37 )
                  v38 = (unsigned int *)(v37 + 8);
                      v39 = __ldrex(v38);
                    while ( __strex(v39 + 1, v38) );
                    ++*v38;
                VariableRef::VariableRef((int)&v105, (int)&v103, 2);
                v102 = 2;
                v40 = *(_QWORD *)(v4 + 4);
                if ( (_DWORD)v40 == HIDWORD(v40) )
                  std::vector<LayoutRuleTerm,std::allocator<LayoutRuleTerm>>::_M_emplace_back_aux<VariableRef,float &,LayoutRuleTermType>(
                    (unsigned __int64 *)v4,
                    (int)&v105,
                    &v120,
                    &v102);
                  LayoutRuleTerm::LayoutRuleTerm(v40, (int)&v105, v120, 2);
                  *(_DWORD *)(v4 + 4) += 40;
                v41 = v106;
                if ( v106 )
                  v42 = (unsigned int *)(v106 + 8);
                      v43 = __ldrex(v42);
                    while ( __strex(v43 - 1, v42) );
                    v43 = (*v42)--;
                  if ( v43 == 1 )
                    (*(void (**)(void))(*(_DWORD *)v41 + 12))();
                v44 = v104;
                if ( v104 )
                  v45 = (unsigned int *)(v104 + 8);
                      v46 = __ldrex(v45);
                    while ( __strex(v46 - 1, v45) );
                    v46 = (*v45)--;
                  if ( v46 == 1 )
                    (*(void (**)(void))(*(_DWORD *)v44 + 12))();
          case 6:
            v47 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
            if ( !(v47 & 1)
              v48 = typeid_t<UIComponent>::count[0]++;
              type_id<UIComponent,GridComponent>(void)::id[0] = v48;
            v49 = type_id<UIComponent,GridComponent>(void)::id[0];
              || (v50 = *(GridComponent **)(*(_DWORD *)(v7 + 108)
                                          + 4 * UIControl::_getComponentIndex((UIControl *)v7, v49))) == 0
              || !GridComponent::isDynamic(v50) )
              v52 = *(_QWORD *)UIControl::getChildren((UIControl *)v7);
              for ( k = v52; k != HIDWORD(v52); k += 8 )
                v98 = *(_DWORD *)k;
                v53 = *(_DWORD *)(k + 4);
                v99 = v53;
                if ( v53 )
                  v54 = (unsigned int *)(v53 + 8);
                      v55 = __ldrex(v54);
                    while ( __strex(v55 + 1, v54) );
                    ++*v54;
                VariableRef::VariableRef((int)&v100, (int)&v98, 3);
                v97 = 2;
                v56 = *(_QWORD *)(v4 + 4);
                if ( (_DWORD)v56 == HIDWORD(v56) )
                    (int)&v100,
                    &v97);
                  LayoutRuleTerm::LayoutRuleTerm(v56, (int)&v100, v120, 2);
                v57 = v101;
                if ( v101 )
                  v58 = (unsigned int *)(v101 + 8);
                      v59 = __ldrex(v58);
                    while ( __strex(v59 - 1, v58) );
                    v59 = (*v58)--;
                  if ( v59 == 1 )
                    (*(void (**)(void))(*(_DWORD *)v57 + 12))();
                v60 = v99;
                if ( v99 )
                  v61 = (unsigned int *)(v99 + 8);
                      v62 = __ldrex(v61);
                    while ( __strex(v62 - 1, v61) );
                    v62 = (*v61)--;
                  if ( v62 == 1 )
                    (*(void (**)(void))(*(_DWORD *)v60 + 12))();
          default:
        }
      _R8 += 12;
      result = v91;
    while ( _R8 != v91 );
  }
  return result;
}


char *__fastcall LayoutRule::addStackPanelItemRemainderSizeTerms(int a1, int a2, int a3, char a4)
{
  int v4; // r6@1
  int v5; // r5@1
  UIControl *v6; // r7@1
  __int64 v7; // r0@1
  int v8; // r0@4
  unsigned int *v9; // r2@5
  unsigned int v10; // r1@7
  char *result; // r0@12
  __int64 i; // r10@12
  int v13; // r0@14
  unsigned int *v14; // r0@15
  unsigned int v15; // r1@17
  __int64 v16; // r0@20
  int v17; // r0@23
  unsigned int *v18; // r2@24
  unsigned int v19; // r1@26
  unsigned int *v20; // r2@32
  unsigned int v21; // r1@34
  char v22; // [sp+0h] [bp-68h]@1
  int v23; // [sp+4h] [bp-64h]@20
  int v24; // [sp+8h] [bp-60h]@20
  int v25; // [sp+Ch] [bp-5Ch]@14
  char *v26; // [sp+10h] [bp-58h]@14
  char v27; // [sp+14h] [bp-54h]@20
  int v28; // [sp+1Ch] [bp-4Ch]@23
  int v29; // [sp+28h] [bp-40h]@1
  int v30; // [sp+2Ch] [bp-3Ch]@1
  char v31; // [sp+30h] [bp-38h]@1
  int v32; // [sp+38h] [bp-30h]@4

  v4 = a1;
  v5 = a3;
  v22 = a4;
  v6 = (UIControl *)a2;
  VariableRef::VariableRef((int)&v31, a2, a4);
  v30 = 1065353216;
  v29 = 12;
  v7 = *(_QWORD *)(v4 + 4);
  if ( (_DWORD)v7 == HIDWORD(v7) )
  {
    std::vector<LayoutRuleTerm,std::allocator<LayoutRuleTerm>>::_M_emplace_back_aux<VariableRef,float,LayoutRuleTermType>(
      (unsigned __int64 *)v4,
      (int)&v31,
      &v30,
      &v29);
  }
  else
    LayoutRuleTerm::LayoutRuleTerm(v7, (int)&v31, 1065353216, 12);
    *(_DWORD *)(v4 + 4) += 40;
  v8 = v32;
  if ( v32 )
    v9 = (unsigned int *)(v32 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 == 1 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v8 + 12))(v8);
  result = UIControl::getChildren(v6);
  for ( i = *(_QWORD *)result; (_DWORD)i != HIDWORD(i); LODWORD(i) = i + 8 )
    result = *(char **)i;
    if ( *(_DWORD *)i != v5 )
      v25 = *(_DWORD *)i;
      v13 = *(_DWORD *)(i + 4);
      v26 = (char *)v13;
      if ( v13 )
      {
        v14 = (unsigned int *)(v13 + 8);
        if ( &pthread_create )
        {
          __dmb();
          do
            v15 = __ldrex(v14);
          while ( __strex(v15 + 1, v14) );
        }
        else
          ++*v14;
      }
      VariableRef::VariableRef((int)&v27, (int)&v25, v22);
      v24 = -1082130432;
      v23 = 13;
      v16 = *(_QWORD *)(v4 + 4);
      if ( (_DWORD)v16 == HIDWORD(v16) )
        std::vector<LayoutRuleTerm,std::allocator<LayoutRuleTerm>>::_M_emplace_back_aux<VariableRef,float,LayoutRuleTermType>(
          (unsigned __int64 *)v4,
          (int)&v27,
          &v24,
          &v23);
      else
        LayoutRuleTerm::LayoutRuleTerm(v16, (int)&v27, -1082130432, 13);
        *(_DWORD *)(v4 + 4) += 40;
      v17 = v28;
      if ( v28 )
        v18 = (unsigned int *)(v28 + 8);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 == 1 )
          (*(void (**)(void))(*(_DWORD *)v17 + 12))();
      result = v26;
      if ( v26 )
        v20 = (unsigned int *)(v26 + 8);
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
          v21 = (*v20)--;
        if ( v21 == 1 )
          result = (char *)(*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


signed int __fastcall LayoutRule::isActive(LayoutRule *this)
{
  __int64 v1; // r1@1
  signed int result; // r0@1

  v1 = *(_QWORD *)this;
  result = 0;
  if ( (_DWORD)v1 != HIDWORD(v1) )
    result = 1;
  return result;
}


void __fastcall LayoutRule::getDependantVariables(LayoutRule *this, unsigned __int64 *a2)
{
  LayoutRule::getDependantVariables(this, a2);
}


void __fastcall LayoutRule::getDependantVariables(LayoutRule *this, unsigned __int64 *a2)
{
  LayoutRule *v2; // r10@1
  int i; // r6@1
  int v4; // r8@1
  int v5; // r5@2
  int v6; // r7@2
  __int64 v7; // r0@6
  int v8; // r2@7
  unsigned int v9; // r2@10
  int v10; // r2@14
  char v11; // r3@14

  v2 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v4 = *a2 >> 32;
  for ( i = *a2; i != v4; i += 40 )
  {
    v6 = *(_QWORD *)(i + 4) >> 32;
    v5 = *(_QWORD *)(i + 4);
    while ( v5 != v6 )
    {
      if ( VariableRef::isValid((VariableRef *)v5) != 1 )
        goto LABEL_3;
      v7 = *(_QWORD *)((char *)v2 + 4);
      if ( (_DWORD)v7 == HIDWORD(v7) )
      {
        std::vector<VariableRef,std::allocator<VariableRef>>::_M_emplace_back_aux<VariableRef const&>(
          (unsigned __int64 *)v2,
          v5);
LABEL_3:
        v5 += 20;
      }
      else
        *(_QWORD *)v7 = *(_QWORD *)v5;
        HIDWORD(v7) = v7;
        v8 = *(_DWORD *)(v5 + 8);
        *(_DWORD *)(v7 + 8) = v8;
        if ( v8 )
        {
          HIDWORD(v7) = v8 + 8;
          if ( &pthread_create )
          {
            __dmb();
            do
              v9 = __ldrex((unsigned int *)HIDWORD(v7));
            while ( __strex(v9 + 1, (unsigned int *)HIDWORD(v7)) );
            HIDWORD(v7) = *((_DWORD *)v2 + 1);
          }
          else
            ++*(_DWORD *)HIDWORD(v7);
            HIDWORD(v7) = v7;
        }
        v10 = *(_DWORD *)(v5 + 12);
        v11 = *(_BYTE *)(v5 + 16);
        *(_BYTE *)(v7 + 16) = v11;
        *(_DWORD *)(v7 + 12) = v10;
        *((_DWORD *)v2 + 1) = HIDWORD(v7) + 20;
    }
  }
}


int __fastcall LayoutRule::addFillGridDimensionTerm(int a1, int a2, int a3, char a4, int a5)
{
  int v5; // r9@1
  char v6; // r5@1
  int v7; // r4@1
  _DWORD *v8; // r0@3
  int v9; // r2@3
  bool v10; // zf@3
  unsigned int *v11; // r2@4
  unsigned int v12; // r3@6
  int v13; // r2@9
  int v14; // r2@9
  unsigned int *v15; // r2@10
  unsigned int v16; // r3@12
  int v17; // r2@15
  __int64 v18; // r0@15
  int v19; // r2@17
  unsigned int v20; // r3@17
  unsigned int v21; // r2@19
  unsigned int v22; // r11@19
  char *v23; // r5@25
  int v24; // r0@27
  int v25; // r6@27
  int v26; // r10@27
  void (*v27)(void); // r3@29
  int v28; // r4@31
  int v29; // r8@31
  int v30; // r0@32
  unsigned int *v31; // r2@33
  unsigned int v32; // r1@35
  int v33; // r4@46
  __int64 v34; // r4@49
  int v35; // r0@50
  unsigned int *v36; // r2@51
  unsigned int v37; // r1@53
  int v38; // r0@62
  unsigned int *v39; // r2@63
  unsigned int v40; // r1@65
  int result; // r0@70
  unsigned int *v42; // r2@71
  unsigned int v43; // r1@73
  unsigned __int64 v44; // [sp+4h] [bp-6Ch]@28
  int v45; // [sp+Ch] [bp-64h]@15
  int v46; // [sp+10h] [bp-60h]@3
  int v47; // [sp+14h] [bp-5Ch]@3
  int v48; // [sp+18h] [bp-58h]@3
  int v49; // [sp+1Ch] [bp-54h]@9
  char v50; // [sp+20h] [bp-50h]@9
  int v51; // [sp+24h] [bp-4Ch]@3
  int v52; // [sp+28h] [bp-48h]@9
  int v53; // [sp+2Ch] [bp-44h]@9
  int v54; // [sp+30h] [bp-40h]@15
  char v55; // [sp+34h] [bp-3Ch]@15
  char *v56; // [sp+38h] [bp-38h]@3
  char *v57; // [sp+3Ch] [bp-34h]@3
  char *v58; // [sp+40h] [bp-30h]@3
  int v59; // [sp+44h] [bp-2Ch]@1
  char v60; // [sp+48h] [bp-28h]@1

  v5 = a1;
  v6 = 2;
  v59 = a5;
  v60 = a4;
  v7 = a3;
  if ( a5 == 1 )
    v6 = 3;
  VariableRef::VariableRef((int)&v46, a2, v6);
  VariableRef::VariableRef((int)&v51, v7, v6);
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v8 = operator new(0x28u);
  *v8 = v46;
  v8[1] = v47;
  v9 = v48;
  v56 = (char *)v8;
  v58 = (char *)(v8 + 10);
  v10 = v48 == 0;
  v8[2] = v48;
  if ( !v10 )
  {
    v11 = (unsigned int *)(v9 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
    }
    else
      ++*v11;
  }
  v13 = v49;
  *((_BYTE *)v8 + 16) = v50;
  v8[3] = v13;
  v8[5] = v51;
  v8[6] = v52;
  v14 = v53;
  v8[7] = v53;
  if ( v14 )
    v15 = (unsigned int *)(v14 + 8);
        v16 = __ldrex(v15);
      while ( __strex(v16 + 1, v15) );
      ++*v15;
  v17 = v54;
  *((_BYTE *)v8 + 36) = v55;
  v8[8] = v17;
  v57 = (char *)(v8 + 10);
  v45 = 17;
  v18 = *(_QWORD *)(v5 + 4);
  if ( (_DWORD)v18 == HIDWORD(v18) )
    HIDWORD(v18) = *(_DWORD *)v5;
    v19 = ((signed int)v18 - *(_DWORD *)v5) >> 3;
    v20 = -858993459 * v19;
    if ( (_DWORD)v18 == *(_DWORD *)v5 )
      v20 = 1;
    v21 = v20 + -858993459 * v19;
    v22 = v21;
    if ( v21 > 0x6666666 )
      v22 = 107374182;
    if ( v21 < v20 )
    if ( v22 )
      if ( v22 >= 0x6666667 )
        sub_21E57F4();
      v23 = (char *)operator new(40 * v22);
      LODWORD(v18) = *(_QWORD *)v5 >> 32;
      HIDWORD(v18) = *(_QWORD *)v5;
      v23 = 0;
    sub_12C6398((int)&v23[v18 - HIDWORD(v18)], (int)&v56, (__int64 *)&v59, &v45);
    v24 = std::uninitialized_copy<LayoutRuleTerm *,LayoutRuleTerm *>(*(_QWORD *)v5, *(_QWORD *)v5 >> 32, (int)v23);
    v26 = *(_QWORD *)v5 >> 32;
    v25 = *(_QWORD *)v5;
    if ( v25 != v26 )
      v44 = __PAIR__((unsigned int)v23, v24);
      {
        v27 = *(void (**)(void))(v25 + 24);
        if ( v27 )
          v27();
        v29 = *(_QWORD *)(v25 + 4) >> 32;
        v28 = *(_QWORD *)(v25 + 4);
        if ( v28 != v29 )
        {
          do
          {
            v30 = *(_DWORD *)(v28 + 8);
            if ( v30 )
            {
              v31 = (unsigned int *)(v30 + 8);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v32 = __ldrex(v31);
                while ( __strex(v32 - 1, v31) );
              }
              else
                v32 = (*v31)--;
              if ( v32 == 1 )
                (*(void (**)(void))(*(_DWORD *)v30 + 12))();
            }
            v28 += 20;
          }
          while ( v28 != v29 );
          v28 = *(_DWORD *)(v25 + 4);
        }
        if ( v28 )
          operator delete((void *)v28);
        v25 += 40;
      }
      while ( v25 != v26 );
      v25 = *(_DWORD *)v5;
      v23 = (char *)HIDWORD(v44);
      v24 = v44;
    v33 = v24 + 40;
    if ( v25 )
      operator delete((void *)v25);
    *(_DWORD *)v5 = v23;
    *(_DWORD *)(v5 + 4) = v33;
    *(_DWORD *)(v5 + 8) = &v23[40 * v22];
  else
    sub_12C6398(v18, (int)&v56, (__int64 *)&v59, &v45);
    *(_DWORD *)(v5 + 4) += 40;
  v34 = *(_QWORD *)&v56;
  if ( v56 != v57 )
    do
      v35 = *(_DWORD *)(v34 + 8);
      if ( v35 )
        v36 = (unsigned int *)(v35 + 8);
        if ( &pthread_create )
          __dmb();
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
        else
          v37 = (*v36)--;
        if ( v37 == 1 )
          (*(void (**)(void))(*(_DWORD *)v35 + 12))();
      LODWORD(v34) = v34 + 20;
    while ( (_DWORD)v34 != HIDWORD(v34) );
    LODWORD(v34) = v56;
  if ( (_DWORD)v34 )
    operator delete((void *)v34);
  v38 = v53;
  if ( v53 )
    v39 = (unsigned int *)(v53 + 8);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 == 1 )
      (*(void (**)(void))(*(_DWORD *)v38 + 12))();
  result = v48;
  if ( v48 )
    v42 = (unsigned int *)(v48 + 8);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


void __fastcall LayoutRule::clearTerms(LayoutRule *this)
{
  LayoutRule::clearTerms(this);
}


int __fastcall LayoutRule::LayoutRule(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


int __fastcall LayoutRule::compute(LayoutRule *this, int a2, int a3)
{
  __int64 v3; // r4@1
  int result; // r0@4

  v3 = *(_QWORD *)this;
  __asm { VLDR            S16, =0.0 }
  if ( (_DWORD)v3 != HIDWORD(v3) )
  {
    do
    {
      _R0 = LayoutRuleTerm::compute((LayoutRuleTerm *)v3, a2, a3);
      __asm { VMOV            S0, R0 }
      LODWORD(v3) = v3 + 40;
      __asm { VADD.F32        S16, S0, S16 }
    }
    while ( !_ZF );
  }
  __asm { VMOV            R0, S16 }
  return result;
}


int __fastcall LayoutRule::removeDependsOnMeEntries(int result)
{
  __int64 i; // r4@1

  for ( i = *(_QWORD *)result; HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 40 )
    result = LayoutRuleTerm::removeDependsOnMeEntries((LayoutRuleTerm *)i);
  return result;
}


int __fastcall LayoutRule::addRescalingGridDimensionTerm(int a1, int a2, int a3, char a4, int a5)
{
  int v5; // r9@1
  char v6; // r5@1
  int v7; // r7@1
  int v8; // r4@1
  unsigned int *v9; // r1@2
  unsigned int v10; // r2@4
  char v11; // r5@7
  _DWORD *v12; // r0@9
  int v13; // r2@9
  bool v14; // zf@9
  unsigned int *v15; // r2@10
  unsigned int v16; // r3@12
  int v17; // r2@15
  int v18; // r2@15
  unsigned int *v19; // r2@16
  unsigned int v20; // r3@18
  int v21; // r2@21
  __int64 v22; // r0@21
  int v23; // r2@23
  unsigned int v24; // r3@23
  unsigned int v25; // r2@25
  unsigned int v26; // r11@25
  char *v27; // r5@31
  int v28; // r0@33
  int v29; // r6@33
  int v30; // r10@33
  void (*v31)(void); // r3@35
  int v32; // r5@37
  int v33; // r8@37
  int v34; // r0@38
  unsigned int *v35; // r2@39
  unsigned int v36; // r1@41
  int v37; // r4@52
  __int64 v38; // r4@55
  int v39; // r0@56
  unsigned int *v40; // r2@57
  unsigned int v41; // r1@59
  int v42; // r0@68
  unsigned int *v43; // r2@69
  unsigned int v44; // r1@71
  int v45; // r0@76
  unsigned int *v46; // r2@77
  unsigned int v47; // r1@79
  int v48; // r0@84
  unsigned int *v49; // r2@85
  unsigned int v50; // r1@87
  int result; // r0@92
  unsigned int *v52; // r2@93
  unsigned int v53; // r1@95
  unsigned __int64 v54; // [sp+4h] [bp-7Ch]@34
  int v55; // [sp+Ch] [bp-74h]@21
  int v56; // [sp+10h] [bp-70h]@9
  int v57; // [sp+14h] [bp-6Ch]@9
  int v58; // [sp+18h] [bp-68h]@9
  int v59; // [sp+1Ch] [bp-64h]@15
  char v60; // [sp+20h] [bp-60h]@15
  int v61; // [sp+24h] [bp-5Ch]@9
  int v62; // [sp+28h] [bp-58h]@15
  int v63; // [sp+2Ch] [bp-54h]@15
  int v64; // [sp+30h] [bp-50h]@21
  char v65; // [sp+34h] [bp-4Ch]@21
  char *v66; // [sp+38h] [bp-48h]@9
  char *v67; // [sp+3Ch] [bp-44h]@9
  char *v68; // [sp+40h] [bp-40h]@9
  int v69; // [sp+44h] [bp-3Ch]@1
  int v70; // [sp+48h] [bp-38h]@1
  int v71; // [sp+4Ch] [bp-34h]@7
  char v72; // [sp+50h] [bp-30h]@7
  int v73; // [sp+54h] [bp-2Ch]@1
  int v74; // [sp+58h] [bp-28h]@1

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  UIControl::weakRef((UIControl *)&v73, a2);
  v69 = v73;
  v70 = v74;
  if ( v74 )
  {
    v9 = (unsigned int *)(v74 + 8);
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
  v71 = a5;
  v72 = v6;
  v11 = 2;
  if ( a5 == 1 )
    v11 = 3;
  VariableRef::VariableRef((int)&v56, v8, v11);
  VariableRef::VariableRef((int)&v61, v7, v11);
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v12 = operator new(0x28u);
  *v12 = v56;
  v12[1] = v57;
  v13 = v58;
  v66 = (char *)v12;
  v68 = (char *)(v12 + 10);
  v14 = v58 == 0;
  v12[2] = v58;
  if ( !v14 )
    v15 = (unsigned int *)(v13 + 8);
        v16 = __ldrex(v15);
      while ( __strex(v16 + 1, v15) );
      ++*v15;
  v17 = v59;
  *((_BYTE *)v12 + 16) = v60;
  v12[3] = v17;
  v12[5] = v61;
  v12[6] = v62;
  v18 = v63;
  v12[7] = v63;
  if ( v18 )
    v19 = (unsigned int *)(v18 + 8);
        v20 = __ldrex(v19);
      while ( __strex(v20 + 1, v19) );
      ++*v19;
  v21 = v64;
  *((_BYTE *)v12 + 36) = v65;
  v12[8] = v21;
  v67 = (char *)(v12 + 10);
  v55 = 16;
  v22 = *(_QWORD *)(v5 + 4);
  if ( (_DWORD)v22 == HIDWORD(v22) )
    HIDWORD(v22) = *(_DWORD *)v5;
    v23 = ((signed int)v22 - *(_DWORD *)v5) >> 3;
    v24 = -858993459 * v23;
    if ( (_DWORD)v22 == *(_DWORD *)v5 )
      v24 = 1;
    v25 = v24 + -858993459 * v23;
    v26 = v25;
    if ( v25 > 0x6666666 )
      v26 = 107374182;
    if ( v25 < v24 )
    if ( v26 )
      if ( v26 >= 0x6666667 )
        sub_21E57F4();
      v27 = (char *)operator new(40 * v26);
      LODWORD(v22) = *(_QWORD *)v5 >> 32;
      HIDWORD(v22) = *(_QWORD *)v5;
      v27 = 0;
    sub_12C5E90((int)&v27[v22 - HIDWORD(v22)], (int)&v66, (int)&v69, &v55);
    v28 = std::uninitialized_copy<LayoutRuleTerm *,LayoutRuleTerm *>(*(_QWORD *)v5, *(_QWORD *)v5 >> 32, (int)v27);
    v30 = *(_QWORD *)v5 >> 32;
    v29 = *(_QWORD *)v5;
    if ( v29 != v30 )
      v54 = __PAIR__((unsigned int)v27, v28);
      {
        v31 = *(void (**)(void))(v29 + 24);
        if ( v31 )
          v31();
        v33 = *(_QWORD *)(v29 + 4) >> 32;
        v32 = *(_QWORD *)(v29 + 4);
        if ( v32 != v33 )
        {
          do
          {
            v34 = *(_DWORD *)(v32 + 8);
            if ( v34 )
            {
              v35 = (unsigned int *)(v34 + 8);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v36 = __ldrex(v35);
                while ( __strex(v36 - 1, v35) );
              }
              else
                v36 = (*v35)--;
              if ( v36 == 1 )
                (*(void (**)(void))(*(_DWORD *)v34 + 12))();
            }
            v32 += 20;
          }
          while ( v32 != v33 );
          v32 = *(_DWORD *)(v29 + 4);
        }
        if ( v32 )
          operator delete((void *)v32);
        v29 += 40;
      }
      while ( v29 != v30 );
      v29 = *(_DWORD *)v5;
      v27 = (char *)HIDWORD(v54);
      v28 = v54;
    v37 = v28 + 40;
    if ( v29 )
      operator delete((void *)v29);
    *(_DWORD *)v5 = v27;
    *(_DWORD *)(v5 + 4) = v37;
    *(_DWORD *)(v5 + 8) = &v27[40 * v26];
  else
    sub_12C5E90(v22, (int)&v66, (int)&v69, &v55);
    *(_DWORD *)(v5 + 4) += 40;
  v38 = *(_QWORD *)&v66;
  if ( v66 != v67 )
    do
      v39 = *(_DWORD *)(v38 + 8);
      if ( v39 )
        v40 = (unsigned int *)(v39 + 8);
        if ( &pthread_create )
          __dmb();
            v41 = __ldrex(v40);
          while ( __strex(v41 - 1, v40) );
        else
          v41 = (*v40)--;
        if ( v41 == 1 )
          (*(void (**)(void))(*(_DWORD *)v39 + 12))();
      LODWORD(v38) = v38 + 20;
    while ( (_DWORD)v38 != HIDWORD(v38) );
    LODWORD(v38) = v66;
  if ( (_DWORD)v38 )
    operator delete((void *)v38);
  v42 = v63;
  if ( v63 )
    v43 = (unsigned int *)(v63 + 8);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 == 1 )
      (*(void (**)(void))(*(_DWORD *)v42 + 12))();
  v45 = v58;
  if ( v58 )
    v46 = (unsigned int *)(v58 + 8);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 == 1 )
      (*(void (**)(void))(*(_DWORD *)v45 + 12))();
  v48 = v70;
  if ( v70 )
    v49 = (unsigned int *)(v70 + 8);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 == 1 )
      (*(void (**)(void))(*(_DWORD *)v48 + 12))();
  result = v74;
    v52 = (unsigned int *)(v74 + 8);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int __fastcall LayoutRule::addOffsetDeltaTerm(int a1, int a2, char a3)
{
  int v3; // r4@1
  __int64 v4; // r0@1
  int result; // r0@4
  unsigned int *v6; // r2@5
  unsigned int v7; // r1@7
  int v8; // [sp+4h] [bp-2Ch]@1
  int v9; // [sp+8h] [bp-28h]@1
  char v10; // [sp+Ch] [bp-24h]@1
  int v11; // [sp+14h] [bp-1Ch]@4

  v3 = a1;
  VariableRef::VariableRef((int)&v10, a2, a3);
  v9 = 1065353216;
  v8 = 18;
  v4 = *(_QWORD *)(v3 + 4);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    std::vector<LayoutRuleTerm,std::allocator<LayoutRuleTerm>>::_M_emplace_back_aux<VariableRef,float,LayoutRuleTermType>(
      (unsigned __int64 *)v3,
      (int)&v10,
      &v9,
      &v8);
  }
  else
    LayoutRuleTerm::LayoutRuleTerm(v4, (int)&v10, 1065353216, 18);
    *(_DWORD *)(v3 + 4) += 40;
  result = v11;
  if ( v11 )
    v6 = (unsigned int *)(v11 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 == 1 )
      result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}


int __fastcall LayoutRule::addAnchorTerm(float a1, int a2, int a3, unsigned int a4, int a5, int a6)
{
  float v6; // r4@1
  int result; // r0@1
  __int64 v12; // r0@11
  unsigned int *v14; // r2@16
  unsigned int v15; // r1@18
  char v16; // [sp+4h] [bp-34h]@11
  int v17; // [sp+Ch] [bp-2Ch]@15
  float v18; // [sp+18h] [bp-20h]@13
  int v19; // [sp+1Ch] [bp-1Ch]@1

  v6 = a1;
  __asm { VLDR            S16, [SP,#0x38+arg_0] }
  result = 3;
  v19 = a6;
  __asm { VSTR            S16, [SP,#0x38+var_20] }
  if ( !_ZF )
  {
    if ( a4 - 3 < 3 )
    {
LABEL_9:
      __asm
      {
        VMOV.F32        S0, #0.5
        VMUL.F32        S16, S16, S0
        VSTR            S16, [SP,#0x38+var_20]
      }
      goto LABEL_10;
    }
    if ( a4 > 2 )
LABEL_13:
    result = 0;
    v18 = 0.0;
    return result;
  }
  result = 2;
  if ( a4 > 7 )
    goto LABEL_10;
  if ( (1 << a4) & 0x49 )
    goto LABEL_13;
  if ( (1 << a4) & 0x92 )
    goto LABEL_9;
LABEL_10:
  __asm
    VCMPE.F32       S16, #0.0
    VMRS            APSR_nzcv, FPSCR
    VariableRef::VariableRef((int)&v16, a2, result);
    v12 = *(_QWORD *)(LODWORD(v6) + 4);
    if ( (_DWORD)v12 == HIDWORD(v12) )
      std::vector<LayoutRuleTerm,std::allocator<LayoutRuleTerm>>::_M_emplace_back_aux<VariableRef,float &,LayoutRuleTermType &>(
        (unsigned __int64 *)LODWORD(v6),
        (int)&v16,
        (int *)&v18,
        &v19);
    else
      __asm { VMOV            R2, S16 }
      LayoutRuleTerm::LayoutRuleTerm(v12, (int)&v16, _R2, a6);
      *(_DWORD *)(LODWORD(v6) + 4) += 40;
    result = v17;
    if ( v17 )
      v14 = (unsigned int *)(v17 + 8);
      if ( &pthread_create )
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      else
        v15 = (*v14)--;
      if ( v15 == 1 )
        result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  return result;
}
