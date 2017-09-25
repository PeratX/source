

_DWORD *__fastcall PodzolBlock::PodzolBlock(_DWORD *a1, const void **a2, char a3)
{
  _DWORD *v3; // r6@1
  char v4; // r4@1
  const void **v5; // r5@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(1);
  Block::Block((int)v3, v5, v4, v6);
  *v3 = &off_2710C68;
  return v3;
}


void __fastcall PodzolBlock::~PodzolBlock(PodzolBlock *this)
{
  PodzolBlock::~PodzolBlock(this);
}


signed int __fastcall PodzolBlock::neighborChanged(PodzolBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
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


void __fastcall PodzolBlock::~PodzolBlock(PodzolBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}
