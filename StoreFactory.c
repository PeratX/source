

void __fastcall StoreFactory::createStores(int a1, unsigned int a2)
{
  StoreFactory::createStores(a1, a2);
}


void __fastcall StoreFactory::createStores(int a1, unsigned int a2)
{
  unsigned int v2; // r5@1
  _QWORD *v3; // r4@1
  void *v4; // r0@3
  unsigned int *v5; // r2@5
  signed int v6; // r1@7
  int v7; // [sp+8h] [bp-28h]@1
  int v8; // [sp+Ch] [bp-24h]@1

  v2 = a2;
  v3 = (_QWORD *)a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  sub_DA7364(
    (void **)&v7,
    "MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAqU9snkqLkTCYZQfQgNy9eabP/OcumQTgcoYhuBbmx2isicIX8mSUNJn64yxiA6acqnJzJxGb"
    "KW9H+gSWMuRtCtwI3Exb3sCq19EiVtjos4u5BJatzBKXXDDJeeYrejGk8FgT6ffokcilJFY4wgQQxDGFdfE/reAqm6+VKUtoqnjMpG0wVZn+o0bJfxNv"
    "E/ydJPlabDmoywEn9zEl0hXo0i+cimVlFZcTT6ed7U9celM2Ywg+7qVIu7fmBHPucTIoUAbipEAIvP2EntOqrhUG6GKJ219Qhdr43fvnyBailudNBiDR"
    "qA+x0rCH1JgmV/BvyAHTBylPzroeh9rWJNNPxQIDAQAB");
  AndroidStore::createGooglePlayStore(&v8, &v7, v2);
  std::vector<std::unique_ptr<Store,std::default_delete<Store>>,std::allocator<std::unique_ptr<Store,std::default_delete<Store>>>>::_M_emplace_back_aux<std::unique_ptr<Store,std::default_delete<Store>>>(
    v3,
    &v8);
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  v8 = 0;
  v4 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
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
      j_j_j_j_j__ZdlPv_9(v4);
  }
}
