

signed int __fastcall BannerBlock::checkIsPathable(BannerBlock *this, Entity *a2, const BlockPos *a3, const BlockPos *a4)
{
  return 1;
}


BlockEntity *__fastcall BannerBlock::onRemove(BannerBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  Block *v4; // r6@1
  const BlockPos *v5; // r4@1
  Level *v6; // r0@1
  BlockEntity *result; // r0@1
  BannerBlockEntity *v8; // r7@2
  BannerBlockEntity *v9; // r1@3
  int v10; // [sp+0h] [bp-60h]@4
  BlockEntity *v11; // [sp+8h] [bp-58h]@8
  void *v12; // [sp+24h] [bp-3Ch]@6
  void *ptr; // [sp+34h] [bp-2Ch]@4

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (Level *)j_BlockSource::getLevel(a2);
  result = (BlockEntity *)j_Level::isClientSide(v6);
  if ( !result )
  {
    result = (BlockEntity *)j_BlockSource::getBlockEntity(v3, v5);
    v8 = result;
    if ( result )
    {
      result = *(BlockEntity **)j_BlockEntity::getType(result);
      if ( result == (BlockEntity *)28 )
      {
        j_BannerBlock::_itemInstanceFromBlockEntity((BannerBlock *)&v10, v9, v8);
        j_Block::popResource(v4, v3, v5, (const ItemInstance *)&v10);
        if ( ptr )
          j_operator delete(ptr);
        if ( v12 )
          j_operator delete(v12);
        result = v11;
        if ( v11 )
          result = (BlockEntity *)(*(int (**)(void))(*(_DWORD *)v11 + 4))();
      }
    }
  }
  return result;
}


_DWORD *__fastcall BannerBlock::getAABB(BannerBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, int a6, int a7)
{
  const BlockPos *v7; // r5@1
  AABB *v8; // r4@1
  int v9; // r0@2
  _DWORD *result; // r0@2
  char v11; // [sp+4h] [bp-1Ch]@2

  v7 = a3;
  v8 = a4;
  if ( a6 == 1 )
  {
    v9 = (*(int (__cdecl **)(BannerBlock *))(*(_DWORD *)this + 416))(this);
    *(_DWORD *)v8 = *(_DWORD *)v9;
    *((_DWORD *)v8 + 1) = *(_DWORD *)(v9 + 4);
    *((_DWORD *)v8 + 2) = *(_DWORD *)(v9 + 8);
    *((_DWORD *)v8 + 3) = *(_DWORD *)(v9 + 12);
    *((_DWORD *)v8 + 4) = *(_DWORD *)(v9 + 16);
    *((_DWORD *)v8 + 5) = *(_DWORD *)(v9 + 20);
    *((_BYTE *)v8 + 24) = *(_BYTE *)(v9 + 24);
    j_Vec3::Vec3((int)&v11, (int)v7);
    result = (_DWORD *)j_AABB::move(v8, (const Vec3 *)&v11);
  }
  else
    result = &AABB::EMPTY;
  return result;
}


