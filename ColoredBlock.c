

unsigned int __fastcall ColoredBlock::getBlockDataForItemAuxValue(ColoredBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = (unsigned __int8)this;
  v3 = (unsigned __int64 *)Block::getBlockState(Block::mStainedClay, 24);
  return 15 - ((0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32))));
}


void __fastcall ColoredBlock::~ColoredBlock(ColoredBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall ColoredBlock::~ColoredBlock(ColoredBlock *this)
{
  ColoredBlock::~ColoredBlock(this);
}


_DWORD *__fastcall ColoredBlock::ColoredBlock(int a1, const void **a2, char a3, int a4)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)Block::Block(a1, a2, a3, a4);
  *result = &loc_27064CC;
  return result;
}


int __fastcall ColoredBlock::getSpawnResourcesAuxValue(ColoredBlock *this, int a2)
{
  return a2;
}


void __fastcall ColoredBlock::buildDescriptionId(ColoredBlock *this, int a2, unsigned int a3)
{
  ColoredBlock *v3; // r8@1
  unsigned int v4; // r5@1
  int v5; // r6@1
  char v6; // r0@1
  __int64 v7; // kr00_8@4
  int *v8; // r0@4
  unsigned int v9; // r0@4
  const void **v10; // r0@6
  const void **v11; // r0@6
  char *v12; // r0@6
  void *v13; // r0@7
  unsigned int *v14; // r2@9
  signed int v15; // r1@11
  unsigned int *v16; // r2@13
  signed int v17; // r1@15
  int v18; // [sp+4h] [bp-64h]@4
  char *v19; // [sp+8h] [bp-60h]@6

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = byte_280C9F0[0];
  __dmb();
  if ( !(v6 & 1) && j___cxa_guard_acquire((unsigned int *)byte_280C9F0) )
  {
    sub_21E94B4((void **)&dword_280C9F4, "white");
    sub_21E94B4((void **)&unk_280C9F8, "orange");
    sub_21E94B4((void **)&unk_280C9FC, "magenta");
    sub_21E94B4((void **)&unk_280CA00, "lightBlue");
    sub_21E94B4((void **)&unk_280CA04, "yellow");
    sub_21E94B4((void **)&unk_280CA08, "lime");
    sub_21E94B4((void **)&unk_280CA0C, "pink");
    sub_21E94B4((void **)&unk_280CA10, "gray");
    sub_21E94B4((void **)&unk_280CA14, "silver");
    sub_21E94B4((void **)&unk_280CA18, "cyan");
    sub_21E94B4((void **)&unk_280CA1C, "purple");
    sub_21E94B4((void **)&unk_280CA20, "blue");
    sub_21E94B4((void **)&unk_280CA24, "brown");
    sub_21E94B4((void **)&unk_280CA28, "green");
    sub_21E94B4((void **)&unk_280CA2C, "red");
    sub_21E94B4((void **)&dword_280CA30, "black");
    _cxa_atexit(sub_ABAD1C);
    j___cxa_guard_release((unsigned int *)byte_280C9F0);
  }
  v7 = *(_QWORD *)Block::getBlockState(v5, 24);
  v8 = sub_21E8AF4(&v18, (int *)(v5 + 8));
  sub_21E7408((const void **)v8, ".", 1u);
  v9 = (v4 >> (1 - BYTE4(v7) + v7)) & (0xFu >> (4 - BYTE4(v7)));
  if ( v9 > 0xF )
    v9 = 0;
  v10 = sub_21E72F0((const void **)&v18, (const void **)&byte_280C9F0[4 * v9 + 4]);
  v19 = (char *)*v10;
  *v10 = &unk_28898CC;
  v11 = sub_21E7408((const void **)&v19, ".name", 5u);
  *(_DWORD *)v3 = *v11;
  *v11 = &unk_28898CC;
  v12 = v19 - 12;
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v18 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
}


unsigned int __fastcall ColoredBlock::getItemAuxValueForBlockData(ColoredBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = (unsigned __int8)this;
  v3 = (unsigned __int64 *)Block::getBlockState(Block::mStainedClay, 24);
  return 15 - ((0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32))));
}


