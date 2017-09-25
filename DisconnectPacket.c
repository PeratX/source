

void __fastcall DisconnectPacket::~DisconnectPacket(DisconnectPacket *this)
{
  DisconnectPacket *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26D6400;
  v2 = *((_DWORD *)this + 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  operator delete((void *)v1);
}


DisconnectPacket *__fastcall DisconnectPacket::~DisconnectPacket(DisconnectPacket *this)
{
  DisconnectPacket *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26D6400;
  v2 = *((_DWORD *)this + 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  return v1;
}


const void **__fastcall DisconnectPacket::write(DisconnectPacket *this, BinaryStream *a2)
{
  DisconnectPacket *v2; // r5@1
  BinaryStream *v3; // r4@1
  const void **result; // r0@1

  v2 = this;
  v3 = a2;
  BinaryStream::writeBool(a2, *((_BYTE *)this + 13));
  result = (const void **)*((_BYTE *)v2 + 13);
  if ( !*((_BYTE *)v2 + 13) )
    result = j_j_j__ZN12BinaryStream11writeStringERKSs_0((int)v3, (char **)v2 + 4);
  return result;
}


int __fastcall DisconnectPacket::read(DisconnectPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r5@1
  DisconnectPacket *v3; // r4@1
  signed int v4; // r0@1
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  int v9; // [sp+4h] [bp-1Ch]@2

  v2 = a2;
  v3 = this;
  v4 = ReadOnlyBinaryStream::getBool(a2);
  *((_BYTE *)v3 + 13) = v4;
  if ( !v4 )
  {
    ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v9, (int)v2);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v3 + 4,
      &v9);
    v5 = (void *)(v9 - 12);
    if ( (int *)(v9 - 12) != &dword_28898C0 )
    {
      v7 = (unsigned int *)(v9 - 4);
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
        j_j_j_j_j__ZdlPv_9(v5);
    }
  }
  return 0;
}


signed int __fastcall DisconnectPacket::getId(DisconnectPacket *this)
{
  return 5;
}


void __fastcall DisconnectPacket::~DisconnectPacket(DisconnectPacket *this)
{
  DisconnectPacket::~DisconnectPacket(this);
}


int __fastcall DisconnectPacket::handle(DisconnectPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, DisconnectPacket *))(*(_DWORD *)a3 + 40))(
           a3,
           a2,
           this);
}
