

int __fastcall PlayStatusPacket::handle(PlayStatusPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, PlayStatusPacket *))(*(_DWORD *)a3 + 72))(
           a3,
           a2,
           this);
}


int __fastcall PlayStatusPacket::read(PlayStatusPacket *this, BinaryStream *a2)
{
  *((_DWORD *)this + 4) = ReadOnlyBinaryStream::getSignedBigEndianInt(a2);
  return 0;
}


signed int __fastcall PlayStatusPacket::getId(PlayStatusPacket *this)
{
  return 2;
}
