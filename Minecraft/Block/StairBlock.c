

_BOOL4 __fastcall StairBlock::isUpsideDown(StairBlock *this, const unsigned __int8 *a2)
{
  const unsigned __int8 *v2; // r4@1
  BlockState *v3; // r0@1

  v2 = a2;
  v3 = (BlockState *)Block::getBlockState((int)this, 40);
  return j_j_j__ZNK10BlockState7getBoolERKh_1(v3, v2);
}


int __fastcall StairBlock::StairBlock(int a1, const void **a2, int a3, Block *a4)
{
  Block *v4; // r6@1
  int v5; // r4@1
  int v6; // r5@1
  const void **v7; // r7@1
  int v8; // r0@1
  int v9; // r0@1
  void (__fastcall *v10)(int, int); // r7@1
  void (__fastcall *v17)(int, char *); // r2@1
  int *v19; // r2@1
  float v21; // [sp+0h] [bp-20h]@1
  int v22; // [sp+4h] [bp-1Ch]@1
  char v23; // [sp+8h] [bp-18h]@1

  v4 = a4;
  v5 = a1;
  v6 = a3;
  v7 = a2;
  v8 = Block::getMaterial(a4);
  Block::Block(v5, v7, v6, v8);
  *(_DWORD *)v5 = &off_2714AE8;
  *(_DWORD *)(v5 + 644) = v4;
  v9 = Block::getDestroySpeed(v4);
  Block::setDestroyTime((Block *)v5, *(float *)&v9);
  v10 = *(void (__fastcall **)(int, int))(*(_DWORD *)v5 + 464);
  _R0 = (*(int (__fastcall **)(Block *, _DWORD))(*(_DWORD *)v4 + 284))(v4, 0);
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.33333
    VMUL.F32        S0, S0, S2
    VMOV            R1, S0
  }
  v10(v5, _R1);
  v17 = *(void (__fastcall **)(int, char *))(*(_DWORD *)v5 + 456);
  v23 = Brightness::MAX;
  v17(v5, &v23);
  Block::setSolid((Block *)v5, 0);
  Block::setPushesOutItems((Block *)v5, 1);
  *(_DWORD *)(v5 + 20) = Block::getRenderLayer(v4);
  *(_DWORD *)(v5 + 24) = 1;
  *(_DWORD *)(v5 + 28) = 0;
  v22 = 1061997773;
  _R0 = Material::getTranslucency(*(Material **)(v5 + 56));
    VLDR            S2, =0.8
    VCMPE.F32       S0, S2
  v19 = (int *)&v21;
    VMRS            APSR_nzcv, FPSCR
    VSTR            S0, [SP,#0x20+var_20]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v19 = &v22;
  Block::mTranslucency[v6] = *v19;
  return v5;
}


signed int __fastcall StairBlock::isStairBlock(StairBlock *this)
{
  return 1;
}


int __fastcall StairBlock::isLockAttached(StairBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  int v4; // r4@1
  int result; // r0@3
  unsigned __int8 v6; // [sp+4h] [bp-Ch]@1
  unsigned __int8 v7; // [sp+5h] [bp-Bh]@1

  v4 = a4;
  BlockSource::getBlockAndData((BlockSource *)&v6, a2, (int)a3);
  if ( v7 == v4 && v6 )
    result = (*(int (**)(void))(*(_DWORD *)Block::mBlocks[v6] + 84))();
  else
    result = 0;
  return result;
}


unsigned int __fastcall StairBlock::getDirection(StairBlock *this, const unsigned __int8 *a2)
{
  const unsigned __int8 *v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 12);
  return (0xFu >> (4 - (*v3 >> 32))) & (*v2 >> (*v3 + 1 - (*v3 >> 32)));
}


int __fastcall StairBlock::onPlace(StairBlock *this, BlockSource *a2, const BlockPos *a3)
{
  StairBlock *v3; // r6@1

  v3 = this;
  (*(void (**)(void))(*(_DWORD *)this + 252))();
  return (*(int (**)(void))(**((_DWORD **)v3 + 161) + 156))();
}


int __fastcall StairBlock::canBeSilkTouched(StairBlock *this)
{
  return 0;
}


void __fastcall StairBlock::~StairBlock(StairBlock *this)
{
  StairBlock::~StairBlock(this);
}


