

void __fastcall FlowerBlock::~FlowerBlock(FlowerBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall FlowerBlock::_randomWalk(FlowerBlock *this, BlockSource *a2, int *a3, int *a4, int *a5, int a6)
{
  BlockSource *v6; // r9@1
  int *v7; // r4@1
  int *v8; // r5@1
  Level *v9; // r0@1
  char *v10; // r0@1
  int v11; // r2@1
  Random *v12; // r7@1
  int v13; // r8@2
  unsigned int v14; // kr0C_4@3
  int v15; // r0@3
  signed int v16; // r0@6
  signed int v17; // r1@10
  unsigned __int8 v19; // [sp+10h] [bp-28h]@3

  v6 = a2;
  v7 = a4;
  v8 = a3;
  v9 = (Level *)BlockSource::getLevel(a2);
  v10 = Level::getRandom(v9);
  v11 = a6;
  v12 = (Random *)v10;
  if ( a6 < 16 )
  {
    v16 = 1;
  }
  else
    v13 = 0;
    while ( 1 )
    {
      *v8 = Random::_genRandInt32(v12) % 3 + *v8 - 1;
      v14 = Random::_genRandInt32(v12);
      *v7 += (signed int)(Random::_genRandInt32(v12) % 3 * (v14 % 3 - 1)) / 2;
      v15 = Random::_genRandInt32(v12) % 3 + *a5 - 1;
      *a5 = v15;
      BlockSource::getBlockID((BlockSource *)&v19, (int)v6, *v8, *v7 - 1, v15);
      if ( v19 != *(_BYTE *)(Block::mGrass + 4) || BlockSource::isSolidBlockingBlock(v6, *v8, *v7, *a5) == 1 )
        break;
      if ( ++v13 >= a6 / 16 )
      {
        v16 = 1;
        goto LABEL_9;
      }
    }
    v16 = 0;
LABEL_9:
    v11 = a6;
  v17 = 0;
  if ( v11 > 15 )
    v17 = 1;
  return v16 & v17;
}


int __fastcall FlowerBlock::randomlyModifyPosition(FlowerBlock *this, const BlockPos *a2, int a3)
{
  BlockPos *v3; // r5@1
  unsigned int v5; // r0@1
  int result; // r0@1

  v3 = (BlockPos *)a3;
  _R4 = this;
  Vec3::Vec3((int)this, a3);
  v5 = BlockPos::randomSeed(v3);
  _R1 = (v5 >> 16) & 0xF;
  __asm
  {
    VLDR            S2, =0.023333
    VLDR            S4, =-0.175
    VMOV.F32        S12, #-1.0
    VMOV            S0, R1
    VLDR            S10, =0.066667
  }
  _R2 = sub_18BF8D8;
    VCVT.F32.S32    S0, S0
    VLDR            S6, [R4]
  _R1 = (v5 >> 20) & 0xF;
    VADD.F32        S6, S6, S4
    VMOV            S8, R1
    VCVT.F32.S32    S8, S8
    VMUL.F32        S0, S0, S2
    VMUL.F32        S8, S8, S10
    VADD.F32        S0, S6, S0
    VADD.F32        S6, S8, S12
    VSTR            S0, [R4]
  result = (v5 >> 24) & 0xF;
    VMOV            S0, R0
  if ( !_ZF )
    _R2 = (_DWORD *(__fastcall *)(int, BlockSource *, int, int, int, int, int))&loc_18BF8DC;
    VLDR            S8, [R2]
    VMUL.F32        S6, S6, S8
    VLDR            S2, [R4,#4]
    VADD.F32        S2, S6, S2
    VADD.F32        S0, S0, S4
    VSTR            S2, [R4,#4]
    VLDR            S2, [R4,#8]
    VADD.F32        S0, S0, S2
    VSTR            S0, [R4,#8]
  return result;
}


void __fastcall FlowerBlock::buildDescriptionId(FlowerBlock *this, int a2, unsigned int a3)
{
  FlowerBlock::buildDescriptionId(this, a2, a3);
}


int __fastcall FlowerBlock::getSpawnResourcesAuxValue(FlowerBlock *this, int a2)
{
  return a2;
}


void __fastcall FlowerBlock::buildDescriptionId(FlowerBlock *this, int a2, unsigned int a3)
{
  int v3; // r5@1
  FlowerBlock *v4; // r4@1
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
  int v18; // [sp+4h] [bp-54h]@6
  char *v19; // [sp+8h] [bp-50h]@6

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (unsigned __int64 *)Block::getBlockState(a2, 24);
  v7 = (v5 >> (*v6 + 1 - (*v6 >> 32))) & (0xFu >> (4 - (*v6 >> 32)));
  v8 = byte_28106E4[0];
  if ( v7 > 8 )
    v7 = 0;
  __dmb();
  if ( !(v8 & 1) && j___cxa_guard_acquire(byte_28106E4) )
  {
    sub_21E94B4(dword_2810730, "dandelion");
    dword_2810730[1] = &unk_28898CC;
    dword_2810730[2] = &unk_28898CC;
    dword_2810730[3] = &unk_28898CC;
    dword_2810730[4] = &unk_28898CC;
    dword_2810730[5] = &unk_28898CC;
    dword_2810730[6] = &unk_28898CC;
    dword_2810730[7] = &unk_28898CC;
    dword_2810730[8] = &unk_28898CC;
    sub_21E94B4((void **)&dword_2810754, "poppy");
    sub_21E94B4((void **)&unk_2810758, "blueOrchid");
    sub_21E94B4((void **)&unk_281075C, "allium");
    sub_21E94B4((void **)&unk_2810760, "houstonia");
    sub_21E94B4((void **)&unk_2810764, "tulipRed");
    sub_21E94B4((void **)&unk_2810768, "tulipOrange");
    sub_21E94B4((void **)&unk_281076C, "tulipWhite");
    sub_21E94B4((void **)&unk_2810770, "tulipPink");
    sub_21E94B4((void **)&dword_2810774, "oxeyeDaisy");
    _cxa_atexit(sub_ABD734);
    j___cxa_guard_release(byte_28106E4);
  }
  v9 = sub_21E8AF4(&v18, (int *)(v3 + 8));
  sub_21E7408((const void **)v9, ".", 1u);
  v10 = sub_21E72F0((const void **)&v18, (const void **)&dword_2810730[9 * *(_DWORD *)(v3 + 644)] + v7);
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


void __fastcall FlowerBlock::~FlowerBlock(FlowerBlock *this)
{
  FlowerBlock::~FlowerBlock(this);
}


_DWORD *__fastcall FlowerBlock::getAABB(FlowerBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, int a6, int a7)
{
  FlowerBlock *v7; // r5@1
  AABB *v8; // r6@1
  const BlockPos *v9; // r4@1
  int v10; // r0@2
  AABB *v11; // r6@2
  _DWORD *result; // r0@2
  char v13; // [sp+8h] [bp-20h]@2

  v7 = this;
  v8 = a4;
  v9 = a3;
  if ( a6 == 1 )
  {
    v10 = (*(int (__fastcall **)(FlowerBlock *, BlockSource *))(*(_DWORD *)this + 416))(this, a2);
    v11 = (AABB *)AABB::set(v8, (const Vec3 *)v10, (const Vec3 *)(v10 + 12));
    (*(void (__fastcall **)(char *, FlowerBlock *, const BlockPos *))(*(_DWORD *)v7 + 24))(&v13, v7, v9);
    result = (_DWORD *)AABB::move(v11, (const Vec3 *)&v13);
  }
  else
    result = &AABB::EMPTY;
  return result;
}


int __fastcall FlowerBlock::onFertilized(FlowerBlock *this, BlockSource *a2, const BlockPos *a3, Entity *a4, ItemUseCallback *a5)
{
  BlockSource *v5; // r8@1
  const BlockPos *v6; // r4@1
  Level *v7; // r0@1
  int *v8; // r6@1
  BlockSource *v9; // r9@1
  int v10; // r10@1
  int v11; // r1@3
  int v12; // r2@3
  char v13; // r0@5
  FlowerBlock *v14; // r2@5
  FlowerBlock *v15; // r9@5
  int (__fastcall *v16)(ItemUseCallback *, int *, _DWORD *, char *); // r12@12
  void (__fastcall *v17)(ItemUseCallback *, int *, _DWORD *, char *); // r12@14
  int v18; // r1@18
  int v19; // r2@18
  char v20; // r0@20
  FlowerBlock *v21; // r2@20
  FlowerBlock *v22; // r11@20
  signed int v24; // [sp+Ch] [bp-5Ch]@2
  signed int v25; // [sp+10h] [bp-58h]@1
  Random *v26; // [sp+20h] [bp-48h]@1
  FlowerBlock *v27; // [sp+24h] [bp-44h]@1
  char v28; // [sp+28h] [bp-40h]@14
  char v29; // [sp+29h] [bp-3Fh]@14
  char v30; // [sp+2Ch] [bp-3Ch]@14
  char v31; // [sp+2Dh] [bp-3Bh]@14
  char v32; // [sp+30h] [bp-38h]@12
  char v33; // [sp+31h] [bp-37h]@12
  char v34; // [sp+34h] [bp-34h]@1
  int v35; // [sp+38h] [bp-30h]@3
  int v36; // [sp+3Ch] [bp-2Ch]@1
  int v37; // [sp+40h] [bp-28h]@3

  v5 = a2;
  v27 = this;
  v6 = a3;
  v7 = (Level *)BlockSource::getLevel(a2);
  v26 = (Random *)Level::getRandom(v7);
  v8 = &v36;
  v9 = (BlockSource *)&v34;
  v10 = 16;
  v25 = 1;
  if ( a5 )
  {
    v24 = 0;
    do
    {
      v11 = *((_DWORD *)v6 + 1);
      v12 = *((_DWORD *)v6 + 2);
      v35 = *(_DWORD *)v6;
      v36 = v11 + 1;
      v37 = v12;
      if ( FlowerBlock::_randomWalk((FlowerBlock *)(v11 + 1), v5, &v35, v8, &v37, v10) == 1 )
      {
        BlockSource::getBlockID(v9, v5, (int)&v35);
        if ( !v34 )
        {
          v13 = Random::_genRandInt32(v26);
          v14 = v27;
          v15 = (FlowerBlock *)Block::mRedFlower;
          if ( v27 == (FlowerBlock *)Block::mRedFlower )
            v15 = (FlowerBlock *)Block::mYellowFlower;
          else
            v14 = (FlowerBlock *)Block::mYellowFlower;
          if ( v13 & 7 )
            v15 = v14;
          if ( v15
            && (*(int (__fastcall **)(FlowerBlock *, BlockSource *, int *))(*(_DWORD *)v15 + 324))(v15, v5, &v35) == 1 )
          {
            v16 = *(int (__fastcall **)(ItemUseCallback *, int *, _DWORD *, char *))(*(_DWORD *)a5 + 16);
            v32 = *((_BYTE *)v15 + 4);
            v33 = 0;
            if ( v16(a5, &v35, &FullBlock::AIR, &v32) )
            {
              v24 = 1;
            }
            else
              v30 = *((_BYTE *)v15 + 4);
              v31 = 0;
              BlockSource::setBlockAndData((int)v5, (BlockPos *)&v35, (int)&v30, 3, 0);
              v17 = *(void (__fastcall **)(ItemUseCallback *, int *, _DWORD *, char *))(*(_DWORD *)a5 + 20);
              v28 = *((_BYTE *)v15 + 4);
              v29 = 0;
              v25 = 0;
              v17(a5, &v35, &FullBlock::AIR, &v28);
          }
          v8 = &v36;
          v9 = (BlockSource *)&v34;
        }
      }
      ++v10;
    }
    while ( v10 != 64 );
  }
  else
      v18 = *((_DWORD *)v6 + 1);
      v19 = *((_DWORD *)v6 + 2);
      v36 = v18 + 1;
      v37 = v19;
      if ( FlowerBlock::_randomWalk((FlowerBlock *)(v18 + 1), v5, &v35, &v36, &v37, v10) == 1 )
        BlockSource::getBlockID((BlockSource *)&v34, v5, (int)&v35);
          v20 = Random::_genRandInt32(v26);
          v21 = v27;
          v22 = (FlowerBlock *)Block::mRedFlower;
            v22 = (FlowerBlock *)Block::mYellowFlower;
            v21 = (FlowerBlock *)Block::mYellowFlower;
          if ( v20 & 7 )
            v22 = v21;
          if ( v22
            && (*(int (__fastcall **)(FlowerBlock *, BlockSource *, int *))(*(_DWORD *)v22 + 324))(v22, v5, &v35) == 1 )
            v30 = *((_BYTE *)v22 + 4);
            v31 = 0;
            v25 = 0;
            BlockSource::setBlockAndData((int)v5, (BlockPos *)&v35, (int)&v30, 3, 0);
  return ~(v25 & v24) & 1;
}


int __fastcall FlowerBlock::FlowerBlock(int a1, const void **a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r4@1
  int v6; // r5@1
  const void **v7; // r6@1
  int v8; // r0@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = Material::getMaterial(8);
  BushBlock::BushBlock(v4, v7, v6, v8);
  *(_DWORD *)v4 = &off_270B628;
  *(_DWORD *)(v4 + 644) = v5;
  *(_DWORD *)(v4 + 20) = 5;
  return v4;
}
