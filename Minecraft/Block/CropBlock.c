

int __fastcall CropBlock::getGrowthSpeed(CropBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r9@1
  CropBlock *v5; // r6@1
  __int64 v6; // r0@1
  int v7; // r2@1
  int v8; // r2@1
  int v9; // r1@1
  int v10; // r2@1
  int v11; // r1@1
  int v12; // r2@1
  __int64 v13; // r0@1
  int v14; // r2@1
  __int64 v15; // r0@1
  int v16; // r2@1
  __int64 v17; // r0@1
  int v18; // r2@1
  __int64 v19; // r0@1
  int v20; // r2@1
  signed int v21; // r2@1 OVERLAPPED
  int v22; // r1@1 OVERLAPPED
  int v27; // r0@7
  int v28; // r7@7
  int v29; // r6@8
  unsigned int v30; // r5@10
  unsigned __int64 *v31; // r0@10
  int v32; // r1@12
  signed int v33; // r2@19
  signed int v34; // r0@19
  signed int v35; // r1@21
  signed int v36; // r3@23
  bool v37; // zf@27
  int result; // r0@32
  int v39; // [sp+4h] [bp-ECh]@1
  int v40; // [sp+8h] [bp-E8h]@1
  int v41; // [sp+Ch] [bp-E4h]@1
  int v42; // [sp+10h] [bp-E0h]@1
  __int64 v43; // [sp+14h] [bp-DCh]@7
  unsigned __int8 v44; // [sp+1Ch] [bp-D4h]@9
  __int64 v45; // [sp+20h] [bp-D0h]@1
  int v46; // [sp+28h] [bp-C8h]@1
  unsigned __int8 v47; // [sp+2Ch] [bp-C4h]@1
  __int64 v48; // [sp+30h] [bp-C0h]@1
  int v49; // [sp+38h] [bp-B8h]@1
  unsigned __int8 v50; // [sp+3Ch] [bp-B4h]@1
  __int64 v51; // [sp+40h] [bp-B0h]@1
  int v52; // [sp+48h] [bp-A8h]@1
  unsigned __int8 v53; // [sp+4Ch] [bp-A4h]@1
  __int64 v54; // [sp+50h] [bp-A0h]@1
  int v55; // [sp+58h] [bp-98h]@1
  unsigned __int8 v56; // [sp+5Ch] [bp-94h]@1
  int v57; // [sp+60h] [bp-90h]@1
  int v58; // [sp+64h] [bp-8Ch]@1
  int v59; // [sp+68h] [bp-88h]@1
  unsigned __int8 v60; // [sp+6Ch] [bp-84h]@1
  int v61; // [sp+70h] [bp-80h]@1
  int v62; // [sp+74h] [bp-7Ch]@1
  int v63; // [sp+78h] [bp-78h]@1
  unsigned __int8 v64; // [sp+7Ch] [bp-74h]@1
  __int64 v65; // [sp+80h] [bp-70h]@1
  int v66; // [sp+88h] [bp-68h]@1
  unsigned __int8 v67; // [sp+8Ch] [bp-64h]@1
  __int64 v68; // [sp+90h] [bp-60h]@1
  int v69; // [sp+98h] [bp-58h]@1
  unsigned __int8 v70; // [sp+9Ch] [bp-54h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = *(_QWORD *)a3;
  v7 = *((_DWORD *)a3 + 2);
  v68 = v6;
  v69 = v7 - 1;
  BlockSource::getBlockID((BlockSource *)&v70, v4, (int)&v68);
  v8 = *((_DWORD *)v3 + 2);
  v65 = *(_QWORD *)v3;
  v66 = v8 + 1;
  BlockSource::getBlockID((BlockSource *)&v67, v4, (int)&v65);
  v9 = *((_DWORD *)v3 + 1);
  v10 = *((_DWORD *)v3 + 2);
  v61 = *(_DWORD *)v3 - 1;
  v62 = v9;
  v63 = v10;
  BlockSource::getBlockID((BlockSource *)&v64, v4, (int)&v61);
  v11 = *((_DWORD *)v3 + 1);
  v12 = *((_DWORD *)v3 + 2);
  v57 = *(_DWORD *)v3 + 1;
  v58 = v11;
  v59 = v12;
  BlockSource::getBlockID((BlockSource *)&v60, v4, (int)&v57);
  HIDWORD(v13) = *((_DWORD *)v3 + 1);
  v14 = *((_DWORD *)v3 + 2);
  LODWORD(v13) = *(_DWORD *)v3 - 1;
  v54 = v13;
  v55 = v14 - 1;
  BlockSource::getBlockID((BlockSource *)&v56, v4, (int)&v54);
  HIDWORD(v15) = *((_DWORD *)v3 + 1);
  v16 = *((_DWORD *)v3 + 2);
  LODWORD(v15) = *(_DWORD *)v3 + 1;
  v51 = v15;
  v52 = v16 - 1;
  BlockSource::getBlockID((BlockSource *)&v53, v4, (int)&v51);
  HIDWORD(v17) = *((_DWORD *)v3 + 1);
  v18 = *((_DWORD *)v3 + 2);
  LODWORD(v17) = *(_DWORD *)v3 + 1;
  v48 = v17;
  v49 = v18 + 1;
  BlockSource::getBlockID((BlockSource *)&v50, v4, (int)&v48);
  HIDWORD(v19) = *((_DWORD *)v3 + 1);
  v20 = *((_DWORD *)v3 + 2);
  LODWORD(v19) = *(_DWORD *)v3 - 1;
  v45 = v19;
  v46 = v20 + 1;
  BlockSource::getBlockID((BlockSource *)&v47, v4, (int)&v45);
  v21 = 1;
  v39 = v67;
  v40 = v70;
  v22 = *((_BYTE *)v5 + 4);
  v41 = v60;
  v42 = v64;
  if ( v56 != v22 )
  {
    _ZF = v53 == v22;
    if ( v53 != v22 )
      _ZF = v50 == v22;
    if ( !_ZF )
    {
      v21 = 0;
      if ( v47 == v22 )
        v21 = 1;
    }
  }
  __asm { VMOV.F32        S18, #1.0 }
  v43 = *(_QWORD *)&v22;
  __asm
    VMOV.F32        S22, #3.0
    VMOV.F32        S24, #0.25
  v27 = *((_DWORD *)v3 + 2);
  v28 = *(_DWORD *)v3 - 1;
    VLDR            S20, =0.0
    VMOV.F32        S16, S18
  do
    v29 = v27 - 2;
    do
      BlockSource::getBlockID((BlockSource *)&v44, (int)v4, v28, *((_DWORD *)v3 + 1) - 1, ++v29);
      __asm { VMOV.F32        S0, S20 }
      if ( v44 == *(_BYTE *)(Block::mFarmland + 4) )
      {
        v30 = BlockSource::getData(v4, v28, *((_DWORD *)v3 + 1) - 1, v29);
        v31 = (unsigned __int64 *)Block::getBlockState(Block::mFarmland, 22);
        __asm { VMOV.F32        S0, S18 }
        if ( (signed int)((0xFu >> (4 - (*v31 >> 32))) & (v30 >> (*v31 + 1 - (*v31 >> 32)))) > 0 )
          __asm { VMOVGT.F32      S0, S22 }
      }
      __asm { VMUL.F32        S2, S0, S24 }
      v27 = *((_DWORD *)v3 + 2);
      v32 = *(_DWORD *)v3;
      __asm { VMOV.F32        S4, S2 }
      if ( _ZF )
        __asm { VMOVEQ.F32      S4, S0 }
      if ( v28 == v32 )
        __asm { VMOVEQ.F32      S2, S4 }
      __asm { VADD.F32        S16, S2, S16 }
    while ( (unsigned __int8)(_NF ^ _VF) | _ZF );
    _VF = __OFSUB__(v28, v32);
    _ZF = v28 == v32;
    _NF = v28++ - v32 < 0;
  while ( (unsigned __int8)(_NF ^ _VF) | _ZF );
  if ( HIDWORD(v43) )
    goto LABEL_35;
  v33 = 0;
  v34 = 0;
  if ( v39 != (_DWORD)v43 )
    v34 = 1;
  v35 = 0;
  if ( v40 != (_DWORD)v43 )
    v35 = 1;
  v36 = 0;
  if ( v41 != (_DWORD)v43 )
    v36 = 1;
  if ( v42 != (_DWORD)v43 )
    v33 = 1;
  v37 = (v33 & v36) == 0;
  if ( !(v33 & v36) )
    v37 = (v34 & v35) == 0;
  if ( v37 )
LABEL_35:
    __asm
      VMOV.F32        S0, #0.5
      VMUL.F32        S16, S16, S0
  __asm { VMOV            R0, S16 }
  return result;
}


_DWORD *__fastcall CropBlock::getAABB(CropBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, int a6, int a7)
{
  BlockSource *v7; // r6@1
  AABB *v8; // r5@1
  const BlockPos *v9; // r4@1
  unsigned __int64 *v10; // r7@2
  unsigned int v11; // r0@2
  unsigned int v16; // r0@2
  unsigned int v17; // r1@2
  AABB *v19; // r5@4
  _DWORD *result; // r0@4
  char v21; // [sp+4h] [bp-2Ch]@4
  int v22; // [sp+10h] [bp-20h]@4
  int v23; // [sp+18h] [bp-18h]@4

  v7 = a2;
  v8 = a4;
  v9 = a3;
  if ( a6 == 1 )
  {
    v10 = (unsigned __int64 *)Block::getBlockState((int)this, 17);
    v11 = BlockSource::getData(v7, v9);
    __asm { VLDR            S2, =0.14286 }
    v16 = (v11 >> (*v10 + 1 - (*v10 >> 32))) & (0xFu >> (4 - (*v10 >> 32)));
    v17 = BushBlock::MAX_GROWTH[0];
    if ( (unsigned __int8)v16 < (unsigned int)BushBlock::MAX_GROWTH[0] )
      v17 = v16;
    _R0 = v17 + 1;
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
    }
    v22 = 1065353216;
      VMUL.F32        S0, S0, S2
      VSTR            S0, [SP,#0x30+var_1C]
    v23 = 1065353216;
    v19 = (AABB *)AABB::set(v8, (const Vec3 *)&Vec3::ZERO, (const Vec3 *)&v22);
    Vec3::Vec3((int)&v21, (int)v9);
    result = (_DWORD *)AABB::move(v19, (const Vec3 *)&v21);
  }
  else
    result = &AABB::EMPTY;
  return result;
}


int __fastcall CropBlock::tick(CropBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Random *v4; // r9@1
  const BlockPos *v5; // r5@1
  BlockSource *v6; // r4@1
  CropBlock *v7; // r6@1
  int result; // r0@1
  unsigned __int64 *v9; // r7@2
  signed int v10; // r7@2
  unsigned int v17; // r0@4
  int v18; // r1@4
  int v19; // r1@5
  int v20; // r2@5
  int v21; // r3@5
  char v22; // [sp+Ch] [bp-24h]@5
  unsigned __int8 v23; // [sp+10h] [bp-20h]@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = this;
  BushBlock::tick(this, a2, a3, a4);
  BlockSource::getRawBrightness((BlockSource *)&v23, v6, (int)v5, 1);
  result = (unsigned __int8)Brightness::MAX - 6;
  if ( v23 >= result )
  {
    v9 = (unsigned __int64 *)Block::getBlockState((int)v7, 17);
    result = BlockSource::getData(v6, v5) >> (*v9 + 1 - (*v9 >> 32));
    v10 = result & (0xFu >> (4 - (*v9 >> 32)));
    if ( v10 < BushBlock::MAX_GROWTH[0] )
    {
      _R0 = CropBlock::getGrowthSpeed(v7, v6, v5);
      __asm
      {
        VMOV.F32        S0, #25.0
        VMOV            S2, R0
        VDIV.F32        S0, S0, S2
        VCVTR.S32.F32   S0, S0
        VMOV            R8, S0
      }
      if ( !_R8 || (v17 = Random::_genRandInt32(v4), v18 = v17 % _R8, result = v17 / _R8, !v18) )
        v19 = *(_DWORD *)v5;
        v20 = *((_DWORD *)v5 + 1);
        v21 = *((_DWORD *)v5 + 2);
        v22 = *((_BYTE *)v7 + 4);
        result = BlockSource::setBlockAndData((int)v6, v19, v20, v21, &v22, v10 + 1, 3);
    }
  }
  return result;
}


void __fastcall CropBlock::~CropBlock(CropBlock *this)
{
  CropBlock::~CropBlock(this);
}


int __fastcall CropBlock::CropBlock(int a1, const void **a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  void (__fastcall *v7)(int, int *, int *); // r3@1
  int v9; // [sp+0h] [bp-28h]@1
  signed int v10; // [sp+4h] [bp-24h]@1
  signed int v11; // [sp+8h] [bp-20h]@1
  int v12; // [sp+Ch] [bp-1Ch]@1
  int v13; // [sp+10h] [bp-18h]@1
  int v14; // [sp+14h] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(8);
  BushBlock::BushBlock(v3, v5, v4, v6);
  *(_DWORD *)v3 = &loc_2706EE0;
  Block::setTicking((Block *)v3, 1);
  v7 = *(void (__fastcall **)(int, int *, int *))(*(_DWORD *)v3 + 452);
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v9 = 1065353216;
  v10 = 1048576000;
  v11 = 1065353216;
  v7(v3, &v12, &v9);
  *(_DWORD *)(v3 + 20) = 5;
  return v3;
}


signed int __fastcall CropBlock::spawnResources(CropBlock *this, BlockSource *a2, const BlockPos *a3, int a4, float a5, int a6)
{
  Block *v6; // r6@1
  unsigned __int8 v9; // r4@1
  BlockSource *v10; // r10@1
  Level *v11; // r0@1
  Level *v12; // r11@1
  signed int result; // r0@1
  unsigned __int64 *v14; // r0@2
  char v15; // r2@2
  char v16; // r2@2
  signed int v17; // r4@2
  int v20; // r5@5
  signed int v21; // r7@5
  char *v22; // r0@6
  int v23; // r0@7
  float v24; // [sp+0h] [bp-80h]@0
  BlockPos *v25; // [sp+Ch] [bp-74h]@1
  char v26; // [sp+10h] [bp-70h]@7
  int v27; // [sp+18h] [bp-68h]@11
  void *v28; // [sp+34h] [bp-4Ch]@9
  void *ptr; // [sp+44h] [bp-3Ch]@7

  v6 = this;
  __asm { VLDR            S0, [SP,#0x80+arg_0] }
  v9 = a4;
  v25 = a3;
  v10 = a2;
  __asm { VSTR            S0, [SP,#0x80+var_80] }
  Block::spawnResources(this, a2, a3, a4, v24, 0);
  v11 = (Level *)BlockSource::getLevel(v10);
  v12 = v11;
  result = Level::isClientSide(v11);
  if ( !result )
  {
    v14 = (unsigned __int64 *)Block::getBlockState((int)v6, 17);
    v15 = *v14;
    LOBYTE(v14) = *v14 >> 32;
    v16 = v15 + 1 - (_BYTE)v14;
    result = 0xFu >> (4 - (_BYTE)v14);
    v17 = ((unsigned int)v9 >> v16) & result;
    _VF = __OFSUB__(v17, BushBlock::MAX_GROWTH[0]);
    _NF = v17 - BushBlock::MAX_GROWTH[0] < 0;
    if ( v17 >= BushBlock::MAX_GROWTH[0] )
    {
      result = a6;
      _VF = __OFADD__(a6, 2);
      _NF = a6 + 2 < 0;
    }
    if ( !(_NF ^ _VF) )
      v20 = result + 2;
      v21 = -1;
      do
      {
        v22 = Level::getRandom(v12);
        result = Random::_genRandInt32((Random *)v22) % 0xF;
        if ( result <= v17 )
        {
          v23 = (*(int (__fastcall **)(Block *))(*(_DWORD *)v6 + 508))(v6);
          ItemInstance::ItemInstance((ItemInstance *)&v26, v23, 1, 0);
          Block::popResource(v6, v10, v25, (const ItemInstance *)&v26);
          if ( ptr )
            operator delete(ptr);
          if ( v28 )
            operator delete(v28);
          if ( v27 )
            (*(void (**)(void))(*(_DWORD *)v27 + 4))();
          result = 0;
          v27 = 0;
        }
        ++v21;
      }
      while ( v21 < v20 );
  }
  return result;
}


signed int __fastcall CropBlock::isCropBlock(CropBlock *this)
{
  return 1;
}


signed int __fastcall CropBlock::onFertilized(CropBlock *this, BlockSource *a2, const BlockPos *a3, Entity *a4, ItemUseCallback *a5)
{
  const BlockPos *v5; // r4@1
  BlockSource *v6; // r5@1
  CropBlock *v7; // r7@1
  BlockState *v8; // r0@3
  char v9; // r6@3
  int v10; // r9@3
  char v11; // r0@3
  int v12; // r6@3
  int v13; // r1@5
  int v14; // r2@5
  int v15; // r3@5
  unsigned __int64 *v16; // r6@6
  int v18; // r1@9
  int v19; // r2@9
  int v20; // r3@9
  char v21; // [sp+10h] [bp-28h]@5
  char v22; // [sp+14h] [bp-24h]@3
  char v23; // [sp+15h] [bp-23h]@3
  char v24; // [sp+18h] [bp-20h]@3

  v5 = a3;
  v6 = a2;
  v7 = this;
  if ( !a4 || (*(int (__fastcall **)(Entity *))(*(_DWORD *)a4 + 652))(a4) != 1 )
  {
    v16 = (unsigned __int64 *)Block::getBlockState((int)v7, 17);
    if ( (signed int)((BlockSource::getData(v6, v5) >> (*v16 + 1 - (*v16 >> 32))) & (0xFu >> (4 - (*v16 >> 32)))) < BushBlock::MAX_GROWTH[0] )
      return BushBlock::growCrops(v7, v6, v5, a5);
    return 0;
  }
  BlockSource::getBlockAndData((BlockSource *)&v24, v6, (int)v5);
  v8 = (BlockState *)Block::getBlockState((int)v7, 17);
  v10 = *(_QWORD *)v8 >> 32;
  v9 = *(_QWORD *)v8;
  BlockState::getMask(v8);
  v11 = *((_BYTE *)v7 + 4);
  v22 = *((_BYTE *)v7 + 4);
  v12 = BushBlock::MAX_GROWTH[0] << (v9 + 1 - v10);
  v23 = v12;
  if ( !a5 )
    v18 = *(_DWORD *)v5;
    v19 = *((_DWORD *)v5 + 1);
    v20 = *((_DWORD *)v5 + 2);
    v21 = v11;
    BlockSource::setBlockAndData((int)v6, v18, v19, v20, &v21, v12, 3);
    return 1;
  if ( (*(int (__fastcall **)(ItemUseCallback *, const BlockPos *, char *, char *))(*(_DWORD *)a5 + 16))(
         a5,
         v5,
         &v24,
         &v22) )
  v13 = *(_DWORD *)v5;
  v14 = *((_DWORD *)v5 + 1);
  v15 = *((_DWORD *)v5 + 2);
  v21 = *((_BYTE *)v7 + 4);
  BlockSource::setBlockAndData((int)v6, v13, v14, v15, &v21, v12, 3);
  (*(void (__fastcall **)(ItemUseCallback *, const BlockPos *, char *, char *))(*(_DWORD *)a5 + 20))(a5, v5, &v24, &v22);
  return 1;
}


int __fastcall CropBlock::getResource(CropBlock *this, Random *a2, int a3, int a4)
{
  unsigned __int8 v4; // r5@1
  CropBlock *v5; // r4@1
  unsigned __int64 *v6; // r0@1
  int result; // r0@2

  v4 = a3;
  v5 = this;
  v6 = (unsigned __int64 *)Block::getBlockState((int)this, 17);
  if ( ((0xFu >> (4 - (*v6 >> 32))) & (v4 >> (*v6 + 1 - (*v6 >> 32)))) == BushBlock::MAX_GROWTH[0] )
    result = (*(int (__fastcall **)(CropBlock *))(*(_DWORD *)v5 + 512))(v5);
  else
    result = *(_WORD *)((*(int (__fastcall **)(CropBlock *))(*(_DWORD *)v5 + 508))(v5) + 18);
  return result;
}


int __fastcall CropBlock::canSurvive(CropBlock *this, BlockSource *a2, const BlockPos *a3)
{
  CropBlock *v3; // r4@1
  const BlockPos *v4; // r6@1
  BlockSource *v5; // r5@1
  int v6; // r1@3
  int v7; // r2@3
  int v8; // r3@3
  int (__fastcall *v9)(CropBlock *, int); // r6@3
  int v10; // r0@3
  int result; // r0@3
  int v12; // [sp+0h] [bp-20h]@3
  int v13; // [sp+4h] [bp-1Ch]@3
  int v14; // [sp+8h] [bp-18h]@3
  unsigned __int8 v15; // [sp+Ch] [bp-14h]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  BlockSource::getDaytimeBrightness((BlockSource *)&v15, a2, (int)a3);
  if ( v15 <= 7u && BlockSource::canSeeSky(v5, v4) != 1 )
  {
    result = 0;
  }
  else
    v6 = *(_DWORD *)v4;
    v7 = *((_DWORD *)v4 + 1);
    v8 = *((_DWORD *)v4 + 2);
    v9 = *(int (__fastcall **)(CropBlock *, int))(*(_DWORD *)v3 + 228);
    v12 = v6;
    v13 = v7 - 1;
    v14 = v8;
    v10 = BlockSource::getBlock(v5, (const BlockPos *)&v12);
    result = v9(v3, v10);
  return result;
}


signed int __fastcall CropBlock::getResourceCount(CropBlock *this, Random *a2, int a3, int a4)
{
  return 1;
}


int __fastcall CropBlock::canBeSilkTouched(CropBlock *this)
{
  return 0;
}


void __fastcall CropBlock::~CropBlock(CropBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall CropBlock::getVariant(CropBlock *this, int a2)
{
  int result; // r0@1

  LOBYTE(result) = BushBlock::MAX_GROWTH[0];
  if ( (unsigned __int8)a2 < (unsigned int)BushBlock::MAX_GROWTH[0] )
    LOBYTE(result) = a2;
  return (unsigned __int8)result;
}


int __fastcall CropBlock::getBaseSeed(CropBlock *this)
{
  return Item::mSeeds_wheat;
}


ItemInstance *__fastcall CropBlock::asItemInstance(CropBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  ItemInstance *v4; // r4@1
  int v5; // r0@1

  v4 = this;
  v5 = (*(int (__fastcall **)(BlockSource *))(*(_DWORD *)a2 + 508))(a2);
  return ItemInstance::ItemInstance(v4, v5);
}
