

const void **__fastcall ContainerOpenPacket::write(ContainerOpenPacket *this, BinaryStream *a2)
{
  ContainerOpenPacket *v2; // r5@1
  BinaryStream *v3; // r4@1

  v2 = this;
  v3 = a2;
  BinaryStream::writeByte(a2, *((_BYTE *)this + 13));
  BinaryStream::writeByte(v3, *((_BYTE *)v2 + 14));
  BinaryStream::writeType<NetworkBlockPosition>((int)v3, (signed int *)v2 + 4);
  return j_j_j__ZN12BinaryStream9writeTypeI14EntityUniqueIDEEvRKT_((int)v3, (__int64 *)v2 + 4);
}


signed int __fastcall ContainerOpenPacket::getId(ContainerOpenPacket *this)
{
  return 46;
}


int __fastcall ContainerOpenPacket::handle(ContainerOpenPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, ContainerOpenPacket *))(*(_DWORD *)a3 + 224))(
           a3,
           a2,
           this);
}


int __fastcall ContainerOpenPacket::read(ContainerOpenPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r5@1
  ContainerOpenPacket *v3; // r4@1
  int v5; // [sp+0h] [bp-20h]@1
  int v6; // [sp+4h] [bp-1Ch]@1
  int v7; // [sp+8h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  *((_BYTE *)this + 13) = ReadOnlyBinaryStream::getByte(a2);
  *((_BYTE *)v3 + 14) = ReadOnlyBinaryStream::getByte(v2);
  ReadOnlyBinaryStream::getType<NetworkBlockPosition>((int)&v5, (int)v2);
  *((_DWORD *)v3 + 4) = v5;
  *((_DWORD *)v3 + 5) = v6;
  *((_DWORD *)v3 + 6) = v7;
  ReadOnlyBinaryStream::getType<EntityUniqueID>((int)&v5, (int)v2);
  *((_QWORD *)v3 + 4) = *(_QWORD *)&v5;
  return 0;
}
