

int __fastcall SwellGoal::~SwellGoal(SwellGoal *this)
{
  SwellGoal *v1; // r4@1
  char *v2; // r1@1
  int v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271AF24;
  *((_DWORD *)this + 6) = &off_271A67C;
  v2 = (char *)this + 24;
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = -1;
  *((_DWORD *)v2 + 3) = -1;
  v2[20] = 0;
  v3 = *((_DWORD *)this + 10);
  if ( v3 )
    j_Level::unregisterTemporaryPointer(v3, (unsigned int)v2);
  *((_DWORD *)v1 + 10) = 0;
  return j_j_j__ZN4GoalD2Ev_0(v1);
}


int __fastcall SwellGoal::stop(SwellGoal *this)
{
  SwellGoal *v1; // r4@1
  int result; // r0@1

  v1 = this;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = -1;
  *((_DWORD *)this + 9) = -1;
  *((_BYTE *)this + 44) = 0;
  result = *((_DWORD *)this + 10);
  if ( result )
    result = j_Level::unregisterTemporaryPointer(result, (unsigned int)v1 + 24);
  *((_DWORD *)v1 + 10) = 0;
  return result;
}


Goal *__fastcall SwellGoal::SwellGoal(Goal *a1, int a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r7@1
  Goal *v7; // r4@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v7 = &off_271AF24;
  *((_DWORD *)v7 + 2) = v6;
  *((_DWORD *)v7 + 3) = v5;
  *((_DWORD *)v7 + 4) = v4;
  *((_DWORD *)v7 + 6) = &off_271A67C;
  *((_DWORD *)v7 + 7) = 0;
  *((_DWORD *)v7 + 9) = -1;
  *((_DWORD *)v7 + 8) = -1;
  *((_DWORD *)v7 + 10) = 0;
  *((_BYTE *)v7 + 44) = 0;
  j_Goal::setRequiredControlFlags(v7, 1);
  return v7;
}


unsigned int __fastcall SwellGoal::tick(SwellGoal *this)
{
  int v2; // r0@2
  unsigned int v3; // r2@3
  unsigned int v4; // r3@3
  int v5; // r0@4
  int v6; // r1@4
  int v7; // r5@7
  int v8; // r0@7
  Creeper *v10; // r0@8
  Sensing *v15; // r0@10
  signed int v16; // r1@10
  int v17; // r1@11
  unsigned int result; // r0@12

  _R4 = this;
  if ( !*((_BYTE *)this + 44) )
  {
    v2 = *((_DWORD *)this + 10);
    if ( v2 )
    {
      v3 = *((_DWORD *)_R4 + 8);
      v4 = *((_DWORD *)_R4 + 9);
      if ( (v3 & v4) != -1 )
      {
        v5 = j_Level::fetchEntity(v2, v3 & v4, v3, v4, 0);
        *((_DWORD *)_R4 + 7) = v5;
        if ( !v5 )
          *((_DWORD *)_R4 + 7) = j_Level::fetchEntity(
                                   *((_DWORD *)_R4 + 10),
                                   v6,
                                   *((_QWORD *)_R4 + 4),
                                   *((_QWORD *)_R4 + 4) >> 32,
                                   0);
      }
    }
    *((_BYTE *)_R4 + 44) = 1;
  }
  v7 = *((_DWORD *)_R4 + 7);
  v8 = *((_DWORD *)_R4 + 2);
  if ( !v7 )
    result = j_Entity::isIgnited((Entity *)v8);
    if ( result )
      return result;
    v10 = (Creeper *)*((_DWORD *)_R4 + 2);
    goto LABEL_14;
  _R1 = j_AABB::distanceTo((AABB *)(v8 + 264), (const AABB *)(v7 + 264));
  v10 = (Creeper *)*((_DWORD *)_R4 + 2);
  __asm
    VMOV            S0, R1
    VLDR            S2, [R4,#0x10]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF)
    || (v15 = (Sensing *)j_Mob::getSensing(v10),
        v16 = j_Sensing::canSee(v15, (const Entity *)v7),
        v10 = (Creeper *)*((_DWORD *)_R4 + 2),
        !v16) )
LABEL_14:
    v17 = -1;
    return j_j_j__ZN7Creeper12_setSwellDirEi(v10, v17);
  v17 = 1;
  return j_j_j__ZN7Creeper12_setSwellDirEi(v10, v17);
}


void __fastcall SwellGoal::~SwellGoal(SwellGoal *this)
{
  SwellGoal *v1; // r4@1
  char *v2; // r1@1
  int v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271AF24;
  *((_DWORD *)this + 6) = &off_271A67C;
  v2 = (char *)this + 24;
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = -1;
  *((_DWORD *)v2 + 3) = -1;
  v2[20] = 0;
  v3 = *((_DWORD *)this + 10);
  if ( v3 )
    j_Level::unregisterTemporaryPointer(v3, (unsigned int)v2);
  *((_DWORD *)v1 + 10) = 0;
  j_Goal::~Goal(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall SwellGoal::start(SwellGoal *this)
{
  SwellGoal *v1; // r4@1
  int v2; // r0@1
  int v3; // r6@1
  int result; // r0@1
  bool v5; // zf@2
  int v6; // r0@5

  v1 = this;
  v2 = j_Mob::getNavigation(*((Mob **)this + 2));
  (*(void (**)(void))(*(_DWORD *)v2 + 40))();
  v3 = j_Entity::getTarget(*((Entity **)v1 + 2));
  result = *((_DWORD *)v1 + 7);
  if ( result != v3 )
  {
    v5 = v3 == 0;
    if ( v3 )
      v5 = *(_DWORD *)(v3 + 3092) == 0;
    if ( v5 )
    {
      *((_DWORD *)v1 + 7) = 0;
      *((_DWORD *)v1 + 8) = -1;
      *((_DWORD *)v1 + 9) = -1;
      *((_BYTE *)v1 + 44) = 0;
      result = *((_DWORD *)v1 + 10);
      if ( result )
        result = j_Level::unregisterTemporaryPointer(result, (unsigned int)v1 + 24);
      *((_DWORD *)v1 + 10) = 0;
    }
    else
      *((_QWORD *)v1 + 4) = *(_QWORD *)j_Entity::getUniqueID((Entity *)v3);
      v6 = *(_DWORD *)(v3 + 3092);
      *((_DWORD *)v1 + 10) = v6;
      j_Level::registerTemporaryPointer(v6, (unsigned int)v1 + 24);
      result = 0;
  }
  return result;
}


signed int __fastcall SwellGoal::canUse(SwellGoal *this)
{
  int v2; // r0@3
  signed int result; // r0@5

  _R4 = this;
  if ( !j_Mob::getNavigation(*((Mob **)this + 2)) )
    goto LABEL_9;
  if ( j_Creeper::getSwellDir(*((Creeper **)_R4 + 2)) > 0 )
    goto LABEL_10;
  v2 = j_Entity::getTarget(*((Entity **)_R4 + 2));
  if ( !v2 )
  _R0 = j_AABB::distanceTo((AABB *)(*((_DWORD *)_R4 + 2) + 264), (const AABB *)(v2 + 264));
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, [R4,#0xC]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
LABEL_10:
    result = 1;
  else
LABEL_9:
    result = 0;
  return result;
}


void __fastcall SwellGoal::~SwellGoal(SwellGoal *this)
{
  SwellGoal::~SwellGoal(this);
}
