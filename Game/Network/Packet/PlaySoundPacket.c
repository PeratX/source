

void __fastcall PlaySoundPacket::~PlaySoundPacket(PlaySoundPacket *this)
{
  PlaySoundPacket *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E9A94;
  v2 = *((_DWORD *)this + 4);
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


int __fastcall PlaySoundPacket::handle(PlaySoundPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, PlaySoundPacket *))(*(_DWORD *)a3 + 384))(
           a3,
           a2,
           this);
}


const void **__fastcall PlaySoundPacket::write(PlaySoundPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  PlaySoundPacket *v3; // r5@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeString((int)a2, (char **)this + 4);
  BinaryStream::writeType<NetworkBlockPosition>((int)v2, (signed int *)v3 + 5);
  BinaryStream::writeFloat(v2, *((float *)v3 + 8));
  return j_j_j__ZN12BinaryStream10writeFloatEf_1(v2, *((float *)v3 + 9));
}


void __fastcall PlaySoundPacket::~PlaySoundPacket(PlaySoundPacket *this)
{
  PlaySoundPacket::~PlaySoundPacket(this);
}


int __fastcall PlaySoundPacket::read(PlaySoundPacket *this, BinaryStream *a2)
{
  PlaySoundPacket *v2; // r4@1
  BinaryStream *v3; // r5@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+0h] [bp-20h]@1
  int v9; // [sp+4h] [bp-1Ch]@2
  int v10; // [sp+8h] [bp-18h]@2
  int v11; // [sp+Ch] [bp-14h]@2

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
  ReadOnlyBinaryStream::getType<NetworkBlockPosition>((int)&v9, (int)v3);
  *((_DWORD *)v2 + 5) = v9;
  *((_DWORD *)v2 + 6) = v10;
  *((_DWORD *)v2 + 7) = v11;
  *((_DWORD *)v2 + 8) = ReadOnlyBinaryStream::getFloat(v3);
  *((_DWORD *)v2 + 9) = ReadOnlyBinaryStream::getFloat(v3);
  return 0;
}


signed int __fastcall PlaySoundPacket::getId(PlaySoundPacket *this)
{
  return 86;
}


PlaySoundPacket *__fastcall PlaySoundPacket::~PlaySoundPacket(PlaySoundPacket *this)
{
  PlaySoundPacket *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E9A94;
  v2 = *((_DWORD *)this + 4);
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
