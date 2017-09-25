

int __fastcall ShowCreditsPacket::read(ShowCreditsPacket *this, BinaryStream *a2)
{
  ShowCreditsPacket *v2; // r5@1
  BinaryStream *v3; // r4@1
  int v5; // [sp+0h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<EntityRuntimeID>((int)&v5, (int)a2);
  *((_QWORD *)v2 + 2) = *(_QWORD *)&v5;
  *((_DWORD *)v2 + 6) = ReadOnlyBinaryStream::getVarInt(v3);
  return 0;
}


signed int __fastcall ShowCreditsPacket::getId(ShowCreditsPacket *this)
{
  return 75;
}


int __fastcall ShowCreditsPacket::handle(ShowCreditsPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, ShowCreditsPacket *))(*(_DWORD *)a3 + 440))(
           a3,
           a2,
           this);
}


unsigned int __fastcall ShowCreditsPacket::write(ShowCreditsPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  ShowCreditsPacket *v3; // r5@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<EntityRuntimeID>((int)a2, (unsigned __int64 *)this + 2);
  return j_j_j__ZN12BinaryStream11writeVarIntEi_1(v2, *((_DWORD *)v3 + 6));
}
