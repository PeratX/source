

int __fastcall SetPlayerGameTypePacket::read(SetPlayerGameTypePacket *this, BinaryStream *a2)
{
  *((_DWORD *)this + 4) = ReadOnlyBinaryStream::getVarInt(a2);
  return 0;
}


signed int __fastcall SetPlayerGameTypePacket::getId(SetPlayerGameTypePacket *this)
{
  return 62;
}


int __fastcall SetPlayerGameTypePacket::handle(SetPlayerGameTypePacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, SetPlayerGameTypePacket *))(*(_DWORD *)a3 + 128))(
           a3,
           a2,
           this);
}
