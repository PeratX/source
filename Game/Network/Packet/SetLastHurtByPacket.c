

int __fastcall SetLastHurtByPacket::handle(SetLastHurtByPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, SetLastHurtByPacket *))(*(_DWORD *)a3 + 448))(
           a3,
           a2,
           this);
}


int __fastcall SetLastHurtByPacket::read(SetLastHurtByPacket *this, BinaryStream *a2)
{
  *((_DWORD *)this + 4) = ReadOnlyBinaryStream::getVarInt(a2);
  return 0;
}


signed int __fastcall SetLastHurtByPacket::getId(SetLastHurtByPacket *this)
{
  return 96;
}
