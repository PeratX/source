

int __fastcall LevelEventPacket::read(LevelEventPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  LevelEventPacket *v3; // r5@1
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
  *((_DWORD *)v3 + 8) = ReadOnlyBinaryStream::getVarInt(v2);
  return 0;
}


int __fastcall LevelEventPacket::handle(LevelEventPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, LevelEventPacket *))(*(_DWORD *)a3 + 148))(
           a3,
           a2,
           this);
}


unsigned int __fastcall LevelEventPacket::write(LevelEventPacket *this, BinaryStream *a2)
{
  LevelEventPacket *v2; // r5@1
  BinaryStream *v3; // r4@1

  v2 = this;
  v3 = a2;
  BinaryStream::writeVarInt(a2, *((_DWORD *)this + 4));
  BinaryStream::writeType<Vec3>((int)v3, (int *)v2 + 5);
  return j_j_j__ZN12BinaryStream11writeVarIntEi_1(v3, *((_DWORD *)v2 + 8));
}


signed int __fastcall LevelEventPacket::getId(LevelEventPacket *this)
{
  return 25;
}
