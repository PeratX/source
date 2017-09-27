

ManifestContentItem *__fastcall ManifestContentItem::~ManifestContentItem(ManifestContentItem *this)
{
  ManifestContentItem *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r0@4
  int v9; // r1@6
  void *v10; // r0@6
  int v11; // r1@7
  void *v12; // r0@7
  unsigned int *v14; // r2@9
  signed int v15; // r1@11
  unsigned int *v16; // r2@13
  signed int v17; // r1@15
  unsigned int *v18; // r2@17
  signed int v19; // r1@19
  unsigned int *v20; // r2@21
  signed int v21; // r1@23
  unsigned int *v22; // r2@25
  signed int v23; // r1@27

  v1 = this;
  *(_DWORD *)this = &off_26E809C;
  v2 = *((_DWORD *)this + 18);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 17);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v4 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 16);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v6 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 15);
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  *((_DWORD *)v1 + 15) = 0;
  *(_DWORD *)v1 = &off_26E806C;
  v9 = *((_DWORD *)v1 + 5);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v9 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = *((_DWORD *)v1 + 4);
  v12 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v11 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  return v1;
}


void __fastcall ManifestContentItem::~ManifestContentItem(ManifestContentItem *this)
{
  ManifestContentItem *v1; // r0@1

  v1 = ManifestContentItem::~ManifestContentItem(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall ManifestContentItem::~ManifestContentItem(ManifestContentItem *this)
{
  ManifestContentItem::~ManifestContentItem(this);
}


int __fastcall ManifestContentItem::ManifestContentItem(int result, int a2, int a3, int a4)
{
  *(_DWORD *)(result + 16) = &unk_28898CC;
  *(_DWORD *)(result + 20) = &unk_28898CC;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 44) = a4;
  *(_DWORD *)(result + 40) = a3 | 0x10;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 56) = a2;
  *(_DWORD *)result = &off_26E809C;
  *(_DWORD *)(result + 60) = 0;
  *(_DWORD *)(result + 64) = &unk_28898CC;
  *(_DWORD *)(result + 68) = &unk_28898CC;
  *(_DWORD *)(result + 72) = &unk_28898CC;
  return result;
}
