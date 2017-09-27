

const Entity *__fastcall AvoidMobGoal::findNearestEntityToAvoid(AvoidMobGoal *this)
{
  AvoidMobGoal *v1; // r4@1
  int v2; // r0@1
  int v3; // r6@1
  int v4; // r8@1
  int v5; // r7@1
  int v6; // r5@1
  int v7; // r0@1
  Entity *v8; // r5@1
  BlockSource *v9; // r0@1
  Dimension *v10; // r0@1
  const Entity *v11; // r6@1

  v1 = this;
  v2 = j_Entity::getRegion(*((Entity **)this + 2));
  v3 = *((_DWORD *)v1 + 2);
  v4 = v2;
  v5 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 52))(*((_DWORD *)v1 + 2));
  v6 = *((_QWORD *)v1 + 1) >> 32;
  v7 = (*(int (**)(void))(*(_DWORD *)*((_QWORD *)v1 + 1) + 488))();
  v8 = j_BlockSource::fetchNearestEntityNotOfType(v4, v3, v5, v6, v7);
  v9 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 2));
  v10 = (Dimension *)j_BlockSource::getDimension(v9);
  v11 = (const Entity *)j_Dimension::fetchNearestPlayer(
                          v10,
                          (Entity *)*((_QWORD *)v1 + 1),
                          COERCE_FLOAT(*((_QWORD *)v1 + 1) >> 32));
  if ( v11 )
  {
    if ( v8 )
    {
      _R0 = j_Entity::distanceToSqr(*((Entity **)v1 + 2), v8);
      __asm { VMOV            S16, R0 }
      _R0 = j_Entity::distanceToSqr(*((Entity **)v1 + 2), v11);
      __asm
      {
        VMOV            S0, R0
        VCMPE.F32       S0, S16
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !(_NF ^ _VF) )
        v11 = v8;
    }
  }
  else
    v11 = v8;
  return v11;
}


void __fastcall AvoidMobGoal::~AvoidMobGoal(AvoidMobGoal *this)
{
  AvoidMobGoal::~AvoidMobGoal(this);
}


int __fastcall AvoidMobGoal::~AvoidMobGoal(AvoidMobGoal *this)
{
  AvoidMobGoal *v1; // r4@1
  Path *v2; // r0@1
  Path *v3; // r0@2
  unsigned int v4; // r1@3
  int v5; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_27251CC;
  v2 = (Path *)*((_DWORD *)this + 14);
  if ( v2 )
  {
    v3 = j_Path::~Path(v2);
    j_operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 14) = 0;
  *((_DWORD *)v1 + 8) = &off_271A67C;
  v4 = (unsigned int)v1 + 32;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = -1;
  *(_DWORD *)(v4 + 12) = -1;
  *(_BYTE *)(v4 + 20) = 0;
  v5 = *((_DWORD *)v1 + 12);
  if ( v5 )
    j_Level::unregisterTemporaryPointer(v5, v4);
  *((_DWORD *)v1 + 12) = 0;
  return j_j_j__ZN4GoalD2Ev_0(v1);
}


