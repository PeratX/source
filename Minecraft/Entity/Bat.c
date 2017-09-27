

void __fastcall Bat::~Bat(Bat *this)
{
  Bat::~Bat(this);
}


void __fastcall Bat::addAdditionalSaveData(Bat *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  Bat *v3; // r5@1
  char v4; // r0@1
  void *v5; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  j_Mob::addAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v8, "BatFlags");
  v4 = j_Entity::getStatusFlag((int)v3, 22);
  j_CompoundTag::putByte((int)v2, (const void **)&v8, v4);
  v5 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
}


int __fastcall Bat::normalTick(Bat *this)
{
  _BYTE *v2; // r6@1
  float v3; // r1@1
  int result; // r0@2
  int (__fastcall *v9)(Entity *, signed int, int, signed int); // r6@4
  int v10; // r0@4

  _R4 = this;
  j_Mob::normalTick(this);
  v2 = (char *)_R4 + 4292;
  if ( j_Entity::isResting(_R4) == 1 )
  {
    *v2 = 1;
    *((_DWORD *)_R4 + 27) = 0;
    *((_DWORD *)_R4 + 28) = 0;
    *((_DWORD *)_R4 + 29) = 0;
    result = j_mce::Math::floor(*((mce::Math **)_R4 + 19), v3);
    __asm
    {
      VMOV            S2, R0
      VMOV.F32        S0, #1.0
      VCVT.F32.S32    S2, S2
      VADD.F32        S0, S2, S0
      VLDR            S2, [R4,#0x134]
      VSUB.F32        S0, S0, S2
      VSTR            S0, [R4,#0x4C]
    }
  }
  else
    result = *v2;
    *v2 = 0;
      VLDR            S0, =0.6
      VLDR            S2, [R4,#0x70]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [R4,#0x70]
    if ( !_ZF )
      v9 = *(int (__fastcall **)(Entity *, signed int, int, signed int))(*(_DWORD *)_R4 + 556);
      v10 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 52))(_R4);
      result = v9(_R4, 32, v10, -1);
  return result;
}


void __fastcall Bat::~Bat(Bat *this)
{
  Entity *v1; // r0@1

  v1 = j_Mob::~Mob(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall Bat::Bat(int a1, int a2, int *a3)
{
  int v3; // r4@1

  v3 = a1;
  j_Mob::Mob(a1, a2, a3);
  *(_DWORD *)v3 = &off_271B7A0;
  *(_BYTE *)(v3 + 4292) = 1;
  *(_DWORD *)(v3 + 4296) = 0;
  *(_DWORD *)(v3 + 4300) = 0;
  *(_DWORD *)(v3 + 4304) = 0;
  *(_DWORD *)(v3 + 248) = 10;
  *(_DWORD *)(v3 + 172) |= 0x800u;
  j_Entity::setResting((Entity *)v3, 1);
  return v3;
}


void __fastcall Bat::readAdditionalSaveData(Bat *this, const CompoundTag *a2)
{
  Bat::readAdditionalSaveData(this, a2);
}


void __fastcall Bat::readAdditionalSaveData(Bat *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  Bat *v3; // r4@1
  int v4; // r2@1
  void *v5; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  j_Mob::readAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v8, "BatFlags");
  v4 = j_CompoundTag::getByte((int)v2, (const void **)&v8) != 0;
  j_Entity::setStatusFlag((int)v3, 22, v4);
  v5 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
}


int __fastcall Bat::isPushable(Bat *this)
{
  return 0;
}


int __fastcall Bat::getExperienceReward(Bat *this)
{
  return 0;
}


int __fastcall Bat::checkFallDamage(int result, float a2, bool a3)
{
  *(_DWORD *)(result + 224) = 0;
  return result;
}


int __fastcall Bat::_hurt(Bat *this, const EntityDamageSource *a2, int a3, int a4, bool a5)
{
  int v5; // r4@1
  int v6; // r5@1
  const EntityDamageSource *v7; // r6@1
  Entity *v8; // r7@1
  BlockSource *v9; // r0@1
  Level *v10; // r0@1

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = this;
  v9 = (BlockSource *)j_Entity::getRegion(this);
  v10 = (Level *)j_BlockSource::getLevel(v9);
  if ( !j_Level::isClientSide(v10) && j_Entity::isResting(v8) == 1 )
    j_Entity::setResting(v8, 0);
  return j_Mob::_hurt(v8, v7, v6, v5, a5);
}


signed int __fastcall Bat::useNewAi(Bat *this)
{
  return 1;
}


unsigned int __fastcall Bat::newServerAiStep(Bat *this)
{
  BlockSource *v2; // r5@1
  float v3; // r1@1
  int v4; // r6@2
  float v9; // r1@2
  int v10; // r3@2
  Dimension *v13; // r0@5
  unsigned int result; // r0@5
  Entity *v15; // r0@6
  int v16; // r1@6
  unsigned int v17; // r0@7
  float v18; // r1@7
  int v19; // r6@8
  float v20; // r1@8
  int v21; // r3@8

  _R4 = this;
  j_Mob::newServerAiStep(this);
  v2 = (BlockSource *)j_Entity::getRegion(_R4);
  if ( j_Entity::isResting(_R4) == 1 )
  {
    v4 = j_mce::Math::floor(*((mce::Math **)_R4 + 18), v3);
    __asm
    {
      VLDR            S0, [R4,#0x4C]
      VCVTR.S32.F32   S16, S0
    }
    v10 = j_mce::Math::floor(*((mce::Math **)_R4 + 20), v9);
    __asm { VMOV            R0, S16 }
    if ( !j_BlockSource::isSolidBlockingBlock(v2, v4, _R0 + 1, v10) )
      goto LABEL_13;
    if ( !(j_Random::_genRandInt32((Bat *)((char *)_R4 + 552)) % 0xC8) )
      _R0 = j_Random::_genRandInt32((Bat *)((char *)_R4 + 552));
      __asm
      {
        VMOV            S0, R0
        VLDR            D1, =2.32830644e-10
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D1
        VCVT.F32.F64    S0, D0
        VLDR            S2, =360.0
        VMUL.F32        S0, S0, S2
        VSTR            S0, [R0]
      }
    v13 = (Dimension *)j_BlockSource::getDimension(v2);
    result = j_Dimension::fetchNearestPlayer(v13, _R4, 4.0);
    if ( result )
LABEL_13:
      v15 = _R4;
      v16 = 0;
      return j_j_j__ZN6Entity10setRestingEb_0(v15, v16);
  }
  else
    v17 = j_Random::_genRandInt32((Bat *)((char *)_R4 + 552));
    LODWORD(v18) = v17 / 0x64;
    result = v17 % 0x64;
    if ( !result )
      v19 = j_mce::Math::floor(*((mce::Math **)_R4 + 18), v18);
        VLDR            S0, [R4,#0x4C]
        VCVTR.S32.F32   S16, S0
      v21 = j_mce::Math::floor(*((mce::Math **)_R4 + 20), v20);
      __asm { VMOV            R0, S16 }
      result = j_BlockSource::isSolidBlockingBlock(v2, v19, _R0 + 1, v21);
      if ( result == 1 )
        v15 = _R4;
        v16 = 1;
        return j_j_j__ZN6Entity10setRestingEb_0(v15, v16);
  return result;
}


void __fastcall Bat::addAdditionalSaveData(Bat *this, CompoundTag *a2)
{
  Bat::addAdditionalSaveData(this, a2);
}


signed int __fastcall Bat::getEntityTypeId(Bat *this)
{
  return 33043;
}
