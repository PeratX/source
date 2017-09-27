

int __fastcall ExperienceOrb::playerTouch(ExperienceOrb *this, Player *a2)
{
  Player *v2; // r5@1
  ExperienceOrb *v3; // r4@1
  Level *v4; // r0@1
  Level *v5; // r6@1
  int result; // r0@1
  char *v7; // r0@3
  int v8; // r8@5
  BlockSource *v9; // r7@5
  int v10; // r0@5
  void (__fastcall *v11)(Player *, int); // r7@6
  int v12; // r0@6

  v2 = a2;
  v3 = this;
  v4 = (Level *)Entity::getLevel(a2);
  v5 = v4;
  result = Level::isClientSide(v4);
  if ( !result )
  {
    result = (*(int (__fastcall **)(Player *))(*(_DWORD *)v2 + 316))(v2);
    if ( result == 1 )
    {
      v7 = Level::getRandom(v5);
      result = Random::_genRandInt32((Random *)v7) % 6;
      if ( !result )
      {
        v8 = Entity::getLevel(v3);
        v9 = (BlockSource *)Entity::getRegion(v3);
        v10 = (*(int (__fastcall **)(ExperienceOrb *))(*(_DWORD *)v3 + 52))(v3);
        Level::broadcastDimensionEvent(v8, v9, 1051, v10, 0);
        ExperienceOrb::handleMending(v3, v2);
        if ( SynchedEntityData::getInt((ExperienceOrb *)((char *)v3 + 176), 15) >= 1 )
        {
          v11 = *(void (__fastcall **)(Player *, int))(*(_DWORD *)v2 + 1452);
          v12 = SynchedEntityData::getInt((ExperienceOrb *)((char *)v3 + 176), 15);
          v11(v2, v12);
        }
        result = (*(int (__fastcall **)(ExperienceOrb *))(*(_DWORD *)v3 + 44))(v3);
      }
    }
  }
  return result;
}


