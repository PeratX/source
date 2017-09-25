

const void **__fastcall ResourcePackStackPacket::write(BinaryStream &)::{lambda(BinaryStream &,PackInstanceId const&)#1}::operator() constconst(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  void *v5; // r0@1
  char *v6; // r0@2
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  int v10; // [sp+4h] [bp-1Ch]@1

  v3 = a3;
  v4 = a2;
  mce::UUID::asString((mce::UUID *)&v10);
  BinaryStream::writeString(v4, (char **)&v10);
  v5 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = SemVersion::asString((SemVersion *)(v3 + 16));
  BinaryStream::writeString(v4, (char **)v6);
  return BinaryStream::writeString(v4, (char **)(v3 + 48));
}


void __fastcall ResourcePackStackPacket::~ResourcePackStackPacket(ResourcePackStackPacket *this)
{
  ResourcePackStackPacket *v1; // r4@1
  PackInstanceId *v2; // r0@1
  PackInstanceId *v3; // r5@1
  PackInstanceId *v4; // r0@6
  PackInstanceId *v5; // r5@6

  v1 = this;
  *(_DWORD *)this = &off_26E938C;
  v3 = (PackInstanceId *)(*(_QWORD *)((char *)this + 28) >> 32);
  v2 = (PackInstanceId *)*(_QWORD *)((char *)this + 28);
  if ( v2 != v3 )
  {
    do
      v2 = (PackInstanceId *)((char *)PackInstanceId::~PackInstanceId(v2) + 56);
    while ( v3 != v2 );
    v2 = (PackInstanceId *)*((_DWORD *)v1 + 7);
  }
  if ( v2 )
    operator delete((void *)v2);
  v5 = (PackInstanceId *)(*((_QWORD *)v1 + 2) >> 32);
  v4 = (PackInstanceId *)*((_QWORD *)v1 + 2);
  if ( v4 != v5 )
      v4 = (PackInstanceId *)((char *)PackInstanceId::~PackInstanceId(v4) + 56);
    while ( v5 != v4 );
    v4 = (PackInstanceId *)*((_DWORD *)v1 + 4);
  if ( v4 )
    operator delete((void *)v4);
  j_j_j__ZdlPv_5((void *)v1);
}


const void **__fastcall ResourcePackStackPacket::write(BinaryStream &)::{lambda(BinaryStream &,PackInstanceId const&)#2}::operator() constconst(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  void *v5; // r0@1
  char *v6; // r0@2
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  int v10; // [sp+4h] [bp-1Ch]@1

  v3 = a3;
  v4 = a2;
  mce::UUID::asString((mce::UUID *)&v10);
  BinaryStream::writeString(v4, (char **)&v10);
  v5 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = SemVersion::asString((SemVersion *)(v3 + 16));
  BinaryStream::writeString(v4, (char **)v6);
  return BinaryStream::writeString(v4, (char **)(v3 + 48));
}


ResourcePackStackPacket *__fastcall ResourcePackStackPacket::~ResourcePackStackPacket(ResourcePackStackPacket *this)
{
  ResourcePackStackPacket *v1; // r4@1
  PackInstanceId *v2; // r0@1
  PackInstanceId *v3; // r5@1
  PackInstanceId *v4; // r0@6
  PackInstanceId *v5; // r5@6

  v1 = this;
  *(_DWORD *)this = &off_26E938C;
  v3 = (PackInstanceId *)(*(_QWORD *)((char *)this + 28) >> 32);
  v2 = (PackInstanceId *)*(_QWORD *)((char *)this + 28);
  if ( v2 != v3 )
  {
    do
      v2 = (PackInstanceId *)((char *)PackInstanceId::~PackInstanceId(v2) + 56);
    while ( v3 != v2 );
    v2 = (PackInstanceId *)*((_DWORD *)v1 + 7);
  }
  if ( v2 )
    operator delete((void *)v2);
  v5 = (PackInstanceId *)(*((_QWORD *)v1 + 2) >> 32);
  v4 = (PackInstanceId *)*((_QWORD *)v1 + 2);
  if ( v4 != v5 )
      v4 = (PackInstanceId *)((char *)PackInstanceId::~PackInstanceId(v4) + 56);
    while ( v5 != v4 );
    v4 = (PackInstanceId *)*((_DWORD *)v1 + 4);
  if ( v4 )
    operator delete((void *)v4);
  return v1;
}


