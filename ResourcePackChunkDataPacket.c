

int __fastcall ResourcePackChunkDataPacket::ResourcePackChunkDataPacket(int a1, int *a2, int a3, int a4, int a5, int a6, __int64 *a7)
{
  int v7; // r4@1
  int v8; // r7@1
  char *v9; // r5@1
  __int64 v10; // r0@1
  int v11; // r7@1
  __int64 v12; // kr00_8@3

  v7 = a1;
  v8 = a3;
  *(_DWORD *)(a1 + 4) = 2;
  v9 = 0;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E99F4;
  sub_21E8AF4((int *)(a1 + 16), a2);
  *(_DWORD *)(v7 + 28) = a6;
  *(_DWORD *)(v7 + 20) = v8;
  *(_DWORD *)(v7 + 24) = a5;
  v10 = *a7;
  *(_DWORD *)(v7 + 32) = 0;
  *(_DWORD *)(v7 + 36) = 0;
  v11 = HIDWORD(v10) - v10;
  *(_DWORD *)(v7 + 40) = 0;
  if ( HIDWORD(v10) != (_DWORD)v10 )
    v9 = (char *)operator new(HIDWORD(v10) - v10);
  *(_DWORD *)(v7 + 32) = v9;
  *(_DWORD *)(v7 + 36) = v9;
  *(_DWORD *)(v7 + 40) = &v9[v11];
  v12 = *a7;
  if ( HIDWORD(v12) != (_DWORD)v12 )
    _aeabi_memmove(v9, v12);
  *(_DWORD *)(v7 + 36) = &v9[HIDWORD(v12) - v12];
  return v7;
}


const void **__fastcall ResourcePackChunkDataPacket::write(ResourcePackChunkDataPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  ResourcePackChunkDataPacket *v3; // r5@1
  int v4; // r1@1
  signed int v5; // r6@1
  const void **result; // r0@1
  int v7; // r7@2

  v2 = a2;
  v3 = this;
  BinaryStream::writeString((int)a2, (char **)this + 4);
  BinaryStream::writeUnsignedInt(v2, *((_DWORD *)v3 + 5));
  BinaryStream::writeUnsignedInt64(v2, v4, *((_QWORD *)v3 + 3));
  v5 = (*((_QWORD *)v3 + 4) >> 32) - *((_QWORD *)v3 + 4);
  result = BinaryStream::writeUnsignedInt(v2, v5);
  if ( v5 >= 1 )
  {
    v7 = 0;
    do
      result = BinaryStream::writeByte(v2, *(_BYTE *)(*((_DWORD *)v3 + 8) + v7++));
    while ( v5 != v7 );
  }
  return result;
}


signed int __fastcall ResourcePackChunkDataPacket::getId(ResourcePackChunkDataPacket *this)
{
  return 83;
}


void __fastcall ResourcePackChunkDataPacket::~ResourcePackChunkDataPacket(ResourcePackChunkDataPacket *this)
{
  ResourcePackChunkDataPacket *v1; // r4@1
  void *v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  unsigned int *v5; // r12@5
  signed int v6; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26E99F4;
  v2 = (void *)*((_DWORD *)this + 8);
  if ( v2 )
    operator delete(v2);
  v3 = *((_DWORD *)v1 + 4);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v3 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  operator delete((void *)v1);
}


ResourcePackChunkDataPacket *__fastcall ResourcePackChunkDataPacket::~ResourcePackChunkDataPacket(ResourcePackChunkDataPacket *this)
{
  ResourcePackChunkDataPacket *v1; // r4@1
  void *v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  unsigned int *v6; // r12@5
  signed int v7; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26E99F4;
  v2 = (void *)*((_DWORD *)this + 8);
  if ( v2 )
    operator delete(v2);
  v3 = *((_DWORD *)v1 + 4);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v3 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  return v1;
}


int __fastcall ResourcePackChunkDataPacket::handle(ResourcePackChunkDataPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, ResourcePackChunkDataPacket *))(*(_DWORD *)a3 + 368))(
           a3,
           a2,
           this);
}


int __fastcall ResourcePackChunkDataPacket::read(ResourcePackChunkDataPacket *this, BinaryStream *a2)
{
  ResourcePackChunkDataPacket *v2; // r5@1
  BinaryStream *v3; // r4@1
  void *v4; // r0@1
  unsigned int v5; // r6@2
  int v6; // r0@2
  ResourcePackChunkDataPacket *v7; // r7@2
  unsigned int v8; // r1@2
  int v9; // r5@7
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  int v13; // [sp+0h] [bp-20h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v13, (int)a2);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v2 + 4,
    &v13);
  v4 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v13 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  *((_DWORD *)v2 + 5) = ReadOnlyBinaryStream::getUnsignedInt(v3);
  *((_QWORD *)v2 + 3) = ReadOnlyBinaryStream::getUnsignedInt64(v3);
  v5 = ReadOnlyBinaryStream::getUnsignedInt(v3);
  v7 = (ResourcePackChunkDataPacket *)((char *)v2 + 32);
  v6 = *((_DWORD *)v2 + 8);
  v8 = *((_DWORD *)v2 + 9) - v6;
  if ( v5 <= v8 )
    if ( v5 < v8 )
      *((_DWORD *)v2 + 9) = v6 + v5;
  else
    std::vector<unsigned char,std::allocator<unsigned char>>::_M_default_append((int)v2 + 32, v5 - v8);
  if ( (signed int)v5 >= 1 )
    v9 = 0;
    do
      *(_BYTE *)(*(_DWORD *)v7 + v9++) = ReadOnlyBinaryStream::getByte(v3);
    while ( v5 != v9 );
  return 0;
}


void __fastcall ResourcePackChunkDataPacket::~ResourcePackChunkDataPacket(ResourcePackChunkDataPacket *this)
{
  ResourcePackChunkDataPacket::~ResourcePackChunkDataPacket(this);
}
