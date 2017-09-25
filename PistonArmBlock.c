

int __fastcall PistonArmBlock::PistonArmBlock(int a1, const void **a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  int *v12; // r2@1
  float v14; // [sp+0h] [bp-18h]@1
  int v15; // [sp+4h] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(32);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_2710868;
  *(_DWORD *)(v3 + 644) = 0;
  *(_DWORD *)(v3 + 648) = 0;
  *(_DWORD *)(v3 + 652) = 0;
  Block::setSolid((Block *)v3, 0);
  Block::setPushesOutItems((Block *)v3, 1);
  (*(void (__fastcall **)(int, _DWORD *, void *))(*(_DWORD *)v3 + 452))(v3, &Vec3::ZERO, &Vec3::ONE);
  *(_DWORD *)(v3 + 24) = 20971520;
  *(_DWORD *)(v3 + 28) = 0;
  v15 = 1061997773;
  _R0 = Material::getTranslucency(*(Material **)(v3 + 56));
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.8
    VCMPE.F32       S0, S2
  }
  v12 = (int *)&v14;
    VMRS            APSR_nzcv, FPSCR
    VSTR            S0, [SP,#0x18+var_18]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v12 = &v15;
  Block::mTranslucency[v4] = *v12;
  return v3;
}


int __fastcall PistonArmBlock::getCollisionShape(PistonArmBlock *this, AABB *a2, BlockSource *a3, const BlockPos *a4, Entity *a5)
{
  return 0;
}


int __fastcall PistonArmBlock::canBeSilkTouched(PistonArmBlock *this)
{
  return 0;
}


void __fastcall PistonArmBlock::~PistonArmBlock(PistonArmBlock *this)
{
  PistonArmBlock::~PistonArmBlock(this);
}


int __fastcall PistonArmBlock::neighborChanged(PistonArmBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  BlockSource *v4; // r5@1
  BlockPos *v5; // r6@1
  int result; // r0@1
  char v7; // [sp+0h] [bp-20h]@3
  int v8; // [sp+4h] [bp-1Ch]@1
  int v9; // [sp+8h] [bp-18h]@1
  int v10; // [sp+Ch] [bp-14h]@1

  v4 = a2;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v5 = a3;
  result = (*(int (**)(void))(*(_DWORD *)this + 260))();
  if ( result == 1 )
  {
    result = BlockSource::getBlockEntity(v4, (const BlockPos *)&v8);
    if ( !result )
    {
      v7 = *(_BYTE *)(Block::mAir + 4);
      result = BlockSource::setBlock((int)v4, v5, &v7, 3);
    }
  }
  return result;
}


int __fastcall PistonArmBlock::asItemInstance(PistonArmBlock *this, BlockSource *a2, const BlockPos *a3, BlockPos *a4)
{
  BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  PistonArmBlock *v6; // r10@1
  unsigned int v7; // r7@2
  unsigned __int64 *v8; // r0@2
  __int64 v9; // kr00_8@2
  int v10; // r0@2
  int v11; // r6@2
  int v12; // r2@2
  int v13; // r0@2
  __int64 v14; // kr08_8@2
  int v15; // r0@2
  int result; // r0@2
  int v17; // [sp+4h] [bp-2Ch]@1
  int v18; // [sp+8h] [bp-28h]@1
  int v19; // [sp+Ch] [bp-24h]@1

  v4 = a4;
  v5 = a3;
  v6 = this;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( BlockSource::hasChunksAt(a3, a4, 1) == 1 )
  {
    v7 = BlockSource::getData(v5, v4);
    v8 = (unsigned __int64 *)Block::getBlockState(Block::mPiston, 15);
    v9 = *(_QWORD *)v4;
    v10 = 3 * (char)((0xFu >> (4 - (*v8 >> 32))) & (v7 >> (*v8 + 1 - (*v8 >> 32))));
    v11 = *((_DWORD *)v4 + 2);
    v12 = PistonBlock::ARM_DIRECTION_OFFSETS[v10];
    v14 = *(_QWORD *)&PistonBlock::ARM_DIRECTION_OFFSETS[v10 + 1];
    v13 = *(_QWORD *)&PistonBlock::ARM_DIRECTION_OFFSETS[v10 + 1] >> 32;
    v17 = *(_QWORD *)v4 - v12;
    v18 = HIDWORD(v9) - v14;
    v19 = v11 - v13;
    v15 = BlockSource::getBlock(v5, (const BlockPos *)&v17);
    result = (*(int (__fastcall **)(PistonArmBlock *))(*(_DWORD *)v15 + 272))(v6);
  }
  else
    result = ItemInstance::ItemInstance((int)v6);
  return result;
}


