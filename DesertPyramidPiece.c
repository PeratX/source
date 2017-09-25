

signed int __fastcall DesertPyramidPiece::getType(DesertPyramidPiece *this)
{
  return 1146311252;
}


signed int __fastcall DesertPyramidPiece::postProcess(DesertPyramidPiece *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  DesertPyramidPiece *v4; // r9@1
  const BoundingBox *v5; // r8@1
  BlockSource *v6; // r10@1
  int v7; // r2@1
  int v8; // r1@1
  void (__cdecl *v9)(DesertPyramidPiece *, BlockSource *, const BoundingBox *, _DWORD, signed int, _DWORD, int, _DWORD); // r7@1
  signed int v10; // r4@1
  signed int v11; // r6@1
  void (__fastcall *v12)(DesertPyramidPiece *, BlockSource *, const BoundingBox *, signed int); // r7@2
  int v13; // r2@2
  int v14; // r1@2
  int v15; // r2@2
  void (__fastcall *v16)(DesertPyramidPiece *, BlockSource *, const BoundingBox *, int); // r7@2
  int v17; // r1@2
  signed int v18; // r1@3
  int v19; // r4@3
  int v20; // r11@3
  int v21; // r0@4
  signed int v22; // r5@4
  int v23; // r6@6
  int v24; // r9@6
  void (__fastcall *v25)(int, BlockSource *, char *, signed int); // r4@7
  char v26; // ST30_1@10
  char v27; // ST2C_1@10
  char v28; // ST44_1@10
  char v29; // ST40_1@10
  int v30; // r1@10
  int v31; // r1@10
  int v32; // r6@10
  int v33; // r10@10
  void (__fastcall *v34)(int, int, int, _DWORD); // r7@10
  void (__fastcall *v35)(int, int, int, signed int); // r7@10
  void (__fastcall *v36)(int, int, char *, signed int); // r7@10
  void (__fastcall *v37)(int, int, char *, signed int); // r7@10
  void (__fastcall *v38)(int, int, char *, _DWORD); // r7@10
  void (__fastcall *v39)(int, int, char *, signed int); // r7@10
  int v40; // r2@10
  void (__fastcall *v41)(int, int, int, int); // r7@10
  int v42; // r1@10
  void (__fastcall *v43)(int, int, int, int); // r7@10
  void (__fastcall *v44)(int, int, char *, int); // r7@10
  int v45; // r3@10
  void (__fastcall *v46)(int, int, char *, int); // r7@10
  int v47; // r3@10
  void (__fastcall *v48)(int, int, char *, int); // r7@10
  int v49; // r3@10
  void (__fastcall *v50)(int, int, char *, int); // r7@10
  int v51; // r3@10
  void (__fastcall *v52)(int, int, int, signed int); // r7@10
  void (__fastcall *v53)(int, int, int, signed int); // r7@10
  void (__fastcall *v54)(int, int, char *, signed int); // r7@10
  void (__fastcall *v55)(int, int, char *, signed int); // r7@10
  void (__fastcall *v56)(int, int, char *, signed int); // r7@10
  void (__fastcall *v57)(int, int, char *, signed int); // r7@10
  void (__fastcall *v58)(int, int, char *, signed int); // r7@10
  void (__fastcall *v59)(int, int, char *, signed int); // r7@10
  void (__fastcall *v60)(int, int, char *, signed int); // r7@10
  void (__fastcall *v61)(int, int, int, signed int); // r7@10
  void (__fastcall *v62)(int, int, int, signed int); // r7@10
  void (__fastcall *v63)(int, int, int, signed int); // r7@10
  void (__fastcall *v64)(int, int, int, signed int); // r7@10
  int v65; // r2@10
  void (__fastcall *v66)(int, int, int, signed int); // r7@10
  int v67; // r1@10
  void (__fastcall *v68)(int, int, int, signed int); // r7@10
  void (__fastcall *v69)(int, int, int, signed int); // r4@10
  int v70; // r1@10
  void (__fastcall *v71)(int, int, int, int); // r7@10
  void (__fastcall *v72)(int, int, int, signed int); // r7@10
  int v73; // r1@10
  void (__fastcall *v74)(int, int, int); // r7@10
  int v75; // r3@10
  void (__fastcall *v76)(int, int, char *, signed int); // r7@10
  void (__fastcall *v77)(int, int, char *, signed int); // r7@10
  void (__fastcall *v78)(int, int, char *, signed int); // r7@10
  void (__fastcall *v79)(int, int, char *, int); // r7@10
  void (__fastcall *v80)(int, int, char *, int); // r7@10
  void (__fastcall *v81)(int, int, char *, int); // r7@10
  void (__fastcall *v82)(int, int, int, signed int); // r7@10
  void (__fastcall *v83)(int, int, int); // r7@10
  int v84; // r3@10
  void (__fastcall *v85)(int, int, char *, signed int); // r7@10
  void (__fastcall *v86)(int, int, char *, signed int); // r7@10
  void (__fastcall *v87)(int, int, char *, int); // r7@10
  int v88; // r3@10
  void (__fastcall *v89)(int, int, char *, int); // r7@10
  int v90; // r3@10
  void (__fastcall *v91)(int, int, int, signed int); // r7@10
  int v92; // r1@10
  void (__fastcall *v93)(int, int, int, int); // r7@10
  void (__fastcall *v94)(int, int, char *, signed int); // r7@10
  void (__fastcall *v95)(int, int, char *, int); // r7@10
  int v96; // r3@10
  void (__fastcall *v97)(int, int, char *, signed int); // r4@10
  void (__fastcall *v98)(int, int, char *, int); // r7@10
  int v99; // r3@10
  void (__fastcall *v100)(int, int, char *, signed int); // r7@10
  void (__fastcall *v101)(int, int, char *, int); // r7@10
  int v102; // r3@10
  void (__fastcall *v103)(int, int, int, signed int); // r12@10
  int v104; // r1@10
  void (__fastcall *v105)(int, int, int); // r5@10
  int v106; // r4@10
  int v107; // r11@10
  void (__fastcall *v108)(int, int, int, signed int); // r6@10
  signed int v109; // r5@10
  int v110; // r2@10
  void (__fastcall *v111)(int, int, int, int); // r12@10
  int v112; // r6@10
  int v113; // r1@10
  int v114; // r11@10
  void (__fastcall *v115)(int, int, char *, signed int); // r7@11
  void (__fastcall *v116)(int, int, char *, signed int); // r7@11
  void (__fastcall *v117)(int, int, char *, int); // r7@11
  int v118; // r3@11
  void (__fastcall *v119)(int, int, char *, int); // r7@11
  int v120; // r3@11
  int v121; // r10@12
  void (__fastcall *v122)(int, int, char *, signed int); // r7@12
  void (__fastcall *v123)(int, int, char *, signed int); // r7@12
  void (__fastcall *v124)(int, int, char *, signed int); // r7@12
  void (__fastcall *v125)(int, int, char *, signed int); // r7@12
  void (__fastcall *v126)(int, int, char *, signed int); // r7@12
  void (__fastcall *v127)(int, int, char *, signed int); // r7@12
  void (__fastcall *v128)(int, int, char *, signed int); // r7@12
  void (__fastcall *v129)(int, int, char *, signed int); // r7@12
  void (__fastcall *v130)(int, int, char *, signed int); // r7@12
  void (__fastcall *v131)(int, int, char *, signed int); // r7@12
  void (__fastcall *v132)(int, int, char *, signed int); // r7@12
  void (__fastcall *v133)(int, int, char *, signed int); // r7@12
  void (__fastcall *v134)(int, int, char *, signed int); // r7@12
  signed int v135; // r1@12
  int v136; // r5@13
  _DWORD *v137; // r9@13
  void (__fastcall *v138)(int, int, char *, int); // r7@14
  void (__fastcall *v139)(int, int, char *, int); // r7@14
  void (__fastcall *v140)(int, int, char *, int); // r7@14
  void (__fastcall *v141)(int, int, char *, int); // r7@14
  void (__fastcall *v142)(int, int, char *, int); // r12@14
  void (__fastcall *v143)(int, int, char *, int); // r12@14
  void (__fastcall *v144)(int, int, char *, int); // r7@14
  void (__fastcall *v145)(int, int, char *, int); // r7@14
  void (__fastcall *v146)(int, int, char *, int); // r7@14
  void (__fastcall *v147)(int, int, char *, int); // r7@14
  void (__fastcall *v148)(int, int, char *, int); // r12@14
  void (__fastcall *v149)(int, int, char *, int); // r12@14
  void (__fastcall *v150)(int, int, char *, int); // r7@14
  void (__fastcall *v151)(int, int, char *, int); // r7@14
  void (__fastcall *v152)(int, int, char *, int); // r12@14
  void (__fastcall *v153)(int, int, char *, int); // r12@14
  void (__fastcall *v154)(int, int, char *, int); // r12@14
  void (__fastcall *v155)(int, int, char *, int); // r7@14
  void (__fastcall *v156)(int, int, char *, int); // r12@14
  void (__fastcall *v157)(int, int, char *, int); // r7@14
  void (__fastcall *v158)(int, int, char *, int); // r7@14
  int v159; // r0@15
  int v160; // r5@16
  _DWORD *v161; // r9@16
  void (__fastcall *v162)(int, int, char *); // r7@17
  void (__fastcall *v163)(int, int, char *, int); // r7@17
  void (__fastcall *v164)(int, int, char *); // r7@17
  void (__fastcall *v165)(int, int, char *, int); // r7@17
  void (__fastcall *v166)(int, int, char *, int); // r7@17
  void (__fastcall *v167)(int, int, char *, int); // r7@17
  void (__fastcall *v168)(int, int, char *, int); // r7@17
  void (__fastcall *v169)(int, int, char *, int); // r7@17
  void (__fastcall *v170)(int, int, char *, int); // r7@17
  void (__fastcall *v171)(int, int, char *, int); // r7@17
  void (__fastcall *v172)(int, int, char *, int); // r7@17
  void (__fastcall *v173)(int, int, char *, int); // r7@17
  void (__fastcall *v174)(int, int, char *, int); // r7@17
  void (__fastcall *v175)(int, int, char *, int); // r7@17
  void (__fastcall *v176)(int, int, char *, int); // r7@17
  void (__fastcall *v177)(int, int, char *, int); // r7@17
  void (__fastcall *v178)(int, int, char *, int); // r7@17
  void (__fastcall *v179)(int, int, char *, int); // r7@17
  void (__fastcall *v180)(int, int, char *, int); // r7@17
  void (__fastcall *v181)(int, int, char *, int); // r7@17
  void (__fastcall *v182)(int, int, char *, int); // r7@17
  int v183; // r1@17
  signed int v184; // r9@18
  void (__fastcall *v185)(int, int, char *, signed int); // r7@18
  void (__fastcall *v186)(int, int, char *, signed int); // r7@18
  void (__fastcall *v187)(int, int, char *, signed int); // r4@18
  void (__fastcall *v188)(int, int, char *, signed int); // r4@18
  void (__fastcall *v189)(int, int, char *, signed int); // r7@18
  void (__fastcall *v190)(int, int, int, signed int); // r4@18
  void (__fastcall *v191)(int, int, int, signed int); // r4@18
  void (__fastcall *v192)(int, int, char *, signed int); // r7@18
  void (__fastcall *v193)(int, int, int, signed int); // r7@18
  void (__fastcall *v194)(int, int, char *, signed int); // r7@18
  void (__fastcall *v195)(int, int, char *, signed int); // r7@18
  void (__fastcall *v196)(int, int, char *, signed int); // r7@18
  void (__fastcall *v197)(int, int, char *, signed int); // r7@18
  void (__fastcall *v198)(int, int, char *, signed int); // r7@18
  void (__fastcall *v199)(int, int, char *, signed int); // r7@18
  void (__fastcall *v200)(int, int, char *, signed int); // r7@18
  void (__fastcall *v201)(int, int, char *, signed int); // r7@18
  void (__fastcall *v202)(int, int, char *, signed int); // r7@18
  void (__fastcall *v203)(int, int, char *, signed int); // r7@18
  void (__fastcall *v204)(int, int, char *, signed int); // r7@18
  void (__fastcall *v205)(int, int, char *, signed int); // r7@18
  void (__fastcall *v206)(int, int, char *, signed int); // r7@18
  void (__fastcall *v207)(int, int, char *, signed int); // r7@18
  void (__fastcall *v208)(int, int, char *, signed int); // r7@18
  void (__fastcall *v209)(int, int, char *, signed int); // r7@18
  void **v210; // r0@18
  unsigned int *v211; // r2@19
  signed int v212; // r1@21
  int (__fastcall *v213)(int, int, int, Random *); // r5@28
  void **v214; // r11@28
  int v215; // ST00_4@28
  int v216; // ST08_4@28
  int v217; // ST0C_4@28
  void *v218; // r0@28
  char v220; // [sp+28h] [bp-1E8h]@10
  Random *v221; // [sp+38h] [bp-1D8h]@1
  int v222; // [sp+3Ch] [bp-1D4h]@18
  char v223; // [sp+54h] [bp-1BCh]@10
  int v224; // [sp+5Ch] [bp-1B4h]@18
  char v225; // [sp+60h] [bp-1B0h]@18
  char v226; // [sp+61h] [bp-1AFh]@18
  char v227; // [sp+64h] [bp-1ACh]@18
  char v228; // [sp+65h] [bp-1ABh]@18
  char v229; // [sp+68h] [bp-1A8h]@18
  char v230; // [sp+69h] [bp-1A7h]@18
  char v231; // [sp+6Ch] [bp-1A4h]@18
  char v232; // [sp+6Dh] [bp-1A3h]@18
  char v233; // [sp+70h] [bp-1A0h]@18
  char v234; // [sp+71h] [bp-19Fh]@18
  char v235; // [sp+74h] [bp-19Ch]@18
  char v236; // [sp+75h] [bp-19Bh]@18
  char v237; // [sp+78h] [bp-198h]@18
  char v238; // [sp+79h] [bp-197h]@18
  char v239; // [sp+7Ch] [bp-194h]@18
  char v240; // [sp+7Dh] [bp-193h]@18
  char v241; // [sp+80h] [bp-190h]@18
  char v242; // [sp+81h] [bp-18Fh]@18
  char v243; // [sp+84h] [bp-18Ch]@18
  char v244; // [sp+85h] [bp-18Bh]@18
  char v245; // [sp+88h] [bp-188h]@18
  char v246; // [sp+89h] [bp-187h]@18
  char v247; // [sp+8Ch] [bp-184h]@18
  char v248; // [sp+8Dh] [bp-183h]@18
  char v249; // [sp+90h] [bp-180h]@18
  char v250; // [sp+91h] [bp-17Fh]@18
  char v251; // [sp+94h] [bp-17Ch]@18
  char v252; // [sp+95h] [bp-17Bh]@18
  char v253; // [sp+98h] [bp-178h]@18
  char v254; // [sp+99h] [bp-177h]@18
  char v255; // [sp+9Ch] [bp-174h]@18
  char v256; // [sp+A0h] [bp-170h]@18
  char v257; // [sp+A4h] [bp-16Ch]@18
  char v258; // [sp+A8h] [bp-168h]@18
  char v259; // [sp+ACh] [bp-164h]@18
  char v260; // [sp+B0h] [bp-160h]@18
  char v261; // [sp+B4h] [bp-15Ch]@18
  char v262; // [sp+B5h] [bp-15Bh]@18
  char v263; // [sp+B8h] [bp-158h]@18
  char v264; // [sp+B9h] [bp-157h]@18
  char v265; // [sp+BCh] [bp-154h]@18
  char v266; // [sp+C0h] [bp-150h]@18
  char v267; // [sp+C4h] [bp-14Ch]@10
  char v268; // [sp+C5h] [bp-14Bh]@10
  char v269; // [sp+C8h] [bp-148h]@10
  char v270; // [sp+C9h] [bp-147h]@10
  char v271; // [sp+CCh] [bp-144h]@10
  char v272; // [sp+CDh] [bp-143h]@10
  char v273; // [sp+D0h] [bp-140h]@10
  char v274; // [sp+D1h] [bp-13Fh]@10
  char v275; // [sp+D4h] [bp-13Ch]@10
  char v276; // [sp+D5h] [bp-13Bh]@10
  char v277; // [sp+D8h] [bp-138h]@10
  char v278; // [sp+D9h] [bp-137h]@10
  char v279; // [sp+DCh] [bp-134h]@10
  char v280; // [sp+DDh] [bp-133h]@10
  char v281; // [sp+E0h] [bp-130h]@10
  char v282; // [sp+E1h] [bp-12Fh]@10
  char v283; // [sp+E4h] [bp-12Ch]@10
  char v284; // [sp+E5h] [bp-12Bh]@10
  char v285; // [sp+E8h] [bp-128h]@10
  char v286; // [sp+E9h] [bp-127h]@10
  char v287; // [sp+ECh] [bp-124h]@10
  char v288; // [sp+EDh] [bp-123h]@10
  char v289; // [sp+F0h] [bp-120h]@10
  char v290; // [sp+F1h] [bp-11Fh]@10
  char v291; // [sp+F4h] [bp-11Ch]@10
  char v292; // [sp+F5h] [bp-11Bh]@10
  char v293; // [sp+F8h] [bp-118h]@10
  char v294; // [sp+F9h] [bp-117h]@10
  char v295; // [sp+FCh] [bp-114h]@10
  char v296; // [sp+FDh] [bp-113h]@10
  char v297; // [sp+100h] [bp-110h]@10
  char v298; // [sp+101h] [bp-10Fh]@10
  char v299; // [sp+104h] [bp-10Ch]@10
  char v300; // [sp+105h] [bp-10Bh]@10
  char v301; // [sp+108h] [bp-108h]@10
  char v302; // [sp+109h] [bp-107h]@10
  char v303; // [sp+10Ch] [bp-104h]@10
  char v304; // [sp+10Dh] [bp-103h]@10
  char v305; // [sp+110h] [bp-100h]@10
  char v306; // [sp+111h] [bp-FFh]@10
  char v307; // [sp+114h] [bp-FCh]@10
  char v308; // [sp+115h] [bp-FBh]@10
  char v309; // [sp+118h] [bp-F8h]@10
  char v310; // [sp+119h] [bp-F7h]@10
  char v311; // [sp+11Ch] [bp-F4h]@10
  char v312; // [sp+120h] [bp-F0h]@10
  char v313; // [sp+124h] [bp-ECh]@10
  char v314; // [sp+128h] [bp-E8h]@10
  char v315; // [sp+12Ch] [bp-E4h]@10
  char v316; // [sp+12Dh] [bp-E3h]@10
  char v317; // [sp+130h] [bp-E0h]@10
  char v318; // [sp+131h] [bp-DFh]@10
  char v319; // [sp+134h] [bp-DCh]@10
  char v320; // [sp+135h] [bp-DBh]@10
  char v321; // [sp+138h] [bp-D8h]@10
  char v322; // [sp+139h] [bp-D7h]@10
  char v323; // [sp+13Ch] [bp-D4h]@10
  char v324; // [sp+13Dh] [bp-D3h]@10
  char v325; // [sp+140h] [bp-D0h]@10
  char v326; // [sp+141h] [bp-CFh]@10
  char v327; // [sp+144h] [bp-CCh]@10
  char v328; // [sp+145h] [bp-CBh]@10
  char v329; // [sp+148h] [bp-C8h]@10
  char v330; // [sp+149h] [bp-C7h]@10
  char v331; // [sp+14Ch] [bp-C4h]@10
  char v332; // [sp+150h] [bp-C0h]@10
  char v333; // [sp+154h] [bp-BCh]@10
  char v334; // [sp+158h] [bp-B8h]@10
  char v335; // [sp+15Ch] [bp-B4h]@10
  char v336; // [sp+160h] [bp-B0h]@10
  char v337; // [sp+164h] [bp-ACh]@10
  char v338; // [sp+168h] [bp-A8h]@10
  char v339; // [sp+16Ch] [bp-A4h]@10
  char v340; // [sp+16Dh] [bp-A3h]@10
  char v341; // [sp+170h] [bp-A0h]@10
  char v342; // [sp+171h] [bp-9Fh]@10
  char v343; // [sp+174h] [bp-9Ch]@10
  char v344; // [sp+175h] [bp-9Bh]@10
  char v345; // [sp+178h] [bp-98h]@10
  char v346; // [sp+179h] [bp-97h]@10
  char v347; // [sp+17Ch] [bp-94h]@10
  char v348; // [sp+17Dh] [bp-93h]@10
  char v349; // [sp+180h] [bp-90h]@10
  char v350; // [sp+181h] [bp-8Fh]@10
  char v351; // [sp+184h] [bp-8Ch]@10
  char v352; // [sp+185h] [bp-8Bh]@10
  char v353; // [sp+188h] [bp-88h]@10
  char v354; // [sp+189h] [bp-87h]@10
  char v355; // [sp+18Ch] [bp-84h]@10
  char v356; // [sp+18Dh] [bp-83h]@10
  char v357; // [sp+190h] [bp-80h]@10
  char v358; // [sp+191h] [bp-7Fh]@10
  char v359; // [sp+194h] [bp-7Ch]@10
  char v360; // [sp+195h] [bp-7Bh]@10
  char v361; // [sp+198h] [bp-78h]@10
  char v362; // [sp+199h] [bp-77h]@10
  char v363; // [sp+19Ch] [bp-74h]@10
  char v364; // [sp+19Dh] [bp-73h]@10
  char v365; // [sp+1A0h] [bp-70h]@10
  char v366; // [sp+1A1h] [bp-6Fh]@10
  char v367; // [sp+1A4h] [bp-6Ch]@10
  char v368; // [sp+1A5h] [bp-6Bh]@10
  char v369; // [sp+1A8h] [bp-68h]@10
  char v370; // [sp+1A9h] [bp-67h]@10
  char v371; // [sp+1ACh] [bp-64h]@10
  char v372; // [sp+1ADh] [bp-63h]@10
  char v373; // [sp+1B0h] [bp-60h]@10
  char v374; // [sp+1B1h] [bp-5Fh]@10
  char v375; // [sp+1B4h] [bp-5Ch]@10
  char v376; // [sp+1B5h] [bp-5Bh]@10
  char v377; // [sp+1B8h] [bp-58h]@10
  char v378; // [sp+1B9h] [bp-57h]@10
  char v379; // [sp+1BCh] [bp-54h]@10
  char v380; // [sp+1BDh] [bp-53h]@10
  char v381; // [sp+1C0h] [bp-50h]@10
  char v382; // [sp+1C1h] [bp-4Fh]@10
  char v383; // [sp+1C4h] [bp-4Ch]@10
  char v384; // [sp+1C5h] [bp-4Bh]@10
  char v385; // [sp+1C8h] [bp-48h]@10
  char v386; // [sp+1C9h] [bp-47h]@10
  char v387; // [sp+1CCh] [bp-44h]@7
  char v388; // [sp+1CDh] [bp-43h]@7
  char v389; // [sp+1D0h] [bp-40h]@2
  char v390; // [sp+1D1h] [bp-3Fh]@2
  char v391; // [sp+1D4h] [bp-3Ch]@2
  char v392; // [sp+1D5h] [bp-3Bh]@2
  char v393; // [sp+1D8h] [bp-38h]@2
  char v394; // [sp+1D9h] [bp-37h]@2
  char v395; // [sp+1DCh] [bp-34h]@2
  char v396; // [sp+1DDh] [bp-33h]@2
  char v397; // [sp+1E0h] [bp-30h]@1
  char v398; // [sp+1E1h] [bp-2Fh]@1
  char v399; // [sp+1E4h] [bp-2Ch]@1
  char v400; // [sp+1E5h] [bp-2Bh]@1
  char v401; // [sp+1E8h] [bp-28h]@10
  char v402; // [sp+1E9h] [bp-27h]@10

  v4 = this;
  v5 = a4;
  v221 = a3;
  v6 = a2;
  v7 = *((_DWORD *)this + 11) - 1;
  v8 = *((_DWORD *)this + 9);
  v9 = *(void (__cdecl **)(DesertPyramidPiece *, BlockSource *, const BoundingBox *, _DWORD, signed int, _DWORD, int, _DWORD))(*(_DWORD *)this + 40);
  v399 = *(_BYTE *)(Block::mSandStone + 4);
  v400 = 0;
  v397 = *(_BYTE *)(Block::mSandStone + 4);
  v398 = 0;
  v9(this, v6, a4, 0, -4, 0, v8 - 1, 0);
  v10 = 1;
  v11 = -3;
  do
  {
    v12 = *(void (__fastcall **)(DesertPyramidPiece *, BlockSource *, const BoundingBox *, signed int))(*(_DWORD *)v4 + 40);
    v13 = *((_DWORD *)v4 + 11);
    v14 = *((_DWORD *)v4 + 9) + v11 + 1;
    v395 = *(_BYTE *)(Block::mSandStone + 4);
    v396 = 0;
    v393 = *(_BYTE *)(Block::mSandStone + 4);
    v394 = 0;
    v12(v4, v6, v5, v10);
    v15 = *((_DWORD *)v4 + 11);
    v16 = *(void (__fastcall **)(DesertPyramidPiece *, BlockSource *, const BoundingBox *, int))(*(_DWORD *)v4 + 40);
    v17 = *((_DWORD *)v4 + 9) + v11;
    v391 = *(_BYTE *)(Block::mAir + 4);
    v392 = 0;
    v389 = *(_BYTE *)(Block::mAir + 4);
    v390 = 0;
    v16(v4, v6, v5, v10 + 1);
    --v11;
    ++v10;
  }
  while ( v10 != 10 );
  v18 = *((_DWORD *)v4 + 9);
  v19 = (int)v5;
  v20 = (int)v4;
  if ( v18 >= 1 )
    v21 = *((_DWORD *)v4 + 11);
    v22 = 0;
    do
    {
      if ( v21 > 0 )
      {
        v23 = 0;
        v24 = v19;
        do
        {
          v25 = *(void (__fastcall **)(int, BlockSource *, char *, signed int))(*(_DWORD *)v20 + 44);
          v387 = *(_BYTE *)(Block::mSandStone + 4);
          v388 = 0;
          v25(v20, v6, &v387, v22);
          v21 = *(_DWORD *)(v20 + 44);
          ++v23;
        }
        while ( v23 < v21 );
        v18 = *(_DWORD *)(v20 + 36);
        v19 = v24;
      }
      ++v22;
    }
    while ( v22 < v18 );
  v26 = StructurePiece::getOrientationData((StructurePiece *)v20, (const Block *)Block::mSandstoneStairs, 3);
  v27 = StructurePiece::getOrientationData((StructurePiece *)v20, (const Block *)Block::mSandstoneStairs, 2);
  v28 = StructurePiece::getOrientationData((StructurePiece *)v20, (const Block *)Block::mSandstoneStairs, 0);
  v29 = StructurePiece::getOrientationData((StructurePiece *)v20, (const Block *)Block::mSandstoneStairs, 1);
  v223 = ColoredBlock::getBlockDataForItemAuxValue((ColoredBlock *)0xE, v30);
  v220 = ColoredBlock::getBlockDataForItemAuxValue((ColoredBlock *)4, v31);
  v32 = (int)v6;
  v33 = v19;
  v34 = *(void (__fastcall **)(int, int, int, _DWORD))(*(_DWORD *)v20 + 40);
  v385 = *(_BYTE *)(Block::mSandStone + 4);
  v386 = 0;
  v383 = *(_BYTE *)(Block::mAir + 4);
  v384 = 0;
  v34(v20, v32, v19, 0);
  v35 = *(void (__fastcall **)(int, int, int, signed int))(*(_DWORD *)v20 + 40);
  v381 = *(_BYTE *)(Block::mSandStone + 4);
  v382 = 0;
  v379 = *(_BYTE *)(Block::mSandStone + 4);
  v380 = 0;
  v35(v20, v32, v19, 1);
  v36 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v20 + 36);
  v401 = *(_BYTE *)(Block::mSandstoneStairs + 4);
  v402 = v26;
  v36(v20, v32, &v401, 2);
  v37 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v20 + 36);
  v402 = v27;
  v37(v20, v32, &v401, 2);
  v38 = *(void (__fastcall **)(int, int, char *, _DWORD))(*(_DWORD *)v20 + 36);
  v402 = v28;
  v38(v20, v32, &v401, 0);
  v39 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v20 + 36);
  v402 = v29;
  v39(v20, v32, &v401, 4);
  v40 = *(_DWORD *)(v20 + 36);
  v41 = *(void (__fastcall **)(int, int, int, int))(*(_DWORD *)v20 + 40);
  v377 = *(_BYTE *)(Block::mSandStone + 4);
  v378 = 0;
  v375 = *(_BYTE *)(Block::mAir + 4);
  v376 = 0;
  v41(v20, v32, v19, v40 - 5);
  v42 = *(_DWORD *)(v20 + 36);
  v43 = *(void (__fastcall **)(int, int, int, int))(*(_DWORD *)v20 + 40);
  v373 = *(_BYTE *)(Block::mSandStone + 4);
  v374 = 0;
  v371 = *(_BYTE *)(Block::mSandStone + 4);
  v372 = 0;
  v43(v20, v32, v19, v42 - 4);
  v44 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v20 + 36);
  v45 = *(_DWORD *)(v20 + 36) - 3;
  v44(v20, v32, &v401, v45);
  v46 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v20 + 36);
  v47 = *(_DWORD *)(v20 + 36) - 3;
  v46(v20, v32, &v401, v47);
  v48 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v20 + 36);
  v49 = *(_DWORD *)(v20 + 36) - 5;
  v48(v20, v32, &v401, v49);
  v50 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v20 + 36);
  v51 = *(_DWORD *)(v20 + 36) - 1;
  v50(v20, v32, &v401, v51);
  v52 = *(void (__fastcall **)(int, int, int, signed int))(*(_DWORD *)v20 + 40);
  v369 = *(_BYTE *)(Block::mSandStone + 4);
  v370 = 0;
  v367 = *(_BYTE *)(Block::mAir + 4);
  v368 = 0;
  v52(v20, v32, v19, 8);
  v53 = *(void (__fastcall **)(int, int, int, signed int))(*(_DWORD *)v20 + 40);
  v365 = *(_BYTE *)(Block::mAir + 4);
  v366 = 0;
  v363 = *(_BYTE *)(Block::mAir + 4);
  v364 = 0;
  v53(v20, v32, v19, 9);
  v54 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v20 + 36);
  v401 = *(_BYTE *)(Block::mSandStone + 4);
  v402 = 2;
  v54(v20, v32, &v401, 9);
  v55 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v20 + 36);
  v55(v20, v32, &v401, 9);
  v56 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v20 + 36);
  v56(v20, v32, &v401, 9);
  v57 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v20 + 36);
  v57(v20, v32, &v401, 10);
  v58 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v20 + 36);
  v58(v20, v32, &v401, 11);
  v59 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v20 + 36);
  v59(v20, v32, &v401, 11);
  v60 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v20 + 36);
  v60(v20, v32, &v401, 11);
  v61 = *(void (__fastcall **)(int, int, int, signed int))(*(_DWORD *)v20 + 40);
  v361 = *(_BYTE *)(Block::mSandStone + 4);
  v362 = 0;
  v359 = *(_BYTE *)(Block::mAir + 4);
  v360 = 0;
  v61(v20, v32, v19, 4);
  v62 = *(void (__fastcall **)(int, int, int, signed int))(*(_DWORD *)v20 + 40);
  v357 = *(_BYTE *)(Block::mAir + 4);
  v358 = 0;
  v355 = *(_BYTE *)(Block::mAir + 4);
  v356 = 0;
  v62(v20, v32, v19, 4);
  v63 = *(void (__fastcall **)(int, int, int, signed int))(*(_DWORD *)v20 + 40);
  v353 = *(_BYTE *)(Block::mSandStone + 4);
  v354 = 0;
  v351 = *(_BYTE *)(Block::mAir + 4);
  v352 = 0;
  v63(v20, v32, v19, 12);
  v64 = *(void (__fastcall **)(int, int, int, signed int))(*(_DWORD *)v20 + 40);
  v349 = *(_BYTE *)(Block::mAir + 4);
  v350 = 0;
  v347 = *(_BYTE *)(Block::mAir + 4);
  v348 = 0;
  v64(v20, v32, v19, 12);
  v65 = *(_DWORD *)(v20 + 44);
  v66 = *(void (__fastcall **)(int, int, int, signed int))(*(_DWORD *)v20 + 40);
  v67 = *(_DWORD *)(v20 + 36) - 6;
  v345 = *(_BYTE *)(Block::mSandStone + 4);
  v346 = 0;
  v343 = *(_BYTE *)(Block::mSandStone + 4);
  v344 = 0;
  v66(v20, v32, v19, 5);
  v68 = *(void (__fastcall **)(int, int, int, signed int))(*(_DWORD *)v20 + 40);
  v341 = *(_BYTE *)(Block::mAir + 4);
  v342 = 0;
  v339 = *(_BYTE *)(Block::mAir + 4);
  v340 = 0;
  v68(v20, v32, v19, 9);
  v338 = *(_BYTE *)(Block::mSandStone + 4);
  v337 = *(_BYTE *)(Block::mSandStone + 4);
  StructurePiece::generateBox(v20, v32, v19, 8, 1, 8, 8, 3, 8, &v338, 2, &v337, 0);
  v336 = *(_BYTE *)(Block::mSandStone + 4);
  v335 = *(_BYTE *)(Block::mSandStone + 4);
  StructurePiece::generateBox(v20, v32, v19, 12, 1, 8, 12, 3, 8, &v336, 2, &v335, 0);
  v334 = *(_BYTE *)(Block::mSandStone + 4);
  v333 = *(_BYTE *)(Block::mSandStone + 4);
  StructurePiece::generateBox(v20, v32, v19, 8, 1, 12, 8, 3, 12, &v334, 2, &v333, 0);
  v332 = *(_BYTE *)(Block::mSandStone + 4);
  v331 = *(_BYTE *)(Block::mSandStone + 4);
  StructurePiece::generateBox(v20, v32, v19, 12, 1, 12, 12, 3, 12, &v332, 2, &v331, 0);
  v69 = *(void (__fastcall **)(int, int, int, signed int))(*(_DWORD *)v20 + 40);
  v329 = *(_BYTE *)(Block::mSandStone + 4);
  v330 = 0;
  v327 = *(_BYTE *)(Block::mSandStone + 4);
  v328 = 0;
  v69(v20, v32, v33, 1);
  v70 = *(_DWORD *)(v20 + 36);
  v71 = *(void (__fastcall **)(int, int, int, int))(*(_DWORD *)v20 + 40);
  v325 = *(_BYTE *)(Block::mSandStone + 4);
  v326 = 0;
  v323 = *(_BYTE *)(Block::mSandStone + 4);
  v324 = 0;
  v71(v20, v32, v33, v70 - 5);
  v72 = *(void (__fastcall **)(int, int, int, signed int))(*(_DWORD *)v20 + 40);
  v321 = *(_BYTE *)(Block::mSandStone + 4);
  v322 = 0;
  v319 = *(_BYTE *)(Block::mSandStone + 4);
  v320 = 0;
  v72(v20, v32, v33, 6);
  v73 = *(_DWORD *)(v20 + 36);
  v74 = *(void (__fastcall **)(int, int, int))(*(_DWORD *)v20 + 40);
  v317 = *(_BYTE *)(Block::mSandStone + 4);
  v318 = 0;
  v315 = *(_BYTE *)(Block::mSandStone + 4);
  v316 = 0;
  v74(v20, v32, v33);
  v314 = *(_BYTE *)(Block::mSandStone + 4);
  v313 = *(_BYTE *)(Block::mSandStone + 4);
  StructurePiece::generateBox(v20, v32, v33, 5, 5, 9, 5, 7, 11, &v314, 2, &v313, 2);
  v75 = *(_DWORD *)(v20 + 36) - 6;
  v312 = *(_BYTE *)(Block::mSandStone + 4);
  v311 = *(_BYTE *)(Block::mSandStone + 4);
  StructurePiece::generateBox(v20, v32, v33, v75, 5, 9, v75, 7, 11, &v312, 2, &v311, 2);
  v76 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v20 + 36);
  v309 = *(_BYTE *)(Block::mAir + 4);
  v310 = 0;
  v76(v20, v32, &v309, 5);
  v77 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v20 + 36);
  v307 = *(_BYTE *)(Block::mAir + 4);
  v308 = 0;
  v77(v20, v32, &v307, 5);
  v78 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v20 + 36);
  v305 = *(_BYTE *)(Block::mAir + 4);
  v306 = 0;
  v78(v20, v32, &v305, 6);
  v79 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v20 + 36);
  v303 = *(_BYTE *)(Block::mAir + 4);
  v304 = 0;
  v79(v20, v32, &v303, *(_DWORD *)(v20 + 36) - 6);
  v80 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v20 + 36);
  v301 = *(_BYTE *)(Block::mAir + 4);
  v302 = 0;
  v80(v20, v32, &v301, *(_DWORD *)(v20 + 36) - 6);
  v81 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v20 + 36);
  v299 = *(_BYTE *)(Block::mAir + 4);
  v300 = 0;
  v81(v20, v32, &v299, *(_DWORD *)(v20 + 36) - 7);
  v82 = *(void (__fastcall **)(int, int, int, signed int))(*(_DWORD *)v20 + 40);
  v297 = *(_BYTE *)(Block::mAir + 4);
  v298 = 0;
  v295 = *(_BYTE *)(Block::mAir + 4);
  v296 = 0;
  v82(v20, v32, v33, 2);
  v83 = *(void (__fastcall **)(int, int, int))(*(_DWORD *)v20 + 40);
  v84 = *(_DWORD *)(v20 + 36) - 3;
  v293 = *(_BYTE *)(Block::mAir + 4);
  v294 = 0;
  v291 = *(_BYTE *)(Block::mAir + 4);
  v292 = 0;
  v83(v20, v32, v33);
  v85 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v20 + 36);
  v85(v20, v32, &v401, 2);
  v86 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v20 + 36);
  v86(v20, v32, &v401, 2);
  v87 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v20 + 36);
  v88 = *(_DWORD *)(v20 + 36) - 3;
  v87(v20, v32, &v401, v88);
  v89 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v20 + 36);
  v90 = *(_DWORD *)(v20 + 36) - 3;
  v89(v20, v32, &v401, v90);
  v91 = *(void (__fastcall **)(int, int, int, signed int))(*(_DWORD *)v20 + 40);
  v289 = *(_BYTE *)(Block::mSandStone + 4);
  v290 = 0;
  v287 = *(_BYTE *)(Block::mSandStone + 4);
  v288 = 0;
  v91(v20, v32, v33, 1);
  v92 = *(_DWORD *)(v20 + 36);
  v93 = *(void (__fastcall **)(int, int, int, int))(*(_DWORD *)v20 + 40);
  v285 = *(_BYTE *)(Block::mSandStone + 4);
  v286 = 0;
  v283 = *(_BYTE *)(Block::mSandStone + 4);
  v284 = 0;
  v93(v20, v32, v33, v92 - 3);
  v94 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v20 + 36);
  v402 = 0;
  v94(v20, v32, &v401, 1);
  v95 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v20 + 36);
  v96 = *(_DWORD *)(v20 + 36) - 2;
  v95(v20, v32, &v401, v96);
  v97 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v20 + 36);
  v401 = *(_BYTE *)(Block::mStoneSlab + 4);
  v402 = 1;
  v97(v20, v32, &v401, 1);
  v98 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v20 + 36);
  v99 = *(_DWORD *)(v20 + 36) - 2;
  v98(v20, v32, &v401, v99);
  v100 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v20 + 36);
  v100(v20, v32, &v401, 2);
  v101 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v20 + 36);
  v102 = *(_DWORD *)(v20 + 36) - 3;
  v101(v20, v32, &v401, v102);
  v103 = *(void (__fastcall **)(int, int, int, signed int))(*(_DWORD *)v20 + 40);
  v281 = *(_BYTE *)(Block::mSandStone + 4);
  v282 = 0;
  v279 = *(_BYTE *)(Block::mSandStone + 4);
  v280 = 0;
  v103(v20, v32, v33, 4);
  v104 = *(_DWORD *)(v20 + 36);
  v105 = *(void (__fastcall **)(int, int, int))(*(_DWORD *)v20 + 40);
  v277 = *(_BYTE *)(Block::mSandStone + 4);
  v278 = 0;
  v275 = *(_BYTE *)(Block::mSandStone + 4);
  v276 = 0;
  v106 = v20;
  v107 = v32;
  v105(v106, v32, v33);
  v108 = *(void (__fastcall **)(int, int, int, signed int))(*(_DWORD *)v106 + 40);
  v273 = *(_BYTE *)(Block::mAir + 4);
  v274 = 0;
  v271 = *(_BYTE *)(Block::mAir + 4);
  v272 = 0;
  v108(v106, v107, v33, 3);
  v109 = 5;
  v110 = *(_DWORD *)(v106 + 36);
  v111 = *(void (__fastcall **)(int, int, int, int))(*(_DWORD *)v106 + 40);
  v269 = *(_BYTE *)(Block::mAir + 4);
  v270 = 0;
  v112 = v107;
  v267 = *(_BYTE *)(Block::mAir + 4);
  v268 = 0;
  v113 = v107;
  v114 = v33;
  v111(v106, v113, v33, v110 - 6);
    v115 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v106 + 36);
    v401 = *(_BYTE *)(Block::mSandStone + 4);
    v402 = 2;
    v115(v106, v112, &v401, 4);
    v116 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v106 + 36);
    v402 = 1;
    v116(v106, v112, &v401, 4);
    v117 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
    v118 = *(_DWORD *)(v106 + 36) - 5;
    v117(v106, v112, &v401, v118);
    v119 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
    v120 = *(_DWORD *)(v106 + 36) - 5;
    v119(v106, v112, &v401, v120);
    v109 += 2;
  while ( v109 < 18 );
  v121 = v106;
  v122 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v106 + 36);
  v401 = *(_BYTE *)(Block::mStainedClay + 4);
  v402 = v223;
  v122(v106, v112, &v401, 10);
  v123 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v106 + 36);
  v123(v106, v112, &v401, 10);
  v124 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v106 + 36);
  v124(v106, v112, &v401, 9);
  v125 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v106 + 36);
  v125(v106, v112, &v401, 11);
  v126 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v106 + 36);
  v126(v106, v112, &v401, 8);
  v127 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v106 + 36);
  v127(v106, v112, &v401, 12);
  v128 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v106 + 36);
  v128(v106, v112, &v401, 7);
  v129 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v106 + 36);
  v129(v106, v112, &v401, 13);
  v130 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v106 + 36);
  v130(v106, v112, &v401, 9);
  v131 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v106 + 36);
  v131(v106, v112, &v401, 11);
  v132 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v106 + 36);
  v132(v106, v112, &v401, 10);
  v133 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v106 + 36);
  v133(v106, v112, &v401, 10);
  v134 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v106 + 36);
  v402 = v220;
  v134(v106, v112, &v401, 10);
  v135 = *(_DWORD *)(v106 + 36);
  if ( v135 >= 1 )
    v136 = 0;
    v137 = &Block::mSandStone;
      v138 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v401 = *(_BYTE *)(*v137 + 4);
      v402 = 2;
      v138(v106, v112, &v401, v136);
      v139 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v401 = *(_BYTE *)(Block::mStainedClay + 4);
      v402 = v223;
      v139(v106, v112, &v401, v136);
      v140 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v140(v106, v112, &v401, v136);
      v141 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v141(v106, v112, &v401, v136);
      v142 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v142(v106, v112, &v401, v136);
      v143 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v401 = *(_BYTE *)(Block::mSandStone + 4);
      v143(v106, v112, &v401, v136);
      v144 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v144(v106, v112, &v401, v136);
      v145 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v402 = 1;
      v145(v106, v112, &v401, v136);
      v146 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v146(v106, v112, &v401, v136);
      v147 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v147(v106, v112, &v401, v136);
      v148 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v148(v106, v112, &v401, v136);
      v149 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v149(v106, v112, &v401, v136);
      v150 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v150(v106, v112, &v401, v136);
      v151 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v151(v106, v112, &v401, v136);
      v152 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v152(v106, v112, &v401, v136);
      v153 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v153(v106, v112, &v401, v136);
      v154 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v154(v106, v112, &v401, v136);
      v155 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v155(v106, v112, &v401, v136);
      v156 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v156(v106, v112, &v401, v136);
      v137 = &Block::mSandStone;
      v157 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v157(v106, v112, &v401, v136);
      v158 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v158(v106, v112, &v401, v136);
      v135 = *(_DWORD *)(v106 + 36);
      v136 = v136 + v135 - 1;
    while ( v136 < v135 );
  v159 = Block::mSandStone;
  if ( v135 - 3 >= 2 )
    v160 = 2;
    v161 = &Block::mSandStone;
      v162 = *(void (__fastcall **)(int, int, char *))(*(_DWORD *)v106 + 36);
      v401 = *(_BYTE *)(v159 + 4);
      v162(v106, v112, &v401);
      v163 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v163(v106, v112, &v401, v160);
      v164 = *(void (__fastcall **)(int, int, char *))(*(_DWORD *)v106 + 36);
      v401 = *(_BYTE *)(*v161 + 4);
      v164(v106, v112, &v401);
      v165 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v165(v106, v112, &v401, v160 - 1);
      v166 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v166(v106, v112, &v401, v160);
      v167 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v167(v106, v112, &v401, v160 + 1);
      v168 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v168(v106, v112, &v401, v160 - 1);
      v169 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v169(v106, v112, &v401, v160);
      v170 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v170(v106, v112, &v401, v160 + 1);
      v171 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v171(v106, v112, &v401, v160 - 1);
      v172 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v172(v106, v112, &v401, v160);
      v173 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v173(v106, v112, &v401, v160 + 1);
      v174 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v174(v106, v112, &v401, v160 - 1);
      v175 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v175(v106, v112, &v401, v160);
      v176 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v176(v106, v112, &v401, v160 + 1);
      v177 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v177(v106, v112, &v401, v160 - 1);
      v178 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v178(v106, v112, &v401, v160);
      v179 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v179(v106, v112, &v401, v160 + 1);
      v180 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v180(v106, v112, &v401, v160 - 1);
      v181 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v181(v106, v112, &v401, v160);
      v182 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v106 + 36);
      v182(v106, v112, &v401, v160 + 1);
      v183 = *(_DWORD *)(v106 + 36);
      v159 = Block::mSandStone;
      v161 = &Block::mSandStone;
      v160 = v160 + v183 - 5;
    while ( v160 <= v183 - 3 );
  v184 = 0;
  v266 = *(_BYTE *)(v159 + 4);
  v265 = *(_BYTE *)(v159 + 4);
  StructurePiece::generateBox(v106, v112, v114, 8, 4, 0, 12, 6, 0, &v266, 2, &v265, 2);
  v222 = v114;
  v185 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v106 + 36);
  v263 = *(_BYTE *)(Block::mAir + 4);
  v264 = 0;
  v185(v106, v112, &v263, 8);
  v186 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v106 + 36);
  v261 = *(_BYTE *)(Block::mAir + 4);
  v262 = 0;
  v186(v106, v112, &v261, 12);
  v187 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v106 + 36);
  v187(v121, v112, &v401, 9);
  v188 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v121 + 36);
  v188(v121, v112, &v401, 10);
  v189 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v121 + 36);
  v189(v121, v112, &v401, 11);
  v260 = *(_BYTE *)(Block::mSandStone + 4);
  v259 = *(_BYTE *)(Block::mSandStone + 4);
  StructurePiece::generateBox(v121, v112, v114, 8, -14, 8, 12, -11, 12, &v260, 2, &v259, 2);
  v258 = *(_BYTE *)(Block::mSandStone + 4);
  v257 = *(_BYTE *)(Block::mSandStone + 4);
  StructurePiece::generateBox(v121, v112, v114, 8, -10, 8, 12, -10, 12, &v258, 1, &v257, 1);
  v256 = *(_BYTE *)(Block::mSandStone + 4);
  v255 = *(_BYTE *)(Block::mSandStone + 4);
  StructurePiece::generateBox(v121, v112, v114, 8, -9, 8, 12, -9, 12, &v256, 2, &v255, 2);
  v190 = *(void (__fastcall **)(int, int, int, signed int))(*(_DWORD *)v121 + 40);
  v253 = *(_BYTE *)(Block::mSandStone + 4);
  v254 = 0;
  v251 = *(_BYTE *)(Block::mSandStone + 4);
  v252 = 0;
  v190(v121, v112, v114, 8);
  v191 = *(void (__fastcall **)(int, int, int, signed int))(*(_DWORD *)v121 + 40);
  v249 = *(_BYTE *)(Block::mAir + 4);
  v250 = 0;
  v247 = *(_BYTE *)(Block::mAir + 4);
  v248 = 0;
  v191(v121, v112, v114, 9);
  v192 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v121 + 36);
  v245 = *(_BYTE *)(Block::mStonePressurePlate + 4);
  v246 = 0;
  v192(v121, v112, &v245, 10);
  v193 = *(void (__fastcall **)(int, int, int, signed int))(*(_DWORD *)v121 + 40);
  v243 = *(_BYTE *)(Block::mTNT + 4);
  v244 = 0;
  v241 = *(_BYTE *)(Block::mAir + 4);
  v242 = 0;
  v193(v121, v112, v114, 9);
  v194 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v121 + 36);
  v239 = *(_BYTE *)(Block::mAir + 4);
  v240 = 0;
  v194(v121, v112, &v239, 8);
  v195 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v121 + 36);
  v237 = *(_BYTE *)(Block::mAir + 4);
  v238 = 0;
  v195(v121, v112, &v237, 8);
  v196 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v121 + 36);
  v196(v121, v112, &v401, 7);
  v197 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v121 + 36);
  v197(v121, v112, &v401, 7);
  v198 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v121 + 36);
  v235 = *(_BYTE *)(Block::mAir + 4);
  v236 = 0;
  v198(v121, v112, &v235, 12);
  v199 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v121 + 36);
  v233 = *(_BYTE *)(Block::mAir + 4);
  v234 = 0;
  v199(v121, v112, &v233, 12);
  v200 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v121 + 36);
  v200(v121, v112, &v401, 13);
  v201 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v121 + 36);
  v201(v121, v112, &v401, 13);
  v202 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v121 + 36);
  v231 = *(_BYTE *)(Block::mAir + 4);
  v232 = 0;
  v202(v121, v112, &v231, 10);
  v203 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v121 + 36);
  v229 = *(_BYTE *)(Block::mAir + 4);
  v230 = 0;
  v203(v121, v112, &v229, 10);
  v204 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v121 + 36);
  v204(v121, v112, &v401, 10);
  v205 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v121 + 36);
  v205(v121, v112, &v401, 10);
  v206 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v121 + 36);
  v227 = *(_BYTE *)(Block::mAir + 4);
  v228 = 0;
  v206(v121, v112, &v227, 10);
  v207 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v121 + 36);
  v225 = *(_BYTE *)(Block::mAir + 4);
  v226 = 0;
  v207(v121, v112, &v225, 10);
  v208 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v121 + 36);
  v208(v121, v112, &v401, 10);
  v209 = *(void (__fastcall **)(int, int, char *, signed int))(*(_DWORD *)v121 + 36);
  v209(v121, v112, &v401, 10);
  v210 = (void **)&v224;
    if ( !*(_BYTE *)(v121 + v184 + 52) )
      v213 = *(int (__fastcall **)(int, int, int, Random *))(*(_DWORD *)v121 + 48);
      v214 = v210;
      sub_21E94B4(v210, "loot_tables/chests/desert_pyramid.json");
      v215 = 2 * Direction::STEP_X[v184] + 10;
      v216 = 2 * Direction::STEP_Z[v184] + 10;
      v217 = dword_2610AAC[v184];
      *(_BYTE *)(v121 + v184 + 52) = v213(v121, v112, v222, v221);
      v218 = (void *)(v224 - 12);
      if ( (int *)(v224 - 12) != &dword_28898C0 )
        v211 = (unsigned int *)(v224 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v212 = __ldrex(v211);
          while ( __strex(v212 - 1, v211) );
        else
          v212 = (*v211)--;
        if ( v212 <= 0 )
          j_j_j_j__ZdlPv_9(v218);
      v210 = v214;
    ++v184;
  while ( v184 < 4 );
  return 1;
}


int __fastcall DesertPyramidPiece::DesertPyramidPiece(int result, int a2, int a3)
{
  int v3; // r4@1

  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 48) = -1;
  *(_DWORD *)(result + 36) = 21;
  *(_DWORD *)(result + 40) = 15;
  *(_DWORD *)(result + 44) = 21;
  *(_DWORD *)(result + 28) = 0;
  v3 = result + 8;
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)v3 = 64;
  *(_DWORD *)(v3 + 4) = a3;
  *(_DWORD *)(v3 + 8) = a2 + 20;
  *(_DWORD *)(result + 20) = 78;
  *(_DWORD *)(result + 24) = a3 + 20;
  *(_DWORD *)result = &off_2719284;
  *(_DWORD *)(result + 52) = 0;
  return result;
}
