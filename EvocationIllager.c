

signed int __fastcall EvocationIllager::useNewAi(EvocationIllager *this)
{
  return 1;
}


signed int __fastcall EvocationIllager::canExistInPeaceful(EvocationIllager *this)
{
  return 1;
}


int __fastcall EvocationIllager::getArmorValue(EvocationIllager *this)
{
  int result; // r0@1

  result = Mob::getArmorValue(this) + 2;
  if ( result > 20 )
    result = 20;
  return result;
}


void __fastcall EvocationIllager::~EvocationIllager(EvocationIllager *this)
{
  EvocationIllager::~EvocationIllager(this);
}


void __fastcall EvocationIllager::~EvocationIllager(EvocationIllager *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall EvocationIllager::getEntityTypeId(EvocationIllager *this)
{
  return 2920;
}


signed int __fastcall EvocationIllager::isAlliedTo(EvocationIllager *this, Mob *a2)
{
  Entity *v2; // r4@1
  EvocationIllager *v3; // r5@1
  signed int v4; // r4@4
  int (__fastcall *v5)(EvocationIllager *, signed int); // r6@8
  signed int v6; // r0@8
  void *v7; // r0@9
  unsigned int *v9; // r2@11
  signed int v10; // r1@13
  int v11; // [sp+4h] [bp-1Ch]@9

  v2 = a2;
  v3 = this;
  if ( a2 )
  {
    if ( this == a2 )
    {
      v4 = 1;
    }
    else if ( Mob::isAlliedTo(this, a2) )
    else if ( Entity::hasType((int)v2, 2921) == 1 )
      v5 = *(int (__fastcall **)(EvocationIllager *, signed int))(*(_DWORD *)v3 + 972);
      v6 = Entity::getOwner(v2);
      v4 = v5(v3, v6);
    else
      sub_21E94B4((void **)&v11, "illager");
      v4 = Entity::hasFamily((int)v2, (int)&v11);
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
  }
  else
    v4 = 0;
  return v4;
}


signed int __fastcall EvocationIllager::getExperienceReward(EvocationIllager *this)
{
  return 10;
}


HumanoidMonster *__fastcall EvocationIllager::EvocationIllager(HumanoidMonster *a1, EntityDefinitionGroup *a2, const EntityDefinitionIdentifier *a3)
{
  HumanoidMonster *v3; // r4@1

  v3 = a1;
  HumanoidMonster::HumanoidMonster(a1, a2, a3);
  *(_DWORD *)v3 = &off_26F6C44;
  *((_DWORD *)v3 + 62) = 74;
  *((_DWORD *)v3 + 43) |= 0x100Cu;
  Entity::setSize(v3, 0.6, 1.95);
  *((_BYTE *)v3 + 3280) = 1;
  return v3;
}
