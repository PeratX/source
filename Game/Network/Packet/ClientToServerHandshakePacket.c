

int __fastcall ClientToServerHandshakePacket::handle(ClientToServerHandshakePacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, ClientToServerHandshakePacket *))(*(_DWORD *)a3 + 52))(
           a3,
           a2,
           this);
}


signed int __fastcall ClientToServerHandshakePacket::getId(ClientToServerHandshakePacket *this)
{
  return 4;
}


int __fastcall ClientToServerHandshakePacket::read(ClientToServerHandshakePacket *this, BinaryStream *a2)
{
  return 0;
}
