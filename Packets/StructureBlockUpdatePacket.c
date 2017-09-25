

signed int __fastcall StructureBlockUpdatePacket::getId(StructureBlockUpdatePacket *this)
{
  return 90;
}


int __fastcall StructureBlockUpdatePacket::read(StructureBlockUpdatePacket *this, BinaryStream *a2)
{
  StructureBlockUpdatePacket *v2; // r4@1
  BinaryStream *v3; // r5@1
  void *v4; // r0@1
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  int v11; // [sp+0h] [bp-78h]@1
  int v12; // [sp+4h] [bp-74h]@1
  int v13; // [sp+8h] [bp-70h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<NetworkBlockPosition>((int)&v11, (int)a2);
  *((_DWORD *)v2 + 4) = v11;
  *((_DWORD *)v2 + 5) = v12;
  *((_DWORD *)v2 + 6) = v13;
  *((_DWORD *)v2 + 7) = ReadOnlyBinaryStream::getUnsignedVarInt(v3);
  ReadOnlyBinaryStream::getType<StructureEditorData>((int)&v11, (int)v3);
  StructureEditorData::operator=((int *)v2 + 8, &v11);
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
  v5 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  *((_BYTE *)v2 + 128) = ReadOnlyBinaryStream::getBool(v3);
  *((_BYTE *)v2 + 129) = ReadOnlyBinaryStream::getBool(v3);
  return 0;
}


int __fastcall StructureBlockUpdatePacket::handle(StructureBlockUpdatePacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, StructureBlockUpdatePacket *))(*(_DWORD *)a3 + 376))(
           a3,
           a2,
           this);
}


StructureBlockUpdatePacket *__fastcall StructureBlockUpdatePacket::~StructureBlockUpdatePacket(StructureBlockUpdatePacket *this)
{
  StructureBlockUpdatePacket *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E4FB8;
  v2 = *((_DWORD *)this + 9);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 8);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return v1;
}


void __fastcall StructureBlockUpdatePacket::~StructureBlockUpdatePacket(StructureBlockUpdatePacket *this)
{
  StructureBlockUpdatePacket *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E4FB8;
  v2 = *((_DWORD *)this + 9);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 8);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  operator delete((void *)v1);
}


void __fastcall StructureBlockUpdatePacket::~StructureBlockUpdatePacket(StructureBlockUpdatePacket *this)
{
  StructureBlockUpdatePacket::~StructureBlockUpdatePacket(this);
}


const void **__fastcall StructureBlockUpdatePacket::write(StructureBlockUpdatePacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  StructureBlockUpdatePacket *v3; // r5@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<NetworkBlockPosition>((int)a2, (signed int *)this + 4);
  BinaryStream::writeUnsignedVarInt(v2, *((_DWORD *)v3 + 7));
  BinaryStream::writeType<StructureEditorData>((int)v2, (_DWORD *)v3 + 8);
  BinaryStream::writeBool(v2, *((_BYTE *)v3 + 128));
  return j_j_j__ZN12BinaryStream9writeBoolEb_1(v2, *((_BYTE *)v3 + 129));
}
