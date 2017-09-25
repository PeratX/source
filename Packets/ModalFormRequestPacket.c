

void __fastcall ModalFormRequestPacket::~ModalFormRequestPacket(ModalFormRequestPacket *this)
{
  ModalFormRequestPacket *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E9B84;
  v2 = *((_DWORD *)this + 5);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  operator delete((void *)v1);
}


void __fastcall ModalFormRequestPacket::~ModalFormRequestPacket(ModalFormRequestPacket *this)
{
  ModalFormRequestPacket::~ModalFormRequestPacket(this);
}


signed int __fastcall ModalFormRequestPacket::getId(ModalFormRequestPacket *this)
{
  return 100;
}


const void **__fastcall ModalFormRequestPacket::write(ModalFormRequestPacket *this, BinaryStream *a2)
{
  ModalFormRequestPacket *v2; // r5@1
  BinaryStream *v3; // r4@1

  v2 = this;
  v3 = a2;
  BinaryStream::writeUnsignedVarInt(a2, *((_DWORD *)this + 4));
  return j_j_j__ZN12BinaryStream11writeStringERKSs_1((int)v3, (char **)v2 + 5);
}


ModalFormRequestPacket *__fastcall ModalFormRequestPacket::~ModalFormRequestPacket(ModalFormRequestPacket *this)
{
  ModalFormRequestPacket *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E9B84;
  v2 = *((_DWORD *)this + 5);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  return v1;
}


int __fastcall ModalFormRequestPacket::handle(ModalFormRequestPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, ModalFormRequestPacket *))(*(_DWORD *)a3 + 416))(
           a3,
           a2,
           this);
}


int __fastcall ModalFormRequestPacket::read(ModalFormRequestPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  ModalFormRequestPacket *v3; // r5@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  *((_DWORD *)this + 4) = ReadOnlyBinaryStream::getUnsignedVarInt(a2);
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v8, (int)v2);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v3 + 5,
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
  return 0;
}
