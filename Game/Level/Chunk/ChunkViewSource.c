

int __fastcall ChunkViewSource::move(ChunkViewSource *this, const BlockPos *a2, const BlockPos *a3)
{
  ChunkViewSource *v3; // r5@1
  const BlockPos *v4; // r6@1
  const BlockPos *v5; // r4@1
  signed int v6; // r1@1
  int v7; // r2@1
  int v8; // r3@1
  int v9; // r0@1
  int v10; // r4@1
  int v11; // r6@1
  int v12; // r4@1
  int result; // r0@3
  char v14; // [sp+8h] [bp-D0h]@2
  int (*v15)(void); // [sp+10h] [bp-C8h]@1
  int v16; // [sp+18h] [bp-C0h]@1
  int v17; // [sp+1Ch] [bp-BCh]@1
  int v18; // [sp+20h] [bp-B8h]@1
  int v19; // [sp+24h] [bp-B4h]@1
  int v20; // [sp+28h] [bp-B0h]@1
  int v21; // [sp+2Ch] [bp-ACh]@1
  int v22; // [sp+30h] [bp-A8h]@1
  int v23; // [sp+34h] [bp-A4h]@1
  int v24; // [sp+38h] [bp-A0h]@1
  int v25; // [sp+3Ch] [bp-9Ch]@1
  int v26; // [sp+40h] [bp-98h]@1
  int v27; // [sp+44h] [bp-94h]@1
  char v28; // [sp+48h] [bp-90h]@2

  v3 = this;
  v4 = a2;
  v5 = a3;
  _aeabi_memclr8(&v16, 36);
  v27 = 16;
  v6 = *((_DWORD *)v4 + 2);
  v7 = *(_DWORD *)v5 >> 4;
  v8 = *((_DWORD *)v5 + 2) >> 4;
  v9 = v7 - (*(_DWORD *)v4 >> 4) + 1;
  v10 = v8 - (v6 >> 4) + 1;
  v16 = *(_DWORD *)v4 >> 4;
  v17 = 0;
  v11 = v10 * v9;
  v18 = v6 >> 4;
  v19 = v7;
  v20 = 0;
  v21 = v8;
  v22 = v9;
  v23 = 1;
  v24 = v8 - (v6 >> 4) + 1;
  v25 = v10 * v9;
  v12 = (int)v3 + 28;
  v26 = v11;
  v15 = 0;
  if ( !*((_DWORD *)v3 + 30) )
  {
    ChunkSource::createEmptyView((int)&v28, *((_DWORD *)v3 + 39), *((_DWORD *)v3 + 6), 0, (int)&v14);
    GridArea<std::shared_ptr<LevelChunk>>::clear((int)v3 + 28);
    GridArea<std::shared_ptr<LevelChunk>>::_move(v12, (int)&v28);
    GridArea<std::shared_ptr<LevelChunk>>::~GridArea((int)&v28);
  }
  result = GridArea<std::shared_ptr<LevelChunk>>::move(v12, (int)&v16);
  if ( v15 )
    result = v15();
  return result;
}


ChunkSource *__fastcall ChunkViewSource::~ChunkViewSource(ChunkViewSource *this)
{
  ChunkViewSource *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271830C;
  GridArea<std::shared_ptr<LevelChunk>>::~GridArea((int)this + 28);
  return j_j_j__ZN11ChunkSourceD2Ev_0(v1);
}


int __fastcall ChunkViewSource::move(ChunkViewSource *this, const BlockPos *a2, int a3)
{
  int v3; // r3@1
  int v4; // r12@1
  int v5; // lr@1
  int v7; // [sp+0h] [bp-20h]@1
  int v8; // [sp+4h] [bp-1Ch]@1
  int v9; // [sp+8h] [bp-18h]@1
  int v10; // [sp+Ch] [bp-14h]@1
  int v11; // [sp+10h] [bp-10h]@1
  int v12; // [sp+14h] [bp-Ch]@1

  v3 = *(_DWORD *)a2;
  v4 = *((_DWORD *)a2 + 1);
  v5 = *((_DWORD *)a2 + 2);
  v10 = *(_DWORD *)a2 - a3;
  v11 = v4 - a3;
  v12 = v5 - a3;
  v7 = v3 + a3;
  v8 = v4 + a3;
  v9 = v5 + a3;
  return ChunkViewSource::move(this, (const BlockPos *)&v10, (const BlockPos *)&v7);
}


