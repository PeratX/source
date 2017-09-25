

void __fastcall DragonHoldingPatternGoal::tick(DragonHoldingPatternGoal *this)
{
  DragonHoldingPatternGoal *v1; // r4@1
  unsigned int v7; // r0@9
  float v8; // [sp+0h] [bp-20h]@6
  int v11; // [sp+Ch] [bp-14h]@1
  int v12; // [sp+10h] [bp-10h]@2
  int v13; // [sp+14h] [bp-Ch]@5

  v1 = this;
  j_EnderDragon::getTargetPos((EnderDragon *)&v11, *((_DWORD *)this + 4));
  _ZF = (v11 & 0x7FFFFFFF) == 0;
  if ( !(v11 & 0x7FFFFFFF) )
    _ZF = (v12 & 0x7FFFFFFF) == 0;
  if ( _ZF && !(v13 & 0x7FFFFFFF) )
    goto LABEL_14;
  j_EnderDragon::getTargetPos((EnderDragon *)&v8, *((_DWORD *)v1 + 4));
  _R0 = *((_DWORD *)v1 + 4);
  __asm
  {
    VLDR            S0, [SP,#0x20+var_20]
    VLDR            S2, [SP,#0x20+var_1C]
    VLDR            S6, [R0,#0x48]
    VLDR            S8, [R0,#0x4C]
    VSUB.F32        S0, S6, S0
    VLDR            S4, [SP,#0x20+var_18]
    VSUB.F32        S2, S8, S2
    VLDR            S10, [R0,#0x50]
    VSUB.F32        S4, S10, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VLDR            S2, =100.0
    VADD.F32        S0, S0, S4
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    VLDR            S2, =22500.0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) || (v7 = *(_WORD *)(_R0 + 218), (_BYTE)v7) || v7 >= 0x100 )
LABEL_14:
    j_DragonHoldingPatternGoal::findNewTarget(v1);
}


void __fastcall DragonHoldingPatternGoal::~DragonHoldingPatternGoal(DragonHoldingPatternGoal *this)
{
  DragonHoldingPatternGoal::~DragonHoldingPatternGoal(this);
}


Goal *__fastcall DragonHoldingPatternGoal::DragonHoldingPatternGoal(Goal *a1, int a2)
{
  int v2; // r5@1
  Goal *v3; // r4@1

  v2 = a2;
  v3 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v3 = &off_2725448;
  *((_DWORD *)v3 + 2) = 0;
  *((_BYTE *)v3 + 12) = 0;
  *((_DWORD *)v3 + 4) = v2;
  j_Goal::setRequiredControlFlags(v3, 1);
  return v3;
}


void __fastcall DragonHoldingPatternGoal::stop(DragonHoldingPatternGoal *this)
{
  DragonHoldingPatternGoal *v1; // r4@1
  Path *v2; // r0@1
  Path *v3; // r0@2

  v1 = this;
  j_EnderDragon::setTargetPos(*((_DWORD *)this + 4), 0, 0, 0);
  v2 = (Path *)*((_DWORD *)v1 + 2);
  *((_DWORD *)v1 + 2) = 0;
  if ( v2 )
  {
    v3 = j_Path::~Path(v2);
    j_j_j__ZdlPv_7((void *)v3);
  }
}


void __fastcall DragonHoldingPatternGoal::stop(DragonHoldingPatternGoal *this)
{
  DragonHoldingPatternGoal::stop(this);
}


int __fastcall DragonHoldingPatternGoal::~DragonHoldingPatternGoal(DragonHoldingPatternGoal *this)
{
  DragonHoldingPatternGoal *v1; // r4@1
  Path *v2; // r0@1
  Path *v3; // r0@2

  v1 = this;
  *(_DWORD *)this = &off_2725448;
  v2 = (Path *)*((_DWORD *)this + 2);
  if ( v2 )
  {
    v3 = j_Path::~Path(v2);
    j_operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 2) = 0;
  return j_j_j__ZN4GoalD2Ev_0(v1);
}


void __fastcall DragonHoldingPatternGoal::findNewTarget(DragonHoldingPatternGoal *this)
{
  DragonHoldingPatternGoal::findNewTarget(this);
}


int __fastcall DragonHoldingPatternGoal::start(DragonHoldingPatternGoal *this)
{
  DragonHoldingPatternGoal *v1; // r4@1
  Path *v2; // r0@1
  Path *v3; // r0@2

  v1 = this;
  j_EnderDragon::setTargetPos(*((_DWORD *)this + 4), 0, 0, 0);
  (*(void (**)(void))(**((_DWORD **)v1 + 4) + 340))();
  v2 = (Path *)*((_DWORD *)v1 + 2);
  *((_DWORD *)v1 + 2) = 0;
  if ( v2 )
  {
    v3 = j_Path::~Path(v2);
    j_operator delete((void *)v3);
  }
  return (*(int (**)(void))(**((_DWORD **)v1 + 4) + 352))();
}


void __fastcall DragonHoldingPatternGoal::findNewTarget(DragonHoldingPatternGoal *this)
{
  DragonHoldingPatternGoal *v1; // r4@1
  Path *v2; // r0@1
  int v3; // r9@3
  BlockSource *v4; // r0@3
  int v5; // r8@3
  float v6; // r7@3
  int v7; // r5@3
  EndDragonFight *v8; // r0@4
  Level *v9; // r0@5
  char *v10; // r0@5
  unsigned int v11; // r1@6
  int v12; // r6@6
  int v13; // r0@7
  Entity *v14; // r0@7
  Entity *v15; // r6@7
  int v21; // r5@10
  double v23; // r0@13
  unsigned int v24; // r0@13
  int v25; // r7@15
  int *v26; // r4@15
  int v27; // r7@16
  unsigned int *v28; // r2@18
  signed int v29; // r1@20
  void *v30; // r6@26
  int v31; // r1@26
  void *v32; // r0@26
  bool v33; // zf@28
  Level *v34; // r0@33
  char *v35; // r0@33
  unsigned int v36; // r1@36
  Level *v37; // r0@40
  char *v38; // r0@40
  Path *v39; // r0@44
  int v40; // r5@46
  Level *v41; // r0@46
  char *v42; // r0@46
  char v43; // r0@46
  int v44; // r1@46
  int v45; // r2@46
  signed int v46; // r3@46
  EndDragonFight *v48; // r0@51
  int v51; // r3@52
  Node *v52; // r3@52
  Path *v53; // r1@54
  Path *v54; // r0@54
  Path *v55; // r0@55
  Path *v56; // r0@56
  Path *v57; // r0@57
  Path *v58; // r0@59
  int v59; // r0@61
  int v60; // r5@61
  int v61; // r6@61
  Level *v62; // r0@62
  char *v63; // r0@62
  Path *v66; // [sp+8h] [bp-80h]@54
  int v67; // [sp+Ch] [bp-7Ch]@7
  float v68; // [sp+10h] [bp-78h]@7
  int v69; // [sp+14h] [bp-74h]@7
  void *ptr; // [sp+18h] [bp-70h]@13
  unsigned int v71; // [sp+1Ch] [bp-6Ch]@13
  int v72; // [sp+20h] [bp-68h]@13
  int v73; // [sp+24h] [bp-64h]@13
  signed int v74; // [sp+28h] [bp-60h]@13
  int v75; // [sp+2Ch] [bp-5Ch]@13
  int v76; // [sp+30h] [bp-58h]@13
  int v77; // [sp+38h] [bp-50h]@3
  float v78; // [sp+3Ch] [bp-4Ch]@3
  int v79; // [sp+40h] [bp-48h]@3

  v1 = this;
  v2 = (Path *)*((_DWORD *)this + 2);
  if ( v2 )
  {
    if ( j_Path::isDone(v2) != 1 )
      goto LABEL_44;
    v3 = EndPodiumFeature::END_PODIUM_LOCATION;
    v4 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 4));
    v5 = 0;
    v6 = COERCE_FLOAT(j_BlockSource::getAboveTopSolidBlock(v4, (const BlockPos *)&EndPodiumFeature::END_PODIUM_LOCATION, 0, 0));
    v7 = dword_281D338;
    v77 = v3;
    v78 = v6;
    v79 = dword_281D338;
    if ( j_EnderDragon::getDragonFight(*((EnderDragon **)v1 + 4)) )
    {
      v8 = (EndDragonFight *)j_EnderDragon::getDragonFight(*((EnderDragon **)v1 + 4));
      v5 = j_EndDragonFight::getCrystalsAlive(v8);
    }
    v9 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 4));
    v10 = j_Level::getRandom(v9);
    if ( v5 == -3 )
      v12 = *((_DWORD *)v1 + 4);
    else
      v11 = j_Random::_genRandInt32((Random *)v10) % (v5 + 3);
      if ( v11 )
      {
        v13 = j_Entity::getDimension(*((Entity **)v1 + 4));
        v67 = v3;
        v68 = v6;
        v69 = v7;
        v14 = (Entity *)j_Dimension::fetchNearestAttackablePlayer(v13, (int)&v67, 1115684864, 0);
        v15 = v14;
        if ( v14 )
        {
          _R0 = j_Entity::distanceSqrToBlockPosCenter(v14, (const BlockPos *)&v77);
          __asm
          {
            VLDR            S0, =0.0019531
            VMOV            S2, R0
            VMUL.F32        S0, S2, S0
            VCVTR.S32.F32   S0, S0
            VMOV            R5, S0
          }
        }
        else
          _R5 = 64;
        v34 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 4));
        v35 = j_Level::getRandom(v34);
        if ( _R5 < 0 )
          _R5 = -_R5;
        if ( _R5 == -2 )
          v36 = 0;
          v36 = j_Random::_genRandInt32((Random *)v35) % (_R5 + 2);
        if ( v15 )
          if ( !v36
            || (v37 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 4)), v38 = j_Level::getRandom(v37), v5 == -2)
            || !(j_Random::_genRandInt32((Random *)v38) % (v5 + 2)) )
            if ( (*(int (**)(void))(**((_DWORD **)v1 + 4) + 252))() )
            {
              (*(void (**)(void))(**((_DWORD **)v1 + 4) + 340))();
              return;
            }
