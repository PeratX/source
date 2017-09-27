

int __fastcall WitherTargetHighestDamage::start(WitherTargetHighestDamage *this)
{
  return (*(int (__fastcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 13) + 340))(
           *((_DWORD *)this + 13),
           *((_DWORD *)this + 15));
}


signed int __fastcall WitherTargetHighestDamage::_canAttack(int a1, Entity *a2, int a3, int a4, int a5, _DWORD *a6)
{
  Entity *v6; // r6@1
  int v7; // r9@1
  int v8; // r5@1
  int v9; // r8@1
  AttributeInstance *v10; // r0@1
  signed int result; // r0@2

  v6 = a2;
  v7 = a1;
  v8 = a3;
  v9 = a4;
  v10 = (AttributeInstance *)(*(int (__fastcall **)(Entity *, void *))(*(_DWORD *)a2 + 1000))(
                               a2,
                               &SharedAttributes::FOLLOW_RANGE);
  _R4 = j_AttributeInstance::getCurrentValue(v10);
  _R7 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v6 + 52))(v6);
  _R0 = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 52))(v8);
  __asm
  {
    VLDR            S0, [R0]
    VLDR            S6, [R7]
    VLDR            S2, [R0,#4]
    VLDR            S8, [R7,#4]
    VSUB.F32        S0, S6, S0
    VLDR            S4, [R0,#8]
    VSUB.F32        S2, S8, S2
    VLDR            S10, [R7,#8]
    VSUB.F32        S4, S10, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VMOV            S2, R4
    VADD.F32        S0, S0, S4
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    result = j_TargetGoal::_canAttack(v7, v6, v8, v9, a5, a6);
  else
    result = 0;
  return result;
}


int __fastcall WitherTargetHighestDamage::getHighestDamageTarget(WitherTargetHighestDamage *this)
{
  WitherTargetHighestDamage *v1; // r9@1
  int v2; // r6@1
  int v3; // r10@1
  int v4; // r11@2
  int v5; // r5@3
  int v6; // r1@3
  int v7; // r2@3
  int v8; // r3@3
  Level *v9; // r0@3
  int v10; // r0@3
  int v11; // r7@3
  int v13; // [sp+8h] [bp-38h]@3
  int v14; // [sp+Ch] [bp-34h]@3
  int v15; // [sp+10h] [bp-30h]@3
  int v16; // [sp+14h] [bp-2Ch]@3

  v1 = this;
  v2 = *((_DWORD *)j_WitherBoss::getPlayerParty(*((WitherBoss **)this + 14)) + 2);
  v3 = 0;
  if ( v2 )
  {
    v4 = 0;
    v3 = 0;
    do
    {
      v6 = *(_DWORD *)(v2 + 12);
      v7 = *(_DWORD *)(v2 + 16);
      v8 = *(_DWORD *)(v2 + 20);
      v5 = *(_DWORD *)(v2 + 24);
      v13 = *(_DWORD *)(v2 + 8);
      v14 = v6;
      v15 = v7;
      v16 = v8;
      v9 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 14));
      v10 = j_Level::getPlayer(v9, (const mce::UUID *)&v13);
      v11 = v10;
      if ( v5 > v4
        && v10
        && (*(int (__fastcall **)(WitherTargetHighestDamage *, _DWORD, int, _DWORD))(*(_DWORD *)v1 + 44))(
             v1,
             *((_DWORD *)v1 + 14),
             v10,
             0) )
      {
        v4 = v5;
        v3 = v11;
      }
      v2 = *(_DWORD *)v2;
    }
    while ( v2 );
  }
  return v3;
}


void __fastcall WitherTargetHighestDamage::~WitherTargetHighestDamage(WitherTargetHighestDamage *this)
{
  WitherTargetHighestDamage::~WitherTargetHighestDamage(this);
}


int __fastcall WitherTargetHighestDamage::WitherTargetHighestDamage(int a1, int a2, float a3)
{
  int v3; // r4@1
  int v4; // r5@1

  v3 = a1;
  v4 = a2;
  j_TargetGoal::TargetGoal(a1, a2, a3, 0, 0, 0, 1098907648, 0);
  *(_DWORD *)v3 = &off_271B084;
  *(_QWORD *)(v3 + 56) = (unsigned int)v4;
  j_Goal::setRequiredControlFlags((Goal *)v3, 1);
  return v3;
}


signed int __fastcall WitherTargetHighestDamage::canContinueToUse(WitherTargetHighestDamage *this)
{
  WitherTargetHighestDamage *v1; // r8@1
  int v2; // r7@2
  int v3; // r10@2
  int v4; // r11@3
  int v5; // r5@4
  int v6; // r1@4
  int v7; // r2@4
  int v8; // r3@4
  Level *v9; // r0@4
  int v10; // r0@4
  int v11; // r6@4
  signed int result; // r0@10
  int v13; // [sp+8h] [bp-38h]@4
  int v14; // [sp+Ch] [bp-34h]@4
  int v15; // [sp+10h] [bp-30h]@4
  int v16; // [sp+14h] [bp-2Ch]@4

  v1 = this;
  if ( j_TargetGoal::canContinueToUse(this) != 1 )
    goto LABEL_14;
  v2 = *((_DWORD *)j_WitherBoss::getPlayerParty(*((WitherBoss **)v1 + 14)) + 2);
  v3 = 0;
  if ( v2 )
  {
    v4 = 0;
    v3 = 0;
    do
    {
      v6 = *(_DWORD *)(v2 + 12);
      v7 = *(_DWORD *)(v2 + 16);
      v8 = *(_DWORD *)(v2 + 20);
      v5 = *(_DWORD *)(v2 + 24);
      v13 = *(_DWORD *)(v2 + 8);
      v14 = v6;
      v15 = v7;
      v16 = v8;
      v9 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 14));
      v10 = j_Level::getPlayer(v9, (const mce::UUID *)&v13);
      v11 = v10;
      if ( v5 > v4 && v10 )
      {
        if ( (*(int (__fastcall **)(WitherTargetHighestDamage *, _DWORD, int, _DWORD))(*(_DWORD *)v1 + 44))(
               v1,
               *((_DWORD *)v1 + 14),
               v10,
               0) )
        {
          v4 = v5;
          v3 = v11;
        }
      }
      v2 = *(_DWORD *)v2;
    }
    while ( v2 );
  }
  if ( v3 == *((_DWORD *)v1 + 15) )
    result = 1;
  else
LABEL_14:
    result = 0;
  return result;
}


