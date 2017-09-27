

int __fastcall CactusBlock::canBeSilkTouched(CactusBlock *this)
{
  return 0;
}


int __fastcall CactusBlock::mayPlace(CactusBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  CactusBlock *v5; // r6@1
  int result; // r0@2

  v3 = a3;
  v4 = a2;
  v5 = this;
  if ( Block::mayPlace(this, a2, a3) == 1 )
    result = (*(int (__fastcall **)(CactusBlock *, BlockSource *, const BlockPos *))(*(_DWORD *)v5 + 324))(v5, v4, v3);
  else
    result = 0;
  return result;
}


int __fastcall CactusBlock::_checkAlive(CactusBlock *this, BlockSource *a2, const BlockPos *a3)
{
  CactusBlock *v3; // r6@1
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  int result; // r0@1
  void (__fastcall *v7)(CactusBlock *, BlockSource *, const BlockPos *, unsigned int); // r7@2
  unsigned int v8; // r0@2
  char v9; // [sp+8h] [bp-18h]@2

  v3 = this;
  v4 = a3;
  v5 = a2;
  result = (*(int (**)(void))(*(_DWORD *)this + 324))();
  if ( !result )
  {
    v7 = *(void (__fastcall **)(CactusBlock *, BlockSource *, const BlockPos *, unsigned int))(*(_DWORD *)v3 + 276);
    v8 = BlockSource::getData(v5, v4);
    v7(v3, v5, v4, v8);
    v9 = BlockID::AIR;
    result = BlockSource::setBlock((int)v5, v4, &v9, 3);
  }
  return result;
}


