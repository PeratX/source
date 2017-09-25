

void __fastcall FloatGoal::~FloatGoal(FloatGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


int __fastcall FloatGoal::canUse(FloatGoal *this)
{
  FloatGoal *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( j_Mob::getJumpControl(*((Mob **)this + 2)) )
  {
    if ( (*(int (**)(void))(**((_DWORD **)v1 + 2) + 208))() )
      result = 1;
    else
      result = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 216))();
  }
  else
    result = 0;
  return result;
}


void __fastcall FloatGoal::~FloatGoal(FloatGoal *this)
{
  FloatGoal::~FloatGoal(this);
}


unsigned int __fastcall FloatGoal::tick(FloatGoal *this)
{
  FloatGoal *v1; // r4@1
  Level *v2; // r0@1
  char *v3; // r0@1
  unsigned int result; // r0@1
  int v9; // r0@3

  v1 = this;
  v2 = (Level *)j_Entity::getLevel(*((Entity **)this + 2));
  v3 = j_Level::getRandom(v2);
  result = j_Random::_genRandInt32((Random *)v3);
  __asm
  {
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S0, D0
    VLDR            S2, =0.8
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    v9 = j_Mob::getJumpControl(*((Mob **)v1 + 2));
    (*(void (**)(void))(*(_DWORD *)v9 + 8))();
    result = j_Entity::isRide(*((Entity **)v1 + 2));
    if ( result == 1 )
    {
      result = *((_DWORD *)v1 + 2);
      if ( *(_BYTE *)(result + 355) )
      {
        j_Entity::removeAllRiders((Entity *)result, 0, 0);
        result = j_j_j__ZN3Mob15setJumpVelReduxEb(*((Mob **)v1 + 2), 1);
      }
    }
  return result;
}


Goal *__fastcall FloatGoal::FloatGoal(Goal *a1, int a2)
{
  int v2; // r5@1
  Goal *v3; // r4@1

  v2 = a2;
  v3 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v3 = &off_27255E8;
  *((_DWORD *)v3 + 2) = v2;
  j_Goal::setRequiredControlFlags(v3, 4);
  return v3;
}