CompoundTag *__fastcall BannerBlock::_itemInstanceFromBlockEntity(BannerBlock *this, BannerBlockEntity *a2, BannerBlockEntity *a3)
{
  ItemInstance *v3; // r4@1
  BannerBlockEntity *v4; // r5@1
  int v5; // r6@1
  int v6; // r0@1
  void *v7; // r0@1
  void *v8; // r0@2
  void *v9; // r0@3
  void *v10; // r0@4
  void *v11; // r0@5
  unsigned int *v13; // r2@11
  signed int v14; // r1@13
  unsigned int *v15; // r2@15
  signed int v16; // r1@17
  unsigned int *v17; // r2@19
  signed int v18; // r1@21
  unsigned int *v19; // r2@23
  signed int v20; // r1@25
  unsigned int *v21; // r2@27
  signed int v22; // r1@29
  int v23; // [sp+4h] [bp-5Ch]@7
  int v24; // [sp+Ch] [bp-54h]@5
  int v25; // [sp+14h] [bp-4Ch]@4
  int v26; // [sp+1Ch] [bp-44h]@3
  int v27; // [sp+24h] [bp-3Ch]@2
  int v28; // [sp+2Ch] [bp-34h]@1
  char v29; // [sp+30h] [bp-30h]@1

  v3 = this;
  v4 = a3;
  v5 = Item::mBanner;
  v6 = j_BannerBlockEntity::getBaseColorInt(a3);
  j_ItemInstance::ItemInstance(v3, v5, 1, v6);
  j_CompoundTag::CompoundTag((int)&v29);
  (*(void (__fastcall **)(BannerBlockEntity *, char *))(*(_DWORD *)v4 + 12))(v4, &v29);
  sub_21E94B4((void **)&v28, "x");
  j_CompoundTag::remove((int)&v29, (const void **)&v28);
  v7 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v28 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
  }
  sub_21E94B4((void **)&v27, "y");
  j_CompoundTag::remove((int)&v29, (const void **)&v27);
  v8 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v27 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v26, (const char *)&aRtuz[3]);
  j_CompoundTag::remove((int)&v29, (const void **)&v26);
  v9 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v26 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v25, "id");
  j_CompoundTag::remove((int)&v29, (const void **)&v25);
  v10 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v25 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v24, "isMovable");
  j_CompoundTag::remove((int)&v29, (const void **)&v24);
  v11 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v24 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  j_CompoundTag::remove((int)&v29, (const void **)&BannerBlockEntity::TAG_BASE_COLOR);
  if ( !j_CompoundTag::isEmpty((CompoundTag *)&v29) )
    j_CompoundTag::clone((CompoundTag *)&v23, (int)&v29);
    j_ItemInstance::setUserData((int)v3, &v23);
    if ( v23 )
      (*(void (**)(void))(*(_DWORD *)v23 + 4))();
    v23 = 0;
  return j_CompoundTag::~CompoundTag((CompoundTag *)&v29);
}


CompoundTag *__fastcall BannerBlock::asItemInstance(BannerBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  BannerBlock *v4; // r4@1
  BlockEntity *v5; // r0@1
  BannerBlockEntity *v6; // r5@1
  BannerBlockEntity *v7; // r1@2
  CompoundTag *result; // r0@3

  v4 = this;
  v5 = (BlockEntity *)j_BlockSource::getBlockEntity(a3, (const BlockPos *)a4);
  v6 = v5;
  if ( v5 && *(_DWORD *)j_BlockEntity::getType(v5) == 28 )
    result = j_BannerBlock::_itemInstanceFromBlockEntity(v4, v7, v6);
  else
    result = j_ItemInstance::ItemInstance(v4, Item::mBanner, 1, 0);
  return result;
}


void __fastcall BannerBlock::~BannerBlock(BannerBlock *this)
{
  BannerBlock::~BannerBlock(this);
}


