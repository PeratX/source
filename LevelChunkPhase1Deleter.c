

void __fastcall LevelChunkPhase1Deleter::operator()(int a1, LevelChunk *a2)
{
  LevelChunkPhase1Deleter::operator()(a1, a2);
}


void __fastcall LevelChunkPhase1Deleter::operator()(int a1, LevelChunk *a2)
{
  LevelChunk *v2; // r4@1
  int v3; // r0@2
  LevelChunk *v4; // r0@3
  LevelChunk *v5; // [sp+4h] [bp-Ch]@2

  v2 = a2;
  if ( a2 )
  {
    v3 = LevelChunk::getDimension(a2);
    v5 = v2;
    Dimension::acquireDiscardedChunk(v3, &v5);
    if ( v5 )
    {
      v4 = LevelChunk::~LevelChunk(v5);
      LevelChunk::operator delete((void *)v4);
    }
  }
}
