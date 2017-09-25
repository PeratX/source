

signed int __fastcall RandomStrollGoal::_setWantedPosition(RandomStrollGoal *this)
{
  signed int v1; // r5@1
  RandomStrollGoal *v2; // r4@1
  int v4; // [sp+0h] [bp-20h]@0
  int v5; // [sp+4h] [bp-1Ch]@1
  int v6; // [sp+8h] [bp-18h]@1
  int v7; // [sp+Ch] [bp-14h]@1

  v1 = 0;
  v2 = this;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( j_RandomPos::getPos(
         (RandomPos *)&v5,
         *((Vec3 **)v2 + 8),
         (Mob *)*((_QWORD *)v2 + 3),
         *((_QWORD *)v2 + 3) >> 32,
         v4) == 1 )
  {
    v1 = 1;
    *((_DWORD *)v2 + 2) = v5;
    *((_DWORD *)v2 + 3) = v6;
    *((_DWORD *)v2 + 4) = v7;
  }
  return v1;
}


int __fastcall RandomStrollGoal::canContinueToUse(RandomStrollGoal *this)
{
  int v1; // r0@1

  v1 = j_Mob::getNavigation(*((Mob **)this + 8));
  return (*(int (**)(void))(*(_DWORD *)v1 + 36))() ^ 1;
}


int __fastcall RandomStrollGoal::start(RandomStrollGoal *this)
{
  RandomStrollGoal *v1; // r4@1
  int v2; // r0@1
  int v3; // r2@1

  v1 = this;
  v2 = j_Mob::getNavigation(*((Mob **)this + 8));
  v3 = *((_DWORD *)v1 + 5);
  return (*(int (**)(void))(*(_DWORD *)v2 + 12))();
}


void __fastcall RandomStrollGoal::~RandomStrollGoal(RandomStrollGoal *this)
{
  RandomStrollGoal::~RandomStrollGoal(this);
}


void __fastcall RandomStrollGoal::~RandomStrollGoal(RandomStrollGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


int __fastcall RandomStrollGoal::canUse(RandomStrollGoal *this)
{
  RandomStrollGoal *v1; // r4@1
  Level *v2; // r0@2
  char *v3; // r0@2
  int result; // r0@3

  v1 = this;
  if ( j_Mob::getNavigation(*((Mob **)this + 8))
    && (v2 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 8)),
        v3 = j_Level::getRandom(v2),
        !(j_Random::_genRandInt32((Random *)v3) % 0x78)) )
  {
    result = (*(int (__fastcall **)(RandomStrollGoal *))(*(_DWORD *)v1 + 44))(v1);
  }
  else
    result = 0;
  return result;
}


Goal *__fastcall RandomStrollGoal::RandomStrollGoal(Goal *a1, int a2, int a3, int a4, int a5)
{
  int v5; // r5@1
  int v6; // r6@1
  int v7; // r7@1
  Goal *v8; // r4@1

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v8 = &off_271ABDC;
  *((_DWORD *)v8 + 2) = 0;
  *((_DWORD *)v8 + 3) = 0;
  *((_DWORD *)v8 + 4) = 0;
  *((_DWORD *)v8 + 5) = v6;
  *((_DWORD *)v8 + 6) = v5;
  *((_DWORD *)v8 + 7) = a5;
  *((_DWORD *)v8 + 8) = v7;
  j_Goal::setRequiredControlFlags(v8, 3);
  return v8;
}
