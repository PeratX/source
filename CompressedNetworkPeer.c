

int __fastcall CompressedNetworkPeer::receivePacket(int a1, int *a2)
{
  int *v2; // r5@1
  int v3; // r4@1
  void *v4; // r0@5
  char *v5; // r0@6
  unsigned int *v7; // r2@8
  signed int v8; // r1@10
  unsigned int *v9; // r2@16
  signed int v10; // r1@18
  int v11; // [sp+4h] [bp-2Ch]@2
  char v12; // [sp+Bh] [bp-25h]@2
  char *v13; // [sp+Ch] [bp-24h]@1

  v2 = a2;
  v13 = (char *)&unk_28898CC;
  v3 = (*(int (**)(void))(**(_DWORD **)(a1 + 4) + 12))();
  if ( !v3 )
  {
    v12 = 0;
    j_Util::decompress((const void **)&v11, (int *)&v13, &v12);
    if ( v12 )
    {
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v2, &v11);
      v3 = 0;
    }
    else
      v3 = 2;
    v4 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v11 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v4);
  }
  v5 = v13 - 12;
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return v3;
}


int __fastcall CompressedNetworkPeer::CompressedNetworkPeer(int result, int a2)
{
  *(_DWORD *)result = &off_2719E74;
  *(_DWORD *)(result + 4) = a2;
  return result;
}


void __fastcall CompressedNetworkPeer::sendPacket(int a1, int *a2)
{
  CompressedNetworkPeer::sendPacket(a1, a2);
}


void __fastcall CompressedNetworkPeer::sendPacket(int a1, int *a2)
{
  int v2; // r6@1
  void (*v3)(void); // r6@1
  char *v4; // r0@1
  char *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  char *v10; // [sp+0h] [bp-28h]@1
  char *v11; // [sp+4h] [bp-24h]@1

  v2 = a1;
  j_Util::compress((const void **)&v11, a2);
  v3 = *(void (**)(void))(**(_DWORD **)(v2 + 4) + 8);
  v10 = v11;
  v11 = (char *)&unk_28898CC;
  v3();
  v4 = v10 - 12;
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
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = v11 - 12;
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v11 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
}
