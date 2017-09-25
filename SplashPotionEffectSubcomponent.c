

int __fastcall SplashPotionEffectSubcomponent::readfromJSON(SplashPotionEffectSubcomponent *this, Json::Value *a2)
{
  SplashPotionEffectSubcomponent *v2; // r4@1
  Json::Value *v3; // r0@1
  int result; // r0@1

  v2 = this;
  v3 = (Json::Value *)j_Json::Value::operator[](a2, "effect");
  result = j_Json::Value::asInt(v3, *((_DWORD *)v2 + 1));
  *((_DWORD *)v2 + 1) = result;
  return result;
}


_QWORD *__fastcall SplashPotionEffectSubcomponent::SplashPotionEffectSubcomponent(_QWORD *result)
{
  __int64 v1; // r1@1

  HIDWORD(v1) = -1;
  LODWORD(v1) = &off_271EBE8;
  *result = v1;
  return result;
}


Potion *__fastcall SplashPotionEffectSubcomponent::doOnHitEffect(SplashPotionEffectSubcomponent *this, ProjectileComponent *a2)
{
  int v2; // r4@1
  SplashPotionEffectSubcomponent *v3; // r5@1
  int v4; // r0@1
  Level *v5; // r0@1
  Potion *result; // r0@1
  int v7; // r6@3
  int v8; // r5@3
  unsigned int *v9; // r0@5
  unsigned int v10; // r1@7
  unsigned int *v11; // r1@11
  unsigned int v12; // r0@13
  unsigned int *v13; // r7@17
  unsigned int v14; // r0@19
  unsigned int *v15; // r1@26
  unsigned int v16; // r0@28
  unsigned int *v17; // r6@32
  unsigned int v18; // r0@34
  int v19; // r0@40
  int v20; // r9@40
  MobEffect *v21; // r0@40
  char *v22; // r0@41
  int v23; // r1@41
  __int64 v24; // r2@41
  Level *v25; // r7@42
  _DWORD *v26; // r0@42
  int v27; // r3@43
  char *v33; // r0@45
  char *v34; // r0@45
  int v35; // r0@45
  unsigned __int64 *v36; // r5@45
  const Entity **v37; // r10@46
  unsigned int *v38; // r2@48
  signed int v39; // r1@50
  unsigned int *v40; // r2@52
  signed int v41; // r1@54
  signed int v42; // r1@56
  const Entity *v44; // r11@69
  Level *v45; // r0@74
  unsigned __int64 *v46; // r0@74
  int v47; // r8@76
  _DWORD *v48; // r6@76
  void (__fastcall *v49)(_DWORD *, int, int, const Entity *); // r7@76
  int v50; // r5@76
  __int64 v51; // r0@76
  int v52; // r5@76
  int v53; // r5@76
  int v56; // r6@83
  int v57; // r6@84
  int v58; // r6@85
  int v59; // r6@86
  int v60; // r6@87
  int v61; // r6@88
  int v62; // r6@89
  int v63; // r6@90
  __int64 v64; // r0@90
  int v65; // r0@90
  Entity *v66; // r8@90
  int v67; // r6@94
  void *v68; // r0@95
  void *v69; // r0@96
  void *v70; // r0@97
  unsigned int *v71; // r2@98
  int v72; // r6@104
  int v73; // r0@104
  int v74; // r4@106
  unsigned int *v75; // r1@107
  unsigned int *v76; // r5@113
  __int16 v77; // [sp+3Ch] [bp-16Ch]@45
  Potion *v78; // [sp+44h] [bp-164h]@46
  char v79; // [sp+48h] [bp-160h]@81
  char v80; // [sp+50h] [bp-158h]@104
  void **v81; // [sp+60h] [bp-148h]@95
  int v82; // [sp+98h] [bp-110h]@97
  int v83; // [sp+9Ch] [bp-10Ch]@52
  int v84; // [sp+A0h] [bp-108h]@48
  unsigned int v85; // [sp+A8h] [bp-100h]@90
  unsigned int v86; // [sp+ACh] [bp-FCh]@90
  unsigned int v87; // [sp+B0h] [bp-F8h]@76
  unsigned int v88; // [sp+B4h] [bp-F4h]@76
  float v89; // [sp+B8h] [bp-F0h]@45
  char v90; // [sp+C4h] [bp-E4h]@45
  char v91; // [sp+E0h] [bp-C8h]@45
  int v92; // [sp+F0h] [bp-B8h]@40
  __int64 v93; // [sp+F4h] [bp-B4h]@40
  int v94; // [sp+FCh] [bp-ACh]@40
  Potion *v95; // [sp+100h] [bp-A8h]@3
  int v96; // [sp+104h] [bp-A4h]@3
  Potion *v97; // [sp+108h] [bp-A0h]@2
  int v98; // [sp+10Ch] [bp-9Ch]@3
  char v99; // [sp+110h] [bp-98h]@1
  int v100; // [sp+124h] [bp-84h]@45

  v2 = *((_DWORD *)a2 + 4);
  v3 = this;
  v4 = j_Entity::getProjectileComponent(*((Entity **)a2 + 4));
  j_HitResult::HitResult((int)&v99, v4 + 108);
  v5 = (Level *)j_Entity::getLevel((Entity *)v2);
  result = (Potion *)j_Level::isClientSide(v5);
  if ( !result )
  {
    j_Potion::getPotion((Potion *)&v97, *((_DWORD *)v3 + 1));
    result = v97;
    if ( v97 )
      goto LABEL_122;
    j_Potion::getPotion((Potion *)&v95, 0);
    v97 = v95;
    v7 = v98;
    v8 = v96;
    if ( v96 != v98 )
    {
      if ( v96 )
      {
        v9 = (unsigned int *)(v96 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 + 1, v9) );
          v7 = v98;
        }
        else
          ++*v9;
      }
      if ( v7 )
        v11 = (unsigned int *)(v7 + 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 == 1 )
          v13 = (unsigned int *)(v7 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
          if ( &pthread_create )
          {
            __dmb();
            do
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
          }
          else
            v14 = (*v13)--;
          if ( v14 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
      v98 = v8;
      v8 = v96;
    }
    if ( v8 )
      v15 = (unsigned int *)(v8 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      else
        v16 = (*v15)--;
      if ( v16 == 1 )
        v17 = (unsigned int *)(v8 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
LABEL_122:
      v19 = j_Potion::getMobEffectId(result);
      v20 = v19;
      v94 = unk_27FB658;
      v92 = MobEffect::DEFAULT_COLOR;
      v93 = qword_27FB650;
      v21 = (MobEffect *)MobEffect::mMobEffects[v19];
      if ( v21 )
        v22 = j_MobEffect::getColor(v21);
        v23 = *(_DWORD *)v22;
        v24 = *(_QWORD *)(v22 + 4);
        v94 = *((_DWORD *)v22 + 3);
        v92 = v23;
        v93 = v24;
      v25 = (Level *)j_Entity::getLevel((Entity *)v2);
      v26 = MobEffect::mMobEffects[v20];
      if ( v26 )
        v27 = (*(int (**)(void))(*v26 + 20))();
        v27 = 0;
      j_Level::potionSplash(v25, (const Vec3 *)&v100, (const Color *)&v92, v27);
      _R0 = j_Entity::getProjectileComponent((Entity *)v2);
      __asm { VLDR            S16, [R0,#0x120] }
      v33 = j_Entity::getEntityData((Entity *)v2);
      v77 = j_SynchedEntityData::getShort((SynchedEntityData *)v33, 37);
      v34 = j_Potion::getMobEffect(v97);
      j_MobEffectInstance::getSplashEffect((MobEffectInstance *)&v91, (int)v34);
      __asm
        VMOV.F32        S18, #0.5
        VSTR            S16, [SP,#0x1A8+var_F0]
        VMUL.F32        S0, S16, S18
        VSTR            S0, [SP,#0x1A8+var_EC]
        VSTR            S16, [SP,#0x1A8+var_E8]
      j_AABB::grow((AABB *)&v90, (const Vec3 *)(v2 + 264), (int)&v89);
      v35 = j_Entity::getRegion((Entity *)v2);
      v36 = (unsigned __int64 *)j_BlockSource::fetchEntities2(v35, 256, (const AABB *)&v90, 0);
      result = (Potion *)j_Potion::getMobEffectId(v97);
      if ( (signed int)result >= 0 )
        result = (Potion *)(*v36 >> 32);
        v37 = (const Entity **)*v36;
        v78 = result;
        if ( (Potion *)v37 != result )
          __asm
            VMUL.F32        S20, S16, S16
            VMOV.F32        S22, #1.0
            _R0 = j_Entity::distanceToSqr((Entity *)v2, *v37);
            __asm
            {
              VMOV            S0, R0
              VCMPE.F32       S0, S20
              VMRS            APSR_nzcv, FPSCR
            }
            if ( _NF ^ _VF )
              __asm { VSQRT.F32       S0, S0 }
              v44 = *v37;
              __asm
              {
                VDIV.F32        S0, S0, S16
                VSUB.F32        S24, S22, S0
              }
              if ( _ZF )
                __asm { VMOVEQ.F32      S24, S22 }
              if ( MobEffect::mMobEffects[v20] )
                if ( (*(int (__fastcall **)(const Entity *))(*(_DWORD *)v44 + 488))(*v37) != 319
                  || (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 40))(v2) != 319
                  || (v45 = (Level *)j_Entity::getLevel((Entity *)v2),
                      v46 = (unsigned __int64 *)j_Level::getGameRules(v45),
                      j_GameRules::getBool(v46, (int **)&GameRules::PVP) == 1) )
                {
                  if ( (*(int (__cdecl **)(_DWORD *))(*MobEffect::mMobEffects[v20] + 20))(MobEffect::mMobEffects[v20]) == 1 )
                  {
                    v47 = j_Mob::getHealth(v44);
                    v48 = MobEffect::mMobEffects[v20];
                    v49 = *(void (__fastcall **)(_DWORD *, int, int, const Entity *))(*v48 + 16);
                    v50 = j_Entity::getLevel((Entity *)v2);
                    v51 = j_Entity::getOwnerId((Entity *)&v87, v2);
                    v52 = j_Level::fetchEntity(v50, SHIDWORD(v51), v87, v88, 0);
                    j_MobEffectInstance::getAmplifier((MobEffectInstance *)&v91);
                    __asm { VSTR            S24, [SP,#0x1A8+var_1A4] }
                    v49(v48, v2, v52, v44);
                    v53 = j_MobEffect::getId((MobEffect *)MobEffect::mMobEffects[v20]);
                    if ( v53 == j_MobEffect::getId((MobEffect *)MobEffect::HARM) && v47 != j_Mob::getHealth(v44) )
                      j_Entity::setChainedDamageEffects(*v37, 1);
                  }
                  else
                    _R0 = j_MobEffectInstance::getDuration((MobEffectInstance *)&v91);
                    __asm
                    {
                      VMOV            S0, R0
                      VCVT.F32.S32    S0, S0
                      VMUL.F32        S0, S0, S24
                      VADD.F32        S0, S0, S18
                      VCVTR.S32.F32   S0, S0
                      VMOV            R5, S0
                    }
                    if ( _R5 >= 21 )
                      v56 = j_MobEffectInstance::getId((MobEffectInstance *)&v91);
                      if ( v56 == j_MobEffect::getId((MobEffect *)MobEffect::POISON)
                        || (v57 = j_MobEffectInstance::getId((MobEffectInstance *)&v91),
                            v57 == j_MobEffect::getId((MobEffect *)MobEffect::FATAL_POISON))
                        || (v58 = j_MobEffectInstance::getId((MobEffectInstance *)&v91),
                            v58 == j_MobEffect::getId((MobEffect *)MobEffect::BLINDNESS))
                        || (v59 = j_MobEffectInstance::getId((MobEffectInstance *)&v91),
                            v59 == j_MobEffect::getId((MobEffect *)MobEffect::HUNGER))
                        || (v60 = j_MobEffectInstance::getId((MobEffectInstance *)&v91),
                            v60 == j_MobEffect::getId((MobEffect *)MobEffect::MOVEMENT_SLOWDOWN))
                        || (v61 = j_MobEffectInstance::getId((MobEffectInstance *)&v91),
                            v61 == j_MobEffect::getId((MobEffect *)MobEffect::WEAKNESS))
                        || (v62 = j_MobEffectInstance::getId((MobEffectInstance *)&v91),
                            v62 == j_MobEffect::getId((MobEffect *)MobEffect::WITHER)) )
                      {
                        v63 = j_Entity::getLevel((Entity *)v2);
                        v64 = j_Entity::getOwnerId((Entity *)&v85, v2);
                        v65 = j_Level::fetchEntity(v63, SHIDWORD(v64), v85, v86, 0);
                        v66 = (Entity *)v65;
                        if ( v65 )
                        {
                          if ( j_Entity::hasCategory(v65, 1) == 1 )
                          {
                            (*(void (__fastcall **)(const Entity *, Entity *))(*(_DWORD *)v44 + 956))(v44, v66);
                            if ( j_EntityClassTree::isInstanceOf((int)*v37, 2861) == 1
                              && j_EntityClassTree::isInstanceOf(v2, 4194390) == 1 )
                            {
                              v67 = j_MobEffectInstance::getId((MobEffectInstance *)&v91);
                              if ( v67 == j_MobEffect::getId((MobEffect *)MobEffect::POISON) )
                              {
                                j_EventPacket::EventPacket((int)&v81, v66, 54, 1);
                                (*(void (__fastcall **)(Entity *, void ***))(*(_DWORD *)v66 + 1448))(v66, &v81);
                                v81 = &off_26E9D30;
                                v68 = (void *)(v84 - 12);
                                if ( (int *)(v84 - 12) != &dword_28898C0 )
                                {
                                  v38 = (unsigned int *)(v84 - 4);
                                  if ( &pthread_create )
                                  {
                                    __dmb();
                                    do
                                      v39 = __ldrex(v38);
                                    while ( __strex(v39 - 1, v38) );
                                  }
                                  else
                                    v39 = (*v38)--;
                                  if ( v39 <= 0 )
                                    j_j_j_j__ZdlPv_9(v68);
                                }
                                v69 = (void *)(v83 - 12);
                                if ( (int *)(v83 - 12) != &dword_28898C0 )
                                  v40 = (unsigned int *)(v83 - 4);
                                      v41 = __ldrex(v40);
                                    while ( __strex(v41 - 1, v40) );
                                    v41 = (*v40)--;
                                  if ( v41 <= 0 )
                                    j_j_j_j__ZdlPv_9(v69);
                                v70 = (void *)(v82 - 12);
                                if ( (int *)(v82 - 12) != &dword_28898C0 )
                                  v71 = (unsigned int *)(v82 - 4);
                                      v42 = __ldrex(v71);
                                    while ( __strex(v42 - 1, v71) );
                                    v42 = (*v71)--;
                                  if ( v42 <= 0 )
                                    j_j_j_j__ZdlPv_9(v70);
                              }
                            }
                          }
                          else if ( j_Entity::hasCategory((int)v66, 2) == 1 )
                            (*(void (__fastcall **)(const Entity *, Entity *))(*(_DWORD *)v44 + 948))(v44, v66);
                        }
                      }
                      v72 = j_MobEffectInstance::getId((MobEffectInstance *)&v91);
                      v73 = j_MobEffectInstance::getAmplifier((MobEffectInstance *)&v91);
                      j_MobEffectInstance::MobEffectInstance((int)&v80, v72, _R5, v73);
                      j_Mob::addEffect(v44, (const MobEffectInstance *)&v80);
                }
              else if ( !v77 && *(_DWORD *)(*((_DWORD *)v44 + 12) + 160) )
                j_EntityDamageSource::EntityDamageSource((int)&v79, 9);
                j_Entity::hurt(v44, (const EntityDamageSource *)&v79, 1, 0, 0);
                j_EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v79);
            ++v37;
            result = v78;
          while ( (Potion *)v37 != v78 );
    v74 = v98;
    if ( v98 )
      v75 = (unsigned int *)(v98 + 4);
          result = (Potion *)__ldrex(v75);
        while ( __strex((unsigned int)result - 1, v75) );
        result = (Potion *)(*v75)--;
      if ( result == (Potion *)1 )
        v76 = (unsigned int *)(v74 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v74 + 8))(v74);
            result = (Potion *)__ldrex(v76);
          while ( __strex((unsigned int)result - 1, v76) );
          result = (Potion *)(*v76)--;
        if ( result == (Potion *)1 )
          result = (Potion *)(*(int (__fastcall **)(int))(*(_DWORD *)v74 + 12))(v74);
  }
  return result;
}
