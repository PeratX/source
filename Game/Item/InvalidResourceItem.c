

void __fastcall InvalidResourceItem::~InvalidResourceItem(InvalidResourceItem *this)
{
  InvalidResourceItem::~InvalidResourceItem(this);
}


InvalidResourceItem *__fastcall InvalidResourceItem::~InvalidResourceItem(InvalidResourceItem *this)
{
  InvalidResourceItem *v1; // r5@1
  void *v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  int v5; // r1@4
  void *v6; // r0@4
  int v7; // r1@5
  void *v8; // r0@5
  unsigned int *v10; // r2@7
  signed int v11; // r1@9
  unsigned int *v12; // r2@11
  signed int v13; // r1@13
  unsigned int *v14; // r2@15
  signed int v15; // r1@17

  v1 = this;
  *(_DWORD *)this = &off_26E808C;
  v2 = (void *)*((_DWORD *)this + 17);
  if ( v2 )
    operator delete(v2);
  v3 = *((_DWORD *)v1 + 15);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v3 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  *(_DWORD *)v1 = &off_26E806C;
  v5 = *((_DWORD *)v1 + 5);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v5 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = *((_DWORD *)v1 + 4);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v7 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  return v1;
}


int __fastcall InvalidResourceItem::InvalidResourceItem(int a1, int a2)
{
  int v2; // r5@1

  v2 = a1;
  *(_DWORD *)(a1 + 16) = &unk_28898CC;
  *(_DWORD *)(a1 + 20) = &unk_28898CC;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 40) = 8;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 56) = a2;
  *(_DWORD *)a1 = &off_26E808C;
  *(_DWORD *)(a1 + 60) = &unk_28898CC;
  *(_DWORD *)(a1 + 64) = 0;
  InvalidPacksFilterGroup::InvalidPacksFilterGroup((InvalidPacksFilterGroup *)(a1 + 68));
  return v2;
}


void __fastcall InvalidResourceItem::~InvalidResourceItem(InvalidResourceItem *this)
{
  InvalidResourceItem *v1; // r0@1

  v1 = InvalidResourceItem::~InvalidResourceItem(this);
  j_j_j__ZdlPv_5((void *)v1);
}
