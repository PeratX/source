

_QWORD *__fastcall CompositeSceneStackView::CompositeSceneStackView(_QWORD *result, __int64 a2)
{
  *result = a2;
  return result;
}


unsigned int __fastcall CompositeSceneStackView::getSize(CompositeSceneStackView *this)
{
  int v1; // r0@1
  __int64 v2; // kr00_8@1
  __int64 v3; // kr08_8@1
  unsigned int v4; // r0@1
  signed int v5; // r2@1
  unsigned int v6; // r1@1
  signed int v7; // r3@1

  v2 = *(_QWORD *)this;
  v1 = *(_QWORD *)this >> 32;
  v3 = *(_QWORD *)v1;
  v4 = *(_DWORD *)(v1 + 28);
  v5 = HIDWORD(v3) - v3;
  v6 = *(_DWORD *)(v2 + 28);
  v7 = (*(_QWORD *)v2 >> 32) - *(_QWORD *)v2;
  if ( v4 > (HIDWORD(v3) - (signed int)v3) >> 3 )
    v4 = v5 >> 3;
  if ( v6 > v7 >> 3 )
    v6 = v7 >> 3;
  return (v7 >> 3) - v6 + (v5 >> 3) - v4;
}


int __fastcall CompositeSceneStackView::getTopScreen(int result, int a2)
{
  int v2; // r2@1
  int v3; // r1@3
  unsigned int v4; // r1@6

  v2 = *(_QWORD *)*(_DWORD *)(a2 + 4) >> 32;
  if ( (unsigned int)*(_QWORD *)*(_DWORD *)(a2 + 4) == v2 )
    v2 = *(_DWORD *)(*(_DWORD *)a2 + 4);
  *(_DWORD *)result = *(_DWORD *)(v2 - 8);
  v3 = *(_DWORD *)(v2 - 4);
  *(_DWORD *)(result + 4) = v3;
  if ( v3 )
  {
    result = v3 + 4;
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex((unsigned int *)result);
      while ( __strex(v4 + 1, (unsigned int *)result) );
    }
    else
      ++*(_DWORD *)result;
  }
  return result;
}


unsigned int __fastcall CompositeSceneStackView::_getScreenAtIndex(CompositeSceneStackView *this, unsigned int a2)
{
  __int64 v2; // kr00_8@1
  unsigned int v3; // r3@1
  signed int v4; // r2@1
  unsigned int v5; // r3@3
  unsigned int result; // r0@4

  v2 = *(_QWORD *)*(_DWORD *)this;
  v3 = *(_DWORD *)(*(_DWORD *)this + 28);
  v4 = HIDWORD(v2) - v2;
  if ( v3 > (HIDWORD(v2) - (signed int)v2) >> 3 )
    v3 = v4 >> 3;
  v5 = (v4 >> 3) - v3;
  if ( v5 <= a2 )
    result = **((_DWORD **)this + 1) + 8 * (a2 - v5);
  else
    result = v2 + 8 * a2;
  return result;
}


_QWORD *__fastcall CompositeSceneStackView::onGameEventNotification(int a1)
{
  _QWORD **v1; // r5@1
  __int64 v2; // r6@1
  int v3; // t1@2
  _QWORD *result; // r0@3
  int *v5; // r5@3 OVERLAPPED
  int *v6; // r6@3 OVERLAPPED
  int v7; // t1@4

  v1 = (_QWORD **)a1;
  v2 = *(_QWORD *)*(_DWORD *)(a1 + 4);
  while ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = *(_DWORD *)v2;
    LODWORD(v2) = v2 + 8;
    (*(void (**)(void))(*(_DWORD *)v3 + 40))();
  }
  result = *v1;
  for ( *(_QWORD *)&v5 = **v1; v6 != v5; result = (_QWORD *)(*(int (**)(void))(*(_DWORD *)v7 + 40))() )
    v7 = *v5;
    v5 += 2;
  return result;
}


