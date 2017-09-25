

int __fastcall NBCastleEntrance::NBCastleEntrance(int result)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)result = &off_2723BD8;
  return result;
}


signed int __fastcall NBCastleEntrance::postProcess(NBCastleEntrance *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  NBCastleEntrance *v4; // r8@1
  BlockSource *v5; // r9@1
  void (__cdecl *v6)(NBCastleEntrance *, BlockSource *, const BoundingBox *, _DWORD, signed int, _DWORD, signed int, signed int, signed int); // r7@1
  const BoundingBox *v7; // r4@1
  const BoundingBox *v8; // r7@1
  void (__fastcall *v9)(NBCastleEntrance *, BlockSource *, const BoundingBox *, _DWORD); // r12@1
  void (__fastcall *v10)(NBCastleEntrance *, BlockSource *, const BoundingBox *, _DWORD); // r4@1
  void (__fastcall *v11)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int); // r4@1
  void (__fastcall *v12)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int); // r4@1
  const BoundingBox *v13; // r11@1
  void (__fastcall *v14)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int); // r4@1
  void (__fastcall *v15)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int); // r4@1
  void (__fastcall *v16)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int); // r4@1
  void (__fastcall *v17)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int); // r4@1
  void (__fastcall *v18)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int); // r5@1
  signed int v19; // r7@1
  void (__fastcall *v20)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int); // r5@1
  void (__fastcall *v21)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int); // r5@1
  void (__fastcall *v22)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int); // r4@2
  void (__fastcall *v23)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int); // r4@2
  void (__fastcall *v24)(NBCastleEntrance *, BlockSource *, const BoundingBox *, _DWORD); // r4@2
  void (__fastcall *v25)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int); // r4@2
  void (__fastcall *v26)(NBCastleEntrance *, BlockSource *, char *, signed int); // r4@2
  void (__fastcall *v27)(NBCastleEntrance *, BlockSource *, char *, signed int); // r4@2
  void (__fastcall *v28)(NBCastleEntrance *, BlockSource *, char *, _DWORD); // r4@2
  void (__fastcall *v29)(NBCastleEntrance *, BlockSource *, char *, signed int); // r4@2
  void (__fastcall *v30)(NBCastleEntrance *, BlockSource *, char *, int); // r12@2
  void (__fastcall *v31)(NBCastleEntrance *, BlockSource *, char *, int); // r12@2
  void (__fastcall *v32)(NBCastleEntrance *, BlockSource *, char *, _DWORD); // r5@2
  void (__fastcall *v33)(NBCastleEntrance *, BlockSource *, char *, signed int); // r5@2
  void (__fastcall *v34)(NBCastleEntrance *, BlockSource *, char *, _DWORD); // r12@3
  void (__fastcall *v35)(NBCastleEntrance *, BlockSource *, char *, _DWORD); // r12@3
  void (__fastcall *v36)(NBCastleEntrance *, BlockSource *, char *, _DWORD); // r12@3
  void (__fastcall *v37)(NBCastleEntrance *, BlockSource *, char *, signed int); // r7@3
  NBCastleEntrance *v38; // r7@3
  signed int v39; // r4@3
  void (__fastcall *v40)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int); // r5@3
  void (__fastcall *v41)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int); // r5@4
  signed int v42; // r8@5
  void (__fastcall *v43)(NBCastleEntrance *, BlockSource *, const BoundingBox *, _DWORD); // r5@5
  void (__fastcall *v44)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int); // r5@5
  void (__fastcall *v45)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int); // r5@5
  void (__fastcall *v46)(NBCastleEntrance *, BlockSource *, const BoundingBox *, _DWORD); // r5@5
  StructurePiece *v47; // r6@5
  void (__fastcall *v48)(NBCastleEntrance *, BlockSource *); // r12@5
  void (__fastcall *v49)(NBCastleEntrance *, BlockSource *, char *, signed int); // r4@6
  void (__fastcall *v50)(NBCastleEntrance *, BlockSource *, char *, signed int); // r4@6
  void (__fastcall *v51)(NBCastleEntrance *, BlockSource *, char *, signed int); // r4@6
  void (__fastcall *v52)(NBCastleEntrance *, BlockSource *, char *, signed int); // r4@6
  void (__fastcall *v53)(NBCastleEntrance *, BlockSource *, char *, signed int); // r4@6
  void (__fastcall *v54)(NBCastleEntrance *, BlockSource *, char *, signed int); // r4@6
  signed int v55; // r8@7
  int v56; // r4@7
  _DWORD *v57; // r5@7
  StructurePiece *v58; // r7@8
  _DWORD *v59; // r6@8
  int v60; // r1@8
  void (__fastcall *v61)(StructurePiece *, BlockSource *, char *, int); // r5@8
  void (__fastcall *v62)(StructurePiece *, BlockSource *, char *, signed int); // r5@8
  void (__fastcall *v63)(StructurePiece *, BlockSource *, char *, int); // r5@8
  void (__fastcall *v64)(StructurePiece *, BlockSource *, char *, signed int); // r5@8
  void (__fastcall *v65)(StructurePiece *, BlockSource *, char *, int); // r5@8
  void (__fastcall *v66)(StructurePiece *, BlockSource *, char *, signed int); // r5@8
  void (__fastcall *v67)(StructurePiece *, BlockSource *, char *, int); // r5@8
  void (__fastcall *v68)(StructurePiece *, BlockSource *, char *, signed int); // r5@8
  void (__fastcall *v69)(StructurePiece *, BlockSource *, char *, int); // r5@8
  void (__fastcall *v70)(StructurePiece *, BlockSource *, char *, signed int); // r12@8
  int v71; // r0@8
  StructurePiece *v72; // r4@9
  void (__fastcall *v73)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r6@9
  void (__fastcall *v74)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r6@9
  void (__fastcall *v75)(StructurePiece *, BlockSource *, char *, signed int); // r6@9
  void (__fastcall *v76)(StructurePiece *, BlockSource *, char *, signed int); // r6@9
  int v77; // r6@9
  int v78; // r8@9
  NetherFortressPiece *v79; // r0@9
  Random *v80; // r2@9
  int v81; // r0@15
  Random *v83; // [sp+20h] [bp-120h]@1
  char v84; // [sp+30h] [bp-110h]@2
  char v85; // [sp+31h] [bp-10Fh]@2
  int v86; // [sp+34h] [bp-10Ch]@9
  NetherFortressPiece *v87; // [sp+38h] [bp-108h]@9
  char v88; // [sp+3Ch] [bp-104h]@9
  char v89; // [sp+3Dh] [bp-103h]@9
  char v90; // [sp+40h] [bp-100h]@9
  char v91; // [sp+41h] [bp-FFh]@9
  char v92; // [sp+44h] [bp-FCh]@9
  char v93; // [sp+45h] [bp-FBh]@9
  char v94; // [sp+48h] [bp-F8h]@9
  char v95; // [sp+49h] [bp-F7h]@9
  char v96; // [sp+4Ch] [bp-F4h]@8
  char v97; // [sp+4Dh] [bp-F3h]@8
  char v98; // [sp+50h] [bp-F0h]@8
  char v99; // [sp+51h] [bp-EFh]@8
  char v100; // [sp+54h] [bp-ECh]@6
  char v101; // [sp+55h] [bp-EBh]@6
  char v102; // [sp+58h] [bp-E8h]@6
  char v103; // [sp+59h] [bp-E7h]@6
  char v104; // [sp+5Ch] [bp-E4h]@5
  char v105; // [sp+5Dh] [bp-E3h]@5
  char v106; // [sp+60h] [bp-E0h]@5
  char v107; // [sp+61h] [bp-DFh]@5
  char v108; // [sp+64h] [bp-DCh]@5
  char v109; // [sp+65h] [bp-DBh]@5
  char v110; // [sp+68h] [bp-D8h]@5
  char v111; // [sp+69h] [bp-D7h]@5
  char v112; // [sp+6Ch] [bp-D4h]@5
  char v113; // [sp+6Dh] [bp-D3h]@5
  char v114; // [sp+70h] [bp-D0h]@5
  char v115; // [sp+71h] [bp-CFh]@5
  char v116; // [sp+74h] [bp-CCh]@5
  char v117; // [sp+75h] [bp-CBh]@5
  char v118; // [sp+78h] [bp-C8h]@5
  char v119; // [sp+79h] [bp-C7h]@5
  char v120; // [sp+7Ch] [bp-C4h]@5
  char v121; // [sp+7Dh] [bp-C3h]@5
  char v122; // [sp+80h] [bp-C0h]@5
  char v123; // [sp+81h] [bp-BFh]@5
  char v124; // [sp+84h] [bp-BCh]@5
  char v125; // [sp+85h] [bp-BBh]@5
  char v126; // [sp+88h] [bp-B8h]@5
  char v127; // [sp+89h] [bp-B7h]@5
  char v128; // [sp+8Ch] [bp-B4h]@4
  char v129; // [sp+8Dh] [bp-B3h]@4
  char v130; // [sp+90h] [bp-B0h]@4
  char v131; // [sp+91h] [bp-AFh]@4
  char v132; // [sp+94h] [bp-ACh]@4
  char v133; // [sp+95h] [bp-ABh]@4
  char v134; // [sp+98h] [bp-A8h]@4
  char v135; // [sp+99h] [bp-A7h]@4
  char v136; // [sp+9Ch] [bp-A4h]@2
  char v137; // [sp+9Dh] [bp-A3h]@2
  char v138; // [sp+A0h] [bp-A0h]@2
  char v139; // [sp+A1h] [bp-9Fh]@2
  char v140; // [sp+A4h] [bp-9Ch]@2
  char v141; // [sp+A5h] [bp-9Bh]@2
  char v142; // [sp+A8h] [bp-98h]@2
  char v143; // [sp+A9h] [bp-97h]@2
  char v144; // [sp+ACh] [bp-94h]@2
  char v145; // [sp+ADh] [bp-93h]@2
  char v146; // [sp+B0h] [bp-90h]@2
  char v147; // [sp+B1h] [bp-8Fh]@2
  char v148; // [sp+B4h] [bp-8Ch]@2
  char v149; // [sp+B5h] [bp-8Bh]@2
  char v150; // [sp+B8h] [bp-88h]@2
  char v151; // [sp+B9h] [bp-87h]@2
  char v152; // [sp+BCh] [bp-84h]@1
  char v153; // [sp+BDh] [bp-83h]@1
  char v154; // [sp+C0h] [bp-80h]@1
  char v155; // [sp+C1h] [bp-7Fh]@1
  char v156; // [sp+C4h] [bp-7Ch]@1
  char v157; // [sp+C5h] [bp-7Bh]@1
  char v158; // [sp+C8h] [bp-78h]@1
  char v159; // [sp+C9h] [bp-77h]@1
  char v160; // [sp+CCh] [bp-74h]@1
  char v161; // [sp+CDh] [bp-73h]@1
  char v162; // [sp+D0h] [bp-70h]@1
  char v163; // [sp+D1h] [bp-6Fh]@1
  char v164; // [sp+D4h] [bp-6Ch]@1
  char v165; // [sp+D5h] [bp-6Bh]@1
  char v166; // [sp+D8h] [bp-68h]@1
  char v167; // [sp+D9h] [bp-67h]@1
  char v168; // [sp+DCh] [bp-64h]@1
  char v169; // [sp+DDh] [bp-63h]@1
  char v170; // [sp+E0h] [bp-60h]@1
  char v171; // [sp+E1h] [bp-5Fh]@1
  char v172; // [sp+E4h] [bp-5Ch]@1
  char v173; // [sp+E5h] [bp-5Bh]@1
  char v174; // [sp+E8h] [bp-58h]@1
  char v175; // [sp+E9h] [bp-57h]@1
  char v176; // [sp+ECh] [bp-54h]@1
  char v177; // [sp+EDh] [bp-53h]@1
  char v178; // [sp+F0h] [bp-50h]@1
  char v179; // [sp+F1h] [bp-4Fh]@1
  char v180; // [sp+F4h] [bp-4Ch]@1
  char v181; // [sp+F5h] [bp-4Bh]@1
  char v182; // [sp+F8h] [bp-48h]@1
  char v183; // [sp+F9h] [bp-47h]@1
  char v184; // [sp+FCh] [bp-44h]@1
  char v185; // [sp+FDh] [bp-43h]@1
  char v186; // [sp+100h] [bp-40h]@1
  char v187; // [sp+101h] [bp-3Fh]@1
  char v188; // [sp+104h] [bp-3Ch]@1
  char v189; // [sp+105h] [bp-3Bh]@1
  char v190; // [sp+108h] [bp-38h]@1
  char v191; // [sp+109h] [bp-37h]@1
  char v192; // [sp+10Ch] [bp-34h]@1
  char v193; // [sp+10Dh] [bp-33h]@1
  char v194; // [sp+110h] [bp-30h]@1
  char v195; // [sp+111h] [bp-2Fh]@1
  char v196; // [sp+114h] [bp-2Ch]@1
  char v197; // [sp+115h] [bp-2Bh]@1
  char v198; // [sp+118h] [bp-28h]@1
  char v199; // [sp+119h] [bp-27h]@1

  v4 = this;
  v5 = a2;
  v83 = a3;
  v6 = *(void (__cdecl **)(NBCastleEntrance *, BlockSource *, const BoundingBox *, _DWORD, signed int, _DWORD, signed int, signed int, signed int))(*(_DWORD *)this + 40);
  v198 = *(_BYTE *)(Block::mNetherBrick + 4);
  v199 = 0;
  v196 = *(_BYTE *)(Block::mNetherBrick + 4);
  v197 = 0;
  v7 = a4;
  v6(this, a2, a4, 0, 3, 0, 12, 4, 12);
  v8 = v7;
  v9 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v194 = BlockID::AIR;
  v192 = BlockID::AIR;
  v195 = 0;
  v193 = 0;
  v9(v4, v5, v7, 0);
  v10 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v190 = *(_BYTE *)(Block::mNetherBrick + 4);
  v191 = 0;
  v188 = *(_BYTE *)(Block::mNetherBrick + 4);
  v189 = 0;
  v10(v4, v5, v8, 0);
  v11 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v186 = *(_BYTE *)(Block::mNetherBrick + 4);
  v187 = 0;
  v184 = *(_BYTE *)(Block::mNetherBrick + 4);
  v185 = 0;
  v11(v4, v5, v8, 11);
  v12 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v182 = *(_BYTE *)(Block::mNetherBrick + 4);
  v183 = 0;
  v180 = *(_BYTE *)(Block::mNetherBrick + 4);
  v181 = 0;
  v13 = v8;
  v12(v4, v5, v8, 2);
  v14 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v178 = *(_BYTE *)(Block::mNetherBrick + 4);
  v179 = 0;
  v176 = *(_BYTE *)(Block::mNetherBrick + 4);
  v177 = 0;
  v14(v4, v5, v8, 8);
  v15 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v174 = *(_BYTE *)(Block::mNetherBrick + 4);
  v175 = 0;
  v172 = *(_BYTE *)(Block::mNetherBrick + 4);
  v173 = 0;
  v15(v4, v5, v8, 5);
  v16 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v170 = *(_BYTE *)(Block::mNetherBrick + 4);
  v171 = 0;
  v168 = *(_BYTE *)(Block::mNetherBrick + 4);
  v169 = 0;
  v16(v4, v5, v8, 2);
  v17 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v166 = *(_BYTE *)(Block::mNetherBrick + 4);
  v167 = 0;
  v164 = *(_BYTE *)(Block::mNetherBrick + 4);
  v165 = 0;
  v17(v4, v5, v8, 8);
  v18 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v162 = *(_BYTE *)(Block::mNetherBrick + 4);
  v163 = 0;
  v160 = *(_BYTE *)(Block::mNetherBrick + 4);
  v161 = 0;
  v19 = 1;
  v18(v4, v5, v13, 5);
  v20 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v158 = *(_BYTE *)(Block::mNetherBrick + 4);
  v159 = 0;
  v156 = *(_BYTE *)(Block::mNetherBrick + 4);
  v157 = 0;
  v20(v4, v5, v13, 2);
  v21 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v154 = *(_BYTE *)(Block::mNetherFence + 4);
  v155 = 0;
  v152 = *(_BYTE *)(Block::mNetherFence + 4);
  v153 = 0;
  v21(v4, v5, v13, 5);
  do
  {
    v22 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v150 = *(_BYTE *)(Block::mNetherFence + 4);
    v151 = 0;
    v148 = *(_BYTE *)(Block::mNetherFence + 4);
    v149 = 0;
    v22(v4, v5, v13, v19);
    v23 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v146 = *(_BYTE *)(Block::mNetherFence + 4);
    v147 = 0;
    v144 = *(_BYTE *)(Block::mNetherFence + 4);
    v145 = 0;
    v23(v4, v5, v13, v19);
    v24 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
    v142 = *(_BYTE *)(Block::mNetherFence + 4);
    v143 = 0;
    v140 = *(_BYTE *)(Block::mNetherFence + 4);
    v141 = 0;
    v24(v4, v5, v13, 0);
    v25 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v138 = *(_BYTE *)(Block::mNetherFence + 4);
    v139 = 0;
    v136 = *(_BYTE *)(Block::mNetherFence + 4);
    v137 = 0;
    v25(v4, v5, v13, 12);
    v26 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v84 = *(_BYTE *)(Block::mNetherBrick + 4);
    v85 = 0;
    v26(v4, v5, &v84, v19);
    v27 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v27(v4, v5, &v84, v19);
    v28 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
    v28(v4, v5, &v84, 0);
    v29 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v29(v4, v5, &v84, 12);
    v30 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
    v84 = *(_BYTE *)(Block::mNetherFence + 4);
    v30(v4, v5, &v84, v19 + 1);
    v31 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
    v31(v4, v5, &v84, v19 + 1);
    v32 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
    v32(v4, v5, &v84, 0);
    v33 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v33(v4, v5, &v84, 12);
    v19 += 2;
  }
  while ( v19 < 12 );
  v34 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
  v84 = *(_BYTE *)(Block::mNetherFence + 4);
  v85 = 0;
  v34(v4, v5, &v84, 0);
  v35 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
  v35(v4, v5, &v84, 0);
  v36 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
  v36(v4, v5, &v84, 0);
  v37 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v37(v4, v5, &v84, 12);
  v38 = v4;
  v39 = 3;
  v40 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v134 = *(_BYTE *)(Block::mNetherFence + 4);
    v135 = 0;
    v132 = *(_BYTE *)(Block::mNetherFence + 4);
    v133 = 0;
    v40(v4, v5, v13, 1);
    v41 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v130 = *(_BYTE *)(Block::mNetherFence + 4);
    v131 = 0;
    v128 = *(_BYTE *)(Block::mNetherFence + 4);
    v129 = 0;
    v41(v4, v5, v13, 11);
    v39 += 2;
    v40 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  while ( v39 < 10 );
  v42 = 4;
  v126 = *(_BYTE *)(Block::mNetherBrick + 4);
  v127 = 0;
  v124 = *(_BYTE *)(Block::mNetherBrick + 4);
  v125 = 0;
  v40(v38, v5, v13, 4);
  v43 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v38 + 40);
  v122 = *(_BYTE *)(Block::mNetherBrick + 4);
  v123 = 0;
  v120 = *(_BYTE *)(Block::mNetherBrick + 4);
  v121 = 0;
  v43(v38, v5, v13, 0);
  v44 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v38 + 40);
  v118 = *(_BYTE *)(Block::mNetherBrick + 4);
  v119 = 0;
  v116 = *(_BYTE *)(Block::mNetherBrick + 4);
  v117 = 0;
  v44(v38, v5, v13, 4);
  v45 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v38 + 40);
  v114 = *(_BYTE *)(Block::mNetherBrick + 4);
  v115 = 0;
  v112 = *(_BYTE *)(Block::mNetherBrick + 4);
  v113 = 0;
  v45(v38, v5, v13, 4);
  v46 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v38 + 40);
  v110 = *(_BYTE *)(Block::mNetherBrick + 4);
  v111 = 0;
  v108 = *(_BYTE *)(Block::mNetherBrick + 4);
  v109 = 0;
  v46(v38, v5, v13, 0);
  v47 = v38;
  v48 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *))(*(_DWORD *)v38 + 40);
  v106 = *(_BYTE *)(Block::mNetherBrick + 4);
  v107 = 0;
  v104 = *(_BYTE *)(Block::mNetherBrick + 4);
  v105 = 0;
  v48(v38, v5);
    v49 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, char *, signed int))(*(_DWORD *)v38 + 44);
    v102 = *(_BYTE *)(Block::mNetherBrick + 4);
    v103 = 0;
    v49(v38, v5, &v102, v42);
    v50 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, char *, signed int))(*(_DWORD *)v38 + 44);
    v100 = *(_BYTE *)(Block::mNetherBrick + 4);
    v101 = 0;
    v50(v38, v5, &v100, v42);
    v51 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, char *, signed int))(*(_DWORD *)v38 + 44);
    v51(v38, v5, &v102, v42);
    v52 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, char *, signed int))(*(_DWORD *)v38 + 44);
    v52(v38, v5, &v100, v42);
    v53 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, char *, signed int))(*(_DWORD *)v38 + 44);
    v53(v38, v5, &v102, v42);
    v54 = *(void (__fastcall **)(NBCastleEntrance *, BlockSource *, char *, signed int))(*(_DWORD *)v38 + 44);
    v54(v38, v5, &v100, v42++);
  while ( v42 != 9 );
  v55 = 12;
  v56 = 0;
  v57 = &Block::mNetherBrick;
    v58 = v47;
    v59 = v57;
    v60 = *v57;
    v61 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v58 + 44);
    v98 = *(_BYTE *)(v60 + 4);
    v99 = 0;
    v61(v58, v5, &v98, v56);
    v62 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v58 + 44);
    v96 = *(_BYTE *)(*v59 + 4);
    v97 = 0;
    v62(v58, v5, &v96, v55);
    v63 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v58 + 44);
    v98 = *(_BYTE *)(*v59 + 4);
    v63(v58, v5, &v98, v56);
    v64 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v58 + 44);
    v64(v58, v5, &v96, v55);
    v65 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v58 + 44);
    v65(v58, v5, &v98, v56);
    v66 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v58 + 44);
    v66(v58, v5, &v96, v55);
    v67 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v58 + 44);
    v67(v58, v5, &v98, v56);
    v68 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v58 + 44);
    v68(v58, v5, &v96, v55);
    v69 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v58 + 44);
    v69(v58, v5, &v98, v56);
    v57 = v59;
    v70 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v58 + 44);
    v71 = *v59;
    v47 = v58;
    v96 = *(_BYTE *)(v71 + 4);
    v70(v58, v5, &v96, v55);
    ++v56;
    --v55;
  while ( v56 != 3 );
  v72 = v58;
  v73 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v58 + 40);
  v94 = *(_BYTE *)(Block::mNetherBrick + 4);
  v95 = 0;
  v92 = *(_BYTE *)(Block::mNetherBrick + 4);
  v93 = 0;
  v73(v58, v5, v13, 5);
  v74 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v58 + 40);
  v90 = BlockID::AIR;
  v88 = BlockID::AIR;
  v91 = 0;
  v89 = 0;
  v74(v58, v5, v13, 6);
  v75 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v58 + 36);
  v84 = *(_BYTE *)(Block::mNetherBrick + 4);
  v75(v58, v5, &v84, 6);
  v76 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v58 + 36);
  v84 = *(_BYTE *)(Block::mFlowingLava + 4);
  v76(v58, v5, &v84, 6);
  v77 = (*(int (__fastcall **)(StructurePiece *, signed int, signed int))(*(_DWORD *)v72 + 28))(v72, 6, 6);
  v78 = j_StructurePiece::getWorldY(v58, 5);
  v79 = (NetherFortressPiece *)(*(int (__fastcall **)(StructurePiece *, signed int, signed int))(*(_DWORD *)v72 + 32))(
                                 v72,
                                 6,
                                 6);
  *(_DWORD *)&v84 = v77;
  v86 = v78;
  v87 = v79;
  if ( v77 >= *(_DWORD *)v13
    && v77 <= *((_DWORD *)v13 + 3)
    && (signed int)v79 >= *((_DWORD *)v13 + 2)
    && (signed int)v79 <= *((_DWORD *)v13 + 5) )
    v79 = (NetherFortressPiece *)*((_DWORD *)v13 + 1);
    if ( v78 >= (signed int)v79 )
    {
      v79 = (NetherFortressPiece *)*((_DWORD *)v13 + 4);
      if ( v78 <= (signed int)v79 )
      {
        v81 = Block::mBlocks[*(_BYTE *)(Block::mFlowingLava + 4)];
        v79 = (NetherFortressPiece *)(*(int (__cdecl **)(int, BlockSource *, char *, Random *, signed int, signed int, const BoundingBox *, signed int))(*(_DWORD *)v81 + 8))(
                                       v81,
                                       v5,
                                       &v84,
                                       v83,
                                       5,
                                       6,
                                       v13,
                                       4);
      }
    }
  return j_NetherFortressPiece::postProcess(v79, v5, v80, v13);
}


