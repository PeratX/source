

int __fastcall MoveEntityPacket::read(MoveEntityPacket *this, BinaryStream *a2)
{
  MoveEntityPacket *v2; // r4@1
  int v3; // r1@1
  int result; // r0@1
  int v5; // [sp+0h] [bp-28h]@1
  int v6; // [sp+8h] [bp-20h]@1
  int v7; // [sp+Ch] [bp-1Ch]@1
  int v8; // [sp+10h] [bp-18h]@1
  int v9; // [sp+14h] [bp-14h]@1
  char v10; // [sp+18h] [bp-10h]@1

  v2 = this;
  ReadOnlyBinaryStream::getType<MoveEntityPacketData>((int)&v5, (int)a2);
  *((_QWORD *)v2 + 2) = *(_QWORD *)&v5;
  *((_DWORD *)v2 + 6) = v6;
  *((_DWORD *)v2 + 7) = v7;
  *((_DWORD *)v2 + 8) = v8;
  v3 = v9;
  *((_BYTE *)v2 + 40) = v10;
  result = 0;
  *((_DWORD *)v2 + 9) = v3;
  return result;
}


int __fastcall MoveEntityPacket::handle(MoveEntityPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, MoveEntityPacket *))(*(_DWORD *)a3 + 116))(
           a3,
           a2,
           this);
}


signed int __fastcall MoveEntityPacket::getId(MoveEntityPacket *this)
{
  return 18;
}
