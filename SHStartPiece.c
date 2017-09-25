

int __fastcall SHStartPiece::SHStartPiece(int result)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 28) = 255LL;
  *(_DWORD *)(result + 36) = 0;
  *(_BYTE *)(result + 40) = 0;
  *(_DWORD *)result = &off_2723EAC;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 60) = &unk_28898CC;
  *(_DWORD *)(result + 64) = &unk_28898CC;
  *(_DWORD *)(result + 68) = 0;
  *(_DWORD *)(result + 72) = 0;
  *(_DWORD *)(result + 76) = 0;
  return result;
}


void __fastcall SHStartPiece::~SHStartPiece(SHStartPiece *this)
{
  SHStartPiece::~SHStartPiece(this);
}


void __fastcall SHStartPiece::~SHStartPiece(SHStartPiece *this)
{
  SHStartPiece *v1; // r0@1

  v1 = j_SHStartPiece::~SHStartPiece(this);
  j_j_j__ZdlPv_7((void *)v1);
}


SHStartPiece *__fastcall SHStartPiece::~SHStartPiece(SHStartPiece *this)
{
  SHStartPiece *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11
  int v7; // r1@16
  void *v8; // r0@16
  int v9; // r1@17
  void *v10; // r0@17
  void *v11; // r0@18
  unsigned int *v13; // r2@21
  signed int v14; // r1@23
  unsigned int *v15; // r2@25
  signed int v16; // r1@27

  v1 = this;
  *(_DWORD *)this = &off_2723EAC;
  v3 = (void *)(*(_QWORD *)((char *)this + 68) >> 32);
  v2 = (void *)*(_QWORD *)((char *)this + 68);
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
    v2 = (void *)*((_DWORD *)v1 + 17);
  }
  if ( v2 )
    j_operator delete(v2);
  v7 = *((_DWORD *)v1 + 16);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = *((_DWORD *)v1 + 15);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v9 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)*((_DWORD *)v1 + 11);
  if ( v11 )
    j_operator delete(v11);
  return v1;
}


signed int __fastcall SHStartPiece::getType(SHStartPiece *this)
{
  return 1397248082;
}


int __fastcall SHStartPiece::SHStartPiece(int a1, int a2, Random *this, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r5@1

  v5 = a1;
  v6 = a4;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 28) = 255;
  *(_DWORD *)(a1 + 32) = a2;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)a1 = &off_2723E64;
  *(_BYTE *)(a1 + 40) = 1;
  *(_DWORD *)(a1 + 28) = j_Random::_genRandInt32(this) & 3;
  *(_DWORD *)(v5 + 36) = 0;
  *(_DWORD *)(v5 + 4) = v6;
  *(_DWORD *)(v5 + 8) = 64;
  *(_DWORD *)(v5 + 12) = a5;
  *(_DWORD *)(v5 + 16) = v6 + 4;
  *(_DWORD *)(v5 + 20) = 74;
  *(_DWORD *)(v5 + 24) = a5 + 4;
  *(_DWORD *)v5 = &off_2723EAC;
  *(_DWORD *)(v5 + 44) = 0;
  *(_DWORD *)(v5 + 48) = 0;
  *(_DWORD *)(v5 + 52) = 0;
  *(_DWORD *)(v5 + 60) = &unk_28898CC;
  *(_DWORD *)(v5 + 64) = &unk_28898CC;
  *(_DWORD *)(v5 + 68) = 0;
  *(_DWORD *)(v5 + 72) = 0;
  *(_DWORD *)(v5 + 76) = 0;
  return v5;
}
