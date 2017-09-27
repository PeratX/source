

void __fastcall Sapling::buildDescriptionId(Sapling *this, int a2, unsigned int a3)
{
  int v3; // r5@1
  Sapling *v4; // r4@1
  unsigned int v5; // r6@1
  unsigned __int64 *v6; // r0@1
  unsigned int v7; // r6@1
  char v8; // r1@1
  int *v9; // r0@6
  const void **v10; // r0@6
  const void **v11; // r0@6
  char *v12; // r0@6
  void *v13; // r0@7
  unsigned int *v14; // r2@9
  signed int v15; // r1@11
  unsigned int *v16; // r2@13
  signed int v17; // r1@15
  int v18; // [sp+0h] [bp-38h]@6
  char *v19; // [sp+4h] [bp-34h]@6

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (unsigned __int64 *)Block::getBlockState(a2, 24);
  v7 = (v5 >> (*v6 + 1 - (*v6 >> 32))) & (0xFu >> (4 - (*v6 >> 32)));
  v8 = byte_28140B4;
  if ( v7 > 5 )
    v7 = 0;
  __dmb();
  if ( !(v8 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_28140B4) )
  {
    sub_21E94B4((void **)&dword_28140B8, "oak");
    sub_21E94B4((void **)&unk_28140BC, "spruce");
    sub_21E94B4((void **)&unk_28140C0, "birch");
    sub_21E94B4((void **)&unk_28140C4, "jungle");
    sub_21E94B4((void **)&unk_28140C8, "acacia");
    sub_21E94B4((void **)&unk_28140CC, "big_oak");
    _cxa_atexit(std::array<std::string,6u>::~array);
    j___cxa_guard_release((unsigned int *)&byte_28140B4);
  }
  v9 = sub_21E8AF4(&v18, (int *)(v3 + 8));
  sub_21E7408((const void **)v9, ".", 1u);
  v10 = sub_21E72F0((const void **)&v18, (const void **)&unk_28140B0 + v7 + 2);
  v19 = (char *)*v10;
  *v10 = &unk_28898CC;
  v11 = sub_21E7408((const void **)&v19, ".name", 5u);
  *(_DWORD *)v4 = *v11;
  *v11 = &unk_28898CC;
  v12 = v19 - 12;
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v18 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
}


void __fastcall Sapling::~Sapling(Sapling *this)
{
  Sapling::~Sapling(this);
}


unsigned int __fastcall Sapling::getVariant(Sapling *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 24);
  return (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)));
}


