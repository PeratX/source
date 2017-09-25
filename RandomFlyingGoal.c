

signed int __fastcall RandomFlyingGoal::_getTreePos(RandomFlyingGoal *this, Vec3 *a2)
{
  RandomFlyingGoal *v2; // r5@1
  int v3; // r0@1
  int v4; // r0@1
  int v5; // r4@1
  int v6; // r1@2
  int v7; // r9@2
  int i; // r8@3
  bool v9; // zf@5
  BlockSource *v10; // r0@10
  int v11; // r0@10
  BlockSource *v12; // r0@14
  BlockSource *v13; // r0@15
  bool v14; // nf@18
  unsigned __int8 v15; // vf@18
  Vec3 *v17; // [sp+4h] [bp-6Ch]@1
  int v18; // [sp+10h] [bp-60h]@21
  int v19; // [sp+14h] [bp-5Ch]@21
  int v20; // [sp+18h] [bp-58h]@21
  int v21; // [sp+1Ch] [bp-54h]@15
  int v22; // [sp+20h] [bp-50h]@15
  int v23; // [sp+24h] [bp-4Ch]@15
  int v24; // [sp+28h] [bp-48h]@10
  int v25; // [sp+2Ch] [bp-44h]@10
  int v26; // [sp+30h] [bp-40h]@10
  int v27; // [sp+34h] [bp-3Ch]@10
  int v28; // [sp+38h] [bp-38h]@10
  int v29; // [sp+3Ch] [bp-34h]@10
  int v30; // [sp+40h] [bp-30h]@1
  int v31; // [sp+44h] [bp-2Ch]@2
  int v32; // [sp+48h] [bp-28h]@1

  v2 = this;
  v17 = a2;
  v3 = (*(int (**)(void))(**((_DWORD **)this + 8) + 52))();
  j_BlockPos::BlockPos((int)&v30, v3);
  v4 = v32;
  v5 = v30 - 3;
LABEL_2:
  v6 = v31;
  v7 = v4 - 3;
LABEL_3:
  for ( i = v6 - 6; ; ++i )
  {
    v9 = i == v6;
    if ( i == v6 )
      v9 = v30 == v5;
    if ( !v9 || v4 != v7 )
      break;
LABEL_17:
    if ( i >= v6 + 5 )
    {
      v4 = v32;
      v15 = __OFSUB__(v7, v32 + 2);
      v14 = v7++ - (v32 + 2) < 0;
      if ( v14 ^ v15 )
        goto LABEL_3;
      v15 = __OFSUB__(v5, v30 + 2);
      v14 = v5++ - (v30 + 2) < 0;
      if ( !(v14 ^ v15) )
        return 0;
      goto LABEL_2;
    }
    v4 = v32;
  }
  v27 = v5;
  v28 = i;
  v29 = v7;
  v10 = (BlockSource *)j_Entity::getRegion(*((Entity **)v2 + 8));
  v24 = v27;
  v25 = v28 - 1;
  v26 = v29;
  v11 = *(_BYTE *)(j_BlockSource::getBlock(v10, (const BlockPos *)&v24) + 4);
  if ( v11 != *(_BYTE *)(Block::mLeaves + 4)
    && v11 != *(_BYTE *)(Block::mLeaves2 + 4)
    && v11 != *(_BYTE *)(Block::mLog + 4)
    && v11 != *(_BYTE *)(Block::mLog2 + 4)
    || (v12 = (BlockSource *)j_Entity::getRegion(*((Entity **)v2 + 8)),
        j_BlockSource::isEmptyBlock(v12, (const BlockPos *)&v27) != 1)
    || (v13 = (BlockSource *)j_Entity::getRegion(*((Entity **)v2 + 8)),
        v21 = v27,
        v22 = v28 + 1,
        v23 = v29,
        !j_BlockSource::isEmptyBlock(v13, (const BlockPos *)&v21)) )
    v6 = v31;
    goto LABEL_17;
  j_Vec3::Vec3((int)&v18, (int)&v27);
  *(_DWORD *)v17 = v18;
  *((_DWORD *)v17 + 1) = v19;
  *((_DWORD *)v17 + 2) = v20;
  return 1;
}


signed int __fastcall RandomFlyingGoal::_setWantedPosition(RandomFlyingGoal *this)
{
  RandomFlyingGoal *v1; // r4@1
  signed int v2; // r5@3
  Level *v3; // r0@6
  char *v4; // r0@6
  int v11; // [sp+0h] [bp-20h]@0
  int v12; // [sp+4h] [bp-1Ch]@1
  int v13; // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@1

  v1 = this;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  if ( (*(int (**)(void))(**((_DWORD **)this + 8) + 208))() || (*(int (**)(void))(**((_DWORD **)v1 + 8) + 224))() == 1 )
    v2 = j_RandomPos::getPos(
           (RandomPos *)&v12,
           *((Vec3 **)v1 + 8),
           (Mob *)*((_QWORD *)v1 + 3),
           *((_QWORD *)v1 + 3) >> 32,
           v11);
  else
    v2 = 0;
  if ( !*((_BYTE *)v1 + 36) )
    goto LABEL_15;
  v3 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 8));
  v4 = j_Level::getRandom(v3);
  _R0 = j_Random::_genRandInt32((Random *)v4);
  __asm
  {
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S0, D0
    VLDR            S2, =0.001
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
LABEL_15:
    if ( v2 == 1 )
      goto LABEL_11;
  else if ( j_RandomFlyingGoal::_getTreePos(v1, (Vec3 *)&v12) )
LABEL_11:
    *((_DWORD *)v1 + 2) = v12;
    *((_DWORD *)v1 + 3) = v13;
    *((_DWORD *)v1 + 4) = v14;
    return 1;
  return j_RandomStrollGoal::_setWantedPosition(v1);
}


Goal *__fastcall RandomFlyingGoal::RandomFlyingGoal(RandomStrollGoal *a1, Mob *a2, float a3, int a4, int a5, char a6)
{
  Goal *result; // r0@1

  result = j_RandomStrollGoal::RandomStrollGoal(a1, a2, a3, a4, a5);
  *(_DWORD *)result = &off_271AB70;
  *((_BYTE *)result + 36) = a6;
  return result;
}


void __fastcall RandomFlyingGoal::~RandomFlyingGoal(RandomFlyingGoal *this)
{
  RandomFlyingGoal::~RandomFlyingGoal(this);
}


int __fastcall RandomFlyingGoal::canUse(RandomFlyingGoal *this)
{
  RandomFlyingGoal *v1; // r4@1
  Level *v2; // r0@3
  char *v3; // r0@3
  int result; // r0@4

  v1 = this;
  if ( j_Mob::getNavigation(*((Mob **)this + 8))
    && j_Mob::getNoActionTime(*((Mob **)v1 + 8)) <= 99
    && (v2 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 8)),
        v3 = j_Level::getRandom(v2),
        !(j_Random::_genRandInt32((Random *)v3) % 0x78)) )
  {
    result = (*(int (__fastcall **)(RandomFlyingGoal *))(*(_DWORD *)v1 + 44))(v1);
  }
  else
    result = 0;
  return result;
}


void __fastcall RandomFlyingGoal::~RandomFlyingGoal(RandomFlyingGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}
