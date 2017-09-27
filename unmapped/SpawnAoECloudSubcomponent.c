

int __fastcall SpawnAoECloudSubcomponent::SpawnAoECloudSubcomponent(int result)
{
  __int64 v1; // kr00_8@1

  *(_DWORD *)result = &off_271EC00;
  *(_DWORD *)(result + 4) = -1;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 27;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = -1082130432;
  v1 = *(_QWORD *)&Color::NIL;
  *(_QWORD *)(result + 36) = qword_283E6B8;
  *(_QWORD *)(result + 28) = v1;
  *(_BYTE *)(result + 44) = 1;
  return result;
}


int __fastcall SpawnAoECloudSubcomponent::readfromJSON(SpawnAoECloudSubcomponent *this, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  SpawnAoECloudSubcomponent *v3; // r4@1
  Json::Value *v4; // r0@1
  Json::Value *v5; // r0@1
  Json::Value *v6; // r0@1
  Json::Value *v7; // r0@1
  int v8; // r6@1
  void *v9; // r0@1
  void *v10; // r0@2
  Json::Value *v11; // r0@3
  Json::Value *v12; // r0@3
  int result; // r0@3
  unsigned int *v14; // r2@4
  signed int v15; // r1@6
  unsigned int *v16; // r2@8
  signed int v17; // r1@10
  int v18; // [sp+8h] [bp-28h]@1
  int v19; // [sp+Ch] [bp-24h]@1

  v2 = a2;
  v3 = this;
  v4 = (Json::Value *)j_Json::Value::operator[](a2, "potion");
  *((_DWORD *)v3 + 1) = j_Json::Value::asInt(v4, *((_DWORD *)v3 + 1));
  v5 = (Json::Value *)j_Json::Value::operator[](v2, "radius");
  *((_DWORD *)v3 + 5) = j_Json::Value::asFloat(v5, *((float *)v3 + 5));
  v6 = (Json::Value *)j_Json::Value::operator[](v2, "radius_on_use");
  *((_DWORD *)v3 + 6) = j_Json::Value::asFloat(v6, *((float *)v3 + 6));
  v7 = (Json::Value *)j_Json::Value::operator[](v2, "duration");
  *((_DWORD *)v3 + 2) = j_Json::Value::asInt(v7, *((_DWORD *)v3 + 2));
  v8 = j_Json::Value::operator[](v2, "particle");
  sub_21E94B4((void **)&v18, "mobspellambient");
  j_Json::Value::asString(&v19, v8, &v18);
  *((_DWORD *)v3 + 3) = j_ParticleTypeFromString((unsigned int *)&v19);
  v9 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v19 - 4);
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
      j_j_j_j__ZdlPv_9(v9);
  }
  v10 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v18 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (Json::Value *)j_Json::Value::operator[](v2, "affect_owner");
  *((_BYTE *)v3 + 44) = j_Json::Value::asBool(v11, *((_BYTE *)v3 + 44));
  v12 = (Json::Value *)j_Json::Value::operator[](v2, "reapplication_delay");
  result = j_Json::Value::asInt(v12, *((_DWORD *)v3 + 4));
  *((_DWORD *)v3 + 4) = result;
  return result;
}


