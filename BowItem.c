

int __fastcall BowItem::BowItem(int a1, const void **a2, __int16 a3)
{
  int v3; // r4@1

  v3 = a1;
  j_Item::Item(a1, a2, a3);
  *(_DWORD *)v3 = &off_272074C;
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 116));
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 148));
  j_TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 180));
  *(_BYTE *)(v3 + 4) = 1;
  (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v3 + 28))(v3, 384);
  *(_DWORD *)(v3 + 12) = 0;
  *(_BYTE *)(v3 + 16) = 0;
  *(_BYTE *)(v3 + 33) = 1;
  (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v3 + 36))(v3, 4);
  (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 40))(v3);
  return v3;
}


int __fastcall BowItem::releaseUsing(BowItem *this, ItemInstance *a2, Player *a3, int a4)
{
  Player *v7; // r4@1
  int result; // r0@1
  ItemInstance *v9; // r10@1
  int v10; // r8@4
  PlayerInventoryProxy *v11; // r9@4
  char *v12; // r1@6
  signed int v13; // r11@6
  int v14; // r0@7
  Level *v16; // r5@15
  int v17; // r6@15
  int v18; // r0@16
  __int64 v19; // r1@16
  Level *v20; // r0@16
  Spawner *v21; // r6@16
  BlockSource *v22; // r7@16
  Entity *v23; // r6@16
  void *v24; // r0@16
  void *v25; // r0@17
  void *v26; // r0@18
  int v27; // r7@20
  int v28; // r0@21
  int v29; // r5@21
  int v33; // r0@27
  int v34; // r1@27
  const ItemInstance *v35; // r2@31
  signed int v36; // r1@31
  const ItemInstance *v37; // r2@31
  signed int v38; // r1@33
  const ItemInstance *v39; // r2@33
  int v40; // r0@39
  int v41; // r0@48
  signed int v42; // r1@48
  int v43; // r0@52
  unsigned int *v44; // r2@66
  signed int v45; // r1@68
  unsigned int *v46; // r2@70
  signed int v47; // r1@72
  unsigned int *v48; // r2@74
  signed int v49; // r1@76
  char v50; // [sp+10h] [bp-170h]@41
  int v51; // [sp+18h] [bp-168h]@45
  void *v52; // [sp+34h] [bp-14Ch]@43
  void *ptr; // [sp+44h] [bp-13Ch]@41
  char v54; // [sp+58h] [bp-128h]@39
  int v55; // [sp+5Ch] [bp-124h]@39
  char v56; // [sp+60h] [bp-120h]@21
  float v57; // [sp+6Ch] [bp-114h]@16
  int v58; // [sp+78h] [bp-108h]@16
  int v59; // [sp+7Ch] [bp-104h]@17
  int v60; // [sp+80h] [bp-100h]@16
  char v61; // [sp+84h] [bp-FCh]@16
  float v62; // [sp+8Ch] [bp-F4h]@16
  __int64 v65; // [sp+98h] [bp-E8h]@16
  int v66; // [sp+A0h] [bp-E0h]@16
  char v67; // [sp+A4h] [bp-DCh]@15
  ArrowItem *v68; // [sp+B0h] [bp-D0h]@8
  int v69; // [sp+B8h] [bp-C8h]@57
  char v70; // [sp+BEh] [bp-C2h]@12
  char v71; // [sp+BFh] [bp-C1h]@8
  void *v72; // [sp+D4h] [bp-ACh]@55
  void *v73; // [sp+E4h] [bp-9Ch]@53
  char v74; // [sp+F8h] [bp-88h]@4
  int v75; // [sp+100h] [bp-80h]@63
  void *v76; // [sp+11Ch] [bp-64h]@61
  void *v77; // [sp+12Ch] [bp-54h]@59

  __asm
  {
    VMOV.F32        S16, #1.0
    VLDR            S2, =0.05
  }
  v7 = a3;
  result = *((_DWORD *)this + 9) - a4;
  __asm { VLDR            S4, =0.1 }
  v9 = a2;
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
    VMUL.F32        S2, S0, S2
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S2
    VADD.F32        S0, S2, S0
    VLDR            S2, =0.33333
    VMUL.F32        S18, S0, S2
    VCMPE.F32       S18, S16
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S18, S16 }
    VCMPE.F32       S18, S4
  if ( !(_NF ^ _VF) )
    v10 = j_EnchantUtils::getEnchantLevel((EnchantUtils *)0x16, (int)a2, a3);
    v11 = (PlayerInventoryProxy *)j_Player::getSupplies(v7);
    j_ItemInstance::ItemInstance((ItemInstance *)&v74, Item::mArrow);
    if ( v10 || j_Mob::hasPriorityAmmunition(v7) != 1 )
    {
      v14 = j_PlayerInventoryProxy::getSlotWithItem(v11, (const ItemInstance *)&v74, 0, 0);
      v13 = 0;
      v12 = (char *)j_PlayerInventoryProxy::getItem((int)v11, v14, 0);
    }
    else
      v12 = j_Mob::getOffhandSlot(v7);
      v13 = 1;
    j_ItemInstance::ItemInstance((ItemInstance *)&v68, (int)v12);
    _ZF = v71 == 0;
    if ( v71 )
      _ZF = v68 == 0;
    if ( _ZF || j_ItemInstance::isNull((ItemInstance *)&v68) || !v70 || v68 != (ArrowItem *)Item::mArrow )
      j_ItemInstance::operator=((int)&v68, (int)&v74);
    j_MinecraftEventing::fireEventItemUsed((int)v7, v9, 5);
    v16 = (Level *)j_Entity::getLevel(v7);
    v17 = j_Entity::getRegion(v7);
    j_Entity::getAttachPos((AABB *)&v67, (int)v7, 2, 0);
    j_Level::broadcastSoundEvent(v16, v17, 21, (int)&v67, -1, 1, 0, 0);
    if ( !j_Level::isClientSide(v16) )
      v18 = (*(int (__fastcall **)(Player *))(*(_DWORD *)v7 + 52))(v7);
      v19 = *(_QWORD *)v18;
      v66 = *(_DWORD *)(v18 + 8);
      v65 = v19;
      j_Entity::getRotation((Entity *)&v61, (int)v7);
      j_Vec3::directionFromRotation((int)&v62, COERCE_FLOAT(&v61));
      v20 = (Level *)j_Entity::getLevel(v7);
      v21 = (Spawner *)j_Level::getSpawner(v20);
      v22 = (BlockSource *)j_Entity::getRegion(v7);
      j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v58, 4194384);
      __asm
      {
        VLDR            S0, [SP,#0x180+var_F4]
        VLDR            S2, [SP,#0x180+var_F0]
        VLDR            S4, [SP,#0x180+var_EC]
        VNEG.F32        S0, S0
        VNEG.F32        S2, S2
        VNEG.F32        S4, S4
        VSTR            S0, [SP,#0x180+var_114]
        VSTR            S2, [SP,#0x180+var_110]
        VSTR            S4, [SP,#0x180+var_10C]
      }
      v23 = j_Spawner::spawnProjectile(
              v21,
              v22,
              (const EntityDefinitionIdentifier *)&v58,
              v7,
              (const Vec3 *)&v65,
              (const Vec3 *)&v57);
      v24 = (void *)(v60 - 12);
      if ( (int *)(v60 - 12) != &dword_28898C0 )
        v44 = (unsigned int *)(v60 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v45 = __ldrex(v44);
          while ( __strex(v45 - 1, v44) );
        }
        else
          v45 = (*v44)--;
        if ( v45 <= 0 )
          j_j_j_j__ZdlPv_9(v24);
      v25 = (void *)(v59 - 12);
      if ( (int *)(v59 - 12) != &dword_28898C0 )
        v46 = (unsigned int *)(v59 - 4);
            v47 = __ldrex(v46);
          while ( __strex(v47 - 1, v46) );
          v47 = (*v46)--;
        if ( v47 <= 0 )
          j_j_j_j__ZdlPv_9(v25);
      v26 = (void *)(v58 - 12);
      if ( (int *)(v58 - 12) != &dword_28898C0 )
        v48 = (unsigned int *)(v58 - 4);
            v49 = __ldrex(v48);
          while ( __strex(v49 - 1, v48) );
          v49 = (*v48)--;
        if ( v49 <= 0 )
          j_j_j_j__ZdlPv_9(v26);
      if ( v23 )
        *((_DWORD *)v23 + 79) = 0;
        v27 = j_Entity::getProjectileComponent(v23);
        if ( v27 )
          v28 = j_Level::getDifficulty(v16);
          v29 = j_ProjectileComponent::getUncertainty(v27, v28);
          j_ProjectileComponent::getShooterAngle((ProjectileComponent *)&v56, (Mob *)v27, (int)v7);
          _R0 = j_ProjectileComponent::getThrowPower((ProjectileComponent *)v27);
          __asm
          {
            VMOV            S0, R0
            VMUL.F32        S0, S0, S18
            VMOV            R2, S0
          }
          j_Arrow::shoot(v23, (const Vec3 *)&v56, _R2, *(float *)&v29, (const Vec3 *)&Vec3::ZERO);
          *(_BYTE *)(v27 + 324) = 1;
            VMOV.F32        S0, #3.0
            VMUL.F32        S0, S18, S0
          j_Arrow::shoot(v23, (const Vec3 *)&v62, _R2, 1.0, (const Vec3 *)&Vec3::ZERO);
        j_ArrowItem::applyEffect(v68, v23, (const ItemInstance *)&v68);
        __asm
          VCMPE.F32       S18, S16
          VMRS            APSR_nzcv, FPSCR
        if ( _ZF )
          j_Arrow::setCritical(v23, 1);
        if ( v10 )
          v33 = j_Arrow::getAuxValue(v23);
          v34 = 0;
          if ( !v33 )
            v34 = 1;
        j_Arrow::setEnchantInfinity(v23, v34);
        v36 = j_EnchantUtils::getEnchantLevel((EnchantUtils *)0x13, (int)v9, v35);
        if ( v36 >= 1 )
          j_Arrow::setEnchantPower(v23, v36);
        v38 = j_EnchantUtils::getEnchantLevel((EnchantUtils *)0x14, (int)v9, v37);
        if ( v38 >= 1 )
          j_Arrow::setEnchantPunch(v23, v38);
        if ( j_EnchantUtils::getEnchantLevel((EnchantUtils *)0x15, (int)v9, v39) >= 1 )
          j_Arrow::setEnchantFlame(v23, 1);
    if ( !j_Abilities::getBool((int)v7 + 4320, (int **)&Abilities::INSTABUILD) )
      j_ItemInstance::hurtAndBreak(v9, 1, v7);
      if ( !*((_BYTE *)v9 + 14) )
        v40 = j_Player::getSupplies(v7);
        j_PlayerInventoryProxy::getSelectedSlot((PlayerInventoryProxy *)&v54, v40);
        j_PlayerInventoryProxy::clearSlot((int)v11, v55, v54);
      if ( v13 )
        j_ItemInstance::ItemInstance((ItemInstance *)&v50, (int)&v68);
        j_ItemInstance::remove((ItemInstance *)&v50, 1);
        (*(void (__fastcall **)(Player *, char *))(*(_DWORD *)v7 + 1100))(v7, &v50);
        if ( ptr )
          j_operator delete(ptr);
        if ( v52 )
          j_operator delete(v52);
        if ( v51 )
          (*(void (**)(void))(*(_DWORD *)v51 + 4))();
      else if ( *((_WORD *)v68 + 9) == *(_WORD *)(Item::mArrow + 18) )
        v41 = j_ItemInstance::getAuxValue((ItemInstance *)&v68);
        v42 = 0;
        if ( !v10 )
          v42 = 1;
        if ( v41 > 0 || v42 == 1 )
          v43 = j_ItemInstance::getId((ItemInstance *)&v68);
          j_PlayerInventoryProxy::removeResource(v11, v43);
    if ( v73 )
      j_operator delete(v73);
    if ( v72 )
      j_operator delete(v72);
    if ( v69 )
      (*(void (**)(void))(*(_DWORD *)v69 + 4))();
    v69 = 0;
    if ( v77 )
      j_operator delete(v77);
    if ( v76 )
      j_operator delete(v76);
    result = v75;
    if ( v75 )
      result = (*(int (**)(void))(*(_DWORD *)v75 + 4))();
  return result;
}


int __fastcall BowItem::getAnimationFrameFor(BowItem *this, Mob *a2, int a3)
{
  int v4; // r0@2
  int result; // r0@5

  _R4 = this;
  if ( a3 || (v4 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)a2 + 916))(a2)) == 0 )
  {
    result = 0;
  }
  else
    __asm
    {
      VMOV.F32        S6, #1.0
      VLDR            S2, =0.05
    }
    _R0 = *((_DWORD *)_R4 + 9) - v4;
      VLDR            S4, =0.1
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VMUL.F32        S2, S0, S2
      VMUL.F32        S0, S0, S4
      VLDR            S4, =0.33333
      VMUL.F32        S2, S2, S2
      VADD.F32        S0, S2, S0
      VLDR            S2, [R4,#0xC]
      VCVT.F32.S32    S2, S2
      VLDR            S4, =0.99
      VMUL.F32        S2, S2, S4
      VCMPE.F32       S0, S6
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S0, S6 }
      VMUL.F32        S0, S2, S0
      VCVTR.S32.F32   S0, S0
      VMOV            R0, S0
    result = _R0 + 1;
  return result;
}


int __fastcall BowItem::setIcon(int a1, int **a2, int a3)
{
  int v3; // r4@1
  char *v4; // r4@1
  int v5; // r9@1
  unsigned int *v6; // r2@2
  signed int v7; // r1@4
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  char *v10; // r1@18
  int v11; // r2@18
  int v12; // r3@18
  int v13; // r4@18
  int v14; // r5@18
  int v15; // r6@18
  int v16; // r7@18
  int v17; // r8@18
  int v18; // r0@18
  void *v19; // r0@18
  void *v20; // r0@19
  int v22; // [sp+Ch] [bp-54h]@1
  int v23; // [sp+14h] [bp-4Ch]@6
  char v24; // [sp+18h] [bp-48h]@1
  int v25; // [sp+30h] [bp-30h]@2
  int v26; // [sp+34h] [bp-2Ch]@18

  v3 = a1;
  v22 = a1;
  j_Item::setIcon(a1, a2, a3);
  *(_DWORD *)(v3 + 12) = 3;
  v4 = &v24;
  v5 = 0;
  do
  {
    sub_21E94B4((void **)&v23, "bow_pulling");
    j_Item::getTextureUVCoordinateSet((TextureUVCoordinateSet *)v4, (int **)&v23, v5);
    v10 = v4;
    v11 = *(_DWORD *)v4;
    v12 = *((_DWORD *)v4 + 1);
    v13 = *((_DWORD *)v4 + 2);
    v14 = *((_DWORD *)v10 + 3);
    v15 = *((_DWORD *)v10 + 4);
    v16 = *((_DWORD *)v10 + 5);
    v17 = v22 + 32 * v5;
    v18 = v17 + 116;
    *(_DWORD *)v18 = v11;
    *(_DWORD *)(v18 + 4) = v12;
    *(_DWORD *)(v18 + 8) = v13;
    *(_DWORD *)(v18 + 12) = v14;
    *(_DWORD *)(v18 + 16) = v15;
    *(_DWORD *)(v18 + 20) = v16;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)(v17 + 140),
      &v25);
    *(_DWORD *)(v17 + 144) = v26;
    v19 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
    {
      v6 = (unsigned int *)(v25 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    }
    v4 = &v24;
    v20 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v23 - 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        v9 = (*v8)--;
      if ( v9 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    ++v5;
  }
  while ( v5 < 3 );
  return v22;
}


signed int __fastcall BowItem::getEnchantSlot(BowItem *this)
{
  return 32;
}


ItemInstance *__fastcall BowItem::use(BowItem *this, ItemInstance *a2, Player *a3)
{
  BowItem *v3; // r6@1
  ItemInstance *v4; // r4@1
  Player *v5; // r5@1

  v3 = this;
  v4 = a2;
  v5 = a3;
  if ( j_Abilities::getBool((int)a3 + 4320, (int **)&Abilities::INSTABUILD)
    || *(_DWORD *)j_Mob::getOffhandSlot(v5) == Item::mArrow
    || (*(int (__fastcall **)(Player *, _DWORD))(*(_DWORD *)v5 + 1256))(v5, *(_WORD *)(Item::mArrow + 18)) == 1 )
  {
    j_Player::startUsingItem(v5, v4, *((_DWORD *)v3 + 9));
  }
  return v4;
}


int __fastcall BowItem::_getLaunchPower(BowItem *this, int a2)
{
  int result; // r0@3

  __asm { VLDR            S2, =0.05 }
  _R0 = *((_DWORD *)this + 9) - a2;
  __asm
  {
    VLDR            S4, =0.1
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
    VMUL.F32        S2, S0, S2
    VMUL.F32        S0, S0, S4
    VMOV.F32        S4, #1.0
    VMUL.F32        S2, S2, S2
    VADD.F32        S0, S2, S0
    VLDR            S2, =0.33333
    VMUL.F32        S0, S0, S2
    VCMPE.F32       S0, S4
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S4 }
  __asm { VMOV            R0, S0 }
  return result;
}


BowItem *__fastcall BowItem::~BowItem(BowItem *this)
{
  BowItem *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  unsigned int *v13; // r2@13
  signed int v14; // r1@15

  v1 = this;
  *(_DWORD *)this = &off_272074C;
  v2 = *((_DWORD *)this + 51);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 43);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v4 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 35);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v6 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  j_Item::~Item(v1);
  return v1;
}


signed int __fastcall BowItem::getEnchantValue(BowItem *this)
{
  return 1;
}


char *__fastcall BowItem::getIcon(BowItem *this, int a2, int a3, bool a4)
{
  char *result; // r0@2

  if ( a3 )
    result = (char *)this + 32 * a3 + 84;
  else
    result = (char *)*((_DWORD *)this + 15);
  return result;
}


void __fastcall BowItem::~BowItem(BowItem *this)
{
  BowItem *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15

  v1 = this;
  *(_DWORD *)this = &off_272074C;
  v2 = *((_DWORD *)this + 51);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 43);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v4 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 35);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v6 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  j_Item::~Item(v1);
  j_operator delete((void *)v1);
}


void __fastcall BowItem::~BowItem(BowItem *this)
{
  BowItem::~BowItem(this);
}
