

Goal *__fastcall RandomLookAroundGoal::RandomLookAroundGoal(Goal *a1, int a2)
{
  int v2; // r5@1
  Goal *v3; // r4@1

  v2 = a2;
  v3 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v3 = &off_271ABA8;
  *((_DWORD *)v3 + 2) = 0;
  *((_DWORD *)v3 + 3) = 0;
  *((_DWORD *)v3 + 4) = 0;
  *((_DWORD *)v3 + 5) = v2;
  j_Goal::setRequiredControlFlags(v3, 3);
  return v3;
}


void __fastcall RandomLookAroundGoal::~RandomLookAroundGoal(RandomLookAroundGoal *this)
{
  RandomLookAroundGoal::~RandomLookAroundGoal(this);
}


unsigned int __fastcall RandomLookAroundGoal::start(RandomLookAroundGoal *this)
{
  RandomLookAroundGoal *v1; // r4@1
  Level *v2; // r0@1
  char *v3; // r0@1
  Level *v11; // r0@1
  char *v12; // r0@1
  unsigned int result; // r0@1

  v1 = this;
  v2 = (Level *)j_Entity::getLevel(*((Entity **)this + 5));
  v3 = j_Level::getRandom(v2);
  _R0 = j_Random::_genRandInt32((Random *)v3);
  __asm
  {
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VCVT.F64.U32    D0, S0
  }
  _R0 = &mce::Math::PI;
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S0, D0
    VADD.F32        S0, S0, S0
    VLDR            S2, [R0]
    VMUL.F32        S0, S2, S0
    VMOV            R5, S0
  *((float *)v1 + 2) = j_cosf(_R5);
  *((float *)v1 + 3) = j_sinf(_R5);
  v11 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 5));
  v12 = j_Level::getRandom(v11);
  result = j_Random::_genRandInt32((Random *)v12) % 0x14 + 20;
  *((_DWORD *)v1 + 4) = result;
  return result;
}


signed int __fastcall RandomLookAroundGoal::canContinueToUse(RandomLookAroundGoal *this)
{
  signed int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 4);
  result = 0;
  if ( v1 > -1 )
    result = 1;
  return result;
}


void __fastcall RandomLookAroundGoal::~RandomLookAroundGoal(RandomLookAroundGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


signed int __fastcall RandomLookAroundGoal::canUse(RandomLookAroundGoal *this)
{
  Level *v1; // r0@1
  char *v2; // r0@1
  signed int result; // r0@1

  v1 = (Level *)j_Entity::getLevel(*((Entity **)this + 5));
  v2 = j_Level::getRandom(v1);
  _R0 = j_Random::_genRandInt32((Random *)v2);
  __asm
  {
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
  }
  result = 0;
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S0, D0
    VLDR            S2, =0.02
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    result = 1;
  return result;
}


int __fastcall RandomLookAroundGoal::tick(RandomLookAroundGoal *this)
{
  int v2; // r0@1
  LookControl *v7; // r5@1
  int v8; // r0@1
  __int64 v9; // r2@1
  float v11; // [sp+0h] [bp-28h]@1
  int v12; // [sp+4h] [bp-24h]@1
  float v13; // [sp+Ch] [bp-1Ch]@1
  int v14; // [sp+10h] [bp-18h]@1

  _R4 = this;
  --*((_DWORD *)this + 4);
  j_Entity::getAttachPos((AABB *)&v13, *((_DWORD *)this + 5), 3, 0);
  v2 = j_Mob::getLookControl(*((Mob **)_R4 + 5));
  __asm { VLDR            S0, [R4,#8] }
  v7 = (LookControl *)v2;
  __asm
  {
    VLDR            S4, [SP,#0x28+var_1C]
    VLDR            S2, [R4,#0xC]
    VLDR            S6, [SP,#0x28+var_14]
    VADD.F32        S0, S0, S4
    VADD.F32        S2, S2, S6
    VSTR            S0, [SP,#0x28+var_28]
  }
  v12 = v14;
  __asm { VSTR            S2, [SP,#0x28+var_20] }
  v8 = (*(int (**)(void))(**((_DWORD **)_R4 + 5) + 940))();
  LODWORD(v9) = 1092616192;
  HIDWORD(v9) = v8;
  return j_LookControl::setLookAt(v7, (const Vec3 *)&v11, v9);
}
