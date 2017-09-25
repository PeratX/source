

int __fastcall PackContentItem::PackContentItem(int a1, int a2)
{
  int v2; // r4@1

  v2 = a1;
  *(_DWORD *)(a1 + 16) = &unk_28898CC;
  *(_DWORD *)(a1 + 20) = &unk_28898CC;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 40) = 80;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 56) = a2;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 64) = &unk_28898CC;
  *(_DWORD *)(a1 + 68) = &unk_28898CC;
  *(_DWORD *)(a1 + 72) = &unk_28898CC;
  *(_DWORD *)a1 = &off_26E80BC;
  *(_DWORD *)(a1 + 76) = 0;
  PackReport::PackReport(a1 + 80);
  PackReport::PackReport(v2 + 184);
  *(_DWORD *)(v2 + 288) = &unk_28898CC;
  *(_DWORD *)(v2 + 296) = 0;
  *(_DWORD *)(v2 + 300) = 0;
  *(_DWORD *)(v2 + 304) = -1;
  _aeabi_memclr4(v2 + 308, 36);
  return v2;
}


void __fastcall PackContentItem::~PackContentItem(PackContentItem *this)
{
  PackContentItem::~PackContentItem(this);
}


PackContentItem *__fastcall PackContentItem::~PackContentItem(PackContentItem *this)
{
  PackContentItem *v1; // r11@1
  void *v2; // r0@1
  void *v3; // r0@3
  int v4; // r5@5 OVERLAPPED
  int v5; // r6@5 OVERLAPPED
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  unsigned int *v8; // r2@11
  signed int v9; // r1@13
  int v10; // r1@23
  void *v11; // r0@23
  int *v12; // r0@24
  int v13; // r1@29
  void *v14; // r0@29
  unsigned int *v16; // r2@31
  signed int v17; // r1@33

  v1 = this;
  *(_DWORD *)this = &off_26E80BC;
  v2 = (void *)*((_DWORD *)this + 83);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 80);
  if ( v3 )
    operator delete(v3);
  *(_QWORD *)&v4 = *(_QWORD *)((char *)v1 + 308);
  if ( v4 != v5 )
  {
    do
    {
      v10 = *(_DWORD *)(v4 + 4);
      v11 = (void *)(v10 - 12);
      if ( (int *)(v10 - 12) != &dword_28898C0 )
      {
        v6 = (unsigned int *)(v10 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
        }
        else
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      }
      v12 = (int *)(*(_DWORD *)v4 - 12);
      if ( v12 != &dword_28898C0 )
        v8 = (unsigned int *)(*(_DWORD *)v4 - 4);
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v4 += 12;
    }
    while ( v4 != v5 );
    v4 = *((_DWORD *)v1 + 77);
  }
  if ( v4 )
    operator delete((void *)v4);
  v13 = *((_DWORD *)v1 + 72);
  v14 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  PackReport::~PackReport((PackContentItem *)((char *)v1 + 184));
  PackReport::~PackReport((PackContentItem *)((char *)v1 + 80));
  ManifestContentItem::~ManifestContentItem(v1);
  return v1;
}


void __fastcall PackContentItem::~PackContentItem(PackContentItem *this)
{
  PackContentItem *v1; // r0@1

  v1 = PackContentItem::~PackContentItem(this);
  j_j_j__ZdlPv_5((void *)v1);
}
