

void __fastcall LoginPacket::write(LoginPacket *this, BinaryStream *a2)
{
  LoginPacket::write(this, a2);
}


int __fastcall LoginPacket::handle(LoginPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, LoginPacket *))(*(_DWORD *)a3 + 44))(
           a3,
           a2,
           this);
}


void __fastcall LoginPacket::~LoginPacket(LoginPacket *this)
{
  LoginPacket::~LoginPacket(this);
}


void __fastcall LoginPacket::~LoginPacket(LoginPacket *this)
{
  LoginPacket *v1; // r4@1
  ConnectionRequest *v2; // r0@1
  ConnectionRequest *v3; // r0@2

  v1 = this;
  *(_DWORD *)this = &off_26D9848;
  v2 = (ConnectionRequest *)*((_DWORD *)this + 5);
  if ( v2 )
  {
    v3 = ConnectionRequest::~ConnectionRequest(v2);
    operator delete((void *)v3);
  }
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall LoginPacket::read(LoginPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r5@1
  LoginPacket *v3; // r4@1
  unsigned int v4; // r0@1
  __int64 v5; // r0@2
  int **v6; // r5@2
  ConnectionRequest *v7; // r0@2
  ConnectionRequest *v8; // r0@3
  void *v9; // r0@4
  unsigned int *v10; // r2@5
  signed int v11; // r1@7
  int v13; // [sp+0h] [bp-28h]@2
  int v14; // [sp+10h] [bp-18h]@2

  v2 = a2;
  v3 = this;
  v4 = ReadOnlyBinaryStream::getSignedBigEndianInt(a2);
  *((_DWORD *)v3 + 4) = v4;
  if ( v4 == 137 )
  {
    ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v14, (int)v2);
    LODWORD(v5) = &v13;
    HIDWORD(v5) = &v14;
    ConnectionRequest::fromString(v5);
    v6 = (int **)operator new(0x10u);
    ConnectionRequest::ConnectionRequest(v6, (int **)&v13);
    v7 = (ConnectionRequest *)*((_DWORD *)v3 + 5);
    *((_DWORD *)v3 + 5) = v6;
    if ( v7 )
    {
      v8 = ConnectionRequest::~ConnectionRequest(v7);
      operator delete((void *)v8);
    }
    ConnectionRequest::~ConnectionRequest((ConnectionRequest *)&v13);
    v9 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v14 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v9);
  }
  else
    *((_DWORD *)v2 + 1) = *(_DWORD *)(**((_DWORD **)v2 + 3) - 12);
  return 0;
}


void __fastcall LoginPacket::write(LoginPacket *this, BinaryStream *a2)
{
  LoginPacket *v2; // r5@1
  BinaryStream *v3; // r4@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = this;
  v3 = a2;
  BinaryStream::writeSignedBigEndianInt(a2, *((_DWORD *)this + 4));
  ConnectionRequest::toString((ConnectionRequest *)&v7, *((UnverifiedCertificate ***)v2 + 5));
  BinaryStream::writeString((int)v3, (char **)&v7);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
}


signed int __fastcall LoginPacket::getId(LoginPacket *this)
{
  return 1;
}


signed int __fastcall LoginPacket::disallowBatching(LoginPacket *this)
{
  return 1;
}


LoginPacket *__fastcall LoginPacket::~LoginPacket(LoginPacket *this)
{
  LoginPacket *v1; // r4@1
  ConnectionRequest *v2; // r0@1
  ConnectionRequest *v3; // r0@2

  v1 = this;
  *(_DWORD *)this = &off_26D9848;
  v2 = (ConnectionRequest *)*((_DWORD *)this + 5);
  if ( v2 )
  {
    v3 = ConnectionRequest::~ConnectionRequest(v2);
    operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 5) = 0;
  return v1;
}
