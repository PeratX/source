

signed int __fastcall SignBlock::isWaterBlocking(SignBlock *this)
{
  return 1;
}


__int64 __fastcall SignBlock::getShape(SignBlock *this, int a2, AABB *a3)
{
  AABB *v3; // r4@1
  int v4; // r5@1
  __int64 result; // r0@1
  signed int v6; // r0@3
  signed int v7; // r2@3
  signed int v8; // r2@4
  __int64 v9; // r0@4
  unsigned __int64 v10; // [sp+0h] [bp-20h]@4
  float v11; // [sp+8h] [bp-18h]@4

  v3 = a3;
  v4 = a2;
  result = AABB::set((unsigned int)a3, 0LL, 1.0, 1.0, 1.0);
  switch ( v4 )
  {
    case 2:
      return AABB::set((unsigned int)v3, 4566650023203307520LL, 1.0, 0.78125, 1.0);
    case 3:
      v6 = 1040187392;
      v7 = 1065353216;
      goto LABEL_6;
    case 4:
      v8 = 1049624576;
      v10 = 4559894623777980416LL;
      v11 = 1.0;
      v9 = __PAIR__(1063256064, (unsigned int)v3);
      goto LABEL_7;
    case 5:
      v6 = 1065353216;
      v7 = 1040187392;
LABEL_6:
      v10 = __PAIR__(1061683200, v7);
      v11 = *(float *)&v6;
      v9 = (unsigned int)v3;
LABEL_7:
      result = AABB::set(v9, (unsigned int)v8, *(float *)&v10, *((float *)&v10 + 1), v11);
      break;
    default:
      return result;
  }
  return result;
}


int __fastcall SignBlock::neighborChanged(SignBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r8@1
  SignBlock *v6; // r9@1
  const BlockPos *v7; // r7@1
  unsigned int v8; // r5@1
  unsigned __int64 *v9; // r0@1
  int v10; // r5@1
  int result; // r0@1
  int v12; // r1@5
  int v13; // r2@5
  int *v14; // r1@5
  Material *v15; // r0@6
  int v16; // r2@9
  void (__fastcall *v17)(SignBlock *, BlockSource *, const BlockPos *, unsigned int); // r5@10
  unsigned int v18; // r0@10
  int v19; // r2@12
  int v20; // r1@13
  int v21; // r2@13
  int v22; // r1@14
  int v23; // r2@14
  char v24; // [sp+8h] [bp-68h]@10
  int v25; // [sp+Ch] [bp-64h]@14
  int v26; // [sp+10h] [bp-60h]@14
  int v27; // [sp+14h] [bp-5Ch]@14
  int v28; // [sp+18h] [bp-58h]@13
  int v29; // [sp+1Ch] [bp-54h]@13
  int v30; // [sp+20h] [bp-50h]@13
  __int64 v31; // [sp+24h] [bp-4Ch]@12
  int v32; // [sp+2Ch] [bp-44h]@12
  __int64 v33; // [sp+30h] [bp-40h]@9
  int v34; // [sp+38h] [bp-38h]@9
  int v35; // [sp+3Ch] [bp-34h]@5
  int v36; // [sp+40h] [bp-30h]@5
  int v37; // [sp+44h] [bp-2Ch]@5
  int v38; // [sp+48h] [bp-28h]@1
  int v39; // [sp+4Ch] [bp-24h]@2
  int v40; // [sp+50h] [bp-20h]@3

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = BlockSource::getData(a2, a3);
  v9 = (unsigned __int64 *)Block::getBlockState((int)v6, 15);
  v10 = (char)((0xFu >> (4 - (*v9 >> 32))) & (v8 >> (*v9 + 1 - (*v9 >> 32))));
  BlockPos::neighbor((BlockPos *)&v38, (int)v4, Facing::OPPOSITE_FACING[v10]);
  result = *(_DWORD *)v7;
  if ( v38 == *(_DWORD *)v7 )
  {
    result = v39;
    if ( v39 == *((_DWORD *)v7 + 1) )
    {
      result = v40;
      if ( v40 == *((_DWORD *)v7 + 2) )
      {
        EntityBlock::neighborChanged(v6, v5, v4, v7);
        if ( !*((_BYTE *)v6 + 641) )
        {
          switch ( v10 )
          {
            case 2:
              v16 = *((_DWORD *)v4 + 2);
              v33 = *(_QWORD *)v4;
              v34 = v16 + 1;
              v14 = (int *)&v33;
              goto LABEL_6;
            case 3:
              v19 = *((_DWORD *)v4 + 2);
              v31 = *(_QWORD *)v4;
              v32 = v19 - 1;
              v14 = (int *)&v31;
            case 4:
              v20 = *((_DWORD *)v4 + 1);
              v21 = *((_DWORD *)v4 + 2);
              v28 = *(_DWORD *)v4 + 1;
              v29 = v20;
              v30 = v21;
              v14 = &v28;
            case 5:
              v22 = *((_DWORD *)v4 + 1);
              v23 = *((_DWORD *)v4 + 2);
              v25 = *(_DWORD *)v4 - 1;
              v26 = v22;
              v27 = v23;
              v14 = &v25;
            default:
              goto def_18D62CC;
          }
          goto def_18D62CC;
        }
        v12 = *((_DWORD *)v4 + 1);
        v13 = *((_DWORD *)v4 + 2);
        v35 = *(_DWORD *)v4;
        v36 = v12 - 1;
        v37 = v13;
        v14 = &v35;
LABEL_6:
        v15 = (Material *)BlockSource::getMaterial(v5, (const BlockPos *)v14);
        result = Material::isSolid(v15);
        if ( !result )
def_18D62CC:
          v17 = *(void (__fastcall **)(SignBlock *, BlockSource *, const BlockPos *, unsigned int))(*(_DWORD *)v6 + 276);
          v18 = BlockSource::getData(v5, v4);
          v17(v6, v5, v4, v18);
          v24 = BlockID::AIR;
          return BlockSource::setBlock((int)v5, v4, &v24, 3);
      }
    }
  }
  return result;
}


