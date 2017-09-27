

_BOOL4 __fastcall FallingBlock::_isHeavyBlock(FallingBlock *this, const FullBlock *a2)
{
  int v2; // r1@1
  _BOOL4 v3; // r4@1
  _BOOL4 result; // r0@1

  v2 = *(_BYTE *)a2;
  v3 = Block::mBlocks[v2];
  result = Block::hasProperty(Block::mBlocks[v2], v2, 4096LL);
  if ( result )
    result = v3;
  return result;
}


int __fastcall FallingBlock::_init(FallingBlock *this)
{
  int result; // r0@1

  _R4 = this;
  *((_DWORD *)this + 62) = 37;
  *((_DWORD *)this + 855) = 0;
  *((_BYTE *)this + 536) = 1;
  (*(void (**)(void))(*(_DWORD *)this + 680))();
  __asm
  {
    VMOV.F32        S0, #0.5
    VLDR            S2, [R4,#0x134]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R4,#0x13C]
  }
  *(_QWORD *)((char *)_R4 + 108) = *(_QWORD *)&Vec3::ZERO;
  result = dword_2822498;
  *((_DWORD *)_R4 + 29) = dword_2822498;
  return result;
}


void __fastcall FallingBlock::addAdditionalSaveData(FallingBlock *this, CompoundTag *a2)
{
  FallingBlock *v2; // r7@1
  CompoundTag *v3; // r4@1
  __int16 v4; // r6@1
  void *v5; // r0@1
  void *v6; // r0@2
  void *v7; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  int v14; // [sp+4h] [bp-2Ch]@3
  int v15; // [sp+Ch] [bp-24h]@2
  int v16; // [sp+14h] [bp-1Ch]@1

  v2 = this;
  v3 = a2;
  v4 = SynchedEntityData::getInt((FallingBlock *)((char *)this + 176), 2);
  sub_21E94B4((void **)&v16, "Tile");
  CompoundTag::putByte((int)v3, (const void **)&v16, v4);
  v5 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v15, "Data");
  CompoundTag::putByte((int)v3, (const void **)&v15, SHIBYTE(v4));
  v6 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v15 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v14, "Time");
  CompoundTag::putByte((int)v3, (const void **)&v14, *((_BYTE *)v2 + 3420));
  v7 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v14 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


signed int __fastcall FallingBlock::_hurt(FallingBlock *this, const EntityDamageSource *a2, int a3, bool a4, bool a5)
{
  FallingBlock *v5; // r4@1
  unsigned __int16 v6; // r5@4
  int v7; // r6@4
  void (__fastcall *v8)(int, int, char *, int); // r9@4
  int v9; // r7@4
  char v11; // [sp+8h] [bp-28h]@4

  v5 = this;
  if ( !*((_DWORD *)this + 853)
    && EntityDamageSource::getCause(a2) == 20
    && (*(int (__fastcall **)(FallingBlock *))(*(_DWORD *)v5 + 316))(v5) == 1 )
  {
    v6 = SynchedEntityData::getInt((FallingBlock *)((char *)v5 + 176), 2);
    v7 = Block::mBlocks[(unsigned __int8)v6];
    v8 = *(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)v7 + 276);
    v9 = Entity::getRegion(v5);
    BlockPos::BlockPos((int)&v11, (int)v5 + 72);
    v8(v7, v9, &v11, v6 >> 8);
    (*(void (__fastcall **)(FallingBlock *))(*(_DWORD *)v5 + 44))(v5);
  }
  return 1;
}


