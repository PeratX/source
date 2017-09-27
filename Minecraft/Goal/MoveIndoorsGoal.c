

signed int __fastcall MoveIndoorsGoal::_isInside(MoveIndoorsGoal *this, const BlockPos *a2)
{
  const BlockPos *v2; // r4@1
  const BlockPos *v3; // r5@1
  signed int result; // r0@2
  char v5; // [sp+4h] [bp-1Ch]@2
  int v6; // [sp+8h] [bp-18h]@2

  v2 = a2;
  v3 = (const BlockPos *)j_Entity::getRegion(*((Entity **)this + 6));
  if ( j_BlockSource::canSeeSky(v3, v2) == 1 )
  {
    j_BlockSource::getTopRainBlockPos((BlockSource *)&v5, v3, v2);
    result = 0;
    if ( v6 > *((_DWORD *)v2 + 1) )
      result = 1;
  }
  else
    result = 1;
  return result;
}


void __fastcall MoveIndoorsGoal::~MoveIndoorsGoal(MoveIndoorsGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


int __fastcall MoveIndoorsGoal::canUse(MoveIndoorsGoal *this, int a2, int a3, int a4, int a5, char a6)
{
  MoveIndoorsGoal *v6; // r4@1
  BlockSource *v7; // r5@4
  Dimension *v8; // r6@4
  Weather *v9; // r0@5
  int v10; // r0@6
  signed int v11; // r7@6
  int v12; // r0@10
  Level *v13; // r0@12
  Level *v14; // r5@12
  char *v15; // r0@12
  char *v16; // r0@13
  int v17; // r5@13
  unsigned int *v18; // r0@15
  unsigned int v19; // r1@15
  int v20; // r4@16
  unsigned int v22; // r2@20
  unsigned int v23; // r3@21
  signed int v24; // r1@22
  Village *v25; // r0@26
  DoorInfo *v26; // r6@28
  unsigned int *v27; // r1@29
  unsigned int v28; // r0@31
  unsigned int *v29; // r7@35
  unsigned int v30; // r0@37
  int v31; // r0@43
  int v32; // r0@45
  unsigned int *v33; // r2@46
  unsigned int v34; // r1@48
  char v35; // [sp+10h] [bp-28h]@13
  int v36; // [sp+14h] [bp-24h]@13
  char v37; // [sp+18h] [bp-20h]@4
  int v38; // [sp+28h] [bp-10h]@43
  int v39; // [sp+2Ch] [bp-Ch]@43
  int v40; // [sp+30h] [bp-8h]@43
  Village *v41; // [sp+34h] [bp-4h]@26

  v6 = this;
  if ( !j_Mob::getNavigation(*((Mob **)this + 6))
    || j_Entity::hasCategory(*((_DWORD *)v6 + 6), 4096) == 1 && j_Entity::isInLove(*((Entity **)v6 + 6)) )
  {
    goto LABEL_55;
  }
  j_BlockPos::BlockPos((int)&v37, *((_DWORD *)v6 + 6) + 72);
  v7 = (BlockSource *)j_Entity::getRegion(*((Entity **)v6 + 6));
  v8 = (Dimension *)j_BlockSource::getDimension(v7);
  if ( j_Dimension::hasCeiling(v8) )
  v9 = (Weather *)j_Dimension::getWeather(v8);
  if ( j_Weather::isRaining(v9) == 1 )
    v10 = j_BlockSource::getBiome(v7, (const BlockPos *)&v37);
    v11 = *(_BYTE *)(v10 + 260);
    if ( *(_BYTE *)(v10 + 260) )
      v11 = 1;
  else
    v11 = 0;
  if ( (v12 = (*(int (__fastcall **)(Dimension *))(*(_DWORD *)v8 + 196))(v8), !v11) && (v12 ^ 1) != 1
    || (v13 = (Level *)j_BlockSource::getLevel(v7),
        v14 = v13,
        v15 = j_Level::getRandom(v13),
        j_Random::_genRandInt32((Random *)v15) % 0x32)
    || (v16 = j_Level::getVillages(v14), (*(void (__fastcall **)(char *))(**(_DWORD **)v16 + 24))(&v35),
                                         (v17 = v36) == 0) )
LABEL_55:
    v20 = 0;
    if ( !*(_DWORD *)(v36 + 4) )
      goto LABEL_56;
    v18 = (unsigned int *)(v36 + 4);
    v19 = *(_DWORD *)(v36 + 4);
    do
    {
      while ( 1 )
      {
        if ( !v19 )
        {
          v24 = 1;
          v17 = 0;
          goto LABEL_26;
        }
        __dmb();
        v22 = __ldrex(v18);
        if ( v22 == v19 )
          break;
        __clrex();
        v19 = v22;
      }
      v23 = __strex(v19 + 1, v18);
      v19 = v22;
    }
    while ( v23 );
    __dmb();
    v24 = 0;
    if ( !*v18 )
      v24 = 1;
LABEL_26:
    v25 = v41;
    if ( v24 )
      v25 = 0;
    v26 = j_Village::getBestDoorInfo(v25, (const BlockPos *)&a6);
    if ( v17 )
      v27 = (unsigned int *)(v17 + 4);
      if ( &pthread_create )
        do
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
      else
        v28 = (*v27)--;
      if ( v28 == 1 )
        v29 = (unsigned int *)(v17 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
        if ( &pthread_create )
          __dmb();
          do
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
        else
          v30 = (*v29)--;
        if ( v30 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
    if ( v26 )
      j_DoorInfo::getIndoor((DoorInfo *)&v38, (int)v26);
      *((_DWORD *)v6 + 2) = v38;
      *((_DWORD *)v6 + 3) = v39;
      *((_DWORD *)v6 + 4) = v40;
      j_MoveIndoorsGoal::_startPathfinding(v6);
      v31 = j_Mob::getNavigation(*((Mob **)v6 + 6));
      v20 = (*(int (**)(void))(*(_DWORD *)v31 + 52))();
    else
LABEL_56:
      v20 = 0;
    v32 = v36;
    if ( v36 )
      v33 = (unsigned int *)(v36 + 8);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 == 1 )
        (*(void (**)(void))(*(_DWORD *)v32 + 12))();
  return v20;
}


void __fastcall MoveIndoorsGoal::~MoveIndoorsGoal(MoveIndoorsGoal *this)
{
  MoveIndoorsGoal::~MoveIndoorsGoal(this);
}


int __fastcall MoveIndoorsGoal::_startPathfinding(MoveIndoorsGoal *this)
{
  const BlockPos *v2; // r5@1
  int v3; // r5@2
  int result; // r0@4
  int (*v10)(void); // r6@5
  int v11; // r2@5
  signed int v12; // r6@8
  BlockSource *v13; // r7@10
  int v14; // r0@11
  int v15; // r2@11
  int v16; // r0@14
  int v17; // r2@14
  int v18; // [sp+0h] [bp-78h]@0
  const Vec3 *v19; // [sp+4h] [bp-74h]@0
  int v20; // [sp+14h] [bp-64h]@5
  int v21; // [sp+18h] [bp-60h]@5
  int v22; // [sp+1Ch] [bp-5Ch]@5
  float v23; // [sp+20h] [bp-58h]@4
  char v24; // [sp+2Ch] [bp-4Ch]@3
  char v25; // [sp+38h] [bp-40h]@10
  char v26; // [sp+44h] [bp-34h]@1
  int v27; // [sp+48h] [bp-30h]@2
  char v28; // [sp+50h] [bp-28h]@2
  int v29; // [sp+54h] [bp-24h]@2
  int v30; // [sp+58h] [bp-20h]@4

  _R4 = this;
  j_BlockPos::BlockPos((int)&v26, *((_DWORD *)this + 6) + 72);
  v2 = (const BlockPos *)j_Entity::getRegion(*((Entity **)_R4 + 6));
  if ( j_BlockSource::canSeeSky(v2, (const BlockPos *)&v26) )
  {
    j_BlockSource::getTopRainBlockPos((BlockSource *)&v28, v2, (const BlockPos *)&v26);
    v3 = *((_DWORD *)_R4 + 6);
    if ( v29 <= v27 )
    {
      j_Vec3::Vec3((int)&v24, (int)_R4 + 8);
      _R0 = j_Entity::distanceToSqr((Entity *)v3, (const Vec3 *)&v24);
      __asm
      {
        VLDR            S0, =256.0
        VMOV            S2, R0
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        v16 = j_Mob::getNavigation(*((Mob **)_R4 + 6));
        __asm
        {
          VLDR            S0, [R4,#8]
          VMOV.F32        S6, #0.5
          VLDR            S4, [R4,#0x10]
          VLDR            S2, [R4,#0xC]
          VCVT.F32.S32    S0, S0
          VCVT.F32.S32    S4, S4
          VCVT.F32.S32    S2, S2
          VADD.F32        S0, S0, S6
          VADD.F32        S4, S4, S6
          VSTR            S0, [SP,#0x78+var_70]
          VSTR            S2, [SP,#0x78+var_6C]
          VSTR            S4, [SP,#0x78+var_68]
        }
        v17 = *((_DWORD *)_R4 + 5);
        result = (*(int (**)(void))(*(_DWORD *)v16 + 12))();
      else
        __asm { VMOV.F32        S6, #0.5 }
        *(_DWORD *)&v28 = 0;
        v29 = 0;
        v30 = 0;
          VSTR            S0, [SP,#0x78+var_58]
          VSTR            S2, [SP,#0x78+var_54]
          VSTR            S4, [SP,#0x78+var_50]
        result = j_RandomPos::getPosTowards((RandomPos *)&v28, *((Vec3 **)_R4 + 6), (Mob *)0xE, 3, (int)&v23, v19);
        if ( result == 1 )
          v10 = *(int (**)(void))(*(_DWORD *)j_Mob::getNavigation(*((Mob **)_R4 + 6)) + 12);
          v20 = *(_DWORD *)&v28;
          v21 = v29;
          v22 = v30;
          v11 = *((_DWORD *)_R4 + 5);
          result = v10();
      return result;
    }
  }
  else
  result = j_Random::_genRandInt32((Random *)(v3 + 552)) % 0x32;
  if ( !result )
    v12 = 8;
    do
      *(_DWORD *)&v28 = 0;
      v29 = 0;
      v30 = 0;
      result = j_RandomPos::getPos((RandomPos *)&v28, *((Vec3 **)_R4 + 6), (Mob *)8, 1, v18);
      if ( result == 1 )
        v13 = (BlockSource *)j_Entity::getRegion(*((Entity **)_R4 + 6));
        j_BlockPos::BlockPos((int)&v25, (int)&v28);
        result = j_BlockSource::getHeightmap(v13, (const BlockPos *)&v25);
          VMOV            S0, R0
          VLDR            S2, [SP,#0x78+var_24]
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          v14 = j_Mob::getNavigation(*((Mob **)_R4 + 6));
          v15 = *((_DWORD *)_R4 + 5);
          result = (*(int (**)(void))(*(_DWORD *)v14 + 12))();
      --v12;
    while ( v12 );
  return result;
}


Goal *__fastcall MoveIndoorsGoal::MoveIndoorsGoal(Goal *a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  Goal *v5; // r4@1
  int v6; // r1@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  j_Goal::Goal(a1);
  v6 = (int)v5 + 16;
  *(_DWORD *)v5 = &off_271A7D0;
  *((_DWORD *)v5 + 2) = -1;
  *((_DWORD *)v5 + 3) = -1;
  *(_DWORD *)v6 = -1;
  *(_DWORD *)(v6 + 4) = v3;
  *(_DWORD *)(v6 + 8) = v4;
  j_Goal::setRequiredControlFlags(v5, 1);
  return v5;
}


int __fastcall MoveIndoorsGoal::canContinueToUse(MoveIndoorsGoal *this)
{
  MoveIndoorsGoal *v1; // r5@1
  BlockSource *v2; // r6@1
  Dimension *v3; // r4@1
  int v4; // r0@1
  int v5; // r5@1
  Weather *v6; // r0@1
  int v7; // r0@2
  signed int v8; // r6@2
  char v10; // [sp+4h] [bp-1Ch]@1

  v1 = this;
  v2 = (BlockSource *)j_Entity::getRegion(*((Entity **)this + 6));
  v3 = (Dimension *)j_BlockSource::getDimension(v2);
  j_BlockPos::BlockPos((int)&v10, *((_DWORD *)v1 + 6) + 72);
  v4 = j_Mob::getNavigation(*((Mob **)v1 + 6));
  v5 = (*(int (**)(void))(*(_DWORD *)v4 + 36))();
  v6 = (Weather *)j_Dimension::getWeather(v3);
  if ( j_Weather::isRaining(v6) == 1 )
  {
    v7 = j_BlockSource::getBiome(v2, (const BlockPos *)&v10);
    v8 = *(_BYTE *)(v7 + 260);
    if ( *(_BYTE *)(v7 + 260) )
      v8 = 1;
  }
  else
    v8 = 0;
  return (*(int (__fastcall **)(Dimension *))(*(_DWORD *)v3 + 196))(v3) ^ 1 | v8 | v5 ^ 1;
}


int __fastcall MoveIndoorsGoal::stop(MoveIndoorsGoal *this)
{
  int v1; // r0@1

  v1 = j_Mob::getNavigation(*((Mob **)this + 6));
  return (*(int (**)(void))(*(_DWORD *)v1 + 40))();
}


int __fastcall MoveIndoorsGoal::tick(MoveIndoorsGoal *this)
{
  MoveIndoorsGoal *v1; // r4@1
  int v2; // r0@1
  int result; // r0@1

  v1 = this;
  v2 = j_Mob::getNavigation(*((Mob **)this + 6));
  result = (*(int (**)(void))(*(_DWORD *)v2 + 36))();
  if ( result == 1 )
    result = j_j_j__ZN15MoveIndoorsGoal17_startPathfindingEv_0(v1);
  return result;
}
