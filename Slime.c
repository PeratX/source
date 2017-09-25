

int __fastcall Slime::justJumped(Slime *this)
{
  Slime *v1; // r4@1
  int v2; // r0@1
  unsigned int v3; // r1@1
  unsigned int v4; // r1@3
  unsigned int v5; // r0@3

  v1 = this;
  *((_DWORD *)this + 1076) = 1065353216;
  v2 = SynchedEntityData::_get((Slime *)((char *)this + 176), 25);
  v3 = *(_DWORD *)(v2 + 4);
  if ( !(_BYTE)v3 && *(_BYTE *)(v2 + 9) != 2 )
  {
    v4 = v3 >> 16;
    *(_WORD *)(v2 + 8) = 513;
    v5 = *((_WORD *)v1 + 94);
    if ( v5 >= v4 )
      LOWORD(v5) = v4;
    *((_WORD *)v1 + 94) = v5;
    if ( *((_WORD *)v1 + 95) > v4 )
      LOWORD(v4) = *((_WORD *)v1 + 95);
    *((_WORD *)v1 + 95) = v4;
  }
  return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v1 + 1220))(v1);
}


void __fastcall Slime::addAdditionalSaveData(Slime *this, CompoundTag *a2)
{
  Slime::addAdditionalSaveData(this, a2);
}


