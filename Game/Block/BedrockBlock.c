

unsigned int __fastcall BedrockBlock::isInfiniburnBlock(BedrockBlock *this, int a2)
{
  unsigned int result; // r0@2

  if ( a2 == 1 )
    result = 1;
  else
    result = j_Block::isInfiniburnBlock(this, a2);
  return result;
}


void __fastcall BedrockBlock::~BedrockBlock(BedrockBlock *this)
{
  BedrockBlock::~BedrockBlock(this);
}


_DWORD *__fastcall BedrockBlock::BedrockBlock(_DWORD *a1, const void **a2, char a3)
{
  _DWORD *v3; // r6@1
  char v4; // r4@1
  const void **v5; // r5@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = j_Material::getMaterial(3);
  j_Block::Block((int)v3, v5, v4, v6);
  *v3 = &off_272268C;
  return v3;
}


void __fastcall BedrockBlock::~BedrockBlock(BedrockBlock *this)
{
  Block *v1; // r0@1

  v1 = j_Block::~Block(this);
  j_j_j__ZdlPv_7((void *)v1);
}