unsigned int __fastcall CompositeSceneStackView::forEachVisibleScreen(unsigned __int64 *a1, int a2, int a3, int a4, int a5)
{
  unsigned __int64 *v5; // r6@1
  int v6; // r0@1
  unsigned __int64 v7; // kr00_8@1
  int v8; // r5@1
  int v9; // r7@1
  unsigned int v10; // lr@1
  unsigned int result; // r0@1
  int v12; // r4@1
  signed int v13; // r9@1
  unsigned int v14; // r1@1
  signed int v15; // r3@1
  unsigned int v16; // r12@1
  int v17; // r5@1
  int v18; // r8@1
  int v19; // r7@3
  int v20; // r3@5
  int v21; // r3@6
  int v22; // r2@6
  unsigned int v23; // r7@7
  bool v24; // cf@7
  bool v25; // zf@7
  int v26; // r3@7
  int v27; // r2@7
  unsigned int v28; // r8@7
  int v29; // r3@9
  int v30; // r5@9
  int v31; // r9@11
  int v32; // r10@11
  unsigned int v33; // r11@13
  unsigned int v34; // r5@13
  int v35; // r2@13
  int v36; // r0@16
  unsigned int v37; // r1@17
  int v38; // r2@17
  int v39; // r5@28
  int v40; // r7@28
  unsigned int v41; // r8@29
  __int64 v42; // kr20_8@29
  unsigned int v43; // r2@29
  unsigned int v44; // r4@29
  int v45; // r0@29
  int v46; // r0@32
  unsigned int v47; // r1@33
  int v48; // r2@33
  unsigned int v49; // r9@42
  int v50; // r5@42
  unsigned int v51; // r7@43
  __int64 v52; // kr28_8@43
  unsigned int v53; // r2@43
  unsigned int v54; // r4@43
  int v55; // r0@43
  int v56; // r0@46
  unsigned int v57; // r1@47
  int v58; // r2@47
  __int64 v59; // r10@50
  __int64 v60; // kr30_8@51
  unsigned int v61; // r2@51
  unsigned int v62; // r4@51
  int v63; // r0@51
  int v64; // r0@54
  unsigned int v65; // r1@56
  int v66; // r2@56
  __int64 v67; // kr38_8@61
  unsigned int v68; // r2@61
  unsigned int v69; // r4@61
  int v70; // r0@61
  int v71; // r0@64
  unsigned int v72; // r1@68
  int v73; // r2@68
  __int64 v74; // kr40_8@72
  unsigned int v75; // r2@72
  unsigned int v76; // r4@72
  int v77; // r0@72
  int v78; // r0@75
  unsigned int v79; // r1@76
  int v80; // r2@76
  int v81; // r0@79
  __int64 v82; // kr48_8@80
  unsigned int v83; // r2@80
  unsigned int v84; // r4@80
  int v85; // r0@80
  int v86; // r0@83
  unsigned int v87; // r1@84
  int v88; // r2@84
  unsigned int v89; // r2@89
  signed int v90; // r3@89
  signed int v91; // r4@89
  signed int v92; // r0@89
  unsigned int v93; // r1@92
  int v94; // r2@92
  int v95; // r1@94
  unsigned int v96; // r9@98
  int v97; // r5@98
  unsigned int v98; // r10@99
  __int64 v99; // kr50_8@99
  unsigned int v100; // r2@99
  unsigned int v101; // r7@99
  int v102; // r0@99
  int v103; // r0@102
  unsigned int v104; // r1@103
  int v105; // r2@103
  int v106; // r11@106
  __int64 v107; // kr58_8@107
  unsigned int v108; // r2@107
  unsigned int v109; // r4@107
  int v110; // r0@107
  int v111; // r0@110
  int v112; // r4@111
  unsigned int v113; // r1@112
  int v114; // r2@112
  __int64 v115; // kr60_8@117
  unsigned int v116; // r2@117
  unsigned int v117; // r7@117
  int v118; // r0@117
  int v119; // r0@120
  unsigned int v120; // r1@124
  int v121; // r2@124
  __int64 v122; // kr68_8@128
  unsigned int v123; // r2@128
  unsigned int v124; // r7@128
  int v125; // r0@128
  int v126; // r0@131
  unsigned int v127; // r1@132
  int v128; // r2@132
  int v129; // r0@135
  __int64 v130; // kr70_8@136
  unsigned int v131; // r2@136
  unsigned int v132; // r7@136
  int v133; // r0@136
  int v134; // r0@139
  unsigned int v135; // r1@140
  int v136; // r2@140
  unsigned int v137; // r2@146
  signed int v138; // r3@146
  signed int v139; // r7@146
  signed int v140; // r0@146
  unsigned int v141; // r1@149
  int v142; // r2@149
  int v143; // r1@151
  unsigned int v144; // [sp+8h] [bp-40h]@7
  int v145; // [sp+Ch] [bp-3Ch]@6
  int v146; // [sp+10h] [bp-38h]@7
  int v147; // [sp+14h] [bp-34h]@7
  int v148; // [sp+18h] [bp-30h]@1
  int v149; // [sp+1Ch] [bp-2Ch]@1
  unsigned int v150; // [sp+20h] [bp-28h]@6

  v148 = a4;
  v149 = a2;
  v5 = a1;
  v7 = *a1;
  v6 = *a1 >> 32;
  v9 = *(_QWORD *)v6 >> 32;
  v8 = *(_QWORD *)v6;
  v10 = *(_DWORD *)(v6 + 28);
  v12 = *(_QWORD *)v7 >> 32;
  result = *(_QWORD *)v7;
  v13 = v9 - v8;
  v14 = *(_DWORD *)(v7 + 28);
  v15 = v12 - result;
  v16 = (v9 - v8) >> 3;
  v17 = (v9 - v8) >> 3;
  v18 = (signed int)(v12 - result) >> 3;
  if ( v10 <= v16 )
    v17 = v10;
  v19 = (signed int)(v12 - result) >> 3;
  if ( v14 <= v15 >> 3 )
    v19 = *(_DWORD *)(v7 + 28);
  v20 = (v15 >> 3) - v19 + (v13 >> 3);
  if ( v20 != v17 )
  {
    v21 = v20 - v17;
    v145 = a3;
    v22 = v21 - 1;
    v150 = v21;
    if ( v21 == 1 )
    {
      v33 = 0;
      v41 = 0;
    }
    else
      v23 = ~v18;
      v24 = ~v14 >= ~v18;
      v25 = ~v14 == ~v18;
      v26 = ~v18;
      v147 = v22;
      v27 = v18 + v16;
      v146 = v18 + v16;
      v28 = ~v16;
      v144 = ~v14;
      if ( !v25 && v24 )
        v26 = ~v14;
      v29 = v26 + v27;
      v30 = ~v16;
      if ( ~v10 > v28 )
        v30 = ~v10;
      v31 = v29 + v30;
      v32 = 8 * (v29 + v30) + 8;
      while ( 1 )
      {
        v33 = v31 + 1;
        v34 = (signed int)(v12 - result) >> 3;
        v35 = (signed int)(v12 - result) >> 3;
        if ( v14 <= v34 )
          v35 = v14;
        if ( v33 >= ((signed int)(v12 - result) >> 3) - v35 )
        {
          v37 = ~v14;
          v38 = ~v34;
          if ( v37 > ~v34 )
            v38 = v37;
          v36 = **((_DWORD **)v5 + 1) + 8 * (-v34 - v38 + v31);
        }
        else
          v36 = result + v32;
        if ( (*(int (**)(void))(**(_DWORD **)v36 + 152))() != 1 )
          goto LABEL_23;
        if ( !v31 )
          break;
        v32 -= 8;
        --v31;
        v12 = *(_QWORD *)*(_DWORD *)v5 >> 32;
        result = *(_QWORD *)*(_DWORD *)v5;
        v14 = *(_DWORD *)(*(_DWORD *)v5 + 28);
      }
LABEL_23:
      if ( v147 )
        if ( v144 > v23 )
          v23 = v144;
        if ( ~v10 > v28 )
          v28 = ~v10;
        v39 = v146 + v23 + v28;
        v40 = 8 * v39 + 8;
        do
          v41 = v39 + 1;
          v42 = *(_QWORD *)*(_DWORD *)v5;
          v43 = *(_DWORD *)(*(_DWORD *)v5 + 28);
          v44 = (HIDWORD(v42) - (signed int)v42) >> 3;
          v45 = (HIDWORD(v42) - (signed int)v42) >> 3;
          if ( v43 <= v44 )
            v45 = *(_DWORD *)(*(_DWORD *)v5 + 28);
          if ( v41 >= ((HIDWORD(v42) - (signed int)v42) >> 3) - v45 )
          {
            v47 = ~v43;
            v48 = ~v44;
            if ( v47 > ~v44 )
              v48 = v47;
            v46 = **((_DWORD **)v5 + 1) + 8 * (-v44 - v48 + v39);
          }
          else
            v46 = v42 + v40;
          if ( !(*(int (**)(void))(**(_DWORD **)v46 + 200))() )
            goto LABEL_41;
          --v39;
          v40 -= 8;
        while ( v39 != -1 );
        v41 = 0;
      else
LABEL_41:
    if ( v33 < v150 )
      v49 = v33 - 1;
      v50 = 8 * v33;
      do
        v51 = v49++;
        v52 = *(_QWORD *)*(_DWORD *)v5;
        v53 = *(_DWORD *)(*(_DWORD *)v5 + 28);
        v54 = (HIDWORD(v52) - (signed int)v52) >> 3;
        v55 = (HIDWORD(v52) - (signed int)v52) >> 3;
        if ( v53 <= v54 )
          v55 = *(_DWORD *)(*(_DWORD *)v5 + 28);
        if ( v49 >= ((HIDWORD(v52) - (signed int)v52) >> 3) - v55 )
          v57 = ~v53;
          v58 = ~v54;
          if ( v57 > ~v54 )
            v58 = v57;
          v56 = **((_DWORD **)v5 + 1) + 8 * (-v54 - v58 + v51);
          v56 = v52 + v50;
        LODWORD(v59) = (*(int (**)(void))(**(_DWORD **)v56 + 184))();
        if ( v49 >= v41 )
          HIDWORD(v59) = 0;
          v60 = *(_QWORD *)*(_DWORD *)v5;
          v61 = *(_DWORD *)(*(_DWORD *)v5 + 28);
          v62 = (HIDWORD(v60) - (signed int)v60) >> 3;
          v63 = (HIDWORD(v60) - (signed int)v60) >> 3;
          if ( v61 <= v62 )
            v63 = *(_DWORD *)(*(_DWORD *)v5 + 28);
          if ( v49 >= ((HIDWORD(v60) - (signed int)v60) >> 3) - v63 )
            v65 = ~v61;
            v66 = ~v62;
            if ( v65 > ~v62 )
              v66 = v65;
            v64 = **((_DWORD **)v5 + 1) + 8 * (-v62 - v66 + v51);
            v64 = v60 + v50;
          HIDWORD(v59) = (*(int (**)(void))(**(_DWORD **)v64 + 192))();
        if ( a5 == 1 )
          v67 = *(_QWORD *)*(_DWORD *)v5;
          v68 = *(_DWORD *)(*(_DWORD *)v5 + 28);
          v69 = (HIDWORD(v67) - (signed int)v67) >> 3;
          v70 = (HIDWORD(v67) - (signed int)v67) >> 3;
          if ( v68 <= v69 )
            v70 = *(_DWORD *)(*(_DWORD *)v5 + 28);
          if ( v49 >= ((HIDWORD(v67) - (signed int)v67) >> 3) - v70 )
            v72 = ~v68;
            v73 = ~v69;
            if ( v72 > ~v69 )
              v73 = v72;
            v71 = **((_DWORD **)v5 + 1) + 8 * (-v69 - v73 + v51);
            v71 = v67 + v50;
          if ( (*(int (**)(void))(**(_DWORD **)v71 + 168))() )
            goto LABEL_97;
          v74 = *(_QWORD *)*(_DWORD *)v5;
          v75 = *(_DWORD *)(*(_DWORD *)v5 + 28);
          v76 = (HIDWORD(v74) - (signed int)v74) >> 3;
          v77 = (HIDWORD(v74) - (signed int)v74) >> 3;
          if ( v75 <= v76 )
            v77 = *(_DWORD *)(*(_DWORD *)v5 + 28);
          if ( v49 >= ((HIDWORD(v74) - (signed int)v74) >> 3) - v77 )
            v79 = ~v75;
            v80 = ~v76;
            if ( v79 > ~v76 )
              v80 = v79;
            v78 = **((_DWORD **)v5 + 1) + 8 * (-v76 - v80 + v51);
            v78 = v74 + v50;
          v81 = (*(int (**)(void))(**(_DWORD **)v78 + 196))();
          if ( v148 ^ 1 | v81 )
            goto LABEL_88;
        else if ( v148 != 1 )
          if ( !v59 )
            goto LABEL_89;
          goto LABEL_97;
        v82 = *(_QWORD *)*(_DWORD *)v5;
        v83 = *(_DWORD *)(*(_DWORD *)v5 + 28);
        v84 = (HIDWORD(v82) - (signed int)v82) >> 3;
        v85 = (HIDWORD(v82) - (signed int)v82) >> 3;
        if ( v83 <= v84 )
          v85 = *(_DWORD *)(*(_DWORD *)v5 + 28);
        if ( v49 >= ((HIDWORD(v82) - (signed int)v82) >> 3) - v85 )
          v87 = ~v83;
          v88 = ~v84;
          if ( v87 > ~v84 )
            v88 = v87;
          v86 = **((_DWORD **)v5 + 1) + 8 * (-v84 - v88 + v51);
          v86 = v82 + v50;
        v81 = (*(int (**)(void))(**(_DWORD **)v86 + 196))() & (v145 ^ 1);
LABEL_88:
        if ( !(v81 | HIDWORD(v59) | (unsigned int)v59) )
LABEL_89:
          v89 = *(_DWORD *)(*(_DWORD *)v5 + 28);
          v90 = (*(_QWORD *)*(_DWORD *)v5 >> 32) - *(_QWORD *)*(_DWORD *)v5;
          v91 = v90 >> 3;
          v92 = v90 >> 3;
          if ( v89 <= v90 >> 3 )
            v92 = *(_DWORD *)(*(_DWORD *)v5 + 28);
          if ( v49 >= (v90 >> 3) - v92 )
            v93 = ~v89;
            v94 = ~v91;
            if ( v93 > ~v91 )
              v94 = v93;
            v95 = **((_DWORD **)v5 + 1) + 8 * (-v91 - v94 + v51);
          if ( !*(_DWORD *)(v149 + 8) )
LABEL_156:
            sub_DA7654();
          (*(void (**)(void))(v149 + 12))();
LABEL_97:
        v50 += 8;
      while ( v51 + 2 < v150 );
    v96 = -1;
    v97 = 0;
    while ( 1 )
      v98 = v96++;
      v99 = *(_QWORD *)*(_DWORD *)v5;
      v100 = *(_DWORD *)(*(_DWORD *)v5 + 28);
      v101 = (HIDWORD(v99) - (signed int)v99) >> 3;
      v102 = (HIDWORD(v99) - (signed int)v99) >> 3;
      if ( v100 <= v101 )
        v102 = *(_DWORD *)(*(_DWORD *)v5 + 28);
      if ( v96 >= ((HIDWORD(v99) - (signed int)v99) >> 3) - v102 )
        v104 = ~v100;
        v105 = ~v101;
        if ( v104 > ~v101 )
          v105 = v104;
        v103 = **((_DWORD **)v5 + 1) + 8 * (-v101 - v105 + v98);
        v103 = v99 + v97;
      v106 = (*(int (**)(void))(**(_DWORD **)v103 + 184))();
      if ( v96 >= v41 )
        v112 = 0;
        v107 = *(_QWORD *)*(_DWORD *)v5;
        v108 = *(_DWORD *)(*(_DWORD *)v5 + 28);
        v109 = (HIDWORD(v107) - (signed int)v107) >> 3;
        v110 = (HIDWORD(v107) - (signed int)v107) >> 3;
        if ( v108 <= v109 )
          v110 = *(_DWORD *)(*(_DWORD *)v5 + 28);
        if ( v96 >= ((HIDWORD(v107) - (signed int)v107) >> 3) - v110 )
          v113 = ~v108;
          v114 = ~v109;
          if ( v113 > ~v109 )
            v114 = v113;
          v111 = **((_DWORD **)v5 + 1) + 8 * (-v109 - v114 + v98);
          v111 = v107 + v97;
        v112 = (*(int (**)(void))(**(_DWORD **)v111 + 192))();
      if ( a5 != 1 )
        break;
      v115 = *(_QWORD *)*(_DWORD *)v5;
      v116 = *(_DWORD *)(*(_DWORD *)v5 + 28);
      v117 = (HIDWORD(v115) - (signed int)v115) >> 3;
      v118 = (HIDWORD(v115) - (signed int)v115) >> 3;
      if ( v116 <= v117 )
        v118 = *(_DWORD *)(*(_DWORD *)v5 + 28);
      if ( v96 >= ((HIDWORD(v115) - (signed int)v115) >> 3) - v118 )
        v120 = ~v116;
        v121 = ~v117;
        if ( v120 > ~v117 )
          v121 = v120;
        v119 = **((_DWORD **)v5 + 1) + 8 * (-v117 - v121 + v98);
        v119 = v115 + v97;
      if ( (*(int (**)(void))(**(_DWORD **)v119 + 168))() )
        goto LABEL_154;
      v122 = *(_QWORD *)*(_DWORD *)v5;
      v123 = *(_DWORD *)(*(_DWORD *)v5 + 28);
      v124 = (HIDWORD(v122) - (signed int)v122) >> 3;
      v125 = (HIDWORD(v122) - (signed int)v122) >> 3;
      if ( v123 <= v124 )
        v125 = *(_DWORD *)(*(_DWORD *)v5 + 28);
      if ( v96 >= ((HIDWORD(v122) - (signed int)v122) >> 3) - v125 )
        v127 = ~v123;
        v128 = ~v124;
        if ( v127 > ~v124 )
          v128 = v127;
        v126 = **((_DWORD **)v5 + 1) + 8 * (-v124 - v128 + v98);
        v126 = v122 + v97;
      v129 = (*(int (**)(void))(**(_DWORD **)v126 + 196))();
      if ( !(v148 ^ 1 | v129) )
        goto LABEL_136;
LABEL_144:
      if ( v129 | v112 || v106 != 1 )
LABEL_146:
      v137 = *(_DWORD *)(*(_DWORD *)v5 + 28);
      v138 = (*(_QWORD *)*(_DWORD *)v5 >> 32) - *(_QWORD *)*(_DWORD *)v5;
      v139 = v138 >> 3;
      v140 = v138 >> 3;
      if ( v137 <= v138 >> 3 )
        v140 = *(_DWORD *)(*(_DWORD *)v5 + 28);
      if ( v96 >= (v138 >> 3) - v140 )
        v141 = ~v137;
        v142 = ~v139;
        if ( v141 > ~v139 )
          v142 = v141;
        v143 = **((_DWORD **)v5 + 1) + 8 * (-v139 - v142 + v98);
      if ( !*(_DWORD *)(v149 + 8) )
        goto LABEL_156;
      (*(void (**)(void))(v149 + 12))();
LABEL_154:
      v97 += 8;
      result = v98 + 2;
      if ( v98 + 2 >= v150 )
        return result;
    if ( v148 != 1 )
      if ( v106 ^ 1 | v112 )
      goto LABEL_146;
LABEL_136:
    v130 = *(_QWORD *)*(_DWORD *)v5;
    v131 = *(_DWORD *)(*(_DWORD *)v5 + 28);
    v132 = (HIDWORD(v130) - (signed int)v130) >> 3;
    v133 = (HIDWORD(v130) - (signed int)v130) >> 3;
    if ( v131 <= v132 )
      v133 = *(_DWORD *)(*(_DWORD *)v5 + 28);
    if ( v96 >= ((HIDWORD(v130) - (signed int)v130) >> 3) - v133 )
      v135 = ~v131;
      v136 = ~v132;
      if ( v135 > ~v132 )
        v136 = v135;
      v134 = **((_DWORD **)v5 + 1) + 8 * (-v132 - v136 + v98);
      v134 = v130 + v97;
    v129 = (*(int (**)(void))(**(_DWORD **)v134 + 196))() & (v145 ^ 1);
    goto LABEL_144;
  }
  return result;
}


