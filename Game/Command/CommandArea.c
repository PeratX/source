

ChunkSource **__fastcall CommandArea::CommandArea(ChunkSource **a1, ChunkSource **a2)
{
  ChunkSource **v2; // r4@1
  ChunkSource *v3; // r0@1
  BlockSourceListener *v4; // r6@1
  int v5; // r0@1

  v2 = a1;
  v3 = *a2;
  *a2 = 0;
  *v2 = v3;
  v4 = (BlockSourceListener *)j_ChunkSource::getLevel(v3);
  v5 = j_ChunkSource::getDimension(*v2);
  j_BlockSource::BlockSource((int)(v2 + 2), v4, v5, (int)*v2, 1, 0);
  return v2;
}
