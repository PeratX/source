

int __fastcall MobArmorEquipmentPacket::MobArmorEquipmentPacket(int a1)
{
  int v1; // r4@1

  v1 = a1;
  *(_DWORD *)(a1 + 4) = 2;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E960C;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  ItemInstance::ItemInstance(a1 + 24);
  ItemInstance::ItemInstance(v1 + 96);
  ItemInstance::ItemInstance(v1 + 168);
  ItemInstance::ItemInstance(v1 + 240);
  *(_BYTE *)(v1 + 312) = 0;
  return v1;
}


int __fastcall MobArmorEquipmentPacket::handle(MobArmorEquipmentPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, MobArmorEquipmentPacket *))(*(_DWORD *)a3 + 180))(
           a3,
           a2,
           this);
}


signed int __fastcall MobArmorEquipmentPacket::getId(MobArmorEquipmentPacket *this)
{
  return 32;
}


void __fastcall MobArmorEquipmentPacket::~MobArmorEquipmentPacket(MobArmorEquipmentPacket *this)
{
  MobArmorEquipmentPacket::~MobArmorEquipmentPacket(this);
}


MobArmorEquipmentPacket *__fastcall MobArmorEquipmentPacket::~MobArmorEquipmentPacket(MobArmorEquipmentPacket *this)
{
  MobArmorEquipmentPacket *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  int v4; // r0@5
  void *v5; // r0@7
  void *v6; // r0@9
  int v7; // r0@11
  void *v8; // r0@13
  void *v9; // r0@15
  int v10; // r0@17
  void *v11; // r0@19
  void *v12; // r0@21
  int v13; // r0@23

  v1 = this;
  *(_DWORD *)this = &off_26E960C;
  v2 = (void *)*((_DWORD *)this + 73);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 69);
  if ( v3 )
    operator delete(v3);
  v4 = *((_DWORD *)v1 + 62);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 62) = 0;
  v5 = (void *)*((_DWORD *)v1 + 55);
  if ( v5 )
    operator delete(v5);
  v6 = (void *)*((_DWORD *)v1 + 51);
  if ( v6 )
    operator delete(v6);
  v7 = *((_DWORD *)v1 + 44);
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
  *((_DWORD *)v1 + 44) = 0;
  v8 = (void *)*((_DWORD *)v1 + 37);
  if ( v8 )
    operator delete(v8);
  v9 = (void *)*((_DWORD *)v1 + 33);
  if ( v9 )
    operator delete(v9);
  v10 = *((_DWORD *)v1 + 26);
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  *((_DWORD *)v1 + 26) = 0;
  v11 = (void *)*((_DWORD *)v1 + 19);
  if ( v11 )
    operator delete(v11);
  v12 = (void *)*((_DWORD *)v1 + 15);
  if ( v12 )
    operator delete(v12);
  v13 = *((_DWORD *)v1 + 8);
  if ( v13 )
    (*(void (**)(void))(*(_DWORD *)v13 + 4))();
  *((_DWORD *)v1 + 8) = 0;
  return v1;
}


