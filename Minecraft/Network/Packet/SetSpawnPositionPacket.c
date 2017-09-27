

const void **__fastcall SetSpawnPositionPacket::write(SetSpawnPositionPacket *this, BinaryStream *a2)
{
  SetSpawnPositionPacket *v2; // r5@1
  BinaryStream *v3; // r4@1

  v2 = this;
  v3 = a2;
  BinaryStream::writeVarInt(a2, *((_DWORD *)this + 7));
  BinaryStream::writeType<NetworkBlockPosition>((int)v3, (signed int *)v2 + 4);
  return j_j_j__ZN12BinaryStream9writeBoolEb_0(v3, *((_BYTE *)v2 + 32));
}


int __fastcall SetSpawnPositionPacket::handle(SetSpawnPositionPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, SetSpawnPositionPacket *))(*(_DWORD *)a3 + 200))(
           a3,
           a2,
           this);
}


int __fastcall SetSpawnPositionPacket::read(SetSpawnPositionPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  SetSpawnPositionPacket *v3; // r5@1
  int v5; // [sp+4h] [bp-1Ch]@1
  int v6; // [sp+8h] [bp-18h]@1
  int v7; // [sp+Ch] [bp-14h]@1

  v2 = a2;
  v3 = this;
  *((_DWORD *)this + 7) = ReadOnlyBinaryStream::getVarInt(a2);
  ReadOnlyBinaryStream::getType<NetworkBlockPosition>((int)&v5, (int)v2);
  *((_DWORD *)v3 + 4) = v5;
  *((_DWORD *)v3 + 5) = v6;
  *((_DWORD *)v3 + 6) = v7;
  *((_BYTE *)v3 + 32) = ReadOnlyBinaryStream::getBool(v2);
  return 0;
}


signed int __fastcall SetSpawnPositionPacket::getId(SetSpawnPositionPacket *this)
{
  return 43;
}
