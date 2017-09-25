

void __fastcall DragonFlamingGoal::~DragonFlamingGoal(DragonFlamingGoal *this)
{
  DragonFlamingGoal::~DragonFlamingGoal(this);
}


int __fastcall DragonFlamingGoal::tick(DragonFlamingGoal *this)
{
  DragonFlamingGoal *v1; // r9@1
  int v2; // r1@1
  int v3; // r4@2
  int (__fastcall *v4)(int, signed int, char *, signed int); // r6@2
  int result; // r0@2
  int v6; // r1@3
  int v7; // r0@5
  float v18; // r1@10
  int v19; // r8@10
  float v20; // r1@10
  int v21; // r0@10
  float v23; // r1@10
  BlockSource *v24; // r0@10
  float v25; // r1@10
  int v26; // r4@12
  float v28; // r1@12
  int v29; // r7@12
  float v30; // r1@12
  int v31; // r0@12
  BlockSource *v32; // r0@12
  int v35; // r2@13
  void *v36; // r0@13
  void *v37; // r0@14
  void *v38; // r0@15
  int v39; // r5@17
  int (__fastcall *v40)(int, int, int *); // r4@17
  int v41; // r1@17
  int v42; // r0@17
  AreaEffectCloud *v43; // r5@17
  void (__fastcall *v44)(AreaEffectCloud *); // r4@21
  __int64 v45; // r2@21
  int v48; // r0@21
  unsigned int *v49; // r2@25
  signed int v50; // r1@27
  unsigned int *v51; // r2@29
  signed int v52; // r1@31
  unsigned int *v53; // r2@33
  signed int v54; // r1@35
  int v55[3]; // [sp+8h] [bp-E0h]@21
  int v56; // [sp+14h] [bp-D4h]@21
  int v57; // [sp+18h] [bp-D0h]@21
  int v58; // [sp+1Ch] [bp-CCh]@21
  int v59; // [sp+20h] [bp-C8h]@21
  int v60; // [sp+24h] [bp-C4h]@21
  int v61; // [sp+28h] [bp-C0h]@17
  int v62; // [sp+2Ch] [bp-BCh]@13
  int v63; // [sp+30h] [bp-B8h]@13
  float v64; // [sp+34h] [bp-B4h]@13
  int v65; // [sp+40h] [bp-A8h]@13
  int v66; // [sp+44h] [bp-A4h]@14
  int v67; // [sp+48h] [bp-A0h]@13
  int v68; // [sp+4Ch] [bp-9Ch]@13
  int v69; // [sp+50h] [bp-98h]@10
  int v70; // [sp+54h] [bp-94h]@10
  int v71; // [sp+58h] [bp-90h]@10
  char v72; // [sp+5Ch] [bp-8Ch]@10
  int v73; // [sp+60h] [bp-88h]@10
  char v74; // [sp+68h] [bp-80h]@10
  float v76; // [sp+74h] [bp-74h]@10
  char v77; // [sp+80h] [bp-68h]@7
  float v79; // [sp+8Ch] [bp-5Ch]@7
  char v80; // [sp+98h] [bp-50h]@2

  v1 = this;
  v2 = *((_DWORD *)this + 3);
  *((_DWORD *)this + 3) = v2 + 1;
  if ( v2 >= DragonFlamingGoal::ROAR_DURATION )
  {
    result = *((_DWORD *)this + 4) + 1;
    *((_DWORD *)v1 + 4) = result;
    v6 = DragonFlamingGoal::WARMUP_TIME;
    if ( !(result & 1) && result < DragonFlamingGoal::WARMUP_TIME )
    {
      v7 = j_Entity::getLevel(*((Entity **)v1 + 2));
      j_Level::broadcastEntityEvent(v7, *((_DWORD *)v1 + 2), 68, 0);
      v6 = DragonFlamingGoal::WARMUP_TIME;
      result = *((_DWORD *)v1 + 4);
    }
    if ( result == v6 )
      j_EnderDragon::getHeadPos((EnderDragon *)&v79, *((_DWORD *)v1 + 2));
      _R1 = *((_DWORD *)v1 + 2);
      __asm
      {
        VLDR            S0, [SP,#0xE8+var_5C]
        VCVT.F32.S32    S16, S0
        VLDR            S18, [R1,#0x48]
      }
      j_EnderDragon::getHeadPos((EnderDragon *)&v77, _R1);
        VLDR            S0, [SP,#0xE8+var_60]
        VCVT.F32.S32    S2, S0
        VSUB.F32        S0, S16, S18
        VLDR            S4, [R1,#0x50]
        VSUB.F32        S2, S2, S4
        VMUL.F32        S4, S0, S0
        VMUL.F32        S6, S2, S2
        VADD.F32        S4, S6, S4
        VLDR            S6, =0.0001
        VSQRT.F32       S4, S4
        VCMPE.F32       S4, S6
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        _R0 = &Vec3::ZERO;
        __asm
        {
          VLDR            S16, [R0]
          VLDR            S18, [R0,#8]
        }
      else
          VDIV.F32        S18, S2, S4
          VDIV.F32        S16, S0, S4
      j_EnderDragon::getHeadPos((EnderDragon *)&v76, _R1);
        VLDR            S0, [SP,#0xE8+var_74]
        VCVT.F32.S32    S20, S0
      j_EnderDragon::getHeadPos((EnderDragon *)&v74, *((_DWORD *)v1 + 2));
        VLDR            S0, [SP,#0xE8+var_78]
        VCVT.F32.S32    S22, S0
      j_EnderDragon::getHeadPos((EnderDragon *)&v72, *((_DWORD *)v1 + 2));
      __asm { VMOV.F32        S0, #2.5 }
      _R0 = v73;
        VMUL.F32        S2, S16, S0
        VMUL.F32        S0, S18, S0
        VADD.F32        S16, S20, S2
        VMOV            S2, R0
        VADD.F32        S18, S22, S0
        VCVT.F32.S32    S20, S2
        VMOV            R5, S16
        VMOV            R6, S20
      v19 = j_mce::Math::floor(_R5, v18);
      v21 = j_mce::Math::floor(_R6, v20);
      __asm { VMOV            R6, S18 }
      v69 = v19;
      v70 = v21;
      v71 = j_mce::Math::floor(_R6, v23);
      v24 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 2));
      if ( j_BlockSource::isEmptyBlock(v24, (const BlockPos *)&v69) == 1 )
        __asm { VMOV.F32        S22, #-1.0 }
        do
          __asm { VADD.F32        S20, S20, S22 }
          v26 = j_mce::Math::floor(_R5, v25);
          __asm { VMOV            R0, S20 }
          v29 = j_mce::Math::floor(_R0, v28);
          v31 = j_mce::Math::floor(_R6, v30);
          v69 = v26;
          v70 = v29;
          v71 = v31;
          v32 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 2));
        while ( j_BlockSource::isEmptyBlock(v32, (const BlockPos *)&v69) );
      __asm { VMOV            R0, S20 }
      _R4 = j_mce::Math::floor(_R0, v25);
      j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v65, 95);
        VMOV            S2, R4
        VMOV.F32        S0, #1.0
        VCVT.F32.S32    S2, S2
      v35 = *((_DWORD *)v1 + 2);
        VSTR            S16, [SP,#0xE8+var_B4]
        VADD.F32        S0, S2, S0
        VSTR            S0, [SP,#0xE8+var_B0]
        VSTR            S18, [SP,#0xE8+var_AC]
      v62 = 0;
      v63 = 0;
      j_EntityFactory::createSpawnedEntity((Entity **)&v68, (const void **)&v65, v35, (int)&v64, &v62);
      v36 = (void *)(v67 - 12);
      if ( (int *)(v67 - 12) != &dword_28898C0 )
        v49 = (unsigned int *)(v67 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v50 = __ldrex(v49);
          while ( __strex(v50 - 1, v49) );
        else
          v50 = (*v49)--;
        if ( v50 <= 0 )
          j_j_j_j__ZdlPv_9(v36);
      v37 = (void *)(v66 - 12);
      if ( (int *)(v66 - 12) != &dword_28898C0 )
        v51 = (unsigned int *)(v66 - 4);
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
          v52 = (*v51)--;
        if ( v52 <= 0 )
          j_j_j_j__ZdlPv_9(v37);
      v38 = (void *)(v65 - 12);
      if ( (int *)(v65 - 12) != &dword_28898C0 )
        v53 = (unsigned int *)(v65 - 4);
            v54 = __ldrex(v53);
          while ( __strex(v54 - 1, v53) );
          v54 = (*v53)--;
        if ( v54 <= 0 )
          j_j_j_j__ZdlPv_9(v38);
      result = v68;
      if ( v68 )
        v39 = j_Entity::getLevel(*((Entity **)v1 + 2));
        v40 = *(int (__fastcall **)(int, int, int *))(*(_DWORD *)v39 + 44);
        v41 = j_Entity::getRegion(*((Entity **)v1 + 2));
        v42 = v68;
        v68 = 0;
        v61 = v42;
        v43 = (AreaEffectCloud *)v40(v39, v41, &v61);
        if ( v61 )
          (*(void (**)(void))(*(_DWORD *)v61 + 32))();
        v61 = 0;
        if ( v43 && (*(int (__fastcall **)(AreaEffectCloud *))(*(_DWORD *)v43 + 488))(v43) == 95 )
          v57 = 1063050462;
          v58 = 0;
          v59 = 1064300529;
          v60 = 1065353216;
          v44 = *(void (__fastcall **)(AreaEffectCloud *))(*(_DWORD *)v43 + 348);
          v45 = *(_QWORD *)j_Entity::getUniqueID(*((Entity **)v1 + 2));
          v44(v43);
          j_AreaEffectCloud::setDuration(v43, DragonFlamingGoal::FLAME_DURATION);
          j_AreaEffectCloud::setRadius(v43, 5.0);
          j_AreaEffectCloud::setRadiusOnUse(v43, 0.0);
          j_AreaEffectCloud::setPotion(v43, 23);
          j_AreaEffectCloud::setWaitTime(v43, 10);
          _R0 = j_AreaEffectCloud::getDuration(v43);
          __asm
          {
            VMOV            S2, R0
            VMOV.F32        S0, #-5.0
            VCVT.F32.S32    S2, S2
            VDIV.F32        S0, S0, S2
            VMOV            R1, S0
          }
          j_AreaEffectCloud::setRadiusPerTick(v43, _R1);
          v48 = j_MobEffect::getId((MobEffect *)MobEffect::HARM);
          j_MobEffectInstance::MobEffectInstance((MobEffectInstance *)v55, v48);
          j_AreaEffectCloud::addEffect((int)v43, v55[0], v55[1], v55[2], v56);
          j_AreaEffectCloud::setParticle((int)v43, 41);
          j_AreaEffectCloud::setParticleColor(v43, (Color *)&v57);
          j_AreaEffectCloud::setAffectOwner(v43, 0);
          j_AreaEffectCloud::setReapplicationDelay(v43, 0);
        result = v68;
        if ( v68 )
          result = (*(int (**)(void))(*(_DWORD *)v68 + 32))();
  }
  else
    v3 = *((_DWORD *)this + 2);
    v4 = *(int (__fastcall **)(int, signed int, char *, signed int))(*(_DWORD *)v3 + 556);
    j_Entity::getAttachPos((AABB *)&v80, *((_DWORD *)this + 2), 1, 0);
    result = v4(v3, 19, &v80, -1);
  return result;
}


int __fastcall DragonFlamingGoal::start(DragonFlamingGoal *this)
{
  DragonFlamingGoal *v1; // r4@1

  v1 = this;
  j_EnderDragon::setTargetPos(*((_DWORD *)this + 2), 0, 0, 0);
  *((_DWORD *)v1 + 3) = 0;
  (*(void (**)(void))(**((_DWORD **)v1 + 2) + 352))();
  return j_j_j__ZN11EnderDragon19incrementFlameCountEv(*((EnderDragon **)v1 + 2));
}


_QWORD *__fastcall DragonFlamingGoal::DragonFlamingGoal(Goal *a1, int a2)
{
  int v2; // r4@1
  _QWORD *result; // r0@1

  v2 = a2;
  result = j_Goal::Goal(a1);
  *(_DWORD *)result = &off_2725414;
  *((_DWORD *)result + 2) = v2;
  *((_DWORD *)result + 3) = 0;
  *((_DWORD *)result + 4) = 0;
  return result;
}


_BOOL4 __fastcall DragonFlamingGoal::canUse(DragonFlamingGoal *this)
{
  return j_Entity::getTarget(*((Entity **)this + 2)) != 0;
}


void __fastcall DragonFlamingGoal::~DragonFlamingGoal(DragonFlamingGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


signed int __fastcall DragonFlamingGoal::canContinueToUse(DragonFlamingGoal *this)
{
  DragonFlamingGoal *v1; // r4@1
  signed int result; // r0@2
  double v3; // r0@3
  int v4; // r5@4
  int v5; // r6@4
  int v6; // r8@5
  unsigned int v7; // r0@6
  int v8; // r7@8
  int *v9; // r4@8
  int v10; // r7@9
  unsigned int *v11; // r2@11
  signed int v12; // r1@13
  void *v13; // r6@19
  int v14; // r1@19
  void *v15; // r0@19
  bool v16; // zf@21
  void *ptr; // [sp+0h] [bp-48h]@6
  __int64 v18; // [sp+4h] [bp-44h]@6
  int v19; // [sp+Ch] [bp-3Ch]@6
  signed int v20; // [sp+10h] [bp-38h]@6
  int v21; // [sp+14h] [bp-34h]@6
  int v22; // [sp+18h] [bp-30h]@6

  v1 = this;
  if ( *((_DWORD *)this + 4) < DragonFlamingGoal::FLAME_DURATION )
    return 1;
  LODWORD(v3) = j_EnderDragon::getFlameCount(*((EnderDragon **)this + 2));
  HIDWORD(v3) = DragonFlamingGoal::SITTING_FLAME_ATTACK_COUNT;
  if ( SLODWORD(v3) < DragonFlamingGoal::SITTING_FLAME_ATTACK_COUNT )
    return 0;
  v4 = *((_DWORD *)v1 + 2);
  v5 = *(_DWORD *)(v4 + 48);
  if ( !v5 )
  v6 = *(_DWORD *)(v5 + 260);
  result = 0;
  if ( v6 )
  {
    v22 = 0;
    v19 = 0;
    ptr = 0;
    v18 = 0LL;
    v20 = 1065353216;
    v21 = 0;
    LODWORD(v3) = &v20;
    v7 = sub_21E6254(v3);
    LODWORD(v18) = v7;
    if ( v7 == 1 )
    {
      v9 = &v22;
      v22 = 0;
    }
    else
      if ( v7 >= 0x40000000 )
        sub_21E57F4();
      v8 = 4 * v7;
      v9 = (int *)j_operator new(4 * v7);
      j___aeabi_memclr4_0((int)v9, v8);
    ptr = v9;
    j_EntityDefinitionDescriptor::executeTrigger(
      (EntityDefinitionDescriptor *)v5,
      (Entity *)v4,
      (const DefinitionTrigger *)(v6 + 4),
      (const VariantParameterList *)&ptr);
    v10 = HIDWORD(v18);
    while ( v10 )
      v13 = (void *)v10;
      v14 = *(_DWORD *)(v10 + 8);
      v10 = *(_DWORD *)v10;
      v15 = (void *)(v14 - 12);
      if ( (int *)(v14 - 12) != &dword_28898C0 )
      {
        v11 = (unsigned int *)(v14 - 4);
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
          j_j_j_j__ZdlPv_9(v15);
      }
      j_operator delete(v13);
    j___aeabi_memclr4_0((int)ptr, 4 * v18);
    result = 0;
    HIDWORD(v18) = 0;
    v16 = ptr == 0;
    if ( ptr )
      v16 = &v22 == ptr;
    if ( !v16 )
      j_operator delete(ptr);
      return 0;
  }
  return result;
}


int __fastcall DragonFlamingGoal::stop(DragonFlamingGoal *this)
{
  DragonFlamingGoal *v1; // r4@1
  int result; // r0@1

  v1 = this;
  j_EnderDragon::setTargetPos(*((_DWORD *)this + 2), 0, 0, 0);
  result = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 340))();
  *((_DWORD *)v1 + 3) = 0;
  *((_DWORD *)v1 + 4) = 0;
  return result;
}
