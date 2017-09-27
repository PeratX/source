

void __fastcall RunAroundLikeCrazyGoal::~RunAroundLikeCrazyGoal(RunAroundLikeCrazyGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


void __fastcall RunAroundLikeCrazyGoal::~RunAroundLikeCrazyGoal(RunAroundLikeCrazyGoal *this)
{
  RunAroundLikeCrazyGoal::~RunAroundLikeCrazyGoal(this);
}


signed int __fastcall RunAroundLikeCrazyGoal::canContinueToUse(RunAroundLikeCrazyGoal *this)
{
  RunAroundLikeCrazyGoal *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@1
  signed int result; // r0@1

  v1 = this;
  v2 = j_Mob::getNavigation(*((Mob **)this + 2));
  v3 = (*(int (**)(void))(*(_DWORD *)v2 + 36))();
  result = 0;
  if ( !v3 && *(_QWORD *)(*((_DWORD *)v1 + 2) + 476) >> 32 != (unsigned int)*(_QWORD *)(*((_DWORD *)v1 + 2) + 476) )
    result = 1;
  return result;
}


signed int __fastcall RunAroundLikeCrazyGoal::canUse(RunAroundLikeCrazyGoal *this)
{
  RunAroundLikeCrazyGoal *v1; // r4@1
  signed int v2; // r5@3
  int v3; // r1@5
  int v5; // [sp+0h] [bp-20h]@0
  int v6; // [sp+4h] [bp-1Ch]@6
  int v7; // [sp+8h] [bp-18h]@6
  int v8; // [sp+Ch] [bp-14h]@6

  v1 = this;
  if ( j_Mob::getNavigation(*((Mob **)this + 2)) )
  {
    if ( j_Entity::isTame(*((Entity **)v1 + 2)) )
    {
      v2 = 0;
    }
    else
      v3 = *((_DWORD *)v1 + 2);
      if ( *(_QWORD *)(v3 + 476) >> 32 != (unsigned int)*(_QWORD *)(v3 + 476) )
      {
        v6 = 0;
        v7 = 0;
        v8 = 0;
        if ( j_RandomPos::getPos((RandomPos *)&v6, (Vec3 *)v3, (Mob *)5, 4, v5) == 1 )
        {
          if ( j_Entity::hasType(**(_DWORD **)(*((_DWORD *)v1 + 2) + 476), 319) == 1 )
          {
            v2 = 1;
            *((_DWORD *)v1 + 4) = v6;
            *((_DWORD *)v1 + 5) = v7;
            *((_DWORD *)v1 + 6) = v8;
          }
          else
            v2 = 0;
        }
      }
  }
  else
    v2 = 0;
  return v2;
}


int __fastcall RunAroundLikeCrazyGoal::start(RunAroundLikeCrazyGoal *this)
{
  RunAroundLikeCrazyGoal *v1; // r4@1
  int v2; // r0@1
  int v3; // r2@1

  v1 = this;
  v2 = j_Mob::getNavigation(*((Mob **)this + 2));
  v3 = *((_DWORD *)v1 + 3);
  return (*(int (**)(void))(*(_DWORD *)v2 + 12))();
}


Goal *__fastcall RunAroundLikeCrazyGoal::RunAroundLikeCrazyGoal(Goal *a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  Goal *v5; // r4@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v5 = &off_271ACB0;
  *((_DWORD *)v5 + 2) = v4;
  *((_DWORD *)v5 + 3) = 0;
  *((_DWORD *)v5 + 5) = 0;
  *((_DWORD *)v5 + 6) = 0;
  *((_DWORD *)v5 + 3) = v3;
  *((_DWORD *)v5 + 4) = 0;
  j_Goal::setRequiredControlFlags(v5, 1);
  return v5;
}
