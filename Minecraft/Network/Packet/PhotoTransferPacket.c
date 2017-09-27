

void __fastcall PhotoTransferPacket::~PhotoTransferPacket(PhotoTransferPacket *this)
{
  PhotoTransferPacket::~PhotoTransferPacket(this);
}


const void **__fastcall PhotoTransferPacket::write(PhotoTransferPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  char **v3; // r5@1
  char **v4; // r6@1
  char **v5; // r7@1

  v2 = a2;
  v3 = (char **)((char *)this + 16);
  v4 = (char **)((char *)this + 24);
  v5 = (char **)((char *)this + 20);
  BinaryStream::reserve(
    a2,
    *(_DWORD *)(*((_DWORD *)this + 4) - 12)
  + *(_DWORD *)(*((_DWORD *)this + 6) - 12)
  + *(_DWORD *)(*((_DWORD *)this + 5) - 12)
  + 4);
  BinaryStream::writeString((int)v2, v3);
  BinaryStream::writeString((int)v2, v5);
  return j_j_j__ZN12BinaryStream11writeStringERKSs_1((int)v2, v4);
}


int __fastcall PhotoTransferPacket::read(PhotoTransferPacket *this, BinaryStream *a2)
{
  PhotoTransferPacket *v2; // r4@1
  BinaryStream *v3; // r5@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  int v14; // [sp+0h] [bp-20h]@3
  int v15; // [sp+4h] [bp-1Ch]@2
  int v16; // [sp+8h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v16, (int)a2);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v2 + 4,
    &v16);
  v4 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v15, (int)v3);
    (int *)v2 + 5,
    &v15);
  v5 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v15 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v14, (int)v3);
    (int *)v2 + 6,
    &v14);
  v6 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v14 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  return 0;
}


signed int __fastcall PhotoTransferPacket::getId(PhotoTransferPacket *this)
{
  return 99;
}


PhotoTransferPacket *__fastcall PhotoTransferPacket::~PhotoTransferPacket(PhotoTransferPacket *this)
{
  PhotoTransferPacket *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  unsigned int *v13; // r2@13
  signed int v14; // r1@15

  v1 = this;
  *(_DWORD *)this = &off_26E4EB8;
  v2 = *((_DWORD *)this + 6);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 5);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v4 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 4);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v6 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  return v1;
}


int __fastcall PhotoTransferPacket::handle(PhotoTransferPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, PhotoTransferPacket *))(*(_DWORD *)a3 + 476))(
           a3,
           a2,
           this);
}


void __fastcall PhotoTransferPacket::~PhotoTransferPacket(PhotoTransferPacket *this)
{
  PhotoTransferPacket *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15

  v1 = this;
  *(_DWORD *)this = &off_26E4EB8;
  v2 = *((_DWORD *)this + 6);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 5);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v4 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 4);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v6 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  operator delete((void *)v1);
}
