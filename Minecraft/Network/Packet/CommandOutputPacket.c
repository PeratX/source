

int __fastcall CommandOutputPacket::CommandOutputPacket(int a1)
{
  int v1; // r4@1

  v1 = a1;
  *(_DWORD *)(a1 + 4) = 2;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E9CB8;
  CommandOriginData::CommandOriginData(a1 + 16);
  CommandOutput::CommandOutput(v1 + 32, 0);
  return v1;
}


signed int __fastcall CommandOutputPacket::getId(CommandOutputPacket *this)
{
  return 79;
}


int __fastcall CommandOutputPacket::read(CommandOutputPacket *this, BinaryStream *a2)
{
  CommandOutputPacket *v2; // r4@1
  BinaryStream *v3; // r7@1
  int v4; // r5@1
  int v5; // r6@1
  void *v6; // r0@4
  CommandPropertyBag *v7; // r7@5
  int v8; // r0@5
  unsigned int *v10; // r2@13
  signed int v11; // r1@15
  int v12; // [sp+4h] [bp-D4h]@4
  char v13; // [sp+8h] [bp-D0h]@4
  __int16 v14; // [sp+1Eh] [bp-BAh]@4
  char v15; // [sp+20h] [bp-B8h]@4
  CommandPropertyBag *v16; // [sp+90h] [bp-48h]@3
  void *v17; // [sp+94h] [bp-44h]@1
  void (*v18)(void); // [sp+9Ch] [bp-3Ch]@1
  void (__fastcall *v19)(int, int, ReadOnlyBinaryStream *); // [sp+A0h] [bp-38h]@1
  void *ptr; // [sp+A4h] [bp-34h]@1
  int v21; // [sp+A8h] [bp-30h]@1
  int v22; // [sp+ACh] [bp-2Ch]@1
  char v23; // [sp+B0h] [bp-28h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<CommandOriginData>((int)&v23, (int)a2);
  CommandOriginData::operator=((int)v2 + 16, (int)&v23);
  CommandOriginData::~CommandOriginData((CommandOriginData *)&v23);
  v4 = ReadOnlyBinaryStream::getByte(v3);
  v5 = ReadOnlyBinaryStream::getUnsignedVarInt(v3);
  v17 = operator new(1u);
  v18 = (void (*)(void))sub_14BCC70;
  v19 = sub_14BC9F4;
  ptr = 0;
  v21 = 0;
  v22 = 0;
  ReadOnlyBinaryStream::readVectorList<CommandOutputMessage>((int)v3, (__int64 *)&ptr, (int)&v17);
  if ( v18 )
    v18();
  v16 = 0;
  if ( v4 == 4 )
  {
    v14 = Json::Features::strictMode(0);
    Json::Reader::Reader((Json::Reader *)&v15, (const Json::Features *)&v14);
    Json::Value::Value(&v13, 0);
    ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v12, (int)v3);
    Json::Reader::parse((int)&v15, &v12, (int)&v13, 0);
    v6 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v12 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    }
    v7 = (CommandPropertyBag *)operator new(0x20u);
    CommandPropertyBag::CommandPropertyBag(v7, (const Json::Value *)&v13);
    v8 = (int)v16;
    v16 = v7;
    if ( v8 )
      (*(void (**)(void))(*(_DWORD *)v8 + 4))();
    Json::Value::~Value((Json::Value *)&v13);
    Json::Reader::~Reader((Json::Reader *)&v15);
  }
  CommandOutput::load((int)v2 + 32, v4, v5, (int)&ptr, (int *)&v16);
  if ( v16 )
    (*(void (**)(void))(*(_DWORD *)v16 + 4))();
  std::_Destroy_aux<false>::__destroy<CommandOutputMessage *>((int)ptr, v21);
  if ( ptr )
    operator delete(ptr);
  return 0;
}


void __fastcall CommandOutputPacket::~CommandOutputPacket(CommandOutputPacket *this)
{
  CommandOutputPacket::~CommandOutputPacket(this);
}


