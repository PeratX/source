

signed int __fastcall RandomizableBlockEntityContainerBase::save(RandomizableBlockEntityContainerBase *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  RandomizableBlockEntityContainerBase *v3; // r5@1
  int *v4; // r6@1
  void *v5; // r0@2
  void *v6; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  int v12; // [sp+4h] [bp-2Ch]@3
  int v13; // [sp+Ch] [bp-24h]@2

  v2 = a2;
  v3 = this;
  v4 = (int *)((char *)this + 104);
  if ( sub_21E7D6C((const void **)this + 26, (const char *)&unk_257BC67) )
  {
    sub_21E94B4((void **)&v13, "LootTable");
    CompoundTag::putString((int)v2, (const void **)&v13, v4);
    v5 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v13 - 4);
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
        j_j_j_j__ZdlPv_9(v5);
    }
    sub_21E94B4((void **)&v12, "LootTableSeed");
    CompoundTag::putInt64(
      (int)v2,
      (const void **)&v12,
      *((_DWORD *)v3 + 27),
      (unsigned __int64)*((_DWORD *)v3 + 27) >> 32);
    v6 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v12 - 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
  }
  return BlockEntity::save(v3, v2);
}


int *__fastcall RandomizableBlockEntityContainerBase::setLootTable(int a1, int *a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  int *result; // r0@1

  v3 = a1;
  v4 = a3;
  result = EntityInteraction::setInteractText((int *)(a1 + 104), a2);
  *(_DWORD *)(v3 + 108) = v4;
  return result;
}


int __fastcall RandomizableBlockEntityContainerBase::RandomizableBlockEntityContainerBase(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1

  v4 = a1;
  BlockEntity::BlockEntity(a1, a2, a4);
  *(_DWORD *)v4 = &off_270A480;
  sub_21E94B4((void **)(v4 + 104), (const char *)&unk_257BC67);
  *(_DWORD *)(v4 + 108) = 0;
  return v4;
}


const void **__fastcall RandomizableBlockEntityContainerBase::unPackLootTable(RandomizableBlockEntityContainerBase *this, Level *a2, Container *a3)
{
  Level *v3; // r11@1
  RandomizableBlockEntityContainerBase *v4; // r8@1
  Container *v5; // r4@1
  const void **result; // r0@1
  unsigned int v7; // r0@3
  signed int v8; // r2@3
  int v9; // r1@3
  int v10; // r0@4
  int *v11; // r7@4
  int v12; // r5@4
  unsigned int v13; // r7@5
  signed int v14; // r1@6
  int *v15; // r0@6
  signed int v16; // r2@6
  int v17; // r3@7
  int v18; // r5@7
  unsigned int v19; // r7@9
  signed int v20; // r1@9
  int *v21; // r0@9
  signed int v22; // r2@9
  int v23; // r3@10
  int v24; // r5@10
  unsigned int v25; // [sp+8h] [bp-9F8h]@3
  unsigned int v26; // [sp+Ch] [bp-9F4h]@3
  int v27; // [sp+10h] [bp-9F0h]@6
  int v28; // [sp+9CCh] [bp-34h]@3
  char v29; // [sp+9D0h] [bp-30h]@3
  int v30; // [sp+9D4h] [bp-2Ch]@3
  int v31; // [sp+9D8h] [bp-28h]@5

  v3 = a2;
  v4 = this;
  v5 = a3;
  result = (const void **)Level::isClientSide(a2);
  if ( !result )
  {
    result = (const void **)sub_21E7D6C((const void **)v4 + 26, (const char *)&unk_257BC67);
    if ( result )
    {
      v7 = sub_21E67AC((int)&Random::mRandomDevice);
      v25 = v7;
      v8 = 1;
      v28 = 625;
      v9 = 0;
      v29 = 0;
      v30 = 0;
      v26 = v7;
      do
      {
        v10 = v7 ^ (v7 >> 30);
        v11 = (int *)(&v25 + v9);
        v12 = v9++ + 1812433253 * v10;
        v7 = v8++ + 1812433253 * v10;
        v11[2] = v12 + 1;
      }
      while ( v9 != 397 );
      v28 = 624;
      v31 = 398;
      v13 = *((_DWORD *)v4 + 27);
      if ( v13 )
        Random::_checkThreadId((Random *)&v25);
        v25 = v13;
        v28 = 625;
        v29 = 0;
        v14 = 1;
        v30 = 0;
        v15 = &v27;
        v16 = -397;
        v26 = v13;
        do
        {
          v17 = v13 ^ (v13 >> 30);
          v18 = v16++ + 1812433253 * v17;
          v13 = v14++ + 1812433253 * v17;
          *v15 = v18 + 398;
          ++v15;
        }
        while ( v16 );
      else
        v19 = Level::createRandomSeed((Level *)0x18E);
        v25 = v19;
        v20 = 1;
        v21 = &v27;
        v22 = -397;
        v26 = v19;
          v23 = v19 ^ (v19 >> 30);
          v24 = v22++ + 1812433253 * v23;
          v19 = v20++ + 1812433253 * v23;
          *v21 = v24 + 398;
          ++v21;
        while ( v22 );
      Util::LootTableUtils::fillContainer(v3, v5, (Random *)&v25, (unsigned int *)v4 + 26);
      result = sub_21E8190((void **)v4 + 26, (char *)&unk_257BC67, 0);
    }
  }
  return result;
}


