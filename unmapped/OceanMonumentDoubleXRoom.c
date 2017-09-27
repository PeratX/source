

signed int __fastcall OceanMonumentDoubleXRoom::postProcess(OceanMonumentDoubleXRoom *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  OceanMonumentDoubleXRoom *v4; // r11@1
  BlockSource *v5; // r9@1
  const BoundingBox *v6; // r5@1
  const BoundingBox *v7; // r2@3
  _BYTE *v8; // r6@4
  int v9; // r7@4
  const BoundingBox *v10; // r8@5
  _BYTE *v11; // r4@7
  void (__fastcall *v12)(OceanMonumentDoubleXRoom *, BlockSource *, char *, int); // r6@7
  bool v13; // nf@8
  unsigned __int8 v14; // vf@8
  BlockSource *v15; // r10@12
  int v16; // r11@12
  _BYTE *v17; // r5@12
  int v18; // r9@12
  int v19; // r7@12
  const BoundingBox *v20; // r8@13
  _BYTE *v21; // r4@15
  void (__fastcall *v22)(BlockSource *, int, char *, int); // r5@15
  void (__fastcall *v23)(OceanMonumentDoubleXRoom *, BlockSource *); // r7@19
  const BoundingBox *v24; // r10@19
  void (__fastcall *v25)(OceanMonumentDoubleXRoom *, BlockSource *, const BoundingBox *, signed int); // r5@19
  void (__fastcall *v26)(OceanMonumentDoubleXRoom *, BlockSource *, const BoundingBox *, signed int); // r5@19
  void (__fastcall *v27)(OceanMonumentDoubleXRoom *, BlockSource *, const BoundingBox *, signed int); // r7@19
  void (__fastcall *v28)(OceanMonumentDoubleXRoom *, BlockSource *, const BoundingBox *, _DWORD); // r7@19
  void (__fastcall *v29)(OceanMonumentDoubleXRoom *, BlockSource *, const BoundingBox *, signed int); // r7@19
  void (__fastcall *v30)(OceanMonumentDoubleXRoom *, BlockSource *, const BoundingBox *, signed int); // r7@19
  void (__fastcall *v31)(OceanMonumentDoubleXRoom *, BlockSource *, const BoundingBox *, signed int); // r7@19
  void (__fastcall *v32)(OceanMonumentDoubleXRoom *, BlockSource *, const BoundingBox *, _DWORD); // r7@19
  void (__fastcall *v33)(OceanMonumentDoubleXRoom *, BlockSource *, const BoundingBox *, signed int); // r7@19
  void (__fastcall *v34)(OceanMonumentDoubleXRoom *, BlockSource *, const BoundingBox *, signed int); // r7@19
  void (__fastcall *v35)(OceanMonumentDoubleXRoom *, BlockSource *, const BoundingBox *, signed int); // r7@19
  void (__fastcall *v36)(OceanMonumentDoubleXRoom *, BlockSource *, const BoundingBox *, signed int); // r7@19
  void (__fastcall *v37)(OceanMonumentDoubleXRoom *, BlockSource *, const BoundingBox *, signed int); // r7@19
  void (__fastcall *v38)(OceanMonumentDoubleXRoom *, BlockSource *, const BoundingBox *, signed int); // r7@19
  void (__fastcall *v39)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int); // r7@19
  void (__fastcall *v40)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int); // r7@19
  int v41; // r0@19
  int v42; // r7@20
  int v43; // r4@21
  void (__fastcall *v44)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int); // r4@22
  void (__fastcall *v45)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int); // r4@23
  int v46; // r4@24
  void (__fastcall *v47)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int); // r4@25
  void (__fastcall *v48)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int); // r4@26
  int v49; // r7@30
  int v50; // r4@31
  void (__fastcall *v51)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int); // r4@32
  void (__fastcall *v52)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int); // r4@33
  int v53; // r4@34
  void (__fastcall *v54)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int); // r4@35
  void (__fastcall *v55)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int); // r4@36
  int v56; // r7@40
  int v57; // r4@41
  void (__fastcall *v58)(OceanMonumentDoubleXRoom *, BlockSource *, char *, _DWORD); // r4@42
  void (__fastcall *v59)(OceanMonumentDoubleXRoom *, BlockSource *, char *, _DWORD); // r4@43
  int v60; // r4@44
  void (__fastcall *v61)(OceanMonumentDoubleXRoom *, BlockSource *, char *, _DWORD); // r4@45
  void (__fastcall *v62)(OceanMonumentDoubleXRoom *, BlockSource *, char *, _DWORD); // r4@46
  int v63; // r0@48
  int v64; // r7@49
  int v65; // r4@50
  void (__fastcall *v66)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int); // r4@51
  void (__fastcall *v67)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int); // r4@52
  int v68; // r4@53
  void (__fastcall *v69)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int); // r4@54
  void (__fastcall *v70)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int); // r4@55
  int v71; // r7@59
  int v72; // r4@60
  void (__fastcall *v73)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int); // r4@61
  void (__fastcall *v74)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int); // r4@62
  int v75; // r4@63
  void (__fastcall *v76)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int); // r4@64
  void (__fastcall *v77)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int); // r4@65
  int v78; // r7@69
  int v79; // r4@70
  void (__fastcall *v80)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int); // r4@71
  void (__fastcall *v81)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int); // r4@72
  int v82; // r4@73
  void (__fastcall *v83)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int); // r4@74
  void (__fastcall *v84)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int); // r4@75
  int v85; // r4@79
  int v86; // r6@79
  int v87; // r7@80
  unsigned int *v88; // r1@81
  unsigned int v89; // r0@83
  unsigned int *v90; // r5@87
  unsigned int v91; // r0@89
  int v92; // r0@98
  unsigned int *v93; // r2@99
  unsigned int v94; // r1@101
  int v95; // r3@101
  int v96; // r4@108
  int v97; // r6@108
  int v98; // r7@109
  unsigned int *v99; // r1@110
  unsigned int v100; // r0@112
  unsigned int *v101; // r5@116
  unsigned int v102; // r0@118
  int v103; // r0@127
  unsigned int *v104; // r2@128
  unsigned int v105; // r1@130
  int v106; // r3@130
  signed int v108; // [sp+0h] [bp-178h]@19
  signed int v109; // [sp+4h] [bp-174h]@19
  const BoundingBox *v110; // [sp+8h] [bp-170h]@19
  signed int v111; // [sp+Ch] [bp-16Ch]@19
  char v112; // [sp+24h] [bp-154h]@4
  char v113; // [sp+24h] [bp-154h]@12
  char v114; // [sp+28h] [bp-150h]@4
  char v115; // [sp+28h] [bp-150h]@12
  char v116; // [sp+2Ch] [bp-14Ch]@19
  char v117; // [sp+2Dh] [bp-14Bh]@19
  char v118; // [sp+30h] [bp-148h]@19
  char v119; // [sp+31h] [bp-147h]@19
  char v120; // [sp+34h] [bp-144h]@19
  char v121; // [sp+35h] [bp-143h]@19
  char v122; // [sp+38h] [bp-140h]@19
  char v123; // [sp+39h] [bp-13Fh]@19
  char v124; // [sp+3Ch] [bp-13Ch]@19
  char v125; // [sp+3Dh] [bp-13Bh]@19
  char v126; // [sp+40h] [bp-138h]@19
  char v127; // [sp+41h] [bp-137h]@19
  char v128; // [sp+44h] [bp-134h]@19
  char v129; // [sp+45h] [bp-133h]@19
  char v130; // [sp+48h] [bp-130h]@19
  char v131; // [sp+49h] [bp-12Fh]@19
  char v132; // [sp+4Ch] [bp-12Ch]@19
  char v133; // [sp+4Dh] [bp-12Bh]@19
  char v134; // [sp+50h] [bp-128h]@19
  char v135; // [sp+51h] [bp-127h]@19
  char v136; // [sp+54h] [bp-124h]@19
  char v137; // [sp+55h] [bp-123h]@19
  char v138; // [sp+58h] [bp-120h]@19
  char v139; // [sp+59h] [bp-11Fh]@19
  char v140; // [sp+5Ch] [bp-11Ch]@19
  char v141; // [sp+5Dh] [bp-11Bh]@19
  char v142; // [sp+60h] [bp-118h]@19
  char v143; // [sp+61h] [bp-117h]@19
  char v144; // [sp+64h] [bp-114h]@19
  char v145; // [sp+65h] [bp-113h]@19
  char v146; // [sp+68h] [bp-110h]@19
  char v147; // [sp+69h] [bp-10Fh]@19
  char v148; // [sp+6Ch] [bp-10Ch]@19
  char v149; // [sp+6Dh] [bp-10Bh]@19
  char v150; // [sp+70h] [bp-108h]@19
  char v151; // [sp+71h] [bp-107h]@19
  char v152; // [sp+74h] [bp-104h]@19
  char v153; // [sp+75h] [bp-103h]@19
  char v154; // [sp+78h] [bp-100h]@19
  char v155; // [sp+79h] [bp-FFh]@19
  char v156; // [sp+7Ch] [bp-FCh]@19
  char v157; // [sp+7Dh] [bp-FBh]@19
  char v158; // [sp+80h] [bp-F8h]@19
  char v159; // [sp+81h] [bp-F7h]@19
  char v160; // [sp+84h] [bp-F4h]@19
  char v161; // [sp+85h] [bp-F3h]@19
  char v162; // [sp+88h] [bp-F0h]@19
  char v163; // [sp+89h] [bp-EFh]@19
  char v164; // [sp+8Ch] [bp-ECh]@19
  char v165; // [sp+8Dh] [bp-EBh]@19
  char v166; // [sp+90h] [bp-E8h]@19
  char v167; // [sp+91h] [bp-E7h]@19
  char v168; // [sp+94h] [bp-E4h]@19
  char v169; // [sp+95h] [bp-E3h]@19
  char v170; // [sp+98h] [bp-E0h]@19
  char v171; // [sp+99h] [bp-DFh]@19
  char v172; // [sp+9Ch] [bp-DCh]@19
  char v173; // [sp+9Dh] [bp-DBh]@19
  char v174; // [sp+A0h] [bp-D8h]@19
  char v175; // [sp+A1h] [bp-D7h]@19
  char v176; // [sp+A4h] [bp-D4h]@19
  char v177; // [sp+A5h] [bp-D3h]@19
  char v178; // [sp+A8h] [bp-D0h]@19
  char v179; // [sp+A9h] [bp-CFh]@19
  char v180; // [sp+ACh] [bp-CCh]@1
  int v181; // [sp+B0h] [bp-C8h]@98
  int v182; // [sp+B8h] [bp-C0h]@3
  int v183; // [sp+BCh] [bp-BCh]@79
  void *ptr; // [sp+C4h] [bp-B4h]@2
  char v185; // [sp+E0h] [bp-98h]@1
  int v186; // [sp+E4h] [bp-94h]@127
  int v187; // [sp+ECh] [bp-8Ch]@11
  int v188; // [sp+F0h] [bp-88h]@108
  void *v189; // [sp+F8h] [bp-80h]@2
  char v190; // [sp+114h] [bp-64h]@7
  char v191; // [sp+115h] [bp-63h]@7
  unsigned __int8 v192; // [sp+118h] [bp-60h]@6
  char v193; // [sp+11Ch] [bp-5Ch]@15
  char v194; // [sp+11Dh] [bp-5Bh]@15
  unsigned __int8 v195; // [sp+120h] [bp-58h]@14
  char v196; // [sp+124h] [bp-54h]@71
  char v197; // [sp+125h] [bp-53h]@71
  char v198; // [sp+128h] [bp-50h]@72
  char v199; // [sp+129h] [bp-4Fh]@72
  char v200; // [sp+12Ch] [bp-4Ch]@61
  char v201; // [sp+12Dh] [bp-4Bh]@61
  char v202; // [sp+130h] [bp-48h]@62
  char v203; // [sp+131h] [bp-47h]@62
  char v204; // [sp+134h] [bp-44h]@51
  char v205; // [sp+135h] [bp-43h]@51
  char v206; // [sp+138h] [bp-40h]@52
  char v207; // [sp+139h] [bp-3Fh]@52
  char v208; // [sp+13Ch] [bp-3Ch]@42
  char v209; // [sp+13Dh] [bp-3Bh]@42
  char v210; // [sp+140h] [bp-38h]@43
  char v211; // [sp+141h] [bp-37h]@43
  char v212; // [sp+144h] [bp-34h]@32
  char v213; // [sp+145h] [bp-33h]@32
  char v214; // [sp+148h] [bp-30h]@33
  char v215; // [sp+149h] [bp-2Fh]@33
  char v216; // [sp+14Ch] [bp-2Ch]@22
  char v217; // [sp+14Dh] [bp-2Bh]@22
  char v218; // [sp+150h] [bp-28h]@23
  char v219; // [sp+151h] [bp-27h]@23

  v4 = this;
  v5 = a2;
  v6 = a4;
  RoomDefinition::RoomDefinition((int)&v185, *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 10) + 12) + 40));
  RoomDefinition::RoomDefinition((int)&v180, *((_DWORD *)v4 + 10));
  if ( *(_DWORD *)(*((_DWORD *)v4 + 10) + 8) >= 25 )
  {
    OceanMonumentPiece::generateDefaultFloor(v4, v5, v6, 8, 0, *(_DWORD *)v189 & 1);
    OceanMonumentPiece::generateDefaultFloor(v4, v5, v6, 0, 0, *(_DWORD *)ptr & 1);
  }
  v7 = v6;
  if ( !*(_DWORD *)(v182 + 8) )
    v8 = &unk_281EAF0;
    v9 = 1;
    v114 = byte_281EAF1;
    v112 = byte_281EAF2;
    do
    {
      v10 = (const BoundingBox *)1;
      do
      {
        StructurePiece::getBlock((StructurePiece *)&v192, v4, (int)v5, v9, 4, v10, (int)v6);
        if ( v192 == v8[11] )
        {
          v11 = v8;
          v12 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, char *, int))(*(_DWORD *)v4 + 36);
          v190 = v114;
          v191 = v112;
          v12(v4, v5, &v190, v9);
          v8 = v11;
        }
        v14 = __OFSUB__(v10, 6);
        v13 = (signed int)v10 - 6 < 0;
        v10 = (const BoundingBox *)((char *)v10 + 1);
      }
      while ( v13 ^ v14 );
      v14 = __OFSUB__(v9, 7);
      v13 = v9++ - 7 < 0;
    }
    while ( v13 ^ v14 );
    v7 = v6;
  if ( !*(_DWORD *)(v187 + 8) )
    v15 = v4;
    v16 = (int)v5;
    v17 = &unk_281EAF0;
    v18 = (int)v7;
    v19 = 8;
    v115 = byte_281EAF1;
    v113 = byte_281EAF2;
      v20 = (const BoundingBox *)1;
        StructurePiece::getBlock((StructurePiece *)&v195, v15, v16, v19, 4, v20, v18);
        if ( v195 == v17[11] )
          v21 = v17;
          v22 = *(void (__fastcall **)(BlockSource *, int, char *, int))(*(_DWORD *)v15 + 36);
          v193 = v115;
          v194 = v113;
          v22(v15, v16, &v193, v19);
          v17 = v21;
        v14 = __OFSUB__(v20, 6);
        v13 = (signed int)v20 - 6 < 0;
        v20 = (const BoundingBox *)((char *)v20 + 1);
      v14 = __OFSUB__(v19, 14);
      v13 = v19++ - 14 < 0;
    v7 = (const BoundingBox *)v18;
    v5 = (BlockSource *)v16;
    v4 = v15;
  v23 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *))(*(_DWORD *)v4 + 40);
  v178 = byte_281EAF3;
  v176 = byte_281EAF3;
  v179 = byte_281EAF4;
  v177 = byte_281EAF4;
  v24 = v7;
  v23(v4, v5);
  v25 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v174 = byte_281EAF3;
  v172 = byte_281EAF3;
  v175 = byte_281EAF4;
  v173 = byte_281EAF4;
  v25(v4, v5, v24, 15);
  v26 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v170 = byte_281EAF3;
  v168 = byte_281EAF3;
  v171 = byte_281EAF4;
  v169 = byte_281EAF4;
  v26(v4, v5, v24, 1);
  v27 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v166 = byte_281EAF3;
  v164 = byte_281EAF3;
  v167 = byte_281EAF4;
  v165 = byte_281EAF4;
  v27(v4, v5, v24, 1);
  v28 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v162 = byte_281EAF1;
  v160 = byte_281EAF1;
  v163 = byte_281EAF2;
  v161 = byte_281EAF2;
  v28(v4, v5, v24, 0);
  v29 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v158 = byte_281EAF1;
  v156 = byte_281EAF1;
  v159 = byte_281EAF2;
  v157 = byte_281EAF2;
  v29(v4, v5, v24, 15);
  v30 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v154 = byte_281EAF1;
  v152 = byte_281EAF1;
  v155 = byte_281EAF2;
  v153 = byte_281EAF2;
  v30(v4, v5, v24, 1);
  v31 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v150 = byte_281EAF1;
  v148 = byte_281EAF1;
  v151 = byte_281EAF2;
  v149 = byte_281EAF2;
  v31(v4, v5, v24, 1);
  v32 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v146 = byte_281EAF3;
  v144 = byte_281EAF3;
  v147 = byte_281EAF4;
  v145 = byte_281EAF4;
  v32(v4, v5, v24, 0);
  v33 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v142 = byte_281EAF3;
  v140 = byte_281EAF3;
  v143 = byte_281EAF4;
  v141 = byte_281EAF4;
  v33(v4, v5, v24, 15);
  v34 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v138 = byte_281EAF3;
  v136 = byte_281EAF3;
  v139 = byte_281EAF4;
  v137 = byte_281EAF4;
  v34(v4, v5, v24, 1);
  v35 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v134 = byte_281EAF3;
  v132 = byte_281EAF3;
  v135 = byte_281EAF4;
  v133 = byte_281EAF4;
  v35(v4, v5, v24, 1);
  v36 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v130 = byte_281EAF3;
  v128 = byte_281EAF3;
  v131 = byte_281EAF4;
  v129 = byte_281EAF4;
  v36(v4, v5, v24, 5);
  v37 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v126 = byte_281EAF1;
  v124 = byte_281EAF1;
  v127 = byte_281EAF2;
  v125 = byte_281EAF2;
  v37(v4, v5, v24, 6);
  v38 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v122 = byte_281EAF3;
  v120 = byte_281EAF3;
  v123 = byte_281EAF4;
  v121 = byte_281EAF4;
  v111 = 3;
  v38(v4, v5, v24, 5);
  v39 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v118 = byte_281EAF9;
  v119 = byte_281EAFA;
  v39(v4, v5, &v118, 6);
  v40 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
  v116 = byte_281EAF9;
  v117 = byte_281EAFA;
  v108 = 2;
  v109 = 3;
  v110 = v24;
  v40(v4, v5, &v116, 9);
  v41 = *(_DWORD *)ptr;
  if ( *(_DWORD *)ptr & 8 )
    v42 = 1;
      v43 = StructurePiece::getWorldY(v4, v42);
      if ( v43 >= *(_WORD *)(BlockSource::getDimension(v5) + 20) )
        v45 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v218 = *(_BYTE *)(Block::mAir + 4);
        v219 = 0;
        v45(v4, v5, &v218, 3);
      else
        v44 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v216 = word_281EAFB;
        v217 = 0;
        v44(v4, v5, &v216, 3);
      v46 = StructurePiece::getWorldY(v4, v42);
      if ( v46 >= *(_WORD *)(BlockSource::getDimension(v5) + 20) )
        v48 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v108 = v42;
        v109 = 0;
        v110 = v24;
        v48(v4, v5, &v218, 4);
        v47 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v47(v4, v5, &v216, 4);
      v14 = __OFSUB__(v42, 2);
      v13 = v42++ - 2 < 0;
    v41 = *(_DWORD *)ptr;
  if ( v41 & 4 )
    v49 = 1;
      v50 = StructurePiece::getWorldY(v4, v49);
      if ( v50 >= *(_WORD *)(BlockSource::getDimension(v5) + 20) )
        v52 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v214 = *(_BYTE *)(Block::mAir + 4);
        v215 = 0;
        v52(v4, v5, &v214, 3);
        v51 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v212 = word_281EAFB;
        v213 = 0;
        v51(v4, v5, &v212, 3);
      v53 = StructurePiece::getWorldY(v4, v49);
      if ( v53 >= *(_WORD *)(BlockSource::getDimension(v5) + 20) )
        v55 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v108 = v49;
        v109 = 7;
        v55(v4, v5, &v214, 4);
        v54 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v54(v4, v5, &v212, 4);
      v14 = __OFSUB__(v49, 2);
      v13 = v49++ - 2 < 0;
  if ( v41 & 0x10 )
    v56 = 1;
      v57 = StructurePiece::getWorldY(v4, v56);
      if ( v57 >= *(_WORD *)(BlockSource::getDimension(v5) + 20) )
        v59 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
        v210 = *(_BYTE *)(Block::mAir + 4);
        v211 = 0;
        v59(v4, v5, &v210, 0);
        v58 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
        v208 = word_281EAFB;
        v209 = 0;
        v58(v4, v5, &v208, 0);
      v60 = StructurePiece::getWorldY(v4, v56);
      if ( v60 >= *(_WORD *)(BlockSource::getDimension(v5) + 20) )
        v62 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
        v108 = v56;
        v109 = 4;
        v62(v4, v5, &v210, 0);
        v61 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, char *, _DWORD))(*(_DWORD *)v4 + 36);
        v61(v4, v5, &v208, 0);
      v14 = __OFSUB__(v56, 2);
      v13 = v56++ - 2 < 0;
  v63 = *(_DWORD *)v189;
  if ( *(_DWORD *)v189 & 8 )
    v64 = 1;
      v65 = StructurePiece::getWorldY(v4, v64);
      if ( v65 >= *(_WORD *)(BlockSource::getDimension(v5) + 20) )
        v67 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v206 = *(_BYTE *)(Block::mAir + 4);
        v207 = 0;
        v67(v4, v5, &v206, 11);
        v66 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v204 = word_281EAFB;
        v205 = 0;
        v66(v4, v5, &v204, 11);
      v68 = StructurePiece::getWorldY(v4, v64);
      if ( v68 >= *(_WORD *)(BlockSource::getDimension(v5) + 20) )
        v70 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v108 = v64;
        v70(v4, v5, &v206, 12);
        v69 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v69(v4, v5, &v204, 12);
      v14 = __OFSUB__(v64, 2);
      v13 = v64++ - 2 < 0;
    v63 = *(_DWORD *)v189;
  if ( v63 & 4 )
    v71 = 1;
      v72 = StructurePiece::getWorldY(v4, v71);
      if ( v72 >= *(_WORD *)(BlockSource::getDimension(v5) + 20) )
        v74 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v202 = *(_BYTE *)(Block::mAir + 4);
        v203 = 0;
        v74(v4, v5, &v202, 11);
        v73 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v200 = word_281EAFB;
        v201 = 0;
        v73(v4, v5, &v200, 11);
      v75 = StructurePiece::getWorldY(v4, v71);
      if ( v75 >= *(_WORD *)(BlockSource::getDimension(v5) + 20) )
        v77 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v108 = v71;
        v77(v4, v5, &v202, 12);
        v76 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v76(v4, v5, &v200, 12);
      v14 = __OFSUB__(v71, 2);
      v13 = v71++ - 2 < 0;
  if ( v63 & 0x20 )
    v78 = 1;
      v79 = StructurePiece::getWorldY(v4, v78);
      if ( v79 >= *(_WORD *)(BlockSource::getDimension(v5) + 20) )
        v81 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v198 = *(_BYTE *)(Block::mAir + 4);
        v199 = 0;
        v81(v4, v5, &v198, 15);
        v80 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v196 = word_281EAFB;
        v197 = 0;
        v80(v4, v5, &v196, 15);
      v82 = StructurePiece::getWorldY(v4, v78);
      if ( v82 >= *(_WORD *)(BlockSource::getDimension(v5) + 20) )
        v84 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v108 = v78;
        v84(v4, v5, &v198, 15);
        v83 = *(void (__fastcall **)(OceanMonumentDoubleXRoom *, BlockSource *, char *, signed int))(*(_DWORD *)v4 + 36);
        v83(v4, v5, &v196, 15);
      v14 = __OFSUB__(v78, 2);
      v13 = v78++ - 2 < 0;
  if ( ptr )
    j_operator delete(ptr);
  v86 = v183;
  v85 = v182;
  if ( v182 != v183 )
      v87 = *(_DWORD *)(v85 + 4);
      if ( v87 )
        v88 = (unsigned int *)(v87 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v89 = __ldrex(v88);
          while ( __strex(v89 - 1, v88) );
        else
          v89 = (*v88)--;
        if ( v89 == 1 )
          v90 = (unsigned int *)(v87 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v87 + 8))(v87);
          if ( &pthread_create )
          {
            __dmb();
            do
              v91 = __ldrex(v90);
            while ( __strex(v91 - 1, v90) );
          }
          else
            v91 = (*v90)--;
          if ( v91 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v87 + 12))(v87);
      v85 += 8;
    while ( v85 != v86 );
    v85 = v182;
  if ( v85 )
    j_operator delete((void *)v85);
  v92 = v181;
  if ( v181 )
    v93 = (unsigned int *)(v181 + 8);
    if ( &pthread_create )
      __dmb();
        v94 = __ldrex(v93);
        v95 = v94 - 1;
      while ( __strex(v94 - 1, v93) );
    else
      v94 = *v93;
      v95 = *v93 - 1;
      *v93 = v95;
    if ( v94 == 1 )
      (*(void (__cdecl **)(int, _DWORD, unsigned int *, int, signed int, signed int, const BoundingBox *, signed int))(*(_DWORD *)v92 + 12))(
        v92,
        *(_DWORD *)(*(_DWORD *)v92 + 12),
        v93,
        v95,
        v108,
        v109,
        v110,
        3);
  if ( v189 )
    j_operator delete(v189);
  v97 = v188;
  v96 = v187;
  if ( v187 != v188 )
      v98 = *(_DWORD *)(v96 + 4);
      if ( v98 )
        v99 = (unsigned int *)(v98 + 4);
            v100 = __ldrex(v99);
          while ( __strex(v100 - 1, v99) );
          v100 = (*v99)--;
        if ( v100 == 1 )
          v101 = (unsigned int *)(v98 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v98 + 8))(v98);
              v102 = __ldrex(v101);
            while ( __strex(v102 - 1, v101) );
            v102 = (*v101)--;
          if ( v102 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v98 + 12))(v98);
      v96 += 8;
    while ( v96 != v97 );
    v96 = v187;
  if ( v96 )
    j_operator delete((void *)v96);
  v103 = v186;
  if ( v186 )
    v104 = (unsigned int *)(v186 + 8);
        v105 = __ldrex(v104);
        v106 = v105 - 1;
      while ( __strex(v105 - 1, v104) );
      v105 = *v104;
      v106 = *v104 - 1;
      *v104 = v106;
    if ( v105 == 1 )
      (*(void (__cdecl **)(int, _DWORD, unsigned int *, int, signed int, signed int, const BoundingBox *, signed int))(*(_DWORD *)v103 + 12))(
        v103,
        *(_DWORD *)(*(_DWORD *)v103 + 12),
        v104,
        v106,
        v111);
  return 1;
}


void __fastcall OceanMonumentDoubleXRoom::~OceanMonumentDoubleXRoom(OceanMonumentDoubleXRoom *this)
{
  OceanMonumentDoubleXRoom *v1; // r4@1
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


_DWORD *__fastcall OceanMonumentDoubleXRoom::OceanMonumentDoubleXRoom(int a1, int *a2, int a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)OceanMonumentPiece::OceanMonumentPiece(a1, 1, a2, a3, 2, 1, 1);
  *result = &off_2718F34;
  return result;
}


void __fastcall OceanMonumentDoubleXRoom::~OceanMonumentDoubleXRoom(OceanMonumentDoubleXRoom *this)
{
  OceanMonumentDoubleXRoom::~OceanMonumentDoubleXRoom(this);
}


int __fastcall OceanMonumentDoubleXRoom::OceanMonumentDoubleXRoom(int result)
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
  *(_DWORD *)result = &off_2718F34;
  return result;
}


signed int __fastcall OceanMonumentDoubleXRoom::getType(OceanMonumentDoubleXRoom *this)
{
  return 1330459224;
}