void __fastcall CommandOutputPacket::write(CommandOutputPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  CommandOutputPacket *v3; // r5@1
  CommandOutput *v4; // r8@1
  unsigned __int8 v5; // r0@1
  int v6; // r0@1
  char *v7; // r7@1
  CommandOutputMessage *v8; // r5@1
  CommandOutputMessage *i; // r6@1
  int v10; // r0@9
  void *v11; // r0@9
  unsigned int *v12; // r2@11
  signed int v13; // r1@13
  int v14; // [sp+0h] [bp-30h]@9
  void *v15; // [sp+4h] [bp-2Ch]@1
  void (*v16)(void); // [sp+Ch] [bp-24h]@1
  unsigned int (__fastcall *v17)(int, BinaryStream *, CommandOutputMessage *); // [sp+10h] [bp-20h]@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<CommandOriginData>((int)a2, (_BYTE *)this + 16);
  v4 = (CommandOutputPacket *)((char *)v3 + 32);
  v5 = CommandOutput::getType((CommandOutputPacket *)((char *)v3 + 32));
  BinaryStream::writeByte(v2, v5);
  v6 = CommandOutput::getSuccessCount((CommandOutputPacket *)((char *)v3 + 32));
  BinaryStream::writeUnsignedVarInt(v2, v6);
  v7 = CommandOutput::getMessages((CommandOutputPacket *)((char *)v3 + 32));
  v15 = operator new(1u);
  v16 = (void (*)(void))sub_14BC3CC;
  v17 = sub_14BC318;
  BinaryStream::writeUnsignedVarInt(v2, -858993459 * ((signed int)((*(_QWORD *)v7 >> 32) - *(_QWORD *)v7) >> 2));
  v8 = (CommandOutputMessage *)(*(_QWORD *)v7 >> 32);
  for ( i = (CommandOutputMessage *)*(_QWORD *)v7; v8 != i; i = (CommandOutputMessage *)((char *)i + 20) )
  {
    if ( !v16 )
      sub_21E5F48();
    v17((int)&v15, v2, i);
  }
  if ( v16 )
    v16();
  if ( CommandOutput::getType(v4) == 4 )
    v10 = CommandOutput::getData(v4);
    PropertyBag::toString((PropertyBag *)&v14, (const Json::Value *)(v10 + 8));
    BinaryStream::writeString((int)v2, (char **)&v14);
    v11 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
    {
      v12 = (unsigned int *)(v14 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    }
}


char *__fastcall CommandOutputPacket::getOriginData(CommandOutputPacket *this)
{
  return (char *)this + 16;
}


void __fastcall CommandOutputPacket::~CommandOutputPacket(CommandOutputPacket *this)
{
  CommandOutputPacket *v1; // r4@1
  void *v2; // r0@1
  int v3; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_26E9CB8;
  std::_Destroy_aux<false>::__destroy<CommandOutputMessage *>(*((_QWORD *)this + 5), *((_QWORD *)this + 5) >> 32);
  v2 = (void *)*((_DWORD *)v1 + 10);
  if ( v2 )
    operator delete(v2);
  v3 = *((_DWORD *)v1 + 9);
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  *((_DWORD *)v1 + 9) = 0;
  CommandOriginData::~CommandOriginData((CommandOutputPacket *)((char *)v1 + 16));
  j_j_j__ZdlPv_5((void *)v1);
}


char *__fastcall CommandOutputPacket::getOutput(CommandOutputPacket *this)
{
  return (char *)this + 32;
}


int __fastcall CommandOutputPacket::CommandOutputPacket(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1

  v3 = a1;
  v4 = a3;
  *(_DWORD *)(a1 + 4) = 2;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E9CB8;
  (*(void (__fastcall **)(int))(*(_DWORD *)a2 + 76))(a1 + 16);
  CommandOutput::CommandOutput(v3 + 32, v4);
  return v3;
}


void __fastcall CommandOutputPacket::write(CommandOutputPacket *this, BinaryStream *a2)
{
  CommandOutputPacket::write(this, a2);
}


int __fastcall CommandOutputPacket::handle(CommandOutputPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, CommandOutputPacket *))(*(_DWORD *)a3 + 344))(
           a3,
           a2,
           this);
}


CommandOutputPacket *__fastcall CommandOutputPacket::~CommandOutputPacket(CommandOutputPacket *this)
{
  CommandOutputPacket *v1; // r4@1
  void *v2; // r0@1
  int v3; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_26E9CB8;
  std::_Destroy_aux<false>::__destroy<CommandOutputMessage *>(*((_QWORD *)this + 5), *((_QWORD *)this + 5) >> 32);
  v2 = (void *)*((_DWORD *)v1 + 10);
  if ( v2 )
    operator delete(v2);
  v3 = *((_DWORD *)v1 + 9);
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  *((_DWORD *)v1 + 9) = 0;
  CommandOriginData::~CommandOriginData((CommandOutputPacket *)((char *)v1 + 16));
  return v1;
}
