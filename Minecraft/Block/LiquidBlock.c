

signed int __fastcall LiquidBlock::isNeighborSolid(LiquidBlock *this, BlockSource *a2, const BlockPos *a3, signed __int8 a4)
{
  const BlockPos *v4; // r8@1
  BlockSource *v5; // r9@1
  Block *v6; // r5@1
  signed __int8 v7; // r7@1
  int v8; // r6@1
  int v9; // r4@1
  int v10; // r0@1
  signed int v11; // r7@2
  int v12; // r0@5
  int v13; // r0@7
  float v22; // [sp+4h] [bp-44h]@32
  char v25; // [sp+10h] [bp-38h]@32

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = BlockSource::getBlock(a2, a3);
  v9 = Block::getMaterial((Block *)v8);
  v10 = Block::getMaterial(v6);
  if ( Material::operator==(v9, v10) )
  {
    v11 = 0;
  }
  else if ( v7 == 1 )
    v11 = 1;
  else
    v12 = Block::getMaterial((Block *)Block::mIce);
    if ( Material::operator==(v9, v12) )
    {
      v11 = 0;
    }
    else
      v13 = *(_BYTE *)(v8 + 4);
      if ( v13 == *(_BYTE *)(Block::mGlass + 4) )
      {
        v11 = 0;
      }
      else if ( v13 == *(_BYTE *)(Block::mStainedGlass + 4) )
      else if ( v13 == *(_BYTE *)(Block::mGlowStone + 4) )
      else if ( v13 == *(_BYTE *)(Block::mSeaLantern + 4) )
      else if ( v13 == *(_BYTE *)(Block::mLeaves + 4) )
      else if ( v13 == *(_BYTE *)(Block::mLeaves2 + 4) )
      else if ( v13 == *(_BYTE *)(Block::mCauldron + 4) )
      else if ( v13 == *(_BYTE *)(Block::mBeacon + 4) )
      else if ( v13 == *(_BYTE *)(Block::mEndGateway + 4) )
      else if ( v13 == *(_BYTE *)(Block::mPiston + 4) )
      else if ( v13 == *(_BYTE *)(Block::mShulkerBox + 4) )
      else if ( v13 == *(_BYTE *)(Block::mTNT + 4) )
      else
        if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v8 + 84))(v8) )
        {
          AABB::AABB((AABB *)&v25);
          (*(void (__fastcall **)(int, char *, BlockSource *, const BlockPos *))(*(_DWORD *)v8 + 12))(v8, &v25, v5, v4);
          AABB::getBounds((AABB *)&v22, (int)&v25);
          __asm { VLDR            S2, [SP,#0x48+var_44] }
          _R0 = &Vec3::ONE;
          __asm
          {
            VLDR            S0, [R0]
            VCMPE.F32       S2, S0
            VMRS            APSR_nzcv, FPSCR
          }
          if ( _ZF )
            v11 = 0;
            __asm { VLDR            S0, [SP,#0x48+var_40] }
            _R0 = &Vec3::ONE;
            __asm
            {
              VLDR            S2, [R0,#4]
              VCMPE.F32       S0, S2
              VMRS            APSR_nzcv, FPSCR
            }
            if ( _ZF )
              __asm { VLDR            S0, [SP,#0x48+var_3C] }
              _R0 = &Vec3::ONE;
              __asm
              {
                VLDR            S2, [R0,#8]
                VCMPE.F32       S0, S2
                VMRS            APSR_nzcv, FPSCR
              }
              if ( _ZF )
                v11 = 1;
        }
  return v11;
}


signed int __fastcall LiquidBlock::getTickDelay(LiquidBlock *this, BlockSource *a2)
{
  LiquidBlock *v2; // r6@1
  BlockSource *v3; // r4@1
  signed int v4; // r5@1
  Dimension *v5; // r0@3

  v2 = this;
  v3 = a2;
  v4 = 5;
  if ( Material::isType(*((int **)this + 14), 5) )
    return v4;
  if ( Material::isType(*((int **)v2 + 14), 6) == 1 )
  {
    v5 = (Dimension *)BlockSource::getDimensionConst(v3);
    v4 = 30;
    if ( Dimension::isUltraWarm(v5) )
      v4 = 10;
  }
  return 0;
}


signed int __fastcall LiquidBlock::getRenderedDepth(LiquidBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  LiquidBlock *v5; // r6@1
  int v6; // r0@1
  signed int result; // r0@2
  unsigned __int64 *v8; // r6@3

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = BlockSource::getMaterial(a2, a3);
  if ( Material::operator!=(v6, *((_DWORD *)v5 + 14)) )
  {
    result = -1;
  }
  else
    v8 = (unsigned __int64 *)Block::getBlockState((int)v5, 21);
    result = (BlockSource::getData(v4, v3) >> (*v8 + 1 - (*v8 >> 32))) & (0xFu >> (4 - (*v8 >> 32)));
    if ( result > 7 )
      result = 0;
  return result;
}


signed int __fastcall LiquidBlock::onPlace(LiquidBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  LiquidBlock *v5; // r6@1
  __int64 v6; // r0@1
  int v7; // r2@1
  signed int result; // r0@1
  int v9; // r2@2
  int v10; // r1@3
  int v11; // r2@3
  int v12; // r1@4
  int v13; // r2@4
  int v14; // r1@5
  int v15; // r2@5
  int v16; // [sp+4h] [bp-4Ch]@5
  int v17; // [sp+8h] [bp-48h]@5
  int v18; // [sp+Ch] [bp-44h]@5
  int v19; // [sp+10h] [bp-40h]@4
  int v20; // [sp+14h] [bp-3Ch]@4
  int v21; // [sp+18h] [bp-38h]@4
  int v22; // [sp+1Ch] [bp-34h]@3
  int v23; // [sp+20h] [bp-30h]@3
  int v24; // [sp+24h] [bp-2Ch]@3
  __int64 v25; // [sp+28h] [bp-28h]@2
  int v26; // [sp+30h] [bp-20h]@2
  __int64 v27; // [sp+34h] [bp-1Ch]@1
  int v28; // [sp+3Ch] [bp-14h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = *(_QWORD *)a3;
  v7 = *((_DWORD *)a3 + 2);
  v27 = v6;
  v28 = v7 + 1;
  result = LiquidBlock::solidify(v5, v4, v3, (const BlockPos *)&v27);
  if ( !result )
  {
    v9 = *((_DWORD *)v3 + 2);
    v25 = *(_QWORD *)v3;
    v26 = v9 - 1;
    result = LiquidBlock::solidify(v5, v4, v3, (const BlockPos *)&v25);
    if ( !result )
    {
      v10 = *((_DWORD *)v3 + 1);
      v11 = *((_DWORD *)v3 + 2);
      v22 = *(_DWORD *)v3 + 1;
      v23 = v10;
      v24 = v11;
      result = LiquidBlock::solidify(v5, v4, v3, (const BlockPos *)&v22);
      if ( !result )
      {
        v12 = *((_DWORD *)v3 + 1);
        v13 = *((_DWORD *)v3 + 2);
        v19 = *(_DWORD *)v3 - 1;
        v20 = v12;
        v21 = v13;
        result = LiquidBlock::solidify(v5, v4, v3, (const BlockPos *)&v19);
        if ( !result )
        {
          v14 = *((_DWORD *)v3 + 1);
          v15 = *((_DWORD *)v3 + 2);
          v16 = *(_DWORD *)v3;
          v17 = v14 + 1;
          v18 = v15;
          result = LiquidBlock::solidify(v5, v4, v3, (const BlockPos *)&v16);
        }
      }
    }
  }
  return result;
}


void __fastcall LiquidBlock::~LiquidBlock(LiquidBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall LiquidBlock::solidify(LiquidBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r7@1
  const BlockPos *v5; // r4@1
  BlockSource *v6; // r5@1
  LiquidBlock *v7; // r6@1
  int *v8; // r0@3
  unsigned __int64 *v9; // r6@4
  signed int v10; // r1@4
  signed int result; // r0@5
  char *v12; // r2@6
  BlockTickingQueue *v13; // r0@9
  char v14; // [sp+4h] [bp-1Ch]@6
  char v15; // [sp+5h] [bp-1Bh]@6
  char v16; // [sp+8h] [bp-18h]@8
  char v17; // [sp+9h] [bp-17h]@8

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = this;
  if ( *((_DWORD *)a4 + 1) < *((_DWORD *)a3 + 1)
    || Material::isType(*((int **)this + 14), 6) != 1
    || (v8 = (int *)BlockSource::getMaterial(v6, v4), Material::isType(v8, 5) != 1) )
  {
    result = 0;
  }
  else
    v9 = (unsigned __int64 *)Block::getBlockState((int)v7, 21);
    v10 = (0xFu >> (4 - (*v9 >> 32))) & (BlockSource::getData(v6, v5) >> (*v9 + 1 - (*v9 >> 32)));
    if ( v10 )
    {
      result = 0;
      if ( v10 > 4 )
        return result;
      v12 = &v14;
      v14 = *(_BYTE *)(Block::mCobblestone + 4);
      v15 = 0;
    }
    else
      v12 = &v16;
      v16 = *(_BYTE *)(Block::mObsidian + 4);
      v17 = 0;
    BlockSource::setBlockAndData((int)v6, v5, (int)v12, 3, 0);
    v13 = (BlockTickingQueue *)BlockSource::getTickQueue(v6, v5);
    if ( !BlockTickingQueue::isInstaticking(v13) )
      LiquidBlock::emitFizzParticle(0, v6, v5);
    result = 1;
  return result;
}


unsigned int __fastcall LiquidBlock::getDepth(LiquidBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  LiquidBlock *v5; // r6@1
  int v6; // r0@1
  unsigned int result; // r0@2
  unsigned __int64 *v8; // r6@3

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = BlockSource::getMaterial(a2, a3);
  if ( Material::operator!=(v6, *((_DWORD *)v5 + 14)) )
  {
    result = -1;
  }
  else
    v8 = (unsigned __int64 *)Block::getBlockState((int)v5, 21);
    result = (BlockSource::getData(v4, v3) >> (*v8 + 1 - (*v8 >> 32))) & (0xFu >> (4 - (*v8 >> 32)));
  return result;
}


int __fastcall LiquidBlock::getColor(LiquidBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  const BlockPos *v4; // r4@1
  signed int v9; // r7@2
  __int64 v10; // r0@3
  int v11; // r2@3
  int v13; // r1@3
  int v14; // r2@3
  int v16; // r2@3
  int v17; // r3@3
  int result; // r0@5
  float v20; // [sp+4h] [bp-54h]@5
  __int64 v21; // [sp+14h] [bp-44h]@3
  int v22; // [sp+1Ch] [bp-3Ch]@3

  v3 = a2;
  v4 = a3;
  if ( Material::isType(*((int **)this + 14), 5) == 1 )
  {
    __asm { VLDR            S16, =0.0 }
    v9 = -1;
    __asm
    {
      VMOV.F32        S18, S16
      VMOV.F32        S22, S16
      VMOV.F32        S20, S16
    }
    do
      HIDWORD(v10) = *((_DWORD *)v4 + 1);
      v11 = *((_DWORD *)v4 + 2);
      LODWORD(v10) = *(_DWORD *)v4 - 1;
      v21 = v10;
      v22 = v9 + v11;
      _R0 = BlockSource::getBiome(v3, (const BlockPos *)&v21);
      __asm
      {
        VLDR            S0, [R0,#0xE4]
        VLDR            S2, [R0,#0xE8]
        VLDR            S4, [R0,#0xEC]
        VADD.F32        S20, S0, S20
        VLDR            S6, [R0,#0xF0]
        VADD.F32        S22, S2, S22
      }
      v13 = *((_DWORD *)v4 + 1);
      v14 = *((_DWORD *)v4 + 2);
        VADD.F32        S18, S4, S18
        VADD.F32        S16, S6, S16
      LODWORD(v21) = *(_DWORD *)v4;
      HIDWORD(v21) = v13;
      v22 = v9 + v14;
      v16 = *((_DWORD *)v4 + 1);
      v17 = *((_DWORD *)v4 + 2);
      LODWORD(v21) = *(_DWORD *)v4 + 1;
      HIDWORD(v21) = v16;
      v22 = v9 + v17;
      __asm { VLDR            S0, [R0,#0xE4] }
      ++v9;
    while ( !_ZF );
      VLDR            S0, =0.11111
      VMUL.F32        S2, S20, S0
      VMUL.F32        S4, S22, S0
      VMUL.F32        S6, S18, S0
      VMUL.F32        S0, S16, S0
      VSTR            S2, [SP,#0x58+var_54]
      VSTR            S4, [SP,#0x58+var_50]
      VSTR            S6, [SP,#0x58+var_4C]
      VSTR            S0, [SP,#0x58+var_48]
    result = Color::toARGB((Color *)&v20);
  }
  else
    result = -1;
  return result;
}


int __fastcall LiquidBlock::LiquidBlock(int a1, const void **a2, int a3, int a4)
{
  int *v4; // r6@1
  int v5; // r5@1
  int v6; // r4@1
  signed int v7; // r0@1
  signed int v8; // r1@1 OVERLAPPED
  signed int v9; // r2@3
  int *v15; // r2@3
  float v17; // [sp+0h] [bp-18h]@3
  int v18; // [sp+4h] [bp-14h]@3

  v4 = (int *)a4;
  v5 = a3;
  v6 = a1;
  Block::Block(a1, a2, a3, a4);
  *(_DWORD *)v6 = &off_270DE58;
  *(_BYTE *)(v6 + 17) = 1;
  Block::setSolid((Block *)v6, 0);
  v7 = Material::isType(v4, 5);
  v8 = 3;
  if ( v7 )
    v8 = 2;
  v9 = 0x2000000;
  *(_QWORD *)(v6 + 20) = *(_QWORD *)&v8;
  *(_DWORD *)(v6 + 28) = 0;
  *(_BYTE *)(v6 + 49) = 1;
  *(_BYTE *)(v6 + 36) = 1;
  v18 = 1061997773;
  _R0 = Material::getTranslucency(*(Material **)(v6 + 56));
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.8
    VCMPE.F32       S0, S2
  }
  v15 = (int *)&v17;
    VMRS            APSR_nzcv, FPSCR
    VSTR            S0, [SP,#0x18+var_18]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v15 = &v18;
  Block::mTranslucency[v5] = *v15;
  return v6;
}


Vec3 *__fastcall LiquidBlock::handleEntityInside(LiquidBlock *this, BlockSource *a2, const BlockPos *a3, Entity *a4, Vec3 *a5)
{
  Vec3 *result; // r0@1
  float v10; // [sp+4h] [bp-14h]@1

  LiquidBlock::_getFlow((LiquidBlock *)&v10, this, a2, a3);
  __asm
  {
    VMOV.F32        S0, #0.5
    VLDR            S2, [SP,#0x18+var_14]
  }
  result = a5;
    VLDR            S4, [R0]
    VMUL.F32        S2, S2, S0
    VADD.F32        S2, S4, S2
    VSTR            S2, [R0]
    VLDR            S2, [SP,#0x18+var_10]
    VLDR            S4, [R0,#4]
    VSTR            S2, [R0,#4]
    VLDR            S2, [SP,#0x18+var_C]
    VMUL.F32        S0, S2, S0
    VLDR            S2, [R0,#8]
    VADD.F32        S0, S2, S0
    VSTR            S0, [R0,#8]
  return result;
}


_DWORD *__fastcall LiquidBlock::getAABB(LiquidBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, int a6, int a7)
{
  const BlockPos *v7; // r4@1
  AABB *v8; // r5@2
  _DWORD *result; // r0@2
  char v10; // [sp+4h] [bp-1Ch]@2

  v7 = a3;
  if ( a6 == 1 )
  {
    v8 = (AABB *)AABB::set(a4, (const Vec3 *)&Vec3::ZERO, (const Vec3 *)&Vec3::ONE);
    Vec3::Vec3((int)&v10, (int)v7);
    result = (_DWORD *)AABB::move(v8, (const Vec3 *)&v10);
  }
  else
    result = &AABB::EMPTY;
  return result;
}


int __fastcall LiquidBlock::_getFlow(LiquidBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r7@1
  BlockSource *v5; // r5@1
  BlockSource *v6; // r6@1
  LiquidBlock *v7; // r4@1
  int v8; // r0@1
  signed int v9; // r0@2
  unsigned __int64 *v10; // r4@3
  BlockSource *v11; // r8@5
  _BYTE *v12; // r9@5
  int v13; // r1@7
  int v14; // r2@7
  int v15; // r3@7
  _DWORD *v16; // r10@7
  _DWORD *v17; // r7@7
  int v18; // r0@7
  _DWORD *v19; // r11@7
  _DWORD *v20; // r7@7
  int v21; // t1@7
  BlockSource *v22; // r5@7
  int v23; // r0@7
  unsigned __int64 *v24; // r8@8
  signed int v25; // r0@8
  int v26; // r0@11
  __int64 v27; // r1@11
  int v28; // r0@11
  Block *v35; // r0@12
  Material *v36; // r0@12
  int v37; // r0@13
  unsigned __int64 *v38; // r4@15
  signed int v39; // r0@15
  int v40; // r0@18
  __int64 v41; // r1@18
  int v42; // r0@18
  unsigned __int64 *v49; // r4@23
  signed __int8 *v50; // r6@24
  int v51; // r10@24
  LiquidBlock *v52; // r3@28
  int result; // r0@28
  LiquidBlock *v60; // [sp+8h] [bp-A0h]@2
  signed int v61; // [sp+10h] [bp-98h]@5
  const BlockPos *v62; // [sp+18h] [bp-90h]@1
  int v63; // [sp+1Ch] [bp-8Ch]@5
  int v64; // [sp+20h] [bp-88h]@2
  __int64 v65; // [sp+24h] [bp-84h]@6
  int v66; // [sp+2Ch] [bp-7Ch]@6
  int v67; // [sp+30h] [bp-78h]@26
  int v68; // [sp+34h] [bp-74h]@26
  int v69; // [sp+38h] [bp-70h]@26
  __int64 v70; // [sp+3Ch] [bp-6Ch]@11
  int v71; // [sp+44h] [bp-64h]@11
  float v72; // [sp+48h] [bp-60h]@11
  __int64 v75; // [sp+54h] [bp-54h]@18
  int v76; // [sp+5Ch] [bp-4Ch]@18
  float v77; // [sp+60h] [bp-48h]@18
  int v80; // [sp+6Ch] [bp-3Ch]@13
  int v81; // [sp+70h] [bp-38h]@13
  int v82; // [sp+74h] [bp-34h]@13
  int v83; // [sp+78h] [bp-30h]@7
  int v84; // [sp+7Ch] [bp-2Ch]@7
  int v85; // [sp+80h] [bp-28h]@7

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = this;
  v62 = a4;
  v8 = BlockSource::getMaterial(a3, a4);
  if ( Material::operator!=(v8, *((_DWORD *)v6 + 14)) )
  {
    v64 = (int)v6;
    v9 = -1;
    v60 = v7;
  }
  else
    v10 = (unsigned __int64 *)Block::getBlockState((int)v6, 21);
    v9 = (BlockSource::getData(v5, v4) >> (*v10 + 1 - (*v10 >> 32))) & (0xFu >> (4 - (*v10 >> 32)));
    if ( v9 > 7 )
      v9 = 0;
  v61 = v9;
  v11 = v5;
  v12 = (_BYTE *)Facing::Plane::HORIZONTAL;
  v63 = dword_2803214;
  if ( Facing::Plane::HORIZONTAL != dword_2803214 )
    v66 = 0;
    v65 = 0LL;
    while ( 1 )
    {
      v13 = *(_DWORD *)v4;
      v14 = *((_DWORD *)v4 + 1);
      v15 = *((_DWORD *)v4 + 2);
      v16 = &Facing::DIRECTION[3 * *v12];
      v17 = &Facing::DIRECTION[3 * *v12];
      v19 = v16 + 2;
      v18 = v16[2];
      v21 = v17[1];
      v20 = v17 + 1;
      v83 = v13 + Facing::DIRECTION[3 * *v12];
      v22 = v11;
      v84 = v21 + v14;
      v85 = v18 + v15;
      v23 = BlockSource::getMaterial(v11, (const BlockPos *)&v83);
      if ( !Material::operator!=(v23, *(_DWORD *)(v64 + 56)) )
      {
        v24 = (unsigned __int64 *)Block::getBlockState(v64, 21);
        v25 = (BlockSource::getData(v22, (const BlockPos *)&v83) >> (*v24 + 1 - (*v24 >> 32))) & (0xFu >> (4 - (*v24 >> 32)));
        if ( v25 > 7 )
        {
          v25 = 0;
LABEL_11:
          v11 = v22;
          v26 = v25 - v61;
          LODWORD(v27) = *v16 * v26;
          HIDWORD(v27) = *v20 * v26;
          v28 = v26 * *v19;
          v70 = v27;
          v71 = v28;
          Vec3::Vec3((int)&v72, (int)&v70);
          _R0 = v65;
          __asm
          {
            VLDR            S4, [SP,#0xA8+var_60]
            VLDR            S6, [SP,#0xA8+var_5C]
            VMOV            S0, R0
          }
          _R0 = v66;
            VLDR            S8, [SP,#0xA8+var_58]
            VMOV            S2, R0
          goto LABEL_19;
        }
        if ( v25 > -1 )
          goto LABEL_11;
      }
      v35 = (Block *)BlockSource::getBlock(v22, (const BlockPos *)&v83);
      v36 = (Material *)Block::getMaterial(v35);
      if ( Material::isSolidBlocking(v36)
        || (v80 = v83,
            v81 = v84 - 1,
            v82 = v85,
            v37 = BlockSource::getMaterial(v22, (const BlockPos *)&v80),
            Material::operator!=(v37, *(_DWORD *)(v64 + 56))) )
        v11 = v22;
      else
        v38 = (unsigned __int64 *)Block::getBlockState(v64, 21);
        v39 = (BlockSource::getData(v22, (const BlockPos *)&v80) >> (*v38 + 1 - (*v38 >> 32))) & (0xFu >> (4 - (*v38 >> 32)));
        if ( v39 > 7 )
          v39 = 0;
LABEL_18:
          v40 = v39 + 8 - v61;
          LODWORD(v41) = *v16 * v40;
          HIDWORD(v41) = *v20 * v40;
          v42 = v40 * *v19;
          v75 = v41;
          v76 = v42;
          Vec3::Vec3((int)&v77, (int)&v75);
            VLDR            S4, [SP,#0xA8+var_48]
            VLDR            S6, [SP,#0xA8+var_44]
            VLDR            S8, [SP,#0xA8+var_40]
LABEL_19:
          __asm { VADD.F32        S2, S8, S2 }
          _R0 = HIDWORD(v65);
            VADD.F32        S0, S6, S0
            VMOV            S10, R0
            VADD.F32        S4, S4, S10
            VMOV            R0, S2
          v66 = _R0;
          __asm { VMOV            R0, S0 }
          LODWORD(v65) = _R0;
          __asm { VMOV            R0, S4 }
          HIDWORD(v65) = _R0;
          goto LABEL_20;
        if ( v39 >= 0 )
          goto LABEL_18;
LABEL_20:
      v4 = v62;
      if ( (_BYTE *)v63 == ++v12 )
        goto LABEL_23;
    }
  v66 = 0;
  v65 = 0LL;
LABEL_23:
  v49 = (unsigned __int64 *)Block::getBlockState(v64, 21);
  if ( (signed int)((BlockSource::getData(v11, v4) >> (*v49 + 1 - (*v49 >> 32))) & (0xFu >> (4 - (*v49 >> 32)))) <= 7
    || (v51 = dword_2803214, v50 = (signed __int8 *)Facing::Plane::HORIZONTAL,
                             Facing::Plane::HORIZONTAL == dword_2803214) )
LABEL_28:
    v52 = v60;
    result = v66;
    _R1 = HIDWORD(v65);
    _R2 = v65;
      BlockPos::relative((BlockPos *)&v83, (int)v4, *v50, 1);
      if ( LiquidBlock::isNeighborSolid((LiquidBlock *)v64, v11, (const BlockPos *)&v83, *v50) )
        break;
      v67 = v83;
      v68 = v84 + 1;
      v69 = v85;
      if ( LiquidBlock::isNeighborSolid((LiquidBlock *)v64, v11, (const BlockPos *)&v67, *v50) == 1 )
      if ( (signed __int8 *)v51 == ++v50 )
        goto LABEL_28;
    _R0 = HIDWORD(v65);
    __asm { VMOV            S0, R0 }
    _R0 = v65;
    __asm
      VMUL.F32        S6, S0, S0
      VMOV            S4, R0
    _R0 = v66;
      VMUL.F32        S8, S4, S4
      VMOV            S2, R0
      VMUL.F32        S10, S2, S2
      VADD.F32        S6, S8, S6
      VLDR            S8, =0.0001
      VADD.F32        S6, S6, S10
      VSQRT.F32       S6, S6
      VCMPE.F32       S6, S8
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      _R0 = &Vec3::ZERO;
      __asm
        VLDR            S0, [R0]
        VLDR            S4, [R0,#4]
        VLDR            S2, [R0,#8]
    else
        VDIV.F32        S2, S2, S6
        VDIV.F32        S4, S4, S6
        VDIV.F32        S0, S0, S6
      VMOV.F32        S6, #-6.0
      VMOV            R0, S2
      VMOV            R1, S0
      VADD.F32        S4, S4, S6
      VMOV            R2, S4
  __asm
    VMOV            S0, R1
    VMOV            S2, R2
    VMUL.F32        S6, S0, S0
    VMUL.F32        S8, S2, S2
    VMOV            S4, R0
    VMUL.F32        S10, S4, S4
    VADD.F32        S6, S8, S6
    VLDR            S8, =0.0001
    VADD.F32        S6, S6, S10
    VSQRT.F32       S6, S6
    VCMPE.F32       S6, S8
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    result = dword_2822498;
    *(_QWORD *)v52 = *(_QWORD *)&Vec3::ZERO;
    *((_DWORD *)v52 + 2) = result;
      VDIV.F32        S0, S0, S6
      VDIV.F32        S2, S2, S6
      VDIV.F32        S4, S4, S6
      VSTR            S0, [R3]
      VSTR            S2, [R3,#4]
      VSTR            S4, [R3,#8]
  return result;
}


int __fastcall LiquidBlock::getResource(LiquidBlock *this, Random *a2, int a3, int a4)
{
  return 0;
}


int __fastcall LiquidBlock::getBrightness(LiquidBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  const BlockPos *v4; // r4@1
  int v6; // r2@1
  int v7; // r3@1
  int v8; // r4@1
  int result; // r0@3
  int v15; // [sp+4h] [bp-24h]@1
  int v16; // [sp+8h] [bp-20h]@1
  int v17; // [sp+Ch] [bp-1Ch]@1

  v3 = a2;
  v4 = a3;
  _R0 = BlockSource::getBrightness(a2, a3);
  v6 = *(_DWORD *)v4;
  v7 = *((_DWORD *)v4 + 1);
  v8 = *((_DWORD *)v4 + 2);
  __asm { VMOV            S16, R0 }
  v15 = v6;
  v16 = v7 + 1;
  v17 = v8;
  _R0 = BlockSource::getBrightness(v3, (const BlockPos *)&v15);
  __asm
  {
    VMOV            S0, R0
    VCMPE.F32       S16, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S16 }
  __asm { VMOV            R0, S0 }
  return result;
}


Block *__fastcall LiquidBlock::trySpreadFire(LiquidBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Level *v4; // r0@1
  unsigned __int64 *v5; // r0@1
  unsigned __int64 *v6; // r5@1
  Block *result; // r0@1
  BlockTickingQueue *v8; // r0@4
  char v9; // r0@5
  int v10; // r1@8
  int v11; // ST2C_4@9
  unsigned int v12; // r5@9
  int v13; // r11@9
  unsigned int v14; // r6@9
  int v15; // r4@9
  unsigned int v16; // r8@9
  int v17; // r9@9
  int v18; // r2@9
  int v19; // r5@9
  Material *v20; // r0@10
  char *v21; // r11@11
  __int64 *v22; // r10@11
  int *v23; // r6@11
  int v24; // r2@19
  int v25; // r3@19
  int v26; // r1@19
  Random *v27; // [sp+18h] [bp-48h]@1
  const BlockPos *v28; // [sp+1Ch] [bp-44h]@1
  BlockSource *v29; // [sp+20h] [bp-40h]@1
  int v30; // [sp+28h] [bp-38h]@9
  char v31; // [sp+30h] [bp-30h]@19
  unsigned __int8 v32; // [sp+34h] [bp-2Ch]@11
  unsigned __int8 v33; // [sp+38h] [bp-28h]@9

  v27 = a4;
  v28 = a3;
  v29 = a2;
  v4 = (Level *)BlockSource::getLevel(a2);
  v5 = (unsigned __int64 *)Level::getGameRules(v4);
  v6 = v5;
  result = (Block *)GameRules::getBool(v5, (int **)&GameRules::DO_FIRE_TICK);
  if ( result == (Block *)1 )
  {
    if ( GameRules::hasRule(v6, (int **)&GameRules::ALLOW_DESTRUCTIVE_OBJECTS) != 1
      || (result = (Block *)GameRules::getBool(v6, (int **)&GameRules::ALLOW_DESTRUCTIVE_OBJECTS), result == (Block *)1) )
    {
      v8 = (BlockTickingQueue *)BlockSource::getTickQueue(v29, v28);
      result = (Block *)BlockTickingQueue::isInstaticking(v8);
      if ( !result )
      {
        v9 = byte_2811914[0];
        __dmb();
        if ( !(v9 & 1) && j___cxa_guard_acquire(byte_2811914) )
        {
          dword_2811960 = 1;
          dword_2811964 = 0;
          dword_2811968 = 0;
          *(_DWORD *)algn_281196C = -1;
          dword_2811970 = 0;
          unk_2811974 = 0;
          unk_2811978 = 0;
          *(_QWORD *)&dword_281197C = 1LL;
          unk_2811984 = 0;
          dword_2811988 = -1;
          unk_281198C = 0;
          unk_2811990 = 0;
          dword_2811994 = 0;
          qword_2811998 = 1LL;
          dword_28119A0 = 0;
          *(_DWORD *)algn_28119A4 = -1;
          j___cxa_guard_release(byte_2811914);
        }
        v10 = 0;
        while ( 1 )
          v30 = v10;
          v11 = *(_DWORD *)v28;
          v12 = Random::_genRandInt32(v27);
          v13 = *((_DWORD *)v28 + 1);
          v14 = Random::_genRandInt32(v27);
          v15 = *((_DWORD *)v28 + 2);
          v16 = v12 % 3 + v11 - 1;
          v17 = Random::_genRandInt32(v27) % 3 + v15 - 1;
          v18 = v12 % 3 + v11 - 1;
          v19 = v14 % 3 + v13 - 1;
          BlockSource::getBlockID((BlockSource *)&v33, (int)v29, v18, v19, v17);
          result = (Block *)Block::mBlocks[v33];
          if ( result )
          {
            v20 = (Material *)Block::getMaterial(result);
            result = (Block *)Material::isFlammable(v20);
            if ( result == (Block *)1 )
            {
              v21 = (char *)&dword_2811960;
              v22 = (__int64 *)&dword_2811968;
              v23 = &dword_2811964;
              BlockSource::getBlockID(
                (BlockSource *)&v32,
                (int)v29,
                dword_2811960 + v16,
                dword_2811964 + v19,
                dword_2811968 + v17);
              if ( v32 == BlockID::AIR )
                break;
              v23 = &dword_2811970;
              v22 = (__int64 *)&unk_2811974;
              v21 = algn_281196C;
                *(_DWORD *)algn_281196C + v16,
                dword_2811970 + v19,
                unk_2811974 + v17);
              v23 = &dword_281197C;
              v22 = (__int64 *)&unk_2811980;
              v21 = (char *)&unk_2811978;
                unk_2811978 + v16,
                dword_281197C + v19,
                unk_2811980 + v17);
              v23 = &dword_2811988;
              v22 = (__int64 *)&unk_281198C;
              v21 = (char *)&unk_2811984;
                unk_2811984 + v16,
                dword_2811988 + v19,
                unk_281198C + v17);
              v23 = &dword_2811994;
              v22 = &qword_2811998;
              v21 = (char *)&unk_2811990;
                unk_2811990 + v16,
                dword_2811994 + v19,
                qword_2811998 + v17);
              v23 = &dword_28119A0;
              v22 = (__int64 *)algn_28119A4;
              v21 = (char *)&qword_2811998 + 4;
                HIDWORD(qword_2811998) + v16,
                dword_28119A0 + v19,
                *(_DWORD *)algn_28119A4 + v17);
              result = (Block *)BlockID::AIR;
            }
          }
          v10 = v30 + 1;
          if ( v30 + 1 >= 10 )
            return result;
        v24 = *v23;
        v25 = *(_DWORD *)v22 + v17;
        v26 = *(_DWORD *)v21 + v16;
        v31 = *(_BYTE *)(Block::mFire + 4);
        result = (Block *)BlockSource::setBlock((int)v29, v26, v24 + v19, v25, &v31, 3);
      }
    }
  }
  return result;
}


int __fastcall LiquidBlock::getResourceCount(LiquidBlock *this, Random *a2, int a3, int a4)
{
  return 0;
}


int __fastcall LiquidBlock::getSlopeAngle(LiquidBlock *this, BlockSource *a2, const BlockPos *a3, const Material *a4)
{
  int *v4; // r6@1
  BlockSource *v5; // r4@1
  LiquidBlock *v6; // r5@1
  int result; // r0@13
  int v18; // [sp+0h] [bp-28h]@4
  int v19; // [sp+8h] [bp-20h]@4
  int v20; // [sp+Ch] [bp-1Ch]@2
  int v21; // [sp+14h] [bp-14h]@2

  v4 = (int *)a3;
  v5 = a2;
  v6 = this;
  if ( Material::isType((int *)a3, 5) == 1 )
  {
    LiquidBlock::_getFlow((LiquidBlock *)&v20, (BlockSource *)Block::mFlowingWater, v6, v5);
    _R1 = v20;
    _R0 = v21;
  }
  else if ( Material::isType(v4, 6) == 1 )
    LiquidBlock::_getFlow((LiquidBlock *)&v18, (BlockSource *)Block::mFlowingLava, v6, v5);
    _R1 = v18;
    _R0 = v19;
  else
    _R0 = 0;
    _R1 = 0;
  __asm
    VMOV            S0, R1
    VMOV            S2, R0
  _R0 = 0.0;
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S2, #0.0
  if ( _ZF )
    HIDWORD(_R0) = 1;
  __asm { VMRS            APSR_nzcv, FPSCR }
    LODWORD(_R0) = 1;
  if ( LODWORD(_R0) & HIDWORD(_R0) )
    __asm { VLDR            S0, =-1000.0 }
    __asm
    {
      VCVT.F64.F32    D1, S2
      VCVT.F64.F32    D0, S0
      VMOV            R0, R1, D1
      VMOV            R2, R3, D0
    }
    _R0 = COERCE_UNSIGNED_INT64(atan2(_R0, _R2));
    __asm { VMOV.F32        S0, #-0.5 }
    _R2 = &mce::Math::PI;
      VLDR            S2, [R2]
      VMUL.F32        S0, S2, S0
      VMOV            D1, R0, R1
      VADD.F64        D0, D1, D0
      VCVT.F32.F64    S0, D0
  __asm { VMOV            R0, S0 }
  return result;
}


int __fastcall LiquidBlock::emitFizzParticle(LiquidBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r8@1
  int result; // r0@1
  Level *v6; // r0@2
  Level *v7; // r5@2
  char *v8; // r0@2
  Random *v9; // r7@2
  signed int v16; // r7@2
  char *v17; // r0@3
  char *v19; // r0@3
  int v21; // [sp+0h] [bp-68h]@0
  float v22; // [sp+18h] [bp-50h]@3
  float v23; // [sp+24h] [bp-44h]@2

  v3 = a2;
  _R4 = a3;
  result = BlockSource::getPublicSource(a2);
  if ( result == 1 )
  {
    v6 = (Level *)BlockSource::getLevel(v3);
    v7 = v6;
    v8 = Level::getRandom(v6);
    v9 = (Random *)v8;
    _R0 = Random::_genRandInt32((Random *)v8);
    __asm
    {
      VMOV            S0, R0
      VCVT.F64.U32    D9, S0
    }
    _R0 = Random::_genRandInt32(v9);
      VLDR            D8, =2.32830644e-10
      VLDR            S10, =800.0
      VMOV.F32        S8, #0.5
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D8
      VMUL.F64        D1, D9, D8
      VCVT.F32.F64    S2, D1
      VCVT.F32.F64    S0, D0
      VSUB.F32        S0, S2, S0
      VLDR            S2, [R4]
      VLDR            S4, [R4,#4]
      VLDR            S6, [R4,#8]
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
      VCVT.F32.S32    S6, S6
      VMUL.F32        S0, S0, S10
      VLDR            S10, =2600.0
      VADD.F32        S2, S2, S8
      VADD.F32        S4, S4, S8
      VADD.F32        S6, S6, S8
      VADD.F32        S0, S0, S10
      VSTR            S2, [SP,#0x68+var_44]
      VSTR            S4, [SP,#0x68+var_40]
      VSTR            S6, [SP,#0x68+var_3C]
      VCVTR.S32.F32   S0, S0
      VSTR            S0, [SP,#0x68+var_68]
    Level::broadcastDimensionEvent((int)v7, v3, 1004, (int)&v23, v21);
    __asm { VLDR            S18, =1.2 }
    v16 = 8;
    do
      v17 = Level::getRandom(v7);
      _R0 = Random::_genRandInt32((Random *)v17);
      __asm
      {
        VMOV            S0, R0
        VCVT.F64.U32    D10, S0
      }
      v19 = Level::getRandom(v7);
      _R0 = Random::_genRandInt32((Random *)v19);
        VMUL.F64        D1, D10, D8
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D8
        VLDR            S4, [R4]
        VLDR            S6, [R4,#4]
        VLDR            S8, [R4,#8]
        VCVT.F32.S32    S4, S4
        VCVT.F32.F64    S2, D1
        VCVT.F32.S32    S6, S6
        VCVT.F32.S32    S8, S8
        VCVT.F32.F64    S0, D0
        VADD.F32        S2, S4, S2
        VADD.F32        S4, S6, S18
        VADD.F32        S0, S8, S0
        VSTR            S2, [SP,#0x68+var_50]
        VSTR            S4, [SP,#0x68+var_4C]
        VSTR            S0, [SP,#0x68+var_48]
      result = Level::addParticle((int)v7, 4, (int)&v22);
      --v16;
    while ( v16 );
  }
  return result;
}


int __fastcall LiquidBlock::getHeightFromData(LiquidBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1
  int result; // r0@3

  v2 = (unsigned __int8)this;
  v3 = (unsigned __int64 *)Block::getBlockState(Block::mStillWater, 21);
  __asm { VLDR            S2, =0.11111 }
  _R1 = ((0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)))) + 1;
  __asm
  {
    VMOV            S0, R1
    VCVT.F32.S32    S0, S0
    VMUL.F32        S0, S0, S2
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S2 }
  __asm { VMOV            R0, S0 }
  return result;
}


signed int __fastcall LiquidBlock::checkIsPathable(LiquidBlock *this, Entity *a2, const BlockPos *a3, const BlockPos *a4)
{
  int v4; // r4@1
  int v5; // r1@1

  v4 = *((_DWORD *)this + 14);
  v5 = Material::getMaterial(6);
  return j_j_j__ZNK8MaterialneERKS_(v4, v5);
}


unsigned int __fastcall LiquidBlock::animateTick(LiquidBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  LiquidBlock *v4; // r6@1
  BlockSource *v5; // r10@1
  Random *v6; // r8@1
  unsigned __int64 *v8; // r7@3
  int v9; // r7@4
  int v10; // r1@6
  int v11; // r2@6
  int v20; // r0@8
  int v22; // r11@8
  int v23; // r7@10
  int v25; // r1@12
  int v26; // r2@12
  int *v27; // r0@12
  int v28; // r1@13
  int v29; // r2@13
  int v34; // r0@15
  unsigned int result; // r0@16
  int v36; // r0@17
  int v37; // r1@17
  int v38; // r2@17
  Material *v39; // r7@17
  int v44; // r0@21
  float *v45; // r2@22
  int v46; // r1@22
  float v47; // [sp+1Ch] [bp-104h]@22
  int v48; // [sp+28h] [bp-F8h]@23
  int v49; // [sp+2Ch] [bp-F4h]@23
  int v50; // [sp+30h] [bp-F0h]@23
  float v51; // [sp+34h] [bp-ECh]@23
  int v52; // [sp+40h] [bp-E0h]@17
  int v53; // [sp+44h] [bp-DCh]@17
  int v54; // [sp+48h] [bp-D8h]@17
  int v55; // [sp+4Ch] [bp-D4h]@17
  int v56; // [sp+50h] [bp-D0h]@17
  int v57; // [sp+54h] [bp-CCh]@17
  int v58; // [sp+58h] [bp-C8h]@15
  int v59; // [sp+5Ch] [bp-C4h]@15
  int v60; // [sp+60h] [bp-C0h]@15
  float v61; // [sp+64h] [bp-BCh]@15
  int v62; // [sp+70h] [bp-B0h]@13
  int v63; // [sp+74h] [bp-ACh]@13
  int v64; // [sp+78h] [bp-A8h]@13
  int v65; // [sp+7Ch] [bp-A4h]@12
  int v66; // [sp+80h] [bp-A0h]@12
  int v67; // [sp+84h] [bp-9Ch]@12
  unsigned __int8 v68; // [sp+88h] [bp-98h]@6
  char v69; // [sp+A4h] [bp-7Ch]@10
  char v70; // [sp+B0h] [bp-70h]@8
  float v71; // [sp+BCh] [bp-64h]@8
  int v72; // [sp+C8h] [bp-58h]@6
  int v73; // [sp+CCh] [bp-54h]@6
  int v74; // [sp+D0h] [bp-50h]@6
  char v75; // [sp+D4h] [bp-4Ch]@4

  v4 = this;
  v5 = a2;
  v6 = a4;
  _R4 = a3;
  if ( Material::isType(*((int **)this + 14), 5) == 1 && !(Random::_genRandInt32(v6) & 0xF) )
  {
    v8 = (unsigned __int64 *)Block::getBlockState((int)v4, 21);
    if ( ((BlockSource::getData(v5, _R4) >> (*v8 + 1 - (*v8 >> 32))) & (0xFu >> (4 - (*v8 >> 32)))) - 1 <= 6 )
    {
      v9 = BlockSource::getLevel(v5);
      Vec3::Vec3((int)&v75, (int)_R4);
      Level::playSound(v9, 82, (int)&v75);
    }
  }
  if ( Material::isType(*((int **)v4 + 14), 6) == 1 )
    v10 = *((_DWORD *)_R4 + 1);
    v11 = *((_DWORD *)_R4 + 2);
    v72 = *(_DWORD *)_R4;
    v73 = v10 + 1;
    v74 = v11;
    BlockSource::getBlockID((BlockSource *)&v68, v5, (int)&v72);
    if ( v68 == BlockID::AIR )
      if ( !(Random::_genRandInt32(v6) % 0x64) )
      {
        _R7 = *(_DWORD *)_R4;
        _R0 = Random::_genRandInt32(v6);
        __asm { VMOV            S0, R0 }
        _R9 = *((_DWORD *)_R4 + 2);
        __asm { VCVT.F64.U32    D8, S0 }
        __asm
        {
          VLDR            D0, =2.32830644e-10
          VMOV            S2, R0
          VMUL.F64        D2, D8, D0
          VCVT.F64.U32    D1, S2
          VMUL.F64        D8, D1, D0
          VMOV            S0, R7
          VCVT.F32.F64    S18, D2
          VCVT.F32.S32    S20, S0
        }
        v20 = BlockSource::getLevel(v5);
        _R1 = *((_DWORD *)_R4 + 1);
          VMOV            S4, R9
          VMOV.F32        S0, #0.5
          VCVT.F32.F64    S6, D8
          VMOV            S2, R1
          VADD.F32        S8, S18, S20
          VCVT.F32.S32    S2, S2
          VCVT.F32.S32    S4, S4
          VSTR            S8, [SP,#0x120+var_64]
          VADD.F32        S0, S2, S0
          VADD.F32        S2, S6, S4
          VSTR            S0, [SP,#0x120+var_60]
          VSTR            S2, [SP,#0x120+var_5C]
        Level::addParticle(v20, 8, (int)&v71);
        v22 = BlockSource::getLevel(v5);
        Vec3::Vec3((int)&v70, (int)_R4);
        Level::playSound(v22, 83, (int)&v70);
      }
      if ( !(Random::_genRandInt32(v6) % 0x32) )
        v23 = BlockSource::getLevel(v5);
        Vec3::Vec3((int)&v69, (int)_R4);
        Level::playSound(v23, 84, (int)&v69);
  AABB::AABB((AABB *)&v68);
  _R7 = (*(int (__fastcall **)(LiquidBlock *, BlockSource *, const BlockPos *, unsigned __int8 *))(*(_DWORD *)v4 + 416))(
          v4,
          v5,
          _R4,
          &v68);
    v25 = *((_DWORD *)_R4 + 1);
    v26 = *((_DWORD *)_R4 + 2);
    v65 = *(_DWORD *)_R4;
    v66 = v25 + 1;
    v67 = v26;
    v27 = (int *)BlockSource::getMaterial(v5, (const BlockPos *)&v65);
    if ( Material::isType(v27, 0) == 1 )
      v28 = *((_DWORD *)_R4 + 1);
      v29 = *((_DWORD *)_R4 + 2);
      v62 = *(_DWORD *)_R4;
      v63 = v28 + 1;
      v64 = v29;
      if ( !BlockSource::isConsideredSolidBlock(v5, (const BlockPos *)&v62) && !(Random::_genRandInt32(v6) % 0x64) )
        _R5 = *(_DWORD *)_R4;
          VMOV            S20, R5
          VMUL.F64        D8, D8, D0
          VMUL.F64        D9, D1, D0
        v34 = BlockSource::getLevel(v5);
          VLDR            S0, [R4,#4]
          VMOV            S6, R9
          VCVT.F32.S32    S2, S20
          VCVT.F32.F64    S4, D8
          VCVT.F32.S32    S0, S0
          VCVT.F32.S32    S6, S6
          VLDR            S10, [R7,#0x10]
          VCVT.F32.F64    S8, D9
          VADD.F32        S2, S4, S2
          VADD.F32        S0, S0, S10
          VADD.F32        S4, S8, S6
          VSTR            S2, [SP,#0x120+var_BC]
          VSTR            S0, [SP,#0x120+var_B8]
          VSTR            S4, [SP,#0x120+var_B4]
        v58 = 0;
        v59 = 0;
        v60 = 0;
        Level::addParticle(v34, 8, (int)&v61);
  result = Random::_genRandInt32(v6) % 0xA;
  if ( !result )
    v36 = *(_DWORD *)_R4;
    v37 = *((_DWORD *)_R4 + 1);
    v38 = *((_DWORD *)_R4 + 2);
    v55 = v36;
    v56 = v37 - 1;
    v57 = v38;
    v52 = v36;
    v53 = v37 - 2;
    v54 = v38;
    v39 = (Material *)BlockSource::getMaterial(v5, (const BlockPos *)&v52);
    result = BlockSource::canProvideSupport(v5, (int)&v55);
    if ( result == 1 )
      result = Material::getBlocksMotion(v39);
      if ( !result )
        result = Material::isLiquid(v39);
        if ( !result )
          result = Material::isLiquid(v39);
          if ( !result )
          {
            _R7 = *(_DWORD *)_R4;
            _R0 = Random::_genRandInt32(v6);
            __asm { VMOV            S0, R0 }
            _R5 = *((_DWORD *)_R4 + 2);
            __asm { VCVT.F64.U32    D8, S0 }
            __asm
            {
              VMOV            S0, R0
              VLDR            D9, =2.32830644e-10
              VCVT.F64.U32    D10, S0
              VMUL.F64        D8, D8, D9
            }
            Material::isType(*((int **)v4 + 14), 5);
            v44 = BlockSource::getLevel(v5);
              VMUL.F64        D1, D10, D9
              VLDR            S0, [R4,#4]
              VMOV            S4, R7
              VMOV            S8, R5
              VCVT.F32.S32    S0, S0
              VCVT.F32.S32    S4, S4
              VCVT.F32.F64    S6, D8
              VCVT.F32.F64    S10, D1
              VCVT.F32.S32    S8, S8
              VLDR            S2, =-1.05
              VADD.F32        S4, S6, S4
              VADD.F32        S2, S0, S2
              VADD.F32        S0, S10, S8
            if ( _ZF )
              __asm
              {
                VSTR            S4, [SP,#0x120+var_EC]
                VSTR            S2, [SP,#0x120+var_E8]
              }
              v45 = &v51;
              __asm { VSTR            S0, [SP,#0x120+var_E4] }
              v48 = 0;
              v49 = 0;
              v50 = 0;
              v46 = 23;
            else
              v45 = &v47;
                VSTR            S4, [SP,#0x120+var_104]
                VSTR            S2, [SP,#0x120+var_100]
                VSTR            S0, [SP,#0x120+var_FC]
              v46 = 24;
            result = Level::addParticle(v44, v46, (int)v45);
          }
  return result;
}


int __fastcall LiquidBlock::getMapColor(LiquidBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  BlockSource *v4; // r7@1
  LiquidBlock *v5; // r8@1
  int v6; // r5@1
  BlockSource *v7; // r6@1
  signed int v12; // r4@2
  __int64 v13; // r0@3
  int v14; // r2@3
  int v16; // r2@5
  __int64 v18; // r0@7
  int v19; // r2@7
  int result; // r0@7
  __int64 v21; // [sp+4h] [bp-54h]@3
  int v22; // [sp+Ch] [bp-4Ch]@3

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  if ( Material::isType(*((int **)a2 + 14), 5) == 1 )
  {
    __asm
    {
      VLDR            S16, =0.0
      VMOV.F32        S26, #1.0
    }
    v12 = -1;
      VMOV.F32        S20, S16
      VMOV.F32        S18, S16
      VMOV.F32        S22, S16
      VMOV.F32        S24, S16
    do
      HIDWORD(v13) = *(_DWORD *)(v6 + 4);
      v14 = *(_DWORD *)(v6 + 8);
      LODWORD(v13) = *(_DWORD *)v6 - 1;
      v21 = v13;
      v22 = v12 + v14;
      _R0 = BlockSource::tryGetBiome(v7, (const BlockPos *)&v21);
      if ( _R0 )
      {
        __asm
        {
          VLDR            S0, [R0,#0xE4]
          VADD.F32        S16, S16, S26
          VLDR            S2, [R0,#0xE8]
          VLDR            S4, [R0,#0xEC]
          VADD.F32        S24, S0, S24
          VLDR            S6, [R0,#0xF0]
          VADD.F32        S22, S2, S22
          VADD.F32        S18, S4, S18
          VADD.F32        S20, S6, S20
        }
      }
      v16 = *(_DWORD *)(v6 + 8);
      v21 = *(_QWORD *)v6;
      v22 = v12 + v16;
      HIDWORD(v18) = *(_DWORD *)(v6 + 4);
      v19 = *(_DWORD *)(v6 + 8);
      LODWORD(v18) = *(_DWORD *)v6 + 1;
      v21 = v18;
      v22 = v12 + v19;
      result = BlockSource::tryGetBiome(v7, (const BlockPos *)&v21);
      if ( result )
      ++v12;
    while ( v12 != 2 );
      VCMPE.F32       S16, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( _ZF )
      __asm
        VSTR            S24, [R8]
        VSTR            S22, [R8,#4]
        VSTR            S18, [R8,#8]
        VSTR            S20, [R8,#0xC]
    else
      __asm { VDIV.F32        S0, S24, S16 }
      result = 0;
      *((_DWORD *)v5 + 3) = 0;
        VDIV.F32        S2, S22, S16
        VDIV.F32        S4, S18, S16
        VLDR            S6, =0.44314
        VLDR            S8, =0.51765
        VMUL.F32        S0, S0, S6
        VMUL.F32        S2, S2, S8
        VSTR            S0, [R8]
        VSTR            S2, [R8,#4]
        VSTR            S4, [R8,#8]
  }
  else
    result = Block::getMapColor(v5, v4, v7);
  return result;
}


void __fastcall LiquidBlock::~LiquidBlock(LiquidBlock *this)
{
  LiquidBlock::~LiquidBlock(this);
}


int __fastcall LiquidBlock::mayPick(LiquidBlock *this, BlockSource *a2, int a3, int a4)
{
  int v4; // r4@1
  unsigned __int8 v5; // r5@1
  unsigned __int64 *v6; // r0@1
  signed int v7; // r2@1

  v4 = a4;
  v5 = a3;
  v6 = (unsigned __int64 *)Block::getBlockState((int)this, 21);
  v7 = 0;
  if ( !((v5 >> (*v6 + 1 - (*v6 >> 32))) & (0xFu >> (4 - (*v6 >> 32)))) )
    v7 = 1;
  return v7 & v4;
}
