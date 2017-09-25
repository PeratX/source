

signed int __fastcall GlazedTerracottaBlock::isValidAuxValue(GlazedTerracottaBlock *this, int a2)
{
  signed int result; // r0@1

  result = 0;
  if ( (unsigned int)a2 < 6 )
    result = 1;
  return result;
}


int __fastcall GlazedTerracottaBlock::getMapColor(int result, BlockSource *a2, const BlockPos *a3)
{
  signed int v3; // r1@2
  signed int v4; // r2@2
  signed int v5; // r1@3
  signed int v6; // r3@7
  signed int v7; // r2@8 OVERLAPPED
  signed int v8; // r1@21

  switch ( *((_BYTE *)a2 + 4) )
  {
    case 0xDB:
      v3 = 1056898816;
      v4 = 1048378622;
      goto LABEL_15;
    case 0xDC:
      v5 = 1065353216;
      goto LABEL_24;
    case 0xDD:
      v3 = 1062787290;
      goto LABEL_18;
    case 0xDE:
      v3 = 1060287155;
      v4 = 1050187929;
      goto LABEL_7;
    case 0xDF:
      v3 = 1053609166;
      v4 = 1058642330;
LABEL_7:
      v6 = 1062787290;
      goto LABEL_20;
    case 0xE0:
      v7 = 1045220558;
      *(_DWORD *)result = 1063642599;
      *(_DWORD *)(result + 4) = 1063642599;
      goto LABEL_22;
    case 0xE1:
      v4 = 1061997774;
      v6 = 1036568778;
    case 0xE2:
      v3 = 1064497908;
      v4 = 1056898816;
      v6 = 1059431846;
    case 0xE3:
      v5 = 1050187929;
    case 0xE4:
      v5 = 1058642330;
    case 0xE5:
      v3 = 1050187929;
      v6 = 1058642330;
    case 0xE7:
      v3 = 1045220558;
LABEL_15:
      v6 = 1060287155;
    case 0xE8:
      goto LABEL_19;
    case 0xE9:
LABEL_18:
LABEL_19:
      v6 = 1045220558;
LABEL_20:
      *(_DWORD *)result = v3;
      *(_DWORD *)(result + 4) = v4;
      *(_DWORD *)(result + 8) = v6;
      *(_DWORD *)(result + 12) = 0;
      break;
    case 0xEA:
      v8 = 1058642330;
      *(_QWORD *)result = *(_QWORD *)(&v7 - 1);
LABEL_22:
      *(_DWORD *)(result + 8) = v7;
    case 0xEB:
      v5 = 1036568778;
LABEL_24:
      *(_DWORD *)result = v5;
      *(_DWORD *)(result + 4) = v5;
      *(_DWORD *)(result + 8) = v5;
    default:
      *(_DWORD *)result = 0;
      *(_DWORD *)(result + 4) = 0;
      *(_DWORD *)(result + 8) = 0;
  }
  return result;
}


int __fastcall GlazedTerracottaBlock::getPlacementDataValue(GlazedTerracottaBlock *this, Entity *a2, const BlockPos *a3, signed __int8 a4, const Vec3 *a5, int a6)
{
  GlazedTerracottaBlock *v6; // r4@1
  float v12; // r1@1
  int v13; // r0@1
  BlockState *v14; // r0@4
  __int64 v15; // r4@4
  signed int v16; // r1@4
  int v17; // r0@4
  BlockState *v18; // r0@5
  __int64 v19; // r4@5
  BlockState *v20; // r0@6
  __int64 v21; // r4@6
  BlockState *v22; // r0@7
  __int64 v23; // r4@7
  int v25; // [sp+0h] [bp-18h]@1

  v6 = this;
  Entity::getRotation((Entity *)&v25, (int)a2);
  __asm
  {
    VLDR            S0, =0.011111
    VMOV.F32        S4, #0.5
    VLDR            S2, [SP,#0x18+var_14]
    VMUL.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VMOV            R0, S0
  }
  v13 = mce::Math::floor(_R0, v12) & 3;
  switch ( v13 )
    case 1:
      v18 = (BlockState *)Block::getBlockState((int)v6, 15);
      v19 = *(_QWORD *)v18;
      BlockState::getMask(v18);
      v16 = 5;
      v17 = v19 + 1 - HIDWORD(v19);
      break;
    case 2:
      v20 = (BlockState *)Block::getBlockState((int)v6, 15);
      v21 = *(_QWORD *)v20;
      BlockState::getMask(v20);
      v16 = 3;
      v17 = v21 + 1 - HIDWORD(v21);
    case 3:
      v14 = (BlockState *)Block::getBlockState((int)v6, 15);
      v15 = *(_QWORD *)v14;
      BlockState::getMask(v14);
      v16 = 4;
      v17 = v15 + 1 - HIDWORD(v15);
    default:
      v22 = (BlockState *)Block::getBlockState((int)v6, 15);
      v23 = *(_QWORD *)v22;
      BlockState::getMask(v22);
      v16 = 2;
      v17 = v23 + 1 - HIDWORD(v23);
  return (unsigned __int8)(v16 << v17);
}


void __fastcall GlazedTerracottaBlock::~GlazedTerracottaBlock(GlazedTerracottaBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall GlazedTerracottaBlock::~GlazedTerracottaBlock(GlazedTerracottaBlock *this)
{
  GlazedTerracottaBlock::~GlazedTerracottaBlock(this);
}


_DWORD *__fastcall GlazedTerracottaBlock::GlazedTerracottaBlock(_DWORD *a1, const void **a2, char a3)
{
  _DWORD *v3; // r4@1
  char v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  int v7; // r1@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(3);
  FaceDirectionalBlock::FaceDirectionalBlock((int)v3, v5, v4, v6);
  *v3 = &off_270C02C;
  Block::addProperty((int)v3, v7, 0x80000000LL);
  return v3;
}
