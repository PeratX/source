

int __fastcall ShowStoreOfferPacket::read(ShowStoreOfferPacket *this, BinaryStream *a2)
{
  ShowStoreOfferPacket *v2; // r4@1
  BinaryStream *v3; // r5@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v8, (int)a2);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v2 + 4,
    &v8);
  v4 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
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
  *((_BYTE *)v2 + 24) = ReadOnlyBinaryStream::getBool(v3);
  return 0;
}


const void **__fastcall ShowStoreOfferPacket::write(ShowStoreOfferPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  ShowStoreOfferPacket *v3; // r5@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeString((int)a2, (char **)this + 4);
  return j_j_j__ZN12BinaryStream9writeBoolEb_1(v2, *((_BYTE *)v3 + 24));
}


void __fastcall ShowStoreOfferPacket::~ShowStoreOfferPacket(ShowStoreOfferPacket *this)
{
  ShowStoreOfferPacket *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E9AE4;
  v2 = *((_DWORD *)this + 5);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 4);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  operator delete((void *)v1);
}


void __fastcall ShowStoreOfferPacket::~ShowStoreOfferPacket(ShowStoreOfferPacket *this)
{
  ShowStoreOfferPacket::~ShowStoreOfferPacket(this);
}


signed int __fastcall ShowStoreOfferPacket::getId(ShowStoreOfferPacket *this)
{
  return 91;
}


int __fastcall ShowStoreOfferPacket::handle(ShowStoreOfferPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, ShowStoreOfferPacket *))(*(_DWORD *)a3 + 404))(
           a3,
           a2,
           this);
}


ShowStoreOfferPacket *__fastcall ShowStoreOfferPacket::~ShowStoreOfferPacket(ShowStoreOfferPacket *this)
{
  ShowStoreOfferPacket *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E9AE4;
  v2 = *((_DWORD *)this + 5);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 4);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return v1;
}