signed int __fastcall Slime::checkSpawnRules(Slime *this, int a2)
{
  int v3; // r5@1
  Level *v4; // r0@1
  char *v5; // r0@1
  BlockSource *v11; // r0@4
  Dimension *v12; // r0@4
  Mob *v15; // r0@8
  bool v16; // r1@8
  BlockSource *v17; // r0@9
  int v18; // r0@9
  BlockSource *v21; // r0@15
  Dimension *v22; // r0@15
  unsigned int v24; // r0@16
  signed int v25; // r2@16
  int v26; // r1@16
  int v27; // r0@17
  int *v28; // r4@17
  int v29; // r7@17
  __int64 v30; // kr00_8@18
  signed int v31; // r2@18
  unsigned int v32; // r0@18
  int v33; // r1@18
  int v34; // r0@19
  int *v35; // r4@19
  int v36; // r7@19
  signed int result; // r0@5
  int v38; // [sp+0h] [bp-A18h]@18
  unsigned int v39; // [sp+8h] [bp-A10h]@16
  unsigned int v40; // [sp+Ch] [bp-A0Ch]@16
  int v41; // [sp+9CCh] [bp-4Ch]@16
  char v42; // [sp+9D0h] [bp-48h]@16
  int v43; // [sp+9D4h] [bp-44h]@16
  int v44; // [sp+9D8h] [bp-40h]@18
  char v45; // [sp+9DCh] [bp-3Ch]@1

  _R9 = this;
  v3 = a2;
  BlockPos::BlockPos((int)&v45, (int)this + 72);
  v4 = (Level *)Entity::getLevel(_R9);
  v5 = Level::getLevelData(v4);
  if ( LevelData::getGenerator((LevelData *)v5) == 2 && (Random::_genRandInt32((Slime *)((char *)_R9 + 552)) & 3) != 1 )
  {
    result = 0;
  }
  else
    if ( v3 )
    {
      _R0 = Random::_genRandInt32((Slime *)((char *)_R9 + 552));
      __asm
      {
        VMOV            S0, R0
        VLDR            D8, =2.32830644e-10
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D8
        VCVT.F32.F64    S18, D0
      }
      v11 = (BlockSource *)Entity::getRegion(_R9);
      v12 = (Dimension *)BlockSource::getDimension(v11);
      _R0 = Dimension::getMoonBrightness(v12);
        VCMPE.F32       S18, S0
        VMRS            APSR_nzcv, FPSCR
      if ( !(_NF ^ _VF) )
        return 0;
        VMOV.F32        S2, #0.5
        VCVT.F32.F64    S0, D0
        VCMPE.F32       S0, S2
      v15 = _R9;
      v16 = 1;
    }
    else
      v17 = (BlockSource *)Entity::getRegion(_R9);
      v18 = BlockSource::getBiome(v17, (const BlockPos *)&v45);
      if ( (*(int (**)(void))(*(_DWORD *)v18 + 96))() != 1 )
        goto LABEL_29;
        VLDR            S0, [R9,#0x4C]
        VLDR            S2, =50.0
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        VLDR            S2, =70.0
        VCVT.F32.F64    S16, D0
      v21 = (BlockSource *)Entity::getRegion(_R9);
      v22 = (Dimension *)BlockSource::getDimension(v21);
      _R0 = Dimension::getMoonBrightness(v22);
        VCMPE.F32       S16, S0
LABEL_29:
        v24 = sub_21E67AC((int)&Random::mRandomDevice);
        v39 = v24;
        v25 = 1;
        v41 = 625;
        v26 = 0;
        v42 = 0;
        v43 = 0;
        v40 = v24;
        do
        {
          v27 = v24 ^ (v24 >> 30);
          v28 = (int *)(&v39 + v26);
          v29 = v26++ + 1812433253 * v27;
          v24 = v25++ + 1812433253 * v27;
          v28[2] = v29 + 1;
        }
        while ( v26 != 397 );
        v41 = 624;
        v44 = 398;
        ChunkPos::ChunkPos((ChunkPos *)&v38, (const BlockPos *)&v45);
        v30 = *(_QWORD *)&v38;
        Random::_checkThreadId((Random *)&v39);
        v31 = 1;
        v32 = 522133279 * v30 ^ HIDWORD(v30);
        v39 = 522133279 * v30 ^ HIDWORD(v30);
        v33 = 0;
        v40 = 522133279 * v30 ^ HIDWORD(v30);
          v34 = v32 ^ (v32 >> 30);
          v35 = (int *)(&v39 + v33);
          v36 = v33++ + 1812433253 * v34;
          v32 = v31++ + 1812433253 * v34;
          v35[2] = v36 + 1;
        while ( v33 != 397 );
        __asm { VLDR            S0, =40.0 }
        __asm
          VLDR            S2, [R9,#0x4C]
          VCMPE.F32       S2, S0
          VMRS            APSR_nzcv, FPSCR
        if ( !(_NF ^ _VF) || Random::_genRandInt32((Random *)&v39) % 0xA )
          return 0;
      v16 = 0;
    result = Mob::checkSpawnRules(v15, v16);
  return result;
}


int __fastcall Slime::playLandSound(Slime *this)
{
  Slime *v1; // r4@1
  int result; // r0@1
  int v3; // r5@2
  char v4; // [sp+4h] [bp-1Ch]@2

  v1 = this;
  result = (*(int (**)(void))(*(_DWORD *)this + 1216))();
  if ( result == 1 )
  {
    v3 = (*(int (__fastcall **)(Slime *))(*(_DWORD *)v1 + 1204))(v1);
    Entity::getAttachPos((AABB *)&v4, (int)v1, 0, 0);
    result = Entity::playSound((int)v1, v3, (int)&v4);
  }
  return result;
}


signed int __fastcall Slime::getEntityTypeId(Slime *this)
{
  return 2853;
}


signed int __fastcall Slime::remove(Slime *this)
{
  Slime *v1; // r4@1
  Level *v2; // r0@1
  signed int v3; // r5@4
  signed int v4; // r10@4
  int v5; // r6@7
  void (__fastcall *v6)(int, int, Entity **); // r7@7
  int v7; // r0@7
  Entity *v9; // [sp+4h] [bp-2Ch]@7
  Entity *v10; // [sp+8h] [bp-28h]@5

  v1 = this;
  v2 = (Level *)Entity::getLevel(this);
  if ( !Level::isClientSide(v2)
    && SynchedEntityData::getInt((Slime *)((char *)v1 + 176), 2) >= 2
    && Mob::getHealth(v1) <= 0 )
  {
    v3 = -1;
    v4 = Random::_genRandInt32((Slime *)((char *)v1 + 552)) % 3;
    do
    {
      (*(void (__fastcall **)(Entity **, Slime *, signed int))(*(_DWORD *)v1 + 1232))(&v10, v1, ++v3);
      if ( Mob::_isPersistent(v1) == 1 )
        Entity::setPersistent(v10);
      v5 = Entity::getLevel(v1);
      v6 = *(void (__fastcall **)(int, int, Entity **))(*(_DWORD *)v5 + 44);
      v7 = Entity::getRegion(v1);
      v9 = v10;
      v10 = 0;
      v6(v5, v7, &v9);
      if ( v9 )
        (*(void (**)(void))(*(_DWORD *)v9 + 32))();
      v9 = 0;
      if ( v10 )
        (*(void (**)(void))(*(_DWORD *)v10 + 32))();
    }
    while ( v3 <= v4 );
  }
  return Entity::remove(v1);
}


void __fastcall Slime::reloadHardcoded(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r5@1
  int v4; // r8@1
  void (__fastcall *v5)(int, signed int); // r4@3
  unsigned int v6; // r0@3
  _BOOL4 v7; // r4@4
  void *v8; // r0@4
  unsigned int v9; // r10@6
  unsigned __int64 v10; // kr08_8@6
  unsigned int v11; // r4@6
  int v12; // r7@6
  int v13; // r8@7
  _DWORD *v14; // r9@7
  int v15; // r5@7
  _DWORD *v16; // r1@9
  size_t v17; // r2@9
  int v18; // r6@13
  int v19; // r0@18
  unsigned int *v20; // r2@20
  signed int v21; // r1@22
  unsigned int *v22; // r2@33
  signed int v23; // r1@35
  int v24; // [sp+4h] [bp-44h]@7
  void *s1; // [sp+Ch] [bp-3Ch]@6
  int v26; // [sp+14h] [bp-34h]@4

  v3 = a3;
  v4 = a1;
  if ( a2 == 3 )
  {
    sub_21E94B4((void **)&v26, "other");
    v7 = VariantParameterList::hasParameter(v3, (int **)&v26);
    v8 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
    {
      v20 = (unsigned int *)(v26 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      }
      else
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    }
    if ( v7 == 1 )
      sub_21E94B4(&s1, "other");
      v9 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
      v10 = *v3;
      v11 = v9 % (*v3 >> 32);
      v12 = *(_DWORD *)(*v3 + 4 * v11);
      if ( v12 )
        v24 = v4;
        v13 = *(_DWORD *)v12;
        v14 = s1;
        v15 = *(_DWORD *)(*(_DWORD *)v12 + 32);
        while ( 1 )
        {
          if ( v15 == v9 )
          {
            v16 = *(_DWORD **)(v13 + 8);
            v17 = *(v14 - 3);
            if ( v17 == *(v16 - 3) && !memcmp(v14, v16, v17) )
              break;
          }
          if ( *(_DWORD *)v13 )
            v15 = *(_DWORD *)(v10 + 32);
            v12 = v13;
            v13 = *(_DWORD *)v13;
            if ( *(_DWORD *)(v10 + 32) % HIDWORD(v10) == v11 )
              continue;
          v18 = 0;
          v4 = v24;
          goto LABEL_15;
        }
        v4 = v24;
        if ( v12 )
          if ( *(_DWORD *)v12 )
            v18 = *(_DWORD *)(*(_DWORD *)v12 + 24);
          else
            v18 = 0;
        else
        v18 = 0;
LABEL_15:
      if ( v14 - 3 != &dword_28898C0 )
        v22 = v14 - 1;
        if ( &pthread_create )
          __dmb();
          do
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j__ZdlPv_9(v14 - 3);
      if ( v18 && Entity::hasType(v18, 2853) == 1 )
        v19 = SynchedEntityData::getInt((SynchedEntityData *)(v18 + 176), 2);
        (*(void (__fastcall **)(int, int))(*(_DWORD *)v4 + 1208))(v4, v19 / 2);
  }
  else if ( a2 == 2 )
    v5 = *(void (__fastcall **)(int, signed int))(*(_DWORD *)a1 + 1208);
    v6 = Random::_genRandInt32((Random *)(a1 + 552));
    v5(v4, 1 << v6 % 3);
}


void __fastcall Slime::setSlimeSize(Slime *this, int a2)
{
  Slime::setSlimeSize(this, a2);
}


signed int __fastcall Slime::getSquishSound(Slime *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = SynchedEntityData::getInt((Slime *)((char *)this + 176), 2);
  v2 = 23;
  if ( v1 > 1 )
    v2 = 22;
  return v2;
}


int __fastcall Slime::readAdditionalSaveData(Slime *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  Slime *v3; // r6@1
  int v4; // r5@1
  void *v5; // r0@1
  unsigned int *v7; // r2@5
  signed int v8; // r1@7
  int v9; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  Monster::readAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v9, "Size");
  v4 = CompoundTag::getByte((int)v2, (const void **)&v9);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  if ( !v4 )
    v4 = 1;
  return (*(int (__fastcall **)(Slime *, int))(*(_DWORD *)v3 + 1208))(v3, v4);
}


int __fastcall Slime::normalTick(Slime *this)
{
  Slime *v1; // r4@1
  Level *v2; // r0@1
  Level *v3; // r0@2
  int v10; // r6@5
  int v11; // r0@10
  unsigned int v12; // r1@10
  unsigned int v13; // r1@12
  unsigned int v14; // r0@12

  v1 = this;
  v2 = (Level *)Entity::getLevel(this);
  if ( !Level::isClientSide(v2) )
  {
    v3 = (Level *)Entity::getLevel(v1);
    if ( !Level::getDifficulty(v3) && SynchedEntityData::getInt((Slime *)((char *)v1 + 176), 2) >= 1 )
      (*(void (__fastcall **)(Slime *))(*(_DWORD *)v1 + 44))(v1);
  }
  _R0 = (int)v1 + 4312;
  _R5 = (Slime *)((char *)v1 + 4304);
  __asm
    VMOV.F32        S4, #0.5
    VLDR            S0, [R0]
    VLDR            S2, [R5]
    VSUB.F32        S2, S2, S0
    VMUL.F32        S2, S2, S4
    VADD.F32        S0, S2, S0
    VSTR            S0, [R0]
  v10 = *((_BYTE *)v1 + 216);
  Monster::normalTick(v1);
  if ( v10 || !*((_BYTE *)v1 + 216) )
    if ( v10 && !*((_BYTE *)v1 + 216) )
    {
      *(_DWORD *)_R5 = 1065353216;
      v11 = SynchedEntityData::_get((Slime *)((char *)v1 + 176), 25);
      v12 = *(_DWORD *)(v11 + 4);
      if ( !(_BYTE)v12 && *(_BYTE *)(v11 + 9) != 2 )
      {
        v13 = v12 >> 16;
        *(_WORD *)(v11 + 8) = 513;
        v14 = *((_WORD *)v1 + 94);
        if ( v14 >= v13 )
          LOWORD(v14) = v13;
        *((_WORD *)v1 + 94) = v14;
        if ( *((_WORD *)v1 + 95) > v13 )
          LOWORD(v13) = *((_WORD *)v1 + 95);
        *((_WORD *)v1 + 95) = v13;
      }
      (*(void (__fastcall **)(Slime *))(*(_DWORD *)v1 + 1220))(v1);
    }
  else
    Slime::justLanded(v1);
  return (*(int (__fastcall **)(Slime *))(*(_DWORD *)v1 + 1228))(v1);
}


int __fastcall Slime::justLanded(Slime *this)
{
  int v7; // r9@2
  unsigned int v10; // r0@3
  float v13; // r1@3
  float v15; // r1@3
  int v17; // r0@3
  int v19; // r0@4
  unsigned int v20; // r1@4
  unsigned int v21; // r1@6
  unsigned int v22; // r0@6
  SynchedEntityData *v24; // [sp+Ch] [bp-84h]@1
  int v25; // [sp+10h] [bp-80h]@2
  float v26; // [sp+20h] [bp-70h]@3
  char v27; // [sp+2Ch] [bp-64h]@3
  int v28; // [sp+30h] [bp-60h]@3

  _R4 = this;
  v24 = (Slime *)((char *)this + 176);
  _R0 = SynchedEntityData::getInt((Slime *)((char *)this + 176), 2);
  if ( _R0 >= 1 )
  {
    __asm { VMOV            S0, R0 }
    v25 = 8 * _R0;
    __asm
    {
      VMOV.F32        S16, #0.5
      VCVT.F32.S32    S0, S0
      VLDR            D11, =2.32830644e-10
    }
    v7 = 0;
    _R0 = &mce::Math::PI;
      VLDR            S2, [R0]
      VMUL.F32        S18, S0, S16
      VADD.F32        S20, S2, S2
    do
      _R0 = Random::_genRandInt32((Slime *)((char *)_R4 + 552));
      __asm
      {
        VMOV            S0, R0
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D11
        VCVT.F32.F64    S0, D0
        VMUL.F32        S24, S20, S0
      }
      v10 = Random::_genRandInt32((Slime *)((char *)_R4 + 552));
      __asm { VMOV            R7, S24 }
      _R5 = v10;
      _R8 = mce::Math::sin(_R7, v13);
      _R7 = mce::Math::cos(_R7, v15);
      Entity::_getBlockOnPos((Entity *)&v27, *(float *)&_R4);
        VMOV            S0, R5
        VMOV            S2, R8
        VMUL.F32        S0, S0, S16
        VMOV            S4, R7
        VMUL.F32        S2, S18, S2
        VMUL.F32        S4, S18, S4
        VADD.F32        S0, S0, S16
        VMUL.F32        S24, S2, S0
        VMUL.F32        S26, S4, S0
      v17 = Entity::getLevel(_R4);
      __asm { VLDR            S0, [R4,#0x48] }
      _R1 = v28 + 1;
        VLDR            S2, [R4,#0x50]
        VADD.F32        S0, S0, S24
        VMOV            S4, R1
        VADD.F32        S2, S2, S26
        VCVT.F32.S32    S4, S4
        VSTR            S0, [SP,#0x90+var_70]
        VSTR            S4, [SP,#0x90+var_6C]
        VSTR            S2, [SP,#0x90+var_68]
      Level::addParticle(v17, *((_DWORD *)_R4 + 1077), (int)&v26);
      ++v7;
    while ( v7 < v25 );
  }
  *((_DWORD *)_R4 + 1076) = -1090519040;
  v19 = SynchedEntityData::_get(v24, 25);
  v20 = *(_DWORD *)(v19 + 4);
  if ( !(_BYTE)v20 && *(_BYTE *)(v19 + 9) != 1 )
    v21 = v20 >> 16;
    *(_WORD *)(v19 + 8) = 257;
    v22 = *((_WORD *)_R4 + 94);
    if ( v22 >= v21 )
      LOWORD(v22) = v21;
    *((_WORD *)_R4 + 94) = v22;
    if ( *((_WORD *)_R4 + 95) > v21 )
      LOWORD(v21) = *((_WORD *)_R4 + 95);
    *((_WORD *)_R4 + 95) = v21;
  return (*(int (__fastcall **)(Slime *))(*(_DWORD *)_R4 + 1224))(_R4);
}


void __fastcall Slime::addAdditionalSaveData(Slime *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  Slime *v3; // r5@1
  char v4; // r0@1
  void *v5; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  Monster::addAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v8, "Size");
  v4 = SynchedEntityData::getInt((Slime *)((char *)v3 + 176), 2);
  CompoundTag::putByte((int)v2, (const void **)&v8, v4);
  v5 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
}


int __fastcall Slime::getExperienceReward(Slime *this)
{
  int result; // r0@2

  if ( *((_DWORD *)this + 861) < 1 )
    result = 0;
  else
    result = j_j_j__ZNK17SynchedEntityData6getIntEt_0((Slime *)((char *)this + 176), 2);
  return result;
}


int __fastcall Slime::playJumpSound(Slime *this)
{
  Slime *v1; // r4@1
  int result; // r0@1
  int v3; // r5@2
  char v4; // [sp+4h] [bp-1Ch]@2

  v1 = this;
  result = (*(int (**)(void))(*(_DWORD *)this + 1212))();
  if ( result == 1 )
  {
    v3 = (*(int (__fastcall **)(Slime *))(*(_DWORD *)v1 + 1204))(v1);
    Entity::getAttachPos((AABB *)&v4, (int)v1, 0, 0);
    result = Entity::playSound((int)v1, v3, (int)&v4);
  }
  return result;
}


signed int __fastcall Slime::doPlayJumpSound(Slime *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = SynchedEntityData::getInt((Slime *)((char *)this + 176), 2);
  v2 = 0;
  if ( v1 > 0 )
    v2 = 1;
  return v2;
}


EntityDamageByEntitySource *__fastcall Slime::playerTouch(Slime *this, Player *a2)
{
  Player *v2; // r5@1
  Entity *v3; // r4@1
  EntityDamageByEntitySource *result; // r0@1
  AttributeInstance *v5; // r0@4
  void (__fastcall *v12)(Entity *, signed int, char *, signed int); // r5@5
  char v13; // [sp+4h] [bp-44h]@5
  char v14; // [sp+10h] [bp-38h]@4

  v2 = a2;
  v3 = this;
  Mob::playerTouch(this, a2);
  result = (EntityDamageByEntitySource *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 1200))(v3);
  if ( result == (EntityDamageByEntitySource *)1 )
  {
    result = (EntityDamageByEntitySource *)(*(int (__fastcall **)(Entity *, Player *))(*(_DWORD *)v3 + 252))(v3, v2);
    if ( result == (EntityDamageByEntitySource *)1 )
    {
      result = (EntityDamageByEntitySource *)AABB::intersects(
                                               (Entity *)((char *)v3 + 264),
                                               (Player *)((char *)v2 + 264));
      if ( result == (EntityDamageByEntitySource *)1 )
      {
        EntityDamageByEntitySource::EntityDamageByEntitySource((int)&v14, v3, 2);
        v5 = (AttributeInstance *)(*(int (__fastcall **)(Entity *, void *))(*(_DWORD *)v3 + 1004))(
                                    v3,
                                    &SharedAttributes::ATTACK_DAMAGE);
        _R0 = AttributeInstance::getCurrentValue(v5);
        __asm
        {
          VMOV            S0, R0
          VCVTR.S32.F32   S0, S0
          VMOV            R2, S0
        }
        if ( Entity::hurt(v2, (const EntityDamageSource *)&v14, _R2, 1, 0) == 1 )
          v12 = *(void (__fastcall **)(Entity *, signed int, char *, signed int))(*(_DWORD *)v3 + 556);
          Entity::getAttachPos((AABB *)&v13, (int)v3, 2, 0);
          v12(v3, 40, &v13, -1);
          Entity::setPersistent(v3);
        result = EntityDamageByEntitySource::~EntityDamageByEntitySource((EntityDamageByEntitySource *)&v14);
      }
    }
  }
  return result;
}


signed int __fastcall Slime::doPlayLandSound(Slime *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = SynchedEntityData::getInt((Slime *)((char *)this + 176), 2);
  v2 = 0;
  if ( v1 > 2 )
    v2 = 1;
  return v2;
}


int __fastcall Slime::Slime(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int v4; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3
  int v8; // r6@9
  _BYTE *v9; // r0@9
  signed __int16 v10; // r5@9
  int v11; // r1@9
  unsigned int v12; // r0@11

  v3 = a1;
  Monster::Monster(a1, a2, a3);
  *(_DWORD *)v3 = &off_26F9C14;
  *(_DWORD *)(v3 + 4304) = 0;
  *(_DWORD *)(v3 + 4308) = 30;
  *(_DWORD *)(v3 + 4312) = 0;
  *(_DWORD *)(v3 + 4316) = 0;
  *(_DWORD *)(v3 + 248) = 25;
  v4 = SynchedEntityData::_get((SynchedEntityData *)(v3 + 176), 2);
  v5 = *(_DWORD *)(v4 + 4);
  if ( (unsigned __int8)v5 == 2 && *(_DWORD *)(v4 + 12) != 1 )
  {
    v6 = v5 >> 16;
    *(_DWORD *)(v4 + 12) = 1;
    *(_BYTE *)(v4 + 8) = 1;
    v7 = *(_WORD *)(v3 + 188);
    if ( v7 >= v6 )
      LOWORD(v7) = v6;
    *(_WORD *)(v3 + 188) = v7;
    if ( *(_WORD *)(v3 + 190) > v6 )
      LOWORD(v6) = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v6;
  }
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 25) )
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 25);
    v8 = *(_DWORD *)(v3 + 176);
    v9 = operator new(0xCu);
    v10 = 25;
    v9[4] = 0;
    *((_WORD *)v9 + 3) = 25;
    v9[8] = 1;
    *(_DWORD *)v9 = &off_26F1394;
    v9[9] = 0;
    v11 = *(_DWORD *)(v8 + 100);
    *(_DWORD *)(v8 + 100) = v9;
    if ( v11 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 4))(v11);
    v12 = *(_WORD *)(v3 + 188);
    if ( v12 >= 0x19 )
      LOWORD(v12) = 25;
    *(_WORD *)(v3 + 188) = v12;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x19 )
      v10 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v10;
  return v3;
}


