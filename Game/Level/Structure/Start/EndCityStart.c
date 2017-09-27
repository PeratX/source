

_DWORD *__fastcall EndCityStart::EndCityStart(_DWORD *a1)
{
  _DWORD *v1; // r4@1

  v1 = a1;
  j___aeabi_memclr4_0((int)(a1 + 1), 44);
  *v1 = &off_27236E0;
  return v1;
}


signed int __fastcall EndCityStart::getType(EndCityStart *this)
{
  return 1;
}


EndCityStart *__fastcall EndCityStart::EndCityStart(EndCityStart *this, int a2, int a3, int a4, ChunkPos *a5)
{
  EndCityStart *v5; // r4@1
  __int64 v6; // kr00_8@1

  v5 = this;
  v6 = *(_QWORD *)a5;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)((char *)this + 28) = v6;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *(_DWORD *)this = &off_27236E0;
  j_EndCityStart::_create(this, (Dimension *)a2, (TheEndGenerator *)a3, (Random *)a4, a5);
  return v5;
}


signed int __fastcall EndCityStart::_create(EndCityStart *this, Dimension *a2, TheEndGenerator *a3, Random *a4, const ChunkPos *a5)
{
  TheEndGenerator *v5; // r11@1
  Dimension *v6; // r8@1
  EndCityStart *v7; // r10@1
  unsigned int v8; // r0@1
  signed int v9; // r2@1
  int v10; // r1@1
  int v11; // r0@2
  int *v12; // r6@2
  int v13; // r5@2
  char v14; // r7@3
  TheEndGenerator *v15; // r3@3
  int v16; // r0@3
  signed int result; // r0@4
  __int64 v18; // r1@5
  Level *v19; // r0@5
  int v20; // r0@5
  Random *v21; // [sp+8h] [bp-10h]@1
  int v22; // [sp+Ch] [bp-Ch]@5
  int v23; // [sp+10h] [bp-8h]@5
  int v24; // [sp+14h] [bp-4h]@5
  unsigned int v25; // [sp+18h] [bp+0h]@1
  unsigned int v26; // [sp+1Ch] [bp+4h]@1
  int v27; // [sp+9DCh] [bp+9C4h]@1
  char v28; // [sp+9E0h] [bp+9C8h]@1
  int v29; // [sp+9E4h] [bp+9CCh]@1
  int v30; // [sp+9E8h] [bp+9D0h]@3

  v5 = a3;
  v6 = a2;
  v7 = this;
  v21 = a4;
  v8 = *(_QWORD *)a5 + 10387313 * (*(_QWORD *)a5 >> 32);
  v9 = 1;
  v25 = v8;
  v27 = 625;
  v10 = 0;
  v28 = 0;
  v29 = 0;
  v26 = v8;
  do
  {
    v11 = v8 ^ (v8 >> 30);
    v12 = (int *)(&v25 + v10);
    v13 = v10++ + 1812433253 * v11;
    v8 = v9++ + 1812433253 * v11;
    v12[2] = v13 + 1;
  }
  while ( v10 != 397 );
  v27 = 624;
  v30 = 398;
  v14 = j_Random::_genRandInt32((Random *)&v25);
  v16 = j_EndCityStart::getYPositionForFeature(a5, (const ChunkPos *)v6, (Dimension *)v5, v15);
  if ( v16 >= 60 )
    v18 = *(_QWORD *)a5;
    v22 = 16 * *(_QWORD *)a5 | 8;
    v23 = v16;
    v24 = 16 * HIDWORD(v18) | 8;
    v19 = (Level *)j_Dimension::getLevel(v6);
    v20 = j_Level::getStructureManager(v19);
    j_EndCityPieces::startHouseTower(v20, (const BlockPos *)&v22, v14 & 3, (int)v7 + 36, v21);
    j_StructureStart::calculateBoundingBox(v7);
    result = 1;
  else
    result = 0;
  *((_BYTE *)v7 + 48) = result;
  return result;
}


