

void __fastcall SkullItem::getAuxValuesDescription(SkullItem *this)
{
  const void **v1; // r4@1
  const void **v2; // r0@1
  char *v3; // r0@1
  void *v4; // r0@2
  const void **v5; // r0@3
  const void **v6; // r0@3
  char *v7; // r0@3
  char *v8; // r0@4
  char *v9; // r0@5
  const void **v10; // r0@6
  const void **v11; // r0@6
  char *v12; // r0@6
  char *v13; // r0@7
  char *v14; // r0@8
  const void **v15; // r0@9
  const void **v16; // r0@9
  char *v17; // r0@9
  char *v18; // r0@10
  char *v19; // r0@11
  const void **v20; // r0@12
  const void **v21; // r0@12
  char *v22; // r0@12
  char *v23; // r0@13
  char *v24; // r0@14
  const void **v25; // r0@15
  const void **v26; // r0@15
  char *v27; // r0@15
  char *v28; // r0@16
  char *v29; // r0@17
  unsigned int *v30; // r2@19
  signed int v31; // r1@21
  unsigned int *v32; // r2@23
  signed int v33; // r1@25
  unsigned int *v34; // r2@27
  signed int v35; // r1@29
  unsigned int *v36; // r2@31
  signed int v37; // r1@33
  unsigned int *v38; // r2@35
  signed int v39; // r1@37
  unsigned int *v40; // r2@39
  signed int v41; // r1@41
  unsigned int *v42; // r2@43
  signed int v43; // r1@45
  unsigned int *v44; // r2@47
  signed int v45; // r1@49
  unsigned int *v46; // r2@51
  signed int v47; // r1@53
  unsigned int *v48; // r2@55
  signed int v49; // r1@57
  unsigned int *v50; // r2@59
  signed int v51; // r1@61
  unsigned int *v52; // r2@63
  signed int v53; // r1@65
  unsigned int *v54; // r2@67
  signed int v55; // r1@69
  unsigned int *v56; // r2@71
  signed int v57; // r1@73
  unsigned int *v58; // r2@75
  signed int v59; // r1@77
  unsigned int *v60; // r2@79
  signed int v61; // r1@81
  unsigned int *v62; // r2@83
  signed int v63; // r1@85
  char *v64; // [sp+4h] [bp-74h]@15
  char *v65; // [sp+8h] [bp-70h]@15
  char *v66; // [sp+Ch] [bp-6Ch]@15
  char *v67; // [sp+10h] [bp-68h]@12
  char *v68; // [sp+14h] [bp-64h]@12
  char *v69; // [sp+18h] [bp-60h]@12
  char *v70; // [sp+1Ch] [bp-5Ch]@9
  char *v71; // [sp+20h] [bp-58h]@9
  char *v72; // [sp+24h] [bp-54h]@9
  char *v73; // [sp+28h] [bp-50h]@6
  char *v74; // [sp+2Ch] [bp-4Ch]@6
  char *v75; // [sp+30h] [bp-48h]@6
  char *v76; // [sp+34h] [bp-44h]@3
  char *v77; // [sp+38h] [bp-40h]@3
  char *v78; // [sp+3Ch] [bp-3Ch]@3
  int v79; // [sp+40h] [bp-38h]@1
  char *v80; // [sp+44h] [bp-34h]@1
  char *v81; // [sp+50h] [bp-28h]@3
  char *v82; // [sp+54h] [bp-24h]@6
  char *v83; // [sp+58h] [bp-20h]@9
  char *v84; // [sp+5Ch] [bp-1Ch]@12
  char *v85; // [sp+60h] [bp-18h]@15

  v1 = (const void **)this;
  sub_21E94B4((void **)this, (const char *)&unk_257BC67);
  sub_21E94B4((void **)&v79, "0");
  v2 = sub_21E7408((const void **)&v79, " = Skeleton\n", 0xCu);
  v80 = (char *)*v2;
  *v2 = &unk_28898CC;
  sub_21E72F0(v1, (const void **)&v80);
  v3 = v80 - 12;
  if ( (int *)(v80 - 12) != &dword_28898C0 )
  {
    v30 = (unsigned int *)(v80 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
    }
    else
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v79 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  v81 = (char *)&unk_28898CC;
  sub_21E810C((const void **)&v81, 0, 0, (_BYTE *)1, 0x31u);
  v76 = v81;
  v5 = sub_21E82D8((const void **)&v76, 0, (unsigned int)"\n", (_BYTE *)1);
  v77 = (char *)*v5;
  *v5 = &unk_28898CC;
  v6 = sub_21E7408((const void **)&v77, " = Wither\n", 0xAu);
  v78 = (char *)*v6;
  *v6 = &unk_28898CC;
  sub_21E72F0(v1, (const void **)&v78);
  v7 = v78 - 12;
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v78 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = v77 - 12;
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v77 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = v76 - 12;
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v76 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v82 = (char *)&unk_28898CC;
  sub_21E810C((const void **)&v82, 0, 0, (_BYTE *)1, 0x32u);
  v73 = v82;
  v10 = sub_21E82D8((const void **)&v73, 0, (unsigned int)"\n", (_BYTE *)1);
  v74 = (char *)*v10;
  *v10 = &unk_28898CC;
  v11 = sub_21E7408((const void **)&v74, " = Zombie\n", 0xAu);
  v75 = (char *)*v11;
  *v11 = &unk_28898CC;
  sub_21E72F0(v1, (const void **)&v75);
  v12 = v75 - 12;
  if ( (int *)(v75 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v75 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = v74 - 12;
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v74 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = v73 - 12;
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v73 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v83 = (char *)&unk_28898CC;
  sub_21E810C((const void **)&v83, 0, 0, (_BYTE *)1, 0x33u);
  v70 = v83;
  v15 = sub_21E82D8((const void **)&v70, 0, (unsigned int)"\n", (_BYTE *)1);
  v71 = (char *)*v15;
  *v15 = &unk_28898CC;
  v16 = sub_21E7408((const void **)&v71, " = Steve\n", 9u);
  v72 = (char *)*v16;
  *v16 = &unk_28898CC;
  sub_21E72F0(v1, (const void **)&v72);
  v17 = v72 - 12;
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v72 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = v71 - 12;
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v71 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = v70 - 12;
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v70 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v84 = (char *)&unk_28898CC;
  sub_21E810C((const void **)&v84, 0, 0, (_BYTE *)1, 0x34u);
  v67 = v84;
  v20 = sub_21E82D8((const void **)&v67, 0, (unsigned int)"\n", (_BYTE *)1);
  v68 = (char *)*v20;
  *v20 = &unk_28898CC;
  v21 = sub_21E7408((const void **)&v68, " = Creeper\n", 0xBu);
  v69 = (char *)*v21;
  *v21 = &unk_28898CC;
  sub_21E72F0(v1, (const void **)&v69);
  v22 = v69 - 12;
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v69 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = v68 - 12;
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v68 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = v67 - 12;
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v67 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v85 = (char *)&unk_28898CC;
  sub_21E810C((const void **)&v85, 0, 0, (_BYTE *)1, 0x35u);
  v64 = v85;
  v25 = sub_21E82D8((const void **)&v64, 0, (unsigned int)"\n", (_BYTE *)1);
  v65 = (char *)*v25;
  *v25 = &unk_28898CC;
  v26 = sub_21E7408((const void **)&v65, " = Dragon", 9u);
  v66 = (char *)*v26;
  *v26 = &unk_28898CC;
  sub_21E72F0(v1, (const void **)&v66);
  v27 = v66 - 12;
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v66 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = v65 - 12;
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v65 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = v64 - 12;
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v64 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
}


signed int __fastcall SkullItem::dispense(SkullItem *this, BlockSource *a2, Container *a3, int a4, const Vec3 *a5, int a6)
{
  Container *v6; // r5@1
  int v7; // r10@1
  BlockSource *v8; // r6@1
  ItemInstance *v9; // r7@1
  Block *v10; // r0@2
  int v11; // r0@4
  SkullBlockEntity *v12; // r9@4
  int v13; // r0@6
  SkullBlock *v14; // r4@6
  Level *v15; // r7@6
  char *v16; // r0@6
  Player *v17; // r0@6
  signed int v18; // r6@6
  char v20; // [sp+8h] [bp-48h]@4
  char v21; // [sp+14h] [bp-3Ch]@4
  char v22; // [sp+15h] [bp-3Bh]@4
  char v23; // [sp+18h] [bp-38h]@4
  char v24; // [sp+24h] [bp-2Ch]@2

  v6 = a3;
  v7 = a4;
  v8 = a2;
  v9 = (ItemInstance *)(*(int (__fastcall **)(Container *, int))(*(_DWORD *)a3 + 16))(a3, a4);
  if ( (unsigned __int16)ItemInstance::getAuxValue(v9) == 1
    && (BlockPos::BlockPos((int)&v24, (int)a5),
        v10 = (Block *)BlockSource::getBlock(v8, (const BlockPos *)&v24),
        Block::isType(v10, (const Block *)Block::mAir) == 1)
    && SkullItem::_canDispense((SkullItem *)1, v8, a5, 0) == 1
    && (BlockPos::BlockPos((int)&v23, (int)a5),
        v21 = *(_BYTE *)(Block::mSkull + 4),
        v22 = 1,
        BlockSource::setBlockAndData((int)v8, (BlockPos *)&v23, (int)&v21, 3, 0),
        BlockPos::BlockPos((int)&v20, (int)a5),
        v11 = BlockSource::getBlockEntity(v8, (const BlockPos *)&v20),
        (v12 = (SkullBlockEntity *)v11) != 0)
    && BlockEntity::isType(v11, 6) == 1 )
  {
    v13 = ItemInstance::getAuxValue(v9);
    SkullBlockEntity::setSkullType(v12, v13);
    SkullBlockEntity::setRotation(v12, 12);
    v14 = (SkullBlock *)Block::mSkull;
    v15 = (Level *)BlockSource::getLevel(v8);
    v16 = BlockEntity::getPosition(v12);
    SkullBlock::checkMobSpawn(v14, v15, v8, (const BlockPos *)v16, v12);
    v17 = (Player *)BlockSource::getLevel(v8);
    Level::broadcastLevelEvent(v17, 1000, __PAIR__(1000, (unsigned int)a5), 0);
    v18 = 1;
    (*(void (__fastcall **)(Container *, int, signed int))(*(_DWORD *)v6 + 36))(v6, v7, 1);
  }
  else
    v18 = ArmorItem::dispenseArmor((int)v8, (int)v6, v7, (int)a5, a6, 0);
  return v18;
}


int __fastcall SkullItem::getIcon(SkullItem *this, int a2, int a3, bool a4)
{
  int v4; // r5@1
  SkullItem *v5; // r6@1
  int *v6; // r5@4
  void *v7; // r0@4
  SkullItem *v8; // r2@5
  int v9; // r4@9
  void *v10; // r0@9
  void *v11; // r0@10
  unsigned int *v13; // r2@12
  signed int v14; // r1@14
  unsigned int *v15; // r2@16
  signed int v16; // r1@18
  unsigned int *v17; // r2@20
  signed int v18; // r1@22
  int v19; // [sp+4h] [bp-24h]@4
  int v20; // [sp+8h] [bp-20h]@1
  int v21; // [sp+10h] [bp-18h]@1

  v4 = a2;
  v5 = this;
  sub_21E94B4((void **)&v21, "skull_");
  SkullBlock::getTypeDescriptionId((SkullBlock *)&v20, v4);
  if ( *(_DWORD *)(v20 - 12) )
  {
    if ( v4 == 3 )
      sub_21E8190((void **)&v20, "steve", (_BYTE *)5);
    sub_21E8AF4(&v19, &v21);
    sub_21E72F0((const void **)&v19, (const void **)&v20);
    v6 = Item::getTextureItem((int **)&v19);
    v7 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
    {
      v17 = (unsigned int *)(v19 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      }
      else
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    }
    v8 = (SkullItem *)*((_QWORD *)v6 + 1);
    if ( (SkullItem *)(*((_QWORD *)v6 + 1) >> 32) == v8 )
      v8 = (SkullItem *)((char *)v5 + 60);
  }
  else
    v8 = (SkullItem *)((char *)v5 + 60);
  v9 = *(_DWORD *)v8;
  v10 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v20 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v21 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  return v9;
}


void __fastcall SkullItem::buildDescriptionId(SkullItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  const ItemInstance *v3; // r6@1
  ItemInstance *v4; // r5@1
  SkullItem *v5; // r4@1
  int v6; // r0@1
  const void **v7; // r0@2
  void *v8; // r0@2
  unsigned int *v9; // r2@3
  signed int v10; // r1@5
  void *v11; // r0@8
  void *v12; // r0@9
  unsigned int *v13; // r2@11
  signed int v14; // r1@13
  unsigned int *v15; // r2@15
  signed int v16; // r1@17
  int v17; // [sp+4h] [bp-24h]@2
  int v18; // [sp+8h] [bp-20h]@1
  int v19; // [sp+10h] [bp-18h]@1

  v3 = a2;
  v4 = a3;
  v5 = this;
  sub_21E94B4((void **)&v19, "item.skull.");
  v6 = ItemInstance::getAuxValue(v4);
  SkullBlock::getTypeDescriptionId((SkullBlock *)&v18, v6);
  if ( *(_DWORD *)(v18 - 12) )
  {
    sub_21E8AF4(&v17, &v19);
    sub_21E72F0((const void **)&v17, (const void **)&v18);
    v7 = sub_21E7408((const void **)&v17, ".name", 5u);
    *(_DWORD *)v5 = *v7;
    *v7 = &unk_28898CC;
    v8 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
    {
      v9 = (unsigned int *)(v17 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    }
  }
  else
    Item::buildDescriptionId(v5, v3);
  v11 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v19 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
}


int __fastcall SkullItem::_useOn(int a1, int a2, Entity *this, int a4, int a5, int a6, int a7, int a8, int a9)
{
  BlockPos *v10; // r6@1
  ItemInstance *v11; // r8@1
  BlockSource *v12; // r7@1
  Level *v13; // r10@1
  char v14; // r0@3
  float v16; // r1@6
  int v22; // r9@9
  BlockEntity *v23; // r0@11
  SkullBlockEntity *v24; // r4@11
  int v25; // r0@13
  char v26; // [sp+4h] [bp-34h]@14
  char v27; // [sp+5h] [bp-33h]@14
  char v28; // [sp+8h] [bp-30h]@6
  char v29; // [sp+9h] [bp-2Fh]@6
  char v30; // [sp+Ch] [bp-2Ch]@3
  char v31; // [sp+Dh] [bp-2Bh]@3
  char v32; // [sp+10h] [bp-28h]@3

  _R5 = this;
  v10 = (BlockPos *)a4;
  v11 = (ItemInstance *)a2;
  v12 = (BlockSource *)Entity::getRegion(this);
  v13 = (Level *)BlockSource::getLevel(v12);
  if ( (*(int (**)(void))(*(_DWORD *)Block::mSkull + 224))() != 1 )
    return 0;
  if ( !Level::isClientSide(v13) )
  {
    BlockSource::getBlockAndData((BlockSource *)&v32, v12, (int)v10);
    v14 = *(_BYTE *)(Block::mSkull + 4);
    v30 = *(_BYTE *)(Block::mSkull + 4);
    v31 = a5;
    if ( a9 )
    {
      if ( (*(int (__fastcall **)(int, BlockPos *, char *, char *))(*(_DWORD *)a9 + 8))(a9, v10, &v32, &v30) )
        return 0;
      v28 = v30;
      v29 = v31;
      BlockSource::setBlockAndData((int)v12, v10, (int)&v28, 4, (int)_R5);
      (*(void (__fastcall **)(int, BlockPos *, char *, char *))(*(_DWORD *)a9 + 12))(a9, v10, &v32, &v30);
    }
    else
      v28 = v14;
      v29 = a5;
    if ( a5 == 1 )
      __asm
      {
        VLDR            S0, =0.044444
        VMOV.F32        S4, #0.5
        VLDR            S2, [R5,#0x7C]
        VMUL.F32        S0, S2, S0
        VADD.F32        S0, S0, S4
        VMOV            R0, S0
      }
      v22 = mce::Math::floor(_R0, v16) & 0xF;
      v22 = 0;
    v23 = (BlockEntity *)BlockSource::getBlockEntity(v12, v10);
    v24 = v23;
    if ( v23 )
      BlockEntity::setChanged(v23);
      if ( BlockEntity::isType((int)v24, 6) == 1 )
        v25 = ItemInstance::getAuxValue(v11);
        SkullBlockEntity::setSkullType(v24, v25);
        SkullBlockEntity::setRotation(v24, v22);
        if ( !SkullBlock::checkMobSpawn((SkullBlock *)Block::mSkull, v13, v12, v10, v24) )
        {
          v26 = v30;
          v27 = v31;
          BlockSource::setBlockAndData((int)v12, v10, (int)&v26, 19, (int)_R5);
        }
    (*(void (__fastcall **)(Entity *, ItemInstance *))(*(_DWORD *)_R5 + 612))(_R5, v11);
  }
  return 1;
}


int __fastcall SkullItem::_canDispense(SkullItem *this, BlockSource *a2, const Vec3 *a3, signed __int8 a4)
{
  const Vec3 *v4; // r4@1
  __int64 v5; // r2@1
  BlockPatternBuilder *v6; // r0@1
  int v7; // r0@1
  BlockPatternBuilder *v8; // r0@1
  BlockPatternBuilder *v9; // r5@6
  int v10; // r9@7
  BlockPatternBuilder *v11; // r11@9
  __int64 v12; // r6@10
  unsigned int *v13; // r2@12
  signed int v14; // r1@14
  int *v15; // r0@20
  char v17; // [sp+4h] [bp-8Ch]@6
  char v18; // [sp+10h] [bp-80h]@6
  char v19; // [sp+3Ch] [bp-54h]@1
  void (*v20)(void); // [sp+44h] [bp-4Ch]@1
  char v21; // [sp+4Ch] [bp-44h]@1
  char v22; // [sp+50h] [bp-40h]@1
  void (*v23)(void); // [sp+58h] [bp-38h]@1
  char v24; // [sp+60h] [bp-30h]@1
  BlockPatternBuilder *v25; // [sp+64h] [bp-2Ch]@1

  v4 = a3;
  BlockPatternBuilder::start((BlockPatternBuilder *)&v25, a2);
  LODWORD(v5) = "###";
  HIDWORD(v5) = "~#~";
  v6 = BlockPatternBuilder::aisle(v25, 2, v5);
  v24 = *(_BYTE *)(Block::mSoulSand + 4);
  v23 = 0;
  v7 = BlockPatternBuilder::define((int)v6, 0x23u, &v24, (int)&v22);
  v21 = *(_BYTE *)(Block::mAir + 4);
  v20 = 0;
  v8 = (BlockPatternBuilder *)BlockPatternBuilder::define(v7, 0x7Eu, &v21, (int)&v19);
  BlockPatternBuilder::build(v8);
  if ( v20 )
    v20();
  if ( v23 )
    v23();
  v10 = 0;
  if ( BlockPatternBuilder::isReadyForMatch(v25) == 1 )
  {
    v9 = v25;
    BlockPos::BlockPos((int)&v17, (int)v4);
    BlockPatternBuilder::match((BlockPatternBuilder *)&v18, v9, (int)&v17);
    if ( v18 )
      v10 = 1;
  }
  v11 = v25;
  if ( v25 )
    std::_Rb_tree<char,std::pair<char const,PatternEntry>,std::_Select1st<std::pair<char const,PatternEntry>>,std::less<char>,std::allocator<std::pair<char const,PatternEntry>>>::_M_erase(
      (int)v25 + 16,
      *((_DWORD *)v25 + 6));
    v12 = *(_QWORD *)((char *)v11 + 4);
    if ( (_DWORD)v12 != HIDWORD(v12) )
    {
      do
      {
        v15 = (int *)(*(_DWORD *)v12 - 12);
        if ( v15 != &dword_28898C0 )
        {
          v13 = (unsigned int *)(*(_DWORD *)v12 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
          }
          else
            v14 = (*v13)--;
          if ( v14 <= 0 )
            j_j_j_j__ZdlPv_9(v15);
        }
        LODWORD(v12) = v12 + 4;
      }
      while ( (_DWORD)v12 != HIDWORD(v12) );
      LODWORD(v12) = *((_DWORD *)v11 + 1);
    }
    if ( (_DWORD)v12 )
      operator delete((void *)v12);
    operator delete((void *)v11);
  return v10;
}


void __fastcall SkullItem::~SkullItem(SkullItem *this)
{
  Item *v1; // r0@1

  v1 = Item::~Item(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall SkullItem::_calculatePlacePos(SkullItem *this, ItemInstance *a2, Entity *a3, signed __int8 *a4, BlockPos *a5)
{
  signed __int8 *v5; // r5@1
  BlockSource *v6; // r0@2
  Material *v7; // r0@2
  int v8; // r0@3
  signed int result; // r0@13

  v5 = a4;
  if ( *a4
    && (v6 = (BlockSource *)Entity::getRegion(a3),
        v7 = (Material *)BlockSource::getMaterial(v6, a5),
        Material::isSolid(v7) == 1) )
  {
    v8 = (unsigned __int8)*v5;
    if ( v8 == 1 )
    {
      ++*((_DWORD *)a5 + 1);
      v8 = (unsigned __int8)*v5;
    }
    if ( v8 == 2 )
      --*((_DWORD *)a5 + 2);
    if ( v8 == 3 )
      ++*((_DWORD *)a5 + 2);
    if ( v8 == 4 )
      --*(_DWORD *)a5;
    if ( v8 == 5 )
      ++*(_DWORD *)a5;
    result = 1;
  }
  else
    result = 0;
  return result;
}


void __fastcall SkullItem::buildDescriptionId(SkullItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  SkullItem::buildDescriptionId(this, a2, a3);
}


void __fastcall SkullItem::~SkullItem(SkullItem *this)
{
  SkullItem::~SkullItem(this);
}


signed int __fastcall SkullItem::getBlockShape(SkullItem *this)
{
  return 83;
}


int __fastcall SkullItem::SkullItem(int a1, const void **a2, __int16 a3)
{
  int v3; // r4@1

  v3 = a1;
  Item::Item(a1, a2, a3);
  *(_DWORD *)v3 = &off_27036CC;
  Item::setStackedByData((Item *)v3, 1);
  *(_WORD *)(v3 + 30) = 0;
  return v3;
}


void __fastcall SkullItem::getAuxValuesDescription(SkullItem *this)
{
  SkullItem::getAuxValuesDescription(this);
}


int __fastcall SkullItem::getLevelDataForAuxValue(SkullItem *this, int a2)
{
  return a2;
}


signed int __fastcall SkullItem::isValidAuxValue(SkullItem *this, int a2)
{
  signed int result; // r0@1

  result = 0;
  if ( (unsigned int)a2 < 6 )
    result = 1;
  return result;
}