int __fastcall ColoredBlock::getMapColor(ColoredBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  ColoredBlock *v4; // r4@1
  const BlockPos *v5; // r8@1
  BlockSource *v6; // r6@1
  BlockSource *v7; // r7@1
  char v8; // r0@1
  unsigned int v9; // r5@4
  unsigned __int64 *v10; // r0@4
  unsigned int v11; // r0@4
  int result; // r0@5
  int v13; // r2@6
  char *v14; // r0@6
  __int64 v15; // kr00_8@6

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = byte_280C9EC;
  __dmb();
  if ( !(v8 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_280C9EC) )
  {
    unk_280C8EC = 1065353216;
    unk_280C8F0 = 1065353216;
    dword_280C8F4 = 1065353216;
    dword_280C8F8 = 0;
    dword_280C8FC = 1062787290;
    dword_280C900 = 1056898816;
    unk_280C904 = 1045220558;
    unk_280C908 = 0;
    dword_280C90C = 1060287155;
    unk_280C910 = 1050187929;
    unk_280C914 = 1062787290;
    dword_280C918 = 0;
    dword_280C91C = 1053609166;
    unk_280C920 = 1058642330;
    unk_280C924 = 1062787290;
    dword_280C928 = 0;
    unk_280C92C = 1063642599;
    unk_280C930 = 1063642599;
    unk_280C934 = 1045220558;
    unk_280C938 = 0;
    dword_280C93C = 1056898816;
    dword_280C940 = 1061997774;
    unk_280C944 = 1036568778;
    unk_280C948 = 0;
    unk_280C94C = 1064497908;
    unk_280C950 = 1056898816;
    dword_280C954 = 1059431846;
    dword_280C958 = 0;
    dword_280C95C = 1050187929;
    unk_280C960 = 1050187929;
    unk_280C964 = 1050187929;
    unk_280C968 = 0;
    unk_280C96C = 1058642330;
    unk_280C970 = 1058642330;
    unk_280C974 = 1058642330;
    unk_280C978 = 0;
    unk_280C97C = 1050187929;
    unk_280C980 = 1056898816;
    unk_280C984 = 1058642330;
    unk_280C988 = 0;
    dword_280C98C = 1056898816;
    unk_280C990 = 1048378622;
    unk_280C994 = 1060287155;
    unk_280C998 = 0;
    unk_280C99C = 1045220558;
    unk_280C9A0 = 1050187929;
    unk_280C9A4 = 1060287155;
    unk_280C9A8 = 0;
    unk_280C9AC = 1053609166;
    unk_280C9B0 = 1050187929;
    unk_280C9B4 = 1045220558;
    unk_280C9B8 = 0;
    unk_280C9BC = 1053609166;
    unk_280C9C0 = 1056898816;
    unk_280C9C4 = 1045220558;
    unk_280C9C8 = 0;
    unk_280C9CC = 1058642330;
    unk_280C9D0 = 1045220558;
    unk_280C9D4 = 1045220558;
    unk_280C9D8 = 0;
    unk_280C9DC = 1036568778;
    unk_280C9E0 = 1036568778;
    unk_280C9E4 = 1036568778;
    unk_280C9E8 = 0;
    j___cxa_guard_release((unsigned int *)&byte_280C9EC);
  }
  v9 = BlockSource::getData(v6, v5);
  v10 = (unsigned __int64 *)Block::getBlockState((int)v7, 24);
  v11 = (0xFu >> (4 - (*v10 >> 32))) & (v9 >> (*v10 + 1 - (*v10 >> 32)));
  if ( v11 < 0x10 )
    v13 = 16 * v11;
    v14 = (char *)&unk_280C8EC + 16 * v11;
    v15 = *(_QWORD *)(v14 + 4);
    result = *((_DWORD *)v14 + 3);
    *(_DWORD *)v4 = *(_DWORD *)((char *)&unk_280C8EC + v13);
    *(_QWORD *)((char *)v4 + 4) = v15;
    *((_DWORD *)v4 + 3) = result;
  else
    result = Block::getMapColor(v4, v7, v6);
  return result;
}


void __fastcall ColoredBlock::buildDescriptionId(ColoredBlock *this, int a2, unsigned int a3)
{
  ColoredBlock::buildDescriptionId(this, a2, a3);
}
