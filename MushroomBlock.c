

void __fastcall MushroomBlock::~MushroomBlock(MushroomBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall MushroomBlock::onFertilized(MushroomBlock *this, BlockSource *a2, const BlockPos *a3, Entity *a4, ItemUseCallback *a5)
{
  BlockSource *v5; // r5@1
  MushroomBlock *v6; // r6@1
  const BlockPos *v7; // r4@1
  Level *v8; // r0@1
  Level *v9; // r0@2
  char *v10; // r0@2
  Level *v16; // r0@4
  char *v17; // r0@4
  int result; // r0@4

  v5 = a2;
  v6 = this;
  v7 = a3;
  v8 = (Level *)BlockSource::getLevel(a2);
  if ( Level::isClientSide(v8) )
    goto LABEL_8;
  v9 = (Level *)BlockSource::getLevel(v5);
  v10 = Level::getRandom(v9);
  _R0 = Random::_genRandInt32((Random *)v10);
  __asm
  {
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S0, D0
    VLDR            S2, =0.4
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    v16 = (Level *)BlockSource::getLevel(v5);
    v17 = Level::getRandom(v16);
    result = MushroomBlock::_growTree(v6, v5, v7, (Random *)v17, a5);
  else
LABEL_8:
    result = 1;
  return result;
}


int __fastcall MushroomBlock::MushroomBlock(int a1, const void **a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  int v8; // [sp+0h] [bp-28h]@1
  signed int v9; // [sp+4h] [bp-24h]@1
  signed int v10; // [sp+8h] [bp-20h]@1
  int v11; // [sp+Ch] [bp-1Ch]@1
  int v12; // [sp+10h] [bp-18h]@1
  signed int v13; // [sp+14h] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(8);
  BushBlock::BushBlock(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_270F058;
  v11 = 1050253722;
  v12 = 0;
  v13 = 1050253722;
  v8 = 1060320051;
  v9 = 1053609165;
  v10 = 1060320051;
  Block::setVisualShape((Block *)v3, (const Vec3 *)&v11, (const Vec3 *)&v8);
  (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v3 + 476))(v3, 1);
  *(_DWORD *)(v3 + 20) = 5;
  return v3;
}


int __fastcall MushroomBlock::canSurvive(MushroomBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r5@1
  MushroomBlock *v4; // r4@1
  signed int v5; // r0@1
  BlockSource *v6; // r6@1
  int v7; // r2@3
  Block *v8; // r7@3
  int result; // r0@5
  unsigned __int8 v10; // [sp+4h] [bp-24h]@6
  int v11; // [sp+8h] [bp-20h]@3
  int v12; // [sp+Ch] [bp-1Ch]@3
  int v13; // [sp+10h] [bp-18h]@3

  v3 = a3;
  v4 = this;
  v5 = *((_DWORD *)a3 + 1);
  v6 = a2;
  if ( v5 < 0 || v5 >= *((_WORD *)a2 + 12) )
    goto LABEL_11;
  v7 = *((_DWORD *)a3 + 2);
  v11 = *(_DWORD *)v3;
  v12 = v5 - 1;
  v13 = v7;
  v8 = (Block *)BlockSource::getBlock(a2, (const BlockPos *)&v11);
  if ( Block::isType(v8, (const Block *)Block::mPodzol) || Block::isType(v8, (const Block *)Block::mMycelium) )
    return 1;
  BlockSource::getRawBrightness((BlockSource *)&v10, v6, (int)v3, 1);
  if ( v10 > 0xCu )
LABEL_11:
    result = 0;
  else
    result = (*(int (__fastcall **)(MushroomBlock *, Block *))(*(_DWORD *)v4 + 228))(v4, v8);
  return result;
}


int __fastcall MushroomBlock::mayPlaceOn(MushroomBlock *this, const Block *a2)
{
  return Block::mSolid[*((_BYTE *)a2 + 4)];
}


int __fastcall MushroomBlock::_growTree(MushroomBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4, ItemUseCallback *a5)
{
  Block *v5; // r5@1
  BlockSource *v6; // r7@1
  Random *v7; // r8@1
  const BlockPos *v8; // r9@1
  int v9; // r1@3
  WorldChangeTransaction *v10; // r4@3
  signed int v11; // r4@8
  char v13; // [sp+4h] [bp-2Ch]@5

  v5 = this;
  v6 = a2;
  v7 = a4;
  v8 = a3;
  if ( Block::isType(this, (const Block *)Block::mBrownMushroom)
    || Block::isType(v5, (const Block *)Block::mRedMushroom) == 1 )
  {
    v9 = 0;
    v10 = 0;
    if ( v5 != (Block *)Block::mBrownMushroom )
      v9 = 1;
    HugeMushroomFeature::HugeMushroomFeature((Feature *)&v13, v9);
    if ( a5 )
    {
      v10 = (WorldChangeTransaction *)operator new(0x14u);
      WorldChangeTransaction::WorldChangeTransaction((int)v10, (int)v6, 1, 0, (int)a5);
      Feature::setTransaction((Feature *)&v13, v10);
    }
    HugeMushroomFeature::place((HugeMushroomFeature *)&v13, v6, v8, v7);
    if ( v10 )
      LOBYTE(v5) = WorldChangeTransaction::apply(v10);
      WorldChangeTransaction::~WorldChangeTransaction(v10);
      operator delete((void *)v10);
      v11 = 0;
    else
      v11 = 1;
    Feature::~Feature((Feature *)&v13);
    if ( v11 == 1 )
      LOBYTE(v5) = 1;
  }
  else
    LOBYTE(v5) = 1;
  return (unsigned __int8)v5 & 1;
}


int __fastcall MushroomBlock::tick(MushroomBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  MushroomBlock *v4; // r8@1
  const BlockPos *v5; // r7@1
  BlockSource *v6; // r9@1
  int result; // r0@1
  signed int v8; // r10@2
  int v9; // r4@2
  int v10; // r0@2
  int v11; // r1@2
  int v12; // r11@3
  int v13; // r5@4
  bool v14; // nf@9
  unsigned __int8 v15; // vf@9
  int v16; // r5@10
  int v17; // r3@10
  unsigned int v18; // r10@11
  int v19; // r11@11
  char v20; // ST0C_1@11
  char v21; // ST08_1@11
  int v22; // ST10_4@11
  int v23; // r11@11
  int v24; // r6@11
  int v25; // r7@11
  int v26; // r5@11
  int v27; // r10@11
  int v28; // r1@11
  int (__fastcall *v29)(MushroomBlock *, BlockSource *, int *); // r3@13
  int v30; // r0@13
  int v31; // r5@15
  unsigned int v32; // r6@19
  char v33; // r11@19
  int (__fastcall *v34)(MushroomBlock *, BlockSource *, int *); // r3@21
  int v35; // [sp+10h] [bp-58h]@12
  int v36; // [sp+14h] [bp-54h]@2
  int v37; // [sp+18h] [bp-50h]@2
  int v38; // [sp+1Ch] [bp-4Ch]@2
  int v39; // [sp+1Ch] [bp-4Ch]@15
  Random *v40; // [sp+20h] [bp-48h]@1
  char v41; // [sp+24h] [bp-44h]@22
  int v42; // [sp+28h] [bp-40h]@21
  int v43; // [sp+2Ch] [bp-3Ch]@21
  int v44; // [sp+30h] [bp-38h]@21
  int v45; // [sp+34h] [bp-34h]@13
  int v46; // [sp+38h] [bp-30h]@13
  int v47; // [sp+3Ch] [bp-2Ch]@13
  unsigned __int8 v48; // [sp+40h] [bp-28h]@5

  v4 = this;
  v40 = a4;
  v5 = a3;
  v6 = a2;
  result = Random::_genRandInt32(a4) % 0x19;
  if ( !result )
  {
    v8 = 5;
    v9 = *(_DWORD *)v5 - 4;
    v38 = *(_DWORD *)v5;
    v36 = *((_DWORD *)v5 + 1);
    v10 = *((_DWORD *)v5 + 1);
    v11 = *((_DWORD *)v5 + 2);
    v37 = *((_DWORD *)v5 + 2);
    do
    {
      v12 = v11 - 4;
      do
      {
        v13 = v10 - 2;
        do
        {
          BlockSource::getBlockID((BlockSource *)&v48, (int)v6, v9, ++v13, v12);
          result = *((_BYTE *)v4 + 4);
          if ( v48 == result )
          {
            if ( v8 < 2 )
              return result;
            --v8;
          }
          v10 = *((_DWORD *)v5 + 1);
        }
        while ( v13 <= v10 );
        v11 = *((_DWORD *)v5 + 2);
        v15 = __OFSUB__(v12, v11 + 4);
        v14 = v12++ - (v11 + 4) < 0;
      }
      while ( v14 ^ v15 );
      v16 = *(_DWORD *)v5;
      v17 = *(_DWORD *)v5 + 4;
      v15 = __OFSUB__(v9, v17);
      v14 = v9++ - v17 < 0;
    }
    while ( v14 ^ v15 );
    v18 = Random::_genRandInt32(v40);
    v19 = *((_DWORD *)v5 + 1);
    v20 = Random::_genRandInt32(v40);
    v21 = Random::_genRandInt32(v40);
    v22 = *((_DWORD *)v5 + 2);
    v23 = (v20 & 1) + v19 - (v21 & 1);
    v24 = v18 % 3 + v16 - 1;
    v25 = Random::_genRandInt32(v40) % 3 + v22 - 1;
    LOBYTE(result) = BlockSource::isEmptyBlock(v6, v24, v23, v25);
    v26 = v38;
    v27 = v37;
    v28 = 4;
      v35 = v28;
      if ( result & 1 )
        v29 = *(int (__fastcall **)(MushroomBlock *, BlockSource *, int *))(*(_DWORD *)v4 + 324);
        v45 = v24;
        v46 = v23;
        v47 = v25;
        v30 = v29(v4, v6, &v45);
        if ( v30 )
          v26 = v24;
        v39 = v26;
        v31 = v36;
          v31 = v23;
          v27 = v25;
      else
      v36 = v31;
      v32 = Random::_genRandInt32(v40);
      v33 = Random::_genRandInt32(v40);
      v23 = (v33 & 1) + v31 - (Random::_genRandInt32(v40) & 1);
      v26 = v39;
      v24 = v32 % 3 + v39 - 1;
      v25 = Random::_genRandInt32(v40) % 3 + v27 - 1;
      result = BlockSource::isEmptyBlock(v6, v24, v23, v25);
      v28 = v35 - 1;
    while ( v35 != 1 );
    if ( result )
      v34 = *(int (__fastcall **)(MushroomBlock *, BlockSource *, int *))(*(_DWORD *)v4 + 324);
      v42 = v24;
      v43 = v23;
      v44 = v25;
      result = v34(v4, v6, &v42);
      if ( result == 1 )
        v41 = *((_BYTE *)v4 + 4);
        result = BlockSource::setBlock((int)v6, v24, v23, v25, &v41, 3);
  }
  return result;
}


int __fastcall MushroomBlock::mayPlace(MushroomBlock *this, BlockSource *a2, const BlockPos *a3, signed __int8 a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  MushroomBlock *v6; // r6@1
  int result; // r0@2

  v4 = a3;
  v5 = a2;
  v6 = this;
  if ( Block::mayPlace(this, a2, a3, a4) == 1 )
    result = (*(int (__fastcall **)(MushroomBlock *, BlockSource *, const BlockPos *))(*(_DWORD *)v6 + 324))(v6, v5, v4);
  else
    result = 0;
  return result;
}


void __fastcall MushroomBlock::~MushroomBlock(MushroomBlock *this)
{
  MushroomBlock::~MushroomBlock(this);
}
