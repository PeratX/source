

int __fastcall ChunkBlockPos::ChunkBlockPos(int result, int a2)
{
  __int64 v2; // r2@1
  int v3; // r1@1

  v2 = *(_QWORD *)a2;
  v3 = *(_DWORD *)(a2 + 8);
  *(_BYTE *)result = v2 & 0xF;
  *(_BYTE *)(result + 1) = v3 & 0xF;
  *(_WORD *)(result + 2) = WORD2(v2);
  return result;
}
