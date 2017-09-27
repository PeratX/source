

int __fastcall OldLeafBlock::getColor(OldLeafBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  unsigned __int8 v4; // r8@1
  BlockSource *v5; // r10@1
  const BlockPos *v6; // r4@1
  BlockSource *v7; // r7@1
  unsigned int v8; // r9@1
  char *v9; // r3@4
  signed int v10; // r11@5
  signed int v11; // r6@5
  signed int v12; // r5@5
  signed int v13; // r7@5
  __int64 v14; // r0@8
  int v15; // r2@8
  int v16; // r0@8
  int v17; // r0@8
  int v18; // r11@8
  int v19; // r5@8
  int v20; // off@8
  int v21; // r7@8
  int v22; // off@8
  int v23; // r1@9
  int v24; // r2@9
  int v25; // r0@9
  int v26; // r0@9
  int v27; // off@9
  int v28; // off@9
  __int64 v29; // r0@10
  int v30; // r2@10
  int (*v31)(void); // r2@10
  __int64 v32; // r0@11
  int v33; // r2@11
  int v34; // r0@11
  int v35; // r0@11
  int v36; // off@11
  int v37; // off@11
  int v38; // r1@12
  int v39; // r2@12
  int v40; // r0@12
  int v41; // r0@12
  int v42; // off@12
  int v43; // off@12
  __int64 v44; // r0@13
  int v45; // r2@13
  __int64 v46; // r0@14
  int v47; // r2@14
  int v48; // r0@14
  int v49; // r0@14
  int v50; // off@14
  int v51; // off@14
  int v52; // r1@15
  int v53; // r2@15
  int v54; // r0@15
  int v55; // r0@15
  int v56; // off@15
  int v57; // off@15
  __int64 v58; // r0@16
  int v59; // r2@16
  int v60; // r0@17
  int v61; // off@17
  int v62; // off@17
  int result; // r0@18
  int v70; // r0@20
  int v71; // r1@20
  int v72; // r2@20
  __int64 v73; // [sp+Ch] [bp-64h]@8
  int v74; // [sp+14h] [bp-5Ch]@8
  char v75; // [sp+18h] [bp-58h]@19
  char v76; // [sp+28h] [bp-48h]@4
  int v77; // [sp+38h] [bp-38h]@2
  int v78; // [sp+3Ch] [bp-34h]@2
  int v79; // [sp+40h] [bp-30h]@2
  int v80; // [sp+44h] [bp-2Ch]@2

  v4 = a4;
  v5 = a2;
  v6 = a3;
  v7 = this;
  v8 = LeafBlock::getLeafType(this, a4);
  if ( (*(int (__fastcall **)(BlockSource *, BlockSource *, const BlockPos *))(*(_DWORD *)v7 + 400))(v7, v5, v6) )
  {
    v79 = 0;
    v80 = 0;
    v77 = 0;
    v78 = 0;
    if ( v8 == 2 )
    {
      LeafBlock::getSeasonsColor((LeafBlock *)&v75, v7, v5, (int)v6, 2, 4);
      v9 = &v75;
      goto LABEL_20;
    }
    if ( v8 == 1 )
      LeafBlock::getSeasonsColor((LeafBlock *)&v76, v7, v5, (int)v6, 1, 1);
      v9 = &v76;
LABEL_20:
      v70 = *(_DWORD *)v9;
      v71 = *((_DWORD *)v9 + 1);
      v72 = *((_DWORD *)v9 + 2);
      v80 = *((_DWORD *)v9 + 3);
      v79 = v72;
      v78 = v71;
      v77 = v70;
      return Color::toARGB((Color *)&v77);
    result = LeafBlock::getColor(v7, v5, v6, v4);
  }
  else
    v10 = 0;
    v11 = -4;
    v12 = 0;
    v13 = 0;
    do
      if ( v8 == 2 )
      {
        HIDWORD(v32) = *((_DWORD *)v6 + 1);
        v33 = *((_DWORD *)v6 + 2);
        LODWORD(v32) = *(_DWORD *)v6 + v11;
        v73 = v32;
        v74 = v33 - 4;
        v34 = BlockSource::getBiome(v5, (const BlockPos *)&v73);
        v35 = (*(int (**)(void))(*(_DWORD *)v34 + 48))();
        v18 = v10 + v35;
        v36 = __ROR4__(v35, 8);
        v19 = v12 + v36;
        v37 = __ROR4__(v35, 16);
        v21 = v13 + v37;
        if ( v11 )
        {
          v38 = *((_DWORD *)v6 + 1);
          v39 = *((_DWORD *)v6 + 2);
          LODWORD(v73) = *(_DWORD *)v6 + v11;
          HIDWORD(v73) = v38;
          v74 = v39;
          v40 = BlockSource::getBiome(v5, (const BlockPos *)&v73);
          v41 = (*(int (**)(void))(*(_DWORD *)v40 + 48))();
          v18 += v41;
          v42 = __ROR4__(v41, 8);
          v19 += v42;
          v43 = __ROR4__(v41, 16);
          v21 += v43;
        }
        HIDWORD(v44) = *((_DWORD *)v6 + 1);
        v45 = *((_DWORD *)v6 + 2);
        LODWORD(v44) = *(_DWORD *)v6 + v11;
        v73 = v44;
        v74 = v45 + 4;
        v31 = *(int (**)(void))(*(_DWORD *)BlockSource::getBiome(v5, (const BlockPos *)&v73) + 48);
      }
      else if ( v8 == 1 )
        HIDWORD(v14) = *((_DWORD *)v6 + 1);
        v15 = *((_DWORD *)v6 + 2);
        LODWORD(v14) = *(_DWORD *)v6 + v11;
        v73 = v14;
        v74 = v15 - 4;
        v16 = BlockSource::getBiome(v5, (const BlockPos *)&v73);
        v17 = (*(int (**)(void))(*(_DWORD *)v16 + 52))();
        v18 = v10 + v17;
        v20 = __ROR4__(v17, 8);
        v19 = v12 + v20;
        v22 = __ROR4__(v17, 16);
        v21 = v13 + v22;
          v23 = *((_DWORD *)v6 + 1);
          v24 = *((_DWORD *)v6 + 2);
          HIDWORD(v73) = v23;
          v74 = v24;
          v25 = BlockSource::getBiome(v5, (const BlockPos *)&v73);
          v26 = (*(int (**)(void))(*(_DWORD *)v25 + 52))();
          v18 += v26;
          v27 = __ROR4__(v26, 8);
          v19 += v27;
          v28 = __ROR4__(v26, 16);
          v21 += v28;
        HIDWORD(v29) = *((_DWORD *)v6 + 1);
        v30 = *((_DWORD *)v6 + 2);
        LODWORD(v29) = *(_DWORD *)v6 + v11;
        v73 = v29;
        v74 = v30 + 4;
        v31 = *(int (**)(void))(*(_DWORD *)BlockSource::getBiome(v5, (const BlockPos *)&v73) + 52);
      else
        HIDWORD(v46) = *((_DWORD *)v6 + 1);
        v47 = *((_DWORD *)v6 + 2);
        LODWORD(v46) = *(_DWORD *)v6 + v11;
        v73 = v46;
        v74 = v47 - 4;
        v48 = BlockSource::getBiome(v5, (const BlockPos *)&v73);
        v49 = (*(int (**)(void))(*(_DWORD *)v48 + 44))();
        v18 = v10 + v49;
        v50 = __ROR4__(v49, 8);
        v19 = v12 + v50;
        v51 = __ROR4__(v49, 16);
        v21 = v13 + v51;
          v52 = *((_DWORD *)v6 + 1);
          v53 = *((_DWORD *)v6 + 2);
          HIDWORD(v73) = v52;
          v74 = v53;
          v54 = BlockSource::getBiome(v5, (const BlockPos *)&v73);
          v55 = (*(int (**)(void))(*(_DWORD *)v54 + 44))();
          v18 += v55;
          v56 = __ROR4__(v55, 8);
          v19 += v56;
          v57 = __ROR4__(v55, 16);
          v21 += v57;
        HIDWORD(v58) = *((_DWORD *)v6 + 1);
        v59 = *((_DWORD *)v6 + 2);
        LODWORD(v58) = *(_DWORD *)v6 + v11;
        v73 = v58;
        v74 = v59 + 4;
        v31 = *(int (**)(void))(*(_DWORD *)BlockSource::getBiome(v5, (const BlockPos *)&v73) + 44);
      v60 = v31();
      v11 += 4;
      v10 = v18 + v60;
      v61 = __ROR4__(v60, 8);
      v12 = v19 + v61;
      v62 = __ROR4__(v60, 16);
      v13 = v21 + v62;
    while ( v11 != 8 );
    _R0 = (v13 + ((unsigned int)(v13 >> 31) >> 29)) << 13;
    __asm { UXTB16.W        R0, R0 }
    result = _R0 & 0xFFFF00FF | ((v12 / 8 & 0xFF) << 8) | ((v10 + ((unsigned int)(v10 >> 31) >> 29)) >> 3) & 0xFF;
  return result;
}