int __fastcall Slime::createChild(Slime *this, int a2)
{
  Entity *v2; // r5@1
  Slime *v3; // r4@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  int result; // r0@5
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  unsigned int *v13; // r2@14
  signed int v14; // r1@16
  unsigned int *v15; // r2@18
  signed int v16; // r1@20
  int v17; // [sp+0h] [bp-28h]@1
  int v18; // [sp+4h] [bp-24h]@1
  int v19; // [sp+8h] [bp-20h]@2
  int v20; // [sp+Ch] [bp-1Ch]@1
  int v21; // [sp+10h] [bp-18h]@1

  v2 = (Entity *)a2;
  v3 = this;
  EntityTypeToString((void **)&v17, 0xB25u, 1);
  EntityDefinitionIdentifier::EntityDefinitionIdentifier((int)&v18, &v17);
  EntityFactory::createBornEntity((EntityFactory *)&v21, (const EntityDefinitionIdentifier *)&v18, v2);
  v4 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v20 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v19 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v18 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  result = v21;
  *(_DWORD *)v3 = v21;
  return result;
}


void __fastcall Slime::onSynchedDataUpdate(Slime *this, int a2)
{
  Slime::onSynchedDataUpdate(this, a2);
}


signed int __fastcall Slime::canDealDamage(Slime *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = SynchedEntityData::getInt((Slime *)((char *)this + 176), 2);
  v2 = 0;
  if ( v1 > 1 )
    v2 = 1;
  return v2;
}


