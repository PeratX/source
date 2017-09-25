

void __fastcall TradeableComponent::notifyTrade(TradeableComponent *this, int a2)
{
  TradeableComponent::notifyTrade(this, a2);
}


int __fastcall TradeableComponent::notifyTradeUpdated(int result, ItemInstance *a2, int a3)
{
  ItemInstance *v3; // r5@1
  int v4; // r4@1
  signed int v9; // r0@6
  int v10; // r4@6
  char *v11; // r5@7
  int v12; // r0@7
  int v13; // r1@7
  char v14; // [sp+4h] [bp-2Ch]@7
  char v15; // [sp+10h] [bp-20h]@8
  float v16; // [sp+1Ch] [bp-14h]@2

  v3 = a2;
  v4 = result;
  if ( a3 == 1 )
  {
    v16 = 0.0;
    Entity::getAmbientSoundIntervalMin(*(Entity **)(result + 24), &v16);
    __asm { VMOV.F32        S2, #20.0 }
    if ( _ZF )
    {
      __asm { VLDREQ          S0, [SP,#0x30+var_14] }
    }
    else
      __asm { VLDRNE          S0, =0.0 }
      v16 = 0.0;
    result = *(_DWORD *)(v4 + 24) + 3476;
    __asm
      VLDR            S4, [R0]
      VSUB.F32        S2, S2, S0
      VCVT.F32.S32    S4, S4
      VCMPE.F32       S4, S2
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm
      {
        VNEG.F32        S0, S0
        VCVTR.S32.F32   S0, S0
        VSTR            S0, [R0]
      }
      v9 = ItemInstance::isNull(v3);
      v10 = *(_DWORD *)(v4 + 24);
      if ( v9 )
        v11 = &v14;
        Entity::getAttachPos((AABB *)&v14, v10, 3, 0);
        v12 = v10;
        v13 = 112;
      else
        v11 = &v15;
        Entity::getAttachPos((AABB *)&v15, v10, 3, 0);
        v13 = 111;
      result = Entity::playSound(v12, v13, (int)v11);
  }
  return result;
}


int __fastcall TradeableComponent::setDataFromPacket(TradeableComponent *this, const UpdateTradePacket *a2)
{
  const UpdateTradePacket *v2; // r4@1
  TradeableComponent *v3; // r5@1
  __int16 v4; // r0@1
  int v5; // r0@1
  MerchantRecipeList *v6; // r6@1
  int v7; // r0@2

  v2 = a2;
  v3 = this;
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 6);
  v4 = *((_WORD *)a2 + 14);
  *((_BYTE *)v3 + 16) = v4;
  *((_BYTE *)v3 + 17) = HIBYTE(v4);
  v5 = Entity::getLevel(*((Entity **)v3 + 6));
  *((_DWORD *)v3 + 2) = Level::fetchEntity(v5, 0, *((_QWORD *)v2 + 5), *((_QWORD *)v2 + 5) >> 32, 0);
  EntityInteraction::setInteractText((int *)v3 + 8, (int *)v2 + 4);
  v6 = (MerchantRecipeList *)*((_DWORD *)v3 + 7);
  if ( !v6 )
  {
    v6 = (MerchantRecipeList *)operator new(0x10u);
    MerchantRecipeList::MerchantRecipeList(v6);
    v7 = *((_DWORD *)v3 + 7);
    *((_DWORD *)v3 + 7) = v6;
    if ( v7 )
    {
      (*(void (**)(void))(*(_DWORD *)v7 + 4))();
      v6 = (MerchantRecipeList *)*((_DWORD *)v3 + 7);
    }
  }
  return (*(int (__fastcall **)(MerchantRecipeList *, char *))(*(_DWORD *)v6 + 20))(v6, (char *)v2 + 48);
}


int __fastcall TradeableComponent::getOffers(TradeableComponent *this)
{
  TradeableComponent *v1; // r4@1

  v1 = this;
  TradeableComponent::_refreshTrades(this);
  return *((_DWORD *)v1 + 7);
}


void __fastcall TradeableComponent::addAdditionalSaveData(TradeableComponent *this, CompoundTag *a2)
{
  CompoundTag *v2; // r6@1
  TradeableComponent *v3; // r5@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  int v7; // r0@5
  void *v8; // r0@9
  unsigned int *v9; // r2@11
  signed int v10; // r1@13
  unsigned int *v11; // r2@15
  signed int v12; // r1@17
  unsigned int *v13; // r2@19
  signed int v14; // r1@21
  unsigned int *v15; // r2@23
  signed int v16; // r1@25
  int v17; // [sp+4h] [bp-3Ch]@5
  int v18; // [sp+8h] [bp-38h]@5
  int v19; // [sp+10h] [bp-30h]@5
  int v20; // [sp+18h] [bp-28h]@3
  int v21; // [sp+20h] [bp-20h]@2
  int v22; // [sp+28h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v22, "TradeTier");
  CompoundTag::putInt((int)v2, (const void **)&v22, *(_DWORD *)v3);
  v4 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v22 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v21, "Riches");
  CompoundTag::putInt((int)v2, (const void **)&v21, *((_DWORD *)v3 + 5));
  v5 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v21 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v20, "Willing");
  CompoundTag::putBoolean((int)v2, (const void **)&v20, *((_BYTE *)v3 + 17));
  v6 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v20 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  if ( *((_DWORD *)v3 + 7) )
    sub_21E94B4((void **)&v19, "Offers");
    (*(void (__fastcall **)(int *))(**((_DWORD **)v3 + 7) + 24))(&v17);
    v7 = v17;
    v17 = 0;
    v18 = v7;
    CompoundTag::put((int)v2, (const void **)&v19, &v18);
    if ( v18 )
      (*(void (**)(void))(*(_DWORD *)v18 + 4))();
    v18 = 0;
    if ( v17 )
      (*(void (**)(void))(*(_DWORD *)v17 + 4))();
    v8 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v19 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      }
      else
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
}


