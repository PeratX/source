

signed int __fastcall EmptyChunkSource::postProcess(EmptyChunkSource *this, ChunkViewSource *a2)
{
  return 1;
}


void __fastcall EmptyChunkSource::~EmptyChunkSource(EmptyChunkSource *this)
{
  EmptyChunkSource::~EmptyChunkSource(this);
}


unsigned __int8 *__fastcall EmptyChunkSource::loadChunk(EmptyChunkSource *this, LevelChunk *a2, bool a3)
{
  LevelChunk *v3; // r4@1

  v3 = a2;
  LevelChunk::setFinalized((int)a2, 2);
  LevelChunk::setSaved(v3);
  return j_j_j__ZN10LevelChunk11changeStateE10ChunkStateS0__0((int)v3, 1, 8u);
}


void __fastcall EmptyChunkSource::~EmptyChunkSource(EmptyChunkSource *this)
{
  ChunkSource *v1; // r0@1

  v1 = ChunkSource::~ChunkSource(this);
  j_j_j__ZdlPv_6((void *)v1);
}


_DWORD *__fastcall EmptyChunkSource::EmptyChunkSource(int a1, Dimension *a2)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)ChunkSource::ChunkSource(a1, a2, 16);
  *result = &off_2718360;
  return result;
}
