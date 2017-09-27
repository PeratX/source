

signed int __fastcall SubClientLoginPacket::getId(SubClientLoginPacket *this)
{
  return 94;
}


SubClientLoginPacket *__fastcall SubClientLoginPacket::~SubClientLoginPacket(SubClientLoginPacket *this)
{
  SubClientLoginPacket *v1; // r4@1
  SubClientConnectionRequest *v2; // r0@1
  SubClientConnectionRequest *v3; // r0@2

  v1 = this;
  *(_DWORD *)this = &off_26D9870;
  v2 = (SubClientConnectionRequest *)*((_DWORD *)this + 4);
  if ( v2 )
  {
    v3 = SubClientConnectionRequest::~SubClientConnectionRequest(v2);
    operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 4) = 0;
  return v1;
}


void __fastcall SubClientLoginPacket::~SubClientLoginPacket(SubClientLoginPacket *this)
{
  SubClientLoginPacket::~SubClientLoginPacket(this);
}


signed int __fastcall SubClientLoginPacket::disallowBatching(SubClientLoginPacket *this)
{
  return 1;
}


int __fastcall SubClientLoginPacket::read(SubClientLoginPacket *this, BinaryStream *a2)
{
  SubClientLoginPacket *v2; // r4@1
  __int64 v3; // r0@1
  int **v4; // r5@1
  SubClientConnectionRequest *v5; // r0@1
  SubClientConnectionRequest *v6; // r0@2
  void *v7; // r0@3
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  int *v11[3]; // [sp+4h] [bp-24h]@1
  int v12; // [sp+10h] [bp-18h]@1

  v2 = this;
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v12, (int)a2);
  LODWORD(v3) = v11;
  HIDWORD(v3) = &v12;
  SubClientConnectionRequest::fromString(v3);
  v4 = (int **)operator new(0xCu);
  SubClientConnectionRequest::SubClientConnectionRequest(v4, v11);
  v5 = (SubClientConnectionRequest *)*((_DWORD *)v2 + 4);
  *((_DWORD *)v2 + 4) = v4;
  if ( v5 )
  {
    v6 = SubClientConnectionRequest::~SubClientConnectionRequest(v5);
    operator delete((void *)v6);
  }
  SubClientConnectionRequest::~SubClientConnectionRequest((SubClientConnectionRequest *)v11);
  v7 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v12 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v7);
  return 0;
}


void __fastcall SubClientLoginPacket::~SubClientLoginPacket(SubClientLoginPacket *this)
{
  SubClientLoginPacket *v1; // r4@1
  SubClientConnectionRequest *v2; // r0@1
  SubClientConnectionRequest *v3; // r0@2

  v1 = this;
  *(_DWORD *)this = &off_26D9870;
  v2 = (SubClientConnectionRequest *)*((_DWORD *)this + 4);
  if ( v2 )
  {
    v3 = SubClientConnectionRequest::~SubClientConnectionRequest(v2);
    operator delete((void *)v3);
  }
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall SubClientLoginPacket::write(SubClientLoginPacket *this, BinaryStream *a2)
{
  SubClientLoginPacket::write(this, a2);
}


void __fastcall SubClientLoginPacket::write(SubClientLoginPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  void *v3; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  SubClientConnectionRequest::toString((SubClientConnectionRequest *)&v6, *((UnverifiedCertificate ***)this + 4));
  BinaryStream::writeString((int)v2, (char **)&v6);
  v3 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v6 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
}


int __fastcall SubClientLoginPacket::handle(SubClientLoginPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, SubClientLoginPacket *))(*(_DWORD *)a3 + 48))(
           a3,
           a2,
           this);
}
