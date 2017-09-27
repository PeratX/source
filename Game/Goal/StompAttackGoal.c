

_DWORD *__fastcall StompAttackGoal::appendDebugInfo(int a1, const void **a2)
{
  const void **v2; // r5@1
  int v3; // r6@1
  _DWORD *result; // r0@1
  _DWORD *v5; // r0@2
  void *v6; // r0@2
  void **v7; // r0@3
  void *v8; // r0@3
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  int v13; // [sp+0h] [bp-D8h]@2
  void **v14; // [sp+4h] [bp-D4h]@2
  int v15; // [sp+8h] [bp-D0h]@4
  void **v16; // [sp+Ch] [bp-CCh]@2
  void **v17; // [sp+10h] [bp-C8h]@2
  int v18; // [sp+2Ch] [bp-ACh]@4
  int v19; // [sp+34h] [bp-A4h]@3
  int v20; // [sp+38h] [bp-A0h]@4

  v2 = a2;
  v3 = a1;
  sub_21E7408(a2, "StompAttack", 0xBu);
  result = (_DWORD *)j_Entity::getAngryComponent(*(Entity **)(v3 + 8));
  if ( result )
  {
    sub_21D103C((int)&v14, 24);
    sub_21CBF38((char *)&v16, (int)" ", 1);
    v5 = (_DWORD *)j_Entity::getAngryComponent(*(Entity **)(v3 + 8));
    sub_21CC43C(&v16, *v5);
    sub_21CFED8(&v13, (int)&v17);
    sub_21E72F0(v2, (const void **)&v13);
    v6 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
    {
      v9 = (unsigned int *)(v13 - 4);
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
        j_j_j_j__ZdlPv_9(v6);
    }
    v7 = off_26D3F84;
    v14 = off_26D3F60;
    *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v14) = off_26D3F80[0];
    v16 = v7;
    v17 = &off_27734E8;
    v8 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v19 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    v17 = &off_26D40A8;
    sub_21C802C((unsigned int **)&v18);
    v14 = (void **)off_26D3F68;
    *(void ***)((char *)&v14 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
    v15 = 0;
    result = sub_21B6560(&v20);
  }
  return result;
}


void __fastcall StompAttackGoal::~StompAttackGoal(StompAttackGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_MeleeAttackGoal::~MeleeAttackGoal(this);
  j_j_j__ZdlPv_7(v1);
}


void __fastcall StompAttackGoal::~StompAttackGoal(StompAttackGoal *this)
{
  StompAttackGoal::~StompAttackGoal(this);
}


