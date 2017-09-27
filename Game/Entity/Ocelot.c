

int __fastcall Ocelot::reloadHardcoded(int result, int a2)
{
  int v2; // r4@1
  BlockSource *v3; // r5@4
  signed int v4; // r10@4
  unsigned int *v5; // r2@5
  signed int v6; // r1@7
  unsigned int *v7; // r2@9
  signed int v8; // r1@11
  unsigned int *v9; // r2@13
  signed int v10; // r1@15
  unsigned int *v11; // r2@17
  signed int v12; // r1@19
  unsigned int *v13; // r2@21
  signed int v14; // r1@23
  unsigned int *v15; // r2@25
  signed int v16; // r1@27
  int v17; // r8@53
  void *v18; // r0@53
  void *v19; // r0@54
  void *v20; // r0@55
  void *v21; // r0@56
  void *v22; // r0@57
  void *v23; // r0@58
  void (__fastcall *v24)(int, BlockSource *, int *); // r3@60
  int v25; // [sp+8h] [bp-50h]@60
  int v26; // [sp+10h] [bp-48h]@17
  int v27; // [sp+14h] [bp-44h]@21
  int v28; // [sp+1Ch] [bp-3Ch]@25
  int v29; // [sp+20h] [bp-38h]@13
  int v30; // [sp+24h] [bp-34h]@9
  int v31; // [sp+28h] [bp-30h]@5
  int v32; // [sp+2Ch] [bp-2Ch]@53

  v2 = result;
  if ( a2 == 2 )
  {
    result = j_Entity::isBaby((Entity *)result);
    if ( !result )
    {
      result = j_Random::_genRandInt32((Random *)(v2 + 552)) % 7;
      if ( !result )
      {
        v3 = (BlockSource *)j_Entity::getRegion((Entity *)v2);
        v4 = 0;
        do
        {
          v17 = j_BlockSource::getLevel(v3);
          sub_21E94B4((void **)&v28, "minecraft");
          j_EntityTypeToString((void **)&v27, 0x5316u, 0);
          sub_21E94B4((void **)&v26, "minecraft:entity_born_wild");
          j_EntityDefinitionIdentifier::EntityDefinitionIdentifier(&v29, &v28, &v27, &v26);
          j_EntityFactory::createBornEntity(
            (EntityFactory *)&v32,
            (const EntityDefinitionIdentifier *)&v29,
            (Entity *)v2);
          v18 = (void *)(v31 - 12);
          if ( (int *)(v31 - 12) != &dword_28898C0 )
          {
            v5 = (unsigned int *)(v31 - 4);
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
              j_j_j_j__ZdlPv_9(v18);
          }
          v19 = (void *)(v30 - 12);
          if ( (int *)(v30 - 12) != &dword_28898C0 )
            v7 = (unsigned int *)(v30 - 4);
                v8 = __ldrex(v7);
              while ( __strex(v8 - 1, v7) );
              v8 = (*v7)--;
            if ( v8 <= 0 )
              j_j_j_j__ZdlPv_9(v19);
          v20 = (void *)(v29 - 12);
          if ( (int *)(v29 - 12) != &dword_28898C0 )
            v9 = (unsigned int *)(v29 - 4);
                v10 = __ldrex(v9);
              while ( __strex(v10 - 1, v9) );
              v10 = (*v9)--;
            if ( v10 <= 0 )
              j_j_j_j__ZdlPv_9(v20);
          v21 = (void *)(v26 - 12);
          if ( (int *)(v26 - 12) != &dword_28898C0 )
            v11 = (unsigned int *)(v26 - 4);
                v12 = __ldrex(v11);
              while ( __strex(v12 - 1, v11) );
              v12 = (*v11)--;
            if ( v12 <= 0 )
              j_j_j_j__ZdlPv_9(v21);
          v22 = (void *)(v27 - 12);
          if ( (int *)(v27 - 12) != &dword_28898C0 )
            v13 = (unsigned int *)(v27 - 4);
                v14 = __ldrex(v13);
              while ( __strex(v14 - 1, v13) );
              v14 = (*v13)--;
            if ( v14 <= 0 )
              j_j_j_j__ZdlPv_9(v22);
          v23 = (void *)(v28 - 12);
          if ( (int *)(v28 - 12) != &dword_28898C0 )
            v15 = (unsigned int *)(v28 - 4);
                v16 = __ldrex(v15);
              while ( __strex(v16 - 1, v15) );
              v16 = (*v15)--;
            if ( v16 <= 0 )
              j_j_j_j__ZdlPv_9(v23);
          result = v32;
          if ( v32 )
            v24 = *(void (__fastcall **)(int, BlockSource *, int *))(*(_DWORD *)v17 + 44);
            v32 = 0;
            v25 = result;
            v24(v17, v3, &v25);
            if ( v25 )
              (*(void (**)(void))(*(_DWORD *)v25 + 32))();
            result = v32;
            v25 = 0;
            if ( v32 )
              result = (*(int (**)(void))(*(_DWORD *)v32 + 32))();
          ++v4;
        }
        while ( v4 < 2 );
      }
    }
  }
  return result;
}


