

int __fastcall ItemFrameDropItemPacket::handle(ItemFrameDropItemPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, ItemFrameDropItemPacket *))(*(_DWORD *)a3 + 220))(
           a3,
           a2,
           this);
}


signed int __fastcall ItemFrameDropItemPacket::getId(ItemFrameDropItemPacket *this)
{
  return 71;
}


int __fastcall ItemFrameDropItemPacket::read(ItemFrameDropItemPacket *this, BinaryStream *a2)
{
  ItemFrameDropItemPacket *v2; // r4@1
  int v4; // [sp+4h] [bp-14h]@1
  int v5; // [sp+8h] [bp-10h]@1
  int v6; // [sp+Ch] [bp-Ch]@1

  v2 = this;
  ReadOnlyBinaryStream::getType<NetworkBlockPosition>((int)&v4, (int)a2);
  *((_DWORD *)v2 + 4) = v4;
  *((_DWORD *)v2 + 5) = v5;
  *((_DWORD *)v2 + 6) = v6;
  return 0;
}
