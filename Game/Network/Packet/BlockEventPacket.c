

signed int __fastcall BlockEventPacket::getId(BlockEventPacket *this)
{
  return 26;
}


int __fastcall BlockEventPacket::read(BlockEventPacket *this, BinaryStream *a2)
{
  BlockEventPacket *v2; // r5@1
  BinaryStream *v3; // r4@1
  int v5; // [sp+4h] [bp-1Ch]@1
  int v6; // [sp+8h] [bp-18h]@1
  int v7; // [sp+Ch] [bp-14h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<NetworkBlockPosition>((int)&v5, (int)a2);
  *((_DWORD *)v2 + 4) = v5;
  *((_DWORD *)v2 + 5) = v6;
  *((_DWORD *)v2 + 6) = v7;
  *((_DWORD *)v2 + 7) = ReadOnlyBinaryStream::getVarInt(v3);
  *((_DWORD *)v2 + 8) = ReadOnlyBinaryStream::getVarInt(v3);
  return 0;
}


int __fastcall BlockEventPacket::handle(BlockEventPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, BlockEventPacket *))(*(_DWORD *)a3 + 152))(
           a3,
           a2,
           this);
}


unsigned int __fastcall BlockEventPacket::write(BlockEventPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  BlockEventPacket *v3; // r5@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<NetworkBlockPosition>((int)a2, (signed int *)this + 4);
  BinaryStream::writeVarInt(v2, *((_DWORD *)v3 + 7));
  return j_j_j__ZN12BinaryStream11writeVarIntEi_1(v2, *((_DWORD *)v3 + 8));
}
