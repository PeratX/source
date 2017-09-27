

void __fastcall StartPiece::~StartPiece(StartPiece *this)
{
  StartPiece::~StartPiece(this);
}


StartPiece *__fastcall StartPiece::~StartPiece(StartPiece *this)
{
  StartPiece *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11
  void *v7; // r0@16
  void *v8; // r0@18
  int v9; // r1@20
  void *v10; // r0@20
  unsigned int *v12; // r2@22
  signed int v13; // r1@24

  v1 = this;
  *(_DWORD *)this = &off_2724304;
  v3 = (void *)(*(_QWORD *)((char *)this + 84) >> 32);
  v2 = (void *)*(_QWORD *)((char *)this + 84);
  if ( v2 != v3 )
  {
    do
    {
      v6 = (int *)(*(_DWORD *)v2 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
        }
        else
          v5 = (*v4)--;
        if ( v5 <= 0 )
          j_j_j_j__ZdlPv_9(v6);
      }
      v2 = (char *)v2 + 24;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 21);
  }
  if ( v2 )
    j_operator delete(v2);
  v7 = (void *)*((_DWORD *)v1 + 17);
  if ( v7 )
    j_operator delete(v7);
  v8 = (void *)*((_DWORD *)v1 + 14);
  if ( v8 )
    j_operator delete(v8);
  v9 = *((_DWORD *)v1 + 13);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  return v1;
}


void __fastcall StartPiece::~StartPiece(StartPiece *this)
{
  StartPiece *v1; // r0@1

  v1 = j_StartPiece::~StartPiece(this);
  j_j_j__ZdlPv_7((void *)v1);
}


_DWORD *__fastcall StartPiece::addChildren(int a1, int a2, int a3, Random *a4)
{
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  Random *v7; // r4@1

  v4 = a1;
  v5 = a3;
  v6 = a2;
  v7 = a4;
  j_VillagePiece::generateAndAddRoadPiece(
    *(_DWORD *)(a1 + 4) - 1,
    a2,
    a3,
    a4,
    *(_DWORD *)(a1 + 20) - 4,
    *(_DWORD *)(a1 + 12) + 1,
    1,
    *(_DWORD *)(a1 + 32));
    (*(_QWORD *)(v4 + 12) >> 32) + 1,
    v6,
    v5,
    v7,
    *(_DWORD *)(v4 + 20) - 4,
    *(_QWORD *)(v4 + 12) + 1,
    3,
    *(_DWORD *)(v4 + 32));
    *(_DWORD *)(v4 + 4) + 1,
    *(_DWORD *)(v4 + 12) - 1,
    2,
  return j_VillagePiece::generateAndAddRoadPiece(
           *(_DWORD *)(v4 + 4) + 1,
           v6,
           v5,
           v7,
           *(_QWORD *)(v4 + 20) - 4,
           (*(_QWORD *)(v4 + 20) >> 32) + 1,
           0,
           *(_DWORD *)(v4 + 32));
}


int __fastcall StartPiece::StartPiece(int a1, int a2, int a3, Random *this, int a5, int a6, int a7, int a8, char a9)
{
  int v9; // r4@1
  int v10; // r5@1
  int v11; // r7@1
  int v12; // r0@1
  char v13; // r1@1
  char v14; // r5@1
  char v15; // r2@5
  int result; // r0@23

  v9 = a1;
  v10 = a2;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 28) = 255;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 36) = -1;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)a1 = &off_2724694;
  *(_DWORD *)(a1 + 28) = j_Random::_genRandInt32(this) & 3;
  *(_DWORD *)(v9 + 4) = a5;
  *(_DWORD *)(v9 + 8) = 64;
  *(_DWORD *)(v9 + 12) = a6;
  *(_DWORD *)(v9 + 16) = a5 + 5;
  *(_DWORD *)(v9 + 20) = 78;
  *(_DWORD *)(v9 + 24) = a6 + 5;
  *(_DWORD *)v9 = &off_2724304;
  *(_DWORD *)(v9 + 52) = &unk_28898CC;
  *(_DWORD *)(v9 + 84) = 0;
  *(_DWORD *)(v9 + 88) = 0;
  *(_DWORD *)(v9 + 92) = 0;
  *(_DWORD *)(v9 + 56) = 0;
  v11 = v9 + 56;
  *(_DWORD *)(v11 + 20) = 0;
  *(_DWORD *)(v11 + 12) = 0;
  *(_DWORD *)(v11 + 16) = 0;
  *(_DWORD *)(v11 + 4) = 0;
  *(_DWORD *)(v11 + 8) = 0;
  *(_DWORD *)(v11 + 40) = v10;
  j_std::vector<PieceWeight,std::allocator<PieceWeight>>::operator=(v9 + 84, (unsigned __int64 *)a7);
  *(_DWORD *)(v9 + 80) = a8;
  *(_BYTE *)(v9 + 47) = a9;
  v12 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v10 + 32))(v10, a5, a6);
  v13 = 0;
  v14 = 0;
  if ( v12 == Biome::desertHills )
    v14 = 1;
  if ( v12 == Biome::desert )
  *(_BYTE *)(v9 + 44) = v14;
  v15 = 0;
  if ( v12 == Biome::savannaRockMutated )
    v15 = 1;
  if ( v12 == Biome::savannaRock )
  if ( v12 == Biome::savannaMutated )
  if ( v12 == Biome::savanna )
  *(_BYTE *)(v9 + 45) = v15;
  if ( v12 == Biome::taigaColdMutated )
    v13 = 1;
  if ( v12 == Biome::taigaColdHills )
  if ( v12 == Biome::taigaCold )
  if ( v12 == Biome::taiga )
  if ( v12 == Biome::iceFlats )
  result = v9;
  *(_BYTE *)(v9 + 46) = v13;
  return result;
}


signed int __fastcall StartPiece::getType(StartPiece *this)
{
  return 1447646032;
}


char *__fastcall StartPiece::getPieceWeights(StartPiece *this)
{
  return (char *)this + 84;
}
