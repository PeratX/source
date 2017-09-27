

unsigned int __fastcall AddPlayerPacket::write(AddPlayerPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  AddPlayerPacket *v3; // r8@1
  __int64 v4; // r6@7
  int v5; // r3@14
  int v6; // r1@14
  __int64 v7; // r1@14
  unsigned int result; // r0@14
  __int64 i; // r6@14
  void *v10; // [sp+10h] [bp-B8h]@14
  __int64 v11; // [sp+18h] [bp-B0h]@14
  char v12; // [sp+20h] [bp-A8h]@14
  char v13; // [sp+28h] [bp-A0h]@14
  unsigned int v14; // [sp+38h] [bp-90h]@14
  unsigned int v15; // [sp+3Ch] [bp-8Ch]@14
  unsigned int v16; // [sp+40h] [bp-88h]@14
  unsigned int v17; // [sp+44h] [bp-84h]@14
  __int64 v18; // [sp+48h] [bp-80h]@14
  unsigned int v19; // [sp+54h] [bp-74h]@14
  int v20; // [sp+5Ch] [bp-6Ch]@7
  int v21; // [sp+60h] [bp-68h]@7
  char v22; // [sp+68h] [bp-60h]@1
  int v23; // [sp+70h] [bp-58h]@5
  void *v24; // [sp+8Ch] [bp-3Ch]@3
  void *ptr; // [sp+9Ch] [bp-2Ch]@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<mce::UUID>((int)a2, (_QWORD *)this + 4);
  BinaryStream::writeString((int)v2, (char **)v3 + 7);
  BinaryStream::writeType<EntityUniqueID>((int)v2, (__int64 *)v3 + 6);
  BinaryStream::writeType<EntityRuntimeID>((int)v2, (unsigned __int64 *)v3 + 7);
  BinaryStream::writeType<Vec3>((int)v2, (int *)v3 + 16);
  BinaryStream::writeType<Vec3>((int)v2, (int *)v3 + 19);
  BinaryStream::writeType<Vec2>((int)v2, (int *)v3 + 22);
  BinaryStream::writeFloat(v2, *((float *)v3 + 24));
  ItemInstance::getStrippedNetworkItem((ItemInstance *)&v22, (int)v3 + 104);
  BinaryStream::writeType<ItemInstance>((int)v2, (ItemInstance *)&v22);
  if ( ptr )
    operator delete(ptr);
  if ( v24 )
    operator delete(v24);
  if ( v23 )
    (*(void (**)(void))(*(_DWORD *)v23 + 4))();
  v23 = 0;
  SynchedEntityData::packAll((SynchedEntityData *)&v20, *((unsigned __int64 **)v3 + 65));
  BinaryStream::writeType<std::vector<std::unique_ptr<DataItem,std::default_delete<DataItem>>,std::allocator<std::unique_ptr<DataItem,std::default_delete<DataItem>>>>>(
    (int)v2,
    &v20);
  v4 = *(_QWORD *)&v20;
  if ( v20 != v21 )
  {
    do
    {
      if ( *(_DWORD *)v4 )
        (*(void (**)(void))(**(_DWORD **)v4 + 4))();
      *(_DWORD *)v4 = 0;
      LODWORD(v4) = v4 + 4;
    }
    while ( HIDWORD(v4) != (_DWORD)v4 );
    LODWORD(v4) = v20;
  }
  if ( (_DWORD)v4 )
    operator delete((void *)v4);
  AdventureSettings::AdventureSettings((AdventureSettings *)&v12);
  AdventureSettingsPacket::AdventureSettingsPacket((int)&v13, (int)&v12, (int)v3 + 188, v5, -1, -1, 0);
  BinaryStream::writeUnsignedVarInt(v2, v14);
  BinaryStream::writeUnsignedVarInt(v2, (unsigned __int8)v15);
  BinaryStream::writeUnsignedVarInt(v2, v16);
  BinaryStream::writeUnsignedVarInt(v2, (unsigned __int8)v17);
  BinaryStream::writeUnsignedVarInt(v2, v19);
  BinaryStream::writeSignedInt64(v2, v6, v18);
  v10 = operator new(1u);
  HIDWORD(v7) = std::_Function_handler<void ()(BinaryStream &,EntityLink const&),AddPlayerPacket::write(BinaryStream &)const::{lambda(BinaryStream &,EntityLink const&)#1}>::_M_invoke;
  LODWORD(v7) = std::_Function_base::_Base_manager<AddPlayerPacket::write(BinaryStream &)const::{lambda(BinaryStream &,EntityLink const&)#1}>::_M_manager;
  v11 = v7;
  result = BinaryStream::writeUnsignedVarInt(v2, (signed int)((*((_QWORD *)v3 + 2) >> 32) - *((_QWORD *)v3 + 2)) >> 5);
  for ( i = *((_QWORD *)v3 + 2); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 32 )
    if ( !(_DWORD)v11 )
      sub_21E5F48();
    result = ((int (__fastcall *)(_DWORD, _DWORD, _DWORD))HIDWORD(v11))(&v10, v2, i);
  if ( (_DWORD)v11 )
    result = ((int (*)(void))v11)();
  return result;
}


int __fastcall AddPlayerPacket::AddPlayerPacket(int a1)
{
  int v1; // r4@1

  v1 = a1;
  *(_DWORD *)(a1 + 4) = 2;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E947C;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 28) = &unk_28898CC;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 48) = -1;
  *(_DWORD *)(a1 + 52) = -1;
  _aeabi_memclr8(a1 + 56, 44);
  ItemInstance::ItemInstance(v1 + 104);
  *(_DWORD *)(v1 + 176) = 0;
  *(_DWORD *)(v1 + 180) = 0;
  *(_DWORD *)(v1 + 184) = 0;
  Abilities::Abilities(v1 + 188);
  *(_DWORD *)(v1 + 260) = 0;
  return v1;
}


