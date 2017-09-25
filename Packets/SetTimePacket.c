

int __fastcall SetTimePacket::read(SetTimePacket *this, BinaryStream *a2)
{
  *((_DWORD *)this + 4) = ReadOnlyBinaryStream::getVarInt(a2);
  return 0;
}


int __fastcall SetTimePacket::handle(SetTimePacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, SetTimePacket *))(*(_DWORD *)a3 + 76))(
           a3,
           a2,
           this);
}


signed int __fastcall SetTimePacket::getId(SetTimePacket *this)
{
  return 10;
}
