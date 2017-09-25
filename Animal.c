

int __fastcall Animal::isInvulnerableTo(Animal *this, const EntityDamageSource *a2)
{
  Entity *v2; // r5@1
  const EntityDamageSource *v3; // r4@1
  __int64 v4; // r0@1
  bool v5; // zf@1
  char *v6; // r6@4
  int result; // r0@5
  __int64 v8; // [sp+0h] [bp-18h]@4

  v2 = this;
  v3 = a2;
  v4 = *(_QWORD *)((char *)this + 476);
  v5 = HIDWORD(v4) == (_DWORD)v4;
  if ( HIDWORD(v4) != (_DWORD)v4 )
  {
    LODWORD(v4) = *(_DWORD *)v4;
    v5 = (_DWORD)v4 == 0;
  }
  if ( v5
    || (v6 = j_Entity::getUniqueID((Entity *)v4),
        (*(void (__fastcall **)(__int64 *, const EntityDamageSource *))(*(_DWORD *)v3 + 32))(&v8, v3),
        *(_QWORD *)v6 ^ v8) )
    result = j_Entity::isInvulnerableTo(v2, v3);
  else
    result = 1;
  return result;
}


unsigned int __fastcall Animal::getExperienceReward(Animal *this)
{
  Entity *v1; // r4@1
  unsigned int result; // r0@3
  Level *v3; // r0@4
  char *v4; // r0@4

  v1 = this;
  if ( *((_DWORD *)this + 861) < 1 || j_Entity::isBaby(this) )
  {
    result = 0;
  }
  else
    v3 = (Level *)j_Entity::getLevel(v1);
    v4 = j_Level::getRandom(v3);
    result = (j_Random::_genRandInt32((Random *)v4) & 1) + 1;
  return result;
}


int __fastcall Animal::_getWalkTargetValue(Animal *this, const BlockPos *a2)
{
  const BlockPos *v2; // r4@1
  Animal *v3; // r6@1
  const BlockPos *v4; // r5@1
  int v5; // r1@1
  int v6; // r2@1
  int result; // r0@7
  int v13; // [sp+0h] [bp-20h]@1
  int v14; // [sp+4h] [bp-1Ch]@1
  int v15; // [sp+8h] [bp-18h]@1
  unsigned __int8 v16; // [sp+Ch] [bp-14h]@1

  v2 = a2;
  v3 = this;
  v4 = (const BlockPos *)j_Entity::getRegion(this);
  v5 = *((_DWORD *)v2 + 1);
  v6 = *((_DWORD *)v2 + 2);
  v13 = *(_DWORD *)v2;
  v14 = v5 - 1;
  v15 = v6;
  j_BlockSource::getBlockID((BlockSource *)&v16, v4, (int)&v13);
  if ( v16 == *(_BYTE *)(Block::mGrass + 4) )
  {
    __asm { VMOV.F32        S0, #10.0 }
  }
  else if ( j_Entity::getStatusFlag((int)v3, 47) || v16 != *(_BYTE *)(Block::mMagmaBlock + 4) )
    _R0 = j_BlockSource::getBrightness(v4, v2);
    __asm
    {
      VMOV.F32        S0, #-0.5
      VMOV            S2, R0
      VADD.F32        S0, S2, S0
    }
  else
    __asm { VMOV.F32        S0, #-0.5 }
  __asm { VMOV            R0, S0 }
  return result;
}


int __fastcall Animal::onSizeUpdated(int result)
{
  __asm
  {
    VLDR            S0, =0.85
    VLDR            S4, [R0,#0x134]
    VLDR            S2, [R0,#0x130]
    VLDR            S8, =0.9
    VMUL.F32        S6, S4, S0
    VMUL.F32        S0, S2, S0
  }
  *(_DWORD *)(result + 364) = 0;
    VMUL.F32        S2, S4, S8
    VSTR            S6, [R0,#0x170]
    VSTR            S0, [R0,#0x174]
  *(_DWORD *)(result + 376) = 0;
    VSTR            S2, [R0,#0x17C]
    VSTR            S0, [R0,#0x180]
  *(_DWORD *)(result + 388) = 0;
  __asm { VSTR            S6, [R0,#0x188] }
  *(_DWORD *)(result + 396) = 0;
  return result;
}


int __fastcall Animal::Animal(int a1, int a2, int *a3)
{
  int result; // r0@1

  result = j_Mob::Mob(a1, a2, a3);
  *(_DWORD *)result = &off_271B2EC;
  *(_DWORD *)(result + 172) |= 0x10u;
  return result;
}


void __fastcall Animal::~Animal(Animal *this)
{
  Entity *v1; // r0@1

  v1 = j_Mob::~Mob(this);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall Animal::getAmbientSoundPostponeTicks(Animal *this)
{
  signed int result; // r0@2
  float v6; // [sp+4h] [bp-Ch]@1

  v6 = 0.0;
  if ( j_Entity::getAmbientSoundIntervalMin(this, &v6) == 1 )
  {
    __asm
    {
      VMOV.F32        S0, #20.0
      VLDR            S2, [SP,#0x10+var_C]
      VMUL.F32        S0, S2, S0
      VCVTR.S32.F32   S0, S0
      VMOV            R0, S0
    }
  }
  else
    result = 240;
  return result;
}


void __fastcall Animal::~Animal(Animal *this)
{
  Animal::~Animal(this);
}
