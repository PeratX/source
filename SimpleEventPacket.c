

signed int __fastcall SimpleEventPacket::getId(SimpleEventPacket *this)
{
  return 64;
}


int __fastcall SimpleEventPacket::handle(SimpleEventPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, SimpleEventPacket *))(*(_DWORD *)a3 + 284))(
           a3,
           a2,
           this);
}


int __fastcall SimpleEventPacket::read(SimpleEventPacket *this, BinaryStream *a2)
{
  *((_DWORD *)this + 4) = ReadOnlyBinaryStream::getUnsignedShort(a2);
  return 0;
}
