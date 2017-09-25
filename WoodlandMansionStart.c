

RakNet *__fastcall WoodlandMansionStart::_create(WoodlandMansionStart *this, Dimension *a2, OverworldGenerator *a3, Random *a4, int a5, int a6)
{
  WoodlandMansionStart *v6; // r11@1
  Random *v7; // ST10_4@1
  OverworldGenerator *v8; // r4@1
  Dimension *v9; // r5@1
  __int16 v10; // r0@1
  unsigned int v11; // r0@1
  char v12; // r0@2
  unsigned int v13; // r9@2
  unsigned int v14; // r8@2
  Dimension v15; // r0@4
  __int16 v16; // r10@4
  int v17; // r0@4
  int v18; // r7@4
  int v19; // r0@4
  int v20; // r6@4
  int v21; // r0@4
  int v22; // r4@4
  int v23; // r0@4
  int v24; // r0@4
  __int64 v25; // r0@12
  Level *v26; // r0@12
  Random *v27; // r0@12
  int v28; // r2@12
  Level *v29; // r0@12
  int v30; // r0@12
  RakNet *result; // r0@13
  char v32; // [sp+18h] [bp-8C08h]@4
  char v33; // [sp+19h] [bp-8C07h]@4
  __int16 v34; // [sp+1Ah] [bp-8C06h]@4
  char v35; // [sp+1Ch] [bp-8C04h]@4
  char v36; // [sp+1Dh] [bp-8C03h]@4
  __int16 v37; // [sp+1Eh] [bp-8C02h]@4
  char v38; // [sp+20h] [bp-8C00h]@4
  char v39; // [sp+21h] [bp-8BFFh]@4
  __int16 v40; // [sp+22h] [bp-8BFEh]@4
  char v41; // [sp+24h] [bp-8BFCh]@4
  char v42; // [sp+25h] [bp-8BFBh]@4
  __int16 v43; // [sp+26h] [bp-8BFAh]@4
  char *v44; // [sp+28h] [bp-8BF8h]@1
  int *v45; // [sp+2Ch] [bp-8BF4h]@1
  int v46; // [sp+30h] [bp-8BF0h]@1
  int v47; // [sp+34h] [bp-8BECh]@1
  int v48; // [sp+38h] [bp-8BE8h]@1
  int v49; // [sp+3Ch] [bp-8BE4h]@1
  signed int v50; // [sp+40h] [bp-8BE0h]@1
  char v51; // [sp+48h] [bp-8BD8h]@1
  int v52; // [sp+8048h] [bp-BD8h]@1
  int v53; // [sp+804Ch] [bp-BD4h]@1
  int v54; // [sp+8050h] [bp-BD0h]@1
  RakNet *v55; // [sp+8BF4h] [bp-2Ch]@1

  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v55 = _stack_chk_guard;
  v52 = a5;
  v53 = a6;
  j_LevelChunk::LevelChunk(&v54, a2, (__int64 *)&v52, 0);
  v46 = 0;
  v47 = 0;
  v48 = 16;
  v49 = 128;
  v50 = 16;
  v44 = &v51;
  v45 = &v52;
  (*(void (__fastcall **)(OverworldGenerator *, char **, int, int))(*(_DWORD *)v8 + 76))(v8, &v44, a5, a6);
  j_LevelChunk::setAllBlockIDs((int)&v54, (int)&v51, (int)&v52, (signed __int16)v49);
  v10 = j_Random::_genRandInt32(v7) & 3;
  *((_WORD *)v6 + 25) = v10;
  v11 = (unsigned __int16)(v10 - 1);
  if ( v11 >= 3 )
  {
    LOBYTE(v14) = 12;
    LOBYTE(v13) = 12;
  }
  else
    v12 = 8 * v11;
    v13 = 0xC0202u >> v12;
    v14 = 0x2020Cu >> v12;
  v15 = v9[60];
  v41 = 7;
  v42 = 7;
  v16 = v15 - 1;
  v43 = v15 - 1;
  v17 = (*(int (__fastcall **)(Dimension *))(*(_DWORD *)v9 + 192))(v9);
  v18 = j_LevelChunk::getAboveTopSolidBlock((LevelChunk *)&v54, (const ChunkBlockPos *)&v41, v17, 0, 0);
  v38 = 7;
  v39 = v14;
  v40 = v16;
  v19 = (*(int (__fastcall **)(Dimension *))(*(_DWORD *)v9 + 192))(v9);
  v20 = j_LevelChunk::getAboveTopSolidBlock((LevelChunk *)&v54, (const ChunkBlockPos *)&v38, v19, 0, 0);
  v35 = v13;
  v36 = 7;
  v37 = v16;
  v21 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v9 + 192))(v9);
  v22 = j_LevelChunk::getAboveTopSolidBlock((LevelChunk *)&v54, (const ChunkBlockPos *)&v35, v21, 0, 0);
  v32 = v13;
  v33 = v14;
  v34 = v16;
  v23 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v9 + 192))(v9);
  v24 = j_LevelChunk::getAboveTopSolidBlock((LevelChunk *)&v54, (const ChunkBlockPos *)&v32, v23, 0, 0);
  if ( v18 < v20 )
    v20 = v18;
  if ( v22 < v24 )
    v24 = v22;
  if ( v20 < v24 )
    v24 = v20;
  if ( v24 > 59 )
    LODWORD(v25) = v24 + 1;
    *((_DWORD *)v6 + 13) = 16 * a5 | 8;
    HIDWORD(v25) = 16 * a6 | 8;
    *((_QWORD *)v6 + 7) = v25;
    v26 = (Level *)j_Dimension::getLevel(v9);
    v27 = (Random *)j_Level::getStructureManager(v26);
    v28 = *((_WORD *)v6 + 25);
    j_WoodlandMansionPieces::generateMansion(v27);
    j_StructureStart::calculateBoundingBox(v6);
    *((_BYTE *)v6 + 48) = 1;
    v29 = (Level *)j_Dimension::getLevel(v9);
    v30 = j_Level::getEventing(v29);
    j_MinecraftEventing::fireEventStructureGenerated(
      v30,
      8,
      *(_QWORD *)((char *)v6 + 52),
      *(_QWORD *)((char *)v6 + 52) >> 32,
      *((_DWORD *)v6 + 15),
      (unsigned __int64 *)((char *)v6 + 36));
    *((_BYTE *)v6 + 48) = 0;
  j_LevelChunk::~LevelChunk((LevelChunk *)&v54);
  result = (RakNet *)(_stack_chk_guard - v55);
  if ( _stack_chk_guard != v55 )
    j___stack_chk_fail_0((int)result);
  return result;
}


