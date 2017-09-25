

void __fastcall EmptyLootItem::~EmptyLootItem(EmptyLootItem *this)
{
  EmptyLootItem *v1; // r4@1
  int v2; // r0@1
  char *v3; // r5@3
  char *v4; // r7@3

  v1 = this;
  *(_DWORD *)this = &off_2725A4C;
  v2 = *((_DWORD *)this + 6);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 8))();
  *((_DWORD *)v1 + 6) = 0;
  v4 = (char *)(*(_QWORD *)((char *)v1 + 12) >> 32);
  v3 = (char *)*(_QWORD *)((char *)v1 + 12);
  if ( v3 != v4 )
  {
    do
    {
      if ( *(_DWORD *)v3 )
        (*(void (**)(void))(**(_DWORD **)v3 + 4))();
      *(_DWORD *)v3 = 0;
      v3 += 4;
    }
    while ( v4 != v3 );
    v3 = (char *)*((_DWORD *)v1 + 3);
  }
  if ( v3 )
    j_operator delete(v3);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall EmptyLootItem::~EmptyLootItem(EmptyLootItem *this)
{
  EmptyLootItem::~EmptyLootItem(this);
}
