

int __fastcall FoodItemComponent::useOn(FoodItemComponent *this, ItemInstance *a2, Entity *a3, const BlockPos *a4, signed __int8 a5, const Vec3 *a6, ItemUseCallback *a7)
{
  return 0;
}


int __fastcall FoodItemComponent::FoodItemComponent(int a1, int a2)
{
  int v2; // r4@1

  v2 = a1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 1065353216;
  *(_BYTE *)(a1 + 12) = 0;
  sub_21E94B4((void **)(a1 + 16), "random.burp");
  *(_DWORD *)(v2 + 20) = &unk_28898CC;
  *(_DWORD *)(v2 + 24) = 0;
  *(_DWORD *)(v2 + 28) = 0;
  *(_DWORD *)(v2 + 32) = 0;
  return v2;
}


signed int __fastcall FoodItemComponent::_loadEffects(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  signed int result; // r0@1
  Json::ValueIteratorBase *v6; // r7@2
  Json::Value *v7; // r8@3
  int v8; // r6@3
  void *v9; // r0@3
  void *v10; // r0@4
  MobEffect *v11; // r0@5
  MobEffect *v12; // r6@5
  int v13; // r5@6
  Json::Value *v14; // r0@6
  int v15; // r6@6
  Json::Value *v16; // r0@6
  Json::Value *v17; // r0@6
  int v23; // r6@6
  __int64 v24; // r0@6
  void *v25; // r0@8
  unsigned int *v26; // r2@9
  Json::ValueIteratorBase *v27; // r6@10
  signed int v28; // r1@11
  void *v29; // r8@13
  int v30; // r1@13
  unsigned int v31; // r2@13
  unsigned int v32; // r1@15
  unsigned int v33; // r4@15
  char *v34; // r7@21
  char *v35; // r5@23
  int v36; // r0@27
  unsigned int *v37; // r2@31
  signed int v38; // r1@33
  unsigned int *v39; // r2@35
  signed int v40; // r1@37
  int v41; // [sp+10h] [bp-60h]@1
  int v42; // [sp+14h] [bp-5Ch]@6
  int v43; // [sp+18h] [bp-58h]@6
  int v44; // [sp+20h] [bp-50h]@3
  unsigned int v45; // [sp+24h] [bp-4Ch]@3
  int v46; // [sp+28h] [bp-48h]@3
  char v47; // [sp+2Ch] [bp-44h]@1
  char v48; // [sp+34h] [bp-3Ch]@1

  v3 = a3;
  v4 = a2;
  v41 = a2;
  Json::Value::begin((Json::Value *)&v48, a3);
  Json::Value::end((Json::Value *)&v47, v3);
  result = Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v48, (const Json::ValueIteratorBase *)&v47);
  if ( !result )
  {
    v6 = (Json::ValueIteratorBase *)&v48;
    while ( 1 )
    {
      v7 = (Json::Value *)Json::ValueIteratorBase::deref(v6);
      v8 = Json::Value::operator[](v7, "name");
      sub_21E94B4((void **)&v44, (const char *)&unk_257BC67);
      Json::Value::asString((int *)&v45, v8, &v44);
      Util::toLower((void **)&v46, *(_DWORD *)(v45 - 12), v45);
      v9 = (void *)(v45 - 12);
      if ( (int *)(v45 - 12) != &dword_28898C0 )
      {
        v37 = (unsigned int *)(v45 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
        }
        else
          v38 = (*v37)--;
        if ( v38 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      }
      v10 = (void *)(v44 - 12);
      if ( (int *)(v44 - 12) != &dword_28898C0 )
        v39 = (unsigned int *)(v44 - 4);
            v40 = __ldrex(v39);
          while ( __strex(v40 - 1, v39) );
          v40 = (*v39)--;
        if ( v40 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      v11 = (MobEffect *)MobEffect::getByName((int **)&v46);
      v12 = v11;
      if ( v11 )
        break;
      v25 = (void *)(v46 - 12);
      if ( (int *)(v46 - 12) != &dword_28898C0 )
        v26 = (unsigned int *)(v46 - 4);
          v27 = v6;
            v28 = __ldrex(v26);
          while ( __strex(v28 - 1, v26) );
LABEL_50:
          v6 = v27;
LABEL_52:
          if ( v28 <= 0 )
            j_j_j_j__ZdlPv_9(v25);
          goto LABEL_29;
LABEL_51:
        v28 = (*v26)--;
        goto LABEL_52;
LABEL_29:
      Json::ValueIteratorBase::increment(v6);
      result = Json::ValueIteratorBase::isEqual(v6, (const Json::ValueIteratorBase *)&v47);
      if ( result )
        return result;
    }
    v43 = MobEffect::getId(v11);
    v13 = *(_DWORD *)MobEffect::getDescriptionId(v12);
    v14 = (Json::Value *)Json::Value::operator[](v7, "duration");
    v15 = Json::Value::asInt(v14, 1);
    v16 = (Json::Value *)Json::Value::operator[](v7, "amplifier");
    v42 = Json::Value::asInt(v16, 1);
    v17 = (Json::Value *)Json::Value::operator[](v7, "chance");
    _R0 = Json::Value::asFloat(v17, 1.0);
    __asm { VMOV            S16, R0 }
    v23 = 20 * v15;
    v24 = *(_QWORD *)(v4 + 4);
    if ( (_DWORD)v24 == HIDWORD(v24) )
      v29 = *(void **)v4;
      HIDWORD(v24) = ((signed int)v24 - *(_DWORD *)v4) >> 2;
      v31 = -858993459 * HIDWORD(v24);
      if ( (_DWORD)v24 == *(_DWORD *)v4 )
        v31 = 1;
      v32 = v31 + -858993459 * v30;
      v33 = v32;
      if ( v32 > 0xCCCCCCC )
        v33 = 214748364;
      if ( v32 < v31 )
      if ( v33 )
        if ( v33 >= 0xCCCCCCD )
          sub_21E57F4();
        v34 = (char *)operator new(20 * v33);
        LODWORD(v24) = *(_QWORD *)v41 >> 32;
        v29 = (void *)*(_QWORD *)v41;
      else
        v34 = 0;
      *(_DWORD *)&v34[v24 - (_DWORD)v29] = v13;
      v35 = &v34[v24 - (_DWORD)v29];
      __asm { VSTR            S16, [R5,#0x10] }
      *((_DWORD *)v35 + 1) = v43;
      *((_DWORD *)v35 + 2) = v23;
      *((_DWORD *)v35 + 3) = v42;
      if ( !_ZF )
        _aeabi_memmove4(v34, v29);
      if ( v29 )
        operator delete(v29);
      v36 = (int)&v34[20 * v33];
      *(_DWORD *)v41 = v34;
      *(_DWORD *)(v41 + 4) = v35 + 20;
      v6 = (Json::ValueIteratorBase *)&v48;
      v4 = v41;
      *(_DWORD *)(v41 + 8) = v36;
    else
      __asm { VSTR            S16, [R0,#0x10] }
      *(_DWORD *)v24 = v13;
      *(_DWORD *)(v24 + 4) = v43;
      *(_DWORD *)(v24 + 8) = v23;
      *(_DWORD *)(v24 + 12) = v42;
      *(_DWORD *)(v4 + 4) += 20;
    v25 = (void *)(v46 - 12);
    if ( (int *)(v46 - 12) == &dword_28898C0 )
      goto LABEL_29;
    v26 = (unsigned int *)(v46 - 4);
    if ( &pthread_create )
      v27 = v6;
      __dmb();
      do
        v28 = __ldrex(v26);
      while ( __strex(v28 - 1, v26) );
      goto LABEL_50;
    goto LABEL_51;
  }
  return result;
}


signed int __fastcall FoodItemComponent::init(FoodItemComponent *this, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  FoodItemComponent *v3; // r4@1
  Json::Value *v4; // r0@1
  Json::Value *v5; // r6@1
  void *v11; // r0@2
  void *v12; // r0@3
  unsigned int *v13; // r2@4
  signed int v14; // r1@6
  Json::Value *v16; // r0@9
  int v17; // r6@9
  void *v18; // r0@9
  void *v19; // r0@10
  int v20; // r6@11
  void *v21; // r0@11
  void *v22; // r0@12
  int v23; // r0@13
  unsigned int *v25; // r2@14
  signed int v26; // r1@16
  unsigned int *v27; // r2@18
  signed int v28; // r1@20
  unsigned int *v29; // r2@22
  signed int v30; // r1@24
  unsigned int *v31; // r2@26
  signed int v32; // r1@28
  unsigned int *v33; // r2@30
  signed int v34; // r1@32
  int v35; // [sp+4h] [bp-34h]@11
  int v36; // [sp+8h] [bp-30h]@11
  int v37; // [sp+10h] [bp-28h]@9
  int v38; // [sp+14h] [bp-24h]@9
  int v39; // [sp+1Ch] [bp-1Ch]@2
  int v40; // [sp+20h] [bp-18h]@2

  v2 = a2;
  v3 = this;
  v4 = (Json::Value *)Json::Value::operator[](a2, "nutrition");
  *((_DWORD *)v3 + 1) = Json::Value::asInt(v4, 0);
  v5 = (Json::Value *)Json::Value::operator[](v2, "saturation_modifier");
  if ( Json::Value::isString(v5) == 1 )
  {
    sub_21E94B4((void **)&v39, (const char *)&unk_257BC67);
    Json::Value::asString(&v40, (int)v5, &v39);
    _R0 = FoodSaturationFromString((unsigned int *)&v40);
    __asm
    {
      VMOV            S0, R0
      VSTR            S0, [R4,#8]
    }
    v11 = (void *)(v40 - 12);
    if ( (int *)(v40 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v40 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
      }
      else
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    v12 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v39 - 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
  }
  else
    _R0 = Json::Value::asFloat(v5, 0.6);
  v16 = (Json::Value *)Json::Value::operator[](v2, "is_meat");
  *((_BYTE *)v3 + 12) = Json::Value::asBool(v16, 0);
  v17 = Json::Value::operator[](v2, "using_converts_to");
  sub_21E94B4((void **)&v37, (const char *)&unk_257BC67);
  Json::Value::asString(&v38, v17, &v37);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v3 + 5,
    &v38);
  v18 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v38 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
    else
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v37 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = Json::Value::operator[](v2, "eat_sound");
  sub_21E94B4((void **)&v35, "random.burp");
  Json::Value::asString(&v36, v20, &v35);
    (int *)v3 + 4,
    &v36);
  v21 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v36 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v35 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = Json::Value::operator[](v2, "effects");
  FoodItemComponent::_loadEffects((int)v3, (int)v3 + 24, v23);
  return 1;
}


int *__fastcall FoodItemComponent::useTimeDepleted(FoodItemComponent *this, ItemInstance *a2, Player *a3, Level *a4)
{
  Level *v4; // r10@1
  FoodItemComponent *v5; // r9@1
  Player *v6; // r6@1
  ItemInstance *v7; // r8@1
  char *v13; // r0@5
  int v15; // r4@9
  int *v16; // r7@9
  unsigned int *v17; // r9@9
  int v18; // t1@9
  char v20; // [sp+14h] [bp-4Ch]@9
  char v21; // [sp+20h] [bp-40h]@7

  v4 = a4;
  v5 = this;
  v6 = a3;
  v7 = a2;
  if ( !Level::isClientSide(a4) )
  {
    _R4 = *((_QWORD *)v5 + 3);
    if ( (_DWORD)_R4 != HIDWORD(_R4) )
    {
      __asm
      {
        VMOV.F32        S16, #1.0
        VLDR            D9, =2.32830644e-10
      }
      do
        __asm
        {
          VLDR            S0, [R4,#0x10]
          VCMPE.F32       S0, S16
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _ZF )
          goto LABEL_14;
        v13 = Level::getRandom(v4);
        _R0 = Random::_genRandInt32((Random *)v13);
          VMOV            S0, R0
          VCVT.F64.U32    D0, S0
          VMUL.F64        D0, D0, D9
          VCVT.F32.F64    S0, D0
          VLDR            S2, [R4,#0x10]
          VCMPE.F32       S0, S2
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_14:
          MobEffectInstance::MobEffectInstance(
            (int)&v21,
            *(_DWORD *)(_R4 + 4),
            *(_DWORD *)(_R4 + 8),
            *(_DWORD *)(_R4 + 12));
          Mob::addEffect(v6, (const MobEffectInstance *)&v21);
        LODWORD(_R4) = _R4 + 20;
      while ( HIDWORD(_R4) != (_DWORD)_R4 );
    }
  }
  Player::eat(v6, v7);
  (*(void (__fastcall **)(Player *, ItemInstance *))(*(_DWORD *)v6 + 612))(v6, v7);
  v15 = Entity::getRegion(v6);
  v16 = 0;
  Entity::getAttachPos((AABB *)&v20, (int)v6, 3, 0);
  Level::broadcastSoundEvent(v4, v15, 85, (int)&v20, -1, 1, 0, 0);
  v18 = *((_DWORD *)v5 + 5);
  v17 = (unsigned int *)((char *)v5 + 20);
  if ( *(_DWORD *)(v18 - 12) )
    v16 = Item::lookupByName(v17, 1);
  return v16;
}


unsigned int __fastcall FoodItemComponent::_applyEatEffects(FoodItemComponent *this, ItemInstance *a2, Player *a3, Level *a4)
{
  Level *v4; // r8@1
  FoodItemComponent *v5; // r6@1
  Player *v6; // r5@1
  unsigned int result; // r0@1
  int v8; // r4@2
  char *v14; // r0@5
  int v15; // [sp+0h] [bp-38h]@7

  v4 = a4;
  v5 = this;
  v6 = a3;
  result = Level::isClientSide(a4);
  if ( !result )
  {
    v8 = *((_QWORD *)v5 + 3) >> 32;
    _R7 = *((_QWORD *)v5 + 3);
    if ( _R7 != v8 )
    {
      __asm
      {
        VMOV.F32        S16, #1.0
        VLDR            D9, =2.32830644e-10
      }
      do
        __asm
        {
          VLDR            S0, [R7,#0x10]
          VCMPE.F32       S0, S16
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _ZF )
          goto LABEL_11;
        v14 = Level::getRandom(v4);
        result = Random::_genRandInt32((Random *)v14);
          VMOV            S0, R0
          VCVT.F64.U32    D0, S0
          VMUL.F64        D0, D0, D9
          VCVT.F32.F64    S0, D0
          VLDR            S2, [R7,#0x10]
          VCMPE.F32       S0, S2
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_11:
          MobEffectInstance::MobEffectInstance(
            (int)&v15,
            *(_DWORD *)(_R7 + 4),
            *(_DWORD *)(_R7 + 8),
            *(_DWORD *)(_R7 + 12));
          result = Mob::addEffect(v6, (const MobEffectInstance *)&v15);
        _R7 += 20;
      while ( v8 != _R7 );
    }
  }
  return result;
}


int __fastcall FoodItemComponent::use(FoodItemComponent *this, ItemInstance *a2, Player *a3)
{
  ItemInstance *v3; // r4@1
  Player *v4; // r5@1
  int result; // r0@1
  int v6; // r2@5

  v3 = a2;
  v4 = a3;
  result = Abilities::getBool((int)a3 + 4320, (int **)&Abilities::INVULNERABLE);
  if ( !result )
  {
    if ( Player::isHungry(v4)
      || ItemInstance::getId(v3) == *(_WORD *)(Item::mApple_gold + 18)
      || (result = ItemInstance::getId(v3), result == *(_WORD *)(Item::mApple_enchanted + 18)) )
    {
      v6 = ItemInstance::getMaxUseDuration(v3);
      result = j_j_j__ZN6Player14startUsingItemERK12ItemInstancei_0(v4, v3, v6);
    }
  }
  return result;
}
