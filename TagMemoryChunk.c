

TagMemoryChunk *__fastcall TagMemoryChunk::~TagMemoryChunk(TagMemoryChunk *this)
{
  TagMemoryChunk *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 2);
  if ( v2 )
    operator delete[](v2);
  *((_DWORD *)v1 + 2) = 0;
  return v1;
}