void __fastcall StairBlock::~StairBlock(StairBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall StairBlock::getOutline(StairBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4)
{
  AABB *v4; // r4@1
  const BlockPos *v5; // r5@1
  char v7; // [sp+Ch] [bp-1Ch]@1

  v4 = a4;
  v5 = a3;
  AABB::set((unsigned int)a4, 0LL, 1.0, 1.0, 1.0);
  Vec3::Vec3((int)&v7, (int)v5);
  return AABB::move(v4, (const Vec3 *)&v7);
}


int __fastcall StairBlock::shapeZFightShrink(StairBlock *this, AABB *a2)
{
  AABB *v2; // r4@1
  int v4; // [sp+4h] [bp-3Ch]@1
  signed int v5; // [sp+8h] [bp-38h]@1
  int v6; // [sp+Ch] [bp-34h]@1
  int v7; // [sp+10h] [bp-30h]@1
  signed int v8; // [sp+14h] [bp-2Ch]@1
  int v9; // [sp+18h] [bp-28h]@1
  int v10; // [sp+1Ch] [bp-24h]@1
  int v11; // [sp+20h] [bp-20h]@1
  int v12; // [sp+24h] [bp-1Ch]@1
  int v13; // [sp+28h] [bp-18h]@1
  int v14; // [sp+2Ch] [bp-14h]@1
  int v15; // [sp+30h] [bp-10h]@1
  char v16; // [sp+34h] [bp-Ch]@1

  v2 = a2;
  v7 = 953267991;
  v8 = 953267991;
  v9 = 953267991;
  AABB::shrink((AABB *)&v10, a2, (int)&v7);
  *(_DWORD *)v2 = v10;
  *((_DWORD *)v2 + 1) = v11;
  *((_DWORD *)v2 + 2) = v12;
  *((_DWORD *)v2 + 3) = v13;
  *((_DWORD *)v2 + 4) = v14;
  *((_DWORD *)v2 + 5) = v15;
  *((_BYTE *)v2 + 24) = v16;
  v4 = 1056964608;
  v5 = 1056964608;
  v6 = 1056964608;
  return AABB::expand(v2, (const Vec3 *)&v4);
}


int __fastcall StairBlock::clip(StairBlock *this, BlockSource *a2, const BlockPos *a3, const Vec3 *a4, const Vec3 *a5, int a6, int a7)
{
  const BlockPos *v7; // r7@1
  BlockSource *v8; // r4@1
  BlockSource *v9; // r6@1
  unsigned int v10; // r10@1
  unsigned __int64 *v11; // r0@1
  char v12; // r1@1
  unsigned int v13; // r8@1
  BlockState *v14; // r0@1
  int v15; // r9@3
  int v16; // r10@3
  char *v17; // r0@4
  int v18; // r1@4
  char v20; // r1@5
  int v21; // r0@5
  char *v22; // r0@5
  int v23; // r1@5
  char v24; // r1@5
  int v29; // r0@5
  char *v30; // r0@5
  int v31; // r1@5
  int v32; // r0@5
  char *v33; // r1@5
  int result; // r0@11
  StairBlock *v36; // [sp+14h] [bp-324h]@1
  int v37; // [sp+18h] [bp-320h]@5
  char v38; // [sp+1Ch] [bp-31Ch]@5
  int v39; // [sp+20h] [bp-318h]@5
  int v40; // [sp+24h] [bp-314h]@5
  int v41; // [sp+28h] [bp-310h]@5
  int v42; // [sp+2Ch] [bp-30Ch]@5
  int v43; // [sp+30h] [bp-308h]@5
  int v44; // [sp+34h] [bp-304h]@5
  int v45; // [sp+38h] [bp-300h]@5
  __int16 v46; // [sp+3Ch] [bp-2FCh]@5
  int v47; // [sp+40h] [bp-2F8h]@5
  int v48; // [sp+44h] [bp-2F4h]@5
  int v49; // [sp+48h] [bp-2F0h]@5
  int v50; // [sp+4Ch] [bp-2ECh]@5
  int v51; // [sp+50h] [bp-2E8h]@5
  int v52; // [sp+54h] [bp-2E4h]@5
  char v53; // [sp+58h] [bp-2E0h]@5
  int v54; // [sp+60h] [bp-2D8h]@5
  char v55; // [sp+64h] [bp-2D4h]@5
  int v56; // [sp+68h] [bp-2D0h]@5
  int v57; // [sp+6Ch] [bp-2CCh]@5
  int v58; // [sp+70h] [bp-2C8h]@5
  int v59; // [sp+74h] [bp-2C4h]@5
  int v60; // [sp+78h] [bp-2C0h]@5
  int v61; // [sp+7Ch] [bp-2BCh]@5
  int v62; // [sp+80h] [bp-2B8h]@5
  __int16 v63; // [sp+84h] [bp-2B4h]@5
  int v64; // [sp+88h] [bp-2B0h]@5
  int v65; // [sp+8Ch] [bp-2ACh]@5
  int v66; // [sp+90h] [bp-2A8h]@5
  int v67; // [sp+94h] [bp-2A4h]@5
  int v68; // [sp+98h] [bp-2A0h]@5
  int v69; // [sp+9Ch] [bp-29Ch]@5
  char v70; // [sp+A0h] [bp-298h]@5
  int v71; // [sp+A8h] [bp-290h]@4
  char v72; // [sp+ACh] [bp-28Ch]@4
  int v73; // [sp+B0h] [bp-288h]@4
  int v74; // [sp+B4h] [bp-284h]@4
  int v75; // [sp+B8h] [bp-280h]@4
  int v76; // [sp+BCh] [bp-27Ch]@4
  int v77; // [sp+C0h] [bp-278h]@4
  int v78; // [sp+C4h] [bp-274h]@4
  int v79; // [sp+C8h] [bp-270h]@4
  __int16 v80; // [sp+CCh] [bp-26Ch]@4
  int v81; // [sp+D0h] [bp-268h]@4
  int v82; // [sp+D4h] [bp-264h]@4
  int v83; // [sp+D8h] [bp-260h]@4
  int v84; // [sp+DCh] [bp-25Ch]@4
  int v85; // [sp+E0h] [bp-258h]@4
  int v86; // [sp+E4h] [bp-254h]@4
  char v87; // [sp+E8h] [bp-250h]@4
  unsigned __int8 v88; // [sp+F3h] [bp-245h]@1
  char v89[580]; // [sp+F4h] [bp-244h]@1

  v36 = this;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  HitResult::HitResult((HitResult *)v89);
  HitResult::HitResult((HitResult *)&v89[68]);
  HitResult::HitResult((HitResult *)&v89[136]);
  HitResult::HitResult((HitResult *)&v89[204]);
  HitResult::HitResult((HitResult *)&v89[272]);
  HitResult::HitResult((HitResult *)&v89[340]);
  HitResult::HitResult((HitResult *)&v89[408]);
  HitResult::HitResult((HitResult *)&v89[476]);
  v10 = BlockSource::getData(v8, v7);
  v11 = (unsigned __int64 *)Block::getBlockState((int)v9, 12);
  v12 = *v11;
  LOBYTE(v11) = *v11 >> 32;
  v88 = v10;
  v13 = (v10 >> (v12 + 1 - (_BYTE)v11)) & (0xFu >> (4 - (_BYTE)v11));
  v14 = (BlockState *)Block::getBlockState((int)v9, 40);
  if ( BlockState::getBool(v14, &v88) )
    v13 += 4;
  v15 = 0;
  v16 = 0;
  do
  {
    Block::clip((Block *)&v71, v9, v8, v7, __PAIR__(a6, (unsigned int)a5), 1);
    ++v16;
    *(_DWORD *)&v89[v15] = v71;
    v17 = &v89[v15];
    v15 += 68;
    v17[4] = v72;
    *((_DWORD *)v17 + 2) = v73;
    *((_DWORD *)v17 + 3) = v74;
    *((_DWORD *)v17 + 4) = v75;
    *((_DWORD *)v17 + 5) = v76;
    *((_DWORD *)v17 + 6) = v77;
    *((_DWORD *)v17 + 7) = v78;
    *((_WORD *)v17 + 18) = v80;
    v18 = v81;
    *((_DWORD *)v17 + 8) = v79;
    *((_DWORD *)v17 + 10) = v18;
    *((_DWORD *)v17 + 11) = v82;
    *((_DWORD *)v17 + 12) = v83;
    *((_DWORD *)v17 + 13) = v84;
    *((_DWORD *)v17 + 14) = v85;
    *((_DWORD *)v17 + 15) = v86;
    v17[64] = v87;
  }
  while ( v15 != 544 );
  _R6 = a6;
  HitResult::HitResult((int)&v54, a6);
  v20 = v55;
  v21 = 17 * StairBlock::DEAD_SPACES[2 * v13];
  *(_DWORD *)&v89[68 * StairBlock::DEAD_SPACES[2 * v13]] = v54;
  v22 = &v89[4 * v21];
  v22[4] = v20;
  *((_DWORD *)v22 + 2) = v56;
  *((_DWORD *)v22 + 3) = v57;
  *((_DWORD *)v22 + 4) = v58;
  *((_DWORD *)v22 + 5) = v59;
  *((_DWORD *)v22 + 6) = v60;
  *((_DWORD *)v22 + 7) = v61;
  *((_WORD *)v22 + 18) = v63;
  v23 = v64;
  *((_DWORD *)v22 + 8) = v62;
  *((_DWORD *)v22 + 10) = v23;
  *((_DWORD *)v22 + 11) = v65;
  *((_DWORD *)v22 + 12) = v66;
  *((_DWORD *)v22 + 13) = v67;
  *((_DWORD *)v22 + 14) = v68;
  *((_DWORD *)v22 + 15) = v69;
  v22[64] = v70;
  HitResult::HitResult((int)&v37, a6);
  v24 = v38;
  __asm { VLDR            S0, =0.0 }
  v29 = 17 * StairBlock::DEAD_SPACES[2 * v13 + 1];
  *(_DWORD *)&v89[68 * StairBlock::DEAD_SPACES[2 * v13 + 1]] = v37;
  v30 = &v89[4 * v29];
  v30[4] = v24;
  *((_DWORD *)v30 + 2) = v39;
  *((_DWORD *)v30 + 3) = v40;
  *((_DWORD *)v30 + 4) = v41;
  *((_DWORD *)v30 + 5) = v42;
  *((_DWORD *)v30 + 6) = v43;
  *((_DWORD *)v30 + 7) = v44;
  *((_WORD *)v30 + 18) = v46;
  v31 = v47;
  *((_DWORD *)v30 + 8) = v45;
  *((_DWORD *)v30 + 10) = v31;
  *((_DWORD *)v30 + 11) = v48;
  *((_DWORD *)v30 + 12) = v49;
  *((_DWORD *)v30 + 13) = v50;
  *((_DWORD *)v30 + 14) = v51;
  *((_DWORD *)v30 + 15) = v52;
  v30[64] = v53;
  v32 = 0;
  __asm { VLDR            S2, [R6] }
  v33 = 0;
  __asm
    VLDR            S4, [R6,#4]
    VLDR            S6, [R6,#8]
    if ( (*(_DWORD *)&v89[v32] & 0xFFFFFFFE) != 2 )
    {
      _R2 = &v89[v32];
      __asm
      {
        VLDR            S8, [R2,#0x14]
        VLDR            S10, [R2,#0x18]
        VSUB.F32        S8, S2, S8
        VLDR            S12, [R2,#0x1C]
        VSUB.F32        S10, S4, S10
        VSUB.F32        S12, S6, S12
        VMUL.F32        S8, S8, S8
        VMUL.F32        S10, S10, S10
        VMUL.F32        S12, S12, S12
        VADD.F32        S8, S10, S8
        VADD.F32        S8, S8, S12
        VCMPE.F32       S8, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S0, S8 }
        v33 = &v89[v32];
    }
    v32 += 68;
  while ( v32 != 544 );
  if ( v33 )
    result = HitResult::HitResult((int)v36, (int)v33);
  else
    result = HitResult::HitResult((int)v36, a6);
  return result;
}


__int16 *__fastcall StairBlock::setInnerPieceShape(StairBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5)
{
  const BlockPos *v5; // r9@1
  BlockSource *v6; // r10@1
  StairBlock *v7; // r8@1
  AABB *v8; // r6@1
  unsigned int v9; // r5@1
  __int64 v10; // kr00_8@1
  BlockState *v11; // r0@1
  _BOOL4 v12; // r0@1
  _BOOL4 v17; // r11@1
  __int16 *result; // r0@3
  int v19; // r1@4
  int v20; // r2@4
  BlockState *v21; // r0@6
  unsigned __int64 *v22; // r0@7
  unsigned int v23; // r0@7
  AABB *v24; // r5@8
  int v25; // r2@9
  int v26; // r4@9
  int v27; // r0@10
  _DWORD *v28; // r1@11
  int v29; // r1@12
  int v30; // r2@12
  BlockState *v31; // r0@14
  unsigned __int64 *v32; // r0@15
  unsigned int v33; // r0@15
  int v34; // r2@17
  int v35; // r4@17
  int v36; // r0@18
  _DWORD *v37; // r1@19
  int v38; // r2@20
  BlockState *v39; // r0@22
  unsigned __int64 *v40; // r0@23
  unsigned int v41; // r0@23
  int v42; // r1@25
  int v43; // r2@25
  int v44; // r4@25
  int v45; // r2@30
  BlockState *v46; // r0@32
  unsigned __int64 *v47; // r0@33
  unsigned int v48; // r0@33
  int v49; // r1@35
  int v50; // r2@35
  int v51; // r4@35
  int v52; // r0@36
  _DWORD *v53; // r1@37
  int v54; // r2@38
  int v55; // r4@38
  int v56; // r0@41
  int v57; // r2@44
  int v58; // r4@44
  int v59; // r0@45
  _DWORD *v60; // r1@46
  int v61; // r1@47
  int v62; // r2@47
  int v63; // r4@47
  int v64; // r1@52
  int v65; // r2@52
  int v66; // r4@52
  float v69; // [sp+0h] [bp-138h]@0
  float v70; // [sp+4h] [bp-134h]@0
  float v71; // [sp+8h] [bp-130h]@0
  int v72; // [sp+10h] [bp-128h]@52
  int v73; // [sp+14h] [bp-124h]@52
  int v74; // [sp+18h] [bp-120h]@52
  int v75; // [sp+1Ch] [bp-11Ch]@35
  int v76; // [sp+20h] [bp-118h]@35
  int v77; // [sp+24h] [bp-114h]@35
  __int64 v78; // [sp+28h] [bp-110h]@30
  int v79; // [sp+30h] [bp-108h]@30
  __int16 v80; // [sp+34h] [bp-104h]@30
  int v81; // [sp+38h] [bp-100h]@47
  int v82; // [sp+3Ch] [bp-FCh]@47
  int v83; // [sp+40h] [bp-F8h]@47
  int v84; // [sp+44h] [bp-F4h]@25
  int v85; // [sp+48h] [bp-F0h]@25
  int v86; // [sp+4Ch] [bp-ECh]@25
  __int64 v87; // [sp+50h] [bp-E8h]@20
  int v88; // [sp+58h] [bp-E0h]@20
  __int16 v89; // [sp+5Ch] [bp-DCh]@20
  __int64 v90; // [sp+60h] [bp-D8h]@44
  int v91; // [sp+68h] [bp-D0h]@44
  __int64 v92; // [sp+6Ch] [bp-CCh]@17
  int v93; // [sp+74h] [bp-C4h]@17
  int v94; // [sp+78h] [bp-C0h]@12
  int v95; // [sp+7Ch] [bp-BCh]@12
  int v96; // [sp+80h] [bp-B8h]@12
  __int16 v97; // [sp+84h] [bp-B4h]@12
  __int64 v98; // [sp+88h] [bp-B0h]@38
  int v99; // [sp+90h] [bp-A8h]@38
  __int64 v100; // [sp+94h] [bp-A4h]@9
  int v101; // [sp+9Ch] [bp-9Ch]@9
  int v102; // [sp+A0h] [bp-98h]@4
  int v103; // [sp+A4h] [bp-94h]@4
  int v104; // [sp+A8h] [bp-90h]@4
  __int16 v105; // [sp+ACh] [bp-8Ch]@4
  __int16 v106; // [sp+B0h] [bp-88h]@3
  unsigned __int8 v107; // [sp+B3h] [bp-85h]@1
  int v108; // [sp+B4h] [bp-84h]@61
  signed int v109; // [sp+B8h] [bp-80h]@61
  int v110; // [sp+BCh] [bp-7Ch]@61
  int v111; // [sp+C0h] [bp-78h]@61
  signed int v112; // [sp+C4h] [bp-74h]@61
  int v113; // [sp+C8h] [bp-70h]@61
  int v114; // [sp+CCh] [bp-6Ch]@9
  int v115; // [sp+D0h] [bp-68h]@61
  int v116; // [sp+D4h] [bp-64h]@61
  int v117; // [sp+D8h] [bp-60h]@61
  int v118; // [sp+DCh] [bp-5Ch]@61
  int v119; // [sp+E0h] [bp-58h]@61
  char v120; // [sp+E4h] [bp-54h]@61

  v5 = a3;
  v6 = a2;
  v7 = this;
  v8 = a4;
  v9 = BlockSource::getData(a2, a3);
  v107 = v9;
  v10 = *(_QWORD *)Block::getBlockState((int)v7, 12);
  v11 = (BlockState *)Block::getBlockState((int)v7, 40);
  v12 = BlockState::getBool(v11, &v107);
  __asm
  {
    VMOV.F32        S20, #0.5
    VMOV.F32        S24, #1.0
    VLDR            S22, =0.0
  }
  v17 = v12;
    VMOV.F32        S18, S20
    VMOV.F32        S16, S24
  if ( !_ZF )
    __asm
    {
      VMOVNE.F32      S18, S22
      VMOVNE.F32      S16, S20
    }
  v106 = 0;
  result = &v106;
  switch ( (v9 >> (1 - BYTE4(v10) + v10)) & (0xFu >> (4 - BYTE4(v10))) )
    case 0u:
      v19 = *((_DWORD *)v5 + 1);
      v20 = *((_DWORD *)v5 + 2);
      v102 = *(_DWORD *)v5 - 1;
      v103 = v19;
      v104 = v20;
      BlockSource::getBlockAndData((BlockSource *)&v105, v6, (int)&v102);
      v106 = v105;
      if ( !(_BYTE)v105 )
        return 0;
      if ( (*(int (**)(void))(*(_DWORD *)Block::mBlocks[(unsigned __int8)v105] + 84))() != 1 )
      v21 = (BlockState *)Block::getBlockState((int)v7, 40);
      if ( v17 != BlockState::getBool(v21, (const unsigned __int8 *)((unsigned int)&v106 | 1)) )
      v22 = (unsigned __int64 *)Block::getBlockState((int)v7, 12);
      v23 = (0xFu >> (4 - (*v22 >> 32))) & (HIBYTE(v106) >> (*v22 + 1 - (*v22 >> 32)));
      if ( v23 != 2 )
      {
        v24 = v8;
        if ( v23 != 3 )
          return 0;
        v25 = *((_DWORD *)v5 + 2);
        v100 = *(_QWORD *)v5;
        v101 = v25 - 1;
        v26 = v107;
        BlockSource::getBlockAndData((BlockSource *)&v114, v6, (int)&v100);
        if ( BYTE1(v114) == v26 )
        {
          v27 = (unsigned __int8)v114;
          if ( (_BYTE)v114 )
          {
            v28 = Block::mBlocks;
            goto LABEL_28;
          }
        }
        goto LABEL_29;
      }
      v54 = *((_DWORD *)v5 + 2);
      v98 = *(_QWORD *)v5;
      v99 = v54 + 1;
      v55 = v107;
      BlockSource::getBlockAndData((BlockSource *)&v114, v6, (int)&v98);
      v24 = v8;
      if ( BYTE1(v114) == v55 )
        v52 = (unsigned __int8)v114;
        if ( (_BYTE)v114 )
          v53 = Block::mBlocks;
          goto LABEL_41;
      goto LABEL_43;
    case 1u:
      v29 = *((_DWORD *)v5 + 1);
      v30 = *((_DWORD *)v5 + 2);
      v94 = *(_DWORD *)v5 + 1;
      v95 = v29;
      v96 = v30;
      BlockSource::getBlockAndData((BlockSource *)&v97, v6, (int)&v94);
      v106 = v97;
      if ( !(_BYTE)v97 )
      if ( (*(int (**)(void))(*(_DWORD *)Block::mBlocks[(unsigned __int8)v97] + 84))() != 1 )
      v31 = (BlockState *)Block::getBlockState((int)v7, 40);
      if ( v17 != BlockState::getBool(v31, (const unsigned __int8 *)((unsigned int)&v106 | 1)) )
      v32 = (unsigned __int64 *)Block::getBlockState((int)v7, 12);
      v33 = (0xFu >> (4 - (*v32 >> 32))) & (HIBYTE(v106) >> (*v32 + 1 - (*v32 >> 32)));
      if ( v33 != 2 )
        if ( v33 != 3 )
        v34 = *((_DWORD *)v5 + 2);
        v92 = *(_QWORD *)v5;
        v93 = v34 - 1;
        v35 = v107;
        BlockSource::getBlockAndData((BlockSource *)&v114, v6, (int)&v92);
        if ( BYTE1(v114) == v35 )
          v36 = (unsigned __int8)v114;
            v37 = Block::mBlocks;
            goto LABEL_50;
        goto LABEL_51;
      v57 = *((_DWORD *)v5 + 2);
      v90 = *(_QWORD *)v5;
      v91 = v57 + 1;
      v58 = v107;
      BlockSource::getBlockAndData((BlockSource *)&v114, v6, (int)&v90);
      if ( BYTE1(v114) == v58 )
        v59 = (unsigned __int8)v114;
          v60 = Block::mBlocks;
          goto LABEL_55;
      goto LABEL_58;
    case 2u:
      v38 = *((_DWORD *)v5 + 2);
      v87 = *(_QWORD *)v5;
      v88 = v38 - 1;
      BlockSource::getBlockAndData((BlockSource *)&v89, v6, (int)&v87);
      v106 = v89;
      if ( !(_BYTE)v89 )
      if ( (*(int (**)(void))(*(_DWORD *)Block::mBlocks[(unsigned __int8)v89] + 84))() != 1 )
      v39 = (BlockState *)Block::getBlockState((int)v7, 40);
      if ( v17 != BlockState::getBool(v39, (const unsigned __int8 *)((unsigned int)&v106 | 1)) )
      v40 = (unsigned __int64 *)Block::getBlockState((int)v7, 12);
      v41 = (0xFu >> (4 - (*v40 >> 32))) & (HIBYTE(v106) >> (*v40 + 1 - (*v40 >> 32)));
      if ( v41 )
        if ( v41 == 1 )
          v42 = *((_DWORD *)v5 + 1);
          v43 = *((_DWORD *)v5 + 2);
          v84 = *(_DWORD *)v5 - 1;
          v85 = v42;
          v86 = v43;
          v44 = v107;
          BlockSource::getBlockAndData((BlockSource *)&v114, v6, (int)&v84);
          if ( BYTE1(v114) != v44 )
            goto LABEL_29;
          if ( !(_BYTE)v114 )
          v28 = Block::mBlocks;
LABEL_28:
          if ( !(*(int (**)(void))(**(_DWORD **)(*v28 + 4 * v27) + 84))() )
LABEL_29:
            __asm
            {
              VMOV.F32        S20, #0.5
              VLDR            S22, =0.0
            }
            goto LABEL_59;
      else
        v61 = *((_DWORD *)v5 + 1);
        v62 = *((_DWORD *)v5 + 2);
        v81 = *(_DWORD *)v5 + 1;
        v82 = v61;
        v83 = v62;
        v63 = v107;
        BlockSource::getBlockAndData((BlockSource *)&v114, v6, (int)&v81);
        if ( BYTE1(v114) != v63 )
          goto LABEL_51;
        v36 = (unsigned __int8)v114;
        if ( !(_BYTE)v114 )
        v37 = Block::mBlocks;
LABEL_50:
        if ( !(*(int (**)(void))(**(_DWORD **)(*v37 + 4 * v36) + 84))() )
LABEL_51:
          __asm
            VMOV.F32        S22, #0.5
            VLDR            S0, =0.0
            VMOV.F32        S20, #1.0
            VMOV.F32        S24, S22
          goto LABEL_60;
      return 0;
    case 3u:
      v45 = *((_DWORD *)v5 + 2);
      v78 = *(_QWORD *)v5;
      v79 = v45 + 1;
      BlockSource::getBlockAndData((BlockSource *)&v80, v6, (int)&v78);
      v106 = v80;
      if ( !(_BYTE)v80 )
      if ( (*(int (**)(void))(*(_DWORD *)Block::mBlocks[(unsigned __int8)v80] + 84))() != 1 )
      v46 = (BlockState *)Block::getBlockState((int)v7, 40);
      if ( v17 != BlockState::getBool(v46, (const unsigned __int8 *)((unsigned int)&v106 | 1)) )
      v47 = (unsigned __int64 *)Block::getBlockState((int)v7, 12);
      v48 = (0xFu >> (4 - (*v47 >> 32))) & (HIBYTE(v106) >> (*v47 + 1 - (*v47 >> 32)));
      if ( !v48 )
        v64 = *((_DWORD *)v5 + 1);
        v65 = *((_DWORD *)v5 + 2);
        v72 = *(_DWORD *)v5 + 1;
        v73 = v64;
        v74 = v65;
        v66 = v107;
        BlockSource::getBlockAndData((BlockSource *)&v114, v6, (int)&v72);
        if ( BYTE1(v114) != v66 )
          goto LABEL_58;
        v60 = Block::mBlocks;
LABEL_55:
        if ( !(*(int (**)(void))(**(_DWORD **)(*v60 + 4 * v59) + 84))() )
LABEL_58:
LABEL_59:
            VMOV.F32        S24, S20
            VMOV.F32        S0, S22
      if ( v48 != 1 )
      v49 = *((_DWORD *)v5 + 1);
      v50 = *((_DWORD *)v5 + 2);
      v75 = *(_DWORD *)v5 - 1;
      v76 = v49;
      v77 = v50;
      v51 = v107;
      BlockSource::getBlockAndData((BlockSource *)&v114, v6, (int)&v75);
      if ( BYTE1(v114) == v51 )
LABEL_41:
          v56 = (*(int (**)(void))(**(_DWORD **)(*v53 + 4 * v52) + 84))();
          __asm { VMOV.F32        S0, S20 }
          if ( !v56 )
            goto LABEL_60;
LABEL_43:
      __asm { VMOV.F32        S0, S20 }
LABEL_60:
      __asm { VMOV            R1, S22 }
      LODWORD(_R0) = v24;
      __asm
        VMOV            R2, S18
        VSTR            S20, [SP,#0x138+var_138]
        VMOV            R3, S0
        VSTR            S16, [SP,#0x138+var_134]
        VSTR            S24, [SP,#0x138+var_130]
      AABB::set(_R0, _R2, v69, v70, v71);
      if ( a5 == 1 )
        v111 = 953267991;
        v112 = 953267991;
        v113 = 953267991;
        AABB::shrink((AABB *)&v114, v24, (int)&v111);
        *(_DWORD *)v24 = v114;
        *((_DWORD *)v24 + 1) = v115;
        *((_DWORD *)v24 + 2) = v116;
        *((_DWORD *)v24 + 3) = v117;
        *((_DWORD *)v24 + 4) = v118;
        *((_DWORD *)v24 + 5) = v119;
        *((_BYTE *)v24 + 24) = v120;
        v108 = 1056964608;
        v109 = 1056964608;
        v110 = 1056964608;
        AABB::expand(v24, (const Vec3 *)&v108);
      return (__int16 *)1;
    default:
      return result;
}


int __fastcall StairBlock::getAABB(StairBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, int a6, int a7)
{
  AABB *v7; // r4@1
  const BlockPos *v8; // r5@1
  float v19; // [sp+0h] [bp-28h]@0
  float v20; // [sp+4h] [bp-24h]@0
  float v21; // [sp+8h] [bp-20h]@0
  char v22; // [sp+Ch] [bp-1Ch]@4

  v7 = a4;
  v8 = a3;
  if ( a6 == 1 )
  {
    __asm { VMOV.F32        S0, #0.5 }
    _R0 = a7 % 2;
    __asm
    {
      VMOV            S2, R0
      VCVT.F32.S32    S2, S2
    }
    _R0 = a7 / 4 - ((a7 / 4 + ((a7 + ((unsigned int)(a7 >> 31) >> 30)) >> 31)) & 0xFFFFFFFE);
    _R2 = a7 / 2 - ((a7 / 2 + ((a7 + ((unsigned int)a7 >> 31)) >> 31)) & 0xFFFFFFFE);
    __asm { VMOV            S6, R0 }
    LODWORD(_R0) = a4;
      VMOV            S4, R2
      VCVT.F32.S32    S4, S4
      VCVT.F32.S32    S6, S6
      VMUL.F32        S2, S2, S0
      VMUL.F32        S4, S4, S0
      VMUL.F32        S6, S6, S0
      VMOV            R1, S2
      VADD.F32        S2, S2, S0
      VMOV            R2, S4
      VADD.F32        S4, S4, S0
      VADD.F32        S0, S6, S0
      VSTR            S2, [SP,#0x28+var_28]
      VMOV            R3, S6
      VSTR            S4, [SP,#0x28+var_24]
      VSTR            S0, [SP,#0x28+var_20]
  }
  else
    v19 = 1.0;
    v20 = 1.0;
    LODWORD(_R2) = 0;
    v21 = 1.0;
    _R0 = (unsigned int)a4;
    HIDWORD(_R2) = 0;
  AABB::set(_R0, _R2, v19, v20, v21);
  Vec3::Vec3((int)&v22, (int)v8);
  return AABB::move(v7, (const Vec3 *)&v22);
}


int __fastcall StairBlock::setBaseShape(StairBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5)
{
  StairBlock *v5; // r5@1
  AABB *v6; // r4@1
  BlockState *v7; // r0@1
  signed int v8; // r2@2
  __int64 v9; // r0@2
  int result; // r0@4
  signed __int64 v11; // [sp+0h] [bp-58h]@2
  unsigned __int8 v12; // [sp+13h] [bp-45h]@1
  int v13; // [sp+14h] [bp-44h]@5
  signed int v14; // [sp+18h] [bp-40h]@5
  int v15; // [sp+1Ch] [bp-3Ch]@5
  int v16; // [sp+20h] [bp-38h]@5
  signed int v17; // [sp+24h] [bp-34h]@5
  int v18; // [sp+28h] [bp-30h]@5
  int v19; // [sp+2Ch] [bp-2Ch]@5
  int v20; // [sp+30h] [bp-28h]@5
  int v21; // [sp+34h] [bp-24h]@5
  int v22; // [sp+38h] [bp-20h]@5
  int v23; // [sp+3Ch] [bp-1Ch]@5
  int v24; // [sp+40h] [bp-18h]@5
  char v25; // [sp+44h] [bp-14h]@5

  v5 = this;
  v6 = a4;
  v12 = BlockSource::getData(a2, a3);
  v7 = (BlockState *)Block::getBlockState((int)v5, 40);
  if ( BlockState::getBool(v7, &v12) == 1 )
  {
    v11 = 4575657222473777152LL;
    v8 = 1056964608;
    v9 = (unsigned int)v6;
  }
  else
    v11 = 4539628425454813184LL;
    v8 = 0;
  result = AABB::set(v9, (unsigned int)v8, *(float *)&v11, *((float *)&v11 + 1), 1.0);
  if ( a5 == 1 )
    v16 = 953267991;
    v17 = 953267991;
    v18 = 953267991;
    AABB::shrink((AABB *)&v19, v6, (int)&v16);
    *(_DWORD *)v6 = v19;
    *((_DWORD *)v6 + 1) = v20;
    *((_DWORD *)v6 + 2) = v21;
    *((_DWORD *)v6 + 3) = v22;
    *((_DWORD *)v6 + 4) = v23;
    *((_DWORD *)v6 + 5) = v24;
    *((_BYTE *)v6 + 24) = v25;
    v13 = 1056964608;
    v14 = 1056964608;
    v15 = 1056964608;
    result = AABB::expand(v6, (const Vec3 *)&v13);
  return result;
}


signed int __fastcall StairBlock::addCollisionShapes(int a1)
{
  (*(void (__cdecl **)(int))(*(_DWORD *)a1 + 28))(a1);
  return 1;
}


int __fastcall StairBlock::getVariant(StairBlock *this, int a2)
{
  return 0;
}


int __fastcall StairBlock::setStepShape(StairBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5)
{
  const BlockPos *v5; // r6@1
  BlockSource *v6; // r10@1
  StairBlock *v7; // r9@1
  AABB *v8; // r8@1
  unsigned int v9; // r5@1
  __int64 v10; // kr00_8@1
  BlockState *v11; // r0@1
  _BOOL4 v12; // r0@1
  _BOOL4 v17; // r11@1
  unsigned int v18; // r0@3
  int v19; // r1@6
  int v20; // r2@6
  BlockState *v21; // r0@8
  unsigned __int64 *v22; // r0@9
  unsigned int v23; // r0@9
  int v24; // r2@11
  int v25; // r4@11
  int v26; // r0@13
  int v27; // r5@13
  int v28; // r4@13
  int v29; // r2@16
  BlockState *v30; // r0@18
  unsigned __int64 *v31; // r0@19
  unsigned int v32; // r0@19
  int v33; // r1@21
  int v34; // r2@21
  int v35; // r4@21
  int v36; // r0@23
  int v37; // r1@26
  int v38; // r2@26
  BlockState *v39; // r0@28
  unsigned __int64 *v40; // r0@29
  unsigned int v41; // r0@29
  int v42; // r2@31
  int v43; // r4@31
  int v44; // r0@33
  int v45; // r2@36
  BlockState *v46; // r0@38
  unsigned __int64 *v47; // r0@39
  unsigned int v48; // r0@39
  int v49; // r1@41
  int v50; // r2@41
  int v51; // r4@41
  int v52; // r0@43
  int v56; // r2@55
  int v57; // r4@55
  int v58; // r1@58
  int v59; // r2@58
  int v60; // r4@58
  int v61; // r2@61
  int v62; // r4@61
  int v63; // r1@64
  int v64; // r2@64
  int v65; // r4@64
  float v66; // [sp+0h] [bp-148h]@0
  float v67; // [sp+4h] [bp-144h]@0
  float v68; // [sp+8h] [bp-140h]@0
  int v69; // [sp+10h] [bp-138h]@64
  int v70; // [sp+14h] [bp-134h]@64
  int v71; // [sp+18h] [bp-130h]@64
  int v72; // [sp+1Ch] [bp-12Ch]@41
  int v73; // [sp+20h] [bp-128h]@41
  int v74; // [sp+24h] [bp-124h]@41
  __int64 v75; // [sp+28h] [bp-120h]@36
  int v76; // [sp+30h] [bp-118h]@36
  __int16 v77; // [sp+34h] [bp-114h]@36
  int v78; // [sp+38h] [bp-110h]@58
  int v79; // [sp+3Ch] [bp-10Ch]@58
  int v80; // [sp+40h] [bp-108h]@58
  int v81; // [sp+44h] [bp-104h]@21
  int v82; // [sp+48h] [bp-100h]@21
  int v83; // [sp+4Ch] [bp-FCh]@21
  __int64 v84; // [sp+50h] [bp-F8h]@16
  int v85; // [sp+58h] [bp-F0h]@16
  __int16 v86; // [sp+5Ch] [bp-ECh]@16
  __int64 v87; // [sp+60h] [bp-E8h]@61
  int v88; // [sp+68h] [bp-E0h]@61
  __int64 v89; // [sp+6Ch] [bp-DCh]@31
  int v90; // [sp+74h] [bp-D4h]@31
  int v91; // [sp+78h] [bp-D0h]@26
  int v92; // [sp+7Ch] [bp-CCh]@26
  int v93; // [sp+80h] [bp-C8h]@26
  __int16 v94; // [sp+84h] [bp-C4h]@26
  __int64 v95; // [sp+88h] [bp-C0h]@55
  int v96; // [sp+90h] [bp-B8h]@55
  __int64 v97; // [sp+94h] [bp-B4h]@11
  int v98; // [sp+9Ch] [bp-ACh]@11
  int v99; // [sp+A0h] [bp-A8h]@6
  int v100; // [sp+A4h] [bp-A4h]@6
  int v101; // [sp+A8h] [bp-A0h]@6
  __int16 v102; // [sp+ACh] [bp-9Ch]@6
  __int16 v103; // [sp+B0h] [bp-98h]@3
  unsigned __int8 v104; // [sp+B3h] [bp-95h]@1
  int v105; // [sp+B4h] [bp-94h]@52
  signed int v106; // [sp+B8h] [bp-90h]@52
  int v107; // [sp+BCh] [bp-8Ch]@52
  int v108; // [sp+C0h] [bp-88h]@52
  signed int v109; // [sp+C4h] [bp-84h]@52
  int v110; // [sp+C8h] [bp-80h]@52
  int v111; // [sp+CCh] [bp-7Ch]@11
  int v112; // [sp+D0h] [bp-78h]@52
  int v113; // [sp+D4h] [bp-74h]@52
  int v114; // [sp+D8h] [bp-70h]@52
  int v115; // [sp+DCh] [bp-6Ch]@52
  int v116; // [sp+E0h] [bp-68h]@52
  char v117; // [sp+E4h] [bp-64h]@52

  v5 = a3;
  v6 = a2;
  v7 = this;
  v8 = a4;
  v9 = BlockSource::getData(a2, a3);
  v104 = v9;
  v10 = *(_QWORD *)Block::getBlockState((int)v7, 12);
  v11 = (BlockState *)Block::getBlockState((int)v7, 40);
  v12 = BlockState::getBool(v11, &v104);
  __asm
  {
    VMOV.F32        S22, #0.5
    VLDR            S20, =0.0
    VMOV.F32        S24, #1.0
  }
  v17 = v12;
    VMOV.F32        S18, S22
    VMOV.F32        S16, S24
  if ( !_ZF )
    __asm
    {
      VMOVNE.F32      S18, S20
      VMOVNE.F32      S16, S22
    }
  v103 = 0;
  v18 = (v9 >> (1 - BYTE4(v10) + v10)) & (0xFu >> (4 - BYTE4(v10)));
  if ( v18 == 2 )
    v29 = *((_DWORD *)v5 + 2);
    v84 = *(_QWORD *)v5;
    v85 = v29 + 1;
    BlockSource::getBlockAndData((BlockSource *)&v86, v6, (int)&v84);
      VMOV.F32        S22, #1.0
      VMOV.F32        S26, #0.5
    v103 = v86;
    if ( (_BYTE)v86 )
      if ( (*(int (**)(void))(*(_DWORD *)Block::mBlocks[(unsigned __int8)v86] + 84))() == 1 )
      {
        v30 = (BlockState *)Block::getBlockState((int)v7, 40);
        if ( v17 == BlockState::getBool(v30, (const unsigned __int8 *)((unsigned int)&v103 | 1)) )
        {
          v31 = (unsigned __int64 *)Block::getBlockState((int)v7, 12);
          v32 = (0xFu >> (4 - (*v31 >> 32))) & (HIBYTE(v103) >> (*v31 + 1 - (*v31 >> 32)));
          if ( !v32 )
          {
            v58 = *((_DWORD *)v5 + 1);
            v59 = *((_DWORD *)v5 + 2);
            v78 = *(_DWORD *)v5 - 1;
            v79 = v58;
            v80 = v59;
            v60 = v104;
            BlockSource::getBlockAndData((BlockSource *)&v111, v6, (int)&v78);
            if ( BYTE1(v111) == v60 )
            {
              v28 = a5;
              if ( (_BYTE)v111 )
                v27 = (*(int (**)(void))(*(_DWORD *)Block::mBlocks[(unsigned __int8)v111] + 84))();
              else
                v27 = 0;
            }
            else
              v27 = 0;
            __asm
              VMOV.F32        S26, #0.5
              VLDR            S0, =0.0
              VMOV.F32        S24, S22
              VMOV.F32        S20, S26
            if ( !_ZF )
              __asm { VMOVNE.F32      S20, S0 }
            goto LABEL_51;
          }
          if ( v32 == 1 )
            v33 = *((_DWORD *)v5 + 1);
            v34 = *((_DWORD *)v5 + 2);
            v81 = *(_DWORD *)v5 + 1;
            v82 = v33;
            v83 = v34;
            v35 = v104;
            BlockSource::getBlockAndData((BlockSource *)&v111, v6, (int)&v81);
            if ( BYTE1(v111) == v35 && (_BYTE)v111 )
              v36 = (*(int (**)(void))(*(_DWORD *)Block::mBlocks[(unsigned __int8)v111] + 84))();
              __asm { VMOV.F32        S26, #0.5 }
              v27 = v36;
              __asm { VMOV.F32        S22, #1.0 }
              __asm { VMOV.F32        S24, S26 }
              if ( !_ZF )
                __asm { VMOVNE.F32      S24, S22 }
        }
      }
    v27 = 1;
LABEL_50:
    __asm { VMOV.F32        S24, S22 }
    v28 = a5;
    goto LABEL_51;
  if ( v18 == 1 )
    v37 = *((_DWORD *)v5 + 1);
    v38 = *((_DWORD *)v5 + 2);
    v91 = *(_DWORD *)v5 - 1;
    v92 = v37;
    v93 = v38;
    BlockSource::getBlockAndData((BlockSource *)&v94, v6, (int)&v91);
      VMOV.F32        S24, #0.5
    v103 = v94;
    if ( (_BYTE)v94 )
      if ( (*(int (**)(void))(*(_DWORD *)Block::mBlocks[(unsigned __int8)v94] + 84))() == 1 )
        v39 = (BlockState *)Block::getBlockState((int)v7, 40);
        if ( v17 == BlockState::getBool(v39, (const unsigned __int8 *)((unsigned int)&v103 | 1)) )
          v40 = (unsigned __int64 *)Block::getBlockState((int)v7, 12);
          v41 = (0xFu >> (4 - (*v40 >> 32))) & (HIBYTE(v103) >> (*v40 + 1 - (*v40 >> 32)));
          if ( v41 == 2 )
            v61 = *((_DWORD *)v5 + 2);
            v87 = *(_QWORD *)v5;
            v88 = v61 - 1;
            v62 = v104;
            BlockSource::getBlockAndData((BlockSource *)&v111, v6, (int)&v87);
            if ( BYTE1(v111) == v62 )
              VMOV.F32        S24, #0.5
              VLDR            S20, =0.0
              VMOV.F32        S26, S24
              __asm { VMOVNE.F32      S26, S20 }
          if ( v41 == 3 )
            v42 = *((_DWORD *)v5 + 2);
            v89 = *(_QWORD *)v5;
            v90 = v42 + 1;
            v43 = v104;
            BlockSource::getBlockAndData((BlockSource *)&v111, v6, (int)&v89);
            if ( BYTE1(v111) == v43 && (_BYTE)v111 )
              v44 = (*(int (**)(void))(*(_DWORD *)Block::mBlocks[(unsigned __int8)v111] + 84))();
              __asm { VMOV.F32        S24, #0.5 }
              v27 = v44;
              __asm
              {
                VMOV.F32        S0, #1.0
                VMOV.F32        S22, S24
              }
                __asm { VMOVNE.F32      S22, S0 }
              goto LABEL_47;
LABEL_54:
            __asm { VMOV.F32        S22, #0.5 }
            v27 = 0;
            __asm { VMOV.F32        S26, S20 }
            goto LABEL_50;
LABEL_46:
LABEL_47:
    __asm { VMOV.F32        S26, S20 }
  if ( v18 )
    v45 = *((_DWORD *)v5 + 2);
    v75 = *(_QWORD *)v5;
    v76 = v45 - 1;
    BlockSource::getBlockAndData((BlockSource *)&v77, v6, (int)&v75);
    v103 = v77;
    if ( (_BYTE)v77 )
      if ( (*(int (**)(void))(*(_DWORD *)Block::mBlocks[(unsigned __int8)v77] + 84))() == 1 )
        v46 = (BlockState *)Block::getBlockState((int)v7, 40);
        if ( v17 == BlockState::getBool(v46, (const unsigned __int8 *)((unsigned int)&v103 | 1)) )
          v47 = (unsigned __int64 *)Block::getBlockState((int)v7, 12);
          v48 = (0xFu >> (4 - (*v47 >> 32))) & (HIBYTE(v103) >> (*v47 + 1 - (*v47 >> 32)));
          if ( !v48 )
            v63 = *((_DWORD *)v5 + 1);
            v64 = *((_DWORD *)v5 + 2);
            v69 = *(_DWORD *)v5 - 1;
            v70 = v63;
            v71 = v64;
            v65 = v104;
            BlockSource::getBlockAndData((BlockSource *)&v111, v6, (int)&v69);
            if ( BYTE1(v111) == v65 )
              VMOV.F32        S22, #0.5
              VLDR            S26, =0.0
              VMOV.F32        S20, S22
              __asm { VMOVNE.F32      S20, S26 }
          if ( v48 == 1 )
            v49 = *((_DWORD *)v5 + 1);
            v50 = *((_DWORD *)v5 + 2);
            v72 = *(_DWORD *)v5 + 1;
            v73 = v49;
            v74 = v50;
            v51 = v104;
            BlockSource::getBlockAndData((BlockSource *)&v111, v6, (int)&v72);
            if ( BYTE1(v111) == v51 && (_BYTE)v111 )
              v52 = (*(int (**)(void))(*(_DWORD *)Block::mBlocks[(unsigned __int8)v111] + 84))();
              __asm { VMOV.F32        S22, #0.5 }
              v27 = v52;
                VMOV.F32        S24, S22
                __asm { VMOVNE.F32      S24, S0 }
            goto LABEL_54;
    goto LABEL_46;
  v19 = *((_DWORD *)v5 + 1);
  v20 = *((_DWORD *)v5 + 2);
  v99 = *(_DWORD *)v5 + 1;
  v100 = v19;
  v101 = v20;
  BlockSource::getBlockAndData((BlockSource *)&v102, v6, (int)&v99);
    VMOV.F32        S28, #0.5
  v103 = v102;
  if ( !(_BYTE)v102 )
    goto LABEL_48;
  if ( (*(int (**)(void))(*(_DWORD *)Block::mBlocks[(unsigned __int8)v102] + 84))() != 1 )
  v21 = (BlockState *)Block::getBlockState((int)v7, 40);
  if ( v17 != BlockState::getBool(v21, (const unsigned __int8 *)((unsigned int)&v103 | 1)) )
  v22 = (unsigned __int64 *)Block::getBlockState((int)v7, 12);
  v23 = (0xFu >> (4 - (*v22 >> 32))) & (HIBYTE(v103) >> (*v22 + 1 - (*v22 >> 32)));
  if ( v23 != 2 )
    if ( v23 == 3 )
      v24 = *((_DWORD *)v5 + 2);
      v97 = *(_QWORD *)v5;
      v98 = v24 + 1;
      v25 = v104;
      BlockSource::getBlockAndData((BlockSource *)&v111, v6, (int)&v97);
      if ( BYTE1(v111) == v25 && (_BYTE)v111 )
        v26 = (*(int (**)(void))(*(_DWORD *)Block::mBlocks[(unsigned __int8)v111] + 84))();
        __asm { VMOV.F32        S0, #0.5 }
        v27 = v26;
        __asm
          VMOV.F32        S24, #1.0
          VMOV.F32        S26, S20
        v28 = a5;
        __asm { VMOV.F32        S22, S0 }
        if ( !_ZF )
          __asm { VMOVNE.F32      S22, S24 }
        __asm { VMOV.F32        S20, S0 }
      else
        __asm { VMOV.F32        S22, #0.5 }
        v27 = 0;
        __asm { VMOV.F32        S26, S20 }
        __asm { VMOV.F32        S20, S22 }
      goto LABEL_51;
LABEL_48:
    __asm { VMOV.F32        S22, S24 }
    __asm { VMOV.F32        S20, S28 }
  v56 = *((_DWORD *)v5 + 2);
  v95 = *(_QWORD *)v5;
  v96 = v56 - 1;
  v57 = v104;
  BlockSource::getBlockAndData((BlockSource *)&v111, v6, (int)&v95);
  if ( BYTE1(v111) == v57 )
    if ( (_BYTE)v111 )
      v27 = (*(int (**)(void))(*(_DWORD *)Block::mBlocks[(unsigned __int8)v111] + 84))();
    else
      v27 = 0;
  else
    v27 = 0;
    VMOV.F32        S20, #0.5
    VLDR            S0, =0.0
    VMOV.F32        S22, S24
    VMOV.F32        S26, S20
    __asm { VMOVNE.F32      S26, S0 }
LABEL_51:
  __asm { VMOV            R1, S20 }
  LODWORD(_R0) = v8;
    VMOV            R2, S18
    VSTR            S24, [SP,#0x148+var_148]
    VMOV            R3, S26
    VSTR            S16, [SP,#0x148+var_144]
    VSTR            S22, [SP,#0x148+var_140]
  AABB::set(_R0, _R2, v66, v67, v68);
  if ( v28 == 1 )
    v108 = 953267991;
    v109 = 953267991;
    v110 = 953267991;
    AABB::shrink((AABB *)&v111, v8, (int)&v108);
    *(_DWORD *)v8 = v111;
    *((_DWORD *)v8 + 1) = v112;
    *((_DWORD *)v8 + 2) = v113;
    *((_DWORD *)v8 + 3) = v114;
    *((_DWORD *)v8 + 4) = v115;
    *((_DWORD *)v8 + 5) = v116;
    *((_BYTE *)v8 + 24) = v117;
    v105 = 1056964608;
    v106 = 1056964608;
    v107 = 1056964608;
    AABB::expand(v8, (const Vec3 *)&v105);
  return v27;
}


int __fastcall StairBlock::getPlacementDataValue(StairBlock *this, Entity *a2, const BlockPos *a3, int a4, const Vec3 *a5, int a6)
{
  StairBlock *v6; // r4@1
  Entity *v7; // r8@1
  int v8; // r7@1
  BlockState *v9; // r0@1
  _BOOL4 v10; // r6@1
  BlockState *v16; // r0@7
  __int64 v17; // kr00_8@7
  float v18; // r1@7
  _BOOL4 v19; // r5@7
  int v21; // r0@7
  BlockState *v22; // r0@10
  int result; // r0@10
  BlockState *v24; // r0@11
  char v25; // r1@11
  signed int v26; // r2@11
  char v27; // [sp+4h] [bp-24h]@7
  unsigned __int8 v29; // [sp+Fh] [bp-19h]@1

  v6 = this;
  v7 = a2;
  v29 = a6;
  v8 = a4;
  v9 = (BlockState *)Block::getBlockState((int)this, 40);
  v10 = BlockState::getBool(v9, &v29);
  if ( v8 )
  {
    if ( v8 != 1 )
    {
      __asm { VMOV.F32        S0, #0.5 }
      _R0 = a5;
      __asm
      {
        VLDR            S2, [R0,#4]
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        v10 = 1;
    }
  }
  else
    v10 = 1;
  v16 = (BlockState *)Block::getBlockState((int)v6, 40);
  v17 = *(_QWORD *)v16;
  BlockState::getMask(v16);
  Entity::getRotation((Entity *)&v27, (int)v7);
  __asm
    VLDR            S0, =0.011111
    VMOV.F32        S4, #0.5
    VLDR            S2, [SP,#0x28+var_20]
  LODWORD(v18) = v17 + 1 - HIDWORD(v17);
  __asm { VMUL.F32        S0, S2, S0 }
  v19 = v10 << SLOBYTE(v18);
    VADD.F32        S0, S0, S4
    VMOV            R0, S0
  v21 = mce::Math::floor(_R0, v18) & 3;
  if ( v21 == 1 )
    v24 = (BlockState *)Block::getBlockState((int)v6, 12);
    v25 = *(_QWORD *)v24 + 1 - (unsigned int)(*(_QWORD *)v24 >> 32);
    v26 = 1;
LABEL_14:
    LOBYTE(result) = v19 & ~(unsigned __int8)BlockState::getMask(v24) | (v26 << v25);
    return (unsigned __int8)result;
  if ( v21 == 2 )
    v26 = 3;
    goto LABEL_14;
  if ( v21 != 3 )
    v26 = 2;
  v22 = (BlockState *)Block::getBlockState((int)v6, 12);
  return (unsigned __int8)((BlockState::getMask(v22) ^ 0xFF) & v19);
}


int __fastcall StairBlock::isStairs(StairBlock *this, int a2)
{
  int result; // r0@2

  if ( (signed int)this >= 1 )
    result = (*(int (**)(void))(*(_DWORD *)Block::mBlocks[(signed int)this] + 84))();
  else
    result = 0;
  return result;
}


__int64 __fastcall StairBlock::getRedstoneProperty(StairBlock *this, BlockSource *a2, const BlockPos *a3)
{
  return (BlockSource::getData(a2, a3) & 4) << 21;
}


__int16 *__fastcall StairBlock::addAABBs(StairBlock *a1, BlockSource *a2, int a3, AABB *a4, int a5)
{
  BlockSource *v5; // r6@1
  StairBlock *v6; // r5@1
  AABB *v7; // r9@1
  BlockState *v8; // r0@1
  signed int v9; // r2@2
  __int64 v10; // r0@2
  AABB *v11; // r0@4
  int v12; // r4@4
  AABB *v13; // r0@4
  __int16 *result; // r0@4
  AABB *v15; // r0@6
  signed __int64 v16; // [sp+0h] [bp-50h]@2
  char v17; // [sp+10h] [bp-40h]@5
  char v18; // [sp+1Ch] [bp-34h]@4
  char v19; // [sp+28h] [bp-28h]@1
  char v20; // [sp+34h] [bp-1Ch]@1
  char v21; // [sp+50h] [bp+0h]@1
  float v22; // [sp+54h] [bp+4h]@4
  float v23; // [sp+58h] [bp+8h]@4
  unsigned __int8 v24; // [sp+5Fh] [bp+Fh]@1

  v5 = a2;
  v6 = a1;
  v7 = a4;
  Vec3::Vec3((int)&v21, a3);
  AABB::AABB((AABB *)&v20);
  BlockPos::BlockPos((int)&v19, (int)&v21);
  v24 = BlockSource::getData(v5, (const BlockPos *)&v19);
  v8 = (BlockState *)Block::getBlockState((int)v6, 40);
  if ( BlockState::getBool(v8, &v24) == 1 )
  {
    HIDWORD(v10) = 0;
    v16 = 4575657222473777152LL;
    v9 = 1056964608;
    LODWORD(v10) = &v20;
  }
  else
    v16 = 4539628425454813184LL;
    v9 = 0;
  AABB::set(v10, (unsigned int)v9, *(float *)&v16, *((float *)&v16 + 1), 1.0);
  v11 = (AABB *)AABB::move((AABB *)&v20, *(float *)&v21, v22, v23);
  Block::addAABB((int)v6, v11, v7, a5);
  BlockPos::BlockPos((int)&v18, (int)&v21);
  v12 = StairBlock::setStepShape(v6, v5, (const BlockPos *)&v18, (AABB *)&v20, 0);
  v13 = (AABB *)AABB::move((AABB *)&v20, *(float *)&v21, v22, v23);
  result = (__int16 *)Block::addAABB((int)v6, v13, v7, a5);
  if ( v12 == 1 )
    BlockPos::BlockPos((int)&v17, (int)&v21);
    result = StairBlock::setInnerPieceShape(v6, v5, (const BlockPos *)&v17, (AABB *)&v20, 0);
    if ( result == (__int16 *)1 )
    {
      v15 = (AABB *)AABB::move((AABB *)&v20, *(float *)&v21, v22, v23);
      result = (__int16 *)Block::addAABB((int)v6, v15, v7, a5);
    }
  return result;
}
