

unsigned int __fastcall Villager::onLightningHit(Villager *this)
{
  Villager *v1; // r4@1
  unsigned int result; // r0@1
  int (__fastcall *v3)(Villager *, signed int, char *, signed int); // r6@2
  char v4; // [sp+8h] [bp-20h]@2

  v1 = this;
  result = Entity::isBaby(this);
  if ( !result )
  {
    v3 = *(int (__fastcall **)(Villager *, signed int, char *, signed int))(*(_DWORD *)v1 + 556);
    Entity::getAttachPos((AABB *)&v4, (int)v1, 3, 0);
    result = v3(v1, 16, &v4, -1);
  }
  return result;
}


int __fastcall Villager::_getRecipeChance(Villager *this, float _R1)
{
  int result; // r0@3

  _R0 = (char *)this + 4292;
  __asm
  {
    VMOV            S0, R1
    VLDR            S4, =1.8
    VLDR            S2, [R0]
    VADD.F32        S0, S2, S0
    VMOV.F32        S2, #9.0
    VSUB.F32        S4, S4, S0
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S4 }
  __asm { VMOV            R0, S0 }
  return result;
}


int __fastcall Villager::_addParticlesAroundSelf(int a1, int a2)
{
  Random *v7; // r6@1
  int v8; // r10@1
  signed int v9; // r11@1
  unsigned int v11; // r0@2
  int v17; // r0@2
  int result; // r0@2
  float v19; // [sp+1Ch] [bp-74h]@2

  __asm { VMOV.F32        S21, #1.0 }
  _R5 = (Entity *)a1;
  v7 = (Random *)(a1 + 552);
  __asm
  {
    VLDR            D8, =2.32830644e-10
    VLDR            S20, =0.02
  }
  v8 = a2;
  v9 = 5;
  do
    __asm { VLDR            S22, [R5,#0x48] }
    _R7 = Random::_genRandInt32(v7);
    __asm
    {
      VLDR            S24, [R5,#0x4C]
      VLDR            S26, [R5,#0x130]
    }
    v11 = Random::_genRandInt32(v7);
    __asm { VMOV            S0, R7 }
    _R4 = v11;
      VLDR            S28, [R5,#0x50]
      VLDR            S30, [R5,#0x134]
      VCVT.F64.U32    D9, S0
    _R0 = Random::_genRandInt32(v7);
      VMOV            S0, R0
      VMOV            S2, R4
      VCVT.F64.U32    D0, S0
      VCVT.F64.U32    D1, S2
      VMUL.F64        D2, D9, D8
      VMUL.F64        D0, D0, D8
      VMUL.F64        D1, D1, D8
      VCVT.F32.F64    S4, D2
      VCVT.F32.F64    S0, D0
      VADD.F32        S4, S4, S4
      VLDR            S6, [R5,#0x130]
      VCVT.F32.F64    S2, D1
      VADD.F32        S0, S0, S0
      VSUB.F32        S18, S22, S26
      VADD.F32        S22, S24, S21
      VSUB.F32        S24, S28, S6
      VMUL.F32        S28, S2, S30
      VMUL.F32        S26, S26, S4
      VMUL.F32        S30, S6, S0
    _R0 = Random::nextGaussian(v7);
    __asm { VMOV            S19, R0 }
      VMOV            S23, R0
      VMUL.F32        S19, S19, S20
      VADD.F32        S18, S18, S26
      VADD.F32        S22, S22, S28
      VADD.F32        S24, S24, S30
      VMUL.F32        S26, S23, S20
      VMUL.F32        S28, S0, S20
    v17 = Entity::getLevel(_R5);
      VSTR            S18, [SP,#0x90+var_74]
      VSTR            S22, [SP,#0x90+var_70]
      VSTR            S19, [SP,#0x90+var_80]
      VSTR            S26, [SP,#0x90+var_7C]
      VSTR            S24, [SP,#0x90+var_6C]
      VSTR            S28, [SP,#0x90+var_78]
    result = Level::addParticle(v17, v8, (int)&v19);
    --v9;
  while ( v9 );
  return result;
}


void __fastcall Villager::~Villager(Villager *this)
{
  Villager::~Villager(this);
}


void __fastcall Villager::~Villager(Villager *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall Villager::interactPreventDefault(Villager *this)
{
  return 1;
}


void __fastcall Villager::addAdditionalSaveData(Villager *this, CompoundTag *a2)
{
  Villager::addAdditionalSaveData(this, a2);
}


signed int __fastcall Villager::getEntityTypeId(Villager *this)
{
  return 783;
}


int __fastcall Villager::setChasing(int result, bool a2)
{
  *(_BYTE *)(result + 4300) = a2;
  return result;
}


signed int __fastcall Villager::isWillingToBreed(Villager *this, int a2)
{
  Villager *v2; // r2@1
  signed int result; // r0@1
  bool v4; // zf@1
  signed int v5; // r1@6

  v2 = this;
  result = *((_BYTE *)this + 4301);
  v4 = result == 0;
  if ( result )
    result = 1;
  else
    v4 = a2 == 1;
  if ( v4 )
  {
    v5 = Villager::getBreedingStackIndex(v2);
    result = 0;
    if ( v5 > -1 )
      result = 1;
  }
  return result;
}


void __fastcall Villager::addAdditionalSaveData(Villager *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  Villager *v3; // r5@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  Mob::addAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v7, "Willing");
  CompoundTag::putBoolean((int)v2, (const void **)&v7, *((_BYTE *)v3 + 4301));
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


void __fastcall Villager::die(Villager *this, const EntityDamageSource *a2)
{
  Villager *v2; // r9@1
  int v3; // r5@1
  const EntityDamageSource *v4; // r8@1
  bool v5; // zf@1
  unsigned int *v6; // r0@4
  Village *v7; // r6@4
  unsigned int v8; // r1@4
  unsigned int v9; // r2@7
  unsigned int v10; // r3@8
  unsigned int v11; // r1@9
  unsigned int *v12; // r7@17
  unsigned int v13; // r0@19
  int v14; // r7@24
  int v15; // r1@24
  int v16; // r0@24
  Entity *v17; // r7@24
  unsigned __int64 *v18; // r0@26
  Dimension *v19; // r0@27
  unsigned int v20; // [sp+8h] [bp-28h]@24
  unsigned int v21; // [sp+Ch] [bp-24h]@24

  v2 = this;
  v3 = *((_DWORD *)this + 1042);
  v4 = a2;
  v5 = v3 == 0;
  if ( v3 )
    v5 = *(_DWORD *)(v3 + 4) == 0;
  if ( !v5 )
  {
    v6 = (unsigned int *)(v3 + 4);
    v7 = 0;
    v8 = *(_DWORD *)(v3 + 4);
    while ( v8 )
    {
      __dmb();
      v9 = __ldrex(v6);
      if ( v9 == v8 )
      {
        v10 = __strex(v8 + 1, v6);
        v8 = v9;
        if ( !v10 )
        {
          __dmb();
          v11 = *v6;
          v7 = (Village *)*((_DWORD *)v2 + 1041);
          if ( !*v6 )
            v7 = (Village *)*v6;
          if ( &pthread_create )
          {
            __dmb();
            do
              v11 = __ldrex(v6);
            while ( __strex(v11 - 1, v6) );
          }
          else
            *v6 = v11 - 1;
          if ( v11 == 1 )
            v12 = (unsigned int *)(v3 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
            if ( &pthread_create )
            {
              __dmb();
              do
                v13 = __ldrex(v12);
              while ( __strex(v13 - 1, v12) );
            }
            else
              v13 = (*v12)--;
            if ( v13 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
          break;
        }
      }
      else
        __clrex();
    }
    v14 = Entity::getLevel(v2);
    (*(void (__fastcall **)(unsigned int *, const EntityDamageSource *))(*(_DWORD *)v4 + 32))(&v20, v4);
    v16 = Level::fetchEntity(v14, v15, v20, v21, 0);
    v17 = (Entity *)v16;
    if ( v16 )
      if ( Entity::hasCategory(v16, 1) == 1 )
        v18 = (unsigned __int64 *)Entity::getUniqueID(v17);
        Village::modifyStanding((unsigned int)v7, v18, -2);
        goto LABEL_31;
      if ( Entity::hasCategory((int)v17, 4) != 1 )
    else
      v19 = (Dimension *)Entity::getDimension(v2);
      if ( !Dimension::fetchNearestPlayer(v19, v2, 16.0) )
    Village::resetNoBreedTimer(v7);
  }
LABEL_31:
  Mob::die(v2, v4);
}


int __fastcall Villager::consumeLoveFood(Villager *this)
{
  Entity *v1; // r5@1
  signed int v2; // r4@1
  int result; // r0@1
  bool v4; // zf@2
  int v5; // r0@5
  bool v6; // zf@5
  int v7; // [sp+0h] [bp-58h]@5
  int v8; // [sp+8h] [bp-50h]@21
  char v9; // [sp+Eh] [bp-4Ah]@9
  char v10; // [sp+Fh] [bp-49h]@5
  void *v11; // [sp+24h] [bp-34h]@19
  void *ptr; // [sp+34h] [bp-24h]@17

  v1 = this;
  v2 = Villager::getBreedingStackIndex(this);
  result = Entity::getContainerComponent(v1);
  if ( v2 >= 0 )
  {
    v4 = result == 0;
    if ( result )
    {
      v1 = *(Entity **)(result + 4);
      v4 = v1 == 0;
    }
    if ( !v4 )
      v5 = (*(int (__fastcall **)(Entity *, signed int))(*(_DWORD *)v1 + 16))(v1, v2);
      ItemInstance::ItemInstance((ItemInstance *)&v7, v5);
      v6 = v10 == 0;
      if ( v10 )
        v6 = v7 == 0;
      if ( !v6 && !ItemInstance::isNull((ItemInstance *)&v7) && v9 )
      {
        if ( v7 == Item::mBread )
        {
          ItemInstance::add((ItemInstance *)&v7, -3);
        }
        else if ( v7 == Item::mCarrot || v7 == Item::mPotato || v7 == Item::mBeetroot )
          ItemInstance::add((ItemInstance *)&v7, -12);
        (*(void (__fastcall **)(Entity *, signed int, int *))(*(_DWORD *)v1 + 32))(v1, v2, &v7);
      }
      if ( ptr )
        operator delete(ptr);
      if ( v11 )
        operator delete(v11);
      result = v8;
      if ( v8 )
        result = (*(int (**)(void))(*(_DWORD *)v8 + 4))();
  }
  return result;
}


TradeableComponent *__fastcall Villager::newServerAiStep(Villager *this)
{
  Villager *v1; // r4@1
  int v2; // r1@1
  BlockSource *v4; // r0@4
  Level *v5; // r0@4
  Villages *v6; // r5@4
  int v7; // r6@4
  int v9; // r0@8
  bool v10; // zf@8
  unsigned int *v11; // r0@7
  unsigned int v12; // r1@7
  unsigned int v13; // r2@15
  unsigned int v14; // r3@16
  unsigned int v15; // r1@17
  Village *v16; // r10@17
  unsigned int *v17; // r7@26
  unsigned int v18; // r0@28
  int v19; // r5@33
  unsigned int *v20; // r8@33
  unsigned int v21; // r1@34
  unsigned int *v22; // r0@34
  unsigned int v23; // r2@37
  unsigned int v24; // r3@38
  unsigned int v25; // r1@39
  unsigned int v26; // r6@39
  unsigned int *v27; // r7@49
  unsigned int v28; // r0@51
  __int64 v29; // r0@58
  int *v30; // r6@59
  int v31; // r7@59
  unsigned int *v32; // r0@60
  unsigned int v33; // r1@62
  int v34; // r0@65
  unsigned int *v35; // r2@66
  unsigned int v36; // r1@68
  unsigned __int64 *v37; // r0@73
  char *v38; // r6@76
  float v43; // r1@76
  int v46; // r0@77
  unsigned int *v47; // r2@78
  unsigned int v48; // r1@80
  Village *v50; // [sp+4h] [bp-34h]@4
  int v51; // [sp+8h] [bp-30h]@4
  char v52; // [sp+Ch] [bp-2Ch]@4

  v1 = this;
  v2 = *((_DWORD *)this + 1074);
  _VF = __OFSUB__(v2--, 1);
  *((_DWORD *)this + 1074) = v2;
  if ( (unsigned __int8)((v2 < 0) ^ _VF) | (v2 == 0) && !*((_DWORD *)this + 9) )
  {
    v4 = (BlockSource *)Entity::getRegion(this);
    v5 = (Level *)BlockSource::getLevel(v4);
    v6 = *(Villages **)Level::getVillages(v5);
    BlockPos::BlockPos((int)&v52, (int)v1 + 72);
    Villages::submitFindDoorQuery(v6, (const BlockPos *)&v52);
    *((_DWORD *)v1 + 1074) = Random::_genRandInt32((Villager *)((char *)v1 + 552)) % 0x32 + 70;
    (*(void (__fastcall **)(Village **, Villages *, char *, signed int))(*(_DWORD *)v6 + 28))(&v50, v6, &v52, 32);
    v7 = v51;
    _ZF = v51 == 0;
    if ( v51 )
      _ZF = *(_DWORD *)(v51 + 4) == 0;
    if ( _ZF )
    {
      v9 = *((_DWORD *)v1 + 1042);
      v10 = v9 == 0;
      if ( v9 )
        v10 = *(_DWORD *)(v9 + 4) == 0;
      if ( v10 )
        Entity::clearRestriction(v1);
    }
    else
      v11 = (unsigned int *)(v51 + 4);
      v12 = *(_DWORD *)(v51 + 4);
      do
      {
        while ( 1 )
        {
          if ( !v12 )
          {
            v16 = 0;
            goto LABEL_33;
          }
          __dmb();
          v13 = __ldrex(v11);
          if ( v13 == v12 )
            break;
          __clrex();
          v12 = v13;
        }
        v14 = __strex(v12 + 1, v11);
        v12 = v13;
      }
      while ( v14 );
      __dmb();
      v15 = *v11;
      v16 = v50;
      if ( !*v11 )
        v16 = (Village *)*v11;
      if ( &pthread_create )
        __dmb();
        do
          v15 = __ldrex(v11);
        while ( __strex(v15 - 1, v11) );
      else
        *v11 = v15 - 1;
      if ( v15 == 1 )
        v17 = (unsigned int *)(v7 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
        if ( &pthread_create )
          do
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
        else
          v18 = (*v17)--;
        if ( v18 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
LABEL_33:
      v19 = *((_DWORD *)v1 + 1042);
      v20 = (unsigned int *)((char *)v1 + 4164);
      if ( v19 )
        v21 = *(_DWORD *)(v19 + 4);
        v22 = (unsigned int *)(v19 + 4);
          while ( 1 )
            if ( !v21 )
            {
              v26 = 0;
              goto LABEL_56;
            }
            __dmb();
            v23 = __ldrex(v22);
            if ( v23 == v21 )
              break;
            __clrex();
            v21 = v23;
          v24 = __strex(v21 + 1, v22);
          v21 = v23;
        while ( v24 );
        v25 = *v22;
        v26 = *v20;
        if ( !*v22 )
          v26 = *v22;
            v25 = __ldrex(v22);
          while ( __strex(v25 - 1, v22) );
          *v22 = v25 - 1;
        if ( v25 == 1 )
          v27 = (unsigned int *)(v19 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
          if ( &pthread_create )
            do
              v28 = __ldrex(v27);
            while ( __strex(v28 - 1, v27) );
          else
            v28 = (*v27)--;
          if ( v28 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
        v26 = 0;
LABEL_56:
      if ( (Village *)v26 != v16 )
        if ( v26 )
          HIDWORD(v29) = Entity::getUniqueID(v1);
          LODWORD(v29) = v26;
          Village::removeVillager(v29);
        v30 = (int *)((char *)v1 + 4168);
        *v20 = (unsigned int)v50;
        v31 = v51;
        if ( v51 )
          v32 = (unsigned int *)(v51 + 8);
              v33 = __ldrex(v32);
            while ( __strex(v33 + 1, v32) );
            ++*v32;
        v34 = *v30;
        if ( *v30 )
          v35 = (unsigned int *)(v34 + 8);
              v36 = __ldrex(v35);
            while ( __strex(v36 - 1, v35) );
            v36 = (*v35)--;
          if ( v36 == 1 )
            (*(void (**)(void))(*(_DWORD *)v34 + 12))();
        *v30 = v31;
        v37 = (unsigned __int64 *)Entity::getUniqueID(v1);
        Village::addVillager((int)v16, v37);
        if ( *((_BYTE *)v1 + 4302) )
          *((_BYTE *)v1 + 4302) = 0;
          Village::rewardAllPlayers(v16, 5);
      if ( v16 )
        v38 = Village::getCenter(v16);
        _R0 = Village::getRadius(v16);
        __asm
          VMOV            S0, R0
          VLDR            S2, =0.6
          VCVT.F32.S32    S0, S0
          VMUL.F32        S0, S0, S2
          VMOV            R0, S0
        _R0 = mce::Math::floor(_R0, v43);
          VMOV            R2, S0
        Entity::restrictTo(v1, (const BlockPos *)v38, _R2);
    v46 = v51;
      v47 = (unsigned int *)(v51 + 8);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 == 1 )
        (*(void (**)(void))(*(_DWORD *)v46 + 12))();
  }
  return Mob::newServerAiStep(v1);
}


int __fastcall Villager::Villager(int a1, int a2, int *a3)
{
  int v3; // r4@1

  v3 = a1;
  Mob::Mob(a1, a2, a3);
  *(_DWORD *)v3 = &off_26FC6C0;
  *(_WORD *)(v3 + 4300) = 0;
  *(_DWORD *)(v3 + 4296) = 0;
  *(_DWORD *)(v3 + 4292) = 0;
  *(_DWORD *)(v3 + 248) = 14;
  *(_DWORD *)(v3 + 172) |= 0x1000u;
  Entity::setPersistent((Entity *)v3);
  *(_DWORD *)(v3 + 3984) = 1072064102;
  (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 764))(v3);
  return v3;
}


void __fastcall Villager::die(Villager *this, const EntityDamageSource *a2)
{
  Villager::die(this, a2);
}


int __fastcall Villager::setWillingToBreed(Villager *this, bool a2)
{
  int result; // r0@1

  *((_BYTE *)this + 4301) = a2;
  result = *((_DWORD *)this + 811);
  if ( result )
    *(_BYTE *)(result + 17) = a2;
  return result;
}


void __fastcall Villager::buildDebugInfo(int a1, const void **a2)
{
  int v2; // r5@1
  const void **v3; // r9@1
  int v4; // r6@3
  unsigned int *v6; // r0@6
  unsigned int v7; // r1@6
  unsigned int v8; // r2@10
  unsigned int v9; // r3@11
  unsigned int v10; // r1@12
  Village *v11; // r4@12
  unsigned int *v12; // r7@21
  unsigned int v13; // r0@23
  char *v14; // r0@28
  void *v15; // r0@28
  const void **v21; // r0@29
  char *v22; // r0@29
  void *v23; // r0@30
  int v24; // r0@31
  int v25; // r6@32
  int v26; // r7@33
  unsigned int *v27; // r2@34
  signed int v28; // r1@36
  ItemInstance *v29; // r4@41
  __int64 v30; // r2@42
  void *v31; // r0@42
  char *v32; // r0@44
  unsigned int *v33; // r2@46
  signed int v34; // r1@48
  unsigned int *v35; // r2@50
  signed int v36; // r1@52
  unsigned int *v37; // r2@54
  signed int v38; // r1@56
  unsigned int *v39; // r2@66
  signed int v40; // r1@68
  int v41; // [sp+Ch] [bp-3Ch]@34
  int v42; // [sp+10h] [bp-38h]@29
  char *v43; // [sp+14h] [bp-34h]@29
  int v44; // [sp+18h] [bp-30h]@28
  _DWORD *v45; // [sp+1Ch] [bp-2Ch]@1

  v2 = a1;
  v3 = a2;
  v45 = &unk_28898CC;
  GoalSelector::buildDebugInfo((__int64 *)(a1 + 4124), (const void **)&v45);
  if ( *(v45 - 3) )
  {
    sub_21E7408(v3, " : ", 3u);
    sub_21E72F0(v3, (const void **)&v45);
  }
  v4 = *(_DWORD *)(v2 + 4168);
  _ZF = v4 == 0;
  if ( v4 )
    _ZF = *(_DWORD *)(v4 + 4) == 0;
  if ( _ZF )
    sub_21E7408(v3, " Village: None ", 0xFu);
  else
    v6 = (unsigned int *)(v4 + 4);
    v7 = *(_DWORD *)(v4 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v7 )
        {
          v11 = 0;
          goto LABEL_28;
        }
        __dmb();
        v8 = __ldrex(v6);
        if ( v8 == v7 )
          break;
        __clrex();
        v7 = v8;
      }
      v9 = __strex(v7 + 1, v6);
      v7 = v8;
    }
    while ( v9 );
    __dmb();
    v10 = *v6;
    v11 = *(Village **)(v2 + 4164);
    if ( !*v6 )
      v11 = (Village *)*v6;
    if ( &pthread_create )
      __dmb();
      do
        v10 = __ldrex(v6);
      while ( __strex(v10 - 1, v6) );
    else
      *v6 = v10 - 1;
    if ( v10 == 1 )
      v12 = (unsigned int *)(v4 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
      if ( &pthread_create )
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      else
        v13 = (*v12)--;
      if ( v13 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
LABEL_28:
    v14 = Village::getCenter(v11);
    Util::format((Util *)&v44, " Village: %d %d %d ", *(_QWORD *)v14, *((_DWORD *)v14 + 2));
    sub_21E72F0(v3, (const void **)&v44);
    v15 = (void *)(v44 - 12);
    if ( (int *)(v44 - 12) != &dword_28898C0 )
      v39 = (unsigned int *)(v44 - 4);
          v40 = __ldrex(v39);
        while ( __strex(v40 - 1, v39) );
        v40 = (*v39)--;
      if ( v40 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
  _R0 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 820))(v2);
  __asm
    VMOV            S0, R0
    VCVT.F64.F32    D0, S0
    VMOV            R2, R3, D0
  Util::format((Util *)&v42, " %.2f", _R2);
  v21 = sub_21E7408((const void **)&v42, "\n", 1u);
  v43 = (char *)*v21;
  *v21 = &unk_28898CC;
  sub_21E72F0(v3, (const void **)&v43);
  v22 = v43 - 12;
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v43 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v42 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = *(_DWORD *)(v2 + 3128);
  if ( v24 )
    v25 = (*(int (**)(void))(**(_DWORD **)(v24 + 4) + 44))();
    if ( v25 )
      v26 = 0;
        v29 = (ItemInstance *)(*(int (**)(void))(**(_DWORD **)(*(_DWORD *)(v2 + 3128) + 4) + 16))();
        if ( !ItemInstance::isNull(v29) )
          HIDWORD(v30) = *((_BYTE *)v29 + 14);
          LODWORD(v30) = *(_DWORD *)(*(_DWORD *)v29 + 24);
          Util::format((Util *)&v41, " %s : %d\n", v30);
          sub_21E72F0(v3, (const void **)&v41);
          v31 = (void *)(v41 - 12);
          if ( (int *)(v41 - 12) != &dword_28898C0 )
          {
            v27 = (unsigned int *)(v41 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v28 = __ldrex(v27);
              while ( __strex(v28 - 1, v27) );
            }
            else
              v28 = (*v27)--;
            if ( v28 <= 0 )
              j_j_j_j__ZdlPv_9(v31);
          }
        ++v26;
      while ( v26 != v25 );
  Mob::buildDebugInfo(v2, v3);
  v32 = (char *)(v45 - 3);
  if ( v45 - 3 != &dword_28898C0 )
    v37 = v45 - 1;
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
}


void __fastcall Villager::readAdditionalSaveData(Villager *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  Villager *v3; // r4@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  Mob::readAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v7, "Willing");
  *((_BYTE *)v3 + 4301) = CompoundTag::getBoolean((int)v2, (const void **)&v7);
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


int __fastcall Villager::onSizeUpdated(int result)
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
  __asm { VSTR            S0, [R0,#0x188] }
  *(_DWORD *)(result + 396) = 0;
  return result;
}


signed int __fastcall Villager::useNewAi(Villager *this)
{
  return 1;
}


signed int __fastcall Villager::setLastHurtByMob(Villager *this, Mob *a2)
{
  Mob *v2; // r5@1
  Villager *v3; // r4@1
  signed int result; // r0@1
  int v5; // r6@1
  bool v6; // zf@2
  unsigned int *v7; // r0@5
  unsigned int v8; // r1@5
  unsigned int v9; // r2@8
  unsigned int v10; // r3@9
  unsigned int v11; // r1@10
  Village *v12; // r8@10
  unsigned int *v13; // r7@19
  unsigned int v14; // r0@21
  int v15; // r7@27
  unsigned __int64 *v16; // r0@29
  int v17; // r0@30

  v2 = a2;
  v3 = this;
  Mob::setLastHurtByMob(this, a2);
  result = 4168;
  v5 = *((_DWORD *)v3 + 1042);
  if ( v5 )
  {
    result = *(_DWORD *)(v5 + 4);
    v6 = v2 == 0;
    if ( v2 )
      v6 = result == 0;
    if ( !v6 )
    {
      v7 = (unsigned int *)(v5 + 4);
      v8 = *(_DWORD *)(v5 + 4);
      do
      {
        while ( 1 )
        {
          if ( !v8 )
          {
            v12 = 0;
            goto LABEL_26;
          }
          __dmb();
          v9 = __ldrex(v7);
          if ( v9 == v8 )
            break;
          __clrex();
          v8 = v9;
        }
        v10 = __strex(v8 + 1, v7);
        v8 = v9;
      }
      while ( v10 );
      __dmb();
      v11 = *v7;
      v12 = (Village *)*((_DWORD *)v3 + 1041);
      if ( !*v7 )
        v12 = (Village *)*v7;
      if ( &pthread_create )
        __dmb();
        do
          v11 = __ldrex(v7);
        while ( __strex(v11 - 1, v7) );
      else
        *v7 = v11 - 1;
      if ( v11 == 1 )
        v13 = (unsigned int *)(v5 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
        if ( &pthread_create )
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
        else
          v14 = (*v13)--;
        if ( v14 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
LABEL_26:
      Village::addAggressor(v12, v2);
      result = Entity::hasCategory((int)v2, 1);
      if ( result == 1 )
        v15 = -1;
        if ( Entity::isBaby(v3) )
          v15 = -3;
        v16 = (unsigned __int64 *)Entity::getUniqueID(v2);
        Village::modifyStanding((unsigned int)v12, v16, v15);
        result = (*(int (__fastcall **)(Villager *))(*(_DWORD *)v3 + 316))(v3);
        if ( result == 1 )
          v17 = Entity::getLevel(v3);
          result = j_j_j__ZN5Level20broadcastEntityEventEP6Entity11EntityEventi_0(v17, (int)v3, 22, 0);
    }
  }
  return result;
}


int __fastcall Villager::setRewardPlayersInVillage(int result)
{
  *(_BYTE *)(result + 4302) = 1;
  return result;
}


signed int __fastcall Villager::remove(Villager *this)
{
  Villager *v1; // r4@1
  int v2; // r5@1
  bool v3; // zf@1
  unsigned int *v4; // r0@4
  unsigned int v5; // r1@4
  unsigned int v6; // r2@7
  unsigned int v7; // r3@8
  unsigned int v8; // r1@9
  unsigned int v9; // r6@9
  unsigned int *v10; // r7@18
  unsigned int v11; // r0@20
  __int64 v12; // r0@25

  v1 = this;
  v2 = *((_DWORD *)this + 1042);
  v3 = v2 == 0;
  if ( v2 )
    v3 = *(_DWORD *)(v2 + 4) == 0;
  if ( !v3 )
  {
    v4 = (unsigned int *)(v2 + 4);
    v5 = *(_DWORD *)(v2 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v5 )
        {
          v9 = 0;
          goto LABEL_25;
        }
        __dmb();
        v6 = __ldrex(v4);
        if ( v6 == v5 )
          break;
        __clrex();
        v5 = v6;
      }
      v7 = __strex(v5 + 1, v4);
      v5 = v6;
    }
    while ( v7 );
    __dmb();
    v8 = *v4;
    v9 = *((_DWORD *)v1 + 1041);
    if ( !*v4 )
      v9 = *v4;
    if ( &pthread_create )
      __dmb();
      do
        v8 = __ldrex(v4);
      while ( __strex(v8 - 1, v4) );
    else
      *v4 = v8 - 1;
    if ( v8 == 1 )
      v10 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      else
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
LABEL_25:
    HIDWORD(v12) = Entity::getUniqueID(v1);
    LODWORD(v12) = v9;
    Village::removeVillager(v12);
  }
  return j_j_j__ZN6Entity6removeEv(v1);
}


void __fastcall Villager::buildDebugInfo(int a1, const void **a2)
{
  Villager::buildDebugInfo(a1, a2);
}


signed int __fastcall Villager::getBreedingStackIndex(Villager *this)
{
  int v1; // r4@0
  signed int v2; // r7@0
  int v3; // r0@1
  bool v4; // zf@1
  signed int v5; // r5@5
  int v6; // r0@6
  bool v7; // zf@6
  signed int v8; // r0@9
  signed int v9; // r2@9
  signed int v10; // r11@20
  int v12; // [sp+8h] [bp-70h]@6
  int v13; // [sp+10h] [bp-68h]@26
  unsigned __int8 v14; // [sp+16h] [bp-62h]@9
  char v15; // [sp+17h] [bp-61h]@6
  void *v16; // [sp+2Ch] [bp-4Ch]@24
  void *ptr; // [sp+3Ch] [bp-3Ch]@22

  v3 = Entity::getContainerComponent(this);
  v4 = v3 == 0;
  if ( v3 )
  {
    v1 = *(_DWORD *)(v3 + 4);
    v4 = v1 == 0;
  }
  if ( v4 || (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 44))(v1) < 1 )
LABEL_30:
    v2 = -1;
  else
    v5 = 0;
    while ( 1 )
    {
      v6 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v1 + 16))(v1, v5);
      ItemInstance::ItemInstance((ItemInstance *)&v12, v6);
      v7 = v15 == 0;
      if ( v15 )
        v7 = v12 == 0;
      if ( v7 )
        goto LABEL_34;
      v8 = ItemInstance::isNull((ItemInstance *)&v12);
      v9 = 0;
      if ( !v14 )
        v9 = 1;
      if ( v8 | v9
        || (v12 != Item::mBread || v14 <= 2u)
        && (v12 != Item::mCarrot || v14 <= 0xBu)
        && (v12 != Item::mPotato || v14 <= 0xBu)
        && (v12 != Item::mBeetroot || v14 <= 0xBu) )
      {
LABEL_34:
        v10 = 0;
      }
      else
        v10 = 1;
        v2 = v5;
      if ( ptr )
        operator delete(ptr);
      if ( v16 )
        operator delete(v16);
      if ( v13 )
        (*(void (**)(void))(*(_DWORD *)v13 + 4))();
      if ( v10 )
        break;
      if ( ++v5 >= (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 44))(v1) )
        goto LABEL_30;
    }
  return v2;
}


int __fastcall Villager::reloadHardcoded(Entity *this)
{
  Entity *v1; // r4@1
  int result; // r0@1
  BlockSource *v3; // r0@2
  Level *v4; // r0@2
  int v5; // r5@2
  unsigned __int64 *v6; // r0@2
  int v7; // r5@2
  unsigned int *v8; // r0@3
  unsigned int v9; // r1@5
  int v10; // r0@8
  unsigned int *v11; // r2@9
  unsigned int v12; // r1@11
  unsigned int *v13; // r2@17
  unsigned int v14; // r1@19
  int v15; // [sp+0h] [bp-18h]@2
  int v16; // [sp+4h] [bp-14h]@2

  v1 = this;
  result = *((_BYTE *)this + 3081);
  if ( !result )
  {
    Entity::setPersistent(v1);
    v3 = (BlockSource *)Entity::getRegion(v1);
    v4 = (Level *)BlockSource::getLevel(v3);
    v5 = *(_DWORD *)Level::getVillages(v4);
    v6 = (unsigned __int64 *)Entity::getUniqueID(v1);
    Villages::fetchVillagersVillage((int)&v15, v5, v6);
    *((_DWORD *)v1 + 1041) = v15;
    v7 = v16;
    if ( v16 )
    {
      v8 = (unsigned int *)(v16 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 + 1, v8) );
      }
      else
        ++*v8;
    }
    v10 = *((_DWORD *)v1 + 1042);
    if ( v10 )
      v11 = (unsigned int *)(v10 + 8);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (**)(void))(*(_DWORD *)v10 + 12))();
    *((_DWORD *)v1 + 1042) = v7;
    result = v16;
      v13 = (unsigned int *)(v16 + 8);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
        result = (*(int (**)(void))(*(_DWORD *)result + 12))();
  }
  return result;
}


signed int __fastcall Villager::_wantsItem(Villager *this, const Item *a2)
{
  signed int result; // r0@1

  result = 1;
  if ( (const Item *)Item::mBread != a2
    && (const Item *)Item::mPotato != a2
    && (const Item *)Item::mCarrot != a2
    && (const Item *)Item::mWheat != a2
    && (const Item *)Item::mSeeds_wheat != a2
    && (const Item *)Item::mBeetroot != a2 )
  {
    result = 0;
    if ( (const Item *)Item::mSeeds_beetroot == a2 )
      result = 1;
  }
  return result;
}


void __fastcall Villager::readAdditionalSaveData(Villager *this, const CompoundTag *a2)
{
  Villager::readAdditionalSaveData(this, a2);
}


int __fastcall Villager::setEquippedSlot(int a1, int a2, int a3, int a4)
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
