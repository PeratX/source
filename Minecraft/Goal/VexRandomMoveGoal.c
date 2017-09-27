

void __fastcall VexRandomMoveGoal::~VexRandomMoveGoal(VexRandomMoveGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


void __fastcall VexRandomMoveGoal::~VexRandomMoveGoal(VexRandomMoveGoal *this)
{
  VexRandomMoveGoal::~VexRandomMoveGoal(this);
}


int __fastcall VexRandomMoveGoal::canContinueToUse(VexRandomMoveGoal *this)
{
  return 0;
}


Goal *__fastcall VexRandomMoveGoal::VexRandomMoveGoal(Goal *a1, int a2)
{
  int v2; // r5@1
  Goal *v3; // r4@1

  v2 = a2;
  v3 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v3 = &off_271B124;
  *((_DWORD *)v3 + 2) = v2;
  j_Goal::setRequiredControlFlags(v3, 3);
  return v3;
}


signed int __fastcall VexRandomMoveGoal::tick(VexRandomMoveGoal *this)
{
  VexRandomMoveGoal *v1; // r10@1
  int v2; // r0@2
  unsigned int v3; // r5@3
  unsigned int v4; // r6@3
  unsigned int v5; // r0@3
  BlockSource *v16; // r0@3
  unsigned int v17; // r5@4
  unsigned int v18; // r6@4
  unsigned int v19; // r0@4
  BlockSource *v26; // r0@4
  unsigned int v27; // r5@5
  unsigned int v28; // r6@5
  unsigned int v29; // r0@5
  BlockSource *v36; // r0@5
  signed int result; // r0@5
  int v38; // r0@6
  int v39; // r5@6
  void (__fastcall *v40)(int, char *, signed int); // r7@6
  LookControl *v41; // r0@7
  float v42; // [sp+4h] [bp-84h]@7
  int v43; // [sp+10h] [bp-78h]@6
  signed int v44; // [sp+14h] [bp-74h]@6
  int v45; // [sp+18h] [bp-70h]@6
  int v46; // [sp+1Ch] [bp-6Ch]@6
  int v47; // [sp+20h] [bp-68h]@6
  int v48; // [sp+24h] [bp-64h]@6
  int v49; // [sp+28h] [bp-60h]@6
  int v50; // [sp+2Ch] [bp-5Ch]@6
  int v51; // [sp+30h] [bp-58h]@6
  char v52; // [sp+34h] [bp-54h]@6
  int v53; // [sp+40h] [bp-48h]@3
  int v54; // [sp+44h] [bp-44h]@3
  int v55; // [sp+48h] [bp-40h]@3
  int v56; // [sp+4Ch] [bp-3Ch]@2
  int v57; // [sp+50h] [bp-38h]@2
  int v58; // [sp+54h] [bp-34h]@2
  int v59; // [sp+58h] [bp-30h]@1
  int v60; // [sp+5Ch] [bp-2Ch]@2
  int v61; // [sp+60h] [bp-28h]@2

  v1 = this;
  j_Mob::getBoundOrigin((Mob *)&v59, *((_DWORD *)this + 2));
  if ( j_Mob::hasBoundOrigin(*((Mob **)v1 + 2)) != 1 )
  {
    v2 = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 52))();
    j_BlockPos::BlockPos((int)&v56, v2);
    v59 = v56;
    v60 = v57;
    v61 = v58;
  }
  v3 = j_Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 2) + 552));
  v4 = j_Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 2) + 552));
  v5 = j_Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 2) + 552));
  _R1 = v3 % 0xF - 7;
  __asm
    VMOV            S0, R1
    VCVT.F32.S32    S0, S0
  _R1 = v4 % 0xB - 5;
  _R0 = v5 % 0xF - 7;
    VMOV            S2, R1
    VMOV            S4, R0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VCVTR.S32.F32   S0, S0
    VMOV            R3, S0
    VCVTR.S32.F32   S0, S2
  v53 = v59 + _R3;
    VMOV            R0, S0
    VCVTR.S32.F32   S2, S4
  v54 = _R0 + v60;
  __asm { VMOV            R0, S2 }
  v55 = _R0 + v61;
  v16 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 2));
  if ( j_BlockSource::isEmptyBlock(v16, (const BlockPos *)&v53) == 1 )
    goto LABEL_10;
  v17 = j_Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 2) + 552));
  v18 = j_Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 2) + 552));
  v19 = j_Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 2) + 552));
  _R1 = v17 % 0xF - 7;
  _R1 = v18 % 0xB - 5;
  _R0 = v19 % 0xF - 7;
  v26 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 2));
  if ( j_BlockSource::isEmptyBlock(v26, (const BlockPos *)&v53) )
  v27 = j_Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 2) + 552));
  v28 = j_Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 2) + 552));
  v29 = j_Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 2) + 552));
  _R1 = v27 % 0xF - 7;
  _R1 = v28 % 0xB - 5;
  _R0 = v29 % 0xF - 7;
  v36 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 2));
  result = j_BlockSource::isEmptyBlock(v36, (const BlockPos *)&v53);
  if ( result )
LABEL_10:
    v38 = j_Mob::getMoveControl(*((Mob **)v1 + 2));
    v39 = v38;
    v40 = *(void (__fastcall **)(int, char *, signed int))(*(_DWORD *)v38 + 8);
    v43 = 1056964608;
    v44 = 1056964608;
    v45 = 1056964608;
    j_BlockPos::BlockPos((int)&v46, (int)&v43);
    v49 = v53 + v46;
    v50 = v47 + v54;
    v51 = v48 + v55;
    j_Vec3::Vec3((int)&v52, (int)&v49);
    v40(v39, &v52, 1048576000);
    result = j_Entity::getTarget(*((Entity **)v1 + 2));
    if ( !result )
    {
      v41 = (LookControl *)j_Mob::getLookControl(*((Mob **)v1 + 2));
      __asm
      {
        VLDR            S0, [SP,#0x88+var_48]
        VMOV.F32        S6, #0.5
        VLDR            S2, [SP,#0x88+var_44]
        VLDR            S4, [SP,#0x88+var_40]
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
        VCVT.F32.S32    S4, S4
        VADD.F32        S0, S0, S6
        VADD.F32        S2, S2, S6
        VADD.F32        S4, S4, S6
        VSTR            S0, [SP,#0x88+var_84]
        VSTR            S2, [SP,#0x88+var_80]
        VSTR            S4, [SP,#0x88+var_7C]
      }
      result = j_LookControl::setLookAt(v41, (const Vec3 *)&v42, 4728779609866502144LL);
    }
  return result;
}


signed int __fastcall VexRandomMoveGoal::canUse(VexRandomMoveGoal *this)
{
  VexRandomMoveGoal *v1; // r5@1
  MoveControl *v2; // r0@1
  signed int v3; // r4@1

  v1 = this;
  v2 = (MoveControl *)j_Mob::getMoveControl(*((Mob **)this + 2));
  v3 = 0;
  if ( !j_MoveControl::hasWanted(v2) && !(j_Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 2) + 552)) % 7) )
    v3 = 1;
  return v3;
}
