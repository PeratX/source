

void __fastcall BlockEntityDataPacket::~BlockEntityDataPacket(BlockEntityDataPacket *this)
{
  BlockEntityDataPacket::~BlockEntityDataPacket(this);
}


void __fastcall BlockEntityDataPacket::~BlockEntityDataPacket(BlockEntityDataPacket *this)
{
  BlockEntityDataPacket *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E97EC;
  CompoundTag::~CompoundTag((BlockEntityDataPacket *)((char *)this + 28));
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall BlockEntityDataPacket::write(BlockEntityDataPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r5@1
  BlockEntityDataPacket *v3; // r4@1
  int v4; // t1@1
  void *v5; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  void **v8; // [sp+4h] [bp-24h]@1
  BinaryStream *v9; // [sp+8h] [bp-20h]@1
  int v10; // [sp+Ch] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<NetworkBlockPosition>((int)a2, (signed int *)this + 4);
  v8 = &off_26D53B0;
  v9 = v2;
  v4 = *((_DWORD *)v3 + 7);
  v3 = (BlockEntityDataPacket *)((char *)v3 + 28);
  (*(void (__fastcall **)(int *, BlockEntityDataPacket *))(v4 + 44))(&v10, v3);
  Tag::writeNamedTag((int)&v10, (int)v3, (int)&v8);
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


BlockEntityDataPacket *__fastcall BlockEntityDataPacket::~BlockEntityDataPacket(BlockEntityDataPacket *this)
{
  BlockEntityDataPacket *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E97EC;
  CompoundTag::~CompoundTag((BlockEntityDataPacket *)((char *)this + 28));
  return v1;
}


int __fastcall BlockEntityDataPacket::handle(BlockEntityDataPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, BlockEntityDataPacket *))(*(_DWORD *)a3 + 264))(
           a3,
           a2,
           this);
}


signed int __fastcall BlockEntityDataPacket::getId(BlockEntityDataPacket *this)
{
  return 56;
}


int __fastcall BlockEntityDataPacket::read(BlockEntityDataPacket *this, BinaryStream *a2)
{
  BlockEntityDataPacket *v2; // r4@1
  BinaryStream *v3; // r5@1
  int v4; // r5@1
  int v6; // [sp+0h] [bp-20h]@1
  void **v7; // [sp+4h] [bp-1Ch]@1
  BinaryStream *v8; // [sp+8h] [bp-18h]@1
  int v9; // [sp+Ch] [bp-14h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<NetworkBlockPosition>((int)&v7, (int)a2);
  *((_DWORD *)v2 + 4) = v7;
  *((_DWORD *)v2 + 5) = v8;
  *((_DWORD *)v2 + 6) = v9;
  v7 = &off_26D53F8;
  v8 = v3;
  NbtIo::read((NbtIo *)&v6, (IDataInput *)&v7);
  v4 = v6;
  CompoundTag::operator=((int)v2 + 28, v6);
  if ( v4 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  return 0;
}


void __fastcall BlockEntityDataPacket::write(BlockEntityDataPacket *this, BinaryStream *a2)
{
  BlockEntityDataPacket::write(this, a2);
}