void __fastcall FallingBlock::~FallingBlock(FallingBlock *this)
{
  Entity *v1; // r0@1

  v1 = Entity::~Entity(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall FallingBlock::getShadowRadius(FallingBlock *this)
{
  return 0;
}


void __fastcall FallingBlock::readAdditionalSaveData(FallingBlock *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  FallingBlock *v3; // r4@1
  int v4; // r8@1
  void *v5; // r0@1
  int v6; // r7@2
  void *v7; // r0@2
  int v8; // r0@3
  unsigned int v9; // r1@3
  int v10; // r2@4
  unsigned int v11; // r1@5
  unsigned int v12; // r0@5
  void *v13; // r0@10
  unsigned int *v14; // r2@12
  signed int v15; // r1@14
  unsigned int *v16; // r2@16
  signed int v17; // r1@18
  unsigned int *v18; // r2@20
  signed int v19; // r1@22
  int v20; // [sp+8h] [bp-30h]@10
  int v21; // [sp+10h] [bp-28h]@2
  int v22; // [sp+18h] [bp-20h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v22, "Tile");
  v4 = CompoundTag::getByte((int)v2, (const void **)&v22);
  v5 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v21, "Data");
  v6 = CompoundTag::getByte((int)v2, (const void **)&v21);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v21 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = SynchedEntityData::_get((FallingBlock *)((char *)v3 + 176), 2);
  v9 = *(_DWORD *)(v8 + 4);
  if ( (unsigned __int8)v9 == 2 )
    v10 = v4 | (v6 << 8);
    if ( *(_DWORD *)(v8 + 12) != v10 )
      *(_DWORD *)(v8 + 12) = v10;
      *(_BYTE *)(v8 + 8) = 1;
      v11 = v9 >> 16;
      v12 = *((_WORD *)v3 + 94);
      if ( v12 >= v11 )
        LOWORD(v12) = v11;
      *((_WORD *)v3 + 94) = v12;
      if ( *((_WORD *)v3 + 95) > v11 )
        LOWORD(v11) = *((_WORD *)v3 + 95);
      *((_WORD *)v3 + 95) = v11;
  sub_21E94B4((void **)&v20, "Time");
  *((_DWORD *)v3 + 855) = CompoundTag::getByte((int)v2, (const void **)&v20);
  v13 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v20 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
}


int __fastcall FallingBlock::FallingBlock(int a1, BlockSource *a2)
{
  __int16 v3; // [sp+4h] [bp-Ch]@1

  v3 = FullBlock::AIR;
  return FallingBlock::FallingBlock(a1, a2, (int)&Vec3::ZERO, (int)&v3, 0);
}


int __fastcall FallingBlock::_waitRemoval(int result)
{
  *(_DWORD *)(result + 3412) = 1;
  *(_QWORD *)(result + 108) = *(_QWORD *)&Vec3::ZERO;
  *(_DWORD *)(result + 116) = dword_2822498;
  *(_DWORD *)(result + 3416) = 0;
  return result;
}


int __fastcall FallingBlock::isPickable(FallingBlock *this)
{
  return Entity::isRemoved(this) ^ 1;
}


unsigned int __fastcall FallingBlock::getBlock(FallingBlock *this, int a2)
{
  FallingBlock *v2; // r4@1
  unsigned int v3; // r0@1
  unsigned int result; // r0@1

  v2 = this;
  v3 = SynchedEntityData::getInt((SynchedEntityData *)(a2 + 176), 2);
  *(_BYTE *)v2 = v3;
  result = v3 >> 8;
  *((_BYTE *)v2 + 1) = result;
  return result;
}


int __fastcall FallingBlock::causeFallDamage(FallingBlock *this, float a2)
{
  FallingBlock *v3; // r4@1
  int v4; // r0@1
  char v5; // r5@1
  unsigned __int16 v6; // r0@1
  unsigned __int8 v10; // r6@1
  int v15; // r9@1
  int v16; // r10@1
  int v18; // r11@1
  int v19; // r1@1
  int v20; // r7@3
  int v21; // r0@5
  Entity **v22; // r5@5
  Entity **v23; // r6@5
  Level *v24; // r0@9
  Level *v26; // r0@18
  char *v27; // r0@18
  int v29; // r0@20
  __int16 v30; // r5@20
  Level *v31; // r0@22
  int v33; // r0@27
  unsigned int v34; // r1@27
  int v35; // r2@28
  unsigned int v36; // r1@29
  unsigned int v37; // r0@29
  int v38; // [sp+Ch] [bp-44h]@1
  unsigned __int16 v39; // [sp+10h] [bp-40h]@1
  unsigned __int64 *v40; // [sp+14h] [bp-3Ch]@1
  char v41; // [sp+18h] [bp-38h]@3

  _R7 = a2;
  v3 = this;
  v4 = Entity::getRegion(this);
  v5 = 0;
  v40 = (unsigned __int64 *)BlockSource::fetchEntities2(v4, 256, (FallingBlock *)((char *)v3 + 264), 0);
  v6 = SynchedEntityData::getInt((FallingBlock *)((char *)v3 + 176), 2);
  __asm { VMOV.F32        S0, #-1.0 }
  v10 = v6;
  __asm { VMOV            S2, R7 }
  v39 = v6;
  __asm
  {
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  }
  _R0 = ceilf(_R0);
  __asm { VMOV            S0, R0 }
  _R0 = (int)v3 + 3432;
    VCVTR.S32.F32   S16, S0
    VCVT.F32.S32    S0, S16
    VLDR            S2, [R0]
    VMOV            R8, S16
  v15 = *((_BYTE *)v3 + 3425);
  v16 = *(_BYTE *)(Block::mAnvil + 4);
  v38 = *(_BYTE *)(Block::mAnvil + 4);
    VMUL.F32        S0, S2, S0
  v18 = mce::Math::floor(_R0, *(float *)&Block::mAnvil);
  v19 = 19;
  if ( v10 == v16 )
    v19 = 17;
  v20 = *((_DWORD *)v3 + 857);
  EntityDamageSource::EntityDamageSource((int)&v41, v19);
  if ( _R8 > 0 )
    v5 = 1;
  v21 = (v15 != 0) & (unsigned __int8)v5;
  v22 = (Entity **)(*v40 >> 32);
  v23 = (Entity **)*v40;
  if ( v18 < v20 )
    v20 = v18;
  if ( v23 == v22 )
    goto LABEL_14;
  if ( v21 == 1 )
    do
    {
      v24 = (Level *)Entity::getLevel(v3);
      if ( !Level::isClientSide(v24) && (*(int (**)(void))(*(_DWORD *)*v23 + 96))() == 1 )
        FallingBlock::_breakBlock(v3);
      Entity::hurt(*v23, (const EntityDamageSource *)&v41, v20, 1, 0);
      ++v23;
    }
    while ( v22 != v23 );
    v21 = 1;
LABEL_14:
    _ZF = v21 == 1;
    if ( v21 == 1 )
      _ZF = (unsigned __int8)v39 == v38;
    if ( _ZF )
      v26 = (Level *)Entity::getLevel(v3);
      v27 = Level::getRandom(v26);
      _R0 = Random::_genRandInt32((Random *)v27);
      __asm
      {
        VMOV            S4, R0
        VLDR            D1, =0.05
        VCVT.F64.S32    D0, S16
        VCVT.F64.U32    D2, S4
        VLDR            D3, =2.32830644e-10
        VMUL.F64        D0, D0, D1
        VMUL.F64        D2, D2, D3
        VLDR            D1, =0.0500000007
        VADD.F64        D0, D0, D1
        VCVT.F32.F64    S2, D2
        VCVT.F64.F32    D1, S2
        VCMPE.F64       D1, D0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        v29 = v39 >> 10;
        v30 = v29 + 1;
        if ( (unsigned int)(v29 + 1) < 3 )
        {
          v33 = SynchedEntityData::_get((FallingBlock *)((char *)v3 + 176), 2);
          v34 = *(_DWORD *)(v33 + 4);
          if ( (unsigned __int8)v34 == 2 )
          {
            v35 = (unsigned __int16)(v30 << 10) | v39 & 0x3FF;
            if ( *(_DWORD *)(v33 + 12) != v35 )
            {
              *(_DWORD *)(v33 + 12) = v35;
              *(_BYTE *)(v33 + 8) = 1;
              v36 = v34 >> 16;
              v37 = *((_WORD *)v3 + 94);
              if ( v37 >= v36 )
                LOWORD(v37) = v36;
              *((_WORD *)v3 + 94) = v37;
              if ( *((_WORD *)v3 + 95) > v36 )
                LOWORD(v36) = *((_WORD *)v3 + 95);
              *((_WORD *)v3 + 95) = v36;
            }
          }
        }
        else
          *((_BYTE *)v3 + 3424) = 1;
    return EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v41);
  do
    v31 = (Level *)Entity::getLevel(v3);
    if ( !Level::isClientSide(v31) && (*(int (**)(void))(*(_DWORD *)*v23 + 96))() == 1 )
      FallingBlock::_breakBlock(v3);
    ++v23;
  while ( v22 != v23 );
  return EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v41);
}


void __fastcall FallingBlock::readAdditionalSaveData(FallingBlock *this, const CompoundTag *a2)
{
  FallingBlock::readAdditionalSaveData(this, a2);
}


int __fastcall FallingBlock::_breakBlock(FallingBlock *this)
{
  Entity *v1; // r4@1
  __int16 v2; // r5@1
  BlockSource *v3; // r0@1
  BlockSource *v4; // r6@1
  Level *v5; // r0@2
  unsigned __int64 *v6; // r0@2
  void (__fastcall *v7)(Entity *, __int16 *, signed int); // r3@3
  int v8; // r7@4
  int v9; // r0@4
  __int16 v11; // [sp+8h] [bp-18h]@3

  v1 = this;
  v2 = SynchedEntityData::getInt((FallingBlock *)((char *)this + 176), 2);
  v3 = (BlockSource *)Entity::getRegion(v1);
  v4 = v3;
  if ( (_BYTE)v2 )
  {
    v5 = (Level *)BlockSource::getLevel(v3);
    v6 = (unsigned __int64 *)Level::getGameRules(v5);
    if ( GameRules::getBool(v6, (int **)&GameRules::DO_ENTITY_DROPS) == 1 )
    {
      v7 = *(void (__fastcall **)(Entity *, __int16 *, signed int))(*(_DWORD *)v1 + 444);
      v11 = v2;
      v7(v1, &v11, 1);
    }
  }
  v8 = BlockSource::getLevel(v4);
  v9 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v1 + 52))(v1);
  Level::broadcastDimensionEvent(v8, v4, 2001, v9, (unsigned __int8)v2);
  return (*(int (__fastcall **)(Entity *))(*(_DWORD *)v1 + 44))(v1);
}