int __fastcall WoodlandMansionStart::_fillCobblestone(WoodlandMansionStart *this, const BlockPos *a2, BlockSource *a3, const BoundingBox *a4)
{
  const BlockPos *v4; // r6@1
  const BoundingBox *v5; // r4@1
  int result; // r0@1
  BlockSource *v7; // r5@1
  int v8; // r7@1
  int v9; // r1@2
  Block *v10; // r0@3
  Material *v11; // r0@3
  char v12; // [sp+0h] [bp-30h]@10
  int v13; // [sp+4h] [bp-2Ch]@2
  int v14; // [sp+8h] [bp-28h]@2
  int v15; // [sp+Ch] [bp-24h]@2

  v4 = a2;
  v5 = a4;
  result = *((_DWORD *)a2 + 1);
  v7 = a3;
  v8 = result - 1;
  if ( result - 1 >= 2 )
  {
    do
    {
      v9 = *((_DWORD *)v4 + 2);
      v13 = *(_DWORD *)v4;
      v14 = v8;
      v15 = v9;
      if ( !j_BlockSource::isEmptyBlock(v7, (const BlockPos *)&v13) )
      {
        v10 = (Block *)j_BlockSource::getBlock(v7, (const BlockPos *)&v13);
        v11 = (Material *)j_Block::getMaterial(v10);
        result = j_Material::isLiquid(v11);
        if ( result != 1 )
          break;
      }
      result = v13;
      if ( v13 < *(_DWORD *)v5 )
        break;
      if ( v13 > *((_DWORD *)v5 + 3) )
      result = v15;
      if ( v15 < *((_DWORD *)v5 + 2) )
      if ( v15 > *((_DWORD *)v5 + 5) )
      result = v14;
      if ( v14 < *((_DWORD *)v5 + 1) )
      if ( v14 > *((_DWORD *)v5 + 4) )
      v12 = *(_BYTE *)(Block::mCobblestone + 4);
      result = j_BlockSource::setBlock((int)v7, (BlockPos *)&v13, &v12, 2);
      --v8;
    }
    while ( v8 > 1 );
  }
  return result;
}


