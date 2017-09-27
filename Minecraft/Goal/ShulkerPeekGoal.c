

void __fastcall ShulkerPeekGoal::~ShulkerPeekGoal(ShulkerPeekGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


signed int __fastcall ShulkerPeekGoal::canContinueToUse(ShulkerPeekGoal *this)
{
  ShulkerPeekGoal *v1; // r4@1
  int v2; // r1@1
  signed int result; // r0@1

  v1 = this;
  v2 = j_Entity::getTarget(*((Entity **)this + 3));
  result = 0;
  if ( !v2 && *((_DWORD *)v1 + 2) > 0 )
    result = 1;
  return result;
}


_QWORD *__fastcall ShulkerPeekGoal::ShulkerPeekGoal(Goal *a1, int a2)
{
  int v2; // r4@1
  _QWORD *result; // r0@1

  v2 = a2;
  result = j_Goal::Goal(a1);
  *(_DWORD *)result = &off_271AD4C;
  *((_DWORD *)result + 3) = v2;
  return result;
}


void __fastcall ShulkerPeekGoal::~ShulkerPeekGoal(ShulkerPeekGoal *this)
{
  ShulkerPeekGoal::~ShulkerPeekGoal(this);
}


unsigned int __fastcall ShulkerPeekGoal::start(ShulkerPeekGoal *this)
{
  ShulkerPeekGoal *v1; // r4@1
  int v2; // r4@1
  unsigned int result; // r0@1
  unsigned int v4; // r1@1
  unsigned int v5; // r1@3
  unsigned int v6; // r0@3

  v1 = this;
  *((_DWORD *)this + 2) = 20 * (j_Random::_genRandInt32((Random *)(*((_DWORD *)this + 3) + 552)) % 3) + 20;
  v2 = *((_DWORD *)v1 + 3);
  result = j_SynchedEntityData::_get((SynchedEntityData *)(v2 + 176), 64);
  v4 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v4 == 2 && *(_DWORD *)(result + 12) != 60 )
  {
    v5 = v4 >> 16;
    *(_DWORD *)(result + 12) = 60;
    *(_BYTE *)(result + 8) = 1;
    v6 = *(_WORD *)(v2 + 188);
    if ( v6 >= v5 )
      LOWORD(v6) = v5;
    *(_WORD *)(v2 + 188) = v6;
    result = *(_WORD *)(v2 + 190);
    if ( result > v5 )
      LOWORD(v5) = *(_WORD *)(v2 + 190);
    *(_WORD *)(v2 + 190) = v5;
  }
  return result;
}


signed int __fastcall ShulkerPeekGoal::canUse(ShulkerPeekGoal *this)
{
  ShulkerPeekGoal *v1; // r5@1
  signed int v2; // r4@1

  v1 = this;
  v2 = 0;
  if ( !j_Entity::getTarget(*((Entity **)this + 3))
    && !(j_Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 3) + 552)) % 0x28) )
  {
    v2 = 1;
  }
  return v2;
}


int __fastcall ShulkerPeekGoal::tick(int result)
{
  --*(_DWORD *)(result + 8);
  return result;
}


unsigned int __fastcall ShulkerPeekGoal::stop(ShulkerPeekGoal *this)
{
  ShulkerPeekGoal *v1; // r4@1
  unsigned int result; // r0@1
  int v3; // r4@2
  unsigned int v4; // r1@2
  unsigned int v5; // r1@4
  unsigned int v6; // r0@4

  v1 = this;
  result = j_Entity::getTarget(*((Entity **)this + 3));
  if ( !result )
  {
    v3 = *((_DWORD *)v1 + 3);
    result = j_SynchedEntityData::_get((SynchedEntityData *)(v3 + 176), 64);
    v4 = *(_DWORD *)(result + 4);
    if ( (unsigned __int8)v4 == 2 )
    {
      if ( *(_DWORD *)(result + 12) )
      {
        v5 = v4 >> 16;
        *(_DWORD *)(result + 12) = 0;
        *(_BYTE *)(result + 8) = 1;
        v6 = *(_WORD *)(v3 + 188);
        if ( v6 >= v5 )
          LOWORD(v6) = v5;
        *(_WORD *)(v3 + 188) = v6;
        result = *(_WORD *)(v3 + 190);
        if ( result > v5 )
          LOWORD(v5) = *(_WORD *)(v3 + 190);
        *(_WORD *)(v3 + 190) = v5;
      }
    }
  }
  return result;
}
