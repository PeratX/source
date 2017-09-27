

void __fastcall TickingTexture::~TickingTexture(TickingTexture *this)
{
  TickingTexture::~TickingTexture(this);
}


TickingTexture *__fastcall TickingTexture::~TickingTexture(TickingTexture *this)
{
  TickingTexture *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E6EEC;
  v2 = *((_DWORD *)this + 7);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  return v1;
}


char *__fastcall TickingTexture::getTextureUVCoordinateSet(TickingTexture *this)
{
  return (char *)this + 4;
}


int __fastcall TickingTexture::TickingTexture(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r8@1
  int v5; // r12@1
  int v6; // r9@1
  int v7; // r2@1
  int v8; // r3@1
  int v9; // r4@1
  int v10; // r5@1
  int v11; // r7@1

  v3 = a1;
  v4 = a3;
  v5 = a1 + 4;
  v6 = a2;
  *(_DWORD *)a1 = &off_26E6EEC;
  v7 = *(_DWORD *)(a2 + 4);
  v8 = *(_DWORD *)(a2 + 8);
  v9 = *(_DWORD *)(a2 + 12);
  v10 = *(_DWORD *)(a2 + 16);
  v11 = *(_DWORD *)(a2 + 20);
  *(_DWORD *)v5 = *(_DWORD *)a2;
  *(_DWORD *)(v5 + 4) = v7;
  *(_DWORD *)(v5 + 8) = v8;
  *(_DWORD *)(v5 + 12) = v9;
  *(_DWORD *)(v5 + 16) = v10;
  *(_DWORD *)(v5 + 20) = v11;
  sub_21E8AF4((int *)(a1 + 28), (int *)(a2 + 24));
  *(_DWORD *)(v3 + 32) = *(_DWORD *)(v6 + 28);
  *(_DWORD *)(v3 + 36) = v4;
  return v3;
}


void __fastcall TickingTexture::~TickingTexture(TickingTexture *this)
{
  TickingTexture *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E6EEC;
  v2 = *((_DWORD *)this + 7);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  operator delete((void *)v1);
}
