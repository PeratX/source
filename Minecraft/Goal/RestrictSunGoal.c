

void __fastcall RestrictSunGoal::~RestrictSunGoal(RestrictSunGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


_QWORD *__fastcall RestrictSunGoal::RestrictSunGoal(Goal *a1, int a2)
{
  int v2; // r4@1
  _QWORD *result; // r0@1

  v2 = a2;
  result = j_Goal::Goal(a1);
  *(_DWORD *)result = &off_271AC7C;
  *((_DWORD *)result + 2) = v2;
  return result;
}


void __fastcall RestrictSunGoal::~RestrictSunGoal(RestrictSunGoal *this)
{
  RestrictSunGoal::~RestrictSunGoal(this);
}


signed int __fastcall RestrictSunGoal::canUse(RestrictSunGoal *this)
{
  RestrictSunGoal *v1; // r4@1
  BlockSource *v2; // r0@2
  Dimension *v3; // r5@2
  Weather *v4; // r0@3
  signed int result; // r0@4
  int v6; // r0@5
  int v7; // r4@5
  int v8; // r0@5
  bool v9; // zf@5

  v1 = this;
  if ( j_Mob::getNavigation(*((Mob **)this + 2))
    && (v2 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 2)),
        v3 = (Dimension *)j_BlockSource::getDimension(v2),
        (*(int (**)(void))(*(_DWORD *)v3 + 196))() == 1)
    && (v4 = (Weather *)j_Dimension::getWeather(v3), !j_Weather::isRaining(v4)) )
  {
    v6 = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 1028))();
    v7 = v6;
    v8 = *(_BYTE *)(v6 + 15);
    v9 = v8 == 0;
    if ( v8 )
      v9 = *(_DWORD *)v7 == 0;
    if ( v9 || j_ItemInstance::isNull((ItemInstance *)v7) )
    {
      result = 1;
    }
    else
      result = 0;
      if ( !*(_BYTE *)(v7 + 14) )
        result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall RestrictSunGoal::start(RestrictSunGoal *this)
{
  PathNavigation *v1; // r0@1

  v1 = (PathNavigation *)j_Mob::getNavigation(*((Mob **)this + 2));
  return j_j_j__ZN14PathNavigation11setAvoidSunEb(v1, 1);
}


int __fastcall RestrictSunGoal::stop(RestrictSunGoal *this)
{
  PathNavigation *v1; // r0@1

  v1 = (PathNavigation *)j_Mob::getNavigation(*((Mob **)this + 2));
  return j_j_j__ZN14PathNavigation11setAvoidSunEb(v1, 0);
}