int __fastcall WoodlandMansionStart::WoodlandMansionStart(int a1)
{
  int v1; // r4@1

  v1 = a1;
  j___aeabi_memclr4_0(a1 + 4, 44);
  *(_DWORD *)v1 = &off_2724724;
  *(_DWORD *)(v1 + 52) = 0;
  *(_DWORD *)(v1 + 56) = 0;
  *(_DWORD *)(v1 + 60) = 0;
  return v1;
}


int __fastcall WoodlandMansionStart::_convertToStairsDirection(WoodlandMansionStart *this, int a2)
{
  int result; // r0@2

  if ( (unsigned int)(a2 - 2) <= 3 )
    result = 5 - a2;
  else
    result = 0;
  return result;
}


signed int __fastcall WoodlandMansionStart::getType(WoodlandMansionStart *this)
{
  return 8;
}


WoodlandMansionStart *__fastcall WoodlandMansionStart::WoodlandMansionStart(WoodlandMansionStart *this, Dimension *a2, OverworldGenerator *a3, Random *a4, __int64 a5)
{
  WoodlandMansionStart *v5; // r4@1

  v5 = this;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)((char *)this + 28) = a5;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *(_DWORD *)this = &off_2724724;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  j_WoodlandMansionStart::_create(this, a2, a3, a4, a5, SHIDWORD(a5));
  return v5;
}