signed int __fastcall Sapling::onFertilized(Sapling *this, BlockSource *a2, const BlockPos *a3, Entity *a4, ItemUseCallback *a5)
{
  BlockSource *v5; // r5@1
  Sapling *v6; // r6@1
  Entity *v7; // r7@1
  const BlockPos *v8; // r8@1
  Level *v9; // r0@1
  char *v10; // r4@1
  signed int result; // r0@3

  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = (Level *)BlockSource::getLevel(a2);
  v10 = Level::getRandom(v9);
  if ( v7 && (*(int (__fastcall **)(Entity *))(*(_DWORD *)v7 + 652))(v7) == 1 )
  {
    result = Sapling::growTree(v6, v5, v8, (Random *)v10, v7, a5);
  }
  else
    _R0 = Random::_genRandInt32((Random *)v10);
    __asm
    {
      VMOV            S0, R0
      VLDR            D1, =2.32830644e-10
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D1
      VCVT.F32.F64    S0, D0
      VLDR            S2, =0.45
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      result = Sapling::advanceTree(v6, v5, v8, (Random *)v10, v7, a5);
    else
      result = 1;
  return result;
}


int __fastcall Sapling::isSapling(Sapling *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  BlockSource *v4; // r7@1
  int v5; // r8@1
  const BlockPos *v6; // r6@1
  Sapling *v7; // r5@1
  unsigned __int64 *v8; // r4@1
  unsigned int v9; // r9@1
  int v10; // r4@1
  unsigned __int64 v11; // kr00_8@1
  signed int v12; // r1@1
  signed int v13; // r0@1
  unsigned __int8 v15; // [sp+8h] [bp-20h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = this;
  v8 = (unsigned __int64 *)Block::getBlockState((int)this, 24);
  v9 = BlockSource::getData(v4, v6);
  v11 = *v8;
  v10 = *v8 >> 32;
  BlockSource::getBlockID((BlockSource *)&v15, (int)v4, *(_QWORD *)v6, *(_QWORD *)v6 >> 32, *((_DWORD *)v6 + 2));
  v12 = 0;
  v13 = 0;
  if ( ((v9 >> (1 - v10 + v11)) & (0xFu >> (4 - v10))) == v5 )
    v13 = 1;
  if ( v15 == *((_BYTE *)v7 + 4) )
    v12 = 1;
  return v13 & v12;
}


int __fastcall Sapling::getSpawnResourcesAuxValue(Sapling *this, int a2)
{
  unsigned int v2; // r8@1
  Sapling *v3; // r5@1
  __int64 v4; // r6@1
  BlockState *v5; // r0@1
  int v6; // r4@1
  int v7; // r5@1

  v2 = a2;
  v3 = this;
  v4 = *(_QWORD *)Block::getBlockState((int)this, 24);
  v5 = (BlockState *)Block::getBlockState((int)v3, 24);
  v6 = *(_QWORD *)v5 >> 32;
  v7 = *(_QWORD *)v5;
  BlockState::getMask(v5);
  return (unsigned __int8)((unsigned __int8)((v2 >> (1 - BYTE4(v4) + v4)) & (0xFu >> (4 - BYTE4(v4)))) << (v7 + 1 - v6));
}


Sapling *__fastcall Sapling::generateJungleTree(Sapling *this, int *a2, BlockSource *a3, Entity *a4, const BlockPos *a5, BlockSource *a6, Entity *a7, Entity *a8)
{
  Entity *v8; // r10@1
  BlockSource *v9; // r11@1
  int *v10; // r9@1
  int v11; // r0@2
  int v12; // r1@2
  int v13; // r3@3
  int v14; // r7@3
  int v15; // r6@3
  unsigned __int64 *v16; // r9@3
  unsigned int v17; // r8@3
  int v18; // r4@3
  int v19; // r7@3
  unsigned int v20; // r0@3
  bool v21; // zf@3
  __int64 v22; // r0@7
  int v23; // r2@7
  int v24; // r7@7
  unsigned __int64 *v25; // r4@7
  unsigned int v26; // r8@7
  int v27; // r4@7
  unsigned __int64 v28; // kr08_8@7
  unsigned int v29; // r0@7
  bool v30; // zf@7
  __int64 v31; // r0@11
  int v32; // r2@11
  int v33; // r7@11
  unsigned __int64 *v34; // r4@11
  unsigned int v35; // r8@11
  int v36; // r4@11
  unsigned __int64 v37; // kr10_8@11
  unsigned int v38; // r0@11
  bool v39; // zf@11
  __int64 v40; // r0@15
  int v41; // r2@15
  int v42; // r7@15
  unsigned __int64 *v43; // r4@15
  unsigned int v44; // r8@15
  int v45; // r4@15
  unsigned __int64 v46; // kr18_8@15
  Sapling *result; // r0@19
  MegaJungleTreeFeature *v48; // r4@20
  Sapling *v49; // [sp+14h] [bp-5Ch]@1
  __int64 v50; // [sp+18h] [bp-58h]@15
  int v51; // [sp+20h] [bp-50h]@15
  __int64 v52; // [sp+24h] [bp-4Ch]@11
  int v53; // [sp+2Ch] [bp-44h]@11
  __int64 v54; // [sp+30h] [bp-40h]@7
  int v55; // [sp+38h] [bp-38h]@7
  int v56; // [sp+3Ch] [bp-34h]@3
  int v57; // [sp+40h] [bp-30h]@3
  int v58; // [sp+44h] [bp-2Ch]@3
  unsigned __int8 v59; // [sp+48h] [bp-28h]@3

  v49 = this;
  v8 = a4;
  v9 = a3;
  v10 = a2;
  *(_DWORD *)a3 = 0;
  while ( 2 )
  {
    *(_DWORD *)v8 = 0;
    v11 = 0;
    v12 = *(_DWORD *)v9;
    do
    {
      v13 = *((_DWORD *)a6 + 1);
      v14 = *((_DWORD *)a6 + 2);
      v56 = v12 + *(_DWORD *)a6;
      v57 = v13;
      v58 = v11 + v14;
      v15 = (int)v10;
      v16 = (unsigned __int64 *)Block::getBlockState((int)v10, 24);
      v17 = BlockSource::getData(a7, (const BlockPos *)&v56);
      v19 = *v16 >> 32;
      v18 = *v16;
      v10 = (int *)v15;
      BlockSource::getBlockID((BlockSource *)&v59, (int)a7, v56, v57, v58);
      v20 = (v17 >> (1 - v19 + v18)) & (0xFu >> (4 - v19));
      v21 = v20 == 3;
      if ( v20 == 3 )
        v21 = v59 == *(_BYTE *)(v15 + 4);
      if ( v21 )
      {
        HIDWORD(v22) = *((_DWORD *)a6 + 1);
        v23 = *((_DWORD *)a6 + 2);
        v24 = *(_DWORD *)v8;
        LODWORD(v22) = *(_DWORD *)a6 + *(_DWORD *)v9 + 1;
        v54 = v22;
        v55 = v23 + v24;
        v25 = (unsigned __int64 *)Block::getBlockState(v15, 24);
        v26 = BlockSource::getData(a7, (const BlockPos *)&v54);
        v28 = *v25;
        v27 = *v25 >> 32;
        BlockSource::getBlockID((BlockSource *)&v59, (int)a7, v54, SHIDWORD(v54), v55);
        v29 = (v26 >> (1 - v27 + v28)) & (0xFu >> (4 - v27));
        v30 = v29 == 3;
        if ( v29 == 3 )
          v30 = v59 == *(_BYTE *)(v15 + 4);
        if ( v30 )
        {
          HIDWORD(v31) = *((_DWORD *)a6 + 1);
          v32 = *((_DWORD *)a6 + 2);
          v33 = *(_DWORD *)v8;
          LODWORD(v31) = *(_DWORD *)a6 + *(_DWORD *)v9;
          v52 = v31;
          v53 = v33 + v32 + 1;
          v34 = (unsigned __int64 *)Block::getBlockState(v15, 24);
          v35 = BlockSource::getData(a7, (const BlockPos *)&v52);
          v37 = *v34;
          v36 = *v34 >> 32;
          BlockSource::getBlockID((BlockSource *)&v59, (int)a7, v52, SHIDWORD(v52), v53);
          v38 = (v35 >> (1 - v36 + v37)) & (0xFu >> (4 - v36));
          v39 = v38 == 3;
          if ( v38 == 3 )
            v39 = v59 == *(_BYTE *)(v15 + 4);
          if ( v39 )
          {
            HIDWORD(v40) = *((_DWORD *)a6 + 1);
            v41 = *((_DWORD *)a6 + 2);
            v42 = *(_DWORD *)v8;
            LODWORD(v40) = *(_DWORD *)a6 + *(_DWORD *)v9 + 1;
            v50 = v40;
            v51 = v42 + v41 + 1;
            v43 = (unsigned __int64 *)Block::getBlockState(v15, 24);
            v44 = BlockSource::getData(a7, (const BlockPos *)&v50);
            v46 = *v43;
            v45 = *v43 >> 32;
            BlockSource::getBlockID((BlockSource *)&v59, (int)a7, v50, SHIDWORD(v50), v51);
            if ( ((v44 >> (1 - v45 + v46)) & (0xFu >> (4 - v45))) == 3 && v59 == *(_BYTE *)(v15 + 4) )
            {
              *(_BYTE *)a5 = 1;
              v48 = (MegaJungleTreeFeature *)operator new(0x28u);
              MegaJungleTreeFeature::MegaJungleTreeFeature(v48, a8, 10, 20, 12884901891LL);
              result = v49;
              *(_DWORD *)v49 = v48;
              return result;
            }
          }
        }
      }
      v11 = *(_DWORD *)v8 - 1;
      *(_DWORD *)v8 = v11;
      v12 = *(_DWORD *)v9;
    }
    while ( v11 >= -1 );
    *(_DWORD *)v9 = v12 - 1;
    if ( v12 - 1 >= -1 )
      continue;
    break;
  }
  result = 0;
  *(_DWORD *)v49 = 0;
  return result;
}


int __fastcall Sapling::tick(Sapling *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  BlockSource *v4; // r6@1
  BushBlock *v5; // r7@1
  Random *v6; // r4@1
  const BlockPos *v7; // r5@1
  Level *v8; // r0@1
  int result; // r0@1
  int v10; // r1@2
  int v11; // r2@2
  unsigned __int8 v12; // [sp+Ch] [bp-24h]@2
  int v13; // [sp+10h] [bp-20h]@2
  int v14; // [sp+14h] [bp-1Ch]@2
  int v15; // [sp+18h] [bp-18h]@2

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v8);
  if ( !result )
  {
    BushBlock::tick(v5, v4, v7, v6);
    v10 = *((_DWORD *)v7 + 1);
    v11 = *((_DWORD *)v7 + 2);
    v13 = *(_DWORD *)v7;
    v14 = v10 + 1;
    v15 = v11;
    BlockSource::getRawBrightness((BlockSource *)&v12, v4, (int)&v13, 1);
    result = (unsigned __int8)Brightness::MAX - 6;
    if ( v12 >= result )
    {
      result = Random::_genRandInt32(v6) % 7;
      if ( !result )
        result = Sapling::advanceTree(v5, v4, v7, v6, 0, 0);
    }
  }
  return result;
}