const void **__fastcall ResourcePackStackPacket::write(BinaryStream &)::{lambda(BinaryStream &,PackInstanceId const&)#1}::operator() constconst(int a1, int a2, int a3)
{
  return ResourcePackStackPacket::write(BinaryStream &)::{lambda(BinaryStream &,PackInstanceId const&)#1}::operator() constconst(
           a1,
           a2,
           a3);
}


void __fastcall ResourcePackStackPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}::operator() const(PackIdVersion *a1, int a2, int a3)
{
  int v3; // r6@1
  PackIdVersion *v4; // r4@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r3@1
  void *v8; // r0@1
  void *v9; // r0@2
  void *v10; // r0@3
  unsigned int *v11; // r2@5
  signed int v12; // r1@7
  unsigned int *v13; // r2@9
  signed int v14; // r1@11
  unsigned int *v15; // r2@13
  signed int v16; // r1@15
  int v17; // [sp+4h] [bp-34h]@3
  int v18; // [sp+8h] [bp-30h]@2
  int v19; // [sp+Ch] [bp-2Ch]@1
  char v20; // [sp+10h] [bp-28h]@1
  int v21; // [sp+14h] [bp-24h]@1
  int v22; // [sp+18h] [bp-20h]@1
  int v23; // [sp+1Ch] [bp-1Ch]@1

  v3 = a3;
  v4 = a1;
  PackIdVersion::PackIdVersion(a1);
  *((_DWORD *)v4 + 12) = &unk_28898CC;
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v19, v3);
  mce::UUID::fromString((int)&v20, &v19);
  v5 = v21;
  v6 = v22;
  v7 = v23;
  *(_DWORD *)v4 = *(_DWORD *)&v20;
  *((_DWORD *)v4 + 1) = v5;
  *((_DWORD *)v4 + 2) = v6;
  *((_DWORD *)v4 + 3) = v7;
  v8 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v19 - 4);
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
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v18, v3);
  SemVersion::fromString((const void **)&v18, (int)v4 + 16);
  v9 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v18 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v17, v3);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v4 + 12,
    &v17);
  v10 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
}


void __fastcall ResourcePackStackPacket::~ResourcePackStackPacket(ResourcePackStackPacket *this)
{
  ResourcePackStackPacket::~ResourcePackStackPacket(this);
}


int __fastcall ResourcePackStackPacket::handle(ResourcePackStackPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, ResourcePackStackPacket *))(*(_DWORD *)a3 + 64))(
           a3,
           a2,
           this);
}


void __fastcall ResourcePackStackPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#2}::operator() const(PackIdVersion *a1, int a2, int a3)
{
  int v3; // r6@1
  PackIdVersion *v4; // r4@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r3@1
  void *v8; // r0@1
  void *v9; // r0@2
  void *v10; // r0@3
  unsigned int *v11; // r2@5
  signed int v12; // r1@7
  unsigned int *v13; // r2@9
  signed int v14; // r1@11
  unsigned int *v15; // r2@13
  signed int v16; // r1@15
  int v17; // [sp+4h] [bp-34h]@3
  int v18; // [sp+8h] [bp-30h]@2
  int v19; // [sp+Ch] [bp-2Ch]@1
  char v20; // [sp+10h] [bp-28h]@1
  int v21; // [sp+14h] [bp-24h]@1
  int v22; // [sp+18h] [bp-20h]@1
  int v23; // [sp+1Ch] [bp-1Ch]@1

  v3 = a3;
  v4 = a1;
  PackIdVersion::PackIdVersion(a1);
  *((_DWORD *)v4 + 12) = &unk_28898CC;
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v19, v3);
  mce::UUID::fromString((int)&v20, &v19);
  v5 = v21;
  v6 = v22;
  v7 = v23;
  *(_DWORD *)v4 = *(_DWORD *)&v20;
  *((_DWORD *)v4 + 1) = v5;
  *((_DWORD *)v4 + 2) = v6;
  *((_DWORD *)v4 + 3) = v7;
  v8 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v19 - 4);
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
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v18, v3);
  SemVersion::fromString((const void **)&v18, (int)v4 + 16);
  v9 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v18 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v17, v3);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v4 + 12,
    &v17);
  v10 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
}


signed int __fastcall ResourcePackStackPacket::getId(ResourcePackStackPacket *this)
{
  return 7;
}


