

void __fastcall OceanMonumentWingRoom::~OceanMonumentWingRoom(OceanMonumentWingRoom *this)
{
  OceanMonumentWingRoom *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_2718D84;
  v2 = *((_DWORD *)this + 11);
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
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall OceanMonumentWingRoom::OceanMonumentWingRoom(int result)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 0;
  *(_BYTE *)(result + 36) = 1;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  byte_281EAF1 = *(_BYTE *)(Block::mPrismarine + 4);
  byte_281EAF2 = 0;
  byte_281EAF3 = byte_281EAF1;
  byte_281EAF4 = 2;
  byte_281EAF5 = byte_281EAF1;
  byte_281EAF6 = 1;
  byte_281EAF7 = byte_281EAF1;
  byte_281EAF8 = 2;
  byte_281EAF9 = *(_BYTE *)(Block::mSeaLantern + 4);
  byte_281EAFA = 0;
  LOBYTE(word_281EAFB) = *(_BYTE *)(Block::mStillWater + 4);
  word_281EAFB = (unsigned __int8)word_281EAFB;
  *(_DWORD *)result = &off_271909C;
  *(_WORD *)(result + 52) = 0;
  return result;
}


signed int __fastcall OceanMonumentWingRoom::postProcess(OceanMonumentWingRoom *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  BlockSource *v4; // r6@1
  int v5; // r1@1
  const BoundingBox *v6; // r5@1
  BlockSource *v7; // r11@2
  OceanMonumentWingRoom *v8; // r6@3
  void (__cdecl *v9)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int, signed int, signed int, signed int, signed int); // r4@3
  void (__fastcall *v10)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int); // r4@3
  void (__fastcall *v11)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int); // r4@3
  void (__fastcall *v12)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int); // r4@3
  void (__fastcall *v13)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int); // r4@3
  void (__fastcall *v14)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int); // r4@3
  void (__fastcall *v15)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int); // r4@3
  void (__fastcall *v16)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int); // r4@3
  void (__fastcall *v17)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int); // r4@3
  void (__fastcall *v18)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int); // r4@3
  void (__fastcall *v19)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int); // r4@3
  void (__fastcall *v20)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int); // r4@3
  void (__fastcall *v21)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int); // r4@3
  void (__fastcall *v22)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int); // r4@3
  void (__fastcall *v23)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int); // r4@3
  void (__fastcall *v24)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int); // r4@3
  void (__fastcall *v25)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int); // r4@3
  void (__fastcall *v26)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r4@3
  void (__fastcall *v27)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r4@3
  void (__fastcall *v28)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r4@3
  void (__fastcall *v29)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r4@3
  void (__fastcall *v30)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r4@3
  void (__fastcall *v31)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r4@3
  void (__fastcall *v32)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r4@3
  void (__fastcall *v33)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r4@3
  void (__fastcall *v34)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r4@3
  void (__fastcall *v35)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r4@3
  void (__fastcall *v36)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r4@3
  void (__fastcall *v37)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r4@3
  void (__fastcall *v38)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r4@3
  void (__fastcall *v39)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r4@3
  void (__fastcall *v40)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r4@3
  void (__fastcall *v41)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r4@3
  void (__fastcall *v42)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r4@3
  void (__fastcall *v43)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r4@3
  void (__fastcall *v44)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r4@3
  void (__fastcall *v45)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r4@3
  void (__fastcall *v46)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r4@3
  void (__fastcall *v47)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r4@3
  void (__fastcall *v48)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r4@3
  void (__fastcall *v49)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r4@3
  void (__fastcall *v50)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r4@3
  void (__fastcall *v51)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r4@3
  void (__fastcall *v52)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r4@3
  void (__fastcall *v53)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r4@3
  void (__fastcall *v54)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int); // r12@3
  void (__fastcall *v55)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int); // r12@3
  OceanMonumentWingRoom *v56; // r11@4
  void (__cdecl *v57)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int, signed int, signed int, signed int, signed int); // r7@4
  signed int v58; // r9@4
  void (__fastcall *v59)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int); // r7@4
  void (__fastcall *v60)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int); // r7@4
  void (__fastcall *v61)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r7@4
  void (__fastcall *v62)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r7@4
  void (__fastcall *v63)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r7@4
  void (__fastcall *v64)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r7@4
  void (__fastcall *v65)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r7@4
  void (__fastcall *v66)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r7@4
  void (__fastcall *v67)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int); // r7@4
  BlockSource *v68; // r8@4
  OceanMonumentWingRoom *v69; // r4@4
  BlockSource *v70; // r1@4
  const BoundingBox *v71; // r6@4
  signed int v72; // r7@4
  OceanMonumentWingRoom *v73; // r11@5
  void (__fastcall *v74)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int); // r4@5
  void (__fastcall *v75)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int); // r5@5
  void (__fastcall *v76)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r5@5
  void (__fastcall *v77)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r5@5
  void (__fastcall *v78)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r5@5
  void (__fastcall *v79)(OceanMonumentWingRoom *, BlockSource *, char *, signed int); // r5@5
  void (__fastcall *v80)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int); // r4@6
  const BoundingBox *v81; // r7@6
  void (__fastcall *v82)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int); // r4@6
  void (__fastcall *v83)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int); // r4@6
  void (__fastcall *v84)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int); // r4@6
  void (__fastcall *v85)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int); // r6@6
  void (__fastcall *v86)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int); // r6@6
  char v88; // [sp+28h] [bp-168h]@6
  char v89; // [sp+29h] [bp-167h]@6
  char v90; // [sp+2Ch] [bp-164h]@6
  char v91; // [sp+2Dh] [bp-163h]@6
  char v92; // [sp+30h] [bp-160h]@6
  char v93; // [sp+31h] [bp-15Fh]@6
  char v94; // [sp+34h] [bp-15Ch]@6
  char v95; // [sp+35h] [bp-15Bh]@6
  char v96; // [sp+38h] [bp-158h]@6
  char v97; // [sp+39h] [bp-157h]@6
  char v98; // [sp+3Ch] [bp-154h]@6
  char v99; // [sp+3Dh] [bp-153h]@6
  char v100; // [sp+40h] [bp-150h]@6
  char v101; // [sp+41h] [bp-14Fh]@6
  char v102; // [sp+44h] [bp-14Ch]@6
  char v103; // [sp+45h] [bp-14Bh]@6
  char v104; // [sp+48h] [bp-148h]@5
  char v105; // [sp+49h] [bp-147h]@5
  char v106; // [sp+4Ch] [bp-144h]@5
  char v107; // [sp+4Dh] [bp-143h]@5
  char v108; // [sp+50h] [bp-140h]@5
  char v109; // [sp+51h] [bp-13Fh]@5
  char v110; // [sp+54h] [bp-13Ch]@5
  char v111; // [sp+55h] [bp-13Bh]@5
  char v112; // [sp+58h] [bp-138h]@5
  char v113; // [sp+59h] [bp-137h]@5
  char v114; // [sp+5Ch] [bp-134h]@5
  char v115; // [sp+5Dh] [bp-133h]@5
  char v116; // [sp+60h] [bp-130h]@5
  char v117; // [sp+61h] [bp-12Fh]@5
  char v118; // [sp+64h] [bp-12Ch]@5
  char v119; // [sp+65h] [bp-12Bh]@5
  char v120; // [sp+68h] [bp-128h]@4
  char v121; // [sp+69h] [bp-127h]@4
  char v122; // [sp+6Ch] [bp-124h]@4
  char v123; // [sp+6Dh] [bp-123h]@4
  char v124; // [sp+70h] [bp-120h]@4
  char v125; // [sp+71h] [bp-11Fh]@4
  char v126; // [sp+74h] [bp-11Ch]@4
  char v127; // [sp+75h] [bp-11Bh]@4
  char v128; // [sp+78h] [bp-118h]@4
  char v129; // [sp+79h] [bp-117h]@4
  char v130; // [sp+7Ch] [bp-114h]@4
  char v131; // [sp+7Dh] [bp-113h]@4
  char v132; // [sp+80h] [bp-110h]@4
  char v133; // [sp+81h] [bp-10Fh]@4
  char v134; // [sp+84h] [bp-10Ch]@4
  char v135; // [sp+85h] [bp-10Bh]@4
  char v136; // [sp+88h] [bp-108h]@4
  char v137; // [sp+89h] [bp-107h]@4
  char v138; // [sp+8Ch] [bp-104h]@4
  char v139; // [sp+8Dh] [bp-103h]@4
  char v140; // [sp+90h] [bp-100h]@4
  char v141; // [sp+91h] [bp-FFh]@4
  char v142; // [sp+94h] [bp-FCh]@3
  char v143; // [sp+95h] [bp-FBh]@3
  char v144; // [sp+98h] [bp-F8h]@3
  char v145; // [sp+99h] [bp-F7h]@3
  char v146; // [sp+9Ch] [bp-F4h]@3
  char v147; // [sp+9Dh] [bp-F3h]@3
  char v148; // [sp+A0h] [bp-F0h]@3
  char v149; // [sp+A1h] [bp-EFh]@3
  char v150; // [sp+A4h] [bp-ECh]@3
  char v151; // [sp+A5h] [bp-EBh]@3
  char v152; // [sp+A8h] [bp-E8h]@3
  char v153; // [sp+A9h] [bp-E7h]@3
  char v154; // [sp+ACh] [bp-E4h]@3
  char v155; // [sp+ADh] [bp-E3h]@3
  char v156; // [sp+B0h] [bp-E0h]@3
  char v157; // [sp+B1h] [bp-DFh]@3
  char v158; // [sp+B4h] [bp-DCh]@3
  char v159; // [sp+B5h] [bp-DBh]@3
  char v160; // [sp+B8h] [bp-D8h]@3
  char v161; // [sp+B9h] [bp-D7h]@3
  char v162; // [sp+BCh] [bp-D4h]@3
  char v163; // [sp+BDh] [bp-D3h]@3
  char v164; // [sp+C0h] [bp-D0h]@3
  char v165; // [sp+C1h] [bp-CFh]@3
  char v166; // [sp+C4h] [bp-CCh]@3
  char v167; // [sp+C5h] [bp-CBh]@3
  char v168; // [sp+C8h] [bp-C8h]@3
  char v169; // [sp+C9h] [bp-C7h]@3
  char v170; // [sp+CCh] [bp-C4h]@3
  char v171; // [sp+CDh] [bp-C3h]@3
  char v172; // [sp+D0h] [bp-C0h]@3
  char v173; // [sp+D1h] [bp-BFh]@3
  char v174; // [sp+D4h] [bp-BCh]@3
  char v175; // [sp+D5h] [bp-BBh]@3
  char v176; // [sp+D8h] [bp-B8h]@3
  char v177; // [sp+D9h] [bp-B7h]@3
  char v178; // [sp+DCh] [bp-B4h]@3
  char v179; // [sp+DDh] [bp-B3h]@3
  char v180; // [sp+E0h] [bp-B0h]@3
  char v181; // [sp+E1h] [bp-AFh]@3
  char v182; // [sp+E4h] [bp-ACh]@3
  char v183; // [sp+E5h] [bp-ABh]@3
  char v184; // [sp+E8h] [bp-A8h]@3
  char v185; // [sp+E9h] [bp-A7h]@3
  char v186; // [sp+ECh] [bp-A4h]@3
  char v187; // [sp+EDh] [bp-A3h]@3
  char v188; // [sp+F0h] [bp-A0h]@3
  char v189; // [sp+F1h] [bp-9Fh]@3
  char v190; // [sp+F4h] [bp-9Ch]@3
  char v191; // [sp+F5h] [bp-9Bh]@3
  char v192; // [sp+F8h] [bp-98h]@3
  char v193; // [sp+F9h] [bp-97h]@3
  char v194; // [sp+FCh] [bp-94h]@3
  char v195; // [sp+FDh] [bp-93h]@3
  char v196; // [sp+100h] [bp-90h]@3
  char v197; // [sp+101h] [bp-8Fh]@3
  char v198; // [sp+104h] [bp-8Ch]@3
  char v199; // [sp+105h] [bp-8Bh]@3
  char v200; // [sp+108h] [bp-88h]@3
  char v201; // [sp+109h] [bp-87h]@3
  char v202; // [sp+10Ch] [bp-84h]@3
  char v203; // [sp+10Dh] [bp-83h]@3
  char v204; // [sp+110h] [bp-80h]@3
  char v205; // [sp+111h] [bp-7Fh]@3
  char v206; // [sp+114h] [bp-7Ch]@3
  char v207; // [sp+115h] [bp-7Bh]@3
  char v208; // [sp+118h] [bp-78h]@3
  char v209; // [sp+119h] [bp-77h]@3
  char v210; // [sp+11Ch] [bp-74h]@3
  char v211; // [sp+11Dh] [bp-73h]@3
  char v212; // [sp+120h] [bp-70h]@3
  char v213; // [sp+121h] [bp-6Fh]@3
  char v214; // [sp+124h] [bp-6Ch]@3
  char v215; // [sp+125h] [bp-6Bh]@3
  char v216; // [sp+128h] [bp-68h]@3
  char v217; // [sp+129h] [bp-67h]@3
  char v218; // [sp+12Ch] [bp-64h]@3
  char v219; // [sp+12Dh] [bp-63h]@3
  char v220; // [sp+130h] [bp-60h]@3
  char v221; // [sp+131h] [bp-5Fh]@3
  char v222; // [sp+134h] [bp-5Ch]@3
  char v223; // [sp+135h] [bp-5Bh]@3
  char v224; // [sp+138h] [bp-58h]@3
  char v225; // [sp+139h] [bp-57h]@3
  char v226; // [sp+13Ch] [bp-54h]@3
  char v227; // [sp+13Dh] [bp-53h]@3
  char v228; // [sp+140h] [bp-50h]@3
  char v229; // [sp+141h] [bp-4Fh]@3
  char v230; // [sp+144h] [bp-4Ch]@3
  char v231; // [sp+145h] [bp-4Bh]@3
  char v232; // [sp+148h] [bp-48h]@3
  char v233; // [sp+149h] [bp-47h]@3
  char v234; // [sp+14Ch] [bp-44h]@3
  char v235; // [sp+14Dh] [bp-43h]@3
  char v236; // [sp+150h] [bp-40h]@3
  char v237; // [sp+151h] [bp-3Fh]@3
  char v238; // [sp+154h] [bp-3Ch]@3
  char v239; // [sp+155h] [bp-3Bh]@3
  char v240; // [sp+158h] [bp-38h]@3
  char v241; // [sp+159h] [bp-37h]@3
  char v242; // [sp+15Ch] [bp-34h]@3
  char v243; // [sp+15Dh] [bp-33h]@3
  char v244; // [sp+160h] [bp-30h]@3
  char v245; // [sp+161h] [bp-2Fh]@3
  char v246; // [sp+164h] [bp-2Ch]@3
  char v247; // [sp+165h] [bp-2Bh]@3
  char v248; // [sp+168h] [bp-28h]@3
  char v249; // [sp+169h] [bp-27h]@3

  v4 = a2;
  v5 = *((_DWORD *)this + 12);
  v6 = a4;
  if ( v5 == 1 )
  {
    v56 = this;
    v57 = *(void (__cdecl **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int, signed int, signed int, signed int, signed int))(*(_DWORD *)this + 40);
    v140 = byte_281EAF3;
    v138 = byte_281EAF3;
    v141 = byte_281EAF4;
    v139 = byte_281EAF4;
    v57(this, v4, a4, 9, 3, 18, 13, 3);
    v58 = 2;
    v59 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v56 + 40);
    v136 = byte_281EAF3;
    v134 = byte_281EAF3;
    v137 = byte_281EAF4;
    v135 = byte_281EAF4;
    v59(v56, v4, v6, 9);
    v60 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v56 + 40);
    v132 = byte_281EAF3;
    v130 = byte_281EAF3;
    v133 = byte_281EAF4;
    v131 = byte_281EAF4;
    v60(v56, v4, v6, 13);
    v61 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v56 + 36);
    v128 = byte_281EAF3;
    v129 = byte_281EAF4;
    v61(v56, v4, &v128, 9);
    v62 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v56 + 36);
    v126 = byte_281EAF9;
    v127 = byte_281EAFA;
    v62(v56, v4, &v126, 9);
    v63 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v56 + 36);
    v124 = byte_281EAF3;
    v125 = byte_281EAF4;
    v63(v56, v4, &v124, 9);
    v64 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v56 + 36);
    v64(v56, v4, &v128, 13);
    v65 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v56 + 36);
    v65(v56, v4, &v126, 13);
    v66 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v56 + 36);
    v66(v56, v4, &v124, 13);
    v67 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v56 + 40);
    v68 = v4;
    v122 = byte_281EAF3;
    v120 = byte_281EAF3;
    v123 = byte_281EAF4;
    v121 = byte_281EAF4;
    v69 = v56;
    v70 = v4;
    v71 = v6;
    v67(v56, v70, v6, 7);
    v72 = 10;
    do
    {
      v73 = v69;
      v74 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v69 + 40);
      v118 = byte_281EAF3;
      v116 = byte_281EAF3;
      v119 = byte_281EAF4;
      v117 = byte_281EAF4;
      v74(v73, v68, v71, v72);
      v75 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v73 + 40);
      v114 = byte_281EAF3;
      v112 = byte_281EAF3;
      v115 = byte_281EAF4;
      v113 = byte_281EAF4;
      v75(v73, v68, v71, v72);
      v76 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v73 + 36);
      v110 = byte_281EAF9;
      v111 = byte_281EAFA;
      v76(v73, v68, &v110, v72);
      v77 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v73 + 36);
      v108 = byte_281EAF9;
      v109 = byte_281EAFA;
      v77(v73, v68, &v108, v72);
      v78 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v73 + 36);
      v106 = byte_281EAF9;
      v107 = byte_281EAFA;
      v78(v73, v68, &v106, v72);
      v79 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v73 + 36);
      v104 = byte_281EAF9;
      v105 = byte_281EAFA;
      v69 = v73;
      v79(v73, v68, &v104, v72);
      --v58;
      v72 = 12;
    }
    while ( v58 );
    v80 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v73 + 40);
    v102 = byte_281EAF3;
    v100 = byte_281EAF3;
    v103 = byte_281EAF4;
    v101 = byte_281EAF4;
    v81 = v71;
    v80(v73, v68, v71, 8);
    v82 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v73 + 40);
    v98 = byte_281EAF3;
    v96 = byte_281EAF3;
    v99 = byte_281EAF4;
    v97 = byte_281EAF4;
    v82(v73, v68, v71, 8);
    v83 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v73 + 40);
    v83(v73, v68, v71, 14);
    v84 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v73 + 40);
    v84(v73, v68, v71, 14);
    v85 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v73 + 40);
    v94 = byte_281EAF5;
    v92 = byte_281EAF5;
    v95 = byte_281EAF6;
    v93 = byte_281EAF6;
    v85(v73, v68, v81, 8);
    v86 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v73 + 40);
    v90 = byte_281EAF5;
    v88 = byte_281EAF5;
    v91 = byte_281EAF6;
    v89 = byte_281EAF6;
    v86(v73, v68, v81, 14);
  }
  else
    v7 = v4;
    if ( !v5 )
      v8 = this;
      v9 = *(void (__cdecl **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int, signed int, signed int, signed int, signed int))(*(_DWORD *)this + 40);
      v248 = byte_281EAF3;
      v246 = byte_281EAF3;
      v249 = byte_281EAF4;
      v247 = byte_281EAF4;
      v9(this, v7, a4, 10, 3, 20, 12, 3);
      v10 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v8 + 40);
      v10(v8, v7, v6, 9);
      v11 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v8 + 40);
      v11(v8, v7, v6, 8);
      v12 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v8 + 40);
      v12(v8, v7, v6, 7);
      v13 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v8 + 40);
      v244 = byte_281EAF3;
      v242 = byte_281EAF3;
      v245 = byte_281EAF4;
      v243 = byte_281EAF4;
      v13(v8, v7, v6, 7);
      v14 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v8 + 40);
      v240 = byte_281EAF3;
      v238 = byte_281EAF3;
      v241 = byte_281EAF4;
      v239 = byte_281EAF4;
      v14(v8, v7, v6, 6);
      v15 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v8 + 40);
      v236 = byte_281EAF3;
      v234 = byte_281EAF3;
      v237 = byte_281EAF4;
      v235 = byte_281EAF4;
      v15(v8, v7, v6, 16);
      v16 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v8 + 40);
      v232 = byte_281EAF3;
      v230 = byte_281EAF3;
      v233 = byte_281EAF4;
      v231 = byte_281EAF4;
      v16(v8, v7, v6, 7);
      v17 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v8 + 40);
      v228 = byte_281EAF3;
      v226 = byte_281EAF3;
      v229 = byte_281EAF4;
      v227 = byte_281EAF4;
      v17(v8, v7, v6, 15);
      v18 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v8 + 40);
      v224 = byte_281EAF3;
      v222 = byte_281EAF3;
      v225 = byte_281EAF4;
      v223 = byte_281EAF4;
      v18(v8, v7, v6, 7);
      v19 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v8 + 40);
      v220 = byte_281EAF3;
      v218 = byte_281EAF3;
      v221 = byte_281EAF4;
      v219 = byte_281EAF4;
      v19(v8, v7, v6, 13);
      v20 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v8 + 40);
      v216 = byte_281EAF3;
      v214 = byte_281EAF3;
      v217 = byte_281EAF4;
      v215 = byte_281EAF4;
      v20(v8, v7, v6, 8);
      v21 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v8 + 40);
      v212 = byte_281EAF3;
      v210 = byte_281EAF3;
      v213 = byte_281EAF4;
      v211 = byte_281EAF4;
      v21(v8, v7, v6, 13);
      v22 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v8 + 40);
      v208 = byte_281EAF3;
      v206 = byte_281EAF3;
      v209 = byte_281EAF4;
      v207 = byte_281EAF4;
      v22(v8, v7, v6, 9);
      v23 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v8 + 40);
      v204 = byte_281EAF5;
      v202 = byte_281EAF5;
      v205 = byte_281EAF6;
      v203 = byte_281EAF6;
      v23(v8, v7, v6, 10);
      v24 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v8 + 40);
      v200 = byte_281EAF5;
      v198 = byte_281EAF5;
      v201 = byte_281EAF6;
      v199 = byte_281EAF6;
      v24(v8, v7, v6, 8);
      v25 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v8 + 40);
      v196 = byte_281EAF5;
      v194 = byte_281EAF5;
      v197 = byte_281EAF6;
      v195 = byte_281EAF6;
      v25(v8, v7, v6, 14);
      v26 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v8 + 36);
      v192 = byte_281EAF9;
      v193 = byte_281EAFA;
      v26(v8, v7, &v192, 6);
      v27 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v8 + 36);
      v190 = byte_281EAF9;
      v191 = byte_281EAFA;
      v27(v8, v7, &v190, 16);
      v28 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v8 + 36);
      v28(v8, v7, &v192, 6);
      v29 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v8 + 36);
      v29(v8, v7, &v190, 16);
      v30 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v8 + 36);
      v30(v8, v7, &v192, 6);
      v31 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v8 + 36);
      v31(v8, v7, &v190, 16);
      v32 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v8 + 36);
      v32(v8, v7, &v192, 6);
      v33 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v8 + 36);
      v33(v8, v7, &v190, 16);
      v34 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v8 + 36);
      v188 = byte_281EAF9;
      v189 = byte_281EAFA;
      v34(v8, v7, &v188, 10);
      v35 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v8 + 36);
      v186 = byte_281EAF9;
      v187 = byte_281EAFA;
      v35(v8, v7, &v186, 12);
      v36 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v8 + 36);
      v184 = byte_281EAF9;
      v185 = byte_281EAFA;
      v36(v8, v7, &v184, 10);
      v37 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v8 + 36);
      v182 = byte_281EAF9;
      v183 = byte_281EAFA;
      v37(v8, v7, &v182, 12);
      v38 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v8 + 36);
      v180 = byte_281EAF9;
      v181 = byte_281EAFA;
      v38(v8, v7, &v180, 8);
      v39 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v8 + 36);
      v178 = byte_281EAF9;
      v179 = byte_281EAFA;
      v39(v8, v7, &v178, 14);
      v40 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v8 + 36);
      v176 = byte_281EAF3;
      v177 = byte_281EAF4;
      v40(v8, v7, &v176, 4);
      v41 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v8 + 36);
      v174 = byte_281EAF9;
      v175 = byte_281EAFA;
      v41(v8, v7, &v174, 4);
      v42 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v8 + 36);
      v172 = byte_281EAF3;
      v173 = byte_281EAF4;
      v42(v8, v7, &v172, 4);
      v43 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v8 + 36);
      v170 = byte_281EAF3;
      v171 = byte_281EAF4;
      v43(v8, v7, &v170, 18);
      v44 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v8 + 36);
      v168 = byte_281EAF9;
      v169 = byte_281EAFA;
      v44(v8, v7, &v168, 18);
      v45 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v8 + 36);
      v166 = byte_281EAF3;
      v167 = byte_281EAF4;
      v45(v8, v7, &v166, 18);
      v46 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v8 + 36);
      v164 = byte_281EAF3;
      v165 = byte_281EAF4;
      v46(v8, v7, &v164, 4);
      v47 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v8 + 36);
      v162 = byte_281EAF9;
      v163 = byte_281EAFA;
      v47(v8, v7, &v162, 4);
      v48 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v8 + 36);
      v160 = byte_281EAF3;
      v161 = byte_281EAF4;
      v48(v8, v7, &v160, 4);
      v49 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v8 + 36);
      v158 = byte_281EAF3;
      v159 = byte_281EAF4;
      v49(v8, v7, &v158, 18);
      v50 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v8 + 36);
      v156 = byte_281EAF9;
      v157 = byte_281EAFA;
      v50(v8, v7, &v156, 18);
      v51 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v8 + 36);
      v154 = byte_281EAF3;
      v155 = byte_281EAF4;
      v51(v8, v7, &v154, 18);
      v52 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v8 + 36);
      v152 = byte_281EAF3;
      v153 = byte_281EAF4;
      v52(v8, v7, &v152, 9);
      v53 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v8 + 36);
      v150 = byte_281EAF3;
      v151 = byte_281EAF4;
      v53(v8, v7, &v150, 13);
      v54 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v8 + 40);
      v148 = byte_281EAF3;
      v146 = byte_281EAF3;
      v149 = byte_281EAF4;
      v147 = byte_281EAF4;
      v54(v8, v7, v6, 6);
      v55 = *(void (__fastcall **)(OceanMonumentWingRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v8 + 40);
      v144 = byte_281EAF3;
      v142 = byte_281EAF3;
      v145 = byte_281EAF4;
      v143 = byte_281EAF4;
      v55(v8, v7, v6, 15);
  return 1;
}


