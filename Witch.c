

int __fastcall Witch::getDamageAfterMagicAbsorb(Witch *this, const EntityDamageSource *a2, int a3)
{
  EntityDamageSource *v4; // r5@1
  Witch *v5; // r4@1
  int v7; // r6@1
  int v12; // r1@1
  int v13; // r0@3
  unsigned int v17; // [sp+8h] [bp-30h]@1
  unsigned int v18; // [sp+Ch] [bp-2Ch]@1

  _R8 = a3;
  v4 = a2;
  v5 = this;
  _R7 = Mob::getDamageAfterMagicAbsorb(this, a2, a3);
  v7 = Entity::getLevel(v5);
  (*(void (__fastcall **)(unsigned int *, EntityDamageSource *))(*(_DWORD *)v4 + 32))(&v17, v4);
  __asm
  {
    VMOV            S0, R7
    VCVT.F32.S32    S16, S0
  }
  if ( (Witch *)Level::fetchEntity(v7, v12, v17, v18, 0) == v5 )
    v13 = EntityDamageSource::getCause(v4);
    __asm { VLDR            S18, =0.0 }
    if ( v13 == 13 )
      __asm { VMOVEQ.F32      S18, S16 }
  else
    __asm { VMOV.F32        S18, S16 }
    VMOV            S0, R8
    VLDR            S2, =0.15
    VCVT.F32.S32    S0, S0
    VMUL.F32        S16, S0, S2
  if ( EntityDamageSource::getCause(v4) == 14 )
    __asm { VMOVEQ.F32      S18, S16 }
    VCVTR.S32.F32   S0, S18
    VMOV            R5, S0
    VSUB.F32        S16, S18, S0
    VCMPE.F32       S16, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    _R0 = Random::_genRandInt32((Witch *)((char *)v5 + 552));
    __asm
    {
      VMOV            S0, R0
      VLDR            D1, =-2.32830644e-10
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D1
      VCVT.F32.F64    S0, D0
      VCMPE.F32       S16, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      --_R5;
  return _R5;
}


int __fastcall Witch::performRangedAttack(Witch *this, Entity *a2, float a3)
{
  Entity *v5; // r4@1
  int result; // r0@1
  float v16; // r1@2
  int v18; // r6@2
  Potion ***v20; // r0@12
  Level *v21; // r0@16
  Spawner *v22; // r5@16
  BlockSource *v23; // r6@16
  const Vec3 *v24; // r0@16
  Entity *v25; // r5@16
  void *v26; // r0@16
  void *v27; // r0@17
  void *v28; // r0@18
  int v29; // r0@20
  __int64 v30; // r2@20
  int v32; // r0@22
  ProjectileComponent *v34; // r0@22
  int v36; // r0@28
  ProjectileComponent *v42; // r6@33
  ProjectileComponent *v43; // r0@33
  Level *v45; // r0@33
  ProjectileComponent *v47; // r0@33
  BlockSource *v50; // r0@33
  int v51; // r0@33
  unsigned int *v52; // r2@41
  signed int v53; // r1@43
  unsigned int *v54; // r2@45
  signed int v55; // r1@47
  unsigned int *v56; // r2@49
  signed int v57; // r1@51
  int v58; // [sp+8h] [bp-F8h]@28
  __int64 v59; // [sp+10h] [bp-F0h]@28
  int v60; // [sp+18h] [bp-E8h]@28
  float v61; // [sp+1Ch] [bp-E4h]@31
  __int64 v62; // [sp+24h] [bp-DCh]@31
  int v63; // [sp+2Ch] [bp-D4h]@31
  __int64 v64; // [sp+30h] [bp-D0h]@24
  int v65; // [sp+38h] [bp-C8h]@24
  char v66; // [sp+40h] [bp-C0h]@22
  int v67; // [sp+44h] [bp-BCh]@16
  int v68; // [sp+48h] [bp-B8h]@17
  int v69; // [sp+4Ch] [bp-B4h]@16
  PotionItem *v70; // [sp+50h] [bp-B0h]@16
  int v71; // [sp+58h] [bp-A8h]@38
  void *v72; // [sp+74h] [bp-8Ch]@36
  void *ptr; // [sp+84h] [bp-7Ch]@34
  char v74; // [sp+98h] [bp-68h]@2

  _R5 = a2;
  v5 = this;
  result = Entity::getStatusFlag((int)this, 4);
  if ( result )
    return result;
  Entity::getAttachPos((AABB *)&v74, (int)v5, 4, 0);
  __asm { VLDR            S16, [SP,#0x100+var_64] }
  _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R5 + 52))(_R5);
  __asm { VLDR            S18, [R0] }
  _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v5 + 52))(v5);
  __asm
  {
    VLDR            S24, [R0]
    VLDR            S20, [R5,#0x118]
    VLDR            S22, [R5,#0x10C]
  }
  __asm { VLDR            S28, [R0,#8] }
    VLDR            S0, [R0,#8]
    VSUB.F32        S26, S18, S24
    VSUB.F32        S24, S28, S0
    VMUL.F32        S28, S26, S26
    VMUL.F32        S30, S24, S24
    VADD.F32        S0, S30, S28
    VMOV            R0, S0
  _R0 = mce::Math::sqrt(_R0, v16);
  __asm { VMOV            S18, R0 }
  v18 = Potion::getPotionId((Potion *)Potion::Harming);
  if ( Entity::hasCategory((int)_R5, 2) == 1 )
    __asm
    {
      VMOV.F32        S0, #8.0
      VCMPE.F32       S18, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF || Mob::hasEffect(_R5, (const MobEffect *)MobEffect::MOVEMENT_SLOWDOWN) )
      if ( Mob::getHealth(_R5) < 8 || Mob::hasEffect(_R5, (const MobEffect *)MobEffect::POISON) )
      {
        __asm
        {
          VMOV.F32        S0, #3.0
          VCMPE.F32       S18, S0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          goto LABEL_16;
        if ( Mob::hasEffect(_R5, (const MobEffect *)MobEffect::WEAKNESS) )
        _R0 = Random::_genRandInt32((Entity *)((char *)v5 + 552));
          VMOV            S0, R0
          VLDR            D1, =2.32830644e-10
          VCVT.F64.U32    D0, S0
          VMUL.F64        D0, D0, D1
          VMOV.F32        S2, #0.25
          VCVT.F32.F64    S0, D0
          VCMPE.F32       S0, S2
        if ( !(_NF ^ _VF) )
        v20 = (Potion ***)&Potion::Weakness;
      }
      else
        v20 = (Potion ***)Potion::Poison;
    else
      v20 = (Potion ***)Potion::Slowness;
    v18 = Potion::getPotionId(**v20);
LABEL_16:
  ItemInstance::ItemInstance((ItemInstance *)&v70, Item::mPotion, 1, v18);
  v21 = (Level *)Entity::getLevel(v5);
  v22 = (Spawner *)Level::getSpawner(v21);
  v23 = (BlockSource *)Entity::getRegion(v5);
  EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v67, 4194390);
  v24 = (const Vec3 *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)v5 + 52))(v5);
  v25 = Spawner::spawnProjectile(v22, v23, (const EntityDefinitionIdentifier *)&v67, v5, v24, (const Vec3 *)&Vec3::ZERO);
  v26 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v69 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v53 = __ldrex(v52);
        HIDWORD(_R6) = __strex(v53 - 1, v52);
      while ( HIDWORD(_R6) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v27 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v68 - 4);
        v55 = __ldrex(v54);
        HIDWORD(_R6) = __strex(v55 - 1, v54);
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v67 - 4);
        v57 = __ldrex(v56);
        HIDWORD(_R6) = __strex(v57 - 1, v56);
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  if ( v25 )
    PotionItem::applyEffect(v70, v25, (const ItemInstance *)&v70);
    v29 = Entity::getProjectileComponent(v25);
      VLDR            S0, =1.0e-7
    if ( !(_NF ^ _VF) )
      if ( v29 )
          VMOV            R0, S24
          VMOV            R1, S26
        v32 = mce::Math::atan2(_R0, v30);
        mce::Degree::Degree((int)&v66, v32);
        _R0 = mce::Degree::asFloat((mce::Degree *)&v66);
        __asm { VLDR            S17, [R0] }
        v34 = (ProjectileComponent *)Entity::getProjectileComponent(v25);
        LODWORD(_R0) = ProjectileComponent::getGravity(v34);
          VMOV.F32        S0, #0.5
          VLDR            S6, =0.0001
          VSUB.F32        S2, S20, S22
          VSUB.F32        S4, S22, S16
          VMUL.F32        S0, S2, S0
          VADD.F32        S2, S4, S0
          VMUL.F32        S4, S2, S2
          VADD.F32        S4, S4, S28
          VADD.F32        S4, S4, S30
          VSQRT.F32       S4, S4
          VCMPE.F32       S4, S6
        if ( _NF ^ _VF )
          HIDWORD(_R0) = Vec3::ZERO;
          v65 = dword_2822498;
          v64 = *(_QWORD *)&Vec3::ZERO;
        else
          __asm
          {
            VDIV.F32        S6, S26, S4
            VDIV.F32        S8, S2, S4
            VDIV.F32        S4, S24, S4
            VSTR            S6, [SP,#0x100+var_D0]
            VSTR            S8, [SP,#0x100+var_D0+4]
            VSTR            S4, [SP,#0x100+var_C8]
          }
          VCMPE.F32       S0, #0.0
        if ( !_ZF )
            VLDR            S4, =-90.0
            VMOV.F32        S6, #-1.125
            VADD.F32        S16, S17, S4
            VMUL.F32        S4, S0, S18
            VMUL.F32        S2, S2, S6
            VMUL.F32        S6, S4, S18
            VSUB.F32        S2, S2, S6
            VMUL.F32        S0, S2, S0
            VLDR            S2, =0.31641
            VADD.F32        S0, S0, S2
            VCMPE.F32       S0, #0.0
            VMRS            APSR_nzcv, FPSCR
          if ( _NF ^ _VF )
            v58 = -1036779520;
            __asm { VSTR            S16, [SP,#0x100+var_F4] }
            Vec3::directionFromRotation((int)&v59, COERCE_FLOAT(&v58));
            v64 = v59;
            v36 = v60;
          else
            __asm
            {
              VSQRT.F32       S18, S0
              VMOV.F32        S20, #0.5625
              VCVT.F64.F32    D1, S4
              VMOV            R6, R7, D1
              VADD.F32        S0, S18, S20
              VCVT.F64.F32    D0, S0
              VMOV            R0, R1, D0
            }
            _R0 = COERCE_UNSIGNED_INT64(atan2(_R0, _R6));
              VSUB.F32        S0, S20, S18
              VMOV            D10, R0, R1
            _R3 = &mce::Math::RADDEG;
              VMOV            R2, R12, D0
              VLDR            S0, [R3]
              VCVT.F64.F32    D9, S0
            _R0 = COERCE_UNSIGNED_INT64(atan2(COERCE_DOUBLE(__PAIR__(_R12, _R2)), _R6));
              VMOV            D0, R0, R1
              VMUL.F64        D1, D9, D10
              VMUL.F64        D0, D0, D9
              VCVT.F32.F64    S2, D1
              VCVT.F32.F64    S0, D0
              VCMPE.F32       S2, S0
              VMRS            APSR_nzcv, FPSCR
            if ( _NF ^ _VF )
              __asm { VMOVLT.F32      S0, S2 }
              VNEG.F32        S0, S0
              VSTR            S0, [SP,#0x100+var_E4]
              VSTR            S16, [SP,#0x100+var_E0]
            Vec3::directionFromRotation((int)&v62, COERCE_FLOAT(&v61));
            v64 = v62;
            v36 = v63;
          v65 = v36;
        v42 = (ProjectileComponent *)Entity::getProjectileComponent(v25);
        v43 = (ProjectileComponent *)Entity::getProjectileComponent(v25);
        _R7 = ProjectileComponent::getUncertaintyBase(v43);
        v45 = (Level *)Entity::getLevel(v5);
        _R0 = Level::getDifficulty(v45);
          VCVT.F32.S32    S16, S0
        v47 = (ProjectileComponent *)Entity::getProjectileComponent(v25);
        _R0 = ProjectileComponent::getUncertaintyMultiplier(v47);
          VMOV            S2, R0
          VMOV            S0, R7
          VMUL.F32        S2, S2, S16
          VSUB.F32        S0, S0, S2
          VMOV            R3, S0
        ProjectileComponent::shoot(v42, (const Vec3 *)&v64, 0.75, _R3, (const Vec3 *)&Vec3::ZERO, 0);
        v50 = (BlockSource *)Entity::getRegion(v5);
        v51 = BlockSource::getLevel(v50);
        Level::broadcastEntityEvent(v51, (int)v5, 30, 0);
  if ( ptr )
    operator delete(ptr);
  if ( v72 )
    operator delete(v72);
  result = v71;
  if ( v71 )
    result = (*(int (**)(void))(*(_DWORD *)v71 + 4))();
  return result;
}


void __fastcall Witch::~Witch(Witch *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall Witch::canAttack(Witch *this, Entity *a2, bool a3)
{
  return 1;
}


int __fastcall Witch::onSizeUpdated(int result)
{
  __asm
  {
    VLDR            S0, =0.85
    VLDR            S2, [R0,#0x134]
    VLDR            S4, =0.9
    VMUL.F32        S0, S2, S0
  }
  *(_DWORD *)(result + 364) = 0;
    VMUL.F32        S2, S2, S4
    VSTR            S0, [R0,#0x170]
  *(_DWORD *)(result + 372) = 0;
  *(_DWORD *)(result + 376) = 0;
  __asm { VSTR            S2, [R0,#0x17C] }
  *(_DWORD *)(result + 384) = 0;
  *(_DWORD *)(result + 388) = 0;
  __asm { VSTR            S2, [R0,#0x188] }
  *(_DWORD *)(result + 396) = 0;
  return result;
}


HumanoidMonster *__fastcall Witch::Witch(HumanoidMonster *a1, EntityDefinitionGroup *a2, const EntityDefinitionIdentifier *a3)
{
  HumanoidMonster *v3; // r4@1
  int v4; // r6@2
  _BYTE *v5; // r0@2
  signed __int16 v6; // r5@2
  int v7; // r1@2
  unsigned int v8; // r0@4

  v3 = a1;
  HumanoidMonster::HumanoidMonster(a1, a2, a3);
  *(_DWORD *)v3 = &off_26FB3E0;
  *((_DWORD *)v3 + 62) = 54;
  if ( !SynchedEntityData::_find((HumanoidMonster *)((char *)v3 + 176), 26) )
  {
    SynchedEntityData::_resizeToContain((HumanoidMonster *)((char *)v3 + 176), 26);
    v4 = *((_DWORD *)v3 + 44);
    v5 = operator new(0xCu);
    v6 = 26;
    v5[4] = 0;
    *((_WORD *)v5 + 3) = 26;
    v5[8] = 1;
    *(_DWORD *)v5 = &off_26F1394;
    v5[9] = 0;
    v7 = *(_DWORD *)(v4 + 104);
    *(_DWORD *)(v4 + 104) = v5;
    if ( v7 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
    v8 = *((_WORD *)v3 + 94);
    if ( v8 >= 0x1A )
      LOWORD(v8) = 26;
    *((_WORD *)v3 + 94) = v8;
    if ( (unsigned int)*((_WORD *)v3 + 95) > 0x1A )
      v6 = *((_WORD *)v3 + 95);
    *((_WORD *)v3 + 95) = v6;
  }
  return v3;
}


int __fastcall Witch::aiStep(Witch *this)
{
  Witch *v1; // r4@1
  BlockSource *v2; // r0@1
  Level *v3; // r0@1
  PathNavigation *v4; // r5@3
  int v5; // r0@3
  bool v6; // r1@3
  int v7; // r1@7
  ItemInstance *v8; // r0@8
  int v9; // r0@9
  char *v10; // r0@9
  BlockSource *v11; // r0@9
  int v12; // r0@9
  int v13; // r5@9
  unsigned int *v14; // r1@10
  unsigned int v15; // r0@12
  int v22; // r6@25
  Potion ***v23; // r0@26
  const Entity *v25; // r0@31
  int v27; // r3@35
  void (__fastcall *v28)(Witch *, char *); // r6@36
  int v29; // r0@42
  int v30; // r5@42
  int v31; // r0@42
  int v33; // r0@47
  Level *v34; // r0@47
  int v35; // r0@47
  int v36; // r0@53
  unsigned int *v37; // r0@54
  unsigned int v38; // r1@56
  int v39; // r5@59
  unsigned int *v40; // r1@60
  unsigned int v41; // r0@62
  unsigned int *v42; // r6@66
  unsigned int v43; // r0@68
  unsigned int *v44; // r0@74
  unsigned int v45; // r1@76
  int v46; // r5@79
  unsigned int *v47; // r1@80
  unsigned int v48; // r0@82
  unsigned int *v49; // r6@86
  unsigned int v50; // r0@88
  unsigned int *v51; // r6@96
  unsigned int v52; // r0@98
  void (__fastcall *v53)(Witch *, char *); // r6@103
  Level *v54; // r0@115
  int v55; // r0@115
  AttributeInstance *v56; // r0@115
  unsigned int *v57; // r1@116
  unsigned int v58; // r2@118
  int v59; // r5@121
  unsigned int *v60; // r1@122
  unsigned int v61; // r0@124
  unsigned int *v62; // r6@128
  unsigned int v63; // r0@130
  BlockSource *v65; // r0@143
  int v66; // r0@143
  int v68; // [sp+0h] [bp-258h]@73
  int v69; // [sp+4h] [bp-254h]@73
  int v70; // [sp+8h] [bp-250h]@53
  int v71; // [sp+Ch] [bp-24Ch]@53
  char v72; // [sp+10h] [bp-248h]@53
  char v73; // [sp+60h] [bp-1F8h]@47
  void **v74; // [sp+68h] [bp-1F0h]@47
  signed int v75; // [sp+6Ch] [bp-1ECh]@47
  signed int v76; // [sp+70h] [bp-1E8h]@47
  char v77; // [sp+74h] [bp-1E4h]@47
  __int64 v78; // [sp+78h] [bp-1E0h]@47
  int v79; // [sp+80h] [bp-1D8h]@47
  int v80; // [sp+88h] [bp-1D0h]@51
  void *v81; // [sp+A4h] [bp-1B4h]@49
  void *v82; // [sp+B4h] [bp-1A4h]@47
  int v83; // [sp+C8h] [bp-190h]@47
  int v84; // [sp+CCh] [bp-18Ch]@47
  int v85; // [sp+D0h] [bp-188h]@47
  char v86; // [sp+D4h] [bp-184h]@47
  char v87; // [sp+D8h] [bp-180h]@36
  int v88; // [sp+E0h] [bp-178h]@40
  void *v89; // [sp+FCh] [bp-15Ch]@38
  void *ptr; // [sp+10Ch] [bp-14Ch]@36
  int v91; // [sp+120h] [bp-138h]@115
  int v92; // [sp+124h] [bp-134h]@115
  char v93; // [sp+128h] [bp-130h]@109
  int v94; // [sp+130h] [bp-128h]@113
  void *v95; // [sp+14Ch] [bp-10Ch]@111
  void *v96; // [sp+15Ch] [bp-FCh]@109
  char v97; // [sp+170h] [bp-E8h]@109
  void **v98; // [sp+178h] [bp-E0h]@109
  int v99; // [sp+17Ch] [bp-DCh]@109
  int v100; // [sp+180h] [bp-D8h]@109
  char v101; // [sp+184h] [bp-D4h]@109
  __int64 v102; // [sp+188h] [bp-D0h]@109
  int v103; // [sp+190h] [bp-C8h]@109
  int v104; // [sp+198h] [bp-C0h]@139
  void *v105; // [sp+1B4h] [bp-A4h]@137
  void *v106; // [sp+1C4h] [bp-94h]@135
  int v107; // [sp+1D8h] [bp-80h]@109
  int v108; // [sp+1DCh] [bp-7Ch]@109
  int v109; // [sp+1E0h] [bp-78h]@109
  char v110; // [sp+1E4h] [bp-74h]@109
  char v111; // [sp+1E8h] [bp-70h]@103
  int v112; // [sp+1F0h] [bp-68h]@107
  void *v113; // [sp+20Ch] [bp-4Ch]@105
  void *v114; // [sp+21Ch] [bp-3Ch]@103
  Potion *v115; // [sp+230h] [bp-28h]@9
  int v116; // [sp+234h] [bp-24h]@9

  v1 = this;
  v2 = (BlockSource *)Entity::getRegion(this);
  v3 = (Level *)BlockSource::getLevel(v2);
  if ( Level::isClientSide(v3) )
    return Monster::aiStep(v1);
  if ( Mob::getNavigation(v1) )
  {
    v4 = (PathNavigation *)Mob::getNavigation(v1);
    v5 = Entity::getTarget(v1);
    v6 = 0;
    if ( !v5 )
      v6 = 1;
    PathNavigation::setAvoidWater(v4, v6);
  }
  if ( Entity::getStatusFlag((int)v1, 4) == 1 )
    v7 = *((_DWORD *)v1 + 1076);
    *((_DWORD *)v1 + 1076) = v7 - 1;
    if ( v7 <= 0 )
    {
      Entity::setStatusFlag((int)v1, 4, 0);
      v8 = (ItemInstance *)(*(int (__fastcall **)(Witch *))(*(_DWORD *)v1 + 908))(v1);
      if ( *(_DWORD *)v8 == Item::mPotion )
      {
        v9 = ItemInstance::getAuxValue(v8);
        Potion::getPotion((Potion *)&v115, v9);
        v10 = Potion::getMobEffect(v115);
        Mob::addEffect(v1, (const MobEffectInstance *)v10);
        v11 = (BlockSource *)Entity::getRegion(v1);
        v12 = BlockSource::getLevel(v11);
        Level::broadcastEntityEvent(v12, (int)v1, 29, 0);
        v13 = v116;
        if ( v116 )
        {
          v14 = (unsigned int *)(v116 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
          }
          else
            v15 = (*v14)--;
          if ( v15 == 1 )
            v51 = (unsigned int *)(v13 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
            if ( &pthread_create )
            {
              __dmb();
              do
                v52 = __ldrex(v51);
              while ( __strex(v52 - 1, v51) );
            }
            else
              v52 = (*v51)--;
            if ( v52 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
        }
      }
      v53 = *(void (__fastcall **)(Witch *, char *))(*(_DWORD *)v1 + 912);
      ItemInstance::ItemInstance((int)&v111);
      v53(v1, &v111);
      if ( v114 )
        operator delete(v114);
      if ( v113 )
        operator delete(v113);
      if ( v112 )
        (*(void (**)(void))(*(_DWORD *)v112 + 4))();
      v112 = 0;
      Entity::getRuntimeID((Entity *)&v97, (int)v1);
      ItemInstance::ItemInstance((int)&v93);
      v99 = 2;
      v100 = 1;
      v101 = 0;
      v98 = &off_26DA648;
      v102 = *(_QWORD *)&v97;
      ItemInstance::ItemInstance((ItemInstance *)&v103, (int)&v93);
      v110 = 0;
      v109 = 0;
      v107 = 0;
      v108 = 0;
      if ( v96 )
        operator delete(v96);
      if ( v95 )
        operator delete(v95);
      if ( v94 )
        (*(void (**)(void))(*(_DWORD *)v94 + 4))();
      v94 = 0;
      v54 = (Level *)Entity::getLevel(v1);
      v55 = Level::getPacketSender(v54);
      (*(void (**)(void))(*(_DWORD *)v55 + 8))();
      v56 = (AttributeInstance *)(*(int (__fastcall **)(Witch *, void *))(*(_DWORD *)v1 + 1000))(
                                   v1,
                                   &SharedAttributes::MOVEMENT_SPEED);
      v91 = Witch::SPEED_MODIFIER_DRINKING;
      v92 = dword_2801104;
      if ( dword_2801104 )
        v57 = (unsigned int *)(dword_2801104 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v58 = __ldrex(v57);
          while ( __strex(v58 + 1, v57) );
        else
          ++*v57;
      AttributeInstance::removeModifier(v56, (const AttributeModifier **)&v91);
      v59 = v92;
      if ( v92 )
        v60 = (unsigned int *)(v92 + 4);
            v61 = __ldrex(v60);
          while ( __strex(v61 - 1, v60) );
          v61 = (*v60)--;
        if ( v61 == 1 )
          v62 = (unsigned int *)(v59 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v59 + 8))(v59);
              v63 = __ldrex(v62);
            while ( __strex(v63 - 1, v62) );
            v63 = (*v62)--;
          if ( v63 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v59 + 12))(v59);
      if ( v106 )
        operator delete(v106);
      if ( v105 )
        operator delete(v105);
      if ( v104 )
        (*(void (**)(void))(*(_DWORD *)v104 + 4))();
    }
    goto LABEL_141;
  _R0 = Random::_genRandInt32((Witch *)((char *)v1 + 552));
  __asm
    VMOV            S0, R0
    VLDR            D8, =2.32830644e-10
    VLDR            S18, =0.15
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D8
    VCVT.F32.F64    S0, D0
    VCMPE.F32       S0, S18
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF
    && (*(int (__fastcall **)(Witch *, signed int))(*(_DWORD *)v1 + 220))(v1, 5) == 1
    && !Mob::hasEffect(v1, (const MobEffect *)MobEffect::WATER_BREATHING) )
    v23 = (Potion ***)Potion::WaterBreathing;
LABEL_35:
    v27 = Potion::getPotionId(**v23);
    if ( v27 >= 0 )
      v28 = *(void (__fastcall **)(Witch *, char *))(*(_DWORD *)v1 + 912);
      ItemInstance::ItemInstance((ItemInstance *)&v87, Item::mPotion, 1, v27);
      v28(v1, &v87);
      if ( ptr )
        operator delete(ptr);
      if ( v89 )
        operator delete(v89);
      if ( v88 )
        (*(void (**)(void))(*(_DWORD *)v88 + 4))();
      v88 = 0;
      v29 = (*(int (__fastcall **)(Witch *))(*(_DWORD *)v1 + 908))(v1);
      v30 = v29;
      v31 = *(_BYTE *)(v29 + 15);
      _ZF = v31 == 0;
      if ( v31 )
        _ZF = *(_DWORD *)v30 == 0;
      if ( !_ZF && !ItemInstance::isNull((ItemInstance *)v30) && *(_BYTE *)(v30 + 14) )
        *((_DWORD *)v1 + 1076) = *(_DWORD *)(*(_DWORD *)v30 + 36);
        Entity::setStatusFlag((int)v1, 4, 1);
        Entity::getRuntimeID((Entity *)&v73, (int)v1);
        v33 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v1 + 908))(v1);
        v75 = 2;
        v76 = 1;
        v77 = 0;
        v74 = &off_26DA648;
        v78 = *(_QWORD *)&v73;
        ItemInstance::ItemInstance((ItemInstance *)&v79, v33);
        v86 = 0;
        v85 = 0;
        v83 = 0;
        v84 = 0;
        v34 = (Level *)Entity::getLevel(v1);
        v35 = Level::getPacketSender(v34);
        (*(void (**)(void))(*(_DWORD *)v35 + 8))();
        if ( v82 )
          operator delete(v82);
        if ( v81 )
          operator delete(v81);
        if ( v80 )
          (*(void (**)(void))(*(_DWORD *)v80 + 4))();
      v36 = (*(int (__fastcall **)(Witch *, void *))(*(_DWORD *)v1 + 1004))(v1, &SharedAttributes::MOVEMENT_SPEED);
      AttributeInstance::AttributeInstance((int)&v72, v36);
      v70 = Witch::SPEED_MODIFIER_DRINKING;
      v71 = dword_2801104;
        v37 = (unsigned int *)(dword_2801104 + 4);
            v38 = __ldrex(v37);
          while ( __strex(v38 + 1, v37) );
          ++*v37;
      AttributeInstance::removeModifier((AttributeInstance *)&v72, (const AttributeModifier **)&v70);
      v39 = v71;
      if ( v71 )
        v40 = (unsigned int *)(v71 + 4);
            v41 = __ldrex(v40);
          while ( __strex(v41 - 1, v40) );
          v41 = (*v40)--;
        if ( v41 == 1 )
          v42 = (unsigned int *)(v39 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 8))(v39);
              v43 = __ldrex(v42);
            while ( __strex(v43 - 1, v42) );
            v43 = (*v42)--;
          if ( v43 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 12))(v39);
      v68 = Witch::SPEED_MODIFIER_DRINKING;
      v69 = dword_2801104;
        v44 = (unsigned int *)(dword_2801104 + 4);
            v45 = __ldrex(v44);
          while ( __strex(v45 + 1, v44) );
          ++*v44;
      AttributeInstance::addModifier((AttributeInstance *)&v72, (const AttributeModifier **)&v68);
      v46 = v69;
      if ( v69 )
        v47 = (unsigned int *)(v69 + 4);
            v48 = __ldrex(v47);
          while ( __strex(v48 - 1, v47) );
          v48 = (*v47)--;
        if ( v48 == 1 )
          v49 = (unsigned int *)(v46 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v46 + 8))(v46);
              v50 = __ldrex(v49);
            while ( __strex(v50 - 1, v49) );
            v50 = (*v49)--;
          if ( v50 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v46 + 12))(v46);
      AttributeInstance::~AttributeInstance((AttributeInstance *)&v72);
    && ((*(int (__fastcall **)(Witch *))(*(_DWORD *)v1 + 320))(v1)
     || (*(int (__fastcall **)(Witch *))(*(_DWORD *)v1 + 324))(v1) == 1)
    && !Mob::hasEffect(v1, (const MobEffect *)MobEffect::FIRE_RESISTANCE) )
    v23 = (Potion ***)Potion::FireResistance;
    goto LABEL_35;
    VLDR            S2, =0.05
    VCMPE.F32       S0, S2
  if ( _NF ^ _VF )
    v22 = Mob::getHealth(v1);
    if ( v22 < Mob::getMaxHealth(v1) )
      v23 = (Potion ***)Potion::Healing;
      goto LABEL_35;
    VMOV.F32        S2, #0.25
    if ( Entity::getTarget(v1) )
      if ( !Mob::hasEffect(v1, (const MobEffect *)MobEffect::MOVEMENT_SPEED) )
        v25 = (const Entity *)Entity::getTarget(v1);
        _R0 = Entity::distanceToSqr(v1, v25);
        __asm
          VLDR            S0, =121.0
          VMOV            S2, R0
          VCMPE.F32       S2, S0
          VMRS            APSR_nzcv, FPSCR
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          v23 = (Potion ***)Potion::Swiftness;
          goto LABEL_35;
LABEL_141:
    VLDR            D1, =2.32830644e-10
    VMUL.F64        D0, D0, D1
    VLDR            S2, =0.00075
    v65 = (BlockSource *)Entity::getRegion(v1);
    v66 = BlockSource::getLevel(v65);
    Level::broadcastEntityEvent(v66, (int)v1, 24, 0);
  return Monster::aiStep(v1);
}


void __fastcall Witch::handleEntityEvent(int a1, signed int a2, Mob *a3)
{
  int v3; // r10@1
  signed int v8; // r4@4
  BlockSource *v12; // r0@5
  int v13; // r6@5
  char *v15; // r5@7
  int v16; // r0@7
  int v17; // r1@7
  char v18; // [sp+Ch] [bp-74h]@7
  char v19; // [sp+18h] [bp-68h]@8
  float v20; // [sp+24h] [bp-5Ch]@5

  v3 = a1;
  if ( a2 == 30 )
  {
    v15 = &v18;
    Entity::getAttachPos((AABB *)&v18, a1, 2, 0);
    v16 = v3;
    v17 = 39;
LABEL_9:
    Entity::playSound(v16, v17, (int)v15);
    return;
  }
  if ( a2 == 29 )
    v15 = &v19;
    Entity::getAttachPos((AABB *)&v19, a1, 3, 0);
    v17 = 30;
    goto LABEL_9;
  if ( a2 == 24 )
    Random::_genRandInt32((Random *)(a1 + 552));
    __asm
    {
      VMOV.F32        S16, #0.5
      VLDR            S18, =0.13
    }
    v8 = -1;
    do
      _R7 = Random::nextGaussian((Random *)(v3 + 552));
      _R0 = Random::nextGaussian((Random *)(v3 + 552));
      __asm
      {
        VMOV            S0, R0
        VMOV            S20, R7
        VMUL.F32        S22, S0, S18
      }
      v12 = (BlockSource *)Entity::getRegion((Entity *)v3);
      v13 = BlockSource::getLevel(v12);
        VMOV            S0, R7
        VMUL.F32        S20, S20, S18
        VADD.F32        S22, S22, S16
        VMUL.F32        S24, S0, S18
      _R0 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 52))(v3);
        VLDR            S0, [R0]
        VLDR            S2, [R0,#4]
        VLDR            S4, [R0,#8]
        VADD.F32        S0, S0, S20
        VADD.F32        S2, S22, S2
        VADD.F32        S4, S4, S24
        VSTR            S0, [SP,#0x80+var_5C]
        VSTR            S2, [SP,#0x80+var_58]
        VSTR            S4, [SP,#0x80+var_54]
      Level::addParticle(v13, 37, (int)&v20);
      ++v8;
    while ( v8 < (signed int)(Random::_genRandInt32((Random *)(v3 + 552)) % 0x23 + 9) );
  else
    j_j_j__ZN3Mob17handleEntityEventE11EntityEventi((MinecraftEventing *)a1, a2, a3);
}


signed int __fastcall Witch::getEntityTypeId(Witch *this)
{
  return 2861;
}


void __fastcall Witch::~Witch(Witch *this)
{
  Witch::~Witch(this);
}


void __fastcall Witch::handleEntityEvent(int a1, signed int a2, Mob *a3)
{
  Witch::handleEntityEvent(a1, a2, a3);
}
