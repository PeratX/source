

void __fastcall SlimeRandomDirectionGoal::~SlimeRandomDirectionGoal(SlimeRandomDirectionGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


int __fastcall SlimeRandomDirectionGoal::tick(SlimeRandomDirectionGoal *this)
{
  SlimeRandomDirectionGoal *v1; // r4@1
  signed int v2; // r0@1
  MoveControl *v8; // r0@3
  __int64 v9; // kr08_8@3
  mce::Math *v10; // r6@3
  int v11; // r0@3
  float v12; // r3@3
  int result; // r0@3

  v1 = this;
  v2 = *((_DWORD *)this + 4);
  *((_DWORD *)v1 + 4) = v2 - 1;
  if ( v2 < 2 )
  {
    *((_DWORD *)v1 + 4) = j_Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 2) + 552)) % 0x3C + 40;
    _R0 = j_Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 2) + 552)) % 0x168;
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VSTR            S0, [R4,#0xC]
    }
  }
  v8 = (MoveControl *)j_Mob::getMoveControl(*((Mob **)v1 + 2));
  v9 = *((_QWORD *)v1 + 1);
  v10 = *(mce::Math **)(v9 + 124);
  v11 = j_MoveControl::getMaxTurn(v8);
  result = j_mce::Math::clampRotate(v10, *((float *)&v9 + 1), *(float *)&v11, v12);
  *(_DWORD *)(*((_DWORD *)v1 + 2) + 124) = result;
  return result;
}


int __fastcall SlimeRandomDirectionGoal::canUse(SlimeRandomDirectionGoal *this)
{
  SlimeRandomDirectionGoal *v1; // r4@1
  int result; // r0@3
  int v3; // r0@4

  v1 = this;
  if ( j_Mob::getMoveControl(*((Mob **)this + 2)) && !j_Entity::getTarget(*((Entity **)v1 + 2)) )
  {
    v3 = *((_DWORD *)v1 + 2);
    if ( *(_BYTE *)(v3 + 216) || (*(int (**)(void))(*(_DWORD *)v3 + 208))() )
      result = 1;
    else
      result = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 216))();
  }
  else
    result = 0;
  return result;
}


Goal *__fastcall SlimeRandomDirectionGoal::SlimeRandomDirectionGoal(Goal *a1, int a2)
{
  int v2; // r5@1
  Goal *v3; // r4@1

  v2 = a2;
  v3 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v3 = &off_271AE84;
  *((_DWORD *)v3 + 2) = v2;
  *((_DWORD *)v3 + 3) = 0;
  *((_DWORD *)v3 + 4) = 0;
  j_Goal::setRequiredControlFlags(v3, 2);
  return v3;
}


void __fastcall SlimeRandomDirectionGoal::~SlimeRandomDirectionGoal(SlimeRandomDirectionGoal *this)
{
  SlimeRandomDirectionGoal::~SlimeRandomDirectionGoal(this);
}