void __fastcall MobArmorEquipmentPacket::~MobArmorEquipmentPacket(MobArmorEquipmentPacket *this)
{
  MobArmorEquipmentPacket *v1; // r0@1

  v1 = MobArmorEquipmentPacket::~MobArmorEquipmentPacket(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall MobArmorEquipmentPacket::write(MobArmorEquipmentPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  MobArmorEquipmentPacket *v3; // r5@1
  int v4; // r1@1
  int v5; // r1@10
  int v6; // r1@19
  int v7; // r1@28
  int result; // r0@35
  int v9; // [sp+0h] [bp-130h]@29
  int v10; // [sp+8h] [bp-128h]@35
  void *v11; // [sp+24h] [bp-10Ch]@33
  void *v12; // [sp+34h] [bp-FCh]@31
  char v13; // [sp+48h] [bp-E8h]@20
  int v14; // [sp+50h] [bp-E0h]@26
  void *v15; // [sp+6Ch] [bp-C4h]@24
  void *v16; // [sp+7Ch] [bp-B4h]@22
  char v17; // [sp+90h] [bp-A0h]@11
  int v18; // [sp+98h] [bp-98h]@17
  void *v19; // [sp+B4h] [bp-7Ch]@15
  void *v20; // [sp+C4h] [bp-6Ch]@13
  char v21; // [sp+D8h] [bp-58h]@2
  int v22; // [sp+E0h] [bp-50h]@8
  void *v23; // [sp+FCh] [bp-34h]@6
  void *ptr; // [sp+10Ch] [bp-24h]@4

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<EntityRuntimeID>((int)a2, (unsigned __int64 *)this + 2);
  v4 = (int)v3 + 24;
  if ( *((_BYTE *)v3 + 312) )
    ItemInstance::getStrippedNetworkItem((ItemInstance *)&v21, v4);
  else
    ItemInstance::ItemInstance((ItemInstance *)&v21, v4);
  BinaryStream::writeType<ItemInstance>((int)v2, (ItemInstance *)&v21);
  if ( ptr )
    operator delete(ptr);
  if ( v23 )
    operator delete(v23);
  if ( v22 )
    (*(void (**)(void))(*(_DWORD *)v22 + 4))();
  v5 = (int)v3 + 96;
  v22 = 0;
    ItemInstance::getStrippedNetworkItem((ItemInstance *)&v17, v5);
    ItemInstance::ItemInstance((ItemInstance *)&v17, v5);
  BinaryStream::writeType<ItemInstance>((int)v2, (ItemInstance *)&v17);
  if ( v20 )
    operator delete(v20);
  if ( v19 )
    operator delete(v19);
  if ( v18 )
    (*(void (**)(void))(*(_DWORD *)v18 + 4))();
  v6 = (int)v3 + 168;
  v18 = 0;
    ItemInstance::getStrippedNetworkItem((ItemInstance *)&v13, v6);
    ItemInstance::ItemInstance((ItemInstance *)&v13, v6);
  BinaryStream::writeType<ItemInstance>((int)v2, (ItemInstance *)&v13);
  if ( v16 )
    operator delete(v16);
  if ( v15 )
    operator delete(v15);
  if ( v14 )
    (*(void (**)(void))(*(_DWORD *)v14 + 4))();
  v7 = (int)v3 + 240;
  v14 = 0;
    ItemInstance::getStrippedNetworkItem((ItemInstance *)&v9, v7);
    ItemInstance::ItemInstance((ItemInstance *)&v9, v7);
  BinaryStream::writeType<ItemInstance>((int)v2, (ItemInstance *)&v9);
  if ( v12 )
    operator delete(v12);
  if ( v11 )
    operator delete(v11);
  result = v10;
  if ( v10 )
    result = (*(int (**)(void))(*(_DWORD *)v10 + 4))();
  return result;
}


int __fastcall MobArmorEquipmentPacket::MobArmorEquipmentPacket(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  __int64 v4; // r2@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_26E63CC;
  v4 = *(_QWORD *)(a2 + 4);
  *(_BYTE *)(a1 + 12) = *(_BYTE *)(a2 + 12);
  *(_QWORD *)(a1 + 4) = v4;
  *(_DWORD *)a1 = &off_26E960C;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  ItemInstance::ItemInstance((ItemInstance *)(a1 + 24), a2 + 24);
  ItemInstance::ItemInstance((ItemInstance *)(v2 + 96), v3 + 96);
  ItemInstance::ItemInstance((ItemInstance *)(v2 + 168), v3 + 168);
  ItemInstance::ItemInstance((ItemInstance *)(v2 + 240), v3 + 240);
  *(_BYTE *)(v2 + 312) = *(_BYTE *)(v3 + 312);
  return v2;
}


int __fastcall MobArmorEquipmentPacket::read(MobArmorEquipmentPacket *this, BinaryStream *a2)
{
  MobArmorEquipmentPacket *v2; // r5@1
  BinaryStream *v3; // r4@1
  int v5; // [sp+0h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<EntityRuntimeID>((int)&v5, (int)a2);
  *((_QWORD *)v2 + 2) = *(_QWORD *)&v5;
  ReadOnlyBinaryStream::readType<ItemInstance>((int)v3, (int)v2 + 24);
  ReadOnlyBinaryStream::readType<ItemInstance>((int)v3, (int)v2 + 96);
  ReadOnlyBinaryStream::readType<ItemInstance>((int)v3, (int)v2 + 168);
  ReadOnlyBinaryStream::readType<ItemInstance>((int)v3, (int)v2 + 240);
  return 0;
}


int __fastcall MobArmorEquipmentPacket::MobArmorEquipmentPacket(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  const ItemInstance *v4; // r0@1
  const ItemInstance *v5; // r0@1
  const ItemInstance *v6; // r0@1
  const ItemInstance *v7; // r0@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)(a1 + 4) = 2;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E960C;
  Entity::getRuntimeID((Entity *)(a1 + 16), a2);
  ItemInstance::ItemInstance(v2 + 24);
  ItemInstance::ItemInstance(v2 + 96);
  ItemInstance::ItemInstance(v2 + 168);
  ItemInstance::ItemInstance(v2 + 240);
  *(_BYTE *)(v2 + 312) = 0;
  v4 = (const ItemInstance *)(*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v3 + 1028))(v3, 0);
  MobArmorEquipmentPacket::get((MobArmorEquipmentPacket *)v2, (ItemInstance *)(v2 + 24), v4);
  v5 = (const ItemInstance *)(*(int (__fastcall **)(int, signed int))(*(_DWORD *)v3 + 1028))(v3, 1);
  MobArmorEquipmentPacket::get((MobArmorEquipmentPacket *)v2, (ItemInstance *)(v2 + 96), v5);
  v6 = (const ItemInstance *)(*(int (__fastcall **)(_DWORD, signed int))(*(_DWORD *)v3 + 1028))(v3, 2);
  MobArmorEquipmentPacket::get((MobArmorEquipmentPacket *)v2, (ItemInstance *)(v2 + 168), v6);
  v7 = (const ItemInstance *)(*(int (__fastcall **)(_DWORD, signed int))(*(_DWORD *)v3 + 1028))(v3, 3);
  MobArmorEquipmentPacket::get((MobArmorEquipmentPacket *)v2, (ItemInstance *)(v2 + 240), v7);
  return v2;
}


int __fastcall MobArmorEquipmentPacket::get(MobArmorEquipmentPacket *this, ItemInstance *a2, const ItemInstance *a3)
{
  ItemInstance *v3; // r4@1
  int result; // r0@5
  int v5; // [sp+0h] [bp-58h]@1
  int v6; // [sp+8h] [bp-50h]@5
  void *v7; // [sp+24h] [bp-34h]@3
  void *ptr; // [sp+34h] [bp-24h]@1

  v3 = a2;
  ItemInstance::clone((ItemInstance *)&v5, (int)a3);
  ItemInstance::operator=((int)v3, (int)&v5);
  if ( ptr )
    operator delete(ptr);
  if ( v7 )
    operator delete(v7);
  result = v6;
  if ( v6 )
    result = (*(int (**)(void))(*(_DWORD *)v6 + 4))();
  return result;
}
