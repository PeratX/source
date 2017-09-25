

int __fastcall PlayerActionPacket::read(PlayerActionPacket *this, BinaryStream *a2)
{
  PlayerActionPacket *v2; // r4@1
  BinaryStream *v3; // r5@1
  int v5; // [sp+0h] [bp-20h]@1
  int v6; // [sp+4h] [bp-1Ch]@1
  int v7; // [sp+8h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<EntityRuntimeID>((int)&v5, (int)a2);
  *((_QWORD *)v2 + 5) = *(_QWORD *)&v5;
  *((_DWORD *)v2 + 8) = ReadOnlyBinaryStream::getVarInt(v3);
  ReadOnlyBinaryStream::getType<NetworkBlockPosition>((int)&v5, (int)v3);
  *((_DWORD *)v2 + 4) = v5;
  *((_DWORD *)v2 + 5) = v6;
  *((_DWORD *)v2 + 6) = v7;
  *((_DWORD *)v2 + 7) = ReadOnlyBinaryStream::getVarInt(v3);
  return 0;
}


signed int __fastcall PlayerActionPacket::getId(PlayerActionPacket *this)
{
  return 36;
}


int __fastcall PlayerActionPacket::handle(PlayerActionPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, PlayerActionPacket *))(*(_DWORD *)a3 + 208))(
           a3,
           a2,
           this);
}


unsigned int __fastcall PlayerActionPacket::write(PlayerActionPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  PlayerActionPacket *v3; // r5@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<EntityRuntimeID>((int)a2, (unsigned __int64 *)this + 5);
  BinaryStream::writeVarInt(v2, *((_DWORD *)v3 + 8));
  BinaryStream::writeType<NetworkBlockPosition>((int)v2, (signed int *)v3 + 4);
  return j_j_j__ZN12BinaryStream11writeVarIntEi_0(v2, *((_DWORD *)v3 + 7));
}
