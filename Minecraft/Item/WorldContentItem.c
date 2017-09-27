

WorldContentItem *__fastcall WorldContentItem::~WorldContentItem(WorldContentItem *this)
{
  WorldContentItem *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  int v10; // r1@5
  void *v11; // r0@5
  unsigned int *v13; // r2@7
  signed int v14; // r1@9
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  unsigned int *v17; // r2@15
  signed int v18; // r1@17
  unsigned int *v19; // r2@19
  signed int v20; // r1@21
  unsigned int *v21; // r2@23
  signed int v22; // r1@25

  v1 = this;
  *(_DWORD *)this = &off_26E807C;
  v2 = *((_DWORD *)this + 17);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 16);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v4 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 15);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v6 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  *(_DWORD *)v1 = &off_26E806C;
  v8 = *((_DWORD *)v1 + 5);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v8 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = *((_DWORD *)v1 + 4);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v10 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  return v1;
}


int __fastcall WorldContentItem::WorldContentItem(int result, int a2)
{
  *(_DWORD *)(result + 16) = &unk_28898CC;
  *(_DWORD *)(result + 20) = &unk_28898CC;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 40) = 4;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 56) = a2;
  *(_DWORD *)result = &off_26E807C;
  *(_DWORD *)(result + 60) = &unk_28898CC;
  *(_DWORD *)(result + 64) = &unk_28898CC;
  *(_DWORD *)(result + 68) = &unk_28898CC;
  return result;
}


void __fastcall WorldContentItem::~WorldContentItem(WorldContentItem *this)
{
  WorldContentItem::~WorldContentItem(this);
}


void __fastcall WorldContentItem::~WorldContentItem(WorldContentItem *this)
{
  WorldContentItem *v1; // r0@1

  v1 = WorldContentItem::~WorldContentItem(this);
  j_j_j__ZdlPv_5((void *)v1);
}
