

int __fastcall ProtectionEnchant::getDamageProtection(ProtectionEnchant *this, int a2, const EntityDamageSource *a3)
{
  ProtectionEnchant *v3; // r4@1
  int v4; // r5@1
  int v5; // r0@1
  int v6; // r2@1

  v3 = this;
  v4 = a2;
  v5 = EntityDamageSource::getCause(a3);
  _ZF = v5 == 16;
  _R1 = 0;
  if ( v5 != 16 )
  {
    v6 = v5 | 1;
    _ZF = (v5 | 1) == 13;
  }
  if ( !_ZF )
    _R1 = v4 * v4;
    __asm
    {
      VMOV.F32        S0, #6.0
      VMOV            S2, R1
      VCVT.F32.S32    S2, S2
      VADD.F32        S0, S2, S0
    }
    switch ( *((_DWORD *)v3 + 1) )
      case 0:
        __asm
        {
          VLDR            S4, =0.0; jumptable 017ED26E case 0
          VMOV.F32        S2, #0.75
        }
        if ( v5 == 1 )
          __asm { VMOVEQ.F32      S2, S4 }
        if ( v5 == 4 )
        break;
      case 1:
          VMOV.F32        S4, #1.25; jumptable 017ED26E case 1
          VLDR            S2, =0.0
        if ( v6 == 7 )
        if ( v5 == 22 )
      case 2:
          VMOV.F32        S4, #2.5; jumptable 017ED26E case 2
        if ( v5 == 5 )
      case 3:
          VMOV.F32        S4, #1.5; jumptable 017ED26E case 3
        if ( v6 == 11 )
      case 4:
          VMOV.F32        S4, #1.5; jumptable 017ED26E case 4
        if ( v5 == 3 )
      default:
        __asm { VLDR            S2, =0.0; jumptable 017ED26E default case }
      VLDR            S4, =0.33333
      VMUL.F32        S0, S0, S4
      VMUL.F32        S0, S0, S2
      VMOV            R0, S0
    _R0 = floorf(_R0);
      VMOV            S0, R0
      VCVTR.S32.F32   S0, S0
      VMOV            R1, S0
  return _R1;
}


void __fastcall ProtectionEnchant::doPostHurt(ProtectionEnchant *this, ItemInstance *a2, Mob *a3, Mob *a4, int a5)
{
  ProtectionEnchant::doPostHurt(this, a2, a3, a4, a5);
}


void __fastcall ProtectionEnchant::~ProtectionEnchant(ProtectionEnchant *this)
{
  Enchant *v1; // r0@1

  v1 = Enchant::~Enchant(this);
  j_j_j__ZdlPv_6((void *)v1);
}


unsigned int __fastcall ProtectionEnchant::getThornsDamage(ProtectionEnchant *this, int a2)
{
  int v2; // r4@1
  Random *v3; // r0@1
  unsigned int result; // r0@2

  v2 = a2;
  v3 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  if ( v2 < 11 )
    result = (Random::_genRandInt32(v3) & 3) + 1;
  else
    result = v2 - 10;
  return result;
}


_DWORD *__fastcall ProtectionEnchant::ProtectionEnchant(int a1, EnchantUtils *a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)Enchant::Enchant(a1, a2, a3, a4, a5, a6, a7);
  *result = &off_27017E4;
  return result;
}


void __fastcall ProtectionEnchant::doPostHurt(ProtectionEnchant *this, ItemInstance *a2, Mob *a3, Mob *a4, int a5)
{
  Entity *v5; // r6@1
  Entity *v6; // r4@1
  ItemInstance *v7; // r5@1
  Random *v9; // r0@2
  Random *v15; // r0@5
  int v16; // r2@6
  Level *v17; // r8@8
  int v18; // r7@8
  int v19; // r1@10
  char v20; // [sp+14h] [bp-4Ch]@8
  char v21; // [sp+20h] [bp-40h]@5

  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( *((_DWORD *)this + 1) == 5 )
  {
    _R7 = a5;
    v9 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
    _R0 = Random::_genRandInt32(v9);
    __asm
    {
      VMOV            S0, R0
      VLDR            D1, =2.32830644e-10
      VLDR            S4, =0.15
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D1
      VMOV            S2, R7
      VCVT.F32.F64    S18, D0
      VCVT.F32.S32    S2, S2
      VMUL.F32        S16, S2, S4
      VCMPE.F32       S18, S16
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF && (*(int (__fastcall **)(Entity *))(*(_DWORD *)v5 + 316))(v5) == 1 )
      EntityDamageSource::EntityDamageSource((int)&v21, 18);
      v15 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
      if ( a5 < 11 )
        v16 = (Random::_genRandInt32(v15) & 3) + 1;
      else
        v16 = a5 - 10;
      Entity::hurt(v5, (const EntityDamageSource *)&v21, v16, 1, 0);
      EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v21);
      v17 = (Level *)Entity::getLevel(v5);
      v18 = Entity::getRegion(v5);
      Entity::getAttachPos((AABB *)&v20, (int)v5, 1, 0);
      Level::broadcastSoundEvent(v17, v18, 78, (int)&v20, -1, 1, 0, 0);
    if ( *((_BYTE *)v7 + 15) )
      __asm { VCMPE.F32       S18, S16 }
      v19 = 1;
      __asm { VMRS            APSR_nzcv, FPSCR }
      if ( _NF ^ _VF )
        v19 = 3;
      ItemInstance::hurtAndBreak(v7, v19, v6);
  }
}


int __fastcall ProtectionEnchant::getMaxCost(ProtectionEnchant *this, int a2)
{
  ProtectionEnchant *v2; // r4@1
  int result; // r0@2
  int v4; // r0@3
  unsigned int v5; // r1@3

  v2 = this;
  if ( *((_DWORD *)this + 1) == 5 )
  {
    result = Enchant::getMinCost(this, a2) + 50;
  }
  else
    v4 = (*(int (__fastcall **)(ProtectionEnchant *, int))(*(_DWORD *)this + 8))(this, a2);
    v5 = *((_DWORD *)v2 + 1);
    if ( v5 <= 4 )
      result = v4 + dword_262E640[v5];
    else
      result = v4 - 1;
  return result;
}


int __fastcall ProtectionEnchant::getMinCost(ProtectionEnchant *this, int a2)
{
  unsigned int v2; // r0@1
  signed int v3; // r2@2
  signed int v4; // r0@2

  v2 = *((_DWORD *)this + 1);
  if ( v2 > 5 )
  {
    v4 = -1;
    v3 = -1;
  }
  else
    v3 = dword_262E620[v2];
    v4 = dword_262E600[v2];
  return v4 + v3 * (a2 - 1);
}


signed int __fastcall ProtectionEnchant::isProtectionEnchant(ProtectionEnchant *this)
{
  return 1;
}


signed int __fastcall ProtectionEnchant::getLevelCostSpanByType(ProtectionEnchant *this)
{
  unsigned int v1; // r0@1
  signed int result; // r0@2

  v1 = *((_DWORD *)this + 1);
  if ( v1 <= 4 )
    result = dword_262E640[v1];
  else
    result = -1;
  return result;
}


void __fastcall ProtectionEnchant::~ProtectionEnchant(ProtectionEnchant *this)
{
  ProtectionEnchant::~ProtectionEnchant(this);
}


signed int __fastcall ProtectionEnchant::getMaxLevel(ProtectionEnchant *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 1);
  result = 4;
  if ( v1 == 5 )
    result = 3;
  return result;
}
