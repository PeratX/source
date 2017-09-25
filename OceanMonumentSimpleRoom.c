

int __fastcall OceanMonumentSimpleRoom::OceanMonumentSimpleRoom(int result)
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
  *(_DWORD *)result = &off_2718E5C;
  return result;
}


void __fastcall OceanMonumentSimpleRoom::~OceanMonumentSimpleRoom(OceanMonumentSimpleRoom *this)
{
  OceanMonumentSimpleRoom::~OceanMonumentSimpleRoom(this);
}


signed int __fastcall OceanMonumentSimpleRoom::getType(OceanMonumentSimpleRoom *this)
{
  return 1330467666;
}


void __fastcall OceanMonumentSimpleRoom::~OceanMonumentSimpleRoom(OceanMonumentSimpleRoom *this)
{
  OceanMonumentSimpleRoom *v1; // r4@1
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


signed int __fastcall OceanMonumentSimpleRoom::postProcess(OceanMonumentSimpleRoom *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  OceanMonumentSimpleRoom *v4; // r9@1
  BlockSource *v5; // r11@1
  int v6; // r0@1
  const BoundingBox *v7; // r5@1
  Random *v8; // r4@1
  int v9; // r7@4
  const BoundingBox *v10; // r8@5
  void (__fastcall *v11)(OceanMonumentSimpleRoom *, BlockSource *, char *, int); // r6@7
  const BoundingBox *v12; // r10@10
  BlockSource *v13; // r8@10
  signed int v14; // r0@10
  signed int v15; // r3@12
  int v16; // r0@13
  int v17; // r0@16
  void (__fastcall *v18)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD); // r6@20
  void (__fastcall *v19)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD); // r6@20
  void (__fastcall *v20)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD); // r6@20
  void (__fastcall *v21)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r6@20
  void (__fastcall *v22)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int); // r6@20
  void (__fastcall *v23)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r6@20
  void (__fastcall *v24)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r6@20
  void (__fastcall *v25)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r6@20
  void (__fastcall *v26)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r6@20
  void (__fastcall *v27)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int); // r6@20
  void (__fastcall *v28)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD); // r6@20
  void (__fastcall *v29)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD); // r6@20
  void (__fastcall *v30)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD); // r6@20
  void (__fastcall *v31)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r6@20
  void (__fastcall *v32)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int); // r6@20
  void (__fastcall *v33)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r6@20
  void (__fastcall *v34)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r6@20
  void (__fastcall *v35)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r6@20
  void (__fastcall *v36)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r6@20
  void (__fastcall *v37)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int); // r6@20
  void (__fastcall *v38)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r6@20
  void (__fastcall *v39)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r6@21
  void (__fastcall *v40)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r7@21
  const BoundingBox *v41; // r4@21
  OceanMonumentSimpleRoom *v42; // r7@23
  void (__fastcall *v43)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r12@23
  void (__fastcall *v44)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r7@24
  void (__fastcall *v45)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r6@24
  void (__fastcall *v46)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD); // r5@26
  OceanMonumentSimpleRoom *v47; // r10@27
  void (__fastcall *v48)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD); // r7@27
  int v49; // r0@27
  const BoundingBox *v50; // r2@27
  BlockSource *v51; // r1@27
  OceanMonumentSimpleRoom *v52; // r0@27
  void (__fastcall *v53)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r12@29
  OceanMonumentSimpleRoom *v54; // r11@30
  void (__fastcall *v55)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r7@30
  void (__fastcall *v56)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r7@30
  void (__fastcall *v57)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r7@32
  void (__fastcall *v58)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r6@32
  void (__fastcall *v59)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r6@32
  void (__fastcall *v60)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r6@32
  void (__fastcall *v61)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int); // r6@32
  void (__fastcall *v62)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int); // r6@32
  void (__fastcall *v63)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int); // r6@32
  void (__fastcall *v64)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int); // r7@32
  void (__fastcall *v65)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD); // r7@32
  void (__fastcall *v66)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD); // r7@32
  void (__fastcall *v67)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD); // r7@32
  void (__fastcall *v68)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD); // r7@32
  void (__fastcall *v69)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r7@32
  void (__fastcall *v70)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r7@32
  void (__fastcall *v71)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r7@32
  void (__fastcall *v72)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r7@32
  void (__fastcall *v73)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int); // r7@32
  void (__fastcall *v74)(OceanMonumentSimpleRoom *, BlockSource *, char *, _DWORD); // r7@32
  void (__fastcall *v75)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int); // r7@32
  void (__fastcall *v76)(OceanMonumentSimpleRoom *, BlockSource *, char *, _DWORD); // r7@32
  void (__fastcall *v77)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int); // r7@32
  void (__fastcall *v78)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int); // r7@32
  void (__fastcall *v79)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int); // r7@32
  OceanMonumentSimpleRoom *v80; // r6@32
  void (__fastcall *v81)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int); // r7@32
  int v82; // r0@32
  void (__fastcall *v83)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r12@33
  void (__fastcall *v84)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r12@33
  void (__fastcall *v85)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r12@33
  void (__fastcall *v86)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r4@35
  void (__fastcall *v87)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r4@35
  void (__fastcall *v88)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r4@35
  void (__fastcall *v89)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD); // r12@37
  void (__fastcall *v90)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD); // r6@37
  void (__fastcall *v91)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD); // r5@37
  OceanMonumentSimpleRoom *v92; // r11@39
  void (__fastcall *v93)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r6@39
  void (__fastcall *v94)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r6@39
  void (__fastcall *v95)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r6@39
  void (__fastcall *v96)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD); // r7@42
  void (__fastcall *v97)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r7@42
  void (__fastcall *v98)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r7@42
  void (__fastcall *v99)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r7@42
  void (__fastcall *v100)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD); // r7@42
  void (__fastcall *v101)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r7@42
  void (__fastcall *v102)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r7@42
  void (__fastcall *v103)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r7@42
  void (__fastcall *v104)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD); // r7@42
  void (__fastcall *v105)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r7@42
  void (__fastcall *v106)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r7@42
  void (__fastcall *v107)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r7@42
  void (__fastcall *v108)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD); // r7@42
  void (__fastcall *v109)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r7@42
  void (__fastcall *v110)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r7@42
  void (__fastcall *v111)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r7@42
  int v112; // r0@42
  int v113; // r7@43
  int v114; // r4@44
  char v115; // r0@45
  void (__fastcall *v116)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int); // r4@47
  int v117; // r4@47
  char v118; // r0@48
  void (__fastcall *v119)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int); // r4@50
  int v120; // r7@53
  int v121; // r4@54
  char v122; // r0@55
  void (__fastcall *v123)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int); // r4@57
  int v124; // r4@57
  char v125; // r0@58
  void (__fastcall *v126)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int); // r4@60
  int v127; // r7@63
  int v128; // r4@64
  char v129; // r0@65
  void (__fastcall *v130)(OceanMonumentSimpleRoom *, BlockSource *, char *, _DWORD); // r4@67
  int v131; // r4@67
  char v132; // r0@68
  void (__fastcall *v133)(OceanMonumentSimpleRoom *, BlockSource *, char *, _DWORD); // r4@70
  int v134; // r7@73
  int v135; // r4@74
  char v136; // r0@75
  void (__fastcall *v137)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int); // r4@77
  int v138; // r4@77
  char v139; // r0@78
  void (__fastcall *v140)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int); // r4@80
  void (__fastcall *v141)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r4@82
  void (__fastcall *v142)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r4@82
  void (__fastcall *v143)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int); // r4@82
  char v145; // [sp+24h] [bp-2CCh]@4
  char v146; // [sp+28h] [bp-2C8h]@4
  signed int v147; // [sp+28h] [bp-2C8h]@18
  char v148; // [sp+2Ch] [bp-2C4h]@82
  char v149; // [sp+2Dh] [bp-2C3h]@82
  char v150; // [sp+30h] [bp-2C0h]@82
  char v151; // [sp+31h] [bp-2BFh]@82
  char v152; // [sp+34h] [bp-2BCh]@82
  char v153; // [sp+35h] [bp-2BBh]@82
  char v154; // [sp+38h] [bp-2B8h]@82
  char v155; // [sp+39h] [bp-2B7h]@82
  char v156; // [sp+3Ch] [bp-2B4h]@82
  char v157; // [sp+3Dh] [bp-2B3h]@82
  char v158; // [sp+40h] [bp-2B0h]@82
  char v159; // [sp+41h] [bp-2AFh]@82
  char v160; // [sp+44h] [bp-2ACh]@42
  char v161; // [sp+45h] [bp-2ABh]@42
  char v162; // [sp+48h] [bp-2A8h]@42
  char v163; // [sp+49h] [bp-2A7h]@42
  char v164; // [sp+4Ch] [bp-2A4h]@42
  char v165; // [sp+4Dh] [bp-2A3h]@42
  char v166; // [sp+50h] [bp-2A0h]@42
  char v167; // [sp+51h] [bp-29Fh]@42
  char v168; // [sp+54h] [bp-29Ch]@42
  char v169; // [sp+55h] [bp-29Bh]@42
  char v170; // [sp+58h] [bp-298h]@42
  char v171; // [sp+59h] [bp-297h]@42
  char v172; // [sp+5Ch] [bp-294h]@42
  char v173; // [sp+5Dh] [bp-293h]@42
  char v174; // [sp+60h] [bp-290h]@42
  char v175; // [sp+61h] [bp-28Fh]@42
  char v176; // [sp+64h] [bp-28Ch]@42
  char v177; // [sp+65h] [bp-28Bh]@42
  char v178; // [sp+68h] [bp-288h]@42
  char v179; // [sp+69h] [bp-287h]@42
  char v180; // [sp+6Ch] [bp-284h]@42
  char v181; // [sp+6Dh] [bp-283h]@42
  char v182; // [sp+70h] [bp-280h]@42
  char v183; // [sp+71h] [bp-27Fh]@42
  char v184; // [sp+74h] [bp-27Ch]@42
  char v185; // [sp+75h] [bp-27Bh]@42
  char v186; // [sp+78h] [bp-278h]@42
  char v187; // [sp+79h] [bp-277h]@42
  char v188; // [sp+7Ch] [bp-274h]@42
  char v189; // [sp+7Dh] [bp-273h]@42
  char v190; // [sp+80h] [bp-270h]@42
  char v191; // [sp+81h] [bp-26Fh]@42
  char v192; // [sp+84h] [bp-26Ch]@42
  char v193; // [sp+85h] [bp-26Bh]@42
  char v194; // [sp+88h] [bp-268h]@42
  char v195; // [sp+89h] [bp-267h]@42
  char v196; // [sp+8Ch] [bp-264h]@42
  char v197; // [sp+8Dh] [bp-263h]@42
  char v198; // [sp+90h] [bp-260h]@42
  char v199; // [sp+91h] [bp-25Fh]@42
  char v200; // [sp+94h] [bp-25Ch]@42
  char v201; // [sp+95h] [bp-25Bh]@42
  char v202; // [sp+98h] [bp-258h]@42
  char v203; // [sp+99h] [bp-257h]@42
  char v204; // [sp+9Ch] [bp-254h]@42
  char v205; // [sp+9Dh] [bp-253h]@42
  char v206; // [sp+A0h] [bp-250h]@42
  char v207; // [sp+A1h] [bp-24Fh]@42
  char v208; // [sp+A4h] [bp-24Ch]@42
  char v209; // [sp+A5h] [bp-24Bh]@42
  char v210; // [sp+A8h] [bp-248h]@42
  char v211; // [sp+A9h] [bp-247h]@42
  char v212; // [sp+ACh] [bp-244h]@42
  char v213; // [sp+ADh] [bp-243h]@42
  char v214; // [sp+B0h] [bp-240h]@42
  char v215; // [sp+B1h] [bp-23Fh]@42
  char v216; // [sp+B4h] [bp-23Ch]@42
  char v217; // [sp+B5h] [bp-23Bh]@42
  char v218; // [sp+B8h] [bp-238h]@42
  char v219; // [sp+B9h] [bp-237h]@42
  char v220; // [sp+BCh] [bp-234h]@42
  char v221; // [sp+BDh] [bp-233h]@42
  char v222; // [sp+C0h] [bp-230h]@42
  char v223; // [sp+C1h] [bp-22Fh]@42
  char v224; // [sp+C4h] [bp-22Ch]@39
  char v225; // [sp+C5h] [bp-22Bh]@39
  char v226; // [sp+C8h] [bp-228h]@39
  char v227; // [sp+C9h] [bp-227h]@39
  char v228; // [sp+CCh] [bp-224h]@39
  char v229; // [sp+CDh] [bp-223h]@39
  char v230; // [sp+D0h] [bp-220h]@39
  char v231; // [sp+D1h] [bp-21Fh]@39
  char v232; // [sp+D4h] [bp-21Ch]@39
  char v233; // [sp+D5h] [bp-21Bh]@39
  char v234; // [sp+D8h] [bp-218h]@39
  char v235; // [sp+D9h] [bp-217h]@39
  char v236; // [sp+DCh] [bp-214h]@37
  char v237; // [sp+DDh] [bp-213h]@37
  char v238; // [sp+E0h] [bp-210h]@37
  char v239; // [sp+E1h] [bp-20Fh]@37
  char v240; // [sp+E4h] [bp-20Ch]@37
  char v241; // [sp+E5h] [bp-20Bh]@37
  char v242; // [sp+E8h] [bp-208h]@37
  char v243; // [sp+E9h] [bp-207h]@37
  char v244; // [sp+ECh] [bp-204h]@37
  char v245; // [sp+EDh] [bp-203h]@37
  char v246; // [sp+F0h] [bp-200h]@37
  char v247; // [sp+F1h] [bp-1FFh]@37
  char v248; // [sp+F4h] [bp-1FCh]@35
  char v249; // [sp+F5h] [bp-1FBh]@35
  char v250; // [sp+F8h] [bp-1F8h]@35
  char v251; // [sp+F9h] [bp-1F7h]@35
  char v252; // [sp+FCh] [bp-1F4h]@35
  char v253; // [sp+FDh] [bp-1F3h]@35
  char v254; // [sp+100h] [bp-1F0h]@35
  char v255; // [sp+101h] [bp-1EFh]@35
  char v256; // [sp+104h] [bp-1ECh]@35
  char v257; // [sp+105h] [bp-1EBh]@35
  char v258; // [sp+108h] [bp-1E8h]@35
  char v259; // [sp+109h] [bp-1E7h]@35
  char v260; // [sp+10Ch] [bp-1E4h]@33
  char v261; // [sp+10Dh] [bp-1E3h]@33
  char v262; // [sp+110h] [bp-1E0h]@33
  char v263; // [sp+111h] [bp-1DFh]@33
  char v264; // [sp+114h] [bp-1DCh]@33
  char v265; // [sp+115h] [bp-1DBh]@33
  char v266; // [sp+118h] [bp-1D8h]@33
  char v267; // [sp+119h] [bp-1D7h]@33
  char v268; // [sp+11Ch] [bp-1D4h]@33
  char v269; // [sp+11Dh] [bp-1D3h]@33
  char v270; // [sp+120h] [bp-1D0h]@33
  char v271; // [sp+121h] [bp-1CFh]@33
  char v272; // [sp+124h] [bp-1CCh]@32
  char v273; // [sp+125h] [bp-1CBh]@32
  char v274; // [sp+128h] [bp-1C8h]@32
  char v275; // [sp+129h] [bp-1C7h]@32
  char v276; // [sp+12Ch] [bp-1C4h]@32
  char v277; // [sp+12Dh] [bp-1C3h]@32
  char v278; // [sp+130h] [bp-1C0h]@32
  char v279; // [sp+131h] [bp-1BFh]@32
  char v280; // [sp+134h] [bp-1BCh]@32
  char v281; // [sp+135h] [bp-1BBh]@32
  char v282; // [sp+138h] [bp-1B8h]@32
  char v283; // [sp+139h] [bp-1B7h]@32
  char v284; // [sp+13Ch] [bp-1B4h]@32
  char v285; // [sp+13Dh] [bp-1B3h]@32
  char v286; // [sp+140h] [bp-1B0h]@32
  char v287; // [sp+141h] [bp-1AFh]@32
  char v288; // [sp+144h] [bp-1ACh]@32
  char v289; // [sp+145h] [bp-1ABh]@32
  char v290; // [sp+148h] [bp-1A8h]@32
  char v291; // [sp+149h] [bp-1A7h]@32
  char v292; // [sp+14Ch] [bp-1A4h]@32
  char v293; // [sp+14Dh] [bp-1A3h]@32
  char v294; // [sp+150h] [bp-1A0h]@32
  char v295; // [sp+151h] [bp-19Fh]@32
  char v296; // [sp+154h] [bp-19Ch]@32
  char v297; // [sp+155h] [bp-19Bh]@32
  char v298; // [sp+158h] [bp-198h]@32
  char v299; // [sp+159h] [bp-197h]@32
  char v300; // [sp+15Ch] [bp-194h]@32
  char v301; // [sp+15Dh] [bp-193h]@32
  char v302; // [sp+160h] [bp-190h]@32
  char v303; // [sp+161h] [bp-18Fh]@32
  char v304; // [sp+164h] [bp-18Ch]@32
  char v305; // [sp+165h] [bp-18Bh]@32
  char v306; // [sp+168h] [bp-188h]@32
  char v307; // [sp+169h] [bp-187h]@32
  char v308; // [sp+16Ch] [bp-184h]@32
  char v309; // [sp+16Dh] [bp-183h]@32
  char v310; // [sp+170h] [bp-180h]@32
  char v311; // [sp+171h] [bp-17Fh]@32
  char v312; // [sp+174h] [bp-17Ch]@32
  char v313; // [sp+175h] [bp-17Bh]@32
  char v314; // [sp+178h] [bp-178h]@32
  char v315; // [sp+179h] [bp-177h]@32
  char v316; // [sp+17Ch] [bp-174h]@32
  char v317; // [sp+17Dh] [bp-173h]@32
  char v318; // [sp+180h] [bp-170h]@32
  char v319; // [sp+181h] [bp-16Fh]@32
  char v320; // [sp+184h] [bp-16Ch]@32
  char v321; // [sp+185h] [bp-16Bh]@32
  char v322; // [sp+188h] [bp-168h]@32
  char v323; // [sp+189h] [bp-167h]@32
  char v324; // [sp+18Ch] [bp-164h]@32
  char v325; // [sp+18Dh] [bp-163h]@32
  char v326; // [sp+190h] [bp-160h]@32
  char v327; // [sp+191h] [bp-15Fh]@32
  char v328; // [sp+194h] [bp-15Ch]@32
  char v329; // [sp+195h] [bp-15Bh]@32
  char v330; // [sp+198h] [bp-158h]@32
  char v331; // [sp+199h] [bp-157h]@32
  char v332; // [sp+19Ch] [bp-154h]@32
  char v333; // [sp+19Dh] [bp-153h]@32
  char v334; // [sp+1A0h] [bp-150h]@32
  char v335; // [sp+1A1h] [bp-14Fh]@32
  char v336; // [sp+1A4h] [bp-14Ch]@32
  char v337; // [sp+1A5h] [bp-14Bh]@32
  char v338; // [sp+1A8h] [bp-148h]@32
  char v339; // [sp+1A9h] [bp-147h]@32
  char v340; // [sp+1ACh] [bp-144h]@32
  char v341; // [sp+1ADh] [bp-143h]@32
  char v342; // [sp+1B0h] [bp-140h]@32
  char v343; // [sp+1B1h] [bp-13Fh]@32
  char v344; // [sp+1B4h] [bp-13Ch]@30
  char v345; // [sp+1B5h] [bp-13Bh]@30
  char v346; // [sp+1B8h] [bp-138h]@30
  char v347; // [sp+1B9h] [bp-137h]@30
  char v348; // [sp+1BCh] [bp-134h]@30
  char v349; // [sp+1BDh] [bp-133h]@30
  char v350; // [sp+1C0h] [bp-130h]@30
  char v351; // [sp+1C1h] [bp-12Fh]@30
  char v352; // [sp+1C4h] [bp-12Ch]@30
  char v353; // [sp+1C5h] [bp-12Bh]@30
  char v354; // [sp+1C8h] [bp-128h]@30
  char v355; // [sp+1C9h] [bp-127h]@30
  char v356; // [sp+1CCh] [bp-124h]@31
  char v357; // [sp+1CDh] [bp-123h]@31
  char v358; // [sp+1D0h] [bp-120h]@31
  char v359; // [sp+1D1h] [bp-11Fh]@31
  char v360; // [sp+1D4h] [bp-11Ch]@27
  char v361; // [sp+1D5h] [bp-11Bh]@27
  char v362; // [sp+1D8h] [bp-118h]@27
  char v363; // [sp+1D9h] [bp-117h]@27
  char v364; // [sp+1DCh] [bp-114h]@27
  char v365; // [sp+1DDh] [bp-113h]@27
  char v366; // [sp+1E0h] [bp-110h]@27
  char v367; // [sp+1E1h] [bp-10Fh]@27
  char v368; // [sp+1E4h] [bp-10Ch]@27
  char v369; // [sp+1E5h] [bp-10Bh]@27
  char v370; // [sp+1E8h] [bp-108h]@27
  char v371; // [sp+1E9h] [bp-107h]@27
  char v372; // [sp+1ECh] [bp-104h]@28
  char v373; // [sp+1EDh] [bp-103h]@28
  char v374; // [sp+1F0h] [bp-100h]@28
  char v375; // [sp+1F1h] [bp-FFh]@28
  char v376; // [sp+1F4h] [bp-FCh]@24
  char v377; // [sp+1F5h] [bp-FBh]@24
  char v378; // [sp+1F8h] [bp-F8h]@24
  char v379; // [sp+1F9h] [bp-F7h]@24
  char v380; // [sp+1FCh] [bp-F4h]@24
  char v381; // [sp+1FDh] [bp-F3h]@24
  char v382; // [sp+200h] [bp-F0h]@24
  char v383; // [sp+201h] [bp-EFh]@24
  char v384; // [sp+204h] [bp-ECh]@24
  char v385; // [sp+205h] [bp-EBh]@24
  char v386; // [sp+208h] [bp-E8h]@24
  char v387; // [sp+209h] [bp-E7h]@24
  char v388; // [sp+20Ch] [bp-E4h]@25
  char v389; // [sp+20Dh] [bp-E3h]@25
  char v390; // [sp+210h] [bp-E0h]@25
  char v391; // [sp+211h] [bp-DFh]@25
  char v392; // [sp+214h] [bp-DCh]@21
  char v393; // [sp+215h] [bp-DBh]@21
  char v394; // [sp+218h] [bp-D8h]@21
  char v395; // [sp+219h] [bp-D7h]@21
  char v396; // [sp+21Ch] [bp-D4h]@21
  char v397; // [sp+21Dh] [bp-D3h]@21
  char v398; // [sp+220h] [bp-D0h]@21
  char v399; // [sp+221h] [bp-CFh]@21
  char v400; // [sp+224h] [bp-CCh]@21
  char v401; // [sp+225h] [bp-CBh]@21
  char v402; // [sp+228h] [bp-C8h]@21
  char v403; // [sp+229h] [bp-C7h]@21
  char v404; // [sp+22Ch] [bp-C4h]@22
  char v405; // [sp+22Dh] [bp-C3h]@22
  char v406; // [sp+230h] [bp-C0h]@22
  char v407; // [sp+231h] [bp-BFh]@22
  char v408; // [sp+234h] [bp-BCh]@20
  char v409; // [sp+235h] [bp-BBh]@20
  char v410; // [sp+238h] [bp-B8h]@20
  char v411; // [sp+239h] [bp-B7h]@20
  char v412; // [sp+23Ch] [bp-B4h]@20
  char v413; // [sp+23Dh] [bp-B3h]@20
  char v414; // [sp+240h] [bp-B0h]@20
  char v415; // [sp+241h] [bp-AFh]@20
  char v416; // [sp+244h] [bp-ACh]@20
  char v417; // [sp+245h] [bp-ABh]@20
  char v418; // [sp+248h] [bp-A8h]@20
  char v419; // [sp+249h] [bp-A7h]@20
  char v420; // [sp+24Ch] [bp-A4h]@20
  char v421; // [sp+24Dh] [bp-A3h]@20
  char v422; // [sp+250h] [bp-A0h]@20
  char v423; // [sp+251h] [bp-9Fh]@20
  char v424; // [sp+254h] [bp-9Ch]@20
  char v425; // [sp+255h] [bp-9Bh]@20
  char v426; // [sp+258h] [bp-98h]@20
  char v427; // [sp+259h] [bp-97h]@20
  char v428; // [sp+25Ch] [bp-94h]@20
  char v429; // [sp+25Dh] [bp-93h]@20
  char v430; // [sp+260h] [bp-90h]@20
  char v431; // [sp+261h] [bp-8Fh]@20
  char v432; // [sp+264h] [bp-8Ch]@20
  char v433; // [sp+265h] [bp-8Bh]@20
  char v434; // [sp+268h] [bp-88h]@20
  char v435; // [sp+269h] [bp-87h]@20
  char v436; // [sp+26Ch] [bp-84h]@20
  char v437; // [sp+26Dh] [bp-83h]@20
  char v438; // [sp+270h] [bp-80h]@20
  char v439; // [sp+271h] [bp-7Fh]@20
  char v440; // [sp+274h] [bp-7Ch]@20
  char v441; // [sp+275h] [bp-7Bh]@20
  char v442; // [sp+278h] [bp-78h]@20
  char v443; // [sp+279h] [bp-77h]@20
  char v444; // [sp+27Ch] [bp-74h]@20
  char v445; // [sp+27Dh] [bp-73h]@20
  char v446; // [sp+280h] [bp-70h]@20
  char v447; // [sp+281h] [bp-6Fh]@20
  char v448; // [sp+284h] [bp-6Ch]@20
  char v449; // [sp+285h] [bp-6Bh]@20
  char v450; // [sp+288h] [bp-68h]@20
  char v451; // [sp+289h] [bp-67h]@20
  char v452; // [sp+28Ch] [bp-64h]@20
  char v453; // [sp+28Dh] [bp-63h]@20
  char v454; // [sp+290h] [bp-60h]@20
  char v455; // [sp+291h] [bp-5Fh]@20
  char v456; // [sp+294h] [bp-5Ch]@20
  char v457; // [sp+295h] [bp-5Bh]@20
  char v458; // [sp+298h] [bp-58h]@20
  char v459; // [sp+299h] [bp-57h]@20
  char v460; // [sp+29Ch] [bp-54h]@20
  char v461; // [sp+29Dh] [bp-53h]@20
  char v462; // [sp+2A0h] [bp-50h]@20
  char v463; // [sp+2A1h] [bp-4Fh]@20
  char v464; // [sp+2A4h] [bp-4Ch]@20
  char v465; // [sp+2A5h] [bp-4Bh]@20
  char v466; // [sp+2A8h] [bp-48h]@20
  char v467; // [sp+2A9h] [bp-47h]@20
  char v468; // [sp+2ACh] [bp-44h]@20
  char v469; // [sp+2ADh] [bp-43h]@20
  char v470; // [sp+2B0h] [bp-40h]@20
  char v471; // [sp+2B1h] [bp-3Fh]@20
  char v472; // [sp+2B4h] [bp-3Ch]@20
  char v473; // [sp+2B5h] [bp-3Bh]@20
  char v474; // [sp+2B8h] [bp-38h]@20
  char v475; // [sp+2B9h] [bp-37h]@20
  char v476; // [sp+2BCh] [bp-34h]@20
  char v477; // [sp+2BDh] [bp-33h]@20
  char v478; // [sp+2C0h] [bp-30h]@20
  char v479; // [sp+2C1h] [bp-2Fh]@20
  unsigned __int8 v480; // [sp+2C4h] [bp-2Ch]@6
  char v481; // [sp+2C8h] [bp-28h]@7
  char v482; // [sp+2C9h] [bp-27h]@7

  v4 = this;
  v5 = a2;
  v6 = *((_DWORD *)this + 10);
  v7 = a4;
  v8 = a3;
  if ( *(_DWORD *)(v6 + 8) >= 25 )
  {
    OceanMonumentPiece::generateDefaultFloor(v4, a2, a4, 0, 0, **(_DWORD **)(v6 + 24) & 1);
    v6 = *((_DWORD *)v4 + 10);
  }
  if ( !*(_DWORD *)(*(_DWORD *)(v6 + 12) + 8) )
    v9 = 1;
    v146 = byte_281EAF1;
    v145 = byte_281EAF2;
    do
    {
      v10 = (const BoundingBox *)1;
      do
      {
        StructurePiece::getBlock((StructurePiece *)&v480, v4, (int)v5, v9, 4, v10, (int)v7);
        if ( v480 == (unsigned __int8)word_281EAFB )
        {
          v11 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
          v481 = v146;
          v482 = v145;
          v11(v4, v5, &v481, v9);
        }
        v10 = (const BoundingBox *)((char *)v10 + 1);
      }
      while ( v10 != (const BoundingBox *)7 );
      ++v9;
    }
    while ( v9 != 7 );
  v12 = v7;
  v13 = v5;
  v14 = 0;
  if ( !*((_DWORD *)v4 + 12) )
    goto LABEL_20;
  if ( j_Random::_genRandInt32(v8) & 0x8000000 )
    v15 = 0;
    v16 = **(_DWORD **)(*((_DWORD *)v4 + 10) + 24);
    if ( !(v16 & 3)
      && ((**(_DWORD **)(*((_DWORD *)v4 + 10) + 24) >> 5) & 1)
       + (**(_DWORD **)(*((_DWORD *)v4 + 10) + 24) & 1)
       + ((**(_DWORD **)(*((_DWORD *)v4 + 10) + 24) >> 1) & 1)
       + ((**(_DWORD **)(*((_DWORD *)v4 + 10) + 24) >> 2) & 1)
       + ((**(_DWORD **)(*((_DWORD *)v4 + 10) + 24) >> 3) & 1)
       + ((**(_DWORD **)(*((_DWORD *)v4 + 10) + 24) >> 4) & 1u) > 1 )
      v15 = 1;
  else
  v17 = *((_DWORD *)v4 + 12);
  if ( v17 == 2 )
    v147 = v15;
    v96 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
    v222 = byte_281EAF3;
    v220 = byte_281EAF3;
    v223 = byte_281EAF4;
    v221 = byte_281EAF4;
    v96(v4, v5, v7, 0);
    v97 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v218 = byte_281EAF3;
    v216 = byte_281EAF3;
    v219 = byte_281EAF4;
    v217 = byte_281EAF4;
    v97(v4, v5, v7, 7);
    v98 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v214 = byte_281EAF3;
    v212 = byte_281EAF3;
    v215 = byte_281EAF4;
    v213 = byte_281EAF4;
    v98(v4, v5, v7, 1);
    v99 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v210 = byte_281EAF3;
    v208 = byte_281EAF3;
    v211 = byte_281EAF4;
    v209 = byte_281EAF4;
    v99(v4, v5, v7, 1);
    v100 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
    v206 = byte_281EAF5;
    v204 = byte_281EAF5;
    v207 = byte_281EAF6;
    v205 = byte_281EAF6;
    v100(v4, v5, v7, 0);
    v101 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v202 = byte_281EAF5;
    v200 = byte_281EAF5;
    v203 = byte_281EAF6;
    v201 = byte_281EAF6;
    v101(v4, v5, v7, 7);
    v102 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v198 = byte_281EAF5;
    v196 = byte_281EAF5;
    v199 = byte_281EAF6;
    v197 = byte_281EAF6;
    v102(v4, v5, v7, 1);
    v103 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v194 = byte_281EAF5;
    v192 = byte_281EAF5;
    v195 = byte_281EAF6;
    v193 = byte_281EAF6;
    v103(v4, v5, v7, 1);
    v104 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
    v190 = byte_281EAF3;
    v188 = byte_281EAF3;
    v191 = byte_281EAF4;
    v189 = byte_281EAF4;
    v104(v4, v5, v7, 0);
    v105 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v186 = byte_281EAF3;
    v184 = byte_281EAF3;
    v187 = byte_281EAF4;
    v185 = byte_281EAF4;
    v105(v4, v5, v7, 7);
    v106 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v182 = byte_281EAF3;
    v180 = byte_281EAF3;
    v183 = byte_281EAF4;
    v181 = byte_281EAF4;
    v106(v4, v5, v7, 1);
    v107 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v178 = byte_281EAF3;
    v176 = byte_281EAF3;
    v179 = byte_281EAF4;
    v177 = byte_281EAF4;
    v107(v4, v5, v7, 1);
    v108 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
    v174 = byte_281EAF5;
    v172 = byte_281EAF5;
    v175 = byte_281EAF6;
    v173 = byte_281EAF6;
    v108(v4, v5, v7, 0);
    v109 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v170 = byte_281EAF5;
    v168 = byte_281EAF5;
    v171 = byte_281EAF6;
    v169 = byte_281EAF6;
    v109(v4, v5, v7, 7);
    v110 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v166 = byte_281EAF5;
    v164 = byte_281EAF5;
    v167 = byte_281EAF6;
    v165 = byte_281EAF6;
    v110(v4, v5, v7, 3);
    v111 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v162 = byte_281EAF5;
    v160 = byte_281EAF5;
    v163 = byte_281EAF6;
    v161 = byte_281EAF6;
    v111(v4, v5, v7, 3);
    v112 = **(_DWORD **)(*((_DWORD *)v4 + 10) + 24);
    if ( v112 & 8 )
      v113 = 1;
        v114 = StructurePiece::getWorldY(v4, v113);
        if ( v114 >= *(_WORD *)(BlockSource::getDimension(v5) + 20) )
          v115 = *(_BYTE *)(Block::mAir + 4);
        else
          v115 = word_281EAFB;
        v116 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v481 = v115;
        v482 = 0;
        v116(v4, v5, &v481, 3);
        v117 = StructurePiece::getWorldY(v4, v113);
        if ( v117 >= *(_WORD *)(BlockSource::getDimension(v5) + 20) )
          v118 = *(_BYTE *)(Block::mAir + 4);
          v118 = word_281EAFB;
        v119 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v481 = v118;
        v119(v4, v5, &v481, 4);
        ++v113;
      while ( v113 != 3 );
      v112 = **(_DWORD **)(*((_DWORD *)v4 + 10) + 24);
    if ( v112 & 4 )
      v120 = 1;
        v121 = StructurePiece::getWorldY(v4, v120);
        if ( v121 >= *(_WORD *)(BlockSource::getDimension(v5) + 20) )
          v122 = *(_BYTE *)(Block::mAir + 4);
          v122 = word_281EAFB;
        v123 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v481 = v122;
        v123(v4, v5, &v481, 3);
        v124 = StructurePiece::getWorldY(v4, v120);
        if ( v124 >= *(_WORD *)(BlockSource::getDimension(v5) + 20) )
          v125 = *(_BYTE *)(Block::mAir + 4);
          v125 = word_281EAFB;
        v126 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v481 = v125;
        v126(v4, v5, &v481, 4);
        ++v120;
      while ( v120 != 3 );
    if ( v112 & 0x10 )
      v127 = 1;
        v128 = StructurePiece::getWorldY(v4, v127);
        if ( v128 >= *(_WORD *)(BlockSource::getDimension(v5) + 20) )
          v129 = *(_BYTE *)(Block::mAir + 4);
          v129 = word_281EAFB;
        v130 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
        v481 = v129;
        v130(v4, v5, &v481, 0);
        v131 = StructurePiece::getWorldY(v4, v127);
        if ( v131 >= *(_WORD *)(BlockSource::getDimension(v5) + 20) )
          v132 = *(_BYTE *)(Block::mAir + 4);
          v132 = word_281EAFB;
        v133 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
        v481 = v132;
        v133(v4, v5, &v481, 0);
        ++v127;
      while ( v127 != 3 );
    if ( v112 & 0x20 )
      v134 = 1;
        v135 = StructurePiece::getWorldY(v4, v134);
        if ( v135 >= *(_WORD *)(BlockSource::getDimension(v5) + 20) )
          v136 = *(_BYTE *)(Block::mAir + 4);
          v136 = word_281EAFB;
        v137 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v481 = v136;
        v137(v4, v5, &v481, 7);
        v138 = StructurePiece::getWorldY(v4, v134);
        if ( v138 >= *(_WORD *)(BlockSource::getDimension(v5) + 20) )
          v139 = *(_BYTE *)(Block::mAir + 4);
          v139 = word_281EAFB;
        v140 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v481 = v139;
        v140(v4, v5, &v481, 7);
        ++v134;
      while ( v134 != 3 );
  else if ( v17 == 1 )
    v57 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v342 = byte_281EAF3;
    v340 = byte_281EAF3;
    v343 = byte_281EAF4;
    v341 = byte_281EAF4;
    v57(v4, v5, v7, 2);
    v58 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v338 = byte_281EAF3;
    v336 = byte_281EAF3;
    v339 = byte_281EAF4;
    v337 = byte_281EAF4;
    v58(v4, v5, v7, 2);
    v59 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v334 = byte_281EAF3;
    v332 = byte_281EAF3;
    v335 = byte_281EAF4;
    v333 = byte_281EAF4;
    v59(v4, v5, v7, 5);
    v60 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v330 = byte_281EAF3;
    v328 = byte_281EAF3;
    v331 = byte_281EAF4;
    v329 = byte_281EAF4;
    v60(v4, v5, v7, 5);
    v61 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v326 = byte_281EAF9;
    v327 = byte_281EAFA;
    v61(v4, v5, &v326, 2);
    v62 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v324 = byte_281EAF9;
    v325 = byte_281EAFA;
    v62(v4, v5, &v324, 2);
    v63 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v322 = byte_281EAF9;
    v323 = byte_281EAFA;
    v63(v4, v5, &v322, 5);
    v64 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v320 = byte_281EAF9;
    v321 = byte_281EAFA;
    v64(v4, v5, &v320, 5);
    v65 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
    v318 = byte_281EAF3;
    v316 = byte_281EAF3;
    v319 = byte_281EAF4;
    v317 = byte_281EAF4;
    v65(v4, v5, v7, 0);
    v66 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
    v314 = byte_281EAF3;
    v312 = byte_281EAF3;
    v315 = byte_281EAF4;
    v313 = byte_281EAF4;
    v66(v4, v5, v7, 0);
    v67 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
    v310 = byte_281EAF3;
    v308 = byte_281EAF3;
    v311 = byte_281EAF4;
    v309 = byte_281EAF4;
    v67(v4, v5, v7, 0);
    v68 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
    v306 = byte_281EAF3;
    v304 = byte_281EAF3;
    v307 = byte_281EAF4;
    v305 = byte_281EAF4;
    v68(v4, v5, v7, 0);
    v69 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v302 = byte_281EAF3;
    v300 = byte_281EAF3;
    v303 = byte_281EAF4;
    v301 = byte_281EAF4;
    v69(v4, v5, v7, 6);
    v70 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v298 = byte_281EAF3;
    v296 = byte_281EAF3;
    v299 = byte_281EAF4;
    v297 = byte_281EAF4;
    v70(v4, v5, v7, 7);
    v71 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v294 = byte_281EAF3;
    v292 = byte_281EAF3;
    v295 = byte_281EAF4;
    v293 = byte_281EAF4;
    v71(v4, v5, v7, 6);
    v72 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v290 = byte_281EAF3;
    v288 = byte_281EAF3;
    v291 = byte_281EAF4;
    v289 = byte_281EAF4;
    v72(v4, v5, v7, 7);
    v73 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v286 = byte_281EAF1;
    v287 = byte_281EAF2;
    v73(v4, v5, &v286, 1);
    v74 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
    v284 = byte_281EAF1;
    v285 = byte_281EAF2;
    v74(v4, v5, &v284, 0);
    v75 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v282 = byte_281EAF1;
    v283 = byte_281EAF2;
    v75(v4, v5, &v282, 1);
    v76 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
    v280 = byte_281EAF1;
    v281 = byte_281EAF2;
    v76(v4, v5, &v280, 0);
    v77 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v278 = byte_281EAF1;
    v279 = byte_281EAF2;
    v77(v4, v5, &v278, 6);
    v78 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v276 = byte_281EAF1;
    v277 = byte_281EAF2;
    v78(v4, v5, &v276, 7);
    v79 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v274 = byte_281EAF1;
    v275 = byte_281EAF2;
    v79(v4, v5, &v274, 6);
    v80 = v4;
    v81 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
    v272 = byte_281EAF1;
    v273 = byte_281EAF2;
    v81(v4, v5, &v272, 7);
    v82 = **(_DWORD **)(*((_DWORD *)v4 + 10) + 24);
    if ( !(v82 & 8) )
      v83 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v270 = byte_281EAF3;
      v268 = byte_281EAF3;
      v271 = byte_281EAF4;
      v269 = byte_281EAF4;
      v83(v4, v5, v7, 1);
      v84 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v266 = byte_281EAF1;
      v264 = byte_281EAF1;
      v267 = byte_281EAF2;
      v265 = byte_281EAF2;
      v84(v4, v5, v7, 1);
      v85 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v262 = byte_281EAF3;
      v260 = byte_281EAF3;
      v263 = byte_281EAF4;
      v261 = byte_281EAF4;
      v85(v4, v5, v7, 1);
      v82 = **(_DWORD **)(*((_DWORD *)v4 + 10) + 24);
    if ( !(v82 & 4) )
      v86 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v258 = byte_281EAF3;
      v256 = byte_281EAF3;
      v259 = byte_281EAF4;
      v257 = byte_281EAF4;
      v86(v4, v5, v7, 1);
      v87 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v254 = byte_281EAF1;
      v252 = byte_281EAF1;
      v255 = byte_281EAF2;
      v253 = byte_281EAF2;
      v87(v4, v5, v7, 1);
      v88 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v250 = byte_281EAF3;
      v248 = byte_281EAF3;
      v251 = byte_281EAF4;
      v249 = byte_281EAF4;
      v13 = v5;
      v88(v4, v5, v7, 1);
    if ( !(v82 & 0x10) )
      v89 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
      v246 = byte_281EAF3;
      v244 = byte_281EAF3;
      v247 = byte_281EAF4;
      v245 = byte_281EAF4;
      v89(v4, v13, v7, 0);
      v90 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
      v242 = byte_281EAF1;
      v240 = byte_281EAF1;
      v243 = byte_281EAF2;
      v241 = byte_281EAF2;
      v90(v4, v13, v7, 0);
      v80 = v4;
      v91 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
      v238 = byte_281EAF3;
      v236 = byte_281EAF3;
      v239 = byte_281EAF4;
      v237 = byte_281EAF4;
      v91(v4, v13, v12, 0);
    v4 = v80;
    if ( !(v82 & 0x20) )
      v92 = v80;
      v93 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v80 + 40);
      v234 = byte_281EAF3;
      v232 = byte_281EAF3;
      v235 = byte_281EAF4;
      v233 = byte_281EAF4;
      v93(v92, v13, v12, 7);
      v94 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v92 + 40);
      v230 = byte_281EAF1;
      v228 = byte_281EAF1;
      v231 = byte_281EAF2;
      v229 = byte_281EAF2;
      v94(v92, v13, v12, 7);
      v95 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v92 + 40);
      v226 = byte_281EAF3;
      v224 = byte_281EAF3;
      v227 = byte_281EAF4;
      v225 = byte_281EAF4;
      v4 = v92;
      v95(v92, v13, v12, 7);
      goto LABEL_40;
    if ( !v17 )
      v14 = v15;