int __fastcall WoodlandMansionStart::postProcess(WoodlandMansionStart *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  const BoundingBox *v4; // r11@1
  BlockSource *v5; // r9@1
  WoodlandMansionStart *v6; // r7@1
  int v7; // r0@1
  signed __int8 v8; // r2@1
  int v9; // r5@1 OVERLAPPED
  int v10; // r1@1
  int v11; // r6@2 OVERLAPPED
  int v12; // r0@2
  WoodlandMansionStart *v13; // r2@3
  int v14; // r4@4
  int v15; // r2@11
  int v16; // r3@11
  int v17; // r1@12
  int v18; // r8@13
  int v19; // r2@19
  bool v20; // zf@19
  bool v21; // nf@19
  unsigned __int8 v22; // vf@19
  signed int v23; // r2@19
  Facing *v24; // r0@28
  int v25; // r5@28
  signed __int8 v26; // r2@28
  Facing *v27; // r4@28
  signed __int8 v28; // r2@28
  Facing *v29; // r10@28
  signed __int8 v30; // r2@28
  Facing *v31; // r6@28
  BlockState *v32; // r0@28
  __int64 v33; // kr08_8@28
  int v34; // r0@28
  WoodlandMansionStart *v35; // r0@30
  unsigned __int8 v36; // r7@30
  BlockState *v37; // r0@30
  int v38; // r5@30
  int v39; // r7@30
  int v40; // r1@30
  WoodlandMansionStart *v41; // r0@32
  unsigned __int8 v42; // r7@32
  int v44; // [sp+10h] [bp-A0h]@1
  int v45; // [sp+18h] [bp-98h]@28
  WoodlandMansionStart *v46; // [sp+1Ch] [bp-94h]@12
  WoodlandMansionStart *v47; // [sp+1Ch] [bp-94h]@28
  int v48; // [sp+20h] [bp-90h]@32
  int v49; // [sp+24h] [bp-8Ch]@32
  WoodlandMansionStart *v50; // [sp+28h] [bp-88h]@32
  int v51; // [sp+2Ch] [bp-84h]@30
  int v52; // [sp+30h] [bp-80h]@30
  WoodlandMansionStart *v53; // [sp+34h] [bp-7Ch]@30
  int v54; // [sp+38h] [bp-78h]@30
  int v55; // [sp+3Ch] [bp-74h]@30
  WoodlandMansionStart *v56; // [sp+40h] [bp-70h]@30
  int v57; // [sp+44h] [bp-6Ch]@30
  int v58; // [sp+48h] [bp-68h]@30
  WoodlandMansionStart *v59; // [sp+4Ch] [bp-64h]@30
  __int64 v60; // [sp+50h] [bp-60h]@30
  WoodlandMansionStart *v61; // [sp+58h] [bp-58h]@30
  __int64 v62; // [sp+5Ch] [bp-54h]@28
  WoodlandMansionStart *v63; // [sp+64h] [bp-4Ch]@28
  __int64 v64; // [sp+68h] [bp-48h]@28
  WoodlandMansionStart *v65; // [sp+70h] [bp-40h]@28
  __int64 v66; // [sp+74h] [bp-3Ch]@24
  int v67; // [sp+7Ch] [bp-34h]@24
  __int64 v68; // [sp+80h] [bp-30h]@4
  WoodlandMansionStart *v69; // [sp+88h] [bp-28h]@4

  v4 = a4;
  v5 = a2;
  v6 = this;
  v7 = j_StructureStart::postProcess(this, a2, a3, a4);
  v9 = *(_DWORD *)v4;
  v10 = *((_DWORD *)v4 + 3);
  v44 = v7;
  if ( *(_DWORD *)v4 > v10 )
    goto LABEL_28;
  v11 = *((_DWORD *)v6 + 2);
  v12 = *((_DWORD *)v4 + 5);
  do
  {
    v13 = (WoodlandMansionStart *)*((_DWORD *)v4 + 2);
    if ( (signed int)v13 > v12 )
      goto LABEL_27;
    do
    {
      v14 = (int)v13;
      v68 = *(_QWORD *)&v9;
      v69 = v13;
      if ( j_BlockSource::isEmptyBlock(v5, (const BlockPos *)&v68) )
        goto LABEL_25;
      if ( (signed int)v68 < *((_DWORD *)v6 + 1) )
      if ( (signed int)v68 > *((_DWORD *)v6 + 4) )
      if ( (signed int)v69 < *((_DWORD *)v6 + 3) )
      if ( (signed int)v69 > *((_DWORD *)v6 + 6) )
      if ( SHIDWORD(v68) < *((_DWORD *)v6 + 2) )
      if ( SHIDWORD(v68) > *((_DWORD *)v6 + 5) )
      v15 = *(_QWORD *)((char *)v6 + 36) >> 32;
      v16 = *(_QWORD *)((char *)v6 + 36);
      if ( v16 == v15 )
      v46 = 0;
      v17 = *(_QWORD *)((char *)v6 + 36) >> 32;
      while ( 1 )
      {
        v18 = *(_DWORD *)v16;
        if ( (signed int)v68 < *(_DWORD *)(*(_DWORD *)v16 + 4)
          || (signed int)v68 > *(_DWORD *)(v18 + 16)
          || (signed int)v69 < *(_DWORD *)(v18 + 12)
          || (signed int)v69 > *(_DWORD *)(v18 + 24) )
        {
          goto LABEL_22;
        }
        if ( SHIDWORD(v68) >= *(_DWORD *)(v18 + 8) )
          break;
        v17 = *(_QWORD *)((char *)v6 + 36) >> 32;
LABEL_22:
        v16 += 4;
        if ( v17 == v16 )
          goto LABEL_23;
      }
      v19 = *(_DWORD *)(v18 + 20);
      v22 = __OFSUB__(HIDWORD(v68), v19);
      v20 = HIDWORD(v68) == v19;
      v21 = HIDWORD(v68) - v19 < 0;
      v23 = 0;
      if ( (unsigned __int8)(v21 ^ v22) | v20 )
        v23 = 1;
      v46 = (WoodlandMansionStart *)((unsigned int)v46 | v23);
      if ( !((unsigned __int8)(v21 ^ v22) | v20) )
        goto LABEL_22;
LABEL_23:
      if ( (unsigned __int8)v46 & 1 )
        v66 = *(_QWORD *)&v9;
        v67 = v14;
        j_WoodlandMansionStart::_fillCobblestone(v46, (const BlockPos *)&v66, v5, v4);
LABEL_25:
      v12 = *((_DWORD *)v4 + 5);
      v13 = (WoodlandMansionStart *)(v14 + 1);
    }
    while ( v14 < v12 );
    v10 = *((_DWORD *)v4 + 3);
LABEL_27:
    v8 = v9 + 1;
    v22 = __OFSUB__(v9, v10);
    v21 = v9++ - v10 < 0;
  }
  while ( v21 ^ v22 );
LABEL_28:
  v24 = j_RotationUtil::rotate((RotationUtil *)*((_WORD *)v6 + 25), 5, v8);
  v25 = (int)v24;
  v47 = v24;
  v27 = j_RotationUtil::rotate((RotationUtil *)*((_WORD *)v6 + 25), 2, v26);
  v29 = j_RotationUtil::rotate((RotationUtil *)*((_WORD *)v6 + 25), 3, v28);
  v31 = j_RotationUtil::rotate((RotationUtil *)*((_WORD *)v6 + 25), 0, v30);
  v45 = (int)v6 + 52;
  j_BlockPos::relative((BlockPos *)&v68, (int)v6 + 52, v25, 9);
  j_BlockPos::relative((BlockPos *)&v64, (int)&v68, (int)v31, 1);
  v68 = v64;
  v69 = v65;
  j_BlockPos::relative((BlockPos *)&v62, (int)&v68, (int)v29, 2);
  v68 = v62;
  v69 = v63;
  v32 = (BlockState *)j_Block::getBlockState(Block::mStoneStairs, 12);
  v33 = *(_QWORD *)v32;
  j_BlockState::getMask(v32);
  v34 = 0;
  if ( (unsigned int)v29 - 2 < 4 )
    v34 = 5 - (_DWORD)v29;
  v35 = (WoodlandMansionStart *)(v34 << (v33 + 1 - BYTE4(v33)));
  v36 = (unsigned __int8)v35;
  j_WoodlandMansionStart::_makeStairs(v35, (const BlockPos *)&v68, (unsigned __int8)v35, (int)v27, (int)v31, v5, v4);
  j_BlockPos::relative((BlockPos *)&v60, (int)&v68, (int)v47, 1);
  v68 = v60;
  v69 = v61;
  j_WoodlandMansionStart::_makeStairs(v61, (const BlockPos *)&v68, v36, (int)v27, (int)v31, v5, v4);
  j_BlockPos::relative((BlockPos *)&v57, v45, (int)v47, 9);
  j_BlockPos::relative((BlockPos *)&v54, (int)&v57, (int)v31, 1);
  v57 = v54;
  v58 = v55;
  v59 = v56;
  j_BlockPos::relative((BlockPos *)&v51, (int)&v57, (int)v29, 12);
  v57 = v51;
  v58 = v52;
  v59 = v53;
  v37 = (BlockState *)j_Block::getBlockState(Block::mStoneStairs, 12);
  v39 = *(_QWORD *)v37 >> 32;
  v38 = *(_QWORD *)v37;
  j_BlockState::getMask(v37);
  v40 = 0;
  if ( (unsigned int)v27 - 2 < 4 )
    v40 = 5 - (_DWORD)v27;
  v41 = (WoodlandMansionStart *)(v40 << (v38 + 1 - v39));
  v42 = v40 << (v38 + 1 - v39);
  j_WoodlandMansionStart::_makeStairs(v41, (const BlockPos *)&v57, (unsigned __int8)v41, (int)v29, (int)v31, v5, v4);
  j_BlockPos::relative((BlockPos *)&v48, (int)&v57, (int)v47, 1);
  v57 = v48;
  v58 = v49;
  v59 = v50;
  j_WoodlandMansionStart::_makeStairs(v50, (const BlockPos *)&v57, v42, (int)v29, (int)v31, v5, v4);
  return v44;
}


