

_QWORD *__fastcall OpenDoorGoal::OpenDoorGoal(Goal *a1, int a2, char a3)
{
  char v3; // r4@1
  int v4; // r5@1
  _QWORD *result; // r0@1

  v3 = a3;
  v4 = a2;
  result = j_DoorInteractGoal::DoorInteractGoal(a1, a2);
  *(_DWORD *)result = &off_271A9A4;
  *((_DWORD *)result + 12) = 0;
  *((_DWORD *)result + 13) = v4;
  *((_BYTE *)result + 44) = v3;
  return result;
}


signed int __fastcall OpenDoorGoal::tick(OpenDoorGoal *this)
{
  --*((_DWORD *)this + 12);
  return j_j_j__ZN16DoorInteractGoal4tickEv_0(this);
}


char *__fastcall OpenDoorGoal::start(OpenDoorGoal *this)
{
  OpenDoorGoal *v1; // r4@1
  DoorBlock *v2; // r5@1
  BlockSource *v3; // r1@1
  int v4; // r3@1

  v1 = this;
  j_DoorInteractGoal::start(this);
  *((_DWORD *)v1 + 12) = 20;
  v2 = (DoorBlock *)*((_DWORD *)v1 + 5);
  v3 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 13));
  v4 = 0;
  if ( !*((_BYTE *)v1 + 24) )
    v4 = 1;
  return j_DoorBlock::setToggled(v2, v3, (OpenDoorGoal *)((char *)v1 + 8), v4, *((Mob **)v1 + 13));
}


void __fastcall OpenDoorGoal::~OpenDoorGoal(OpenDoorGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


void __fastcall OpenDoorGoal::~OpenDoorGoal(OpenDoorGoal *this)
{
  OpenDoorGoal::~OpenDoorGoal(this);
}


signed int __fastcall OpenDoorGoal::canContinueToUse(OpenDoorGoal *this)
{
  signed int result; // r0@3

  if ( *((_BYTE *)this + 44) && *((_DWORD *)this + 12) >= 1 )
    result = j_DoorInteractGoal::canContinueToUse(this);
  else
    result = 0;
  return result;
}


char *__fastcall OpenDoorGoal::stop(OpenDoorGoal *this)
{
  DoorBlock *v1; // r5@0
  OpenDoorGoal *v2; // r4@1
  char *result; // r0@1
  bool v4; // zf@1
  BlockSource *v5; // r0@4

  v2 = this;
  result = (char *)*((_BYTE *)this + 44);
  v4 = result == 0;
  if ( result )
  {
    v1 = (DoorBlock *)*((_DWORD *)v2 + 5);
    v4 = v1 == 0;
  }
  if ( !v4 )
    v5 = (BlockSource *)j_Entity::getRegion(*((Entity **)v2 + 13));
    result = j_DoorBlock::setToggled(v1, v5, (OpenDoorGoal *)((char *)v2 + 8), *((_BYTE *)v2 + 24), *((Mob **)v2 + 13));
  return result;
}