signed int __fastcall AddPlayerPacket::getId(AddPlayerPacket *this)
{
  return 12;
}


void __fastcall AddPlayerPacket::~AddPlayerPacket(AddPlayerPacket *this)
{
  AddPlayerPacket::~AddPlayerPacket(this);
}


AddPlayerPacket *__fastcall AddPlayerPacket::~AddPlayerPacket(AddPlayerPacket *this)
{
  AddPlayerPacket *v1; // r4@1
  char *v2; // r5@1 OVERLAPPED
  char *v3; // r6@1 OVERLAPPED
  void *v4; // r0@8
  void *v5; // r0@10
  int v6; // r0@12
  int v7; // r1@14
  void *v8; // r0@14
  void *v9; // r0@15
  unsigned int *v11; // r2@18
  signed int v12; // r1@20

  v1 = this;
  *(_DWORD *)this = &off_26E947C;
  *((_DWORD *)this + 5) = *((_DWORD *)this + 4);
  Abilities::~Abilities((AddPlayerPacket *)((char *)this + 188));
  *(_QWORD *)&v2 = *((_QWORD *)v1 + 22);
  if ( v2 != v3 )
  {
    do
    {
      if ( *(_DWORD *)v2 )
        (*(void (**)(void))(**(_DWORD **)v2 + 4))();
      *(_DWORD *)v2 = 0;
      v2 += 4;
    }
    while ( v3 != v2 );
    v2 = (char *)*((_DWORD *)v1 + 44);
  }
  if ( v2 )
    operator delete(v2);
  v4 = (void *)*((_DWORD *)v1 + 39);
  if ( v4 )
    operator delete(v4);
  v5 = (void *)*((_DWORD *)v1 + 35);
  if ( v5 )
    operator delete(v5);
  v6 = *((_DWORD *)v1 + 28);
  if ( v6 )
    (*(void (**)(void))(*(_DWORD *)v6 + 4))();
  *((_DWORD *)v1 + 28) = 0;
  v7 = *((_DWORD *)v1 + 7);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)*((_DWORD *)v1 + 4);
  if ( v9 )
    operator delete(v9);
  return v1;
}


