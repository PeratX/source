

_BOOL4 __fastcall SpongeBlock::_performAbsorbWater(SpongeBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r9@1
  __int64 *v4; // r8@2
  __int64 v5; // r2@2
  unsigned int v6; // r12@2
  int v7; // r7@2
  __int64 v8; // kr00_8@2
  unsigned int v9; // r4@2 OVERLAPPED
  void *v10; // r7@2
  int v11; // r0@2
  unsigned int v12; // r6@4
  void *v13; // t1@5
  int v14; // r0@8
  __int64 v15; // kr08_8@8
  int v16; // r5@8
  int v17; // r1@9
  int v18; // r0@12
  int *v19; // r1@12
  unsigned int v20; // r6@13
  int v21; // r0@13
  _DWORD *v22; // r5@14
  int v23; // r8@15
  int v24; // r10@15
  int v25; // r11@15
  unsigned int v26; // r4@15
  int v27; // r0@16
  _QWORD *v28; // r9@18
  signed int v29; // r7@18
  __int64 v30; // r1@20
  int *v31; // r0@20
  __int64 v32; // kr10_8@21
  int v33; // r6@21
  int v34; // r0@21
  int v35; // r0@22
  int v36; // r0@25
  __int64 v37; // r1@29
  int *v38; // r0@29
  void *v39; // r0@34
  unsigned int v40; // r4@35
  unsigned int v41; // r5@36
  void *v42; // t1@37
  int v44; // [sp+4h] [bp-9Ch]@19
  __int64 *v45; // [sp+8h] [bp-98h]@14
  unsigned int v46; // [sp+10h] [bp-90h]@16
  BlockSource *v47; // [sp+14h] [bp-8Ch]@1
  char v48; // [sp+18h] [bp-88h]@21
  int v49; // [sp+1Ch] [bp-84h]@20
  int v50; // [sp+20h] [bp-80h]@20
  int v51; // [sp+24h] [bp-7Ch]@20
  void *v52; // [sp+28h] [bp-78h]@1
  int v53; // [sp+2Ch] [bp-74h]@2
  __int64 v54; // [sp+30h] [bp-70h]@2
  int v55; // [sp+38h] [bp-68h]@2
  int *v56; // [sp+3Ch] [bp-64h]@2
  __int64 v57; // [sp+40h] [bp-60h]@2
  __int64 v58; // [sp+48h] [bp-58h]@2
  void *ptr; // [sp+50h] [bp-50h]@1
  int v60; // [sp+54h] [bp-4Ch]@2
  __int64 v61; // [sp+58h] [bp-48h]@2
  int v62; // [sp+60h] [bp-40h]@2
  int *v63; // [sp+64h] [bp-3Ch]@2
  __int64 v64; // [sp+68h] [bp-38h]@2
  __int64 v65; // [sp+70h] [bp-30h]@2

  v47 = a2;
  v3 = a3;
  _aeabi_memclr8(&v52, 40);
  std::_Deque_base<std::pair<BlockPos,unsigned int>,std::allocator<std::pair<BlockPos,unsigned int>>>::_M_initialize_map(
    (int)&v52,
    0);
  _aeabi_memclr8(&ptr, 40);
    (int)&ptr,
  if ( v52 )
  {
    v4 = &v65;
    v5 = v61;
    v7 = v62;
    v6 = (unsigned int)v63;
    v62 = v55;
    v63 = v56;
    v61 = v54;
    v54 = v5;
    v55 = v7;
    v56 = (int *)v6;
    v8 = v64;
    *(_QWORD *)(&v9 - 1) = v65;
    v65 = v58;
    v64 = v57;
    v57 = v8;
    v58 = *(_QWORD *)(&v9 - 1);
    v10 = ptr;
    ptr = v52;
    v52 = v10;
    v11 = v60;
    v60 = v53;
    v53 = v11;
    if ( v10 )
    {
      if ( v6 < v9 + 4 )
      {
        v12 = v6 - 4;
        do
        {
          v13 = *(void **)(v12 + 4);
          v12 += 4;
          operator delete(v13);
        }
        while ( v12 < v9 );
      }
      operator delete(v10);
    }
  }
  else
  v14 = v64;
  v15 = *(_QWORD *)v3;
  v16 = *((_DWORD *)v3 + 2);
  if ( (_DWORD)v64 == *(_DWORD *)v4 - 16 )
    if ( (unsigned int)(v60 - ((HIDWORD(v65) - (signed int)ptr) >> 2)) <= 1 )
      std::deque<std::pair<BlockPos,unsigned int>,std::allocator<std::pair<BlockPos,unsigned int>>>::_M_reallocate_map(
        (int)&ptr,
        1u,
        0);
    *(_DWORD *)(HIDWORD(v65) + 4) = operator new(0x200u);
    v18 = v64;
    *(_DWORD *)v64 = v15;
    *(_DWORD *)(v18 + 4) = HIDWORD(v15);
    *(_DWORD *)(v18 + 8) = v16;
    *(_DWORD *)(v18 + 12) = 0;
    v19 = (int *)(HIDWORD(v65) + 4);
    HIDWORD(v65) = v19;
    v17 = *v19;
    HIDWORD(v64) = v17;
    *(_DWORD *)v4 = v17 + 512;
    *(_DWORD *)(v14 + 4) = HIDWORD(v15);
    *(_DWORD *)(v14 + 8) = v16;
    *(_DWORD *)(v14 + 12) = 0;
    v17 = v14 + 16;
  LODWORD(v64) = v17;
  v20 = 0;
  v21 = v61;
  if ( v17 != (_DWORD)v61 )
    v45 = v4;
    v22 = Facing::DIRECTION;
    do
      v23 = *(_DWORD *)v21;
      v24 = *(_DWORD *)(v21 + 4);
      v25 = *(_DWORD *)(v21 + 8);
      v26 = *(_DWORD *)(v21 + 12);
      if ( v21 == v62 - 16 )
        v46 = v20;
        operator delete((void *)HIDWORD(v61));
        ++v63;
        v27 = *v63;
        HIDWORD(v61) = v27;
        v62 = v27 + 512;
      else
        v27 = v21 + 16;
      v28 = v22 + 1;
      v29 = 0;
      LODWORD(v61) = v27;
      if ( v26 > 5 )
          v37 = *v28;
          v49 = *((_DWORD *)v28 - 1) + v23;
          v50 = v37 + v24;
          v51 = HIDWORD(v37) + v25;
          v38 = (int *)BlockSource::getMaterial(v47, (const BlockPos *)&v49);
          if ( Material::isType(v38, 5) == 1 )
          {
            v48 = *(_BYTE *)(Block::mAir + 4);
            BlockSource::setBlock((int)v47, (BlockPos *)&v49, &v48, 3);
            ++v46;
          }
          ++v29;
          v28 = (_QWORD *)((char *)v28 + 12);
        while ( v29 < 6 );
        v44 = v26 + 1;
          v30 = *v28;
          v50 = v30 + v24;
          v51 = HIDWORD(v30) + v25;
          v31 = (int *)BlockSource::getMaterial(v47, (const BlockPos *)&v49);
          if ( Material::isType(v31, 5) == 1 )
            v32 = *(_QWORD *)&v49;
            v33 = v51;
            v34 = v64;
            if ( (_DWORD)v64 == *(_DWORD *)v45 - 16 )
            {
              if ( (unsigned int)(v60 - ((HIDWORD(v65) - (signed int)ptr) >> 2)) <= 1 )
                std::deque<std::pair<BlockPos,unsigned int>,std::allocator<std::pair<BlockPos,unsigned int>>>::_M_reallocate_map(
                  (int)&ptr,
                  1u,
                  0);
              *(_DWORD *)(HIDWORD(v65) + 4) = operator new(0x200u);
              v36 = v64;
              *(_DWORD *)v64 = v32;
              *(_DWORD *)(v36 + 4) = HIDWORD(v32);
              *(_DWORD *)(v36 + 8) = v33;
              *(_DWORD *)(v36 + 12) = v44;
              HIDWORD(v65) += 4;
              v35 = *(_DWORD *)HIDWORD(v65);
              HIDWORD(v64) = v35;
              *(_DWORD *)v45 = v35 + 512;
            }
            else
              *(_DWORD *)v64 = v49;
              *(_DWORD *)(v34 + 4) = HIDWORD(v32);
              *(_DWORD *)(v34 + 8) = v33;
              *(_DWORD *)(v34 + 12) = v44;
              v35 = v34 + 16;
            LODWORD(v64) = v35;
      v20 = v46;
      if ( v46 > 0x40 )
        break;
      v21 = v61;
      v22 = Facing::DIRECTION;
    while ( (_DWORD)v64 != (_DWORD)v61 );
  v39 = ptr;
  if ( ptr )
    v40 = HIDWORD(v65);
    if ( (unsigned int)v63 < HIDWORD(v65) + 4 )
      v41 = (unsigned int)(v63 - 1);
      do
        v42 = *(void **)(v41 + 4);
        v41 += 4;
        operator delete(v42);
      while ( v41 < v40 );
      v39 = ptr;
    operator delete(v39);
  return v20 != 0;
}


