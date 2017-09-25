

int __fastcall RespawnPacket::handle(RespawnPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, RespawnPacket *))(*(_DWORD *)a3 + 436))(
           a3,
           a2,
           this);
}


int __fastcall RespawnPacket::read(RespawnPacket *this, BinaryStream *a2)
{
  RespawnPacket *v2; // r4@1
  int v4; // [sp+4h] [bp-14h]@1
  int v5; // [sp+8h] [bp-10h]@1
  int v6; // [sp+Ch] [bp-Ch]@1

  v2 = this;
  ReadOnlyBinaryStream::getType<Vec3>((int)&v4, (int)a2);
  *((_DWORD *)v2 + 4) = v4;
  *((_DWORD *)v2 + 5) = v5;
  *((_DWORD *)v2 + 6) = v6;
  return 0;
}


signed int __fastcall RespawnPacket::getId(RespawnPacket *this)
{
  return 45;
}
