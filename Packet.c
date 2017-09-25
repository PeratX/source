

signed int __fastcall Packet::readWithHeader(Packet *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  Packet *v3; // r5@1
  int v4; // r0@1
  signed int v5; // r1@1

  v2 = a2;
  v3 = this;
  *((_BYTE *)this + 12) = ReadOnlyBinaryStream::getByte(a2);
  v4 = (*(int (__fastcall **)(Packet *, BinaryStream *))(*(_DWORD *)v3 + 20))(v3, v2);
  v5 = 0;
  if ( v4 != 1 )
    v5 = 1;
  return v5;
}


int __fastcall Packet::disallowBatching(Packet *this)
{
  return 0;
}


int __fastcall Packet::writeWithHeader(Packet *this, BinaryStream *a2)
{
  Packet *v2; // r5@1
  BinaryStream *v3; // r4@1

  v2 = this;
  v3 = a2;
  BinaryStream::writeByte(a2, *((_BYTE *)this + 12));
  return (*(int (__fastcall **)(Packet *, BinaryStream *))(*(_DWORD *)v2 + 16))(v2, v3);
}
