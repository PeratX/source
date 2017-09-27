

void __fastcall ThrownPotion::readAdditionalSaveData(ThrownPotion *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  ThrownPotion *v3; // r4@1
  unsigned __int16 v4; // r5@1
  int v5; // r0@1
  unsigned int v6; // r1@1
  unsigned int v7; // r1@3
  unsigned int v8; // r0@3
  void *v9; // r0@8
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  int v12; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  Throwable::readAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v12, "PotionId");
  v4 = CompoundTag::getShort((int)v2, (const void **)&v12);
  v5 = SynchedEntityData::_get((ThrownPotion *)((char *)v3 + 176), 37);
  v6 = *(_DWORD *)(v5 + 4);
  if ( (unsigned __int8)v6 == 1 && *(_WORD *)(v5 + 10) != v4 )
  {
    *(_WORD *)(v5 + 10) = v4;
    *(_BYTE *)(v5 + 8) = 1;
    v7 = v6 >> 16;
    v8 = *((_WORD *)v3 + 94);
    if ( v8 >= v7 )
      LOWORD(v8) = v7;
    *((_WORD *)v3 + 94) = v8;
    if ( *((_WORD *)v3 + 95) > v7 )
      LOWORD(v7) = *((_WORD *)v3 + 95);
    *((_WORD *)v3 + 95) = v7;
  }
  v9 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
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
      j_j_j_j__ZdlPv_9(v9);
}


unsigned int __fastcall ThrownPotion::setAuxValue(ThrownPotion *this, int a2)
{
  ThrownPotion *v2; // r4@1
  unsigned __int16 v3; // r5@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = this;
  v3 = a2;
  result = SynchedEntityData::_get((ThrownPotion *)((char *)this + 176), 37);
  v5 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v5 == 1 && *(_WORD *)(result + 10) != v3 )
  {
    *(_WORD *)(result + 10) = v3;
    *(_BYTE *)(result + 8) = 1;
    v6 = v5 >> 16;
    v7 = *((_WORD *)v2 + 94);
    if ( v7 >= v6 )
      LOWORD(v7) = v6;
    *((_WORD *)v2 + 94) = v7;
    result = *((_WORD *)v2 + 95);
    if ( result > v6 )
      LOWORD(v6) = *((_WORD *)v2 + 95);
    *((_WORD *)v2 + 95) = v6;
  }
  return result;
}


void __fastcall ThrownPotion::readAdditionalSaveData(ThrownPotion *this, const CompoundTag *a2)
{
  ThrownPotion::readAdditionalSaveData(this, a2);
}


int __fastcall ThrownPotion::init(ThrownPotion *this, __int16 a2)
{
  ThrownPotion *v2; // r4@1
  SynchedEntityData *v3; // r6@1
  __int16 v4; // r5@1
  int v5; // r6@2
  _BYTE *v6; // r0@2
  _BYTE *v7; // r1@2
  int v8; // r0@2
  unsigned int v9; // r0@4
  signed __int16 v10; // r1@4
  int result; // r0@9
  ProjectileComponent *v12; // r0@10

  v2 = this;
  v3 = (ThrownPotion *)((char *)this + 176);
  v4 = a2;
  *((_DWORD *)this + 62) = 34;
  if ( !SynchedEntityData::_find((ThrownPotion *)((char *)this + 176), 37) )
  {
    SynchedEntityData::_resizeToContain(v3, 37);
    v5 = *(_DWORD *)v3;
    v6 = operator new(0xCu);
    v7 = v6;
    v6[4] = 1;
    *((_WORD *)v6 + 3) = 37;
    v6[8] = 1;
    *(_DWORD *)v6 = &off_26F0DE0;
    *((_WORD *)v6 + 5) = v4;
    v8 = *(_DWORD *)(v5 + 148);
    *(_DWORD *)(v5 + 148) = v7;
    if ( v8 )
      (*(void (**)(void))(*(_DWORD *)v8 + 4))();
    v9 = *((_WORD *)v2 + 94);
    v10 = 37;
    if ( v9 >= 0x25 )
      LOWORD(v9) = 37;
    *((_WORD *)v2 + 94) = v9;
    if ( (unsigned int)*((_WORD *)v2 + 95) > 0x25 )
      v10 = *((_WORD *)v2 + 95);
    *((_WORD *)v2 + 95) = v10;
  }
  result = Entity::getProjectileComponent(v2);
  if ( result )
    v12 = (ProjectileComponent *)Entity::getProjectileComponent(v2);
    result = j_j_j__ZN19ProjectileComponent14setSplashRangeEf(v12, 4.0);
  return result;
}


