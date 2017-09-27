

void __fastcall SandStoneBlock::buildDescriptionId(SandStoneBlock *this, int a2, unsigned int a3)
{
  SandStoneBlock::buildDescriptionId(this, a2, a3);
}


void __fastcall SandStoneBlock::buildDescriptionId(SandStoneBlock *this, int a2, unsigned int a3)
{
  int v3; // r6@1
  int *v4; // r4@1
  unsigned int v5; // r5@1
  unsigned __int64 *v6; // r0@1
  unsigned int v7; // r0@1
  void *v8; // r0@7
  unsigned int *v9; // r2@9
  signed int v10; // r1@11
  int v11; // [sp+0h] [bp-20h]@1

  v3 = a2;
  v4 = (int *)this;
  v5 = a3;
  sub_21E8AF4(&v11, (int *)(a2 + 8));
  v6 = (unsigned __int64 *)Block::getBlockState(v3, 24);
  v7 = (0xFu >> (4 - (*v6 >> 32))) & (v5 >> (*v6 + 1 - (*v6 >> 32)));
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      sub_21E7408((const void **)&v11, ".chiseled", 9u);
    }
    else if ( v7 == 2 )
      sub_21E7408((const void **)&v11, ".smooth", 7u);
  }
  else
    sub_21E7408((const void **)&v11, ".default", 8u);
  sub_21E8AF4(v4, &v11);
  sub_21E7408((const void **)v4, ".name", 5u);
  v8 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
}


signed int __fastcall SandStoneBlock::canBeOriginalSurface(SandStoneBlock *this)
{
  return 1;
}


void __fastcall SandStoneBlock::~SandStoneBlock(SandStoneBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall SandStoneBlock::~SandStoneBlock(SandStoneBlock *this)
{
  SandStoneBlock::~SandStoneBlock(this);
}


int __fastcall SandStoneBlock::SandStoneBlock(int a1, const void **a2, char a3)
{
  int v3; // r6@1
  char v4; // r4@1
  const void **v5; // r5@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(3);
  MultiTextureBlock::MultiTextureBlock(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_27130E4;
  *(_DWORD *)(v3 + 40) = 1060320051;
  return v3;
}
