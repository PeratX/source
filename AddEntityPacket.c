

void __fastcall AddEntityPacket::~AddEntityPacket(AddEntityPacket *this)
{
  AddEntityPacket *v1; // r0@1

  v1 = AddEntityPacket::~AddEntityPacket(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall AddEntityPacket::AddEntityPacket(int a1, int a2)
{
  int v2; // r11@1
  __int64 v4; // r0@1
  int v11; // r0@3
  __int64 v12; // r1@3
  int v13; // r0@3
  int v14; // r7@3
  int v15; // r0@4
  __int64 v16; // kr00_8@4
  _DWORD *v17; // r5@5
  unsigned int *v18; // r2@6
  signed int v19; // r1@8
  int *v20; // r0@14
  void *v21; // r5@18
  int v22; // r7@18
  unsigned int *v23; // r2@20
  signed int v24; // r1@22
  int *v25; // r0@28
  void *v27; // [sp+4h] [bp-3Ch]@4
  void *v28; // [sp+8h] [bp-38h]@4
  int v29; // [sp+Ch] [bp-34h]@4
  char v30; // [sp+10h] [bp-30h]@2

  v2 = a1;
  _R6 = a2;
  *(_DWORD *)(a1 + 4) = 2;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E9404;
  Entity::getLinks((Entity *)(a1 + 16), a2);
  *(_DWORD *)(v2 + 28) = 0;
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 36) = 0;
  Entity::getRotation((Entity *)(v2 + 40), _R6);
  v4 = *(_QWORD *)(_R6 + 56);
  if ( ((unsigned int)v4 & HIDWORD(v4)) == -1 )
  {
    Level::getNewUniqueID((Level *)&v30, *(_DWORD *)(_R6 + 3092));
    v4 = *(_QWORD *)&v30;
    *(_QWORD *)(_R6 + 56) = *(_QWORD *)&v30;
  }
  *(_QWORD *)(v2 + 48) = v4;
  *(_QWORD *)(v2 + 56) = *(_QWORD *)(_R6 + 3312);
  *(_DWORD *)(v2 + 64) = _R6 + 176;
  *(_DWORD *)(v2 + 68) = (*(int (__fastcall **)(int))(*(_DWORD *)_R6 + 488))(_R6);
  _R0 = (*(int (__fastcall **)(int))(*(_DWORD *)_R6 + 52))(_R6);
  __asm
    VLDR            S0, [R6,#0x13C]
    VLDR            S8, [R0,#4]
    VLDR            S10, [R0,#8]
  _R1 = &Vec3::UNIT_Y;
    VLDR            S2, [R1]
    VLDR            S4, [R1,#4]
    VLDR            S6, [R1,#8]
    VMUL.F32        S2, S2, S0
    VMUL.F32        S4, S4, S0
    VMUL.F32        S0, S6, S0
    VLDR            S6, [R0]
    VSUB.F32        S2, S6, S2
    VSUB.F32        S4, S8, S4
    VSUB.F32        S0, S10, S0
    VSTR            S2, [R11,#0x48]
    VSTR            S4, [R11,#0x4C]
    VSTR            S0, [R11,#0x50]
  v11 = (*(int (__fastcall **)(int))(*(_DWORD *)_R6 + 64))(_R6);
  v12 = *(_QWORD *)v11;
  v13 = *(_DWORD *)(v11 + 8);
  *(_QWORD *)(v2 + 84) = v12;
  *(_DWORD *)(v2 + 92) = v13;
  *(_DWORD *)(v2 + 96) = 0;
  v14 = v2 + 96;
  *(_DWORD *)(v14 + 4) = 0;
  *(_DWORD *)(v14 + 8) = 0;
  *(_DWORD *)(v14 + 12) = 0;
  *(_DWORD *)(v14 + 16) = 0;
  *(_DWORD *)(v14 + 20) = 0;
  if ( *(_BYTE *)(_R6 + 172) & 2 )
    v15 = Mob::getAttributes((Mob *)_R6);
    BaseAttributeMap::getSyncableAttributes((BaseAttributeMap *)&v27, v15);
    v16 = *(_QWORD *)(v2 + 96);
    *(_DWORD *)(v2 + 96) = v27;
    v27 = 0;
    *(_DWORD *)(v2 + 100) = v28;
    v28 = 0;
    *(_DWORD *)(v2 + 104) = v29;
    v29 = 0;
    if ( (_DWORD)v16 != HIDWORD(v16) )
    {
      v17 = (_DWORD *)v16;
      do
      {
        v20 = (int *)(*v17 - 12);
        if ( v20 != &dword_28898C0 )
        {
          v18 = (unsigned int *)(*v17 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
          }
          else
            v19 = (*v18)--;
          if ( v19 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
        }
        v17 += 2;
      }
      while ( v17 != (_DWORD *)HIDWORD(v16) );
    }
    if ( (_DWORD)v16 )
      operator delete((void *)v16);
    v22 = (int)v28;
    v21 = v27;
    if ( v27 != v28 )
        v25 = (int *)(*(_DWORD *)v21 - 12);
        if ( v25 != &dword_28898C0 )
          v23 = (unsigned int *)(*(_DWORD *)v21 - 4);
              v24 = __ldrex(v23);
            while ( __strex(v24 - 1, v23) );
            v24 = (*v23)--;
          if ( v24 <= 0 )
            j_j_j_j__ZdlPv_9(v25);
        v21 = (char *)v21 + 8;
      while ( v21 != (void *)v22 );
      v21 = v27;
    if ( v21 )
      operator delete(v21);
  return v2;
}


int __fastcall AddEntityPacket::read(AddEntityPacket *this, BinaryStream *a2)
{
  AddEntityPacket *v2; // r5@1
  BinaryStream *v3; // r4@1
  void *v5; // [sp+0h] [bp-40h]@3
  void (*v6)(void); // [sp+8h] [bp-38h]@3
  signed int (__fastcall *v7)(int, int, int); // [sp+Ch] [bp-34h]@3
  void *v8; // [sp+10h] [bp-30h]@1
  void (*v9)(void); // [sp+18h] [bp-28h]@1
  int (__fastcall *v10)(int *, int *, int); // [sp+1Ch] [bp-24h]@1
  int v11; // [sp+20h] [bp-20h]@1
  int v12; // [sp+24h] [bp-1Ch]@1
  int v13; // [sp+28h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<EntityUniqueID>((int)&v11, (int)a2);
  *((_QWORD *)v2 + 6) = *(_QWORD *)&v11;
  ReadOnlyBinaryStream::getType<EntityRuntimeID>((int)&v11, (int)v3);
  *((_QWORD *)v2 + 7) = *(_QWORD *)&v11;
  *((_DWORD *)v2 + 17) = ReadOnlyBinaryStream::getUnsignedVarInt(v3);
  ReadOnlyBinaryStream::getType<Vec3>((int)&v11, (int)v3);
  *((_DWORD *)v2 + 18) = v11;
  *((_DWORD *)v2 + 19) = v12;
  *((_DWORD *)v2 + 20) = v13;
  *((_DWORD *)v2 + 21) = v11;
  *((_DWORD *)v2 + 22) = v12;
  *((_DWORD *)v2 + 23) = v13;
  ReadOnlyBinaryStream::getType<Vec2>((int)&v11, (int)v3);
  *((_QWORD *)v2 + 5) = *(_QWORD *)&v11;
  v8 = operator new(1u);
  v9 = (void (*)(void))std::_Function_base::_Base_manager<AddEntityPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}>::_M_manager;
  v10 = std::_Function_handler<SyncedAttribute ()(ReadOnlyBinaryStream &),AddEntityPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}>::_M_invoke;
  ReadOnlyBinaryStream::readVectorList<SyncedAttribute>(v3, (__int64 *)((char *)v2 + 108), (int)&v8);
  if ( v9 )
    v9();
  ReadOnlyBinaryStream::readType<std::vector<std::unique_ptr<DataItem,std::default_delete<DataItem>>,std::allocator<std::unique_ptr<DataItem,std::default_delete<DataItem>>>>>(
    v3,
    (int)v2 + 28);
  v5 = operator new(1u);
  v6 = (void (*)(void))std::_Function_base::_Base_manager<AddEntityPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#2}>::_M_manager;
  v7 = std::_Function_handler<EntityLink ()(ReadOnlyBinaryStream &),AddEntityPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#2}>::_M_invoke;
  ReadOnlyBinaryStream::readVectorList<EntityLink>(v3, (unsigned int)v2 + 16, (int)&v5);
  if ( v6 )
    v6();
  return 0;
}


AddEntityPacket *__fastcall AddEntityPacket::~AddEntityPacket(AddEntityPacket *this)
{
  AddEntityPacket *v1; // r10@1
  __int64 v2; // kr00_8@1
  int v3; // r5@2
  void *v4; // r5@6
  void *v5; // r7@6
  unsigned int *v6; // r2@8
  signed int v7; // r1@10
  int *v8; // r0@16
  void *v9; // r5@21
  void *v10; // r7@21
  unsigned int *v11; // r2@23
  signed int v12; // r1@25
  int *v13; // r0@31
  char *v14; // r5@36 OVERLAPPED
  char *v15; // r6@36 OVERLAPPED
  void *v16; // r0@43

  v1 = this;
  *(_DWORD *)this = &off_26E9404;
  *((_DWORD *)this + 5) = *((_DWORD *)this + 4);
  v2 = *(_QWORD *)((char *)this + 28);
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
  *((_DWORD *)v1 + 8) = v2;
  v5 = (void *)(*(_QWORD *)((char *)v1 + 108) >> 32);
  v4 = (void *)*(_QWORD *)((char *)v1 + 108);
  if ( v4 != v5 )
      v8 = (int *)(*(_DWORD *)v4 - 12);
      if ( v8 != &dword_28898C0 )
      {
        v6 = (unsigned int *)(*(_DWORD *)v4 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
        }
        else
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v8);
      }
      v4 = (char *)v4 + 16;
    while ( v4 != v5 );
    v4 = (void *)*((_DWORD *)v1 + 27);
  if ( v4 )
    operator delete(v4);
  v10 = (void *)(*((_QWORD *)v1 + 12) >> 32);
  v9 = (void *)*((_QWORD *)v1 + 12);
  if ( v9 != v10 )
      v13 = (int *)(*(_DWORD *)v9 - 12);
      if ( v13 != &dword_28898C0 )
        v11 = (unsigned int *)(*(_DWORD *)v9 - 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
      v9 = (char *)v9 + 8;
    while ( v9 != v10 );
    v9 = (void *)*((_DWORD *)v1 + 24);
  if ( v9 )
    operator delete(v9);
  *(_QWORD *)&v14 = *(_QWORD *)((char *)v1 + 28);
  if ( v14 != v15 )
      if ( *(_DWORD *)v14 )
        (*(void (**)(void))(**(_DWORD **)v14 + 4))();
      *(_DWORD *)v14 = 0;
      v14 += 4;
    while ( v15 != v14 );
    v14 = (char *)*((_DWORD *)v1 + 7);
  if ( v14 )
    operator delete(v14);
  v16 = (void *)*((_DWORD *)v1 + 4);
  if ( v16 )
    operator delete(v16);
  return v1;
}


int __fastcall AddEntityPacket::handle(AddEntityPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, AddEntityPacket *))(*(_DWORD *)a3 + 100))(
           a3,
           a2,
           this);
}


int __fastcall AddEntityPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}::operator() const(int *a1, int a2, int a3)
{
  int *v3; // r6@1
  ReadOnlyBinaryStream *v4; // r5@1
  void *v5; // r0@1
  int result; // r0@2
  unsigned int *v13; // r2@3
  signed int v14; // r1@5
  int v15; // [sp+0h] [bp-20h]@1

  v3 = a1;
  v4 = (ReadOnlyBinaryStream *)a3;
  *a1 = (int)&unk_28898CC;
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v15, a3);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v15);
  v5 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  _R0 = ReadOnlyBinaryStream::getFloat(v4);
  __asm
    VMOV            S0, R0
    VSTR            S0, [R6,#4]
    VSTR            S0, [R6,#8]
  result = ReadOnlyBinaryStream::getFloat(v4);
    VSTR            S0, [R6,#0xC]
  return result;
}


signed int __fastcall AddEntityPacket::getId(AddEntityPacket *this)
{
  return 13;
}


void __fastcall AddEntityPacket::~AddEntityPacket(AddEntityPacket *this)
{
  AddEntityPacket::~AddEntityPacket(this);
}


unsigned int __fastcall AddEntityPacket::write(AddEntityPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  AddEntityPacket *v3; // r8@1
  AttributeInstanceHandle *v4; // r5@1
  AttributeInstanceHandle *i; // r6@1
  char *v6; // r5@8
  char *v7; // r6@8
  unsigned int result; // r0@15
  __int64 j; // r6@15
  void *v10; // [sp+4h] [bp-44h]@15
  int (*v11)(void); // [sp+Ch] [bp-3Ch]@15
  const void **(__fastcall *v12)(int, int, int); // [sp+10h] [bp-38h]@15
  char *v13; // [sp+14h] [bp-34h]@8
  char *v14; // [sp+18h] [bp-30h]@8
  void *v15; // [sp+20h] [bp-28h]@1
  void (*v16)(void); // [sp+28h] [bp-20h]@1
  const void **(__fastcall *v17)(int, BinaryStream *, AttributeInstanceHandle *); // [sp+2Ch] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<EntityUniqueID>((int)a2, (__int64 *)this + 6);
  BinaryStream::writeType<EntityRuntimeID>((int)v2, (unsigned __int64 *)v3 + 7);
  BinaryStream::writeUnsignedVarInt(v2, *((_DWORD *)v3 + 17));
  BinaryStream::writeType<Vec3>((int)v2, (int *)v3 + 18);
  BinaryStream::writeType<Vec3>((int)v2, (int *)v3 + 21);
  BinaryStream::writeType<Vec2>((int)v2, (int *)v3 + 10);
  v15 = operator new(1u);
  v16 = (void (*)(void))std::_Function_base::_Base_manager<AddEntityPacket::write(BinaryStream &)const::{lambda(BinaryStream &,AttributeInstanceHandle const&)#1}>::_M_manager;
  v17 = std::_Function_handler<void ()(BinaryStream &,AttributeInstanceHandle const&),AddEntityPacket::write(BinaryStream &)const::{lambda(BinaryStream &,AttributeInstanceHandle const&)#1}>::_M_invoke;
  BinaryStream::writeUnsignedVarInt(v2, (signed int)((*((_QWORD *)v3 + 12) >> 32) - *((_QWORD *)v3 + 12)) >> 3);
  v4 = (AttributeInstanceHandle *)(*((_QWORD *)v3 + 12) >> 32);
  for ( i = (AttributeInstanceHandle *)*((_QWORD *)v3 + 12); v4 != i; i = (AttributeInstanceHandle *)((char *)i + 8) )
  {
    if ( !v16 )
      sub_21E5F48();
    v17((int)&v15, v2, i);
  }
  if ( v16 )
    v16();
  SynchedEntityData::packAll((SynchedEntityData *)&v13, *((unsigned __int64 **)v3 + 16));
  BinaryStream::writeType<std::vector<std::unique_ptr<DataItem,std::default_delete<DataItem>>,std::allocator<std::unique_ptr<DataItem,std::default_delete<DataItem>>>>>(
    (int)v2,
    &v13);
  v6 = v14;
  v7 = v13;
  if ( v13 != v14 )
    do
    {
      if ( *(_DWORD *)v7 )
        (*(void (**)(void))(**(_DWORD **)v7 + 4))();
      *(_DWORD *)v7 = 0;
      v7 += 4;
    }
    while ( v6 != v7 );
    v7 = v13;
  if ( v7 )
    operator delete(v7);
  v10 = operator new(1u);
  v11 = (int (*)(void))std::_Function_base::_Base_manager<AddEntityPacket::write(BinaryStream &)const::{lambda(BinaryStream &,EntityLink const&)#1}>::_M_manager;
  v12 = std::_Function_handler<void ()(BinaryStream &,EntityLink const&),AddEntityPacket::write(BinaryStream &)const::{lambda(BinaryStream &,EntityLink const&)#1}>::_M_invoke;
  result = BinaryStream::writeUnsignedVarInt(v2, (signed int)((*((_QWORD *)v3 + 2) >> 32) - *((_QWORD *)v3 + 2)) >> 5);
  for ( j = *((_QWORD *)v3 + 2); HIDWORD(j) != (_DWORD)j; LODWORD(j) = j + 32 )
    if ( !v11 )
    result = (int)v12((int)&v10, (int)v2, j);
  if ( v11 )
    result = v11();
  return result;
}
