

void __fastcall MeleeWeaponEnchant::~MeleeWeaponEnchant(MeleeWeaponEnchant *this)
{
  Enchant *v1; // r0@1

  v1 = Enchant::~Enchant(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall MeleeWeaponEnchant::doPostAttack(MeleeWeaponEnchant *this, Mob *a2, Mob *a3, int a4)
{
  Mob *v4; // r4@1
  MeleeWeaponEnchant *v5; // r6@1
  int v6; // r5@1
  int result; // r0@1
  Random *v8; // r0@5
  int v9; // r5@6
  int v10; // r0@11
  int v11; // [sp+0h] [bp-20h]@11

  v4 = a3;
  v5 = this;
  v6 = a4;
  result = (*(int (__fastcall **)(Mob *))(*(_DWORD *)a3 + 316))(a3);
  if ( result == 1 )
  {
    result = *((_DWORD *)v5 + 1);
    if ( result == 13 )
    {
      result = Entity::getStatusFlag((int)v4, 47);
      if ( !result )
        result = (*(int (__fastcall **)(Mob *, int))(*(_DWORD *)v4 + 504))(v4, 4 * v6);
    }
    else if ( result == 11 )
      result = Entity::hasCategory((int)v4, 0x2000);
      if ( result == 1 )
      {
        v8 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
        if ( v6 )
          v9 = Random::_genRandInt32(v8) % (10 * v6) + 20;
        else
          v9 = 20;
        v10 = MobEffect::getId((MobEffect *)MobEffect::MOVEMENT_SLOWDOWN);
        MobEffectInstance::MobEffectInstance((int)&v11, v10, v9);
        result = Mob::addEffect(v4, (const MobEffectInstance *)&v11);
      }
  }
  return result;
}


signed int __fastcall MeleeWeaponEnchant::isMeleeDamageEnchant(MeleeWeaponEnchant *this)
{
  return 1;
}


void __fastcall MeleeWeaponEnchant::~MeleeWeaponEnchant(MeleeWeaponEnchant *this)
{
  MeleeWeaponEnchant::~MeleeWeaponEnchant(this);
}


int __fastcall MeleeWeaponEnchant::getMinCost(MeleeWeaponEnchant *this, int a2)
{
  unsigned int v2; // r0@1
  signed int v3; // r2@2
  signed int v4; // r0@2

  v2 = *((_DWORD *)this + 1) - 9;
  if ( v2 > 4 )
  {
    v4 = -1;
    v3 = -1;
  }
  else
    v3 = dword_262E5C0[v2];
    v4 = dword_262E5A0[v2];
  return v4 + v3 * (a2 - 1);
}


signed int __fastcall MeleeWeaponEnchant::getMaxLevel(MeleeWeaponEnchant *this)
{
  unsigned int v1; // r0@1
  signed int result; // r0@2

  v1 = *((_DWORD *)this + 1) - 9;
  if ( v1 <= 4 )
    result = dword_262E5E0[v1];
  else
    result = -1;
  return result;
}


int __fastcall MeleeWeaponEnchant::getMaxCost(MeleeWeaponEnchant *this, int a2)
{
  int result; // r0@2

  if ( (*((_DWORD *)this + 1) & 0xFFFFFFFE) == 12 )
    result = Enchant::getMinCost(this, a2) + 50;
  else
    result = (*(int (**)(void))(*(_DWORD *)this + 8))() + 20;
  return result;
}


int __fastcall MeleeWeaponEnchant::getDamageBonus(MeleeWeaponEnchant *this, int a2, const Entity *a3)
{
  const Entity *v3; // r5@1
  MeleeWeaponEnchant *v5; // r6@1
  signed int v6; // r0@1
  int v11; // r0@2
  signed int v12; // r5@7
  void *v13; // r0@7
  unsigned int *v14; // r2@8
  signed int v15; // r1@10
  int result; // r0@15
  unsigned int *v17; // r2@16
  signed int v18; // r1@18
  int v19; // [sp+4h] [bp-2Ch]@12
  int v20; // [sp+Ch] [bp-24h]@7

  v3 = a3;
  _R4 = a2;
  v5 = this;
  v6 = Entity::hasCategory((int)a3, 2);
  __asm { VLDR            S0, =0.0 }
  if ( v6 != 1 )
    goto LABEL_15;
  v11 = *((_DWORD *)v5 + 1);
  if ( v11 == 11 )
  {
    sub_21E94B4((void **)&v19, "arthropod");
    v12 = Entity::hasFamily((int)v3, (int)&v19);
    v13 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
    {
      v17 = (unsigned int *)(v19 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      }
      else
        v18 = (*v17)--;
      if ( v18 <= 0 )
LABEL_25:
        j_j_j_j__ZdlPv_9(v13);
        goto LABEL_13;
    }
  }
  else
    if ( v11 != 10 )
      if ( v11 == 9 )
        __asm { VMOVEQ.F32      S0, #1.25 }
      goto LABEL_15;
    sub_21E94B4((void **)&v20, "undead");
    v12 = Entity::hasFamily((int)v3, (int)&v20);
    v13 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v20 - 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 <= 0 )
        goto LABEL_25;
LABEL_13:
  __asm
    VMOV.F32        S2, #2.5
    VLDR            S0, =0.0
  if ( v12 )
    __asm { VMOVNE.F32      S0, S2 }
LABEL_15:
    VMOV            S2, R4
    VCVT.F32.S32    S2, S2
    VMUL.F32        S0, S0, S2
    VMOV            R0, S0
  return result;
}


_DWORD *__fastcall MeleeWeaponEnchant::MeleeWeaponEnchant(int a1, EnchantUtils *a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)Enchant::Enchant(a1, a2, a3, a4, a5, a6, a7);
  *result = &off_270176C;
  return result;
}
