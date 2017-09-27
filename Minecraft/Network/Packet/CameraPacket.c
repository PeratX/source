

const void **__fastcall CameraPacket::write(CameraPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  CameraPacket *v3; // r5@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<EntityUniqueID>((int)a2, (__int64 *)this + 2);
  return j_j_j__ZN12BinaryStream9writeTypeI14EntityUniqueIDEEvRKT_((int)v2, (__int64 *)v3 + 3);
}


int __fastcall CameraPacket::read(CameraPacket *this, BinaryStream *a2)
{
  CameraPacket *v2; // r5@1
  BinaryStream *v3; // r4@1
  int v5; // [sp+0h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<EntityUniqueID>((int)&v5, (int)a2);
  *((_QWORD *)v2 + 2) = *(_QWORD *)&v5;
  ReadOnlyBinaryStream::getType<EntityUniqueID>((int)&v5, (int)v3);
  *((_QWORD *)v2 + 3) = *(_QWORD *)&v5;
  return 0;
}


signed int __fastcall CameraPacket::getId(CameraPacket *this)
{
  return 73;
}


int __fastcall CameraPacket::handle(CameraPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, CameraPacket *))(*(_DWORD *)a3 + 352))(
           a3,
           a2,
           this);
}
