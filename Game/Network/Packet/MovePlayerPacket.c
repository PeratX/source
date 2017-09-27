

int __fastcall MovePlayerPacket::handle(MovePlayerPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, MovePlayerPacket *))(*(_DWORD *)a3 + 120))(
           a3,
           a2,
           this);
}


int __fastcall MovePlayerPacket::read(MovePlayerPacket *this, BinaryStream *a2)
{
  MovePlayerPacket *v2; // r4@1
  BinaryStream *v3; // r5@1
  int v4; // r0@2
  int v6; // [sp+0h] [bp-20h]@1
  int v7; // [sp+4h] [bp-1Ch]@1
  int v8; // [sp+8h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<EntityRuntimeID>((int)&v6, (int)a2);
  *((_QWORD *)v2 + 2) = *(_QWORD *)&v6;
  ReadOnlyBinaryStream::getType<Vec3>((int)&v6, (int)v3);
  *((_DWORD *)v2 + 6) = v6;
  *((_DWORD *)v2 + 7) = v7;
  *((_DWORD *)v2 + 8) = v8;
  ReadOnlyBinaryStream::getType<Vec2>((int)&v6, (int)v3);
  *(_QWORD *)((char *)v2 + 36) = *(_QWORD *)&v6;
  *((_DWORD *)v2 + 11) = ReadOnlyBinaryStream::getFloat(v3);
  *((_BYTE *)v2 + 48) = ReadOnlyBinaryStream::getByte(v3);
  *((_BYTE *)v2 + 49) = ReadOnlyBinaryStream::getBool(v3);
  ReadOnlyBinaryStream::getType<EntityRuntimeID>((int)&v6, (int)v3);
  *((_QWORD *)v2 + 7) = *(_QWORD *)&v6;
  if ( *((_BYTE *)v2 + 48) == 2 )
  {
    *((_DWORD *)v2 + 16) = ReadOnlyBinaryStream::getSignedInt(v3);
    v4 = ReadOnlyBinaryStream::getSignedInt(v3);
  }
  else
    v4 = 0;
    *((_DWORD *)v2 + 16) = 0;
  *((_DWORD *)v2 + 17) = v4;
  return 0;
}


signed int __fastcall MovePlayerPacket::getId(MovePlayerPacket *this)
{
  return 19;
}


const void **__fastcall MovePlayerPacket::write(MovePlayerPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  MovePlayerPacket *v3; // r5@1
  const void **result; // r0@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<EntityRuntimeID>((int)a2, (unsigned __int64 *)this + 2);
  BinaryStream::writeType<Vec3>((int)v2, (int *)v3 + 6);
  BinaryStream::writeType<Vec2>((int)v2, (int *)v3 + 9);
  BinaryStream::writeFloat(v2, *((float *)v3 + 11));
  BinaryStream::writeByte(v2, *((_BYTE *)v3 + 48));
  BinaryStream::writeBool(v2, *((_BYTE *)v3 + 49));
  BinaryStream::writeType<EntityRuntimeID>((int)v2, (unsigned __int64 *)v3 + 7);
  result = (const void **)*((_BYTE *)v3 + 48);
  if ( result == (const void **)2 )
  {
    BinaryStream::writeSignedInt(v2, *((_DWORD *)v3 + 16));
    result = j_j_j__ZN12BinaryStream14writeSignedIntEi(v2, *((_DWORD *)v3 + 17));
  }
  return result;
}
