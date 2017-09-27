

void __fastcall NetherReactorBlockEntity::~NetherReactorBlockEntity(NetherReactorBlockEntity *this)
{
  NetherReactorBlockEntity::~NetherReactorBlockEntity(this);
}


void __fastcall NetherReactorBlockEntity::load(NetherReactorBlockEntity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r6@1
  NetherReactorBlockEntity *v3; // r4@1
  void *v4; // r0@1
  void *v5; // r0@3
  void *v6; // r0@4
  unsigned int *v7; // r2@6
  signed int v8; // r1@8
  unsigned int *v9; // r2@10
  signed int v10; // r1@12
  unsigned int *v11; // r2@14
  signed int v12; // r1@16
  int v13; // [sp+8h] [bp-28h]@4
  int v14; // [sp+10h] [bp-20h]@3
  int v15; // [sp+18h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  BlockEntity::load(this, a2);
  sub_21E94B4((void **)&v15, "IsInitialized");
  *((_BYTE *)v3 + 102) = CompoundTag::getBoolean((int)v2, (const void **)&v15);
  v4 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v15 - 4);
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
  if ( *((_BYTE *)v3 + 102) )
    sub_21E94B4((void **)&v14, "Progress");
    *((_WORD *)v3 + 52) = CompoundTag::getShort((int)v2, (const void **)&v14);
    v5 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v14 - 4);
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
    sub_21E94B4((void **)&v13, "HasFinished");
    *((_BYTE *)v3 + 103) = CompoundTag::getBoolean((int)v2, (const void **)&v13);
    v6 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v13 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
}


int __fastcall NetherReactorBlockEntity::NetherReactorBlockEntity(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v8, "NetherReactor");
  BlockEntity::BlockEntity(v3, 3, v2);
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
  *(_DWORD *)v3 = &off_270A388;
  *(_BYTE *)(v3 + 102) = 0;
  *(_BYTE *)(v3 + 103) = 0;
  *(_WORD *)(v3 + 104) = 0;
  return v3;
}


void __fastcall NetherReactorBlockEntity::load(NetherReactorBlockEntity *this, const CompoundTag *a2)
{
  NetherReactorBlockEntity::load(this, a2);
}


signed int __fastcall NetherReactorBlockEntity::save(NetherReactorBlockEntity *this, CompoundTag *a2)
{
  CompoundTag *v2; // r6@1
  NetherReactorBlockEntity *v3; // r5@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  int v14; // [sp+8h] [bp-28h]@3
  int v15; // [sp+10h] [bp-20h]@2
  int v16; // [sp+18h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  BlockEntity::save(this, a2);
  sub_21E94B4((void **)&v16, "IsInitialized");
  CompoundTag::putBoolean((int)v2, (const void **)&v16, *((_BYTE *)v3 + 102));
  v4 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v16 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v15, "Progress");
  CompoundTag::putShort((int)v2, (const void **)&v15, *((_WORD *)v3 + 52));
  v5 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v15 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v14, "HasFinished");
  CompoundTag::putBoolean((int)v2, (const void **)&v14, *((_BYTE *)v3 + 103));
  v6 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v14 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  return 1;
}


void __fastcall NetherReactorBlockEntity::~NetherReactorBlockEntity(NetherReactorBlockEntity *this)
{
  BlockEntity *v1; // r0@1

  v1 = BlockEntity::~BlockEntity(this);
  j_j_j__ZdlPv_6((void *)v1);
}