const void **__fastcall ResourcePackStackPacket::write(BinaryStream &)::{lambda(BinaryStream &,PackInstanceId const&)#2}::operator() constconst(int a1, int a2, int a3)
{
  return ResourcePackStackPacket::write(BinaryStream &)::{lambda(BinaryStream &,PackInstanceId const&)#2}::operator() constconst(
           a1,
           a2,
           a3);
}


  return ResourcePackStackPacket::write(BinaryStream &)::{lambda(BinaryStream &,PackInstanceId const&)#1}::operator()
{
           a2,
           a3);
}


int __fastcall ResourcePackStackPacket::read(ResourcePackStackPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  ResourcePackStackPacket *v3; // r5@1
  void *v5; // [sp+0h] [bp-30h]@3
  void (*v6)(void); // [sp+8h] [bp-28h]@3
  void (__fastcall *v7)(PackIdVersion *, int *, int); // [sp+Ch] [bp-24h]@3
  void *v8; // [sp+10h] [bp-20h]@1
  void (*v9)(void); // [sp+18h] [bp-18h]@1
  void (__fastcall *v10)(PackIdVersion *, int *, int); // [sp+1Ch] [bp-14h]@1

  v2 = a2;
  v3 = this;
  *((_BYTE *)this + 40) = ReadOnlyBinaryStream::getBool(a2);
  v8 = operator new(1u);
  v9 = (void (*)(void))std::_Function_base::_Base_manager<ResourcePackStackPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}>::_M_manager;
  v10 = std::_Function_handler<PackInstanceId ()(ReadOnlyBinaryStream &),ResourcePackStackPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}>::_M_invoke;
  ReadOnlyBinaryStream::readVectorList<PackInstanceId>(v2, (__int64 *)v3 + 2, (int)&v8);
  if ( v9 )
    v9();
  v5 = operator new(1u);
  v6 = (void (*)(void))std::_Function_base::_Base_manager<ResourcePackStackPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#2}>::_M_manager;
  v7 = std::_Function_handler<PackInstanceId ()(ReadOnlyBinaryStream &),ResourcePackStackPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#2}>::_M_invoke;
  ReadOnlyBinaryStream::readVectorList<PackInstanceId>(v2, (__int64 *)((char *)v3 + 28), (int)&v5);
  if ( v6 )
    v6();
  return 0;
}


void __fastcall ResourcePackStackPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#2}::operator() const(PackIdVersion *a1, int a2, int a3)
{
  ResourcePackStackPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#2}::operator() const(a1, a2, a3);
}


unsigned int __fastcall ResourcePackStackPacket::write(ResourcePackStackPacket *this, BinaryStream *a2)
{
  ResourcePackStackPacket *v2; // r9@1
  BinaryStream *v3; // r4@1
  int v4; // r5@1
  int i; // r6@1
  unsigned int result; // r0@8
  __int64 j; // r6@8
  void *v8; // [sp+4h] [bp-3Ch]@8
  int (*v9)(void); // [sp+Ch] [bp-34h]@8
  const void **(__fastcall *v10)(int *, int, int); // [sp+10h] [bp-30h]@8
  void *v11; // [sp+14h] [bp-2Ch]@1
  void (*v12)(void); // [sp+1Ch] [bp-24h]@1
  const void **(__fastcall *v13)(int *, int, int); // [sp+20h] [bp-20h]@1

  v2 = this;
  v3 = a2;
  BinaryStream::writeBool(a2, *((_BYTE *)this + 40));
  v11 = operator new(1u);
  v12 = (void (*)(void))std::_Function_base::_Base_manager<ResourcePackStackPacket::write(BinaryStream &)const::{lambda(BinaryStream &,PackInstanceId const&)#1}>::_M_manager;
  v13 = std::_Function_handler<void ()(BinaryStream &,PackInstanceId const&),ResourcePackStackPacket::write(BinaryStream &)const::{lambda(BinaryStream &,PackInstanceId const&)#1}>::_M_invoke;
  BinaryStream::writeUnsignedVarInt(
    v3,
    -1227133513 * ((signed int)((*((_QWORD *)v2 + 2) >> 32) - *((_QWORD *)v2 + 2)) >> 3));
  v4 = *((_QWORD *)v2 + 2) >> 32;
  for ( i = *((_QWORD *)v2 + 2); v4 != i; i += 56 )
  {
    if ( !v12 )
      sub_21E5F48();
    v13((int *)&v11, (int)v3, i);
  }
  if ( v12 )
    v12();
  v8 = operator new(1u);
  v9 = (int (*)(void))std::_Function_base::_Base_manager<ResourcePackStackPacket::write(BinaryStream &)const::{lambda(BinaryStream &,PackInstanceId const&)#2}>::_M_manager;
  v10 = std::_Function_handler<void ()(BinaryStream &,PackInstanceId const&),ResourcePackStackPacket::write(BinaryStream &)const::{lambda(BinaryStream &,PackInstanceId const&)#2}>::_M_invoke;
  result = BinaryStream::writeUnsignedVarInt(
             v3,
             -1227133513 * ((signed int)((*(_QWORD *)((char *)v2 + 28) >> 32) - *(_QWORD *)((char *)v2 + 28)) >> 3));
  for ( j = *(_QWORD *)((char *)v2 + 28); HIDWORD(j) != (_DWORD)j; LODWORD(j) = j + 56 )
    if ( !v9 )
    result = (int)v10((int *)&v8, (int)v3, j);
  if ( v9 )
    result = v9();
  return result;
}


  return ResourcePackStackPacket::write(BinaryStream &)::{lambda(BinaryStream &,PackInstanceId const&)#2}::operator()
{
           a2,
           a3);
}


void __fastcall ResourcePackStackPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}::operator() const(PackIdVersion *a1, int a2, int a3)
{
  ResourcePackStackPacket::read(BinaryStream &)::{lambda(ReadOnlyBinaryStream &)#1}::operator() const(a1, a2, a3);
}
