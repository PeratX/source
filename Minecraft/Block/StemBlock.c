

int __fastcall StemBlock::getVisualShape(StemBlock *this, int a2, AABB *a3, bool a4)
{
  unsigned int v4; // r5@1
  AABB *v5; // r4@1
  unsigned __int64 *v6; // r0@1
  int v13; // [sp+0h] [bp-28h]@1
  int v14; // [sp+8h] [bp-20h]@1
  int v15; // [sp+Ch] [bp-1Ch]@1
  int v16; // [sp+10h] [bp-18h]@1
  signed int v17; // [sp+14h] [bp-14h]@1

  v4 = a2;
  v5 = a3;
  v6 = (unsigned __int64 *)Block::getBlockState((int)this, 17);
  __asm { VLDR            S2, =0.0625 }
  _R0 = 2 * ((0xFu >> (4 - (*v6 >> 32))) & (v4 >> (*v6 + 1 - (*v6 >> 32)))) + 2;
  __asm
  {
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
  }
  v15 = 1052770304;
  v16 = 0;
  v17 = 1052770304;
  v13 = 1059061760;
    VMUL.F32        S0, S0, S2
    VSTR            S0, [SP,#0x28+var_24]
  v14 = 1059061760;
  return AABB::set(v5, (const Vec3 *)&v15, (const Vec3 *)&v13);
}


signed int __fastcall StemBlock::getResourceCount(StemBlock *this, Random *a2, int a3, int a4)
{
  return 1;
}


signed int __fastcall StemBlock::onFertilized(StemBlock *this, BlockSource *a2, const BlockPos *a3, Entity *a4, ItemUseCallback *a5)
{
  const BlockPos *v5; // r4@1
  BlockSource *v6; // r5@1
  StemBlock *v7; // r6@1
  signed int result; // r0@2

  v5 = a3;
  v6 = a2;
  v7 = this;
  if ( BlockSource::getData(a2, a3) < BushBlock::MAX_GROWTH[0] )
  {
    BushBlock::growCrops(v7, v6, v5, a5);
    result = 1;
  }
  else
    result = 0;
  return result;
}


void __fastcall StemBlock::~StemBlock(StemBlock *this)
{
  StemBlock::~StemBlock(this);
}


ItemInstance *__fastcall StemBlock::asItemInstance(StemBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  ItemInstance *v4; // r4@1
  BlockSource *v5; // r5@1
  int **v6; // r0@2

  v4 = this;
  v5 = a2;
  if ( Block::isType(*((Block **)a2 + 161), (const Block *)Block::mPumpkin) == 1 )
  {
    v6 = Item::mSeeds_pumpkin;
    return ItemInstance::ItemInstance(v4, **v6);
  }
  if ( Block::isType(*((Block **)v5 + 161), (const Block *)Block::mMelon) == 1 )
    v6 = &Item::mSeeds_melon;
  return (ItemInstance *)ItemInstance::ItemInstance((int)v4);
}


int __fastcall StemBlock::tick(StemBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Random *v4; // r7@1
  const BlockPos *v5; // r5@1
  BlockSource *v6; // r4@1
  StemBlock *v7; // r11@1
  int v8; // r1@1
  int v9; // r2@1
  int result; // r0@1
  unsigned int v16; // r6@2
  unsigned int v17; // r0@3
  int v18; // r1@3
  unsigned __int64 *v19; // r0@4
  signed int v20; // r6@4
  BlockState *v21; // r0@5
  int v22; // r3@5
  unsigned __int8 v23; // r6@5
  int v24; // r7@5
  unsigned __int8 v25; // r0@5
  int v26; // r1@6
  int v27; // r2@6
  int v28; // r1@7
  int v29; // r2@7
  int v30; // r2@8
  int v31; // r2@9
  int v32; // r6@10
  int v33; // r0@11
  int v34; // r1@11
  int v35; // r2@11
  int v36; // r1@19
  char v38; // [sp+8h] [bp-A0h]@24
  unsigned __int8 v39; // [sp+Ch] [bp-9Ch]@17
  int v40; // [sp+10h] [bp-98h]@17
  int v41; // [sp+14h] [bp-94h]@17
  int v42; // [sp+18h] [bp-90h]@17
  unsigned __int8 v43; // [sp+1Ch] [bp-8Ch]@17
  int v44; // [sp+20h] [bp-88h]@11
  int v45; // [sp+24h] [bp-84h]@11
  int v46; // [sp+28h] [bp-80h]@11
  unsigned __int8 v47; // [sp+2Ch] [bp-7Ch]@9
  __int64 v48; // [sp+30h] [bp-78h]@9
  int v49; // [sp+38h] [bp-70h]@9
  unsigned __int8 v50; // [sp+3Ch] [bp-6Ch]@8
  __int64 v51; // [sp+40h] [bp-68h]@8
  int v52; // [sp+48h] [bp-60h]@8
  unsigned __int8 v53; // [sp+4Ch] [bp-5Ch]@7
  int v54; // [sp+50h] [bp-58h]@7
  int v55; // [sp+54h] [bp-54h]@7
  int v56; // [sp+58h] [bp-50h]@7
  unsigned __int8 v57; // [sp+5Ch] [bp-4Ch]@6
  int v58; // [sp+60h] [bp-48h]@6
  int v59; // [sp+64h] [bp-44h]@6
  int v60; // [sp+68h] [bp-40h]@6
  char v61; // [sp+6Ch] [bp-3Ch]@5
  unsigned __int8 v62; // [sp+6Dh] [bp-3Bh]@5
  char v63; // [sp+70h] [bp-38h]@4
  unsigned __int8 v64; // [sp+71h] [bp-37h]@4
  unsigned __int8 v65; // [sp+74h] [bp-34h]@1
  int v66; // [sp+78h] [bp-30h]@1
  int v67; // [sp+7Ch] [bp-2Ch]@1
  int v68; // [sp+80h] [bp-28h]@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = this;
  BushBlock::tick(this, a2, a3, a4);
  v8 = *((_DWORD *)v5 + 1);
  v9 = *((_DWORD *)v5 + 2);
  v66 = *(_DWORD *)v5;
  v67 = v8 + 1;
  v68 = v9;
  BlockSource::getRawBrightness((BlockSource *)&v65, v6, (int)&v66, 1);
  result = (unsigned __int8)Brightness::MAX - 6;
  if ( v65 >= result )
  {
    _R0 = StemBlock::getGrowthSpeed(v7, v6, v5);
    __asm
    {
      VMOV.F32        S0, #25.0
      VMOV            S2, R0
      VDIV.F32        S0, S0, S2
      VCVTR.S32.F32   S0, S0
      VMOV            R0, S0
    }
    v16 = _R0 + 1;
    if ( _R0 == -1 || (v17 = Random::_genRandInt32(v4), v18 = v17 % v16, result = v17 / v16, !v18) )
      BlockSource::getBlockAndData((BlockSource *)&v63, v6, (int)v5);
      v19 = (unsigned __int64 *)Block::getBlockState((int)v7, 17);
      v20 = (v64 >> (*v19 + 1 - (*v19 >> 32))) & (0xFu >> (4 - (*v19 >> 32)));
      if ( v20 > 6 )
      {
        v26 = *((_DWORD *)v5 + 1);
        v27 = *((_DWORD *)v5 + 2);
        v58 = *(_DWORD *)v5 - 1;
        v59 = v26;
        v60 = v27;
        BlockSource::getBlockID((BlockSource *)&v57, v6, (int)&v58);
        result = *(_BYTE *)(*((_DWORD *)v7 + 161) + 4);
        if ( v57 != result )
        {
          v28 = *((_DWORD *)v5 + 1);
          v29 = *((_DWORD *)v5 + 2);
          v54 = *(_DWORD *)v5 + 1;
          v55 = v28;
          v56 = v29;
          BlockSource::getBlockID((BlockSource *)&v53, v6, (int)&v54);
          result = *(_BYTE *)(*((_DWORD *)v7 + 161) + 4);
          if ( v53 != result )
          {
            v30 = *((_DWORD *)v5 + 2);
            v51 = *(_QWORD *)v5;
            v52 = v30 - 1;
            BlockSource::getBlockID((BlockSource *)&v50, v6, (int)&v51);
            result = *(_BYTE *)(*((_DWORD *)v7 + 161) + 4);
            if ( v50 != result )
            {
              v31 = *((_DWORD *)v5 + 2);
              v48 = *(_QWORD *)v5;
              v49 = v31 + 1;
              BlockSource::getBlockID((BlockSource *)&v47, v6, (int)&v48);
              result = *(_BYTE *)(*((_DWORD *)v7 + 161) + 4);
              if ( v47 != result )
              {
                v32 = 0;
                while ( 1 )
                {
                  v33 = *(_DWORD *)v5;
                  v44 = *(_DWORD *)v5;
                  v34 = *((_DWORD *)v5 + 1);
                  v45 = *((_DWORD *)v5 + 1);
                  v35 = *((_DWORD *)v5 + 2);
                  v46 = *((_DWORD *)v5 + 2);
                  switch ( v32 )
                  {
                    case 0:
                      v44 = --v33;
                      break;
                    case 1:
                      v44 = ++v33;
                    case 2:
                      --v35;
                      goto LABEL_16;
                    case 3:
                      ++v35;
LABEL_16:
                      v46 = v35;
                    default:
                  }
                  v40 = v33;
                  v41 = v34 - 1;
                  v42 = v35;
                  BlockSource::getBlockID((BlockSource *)&v43, v6, (int)&v40);
                  BlockSource::getBlockID((BlockSource *)&v39, v6, (int)&v44);
                  result = BlockID::AIR;
                  if ( v39 == BlockID::AIR )
                    result = v43;
                    if ( v43 == *(_BYTE *)(Block::mFarmland + 4) )
                    v36 = *(_BYTE *)(Block::mDirt + 4);
                    _ZF = v43 == v36;
                    if ( v43 != v36 )
                      _ZF = v43 == *(_BYTE *)(Block::mGrass + 4);
                    if ( _ZF )
                  if ( ++v32 == 4 )
                    return result;
                }
                v38 = *(_BYTE *)(*((_DWORD *)v7 + 161) + 4);
                result = BlockSource::setBlock((int)v6, v44, v45, v46, &v38, 3);
              }
            }
          }
        }
      }
      else
        v21 = (BlockState *)Block::getBlockState((int)v7, 17);
        v22 = v20 + 1;
        v23 = v64;
        v24 = v22 << (*(_QWORD *)v21 + 1 - (unsigned int)(*(_QWORD *)v21 >> 32));
        v25 = v23 & ~(unsigned __int8)BlockState::getMask(v21) | v24;
        v64 = v25;
        v61 = v63;
        v62 = v25;
        result = BlockSource::setBlockAndData((int)v6, v5, (int)&v61, 3, 0);
  }
  return result;
}


unsigned int __fastcall StemBlock::getColor(StemBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1
  unsigned int v4; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 17);
  v4 = (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)));
  return 4 * v4 | (v4 << 21) | ((255 - 8 * v4) << 8);
}