void __fastcall OldLeafBlock::buildDescriptionId(OldLeafBlock *this, int a2, int a3)
{
  OldLeafBlock::buildDescriptionId(this, a2, a3);
}


void __fastcall OldLeafBlock::~OldLeafBlock(OldLeafBlock *this)
{
  void *v1; // r0@1

  v1 = (void *)LeafBlock::~LeafBlock(this);
  j_j_j__ZdlPv_6(v1);
}


void __fastcall OldLeafBlock::buildDescriptionId(OldLeafBlock *this, int a2, int a3)
{
  int v3; // r6@1
  OldLeafBlock *v4; // r4@1
  signed int v5; // r5@1
  char v6; // r0@1
  int *v7; // r0@4
  const void **v8; // r0@4
  const void **v9; // r0@4
  char *v10; // r0@4
  void *v11; // r0@5
  unsigned int *v12; // r2@7
  signed int v13; // r1@9
  unsigned int *v14; // r2@11
  signed int v15; // r1@13
  int v16; // [sp+4h] [bp-2Ch]@4
  char *v17; // [sp+8h] [bp-28h]@4

  v3 = a2;
  v4 = this;
  v5 = LeafBlock::getLeafType((LeafBlock *)a2, a3);
  v6 = byte_2812950[0];
  __dmb();
  if ( !(v6 & 1) && j___cxa_guard_acquire((unsigned int *)byte_2812950) )
  {
    sub_21E94B4((void **)&dword_2812954, "oak");
    sub_21E94B4((void **)&dword_2812958, "spruce");
    sub_21E94B4((void **)&dword_281295C, "birch");
    sub_21E94B4((void **)&dword_2812960, "jungle");
    _cxa_atexit(sub_ABEEF4);
    j___cxa_guard_release((unsigned int *)byte_2812950);
  }
  v7 = sub_21E8AF4(&v16, (int *)(v3 + 8));
  sub_21E7408((const void **)v7, ".", 1u);
  v8 = sub_21E72F0(
         (const void **)&v16,
         (const void **)&byte_2812950[4 * (v5 - ((v5 + ((unsigned int)(v5 >> 31) >> 30)) & 0x3FFFFFFC)) + 4]);
  v17 = (char *)*v8;
  *v8 = &unk_28898CC;
  v9 = sub_21E7408((const void **)&v17, ".name", 5u);
  *(_DWORD *)v4 = *v9;
  *v9 = &unk_28898CC;
  v10 = v17 - 12;
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v16 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
}


