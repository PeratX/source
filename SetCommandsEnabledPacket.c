

signed int __fastcall SetCommandsEnabledPacket::getId(SetCommandsEnabledPacket *this)
{
  return 59;
}


int __fastcall SetCommandsEnabledPacket::read(SetCommandsEnabledPacket *this, BinaryStream *a2)
{
  *((_BYTE *)this + 13) = ReadOnlyBinaryStream::getBool(a2);
  return 0;
}


int __fastcall SetCommandsEnabledPacket::handle(SetCommandsEnabledPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, SetCommandsEnabledPacket *))(*(_DWORD *)a3 + 276))(
           a3,
           a2,
           this);
}