signed int __fastcall WoodlandMansionStart::_makeStairs(WoodlandMansionStart *this, const BlockPos *a2, unsigned __int8 a3, int a4, int a5, BlockSource *a6, const BoundingBox *a7)
{
  int v7; // r9@1
  unsigned __int8 v8; // r5@1
  signed int result; // r0@1
  WoodlandMansionStart *v10; // r0@8
  int v11; // [sp+4h] [bp-4Ch]@8
  int v12; // [sp+8h] [bp-48h]@8
  int v13; // [sp+Ch] [bp-44h]@8
  int v14; // [sp+10h] [bp-40h]@8
  int v15; // [sp+14h] [bp-3Ch]@8
  int v16; // [sp+18h] [bp-38h]@8
  char v17; // [sp+1Ch] [bp-34h]@8
  unsigned __int8 v18; // [sp+1Dh] [bp-33h]@8
  int v19; // [sp+20h] [bp-30h]@1
  int v20; // [sp+24h] [bp-2Ch]@1
  int v21; // [sp+28h] [bp-28h]@1

  v7 = a4;
  v19 = *(_DWORD *)a2;
  v8 = a3;
  v20 = *((_DWORD *)a2 + 1);
  v21 = *((_DWORD *)a2 + 2);
  result = j_BlockSource::isEmptyBlock(a6, (const BlockPos *)&v19);
  if ( result == 1 )
  {
    do
    {
      result = v19;
      if ( v19 < *(_DWORD *)a7 )
        break;
      if ( v19 > *((_DWORD *)a7 + 3) )
      result = v21;
      if ( v21 < *((_DWORD *)a7 + 2) )
      if ( v21 > *((_DWORD *)a7 + 5) )
      result = v20;
      if ( v20 < *((_DWORD *)a7 + 1) )
      if ( v20 > *((_DWORD *)a7 + 4) )
      v17 = *(_BYTE *)(Block::mStoneStairs + 4);
      v18 = v8;
      v10 = (WoodlandMansionStart *)j_BlockSource::setBlockAndData((int)a6, (BlockPos *)&v19, (int)&v17, 2, 0);
      j_WoodlandMansionStart::_fillCobblestone(v10, (const BlockPos *)&v19, a6, a7);
      j_BlockPos::relative((BlockPos *)&v14, (int)&v19, a5, 1);
      v19 = v14;
      v20 = v15;
      v21 = v16;
      j_BlockPos::relative((BlockPos *)&v11, (int)&v19, v7, 1);
      v19 = v11;
      v20 = v12;
      v21 = v13;
      result = j_BlockSource::isEmptyBlock(a6, (const BlockPos *)&v19);
    }
    while ( result );
  }
  return result;
}


void __fastcall WoodlandMansionStart::~WoodlandMansionStart(WoodlandMansionStart *this)
{
  WoodlandMansionStart *v1; // r4@1
  char *v2; // r5@1 OVERLAPPED
  char *v3; // r6@1 OVERLAPPED

  v1 = this;
  *(_DWORD *)this = &off_271946C;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 36);
  if ( v2 != v3 )
  {
    do
    {
      if ( *(_DWORD *)v2 )
        (*(void (**)(void))(**(_DWORD **)v2 + 4))();
      *(_DWORD *)v2 = 0;
      v2 += 4;
    }
    while ( v3 != v2 );
    v2 = (char *)*((_DWORD *)v1 + 9);
  }
  if ( v2 )
    j_operator delete(v2);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall WoodlandMansionStart::~WoodlandMansionStart(WoodlandMansionStart *this)
{
  WoodlandMansionStart::~WoodlandMansionStart(this);
}
