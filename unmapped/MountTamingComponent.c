

void __fastcall MountTamingComponent::addAdditionalSaveData(MountTamingComponent *this, CompoundTag *a2)
{
  MountTamingComponent::addAdditionalSaveData(this, a2);
}


int __fastcall MountTamingComponent::MountTamingComponent(int result, int a2)
{
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = -1;
  *(_DWORD *)(result + 8) = 60;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 5;
  return result;
}


signed int __fastcall MountTamingComponent::getInteraction(MountTamingComponent *this, Player *a2, EntityInteraction *a3)
{
  MountTamingComponent *v3; // r5@1
  EntityInteraction *v4; // r9@1
  int v5; // r0@1
  Player *v6; // r6@1
  BlockSource *v7; // r0@2
  Level *v8; // r0@2
  ItemInstance *v9; // r0@3
  ItemInstance *v10; // r7@3
  int v11; // r0@3
  int v13; // r8@8
  _DWORD *v14; // r0@8
  int *v16; // r1@11 OVERLAPPED
  int *v17; // r2@11 OVERLAPPED
  int v18; // t1@12
  signed int result; // r0@13
  _DWORD *v23; // r0@18
  _DWORD *v24; // r0@22
  __int64 v25; // r1@22
  _DWORD *v26; // [sp+0h] [bp-48h]@22
  __int64 v27; // [sp+8h] [bp-40h]@22
  _DWORD *v28; // [sp+10h] [bp-38h]@18
  void (*v29)(void); // [sp+18h] [bp-30h]@18
  int (__fastcall *v30)(Player ***); // [sp+1Ch] [bp-2Ch]@18

  v3 = this;
  v4 = a3;
  v5 = *(_DWORD *)this;
  v6 = a2;
  if ( *(_QWORD *)(v5 + 476) >> 32 != (unsigned int)*(_QWORD *)(v5 + 476) )
    return 0;
  v7 = (BlockSource *)j_Entity::getRegion((Entity *)v5);
  v8 = (Level *)j_BlockSource::getLevel(v7);
  if ( j_Level::isClientSide(v8) )
  v9 = (ItemInstance *)j_Player::getSelectedItem(v6);
  v10 = v9;
  v11 = *((_BYTE *)v9 + 15);
  _ZF = v11 == 0;
  if ( v11 )
    _ZF = *(_DWORD *)v10 == 0;
  if ( _ZF || j_ItemInstance::isNull(v10) || !*((_BYTE *)v10 + 14) )
  v13 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 48) + 344);
  v14 = (_DWORD *)(*(_QWORD *)(v13 + 16) >> 32);
  _R4 = (_DWORD *)*(_QWORD *)(v13 + 16);
  if ( _R4 != v14 )
  {
    while ( *_R4 != *(_DWORD *)v10 )
    {
      _R4 += 5;
      if ( v14 == _R4 )
        goto LABEL_11;
    }
    if ( j_EntityInteraction::shouldCapture(v4) == 1 )
      __asm { VLDR            S16, [R4,#4] }
      v23 = j_operator new(0xCu);
      *v23 = v6;
      v23[1] = v3;
      __asm { VCVTR.S32.F32   S0, S16 }
      v28 = v23;
      __asm { VSTR            S0, [R0,#8] }
      v29 = (void (*)(void))sub_1A717C4;
      v30 = sub_1A71736;
      j_EntityInteraction::capture((int)v4, (int)&v28);
      if ( v29 )
        v29();
    goto LABEL_24;
  }
LABEL_11:
  *(_QWORD *)&v16 = *(_QWORD *)(v13 + 28);
  if ( v16 == v17 )
  while ( 1 )
    v18 = *v16;
    ++v16;
    if ( v18 == *(_DWORD *)v10 )
      break;
    result = 0;
    if ( v17 == v16 )
      return result;
  if ( j_EntityInteraction::shouldCapture(v4) == 1 )
    v24 = j_operator new(4u);
    LODWORD(v25) = sub_1A71810;
    *v24 = v3;
    HIDWORD(v25) = sub_1A71802;
    v26 = v24;
    v27 = v25;
    j_EntityInteraction::capture((int)v4, (int)&v26);
    if ( (_DWORD)v27 )
      ((void (*)(void))v27)();
LABEL_24:
  j_EntityInteraction::setInteractText();
  return 1;
}


void __fastcall MountTamingComponent::_becomeTame(MountTamingComponent *this, int a2)
{
  MountTamingComponent::_becomeTame(this, a2);
}


void __fastcall MountTamingComponent::tick(MountTamingComponent *this)
{
  MountTamingComponent::tick(this);
}


void __fastcall MountTamingComponent::_sendTameEvents(MountTamingComponent *this, Player *a2)
{
  MountTamingComponent::_sendTameEvents(this, a2);
}


void __fastcall MountTamingComponent::_becomeTame(MountTamingComponent *this, int a2)
{
  Entity **v2; // r5@1
  int v3; // r4@1
  int v4; // r0@2
  double v5; // r0@3
  unsigned int v6; // r0@3
  int v7; // r6@5
  int *v8; // r4@5
  int v9; // r7@6
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  void *v12; // r6@16
  int v13; // r1@16
  void *v14; // r0@16
  void *ptr; // [sp+4h] [bp-44h]@6
  unsigned int v16; // [sp+8h] [bp-40h]@3
  int v17; // [sp+Ch] [bp-3Ch]@3
  int v18; // [sp+10h] [bp-38h]@3
  signed int v19; // [sp+14h] [bp-34h]@3
  int v20; // [sp+18h] [bp-30h]@3
  int v21; // [sp+1Ch] [bp-2Ch]@19

  v2 = (Entity **)this;
  v3 = a2;
  j_Entity::setPersistent(*(Entity **)this);
  if ( v3 == 1 )
  {
    v4 = j_Entity::getLevel(*v2);
    j_Level::broadcastEntityEvent(v4, (int)*v2, 7, 0);
    j_Entity::spawnTamingParticles(*v2, 1);
  }
  j_Entity::setStatusFlag((int)*v2, 27, 1);
  (*(void (**)(void))(*(_DWORD *)*v2 + 356))();
  v17 = 0;
  v18 = 0;
  v19 = 1065353216;
  v20 = 0;
  LODWORD(v5) = &v19;
  v6 = sub_21E6254(v5);
  v16 = v6;
  if ( v6 == 1 )
    v21 = 0;
    v8 = &v21;
  else
    if ( v6 >= 0x40000000 )
      sub_21E57F4();
    v7 = 4 * v6;
    v8 = (int *)j_operator new(4 * v6);
    j___aeabi_memclr4_0((int)v8, v7);
  ptr = v8;
  j_Entity::initParams(*v2, (VariantParameterList *)&ptr);
  j_EntityDefinitionDescriptor::executeTrigger(
    *((EntityDefinitionDescriptor **)*v2 + 12),
    *v2,
    (const DefinitionTrigger *)(*(_DWORD *)(*((_DWORD *)*v2 + 12) + 344) + 48),
    (const VariantParameterList *)&ptr);
  v9 = v17;
  while ( v9 )
    v12 = (void *)v9;
    v13 = *(_DWORD *)(v9 + 8);
    v9 = *(_DWORD *)v9;
    v14 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v13 - 4);
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
        j_j_j_j__ZdlPv_9(v14);
    }
    j_operator delete(v12);
  j___aeabi_memclr4_0((int)ptr, 4 * v16);
  if ( ptr )
    if ( &v21 != ptr )
      j_operator delete(ptr);
}


void __fastcall MountTamingComponent::readAdditionalSaveData(MountTamingComponent *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  MountTamingComponent *v3; // r4@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v7, "Temper");
  *((_DWORD *)v3 + 1) = j_CompoundTag::getInt((int)v2, (const void **)&v7);
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


void __fastcall MountTamingComponent::readAdditionalSaveData(MountTamingComponent *this, const CompoundTag *a2)
{
  MountTamingComponent::readAdditionalSaveData(this, a2);
}


int __fastcall MountTamingComponent::initFromDefinition(MountTamingComponent *this)
{
  MountTamingComponent *v1; // r4@1
  __int64 v2; // r0@1
  int v3; // r6@1
  int v4; // r7@2
  unsigned int v5; // r1@4
  int result; // r0@8

  v1 = this;
  v2 = *(_QWORD *)this;
  v3 = *(_DWORD *)(*(_DWORD *)(v2 + 48) + 344);
  if ( HIDWORD(v2) == -1 )
  {
    HIDWORD(v2) = *(_QWORD *)(v3 + 4) >> 32;
    v4 = *(_QWORD *)(v3 + 4);
    if ( SHIDWORD(v2) > v4 )
    {
      if ( HIDWORD(v2) == v4 )
        v5 = 0;
      else
        v5 = j_Random::_genRandInt32((Random *)(v2 + 552)) % (HIDWORD(v2) - v4);
      v4 += v5;
    }
    *((_DWORD *)v1 + 1) = v4;
  }
  result = *(_DWORD *)(v3 + 12);
  *((_DWORD *)v1 + 4) = result;
  return result;
}


void __fastcall MountTamingComponent::addAdditionalSaveData(MountTamingComponent *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  MountTamingComponent *v3; // r5@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v7, "Temper");
  j_CompoundTag::putInt((int)v2, (const void **)&v7, *((_DWORD *)v3 + 1));
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


void __fastcall MountTamingComponent::tameWithOwner(MountTamingComponent *this, Player *a2, int a3)
{
  MountTamingComponent::tameWithOwner(this, a2, a3);
}


void __fastcall MountTamingComponent::tick(MountTamingComponent *this)
{
  MountTamingComponent *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@5
  int v4; // r1@7
  int v5; // r6@7
  unsigned int v6; // r1@9
  int v7; // r0@12
  Entity *v8; // r5@13
  Entity *v9; // r6@13
  void (__fastcall *v10)(Entity *); // r7@13
  __int64 v11; // r2@13
  int v12; // r0@14

  v1 = this;
  v2 = *(_DWORD *)this;
  if ( *(_QWORD *)(v2 + 476) >> 32 == (unsigned int)*(_QWORD *)(v2 + 476) )
  {
    *((_DWORD *)v1 + 3) = 0;
  }
  else if ( !j_Entity::isTame((Entity *)v2) && j_Entity::hasType(**(_DWORD **)(*(_DWORD *)v1 + 476), 319) == 1 )
    v3 = *((_DWORD *)v1 + 3) + 1;
    *((_DWORD *)v1 + 3) = v3;
    if ( v3 >= *((_DWORD *)v1 + 2) )
    {
      v4 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v1 + 48) + 344) + 4) >> 32;
      v5 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v1 + 48) + 344) + 4);
      if ( v4 > v5 )
      {
        if ( v4 == v5 )
          v6 = 0;
        else
          v6 = j_Random::_genRandInt32((Random *)(*(_DWORD *)v1 + 552)) % (v4 - v5);
        v5 += v6;
      }
      v7 = *((_DWORD *)v1 + 1);
      if ( v5 >= v7 )
        *((_DWORD *)v1 + 1) = v7 + *((_DWORD *)v1 + 4);
        j_Entity::removeAllRiders(*(Entity **)v1, 0, 0);
        (*(void (**)(void))(**(_DWORD **)v1 + 360))();
        v12 = j_Entity::getLevel(*(Entity **)v1);
        j_j_j__ZN5Level20broadcastEntityEventEP6Entity11EntityEventi_1(v12, *(_DWORD *)v1, 6, 0);
      else
        v8 = **(Entity ***)(*(_DWORD *)v1 + 476);
        j_MountTamingComponent::_sendTameEvents(v1, **(Player ***)(*(_DWORD *)v1 + 476));
        v9 = *(Entity **)v1;
        v10 = *(void (__fastcall **)(Entity *))(**(_DWORD **)v1 + 348);
        v11 = *(_QWORD *)j_Entity::getUniqueID(v8);
        v10(v9);
        j_j_j__ZN20MountTamingComponent11_becomeTameEb(v1, 1);
    }
}


