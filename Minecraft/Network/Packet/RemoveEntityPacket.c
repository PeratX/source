

int __fastcall RemoveEntityPacket::read(RemoveEntityPacket *this, BinaryStream *a2)
{
  RemoveEntityPacket *v2; // r4@1
  int v4; // [sp+0h] [bp-10h]@1

  v2 = this;
  ReadOnlyBinaryStream::getType<EntityUniqueID>((int)&v4, (int)a2);
  *((_QWORD *)v2 + 2) = *(_QWORD *)&v4;
  return 0;
}


signed int __fastcall RemoveEntityPacket::getId(RemoveEntityPacket *this)
{
  return 14;
}


int __fastcall RemoveEntityPacket::handle(RemoveEntityPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, RemoveEntityPacket *))(*(_DWORD *)a3 + 112))(
           a3,
           a2,
           this);
}