LABEL_20:
      v147 = v14;
      v18 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
      v478 = byte_281EAF3;
      v476 = byte_281EAF3;
      v479 = byte_281EAF4;
      v477 = byte_281EAF4;
      v18(v4, v5, v7, 0);
      v19 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
      v474 = byte_281EAF3;
      v472 = byte_281EAF3;
      v475 = byte_281EAF4;
      v473 = byte_281EAF4;
      v19(v4, v5, v7, 0);
      v20 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
      v470 = byte_281EAF1;
      v468 = byte_281EAF1;
      v471 = byte_281EAF2;
      v469 = byte_281EAF2;
      v20(v4, v5, v7, 0);
      v21 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v466 = byte_281EAF1;
      v464 = byte_281EAF1;
      v467 = byte_281EAF2;
      v465 = byte_281EAF2;
      v21(v4, v5, v7, 1);
      v22 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v462 = byte_281EAF9;
      v463 = byte_281EAFA;
      v22(v4, v5, &v462, 1);
      v23 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v460 = byte_281EAF3;
      v458 = byte_281EAF3;
      v461 = byte_281EAF4;
      v459 = byte_281EAF4;
      v23(v4, v5, v7, 5);
      v24 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v456 = byte_281EAF3;
      v454 = byte_281EAF3;
      v457 = byte_281EAF4;
      v455 = byte_281EAF4;
      v24(v4, v5, v7, 5);
      v25 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v452 = byte_281EAF1;
      v450 = byte_281EAF1;
      v453 = byte_281EAF2;
      v451 = byte_281EAF2;
      v25(v4, v5, v7, 7);
      v26 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v448 = byte_281EAF1;
      v446 = byte_281EAF1;
      v449 = byte_281EAF2;
      v447 = byte_281EAF2;
      v26(v4, v5, v7, 5);
      v27 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v444 = byte_281EAF9;
      v445 = byte_281EAFA;
      v27(v4, v5, &v444, 6);
      v28 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
      v442 = byte_281EAF3;
      v440 = byte_281EAF3;
      v443 = byte_281EAF4;
      v441 = byte_281EAF4;
      v28(v4, v5, v7, 0);
      v29 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
      v438 = byte_281EAF3;
      v436 = byte_281EAF3;
      v439 = byte_281EAF4;
      v437 = byte_281EAF4;
      v29(v4, v5, v7, 0);
      v30 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
      v434 = byte_281EAF1;
      v432 = byte_281EAF1;
      v435 = byte_281EAF2;
      v433 = byte_281EAF2;
      v30(v4, v5, v7, 0);
      v31 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v430 = byte_281EAF1;
      v428 = byte_281EAF1;
      v431 = byte_281EAF2;
      v429 = byte_281EAF2;
      v31(v4, v5, v7, 1);
      v32 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v426 = byte_281EAF9;
      v427 = byte_281EAFA;
      v32(v4, v5, &v426, 1);
      v33 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v424 = byte_281EAF3;
      v422 = byte_281EAF3;
      v425 = byte_281EAF4;
      v423 = byte_281EAF4;
      v33(v4, v5, v7, 5);
      v34 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v420 = byte_281EAF3;
      v418 = byte_281EAF3;
      v421 = byte_281EAF4;
      v419 = byte_281EAF4;
      v34(v4, v5, v7, 5);
      v35 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v416 = byte_281EAF1;
      v414 = byte_281EAF1;
      v417 = byte_281EAF2;
      v415 = byte_281EAF2;
      v35(v4, v5, v7, 7);
      v36 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v412 = byte_281EAF1;
      v410 = byte_281EAF1;
      v413 = byte_281EAF2;
      v411 = byte_281EAF2;
      v36(v4, v5, v7, 5);
      v37 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
      v408 = byte_281EAF9;
      v409 = byte_281EAFA;
      v37(v4, v5, &v408, 6);
      v38 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      if ( **(_BYTE **)(*((_DWORD *)v4 + 10) + 24) & 8 )
        v13 = v5;
        v41 = v7;
        v406 = byte_281EAF3;
        v404 = byte_281EAF3;
        v407 = byte_281EAF4;
        v405 = byte_281EAF4;
        v38(v4, v5, v7, 3);
      else
        v402 = byte_281EAF3;
        v400 = byte_281EAF3;
        v403 = byte_281EAF4;
        v401 = byte_281EAF4;
        v39 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v398 = byte_281EAF1;
        v396 = byte_281EAF1;
        v399 = byte_281EAF2;
        v397 = byte_281EAF2;
        v39(v4, v5, v7, 3);
        v40 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v394 = byte_281EAF3;
        v392 = byte_281EAF3;
        v395 = byte_281EAF4;
        v393 = byte_281EAF4;
        v40(v4, v5, v7, 3);
      v42 = v4;
      v43 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      if ( **(_BYTE **)(*((_DWORD *)v4 + 10) + 24) & 4 )
        v390 = byte_281EAF3;
        v388 = byte_281EAF3;
        v391 = byte_281EAF4;
        v389 = byte_281EAF4;
        v43(v4, v13, v41, 3);
        v386 = byte_281EAF3;
        v384 = byte_281EAF3;
        v387 = byte_281EAF4;
        v385 = byte_281EAF4;
        v44 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v382 = byte_281EAF1;
        v380 = byte_281EAF1;
        v383 = byte_281EAF2;
        v381 = byte_281EAF2;
        v44(v4, v13, v41, 3);
        v42 = v4;
        v45 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v378 = byte_281EAF3;
        v376 = byte_281EAF3;
        v379 = byte_281EAF4;
        v377 = byte_281EAF4;
        v45(v4, v13, v41, 3);
      v46 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v42 + 40);
      if ( **(_BYTE **)(*((_DWORD *)v42 + 10) + 24) & 0x10 )
        v12 = v41;
        v374 = byte_281EAF3;
        v372 = byte_281EAF3;
        v375 = byte_281EAF4;
        v373 = byte_281EAF4;
        v50 = v41;
        v52 = v42;
        v51 = v13;
        v47 = v42;
        v370 = byte_281EAF3;
        v368 = byte_281EAF3;
        v371 = byte_281EAF4;
        v369 = byte_281EAF4;
        v46(v42, v13, v41, 0);
        v48 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v42 + 40);
        v366 = byte_281EAF1;
        v364 = byte_281EAF1;
        v367 = byte_281EAF2;
        v365 = byte_281EAF2;
        v48(v47, v13, v41, 0);
        v49 = *(_DWORD *)v47;
        v42 = v47;
        v46 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, _DWORD))(v49 + 40);
        v362 = byte_281EAF3;
        v360 = byte_281EAF3;
        v363 = byte_281EAF4;
        v361 = byte_281EAF4;
      v46(v52, v51, v50, 0);
      v53 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v42 + 40);
      if ( **(_BYTE **)(*((_DWORD *)v42 + 10) + 24) & 0x20 )
        v4 = v42;
        v358 = byte_281EAF3;
        v356 = byte_281EAF3;
        v359 = byte_281EAF4;
        v357 = byte_281EAF4;
        v53(v42, v13, v12, 7);
        v54 = v42;
        v354 = byte_281EAF3;
        v352 = byte_281EAF3;
        v355 = byte_281EAF4;
        v353 = byte_281EAF4;
        v53(v42, v13, v12, 6);
        v55 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v42 + 40);
        v350 = byte_281EAF1;
        v348 = byte_281EAF1;
        v351 = byte_281EAF2;
        v349 = byte_281EAF2;
        v55(v54, v13, v12, 7);
        v56 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v54 + 40);
        v346 = byte_281EAF3;
        v344 = byte_281EAF3;
        v347 = byte_281EAF4;
        v345 = byte_281EAF4;
        v4 = v54;
        v56(v54, v13, v12, 6);
