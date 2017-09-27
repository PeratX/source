

int __fastcall SmallHut::SmallHut(int result)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 36) = -1;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)result = &off_2724434;
  return result;
}


signed int __fastcall SmallHut::postProcess(SmallHut *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  SmallHut *v4; // r10@1
  const BoundingBox *v5; // r11@1
  unsigned __int64 v6; // r8@1
  int v7; // r7@2
  int v8; // r0@2
  int v9; // r12@3
  signed int v10; // r8@3
  signed int v11; // r9@3
  int v12; // r2@4
  int v13; // r4@5
  __int64 v14; // kr00_8@5
  int v15; // r0@5
  int v16; // r3@5
  bool v17; // nf@5
  unsigned __int8 v18; // vf@5
  signed int v19; // r0@5
  __int64 v20; // kr10_8@5
  signed int v21; // r2@7
  bool v22; // zf@9
  signed int v23; // r3@9
  signed int v24; // r6@11
  signed int v25; // r5@13
  int v26; // r0@17
  int v27; // r0@24
  int v28; // r4@26
  signed int v29; // r5@26
  void (__fastcall *v30)(SmallHut *, _DWORD, const BoundingBox *, signed int); // r7@26
  unsigned int v31; // r1@26
  int v32; // r1@27
  int *v33; // r6@27
  int v34; // r7@27
  BlockSelector *v35; // r1@28
  void (__fastcall *v36)(SmallHut *, _DWORD, const BoundingBox *, signed int); // r7@32
  void (__fastcall *v37)(SmallHut *, _DWORD, const BoundingBox *, signed int); // r7@32
  unsigned int v38; // r4@34
  void (__fastcall *v39)(SmallHut *, _DWORD, char *, int); // r7@34
  char *v40; // r2@34
  int v41; // r3@34
  unsigned int v42; // r4@36
  void (__fastcall *v43)(SmallHut *, _DWORD, char *, signed int); // r5@38
  void (__fastcall *v44)(SmallHut *, _DWORD, char *, signed int); // r5@38
  void (__fastcall *v45)(SmallHut *, _DWORD, char *, signed int); // r5@38
  void (__fastcall *v46)(SmallHut *, _DWORD, char *, signed int); // r5@38
  void (__fastcall *v47)(SmallHut *, _DWORD, char *, _DWORD); // r5@38
  void (__fastcall *v48)(SmallHut *, _DWORD, char *, _DWORD); // r5@38
  void (__fastcall *v49)(SmallHut *, _DWORD, char *, _DWORD); // r5@38
  void (__fastcall *v50)(SmallHut *, _DWORD, char *, signed int); // r5@38
  void (__fastcall *v51)(SmallHut *, _DWORD, char *, signed int); // r5@38
  void (__fastcall *v52)(SmallHut *, _DWORD, char *, signed int); // r5@38
  void (__fastcall *v53)(SmallHut *, _DWORD, const BoundingBox *, _DWORD); // r5@38
  void (__fastcall *v54)(SmallHut *, _DWORD, const BoundingBox *, signed int); // r5@38
  void (__fastcall *v55)(SmallHut *, _DWORD, const BoundingBox *, _DWORD); // r5@38
  void (__fastcall *v56)(SmallHut *, _DWORD, const BoundingBox *, signed int); // r5@38
  void (__fastcall *v57)(SmallHut *, _DWORD, const BoundingBox *, _DWORD); // r5@38
  void (__fastcall *v58)(SmallHut *, _DWORD, const BoundingBox *, signed int); // r5@38
  void (__fastcall *v59)(SmallHut *, _DWORD, const BoundingBox *, signed int); // r5@38
  void (__fastcall *v60)(SmallHut *, _DWORD, const BoundingBox *, signed int); // r5@38
  void (__fastcall *v61)(SmallHut *, _DWORD, char *, _DWORD); // r7@38
  void (__fastcall *v62)(SmallHut *, _DWORD, char *, signed int); // r7@38
  void (__fastcall *v63)(SmallHut *, _DWORD, char *); // r7@39
  void (__fastcall *v64)(SmallHut *, _DWORD, char *, _DWORD); // r5@39
  char v65; // r6@39
  char v66; // r0@39
  void (__fastcall *v67)(SmallHut *, _DWORD, __int16 *, signed int); // r7@40
  void (__fastcall *v68)(SmallHut *, _DWORD, __int16 *, signed int); // r7@40
  void (__fastcall *v69)(SmallHut *, _DWORD, const BoundingBox *, Random *); // r4@41
  void (__fastcall *v70)(SmallHut *, _DWORD, char *, signed int); // r5@44
  int v71; // r6@45
  void (__fastcall *v72)(SmallHut *, _DWORD, char *, _DWORD); // r4@46
  void (__fastcall *v73)(SmallHut *, _DWORD, char *, signed int); // r4@46
  void (__fastcall *v74)(SmallHut *, _DWORD, char *, signed int); // r4@46
  void (__fastcall *v75)(SmallHut *, _DWORD, char *, signed int); // r4@46
  unsigned __int64 v77; // [sp+20h] [bp-AC0h]@2
  Random *v78; // [sp+20h] [bp-AC0h]@29
  char v79; // [sp+28h] [bp-AB8h]@46
  char v80; // [sp+29h] [bp-AB7h]@46
  char v81; // [sp+2Ch] [bp-AB4h]@44
  char v82; // [sp+2Dh] [bp-AB3h]@44
  char v83; // [sp+30h] [bp-AB0h]@43
  char v84; // [sp+34h] [bp-AACh]@42
  __int16 v85; // [sp+38h] [bp-AA8h]@40
  __int16 v86; // [sp+3Ch] [bp-AA4h]@40
  char v87; // [sp+40h] [bp-AA0h]@39
  char v88; // [sp+41h] [bp-A9Fh]@39
  char v89; // [sp+44h] [bp-A9Ch]@39
  char v90; // [sp+45h] [bp-A9Bh]@39
  char v91; // [sp+48h] [bp-A98h]@38
  char v92; // [sp+49h] [bp-A97h]@38
  char v93; // [sp+4Ch] [bp-A94h]@38
  char v94; // [sp+4Dh] [bp-A93h]@38
  char v95; // [sp+50h] [bp-A90h]@38
  char v96; // [sp+51h] [bp-A8Fh]@38
  char v97; // [sp+54h] [bp-A8Ch]@38
  char v98; // [sp+55h] [bp-A8Bh]@38
  char v99; // [sp+58h] [bp-A88h]@38
  char v100; // [sp+59h] [bp-A87h]@38
  char v101; // [sp+5Ch] [bp-A84h]@38
  char v102; // [sp+5Dh] [bp-A83h]@38
  char v103; // [sp+60h] [bp-A80h]@38
  char v104; // [sp+61h] [bp-A7Fh]@38
  char v105; // [sp+64h] [bp-A7Ch]@38
  char v106; // [sp+65h] [bp-A7Bh]@38
  char v107; // [sp+68h] [bp-A78h]@38
  char v108; // [sp+69h] [bp-A77h]@38
  char v109; // [sp+6Ch] [bp-A74h]@38
  char v110; // [sp+6Dh] [bp-A73h]@38
  char v111; // [sp+70h] [bp-A70h]@38
  char v112; // [sp+71h] [bp-A6Fh]@38
  char v113; // [sp+74h] [bp-A6Ch]@38
  char v114; // [sp+75h] [bp-A6Bh]@38
  char v115; // [sp+78h] [bp-A68h]@38
  char v116; // [sp+79h] [bp-A67h]@38
  char v117; // [sp+7Ch] [bp-A64h]@38
  char v118; // [sp+7Dh] [bp-A63h]@38
  char v119; // [sp+80h] [bp-A60h]@38
  char v120; // [sp+81h] [bp-A5Fh]@38
  char v121; // [sp+84h] [bp-A5Ch]@38
  char v122; // [sp+85h] [bp-A5Bh]@38
  char v123; // [sp+88h] [bp-A58h]@38
  char v124; // [sp+89h] [bp-A57h]@38
  char v125; // [sp+8Ch] [bp-A54h]@38
  char v126; // [sp+8Dh] [bp-A53h]@38
  char v127; // [sp+90h] [bp-A50h]@38
  char v128; // [sp+91h] [bp-A4Fh]@38
  char v129; // [sp+94h] [bp-A4Ch]@38
  char v130; // [sp+95h] [bp-A4Bh]@38
  char v131; // [sp+98h] [bp-A48h]@38
  char v132; // [sp+99h] [bp-A47h]@38
  char v133; // [sp+9Ch] [bp-A44h]@38
  char v134; // [sp+9Dh] [bp-A43h]@38
  char v135; // [sp+A0h] [bp-A40h]@38
  char v136; // [sp+A1h] [bp-A3Fh]@38
  char v137; // [sp+A4h] [bp-A3Ch]@38
  char v138; // [sp+A5h] [bp-A3Bh]@38
  char v139; // [sp+A8h] [bp-A38h]@38
  char v140; // [sp+A9h] [bp-A37h]@38
  char v141; // [sp+ACh] [bp-A34h]@38
  char v142; // [sp+ADh] [bp-A33h]@38
  char v143; // [sp+B0h] [bp-A30h]@38
  char v144; // [sp+B1h] [bp-A2Fh]@38
  char v145; // [sp+B4h] [bp-A2Ch]@38
  char v146; // [sp+B5h] [bp-A2Bh]@38
  char v147; // [sp+B8h] [bp-A28h]@36
  char v148; // [sp+B9h] [bp-A27h]@36
  char v149; // [sp+BCh] [bp-A24h]@35
  char v150; // [sp+BDh] [bp-A23h]@35
  char v151; // [sp+C0h] [bp-A20h]@35
  char v152; // [sp+C1h] [bp-A1Fh]@35
  char v153; // [sp+C4h] [bp-A1Ch]@34
  char v154; // [sp+C5h] [bp-A1Bh]@34
  char v155; // [sp+C8h] [bp-A18h]@33
  char v156; // [sp+C9h] [bp-A17h]@33
  char v157; // [sp+CCh] [bp-A14h]@33
  char v158; // [sp+CDh] [bp-A13h]@33
  char v159; // [sp+D0h] [bp-A10h]@32
  char v160; // [sp+D1h] [bp-A0Fh]@32
  char v161; // [sp+D4h] [bp-A0Ch]@32
  char v162; // [sp+D5h] [bp-A0Bh]@32
  unsigned int v163; // [sp+D8h] [bp-A08h]@26
  unsigned int v164; // [sp+DCh] [bp-A04h]@26
  int v165; // [sp+A9Ch] [bp-44h]@26
  char v166; // [sp+AA0h] [bp-40h]@26
  int v167; // [sp+AA4h] [bp-3Ch]@26
  int v168; // [sp+AA8h] [bp-38h]@28
  char v169; // [sp+AACh] [bp-34h]@26
  char v170; // [sp+AADh] [bp-33h]@26
  char v171; // [sp+AB0h] [bp-30h]@26
  char v172; // [sp+AB1h] [bp-2Fh]@26
  char v173; // [sp+AB4h] [bp-2Ch]@31
  char v174; // [sp+AB5h] [bp-2Bh]@31
  char v175; // [sp+AB8h] [bp-28h]@31
  char v176; // [sp+AB9h] [bp-27h]@31

  v4 = this;
  v5 = a4;
  v6 = __PAIR__((unsigned int)a2, (unsigned int)a3);
  if ( *((_DWORD *)this + 9) > -1 )
  {
LABEL_26:
    v28 = 0;
    v29 = 1;
    v30 = *(void (__fastcall **)(SmallHut *, _DWORD, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v171 = BlockID::AIR;
    v169 = BlockID::AIR;
    v172 = 0;
    v170 = 0;
    v30(v4, HIDWORD(v6), v5, 1);
    v31 = *(_DWORD *)v6;
    v163 = v31;
    v165 = 625;
    v166 = 0;
    v167 = 0;
    v164 = v31;
    do
    {
      v32 = v31 ^ (v31 >> 30);
      v33 = (int *)(&v163 + v28);
      v34 = v28++ + 1812433253 * v32;
      v31 = v29++ + 1812433253 * v32;
      v33[2] = v34 + 1;
    }
    while ( v28 != 397 );
    v165 = 624;
    v168 = 398;
    v35 = (BlockSelector *)*((_DWORD *)v4 + 12);
    if ( v35 )
      v78 = (Random *)v6;
      j_StructurePiece::generateBox(v4, (BlockSource *)HIDWORD(v6), v5, 0, 0, 0, 3, 0, 4, 0, (Random *)&v163, v35);
    else
      v175 = *(_BYTE *)(Block::mCobblestone + 4);
      v176 = 0;
      v173 = *(_BYTE *)(Block::mCobblestone + 4);
      v174 = 0;
      j_StructurePiece::generateBox((int)v4, SHIDWORD(v6), (int)v5, 0, 0, 0, 3, 0, 4, (int)&v175, (int)&v173, 0);
    v36 = *(void (__fastcall **)(SmallHut *, _DWORD, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v161 = *(_BYTE *)(Block::mDirt + 4);
    v162 = 0;
    v159 = *(_BYTE *)(Block::mDirt + 4);
    v160 = 0;
    v36(v4, HIDWORD(v6), v5, 1);
    v37 = *(void (__fastcall **)(SmallHut *, _DWORD, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    if ( *((_BYTE *)v4 + 52) )
      v157 = *(_BYTE *)(Block::mLog + 4);
      v158 = 0;
      v155 = *(_BYTE *)(Block::mLog + 4);
      v156 = 0;
      v37(v4, HIDWORD(v6), v5, 1);
      if ( *((_BYTE *)v4 + 47) )
      {
        v38 = j_Random::_genRandInt32(v78);
        j_Random::_genRandInt32(v78);
        v39 = *(void (__fastcall **)(SmallHut *, _DWORD, char *, int))(*(_DWORD *)v4 + 36);
        v40 = &v153;
        v153 = *(_BYTE *)(Block::mWeb + 4);
        v154 = 0;
        v41 = 2 - ((v38 >> 27) & 1);
LABEL_37:
        v39(v4, HIDWORD(v6), v40, v41);
        goto LABEL_38;
      }
      v151 = *(_BYTE *)(Block::mLog + 4);
      v152 = 0;
      v149 = *(_BYTE *)(Block::mLog + 4);
      v150 = 0;
        v42 = j_Random::_genRandInt32(v78);
        v40 = &v147;
        v147 = *(_BYTE *)(Block::mWeb + 4);
        v148 = 0;
        v41 = 2 - ((v42 >> 27) & 1);
        goto LABEL_37;
LABEL_38:
    v43 = *(void (__fastcall **)(SmallHut *, _DWORD, char *, signed int))(*(_DWORD *)v4 + 36);
    v145 = *(_BYTE *)(Block::mLog + 4);
    v146 = 0;
    v43(v4, HIDWORD(v6), &v145, 1);
    v44 = *(void (__fastcall **)(SmallHut *, _DWORD, char *, signed int))(*(_DWORD *)v4 + 36);
    v143 = *(_BYTE *)(Block::mLog + 4);
    v144 = 0;
    v44(v4, HIDWORD(v6), &v143, 2);
    v45 = *(void (__fastcall **)(SmallHut *, _DWORD, char *, signed int))(*(_DWORD *)v4 + 36);
    v141 = *(_BYTE *)(Block::mLog + 4);
    v142 = 0;
    v45(v4, HIDWORD(v6), &v141, 1);
    v46 = *(void (__fastcall **)(SmallHut *, _DWORD, char *, signed int))(*(_DWORD *)v4 + 36);
    v139 = *(_BYTE *)(Block::mLog + 4);
    v140 = 0;
    v46(v4, HIDWORD(v6), &v139, 2);
    v47 = *(void (__fastcall **)(SmallHut *, _DWORD, char *, _DWORD))(*(_DWORD *)v4 + 36);
    v137 = *(_BYTE *)(Block::mLog + 4);
    v138 = 0;
    v47(v4, HIDWORD(v6), &v137, 0);
    v48 = *(void (__fastcall **)(SmallHut *, _DWORD, char *, _DWORD))(*(_DWORD *)v4 + 36);
    v135 = *(_BYTE *)(Block::mLog + 4);
    v136 = 0;
    v48(v4, HIDWORD(v6), &v135, 0);
    v49 = *(void (__fastcall **)(SmallHut *, _DWORD, char *, _DWORD))(*(_DWORD *)v4 + 36);
    v133 = *(_BYTE *)(Block::mLog + 4);
    v134 = 0;
    v49(v4, HIDWORD(v6), &v133, 0);
    v50 = *(void (__fastcall **)(SmallHut *, _DWORD, char *, signed int))(*(_DWORD *)v4 + 36);
    v131 = *(_BYTE *)(Block::mLog + 4);
    v132 = 0;
    v50(v4, HIDWORD(v6), &v131, 3);
    v51 = *(void (__fastcall **)(SmallHut *, _DWORD, char *, signed int))(*(_DWORD *)v4 + 36);
    v129 = *(_BYTE *)(Block::mLog + 4);
    v130 = 0;
    v51(v4, HIDWORD(v6), &v129, 3);
    v52 = *(void (__fastcall **)(SmallHut *, _DWORD, char *, signed int))(*(_DWORD *)v4 + 36);
    v127 = *(_BYTE *)(Block::mLog + 4);
    v128 = 0;
    v52(v4, HIDWORD(v6), &v127, 3);
    v53 = *(void (__fastcall **)(SmallHut *, _DWORD, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
    v125 = *(_BYTE *)(Block::mLog + 4);
    v126 = 0;
    v123 = *(_BYTE *)(Block::mLog + 4);
    v124 = 0;
    v53(v4, HIDWORD(v6), v5, 0);
    v54 = *(void (__fastcall **)(SmallHut *, _DWORD, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v121 = *(_BYTE *)(Block::mLog + 4);
    v122 = 0;
    v119 = *(_BYTE *)(Block::mLog + 4);
    v120 = 0;
    v54(v4, HIDWORD(v6), v5, 3);
    v55 = *(void (__fastcall **)(SmallHut *, _DWORD, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
    v117 = *(_BYTE *)(Block::mLog + 4);
    v118 = 0;
    v115 = *(_BYTE *)(Block::mLog + 4);
    v116 = 0;
    v55(v4, HIDWORD(v6), v5, 0);
    v56 = *(void (__fastcall **)(SmallHut *, _DWORD, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v113 = *(_BYTE *)(Block::mLog + 4);
    v114 = 0;
    v111 = *(_BYTE *)(Block::mLog + 4);
    v112 = 0;
    v56(v4, HIDWORD(v6), v5, 3);
    v57 = *(void (__fastcall **)(SmallHut *, _DWORD, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
    v109 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v110 = 0;
    v107 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v108 = 0;
    v57(v4, HIDWORD(v6), v5, 0);
    v58 = *(void (__fastcall **)(SmallHut *, _DWORD, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v105 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v106 = 0;
    v103 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v104 = 0;
    v58(v4, HIDWORD(v6), v5, 3);
    v59 = *(void (__fastcall **)(SmallHut *, _DWORD, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v101 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v102 = 0;
    v99 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v100 = 0;
    v59(v4, HIDWORD(v6), v5, 1);
    v60 = *(void (__fastcall **)(SmallHut *, _DWORD, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v97 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v98 = 0;
    v95 = *(_BYTE *)(Block::mWoodPlanks + 4);
    v96 = 0;
    v60(v4, HIDWORD(v6), v5, 1);
    v61 = *(void (__fastcall **)(SmallHut *, _DWORD, char *, _DWORD))(*(_DWORD *)v4 + 36);
    v93 = *(_BYTE *)(Block::mGlassPane + 4);
    v94 = 0;
    v61(v4, HIDWORD(v6), &v93, 0);
    v62 = *(void (__fastcall **)(SmallHut *, _DWORD, char *, signed int))(*(_DWORD *)v4 + 36);
    v91 = *(_BYTE *)(Block::mGlassPane + 4);
    v92 = 0;
    v62(v4, HIDWORD(v6), &v91, 3);
    if ( *((_DWORD *)v4 + 14) >= 1 )
      v63 = *(void (__fastcall **)(SmallHut *, _DWORD, char *))(*(_DWORD *)v4 + 36);
      v89 = *(_BYTE *)(Block::mFence + 4);
      v90 = 0;
      v63(v4, HIDWORD(v6), &v89);
      v64 = *(void (__fastcall **)(SmallHut *, _DWORD, char *, _DWORD))(*(_DWORD *)v4 + 36);
      v65 = *(_BYTE *)(Block::mWoolCarpet + 4);
      v66 = j_WoolCarpetBlock::getBlockDataForItemAuxValue((WoolCarpetBlock *)3, *(_DWORD *)v4);
      v87 = v65;
      v88 = v66;
      v64(v4, HIDWORD(v6), &v87, *((_DWORD *)v4 + 14));
    v67 = *(void (__fastcall **)(SmallHut *, _DWORD, __int16 *, signed int))(*(_DWORD *)v4 + 36);
    v86 = FullBlock::AIR;
    v67(v4, HIDWORD(v6), &v86, 1);
    v68 = *(void (__fastcall **)(SmallHut *, _DWORD, __int16 *, signed int))(*(_DWORD *)v4 + 36);
    v85 = FullBlock::AIR;
    v68(v4, HIDWORD(v6), &v85, 1);
    if ( !*((_BYTE *)v4 + 47) )
      v69 = *(void (__fastcall **)(SmallHut *, _DWORD, const BoundingBox *, Random *))(*(_DWORD *)v4 + 56);
      j_StructurePiece::getOrientationData(v4, (const Block *)Block::mWoodenDoor, 1);
      v69(v4, HIDWORD(v6), v5, v78);
    j_StructurePiece::getBlock((StructurePiece *)&v84, v4, SHIDWORD(v6), 1, 0, (const BoundingBox *)0xFFFFFFFF, (int)v5);
    if ( !v84 )
      j_StructurePiece::getBlock(
        (StructurePiece *)&v83,
        v4,
        SHIDWORD(v6),
        1,
        -1,
        (const BoundingBox *)0xFFFFFFFF,
        (int)v5);
      if ( v83 )
        v70 = *(void (__fastcall **)(SmallHut *, _DWORD, char *, signed int))(*(_DWORD *)v4 + 36);
        v81 = *(_BYTE *)(Block::mStoneStairs + 4);
        v82 = j_StructurePiece::getOrientationData(v4, (const Block *)Block::mStoneStairs, 3);
        v70(v4, HIDWORD(v6), &v81, 1);
    v71 = 0;
      j_StructurePiece::generateAirColumnUp(v4, (BlockSource *)HIDWORD(v6), 0, 6, v71, v5);
      v72 = *(void (__fastcall **)(SmallHut *, _DWORD, char *, _DWORD))(*(_DWORD *)v4 + 44);
      v79 = *(_BYTE *)(Block::mCobblestone + 4);
      v80 = 0;
      v72(v4, HIDWORD(v6), &v79, 0);
      j_StructurePiece::generateAirColumnUp(v4, (BlockSource *)HIDWORD(v6), 1, 6, v71, v5);
      v73 = *(void (__fastcall **)(SmallHut *, _DWORD, char *, signed int))(*(_DWORD *)v4 + 44);
      v73(v4, HIDWORD(v6), &v79, 1);
      j_StructurePiece::generateAirColumnUp(v4, (BlockSource *)HIDWORD(v6), 2, 6, v71, v5);
      v74 = *(void (__fastcall **)(SmallHut *, _DWORD, char *, signed int))(*(_DWORD *)v4 + 44);
      v74(v4, HIDWORD(v6), &v79, 2);
      j_StructurePiece::generateAirColumnUp(v4, (BlockSource *)HIDWORD(v6), 3, 6, v71, v5);
      v75 = *(void (__fastcall **)(SmallHut *, _DWORD, char *, signed int))(*(_DWORD *)v4 + 44);
      v75(v4, HIDWORD(v6), &v79, 3);
      ++v71;
    while ( v71 != 5 );
    return 1;
  }
  v77 = __PAIR__((unsigned int)a2, (unsigned int)a3);
  v7 = *((_DWORD *)this + 3);
  v8 = *((_DWORD *)this + 6);
  if ( v7 > v8 )
    goto LABEL_50;
  v9 = *((_DWORD *)v4 + 4);
  v10 = 0;
  v11 = 0;
  do
    v12 = *((_DWORD *)v4 + 1);
    if ( v12 <= v9 )
      do
        v13 = v12;
        v14 = *(_QWORD *)v5;
        v15 = *((_QWORD *)v5 + 1) >> 32;
        v16 = *((_QWORD *)v5 + 1);
        v18 = __OFSUB__(v15, v12);
        v17 = v15 - v12 < 0;
        v19 = 0;
        v20 = *((_QWORD *)v5 + 2);
        if ( !(v17 ^ v18) )
          v19 = 1;
        v21 = 0;
        if ( (signed int)v14 <= v13 )
          v21 = 1;
        v18 = __OFSUB__(v16, v7);
        v22 = v16 == v7;
        v17 = v16 - v7 < 0;
        v23 = 0;
        if ( (unsigned __int8)(v17 ^ v18) | v22 )
          v23 = 1;
        v24 = 0;
        if ( SHIDWORD(v20) >= v7 )
          v24 = 1;
        v25 = 0;
        if ( SHIDWORD(v14) < 65 )
          v25 = 1;
        if ( (signed int)v20 >= 64 && (v19 & v21 & v23 & v24 & v25) == 1 )
        {
          v26 = j_BlockSource::getAboveTopSolidBlock((BlockSource *)HIDWORD(v77), v13, v7, 0, 0);
          ++v10;
          if ( v26 < 64 )
            v26 = 64;
          v9 = *((_DWORD *)v4 + 4);
          v11 += v26;
        }
        v12 = v13 + 1;
      while ( v13 < v9 );
      v8 = *((_DWORD *)v4 + 6);
    v18 = __OFSUB__(v7, v8);
    v17 = v7++ - v8 < 0;
  while ( v17 ^ v18 );
  if ( !v10 )
LABEL_50:
    *((_DWORD *)v4 + 9) = -1;
  v27 = v11 / v10;
  *((_DWORD *)v4 + 9) = v11 / v10;
  if ( v11 / v10 >= 0 )
    *((_DWORD *)v4 + 2) += v27 - *((_DWORD *)v4 + 5) + 5;
    *((_DWORD *)v4 + 5) = v27 + 5;
    v6 = v77;
    goto LABEL_26;
  return 1;
}


int __fastcall SmallHut::SmallHut(int a1, int a2, int a3, Random *a4, int a5, int a6)
{
  Random *v6; // r7@1
  int v7; // r4@1
  unsigned int v8; // r1@2

  v6 = a4;
  v7 = a1;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 28) = 255;
  *(_DWORD *)(a1 + 32) = a3;
  *(_DWORD *)a1 = &off_27242B8;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 36) = 0xFFFFFFFFLL;
  if ( a2 )
  {
    v8 = *(_DWORD *)(a2 + 44);
    *(_BYTE *)(a1 + 44) = v8;
    *(_BYTE *)(a1 + 45) = BYTE1(v8);
    *(_BYTE *)(a1 + 46) = v8 >> 16;
    *(_BYTE *)(a1 + 47) = BYTE3(v8);
    if ( 0 != v8 >> 24 )
      *(_DWORD *)(a1 + 48) = &VillagePiece::mossyStoneSelector;
  }
  *(_DWORD *)a1 = &off_2724434;
  *(_DWORD *)(a1 + 28) = a6;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)a5;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a5 + 8);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a5 + 12);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a5 + 16);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a5 + 20);
  *(_BYTE *)(a1 + 52) = (j_Random::_genRandInt32(a4) >> 27) & 1;
  *(_DWORD *)(v7 + 56) = j_Random::_genRandInt32(v6) % 3;
  return v7;
}


unsigned int __fastcall SmallHut::createPiece(_DWORD *a1, int a2, __int64 *a3, Random *a4, int a5, int a6, int a7, int a8, int a9)
{
  _DWORD *v9; // r10@1
  Random *v10; // r8@1
  __int64 *v11; // r6@1
  int v12; // r11@1
  unsigned int result; // r0@1
  _DWORD *v14; // r6@3
  unsigned int v15; // r0@4
  int v16; // r0@6
  unsigned int v17; // r0@6
  int v18; // [sp+1Ch] [bp-3Ch]@1
  int v19; // [sp+20h] [bp-38h]@6
  int v20; // [sp+24h] [bp-34h]@6
  int v21; // [sp+28h] [bp-30h]@6
  int v22; // [sp+2Ch] [bp-2Ch]@6
  int v23; // [sp+30h] [bp-28h]@6

  v9 = a1;
  v10 = a4;
  v11 = a3;
  v12 = a2;
  j_BoundingBox::orientBox((BoundingBox *)&v18, a5, a6, a7, 0, 0, 0, 4, 6, 5, a8);
  result = j_StructurePiece::findCollisionPiece(v11, (int)&v18);
  if ( result )
  {
    *v9 = 0;
  }
  else
    v14 = j_operator new(0x3Cu);
    v14[5] = 0;
    v14[6] = 0;
    v14[3] = 0;
    v14[4] = 0;
    v14[1] = 0;
    v14[2] = 0;
    v14[7] = 255;
    v14[8] = a9;
    *v14 = &off_27242B8;
    v14[11] = 0;
    v14[12] = 0;
    v14[9] = -1;
    v14[10] = 0;
    if ( v12 )
    {
      v15 = *(_DWORD *)(v12 + 44);
      *((_BYTE *)v14 + 44) = v15;
      *((_BYTE *)v14 + 45) = BYTE1(v15);
      *((_BYTE *)v14 + 46) = v15 >> 16;
      *((_BYTE *)v14 + 47) = BYTE3(v15);
      if ( v15 >> 24 )
        v14[12] = &VillagePiece::mossyStoneSelector;
    }
    *v14 = &off_2724434;
    v16 = v18;
    v14[7] = a8;
    v14[1] = v16;
    v14[2] = v19;
    v14[3] = v20;
    v14[4] = v21;
    v14[5] = v22;
    v14[6] = v23;
    *((_BYTE *)v14 + 52) = (j_Random::_genRandInt32(v10) >> 27) & 1;
    v17 = j_Random::_genRandInt32(v10);
    *v9 = v14;
    result = v17 % 3;
    v14[14] = result;
  return result;
}


signed int __fastcall SmallHut::getType(SmallHut *this)
{
  return 1447643220;
}
