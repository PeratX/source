

int __fastcall HumanoidMonster::setEquippedSlot(int a1, int a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r4@1
  void (__fastcall *v6)(int, int, int *); // r7@1
  int result; // r0@5
  int v8; // [sp+0h] [bp-60h]@1
  int v9; // [sp+8h] [bp-58h]@5
  void *v10; // [sp+24h] [bp-3Ch]@3
  void *ptr; // [sp+34h] [bp-2Ch]@1

  v4 = a1;
  v5 = a2;
  v6 = *(void (__fastcall **)(int, int, int *))(*(_DWORD *)a1 + 468);
  ItemInstance::ItemInstance((ItemInstance *)&v8, a3, 1, a4);
  v6(v4, v5, &v8);
  if ( ptr )
    operator delete(ptr);
  if ( v10 )
    operator delete(v10);
  result = v9;
  if ( v9 )
    result = (*(int (**)(void))(*(_DWORD *)v9 + 4))();
  return result;
}


int __fastcall HumanoidMonster::HumanoidMonster(int a1, int a2, int *a3)
{
  int result; // r0@1

  result = Monster::Monster(a1, a2, a3);
  *(_DWORD *)result = &off_26F7A68;
  *(_DWORD *)(result + 172) |= 0xCu;
  return result;
}


void __fastcall HumanoidMonster::readAdditionalSaveData(HumanoidMonster *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  HumanoidMonster *v3; // r6@1
  const CompoundTag *v4; // r5@1
  void *v5; // r0@1
  unsigned int *v6; // r2@6
  signed int v7; // r1@8
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  Monster::readAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v8, "ItemInHand");
  v4 = (const CompoundTag *)CompoundTag::getCompound((int)v2, (const void **)&v8);
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
  if ( v4 )
    if ( !CompoundTag::isEmpty(v4) )
      ItemInstance::load((HumanoidMonster *)((char *)v3 + 3512), v4);
}


signed int __fastcall HumanoidMonster::getExperienceReward(HumanoidMonster *this)
{
  Entity *v1; // r4@1
  signed int v2; // r5@2
  int v3; // r6@4
  Level *v4; // r0@5
  char *v5; // r0@5
  signed int result; // r0@6

  v1 = this;
  if ( *((_DWORD *)this + 861) < 1 )
  {
    result = 0;
  }
  else
    v2 = 5;
    if ( Entity::isBaby(this) )
      v2 = 12;
    v3 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v1 + 1008))(v1);
    if ( v3 >= 1 )
    {
      do
      {
        v4 = (Level *)Entity::getLevel(v1);
        v5 = Level::getRandom(v4);
        --v3;
        v2 += (Random::_genRandInt32((Random *)v5) & 1) + 1;
      }
      while ( v3 );
    }
    result = v2;
  return result;
}


void __fastcall HumanoidMonster::~HumanoidMonster(HumanoidMonster *this)
{
  HumanoidMonster::~HumanoidMonster(this);
}


void __fastcall HumanoidMonster::~HumanoidMonster(HumanoidMonster *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall HumanoidMonster::addAdditionalSaveData(HumanoidMonster *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  HumanoidMonster *v3; // r5@1
  ItemInstance *v4; // r5@1
  void *v5; // r0@4
  unsigned int *v6; // r2@6
  signed int v7; // r1@8
  int v8; // [sp+4h] [bp-24h]@2
  int v9; // [sp+Ch] [bp-1Ch]@2

  v2 = a2;
  v3 = this;
  Monster::addAdditionalSaveData(this, a2);
  v4 = (HumanoidMonster *)((char *)v3 + 3512);
  if ( !ItemInstance::isNull(v4) )
  {
    sub_21E94B4((void **)&v9, "ItemInHand");
    ItemInstance::save((ItemInstance *)&v8, v4);
    CompoundTag::putCompound((int)v2, (const void **)&v9, &v8);
    if ( v8 )
      (*(void (**)(void))(*(_DWORD *)v8 + 4))();
    v8 = 0;
    v5 = (void *)(v9 - 12);
    if ( (int *)(v9 - 12) != &dword_28898C0 )
    {
      v6 = (unsigned int *)(v9 - 4);
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
}


void __fastcall HumanoidMonster::readAdditionalSaveData(HumanoidMonster *this, const CompoundTag *a2)
{
  HumanoidMonster::readAdditionalSaveData(this, a2);
}


void __fastcall HumanoidMonster::addAdditionalSaveData(HumanoidMonster *this, CompoundTag *a2)
{
  HumanoidMonster::addAdditionalSaveData(this, a2);
}
