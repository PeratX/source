

AddBehaviorTreePacket *__fastcall AddBehaviorTreePacket::~AddBehaviorTreePacket(AddBehaviorTreePacket *this)
{
  AddBehaviorTreePacket *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E9BFC;
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


void __fastcall AddBehaviorTreePacket::~AddBehaviorTreePacket(AddBehaviorTreePacket *this)
{
  AddBehaviorTreePacket::~AddBehaviorTreePacket(this);
}


int __fastcall AddBehaviorTreePacket::read(AddBehaviorTreePacket *this, BinaryStream *a2)
{
  AddBehaviorTreePacket *v2; // r4@1
  void *v3; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = this;
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v7, (int)a2);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v2 + 4,
    &v7);
  v3 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
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
  return 0;
}


void __fastcall AddBehaviorTreePacket::~AddBehaviorTreePacket(AddBehaviorTreePacket *this)
{
  AddBehaviorTreePacket *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E9BFC;
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


signed int __fastcall AddBehaviorTreePacket::getId(AddBehaviorTreePacket *this)
{
  return 89;
}


int __fastcall AddBehaviorTreePacket::handle(AddBehaviorTreePacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, AddBehaviorTreePacket *))(*(_DWORD *)a3 + 400))(
           a3,
           a2,
           this);
}
