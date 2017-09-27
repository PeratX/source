

unsigned int __fastcall PolarBear::getExperienceReward(PolarBear *this)
{
  Entity *v1; // r4@1
  unsigned int result; // r0@3
  Level *v3; // r0@4
  char *v4; // r0@4

  v1 = this;
  if ( *((_DWORD *)this + 861) < 1 || Entity::isBaby(this) )
  {
    result = 0;
  }
  else
    v3 = (Level *)Entity::getLevel(v1);
    v4 = Level::getRandom(v3);
    result = Random::_genRandInt32((Random *)v4) % 3 + 1;
  return result;
}


void __fastcall PolarBear::~PolarBear(PolarBear *this)
{
  PolarBear::~PolarBear(this);
}


int __fastcall PolarBear::normalTick(PolarBear *this)
{
  PolarBear *v1; // r4@1
  int result; // r0@1

  v1 = this;
  Mob::normalTick(this);
  _R5 = (int)v1 + 4296;
  *((_DWORD *)v1 + 1073) = *((_DWORD *)v1 + 1074);
  result = Entity::getStatusFlag((int)v1, 37);
  __asm { VLDR            S0, [R5] }
  if ( _ZF )
    __asm { VMOVEQ.F32      S2, #1.0 }
  else
    __asm { VMOVNE.F32      S2, #-1.0 }
  __asm
  {
    VMOV.F32        S4, #6.0
    VADD.F32        S2, S0, S2
    VLDR            S0, =0.0
    VCMPE.F32       S2, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S2, S4
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S2 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S0, S4 }
  __asm { VSTR            S0, [R5] }
  return result;
}


int __fastcall PolarBear::getStandingAnimationScale(PolarBear *this, float _R1)
{
  int result; // r0@1

  _R2 = (char *)this + 4292;
  _R0 = (char *)this + 4296;
  __asm
  {
    VMOV            S4, R1
    VLDR            S0, [R2]
    VLDR            S2, [R0]
    VSUB.F32        S2, S2, S0
    VMUL.F32        S2, S2, S4
    VADD.F32        S0, S2, S0
    VLDR            S2, =0.16667
    VMUL.F32        S0, S0, S2
    VMOV            R0, S0
  }
  return result;
}


void __fastcall PolarBear::~PolarBear(PolarBear *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall PolarBear::PolarBear(int a1, int a2, int *a3)
{
  int result; // r0@1

  result = Animal::Animal(a1, a2, a3);
  *(_DWORD *)result = &off_26EEB88;
  *(_DWORD *)(result + 4292) = 0;
  *(_DWORD *)(result + 4296) = 0;
  *(_DWORD *)(result + 248) = 13;
  return result;
}


signed int __fastcall PolarBear::getWaterSlowDown(PolarBear *this)
{
  return 1065017672;
}


signed int __fastcall PolarBear::getEntityTypeId(PolarBear *this)
{
  return 4892;
}
