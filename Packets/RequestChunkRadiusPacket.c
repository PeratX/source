

signed int __fastcall RequestChunkRadiusPacket::getId(RequestChunkRadiusPacket *this)
{
  return 69;
}


int __fastcall RequestChunkRadiusPacket::handle(RequestChunkRadiusPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, RequestChunkRadiusPacket *))(*(_DWORD *)a3 + 312))(
           a3,
           a2,
           this);
}


int __fastcall RequestChunkRadiusPacket::read(RequestChunkRadiusPacket *this, BinaryStream *a2)
{
  *((_DWORD *)this + 4) = ReadOnlyBinaryStream::getVarInt(a2);
  return 0;
}
