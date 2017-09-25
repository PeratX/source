

int __fastcall BedItem::_calculateDir(BedItem *this, Entity *a2)
{
  float v7; // r1@1
  int v9; // [sp+0h] [bp-10h]@1

  j_Entity::getRotation((Entity *)&v9, (int)a2);
  __asm
  {
    VLDR            S0, =0.011111
    VMOV.F32        S4, #0.5
    VLDR            S2, [SP,#0x10+var_C]
    VMUL.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VMOV            R0, S0
  }
  return j_mce::Math::floor(_R0, v7) & 3;
}


signed int __fastcall BedItem::isValidAuxValue(BedItem *this, int a2)
{
  signed int result; // r0@1

  result = 0;
  if ( (unsigned int)a2 < 0x10 )
    result = 1;
  return result;
}


int __fastcall BedItem::setIcon(int a1, int **a2, int a3)
{
  int **v3; // r4@1
  int v4; // r5@1
  int *v5; // r4@1

  v3 = a2;
  v4 = a1;
  j_Item::setIcon(a1, a2, a3);
  v5 = j_Item::getTextureItem(v3);
  EntityInteraction::setInteractText((int *)(v4 + 116), v5);
  *(_DWORD *)(v4 + 120) = v5[1];
  j_std::vector<std::vector<TextureUVCoordinateSet,std::allocator<TextureUVCoordinateSet>>,std::allocator<std::vector<TextureUVCoordinateSet,std::allocator<TextureUVCoordinateSet>>>>::operator=(
    v4 + 124,
    (unsigned __int64 *)v5 + 1);
  return v4;
}


void __fastcall BedItem::buildDescriptionId(BedItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  BedItem::buildDescriptionId(this, a2, a3);
}


Item *__fastcall BedItem::~BedItem(BedItem *this)
{
  Item *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_27201C0;
  j_TextureAtlasItem::~TextureAtlasItem((BedItem *)((char *)this + 116));
  return j_j_j__ZN4ItemD2Ev_1(v1);
}


void __fastcall BedItem::buildDescriptionId(BedItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  BedItem *v3; // r4@1
  const ItemInstance *v4; // r6@1
  int v5; // r5@1
  int *v6; // r0@1
  int v7; // r2@1
  const void **v8; // r0@3
  const void **v9; // r0@3
  char *v10; // r0@3
  void *v11; // r0@4
  unsigned int *v12; // r2@6
  signed int v13; // r1@8
  unsigned int *v14; // r2@10
  signed int v15; // r1@12
  int v16; // [sp+4h] [bp-2Ch]@1
  char *v17; // [sp+8h] [bp-28h]@3

  v3 = this;
  v4 = a2;
  v5 = j_ItemInstance::getAuxValue(a3);
  v6 = sub_21E8AF4(&v16, (int *)v4 + 5);
  sub_21E7408((const void **)v6, ".", 1u);
  v7 = 15 - v5;
  if ( (unsigned __int16)v5 > 0xFu )
    v7 = 15;
  v8 = sub_21E72F0((const void **)&v16, (const void **)&DyePowderItem::COLOR_DESCS[v7]);
  v17 = (char *)*v8;
  *v8 = &unk_28898CC;
  v9 = sub_21E7408((const void **)&v17, ".name", 5u);
  *(_DWORD *)v3 = *v9;
  *v9 = &unk_28898CC;
  v10 = v17 - 12;
  if ( (int *)(v17 - 12) != &dword_28898C0 )
  {
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
  }
  v11 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v16 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
}


void __fastcall BedItem::~BedItem(BedItem *this)
{
  Item *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_27201C0;
  j_TextureAtlasItem::~TextureAtlasItem((BedItem *)((char *)this + 116));
  j_Item::~Item(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall BedItem::_useOn(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // r7@1
  int v10; // r6@1
  Entity *v11; // r4@1
  int v12; // r5@1
  int result; // r0@2
  int v14; // [sp+4h] [bp-4Ch]@0
  int v15; // [sp+4h] [bp-4Ch]@1
  int v16; // [sp+8h] [bp-48h]@0
  int v17; // [sp+8h] [bp-48h]@1
  int v18; // [sp+Ch] [bp-44h]@0
  int v19; // [sp+Ch] [bp-44h]@1
  char v20; // [sp+18h] [bp-38h]@3
  int v21; // [sp+24h] [bp-2Ch]@1
  int v22; // [sp+28h] [bp-28h]@1
  int v23; // [sp+2Ch] [bp-24h]@1

  v9 = a4;
  v10 = a1;
  v21 = *(_DWORD *)a4;
  v11 = (Entity *)a3;
  v22 = *(_DWORD *)(a4 + 4);
  v12 = a2;
  v23 = *(_DWORD *)(a4 + 8);
  if ( j_BedItem::_tryUseOn(a1, a2, (Entity *)a3, (int)&v21, 0, v14, v16, v18, a9) )
  {
    result = 1;
  }
  else
    j_BlockPos::relative((BlockPos *)&v20, v9, a5, 1);
    result = j_BedItem::_tryUseOn(v10, v12, v11, (int)&v20, 0, v15, v17, v19, a9);
  return result;
}


int __fastcall BedItem::_tryUseOn(int a1, int a2, Entity *this, int a4, int a5, int a6, int a7, int a8, int a9)
{
  MinecraftEventing *v9; // r10@1
  int v10; // r4@1
  int v11; // r6@1
  int v12; // r0@1
  int v13; // r5@1
  const BlockPos *v14; // r8@1
  int v15; // r7@1
  int v16; // r4@1
  float v21; // r1@1
  int v22; // r0@1
  int v23; // r0@4
  int v24; // r5@9
  BlockState *v25; // r4@9
  float v27; // r1@9
  char v28; // r6@9
  int v29; // r9@9
  int v30; // r11@9
  int v31; // r7@9
  int v32; // r0@9
  int v33; // r7@9
  Material *v34; // r7@11
  Material *v35; // r4@11
  int v36; // r7@12
  int result; // r0@13
  int v38; // r4@17
  BlockState *v39; // r0@19
  char v40; // r0@23
  char v41; // r9@23
  int v42; // r11@23
  int v43; // r0@23
  int v44; // r7@23
  int v45; // r4@23
  char v46; // r0@23
  int v47; // r4@24
  int v48; // r1@24
  Level *v50; // r0@30
  int v51; // r4@31
  int v52; // r4@33
  Level *v53; // r4@36
  const FullBlock *v54; // r2@37
  ItemInstance *v55; // [sp+14h] [bp-A4h]@4
  char v56; // [sp+18h] [bp-A0h]@37
  char v57; // [sp+19h] [bp-9Fh]@37
  char v58; // [sp+1Ch] [bp-9Ch]@36
  char v59; // [sp+28h] [bp-90h]@35
  char v60; // [sp+29h] [bp-8Fh]@35
  char v61; // [sp+2Ch] [bp-8Ch]@35
  char v62; // [sp+2Dh] [bp-8Bh]@35
  char v63; // [sp+30h] [bp-88h]@31
  char v64; // [sp+31h] [bp-87h]@31
  unsigned __int8 v65; // [sp+34h] [bp-84h]@29
  char v66; // [sp+38h] [bp-80h]@29
  char v67; // [sp+39h] [bp-7Fh]@29
  char v68; // [sp+3Ch] [bp-7Ch]@23
  char v69; // [sp+3Dh] [bp-7Bh]@23
  char v70; // [sp+40h] [bp-78h]@23
  char v71; // [sp+41h] [bp-77h]@23
  int v72; // [sp+44h] [bp-74h]@22
  int v73; // [sp+48h] [bp-70h]@22
  int v74; // [sp+4Ch] [bp-6Ch]@22
  int v75; // [sp+50h] [bp-68h]@21
  int v76; // [sp+54h] [bp-64h]@21
  int v77; // [sp+58h] [bp-60h]@21
  unsigned __int8 v78; // [sp+5Ch] [bp-5Ch]@9
  int v79; // [sp+60h] [bp-58h]@1
  int v80; // [sp+64h] [bp-54h]@1
  int v81; // [sp+68h] [bp-50h]@1
  int v82; // [sp+6Ch] [bp-4Ch]@1
  int v83; // [sp+70h] [bp-48h]@1
  int v84; // [sp+74h] [bp-44h]@1
  unsigned __int8 v85; // [sp+78h] [bp-40h]@1

  v9 = this;
  v10 = a4;
  v11 = a2;
  v12 = j_Entity::getRegion(this);
  v13 = *(_DWORD *)v10;
  v14 = (const BlockPos *)v12;
  v82 = *(_DWORD *)v10;
  v15 = *(_DWORD *)(v10 + 4);
  v83 = *(_DWORD *)(v10 + 4);
  v16 = *(_DWORD *)(v10 + 8);
  v84 = v16;
  v79 = 0;
  v80 = 0;
  v81 = 0;
  j_Entity::getRotation((Entity *)&v85, (int)v9);
  __asm
  {
    VLDR            S16, =0.011111
    VMOV.F32        S18, #0.5
    VLDR            S0, [SP,#0xB8+var_3C]
    VMUL.F32        S0, S0, S16
    VADD.F32        S0, S0, S18
    VMOV            R0, S0
  }
  v22 = j_mce::Math::floor(_R0, v21) & 3;
  if ( v22 == 1 )
    v55 = (ItemInstance *)v11;
    v23 = v13 - 1;
    goto LABEL_6;
  if ( v22 == 2 )
    v79 = v13;
    v80 = v15;
    v81 = v16 - 1;
  else
    if ( v22 == 3 )
    {
      v23 = v13 + 1;
      v55 = (ItemInstance *)v11;
LABEL_6:
      v79 = v23;
      v80 = v15;
      v81 = v16;
      goto LABEL_9;
    }
    v81 = v16 + 1;
LABEL_9:
  v24 = Block::mBed;
  v25 = (BlockState *)j_Block::getBlockState(Block::mBed, 12);
  v28 = j_mce::Math::floor(_R0, v27);
  v29 = *(_QWORD *)v25 >> 32;
  v30 = *(_QWORD *)v25;
  j_BlockState::getMask(v25);
  j_BlockSource::getBlockAndData((BlockSource *)&v85, v14, (int)&v82);
  v31 = v85;
  j_BlockSource::getBlockAndData((BlockSource *)&v78, v14, (int)&v79);
  v32 = Block::mBlocks[v31];
  v33 = v78;
  if ( (*(int (**)(void))(*(_DWORD *)v32 + 332))() != 1 )
    return 0;
  if ( (*(int (**)(void))(*(_DWORD *)Block::mBlocks[v33] + 332))() != 1 )
  v34 = (Material *)j_BlockSource::getMaterial(v14, (const BlockPos *)&v82);
  v35 = (Material *)j_BlockSource::getMaterial(v14, (const BlockPos *)&v79);
  if ( j_Material::isReplaceable(v34) == 1 )
    v36 = j_Material::isLiquid(v34);
    v36 = 1;
  if ( j_Material::isReplaceable(v35) == 1 )
    v38 = j_Material::isLiquid(v35);
    v38 = 1;
  v39 = (BlockState *)j_Block::getBlockState(Block::mBed, 18);
  j_BlockState::getMask(v39);
  if ( v36 | v38 )
  v75 = v82;
  v76 = v83 - 1;
  v77 = v84;
  if ( j_BlockSource::canProvideSupport(v14, (int)&v75) != 1 )
  v72 = v79;
  v73 = v80 - 1;
  v74 = v81;
  if ( j_BlockSource::canProvideSupport(v14, (int)&v72) != 1 )
  v40 = v30 + 1 - v29;
  v41 = *(_BYTE *)(v24 + 4);
  v70 = *(_BYTE *)(v24 + 4);
  v42 = (v28 & 3) << v40;
  v71 = v42;
  v43 = j_Block::getBlockState(Block::mBed, 18);
  v44 = *(_DWORD *)v43;
  v45 = *(_DWORD *)(v43 + 4);
  v46 = j_BlockState::getMask((BlockState *)v43);
  v68 = *(_BYTE *)(v24 + 4);
  v69 = v42 & ~v46 | (1 << (v44 + 1 - v45));
  if ( !a9 )
    goto LABEL_29;
  v47 = (*(int (__fastcall **)(int, int *, unsigned __int8 *, char *))(*(_DWORD *)a9 + 8))(a9, &v82, &v85, &v70);
  v48 = (*(int (__fastcall **)(int, int *, unsigned __int8 *, char *))(*(_DWORD *)a9 + 8))(a9, &v79, &v78, &v68);
  _ZF = v47 == 0;
  result = 0;
  if ( !v47 )
    _ZF = v48 == 0;
  if ( _ZF )
    v41 = v70;
    LOBYTE(v42) = v71;
LABEL_29:
    v66 = v41;
    v67 = v42;
    j_BlockSource::setBlockAndData((int)v14, (BlockPos *)&v82, (int)&v66, 4, (int)v9);
    j_BlockSource::getBlockID((BlockSource *)&v65, v14, (int)&v82);
    if ( v65 == *(_BYTE *)(v24 + 4) )
      v50 = (Level *)j_BlockSource::getLevel(v14);
      if ( !j_Level::isClientSide(v50) )
      {
        v63 = v68;
        v64 = v69;
        j_BlockSource::setBlockAndData((int)v14, (BlockPos *)&v79, (int)&v63, 4, (int)v9);
        j_BlockSource::updateNeighborsAt(v14, (const BlockPos *)&v82);
        v51 = j_BlockSource::getBlockEntity(v14, (const BlockPos *)&v82);
        if ( v51 )
        {
          *(_DWORD *)(v51 + 104) = j_ItemInstance::getAuxValue(v55);
          j_BlockEntity::setChanged((BlockEntity *)v51);
        }
        v52 = j_BlockSource::getBlockEntity(v14, (const BlockPos *)&v79);
        if ( v52 )
          *(_DWORD *)(v52 + 104) = j_ItemInstance::getAuxValue(v55);
          j_BlockEntity::setChanged((BlockEntity *)v52);
        v61 = v70;
        v62 = v71;
        j_BlockSource::setBlockAndData((int)v14, (BlockPos *)&v82, (int)&v61, 19, (int)v9);
        v59 = v68;
        v60 = v69;
        j_BlockSource::setBlockAndData((int)v14, (BlockPos *)&v79, (int)&v59, 19, (int)v9);
      }
    v53 = (Level *)j_BlockSource::getLevel(v14);
    j_Vec3::Vec3((int)&v58, (int)&v79);
    j_Level::broadcastSoundEvent(v53, (int)v14, 6, (int)&v58, *(_BYTE *)(v24 + 4), 1, 0, 0);
    if ( j_Entity::hasCategory((int)v9, 1) == 1 )
      v56 = v70;
      v57 = j_ItemInstance::getAuxValue(v55);
      j_MinecraftEventing::fireEventBlockPlaced(v9, (Player *)&v56, v54);
    (*(void (__fastcall **)(MinecraftEventing *, ItemInstance *))(*(_DWORD *)v9 + 612))(v9, v55);
    if ( a9 )
      (*(void (__fastcall **)(int, int *, unsigned __int8 *, char *))(*(_DWORD *)a9 + 12))(a9, &v82, &v85, &v70);
      (*(void (__fastcall **)(int, int *, unsigned __int8 *, char *))(*(_DWORD *)a9 + 12))(a9, &v79, &v78, &v68);
    result = 1;
  return result;
}


int __fastcall BedItem::getIcon(BedItem *this, int a2, int a3, bool a4)
{
  int v4; // r0@1
  __int64 *v5; // r2@1
  __int64 v6; // kr00_8@1
  __int64 v7; // r0@2

  v6 = *(_QWORD *)((char *)this + 124);
  v4 = *(_QWORD *)((char *)this + 124) >> 32;
  v5 = (__int64 *)v6;
  if ( v4 == (_DWORD)v6 )
  {
    LODWORD(v7) = &Item::mInvalidTextureUVCoordinateSet;
  }
  else
    if ( -1431655765 * ((v4 - (signed int)v6) >> 2) > a2 )
      v5 = (__int64 *)(v6 + 12 * a2);
    v7 = *v5;
    if ( (_DWORD)v7 == HIDWORD(v7) )
      LODWORD(v7) = &Item::mInvalidTextureUVCoordinateSet;
  return v7;
}


int __fastcall BedItem::_calculateHeadAndFeetPos(BedItem *this, Entity *a2, BlockPos *a3, BlockPos *a4)
{
  BlockPos *v4; // r4@1
  BlockPos *v5; // r5@1
  float v11; // r1@1
  int v12; // r0@1
  int v13; // r2@4
  __int64 v14; // r0@4
  int v16; // [sp+0h] [bp-18h]@1

  v4 = a4;
  v5 = a3;
  j_Entity::getRotation((Entity *)&v16, (int)a2);
  __asm
  {
    VLDR            S0, =0.011111
    VMOV.F32        S4, #0.5
    VLDR            S2, [SP,#0x18+var_14]
    VMUL.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VMOV            R0, S0
  }
  v12 = j_mce::Math::floor(_R0, v11) & 3;
  switch ( v12 )
    case 1:
      HIDWORD(v14) = *((_DWORD *)v5 + 1);
      v13 = *((_DWORD *)v5 + 2);
      LODWORD(v14) = *(_DWORD *)v5 - 1;
      break;
    case 2:
      v14 = *(_QWORD *)v5;
      v13 = *((_DWORD *)v5 + 2) - 1;
    case 3:
      LODWORD(v14) = *(_DWORD *)v5 + 1;
    default:
      v13 = *((_DWORD *)v5 + 2) + 1;
  *(_QWORD *)v4 = v14;
  *((_DWORD *)v4 + 2) = v13;
  return v14;
}


void __fastcall BedItem::~BedItem(BedItem *this)
{
  BedItem::~BedItem(this);
}


signed int __fastcall BedItem::_checkUseOnPermissions(BedItem *this, Entity *a2, ItemInstance *a3, const signed __int8 *a4, const BlockPos *a5)
{
  Entity *v5; // r4@1
  const signed __int8 *v6; // r10@1
  ItemInstance *v7; // r8@1
  BlockSource *v8; // r9@1
  int v9; // r7@1
  int v10; // r6@1
  int v11; // r5@1
  float v17; // r1@1
  int v18; // r0@1
  int v19; // r0@4
  int v20; // r5@9
  signed int result; // r0@12
  int v22; // [sp+8h] [bp-40h]@1
  int v23; // [sp+Ch] [bp-3Ch]@1
  int v24; // [sp+10h] [bp-38h]@1
  int v25; // [sp+14h] [bp-34h]@1
  int v26; // [sp+18h] [bp-30h]@1
  int v27; // [sp+1Ch] [bp-2Ch]@1
  char v28; // [sp+20h] [bp-28h]@1

  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = (BlockSource *)j_Entity::getRegion(a2);
  v9 = *(_DWORD *)a5;
  v25 = *(_DWORD *)a5;
  v10 = *((_DWORD *)a5 + 1);
  v26 = *((_DWORD *)a5 + 1);
  v11 = *((_DWORD *)a5 + 2);
  v27 = *((_DWORD *)a5 + 2);
  v22 = 0;
  v23 = 0;
  v24 = 0;
  j_Entity::getRotation((Entity *)&v28, (int)v5);
  __asm
  {
    VLDR            S0, =0.011111
    VMOV.F32        S4, #0.5
    VLDR            S2, [SP,#0x48+var_24]
    VMUL.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VMOV            R0, S0
  }
  v18 = j_mce::Math::floor(_R0, v17) & 3;
  if ( v18 == 1 )
    v19 = v9 - 1;
    goto LABEL_6;
  if ( v18 == 2 )
    v22 = v9;
    v23 = v10;
    v24 = v11 - 1;
  else
    if ( v18 == 3 )
    {
      v19 = v9 + 1;
LABEL_6:
      v22 = v19;
      v23 = v10;
      v24 = v11;
      goto LABEL_9;
    }
    v24 = v11 + 1;
LABEL_9:
  v20 = Item::mGenerateDenyParticleEffect[0];
  if ( j_BlockSource::checkBlockPermissions(
         v8,
         v5,
         (const BlockPos *)&v25,
         *v6,
         v7,
         Item::mGenerateDenyParticleEffect[0]) == 1 )
    if ( Item::mGenerateDenyParticleEffect[0] )
      v20 = 1;
    result = j_BlockSource::checkBlockPermissions(v8, v5, (const BlockPos *)&v22, *v6, v7, v20);
    result = 0;
  return result;
}
