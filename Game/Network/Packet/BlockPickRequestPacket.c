

int __fastcall BlockPickRequestPacket::read(BlockPickRequestPacket *this, BinaryStream *a2)
{
  BlockPickRequestPacket *v2; // r5@1
  BinaryStream *v3; // r4@1
  int v5; // [sp+4h] [bp-1Ch]@1
  int v6; // [sp+8h] [bp-18h]@1
  int v7; // [sp+Ch] [bp-14h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<BlockPos>((int)&v5, (int)a2);
  *((_DWORD *)v2 + 4) = v5;
  *((_DWORD *)v2 + 5) = v6;
  *((_DWORD *)v2 + 6) = v7;
  *((_BYTE *)v2 + 28) = ReadOnlyBinaryStream::getBool(v3);
  *((_BYTE *)v2 + 29) = ReadOnlyBinaryStream::getByte(v3);
  return 0;
}


const void **__fastcall BlockPickRequestPacket::write(BlockPickRequestPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  BlockPickRequestPacket *v3; // r5@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<BlockPos>((int)a2, (signed int *)this + 4);
  BinaryStream::writeBool(v2, *((_BYTE *)v3 + 28));
  return j_j_j__ZN12BinaryStream9writeByteEh_0(v2, *((_BYTE *)v3 + 29));
}


int __fastcall BlockPickRequestPacket::handle(BlockPickRequestPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, BlockPickRequestPacket *))(*(_DWORD *)a3 + 156))(
           a3,
           a2,
           this);
}


signed int __fastcall BlockPickRequestPacket::getId(BlockPickRequestPacket *this)
{
  return 34;
}
