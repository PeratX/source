

int __fastcall ServerSettingsRequestPacket::handle(ServerSettingsRequestPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, ServerSettingsRequestPacket *))(*(_DWORD *)a3 + 424))(
           a3,
           a2,
           this);
}


int __fastcall ServerSettingsRequestPacket::read(ServerSettingsRequestPacket *this, BinaryStream *a2)
{
  return 0;
}


signed int __fastcall ServerSettingsRequestPacket::getId(ServerSettingsRequestPacket *this)
{
  return 102;
}