LABEL_44:
        v39 = (Path *)*((_DWORD *)v1 + 2);
        if ( v39 && j_Path::isDone(v39) != 1 )
LABEL_59:
          v58 = (Path *)*((_DWORD *)v1 + 2);
          if ( v58 && !j_Path::isDone(v58) )
            v59 = j_Path::currentPos(*((Path **)v1 + 2));
            j_Vec3::Vec3((int)&v77, v59);
            j_Path::next(*((Path **)v1 + 2));
            __asm { VMOV.F32        S20, #20.0 }
            v60 = v79;
            v61 = v77;
            __asm
              VLDR            S16, [SP,#0x88+var_4C]
              VLDR            D9, =2.32830644e-10
            do
              v62 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 4));
              v63 = j_Level::getRandom(v62);
              _R0 = j_Random::_genRandInt32((Random *)v63);
              __asm
              {
                VMOV            S0, R0
                VCVT.F64.U32    D0, S0
                VMUL.F64        D0, D0, D9
                VCVT.F32.F64    S0, D0
                VMUL.F32        S0, S0, S20
                VADD.F32        S0, S0, S16
                VLDR            S16, [SP,#0x88+var_4C]
                VCMPE.F32       S0, S16
                VMRS            APSR_nzcv, FPSCR
              }
            while ( _NF ^ _VF );
            __asm { VMOV            R2, S0 }
            j_EnderDragon::setTargetPos(*((_DWORD *)v1 + 4), v61, _R2, v60);
          return;
        goto LABEL_46;
      }
    v21 = *(_DWORD *)(v12 + 48);
    _ZF = v21 == 0;
    if ( v21 )
      v5 = *(_DWORD *)(v21 + 256);
      _ZF = v5 == 0;
    if ( !_ZF )
      v76 = 0;
      HIDWORD(v23) = 10;
      v72 = 0;
      v73 = 0;
      ptr = 0;
      v74 = 1065353216;
      v75 = 0;
      LODWORD(v23) = &v74;
      v24 = sub_21E6254(v23);
      v71 = v24;
      if ( v24 == 1 )
        v76 = 0;
        v26 = &v76;
      else
        if ( v24 >= 0x40000000 )
          sub_21E57F4();
        v25 = 4 * v24;
        v26 = (int *)j_operator new(4 * v24);
        j___aeabi_memclr4_0((int)v26, v25);
      ptr = v26;
      j_EntityDefinitionDescriptor::executeTrigger(
        (EntityDefinitionDescriptor *)v21,
        (Entity *)v12,
        (const DefinitionTrigger *)(v5 + 4),
        (const VariantParameterList *)&ptr);
      v27 = v72;
      while ( v27 )
        v30 = (void *)v27;
        v31 = *(_DWORD *)(v27 + 8);
        v27 = *(_DWORD *)v27;
        v32 = (void *)(v31 - 12);
        if ( (int *)(v31 - 12) != &dword_28898C0 )
          v28 = (unsigned int *)(v31 - 4);
          if ( &pthread_create )
            __dmb();
              v29 = __ldrex(v28);
            while ( __strex(v29 - 1, v28) );
          else
            v29 = (*v28)--;
          if ( v29 <= 0 )
            j_j_j_j__ZdlPv_9(v32);
        j_operator delete(v30);
      j___aeabi_memclr4_0((int)ptr, 4 * v71);
      v33 = ptr == 0;
      if ( ptr )
        v33 = &v76 == ptr;
      if ( !v33 )
        j_operator delete(ptr);
    return;
  }
