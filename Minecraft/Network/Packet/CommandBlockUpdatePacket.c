

int __fastcall CommandBlockUpdatePacket::handle(CommandBlockUpdatePacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, CommandBlockUpdatePacket *))(*(_DWORD *)a3 + 348))(
           a3,
           a2,
           this);
}


void __fastcall CommandBlockUpdatePacket::~CommandBlockUpdatePacket(CommandBlockUpdatePacket *this)
{
  CommandBlockUpdatePacket *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15

  v1 = this;
  *(_DWORD *)this = &off_26E997C;
  v2 = *((_DWORD *)this + 12);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 11);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v4 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 10);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v6 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  operator delete((void *)v1);
}


void __fastcall CommandBlockUpdatePacket::~CommandBlockUpdatePacket(CommandBlockUpdatePacket *this)
{
  CommandBlockUpdatePacket::~CommandBlockUpdatePacket(this);
}


const void **__fastcall CommandBlockUpdatePacket::write(CommandBlockUpdatePacket *this, BinaryStream *a2)
{
  CommandBlockUpdatePacket *v2; // r5@1
  BinaryStream *v3; // r4@1

  v2 = this;
  v3 = a2;
  BinaryStream::writeBool(a2, *((_BYTE *)this + 53));
  if ( *((_BYTE *)v2 + 53) )
  {
    BinaryStream::writeType<NetworkBlockPosition>((int)v3, (signed int *)v2 + 4);
    BinaryStream::writeUnsignedVarInt(v3, *((_BYTE *)v2 + 28));
    BinaryStream::writeBool(v3, *((_BYTE *)v2 + 29));
    BinaryStream::writeBool(v3, *((_BYTE *)v2 + 30));
  }
  else
    BinaryStream::writeType<EntityRuntimeID>((int)v3, (unsigned __int64 *)v2 + 4);
  BinaryStream::writeString((int)v3, (char **)v2 + 10);
  BinaryStream::writeString((int)v3, (char **)v2 + 11);
  BinaryStream::writeString((int)v3, (char **)v2 + 12);
  return j_j_j__ZN12BinaryStream9writeBoolEb_1(v3, *((_BYTE *)v2 + 52));
}


CommandBlockUpdatePacket *__fastcall CommandBlockUpdatePacket::~CommandBlockUpdatePacket(CommandBlockUpdatePacket *this)
{
  CommandBlockUpdatePacket *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  unsigned int *v13; // r2@13
  signed int v14; // r1@15

  v1 = this;
  *(_DWORD *)this = &off_26E997C;
  v2 = *((_DWORD *)this + 12);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 11);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v4 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 10);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v6 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  return v1;
}


signed int __fastcall CommandBlockUpdatePacket::getId(CommandBlockUpdatePacket *this)
{
  return 78;
}


int __fastcall CommandBlockUpdatePacket::read(CommandBlockUpdatePacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r5@1
  CommandBlockUpdatePacket *v3; // r4@1
  signed int v4; // r0@1
  void *v5; // r0@4
  void *v6; // r0@5
  void *v7; // r0@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  unsigned int *v11; // r2@12
  signed int v12; // r1@14
  unsigned int *v13; // r2@16
  signed int v14; // r1@18
  int v15; // [sp+4h] [bp-2Ch]@6
  int v16; // [sp+8h] [bp-28h]@5
  int v17; // [sp+Ch] [bp-24h]@4
  int v18; // [sp+10h] [bp-20h]@2
  int v19; // [sp+14h] [bp-1Ch]@2
  int v20; // [sp+18h] [bp-18h]@2

  v2 = a2;
  v3 = this;
  v4 = ReadOnlyBinaryStream::getBool(a2);
  *((_BYTE *)v3 + 53) = v4;
  if ( v4 )
  {
    ReadOnlyBinaryStream::getType<NetworkBlockPosition>((int)&v18, (int)v2);
    *((_DWORD *)v3 + 4) = v18;
    *((_DWORD *)v3 + 5) = v19;
    *((_DWORD *)v3 + 6) = v20;
    *((_BYTE *)v3 + 28) = ReadOnlyBinaryStream::getUnsignedVarInt(v2);
    *((_BYTE *)v3 + 29) = ReadOnlyBinaryStream::getBool(v2);
    *((_BYTE *)v3 + 30) = ReadOnlyBinaryStream::getBool(v2);
  }
  else
    ReadOnlyBinaryStream::getType<EntityRuntimeID>((int)&v18, (int)v2);
    *((_QWORD *)v3 + 4) = *(_QWORD *)&v18;
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v17, (int)v2);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v3 + 10,
    &v17);
  v5 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v16, (int)v2);
    (int *)v3 + 11,
    &v16);
  v6 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v16 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v15, (int)v2);
    (int *)v3 + 12,
    &v15);
  v7 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v15 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  *((_BYTE *)v3 + 52) = ReadOnlyBinaryStream::getBool(v2);
  return 0;
}


