

Item *__fastcall DyePowderItem::~DyePowderItem(DyePowderItem *this)
{
  Item *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_2701440;
  TextureAtlasItem::~TextureAtlasItem((DyePowderItem *)((char *)this + 116));
  return j_j_j__ZN4ItemD2Ev_0(v1);
}


void __fastcall DyePowderItem::buildDescriptionId(DyePowderItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  DyePowderItem *v3; // r4@1
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
  v5 = ItemInstance::getAuxValue(a3);
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


int __fastcall DyePowderItem::getIcon(DyePowderItem *this, int a2, int a3, bool a4)
{
  int v4; // r2@1
  int v5; // r0@3

  v4 = a2;
  if ( a2 <= 0 )
    v4 = 0;
  v5 = *((_DWORD *)this + 31);
  if ( a2 > 15 )
    v4 = 15;
  return *(_DWORD *)(v5 + 12 * v4);
}


void __fastcall DyePowderItem::~DyePowderItem(DyePowderItem *this)
{
  DyePowderItem::~DyePowderItem(this);
}


void __fastcall DyePowderItem::buildDescriptionId(DyePowderItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  DyePowderItem::buildDescriptionId(this, a2, a3);
}


int __fastcall DyePowderItem::DyePowderItem(int a1, const void **a2, __int16 a3)
{
  int v3; // r4@1

  v3 = a1;
  Item::Item(a1, a2, a3);
  *(_DWORD *)v3 = &off_2701440;
  *(_DWORD *)(v3 + 116) = &unk_28898CC;
  *(_DWORD *)(v3 + 120) = 0;
  *(_DWORD *)(v3 + 124) = 0;
  *(_DWORD *)(v3 + 128) = 0;
  *(_DWORD *)(v3 + 132) = 0;
  Item::setStackedByData((Item *)v3, 1);
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v3 + 28))(v3, 0);
  *(_BYTE *)(v3 + 43) = 1;
  return v3;
}


signed int __fastcall DyePowderItem::dispense(DyePowderItem *this, BlockSource *a2, Container *a3, int a4, const Vec3 *a5, signed __int8 a6)
{
  Container *v6; // r5@1
  int v7; // r4@1
  BlockSource *v8; // r6@1
  int v9; // r0@1
  ItemInstance *v10; // r0@1
  int v11; // r0@2
  Player *v12; // r7@3
  __int64 v13; // r2@3
  Player *v14; // r6@3
  signed int v15; // r4@4
  Player *v16; // r4@5
  __int64 v17; // r2@5
  char v19; // [sp+8h] [bp-90h]@5
  char v20; // [sp+14h] [bp-84h]@3
  char v21; // [sp+20h] [bp-78h]@3
  char v22; // [sp+2Ch] [bp-6Ch]@2
  char v23; // [sp+38h] [bp-60h]@1
  int v24; // [sp+40h] [bp-58h]@11
  void *v25; // [sp+5Ch] [bp-3Ch]@9
  void *ptr; // [sp+6Ch] [bp-2Ch]@7

  v6 = a3;
  v7 = a4;
  v8 = a2;
  v9 = (*(int (__fastcall **)(Container *, int))(*(_DWORD *)a3 + 16))(a3, a4);
  v10 = ItemInstance::ItemInstance((ItemInstance *)&v23, v9);
  if ( (unsigned __int16)ItemInstance::getAuxValue(v10) == 15 )
  {
    BlockPos::BlockPos((int)&v22, (int)a5);
    v11 = BlockSource::getBlock(v8, (const BlockPos *)&v22);
    if ( (*(int (__cdecl **)(int))(*(_DWORD *)v11 + 204))(v11) == 1 )
    {
      v12 = (Player *)BlockSource::getLevel(v8);
      Vec3::Vec3((int)&v21, (int)&v22);
      LODWORD(v13) = &v21;
      HIDWORD(v13) = 1000;
      Level::broadcastLevelEvent(v12, 1000, v13, 0);
      v14 = (Player *)BlockSource::getLevel(v8);
      Vec3::Vec3((int)&v20, (int)&v22);
      Level::broadcastLevelEvent(v14, 2005, (unsigned int)&v20, 0);
      ItemInstance::remove((ItemInstance *)&v23, 1);
      (*(void (__fastcall **)(Container *, int, char *))(*(_DWORD *)v6 + 32))(v6, v7, &v23);
    }
    else
      v16 = (Player *)BlockSource::getLevel(v8);
      Vec3::Vec3((int)&v19, (int)&v22);
      LODWORD(v17) = &v19;
      HIDWORD(v17) = 1200;
      Level::broadcastLevelEvent(v16, 1001, v17, 0);
    v15 = 1;
  }
  else
    v15 = 0;
  if ( ptr )
    operator delete(ptr);
  if ( v25 )
    operator delete(v25);
  if ( v24 )
    (*(void (**)(void))(*(_DWORD *)v24 + 4))();
  return v15;
}


signed int __fastcall DyePowderItem::isDye(DyePowderItem *this)
{
  return 1;
}