void __fastcall OceanMonumentWingRoom::~OceanMonumentWingRoom(OceanMonumentWingRoom *this)
{
  OceanMonumentWingRoom::~OceanMonumentWingRoom(this);
}


int __fastcall OceanMonumentWingRoom::OceanMonumentWingRoom(int result, _DWORD *a2, int a3, char a4, char a5)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 1;
  *(_BYTE *)(result + 36) = 1;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 28) = *a2;
  *(_DWORD *)(result + 4) = *(_DWORD *)a3;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a3 + 4);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a3 + 12);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a3 + 16);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a3 + 20);
  byte_281EAF1 = *(_BYTE *)(Block::mPrismarine + 4);
  byte_281EAF2 = 0;
  byte_281EAF3 = byte_281EAF1;
  byte_281EAF4 = 2;
  byte_281EAF5 = byte_281EAF1;
  byte_281EAF6 = 1;
  byte_281EAF7 = byte_281EAF1;
  byte_281EAF8 = 2;
  byte_281EAF9 = *(_BYTE *)(Block::mSeaLantern + 4);
  byte_281EAFA = 0;
  LOBYTE(word_281EAFB) = *(_BYTE *)(Block::mStillWater + 4);
  word_281EAFB = (unsigned __int8)word_281EAFB;
  *(_DWORD *)result = &off_271909C;
  *(_BYTE *)(result + 52) = 0;
  *(_DWORD *)(result + 48) = a4 & 1;
  *(_BYTE *)(result + 53) = a5;
  return result;
}