int __fastcall CompositeSceneStackView::forEachScreen(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r8@1
  void (*v5)(void); // r3@2
  __int64 *v6; // r6@2
  void (__fastcall *v7)(char *); // r7@2
  __int64 v8; // kr00_8@4
  int v9; // r6@5
  int v10; // r0@7
  bool v11; // zf@7
  void (*v12)(void); // r3@13
  unsigned __int64 *v13; // r5@13
  void (__fastcall *v14)(char *); // r7@13
  int v15; // r0@15
  int v16; // r6@15
  int v17; // r5@16
  int v18; // r0@18
  bool v19; // zf@18
  int (*v20)(void); // r3@26
  unsigned __int64 *v21; // r5@26
  void (__fastcall *v22)(char *, int, signed int); // r7@26
  int result; // r0@28
  int v24; // r6@28
  int v25; // r4@29
  bool v26; // zf@31
  int (*v27)(void); // r3@39
  unsigned __int64 *v28; // r5@39
  void (__fastcall *v29)(int *, int, signed int); // r7@39
  int v30; // r4@41
  int v31; // r6@42
  bool v32; // zf@44
  int v33; // [sp+0h] [bp-58h]@40
  int (*v34)(void); // [sp+8h] [bp-50h]@39
  int (__fastcall *v35)(int *, int); // [sp+Ch] [bp-4Ch]@40
  char v36; // [sp+10h] [bp-48h]@14
  void (*v37)(void); // [sp+18h] [bp-40h]@13
  int (__fastcall *v38)(char *, int); // [sp+1Ch] [bp-3Ch]@14
  char v39; // [sp+20h] [bp-38h]@27
  int (*v40)(void); // [sp+28h] [bp-30h]@26
  int (__fastcall *v41)(char *, int); // [sp+2Ch] [bp-2Ch]@27
  char v42; // [sp+30h] [bp-28h]@3
  void (*v43)(void); // [sp+38h] [bp-20h]@2
  int (__fastcall *v44)(char *, int); // [sp+3Ch] [bp-1Ch]@3

  v3 = a2;
  v4 = a1;
  if ( a3 == 1 )
  {
    v5 = 0;
    v6 = *(__int64 **)(a1 + 4);
    v43 = 0;
    v7 = *(void (__fastcall **)(char *))(a2 + 8);
    if ( v7 )
    {
      v7(&v42);
      v44 = *(int (__fastcall **)(char *, int))(v3 + 12);
      v5 = *(void (**)(void))(v3 + 8);
      v43 = *(void (**)(void))(v3 + 8);
    }
    v8 = *v6;
    if ( HIDWORD(v8) != (_DWORD)v8 )
      v9 = HIDWORD(v8) - 8;
      do
      {
        if ( !v5 )
          sub_DA7654();
        v10 = v44(&v42, v9);
        v11 = (_DWORD)v8 == v9;
        v5 = v43;
        if ( (_DWORD)v8 != v9 )
        {
          v9 -= 8;
          v11 = (v10 ^ 1) == 1;
        }
      }
      while ( !v11 );
    if ( v5 )
      v5();
    v20 = 0;
    v21 = *(unsigned __int64 **)v4;
    v40 = 0;
    v22 = *(void (__fastcall **)(char *, int, signed int))(v3 + 8);
    if ( v22 )
      v22(&v39, v3, 2);
      v41 = *(int (__fastcall **)(char *, int))(v3 + 12);
      v20 = *(int (**)(void))(v3 + 8);
      v40 = *(int (**)(void))(v3 + 8);
    result = *v21 >> 32;
    v24 = *v21;
    if ( result != v24 )
      v25 = result - 8;
        if ( !v20 )
        result = v41(&v39, v25);
        v26 = v24 == v25;
        v20 = v40;
        if ( v24 != v25 )
          result ^= 1u;
          v25 -= 8;
          v26 = result == 1;
      while ( !v26 );
    if ( v20 )
      result = v20();
  }
  else
    v12 = 0;
    v13 = *(unsigned __int64 **)a1;
    v37 = 0;
    v14 = *(void (__fastcall **)(char *))(a2 + 8);
    if ( v14 )
      v14(&v36);
      v38 = *(int (__fastcall **)(char *, int))(v3 + 12);
      v12 = *(void (**)(void))(v3 + 8);
      v37 = *(void (**)(void))(v3 + 8);
    v15 = *v13 >> 32;
    v16 = *v13;
    if ( v16 != v15 )
      v17 = v15 - 8;
        if ( !v12 )
        v18 = v38(&v36, v16);
        v19 = v17 == v16;
        v12 = v37;
        if ( v17 != v16 )
          v16 += 8;
          v19 = (v18 ^ 1) == 1;
      while ( !v19 );
    if ( v12 )
      v12();
    v27 = 0;
    v28 = *(unsigned __int64 **)(v4 + 4);
    v34 = 0;
    v29 = *(void (__fastcall **)(int *, int, signed int))(v3 + 8);
    if ( v29 )
      v29(&v33, v3, 2);
      v35 = *(int (__fastcall **)(int *, int))(v3 + 12);
      v27 = *(int (**)(void))(v3 + 8);
      v34 = *(int (**)(void))(v3 + 8);
    result = *v28 >> 32;
    v30 = *v28;
    if ( v30 != result )
      v31 = result - 8;
        if ( !v27 )
        result = v35(&v33, v30);
        v32 = v31 == v30;
        v27 = v34;
        if ( v31 != v30 )
          v30 += 8;
          v32 = result == 1;
      while ( !v32 );
    if ( v27 )
      result = v27();
  return result;
}