void __fastcall Slime::setSlimeSize(Slime *this, int a2)
{
  Slime *v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3
  void *v8; // r0@9
  unsigned int *v9; // r2@10
  signed int v10; // r1@12
  int v11; // [sp+8h] [bp-28h]@20
  int v12; // [sp+10h] [bp-20h]@15
  int v13; // [sp+18h] [bp-18h]@9

  v2 = this;
  v3 = a2;
  v4 = SynchedEntityData::_get((Slime *)((char *)this + 176), 2);
  v5 = *(_DWORD *)(v4 + 4);
  if ( (unsigned __int8)v5 == 2 && *(_DWORD *)(v4 + 12) != v3 )
  {
    *(_DWORD *)(v4 + 12) = v3;
    *(_BYTE *)(v4 + 8) = 1;
    v6 = v5 >> 16;
    v7 = *((_WORD *)v2 + 94);
    if ( v7 >= v6 )
      LOWORD(v7) = v6;
    *((_WORD *)v2 + 94) = v7;
    if ( *((_WORD *)v2 + 95) > v6 )
      LOWORD(v6) = *((_WORD *)v2 + 95);
    *((_WORD *)v2 + 95) = v6;
  }
  if ( v3 > 1 )
    if ( v3 == 2 )
    {
      sub_21E94B4((void **)&v12, "minecraft:slime_medium");
      Entity::addDefinitionGroup((int)v2, (int **)&v12);
      v8 = (void *)(v12 - 12);
      if ( (int *)(v12 - 12) == &dword_28898C0 )
        return;
      v9 = (unsigned int *)(v12 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        goto LABEL_26;
      }
    }
    else
      sub_21E94B4((void **)&v11, "minecraft:slime_large");
      Entity::addDefinitionGroup((int)v2, (int **)&v11);
      v8 = (void *)(v11 - 12);
      if ( (int *)(v11 - 12) == &dword_28898C0 )
      v9 = (unsigned int *)(v11 - 4);
  else
    sub_21E94B4((void **)&v13, "minecraft:slime_small");
    Entity::addDefinitionGroup((int)v2, (int **)&v13);
    v8 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) == &dword_28898C0 )
      return;
    v9 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      goto LABEL_26;
  v10 = (*v9)--;
