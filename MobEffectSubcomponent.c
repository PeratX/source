

MobEffectSubcomponent *__fastcall MobEffectSubcomponent::~MobEffectSubcomponent(MobEffectSubcomponent *this)
{
  MobEffectSubcomponent *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_271EBD0;
  v2 = *((_DWORD *)this + 1);
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


void __fastcall MobEffectSubcomponent::~MobEffectSubcomponent(MobEffectSubcomponent *this)
{
  MobEffectSubcomponent::~MobEffectSubcomponent(this);
}


int __fastcall MobEffectSubcomponent::readfromJSON(MobEffectSubcomponent *this, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  MobEffectSubcomponent *v3; // r4@1
  int v4; // r0@1
  void *v5; // r0@1
  Json::Value *v6; // r0@2
  Json::Value *v7; // r0@2
  Json::Value *v8; // r0@2
  Json::Value *v9; // r0@2
  int result; // r0@2
  unsigned int *v11; // r2@3
  signed int v12; // r1@5
  int v13; // [sp+0h] [bp-20h]@1

  v2 = a2;
  v3 = this;
  v4 = j_Json::Value::operator[](a2, "effect");
  j_Json::Value::asString(&v13, v4, (int *)v3 + 1);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v3 + 1,
    &v13);
  v5 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v13 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (Json::Value *)j_Json::Value::operator[](v2, "durationeasy");
  *((_DWORD *)v3 + 2) = j_Json::Value::asInt(v6, *((_DWORD *)v3 + 2));
  v7 = (Json::Value *)j_Json::Value::operator[](v2, "durationnormal");
  *((_DWORD *)v3 + 3) = j_Json::Value::asInt(v7, *((_DWORD *)v3 + 3));
  v8 = (Json::Value *)j_Json::Value::operator[](v2, "durationhard");
  *((_DWORD *)v3 + 4) = j_Json::Value::asInt(v8, *((_DWORD *)v3 + 4));
  v9 = (Json::Value *)j_Json::Value::operator[](v2, "amplifier");
  result = j_Json::Value::asInt(v9, *((_DWORD *)v3 + 5));
  *((_DWORD *)v3 + 5) = result;
  return result;
}


int __fastcall MobEffectSubcomponent::MobEffectSubcomponent(int result)
{
  *(_DWORD *)result = &off_271EBD0;
  *(_DWORD *)(result + 4) = &unk_28898CC;
  *(_DWORD *)(result + 8) = -1;
  *(_DWORD *)(result + 12) = -1;
  *(_DWORD *)(result + 16) = -1;
  *(_DWORD *)(result + 20) = -1;
  return result;
}


void __fastcall MobEffectSubcomponent::~MobEffectSubcomponent(MobEffectSubcomponent *this)
{
  MobEffectSubcomponent *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_271EBD0;
  v2 = *((_DWORD *)this + 1);
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
  j_operator delete((void *)v1);
}


