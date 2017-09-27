

int __fastcall LlamaSpit::normalTick(LlamaSpit *this)
{
  int v2; // r0@1
  int v7; // r1@1
  int v9; // [sp+1Ch] [bp-14h]@1
  int v10; // [sp+24h] [bp-Ch]@1

  _R4 = this;
  Entity::normalTick(this);
  MovementInterpolator::tick((LlamaSpit *)((char *)_R4 + 3424), _R4);
  v2 = Entity::getLevel(_R4);
  __asm
  {
    VMOV.F32        S0, #0.5
    VLDR            S2, [R4,#0x4C]
  }
  v7 = *((_DWORD *)_R4 + 20);
  v9 = *((_DWORD *)_R4 + 18);
    VADD.F32        S0, S2, S0
    VSTR            S0, [SP,#0x30+var_10]
  v10 = v7;
  return Level::addParticle(v2, 42, (int)&v9);
}


void __fastcall LlamaSpit::~LlamaSpit(LlamaSpit *this)
{
  LlamaSpit::~LlamaSpit(this);
}


int __fastcall LlamaSpit::getShadowHeightOffs(LlamaSpit *this)
{
  return 0;
}


void __fastcall LlamaSpit::~LlamaSpit(LlamaSpit *this)
{
  Entity *v1; // r0@1

  v1 = Entity::~Entity(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall LlamaSpit::isPickable(LlamaSpit *this)
{
  return 1;
}


signed int __fastcall LlamaSpit::getBrightness(LlamaSpit *this, float a2)
{
  return 1065353216;
}


__int64 __fastcall LlamaSpit::getSourceUniqueID(LlamaSpit *this, int a2)
{
  LlamaSpit *v2; // r4@1
  __int64 result; // r0@1

  v2 = this;
  result = SynchedEntityData::getInt64((SynchedEntityData *)(a2 + 176), 5);
  *(_QWORD *)v2 = result;
  return result;
}


signed int __fastcall LlamaSpit::getEntityTypeId(LlamaSpit *this)
{
  return 4194406;
}


int __fastcall LlamaSpit::LlamaSpit(int a1, int a2, int *a3)
{
  int v3; // r4@1

  v3 = a1;
  Entity::Entity(a1, a2, a3);
  *(_DWORD *)v3 = &off_26FE834;
  *(_DWORD *)(v3 + 3416) = 0;
  *(_DWORD *)(v3 + 3420) = 0;
  MovementInterpolator::MovementInterpolator(v3 + 3424);
  (*(void (__fastcall **)(int, signed int, signed int))(*(_DWORD *)v3 + 680))(v3, 1065353216, 1065353216);
  Entity::enableAutoSendPosRot((Entity *)v3, 1);
  *(_DWORD *)(v3 + 248) = 44;
  return v3;
}


signed int __fastcall LlamaSpit::getPickRadius(LlamaSpit *this)
{
  return 1065353216;
}
