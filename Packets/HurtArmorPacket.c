

int __fastcall HurtArmorPacket::handle(HurtArmorPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, HurtArmorPacket *))(*(_DWORD *)a3 + 216))(
           a3,
           a2,
           this);
}


signed int __fastcall HurtArmorPacket::getId(HurtArmorPacket *this)
{
  return 38;
}


int __fastcall HurtArmorPacket::read(HurtArmorPacket *this, BinaryStream *a2)
{
  *((_DWORD *)this + 4) = ReadOnlyBinaryStream::getVarInt(a2);
  return 0;
}
