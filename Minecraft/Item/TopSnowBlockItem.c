

int __fastcall TopSnowBlockItem::getLevelDataForAuxValue(TopSnowBlockItem *this, int a2)
{
  return a2;
}


void __fastcall TopSnowBlockItem::~TopSnowBlockItem(TopSnowBlockItem *this)
{
  TopSnowBlockItem::~TopSnowBlockItem(this);
}


void __fastcall TopSnowBlockItem::~TopSnowBlockItem(TopSnowBlockItem *this)
{
  Item *v1; // r0@1

  v1 = Item::~Item(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall TopSnowBlockItem::_useOn(int a1, int a2, Entity *this, int a4, int a5, float a6, float a7, float a8, int a9)
{
  int v9; // r10@1
  int v10; // r4@1
  int v11; // r5@1
  Entity *v12; // r11@1
  int v13; // r6@2
  BlockSource *v14; // r7@2
  Level *v15; // r9@2
  int v16; // r5@3
  signed int v17; // r5@6
  int v18; // r0@7
  unsigned __int8 v19; // r1@11
  char v26; // r4@13
  char v27; // r0@13
  int v28; // r5@23
  int (__fastcall *v29)(int, Entity *, int *, int); // r8@23
  void (__fastcall *v30)(int, int); // r9@23
  int v31; // r0@23
  char v32; // r0@23
  char v33; // r1@23
  Level *v34; // r8@24
  int *v35; // r1@31
  char *v36; // r2@31
  char *v37; // r3@31
  void (__fastcall *v38)(int, int *, char *, char *); // r7@31
  int v39; // r0@31
  int v41; // [sp+0h] [bp-108h]@0
  bool v42; // [sp+0h] [bp-108h]@12
  int v43; // [sp+4h] [bp-104h]@0
  Entity *v44; // [sp+8h] [bp-100h]@0
  Level *v45; // [sp+18h] [bp-F0h]@22
  int v46; // [sp+1Ch] [bp-ECh]@29
  signed int v47; // [sp+20h] [bp-E8h]@29
  int v48; // [sp+24h] [bp-E4h]@29
  int v49; // [sp+28h] [bp-E0h]@29
  int v50; // [sp+2Ch] [bp-DCh]@29
  int v51; // [sp+30h] [bp-D8h]@29
  int v52; // [sp+34h] [bp-D4h]@29
  int v53; // [sp+38h] [bp-D0h]@29
  int v54; // [sp+3Ch] [bp-CCh]@29
  char v55; // [sp+40h] [bp-C8h]@29
  char v56; // [sp+4Ch] [bp-BCh]@28
  char v57; // [sp+4Dh] [bp-BBh]@28
  char v58; // [sp+5Ch] [bp-ACh]@22
  unsigned __int8 v59; // [sp+60h] [bp-A8h]@17
  char v60; // [sp+61h] [bp-A7h]@17
  int v61; // [sp+64h] [bp-A4h]@33
  signed int v62; // [sp+68h] [bp-A0h]@33
  int v63; // [sp+6Ch] [bp-9Ch]@33
  int v64; // [sp+70h] [bp-98h]@33
  int v65; // [sp+74h] [bp-94h]@33
  int v66; // [sp+78h] [bp-90h]@33
  int v67; // [sp+7Ch] [bp-8Ch]@33
  int v68; // [sp+80h] [bp-88h]@33
  int v69; // [sp+84h] [bp-84h]@33
  char v70; // [sp+88h] [bp-80h]@33
  char v71; // [sp+94h] [bp-74h]@33
  char v72; // [sp+95h] [bp-73h]@33
  char v73; // [sp+98h] [bp-70h]@13
  char v74; // [sp+99h] [bp-6Fh]@13
  char v75; // [sp+9Ch] [bp-6Ch]@12
  char v76; // [sp+9Dh] [bp-6Bh]@23
  char v77; // [sp+B8h] [bp-50h]@11
  TopSnowBlock *v78; // [sp+B9h] [bp-4Fh]@11
  unsigned __int8 v79; // [sp+C0h] [bp-48h]@9
  char v80; // [sp+C1h] [bp-47h]@9
  int v81; // [sp+C4h] [bp-44h]@9
  int v82; // [sp+C8h] [bp-40h]@9
  int v83; // [sp+CCh] [bp-3Ch]@9
  unsigned __int8 v84; // [sp+D0h] [bp-38h]@7
  unsigned __int8 v85; // [sp+D4h] [bp-34h]@2
  char v86; // [sp+D5h] [bp-33h]@9
  int v87; // [sp+D8h] [bp-30h]@2
  int v88; // [sp+DCh] [bp-2Ch]@2
  int v89; // [sp+E0h] [bp-28h]@2

  v9 = a2;
  v10 = a1;
  v11 = a4;
  v12 = this;
  if ( !*(_BYTE *)(a2 + 14) )
    return 0;
  LOBYTE(v13) = a5;
  v14 = (BlockSource *)Entity::getRegion(this);
  v15 = (Level *)BlockSource::getLevel(v14);
  v87 = *(_DWORD *)v11;
  v88 = *(_DWORD *)(v11 + 4);
  v89 = *(_DWORD *)(v11 + 8);
  BlockSource::getBlockAndData((BlockSource *)&v85, v14, (int)&v87);
  if ( v85 != *(_BYTE *)(Block::mTopSnow + 4) )
  {
    v84 = v85;
    v18 = TopSnowBlock::checkIsRecoverableBlock(&v84);
    if ( (unsigned __int8)a5 != 1 && !v18 )
    {
      BlockPos::neighbor((BlockPos *)&v81, (int)&v87, a5);
      v87 = v81;
      v88 = v82;
      v89 = v83;
      BlockSource::getBlockAndData((BlockSource *)&v79, v14, (int)&v87);
      v85 = v79;
      v86 = v80;
      if ( v79 == *(_BYTE *)(Block::mTopSnow + 4) )
      {
        v16 = 0;
        goto LABEL_11;
      }
      BYTE3(v78) = v79;
      v18 = TopSnowBlock::checkIsRecoverableBlock((_BYTE *)&v78 + 3);
    }
    if ( v18 )
      LOBYTE(v13) = 1;
LABEL_22:
    v13 = (char)v13;
    v17 = 0;
    v45 = v15;
    v58 = *(_BYTE *)(Block::mTopSnow + 4);
    if ( BlockSource::mayPlace(v14, (int)&v58, (int)&v87, (char)v13, (int)v12, 0, 0) != 1 )
      return v17;
    __asm
      VLDR            S0, [SP,#0x108+arg_C]
      VLDR            S2, [SP,#0x108+arg_8]
      VLDR            S4, [SP,#0x108+arg_4]
    v28 = Block::mTopSnow;
    v29 = *(int (__fastcall **)(int, Entity *, int *, int))(*(_DWORD *)Block::mTopSnow + 296);
      VSTR            S4, [SP,#0x108+var_B8]
      VSTR            S2, [SP,#0x108+var_B4]
      VSTR            S0, [SP,#0x108+var_B0]
    v30 = *(void (__fastcall **)(int, int))(*(_DWORD *)v10 + 72);
    v31 = ItemInstance::getAuxValue((ItemInstance *)v9);
    v30(v10, v31);
    v32 = v29(v28, v12, &v87, v13);
    v33 = *(_BYTE *)(v10 + 44);
    v75 = *(_BYTE *)(v10 + 44);
    v76 = v32;
    if ( a9 )
      v34 = v45;
      if ( (*(int (__fastcall **)(int, int *, unsigned __int8 *, char *))(*(_DWORD *)a9 + 8))(a9, &v87, &v85, &v75) )
        return 0;
      v33 = v75;
      v32 = v76;
    else
    v56 = v33;
    v57 = v32;
    if ( BlockSource::setBlockAndData((int)v14, (BlockPos *)&v87, (int)&v56, 3, (int)v12) == 1 )
      v46 = 1056964608;
      v47 = 1056964608;
      v48 = 1056964608;
      BlockPos::BlockPos((int)&v49, (int)&v46);
      v52 = v87 + v49;
      v53 = v50 + v88;
      v54 = v51 + v89;
      Vec3::Vec3((int)&v55, (int)&v52);
      Level::broadcastSoundEvent(v34, (int)v14, 0, (int)&v55, *(_BYTE *)(Block::mTopSnow + 4), 1, 0, 0);
      (*(void (__fastcall **)(Entity *, int))(*(_DWORD *)v12 + 612))(v12, v9);
    if ( !a9 )
      return 1;
    v35 = &v87;
    v36 = (char *)&v85;
    v37 = &v75;
    v38 = *(void (__fastcall **)(int, int *, char *, char *))(*(_DWORD *)a9 + 12);
    v39 = a9;
LABEL_35:
    v38(v39, v35, v36, v37);
    return 1;
  }
  v16 = (unsigned __int8)a5;
  if ( (unsigned __int8)a5 != 1 )
    v16 = 0;
LABEL_11:
  BlockSource::getBlockAndData((BlockSource *)&v77, v14, (int)&v87);
  if ( (signed int)TopSnowBlock::dataIDToHeight((TopSnowBlock *)(unsigned __int8)v78, v19) >= 8 )
    if ( !v16 )
      return 0;
    ++v88;
    BlockSource::getBlockAndData((BlockSource *)&v59, v14, (int)&v87);
    v85 = v59;
    v86 = v60;
    goto LABEL_22;
  __asm
    VLDR            S0, [SP,#0x108+var_30]
    VMOV.F32        S6, #1.0
    VLDR            S2, [SP,#0x108+var_2C]
    VLDR            S4, [SP,#0x108+var_28]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VMOV            R1, S0
    VMOV            R2, S2
    VMOV            R3, S4
    VADD.F32        S0, S0, S6
    VADD.F32        S4, S4, S6
    VADD.F32        S2, S2, S6
    VSTR            S0, [SP,#0x108+var_108]
    VSTR            S2, [SP,#0x108+var_104]
    VSTR            S4, [SP,#0x108+var_100]
  AABB::AABB(COERCE_FLOAT(&v75), _R1, _R2, v41, v43, (int)v44);
  v17 = 0;
  if ( BlockSource::isUnobstructedByEntities(v14, (const AABB *)&v75, 0) == 1 )
    v17 = 1;
    v26 = *(_BYTE *)(Block::mTopSnow + 4);
    v27 = TopSnowBlock::buildData(v14, (BlockSource *)&v87, (const BlockPos *)1, 1, v42);
    v73 = v26;
    v74 = v27;
      if ( (*(int (__fastcall **)(int, int *, char *, char *))(*(_DWORD *)a9 + 8))(a9, &v87, &v77, &v73) )
      v26 = v73;
      v27 = v74;
    v71 = v26;
    v72 = v27;
    BlockSource::setBlockAndData((int)v14, (BlockPos *)&v87, (int)&v71, 3, (int)v12);
    v61 = 1056964608;
    v62 = 1056964608;
    v63 = 1056964608;
    BlockPos::BlockPos((int)&v64, (int)&v61);
    v67 = v87 + v64;
    v68 = v65 + v88;
    v69 = v66 + v89;
    Vec3::Vec3((int)&v70, (int)&v67);
    Level::broadcastSoundEvent(v15, (int)v14, 6, (int)&v70, *(_BYTE *)(Block::mTopSnow + 4), 1, 0, 0);
    (*(void (__fastcall **)(Entity *, int))(*(_DWORD *)v12 + 612))(v12, v9);
    ItemInstance::set((ItemInstance *)v9, (unsigned __int8)(*(_BYTE *)(v9 + 14) - 1));
    v36 = &v77;
    v37 = &v73;
    goto LABEL_35;
  return v17;
}