int __fastcall ExperienceOrb::reloadHardcoded(Entity *this, int a2, unsigned __int64 *a3)
{
  Entity *v3; // r5@1
  unsigned __int64 *v4; // r7@1
  __int64 v5; // r0@1
  Level *v6; // r0@3
  char *v7; // r0@3
  Level *v13; // r0@3
  char *v14; // r0@3
  Level *v16; // r0@3
  char *v17; // r0@3
  Level *v19; // r0@3
  char *v20; // r0@3
  unsigned int v22; // r10@4
  unsigned __int64 v23; // kr00_8@4
  unsigned int v24; // r4@4
  int v25; // r7@4
  int v26; // r8@5
  _DWORD *v27; // r9@5
  int v28; // r5@5
  _DWORD *v29; // r1@7
  size_t v30; // r2@7
  Entity *v31; // r6@11
  Entity *v32; // r4@14
  unsigned int *v33; // r2@23
  signed int v34; // r1@25
  Entity *v36; // [sp+0h] [bp-50h]@5
  void *s1; // [sp+8h] [bp-48h]@4

  v3 = this;
  v4 = a3;
  LODWORD(v5) = *((_BYTE *)this + 3081);
  if ( !(_DWORD)v5 )
  {
    if ( a2 == 2 )
    {
      v6 = (Level *)Entity::getLevel(v3);
      v7 = Level::getRandom(v6);
      _R0 = Random::_genRandInt32((Random *)v7);
      __asm
      {
        VMOV            S0, R0
        VLDR            D8, =2.32830644e-10
        VLDR            S2, =360.0
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D8
        VCVT.F32.F64    S0, D0
        VMUL.F32        S0, S0, S2
        VSTR            S0, [R5,#0x7C]
      }
      v13 = (Level *)Entity::getLevel(v3);
      v14 = Level::getRandom(v13);
      _R0 = Random::_genRandInt32((Random *)v14);
        VLDR            S18, =0.4
        VLDR            S20, =-0.2
        VMUL.F32        S0, S0, S18
        VADD.F32        S0, S0, S20
        VSTR            S0, [R5,#0x6C]
      v16 = (Level *)Entity::getLevel(v3);
      v17 = Level::getRandom(v16);
      _R0 = Random::_genRandInt32((Random *)v17);
        VSTR            S0, [R5,#0x70]
      v19 = (Level *)Entity::getLevel(v3);
      v20 = Level::getRandom(v19);
      _R0 = Random::_genRandInt32((Random *)v20);
        VSTR            S0, [R5,#0x74]
    }
    Entity::setStatusFlag((int)v3, 47, 0);
    *((_DWORD *)v3 + 858) = 5;
    (*(void (__fastcall **)(Entity *, signed int, signed int))(*(_DWORD *)v3 + 680))(v3, 1048576000, 1048576000);
    *((_DWORD *)v3 + 856) = 0;
    *((_DWORD *)v3 + 857) = 0;
    sub_21E94B4(&s1, "other");
    v22 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
    v23 = *v4;
    v24 = v22 % (*v4 >> 32);
    v25 = *(_DWORD *)(*v4 + 4 * v24);
    if ( v25 )
      v26 = *(_DWORD *)v25;
      v36 = v3;
      v27 = s1;
      v28 = *(_DWORD *)(*(_DWORD *)v25 + 32);
      while ( 1 )
        if ( v28 == v22 )
        {
          v29 = *(_DWORD **)(v26 + 8);
          v30 = *(v27 - 3);
          if ( v30 == *(v29 - 3) && !memcmp(v27, v29, v30) )
            break;
        }
        if ( *(_DWORD *)v26 )
          v28 = *(_DWORD *)(v23 + 32);
          v25 = v26;
          v26 = *(_DWORD *)v26;
          if ( *(_DWORD *)(v23 + 32) % HIDWORD(v23) == v24 )
            continue;
        v31 = 0;
        v3 = v36;
        goto LABEL_13;
      v3 = v36;
      if ( v25 )
        if ( *(_DWORD *)v25 )
          v31 = *(Entity **)(*(_DWORD *)v25 + 24);
        else
          v31 = 0;
      else
    else
      v31 = 0;
LABEL_13:
    if ( v27 - 3 != &dword_28898C0 )
      v33 = v27 - 1;
      if ( &pthread_create )
        __dmb();
        do
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j__ZdlPv_9(v27 - 3);
    v32 = (Entity *)((char *)v3 + 3416);
    if ( v31 )
      v5 = *(_QWORD *)Entity::getUniqueID(v31);
      *(_QWORD *)v32 = v5;
      LODWORD(v5) = -1;
      *(_DWORD *)v32 = -1;
      *((_DWORD *)v3 + 855) = -1;
  }
  return v5;
}


int __fastcall ExperienceOrb::xpToDurability(ExperienceOrb *this, int a2)
{
  return 2 * a2;
}


int __fastcall ExperienceOrb::normalTick(ExperienceOrb *this)
{
  signed int v2; // r0@1
  int v3; // r0@3
  BlockSource *v8; // r8@3
  float v9; // r1@3
  int v10; // r7@3
  float v11; // r1@3
  int v12; // r5@3
  float v13; // r1@3
  int v14; // r0@3
  int *v15; // r0@3
  Level *v16; // r0@4
  char *v17; // r0@4
  Random *v18; // r5@4
  Level *v21; // r0@4
  char *v22; // r0@4
  Random *v23; // r5@4
  void (__fastcall *v26)(ExperienceOrb *, signed int, char *, signed int); // r7@4
  float v27; // r1@5
  int v28; // r5@6
  float v29; // r1@6
  int v30; // r6@6
  float v31; // r1@6
  int v32; // r0@6
  int v34; // r0@13
  Entity *v35; // r5@13
  signed int v36; // r6@13
  int v37; // r7@13
  const Vec3 *v38; // r0@15
  Dimension *v40; // r0@16
  Entity *v41; // r0@16
  signed __int64 v42; // r0@17
  int result; // r0@27
  float v45; // [sp+4h] [bp-5Ch]@25
  float v46; // [sp+10h] [bp-50h]@6
  char v49; // [sp+1Ch] [bp-44h]@4

  _R4 = this;
  Entity::normalTick(this);
  v2 = *((_DWORD *)_R4 + 857);
  *((_DWORD *)_R4 + 857) = v2 + 1;
  if ( v2 >= 5999 )
    (*(void (__fastcall **)(ExperienceOrb *))(*(_DWORD *)_R4 + 44))(_R4);
  v3 = Entity::getRegion(_R4);
  __asm
  {
    VLDR            S0, =-0.04
    VLDR            S2, [R4,#0x70]
  }
  v8 = (BlockSource *)v3;
    VADD.F32        S0, S2, S0
    VSTR            S0, [R4,#0x70]
  v10 = mce::Math::floor(*((mce::Math **)_R4 + 18), v9);
  v12 = mce::Math::floor(*((mce::Math **)_R4 + 19), v11);
  v14 = mce::Math::floor(*((mce::Math **)_R4 + 20), v13);
  v15 = (int *)BlockSource::getMaterial(v8, v10, v12, v14);
  if ( Material::isType(v15, 6) == 1 )
    *((_DWORD *)_R4 + 28) = 1045220557;
    v16 = (Level *)Entity::getLevel(_R4);
    v17 = Level::getRandom(v16);
    v18 = (Random *)v17;
    _R0 = Random::_genRandInt32((Random *)v17);
    __asm
    {
      VMOV            S0, R0
      VCVT.F64.U32    D8, S0
    }
    _R0 = Random::_genRandInt32(v18);
      VLDR            D9, =2.32830644e-10
      VCVT.F64.U32    D0, S0
      VMUL.F64        D1, D8, D9
      VMUL.F64        D0, D0, D9
      VCVT.F32.F64    S2, D1
      VCVT.F32.F64    S0, D0
      VSUB.F32        S0, S2, S0
      VLDR            S16, =0.2
      VMUL.F32        S0, S0, S16
      VSTR            S0, [R4,#0x6C]
    v21 = (Level *)Entity::getLevel(_R4);
    v22 = Level::getRandom(v21);
    v23 = (Random *)v22;
    _R0 = Random::_genRandInt32((Random *)v22);
      VCVT.F64.U32    D10, S0
    _R0 = Random::_genRandInt32(v23);
      VMUL.F64        D1, D10, D9
      VSTR            S0, [R4,#0x74]
    v26 = *(void (__fastcall **)(ExperienceOrb *, signed int, char *, signed int))(*(_DWORD *)_R4 + 556);
    Entity::getAttachPos((AABB *)&v49, (int)_R4, 1, 0);
    v26(_R4, 27, &v49, -1);
  (*(void (__fastcall **)(ExperienceOrb *, char *))(*(_DWORD *)_R4 + 732))(_R4, (char *)_R4 + 72);
  (*(void (__fastcall **)(ExperienceOrb *, char *))(*(_DWORD *)_R4 + 76))(_R4, (char *)_R4 + 108);
  __asm { VLDR            S16, =0.98 }
  if ( *((_BYTE *)_R4 + 216) )
    v28 = mce::Math::floor(*((mce::Math **)_R4 + 18), v27);
    v30 = mce::Math::floor(*((mce::Math **)_R4 + 67), v29);
    v32 = mce::Math::floor(*((mce::Math **)_R4 + 20), v31);
    BlockSource::getBlockID((BlockSource *)&v46, (int)v8, v28, v30 - 1, v32);
    if ( LOBYTE(v46) )
      _R0 = Block::getFriction((Block *)Block::mBlocks[LOBYTE(v46)]);
      __asm
      {
        VLDR            S0, =0.98
        VMOV            S2, R0
        VMUL.F32        S0, S2, S0
      }
    else
      __asm { VLDR            S0, =0.588 }
    *((_BYTE *)_R4 + 216);
  else
    __asm { VMOV.F32        S0, S16 }
    VLDR            S2, [R4,#0x6C]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R4,#0x6C]
    VMUL.F32        S4, S2, S16
    VSTR            S4, [R4,#0x70]
    VLDR            S4, [R4,#0x74]
    VMUL.F32        S0, S4, S0
    VSTR            S0, [R4,#0x74]
  if ( _ZF )
      VLDREQ          S0, =-0.49
      VMULEQ.F32      S0, S2, S0
      VSTREQ          S0, [R4,#0x70]
  v34 = Entity::getLevel(_R4);
  v35 = (Entity *)Level::fetchEntity(v34, 0, *((_DWORD *)_R4 + 854), *((_DWORD *)_R4 + 855), 0);
  v36 = *((_DWORD *)_R4 + 856);
  v37 = *((_DWORD *)_R4 + 104);
  if ( v36 < (signed int)(v37 - 20 - (unsigned __int64)(*(_QWORD *)Entity::getUniqueID(_R4) % 100LL)) )
    if ( !v35 )
      goto LABEL_30;
    v38 = (const Vec3 *)(*(int (__fastcall **)(ExperienceOrb *))(*(_DWORD *)_R4 + 52))(_R4);
    _R0 = Entity::distanceToSqr(v35, v38);
      VLDR            S0, =64.0
      VMOV            S2, R0
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
LABEL_30:
      v40 = (Dimension *)Entity::getDimension(_R4);
      v41 = (Entity *)Dimension::fetchNearestPlayer(v40, _R4, 8.0);
      v35 = v41;
      if ( v41 )
        v42 = *(_QWORD *)Entity::getUniqueID(v41);
      else
        v42 = -1LL;
      *((_QWORD *)_R4 + 427) = v42;
    *((_DWORD *)_R4 + 856) = *((_DWORD *)_R4 + 104);
  if ( v35 )
    Entity::getAttachPos((AABB *)&v46, (int)v35, 6, 0);
    _R0 = (*(int (__fastcall **)(ExperienceOrb *))(*(_DWORD *)_R4 + 52))(_R4);
      VLDR            S0, [R0]
      VMOV.F32        S12, #0.125
      VLDR            S4, [SP,#0x60+var_50]
      VLDR            S2, [R0,#4]
      VLDR            S8, [SP,#0x60+var_4C]
      VSUB.F32        S4, S4, S0
      VLDR            S6, [R0,#8]
      VSUB.F32        S2, S8, S2
      VLDR            S10, [SP,#0x60+var_48]
      VSUB.F32        S0, S10, S6
      VMUL.F32        S8, S4, S12
      VMUL.F32        S10, S2, S12
      VMUL.F32        S12, S0, S12
      VMUL.F32        S6, S8, S8
      VSTR            S8, [SP,#0x60+var_5C]
      VMUL.F32        S14, S10, S10
      VSTR            S10, [SP,#0x60+var_58]
      VMUL.F32        S1, S12, S12
      VSTR            S12, [SP,#0x60+var_54]
      VADD.F32        S6, S14, S6
      VLDR            S14, =0.15
      VADD.F32        S6, S6, S1
      VSQRT.F32       S6, S6
      VCMPE.F32       S6, S14
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      (*(void (__fastcall **)(ExperienceOrb *, float *))(*(_DWORD *)_R4 + 76))(_R4, &v45);
      if ( Entity::hasCategory((int)v35, 1) == 1 )
        (*(void (__fastcall **)(ExperienceOrb *, Entity *))(*(_DWORD *)_R4 + 268))(_R4, v35);
        VMOV.F32        S10, #1.0
        VSUB.F32        S8, S10, S6
        VCMPE.F32       S8, #0.0
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm
        {
          VDIV.F32        S6, S10, S6
          VLDR            S10, =0.0125
          VMUL.F32        S8, S8, S8
          VLDR            S12, [R4,#0x6C]
          VMUL.F32        S4, S4, S10
          VMUL.F32        S2, S2, S10
          VMUL.F32        S0, S0, S10
          VMUL.F32        S4, S4, S6
          VMUL.F32        S2, S2, S6
          VMUL.F32        S0, S0, S6
          VMUL.F32        S4, S4, S8
          VMUL.F32        S2, S2, S8
          VMUL.F32        S0, S0, S8
          VADD.F32        S4, S12, S4
          VSTR            S4, [R4,#0x6C]
          VLDR            S4, [R4,#0x70]
          VADD.F32        S2, S4, S2
          VSTR            S2, [R4,#0x70]
          VLDR            S2, [R4,#0x74]
          VADD.F32        S0, S2, S0
          VSTR            S0, [R4,#0x74]
        }
  result = *((_DWORD *)_R4 + 104) + 1;
  *((_DWORD *)_R4 + 104) = result;
  return result;
}


void __fastcall ExperienceOrb::spawnOrbs(BlockSource *a1, const Vec3 *a2, signed int a3, int a4, int a5, Player *a6)
{
  int v6; // r7@1
  signed int v7; // r4@1
  const Vec3 *v8; // r5@1
  BlockSource *v9; // r6@1
  Level *v10; // r0@1
  char *v11; // r0@1
  unsigned int v12; // r1@3

  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = a1;
  v10 = (Level *)BlockSource::getLevel(a1);
  v11 = Level::getRandom(v10);
  if ( v6 > v7 )
  {
    if ( v6 == v7 )
      v12 = 0;
    else
      v12 = Random::_genRandInt32((Random *)v11) % (v6 - v7);
    v7 += v12;
  }
  ExperienceOrb::spawnOrbs(v9, v8, v7, a5, a6);
}


void __fastcall ExperienceOrb::addAdditionalSaveData(ExperienceOrb *this, CompoundTag *a2)
{
  ExperienceOrb::addAdditionalSaveData(this, a2);
}


int __fastcall ExperienceOrb::isInvulnerableTo(ExperienceOrb *this, const EntityDamageSource *a2)
{
  const EntityDamageSource *v2; // r4@1
  Entity *v3; // r5@1
  int result; // r0@4

  v2 = a2;
  v3 = this;
  if ( EntityDamageSource::getCause(a2) == 7
    || EntityDamageSource::getCause(v2) == 11
    || EntityDamageSource::getCause(v2) == 13 )
  {
    result = Entity::isInvulnerableTo(v3, v2);
  }
  else
    result = 1;
  return result;
}


void __fastcall ExperienceOrb::readAdditionalSaveData(ExperienceOrb *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  ExperienceOrb *v3; // r6@1
  void *v4; // r0@1
  int v5; // r5@2
  int v6; // r0@2
  unsigned int v7; // r1@2
  unsigned int v8; // r1@4
  unsigned int v9; // r0@4
  void *v10; // r0@9
  unsigned int *v11; // r2@11
  signed int v12; // r1@13
  unsigned int *v13; // r2@15
  signed int v14; // r1@17
  int v15; // [sp+4h] [bp-2Ch]@2
  int v16; // [sp+Ch] [bp-24h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v16, "Age");
  *((_DWORD *)v3 + 857) = CompoundTag::getShort((int)v2, (const void **)&v16);
  v4 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v15, "experience value");
  v5 = CompoundTag::getInt((int)v2, (const void **)&v15);
  v6 = SynchedEntityData::_get((ExperienceOrb *)((char *)v3 + 176), 15);
  v7 = *(_DWORD *)(v6 + 4);
  if ( (unsigned __int8)v7 == 2 && *(_DWORD *)(v6 + 12) != v5 )
    *(_DWORD *)(v6 + 12) = v5;
    *(_BYTE *)(v6 + 8) = 1;
    v8 = v7 >> 16;
    v9 = *((_WORD *)v3 + 94);
    if ( v9 >= v8 )
      LOWORD(v9) = v8;
    *((_WORD *)v3 + 94) = v9;
    if ( *((_WORD *)v3 + 95) > v8 )
      LOWORD(v8) = *((_WORD *)v3 + 95);
    *((_WORD *)v3 + 95) = v8;
  v10 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v15 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
}


void __fastcall ExperienceOrb::~ExperienceOrb(ExperienceOrb *this)
{
  Entity *v1; // r0@1

  v1 = Entity::~Entity(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall ExperienceOrb::getIconIndex(ExperienceOrb *this)
{
  int v1; // r1@1
  signed int result; // r0@2

  v1 = SynchedEntityData::getInt((ExperienceOrb *)((char *)this + 176), 15);
  if ( v1 <= 2476 )
  {
    if ( v1 <= 1236 )
    {
      if ( v1 <= 616 )
      {
        if ( v1 <= 306 )
        {
          if ( v1 <= 148 )
          {
            if ( v1 <= 72 )
            {
              if ( v1 <= 36 )
              {
                if ( v1 <= 16 )
                {
                  if ( v1 <= 6 )
                  {
                    result = 0;
                    if ( v1 > 2 )
                      result = 1;
                  }
                  else
                    result = 2;
                }
                else
                  result = 3;
              }
              else
                result = 4;
            }
            else
              result = 5;
          }
          else
            result = 6;
        }
        else
          result = 7;
      }
      else
        result = 8;
    }
    else
      result = 9;
  }
  else
    result = 10;
  return result;
}


void __fastcall ExperienceOrb::readAdditionalSaveData(ExperienceOrb *this, const CompoundTag *a2)
{
  ExperienceOrb::readAdditionalSaveData(this, a2);
}


void __fastcall ExperienceOrb::spawnOrbs(BlockSource *a1, const Vec3 *a2, signed int a3, int a4, int a5, Player *a6)
{
  ExperienceOrb::spawnOrbs(a1, a2, a3, a4, a5, a6);
}


void __fastcall ExperienceOrb::addAdditionalSaveData(ExperienceOrb *this, CompoundTag *a2)
{
  CompoundTag *v2; // r6@1
  ExperienceOrb *v3; // r5@1
  void *v4; // r0@1
  int v5; // r0@2
  void *v6; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  int v11; // [sp+4h] [bp-2Ch]@2
  int v12; // [sp+Ch] [bp-24h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v12, "Age");
  CompoundTag::putShort((int)v2, (const void **)&v12, *((_WORD *)v3 + 1714));
  v4 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v12 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v11, "experience value");
  v5 = SynchedEntityData::getInt((ExperienceOrb *)((char *)v3 + 176), 15);
  CompoundTag::putInt((int)v2, (const void **)&v11, v5);
  v6 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
}


int __fastcall ExperienceOrb::durabilityToXP(ExperienceOrb *this, int a2)
{
  return a2 / 2;
}


signed int __fastcall ExperienceOrb::getEntityTypeId(ExperienceOrb *this)
{
  return 69;
}


int __fastcall ExperienceOrb::_hurt(ExperienceOrb *this, const EntityDamageSource *a2, int a3, bool a4, bool a5)
{
  ExperienceOrb *v5; // r4@1
  int v6; // r5@1
  int v7; // r0@1

  v5 = this;
  v6 = a3;
  (*(void (**)(void))(*(_DWORD *)this + 700))();
  v7 = *((_DWORD *)v5 + 858) - v6;
  *((_DWORD *)v5 + 858) = v7;
  if ( v7 <= 0 )
    (*(void (__fastcall **)(ExperienceOrb *))(*(_DWORD *)v5 + 44))(v5);
  return 0;
}


signed int __fastcall ExperienceOrb::truncateExperienceAmount(ExperienceOrb *this, int a2)
{
  ExperienceOrb *v2; // r1@1
  signed int result; // r0@2

  v2 = this;
  if ( (signed int)this <= 2476 )
  {
    if ( (signed int)this <= 1236 )
    {
      if ( (signed int)this <= 616 )
      {
        if ( (signed int)this <= 306 )
        {
          if ( (signed int)this <= 148 )
          {
            if ( (signed int)this <= 72 )
            {
              if ( (signed int)this <= 36 )
              {
                if ( (signed int)this <= 16 )
                {
                  if ( (signed int)this <= 6 )
                  {
                    result = 1;
                    if ( (signed int)v2 > 2 )
                      result = 3;
                  }
                  else
                    result = 7;
                }
                else
                  result = 17;
              }
              else
                result = 37;
            }
            else
              result = 73;
          }
          else
            result = 149;
        }
        else
          result = 307;
      }
      else
        result = 617;
    }
    else
      result = 1237;
  }
  else
    result = 2477;
  return result;
}


void __fastcall ExperienceOrb::spawnOrbs(Player *a1, const Vec3 *a2, signed int a3, int a4, Player *a5)
{
  ExperienceOrb::spawnOrbs(a1, a2, a3, a4, a5);
}


int __fastcall ExperienceOrb::getShadowRadius(ExperienceOrb *this)
{
  return 0;
}


void __fastcall ExperienceOrb::~ExperienceOrb(ExperienceOrb *this)
{
  ExperienceOrb::~ExperienceOrb(this);
}


unsigned int __fastcall ExperienceOrb::setValue(ExperienceOrb *this, int a2)
{
  ExperienceOrb *v2; // r4@1
  int v3; // r5@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = this;
  v3 = a2;
  result = SynchedEntityData::_get((ExperienceOrb *)((char *)this + 176), 15);
  v5 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v5 == 2 && *(_DWORD *)(result + 12) != v3 )
  {
    *(_DWORD *)(result + 12) = v3;
    *(_BYTE *)(result + 8) = 1;
    v6 = v5 >> 16;
    v7 = *((_WORD *)v2 + 94);
    if ( v7 >= v6 )
      LOWORD(v7) = v6;
    *((_WORD *)v2 + 94) = v7;
    result = *((_WORD *)v2 + 95);
    if ( result > v6 )
      LOWORD(v6) = *((_WORD *)v2 + 95);
    *((_WORD *)v2 + 95) = v6;
  }
  return result;
}


int __fastcall ExperienceOrb::ExperienceOrb(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int v4; // r6@2
  _BYTE *v5; // r0@2
  signed __int16 v6; // r5@2
  int v7; // r1@2
  unsigned int v8; // r0@4

  v3 = a1;
  Entity::Entity(a1, a2, a3);
  *(_DWORD *)v3 = &off_26F2284;
  *(_DWORD *)(v3 + 3416) = -1;
  *(_DWORD *)(v3 + 3420) = -1;
  *(_DWORD *)(v3 + 248) = 46;
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 15) )
  {
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 15);
    v4 = *(_DWORD *)(v3 + 176);
    v5 = operator new(0x10u);
    v5[4] = 2;
    v6 = 15;
    *((_WORD *)v5 + 3) = 15;
    v5[8] = 1;
    *(_DWORD *)v5 = &off_26F08C4;
    *((_DWORD *)v5 + 3) = 0;
    v7 = *(_DWORD *)(v4 + 60);
    *(_DWORD *)(v4 + 60) = v5;
    if ( v7 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
    v8 = *(_WORD *)(v3 + 188);
    if ( v8 >= 0xF )
      LOWORD(v8) = 15;
    *(_WORD *)(v3 + 188) = v8;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0xF )
      v6 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v6;
  }
  *(_DWORD *)(v3 + 172) |= 0x40000u;
  Entity::setStatusFlag(v3, 45, 1);
  return v3;
}


unsigned int __fastcall ExperienceOrb::handleMending(ExperienceOrb *this, Player *a2)
{
  Player *v2; // r4@1
  ExperienceOrb *v3; // r5@1
  _BYTE *v4; // r0@1
  int v5; // r6@1
  unsigned int result; // r0@1
  bool v7; // zf@1
  int v8; // r7@11
  int v9; // r8@11
  int v10; // r9@13
  int v11; // r0@13
  unsigned int v12; // r1@13
  int v13; // r2@14
  unsigned int v14; // r1@15
  unsigned int v15; // r0@15
  __int16 v16; // r0@20
  ItemInstance *v17; // r8@20
  signed int v18; // r7@20
  int v19; // r7@21
  ItemInstance *v20; // r8@24
  signed int v21; // r7@24
  int v22; // r7@25
  signed int v23; // r7@26
  ItemInstance *v24; // r8@27
  signed int v25; // r7@27
  int v26; // r7@28
  ItemInstance *v27; // r8@30
  signed int v28; // r7@30
  int v29; // r7@31
  ItemInstance *v30; // r8@33
  signed int v31; // r7@33
  int v32; // r7@34
  Level *v33; // r0@36
  int v34; // r0@36
  int v35; // [sp+0h] [bp-1A8h]@36
  char v36; // [sp+140h] [bp-68h]@11
  unsigned int v37; // [sp+148h] [bp-60h]@41
  void *v38; // [sp+164h] [bp-44h]@39
  void *ptr; // [sp+174h] [bp-34h]@37

  v2 = a2;
  v3 = this;
  v4 = EnchantUtils::getRandomItemWithMending(a2, a2);
  v5 = (int)v4;
  result = v4[15];
  v7 = result == 0;
  if ( result )
  {
    result = *(_DWORD *)v5;
    v7 = *(_DWORD *)v5 == 0;
  }
  if ( !v7 )
    result = ItemInstance::isNull((ItemInstance *)v5);
    if ( !result )
    {
      result = *(_WORD *)(v5 + 14);
      if ( (_BYTE)result )
      {
        if ( result >= 0x100 )
        {
          result = *(_DWORD *)v5;
          if ( *(_DWORD *)v5 )
          {
            result = ItemInstance::isNull((ItemInstance *)v5);
            if ( !result )
            {
              result = *(_BYTE *)(v5 + 14);
              if ( *(_BYTE *)(v5 + 14) )
              {
                result = ItemInstance::isDamaged((ItemInstance *)v5);
                if ( result == 1 )
                {
                  v8 = SynchedEntityData::getInt((ExperienceOrb *)((char *)v3 + 176), 15);
                  v9 = ItemInstance::getDamageValue((ItemInstance *)v5);
                  ItemInstance::ItemInstance((ItemInstance *)&v36, v5);
                  if ( v9 > 2 * v8 )
                    v9 = 2 * v8;
                  v10 = SynchedEntityData::getInt((ExperienceOrb *)((char *)v3 + 176), 15);
                  v11 = SynchedEntityData::_get((ExperienceOrb *)((char *)v3 + 176), 15);
                  v12 = *(_DWORD *)(v11 + 4);
                  if ( (unsigned __int8)v12 == 2 )
                  {
                    v13 = v10 - v9 / 2;
                    if ( *(_DWORD *)(v11 + 12) != v13 )
                    {
                      *(_DWORD *)(v11 + 12) = v13;
                      *(_BYTE *)(v11 + 8) = 1;
                      v14 = v12 >> 16;
                      v15 = *((_WORD *)v3 + 94);
                      if ( v15 >= v14 )
                        LOWORD(v15) = v14;
                      *((_WORD *)v3 + 94) = v15;
                      if ( *((_WORD *)v3 + 95) > v14 )
                        LOWORD(v14) = *((_WORD *)v3 + 95);
                      *((_WORD *)v3 + 95) = v14;
                    }
                  }
                  v16 = ItemInstance::getDamageValue((ItemInstance *)v5);
                  ItemInstance::setAuxValue((ItemInstance *)&v36, (signed __int16)(v16 - v9));
                  v17 = (ItemInstance *)Player::getSelectedItem(v2);
                  v18 = ItemInstance::getId(v17);
                  if ( v18 != ItemInstance::getId((ItemInstance *)v5)
                    || (v19 = ItemInstance::getAuxValue(v17), v19 != ItemInstance::getAuxValue((ItemInstance *)v5)) )
                    v20 = (ItemInstance *)(*(int (__fastcall **)(Player *, _DWORD))(*(_DWORD *)v2 + 1028))(v2, 0);
                    v21 = ItemInstance::getId(v20);
                    if ( v21 != ItemInstance::getId((ItemInstance *)v5)
                      || (v22 = ItemInstance::getAuxValue(v20), v22 != ItemInstance::getAuxValue((ItemInstance *)v5)) )
                      v24 = (ItemInstance *)(*(int (__fastcall **)(Player *, signed int))(*(_DWORD *)v2 + 1028))(v2, 1);
                      v25 = ItemInstance::getId(v24);
                      if ( v25 != ItemInstance::getId((ItemInstance *)v5)
                        || (v26 = ItemInstance::getAuxValue(v24), v26 != ItemInstance::getAuxValue((ItemInstance *)v5)) )
                      {
                        v27 = (ItemInstance *)(*(int (__fastcall **)(_DWORD, signed int))(*(_DWORD *)v2 + 1028))(v2, 2);
                        v28 = ItemInstance::getId(v27);
                        if ( v28 != ItemInstance::getId((ItemInstance *)v5)
                          || (v29 = ItemInstance::getAuxValue(v27), v29 != ItemInstance::getAuxValue((ItemInstance *)v5)) )
                        {
                          v30 = (ItemInstance *)(*(int (__fastcall **)(_DWORD, signed int))(*(_DWORD *)v2 + 1028))(
                                                  v2,
                                                  3);
                          v31 = ItemInstance::getId(v30);
                          if ( v31 != ItemInstance::getId((ItemInstance *)v5) )
                            goto LABEL_37;
                          v32 = ItemInstance::getAuxValue(v30);
                          if ( v32 != ItemInstance::getAuxValue((ItemInstance *)v5) )
                          v23 = 3;
                        }
                        else
                          v23 = 2;
                      }
                      else
                        v23 = 1;
                    else
                      v23 = 0;
                    InventoryTransactionManager::_createServerSideAction(
                      (Player *)((char *)v2 + 5152),
                      (const ItemInstance *)v5,
                      (const ItemInstance *)&v36);
                    (*(void (__fastcall **)(Player *, signed int, char *))(*(_DWORD *)v2 + 468))(v2, v23, &v36);
                    MobArmorEquipmentPacket::MobArmorEquipmentPacket((int)&v35, (int)v2);
                    v33 = (Level *)Entity::getLevel(v3);
                    v34 = Level::getPacketSender(v33);
                    (*(void (**)(void))(*(_DWORD *)v34 + 8))();
                    MobArmorEquipmentPacket::~MobArmorEquipmentPacket((MobArmorEquipmentPacket *)&v35);
                  else
                    Player::setSelectedItem(v2, (const ItemInstance *)&v36);
LABEL_37:
                  if ( ptr )
                    operator delete(ptr);
                  if ( v38 )
                    operator delete(v38);
                  result = v37;
                  if ( v37 )
                    result = (*(int (**)(void))(*(_DWORD *)v37 + 4))();
                  return result;
                }
              }
            }
          }
        }
      }
    }
  return result;
}


void __fastcall ExperienceOrb::spawnOrbs(Player *a1, const Vec3 *a2, signed int a3, int a4, Player *a5)
{
  int v5; // r6@1
  signed int v6; // r4@1
  const Vec3 *v7; // r5@1
  Player *v8; // r8@1
  Level *v9; // r0@1
  Level *v10; // r7@1
  unsigned __int64 *v11; // r0@4
  void **v12; // r1@4
  unsigned __int64 *v13; // r0@5
  int v14; // r0@5
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  unsigned int *v17; // r2@18
  signed int v18; // r1@20
  unsigned int *v19; // r2@22
  signed int v20; // r1@24
  int v21; // r11@39
  void *v22; // r0@60
  void *v23; // r0@61
  void *v24; // r0@62
  int v25; // r8@63
  int v26; // r0@64
  unsigned int v27; // r1@64
  unsigned int v28; // r1@66
  unsigned int v29; // r0@66
  int v30; // r1@71
  void (__fastcall *v31)(Level *, Player *, int *); // r3@71
  Player *v32; // [sp+Ch] [bp-44h]@5
  int v33; // [sp+14h] [bp-3Ch]@71
  int v34; // [sp+18h] [bp-38h]@22
  int v35; // [sp+1Ch] [bp-34h]@18
  int v36; // [sp+20h] [bp-30h]@14
  int v37; // [sp+24h] [bp-2Ch]@60

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  v9 = (Level *)BlockSource::getLevel(a1);
  v10 = v9;
  if ( v5 == 3 )
  {
    v13 = (unsigned __int64 *)Level::getGameRules(v9);
    v14 = GameRules::getBool(v13, (int **)&GameRules::KEEP_INVENTORY);
    v32 = v8;
    if ( v6 < 1 || !(v14 ^ 1) )
      return;
    goto LABEL_38;
  }
  if ( v5 == 2 )
    v11 = (unsigned __int64 *)Level::getGameRules(v9);
    v12 = &GameRules::DO_MOB_LOOT;
    goto LABEL_9;
  if ( v5 == 1 )
    v12 = &GameRules::DO_TILE_DROPS;
LABEL_9:
    if ( GameRules::getBool(v11, (int **)*v12) != 1 || v6 <= 0 )
  v32 = v8;
  if ( v6 < 1 )
    return;
  do
LABEL_38:
    if ( v6 <= 2476 )
    {
      if ( v6 <= 1236 )
      {
        if ( v6 <= 616 )
        {
          if ( v6 <= 306 )
          {
            if ( v6 <= 148 )
            {
              if ( v6 <= 72 )
              {
                if ( v6 <= 36 )
                {
                  if ( v6 <= 16 )
                  {
                    if ( v6 <= 6 )
                    {
                      v21 = 1;
                      if ( v6 > 2 )
                        v21 = 3;
                    }
                    else
                      v21 = 7;
                  }
                  else
                    v21 = 17;
                }
                else
                  v21 = 37;
              }
              else
                v21 = 73;
            }
            else
              v21 = 149;
          }
          else
            v21 = 307;
        }
        else
          v21 = 617;
      }
      else
        v21 = 1237;
    }
    else
      v21 = 2477;
    if ( Level::isClientSide(v10) == 1 )
      Player::spawnExperienceOrb(a5, v7, v21);
      EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v34, 69);
      EntityFactory::createSpawnedEntity((Entity **)&v37, (const void **)&v34, 0, (int)v7, &Vec2::ZERO);
      v22 = (void *)(v36 - 12);
      if ( (int *)(v36 - 12) != &dword_28898C0 )
        v15 = (unsigned int *)(v36 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      v23 = (void *)(v35 - 12);
      if ( (int *)(v35 - 12) != &dword_28898C0 )
        v17 = (unsigned int *)(v35 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v23);
      v24 = (void *)(v34 - 12);
      if ( (int *)(v34 - 12) != &dword_28898C0 )
        v19 = (unsigned int *)(v34 - 4);
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          v20 = (*v19)--;
        if ( v20 <= 0 )
          j_j_j_j__ZdlPv_9(v24);
      v25 = v37;
      if ( v37 )
        v26 = SynchedEntityData::_get((SynchedEntityData *)(v37 + 176), 15);
        v27 = *(_DWORD *)(v26 + 4);
        if ( (unsigned __int8)v27 == 2 && *(_DWORD *)(v26 + 12) != v21 )
          *(_DWORD *)(v26 + 12) = v21;
          *(_BYTE *)(v26 + 8) = 1;
          v28 = v27 >> 16;
          v29 = *(_WORD *)(v25 + 188);
          if ( v29 >= v28 )
            LOWORD(v29) = v28;
          *(_WORD *)(v25 + 188) = v29;
          if ( *(_WORD *)(v25 + 190) > v28 )
            LOWORD(v28) = *(_WORD *)(v25 + 190);
          *(_WORD *)(v25 + 190) = v28;
        v30 = v37;
        v31 = *(void (__fastcall **)(Level *, Player *, int *))(*(_DWORD *)v10 + 44);
        v37 = 0;
        v33 = v30;
        v31(v10, v32, &v33);
        if ( v33 )
          (*(void (**)(void))(*(_DWORD *)v33 + 32))();
        v33 = 0;
        if ( v37 )
          (*(void (**)(void))(*(_DWORD *)v37 + 32))();
    v6 -= v21;
  while ( v6 > 0 );
}
