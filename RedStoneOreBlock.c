

int __fastcall RedStoneOreBlock::RedStoneOreBlock(int a1, const void **a2, char a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1
  char v6; // r6@1
  const void **v7; // r7@1
  int v8; // r0@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = Material::getMaterial(3);
  Block::Block(v4, v7, v6, v8);
  *(_DWORD *)v4 = &off_2712290;
  if ( v5 == 1 )
    Block::setTicking((Block *)v4, 1);
  *(_BYTE *)(v4 + 641) = v5;
  return v4;
}


int __fastcall RedStoneOreBlock::use(RedStoneOreBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  Player *v4; // r6@1
  RedStoneOreBlock *v5; // r7@1
  ItemUseCallback *v6; // r8@1
  const BlockPos *v7; // r5@1
  RedStoneOreBlock *v8; // r4@1
  char v10; // [sp+4h] [bp-1Ch]@2

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (RedStoneOreBlock *)Entity::getRegion(a2);
  RedStoneOreBlock::_poofParticles(v8, v8, v7);
  if ( *((_BYTE *)v5 + 4) == *(_BYTE *)(Block::mRedStoneOre + 4) )
  {
    v10 = *(_BYTE *)(Block::mLitRedStoneOre + 4);
    BlockSource::setBlock((int)v8, v7, &v10, 3);
  }
  return Block::use(v5, v4, v7, v6);
}


int __fastcall RedStoneOreBlock::tick(RedStoneOreBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  int result; // r0@1
  char v5; // [sp+4h] [bp-Ch]@2

  result = *((_BYTE *)this + 4);
  if ( result == *(_BYTE *)(Block::mLitRedStoneOre + 4) )
  {
    v5 = *(_BYTE *)(Block::mRedStoneOre + 4);
    result = BlockSource::setBlock((int)a2, a3, &v5, 3);
  }
  return result;
}


signed int __fastcall RedStoneOreBlock::getTickDelay(RedStoneOreBlock *this)
{
  return 30;
}


int __fastcall RedStoneOreBlock::onStepOn(RedStoneOreBlock *this, Entity *a2, const BlockPos *a3)
{
  Entity *v3; // r5@1
  RedStoneOreBlock *v4; // r6@1
  const BlockPos *v5; // r4@1
  int result; // r0@1
  RedStoneOreBlock *v7; // r7@2
  char v8; // [sp+0h] [bp-18h]@3

  v3 = a2;
  v4 = this;
  v5 = a3;
  result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)a2 + 488))(a2);
  if ( result != 64 )
  {
    v7 = (RedStoneOreBlock *)Entity::getRegion(v3);
    RedStoneOreBlock::_poofParticles(v7, v7, v5);
    if ( *((_BYTE *)v4 + 4) == *(_BYTE *)(Block::mRedStoneOre + 4) )
    {
      v8 = *(_BYTE *)(Block::mLitRedStoneOre + 4);
      BlockSource::setBlock((int)v7, v5, &v8, 3);
    }
    result = Block::onStepOn(v4, v3, v5);
  }
  return result;
}


