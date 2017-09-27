

int __fastcall StoreSearchQuery::StoreSearchQuery(int a1, int *a2)
{
  int result; // r0@1

  result = SearchQuery::SearchQuery(a1, a2);
  *(_QWORD *)(result + 44) = (unsigned int)&unk_28898CC;
  *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 56) = 0;
  *(_DWORD *)(result + 60) = &unk_28898CC;
  return result;
}


char *__fastcall StoreSearchQuery::getSortType(StoreSearchQuery *this)
{
  return (char *)this + 60;
}


char *__fastcall StoreSearchQuery::getRowName(StoreSearchQuery *this)
{
  return (char *)this + 44;
}


StoreSearchQuery *__fastcall StoreSearchQuery::~StoreSearchQuery(StoreSearchQuery *this)
{
  StoreSearchQuery *v1; // r10@1
  int v2; // r1@1
  void *v3; // r0@1
  void *v4; // r5@2
  void *v5; // r7@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  int *v8; // r0@12
  int v9; // r1@17
  void *v10; // r0@17
  unsigned int *v12; // r2@19
  signed int v13; // r1@21
  unsigned int *v14; // r2@23
  signed int v15; // r1@25

  v1 = this;
  v2 = *((_DWORD *)this + 15);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v5 = (void *)(*((_QWORD *)v1 + 6) >> 32);
  v4 = (void *)*((_QWORD *)v1 + 6);
  if ( v4 != v5 )
    do
      v8 = (int *)(*(_DWORD *)v4 - 12);
      if ( v8 != &dword_28898C0 )
      {
        v6 = (unsigned int *)(*(_DWORD *)v4 - 4);
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
          j_j_j_j_j__ZdlPv_9(v8);
      }
      v4 = (char *)v4 + 4;
    while ( v4 != v5 );
    v4 = (void *)*((_DWORD *)v1 + 12);
  if ( v4 )
    operator delete(v4);
  v9 = *((_DWORD *)v1 + 11);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v9 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  SearchQuery::~SearchQuery(v1);
  return v1;
}


char *__fastcall StoreSearchQuery::getItemOrder(StoreSearchQuery *this)
{
  return (char *)this + 48;
}


int *__fastcall StoreSearchQuery::StoreSearchQuery(int *a1, int *a2)
{
  int *v2; // r5@1
  int *v3; // r4@1

  v2 = a2;
  v3 = a1;
  SearchQuery::SearchQuery(a1, a2);
  sub_119C854(v3 + 11, v2 + 11);
  std::vector<std::string,std::allocator<std::string>>::vector((int)(v3 + 12), (unsigned __int64 *)v2 + 6);
  sub_119C854(v3 + 15, v2 + 15);
  return v3;
}
