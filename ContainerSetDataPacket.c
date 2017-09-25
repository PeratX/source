

int __fastcall ContainerSetDataPacket::read(ContainerSetDataPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  ContainerSetDataPacket *v3; // r5@1

  v2 = a2;
  v3 = this;
  *((_BYTE *)this + 24) = ReadOnlyBinaryStream::getByte(a2);
  *((_DWORD *)v3 + 4) = ReadOnlyBinaryStream::getVarInt(v2);
  *((_DWORD *)v3 + 5) = ReadOnlyBinaryStream::getVarInt(v2);
  return 0;
}


unsigned int __fastcall ContainerSetDataPacket::write(ContainerSetDataPacket *this, BinaryStream *a2)
{
  ContainerSetDataPacket *v2; // r5@1
  BinaryStream *v3; // r4@1

  v2 = this;
  v3 = a2;
  BinaryStream::writeByte(a2, *((_BYTE *)this + 24));
  BinaryStream::writeVarInt(v3, *((_DWORD *)v2 + 4));
  return j_j_j__ZN12BinaryStream11writeVarIntEi_1(v3, *((_DWORD *)v2 + 5));
}


int __fastcall ContainerSetDataPacket::handle(ContainerSetDataPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, ContainerSetDataPacket *))(*(_DWORD *)a3 + 232))(
           a3,
           a2,
           this);
}


signed int __fastcall ContainerSetDataPacket::getId(ContainerSetDataPacket *this)
{
  return 51;
}
