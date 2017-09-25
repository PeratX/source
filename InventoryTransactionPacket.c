

signed int __fastcall InventoryTransactionPacket::getId(InventoryTransactionPacket *this)
{
  return 30;
}


void __fastcall InventoryTransactionPacket::~InventoryTransactionPacket(InventoryTransactionPacket *this)
{
  InventoryTransactionPacket::~InventoryTransactionPacket(this);
}


int __fastcall InventoryTransactionPacket::handle(InventoryTransactionPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, InventoryTransactionPacket *))(*(_DWORD *)a3 + 396))(
           a3,
           a2,
           this);
}


void __fastcall InventoryTransactionPacket::~InventoryTransactionPacket(InventoryTransactionPacket *this)
{
  InventoryTransactionPacket *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26DA738;
  v2 = *((_DWORD *)this + 4);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall InventoryTransactionPacket::write(InventoryTransactionPacket *this, BinaryStream *a2)
{
  InventoryTransactionPacket *v2; // r5@1
  BinaryStream *v3; // r4@1

  v2 = this;
  v3 = a2;
  BinaryStream::writeUnsignedVarInt(a2, *(_DWORD *)(*((_DWORD *)this + 4) + 4));
  BinaryStream::writeType<InventoryTransaction>((int)v3, *((_DWORD *)v2 + 4) + 8);
  return (*(int (**)(void))(**((_DWORD **)v2 + 4) + 12))();
}


InventoryTransactionPacket *__fastcall InventoryTransactionPacket::~InventoryTransactionPacket(InventoryTransactionPacket *this)
{
  InventoryTransactionPacket *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26DA738;
  v2 = *((_DWORD *)this + 4);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 4) = 0;
  return v1;
}


int __fastcall InventoryTransactionPacket::read(InventoryTransactionPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  InventoryTransactionPacket *v3; // r5@1
  int v4; // r6@1
  int v5; // r1@1
  int v6; // r0@1
  int v8; // [sp+0h] [bp-40h]@1
  int v9; // [sp+28h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  v4 = ReadOnlyBinaryStream::getUnsignedVarInt(a2);
  ReadOnlyBinaryStream::getType<InventoryTransaction>((int)&v8, (int)v2);
  ComplexInventoryTransaction::fromType(&v9, v4, (int)&v8);
  v5 = v9;
  v9 = 0;
  v6 = *((_DWORD *)v3 + 4);
  *((_DWORD *)v3 + 4) = v5;
  if ( v6 )
  {
    (*(void (**)(void))(*(_DWORD *)v6 + 4))();
    if ( v9 )
      (*(void (**)(void))(*(_DWORD *)v9 + 4))();
  }
  InventoryTransaction::~InventoryTransaction((InventoryTransaction *)&v8);
  (*(void (**)(void))(**((_DWORD **)v3 + 4) + 8))();
  return 0;
}