void __fastcall DyePowderItem::~DyePowderItem(DyePowderItem *this)
{
  Item *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_2701440;
  TextureAtlasItem::~TextureAtlasItem((DyePowderItem *)((char *)this + 116));
  Item::~Item(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall DyePowderItem::setIcon(int a1, int **a2, int a3)
{
  int v3; // r4@1
  int *v4; // r5@1
  void *v5; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-1Ch]@1

  v3 = a1;
  Item::setIcon(a1, a2, a3);
  sub_21E94B4((void **)&v9, "dye_powder");
  v4 = Item::getTextureItem((int **)&v9);
  EntityInteraction::setInteractText((int *)(v3 + 116), v4);
  *(_DWORD *)(v3 + 120) = v4[1];
  std::vector<std::vector<TextureUVCoordinateSet,std::allocator<TextureUVCoordinateSet>>,std::allocator<std::vector<TextureUVCoordinateSet,std::allocator<TextureUVCoordinateSet>>>>::operator=(
    v3 + 124,
    (unsigned __int64 *)v4 + 1);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  return v3;
}


int __fastcall DyePowderItem::_useOn(int a1, int a2, Entity *this, int a4, int a5, float a6, float a7, float a8, int a9)
{
  Entity *v9; // r11@1
  int v10; // r6@1
  ItemInstance *v11; // r10@1
  const BlockPos *v12; // r7@1
  int v13; // r4@2
  int v14; // r0@2
  Level *v15; // r0@4
  Player *v16; // r4@7
  int result; // r0@8
  int v18; // r0@15
  char v23; // r0@19
  char v24; // r1@19
  char v25; // [sp+8h] [bp-48h]@22
  char v26; // [sp+9h] [bp-47h]@22
  char v27; // [sp+Ch] [bp-44h]@19
  char v28; // [sp+Dh] [bp-43h]@19
  char v29; // [sp+1Ch] [bp-34h]@7
  RotatedPillarBlock *v30; // [sp+28h] [bp-28h]@1

  v9 = this;
  v10 = a4;
  v11 = (ItemInstance *)a2;
  v12 = (const BlockPos *)Entity::getRegion(this);
  BlockSource::getBlockAndData((BlockSource *)&v30, v12, v10);
  if ( (unsigned __int16)ItemInstance::getAuxValue(v11) == 15 )
  {
    v13 = (unsigned __int8)v30;
    v14 = Block::mBlocks[(unsigned __int8)v30];
    if ( v14 && (*(int (__cdecl **)(int))(*(_DWORD *)v14 + 204))(v14) == 1 )
    {
      v15 = (Level *)Entity::getLevel(v9);
      if ( !Level::isClientSide(v15)
        && (*(int (__cdecl **)(_DWORD))(*(_DWORD *)Block::mBlocks[v13] + 208))(Block::mBlocks[v13]) == 1 )
      {
        (*(void (__fastcall **)(Entity *, ItemInstance *))(*(_DWORD *)v9 + 612))(v9, v11);
      }
      v16 = (Player *)BlockSource::getLevel(v12);
      Vec3::Vec3((int)&v29, v10);
      Level::broadcastLevelEvent(v16, 2005, (unsigned int)&v29, 0);
      return 1;
    }
  }
  else if ( (unsigned __int16)ItemInstance::getAuxValue(v11) == 3
         && (unsigned __int8)v30 == *(_BYTE *)(Block::mLog + 4)
         && RotatedPillarBlock::getType((RotatedPillarBlock *)BYTE1(v30), (unsigned __int8)v30) == 3 )
    result = 0;
    switch ( a5 )
      case 2:
        --*(_DWORD *)(v10 + 8);
        goto def_17E5FD2;
      case 3:
        ++*(_DWORD *)(v10 + 8);
      case 4:
        v18 = *(_DWORD *)v10 - 1;
        goto LABEL_17;
      case 5:
        v18 = *(_DWORD *)v10 + 1;
LABEL_17:
        *(_DWORD *)v10 = v18;
      case 0:
      case 1:
        return result;
      default:
def_17E5FD2:
        if ( BlockSource::isEmptyBlock(v12, (const BlockPos *)v10) != 1 )
          return 1;
        __asm
        {
          VLDR            S0, [SP,#0x50+arg_C]
          VLDR            S2, [SP,#0x50+arg_8]
          VLDR            S4, [SP,#0x50+arg_4]
          VSTR            S4, [SP,#0x50+var_40]
          VSTR            S2, [SP,#0x50+var_3C]
          VSTR            S0, [SP,#0x50+var_38]
        }
        v23 = (*(int (__cdecl **)(_DWORD, Entity *))(*(_DWORD *)Block::mCocoa + 296))(Block::mCocoa, v9);
        v24 = *(_BYTE *)(Block::mCocoa + 4);
        v27 = *(_BYTE *)(Block::mCocoa + 4);
        v28 = v23;
        if ( a9 )
          if ( (*(int (__fastcall **)(int, int, _DWORD *, char *))(*(_DWORD *)a9 + 8))(a9, v10, &FullBlock::AIR, &v27) )
            return 0;
          v25 = v27;
          v26 = v28;
          BlockSource::setBlockAndData((int)v12, (BlockPos *)v10, (int)&v25, 3, (int)v9);
          (*(void (__fastcall **)(int, int, _DWORD *, char *))(*(_DWORD *)a9 + 12))(a9, v10, &FullBlock::AIR, &v27);
        else
          v25 = v24;
          v26 = v23;
        break;
    return 1;
  return 0;
}
