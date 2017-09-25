

Entity *__fastcall Creeper::die(Creeper *this, const EntityDamageSource *a2)
{
  const EntityDamageSource *v2; // r5@1
  Entity *v3; // r4@1
  int v4; // r6@1
  int v5; // r1@1
  Entity *result; // r0@1
  Entity *v7; // r5@1
  Level *v8; // r0@4
  unsigned __int64 *v9; // r0@4
  void (__fastcall *v10)(Entity *, char *, signed int); // r6@5
  char v11; // [sp+8h] [bp-60h]@5
  int v12; // [sp+10h] [bp-58h]@9
  void *v13; // [sp+2Ch] [bp-3Ch]@7
  void *ptr; // [sp+3Ch] [bp-2Ch]@5
  unsigned int v15; // [sp+50h] [bp-18h]@1
  unsigned int v16; // [sp+54h] [bp-14h]@1

  v2 = a2;
  v3 = this;
  Mob::die(this, a2);
  v4 = Entity::getLevel(v3);
  (*(void (__fastcall **)(unsigned int *, const EntityDamageSource *))(*(_DWORD *)v2 + 32))(&v15, v2);
  result = (Entity *)Level::fetchEntity(v4, v5, v15, v16, 0);
  v7 = result;
  if ( result )
  {
    result = (Entity *)EntityClassTree::isInstanceOf((int)result, 2849);
    if ( result == (Entity *)1 )
    {
      result = (Entity *)Entity::isPowered(v7);
      if ( result == (Entity *)1 )
      {
        v8 = (Level *)Entity::getLevel(v3);
        v9 = (unsigned __int64 *)Level::getGameRules(v8);
        result = (Entity *)GameRules::getBool(v9, (int **)&GameRules::DO_MOB_LOOT);
        if ( result == (Entity *)1 )
        {
          v10 = *(void (__fastcall **)(Entity *, char *, signed int))(*(_DWORD *)v3 + 452);
          ItemInstance::ItemInstance((ItemInstance *)&v11, Item::mSkull, 1, 4);
          v10(v3, &v11, 1065353216);
          if ( ptr )
            operator delete(ptr);
          if ( v13 )
            operator delete(v13);
          if ( v12 )
            (*(void (**)(void))(*(_DWORD *)v12 + 4))();
          result = 0;
        }
      }
    }
  }
  return result;
}


int __fastcall Creeper::getSwelling(Creeper *this, float _R1)
{
  Creeper *v2; // r4@1
  ExplodeComponent *v3; // r0@1
  int result; // r0@4

  v2 = this;
  v3 = (ExplodeComponent *)*((_DWORD *)this + 783);
  if ( v3 )
  {
    _R0 = ExplodeComponent::getFuse(v3);
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.S32    S16, S0
    }
    _R0 = ExplodeComponent::getMaxFuse(*((ExplodeComponent **)v2 + 783));
      VMOV.F32        S2, #1.0
      VCVT.F32.S32    S0, S0
      VDIV.F32        S0, S16, S0
      VSUB.F32        S0, S2, S0
  }
  else
    __asm { VMOV            S0, R1 }
    _R0 = *((_DWORD *)v2 + 1077);
    _R1 = *((_DWORD *)v2 + 1076) - _R0;
      VMOV            S4, R0
      VMOV            S2, R1
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
      VMUL.F32        S0, S2, S0
      VLDR            S2, =0.035714
      VADD.F32        S0, S0, S4
      VMUL.F32        S0, S0, S2
  __asm { VMOV            R0, S0 }
  return result;
}


signed int __fastcall Creeper::getEntityTypeId(Creeper *this)
{
  return 2849;
}


void __fastcall Creeper::~Creeper(Creeper *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall Creeper::_setSwellDir(int result, int a2)
{
  *(_DWORD *)(result + 4312) = a2;
  return result;
}


int __fastcall Creeper::Creeper(int a1, int a2, int *a3)
{
  int result; // r0@1

  result = Monster::Monster(a1, a2, a3);
  __asm
  {
    VLDR            S0, =0.85
    VLDR            S4, =0.9
  }
  *(_DWORD *)result = &off_26F58FC;
  *(_DWORD *)(result + 248) = 24;
  *(_DWORD *)(result + 3984) = 1072064102;
  *(_DWORD *)(result + 4312) = -1;
  *(_DWORD *)(result + 4304) = 0;
  *(_DWORD *)(result + 4308) = 0;
  __asm { VLDR            S2, [R0,#0x134] }
  *(_DWORD *)(result + 364) = 0;
    VMUL.F32        S0, S2, S0
    VMUL.F32        S2, S2, S4
    VSTR            S0, [R0,#0x170]
  *(_DWORD *)(result + 372) = 0;
  *(_DWORD *)(result + 376) = 0;
  __asm { VSTR            S2, [R0,#0x17C] }
  *(_DWORD *)(result + 384) = 0;
  *(_DWORD *)(result + 388) = 0;
  __asm { VSTR            S2, [R0,#0x188] }
  *(_DWORD *)(result + 396) = 0;
  *(_DWORD *)(result + 320) = 1056964608;
  return result;
}


int __fastcall Creeper::normalTick(Creeper *this)
{
  Creeper *v1; // r4@1
  int v2; // r7@2
  unsigned int v3; // r0@2
  signed int v4; // r1@2
  int v5; // r1@4
  signed int v6; // r2@4
  void (__fastcall *v7)(Creeper *, signed int, char *, signed int); // r6@10
  char v9; // [sp+8h] [bp-20h]@10

  v1 = this;
  if ( (*(int (**)(void))(*(_DWORD *)this + 316))() == 1 )
  {
    v2 = *((_DWORD *)v1 + 1076);
    *((_DWORD *)v1 + 1077) = v2;
    v3 = Entity::isIgnited(v1);
    v4 = -1;
    if ( v3 )
      v4 = 1;
    *((_DWORD *)v1 + 1078) = v4;
    v5 = v4 + v2;
    v6 = v5;
    if ( v5 <= 0 )
      v6 = 0;
    if ( v5 > 30 )
      v6 = 30;
    *((_DWORD *)v1 + 1076) = v6;
    if ( v3 == 1 && !*((_DWORD *)v1 + 1077) )
    {
      v7 = *(void (__fastcall **)(Creeper *, signed int, char *, signed int))(*(_DWORD *)v1 + 556);
      Entity::getAttachPos((AABB *)&v9, (int)v1, 3, 0);
      v7(v1, 49, &v9, -1);
    }
  }
  return Monster::normalTick(v1);
}


signed int __fastcall Creeper::useNewAi(Creeper *this)
{
  return 1;
}


void __fastcall Creeper::~Creeper(Creeper *this)
{
  Creeper::~Creeper(this);
}


int __fastcall Creeper::onSizeUpdated(int result)
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


int __fastcall Creeper::_setOldSwell(int result, int a2)
{
  *(_DWORD *)(result + 4308) = a2;
  return result;
}


int __fastcall Creeper::_setSwell(int result, int a2)
{
  *(_DWORD *)(result + 4304) = a2;
  return result;
}