AABB *__fastcall SignBlock::getVisualShape(SignBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, bool a5)
{
  SignBlock *v5; // r5@1
  AABB *v6; // r4@1
  unsigned int v7; // r6@1
  unsigned __int64 *v8; // r0@1

  v5 = this;
  v6 = a4;
  v7 = BlockSource::getData(a2, a3);
  v8 = (unsigned __int64 *)Block::getBlockState((int)v5, 15);
  SignBlock::getShape(
    (SignBlock *)(0xFu >> (4 - (*v8 >> 32))),
    (v7 >> (*v8 + 1 - (*v8 >> 32))) & (0xFu >> (4 - (*v8 >> 32))),
    v6);
  return v6;
}


int __fastcall SignBlock::SignBlock(int a1, const void **a2, int a3, char a4)
{
  int v4; // r4@1
  char v5; // r6@1
  int v6; // r5@1
  const void **v7; // r7@1
  int v8; // r0@1
  int *v14; // r2@1
  float v16; // [sp+4h] [bp-34h]@1
  int v17; // [sp+8h] [bp-30h]@1
  int v18; // [sp+Ch] [bp-2Ch]@1
  signed int v19; // [sp+10h] [bp-28h]@1
  signed int v20; // [sp+14h] [bp-24h]@1
  int v21; // [sp+18h] [bp-20h]@1
  int v22; // [sp+1Ch] [bp-1Ch]@1
  signed int v23; // [sp+20h] [bp-18h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = Material::getMaterial(2);
  EntityBlock::EntityBlock(v4, v7, v6, v8);
  *(_DWORD *)v4 = &off_27138E8;
  *(_BYTE *)(v4 + 641) = v5;
  v21 = 1048576000;
  v22 = 0;
  v23 = 1048576000;
  v18 = 1061158912;
  v19 = 1065353216;
  v20 = 1061158912;
  Block::setVisualShape((Block *)v4, (const Vec3 *)&v21, (const Vec3 *)&v18);
  Block::setSolid((Block *)v4, 0);
  *(_DWORD *)(v4 + 24) = 33587200;
  *(_DWORD *)(v4 + 28) = 0;
  *(_DWORD *)(v4 + 32) = 4;
  v17 = 1061997773;
  _R0 = Material::getTranslucency(*(Material **)(v4 + 56));
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.8
    VCMPE.F32       S0, S2
  }
  v14 = (int *)&v16;
    VMRS            APSR_nzcv, FPSCR
    VSTR            S0, [SP,#0x38+var_34]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v14 = &v17;
  Block::mTranslucency[v6] = *v14;
  return v4;
}