void __fastcall BannerBlock::~BannerBlock(BannerBlock *this)
{
  Block *v1; // r0@1

  v1 = j_Block::~Block(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall BannerBlock::BannerBlock(int a1, const void **a2, int a3, char a4)
{
  int v4; // r4@1
  char v5; // r6@1
  int v6; // r5@1
  const void **v7; // r7@1
  int v8; // r0@1
  int *v14; // r2@1
  float v16; // [sp+4h] [bp-34h]@1
  int v17; // [sp+8h] [bp-30h]@1
  int v18; // [sp+Ch] [bp-2Ch]@1
  signed int v19; // [sp+10h] [bp-28h]@1
  signed int v20; // [sp+14h] [bp-24h]@1
  __int64 v21; // [sp+18h] [bp-20h]@1
  int v22; // [sp+20h] [bp-18h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = j_Material::getMaterial(2);
  j_EntityBlock::EntityBlock(v4, v7, v6, v8);
  *(_DWORD *)v4 = &off_2722068;
  *(_BYTE *)(v4 + 641) = v5;
  *(_DWORD *)(v4 + 24) = 33587200;
  *(_DWORD *)(v4 + 28) = 0;
  *(_DWORD *)(v4 + 32) = 28;
  v21 = 1048576000LL;
  v22 = 1048576000;
  v18 = 1061158912;
  v19 = 1065353216;
  v20 = 1061158912;
  j_Block::setVisualShape((Block *)v4, (const Vec3 *)&v21, (const Vec3 *)&v18);
  j_Block::setSolid((Block *)v4, 0);
  v17 = 1061997773;
  _R0 = j_Material::getTranslucency(*(Material **)(v4 + 56));
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.8
    VCMPE.F32       S0, S2
  }
  v14 = (int *)&v16;
    VMRS            APSR_nzcv, FPSCR
    VSTR            S0, [SP,#0x38+var_34]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v14 = &v17;
  Block::mTranslucency[v6] = *v14;
  return v4;
}


void *__fastcall BannerBlock::getVisualShape(BannerBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, bool a5)
{
  BlockSource *v5; // r5@1
  const BlockPos *v6; // r4@1
  void **v7; // r0@2
  unsigned __int64 *v8; // r6@3
  unsigned int v9; // r0@3

  v5 = a2;
  v6 = a3;
  if ( *((_BYTE *)this + 641) )
  {
    v7 = &BannerBlock::STANDING_AABB;
  }
  else
    v8 = (unsigned __int64 *)j_Block::getBlockState((int)this, 15);
    v9 = ((j_BlockSource::getData(v5, v6) >> (*v8 + 1 - (*v8 >> 32))) & (0xFu >> (4 - (*v8 >> 32)))) - 2;
    if ( v9 <= 3 )
      return *(&off_2722260 + v9);
    v7 = &AABB::EMPTY;
  return *v7;
}


int __fastcall BannerBlock::neighborChanged(BannerBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  BannerBlock *v4; // r6@1
  const BlockPos *v5; // r7@1
  const BlockPos *v6; // r4@1
  BlockSource *v7; // r8@1
  unsigned __int64 *v8; // r5@2
  unsigned int v9; // r0@2
  int result; // r0@2
  int v11; // r1@6
  int v12; // r2@6
  int *v13; // r1@6
  Material *v14; // r0@7
  int v15; // r2@10
  void (__fastcall *v16)(BannerBlock *, BlockSource *, const BlockPos *, unsigned int); // r5@11
  unsigned int v17; // r0@11
  int v18; // r2@13
  int v19; // r1@14
  int v20; // r2@14
  int v21; // r1@15
  int v22; // r2@15
  char v23; // [sp+8h] [bp-68h]@11
  int v24; // [sp+Ch] [bp-64h]@15
  int v25; // [sp+10h] [bp-60h]@15
  int v26; // [sp+14h] [bp-5Ch]@15
  int v27; // [sp+18h] [bp-58h]@14
  int v28; // [sp+1Ch] [bp-54h]@14
  int v29; // [sp+20h] [bp-50h]@14
  __int64 v30; // [sp+24h] [bp-4Ch]@13
  int v31; // [sp+2Ch] [bp-44h]@13
  __int64 v32; // [sp+30h] [bp-40h]@10
  int v33; // [sp+38h] [bp-38h]@10
  int v34; // [sp+3Ch] [bp-34h]@6
  int v35; // [sp+40h] [bp-30h]@6
  int v36; // [sp+44h] [bp-2Ch]@6
  int v37; // [sp+48h] [bp-28h]@2
  int v38; // [sp+4Ch] [bp-24h]@3
  int v39; // [sp+50h] [bp-20h]@4

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( *((_BYTE *)this + 641)
    || (v8 = (unsigned __int64 *)j_Block::getBlockState((int)this, 15),
        v9 = j_BlockSource::getData(v7, v6),
        j_BlockPos::neighbor(
          (BlockPos *)&v37,
          (int)v6,
          Facing::OPPOSITE_FACING[(v9 >> (*v8 + 1 - (*v8 >> 32))) & (0xFu >> (4 - (*v8 >> 32)))]),
        result = *(_DWORD *)v5,
        v37 == *(_DWORD *)v5)
    && (result = v38, v38 == *((_DWORD *)v5 + 1))
    && (result = v39, v39 == *((_DWORD *)v5 + 2)) )
  {
    j_EntityBlock::neighborChanged(v4, v7, v6, v5);
    if ( !*((_BYTE *)v4 + 641) )
    {
      switch ( j_BlockSource::getData(v7, v6) )
      {
        case 2u:
          v15 = *((_DWORD *)v6 + 2);
          v32 = *(_QWORD *)v6;
          v33 = v15 + 1;
          v13 = (int *)&v32;
          goto LABEL_7;
        case 3u:
          v18 = *((_DWORD *)v6 + 2);
          v30 = *(_QWORD *)v6;
          v31 = v18 - 1;
          v13 = (int *)&v30;
        case 4u:
          v19 = *((_DWORD *)v6 + 1);
          v20 = *((_DWORD *)v6 + 2);
          v27 = *(_DWORD *)v6 + 1;
          v28 = v19;
          v29 = v20;
          v13 = &v27;
        case 5u:
          v21 = *((_DWORD *)v6 + 1);
          v22 = *((_DWORD *)v6 + 2);
          v24 = *(_DWORD *)v6 - 1;
          v25 = v21;
          v26 = v22;
          v13 = &v24;
        default:
          goto def_1AAE624;
      }
      goto def_1AAE624;
    }
    v11 = *((_DWORD *)v6 + 1);
    v12 = *((_DWORD *)v6 + 2);
    v34 = *(_DWORD *)v6;
    v35 = v11 - 1;
    v36 = v12;
    v13 = &v34;
LABEL_7:
    v14 = (Material *)j_BlockSource::getMaterial(v7, (const BlockPos *)v13);
    result = j_Material::isSolid(v14);
    if ( !result )
def_1AAE624:
      v16 = *(void (__fastcall **)(BannerBlock *, BlockSource *, const BlockPos *, unsigned int))(*(_DWORD *)v4 + 276);
      v17 = j_BlockSource::getData(v7, v6);
      v16(v4, v7, v6, v17);
      v23 = BlockID::AIR;
      return j_BlockSource::setBlock((int)v7, v6, &v23, 3);
  }
  return result;
}


__int64 __fastcall BannerBlock::getShape(BannerBlock *this, int a2, AABB *a3)
{
  AABB *v3; // r4@1
  int v4; // r5@1
  __int64 result; // r0@1
  signed int v6; // r0@3
  signed int v7; // r2@3
  signed int v8; // r2@4
  __int64 v9; // r0@4
  unsigned __int64 v10; // [sp+0h] [bp-20h]@4
  float v11; // [sp+8h] [bp-18h]@4

  v3 = a3;
  v4 = a2;
  result = j_AABB::set((unsigned int)a3, 0LL, 1.0, 1.0, 1.0);
  switch ( v4 )
  {
    case 2:
      return j_AABB::set((unsigned int)v3, 4566650023203307520LL, 1.0, 0.78125, 1.0);
    case 3:
      v6 = 1040187392;
      v7 = 1065353216;
      goto LABEL_6;
    case 4:
      v8 = 1049624576;
      v10 = 4559894623777980416LL;
      v11 = 1.0;
      v9 = __PAIR__(1063256064, (unsigned int)v3);
      goto LABEL_7;
    case 5:
      v6 = 1065353216;
      v7 = 1040187392;
LABEL_6:
      v10 = __PAIR__(1061683200, v7);
      v11 = *(float *)&v6;
      v9 = (unsigned int)v3;
LABEL_7:
      result = j_AABB::set(v9, (unsigned int)v8, *(float *)&v10, *((float *)&v10 + 1), v11);
      break;
    default:
      return result;
  }
  return result;
}
