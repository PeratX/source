

int __fastcall ClothBlock::getSpawnResourcesAuxValue(ClothBlock *this, int a2)
{
  return a2;
}


int __fastcall ClothBlock::getMapColor(ClothBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  ClothBlock *v4; // r4@1
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
  v8 = byte_280C74C;
  __dmb();
  if ( !(v8 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_280C74C) )
  {
    unk_280C64C = 1065353216;
    unk_280C650 = 1065353216;
    dword_280C654 = 1065353216;
    dword_280C658 = 0;
    dword_280C65C = 1062787290;
    dword_280C660 = 1056898816;
    unk_280C664 = 1045220558;
    unk_280C668 = 0;
    dword_280C66C = 1060287155;
    unk_280C670 = 1050187929;
    unk_280C674 = 1062787290;
    dword_280C678 = 0;
    dword_280C67C = 1053609166;
    unk_280C680 = 1058642330;
    unk_280C684 = 1062787290;
    dword_280C688 = 0;
    unk_280C68C = 1063642599;
    unk_280C690 = 1063642599;
    unk_280C694 = 1045220558;
    unk_280C698 = 0;
    dword_280C69C = 1056898816;
    dword_280C6A0 = 1061997774;
    unk_280C6A4 = 1036568778;
    unk_280C6A8 = 0;
    unk_280C6AC = 1064497908;
    unk_280C6B0 = 1056898816;
    dword_280C6B4 = 1059431846;
    dword_280C6B8 = 0;
    dword_280C6BC = 1050187929;
    unk_280C6C0 = 1050187929;
    unk_280C6C4 = 1050187929;
    unk_280C6C8 = 0;
    unk_280C6CC = 1058642330;
    unk_280C6D0 = 1058642330;
    unk_280C6D4 = 1058642330;
    unk_280C6D8 = 0;
    unk_280C6DC = 1050187929;
    unk_280C6E0 = 1056898816;
    unk_280C6E4 = 1058642330;
    unk_280C6E8 = 0;
    dword_280C6EC = 1056898816;
    unk_280C6F0 = 1048378622;
    unk_280C6F4 = 1060287155;
    unk_280C6F8 = 0;
    unk_280C6FC = 1045220558;
    unk_280C700 = 1050187929;
    unk_280C704 = 1060287155;
    unk_280C708 = 0;
    unk_280C70C = 1053609166;
    unk_280C710 = 1050187929;
    unk_280C714 = 1045220558;
    unk_280C718 = 0;
    unk_280C71C = 1053609166;
    unk_280C720 = 1056898816;
    unk_280C724 = 1045220558;
    unk_280C728 = 0;
    unk_280C72C = 1058642330;
    unk_280C730 = 1045220558;
    unk_280C734 = 1045220558;
    unk_280C738 = 0;
    unk_280C73C = 1036568778;
    unk_280C740 = 1036568778;
    unk_280C744 = 1036568778;
    unk_280C748 = 0;
    j___cxa_guard_release((unsigned int *)&byte_280C74C);
  }
  v9 = BlockSource::getData(v6, v5);
  v10 = (unsigned __int64 *)Block::getBlockState((int)v7, 24);
  v11 = (0xFu >> (4 - (*v10 >> 32))) & (v9 >> (*v10 + 1 - (*v10 >> 32)));
  if ( v11 < 0x10 )
    v13 = 16 * v11;
    v14 = (char *)&unk_280C64C + 16 * v11;
    v15 = *(_QWORD *)(v14 + 4);
    result = *((_DWORD *)v14 + 3);
    *(_DWORD *)v4 = *(_DWORD *)((char *)&unk_280C64C + v13);
    *(_QWORD *)((char *)v4 + 4) = v15;
    *((_DWORD *)v4 + 3) = result;
  else
    result = Block::getMapColor(v4, v7, v6);
  return result;
}


_DWORD *__fastcall ClothBlock::ClothBlock(_DWORD *a1, const void **a2, char a3)
{
  _DWORD *v3; // r6@1
  char v4; // r4@1
  const void **v5; // r5@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(11);
  Block::Block((int)v3, v5, v4, v6);
  *v3 = &loc_27060CC;
  return v3;
}


unsigned int __fastcall ClothBlock::getBlockDataForItemAuxValue(ClothBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = (unsigned __int8)this;
  v3 = (unsigned __int64 *)Block::getBlockState(Block::mWool, 24);
  return 15 - ((0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32))));
}


void __fastcall ClothBlock::~ClothBlock(ClothBlock *this)
{
  ClothBlock::~ClothBlock(this);
}


_DWORD *__fastcall ClothBlock::ClothBlock(_DWORD *a1, const void **a2, char a3)
{
  _DWORD *v3; // r6@1
  char v4; // r4@1
  const void **v5; // r5@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(11);
  Block::Block((int)v3, v5, v4, v6);
  *v3 = &loc_27060CC;
  return v3;
}


void __fastcall ClothBlock::~ClothBlock(ClothBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}
