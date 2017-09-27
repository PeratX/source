

int __fastcall DBChunkStorageKey::DBChunkStorageKey(int a1, LevelChunk *a2)
{
  LevelChunk *v2; // r4@1
  int v3; // r5@1
  char *v4; // r6@1
  int v5; // r0@1

  v2 = a2;
  v3 = a1;
  v4 = j_LevelChunk::getPosition(a2);
  v5 = j_LevelChunk::getDimensionId(v2);
  *(_QWORD *)v3 = *(_QWORD *)v4;
  *(_DWORD *)(v3 + 8) = v5;
  return v3;
}


int __fastcall DBChunkStorageKey::asSpan(int result, int a2)
{
  signed int v2; // r3@1

  v2 = 12;
  if ( !*(_DWORD *)(a2 + 8) )
    v2 = 8;
  *(_DWORD *)result = v2;
  *(_DWORD *)(result + 4) = a2;
  return result;
}


int __fastcall DBChunkStorageKey::DBChunkStorageKey(int result, const ChunkPos *a2, int a3)
{
  *(_QWORD *)result = *(_QWORD *)a2;
  *(_DWORD *)(result + 8) = a3;
  return result;
}
