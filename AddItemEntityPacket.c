

void __fastcall AddItemEntityPacket::write(AddItemEntityPacket *this, BinaryStream *a2)
{
  AddItemEntityPacket::write(this, a2);
}


void __fastcall AddItemEntityPacket::~AddItemEntityPacket(AddItemEntityPacket *this)
{
  AddItemEntityPacket *v1; // r0@1

  v1 = AddItemEntityPacket::~AddItemEntityPacket(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall AddItemEntityPacket::write(AddItemEntityPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  AddItemEntityPacket *v3; // r5@1
  __int64 v4; // r4@1
  int v5; // [sp+0h] [bp-20h]@1
  int v6; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<EntityUniqueID>((int)a2, (__int64 *)this + 4);
  BinaryStream::writeType<EntityRuntimeID>((int)v2, (unsigned __int64 *)v3 + 5);
  BinaryStream::writeType<ItemInstance>((int)v2, (AddItemEntityPacket *)((char *)v3 + 48));
  BinaryStream::writeType<Vec3>((int)v2, (int *)v3 + 30);
  BinaryStream::writeType<Vec3>((int)v2, (int *)v3 + 33);
  SynchedEntityData::packAll((SynchedEntityData *)&v5, *((unsigned __int64 **)v3 + 7));
  BinaryStream::writeType<std::vector<std::unique_ptr<DataItem,std::default_delete<DataItem>>,std::allocator<std::unique_ptr<DataItem,std::default_delete<DataItem>>>>>(
    (int)v2,
    &v5);
  v4 = *(_QWORD *)&v5;
  if ( v5 != v6 )
  {
    do
    {
      if ( *(_DWORD *)v4 )
        (*(void (**)(void))(**(_DWORD **)v4 + 4))();
      *(_DWORD *)v4 = 0;
      LODWORD(v4) = v4 + 4;
    }
    while ( HIDWORD(v4) != (_DWORD)v4 );
    LODWORD(v4) = v5;
  }
  if ( (_DWORD)v4 )
    operator delete((void *)v4);
}


int __fastcall AddItemEntityPacket::read(AddItemEntityPacket *this, BinaryStream *a2)
{
  AddItemEntityPacket *v2; // r5@1
  BinaryStream *v3; // r4@1
  int v5; // [sp+0h] [bp-20h]@1
  int v6; // [sp+4h] [bp-1Ch]@1
  int v7; // [sp+8h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<EntityUniqueID>((int)&v5, (int)a2);
  *((_QWORD *)v2 + 4) = *(_QWORD *)&v5;
  ReadOnlyBinaryStream::getType<EntityRuntimeID>((int)&v5, (int)v3);
  *((_QWORD *)v2 + 5) = *(_QWORD *)&v5;
  ReadOnlyBinaryStream::readType<ItemInstance>((int)v3, (int)v2 + 48);
  ReadOnlyBinaryStream::getType<Vec3>((int)&v5, (int)v3);
  *((_DWORD *)v2 + 30) = v5;
  *((_DWORD *)v2 + 31) = v6;
  *((_DWORD *)v2 + 32) = v7;
  *((_DWORD *)v2 + 33) = v5;
  *((_DWORD *)v2 + 34) = v6;
  *((_DWORD *)v2 + 35) = v7;
  ReadOnlyBinaryStream::readType<std::vector<std::unique_ptr<DataItem,std::default_delete<DataItem>>,std::allocator<std::unique_ptr<DataItem,std::default_delete<DataItem>>>>>(
    v3,
    (int)v2 + 16);
  return 0;
}


int __fastcall AddItemEntityPacket::handle(AddItemEntityPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, AddItemEntityPacket *))(*(_DWORD *)a3 + 88))(
           a3,
           a2,
           this);
}


signed int __fastcall AddItemEntityPacket::getId(AddItemEntityPacket *this)
{
  return 15;
}


AddItemEntityPacket *__fastcall AddItemEntityPacket::~AddItemEntityPacket(AddItemEntityPacket *this)
{
  AddItemEntityPacket *v1; // r4@1
  __int64 v2; // kr00_8@1
  int v3; // r5@2
  void *v4; // r0@6
  void *v5; // r0@8
  int v6; // r0@10
  char *v7; // r5@12
  char *v8; // r7@12

  v1 = this;
  *(_DWORD *)this = &off_26E942C;
  v2 = *((_QWORD *)this + 2);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = v2;
    do
    {
      if ( *(_DWORD *)v3 )
        (*(void (**)(void))(**(_DWORD **)v3 + 4))();
      *(_DWORD *)v3 = 0;
      v3 += 4;
    }
    while ( HIDWORD(v2) != v3 );
  }
  *((_DWORD *)v1 + 5) = v2;
  v4 = (void *)*((_DWORD *)v1 + 25);
  if ( v4 )
    operator delete(v4);
  v5 = (void *)*((_DWORD *)v1 + 21);
  if ( v5 )
    operator delete(v5);
  v6 = *((_DWORD *)v1 + 14);
  if ( v6 )
    (*(void (**)(void))(*(_DWORD *)v6 + 4))();
  *((_DWORD *)v1 + 14) = 0;
  v8 = (char *)(*((_QWORD *)v1 + 2) >> 32);
  v7 = (char *)*((_QWORD *)v1 + 2);
  if ( v7 != v8 )
      if ( *(_DWORD *)v7 )
        (*(void (**)(void))(**(_DWORD **)v7 + 4))();
      *(_DWORD *)v7 = 0;
      v7 += 4;
    while ( v8 != v7 );
    v7 = (char *)*((_DWORD *)v1 + 4);
  if ( v7 )
    operator delete(v7);
  return v1;
}


void __fastcall AddItemEntityPacket::~AddItemEntityPacket(AddItemEntityPacket *this)
{
  AddItemEntityPacket::~AddItemEntityPacket(this);
}


int __fastcall AddItemEntityPacket::AddItemEntityPacket(int a1, Entity *a2)
{
  int v2; // r4@1
  Entity *v3; // r5@1
  int v4; // r0@1
  __int64 v5; // r1@1
  int v6; // r0@1
  int v7; // r0@1
  __int64 v8; // r1@1
  int v9; // r0@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)(a1 + 4) = 2;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E942C;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = Entity::getEntityData(a2);
  *(_QWORD *)(v2 + 32) = *(_QWORD *)Entity::getUniqueID(v3);
  Entity::getRuntimeID((Entity *)(v2 + 40), (int)v3);
  ItemInstance::ItemInstance((ItemInstance *)(v2 + 48), (int)v3 + 3416);
  v4 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 52))(v3);
  v5 = *(_QWORD *)v4;
  v6 = *(_DWORD *)(v4 + 8);
  *(_QWORD *)(v2 + 120) = v5;
  *(_DWORD *)(v2 + 128) = v6;
  v7 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 64))(v3);
  v8 = *(_QWORD *)v7;
  v9 = *(_DWORD *)(v7 + 8);
  *(_QWORD *)(v2 + 132) = v8;
  *(_DWORD *)(v2 + 140) = v9;
  return v2;
}