signed int __fastcall CompositeSceneStackView::isEmpty(CompositeSceneStackView *this)
{
  CompositeSceneStackView *v1; // r1@1
  __int64 v2; // r2@1
  signed int result; // r0@1

  v1 = this;
  v2 = *(_QWORD *)*(_DWORD *)this;
  result = 0;
  if ( (_DWORD)v2 == HIDWORD(v2) && (unsigned int)*(_QWORD *)*((_DWORD *)v1 + 1) == *(_QWORD *)*((_DWORD *)v1 + 1) >> 32 )
    result = 1;
  return result;
}


int __fastcall CompositeSceneStackView::updateScheduledScreen(CompositeSceneStackView *this)
{
  CompositeSceneStackView *v1; // r4@1
  SceneStack *v2; // r0@1
  signed int v3; // r5@2
  SceneStack *v4; // r0@2

  v1 = this;
  v2 = (SceneStack *)*((_DWORD *)this + 1);
  if ( (unsigned int)*(_QWORD *)v2 == *(_QWORD *)v2 >> 32 )
  {
    v3 = SceneStack::updateScheduledScreen(*(SceneStack **)v1);
    v4 = (SceneStack *)*((_DWORD *)v1 + 1);
  }
  else
    v3 = SceneStack::updateScheduledScreen(v2);
    v4 = *(SceneStack **)v1;
  return SceneStack::updateScheduledScreen(v4) | v3;
}


