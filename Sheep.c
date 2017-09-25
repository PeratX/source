

signed int __fastcall Sheep::getEntityTypeId(Sheep *this)
{
  return 4877;
}


int __fastcall Sheep::getHeadEatAngleScale(Sheep *this, float _R1)
{
  signed int v2; // r2@1
  int result; // r0@2

  v2 = *((_DWORD *)this + 1073);
  if ( (unsigned int)(v2 - 5) > 0x1F )
  {
    if ( v2 < 1 )
    {
      __asm
      {
        VLDR            S0, =0.0055556
        VLDR            S2, [R0,#0x78]
        VMUL.F32        S0, S2, S0
      }
      _R0 = &mce::Math::PI;
        VLDR            S2, [R0]
        VMUL.F32        S0, S0, S2
        VMOV            R0, S0
    }
    else
      __asm { VLDR            S0, =0.2 }
  }
  else
    _R0 = v2 - 4;
    __asm
      VMOV            S0, R1
      VMOV            S2, R0
      VCVT.F32.S32    S2, S2
      VSUB.F32        S0, S2, S0
      VLDR            S2, =0.89688
      VMUL.F32        S0, S0, S2
      VMOV            R0, S0
    _R0 = mce::Math::sin(_R0, _R1);
      VLDR            S0, =0.07
      VMUL.F32        S0, S2, S0
      VLDR            S2, =0.2
    _R0 = &mce::Math::PI;
      VADD.F32        S0, S0, S2
      VLDR            S2, [R0]
  return result;
}


void __fastcall Sheep::~Sheep(Sheep *this)
{
  Sheep::~Sheep(this);
}


int __fastcall Sheep::getHeadEatPositionScale(Sheep *this, float _R1)
{
  int result; // r0@2

  _R0 = *((_DWORD *)this + 1073);
  if ( _R0 >= 1 )
  {
    if ( (unsigned int)(_R0 - 4) >= 0x21 )
    {
      __asm { VMOV            S0, R1 }
      if ( _R0 > 3 )
      {
        _R0 = _R0 - 40;
        __asm
        {
          VMOV.F32        S4, #-0.25
          VMOV            S2, R0
          VCVT.F32.S32    S2, S2
        }
      }
      else
          VMOV.F32        S4, #0.25
      __asm
        VSUB.F32        S0, S2, S0
        VMUL.F32        S0, S0, S4
        VMOV            R0, S0
    }
    else
        VMOVCC.F32      S0, #1.0
        VMOVCC          R0, S0
  }
  else
    __asm
      VLDRLT          S0, =0.0
      VMOVLT          R0, S0
  return result;
}


void __fastcall Sheep::~Sheep(Sheep *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall Sheep::_getOffspringColor(Sheep *this, Animal *a2, Animal *a3)
{
  Entity *v3; // r5@1
  Entity *v4; // r4@1
  int v5; // r6@1
  int v6; // r4@1
  Level *v7; // r0@1
  char *v8; // r0@1

  v3 = this;
  v4 = a3;
  v5 = Entity::getColor(a2);
  v6 = Entity::getColor(v4);
  v7 = (Level *)Entity::getLevel(v3);
  v8 = Level::getRandom(v7);
  if ( Random::_genRandInt32((Random *)v8) & 0x8000000 )
    v6 = v5;
  return v6;
}


int __fastcall Sheep::Sheep(int a1, int a2, int *a3)
{
  int result; // r0@1

  result = Animal::Animal(a1, a2, a3);
  *(_DWORD *)result = &off_26EF4F0;
  *(_DWORD *)(result + 248) = 9;
  *(_DWORD *)(result + 4292) = 0;
  *(_DWORD *)(result + 3984) = 1067030938;
  return result;
}


int __fastcall Sheep::aiStep(Sheep *this)
{
  signed int v1; // r1@1

  v1 = *((_DWORD *)this + 1073);
  if ( v1 >= 1 )
    *((_DWORD *)this + 1073) = v1 - 1;
  return j_j_j__ZN3Mob6aiStepEv_0(this);
}


int __fastcall Sheep::jumpFromGround(int result)
{
  int v1; // r1@1

  v1 = *(_DWORD *)(result + 4292);
  if ( v1 > 0 )
    JUMPOUT(v1 <= 0, Sheep::useNewAi);
  else
    result = j_j_j__ZN3Mob14jumpFromGroundEv((Mob *)result);
  return result;
}


void __fastcall Sheep::handleEntityEvent(int a1, signed int a2, Mob *a3)
{
  if ( a2 == 10 )
    *(_DWORD *)(a1 + 4292) = 40;
  else
    j_j_j__ZN3Mob17handleEntityEventE11EntityEventi((MinecraftEventing *)a1, a2, a3);
}


void __fastcall Sheep::handleEntityEvent(int a1, signed int a2, Mob *a3)
{
  Sheep::handleEntityEvent(a1, a2, a3);
}


signed int __fastcall Sheep::useNewAi(Sheep *this)
{
  return 1;
}
