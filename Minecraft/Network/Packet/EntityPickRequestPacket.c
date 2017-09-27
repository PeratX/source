

int __fastcall EntityPickRequestPacket::read(EntityPickRequestPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  EntityPickRequestPacket *v3; // r5@1

  v2 = a2;
  v3 = this;
  *((_QWORD *)this + 2) = ReadOnlyBinaryStream::getSignedInt64(a2);
  *((_BYTE *)v3 + 24) = ReadOnlyBinaryStream::getByte(v2);
  return 0;
}


signed int __fastcall EntityPickRequestPacket::getId(EntityPickRequestPacket *this)
{
  return 35;
}


int __fastcall EntityPickRequestPacket::handle(EntityPickRequestPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, EntityPickRequestPacket *))(*(_DWORD *)a3 + 160))(
           a3,
           a2,
           this);
}


const void **__fastcall EntityPickRequestPacket::write(EntityPickRequestPacket *this, BinaryStream *a2)
{
  EntityPickRequestPacket *v2; // r5@1
  BinaryStream *v3; // r4@1

  v2 = this;
  v3 = a2;
  BinaryStream::writeSignedInt64(a2, (int)a2, *((_QWORD *)this + 2));
  return j_j_j__ZN12BinaryStream9writeByteEh_0(v3, *((_BYTE *)v2 + 24));
}
