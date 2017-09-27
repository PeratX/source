

signed int __fastcall Ghast::getAmbientSoundPostponeTicks(Ghast *this)
{
  signed int result; // r0@2
  float v6; // [sp+4h] [bp-Ch]@1

  v6 = 0.0;
  if ( Entity::getAmbientSoundIntervalMin(this, &v6) == 1 )
  {
    __asm
    {
      VMOV.F32        S0, #20.0
      VLDR            S2, [SP,#0x10+var_C]
      VMUL.F32        S0, S2, S0
      VCVTR.S32.F32   S0, S0
      VMOV            R0, S0
    }
  }
  else
    result = 100;
  return result;
}


signed int __fastcall Ghast::_canReach(Ghast *this, const Vec3 *_R1, float _R2)
{
  char *v8; // r0@1
  int v9; // r2@1
  int v10; // r3@1
  int v11; // r7@1
  int v12; // r3@1
  int v13; // r6@1
  int v14; // r7@1
  BlockSource *v16; // r0@3
  char *v17; // r0@3
  signed int result; // r0@5
  int v19; // [sp+0h] [bp-48h]@1
  int v20; // [sp+4h] [bp-44h]@1
  int v21; // [sp+8h] [bp-40h]@1
  int v22; // [sp+Ch] [bp-3Ch]@1
  int v23; // [sp+10h] [bp-38h]@1
  int v24; // [sp+14h] [bp-34h]@1
  int v25; // [sp+18h] [bp-30h]@1
  float v26; // [sp+1Ch] [bp-2Ch]@3

  __asm { VMOV.F32        S0, #1.0 }
  _R4 = this;
  __asm
  {
    VMOV            S16, R2
    VLDR            S4, [R4,#0x48]
    VLDR            S10, [R1]
  }
  v8 = (char *)this + 264;
    VLDR            S6, [R4,#0x4C]
    VLDR            S12, [R1,#4]
    VSUB.F32        S4, S10, S4
    VLDR            S14, [R1,#8]
    VLDR            S8, [R4,#0x50]
    VSUB.F32        S6, S12, S6
    VDIV.F32        S2, S0, S16
    VSUB.F32        S8, S14, S8
    VMUL.F32        S4, S4, S2
    VMUL.F32        S6, S6, S2
    VCMPE.F32       S16, S0
    VMRS            APSR_nzcv, FPSCR
    VMUL.F32        S2, S8, S2
    VSTR            S4, [SP,#0x48+var_2C]
    VSTR            S6, [SP,#0x48+var_28]
    VSTR            S2, [SP,#0x48+var_24]
  v9 = *(_DWORD *)v8;
  v10 = *((_DWORD *)v8 + 1);
  v11 = *((_DWORD *)v8 + 2);
  v8 += 12;
  v19 = v9;
  v20 = v10;
  v21 = v11;
  v12 = *((_DWORD *)v8 + 1);
  v13 = *((_DWORD *)v8 + 2);
  v14 = *((_DWORD *)v8 + 3);
  v22 = *(_DWORD *)v8;
  v23 = v12;
  v24 = v13;
  v25 = v14;
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    result = 1;
  else
    _R7 = 2;
    while ( 1 )
    {
      AABB::move((AABB *)&v19, (const Vec3 *)&v26);
      v16 = (BlockSource *)Entity::getRegion(_R4);
      v17 = BlockSource::fetchAABBs(v16, (const AABB *)&v19, 1);
      if ( (unsigned int)*(_QWORD *)v17 != *(_QWORD *)v17 >> 32 )
        break;
      __asm { VMOV            S0, R7 }
      ++_R7;
      __asm
      {
        VCVT.F32.S32    S0, S0
        VCMPE.F32       S0, S16
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !(_NF ^ _VF) )
        return 1;
    }
    result = 0;
  return result;
}


Entity *__fastcall Ghast::~Ghast(Ghast *this)
{
  Ghast *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26F70FC;
  *((_DWORD *)this + 1074) = &off_26F4C40;
  *((_DWORD *)this + 1075) = 0;
  *((_DWORD *)this + 1077) = -1;
  *((_DWORD *)this + 1076) = -1;
  *((_BYTE *)this + 4316) = 0;
  v2 = *((_DWORD *)this + 1078);
  if ( v2 )
    Level::unregisterTemporaryPointer(v2, (unsigned int)v1 + 4296);
  *((_DWORD *)v1 + 1078) = 0;
  return j_j_j__ZN3MobD2Ev_0(v1);
}


void __fastcall Ghast::addAdditionalSaveData(Ghast *this, CompoundTag *a2)
{
  Ghast::addAdditionalSaveData(this, a2);
}


Ghast *__fastcall Ghast::newServerAiStep(Ghast *this)
{
  Level *v2; // r0@1
  Level *v3; // r0@2
  int v4; // r0@4
  __int64 v5; // r2@4
  int v6; // r6@4
  int v7; // r0@8
  int v8; // r0@9
  _BYTE *v9; // r11@12
  int v10; // r0@13
  int v11; // r0@15
  Player **v12; // r5@18
  Entity *v13; // r0@18
  int v14; // r0@21
  unsigned int v15; // r3@22
  unsigned int v16; // r2@22
  int v17; // r0@23
  int v18; // r0@27
  int v19; // r0@31
  int v20; // r0@33
  int v21; // r1@37
  Dimension *v22; // r0@38
  Player *v23; // r0@38
  Player *v24; // r6@38
  int v25; // r0@42
  int v26; // r0@43
  int v27; // r0@48
  int v28; // r0@50
  int v34; // r0@57
  int v35; // r0@59
  __int64 v40; // r0@63
  Ghast *result; // r0@64

  _R4 = this;
  Mob::newServerAiStep(this);
  v2 = (Level *)Entity::getLevel(_R4);
  if ( !Level::isClientSide(v2) )
  {
    v3 = (Level *)Entity::getLevel(_R4);
    if ( !Level::getDifficulty(v3) )
      (*(void (__fastcall **)(Ghast *))(*(_DWORD *)_R4 + 44))(_R4);
  }
  *((_DWORD *)_R4 + 1084) = *((_DWORD *)_R4 + 1085);
  v4 = Entity::getTarget(_R4);
  v6 = v4;
  if ( v4 && Entity::hasCategory(v4, 1) == 1 && *((_DWORD *)_R4 + 1075) != v6 )
    if ( *(_DWORD *)(v6 + 3092) )
    {
      *((_QWORD *)_R4 + 538) = *(_QWORD *)Entity::getUniqueID((Entity *)v6);
      v7 = *(_DWORD *)(v6 + 3092);
      *((_DWORD *)_R4 + 1078) = v7;
      Level::registerTemporaryPointer(v7, (unsigned int)_R4 + 4296);
      *((_BYTE *)_R4 + 4316) = 0;
    }
    else
      *((_DWORD *)_R4 + 1075) = 0;
      *((_DWORD *)_R4 + 1077) = -1;
      *((_DWORD *)_R4 + 1076) = -1;
      v8 = *((_DWORD *)_R4 + 1078);
      if ( v8 )
        Level::unregisterTemporaryPointer(v8, (unsigned int)_R4 + 4296);
      *((_DWORD *)_R4 + 1078) = 0;
  v9 = (char *)_R4 + 4316;
  if ( !*((_BYTE *)_R4 + 4316) )
    v10 = *((_DWORD *)_R4 + 1078);
    if ( v10 )
      v5 = *((_QWORD *)_R4 + 538);
      if ( ((unsigned int)v5 & HIDWORD(v5)) != -1 )
      {
        v11 = Level::fetchEntity(v10, v5 & HIDWORD(v5), v5, HIDWORD(v5), 0);
        *((_DWORD *)_R4 + 1075) = v11;
        if ( !v11 )
          *((_DWORD *)_R4 + 1075) = Level::fetchEntity(
                                      *((_DWORD *)_R4 + 1078),
                                      4300,
                                      *((_QWORD *)_R4 + 538),
                                      *((_QWORD *)_R4 + 538) >> 32,
                                      0);
      }
    *v9 = 1;
  v12 = (Player **)((char *)_R4 + 4300);
  v13 = (Entity *)*((_DWORD *)_R4 + 1075);
  if ( v13 )
    if ( Entity::isRemoved(v13) )
      goto LABEL_67;
    if ( !*v9 )
      v14 = *((_DWORD *)_R4 + 1078);
      if ( v14 )
        v15 = *((_DWORD *)_R4 + 1077);
        v16 = *((_DWORD *)_R4 + 1076);
        if ( (v16 & v15) != -1 )
        {
          v17 = Level::fetchEntity(v14, v16 & v15, v16, v15, 0);
          *v12 = (Player *)v17;
          if ( !v17 )
            *v12 = (Player *)Level::fetchEntity(
                               *((_DWORD *)_R4 + 1078),
                               (int)_R4 + 4304,
                               *((_QWORD *)_R4 + 538),
                               *((_QWORD *)_R4 + 538) >> 32,
                               0);
        }
      *v9 = 1;
    if ( Player::isInCreativeMode(*v12) == 1 )
LABEL_67:
      *v12 = 0;
      *v9 = 0;
      v18 = *((_DWORD *)_R4 + 1078);
      if ( v18 )
        Level::unregisterTemporaryPointer(v18, (unsigned int)_R4 + 4296);
  if ( !*v9 )
    v19 = *((_DWORD *)_R4 + 1078);
    if ( v19 )
        v20 = Level::fetchEntity(v19, v5 & HIDWORD(v5), v5, HIDWORD(v5), 0);
        *v12 = (Player *)v20;
        if ( !v20 )
          *v12 = (Player *)Level::fetchEntity(
                             *((_DWORD *)_R4 + 1078),
                             (int)_R4 + 4304,
                             *((_QWORD *)_R4 + 538),
                             *((_QWORD *)_R4 + 538) >> 32,
                             0);
  if ( !*v12 || (v21 = *((_DWORD *)_R4 + 1083), LODWORD(v5) = v21 - 1, *((_DWORD *)_R4 + 1083) = v21 - 1, v21 <= 0) )
    v22 = (Dimension *)Entity::getDimension(_R4);
    v23 = (Player *)Dimension::fetchNearestPlayer(v22, _R4, 100.0);
    v24 = v23;
    if ( v23 )
      if ( !Player::isInCreativeMode(v23) )
        *((_DWORD *)_R4 + 1083) = 20;
        if ( *v12 != v24 )
          if ( *((_DWORD *)v24 + 773) )
          {
            *((_QWORD *)_R4 + 538) = *(_QWORD *)Entity::getUniqueID(v24);
            v25 = *((_DWORD *)v24 + 773);
            *((_DWORD *)_R4 + 1078) = v25;
            Level::registerTemporaryPointer(v25, (unsigned int)_R4 + 4296);
            *v9 = 0;
          }
          else
            *v12 = 0;
            *((_DWORD *)_R4 + 1077) = -1;
            *((_DWORD *)_R4 + 1076) = -1;
            v26 = *((_DWORD *)_R4 + 1078);
            if ( v26 )
              Level::unregisterTemporaryPointer(v26, (unsigned int)_R4 + 4296);
            *((_DWORD *)_R4 + 1078) = 0;
        Entity::setPersistent(_R4);
    v27 = *((_DWORD *)_R4 + 1078);
    if ( v27 )
        v28 = Level::fetchEntity(v27, v5 & HIDWORD(v5), v5, HIDWORD(v5), 0);
        *v12 = (Player *)v28;
        if ( !v28 )
  if ( !*v12 )
    goto LABEL_68;
  _R0 = Entity::distanceToSqr(*v12, _R4);
  __asm
    VLDR            S0, =4096.0
    VMOV            S2, R0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
      v34 = *((_DWORD *)_R4 + 1078);
      if ( v34 )
        v5 = *((_QWORD *)_R4 + 538);
        if ( ((unsigned int)v5 & HIDWORD(v5)) != -1 )
          v35 = Level::fetchEntity(v34, v5 & HIDWORD(v5), v5, HIDWORD(v5), 0);
          *v12 = (Player *)v35;
          if ( !v35 )
    _R0 = *v12;
    __asm
      VLDR            S0, [R4,#0x48]
      VLDR            S2, [R4,#0x50]
      VLDR            S4, [R0,#0x48]
      VLDR            S6, [R0,#0x50]
      VSUB.F32        S0, S4, S0
      VSUB.F32        S2, S6, S2
      VMOV            R0, S0
      VMOV            R1, S2
    _R0 = mce::Math::atan2(_R0, v5);
    __asm { VMOV            S2, R0 }
    _R1 = &mce::Math::RADDEG;
      VLDR            S0, [R1]
      VNMUL.F32       S0, S0, S2
  else
LABEL_68:
    LODWORD(v40) = *((_DWORD *)_R4 + 27);
    HIDWORD(v40) = *((_DWORD *)_R4 + 29);
    _R0 = mce::Math::atan2(v40, v5);
    __asm { VMOV            S0, R0 }
      VLDR            S2, [R1]
      VNMUL.F32       S0, S2, S0
    VSTR            S0, [R4,#0x7C]
    VSTR            S0, [R0]
  result = (Ghast *)((char *)_R4 + 3420);
  __asm { VSTR            S0, [R0] }
  return result;
}


void __fastcall Ghast::readAdditionalSaveData(Ghast *this, const CompoundTag *a2)
{
  Ghast::readAdditionalSaveData(this, a2);
}


int __fastcall Ghast::Ghast(int a1, int a2, int *a3)
{
  int result; // r0@1
  __int64 v4; // kr00_8@1

  result = Mob::Mob(a1, a2, a3);
  *(_DWORD *)result = &off_26F70FC;
  *(_DWORD *)(result + 4296) = &off_26F4C40;
  *(_DWORD *)(result + 4300) = 0;
  *(_DWORD *)(result + 4308) = -1;
  *(_DWORD *)(result + 4304) = -1;
  *(_DWORD *)(result + 4312) = 0;
  *(_BYTE *)(result + 4316) = 0;
  v4 = *(_QWORD *)&Vec3::ZERO;
  *(_DWORD *)(result + 4328) = dword_2822498;
  *(_QWORD *)(result + 4320) = v4;
  *(_DWORD *)(result + 4332) = 0;
  *(_DWORD *)(result + 4336) = 0;
  *(_DWORD *)(result + 4340) = 0;
  *(_DWORD *)(result + 4344) = 1;
  *(_DWORD *)(result + 324) = -1067450368;
  *(_DWORD *)(result + 248) = 19;
  *(_DWORD *)(result + 4176) = 100;
  return result;
}


void __fastcall Ghast::~Ghast(Ghast *this)
{
  Ghast::~Ghast(this);
}


signed int __fastcall Ghast::isCharging(Ghast *this)
{
  signed int result; // r0@1

  result = (unsigned __int8)SynchedEntityData::getInt8((Ghast *)((char *)this + 176), 22);
  if ( (_BYTE)result )
    result = 1;
  return result;
}


signed int __fastcall Ghast::useNewAi(Ghast *this)
{
  return 1;
}


signed int __fastcall Ghast::getEntityTypeId(Ghast *this)
{
  return 2857;
}


unsigned int __fastcall Ghast::getExperienceReward(Ghast *this)
{
  Entity *v1; // r4@1
  int v2; // r5@2
  Level *v3; // r0@2
  char *v4; // r0@2
  unsigned int result; // r0@2

  v1 = this;
  if ( *((_DWORD *)this + 861) < 1 )
  {
    result = 0;
  }
  else
    v2 = (*(int (__fastcall **)(Ghast *))(*(_DWORD *)this + 1008))(this);
    v3 = (Level *)Entity::getLevel(v1);
    v4 = Level::getRandom(v3);
    result = ((Random::_genRandInt32((Random *)v4) & 1) + 1) * v2 + 5;
  return result;
}


void __fastcall Ghast::~Ghast(Ghast *this)
{
  Ghast *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26F70FC;
  *((_DWORD *)this + 1074) = &off_26F4C40;
  *((_DWORD *)this + 1075) = 0;
  *((_DWORD *)this + 1077) = -1;
  *((_DWORD *)this + 1076) = -1;
  *((_BYTE *)this + 4316) = 0;
  v2 = *((_DWORD *)this + 1078);
  if ( v2 )
    Level::unregisterTemporaryPointer(v2, (unsigned int)v1 + 4296);
  *((_DWORD *)v1 + 1078) = 0;
  Mob::~Mob(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall Ghast::addAdditionalSaveData(Ghast *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  Ghast *v3; // r5@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  Mob::addAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v7, "ExplosionPower");
  CompoundTag::putInt((int)v2, (const void **)&v7, *((_DWORD *)v3 + 1086));
  v4 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
}


void __fastcall Ghast::readAdditionalSaveData(Ghast *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  Ghast *v3; // r7@1
  signed int v4; // r6@1
  void *v5; // r0@1
  void *v6; // r0@3
  unsigned int *v7; // r2@5
  signed int v8; // r1@7
  unsigned int *v9; // r2@13
  signed int v10; // r1@15
  int v11; // [sp+8h] [bp-30h]@3
  int v12; // [sp+10h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  Mob::readAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v12, "ExplosionPower");
  v4 = CompoundTag::contains((int)v2, (const void **)&v12, 3);
  v5 = (void *)(v12 - 12);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  if ( v4 == 1 )
    sub_21E94B4((void **)&v11, "ExplosionPower");
    *((_DWORD *)v3 + 1086) = CompoundTag::getInt((int)v2, (const void **)&v11);
    v6 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v11 - 4);
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
        j_j_j_j__ZdlPv_9(v6);
}


int __fastcall Ghast::_hurt(Ghast *this, const EntityDamageSource *a2, int a3, int a4, bool a5)
{
  int v5; // r8@1
  int v6; // r7@1
  const EntityDamageSource *v7; // r5@1
  Mob *v8; // r6@1
  int v9; // r4@1
  int v10; // r1@1
  Entity *v11; // r4@1
  void *v12; // r0@4
  void *v13; // r0@5
  void *v14; // r0@6
  int result; // r0@7
  unsigned int *v16; // r2@9
  signed int v17; // r1@11
  unsigned int *v18; // r2@13
  signed int v19; // r1@15
  unsigned int *v20; // r2@17
  signed int v21; // r1@19
  void **v22; // [sp+8h] [bp-70h]@4
  int v23; // [sp+40h] [bp-38h]@6
  int v24; // [sp+44h] [bp-34h]@5
  int v25; // [sp+48h] [bp-30h]@4
  unsigned int v26; // [sp+50h] [bp-28h]@1
  unsigned int v27; // [sp+54h] [bp-24h]@1

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = this;
  v9 = Entity::getLevel(this);
  (*(void (__fastcall **)(unsigned int *, const EntityDamageSource *))(*(_DWORD *)v7 + 32))(&v26, v7);
  v11 = (Entity *)Level::fetchEntity(v9, v10, v26, v27, 0);
  if ( v11
    && (*(int (__fastcall **)(const EntityDamageSource *))(*(_DWORD *)v7 + 56))(v7) == 4194389
    && Entity::hasCategory((int)v11, 1) == 1 )
  {
    Mob::_hurt(v8, v7, 1000, v5, a5);
    EventPacket::EventPacket((int)&v22, v11, 37, 1);
    (*(void (__fastcall **)(Entity *, void ***))(*(_DWORD *)v11 + 1448))(v11, &v22);
    v22 = &off_26E9D30;
    v12 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
    {
      v16 = (unsigned int *)(v25 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      }
      else
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    }
    v13 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v24 - 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    v14 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v23 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    result = 1;
  }
  else
    result = Mob::_hurt(v8, v7, v6, v5, a5);
  return result;
}
