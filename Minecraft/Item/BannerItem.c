

void __fastcall BannerItem::buildDescriptionId(BannerItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  BannerItem::buildDescriptionId(this, a2, a3);
}


int __fastcall BannerItem::BannerItem(int a1, const void **a2, __int16 a3)
{
  int v3; // r4@1

  v3 = a1;
  j_Item::Item(a1, a2, a3);
  *(_DWORD *)v3 = &off_27200A4;
  *(_BYTE *)(v3 + 4) = 16;
  j_Item::setStackedByData((Item *)v3, 1);
  return v3;
}


void __fastcall BannerItem::~BannerItem(BannerItem *this)
{
  BannerItem::~BannerItem(this);
}


signed int __fastcall BannerItem::_useOn(int a1, const ItemInstance *a2, int a3, int a4, int a5)
{
  Entity *v5; // r7@1
  const ItemInstance *v6; // r8@1
  int v7; // r5@1
  signed int v8; // r1@1
  signed int result; // r0@1
  BlockSource *v10; // r0@3
  BlockSource *v11; // r10@3
  Material *v12; // r0@3
  int v13; // r0@9
  char v14; // r9@14
  float v20; // r1@14
  char v21; // r11@14
  BlockState *v22; // r0@14
  __int64 v23; // r6@14
  int v24; // r4@14
  BlockState *v25; // r0@16
  int v26; // r7@16
  int v27; // r9@16
  BannerBlockEntity *v28; // r7@17
  char v29; // [sp+8h] [bp-38h]@18
  char v30; // [sp+9h] [bp-37h]@18
  char v31; // [sp+Ch] [bp-34h]@16
  char v32; // [sp+Dh] [bp-33h]@16
  char v33; // [sp+10h] [bp-30h]@14
  char v34; // [sp+11h] [bp-2Fh]@14
  char v35; // [sp+14h] [bp-2Ch]@14

  v5 = (Entity *)a3;
  v6 = a2;
  v7 = a4;
  v8 = j_Entity::hasType(a3, 319);
  result = 0;
  if ( (_BYTE)a5 && !(v8 ^ 1) )
  {
    v10 = (BlockSource *)j_Entity::getRegion(v5);
    v11 = v10;
    v12 = (Material *)j_BlockSource::getMaterial(v10, (const BlockPos *)v7);
    if ( j_Material::isSolid(v12) != 1 )
      goto LABEL_22;
    if ( (unsigned __int8)a5 == 1 )
    {
      ++*(_DWORD *)(v7 + 4);
    }
    else
      switch ( a5 )
      {
        case 2:
          --*(_DWORD *)(v7 + 8);
          break;
        case 3:
          ++*(_DWORD *)(v7 + 8);
        case 4:
          v13 = *(_DWORD *)v7 - 1;
          goto LABEL_11;
        case 5:
          v13 = *(_DWORD *)v7 + 1;
LABEL_11:
          *(_DWORD *)v7 = v13;
        default:
      }
    if ( (*(int (**)(void))(*(_DWORD *)Block::mStandingBanner + 224))() != 1 )
LABEL_22:
      result = 0;
      if ( (unsigned __int8)a5 == 1 )
        v14 = *(_BYTE *)(Block::mStandingBanner + 4);
        j_Entity::getRotation((Entity *)&v35, (int)v5);
        __asm
        {
          VLDR            S0, =180.0
          VMOV.F32        S4, #0.5
          VLDR            S2, [SP,#0x40+var_28]
          VADD.F32        S0, S2, S0
          VLDR            S2, =0.044444
          VMUL.F32        S0, S0, S2
          VADD.F32        S0, S0, S4
          VMOV            R0, S0
        }
        v21 = j_mce::Math::floor(_R0, v20);
        v22 = (BlockState *)j_Block::getBlockState(Block::mStandingBanner, 15);
        v23 = *(_QWORD *)v22;
        j_BlockState::getMask(v22);
        v33 = *(_BYTE *)(Block::mStandingBanner + 4);
        v24 = (v21 & 0xF) << (v23 + 1 - BYTE4(v23));
        v34 = v24;
        j_BlockSource::setBlockAndData((int)v11, (BlockPos *)v7, (int)&v33, 4, 0);
      else
        v25 = (BlockState *)j_Block::getBlockState(Block::mWallBanner, 15);
        v27 = *(_QWORD *)v25 >> 32;
        v26 = *(_QWORD *)v25;
        j_BlockState::getMask(v25);
        v31 = *(_BYTE *)(Block::mWallBanner + 4);
        v24 = a5 << (v26 + 1 - v27);
        v32 = a5 << (v26 + 1 - v27);
        j_BlockSource::setBlockAndData((int)v11, (BlockPos *)v7, (int)&v31, 4, 0);
        v14 = *(_BYTE *)(Block::mWallBanner + 4);
      v28 = (BannerBlockEntity *)j_BlockSource::getBlockEntity(v11, (const BlockPos *)v7);
      if ( *(_DWORD *)j_BlockEntity::getType(v28) == 28 )
        j_BannerBlockEntity::setItemValues(v28, v6);
        v29 = v14;
        v30 = v24;
        j_BlockSource::setBlockAndData((int)v11, (BlockPos *)v7, (int)&v29, 19, 0);
      j_ItemInstance::add(v6, -1);
      result = 1;
  }
  return result;
}


int __fastcall BannerItem::appendFormattedHovertext(int a1, ItemInstance *this, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  ItemInstance *v9; // r5@1
  int result; // r0@1
  int v11; // r5@2
  ListTag *v12; // r10@2
  void *v13; // r0@2
  void **v14; // r8@4
  int v15; // r5@4
  unsigned int *v16; // r2@5
  signed int v17; // r1@7
  unsigned int *v18; // r2@9
  signed int v19; // r1@11
  unsigned int *v20; // r2@13
  signed int v21; // r1@15
  unsigned int *v22; // r2@17
  signed int v23; // r1@19
  unsigned int *v24; // r2@21
  signed int v25; // r1@23
  unsigned int *v26; // r2@25
  signed int v27; // r1@27
  int v28; // r7@53
  const void **v29; // r0@53
  int v30; // r11@53
  void *v31; // r0@53
  int v32; // r8@54
  void *v33; // r0@54
  const void **v34; // r7@55
  const void **v35; // r0@55
  const void **v36; // r0@55
  void *v37; // r0@55
  char *v38; // r0@56
  char *v39; // r0@57
  char *v40; // r0@58
  unsigned int *v41; // r2@61
  signed int v42; // r1@63
  int v43; // [sp+4h] [bp-64h]@0
  int v44; // [sp+8h] [bp-60h]@0
  void *v45; // [sp+Ch] [bp-5Ch]@0
  int v46; // [sp+10h] [bp-58h]@0
  int v47; // [sp+10h] [bp-58h]@53
  const void **v48; // [sp+14h] [bp-54h]@1
  char *v49; // [sp+18h] [bp-50h]@1
  char *v50; // [sp+1Ch] [bp-4Ch]@1
  char *v51; // [sp+20h] [bp-48h]@1
  int v52; // [sp+24h] [bp-44h]@1
  int v53; // [sp+28h] [bp-40h]@1
  int v54; // [sp+2Ch] [bp-3Ch]@1
  int v55; // [sp+30h] [bp-38h]@1
  int v56; // [sp+34h] [bp-34h]@1
  int v57; // [sp+3Ch] [bp-2Ch]@2

  v9 = this;
  j_Item::appendFormattedHovertext(
    a1,
    this,
    a3,
    a4,
    a5,
    v43,
    v44,
    v45,
    v46,
    (int)v49,
    (int)v50,
    (int)v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  result = j_ItemInstance::hasUserData(v9);
  if ( result == 1 )
  {
    v11 = *(_DWORD *)j_ItemInstance::getUserData(v9);
    sub_21E94B4((void **)&v57, "Patterns");
    v12 = (ListTag *)j_CompoundTag::getList(v11, (const void **)&v57);
    v13 = (void *)(v57 - 12);
    if ( (int *)(v57 - 12) != &dword_28898C0 )
    {
      v41 = (unsigned int *)(v57 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
      }
      else
        v42 = (*v41)--;
      if ( v42 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    }
    result = j_ListTag::size(v12);
    if ( result >= 1 )
      v14 = (void **)&v54;
      v15 = 0;
      do
        v28 = j_ListTag::get(v12, v15);
        sub_21E94B4((void **)&v56, "Pattern");
        v29 = j_CompoundTag::getString(v28, (const void **)&v56);
        v30 = j_BannerPattern::getPatternIndexFromNameID(v29);
        v47 = v15;
        v31 = (void *)(v56 - 12);
        if ( (int *)(v56 - 12) != &dword_28898C0 )
        {
          v16 = (unsigned int *)(v56 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v17 = __ldrex(v16);
            while ( __strex(v17 - 1, v16) );
          }
          else
            v17 = (*v16)--;
          if ( v17 <= 0 )
            j_j_j_j__ZdlPv_9(v31);
        }
        sub_21E94B4(v14, "Color");
        v32 = j_CompoundTag::getInt(v28, (const void **)v14);
        v33 = (void *)(v54 - 12);
        if ( (int *)(v54 - 12) != &dword_28898C0 )
          v18 = (unsigned int *)(v54 - 4);
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
            v19 = (*v18)--;
          if ( v19 <= 0 )
            j_j_j_j__ZdlPv_9(v33);
        sub_21E7408(v48, "\n", 1u);
        v34 = (const void **)j_BannerPattern::getName(*(BannerPattern **)(BannerPattern::mPatterns + 4 * v30));
        v49 = (char *)&unk_28898CC;
        sub_21E6FCC((const void **)&v49, *((_DWORD *)*v34 - 3) + 12);
        sub_21E7408((const void **)&v49, "item.banner.", 0xCu);
        sub_21E72F0((const void **)&v49, v34);
        v35 = sub_21E7408((const void **)&v49, ".", 1u);
        v50 = (char *)*v35;
        *v35 = &unk_28898CC;
        v36 = sub_21E72F0((const void **)&v50, (const void **)&DyePowderItem::COLOR_DESCS[v32]);
        v51 = (char *)*v36;
        *v36 = &unk_28898CC;
        j_I18n::get(&v52, (int **)&v51);
        sub_21E72F0(v48, (const void **)&v52);
        v14 = (void **)&v54;
        v37 = (void *)(v52 - 12);
        if ( (int *)(v52 - 12) != &dword_28898C0 )
          v20 = (unsigned int *)(v52 - 4);
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
            v21 = (*v20)--;
          if ( v21 <= 0 )
            j_j_j_j__ZdlPv_9(v37);
        v38 = v51 - 12;
        if ( (int *)(v51 - 12) != &dword_28898C0 )
          v22 = (unsigned int *)(v51 - 4);
              v23 = __ldrex(v22);
            while ( __strex(v23 - 1, v22) );
            v23 = (*v22)--;
          if ( v23 <= 0 )
            j_j_j_j__ZdlPv_9(v38);
        v39 = v50 - 12;
        if ( (int *)(v50 - 12) != &dword_28898C0 )
          v24 = (unsigned int *)(v50 - 4);
              v25 = __ldrex(v24);
            while ( __strex(v25 - 1, v24) );
            v25 = (*v24)--;
          if ( v25 <= 0 )
            j_j_j_j__ZdlPv_9(v39);
        v40 = v49 - 12;
        if ( (int *)(v49 - 12) != &dword_28898C0 )
          v26 = (unsigned int *)(v49 - 4);
              v27 = __ldrex(v26);
            while ( __strex(v27 - 1, v26) );
            v27 = (*v26)--;
          if ( v27 <= 0 )
            j_j_j_j__ZdlPv_9(v40);
        ++v15;
        result = j_ListTag::size(v12);
      while ( v47 + 1 < result );
  }
  return result;
}


signed int __fastcall BannerItem::isValidAuxValue(BannerItem *this, int a2)
{
  signed int result; // r0@1

  result = 0;
  if ( (unsigned int)a2 < 0x10 )
    result = 1;
  return result;
}


void __fastcall BannerItem::buildDescriptionId(BannerItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  BannerItem *v3; // r4@1
  const ItemInstance *v4; // r6@1
  int v5; // r5@1
  int *v6; // r0@1
  signed int v7; // r1@1
  const void **v8; // r0@5
  const void **v9; // r0@5
  char *v10; // r0@5
  void *v11; // r0@6
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  unsigned int *v14; // r2@12
  signed int v15; // r1@14
  int v16; // [sp+4h] [bp-2Ch]@1
  char *v17; // [sp+8h] [bp-28h]@5

  v3 = this;
  v4 = a2;
  v5 = j_ItemInstance::getAuxValue(a3);
  v6 = sub_21E8AF4(&v16, (int *)v4 + 5);
  sub_21E7408((const void **)v6, ".", 1u);
  v7 = v5;
  if ( v5 <= 0 )
    v7 = 0;
  if ( v5 > 15 )
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


void __fastcall BannerItem::~BannerItem(BannerItem *this)
{
  Item *v1; // r0@1

  v1 = j_Item::~Item(this);
  j_j_j__ZdlPv_7((void *)v1);
}
