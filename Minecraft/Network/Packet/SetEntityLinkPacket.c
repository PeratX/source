

signed int __fastcall SetEntityLinkPacket::getId(SetEntityLinkPacket *this)
{
  return 41;
}


int __fastcall SetEntityLinkPacket::read(SetEntityLinkPacket *this, BinaryStream *a2)
{
  SetEntityLinkPacket *v2; // r4@1
  int v3; // r12@1
  int v4; // r1@1
  int v5; // r2@1
  int v6; // r3@1
  int v7; // r4@1
  int v8; // r5@1
  int v10; // [sp+0h] [bp-30h]@1
  int v11; // [sp+4h] [bp-2Ch]@1
  int v12; // [sp+8h] [bp-28h]@1
  int v13; // [sp+Ch] [bp-24h]@1
  int v14; // [sp+10h] [bp-20h]@1
  int v15; // [sp+14h] [bp-1Ch]@1
  char v16; // [sp+18h] [bp-18h]@1

  v2 = this;
  ReadOnlyBinaryStream::getType<EntityLink>((int)&v10, (int)a2);
  v3 = (int)v2 + 16;
  v4 = v11;
  v5 = v12;
  v6 = v13;
  v7 = v14;
  v8 = v15;
  *(_DWORD *)v3 = v10;
  *(_DWORD *)(v3 + 4) = v4;
  *(_DWORD *)(v3 + 8) = v5;
  *(_DWORD *)(v3 + 12) = v6;
  *(_DWORD *)(v3 + 16) = v7;
  *(_DWORD *)(v3 + 20) = v8;
  *(_BYTE *)(v3 + 24) = v16;
  return 0;
}


int __fastcall SetEntityLinkPacket::handle(SetEntityLinkPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, SetEntityLinkPacket *))(*(_DWORD *)a3 + 196))(
           a3,
           a2,
           this);
}
