

_DWORD *__fastcall NetherFortressStart::NetherFortressStart(_DWORD *a1)
{
  _DWORD *v1; // r4@1

  v1 = a1;
  j___aeabi_memclr4_0((int)(a1 + 1), 44);
  *v1 = &off_272397C;
  return v1;
}


signed int __fastcall NetherFortressStart::getType(NetherFortressStart *this)
{
  return 2;
}


int __fastcall NetherFortressStart::NetherFortressStart(int a1, int a2, Random *a3, int a4, int a5)
{
  int v5; // r9@1
  int v6; // r8@1
  Random *v7; // r5@1
  _QWORD *v8; // r10@1
  NBStartPiece *v9; // r7@1
  __int64 v10; // r0@1
  int v11; // r7@5
  int *v12; // r0@6
  int *v13; // r2@6
  unsigned int v14; // r1@7
  int *v15; // r0@9
  int v16; // r1@9
  int v17; // r4@9
  bool v18; // zf@9
  NBStartPiece *v20; // [sp+4h] [bp-24h]@1

  v5 = a1;
  v6 = a4;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  v7 = a3;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 28) = a4;
  *(_DWORD *)(a1 + 32) = a5;
  *(_DWORD *)(a1 + 36) = 0;
  v8 = (_QWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)a1 = &off_272397C;
  v9 = (NBStartPiece *)j_operator new(0x4Cu);
  j_NBStartPiece::NBStartPiece(v9, v7, 16 * v6 | 2, 16 * a5 | 2);
  v20 = v9;
  v10 = *(_QWORD *)(v5 + 40);
  if ( (_DWORD)v10 == HIDWORD(v10) )
  {
    j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>(
      v8,
      (int *)&v20);
    if ( v20 )
      (*(void (**)(void))(*(_DWORD *)v20 + 4))();
  }
  else
    v20 = 0;
    *(_DWORD *)v10 = v9;
    *(_DWORD *)(v5 + 40) = v10 + 4;
  v20 = 0;
  v11 = *(_DWORD *)(*(_DWORD *)(v5 + 40) - 4);
  (*(void (__fastcall **)(_DWORD, _DWORD, _QWORD *, Random *))(*(_DWORD *)v11 + 16))(
    *(_DWORD *)(*(_DWORD *)(v5 + 40) - 4),
    v8,
    v7);
  while ( 1 )
    v13 = (int *)(*(_QWORD *)(v11 + 64) >> 32);
    v12 = (int *)*(_QWORD *)(v11 + 64);
    if ( v12 == v13 )
      break;
    v14 = 0;
    if ( v13 - v12 )
    {
      v14 = j_Random::_genRandInt32(v7) % (v13 - v12);
      v13 = (int *)(*(_QWORD *)(v11 + 64) >> 32);
      v12 = (int *)*(_QWORD *)(v11 + 64);
    }
    v15 = &v12[v14];
    v16 = (int)(v15 + 1);
    v17 = *v15;
    v18 = v15 + 1 == v13;
    if ( v15 + 1 != v13 )
      v18 = v13 == (int *)v16;
    if ( !v18 )
      j___aeabi_memmove4_0((int)v15, v16);
      v13 = *(int **)(v11 + 68);
    *(_DWORD *)(v11 + 68) = v13 - 1;
    (*(void (__fastcall **)(int, int, _QWORD *, Random *))(*(_DWORD *)v17 + 16))(v17, v11, v8, v7);
  j_StructureStart::calculateBoundingBox((StructureStart *)v5);
  j_StructureStart::moveInsideHeights((StructureStart *)v5, v7, 48, 70);
  return v5;
}


void __fastcall NetherFortressStart::~NetherFortressStart(NetherFortressStart *this)
{
  NetherFortressStart *v1; // r4@1
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


void __fastcall NetherFortressStart::~NetherFortressStart(NetherFortressStart *this)
{
  NetherFortressStart::~NetherFortressStart(this);
}