void __fastcall MountTamingComponent::tameWithOwner(MountTamingComponent *this, Player *a2, int a3)
{
  int v3; // r8@1
  Entity *v4; // r5@1
  MountTamingComponent *v5; // r6@1
  int v6; // r7@1
  void (__fastcall *v7)(int); // r4@1
  __int64 v8; // r2@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  j_MountTamingComponent::_sendTameEvents(this, a2);
  v6 = *(_DWORD *)v5;
  v7 = *(void (__fastcall **)(int))(**(_DWORD **)v5 + 348);
  v8 = *(_QWORD *)j_Entity::getUniqueID(v4);
  v7(v6);
  j_j_j__ZN20MountTamingComponent11_becomeTameEb(v5, v3);
}


void __fastcall MountTamingComponent::_sendTameEvents(MountTamingComponent *this, Player *a2)
{
  Player *v2; // r4@1
  void *v3; // r0@1
  void *v4; // r0@2
  void *v5; // r0@3
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  unsigned int *v8; // r2@9
  signed int v9; // r1@11
  unsigned int *v10; // r2@13
  signed int v11; // r1@15
  void **v12; // [sp+0h] [bp-60h]@1
  int v13; // [sp+38h] [bp-28h]@3
  int v14; // [sp+3Ch] [bp-24h]@2
  int v15; // [sp+40h] [bp-20h]@1

  v2 = a2;
  j_EventPacket::EventPacket((int)&v12, a2, *(Entity **)this, 2);
  (*(void (__fastcall **)(Player *, void ***))(*(_DWORD *)v2 + 1448))(v2, &v12);
  v12 = &off_26E9D30;
  v3 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v15 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v14 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  v5 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v13 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
}
