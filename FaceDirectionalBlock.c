

int __fastcall FaceDirectionalBlock::getPlacementDataValue(FaceDirectionalBlock *this, Entity *a2, const BlockPos *a3, signed __int8 a4, const Vec3 *a5, int a6)
{
  int result; // r0@1
  int v7; // r1@1

  result = Block::getPlacementFacingAll(a2, a3, (const BlockPos *)0x43340000, 180.0);
  v7 = (unsigned __int8)result;
  if ( !(_BYTE)result )
    result = 1;
  if ( v7 == 1 )
    result = 0;
  return result;
}


_DWORD *__fastcall FaceDirectionalBlock::FaceDirectionalBlock(int a1, const void **a2, char a3, int a4)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)Block::Block(a1, a2, a3, a4);
  *result = &off_270AC28;
  return result;
}


int __fastcall FaceDirectionalBlock::getMappedFace(FaceDirectionalBlock *this, int a2, int a3)
{
  int v3; // r5@1
  unsigned __int8 v4; // r4@1
  unsigned __int64 *v5; // r0@1

  v3 = a2;
  v4 = a3;
  v5 = (unsigned __int64 *)Block::getBlockState((int)this, 15);
  return *(&byte_262E838[6 * ((0xFu >> (4 - (*v5 >> 32))) & (v4 >> (*v5 + 1 - (*v5 >> 32))))] + v3);
}


char *__fastcall FaceDirectionalBlock::setFaceFlipping(FaceDirectionalBlock *this, int a2, int *a3)
{
  unsigned __int8 v3; // r5@1
  int *v4; // r7@1
  unsigned __int64 *v5; // r0@1
  char *result; // r0@1
  int v7; // r2@1
  int v8; // r3@1
  int v9; // r4@1
  int v10; // r5@1
  int v11; // r6@1

  v3 = a2;
  v4 = a3;
  v5 = (unsigned __int64 *)Block::getBlockState((int)this, 15);
  result = (char *)&unk_262E7A8 + 24 * ((0xFu >> (4 - (*v5 >> 32))) & (v3 >> (*v5 + 1 - (*v5 >> 32))));
  v7 = *((_DWORD *)result + 1);
  v8 = *((_DWORD *)result + 2);
  v9 = *((_DWORD *)result + 3);
  v10 = *((_DWORD *)result + 4);
  v11 = *((_DWORD *)result + 5);
  *v4 = *(_DWORD *)result;
  v4[1] = v7;
  v4[2] = v8;
  v4[3] = v9;
  v4[4] = v10;
  v4[5] = v11;
  return result;
}


void __fastcall FaceDirectionalBlock::~FaceDirectionalBlock(FaceDirectionalBlock *this)
{
  FaceDirectionalBlock::~FaceDirectionalBlock(this);
}


void __fastcall FaceDirectionalBlock::~FaceDirectionalBlock(FaceDirectionalBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}
