

int __fastcall HatchetItem::HatchetItem(int a1, const void **a2, __int16 a3, int a4)
{
  int v4; // r5@1
  int v5; // r9@1
  void *v6; // r5@1
  _DWORD *v7; // r7@1
  _DWORD *v8; // r6@1
  _DWORD *v9; // r7@1
  int v10; // r1@1
  int v11; // r2@1
  int v12; // r3@1
  int v13; // r4@3
  int v14; // r0@3
  _DWORD *v15; // r8@4
  int v16; // r1@8
  int v17; // r7@9
  _DWORD *v18; // r5@9
  signed int v19; // r7@10
  int v20; // r4@10
  unsigned int v21; // r0@10
  unsigned int v22; // r1@12
  unsigned int v23; // r6@12
  _DWORD *v24; // r6@25
  signed int v25; // r8@26
  int v26; // r7@26
  unsigned int v27; // r0@26
  unsigned int v28; // r1@28
  unsigned int v29; // r4@28
  int v30; // r1@40
  _DWORD *v31; // r5@41
  int v32; // r7@41
  signed int v33; // r8@42
  int v34; // r7@42
  unsigned int v35; // r0@42
  unsigned int v36; // r1@44
  unsigned int v37; // r4@44
  _DWORD *v38; // r6@57
  signed int v39; // r8@58
  int v40; // r7@58
  unsigned int v41; // r0@58
  unsigned int v42; // r1@60
  unsigned int v43; // r4@60
  int v44; // r1@72
  char *v45; // r5@73
  char *v46; // r7@73
  signed int v47; // r8@74
  int v48; // r7@74
  unsigned int v49; // r0@74
  unsigned int v50; // r1@76
  unsigned int v51; // r4@76
  char *v52; // r6@89
  signed int v53; // r7@90
  signed int v54; // r4@90
  unsigned int v55; // r1@90
  unsigned int v56; // r2@92
  unsigned int v57; // r0@92
  unsigned int v58; // r1@106
  int v59; // r3@107

  v4 = a4;
  v5 = a1;
  j_Item::Item(a1, a2, a3);
  *(_DWORD *)v5 = &off_2703020;
  *(_DWORD *)(v5 + 116) = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v5 + 120) = v4;
  j___aeabi_memclr4_0(v5 + 128, 268);
  *(_BYTE *)(v5 + 4) = 1;
  j_Item::setMaxDamage((Item *)v5, *(_DWORD *)(v4 + 4));
  *(_DWORD *)(v5 + 124) = *(_DWORD *)(v4 + 12) + 3;
  *(_DWORD *)v5 = &off_27217B8;
  v6 = j_operator new(4u);
  *(_DWORD *)v6 = Block::mWoodPlanks;
  v7 = j_operator new(8u);
  v7[1] = Block::mBookshelf;
  *v7 = *(_DWORD *)v6;
  j_operator delete(v6);
  v8 = j_operator new(0x10u);
  v8[2] = Block::mLog;
  *(_QWORD *)v8 = *(_QWORD *)v7;
  j_operator delete(v7);
  v8[3] = Block::mLog2;
  v9 = j_operator new(0x20u);
  v9[4] = Block::mChest;
  v10 = v8[1];
  v11 = v8[2];
  v12 = v8[3];
  *v9 = *v8;
  v9[1] = v10;
  v9[2] = v11;
  v9[3] = v12;
  if ( v8 )
    j_operator delete(v8);
  v13 = (int)(v9 + 6);
  v9[5] = Block::mDoubleWoodenSlab;
  v14 = (int)(v9 + 8);
  if ( v9 + 6 == v9 + 8 )
  {
    v15 = j_operator new(0x30u);
    v15[6] = Block::mWoodenSlab;
    v13 = (int)(v15 + 6);
    j___aeabi_memmove4_0((int)v15, (int)v9);
    if ( v9 )
      j_operator delete(v9);
    v14 = (int)(v15 + 12);
  }
  else
    v15 = v9;
    v9[6] = Block::mWoodenSlab;
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
      v18 = j_operator new(4 * v23);
    }
    v18[v20] = Block::mPumpkin;
    if ( v20 )
      j___aeabi_memmove4_0((int)v18, (int)v15);
    v17 = (int)&v18[v20 + 1];
    if ( v15 )
      j_operator delete(v15);
    v14 = (int)&v18[v23];
    v17 = v13 + 8;
    v18 = v15;
    *(_DWORD *)(v13 + 4) = Block::mPumpkin;
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
      v24 = j_operator new(4 * v29);
    v24[v26] = Block::mLitPumpkin;
    if ( v26 )
      j___aeabi_memmove4_0((int)v24, (int)v18);
    v17 = (int)&v24[v26];
    if ( v18 )
      j_operator delete(v18);
    v14 = (int)&v24[v29];
    v24 = v18;
    *(_DWORD *)v17 = Block::mLitPumpkin;
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
      v31 = j_operator new(4 * v37);
    v31[v34] = Block::mMelon;
    if ( v34 )
      j___aeabi_memmove4_0((int)v31, (int)v24);
    v32 = (int)&v31[v34 + 1];
    if ( v24 )
      j_operator delete(v24);
    v14 = (int)&v31[v37];
    v31 = v24;
    *(_DWORD *)(v17 + 4) = Block::mMelon;
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
      v38 = j_operator new(4 * v43);
    v38[v40] = Block::mLadder;
    if ( v40 )
      j___aeabi_memmove4_0((int)v38, (int)v31);
    v32 = (int)&v38[v40];
    if ( v31 )
      j_operator delete(v31);
    v14 = (int)&v38[v43];
    v38 = v31;
    *(_DWORD *)v32 = Block::mLadder;
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
      v45 = (char *)j_operator new(4 * v51);
    *(_DWORD *)&v45[4 * v48] = Block::mWoodButton;
    if ( v48 )
      j___aeabi_memmove4_0((int)v45, (int)v38);
    v46 = &v45[4 * v48 + 4];
    if ( v38 )
      j_operator delete(v38);
    v14 = (int)&v45[4 * v51];
    v45 = (char *)v38;
    *(_DWORD *)(v32 + 4) = Block::mWoodButton;
    v46 = (char *)(v32 + 8);
  if ( v46 == (char *)v14 )
    v53 = v46 - v45;
    v52 = 0;
    v54 = v53 >> 2;
    v55 = v53 >> 2;
    if ( !(v53 >> 2) )
      v55 = 1;
    v56 = v55 + (v53 >> 2);
    v57 = v55 + (v53 >> 2);
    if ( 0 != v56 >> 30 )
      v57 = 0x3FFFFFFF;
    if ( v56 < v55 )
    if ( v57 )
      if ( v57 >= 0x40000000 )
      v52 = (char *)j_operator new(4 * v57);
    *(_DWORD *)&v52[4 * v54] = Block::mWoodPressurePlate;
    if ( v54 )
      j___aeabi_memmove4_0((int)v52, (int)v45);
    v46 = &v52[4 * v54];
    if ( v45 )
      j_operator delete(v45);
    v52 = v45;
    *(_DWORD *)v46 = Block::mWoodPressurePlate;
  j___aeabi_memclr_0(v5 + 140, 256);
  if ( v46 + 4 == v52 )
    if ( !v52 )
      return v5;
    v58 = 0;
    do
      v59 = *(_DWORD *)&v52[4 * v58++];
      *(_BYTE *)(*(_BYTE *)(v59 + 4) + v5 + 140) = 1;
    while ( v58 < (v46 + 4 - v52) >> 2 );
  j_operator delete(v52);
  return v5;
}


void __fastcall HatchetItem::~HatchetItem(HatchetItem *this)
{
  HatchetItem::~HatchetItem(this);
}


signed int __fastcall HatchetItem::getEnchantSlot(HatchetItem *this)
{
  return 512;
}


void __fastcall HatchetItem::~HatchetItem(HatchetItem *this)
{
  Item *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2703020;
  v2 = (void *)*((_DWORD *)this + 32);
  if ( v2 )
    j_operator delete(v2);
  j_Item::~Item(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall HatchetItem::getDestroySpeed(HatchetItem *this, const ItemInstance *a2, const Block *a3)
{
  const Block *v3; // r6@1
  const ItemInstance *v5; // r4@1
  int *v6; // r7@1
  int result; // r0@6

  v3 = a3;
  _R5 = this;
  v5 = a2;
  v6 = (int *)j_Block::getMaterial(a3);
  if ( j_Material::isType(v6, 2)
    || j_Material::isType(v6, 8)
    || j_Material::isType(v6, 9) == 1
    || *((_BYTE *)_R5 + *((_BYTE *)v3 + 4) + 140) )
  {
    __asm { VLDR            S16, [R5,#0x74] }
    _R0 = j_Item::destroySpeedBonus(_R5, v5);
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
