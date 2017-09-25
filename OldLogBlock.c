

_DWORD *__fastcall OldLogBlock::OldLogBlock(_DWORD *a1, const void **a2, char a3)
{
  _DWORD *result; // r0@1

  result = LogBlock::LogBlock(a1, a2, a3);
  *result = &off_2710468;
  return result;
}


void __fastcall OldLogBlock::buildDescriptionId(OldLogBlock *this, int a2, unsigned int a3)
{
  OldLogBlock::buildDescriptionId(this, a2, a3);
}


void __fastcall OldLogBlock::~OldLogBlock(OldLogBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall OldLogBlock::~OldLogBlock(OldLogBlock *this)
{
  OldLogBlock::~OldLogBlock(this);
}


void __fastcall OldLogBlock::buildDescriptionId(OldLogBlock *this, int a2, unsigned int a3)
{
  OldLogBlock *v3; // r4@1
  unsigned int v4; // r5@1
  unsigned __int64 *v5; // r0@1
  unsigned int v6; // r5@1
  char v7; // r1@1
  int *v8; // r0@6
  const void **v9; // r0@6
  const void **v10; // r0@6
  char *v11; // r0@6
  void *v12; // r0@7
  unsigned int *v13; // r2@9
  signed int v14; // r1@11
  unsigned int *v15; // r2@13
  signed int v16; // r1@15
  int v17; // [sp+4h] [bp-2Ch]@6
  char *v18; // [sp+8h] [bp-28h]@6

  v3 = this;
  v4 = a3;
  v5 = (unsigned __int64 *)Block::getBlockState(a2, 24);
  v6 = (v4 >> (*v5 + 1 - (*v5 >> 32))) & (0xFu >> (4 - (*v5 >> 32)));
  v7 = byte_2812A34;
  if ( v6 > 3 )
    v6 = 0;
  __dmb();
  if ( !(v7 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_2812A34) )
  {
    sub_21E94B4((void **)&dword_2812A38, "oak");
    sub_21E94B4((void **)&unk_2812A3C, "spruce");
    sub_21E94B4((void **)&unk_2812A40, "birch");
    sub_21E94B4((void **)&unk_2812A44, "jungle");
    _cxa_atexit(std::array<std::string,4u>::~array);
    j___cxa_guard_release((unsigned int *)&byte_2812A34);
  }
  v8 = sub_21E8AF4(&v17, (int *)&Block::BLOCK_DESCRIPTION_PREFIX);
  sub_21E7408((const void **)v8, "log.", 4u);
  v9 = sub_21E72F0((const void **)&v17, (const void **)&unk_2812A30 + v6 + 2);
  v18 = (char *)*v9;
  *v9 = &unk_28898CC;
  v10 = sub_21E7408((const void **)&v18, ".name", 5u);
  *(_DWORD *)v3 = *v10;
  *v10 = &unk_28898CC;
  v11 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
}
