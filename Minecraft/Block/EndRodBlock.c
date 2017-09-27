

void __fastcall EndRodBlock::~EndRodBlock(EndRodBlock *this)
{
  EndRodBlock::~EndRodBlock(this);
}


signed int __fastcall EndRodBlock::_shouldMirror(EndRodBlock *this, const Block *a2, int a3, int a4)
{
  if ( *((_BYTE *)a2 + 4) == *(_BYTE *)(Block::mEndRod + 4) && (unsigned int)a4 <= 5 )
  {
    if ( (1 << a4) & 3 )
    {
      if ( (unsigned int)a3 < 2 )
        return 1;
    }
    else if ( (1 << a4) & 0xC )
      if ( (a3 & 0xFE) == 2 )
    else if ( (a3 & 0xFE) == 4 )
      return 1;
  }
  return 0;
}


signed int __fastcall EndRodBlock::mayPlace(EndRodBlock *this, BlockSource *a2, const BlockPos *a3, signed __int8 a4)
{
  return 1;
}


void __fastcall EndRodBlock::_shapeFromDirection(__int64 this, Vec3 *a2, int a3)
{
  if ( (unsigned int)a3 <= 5 )
  {
    if ( (1 << a3) & 3 )
    {
      *(_QWORD *)HIDWORD(this) = 1052770304LL;
      *(_DWORD *)(HIDWORD(this) + 8) = 1052770304;
      *(_QWORD *)a2 = 4575657222467485696LL;
      *((_DWORD *)a2 + 2) = 1059061760;
    }
    else
      if ( (1 << a3) & 0xC )
      {
        *(_DWORD *)HIDWORD(this) = 1052770304;
        *(_QWORD *)(HIDWORD(this) + 4) = 1052770304LL;
        HIDWORD(this) = 1065353216;
        *(_DWORD *)a2 = 1059061760;
        *((_DWORD *)a2 + 1) = 1059061760;
      }
      else
        *(_DWORD *)HIDWORD(this) = 0;
        *(_DWORD *)(HIDWORD(this) + 4) = 1052770304;
        LODWORD(this) = 1065353216;
        *(_DWORD *)(HIDWORD(this) + 8) = 1052770304;
        HIDWORD(this) = 1059061760;
        *(_QWORD *)a2 = this;
      *((_DWORD *)a2 + 2) = HIDWORD(this);
  }
}


int __fastcall EndRodBlock::breaksFallingBlocks(EndRodBlock *this, int a2)
{
  int result; // r0@1

  result = a2 & 6;
  if ( a2 & 6 )
    result = 1;
  return result;
}


int __fastcall EndRodBlock::_mirror(EndRodBlock *this, int a2)
{
  return byte_262E778[a2];
}


signed int __fastcall EndRodBlock::canStandOn(EndRodBlock *this, BlockSource *a2, const BlockPos *a3)
{
  return 1;
}


int __fastcall EndRodBlock::canSurvive(EndRodBlock *this, BlockSource *a2, const BlockPos *a3)
{
  EndRodBlock *v3; // r4@1
  __int64 v4; // kr00_8@1
  int v5; // r2@1
  int (__fastcall *v6)(EndRodBlock *, int); // r5@1
  int v7; // r0@1
  __int64 v9; // [sp+4h] [bp-1Ch]@1
  int v10; // [sp+Ch] [bp-14h]@1

  v3 = this;
  v4 = *(_QWORD *)a3;
  v5 = *((_DWORD *)a3 + 2);
  v6 = *(int (__fastcall **)(EndRodBlock *, int))(*(_DWORD *)this + 228);
  v9 = v4 - 0x100000000LL;
  v10 = v5;
  v7 = BlockSource::getBlock(a2, (const BlockPos *)&v9);
  return v6(v3, v7);
}


