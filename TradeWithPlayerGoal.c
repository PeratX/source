

signed int __fastcall TradeWithPlayerGoal::canContinueToUse(TradeWithPlayerGoal *this)
{
  TradeWithPlayerGoal *v1; // r5@1
  const Entity *v2; // r1@2
  signed int v3; // r4@2
  signed int result; // r0@5

  v1 = this;
  if ( (*(int (**)(void))(*(_DWORD *)this + 8))() == 1 )
  {
    v2 = (const Entity *)j_Entity::getTradingPlayer(*((Entity **)v1 + 2));
    v3 = 0;
    if ( v2 )
    {
      _R0 = j_Entity::distanceToSqr(*((Entity **)v1 + 2), v2);
      __asm
      {
        VLDR            S0, =64.0
        VMOV            S2, R0
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        v3 = 1;
    }
    result = v3;
  }
  else
    result = 0;
  return result;
}


void __fastcall TradeWithPlayerGoal::~TradeWithPlayerGoal(TradeWithPlayerGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


signed int __fastcall TradeWithPlayerGoal::canUse(TradeWithPlayerGoal *this)
{
  TradeWithPlayerGoal *v1; // r4@1
  int v2; // r0@5
  int v3; // r0@6
  signed int v4; // r1@6
  signed int result; // r0@8

  v1 = this;
  if ( j_Mob::getNavigation(*((Mob **)this + 2))
    && j_Entity::getTradingPlayer(*((Entity **)v1 + 2))
    && (*(int (**)(void))(**((_DWORD **)v1 + 2) + 316))() == 1
    && !(*(int (**)(void))(**((_DWORD **)v1 + 2) + 208))()
    && (v2 = *((_DWORD *)v1 + 2), *(_BYTE *)(v2 + 216)) )
  {
    v3 = (*(int (**)(void))(*(_DWORD *)v2 + 944))();
    v4 = 0;
    if ( !v3 )
      v4 = 1;
    result = v4;
  }
  else
    result = 0;
  return result;
}


void __fastcall TradeWithPlayerGoal::~TradeWithPlayerGoal(TradeWithPlayerGoal *this)
{
  TradeWithPlayerGoal::~TradeWithPlayerGoal(this);
}


int __fastcall TradeWithPlayerGoal::start(TradeWithPlayerGoal *this)
{
  int v1; // r0@1

  v1 = j_Mob::getNavigation(*((Mob **)this + 2));
  return (*(int (**)(void))(*(_DWORD *)v1 + 40))();
}


Goal *__fastcall TradeWithPlayerGoal::TradeWithPlayerGoal(Goal *a1, int a2)
{
  int v2; // r5@1
  Goal *v3; // r4@1

  v2 = a2;
  v3 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v3 = &off_271B0F0;
  *((_DWORD *)v3 + 2) = v2;
  j_Goal::setRequiredControlFlags(v3, 5);
  return v3;
}
