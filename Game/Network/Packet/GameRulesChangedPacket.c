

signed int __fastcall GameRulesChangedPacket::getId(GameRulesChangedPacket *this)
{
  return 72;
}


int __fastcall GameRulesChangedPacket::handle(GameRulesChangedPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, GameRulesChangedPacket *))(*(_DWORD *)a3 + 360))(
           a3,
           a2,
           this);
}


GameRulesChangedPacket *__fastcall GameRulesChangedPacket::~GameRulesChangedPacket(GameRulesChangedPacket *this)
{
  GameRulesChangedPacket *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11

  v1 = this;
  *(_DWORD *)this = &off_26E99CC;
  v3 = (void *)(*((_QWORD *)this + 2) >> 32);
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 != v3 )
  {
    do
    {
      v6 = (int *)(*(_DWORD *)v2 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
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
          j_j_j_j__ZdlPv_9(v6);
      }
      v2 = (char *)v2 + 12;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 4);
  }
  if ( v2 )
    operator delete(v2);
  return v1;
}


void __fastcall GameRulesChangedPacket::~GameRulesChangedPacket(GameRulesChangedPacket *this)
{
  GameRulesChangedPacket::~GameRulesChangedPacket(this);
}


void __fastcall GameRulesChangedPacket::~GameRulesChangedPacket(GameRulesChangedPacket *this)
{
  GameRulesChangedPacket *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11

  v1 = this;
  *(_DWORD *)this = &off_26E99CC;
  v3 = (void *)(*((_QWORD *)this + 2) >> 32);
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 != v3 )
  {
    do
    {
      v6 = (int *)(*(_DWORD *)v2 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
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
          j_j_j_j__ZdlPv_9(v6);
      }
      v2 = (char *)v2 + 12;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 4);
  }
  if ( v2 )
    operator delete(v2);
  operator delete((void *)v1);
}


int __fastcall GameRulesChangedPacket::read(GameRulesChangedPacket *this, BinaryStream *a2)
{
  ReadOnlyBinaryStream::readType<GameRulesChangedPacketData>((int)a2, (int)this + 16);
  return 0;
}
