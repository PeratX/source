

const void **__fastcall EntityFallPacket::write(EntityFallPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  EntityFallPacket *v3; // r5@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<EntityRuntimeID>((int)a2, (unsigned __int64 *)this + 2);
  BinaryStream::writeFloat(v2, *((float *)v3 + 6));
  return j_j_j__ZN12BinaryStream9writeBoolEb_0(v2, *((_BYTE *)v3 + 28));
}


int __fastcall EntityFallPacket::handle(EntityFallPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, EntityFallPacket *))(*(_DWORD *)a3 + 212))(
           a3,
           a2,
           this);
}


signed int __fastcall EntityFallPacket::getId(EntityFallPacket *this)
{
  return 37;
}


int __fastcall EntityFallPacket::read(EntityFallPacket *this, BinaryStream *a2)
{
  EntityFallPacket *v2; // r5@1
  BinaryStream *v3; // r4@1
  int v5; // [sp+0h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<EntityRuntimeID>((int)&v5, (int)a2);
  *((_QWORD *)v2 + 2) = *(_QWORD *)&v5;
  *((_DWORD *)v2 + 6) = ReadOnlyBinaryStream::getFloat(v3);
  *((_BYTE *)v2 + 28) = ReadOnlyBinaryStream::getBool(v3);
  return 0;
}
