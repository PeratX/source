

void __fastcall SpawnEntityComponent::readAdditionalSaveData(SpawnEntityComponent *this, const CompoundTag *a2)
{
  SpawnEntityComponent::readAdditionalSaveData(this, a2);
}


void __fastcall SpawnEntityComponent::spawnEntity(SpawnEntityComponent *this)
{
  SpawnEntityComponent *v1; // r4@1
  int v2; // r1@2
  Entity *v3; // r6@3
  const Vec3 *v4; // r7@3
  void *v5; // r0@3
  void *v6; // r0@4
  void *v7; // r0@5
  Entity *v8; // r6@6
  int v9; // r7@7
  void (__fastcall *v10)(int, int, int *); // r5@7
  int v11; // r1@7
  int v12; // r0@7
  RideableComponent *v13; // r0@10
  unsigned int *v14; // r2@19
  signed int v15; // r1@21
  unsigned int *v16; // r2@23
  signed int v17; // r1@25
  unsigned int *v18; // r2@27
  signed int v19; // r1@29
  int v20; // [sp+8h] [bp-38h]@7
  char v21; // [sp+Ch] [bp-34h]@3
  int v22; // [sp+14h] [bp-2Ch]@3
  int v23; // [sp+18h] [bp-28h]@4
  int v24; // [sp+1Ch] [bp-24h]@3
  Entity *v25; // [sp+20h] [bp-20h]@3

  v1 = this;
  if ( *((_BYTE *)this + 4) )
  {
    v2 = *(_WORD *)(*((_DWORD *)this + 6) + 18);
    (*(void (**)(void))(**(_DWORD **)this + 436))();
  }
  else
    j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((int)&v22, (int *)this + 7);
    v3 = *(Entity **)v1;
    v4 = (const Vec3 *)(*(int (__fastcall **)(_DWORD))(**(_DWORD **)v1 + 52))(*(_DWORD *)v1);
    j_Entity::getRotation((Entity *)&v21, *(_DWORD *)v1);
    j_EntityFactory::createEntity(
      (EntityFactory *)&v25,
      (const void **)v1 + 8,
      (const EntityDefinitionIdentifier *)&v22,
      v3,
      v4,
      &v21);
    v5 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
    {
      v14 = (unsigned int *)(v24 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      }
      else
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    }
    v6 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v23 - 4);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    v7 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v22 - 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    v8 = v25;
    if ( v25 )
      v9 = j_Entity::getLevel(*(Entity **)v1);
      v10 = *(void (__fastcall **)(int, int, int *))(*(_DWORD *)v9 + 44);
      v11 = j_Entity::getRegion(*(Entity **)v1);
      v12 = (int)v25;
      v25 = 0;
      v20 = v12;
      v10(v9, v11, &v20);
      if ( v20 )
        (*(void (**)(void))(*(_DWORD *)v20 + 32))();
      v20 = 0;
      if ( !sub_21E7D6C((const void **)v1 + 8, "born") )
        v13 = (RideableComponent *)j_Entity::getRideableComponent(v8);
        if ( v13 )
        {
          if ( j_RideableComponent::canAddRider(v13, *(Entity **)v1) == 1
            && (*(int (**)(void))(**(_DWORD **)v1 + 568))() == 1 )
          {
            if ( j_Entity::isRiding(*(Entity **)v1) == 1 )
              (*(void (**)(void))(**(_DWORD **)v1 + 596))();
            (*(void (**)(void))(**(_DWORD **)v1 + 272))();
          }
        }
      if ( v25 )
        (*(void (**)(void))(*(_DWORD *)v25 + 32))();
}


void __fastcall SpawnEntityComponent::addAdditionalSaveData(SpawnEntityComponent *this, CompoundTag *a2)
{
  SpawnEntityComponent::addAdditionalSaveData(this, a2);
}


