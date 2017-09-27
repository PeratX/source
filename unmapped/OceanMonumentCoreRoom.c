

void __fastcall OceanMonumentCoreRoom::~OceanMonumentCoreRoom(OceanMonumentCoreRoom *this)
{
  OceanMonumentCoreRoom::~OceanMonumentCoreRoom(this);
}


_DWORD *__fastcall OceanMonumentCoreRoom::OceanMonumentCoreRoom(int a1, int *a2, int a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)OceanMonumentPiece::OceanMonumentPiece(a1, 1, a2, a3, 2, 2, 2);
  *result = &off_2719054;
  return result;
}


void __fastcall OceanMonumentCoreRoom::~OceanMonumentCoreRoom(OceanMonumentCoreRoom *this)
{
  OceanMonumentCoreRoom *v1; // r4@1
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


signed int __fastcall OceanMonumentCoreRoom::postProcess(OceanMonumentCoreRoom *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  BlockSource *v4; // r4@1
  const BoundingBox *v5; // r5@1
  BlockSource *v6; // r8@1
  int v7; // r11@1
  const BoundingBox *v8; // r9@2
  void (__fastcall *v9)(BlockSource *, BlockSource *, char *, int); // r12@4
  void (__fastcall *v10)(BlockSource *, BlockSource *, const BoundingBox *, _DWORD); // r12@7
  void (__fastcall *v11)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r12@7
  void (__fastcall *v12)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r12@7
  void (__fastcall *v13)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r12@7
  BlockSource *v14; // r9@7
  signed int v15; // r11@7
  BlockSource *v16; // r10@8
  char *v17; // r2@8
  void (__fastcall *v18)(BlockSource *, BlockSource *, const BoundingBox *, _DWORD); // r6@8
  char *v19; // r1@10
  char v20; // r8@10
  char v21; // r4@12
  void (__fastcall *v22)(BlockSource *, BlockSource *, const BoundingBox *, _DWORD); // r6@12
  void (__fastcall *v23)(BlockSource *, BlockSource *, const BoundingBox *, _DWORD); // r6@12
  void (__fastcall *v24)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r6@12
  void (__fastcall *v25)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r6@12
  void (__fastcall *v26)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r6@12
  void (__fastcall *v27)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r6@12
  void (__fastcall *v28)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r6@12
  void (__fastcall *v29)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r6@12
  void (__fastcall *v30)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r6@12
  void (__fastcall *v31)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r6@13
  void (__fastcall *v32)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v33)(BlockSource *, BlockSource *, char *, signed int); // r7@13
  void (__fastcall *v34)(BlockSource *, BlockSource *, char *, signed int); // r6@13
  void (__fastcall *v35)(BlockSource *, BlockSource *, char *, signed int); // r6@13
  void (__fastcall *v36)(BlockSource *, BlockSource *, char *, signed int); // r6@13
  void (__fastcall *v37)(BlockSource *, BlockSource *, char *, signed int); // r6@13
  void (__fastcall *v38)(BlockSource *, BlockSource *, char *, signed int); // r6@13
  void (__fastcall *v39)(BlockSource *, BlockSource *, char *, signed int); // r6@13
  void (__fastcall *v40)(BlockSource *, BlockSource *, char *, signed int); // r6@13
  void (__fastcall *v41)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v42)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v43)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v44)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v45)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v46)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v47)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v48)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v49)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v50)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v51)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v52)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v53)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v54)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v55)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v56)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v57)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v58)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v59)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v60)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v61)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v62)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v63)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r7@13
  void (__fastcall *v64)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r6@13
  void (__fastcall *v65)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r6@13
  void (__fastcall *v66)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r6@13
  void (__fastcall *v67)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r6@13
  void (__fastcall *v68)(BlockSource *, BlockSource *, const BoundingBox *, signed int); // r6@13
  char v70; // [sp+34h] [bp-184h]@1
  char v71; // [sp+38h] [bp-180h]@1
  char v72; // [sp+3Ch] [bp-17Ch]@13
  char v73; // [sp+3Dh] [bp-17Bh]@13
  char v74; // [sp+40h] [bp-178h]@13
  char v75; // [sp+41h] [bp-177h]@13
  char v76; // [sp+44h] [bp-174h]@13
  char v77; // [sp+45h] [bp-173h]@13
  char v78; // [sp+48h] [bp-170h]@13
  char v79; // [sp+49h] [bp-16Fh]@13
  char v80; // [sp+4Ch] [bp-16Ch]@13
  char v81; // [sp+4Dh] [bp-16Bh]@13
  char v82; // [sp+50h] [bp-168h]@13
  char v83; // [sp+51h] [bp-167h]@13
  char v84; // [sp+54h] [bp-164h]@13
  char v85; // [sp+55h] [bp-163h]@13
  char v86; // [sp+58h] [bp-160h]@13
  char v87; // [sp+59h] [bp-15Fh]@13
  char v88; // [sp+5Ch] [bp-15Ch]@13
  char v89; // [sp+5Dh] [bp-15Bh]@13
  char v90; // [sp+60h] [bp-158h]@13
  char v91; // [sp+61h] [bp-157h]@13
  char v92; // [sp+64h] [bp-154h]@13
  char v93; // [sp+65h] [bp-153h]@13
  char v94; // [sp+68h] [bp-150h]@13
  char v95; // [sp+69h] [bp-14Fh]@13
  char v96; // [sp+6Ch] [bp-14Ch]@13
  char v97; // [sp+6Dh] [bp-14Bh]@13
  char v98; // [sp+70h] [bp-148h]@13
  char v99; // [sp+71h] [bp-147h]@13
  char v100; // [sp+74h] [bp-144h]@13
  char v101; // [sp+75h] [bp-143h]@13
  char v102; // [sp+78h] [bp-140h]@13
  char v103; // [sp+79h] [bp-13Fh]@13
  char v104; // [sp+7Ch] [bp-13Ch]@13
  char v105; // [sp+7Dh] [bp-13Bh]@13
  char v106; // [sp+80h] [bp-138h]@13
  char v107; // [sp+81h] [bp-137h]@13
  char v108; // [sp+84h] [bp-134h]@13
  char v109; // [sp+85h] [bp-133h]@13
  char v110; // [sp+88h] [bp-130h]@13
  char v111; // [sp+89h] [bp-12Fh]@13
  char v112; // [sp+8Ch] [bp-12Ch]@13
  char v113; // [sp+8Dh] [bp-12Bh]@13
  char v114; // [sp+90h] [bp-128h]@13
  char v115; // [sp+91h] [bp-127h]@13
  char v116; // [sp+94h] [bp-124h]@13
  char v117; // [sp+95h] [bp-123h]@13
  char v118; // [sp+98h] [bp-120h]@13
  char v119; // [sp+99h] [bp-11Fh]@13
  char v120; // [sp+9Ch] [bp-11Ch]@13
  char v121; // [sp+9Dh] [bp-11Bh]@13
  char v122; // [sp+A0h] [bp-118h]@13
  char v123; // [sp+A1h] [bp-117h]@13
  char v124; // [sp+A4h] [bp-114h]@13
  char v125; // [sp+A5h] [bp-113h]@13
  char v126; // [sp+A8h] [bp-110h]@13
  char v127; // [sp+A9h] [bp-10Fh]@13
  char v128; // [sp+ACh] [bp-10Ch]@13
  char v129; // [sp+ADh] [bp-10Bh]@13
  char v130; // [sp+B0h] [bp-108h]@13
  char v131; // [sp+B1h] [bp-107h]@13
  char v132; // [sp+B4h] [bp-104h]@13
  char v133; // [sp+B5h] [bp-103h]@13
  char v134; // [sp+B8h] [bp-100h]@13
  char v135; // [sp+B9h] [bp-FFh]@13
  char v136; // [sp+BCh] [bp-FCh]@13
  char v137; // [sp+BDh] [bp-FBh]@13
  char v138; // [sp+C0h] [bp-F8h]@13
  char v139; // [sp+C1h] [bp-F7h]@13
  char v140; // [sp+C4h] [bp-F4h]@13
  char v141; // [sp+C5h] [bp-F3h]@13
  char v142; // [sp+C8h] [bp-F0h]@13
  char v143; // [sp+C9h] [bp-EFh]@13
  char v144; // [sp+CCh] [bp-ECh]@13
  char v145; // [sp+CDh] [bp-EBh]@13
  char v146; // [sp+D0h] [bp-E8h]@13
  char v147; // [sp+D1h] [bp-E7h]@13
  char v148; // [sp+D4h] [bp-E4h]@13
  char v149; // [sp+D5h] [bp-E3h]@13
  char v150; // [sp+D8h] [bp-E0h]@13
  char v151; // [sp+D9h] [bp-DFh]@13
  char v152; // [sp+DCh] [bp-DCh]@13
  char v153; // [sp+DDh] [bp-DBh]@13
  char v154; // [sp+E0h] [bp-D8h]@13
  char v155; // [sp+E1h] [bp-D7h]@13
  char v156; // [sp+E4h] [bp-D4h]@13
  char v157; // [sp+E5h] [bp-D3h]@13
  char v158; // [sp+E8h] [bp-D0h]@13
  char v159; // [sp+E9h] [bp-CFh]@13
  char v160; // [sp+ECh] [bp-CCh]@13
  char v161; // [sp+EDh] [bp-CBh]@13
  char v162; // [sp+F0h] [bp-C8h]@13
  char v163; // [sp+F1h] [bp-C7h]@13
  char v164; // [sp+F4h] [bp-C4h]@13
  char v165; // [sp+F5h] [bp-C3h]@13
  char v166; // [sp+F8h] [bp-C0h]@13
  char v167; // [sp+F9h] [bp-BFh]@13
  char v168; // [sp+FCh] [bp-BCh]@13
  char v169; // [sp+FDh] [bp-BBh]@13
  char v170; // [sp+100h] [bp-B8h]@13
  char v171; // [sp+101h] [bp-B7h]@13
  char v172; // [sp+104h] [bp-B4h]@13
  char v173; // [sp+105h] [bp-B3h]@13
  char v174; // [sp+108h] [bp-B0h]@13
  char v175; // [sp+109h] [bp-AFh]@13
  char v176; // [sp+10Ch] [bp-ACh]@13
  char v177; // [sp+10Dh] [bp-ABh]@13
  char v178; // [sp+110h] [bp-A8h]@13
  char v179; // [sp+111h] [bp-A7h]@13
  char v180; // [sp+114h] [bp-A4h]@13
  char v181; // [sp+115h] [bp-A3h]@13
  char v182; // [sp+118h] [bp-A0h]@13
  char v183; // [sp+119h] [bp-9Fh]@13
  char v184; // [sp+11Ch] [bp-9Ch]@13
  char v185; // [sp+11Dh] [bp-9Bh]@13
  char v186; // [sp+120h] [bp-98h]@13
  char v187; // [sp+121h] [bp-97h]@13
  char v188; // [sp+124h] [bp-94h]@13
  char v189; // [sp+125h] [bp-93h]@13
  char v190; // [sp+128h] [bp-90h]@13
  char v191; // [sp+129h] [bp-8Fh]@13
  char v192; // [sp+12Ch] [bp-8Ch]@13
  char v193; // [sp+12Dh] [bp-8Bh]@13
  char v194; // [sp+130h] [bp-88h]@13
  char v195; // [sp+131h] [bp-87h]@13
  char v196; // [sp+134h] [bp-84h]@12
  char v197; // [sp+135h] [bp-83h]@12
  char v198; // [sp+138h] [bp-80h]@12
  char v199; // [sp+139h] [bp-7Fh]@12
  char v200; // [sp+13Ch] [bp-7Ch]@12
  char v201; // [sp+13Dh] [bp-7Bh]@12
  char v202; // [sp+140h] [bp-78h]@12
  char v203; // [sp+141h] [bp-77h]@12
  char v204; // [sp+144h] [bp-74h]@12
  char v205; // [sp+145h] [bp-73h]@12
  char v206; // [sp+148h] [bp-70h]@12
  char v207; // [sp+149h] [bp-6Fh]@12
  char v208; // [sp+14Ch] [bp-6Ch]@12
  char v209; // [sp+14Dh] [bp-6Bh]@12
  char v210; // [sp+150h] [bp-68h]@12
  char v211; // [sp+151h] [bp-67h]@12
  char v212; // [sp+154h] [bp-64h]@12
  char v213; // [sp+155h] [bp-63h]@12
  char v214; // [sp+158h] [bp-60h]@12
  char v215; // [sp+159h] [bp-5Fh]@12
  char v216; // [sp+15Ch] [bp-5Ch]@12
  char v217; // [sp+15Dh] [bp-5Bh]@12
  char v218; // [sp+160h] [bp-58h]@12
  char v219; // [sp+161h] [bp-57h]@12
  char v220; // [sp+164h] [bp-54h]@12
  char v221; // [sp+165h] [bp-53h]@12
  char v222; // [sp+168h] [bp-50h]@12
  char v223; // [sp+169h] [bp-4Fh]@12
  char v224; // [sp+16Ch] [bp-4Ch]@7
  char v225; // [sp+16Dh] [bp-4Bh]@7
  char v226; // [sp+170h] [bp-48h]@7
  char v227; // [sp+171h] [bp-47h]@7
  char v228; // [sp+174h] [bp-44h]@7
  char v229; // [sp+175h] [bp-43h]@7
  char v230; // [sp+178h] [bp-40h]@7
  char v231; // [sp+179h] [bp-3Fh]@7
  char v232; // [sp+17Ch] [bp-3Ch]@7
  char v233; // [sp+17Dh] [bp-3Bh]@7
  char v234; // [sp+180h] [bp-38h]@7
  char v235; // [sp+181h] [bp-37h]@7
  char v236; // [sp+184h] [bp-34h]@7
  char v237; // [sp+185h] [bp-33h]@7
  char v238; // [sp+188h] [bp-30h]@7
  char v239; // [sp+189h] [bp-2Fh]@7
  char v240; // [sp+18Ch] [bp-2Ch]@4
  char v241; // [sp+18Dh] [bp-2Bh]@4
  unsigned __int8 v242; // [sp+190h] [bp-28h]@3

  v4 = this;
  v5 = a4;
  v6 = a2;
  v7 = 1;
  v71 = byte_281EAF1;
  v70 = byte_281EAF2;
  do
  {
    v8 = 0;
    do
    {
      StructurePiece::getBlock((StructurePiece *)&v242, v4, (int)v6, v7, 8, v8, (int)v5);
      if ( v242 == (unsigned __int8)word_281EAFB )
      {
        v9 = *(void (__fastcall **)(BlockSource *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
        v240 = v71;
        v241 = v70;
        v9(v4, v6, &v240, v7);
      }
      v8 = (const BoundingBox *)((char *)v8 + 1);
    }
    while ( v8 != (const BoundingBox *)15 );
    ++v7;
  }
  while ( v7 != 15 );
  v10 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v238 = byte_281EAF3;
  v236 = byte_281EAF3;
  v239 = byte_281EAF4;
  v237 = byte_281EAF4;
  v10(v4, v6, v5, 0);
  v11 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v234 = byte_281EAF3;
  v232 = byte_281EAF3;
  v235 = byte_281EAF4;
  v233 = byte_281EAF4;
  v11(v4, v6, v5, 15);
  v12 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v230 = byte_281EAF3;
  v228 = byte_281EAF3;
  v231 = byte_281EAF4;
  v229 = byte_281EAF4;
  v12(v4, v6, v5, 1);
  v13 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v14 = v6;
  v226 = byte_281EAF3;
  v224 = byte_281EAF3;
  v227 = byte_281EAF4;
  v225 = byte_281EAF4;
  v13(v4, v6, v5, 1);
  v15 = 1;
    v16 = v4;
    v17 = &byte_281EAF4;
    v18 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
    if ( (v15 | 4) == 6 )
      v17 = &byte_281EAF2;
    v19 = &byte_281EAF3;
    v20 = *v17;
      v19 = &byte_281EAF1;
    v21 = *v19;
    v222 = v21;
    v220 = v21;
    v223 = v20;
    v221 = v20;
    v18(v16, v14, v5, 0);
    v22 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v16 + 40);
    v218 = v21;
    v216 = v21;
    v219 = v20;
    v217 = v20;
    v22(v16, v14, v5, 0);
    v23 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v16 + 40);
    v214 = v21;
    v212 = v21;
    v215 = v20;
    v213 = v20;
    v23(v16, v14, v5, 0);
    v24 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
    v24(v16, v14, v5, 15);
    v25 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
    v25(v16, v14, v5, 15);
    v26 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
    v26(v16, v14, v5, 15);
    v27 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
    v210 = v21;
    v208 = v21;
    v211 = v20;
    v209 = v20;
    v27(v16, v14, v5, 1);
    v28 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
    v206 = v21;
    v204 = v21;
    v207 = v20;
    v205 = v20;
    v28(v16, v14, v5, 6);
    v29 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
    v202 = v21;
    v200 = v21;
    v203 = v20;
    v201 = v20;
    v29(v16, v14, v5, 14);
    v30 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
    v198 = v21;
    v196 = v21;
    v4 = v16;
    v199 = v20;
    v197 = v20;
    v30(v16, v14, v5, 1);
    ++v15;
  while ( v15 != 7 );
  v31 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v194 = byte_281EAF5;
  v192 = byte_281EAF5;
  v195 = byte_281EAF6;
  v193 = byte_281EAF6;
  v31(v16, v14, v5, 6);
  v32 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v190 = *(_BYTE *)(Block::mGoldBlock + 4);
  v191 = 0;
  v188 = *(_BYTE *)(Block::mGoldBlock + 4);
  v189 = 0;
  v32(v16, v14, v5, 7);
  v33 = *(void (__fastcall **)(BlockSource *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
  v186 = byte_281EAF9;
  v187 = byte_281EAFA;
  v33(v16, v14, &v186, 6);
  v34 = *(void (__fastcall **)(BlockSource *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
  v184 = byte_281EAF9;
  v185 = byte_281EAFA;
  v34(v16, v14, &v184, 6);
  v35 = *(void (__fastcall **)(BlockSource *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
  v35(v16, v14, &v186, 9);
  v36 = *(void (__fastcall **)(BlockSource *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
  v36(v16, v14, &v184, 9);
  v37 = *(void (__fastcall **)(BlockSource *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
  v37(v16, v14, &v186, 6);
  v38 = *(void (__fastcall **)(BlockSource *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
  v38(v16, v14, &v184, 6);
  v39 = *(void (__fastcall **)(BlockSource *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
  v39(v16, v14, &v186, 9);
  v40 = *(void (__fastcall **)(BlockSource *, BlockSource *, char *, signed int))(*(_DWORD *)v16 + 36);
  v40(v16, v14, &v184, 9);
  v41 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v182 = byte_281EAF3;
  v180 = byte_281EAF3;
  v183 = byte_281EAF4;
  v181 = byte_281EAF4;
  v41(v16, v14, v5, 5);
  v42 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v178 = byte_281EAF3;
  v176 = byte_281EAF3;
  v179 = byte_281EAF4;
  v177 = byte_281EAF4;
  v42(v16, v14, v5, 5);
  v43 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v174 = byte_281EAF3;
  v172 = byte_281EAF3;
  v175 = byte_281EAF4;
  v173 = byte_281EAF4;
  v43(v16, v14, v5, 10);
  v44 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v170 = byte_281EAF3;
  v168 = byte_281EAF3;
  v171 = byte_281EAF4;
  v169 = byte_281EAF4;
  v44(v16, v14, v5, 10);
  v45 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v166 = byte_281EAF3;
  v164 = byte_281EAF3;
  v167 = byte_281EAF4;
  v165 = byte_281EAF4;
  v45(v16, v14, v5, 6);
  v46 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v162 = byte_281EAF3;
  v160 = byte_281EAF3;
  v163 = byte_281EAF4;
  v161 = byte_281EAF4;
  v46(v16, v14, v5, 9);
  v47 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v158 = byte_281EAF3;
  v156 = byte_281EAF3;
  v159 = byte_281EAF4;
  v157 = byte_281EAF4;
  v47(v16, v14, v5, 6);
  v48 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v154 = byte_281EAF3;
  v152 = byte_281EAF3;
  v155 = byte_281EAF4;
  v153 = byte_281EAF4;
  v48(v16, v14, v5, 9);
  v49 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v150 = byte_281EAF3;
  v148 = byte_281EAF3;
  v151 = byte_281EAF4;
  v149 = byte_281EAF4;
  v49(v16, v14, v5, 5);
  v50 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v146 = byte_281EAF3;
  v144 = byte_281EAF3;
  v147 = byte_281EAF4;
  v145 = byte_281EAF4;
  v50(v16, v14, v5, 5);
  v51 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v142 = byte_281EAF3;
  v140 = byte_281EAF3;
  v143 = byte_281EAF4;
  v141 = byte_281EAF4;
  v51(v16, v14, v5, 10);
  v52 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v138 = byte_281EAF3;
  v136 = byte_281EAF3;
  v139 = byte_281EAF4;
  v137 = byte_281EAF4;
  v52(v16, v14, v5, 10);
  v53 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v134 = byte_281EAF3;
  v132 = byte_281EAF3;
  v135 = byte_281EAF4;
  v133 = byte_281EAF4;
  v53(v16, v14, v5, 5);
  v54 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v130 = byte_281EAF3;
  v128 = byte_281EAF3;
  v131 = byte_281EAF4;
  v129 = byte_281EAF4;
  v54(v16, v14, v5, 10);
  v55 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v126 = byte_281EAF3;
  v124 = byte_281EAF3;
  v127 = byte_281EAF4;
  v125 = byte_281EAF4;
  v55(v16, v14, v5, 5);
  v56 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v122 = byte_281EAF3;
  v120 = byte_281EAF3;
  v123 = byte_281EAF4;
  v121 = byte_281EAF4;
  v56(v16, v14, v5, 10);
  v57 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v118 = byte_281EAF3;
  v116 = byte_281EAF3;
  v119 = byte_281EAF4;
  v117 = byte_281EAF4;
  v57(v16, v14, v5, 1);
  v58 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v114 = byte_281EAF3;
  v112 = byte_281EAF3;
  v115 = byte_281EAF4;
  v113 = byte_281EAF4;
  v58(v16, v14, v5, 1);
  v59 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v110 = byte_281EAF3;
  v108 = byte_281EAF3;
  v111 = byte_281EAF4;
  v109 = byte_281EAF4;
  v59(v16, v14, v5, 9);
  v60 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v106 = byte_281EAF3;
  v104 = byte_281EAF3;
  v107 = byte_281EAF4;
  v105 = byte_281EAF4;
  v60(v16, v14, v5, 9);
  v61 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v102 = byte_281EAF3;
  v100 = byte_281EAF3;
  v103 = byte_281EAF4;
  v101 = byte_281EAF4;
  v61(v16, v14, v5, 2);
  v62 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v98 = byte_281EAF3;
  v96 = byte_281EAF3;
  v99 = byte_281EAF4;
  v97 = byte_281EAF4;
  v62(v16, v14, v5, 3);
  v63 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v94 = byte_281EAF3;
  v92 = byte_281EAF3;
  v95 = byte_281EAF4;
  v93 = byte_281EAF4;
  v63(v16, v14, v5, 13);
  v64 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v90 = byte_281EAF3;
  v88 = byte_281EAF3;
  v91 = byte_281EAF4;
  v89 = byte_281EAF4;
  v64(v16, v14, v5, 12);
  v65 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v86 = byte_281EAF3;
  v84 = byte_281EAF3;
  v87 = byte_281EAF4;
  v85 = byte_281EAF4;
  v65(v16, v14, v5, 2);
  v66 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v82 = byte_281EAF3;
  v80 = byte_281EAF3;
  v83 = byte_281EAF4;
  v81 = byte_281EAF4;
  v66(v16, v14, v5, 3);
  v67 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v78 = byte_281EAF3;
  v76 = byte_281EAF3;
  v79 = byte_281EAF4;
  v77 = byte_281EAF4;
  v67(v16, v14, v5, 13);
  v68 = *(void (__fastcall **)(BlockSource *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v16 + 40);
  v74 = byte_281EAF3;
  v72 = byte_281EAF3;
  v75 = byte_281EAF4;
  v73 = byte_281EAF4;
  v68(v16, v14, v5, 12);
  return 1;
}


signed int __fastcall OceanMonumentCoreRoom::getType(OceanMonumentCoreRoom *this)
{
  return 1330463570;
}


int __fastcall OceanMonumentCoreRoom::OceanMonumentCoreRoom(int result)
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
  *(_DWORD *)result = &off_2719054;
  return result;
}
