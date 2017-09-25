

const void **__fastcall PlayerInputPacket::write(PlayerInputPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  PlayerInputPacket *v3; // r5@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<Vec2>((int)a2, (int *)this + 4);
  BinaryStream::writeBool(v2, *((_BYTE *)v3 + 24));
  return j_j_j__ZN12BinaryStream9writeBoolEb_0(v2, *((_BYTE *)v3 + 25));
}


signed int __fastcall PlayerInputPacket::getId(PlayerInputPacket *this)
{
  return 57;
}


int __fastcall PlayerInputPacket::read(PlayerInputPacket *this, BinaryStream *a2)
{
  PlayerInputPacket *v2; // r5@1
  BinaryStream *v3; // r4@1
  int v5; // [sp+0h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<Vec2>((int)&v5, (int)a2);
  *((_QWORD *)v2 + 2) = *(_QWORD *)&v5;
  *((_BYTE *)v2 + 24) = ReadOnlyBinaryStream::getBool(v3);
  *((_BYTE *)v2 + 25) = ReadOnlyBinaryStream::getBool(v3);
  return 0;
}


int __fastcall PlayerInputPacket::handle(PlayerInputPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, PlayerInputPacket *))(*(_DWORD *)a3 + 268))(
           a3,
           a2,
           this);
}