void __fastcall OldLeafBlock::~OldLeafBlock(OldLeafBlock *this)
{
  OldLeafBlock::~OldLeafBlock(this);
}


int __fastcall OldLeafBlock::getVariant(OldLeafBlock *this, int a2)
{
  OldLeafBlock *v2; // r4@1
  int result; // r0@1

  v2 = this;
  result = (signed int)LeafBlock::getLeafType(this, a2) % 4;
  if ( !*((_BYTE *)v2 + 641) )
    result += 4;
  return result;
}


_DWORD *__fastcall OldLeafBlock::OldLeafBlock(int a1, const void **a2, char a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)LeafBlock::LeafBlock(a1, a2, a3);
  *result = &off_2710264;
  return result;
}


unsigned int __fastcall OldLeafBlock::dropExtraLoot(OldLeafBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  BlockSource *v4; // r5@1
  const BlockPos *v5; // r4@1
  Block *v6; // r6@1
  unsigned int result; // r0@1
  int v8; // [sp+0h] [bp-60h]@2
  int v9; // [sp+8h] [bp-58h]@6
  void *v10; // [sp+24h] [bp-3Ch]@4
  void *ptr; // [sp+34h] [bp-2Ch]@2

  v4 = a2;
  v5 = a3;
  v6 = this;
  result = LeafBlock::getLeafType(this, a4);
  if ( !result )
  {
    ItemInstance::ItemInstance((ItemInstance *)&v8, Item::mApple, 1, 0);
    Block::popResource(v6, v4, v5, (const ItemInstance *)&v8);
    if ( ptr )
      operator delete(ptr);
    if ( v10 )
      operator delete(v10);
    if ( v9 )
      (*(void (**)(void))(*(_DWORD *)v9 + 4))();
    result = 0;
  }
  return result;
}