void __fastcall Ocelot::~Ocelot(Ocelot *this)
{
  Entity *v1; // r0@1

  v1 = j_Mob::~Mob(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall Ocelot::getAmbientSound(Ocelot *this)
{
  Ocelot *v1; // r4@1
  int result; // r0@3

  v1 = this;
  if ( j_Entity::isTame(this) != 1 )
    goto LABEL_9;
  if ( j_Entity::isInLove(v1) )
    return 129;
  if ( j_Random::_genRandInt32((Ocelot *)((char *)v1 + 552)) & 3 )
LABEL_9:
    result = j_Mob::getAmbientSound(v1);
  else
    result = 130;
  return result;
}


signed int __fastcall Ocelot::getEntityTypeId(Ocelot *this)
{
  return 21270;
}


signed int __fastcall Ocelot::_removeWhenFarAway(Ocelot *this)
{
  Ocelot *v1; // r4@1
  signed int result; // r0@2
  unsigned int v3; // r1@3

  v1 = this;
  if ( j_Mob::_removeWhenFarAway(this) == 1 )
  {
    v3 = j_Entity::isTame(v1);
    result = 0;
    if ( !v3 && *((_DWORD *)v1 + 104) > 2400 )
      result = 1;
  }
  else
  return result;
}


void __fastcall Ocelot::~Ocelot(Ocelot *this)
{
  Ocelot::~Ocelot(this);
}


int __fastcall Ocelot::doHurtTarget(Ocelot *this, Entity *a2)
{
  Entity *v2; // r5@1
  int v3; // r4@1
  char v5; // [sp+8h] [bp-38h]@2

  v2 = a2;
  v3 = 0;
  if ( a2 )
  {
    j_EntityDamageByEntitySource::EntityDamageByEntitySource((int)&v5, this, 2);
    v3 = j_Entity::hurt(v2, (const EntityDamageSource *)&v5, 3, 1, 0);
    j_EntityDamageByEntitySource::~EntityDamageByEntitySource((EntityDamageByEntitySource *)&v5);
  }
  return v3;
}


signed int __fastcall Ocelot::useNewAi(Ocelot *this)
{
  return 1;
}


int __fastcall Ocelot::_serverAiMobStep(Ocelot *this)
{
  Entity *v1; // r4@1
  int result; // r0@1
  MoveControl *v7; // r0@8
  MoveControl *v8; // r0@9
  int (__fastcall *v10)(Entity *, signed int); // r2@10
  Entity *v11; // r0@11
  signed int v12; // r1@11
  signed int v13; // r1@12
  void (__fastcall *v14)(Entity *, signed int); // r2@12
  Entity *v15; // r0@12

  v1 = this;
  result = j_Mob::getMoveControl(this);
  if ( result )
  {
    result = j_Entity::getTarget(v1);
    if ( !result )
    {
      if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)v1 + 312))(v1) )
      {
        __asm
        {
          VLDR            S16, =1.43
          VLDR            S18, =0.7
        }
      }
      else
        (*(void (__fastcall **)(Entity *))(*(_DWORD *)v1 + 792))(v1);
          VMOV.F32        S2, #0.5
          VLDR            S0, =1.23
          VLDR            S18, =0.6
          VLDR            S16, =1.33
        if ( !_ZF )
          __asm
          {
            VMOVNE.F32      S16, S0
            VMOVNE.F32      S18, S2
          }
      v7 = (MoveControl *)j_Mob::getMoveControl(v1);
      if ( j_MoveControl::hasWanted(v7) == 1 )
        v8 = (MoveControl *)j_Mob::getMoveControl(v1);
        _R0 = j_MoveControl::getSpeedModifier(v8);
          VMOV            S20, R0
          VCMPE.F32       S20, S18
          VMRS            APSR_nzcv, FPSCR
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          (*(void (__fastcall **)(Entity *, _DWORD))(*(_DWORD *)v1 + 788))(v1, 0);
            VCMPE.F32       S20, S16
            VMRS            APSR_nzcv, FPSCR
          v10 = *(int (__fastcall **)(Entity *, signed int))(*(_DWORD *)v1 + 796);
          if ( !(_NF ^ _VF) )
            v11 = v1;
            v12 = 1;
            return v10(v11, v12);
LABEL_15:
          v11 = v1;
          v12 = 0;
          return v10(v11, v12);
        v13 = 1;
        v14 = *(void (__fastcall **)(Entity *, signed int))(*(_DWORD *)v1 + 788);
        v15 = v1;
        v13 = 0;
      v14(v15, v13);
      v10 = *(int (__fastcall **)(Entity *, signed int))(*(_DWORD *)v1 + 796);
      goto LABEL_15;
    }
  }
  return result;
}


signed int __fastcall Ocelot::getBaseSpeed(Ocelot *this)
{
  return 1050253722;
}


int __fastcall Ocelot::Ocelot(int a1, int a2, int *a3)
{
  int result; // r0@1

  result = j_Animal::Animal(a1, a2, a3);
  *(_DWORD *)result = &off_271CF78;
  *(_DWORD *)(result + 248) = 49;
  *(_DWORD *)(result + 3984) = 1067030938;
  return result;
}


unsigned int __fastcall Ocelot::onBorn(Ocelot *this, Mob *a2, Mob *a3)
{
  Entity *v3; // r5@1
  Entity *v4; // r4@1
  Mob *v5; // r6@1
  unsigned int result; // r0@1
  int v7; // r1@3

  v3 = a2;
  v4 = this;
  v5 = a3;
  result = (*(int (__fastcall **)(Mob *))(*(_DWORD *)a2 + 488))(a2);
  if ( result == 21270 )
  {
    result = (*(int (__fastcall **)(Mob *))(*(_DWORD *)v5 + 488))(v5);
    if ( result == 21270 )
    {
      v7 = j_Entity::getVariant(v3);
      result = j_j_j__ZN6Entity10setVariantEi_1(v4, v7);
    }
  }
  return result;
}
