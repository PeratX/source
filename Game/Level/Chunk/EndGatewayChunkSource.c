

char *__fastcall EndGatewayChunkSource::getExitOrigin(EndGatewayChunkSource *this)
{
  return (char *)this + 172;
}


int __fastcall EndGatewayChunkSource::EndGatewayChunkSource(int a1, ChunkSource *a2, int a3, int a4, int a5)
{
  int v5; // r6@1
  int v6; // r5@1
  int v7; // r4@1
  __int64 v8; // r0@1
  int v9; // r2@1
  int v10; // r9@3
  int v11; // r12@3
  int v12; // lr@3
  int v13; // r3@3
  signed int v14; // r1@3
  int v15; // r0@3
  int v16; // r7@3
  signed int v17; // r6@3
  signed int v18; // r7@7
  int v19; // r5@7
  int v20; // r9@7
  signed int v21; // r2@7
  int v22; // r3@7
  signed int v23; // r2@7
  int v24; // r7@7
  char v26; // [sp+8h] [bp-E0h]@1
  void (*v27)(void); // [sp+10h] [bp-D8h]@1
  char v28; // [sp+18h] [bp-D0h]@1
  int v29; // [sp+98h] [bp-50h]@3
  int v30; // [sp+9Ch] [bp-4Ch]@3
  int v31; // [sp+A0h] [bp-48h]@3
  int v32; // [sp+A4h] [bp-44h]@3
  int v33; // [sp+A8h] [bp-40h]@3
  signed int v34; // [sp+ACh] [bp-3Ch]@3
  int v35; // [sp+B0h] [bp-38h]@3
  int v36; // [sp+B4h] [bp-34h]@11
  int v37; // [sp+B8h] [bp-30h]@11
  int v38; // [sp+BCh] [bp-2Ch]@11
  int v39; // [sp+C0h] [bp-28h]@11
  int v40; // [sp+C4h] [bp-24h]@3

  v5 = a3;
  v6 = a4;
  v7 = a1;
  ChunkViewSource::ChunkViewSource(a1, a2, 1);
  HIDWORD(v8) = a5;
  *(_DWORD *)v7 = &off_2719488;
  *(_DWORD *)(v7 + 160) = *(_DWORD *)v5;
  *(_DWORD *)(v7 + 164) = *(_DWORD *)(v5 + 4);
  *(_DWORD *)(v7 + 168) = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v7 + 172) = *(_DWORD *)v6;
  *(_DWORD *)(v7 + 176) = *(_DWORD *)(v6 + 4);
  LODWORD(v8) = *(_DWORD *)(v6 + 8);
  *(_QWORD *)(v7 + 180) = v8;
  HIDWORD(v8) = *(_DWORD *)(v7 + 156);
  v9 = *(_DWORD *)(v7 + 24);
  v27 = 0;
  j_ChunkSource::createEmptyView((int)&v28, SHIDWORD(v8), v9, 1, (int)&v26);
  j_GridArea<std::shared_ptr<LevelChunk>>::clear(v7 + 28);
  j_GridArea<std::shared_ptr<LevelChunk>>::_move(v7 + 28, (int)&v28);
  j_GridArea<std::shared_ptr<LevelChunk>>::~GridArea((int)&v28);
  if ( v27 )
    v27();
  v10 = *(_DWORD *)(v7 + 172);
  v11 = *(_DWORD *)(v7 + 176);
  v12 = *(_DWORD *)(v7 + 180);
  v13 = *(_DWORD *)(v7 + 184);
  v14 = *(_WORD *)(v7 + 150);
  v15 = *(_WORD *)(v7 + 152);
  v16 = *(_DWORD *)(v7 + 120);
  v35 = 0;
  v17 = v14;
  v33 = 0;
  v34 = 0;
  v31 = 0;
  v32 = 0;
  v30 = 0;
  v40 = v16;
  v29 = (v10 - v13) >> 4;
  if ( v11 - v13 > v14 )
    v17 = v11 - v13;
  if ( v11 - v13 > v15 )
    v17 = v15;
  v30 = v17 >> 4;
  v18 = v12 - v13;
  v31 = (v12 - v13) >> 4;
  v19 = (v10 + v13) >> 4;
  v20 = v19 - ((v10 - v13) >> 4) + 1;
  v21 = v12 + v13;
  v22 = v13 + v11;
  v32 = v19;
  v23 = v21 >> 4;
  v24 = v23 - (v18 >> 4) + 1;
  if ( v22 > v14 )
    v14 = v22;
  if ( v22 > v15 )
    v14 = v15;
  v33 = v14 >> 4;
  v34 = v23;
  v35 = v20;
  v36 = (v14 >> 4) - (v17 >> 4) + 1;
  v37 = v24;
  v38 = v24 * v20;
  v39 = v36 * v24 * v20;
  j_GridArea<std::shared_ptr<LevelChunk>>::move(v7 + 28, (int)&v29);
  return v7;
}


void __fastcall EndGatewayChunkSource::~EndGatewayChunkSource(EndGatewayChunkSource *this)
{
  EndGatewayChunkSource::~EndGatewayChunkSource(this);
}


void __fastcall EndGatewayChunkSource::~EndGatewayChunkSource(EndGatewayChunkSource *this)
{
  ChunkSource *v1; // r0@1

  v1 = EndGatewayChunkSource::~EndGatewayChunkSource(this);
  j_j_j__ZdlPv_6((void *)v1);
}


ChunkSource *__fastcall EndGatewayChunkSource::~EndGatewayChunkSource(EndGatewayChunkSource *this)
{
  EndGatewayChunkSource *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_2719488;
  (*(void (**)(void))(**((_DWORD **)this + 39) + 48))();
  j_GridArea<std::shared_ptr<LevelChunk>>::clear((int)v1 + 28);
  (*(void (**)(void))(**((_DWORD **)v1 + 39) + 52))();
  *(_DWORD *)v1 = &off_271830C;
  j_GridArea<std::shared_ptr<LevelChunk>>::~GridArea((int)v1 + 28);
  return j_j_j__ZN11ChunkSourceD2Ev_0(v1);
}


char *__fastcall EndGatewayChunkSource::getEntryPos(EndGatewayChunkSource *this)
{
  return (char *)this + 160;
}
