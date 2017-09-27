

int __fastcall Silverfish::spawnAnim(Silverfish *this)
{
  Random *v2; // r5@1
  signed int v7; // r9@1
  unsigned int v12; // r0@2
  int v15; // r0@2
  int result; // r0@2
  float v17; // [sp+1Ch] [bp-74h]@2

  _R4 = this;
  v2 = (Silverfish *)((char *)this + 552);
  __asm { VLDR            D9, =2.32830644e-10 }
  v7 = 20;
  __asm
  {
    VLDR            S21, =-0.2
    VLDR            S20, =0.02
  }
  do
    _R10 = Random::nextGaussian(v2);
    _R11 = Random::nextGaussian(v2);
    _R6 = Random::nextGaussian(v2);
    __asm { VLDR            S22, [R4,#0x48] }
    _R7 = Random::_genRandInt32(v2);
    __asm
    {
      VLDR            S24, [R4,#0x4C]
      VLDR            S26, [R4,#0x130]
    }
    v12 = Random::_genRandInt32(v2);
    __asm { VMOV            S0, R7 }
    _R8 = v12;
      VLDR            S28, [R4,#0x50]
      VLDR            S30, [R4,#0x134]
      VCVT.F64.U32    D8, S0
    _R0 = Random::_genRandInt32(v2);
      VMOV            S0, R0
      VMOV            S2, R8
      VCVT.F64.U32    D0, S0
      VCVT.F64.U32    D1, S2
      VMUL.F64        D0, D0, D9
      VMUL.F64        D2, D8, D9
      VMUL.F64        D1, D1, D9
      VMOV            S6, R10
      VMOV            S8, R6
      VMUL.F32        S10, S6, S21
      VCVT.F32.F64    S4, D2
      VMUL.F32        S14, S8, S21
      VCVT.F32.F64    S0, D0
      VMOV            S12, R11
      VCVT.F32.F64    S2, D1
      VADD.F32        S10, S22, S10
      VLDR            S3, [R4,#0x130]
      VADD.F32        S14, S28, S14
      VADD.F32        S4, S4, S4
      VMUL.F32        S1, S12, S21
      VADD.F32        S0, S0, S0
      VMUL.F32        S2, S2, S30
      VMUL.F32        S28, S12, S20
      VSUB.F32        S10, S10, S26
      VSUB.F32        S14, S14, S3
      VMUL.F32        S4, S26, S4
      VADD.F32        S1, S24, S1
      VMUL.F32        S0, S3, S0
      VMUL.F32        S26, S6, S20
      VMUL.F32        S30, S8, S20
      VADD.F32        S16, S10, S4
      VADD.F32        S22, S1, S2
      VADD.F32        S24, S14, S0
    v15 = Entity::getLevel(_R4);
      VSTR            S16, [SP,#0x90+var_74]
      VSTR            S22, [SP,#0x90+var_70]
      VSTR            S26, [SP,#0x90+var_80]
      VSTR            S28, [SP,#0x90+var_7C]
      VSTR            S24, [SP,#0x90+var_6C]
      VSTR            S30, [SP,#0x90+var_78]
    result = Level::addParticle(v15, 5, (int)&v17);
    --v7;
  while ( v7 );
  return result;
}


void __fastcall Silverfish::~Silverfish(Silverfish *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall Silverfish::~Silverfish(Silverfish *this)
{
  Silverfish::~Silverfish(this);
}


int __fastcall Silverfish::_getWalkTargetValue(Silverfish *this, const BlockPos *a2)
{
  const BlockPos *v2; // r4@1
  Monster *v3; // r5@1
  const BlockPos *v4; // r0@1
  int result; // r0@4
  unsigned __int8 v11; // [sp+4h] [bp-14h]@1

  v2 = a2;
  v3 = this;
  v4 = (const BlockPos *)Entity::getRegion(this);
  BlockSource::getBlockID((BlockSource *)&v11, v4, (int)v2);
  if ( v11 == *(_BYTE *)(Block::mStone + 4) )
  {
    __asm { VMOV.F32        S0, #10.0 }
  }
  else
    _R0 = Monster::_getWalkTargetValue(v3, v2);
    __asm { VMOV            S0, R0 }
  __asm { VMOV            R0, S0 }
  return result;
}


signed int __fastcall Silverfish::isDarkEnoughToSpawn(Silverfish *this)
{
  return 1;
}


int __fastcall Silverfish::findAttackTarget(Silverfish *this)
{
  Entity *v1; // r4@1
  int result; // r0@2
  Dimension *v8; // r0@3

  v1 = this;
  _R0 = (*(int (**)(void))(*(_DWORD *)this + 260))();
  __asm
  {
    VMOV.F32        S0, #0.5
    VMOV            S2, R0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    v8 = (Dimension *)Entity::getDimension(v1);
    result = Dimension::fetchNearestPlayer(v8, v1, 16.0);
  else
    result = 0;
  return result;
}


void __fastcall Silverfish::handleEntityEvent(MinecraftEventing *a1, signed int a2, Mob *a3)
{
  Silverfish::handleEntityEvent(a1, a2, a3);
}


int __fastcall Silverfish::_playStepSound(Silverfish *this, const BlockPos *a2, int a3)
{
  Silverfish *v3; // r4@1
  char v5; // [sp+4h] [bp-1Ch]@1

  v3 = this;
  Entity::getAttachPos((AABB *)&v5, (int)this, 0, 0);
  return Entity::playSound((int)v3, 2, (int)&v5);
}


signed int __fastcall Silverfish::checkSpawnRules(Silverfish *this, bool a2)
{
  Entity *v2; // r5@1
  bool v3; // r4@1
  int v4; // r6@1
  Dimension *v5; // r0@1
  signed int result; // r0@2

  v2 = this;
  v3 = a2;
  v4 = (*(int (**)(void))(*(_DWORD *)this + 52))();
  v5 = (Dimension *)Entity::getDimension(v2);
  if ( Dimension::fetchNearestPlayer(v5, *(float *)v4, *(float *)(v4 + 4), *(float *)(v4 + 8), 5.0) )
    result = 0;
  else
    result = Monster::checkSpawnRules(v2, v3);
  return result;
}


int __fastcall Silverfish::Silverfish(int a1, int a2, int *a3)
{
  int result; // r0@1

  result = Monster::Monster(a1, a2, a3);
  *(_DWORD *)result = &off_26F9238;
  *(_DWORD *)(result + 248) = 23;
  *(_DWORD *)(result + 172) |= 0x2000u;
  return result;
}


void __fastcall Silverfish::handleEntityEvent(MinecraftEventing *a1, signed int a2, Mob *a3)
{
  if ( a2 == 27 )
    (*(void (**)(void))(*(_DWORD *)a1 + 780))();
  else
    j_j_j__ZN3Mob17handleEntityEventE11EntityEventi(a1, a2, a3);
}


signed int __fastcall Silverfish::useNewAi(Silverfish *this)
{
  return 1;
}


signed int __fastcall Silverfish::getEntityTypeId(Silverfish *this)
{
  return 264999;
}