void __fastcall SignBlock::~SignBlock(SignBlock *this)
{
  SignBlock::~SignBlock(this);
}


signed int __fastcall SignBlock::checkIsPathable(SignBlock *this, Entity *a2, const BlockPos *a3, const BlockPos *a4)
{
  return 1;
}


void __fastcall SignBlock::~SignBlock(SignBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


unsigned int __fastcall SignBlock::getFace(SignBlock *this, const unsigned __int8 *a2)
{
  const unsigned __int8 *v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)Block::getBlockState((int)this, 15);
  return (0xFu >> (4 - (*v3 >> 32))) & (*v2 >> (*v3 + 1 - (*v3 >> 32)));
}


_DWORD *__fastcall SignBlock::getAABB(SignBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, int a6, int a7)
{
  SignBlock *v7; // r7@1
  AABB *v8; // r4@1
  const BlockPos *v9; // r5@1
  unsigned int v10; // r6@2
  unsigned __int64 *v11; // r0@2
  _DWORD *result; // r0@4
  char v19; // [sp+4h] [bp-3Ch]@6
  float v20; // [sp+10h] [bp-30h]@3
  int v21; // [sp+14h] [bp-2Ch]@3
  float v22; // [sp+1Ch] [bp-24h]@3
  int v23; // [sp+20h] [bp-20h]@3

  v7 = this;
  v8 = a4;
  v9 = a3;
  if ( a6 == 1 )
  {
    v10 = BlockSource::getData(a2, a3);
    v11 = (unsigned __int64 *)Block::getBlockState((int)v7, 15);
    if ( *((_BYTE *)v7 + 641) )
    {
      __asm { VMOV.F32        S0, #0.25 }
      _R0 = &Vec3::ZERO;
      _R1 = &Vec3::ONE;
      __asm
      {
        VLDR            S2, [R0]
        VLDR            S4, [R0,#8]
        VADD.F32        S2, S2, S0
        VADD.F32        S0, S4, S0
        VMOV.F32        S4, #-0.25
        VSTR            S2, [SP,#0x40+var_24]
      }
      v23 = *(&Vec3::ZERO + 1);
        VSTR            S0, [SP,#0x40+var_1C]
        VLDR            S0, [R1]
        VLDR            S2, [R1,#8]
        VADD.F32        S0, S0, S4
        VADD.F32        S2, S2, S4
        VSTR            S0, [SP,#0x40+var_30]
      v21 = unk_28224A0;
      __asm { VSTR            S2, [SP,#0x40+var_28] }
      AABB::set(v8, (const Vec3 *)&v22, (const Vec3 *)&v20);
    }
    else
      SignBlock::getShape(
        (SignBlock *)(v10 >> (*v11 + 1 - (*v11 >> 32))),
        (v10 >> (*v11 + 1 - (*v11 >> 32))) & (0xFu >> (4 - (*v11 >> 32))),
        v8);
    Vec3::Vec3((int)&v19, (int)v9);
    result = (_DWORD *)AABB::move(v8, (const Vec3 *)&v19);
  }
  else
    result = &AABB::EMPTY;
  return result;
}


int __fastcall SignBlock::canBeSilkTouched(SignBlock *this)
{
  return 0;
}
