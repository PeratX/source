

_DWORD *__fastcall BiomeDecorator::BiomeDecorator(_DWORD *a1)
{
  _DWORD *v1; // r4@1
  ClayFeature **v2; // r5@1
  ClayFeature *v3; // r7@1
  ClayFeature *v4; // r0@1
  int v5; // r6@3
  Feature *v6; // r7@3
  int v7; // r0@3
  int v8; // r6@5
  Feature *v9; // r7@5
  int v10; // r0@5
  int v11; // r6@7
  Feature *v12; // r7@7
  int v13; // r0@7
  int v14; // r6@9
  Feature *v15; // r7@9
  int v16; // r0@9
  int v17; // r6@11
  Feature *v18; // r7@11
  int v19; // r0@11
  int v20; // r6@13
  Feature *v21; // r7@13
  int v22; // r0@13
  int v23; // r6@15
  Feature *v24; // r7@15
  int v25; // r0@15
  int v26; // r6@17
  Feature *v27; // r7@17
  int v28; // r0@17
  int v29; // r6@19
  Feature *v30; // r7@19
  int v31; // r0@19
  int v32; // r6@21
  Feature *v33; // r7@21
  int v34; // r0@21
  int v35; // r6@23
  Feature *v36; // r7@23
  int v37; // r0@23
  int v38; // r6@25
  Feature *v39; // r7@25
  int v40; // r0@25
  int v41; // r6@27
  Feature *v42; // r7@27
  int v43; // r0@27
  int v44; // r6@29
  Feature *v45; // r7@29
  int v46; // r0@29
  int v47; // r6@31
  Feature *v48; // r7@31
  int v49; // r0@31
  int v50; // r6@33
  Feature *v51; // r7@33
  int v52; // r0@33
  HugeMushroomFeature *v53; // r7@35
  int v54; // r0@35
  _DWORD *v55; // r0@37
  _DWORD *v56; // r7@37
  int v57; // r0@37
  _DWORD *v58; // r0@39
  _DWORD *v59; // r7@39
  int v60; // r0@39
  _DWORD *v61; // r0@41
  _DWORD *v62; // r7@41
  int v63; // r0@41
  _DWORD *v64; // r0@43
  _DWORD *v65; // r7@43
  int v66; // r0@43
  int v67; // r6@45
  Feature *v68; // r7@45
  int v69; // r0@45
  int v70; // r6@47
  Feature *v71; // r7@47
  int v72; // r0@47
  _DWORD *v73; // r0@49
  _DWORD *v74; // r7@49
  int v75; // r0@49
  _DWORD *v76; // r0@51
  _DWORD *v77; // r7@51
  int v78; // r0@51
  _DWORD *v79; // r0@53
  _DWORD *v80; // r7@53
  int v81; // r0@53
  TreeFeature *v82; // r7@55
  int v83; // r0@55
  SpruceFeature *v84; // r7@57
  int v85; // r0@57
  BirchFeature *v86; // r7@59
  int v87; // r0@59
  RoofTreeFeature *v88; // r7@61
  int v89; // r0@61
  _DWORD *v90; // r0@63
  _DWORD *v91; // r7@63
  int v92; // r0@63
  PineFeature *v93; // r7@65
  int v94; // r0@65
  MegaPineTreeFeature *v95; // r7@67
  int v96; // r0@67
  MegaPineTreeFeature *v97; // r7@69
  int v98; // r0@69
  int v99; // r6@71
  Feature *v100; // r7@71
  int v101; // r0@71
  int v102; // r6@73
  Feature *v103; // r7@73
  int v104; // r0@73
  FancyTreeFeature *v105; // r7@75
  int v106; // r0@75
  int v107; // r6@77
  Feature *v108; // r7@77
  int v109; // r0@77
  SwampTreeFeature *v110; // r7@79
  int v111; // r0@79
  _DWORD *v112; // r0@81
  _DWORD *v113; // r7@81
  int v114; // r0@81
  IcePatchFeature *v115; // r7@83
  int v116; // r0@83
  GroundBushFeature *v117; // r7@85
  int v118; // r0@85
  JungleTreeFeature *v119; // r7@87
  int v120; // r0@87
  MegaJungleTreeFeature *v121; // r7@89
  int v122; // r0@89
  _DWORD *v123; // r0@91
  _DWORD *v124; // r7@91
  int v125; // r0@91
  _DWORD *v126; // r0@93
  _DWORD *v127; // r7@93
  int v128; // r0@93
  SavannaTreeFeature *v129; // r7@95
  int v130; // r0@95
  BirchFeature *v131; // r7@97
  int v132; // r0@97
  char v134; // [sp+8h] [bp-68h]@3
  char v135; // [sp+Ch] [bp-64h]@5
  char v136; // [sp+10h] [bp-60h]@7
  char v137; // [sp+14h] [bp-5Ch]@9
  char v138; // [sp+18h] [bp-58h]@11
  char v139; // [sp+1Ch] [bp-54h]@13
  char v140; // [sp+20h] [bp-50h]@15
  char v141; // [sp+24h] [bp-4Ch]@17
  char v142; // [sp+28h] [bp-48h]@19
  char v143; // [sp+2Ch] [bp-44h]@21
  char v144; // [sp+30h] [bp-40h]@23
  char v145; // [sp+34h] [bp-3Ch]@25
  char v146; // [sp+38h] [bp-38h]@27
  char v147; // [sp+3Ch] [bp-34h]@29
  char v148; // [sp+40h] [bp-30h]@31
  char v149; // [sp+44h] [bp-2Ch]@33
  char v150; // [sp+48h] [bp-28h]@45
  char v151; // [sp+4Ch] [bp-24h]@47
  char v152; // [sp+50h] [bp-20h]@71
  char v153; // [sp+54h] [bp-1Ch]@73
  char v154; // [sp+58h] [bp-18h]@77

  v1 = a1;
  v2 = (ClayFeature **)(a1 + 1);
  *a1 = &off_2703CF0;
  _aeabi_memclr4(a1 + 1, 208);
  v1[53] = 2;
  v1[54] = 1;
  v1[57] = 0;
  v1[58] = 0;
  v1[55] = 0;
  v1[56] = 0;
  v1[59] = 1;
  v1[60] = 3;
  v1[61] = 1;
  v1[62] = 0;
  *((_BYTE *)v1 + 252) = 1;
  v3 = (ClayFeature *)operator new(0x10u);
  ClayFeature::ClayFeature(v3, 4);
  v4 = *v2;
  *v2 = v3;
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  v5 = Block::mSand;
  v6 = (Feature *)operator new(0x14u);
  v134 = *(_BYTE *)(v5 + 4);
  SandFeature::SandFeature(v6, &v134, 7);
  v7 = v1[2];
  v1[2] = v6;
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
  v8 = Block::mGravel;
  v9 = (Feature *)operator new(0x14u);
  v135 = *(_BYTE *)(v8 + 4);
  SandFeature::SandFeature(v9, &v135, 6);
  v10 = v1[3];
  v1[3] = v9;
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  v11 = Block::mDirt;
  v12 = (Feature *)operator new(0x1Cu);
  v136 = *(_BYTE *)(v11 + 4);
  OreFeature::OreFeature(v12, &v136, 33);
  v13 = v1[4];
  v1[4] = v12;
  if ( v13 )
    (*(void (**)(void))(*(_DWORD *)v13 + 4))();
  v14 = Block::mGravel;
  v15 = (Feature *)operator new(0x1Cu);
  v137 = *(_BYTE *)(v14 + 4);
  OreFeature::OreFeature(v15, &v137, 33);
  v16 = v1[5];
  v1[5] = v15;
  if ( v16 )
    (*(void (**)(void))(*(_DWORD *)v16 + 4))();
  v17 = Block::mStone;
  v18 = (Feature *)operator new(0x1Cu);
  v138 = *(_BYTE *)(v17 + 4);
  OreFeature::OreFeature(v18, &v138, 1, 33);
  v19 = v1[6];
  v1[6] = v18;
  if ( v19 )
    (*(void (**)(void))(*(_DWORD *)v19 + 4))();
  v20 = Block::mStone;
  v21 = (Feature *)operator new(0x1Cu);
  v139 = *(_BYTE *)(v20 + 4);
  OreFeature::OreFeature(v21, &v139, 3, 33);
  v22 = v1[7];
  v1[7] = v21;
  if ( v22 )
    (*(void (**)(void))(*(_DWORD *)v22 + 4))();
  v23 = Block::mStone;
  v24 = (Feature *)operator new(0x1Cu);
  v140 = *(_BYTE *)(v23 + 4);
  OreFeature::OreFeature(v24, &v140, 5, 33);
  v25 = v1[8];
  v1[8] = v24;
  if ( v25 )
    (*(void (**)(void))(*(_DWORD *)v25 + 4))();
  v26 = Block::mCoalOre;
  v27 = (Feature *)operator new(0x1Cu);
  v141 = *(_BYTE *)(v26 + 4);
  OreFeature::OreFeature(v27, &v141, 17);
  v28 = v1[9];
  v1[9] = v27;
  if ( v28 )
    (*(void (**)(void))(*(_DWORD *)v28 + 4))();
  v29 = Block::mIronOre;
  v30 = (Feature *)operator new(0x1Cu);
  v142 = *(_BYTE *)(v29 + 4);
  OreFeature::OreFeature(v30, &v142, 9);
  v31 = v1[10];
  v1[10] = v30;
  if ( v31 )
    (*(void (**)(void))(*(_DWORD *)v31 + 4))();
  v32 = Block::mGoldOre;
  v33 = (Feature *)operator new(0x1Cu);
  v143 = *(_BYTE *)(v32 + 4);
  OreFeature::OreFeature(v33, &v143, 9);
  v34 = v1[11];
  v1[11] = v33;
  if ( v34 )
    (*(void (**)(void))(*(_DWORD *)v34 + 4))();
  v35 = Block::mRedStoneOre;
  v36 = (Feature *)operator new(0x1Cu);
  v144 = *(_BYTE *)(v35 + 4);
  OreFeature::OreFeature(v36, &v144, 8);
  v37 = v1[12];
  v1[12] = v36;
  if ( v37 )
    (*(void (**)(void))(*(_DWORD *)v37 + 4))();
  v38 = Block::mDiamondOre;
  v39 = (Feature *)operator new(0x1Cu);
  v145 = *(_BYTE *)(v38 + 4);
  OreFeature::OreFeature(v39, &v145, 8);
  v40 = v1[13];
  v1[13] = v39;
  if ( v40 )
    (*(void (**)(void))(*(_DWORD *)v40 + 4))();
  v41 = Block::mLapisOre;
  v42 = (Feature *)operator new(0x1Cu);
  v146 = *(_BYTE *)(v41 + 4);
  OreFeature::OreFeature(v42, &v146, 7);
  v43 = v1[14];
  v1[14] = v42;
  if ( v43 )
    (*(void (**)(void))(*(_DWORD *)v43 + 4))();
  v44 = Block::mYellowFlower;
  v45 = (Feature *)operator new(0x10u);
  v147 = *(_BYTE *)(v44 + 4);
  FlowerFeature::FlowerFeature(v45, &v147);
  v46 = v1[15];
  v1[15] = v45;
  if ( v46 )
    (*(void (**)(void))(*(_DWORD *)v46 + 4))();
  v47 = Block::mBrownMushroom;
  v48 = (Feature *)operator new(0x10u);
  v148 = *(_BYTE *)(v47 + 4);
  FlowerFeature::FlowerFeature(v48, &v148);
  v49 = v1[16];
  v1[16] = v48;
  if ( v49 )
    (*(void (**)(void))(*(_DWORD *)v49 + 4))();
  v50 = Block::mRedMushroom;
  v51 = (Feature *)operator new(0x10u);
  v149 = *(_BYTE *)(v50 + 4);
  FlowerFeature::FlowerFeature(v51, &v149);
  v52 = v1[17];
  v1[17] = v51;
  if ( v52 )
    (*(void (**)(void))(*(_DWORD *)v52 + 4))();
  v53 = (HugeMushroomFeature *)operator new(0x10u);
  HugeMushroomFeature::HugeMushroomFeature(v53);
  v54 = v1[18];
  v1[18] = v53;
  if ( v54 )
    (*(void (**)(void))(*(_DWORD *)v54 + 4))();
  v55 = operator new(0xCu);
  v56 = v55;
  *v55 = 0;
  v55[1] = 0;
  v55[2] = 0;
  Feature::Feature((Feature *)v55, 0);
  *v56 = &off_2718BB8;
  v57 = v1[19];
  v1[19] = v56;
  if ( v57 )
    (*(void (**)(void))(*(_DWORD *)v57 + 4))();
  v58 = operator new(0xCu);
  v59 = v58;
  *v58 = 0;
  v58[1] = 0;
  v58[2] = 0;
  Feature::Feature((Feature *)v58, 0);
  *v59 = &off_27189EC;
  v60 = v1[20];
  v1[20] = v59;
  if ( v60 )
    (*(void (**)(void))(*(_DWORD *)v60 + 4))();
  v61 = operator new(0xCu);
  v62 = v61;
  *v61 = 0;
  v61[1] = 0;
  v61[2] = 0;
  Feature::Feature((Feature *)v61, 0);
  *v62 = &off_2718C94;
  v63 = v1[21];
  v1[21] = v62;
  if ( v63 )
    (*(void (**)(void))(*(_DWORD *)v63 + 4))();
  v64 = operator new(0xCu);
  v65 = v64;
  *v64 = 0;
  v64[1] = 0;
  v64[2] = 0;
  Feature::Feature((Feature *)v64, 0);
  *v65 = &off_2718BA4;
  v66 = v1[22];
  v1[22] = v65;
  if ( v66 )
    (*(void (**)(void))(*(_DWORD *)v66 + 4))();
  v67 = Block::mFlowingWater;
  v68 = (Feature *)operator new(0x10u);
  v150 = *(_BYTE *)(v67 + 4);
  SpringFeature::SpringFeature(v68, &v150);
  v69 = v1[24];
  v1[24] = v68;
  if ( v69 )
    (*(void (**)(void))(*(_DWORD *)v69 + 4))();
  v70 = Block::mFlowingLava;
  v71 = (Feature *)operator new(0x10u);
  v151 = *(_BYTE *)(v70 + 4);
  SpringFeature::SpringFeature(v71, &v151);
  v72 = v1[23];
  v1[23] = v71;
  if ( v72 )
    (*(void (**)(void))(*(_DWORD *)v72 + 4))();
  v73 = operator new(0xCu);
  v74 = v73;
  *v73 = 0;
  v73[1] = 0;
  v73[2] = 0;
  Feature::Feature((Feature *)v73, 0);
  *v74 = &off_2718A14;
  v75 = v1[25];
  v1[25] = v74;
  if ( v75 )
    (*(void (**)(void))(*(_DWORD *)v75 + 4))();
  v76 = operator new(0xCu);
  v77 = v76;
  *v76 = 0;
  v76[1] = 0;
  v76[2] = 0;
  Feature::Feature((Feature *)v76, 0);
  *v77 = &off_2718A28;
  v78 = v1[26];
  v1[26] = v77;
  if ( v78 )
    (*(void (**)(void))(*(_DWORD *)v78 + 4))();
  v79 = operator new(0xCu);
  v80 = v79;
  *v79 = 0;
  v79[1] = 0;
  v79[2] = 0;
  Feature::Feature((Feature *)v79, 0);
  *v80 = &off_2718AB4;
  v81 = v1[27];
  v1[27] = v80;
  if ( v81 )
    (*(void (**)(void))(*(_DWORD *)v81 + 4))();
  v82 = (TreeFeature *)operator new(0x18u);
  TreeFeature::TreeFeature(v82, 0, 0, 0, 0);
  *(_DWORD *)v82 = &off_2703D08;
  v83 = v1[28];
  v1[28] = v82;
  if ( v83 )
    (*(void (**)(void))(*(_DWORD *)v83 + 4))();
  v84 = (SpruceFeature *)operator new(0x18u);
  SpruceFeature::SpruceFeature(v84, 0);
  v85 = v1[29];
  v1[29] = v84;
  if ( v85 )
    (*(void (**)(void))(*(_DWORD *)v85 + 4))();
  v86 = (BirchFeature *)operator new(0x18u);
  BirchFeature::BirchFeature(v86, 0, 0);
  v87 = v1[30];
  v1[30] = v86;
  if ( v87 )
    (*(void (**)(void))(*(_DWORD *)v87 + 4))();
  v88 = (RoofTreeFeature *)operator new(0x18u);
  RoofTreeFeature::RoofTreeFeature(v88, 0);
  v89 = v1[31];
  v1[31] = v88;
  if ( v89 )
    (*(void (**)(void))(*(_DWORD *)v89 + 4))();
  v90 = operator new(0xCu);
  v91 = v90;
  *v90 = 0;
  v90[1] = 0;
  v90[2] = 0;
  Feature::Feature((Feature *)v90, 0);
  *v91 = &off_2718A3C;
  v92 = v1[32];
  v1[32] = v91;
  if ( v92 )
    (*(void (**)(void))(*(_DWORD *)v92 + 4))();
  v93 = (PineFeature *)operator new(0x18u);
  PineFeature::PineFeature(v93, 0);
  v94 = v1[33];
  v1[33] = v93;
  if ( v94 )
    (*(void (**)(void))(*(_DWORD *)v94 + 4))();
  v95 = (MegaPineTreeFeature *)operator new(0x2Cu);
  MegaPineTreeFeature::MegaPineTreeFeature(v95, 0, 0);
  v96 = v1[34];
  v1[34] = v95;
  if ( v96 )
    (*(void (**)(void))(*(_DWORD *)v96 + 4))();
  v97 = (MegaPineTreeFeature *)operator new(0x2Cu);
  MegaPineTreeFeature::MegaPineTreeFeature(v97, 0, 1);
  v98 = v1[35];
  v1[35] = v97;
  if ( v98 )
    (*(void (**)(void))(*(_DWORD *)v98 + 4))();
  v99 = Block::mTallgrass;
  v100 = (Feature *)operator new(0x10u);
  v152 = *(_BYTE *)(v99 + 4);
  TallGrassFeature::TallGrassFeature(v100, &v152, 1);
  v101 = v1[36];
  v1[36] = v100;
  if ( v101 )
    (*(void (**)(void))(*(_DWORD *)v101 + 4))();
  v102 = Block::mTallgrass;
  v103 = (Feature *)operator new(0x10u);
  v153 = *(_BYTE *)(v102 + 4);
  TallGrassFeature::TallGrassFeature(v103, &v153, 2);
  v104 = v1[37];
  v1[37] = v103;
  if ( v104 )
    (*(void (**)(void))(*(_DWORD *)v104 + 4))();
  v105 = (FancyTreeFeature *)operator new(0x38u);
  FancyTreeFeature::FancyTreeFeature(v105, 0);
  v106 = v1[38];
  v1[38] = v105;
  if ( v106 )
    (*(void (**)(void))(*(_DWORD *)v106 + 4))();
  v107 = Block::mMossyCobblestone;
  v108 = (Feature *)operator new(0x14u);
  v154 = *(_BYTE *)(v107 + 4);
  BlockBlobFeature::BlockBlobFeature(v108, &v154, 0);
  v109 = v1[39];
  v1[39] = v108;
  if ( v109 )
    (*(void (**)(void))(*(_DWORD *)v109 + 4))();
  v110 = (SwampTreeFeature *)operator new(0x18u);
  SwampTreeFeature::SwampTreeFeature(v110);
  v111 = v1[40];
  v1[40] = v110;
  if ( v111 )
    (*(void (**)(void))(*(_DWORD *)v111 + 4))();
  v112 = operator new(0xCu);
  v113 = v112;
  *v112 = 0;
  v112[1] = 0;
  v112[2] = 0;
  Feature::Feature((Feature *)v112, 0);
  *v113 = &off_2718B04;
  v114 = v1[41];
  v1[41] = v113;
  if ( v114 )
    (*(void (**)(void))(*(_DWORD *)v114 + 4))();
  v115 = (IcePatchFeature *)operator new(0x14u);
  IcePatchFeature::IcePatchFeature(v115, 4);
  v116 = v1[42];
  v1[42] = v115;
  if ( v116 )
    (*(void (**)(void))(*(_DWORD *)v116 + 4))();
  v117 = (GroundBushFeature *)operator new(0x18u);
  GroundBushFeature::GroundBushFeature(v117, 3, 3);
  v118 = v1[43];
  v1[43] = v117;
  if ( v118 )
    (*(void (**)(void))(*(_DWORD *)v118 + 4))();
  v119 = (JungleTreeFeature *)operator new(0x18u);
  JungleTreeFeature::JungleTreeFeature(v119, 0);
  v120 = v1[44];
  v1[44] = v119;
  if ( v120 )
    (*(void (**)(void))(*(_DWORD *)v120 + 4))();
  v121 = (MegaJungleTreeFeature *)operator new(0x28u);
  MegaJungleTreeFeature::MegaJungleTreeFeature(v121, 0, 10, 20, 12884901891LL);
  v122 = v1[45];
  v1[45] = v121;
  if ( v122 )
    (*(void (**)(void))(*(_DWORD *)v122 + 4))();
  v123 = operator new(0xCu);
  v124 = v123;
  *v123 = 0;
  v123[1] = 0;
  v123[2] = 0;
  Feature::Feature((Feature *)v123, 0);
  *v124 = &off_2718B68;
  v125 = v1[46];
  v1[46] = v124;
  if ( v125 )
    (*(void (**)(void))(*(_DWORD *)v125 + 4))();
  v126 = operator new(0xCu);
  v127 = v126;
  *v126 = 0;
  v126[1] = 0;
  v126[2] = 0;
  Feature::Feature((Feature *)v126, 0);
  *v127 = &off_2718C80;
  v128 = v1[47];
  v1[47] = v127;
  if ( v128 )
    (*(void (**)(void))(*(_DWORD *)v128 + 4))();
  v129 = (SavannaTreeFeature *)operator new(0x18u);
  SavannaTreeFeature::SavannaTreeFeature(v129, 0);
  v130 = v1[48];
  v1[48] = v129;
  if ( v130 )
    (*(void (**)(void))(*(_DWORD *)v130 + 4))();
  v131 = (BirchFeature *)operator new(0x18u);
  BirchFeature::BirchFeature(v131, 0, 1);
  v132 = v1[49];
  v1[49] = v131;
  if ( v132 )
    (*(void (**)(void))(*(_DWORD *)v132 + 4))();
  return v1;
}