signed int __fastcall WitherTargetHighestDamage::canUse(WitherTargetHighestDamage *this)
{
  WitherTargetHighestDamage *v1; // r11@1
  int v2; // r5@1
  signed int v3; // r4@1
  int v4; // r8@2
  int v5; // r10@2
  int v6; // r4@3
  int v7; // r1@3
  int v8; // r2@3
  int v9; // r3@3
  Level *v10; // r0@3
  int v11; // r0@3
  int v12; // r7@3
  int v14; // [sp+8h] [bp-38h]@3
  int v15; // [sp+Ch] [bp-34h]@3
  int v16; // [sp+10h] [bp-30h]@3
  int v17; // [sp+14h] [bp-2Ch]@3

  v1 = this;
  v2 = *((_DWORD *)j_WitherBoss::getPlayerParty(*((WitherBoss **)this + 14)) + 2);
  v3 = 0;
  if ( v2 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v7 = *(_DWORD *)(v2 + 12);
      v8 = *(_DWORD *)(v2 + 16);
      v9 = *(_DWORD *)(v2 + 20);
      v6 = *(_DWORD *)(v2 + 24);
      v14 = *(_DWORD *)(v2 + 8);
      v15 = v7;
      v16 = v8;
      v17 = v9;
      v10 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 14));
      v11 = j_Level::getPlayer(v10, (const mce::UUID *)&v14);
      v12 = v11;
      if ( v6 > v4
        && v11
        && (*(int (__fastcall **)(WitherTargetHighestDamage *, _DWORD, int, _DWORD))(*(_DWORD *)v1 + 44))(
             v1,
             *((_DWORD *)v1 + 14),
             v11,
             0) )
      {
        v4 = v6;
        v5 = v12;
      }
      v2 = *(_DWORD *)v2;
    }
    while ( v2 );
    v3 = 0;
    if ( v5
      && (*(int (__fastcall **)(WitherTargetHighestDamage *, _DWORD, int, _DWORD))(*(_DWORD *)v1 + 44))(
           v1,
           *((_DWORD *)v1 + 14),
           v5,
           0) == 1 )
      *((_DWORD *)v1 + 15) = v5;
      v3 = 1;
  }
  return v3;
}


void __fastcall WitherTargetHighestDamage::~WitherTargetHighestDamage(WitherTargetHighestDamage *this)
{
  WitherTargetHighestDamage *v1; // r4@1
  FilterGroup *v2; // r0@1
  FilterGroup *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_271B014;
  v3 = (FilterGroup *)(*((_QWORD *)this + 1) >> 32);
  v2 = (FilterGroup *)*((_QWORD *)this + 1);
  if ( v2 != v3 )
  {
    do
      v2 = (FilterGroup *)((char *)j_FilterGroup::~FilterGroup(v2) + 48);
    while ( v3 != v2 );
    v2 = (FilterGroup *)*((_DWORD *)v1 + 2);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  j_Goal::~Goal(v1);
  j_j_j__ZdlPv_7((void *)v1);
}