void __fastcall SpongeBlock::buildDescriptionId(SpongeBlock *this, int a2, int a3)
{
  int *v3; // r5@1
  int v4; // r4@1
  void *v5; // r0@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  int v8; // [sp+0h] [bp-20h]@1

  v3 = (int *)this;
  v4 = a3;
  sub_21E8AF4(&v8, (int *)(a2 + 8));
  if ( v4 == 1 )
  {
    sub_21E7408((const void **)&v8, ".wet", 4u);
  }
  else if ( !v4 )
    sub_21E7408((const void **)&v8, ".dry", 4u);
  sub_21E8AF4(v3, &v8);
  sub_21E7408((const void **)v3, ".name", 5u);
  v5 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v6 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
}


unsigned int __fastcall SpongeBlock::_attemptAbsorbWater(SpongeBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r4@1
  SpongeBlock *v4; // r5@1
  unsigned int result; // r0@1
  int v6; // r0@3
  Level *v11; // r6@3
  signed int v12; // r11@3
  char *v13; // r0@4
  Level *v15; // r0@4
  char *v16; // r0@4
  Level *v18; // r0@4
  char *v19; // r0@4
  Level *v21; // r0@4
  char *v22; // r0@4
  int v24; // r5@4
  BlockPos *v25; // [sp+10h] [bp-80h]@1
  char v26; // [sp+14h] [bp-7Ch]@5
  int v27; // [sp+24h] [bp-6Ch]@4
  float v28; // [sp+2Ch] [bp-64h]@4
  float v31; // [sp+38h] [bp-58h]@4
  char v32; // [sp+44h] [bp-4Ch]@3

  v3 = a2;
  v4 = this;
  v25 = a3;
  result = BlockSource::getData(a2, a3);
  if ( !result )
  {
    result = SpongeBlock::_performAbsorbWater(0, v3, v25);
    if ( result == 1 )
    {
      v32 = *((_BYTE *)v4 + 4);
      BlockSource::setBlockAndData((int)v3, v25, &v32, 1, 3, 0);
      v6 = BlockSource::getLevel(v3);
      __asm
      {
        VMOV.F32        S18, #0.5
        VLDR            D8, =2.32830644e-10
        VMOV.F32        S20, #0.25
      }
      v11 = (Level *)v6;
      __asm { VMOV.F32        S22, #-0.25 }
      v12 = 4;
      do
        v13 = Level::getRandom(v11);
        _R7 = Random::_genRandInt32((Random *)v13);
        v15 = (Level *)BlockSource::getLevel(v3);
        v16 = Level::getRandom(v15);
        _R6 = Random::_genRandInt32((Random *)v16);
        v18 = (Level *)BlockSource::getLevel(v3);
        v19 = Level::getRandom(v18);
        _R8 = Random::_genRandInt32((Random *)v19);
        v21 = (Level *)BlockSource::getLevel(v3);
        v22 = Level::getRandom(v21);
        _R9 = Random::_genRandInt32((Random *)v22);
        v24 = BlockSource::getLevel(v3);
        Vec3::Vec3((int)&v28, (int)v25);
        __asm
        {
          VMOV            S0, R8
          VMOV            S2, R9
          VCVT.F64.U32    D0, S0
          VCVT.F64.U32    D1, S2
          VMOV            S4, R7
          VMOV            S6, R6
          VCVT.F64.U32    D2, S4
          VCVT.F64.U32    D3, S6
          VMUL.F64        D0, D0, D8
          VMUL.F64        D1, D1, D8
          VMUL.F64        D2, D2, D8
          VMUL.F64        D3, D3, D8
          VCVT.F32.F64    S0, D0
          VCVT.F32.F64    S2, D1
          VMUL.F32        S0, S0, S18
          VLDR            S8, [SP,#0x90+var_64]
          VCVT.F32.F64    S4, D2
          VMUL.F32        S2, S2, S18
          VLDR            S10, [SP,#0x90+var_60]
          VCVT.F32.F64    S6, D3
          VLDR            S12, [SP,#0x90+var_5C]
          VADD.F32        S0, S0, S22
          VADD.F32        S4, S8, S4
          VADD.F32        S8, S10, S20
          VADD.F32        S6, S12, S6
          VADD.F32        S2, S2, S22
          VSTR            S0, [SP,#0x90+var_70]
        }
        v27 = 1065353216;
          VSTR            S4, [SP,#0x90+var_58]
          VSTR            S8, [SP,#0x90+var_54]
          VSTR            S6, [SP,#0x90+var_50]
          VSTR            S2, [SP,#0x90+var_68]
        Level::addParticle(v24, 1, (int)&v31);
        --v12;
        v11 = (Level *)BlockSource::getLevel(v3);
      while ( v12 );
      Vec3::Vec3((int)&v26, (int)v25);
      result = Level::broadcastDimensionEvent((int)v11, v3, 2001, (int)&v26, *(_BYTE *)(Block::mFlowingWater + 4));
    }
  }
  return result;
}


int __fastcall SpongeBlock::getSpawnResourcesAuxValue(SpongeBlock *this, int a2)
{
  return a2;
}


void __fastcall SpongeBlock::~SpongeBlock(SpongeBlock *this)
{
  SpongeBlock::~SpongeBlock(this);
}


void __fastcall SpongeBlock::buildDescriptionId(SpongeBlock *this, int a2, int a3)
{
  SpongeBlock::buildDescriptionId(this, a2, a3);
}


void __fastcall SpongeBlock::~SpongeBlock(SpongeBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


unsigned int __fastcall SpongeBlock::animateTick(SpongeBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  BlockSource *v4; // r4@1
  const BlockPos *v5; // r6@1
  Random *v6; // r5@1
  unsigned int result; // r0@1
  unsigned int v8; // r7@2
  int v9; // r2@3
  int v19; // r0@15
  float v20; // [sp+10h] [bp-40h]@4
  char v23; // [sp+1Ch] [bp-34h]@3

  v4 = a2;
  v5 = a3;
  v6 = a4;
  result = BlockSource::getData(a2, a3);
  if ( result )
  {
    result = Random::_genRandInt32(v6);
    v8 = result % 6;
    if ( result % 6 != 1 )
    {
      BlockPos::relative((BlockPos *)&v23, (int)v5, (char)v8, 1);
      v9 = Facing::OPPOSITE_FACING[v8];
      result = BlockSource::canProvideSupport(v4, (int)&v23);
      if ( !result )
      {
        Vec3::Vec3((int)&v20, (int)v5);
        if ( v8 )
        {
          _R0 = Random::_genRandInt32(v6);
          __asm
          {
            VMOV            S0, R0
            VLDR            D8, =2.32830644e-10
            VLDR            S2, =0.8
            VCVT.F64.U32    D0, S0
          }
          _R0 = &Facing::NORMAL[3 * v8];
            VMUL.F64        D0, D0, D8
            VCVT.F32.F64    S0, D0
            VMUL.F32        S0, S0, S2
            VLDR            S2, [SP,#0x50+var_3C]
            VLDR            S18, [R0]
            VADD.F32        S0, S0, S2
            VSTR            S0, [SP,#0x50+var_3C]
            VCMPE.F32       S18, #0.0
            VMRS            APSR_nzcv, FPSCR
          if ( !_ZF )
            __asm
            {
              VLDR            S2, [SP,#0x50+var_38]
              VADD.F32        S0, S2, S0
              VSTR            S0, [SP,#0x50+var_38]
              VLDR            S0, [SP,#0x50+var_40]
            }
            if ( _ZF )
              __asm { VLDREQ          S2, =1.05 }
            else
              __asm { VLDRNE          S2, =-0.05 }
              VADD.F32        S0, S0, S2
              VSTR            S0, [SP,#0x50+var_40]
            goto LABEL_15;
            VLDR            S2, [SP,#0x50+var_40]
            VADD.F32        S0, S2, S0
            VSTR            S0, [SP,#0x50+var_40]
            VLDR            S0, [SP,#0x50+var_38]
          if ( _ZF )
            __asm { VLDREQ          S2, =1.05 }
          else
            __asm { VLDRNE          S2, =-0.05 }
        }
        else
            VLDR            S0, =-0.05
            VLDR            S2, [SP,#0x50+var_38]
        __asm
          VADD.F32        S0, S0, S2
          VSTR            S0, [SP,#0x50+var_38]
LABEL_15:
        v19 = BlockSource::getLevel(v4);
        return Level::addParticle(v19, 23, (int)&v20);
      }
    }
  }
  return result;
}


int __fastcall SpongeBlock::isValidAuxValue(SpongeBlock *this, int a2)
{
  int result; // r0@1

  result = a2 | 1;
  if ( (a2 | 1) != 1 )
    result = 0;
  return result;
}


_DWORD *__fastcall SpongeBlock::SpongeBlock(int a1, const void **a2, char a3, int a4)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)Block::Block(a1, a2, a3, a4);
  *result = &off_27144E8;
  return result;
}