int __fastcall FallingBlock::isPushableByPiston(FallingBlock *this)
{
  return 0;
}


int __fastcall FallingBlock::reloadHardcodedClient(int a1)
{
  int result; // r0@1

  _R4 = a1;
  result = (*(int (**)(void))(*(_DWORD *)a1 + 680))();
  __asm
  {
    VMOV.F32        S0, #0.5
    VLDR            S2, [R4,#0x134]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R4,#0x13C]
  }
  return result;
}


int __fastcall FallingBlock::getShadowHeightOffs(FallingBlock *this)
{
  return 0;
}


int __fastcall FallingBlock::FallingBlock(int a1, BlockSource *a2, int a3, int a4, char a5)
{
  BlockSource *v5; // r7@1
  int v6; // r8@1
  int v7; // r6@1
  void *v9; // r0@1
  int v14; // r1@2
  int v15; // r12@2
  int v16; // r2@2
  int v17; // r3@2
  int v18; // r1@2
  int v19; // r6@2
  _BOOL4 v20; // r0@2
  unsigned int *v22; // r2@6
  signed int v23; // r1@8
  int v24; // [sp+4h] [bp-24h]@1

  v5 = a2;
  v6 = a4;
  v7 = a3;
  _R4 = a1;
  sub_21E94B4((void **)&v24, "fallingBlock");
  Entity::Entity(_R4, v5, (int **)&v24);
  v9 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
  {
    v22 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    }
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  }
  *(_DWORD *)_R4 = &off_26F2894;
  *(_BYTE *)(_R4 + 3409) = a5;
  *(_DWORD *)(_R4 + 3412) = 0;
  *(_BYTE *)(_R4 + 3424) = 0;
  *(_BYTE *)(_R4 + 3425) = 0;
  *(_DWORD *)(_R4 + 3428) = 40;
  *(_DWORD *)(_R4 + 3432) = 0x40000000;
  Entity::enableAutoSendPosRot((Entity *)_R4, 1);
  *(_DWORD *)(_R4 + 248) = 37;
  *(_DWORD *)(_R4 + 3420) = 0;
  *(_BYTE *)(_R4 + 536) = 1;
  (*(void (__fastcall **)(int))(*(_DWORD *)_R4 + 680))(_R4);
  __asm
    VMOV.F32        S0, #0.5
    VLDR            S2, [R4,#0x134]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R4,#0x13C]
  *(_QWORD *)(_R4 + 108) = *(_QWORD *)&Vec3::ZERO;
  *(_DWORD *)(_R4 + 116) = dword_2822498;
  (*(void (__fastcall **)(int, int))(*(_DWORD *)_R4 + 48))(_R4, v7);
  v14 = *(_DWORD *)v7;
  v15 = _R4 + 84;
  *(_DWORD *)(_R4 + 96) = *(_DWORD *)v7;
  v16 = *(_DWORD *)(v7 + 4);
  *(_DWORD *)(_R4 + 100) = v16;
  v17 = *(_DWORD *)(v7 + 8);
  *(_DWORD *)(_R4 + 104) = v17;
  *(_DWORD *)v15 = v14;
  *(_DWORD *)(v15 + 4) = v16;
  *(_DWORD *)(v15 + 8) = v17;
  v18 = *(_BYTE *)v6;
  v19 = Block::mBlocks[v18];
  v20 = Block::hasProperty(Block::mBlocks[v18], v18, 4096LL);
  if ( v19 && v20 )
    *(_BYTE *)(_R4 + 3425) = (*(int (__fastcall **)(int))(*(_DWORD *)v19 + 508))(v19);
  Entity::setVariant((Entity *)_R4, *(_BYTE *)v6 | (*(_BYTE *)(v6 + 1) << 8));
  Entity::setStatusFlag(_R4, 45, 1);
  Entity::setStatusFlag(_R4, 46, 1);
  return _R4;
}


char *__fastcall FallingBlock::normalTick(FallingBlock *this)
{
  char *result; // r0@1
  Level *v6; // r0@3
  BlockSource *v7; // r9@5
  int v8; // r8@5
  int (*v9)(void); // r7@7
  __int16 v10; // r0@7
  AABB *v11; // r4@7
  int v12; // r0@7
  int v13; // r2@7
  int v14; // r3@7
  int v15; // r7@7
  int v16; // r3@7
  int v17; // r6@7
  int v18; // r7@7
  char *v19; // r6@7
  int v20; // r1@7
  int v21; // r12@7
  int v22; // r1@8
  AABB *v23; // r0@12
  AABB *v24; // r7@13
  AABB *v25; // lr@13
  int v26; // r3@14
  AABB *v27; // r2@15
  int v28; // r0@15
  int v29; // r3@15
  int v30; // r5@15
  int v31; // r6@15
  int v32; // r0@15
  int v33; // r4@15
  int v34; // r5@15
  int v35; // r6@15
  char v36; // r8@17
  AABB *v37; // r6@17
  __int64 v38; // r0@18
  int v39; // r5@26
  int v40; // r6@26
  int v41; // r7@26
  int v42; // r4@26
  int v43; // r6@26
  int v44; // r7@26
  unsigned __int64 *v45; // r5@26
  int v46; // r0@27
  int v48; // r0@34
  BlockSource *v49; // r5@37
  __int64 i; // r4@37
  int v51; // r0@43
  int v52; // r7@43
  _BOOL4 v53; // r6@45
  _BOOL4 v54; // r5@45
  int v55; // r0@53
  int v56; // r1@53
  int v57; // r0@55
  Block *v58; // r0@56
  int v59; // r0@57
  PistonBlockEntity *v60; // r0@57
  int v61; // [sp+8h] [bp-F8h]@7
  SynchedEntityData *v62; // [sp+Ch] [bp-F4h]@5
  int v63; // [sp+10h] [bp-F0h]@37
  signed int v64; // [sp+14h] [bp-ECh]@37
  int v65; // [sp+18h] [bp-E8h]@37
  char v66; // [sp+1Ch] [bp-E4h]@37
  int v67; // [sp+38h] [bp-C8h]@57
  int v68; // [sp+3Ch] [bp-C4h]@57
  int v69; // [sp+40h] [bp-C0h]@57
  __int16 v70; // [sp+44h] [bp-BCh]@54
  char v71; // [sp+48h] [bp-B8h]@42
  int v72; // [sp+4Ch] [bp-B4h]@42
  int v73; // [sp+50h] [bp-B0h]@42
  int v74; // [sp+54h] [bp-ACh]@42
  char v75; // [sp+58h] [bp-A8h]@42
  __int16 v76; // [sp+5Ch] [bp-A4h]@42
  int v77; // [sp+60h] [bp-A0h]@34
  int v78; // [sp+64h] [bp-9Ch]@34
  int v79; // [sp+68h] [bp-98h]@34
  int v80; // [sp+6Ch] [bp-94h]@26
  signed int v81; // [sp+70h] [bp-90h]@26
  int v82; // [sp+74h] [bp-8Ch]@26
  int v83; // [sp+78h] [bp-88h]@26
  int v84; // [sp+7Ch] [bp-84h]@26
  int v85; // [sp+80h] [bp-80h]@26
  int v86; // [sp+84h] [bp-7Ch]@26
  int v87; // [sp+88h] [bp-78h]@26
  int v88; // [sp+8Ch] [bp-74h]@26
  int v89; // [sp+90h] [bp-70h]@26
  char v90; // [sp+94h] [bp-6Ch]@26
  int v91; // [sp+B0h] [bp-50h]@7
  int v92; // [sp+B4h] [bp-4Ch]@7
  int v93; // [sp+B8h] [bp-48h]@7
  int v94; // [sp+BCh] [bp-44h]@7
  int v95; // [sp+C0h] [bp-40h]@7
  int v96; // [sp+C4h] [bp-3Ch]@7
  int v97; // [sp+C8h] [bp-38h]@7
  int v98; // [sp+D0h] [bp-30h]@5
  int v99; // [sp+D4h] [bp-2Ch]@34
  int v100; // [sp+D8h] [bp-28h]@34

  _R11 = this;
  result = (char *)*((_DWORD *)this + 853);
  if ( result != (char *)1 )
  {
    if ( result )
      return result;
    __asm { VLDR            S0, =-0.04 }
    *((_DWORD *)_R11 + 21) = *((_DWORD *)_R11 + 18);
    *((_DWORD *)_R11 + 22) = *((_DWORD *)_R11 + 19);
    *((_DWORD *)_R11 + 23) = *((_DWORD *)_R11 + 20);
    ++*((_DWORD *)_R11 + 855);
    __asm
    {
      VLDR            S2, [R11,#0x70]
      VADD.F32        S0, S2, S0
      VSTR            S0, [R11,#0x70]
    }
    (*(void (__fastcall **)(FallingBlock *, char *))(*(_DWORD *)_R11 + 76))(_R11, (char *)_R11 + 108);
      VLDR            S0, =0.98
      VLDR            S2, [R11,#0x6C]
      VMUL.F32        S2, S2, S0
      VSTR            S2, [R11,#0x6C]
      VSTR            S2, [R11,#0x70]
      VLDR            S2, [R11,#0x74]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [R11,#0x74]
    v6 = (Level *)Entity::getLevel(_R11);
    if ( Level::isClientSide(v6) || Entity::isRemoved(_R11) )
      goto LABEL_36;
    BlockPos::BlockPos((int)&v98, (int)_R11 + 72);
    v7 = (BlockSource *)Entity::getRegion(_R11);
    v62 = (FallingBlock *)((char *)_R11 + 176);
    v8 = Block::mBlocks[(unsigned __int8)SynchedEntityData::getInt((FallingBlock *)((char *)_R11 + 176), 2)];
    if ( v8 && !Entity::getStatusFlag((int)_R11, 45) )
      v9 = *(int (**)(void))(*(_DWORD *)v8 + 420);
      v10 = SynchedEntityData::getInt(v62, 2);
      v61 = v8;
      v11 = 0;
      v12 = v9();
      v13 = *(_DWORD *)v12;
      v14 = *(_DWORD *)(v12 + 4);
      v15 = *(_DWORD *)(v12 + 8);
      v12 += 12;
      v91 = v13;
      v92 = v14;
      v93 = v15;
      v16 = *(_DWORD *)(v12 + 4);
      v17 = *(_DWORD *)(v12 + 8);
      v18 = *(_DWORD *)(v12 + 12);
      v94 = *(_DWORD *)v12;
      v95 = v16;
      v96 = v17;
      v97 = v18;
      AABB::move((AABB *)&v91, (FallingBlock *)((char *)_R11 + 72));
      v19 = BlockSource::fetchAABBs(v7, (const AABB *)&v91, 1);
      v21 = *(_QWORD *)v19 >> 32;
      v20 = *(_QWORD *)v19;
      if ( v21 == v20 )
      {
        v22 = *(_QWORD *)v19 >> 32;
      }
      else
        if ( (unsigned int)(-1227133513 * ((v21 - v20) >> 2)) >= 0x924924A )
          sub_21E57F4();
        v23 = (AABB *)operator new(v21 - v20);
        v21 = *(_QWORD *)v19 >> 32;
        v22 = *(_QWORD *)v19;
        v11 = v23;
      v24 = v11;
      v25 = v11;
      if ( v22 != v21 )
        v24 = v11;
        v26 = v22;
        do
        {
          v27 = v24;
          v28 = *(_DWORD *)v26;
          v30 = *(_DWORD *)(v26 + 4);
          v31 = *(_DWORD *)(v26 + 8);
          v29 = v26 + 12;
          v22 += 28;
          v24 = (AABB *)((char *)v24 + 28);
          *(_DWORD *)v27 = v28;
          *((_DWORD *)v27 + 1) = v30;
          *((_DWORD *)v27 + 2) = v31;
          v27 = (AABB *)((char *)v27 + 12);
          v32 = *(_DWORD *)v29;
          v33 = *(_DWORD *)(v29 + 4);
          v34 = *(_DWORD *)(v29 + 8);
          v35 = *(_DWORD *)(v29 + 12);
          v26 = v22;
          *(_DWORD *)v27 = v32;
          *((_DWORD *)v27 + 1) = v33;
          *((_DWORD *)v27 + 2) = v34;
          *((_DWORD *)v27 + 3) = v35;
        }
        while ( v21 != v22 );
      if ( v25 == v24 )
        goto LABEL_63;
      v36 = 0;
      v37 = v25;
      do
        v38 = (unsigned int)AABB::intersects(v37, (const AABB *)&v91);
        _ZF = (AABB *)((char *)v24 - 28) == v37;
        v36 |= v38;
        v37 = (AABB *)((char *)v37 + 28);
        if ( _ZF )
          HIDWORD(v38) = 1;
      while ( !v38 );
      if ( !(v36 & 1) )
LABEL_63:
        Entity::setStatusFlag((int)_R11, 45, 1);
      if ( v25 )
        operator delete((void *)v25);
      v8 = v61;
    BlockPos::BlockPos((int)&v91, (int)_R11 + 72);
    v39 = Entity::getRegion(_R11);
    v40 = *((_DWORD *)_R11 + 67);
    v41 = *((_DWORD *)_R11 + 68);
    v83 = *((_DWORD *)_R11 + 66);
    v84 = v40;
    v85 = v41;
    v42 = *((_DWORD *)_R11 + 70);
    v43 = *((_DWORD *)_R11 + 71);
    v44 = *((_DWORD *)_R11 + 72);
    v86 = *((_DWORD *)_R11 + 69);
    v87 = v42;
    v88 = v43;
    v89 = v44;
    v80 = 0;
    v81 = 1065353216;
    v82 = 0;
    AABB::grow((AABB *)&v90, (const Vec3 *)&v83, (int)&v80);
    v45 = (unsigned __int64 *)BlockSource::fetchEntities(v39, 2870, (int)&v90, 0);
    if ( !v8 )
      goto LABEL_64;
    v46 = (*(int (__fastcall **)(int, FallingBlock *))(*(_DWORD *)v8 + 352))(v8, _R11);
    _ZF = v46 == 1;
    if ( v46 == 1 )
      _ZF = (unsigned int)*v45 == *v45 >> 32;
    if ( _ZF )
      __asm
        VLDR            S0, =0.7
        VLDR            S2, [R11,#0x6C]
        VMUL.F32        S2, S2, S0
        VSTR            S2, [R11,#0x6C]
        VLDR            S2, [R11,#0x74]
        VMUL.F32        S0, S2, S0
        VMOV.F32        S2, #-0.5
        VSTR            S0, [R11,#0x74]
        VLDR            S0, [R11,#0x70]
        VMUL.F32        S0, S0, S2
        VSTR            S0, [R11,#0x70]
      v48 = (*(int (__fastcall **)(FallingBlock *))(*(_DWORD *)_R11 + 52))(_R11);
      BlockPos::BlockPos((int)&v77, v48);
      v98 = v77;
      v99 = v78;
      v100 = v79;
      if ( !*((_BYTE *)_R11 + 3424) )
        v76 = SynchedEntityData::getInt(v62, 2);
        v72 = v98;
        v73 = v99 - 1;
        v74 = v100;
        BlockSource::getBlockAndData((BlockSource *)&v75, v7, (int)&v72);
        BlockSource::getBlockAndData((BlockSource *)&v71, v7, (int)&v98);
        if ( *(_BYTE *)(FullBlock::getBlock((FullBlock *)&v76) + 101) )
          v51 = FullBlock::getBlock((FullBlock *)&v75);
          v52 = (*(int (**)(void))(*(_DWORD *)v51 + 236))() ^ 1;
        else
          v52 = 1;
        v53 = Block::mBlocks[(unsigned __int8)v76];
        v54 = Block::hasProperty(Block::mBlocks[(unsigned __int8)v76], (unsigned __int8)v76, 4096LL);
        if ( v54 )
          v54 = v53;
        if ( v52 != 1 )
          goto LABEL_65;
        if ( (*(int (__fastcall **)(int, BlockSource *, int *, _DWORD))(*(_DWORD *)v8 + 232))(v8, v7, &v98, HIBYTE(v76)) == 1 )
          if ( v54 )
            (*(void (__fastcall **)(_BOOL4, BlockSource *, int *))(*(_DWORD *)v54 + 512))(v54, v7, &v98);
          *((_DWORD *)_R11 + 853) = 1;
          *(_QWORD *)((char *)_R11 + 108) = *(_QWORD *)&Vec3::ZERO;
          *((_DWORD *)_R11 + 29) = dword_2822498;
          *((_DWORD *)_R11 + 854) = 0;
          goto LABEL_36;
        if ( !v54 || (v55 = FullBlock::getBlock((FullBlock *)&v71), Block::hasProperty(v55, v56, 0x40000000LL) != 1) )
LABEL_65:
          v57 = FullBlock::getBlock((FullBlock *)&v75);
          if ( (*(int (**)(void))(*(_DWORD *)v57 + 356))() != 1
            || (v58 = (Block *)FullBlock::getBlock((FullBlock *)&v75), Block::hasBlockEntity(v58) != 1)
            || (v67 = v98,
                v68 = v99 - 1,
                v69 = v100,
                v59 = BlockSource::getBlockEntity(v7, (const BlockPos *)&v67),
                (v60 = (PistonBlockEntity *)(*(int (**)(void))(*(_DWORD *)v59 + 112))()) == 0)
            || *((_DWORD *)PistonBlockEntity::getFacingDir(v60, v7) + 1) <= 0 )
          {
            FallingBlock::_breakBlock(_R11);
          }
        v70 = v76;
        BlockSource::setBlockAndData((int)v7, (BlockPos *)&v98, (int)&v70, 3, 0);
        (*(void (__fastcall **)(_BOOL4, BlockSource *, int *))(*(_DWORD *)v54 + 512))(v54, v7, &v98);
        *((_DWORD *)_R11 + 853) = 1;
        *(_QWORD *)((char *)_R11 + 108) = *(_QWORD *)&Vec3::ZERO;
        *((_DWORD *)_R11 + 29) = dword_2822498;
        *((_DWORD *)_R11 + 854) = 0;
LABEL_36:
        result = (char *)(*(int (__fastcall **)(FallingBlock *))(*(_DWORD *)_R11 + 316))(_R11);
        if ( result == (char *)1 )
          v49 = (BlockSource *)Entity::getRegion(_R11);
          v63 = 1056964608;
          v64 = 1056964608;
          v65 = 1056964608;
          AABB::grow((AABB *)&v66, (FallingBlock *)((char *)_R11 + 264), (int)&v63);
          result = BlockSource::fetchEntities(v49, 0, (const AABB *)&v66);
          for ( i = *(_QWORD *)result; HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 4 )
            result = (char *)(*(int (**)(void))(**(_DWORD **)i + 488))();
            if ( result != (char *)66 )
              result = (char *)Entity::setCollidableMobNear(*(Entity **)i, 1);
        return result;
    else
LABEL_64:
      if ( *((_DWORD *)_R11 + 855) < 101 )
        goto LABEL_36;
        VLDR            S0, [R11,#0x4C]
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      if ( !(_NF ^ _VF) )
    (*(void (__fastcall **)(FallingBlock *))(*(_DWORD *)_R11 + 44))(_R11);
    goto LABEL_36;
  }
  result = (char *)*((_DWORD *)_R11 + 854);
  *((_DWORD *)_R11 + 854) = result + 1;
  if ( (signed int)result >= 2 )
    result = (char *)(*(int (__fastcall **)(FallingBlock *))(*(_DWORD *)_R11 + 44))(_R11);
  return result;
}


void __fastcall FallingBlock::~FallingBlock(FallingBlock *this)
{
  FallingBlock::~FallingBlock(this);
}


void __fastcall FallingBlock::addAdditionalSaveData(FallingBlock *this, CompoundTag *a2)
{
  FallingBlock::addAdditionalSaveData(this, a2);
}


signed int __fastcall FallingBlock::getEntityTypeId(FallingBlock *this)
{
  return 66;
}


int __fastcall FallingBlock::FallingBlock(int a1, int a2, int *a3)
{
  int v3; // r4@1

  v3 = a1;
  Entity::Entity(a1, a2, a3);
  *(_DWORD *)v3 = &off_26F2894;
  *(_BYTE *)(v3 + 3409) = 1;
  *(_DWORD *)(v3 + 3412) = 0;
  *(_BYTE *)(v3 + 3424) = 0;
  *(_BYTE *)(v3 + 3425) = 0;
  *(_DWORD *)(v3 + 3428) = 40;
  *(_DWORD *)(v3 + 3432) = 0x40000000;
  *(_DWORD *)(v3 + 248) = 37;
  Entity::enableAutoSendPosRot((Entity *)v3, 1);
  *(_DWORD *)(v3 + 3420) = 0;
  *(_BYTE *)(v3 + 536) = 1;
  Entity::setCollidableMob((Entity *)v3, 1);
  Entity::setStatusFlag(v3, 45, 1);
  Entity::setStatusFlag(v3, 46, 1);
  return v3;
}


int __fastcall FallingBlock::reloadHardcoded(int a1)
{
  _R4 = a1;
  (*(void (**)(void))(*(_DWORD *)a1 + 680))();
  __asm
  {
    VMOV.F32        S0, #0.5
    VLDR            S2, [R4,#0x134]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R4,#0x13C]
  }
  *(_QWORD *)(_R4 + 108) = *(_QWORD *)&Vec3::ZERO;
  *(_DWORD *)(_R4 + 116) = dword_2822498;
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)_R4 + 48))(_R4, _R4 + 72);
}


int __fastcall FallingBlock::setBlock(Entity *this, int a2, char a3)
{
  _BYTE *v3; // r6@1
  Entity *v4; // r5@1
  char v5; // r4@1
  int v6; // r1@1
  int v7; // r6@1
  int result; // r0@1

  v3 = (_BYTE *)a2;
  v4 = this;
  v5 = a3;
  Entity::setVariant(this, *(_BYTE *)a2 | (*(_BYTE *)(a2 + 1) << 8));
  v6 = *v3;
  v7 = Block::mBlocks[v6];
  result = Block::hasProperty(Block::mBlocks[v6], v6, 4096LL);
  if ( v7 )
  {
    result ^= 1u;
    if ( !result )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 508))(v7);
      *((_BYTE *)v4 + 3425) = result;
    }
  }
  *((_BYTE *)v4 + 3409) = v5;
  return result;
}
