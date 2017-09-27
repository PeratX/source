

int __fastcall SetHealthPacket::handle(SetHealthPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, SetHealthPacket *))(*(_DWORD *)a3 + 192))(
           a3,
           a2,
           this);
}


signed int __fastcall SetHealthPacket::getId(SetHealthPacket *this)
{
  return 42;
}


int __fastcall SetHealthPacket::read(SetHealthPacket *this, BinaryStream *a2)
{
  *((_DWORD *)this + 4) = ReadOnlyBinaryStream::getVarInt(a2);
  return 0;
}
