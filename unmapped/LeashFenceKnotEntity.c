

int __fastcall LeashFenceKnotEntity::numberofAnimalsAttached(LeashFenceKnotEntity *this)
{
  Entity *v1; // r10@1
  int v10; // r6@1
  int v11; // r5@1
  __int64 *v12; // r0@1
  __int64 *v13; // r6@1
  __int64 v14; // r0@1
  unsigned int v15; // r4@2
  int v16; // r7@3
  char *v17; // r0@4
  int v19; // [sp+0h] [bp-70h]@0
  int v20; // [sp+4h] [bp-6Ch]@0
  int v21; // [sp+8h] [bp-68h]@0
  __int64 v22; // [sp+10h] [bp-60h]@4
  char v23; // [sp+1Ch] [bp-54h]@1

  v1 = this;
  _R0 = (*(int (**)(void))(*(_DWORD *)this + 52))();
  __asm
  {
    VMOV.F32        S0, #-7.0
    VLDR            S2, [R0]
    VLDR            S4, [R0,#4]
    VLDR            S6, [R0,#8]
    VADD.F32        S8, S2, S0
    VADD.F32        S10, S4, S0
    VADD.F32        S0, S6, S0
    VMOV            R5, S8
    VMOV            R8, S10
    VMOV            R7, S0
    VMOV.F32        S0, #7.0
    VADD.F32        S16, S6, S0
    VADD.F32        S18, S4, S0
    VADD.F32        S20, S2, S0
  }
  v10 = Entity::getRegion(v1);
    VSTR            S20, [SP,#0x70+var_70]
    VSTR            S18, [SP,#0x70+var_6C]
    VSTR            S16, [SP,#0x70+var_68]
  AABB::AABB(COERCE_FLOAT(&v23), _R5, __PAIR__(_R7, _R8), v19, v20, v21);
  v11 = 0;
  v12 = (__int64 *)BlockSource::fetchEntities(v10, 256, (int)&v23, 0);
  v13 = v12;
  v14 = *v12;
  if ( HIDWORD(v14) != (_DWORD)v14 )
    v11 = 0;
    v15 = 0;
    do
    {
      v16 = *(_DWORD *)(v14 + 4 * v15);
      if ( Entity::isLeashed(*(Entity **)(v14 + 4 * v15)) == 1 )
      {
        Entity::getLeashHolder((Entity *)&v22, v16);
        v17 = Entity::getUniqueID(v1);
        if ( *(_QWORD *)v17 == v22 )
          ++v11;
      }
      v14 = *v13;
      ++v15;
    }
    while ( v15 < (HIDWORD(v14) - (signed int)v14) >> 2 );
  return v11;
}


_BOOL4 __fastcall LeashFenceKnotEntity::wouldSurvive(LeashFenceKnotEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r4@1
  int v3; // r0@1
  int v4; // r0@1
  int v5; // r1@1
  char v7; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = (*(int (**)(void))(*(_DWORD *)this + 52))();
  BlockPos::BlockPos((int)&v7, v3);
  v4 = BlockSource::getBlock(v2, (const BlockPos *)&v7);
  return Block::hasProperty(v4, v5, 128LL);
}


signed int __fastcall LeashFenceKnotEntity::getHeight(LeashFenceKnotEntity *this)
{
  return 9;
}


int __fastcall LeashFenceKnotEntity::onSizeUpdated(int result)
{
  __int64 v1; // r1@1

  HIDWORD(v1) = -1115684864;
  LODWORD(v1) = 0;
  *(_QWORD *)(result + 376) = v1;
  *(_DWORD *)(result + 384) = 0;
  return result;
}


signed int __fastcall LeashFenceKnotEntity::getEntityTypeId(LeashFenceKnotEntity *this)
{
  return 88;
}


int __fastcall LeashFenceKnotEntity::remove(LeashFenceKnotEntity *this)
{
  LeashFenceKnotEntity *v1; // r4@1

  v1 = this;
  Entity::remove(this);
  return j_j_j__ZN20LeashFenceKnotEntity13removeAnimalsEP6Player(v1, 0);
}


void __fastcall LeashFenceKnotEntity::~LeashFenceKnotEntity(LeashFenceKnotEntity *this)
{
  Entity *v1; // r0@1

  v1 = Entity::~Entity(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall LeashFenceKnotEntity::getWidth(LeashFenceKnotEntity *this)
{
  return 9;
}


signed int __fastcall LeashFenceKnotEntity::shouldRenderAtSqrDistance(LeashFenceKnotEntity *this, int a2, double _R2)
{
  signed int result; // r0@1

  __asm
  {
    VLDR            D0, =4096.0
    VMOV            D1, R2, R3
  }
  result = 0;
    VCMPE.F64       D1, D0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    result = 1;
  return result;
}


signed int __fastcall LeashFenceKnotEntity::getInteraction(__int64 this, EntityInteraction *a2, const Vec3 *a3)
{
  EntityInteraction *v3; // r4@1
  __int64 v4; // r6@1
  void *v5; // r0@1
  _QWORD *v6; // r0@3
  __int64 v7; // r1@3
  signed int result; // r0@5
  unsigned int *v9; // r2@7
  signed int v10; // r1@9
  _QWORD *v11; // [sp+0h] [bp-30h]@3
  __int64 v12; // [sp+8h] [bp-28h]@3
  int v13; // [sp+14h] [bp-1Ch]@1

  v3 = a2;
  v4 = this;
  sub_21E94B4((void **)&v13, "Remove");
  EntityInteraction::setInteractText();
  v5 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  if ( EntityInteraction::shouldCapture(v3) == 1 )
    v6 = operator new(8u);
    LODWORD(v7) = sub_17452E2;
    *v6 = v4;
    HIDWORD(v7) = sub_1745298;
    v11 = v6;
    v12 = v7;
    EntityInteraction::capture((int)v3, (int)&v11);
    if ( (_DWORD)v12 )
      ((void (*)(void))v12)();
    result = 1;
  else
    result = 0;
  return result;
}


int __fastcall LeashFenceKnotEntity::removeAnimals(LeashFenceKnotEntity *this, Player *a2)
{
  Entity *v2; // r11@1
  Player *v3; // r8@1
  int v12; // r5@1
  __int64 *v13; // r0@1
  __int64 *v14; // r5@1
  __int64 v15; // r0@1
  unsigned int v16; // r4@2
  Entity *v17; // r6@3
  char *v18; // r0@4
  int v19; // r0@5
  Entity *v20; // r7@8
  char *v21; // r0@9
  int v23; // [sp+0h] [bp-78h]@0
  int v24; // [sp+4h] [bp-74h]@0
  int v25; // [sp+8h] [bp-70h]@0
  __int64 v26; // [sp+10h] [bp-68h]@4
  char v27; // [sp+1Ch] [bp-5Ch]@1

  v2 = this;
  v3 = a2;
  _R0 = (*(int (**)(void))(*(_DWORD *)this + 52))();
  __asm
  {
    VMOV.F32        S0, #-7.0
    VLDR            S2, [R0]
    VLDR            S4, [R0,#4]
    VLDR            S6, [R0,#8]
    VADD.F32        S8, S2, S0
    VADD.F32        S10, S4, S0
    VADD.F32        S0, S6, S0
    VMOV            R9, S8
    VMOV            R7, S10
    VMOV            R6, S0
    VMOV.F32        S0, #7.0
    VADD.F32        S16, S6, S0
    VADD.F32        S18, S4, S0
    VADD.F32        S20, S2, S0
  }
  v12 = Entity::getRegion(v2);
    VSTR            S20, [SP,#0x78+var_78]
    VSTR            S18, [SP,#0x78+var_74]
    VSTR            S16, [SP,#0x78+var_70]
  AABB::AABB(COERCE_FLOAT(&v27), _R9, __PAIR__(_R6, _R7), v23, v24, v25);
  v13 = (__int64 *)BlockSource::fetchEntities(v12, 256, (int)&v27, 0);
  v14 = v13;
  v15 = *v13;
  if ( HIDWORD(v15) != (_DWORD)v15 )
    v16 = 0;
    if ( v3 )
    {
      do
      {
        v17 = *(Entity **)(v15 + 4 * v16);
        if ( Entity::isLeashed(*(Entity **)(v15 + 4 * v16)) == 1 )
        {
          Entity::getLeashHolder((Entity *)&v26, (int)v17);
          v18 = Entity::getUniqueID(v2);
          if ( *(_QWORD *)v18 == v26 )
          {
            v19 = Abilities::getBool((int)v3 + 4320, (int **)&Abilities::INSTABUILD);
            Entity::dropLeash(v17, v19 ^ 1, 0);
          }
        }
        v15 = *v14;
        ++v16;
      }
      while ( v16 < (HIDWORD(v15) - (signed int)v15) >> 2 );
    }
    else
        v20 = *(Entity **)(v15 + 4 * v16);
          Entity::getLeashHolder((Entity *)&v26, (int)v20);
          v21 = Entity::getUniqueID(v2);
          if ( *(_QWORD *)v21 == v26 )
            Entity::dropLeash(v20, 1, 0);
  return v15;
}


int __fastcall LeashFenceKnotEntity::reloadHardcoded(int result)
{
  float v5; // [sp+0h] [bp-20h]@2
  float v6; // [sp+Ch] [bp-14h]@2

  if ( !*(_BYTE *)(result + 3081) )
  {
    __asm
    {
      VMOV.F32        S0, #-0.1875
      VLDR            S8, [R0,#0x48]
      VMOV.F32        S2, #-0.125
      VLDR            S10, [R0,#0x4C]
      VMOV.F32        S6, #0.375
      VLDR            S12, [R0,#0x50]
      VMOV.F32        S4, #0.1875
      VADD.F32        S14, S8, S0
      VADD.F32        S2, S10, S2
      VADD.F32        S0, S12, S0
      VADD.F32        S8, S8, S4
      VADD.F32        S6, S10, S6
      VADD.F32        S4, S12, S4
      VSTR            S14, [SP,#0x20+var_14]
      VSTR            S2, [SP,#0x20+var_10]
      VSTR            S0, [SP,#0x20+var_C]
      VSTR            S8, [SP,#0x20+var_20]
      VSTR            S6, [SP,#0x20+var_1C]
      VSTR            S4, [SP,#0x20+var_18]
    }
    result = AABB::set((AABB *)(result + 264), (const Vec3 *)&v6, (const Vec3 *)&v5);
  }
  return result;
}


void __fastcall LeashFenceKnotEntity::~LeashFenceKnotEntity(LeashFenceKnotEntity *this)
{
  LeashFenceKnotEntity::~LeashFenceKnotEntity(this);
}


signed int __fastcall LeashFenceKnotEntity::isPickable(LeashFenceKnotEntity *this)
{
  return 1;
}


int __fastcall LeashFenceKnotEntity::LeashFenceKnotEntity(HangingEntity *a1, EntityDefinitionGroup *a2, const EntityDefinitionIdentifier *a3)
{
  int result; // r0@1

  result = HangingEntity::HangingEntity(a1, a2, a3);
  *(_DWORD *)result = &off_26F4C54;
  *(_DWORD *)(result + 248) = 60;
  return result;
}


int __fastcall LeashFenceKnotEntity::getShadowRadius(LeashFenceKnotEntity *this)
{
  return 0;
}
