

int __fastcall MobEquipmentPacket::read(MobEquipmentPacket *this, BinaryStream *a2)
{
  MobEquipmentPacket *v2; // r4@1
  BinaryStream *v3; // r5@1
  char v4; // r0@1
  int v11; // [sp+0h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<EntityRuntimeID>((int)&v11, (int)a2);
  *((_QWORD *)v2 + 2) = *(_QWORD *)&v11;
  ReadOnlyBinaryStream::readType<ItemInstance>((int)v3, (int)v2 + 24);
  *((_BYTE *)v2 + 106) = ReadOnlyBinaryStream::getByte(v3);
  *((_BYTE *)v2 + 107) = ReadOnlyBinaryStream::getByte(v3);
  v4 = ReadOnlyBinaryStream::getByte(v3);
  *((_BYTE *)v2 + 108) = v4;
  _R1 = *((_WORD *)v2 + 53);
  *((_DWORD *)v2 + 24) = (char)_R1;
  __asm { SBFX.W          R1, R1, #8, #8 }
  *((_DWORD *)v2 + 25) = _R1;
  *((_BYTE *)v2 + 105) = v4;
  return 0;
}


MobEquipmentPacket *__fastcall MobEquipmentPacket::~MobEquipmentPacket(MobEquipmentPacket *this)
{
  MobEquipmentPacket *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  int v4; // r0@5

  v1 = this;
  *(_DWORD *)this = &off_26DA648;
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


int __fastcall MobEquipmentPacket::handle(MobEquipmentPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, MobEquipmentPacket *))(*(_DWORD *)a3 + 176))(
           a3,
           a2,
           this);
}


void __fastcall MobEquipmentPacket::~MobEquipmentPacket(MobEquipmentPacket *this)
{
  MobEquipmentPacket *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  int v4; // r0@5

  v1 = this;
  *(_DWORD *)this = &off_26DA648;
  v2 = (void *)*((_DWORD *)this + 19);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 15);
  if ( v3 )
    operator delete(v3);
  v4 = *((_DWORD *)v1 + 8);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  j_j_j__ZdlPv_4((void *)v1);
}


signed int __fastcall MobEquipmentPacket::getId(MobEquipmentPacket *this)
{
  return 31;
}


void __fastcall MobEquipmentPacket::~MobEquipmentPacket(MobEquipmentPacket *this)
{
  MobEquipmentPacket::~MobEquipmentPacket(this);
}


const void **__fastcall MobEquipmentPacket::write(MobEquipmentPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  MobEquipmentPacket *v3; // r5@1
  int v4; // r1@1
  int v6; // [sp+0h] [bp-58h]@2
  int v7; // [sp+8h] [bp-50h]@8
  void *v8; // [sp+24h] [bp-34h]@6
  void *ptr; // [sp+34h] [bp-24h]@4

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<EntityRuntimeID>((int)a2, (unsigned __int64 *)this + 2);
  v4 = (int)v3 + 24;
  if ( *((_BYTE *)v3 + 104) )
    ItemInstance::getStrippedNetworkItem((ItemInstance *)&v6, v4);
  else
    ItemInstance::ItemInstance((ItemInstance *)&v6, v4);
  BinaryStream::writeType<ItemInstance>((int)v2, (ItemInstance *)&v6);
  if ( ptr )
    operator delete(ptr);
  if ( v8 )
    operator delete(v8);
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
  v7 = 0;
  BinaryStream::writeByte(v2, *((_BYTE *)v3 + 106));
  BinaryStream::writeByte(v2, *((_BYTE *)v3 + 107));
  return BinaryStream::writeByte(v2, *((_BYTE *)v3 + 108));
}