BaseCommandBlock *__fastcall CommandBlockUpdatePacket::CommandBlockUpdatePacket(BaseCommandBlock *a1, int a2, __int64 a3, BaseCommandBlock *a4)
{
  BaseCommandBlock *v4; // r5@1
  int *v5; // r0@1
  int *v6; // r0@1

  v4 = a1;
  *((_DWORD *)a1 + 1) = 2;
  *((_DWORD *)a1 + 2) = 1;
  *((_BYTE *)a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E997C;
  *((_BYTE *)a1 + 28) = 0;
  *((_DWORD *)a1 + 6) = 0;
  *((_DWORD *)a1 + 4) = 0;
  *((_DWORD *)a1 + 5) = 0;
  *((_BYTE *)a1 + 29) = 1;
  *((_BYTE *)a1 + 30) = 0;
  *((_QWORD *)a1 + 4) = a3;
  v5 = (int *)BaseCommandBlock::getCommand(a4);
  sub_21E8AF4((int *)v4 + 10, v5);
  BaseCommandBlock::getLastOutput((BaseCommandBlock *)((char *)v4 + 44), (int)a4);
  v6 = (int *)BaseCommandBlock::getRawName(a4);
  sub_21E8AF4((int *)v4 + 12, v6);
  *((_BYTE *)v4 + 52) = BaseCommandBlock::getTrackOutput(a4);
  *((_BYTE *)v4 + 53) = 0;
  return v4;
}


int __fastcall CommandBlockUpdatePacket::CommandBlockUpdatePacket(int a1, BlockSource *a2, BlockEntity *a3)
{
  int v3; // r5@1
  BlockSource *v4; // r4@1
  BlockEntity *v5; // r6@1
  char *v6; // r0@1
  __int64 v7; // r1@1
  int v8; // r0@1
  int *v9; // r0@1
  int *v10; // r0@1

  v3 = a1;
  v4 = a2;
  *(_DWORD *)(a1 + 4) = 2;
  v5 = a3;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E997C;
  v6 = BlockEntity::getPosition(a3);
  v7 = *(_QWORD *)v6;
  v8 = *((_DWORD *)v6 + 2);
  *(_QWORD *)(v3 + 16) = v7;
  *(_DWORD *)(v3 + 24) = v8;
  *(_BYTE *)(v3 + 28) = CommandBlockEntity::getMode(v5, v4);
  *(_BYTE *)(v3 + 29) = CommandBlockEntity::isRedstoneMode(v5);
  *(_BYTE *)(v3 + 30) = CommandBlockEntity::getConditionalMode(v5, v4);
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 36) = 0;
  v9 = (int *)CommandBlockEntity::getCommand(v5);
  sub_21E8AF4((int *)(v3 + 40), v9);
  CommandBlockEntity::getLastOutput((CommandBlockEntity *)(v3 + 44), (int)v5);
  v10 = (int *)(*(int (__fastcall **)(BlockEntity *))(*(_DWORD *)v5 + 100))(v5);
  sub_21E8AF4((int *)(v3 + 48), v10);
  *(_BYTE *)(v3 + 52) = CommandBlockEntity::getTrackOutput(v5);
  *(_BYTE *)(v3 + 53) = 1;
  return v3;
}