void __fastcall OceanMonumentWingRoom::postProcessMobsAt(OceanMonumentWingRoom *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  OceanMonumentWingRoom::postProcessMobsAt(this, a2, a3, a4);
}


void __fastcall OceanMonumentWingRoom::postProcessMobsAt(OceanMonumentWingRoom *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  OceanMonumentWingRoom *v4; // r4@1
  BlockSource *v5; // r5@1
  unsigned int v6; // r0@1
  int (__fastcall *v7)(OceanMonumentWingRoom *, signed int, signed int); // r3@2
  const BoundingBox *v15; // r2@3
  OceanMonumentPiece *v16; // r0@4
  BlockSource *v17; // r1@4
  int v18; // r3@4
  float v22; // [sp+8h] [bp-58h]@3
  char v23; // [sp+14h] [bp-4Ch]@3
  float v24; // [sp+20h] [bp-40h]@5
  char v25; // [sp+2Ch] [bp-34h]@5

  v4 = this;
  v5 = a2;
  v6 = *((_WORD *)this + 26);
  if ( !(_BYTE)v6 )
  {
    v7 = *(int (__fastcall **)(OceanMonumentWingRoom *, signed int, signed int))(*(_DWORD *)v4 + 28);
    if ( v6 >= 0x100 )
    {
      _R6 = v7(v4, 16, 6);
      _R7 = StructurePiece::getWorldY(v4, 1);
      __asm
      {
        VMOV            S0, R6
        VCVT.F32.S32    S16, S0
      }
      _R0 = (*(int (__fastcall **)(OceanMonumentWingRoom *, signed int, signed int))(*(_DWORD *)v4 + 32))(v4, 16, 6);
        VMOV            S0, R7
        VMOV            S2, R0
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
        VSTR            S16, [SP,#0x60+var_40]
        VSTR            S0, [SP,#0x60+var_3C]
        VSTR            S2, [SP,#0x60+var_38]
      j_BlockPos::BlockPos((int)&v25, (int)&v24);
      if ( !BlockSource::getChunkAt(v5, (const BlockPos *)&v25) )
        return;
      v16 = v4;
      v17 = v5;
      v18 = 16;
    }
    else
      _R6 = v7(v4, 6, 6);
      _R0 = (*(int (__fastcall **)(OceanMonumentWingRoom *, signed int, signed int))(*(_DWORD *)v4 + 32))(v4, 6, 6);
        VSTR            S16, [SP,#0x60+var_58]
        VSTR            S0, [SP,#0x60+var_54]
        VSTR            S2, [SP,#0x60+var_50]
      j_BlockPos::BlockPos((int)&v23, (int)&v22);
      if ( !BlockSource::getChunkAt(v5, (const BlockPos *)&v23) )
      v18 = 6;
    OceanMonumentPiece::spawnElder(v16, v17, v15, v18, 1, 6);
    *((_BYTE *)v4 + 52) = 1;
  }
}


signed int __fastcall OceanMonumentWingRoom::getType(OceanMonumentWingRoom *this)
{
  return 1330468690;
}
