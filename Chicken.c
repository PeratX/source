

void __fastcall Chicken::~Chicken(Chicken *this)
{
  Chicken::~Chicken(this);
}


BlockSource *__fastcall Chicken::aiStep(Chicken *this)
{
  int v9; // r0@11
  BlockSource *result; // r0@11
  int *v11; // r0@12
  char v13; // [sp+4h] [bp-1Ch]@11

  _R4 = this;
  Mob::aiStep(this);
  *((_DWORD *)_R4 + 1074) = *((_DWORD *)_R4 + 1073);
  _R2 = *((_DWORD *)_R4 + 1075);
  _R6 = dword_16BA0B0;
  *((_DWORD *)_R4 + 1076) = _R2;
  __asm
  {
    VMOV            S0, R2
    VLDR            S4, =0.0
  }
  _R5 = (int)_R4 + 4292;
  if ( *((_BYTE *)_R4 + 216) )
    _R6 = &dword_16BA0B0[1];
    VLDR            S2, [R6]
    VADD.F32        S2, S2, S0
    VMOV.F32        S0, #1.0
    VCMPE.F32       S2, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S2, S4 }
    VCMPE.F32       S2, S0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S2, S0 }
  __asm { VSTR            S2, [R1] }
  _R6 = (Chicken *)((char *)_R4 + 4308);
  __asm { VLDR            S2, [R6] }
  if ( _ZF )
    __asm
    {
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      *(_DWORD *)_R6 = 1065353216;
      __asm { VMOVLT.F32      S2, S0 }
    VLDR            S0, =0.9
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R6]
  v9 = (*(int (__fastcall **)(Chicken *))(*(_DWORD *)_R4 + 52))(_R4);
  BlockPos::BlockPos((int)&v13, v9);
  result = (BlockSource *)Entity::getRegion(_R4);
  if ( !*((_BYTE *)_R4 + 354) )
    v11 = (int *)BlockSource::getMaterial(result, (const BlockPos *)&v13);
    result = (BlockSource *)Material::isType(v11, 5);
    _ZF = result == 0;
    if ( !result )
      result = (BlockSource *)*((_BYTE *)_R4 + 216);
      _ZF = result == 0;
    if ( _ZF )
      __asm
      {
        VLDR            S0, [R4,#0x70]
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        __asm
        {
          VLDRLT          S2, =0.6
          VMULLT.F32      S0, S0, S2
          VSTRLT          S0, [R4,#0x70]
        }
    VLDR            S0, [R6]
    VLDR            S2, [R5]
    VADD.F32        S0, S0, S0
    VADD.F32        S0, S2, S0
    VSTR            S0, [R5]
  return result;
}


int __fastcall Chicken::_playStepSound(Chicken *this, const BlockPos *a2, int a3)
{
  Chicken *v3; // r4@1
  char v5; // [sp+4h] [bp-1Ch]@1

  v3 = this;
  Entity::getAttachPos((AABB *)&v5, (int)this, 0, 0);
  return Entity::playSound((int)v3, 2, (int)&v5);
}


signed int __fastcall Chicken::getEntityTypeId(Chicken *this)
{
  return 4874;
}


int __fastcall Chicken::Chicken(int a1, int a2, int *a3)
{
  int result; // r0@1

  result = Animal::Animal(a1, a2, a3);
  *(_DWORD *)result = &off_26EDD6C;
  *(_DWORD *)(result + 248) = 5;
  *(_DWORD *)(result + 4304) = 0;
  *(_DWORD *)(result + 4300) = 0;
  *(_DWORD *)(result + 4296) = 0;
  *(_DWORD *)(result + 4292) = 0;
  *(_DWORD *)(result + 4308) = 1065353216;
  *(_DWORD *)(result + 3984) = 1072064102;
  return result;
}


void __fastcall Chicken::~Chicken(Chicken *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall Chicken::useNewAi(Chicken *this)
{
  return 1;
}


unsigned int __fastcall Chicken::getExperienceReward(Chicken *this)
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
    result = (Random::_genRandInt32((Random *)v4) & 1) + 1;
  return result;
}