void __fastcall RandomizableBlockEntityContainerBase::load(RandomizableBlockEntityContainerBase *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r4@1
  RandomizableBlockEntityContainerBase *v3; // r7@1
  signed int v4; // r6@1
  void *v5; // r0@1
  int *v6; // r0@3
  void *v7; // r0@3
  void *v8; // r0@4
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  unsigned int *v11; // r2@14
  signed int v12; // r1@16
  unsigned int *v13; // r2@18
  signed int v14; // r1@20
  int v15; // [sp+4h] [bp-2Ch]@4
  int v16; // [sp+Ch] [bp-24h]@3
  int v17; // [sp+14h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v17, "LootTable");
  v4 = CompoundTag::contains((int)v2, (const void **)&v17);
  v5 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
  {
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
  }
  if ( v4 == 1 )
    sub_21E94B4((void **)&v16, "LootTable");
    v6 = (int *)CompoundTag::getString((int)v2, (const void **)&v16);
    EntityInteraction::setInteractText((int *)v3 + 26, v6);
    v7 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v16 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    sub_21E94B4((void **)&v15, "LootTableSeed");
    *((_DWORD *)v3 + 27) = CompoundTag::getInt((int)v2, (const void **)&v15);
    v8 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v15 - 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
  BlockEntity::load(v3, v2);
}


BlockEntity *__fastcall RandomizableBlockEntityContainerBase::~RandomizableBlockEntityContainerBase(RandomizableBlockEntityContainerBase *this)
{
  BlockEntity *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_270A480;
  v2 = *((_DWORD *)this + 26);
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
  BlockEntity::~BlockEntity(v1);
  return v1;
}


void __fastcall RandomizableBlockEntityContainerBase::~RandomizableBlockEntityContainerBase(RandomizableBlockEntityContainerBase *this)
{
  RandomizableBlockEntityContainerBase::~RandomizableBlockEntityContainerBase(this);
}


void __fastcall RandomizableBlockEntityContainerBase::load(RandomizableBlockEntityContainerBase *this, const CompoundTag *a2)
{
  RandomizableBlockEntityContainerBase::load(this, a2);
}


void __fastcall RandomizableBlockEntityContainerBase::~RandomizableBlockEntityContainerBase(RandomizableBlockEntityContainerBase *this)
{
  BlockEntity *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_270A480;
  v2 = *((_DWORD *)this + 26);
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
  BlockEntity::~BlockEntity(v1);
  operator delete((void *)v1);
}
