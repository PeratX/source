

signed int __fastcall Blaze::getExperienceReward(Blaze *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 861);
  result = 0;
  if ( v1 > 0 )
    result = 10;
  return result;
}


signed int __fastcall Blaze::getEntityTypeId(Blaze *this)
{
  return 2859;
}


int __fastcall Blaze::Blaze(int a1, int a2, int *a3)
{
  int result; // r0@1

  result = Monster::Monster(a1, a2, a3);
  *(_DWORD *)result = &off_26F5444;
  *(_DWORD *)(result + 4304) = 1056964608;
  *(_DWORD *)(result + 4308) = 0;
  *(_DWORD *)(result + 248) = 20;
  return result;
}


int __fastcall Blaze::normalTick(Blaze *this)
{
  float v6; // r1@2
  float v7; // r2@2
  int v8; // r0@2
  unsigned int v10; // r0@3
  int v13; // r0@3
  int result; // r0@3
  Level *v15; // r0@4
  char *v16; // r0@4
  int v17; // r0@4
  float v18; // [sp+1Ch] [bp-64h]@3
  float v19; // [sp+28h] [bp-58h]@2
  float v20; // [sp+2Ch] [bp-54h]@2
  float v21; // [sp+30h] [bp-50h]@2

  _R4 = this;
  Monster::normalTick(this);
  if ( !(Random::_genRandInt32((Blaze *)((char *)_R4 + 552)) % 0x18) )
  {
    __asm { VMOV.F32        S0, #0.5 }
    v6 = *((float *)_R4 + 19);
    v7 = *((float *)_R4 + 20);
    v19 = *((float *)_R4 + 18);
    v20 = v6;
    v21 = v7;
    __asm
    {
      VLDR            S2, [SP,#0x80+var_58]
      VADD.F32        S2, S2, S0
      VSTR            S2, [SP,#0x80+var_58]
      VLDR            S2, [SP,#0x80+var_54]
      VSTR            S2, [SP,#0x80+var_54]
      VLDR            S2, [SP,#0x80+var_50]
      VADD.F32        S0, S2, S0
      VSTR            S0, [SP,#0x80+var_50]
    }
    v8 = Entity::getLevel(_R4);
    Level::playSound(v8, 47, (int)&v19);
  }
  __asm { VLDR            S16, [R4,#0x48] }
  _R6 = Random::_genRandInt32((Blaze *)((char *)_R4 + 552));
  __asm
    VLDR            S18, [R4,#0x4C]
    VLDR            S20, [R4,#0x130]
  v10 = Random::_genRandInt32((Blaze *)((char *)_R4 + 552));
  __asm { VMOV            S0, R6 }
  _R7 = v10;
    VLDR            S22, [R4,#0x50]
    VLDR            S24, [R4,#0x134]
    VCVT.F64.U32    D13, S0
  _R0 = Random::_genRandInt32((Blaze *)((char *)_R4 + 552));
    VMOV            S2, R0
    VLDR            D0, =2.32830644e-10
    VMOV            S4, R7
    VCVT.F64.U32    D1, S2
    VCVT.F64.U32    D2, S4
    VMUL.F64        D1, D1, D0
    VMUL.F64        D3, D13, D0
    VMUL.F64        D0, D2, D0
    VMOV.F32        S4, #-0.5
    VCVT.F32.F64    S6, D3
    VCVT.F32.F64    S2, D1
    VADD.F32        S6, S6, S4
    VCVT.F32.F64    S0, D0
    VADD.F32        S2, S2, S4
    VLDR            S4, [R4,#0x130]
    VMUL.F32        S6, S6, S20
    VMUL.F32        S0, S0, S24
    VMUL.F32        S2, S2, S4
    VADD.F32        S16, S6, S16
    VADD.F32        S18, S0, S18
    VADD.F32        S20, S2, S22
  v13 = Entity::getLevel(_R4);
    VSTR            S16, [SP,#0x80+var_64]
    VSTR            S18, [SP,#0x80+var_60]
    VSTR            S20, [SP,#0x80+var_5C]
  Level::addParticle(v13, 9, (int)&v18);
  result = Entity::isCharged(_R4);
  if ( result == 1 )
    v15 = (Level *)Entity::getLevel(_R4);
    v16 = Level::getRandom(v15);
    Entity::getRandomPointInAABB((Entity *)&v19, _R4, (Random *)v16);
    v17 = Entity::getLevel(_R4);
      VMOV.F32        S0, #0.5
      VLDR            S2, [R4,#0x6C]
      VLDR            S4, [R4,#0x74]
      VMUL.F32        S2, S2, S0
      VMUL.F32        S0, S4, S0
      VSTR            S2, [SP,#0x80+var_70]
      VSTR            S0, [SP,#0x80+var_68]
    result = Level::addParticle(v17, 16, (int)&v19);
    if ( result )
      result = (*(int (__cdecl **)(int, Blaze *, _DWORD))(*(_DWORD *)result + 32))(
                 result,
                 _R4,
                 *(_DWORD *)(*(_DWORD *)result + 32));
  return result;
}


void __fastcall Blaze::~Blaze(Blaze *this)
{
  Blaze::~Blaze(this);
}


signed int __fastcall Blaze::isDarkEnoughToSpawn(Blaze *this)
{
  return 1;
}


signed int __fastcall Blaze::useNewAi(Blaze *this)
{
  return 1;
}


void __fastcall Blaze::~Blaze(Blaze *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall Blaze::getBrightness(Blaze *this, float a2)
{
  return 1065353216;
}


int __fastcall Blaze::aiStep(Blaze *this)
{
  Monster *v1; // r4@1
  Level *v2; // r0@1
  int result; // r0@1

  v1 = this;
  v2 = (Level *)Entity::getLevel(this);
  result = Level::isClientSide(v2);
  if ( !result )
    result = j_j_j__ZN7Monster6aiStepEv(v1);
  return result;
}


int __fastcall Blaze::travel(Blaze *this, float a2, float a3)
{
  float v3; // r4@1
  float v4; // r5@1
  Level *v6; // r0@1
  int v7; // r1@2
  int v13; // r1@5
  int v15; // r0@7
  int v17; // [sp+0h] [bp-38h]@6
  char v19; // [sp+Ch] [bp-2Ch]@6

  v3 = a3;
  v4 = a2;
  _R6 = this;
  v6 = (Level *)Entity::getLevel(this);
  if ( !Level::isClientSide(v6) )
  {
    v7 = *((_DWORD *)_R6 + 1077);
    _VF = __OFSUB__(v7--, 1);
    *((_DWORD *)_R6 + 1077) = v7;
    if ( (unsigned __int8)((v7 < 0) ^ _VF) | (v7 == 0) )
    {
      *((_DWORD *)_R6 + 1077) = 100;
      _R0 = Random::nextGaussian((Blaze *)((char *)_R6 + 552));
      __asm
      {
        VMOV.F32        S0, #3.0
        VMOV            S2, R0
        VMOV.F32        S4, #0.5
        VMUL.F32        S0, S2, S0
        VADD.F32        S0, S0, S4
        VSTR            S0, [R0]
      }
    }
    v13 = Entity::getTarget(_R6);
    if ( v13 )
      Entity::getAttachPos((AABB *)&v19, v13, 3, 0);
      __asm { VLDR            S16, [SP,#0x38+var_28] }
      Entity::getAttachPos((AABB *)&v17, (int)_R6, 3, 0);
      __asm { VLDR            S2, [SP,#0x38+var_34] }
      _R0 = (int)_R6 + 4304;
        VLDR            S4, =0.05
        VLDR            S0, [R0]
        VADD.F32        S0, S0, S2
        VSUB.F32        S2, S16, S0
        VABS.F32        S2, S2
        VCMPE.F32       S2, S4
        VMRS            APSR_nzcv, FPSCR
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        *((_DWORD *)_R6 + 28) = 0;
      else
        __asm { VCMPE.F32       S16, S0 }
        LOWORD(v15) = -13107;
        __asm { VMRS            APSR_nzcv, FPSCR }
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          HIWORD(v15) = -16948;
        else
          HIWORD(v15) = 15820;
        *((_DWORD *)_R6 + 28) = v15;
    else if ( !*((_BYTE *)_R6 + 216) )
        VLDR            S0, [R6,#0x70]
        VCMPE.F32       S0, #0.0
      if ( _NF ^ _VF )
        __asm
        {
          VLDRLT          S2, =0.6
          VMULLT.F32      S0, S0, S2
          VSTRLT          S0, [R6,#0x70]
        }
  }
  return Mob::travel(_R6, v4, v3);
}
