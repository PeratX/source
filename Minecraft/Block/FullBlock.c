

int __fastcall FullBlock::getBlock(FullBlock *this)
{
  return Block::mBlocks[*(_BYTE *)this];
}
