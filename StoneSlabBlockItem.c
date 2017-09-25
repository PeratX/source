

signed int __fastcall StoneSlabBlockItem::_calculatePlacePos(StoneSlabBlockItem *this, ItemInstance *a2, Entity *a3, signed __int8 *a4, BlockPos *a5)
{
  return 1;
}


int __fastcall StoneSlabBlockItem::_useOn(int a1, int a2, Entity *this, int a4, int a5, float a6, float a7, float a8, int a9)
{
  int v9; // r10@1
  int v10; // r4@1
  int v11; // r7@2
  BlockSource *v12; // r5@2
  __int64 v13; // kr00_8@2
  unsigned int v14; // r5@2
  int v15; // r1@2
  _BOOL4 v16; // r8@2
  unsigned int v17; // r4@2
  signed int v18; // r5@2
  ItemInstance *v19; // r11@5
  char v20; // r7@5
  int v21; // r6@6
  signed int v22; // r0@6
  signed int v23; // r1@6
  int result; // r0@9
  signed int v26; // r0@11
  _DWORD *v27; // r1@20
  int v28; // r8@22
  const AABB *v29; // r0@22
  signed int v30; // r0@22
  signed int v31; // r5@22
  int (__fastcall *v32)(int, int, unsigned __int8 *, char *); // r6@24
  void (__fastcall *v37)(int, int, unsigned __int8 *, char *); // r7@30
  Entity *v38; // [sp+4h] [bp-BCh]@18
  float v39; // [sp+8h] [bp-B8h]@0
  float v40; // [sp+Ch] [bp-B4h]@0
  char v41; // [sp+18h] [bp-A8h]@6
  StoneSlabBlockItem *v42; // [sp+1Ch] [bp-A4h]@2
  Level *v43; // [sp+20h] [bp-A0h]@2
  Entity *v44; // [sp+24h] [bp-9Ch]@2
  BlockSource *v45; // [sp+28h] [bp-98h]@2
  int v46; // [sp+2Ch] [bp-94h]@2
  int v47; // [sp+30h] [bp-90h]@32
  int v48; // [sp+34h] [bp-8Ch]@32
  int v49; // [sp+38h] [bp-88h]@32
  char v50; // [sp+3Ch] [bp-84h]@18
  char v51; // [sp+48h] [bp-78h]@30
  char v52; // [sp+49h] [bp-77h]@30
  float v53; // [sp+4Ch] [bp-74h]@28
  char v54; // [sp+58h] [bp-68h]@27
  char v55; // [sp+5Ch] [bp-64h]@24
  char v56; // [sp+5Dh] [bp-63h]@24
  char v57; // [sp+60h] [bp-60h]@20
  unsigned __int8 v58; // [sp+7Ch] [bp-44h]@2
  SlabBlock *v59; // [sp+7Dh] [bp-43h]@1

  v9 = a5;
  v10 = a4;
  BYTE2(v59) = a5;
  if ( !*(_BYTE *)(a2 + 14) )
    return 0;
  v42 = (StoneSlabBlockItem *)a1;
  v11 = a2;
  v44 = this;
  v12 = (BlockSource *)Entity::getRegion(this);
  v45 = v12;
  v43 = (Level *)BlockSource::getLevel(v12);
  v46 = v10;
  BlockSource::getBlockAndData((BlockSource *)&v58, v12, v10);
  v13 = *(_QWORD *)Block::getBlockState(Block::mStoneSlab, 24);
  v14 = (unsigned __int8)v59;
  v16 = SlabBlock::isBottomSlab((SlabBlock *)(unsigned __int8)v59, v15);
  v17 = (v14 >> (1 - BYTE4(v13) + v13)) & (0xFu >> (4 - BYTE4(v13)));
  v18 = 0;
  if ( v58 != *(_BYTE *)(Block::mStoneSlab + 4) && v58 != *(_BYTE *)(Block::mStoneSlab2 + 4) )
    v18 = 1;
  v19 = (ItemInstance *)v11;
  v20 = v17;
  if ( (unsigned __int8)v17 == ItemInstance::getAuxValue(v19) )
  {
    v41 = v17;
    v21 = v58;
    v22 = ItemInstance::getId(v19);
    v9 = BYTE2(v59);
    v23 = 0;
    if ( v21 != v22 )
      v23 = 1;
  }
  else
    v23 = 1;
  _R4 = v46;
  v26 = v9;
  if ( v9 != 1 || !v16 == 1 )
    if ( v9 )
      v26 = 1;
    if ( !(v26 | v16 | v18 | v23) )
      goto LABEL_20;
LABEL_18:
    BlockPos::neighbor((BlockPos *)&v50, v46, v9);
    if ( StoneSlabBlockItem::tryToConvertTargetBlock(v42, v45, v43, (const BlockPos *)&v50, v19, v44) )
    {
      result = 1;
    }
    else
      __asm
      {
        VLDR            S16, [SP,#0xC0+arg_C]
        VLDR            S18, [SP,#0xC0+arg_8]
        VLDR            S20, [SP,#0xC0+arg_4]
      }
      BlockItem::_calculatePlacePos(v42, v19, v44, (signed __int8 *)&v59 + 2, (BlockPos *)v46);
      v47 = *(_DWORD *)v46;
      v48 = *(_DWORD *)(v46 + 4);
      v49 = *(_DWORD *)(v46 + 8);
        VSTR            S18, [SP,#0xC0+var_B8]
        VSTR            S16, [SP,#0xC0+var_B4]
        VSTR            S20, [SP,#0xC0+var_BC]
      result = BlockItem::_useOn(
                 (int)v42,
                 *(float *)&v19,
                 *(float *)&v44,
                 COERCE_FLOAT(&v47),
                 SBYTE2(v59),
                 *(float *)&v38,
                 v39,
                 v40,
                 a9);
    return result;
  if ( v18 | v23 )
    goto LABEL_18;
LABEL_20:
  AABB::AABB((AABB *)&v57);
  v27 = &Block::mDoubleStoneSlab2;
  if ( v58 == *(_BYTE *)(Block::mStoneSlab + 4) )
    v27 = &Block::mDoubleStoneSlab;
  v28 = *(_BYTE *)(*v27 + 4);
  v29 = (const AABB *)(*(int (__cdecl **)(_DWORD, BlockSource *, int))(*(_DWORD *)Block::mBlocks[v28] + 32))(
                        Block::mBlocks[v28],
                        v45,
                        v46);
  v30 = BlockSource::isUnobstructedByEntities(v45, v29, 0);
  v31 = v30;
  if ( a9
    && v30 == 1
    && (v32 = *(int (__fastcall **)(int, int, unsigned __int8 *, char *))(*(_DWORD *)a9 + 8),
        v55 = v28,
        v56 = v41,
        v32(a9, v46, &v58, &v55)) )
    result = 0;
    if ( v31 == 1 )
      v54 = v28;
      if ( BlockSource::setBlockAndData((int)v45, (BlockPos *)v46, &v54, v20, 3, (int)v44) == 1 )
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
          VSTR            S0, [SP,#0xC0+var_74]
          VSTR            S2, [SP,#0xC0+var_70]
          VSTR            S4, [SP,#0xC0+var_6C]
        }
        Level::broadcastSoundEvent(v43, (int)v45, 0, (int)&v53, v28, 1, 0, 0);
        (*(void (__fastcall **)(Entity *, ItemInstance *))(*(_DWORD *)v44 + 612))(v44, v19);
    if ( a9 )
      v37 = *(void (__fastcall **)(int, int, unsigned __int8 *, char *))(*(_DWORD *)a9 + 12);
      v51 = v28;
      v52 = v41;
      v37(a9, v46, &v58, &v51);
    result = 1;
  return result;
}


void __fastcall StoneSlabBlockItem::~StoneSlabBlockItem(StoneSlabBlockItem *this)
{
  Item *v1; // r0@1

  v1 = Item::~Item(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall StoneSlabBlockItem::getLevelDataForAuxValue(StoneSlabBlockItem *this, int a2)
{
  return a2;
}


void __fastcall StoneSlabBlockItem::~StoneSlabBlockItem(StoneSlabBlockItem *this)
{
  StoneSlabBlockItem::~StoneSlabBlockItem(this);
}


signed int __fastcall StoneSlabBlockItem::tryToConvertTargetBlock(StoneSlabBlockItem *this, BlockSource *a2, Level *a3, const BlockPos *a4, ItemInstance *a5, Entity *a6)
{
  Level *v7; // r10@1
  BlockSource *v8; // r9@1
  unsigned __int64 *v9; // r0@3
  unsigned int v10; // r6@3
  int v11; // r4@4
  signed int v12; // r5@4
  _DWORD *v13; // r1@5
  int v14; // r11@7
  const AABB *v15; // r0@7
  float v21; // [sp+14h] [bp-54h]@9
  char v22; // [sp+20h] [bp-48h]@8
  char v23; // [sp+24h] [bp-44h]@5
  unsigned __int8 v24; // [sp+40h] [bp-28h]@1
  unsigned __int8 v25; // [sp+41h] [bp-27h]@3

  _R7 = a4;
  v7 = a3;
  v8 = a2;
  BlockSource::getBlockAndData((BlockSource *)&v24, a2, (int)a4);
  if ( v24 != *(_BYTE *)(Block::mStoneSlab + 4) && v24 != *(_BYTE *)(Block::mStoneSlab2 + 4) )
  {
    v12 = 0;
  }
  else
    v9 = (unsigned __int64 *)Block::getBlockState(Block::mStoneSlab, 24);
    v10 = (0xFu >> (4 - (*v9 >> 32))) & (unsigned __int8)(v25 >> (*v9 + 1 - (*v9 >> 32)));
    if ( v10 == ItemInstance::getAuxValue(a5) )
    {
      v11 = v24;
      v12 = 0;
      if ( v11 == ItemInstance::getId(a5) )
      {
        AABB::AABB((AABB *)&v23);
        v13 = &Block::mDoubleStoneSlab2;
        if ( v24 == *(_BYTE *)(Block::mStoneSlab + 4) )
          v13 = &Block::mDoubleStoneSlab;
        v14 = *(_BYTE *)(*v13 + 4);
        v15 = (const AABB *)(*(int (__cdecl **)(_DWORD, BlockSource *, BlockPos *))(*(_DWORD *)Block::mBlocks[v14] + 32))(
                              Block::mBlocks[v14],
                              v8,
                              _R7);
        if ( BlockSource::isUnobstructedByEntities(v8, v15, 0) == 1 )
        {
          v22 = v14;
          if ( BlockSource::setBlockAndData((int)v8, _R7, &v22, v10, 3, (int)a6) == 1 )
          {
            __asm
            {
              VLDR            S0, [R7]
              VMOV.F32        S6, #0.5
              VLDR            S2, [R7,#4]
              VLDR            S4, [R7,#8]
              VCVT.F32.S32    S0, S0
              VCVT.F32.S32    S2, S2
              VCVT.F32.S32    S4, S4
              VADD.F32        S0, S0, S6
              VADD.F32        S2, S2, S6
              VADD.F32        S4, S4, S6
              VSTR            S0, [SP,#0x68+var_54]
              VSTR            S2, [SP,#0x68+var_50]
              VSTR            S4, [SP,#0x68+var_4C]
            }
            Level::broadcastSoundEvent(v7, (int)v8, 0, (int)&v21, v14, 1, 0, 0);
            (*(void (__fastcall **)(Entity *, ItemInstance *))(*(_DWORD *)a6 + 612))(a6, a5);
          }
        }
        v12 = 1;
      }
    }
    else
  return v12;
}
