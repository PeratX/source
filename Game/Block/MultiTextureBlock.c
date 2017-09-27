

void __fastcall MultiTextureBlock::buildDescriptionId(MultiTextureBlock *this, int a2, unsigned int a3)
{
  int v3; // r6@1
  int *v4; // r4@1
  unsigned int v5; // r5@1
  unsigned __int64 *v6; // r0@1
  void *v7; // r0@7
  unsigned int *v8; // r2@9
  signed int v9; // r1@11
  int v10; // [sp+0h] [bp-20h]@1

  v3 = a2;
  v4 = (int *)this;
  v5 = a3;
  sub_21E8AF4(&v10, (int *)(a2 + 8));
  v6 = (unsigned __int64 *)Block::getBlockState(v3, 24);
  switch ( (0xFu >> (4 - (*v6 >> 32))) & (v5 >> (*v6 + 1 - (*v6 >> 32))) )
  {
    case 0u:
      sub_21E7408((const void **)&v10, ".default", 8u);
      break;
    case 4u:
      sub_21E7408((const void **)&v10, ".smooth", 7u);
    case 2u:
      sub_21E7408((const void **)&v10, ".cracked", 8u);
    case 3u:
      sub_21E7408((const void **)&v10, ".chiseled", 9u);
    case 1u:
      sub_21E7408((const void **)&v10, ".mossy", 6u);
    default:
  }
  sub_21E8AF4(v4, &v10);
  sub_21E7408((const void **)v4, ".name", 5u);
  v7 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


void __fastcall MultiTextureBlock::buildDescriptionId(MultiTextureBlock *this, int a2, unsigned int a3)
{
  MultiTextureBlock::buildDescriptionId(this, a2, a3);
}


void __fastcall MultiTextureBlock::~MultiTextureBlock(MultiTextureBlock *this)
{
  MultiTextureBlock::~MultiTextureBlock(this);
}


int __fastcall MultiTextureBlock::getSpawnResourcesAuxValue(MultiTextureBlock *this, int a2)
{
  return a2;
}


void __fastcall MultiTextureBlock::~MultiTextureBlock(MultiTextureBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


_DWORD *__fastcall MultiTextureBlock::MultiTextureBlock(int a1, const void **a2, char a3, int a4)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)Block::Block(a1, a2, a3, a4);
  *result = &off_270EE58;
  return result;
}