LABEL_46:
  v40 = j_EnderDragon::findClosestNode(*((EnderDragon **)v1 + 4));
  v41 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 4));
  v42 = j_Level::getRandom(v41);
  v43 = j_Random::_genRandInt32((Random *)v42);
  v44 = *((_BYTE *)v1 + 12);
  v45 = v40;
  v46 = 1;
  if ( !(v43 & 7) )
    v44 ^= 1u;
    *((_BYTE *)v1 + 12) = v44;
    v45 = v40 + 6;
  if ( !v44 )
    v46 = -1;
  _R6 = v46 + v45;
  if ( j_EnderDragon::getDragonFight(*((EnderDragon **)v1 + 4))
    && (v48 = (EndDragonFight *)j_EnderDragon::getDragonFight(*((EnderDragon **)v1 + 4)),
        j_EndDragonFight::getCrystalsAlive(v48) > 0) )
    _R0 = 715827883;
    __asm { SMMUL.W         R0, R6, R0 }
    v51 = _R6 - 12 * (((signed int)_R0 >> 1) + (_R0 >> 31));
    v52 = (Node *)(v51 + (v51 < 0 ? 0xC : 0));
  else
    v52 = (Node *)(((_R6 + 4) & 7) + 12);
  j_EnderDragon::findPath((EnderDragon *)&v66, *((_DWORD *)v1 + 4), v40, v52, 0);
  v53 = v66;
  v66 = 0;
  v54 = (Path *)*((_DWORD *)v1 + 2);
  *((_DWORD *)v1 + 2) = v53;
  if ( v54 )
    v55 = j_Path::~Path(v54);
    j_operator delete((void *)v55);
    if ( v66 )
      v56 = j_Path::~Path(v66);
      j_operator delete((void *)v56);
  v57 = (Path *)*((_DWORD *)v1 + 2);
  if ( v57 )
    j_Path::next(v57);
    goto LABEL_59;
}


