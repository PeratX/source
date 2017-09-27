

signed int __fastcall EntityEventPacket::getId(EntityEventPacket *this)
{
  return 27;
}


int __fastcall EntityEventPacket::read(EntityEventPacket *this, BinaryStream *a2)
{
  EntityEventPacket *v2; // r5@1
  BinaryStream *v3; // r4@1
  int v5; // [sp+0h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<EntityRuntimeID>((int)&v5, (int)a2);
  *((_QWORD *)v2 + 2) = *(_QWORD *)&v5;
  *((_BYTE *)v2 + 24) = ReadOnlyBinaryStream::getByte(v3);
  *((_DWORD *)v2 + 7) = ReadOnlyBinaryStream::getVarInt(v3);
  return 0;
}


unsigned int __fastcall EntityEventPacket::write(EntityEventPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  EntityEventPacket *v3; // r5@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<EntityRuntimeID>((int)a2, (unsigned __int64 *)this + 2);
  BinaryStream::writeByte(v2, *((_BYTE *)v3 + 24));
  return j_j_j__ZN12BinaryStream11writeVarIntEi_0(v2, *((_DWORD *)v3 + 7));
}


int __fastcall EntityEventPacket::handle(EntityEventPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, EntityEventPacket *))(*(_DWORD *)a3 + 168))(
           a3,
           a2,
           this);
}
