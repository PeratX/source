

signed int __fastcall DragonDeathGoal::canUse(DragonDeathGoal *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = j_Mob::getHealth(*((Mob **)this + 2));
  v2 = 0;
  if ( v1 > 0 )
    v2 = 1;
  return v2;
}


signed int __fastcall DragonDeathGoal::canContinueToUse(DragonDeathGoal *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = j_Mob::getHealth(*((Mob **)this + 2));
  v2 = 0;
  if ( v1 > 0 )
    v2 = 1;
  return v2;
}


_QWORD *__fastcall DragonDeathGoal::DragonDeathGoal(Goal *a1, int a2)
{
  int v2; // r4@1
  _QWORD *result; // r0@1

  v2 = a2;
  result = j_Goal::Goal(a1);
  *(_DWORD *)result = &off_27253E0;
  *((_DWORD *)result + 2) = v2;
  return result;
}


int __fastcall DragonDeathGoal::start(DragonDeathGoal *this)
{
  DragonDeathGoal *v1; // r4@1
  int result; // r0@1

  v1 = this;
  j_EnderDragon::setTargetPos(*((_DWORD *)this + 2), 0, 0, 0);
  j_Mob::setFlightSpeed(*((Mob **)v1 + 2), 3.0);
  result = j_EnderDragon::setTurnSpeed(*((EnderDragon **)v1 + 2), 0.7);
  *((_DWORD *)v1 + 3) = 0;
  return result;
}


int __fastcall DragonDeathGoal::stop(DragonDeathGoal *this)
{
  DragonDeathGoal *v1; // r4@1

  v1 = this;
  j_EnderDragon::setTargetPos(*((_DWORD *)this + 2), 0, 0, 0);
  return j_j_j__ZN3Mob14setFlightSpeedEf_0(*((Mob **)v1 + 2), 0.6);
}


