

int __fastcall UpdateBlockPacket::read(UpdateBlockPacket *this, BinaryStream *a2)
{
  UpdateBlockPacket *v2; // r5@1
  BinaryStream *v3; // r4@1
  unsigned int v4; // r0@1
  int v6; // [sp+4h] [bp-1Ch]@1
  int v7; // [sp+8h] [bp-18h]@1
  int v8; // [sp+Ch] [bp-14h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<NetworkBlockPosition>((int)&v6, (int)a2);
  *((_DWORD *)v2 + 4) = v6;
  *((_DWORD *)v2 + 5) = v7;
  *((_DWORD *)v2 + 6) = v8;
  *((_BYTE *)v2 + 28) = ReadOnlyBinaryStream::getUnsignedVarInt(v3);
  v4 = ReadOnlyBinaryStream::getUnsignedVarInt(v3);
  *((_BYTE *)v2 + 29) = v4 & 0xF;
  *((_BYTE *)v2 + 30) = v4 >> 4;
  return 0;
}


unsigned int __fastcall UpdateBlockPacket::write(UpdateBlockPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  UpdateBlockPacket *v3; // r5@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<NetworkBlockPosition>((int)a2, (signed int *)this + 4);
  BinaryStream::writeUnsignedVarInt(v2, *((_BYTE *)v3 + 28));
  return j_j_j__ZN12BinaryStream19writeUnsignedVarIntEj_1(v2, *((_BYTE *)v3 + 29) | 16 * *((_BYTE *)v3 + 30));
}


int __fastcall UpdateBlockPacket::handle(UpdateBlockPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, UpdateBlockPacket *))(*(_DWORD *)a3 + 136))(
           a3,
           a2,
           this);
}


signed int __fastcall UpdateBlockPacket::getId(UpdateBlockPacket *this)
{
  return 21;
}
