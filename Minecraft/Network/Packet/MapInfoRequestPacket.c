

int __fastcall MapInfoRequestPacket::read(MapInfoRequestPacket *this, BinaryStream *a2)
{
  MapInfoRequestPacket *v2; // r4@1
  int v4; // [sp+0h] [bp-10h]@1

  v2 = this;
  ReadOnlyBinaryStream::getType<EntityUniqueID>((int)&v4, (int)a2);
  *((_QWORD *)v2 + 2) = *(_QWORD *)&v4;
  return 0;
}


int __fastcall MapInfoRequestPacket::handle(MapInfoRequestPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, MapInfoRequestPacket *))(*(_DWORD *)a3 + 316))(
           a3,
           a2,
           this);
}


signed int __fastcall MapInfoRequestPacket::getId(MapInfoRequestPacket *this)
{
  return 68;
}
