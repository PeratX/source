

CraftingDataPacket *__fastcall CraftingDataPacket::~CraftingDataPacket(CraftingDataPacket *this)
{
  CraftingDataPacket *v1; // r4@1
  void *v2; // r5@1 OVERLAPPED
  void *v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_26E9D08;
  *(_QWORD *)&v2 = *((_QWORD *)this + 2);
  if ( v2 != v3 )
  {
    do
    {
      v4 = (void *)*((_DWORD *)v2 + 17);
      if ( v4 )
        operator delete(v4);
      v5 = (void *)*((_DWORD *)v2 + 13);
      if ( v5 )
        operator delete(v5);
      v6 = *((_DWORD *)v2 + 6);
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      *((_DWORD *)v2 + 6) = 0;
      if ( *(_DWORD *)v2 )
        (*(void (**)(void))(**(_DWORD **)v2 + 4))();
      *(_DWORD *)v2 = 0;
      v2 = (char *)v2 + 96;
    }
    while ( v3 != v2 );
    v2 = (void *)*((_DWORD *)v1 + 4);
  }
  if ( v2 )
    operator delete(v2);
  return v1;
}


const void **__fastcall CraftingDataPacket::write(CraftingDataPacket *this, BinaryStream *a2)
{
  CraftingDataPacket *v2; // r8@1
  BinaryStream *v3; // r4@1
  CraftingDataEntry *v4; // r5@1
  CraftingDataEntry *i; // r6@1
  void *v7; // [sp+0h] [bp-28h]@1
  int (__fastcall *v8)(void **, void **, int); // [sp+8h] [bp-20h]@1
  const void **(__fastcall *v9)(int, BinaryStream *, CraftingDataEntry *); // [sp+Ch] [bp-1Ch]@1

  v2 = this;
  v3 = a2;
  v7 = operator new(1u);
  v8 = sub_14BE38C;
  v9 = sub_14BE386;
  BinaryStream::writeUnsignedVarInt(
    v3,
    -1431655765 * ((signed int)((*((_QWORD *)v2 + 2) >> 32) - *((_QWORD *)v2 + 2)) >> 5));
  v4 = (CraftingDataEntry *)(*((_QWORD *)v2 + 2) >> 32);
  for ( i = (CraftingDataEntry *)*((_QWORD *)v2 + 2); v4 != i; i = (CraftingDataEntry *)((char *)i + 96) )
  {
    if ( !v8 )
      sub_21E5F48();
    v9((int)&v7, v3, i);
  }
  if ( v8 )
    ((void (__cdecl *)(void **))v8)(&v7);
  return BinaryStream::writeBool(v3, *((_BYTE *)v2 + 28));
}


int __fastcall CraftingDataPacket::read(CraftingDataPacket *this, BinaryStream *a2)
{
  CraftingDataPacket *v2; // r4@1
  BinaryStream *v3; // r5@1
  void *v5; // [sp+0h] [bp-20h]@1
  void (*v6)(void); // [sp+8h] [bp-18h]@1
  int (__fastcall *v7)(CraftingDataEntry *, int, ReadOnlyBinaryStream *); // [sp+Ch] [bp-14h]@1

  v2 = this;
  v3 = a2;
  v5 = operator new(1u);
  v6 = (void (*)(void))sub_14BE77E;
  v7 = sub_14BE714;
  ReadOnlyBinaryStream::readVectorList<CraftingDataEntry>(v3, (__int64 *)v2 + 2, (int)&v5);
  if ( v6 )
    v6();
  *((_BYTE *)v2 + 28) = ReadOnlyBinaryStream::getBool(v3);
  return 0;
}


signed int __fastcall CraftingDataPacket::getId(CraftingDataPacket *this)
{
  return 52;
}


void __fastcall CraftingDataPacket::~CraftingDataPacket(CraftingDataPacket *this)
{
  CraftingDataPacket *v1; // r4@1
  void *v2; // r5@1 OVERLAPPED
  void *v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_26E9D08;
  *(_QWORD *)&v2 = *((_QWORD *)this + 2);
  if ( v2 != v3 )
  {
    do
    {
      v4 = (void *)*((_DWORD *)v2 + 17);
      if ( v4 )
        operator delete(v4);
      v5 = (void *)*((_DWORD *)v2 + 13);
      if ( v5 )
        operator delete(v5);
      v6 = *((_DWORD *)v2 + 6);
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      *((_DWORD *)v2 + 6) = 0;
      if ( *(_DWORD *)v2 )
        (*(void (**)(void))(**(_DWORD **)v2 + 4))();
      *(_DWORD *)v2 = 0;
      v2 = (char *)v2 + 96;
    }
    while ( v3 != v2 );
    v2 = (void *)*((_DWORD *)v1 + 4);
  }
  if ( v2 )
    operator delete(v2);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall CraftingDataPacket::~CraftingDataPacket(CraftingDataPacket *this)
{
  CraftingDataPacket::~CraftingDataPacket(this);
}


int __fastcall CraftingDataPacket::handle(CraftingDataPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, CraftingDataPacket *))(*(_DWORD *)a3 + 248))(
           a3,
           a2,
           this);
}