char *__fastcall DragonDeathGoal::tick(DragonDeathGoal *this)
{
  DragonDeathGoal *v1; // r4@1
  Level *v9; // r0@2
  char *v10; // r0@2
  Level *v12; // r0@2
  char *v13; // r0@2
  Level *v15; // r0@2
  char *v16; // r0@2
  int v18; // r0@2
  signed int v20; // r1@3
  signed int v21; // r0@3
  BlockSource *v22; // r0@9
  unsigned int v24; // r1@13
  char *result; // r0@15
  int v26; // r0@16
  float v27; // [sp+Ch] [bp-6Ch]@9
  float v28; // [sp+10h] [bp-68h]@9
  int v29; // [sp+14h] [bp-64h]@9
  int v30; // [sp+18h] [bp-60h]@9
  int v31; // [sp+1Ch] [bp-5Ch]@9
  int v32; // [sp+20h] [bp-58h]@9
  float v33; // [sp+24h] [bp-54h]@3
  float v34; // [sp+28h] [bp-50h]@3
  int v35; // [sp+2Ch] [bp-4Ch]@8
  int v36; // [sp+30h] [bp-48h]@2
  int v37; // [sp+34h] [bp-44h]@2
  int v38; // [sp+38h] [bp-40h]@2
  float v39; // [sp+3Ch] [bp-3Ch]@2

  v1 = this;
  _R1 = 1717986919;
  _R0 = *((_DWORD *)this + 3) + 1;
  *((_DWORD *)v1 + 3) = _R0;
  __asm { SMMUL.W         R1, R0, R1 }
  if ( _R0 == 10 * (((signed int)_R1 >> 2) + (_R1 >> 31)) )
  {
    v9 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 2));
    v10 = j_Level::getRandom(v9);
    _R5 = j_Random::_genRandInt32((Random *)v10);
    v12 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 2));
    v13 = j_Level::getRandom(v12);
    _R0 = j_Random::_genRandInt32((Random *)v13);
    __asm
    {
      VMOV            S0, R0
      VCVT.F64.U32    D8, S0
      VMOV            S0, R5
      VCVT.F64.U32    D9, S0
    }
    v15 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 2));
    v16 = j_Level::getRandom(v15);
    __asm { VLDR            D10, =2.32830644e-10 }
    _R0 = j_Random::_genRandInt32((Random *)v16);
      VMUL.F64        D1, D8, D10
      VMUL.F64        D2, D9, D10
      VCVT.F64.U32    D0, S0
      VMOV.F32        S6, #-0.5
      VCVT.F32.F64    S2, D1
      VMUL.F64        D0, D0, D10
      VCVT.F32.F64    S4, D2
      VMOV.F32        S8, #4.0
      VADD.F32        S2, S2, S6
      VCVT.F32.F64    S0, D0
      VMOV.F32        S16, #8.0
      VADD.F32        S4, S4, S6
      VMOV.F32        S10, #2.0
      VMUL.F32        S2, S2, S8
      VADD.F32        S18, S0, S6
      VMUL.F32        S20, S4, S16
      VADD.F32        S22, S2, S10
    v18 = j_Entity::getLevel(*((Entity **)v1 + 2));
    __asm { VMUL.F32        S0, S18, S16 }
    _R1 = *((_DWORD *)v1 + 2);
      VLDR            S2, [R1,#0x48]
      VLDR            S4, [R1,#0x4C]
      VLDR            S6, [R1,#0x50]
      VADD.F32        S2, S2, S20
      VADD.F32        S4, S22, S4
      VADD.F32        S0, S6, S0
      VSTR            S2, [SP,#0x78+var_3C]
      VSTR            S4, [SP,#0x78+var_38]
      VSTR            S0, [SP,#0x78+var_34]
    v36 = 0;
    v37 = 0;
    v38 = 0;
    j_Level::addParticle(v18, 15, (int)&v39);
  }
  j_EnderDragon::getTargetPos((EnderDragon *)&v33, *((_DWORD *)v1 + 2));
  __asm { VLDR            S2, [SP,#0x78+var_50] }
  v20 = 0;
  __asm { VLDR            S0, [SP,#0x78+var_54] }
  v21 = 0;
  __asm
    VCMPE.F32       S2, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S0, #0.0
  if ( _ZF )
    v20 = 1;
  __asm { VMRS            APSR_nzcv, FPSCR }
    v21 = 1;
  if ( v21 & v20 && !(v35 & 0x7FFFFFFF) )
    v30 = EndPodiumFeature::END_PODIUM_LOCATION;
    v31 = unk_281D334;
    v32 = dword_281D338;
    v22 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 2));
    v31 = j_BlockSource::getAboveTopSolidBlock(v22, (const BlockPos *)&v30, 0, 0);
    j_Vec3::Vec3((int)&v27, (int)&v30);
    v33 = v27;
    v34 = v28;
    v35 = v29;
    j_EnderDragon::setTargetPos(*((_DWORD *)v1 + 2), SLODWORD(v27), SLODWORD(v28), v29);
    __asm { VLDR            S0, [SP,#0x78+var_54] }
  _R0 = *((_DWORD *)v1 + 2);
    VLDR            S8, [SP,#0x78+var_50]
    VLDR            S10, [SP,#0x78+var_4C]
    VLDR            S2, [R0,#0x48]
    VLDR            S4, [R0,#0x4C]
    VSUB.F32        S0, S2, S0
    VLDR            S6, [R0,#0x50]
    VSUB.F32        S2, S4, S8
    VSUB.F32        S4, S6, S10
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VLDR            S2, =100.0
    VADD.F32        S0, S0, S4
    VCMPE.F32       S0, S2
  if ( _NF ^ _VF )
    goto LABEL_19;
    VLDR            S2, =22500.0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) || (v24 = *(_WORD *)(_R0 + 218), (_BYTE)v24) || v24 >= 0x100 )
LABEL_19:
    j_Mob::serializationSetHealth((Mob *)_R0, 0);
    v26 = j_Entity::getLevel(*((Entity **)v1 + 2));
    result = (char *)j_Level::broadcastEntityEvent(v26, *((_DWORD *)v1 + 2), 37, 0);
  else
    result = j_Mob::serializationSetHealth((Mob *)_R0, 1);
  return result;
}


void __fastcall DragonDeathGoal::~DragonDeathGoal(DragonDeathGoal *this)
{
  DragonDeathGoal::~DragonDeathGoal(this);
}


void __fastcall DragonDeathGoal::~DragonDeathGoal(DragonDeathGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}