int __fastcall EndCityStart::getYPositionForFeature(EndCityStart *this, const ChunkPos *a2, Dimension *a3, TheEndGenerator *a4)
{
  EndCityStart *v4; // r5@1
  Dimension *v5; // r6@1
  const ChunkPos *v6; // r8@1
  unsigned int v7; // r0@1
  signed int v8; // r2@1
  int v9; // r1@1
  int v10; // r0@2
  int *v11; // r4@2
  int v12; // r5@2
  unsigned int v13; // r0@3
  char v14; // r0@4
  unsigned int v15; // r10@4
  unsigned int v16; // r9@4
  __int16 v17; // r0@6
  __int16 v18; // r5@6
  int v19; // r0@6
  int v20; // r11@6
  int v21; // r0@6
  int v22; // r6@6
  int v23; // r0@6
  int v24; // r7@6
  int v25; // r0@6
  int v26; // r4@6
  RakNet *v28; // [sp+8h] [bp-95D8h]@1
  char v29; // [sp+Ch] [bp-95D4h]@6
  char v30; // [sp+Dh] [bp-95D3h]@6
  __int16 v31; // [sp+Eh] [bp-95D2h]@6
  char v32; // [sp+10h] [bp-95D0h]@6
  char v33; // [sp+11h] [bp-95CFh]@6
  __int16 v34; // [sp+12h] [bp-95CEh]@6
  char v35; // [sp+14h] [bp-95CCh]@6
  char v36; // [sp+15h] [bp-95CBh]@6
  __int16 v37; // [sp+16h] [bp-95CAh]@6
  char v38; // [sp+18h] [bp-95C8h]@6
  char v39; // [sp+19h] [bp-95C7h]@6
  __int16 v40; // [sp+1Ah] [bp-95C6h]@6
  unsigned int v41; // [sp+1Ch] [bp-95C4h]@1
  unsigned int v42; // [sp+20h] [bp-95C0h]@1
  int v43; // [sp+9E0h] [bp-8C00h]@1
  char v44; // [sp+9E4h] [bp-8BFCh]@1
  int v45; // [sp+9E8h] [bp-8BF8h]@1
  int v46; // [sp+9ECh] [bp-8BF4h]@3
  char *v47; // [sp+9F0h] [bp-8BF0h]@1
  int *v48; // [sp+9F4h] [bp-8BECh]@1
  int v49; // [sp+9F8h] [bp-8BE8h]@1
  int v50; // [sp+9FCh] [bp-8BE4h]@1
  int v51; // [sp+A00h] [bp-8BE0h]@1
  int v52; // [sp+A04h] [bp-8BDCh]@1
  int v53; // [sp+A08h] [bp-8BD8h]@1
  char v54; // [sp+A10h] [bp-8BD0h]@1
  int v55; // [sp+8A10h] [bp-BD0h]@1

  v4 = this;
  v5 = a3;
  v6 = a2;
  v28 = _stack_chk_guard;
  j_LevelChunk::LevelChunk(&v55, (Dimension *)a2, (__int64 *)this, 0);
  v50 = 0;
  v49 = 0;
  v51 = 16;
  v52 = 128;
  v53 = 16;
  v47 = &v54;
  v48 = &v55;
  (*(void (__fastcall **)(Dimension *, char **, _DWORD, _DWORD))(*(_DWORD *)v5 + 80))(
    v5,
    &v47,
    *(_QWORD *)v4,
    *(_QWORD *)v4 >> 32);
  j_LevelChunk::setAllBlockIDs((int)&v55, (int)&v54, (int)&v55, (signed __int16)v52);
  v7 = *(_QWORD *)v4 + 10387313 * (*(_QWORD *)v4 >> 32);
  v8 = 1;
  v41 = v7;
  v43 = 625;
  v9 = 0;
  v44 = 0;
  v45 = 0;
  v42 = v7;
  do
  {
    v10 = v7 ^ (v7 >> 30);
    v11 = (int *)(&v41 + v9);
    v12 = v9++ + 1812433253 * v10;
    v7 = v8++ + 1812433253 * v10;
    v11[2] = v12 + 1;
  }
  while ( v9 != 397 );
  v43 = 624;
  v46 = 398;
  v13 = (unsigned __int16)((j_Random::_genRandInt32((Random *)&v41) & 3) - 1);
  if ( v13 >= 3 )
    LOBYTE(v16) = 12;
    LOBYTE(v15) = 12;
  else
    v14 = 8 * v13;
    v15 = 0xC0202u >> v14;
    v16 = 0x2020Cu >> v14;
  v17 = *((_WORD *)v6 + 60);
  v38 = 7;
  v39 = 7;
  v18 = v17 - 1;
  v40 = v17 - 1;
  v19 = (*(int (__fastcall **)(const ChunkPos *))(*(_DWORD *)v6 + 192))(v6);
  v20 = j_LevelChunk::getAboveTopSolidBlock((LevelChunk *)&v55, (const ChunkBlockPos *)&v38, v19, 0, 0);
  v35 = 7;
  v36 = v16;
  v37 = v18;
  v21 = (*(int (__fastcall **)(const ChunkPos *))(*(_DWORD *)v6 + 192))(v6);
  v22 = j_LevelChunk::getAboveTopSolidBlock((LevelChunk *)&v55, (const ChunkBlockPos *)&v35, v21, 0, 0);
  v32 = v15;
  v33 = 7;
  v34 = v18;
  v23 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v6 + 192))(v6);
  v24 = j_LevelChunk::getAboveTopSolidBlock((LevelChunk *)&v55, (const ChunkBlockPos *)&v32, v23, 0, 0);
  v29 = v15;
  v30 = v16;
  v31 = v18;
  v25 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v6 + 192))(v6);
  v26 = j_LevelChunk::getAboveTopSolidBlock((LevelChunk *)&v55, (const ChunkBlockPos *)&v29, v25, 0, 0);
  j_LevelChunk::~LevelChunk((LevelChunk *)&v55);
  if ( v20 < v22 )
    v22 = v20;
  if ( v24 < v26 )
    v26 = v24;
  if ( v22 < v26 )
    v26 = v22;
  if ( _stack_chk_guard != v28 )
    j___stack_chk_fail_0(_stack_chk_guard - v28);
  return v26;
}


void __fastcall EndCityStart::~EndCityStart(EndCityStart *this)
{
  EndCityStart::~EndCityStart(this);
}


void __fastcall EndCityStart::~EndCityStart(EndCityStart *this)
{
  EndCityStart *v1; // r4@1
  char *v2; // r5@1 OVERLAPPED
  char *v3; // r6@1 OVERLAPPED

  v1 = this;
  *(_DWORD *)this = &off_271946C;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 36);
  if ( v2 != v3 )
  {
    do
    {
      if ( *(_DWORD *)v2 )
        (*(void (**)(void))(**(_DWORD **)v2 + 4))();
      *(_DWORD *)v2 = 0;
      v2 += 4;
    }
    while ( v3 != v2 );
    v2 = (char *)*((_DWORD *)v1 + 9);
  }
  if ( v2 )
    j_operator delete(v2);
  j_j_j__ZdlPv_7((void *)v1);
}
