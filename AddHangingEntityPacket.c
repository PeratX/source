

signed int __fastcall AddHangingEntityPacket::getId(AddHangingEntityPacket *this)
{
  return 16;
}


int __fastcall AddHangingEntityPacket::read(AddHangingEntityPacket *this, BinaryStream *a2)
{
  AddHangingEntityPacket *v2; // r4@1
  BinaryStream *v3; // r5@1
  int v5; // [sp+0h] [bp-20h]@1
  int v6; // [sp+4h] [bp-1Ch]@1
  int v7; // [sp+8h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<EntityUniqueID>((int)&v5, (int)a2);
  *((_QWORD *)v2 + 2) = *(_QWORD *)&v5;
  ReadOnlyBinaryStream::getType<EntityRuntimeID>((int)&v5, (int)v3);
  *((_QWORD *)v2 + 3) = *(_QWORD *)&v5;
  ReadOnlyBinaryStream::getType<NetworkBlockPosition>((int)&v5, (int)v3);
  *((_DWORD *)v2 + 8) = v5;
  *((_DWORD *)v2 + 9) = v6;
  *((_DWORD *)v2 + 10) = v7;
  *((_DWORD *)v2 + 11) = ReadOnlyBinaryStream::getVarInt(v3);
  return 0;
}


unsigned int __fastcall AddHangingEntityPacket::write(AddHangingEntityPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  AddHangingEntityPacket *v3; // r5@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<EntityUniqueID>((int)a2, (__int64 *)this + 2);
  BinaryStream::writeType<EntityRuntimeID>((int)v2, (unsigned __int64 *)v3 + 3);
  BinaryStream::writeType<NetworkBlockPosition>((int)v2, (signed int *)v3 + 8);
  return j_j_j__ZN12BinaryStream11writeVarIntEi_2(v2, *((_DWORD *)v3 + 11));
}
