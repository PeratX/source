

int __fastcall Spider::findAttackTarget(Spider *this)
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


signed int __fastcall Spider::useNewAi(Spider *this)
{
  return 1;
}


signed int __fastcall Spider::canBeAffected(Spider *this, const MobEffectInstance *a2)
{
  const MobEffectInstance *v2; // r4@1
  Mob *v3; // r5@1
  int v4; // r6@1
  signed int result; // r0@2

  v2 = a2;
  v3 = this;
  v4 = MobEffectInstance::getId(a2);
  if ( v4 == MobEffect::getId((MobEffect *)MobEffect::POISON) )
    result = 0;
  else
    result = Mob::canBeAffected(v3, v2);
  return result;
}


void __fastcall Spider::~Spider(Spider *this)
{
  Spider::~Spider(this);
}


void __fastcall Spider::~Spider(Spider *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall Spider::getSpiderType(Spider *this)
{
  return 0;
}


signed int __fastcall Spider::getModelScale(Spider *this)
{
  return 1065353216;
}


int __fastcall Spider::getShadowRadius(Spider *this)
{
  int result; // r0@1

  _R0 = Entity::getShadowRadius(this);
  __asm
  {
    VLDR            S0, =0.7
    VMOV            S2, R0
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


int __fastcall Spider::Spider(int a1, int a2, int *a3)
{
  int result; // r0@1

  result = Monster::Monster(a1, a2, a3);
  *(_DWORD *)result = &off_26FA0F0;
  *(_DWORD *)(result + 248) = 22;
  *(_DWORD *)(result + 172) |= 0x2000u;
  return result;
}


signed int __fastcall Spider::getEntityTypeId(Spider *this)
{
  return 264995;
}


int __fastcall Spider::_playStepSound(Spider *this, const BlockPos *a2, int a3)
{
  Spider *v3; // r4@1
  char v5; // [sp+4h] [bp-1Ch]@1

  v3 = this;
  Entity::getAttachPos((AABB *)&v5, (int)this, 0, 0);
  return Entity::playSound((int)v3, 2, (int)&v5);
}
