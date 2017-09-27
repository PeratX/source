

_BOOL4 __fastcall ShovelItem::canDestroySpecial(ShovelItem *this, const Block *a2)
{
  const Block *v2; // r4@1
  int v3; // r1@1
  _BOOL4 result; // r0@2

  v2 = a2;
  if ( Block::hasProperty((int)a2, (int)a2, 0x2000LL) )
    result = 1;
  else
    result = Block::hasProperty((int)v2, v3, 8LL);
  return result;
}


int __fastcall ShovelItem::_useOn(int a1, int a2, Entity *this, int a4, int a5, int a6, int a7, int a8, int a9)
{
  Entity *v9; // r8@1
  ItemInstance *v11; // r9@1
  const BlockPos *v12; // r6@1
  int v13; // r1@1
  int v14; // r2@1
  Level *v15; // r10@1
  signed int v16; // r5@1
  int v21; // r0@3
  char *v22; // r7@5
  int (__fastcall *v23)(int, int, int *, char *); // r12@5
  int v24; // r11@7
  int (__fastcall *v25)(int, int, int *, char *); // r7@9
  void (__fastcall *v26)(int, const BlockPos *, int, unsigned int); // r5@12
  unsigned int v27; // r0@12
  void (*v28)(void); // r7@13
  int v29; // r11@14
  int (__fastcall *v30)(int, int, int *, char *); // r7@16
  unsigned int v31; // r0@19
  unsigned __int8 v32; // r5@19
  char v33; // r1@24
  char v35; // [sp+14h] [bp-6Ch]@20
  char v36; // [sp+15h] [bp-6Bh]@20
  char v37; // [sp+18h] [bp-68h]@19
  char v38; // [sp+19h] [bp-67h]@19
  char v39; // [sp+1Ch] [bp-64h]@19
  char v40; // [sp+1Dh] [bp-63h]@19
  char v41; // [sp+20h] [bp-60h]@16
  char v42; // [sp+21h] [bp-5Fh]@16
  char v43; // [sp+24h] [bp-5Ch]@13
  char v44; // [sp+25h] [bp-5Bh]@13
  char v45; // [sp+28h] [bp-58h]@12
  char v46; // [sp+29h] [bp-57h]@12
  char v47; // [sp+2Ch] [bp-54h]@9
  char v48; // [sp+2Dh] [bp-53h]@9
  char v49; // [sp+30h] [bp-50h]@24
  char v50; // [sp+31h] [bp-4Fh]@24
  char v51; // [sp+34h] [bp-4Ch]@23
  char v52; // [sp+35h] [bp-4Bh]@23
  char v53; // [sp+38h] [bp-48h]@5
  char v54; // [sp+39h] [bp-47h]@5
  int v55; // [sp+3Ch] [bp-44h]@3
  float v56; // [sp+40h] [bp-40h]@11
  int v57; // [sp+4Ch] [bp-34h]@1
  int v58; // [sp+50h] [bp-30h]@1
  int v59; // [sp+54h] [bp-2Ch]@1
  char v60; // [sp+58h] [bp-28h]@1

  v9 = this;
  _R4 = a4;
  v11 = (ItemInstance *)a2;
  v12 = (const BlockPos *)Entity::getRegion(this);
  v13 = *(_DWORD *)(_R4 + 4);
  v14 = *(_DWORD *)(_R4 + 8);
  v57 = *(_DWORD *)_R4;
  v58 = v13 + 1;
  v59 = v14;
  BlockSource::getBlockID((BlockSource *)&v60, v12, (int)&v57);
  v15 = (Level *)BlockSource::getLevel(v12);
  v16 = 0;
  if ( (_BYTE)a5 && !v60 )
  {
    __asm
    {
      VLDR            S0, [R4]
      VMOV.F32        S6, #0.5
      VLDR            S2, [R4,#4]
      VLDR            S4, [R4,#8]
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
      VADD.F32        S0, S0, S6
      VADD.F32        S2, S2, S6
      VADD.F32        S4, S4, S6
      VSTR            S0, [SP,#0x80+var_40]
      VSTR            S2, [SP,#0x80+var_3C]
      VSTR            S4, [SP,#0x80+var_38]
    }
    BlockSource::getBlockAndData((BlockSource *)&v55, v12, _R4);
    v21 = (unsigned __int8)v55;
    if ( (unsigned __int8)v55 != *(_BYTE *)(Block::mGrass + 4) )
      v24 = Block::mSnow;
      if ( (unsigned __int8)v55 == *(_BYTE *)(Block::mSnow + 4) )
      {
        if ( a9 )
        {
          v25 = *(int (__fastcall **)(int, int, int *, char *))(*(_DWORD *)a9 + 16);
          v47 = v55;
          v16 = 0;
          v48 = 0;
          if ( v25(a9, _R4, &v55, &v47) )
            return v16;
          v21 = *(_BYTE *)(v24 + 4);
        }
        v16 = 1;
        Level::broadcastSoundEvent(v15, (int)v12, 0, (int)&v56, v21, 1, 0, 0);
        ItemInstance::hurtAndBreak(v11, 1, v9);
        if ( Level::isClientSide(v15) )
          return v16;
        v26 = *(void (__fastcall **)(int, const BlockPos *, int, unsigned int))(*(_DWORD *)v24 + 276);
        v27 = BlockSource::getData(v12, (const BlockPos *)_R4);
        v26(v24, v12, _R4, v27);
        v45 = BlockID::AIR;
        v46 = 0;
        BlockSource::setBlockAndData((int)v12, (BlockPos *)_R4, (int)&v45, 3, (int)v9);
        if ( !a9 )
          return 1;
        v28 = *(void (**)(void))(*(_DWORD *)a9 + 20);
        v43 = *(_BYTE *)(v24 + 4);
        v44 = 0;
      }
      else
        v29 = Block::mTopSnow;
        if ( (unsigned __int8)v55 != *(_BYTE *)(Block::mTopSnow + 4) )
          return 0;
          v30 = *(int (__fastcall **)(int, int, int *, char *))(*(_DWORD *)a9 + 16);
          v41 = v55;
          v42 = 0;
          if ( v30(a9, _R4, &v55, &v41) )
          v21 = *(_BYTE *)(v29 + 4);
        v31 = BlockSource::getData(v12, (const BlockPos *)_R4);
        v32 = v31;
        (*(void (__fastcall **)(int, const BlockPos *, int, unsigned int))(*(_DWORD *)v29 + 276))(v29, v12, _R4, v31);
        TopSnowBlock::dataIDToRecoverableFullBlock((TopSnowBlock *)&v39, v12, (const BlockPos *)_R4, v32);
        v37 = v39;
        v38 = v40;
        BlockSource::setBlockAndData((int)v12, (BlockPos *)_R4, (int)&v37, 3, (int)v9);
        v35 = *(_BYTE *)(v29 + 4);
        v36 = 0;
LABEL_25:
      v28();
      return 1;
    if ( a9 )
      v22 = (char *)(Block::mGrassPathBlock + 4);
      v23 = *(int (__fastcall **)(int, int, int *, char *))(*(_DWORD *)a9 + 16);
      v53 = *(_BYTE *)(Block::mGrassPathBlock + 4);
      v16 = 0;
      v54 = 0;
      if ( v23(a9, _R4, &v55, &v53) )
        return v16;
    else
    v16 = 1;
    Level::broadcastSoundEvent(v15, (int)v12, 0, (int)&v56, (unsigned __int8)*v22, 1, 0, 0);
    ItemInstance::hurtAndBreak(v11, 1, v9);
    if ( !Level::isClientSide(v15) )
      v51 = *v22;
      v52 = 0;
      BlockSource::setBlockAndData((int)v12, (BlockPos *)_R4, (int)&v51, 3, (int)v9);
      if ( a9 )
        v33 = *v22;
        v49 = v33;
        v50 = 0;
        goto LABEL_25;
  }
  return v16;
}


void __fastcall ShovelItem::~ShovelItem(ShovelItem *this)
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


signed int __fastcall ShovelItem::getEnchantSlot(ShovelItem *this)
{
  return 2048;
}


void __fastcall ShovelItem::~ShovelItem(ShovelItem *this)
{
  ShovelItem::~ShovelItem(this);
}


int __fastcall ShovelItem::ShovelItem(int a1, const void **a2, __int16 a3, int a4)
{
  int v4; // r5@1
  int v5; // r9@1
  int v6; // r4@1
  void *v7; // r5@1
  _DWORD *v8; // r7@1
  _DWORD *v9; // r6@1
  _DWORD *v10; // r7@1
  int v11; // r1@1
  int v12; // r2@1
  int v13; // r3@1
  int v14; // r4@3
  int v15; // r0@3
  _DWORD *v16; // r8@4
  int v17; // r1@8
  int v18; // r7@9
  _DWORD *v19; // r5@9
  signed int v20; // r7@10
  int v21; // r4@10
  unsigned int v22; // r0@10
  unsigned int v23; // r1@12
  unsigned int v24; // r6@12
  _DWORD *v25; // r6@25
  signed int v26; // r8@26
  int v27; // r7@26
  unsigned int v28; // r0@26
  unsigned int v29; // r1@28
  unsigned int v30; // r4@28
  int v31; // r1@40
  _DWORD *v32; // r5@41
  int v33; // r7@41
  signed int v34; // r8@42
  int v35; // r7@42
  unsigned int v36; // r0@42
  unsigned int v37; // r1@44
  unsigned int v38; // r4@44
  _DWORD *v39; // r6@57
  signed int v40; // r8@58
  int v41; // r7@58
  unsigned int v42; // r0@58
  unsigned int v43; // r1@60
  unsigned int v44; // r4@60
  int v45; // r1@72
  char *v46; // r5@73
  char *v47; // r7@73
  signed int v48; // r8@74
  int v49; // r7@74
  unsigned int v50; // r0@74
  unsigned int v51; // r1@76
  unsigned int v52; // r4@76
  char *v53; // r6@89
  signed int v54; // r7@90
  signed int v55; // r4@90
  unsigned int v56; // r1@90
  unsigned int v57; // r2@92
  unsigned int v58; // r0@92
  unsigned int v59; // r1@106
  int v60; // r3@107

  v4 = a4;
  v5 = a1;
  Item::Item(a1, a2, a3);
  *(_DWORD *)v5 = &off_2703020;
  *(_DWORD *)(v5 + 116) = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v5 + 120) = v4;
  _aeabi_memclr4(v5 + 128, 268);
  *(_BYTE *)(v5 + 4) = 1;
  Item::setMaxDamage((Item *)v5, *(_DWORD *)(v4 + 4));
  *(_DWORD *)(v5 + 124) = *(_DWORD *)(v4 + 12) + 1;
  *(_DWORD *)v5 = &off_2703494;
  v6 = Block::mGrass;
  v7 = operator new(4u);
  *(_DWORD *)v7 = v6;
  v8 = operator new(8u);
  v8[1] = Block::mDirt;
  *v8 = *(_DWORD *)v7;
  operator delete(v7);
  v9 = operator new(0x10u);
  v9[2] = Block::mSand;
  *(_QWORD *)v9 = *(_QWORD *)v8;
  operator delete(v8);
  v9[3] = Block::mConcretePowder;
  v10 = operator new(0x20u);
  v10[4] = Block::mGravel;
  v11 = v9[1];
  v12 = v9[2];
  v13 = v9[3];
  *v10 = *v9;
  v10[1] = v11;
  v10[2] = v12;
  v10[3] = v13;
  if ( v9 )
    operator delete(v9);
  v14 = (int)(v10 + 6);
  v10[5] = Block::mTopSnow;
  v15 = (int)(v10 + 8);
  if ( v10 + 6 == v10 + 8 )
  {
    v16 = operator new(0x30u);
    v16[6] = Block::mSnow;
    v14 = (int)(v16 + 6);
    _aeabi_memmove4(v16, v10);
    if ( v10 )
      operator delete(v10);
    v15 = (int)(v16 + 12);
  }
  else
    v16 = v10;
    v10[6] = Block::mSnow;
  v17 = v14 + 4;
  if ( v14 + 4 == v15 )
    v20 = v17 - (_DWORD)v16;
    v19 = 0;
    v21 = (v17 - (signed int)v16) >> 2;
    v22 = (v17 - (signed int)v16) >> 2;
    if ( !v21 )
      v22 = 1;
    v23 = v22 + (v20 >> 2);
    v24 = v22 + (v20 >> 2);
    if ( 0 != v23 >> 30 )
      v24 = 0x3FFFFFFF;
    if ( v23 < v22 )
    if ( v24 )
    {
      if ( v24 >= 0x40000000 )
        sub_21E57F4();
      v19 = operator new(4 * v24);
    }
    v19[v21] = Block::mClay;
    if ( v21 )
      _aeabi_memmove4(v19, v16);
    v18 = (int)&v19[v21 + 1];
    if ( v16 )
      operator delete(v16);
    v15 = (int)&v19[v24];
    v18 = v14 + 8;
    v19 = v16;
    *(_DWORD *)(v14 + 4) = Block::mClay;
  if ( v18 == v15 )
    v26 = v18 - (_DWORD)v19;
    v25 = 0;
    v27 = (v18 - (signed int)v19) >> 2;
    v28 = v27;
    if ( !(v26 >> 2) )
      v28 = 1;
    v29 = v28 + (v26 >> 2);
    v30 = v28 + (v26 >> 2);
    if ( 0 != v29 >> 30 )
      v30 = 0x3FFFFFFF;
    if ( v29 < v28 )
    if ( v30 )
      if ( v30 >= 0x40000000 )
      v25 = operator new(4 * v30);
    v25[v27] = Block::mFarmland;
    if ( v27 )
      _aeabi_memmove4(v25, v19);
    v18 = (int)&v25[v27];
    if ( v19 )
      operator delete(v19);
    v15 = (int)&v25[v30];
    v25 = v19;
    *(_DWORD *)v18 = Block::mFarmland;
  v31 = v18 + 4;
  if ( v18 + 4 == v15 )
    v34 = v31 - (_DWORD)v25;
    v32 = 0;
    v35 = (v31 - (signed int)v25) >> 2;
    v36 = (v31 - (signed int)v25) >> 2;
    if ( !v35 )
      v36 = 1;
    v37 = v36 + (v34 >> 2);
    v38 = v36 + (v34 >> 2);
    if ( 0 != v37 >> 30 )
      v38 = 0x3FFFFFFF;
    if ( v37 < v36 )
    if ( v38 )
      if ( v38 >= 0x40000000 )
      v32 = operator new(4 * v38);
    v32[v35] = Block::mMycelium;
    if ( v35 )
      _aeabi_memmove4(v32, v25);
    v33 = (int)&v32[v35 + 1];
    if ( v25 )
      operator delete(v25);
    v15 = (int)&v32[v38];
    v32 = v25;
    *(_DWORD *)(v18 + 4) = Block::mMycelium;
    v33 = v18 + 8;
  if ( v33 == v15 )
    v40 = v33 - (_DWORD)v32;
    v39 = 0;
    v41 = (v33 - (signed int)v32) >> 2;
    v42 = v41;
    if ( !(v40 >> 2) )
      v42 = 1;
    v43 = v42 + (v40 >> 2);
    v44 = v42 + (v40 >> 2);
    if ( 0 != v43 >> 30 )
      v44 = 0x3FFFFFFF;
    if ( v43 < v42 )
    if ( v44 )
      if ( v44 >= 0x40000000 )
      v39 = operator new(4 * v44);
    v39[v41] = Block::mPodzol;
    if ( v41 )
      _aeabi_memmove4(v39, v32);
    v33 = (int)&v39[v41];
    if ( v32 )
      operator delete(v32);
    v15 = (int)&v39[v44];
    v39 = v32;
    *(_DWORD *)v33 = Block::mPodzol;
  v45 = v33 + 4;
  if ( v33 + 4 == v15 )
    v48 = v45 - (_DWORD)v39;
    v46 = 0;
    v49 = (v45 - (signed int)v39) >> 2;
    v50 = (v45 - (signed int)v39) >> 2;
    if ( !v49 )
      v50 = 1;
    v51 = v50 + (v48 >> 2);
    v52 = v50 + (v48 >> 2);
    if ( 0 != v51 >> 30 )
      v52 = 0x3FFFFFFF;
    if ( v51 < v50 )
    if ( v52 )
      if ( v52 >= 0x40000000 )
      v46 = (char *)operator new(4 * v52);
    *(_DWORD *)&v46[4 * v49] = Block::mSoulSand;
    if ( v49 )
      _aeabi_memmove4(v46, v39);
    v47 = &v46[4 * v49 + 4];
    if ( v39 )
      operator delete(v39);
    v15 = (int)&v46[4 * v52];
    v46 = (char *)v39;
    *(_DWORD *)(v33 + 4) = Block::mSoulSand;
    v47 = (char *)(v33 + 8);
  if ( v47 == (char *)v15 )
    v54 = v47 - v46;
    v53 = 0;
    v55 = v54 >> 2;
    v56 = v54 >> 2;
    if ( !(v54 >> 2) )
      v56 = 1;
    v57 = v56 + (v54 >> 2);
    v58 = v56 + (v54 >> 2);
    if ( 0 != v57 >> 30 )
      v58 = 0x3FFFFFFF;
    if ( v57 < v56 )
    if ( v58 )
      if ( v58 >= 0x40000000 )
      v53 = (char *)operator new(4 * v58);
    *(_DWORD *)&v53[4 * v55] = Block::mGrassPathBlock;
    if ( v55 )
      _aeabi_memmove4(v53, v46);
    v47 = &v53[4 * v55];
    if ( v46 )
      operator delete(v46);
    v53 = v46;
    *(_DWORD *)v47 = Block::mGrassPathBlock;
  _aeabi_memclr(v5 + 140, 256);
  if ( v47 + 4 == v53 )
    if ( !v53 )
      return v5;
    v59 = 0;
    do
      v60 = *(_DWORD *)&v53[4 * v59++];
      *(_BYTE *)(*(_BYTE *)(v60 + 4) + v5 + 140) = 1;
    while ( v59 < (v47 + 4 - v53) >> 2 );
  operator delete(v53);
  return v5;
}