AABB *__fastcall CactusBlock::getAABB(CactusBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, bool a6, int a7)
{
  AABB *v10; // r4@1
  float v18; // [sp+0h] [bp-20h]@1
  float v19; // [sp+Ch] [bp-14h]@1

  _R0 = *(_DWORD *)a3;
  _R1 = *((_DWORD *)a3 + 1);
  _R2 = *((_DWORD *)a3 + 2);
  v10 = a4;
  _R3 = _R1 + 1;
  __asm
  {
    VLDR            S2, =0.0625
    VMOV            S0, R0
  }
  ++_R0;
    VMOV            S4, R2
    VLDR            S12, =-0.0625
    VMOV            S6, R0
  _R0 = _R2 + 1;
    VMOV            S8, R3
    VMOV            S10, R0
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S4, S4
    VCVT.F32.S32    S6, S6
    VCVT.F32.S32    S8, S8
    VCVT.F32.S32    S10, S10
    VMOV            S14, R1
    VADD.F32        S0, S0, S2
    VCVT.F32.S32    S14, S14
    VADD.F32        S2, S4, S2
    VADD.F32        S4, S6, S12
    VADD.F32        S6, S8, S12
    VADD.F32        S8, S10, S12
    VSTR            S0, [SP,#0x20+var_14]
    VSTR            S14, [SP,#0x20+var_10]
    VSTR            S2, [SP,#0x20+var_C]
    VSTR            S4, [SP,#0x20+var_20]
    VSTR            S6, [SP,#0x20+var_1C]
    VSTR            S8, [SP,#0x20+var_18]
  AABB::set(v10, (const Vec3 *)&v19, (const Vec3 *)&v18);
  return v10;
}


signed int __fastcall CactusBlock::onGraphicsModeChanged(CactusBlock *this, int a2, bool a3, bool a4)
{
  int v4; // r4@1
  CactusBlock *v5; // r5@1
  signed int result; // r0@1

  v4 = a2;
  v5 = this;
  Block::onGraphicsModeChanged(this, a2, a3, a4);
  result = 5;
  if ( v4 )
    result = 4;
  *((_DWORD *)v5 + 5) = result;
  return result;
}


void __fastcall CactusBlock::~CactusBlock(CactusBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall CactusBlock::CactusBlock(int a1, const void **a2, char a3)
{
  int v3; // r4@1
  char v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  float v14; // [sp+0h] [bp-28h]@1
  float v15; // [sp+Ch] [bp-1Ch]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(22);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &loc_27050C0;
  Block::setTicking((Block *)v3, 1);
  Block::setSolid((Block *)v3, 0);
  Block::setPushesOutItems((Block *)v3, 1);
  _R0 = &Block::SIZE_OFFSET;
  __asm { VLDR            S0, [R0] }
  _R0 = &Vec3::ONE;
  __asm
  {
    VSTR            S0, [SP,#0x28+var_1C]
    VSTR            S0, [SP,#0x28+var_18]
    VLDR            S2, [R0]
    VLDR            S4, [R0,#4]
    VLDR            S6, [R0,#8]
    VSUB.F32        S2, S2, S0
    VSTR            S0, [SP,#0x28+var_14]
    VSUB.F32        S4, S4, S0
    VSUB.F32        S0, S6, S0
    VSTR            S2, [SP,#0x28+var_28]
    VSTR            S4, [SP,#0x28+var_24]
    VSTR            S0, [SP,#0x28+var_20]
  }
  (*(void (__fastcall **)(int, float *, float *))(*(_DWORD *)v3 + 452))(v3, &v15, &v14);
  *(_DWORD *)(v3 + 24) = 570425344;
  *(_DWORD *)(v3 + 28) = 0;
  return v3;
}


signed int __fastcall CactusBlock::tick(CactusBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  const BlockPos *v4; // r6@1
  BlockSource *v5; // r8@1
  CactusBlock *v6; // r9@1
  int v7; // r0@1
  int v8; // r1@1
  int v9; // r2@1
  signed int result; // r0@1
  signed int v11; // r5@2
  signed int v12; // r7@2
  int v13; // r1@3
  int v14; // r2@3
  unsigned __int64 *v15; // r4@5
  unsigned int v16; // r0@5
  int v17; // r1@5 OVERLAPPED
  int v18; // r2@5 OVERLAPPED
  signed int v19; // r0@5
  int v20; // r0@6
  int v21; // r3@6
  int (__fastcall *v22)(CactusBlock *, BlockSource *, int *, int *); // r7@6
  int v23; // r0@6
  int v24; // r3@7
  char v25; // [sp+Ch] [bp-6Ch]@7
  int v26; // [sp+10h] [bp-68h]@6
  int v27; // [sp+14h] [bp-64h]@6
  int v28; // [sp+18h] [bp-60h]@6
  int v29; // [sp+1Ch] [bp-5Ch]@6
  int v30; // [sp+20h] [bp-58h]@6
  int v31; // [sp+24h] [bp-54h]@6
  char v32; // [sp+28h] [bp-50h]@6
  char v33; // [sp+29h] [bp-4Fh]@6
  char v34; // [sp+2Ch] [bp-4Ch]@6
  int v35; // [sp+30h] [bp-48h]@6
  int v36; // [sp+34h] [bp-44h]@6
  int v37; // [sp+38h] [bp-40h]@6
  unsigned __int8 v38; // [sp+3Ch] [bp-3Ch]@3
  int v39; // [sp+40h] [bp-38h]@3
  int v40; // [sp+44h] [bp-34h]@3
  int v41; // [sp+48h] [bp-30h]@3
  int v42; // [sp+4Ch] [bp-2Ch]@1
  int v43; // [sp+50h] [bp-28h]@1
  int v44; // [sp+54h] [bp-24h]@1

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 2);
  v42 = v7;
  v43 = v8 + 1;
  v44 = v9;
  result = BlockSource::isEmptyBlock(v5, (const BlockPos *)&v42);
  if ( result == 1 )
  {
    v11 = 0;
    v12 = -1;
    do
    {
      v13 = *((_DWORD *)v4 + 1);
      v14 = *((_DWORD *)v4 + 2);
      v39 = *(_DWORD *)v4;
      v40 = v12 + v13;
      v41 = v14;
      BlockSource::getBlockID((BlockSource *)&v38, v5, (int)&v39);
      --v12;
      ++v11;
      result = *((_BYTE *)v6 + 4);
    }
    while ( v38 == result );
    if ( v11 <= 2 )
      v15 = (unsigned __int64 *)Block::getBlockState((int)v6, 1);
      v16 = BlockSource::getData(v5, v4);
      *(_QWORD *)&v17 = *(_QWORD *)v4;
      v19 = (v16 >> (*v15 + 1 - (*v15 >> 32))) & (0xFu >> (4 - (*v15 >> 32)));
      if ( v19 < 10 )
      {
        v24 = *((_DWORD *)v4 + 2);
        v25 = *((_BYTE *)v6 + 4);
        result = BlockSource::setBlockAndData((int)v5, v17, v18, v24, &v25, v19 + 1, 4);
      }
      else
        v20 = *((_DWORD *)v4 + 2);
        v35 = v17;
        v36 = v18 + 1;
        v37 = v20;
        v34 = *((_BYTE *)v6 + 4);
        BlockSource::setBlock((int)v5, (BlockPos *)&v35, &v34, 3);
        v32 = *((_BYTE *)v6 + 4);
        v33 = 0;
        BlockSource::setBlockAndData((int)v5, v4, (int)&v32, 4, 0);
        v21 = *((_DWORD *)v4 + 2);
        v22 = *(int (__fastcall **)(CactusBlock *, BlockSource *, int *, int *))(*(_DWORD *)v6 + 252);
        v23 = *((_DWORD *)v4 + 1) + 1;
        v29 = *(_DWORD *)v4;
        v30 = v23;
        v31 = v21;
        v26 = v29;
        v27 = v23;
        v28 = v21;
        result = v22(v6, v5, &v29, &v26);
  }
  return result;
}


signed int __fastcall CactusBlock::canSurvive(CactusBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r5@1
  BlockSource *v4; // r4@1
  int v5; // r0@1
  int v6; // r1@1
  int v7; // r2@1
  Material *v8; // r0@1
  int v9; // r1@2
  int v10; // r2@2
  Material *v11; // r0@2
  int v12; // r2@3
  Material *v13; // r0@3
  int v14; // r2@4
  Material *v15; // r0@4
  signed int result; // r0@5
  int v17; // r1@6
  int v18; // r2@6
  int v19; // [sp+0h] [bp-50h]@6
  int v20; // [sp+4h] [bp-4Ch]@6
  int v21; // [sp+8h] [bp-48h]@6
  unsigned __int8 v22; // [sp+Ch] [bp-44h]@6
  __int64 v23; // [sp+10h] [bp-40h]@4
  int v24; // [sp+18h] [bp-38h]@4
  __int64 v25; // [sp+1Ch] [bp-34h]@3
  int v26; // [sp+24h] [bp-2Ch]@3
  int v27; // [sp+28h] [bp-28h]@2
  int v28; // [sp+2Ch] [bp-24h]@2
  int v29; // [sp+30h] [bp-20h]@2
  int v30; // [sp+34h] [bp-1Ch]@1
  int v31; // [sp+38h] [bp-18h]@1
  int v32; // [sp+3Ch] [bp-14h]@1

  v3 = a3;
  v4 = a2;
  v5 = *(_DWORD *)a3;
  v6 = *((_DWORD *)a3 + 1);
  v7 = *((_DWORD *)a3 + 2);
  v30 = v5 - 1;
  v31 = v6;
  v32 = v7;
  v8 = (Material *)BlockSource::getMaterial(v4, (const BlockPos *)&v30);
  if ( Material::isSolid(v8)
    || (v9 = *((_DWORD *)v3 + 1),
        v10 = *((_DWORD *)v3 + 2),
        v27 = *(_DWORD *)v3 + 1,
        v28 = v9,
        v29 = v10,
        v11 = (Material *)BlockSource::getMaterial(v4, (const BlockPos *)&v27),
        Material::isSolid(v11))
    || (v12 = *((_DWORD *)v3 + 2),
        v25 = *(_QWORD *)v3,
        v26 = v12 - 1,
        v13 = (Material *)BlockSource::getMaterial(v4, (const BlockPos *)&v25),
        Material::isSolid(v13))
    || (v14 = *((_DWORD *)v3 + 2),
        v23 = *(_QWORD *)v3,
        v24 = v14 + 1,
        v15 = (Material *)BlockSource::getMaterial(v4, (const BlockPos *)&v23),
        Material::isSolid(v15)) )
  {
    result = 0;
  }
  else
    v17 = *((_DWORD *)v3 + 1);
    v18 = *((_DWORD *)v3 + 2);
    v19 = *(_DWORD *)v3;
    v20 = v17 - 1;
    v21 = v18;
    BlockSource::getBlockID((BlockSource *)&v22, v4, (int)&v19);
    if ( v22 == *(_BYTE *)(Block::mCactus + 4) )
    {
      result = 1;
    }
    else
      result = 0;
      if ( v22 == *(_BYTE *)(Block::mSand + 4) )
        result = 1;
  return result;
}


void __fastcall CactusBlock::~CactusBlock(CactusBlock *this)
{
  CactusBlock::~CactusBlock(this);
}


int __fastcall CactusBlock::neighborChanged(CactusBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  CactusBlock *v4; // r6@1
  const BlockPos *v5; // r4@1
  BlockSource *v6; // r5@1
  int result; // r0@1
  void (__fastcall *v8)(CactusBlock *, BlockSource *, const BlockPos *, unsigned int); // r7@2
  unsigned int v9; // r0@2
  char v10; // [sp+8h] [bp-18h]@2

  v4 = this;
  v5 = a3;
  v6 = a2;
  result = (*(int (**)(void))(*(_DWORD *)this + 324))();
  if ( !result )
  {
    v8 = *(void (__fastcall **)(CactusBlock *, BlockSource *, const BlockPos *, unsigned int))(*(_DWORD *)v4 + 276);
    v9 = BlockSource::getData(v6, v5);
    v8(v4, v6, v5, v9);
    v10 = BlockID::AIR;
    result = BlockSource::setBlock((int)v6, v5, &v10, 3);
  }
  return result;
}


int __fastcall CactusBlock::entityInside(CactusBlock *this, BlockSource *a2, const BlockPos *a3, Entity *a4)
{
  Entity *v4; // r4@1
  int result; // r0@1
  unsigned __int8 v6; // [sp+4h] [bp-Ch]@1

  v4 = a4;
  BlockSource::getBlockID((BlockSource *)&v6, a2, (int)a3);
  result = v6;
  *((_BYTE *)v4 + 221) = v6;
  return result;
}
