

int __fastcall RiderJumpPacket::handle(RiderJumpPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, RiderJumpPacket *))(*(_DWORD *)a3 + 124))(
           a3,
           a2,
           this);
}


int __fastcall RiderJumpPacket::read(RiderJumpPacket *this, BinaryStream *a2)
{
  *((_DWORD *)this + 4) = ReadOnlyBinaryStream::getVarInt(a2);
  return 0;
}


signed int __fastcall RiderJumpPacket::getId(RiderJumpPacket *this)
{
  return 20;
}
