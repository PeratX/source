

void __fastcall WoodSlabBlock::~WoodSlabBlock(WoodSlabBlock *this)
{
  WoodSlabBlock::~WoodSlabBlock(this);
}


ItemInstance *__fastcall WoodSlabBlock::asItemInstance(WoodSlabBlock *this, BlockSource *a2, const BlockPos *a3, int a4, unsigned __int8 a5)
{
  BlockSource *v5; // r5@1
  ItemInstance *v6; // r8@1
  __int64 v7; // r6@1
  BlockState *v8; // r0@1
  int v9; // r4@1
  int v10; // r5@1

  v5 = a2;
  v6 = this;
  v7 = *(_QWORD *)Block::getBlockState((int)a2, 24);
  v8 = (BlockState *)Block::getBlockState((int)v5, 24);
  v9 = *(_QWORD *)v8 >> 32;
  v10 = *(_QWORD *)v8;
  BlockState::getMask(v8);
  return ItemInstance::ItemInstance(
           v6,
           Block::mWoodenSlab,
           1,
           (unsigned __int8)(((0xFu >> (4 - BYTE4(v7))) & (a5 >> (1 - BYTE4(v7) + v7))) << (v10 + 1 - v9)));
}


void __fastcall WoodSlabBlock::buildDescriptionId(WoodSlabBlock *this, int a2, unsigned int a3)
{
  int v3; // r5@1
  WoodSlabBlock *v4; // r4@1
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
  v8 = byte_2815F14;
  if ( v7 > 6 )
    v7 = 0;
  __dmb();
  if ( !(v8 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_2815F14) )
  {
    sub_21E94B4((void **)&dword_2815F18, "oak");
    sub_21E94B4((void **)&unk_2815F1C, "spruce");
    sub_21E94B4((void **)&unk_2815F20, "birch");
    sub_21E94B4((void **)&unk_2815F24, "jungle");
    sub_21E94B4((void **)&unk_2815F28, "acacia");
    sub_21E94B4((void **)&unk_2815F2C, "big_oak");
    dword_2815F30 = (int)&unk_28898CC;
    _cxa_atexit(std::array<std::string,7u>::~array);
    j___cxa_guard_release((unsigned int *)&byte_2815F14);
  }
  v9 = sub_21E8AF4(&v18, (int *)(v3 + 8));
  sub_21E7408((const void **)v9, ".", 1u);
  v10 = sub_21E72F0((const void **)&v18, (const void **)&unk_2815F10 + v7 + 2);
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


void __fastcall WoodSlabBlock::buildDescriptionId(WoodSlabBlock *this, int a2, unsigned int a3)
{
  WoodSlabBlock::buildDescriptionId(this, a2, a3);
}


signed int __fastcall WoodSlabBlock::isValidAuxValue(WoodSlabBlock *this, int a2)
{
  int v2; // r4@1
  BlockState *v3; // r0@1
  WoodBlock *v4; // r0@1
  int v5; // r1@1

  v2 = a2;
  v3 = (BlockState *)Block::getBlockState((int)this, 37);
  v4 = (WoodBlock *)(v2 & ~BlockState::getMask(v3));
  return j_j_j__ZN9WoodBlock19isValidWoodMaterialEi(v4, v5);
}


void __fastcall WoodSlabBlock::Item::~Item(Item *a1)
{
  WoodSlabBlock::Item::~Item(a1);
}


unsigned int __fastcall WoodSlabBlock::getVariant(WoodSlabBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 24);
  return (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)));
}


