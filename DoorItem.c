

int __fastcall DoorItem::DoorItem(int a1, const void **a2, __int16 a3, int a4, int a5)
{
  int result; // r0@1

  result = j_Item::Item(a1, a2, a3);
  *(_DWORD *)result = &off_2720BD0;
  *(_DWORD *)(result + 116) = a5;
  *(_WORD *)(result + 30) = 0;
  *(_BYTE *)(result + 4) = 64;
  return result;
}


void __fastcall DoorItem::~DoorItem(DoorItem *this)
{
  Item *v1; // r0@1

  v1 = j_Item::~Item(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall DoorItem::_useOn(int a1, int a2, Entity *this, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v10; // r6@1
  int v11; // r5@1
  int v12; // r8@1
  BlockSource *v13; // r0@1
  BlockSource *v14; // r4@1
  int v15; // r0@1
  unsigned int v16; // r0@3
  int v17; // r9@4
  float v18; // r1@4
  char v24; // r0@5
  signed int v25; // r6@5
  Level *v26; // r7@6
  ItemUseCallback *v28; // [sp+Ch] [bp-2Ch]@0
  char v29; // [sp+10h] [bp-28h]@6

  _R7 = this;
  v10 = a1;
  v11 = a4;
  v12 = a2;
  v13 = (BlockSource *)j_Entity::getRegion(this);
  v14 = v13;
  v15 = j_BlockSource::getBlock(v13, (const BlockPos *)v11);
  if ( (*(int (**)(void))(*(_DWORD *)v15 + 332))() || (++*(_DWORD *)(v11 + 4), (unsigned __int8)a5 == 1) )
  {
    v16 = *(_DWORD *)(v10 + 116);
    if ( v16 > 6 )
    {
      v25 = 0;
    }
    else
      v17 = *off_2720CF0[v16];
      if ( (*(int (__fastcall **)(_DWORD, BlockSource *, int))(*(_DWORD *)v17 + 224))(*off_2720CF0[v16], v14, v11) == 1 )
      {
        __asm
        {
          VLDR            S0, =180.0
          VMOV.F32        S4, #-0.5
          VLDR            S2, [R7,#0x7C]
          VADD.F32        S0, S2, S0
          VLDR            S2, =0.011111
          VMUL.F32        S0, S0, S2
          VADD.F32        S0, S0, S4
          VMOV            R0, S0
        }
        v24 = j_mce::Math::floor(_R0, v18);
        v25 = 0;
        if ( j_DoorItem::place(v14, *(BlockSource **)v11, *(_QWORD *)(v11 + 4), v24 & 3, v17, (const Block *)a9, v28) == 1 )
          (*(void (__fastcall **)(Entity *, int))(*(_DWORD *)_R7 + 612))(_R7, v12);
          v26 = (Level *)j_BlockSource::getLevel(v14);
          j_Vec3::Vec3((int)&v29, v11);
          j_Level::broadcastSoundEvent(v26, (int)v14, 6, (int)&v29, *(_BYTE *)(v17 + 4), 1, 0, 0);
          v25 = 1;
      }
      else
  }
  else
    v25 = 0;
  return v25;
}


signed int __fastcall DoorItem::place(DoorItem *this, BlockSource *a2, __int64 a3, int a4, int a5, const Block *a6, ItemUseCallback *a7)
{
  BlockSource *v7; // r8@1
  signed int v8; // r6@1
  BlockSource *v9; // r10@1
  char *v10; // r4@5
  signed int v11; // r7@5
  int v12; // r5@9
  int v13; // r9@9
  _BOOL4 v14; // r0@9
  int v15; // r4@9
  int v16; // r11@9
  _BOOL4 v17; // ST20_4@9
  unsigned int v18; // r6@9
  _BOOL4 v19; // r9@9
  int v20; // r0@9
  BlockSource *v21; // r2@9
  int v22; // r6@13
  signed int v23; // r0@14
  int v24; // r4@17
  int v25; // r5@17
  signed int v26; // r2@18
  signed int v27; // r6@21
  const BlockPos *v28; // r9@21
  BlockState *v29; // r0@25
  char v30; // r7@25
  int v31; // ST30_4@25
  BlockState *v32; // r0@25
  int v33; // r4@25
  int v34; // ST2C_4@25
  BlockState *v35; // r0@25
  int v36; // r10@25
  int v37; // r11@25
  char v38; // r5@25
  int v39; // r7@25
  char v40; // r0@25
  signed int v41; // r1@25
  char v42; // r6@25
  int v43; // r5@26
  int v44; // r1@26
  signed int result; // r0@26
  LevelChunk *v46; // r1@30
  int v47; // [sp+Ch] [bp-A4h]@9
  __int64 v48; // [sp+10h] [bp-A0h]@1
  BlockSource *v49; // [sp+18h] [bp-98h]@1
  char *v50; // [sp+1Ch] [bp-94h]@5
  unsigned int v51; // [sp+20h] [bp-90h]@13
  signed int v52; // [sp+28h] [bp-88h]@5
  signed int v53; // [sp+2Ch] [bp-84h]@1
  _BOOL4 v54; // [sp+30h] [bp-80h]@9
  unsigned int v55; // [sp+30h] [bp-80h]@11
  BlockSource *v56; // [sp+34h] [bp-7Ch]@32
  int v57; // [sp+38h] [bp-78h]@32
  int v58; // [sp+3Ch] [bp-74h]@32
  char v59; // [sp+40h] [bp-70h]@30
  char v60; // [sp+4Ch] [bp-64h]@28
  char v61; // [sp+50h] [bp-60h]@28
  char v62; // [sp+54h] [bp-5Ch]@25
  char v63; // [sp+55h] [bp-5Bh]@25
  char v64; // [sp+58h] [bp-58h]@25
  char v65; // [sp+59h] [bp-57h]@25
  char v66; // [sp+5Ch] [bp-54h]@25
  char v67; // [sp+60h] [bp-50h]@25
  BlockSource *v68; // [sp+64h] [bp-4Ch]@25
  int v69; // [sp+68h] [bp-48h]@25
  int v70; // [sp+6Ch] [bp-44h]@25
  unsigned __int8 v71; // [sp+70h] [bp-40h]@18
  unsigned __int8 v72; // [sp+74h] [bp-3Ch]@17
  unsigned __int8 v73; // [sp+78h] [bp-38h]@14
  unsigned __int8 v74; // [sp+7Ch] [bp-34h]@9
  BlockSource *v75; // [sp+80h] [bp-30h]@1
  __int64 v76; // [sp+84h] [bp-2Ch]@1

  v7 = this;
  v8 = 0;
  v48 = a3;
  v9 = a2;
  v49 = a2;
  v75 = a2;
  v76 = a3;
  v53 = 0;
  if ( a4 == 1 )
    v8 = -1;
  if ( a4 == 3 )
    v8 = 1;
  v10 = (char *)a2 - v8;
  v11 = 0;
  v52 = v8;
  v50 = (char *)a2 - v8;
  if ( !a4 )
    v11 = 1;
  if ( a4 == 2 )
    v11 = -1;
  v12 = HIDWORD(a3) - v11;
  v13 = a3 + 1;
  v54 = j_BlockSource::isSolidBlockingBlock(this, (int)v10, a3, HIDWORD(a3) - v11);
  v47 = v13;
  v14 = j_BlockSource::isSolidBlockingBlock(v7, (int)v10, v13, v12);
  v15 = HIDWORD(v48);
  v16 = (int)v9 + v8;
  v17 = v14;
  v18 = j_BlockSource::isSolidBlockingBlock(v7, (int)v9 + v8, v48, v11 + HIDWORD(v48));
  v19 = j_BlockSource::isSolidBlockingBlock(v7, v16, v13, v11 + HIDWORD(v48));
  j_BlockSource::getBlockID((BlockSource *)&v74, (int)v7, (int)v50, v48, v12);
  v20 = v54;
  v21 = v49;
  if ( v17 )
    v20 = v54 + 1;
  v55 = v20;
  if ( v19 )
    ++v18;
  v51 = v18;
  v22 = v48;
  if ( v74 != *(_BYTE *)(a5 + 4) )
  {
    j_BlockSource::getBlockID((BlockSource *)&v73, (int)v7, (int)v50, v47, v12);
    v22 = v76;
    v21 = v75;
    v15 = HIDWORD(v76);
    v23 = 0;
    if ( v73 != *(_BYTE *)(a5 + 4) )
      v23 = 1;
    v53 = v23;
  }
  v24 = v15 + v11;
  v25 = (int)v21 + v52;
  j_BlockSource::getBlockID((BlockSource *)&v72, (int)v7, (int)v21 + v52, v22, v24);
  if ( v72 == *(_BYTE *)(a5 + 4) )
    goto LABEL_36;
  j_BlockSource::getBlockID((BlockSource *)&v71, (int)v7, v25, v22 + 1, v24);
  v26 = 0;
  if ( v71 == *(_BYTE *)(a5 + 4) )
    v26 = 1;
  if ( v53 | v26 )
LABEL_36:
    v27 = 0;
    v28 = v7;
    if ( v51 > v55 )
      v27 = 1;
  else
    v27 = 1;
  v29 = (BlockState *)j_Block::getBlockState(Block::mIronDoor, 12);
  v30 = *(_QWORD *)v29;
  v31 = *(_QWORD *)v29 >> 32;
  j_BlockState::getMask(v29);
  v68 = v75;
  v69 = v76 + 1;
  v70 = HIDWORD(v76);
  v32 = (BlockState *)j_Block::getBlockState(Block::mIronDoor, 11);
  v33 = *(_QWORD *)v32;
  v34 = *(_QWORD *)v32 >> 32;
  j_BlockState::getMask(v32);
  v35 = (BlockState *)j_Block::getBlockState(Block::mIronDoor, 10);
  v36 = *(_QWORD *)v35 >> 32;
  v37 = *(_QWORD *)v35;
  v38 = j_BlockState::getMask(v35);
  j_BlockSource::getBlockAndData((BlockSource *)&v67, v28, (int)&v75);
  j_BlockSource::getBlockAndData((BlockSource *)&v66, v28, (int)&v68);
  v39 = a4 << (v30 + 1 - v31);
  v40 = *(_BYTE *)(a5 + 4);
  v41 = v27 << (v37 + 1 - v36);
  v42 = (1 << (v33 + 1 - v34)) & ~v38 | v41;
  v64 = v40;
  v62 = v40;
  v65 = v39;
  v63 = (1 << (v33 + 1 - v34)) & ~v38 | v41;
  if ( a6 )
    v43 = (*(int (__fastcall **)(const Block *, BlockSource **, char *, char *))(*(_DWORD *)a6 + 8))(
            a6,
            &v75,
            &v67,
            &v64);
    v44 = (*(int (__fastcall **)(const Block *, BlockSource **, char *, char *))(*(_DWORD *)a6 + 8))(
            &v68,
            &v66,
            &v62);
    result = 0;
    if ( v43 || v44 )
      return result;
    v61 = *(_BYTE *)(a5 + 4);
    j_BlockSource::setBlockAndData((int)v28, (BlockPos *)&v75, &v61, v39, 2, 0);
    v60 = *(_BYTE *)(a5 + 4);
    j_BlockSource::setBlockAndData((int)v28, (BlockPos *)&v68, &v60, v42, 2, 0);
    (*(void (__fastcall **)(const Block *, BlockSource **, char *, char *))(*(_DWORD *)a6 + 12))(a6, &v75, &v67, &v64);
    (*(void (__fastcall **)(const Block *, BlockSource **, char *, char *))(*(_DWORD *)a6 + 8))(a6, &v68, &v66, &v62);
    v61 = v40;
  j_ChunkPos::ChunkPos((ChunkPos *)&v59, (const BlockPos *)&v75);
  v46 = (LevelChunk *)j_BlockSource::getChunk(v28, (const ChunkPos *)&v59);
  if ( v46 )
    if ( j_BlockSource::shouldFireEvents(v28, v46) == 1 )
    {
      j_BlockSource::updateNeighborsAt(v28, (const BlockPos *)&v75);
      v56 = v75;
      v57 = v76 + 1;
      v58 = HIDWORD(v76);
      j_BlockSource::updateNeighborsAt(v28, (const BlockPos *)&v56);
    }
  return 1;
}


void __fastcall DoorItem::~DoorItem(DoorItem *this)
{
  DoorItem::~DoorItem(this);
}
