

signed int __fastcall PortalBlock::entityInside(PortalBlock *this, BlockSource *a2, const BlockPos *a3, Entity *a4)
{
  Entity *v4; // r5@1
  const BlockPos *v5; // r4@1
  signed int result; // r0@1

  v4 = a4;
  v5 = a3;
  result = *((_DWORD *)a4 + 128);
  if ( !result )
  {
    result = Entity::isRide(a4);
    if ( !result )
    {
      result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v4 + 528))(v4);
      if ( result == 1 )
        result = (*(int (__fastcall **)(Entity *, const BlockPos *))(*(_DWORD *)v4 + 512))(v4, v5);
    }
  }
  return result;
}


int __fastcall PortalBlock::PortalBlock(int a1, const void **a2, char a3)
{
  int v3; // r4@1
  char v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  int v7; // r2@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(25);
  Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_2710E68;
  Block::setTicking((Block *)v3, 1);
  Block::setSolid((Block *)v3, 0);
  v7 = v3 + 20;
  *(_DWORD *)v7 = 1;
  *(_DWORD *)(v7 + 4) = 16779264;
  *(_DWORD *)(v7 + 8) = 0;
  *(_BYTE *)(v3 + 36) = 1;
  return v3;
}


void __fastcall PortalBlock::~PortalBlock(PortalBlock *this)
{
  PortalBlock::~PortalBlock(this);
}