unsigned int __fastcall SpawnAoECloudSubcomponent::doOnHitEffect(SpawnAoECloudSubcomponent *this, ProjectileComponent *a2)
{
  ThrownPotion *v2; // r4@1
  Level *v4; // r0@1
  unsigned int result; // r0@1
  int v6; // r1@3
  __int16 *v7; // r10@3
  __int64 v8; // r2@6
  int v9; // r0@6
  int v10; // r6@6
  char *v11; // r0@6
  int v12; // r8@6
  char *v13; // r0@6
  __int16 v14; // r1@6
  MobEffect *v15; // r0@6
  char *v16; // r0@9
  int v17; // r1@9
  int v18; // r2@9
  int v19; // r3@9
  int v20; // r0@9
  int v21; // r7@10
  int (__fastcall *v22)(int, int, int *); // r11@10
  int v23; // r5@10
  AreaEffectCloud *v24; // r7@10
  void *v25; // r0@12
  void *v26; // r0@13
  void *v27; // r0@14
  void *v28; // r0@15
  void (__fastcall *v29)(AreaEffectCloud *, _DWORD, int, int); // r5@17
  __int64 v30; // r0@17
  char *v37; // r0@17
  _DWORD *v38; // r0@17
  int v39; // r1@19
  Level *v40; // r5@22
  const Vec3 *v41; // r0@22
  int v42; // r4@22
  unsigned int *v43; // r1@23
  unsigned int *v44; // r5@29
  unsigned int *v45; // r2@37
  signed int v46; // r1@39
  unsigned int *v47; // r2@41
  signed int v48; // r1@43
  unsigned int *v49; // r2@45
  signed int v50; // r1@47
  unsigned int *v51; // r2@49
  signed int v52; // r1@51
  int v53; // [sp+8h] [bp-58h]@17
  int v54; // [sp+Ch] [bp-54h]@17
  int v55; // [sp+10h] [bp-50h]@10
  int v56; // [sp+14h] [bp-4Ch]@10
  int v57; // [sp+18h] [bp-48h]@13
  int v58; // [sp+1Ch] [bp-44h]@12
  int v59; // [sp+20h] [bp-40h]@10
  Potion *v60; // [sp+24h] [bp-3Ch]@6
  int v61; // [sp+28h] [bp-38h]@22

  v2 = (ThrownPotion *)*((_DWORD *)a2 + 4);
  _R9 = this;
  v4 = (Level *)j_Entity::getLevel(*((Entity **)a2 + 4));
  result = j_Level::isClientSide(v4);
  if ( !result )
  {
    result = (*(int (__fastcall **)(ThrownPotion *))(*(_DWORD *)v2 + 488))(v2);
    if ( result == 4194405 )
    {
      result = j_ThrownPotion::getPotionId(v2);
      v6 = result;
      *((_DWORD *)_R9 + 1) = result;
      v7 = (__int16 *)((char *)_R9 + 4);
    }
    else
      v6 = *((_DWORD *)_R9 + 1);
    if ( v6 != -1 )
      j_Potion::getPotion((Potion *)&v60, v6);
      v8 = qword_27FB650;
      v9 = unk_27FB658;
      *((_DWORD *)_R9 + 7) = MobEffect::DEFAULT_COLOR;
      v10 = (int)_R9 + 28;
      *(_QWORD *)(v10 + 4) = v8;
      *(_DWORD *)(v10 + 12) = v9;
      v11 = j_Potion::getMobEffect(v60);
      v12 = j_MobEffectInstance::getId((MobEffectInstance *)v11);
      v13 = j_Entity::getEntityData(v2);
      v14 = j_SynchedEntityData::getShort((SynchedEntityData *)v13, 37);
      v15 = (MobEffect *)MobEffect::mMobEffects[v12];
      if ( !v14 || v15 )
      {
        if ( v15 )
        {
          v16 = j_MobEffect::getColor(v15);
          v17 = *(_DWORD *)v16;
          v18 = *((_DWORD *)v16 + 1);
          v19 = *((_DWORD *)v16 + 2);
          v20 = *((_DWORD *)v16 + 3);
          *(_DWORD *)v10 = v17;
          *((_DWORD *)_R9 + 8) = v18;
          *((_DWORD *)_R9 + 9) = v19;
          *((_DWORD *)_R9 + 10) = v20;
        }
        v21 = j_Entity::getLevel(v2);
        v22 = *(int (__fastcall **)(int, int, int *))(*(_DWORD *)v21 + 44);
        v23 = j_Entity::getRegion(v2);
        j_EntityTypeToString((void **)&v55, 0x5Fu, 1);
        j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((int)&v56, &v55);
        j_EntityFactory::createBornEntity((EntityFactory *)&v59, (const EntityDefinitionIdentifier *)&v56, v2);
        v24 = (AreaEffectCloud *)v22(v21, v23, &v59);
        if ( v59 )
          (*(void (**)(void))(*(_DWORD *)v59 + 32))();
        v59 = 0;
        v25 = (void *)(v58 - 12);
        if ( (int *)(v58 - 12) != &dword_28898C0 )
          v45 = (unsigned int *)(v58 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v46 = __ldrex(v45);
            while ( __strex(v46 - 1, v45) );
          }
          else
            v46 = (*v45)--;
          if ( v46 <= 0 )
            j_j_j_j__ZdlPv_9(v25);
        v26 = (void *)(v57 - 12);
        if ( (int *)(v57 - 12) != &dword_28898C0 )
          v47 = (unsigned int *)(v57 - 4);
              v48 = __ldrex(v47);
            while ( __strex(v48 - 1, v47) );
            v48 = (*v47)--;
          if ( v48 <= 0 )
            j_j_j_j__ZdlPv_9(v26);
        v27 = (void *)(v56 - 12);
        if ( (int *)(v56 - 12) != &dword_28898C0 )
          v49 = (unsigned int *)(v56 - 4);
              v50 = __ldrex(v49);
            while ( __strex(v50 - 1, v49) );
            v50 = (*v49)--;
          if ( v50 <= 0 )
            j_j_j_j__ZdlPv_9(v27);
        v28 = (void *)(v55 - 12);
        if ( (int *)(v55 - 12) != &dword_28898C0 )
          v51 = (unsigned int *)(v55 - 4);
              v52 = __ldrex(v51);
            while ( __strex(v52 - 1, v51) );
            v52 = (*v51)--;
          if ( v52 <= 0 )
            j_j_j_j__ZdlPv_9(v28);
        if ( v24 )
          v29 = *(void (__fastcall **)(AreaEffectCloud *, _DWORD, int, int))(*(_DWORD *)v24 + 348);
          v30 = j_Entity::getOwnerId((Entity *)&v53, (int)v2);
          v29(v24, HIDWORD(v30), v53, v54);
          j_AreaEffectCloud::setDuration(v24, 20 * *((_DWORD *)_R9 + 2));
          j_AreaEffectCloud::setRadius(v24, *((float *)_R9 + 5));
          j_AreaEffectCloud::setRadiusOnUse(v24, *((float *)_R9 + 6));
          j_AreaEffectCloud::setPotion(v24, *v7);
          j_AreaEffectCloud::setWaitTime(v24, 10);
          __asm { VLDR            S16, [R9,#0x14] }
          _R0 = j_AreaEffectCloud::getDuration(v24);
          __asm
            VMOV            S0, R0
            VNEG.F32        S2, S16
            VCVT.F32.S32    S0, S0
            VDIV.F32        S0, S2, S0
            VMOV            R1, S0
          j_AreaEffectCloud::setRadiusPerTick(v24, _R1);
          v37 = j_Potion::getMobEffect(v60);
          j_AreaEffectCloud::addEffect(
            (int)v24,
            *(_DWORD *)v37,
            *((_DWORD *)v37 + 1),
            *((_DWORD *)v37 + 2),
            *((_DWORD *)v37 + 3));
          j_AreaEffectCloud::setParticle((int)v24, *((_DWORD *)_R9 + 3));
          j_AreaEffectCloud::setParticleColor(v24, (SpawnAoECloudSubcomponent *)((char *)_R9 + 28));
          j_AreaEffectCloud::setAffectOwner(v24, *((_BYTE *)_R9 + 44));
          v38 = MobEffect::mMobEffects[v12];
          if ( v38 )
            if ( (*(int (**)(void))(*v38 + 20))() )
              v39 = 0;
            else
              v39 = *((_DWORD *)_R9 + 4);
            j_AreaEffectCloud::setReapplicationDelay(v24, v39);
      }
      v40 = (Level *)j_Entity::getLevel(v2);
      v41 = (const Vec3 *)(*(int (__fastcall **)(ThrownPotion *))(*(_DWORD *)v2 + 52))(v2);
      result = j_Level::potionSplash(v40, v41, (SpawnAoECloudSubcomponent *)((char *)_R9 + 28), 0);
      v42 = v61;
      if ( v61 )
        v43 = (unsigned int *)(v61 + 4);
        if ( &pthread_create )
          __dmb();
          do
            result = __ldrex(v43);
          while ( __strex(result - 1, v43) );
        else
          result = (*v43)--;
        if ( result == 1 )
          v44 = (unsigned int *)(v42 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v42 + 8))(v42);
              result = __ldrex(v44);
            while ( __strex(result - 1, v44) );
            result = (*v44)--;
          if ( result == 1 )
            result = (*(int (__fastcall **)(int))(*(_DWORD *)v42 + 12))(v42);
  }
  return result;
}