int __fastcall NBCastleEntrance::NBCastleEntrance(int result, int a2, int a3, int a4, int a5)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 32) = a2;
  *(_DWORD *)result = &off_2723BD8;
  *(_DWORD *)(result + 28) = a5;
  *(_DWORD *)(result + 4) = *(_DWORD *)a4;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a4 + 12);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a4 + 16);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a4 + 20);
  return result;
}


_DWORD *__fastcall NBCastleEntrance::createPiece(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  __int64 *v8; // r5@1
  _DWORD *v9; // r9@1
  _DWORD *result; // r0@1
  int v11; // r1@4
  int v12; // [sp+1Ch] [bp-34h]@1
  _DWORD *v13; // [sp+20h] [bp-30h]@1
  int v14; // [sp+24h] [bp-2Ch]@4
  int v15; // [sp+28h] [bp-28h]@4
  int v16; // [sp+2Ch] [bp-24h]@4
  int v17; // [sp+30h] [bp-20h]@4

  v8 = (__int64 *)a2;
  v9 = (_DWORD *)a1;
  j_BoundingBox::orientBox((BoundingBox *)&v12, a4, a5, a6, -5, -3, 0, 13, 14, 13, a7);
  result = v13;
  if ( (signed int)v13 < 11 || (result = (_DWORD *)j_StructurePiece::findCollisionPiece(v8, (int)&v12)) != 0 )
  {
    *v9 = 0;
  }
  else
    result = j_operator new(0x24u);
    result[3] = 0;
    result[4] = 0;
    result[1] = 0;
    result[2] = 0;
    result[8] = a8;
    *v9 = result;
    *result = &off_2723BD8;
    v11 = v12;
    result[7] = a7;
    result[1] = v11;
    result[2] = v13;
    result[3] = v14;
    result[4] = v15;
    result[5] = v16;
    result[6] = v17;
  return result;
}


signed int __fastcall NBCastleEntrance::getType(NBCastleEntrance *this)
{
  return 1313031502;
}
