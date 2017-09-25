

void __fastcall VexCopyOwnerTargetGoal::~VexCopyOwnerTargetGoal(VexCopyOwnerTargetGoal *this)
{
  VexCopyOwnerTargetGoal *v1; // r4@1
  FilterGroup *v2; // r0@1
  FilterGroup *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_271B014;
  v3 = (FilterGroup *)(*((_QWORD *)this + 1) >> 32);
  v2 = (FilterGroup *)*((_QWORD *)this + 1);
  if ( v2 != v3 )
  {
    do
      v2 = (FilterGroup *)((char *)j_FilterGroup::~FilterGroup(v2) + 48);
    while ( v3 != v2 );
    v2 = (FilterGroup *)*((_DWORD *)v1 + 2);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  j_Goal::~Goal(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall VexCopyOwnerTargetGoal::start(VexCopyOwnerTargetGoal *this)
{
  int v1; // r4@1
  int (__fastcall *v2)(int, int); // r5@1
  Entity *v3; // r0@1
  int v4; // r1@1

  v1 = *((_DWORD *)this + 13);
  v2 = *(int (__fastcall **)(int, int))(*(_DWORD *)v1 + 340);
  v3 = (Entity *)j_Entity::getOwner(*((Entity **)this + 13));
  v4 = j_Entity::getTarget(v3);
  return v2(v1, v4);
}


int __fastcall VexCopyOwnerTargetGoal::canUse(VexCopyOwnerTargetGoal *this)
{
  VexCopyOwnerTargetGoal *v1; // r4@1
  Entity *v2; // r0@2
  Entity *v3; // r4@3
  int (__fastcall *v4)(Entity *, int, _DWORD); // r5@3
  Entity *v5; // r0@3
  int v6; // r0@3
  int result; // r0@3

  v1 = this;
  if ( j_Entity::getOwner(*((Entity **)this + 13))
    && (v2 = (Entity *)j_Entity::getOwner(*((Entity **)v1 + 13)), j_Entity::getTarget(v2)) )
  {
    v3 = (Entity *)*((_DWORD *)v1 + 13);
    v4 = *(int (__fastcall **)(Entity *, int, _DWORD))(*(_DWORD *)v3 + 968);
    v5 = (Entity *)j_Entity::getOwner(v3);
    v6 = j_Entity::getTarget(v5);
    result = v4(v3, v6, 0);
  }
  else
    result = 0;
  return result;
}


_DWORD *__fastcall VexCopyOwnerTargetGoal::VexCopyOwnerTargetGoal(int a1, int a2, float a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)j_TargetGoal::TargetGoal(a1, a2, a3, 0, 0, 0, 1098907648, 0);
  *result = &off_271B04C;
  return result;
}


void __fastcall VexCopyOwnerTargetGoal::~VexCopyOwnerTargetGoal(VexCopyOwnerTargetGoal *this)
{
  VexCopyOwnerTargetGoal::~VexCopyOwnerTargetGoal(this);
}