void __fastcall SpawnEntityComponent::tick(SpawnEntityComponent *this)
{
  SpawnEntityComponent *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@2
  Level *v4; // r0@3
  char *v5; // r0@3
  int v6; // r1@3 OVERLAPPED
  int v7; // r2@3 OVERLAPPED
  unsigned int v8; // r1@4
  Level *v9; // r0@7
  int v10; // r5@9
  int v11; // r6@9
  void (__fastcall *v12)(int, int, char *, signed int); // r7@9
  char v13; // [sp+8h] [bp-28h]@9

  v1 = this;
  v2 = *(_DWORD *)this;
  if ( *(_QWORD *)(v2 + 476) >> 32 == (unsigned int)*(_QWORD *)(v2 + 476) )
  {
    v3 = *((_DWORD *)v1 + 4);
    if ( !v3 )
    {
      v4 = (Level *)j_Entity::getLevel((Entity *)v2);
      v5 = j_Level::getRandom(v4);
      *(_QWORD *)&v6 = *((_QWORD *)v1 + 1);
      if ( v7 == v6 )
      {
        v8 = 0;
      }
      else
        v8 = j_Random::_genRandInt32((Random *)v5) % (v7 - v6);
        v7 = *((_DWORD *)v1 + 2);
      v3 = v8 + v7;
      *((_DWORD *)v1 + 4) = v3;
      v2 = *(_DWORD *)v1;
    }
    *((_DWORD *)v1 + 4) = v3 - 1;
    v9 = (Level *)j_Entity::getLevel((Entity *)v2);
    if ( !j_Level::isClientSide(v9) && *((_DWORD *)v1 + 4) <= 0 )
      v10 = *(_DWORD *)v1;
      v11 = *((_BYTE *)v1 + 20);
      v12 = *(void (__fastcall **)(int, int, char *, signed int))(**(_DWORD **)v1 + 556);
      j_Entity::getAttachPos((AABB *)&v13, *(_DWORD *)v1, 1, 0);
      v12(v10, v11, &v13, -1);
      j_SpawnEntityComponent::spawnEntity(v1);
  }
}


void __fastcall SpawnEntityComponent::tick(SpawnEntityComponent *this)
{
  SpawnEntityComponent::tick(this);
}


void __fastcall SpawnEntityComponent::addAdditionalSaveData(SpawnEntityComponent *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  SpawnEntityComponent *v3; // r5@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v7, "SpawnTimer");
  j_CompoundTag::putInt((int)v2, (const void **)&v7, *((_DWORD *)v3 + 4));
  v4 = (void *)(v7 - 12);
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
      j_j_j_j__ZdlPv_9(v4);
  }
}


void __fastcall SpawnEntityComponent::spawnEntity(SpawnEntityComponent *this)
{
  SpawnEntityComponent::spawnEntity(this);
}


int __fastcall SpawnEntityComponent::SpawnEntityComponent(int result, int a2)
{
  *(_DWORD *)result = a2;
  *(_BYTE *)(result + 4) = 1;
  *(_DWORD *)(result + 8) = 6000;
  *(_DWORD *)(result + 12) = 12000;
  *(_DWORD *)(result + 16) = 12000;
  *(_DWORD *)(result + 24) = Item::mEgg;
  *(_DWORD *)(result + 28) = &unk_28898CC;
  *(_DWORD *)(result + 32) = &unk_28898CC;
  return result;
}


int *__fastcall SpawnEntityComponent::initFromDefinition(SpawnEntityComponent *this)
{
  SpawnEntityComponent *v1; // r4@1
  int v2; // r5@1

  v1 = this;
  v2 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 48) + 400);
  *((_DWORD *)this + 2) = 20 * *(_DWORD *)(v2 + 8);
  *((_DWORD *)this + 3) = 20 * *(_DWORD *)(v2 + 12);
  *((_DWORD *)this + 4) = 0;
  *((_BYTE *)this + 4) = *(_BYTE *)(v2 + 4);
  *((_DWORD *)this + 6) = *(_DWORD *)(v2 + 24);
  EntityInteraction::setInteractText((int *)this + 7, (int *)(v2 + 28));
  *((_BYTE *)v1 + 20) = j_soundEventFromString((unsigned int *)(v2 + 20));
  return EntityInteraction::setInteractText((int *)v1 + 8, (int *)(v2 + 32));
}


void __fastcall SpawnEntityComponent::readAdditionalSaveData(SpawnEntityComponent *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  SpawnEntityComponent *v3; // r4@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v7, "SpawnTimer");
  *((_DWORD *)v3 + 4) = j_CompoundTag::getInt((int)v2, (const void **)&v7);
  v4 = (void *)(v7 - 12);
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
      j_j_j_j__ZdlPv_9(v4);
  }
}