void __fastcall RedStoneOreBlock::~RedStoneOreBlock(RedStoneOreBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall RedStoneOreBlock::_poofParticles(RedStoneOreBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  Level *v5; // r0@1
  int v6; // r6@1
  char *v7; // r0@1
  Random *v12; // r7@1
  int v13; // r9@1
  int v17; // r1@3
  int v18; // r2@3
  int v20; // r1@5
  int v21; // r2@5
  int v22; // r2@7
  int v24; // r2@9
  int v25; // r1@11
  int v26; // r2@11
  int v28; // r1@13
  int v29; // r2@13
  int result; // r0@23
  int v35; // [sp+18h] [bp-B0h]@13
  int v36; // [sp+1Ch] [bp-ACh]@13
  int v37; // [sp+20h] [bp-A8h]@13
  int v38; // [sp+24h] [bp-A4h]@11
  int v39; // [sp+28h] [bp-A0h]@11
  int v40; // [sp+2Ch] [bp-9Ch]@11
  __int64 v41; // [sp+30h] [bp-98h]@9
  int v42; // [sp+38h] [bp-90h]@9
  __int64 v43; // [sp+3Ch] [bp-8Ch]@7
  int v44; // [sp+44h] [bp-84h]@7
  int v45; // [sp+48h] [bp-80h]@5
  int v46; // [sp+4Ch] [bp-7Ch]@5
  int v47; // [sp+50h] [bp-78h]@5
  int v48; // [sp+54h] [bp-74h]@3
  int v49; // [sp+58h] [bp-70h]@3
  int v50; // [sp+5Ch] [bp-6Ch]@3
  float v51; // [sp+60h] [bp-68h]@2
  float v54; // [sp+6Ch] [bp-5Ch]@16

  v3 = a2;
  _R4 = a3;
  v5 = (Level *)BlockSource::getLevel(a2);
  v6 = (int)v5;
  v7 = Level::getRandom(v5);
  __asm
  {
    VLDR            D8, =2.32830644e-10
    VLDR            S18, =0.0625
    VLDR            S20, =-0.0625
  }
  v12 = (Random *)v7;
  v13 = 0;
  do
    Vec3::Vec3((int)&v51, (int)_R4);
    _R0 = Random::_genRandInt32(v12);
    __asm
    {
      VMOV            S0, R0
      VCVT.F64.U32    D11, S0
    }
      VCVT.F64.U32    D12, S0
      VMUL.F64        D1, D11, D8
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D8
      VMUL.F64        D2, D12, D8
      VCVT.F32.F64    S2, D1
      VCVT.F32.F64    S4, D2
      VCVT.F32.F64    S0, D0
      VLDR            S6, [SP,#0xC8+var_68]
      VLDR            S8, [SP,#0xC8+var_64]
      VLDR            S10, [SP,#0xC8+var_60]
      VADD.F32        S2, S2, S6
      VADD.F32        S4, S4, S8
      VADD.F32        S0, S0, S10
      VSTR            S2, [SP,#0xC8+var_5C]
      VSTR            S4, [SP,#0xC8+var_58]
      VSTR            S0, [SP,#0xC8+var_54]
    switch ( v13 )
      case 0:
        v17 = *((_DWORD *)_R4 + 1);
        v18 = *((_DWORD *)_R4 + 2);
        v48 = *(_DWORD *)_R4;
        v49 = v17 + 1;
        v50 = v18;
        if ( !BlockSource::isSolidBlockingBlock(v3, (const BlockPos *)&v48) )
        {
          _R0 = *((_DWORD *)_R4 + 1) + 1;
          __asm
          {
            VMOV            S0, R0
            VCVT.F32.S32    S0, S0
            VADD.F32        S0, S0, S18
            VSTR            S0, [SP,#0xC8+var_58]
          }
        }
        break;
      case 1:
        v20 = *((_DWORD *)_R4 + 1);
        v21 = *((_DWORD *)_R4 + 2);
        v45 = *(_DWORD *)_R4;
        v46 = v20 - 1;
        v47 = v21;
        if ( !BlockSource::isSolidBlockingBlock(v3, (const BlockPos *)&v45) )
            VLDR            S0, [R4,#4]
            VADD.F32        S0, S0, S20
      case 2:
        v22 = *((_DWORD *)_R4 + 2);
        v43 = *(_QWORD *)_R4;
        v44 = v22 + 1;
        if ( !BlockSource::isSolidBlockingBlock(v3, (const BlockPos *)&v43) )
          _R0 = *((_DWORD *)_R4 + 2) + 1;
            VSTR            S0, [SP,#0xC8+var_54]
      case 3:
        v24 = *((_DWORD *)_R4 + 2);
        v41 = *(_QWORD *)_R4;
        v42 = v24 - 1;
        if ( !BlockSource::isSolidBlockingBlock(v3, (const BlockPos *)&v41) )
            VLDR            S0, [R4,#8]
      case 4:
        v25 = *((_DWORD *)_R4 + 1);
        v26 = *((_DWORD *)_R4 + 2);
        v38 = *(_DWORD *)_R4 + 1;
        v39 = v25;
        v40 = v26;
        if ( !BlockSource::isSolidBlockingBlock(v3, (const BlockPos *)&v38) )
          _R0 = *(_DWORD *)_R4 + 1;
          goto LABEL_15;
      case 5:
        v28 = *((_DWORD *)_R4 + 1);
        v29 = *((_DWORD *)_R4 + 2);
        v35 = *(_DWORD *)_R4 - 1;
        v36 = v28;
        v37 = v29;
        if ( !BlockSource::isSolidBlockingBlock(v3, (const BlockPos *)&v35) )
            VLDR            S0, [R4]
LABEL_15:
          __asm { VSTR            S0, [SP,#0xC8+var_5C] }
      default:
    _R0 = *(_DWORD *)_R4;
      VCVT.F32.S32    S2, S0
      VLDR            S0, [SP,#0xC8+var_5C]
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      goto LABEL_28;
    _R0 = _R0 + 1;
      VMOV            S2, R0
      VCVT.F32.S32    S2, S2
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      VLDR            S0, [SP,#0xC8+var_58]
      VCMPE.F32       S0, #0.0
    _R0 = *((_DWORD *)_R4 + 1) + 1;
    _R0 = *((_DWORD *)_R4 + 2);
      VLDR            S0, [SP,#0xC8+var_54]
    result = _R0 + 1;
LABEL_28:
      result = Level::addParticle(v6, 10, (int)&v54);
    ++v13;
  while ( v13 != 6 );
  return result;
}


void __fastcall RedStoneOreBlock::~RedStoneOreBlock(RedStoneOreBlock *this)
{
  RedStoneOreBlock::~RedStoneOreBlock(this);
}


signed int __fastcall RedStoneOreBlock::attack(RedStoneOreBlock *this, Player *a2, const BlockPos *a3)
{
  Player *v3; // r5@1
  RedStoneOreBlock *v4; // r6@1
  const BlockPos *v5; // r4@1
  RedStoneOreBlock *v6; // r7@1
  char v8; // [sp+0h] [bp-18h]@2

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (RedStoneOreBlock *)Entity::getRegion(a2);
  RedStoneOreBlock::_poofParticles(v6, v6, v5);
  if ( *((_BYTE *)v4 + 4) == *(_BYTE *)(Block::mRedStoneOre + 4) )
  {
    v8 = *(_BYTE *)(Block::mLitRedStoneOre + 4);
    BlockSource::setBlock((int)v6, v5, &v8, 3);
  }
  return Block::attack(v4, v3, v5);
}


unsigned int __fastcall RedStoneOreBlock::getResourceCount(RedStoneOreBlock *this, Random *a2, int a3, int a4)
{
  unsigned int result; // r0@2

  if ( a4 == -2 )
    result = 4;
  else
    result = Random::_genRandInt32(a2) % (a4 + 2) + 4;
  return result;
}


unsigned int __fastcall RedStoneOreBlock::getExperienceDrop(RedStoneOreBlock *this, Random *a2)
{
  return (Random::_genRandInt32(a2) & 3) + 1;
}


int __fastcall RedStoneOreBlock::_interact(RedStoneOreBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  RedStoneOreBlock *v5; // r6@1
  int result; // r0@1
  char v7; // [sp+4h] [bp-14h]@2

  v3 = a3;
  v4 = a2;
  v5 = this;
  RedStoneOreBlock::_poofParticles(this, a2, a3);
  result = *(_BYTE *)(Block::mRedStoneOre + 4);
  if ( *((_BYTE *)v5 + 4) == result )
  {
    v7 = *(_BYTE *)(Block::mLitRedStoneOre + 4);
    result = BlockSource::setBlock((int)v4, v3, &v7, 3);
  }
  return result;
}


RedStoneOreBlock *__fastcall RedStoneOreBlock::animateTick(RedStoneOreBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  RedStoneOreBlock *result; // r0@1

  result = (RedStoneOreBlock *)*((_BYTE *)this + 641);
  if ( result )
    result = (RedStoneOreBlock *)j_j_j__ZNK16RedStoneOreBlock14_poofParticlesER11BlockSourceRK8BlockPos(result, a2, a3);
  return result;
}
