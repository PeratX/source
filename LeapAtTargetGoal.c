

Goal *__fastcall LeapAtTargetGoal::LeapAtTargetGoal(Goal *a1, int a2, int a3, char a4)
{
  char v4; // r8@1
  int v5; // r7@1
  int v6; // r11@1
  Goal *v7; // r4@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v7 = &off_271A648;
  *((_DWORD *)v7 + 2) = &off_271A67C;
  *((_DWORD *)v7 + 3) = 0;
  *((_DWORD *)v7 + 5) = -1;
  *((_DWORD *)v7 + 4) = -1;
  *((_DWORD *)v7 + 6) = 0;
  *((_BYTE *)v7 + 28) = 0;
  *((_DWORD *)v7 + 8) = v5;
  *((_BYTE *)v7 + 36) = v4;
  *((_DWORD *)v7 + 10) = v6;
  j_Goal::setRequiredControlFlags(v7, 5);
  return v7;
}


void __fastcall LeapAtTargetGoal::~LeapAtTargetGoal(LeapAtTargetGoal *this)
{
  LeapAtTargetGoal::~LeapAtTargetGoal(this);
}


signed int __fastcall LeapAtTargetGoal::canContinueToUse(LeapAtTargetGoal *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *(_BYTE *)(*((_DWORD *)this + 10) + 216);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


int __fastcall LeapAtTargetGoal::start(LeapAtTargetGoal *this)
{
  LeapAtTargetGoal *v1; // r4@1
  int v2; // r0@2
  unsigned int v3; // r2@3
  unsigned int v4; // r3@3
  int v5; // r0@4
  int v6; // r1@4
  int result; // r0@7

  v1 = this;
  if ( !*((_BYTE *)this + 28) )
  {
    v2 = *((_DWORD *)this + 6);
    if ( v2 )
    {
      v3 = *((_DWORD *)v1 + 4);
      v4 = *((_DWORD *)v1 + 5);
      if ( (v3 & v4) != -1 )
      {
        v5 = j_Level::fetchEntity(v2, v3 & v4, v3, v4, 0);
        *((_DWORD *)v1 + 3) = v5;
        if ( !v5 )
          *((_DWORD *)v1 + 3) = j_Level::fetchEntity(
                                  *((_DWORD *)v1 + 6),
                                  v6,
                                  *((_QWORD *)v1 + 2),
                                  *((_QWORD *)v1 + 2) >> 32,
                                  0);
      }
    }
    *((_BYTE *)v1 + 28) = 1;
  }
  _R0 = *((_DWORD *)v1 + 3);
  _R1 = *((float *)v1 + 10);
  __asm
    VLDR            S4, [R0,#0x48]
    VLDR            S0, [R1,#0x48]
    VLDR            S2, [R1,#0x50]
    VLDR            S6, [R0,#0x50]
    VSUB.F32        S16, S4, S0
    VSUB.F32        S18, S6, S2
    VMUL.F32        S0, S16, S16
    VMUL.F32        S2, S18, S18
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  _R0 = j_mce::Math::sqrt(_R0, _R1);
  __asm { VMOV            S0, R0 }
  _R0 = *((_DWORD *)v1 + 10);
    VLDR            S4, =1.2
    VDIV.F32        S2, S16, S0
    VLDR            S6, [R0,#0x6C]
    VLDR            S8, =0.4
    VDIV.F32        S0, S18, S0
    VMUL.F32        S6, S6, S4
    VMUL.F32        S2, S2, S8
    VMUL.F32        S0, S0, S8
    VADD.F32        S2, S6, S2
    VSTR            S2, [R0,#0x6C]
    VLDR            S2, [R0,#0x74]
    VMUL.F32        S2, S2, S4
    VSTR            S0, [R0,#0x74]
  result = *((_DWORD *)v1 + 8);
  *(_DWORD *)(*((_DWORD *)v1 + 10) + 112) = result;
  return result;
}


int __fastcall LeapAtTargetGoal::~LeapAtTargetGoal(LeapAtTargetGoal *this)
{
  LeapAtTargetGoal *v1; // r4@1
  char *v2; // r1@1
  int v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271A648;
  *((_DWORD *)this + 2) = &off_271A67C;
  v2 = (char *)this + 8;
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = -1;
  *((_DWORD *)v2 + 3) = -1;
  v2[20] = 0;
  v3 = *((_DWORD *)this + 6);
  if ( v3 )
    j_Level::unregisterTemporaryPointer(v3, (unsigned int)v2);
  *((_DWORD *)v1 + 6) = 0;
  return j_j_j__ZN4GoalD2Ev_0(v1);
}


signed int __fastcall LeapAtTargetGoal::canUse(LeapAtTargetGoal *this)
{
  LeapAtTargetGoal *v1; // r4@1
  int v2; // r5@1
  signed int v8; // r6@2
  int v9; // r0@5
  int v11; // r0@13
  int v12; // r0@15

  v1 = this;
  v2 = j_Entity::getTarget(*((Entity **)this + 10));
  if ( v2 )
  {
    _R0 = j_Entity::distanceToSqr(*((Entity **)v1 + 10), (const Entity *)v2);
    __asm { VMOV.F32        S2, #4.0 }
    v8 = 0;
    __asm
    {
      VMOV            S0, R0
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !(_NF ^ _VF) )
      __asm
      {
        VMOV.F32        S2, #16.0
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        v9 = *((_DWORD *)v1 + 10);
        if ( *((_BYTE *)v1 + 36) && !*(_BYTE *)(v9 + 216) )
        {
          v8 = 0;
        }
        else if ( j_Random::_genRandInt32((Random *)(v9 + 552)) % 5 )
        else
          if ( *((_DWORD *)v1 + 3) != v2 )
          {
            if ( *(_DWORD *)(v2 + 3092) )
            {
              *((_QWORD *)v1 + 2) = *(_QWORD *)j_Entity::getUniqueID((Entity *)v2);
              v11 = *(_DWORD *)(v2 + 3092);
              *((_DWORD *)v1 + 6) = v11;
              j_Level::registerTemporaryPointer(v11, (unsigned int)v1 + 8);
              *((_BYTE *)v1 + 28) = 0;
            }
            else
              *((_DWORD *)v1 + 3) = 0;
              *((_DWORD *)v1 + 4) = -1;
              *((_DWORD *)v1 + 5) = -1;
              v12 = *((_DWORD *)v1 + 6);
              if ( v12 )
                j_Level::unregisterTemporaryPointer(v12, (unsigned int)v1 + 8);
              *((_DWORD *)v1 + 6) = 0;
          }
          v8 = 1;
          if ( j_Entity::hasCategory(v2, 1) == 1 )
            j_Entity::setPersistent(*((Entity **)v1 + 10));
            v8 = 1;
  }
  else
  return v8;
}


void __fastcall LeapAtTargetGoal::~LeapAtTargetGoal(LeapAtTargetGoal *this)
{
  LeapAtTargetGoal *v1; // r4@1
  char *v2; // r1@1
  int v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271A648;
  *((_DWORD *)this + 2) = &off_271A67C;
  v2 = (char *)this + 8;
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = -1;
  *((_DWORD *)v2 + 3) = -1;
  v2[20] = 0;
  v3 = *((_DWORD *)this + 6);
  if ( v3 )
    j_Level::unregisterTemporaryPointer(v3, (unsigned int)v2);
  *((_DWORD *)v1 + 6) = 0;
  j_Goal::~Goal(v1);
  j_j_j__ZdlPv_7((void *)v1);
}