void __fastcall BiomeDecorator::~BiomeDecorator(BiomeDecorator *this)
{
  BiomeDecorator *v1; // r0@1

  v1 = BiomeDecorator::~BiomeDecorator(this);
  j_j_j__ZdlPv_6((void *)v1);
}


unsigned int __fastcall BiomeDecorator::decorate(BiomeDecorator *this, BlockSource *a2, Random *a3, Biome *a4, const BlockPos *a5, int a6, float a7)
{
  Random *v8; // r10@1
  int v9; // r4@2
  int v10; // r7@3
  char v11; // r5@3
  int v12; // r8@3
  int v13; // r5@3
  int v14; // r7@3
  int v15; // r0@3
  int v16; // r8@5
  char v17; // r5@5
  int v18; // r7@5
  int v19; // r7@5
  int v20; // r4@7
  int v21; // r7@8
  char v22; // r5@8
  int v23; // r6@8
  int v24; // r5@8
  int v25; // r7@8
  int v26; // r0@8
  int v27; // r8@10
  char v28; // r5@10
  int v29; // r7@10
  int v30; // r6@10
  int v31; // r4@12
  int v32; // r7@13
  char v33; // r5@13
  int v34; // r6@13
  int v35; // r5@13
  int v36; // r7@13
  int v37; // r0@13
  int v38; // r8@15
  char v39; // r5@15
  int v40; // r7@15
  int v41; // r6@15
  unsigned int v46; // r0@17
  unsigned int v50; // r0@19
  signed int v51; // r0@25
  signed int v52; // r6@29
  int v53; // r11@30
  int v54; // r8@31
  unsigned int v55; // r4@31
  int v56; // r7@31
  signed int v57; // r4@36
  int v58; // r6@38
  unsigned int v59; // r5@38
  int v60; // r8@38
  int v61; // r4@43
  int v62; // r7@44
  char v63; // r5@44
  int v64; // r6@44
  int v65; // r5@44
  int v66; // r7@44
  int v67; // r0@44
  int v68; // r8@46
  char v69; // r5@46
  int v70; // r7@46
  int v71; // r6@46
  BiomeDecorator *v72; // r8@47
  int v73; // r7@48
  char v74; // r5@49
  char v75; // r0@49
  __int64 v76; // r1@49
  int v77; // r3@49
  int v78; // r4@49
  int v79; // r11@49
  unsigned int v80; // r5@50
  unsigned int v81; // r1@50
  int v82; // r2@52
  int v83; // r3@52
  int v84; // r5@52
  int v85; // r0@52
  Random *v86; // r0@53
  signed int v87; // r6@57
  char v88; // r5@58
  Random *v89; // r7@58
  int v90; // r11@58
  unsigned int v91; // r10@58
  int v92; // r5@58
  unsigned int v93; // r1@59
  int v94; // r2@61
  int v95; // r3@61
  int v96; // r0@61
  char v97; // r5@63
  int v98; // r11@63
  unsigned int v99; // r9@63
  int v100; // r1@63
  unsigned int v101; // r5@63
  int v102; // r7@63
  int v103; // r1@65
  int v104; // r2@65
  int v105; // r7@66
  char v106; // r5@68
  int v107; // r6@68
  unsigned int v108; // r9@68
  int v109; // r5@68
  unsigned int v110; // r1@69
  int v111; // r2@71
  int v112; // r3@71
  char v113; // r5@73
  char v114; // r0@73
  int v115; // r11@76
  int v116; // r8@77
  char v117; // r5@78
  int v118; // r7@78
  unsigned int v119; // r4@78
  int v120; // r5@78
  unsigned int v121; // r1@79
  int v122; // r3@81
  int v123; // r1@81
  int v124; // r0@81
  int v125; // r2@81
  char v126; // r5@86
  int v127; // r11@86
  unsigned int v128; // r4@86
  unsigned int v129; // r7@86
  int v130; // r5@86
  int v131; // r0@88
  int v132; // r1@88
  int v133; // r2@88
  int v134; // r7@92
  char v135; // r0@92
  signed int v136; // r1@92
  char v137; // r5@97
  char v138; // r0@97
  __int64 v139; // r1@97
  int v140; // r3@97
  char v141; // r5@99
  int v142; // r11@99
  unsigned int v143; // r4@99
  int v144; // r5@99
  unsigned int v145; // r1@100
  int v146; // r2@102
  int v147; // r3@102
  char v148; // r0@103
  char v149; // r5@108
  char v150; // r0@108
  __int64 v151; // r1@108
  int v152; // r3@108
  char v153; // r5@110
  char v154; // r0@110
  char v155; // r0@112
  char v156; // r5@116
  int v157; // r7@116
  unsigned int v158; // r4@116
  int v159; // r5@116
  unsigned int v160; // r1@117
  int v161; // r2@119
  int v162; // r3@119
  char v163; // r5@122
  int v164; // r7@122
  unsigned int v165; // r4@122
  int v166; // r5@122
  unsigned int v167; // r1@123
  int v168; // r2@125
  int v169; // r3@125
  int v170; // r7@127
  const BlockPos *v171; // r4@127
  char *v172; // r11@128
  char v173; // r5@129
  int v174; // r8@129
  unsigned int v175; // r4@129
  int v176; // r5@129
  unsigned int v177; // r1@130
  int v178; // r2@132
  int v179; // r3@132
  char v180; // r5@135
  char v181; // r0@135
  char v182; // r6@138
  signed int v183; // r7@138
  const BlockPos *v184; // r5@139
  int v185; // r4@140
  unsigned int v186; // r8@140
  const BlockPos *v187; // r9@140
  int v188; // r5@140
  unsigned int v189; // r1@141
  int v190; // r6@143
  int v191; // r2@143
  char v192; // r0@146
  int v193; // r9@150
  char v194; // r8@150
  int v195; // r6@150
  unsigned int v196; // r6@150
  unsigned int v197; // r7@150
  int v198; // r7@154
  int v199; // r4@154
  char v200; // r5@156
  int v201; // r6@156
  unsigned int v202; // r9@156
  int v203; // r5@156
  unsigned int v204; // r1@157
  int v205; // r3@159
  int v206; // r2@159
  char v207; // r5@161
  char v208; // r0@161
  unsigned int result; // r0@167
  int v210; // r6@168
  signed int v211; // r4@168
  char v212; // ST24_1@169
  unsigned int v213; // kr00_4@169
  unsigned int v214; // r7@169
  char v215; // r0@169
  int v216; // r9@169
  int v217; // r8@169
  signed int v218; // r8@172
  Random *v219; // r4@173
  char v220; // ST24_1@173
  unsigned int v221; // r5@173
  unsigned int v222; // r7@173
  unsigned int v223; // r10@173
  char v224; // r0@173
  int v225; // r4@173
  int v226; // r11@173
  signed int v227; // [sp+1Ch] [bp-E4h]@27
  Random *v228; // [sp+20h] [bp-E0h]@1
  signed int v229; // [sp+24h] [bp-DCh]@16
  Biome *v230; // [sp+28h] [bp-D8h]@1
  int v231; // [sp+28h] [bp-D8h]@76
  int v232; // [sp+28h] [bp-D8h]@128
  char *v233; // [sp+28h] [bp-D8h]@168
  BiomeDecorator *v234; // [sp+2Ch] [bp-D4h]@29
  BiomeDecorator *v235; // [sp+2Ch] [bp-D4h]@66
  BlockSource *v236; // [sp+30h] [bp-D0h]@1
  float v237; // [sp+34h] [bp-CCh]@164
  unsigned int v240; // [sp+40h] [bp-C0h]@150
  unsigned int v241; // [sp+44h] [bp-BCh]@150
  int v242; // [sp+48h] [bp-B8h]@150
  __int64 v243; // [sp+4Ch] [bp-B4h]@97
  int v244; // [sp+54h] [bp-ACh]@97
  int v245; // [sp+58h] [bp-A8h]@52
  int v246; // [sp+5Ch] [bp-A4h]@82
  int v247; // [sp+60h] [bp-A0h]@82
  __int16 v248; // [sp+64h] [bp-9Ch]@53
  char v249; // [sp+68h] [bp-98h]@49
  int v250; // [sp+6Ch] [bp-94h]@49
  __int64 v251; // [sp+74h] [bp-8Ch]@49
  int v252; // [sp+7Ch] [bp-84h]@49
  int v253; // [sp+80h] [bp-80h]@44
  int v254; // [sp+84h] [bp-7Ch]@44
  int v255; // [sp+88h] [bp-78h]@44
  char v256; // [sp+8Ch] [bp-74h]@32
  char v257; // [sp+90h] [bp-70h]@32
  int v258; // [sp+A0h] [bp-60h]@31
  int v259; // [sp+A4h] [bp-5Ch]@31
  int v260; // [sp+A8h] [bp-58h]@31
  int v261; // [sp+ACh] [bp-54h]@13
  int v262; // [sp+B0h] [bp-50h]@13
  int v263; // [sp+B4h] [bp-4Ch]@13
  int v264; // [sp+B8h] [bp-48h]@8
  int v265; // [sp+BCh] [bp-44h]@8
  int v266; // [sp+C0h] [bp-40h]@8
  int v267; // [sp+C4h] [bp-3Ch]@3
  int v268; // [sp+C8h] [bp-38h]@3
  int v269; // [sp+CCh] [bp-34h]@3

  _R11 = this;
  v8 = a3;
  v230 = a4;
  v228 = a3;
  v236 = a2;
  (*(void (**)(void))(*(_DWORD *)this + 4))();
  if ( *((_DWORD *)_R11 + 60) >= 1 )
  {
    v9 = 0;
    if ( v236 )
    {
      do
      {
        v10 = *(_DWORD *)a5;
        v11 = Random::_genRandInt32(v8);
        v12 = *((_DWORD *)a5 + 2);
        v13 = (v11 & 0xF) + v10;
        v14 = (Random::_genRandInt32(v8) & 0xF) + v12;
        v15 = BlockSource::getAboveTopSolidBlock(v236, v13, v14, 0, 0);
        v267 = v13;
        v268 = v15;
        v269 = v14;
        (*(void (**)(void))(**((_DWORD **)_R11 + 2) + 8))();
        ++v9;
      }
      while ( v9 < *((_DWORD *)_R11 + 60) );
    }
    else
        v16 = *(_DWORD *)a5;
        v17 = Random::_genRandInt32(v8);
        v18 = *((_DWORD *)a5 + 2);
        v19 = v18 + (Random::_genRandInt32(v8) & 0xF);
        v267 = (v17 & 0xF) + v16;
        v268 = BlockSource::getAboveTopSolidBlock(0, v267, v19, 0, 0);
        v269 = v19;
  }
  if ( *((_DWORD *)_R11 + 61) >= 1 )
    v20 = 0;
        v21 = *(_DWORD *)a5;
        v22 = Random::_genRandInt32(v8);
        v23 = *((_DWORD *)a5 + 2);
        v24 = (v22 & 0xF) + v21;
        v25 = (Random::_genRandInt32(v8) & 0xF) + v23;
        v26 = BlockSource::getAboveTopSolidBlock(v236, v24, v25, 0, 0);
        v264 = v24;
        v265 = v26;
        v266 = v25;
        (*(void (**)(void))(**((_DWORD **)_R11 + 1) + 8))();
        ++v20;
      while ( v20 < *((_DWORD *)_R11 + 61) );
        v27 = *(_DWORD *)a5;
        v28 = Random::_genRandInt32(v8);
        v29 = *((_DWORD *)a5 + 2);
        v30 = (Random::_genRandInt32(v8) & 0xF) + v29;
        v264 = (v28 & 0xF) + v27;
        v265 = BlockSource::getAboveTopSolidBlock(0, v264, v30, 0, 0);
        v266 = v30;
  if ( *((_DWORD *)_R11 + 59) >= 1 )
    v31 = 0;
        v32 = *(_DWORD *)a5;
        v33 = Random::_genRandInt32(v8);
        v34 = *((_DWORD *)a5 + 2);
        v35 = (v33 & 0xF) + v32;
        v36 = (Random::_genRandInt32(v8) & 0xF) + v34;
        v37 = BlockSource::getAboveTopSolidBlock(v236, v35, v36, 0, 0);
        v261 = v35;
        v262 = v37;
        v263 = v36;
        (*(void (**)(void))(**((_DWORD **)_R11 + 3) + 8))();
        ++v31;
      while ( v31 < *((_DWORD *)_R11 + 59) );
        v38 = *(_DWORD *)a5;
        v39 = Random::_genRandInt32(v8);
        v40 = *((_DWORD *)a5 + 2);
        v41 = (Random::_genRandInt32(v8) & 0xF) + v40;
        v261 = (v39 & 0xF) + v38;
        v262 = BlockSource::getAboveTopSolidBlock(0, v261, v41, 0, 0);
        v263 = v41;
  __asm
    VLDR            S0, [R11,#0xD0]
    VCMPE.F32       S0, #0.0
  v229 = *((_DWORD *)_R11 + 54);
  __asm { VMRS            APSR_nzcv, FPSCR }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    v46 = Random::_genRandInt32(v8);
    __asm { VLDR            S16, [R11,#0xD0] }
    if ( v46 == 10 * (v46 / 0xA) )
      _R0 = Random::_genRandInt32(v8);
      __asm
        VMOV            S0, R0
        VLDR            D1, =2.32830644e-10
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D1
      v229 = *(_DWORD *)(*(_DWORD *)(Biome::plains + 124) + 216);
        VCVT.F32.F64    S0, D0
        VMUL.F32        S0, S0, S16
        VCVTR.S32.F32   S0, S0
        VMOV            R5, S0
        VMOV.F32        S0, #1.0
        VCMPE.F32       S16, S0
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        __asm
        {
          VCMPE.F32       S16, #0.0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          goto LABEL_42;
        _R0 = Random::_genRandInt32(v8);
          VMOV            S0, R0
          VLDR            D1, =2.32830644e-10
        _R5 = 0;
          VCVT.F64.U32    D0, S0
          VMUL.F64        D0, D0, D1
          VCVT.F32.F64    S0, D0
          VLDR            S2, [R11,#0xD0]
          VCMPE.F32       S0, S2
        if ( _NF ^ _VF )
          _R5 = 1;
      else
        v50 = Random::_genRandInt32(v8);
          VCVTR.S32.F32   S0, S16
          VMOV            R5, S0
        v51 = v50 % 0xA - 7;
        if ( v51 > 0 )
          _R5 += v51;
    v227 = _R5;
    if ( _R5 >= 1 )
      if ( v236 )
        v52 = 0;
        v234 = _R11;
        do
          v53 = (*(int (**)(void))(*(_DWORD *)v230 + 16))();
          if ( *(_DWORD *)v53 )
          {
            v54 = *((_DWORD *)a5 + 2);
            v55 = Random::_genRandInt32(v8);
            v56 = *(_DWORD *)a5;
            v258 = Random::_genRandInt32(v8) % 0xE + v56 + 1;
            v259 = 0;
            v260 = v55 % 0xE + v54 + 1;
            v259 = BlockSource::getHeightmap(v236, (const BlockPos *)&v258);
            (*(void (**)(void))(**(_DWORD **)v53 + 8))();
            if ( !a6 )
            {
              v256 = *(_BYTE *)(Block::mTallgrass + 4);
              TallGrassFeature::TallGrassFeature((Feature *)&v257, &v256, 1);
              TallGrassFeature::place((TallGrassFeature *)&v257, v236, (const BlockPos *)&v258, v8, 12884901911LL);
              Feature::~Feature((Feature *)&v257);
            }
            _R5 = v227;
          }
          ++v52;
        while ( v52 < _R5 );
        _R11 = v234;
        v57 = 0;
          if ( *(_DWORD *)(*(int (**)(void))(*(_DWORD *)v230 + 16))() )
            v58 = *((_DWORD *)a5 + 2);
            v59 = Random::_genRandInt32(v8);
            v60 = *(_DWORD *)a5;
            v258 = Random::_genRandInt32(v8) % 0xE + v60 + 1;
            v260 = v59 % 0xE + v58 + 1;
            v259 = BlockSource::getHeightmap(0, (const BlockPos *)&v258);
              TallGrassFeature::place((TallGrassFeature *)&v257, 0, (const BlockPos *)&v258, v8, 12884901911LL);
          ++v57;
        while ( v57 < _R5 );
LABEL_42:
  if ( *((_DWORD *)_R11 + 62) >= 1 )
    v61 = 0;
        v62 = *(_DWORD *)a5;
        v63 = Random::_genRandInt32(v8);
        v64 = *((_DWORD *)a5 + 2);
        v65 = (v63 & 0xF) + v62;
        v66 = (Random::_genRandInt32(v8) & 0xF) + v64;
        v67 = BlockSource::getAboveTopSolidBlock(v236, v65, v66, 0, 0);
        v253 = v65;
        v254 = v67;
        v255 = v66;
        (*(void (**)(void))(**((_DWORD **)_R11 + 18) + 8))();
        ++v61;
      while ( v61 < *((_DWORD *)_R11 + 62) );
        v68 = *(_DWORD *)a5;
        v69 = Random::_genRandInt32(v8);
        v70 = *((_DWORD *)a5 + 2);
        v71 = (Random::_genRandInt32(v8) & 0xF) + v70;
        v253 = (v69 & 0xF) + v68;
        v254 = BlockSource::getAboveTopSolidBlock(0, v253, v71, 0, 0);
        v255 = v71;
  v72 = _R11;
  if ( *((_DWORD *)_R11 + 53) >= 1 )
    v73 = 0;
    do
      v74 = Random::_genRandInt32(v8);
      v75 = Random::_genRandInt32(v8);
      HIDWORD(v76) = *((_DWORD *)a5 + 1);
      v77 = *((_DWORD *)a5 + 2);
      v78 = v74 & 0xF;
      v79 = v75 & 0xF;
      LODWORD(v76) = *(_DWORD *)a5 + v78;
      v251 = v76;
      v252 = v77 + v79;
      BlockSource::getHeightmapPos((BlockSource *)&v249, v236, (const BlockPos *)&v251);
      if ( v250 == -32 )
        v81 = 0;
        v80 = v250 + 32;
        v81 = Random::_genRandInt32(v8) % v80;
      v82 = *((_DWORD *)a5 + 1);
      v83 = *((_DWORD *)a5 + 2);
      v258 = *(_DWORD *)a5 + v78;
      v259 = v82 + v81;
      v260 = v83 + v79;
      (*(void (__fastcall **)(int *))(*(_DWORD *)v230 + 68))(&v245);
      v84 = BlockSource::getMaterial(v236, (const BlockPos *)&v258);
      v85 = Material::getMaterial(0);
      if ( Material::operator!=(v84, v85) == 1 )
        v86 = (Random *)*((_DWORD *)v72 + 15);
        v248 = v245;
        FlowerFeature::placeFlower(v86, v236, (int)&v258, (FullBlock *)&v248, v8);
      ++v73;
    while ( v73 < *((_DWORD *)v72 + 53) );
  if ( v229 >= 1 && !a6 )
    v87 = 0;
        v88 = Random::_genRandInt32(v8);
        v89 = v8;
        v90 = v88 & 0xF;
        v91 = Random::_genRandInt32(v8) & 0xF;
        v92 = BlockSource::getHeightmap(v236, *(_DWORD *)a5 + v90, *((_DWORD *)a5 + 2) + v91);
        if ( (_WORD)v92 )
          v93 = Random::_genRandInt32(v89) % (2 * v92);
        else
          v93 = 0;
        v94 = *((_DWORD *)a5 + 1);
        v95 = *((_DWORD *)a5 + 2);
        v258 = *(_DWORD *)a5 + v90;
        v259 = v94 + v93;
        v260 = v95 + v91;
        v8 = v89;
        v96 = (*(int (**)(void))(*(_DWORD *)v230 + 20))();
        (*(void (**)(void))(**(_DWORD **)v96 + 8))();
        ++v87;
      while ( v87 < v229 );
        v97 = Random::_genRandInt32(v8);
        v98 = v97 & 0xF;
        v99 = Random::_genRandInt32(v8) & 0xF;
        v100 = *(_DWORD *)a5 + v98;
        v101 = 0;
        v102 = BlockSource::getHeightmap(0, v100, *((_DWORD *)a5 + 2) + v99);
        if ( (_WORD)v102 )
          v101 = Random::_genRandInt32(v8) % (2 * v102);
        v103 = *((_DWORD *)a5 + 1);
        v104 = *((_DWORD *)a5 + 2);
        v258 = *(_DWORD *)a5 + v98;
        v259 = v103 + v101;
        v260 = v104 + v99;
        (*(void (**)(void))(*(_DWORD *)v230 + 20))();
  v105 = *((_DWORD *)v72 + 55);
  v235 = v72;
  if ( v105 )
        v106 = Random::_genRandInt32(v8);
        v107 = v106 & 0xF;
        v108 = Random::_genRandInt32(v8) & 0xF;
        v109 = BlockSource::getHeightmap(v236, *(_DWORD *)a5 + v107, *((_DWORD *)a5 + 2) + v108);
        if ( (_WORD)v109 )
          v110 = Random::_genRandInt32(v8) % (2 * v109);
          v110 = 0;
        v111 = *((_DWORD *)a5 + 1);
        v112 = *((_DWORD *)a5 + 2);
        v258 = *(_DWORD *)a5 + v107;
        v259 = v111 + v110;
        v260 = v112 + v108;
        (*(void (**)(void))(**((_DWORD **)v72 + 25) + 8))();
        --v105;
      while ( v105 );
        v113 = Random::_genRandInt32(v8);
        v114 = Random::_genRandInt32(v8);
        if ( (unsigned __int16)BlockSource::getHeightmap(
                                 0,
                                 *(_DWORD *)a5 + (v113 & 0xF),
                                 *((_DWORD *)a5 + 2) + (v114 & 0xF)) )
          Random::_genRandInt32(v8);
  v115 = *((_DWORD *)v72 + 51);
  v231 = v115;
  if ( v115 )
    v116 = 0;
        v117 = Random::_genRandInt32(v8);
        v118 = v117 & 0xF;
        v119 = Random::_genRandInt32(v8) & 0xF;
        v120 = BlockSource::getHeightmap(v236, *(_DWORD *)a5 + v118, *((_DWORD *)a5 + 2) + v119);
        if ( (_WORD)v120 )
          v121 = Random::_genRandInt32(v8) % (2 * v120);
          v121 = 0;
        v122 = *((_DWORD *)a5 + 2);
        v123 = v121 + *((_DWORD *)a5 + 1);
        v124 = *(_DWORD *)a5 + v118;
        v125 = v122 + v119;
        v258 = *(_DWORD *)a5 + v118;
        v259 = v123;
        v260 = v122 + v119;
        if ( v123 >= 1 )
          do
            v245 = v124;
            v246 = v123 - 1;
            v247 = v125;
            if ( BlockSource::isEmptyBlock(v236, (const BlockPos *)&v245) != 1 )
              break;
            v124 = v245;
            v123 = v246;
            v125 = v247;
            v258 = v245;
            v259 = v246;
            v260 = v247;
          while ( v246 > 0 );
        (*(void (**)(void))(**((_DWORD **)v235 + 21) + 8))();
        ++v116;
      while ( v116 != v115 );
        v126 = Random::_genRandInt32(v8);
        v127 = v126 & 0xF;
        v128 = Random::_genRandInt32(v8) & 0xF;
        v129 = 0;
        v130 = BlockSource::getHeightmap(0, *(_DWORD *)a5 + v127, *((_DWORD *)a5 + 2) + v128);
        if ( (_WORD)v130 )
          v129 = Random::_genRandInt32(v8) % (2 * v130);
        v131 = *(_DWORD *)a5 + v127;
        v132 = *((_DWORD *)a5 + 1) + v129;
        v133 = *((_DWORD *)a5 + 2) + v128;
        v258 = *(_DWORD *)a5 + v127;
        v259 = v132;
        v260 = v133;
        if ( v132 >= 1 )
            v245 = v131;
            v246 = v132 - 1;
            v247 = v133;
            if ( !BlockSource::isEmptyBlock(0, (const BlockPos *)&v245) )
            v131 = v245;
            v132 = v246;
            v133 = v247;
      while ( v116 != v231 );
  v134 = *((_DWORD *)v235 + 56);
  v135 = Random::_genRandInt32(v8);
  v136 = 0;
  if ( !(v135 & 3) )
    v136 = 1;
  if ( v134 )
        if ( v136 & 1 )
          v137 = Random::_genRandInt32(v8);
          v138 = Random::_genRandInt32(v8);
          HIDWORD(v139) = *((_DWORD *)a5 + 1);
          v140 = *((_DWORD *)a5 + 2);
          LODWORD(v139) = *(_DWORD *)a5 + (v137 & 0xF);
          v243 = v139;
          v244 = (v138 & 0xF) + v140;
          BlockSource::getHeightmapPos((BlockSource *)&v258, v236, (const BlockPos *)&v243);
          (*(void (**)(void))(**((_DWORD **)v235 + 16) + 8))();
        if ( !(Random::_genRandInt32(v8) & 7) )
          v141 = Random::_genRandInt32(v8);
          v142 = v141 & 0xF;
          v143 = Random::_genRandInt32(v8) & 0xF;
          v144 = BlockSource::getHeightmap(v236, *(_DWORD *)a5 + v142, *((_DWORD *)a5 + 2) + v143);
          if ( (_WORD)v144 )
            v145 = Random::_genRandInt32(v8) % (2 * v144);
          else
            v145 = 0;
          v146 = *((_DWORD *)a5 + 1);
          v147 = *((_DWORD *)a5 + 2);
          v258 = *(_DWORD *)a5 + v142;
          v259 = v146 + v145;
          v260 = v147 + v143;
          (*(void (**)(void))(**((_DWORD **)v235 + 17) + 8))();
        v148 = Random::_genRandInt32(v8);
        v136 = 0;
        if ( !(v148 & 3) )
          v136 = 1;
        --v134;
      while ( v134 );
          v149 = Random::_genRandInt32(v8);
          v150 = Random::_genRandInt32(v8);
          HIDWORD(v151) = *((_DWORD *)a5 + 1);
          v152 = *((_DWORD *)a5 + 2);
          LODWORD(v151) = *(_DWORD *)a5 + (v149 & 0xF);
          v243 = v151;
          v244 = (v150 & 0xF) + v152;
          BlockSource::getHeightmapPos((BlockSource *)&v258, 0, (const BlockPos *)&v243);
          v153 = Random::_genRandInt32(v8);
          v154 = Random::_genRandInt32(v8);
          if ( (unsigned __int16)BlockSource::getHeightmap(
                                   0,
                                   *(_DWORD *)a5 + (v153 & 0xF),
                                   *((_DWORD *)a5 + 2) + (v154 & 0xF)) )
            Random::_genRandInt32(v8);
        v155 = Random::_genRandInt32(v8);
        if ( !(v155 & 3) )
  if ( v136 )
    v156 = Random::_genRandInt32(v8);
    v157 = v156 & 0xF;
    v158 = Random::_genRandInt32(v8) & 0xF;
    v159 = BlockSource::getHeightmap(v236, *(_DWORD *)a5 + v157, *((_DWORD *)a5 + 2) + v158);
    v160 = (_WORD)v159 ? Random::_genRandInt32(v8) % (2 * v159) : 0;
    v161 = *((_DWORD *)a5 + 1);
    v162 = *((_DWORD *)a5 + 2);
    v258 = *(_DWORD *)a5 + v157;
    v259 = v161 + v160;
    v260 = v162 + v158;
      (*(void (**)(void))(**((_DWORD **)v235 + 16) + 8))();
  if ( !(Random::_genRandInt32(v8) & 7) )
    v163 = Random::_genRandInt32(v8);
    v164 = v163 & 0xF;
    v165 = Random::_genRandInt32(v8) & 0xF;
    v166 = BlockSource::getHeightmap(v236, *(_DWORD *)a5 + v164, *((_DWORD *)a5 + 2) + v165);
    v167 = (_WORD)v166 ? Random::_genRandInt32(v8) % (2 * v166) : 0;
    v168 = *((_DWORD *)a5 + 1);
    v169 = *((_DWORD *)a5 + 2);
    v258 = *(_DWORD *)a5 + v164;
    v259 = v168 + v167;
    v260 = v169 + v165;
      (*(void (**)(void))(**((_DWORD **)v235 + 17) + 8))();
  v170 = *((_DWORD *)v235 + 57);
  v171 = a5;
  if ( v170 )
    v232 = (int)v235 + 76;
    v172 = (char *)a5 + 4;
        v173 = Random::_genRandInt32(v8);
        v174 = v173 & 0xF;
        v175 = Random::_genRandInt32(v8) & 0xF;
        v176 = BlockSource::getHeightmap(v236, *(_DWORD *)a5 + v174, *((_DWORD *)a5 + 2) + v175);
        if ( (_WORD)v176 )
          v177 = Random::_genRandInt32(v8) % (2 * v176);
          v177 = 0;
        v178 = *((_DWORD *)a5 + 1);
        v179 = *((_DWORD *)a5 + 2);
        v258 = *(_DWORD *)a5 + v174;
        v259 = v178 + v177;
        v260 = v179 + v175;
        (*(void (**)(void))(**(_DWORD **)v232 + 8))();
        --v170;
      while ( v170 );
      v171 = a5;
        v180 = Random::_genRandInt32(v8);
        v181 = Random::_genRandInt32(v8);
                                 *(_DWORD *)a5 + (v180 & 0xF),
                                 *((_DWORD *)a5 + 2) + (v181 & 0xF)) )
  else
  v182 = Random::_genRandInt32(v8);
  v183 = 10;
  if ( v236 )
    v184 = v171;
      v185 = v182 & 0xF;
      v186 = Random::_genRandInt32(v8) & 0xF;
      v187 = v184;
      v188 = BlockSource::getHeightmap(v236, *(_DWORD *)v184 + v185, *((_DWORD *)v184 + 2) + v186);
      if ( (_WORD)v188 )
        v189 = Random::_genRandInt32(v8) % (2 * v188);
        v189 = 0;
      v184 = v187;
      v190 = *(_DWORD *)v172;
      v191 = *((_DWORD *)v187 + 2);
      v258 = *(_DWORD *)v187 + v185;
      v259 = v190 + v189;
      v260 = v191 + v186;
      (*(void (**)(void))(**(_DWORD **)v232 + 8))();
      --v183;
      v182 = Random::_genRandInt32(v8);
    while ( v183 );
      v192 = Random::_genRandInt32(v8);
      if ( (unsigned __int16)BlockSource::getHeightmap(
                               0,
                               *(_DWORD *)v171 + (v182 & 0xF),
                               *((_DWORD *)v171 + 2) + (v192 & 0xF)) )
        Random::_genRandInt32(v8);
  if ( !(v182 & 0x1F) )
    v193 = *((_DWORD *)v184 + 2);
    v194 = Random::_genRandInt32(v8);
    v195 = *(_DWORD *)v184;
    v240 = (Random::_genRandInt32(v8) & 0xF) + v195;
    v196 = 0;
    v241 = 0;
    v242 = (v194 & 0xF) + v193;
    v197 = BlockSource::getHeightmap(v236, (const BlockPos *)&v240);
    if ( (_WORD)v197 )
      v196 = Random::_genRandInt32(v8) % v197;
    v241 = v196;
      (*(void (**)(void))(**((_DWORD **)v235 + 22) + 8))();
  v198 = *((_DWORD *)v235 + 58);
  __asm { VLDR            S16, [SP,#0x100+arg_8] }
  v199 = (int)v184;
  if ( v198 )
        v200 = Random::_genRandInt32(v8);
        v201 = v200 & 0xF;
        v202 = Random::_genRandInt32(v8) & 0xF;
        v203 = BlockSource::getHeightmap(v236, *(_DWORD *)v199 + v201, *(_DWORD *)(v199 + 8) + v202);
        if ( (_WORD)v203 )
          v204 = Random::_genRandInt32(v8) % (2 * v203);
          v204 = 0;
        v205 = *(_DWORD *)v172;
        v206 = *(_DWORD *)(v199 + 8);
        v258 = *(_DWORD *)v199 + v201;
        v259 = v205 + v204;
        v260 = v206 + v202;
        (*(void (**)(void))(**((_DWORD **)v235 + 20) + 8))();
        --v198;
      while ( v198 );
        v207 = Random::_genRandInt32(v8);
        v208 = Random::_genRandInt32(v8);
                                 *(_DWORD *)v199 + (v207 & 0xF),
                                 *(_DWORD *)(v199 + 8) + (v208 & 0xF)) )
  Vec3::Vec3((int)&v237, v199);
    VLDR            S0, [SP,#0x100+var_CC]
    VLDR            S2, [SP,#0x100+var_C8]
    VMUL.F32        S0, S0, S0
    VLDR            S4, [SP,#0x100+var_C4]
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VSQRT.F32       S0, S0
    VCMPE.F32       S0, S16
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) && Random::_genRandInt32(v8) & 3 )
    *((_BYTE *)v235 + 252) = 0;
  result = *((_BYTE *)v235 + 252);
  if ( *((_BYTE *)v235 + 252) )
    v210 = v199;
    v211 = 50;
    v233 = v172;
        v212 = Random::_genRandInt32(v8);
        v213 = Random::_genRandInt32(v8);
        v214 = Random::_genRandInt32(v8);
        v215 = Random::_genRandInt32(v8);
        v216 = *(_DWORD *)(v210 + 8);
        v217 = *(_DWORD *)v172;
        v258 = (v215 & 0xF) + *(_DWORD *)v210;
        v259 = v217 + v214 % (v213 % 0x78 + 8);
        v260 = (v212 & 0xF) + v216;
        (*(void (**)(void))(**((_DWORD **)v235 + 24) + 8))();
        --v211;
      while ( v211 );
    v218 = 20;
        v219 = v8;
        v220 = Random::_genRandInt32(v8);
        v221 = Random::_genRandInt32(v8);
        v222 = Random::_genRandInt32(v8);
        v223 = Random::_genRandInt32(v8);
        v224 = Random::_genRandInt32(v219);
        v225 = *(_DWORD *)(v210 + 8);
        v226 = *(_DWORD *)v233;
        v258 = (v224 & 0xF) + *(_DWORD *)v210;
        v259 = v226 + v223 % (v222 % (v221 % 0x70 + 8) + 8);
        v8 = v228;
        v260 = (v220 & 0xF) + v225;
        result = (*(int (**)(void))(**((_DWORD **)v235 + 23) + 8))();
        --v218;
      while ( v218 );
        result = Random::_genRandInt32(v8);
  return result;
}


BiomeDecorator *__fastcall BiomeDecorator::~BiomeDecorator(BiomeDecorator *this)
{
  BiomeDecorator *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@3
  int v4; // r0@5
  int v5; // r0@7
  int v6; // r0@9
  int v7; // r0@11
  int v8; // r0@13
  int v9; // r0@15
  int v10; // r0@17
  int v11; // r0@19
  int v12; // r0@21
  int v13; // r0@23
  int v14; // r0@25
  int v15; // r0@27
  int v16; // r0@29
  int v17; // r0@31
  int v18; // r0@33
  int v19; // r0@35
  int v20; // r0@37
  int v21; // r0@39
  int v22; // r0@41
  int v23; // r0@43
  int v24; // r0@45
  int v25; // r0@47
  int v26; // r0@49
  int v27; // r0@51
  int v28; // r0@53
  int v29; // r0@55
  int v30; // r0@57
  int v31; // r0@59
  int v32; // r0@61
  int v33; // r0@63
  int v34; // r0@65
  int v35; // r0@67
  int v36; // r0@69
  int v37; // r0@71
  int v38; // r0@73
  int v39; // r0@75
  int v40; // r0@77
  int v41; // r0@79
  int v42; // r0@81
  int v43; // r0@83
  int v44; // r0@85
  int v45; // r0@87
  int v46; // r0@89
  int v47; // r0@91
  int v48; // r0@93
  int v49; // r0@95
  int v50; // r0@97
  int v51; // r0@99
  BiomeDecorator *result; // r0@101

  v1 = this;
  *(_DWORD *)this = &off_2703CF0;
  v2 = *((_DWORD *)this + 50);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 50) = 0;
  v3 = *((_DWORD *)v1 + 49);
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  *((_DWORD *)v1 + 49) = 0;
  v4 = *((_DWORD *)v1 + 48);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 48) = 0;
  v5 = *((_DWORD *)v1 + 47);
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  *((_DWORD *)v1 + 47) = 0;
  v6 = *((_DWORD *)v1 + 46);
  if ( v6 )
    (*(void (**)(void))(*(_DWORD *)v6 + 4))();
  *((_DWORD *)v1 + 46) = 0;
  v7 = *((_DWORD *)v1 + 45);
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
  *((_DWORD *)v1 + 45) = 0;
  v8 = *((_DWORD *)v1 + 44);
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  *((_DWORD *)v1 + 44) = 0;
  v9 = *((_DWORD *)v1 + 43);
  if ( v9 )
    (*(void (**)(void))(*(_DWORD *)v9 + 4))();
  *((_DWORD *)v1 + 43) = 0;
  v10 = *((_DWORD *)v1 + 42);
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  *((_DWORD *)v1 + 42) = 0;
  v11 = *((_DWORD *)v1 + 41);
  if ( v11 )
    (*(void (**)(void))(*(_DWORD *)v11 + 4))();
  *((_DWORD *)v1 + 41) = 0;
  v12 = *((_DWORD *)v1 + 40);
  if ( v12 )
    (*(void (**)(void))(*(_DWORD *)v12 + 4))();
  *((_DWORD *)v1 + 40) = 0;
  v13 = *((_DWORD *)v1 + 39);
  if ( v13 )
    (*(void (**)(void))(*(_DWORD *)v13 + 4))();
  *((_DWORD *)v1 + 39) = 0;
  v14 = *((_DWORD *)v1 + 38);
  if ( v14 )
    (*(void (**)(void))(*(_DWORD *)v14 + 4))();
  *((_DWORD *)v1 + 38) = 0;
  v15 = *((_DWORD *)v1 + 37);
  if ( v15 )
    (*(void (**)(void))(*(_DWORD *)v15 + 4))();
  *((_DWORD *)v1 + 37) = 0;
  v16 = *((_DWORD *)v1 + 36);
  if ( v16 )
    (*(void (**)(void))(*(_DWORD *)v16 + 4))();
  *((_DWORD *)v1 + 36) = 0;
  v17 = *((_DWORD *)v1 + 35);
  if ( v17 )
    (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  *((_DWORD *)v1 + 35) = 0;
  v18 = *((_DWORD *)v1 + 34);
  if ( v18 )
    (*(void (**)(void))(*(_DWORD *)v18 + 4))();
  *((_DWORD *)v1 + 34) = 0;
  v19 = *((_DWORD *)v1 + 33);
  if ( v19 )
    (*(void (**)(void))(*(_DWORD *)v19 + 4))();
  *((_DWORD *)v1 + 33) = 0;
  v20 = *((_DWORD *)v1 + 32);
  if ( v20 )
    (*(void (**)(void))(*(_DWORD *)v20 + 4))();
  *((_DWORD *)v1 + 32) = 0;
  v21 = *((_DWORD *)v1 + 31);
  if ( v21 )
    (*(void (**)(void))(*(_DWORD *)v21 + 4))();
  *((_DWORD *)v1 + 31) = 0;
  v22 = *((_DWORD *)v1 + 30);
  if ( v22 )
    (*(void (**)(void))(*(_DWORD *)v22 + 4))();
  *((_DWORD *)v1 + 30) = 0;
  v23 = *((_DWORD *)v1 + 29);
  if ( v23 )
    (*(void (**)(void))(*(_DWORD *)v23 + 4))();
  *((_DWORD *)v1 + 29) = 0;
  v24 = *((_DWORD *)v1 + 28);
  if ( v24 )
    (*(void (**)(void))(*(_DWORD *)v24 + 4))();
  *((_DWORD *)v1 + 28) = 0;
  v25 = *((_DWORD *)v1 + 27);
  if ( v25 )
    (*(void (**)(void))(*(_DWORD *)v25 + 4))();
  *((_DWORD *)v1 + 27) = 0;
  v26 = *((_DWORD *)v1 + 26);
  if ( v26 )
    (*(void (**)(void))(*(_DWORD *)v26 + 4))();
  *((_DWORD *)v1 + 26) = 0;
  v27 = *((_DWORD *)v1 + 25);
  if ( v27 )
    (*(void (**)(void))(*(_DWORD *)v27 + 4))();
  *((_DWORD *)v1 + 25) = 0;
  v28 = *((_DWORD *)v1 + 24);
  if ( v28 )
    (*(void (**)(void))(*(_DWORD *)v28 + 4))();
  *((_DWORD *)v1 + 24) = 0;
  v29 = *((_DWORD *)v1 + 23);
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  *((_DWORD *)v1 + 23) = 0;
  v30 = *((_DWORD *)v1 + 22);
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  *((_DWORD *)v1 + 22) = 0;
  v31 = *((_DWORD *)v1 + 21);
  if ( v31 )
    (*(void (**)(void))(*(_DWORD *)v31 + 4))();
  *((_DWORD *)v1 + 21) = 0;
  v32 = *((_DWORD *)v1 + 20);
  if ( v32 )
    (*(void (**)(void))(*(_DWORD *)v32 + 4))();
  *((_DWORD *)v1 + 20) = 0;
  v33 = *((_DWORD *)v1 + 19);
  if ( v33 )
    (*(void (**)(void))(*(_DWORD *)v33 + 4))();
  *((_DWORD *)v1 + 19) = 0;
  v34 = *((_DWORD *)v1 + 18);
  if ( v34 )
    (*(void (**)(void))(*(_DWORD *)v34 + 4))();
  *((_DWORD *)v1 + 18) = 0;
  v35 = *((_DWORD *)v1 + 17);
  if ( v35 )
    (*(void (**)(void))(*(_DWORD *)v35 + 4))();
  *((_DWORD *)v1 + 17) = 0;
  v36 = *((_DWORD *)v1 + 16);
  if ( v36 )
    (*(void (**)(void))(*(_DWORD *)v36 + 4))();
  *((_DWORD *)v1 + 16) = 0;
  v37 = *((_DWORD *)v1 + 15);
  if ( v37 )
    (*(void (**)(void))(*(_DWORD *)v37 + 4))();
  *((_DWORD *)v1 + 15) = 0;
  v38 = *((_DWORD *)v1 + 14);
  if ( v38 )
    (*(void (**)(void))(*(_DWORD *)v38 + 4))();
  *((_DWORD *)v1 + 14) = 0;
  v39 = *((_DWORD *)v1 + 13);
  if ( v39 )
    (*(void (**)(void))(*(_DWORD *)v39 + 4))();
  *((_DWORD *)v1 + 13) = 0;
  v40 = *((_DWORD *)v1 + 12);
  if ( v40 )
    (*(void (**)(void))(*(_DWORD *)v40 + 4))();
  *((_DWORD *)v1 + 12) = 0;
  v41 = *((_DWORD *)v1 + 11);
  if ( v41 )
    (*(void (**)(void))(*(_DWORD *)v41 + 4))();
  *((_DWORD *)v1 + 11) = 0;
  v42 = *((_DWORD *)v1 + 10);
  if ( v42 )
    (*(void (**)(void))(*(_DWORD *)v42 + 4))();
  *((_DWORD *)v1 + 10) = 0;
  v43 = *((_DWORD *)v1 + 9);
  if ( v43 )
    (*(void (**)(void))(*(_DWORD *)v43 + 4))();
  *((_DWORD *)v1 + 9) = 0;
  v44 = *((_DWORD *)v1 + 8);
  if ( v44 )
    (*(void (**)(void))(*(_DWORD *)v44 + 4))();
  *((_DWORD *)v1 + 8) = 0;
  v45 = *((_DWORD *)v1 + 7);
  if ( v45 )
    (*(void (**)(void))(*(_DWORD *)v45 + 4))();
  *((_DWORD *)v1 + 7) = 0;
  v46 = *((_DWORD *)v1 + 6);
  if ( v46 )
    (*(void (**)(void))(*(_DWORD *)v46 + 4))();
  *((_DWORD *)v1 + 6) = 0;
  v47 = *((_DWORD *)v1 + 5);
  if ( v47 )
    (*(void (**)(void))(*(_DWORD *)v47 + 4))();
  *((_DWORD *)v1 + 5) = 0;
  v48 = *((_DWORD *)v1 + 4);
  if ( v48 )
    (*(void (**)(void))(*(_DWORD *)v48 + 4))();
  *((_DWORD *)v1 + 4) = 0;
  v49 = *((_DWORD *)v1 + 3);
  if ( v49 )
    (*(void (**)(void))(*(_DWORD *)v49 + 4))();
  *((_DWORD *)v1 + 3) = 0;
  v50 = *((_DWORD *)v1 + 2);
  if ( v50 )
    (*(void (**)(void))(*(_DWORD *)v50 + 4))();
  *((_DWORD *)v1 + 2) = 0;
  v51 = *((_DWORD *)v1 + 1);
  if ( v51 )
    (*(void (**)(void))(*(_DWORD *)v51 + 4))();
  result = v1;
  *((_DWORD *)v1 + 1) = 0;
  return result;
}


unsigned int __fastcall BiomeDecorator::decorateOres(BiomeDecorator *this, BlockSource *a2, Random *a3, const BlockPos *a4)
{
  BiomeDecorator *v4; // r7@1
  const BlockPos *v5; // r4@1
  Random *v6; // r5@1
  BlockSource *v7; // r6@1

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  BiomeDecorator::decorateDepthSpan((int)this + 16, (int)a2, a3, (int)a4, 10, (int)this + 16, 0, 128);
  BiomeDecorator::decorateDepthSpan(8, (int)v7, v6, (int)v5, 8, (int)v4 + 20, 0, 128);
  if ( !(Random::_genRandInt32(v6) & 0xF) )
    BiomeDecorator::decorateDepthSpan(50, (int)v7, v6, (int)v5, 80, (int)v4 + 20, 0, 50);
  BiomeDecorator::decorateDepthSpan((int)v4 + 28, (int)v7, v6, (int)v5, 10, (int)v4 + 28, 0, 80);
  BiomeDecorator::decorateDepthSpan((int)v4 + 24, (int)v7, v6, (int)v5, 10, (int)v4 + 24, 0, 80);
  BiomeDecorator::decorateDepthSpan((int)v4 + 32, (int)v7, v6, (int)v5, 10, (int)v4 + 32, 0, 80);
  BiomeDecorator::decorateDepthSpan((int)v4 + 36, (int)v7, v6, (int)v5, 20, (int)v4 + 36, 0, 128);
  BiomeDecorator::decorateDepthSpan(64, (int)v7, v6, (int)v5, 20, (int)v4 + 40, 0, 64);
  BiomeDecorator::decorateDepthSpan(32, (int)v7, v6, (int)v5, 2, (int)v4 + 44, 0, 32);
  BiomeDecorator::decorateDepthSpan((int)v4 + 48, (int)v7, v6, (int)v5, 8, (int)v4 + 48, 0, 16);
  BiomeDecorator::decorateDepthSpan((int)v4 + 52, (int)v7, v6, (int)v5, 1, (int)v4 + 52, 0, 16);
  return BiomeDecorator::decorateDepthAverage((int)v4 + 56, (int)v7, v6, (int)v5, 1, (int)v4 + 56, 16, 0x10u);
}


int __fastcall BiomeDecorator::_getRandomSolidPosition(BiomeDecorator *this, BlockSource *a2, const BlockPos *a3, Random *a4, Random *a5)
{
  Random *v5; // r6@1
  BiomeDecorator *v6; // r4@1
  BlockSource *v7; // r9@1
  int v8; // r7@1
  char v9; // r5@1
  int v10; // r6@1
  unsigned int v11; // r0@1
  int v12; // r6@1
  unsigned int v13; // r7@1
  int result; // r0@1
  unsigned int v15; // r0@2
  int v16; // r1@2

  v5 = a4;
  v6 = this;
  v7 = a3;
  v8 = *((_DWORD *)a4 + 2);
  v9 = Random::_genRandInt32(a5);
  v10 = *(_DWORD *)v5;
  v11 = (Random::_genRandInt32(a5) & 0xF) + v10;
  v12 = 0;
  *(_DWORD *)v6 = v11;
  *((_DWORD *)v6 + 1) = 0;
  *((_DWORD *)v6 + 2) = (v9 & 0xF) + v8;
  v13 = BlockSource::getAboveTopSolidBlock(v7, v6, 0, 0);
  result = 0xFFFF;
  if ( (_WORD)v13 )
  {
    v15 = Random::_genRandInt32(a5);
    v16 = v15 % v13;
    result = v15 / v13;
    v12 = v16;
  }
  *((_DWORD *)v6 + 1) = v12;
  return result;
}


int __fastcall BiomeDecorator::_placeFeature(int a1, int a2, int a3)
{
  int result; // r0@2

  if ( a2 )
    result = (*(int (**)(void))(**(_DWORD **)a3 + 8))();
  return result;
}


int __fastcall BiomeDecorator::_getRandomTreePosition(BiomeDecorator *this, BlockSource *a2, const BlockPos *a3, Random *a4, Random *a5)
{
  Random *v5; // r6@1
  BiomeDecorator *v6; // r4@1
  BlockSource *v7; // r8@1
  int v8; // r9@1
  unsigned int v9; // r5@1
  int v10; // r6@1
  int result; // r0@1

  v5 = a4;
  v6 = this;
  v7 = a3;
  v8 = *((_DWORD *)a4 + 2);
  v9 = Random::_genRandInt32(a5);
  v10 = *(_DWORD *)v5;
  *(_DWORD *)v6 = Random::_genRandInt32(a5) % 0xE + v10 + 1;
  *((_DWORD *)v6 + 1) = 0;
  *((_DWORD *)v6 + 2) = v9 % 0xE + v8 + 1;
  result = BlockSource::getHeightmap(v7, v6);
  *((_DWORD *)v6 + 1) = result;
  return result;
}


int __fastcall BiomeDecorator::_getRandomSurfacePosition(BiomeDecorator *this, BlockSource *a2, const BlockPos *a3, Random *a4, Random *a5)
{
  Random *v5; // r6@1
  BiomeDecorator *v6; // r4@1
  BlockSource *v7; // r9@1
  int v8; // r7@1
  char v9; // r5@1
  int v10; // r6@1
  unsigned int v11; // r0@1
  int v12; // r6@1
  unsigned int v13; // r7@1
  int result; // r0@1
  unsigned int v15; // r0@2
  int v16; // r1@2

  v5 = a4;
  v6 = this;
  v7 = a3;
  v8 = *((_DWORD *)a4 + 2);
  v9 = Random::_genRandInt32(a5);
  v10 = *(_DWORD *)v5;
  v11 = (Random::_genRandInt32(a5) & 0xF) + v10;
  v12 = 0;
  *(_DWORD *)v6 = v11;
  *((_DWORD *)v6 + 1) = 0;
  *((_DWORD *)v6 + 2) = (v9 & 0xF) + v8;
  v13 = BlockSource::getHeightmap(v7, v6);
  result = 0xFFFF;
  if ( (_WORD)v13 )
  {
    v15 = Random::_genRandInt32(a5);
    v16 = v15 % v13;
    result = v15 / v13;
    v12 = v16;
  }
  *((_DWORD *)v6 + 1) = v12;
  return result;
}


unsigned int __fastcall BiomeDecorator::decorateDepthSpan(int a1, int a2, Random *this, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // r6@0
  int v9; // r8@1
  int v10; // r11@1
  Random *v11; // r4@1
  int v12; // r5@1
  unsigned int result; // r0@1
  bool v14; // zf@1
  char v15; // r7@5
  char v16; // r0@5
  int v17; // r2@5
  int v18; // r3@5
  char v19; // ST04_1@10
  unsigned int v20; // r7@10
  char v21; // r0@10
  int v22; // r10@10
  __int64 v23; // r8@10
  int v24; // [sp+8h] [bp-30h]@5
  int v25; // [sp+Ch] [bp-2Ch]@5
  int v26; // [sp+10h] [bp-28h]@5

  v9 = a6;
  v10 = a4;
  v11 = this;
  v12 = a2;
  result = *(_DWORD *)a6;
  v14 = *(_DWORD *)a6 == 0;
  if ( *(_DWORD *)a6 )
  {
    v8 = a5;
    v14 = a5 == 0;
  }
  if ( !v14 )
    if ( a8 == a7 )
    {
      do
      {
        v15 = Random::_genRandInt32(v11);
        v16 = Random::_genRandInt32(v11);
        v17 = *(_DWORD *)(v10 + 4);
        v18 = *(_DWORD *)(v10 + 8);
        v24 = (v16 & 0xF) + *(_DWORD *)v10;
        v25 = v17 + a8;
        result = (v15 & 0xF) + v18;
        v26 = (v15 & 0xF) + v18;
        if ( v12 )
          result = (*(int (**)(void))(**(_DWORD **)a6 + 8))();
        --v8;
      }
      while ( v8 );
    }
    else if ( a2 )
        v19 = Random::_genRandInt32(v11);
        v20 = Random::_genRandInt32(v11);
        v21 = Random::_genRandInt32(v11);
        v22 = v9;
        v23 = *(_QWORD *)(v10 + 4);
        v24 = (v21 & 0xF) + *(_DWORD *)v10;
        v25 = a7 + v20 % (a8 - a7) + v23;
        v9 = v22;
        v26 = (v19 & 0xF) + HIDWORD(v23);
        result = (*(int (**)(void))(**(_DWORD **)v22 + 8))();
    else
        Random::_genRandInt32(v11);
        result = Random::_genRandInt32(v11);
  return result;
}


void __fastcall BiomeDecorator::~BiomeDecorator(BiomeDecorator *this)
{
  BiomeDecorator::~BiomeDecorator(this);
}


unsigned int __fastcall BiomeDecorator::_getRandomHeight(BiomeDecorator *this, int a2, int a3, BlockSource *a4, Random *a5, const BlockPos *a6)
{
  int v6; // r4@1
  unsigned int result; // r0@2

  v6 = BlockSource::getHeightmap(a4, a2 + *(_DWORD *)a6, a3 + *((_DWORD *)a6 + 2));
  if ( (_WORD)v6 )
    result = Random::_genRandInt32(a5) % (2 * v6);
  else
    result = 0;
  return result;
}


unsigned int __fastcall BiomeDecorator::decorateDepthAverage(int a1, int a2, Random *this, int a4, int a5, int a6, int a7, unsigned int a8)
{
  int v8; // r8@0
  int v9; // r4@1
  Random *v10; // r10@1
  int v11; // r5@1
  unsigned int result; // r0@1
  bool v13; // zf@1
  char v14; // ST0C_1@6
  unsigned int v15; // r6@6
  unsigned int v16; // r7@6
  char v17; // r0@6
  __int64 v18; // kr00_8@6
  int v19; // r2@6
  char v20; // r7@10
  char v21; // r0@10
  int v22; // r2@10
  int v23; // r3@10
  int v24; // [sp+10h] [bp-30h]@6
  int v25; // [sp+14h] [bp-2Ch]@6
  int v26; // [sp+18h] [bp-28h]@6

  v9 = a4;
  v10 = this;
  v11 = a2;
  result = *(_DWORD *)a6;
  v13 = *(_DWORD *)a6 == 0;
  if ( *(_DWORD *)a6 )
  {
    v8 = a5;
    v13 = a5 == 0;
  }
  if ( !v13 )
    if ( a8 )
    {
      if ( a2 )
      {
        do
        {
          v14 = Random::_genRandInt32(v10);
          v15 = Random::_genRandInt32(v10);
          v16 = Random::_genRandInt32(v10);
          v17 = Random::_genRandInt32(v10);
          v18 = *(_QWORD *)v9;
          v19 = *(_DWORD *)(v9 + 8);
          v24 = (v17 & 0xF) + *(_QWORD *)v9;
          v25 = a7 - a8 + v15 % a8 + v16 % a8 + HIDWORD(v18);
          v26 = (v14 & 0xF) + v19;
          result = (*(int (**)(void))(**(_DWORD **)a6 + 8))();
          --v8;
        }
        while ( v8 );
      }
      else
          Random::_genRandInt32(v10);
          result = Random::_genRandInt32(v10);
    }
    else
      do
        v20 = Random::_genRandInt32(v10);
        v21 = Random::_genRandInt32(v10);
        v22 = *(_DWORD *)(v9 + 4);
        v23 = *(_DWORD *)(v9 + 8);
        v24 = (v21 & 0xF) + *(_DWORD *)v9;
        v25 = a7 + v22;
        result = (v20 & 0xF) + v23;
        v26 = (v20 & 0xF) + v23;
        if ( v11 )
        --v8;
      while ( v8 );
  return result;
}