LABEL_26:
  if ( v10 <= 0 )
    j_j_j_j__ZdlPv_9(v8);
}


int __fastcall Slime::findAttackTarget(Slime *this)
{
  Entity *v1; // r4@1
  int result; // r0@2
  Dimension *v8; // r0@3

  v1 = this;
  _R0 = (*(int (**)(void))(*(_DWORD *)this + 260))();
  __asm
  {
    VMOV.F32        S0, #0.5
    VMOV            S2, R0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    v8 = (Dimension *)Entity::getDimension(v1);
    result = Dimension::fetchNearestPlayer(v8, v1, 16.0);
  else
    result = 0;
  return result;
}


void __fastcall Slime::reloadHardcoded(int a1, int a2, unsigned __int64 *a3)
{
  Slime::reloadHardcoded(a1, a2, a3);
}


int __fastcall Slime::getShadowRadius(Slime *this)
{
  int result; // r0@1

  _R0 = SynchedEntityData::getInt((Slime *)((char *)this + 176), 2);
  __asm
  {
    VMOV            S2, R0
    VMOV.F32        S0, #0.25
    VCVT.F32.S32    S2, S2
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


void __fastcall Slime::onSynchedDataUpdate(Slime *this, int a2)
{
  int v2; // r4@1
  Slime *v3; // r5@1
  int v4; // r0@2
  int v5; // r0@5
  unsigned int v6; // r1@5
  unsigned int v7; // r1@7
  unsigned int v8; // r0@7

  v2 = a2;
  v3 = this;
  if ( a2 == 25 )
  {
    v4 = (unsigned __int8)SynchedEntityData::getInt8((Slime *)((char *)this + 176), 25);
    if ( (unsigned __int8)v4 == 2 )
    {
      *((_DWORD *)v3 + 1076) = 1065353216;
      v5 = SynchedEntityData::_get((Slime *)((char *)v3 + 176), 25);
      v6 = *(_DWORD *)(v5 + 4);
      if ( !(_BYTE)v6 && *(_BYTE *)(v5 + 9) != 2 )
      {
        v7 = v6 >> 16;
        *(_WORD *)(v5 + 8) = 513;
        v8 = *((_WORD *)v3 + 94);
        if ( v8 >= v7 )
          LOWORD(v8) = v7;
        *((_WORD *)v3 + 94) = v8;
        if ( *((_WORD *)v3 + 95) > v7 )
          LOWORD(v7) = *((_WORD *)v3 + 95);
        *((_WORD *)v3 + 95) = v7;
      }
      (*(void (__fastcall **)(Slime *))(*(_DWORD *)v3 + 1220))(v3);
    }
    else if ( v4 == 1 )
      Slime::justLanded(v3);
  }
  j_j_j__ZN6Entity19onSynchedDataUpdateEi_0(v3, v2);
}


void __fastcall Slime::~Slime(Slime *this)
{
  Slime::~Slime(this);
}


signed int __fastcall Slime::useNewAi(Slime *this)
{
  return 1;
}


char *__fastcall Slime::decreaseSquish(Slime *this)
{
  char *result; // r0@1

  result = (char *)this + 4304;
  __asm
  {
    VLDR            S0, =0.6
    VLDR            S2, [R0]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R0]
  }
  return result;
}


void __fastcall Slime::~Slime(Slime *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}
