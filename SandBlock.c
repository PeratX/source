

_BOOL4 __fastcall SandBlock::getVariant(SandBlock *this, int a2)
{
  return a2 != 0;
}


void __fastcall SandBlock::~SandBlock(SandBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall SandBlock::getSpawnResourcesAuxValue(SandBlock *this, int a2)
{
  return a2;
}


LevelChunk *__fastcall SandBlock::neighborChanged(SandBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r5@1
  BlockSource *v5; // r6@1
  HeavyBlock *v6; // r9@1
  int v7; // r0@1
  int v8; // r1@1
  int v9; // r2@1
  const BlockPos *v10; // r8@1
  Block *v11; // r0@1
  int v12; // r3@2
  int v13; // r4@2
  void (*v14)(void); // r7@2
  int v16; // [sp+4h] [bp-34h]@2
  int v17; // [sp+8h] [bp-30h]@2
  int v18; // [sp+Ch] [bp-2Ch]@2
  int v19; // [sp+10h] [bp-28h]@1
  int v20; // [sp+14h] [bp-24h]@1
  int v21; // [sp+18h] [bp-20h]@1

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 2);
  v10 = a4;
  v19 = v7;
  v20 = v8 + 1;
  v21 = v9;
  v11 = (Block *)BlockSource::getBlock(v5, (const BlockPos *)&v19);
  if ( Block::isType(v11, (const Block *)Block::mReeds) == 1 )
  {
    v12 = *((_DWORD *)v4 + 1);
    v13 = *((_DWORD *)v4 + 2);
    v14 = *(void (**)(void))(*(_DWORD *)Block::mReeds + 252);
    v16 = *(_DWORD *)v4;
    v17 = v12 + 1;
    v18 = v13;
    v14();
  }
  return HeavyBlock::neighborChanged(v6, v5, v4, v10);
}


signed int __fastcall SandBlock::canBeOriginalSurface(SandBlock *this)
{
  return 1;
}


int __fastcall SandBlock::getMapColor(SandBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  SandBlock *v4; // r4@1
  const BlockPos *v5; // r5@1
  BlockSource *v6; // r6@1
  unsigned __int64 *v7; // r7@1
  unsigned int v8; // r0@1
  unsigned int v10; // r0@1
  int result; // r0@5

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = (unsigned __int64 *)Block::getBlockState((int)a2, 24);
  v8 = BlockSource::getData(v6, v5);
  _R3 = dword_18D4014;
  v10 = (v8 >> (*v7 + 1 - (*v7 >> 32))) & (0xFu >> (4 - (*v7 >> 32)));
  _R1 = dword_18D4004;
  _R2 = dword_18D400C;
  if ( v10 == 1 )
  {
    _R1 = &dword_18D4004[1];
    _R2 = &dword_18D400C[1];
  }
    _R3 = &dword_18D4014[1];
  __asm
    VLDR            S0, [R2]
    VLDR            S2, [R1]
  result = 0;
  __asm { VLDR            S4, [R3] }
  *((_DWORD *)v4 + 3) = 0;
    VSTR            S2, [R4]
    VSTR            S4, [R4,#4]
    VSTR            S0, [R4,#8]
  return result;
}


int __fastcall SandBlock::SandBlock(int a1, const void **a2, char a3)
{
  int v3; // r6@1
  char v4; // r4@1
  const void **v5; // r5@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(14);
  HeavyBlock::HeavyBlock(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_2712ED0;
  *(_DWORD *)(v3 + 40) = 1057803469;
  return v3;
}


void __fastcall SandBlock::~SandBlock(SandBlock *this)
{
  SandBlock::~SandBlock(this);
}


unsigned int __fastcall SandBlock::getDustColor(SandBlock *this, int a2, unsigned int a3)
{
  SandBlock *v3; // r4@1
  unsigned int v4; // r5@1
  unsigned __int64 *v5; // r0@1
  unsigned int v6; // r0@1
  unsigned int result; // r0@3
  signed int v8; // r1@3
  signed int v9; // r2@3
  int v10; // r2@6
  unsigned int v11; // r3@6

  v3 = this;
  v4 = a3;
  v5 = (unsigned __int64 *)Block::getBlockState(a2, 24);
  v6 = (0xFu >> (4 - (*v5 >> 32))) & (v4 >> (*v5 + 1 - (*v5 >> 32)));
  if ( v6 == 1 )
  {
    result = 1059695018;
    v8 = 1051766961;
    v9 = 1040483461;
    goto LABEL_5;
  }
  if ( !v6 )
    result = 1062984669;
    v8 = 1062458325;
    v9 = 1059102881;
LABEL_5:
    *(_DWORD *)v3 = result;
    *((_DWORD *)v3 + 1) = v8;
    *((_DWORD *)v3 + 2) = v9;
    *((_DWORD *)v3 + 3) = 1065353216;
    return result;
  v10 = *(&Color::NIL + 1);
  result = HIDWORD(qword_283E6B8);
  v11 = qword_283E6B8;
  *(_DWORD *)v3 = Color::NIL;
  *((_DWORD *)v3 + 1) = v10;
  *((_QWORD *)v3 + 1) = __PAIR__(result, v11);
  return result;
}


const void **__fastcall SandBlock::buildDescriptionId(SandBlock *this, int a2, unsigned int a3)
{
  int v3; // r6@1
  int *v4; // r8@1
  unsigned int v5; // r4@1
  __int64 v6; // kr00_8@1
  const void **result; // r0@2

  v3 = a2;
  v4 = (int *)this;
  v5 = a3;
  v6 = *(_QWORD *)Block::getBlockState(a2, 24);
  sub_21E8AF4(v4, (int *)(v3 + 8));
  if ( (v5 >> (1 - BYTE4(v6) + v6)) & (0xFu >> (4 - BYTE4(v6))) )
    result = sub_21E7408((const void **)v4, ".red.name", 9u);
  else
    result = sub_21E7408((const void **)v4, ".default.name", 0xDu);
  return result;
}
