

int __fastcall CommandRequestPacket::CommandRequestPacket(int a1)
{
  int v1; // r5@1

  v1 = a1;
  *(_DWORD *)(a1 + 4) = 2;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E9CE0;
  *(_DWORD *)(a1 + 16) = &unk_28898CC;
  CommandOriginData::CommandOriginData(a1 + 24);
  return v1;
}


int __fastcall CommandRequestPacket::CommandRequestPacket(int a1, int *a2, char a3)
{
  int v3; // r5@1
  int *v4; // r7@1
  char v5; // r4@1
  int v6; // r0@1

  v3 = a1;
  v4 = a2;
  *(_DWORD *)(a1 + 4) = 2;
  v5 = a3;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E9CE0;
  sub_21E8AF4((int *)(a1 + 16), a2);
  v6 = CommandContext::getCommandOrigin((CommandContext *)v4);
  (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 76))(v3 + 24);
  *(_BYTE *)(v3 + 40) = v5;
  return v3;
}


int __fastcall CommandRequestPacket::read(CommandRequestPacket *this, BinaryStream *a2)
{
  CommandRequestPacket *v2; // r4@1
  BinaryStream *v3; // r5@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-2Ch]@1
  char v9; // [sp+8h] [bp-28h]@2

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v8, (int)a2);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v2 + 4,
    &v8);
  v4 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
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
  ReadOnlyBinaryStream::getType<CommandOriginData>((int)&v9, (int)v3);
  CommandOriginData::operator=((int)v2 + 24, (int)&v9);
  CommandOriginData::~CommandOriginData((CommandOriginData *)&v9);
  *((_BYTE *)v2 + 40) = ReadOnlyBinaryStream::getBool(v3);
  return 0;
}


const void **__fastcall CommandRequestPacket::write(CommandRequestPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  CommandRequestPacket *v3; // r5@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeString((int)a2, (char **)this + 4);
  BinaryStream::writeType<CommandOriginData>((int)v2, (_BYTE *)v3 + 24);
  return j_j_j__ZN12BinaryStream9writeBoolEb_1(v2, *((_BYTE *)v3 + 40));
}


CommandRequestPacket *__fastcall CommandRequestPacket::~CommandRequestPacket(CommandRequestPacket *this)
{
  CommandRequestPacket *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E9CE0;
  CommandOriginData::~CommandOriginData((CommandRequestPacket *)((char *)this + 24));
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


void __fastcall CommandRequestPacket::~CommandRequestPacket(CommandRequestPacket *this)
{
  CommandRequestPacket::~CommandRequestPacket(this);
}


int __fastcall CommandRequestPacket::handle(CommandRequestPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, CommandRequestPacket *))(*(_DWORD *)a3 + 340))(
           a3,
           a2,
           this);
}


signed int __fastcall CommandRequestPacket::getId(CommandRequestPacket *this)
{
  return 77;
}


void __fastcall CommandRequestPacket::~CommandRequestPacket(CommandRequestPacket *this)
{
  CommandRequestPacket *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E9CE0;
  CommandOriginData::~CommandOriginData((CommandRequestPacket *)((char *)this + 24));
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


PlayerCommandOrigin *__fastcall CommandRequestPacket::createCommandContext(CommandRequestPacket *this, const NetworkIdentifier *a2, Level *a3, Level *a4, int a5)
{
  const NetworkIdentifier *v5; // r5@1
  CommandRequestPacket *v6; // r4@1
  int *v7; // r6@4
  PlayerCommandOrigin *v8; // r0@4
  int v9; // r0@4
  PlayerCommandOrigin *result; // r0@6
  PlayerCommandOrigin *v11; // [sp+8h] [bp-18h]@1
  PlayerCommandOrigin *v12; // [sp+Ch] [bp-14h]@4

  v5 = a2;
  v6 = this;
  CommandOrigin::fromCommandOriginData((int)&v11, (int)a2 + 24, a4, (int)a3, *((_BYTE *)a2 + 12));
  if ( v11 )
  {
    if ( !(*(int (**)(void))(*(_DWORD *)v11 + 72))() )
      PlayerCommandOrigin::setAllowHiddenCommands(v11, *((_BYTE *)v5 + 40));
    v7 = (int *)operator new(0xCu);
    v8 = v11;
    v11 = 0;
    v12 = v8;
    CommandContext::CommandContext(v7, (int *)v5 + 4, (int *)&v12, a5);
    v9 = (int)v12;
    *(_DWORD *)v6 = v7;
    if ( v9 )
      (*(void (**)(void))(*(_DWORD *)v9 + 4))();
    result = v11;
    if ( v11 )
      result = (PlayerCommandOrigin *)(*(int (**)(void))(*(_DWORD *)v11 + 4))();
  }
  else
    result = 0;
    *(_DWORD *)v6 = 0;
  return result;
}
