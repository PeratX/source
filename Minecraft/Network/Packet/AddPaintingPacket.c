

int __fastcall AddPaintingPacket::read(AddPaintingPacket *this, BinaryStream *a2)
{
  AddPaintingPacket *v2; // r4@1
  BinaryStream *v3; // r5@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-24h]@1
  int v9; // [sp+8h] [bp-20h]@1
  int v10; // [sp+Ch] [bp-1Ch]@1
  int v11; // [sp+10h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<EntityUniqueID>((int)&v9, (int)a2);
  *((_QWORD *)v2 + 2) = *(_QWORD *)&v9;
  ReadOnlyBinaryStream::getType<EntityRuntimeID>((int)&v9, (int)v3);
  *((_QWORD *)v2 + 3) = *(_QWORD *)&v9;
  ReadOnlyBinaryStream::getType<NetworkBlockPosition>((int)&v9, (int)v3);
  *((_DWORD *)v2 + 8) = v9;
  *((_DWORD *)v2 + 9) = v10;
  *((_DWORD *)v2 + 10) = v11;
  *((_DWORD *)v2 + 11) = ReadOnlyBinaryStream::getVarInt(v3);
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v8, (int)v3);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v2 + 12,
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
  return 0;
}


int __fastcall AddPaintingPacket::AddPaintingPacket(int a1, Entity *a2)
{
  int v2; // r4@1
  Entity *v3; // r6@1
  char *v4; // r0@1
  __int64 v5; // r2@1
  int v6; // r0@1
  void *v7; // r0@1
  unsigned int *v9; // r2@3
  signed int v10; // r1@5
  int v11; // [sp+0h] [bp-20h]@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)(a1 + 4) = 2;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26FCE98;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)Entity::getUniqueID(a2);
  Entity::getRuntimeID((Entity *)(v2 + 24), (int)v3);
  v4 = HangingEntity::getBlockPos(v3);
  v5 = *(_QWORD *)v4;
  v6 = *((_DWORD *)v4 + 2);
  *(_QWORD *)(v2 + 32) = v5;
  *(_DWORD *)(v2 + 40) = v6;
  *(_DWORD *)(v2 + 44) = *((_DWORD *)v3 + 853);
  *(_DWORD *)v2 = &off_26E97C4;
  *(_DWORD *)(v2 + 48) = &unk_28898CC;
  Motive::getName((Motive *)&v11, *((int **)v3 + 858));
  EntityInteraction::setInteractText((int *)(v2 + 48), &v11);
  v7 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v11 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
  }
  return v2;
}


int __fastcall AddPaintingPacket::handle(AddPaintingPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, AddPaintingPacket *))(*(_DWORD *)a3 + 92))(
           a3,
           a2,
           this);
}


signed int __fastcall AddPaintingPacket::getId(AddPaintingPacket *this)
{
  return 22;
}


void __fastcall AddPaintingPacket::~AddPaintingPacket(AddPaintingPacket *this)
{
  AddPaintingPacket *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E97C4;
  v2 = *((_DWORD *)this + 12);
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


AddPaintingPacket *__fastcall AddPaintingPacket::~AddPaintingPacket(AddPaintingPacket *this)
{
  AddPaintingPacket *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E97C4;
  v2 = *((_DWORD *)this + 12);
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


void __fastcall AddPaintingPacket::~AddPaintingPacket(AddPaintingPacket *this)
{
  AddPaintingPacket::~AddPaintingPacket(this);
}


const void **__fastcall AddPaintingPacket::write(AddPaintingPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  AddPaintingPacket *v3; // r5@1

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<EntityUniqueID>((int)a2, (__int64 *)this + 2);
  BinaryStream::writeType<EntityRuntimeID>((int)v2, (unsigned __int64 *)v3 + 3);
  BinaryStream::writeType<NetworkBlockPosition>((int)v2, (signed int *)v3 + 8);
  BinaryStream::writeVarInt(v2, *((_DWORD *)v3 + 11));
  return j_j_j__ZN12BinaryStream11writeStringERKSs_1((int)v2, (char **)v3 + 12);
}
