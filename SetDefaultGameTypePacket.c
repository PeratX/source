

signed int __fastcall SetDefaultGameTypePacket::read(SetDefaultGameTypePacket *this, BinaryStream *a2)
{
  SetDefaultGameTypePacket *v2; // r4@1
  GameTypeConv *v3; // r0@1
  int v4; // r1@1
  int v5; // r0@1
  signed int v6; // r1@1

  v2 = this;
  v3 = (GameTypeConv *)ReadOnlyBinaryStream::getVarInt(a2);
  v5 = GameTypeConv::intToGameType(v3, v4);
  v6 = 0;
  *((_DWORD *)v2 + 4) = v5;
  if ( v5 == -1 )
    v6 = 1;
  return v6;
}


int __fastcall SetDefaultGameTypePacket::handle(SetDefaultGameTypePacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, SetDefaultGameTypePacket *))(*(_DWORD *)a3 + 132))(
           a3,
           a2,
           this);
}


signed int __fastcall SetDefaultGameTypePacket::getId(SetDefaultGameTypePacket *this)
{
  return 105;
}
