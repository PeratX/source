

const void **__fastcall LevelSoundEventPacket::write(LevelSoundEventPacket *this, BinaryStream *a2)
{
  LevelSoundEventPacket *v2; // r5@1
  BinaryStream *v3; // r4@1

  v2 = this;
  v3 = a2;
  BinaryStream::writeByte(a2, *((_BYTE *)this + 13));
  BinaryStream::writeType<Vec3>((int)v3, (int *)v2 + 4);
  BinaryStream::writeVarInt(v3, *((_DWORD *)v2 + 7));
  BinaryStream::writeVarInt(v3, *((_DWORD *)v2 + 8));
  BinaryStream::writeBool(v3, *((_BYTE *)v2 + 36));
  return j_j_j__ZN12BinaryStream9writeBoolEb_0(v3, *((_BYTE *)v2 + 37));
}


int __fastcall LevelSoundEventPacket::read(LevelSoundEventPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r5@1
  LevelSoundEventPacket *v3; // r4@1
  int v5; // [sp+4h] [bp-1Ch]@1
  int v6; // [sp+8h] [bp-18h]@1
  int v7; // [sp+Ch] [bp-14h]@1

  v2 = a2;
  v3 = this;
  *((_BYTE *)this + 13) = ReadOnlyBinaryStream::getByte(a2);
  ReadOnlyBinaryStream::getType<Vec3>((int)&v5, (int)v2);
  *((_DWORD *)v3 + 4) = v5;
  *((_DWORD *)v3 + 5) = v6;
  *((_DWORD *)v3 + 6) = v7;
  *((_DWORD *)v3 + 7) = ReadOnlyBinaryStream::getVarInt(v2);
  *((_DWORD *)v3 + 8) = ReadOnlyBinaryStream::getVarInt(v2);
  *((_BYTE *)v3 + 36) = ReadOnlyBinaryStream::getBool(v2);
  *((_BYTE *)v3 + 37) = ReadOnlyBinaryStream::getBool(v2);
  return 0;
}


signed int __fastcall LevelSoundEventPacket::getId(LevelSoundEventPacket *this)
{
  return 24;
}


int __fastcall LevelSoundEventPacket::handle(LevelSoundEventPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, LevelSoundEventPacket *))(*(_DWORD *)a3 + 144))(
           a3,
           a2,
           this);
}