void __fastcall EndRodBlock::~EndRodBlock(EndRodBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall EndRodBlock::getPlacementDataValue(EndRodBlock *this, Entity *a2, const BlockPos *a3, int a4, const Vec3 *a5, int a6)
{
  int v6; // r4@1
  const BlockPos *v7; // r6@1
  const BlockPos *v8; // r5@1
  int v9; // r1@1
  int v10; // r2@1
  int v11; // r1@1
  int v12; // r2@1
  int v13; // r2@1
  int v14; // r2@1
  int v15; // r1@1
  int v16; // r2@1
  int v17; // r1@1
  int v18; // r2@1
  int v19; // r0@2
  int v20; // r2@2
  int v21; // r1@2
  signed int result; // r0@2
  _BYTE *v23; // r0@4
  int v24; // r0@6
  int v25; // r1@6
  int v26; // r0@9
  int v27; // r1@9
  int v28; // r0@12
  int v29; // r1@12
  int v30; // r0@15
  int v31; // r1@15
  int v32; // r0@18
  int v33; // r1@18
  int v34; // [sp+0h] [bp-70h]@1
  int v35; // [sp+4h] [bp-6Ch]@1
  int v36; // [sp+8h] [bp-68h]@1
  char v37; // [sp+Ch] [bp-64h]@1
  unsigned __int8 v38; // [sp+Dh] [bp-63h]@15
  int v39; // [sp+10h] [bp-60h]@1
  int v40; // [sp+14h] [bp-5Ch]@1
  int v41; // [sp+18h] [bp-58h]@1
  char v42; // [sp+1Ch] [bp-54h]@1
  unsigned __int8 v43; // [sp+1Dh] [bp-53h]@18
  __int64 v44; // [sp+20h] [bp-50h]@1
  int v45; // [sp+28h] [bp-48h]@1
  char v46; // [sp+2Ch] [bp-44h]@1
  unsigned __int8 v47; // [sp+2Dh] [bp-43h]@9
  __int64 v48; // [sp+30h] [bp-40h]@1
  int v49; // [sp+38h] [bp-38h]@1
  char v50; // [sp+3Ch] [bp-34h]@1
  unsigned __int8 v51; // [sp+3Dh] [bp-33h]@12
  int v52; // [sp+40h] [bp-30h]@1
  int v53; // [sp+44h] [bp-2Ch]@1
  int v54; // [sp+48h] [bp-28h]@1
  char v55; // [sp+4Ch] [bp-24h]@1
  unsigned __int8 v56; // [sp+4Dh] [bp-23h]@2
  int v57; // [sp+50h] [bp-20h]@1
  int v58; // [sp+54h] [bp-1Ch]@1
  int v59; // [sp+58h] [bp-18h]@1
  char v60; // [sp+5Ch] [bp-14h]@1
  unsigned __int8 v61; // [sp+5Dh] [bp-13h]@6

  v6 = a4;
  v7 = a3;
  v8 = (const BlockPos *)Entity::getRegion(a2);
  v9 = *((_DWORD *)v7 + 1);
  v10 = *((_DWORD *)v7 + 2);
  v57 = *(_DWORD *)v7;
  v58 = v9 - 1;
  v59 = v10;
  BlockSource::getBlockAndData((BlockSource *)&v60, v8, (int)&v57);
  v11 = *((_DWORD *)v7 + 1);
  v12 = *((_DWORD *)v7 + 2);
  v52 = *(_DWORD *)v7;
  v53 = v11 + 1;
  v54 = v12;
  BlockSource::getBlockAndData((BlockSource *)&v55, v8, (int)&v52);
  v13 = *((_DWORD *)v7 + 2);
  v48 = *(_QWORD *)v7;
  v49 = v13 - 1;
  BlockSource::getBlockAndData((BlockSource *)&v50, v8, (int)&v48);
  v14 = *((_DWORD *)v7 + 2);
  v44 = *(_QWORD *)v7;
  v45 = v14 + 1;
  BlockSource::getBlockAndData((BlockSource *)&v46, v8, (int)&v44);
  v15 = *((_DWORD *)v7 + 1);
  v16 = *((_DWORD *)v7 + 2);
  v39 = *(_DWORD *)v7 - 1;
  v40 = v15;
  v41 = v16;
  BlockSource::getBlockAndData((BlockSource *)&v42, v8, (int)&v39);
  v17 = *((_DWORD *)v7 + 1);
  v18 = *((_DWORD *)v7 + 2);
  v34 = *(_DWORD *)v7 + 1;
  v35 = v17;
  v36 = v18;
  BlockSource::getBlockAndData((BlockSource *)&v37, v8, (int)&v34);
  switch ( v6 )
  {
    case 0:
      v19 = FullBlock::getBlock((FullBlock *)&v55);
      v20 = v56;
      v21 = v19;
      result = 0;
      if ( v56 <= 1u && *(_BYTE *)(v21 + 4) == *(_BYTE *)(Block::mEndRod + 4) )
      {
        v23 = byte_262E778;
        goto LABEL_21;
      }
      break;
    case 1:
      v24 = FullBlock::getBlock((FullBlock *)&v60);
      v20 = v61;
      v25 = v24;
      result = 1;
      if ( v61 <= 1u && *(_BYTE *)(v25 + 4) == *(_BYTE *)(Block::mEndRod + 4) )
    case 2:
      v26 = FullBlock::getBlock((FullBlock *)&v46);
      v20 = v47;
      v27 = v26;
      result = 3;
      if ( (v47 & 0xFE) == 2 && *(_BYTE *)(v27 + 4) == *(_BYTE *)(Block::mEndRod + 4) )
    case 3:
      v28 = FullBlock::getBlock((FullBlock *)&v50);
      v20 = v51;
      v29 = v28;
      result = 2;
      if ( (v51 & 0xFE) == 2 && *(_BYTE *)(v29 + 4) == *(_BYTE *)(Block::mEndRod + 4) )
    case 4:
      v30 = FullBlock::getBlock((FullBlock *)&v37);
      v20 = v38;
      v31 = v30;
      result = 5;
      if ( (v38 & 0xFE) == 4 && *(_BYTE *)(v31 + 4) == *(_BYTE *)(Block::mEndRod + 4) )
    case 5:
      v32 = FullBlock::getBlock((FullBlock *)&v42);
      v20 = v43;
      v33 = v32;
      result = 4;
      if ( (v43 & 0xFE) == 4 && *(_BYTE *)(v33 + 4) == *(_BYTE *)(Block::mEndRod + 4) )
LABEL_21:
        result = v23[v20];
    default:
  }
  return result;
}


AABB *__fastcall EndRodBlock::getVisualShape(EndRodBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, bool a5)
{
  AABB *v5; // r4@1
  unsigned int v6; // r0@1
  signed int v7; // r0@2
  signed int v8; // r0@4
  int v10; // [sp+0h] [bp-20h]@1
  int v11; // [sp+4h] [bp-1Ch]@1
  int v12; // [sp+8h] [bp-18h]@1
  int v13; // [sp+Ch] [bp-14h]@1
  signed int v14; // [sp+10h] [bp-10h]@1
  int v15; // [sp+14h] [bp-Ch]@1

  v5 = a4;
  v6 = BlockSource::getData(a2, a3) & 7;
  v14 = 0;
  v15 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  if ( v6 <= 5 )
  {
    v7 = 1 << v6;
    if ( v7 & 3 )
    {
      v13 = 1052770304;
      v14 = 0;
      v15 = 1052770304;
      v8 = 1059061760;
      v10 = 1059061760;
      v11 = 1065353216;
    }
    else if ( v7 & 0xC )
      v14 = 1052770304;
      v15 = 0;
      v11 = 1059061760;
      v8 = 1065353216;
    else
      v13 = 0;
      v10 = 1065353216;
    v12 = v8;
  }
  AABB::set(v5, (const Vec3 *)&v13, (const Vec3 *)&v10);
  return v5;
}


int __fastcall EndRodBlock::EndRodBlock(int a1, const void **a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  int *v12; // r2@1
  float v14; // [sp+0h] [bp-30h]@1
  int v15; // [sp+4h] [bp-2Ch]@1
  int v16; // [sp+8h] [bp-28h]@1
  signed int v17; // [sp+Ch] [bp-24h]@1
  signed int v18; // [sp+10h] [bp-20h]@1
  int v19; // [sp+14h] [bp-1Ch]@1
  int v20; // [sp+18h] [bp-18h]@1
  signed int v21; // [sp+1Ch] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(15);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &loc_2708D24;
  v19 = 1050253722;
  v20 = 0;
  v21 = 1050253722;
  v16 = 1060320051;
  v17 = 1058642330;
  v18 = 1060320051;
  Block::setVisualShape((Block *)v3, (const Vec3 *)&v19, (const Vec3 *)&v16);
  Block::setSolid((Block *)v3, 0);
  *(_DWORD *)(v3 + 24) = 0x4000000;
  *(_DWORD *)(v3 + 28) = 0;
  v15 = 1061997773;
  _R0 = Material::getTranslucency(*(Material **)(v3 + 56));
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.8
    VCMPE.F32       S0, S2
  }
  v12 = (int *)&v14;
    VMRS            APSR_nzcv, FPSCR
    VSTR            S0, [SP,#0x30+var_30]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v12 = &v15;
  Block::mTranslucency[v4] = *v12;
  return v3;
}


signed int __fastcall EndRodBlock::mayPlace(EndRodBlock *this, BlockSource *a2, const BlockPos *a3)
{
  return 1;
}


unsigned int __fastcall EndRodBlock::animateTick(EndRodBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Random *v4; // r5@1
  const BlockPos *v5; // r6@1
  BlockSource *v6; // r4@1
  unsigned int result; // r0@1
  int v8; // r8@2
  float v19; // [sp+1Ch] [bp-3Ch]@2

  v4 = a4;
  v5 = a3;
  v6 = a2;
  result = Random::_genRandInt32(a4);
  if ( !(result & 1) )
  {
    v8 = BlockSource::getLevel(v6);
    _R7 = *(_DWORD *)v5;
    _R0 = Random::_genRandInt32(v4);
    __asm { VMOV            S0, R0 }
    _R4 = *((_DWORD *)v5 + 1);
    __asm { VCVT.F64.U32    D8, S0 }
    __asm
    {
      VMOV            S0, R0
      VLDR            D10, =2.32830644e-10
      VCVT.F64.U32    D9, S0
    }
    _R6 = *((_DWORD *)v5 + 2);
      VLDR            S12, =0.33
      VMUL.F64        D1, D8, D10
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D10
      VMUL.F64        D2, D9, D10
      VMOV            S6, R7
      VLDR            S14, =0.24
      VMOV            S8, R4
      VCVT.F32.S32    S6, S6
      VMOV            S10, R6
      VCVT.F32.F64    S2, D1
      VCVT.F32.F64    S0, D0
      VCVT.F32.S32    S8, S8
      VLDR            S1, =0.55
      VCVT.F32.S32    S10, S10
      VLDR            S3, =0.38
      VCVT.F32.F64    S4, D2
      VADD.F32        S6, S6, S12
      VLDR            S12, =0.3
      VMUL.F32        S2, S2, S14
      VADD.F32        S8, S8, S1
      VMUL.F32        S4, S4, S12
      VADD.F32        S10, S10, S3
      VMUL.F32        S0, S0, S14
      VADD.F32        S2, S6, S2
      VADD.F32        S4, S8, S4
      VADD.F32        S0, S10, S0
      VSTR            S2, [SP,#0x58+var_3C]
      VSTR            S4, [SP,#0x58+var_38]
      VSTR            S0, [SP,#0x58+var_34]
    result = Level::addParticle(v8, 40, (int)&v19);
  }
  return result;
}


int __fastcall EndRodBlock::addAABBs(int a1, BlockSource *this, BlockPos *a3, int a4, int a5)
{
  int v6; // r5@1
  AABB *v7; // r4@1
  char v8; // r6@1
  signed int v9; // r0@2
  signed int v10; // r0@4
  AABB *v18; // r0@8
  int v20; // [sp+4h] [bp-4Ch]@1
  int v21; // [sp+8h] [bp-48h]@1
  int v22; // [sp+Ch] [bp-44h]@1
  int v23; // [sp+10h] [bp-40h]@1
  signed int v24; // [sp+14h] [bp-3Ch]@1
  int v25; // [sp+18h] [bp-38h]@1
  char v26; // [sp+1Ch] [bp-34h]@1

  _R7 = a3;
  v6 = a1;
  v7 = (AABB *)a4;
  v8 = BlockSource::getData(this, a3);
  AABB::AABB((AABB *)&v26);
  v24 = 0;
  v25 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( (v8 & 7u) <= 5 )
  {
    v9 = 1 << (v8 & 7);
    if ( v9 & 3 )
    {
      v23 = 1052770304;
      v24 = 0;
      v25 = 1052770304;
      v10 = 1059061760;
      v20 = 1059061760;
      v21 = 1065353216;
    }
    else if ( v9 & 0xC )
      v24 = 1052770304;
      v25 = 0;
      v21 = 1059061760;
      v10 = 1065353216;
    else
      v23 = 0;
      v20 = 1065353216;
    v22 = v10;
  }
  AABB::set((AABB *)&v26, (const Vec3 *)&v23, (const Vec3 *)&v20);
  __asm
    VLDR            S0, [R7]
    VLDR            S2, [R7,#4]
    VLDR            S4, [R7,#8]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VMOV            R1, S0
    VMOV            R2, S2
    VMOV            R3, S4
  v18 = (AABB *)AABB::move((AABB *)&v26, _R1, _R2, _R3);
  return Block::addAABB(v6, v18, v7, a5);
}
