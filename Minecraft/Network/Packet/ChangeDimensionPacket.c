

int __fastcall ChangeDimensionPacket::read(ChangeDimensionPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  ChangeDimensionPacket *v3; // r5@1
  int v5; // [sp+4h] [bp-1Ch]@1
  int v6; // [sp+8h] [bp-18h]@1
  int v7; // [sp+Ch] [bp-14h]@1

  v2 = a2;
  v3 = this;
  *((_DWORD *)this + 4) = ReadOnlyBinaryStream::getVarInt(a2);
  ReadOnlyBinaryStream::getType<Vec3>((int)&v5, (int)v2);
  *((_DWORD *)v3 + 5) = v5;
  *((_DWORD *)v3 + 6) = v6;
  *((_DWORD *)v3 + 7) = v7;
  *((_BYTE *)v3 + 32) = ReadOnlyBinaryStream::getBool(v2);
  return 0;
}


const void **__fastcall ChangeDimensionPacket::write(ChangeDimensionPacket *this, BinaryStream *a2)
{
  ChangeDimensionPacket *v2; // r5@1
  BinaryStream *v3; // r4@1

  v2 = this;
  v3 = a2;
  BinaryStream::writeVarInt(a2, *((_DWORD *)this + 4));
  BinaryStream::writeType<Vec3>((int)v3, (int *)v2 + 5);
  return j_j_j__ZN12BinaryStream9writeBoolEb_1(v3, *((_BYTE *)v2 + 32));
}


int __fastcall ChangeDimensionPacket::handle(ChangeDimensionPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, ChangeDimensionPacket *))(*(_DWORD *)a3 + 288))(
           a3,
           a2,
           this);
}


signed int __fastcall ChangeDimensionPacket::getId(ChangeDimensionPacket *this)
{
  return 61;
}