void __fastcall AvoidMobGoal::~AvoidMobGoal(AvoidMobGoal *this)
{
  AvoidMobGoal *v1; // r4@1
  Path *v2; // r0@1
  Path *v3; // r0@2
  unsigned int v4; // r1@3
  int v5; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_27251CC;
  v2 = (Path *)*((_DWORD *)this + 14);
  if ( v2 )
  {
    v3 = j_Path::~Path(v2);
    j_operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 14) = 0;
  *((_DWORD *)v1 + 8) = &off_271A67C;
  v4 = (unsigned int)v1 + 32;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = -1;
  *(_DWORD *)(v4 + 12) = -1;
  *(_BYTE *)(v4 + 20) = 0;
  v5 = *((_DWORD *)v1 + 12);
  if ( v5 )
    j_Level::unregisterTemporaryPointer(v5, v4);
  *((_DWORD *)v1 + 12) = 0;
  j_Goal::~Goal(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall AvoidMobGoal::canContinueToUse(AvoidMobGoal *this)
{
  AvoidMobGoal *v1; // r4@1
  int result; // r0@2
  int v3; // r0@3

  v1 = this;
  if ( j_Mob::getNavigation(*((Mob **)this + 2)) )
  {
    v3 = j_Mob::getNavigation(*((Mob **)v1 + 2));
    result = (*(int (**)(void))(*(_DWORD *)v3 + 36))() ^ 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall AvoidMobGoal::tick(AvoidMobGoal *this)
{
  AvoidMobGoal *v1; // r4@1
  int result; // r0@1
  int v3; // r0@2
  unsigned int v4; // r2@3
  unsigned int v5; // r3@3
  int v6; // r0@4
  int v7; // r1@4
  const Entity *v8; // r1@7
  PathNavigation *v14; // r0@8
  float v15; // r1@9

  v1 = this;
  result = *((_BYTE *)this + 52);
  if ( !result )
  {
    v3 = *((_DWORD *)v1 + 12);
    if ( v3 )
    {
      v4 = *((_DWORD *)v1 + 10);
      v5 = *((_DWORD *)v1 + 11);
      if ( (v4 & v5) != -1 )
      {
        v6 = j_Level::fetchEntity(v3, v4 & v5, v4, v5, 0);
        *((_DWORD *)v1 + 9) = v6;
        if ( !v6 )
          *((_DWORD *)v1 + 9) = j_Level::fetchEntity(
                                  *((_DWORD *)v1 + 12),
                                  v7,
                                  *((_QWORD *)v1 + 5),
                                  *((_QWORD *)v1 + 5) >> 32,
                                  0);
      }
    }
    result = 1;
    *((_BYTE *)v1 + 52) = 1;
  }
  v8 = (const Entity *)*((_DWORD *)v1 + 9);
  if ( v8 )
    _R0 = j_Entity::distanceToSqr(*((Entity **)v1 + 2), v8);
    __asm
      VMOV            S18, R0
      VLDR            S16, =49.0
    v14 = (PathNavigation *)j_Mob::getNavigation(*((Mob **)v1 + 2));
      VCMPE.F32       S18, S16
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      v15 = *((float *)v1 + 5);
    else
      v15 = *((float *)v1 + 4);
    result = j_j_j__ZN14PathNavigation8setSpeedEf(v14, v15);
  return result;
}


int __fastcall AvoidMobGoal::AvoidMobGoal(AvoidMobGoal *this, Mob *a2, float a3, float a4, float a5, float a6)
{
  return AvoidMobGoal::AvoidMobGoal(
           *(float *)&this,
           *(float *)&a2,
           SLODWORD(a3),
           SLODWORD(a4),
           SLODWORD(a5),
           SLODWORD(a6));
}


int __fastcall AvoidMobGoal::AvoidMobGoal(float a1, float a2, int a3, int a4, int a5, int a6)
{
  int v6; // r5@1
  int v7; // r6@1
  float v8; // r7@1
  float v9; // r4@1

  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = a1;
  j_Goal::Goal((Goal *)LODWORD(a1));
  __asm
  {
    VLDR            S0, [SP,#0x18+arg_0]
    VLDR            S2, [SP,#0x18+arg_4]
  }
  *(_DWORD *)LODWORD(v9) = &off_27251CC;
  *(float *)(LODWORD(v9) + 8) = v8;
  *(_DWORD *)(LODWORD(v9) + 12) = v7;
  *(_DWORD *)(LODWORD(v9) + 16) = v6;
    VSTR            S0, [R4,#0x14]
    VSTR            S2, [R4,#0x18]
  *(_DWORD *)(LODWORD(v9) + 32) = &off_271A67C;
  *(_DWORD *)(LODWORD(v9) + 36) = 0;
  *(_DWORD *)(LODWORD(v9) + 44) = -1;
  *(_DWORD *)(LODWORD(v9) + 40) = -1;
  *(_DWORD *)(LODWORD(v9) + 48) = 0;
  *(_BYTE *)(LODWORD(v9) + 52) = 0;
  *(_DWORD *)(LODWORD(v9) + 56) = 0;
  j_Goal::setRequiredControlFlags((Goal *)LODWORD(v9), 1);
  return LODWORD(v9);
}


void __fastcall AvoidMobGoal::start(AvoidMobGoal *this)
{
  AvoidMobGoal::start(this);
}


int __fastcall AvoidMobGoal::stop(AvoidMobGoal *this)
{
  AvoidMobGoal *v1; // r4@1
  int result; // r0@1

  v1 = this;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = -1;
  *((_DWORD *)this + 11) = -1;
  *((_BYTE *)this + 52) = 0;
  result = *((_DWORD *)this + 12);
  if ( result )
    result = j_Level::unregisterTemporaryPointer(result, (unsigned int)v1 + 32);
  *((_DWORD *)v1 + 12) = 0;
  return result;
}


int __fastcall AvoidMobGoal::canUse(AvoidMobGoal *this)
{
  int v2; // r6@2
  int v4; // r0@6
  _BYTE *v5; // r6@6
  int v6; // r6@7
  int v7; // r0@9
  int v8; // r0@13
  unsigned int v9; // r2@14
  unsigned int v10; // r3@14
  int v11; // r0@15
  int v12; // r1@15
  Entity *v13; // r5@18
  int v14; // r0@19
  __int64 v15; // r1@19
  int v21; // r6@26
  Level *v22; // r0@26
  char *v23; // r0@26
  signed int v25; // r1@27
  int v26; // r0@31
  Path *v27; // r1@31
  Path *v28; // r0@31
  Path *v29; // r0@32
  Path *v30; // r0@33
  Path *v32; // [sp+4h] [bp-3Ch]@19
  __int64 v33; // [sp+8h] [bp-38h]@19
  int v34; // [sp+10h] [bp-30h]@19
  int v35; // [sp+14h] [bp-2Ch]@19
  int v36; // [sp+18h] [bp-28h]@19
  int v37; // [sp+1Ch] [bp-24h]@19

  _R4 = this;
  if ( j_Mob::getNavigation(*((Mob **)this + 2)) )
  {
    v2 = (*(int (__fastcall **)(AvoidMobGoal *))(*(_DWORD *)_R4 + 44))(_R4);
    if ( *((_DWORD *)_R4 + 9) == v2 )
    {
      v5 = (char *)_R4 + 52;
    }
    else
      _ZF = v2 == 0;
      if ( v2 )
        _ZF = *(_DWORD *)(v2 + 3092) == 0;
      if ( _ZF )
      {
        *((_DWORD *)_R4 + 9) = 0;
        *((_DWORD *)_R4 + 10) = -1;
        *((_DWORD *)_R4 + 11) = -1;
        *((_BYTE *)_R4 + 52) = 0;
        v5 = (char *)_R4 + 52;
        v7 = *((_DWORD *)_R4 + 12);
        if ( v7 )
          j_Level::unregisterTemporaryPointer(v7, (unsigned int)_R4 + 32);
        *((_DWORD *)_R4 + 12) = 0;
      }
      else
        *((_QWORD *)_R4 + 5) = *(_QWORD *)j_Entity::getUniqueID((Entity *)v2);
        v4 = *(_DWORD *)(v2 + 3092);
        *((_DWORD *)_R4 + 12) = v4;
        j_Level::registerTemporaryPointer(v4, (unsigned int)_R4 + 32);
    if ( !*v5 )
      v8 = *((_DWORD *)_R4 + 12);
      if ( v8 )
        v9 = *((_DWORD *)_R4 + 10);
        v10 = *((_DWORD *)_R4 + 11);
        if ( (v9 & v10) != -1 )
        {
          v11 = j_Level::fetchEntity(v8, v9 & v10, v9, v10, 0);
          *((_DWORD *)_R4 + 9) = v11;
          if ( !v11 )
            *((_DWORD *)_R4 + 9) = j_Level::fetchEntity(
                                     *((_DWORD *)_R4 + 12),
                                     v12,
                                     *((_QWORD *)_R4 + 5),
                                     *((_QWORD *)_R4 + 5) >> 32,
                                     0);
        }
      *v5 = 1;
    v13 = (Entity *)*((_DWORD *)_R4 + 9);
    v6 = 0;
    if ( v13 )
      v35 = 0;
      v36 = 0;
      v37 = 0;
      v14 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v13 + 52))(v13);
      v15 = *(_QWORD *)v14;
      v34 = *(_DWORD *)(v14 + 8);
      v33 = v15;
      if ( j_RandomPos::getPosAvoid((RandomPos *)&v35, *((Vec3 **)_R4 + 2), (Mob *)0x10, 7, (int)&v33, v32) == 1 )
        _R0 = j_Entity::distanceToSqr(v13, (const Vec3 *)&v35);
        __asm { VMOV            S16, R0 }
        _R0 = j_Entity::distanceToSqr(v13, *((const Entity **)_R4 + 2));
        __asm
          VMOV            S0, R0
          VCMPE.F32       S16, S0
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          v6 = 0;
        else
          if ( j_Entity::getStrength(v13) < 1 )
            goto LABEL_38;
          __asm
          {
            VMOV.F32        S16, #1.0
            VLDR            S0, [R4,#0x18]
            VCMPE.F32       S0, S16
            VMRS            APSR_nzcv, FPSCR
          }
          if ( !(_NF ^ _VF) )
          v21 = j_Entity::getStrength(v13);
          v22 = (Level *)j_Entity::getLevel(v13);
          v23 = j_Level::getRandom(v22);
            VDIV.F32        S0, S16, S0
            VCVTR.S32.F32   S0, S0
            VMOV            R5, S0
          v25 = _R5 ? j_Random::_genRandInt32((Random *)v23) % _R5 : 0;
          if ( v21 < v25 )
            v6 = 0;
          else
LABEL_38:
            v26 = j_Mob::getNavigation(*((Mob **)_R4 + 2));
            (*(void (__fastcall **)(Path **))(*(_DWORD *)v26 + 8))(&v32);
            v27 = v32;
            v32 = 0;
            v28 = (Path *)*((_DWORD *)_R4 + 14);
            *((_DWORD *)_R4 + 14) = v27;
            if ( v28 )
            {
              v29 = j_Path::~Path(v28);
              j_operator delete((void *)v29);
              if ( v32 )
              {
                v30 = j_Path::~Path(v32);
                j_operator delete((void *)v30);
              }
            }
            v6 = *((_DWORD *)_R4 + 14) != 0;
  }
  else
  return v6;
}


void __fastcall AvoidMobGoal::start(AvoidMobGoal *this)
{
  AvoidMobGoal *v1; // r4@1
  int v2; // r0@1
  Path *v3; // r2@1
  void (*v4)(void); // r3@1
  int v5; // r2@1
  Path *v6; // r0@2
  Path *v7; // [sp+4h] [bp-Ch]@1

  v1 = this;
  v2 = j_Mob::getNavigation(*((Mob **)this + 2));
  v3 = (Path *)*((_DWORD *)v1 + 14);
  v4 = *(void (**)(void))(*(_DWORD *)v2 + 24);
  *((_DWORD *)v1 + 14) = 0;
  v7 = v3;
  v5 = *((_DWORD *)v1 + 4);
  v4();
  if ( v7 )
  {
    v6 = j_Path::~Path(v7);
    j_operator delete((void *)v6);
  }
}
