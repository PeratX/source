

Entity *__fastcall ReceiveLoveGoal::tick(ReceiveLoveGoal *this)
{
  ReceiveLoveGoal *v1; // r4@1
  int v2; // r5@1
  char *v3; // r0@1
  int v4; // r1@1
  Entity *result; // r0@1
  Entity *v6; // r5@1
  LookControl *v7; // r0@3
  int v13; // r0@4
  BlockSource *v14; // r0@7
  int v15; // r0@7

  v1 = this;
  v2 = j_Entity::getLevel(*((Entity **)this + 2));
  v3 = j_Entity::lovePartnerId(*((Entity **)v1 + 2));
  result = (Entity *)j_Level::fetchEntity(v2, v4, *(_QWORD *)v3, *(_QWORD *)v3 >> 32, 0);
  v6 = result;
  if ( result )
  {
    result = (Entity *)(*(int (**)(void))(*(_DWORD *)result + 488))();
    if ( result == (Entity *)783 )
    {
      v7 = (LookControl *)j_Mob::getLookControl(*((Mob **)v1 + 2));
      j_LookControl::setLookAt(v7, v6, 10.0, 30.0);
      _R0 = j_Entity::distanceToSqr(*((Entity **)v1 + 2), v6);
      __asm
      {
        VMOV.F32        S0, #9.0
        VMOV            S2, R0
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        v13 = j_Mob::getNavigation(*((Mob **)v1 + 2));
        (*(void (**)(void))(*(_DWORD *)v13 + 20))();
      result = (Entity *)(j_Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 2) + 552)) % 0x23);
      if ( !result )
        v14 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 2));
        v15 = j_BlockSource::getLevel(v14);
        result = (Entity *)j_j_j__ZN5Level20broadcastEntityEventEP6Entity11EntityEventi_1(
                             v15,
                             *((_DWORD *)v1 + 2),
                             21,
                             0);
    }
  }
  return result;
}


Goal *__fastcall ReceiveLoveGoal::ReceiveLoveGoal(Goal *a1, int a2)
{
  int v2; // r5@1
  Goal *v3; // r4@1

  v2 = a2;
  v3 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v3 = &off_271A72C;
  *((_DWORD *)v3 + 2) = v2;
  j_Goal::setRequiredControlFlags(v3, 7);
  return v3;
}


void __fastcall ReceiveLoveGoal::~ReceiveLoveGoal(ReceiveLoveGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


void __fastcall ReceiveLoveGoal::~ReceiveLoveGoal(ReceiveLoveGoal *this)
{
  ReceiveLoveGoal::~ReceiveLoveGoal(this);
}
