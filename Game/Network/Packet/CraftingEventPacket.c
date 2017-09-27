

unsigned int __fastcall CraftingEventPacket::write(CraftingEventPacket *this, BinaryStream *a2)
{
  CraftingEventPacket *v2; // r9@1
  BinaryStream *v3; // r4@1
  ItemInstance *v4; // r5@1
  ItemInstance *i; // r6@1
  unsigned int result; // r0@8
  __int64 j; // r6@8
  void *v8; // [sp+4h] [bp-3Ch]@8
  int (*v9)(void); // [sp+Ch] [bp-34h]@8
  const void **(__fastcall *v10)(int, int, ItemInstance *); // [sp+10h] [bp-30h]@8
  void *v11; // [sp+14h] [bp-2Ch]@1
  void (*v12)(void); // [sp+1Ch] [bp-24h]@1
  const void **(__fastcall *v13)(int, int, ItemInstance *); // [sp+20h] [bp-20h]@1

  v2 = this;
  v3 = a2;
  BinaryStream::writeByte(a2, *((_BYTE *)this + 13));
  BinaryStream::writeVarInt(v3, *((_DWORD *)v2 + 4));
  BinaryStream::writeType<mce::UUID>((int)v3, (_QWORD *)v2 + 3);
  v11 = operator new(1u);
  v12 = (void (*)(void))std::_Function_base::_Base_manager<CraftingEventPacket::write(BinaryStream &)const::{lambda(BinaryStream &,ItemInstance const&)#1}>::_M_manager;
  v13 = std::_Function_handler<void ()(BinaryStream &,ItemInstance const&),CraftingEventPacket::write(BinaryStream &)const::{lambda(BinaryStream &,ItemInstance const&)#1}>::_M_invoke;
  BinaryStream::writeUnsignedVarInt(
    v3,
    954437177 * ((signed int)((*((_QWORD *)v2 + 5) >> 32) - *((_QWORD *)v2 + 5)) >> 3));
  v4 = (ItemInstance *)(*((_QWORD *)v2 + 5) >> 32);
  for ( i = (ItemInstance *)*((_QWORD *)v2 + 5); v4 != i; i = (ItemInstance *)((char *)i + 72) )
  {
    if ( !v12 )
      sub_21E5F48();
    v13((int)&v11, (int)v3, i);
  }
  if ( v12 )
    v12();
  v8 = operator new(1u);
  v9 = (int (*)(void))std::_Function_base::_Base_manager<CraftingEventPacket::write(BinaryStream &)const::{lambda(BinaryStream &,ItemInstance const&)#2}>::_M_manager;
  v10 = std::_Function_handler<void ()(BinaryStream &,ItemInstance const&),CraftingEventPacket::write(BinaryStream &)const::{lambda(BinaryStream &,ItemInstance const&)#2}>::_M_invoke;
  result = BinaryStream::writeUnsignedVarInt(
             v3,
             954437177 * ((signed int)((*(_QWORD *)((char *)v2 + 52) >> 32) - *(_QWORD *)((char *)v2 + 52)) >> 3));
  for ( j = *(_QWORD *)((char *)v2 + 52); HIDWORD(j) != (_DWORD)j; LODWORD(j) = j + 72 )
    if ( !v9 )
    result = (int)v10((int)&v8, (int)v3, (ItemInstance *)j);
  if ( v9 )
    result = v9();
  return result;
}


int __fastcall CraftingEventPacket::read(CraftingEventPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  CraftingEventPacket *v3; // r5@1
  int v4; // r12@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r3@1
  void *v9; // [sp+0h] [bp-40h]@3
  void (*v10)(void); // [sp+8h] [bp-38h]@3
  int (__fastcall *v11)(ItemInstance *, int, int); // [sp+Ch] [bp-34h]@3
  void *v12; // [sp+10h] [bp-30h]@1
  void (*v13)(void); // [sp+18h] [bp-28h]@1
  int (__fastcall *v14)(ItemInstance *, int, int); // [sp+1Ch] [bp-24h]@1
  char v15; // [sp+20h] [bp-20h]@1
  int v16; // [sp+24h] [bp-1Ch]@1
  int v17; // [sp+28h] [bp-18h]@1
  int v18; // [sp+2Ch] [bp-14h]@1

  v2 = a2;
  v3 = this;
  *((_BYTE *)this + 13) = ReadOnlyBinaryStream::getByte(a2);
  *((_DWORD *)v3 + 4) = ReadOnlyBinaryStream::getVarInt(v2);
  ReadOnlyBinaryStream::getType<mce::UUID>((int)&v15, (int)v2);
  v4 = (int)v3 + 24;
  v5 = v16;
  v6 = v17;
  v7 = v18;
  *(_DWORD *)v4 = *(_DWORD *)&v15;
  *(_DWORD *)(v4 + 4) = v5;
  *(_DWORD *)(v4 + 8) = v6;
  *(_DWORD *)(v4 + 12) = v7;
  v12 = operator new(1u);
  v13 = (void (*)(void))std::_Function_base::_Base_manager<CraftingEventPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}>::_M_manager;
  v14 = std::_Function_handler<ItemInstance ()(ReadOnlyBinaryStream &),CraftingEventPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}>::_M_invoke;
  ReadOnlyBinaryStream::readVectorList<ItemInstance>((int)v2, (__int64 *)v3 + 5, (int)&v12);
  if ( v13 )
    v13();
  v9 = operator new(1u);
  v10 = (void (*)(void))std::_Function_base::_Base_manager<CraftingEventPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#2}>::_M_manager;
  v11 = std::_Function_handler<ItemInstance ()(ReadOnlyBinaryStream &),CraftingEventPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#2}>::_M_invoke;
  ReadOnlyBinaryStream::readVectorList<ItemInstance>((int)v2, (__int64 *)((char *)v3 + 52), (int)&v9);
  if ( v10 )
    v10();
  return 0;
}


signed int __fastcall CraftingEventPacket::getId(CraftingEventPacket *this)
{
  return 53;
}


void __fastcall CraftingEventPacket::~CraftingEventPacket(CraftingEventPacket *this)
{
  CraftingEventPacket *v1; // r0@1

  v1 = CraftingEventPacket::~CraftingEventPacket(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall CraftingEventPacket::~CraftingEventPacket(CraftingEventPacket *this)
{
  CraftingEventPacket::~CraftingEventPacket(this);
}


int __fastcall CraftingEventPacket::handle(CraftingEventPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, CraftingEventPacket *))(*(_DWORD *)a3 + 252))(
           a3,
           a2,
           this);
}


CraftingEventPacket *__fastcall CraftingEventPacket::~CraftingEventPacket(CraftingEventPacket *this)
{
  CraftingEventPacket *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2
  void *v5; // r0@4
  int v6; // r0@6
  int v7; // r5@12 OVERLAPPED
  int v8; // r6@12 OVERLAPPED
  void *v9; // r0@13
  void *v10; // r0@15
  int v11; // r0@17

  v1 = this;
  *(_DWORD *)this = &off_26E979C;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 52);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(void **)(v2 + 52);
      if ( v4 )
        operator delete(v4);
      v5 = *(void **)(v2 + 36);
      if ( v5 )
        operator delete(v5);
      v6 = *(_DWORD *)(v2 + 8);
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      *(_DWORD *)(v2 + 8) = 0;
      v2 += 72;
    }
    while ( v3 != v2 );
    v2 = *((_DWORD *)v1 + 13);
  }
  if ( v2 )
    operator delete((void *)v2);
  *(_QWORD *)&v7 = *((_QWORD *)v1 + 5);
  if ( v7 != v8 )
      v9 = *(void **)(v7 + 52);
      if ( v9 )
        operator delete(v9);
      v10 = *(void **)(v7 + 36);
      if ( v10 )
        operator delete(v10);
      v11 = *(_DWORD *)(v7 + 8);
      if ( v11 )
        (*(void (**)(void))(*(_DWORD *)v11 + 4))();
      *(_DWORD *)(v7 + 8) = 0;
      v7 += 72;
    while ( v8 != v7 );
    v7 = *((_DWORD *)v1 + 10);
  if ( v7 )
    operator delete((void *)v7);
  return v1;
}
