

unsigned int __fastcall GrassBlock::calcVariant(GrassBlock *this, BlockSource *a2, const BlockPos *a3, unsigned __int8 a4)
{
  const BlockPos *v4; // r5@1
  BlockSource *v5; // r6@1
  GrassBlock *v6; // r4@1
  int v7; // r0@1
  int v8; // r1@1
  int v9; // r2@1
  int *v10; // r7@1
  unsigned int result; // r0@3
  unsigned int v12; // r0@4
  char v20; // r3@5
  int v21; // [sp+0h] [bp-20h]@1
  int v22; // [sp+4h] [bp-1Ch]@1
  int v23; // [sp+8h] [bp-18h]@1

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 2);
  v21 = v7;
  v22 = v8 + 1;
  v23 = v9;
  v10 = (int *)BlockSource::getMaterial(v5, (const BlockPos *)&v21);
  if ( Material::isType(v10, 20) || Material::isType(v10, 21) == 1 )
  {
    result = ((signed int)((*(_QWORD *)((char *)v6 + 644) >> 32) - *(_QWORD *)((char *)v6 + 644)) >> 4) - 1;
  }
  else
    v12 = BlockSource::getGrassColor(v5, v4);
    _R2 = (unsigned __int16)v12 >> 8;
    _R1 = (unsigned __int8)v12;
    __asm
    {
      VMOV            S0, R1
      VMOV            S2, R2
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
    }
    result = (v12 >> 16) & 0xFF;
    __asm { VMOV            S4, R0 }
    LOBYTE(result) = 0;
    __asm { VCVT.F32.S32    S4, S4 }
    *(_QWORD *)&_R1 = *(_QWORD *)((char *)v6 + 644);
    if ( _R1 != _R2 )
      __asm { VLDR            S6, =0.0039216 }
      v20 = 0;
      __asm
      {
        VMUL.F32        S0, S0, S6
        VMUL.F32        S2, S2, S6
        VMUL.F32        S4, S4, S6
        VLDR            S6, =1000.0
      }
      do
        __asm
        {
          VLDR            S8, [R1]
          VLDR            S10, [R1,#4]
          VSUB.F32        S8, S4, S8
          VLDR            S12, [R1,#8]
          VSUB.F32        S10, S2, S10
        }
        _R1 += 16;
          VSUB.F32        S12, S0, S12
          VABS.F32        S8, S8
          VABS.F32        S10, S10
          VABS.F32        S12, S12
          VADD.F32        S8, S10, S8
          VADD.F32        S8, S8, S12
          VCMPE.F32       S8, S6
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          __asm { VMOVLT.F32      S6, S8 }
          LOBYTE(result) = v20;
        ++v20;
      while ( _R1 != _R2 );
  return (unsigned __int8)result;
}


signed int __fastcall GrassBlock::getColor(GrassBlock *this, int a2)
{
  return 8899913;
}


void __fastcall GrassBlock::~GrassBlock(GrassBlock *this)
{
  Block *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_270C22C;
  v2 = (void *)*((_DWORD *)this + 161);
  if ( v2 )
    operator delete(v2);
  Block::~Block(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


unsigned int __fastcall GrassBlock::getMapColor(GrassBlock *this, BlockSource *a2, const BlockPos *a3, BlockSource *a4)
{
  unsigned int v4; // r0@1
  unsigned int result; // r0@1

  v4 = FoliageColor::getMapGrassColor(a3, a4, a3);
  _R1 = (unsigned __int16)v4 >> 8;
  _R2 = (v4 >> 16) & 0xFF;
  __asm
  {
    VLDR            S8, =0.0039216
    VMOV            S0, R2
  }
  _R2 = (unsigned __int8)v4;
  result = v4 >> 24;
    VMOV            S2, R1
    VMOV            S4, R2
    VMOV            S6, R0
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VCVT.F32.S32    S6, S6
    VMUL.F32        S0, S0, S8
    VMUL.F32        S2, S2, S8
    VMUL.F32        S4, S4, S8
    VMUL.F32        S6, S6, S8
    VSTR            S0, [R4]
    VSTR            S2, [R4,#4]
    VSTR            S4, [R4,#8]
    VSTR            S6, [R4,#0xC]
  return result;
}


int __fastcall GrassBlock::initSideColorsFromAtlas(GrassBlock *this, const TextureAtlas *a2, const TextureAtlasItem *a3)
{
  GrassBlock *v3; // r4@1
  int result; // r0@1
  __int64 v5; // r6@1
  int *v6; // r1@4
  int v7; // r2@5
  int v8; // r3@5
  int v9; // r5@5
  int v10; // r1@5

  v3 = this;
  result = *((_DWORD *)this + 161);
  *((_DWORD *)v3 + 162) = result;
  v5 = *(_QWORD *)(*((_DWORD *)a2 + 21) + 20 * *((_DWORD *)a3 + 1) + 8);
  if ( (_DWORD)v5 != HIDWORD(v5) )
  {
    while ( 1 )
    {
      v6 = (int *)(*(_DWORD *)v5 + 8);
      if ( result == *((_DWORD *)v3 + 163) )
      {
        result = std::vector<Color,std::allocator<Color>>::_M_emplace_back_aux<Color const&>(
                   (unsigned __int64 *)((char *)v3 + 644),
                   (int)v6);
      }
      else
        v7 = *v6;
        v8 = *(_DWORD *)(*(_DWORD *)v5 + 12);
        v9 = *(_DWORD *)(*(_DWORD *)v5 + 16);
        v10 = *(_DWORD *)(*(_DWORD *)v5 + 20);
        *(_DWORD *)result = v7;
        *(_DWORD *)(result + 4) = v8;
        *(_DWORD *)(result + 8) = v9;
        *(_DWORD *)(result + 12) = v10;
        result = *((_DWORD *)v3 + 162) + 16;
        *((_DWORD *)v3 + 162) = result;
      LODWORD(v5) = v5 + 12;
      if ( HIDWORD(v5) == (_DWORD)v5 )
        break;
      result = *((_DWORD *)v3 + 162);
    }
  }
  return result;
}


int __fastcall GrassBlock::_getGrassSide(GrassBlock *this, int a2)
{
  int result; // r0@1
  int v11; // r3@2

  _R3 = (unsigned __int16)a2 >> 8;
  _R2 = (unsigned __int8)a2;
  __asm
  {
    VMOV            S0, R2
    VMOV            S2, R3
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
  }
  _R1 = ((unsigned int)a2 >> 16) & 0xFF;
    VMOV            S4, R1
    VCVT.F32.S32    S4, S4
  *(_QWORD *)&_R1 = *(_QWORD *)((char *)this + 644);
  result = 0;
  if ( _R1 != _R2 )
    __asm { VLDR            S6, =0.0039216 }
    v11 = 0;
    __asm
    {
      VMUL.F32        S0, S0, S6
      VMUL.F32        S2, S2, S6
      VMUL.F32        S4, S4, S6
      VLDR            S6, =1000.0
    }
    do
      __asm
      {
        VLDR            S8, [R1]
        VLDR            S10, [R1,#4]
        VSUB.F32        S8, S4, S8
        VLDR            S12, [R1,#8]
        VSUB.F32        S10, S2, S10
      }
      _R1 += 16;
        VSUB.F32        S12, S0, S12
        VABS.F32        S8, S8
        VABS.F32        S10, S10
        VABS.F32        S12, S12
        VADD.F32        S8, S10, S8
        VADD.F32        S8, S8, S12
        VCMPE.F32       S8, S6
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        __asm { VMOVLT.F32      S6, S8 }
        result = v11;
      ++v11;
    while ( _R1 != _R2 );
  return result;
}


signed int __fastcall GrassBlock::neighborChanged(GrassBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  int v6; // r0@1
  int v7; // r1@1
  int v8; // r2@1
  Block *v9; // r0@1
  signed int result; // r0@1
  int v11; // r3@2
  int v12; // r12@2
  int (__cdecl *v13)(_DWORD, BlockSource *, int *, const BlockPos *, int, int); // lr@2
  int v14; // [sp+0h] [bp-28h]@2
  int v15; // [sp+8h] [bp-20h]@2
  int v16; // [sp+Ch] [bp-1Ch]@1
  int v17; // [sp+10h] [bp-18h]@1
  int v18; // [sp+14h] [bp-14h]@1

  v4 = a3;
  v5 = a2;
  v6 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 1);
  v8 = *((_DWORD *)a3 + 2);
  v16 = v6;
  v17 = v7 + 1;
  v18 = v8;
  v9 = (Block *)BlockSource::getBlock(v5, (const BlockPos *)&v16);
  result = Block::isType(v9, (const Block *)Block::mReeds);
  if ( result == 1 )
  {
    v11 = *((_DWORD *)v4 + 1);
    v12 = *((_DWORD *)v4 + 2);
    v13 = *(int (__cdecl **)(_DWORD, BlockSource *, int *, const BlockPos *, int, int))(*(_DWORD *)Block::mReeds + 252);
    v14 = *(_DWORD *)v4;
    v15 = v12;
    result = v13(Block::mReeds, v5, &v14, v4, v14, v11 + 1);
  }
  return result;
}


int __fastcall GrassBlock::_randomWalk(GrassBlock *this, BlockSource *a2, BlockPos *a3, int a4)
{
  BlockSource *v4; // r11@1
  int v5; // r4@1
  BlockPos *v6; // r5@1
  Level *v7; // r0@1
  char *v8; // r7@1
  int v9; // r6@2
  unsigned int v10; // kr0C_4@3
  unsigned int v11; // r0@3
  __int64 v12; // r1@3
  Block *v13; // r0@3
  signed int v14; // r0@6
  signed int v15; // r1@9
  int v17; // [sp+8h] [bp-30h]@3
  int v18; // [sp+Ch] [bp-2Ch]@3
  unsigned int v19; // [sp+10h] [bp-28h]@3

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = (Level *)BlockSource::getLevel(a2);
  v8 = Level::getRandom(v7);
  if ( v5 < 16 )
  {
    v14 = 1;
  }
  else
    v9 = 0;
    while ( 1 )
    {
      *(_DWORD *)v6 = Random::_genRandInt32((Random *)v8) % 3 + *(_DWORD *)v6 - 1;
      v10 = Random::_genRandInt32((Random *)v8);
      *((_DWORD *)v6 + 1) += (signed int)(Random::_genRandInt32((Random *)v8) % 3 * (v10 % 3 - 1)) / 2;
      v11 = Random::_genRandInt32((Random *)v8) % 3 + *((_DWORD *)v6 + 2) - 1;
      *((_DWORD *)v6 + 2) = v11;
      v12 = *(_QWORD *)v6;
      v17 = *(_QWORD *)v6;
      v18 = HIDWORD(v12) - 1;
      v19 = v11;
      v13 = (Block *)BlockSource::getBlock(v4, (const BlockPos *)&v17);
      if ( Block::isType(v13, (const Block *)Block::mGrass) != 1 || BlockSource::isSolidBlockingBlock(v4, v6) == 1 )
        break;
      if ( ++v9 >= v5 / 16 )
      {
        v14 = 1;
        goto LABEL_9;
      }
    }
    v14 = 0;
LABEL_9:
  v15 = 0;
  if ( v5 > 15 )
    v15 = 1;
  return v14 & v15;
}


signed int __fastcall GrassBlock::canBeOriginalSurface(GrassBlock *this)
{
  return 1;
}


int __fastcall GrassBlock::GrassBlock(int a1, const void **a2, char a3)
{
  int v3; // r4@1
  char v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  void *v7; // r0@1
  int v8; // r1@1
  int v9; // r12@1
  int v10; // r12@1
  int v11; // r12@1
  int v12; // r12@1
  int v13; // r12@1
  int v14; // r12@1
  int v15; // r12@1
  int v16; // r12@1
  int v17; // r12@1
  int v18; // r12@1
  int v19; // r12@1
  int v20; // r12@1
  int v21; // r12@1
  int v22; // r12@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(1);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_270C22C;
  *(_DWORD *)(v3 + 644) = 0;
  *(_DWORD *)(v3 + 648) = 0;
  *(_DWORD *)(v3 + 652) = 0;
  v7 = operator new(0x100u);
  *(_DWORD *)(v3 + 644) = v7;
  v8 = (int)v7 + 256;
  *(_DWORD *)(v3 + 652) = (char *)v7 + 256;
  v9 = (int)v7 + 16;
  *((_DWORD *)v7 + 3) = 0;
  *(_DWORD *)v7 = 1056109300;
  *((_DWORD *)v7 + 1) = 1061208258;
  *((_DWORD *)v7 + 2) = 1052030133;
  *((_DWORD *)v7 + 7) = 0;
  *(_DWORD *)v9 = 1057655435;
  *(_DWORD *)(v9 + 4) = 1060550327;
  *(_DWORD *)(v9 + 8) = 1057589642;
  v10 = (int)v7 + 32;
  *((_DWORD *)v7 + 11) = 0;
  *(_DWORD *)v10 = 1061142464;
  *(_DWORD *)(v10 + 4) = 1060616120;
  *(_DWORD *)(v10 + 8) = 1051372203;
  v11 = (int)v7 + 48;
  *((_DWORD *)v7 + 15) = 0;
  *(_DWORD *)v11 = 1051898547;
  *(_DWORD *)(v11 + 4) = 1061800395;
  *(_DWORD *)(v11 + 8) = 1047589106;
  v12 = (int)v7 + 64;
  *((_DWORD *)v7 + 19) = 0;
  *(_DWORD *)v12 = 1051372203;
  *(_DWORD *)(v12 + 4) = 1061800395;
  *(_DWORD *)(v12 + 8) = 1048378622;
  v13 = (int)v7 + 80;
  *((_DWORD *)v7 + 23) = 0;
  *(_DWORD *)v13 = 1057523849;
  *(_DWORD *)(v13 + 4) = 1060879292;
  *(_DWORD *)(v13 + 8) = 1053609166;
  v14 = (int)v7 + 96;
  *((_DWORD *)v7 + 27) = 0;
  *(_DWORD *)v14 = 1057392263;
  *(_DWORD *)(v14 + 4) = 1060681913;
  *(_DWORD *)(v14 + 8) = 1056898816;
  v15 = (int)v7 + 112;
  *((_DWORD *)v7 + 31) = 0;
  *(_DWORD *)v15 = 1053345994;
  *(_DWORD *)(v15 + 4) = 1061668809;
  *(_DWORD *)(v15 + 8) = 1048378622;
  v16 = (int)v7 + 128;
  *((_DWORD *)v7 + 35) = 0;
  *(_DWORD *)v16 = 1057392263;
  *(_DWORD *)(v16 + 4) = 1060616120;
  *(_DWORD *)(v16 + 8) = 1057194884;
  v17 = (int)v7 + 144;
  *((_DWORD *)v7 + 39) = 0;
  *(_DWORD *)v17 = 1057194884;
  *(_DWORD *)(v17 + 4) = 1060484534;
  *(_DWORD *)(v17 + 8) = 1058247572;
  v18 = (int)v7 + 160;
  *((_DWORD *)v7 + 43) = 0;
  *(_DWORD *)v18 = 1056997505;
  *(_DWORD *)(v18 + 4) = 1060418741;
  *(_DWORD *)(v18 + 8) = 1058510744;
  v19 = (int)v7 + 176;
  *((_DWORD *)v7 + 47) = 0;
  *(_DWORD *)v19 = 1058115986;
  *(_DWORD *)(v19 + 4) = 1061010878;
  *(_DWORD *)(v19 + 8) = 1051898547;
  v20 = (int)v7 + 192;
  *((_DWORD *)v7 + 51) = 0;
  *(_DWORD *)v20 = 1058050193;
  *(_DWORD *)(v20 + 4) = 1057063298;
  *(_DWORD *)(v20 + 8) = 1050319515;
  v21 = (int)v7 + 208;
  *((_DWORD *)v7 + 55) = 0;
  *(_DWORD *)v21 = 1057918607;
  *(_DWORD *)(v21 + 4) = 1060747706;
  *(_DWORD *)(v21 + 8) = 1055056612;
  v22 = (int)v7 + 224;
  *((_DWORD *)v7 + 59) = 0;
  *(_DWORD *)v22 = 1054135510;
  *(_DWORD *)(v22 + 4) = 1054925026;
  *(_DWORD *)(v22 + 8) = 1046799590;
  *((_DWORD *)v7 + 63) = 0;
  v7 = (char *)v7 + 240;
  *(_DWORD *)v7 = 1050714273;
  *((_DWORD *)v7 + 1) = 1056240886;
  *((_DWORD *)v7 + 2) = 1044957386;
  *(_DWORD *)(v3 + 648) = v8;
  (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v3 + 476))(v3, 1);
  *(_DWORD *)(v3 + 20) = 3;
  return v3;
}


void __fastcall GrassBlock::~GrassBlock(GrassBlock *this)
{
  GrassBlock::~GrassBlock(this);
}


Block *__fastcall GrassBlock::~GrassBlock(GrassBlock *this)
{
  Block *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_270C22C;
  v2 = (void *)*((_DWORD *)this + 161);
  if ( v2 )
    operator delete(v2);
  return j_j_j__ZN5BlockD2Ev_0(v1);
}


int __fastcall GrassBlock::onFertilized(GrassBlock *this, BlockSource *a2, const BlockPos *a3, Entity *a4, ItemUseCallback *a5)
{
  BlockSource *v5; // r11@1
  const BlockPos *v6; // r4@1
  Level *v7; // r0@1
  char *v8; // r8@1
  BlockSource *v9; // r6@1
  int v10; // r7@1
  _BYTE *v11; // r5@1
  _DWORD *v12; // r10@1
  int v13; // r1@2
  int v14; // r2@2
  _DWORD *v15; // r5@4
  unsigned int v16; // r10@4
  BlockState *v17; // r0@5
  int v18; // r6@5
  int v19; // r8@5
  unsigned int v20; // r1@5
  int v21; // r0@7
  int v22; // r1@7
  int v23; // r0@8
  signed int v25; // [sp+10h] [bp-58h]@1
  signed int v26; // [sp+14h] [bp-54h]@1
  char *v27; // [sp+1Ch] [bp-4Ch]@1
  unsigned __int8 v28; // [sp+28h] [bp-40h]@13
  unsigned __int8 v29; // [sp+29h] [bp-3Fh]@13
  unsigned __int8 v30; // [sp+2Ch] [bp-3Ch]@8
  char v31; // [sp+2Dh] [bp-3Bh]@8
  unsigned __int8 v32; // [sp+30h] [bp-38h]@4
  unsigned __int8 v33; // [sp+31h] [bp-37h]@4
  unsigned __int8 v34; // [sp+34h] [bp-34h]@1
  int v35; // [sp+38h] [bp-30h]@2
  int v36; // [sp+3Ch] [bp-2Ch]@2
  int v37; // [sp+40h] [bp-28h]@2

  v5 = a2;
  v6 = a3;
  v7 = (Level *)BlockSource::getLevel(a2);
  v8 = Level::getRandom(v7);
  v25 = 0;
  v26 = 1;
  v9 = (BlockSource *)&v34;
  v10 = 16;
  v27 = v8;
  v11 = &BlockID::AIR;
  v12 = &FullBlock::AIR;
  do
  {
    v13 = *((_DWORD *)v6 + 1);
    v14 = *((_DWORD *)v6 + 2);
    v35 = *(_DWORD *)v6;
    v36 = v13 + 1;
    v37 = v14;
    if ( GrassBlock::_randomWalk((GrassBlock *)(v13 + 1), v5, (BlockPos *)&v35, v10) == 1 )
    {
      BlockSource::getBlockID(v9, v5, (int)&v35);
      if ( v34 == *v11 )
      {
        v15 = v12;
        v32 = *(_BYTE *)v12;
        v33 = *((_BYTE *)v12 + 1);
        v16 = Random::_genRandInt32((Random *)v8) & 7;
        if ( v16 )
        {
          v32 = *(_BYTE *)(Block::mTallgrass + 4);
          v17 = (BlockState *)Block::getBlockState(Block::mTallgrass, 24);
          v18 = v33;
          v19 = *(_QWORD *)v17 + 1 - (*(_QWORD *)v17 >> 32);
          v20 = v18 & ~BlockState::getMask(v17);
          if ( v16 != 2 )
            v16 = 1;
          v21 = v32;
          v22 = v20 | (v16 << v19);
        }
        else
          v23 = BlockSource::getBiome(v5, (const BlockPos *)&v35);
          (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v23 + 68))(&v30);
          v21 = v30;
          v32 = v30;
          LOBYTE(v22) = v31;
        v33 = v22;
        v12 = v15;
        if ( (*(int (**)(void))(*(_DWORD *)Block::mBlocks[v21] + 324))() == 1 )
          if ( a5 )
          {
            if ( (*(int (**)(void))(*(_DWORD *)a5 + 16))() )
            {
              v25 = 1;
            }
            else
              v28 = v32;
              v29 = v33;
              v26 = 0;
              BlockSource::setBlockAndData((int)v5, (BlockPos *)&v35, (int)&v28, 3, 0);
              (*(void (__fastcall **)(ItemUseCallback *, int *, _DWORD *, unsigned __int8 *))(*(_DWORD *)a5 + 20))(
                a5,
                &v35,
                v15,
                &v32);
          }
          else
            v28 = v32;
            v29 = v33;
            v26 = 0;
            BlockSource::setBlockAndData((int)v5, (BlockPos *)&v35, (int)&v28, 3, 0);
        v8 = v27;
        v9 = (BlockSource *)&v34;
        v11 = &BlockID::AIR;
      }
    }
    ++v10;
  }
  while ( v10 != 64 );
  return ~(v25 & v26) & 1;
}


unsigned int __fastcall GrassBlock::getMobToSpawn(GrassBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  Block *v5; // r6@1
  int v6; // r0@1
  int v7; // r1@1
  int v8; // r2@1
  unsigned int result; // r0@3
  unsigned __int8 v10; // [sp+0h] [bp-20h]@1
  int v11; // [sp+4h] [bp-1Ch]@1
  int v12; // [sp+8h] [bp-18h]@1
  int v13; // [sp+Ch] [bp-14h]@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 1);
  v8 = *((_DWORD *)a3 + 2);
  v11 = v6;
  v12 = v7 + 1;
  v13 = v8;
  BlockSource::getRawBrightness((BlockSource *)&v10, v4, (int)&v11, 1);
  if ( v10 < 9u || BlockSource::canSeeSky(v4, (const BlockPos *)&v11) != 1 )
    result = Block::getMobToSpawn(v5, v4, v3);
  else
    result = Block::getTypeToSpawn((int)v5, (int)v4, 4864, v3);
  return result;
}


int __fastcall GrassBlock::tick(GrassBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  BlockSource *v4; // r4@1
  Random *v5; // r6@1
  const BlockPos *v6; // r5@1
  Level *v7; // r0@1
  int result; // r0@1
  int v9; // r1@2
  int v10; // r2@2
  Material *v11; // r0@3
  char *v16; // r2@6
  BlockPos *v17; // r1@6
  int v18; // r0@6
  int v19; // ST0C_4@9
  unsigned int v20; // r8@9
  int v21; // ST08_4@9
  unsigned int v22; // r7@9
  int v23; // r5@9
  unsigned __int64 *v24; // r0@10
  int v25; // r0@10
  char v26; // r1@10
  unsigned int v27; // r1@10
  Material *v28; // r5@11
  char v29; // [sp+10h] [bp-78h]@15
  char v30; // [sp+11h] [bp-77h]@15
  unsigned __int8 v31; // [sp+14h] [bp-74h]@11
  unsigned int v32; // [sp+18h] [bp-70h]@11
  int v33; // [sp+1Ch] [bp-6Ch]@11
  unsigned int v34; // [sp+20h] [bp-68h]@11
  unsigned int v35; // [sp+24h] [bp-64h]@11
  int v36; // [sp+28h] [bp-60h]@11
  unsigned int v37; // [sp+2Ch] [bp-5Ch]@11
  unsigned int v38; // [sp+30h] [bp-58h]@11
  int v39; // [sp+34h] [bp-54h]@11
  unsigned int v40; // [sp+38h] [bp-50h]@11
  unsigned __int8 v41; // [sp+3Ch] [bp-4Ch]@11
  unsigned __int8 v42; // [sp+40h] [bp-48h]@9
  unsigned __int8 v43; // [sp+41h] [bp-47h]@10
  unsigned int v44; // [sp+44h] [bp-44h]@9
  unsigned int v45; // [sp+48h] [bp-40h]@9
  unsigned int v46; // [sp+4Ch] [bp-3Ch]@9
  char v47; // [sp+50h] [bp-38h]@6
  char v48; // [sp+51h] [bp-37h]@6
  unsigned __int8 v49; // [sp+54h] [bp-34h]@2
  int v50; // [sp+58h] [bp-30h]@2
  int v51; // [sp+5Ch] [bp-2Ch]@2
  int v52; // [sp+60h] [bp-28h]@2

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v7);
  if ( !result )
  {
    v9 = *((_DWORD *)v6 + 1);
    v10 = *((_DWORD *)v6 + 2);
    v50 = *(_DWORD *)v6;
    v51 = v9 + 1;
    v52 = v10;
    BlockSource::getRawBrightness((BlockSource *)&v49, v4, (int)&v50, 1);
    result = v49;
    if ( v49 >= (unsigned int)GrassBlock::MIN_BRIGHTNESS )
    {
      if ( v49 >= (unsigned __int8)Brightness::MAX - 6 )
      {
        v19 = *((_DWORD *)v6 + 2);
        v20 = Random::_genRandInt32(v5);
        v21 = *((_DWORD *)v6 + 1);
        v22 = Random::_genRandInt32(v5);
        v23 = *(_DWORD *)v6;
        v44 = Random::_genRandInt32(v5) % 3 + v23 - 1;
        v45 = v22 % 5 + v21 - 3;
        v46 = v20 % 3 + v19 - 1;
        BlockSource::getBlockAndData((BlockSource *)&v42, v4, (int)&v44);
        result = Block::mDirt;
        if ( v42 == *(_BYTE *)(Block::mDirt + 4) )
        {
          v24 = (unsigned __int64 *)Block::getBlockState(Block::mDirt, 24);
          v26 = *v24;
          v25 = *v24 >> 32;
          v27 = (unsigned int)v43 >> (v26 + 1 - v25);
          result = 0xFu >> (4 - v25);
          if ( !(v27 & result) )
          {
            v38 = v44;
            v39 = v45 + 1;
            v40 = v46;
            BlockSource::getBlockAndData((BlockSource *)&v41, v4, (int)&v38);
            v35 = v44;
            v36 = v45 + 1;
            v37 = v46;
            v28 = (Material *)BlockSource::getMaterial(v4, (const BlockPos *)&v35);
            v32 = v44;
            v33 = v45 + 1;
            v34 = v46;
            BlockSource::getRawBrightness((BlockSource *)&v31, v4, (int)&v32, 1);
            result = GrassBlock::MIN_BRIGHTNESS;
            if ( v31 >= (unsigned int)GrassBlock::MIN_BRIGHTNESS )
            {
              result = Block::isSolid((Block *)Block::mBlocks[v41]);
              if ( !result )
              {
                result = Material::isLiquid(v28);
                if ( !result )
                {
                  v17 = (BlockPos *)&v44;
                  v16 = &v29;
                  v29 = *(_BYTE *)(Block::mGrass + 4);
                  v30 = 0;
                  v18 = (int)v4;
                  return BlockSource::setBlockAndData(v18, v17, (int)v16, 2, 0);
                }
              }
            }
          }
        }
      }
    }
    else
      v11 = (Material *)BlockSource::getMaterial(v4, (const BlockPos *)&v50);
      result = Material::getTranslucency(v11);
      __asm
        VLDR            S0, =0.2
        VMOV            S2, R0
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        result = Random::_genRandInt32(v5);
        if ( !(result & 3) )
          v16 = &v47;
          v17 = v6;
          v47 = *(_BYTE *)(Block::mDirt + 4);
          v48 = 0;
          v18 = (int)v4;
          return BlockSource::setBlockAndData(v18, v17, (int)v16, 2, 0);
  }
  return result;
}
