

unsigned int __fastcall SitGoal::canUse(SitGoal *this)
{
  SitGoal *v1; // r4@1
  unsigned int result; // r0@2

  v1 = this;
  if ( j_Mob::getNavigation(*((Mob **)this + 2)) )
    result = j_Entity::isSitting(*((Entity **)v1 + 2));
  else
    result = 0;
  return result;
}


Goal *__fastcall SitGoal::SitGoal(Goal *a1, int a2)
{
  int v2; // r5@1
  Goal *v3; // r4@1

  v2 = a2;
  v3 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v3 = &off_271AD80;
  *((_DWORD *)v3 + 2) = v2;
  j_Goal::setRequiredControlFlags(v3, 5);
  return v3;
}


void __fastcall SitGoal::~SitGoal(SitGoal *this)
{
  SitGoal::~SitGoal(this);
}


void __fastcall SitGoal::~SitGoal(SitGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


int __fastcall SitGoal::start(SitGoal *this)
{
  int v1; // r0@1

  v1 = j_Mob::getNavigation(*((Mob **)this + 2));
  return (*(int (**)(void))(*(_DWORD *)v1 + 40))();
}