int __fastcall TradeableComponent::handleEntityEvent(int result, int a2)
{
  switch ( a2 )
  {
    case 23:
      result = j_j_j__ZN18TradeableComponent23_addParticlesAroundSelfE12ParticleType(result, 33);
      break;
    case 22:
      result = j_j_j__ZN18TradeableComponent23_addParticlesAroundSelfE12ParticleType(result, 32);
    case 21:
      result = j_j_j__ZN18TradeableComponent23_addParticlesAroundSelfE12ParticleType(result, 17);
  }
  return result;
}


int __fastcall TradeableComponent::_addParticlesAroundSelf(int a1, int a2)
{
  int v6; // r5@1
  signed int v7; // r9@1
  int v18; // r0@2
  int result; // r0@2
  int v20; // [sp+Ch] [bp-84h]@1
  float v21; // [sp+1Ch] [bp-74h]@2

  __asm
  {
    VMOV.F32        S21, #1.0
    VLDR            D8, =2.32830644e-10
    VLDR            S20, =0.02
  }
  v6 = a1;
  v7 = 5;
  v20 = a2;
  do
    _R11 = Random::nextGaussian((Random *)(*(_DWORD *)(v6 + 24) + 552));
    _R7 = Random::nextGaussian((Random *)(*(_DWORD *)(v6 + 24) + 552));
    _R4 = Random::nextGaussian((Random *)(*(_DWORD *)(v6 + 24) + 552));
    _R0 = *(_DWORD *)(v6 + 24);
    __asm { VLDR            S22, [R0,#0x48] }
    _R6 = Random::_genRandInt32((Random *)(_R0 + 552));
    __asm
    {
      VLDR            S24, [R0,#0x4C]
      VLDR            S26, [R0,#0x130]
    }
    _R8 = Random::_genRandInt32((Random *)(_R0 + 552));
      VMOV            S0, R6
      VLDR            S28, [R0,#0x50]
      VLDR            S30, [R0,#0x134]
      VCVT.F64.U32    D9, S0
    _R0 = Random::_genRandInt32((Random *)(_R0 + 552));
      VMOV            S0, R0
      VMOV            S2, R8
      VCVT.F64.U32    D0, S0
      VCVT.F64.U32    D1, S2
    _R0 = *(Entity **)(v6 + 24);
      VMUL.F64        D0, D0, D8
      VMUL.F64        D2, D9, D8
      VMUL.F64        D1, D1, D8
      VCVT.F32.F64    S4, D2
      VCVT.F32.F64    S0, D0
      VADD.F32        S4, S4, S4
      VLDR            S8, [R0,#0x130]
      VCVT.F32.F64    S2, D1
      VADD.F32        S0, S0, S0
      VSUB.F32        S6, S22, S26
      VMUL.F32        S4, S26, S4
      VADD.F32        S10, S24, S21
      VMUL.F32        S2, S2, S30
      VSUB.F32        S12, S28, S8
      VMUL.F32        S0, S8, S0
      VMOV            S8, R7
      VADD.F32        S4, S6, S4
      VMOV            S6, R11
      VADD.F32        S2, S10, S2
      VMUL.F32        S18, S6, S20
      VMOV            S6, R4
      VADD.F32        S0, S12, S0
      VMUL.F32        S22, S8, S20
      VSTR            S4, [SP,#0x90+var_74]
      VMUL.F32        S24, S6, S20
      VSTR            S2, [SP,#0x90+var_70]
      VSTR            S0, [SP,#0x90+var_6C]
    v18 = Entity::getLevel(_R0);
      VSTR            S18, [SP,#0x90+var_80]
      VSTR            S22, [SP,#0x90+var_7C]
      VSTR            S24, [SP,#0x90+var_78]
    result = Level::addParticle(v18, v20, (int)&v21);
    --v7;
  while ( v7 );
  return result;
}


char *__fastcall TradeableComponent::getDisplayName(TradeableComponent *this)
{
  return (char *)this + 32;
}


int __fastcall TradeableComponent::TradeableComponent(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  SynchedEntityData *v4; // r6@1
  int v5; // r7@2
  _BYTE *v6; // r0@2
  signed __int16 v7; // r6@2
  int v8; // r1@2
  unsigned int v9; // r0@4

  v2 = a1;
  v3 = a2;
  v4 = (SynchedEntityData *)(a2 + 176);
  *(_DWORD *)(a1 + 20) = 0;
  *(_WORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 32) = (unsigned int)&unk_28898CC;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  if ( !SynchedEntityData::_find((SynchedEntityData *)(a2 + 176), 68) )
  {
    SynchedEntityData::_resizeToContain(v4, 68);
    v5 = *(_DWORD *)v4;
    v6 = operator new(0x18u);
    v6[4] = 7;
    v7 = 68;
    *((_WORD *)v6 + 3) = 68;
    v6[8] = 1;
    *(_DWORD *)v6 = &off_26F0DC8;
    *((_DWORD *)v6 + 4) = 0;
    *((_DWORD *)v6 + 5) = 0;
    v8 = *(_DWORD *)(v5 + 272);
    *(_DWORD *)(v5 + 272) = v6;
    if ( v8 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
    v9 = *(_WORD *)(v3 + 188);
    if ( v9 >= 0x44 )
      LOWORD(v9) = 68;
    *(_WORD *)(v3 + 188) = v9;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x44 )
      v7 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v7;
  }
  return v2;
}


void __fastcall TradeableComponent::addAdditionalSaveData(TradeableComponent *this, CompoundTag *a2)
{
  TradeableComponent::addAdditionalSaveData(this, a2);
}


int __fastcall TradeableComponent::_getRecipeChance(TradeableComponent *this, float _R1)
{
  int result; // r0@3

  __asm
  {
    VMOV            S0, R1
    VLDR            S2, [R0,#4]
    VLDR            S4, =1.8
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


signed int __fastcall TradeableComponent::getInteraction(TradeableComponent *this, Player *a2, EntityInteraction *a3)
{
  Player *v3; // r5@1
  TradeableComponent *v4; // r6@1
  EntityInteraction *v5; // r4@1
  Level *v6; // r0@1
  ItemInstance *v7; // r0@3
  signed int result; // r0@7
  _DWORD *v9; // r0@9
  __int64 v10; // r1@9
  void *v11; // r0@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  int v14; // [sp+8h] [bp-28h]@11
  _DWORD *v15; // [sp+Ch] [bp-24h]@9
  __int64 v16; // [sp+14h] [bp-1Ch]@9

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (Level *)Entity::getLevel(a2);
  if ( Level::isClientSide(v6)
    || Entity::isBaby(*((Entity **)v4 + 6))
    || (v7 = (ItemInstance *)Player::getSelectedItem(v3), !ItemInstance::isNull(v7))
    && *(_DWORD *)Player::getSelectedItem(v3) == Item::mMobPlacer
    || (*(int (**)(void))(**((_DWORD **)v4 + 6) + 316))() != 1
    || Entity::isTrading(*((Entity **)v4 + 6)) )
  {
    result = 0;
  }
  else
    if ( EntityInteraction::shouldCapture(v5) == 1 )
    {
      v9 = operator new(8u);
      LODWORD(v10) = sub_16D74A2;
      *v9 = v4;
      v9[1] = v3;
      HIDWORD(v10) = sub_16D7454;
      v15 = v9;
      v16 = v10;
      EntityInteraction::capture((int)v5, (int)&v15);
      if ( (_DWORD)v16 )
        ((void (*)(void))v16)();
    }
    sub_21E94B4((void **)&v14, "action.interact.trade");
    EntityInteraction::setInteractText();
    v11 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v14 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    result = 1;
  return result;
}


void __fastcall TradeableComponent::readAdditionalSaveData(TradeableComponent *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  TradeableComponent *v3; // r7@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  signed int v7; // r6@4
  void *v8; // r0@4
  int v9; // r5@6
  void *v10; // r0@6
  MerchantRecipeList *v11; // r6@7
  int v12; // r0@8
  unsigned int *v13; // r2@12
  signed int v14; // r1@14
  unsigned int *v15; // r2@16
  signed int v16; // r1@18
  unsigned int *v17; // r2@20
  signed int v18; // r1@22
  unsigned int *v19; // r2@24
  signed int v20; // r1@26
  unsigned int *v21; // r2@44
  signed int v22; // r1@46
  int v23; // [sp+4h] [bp-3Ch]@6
  int v24; // [sp+Ch] [bp-34h]@4
  int v25; // [sp+14h] [bp-2Ch]@3
  int v26; // [sp+1Ch] [bp-24h]@2
  int v27; // [sp+24h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v27, "TradeTier");
  *(_DWORD *)v3 = CompoundTag::getInt((int)v2, (const void **)&v27);
  v4 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v27 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v26, "Riches");
  *((_DWORD *)v3 + 5) = CompoundTag::getInt((int)v2, (const void **)&v26);
  v5 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v26 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v25, "Willing");
  *((_BYTE *)v3 + 17) = CompoundTag::getBoolean((int)v2, (const void **)&v25);
  v6 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v25 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v24, "Offers");
  v7 = CompoundTag::contains((int)v2, (const void **)&v24, 10);
  v8 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v24 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  if ( v7 == 1 )
    sub_21E94B4((void **)&v23, "Offers");
    v9 = CompoundTag::getCompound((int)v2, (const void **)&v23);
    v10 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v23 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
      }
      else
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    v11 = (MerchantRecipeList *)*((_DWORD *)v3 + 7);
    if ( !v11 )
      v11 = (MerchantRecipeList *)operator new(0x10u);
      MerchantRecipeList::MerchantRecipeList(v11);
      v12 = *((_DWORD *)v3 + 7);
      *((_DWORD *)v3 + 7) = v11;
      if ( v12 )
        (*(void (**)(void))(*(_DWORD *)v12 + 4))();
        v11 = (MerchantRecipeList *)*((_DWORD *)v3 + 7);
    (*(void (__fastcall **)(MerchantRecipeList *, int))(*(_DWORD *)v11 + 20))(v11, v9);
}


void __fastcall TradeableComponent::readAdditionalSaveData(TradeableComponent *this, const CompoundTag *a2)
{
  TradeableComponent::readAdditionalSaveData(this, a2);
}


int __fastcall TradeableComponent::newServerAiStep(TradeableComponent *this)
{
  TradeableComponent *v1; // r9@1
  int result; // r0@1
  bool v3; // zf@2
  bool v4; // nf@2
  unsigned __int8 v5; // vf@2
  MerchantRecipe *v6; // r5@6
  MerchantRecipe *v7; // r10@6
  int v8; // r4@7
  __int64 v9; // r0@9
  signed int v10; // r2@10
  int v11; // t1@11
  signed int v12; // r3@11
  unsigned int v13; // r6@15
  unsigned int v14; // kr00_4@15
  int v15; // r0@18
  int v16; // r5@18
  unsigned int *v17; // r6@19
  unsigned int v18; // r7@19
  unsigned int v19; // r0@21
  int v20; // r0@24
  bool v21; // zf@24
  int v22; // r0@27
  unsigned int *v23; // r0@27
  unsigned int v24; // r1@27
  unsigned int v25; // r2@30
  unsigned int v26; // r3@31
  signed int v27; // r4@32
  int v28; // r8@32
  unsigned __int64 *v29; // r1@36
  unsigned int *v30; // r1@39
  unsigned int v31; // r0@41
  unsigned int *v32; // r4@45
  unsigned int v33; // r0@47
  unsigned int v34; // r0@54
  Mob *v35; // r4@59
  int v36; // r0@59
  int v37; // [sp+0h] [bp-30h]@59

  v1 = this;
  result = Entity::isTrading(*((Entity **)this + 6));
  if ( !result )
  {
    result = *((_DWORD *)v1 + 3);
    v5 = __OFSUB__(result, 1);
    v3 = result == 1;
    v4 = result - 1 < 0;
    if ( result >= 1 )
    {
      *((_DWORD *)v1 + 3) = --result;
      if ( (unsigned __int8)(v4 ^ v5) | v3 )
      {
        if ( *((_BYTE *)v1 + 16) )
        {
          v7 = (MerchantRecipe *)(*(_QWORD *)(*((_DWORD *)v1 + 7) + 4) >> 32);
          v6 = (MerchantRecipe *)*(_QWORD *)(*((_DWORD *)v1 + 7) + 4);
          if ( v6 != v7 )
          {
            v8 = 0;
            do
            {
              if ( MerchantRecipe::isDeprecated(v6) == 1 )
              {
                v9 = *(_QWORD *)((char *)v1 + 36);
                if ( (_DWORD)v9 == HIDWORD(v9) )
                  goto LABEL_62;
                v10 = 1;
                do
                {
                  v11 = *(_DWORD *)v9;
                  LODWORD(v9) = v9 + 4;
                  v12 = 0;
                  if ( v11 != v8 )
                    v12 = 1;
                  v10 &= v12;
                }
                while ( HIDWORD(v9) != (_DWORD)v9 );
                if ( v10 )
LABEL_62:
                  v13 = Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 6) + 552));
                  v14 = Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 6) + 552));
                  MerchantRecipe::increaseMaxUses(v6, v14 % 6 + v13 % 6 + 2);
              }
              v6 = (MerchantRecipe *)((char *)v6 + 232);
              ++v8;
            }
            while ( v6 != v7 );
          }
          ++*(_DWORD *)v1;
          *((_BYTE *)v1 + 16) = 0;
          if ( Entity::hasType(*((_DWORD *)v1 + 6), 783) )
            v15 = *((_DWORD *)v1 + 6);
            v16 = *(_DWORD *)(v15 + 4168);
            if ( v16 )
              v17 = (unsigned int *)(v16 + 8);
              v18 = *(_DWORD *)(v15 + 4164);
              if ( &pthread_create )
                __dmb();
                  v19 = __ldrex(v17);
                while ( __strex(v19 + 1, v17) );
              else
                ++*v17;
              v20 = *(_DWORD *)(v16 + 4);
              v21 = v20 == 0;
              if ( v20 )
                v21 = *((_DWORD *)v1 + 2) == 0;
              if ( !v21 )
                v22 = Entity::getLevel(*((Entity **)v1 + 6));
                Level::broadcastEntityEvent(v22, *((_DWORD *)v1 + 6), 23, 0);
                v23 = (unsigned int *)(v16 + 4);
                v24 = *(_DWORD *)(v16 + 4);
                  while ( 1 )
                  {
                    if ( !v24 )
                    {
                      v27 = 1;
                      v28 = 0;
                      goto LABEL_36;
                    }
                    __dmb();
                    v25 = __ldrex(v23);
                    if ( v25 == v24 )
                      break;
                    __clrex();
                    v24 = v25;
                  }
                  v26 = __strex(v24 + 1, v23);
                  v24 = v25;
                while ( v26 );
                v27 = 0;
                v28 = v16;
                if ( !*v23 )
                  v27 = 1;
LABEL_36:
                v29 = (unsigned __int64 *)Entity::getUniqueID(*((Entity **)v1 + 2));
                if ( v27 )
                  v18 = 0;
                Village::modifyStanding(v18, v29, 1);
                if ( v28 )
                  v30 = (unsigned int *)(v28 + 4);
                  if ( &pthread_create )
                    do
                      v31 = __ldrex(v30);
                    while ( __strex(v31 - 1, v30) );
                  else
                    v31 = (*v30)--;
                  if ( v31 == 1 )
                    v32 = (unsigned int *)(v28 + 8);
                    (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 8))(v28);
                    if ( &pthread_create )
                      __dmb();
                      do
                        v33 = __ldrex(v32);
                      while ( __strex(v33 - 1, v32) );
                    else
                      v33 = (*v32)--;
                    if ( v33 == 1 )
                      (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 12))(v28);
                  v34 = __ldrex(v17);
                while ( __strex(v34 - 1, v17) );
                v34 = (*v17)--;
              if ( v34 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
        }
        v35 = (Mob *)*((_DWORD *)v1 + 6);
        v36 = MobEffect::getId((MobEffect *)MobEffect::REGENERATION);
        MobEffectInstance::MobEffectInstance((int)&v37, v36, 200, 0);
        result = Mob::addEffect(v35, (const MobEffectInstance *)&v37);
      }
    }
  }
  return result;
}


int __fastcall TradeableComponent::createDataPacket(int a1, int a2, char a3)
{
  int v3; // r5@1
  int v4; // r4@1
  Entity *v5; // r0@1
  char v6; // r7@1
  __int64 v7; // r0@2
  int v8; // r9@4
  char *v9; // r6@4
  __int16 v10; // r10@4
  int v11; // r11@4
  int result; // r0@4
  signed int v13; // [sp+4h] [bp-34h]@2
  signed int v14; // [sp+8h] [bp-30h]@2
  int v15; // [sp+Ch] [bp-2Ch]@4

  v3 = a2;
  v4 = a1;
  v5 = *(Entity **)(a2 + 8);
  v6 = a3;
  if ( v5 )
  {
    v7 = *(_QWORD *)Entity::getUniqueID(v5);
    v13 = HIDWORD(v7);
    v14 = v7;
  }
  else
    v14 = -1;
    v13 = -1;
  TradeableComponent::_refreshTrades((TradeableComponent *)v3);
  (*(void (__fastcall **)(int *))(**(_DWORD **)(v3 + 28) + 24))(&v15);
  v8 = v15;
  v9 = Entity::getUniqueID(*(Entity **)(v3 + 24));
  v10 = *(_WORD *)(v3 + 16);
  v11 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v4 + 4) = 2;
  *(_DWORD *)(v4 + 8) = 1;
  *(_BYTE *)(v4 + 12) = 0;
  *(_DWORD *)v4 = &off_26E992C;
  *(_BYTE *)(v4 + 13) = v6;
  *(_BYTE *)(v4 + 14) = 15;
  sub_21E8AF4((int *)(v4 + 16), (int *)(v3 + 32));
  *(_DWORD *)(v4 + 20) = 0;
  *(_DWORD *)(v4 + 24) = v11;
  *(_BYTE *)(v4 + 28) = v10;
  *(_BYTE *)(v4 + 29) = HIBYTE(v10);
  *(_QWORD *)(v4 + 32) = *(_QWORD *)v9;
  *(_DWORD *)(v4 + 40) = v14;
  *(_DWORD *)(v4 + 44) = v13;
  CompoundTag::CompoundTag(v4 + 48, v8);
  result = v15;
  if ( v15 )
    result = (*(int (**)(void))(*(_DWORD *)v15 + 4))();
  return result;
}


void __fastcall TradeableComponent::notifyTrade(TradeableComponent *this, int a2)
{
  TradeableComponent *v2; // r4@1
  int v3; // r8@1
  MerchantRecipe *v4; // r9@1
  int v9; // t1@4
  signed int v10; // r0@4
  int v11; // r6@4
  Player *v12; // r11@4
  void (__fastcall *v13)(int, signed int, char *, signed int); // r5@4
  char *v14; // r7@5
  int v15; // r0@5
  signed int v16; // r1@5
  Level *v17; // r0@7
  Level *v18; // r0@8
  int v19; // r0@8
  unsigned int v20; // r5@9
  int v21; // r6@11
  __int64 v22; // r0@14
  void *v23; // r5@16
  unsigned int v24; // r2@16
  unsigned int v25; // r1@18
  unsigned int v26; // r7@18
  char *v27; // r10@24
  char *v28; // r6@26
  int v29; // r6@28
  Player *v30; // r5@34
  const Vec3 *v31; // r0@34
  int v32; // [sp+4h] [bp-6Ch]@24
  char v33; // [sp+8h] [bp-68h]@8
  void **v34; // [sp+10h] [bp-60h]@8
  signed int v35; // [sp+14h] [bp-5Ch]@8
  signed int v36; // [sp+18h] [bp-58h]@8
  char v37; // [sp+1Ch] [bp-54h]@8
  __int64 v38; // [sp+20h] [bp-50h]@8
  char v39; // [sp+28h] [bp-48h]@8
  int v40; // [sp+2Ch] [bp-44h]@8
  char v41; // [sp+30h] [bp-40h]@6
  char v42; // [sp+3Ch] [bp-34h]@5
  float v43; // [sp+48h] [bp-28h]@1

  v2 = this;
  v3 = a2;
  v4 = (MerchantRecipe *)(*(_DWORD *)(*((_DWORD *)this + 7) + 4) + 232 * a2);
  MerchantRecipe::increaseUses(v4);
  v43 = 0.0;
  if ( Entity::getAmbientSoundIntervalMin(*((Entity **)v2 + 6), &v43) == 1 )
  {
    __asm { VLDREQ          S0, [SP,#0x70+var_28] }
  }
  else
    __asm { VLDRNE          S0, =0.0 }
    v43 = 0.0;
  v9 = *((_DWORD *)v2 + 6);
  __asm
    VNEG.F32        S0, S0
    VCVTR.S32.F32   S0, S0
    VSTR            S0, [R0]
  v10 = Entity::getTradingPlayer(*((Entity **)v2 + 6));
  v11 = *((_DWORD *)v2 + 6);
  v12 = (Player *)v10;
  v13 = *(void (__fastcall **)(int, signed int, char *, signed int))(*(_DWORD *)v11 + 556);
  if ( v10 )
    v14 = &v42;
    Entity::getAttachPos((AABB *)&v42, *((_DWORD *)v2 + 6), 3, 0);
    v15 = v11;
    v16 = 111;
    v14 = &v41;
    Entity::getAttachPos((AABB *)&v41, *((_DWORD *)v2 + 6), 3, 0);
    v16 = 113;
  v13(v15, v16, v14, -1);
  v17 = (Level *)Entity::getLevel(*((Entity **)v2 + 6));
  if ( Level::isClientSide(v17) )
    Entity::getRuntimeID((Entity *)&v33, *((_DWORD *)v2 + 6));
    v35 = 2;
    v36 = 1;
    v37 = 0;
    v34 = &off_26DA5D0;
    v38 = *(_QWORD *)&v33;
    v39 = 62;
    v40 = v3;
    v18 = (Level *)Entity::getLevel(*((Entity **)v2 + 6));
    v19 = Level::getPacketSender(v18);
    (*(void (__cdecl **)(int))(*(_DWORD *)v19 + 8))(v19);
    v20 = Random::_genRandInt32((Random *)(*((_DWORD *)v2 + 6) + 552)) & 3;
    if ( MerchantRecipe::getUses(v4) != 1 && Random::_genRandInt32((Random *)(*((_DWORD *)v2 + 6) + 552)) % 5 )
    {
      v21 = v20 + 3;
    }
    else
      v21 = v20 | 8;
      *((_DWORD *)v2 + 10) = *((_DWORD *)v2 + 9);
      *((_DWORD *)v2 + 3) = 40;
      *((_BYTE *)v2 + 16) = 1;
      *((_BYTE *)v2 + 17) = 1;
      *((_DWORD *)v2 + 2) = v12;
    if ( MerchantRecipe::isDeprecated(v4) == 1 )
      v22 = *((_QWORD *)v2 + 5);
      if ( (_DWORD)v22 == HIDWORD(v22) )
      {
        v23 = (void *)*((_DWORD *)v2 + 9);
        v24 = ((signed int)v22 - (signed int)v23) >> 2;
        if ( !v24 )
          v24 = 1;
        HIDWORD(v22) = v24 + (((signed int)v22 - (signed int)v23) >> 2);
        v26 = v24 + (((signed int)v22 - (signed int)v23) >> 2);
        if ( 0 != HIDWORD(v22) >> 30 )
          v26 = 0x3FFFFFFF;
        if ( v25 < v24 )
        if ( v26 )
        {
          if ( v26 >= 0x40000000 )
            sub_21E57F4();
          v32 = v21;
          v27 = (char *)operator new(4 * v26);
          LODWORD(v22) = *(_QWORD *)((char *)v2 + 36) >> 32;
          v23 = (void *)*(_QWORD *)((char *)v2 + 36);
        }
        else
          v27 = 0;
        v28 = &v27[v22 - (_DWORD)v23];
        *(_DWORD *)&v27[v22 - (_DWORD)v23] = v3;
        if ( 0 != ((signed int)v22 - (signed int)v23) >> 2 )
          _aeabi_memmove4(v27, v23);
        v29 = (int)(v28 + 4);
        if ( v23 )
          operator delete(v23);
        *((_DWORD *)v2 + 9) = v27;
        *((_DWORD *)v2 + 10) = v29;
        v21 = v32;
        *((_DWORD *)v2 + 11) = &v27[4 * v26];
      }
      else
        *(_DWORD *)v22 = v3;
        *((_DWORD *)v2 + 10) = v22 + 4;
    if ( *(_DWORD *)MerchantRecipe::getBuyAItem(v4) == Item::mEmerald )
      *((_DWORD *)v2 + 5) += *(_BYTE *)(MerchantRecipe::getBuyAItem(v4) + 14);
    if ( MerchantRecipe::shouldRewardExp(v4) == 1 )
      v30 = (Player *)Entity::getRegion(*((Entity **)v2 + 6));
      v31 = (const Vec3 *)(*(int (__cdecl **)(_DWORD))(**((_DWORD **)v2 + 6) + 52))(*((_DWORD *)v2 + 6));
      ExperienceOrb::spawnOrbs(v30, v31, v21, 0, v12);
}
