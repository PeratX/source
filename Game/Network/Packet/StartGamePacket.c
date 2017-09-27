

StartGamePacket *__fastcall StartGamePacket::~StartGamePacket(StartGamePacket *this)
{
  StartGamePacket *v1; // r5@1
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
  *(_DWORD *)this = &off_26E93DC;
  v2 = *((_DWORD *)this + 66);
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
  v4 = *((_DWORD *)v1 + 65);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v4 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 64);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v6 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  LevelSettings::~LevelSettings((StartGamePacket *)((char *)v1 + 16));
  return v1;
}


signed int __fastcall StartGamePacket::read(StartGamePacket *this, BinaryStream *a2)
{
  StartGamePacket *v2; // r4@1
  BinaryStream *v3; // r5@1
  double v4; // r0@1
  void *v5; // r0@1
  void *v6; // r0@2
  void *v7; // r0@3
  signed int result; // r0@4
  void *v9; // r0@5
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  unsigned int *v12; // r2@12
  signed int v13; // r1@14
  unsigned int *v14; // r2@16
  signed int v15; // r1@18
  unsigned int *v16; // r2@32
  signed int v17; // r1@34
  int v18; // [sp+10h] [bp-F0h]@5
  int v19; // [sp+14h] [bp-ECh]@3
  int v20; // [sp+18h] [bp-E8h]@2
  int v21; // [sp+1Ch] [bp-E4h]@1
  int v22; // [sp+20h] [bp-E0h]@1
  int v23; // [sp+24h] [bp-DCh]@1
  int v24; // [sp+28h] [bp-D8h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<EntityUniqueID>((int)&v22, (int)a2);
  *((_QWORD *)v2 + 27) = *(_QWORD *)&v22;
  ReadOnlyBinaryStream::getType<EntityRuntimeID>((int)&v22, (int)v3);
  *((_QWORD *)v2 + 28) = *(_QWORD *)&v22;
  *((_DWORD *)v2 + 58) = ReadOnlyBinaryStream::getVarInt(v3);
  ReadOnlyBinaryStream::getType<Vec3>((int)&v22, (int)v3);
  *((_DWORD *)v2 + 59) = v22;
  *((_DWORD *)v2 + 60) = v23;
  *((_DWORD *)v2 + 61) = v24;
  ReadOnlyBinaryStream::getType<Vec2>((int)&v22, (int)v3);
  *((_QWORD *)v2 + 31) = *(_QWORD *)&v22;
  HIDWORD(v4) = v3;
  LODWORD(v4) = &v22;
  ReadOnlyBinaryStream::getType<LevelSettings>(v4);
  LevelSettings::operator=((int)v2 + 16, (int)&v22);
  LevelSettings::~LevelSettings((LevelSettings *)&v22);
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v21, (int)v3);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v2 + 64,
    &v21);
  v5 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v21 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v20, (int)v3);
    (int *)v2 + 65,
    &v20);
  v6 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v20 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v19, (int)v3);
    (int *)v2 + 66,
    &v19);
  v7 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v19 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  *((_BYTE *)v2 + 268) = ReadOnlyBinaryStream::getBool(v3);
  *((_QWORD *)v2 + 34) = ReadOnlyBinaryStream::getUnsignedInt64(v3);
  *((_DWORD *)v2 + 70) = ReadOnlyBinaryStream::getVarInt(v3);
  result = 0;
  if ( !*(_DWORD *)(*((_DWORD *)v2 + 64) - 12) )
    mce::UUID::asString((mce::UUID *)&v18);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v2 + 64,
      &v18);
    v9 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v18 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      }
      else
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    result = 2;
  return result;
}


unsigned int __fastcall StartGamePacket::write(StartGamePacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  StartGamePacket *v3; // r5@1
  int v4; // r1@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<EntityUniqueID>((int)a2, (__int64 *)this + 27);
  BinaryStream::writeType<EntityRuntimeID>((int)v2, (unsigned __int64 *)v3 + 28);
  BinaryStream::writeVarInt(v2, *((_DWORD *)v3 + 58));
  BinaryStream::writeType<Vec3>((int)v2, (int *)v3 + 59);
  BinaryStream::writeType<Vec2>((int)v2, (int *)v3 + 62);
  BinaryStream::writeType<LevelSettings>((int)v2, (StartGamePacket *)((char *)v3 + 16));
  BinaryStream::writeString((int)v2, (char **)v3 + 64);
  BinaryStream::writeString((int)v2, (char **)v3 + 65);
  BinaryStream::writeString((int)v2, (char **)v3 + 66);
  BinaryStream::writeBool(v2, *((_BYTE *)v3 + 268));
  BinaryStream::writeUnsignedInt64(v2, v4, *((_QWORD *)v3 + 34));
  return j_j_j__ZN12BinaryStream11writeVarIntEi_1(v2, *((_DWORD *)v3 + 70));
}


void __fastcall StartGamePacket::~StartGamePacket(StartGamePacket *this)
{
  StartGamePacket::~StartGamePacket(this);
}


int __fastcall StartGamePacket::handle(StartGamePacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, StartGamePacket *))(*(_DWORD *)a3 + 84))(
           a3,
           a2,
           this);
}


signed int __fastcall StartGamePacket::getId(StartGamePacket *this)
{
  return 11;
}


void __fastcall StartGamePacket::~StartGamePacket(StartGamePacket *this)
{
  StartGamePacket *v1; // r5@1
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
  *(_DWORD *)this = &off_26E93DC;
  v2 = *((_DWORD *)this + 66);
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
  v4 = *((_DWORD *)v1 + 65);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v4 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 64);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v6 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  LevelSettings::~LevelSettings((StartGamePacket *)((char *)v1 + 16));
  operator delete((void *)v1);
}


int __fastcall StartGamePacket::StartGamePacket(int a1, int a2, int a3, int a4, __int64 a5, int a6, int a7, _QWORD *a8, int *a9, int *a10, int *a11, char a12, int a13, __int64 a14, int a15)
{
  int v15; // r5@1
  int v16; // r7@1
  int v17; // r6@1
  int v18; // r12@1
  int v19; // r2@1
  int v20; // r7@1
  int result; // r0@1

  v15 = a1;
  v16 = a3;
  *(_DWORD *)(a1 + 4) = 2;
  v17 = a4;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26E93DC;
  LevelSettings::LevelSettings(a1 + 16, a2);
  *(_DWORD *)(v15 + 216) = v16;
  *(_DWORD *)(v15 + 220) = v17;
  *(_QWORD *)(v15 + 224) = a5;
  v18 = v15 + 236;
  *(_DWORD *)(v15 + 232) = a6;
  v19 = *(_DWORD *)(a7 + 4);
  v20 = *(_DWORD *)(a7 + 8);
  *(_DWORD *)v18 = *(_DWORD *)a7;
  *(_DWORD *)(v18 + 4) = v19;
  *(_DWORD *)(v18 + 8) = v20;
  *(_QWORD *)(v15 + 248) = *a8;
  sub_21E8AF4((int *)(v15 + 256), a9);
  sub_21E8AF4((int *)(v15 + 260), a10);
  sub_21E8AF4((int *)(v15 + 264), a11);
  *(_BYTE *)(v15 + 268) = a12;
  *(_QWORD *)(v15 + 272) = a14;
  result = v15;
  *(_DWORD *)(v15 + 280) = a15;
  return result;
}