signed int __fastcall PistonArmBlock::canProvideSupport(int a1, BlockSource *a2, const BlockPos *a3, unsigned __int8 a4)
{
  unsigned __int8 v4; // r4@1
  unsigned int v5; // r5@1
  unsigned __int64 *v6; // r0@1
  unsigned int v7; // r0@1
  int v8; // r2@3
  signed int result; // r0@3

  v4 = a4;
  v5 = BlockSource::getData(a2, a3);
  v6 = (unsigned __int64 *)Block::getBlockState(Block::mPiston, 15);
  v7 = (0xFu >> (4 - (*v6 >> 32))) & (v5 >> (*v6 + 1 - (*v6 >> 32)));
  if ( (unsigned __int8)v7 >= 2u )
    LOBYTE(v7) = Facing::OPPOSITE_FACING[(char)v7];
  v8 = (unsigned __int8)v7;
  result = 0;
  if ( v8 == v4 )
    result = 1;
  return result;
}


signed int __fastcall PistonArmBlock::getSecondPart(PistonArmBlock *this, int a2, const BlockPos *a3, BlockPos *a4)
{
  unsigned int v4; // r9@1
  BlockPos *v5; // r4@1
  const BlockPos *v6; // r5@1
  unsigned __int64 *v7; // r0@1
  int v8; // r0@1
  int v9; // r2@1
  __int64 v10; // kr00_8@1
  int v11; // r0@1
  int v12; // r1@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = (unsigned __int64 *)Block::getBlockState(Block::mPiston, 15);
  v8 = 3 * (char)((0xFu >> (4 - (*v7 >> 32))) & (v4 >> (*v7 + 1 - (*v7 >> 32))));
  v9 = PistonBlock::ARM_DIRECTION_OFFSETS[v8];
  v10 = *(_QWORD *)&PistonBlock::ARM_DIRECTION_OFFSETS[v8 + 1];
  v11 = *((_DWORD *)v6 + 2) - HIDWORD(v10);
  v12 = (*(_QWORD *)v6 >> 32) - v10;
  *(_DWORD *)v5 = *(_QWORD *)v6 - v9;
  *((_DWORD *)v5 + 1) = v12;
  *((_DWORD *)v5 + 2) = v11;
  return 1;
}


