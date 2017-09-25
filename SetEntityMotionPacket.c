

signed int __fastcall SetEntityMotionPacket::getId(SetEntityMotionPacket *this)
{
  return 40;
}


int __fastcall SetEntityMotionPacket::handle(SetEntityMotionPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, SetEntityMotionPacket *))(*(_DWORD *)a3 + 188))(
           a3,
           a2,
           this);
}


int __fastcall SetEntityMotionPacket::read(SetEntityMotionPacket *this, BinaryStream *a2)
{
  SetEntityMotionPacket *v2; // r5@1
  BinaryStream *v3; // r4@1
  int v5; // [sp+0h] [bp-20h]@1
  int v6; // [sp+4h] [bp-1Ch]@1
  int v7; // [sp+8h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<EntityRuntimeID>((int)&v5, (int)a2);
  *((_QWORD *)v2 + 2) = *(_QWORD *)&v5;
  ReadOnlyBinaryStream::getType<Vec3>((int)&v5, (int)v3);
  *((_DWORD *)v2 + 6) = v5;
  *((_DWORD *)v2 + 7) = v6;
  *((_DWORD *)v2 + 8) = v7;
  return 0;
}


const void **__fastcall SetEntityMotionPacket::write(SetEntityMotionPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  SetEntityMotionPacket *v3; // r5@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<EntityRuntimeID>((int)a2, (unsigned __int64 *)this + 2);
  return j_j_j__ZN12BinaryStream9writeTypeI4Vec3EEvRKT_((int)v2, (int *)v3 + 6);
}