signed int __fastcall DragonHoldingPatternGoal::canContinueToUse(DragonHoldingPatternGoal *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = j_Entity::getTarget(*((Entity **)this + 4));
  v2 = 0;
  if ( !v1 )
    v2 = 1;
  return v2;
}


signed int __fastcall DragonHoldingPatternGoal::canUse(DragonHoldingPatternGoal *this)
{
  DragonHoldingPatternGoal *v1; // r5@1
  signed int v2; // r4@1

  v1 = this;
  v2 = 0;
  if ( !j_Entity::isSitting(*((Entity **)this + 4)) && !j_Entity::getTarget(*((Entity **)v1 + 4)) )
    v2 = 1;
  return v2;
}


void __fastcall DragonHoldingPatternGoal::~DragonHoldingPatternGoal(DragonHoldingPatternGoal *this)
{
  DragonHoldingPatternGoal *v1; // r4@1
  Path *v2; // r0@1
  Path *v3; // r0@2

  v1 = this;
  *(_DWORD *)this = &off_2725448;
  v2 = (Path *)*((_DWORD *)this + 2);
  if ( v2 )
  {
    v3 = j_Path::~Path(v2);
    j_operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 2) = 0;
  j_Goal::~Goal(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall DragonHoldingPatternGoal::tick(DragonHoldingPatternGoal *this)
{
  DragonHoldingPatternGoal::tick(this);
}
