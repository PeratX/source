

int __fastcall TakeItemEntityPacket::read(TakeItemEntityPacket *this, BinaryStream *a2)
{
  TakeItemEntityPacket *v2; // r5@1
  BinaryStream *v3; // r4@1
  int v5; // [sp+0h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<EntityRuntimeID>((int)&v5, (int)a2);
  *((_QWORD *)v2 + 2) = *(_QWORD *)&v5;
  ReadOnlyBinaryStream::getType<EntityRuntimeID>((int)&v5, (int)v3);
  *((_QWORD *)v2 + 3) = *(_QWORD *)&v5;
  return 0;
}


signed int __fastcall TakeItemEntityPacket::getId(TakeItemEntityPacket *this)
{
  return 17;
}


const void **__fastcall TakeItemEntityPacket::write(TakeItemEntityPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  TakeItemEntityPacket *v3; // r5@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<EntityRuntimeID>((int)a2, (unsigned __int64 *)this + 2);
  return j_j_j__ZN12BinaryStream9writeTypeI15EntityRuntimeIDEEvRKT_((int)v2, (unsigned __int64 *)v3 + 3);
}


int __fastcall TakeItemEntityPacket::handle(TakeItemEntityPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, TakeItemEntityPacket *))(*(_DWORD *)a3 + 96))(
           a3,
           a2,
           this);
}
