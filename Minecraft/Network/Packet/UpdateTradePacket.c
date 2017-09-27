

void __fastcall UpdateTradePacket::~UpdateTradePacket(UpdateTradePacket *this)
{
  UpdateTradePacket *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E992C;
  CompoundTag::~CompoundTag((UpdateTradePacket *)((char *)this + 48));
  v2 = *((_DWORD *)v1 + 4);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  operator delete((void *)v1);
}


int __fastcall UpdateTradePacket::read(UpdateTradePacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r5@1
  UpdateTradePacket *v3; // r4@1
  void *v4; // r0@1
  int v5; // r5@2
  unsigned int *v7; // r2@5
  signed int v8; // r1@7
  int v9; // [sp+0h] [bp-28h]@2
  void **v10; // [sp+4h] [bp-24h]@2
  BinaryStream *v11; // [sp+8h] [bp-20h]@2
  int v12; // [sp+Ch] [bp-1Ch]@1
  char v13; // [sp+10h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  *((_BYTE *)this + 13) = ReadOnlyBinaryStream::getByte(a2);
  *((_BYTE *)v3 + 14) = ReadOnlyBinaryStream::getByte(v2);
  *((_DWORD *)v3 + 5) = ReadOnlyBinaryStream::getVarInt(v2);
  *((_DWORD *)v3 + 6) = ReadOnlyBinaryStream::getVarInt(v2);
  *((_BYTE *)v3 + 28) = ReadOnlyBinaryStream::getBool(v2);
  ReadOnlyBinaryStream::getType<EntityUniqueID>((int)&v13, (int)v2);
  *((_QWORD *)v3 + 4) = *(_QWORD *)&v13;
  *((_QWORD *)v3 + 5) = *(_QWORD *)&v13;
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v12, (int)v2);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v3 + 4,
    &v12);
  v4 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v10 = &off_26D53F8;
  v11 = v2;
  NbtIo::read((NbtIo *)&v9, (IDataInput *)&v10);
  v5 = v9;
  CompoundTag::operator=((int)v3 + 48, v9);
  if ( v5 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
  return 0;
}


void __fastcall UpdateTradePacket::~UpdateTradePacket(UpdateTradePacket *this)
{
  UpdateTradePacket::~UpdateTradePacket(this);
}


int __fastcall UpdateTradePacket::handle(UpdateTradePacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, UpdateTradePacket *))(*(_DWORD *)a3 + 328))(
           a3,
           a2,
           this);
}


void __fastcall UpdateTradePacket::write(UpdateTradePacket *this, BinaryStream *a2)
{
  UpdateTradePacket *v2; // r4@1
  BinaryStream *v3; // r5@1
  int v4; // t1@1
  void *v5; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  void **v8; // [sp+4h] [bp-24h]@1
  BinaryStream *v9; // [sp+8h] [bp-20h]@1
  int v10; // [sp+Ch] [bp-1Ch]@1

  v2 = this;
  v3 = a2;
  BinaryStream::writeByte(a2, *((_BYTE *)this + 13));
  BinaryStream::writeByte(v3, *((_BYTE *)v2 + 14));
  BinaryStream::writeVarInt(v3, *((_DWORD *)v2 + 5));
  BinaryStream::writeVarInt(v3, *((_DWORD *)v2 + 6));
  BinaryStream::writeBool(v3, *((_BYTE *)v2 + 28));
  BinaryStream::writeType<EntityUniqueID>((int)v3, (__int64 *)v2 + 4);
  BinaryStream::writeType<EntityUniqueID>((int)v3, (__int64 *)v2 + 5);
  BinaryStream::writeString((int)v3, (char **)v2 + 4);
  v8 = &off_26D53B0;
  v9 = v3;
  v4 = *((_DWORD *)v2 + 12);
  v2 = (UpdateTradePacket *)((char *)v2 + 48);
  (*(void (__fastcall **)(int *, UpdateTradePacket *))(v4 + 44))(&v10, v2);
  Tag::writeNamedTag((int)&v10, (int)v2, (int)&v8);
  v5 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v10 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
}


signed int __fastcall UpdateTradePacket::getId(UpdateTradePacket *this)
{
  return 80;
}


void __fastcall UpdateTradePacket::write(UpdateTradePacket *this, BinaryStream *a2)
{
  UpdateTradePacket::write(this, a2);
}


UpdateTradePacket *__fastcall UpdateTradePacket::~UpdateTradePacket(UpdateTradePacket *this)
{
  UpdateTradePacket *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E992C;
  CompoundTag::~CompoundTag((UpdateTradePacket *)((char *)this + 48));
  v2 = *((_DWORD *)v1 + 4);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  return v1;
}
