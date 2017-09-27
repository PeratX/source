

signed int __fastcall PickaxeItem::getEnchantSlot(PickaxeItem *this)
{
  return 1024;
}


int __fastcall PickaxeItem::getDestroySpeed(PickaxeItem *this, const ItemInstance *a2, const Block *a3)
{
  const Block *v3; // r6@1
  const ItemInstance *v5; // r4@1
  int *v6; // r7@1
  int result; // r0@5

  v3 = a3;
  _R5 = this;
  v5 = a2;
  v6 = (int *)Block::getMaterial(a3);
  if ( Material::isType(v6, 4) || Material::isType(v6, 3) == 1 || *((_BYTE *)_R5 + *((_BYTE *)v3 + 4) + 140) )
  {
    __asm { VLDR            S16, [R5,#0x74] }
    _R0 = Item::destroySpeedBonus(_R5, v5);
    __asm
    {
      VMOV            S0, R0
      VADD.F32        S0, S0, S16
    }
  }
  else
    __asm { VMOV.F32        S0, #1.0 }
  __asm { VMOV            R0, S0 }
  return result;
}


void __fastcall PickaxeItem::~PickaxeItem(PickaxeItem *this)
{
  PickaxeItem::~PickaxeItem(this);
}


signed int __fastcall PickaxeItem::canDestroySpecial(PickaxeItem *this, const Block *a2)
{
  int *v2; // r4@15
  signed int result; // r0@16
  int v4; // r1@18
  signed int v5; // r1@21
  int v6; // r1@24

  if ( (const Block *)Block::mObsidian == a2 || (const Block *)Block::mGlowingObsidian == a2 )
  {
    v4 = **((_DWORD **)this + 30);
    result = 0;
    if ( v4 == 3 )
      result = 1;
  }
  else
    if ( (const Block *)Block::mDiamondBlock == a2
      || (const Block *)Block::mDiamondOre == a2
      || (const Block *)Block::mEmeraldBlock == a2
      || (const Block *)Block::mEmeraldOre == a2
      || (const Block *)Block::mGoldBlock == a2
      || (const Block *)Block::mGoldOre == a2 )
    {
LABEL_21:
      v5 = **((_DWORD **)this + 30);
      result = 0;
      if ( v5 > 1 )
        result = 1;
      return result;
    }
    if ( (const Block *)Block::mIronBlock != a2
      && (const Block *)Block::mIronOre != a2
      && (const Block *)Block::mLapisBlock != a2
      && (const Block *)Block::mLapisOre != a2 )
      if ( (const Block *)Block::mRedStoneOre != a2 && (const Block *)Block::mLitRedStoneOre != a2 )
      {
        v2 = (int *)Block::getMaterial(a2);
        if ( Material::isType(v2, 3) )
          result = 1;
        else
          result = Material::isType(v2, 4);
        return result;
      }
      goto LABEL_21;
    v6 = **((_DWORD **)this + 30);
    if ( v6 > 0 )
  return result;
}


int __fastcall PickaxeItem::PickaxeItem(int a1, const void **a2, __int16 a3, int a4)
{
  int v4; // r5@1
  int v5; // r8@1
  void *v6; // r5@1
  _DWORD *v7; // r7@1
  _DWORD *v8; // r6@1
  _DWORD *v9; // r7@1
  int v10; // r1@1
  int v11; // r2@1
  int v12; // r3@1
  int v13; // r4@3
  int v14; // r0@3
  _DWORD *v15; // r6@4
  int v16; // r1@8
  int v17; // r7@9
  _DWORD *v18; // r5@9
  signed int v19; // r9@10
  int v20; // r7@10
  unsigned int v21; // r0@10
  unsigned int v22; // r1@12
  unsigned int v23; // r4@12
  _DWORD *v24; // r6@25
  signed int v25; // r9@26
  int v26; // r7@26
  unsigned int v27; // r0@26
  unsigned int v28; // r1@28
  unsigned int v29; // r4@28
  int v30; // r1@40
  _DWORD *v31; // r5@41
  int v32; // r7@41
  signed int v33; // r9@42
  int v34; // r7@42
  unsigned int v35; // r0@42
  unsigned int v36; // r1@44
  unsigned int v37; // r4@44
  _DWORD *v38; // r6@57
  signed int v39; // r9@58
  int v40; // r7@58
  unsigned int v41; // r0@58
  unsigned int v42; // r1@60
  unsigned int v43; // r4@60
  int v44; // r1@72
  _DWORD *v45; // r5@73
  int v46; // r7@73
  signed int v47; // r9@74
  int v48; // r7@74
  unsigned int v49; // r0@74
  unsigned int v50; // r1@76
  unsigned int v51; // r4@76
  _DWORD *v52; // r6@89
  signed int v53; // r9@90
  int v54; // r7@90
  unsigned int v55; // r0@90
  unsigned int v56; // r1@92
  unsigned int v57; // r4@92
  int v58; // r1@104
  _DWORD *v59; // r5@105
  int v60; // r7@105
  signed int v61; // r9@106
  int v62; // r7@106
  unsigned int v63; // r0@106
  unsigned int v64; // r1@108
  unsigned int v65; // r4@108
  _DWORD *v66; // r6@121
  signed int v67; // r9@122
  int v68; // r7@122
  unsigned int v69; // r0@122
  unsigned int v70; // r1@124
  unsigned int v71; // r4@124
  int v72; // r1@136
  _DWORD *v73; // r5@137
  int v74; // r7@137
  signed int v75; // r9@138
  int v76; // r7@138
  unsigned int v77; // r0@138
  unsigned int v78; // r1@140
  unsigned int v79; // r4@140
  _DWORD *v80; // r6@153
  signed int v81; // r9@154
  int v82; // r7@154
  unsigned int v83; // r0@154
  unsigned int v84; // r1@156
  unsigned int v85; // r4@156
  int v86; // r1@168
  _DWORD *v87; // r5@169
  int v88; // r7@169
  signed int v89; // r9@170
  int v90; // r7@170
  unsigned int v91; // r0@170
  unsigned int v92; // r1@172
  unsigned int v93; // r4@172
  _DWORD *v94; // r6@185
  signed int v95; // r9@186
  int v96; // r7@186
  unsigned int v97; // r0@186
  unsigned int v98; // r1@188
  unsigned int v99; // r4@188
  int v100; // r1@200
  _DWORD *v101; // r5@201
  int v102; // r7@201
  signed int v103; // r9@202
  int v104; // r7@202
  unsigned int v105; // r0@202
  unsigned int v106; // r1@204
  unsigned int v107; // r4@204
  _DWORD *v108; // r6@217
  signed int v109; // r9@218
  int v110; // r7@218
  unsigned int v111; // r0@218
  unsigned int v112; // r1@220
  unsigned int v113; // r4@220
  int v114; // r1@232
  char *v115; // r5@233
  char *v116; // r7@233
  signed int v117; // r9@234
  int v118; // r7@234
  unsigned int v119; // r0@234
  unsigned int v120; // r1@236
  unsigned int v121; // r4@236
  char *v122; // r6@249
  signed int v123; // r7@250
  signed int v124; // r4@250
  unsigned int v125; // r1@250
  unsigned int v126; // r2@252
  unsigned int v127; // r0@252
  unsigned int v128; // r1@266
  int v129; // r3@267

  v4 = a4;
  v5 = a1;
  Item::Item(a1, a2, a3);
  *(_DWORD *)v5 = &off_2703020;
  *(_DWORD *)(v5 + 116) = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v5 + 120) = v4;
  _aeabi_memclr4(v5 + 128, 268);
  *(_BYTE *)(v5 + 4) = 1;
  Item::setMaxDamage((Item *)v5, *(_DWORD *)(v4 + 4));
  *(_DWORD *)(v5 + 124) = *(_DWORD *)(v4 + 12) + 2;
  *(_DWORD *)v5 = &off_2702F04;
  v6 = operator new(4u);
  *(_DWORD *)v6 = Block::mCobblestone;
  v7 = operator new(8u);
  v7[1] = Block::mDoubleStoneSlab;
  *v7 = *(_DWORD *)v6;
  operator delete(v6);
  v8 = operator new(0x10u);
  v8[2] = Block::mStoneSlab;
  *(_QWORD *)v8 = *(_QWORD *)v7;
  operator delete(v7);
  v8[3] = Block::mStone;
  v9 = operator new(0x20u);
  v9[4] = Block::mConcrete;
  v10 = v8[1];
  v11 = v8[2];
  v12 = v8[3];
  *v9 = *v8;
  v9[1] = v10;
  v9[2] = v11;
  v9[3] = v12;
  if ( v8 )
    operator delete(v8);
  v13 = (int)(v9 + 6);
  v9[5] = Block::mSandStone;
  v14 = (int)(v9 + 8);
  if ( v9 + 6 == v9 + 8 )
  {
    v15 = operator new(0x30u);
    v15[6] = Block::mMossyCobblestone;
    v13 = (int)(v15 + 6);
    _aeabi_memmove4(v15, v9);
    if ( v9 )
      operator delete(v9);
    v14 = (int)(v15 + 12);
  }
  else
    v15 = v9;
    v9[6] = Block::mMossyCobblestone;
  v16 = v13 + 4;
  if ( v13 + 4 == v14 )
    v19 = v16 - (_DWORD)v15;
    v18 = 0;
    v20 = (v16 - (signed int)v15) >> 2;
    v21 = (v16 - (signed int)v15) >> 2;
    if ( !v20 )
      v21 = 1;
    v22 = v21 + (v19 >> 2);
    v23 = v21 + (v19 >> 2);
    if ( 0 != v22 >> 30 )
      v23 = 0x3FFFFFFF;
    if ( v22 < v21 )
    if ( v23 )
    {
      if ( v23 >= 0x40000000 )
        sub_21E57F4();
      v18 = operator new(4 * v23);
    }
    v18[v20] = Block::mIronOre;
    if ( v20 )
      _aeabi_memmove4(v18, v15);
    v17 = (int)&v18[v20 + 1];
    if ( v15 )
      operator delete(v15);
    v14 = (int)&v18[v23];
    v17 = v13 + 8;
    v18 = v15;
    *(_DWORD *)(v13 + 4) = Block::mIronOre;
  if ( v17 == v14 )
    v25 = v17 - (_DWORD)v18;
    v24 = 0;
    v26 = (v17 - (signed int)v18) >> 2;
    v27 = v26;
    if ( !(v25 >> 2) )
      v27 = 1;
    v28 = v27 + (v25 >> 2);
    v29 = v27 + (v25 >> 2);
    if ( 0 != v28 >> 30 )
      v29 = 0x3FFFFFFF;
    if ( v28 < v27 )
    if ( v29 )
      if ( v29 >= 0x40000000 )
      v24 = operator new(4 * v29);
    v24[v26] = Block::mIronBlock;
    if ( v26 )
      _aeabi_memmove4(v24, v18);
    v17 = (int)&v24[v26];
    if ( v18 )
      operator delete(v18);
    v14 = (int)&v24[v29];
    v24 = v18;
    *(_DWORD *)v17 = Block::mIronBlock;
  v30 = v17 + 4;
  if ( v17 + 4 == v14 )
    v33 = v30 - (_DWORD)v24;
    v31 = 0;
    v34 = (v30 - (signed int)v24) >> 2;
    v35 = (v30 - (signed int)v24) >> 2;
    if ( !v34 )
      v35 = 1;
    v36 = v35 + (v33 >> 2);
    v37 = v35 + (v33 >> 2);
    if ( 0 != v36 >> 30 )
      v37 = 0x3FFFFFFF;
    if ( v36 < v35 )
    if ( v37 )
      if ( v37 >= 0x40000000 )
      v31 = operator new(4 * v37);
    v31[v34] = Block::mCoalOre;
    if ( v34 )
      _aeabi_memmove4(v31, v24);
    v32 = (int)&v31[v34 + 1];
    if ( v24 )
      operator delete(v24);
    v14 = (int)&v31[v37];
    v31 = v24;
    *(_DWORD *)(v17 + 4) = Block::mCoalOre;
    v32 = v17 + 8;
  if ( v32 == v14 )
    v39 = v32 - (_DWORD)v31;
    v38 = 0;
    v40 = (v32 - (signed int)v31) >> 2;
    v41 = v40;
    if ( !(v39 >> 2) )
      v41 = 1;
    v42 = v41 + (v39 >> 2);
    v43 = v41 + (v39 >> 2);
    if ( 0 != v42 >> 30 )
      v43 = 0x3FFFFFFF;
    if ( v42 < v41 )
    if ( v43 )
      if ( v43 >= 0x40000000 )
      v38 = operator new(4 * v43);
    v38[v40] = Block::mGoldBlock;
    if ( v40 )
      _aeabi_memmove4(v38, v31);
    v32 = (int)&v38[v40];
    if ( v31 )
      operator delete(v31);
    v14 = (int)&v38[v43];
    v38 = v31;
    *(_DWORD *)v32 = Block::mGoldBlock;
  v44 = v32 + 4;
  if ( v32 + 4 == v14 )
    v47 = v44 - (_DWORD)v38;
    v45 = 0;
    v48 = (v44 - (signed int)v38) >> 2;
    v49 = (v44 - (signed int)v38) >> 2;
    if ( !v48 )
      v49 = 1;
    v50 = v49 + (v47 >> 2);
    v51 = v49 + (v47 >> 2);
    if ( 0 != v50 >> 30 )
      v51 = 0x3FFFFFFF;
    if ( v50 < v49 )
    if ( v51 )
      if ( v51 >= 0x40000000 )
      v45 = operator new(4 * v51);
    v45[v48] = Block::mGoldOre;
    if ( v48 )
      _aeabi_memmove4(v45, v38);
    v46 = (int)&v45[v48 + 1];
    if ( v38 )
      operator delete(v38);
    v14 = (int)&v45[v51];
    v45 = v38;
    *(_DWORD *)(v32 + 4) = Block::mGoldOre;
    v46 = v32 + 8;
  if ( v46 == v14 )
    v53 = v46 - (_DWORD)v45;
    v52 = 0;
    v54 = (v46 - (signed int)v45) >> 2;
    v55 = v54;
    if ( !(v53 >> 2) )
      v55 = 1;
    v56 = v55 + (v53 >> 2);
    v57 = v55 + (v53 >> 2);
    if ( 0 != v56 >> 30 )
      v57 = 0x3FFFFFFF;
    if ( v56 < v55 )
    if ( v57 )
      if ( v57 >= 0x40000000 )
      v52 = operator new(4 * v57);
    v52[v54] = Block::mDiamondOre;
    if ( v54 )
      _aeabi_memmove4(v52, v45);
    v46 = (int)&v52[v54];
    if ( v45 )
      operator delete(v45);
    v14 = (int)&v52[v57];
    v52 = v45;
    *(_DWORD *)v46 = Block::mDiamondOre;
  v58 = v46 + 4;
  if ( v46 + 4 == v14 )
    v61 = v58 - (_DWORD)v52;
    v59 = 0;
    v62 = (v58 - (signed int)v52) >> 2;
    v63 = (v58 - (signed int)v52) >> 2;
    if ( !v62 )
      v63 = 1;
    v64 = v63 + (v61 >> 2);
    v65 = v63 + (v61 >> 2);
    if ( 0 != v64 >> 30 )
      v65 = 0x3FFFFFFF;
    if ( v64 < v63 )
    if ( v65 )
      if ( v65 >= 0x40000000 )
      v59 = operator new(4 * v65);
    v59[v62] = Block::mDiamondBlock;
    if ( v62 )
      _aeabi_memmove4(v59, v52);
    v60 = (int)&v59[v62 + 1];
    if ( v52 )
      operator delete(v52);
    v14 = (int)&v59[v65];
    v59 = v52;
    *(_DWORD *)(v46 + 4) = Block::mDiamondBlock;
    v60 = v46 + 8;
  if ( v60 == v14 )
    v67 = v60 - (_DWORD)v59;
    v66 = 0;
    v68 = (v60 - (signed int)v59) >> 2;
    v69 = v68;
    if ( !(v67 >> 2) )
      v69 = 1;
    v70 = v69 + (v67 >> 2);
    v71 = v69 + (v67 >> 2);
    if ( 0 != v70 >> 30 )
      v71 = 0x3FFFFFFF;
    if ( v70 < v69 )
    if ( v71 )
      if ( v71 >= 0x40000000 )
      v66 = operator new(4 * v71);
    v66[v68] = Block::mIce;
    if ( v68 )
      _aeabi_memmove4(v66, v59);
    v60 = (int)&v66[v68];
    if ( v59 )
      operator delete(v59);
    v14 = (int)&v66[v71];
    v66 = v59;
    *(_DWORD *)v60 = Block::mIce;
  v72 = v60 + 4;
  if ( v60 + 4 == v14 )
    v75 = v72 - (_DWORD)v66;
    v73 = 0;
    v76 = (v72 - (signed int)v66) >> 2;
    v77 = (v72 - (signed int)v66) >> 2;
    if ( !v76 )
      v77 = 1;
    v78 = v77 + (v75 >> 2);
    v79 = v77 + (v75 >> 2);
    if ( 0 != v78 >> 30 )
      v79 = 0x3FFFFFFF;
    if ( v78 < v77 )
    if ( v79 )
      if ( v79 >= 0x40000000 )
      v73 = operator new(4 * v79);
    v73[v76] = Block::mLapisOre;
    if ( v76 )
      _aeabi_memmove4(v73, v66);
    v74 = (int)&v73[v76 + 1];
    if ( v66 )
      operator delete(v66);
    v14 = (int)&v73[v79];
    v73 = v66;
    *(_DWORD *)(v60 + 4) = Block::mLapisOre;
    v74 = v60 + 8;
  if ( v74 == v14 )
    v81 = v74 - (_DWORD)v73;
    v80 = 0;
    v82 = (v74 - (signed int)v73) >> 2;
    v83 = v82;
    if ( !(v81 >> 2) )
      v83 = 1;
    v84 = v83 + (v81 >> 2);
    v85 = v83 + (v81 >> 2);
    if ( 0 != v84 >> 30 )
      v85 = 0x3FFFFFFF;
    if ( v84 < v83 )
    if ( v85 )
      if ( v85 >= 0x40000000 )
      v80 = operator new(4 * v85);
    v80[v82] = Block::mLapisBlock;
    if ( v82 )
      _aeabi_memmove4(v80, v73);
    v74 = (int)&v80[v82];
    if ( v73 )
      operator delete(v73);
    v14 = (int)&v80[v85];
    v80 = v73;
    *(_DWORD *)v74 = Block::mLapisBlock;
  v86 = v74 + 4;
  if ( v74 + 4 == v14 )
    v89 = v86 - (_DWORD)v80;
    v87 = 0;
    v90 = (v86 - (signed int)v80) >> 2;
    v91 = (v86 - (signed int)v80) >> 2;
    if ( !v90 )
      v91 = 1;
    v92 = v91 + (v89 >> 2);
    v93 = v91 + (v89 >> 2);
    if ( 0 != v92 >> 30 )
      v93 = 0x3FFFFFFF;
    if ( v92 < v91 )
    if ( v93 )
      if ( v93 >= 0x40000000 )
      v87 = operator new(4 * v93);
    v87[v90] = Block::mRedStoneOre;
    if ( v90 )
      _aeabi_memmove4(v87, v80);
    v88 = (int)&v87[v90 + 1];
    if ( v80 )
      operator delete(v80);
    v14 = (int)&v87[v93];
    v87 = v80;
    *(_DWORD *)(v74 + 4) = Block::mRedStoneOre;
    v88 = v74 + 8;
  if ( v88 == v14 )
    v95 = v88 - (_DWORD)v87;
    v94 = 0;
    v96 = (v88 - (signed int)v87) >> 2;
    v97 = v96;
    if ( !(v95 >> 2) )
      v97 = 1;
    v98 = v97 + (v95 >> 2);
    v99 = v97 + (v95 >> 2);
    if ( 0 != v98 >> 30 )
      v99 = 0x3FFFFFFF;
    if ( v98 < v97 )
    if ( v99 )
      if ( v99 >= 0x40000000 )
      v94 = operator new(4 * v99);
    v94[v96] = Block::mLitRedStoneOre;
    if ( v96 )
      _aeabi_memmove4(v94, v87);
    v88 = (int)&v94[v96];
    if ( v87 )
      operator delete(v87);
    v14 = (int)&v94[v99];
    v94 = v87;
    *(_DWORD *)v88 = Block::mLitRedStoneOre;
  v100 = v88 + 4;
  if ( v88 + 4 == v14 )
    v103 = v100 - (_DWORD)v94;
    v101 = 0;
    v104 = (v100 - (signed int)v94) >> 2;
    v105 = (v100 - (signed int)v94) >> 2;
    if ( !v104 )
      v105 = 1;
    v106 = v105 + (v103 >> 2);
    v107 = v105 + (v103 >> 2);
    if ( 0 != v106 >> 30 )
      v107 = 0x3FFFFFFF;
    if ( v106 < v105 )
    if ( v107 )
      if ( v107 >= 0x40000000 )
      v101 = operator new(4 * v107);
    v101[v104] = Block::mRail;
    if ( v104 )
      _aeabi_memmove4(v101, v94);
    v102 = (int)&v101[v104 + 1];
    if ( v94 )
      operator delete(v94);
    v14 = (int)&v101[v107];
    v101 = v94;
    *(_DWORD *)(v88 + 4) = Block::mRail;
    v102 = v88 + 8;
  if ( v102 == v14 )
    v109 = v102 - (_DWORD)v101;
    v108 = 0;
    v110 = (v102 - (signed int)v101) >> 2;
    v111 = v110;
    if ( !(v109 >> 2) )
      v111 = 1;
    v112 = v111 + (v109 >> 2);
    v113 = v111 + (v109 >> 2);
    if ( 0 != v112 >> 30 )
      v113 = 0x3FFFFFFF;
    if ( v112 < v111 )
    if ( v113 )
      if ( v113 >= 0x40000000 )
      v108 = operator new(4 * v113);
    v108[v110] = Block::mDetectorRail;
    if ( v110 )
      _aeabi_memmove4(v108, v101);
    v102 = (int)&v108[v110];
    if ( v101 )
      operator delete(v101);
    v14 = (int)&v108[v113];
    v108 = v101;
    *(_DWORD *)v102 = Block::mDetectorRail;
  v114 = v102 + 4;
  if ( v102 + 4 == v14 )
    v117 = v114 - (_DWORD)v108;
    v115 = 0;
    v118 = (v114 - (signed int)v108) >> 2;
    v119 = (v114 - (signed int)v108) >> 2;
    if ( !v118 )
      v119 = 1;
    v120 = v119 + (v117 >> 2);
    v121 = v119 + (v117 >> 2);
    if ( 0 != v120 >> 30 )
      v121 = 0x3FFFFFFF;
    if ( v120 < v119 )
    if ( v121 )
      if ( v121 >= 0x40000000 )
      v115 = (char *)operator new(4 * v121);
    *(_DWORD *)&v115[4 * v118] = Block::mGoldenRail;
    if ( v118 )
      _aeabi_memmove4(v115, v108);
    v116 = &v115[4 * v118 + 4];
    if ( v108 )
      operator delete(v108);
    v14 = (int)&v115[4 * v121];
    v115 = (char *)v108;
    *(_DWORD *)(v102 + 4) = Block::mGoldenRail;
    v116 = (char *)(v102 + 8);
  if ( v116 == (char *)v14 )
    v123 = v116 - v115;
    v122 = 0;
    v124 = v123 >> 2;
    v125 = v123 >> 2;
    if ( !(v123 >> 2) )
      v125 = 1;
    v126 = v125 + (v123 >> 2);
    v127 = v125 + (v123 >> 2);
    if ( 0 != v126 >> 30 )
      v127 = 0x3FFFFFFF;
    if ( v126 < v125 )
    if ( v127 )
      if ( v127 >= 0x40000000 )
      v122 = (char *)operator new(4 * v127);
    *(_DWORD *)&v122[4 * v124] = Block::mActivatorRail;
    if ( v124 )
      _aeabi_memmove4(v122, v115);
    v116 = &v122[4 * v124];
    if ( v115 )
      operator delete(v115);
    v122 = v115;
    *(_DWORD *)v116 = Block::mActivatorRail;
  _aeabi_memclr(v5 + 140, 256);
  if ( v116 + 4 == v122 )
    if ( !v122 )
      return v5;
    v128 = 0;
    do
      v129 = *(_DWORD *)&v122[4 * v128++];
      *(_BYTE *)(*(_BYTE *)(v129 + 4) + v5 + 140) = 1;
    while ( v128 < (v116 + 4 - v122) >> 2 );
  operator delete(v122);
  return v5;
}


void __fastcall PickaxeItem::~PickaxeItem(PickaxeItem *this)
{
  Item *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2703020;
  v2 = (void *)*((_DWORD *)this + 32);
  if ( v2 )
    operator delete(v2);
  Item::~Item(v1);
  j_j_j__ZdlPv_6((void *)v1);
}
