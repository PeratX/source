

_DWORD *__fastcall DirtBlock::DirtBlock(_DWORD *a1, const void **a2, char a3)
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
  *v3 = &loc_27076FC;
  return v3;
}


void __fastcall DirtBlock::~DirtBlock(DirtBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall DirtBlock::~DirtBlock(DirtBlock *this)
{
  DirtBlock::~DirtBlock(this);
}


void __fastcall DirtBlock::buildDescriptionId(DirtBlock *this, int a2, unsigned int a3)
{
  DirtBlock::buildDescriptionId(this, a2, a3);
}


_BOOL4 __fastcall DirtBlock::getVariant(DirtBlock *this, int a2)
{
  return a2 != 0;
}


signed int __fastcall DirtBlock::canBeOriginalSurface(DirtBlock *this)
{
  return 1;
}


signed int __fastcall DirtBlock::neighborChanged(DirtBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
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


void __fastcall DirtBlock::buildDescriptionId(DirtBlock *this, int a2, unsigned int a3)
{
  int v3; // r6@1
  int *v4; // r4@1
  unsigned int v5; // r5@1
  unsigned __int64 *v6; // r0@1
  char v7; // r1@1
  unsigned int v8; // r2@1
  int *v9; // r1@1
  int *v10; // r0@2
  void *v11; // r0@2
  unsigned int *v12; // r2@3
  signed int v13; // r1@5
  int *v14; // r0@7
  unsigned int *v15; // r2@9
  signed int v16; // r1@11
  int v17; // [sp+0h] [bp-30h]@2
  int v18; // [sp+4h] [bp-2Ch]@7

  v3 = a2;
  v4 = (int *)this;
  v5 = a3;
  v6 = (unsigned __int64 *)Block::getBlockState(a2, 24);
  v7 = *v6;
  LOBYTE(v6) = *v6 >> 32;
  v8 = v5 >> (v7 + 1 - (_BYTE)v6);
  v9 = (int *)(v3 + 8);
  if ( v8 & (0xFu >> (4 - (_BYTE)v6)) )
  {
    v10 = sub_21E8AF4(&v17, v9);
    sub_21E7408((const void **)v10, ".coarse.name", 0xCu);
    I18n::get(v4, (int **)&v17);
    v11 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
    {
      v12 = (unsigned int *)(v17 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 <= 0 )
LABEL_18:
        j_j_j_j__ZdlPv_9(v11);
        return;
    }
  }
  else
    v14 = sub_21E8AF4(&v18, v9);
    sub_21E7408((const void **)v14, ".default.name", 0xDu);
    I18n::get(v4, (int **)&v18);
    v11 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v18 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        goto LABEL_18;
}


int __fastcall DirtBlock::getSpawnResourcesAuxValue(DirtBlock *this, int a2)
{
  return a2;
}