LABEL_40:
      if ( !v147 )
        return 1;
      goto LABEL_82;
  if ( v147 == 1 )
LABEL_82:
    v141 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v158 = byte_281EAF3;
    v156 = byte_281EAF3;
    v159 = byte_281EAF4;
    v157 = byte_281EAF4;
    v141(v4, v13, v12, 3);
    v142 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v154 = byte_281EAF1;
    v152 = byte_281EAF1;
    v155 = byte_281EAF2;
    v153 = byte_281EAF2;
    v142(v4, v13, v12, 3);
    v143 = *(void (__fastcall **)(OceanMonumentSimpleRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v150 = byte_281EAF3;
    v148 = byte_281EAF3;
    v151 = byte_281EAF4;
    v149 = byte_281EAF4;
    v143(v4, v13, v12, 3);
  return 1;
}


int __fastcall OceanMonumentSimpleRoom::OceanMonumentSimpleRoom(int a1, int *a2, int a3, Random *a4)
{
  int v4; // r5@1
  Random *v5; // r4@1

  v4 = a1;
  v5 = a4;
  OceanMonumentPiece::OceanMonumentPiece(a1, 1, a2, a3, 1, 1, 1);
  *(_DWORD *)v4 = &off_2718E5C;
  *(_DWORD *)(v4 + 48) = j_Random::_genRandInt32(v5) % 3;
  return v4;
}