int __fastcall OldLeafBlock::getMapColor(OldLeafBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r5@1
  BlockSource *v5; // r11@1
  BlockSource *v6; // r7@1
  int v7; // r0@1
  unsigned int v8; // r0@1
  signed int v9; // r7@1
  signed int v10; // r4@1
  unsigned int v11; // r10@1
  signed int v12; // r8@1
  signed int v13; // r6@1
  __int64 v14; // r0@4
  int v15; // r2@4
  int v16; // r0@4
  int v17; // r0@4
  int v18; // r8@4
  int v19; // r6@4
  int v20; // off@4
  int v21; // r7@4
  int v22; // off@4
  int v23; // r1@5
  int v24; // r2@5
  int v25; // r0@5
  int v26; // r0@5
  int v27; // off@5
  int v28; // off@5
  __int64 v29; // r0@6
  int v30; // r2@6
  int (*v31)(void); // r2@6
  __int64 v32; // r0@7
  int v33; // r2@7
  int v34; // r0@7
  int v35; // r0@7
  int v36; // off@7
  int v37; // off@7
  int v38; // r1@8
  int v39; // r2@8
  int v40; // r0@8
  int v41; // r0@8
  int v42; // off@8
  int v43; // off@8
  __int64 v44; // r0@9
  int v45; // r2@9
  __int64 v46; // r0@10
  int v47; // r2@10
  int v48; // r0@10
  int v49; // r0@10
  int v50; // off@10
  int v51; // off@10
  int v52; // r1@11
  int v53; // r2@11
  int v54; // r0@11
  int v55; // r0@11
  int v56; // off@11
  int v57; // off@11
  __int64 v58; // r0@12
  int v59; // r2@12
  int v60; // r0@13
  int v61; // off@13
  int v62; // off@13
  int result; // r0@14
  OldLeafBlock *v71; // [sp+4h] [bp-34h]@1
  __int64 v72; // [sp+8h] [bp-30h]@4
  int v73; // [sp+10h] [bp-28h]@4

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v71 = this;
  v7 = BlockSource::getData(a3, a4);
  v8 = LeafBlock::getLeafType(v6, v7);
  v9 = 0;
  v10 = -4;
  v11 = v8;
  v12 = 0;
  v13 = 0;
  do
  {
    if ( v11 == 2 )
    {
      HIDWORD(v32) = *((_DWORD *)v4 + 1);
      v33 = *((_DWORD *)v4 + 2);
      LODWORD(v32) = *(_DWORD *)v4 + v10;
      v72 = v32;
      v73 = v33 - 4;
      v34 = BlockSource::getBiome(v5, (const BlockPos *)&v72);
      v35 = (*(int (**)(void))(*(_DWORD *)v34 + 60))();
      v18 = v12 + v35;
      v36 = __ROR4__(v35, 8);
      v19 = v13 + v36;
      v37 = __ROR4__(v35, 16);
      v21 = v9 + v37;
      if ( v10 )
      {
        v38 = *((_DWORD *)v4 + 1);
        v39 = *((_DWORD *)v4 + 2);
        LODWORD(v72) = *(_DWORD *)v4 + v10;
        HIDWORD(v72) = v38;
        v73 = v39;
        v40 = BlockSource::getBiome(v5, (const BlockPos *)&v72);
        v41 = (*(int (**)(void))(*(_DWORD *)v40 + 60))();
        v18 += v41;
        v42 = __ROR4__(v41, 8);
        v19 += v42;
        v43 = __ROR4__(v41, 16);
        v21 += v43;
      }
      HIDWORD(v44) = *((_DWORD *)v4 + 1);
      v45 = *((_DWORD *)v4 + 2);
      LODWORD(v44) = *(_DWORD *)v4 + v10;
      v72 = v44;
      v73 = v45 + 4;
      v31 = *(int (**)(void))(*(_DWORD *)BlockSource::getBiome(v5, (const BlockPos *)&v72) + 60);
    }
    else if ( v11 == 1 )
      HIDWORD(v14) = *((_DWORD *)v4 + 1);
      v15 = *((_DWORD *)v4 + 2);
      LODWORD(v14) = *(_DWORD *)v4 + v10;
      v72 = v14;
      v73 = v15 - 4;
      v16 = BlockSource::getBiome(v5, (const BlockPos *)&v72);
      v17 = (*(int (**)(void))(*(_DWORD *)v16 + 64))();
      v18 = v12 + v17;
      v20 = __ROR4__(v17, 8);
      v19 = v13 + v20;
      v22 = __ROR4__(v17, 16);
      v21 = v9 + v22;
        v23 = *((_DWORD *)v4 + 1);
        v24 = *((_DWORD *)v4 + 2);
        HIDWORD(v72) = v23;
        v73 = v24;
        v25 = BlockSource::getBiome(v5, (const BlockPos *)&v72);
        v26 = (*(int (**)(void))(*(_DWORD *)v25 + 64))();
        v18 += v26;
        v27 = __ROR4__(v26, 8);
        v19 += v27;
        v28 = __ROR4__(v26, 16);
        v21 += v28;
      HIDWORD(v29) = *((_DWORD *)v4 + 1);
      v30 = *((_DWORD *)v4 + 2);
      LODWORD(v29) = *(_DWORD *)v4 + v10;
      v72 = v29;
      v73 = v30 + 4;
      v31 = *(int (**)(void))(*(_DWORD *)BlockSource::getBiome(v5, (const BlockPos *)&v72) + 64);
    else
      HIDWORD(v46) = *((_DWORD *)v4 + 1);
      v47 = *((_DWORD *)v4 + 2);
      LODWORD(v46) = *(_DWORD *)v4 + v10;
      v72 = v46;
      v73 = v47 - 4;
      v48 = BlockSource::getBiome(v5, (const BlockPos *)&v72);
      v49 = (*(int (**)(void))(*(_DWORD *)v48 + 56))();
      v18 = v12 + v49;
      v50 = __ROR4__(v49, 8);
      v19 = v13 + v50;
      v51 = __ROR4__(v49, 16);
      v21 = v9 + v51;
        v52 = *((_DWORD *)v4 + 1);
        v53 = *((_DWORD *)v4 + 2);
        HIDWORD(v72) = v52;
        v73 = v53;
        v54 = BlockSource::getBiome(v5, (const BlockPos *)&v72);
        v55 = (*(int (**)(void))(*(_DWORD *)v54 + 56))();
        v18 += v55;
        v56 = __ROR4__(v55, 8);
        v19 += v56;
        v57 = __ROR4__(v55, 16);
        v21 += v57;
      HIDWORD(v58) = *((_DWORD *)v4 + 1);
      v59 = *((_DWORD *)v4 + 2);
      LODWORD(v58) = *(_DWORD *)v4 + v10;
      v72 = v58;
      v73 = v59 + 4;
      v31 = *(int (**)(void))(*(_DWORD *)BlockSource::getBiome(v5, (const BlockPos *)&v72) + 56);
    v60 = v31();
    v10 += 4;
    v12 = v18 + v60;
    v61 = __ROR4__(v60, 8);
    v13 = v19 + v61;
    v62 = __ROR4__(v60, 16);
    v9 = v21 + v62;
  }
  while ( v10 != 8 );
  __asm { VLDR            S6, =0.0021223 }
  _R1 = ((v9 + ((unsigned int)(v9 >> 31) >> 29)) >> 3) & 0xFF;
  _R2 = ((v13 + ((unsigned int)(v13 >> 31) >> 29)) >> 3) & 0xFF;
  __asm
    VMOV            S0, R1
    VMOV            S2, R2
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
  _R0 = ((v12 + ((unsigned int)(v12 >> 31) >> 29)) >> 3) & 0xFF;
  __asm { VMOV            S4, R0 }
  result = 0;
    VCVT.F32.S32    S4, S4
    VMUL.F32        S0, S0, S6
    VMUL.F32        S2, S2, S6
  *((_DWORD *)v71 + 3) = 0;
    VMUL.F32        S4, S4, S6
    VSTR            S0, [R1]
    VSTR            S2, [R1,#4]
    VSTR            S4, [R1,#8]
  return result;
}


signed int __fastcall OldLeafBlock::getRenderLayer(OldLeafBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  OldLeafBlock *v5; // r6@1
  int v6; // r1@1
  Biome *v7; // r0@3
  signed int v8; // r0@3
  signed int v9; // r1@3
  signed int result; // r0@5

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = BlockSource::getData(a2, a3);
  if ( *((_BYTE *)v5 + 642) || LeafBlock::getLeafType(v5, v6) != 3 )
  {
    result = j_j_j__ZNK9LeafBlock14getRenderLayerER11BlockSourceRK8BlockPos(v5, v4, v3);
  }
  else
    v7 = (Biome *)BlockSource::getBiome(v4, v3);
    v8 = Biome::canHaveSnowfall(v7, v4, v3);
    v9 = 3;
    if ( v8 )
      v9 = 6;
    result = v9;
  return result;
}
