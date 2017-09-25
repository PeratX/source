

int __fastcall NBCastleStalkRoom::NBCastleStalkRoom(int result)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)result = &off_2723C20;
  return result;
}


signed int __fastcall NBCastleStalkRoom::postProcess(NBCastleStalkRoom *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  StructurePiece *v4; // r6@1
  BlockSource *v5; // r11@1
  const BoundingBox *v6; // r10@1
  void (__cdecl *v7)(NBCastleStalkRoom *, BlockSource *, const BoundingBox *, _DWORD, signed int, _DWORD, signed int, signed int); // r7@1
  void (__fastcall *v8)(StructurePiece *, BlockSource *, const BoundingBox *, _DWORD); // r7@1
  void (__fastcall *v9)(StructurePiece *, BlockSource *, const BoundingBox *, _DWORD); // r4@1
  void (__fastcall *v10)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@1
  void (__fastcall *v11)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@1
  void (__fastcall *v12)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@1
  void (__fastcall *v13)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@1
  void (__fastcall *v14)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@1
  void (__fastcall *v15)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@1
  void (__fastcall *v16)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@1
  signed int v17; // r9@1
  void (__fastcall *v18)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@1
  BlockSource *v19; // r1@1
  BlockSource *v20; // r8@1
  const BoundingBox *v21; // r11@1
  void (__fastcall *v22)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@2
  void (__fastcall *v23)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@2
  void (__fastcall *v24)(StructurePiece *, BlockSource *, const BoundingBox *, _DWORD); // r4@2
  void (__fastcall *v25)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@2
  void (__fastcall *v26)(StructurePiece *, BlockSource *, char *, signed int); // r4@2
  void (__fastcall *v27)(StructurePiece *, BlockSource *, char *, signed int); // r4@2
  void (__fastcall *v28)(StructurePiece *, BlockSource *, char *, _DWORD); // r4@2
  void (__fastcall *v29)(StructurePiece *, BlockSource *, char *, signed int); // r4@2
  void (__fastcall *v30)(StructurePiece *, BlockSource *, char *, int); // r5@2
  void (__fastcall *v31)(StructurePiece *, BlockSource *, char *, int); // r5@2
  void (__fastcall *v32)(StructurePiece *, BlockSource *, char *, _DWORD); // r5@2
  void (__fastcall *v33)(StructurePiece *, BlockSource *, char *, signed int); // r5@2
  void (__fastcall *v34)(StructurePiece *, BlockSource *, char *, _DWORD); // r7@3
  void (__fastcall *v35)(StructurePiece *, BlockSource *, char *, _DWORD); // r7@3
  void (__fastcall *v36)(StructurePiece *, BlockSource *, char *, _DWORD); // r7@3
  void (__fastcall *v37)(StructurePiece *, BlockSource *, char *, signed int); // r7@3
  const BoundingBox *v38; // r5@3
  signed int v39; // r7@3
  void (__fastcall *v40)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@4
  void (__fastcall *v41)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@4
  BlockSource *v42; // r4@5
  signed int v43; // r8@5
  void (__fastcall *v44)(StructurePiece *, BlockSource *, char *, signed int); // r12@6
  void (__fastcall *v45)(StructurePiece *, BlockSource *, char *, signed int); // r12@6
  StructurePiece *v46; // r9@6
  int v47; // r10@6
  void (__fastcall *v48)(StructurePiece *, BlockSource *, char *, signed int); // r7@6
  void (__fastcall *v49)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r7@8
  void (__fastcall *v50)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r7@13
  BlockSource *v51; // r11@15
  const BoundingBox *v52; // r10@15
  void (__fastcall *v53)(StructurePiece *, BlockSource *); // r7@15
  void (__fastcall *v54)(StructurePiece *, BlockSource *, char *, signed int); // r5@15
  void (__fastcall *v55)(StructurePiece *, BlockSource *, char *, signed int); // r4@15
  void (__fastcall *v56)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r7@15
  void (__fastcall *v57)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r7@15
  void (__fastcall *v58)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r7@15
  void (__fastcall *v59)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r7@15
  void (__fastcall *v60)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r7@15
  void (__fastcall *v61)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r7@15
  void (__fastcall *v62)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r7@15
  void (__fastcall *v63)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r7@15
  void (__fastcall *v64)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r7@15
  char v65; // ST24_1@15
  void (__fastcall *v66)(StructurePiece *, BlockSource *, char *, signed int); // r12@15
  void (__fastcall *v67)(StructurePiece *, BlockSource *, char *, signed int); // r12@15
  void (__fastcall *v68)(StructurePiece *, BlockSource *, char *, signed int); // r12@15
  void (__fastcall *v69)(StructurePiece *, BlockSource *, char *, signed int); // r12@15
  void (__fastcall *v70)(StructurePiece *, BlockSource *, char *, signed int); // r4@15
  void (__fastcall *v71)(StructurePiece *, BlockSource *, char *, signed int); // r4@15
  void (__fastcall *v72)(StructurePiece *, BlockSource *, char *, signed int); // r4@15
  void (__fastcall *v73)(StructurePiece *, BlockSource *, char *, signed int); // r4@15
  void (__fastcall *v74)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r12@15
  void (__fastcall *v75)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r12@15
  void (__fastcall *v76)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r12@15
  void (__fastcall *v77)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r12@15
  void (__fastcall *v78)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@15
  void (__fastcall *v79)(StructurePiece *, BlockSource *, const BoundingBox *, _DWORD); // r4@15
  void (__fastcall *v80)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@15
  void (__fastcall *v81)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r4@15
  void (__fastcall *v82)(StructurePiece *, BlockSource *, const BoundingBox *, _DWORD); // r4@15
  void (__fastcall *v83)(StructurePiece *, BlockSource *, const BoundingBox *, signed int); // r12@15
  signed int v84; // r6@15
  void (__fastcall *v85)(StructurePiece *, BlockSource *, char *, signed int); // r5@16
  void (__fastcall *v86)(StructurePiece *, BlockSource *, char *, signed int); // r5@16
  void (__fastcall *v87)(StructurePiece *, BlockSource *, char *, signed int); // r5@16
  void (__fastcall *v88)(StructurePiece *, BlockSource *, char *, signed int); // r5@16
  void (__fastcall *v89)(StructurePiece *, BlockSource *, char *, signed int); // r5@16
  void (__fastcall *v90)(StructurePiece *, BlockSource *, char *, signed int); // r5@16
  int v91; // r4@17
  void (__fastcall *v92)(StructurePiece *, BlockSource *, char *, int); // r5@18
  void (__fastcall *v93)(StructurePiece *, BlockSource *); // r7@18
  void (__fastcall *v94)(StructurePiece *, BlockSource *, char *, int); // r7@18
  void (__fastcall *v95)(StructurePiece *, BlockSource *, char *, signed int); // r7@18
  void (__fastcall *v96)(StructurePiece *, BlockSource *, char *, int); // r7@18
  void (__fastcall *v97)(StructurePiece *, BlockSource *, char *, signed int); // r7@18
  void (__fastcall *v98)(StructurePiece *, BlockSource *, char *, int); // r7@18
  void (__fastcall *v99)(StructurePiece *, BlockSource *, char *, signed int); // r7@18
  void (__fastcall *v100)(StructurePiece *, BlockSource *, char *, int); // r7@18
  int (__fastcall *v101)(StructurePiece *, BlockSource *, char *, signed int); // r12@18
  NetherFortressPiece *v102; // r0@18
  Random *v103; // r2@18
  char v105; // [sp+2Ch] [bp-174h]@5
  signed int v106; // [sp+2Ch] [bp-174h]@17
  char v107; // [sp+30h] [bp-170h]@18
  char v108; // [sp+31h] [bp-16Fh]@18
  char v109; // [sp+34h] [bp-16Ch]@18
  char v110; // [sp+35h] [bp-16Bh]@18
  char v111; // [sp+38h] [bp-168h]@16
  char v112; // [sp+39h] [bp-167h]@16
  char v113; // [sp+3Ch] [bp-164h]@16
  char v114; // [sp+3Dh] [bp-163h]@16
  char v115; // [sp+40h] [bp-160h]@15
  char v116; // [sp+41h] [bp-15Fh]@15
  char v117; // [sp+44h] [bp-15Ch]@15
  char v118; // [sp+45h] [bp-15Bh]@15
  char v119; // [sp+48h] [bp-158h]@15
  char v120; // [sp+49h] [bp-157h]@15
  char v121; // [sp+4Ch] [bp-154h]@15
  char v122; // [sp+4Dh] [bp-153h]@15
  char v123; // [sp+50h] [bp-150h]@15
  char v124; // [sp+51h] [bp-14Fh]@15
  char v125; // [sp+54h] [bp-14Ch]@15
  char v126; // [sp+55h] [bp-14Bh]@15
  char v127; // [sp+58h] [bp-148h]@15
  char v128; // [sp+59h] [bp-147h]@15
  char v129; // [sp+5Ch] [bp-144h]@15
  char v130; // [sp+5Dh] [bp-143h]@15
  char v131; // [sp+60h] [bp-140h]@15
  char v132; // [sp+61h] [bp-13Fh]@15
  char v133; // [sp+64h] [bp-13Ch]@15
  char v134; // [sp+65h] [bp-13Bh]@15
  char v135; // [sp+68h] [bp-138h]@15
  char v136; // [sp+69h] [bp-137h]@15
  char v137; // [sp+6Ch] [bp-134h]@15
  char v138; // [sp+6Dh] [bp-133h]@15
  char v139; // [sp+70h] [bp-130h]@15
  char v140; // [sp+71h] [bp-12Fh]@15
  char v141; // [sp+74h] [bp-12Ch]@15
  char v142; // [sp+75h] [bp-12Bh]@15
  char v143; // [sp+78h] [bp-128h]@15
  char v144; // [sp+79h] [bp-127h]@15
  char v145; // [sp+7Ch] [bp-124h]@15
  char v146; // [sp+7Dh] [bp-123h]@15
  char v147; // [sp+80h] [bp-120h]@15
  char v148; // [sp+81h] [bp-11Fh]@15
  char v149; // [sp+84h] [bp-11Ch]@15
  char v150; // [sp+85h] [bp-11Bh]@15
  char v151; // [sp+88h] [bp-118h]@15
  char v152; // [sp+89h] [bp-117h]@15
  char v153; // [sp+8Ch] [bp-114h]@15
  char v154; // [sp+8Dh] [bp-113h]@15
  char v155; // [sp+90h] [bp-110h]@15
  char v156; // [sp+91h] [bp-10Fh]@15
  char v157; // [sp+94h] [bp-10Ch]@15
  char v158; // [sp+95h] [bp-10Bh]@15
  char v159; // [sp+98h] [bp-108h]@15
  char v160; // [sp+99h] [bp-107h]@15
  char v161; // [sp+9Ch] [bp-104h]@15
  char v162; // [sp+9Dh] [bp-103h]@15
  char v163; // [sp+A0h] [bp-100h]@15
  char v164; // [sp+A1h] [bp-FFh]@15
  char v165; // [sp+A4h] [bp-FCh]@15
  char v166; // [sp+A5h] [bp-FBh]@15
  char v167; // [sp+A8h] [bp-F8h]@15
  char v168; // [sp+A9h] [bp-F7h]@15
  char v169; // [sp+ACh] [bp-F4h]@15
  char v170; // [sp+ADh] [bp-F3h]@15
  char v171; // [sp+B0h] [bp-F0h]@15
  char v172; // [sp+B1h] [bp-EFh]@15
  char v173; // [sp+B4h] [bp-ECh]@15
  char v174; // [sp+B5h] [bp-EBh]@15
  char v175; // [sp+B8h] [bp-E8h]@15
  char v176; // [sp+B9h] [bp-E7h]@15
  char v177; // [sp+BCh] [bp-E4h]@15
  char v178; // [sp+BDh] [bp-E3h]@15
  char v179; // [sp+C0h] [bp-E0h]@15
  char v180; // [sp+C1h] [bp-DFh]@15
  char v181; // [sp+C4h] [bp-DCh]@15
  char v182; // [sp+C5h] [bp-DBh]@15
  char v183; // [sp+C8h] [bp-D8h]@15
  char v184; // [sp+C9h] [bp-D7h]@15
  char v185; // [sp+CCh] [bp-D4h]@15
  char v186; // [sp+CDh] [bp-D3h]@15
  char v187; // [sp+D0h] [bp-D0h]@15
  char v188; // [sp+D1h] [bp-CFh]@15
  char v189; // [sp+D4h] [bp-CCh]@15
  char v190; // [sp+D5h] [bp-CBh]@15
  char v191; // [sp+D8h] [bp-C8h]@13
  char v192; // [sp+D9h] [bp-C7h]@13
  char v193; // [sp+DCh] [bp-C4h]@13
  char v194; // [sp+DDh] [bp-C3h]@13
  char v195; // [sp+E0h] [bp-C0h]@10
  char v196; // [sp+E1h] [bp-BFh]@10
  char v197; // [sp+E4h] [bp-BCh]@10
  char v198; // [sp+E5h] [bp-BBh]@10
  char v199; // [sp+E8h] [bp-B8h]@8
  char v200; // [sp+E9h] [bp-B7h]@8
  char v201; // [sp+ECh] [bp-B4h]@8
  char v202; // [sp+EDh] [bp-B3h]@8
  char v203; // [sp+F0h] [bp-B0h]@4
  char v204; // [sp+F1h] [bp-AFh]@4
  char v205; // [sp+F4h] [bp-ACh]@4
  char v206; // [sp+F5h] [bp-ABh]@4
  char v207; // [sp+F8h] [bp-A8h]@4
  char v208; // [sp+F9h] [bp-A7h]@4
  char v209; // [sp+FCh] [bp-A4h]@4
  char v210; // [sp+FDh] [bp-A3h]@4
  char v211; // [sp+100h] [bp-A0h]@2
  char v212; // [sp+101h] [bp-9Fh]@2
  char v213; // [sp+104h] [bp-9Ch]@2
  char v214; // [sp+105h] [bp-9Bh]@2
  char v215; // [sp+108h] [bp-98h]@2
  char v216; // [sp+109h] [bp-97h]@2
  char v217; // [sp+10Ch] [bp-94h]@2
  char v218; // [sp+10Dh] [bp-93h]@2
  char v219; // [sp+110h] [bp-90h]@2
  char v220; // [sp+111h] [bp-8Fh]@2
  char v221; // [sp+114h] [bp-8Ch]@2
  char v222; // [sp+115h] [bp-8Bh]@2
  char v223; // [sp+118h] [bp-88h]@2
  char v224; // [sp+119h] [bp-87h]@2
  char v225; // [sp+11Ch] [bp-84h]@2
  char v226; // [sp+11Dh] [bp-83h]@2
  char v227; // [sp+120h] [bp-80h]@1
  char v228; // [sp+121h] [bp-7Fh]@1
  char v229; // [sp+124h] [bp-7Ch]@1
  char v230; // [sp+125h] [bp-7Bh]@1
  char v231; // [sp+128h] [bp-78h]@1
  char v232; // [sp+129h] [bp-77h]@1
  char v233; // [sp+12Ch] [bp-74h]@1
  char v234; // [sp+12Dh] [bp-73h]@1
  char v235; // [sp+130h] [bp-70h]@1
  char v236; // [sp+131h] [bp-6Fh]@1
  char v237; // [sp+134h] [bp-6Ch]@1
  char v238; // [sp+135h] [bp-6Bh]@1
  char v239; // [sp+138h] [bp-68h]@1
  char v240; // [sp+139h] [bp-67h]@1
  char v241; // [sp+13Ch] [bp-64h]@1
  char v242; // [sp+13Dh] [bp-63h]@1
  char v243; // [sp+140h] [bp-60h]@1
  char v244; // [sp+141h] [bp-5Fh]@1
  char v245; // [sp+144h] [bp-5Ch]@1
  char v246; // [sp+145h] [bp-5Bh]@1
  char v247; // [sp+148h] [bp-58h]@1
  char v248; // [sp+149h] [bp-57h]@1
  char v249; // [sp+14Ch] [bp-54h]@1
  char v250; // [sp+14Dh] [bp-53h]@1
  char v251; // [sp+150h] [bp-50h]@1
  char v252; // [sp+151h] [bp-4Fh]@1
  char v253; // [sp+154h] [bp-4Ch]@1
  char v254; // [sp+155h] [bp-4Bh]@1
  char v255; // [sp+158h] [bp-48h]@1
  char v256; // [sp+159h] [bp-47h]@1
  char v257; // [sp+15Ch] [bp-44h]@1
  char v258; // [sp+15Dh] [bp-43h]@1
  char v259; // [sp+160h] [bp-40h]@1
  char v260; // [sp+161h] [bp-3Fh]@1
  char v261; // [sp+164h] [bp-3Ch]@1
  char v262; // [sp+165h] [bp-3Bh]@1
  char v263; // [sp+168h] [bp-38h]@1
  char v264; // [sp+169h] [bp-37h]@1
  char v265; // [sp+16Ch] [bp-34h]@1
  char v266; // [sp+16Dh] [bp-33h]@1
  char v267; // [sp+170h] [bp-30h]@1
  char v268; // [sp+171h] [bp-2Fh]@1
  char v269; // [sp+174h] [bp-2Ch]@1
  char v270; // [sp+175h] [bp-2Bh]@1
  char v271; // [sp+178h] [bp-28h]@2
  char v272; // [sp+179h] [bp-27h]@2

  v4 = this;
  v5 = a2;
  v6 = a4;
  v7 = *(void (__cdecl **)(NBCastleStalkRoom *, BlockSource *, const BoundingBox *, _DWORD, signed int, _DWORD, signed int, signed int))(*(_DWORD *)this + 40);
  v269 = *(_BYTE *)(Block::mNetherBrick + 4);
  v270 = 0;
  v267 = *(_BYTE *)(Block::mNetherBrick + 4);
  v268 = 0;
  v7(this, a2, a4, 0, 3, 0, 12, 4);
  v8 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v265 = BlockID::AIR;
  v263 = BlockID::AIR;
  v266 = 0;
  v264 = 0;
  v8(v4, v5, v6, 0);
  v9 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v261 = *(_BYTE *)(Block::mNetherBrick + 4);
  v262 = 0;
  v259 = *(_BYTE *)(Block::mNetherBrick + 4);
  v260 = 0;
  v9(v4, v5, v6, 0);
  v10 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v257 = *(_BYTE *)(Block::mNetherBrick + 4);
  v258 = 0;
  v255 = *(_BYTE *)(Block::mNetherBrick + 4);
  v256 = 0;
  v10(v4, v5, v6, 11);
  v11 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v253 = *(_BYTE *)(Block::mNetherBrick + 4);
  v254 = 0;
  v251 = *(_BYTE *)(Block::mNetherBrick + 4);
  v252 = 0;
  v11(v4, v5, v6, 2);
  v12 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v249 = *(_BYTE *)(Block::mNetherBrick + 4);
  v250 = 0;
  v247 = *(_BYTE *)(Block::mNetherBrick + 4);
  v248 = 0;
  v12(v4, v5, v6, 8);
  v13 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v245 = *(_BYTE *)(Block::mNetherBrick + 4);
  v246 = 0;
  v243 = *(_BYTE *)(Block::mNetherBrick + 4);
  v244 = 0;
  v13(v4, v5, v6, 5);
  v14 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v241 = *(_BYTE *)(Block::mNetherBrick + 4);
  v242 = 0;
  v239 = *(_BYTE *)(Block::mNetherBrick + 4);
  v240 = 0;
  v14(v4, v5, v6, 2);
  v15 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v237 = *(_BYTE *)(Block::mNetherBrick + 4);
  v238 = 0;
  v235 = *(_BYTE *)(Block::mNetherBrick + 4);
  v236 = 0;
  v15(v4, v5, v6, 8);
  v16 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v233 = *(_BYTE *)(Block::mNetherBrick + 4);
  v234 = 0;
  v231 = *(_BYTE *)(Block::mNetherBrick + 4);
  v232 = 0;
  v17 = 1;
  v16(v4, v5, v6, 5);
  v18 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v229 = *(_BYTE *)(Block::mNetherBrick + 4);
  v230 = 0;
  v227 = *(_BYTE *)(Block::mNetherBrick + 4);
  v228 = 0;
  v19 = v5;
  v20 = v5;
  v21 = v6;
  v18(v4, v19, v6, 2);
  do
  {
    v22 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v225 = *(_BYTE *)(Block::mNetherFence + 4);
    v226 = 0;
    v223 = *(_BYTE *)(Block::mNetherFence + 4);
    v224 = 0;
    v22(v4, v20, v6, v17);
    v23 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v221 = *(_BYTE *)(Block::mNetherFence + 4);
    v222 = 0;
    v219 = *(_BYTE *)(Block::mNetherFence + 4);
    v220 = 0;
    v23(v4, v20, v6, v17);
    v24 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
    v217 = *(_BYTE *)(Block::mNetherFence + 4);
    v218 = 0;
    v215 = *(_BYTE *)(Block::mNetherFence + 4);
    v216 = 0;
    v24(v4, v20, v6, 0);
    v25 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v213 = *(_BYTE *)(Block::mNetherFence + 4);
    v214 = 0;
    v211 = *(_BYTE *)(Block::mNetherFence + 4);
    v212 = 0;
    v25(v4, v20, v6, 12);
    v26 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v271 = *(_BYTE *)(Block::mNetherBrick + 4);
    v272 = 0;
    v26(v4, v20, &v271, v17);
    v27 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v27(v4, v20, &v271, v17);
    v28 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
    v28(v4, v20, &v271, 0);
    v29 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v29(v4, v20, &v271, 12);
    v30 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
    v271 = *(_BYTE *)(Block::mNetherFence + 4);
    v30(v4, v20, &v271, v17 + 1);
    v31 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
    v31(v4, v20, &v271, v17 + 1);
    v32 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
    v32(v4, v20, &v271, 0);
    v33 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v33(v4, v20, &v271, 12);
    v17 += 2;
  }
  while ( v17 < 12 );
  v34 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
  v271 = *(_BYTE *)(Block::mNetherFence + 4);
  v272 = 0;
  v34(v4, v20, &v271, 0);
  v35 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
  v35(v4, v20, &v271, 0);
  v36 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
  v36(v4, v20, &v271, 0);
  v37 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v38 = v6;
  v37(v4, v20, &v271, 12);
  v39 = 3;
    v40 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v209 = *(_BYTE *)(Block::mNetherFence + 4);
    v210 = 0;
    v207 = *(_BYTE *)(Block::mNetherFence + 4);
    v208 = 0;
    v40(v4, v20, v6, 1);
    v41 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v205 = *(_BYTE *)(Block::mNetherFence + 4);
    v206 = 0;
    v203 = *(_BYTE *)(Block::mNetherFence + 4);
    v204 = 0;
    v41(v4, v20, v6, 11);
    v39 += 2;
  while ( v39 < 10 );
  v42 = v20;
  v105 = j_StructurePiece::getOrientationData(v4, (const Block *)Block::mNetherBrickStairs, 3);
  v43 = 4;
    v44 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v271 = *(_BYTE *)(Block::mNetherBrickStairs + 4);
    v272 = v105;
    v44(v4, v42, &v271, 5);
    v45 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v45(v4, v42, &v271, 6);
    v46 = v4;
    v47 = v43 + 1;
    v48 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v48(v4, v42, &v271, 7);
    if ( v43 - 4 < 1 || v43 > 8 )
    {
      if ( (unsigned int)(v43 - 9) > 1 )
        goto LABEL_12;
      v49 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v197 = *(_BYTE *)(Block::mNetherBrick + 4);
      v198 = 0;
      v195 = *(_BYTE *)(Block::mNetherBrick + 4);
      v196 = 0;
    }
    else
      v201 = *(_BYTE *)(Block::mNetherBrick + 4);
      v202 = 0;
      v199 = *(_BYTE *)(Block::mNetherBrick + 4);
      v200 = 0;
    v49(v4, v42, v21, 5);
LABEL_12:
    if ( v43 - 4 >= 1 )
      v50 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v193 = BlockID::AIR;
      v191 = BlockID::AIR;
      v194 = 0;
      v192 = 0;
      v50(v4, v42, v21, 5);
    ++v43;
  while ( v47 != 11 );
  v51 = v42;
  v52 = v38;
  v53 = *(void (__fastcall **)(StructurePiece *, BlockSource *))(*(_DWORD *)v4 + 36);
  v271 = *(_BYTE *)(Block::mNetherBrickStairs + 4);
  v272 = v105;
  v53(v4, v42);
  v54 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v54(v4, v42, &v271, 6);
  v55 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v55(v4, v51, &v271, 7);
  v56 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v189 = *(_BYTE *)(Block::mNetherFence + 4);
  v190 = 0;
  v187 = *(_BYTE *)(Block::mNetherFence + 4);
  v188 = 0;
  v56(v4, v51, v52, 5);
  v57 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v185 = *(_BYTE *)(Block::mNetherFence + 4);
  v186 = 0;
  v183 = *(_BYTE *)(Block::mNetherFence + 4);
  v184 = 0;
  v57(v4, v51, v52, 7);
  v58 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v181 = BlockID::AIR;
  v179 = BlockID::AIR;
  v182 = 0;
  v180 = 0;
  v58(v4, v51, v52, 5);
  v59 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v177 = *(_BYTE *)(Block::mNetherBrick + 4);
  v178 = 0;
  v175 = *(_BYTE *)(Block::mNetherBrick + 4);
  v176 = 0;
  v59(v4, v51, v52, 2);
  v60 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v173 = *(_BYTE *)(Block::mNetherBrick + 4);
  v174 = 0;
  v171 = *(_BYTE *)(Block::mNetherBrick + 4);
  v172 = 0;
  v60(v4, v51, v52, 2);
  v61 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v169 = *(_BYTE *)(Block::mNetherBrick + 4);
  v170 = 0;
  v167 = *(_BYTE *)(Block::mNetherBrick + 4);
  v168 = 0;
  v61(v4, v51, v52, 2);
  v62 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v165 = *(_BYTE *)(Block::mNetherBrick + 4);
  v166 = 0;
  v163 = *(_BYTE *)(Block::mNetherBrick + 4);
  v164 = 0;
  v62(v4, v51, v52, 9);
  v63 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v161 = *(_BYTE *)(Block::mNetherBrick + 4);
  v162 = 0;
  v159 = *(_BYTE *)(Block::mNetherBrick + 4);
  v160 = 0;
  v63(v4, v51, v52, 9);
  v64 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v157 = *(_BYTE *)(Block::mNetherBrick + 4);
  v158 = 0;
  v155 = *(_BYTE *)(Block::mNetherBrick + 4);
  v156 = 0;
  v64(v4, v51, v52, 10);
  v65 = j_StructurePiece::getOrientationData(v4, (const Block *)Block::mNetherBrickStairs, 0);
  LOBYTE(v55) = j_StructurePiece::getOrientationData(v4, (const Block *)Block::mNetherBrickStairs, 1);
  v66 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v272 = (char)v55;
  v66(v4, v51, &v271, 4);
  v67 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v67(v4, v51, &v271, 4);
  v68 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v68(v4, v51, &v271, 4);
  v69 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v69(v4, v51, &v271, 4);
  v70 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v272 = v65;
  v70(v4, v51, &v271, 8);
  v71 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v71(v4, v51, &v271, 8);
  v72 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v72(v4, v51, &v271, 8);
  v73 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v73(v4, v51, &v271, 8);
  v74 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v153 = *(_BYTE *)(Block::mSoulSand + 4);
  v154 = 0;
  v151 = *(_BYTE *)(Block::mSoulSand + 4);
  v152 = 0;
  v74(v4, v51, v52, 3);
  v75 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v149 = *(_BYTE *)(Block::mSoulSand + 4);
  v150 = 0;
  v147 = *(_BYTE *)(Block::mSoulSand + 4);
  v148 = 0;
  v75(v4, v51, v52, 8);
  v76 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v145 = *(_BYTE *)(Block::mNetherWart + 4);
  v146 = 0;
  v143 = *(_BYTE *)(Block::mNetherWart + 4);
  v144 = 0;
  v76(v4, v51, v52, 3);
  v77 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v141 = *(_BYTE *)(Block::mNetherWart + 4);
  v142 = 0;
  v139 = *(_BYTE *)(Block::mNetherWart + 4);
  v140 = 0;
  v77(v4, v51, v52, 8);
  v78 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v137 = *(_BYTE *)(Block::mNetherBrick + 4);
  v138 = 0;
  v135 = *(_BYTE *)(Block::mNetherBrick + 4);
  v136 = 0;
  v78(v4, v51, v52, 4);
  v79 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v133 = *(_BYTE *)(Block::mNetherBrick + 4);
  v134 = 0;
  v131 = *(_BYTE *)(Block::mNetherBrick + 4);
  v132 = 0;
  v79(v4, v51, v52, 0);
  v80 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v129 = *(_BYTE *)(Block::mNetherBrick + 4);
  v130 = 0;
  v127 = *(_BYTE *)(Block::mNetherBrick + 4);
  v128 = 0;
  v80(v4, v51, v52, 4);
  v81 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v125 = *(_BYTE *)(Block::mNetherBrick + 4);
  v126 = 0;
  v123 = *(_BYTE *)(Block::mNetherBrick + 4);
  v124 = 0;
  v81(v4, v51, v52, 4);
  v82 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v121 = *(_BYTE *)(Block::mNetherBrick + 4);
  v122 = 0;
  v119 = *(_BYTE *)(Block::mNetherBrick + 4);
  v120 = 0;
  v82(v4, v51, v52, 0);
  v83 = *(void (__fastcall **)(StructurePiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v117 = *(_BYTE *)(Block::mNetherBrick + 4);
  v118 = 0;
  v115 = *(_BYTE *)(Block::mNetherBrick + 4);
  v116 = 0;
  v84 = 4;
  v83(v46, v51, v52, 9);
    v85 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v46 + 44);
    v113 = *(_BYTE *)(Block::mNetherBrick + 4);
    v114 = 0;
    v85(v46, v51, &v113, v84);
    v86 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v46 + 44);
    v111 = *(_BYTE *)(Block::mNetherBrick + 4);
    v112 = 0;
    v86(v46, v51, &v111, v84);
    v87 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v46 + 44);
    v87(v46, v51, &v113, v84);
    v88 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v46 + 44);
    v88(v46, v51, &v111, v84);
    v89 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v46 + 44);
    v89(v46, v51, &v113, v84);
    v90 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v46 + 44);
    v90(v46, v51, &v111, v84++);
  while ( v84 != 9 );
  v106 = 12;
  v91 = 0;
    v92 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v46 + 44);
    v109 = *(_BYTE *)(Block::mNetherBrick + 4);
    v110 = 0;
    v92(v46, v51, &v109, v91);
    v93 = *(void (__fastcall **)(StructurePiece *, BlockSource *))(*(_DWORD *)v46 + 44);
    v107 = *(_BYTE *)(Block::mNetherBrick + 4);
    v108 = 0;
    v93(v46, v51);
    v94 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v46 + 44);
    v94(v46, v51, &v109, v91);
    v95 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v46 + 44);
    v95(v46, v51, &v107, v106);
    v96 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v46 + 44);
    v96(v46, v51, &v109, v91);
    v97 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v46 + 44);
    v97(v46, v51, &v107, v106);
    v98 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v46 + 44);
    v98(v46, v51, &v109, v91);
    v99 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v46 + 44);
    v99(v46, v51, &v107, v106);
    v100 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v46 + 44);
    v100(v46, v51, &v109, v91);
    v101 = *(int (__fastcall **)(StructurePiece *, BlockSource *, char *, signed int))(*(_DWORD *)v46 + 44);
    v102 = (NetherFortressPiece *)v101(v46, v51, &v107, v106);
    ++v91;
    --v106;
  while ( v91 != 3 );
  return j_NetherFortressPiece::postProcess(v102, v51, v103, v52);
}


int __fastcall NBCastleStalkRoom::NBCastleStalkRoom(int result, int a2, int a3, int a4, int a5)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 32) = a2;
  *(_DWORD *)result = &off_2723C20;
  *(_DWORD *)(result + 28) = a5;
  *(_DWORD *)(result + 4) = *(_DWORD *)a4;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a4 + 12);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a4 + 16);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a4 + 20);
  return result;
}


signed int __fastcall NBCastleStalkRoom::getType(NBCastleStalkRoom *this)
{
  return 1313035090;
}


_DWORD *__fastcall NBCastleStalkRoom::createPiece(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
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
    *result = &off_2723C20;
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


int __fastcall NBCastleStalkRoom::addChildren(int a1, int a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r4@1
  int v6; // r5@1
  int v7; // r6@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  j_NetherFortressPiece::generateChildForward(a1, a2, a3, a4, 5, 3, 1);
  return j_NetherFortressPiece::generateChildForward(v4, v7, v6, v5, 5, 11, 1);
}