int __fastcall CompositeSceneStackView::getTopScreen(CompositeSceneStackView *this)
{
  int v1; // r1@1

  v1 = *(_QWORD *)*((_DWORD *)this + 1) >> 32;
  if ( (unsigned int)*(_QWORD *)*((_DWORD *)this + 1) == v1 )
    v1 = *(_DWORD *)(*(_DWORD *)this + 4);
  return v1 - 8;
}


_DWORD *__fastcall CompositeSceneStackView::forEachAlwaysAcceptInputScreen(int a1, int a2, _DWORD *a3)
{
  unsigned __int64 **v3; // r8@1
  void (*v4)(void); // r3@1
  __int64 *v5; // r5@1
  int v6; // r9@1
  _DWORD *v7; // r4@1
  void (__fastcall *v8)(char *); // r7@1
  __int64 v9; // kr00_8@3
  _DWORD *v10; // r0@4
  _DWORD *v11; // r6@5
  int v12; // r0@5
  int (*v13)(void); // r3@14
  unsigned __int64 *v14; // r7@14
  void (__fastcall *v15)(char *, int, signed int); // r6@14
  _DWORD *result; // r0@16
  _DWORD *v17; // r6@18
  int v18; // r0@18
  char v19; // [sp+4h] [bp-3Ch]@15
  int (*v20)(void); // [sp+Ch] [bp-34h]@14
  void (__fastcall *v21)(char *, _DWORD *); // [sp+10h] [bp-30h]@15
  char v22; // [sp+14h] [bp-2Ch]@2
  void (*v23)(void); // [sp+1Ch] [bp-24h]@1
  void (__fastcall *v24)(char *, _DWORD *); // [sp+20h] [bp-20h]@2

  v3 = (unsigned __int64 **)a1;
  v4 = 0;
  v5 = *(__int64 **)(a1 + 4);
  v6 = a2;
  v23 = 0;
  v7 = a3;
  v8 = *(void (__fastcall **)(char *))(a2 + 8);
  if ( v8 )
  {
    v8(&v22);
    v24 = *(void (__fastcall **)(char *, _DWORD *))(v6 + 12);
    v4 = *(void (**)(void))(v6 + 8);
    v23 = *(void (**)(void))(v6 + 8);
  }
  v9 = *v5;
  if ( HIDWORD(v9) != (_DWORD)v9 )
    v10 = (_DWORD *)(HIDWORD(v9) - 8);
    do
    {
      v11 = v10;
      v12 = *v10;
      if ( v12 != *v7 && (*(int (**)(void))(*(_DWORD *)v12 + 180))() == 1 )
      {
        if ( !v23 )
          sub_DA7654();
        v24(&v22, v11);
      }
      v10 = v11 - 2;
    }
    while ( v11 != *(_DWORD **)v5 );
    v4 = v23;
  if ( v4 )
    v4();
  v13 = 0;
  v14 = *v3;
  v20 = 0;
  v15 = *(void (__fastcall **)(char *, int, signed int))(v6 + 8);
  if ( v15 )
    v15(&v19, v6, 2);
    v21 = *(void (__fastcall **)(char *, _DWORD *))(v6 + 12);
    v13 = *(int (**)(void))(v6 + 8);
    v20 = *(int (**)(void))(v6 + 8);
  result = (_DWORD *)(*v14 >> 32);
  if ( result != (_DWORD *)*v14 )
    result -= 2;
      v17 = result;
      v18 = *result;
      if ( v18 != *v7 && (*(int (**)(void))(*(_DWORD *)v18 + 180))() == 1 )
        if ( !v20 )
        v21(&v19, v17);
      result = v17 - 2;
    while ( v17 != *(_DWORD **)v14 );
    v13 = v20;
  if ( v13 )
    result = (_DWORD *)v13();
  return result;
}


