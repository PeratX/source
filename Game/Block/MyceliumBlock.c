

void __fastcall MyceliumBlock::~MyceliumBlock(MyceliumBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall MyceliumBlock::animateTick(MyceliumBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Random *v4; // r5@1
  const BlockPos *v5; // r4@1
  BlockSource *v6; // r6@1
  int v15; // r0@1
  float v18; // [sp+1Ch] [bp-3Ch]@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  Block::animateTick(this, a2, a3, a4);
  _R7 = *(_DWORD *)v5;
  _R0 = Random::_genRandInt32(v4);
  __asm { VMOV            S0, R0 }
  _R8 = *((_DWORD *)v5 + 2);
  __asm { VCVT.F64.U32    D8, S0 }
  __asm
  {
    VMOV            S2, R0
    VLDR            D0, =2.32830644e-10
    VCVT.F64.U32    D1, S2
    VMUL.F64        D8, D8, D0
    VMUL.F64        D9, D1, D0
    VMOV            S0, R7
    VCVT.F32.S32    S20, S0
  }
  v15 = BlockSource::getLevel(v6);
  _R1 = *((_DWORD *)v5 + 1);
    VMOV            S4, R8
    VCVT.F32.F64    S0, D8
    VMOV            S2, R1
    VLDR            S8, =1.1
    VCVT.F32.F64    S6, D9
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VADD.F32        S0, S0, S20
    VADD.F32        S2, S2, S8
    VADD.F32        S4, S6, S4
    VSTR            S0, [SP,#0x58+var_3C]
    VSTR            S2, [SP,#0x58+var_38]
    VSTR            S4, [SP,#0x58+var_34]
  return Level::addParticle(v15, 19, (int)&v18);
}


int __fastcall MyceliumBlock::tick(MyceliumBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  BlockSource *v4; // r4@1
  MyceliumBlock *v5; // r5@1
  Random *v6; // r9@1
  const BlockPos *v7; // r6@1
  Level *v8; // r0@1
  int result; // r0@1
  int v10; // r1@2
  int v11; // r2@2
  Material *v12; // r0@3
  Material *v13; // r0@4
  const BlockPos *v14; // r11@5
  signed int v15; // r10@6
  unsigned int v16; // r7@7
  unsigned int v17; // r5@7
  unsigned int v18; // r0@7
  __int64 v19; // kr00_8@7
  int v20; // r3@7
  const BlockPos *v21; // r4@7
  Material *v22; // r11@7
  unsigned __int64 *v23; // r0@8
  int v24; // r0@8
  char v25; // r1@8
  unsigned int v26; // r1@8
  MyceliumBlock *v27; // [sp+4h] [bp-7Ch]@5
  char v28; // [sp+14h] [bp-6Ch]@12
  char v29; // [sp+15h] [bp-6Bh]@12
  unsigned __int8 v30; // [sp+18h] [bp-68h]@9
  int v31; // [sp+1Ch] [bp-64h]@9
  int v32; // [sp+20h] [bp-60h]@9
  unsigned int v33; // [sp+24h] [bp-5Ch]@9
  int v34; // [sp+28h] [bp-58h]@7
  int v35; // [sp+2Ch] [bp-54h]@7
  unsigned int v36; // [sp+30h] [bp-50h]@7
  unsigned __int8 v37; // [sp+34h] [bp-4Ch]@7
  unsigned __int8 v38; // [sp+35h] [bp-4Bh]@8
  int v39; // [sp+38h] [bp-48h]@7
  unsigned int v40; // [sp+3Ch] [bp-44h]@7
  unsigned int v41; // [sp+40h] [bp-40h]@7
  unsigned __int8 v42; // [sp+44h] [bp-3Ch]@5
  char v43; // [sp+48h] [bp-38h]@18
  char v44; // [sp+49h] [bp-37h]@18
  unsigned __int8 v45; // [sp+4Ch] [bp-34h]@2
  int v46; // [sp+50h] [bp-30h]@2
  int v47; // [sp+54h] [bp-2Ch]@2
  int v48; // [sp+58h] [bp-28h]@2

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v8);
  if ( !result )
  {
    v10 = *((_DWORD *)v7 + 1);
    v11 = *((_DWORD *)v7 + 2);
    v46 = *(_DWORD *)v7;
    v47 = v10 + 1;
    v48 = v11;
    BlockSource::getRawBrightness((BlockSource *)&v45, v4, (int)&v46, 1);
    if ( v45 < (unsigned int)MyceliumBlock::MIN_BRIGHTNESS
      && ((v12 = (Material *)BlockSource::getMaterial(v4, (const BlockPos *)&v46), Material::isSolid(v12))
       || (v13 = (Material *)BlockSource::getMaterial(v4, (const BlockPos *)&v46), !Material::isLiquid(v13))) )
    {
      BlockSource::getBlockID((BlockSource *)&v39, v4, (int)&v46);
      result = (unsigned __int8)v39;
      if ( (unsigned __int8)v39 != *(_BYTE *)(Block::mBrownMushroomBlock + 4)
        && (unsigned __int8)v39 != *(_BYTE *)(Block::mRedMushroomBlock + 4) )
      {
        v43 = *(_BYTE *)(Block::mDirt + 4);
        v44 = 0;
        result = BlockSource::setBlockAndData((int)v4, v7, (int)&v43, 3, 0);
      }
    }
    else
      v14 = v4;
      v27 = v5;
      BlockSource::getRawBrightness((BlockSource *)&v42, v4, (int)&v46, 1);
      result = (unsigned __int8)Brightness::MAX - 6;
      if ( v42 >= result )
        v15 = 4;
        do
        {
          v16 = Random::_genRandInt32(v6);
          v17 = Random::_genRandInt32(v6);
          v18 = Random::_genRandInt32(v6);
          v19 = *(_QWORD *)v7;
          v20 = *((_DWORD *)v7 + 2);
          v39 = v18 % 3 + *(_QWORD *)v7 - 1;
          v21 = v14;
          v40 = v17 % 5 + HIDWORD(v19) - 3;
          v41 = v16 % 3 + v20 - 1;
          BlockSource::getBlockAndData((BlockSource *)&v37, v14, (int)&v39);
          v34 = v39;
          v35 = v40 + 1;
          v36 = v41;
          v22 = (Material *)BlockSource::getMaterial(v14, (const BlockPos *)&v34);
          result = Block::mDirt;
          if ( v37 == *(_BYTE *)(Block::mDirt + 4) )
          {
            v23 = (unsigned __int64 *)Block::getBlockState(Block::mDirt, 24);
            v25 = *v23;
            v24 = *v23 >> 32;
            v26 = (unsigned int)v38 >> (v25 + 1 - v24);
            result = 0xFu >> (4 - v24);
            if ( !(v26 & result) )
            {
              v31 = v39;
              v32 = v40 + 1;
              v33 = v41;
              BlockSource::getRawBrightness((BlockSource *)&v30, v21, (int)&v31, 1);
              result = v30;
              if ( v30 >= (unsigned int)MyceliumBlock::MIN_BRIGHTNESS )
              {
                result = Material::isSolid(v22);
                if ( !result )
                {
                  result = Material::isLiquid(v22);
                  if ( !result )
                  {
                    v28 = *((_BYTE *)v27 + 4);
                    v29 = 0;
                    result = BlockSource::setBlockAndData((int)v21, (BlockPos *)&v39, (int)&v28, 3, 0);
                  }
                }
              }
            }
          }
          --v15;
          v14 = v21;
        }
        while ( v15 );
  }
  return result;
}


Block *__fastcall MyceliumBlock::MyceliumBlock(Block *a1, const void **a2, char a3)
{
  Block *v3; // r4@1
  char v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(1);
  Block::Block((int)v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_270F25C;
  Block::setTicking(v3, 1);
  return v3;
}


void __fastcall MyceliumBlock::~MyceliumBlock(MyceliumBlock *this)
{
  MyceliumBlock::~MyceliumBlock(this);
}
