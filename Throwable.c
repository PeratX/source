

int __fastcall Throwable::getThrowUpAngleOffset(Throwable *this)
{
  return 0;
}


void __fastcall Throwable::~Throwable(Throwable *this)
{
  Throwable::~Throwable(this);
}


signed int __fastcall Throwable::getThrowPower(Throwable *this)
{
  return 1069547520;
}


int __fastcall Throwable::shoot(Throwable *this, Mob *a2)
{
  Mob *v2; // r4@1
  float v4; // r1@1
  ProjectileComponent *v5; // r0@2
  int result; // r0@2
  int v13; // r0@3
  float v16; // r1@3
  int v17; // r0@3
  float v20; // r1@3
  float v24; // r1@3
  int v25; // r0@3
  int v26; // r7@3
  float v28; // r1@3
  float v30; // r0@3
  float v31; // [sp+4h] [bp-3Ch]@3
  unsigned int v32; // [sp+8h] [bp-38h]@3

  v2 = a2;
  _R5 = this;
  if ( Entity::getProjectileComponent(this) )
  {
    v5 = (ProjectileComponent *)Entity::getProjectileComponent(_R5);
    result = j_j_j__ZN19ProjectileComponent5shootER3Mob(v5, v2);
  }
  else
    __asm { VLDR            S0, [R5,#0x7C] }
    _R0 = &mce::Math::DEGRAD;
    __asm
    {
      VLDR            S16, [R0]
      VMUL.F32        S0, S16, S0
      VMOV            R0, S0
    }
    v13 = mce::Math::cos(_R0, v4);
    _R8 = v13;
      VMUL.F32        S0, S0, S16
    v17 = mce::Math::sin(_R0, v16);
    __asm { VLDR            S0, [R5,#0x78] }
    _R9 = v17;
    _R6 = mce::Math::cos(_R0, v20);
    __asm { VLDR            S18, [R5,#0x78] }
    _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R5 + 776))(_R5);
      VMOV            S0, R0
      VADD.F32        S0, S0, S18
    v25 = mce::Math::sin(_R0, v24);
    v26 = v25;
      VMOV            S2, R6
      VMOV            S16, R8
      VMOV            S0, R9
      VNMUL.F32       S18, S0, S2
    _R0 = mce::Math::cos(_R0, v28);
      VSTR            S18, [SP,#0x40+var_3C]
    v32 = v26 ^ 0x80000000;
      VSTR            S0, [SP,#0x40+var_34]
    v30 = COERCE_FLOAT((*(int (__fastcall **)(Entity *))(*(_DWORD *)_R5 + 768))(_R5));
    result = Throwable::shoot(_R5, (const Vec3 *)&v31, v30, 0.0, (Mob *)((char *)v2 + 108));
  return result;
}


void __fastcall Throwable::initializeComponents(int a1, int a2, unsigned __int64 *a3)
{
  Throwable::initializeComponents(a1, a2, a3);
}


void __fastcall Throwable::initializeComponents(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r4@1
  int v4; // r6@1
  unsigned int v5; // r10@1
  unsigned __int64 v6; // kr00_8@1
  unsigned int v7; // r4@1
  int v8; // r7@1
  int v9; // r8@2
  _DWORD *v10; // r9@2
  int v11; // r6@2
  _DWORD *v12; // r1@4
  size_t v13; // r2@4
  Entity *v14; // r5@8
  int v15; // r0@13
  int v16; // r1@13
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int v19; // [sp+0h] [bp-48h]@2
  char v20; // [sp+4h] [bp-44h]@14
  char v21; // [sp+Ch] [bp-3Ch]@14
  void *s1; // [sp+1Ch] [bp-2Ch]@1

  v3 = a3;
  v4 = a1;
  Entity::initializeComponents(a1, a2);
  sub_21E94B4(&s1, "other");
  v5 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v6 = *v3;
  v7 = v5 % (*v3 >> 32);
  v8 = *(_DWORD *)(v6 + 4 * v7);
  if ( v8 )
  {
    v9 = *(_DWORD *)v8;
    v19 = v4;
    v10 = s1;
    v11 = *(_DWORD *)(*(_DWORD *)v8 + 32);
    while ( 1 )
    {
      if ( v11 == v5 )
      {
        v12 = *(_DWORD **)(v9 + 8);
        v13 = *(v10 - 3);
        if ( v13 == *(v12 - 3) && !memcmp(v10, v12, v13) )
          break;
      }
      if ( *(_DWORD *)v9 )
        v11 = *(_DWORD *)(v6 + 32);
        v8 = v9;
        v9 = *(_DWORD *)v9;
        if ( *(_DWORD *)(v6 + 32) % HIDWORD(v6) == v7 )
          continue;
      v14 = 0;
      v4 = v19;
      goto LABEL_10;
    }
    v4 = v19;
    if ( v8 )
      if ( *(_DWORD *)v8 )
        v14 = *(Entity **)(*(_DWORD *)v8 + 24);
      else
        v14 = 0;
    else
  }
  else
    v14 = 0;
LABEL_10:
  if ( v10 - 3 != &dword_28898C0 )
    v17 = v10 - 1;
    if ( &pthread_create )
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v10 - 3);
  if ( v14 )
    *(_QWORD *)(v4 + 3416) = *(_QWORD *)Entity::getUniqueID(v14);
    if ( Entity::getProjectileComponent((Entity *)v4) )
      v15 = Entity::getProjectileComponent((Entity *)v4);
      ProjectileComponent::setOwnerId(v15, v16, *(_QWORD *)(v4 + 3416));
    Entity::getAttachPos((AABB *)&v21, (int)v14, 4, 0);
    Entity::getRotation((Entity *)&v20, (int)v14);
    Entity::moveTo(v4, (int)&v21);
}


signed int __fastcall Throwable::getParticleType(Throwable *this)
{
  return 12;
}


int __fastcall Throwable::getSourceUniqueID(int result, int a2)
{
  int v2; // r2@1
  int v3; // r1@1

  v2 = *(_DWORD *)(a2 + 3416);
  v3 = *(_DWORD *)(a2 + 3420);
  *(_DWORD *)result = v2;
  *(_DWORD *)(result + 4) = v3;
  return result;
}


int __fastcall Throwable::shoot(Throwable *this, const Vec3 *a2, float a3, float a4, const Vec3 *a5)
{
  const Vec3 *v7; // r5@1
  ProjectileComponent *v14; // r0@2
  int result; // r0@2
  Level *v21; // r0@6
  char *v22; // r0@6
  Level *v24; // r0@6
  char *v25; // r0@6
  Level *v27; // r0@6
  char *v28; // r0@6
  float v31; // r1@6
  int v32; // r5@6
  __int64 v33; // r0@6
  __int64 v34; // r2@6
  int v35; // r0@6
  __int64 v36; // r0@6
  __int64 v37; // r2@6
  int v38; // r0@6
  int v39; // r0@6

  _R6 = a4;
  _R7 = a3;
  v7 = a2;
  _R4 = this;
  __asm
  {
    VMOV            S18, R6
    VMOV            S16, R7
  }
  _R8 = a5;
  if ( Entity::getProjectileComponent(this) )
    v14 = (ProjectileComponent *)Entity::getProjectileComponent(_R4);
    result = ProjectileComponent::shoot(v14, v7, _R7, _R6, a5, 0);
  else
    _R0 = *(_DWORD *)v7;
    *((_DWORD *)_R4 + 27) = *(_DWORD *)v7;
    _R1 = *((_DWORD *)v7 + 1);
    __asm { VMOV            S0, R0 }
    *((_DWORD *)_R4 + 28) = _R1;
    __asm { VMOV            S2, R1 }
    _R1 = *((float *)v7 + 2);
    __asm { VMUL.F32        S0, S0, S0 }
    *((float *)_R4 + 29) = _R1;
    __asm
    {
      VMUL.F32        S2, S2, S2
      VMOV            S4, R1
      VMUL.F32        S4, S4, S4
      VADD.F32        S0, S2, S0
      VADD.F32        S0, S0, S4
      VMOV            R0, S0
    }
    _R0 = mce::Math::sqrt(_R0, _R1);
      VMOV            S0, R0
      VLDR            S2, =0.001
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      *(_QWORD *)((char *)_R4 + 108) = *(_QWORD *)&Vec3::ZERO;
      *((_DWORD *)_R4 + 29) = dword_2822498;
    else
      __asm
      {
        VMOV.F32        S2, #1.0
        VLDR            S4, [R4,#0x70]
        VLDR            S6, [R4,#0x74]
        VDIV.F32        S0, S2, S0
        VLDR            S2, [R4,#0x6C]
        VMUL.F32        S4, S4, S0
        VMUL.F32        S2, S2, S0
        VMUL.F32        S0, S6, S0
        VSTR            S2, [R4,#0x6C]
        VSTR            S4, [R4,#0x70]
        VSTR            S0, [R4,#0x74]
      }
      VLDR            S0, =0.0075
      VMUL.F32        S18, S18, S0
    v21 = (Level *)Entity::getLevel(_R4);
    v22 = Level::getRandom(v21);
    _R0 = Random::nextGaussian((Random *)v22);
      VLDR            S2, [R4,#0x6C]
      VMUL.F32        S0, S18, S0
      VADD.F32        S0, S0, S2
      VSTR            S0, [R4,#0x6C]
    v24 = (Level *)Entity::getLevel(_R4);
    v25 = Level::getRandom(v24);
    _R0 = Random::nextGaussian((Random *)v25);
      VLDR            S2, [R4,#0x70]
      VSTR            S0, [R4,#0x70]
    v27 = (Level *)Entity::getLevel(_R4);
    v28 = Level::getRandom(v27);
    _R0 = Random::nextGaussian((Random *)v28);
      VLDR            S2, [R4,#0x74]
      VSTR            S0, [R4,#0x74]
      VMUL.F32        S0, S0, S16
      VLDR            S4, [R4,#0x70]
      VMUL.F32        S2, S2, S16
      VLDR            S6, [R8]
      VMUL.F32        S4, S4, S16
      VLDR            S8, [R8,#4]
      VLDR            S10, [R8,#8]
      VADD.F32        S0, S10, S0
      VADD.F32        S2, S6, S2
      VADD.F32        S4, S8, S4
      VSTR            S2, [R4,#0x6C]
      VSTR            S4, [R4,#0x70]
      VMUL.F32        S0, S0, S0
      VLDR            S4, [R8]
      VLDR            S6, [R4,#0x48]
      VADD.F32        S4, S6, S4
      VSTR            S4, [R4,#0x48]
      VLDR            S2, [R8,#4]
      VLDR            S4, [R4,#0x4C]
      VADD.F32        S2, S4, S2
      VSTR            S2, [R4,#0x4C]
      VLDR            S0, [R8,#8]
      VLDR            S2, [R4,#0x50]
      VSTR            S0, [R4,#0x50]
    v32 = mce::Math::sqrt(_R0, v31);
    LODWORD(v33) = *((_DWORD *)_R4 + 27);
    HIDWORD(v33) = *((_DWORD *)_R4 + 29);
    v35 = mce::Math::atan2(v33, v34);
    v36 = __PAIR__(v32, mce::operator*(v35, 1113927392));
    *((_DWORD *)_R4 + 31) = v36;
    *((_DWORD *)_R4 + 33) = v36;
    LODWORD(v36) = *((_DWORD *)_R4 + 28);
    v38 = mce::Math::atan2(v36, v37);
    v39 = mce::operator*(v38, 1113927392);
    *((_DWORD *)_R4 + 30) = v39;
    *((_DWORD *)_R4 + 32) = v39;
    result = 0;
    *((_DWORD *)_R4 + 857) = 0;
  return result;
}


int __fastcall Throwable::getShadowHeightOffs(Throwable *this)
{
  return 0;
}


Entity *__fastcall Throwable::Throwable(int a1, int a2, int *a3)
{
  Entity *v3; // r4@1

  v3 = (Entity *)a1;
  Entity::Entity(a1, a2, a3);
  *(_DWORD *)v3 = &off_26FF47C;
  *((_BYTE *)v3 + 3409) = 0;
  *((_DWORD *)v3 + 854) = 0;
  *((_DWORD *)v3 + 855) = 0;
  *((_DWORD *)v3 + 856) = 0;
  *((_DWORD *)v3 + 857) = 0;
  *((_DWORD *)v3 + 858) = -1;
  *((_DWORD *)v3 + 859) = -1;
  *((_DWORD *)v3 + 860) = -1;
  *((_DWORD *)v3 + 861) = 0;
  MovementInterpolator::MovementInterpolator((int)v3 + 3448);
  *((_DWORD *)v3 + 79) = 0;
  (*(void (__fastcall **)(Entity *, signed int, signed int))(*(_DWORD *)v3 + 680))(v3, 1048576000, 1048576000);
  *((_DWORD *)v3 + 52) = 0;
  Entity::enableAutoSendPosRot(v3, 1);
  return v3;
}


void __fastcall Throwable::readAdditionalSaveData(Throwable *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r6@1
  Throwable *v3; // r4@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  int v9; // r0@6
  void *v10; // r0@8
  void *v11; // r0@9
  unsigned int *v12; // r2@11
  signed int v13; // r1@13
  unsigned int *v14; // r2@15
  signed int v15; // r1@17
  unsigned int *v16; // r2@19
  signed int v17; // r1@21
  unsigned int *v18; // r2@23
  signed int v19; // r1@25
  unsigned int *v20; // r2@27
  signed int v21; // r1@29
  unsigned int *v22; // r2@31
  signed int v23; // r1@33
  unsigned int *v24; // r2@35
  signed int v25; // r1@37
  int v26; // [sp+8h] [bp-48h]@9
  int v27; // [sp+10h] [bp-40h]@6
  int v28; // [sp+18h] [bp-38h]@5
  int v29; // [sp+20h] [bp-30h]@4
  int v30; // [sp+28h] [bp-28h]@3
  int v31; // [sp+30h] [bp-20h]@2
  int v32; // [sp+38h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v32, "xTile");
  *((_DWORD *)v3 + 858) = CompoundTag::getShort((int)v2, (const void **)&v32);
  v4 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v32 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v31, "yTile");
  *((_DWORD *)v3 + 859) = CompoundTag::getShort((int)v2, (const void **)&v31);
  v5 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v31 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v30, "zTile");
  *((_DWORD *)v3 + 860) = CompoundTag::getShort((int)v2, (const void **)&v30);
  v6 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v30 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v29, "inTile");
  *((_DWORD *)v3 + 861) = CompoundTag::getByte((int)v2, (const void **)&v29);
  v7 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v29 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v28, "shake");
  *((_DWORD *)v3 + 856) = CompoundTag::getByte((int)v2, (const void **)&v28);
  v8 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v28 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v27, "inGround");
  v9 = CompoundTag::getByte((int)v2, (const void **)&v27);
  if ( v9 != 1 )
    LOBYTE(v9) = 0;
  *((_BYTE *)v3 + 3409) = v9;
  v10 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v27 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v26, "OwnerID");
  *((_QWORD *)v3 + 427) = CompoundTag::getInt64((int)v2, (const void **)&v26);
  v11 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v26 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
}


void __fastcall Throwable::addAdditionalSaveData(Throwable *this, CompoundTag *a2)
{
  CompoundTag *v2; // r6@1
  Throwable *v3; // r5@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  unsigned int *v13; // r2@13
  signed int v14; // r1@15
  unsigned int *v15; // r2@17
  signed int v16; // r1@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  unsigned int *v19; // r2@25
  signed int v20; // r1@27
  unsigned int *v21; // r2@29
  signed int v22; // r1@31
  unsigned int *v23; // r2@33
  signed int v24; // r1@35
  int v25; // [sp+8h] [bp-48h]@7
  int v26; // [sp+10h] [bp-40h]@6
  int v27; // [sp+18h] [bp-38h]@5
  int v28; // [sp+20h] [bp-30h]@4
  int v29; // [sp+28h] [bp-28h]@3
  int v30; // [sp+30h] [bp-20h]@2
  int v31; // [sp+38h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v31, "xTile");
  CompoundTag::putShort((int)v2, (const void **)&v31, *((_WORD *)v3 + 1716));
  v4 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v31 - 4);
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
  sub_21E94B4((void **)&v30, "yTile");
  CompoundTag::putShort((int)v2, (const void **)&v30, *((_WORD *)v3 + 1718));
  v5 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v30 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v29, "zTile");
  CompoundTag::putShort((int)v2, (const void **)&v29, *((_WORD *)v3 + 1720));
  v6 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v29 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v28, "inTile");
  CompoundTag::putByte((int)v2, (const void **)&v28, *((_BYTE *)v3 + 3444));
  v7 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v28 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v27, "shake");
  CompoundTag::putByte((int)v2, (const void **)&v27, *((_BYTE *)v3 + 3424));
  v8 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v27 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v26, "inGround");
  CompoundTag::putByte((int)v2, (const void **)&v26, *((_BYTE *)v3 + 3409));
  v9 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v26 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v25, "OwnerID");
  CompoundTag::putInt64((int)v2, (const void **)&v25, *((_DWORD *)v3 + 854), *((_DWORD *)v3 + 855));
  v10 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v25 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
}


int __fastcall Throwable::Throwable(int a1, BlockSource *a2, int **a3)
{
  int v3; // r4@1

  v3 = a1;
  Entity::Entity(a1, a2, a3);
  *(_DWORD *)v3 = &off_26FF47C;
  *(_BYTE *)(v3 + 3409) = 0;
  *(_DWORD *)(v3 + 3416) = 0;
  *(_DWORD *)(v3 + 3420) = 0;
  *(_DWORD *)(v3 + 3424) = 0;
  *(_DWORD *)(v3 + 3428) = 0;
  *(_DWORD *)(v3 + 3432) = -1;
  *(_DWORD *)(v3 + 3436) = -1;
  *(_DWORD *)(v3 + 3440) = -1;
  *(_DWORD *)(v3 + 3444) = 0;
  MovementInterpolator::MovementInterpolator(v3 + 3448);
  (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)v3 + 680))(v3, 1048576000, 1048576000);
  *(_DWORD *)(v3 + 208) = 0;
  return v3;
}


int __fastcall Throwable::normalTick(Throwable *this)
{
  Throwable *v1; // r4@1
  int result; // r0@1

  v1 = this;
  Entity::normalTick(this);
  result = Entity::getProjectileComponent(v1);
  if ( !result )
    result = j_j_j__ZN20MovementInterpolator4tickER6Entity((Throwable *)((char *)v1 + 3448), v1);
  return result;
}


int __fastcall Throwable::Throwable(int a1, Entity *a2, int **a3)
{
  Entity *v3; // r5@1
  int v4; // r4@1
  int **v5; // r6@1
  BlockSource *v6; // r0@1
  int v7; // r6@2
  __int64 *v8; // r0@2
  int v9; // r1@2
  __int64 v10; // r2@3
  int v12; // [sp+0h] [bp-28h]@3
  char v13; // [sp+8h] [bp-20h]@3

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = (BlockSource *)Entity::getRegion(a2);
  Entity::Entity(v4, v6, v5);
  *(_DWORD *)v4 = &off_26FF47C;
  *(_BYTE *)(v4 + 3409) = 0;
  *(_DWORD *)(v4 + 3416) = 0;
  *(_DWORD *)(v4 + 3420) = 0;
  *(_DWORD *)(v4 + 3424) = 0;
  *(_DWORD *)(v4 + 3428) = 0;
  *(_DWORD *)(v4 + 3432) = -1;
  *(_DWORD *)(v4 + 3436) = -1;
  *(_DWORD *)(v4 + 3440) = -1;
  *(_DWORD *)(v4 + 3444) = 0;
  MovementInterpolator::MovementInterpolator(v4 + 3448);
  (*(void (__fastcall **)(int, signed int, signed int))(*(_DWORD *)v4 + 680))(v4, 1048576000, 1048576000);
  *(_DWORD *)(v4 + 208) = 0;
  *(_QWORD *)(v4 + 3416) = *(_QWORD *)Entity::getUniqueID(v3);
  if ( Entity::getProjectileComponent((Entity *)v4) )
  {
    v7 = Entity::getProjectileComponent((Entity *)v4);
    v8 = (__int64 *)Entity::getUniqueID(v3);
    ProjectileComponent::setOwnerId(v7, v9, *v8);
  }
  v10 = *(_QWORD *)(v4 + 3416);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 348))(v4);
  Entity::getAttachPos((AABB *)&v13, (int)v3, 4, 0);
  Entity::getRotation((Entity *)&v12, (int)v3);
  Entity::moveTo(v4, (int)&v13);
  return v4;
}


int __fastcall Throwable::stopUponGroundCollision(Throwable *this)
{
  return 0;
}


signed int __fastcall Throwable::getGravity(Throwable *this)
{
  return 1022739087;
}


int __fastcall Throwable::Throwable(int a1, BlockSource *a2, int **a3, int a4)
{
  int v4; // r5@1
  int v5; // r4@1
  int result; // r0@1

  v4 = a4;
  v5 = a1;
  Entity::Entity(a1, a2, a3);
  *(_DWORD *)v5 = &off_26FF47C;
  *(_BYTE *)(v5 + 3409) = 0;
  *(_DWORD *)(v5 + 3416) = 0;
  *(_DWORD *)(v5 + 3420) = 0;
  *(_DWORD *)(v5 + 3424) = 0;
  *(_DWORD *)(v5 + 3428) = 0;
  *(_DWORD *)(v5 + 3432) = -1;
  *(_DWORD *)(v5 + 3436) = -1;
  *(_DWORD *)(v5 + 3440) = -1;
  *(_DWORD *)(v5 + 3444) = 0;
  MovementInterpolator::MovementInterpolator(v5 + 3448);
  (*(void (__fastcall **)(int, signed int, signed int))(*(_DWORD *)v5 + 680))(v5, 1048576000, 1048576000);
  *(_DWORD *)(v5 + 208) = 0;
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v5 + 48))(v5, v4);
  result = v5;
  *(_DWORD *)(v5 + 316) = 0;
  return result;
}


void __fastcall Throwable::readAdditionalSaveData(Throwable *this, const CompoundTag *a2)
{
  Throwable::readAdditionalSaveData(this, a2);
}


void __fastcall Throwable::~Throwable(Throwable *this)
{
  Entity *v1; // r0@1

  v1 = Entity::~Entity(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall Throwable::addAdditionalSaveData(Throwable *this, CompoundTag *a2)
{
  Throwable::addAdditionalSaveData(this, a2);
}


int __fastcall Throwable::lerpMotion(Throwable *this, const Vec3 *a2)
{
  Throwable *v3; // r4@1
  ProjectileComponent *v4; // r0@2
  int result; // r0@2
  float v6; // r1@3
  int v12; // r6@7
  __int64 v13; // r0@7
  __int64 v14; // r2@7
  int v15; // r0@7
  __int64 v16; // r0@7
  __int64 v17; // r2@7
  int v18; // r0@7

  _R5 = a2;
  v3 = this;
  if ( Entity::getProjectileComponent(this) )
  {
    v4 = (ProjectileComponent *)Entity::getProjectileComponent(v3);
    result = j_j_j__ZN19ProjectileComponent10lerpMotionERK4Vec3(v4, _R5);
  }
  else
    *((_DWORD *)v3 + 27) = *(_DWORD *)_R5;
    *((_DWORD *)v3 + 28) = *((_DWORD *)_R5 + 1);
    *((_DWORD *)v3 + 29) = *((_DWORD *)_R5 + 2);
    result = 0x7FFFFFFF;
    v6 = *((float *)v3 + 32);
    _ZF = (LODWORD(v6) & 0x7FFFFFFF) == 0;
    if ( !(LODWORD(v6) & 0x7FFFFFFF) )
    {
      v6 = *((float *)v3 + 33);
      _ZF = (LODWORD(v6) & 0x7FFFFFFF) == 0;
    }
    if ( _ZF )
      __asm
      {
        VLDR            S0, [R5]
        VLDR            S2, [R5,#8]
        VMUL.F32        S0, S0, S0
        VMUL.F32        S2, S2, S2
        VADD.F32        S0, S2, S0
        VMOV            R0, S0
      }
      v12 = mce::Math::sqrt(_R0, v6);
      LODWORD(v13) = *(_DWORD *)_R5;
      HIDWORD(v13) = *((_DWORD *)_R5 + 2);
      v15 = mce::Math::atan2(v13, v14);
      v16 = __PAIR__(v12, mce::operator*(v15, 1113927392));
      *((_DWORD *)v3 + 31) = v16;
      *((_DWORD *)v3 + 33) = v16;
      LODWORD(v16) = *((_DWORD *)_R5 + 1);
      v18 = mce::Math::atan2(v16, v17);
      result = mce::operator*(v18, 1113927392);
      *((_DWORD *)v3 + 30) = result;
      *((_DWORD *)v3 + 32) = result;
  return result;
}
