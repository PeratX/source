

void __fastcall ConcreteBlock::buildDescriptionId(ConcreteBlock *this, int a2, int a3)
{
  ConcreteBlock *v3; // r4@1
  int v4; // r5@1
  int *v5; // r0@1
  const void **v6; // r0@1
  const void **v7; // r0@1
  char *v8; // r0@1
  void *v9; // r0@2
  unsigned int *v10; // r2@4
  signed int v11; // r1@6
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  int v14; // [sp+4h] [bp-2Ch]@1
  char *v15; // [sp+8h] [bp-28h]@1

  v3 = this;
  v4 = a3;
  v5 = sub_21E8AF4(&v14, (int *)(a2 + 8));
  sub_21E7408((const void **)v5, ".", 1u);
  v6 = sub_21E72F0((const void **)&v14, (const void **)&DyePowderItem::COLOR_DESCS[15 - v4]);
  v15 = (char *)*v6;
  *v6 = &unk_28898CC;
  v7 = sub_21E7408((const void **)&v15, ".name", 5u);
  *(_DWORD *)v3 = *v7;
  *v7 = &unk_28898CC;
  v8 = v15 - 12;
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  }
  v9 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v14 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}


_DWORD *__fastcall ConcreteBlock::ConcreteBlock(_DWORD *a1, const void **a2, char a3)
{
  _DWORD *v3; // r6@1
  char v4; // r4@1
  const void **v5; // r5@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(3);
  Block::Block((int)v3, v5, v4, v6);
  *v3 = &loc_2706ACC;
  return v3;
}


void __fastcall ConcreteBlock::buildDescriptionId(ConcreteBlock *this, int a2, int a3)
{
  ConcreteBlock::buildDescriptionId(this, a2, a3);
}


void __fastcall ConcreteBlock::~ConcreteBlock(ConcreteBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall ConcreteBlock::~ConcreteBlock(ConcreteBlock *this)
{
  ConcreteBlock::~ConcreteBlock(this);
}


unsigned int __fastcall ConcreteBlock::getBlockDataForItemAuxValue(ConcreteBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = (unsigned __int8)this;
  v3 = (unsigned __int64 *)Block::getBlockState(Block::mConcrete, 24);
  return 15 - ((0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32))));
}


_DWORD *__fastcall ConcreteBlock::ConcreteBlock(_DWORD *a1, const void **a2, char a3)
{
  _DWORD *v3; // r6@1
  char v4; // r4@1
  const void **v5; // r5@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(3);
  Block::Block((int)v3, v5, v4, v6);
  *v3 = &loc_2706ACC;
  return v3;
}


int __fastcall ConcreteBlock::getSpawnResourcesAuxValue(ConcreteBlock *this, int a2)
{
  return a2;
}


signed int __fastcall ConcreteBlock::isValidAuxValue(ConcreteBlock *this, int a2)
{
  signed int result; // r0@1

  result = 0;
  if ( (unsigned int)a2 < 0x10 )
    result = 1;
  return result;
}


int __fastcall ConcreteBlock::getMapColor(ConcreteBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  ConcreteBlock *v4; // r4@1
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
  v8 = byte_280CDEC;
  __dmb();
  if ( !(v8 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_280CDEC) )
  {
    unk_280CCEC = 1065353216;
    unk_280CCF0 = 1065353216;
    dword_280CCF4 = 1065353216;
    dword_280CCF8 = 0;
    dword_280CCFC = 1062787290;
    dword_280CD00 = 1056898816;
    unk_280CD04 = 1045220558;
    unk_280CD08 = 0;
    dword_280CD0C = 1060287155;
    unk_280CD10 = 1050187929;
    unk_280CD14 = 1062787290;
    dword_280CD18 = 0;
    dword_280CD1C = 1053609166;
    unk_280CD20 = 1058642330;
    unk_280CD24 = 1062787290;
    dword_280CD28 = 0;
    unk_280CD2C = 1063642599;
    unk_280CD30 = 1063642599;
    unk_280CD34 = 1045220558;
    unk_280CD38 = 0;
    dword_280CD3C = 1056898816;
    dword_280CD40 = 1061997774;
    unk_280CD44 = 1036568778;
    unk_280CD48 = 0;
    unk_280CD4C = 1064497908;
    unk_280CD50 = 1056898816;
    dword_280CD54 = 1059431846;
    dword_280CD58 = 0;
    dword_280CD5C = 1050187929;
    unk_280CD60 = 1050187929;
    unk_280CD64 = 1050187929;
    unk_280CD68 = 0;
    unk_280CD6C = 1058642330;
    unk_280CD70 = 1058642330;
    unk_280CD74 = 1058642330;
    unk_280CD78 = 0;
    unk_280CD7C = 1050187929;
    unk_280CD80 = 1056898816;
    unk_280CD84 = 1058642330;
    unk_280CD88 = 0;
    dword_280CD8C = 1056898816;
    unk_280CD90 = 1048378622;
    unk_280CD94 = 1060287155;
    unk_280CD98 = 0;
    unk_280CD9C = 1045220558;
    unk_280CDA0 = 1050187929;
    unk_280CDA4 = 1060287155;
    unk_280CDA8 = 0;
    unk_280CDAC = 1053609166;
    unk_280CDB0 = 1050187929;
    unk_280CDB4 = 1045220558;
    unk_280CDB8 = 0;
    unk_280CDBC = 1053609166;
    unk_280CDC0 = 1056898816;
    unk_280CDC4 = 1045220558;
    unk_280CDC8 = 0;
    unk_280CDCC = 1058642330;
    unk_280CDD0 = 1045220558;
    unk_280CDD4 = 1045220558;
    unk_280CDD8 = 0;
    unk_280CDDC = 1036568778;
    unk_280CDE0 = 1036568778;
    unk_280CDE4 = 1036568778;
    unk_280CDE8 = 0;
    j___cxa_guard_release((unsigned int *)&byte_280CDEC);
  }
  v9 = BlockSource::getData(v6, v5);
  v10 = (unsigned __int64 *)Block::getBlockState((int)v7, 24);
  v11 = (0xFu >> (4 - (*v10 >> 32))) & (v9 >> (*v10 + 1 - (*v10 >> 32)));
  if ( v11 < 0x10 )
    v13 = 16 * v11;
    v14 = (char *)&unk_280CCEC + 16 * v11;
    v15 = *(_QWORD *)(v14 + 4);
    result = *((_DWORD *)v14 + 3);
    *(_DWORD *)v4 = *(_DWORD *)((char *)&unk_280CCEC + v13);
    *(_QWORD *)((char *)v4 + 4) = v15;
    *((_DWORD *)v4 + 3) = result;
  else
    result = Block::getMapColor(v4, v7, v6);
  return result;
}
