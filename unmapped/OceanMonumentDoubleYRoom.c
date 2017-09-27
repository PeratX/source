

void __fastcall OceanMonumentDoubleYRoom::~OceanMonumentDoubleYRoom(OceanMonumentDoubleYRoom *this)
{
  OceanMonumentDoubleYRoom::~OceanMonumentDoubleYRoom(this);
}


int __fastcall OceanMonumentDoubleYRoom::OceanMonumentDoubleYRoom(int result)
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
  *(_DWORD *)result = &off_2718EEC;
  return result;
}


signed int __fastcall OceanMonumentDoubleYRoom::postProcess(OceanMonumentDoubleYRoom *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  OceanMonumentDoubleYRoom *v4; // r8@1
  BlockSource *v5; // r7@1
  int v6; // r0@1
  const BoundingBox *v7; // r11@1
  int v8; // r3@3
  int v9; // r6@3
  unsigned int *v10; // r0@4
  unsigned int v11; // r1@6
  int v12; // r9@11
  int v13; // r4@11
  _BYTE *v14; // r6@11
  const BoundingBox *v15; // r10@12
  _BYTE *v16; // r7@14
  void (__fastcall *v17)(OceanMonumentDoubleYRoom *, int, char *, int); // r6@14
  bool v18; // nf@15
  unsigned __int8 v19; // vf@15
  void (__fastcall *v20)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, _DWORD); // r5@18
  void (__fastcall *v21)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int); // r5@18
  void (__fastcall *v22)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int); // r6@18
  void (__fastcall *v23)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int); // r6@18
  void (__fastcall *v24)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int); // r4@18
  void (__fastcall *v25)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int); // r4@18
  void (__fastcall *v26)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int); // r4@18
  void (__fastcall *v27)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int); // r4@18
  void (__fastcall *v28)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int); // r4@18
  void (__fastcall *v29)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int); // r4@18
  void (__fastcall *v30)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int); // r5@18
  void (__fastcall *v31)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int); // r5@18
  int v32; // r4@18
  int v33; // r6@18
  unsigned int *v34; // r1@19
  unsigned int v35; // r2@21
  int v36; // r1@25
  const BoundingBox *v37; // r6@26
  void (__fastcall *v38)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int); // r12@27
  void *v39; // r5@28
  const BoundingBox *v40; // r7@28
  void (__fastcall *v41)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, _DWORD); // r6@28
  void (__fastcall *v42)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int); // r6@29
  void (__fastcall *v43)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int); // r6@29
  void (__fastcall *v44)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int); // r6@30
  char v45; // r0@30
  char v46; // r1@31
  char v47; // r1@31
  void (__fastcall *v48)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, _DWORD); // r6@31
  char v49; // r1@32
  char v50; // r1@32
  void (__fastcall *v51)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int); // r6@32
  char v52; // r1@32
  void (__fastcall *v53)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int); // r6@32
  void (__fastcall *v54)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, _DWORD); // r12@33
  char v55; // r0@33
  char v56; // r1@34
  char v57; // r1@34
  void (__fastcall *v58)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, _DWORD); // r12@34
  char v59; // r1@35
  char v60; // r1@35
  void (__fastcall *v61)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, _DWORD); // r12@35
  char v62; // r1@35
  void (__fastcall *v63)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, _DWORD); // r12@35
  void (__fastcall *v64)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int); // r12@36
  char v65; // r0@36
  char v66; // r1@37
  char v67; // r1@37
  void (__fastcall *v68)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int); // r12@37
  char v69; // r1@38
  char v70; // r1@38
  void (__fastcall *v71)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int); // r4@38
  char v72; // r1@38
  void (__fastcall *v73)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int); // r4@38
  unsigned int v74; // r0@43
  unsigned int *v75; // r1@47
  unsigned int v76; // r0@49
  unsigned int *v77; // r4@53
  unsigned int v78; // r0@55
  unsigned int v79; // r0@64
  unsigned int *v80; // r4@68
  unsigned int v81; // r0@70
  unsigned int v82; // r0@77
  unsigned int *v83; // r4@81
  unsigned int v84; // r0@83
  unsigned int *v86; // [sp+38h] [bp-148h]@25
  int v87; // [sp+3Ch] [bp-144h]@11
  int v88; // [sp+3Ch] [bp-144h]@18
  BlockSource *v89; // [sp+40h] [bp-140h]@18
  int v90; // [sp+44h] [bp-13Ch]@9
  int v91; // [sp+48h] [bp-138h]@18
  char v92; // [sp+4Ch] [bp-134h]@11
  char v93; // [sp+50h] [bp-130h]@11
  int v94; // [sp+50h] [bp-130h]@26
  char v95; // [sp+54h] [bp-12Ch]@37
  char v96; // [sp+55h] [bp-12Bh]@37
  char v97; // [sp+58h] [bp-128h]@37
  char v98; // [sp+59h] [bp-127h]@37
  char v99; // [sp+5Ch] [bp-124h]@37
  char v100; // [sp+5Dh] [bp-123h]@37
  char v101; // [sp+60h] [bp-120h]@37
  char v102; // [sp+61h] [bp-11Fh]@37
  char v103; // [sp+64h] [bp-11Ch]@38
  char v104; // [sp+65h] [bp-11Bh]@38
  char v105; // [sp+68h] [bp-118h]@38
  char v106; // [sp+69h] [bp-117h]@38
  char v107; // [sp+6Ch] [bp-114h]@38
  char v108; // [sp+6Dh] [bp-113h]@38
  char v109; // [sp+70h] [bp-110h]@38
  char v110; // [sp+71h] [bp-10Fh]@38
  char v111; // [sp+74h] [bp-10Ch]@38
  char v112; // [sp+75h] [bp-10Bh]@38
  char v113; // [sp+78h] [bp-108h]@38
  char v114; // [sp+79h] [bp-107h]@38
  char v115; // [sp+7Ch] [bp-104h]@34
  char v116; // [sp+7Dh] [bp-103h]@34
  char v117; // [sp+80h] [bp-100h]@34
  char v118; // [sp+81h] [bp-FFh]@34
  char v119; // [sp+84h] [bp-FCh]@34
  char v120; // [sp+85h] [bp-FBh]@34
  char v121; // [sp+88h] [bp-F8h]@34
  char v122; // [sp+89h] [bp-F7h]@34
  char v123; // [sp+8Ch] [bp-F4h]@35
  char v124; // [sp+8Dh] [bp-F3h]@35
  char v125; // [sp+90h] [bp-F0h]@35
  char v126; // [sp+91h] [bp-EFh]@35
  char v127; // [sp+94h] [bp-ECh]@35
  char v128; // [sp+95h] [bp-EBh]@35
  char v129; // [sp+98h] [bp-E8h]@35
  char v130; // [sp+99h] [bp-E7h]@35
  char v131; // [sp+9Ch] [bp-E4h]@35
  char v132; // [sp+9Dh] [bp-E3h]@35
  char v133; // [sp+A0h] [bp-E0h]@35
  char v134; // [sp+A1h] [bp-DFh]@35
  char v135; // [sp+A4h] [bp-DCh]@31
  char v136; // [sp+A5h] [bp-DBh]@31
  char v137; // [sp+A8h] [bp-D8h]@31
  char v138; // [sp+A9h] [bp-D7h]@31
  char v139; // [sp+ACh] [bp-D4h]@31
  char v140; // [sp+ADh] [bp-D3h]@31
  char v141; // [sp+B0h] [bp-D0h]@31
  char v142; // [sp+B1h] [bp-CFh]@31
  char v143; // [sp+B4h] [bp-CCh]@32
  char v144; // [sp+B5h] [bp-CBh]@32
  char v145; // [sp+B8h] [bp-C8h]@32
  char v146; // [sp+B9h] [bp-C7h]@32
  char v147; // [sp+BCh] [bp-C4h]@32
  char v148; // [sp+BDh] [bp-C3h]@32
  char v149; // [sp+C0h] [bp-C0h]@32
  char v150; // [sp+C1h] [bp-BFh]@32
  char v151; // [sp+C4h] [bp-BCh]@32
  char v152; // [sp+C5h] [bp-BBh]@32
  char v153; // [sp+C8h] [bp-B8h]@32
  char v154; // [sp+C9h] [bp-B7h]@32
  char v155; // [sp+CCh] [bp-B4h]@28
  char v156; // [sp+CDh] [bp-B3h]@28
  char v157; // [sp+D0h] [bp-B0h]@28
  char v158; // [sp+D1h] [bp-AFh]@28
  char v159; // [sp+D4h] [bp-ACh]@28
  char v160; // [sp+D5h] [bp-ABh]@28
  char v161; // [sp+D8h] [bp-A8h]@28
  char v162; // [sp+D9h] [bp-A7h]@28
  char v163; // [sp+DCh] [bp-A4h]@29
  char v164; // [sp+DDh] [bp-A3h]@29
  char v165; // [sp+E0h] [bp-A0h]@29
  char v166; // [sp+E1h] [bp-9Fh]@29
  char v167; // [sp+E4h] [bp-9Ch]@29
  char v168; // [sp+E5h] [bp-9Bh]@29
  char v169; // [sp+E8h] [bp-98h]@29
  char v170; // [sp+E9h] [bp-97h]@29
  char v171; // [sp+ECh] [bp-94h]@29
  char v172; // [sp+EDh] [bp-93h]@29
  char v173; // [sp+F0h] [bp-90h]@29
  char v174; // [sp+F1h] [bp-8Fh]@29
  char v175; // [sp+F4h] [bp-8Ch]@18
  char v176; // [sp+F5h] [bp-8Bh]@18
  char v177; // [sp+F8h] [bp-88h]@18
  char v178; // [sp+F9h] [bp-87h]@18
  char v179; // [sp+FCh] [bp-84h]@18
  char v180; // [sp+FDh] [bp-83h]@18
  char v181; // [sp+100h] [bp-80h]@18
  char v182; // [sp+101h] [bp-7Fh]@18
  char v183; // [sp+104h] [bp-7Ch]@18
  char v184; // [sp+105h] [bp-7Bh]@18
  char v185; // [sp+108h] [bp-78h]@18
  char v186; // [sp+109h] [bp-77h]@18
  char v187; // [sp+10Ch] [bp-74h]@18
  char v188; // [sp+10Dh] [bp-73h]@18
  char v189; // [sp+110h] [bp-70h]@18
  char v190; // [sp+111h] [bp-6Fh]@18
  char v191; // [sp+114h] [bp-6Ch]@18
  char v192; // [sp+115h] [bp-6Bh]@18
  char v193; // [sp+118h] [bp-68h]@18
  char v194; // [sp+119h] [bp-67h]@18
  char v195; // [sp+11Ch] [bp-64h]@18
  char v196; // [sp+11Dh] [bp-63h]@18
  char v197; // [sp+120h] [bp-60h]@18
  char v198; // [sp+121h] [bp-5Fh]@18
  char v199; // [sp+124h] [bp-5Ch]@18
  char v200; // [sp+125h] [bp-5Bh]@18
  char v201; // [sp+128h] [bp-58h]@18
  char v202; // [sp+129h] [bp-57h]@18
  char v203; // [sp+12Ch] [bp-54h]@18
  char v204; // [sp+12Dh] [bp-53h]@18
  char v205; // [sp+130h] [bp-50h]@18
  char v206; // [sp+131h] [bp-4Fh]@18
  char v207; // [sp+134h] [bp-4Ch]@18
  char v208; // [sp+135h] [bp-4Bh]@18
  char v209; // [sp+138h] [bp-48h]@18
  char v210; // [sp+139h] [bp-47h]@18
  char v211; // [sp+13Ch] [bp-44h]@18
  char v212; // [sp+13Dh] [bp-43h]@18
  char v213; // [sp+140h] [bp-40h]@18
  char v214; // [sp+141h] [bp-3Fh]@18
  char v215; // [sp+144h] [bp-3Ch]@18
  char v216; // [sp+145h] [bp-3Bh]@18
  char v217; // [sp+148h] [bp-38h]@18
  char v218; // [sp+149h] [bp-37h]@18
  char v219; // [sp+14Ch] [bp-34h]@18
  char v220; // [sp+14Dh] [bp-33h]@18
  char v221; // [sp+150h] [bp-30h]@18
  char v222; // [sp+151h] [bp-2Fh]@18
  char v223; // [sp+154h] [bp-2Ch]@14
  char v224; // [sp+155h] [bp-2Bh]@14
  unsigned __int8 v225; // [sp+158h] [bp-28h]@13

  v4 = this;
  v5 = a2;
  v6 = *((_DWORD *)this + 10);
  v7 = a4;
  if ( *(_DWORD *)(v6 + 8) >= 25 )
  {
    OceanMonumentPiece::generateDefaultFloor(v4, a2, a4, 0, 0, (**(_DWORD **)(v6 + 24) & 8u) >> 3);
    v6 = *((_DWORD *)v4 + 10);
  }
  v8 = *(_QWORD *)(*(_DWORD *)(v6 + 12) + 8) >> 32;
  v9 = *(_QWORD *)(*(_DWORD *)(v6 + 12) + 8);
  if ( v8 )
    v10 = (unsigned int *)(v8 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
    }
    else
      ++*v10;
  v90 = v8;
  if ( v9 && !*(_DWORD *)(*(_DWORD *)(v9 + 12) + 8) )
    v87 = v9;
    v12 = (int)v5;
    v13 = 1;
    v14 = &unk_281EAF0;
    v93 = byte_281EAF1;
    v92 = byte_281EAF2;
    do
      v15 = (const BoundingBox *)1;
      {
        StructurePiece::getBlock((StructurePiece *)&v225, v4, v12, v13, 8, v15, (int)v7);
        if ( v225 == v14[11] )
        {
          v16 = v14;
          v17 = *(void (__fastcall **)(OceanMonumentDoubleYRoom *, int, char *, int))(*(_DWORD *)v4 + 36);
          v223 = v93;
          v224 = v92;
          v17(v4, v12, &v223, v13);
          v14 = v16;
        }
        v19 = __OFSUB__(v15, 6);
        v18 = (signed int)v15 - 6 < 0;
        v15 = (const BoundingBox *)((char *)v15 + 1);
      }
      while ( v18 ^ v19 );
      v19 = __OFSUB__(v13, 6);
      v18 = v13++ - 6 < 0;
    while ( v18 ^ v19 );
    v9 = v87;
    v5 = (BlockSource *)v12;
  v88 = v9;
  v20 = *(void (__fastcall **)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
  v221 = byte_281EAF3;
  v219 = byte_281EAF3;
  v222 = byte_281EAF4;
  v220 = byte_281EAF4;
  v20(v4, v5, v7, 0);
  v21 = *(void (__fastcall **)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v217 = byte_281EAF3;
  v215 = byte_281EAF3;
  v218 = byte_281EAF4;
  v216 = byte_281EAF4;
  v21(v4, v5, v7, 7);
  v22 = *(void (__fastcall **)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v213 = byte_281EAF3;
  v211 = byte_281EAF3;
  v214 = byte_281EAF4;
  v212 = byte_281EAF4;
  v22(v4, v5, v7, 1);
  v23 = *(void (__fastcall **)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v209 = byte_281EAF3;
  v207 = byte_281EAF3;
  v210 = byte_281EAF4;
  v208 = byte_281EAF4;
  v23(v4, v5, v7, 1);
  v24 = *(void (__fastcall **)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v205 = byte_281EAF3;
  v203 = byte_281EAF3;
  v206 = byte_281EAF4;
  v204 = byte_281EAF4;
  v24(v4, v5, v7, 2);
  v25 = *(void (__fastcall **)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v201 = byte_281EAF3;
  v199 = byte_281EAF3;
  v202 = byte_281EAF4;
  v200 = byte_281EAF4;
  v25(v4, v5, v7, 1);
  v26 = *(void (__fastcall **)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v197 = byte_281EAF3;
  v195 = byte_281EAF3;
  v198 = byte_281EAF4;
  v196 = byte_281EAF4;
  v26(v4, v5, v7, 5);
  v27 = *(void (__fastcall **)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v193 = byte_281EAF3;
  v191 = byte_281EAF3;
  v194 = byte_281EAF4;
  v192 = byte_281EAF4;
  v27(v4, v5, v7, 6);
  v28 = *(void (__fastcall **)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v189 = byte_281EAF3;
  v187 = byte_281EAF3;
  v190 = byte_281EAF4;
  v188 = byte_281EAF4;
  v28(v4, v5, v7, 2);
  v29 = *(void (__fastcall **)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v185 = byte_281EAF3;
  v183 = byte_281EAF3;
  v186 = byte_281EAF4;
  v184 = byte_281EAF4;
  v29(v4, v5, v7, 1);
  v30 = *(void (__fastcall **)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v181 = byte_281EAF3;
  v179 = byte_281EAF3;
  v182 = byte_281EAF4;
  v180 = byte_281EAF4;
  v30(v4, v5, v7, 5);
  v31 = *(void (__fastcall **)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
  v177 = byte_281EAF3;
  v175 = byte_281EAF3;
  v178 = byte_281EAF4;
  v176 = byte_281EAF4;
  v31(v4, v5, v7, 6);
  v89 = v5;
  v33 = *((_QWORD *)v4 + 5) >> 32;
  v32 = *((_QWORD *)v4 + 5);
  v91 = 0;
  if ( v33 )
    v34 = (unsigned int *)(v33 + 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 + 1, v34) );
      ++*v34;
    v91 = v33;
  v86 = (unsigned int *)(v90 + 4);
  v36 = 1;
  do
    v37 = v7;
    v94 = v36;
    if ( v32 )
      v38 = *(void (__fastcall **)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      if ( **(_BYTE **)(v32 + 24) & 8 )
        v173 = byte_281EAF3;
        v171 = byte_281EAF3;
        v174 = byte_281EAF4;
        v172 = byte_281EAF4;
        v40 = v7;
        v38(v4, v89, v7, 2);
        v39 = &unk_281EAF0;
        v42 = *(void (__fastcall **)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v169 = byte_281EAF3;
        v167 = byte_281EAF3;
        v170 = byte_281EAF4;
        v168 = byte_281EAF4;
        v42(v4, v89, v7, 5);
        v43 = *(void (__fastcall **)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v165 = byte_281EAF3;
        v163 = byte_281EAF3;
        v166 = byte_281EAF4;
        v164 = byte_281EAF4;
        v43(v4, v89, v7, 3);
      else
        v161 = byte_281EAF3;
        v159 = byte_281EAF3;
        v162 = byte_281EAF4;
        v160 = byte_281EAF4;
        v38(v4, v89, v7, 0);
        v41 = *(void (__fastcall **)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
        v157 = byte_281EAF1;
        v155 = byte_281EAF1;
        v158 = byte_281EAF2;
        v156 = byte_281EAF2;
        v41(v4, v89, v7, 0);
      v44 = *(void (__fastcall **)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v45 = *((_BYTE *)v39 + 3);
      if ( **(_BYTE **)(v32 + 24) & 4 )
        v49 = *((_BYTE *)v39 + 4);
        v153 = *((_BYTE *)v39 + 3);
        v151 = v45;
        v154 = v49;
        v152 = v49;
        v44(v4, v89, v40, 2);
        v50 = *((_BYTE *)v39 + 4);
        v51 = *(void (__fastcall **)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v149 = *((_BYTE *)v39 + 3);
        v147 = v149;
        v150 = v50;
        v148 = v50;
        v51(v4, v89, v40, 5);
        v52 = *((_BYTE *)v39 + 4);
        v53 = *(void (__fastcall **)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v145 = *((_BYTE *)v39 + 3);
        v143 = v145;
        v146 = v52;
        v144 = v52;
        v53(v4, v89, v40, 3);
        v46 = *((_BYTE *)v39 + 4);
        v141 = *((_BYTE *)v39 + 3);
        v139 = v45;
        v142 = v46;
        v140 = v46;
        v44(v4, v89, v40, 0);
        v47 = *((_BYTE *)v39 + 2);
        v48 = *(void (__fastcall **)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
        v137 = *((_BYTE *)v39 + 1);
        v135 = v137;
        v138 = v47;
        v136 = v47;
        v48(v4, v89, v40, 0);
      v37 = v40;
      v54 = *(void (__fastcall **)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
      v55 = *((_BYTE *)v39 + 3);
      if ( **(_BYTE **)(v32 + 24) & 0x10 )
        v59 = *((_BYTE *)v39 + 4);
        v133 = *((_BYTE *)v39 + 3);
        v131 = v55;
        v134 = v59;
        v132 = v59;
        v54(v4, v89, v40, 0);
        v60 = *((_BYTE *)v39 + 4);
        v61 = *(void (__fastcall **)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
        v129 = *((_BYTE *)v39 + 3);
        v127 = v129;
        v130 = v60;
        v128 = v60;
        v61(v4, v89, v40, 0);
        v62 = *((_BYTE *)v39 + 4);
        v63 = *(void (__fastcall **)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
        v125 = *((_BYTE *)v39 + 3);
        v123 = v125;
        v126 = v62;
        v124 = v62;
        v63(v4, v89, v40, 0);
        v56 = *((_BYTE *)v39 + 4);
        v121 = *((_BYTE *)v39 + 3);
        v119 = v55;
        v122 = v56;
        v120 = v56;
        v57 = *((_BYTE *)v39 + 2);
        v58 = *(void (__fastcall **)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, _DWORD))(*(_DWORD *)v4 + 40);
        v117 = *((_BYTE *)v39 + 1);
        v115 = v117;
        v118 = v57;
        v116 = v57;
        v58(v4, v89, v40, 0);
      v64 = *(void (__fastcall **)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
      v65 = *((_BYTE *)v39 + 3);
      if ( **(_BYTE **)(v32 + 24) & 0x20 )
        v69 = *((_BYTE *)v39 + 4);
        v113 = *((_BYTE *)v39 + 3);
        v111 = v65;
        v114 = v69;
        v112 = v69;
        v64(v4, v89, v40, 7);
        v70 = *((_BYTE *)v39 + 4);
        v71 = *(void (__fastcall **)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v109 = *((_BYTE *)v39 + 3);
        v107 = v109;
        v110 = v70;
        v108 = v70;
        v71(v4, v89, v40, 7);
        v72 = *((_BYTE *)v39 + 4);
        v73 = *(void (__fastcall **)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v105 = *((_BYTE *)v39 + 3);
        v103 = v105;
        v106 = v72;
        v104 = v72;
        v73(v4, v89, v40, 7);
        v66 = *((_BYTE *)v39 + 4);
        v101 = *((_BYTE *)v39 + 3);
        v99 = v65;
        v102 = v66;
        v100 = v66;
        v67 = *((_BYTE *)v39 + 2);
        v68 = *(void (__fastcall **)(OceanMonumentDoubleYRoom *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
        v97 = *((_BYTE *)v39 + 1);
        v95 = v97;
        v98 = v67;
        v96 = v67;
        v68(v4, v89, v40, 7);
    v7 = v37;
    if ( v90 != v91 )
      if ( v90 )
        if ( &pthread_create )
          __dmb();
          do
            v74 = __ldrex(v86);
          while ( __strex(v74 + 1, v86) );
        else
          ++*v86;
      if ( v91 )
        v75 = (unsigned int *)(v91 + 4);
            v76 = __ldrex(v75);
          while ( __strex(v76 - 1, v75) );
          v76 = (*v75)--;
        if ( v76 == 1 )
          v77 = (unsigned int *)(v91 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v91 + 8))(v91);
          if ( &pthread_create )
          {
            __dmb();
            do
              v78 = __ldrex(v77);
            while ( __strex(v78 - 1, v77) );
          }
          else
            v78 = (*v77)--;
          if ( v78 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v91 + 12))(v91);
    v32 = v88;
    v36 = v94 + 4;
    v91 = v90;
  while ( v94 + 4 < 6 );
  if ( v90 )
        v79 = __ldrex(v86);
      while ( __strex(v79 - 1, v86) );
      v79 = (*v86)--;
    if ( v79 == 1 )
      v80 = (unsigned int *)(v90 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v90 + 8))(v90);
      if ( &pthread_create )
        __dmb();
        do
          v81 = __ldrex(v80);
        while ( __strex(v81 - 1, v80) );
        v81 = (*v80)--;
      if ( v81 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v90 + 12))(v90);
        v82 = __ldrex(v86);
      while ( __strex(v82 - 1, v86) );
      v82 = (*v86)--;
    if ( v82 == 1 )
      v83 = (unsigned int *)(v90 + 8);
          v84 = __ldrex(v83);
        while ( __strex(v84 - 1, v83) );
        v84 = (*v83)--;
      if ( v84 == 1 )
  return 1;
}


_DWORD *__fastcall OceanMonumentDoubleYRoom::OceanMonumentDoubleYRoom(int a1, int *a2, int a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)OceanMonumentPiece::OceanMonumentPiece(a1, 1, a2, a3, 1, 2, 1);
  *result = &off_2718EEC;
  return result;
}


void __fastcall OceanMonumentDoubleYRoom::~OceanMonumentDoubleYRoom(OceanMonumentDoubleYRoom *this)
{
  OceanMonumentDoubleYRoom *v1; // r4@1
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


signed int __fastcall OceanMonumentDoubleYRoom::getType(OceanMonumentDoubleYRoom *this)
{
  return 1330459225;
}