_DWORD *__fastcall CompositeSceneStackView::forEachAlwaysAcceptInputScreenWithTop(int a1, int a2)
{
  int v2; // r8@1
  int v3; // r5@1
  int v4; // r0@1
  __int64 v5; // kr00_8@1
  _DWORD *v6; // r4@4
  void (*v7)(void); // r3@4
  __int64 *v8; // r7@4
  void (__fastcall *v9)(char *, int, signed int); // r6@4
  __int64 v10; // kr08_8@6
  _DWORD *v11; // r0@7
  _DWORD *v12; // r6@8
  int v13; // r0@8
  int (*v14)(void); // r3@17
  unsigned __int64 *v15; // r7@17
  void (__fastcall *v16)(char *, int, signed int); // r6@17
  _DWORD *result; // r0@19
  _DWORD *v18; // r6@21
  int v19; // r0@21
  char v20; // [sp+4h] [bp-3Ch]@18
  int (*v21)(void); // [sp+Ch] [bp-34h]@17
  void (__fastcall *v22)(char *, _DWORD *); // [sp+10h] [bp-30h]@18
  char v23; // [sp+14h] [bp-2Ch]@5
  void (*v24)(void); // [sp+1Ch] [bp-24h]@4
  void (__fastcall *v25)(char *, _DWORD *); // [sp+20h] [bp-20h]@5

  v2 = a1;
  v3 = a2;
  v5 = *(_QWORD *)*(_DWORD *)(a1 + 4);
  v4 = *(_QWORD *)*(_DWORD *)(a1 + 4) >> 32;
  if ( (_DWORD)v5 == v4 )
    v4 = *(_DWORD *)(*(_DWORD *)v2 + 4);
  if ( !*(_DWORD *)(a2 + 8) )
    sub_DA7654();
  v6 = (_DWORD *)(v4 - 8);
  (*(void (__fastcall **)(int, int))(a2 + 12))(a2, v4 - 8);
  v7 = 0;
  v8 = *(__int64 **)(v2 + 4);
  v24 = 0;
  v9 = *(void (__fastcall **)(char *, int, signed int))(v3 + 8);
  if ( v9 )
  {
    v9(&v23, v3, 2);
    v25 = *(void (__fastcall **)(char *, _DWORD *))(v3 + 12);
    v7 = *(void (**)(void))(v3 + 8);
    v24 = *(void (**)(void))(v3 + 8);
  }
  v10 = *v8;
  if ( HIDWORD(v10) != (_DWORD)v10 )
    v11 = (_DWORD *)(HIDWORD(v10) - 8);
    do
    {
      v12 = v11;
      v13 = *v11;
      if ( v13 != *v6 && (*(int (**)(void))(*(_DWORD *)v13 + 180))() == 1 )
      {
        if ( !v24 )
          sub_DA7654();
        v25(&v23, v12);
      }
      v11 = v12 - 2;
    }
    while ( v12 != *(_DWORD **)v8 );
    v7 = v24;
  if ( v7 )
    v7();
  v14 = 0;
  v15 = *(unsigned __int64 **)v2;
  v21 = 0;
  v16 = *(void (__fastcall **)(char *, int, signed int))(v3 + 8);
  if ( v16 )
    v16(&v20, v3, 2);
    v22 = *(void (__fastcall **)(char *, _DWORD *))(v3 + 12);
    v14 = *(int (**)(void))(v3 + 8);
    v21 = *(int (**)(void))(v3 + 8);
  result = (_DWORD *)(*v15 >> 32);
  if ( result != (_DWORD *)*v15 )
    result -= 2;
      v18 = result;
      v19 = *result;
      if ( v19 != *v6 && (*(int (**)(void))(*(_DWORD *)v19 + 180))() == 1 )
        if ( !v21 )
        v22(&v20, v18);
      result = v18 - 2;
    while ( v18 != *(_DWORD **)v15 );
    v14 = v21;
  if ( v14 )
    result = (_DWORD *)v14();
  return result;
}