int __fastcall AddPlayerPacket::AddPlayerPacket(int a1, int a2)
{
  int v2; // r5@1
  int v4; // r0@1
  __int64 v5; // r2@1
  int v9; // r0@1
  int v10; // r0@1
  __int64 v11; // r1@1
  ItemInstance *v12; // r0@1
  ItemInstance *v13; // r6@1
  int v14; // r0@1
  void *v16; // r0@6

  v2 = a1;
  _R7 = a2;
  *(_DWORD *)(a1 + 4) = 2;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E947C;
  Entity::getLinks((Entity *)(a1 + 16), a2);
  sub_21E8AF4((int *)(v2 + 28), (int *)(_R7 + 4316));
  v4 = *(_DWORD *)(_R7 + 4564);
  v5 = *(_QWORD *)(_R7 + 4568);
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(_R7 + 4560);
  *(_DWORD *)(v2 + 36) = v4;
  *(_QWORD *)(v2 + 40) = v5;
  *(_QWORD *)(v2 + 48) = *(_QWORD *)Entity::getUniqueID((Entity *)_R7);
  Entity::getRuntimeID((Entity *)(v2 + 56), _R7);
  __asm
  {
    VLDR            S0, [R7,#0x13C]
    VLDR            S2, [R7,#0x4C]
  }
  v9 = *(_DWORD *)(_R7 + 80);
  __asm { VSUB.F32        S0, S2, S0 }
  *(_DWORD *)(v2 + 64) = *(_DWORD *)(_R7 + 72);
  __asm { VSTR            S0, [R5,#0x44] }
  *(_DWORD *)(v2 + 72) = v9;
  v10 = (*(int (__fastcall **)(int))(*(_DWORD *)_R7 + 64))(_R7);
  v11 = *(_QWORD *)v10;
  *(_DWORD *)(v2 + 84) = *(_DWORD *)(v10 + 8);
  *(_QWORD *)(v2 + 76) = v11;
  *(_QWORD *)(v2 + 88) = *(_QWORD *)(_R7 + 120);
  *(_DWORD *)(v2 + 96) = *(_DWORD *)(_R7 + 3420);
  ItemInstance::ItemInstance(v2 + 104);
  *(_DWORD *)(v2 + 176) = 0;
  *(_DWORD *)(v2 + 180) = 0;
  *(_DWORD *)(v2 + 184) = 0;
  Abilities::Abilities(v2 + 188, (int *)(_R7 + 4320));
  *(_DWORD *)(v2 + 260) = Entity::getEntityData((Entity *)_R7);
  *(_BYTE *)(v2 + 12) = *(_BYTE *)(_R7 + 4820);
  v12 = (ItemInstance *)PlayerInventoryProxy::getSelectedItem(*(PlayerInventoryProxy **)(_R7 + 4752));
  v13 = v12;
  v14 = *((_BYTE *)v12 + 15);
  _ZF = v14 == 0;
  if ( v14 )
    _ZF = *(_DWORD *)v13 == 0;
  if ( !_ZF && !ItemInstance::isNull(v13) && *((_BYTE *)v13 + 14) )
    v16 = PlayerInventoryProxy::getSelectedItem(*(PlayerInventoryProxy **)(_R7 + 4752));
    ItemInstance::operator=(v2 + 104, (int)v16);
  return v2;
}


int __fastcall AddPlayerPacket::handle(AddPlayerPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, AddPlayerPacket *))(*(_DWORD *)a3 + 108))(
           a3,
           a2,
           this);
}


int __fastcall AddPlayerPacket::read(AddPlayerPacket *this, BinaryStream *a2)
{
  AddPlayerPacket *v2; // r5@1
  BinaryStream *v3; // r4@1
  int v4; // r1@1
  int v5; // r2@1
  int v6; // r3@1
  int v7; // r12@1
  void *v8; // r0@1
  __int64 v9; // r1@2
  unsigned int *v11; // r2@5
  signed int v12; // r1@7
  void *v13; // [sp+0h] [bp-70h]@2
  __int64 v14; // [sp+8h] [bp-68h]@2
  char v15; // [sp+10h] [bp-60h]@2
  void **v16; // [sp+18h] [bp-58h]@2
  int v17; // [sp+1Ch] [bp-54h]@2
  int v18; // [sp+20h] [bp-50h]@2
  char v19; // [sp+24h] [bp-4Ch]@2
  int v20; // [sp+28h] [bp-48h]@2
  char v21; // [sp+2Ch] [bp-44h]@2
  int v22; // [sp+30h] [bp-40h]@2
  char v23; // [sp+34h] [bp-3Ch]@2
  signed int v24; // [sp+38h] [bp-38h]@2
  signed int v25; // [sp+3Ch] [bp-34h]@2
  int v26; // [sp+44h] [bp-2Ch]@2
  int v27; // [sp+4Ch] [bp-24h]@1
  char v28; // [sp+50h] [bp-20h]@1
  int v29; // [sp+54h] [bp-1Ch]@1
  int v30; // [sp+58h] [bp-18h]@1
  int v31; // [sp+5Ch] [bp-14h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<mce::UUID>((int)&v28, (int)a2);
  v4 = v29;
  v5 = v30;
  v6 = v31;
  v7 = (int)v2 + 32;
  *(_DWORD *)v7 = *(_DWORD *)&v28;
  *(_DWORD *)(v7 + 4) = v4;
  *(_DWORD *)(v7 + 8) = v5;
  *(_DWORD *)(v7 + 12) = v6;
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v27, (int)v3);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v2 + 7,
    &v27);
  v8 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v27 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  }
  ReadOnlyBinaryStream::getType<EntityUniqueID>((int)&v16, (int)v3);
  *((_QWORD *)v2 + 6) = *(_QWORD *)&v16;
  ReadOnlyBinaryStream::getType<EntityRuntimeID>((int)&v16, (int)v3);
  *((_QWORD *)v2 + 7) = *(_QWORD *)&v16;
  ReadOnlyBinaryStream::getType<Vec3>((int)&v16, (int)v3);
  *((_DWORD *)v2 + 16) = v16;
  *((_DWORD *)v2 + 17) = v17;
  *((_DWORD *)v2 + 18) = v18;
  *((_DWORD *)v2 + 19) = v16;
  *((_DWORD *)v2 + 20) = v17;
  *((_DWORD *)v2 + 21) = v18;
  ReadOnlyBinaryStream::getType<Vec2>((int)&v16, (int)v3);
  *((_QWORD *)v2 + 11) = *(_QWORD *)&v16;
  *((_DWORD *)v2 + 24) = ReadOnlyBinaryStream::getFloat(v3);
  ReadOnlyBinaryStream::readType<ItemInstance>((int)v3, (int)v2 + 104);
  ReadOnlyBinaryStream::readType<std::vector<std::unique_ptr<DataItem,std::default_delete<DataItem>>,std::allocator<std::unique_ptr<DataItem,std::default_delete<DataItem>>>>>(
    v3,
    (int)v2 + 176);
  v17 = 2;
  v18 = 1;
  v19 = 0;
  v16 = &off_26D80B0;
  v20 = 0;
  v22 = 0;
  v24 = -1;
  v25 = -1;
  v26 = 0;
  v20 = ReadOnlyBinaryStream::getUnsignedVarInt(v3);
  v21 = ReadOnlyBinaryStream::getUnsignedVarInt(v3);
  v22 = ReadOnlyBinaryStream::getUnsignedVarInt(v3);
  v23 = ReadOnlyBinaryStream::getUnsignedVarInt(v3);
  v26 = ReadOnlyBinaryStream::getUnsignedVarInt(v3);
  *(_QWORD *)&v24 = ReadOnlyBinaryStream::getSignedInt64(v3);
  AdventureSettings::AdventureSettings((AdventureSettings *)&v15);
  AdventureSettingsPacket::fillIn(
    (AdventureSettingsPacket *)&v16,
    (AdventureSettings *)&v15,
    (AddPlayerPacket *)((char *)v2 + 188));
  v13 = operator new(1u);
  LODWORD(v9) = std::_Function_base::_Base_manager<AddPlayerPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}>::_M_manager;
  HIDWORD(v9) = std::_Function_handler<EntityLink ()(ReadOnlyBinaryStream &),AddPlayerPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}>::_M_invoke;
  v14 = v9;
  ReadOnlyBinaryStream::readVectorList<EntityLink>(v3, (unsigned int)v2 + 16, (int)&v13);
  if ( (_DWORD)v14 )
    ((void (*)(void))v14)();
  return 0;
}


void __fastcall AddPlayerPacket::~AddPlayerPacket(AddPlayerPacket *this)
{
  AddPlayerPacket *v1; // r0@1

  v1 = AddPlayerPacket::~AddPlayerPacket(this);
  j_j_j__ZdlPv_5((void *)v1);
}
