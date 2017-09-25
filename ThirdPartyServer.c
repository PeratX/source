

char *__fastcall ThirdPartyServer::getCreatorId(ThirdPartyServer *this)
{
  return (char *)this + 8;
}


char *__fastcall ThirdPartyServer::getProductId(ThirdPartyServer *this)
{
  return (char *)this + 4;
}


char *__fastcall ThirdPartyServer::getImagePath(ThirdPartyServer *this)
{
  return (char *)this + 24;
}


char *__fastcall ThirdPartyServer::getUrl(ThirdPartyServer *this)
{
  return (char *)this + 28;
}


char *__fastcall ThirdPartyServer::getWhitelistUrl(ThirdPartyServer *this)
{
  return (char *)this + 20;
}


int __fastcall ThirdPartyServer::ThirdPartyServer(int a1)
{
  int v1; // r4@1

  v1 = a1;
  *(_DWORD *)a1 = &unk_28898CC;
  *(_DWORD *)(a1 + 4) = &unk_28898CC;
  sub_21E94B4((void **)(a1 + 8), (const char *)&unk_257BC67);
  *(_DWORD *)(v1 + 12) = &unk_28898CC;
  *(_DWORD *)(v1 + 16) = &unk_28898CC;
  sub_21E94B4((void **)(v1 + 20), (const char *)&unk_257BC67);
  *(_DWORD *)(v1 + 24) = &unk_28898CC;
  *(_DWORD *)(v1 + 28) = &unk_28898CC;
  *(_WORD *)(v1 + 32) = 0;
  return v1;
}


ThirdPartyServer *__fastcall ThirdPartyServer::~ThirdPartyServer(ThirdPartyServer *this)
{
  ThirdPartyServer *v1; // r5@1
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
  int v12; // r1@6
  void *v13; // r0@6
  int v14; // r1@7
  void *v15; // r0@7
  int *v16; // r0@8
  unsigned int *v18; // r2@10
  signed int v19; // r1@12
  unsigned int *v20; // r2@14
  signed int v21; // r1@16
  unsigned int *v22; // r2@18
  signed int v23; // r1@20
  unsigned int *v24; // r2@22
  signed int v25; // r1@24
  unsigned int *v26; // r2@26
  signed int v27; // r1@28
  unsigned int *v28; // r2@30
  signed int v29; // r1@32
  unsigned int *v30; // r2@34
  signed int v31; // r1@36
  unsigned int *v32; // r2@38
  signed int v33; // r1@40

  v1 = this;
  v2 = *((_DWORD *)this + 7);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    }
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 6);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v4 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 5);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v6 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 4);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v8 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  v10 = *((_DWORD *)v1 + 3);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v10 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  v12 = *((_DWORD *)v1 + 2);
  v13 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v12 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  v14 = *((_DWORD *)v1 + 1);
  v15 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v14 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9(v15);
  v16 = (int *)(*(_DWORD *)v1 - 12);
  if ( v16 != &dword_28898C0 )
    v32 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9(v16);
  return v1;
}


char *__fastcall ThirdPartyServer::getTitle(ThirdPartyServer *this)
{
  return (char *)this + 12;
}


int *__fastcall ThirdPartyServer::ThirdPartyServer(int *a1, int *a2)
{
  int *v2; // r5@1
  int *v3; // r4@1

  v2 = a2;
  v3 = a1;
  sub_119C854(a1, a2);
  sub_119C854(v3 + 1, v2 + 1);
  sub_119C854(v3 + 2, v2 + 2);
  sub_119C854(v3 + 3, v2 + 3);
  sub_119C854(v3 + 4, v2 + 4);
  sub_119C854(v3 + 5, v2 + 5);
  sub_119C854(v3 + 6, v2 + 6);
  sub_119C854(v3 + 7, v2 + 7);
  v3[8] = v2[8];
  return v3;
}