signed int __fastcall Sapling::advanceTree(Sapling *this, BlockSource *a2, const BlockPos *a3, Random *a4, Entity *a5, ItemUseCallback *a6)
{
  const BlockPos *v6; // r4@1
  BlockSource *v7; // r10@1
  Sapling *v8; // r5@1
  Random *v9; // r7@1
  unsigned __int8 v10; // r9@1
  BlockState *v11; // r0@1
  BlockState *v13; // r0@3
  int v14; // r7@3
  signed int v15; // r6@3
  unsigned int v16; // r0@3
  char *v17; // r5@4
  char v18; // t1@4
  int (__fastcall *v19)(ItemUseCallback *, const BlockPos *, char *, char *); // r7@4
  void (__fastcall *v20)(ItemUseCallback *, const BlockPos *, char *, char *); // r7@9
  char v21; // [sp+Ch] [bp-34h]@9
  unsigned __int8 v22; // [sp+Dh] [bp-33h]@9
  char v23; // [sp+10h] [bp-30h]@9
  unsigned __int8 v24; // [sp+11h] [bp-2Fh]@9
  char v25; // [sp+14h] [bp-2Ch]@8
  char v26; // [sp+18h] [bp-28h]@4
  char v27; // [sp+19h] [bp-27h]@4
  char v28; // [sp+1Ch] [bp-24h]@4
  unsigned __int8 v29; // [sp+1Dh] [bp-23h]@4
  unsigned __int8 v30; // [sp+1Fh] [bp-21h]@1

  v6 = a3;
  v7 = a2;
  v8 = this;
  v9 = a4;
  v10 = BlockSource::getData(a2, a3);
  v30 = v10;
  v11 = (BlockState *)Block::getBlockState((int)v8, 0);
  if ( BlockState::getBool(v11, &v30) )
    return Sapling::growTree(v8, v7, v6, v9, a5, a6);
  v13 = (BlockState *)Block::getBlockState((int)v8, 0);
  v14 = v30;
  v15 = 1 << (*(_QWORD *)v13 + 1 - (unsigned int)(*(_QWORD *)v13 >> 32));
  v16 = v14 & ~BlockState::getMask(v13) | v15;
  v30 = v16;
  if ( a6 )
  {
    v18 = *((_BYTE *)v8 + 4);
    v17 = (char *)v8 + 4;
    v19 = *(int (__fastcall **)(ItemUseCallback *, const BlockPos *, char *, char *))(*(_DWORD *)a6 + 16);
    v28 = v18;
    v26 = v18;
    v27 = v16;
    v29 = v10;
    if ( v19(a6, v6, &v28, &v26) )
      return 0;
    LOBYTE(v16) = v30;
  }
  else
  v25 = *v17;
  BlockSource::setBlockAndData((int)v7, v6, &v25, v16, 4, 0);
    v20 = *(void (__fastcall **)(ItemUseCallback *, const BlockPos *, char *, char *))(*(_DWORD *)a6 + 20);
    v23 = *v17;
    v21 = v23;
    v22 = v30;
    v24 = v10;
    v20(a6, v6, &v23, &v21);
  return 1;
}


