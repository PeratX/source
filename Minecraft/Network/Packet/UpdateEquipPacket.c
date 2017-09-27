

void __fastcall UpdateEquipPacket::~UpdateEquipPacket(UpdateEquipPacket *this)
{
  UpdateEquipPacket::~UpdateEquipPacket(this);
}


void __fastcall UpdateEquipPacket::write(UpdateEquipPacket *this, BinaryStream *a2)
{
  UpdateEquipPacket *v2; // r4@1
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
  BinaryStream::writeVarInt(v3, *((_DWORD *)v2 + 4));
  BinaryStream::writeType<EntityUniqueID>((int)v3, (__int64 *)v2 + 3);
  v8 = &off_26D53B0;
  v9 = v3;
  v4 = *((_DWORD *)v2 + 8);
  v2 = (UpdateEquipPacket *)((char *)v2 + 32);
  (*(void (__fastcall **)(int *, UpdateEquipPacket *))(v4 + 44))(&v10, v2);
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


int __fastcall UpdateEquipPacket::handle(UpdateEquipPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, UpdateEquipPacket *))(*(_DWORD *)a3 + 332))(
           a3,
           a2,
           this);
}


signed int __fastcall UpdateEquipPacket::getId(UpdateEquipPacket *this)
{
  return 81;
}


void __fastcall UpdateEquipPacket::~UpdateEquipPacket(UpdateEquipPacket *this)
{
  UpdateEquipPacket *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E9954;
  CompoundTag::~CompoundTag((UpdateEquipPacket *)((char *)this + 32));
  j_j_j__ZdlPv_5((void *)v1);
}


UpdateEquipPacket *__fastcall UpdateEquipPacket::~UpdateEquipPacket(UpdateEquipPacket *this)
{
  UpdateEquipPacket *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E9954;
  CompoundTag::~CompoundTag((UpdateEquipPacket *)((char *)this + 32));
  return v1;
}


int __fastcall UpdateEquipPacket::read(UpdateEquipPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r5@1
  UpdateEquipPacket *v3; // r4@1
  int v4; // r5@1
  int v6; // [sp+4h] [bp-1Ch]@1
  char v7; // [sp+8h] [bp-18h]@1
  BinaryStream *v8; // [sp+Ch] [bp-14h]@1

  v2 = a2;
  v3 = this;
  *((_BYTE *)this + 13) = ReadOnlyBinaryStream::getByte(a2);
  *((_BYTE *)v3 + 14) = ReadOnlyBinaryStream::getByte(v2);
  *((_DWORD *)v3 + 4) = ReadOnlyBinaryStream::getVarInt(v2);
  ReadOnlyBinaryStream::getType<EntityUniqueID>((int)&v7, (int)v2);
  *((_QWORD *)v3 + 3) = *(_QWORD *)&v7;
  *(_DWORD *)&v7 = &off_26D53F8;
  v8 = v2;
  NbtIo::read((NbtIo *)&v6, (IDataInput *)&v7);
  v4 = v6;
  CompoundTag::operator=((int)v3 + 32, v6);
  if ( v4 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  return 0;
}


void __fastcall UpdateEquipPacket::write(UpdateEquipPacket *this, BinaryStream *a2)
{
  UpdateEquipPacket::write(this, a2);
}