int __fastcall StemBlock::getGrowthSpeed(StemBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r9@1
  StemBlock *v5; // r6@1
  __int64 v6; // r0@1
  int v7; // r2@1
  int v8; // r2@1
  int v9; // r1@1
  int v10; // r2@1
  int v11; // r1@1
  int v12; // r2@1
  signed int v13; // r2@1 OVERLAPPED
  int v14; // r1@1 OVERLAPPED
  int v19; // r0@7
  int v20; // r7@7
  int v21; // r6@8
  unsigned __int64 *v22; // r5@10
  unsigned int v23; // r0@10
  int v24; // r1@12
  signed int v25; // r2@19
  signed int v26; // r0@19
  signed int v27; // r1@21
  signed int v28; // r3@23
  bool v29; // zf@27
  int result; // r0@32
  int v31; // [sp+4h] [bp-BCh]@1
  int v32; // [sp+8h] [bp-B8h]@1
  int v33; // [sp+Ch] [bp-B4h]@1
  int v34; // [sp+10h] [bp-B0h]@1
  __int64 v35; // [sp+14h] [bp-ACh]@7
  unsigned __int8 v36; // [sp+1Ch] [bp-A4h]@9
  unsigned __int8 v37; // [sp+20h] [bp-A0h]@1
  unsigned __int8 v38; // [sp+24h] [bp-9Ch]@1
  unsigned __int8 v39; // [sp+28h] [bp-98h]@1
  unsigned __int8 v40; // [sp+2Ch] [bp-94h]@1
  int v41; // [sp+30h] [bp-90h]@1
  int v42; // [sp+34h] [bp-8Ch]@1
  int v43; // [sp+38h] [bp-88h]@1
  unsigned __int8 v44; // [sp+3Ch] [bp-84h]@1
  int v45; // [sp+40h] [bp-80h]@1
  int v46; // [sp+44h] [bp-7Ch]@1
  int v47; // [sp+48h] [bp-78h]@1
  unsigned __int8 v48; // [sp+4Ch] [bp-74h]@1
  __int64 v49; // [sp+50h] [bp-70h]@1
  int v50; // [sp+58h] [bp-68h]@1
  unsigned __int8 v51; // [sp+5Ch] [bp-64h]@1
  __int64 v52; // [sp+60h] [bp-60h]@1
  int v53; // [sp+68h] [bp-58h]@1
  unsigned __int8 v54; // [sp+6Ch] [bp-54h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = *(_QWORD *)a3;
  v7 = *((_DWORD *)a3 + 2);
  v52 = v6;
  v53 = v7 - 1;
  BlockSource::getBlockID((BlockSource *)&v54, v4, (int)&v52);
  v8 = *((_DWORD *)v3 + 2);
  v49 = *(_QWORD *)v3;
  v50 = v8 + 1;
  BlockSource::getBlockID((BlockSource *)&v51, v4, (int)&v49);
  v9 = *((_DWORD *)v3 + 1);
  v10 = *((_DWORD *)v3 + 2);
  v45 = *(_DWORD *)v3 - 1;
  v46 = v9;
  v47 = v10;
  BlockSource::getBlockID((BlockSource *)&v48, v4, (int)&v45);
  v11 = *((_DWORD *)v3 + 1);
  v12 = *((_DWORD *)v3 + 2);
  v41 = *(_DWORD *)v3 + 1;
  v42 = v11;
  v43 = v12;
  BlockSource::getBlockID((BlockSource *)&v44, v4, (int)&v41);
  BlockSource::getBlockID((BlockSource *)&v40, (int)v4, *(_QWORD *)v3 - 1, *(_QWORD *)v3 >> 32, *((_DWORD *)v3 + 2) - 1);
  BlockSource::getBlockID((BlockSource *)&v39, (int)v4, *(_QWORD *)v3 + 1, *(_QWORD *)v3 >> 32, *((_DWORD *)v3 + 2) - 1);
  BlockSource::getBlockID((BlockSource *)&v38, (int)v4, *(_QWORD *)v3 + 1, *(_QWORD *)v3 >> 32, *((_DWORD *)v3 + 2) + 1);
  BlockSource::getBlockID((BlockSource *)&v37, (int)v4, *(_QWORD *)v3 - 1, *(_QWORD *)v3 >> 32, *((_DWORD *)v3 + 2) + 1);
  v13 = 1;
  v31 = v51;
  v32 = v54;
  v14 = *((_BYTE *)v5 + 4);
  v33 = v44;
  v34 = v48;
  if ( v40 != v14 )
  {
    _ZF = v39 == v14;
    if ( v39 != v14 )
      _ZF = v38 == v14;
    if ( !_ZF )
    {
      v13 = 0;
      if ( v37 == v14 )
        v13 = 1;
    }
  }
  __asm { VMOV.F32        S18, #1.0 }
  v35 = *(_QWORD *)&v14;
  __asm
    VMOV.F32        S22, #3.0
    VMOV.F32        S24, #0.25
  v19 = *((_DWORD *)v3 + 2);
  v20 = *(_DWORD *)v3 - 1;
    VLDR            S20, =0.0
    VMOV.F32        S16, S18
  do
    v21 = v19 - 2;
    do
      BlockSource::getBlockID((BlockSource *)&v36, (int)v4, v20, *((_DWORD *)v3 + 1) - 1, ++v21);
      __asm { VMOV.F32        S0, S20 }
      if ( v36 == *(_BYTE *)(Block::mFarmland + 4) )
      {
        v22 = (unsigned __int64 *)Block::getBlockState(Block::mFarmland, 22);
        v23 = BlockSource::getData(v4, v20, *((_DWORD *)v3 + 1) - 1, v21);
        __asm { VMOV.F32        S0, S18 }
        if ( (signed int)((v23 >> (*v22 + 1 - (*v22 >> 32))) & (0xFu >> (4 - (*v22 >> 32)))) > 0 )
          __asm { VMOVGT.F32      S0, S22 }
      }
      __asm { VMUL.F32        S2, S0, S24 }
      v19 = *((_DWORD *)v3 + 2);
      v24 = *(_DWORD *)v3;
      __asm { VMOV.F32        S4, S2 }
      if ( _ZF )
        __asm { VMOVEQ.F32      S4, S0 }
      if ( v20 == v24 )
        __asm { VMOVEQ.F32      S2, S4 }
      __asm { VADD.F32        S16, S2, S16 }
    while ( (unsigned __int8)(_NF ^ _VF) | _ZF );
    _VF = __OFSUB__(v20, v24);
    _ZF = v20 == v24;
    _NF = v20++ - v24 < 0;
  while ( (unsigned __int8)(_NF ^ _VF) | _ZF );
  if ( HIDWORD(v35) )
    goto LABEL_35;
  v25 = 0;
  v26 = 0;
  if ( v31 != (_DWORD)v35 )
    v26 = 1;
  v27 = 0;
  if ( v32 != (_DWORD)v35 )
    v27 = 1;
  v28 = 0;
  if ( v33 != (_DWORD)v35 )
    v28 = 1;
  if ( v34 != (_DWORD)v35 )
    v25 = 1;
  v29 = (v25 & v28) == 0;
  if ( !(v25 & v28) )
    v29 = (v26 & v27) == 0;
  if ( v29 )
LABEL_35:
    __asm
      VMOV.F32        S0, #0.5
      VMUL.F32        S16, S16, S0
  __asm { VMOV            R0, S16 }
  return result;
}


void __fastcall StemBlock::~StemBlock(StemBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall StemBlock::spawnResources(StemBlock *this, BlockSource *a2, const BlockPos *a3, int a4, float a5, int a6)
{
  StemBlock *v6; // r6@1
  int v11; // r7@1
  const BlockPos *v12; // r8@1
  BlockSource *v13; // r5@1
  Level *v14; // r0@1
  Level *v15; // r4@1
  signed int result; // r0@1
  int *v17; // r1@2
  int v18; // r9@4
  char *v19; // r0@4
  char *v20; // r0@12
  char *v21; // r0@20
  float v22; // [sp+0h] [bp-78h]@0
  char v23; // [sp+8h] [bp-70h]@5
  int v24; // [sp+10h] [bp-68h]@9
  void *v25; // [sp+2Ch] [bp-4Ch]@7
  void *ptr; // [sp+3Ch] [bp-3Ch]@5

  v6 = this;
  __asm { VLDR            S0, [SP,#0x78+arg_0] }
  v11 = a4;
  v12 = a3;
  v13 = a2;
  __asm { VSTR            S0, [SP,#0x78+var_78] }
  Block::spawnResources(this, a2, a3, a4, v22, 0);
  v14 = (Level *)BlockSource::getLevel(v13);
  v15 = v14;
  result = Level::isClientSide(v14);
  if ( !result )
  {
    _ZF = Block::isType(*((Block **)v6 + 161), (const Block *)Block::mMelon) == 0;
    v17 = &Item::mSeeds_pumpkin;
    if ( !_ZF )
      v17 = &Item::mSeeds_melon;
    v18 = *v17;
    v19 = Level::getRandom(v15);
    if ( (signed int)(Random::_genRandInt32((Random *)v19) % 0xF) <= v11 )
    {
      ItemInstance::ItemInstance((ItemInstance *)&v23, v18);
      Block::popResource(v6, v13, v12, (const ItemInstance *)&v23);
      if ( ptr )
        operator delete(ptr);
      if ( v25 )
        operator delete(v25);
      if ( v24 )
        (*(void (**)(void))(*(_DWORD *)v24 + 4))();
      v24 = 0;
    }
    v20 = Level::getRandom(v15);
    if ( (signed int)(Random::_genRandInt32((Random *)v20) % 0xF) <= v11 )
    v21 = Level::getRandom(v15);
    result = Random::_genRandInt32((Random *)v21) % 0xF;
    if ( result <= v11 )
      result = 0;
  }
  return result;
}


signed int __fastcall StemBlock::isStemBlock(StemBlock *this)
{
  return 1;
}


int __fastcall StemBlock::canBeSilkTouched(StemBlock *this)
{
  return 0;
}


int __fastcall StemBlock::getColor(StemBlock *this, BlockSource *a2, const BlockPos *a3)
{
  StemBlock *v3; // r4@1
  int (__fastcall *v4)(StemBlock *, unsigned int); // r5@1
  unsigned int v5; // r1@1

  v3 = this;
  v4 = *(int (__fastcall **)(StemBlock *, unsigned int))(*(_DWORD *)this + 384);
  v5 = BlockSource::getData(a2, a3);
  return v4(v3, v5);
}


unsigned int __fastcall StemBlock::getGrowth(StemBlock *this, const unsigned __int8 *a2)
{
  const unsigned __int8 *v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 17);
  return (0xFu >> (4 - (*v3 >> 32))) & (*v2 >> (*v3 + 1 - (*v3 >> 32)));
}


int __fastcall StemBlock::StemBlock(int a1, const void **a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r6@1
  int v6; // r5@1
  const void **v7; // r7@1
  int v8; // r0@1
  void (__fastcall *v9)(int, int *, int *); // r3@1
  int *v15; // r2@1
  float v17; // [sp+4h] [bp-34h]@1
  int v18; // [sp+8h] [bp-30h]@1
  int v19; // [sp+Ch] [bp-2Ch]@1
  signed int v20; // [sp+10h] [bp-28h]@1
  signed int v21; // [sp+14h] [bp-24h]@1
  int v22; // [sp+18h] [bp-20h]@1
  int v23; // [sp+1Ch] [bp-1Ch]@1
  signed int v24; // [sp+20h] [bp-18h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = Material::getMaterial(8);
  BushBlock::BushBlock(v4, v7, v6, v8);
  *(_DWORD *)v4 = &off_2714CE8;
  *(_DWORD *)(v4 + 644) = v5;
  Block::setTicking((Block *)v4, 1);
  v9 = *(void (__fastcall **)(int, int *, int *))(*(_DWORD *)v4 + 452);
  v22 = 1052770304;
  v23 = 0;
  v24 = 1052770304;
  v19 = 1059061760;
  v20 = 1048576000;
  v21 = 1059061760;
  v9(v4, &v22, &v19);
  v18 = 1061997773;
  _R0 = Material::getTranslucency(*(Material **)(v4 + 56));
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.8
    VCMPE.F32       S0, S2
  }
  v15 = (int *)&v17;
    VMRS            APSR_nzcv, FPSCR
    VSTR            S0, [SP,#0x38+var_34]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v15 = &v18;
  Block::mTranslucency[v6] = *v15;
  return v4;
}


signed int __fastcall StemBlock::getConnectDir(StemBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r6@1
  BlockSource *v4; // r5@1
  StemBlock *v5; // r4@1
  unsigned int v6; // r7@1
  unsigned __int64 *v7; // r0@1
  signed int result; // r0@2
  int v9; // r1@3
  int v10; // r2@3
  int v11; // r1@5
  int v12; // r2@5
  int v13; // r2@7
  int v14; // r2@9
  unsigned __int8 v15; // [sp+4h] [bp-54h]@9
  __int64 v16; // [sp+8h] [bp-50h]@9
  int v17; // [sp+10h] [bp-48h]@9
  unsigned __int8 v18; // [sp+14h] [bp-44h]@7
  __int64 v19; // [sp+18h] [bp-40h]@7
  int v20; // [sp+20h] [bp-38h]@7
  unsigned __int8 v21; // [sp+24h] [bp-34h]@5
  int v22; // [sp+28h] [bp-30h]@5
  int v23; // [sp+2Ch] [bp-2Ch]@5
  int v24; // [sp+30h] [bp-28h]@5
  unsigned __int8 v25; // [sp+34h] [bp-24h]@3
  int v26; // [sp+38h] [bp-20h]@3
  int v27; // [sp+3Ch] [bp-1Ch]@3
  int v28; // [sp+40h] [bp-18h]@3

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = BlockSource::getData(a2, a3);
  v7 = (unsigned __int64 *)Block::getBlockState((int)v5, 17);
  if ( (signed int)((0xFu >> (4 - (*v7 >> 32))) & (v6 >> (*v7 + 1 - (*v7 >> 32)))) >= 7 )
  {
    v9 = *((_DWORD *)v3 + 1);
    v10 = *((_DWORD *)v3 + 2);
    v26 = *(_DWORD *)v3 - 1;
    v27 = v9;
    v28 = v10;
    BlockSource::getBlockID((BlockSource *)&v25, v4, (int)&v26);
    if ( v25 == *(_BYTE *)(*((_DWORD *)v5 + 161) + 4) )
    {
      result = 0;
    }
    else
      v11 = *((_DWORD *)v3 + 1);
      v12 = *((_DWORD *)v3 + 2);
      v22 = *(_DWORD *)v3 + 1;
      v23 = v11;
      v24 = v12;
      BlockSource::getBlockID((BlockSource *)&v21, v4, (int)&v22);
      if ( v21 == *(_BYTE *)(*((_DWORD *)v5 + 161) + 4) )
      {
        result = 1;
      }
      else
        v13 = *((_DWORD *)v3 + 2);
        v19 = *(_QWORD *)v3;
        v20 = v13 - 1;
        BlockSource::getBlockID((BlockSource *)&v18, v4, (int)&v19);
        if ( v18 == *(_BYTE *)(*((_DWORD *)v5 + 161) + 4) )
        {
          result = 2;
        }
        else
          v14 = *((_DWORD *)v3 + 2);
          v16 = *(_QWORD *)v3;
          v17 = v14 + 1;
          BlockSource::getBlockID((BlockSource *)&v15, v4, (int)&v16);
          result = -1;
          if ( v15 == *(_BYTE *)(*((_DWORD *)v5 + 161) + 4) )
            result = 3;
  }
  else
    result = -1;
  return result;
}


signed int __fastcall StemBlock::getResource(StemBlock *this, Random *a2, int a3, int a4)
{
  return -1;
}