int __fastcall WoodSlabBlock::Item::_useOn(int a1, int a2, Entity *this, int a4, int a5, float a6, float a7, float a8, int a9)
{
  ItemInstance *v9; // r5@1
  int v10; // r4@1
  int v11; // r10@1
  unsigned __int64 *v12; // r7@2
  unsigned __int8 v13; // r0@2
  int v14; // r2@2
  int v15; // r7@2
  unsigned int v16; // r4@2
  int v17; // r0@2
  unsigned int v18; // r11@2
  int v19; // r5@2
  _BOOL4 v20; // r8@2
  unsigned int v21; // r9@2
  BlockState *v22; // r0@2
  char v23; // r6@2
  unsigned int v24; // r4@2
  signed int v25; // r0@2
  int v26; // r1@6
  const AABB *v29; // r0@12
  signed int v30; // r5@12
  Level *v34; // r0@19
  float v36; // [sp+4h] [bp-ACh]@0
  float v37; // [sp+8h] [bp-A8h]@0
  float v38; // [sp+Ch] [bp-A4h]@0
  const BlockPos *v39; // [sp+14h] [bp-9Ch]@2
  int v40; // [sp+18h] [bp-98h]@2
  BlockItem *v41; // [sp+1Ch] [bp-94h]@2
  ItemInstance *v42; // [sp+20h] [bp-90h]@2
  Entity *v43; // [sp+24h] [bp-8Ch]@2
  BlockPos *v44; // [sp+28h] [bp-88h]@2
  int v45; // [sp+2Ch] [bp-84h]@16
  int v46; // [sp+30h] [bp-80h]@16
  int v47; // [sp+34h] [bp-7Ch]@16
  float v48; // [sp+38h] [bp-78h]@19
  char v49; // [sp+44h] [bp-6Ch]@18
  char v50; // [sp+45h] [bp-6Bh]@18
  char v51; // [sp+48h] [bp-68h]@12
  char v52; // [sp+49h] [bp-67h]@12
  char v53; // [sp+4Ch] [bp-64h]@12
  unsigned __int8 v54; // [sp+68h] [bp-48h]@2
  char v55; // [sp+69h] [bp-47h]@2
  unsigned __int8 v56; // [sp+6Ch] [bp-44h]@2
  SlabBlock *v57; // [sp+6Dh] [bp-43h]@1

  v9 = (ItemInstance *)a2;
  BYTE2(v57) = a5;
  v10 = a4;
  v11 = 0;
  if ( *(_BYTE *)(a2 + 14) )
  {
    v41 = (BlockItem *)a1;
    v43 = this;
    v39 = (const BlockPos *)Entity::getRegion(this);
    v44 = (BlockPos *)v10;
    BlockSource::getBlockAndData((BlockSource *)&v56, v39, v10);
    v54 = v56;
    v55 = (char)v57;
    v12 = (unsigned __int64 *)Block::getBlockState(Block::mWoodenSlab, 24);
    v42 = v9;
    v13 = ItemInstance::getAuxValue(v9);
    v14 = *v12 + 1 - (*v12 >> 32);
    v15 = 4 - (*v12 >> 32);
    v16 = (unsigned int)v13 >> v14;
    v17 = Block::getBlockState(Block::mWoodenSlab, 24);
    v18 = (unsigned __int8)v57;
    v19 = *(_DWORD *)(v17 + 4);
    v40 = *(_DWORD *)v17;
    v20 = SlabBlock::isBottomSlab((SlabBlock *)(unsigned __int8)v57, *(_DWORD *)v17);
    v21 = v16 & (0xFu >> v15);
    v22 = (BlockState *)Block::getBlockState(Block::mWoodenSlab, 24);
    v23 = (char)v57;
    v24 = v21 << (*(_QWORD *)v22 + 1 - (unsigned int)(*(_QWORD *)v22 >> 32));
    LOBYTE(v57) = v23 & ~(unsigned __int8)BlockState::getMask(v22) | v24;
    v25 = (unsigned __int8)a5;
    if ( (_BYTE)a5 )
      v25 = 1;
    if ( (unsigned __int8)a5 != 1 )
      v11 = 1;
    v26 = v11 | ~v20;
    _ZF = (v26 & 1) == 0;
    if ( v26 & 1 )
      _ZF = (v25 | v20) == 0;
    if ( _ZF && v21 == ((v18 >> (1 - v19 + v40)) & (0xFu >> (4 - v19))) && v56 == *(_BYTE *)(Block::mWoodenSlab + 4) )
    {
      AABB::AABB((AABB *)&v53);
      _R8 = v44;
      v29 = (const AABB *)(*(int (__cdecl **)(_DWORD, const BlockPos *, BlockPos *))(*(_DWORD *)Block::mDoubleWoodenSlab
                                                                                   + 32))(
                            Block::mDoubleWoodenSlab,
                            v39,
                            v44);
      v30 = BlockSource::isUnobstructedByEntities(v39, v29, 0);
      v51 = *(_BYTE *)(Block::mDoubleWoodenSlab + 4);
      v52 = (char)v57;
      if ( a9
        && v30 == 1
        && (*(int (__fastcall **)(int, BlockPos *, unsigned __int8 *, char *))(*(_DWORD *)a9 + 8))(a9, v44, &v54, &v51) )
      {
        v11 = 0;
      }
      else
        if ( v30 == 1 )
        {
          v49 = v51;
          v50 = v52;
          if ( BlockSource::setBlockAndData((int)v39, v44, (int)&v49, 3, (int)v43) == 1 )
          {
            v34 = (Level *)BlockSource::getLevel(v39);
            __asm
            {
              VLDR            S0, [R8]
              VMOV.F32        S6, #0.5
              VLDR            S2, [R8,#4]
              VLDR            S4, [R8,#8]
              VCVT.F32.S32    S0, S0
              VCVT.F32.S32    S2, S2
              VCVT.F32.S32    S4, S4
              VADD.F32        S0, S0, S6
              VADD.F32        S2, S2, S6
              VADD.F32        S4, S4, S6
              VSTR            S0, [SP,#0xB0+var_78]
              VSTR            S2, [SP,#0xB0+var_74]
              VSTR            S4, [SP,#0xB0+var_70]
            }
            Level::broadcastSoundEvent(v34, (int)v39, 0, (int)&v48, *(_BYTE *)(Block::mDoubleWoodenSlab + 4), 1, 0, 0);
            (*(void (__fastcall **)(Entity *, ItemInstance *))(*(_DWORD *)v43 + 612))(v43, v42);
          }
        }
        if ( a9 )
          (*(void (__fastcall **)(int, BlockPos *, unsigned __int8 *, char *))(*(_DWORD *)a9 + 12))(a9, v44, &v54, &v51);
        v11 = 1;
    }
    else
      __asm
        VLDR            S16, [SP,#0xB0+arg_C]
        VLDR            S18, [SP,#0xB0+arg_8]
        VLDR            S20, [SP,#0xB0+arg_4]
      BlockItem::_calculatePlacePos(v41, v42, v43, (signed __int8 *)&v57 + 2, v44);
      v45 = *(_DWORD *)v44;
      v46 = *((_DWORD *)v44 + 1);
      v47 = *((_DWORD *)v44 + 2);
        VSTR            S18, [SP,#0xB0+var_A8]
        VSTR            S16, [SP,#0xB0+var_A4]
        VSTR            S20, [SP,#0xB0+var_AC]
      v11 = BlockItem::_useOn(
              (int)v41,
              *(float *)&v42,
              *(float *)&v43,
              COERCE_FLOAT(&v45),
              SBYTE2(v57),
              v36,
              v37,
              v38,
              a9);
  }
  return v11;
}


_DWORD *__fastcall WoodSlabBlock::Item::Item(int a1, const void **a2, __int16 a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)AuxDataBlockItem::AuxDataBlockItem(a1, a2, a3, Block::mWoodenSlab);
  *result = &off_2717B20;
  return result;
}


int __fastcall WoodSlabBlock::WoodSlabBlock(int a1, const void **a2, char a3, int a4)
{
  int v4; // r7@1
  int v5; // r4@1
  char v6; // r5@1
  const void **v7; // r6@1
  int v8; // r0@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = Material::getMaterial(2);
  SlabBlock::SlabBlock(v4, v7, v6, v5, v8);
  *(_DWORD *)v4 = &off_2717C3C;
  *(_DWORD *)(v4 + 644) = 0;
  return v4;
}


void __fastcall WoodSlabBlock::Item::~Item(Item *a1)
{
  Item *v1; // r0@1

  v1 = Item::~Item(a1);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall WoodSlabBlock::getSpawnResourcesAuxValue(WoodSlabBlock *this, int a2)
{
  unsigned int v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 24);
  return (unsigned __int8)(0xFu >> (4 - (*v3 >> 32))) & (unsigned __int8)(v2 >> (*v3 + 1 - (*v3 >> 32)));
}


void __fastcall WoodSlabBlock::~WoodSlabBlock(WoodSlabBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}