signed int __fastcall Sapling::growTree(Sapling *this, BlockSource *a2, const BlockPos *a3, Random *a4, Entity *a5, ItemUseCallback *a6)
{
  BlockSource *v6; // r11@1
  Sapling *v7; // r8@1
  Random *v8; // r4@1
  const BlockPos *v9; // r10@1
  Level *v10; // r0@1
  signed int v11; // r6@2
  unsigned __int64 *v12; // r4@3
  unsigned int v13; // r9@3
  int v14; // r4@3
  unsigned __int64 v15; // kr00_8@3
  BlockState *v16; // r0@3
  __int64 v17; // r6@3
  unsigned int v18; // r0@4
  TreeFeature *v19; // r6@5
  void **v20; // r0@5
  int v21; // r6@6
  int v22; // r4@6
  Feature *v23; // r5@7
  int v24; // r0@14
  __int64 v25; // r8@16
  int v26; // r1@16
  int v27; // r2@16
  int v28; // r3@16
  int v29; // r1@16
  int v30; // r2@16
  int v31; // r3@16
  int v32; // r1@16
  int v33; // r2@16
  int v34; // r3@16
  int v35; // r1@16
  int v36; // r2@16
  int v37; // r3@16
  SpruceFeature *v38; // r7@17
  int v39; // r1@20
  int v40; // r2@20
  int v41; // r3@20
  WorldChangeTransaction *v42; // r7@22
  __int64 v43; // r1@24
  int v44; // r3@24
  int (__fastcall *v45)(Feature *, BlockSource *, __int64 *, Random *); // r6@24
  int v46; // r4@24
  int v47; // r1@28
  int v48; // r2@28
  int v49; // r3@28
  __int64 v50; // kr08_8@29
  int v51; // r1@29
  int v52; // r0@29
  int v53; // r2@29
  int v54; // r3@29
  int v55; // r0@29
  int v56; // r2@29
  int v57; // r3@29
  int v59; // [sp+10h] [bp-80h]@21
  Random *v60; // [sp+14h] [bp-7Ch]@3
  unsigned int v61; // [sp+18h] [bp-78h]@3
  char v62; // [sp+1Ch] [bp-74h]@3
  char v63; // [sp+20h] [bp-70h]@30
  char v64; // [sp+21h] [bp-6Fh]@30
  char v65; // [sp+24h] [bp-6Ch]@29
  char v66; // [sp+25h] [bp-6Bh]@29
  char v67; // [sp+28h] [bp-68h]@29
  char v68; // [sp+29h] [bp-67h]@29
  char v69; // [sp+2Ch] [bp-64h]@29
  char v70; // [sp+2Dh] [bp-63h]@29
  char v71; // [sp+30h] [bp-60h]@29
  char v72; // [sp+31h] [bp-5Fh]@29
  __int64 v73; // [sp+34h] [bp-5Ch]@24
  int v74; // [sp+3Ch] [bp-54h]@24
  char v75; // [sp+40h] [bp-50h]@20
  char v76; // [sp+44h] [bp-4Ch]@16
  char v77; // [sp+48h] [bp-48h]@16
  char v78; // [sp+4Ch] [bp-44h]@16
  char v79; // [sp+50h] [bp-40h]@16
  int v80; // [sp+54h] [bp-3Ch]@14
  int v81; // [sp+58h] [bp-38h]@9
  int v82; // [sp+5Ch] [bp-34h]@6
  unsigned __int8 v83; // [sp+63h] [bp-2Dh]@3
  int v84; // [sp+64h] [bp-2Ch]@3
  int v85; // [sp+68h] [bp-28h]@3

  v6 = a2;
  v7 = this;
  v8 = a4;
  v9 = a3;
  v10 = (Level *)BlockSource::getLevel(a2);
  if ( Level::isClientSide(v10) )
  {
    v11 = 1;
  }
  else
    v60 = v8;
    v12 = (unsigned __int64 *)Block::getBlockState((int)v7, 24);
    v13 = BlockSource::getData(v6, v9);
    v15 = *v12;
    v14 = *v12 >> 32;
    v16 = (BlockState *)Block::getBlockState((int)v7, 24);
    v17 = *(_QWORD *)v16;
    BlockState::getMask(v16);
    v62 = *((_BYTE *)v7 + 4);
    v84 = 0;
    v85 = 0;
    v83 = 0;
    v61 = ((v13 >> (1 - v14 + v15)) & (0xFu >> (4 - v14))) << (v17 + 1 - BYTE4(v17));
    switch ( (unsigned __int8)v61 )
    {
      case 0u:
        v18 = Random::_genRandInt32(v60);
        if ( v18 != 10 * (v18 / 0xA) )
        {
          v19 = (TreeFeature *)operator new(0x18u);
          TreeFeature::TreeFeature(v19, a5, 0, 0, 0);
          v20 = &`vtable for'OakFeature;
          goto LABEL_13;
        }
        v19 = (TreeFeature *)operator new(0x38u);
        FancyTreeFeature::FancyTreeFeature(v19, a5);
        goto LABEL_19;
      case 1u:
        Sapling::generateRedwoodTree(
          (Sapling *)&v82,
          (int *)v7,
          (BlockSource *)&v85,
          (Entity *)&v84,
          (const BlockPos *)&v83,
          v9,
          v6,
          a5);
        v21 = v82;
        v22 = v83;
        v82 = 0;
        if ( v83 )
          v23 = (Feature *)v21;
          goto LABEL_16;
        v84 = 0;
        v85 = 0;
        v38 = (SpruceFeature *)operator new(0x18u);
        SpruceFeature::SpruceFeature(v38, a5);
        goto LABEL_38;
      case 2u:
        v19 = (TreeFeature *)operator new(0x18u);
        BirchFeature::BirchFeature(v19, a5, 0);
      case 3u:
        Sapling::generateJungleTree(
          (Sapling *)&v81,
        v21 = v81;
        v81 = 0;
        TreeFeature::TreeFeature(v38, a5, 3, 3, 0);
LABEL_38:
        v23 = v38;
        if ( v21 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 4))(v21);
          v23 = v38;
LABEL_20:
        v39 = *(_DWORD *)v9;
        v40 = *((_DWORD *)v9 + 1);
        v41 = *((_DWORD *)v9 + 2);
        v75 = BlockID::AIR;
        BlockSource::setBlockNoUpdate((int)v6, v39, v40, v41, &v75);
        v22 = 0;
        v25 = 0LL;
        goto LABEL_21;
      case 4u:
        SavannaTreeFeature::SavannaTreeFeature(v19, a5);
      case 5u:
        Sapling::generateRoofTree(
          (Sapling *)&v80,
        v24 = v80;
        v80 = 0;
          v23 = (Feature *)v24;
LABEL_16:
          v25 = *(_QWORD *)&v84;
          v26 = *(_DWORD *)v9;
          v27 = *((_DWORD *)v9 + 1);
          v28 = *((_DWORD *)v9 + 2);
          v79 = BlockID::AIR;
          BlockSource::setBlockNoUpdate((int)v6, v26 + v85, v27, v28 + v84, &v79);
          v29 = *(_DWORD *)v9;
          v30 = *((_DWORD *)v9 + 1);
          v31 = *((_DWORD *)v9 + 2);
          v78 = BlockID::AIR;
          BlockSource::setBlockNoUpdate((int)v6, v29 + HIDWORD(v25) + 1, v30, v31 + v25, &v78);
          v32 = *(_DWORD *)v9;
          v33 = *((_DWORD *)v9 + 1);
          v34 = *((_DWORD *)v9 + 2);
          v77 = BlockID::AIR;
          BlockSource::setBlockNoUpdate((int)v6, v32 + HIDWORD(v25), v33, v34 + v25 + 1, &v77);
          v35 = *(_DWORD *)v9;
          v36 = *((_DWORD *)v9 + 1);
          v37 = *((_DWORD *)v9 + 2);
          v76 = BlockID::AIR;
          BlockSource::setBlockNoUpdate((int)v6, v35 + HIDWORD(v25) + 1, v36, v37 + v25 + 1, &v76);
LABEL_21:
          v59 = v22;
          if ( a6 )
          {
            v42 = (WorldChangeTransaction *)operator new(0x14u);
            WorldChangeTransaction::WorldChangeTransaction((int)v42, (int)v6, 1, (int)a5, (int)a6);
            Feature::setTransaction(v23, v42);
          }
          else
            v42 = 0;
          HIDWORD(v43) = *((_DWORD *)v9 + 1);
          v44 = *((_DWORD *)v9 + 2);
          LODWORD(v43) = *(_DWORD *)v9 + HIDWORD(v25);
          v45 = *(int (__fastcall **)(Feature *, BlockSource *, __int64 *, Random *))(*(_DWORD *)v23 + 8);
          v73 = v43;
          v74 = v44 + v25;
          v46 = v45(v23, v6, &v73, v60);
          if ( v42 )
            v11 = WorldChangeTransaction::apply(v42);
            v11 = 1;
          if ( !(v46 & v11) )
            v47 = *(_DWORD *)v9;
            v48 = *((_DWORD *)v9 + 1);
            v49 = *((_DWORD *)v9 + 2);
            if ( v59 )
            {
              v71 = v62;
              v72 = v61;
              BlockSource::setBlockAndDataNoUpdate((int)v6, v47 + HIDWORD(v25), v48, v49 + v25, (int)&v71);
              v50 = *(_QWORD *)v9;
              v51 = *((_DWORD *)v9 + 2);
              v69 = v62;
              v70 = v61;
              BlockSource::setBlockAndDataNoUpdate((int)v6, v50 + HIDWORD(v25) + 1, SHIDWORD(v50), v25 + v51, (int)&v69);
              v52 = *(_DWORD *)v9;
              v53 = *((_DWORD *)v9 + 1);
              v54 = *((_DWORD *)v9 + 2);
              v67 = v62;
              v68 = v61;
              BlockSource::setBlockAndDataNoUpdate((int)v6, HIDWORD(v25) + v52, v53, v54 + v25 + 1, (int)&v67);
              v55 = *(_DWORD *)v9;
              v56 = *((_DWORD *)v9 + 1);
              v57 = *((_DWORD *)v9 + 2);
              v65 = v62;
              v66 = v61;
              BlockSource::setBlockAndDataNoUpdate((int)v6, v55 + HIDWORD(v25) + 1, v56, v57 + v25 + 1, (int)&v65);
            }
            else
              v63 = v62;
              v64 = v61;
              BlockSource::setBlockAndDataNoUpdate((int)v6, v47, v48, v49, (int)&v63);
            WorldChangeTransaction::~WorldChangeTransaction(v42);
            operator delete((void *)v42);
          v24 = (int)v23;
        else
          v11 = 1;
        if ( v24 )
          (*(void (**)(void))(*(_DWORD *)v24 + 4))();
        break;
      default:
        TreeFeature::TreeFeature(v19, a5, 0, 0, 0);
        v20 = &`vtable for'OakFeature;
LABEL_13:
        *(_DWORD *)v19 = (char *)*v20 + 8;
LABEL_19:
        v23 = v19;
        goto LABEL_20;
    }
  return v11;
}


Sapling *__fastcall Sapling::generateRedwoodTree(Sapling *this, int *a2, BlockSource *a3, Entity *a4, const BlockPos *a5, BlockSource *a6, Entity *a7, Entity *a8)
{
  Entity *v8; // r10@1
  BlockSource *v9; // r11@1
  int *v10; // r9@1
  int v11; // r0@2
  int v12; // r1@2
  int v13; // r3@3
  int v14; // r7@3
  int v15; // r6@3
  unsigned __int64 *v16; // r9@3
  unsigned int v17; // r8@3
  int v18; // r4@3
  int v19; // r7@3
  unsigned int v20; // r0@3
  bool v21; // zf@3
  __int64 v22; // r0@7
  int v23; // r2@7
  int v24; // r7@7
  unsigned __int64 *v25; // r4@7
  unsigned int v26; // r8@7
  int v27; // r4@7
  unsigned __int64 v28; // kr08_8@7
  unsigned int v29; // r0@7
  bool v30; // zf@7
  __int64 v31; // r0@11
  int v32; // r2@11
  int v33; // r7@11
  unsigned __int64 *v34; // r4@11
  unsigned int v35; // r8@11
  int v36; // r4@11
  unsigned __int64 v37; // kr10_8@11
  unsigned int v38; // r0@11
  bool v39; // zf@11
  __int64 v40; // r0@15
  int v41; // r2@15
  int v42; // r7@15
  unsigned __int64 *v43; // r4@15
  unsigned int v44; // r8@15
  int v45; // r4@15
  unsigned __int64 v46; // kr18_8@15
  Sapling *result; // r0@19
  MegaPineTreeFeature *v48; // r4@20
  Sapling *v49; // [sp+Ch] [bp-5Ch]@1
  __int64 v50; // [sp+10h] [bp-58h]@15
  int v51; // [sp+18h] [bp-50h]@15
  __int64 v52; // [sp+1Ch] [bp-4Ch]@11
  int v53; // [sp+24h] [bp-44h]@11
  __int64 v54; // [sp+28h] [bp-40h]@7
  int v55; // [sp+30h] [bp-38h]@7
  int v56; // [sp+34h] [bp-34h]@3
  int v57; // [sp+38h] [bp-30h]@3
  int v58; // [sp+3Ch] [bp-2Ch]@3
  unsigned __int8 v59; // [sp+40h] [bp-28h]@3

  v49 = this;
  v8 = a4;
  v9 = a3;
  v10 = a2;
  *(_DWORD *)a3 = 0;
  while ( 2 )
  {
    *(_DWORD *)v8 = 0;
    v11 = 0;
    v12 = *(_DWORD *)v9;
    do
    {
      v13 = *((_DWORD *)a6 + 1);
      v14 = *((_DWORD *)a6 + 2);
      v56 = v12 + *(_DWORD *)a6;
      v57 = v13;
      v58 = v11 + v14;
      v15 = (int)v10;
      v16 = (unsigned __int64 *)Block::getBlockState((int)v10, 24);
      v17 = BlockSource::getData(a7, (const BlockPos *)&v56);
      v19 = *v16 >> 32;
      v18 = *v16;
      v10 = (int *)v15;
      BlockSource::getBlockID((BlockSource *)&v59, (int)a7, v56, v57, v58);
      v20 = (v17 >> (1 - v19 + v18)) & (0xFu >> (4 - v19));
      v21 = v20 == 1;
      if ( v20 == 1 )
        v21 = v59 == *(_BYTE *)(v15 + 4);
      if ( v21 )
      {
        HIDWORD(v22) = *((_DWORD *)a6 + 1);
        v23 = *((_DWORD *)a6 + 2);
        v24 = *(_DWORD *)v8;
        LODWORD(v22) = *(_DWORD *)a6 + *(_DWORD *)v9 + 1;
        v54 = v22;
        v55 = v23 + v24;
        v25 = (unsigned __int64 *)Block::getBlockState(v15, 24);
        v26 = BlockSource::getData(a7, (const BlockPos *)&v54);
        v28 = *v25;
        v27 = *v25 >> 32;
        BlockSource::getBlockID((BlockSource *)&v59, (int)a7, v54, SHIDWORD(v54), v55);
        v29 = (v26 >> (1 - v27 + v28)) & (0xFu >> (4 - v27));
        v30 = v29 == 1;
        if ( v29 == 1 )
          v30 = v59 == *(_BYTE *)(v15 + 4);
        if ( v30 )
        {
          HIDWORD(v31) = *((_DWORD *)a6 + 1);
          v32 = *((_DWORD *)a6 + 2);
          v33 = *(_DWORD *)v8;
          LODWORD(v31) = *(_DWORD *)a6 + *(_DWORD *)v9;
          v52 = v31;
          v53 = v33 + v32 + 1;
          v34 = (unsigned __int64 *)Block::getBlockState(v15, 24);
          v35 = BlockSource::getData(a7, (const BlockPos *)&v52);
          v37 = *v34;
          v36 = *v34 >> 32;
          BlockSource::getBlockID((BlockSource *)&v59, (int)a7, v52, SHIDWORD(v52), v53);
          v38 = (v35 >> (1 - v36 + v37)) & (0xFu >> (4 - v36));
          v39 = v38 == 1;
          if ( v38 == 1 )
            v39 = v59 == *(_BYTE *)(v15 + 4);
          if ( v39 )
          {
            HIDWORD(v40) = *((_DWORD *)a6 + 1);
            v41 = *((_DWORD *)a6 + 2);
            v42 = *(_DWORD *)v8;
            LODWORD(v40) = *(_DWORD *)a6 + *(_DWORD *)v9 + 1;
            v50 = v40;
            v51 = v42 + v41 + 1;
            v43 = (unsigned __int64 *)Block::getBlockState(v15, 24);
            v44 = BlockSource::getData(a7, (const BlockPos *)&v50);
            v46 = *v43;
            v45 = *v43 >> 32;
            BlockSource::getBlockID((BlockSource *)&v59, (int)a7, v50, SHIDWORD(v50), v51);
            if ( ((v44 >> (1 - v45 + v46)) & (0xFu >> (4 - v45))) == 1 && v59 == *(_BYTE *)(v15 + 4) )
            {
              *(_BYTE *)a5 = 1;
              v48 = (MegaPineTreeFeature *)operator new(0x2Cu);
              MegaPineTreeFeature::MegaPineTreeFeature(v48, a8, 1);
              result = v49;
              *(_DWORD *)v49 = v48;
              return result;
            }
          }
        }
      }
      v11 = *(_DWORD *)v8 - 1;
      *(_DWORD *)v8 = v11;
      v12 = *(_DWORD *)v9;
    }
    while ( v11 >= -1 );
    *(_DWORD *)v9 = v12 - 1;
    if ( v12 - 1 >= -1 )
      continue;
    break;
  }
  result = 0;
  *(_DWORD *)v49 = 0;
  return result;
}


void __fastcall Sapling::~Sapling(Sapling *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall Sapling::buildDescriptionId(Sapling *this, int a2, unsigned int a3)
{
  Sapling::buildDescriptionId(this, a2, a3);
}


Sapling *__fastcall Sapling::generateRoofTree(Sapling *this, int *a2, BlockSource *a3, Entity *a4, const BlockPos *a5, BlockSource *a6, Entity *a7, Entity *a8)
{
  Entity *v8; // r10@1
  BlockSource *v9; // r11@1
  int *v10; // r9@1
  int v11; // r0@2
  int v12; // r1@2
  int v13; // r3@3
  int v14; // r7@3
  int v15; // r6@3
  unsigned __int64 *v16; // r9@3
  unsigned int v17; // r8@3
  int v18; // r4@3
  int v19; // r7@3
  unsigned int v20; // r0@3
  bool v21; // zf@3
  __int64 v22; // r0@7
  int v23; // r2@7
  int v24; // r7@7
  unsigned __int64 *v25; // r4@7
  unsigned int v26; // r8@7
  int v27; // r4@7
  unsigned __int64 v28; // kr08_8@7
  unsigned int v29; // r0@7
  bool v30; // zf@7
  __int64 v31; // r0@11
  int v32; // r2@11
  int v33; // r7@11
  unsigned __int64 *v34; // r4@11
  unsigned int v35; // r8@11
  int v36; // r4@11
  unsigned __int64 v37; // kr10_8@11
  unsigned int v38; // r0@11
  bool v39; // zf@11
  __int64 v40; // r0@15
  int v41; // r2@15
  int v42; // r7@15
  unsigned __int64 *v43; // r4@15
  unsigned int v44; // r8@15
  int v45; // r4@15
  unsigned __int64 v46; // kr18_8@15
  Sapling *result; // r0@19
  RoofTreeFeature *v48; // r4@20
  Sapling *v49; // [sp+Ch] [bp-5Ch]@1
  __int64 v50; // [sp+10h] [bp-58h]@15
  int v51; // [sp+18h] [bp-50h]@15
  __int64 v52; // [sp+1Ch] [bp-4Ch]@11
  int v53; // [sp+24h] [bp-44h]@11
  __int64 v54; // [sp+28h] [bp-40h]@7
  int v55; // [sp+30h] [bp-38h]@7
  int v56; // [sp+34h] [bp-34h]@3
  int v57; // [sp+38h] [bp-30h]@3
  int v58; // [sp+3Ch] [bp-2Ch]@3
  unsigned __int8 v59; // [sp+40h] [bp-28h]@3

  v49 = this;
  v8 = a4;
  v9 = a3;
  v10 = a2;
  *(_DWORD *)a3 = 0;
  while ( 2 )
  {
    *(_DWORD *)v8 = 0;
    v11 = 0;
    v12 = *(_DWORD *)v9;
    do
    {
      v13 = *((_DWORD *)a6 + 1);
      v14 = *((_DWORD *)a6 + 2);
      v56 = v12 + *(_DWORD *)a6;
      v57 = v13;
      v58 = v11 + v14;
      v15 = (int)v10;
      v16 = (unsigned __int64 *)Block::getBlockState((int)v10, 24);
      v17 = BlockSource::getData(a7, (const BlockPos *)&v56);
      v19 = *v16 >> 32;
      v18 = *v16;
      v10 = (int *)v15;
      BlockSource::getBlockID((BlockSource *)&v59, (int)a7, v56, v57, v58);
      v20 = (v17 >> (1 - v19 + v18)) & (0xFu >> (4 - v19));
      v21 = v20 == 5;
      if ( v20 == 5 )
        v21 = v59 == *(_BYTE *)(v15 + 4);
      if ( v21 )
      {
        HIDWORD(v22) = *((_DWORD *)a6 + 1);
        v23 = *((_DWORD *)a6 + 2);
        v24 = *(_DWORD *)v8;
        LODWORD(v22) = *(_DWORD *)a6 + *(_DWORD *)v9 + 1;
        v54 = v22;
        v55 = v23 + v24;
        v25 = (unsigned __int64 *)Block::getBlockState(v15, 24);
        v26 = BlockSource::getData(a7, (const BlockPos *)&v54);
        v28 = *v25;
        v27 = *v25 >> 32;
        BlockSource::getBlockID((BlockSource *)&v59, (int)a7, v54, SHIDWORD(v54), v55);
        v29 = (v26 >> (1 - v27 + v28)) & (0xFu >> (4 - v27));
        v30 = v29 == 5;
        if ( v29 == 5 )
          v30 = v59 == *(_BYTE *)(v15 + 4);
        if ( v30 )
        {
          HIDWORD(v31) = *((_DWORD *)a6 + 1);
          v32 = *((_DWORD *)a6 + 2);
          v33 = *(_DWORD *)v8;
          LODWORD(v31) = *(_DWORD *)a6 + *(_DWORD *)v9;
          v52 = v31;
          v53 = v33 + v32 + 1;
          v34 = (unsigned __int64 *)Block::getBlockState(v15, 24);
          v35 = BlockSource::getData(a7, (const BlockPos *)&v52);
          v37 = *v34;
          v36 = *v34 >> 32;
          BlockSource::getBlockID((BlockSource *)&v59, (int)a7, v52, SHIDWORD(v52), v53);
          v38 = (v35 >> (1 - v36 + v37)) & (0xFu >> (4 - v36));
          v39 = v38 == 5;
          if ( v38 == 5 )
            v39 = v59 == *(_BYTE *)(v15 + 4);
          if ( v39 )
          {
            HIDWORD(v40) = *((_DWORD *)a6 + 1);
            v41 = *((_DWORD *)a6 + 2);
            v42 = *(_DWORD *)v8;
            LODWORD(v40) = *(_DWORD *)a6 + *(_DWORD *)v9 + 1;
            v50 = v40;
            v51 = v42 + v41 + 1;
            v43 = (unsigned __int64 *)Block::getBlockState(v15, 24);
            v44 = BlockSource::getData(a7, (const BlockPos *)&v50);
            v46 = *v43;
            v45 = *v43 >> 32;
            BlockSource::getBlockID((BlockSource *)&v59, (int)a7, v50, SHIDWORD(v50), v51);
            if ( ((v44 >> (1 - v45 + v46)) & (0xFu >> (4 - v45))) == 5 && v59 == *(_BYTE *)(v15 + 4) )
            {
              *(_BYTE *)a5 = 1;
              v48 = (RoofTreeFeature *)operator new(0x18u);
              RoofTreeFeature::RoofTreeFeature(v48, a8);
              result = v49;
              *(_DWORD *)v49 = v48;
              return result;
            }
          }
        }
      }
      v11 = *(_DWORD *)v8 - 1;
      *(_DWORD *)v8 = v11;
      v12 = *(_DWORD *)v9;
    }
    while ( v11 >= -1 );
    *(_DWORD *)v9 = v12 - 1;
    if ( v12 - 1 >= -1 )
      continue;
    break;
  }
  result = 0;
  *(_DWORD *)v49 = 0;
  return result;
}


int __fastcall Sapling::Sapling(int a1, const void **a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  int v8; // [sp+0h] [bp-28h]@1
  signed int v9; // [sp+4h] [bp-24h]@1
  signed int v10; // [sp+8h] [bp-20h]@1
  int v11; // [sp+Ch] [bp-1Ch]@1
  int v12; // [sp+10h] [bp-18h]@1
  signed int v13; // [sp+14h] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(8);
  BushBlock::BushBlock(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_27132E4;
  v11 = 1036831948;
  v12 = 0;
  v13 = 1036831948;
  v8 = 1063675494;
  v9 = 1061997773;
  v10 = 1063675494;
  Block::setVisualShape((Block *)v3, (const Vec3 *)&v11, (const Vec3 *)&v8);
  *(_DWORD *)(v3 + 20) = 5;
  return v3;
}
