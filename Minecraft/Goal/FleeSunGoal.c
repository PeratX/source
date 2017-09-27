

signed int __fastcall FleeSunGoal::canUse(FleeSunGoal *this)
{
  FleeSunGoal *v1; // r4@1
  BlockSource *v2; // r0@1
  int v3; // r0@1
  BlockSource *v4; // r5@3
  float v5; // r1@3
  int v6; // r0@3
  int v8; // r6@3
  int v13; // r0@3
  signed int v15; // r5@4
  int v17; // [sp+4h] [bp-24h]@5
  int v18; // [sp+8h] [bp-20h]@5
  int v19; // [sp+Ch] [bp-1Ch]@5

  v1 = this;
  v2 = (BlockSource *)j_Entity::getRegion(*((Entity **)this + 6));
  v3 = j_BlockSource::getDimension(v2);
  if ( (*(int (**)(void))(*(_DWORD *)v3 + 196))() == 1 )
  {
    if ( (*(int (**)(void))(**((_DWORD **)v1 + 6) + 320))() == 1 )
    {
      v4 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 6));
      v6 = j_mce::Math::floor(*(mce::Math **)(*((_DWORD *)v1 + 6) + 72), v5);
      _R1 = *((float *)v1 + 6);
      v8 = v6;
      __asm
      {
        VLDR            S0, [R1,#0x10C]
        VCVTR.S32.F32   S16, S0
      }
      v13 = j_mce::Math::floor(*(mce::Math **)(LODWORD(_R1) + 80), _R1);
      __asm { VMOV            R2, S16 }
      if ( j_BlockSource::canSeeSky(v4, v8, _R2, v13) == 1 )
        v15 = 0;
        if ( j_Mob::getNavigation(*((Mob **)v1 + 6)) )
        {
          v17 = 0;
          v18 = 0;
          v19 = 0;
          if ( j_FleeSunGoal::getHidePos(v1, (Vec3 *)&v17) == 1 )
          {
            v15 = 1;
            *((_DWORD *)v1 + 2) = v17;
            *((_DWORD *)v1 + 3) = v18;
            *((_DWORD *)v1 + 4) = v19;
          }
        }
      else
    }
    else
      v15 = 0;
  }
  else
    v15 = 0;
  return v15;
}


void __fastcall FleeSunGoal::~FleeSunGoal(FleeSunGoal *this)
{
  FleeSunGoal::~FleeSunGoal(this);
}


void __fastcall FleeSunGoal::~FleeSunGoal(FleeSunGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


signed int __fastcall FleeSunGoal::getHidePos(FleeSunGoal *this, Vec3 *a2)
{
  FleeSunGoal *v2; // r5@1
  Level *v3; // r0@1
  char *v4; // r0@1
  Random *v9; // r10@1
  int v10; // r6@1
  unsigned int v13; // kr00_4@2
  int v15; // r4@2
  unsigned int v18; // kr04_4@2
  int v20; // r7@2
  unsigned int v23; // kr08_4@2
  BlockSource *v25; // r0@2
  Vec3 *v28; // [sp+4h] [bp-5Ch]@1
  int v29; // [sp+4h] [bp-5Ch]@6
  char v30; // [sp+8h] [bp-58h]@6
  int v31; // [sp+Ch] [bp-54h]@6
  int v32; // [sp+10h] [bp-50h]@6
  int v33; // [sp+14h] [bp-4Ch]@2
  int v34; // [sp+18h] [bp-48h]@2
  int v35; // [sp+1Ch] [bp-44h]@2

  v2 = this;
  v28 = a2;
  v3 = (Level *)j_Entity::getLevel(*((Entity **)this + 6));
  v4 = j_Level::getRandom(v3);
  __asm
  {
    VMOV.F32        S16, #-10.0
    VMOV.F32        S18, #-3.0
  }
  v9 = (Random *)v4;
  v10 = 0;
  while ( 1 )
    _R0 = *((_DWORD *)v2 + 6);
    __asm { VLDR            S20, [R0,#0x50] }
    _R0 = j_Random::_genRandInt32(v9);
    v13 = _R0;
    __asm { VADD.F32        S0, S20, S16 }
    _R0 %= 0x14u;
    __asm
    {
      VMOV            S2, R0
      VCVT.F32.S32    S2, S2
      VADD.F32        S0, S0, S2
      VMOV            R0, S0
    }
    v15 = j_mce::Math::floor(_R0, COERCE_FLOAT(5 * (v13 / 0x14)));
    __asm { VLDR            S20, [R0,#0x10C] }
    v18 = _R0;
    __asm { VADD.F32        S0, S20, S18 }
    _R0 %= 6u;
    v20 = j_mce::Math::floor(_R0, COERCE_FLOAT(3 * (v18 / 6)));
    __asm { VLDR            S20, [R0,#0x48] }
    v23 = _R0;
    v33 = j_mce::Math::floor(_R0, COERCE_FLOAT(5 * (v23 / 0x14)));
    v34 = v20;
    v35 = v15;
    v25 = (BlockSource *)j_Entity::getRegion(*((Entity **)v2 + 6));
    if ( !j_BlockSource::canSeeSky(v25, (const BlockPos *)&v33) )
      _R0 = (*(int (**)(void))(**((_DWORD **)v2 + 6) + 1120))();
      __asm
      {
        VMOV            S0, R0
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        break;
    if ( ++v10 >= 10 )
      return 0;
  j_Vec3::Vec3((int)&v30, (int)&v33);
  *(_DWORD *)v28 = *(_DWORD *)&v30;
  *(_DWORD *)(v29 + 4) = v31;
  *(_DWORD *)(v29 + 8) = v32;
  return 1;
}


int __fastcall FleeSunGoal::start(FleeSunGoal *this)
{
  FleeSunGoal *v1; // r4@1
  int v2; // r0@1
  int v3; // r3@1
  int v4; // r12@1
  int (*v5)(void); // lr@1
  int v6; // r2@1
  int v8; // [sp+4h] [bp-14h]@1
  int v9; // [sp+8h] [bp-10h]@1
  int v10; // [sp+Ch] [bp-Ch]@1

  v1 = this;
  v2 = j_Mob::getNavigation(*((Mob **)this + 6));
  v3 = *((_DWORD *)v1 + 3);
  v4 = *((_DWORD *)v1 + 4);
  v5 = *(int (**)(void))(*(_DWORD *)v2 + 12);
  v8 = *((_DWORD *)v1 + 2);
  v9 = v3;
  v10 = v4;
  v6 = *((_DWORD *)v1 + 5);
  return v5();
}


int __fastcall FleeSunGoal::canContinueToUse(FleeSunGoal *this)
{
  int v1; // r0@1

  v1 = j_Mob::getNavigation(*((Mob **)this + 6));
  return (*(int (**)(void))(*(_DWORD *)v1 + 36))() ^ 1;
}


Goal *__fastcall FleeSunGoal::FleeSunGoal(Goal *a1, int a2, int a3)
{
  __int64 v3; // r5@1
  Goal *v4; // r4@1

  LODWORD(v3) = a3;
  HIDWORD(v3) = a2;
  v4 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v4 = &off_27255B4;
  *(_QWORD *)((char *)v4 + 20) = v3;
  j_Goal::setRequiredControlFlags(v4, 1);
  return v4;
}
