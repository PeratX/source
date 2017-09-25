

signed int __fastcall SetDifficultyPacket::getId(SetDifficultyPacket *this)
{
  return 60;
}


int __fastcall SetDifficultyPacket::handle(SetDifficultyPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, SetDifficultyPacket *))(*(_DWORD *)a3 + 280))(
           a3,
           a2,
           this);
}


int __fastcall SetDifficultyPacket::read(SetDifficultyPacket *this, BinaryStream *a2)
{
  *((_DWORD *)this + 4) = ReadOnlyBinaryStream::getUnsignedVarInt(a2);
  return 0;
}
