

signed int __fastcall ChunkRadiusUpdatedPacket::getId(ChunkRadiusUpdatedPacket *this)
{
  return 70;
}


int __fastcall ChunkRadiusUpdatedPacket::handle(ChunkRadiusUpdatedPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, ChunkRadiusUpdatedPacket *))(*(_DWORD *)a3 + 320))(
           a3,
           a2,
           this);
}


int __fastcall ChunkRadiusUpdatedPacket::read(ChunkRadiusUpdatedPacket *this, BinaryStream *a2)
{
  *((_DWORD *)this + 4) = ReadOnlyBinaryStream::getVarInt(a2);
  return 0;
}
