

signed int __fastcall ContainerClosePacket::getId(ContainerClosePacket *this)
{
  return 47;
}


int __fastcall ContainerClosePacket::handle(ContainerClosePacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, ContainerClosePacket *))(*(_DWORD *)a3 + 228))(
           a3,
           a2,
           this);
}


int __fastcall ContainerClosePacket::read(ContainerClosePacket *this, BinaryStream *a2)
{
  *((_BYTE *)this + 13) = ReadOnlyBinaryStream::getByte(a2);
  return 0;
}
