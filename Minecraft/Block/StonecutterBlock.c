

signed int __fastcall StonecutterBlock::use(StonecutterBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  Player *v4; // r5@1
  const BlockPos *v5; // r4@1

  v4 = a2;
  v5 = a3;
  if ( !Abilities::getBool((int)a2 + 4320, (int **)&Abilities::INSTABUILD) )
    (*(void (__fastcall **)(Player *, const BlockPos *))(*(_DWORD *)v4 + 1272))(v4, v5);
  return 1;
}


void __fastcall StonecutterBlock::~StonecutterBlock(StonecutterBlock *this)
{
  StonecutterBlock::~StonecutterBlock(this);
}


void __fastcall StonecutterBlock::~StonecutterBlock(StonecutterBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall StonecutterBlock::isCraftingBlock(StonecutterBlock *this)
{
  return 1;
}


Block *__fastcall StonecutterBlock::StonecutterBlock(Block *a1, const void **a2, char a3)
{
  Block *v3; // r4@1
  char v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(3);
  Block::Block((int)v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_27152EC;
  Block::setIsInteraction(v3, 1);
  return v3;
}
