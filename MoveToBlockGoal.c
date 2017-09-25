

int __fastcall MoveToBlockGoal::canUse(MoveToBlockGoal *this)
{
  MoveToBlockGoal *v1; // r4@1
  int result; // r0@2
  signed int v3; // r0@3

  v1 = this;
  if ( j_Mob::getNavigation(*((Mob **)this + 12)) )
  {
    v3 = *((_DWORD *)v1 + 3);
    if ( v3 < 1 )
    {
      *((_DWORD *)v1 + 3) = j_Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 12) + 552)) % 0xC8 + 200;
      result = (*(int (__fastcall **)(MoveToBlockGoal *))(*(_DWORD *)v1 + 48))(v1);
    }
    else
      *((_DWORD *)v1 + 3) = v3 - 1;
      result = 0;
  }
  else
    result = 0;
  return result;
}


int __fastcall MoveToBlockGoal::tick(MoveToBlockGoal *this)
{
  int v2; // r1@1
  int v3; // r2@1
  int v4; // r3@1
  Entity *v5; // r0@1
  int result; // r0@2
  int v15; // r0@3
  int v17; // r2@3
  int v18; // [sp+Ch] [bp-14h]@1
  int v19; // [sp+10h] [bp-10h]@1
  int v20; // [sp+14h] [bp-Ch]@1

  _R4 = this;
  v2 = *((_DWORD *)this + 9);
  v3 = *((_DWORD *)this + 10);
  v4 = *((_DWORD *)this + 11);
  v5 = (Entity *)*((_DWORD *)this + 12);
  v18 = v2;
  v19 = v3 + 1;
  v20 = v4;
  _R0 = j_Entity::distanceSqrToBlockPosCenter(v5, (const BlockPos *)&v18);
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, [R4,#0x18]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    *((_BYTE *)_R4 + 20) = 1;
    result = *((_DWORD *)_R4 + 2) - 1;
    *((_DWORD *)_R4 + 2) = result;
  else
    _R1 = 1717986919;
    *((_BYTE *)_R4 + 20) = 0;
    _R0 = *((_DWORD *)_R4 + 2) + 1;
    *((_DWORD *)_R4 + 2) = _R0;
    __asm { SMMUL.W         R1, R0, R1 }
    result = _R0 - 40 * (((signed int)_R1 >> 4) + (_R1 >> 31));
    if ( !result )
    {
      v15 = j_Mob::getNavigation(*((Mob **)_R4 + 12));
      __asm
      {
        VLDR            S0, [R4,#0x24]
        VMOV.F32        S4, #0.5
        VLDR            S2, [R4,#0x2C]
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
      }
      _R1 = *((_DWORD *)_R4 + 10) + 1;
        VMOV            S6, R1
        VCVT.F32.S32    S6, S6
        VADD.F32        S0, S0, S4
        VADD.F32        S2, S2, S4
        VSTR            S0, [SP,#0x20+var_20]
        VSTR            S6, [SP,#0x20+var_1C]
        VSTR            S2, [SP,#0x20+var_18]
      v17 = *((_DWORD *)_R4 + 8);
      result = (*(int (**)(void))(*(_DWORD *)v15 + 12))();
    }
  return result;
}


int __fastcall MoveToBlockGoal::MoveToBlockGoal(float a1, int a2, int a3, int a4, int a5)
{
  __int64 v5; // r5@1
  int v6; // r7@1
  float v7; // r4@1

  LODWORD(v5) = a4;
  HIDWORD(v5) = a3;
  v6 = a2;
  v7 = a1;
  j_Goal::Goal((Goal *)LODWORD(a1));
  __asm
  {
    VLDR            S0, [SP,#0x18+arg_0]
    VMUL.F32        S0, S0, S0
  }
  *(_DWORD *)LODWORD(v7) = &off_271A838;
  *(_BYTE *)(LODWORD(v7) + 20) = 0;
  *(_DWORD *)(LODWORD(v7) + 16) = 0;
  *(_DWORD *)(LODWORD(v7) + 8) = 0;
  *(_DWORD *)(LODWORD(v7) + 12) = 0;
  __asm { VSTR            S0, [R4,#0x18] }
  *(_QWORD *)(LODWORD(v7) + 28) = v5;
  *(_DWORD *)(LODWORD(v7) + 36) = BlockPos::ZERO;
  *(_DWORD *)(LODWORD(v7) + 40) = unk_2816278;
  *(_DWORD *)(LODWORD(v7) + 44) = dword_281627C;
  *(_DWORD *)(LODWORD(v7) + 48) = v6;
  j_Goal::setRequiredControlFlags((Goal *)LODWORD(v7), 5);
  return LODWORD(v7);
}


void __fastcall MoveToBlockGoal::~MoveToBlockGoal(MoveToBlockGoal *this)
{
  MoveToBlockGoal::~MoveToBlockGoal(this);
}


int __fastcall MoveToBlockGoal::canContinueToUse(MoveToBlockGoal *this)
{
  MoveToBlockGoal *v1; // r4@1
  int v2; // r0@1
  int v3; // r2@1
  int v4; // r1@1
  int result; // r0@1

  v1 = this;
  v2 = j_Entity::getRegion(*((Entity **)this + 12));
  v3 = *((_DWORD *)v1 + 2);
  v4 = v2;
  result = 0;
  if ( v3 <= 1200 && v3 >= -*((_DWORD *)v1 + 4) )
    result = (*(int (__fastcall **)(MoveToBlockGoal *, int, char *))(*(_DWORD *)v1 + 52))(v1, v4, (char *)v1 + 36);
  return result;
}


void __fastcall MoveToBlockGoal::~MoveToBlockGoal(MoveToBlockGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


signed int __fastcall MoveToBlockGoal::_canReach(MoveToBlockGoal *this, const BlockPos *a2)
{
  const BlockPos *v2; // r4@1
  int v3; // r5@1
  void (__fastcall *v4)(Path **, int, char *); // r7@1
  int v5; // r0@2
  signed int v6; // r5@2
  Path *v7; // r0@6
  char v9; // [sp+4h] [bp-24h]@1
  Path *v10; // [sp+10h] [bp-18h]@1

  v2 = a2;
  v3 = j_Mob::getNavigation(*((Mob **)this + 12));
  v4 = *(void (__fastcall **)(Path **, int, char *))(*(_DWORD *)v3 + 8);
  j_Vec3::Vec3((int)&v9, (int)v2);
  v4(&v10, v3, &v9);
  if ( v10 )
  {
    v5 = j_Path::last(v10);
    v6 = 0;
    if ( v5
      && (unsigned int)((*(_DWORD *)v5 - *(_DWORD *)v2) * (*(_DWORD *)v5 - *(_DWORD *)v2)
                      + (*(_DWORD *)(v5 + 8) - *((_DWORD *)v2 + 2)) * (*(_DWORD *)(v5 + 8) - *((_DWORD *)v2 + 2))) < 2 )
    {
      v6 = 1;
    }
    if ( v10 )
      v7 = j_Path::~Path(v10);
      j_operator delete((void *)v7);
  }
  else
  return v6;
}


unsigned int __fastcall MoveToBlockGoal::start(MoveToBlockGoal *this)
{
  Random *v2; // r5@1
  int v3; // r0@1
  int v9; // r2@1
  unsigned int v10; // r6@1
  unsigned int result; // r0@1

  _R4 = this;
  v2 = (Random *)*((_DWORD *)this + 12);
  v3 = j_Mob::getNavigation(*((Mob **)this + 12));
  __asm
  {
    VLDR            S0, [R4,#0x24]
    VMOV.F32        S4, #0.5
    VLDR            S2, [R4,#0x2C]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
  }
  _R1 = *((_DWORD *)_R4 + 10) + 1;
    VMOV            S6, R1
    VCVT.F32.S32    S6, S6
    VADD.F32        S0, S0, S4
    VADD.F32        S2, S2, S4
    VSTR            S0, [SP,#0x20+var_1C]
    VSTR            S6, [SP,#0x20+var_18]
    VSTR            S2, [SP,#0x20+var_14]
  v9 = *((_DWORD *)_R4 + 8);
  (*(void (**)(void))(*(_DWORD *)v3 + 12))();
  v2 = (Random *)((char *)v2 + 552);
  *((_DWORD *)_R4 + 2) = 0;
  v10 = j_Random::_genRandInt32(v2) % 0x4B0 + 1200;
  result = j_Random::_genRandInt32(v2) % v10 + 1200;
  *((_DWORD *)_R4 + 4) = result;
  return result;
}


int __fastcall MoveToBlockGoal::findNearestBlock(MoveToBlockGoal *this)
{
  MoveToBlockGoal *v1; // r4@1
  int v2; // r0@1
  int v3; // r8@1
  signed int v4; // r0@1
  int v9; // r2@1
  int v10; // r11@3
  int v11; // r6@3
  int v12; // r9@4
  int v13; // r10@5
  signed int v14; // r0@10
  signed int v18; // r0@20
  signed int v19; // r1@26
  signed int v21; // [sp+0h] [bp-60h]@3
  char v22; // [sp+4h] [bp-5Ch]@1
  int v23; // [sp+8h] [bp-58h]@4
  int v24; // [sp+Ch] [bp-54h]@4
  int v25; // [sp+10h] [bp-50h]@14
  int v26; // [sp+14h] [bp-4Ch]@14
  int v27; // [sp+18h] [bp-48h]@14
  char v28; // [sp+1Ch] [bp-44h]@1
  int v29; // [sp+20h] [bp-40h]@14
  int v30; // [sp+24h] [bp-3Ch]@14

  v1 = this;
  v2 = (*(int (**)(void))(**((_DWORD **)this + 12) + 52))();
  j_BlockPos::BlockPos((int)&v28, v2);
  v3 = j_Entity::getRegion(*((Entity **)v1 + 12));
  v4 = *((_DWORD *)v1 + 7);
  __asm { VLDR            S16, =100000.0 }
  v9 = 0;
  v22 = 0;
  do
  {
    if ( v4 < 1 )
    {
      v21 = v9;
    }
    else
      v10 = v9 - 1;
      v11 = 0;
      do
      {
        v12 = 0;
        v24 = v11;
        v23 = -v11;
        do
        {
          v13 = 0;
          if ( v12 > v23 )
            v13 = v11;
          if ( v12 >= v11 )
            v13 = 0;
          while ( v13 <= v11 )
          {
            v25 = *(_DWORD *)&v28 + v12;
            v26 = v10 + v29;
            v27 = v30 + v13;
            if ( j_Entity::isWithinRestriction(*((Entity **)v1 + 12), (const BlockPos *)&v25) == 1
              && (*(int (__fastcall **)(MoveToBlockGoal *, int, int *))(*(_DWORD *)v1 + 52))(v1, v3, &v25) == 1 )
            {
              _R0 = *(_DWORD *)&v28 - v25;
              __asm { VMOV            S0, R0 }
              _R0 = v29 - v26;
              __asm { VMOV            S2, R0 }
              _R0 = v30 - v27;
              __asm
              {
                VCVT.F32.S32    S0, S0
                VCVT.F32.S32    S2, S2
                VMOV            S4, R0
                VCVT.F32.S32    S4, S4
                VMUL.F32        S0, S0, S0
                VMUL.F32        S2, S2, S2
                VMUL.F32        S4, S4, S4
                VADD.F32        S0, S2, S0
                VADD.F32        S18, S0, S4
                VCMPE.F32       S18, S16
                VMRS            APSR_nzcv, FPSCR
              }
              if ( _NF ^ _VF )
                v11 = v24;
                if ( (*(int (__fastcall **)(MoveToBlockGoal *, int *))(*(_DWORD *)v1 + 56))(v1, &v25) == 1 )
                {
                  __asm { VMOV.F32        S16, S18 }
                  *((_DWORD *)v1 + 9) = v25;
                  *((_DWORD *)v1 + 10) = v26;
                  *((_DWORD *)v1 + 11) = v27;
                  v22 = 1;
                }
              else
            }
            v14 = 0;
            if ( v13 < 1 )
              v14 = 1;
            v13 = v14 - v13;
          }
          v18 = 0;
          if ( v12 < 1 )
            v18 = 1;
          v12 = v18 - v12;
        }
        while ( v12 <= v11 );
        v4 = *((_DWORD *)v1 + 7);
        ++v11;
      }
      while ( v11 < v4 );
    v19 = 0;
    if ( v21 < 1 )
      v19 = 1;
    v9 = v19 - v21;
  }
  while ( v19 - v21 < 2 );
  return v22 & 1;
}