int __fastcall ChunkViewSource::getExistingChunk(int result, const ChunkPos *a2, int a3)
{
  int v3; // r4@0
  int v4; // lr@0
  __int64 v5; // kr00_8@1
  signed int v6; // r12@2
  bool v7; // nf@2
  unsigned __int8 v8; // vf@2
  int v9; // r5@5
  bool v10; // zf@5
  bool v11; // nf@5
  unsigned __int8 v12; // vf@5
  int v13; // r6@9
  bool v14; // nf@9
  unsigned __int8 v15; // vf@9
  int v16; // r6@10
  int v17; // r1@14
  int v18; // r1@14
  unsigned int v19; // r1@17

  v5 = *(_QWORD *)((char *)a2 + 124);
  if ( HIDWORD(v5) == (_DWORD)v5 )
    goto LABEL_22;
  v6 = *((_DWORD *)a2 + 28);
  v8 = __OFSUB__(v6, 1);
  v7 = v6 - 1 < 0;
  if ( v6 >= 1 )
  {
    v4 = *(_DWORD *)a3;
    v3 = *((_DWORD *)a2 + 19);
    v8 = __OFSUB__(*(_DWORD *)a3, v3);
    v7 = *(_DWORD *)a3 - v3 < 0;
  }
  if ( v7 ^ v8 )
  v9 = *((_DWORD *)a2 + 22);
  v12 = __OFSUB__(v4, v9);
  v10 = v4 == v9;
  v11 = v4 - v9 < 0;
  if ( v4 <= v9 )
    v9 = *((_DWORD *)a2 + 20);
    v12 = 0;
    v10 = v9 == 0;
    v11 = v9 < 0;
  if ( !((unsigned __int8)(v11 ^ v12) | v10) )
  v13 = *((_DWORD *)a2 + 23);
  v15 = 0;
  v14 = v13 < 0;
  if ( v13 >= 0 )
    a3 = *(_DWORD *)(a3 + 4);
    v16 = *((_DWORD *)a2 + 21);
    v15 = __OFSUB__(a3, v16);
    v14 = a3 - v16 < 0;
  if ( v14 ^ v15 || a3 > *((_DWORD *)a2 + 24) )
LABEL_22:
    *(_DWORD *)result = 0;
    *(_DWORD *)(result + 4) = 0;
  else
    v17 = v4 - v3 + *((_DWORD *)a2 + 25) * (a3 - HIDWORD(v5)) - v6 * v9;
    *(_DWORD *)result = *(_DWORD *)(v5 + 8 * v17);
    v18 = *(_DWORD *)(v5 + 8 * v17 + 4);
    *(_DWORD *)(result + 4) = v18;
    if ( v18 )
    {
      result = v18 + 4;
      if ( &pthread_create )
      {
        __dmb();
        do
          v19 = __ldrex((unsigned int *)result);
        while ( __strex(v19 + 1, (unsigned int *)result) );
      }
      else
        ++*(_DWORD *)result;
    }
  return result;
}


void __fastcall ChunkViewSource::acquireDiscarded(int a1, LevelChunk **a2)
{
  ChunkViewSource::acquireDiscarded(a1, a2);
}


int *__fastcall ChunkViewSource::getRandomChunk(ChunkViewSource *this, Random *a2, Random *a3)
{
  Random *v3; // r5@1
  ChunkViewSource *v4; // r4@1
  int *result; // r0@2
  int v6; // [sp+0h] [bp-18h]@2

  v3 = a2;
  v4 = this;
  if ( (unsigned int)*(_QWORD *)((char *)a2 + 124) == *(_QWORD *)((char *)a2 + 124) >> 32 )
  {
    result = 0;
    *(_DWORD *)v4 = 0;
    *((_DWORD *)v4 + 1) = 0;
  }
  else
    TickUtil::getRandomInBounds((int)&v6, (int)a2 + 76, a3);
    result = ChunkSource::getAvailableChunk(v4, v3);
  return result;
}


int __fastcall ChunkViewSource::ChunkViewSource(int a1, ChunkSource *a2, int a3)
{
  ChunkSource *v3; // r5@1
  int v4; // r4@1
  int v5; // r6@1
  Dimension *v6; // r0@1
  int result; // r0@1

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = (Dimension *)ChunkSource::getDimension(a2);
  ChunkSource::ChunkSource(v4, v6, 16);
  *(_DWORD *)v4 = &off_271830C;
  *(_DWORD *)(v4 + 24) = v5;
  *(_DWORD *)(v4 + 36) = 0;
  *(_DWORD *)(v4 + 52) = 0;
  *(_DWORD *)(v4 + 68) = 0;
  _aeabi_memclr4(v4 + 76, 73);
  *(_WORD *)(v4 + 150) = -32768;
  *(_WORD *)(v4 + 152) = 0x7FFF;
  result = v4;
  *(_DWORD *)(v4 + 156) = v3;
  return result;
}


void __fastcall ChunkViewSource::~ChunkViewSource(ChunkViewSource *this)
{
  ChunkViewSource *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271830C;
  GridArea<std::shared_ptr<LevelChunk>>::~GridArea((int)this + 28);
  ChunkSource::~ChunkSource(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


char *__fastcall ChunkViewSource::getArea(ChunkViewSource *this)
{
  return (char *)this + 28;
}


void __fastcall ChunkViewSource::~ChunkViewSource(ChunkViewSource *this)
{
  ChunkViewSource::~ChunkViewSource(this);
}


void __fastcall ChunkViewSource::acquireDiscarded(int a1, LevelChunk **a2)
{
  LevelChunk *v2; // r3@1
  void (*v3)(void); // r2@1
  LevelChunk *v4; // r0@2
  LevelChunk *v5; // [sp+4h] [bp-Ch]@1

  v2 = *a2;
  v3 = *(void (**)(void))(**(_DWORD **)(a1 + 156) + 56);
  *a2 = 0;
  v5 = v2;
  v3();
  if ( v5 )
  {
    v4 = LevelChunk::~LevelChunk(v5);
    LevelChunk::operator delete((void *)v4);
  }
}


int __fastcall ChunkViewSource::move(int a1, int a2, char a3, int a4)
{
  int v4; // r6@1
  int v5; // r5@1
  char v7; // [sp+8h] [bp-90h]@2

  v4 = a2;
  v5 = a1 + 28;
  if ( !*(_DWORD *)(a1 + 120) )
  {
    ChunkSource::createEmptyView((int)&v7, *(_DWORD *)(a1 + 156), *(_DWORD *)(a1 + 24), a3, a4);
    GridArea<std::shared_ptr<LevelChunk>>::clear(v5);
    GridArea<std::shared_ptr<LevelChunk>>::_move(v5, (int)&v7);
    GridArea<std::shared_ptr<LevelChunk>>::~GridArea((int)&v7);
  }
  return GridArea<std::shared_ptr<LevelChunk>>::move(v5, v4);
}


int __fastcall ChunkViewSource::createNewChunk(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  return result;
}


char *__fastcall ChunkViewSource::getArea(ChunkViewSource *this)
{
  return (char *)this + 28;
}
