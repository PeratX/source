

_BOOL4 __fastcall BlockID::hasProperty(_BYTE *a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1
  __int64 v6; // r0@1

  v4 = a4;
  v5 = a3;
  v6 = Block::getProperties((Block *)Block::mBlocks[*a1]);
  return ((unsigned int)v6 & v5 | HIDWORD(v6) & v4) != 0;
}