signed int __fastcall StompAttackGoal::tick(StompAttackGoal *this)
{
  signed int result; // r0@1
  int v3; // r0@2
  unsigned int v4; // r2@3
  unsigned int v5; // r3@3
  int v6; // r0@4
  int v7; // r1@4
  LookControl *v9; // r0@8
  int v10; // r3@8
  Entity *v11; // r0@8
  int v12; // r2@8
  Sensing *v16; // r0@9
  Level *v21; // r0@23
  char *v22; // r0@23
  unsigned int v23; // r0@23
  unsigned int v24; // r0@23
  int v25; // r0@24
  int v26; // r0@28
  int v27; // r2@28
  int v28; // r0@30
  int v29; // r2@33
  int v30; // r0@33
  int v31; // r3@35
  Entity *v32; // r0@35
  int v33; // r2@35
  int v39; // r1@36
  AttributeInstance *v40; // r0@40
  char v43; // [sp+8h] [bp-78h]@40
  int v44; // [sp+34h] [bp-4Ch]@35
  int v45; // [sp+38h] [bp-48h]@35
  int v46; // [sp+3Ch] [bp-44h]@35
  float v47; // [sp+40h] [bp-40h]@19
  __int64 v48; // [sp+44h] [bp-3Ch]@19
  int v49; // [sp+4Ch] [bp-34h]@8
  int v50; // [sp+50h] [bp-30h]@8
  int v51; // [sp+54h] [bp-2Ch]@8

  _R4 = this;
  result = *((_BYTE *)this + 36);
  if ( !result )
  {
    v3 = *((_DWORD *)_R4 + 8);
    if ( v3 )
    {
      v4 = *((_DWORD *)_R4 + 6);
      v5 = *((_DWORD *)_R4 + 7);
      if ( (v4 & v5) != -1 )
      {
        v6 = j_Level::fetchEntity(v3, v4 & v5, v4, v5, 0);
        *((_DWORD *)_R4 + 5) = v6;
        if ( !v6 )
          *((_DWORD *)_R4 + 5) = j_Level::fetchEntity(
                                   *((_DWORD *)_R4 + 8),
                                   v7,
                                   *((_QWORD *)_R4 + 3),
                                   *((_QWORD *)_R4 + 3) >> 32,
                                   0);
      }
    }
    result = 1;
    *((_BYTE *)_R4 + 36) = 1;
  }
  _R5 = *((_DWORD *)_R4 + 5);
  if ( !_R5 )
    return result;
  v9 = (LookControl *)j_Mob::getLookControl(*((Mob **)_R4 + 2));
  j_LookControl::setLookAt(v9, (Entity *)_R5, 30.0, 30.0);
  v10 = *(_DWORD *)(_R5 + 268);
  v11 = (Entity *)*((_DWORD *)_R4 + 2);
  v12 = *(_DWORD *)(_R5 + 80);
  v49 = *(_DWORD *)(_R5 + 72);
  v50 = v10;
  v51 = v12;
  _R6 = j_Entity::distanceToSqr(v11, (const Vec3 *)&v49);
  _R0 = (*(int (__fastcall **)(StompAttackGoal *))(*(_DWORD *)_R4 + 44))(_R4);
  __asm
    VMOV            S18, R0
    VMOV            S16, R6
  --*((_DWORD *)_R4 + 17);
  if ( *((_BYTE *)_R4 + 48)
    || (v16 = (Sensing *)j_Mob::getSensing(*((Mob **)_R4 + 2)), j_Sensing::canSee(v16, (const Entity *)_R5) == 1) )
    if ( j_Entity::isRiding(*((Entity **)_R4 + 2)) != 1 || *((_DWORD *)_R4 + 17) <= 0 )
      __asm
        VLDR            S0, [R4,#0x48]
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      if ( _ZF )
        __asm
        {
          VLDR            S2, [R4,#0x4C]
          VCMPE.F32       S2, #0.0
          VMRS            APSR_nzcv, FPSCR
          VMOV            R0, S2
        }
        if ( _ZF )
          _ZF = (*((_DWORD *)_R4 + 20) & 0x7FFFFFFF) == 0;
          goto LABEL_23;
      else
        LODWORD(_R0) = *((_DWORD *)_R4 + 19);
      HIDWORD(_R0) = *((_DWORD *)_R4 + 20);
      __asm { VSTR            S0, [SP,#0x80+var_40] }
      v48 = _R0;
      _R0 = j_Entity::distanceToSqr((Entity *)_R5, (const Vec3 *)&v47);
        VMOV.F32        S0, #1.0
        VMOV            S2, R0
        VCMPE.F32       S2, S0
      if ( _NF ^ _VF )
        _R0 = j_Random::_genRandInt32((Random *)(*((_DWORD *)_R4 + 2) + 552));
          VMOV            S0, R0
          VLDR            D1, =2.32830644e-10
          VCVT.F64.U32    D0, S0
          VMUL.F64        D0, D0, D1
          VCVT.F32.F64    S0, D0
          VLDR            S2, =0.05
          VCMPE.F32       S0, S2
        if ( !(_NF ^ _VF) )
          goto LABEL_30;
LABEL_23:
      *((_DWORD *)_R4 + 18) = *(_DWORD *)(_R5 + 72);
      *((_DWORD *)_R4 + 19) = *(_DWORD *)(_R5 + 268);
      *((_DWORD *)_R4 + 20) = *(_DWORD *)(_R5 + 80);
      v21 = (Level *)j_Entity::getLevel(*((Entity **)_R4 + 2));
      v22 = j_Level::getRandom(v21);
      v23 = j_Random::_genRandInt32((Random *)v22);
        VLDR            S0, =1024.0
        VCMPE.F32       S16, S0
      v24 = v23 % 7;
      *((_DWORD *)_R4 + 17) = v24 + 4;
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          VLDR            S0, =256.0
          VCMPE.F32       S16, S0
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          goto LABEL_28;
        v25 = v24 + 9;
        v25 = v24 + 14;
      *((_DWORD *)_R4 + 17) = v25;
LABEL_28:
      v26 = j_Mob::getNavigation(*((Mob **)_R4 + 2));
      v27 = *((_DWORD *)_R4 + 11);
      if ( !(*(int (**)(void))(*(_DWORD *)v26 + 20))() )
        *((_DWORD *)_R4 + 17) += 15;
      goto LABEL_30;
LABEL_30:
  __asm { VCMPE.F32       S16, S18 }
  v28 = *((_DWORD *)_R4 + 10) - 1;
  if ( v28 < 0 )
    v28 = 0;
  __asm { VMRS            APSR_nzcv, FPSCR }
  *((_DWORD *)_R4 + 10) = v28;
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    *((_DWORD *)_R4 + 10) = 20;
    v29 = 0;
    v30 = *((_DWORD *)_R4 + 2);
    return j_Entity::setStatusFlag(v30, 37, v29);
  v31 = *(_DWORD *)(_R5 + 268);
  v32 = (Entity *)*((_DWORD *)_R4 + 2);
  v33 = *(_DWORD *)(_R5 + 80);
  v44 = *(_DWORD *)(_R5 + 72);
  v45 = v31;
  v46 = v33;
  _R0 = j_Entity::distanceToSqr(v32, (const Vec3 *)&v44);
  _R1 = *((_DWORD *)_R4 + 2);
    VLDR            S2, [R5,#0x130]
    VLDR            S0, [R1,#0x130]
    VADD.F32        S0, S0, S0
    VMUL.F32        S0, S0, S0
    VADD.F32        S16, S0, S2
  result = j_Entity::getStatusFlag(*((_DWORD *)_R4 + 2), 37);
    VCMPE.F32       S18, S16
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v39 = *((_DWORD *)_R4 + 10);
    _VF = 0;
    _ZF = v39 == 0;
    _NF = v39 < 0;
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) || (result ^= 1u) != 0 )
    __asm
      VADD.F32        S0, S16, S16
      VCMPE.F32       S18, S0
      VMRS            APSR_nzcv, FPSCR
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      result = *((_DWORD *)_R4 + 10);
      if ( result <= 0 )
        *((_DWORD *)_R4 + 10) = 20;
        j_Entity::setStatusFlag(*((_DWORD *)_R4 + 2), 37, 0);
        result = *((_DWORD *)_R4 + 10);
      if ( result <= 10 )
        v30 = *((_DWORD *)_R4 + 2);
        v29 = 1;
        return j_Entity::setStatusFlag(v30, 37, v29);
  else
    j_Entity::setStatusFlag(*((_DWORD *)_R4 + 2), 37, 0);
    v40 = (AttributeInstance *)(*(int (**)(void))(**((_DWORD **)_R4 + 2) + 1004))();
    _R6 = j_AttributeInstance::getCurrentValue(v40);
    j_EntityDamageByEntitySource::EntityDamageByEntitySource((int)&v43, *((Entity **)_R4 + 2), 2);
      VMOV            S0, R6
      VCVTR.S32.F32   S0, S0
      VMOV            R2, S0
    j_Entity::hurt((Entity *)_R5, (const EntityDamageSource *)&v43, _R2, 1, 0);
    result = (signed int)j_EntityDamageByEntitySource::~EntityDamageByEntitySource((EntityDamageByEntitySource *)&v43);
  return result;
}


_DWORD *__fastcall StompAttackGoal::StompAttackGoal(int a1, int a2, float a3, char a4, int a5, int a6, int a7)
{
  _DWORD *result; // r0@1
  int v12; // [sp+8h] [bp-10h]@0

  __asm
  {
    VLDR            S0, [SP,#0x18+arg_8]
    VSTR            S0, [SP,#0x18+var_10]
  }
  result = (_DWORD *)j_MeleeAttackGoal::MeleeAttackGoal(a1, a2, a3, a4, a5, a6, v12);
  *result = &off_271AEB8;
  return result;
}


int __fastcall StompAttackGoal::stop(StompAttackGoal *this)
{
  MeleeAttackGoal *v1; // r4@1

  v1 = this;
  j_Entity::setStatusFlag(*((_DWORD *)this + 2), 37, 0);
  return j_j_j__ZN15MeleeAttackGoal4stopEv(v1);
}