int __fastcall PistonArmBlock::addCollisionShapes(int a1, BlockSource *this, BlockPos *a3, int a4, int a5)
{
  int v5; // r11@1
  AABB *v6; // r8@1
  BlockPos *v7; // r9@1
  BlockSource *v8; // r10@1
  char v9; // r0@1
  char v10; // r0@4
  char v11; // r0@7
  unsigned int v12; // r4@10
  unsigned __int64 *v13; // r0@10
  int v14; // r7@10
  char *v15; // r1@10
  int v16; // r3@10
  int v17; // r4@10
  int v18; // r5@10
  int v19; // r2@10
  int v20; // r3@10
  int v21; // r4@10
  int v22; // r5@10
  char *v23; // r1@10
  char *v24; // r0@10
  int v25; // r3@10
  int v26; // r5@10
  int v27; // r6@10
  int v28; // r4@10
  int v29; // r5@10
  int v30; // r6@10
  signed int v31; // r4@10
  int v32; // r2@10
  int v33; // r3@10
  int v34; // r6@10
  int v35; // r3@10
  int v36; // r5@10
  int v37; // r6@10
  PistonBlockEntity *v38; // r4@11
  char v45; // [sp+4h] [bp-2B4h]@12
  char v46; // [sp+20h] [bp-298h]@12
  char v47; // [sp+3Ch] [bp-27Ch]@12
  float v48; // [sp+58h] [bp-260h]@12
  float v51; // [sp+64h] [bp-254h]@12
  float v54; // [sp+70h] [bp-248h]@12
  int v55; // [sp+7Ch] [bp-23Ch]@10
  int v56; // [sp+80h] [bp-238h]@10
  int v57; // [sp+84h] [bp-234h]@10
  int v58; // [sp+88h] [bp-230h]@10
  int v59; // [sp+8Ch] [bp-22Ch]@10
  int v60; // [sp+90h] [bp-228h]@10
  int v61; // [sp+94h] [bp-224h]@10
  int v62; // [sp+98h] [bp-220h]@10
  int v63; // [sp+9Ch] [bp-21Ch]@10
  int v64; // [sp+A0h] [bp-218h]@10
  int v65; // [sp+A8h] [bp-210h]@10
  int v66; // [sp+ACh] [bp-20Ch]@10
  int v67; // [sp+B0h] [bp-208h]@10
  int v68; // [sp+B4h] [bp-204h]@10
  int v69; // [sp+B8h] [bp-200h]@10
  int v70; // [sp+BCh] [bp-1FCh]@10
  int v71; // [sp+C0h] [bp-1F8h]@10
  int v72; // [sp+C8h] [bp-1F0h]@10
  int v73; // [sp+CCh] [bp-1ECh]@10
  int v74; // [sp+D0h] [bp-1E8h]@10
  int v75; // [sp+D4h] [bp-1E4h]@10
  int v76; // [sp+D8h] [bp-1E0h]@10
  int v77; // [sp+DCh] [bp-1DCh]@10
  int v78; // [sp+E0h] [bp-1D8h]@10
  int v79; // [sp+E4h] [bp-1D4h]@9
  signed int v80; // [sp+E8h] [bp-1D0h]@9
  int v81; // [sp+ECh] [bp-1CCh]@9
  int v82; // [sp+F0h] [bp-1C8h]@9
  int v83; // [sp+F4h] [bp-1C4h]@9
  int v84; // [sp+F8h] [bp-1C0h]@9
  int v85; // [sp+FCh] [bp-1BCh]@9
  signed int v86; // [sp+100h] [bp-1B8h]@9
  int v87; // [sp+104h] [bp-1B4h]@9
  int v88; // [sp+108h] [bp-1B0h]@9
  int v89; // [sp+10Ch] [bp-1ACh]@9
  int v90; // [sp+110h] [bp-1A8h]@9
  int v91; // [sp+114h] [bp-1A4h]@9
  signed int v92; // [sp+118h] [bp-1A0h]@9
  int v93; // [sp+11Ch] [bp-19Ch]@9
  int v94; // [sp+120h] [bp-198h]@9
  int v95; // [sp+124h] [bp-194h]@9
  int v96; // [sp+128h] [bp-190h]@9
  int v97; // [sp+12Ch] [bp-18Ch]@9
  signed int v98; // [sp+130h] [bp-188h]@9
  int v99; // [sp+134h] [bp-184h]@9
  int v100; // [sp+138h] [bp-180h]@9
  int v101; // [sp+13Ch] [bp-17Ch]@9
  int v102; // [sp+140h] [bp-178h]@9
  int v103; // [sp+144h] [bp-174h]@9
  signed int v104; // [sp+148h] [bp-170h]@9
  int v105; // [sp+14Ch] [bp-16Ch]@9
  int v106; // [sp+150h] [bp-168h]@9
  signed int v107; // [sp+154h] [bp-164h]@9
  int v108; // [sp+158h] [bp-160h]@9
  int v109; // [sp+15Ch] [bp-15Ch]@9
  signed int v110; // [sp+160h] [bp-158h]@9
  signed int v111; // [sp+164h] [bp-154h]@9
  int v112; // [sp+168h] [bp-150h]@9
  int v113; // [sp+16Ch] [bp-14Ch]@9
  int v114; // [sp+170h] [bp-148h]@9
  int v115; // [sp+174h] [bp-144h]@6
  signed int v116; // [sp+178h] [bp-140h]@6
  int v117; // [sp+17Ch] [bp-13Ch]@6
  int v118; // [sp+180h] [bp-138h]@6
  signed int v119; // [sp+184h] [bp-134h]@6
  int v120; // [sp+188h] [bp-130h]@6
  int v121; // [sp+18Ch] [bp-12Ch]@6
  signed int v122; // [sp+190h] [bp-128h]@6
  int v123; // [sp+194h] [bp-124h]@6
  int v124; // [sp+198h] [bp-120h]@6
  signed int v125; // [sp+19Ch] [bp-11Ch]@6
  signed int v126; // [sp+1A0h] [bp-118h]@6
  int v127; // [sp+1A4h] [bp-114h]@6
  signed int v128; // [sp+1A8h] [bp-110h]@6
  signed int v129; // [sp+1ACh] [bp-10Ch]@6
  int v130; // [sp+1B0h] [bp-108h]@6
  signed int v131; // [sp+1B4h] [bp-104h]@6
  signed int v132; // [sp+1B8h] [bp-100h]@6
  int v133; // [sp+1BCh] [bp-FCh]@6
  signed int v134; // [sp+1C0h] [bp-F8h]@6
  int v135; // [sp+1C4h] [bp-F4h]@6
  int v136; // [sp+1C8h] [bp-F0h]@6
  signed int v137; // [sp+1CCh] [bp-ECh]@6
  int v138; // [sp+1D0h] [bp-E8h]@6
  int v139; // [sp+1D4h] [bp-E4h]@6
  signed int v140; // [sp+1D8h] [bp-E0h]@6
  int v141; // [sp+1DCh] [bp-DCh]@6
  int v142; // [sp+1E0h] [bp-D8h]@6
  signed int v143; // [sp+1E4h] [bp-D4h]@6
  int v144; // [sp+1E8h] [bp-D0h]@6
  int v145; // [sp+1ECh] [bp-CCh]@6
  signed int v146; // [sp+1F0h] [bp-C8h]@6
  signed int v147; // [sp+1F4h] [bp-C4h]@6
  int v148; // [sp+1F8h] [bp-C0h]@6
  signed int v149; // [sp+1FCh] [bp-BCh]@6
  signed int v150; // [sp+200h] [bp-B8h]@6
  __int64 v151; // [sp+204h] [bp-B4h]@3
  signed int v152; // [sp+20Ch] [bp-ACh]@3
  int v153; // [sp+210h] [bp-A8h]@3
  signed int v154; // [sp+214h] [bp-A4h]@3
  signed int v155; // [sp+218h] [bp-A0h]@3
  int v156; // [sp+21Ch] [bp-9Ch]@3
  signed int v157; // [sp+220h] [bp-98h]@3
  int v158; // [sp+224h] [bp-94h]@3
  int v159; // [sp+228h] [bp-90h]@3
  signed int v160; // [sp+22Ch] [bp-8Ch]@3
  int v161; // [sp+230h] [bp-88h]@3
  int v162; // [sp+234h] [bp-84h]@3
  signed int v163; // [sp+238h] [bp-80h]@3
  int v164; // [sp+23Ch] [bp-7Ch]@3
  int v165; // [sp+240h] [bp-78h]@3
  signed int v166; // [sp+244h] [bp-74h]@3
  int v167; // [sp+248h] [bp-70h]@3
  int v168; // [sp+24Ch] [bp-6Ch]@3
  signed int v169; // [sp+250h] [bp-68h]@3
  signed int v170; // [sp+254h] [bp-64h]@3
  int v171; // [sp+258h] [bp-60h]@3
  __int64 v172; // [sp+25Ch] [bp-5Ch]@3
  int v173; // [sp+264h] [bp-54h]@3
  signed int v174; // [sp+268h] [bp-50h]@3
  signed int v175; // [sp+26Ch] [bp-4Ch]@3
  int v176; // [sp+270h] [bp-48h]@3
  signed int v177; // [sp+274h] [bp-44h]@3
  signed int v178; // [sp+278h] [bp-40h]@3
  int v179; // [sp+27Ch] [bp-3Ch]@3
  signed __int64 v180; // [sp+280h] [bp-38h]@3
  int v181; // [sp+288h] [bp-30h]@3
  signed int v182; // [sp+28Ch] [bp-2Ch]@3
  signed int v183; // [sp+290h] [bp-28h]@3

  v5 = a1;
  v6 = (AABB *)a4;
  v7 = a3;
  v8 = this;
  v9 = byte_2812DBC;
  __dmb();
  if ( !(v9 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_2812DBC) )
  {
    v181 = 1050673152;
    v182 = 1061158912;
    v183 = 1050673152;
    v179 = 1060110336;
    v180 = 4553139224339021824LL;
    AABB::AABB((int)&unk_2812BC4, (int)&v181, (int)&v179);
    v176 = 1050673152;
    v177 = -1098907648;
    v178 = 1050673152;
    v173 = 1060110336;
    v174 = 1048576000;
    v175 = 1060110336;
    AABB::AABB((int)&unk_2812BE0, (int)&v176, (int)&v173);
    v172 = -4719772408433606656LL;
    v168 = 1060110336;
    v169 = 1060110336;
    v170 = 1048576000;
    v171 = 1050673152;
    AABB::AABB((int)&unk_2812BFC, (int)&v171, (int)&v168);
    v165 = 1050673152;
    v166 = 1050673152;
    v167 = 1061158912;
    v162 = 1060110336;
    v163 = 1060110336;
    v164 = 1067450368;
    AABB::AABB((int)&unk_2812C18, (int)&v165, (int)&v162);
    v159 = -1098907648;
    v160 = 1050673152;
    v161 = 1050673152;
    v156 = 1048576000;
    v157 = 1060110336;
    v158 = 1060110336;
    AABB::AABB((int)&unk_2812C34, (int)&v159, (int)&v156);
    v154 = 1050673152;
    v155 = 1050673152;
    v151 = 4553139224339021824LL;
    v152 = 1060110336;
    v153 = 1061158912;
    AABB::AABB((int)&unk_2812C50, (int)&v153, (int)&v151);
    j___cxa_guard_release((unsigned int *)&byte_2812DBC);
  }
  v10 = byte_2812DC0;
  if ( !(v10 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_2812DC0) )
    v148 = 1052770304;
    v149 = 1048576000;
    v150 = 1052770304;
    v145 = 1059061760;
    v146 = 1061158912;
    v147 = 1059061760;
    AABB::AABB((int)&unk_2812C6C, (int)&v148, (int)&v145);
    v144 = 1052770304;
    v139 = 1059061760;
    v140 = 1061158912;
    v141 = 1059061760;
    v142 = 1052770304;
    v143 = 1048576000;
    AABB::AABB((int)&unk_2812C88, (int)&v142, (int)&v139);
    v136 = 1052770304;
    v137 = 1052770304;
    v138 = 1048576000;
    v133 = 1059061760;
    v134 = 1059061760;
    v135 = 1061158912;
    AABB::AABB((int)&unk_2812CA4, (int)&v136, (int)&v133);
    v131 = 1052770304;
    v132 = 1048576000;
    v127 = 1059061760;
    v128 = 1059061760;
    v129 = 1061158912;
    v130 = 1052770304;
    AABB::AABB((int)&unk_2812CC0, (int)&v130, (int)&v127);
    v124 = 1048576000;
    v125 = 1052770304;
    v126 = 1052770304;
    v121 = 1061158912;
    v122 = 1059061760;
    v123 = 1059061760;
    AABB::AABB((int)&unk_2812CDC, (int)&v124, (int)&v121);
    v120 = 1052770304;
    v115 = 1061158912;
    v116 = 1059061760;
    v117 = 1059061760;
    v118 = 1048576000;
    v119 = 1052770304;
    AABB::AABB((int)&unk_2812CF8, (int)&v118, (int)&v115);
    j___cxa_guard_release((unsigned int *)&byte_2812DC0);
  v11 = byte_2812DC4;
  if ( !(v11 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_2812DC4) )
    v112 = 0;
    v113 = 0;
    v114 = 0;
    v109 = 1065353216;
    v110 = 1048576000;
    v111 = 1065353216;
    AABB::AABB((int)&unk_2812D14, (int)&v112, (int)&v109);
    v106 = 0;
    v107 = 1061158912;
    v108 = 0;
    v103 = 1065353216;
    v104 = 1065353216;
    v105 = 1065353216;
    AABB::AABB((int)&unk_2812D30, (int)&v106, (int)&v103);
    v100 = 0;
    v101 = 0;
    v102 = 1061158912;
    v97 = 1065353216;
    v98 = 1065353216;
    v99 = 1065353216;
    AABB::AABB((int)&unk_2812D4C, (int)&v100, (int)&v97);
    v94 = 0;
    v95 = 0;
    v96 = 0;
    v91 = 1065353216;
    v92 = 1065353216;
    v93 = 1048576000;
    AABB::AABB((int)&unk_2812D68, (int)&v94, (int)&v91);
    v88 = 1061158912;
    v89 = 0;
    v90 = 0;
    v85 = 1065353216;
    v86 = 1065353216;
    v87 = 1065353216;
    AABB::AABB((int)&unk_2812D84, (int)&v88, (int)&v85);
    v82 = 0;
    v83 = 0;
    v84 = 0;
    v79 = 1048576000;
    v80 = 1065353216;
    v81 = 1065353216;
    AABB::AABB((int)&unk_2812DA0, (int)&v82, (int)&v79);
    j___cxa_guard_release((unsigned int *)&byte_2812DC4);
  v12 = BlockSource::getData(v8, v7);
  v13 = (unsigned __int64 *)Block::getBlockState(Block::mPiston, 15);
  v14 = (char)((0xFu >> (4 - (*v13 >> 32))) & (v12 >> (*v13 + 1 - (*v13 >> 32))));
  v15 = (char *)&unk_2812BC4 + 28 * v14;
  v16 = *(_DWORD *)v15;
  v17 = *((_DWORD *)v15 + 1);
  v18 = *((_DWORD *)v15 + 2);
  v15 += 12;
  v72 = v16;
  v73 = v17;
  v74 = v18;
  v19 = *(_DWORD *)v15;
  v20 = *((_DWORD *)v15 + 1);
  v21 = *((_DWORD *)v15 + 2);
  v22 = *((_DWORD *)v15 + 3);
  v23 = (char *)&unk_2812C6C + 28 * v14;
  v24 = (char *)&unk_2812D14 + 28 * v14;
  v75 = v19;
  v76 = v20;
  v77 = v21;
  v78 = v22;
  v25 = *(_DWORD *)v23;
  v26 = *((_DWORD *)v23 + 1);
  v27 = *((_DWORD *)v23 + 2);
  v23 += 12;
  v65 = v25;
  v66 = v26;
  v67 = v27;
  v28 = *((_DWORD *)v23 + 1);
  v29 = *((_DWORD *)v23 + 2);
  v30 = *((_DWORD *)v23 + 3);
  v68 = *(_DWORD *)v23;
  v69 = v28;
  v70 = v29;
  v71 = v30;
  v31 = 0;
  v32 = *(_DWORD *)v24;
  v33 = *((_DWORD *)v24 + 1);
  v34 = *((_DWORD *)v24 + 2);
  v24 += 12;
  v58 = v32;
  v59 = v33;
  v60 = v34;
  v35 = *((_DWORD *)v24 + 1);
  v36 = *((_DWORD *)v24 + 2);
  v37 = *((_DWORD *)v24 + 3);
  v61 = *(_DWORD *)v24;
  v62 = v35;
  v63 = v36;
  v64 = v37;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  if ( (*(int (__fastcall **)(int, BlockSource *, BlockPos *, int *))(*(_DWORD *)v5 + 260))(v5, v8, v7, &v55) )
    v38 = (PistonBlockEntity *)BlockSource::getBlockEntity(v8, (const BlockPos *)&v55);
    if ( v38 )
    {
      Vec3::Vec3((int)&v51, (int)&v55);
      Vec3::Vec3((int)&v48, (int)&PistonBlock::ARM_DIRECTION_OFFSETS[3 * v14]);
      _R0 = PistonBlockEntity::getProgress(v38, 1.0);
      __asm
      {
        VLDR            S0, [SP,#0x2B8+var_260]
        VMOV            S6, R0
        VLDR            S2, [SP,#0x2B8+var_25C]
        VLDR            S4, [SP,#0x2B8+var_258]
        VMUL.F32        S0, S0, S6
        VMUL.F32        S2, S2, S6
        VLDR            S8, [SP,#0x2B8+var_250]
        VMUL.F32        S4, S4, S6
        VLDR            S6, [SP,#0x2B8+var_254]
        VLDR            S10, [SP,#0x2B8+var_24C]
        VADD.F32        S0, S6, S0
        VADD.F32        S2, S8, S2
        VADD.F32        S4, S10, S4
        VSTR            S0, [SP,#0x2B8+var_248]
        VSTR            S2, [SP,#0x2B8+var_244]
        VSTR            S4, [SP,#0x2B8+var_240]
      }
      AABB::translated((AABB *)&v47, (const Vec3 *)&v72, (int)&v54);
      Block::addAABB(v5, (AABB *)&v47, v6, a5);
      AABB::translated((AABB *)&v46, (const Vec3 *)&v65, (int)&v54);
      Block::addAABB(v5, (AABB *)&v46, v6, a5);
      AABB::translated((AABB *)&v45, (const Vec3 *)&v58, (int)&v54);
      Block::addAABB(v5, (AABB *)&v45, v6, a5);
      v31 = 1;
    }
    else
      v31 = 0;
  return v31;
}


void __fastcall PistonArmBlock::~PistonArmBlock(PistonArmBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall PistonArmBlock::breaksFallingBlocks(PistonArmBlock *this, int a2)
{
  return 0;
}