MobEffect *__fastcall MobEffectSubcomponent::doOnHitEffect(MobEffectSubcomponent *this, ProjectileComponent *a2)
{
  MobEffectSubcomponent *v2; // r4@1
  Entity *v3; // r6@1
  Level *v4; // r0@1
  MobEffect *result; // r0@1
  MobEffect *v6; // r7@2
  int v7; // r0@3
  Entity *v8; // r5@3
  __int16 v9; // r0@4
  Level *v10; // r0@8
  unsigned __int64 *v11; // r0@8
  int v12; // r8@10
  int v13; // r8@12
  int (__fastcall *v14)(MobEffect *, Entity *, int, Entity *); // r9@14
  int v15; // r8@14
  __int64 v16; // r0@14
  int v17; // r2@14
  int v18; // r0@14
  signed int v19; // r8@15
  Level *v20; // r0@15
  Level *v21; // r0@17
  Level *v22; // r0@19
  int v23; // r7@22
  int v24; // r7@23
  int v25; // r7@24
  int v26; // r7@25
  int v27; // r7@26
  int v28; // r7@27
  int v29; // r7@28
  int v30; // r7@29
  __int64 v31; // r0@29
  int v32; // r0@29
  int v33; // r6@29
  void (__fastcall *v34)(Entity *, int); // r2@31
  int v35; // r0@35
  char v36; // [sp+8h] [bp-B8h]@35
  unsigned int v37; // [sp+18h] [bp-A8h]@29
  unsigned int v38; // [sp+1Ch] [bp-A4h]@29
  unsigned int v39; // [sp+20h] [bp-A0h]@14
  unsigned int v40; // [sp+24h] [bp-9Ch]@14
  char v41; // [sp+28h] [bp-98h]@13
  char v42; // [sp+50h] [bp-70h]@3
  char v43; // [sp+60h] [bp-60h]@1
  Entity *v44; // [sp+80h] [bp-40h]@3

  v2 = this;
  v3 = (Entity *)*((_DWORD *)a2 + 4);
  j_HitResult::HitResult((int)&v43, (int)a2 + 108);
  v4 = (Level *)j_Entity::getLevel(v3);
  result = (MobEffect *)j_Level::isClientSide(v4);
  if ( result )
    return result;
  result = (MobEffect *)j_MobEffect::getByName((int **)v2 + 1);
  v6 = result;
  if ( !result )
  v7 = j_MobEffect::getId(result);
  result = (MobEffect *)j_MobEffectInstance::MobEffectInstance((MobEffectInstance *)&v42, v7);
  v8 = v44;
  if ( !v44 )
  v9 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v44 + 488))(v44);
  result = (MobEffect *)j_EntityClassTree::isMob(v9);
  if ( result != (MobEffect *)1 )
  result = (MobEffect *)(*(int (__fastcall **)(Entity *, char *))(*(_DWORD *)v8 + 1068))(v8, &v42);
  if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)v8 + 488))(v8) == 319
    && (*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 40))(v3) == 319 )
  {
    v10 = (Level *)j_Entity::getLevel(v3);
    v11 = (unsigned __int64 *)j_Level::getGameRules(v10);
    result = (MobEffect *)j_GameRules::getBool(v11, (int **)&GameRules::PVP);
    if ( result != (MobEffect *)1 )
      return result;
  }
  if ( (*(int (__fastcall **)(MobEffect *))(*(_DWORD *)v6 + 20))(v6) == 1 )
    v12 = j_MobEffectInstance::getId((MobEffectInstance *)&v42);
    if ( v12 == j_MobEffect::getId((MobEffect *)MobEffect::HARM)
      || (*(int (__fastcall **)(Entity *))(*(_DWORD *)v8 + 856))(v8) == 1
      && (v13 = j_MobEffectInstance::getId((MobEffectInstance *)&v42),
          v13 == j_MobEffect::getId((MobEffect *)MobEffect::HEAL)) )
    {
      j_Entity::setChainedDamageEffects(v8, 1);
      j_EntityDamageByEntitySource::EntityDamageByEntitySource((int)&v41, v3, 14);
      j_Entity::hurt(v8, (const EntityDamageSource *)&v41, 0, 1, 0);
      j_EntityDamageByEntitySource::~EntityDamageByEntitySource((EntityDamageByEntitySource *)&v41);
    }
    v14 = *(int (__fastcall **)(MobEffect *, Entity *, int, Entity *))(*(_DWORD *)v6 + 16);
    v15 = j_Entity::getLevel(v3);
    v16 = j_Entity::getOwnerId((Entity *)&v39, (int)v3);
    v17 = j_Level::fetchEntity(v15, SHIDWORD(v16), v39, v40, 0);
    v18 = *((_DWORD *)v2 + 5);
    return (MobEffect *)v14(v6, v3, v17, v8);
  v19 = j_MobEffectInstance::getDuration((MobEffectInstance *)&v42);
  v20 = (Level *)j_Entity::getLevel(v3);
  result = (MobEffect *)j_Level::getDifficulty(v20);
  if ( result == (MobEffect *)1 )
    v19 = *((_DWORD *)v2 + 2);
  else
    v21 = (Level *)j_Entity::getLevel(v3);
    result = (MobEffect *)j_Level::getDifficulty(v21);
    if ( result == (MobEffect *)2 )
      v19 = *((_DWORD *)v2 + 3);
    else
      v22 = (Level *)j_Entity::getLevel(v3);
      result = (MobEffect *)j_Level::getDifficulty(v22);
      if ( result == (MobEffect *)3 )
        v19 = *((_DWORD *)v2 + 4);
  if ( v19 >= 21 )
    v23 = j_MobEffectInstance::getId((MobEffectInstance *)&v42);
    if ( v23 != j_MobEffect::getId((MobEffect *)MobEffect::POISON) )
      v24 = j_MobEffectInstance::getId((MobEffectInstance *)&v42);
      if ( v24 != j_MobEffect::getId((MobEffect *)MobEffect::FATAL_POISON) )
      {
        v25 = j_MobEffectInstance::getId((MobEffectInstance *)&v42);
        if ( v25 != j_MobEffect::getId((MobEffect *)MobEffect::BLINDNESS) )
        {
          v26 = j_MobEffectInstance::getId((MobEffectInstance *)&v42);
          if ( v26 != j_MobEffect::getId((MobEffect *)MobEffect::HUNGER) )
          {
            v27 = j_MobEffectInstance::getId((MobEffectInstance *)&v42);
            if ( v27 != j_MobEffect::getId((MobEffect *)MobEffect::MOVEMENT_SLOWDOWN) )
            {
              v28 = j_MobEffectInstance::getId((MobEffectInstance *)&v42);
              if ( v28 != j_MobEffect::getId((MobEffect *)MobEffect::WEAKNESS) )
              {
                v29 = j_MobEffectInstance::getId((MobEffectInstance *)&v42);
                if ( v29 != j_MobEffect::getId((MobEffect *)MobEffect::WITHER) )
                  goto LABEL_35;
              }
            }
          }
        }
      }
    v30 = j_Entity::getLevel(v3);
    v31 = j_Entity::getOwnerId((Entity *)&v37, (int)v3);
    v32 = j_Level::fetchEntity(v30, SHIDWORD(v31), v37, v38, 0);
    v33 = v32;
    if ( !v32 )
      goto LABEL_35;
    if ( j_Entity::hasCategory(v32, 1) == 1 )
      v34 = *(void (__fastcall **)(Entity *, int))(*(_DWORD *)v8 + 956);
      if ( j_Entity::hasCategory(v33, 2) != 1 )
LABEL_35:
        v35 = j_MobEffectInstance::getId((MobEffectInstance *)&v42);
        j_MobEffectInstance::MobEffectInstance((int)&v36, v35, v19, *((_DWORD *)v2 + 5));
        return (MobEffect *)j_Mob::addEffect(v8, (const MobEffectInstance *)&v36);
      v34 = *(void (__fastcall **)(Entity *, int))(*(_DWORD *)v8 + 948);
    v34(v8, v33);
    goto LABEL_35;
  return result;
}
