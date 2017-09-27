

signed int __fastcall InventorySlotPacket::getId(InventorySlotPacket *this)
{
  return 50;
}


InventorySlotPacket *__fastcall InventorySlotPacket::~InventorySlotPacket(InventorySlotPacket *this)
{
  InventorySlotPacket *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  int v4; // r0@5

  v1 = this;
  *(_DWORD *)this = &off_26E9774;
  v2 = (void *)*((_DWORD *)this + 19);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 15);
  if ( v3 )
    operator delete(v3);
  v4 = *((_DWORD *)v1 + 8);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 8) = 0;
  return v1;
}


int __fastcall InventorySlotPacket::read(InventorySlotPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  InventorySlotPacket *v3; // r5@1

  v2 = a2;
  v3 = this;
  *((_BYTE *)this + 13) = ReadOnlyBinaryStream::getUnsignedVarInt(a2);
  *((_DWORD *)v3 + 4) = ReadOnlyBinaryStream::getUnsignedVarInt(v2);
  ReadOnlyBinaryStream::readType<ItemInstance>((int)v2, (int)v3 + 24);
  return 0;
}


int __fastcall InventorySlotPacket::handle(InventorySlotPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, InventorySlotPacket *))(*(_DWORD *)a3 + 244))(
           a3,
           a2,
           this);
}


void __fastcall InventorySlotPacket::~InventorySlotPacket(InventorySlotPacket *this)
{
  InventorySlotPacket *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  int v4; // r0@5

  v1 = this;
  *(_DWORD *)this = &off_26E9774;
  v2 = (void *)*((_DWORD *)this + 19);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 15);
  if ( v3 )
    operator delete(v3);
  v4 = *((_DWORD *)v1 + 8);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  j_j_j__ZdlPv_5((void *)v1);
}


const void **__fastcall InventorySlotPacket::write(InventorySlotPacket *this, BinaryStream *a2)
{
  InventorySlotPacket *v2; // r5@1
  BinaryStream *v3; // r4@1

  v2 = this;
  v3 = a2;
  BinaryStream::writeUnsignedVarInt(a2, *((_BYTE *)this + 13));
  BinaryStream::writeUnsignedVarInt(v3, *((_DWORD *)v2 + 4));
  return j_j_j__ZN12BinaryStream9writeTypeI12ItemInstanceEEvRKT_((int)v3, (InventorySlotPacket *)((char *)v2 + 24));
}


void __fastcall InventorySlotPacket::~InventorySlotPacket(InventorySlotPacket *this)
{
  InventorySlotPacket::~InventorySlotPacket(this);
}
