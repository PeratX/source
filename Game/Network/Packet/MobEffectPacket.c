

unsigned int __fastcall MobEffectPacket::write(MobEffectPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  MobEffectPacket *v3; // r5@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<EntityRuntimeID>((int)a2, (unsigned __int64 *)this + 2);
  BinaryStream::writeByte(v2, *((_BYTE *)v3 + 28));
  BinaryStream::writeVarInt(v2, *((_DWORD *)v3 + 8));
  BinaryStream::writeVarInt(v2, *((_DWORD *)v3 + 9));
  BinaryStream::writeBool(v2, *((_BYTE *)v3 + 40));
  return j_j_j__ZN12BinaryStream11writeVarIntEi_1(v2, *((_DWORD *)v3 + 6));
}


int __fastcall MobEffectPacket::read(MobEffectPacket *this, BinaryStream *a2)
{
  MobEffectPacket *v2; // r4@1
  BinaryStream *v3; // r5@1
  int v5; // [sp+0h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<EntityRuntimeID>((int)&v5, (int)a2);
  *((_QWORD *)v2 + 2) = *(_QWORD *)&v5;
  *((_BYTE *)v2 + 28) = ReadOnlyBinaryStream::getByte(v3);
  *((_DWORD *)v2 + 8) = ReadOnlyBinaryStream::getVarInt(v3);
  *((_DWORD *)v2 + 9) = ReadOnlyBinaryStream::getVarInt(v3);
  *((_BYTE *)v2 + 40) = ReadOnlyBinaryStream::getBool(v3);
  *((_DWORD *)v2 + 6) = ReadOnlyBinaryStream::getVarInt(v3);
  return 0;
}


int __fastcall MobEffectPacket::handle(MobEffectPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, MobEffectPacket *))(*(_DWORD *)a3 + 172))(
           a3,
           a2,
           this);
}


signed int __fastcall MobEffectPacket::getId(MobEffectPacket *this)
{
  return 28;
}