signed int __fastcall ThrownPotion::queryEntityRenderer(ThrownPotion *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = Entity::getStatusFlag((int)this, 44);
  v2 = 34;
  if ( v1 )
    v2 = 35;
  return v2;
}


void __fastcall ThrownPotion::addAdditionalSaveData(ThrownPotion *this, CompoundTag *a2)
{
  ThrownPotion::addAdditionalSaveData(this, a2);
}


signed int __fastcall ThrownPotion::getEntityTypeId(ThrownPotion *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = Entity::getStatusFlag((int)this, 44);
  v2 = 4194390;
  if ( v1 )
    v2 = 4194405;
  return v2;
}


void __fastcall ThrownPotion::~ThrownPotion(ThrownPotion *this)
{
  ThrownPotion::~ThrownPotion(this);
}


Throwable *__fastcall ThrownPotion::ThrownPotion(Throwable *a1, EntityDefinitionGroup *a2, const EntityDefinitionIdentifier *a3)
{
  Throwable *v3; // r4@1
  int v4; // r6@2
  _BYTE *v5; // r0@2
  signed __int16 v6; // r5@2
  int v7; // r1@2
  unsigned int v8; // r0@4

  v3 = a1;
  Throwable::Throwable(a1, a2, a3);
  *(_DWORD *)v3 = &off_26FFDDC;
  if ( !SynchedEntityData::_find((Throwable *)((char *)v3 + 176), 37) )
  {
    SynchedEntityData::_resizeToContain((Throwable *)((char *)v3 + 176), 37);
    v4 = *((_DWORD *)v3 + 44);
    v5 = operator new(0xCu);
    v6 = 37;
    v5[4] = 1;
    *((_WORD *)v5 + 3) = 37;
    v5[8] = 1;
    *(_DWORD *)v5 = &off_26F0DE0;
    *((_WORD *)v5 + 5) = 0;
    v7 = *(_DWORD *)(v4 + 148);
    *(_DWORD *)(v4 + 148) = v5;
    if ( v7 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
    v8 = *((_WORD *)v3 + 94);
    if ( v8 >= 0x25 )
      LOWORD(v8) = 37;
    *((_WORD *)v3 + 94) = v8;
    if ( (unsigned int)*((_WORD *)v3 + 95) > 0x25 )
      v6 = *((_WORD *)v3 + 95);
    *((_WORD *)v3 + 95) = v6;
  }
  *((_DWORD *)v3 + 62) = 1;
  return v3;
}


void __fastcall ThrownPotion::~ThrownPotion(ThrownPotion *this)
{
  Entity *v1; // r0@1

  v1 = Entity::~Entity(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall ThrownPotion::addAdditionalSaveData(ThrownPotion *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  ThrownPotion *v3; // r5@1
  __int16 v4; // r0@1
  void *v5; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  Throwable::addAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v8, "PotionId");
  v4 = SynchedEntityData::getShort((ThrownPotion *)((char *)v3 + 176), 37);
  CompoundTag::putShort((int)v2, (const void **)&v8, v4);
  v5 = (void *)(v8 - 12);
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
      j_j_j_j__ZdlPv_9(v5);
  }
}


int __fastcall ThrownPotion::initializeComponents(int a1, int a2, unsigned __int64 *a3)
{
  Entity *v3; // r4@1
  int result; // r0@1
  ProjectileComponent *v5; // r0@2

  v3 = (Entity *)a1;
  Throwable::initializeComponents(a1, a2, a3);
  result = Entity::getProjectileComponent(v3);
  if ( result )
  {
    v5 = (ProjectileComponent *)Entity::getProjectileComponent(v3);
    result = j_j_j__ZN19ProjectileComponent14setSplashRangeEf(v5, 4.0);
  }
  return result;
}