int __fastcall PortalBlock::animateTick(PortalBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  BlockSource *v4; // r11@1
  Random *v5; // r4@1
  const BlockPos *v6; // r5@1
  int v11; // r6@3
  int v12; // ST28_4@4
  unsigned int v13; // ST1C_4@4
  int v14; // ST24_4@4
  unsigned int v15; // ST18_4@4
  int v16; // ST20_4@4
  unsigned int v21; // r8@4
  int v22; // r1@4
  int v23; // r2@4
  int v30; // r1@5
  int v31; // r2@5
  int result; // r0@8
  PortalBlock *v37; // [sp+Ch] [bp-CCh]@1
  int v38; // [sp+10h] [bp-C8h]@1
  int v39; // [sp+14h] [bp-C4h]@4
  float v40; // [sp+38h] [bp-A0h]@8
  unsigned __int8 v41; // [sp+44h] [bp-94h]@5
  int v42; // [sp+48h] [bp-90h]@5
  int v43; // [sp+4Ch] [bp-8Ch]@5
  int v44; // [sp+50h] [bp-88h]@5
  unsigned __int8 v45; // [sp+54h] [bp-84h]@4
  int v46; // [sp+58h] [bp-80h]@4
  int v47; // [sp+5Ch] [bp-7Ch]@4
  int v48; // [sp+60h] [bp-78h]@4
  char v49; // [sp+64h] [bp-74h]@2

  v4 = a2;
  v37 = this;
  v5 = a4;
  v6 = a3;
  v38 = BlockSource::getLevel(a2);
  if ( !(Random::_genRandInt32(v5) % 0xA) )
  {
    Vec3::Vec3((int)&v49, (int)v6);
    Level::playSound(v38, 81, (int)&v49);
  }
  __asm
    VMOV.F32        S21, #-0.5
    VLDR            D8, =2.32830644e-10
    VMOV.F32        S20, #0.5
  v11 = 40;
  do
    v12 = *(_DWORD *)v6;
    v39 = v11;
    v13 = Random::_genRandInt32(v5);
    v14 = *((_DWORD *)v6 + 1);
    v15 = Random::_genRandInt32(v5);
    v16 = *((_DWORD *)v6 + 2);
    _R9 = Random::_genRandInt32(v5);
    _R7 = Random::_genRandInt32(v5);
    _R6 = Random::_genRandInt32(v5);
    _R10 = Random::_genRandInt32(v5);
    v21 = Random::_genRandInt32(v5);
    v22 = *((_DWORD *)v6 + 1);
    v23 = *((_DWORD *)v6 + 2);
    v46 = *(_DWORD *)v6 - 1;
    v47 = v22;
    v48 = v23;
    BlockSource::getBlockID((BlockSource *)&v45, v4, (int)&v46);
    __asm
    {
      VMOV            S0, R7
      VMOV            S2, R10
      VCVT.F64.U32    D14, S0
      VMOV            S0, R6
      VMOV            S4, R9
      VCVT.F64.U32    D0, S0
      VCVT.F64.U32    D15, S2
    }
    _R0 = v13;
      VMOV            S2, R0
      VMUL.F64        D0, D0, D8
      VCVT.F64.U32    D11, S2
    _R0 = v15;
      VCVT.F32.F64    S0, D0
      VCVT.F64.U32    D1, S2
      VMUL.F64        D1, D1, D8
      VCVT.F64.U32    D9, S4
    _R0 = v12;
      VMOV            S4, R0
      VADD.F32        S0, S0, S21
      VCVT.F32.S32    S27, S4
    _R0 = v14;
      VCVT.F32.F64    S2, D1
      VMUL.F32        S24, S0, S20
      VCVT.F32.S32    S4, S4
    _R0 = v16;
      VMOV            S6, R0
      VCVT.F32.S32    S25, S6
    _R6 = (2 * v21 & 2) - 1;
    __asm { VADD.F32        S26, S2, S4 }
    if ( v45 != *((_BYTE *)v37 + 4)
      && (v30 = *((_DWORD *)v6 + 1),
          v31 = *((_DWORD *)v6 + 2),
          v42 = *(_DWORD *)v6 + 1,
          v43 = v30,
          v44 = v31,
          BlockSource::getBlockID((BlockSource *)&v41, v4, (int)&v42),
          v41 != *((_BYTE *)v37 + 4)) )
      __asm { VMUL.F64        D0, D15, D8 }
      _R7 = *(_DWORD *)v6;
      __asm
      {
        VMUL.F64        D1, D9, D8
        VCVT.F32.F64    S0, D0
        VCVT.F32.F64    S2, D1
        VADD.F32        S0, S0, S21
        VADD.F32        S22, S2, S25
        VMUL.F32        S18, S0, S20
      }
      _R0 = Random::_genRandInt32(v5);
        VMOV            S0, R0
        VMOV            S2, R6
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D8
        VCVT.F32.S32    S2, S2
        VMOV.F32        S4, #0.25
        VMUL.F32        S4, S2, S4
        VMOV            S6, R7
        VADD.F32        S0, S0, S0
        VCVT.F32.S32    S6, S6
        VADD.F32        S4, S4, S20
        VMUL.F32        S28, S2, S0
        VADD.F32        S30, S4, S6
    else
      __asm { VMUL.F64        D0, D14, D8 }
      _R7 = *((_DWORD *)v6 + 2);
        VMUL.F64        D1, D11, D8
        VADD.F32        S30, S2, S27
        VMUL.F32        S28, S0, S20
        VMUL.F32        S18, S2, S0
        VADD.F32        S22, S4, S6
      VSTR            S30, [SP,#0xD8+var_A0]
      VSTR            S26, [SP,#0xD8+var_9C]
      VSTR            S28, [SP,#0xD8+var_AC]
      VSTR            S24, [SP,#0xD8+var_A8]
      VSTR            S22, [SP,#0xD8+var_98]
      VSTR            S18, [SP,#0xD8+var_A4]
    result = Level::addParticle(v38, 20, (int)&v40);
    v11 = v39 - 1;
  while ( v39 != 1 );
  return result;
}


int __fastcall PortalBlock::getResourceCount(PortalBlock *this, Random *a2, int a3, int a4)
{
  return 0;
}


AABB *__fastcall PortalBlock::getVisualShape(PortalBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, bool a5)
{
  const BlockPos *v5; // r7@1
  BlockSource *v6; // r6@1
  PortalBlock *v7; // r8@1
  AABB *v8; // r4@1
  unsigned int v9; // r5@1
  unsigned __int64 *v10; // r0@1
  unsigned int v11; // r0@1
  int v12; // r1@2
  int v13; // r2@2
  int v14; // r1@4
  int v15; // r2@4
  float v23; // [sp+0h] [bp-48h]@0
  float v24; // [sp+8h] [bp-40h]@0
  unsigned __int8 v25; // [sp+10h] [bp-38h]@4
  int v26; // [sp+14h] [bp-34h]@4
  int v27; // [sp+18h] [bp-30h]@4
  int v28; // [sp+1Ch] [bp-2Ch]@4
  unsigned __int8 v29; // [sp+20h] [bp-28h]@2
  int v30; // [sp+24h] [bp-24h]@2
  int v31; // [sp+28h] [bp-20h]@2
  int v32; // [sp+2Ch] [bp-1Ch]@2

  v5 = a3;
  v6 = a2;
  v7 = this;
  v8 = a4;
  v9 = BlockSource::getData(a2, a3);
  v10 = (unsigned __int64 *)Block::getBlockState(Block::mPortal, 3);
  v11 = (0xFu >> (4 - (*v10 >> 32))) & (v9 >> (*v10 + 1 - (*v10 >> 32)));
  if ( !v11 )
  {
    v12 = *((_DWORD *)v5 + 1);
    v13 = *((_DWORD *)v5 + 2);
    v30 = *(_DWORD *)v5 - 1;
    v31 = v12;
    v32 = v13;
    BlockSource::getBlockID((BlockSource *)&v29, v6, (int)&v30);
    if ( v29 == *((_BYTE *)v7 + 4) )
    {
      v11 = 1;
    }
    else
      v14 = *((_DWORD *)v5 + 1);
      v15 = *((_DWORD *)v5 + 2);
      v26 = *(_DWORD *)v5 + 1;
      v27 = v14;
      v28 = v15;
      BlockSource::getBlockID((BlockSource *)&v25, v6, (int)&v26);
      v11 = 2;
      if ( v25 == *((_BYTE *)v7 + 4) )
        v11 = 1;
  }
  __asm
    VMOV.F32        S0, #0.125
    VMOV.F32        S2, #0.5
  LODWORD(_R2) = 0;
  __asm { VMOV.F32        S4, S0 }
  if ( _ZF )
    __asm { VMOVEQ.F32      S4, S2 }
  if ( v11 == 2 )
    __asm { VMOVEQ.F32      S0, S2 }
    VSUB.F32        S6, S2, S4
    VSUB.F32        S8, S2, S0
    VADD.F32        S0, S0, S2
    VADD.F32        S2, S4, S2
  LODWORD(_R0) = v8;
    VMOV            R1, S6
    VMOV            R3, S8
    VSTR            S0, [SP,#0x48+var_40]
    VSTR            S2, [SP,#0x48+var_48]
  AABB::set(_R0, _R2, v23, 1.0, v24);
  return v8;
}


int __fastcall PortalBlock::mayPick(PortalBlock *this, BlockSource *a2, int a3, bool a4)
{
  Level *v4; // r0@1
  int v5; // r0@1
  int result; // r0@2

  v4 = (Level *)BlockSource::getLevel(a2);
  v5 = Level::getPrimaryLocalPlayer(v4);
  if ( v5 )
  {
    result = *(_DWORD *)(v5 + 5232);
    if ( result != 1 )
      result = 0;
  }
  else
    result = 0;
  return result;
}


int __fastcall PortalBlock::onRemove(PortalBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  Block *v4; // r6@1
  const BlockPos *v5; // r4@1
  Level *v6; // r0@1
  PortalForcer *v7; // r0@1

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (Level *)BlockSource::getLevel(a2);
  v7 = (PortalForcer *)Level::getPortalForcer(v6);
  PortalForcer::removePortalRecord(v7, v3, v5);
  return j_j_j__ZNK5Block8onRemoveER11BlockSourceRK8BlockPos(v4, v3, v5);
}


signed int __fastcall PortalBlock::isWaterBlocking(PortalBlock *this)
{
  return 1;
}


int __fastcall PortalBlock::neighborChanged(PortalBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  BlockSource *v4; // r4@1
  const BlockPos *v5; // r5@1
  unsigned int v6; // r6@1
  unsigned __int64 *v7; // r0@1
  int result; // r0@1
  int v9; // r1@7
  int v10; // r2@7
  int v11; // r3@7
  char v12; // [sp+Ch] [bp-5Ch]@12
  int v13; // [sp+10h] [bp-58h]@8
  int v14; // [sp+14h] [bp-54h]@8
  int v15; // [sp+18h] [bp-50h]@8
  char v16; // [sp+1Ch] [bp-4Ch]@7
  int v17; // [sp+20h] [bp-48h]@3
  int v18; // [sp+24h] [bp-44h]@3
  int v19; // [sp+28h] [bp-40h]@3
  char v20; // [sp+2Ch] [bp-3Ch]@3
  int v21; // [sp+3Ch] [bp-2Ch]@6
  char v22; // [sp+4Ch] [bp-1Ch]@3
  int v23; // [sp+50h] [bp-18h]@5
  int v24; // [sp+54h] [bp-14h]@4

  v4 = a2;
  v5 = a3;
  v6 = BlockSource::getData(a2, a3);
  v7 = (unsigned __int64 *)Block::getBlockState(Block::mPortal, 3);
  result = (0xFu >> (4 - (*v7 >> 32))) & (v6 >> (*v7 + 1 - (*v7 >> 32)));
  if ( result == 2 )
  {
    v13 = *(_DWORD *)v5;
    v14 = *((_DWORD *)v5 + 1);
    v15 = *((_DWORD *)v5 + 2);
    PortalShape::PortalShape((PortalShape *)&v20, v4, (int)&v13, 2);
    if ( !v22
      || (unsigned int)(v24 - 2) > 0x13
      || (unsigned int)(v23 - 3) > 0x12
      || (result = v24 * v23, v21 < v24 * v23) )
    {
      v12 = BlockID::AIR;
      result = BlockSource::setBlock((int)v4, v5, &v12, 3);
    }
  }
  else if ( result == 1 )
    v17 = *(_DWORD *)v5;
    v18 = *((_DWORD *)v5 + 1);
    v19 = *((_DWORD *)v5 + 2);
    PortalShape::PortalShape((PortalShape *)&v20, v4, (int)&v17, 1);
      v9 = *(_DWORD *)v5;
      v10 = *((_DWORD *)v5 + 1);
      v11 = *((_DWORD *)v5 + 2);
      v16 = BlockID::AIR;
      result = BlockSource::setBlock((int)v4, v9, v10, v11, &v16, 3);
  return result;
}


void __fastcall PortalBlock::~PortalBlock(PortalBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall PortalBlock::tick(PortalBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  PortalBlock::tick(this, a2, a3, a4);
}


_DWORD *__fastcall PortalBlock::getAABB(PortalBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, int a6, int a7)
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


signed int __fastcall PortalBlock::trySpawnPortal(PortalBlock *this, BlockSource *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  BlockSource *v4; // r5@1
  ItemUseCallback *v5; // r4@1
  const BlockPos *v6; // r11@1
  Level *v7; // r0@1
  char *v8; // r0@1
  PortalShape *v9; // r0@2
  PortalShape *v10; // r0@6
  signed int v11; // r4@10
  int v12; // r10@15
  int v13; // r7@15
  int v14; // r9@17
  Level *v15; // r0@20
  PortalForcer *v16; // r0@20
  int v17; // r10@21
  int v18; // r9@21
  int v19; // r7@23
  Level *v20; // r0@26
  PortalForcer *v21; // r0@26
  int v23; // [sp+10h] [bp-E0h]@6
  int v24; // [sp+14h] [bp-DCh]@6
  int v25; // [sp+18h] [bp-D8h]@6
  char v26; // [sp+1Ch] [bp-D4h]@6
  int v27; // [sp+20h] [bp-D0h]@24
  int v28; // [sp+24h] [bp-CCh]@22
  int v29; // [sp+2Ch] [bp-C4h]@9
  char v30; // [sp+3Ch] [bp-B4h]@6
  int v31; // [sp+40h] [bp-B0h]@8
  int v32; // [sp+44h] [bp-ACh]@7
  int v33; // [sp+48h] [bp-A8h]@2
  int v34; // [sp+4Ch] [bp-A4h]@2
  int v35; // [sp+50h] [bp-A0h]@2
  char v36; // [sp+54h] [bp-9Ch]@2
  int v37; // [sp+58h] [bp-98h]@18
  int v38; // [sp+5Ch] [bp-94h]@16
  int v39; // [sp+64h] [bp-8Ch]@5
  char v40; // [sp+74h] [bp-7Ch]@2
  int v41; // [sp+78h] [bp-78h]@4
  int v42; // [sp+7Ch] [bp-74h]@3
  char v43; // [sp+80h] [bp-70h]@2
  int v44; // [sp+94h] [bp-5Ch]@24
  int v45; // [sp+98h] [bp-58h]@24
  int v46; // [sp+9Ch] [bp-54h]@24
  char v47; // [sp+A0h] [bp-50h]@24
  char v48; // [sp+A1h] [bp-4Fh]@24
  char v49; // [sp+A4h] [bp-4Ch]@22
  int v50; // [sp+A8h] [bp-48h]@24
  int v51; // [sp+ACh] [bp-44h]@24
  int v52; // [sp+B0h] [bp-40h]@18
  int v53; // [sp+B4h] [bp-3Ch]@18
  int v54; // [sp+B8h] [bp-38h]@18
  char v55; // [sp+BCh] [bp-34h]@18
  char v56; // [sp+BDh] [bp-33h]@18
  char v57; // [sp+C0h] [bp-30h]@16
  int v58; // [sp+C4h] [bp-2Ch]@18
  int v59; // [sp+C8h] [bp-28h]@18

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = (Level *)BlockSource::getLevel(a2);
  v8 = Level::getLevelData(v7);
  if ( LevelData::getGenerator((LevelData *)v8) )
  {
    WorldChangeTransaction::WorldChangeTransaction((int)&v43, (int)v4, 1, 0, (int)v5);
    v33 = *(_DWORD *)v6;
    v34 = *((_DWORD *)v6 + 1);
    v35 = *((_DWORD *)v6 + 2);
    v9 = PortalShape::PortalShape((PortalShape *)&v36, v4, (int)&v33, 1);
    if ( v40 && (unsigned int)(v42 - 2) <= 0x13 && (unsigned int)(v41 - 3) <= 0x12 && !v39 )
    {
      v12 = (int)v9 + 20;
      v13 = 0;
      do
      {
        BlockPos::relative((BlockPos *)&v57, v12, (char)v38, v13);
        if ( v41 > 0 )
        {
          v14 = 0;
          do
          {
            v55 = *(_BYTE *)(Block::mPortal + 4);
            v56 = v37;
            v52 = *(_DWORD *)&v57;
            v53 = v14 + v58;
            v54 = v59;
            WorldChangeTransaction::setBlock(
              (WorldChangeTransaction *)&v43,
              (const BlockPos *)&v52,
              (const FullBlock *)&v55,
              2);
            ++v14;
          }
          while ( v14 < v41 );
        }
        ++v13;
      }
      while ( v13 < v42 );
      v15 = (Level *)BlockSource::getLevel(v4);
      v16 = (PortalForcer *)Level::getPortalForcer(v15);
      PortalForcer::addPortalRecord(v16, v4, *(_QWORD *)v6, *(_QWORD *)v6 >> 32, *((_DWORD *)v6 + 2), 1, 0);
      PortalShape::updateNeighboringBlocks((int)&v36, v4, *(__int64 *)&Vec3::UNIT_Z, unk_28224E0);
      v11 = WorldChangeTransaction::apply((WorldChangeTransaction *)&v43);
    }
    else
      v23 = *(_DWORD *)v6;
      v24 = *((_DWORD *)v6 + 1);
      v25 = *((_DWORD *)v6 + 2);
      v10 = PortalShape::PortalShape((PortalShape *)&v26, v4, (int)&v23, 2);
      if ( v30 )
        if ( (unsigned int)(v32 - 2) > 0x13 )
          v11 = 0;
        else if ( (unsigned int)(v31 - 3) > 0x12 )
        else if ( v29 )
        else
          v17 = (int)v10 + 20;
          v18 = 0;
            BlockPos::relative((BlockPos *)&v49, v17, (char)v28, v18);
            if ( v31 > 0 )
            {
              v19 = 0;
              do
              {
                v47 = *(_BYTE *)(Block::mPortal + 4);
                v48 = v27;
                v44 = *(_DWORD *)&v49;
                v45 = v19 + v50;
                v46 = v51;
                WorldChangeTransaction::setBlock(
                  (WorldChangeTransaction *)&v43,
                  (const BlockPos *)&v44,
                  (const FullBlock *)&v47,
                  2);
                ++v19;
              }
              while ( v19 < v31 );
            }
            ++v18;
          while ( v18 < v32 );
          v20 = (Level *)BlockSource::getLevel(v4);
          v21 = (PortalForcer *)Level::getPortalForcer(v20);
          PortalForcer::addPortalRecord(v21, v4, *(_QWORD *)v6, *(_QWORD *)v6 >> 32, *((_DWORD *)v6 + 2), 0, 1);
          PortalShape::updateNeighboringBlocks((int)&v26, v4, *(__int64 *)Vec3::UNIT_X, SLODWORD(Vec3::UNIT_X[2]));
          v11 = WorldChangeTransaction::apply((WorldChangeTransaction *)&v43);
      else
        v11 = 0;
    WorldChangeTransaction::~WorldChangeTransaction((WorldChangeTransaction *)&v43);
  }
  else
    v11 = 0;
  return v11;
}


unsigned int __fastcall PortalBlock::getAxis(PortalBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = (unsigned __int8)this;
  v3 = (unsigned __int64 *)Block::getBlockState(Block::mPortal, 3);
  return (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)));
}


void __fastcall PortalBlock::tick(PortalBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Random *v4; // r6@1
  BlockSource *v6; // r4@1
  Dimension *v7; // r7@1
  Level *v8; // r0@2
  unsigned __int64 *v9; // r0@2
  unsigned int v10; // r6@3
  Level *v11; // r0@3
  int v12; // r0@3
  signed int v13; // r6@8
  signed int v14; // r7@9
  int v15; // r1@9
  int v16; // r0@9
  Level *v22; // r0@13
  Spawner *v23; // r5@13
  void *v24; // r0@13
  void *v25; // r0@14
  void *v26; // r0@15
  void *v27; // r0@16
  unsigned int *v28; // r2@18
  signed int v29; // r1@20
  unsigned int *v30; // r2@22
  signed int v31; // r1@24
  unsigned int *v32; // r2@26
  signed int v33; // r1@28
  unsigned int *v34; // r2@30
  signed int v35; // r1@32
  int v36; // [sp+14h] [bp-44h]@13
  int v37; // [sp+18h] [bp-40h]@13
  int v38; // [sp+1Ch] [bp-3Ch]@14
  int v39; // [sp+20h] [bp-38h]@13
  float v40; // [sp+24h] [bp-34h]@13
  int v41; // [sp+30h] [bp-28h]@9
  signed int v42; // [sp+34h] [bp-24h]@9
  int v43; // [sp+38h] [bp-20h]@9

  v4 = a4;
  _R5 = a3;
  v6 = a2;
  Block::tick(this, a2, a3, a4);
  v7 = (Dimension *)BlockSource::getDimensionConst(v6);
  if ( (*(int (**)(void))(*(_DWORD *)v7 + 132))() == 1 )
  {
    v8 = (Level *)BlockSource::getLevel(v6);
    v9 = (unsigned __int64 *)Level::getGameRules(v8);
    if ( GameRules::getBool(v9, (int **)&GameRules::DO_MOB_SPAWNING) == 1 )
    {
      v10 = Random::_genRandInt32(v4) % 0x7D0;
      v11 = (Level *)Dimension::getLevelConst(v7);
      v12 = Level::getDifficulty(v11);
      if ( v12 == 3 )
      {
        if ( v10 > 2 )
          return;
      }
      else if ( v12 != 2 || v10 >= 2 )
        return;
      v13 = *((_DWORD *)_R5 + 1);
      do
        v14 = v13;
        v15 = *((_DWORD *)_R5 + 2);
        v41 = *(_DWORD *)_R5;
        v42 = v13;
        v43 = v15;
        v16 = BlockSource::canProvideSupport(v6, (int)&v41);
        --v13;
      while ( v14 >= 1 && v16 ^ 1 );
      if ( v14 >= 1 && !BlockSource::isSolidBlockingBlock(v6, *(_DWORD *)_R5, v14 + 1, *((_DWORD *)_R5 + 2)) )
        _R0 = v14;
        __asm
        {
          VLDR            S0, [R5]
          VLDR            S2, [R5,#8]
          VMOV.F32        S4, #0.5
          VMOV            S6, R0
          VLDR            S8, =1.1
          VCVT.F32.S32    S0, S0
          VCVT.F32.S32    S6, S6
          VCVT.F32.S32    S2, S2
          VADD.F32        S0, S0, S4
          VADD.F32        S6, S6, S8
          VADD.F32        S2, S2, S4
          VSTR            S0, [SP,#0x58+var_34]
          VSTR            S6, [SP,#0x58+var_30]
          VSTR            S2, [SP,#0x58+var_2C]
        }
        v22 = (Level *)BlockSource::getLevel(v6);
        v23 = (Spawner *)Level::getSpawner(v22);
        EntityTypeToString((void **)&v36, 0x10B24u, 1);
        EntityDefinitionIdentifier::EntityDefinitionIdentifier((int)&v37, &v36);
        Spawner::spawnMob(v23, v6, (const EntityDefinitionIdentifier *)&v37, 0, (const Vec3 *)&v40, 0, 1, 0);
        v24 = (void *)(v39 - 12);
        if ( (int *)(v39 - 12) != &dword_28898C0 )
          v28 = (unsigned int *)(v39 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v29 = __ldrex(v28);
            while ( __strex(v29 - 1, v28) );
          }
          else
            v29 = (*v28)--;
          if ( v29 <= 0 )
            j_j_j_j__ZdlPv_9(v24);
        v25 = (void *)(v38 - 12);
        if ( (int *)(v38 - 12) != &dword_28898C0 )
          v30 = (unsigned int *)(v38 - 4);
              v31 = __ldrex(v30);
            while ( __strex(v31 - 1, v30) );
            v31 = (*v30)--;
          if ( v31 <= 0 )
            j_j_j_j__ZdlPv_9(v25);
        v26 = (void *)(v37 - 12);
        if ( (int *)(v37 - 12) != &dword_28898C0 )
          v32 = (unsigned int *)(v37 - 4);
              v33 = __ldrex(v32);
            while ( __strex(v33 - 1, v32) );
            v33 = (*v32)--;
          if ( v33 <= 0 )
            j_j_j_j__ZdlPv_9(v26);
        v27 = (void *)(v36 - 12);
        if ( (int *)(v36 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v36 - 4);
              v35 = __ldrex(v34);
            while ( __strex(v35 - 1, v34) );
            v35 = (*v34)--;
          if ( v35 <= 0 )
            j_j_j_j__ZdlPv_9(v27);
    }
  }
}
