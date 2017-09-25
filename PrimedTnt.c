

signed int __fastcall PrimedTnt::getEntityTypeId(PrimedTnt *this)
{
  return 65;
}


void __fastcall PrimedTnt::reloadHardcoded(int a1, int a2, unsigned __int64 *a3)
{
  PrimedTnt::reloadHardcoded(a1, a2, a3);
}


int __fastcall PrimedTnt::isPickable(PrimedTnt *this)
{
  return Entity::isRemoved(this) ^ 1;
}


int __fastcall PrimedTnt::inheritOwners(PrimedTnt *this, Entity *a2)
{
  Entity *v2; // r5@1
  PrimedTnt *v3; // r4@1
  PrimedTnt *v4; // r6@2
  int (__fastcall *v5)(Entity *); // r1@3
  int result; // r0@4
  int v7; // [sp+0h] [bp-18h]@2
  int v8; // [sp+4h] [bp-14h]@2

  v2 = a2;
  v3 = this;
  if ( a2 )
  {
    (*(void (__fastcall **)(int *))(*(_DWORD *)a2 + 500))(&v7);
    v4 = (PrimedTnt *)((char *)v3 + 3416);
    if ( (v7 & v8) == -1 )
    {
      *(_QWORD *)v4 = *(_QWORD *)Entity::getUniqueID(v2);
      v5 = *(int (__fastcall **)(Entity *))(*(_DWORD *)v2 + 488);
    }
    else
      *(_QWORD *)v4 = *(_QWORD *)&v7;
      v5 = *(int (__fastcall **)(Entity *))(*(_DWORD *)v2 + 40);
    result = v5(v2);
    *((_DWORD *)v3 + 856) = result;
  }
  else
    result = -1;
    *((_DWORD *)v3 + 854) = -1;
    *((_DWORD *)v3 + 855) = -1;
    *((_DWORD *)v3 + 856) = 1;
  return result;
}


int __fastcall PrimedTnt::reloadHardcodedClient(int a1)
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


int __fastcall PrimedTnt::_hurt(PrimedTnt *this, const EntityDamageSource *a2, int a3, bool a4, bool a5)
{
  const EntityDamageSource *v5; // r6@1
  Entity *v6; // r7@1
  bool v7; // r4@1
  int v8; // r5@1

  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = a3;
  if ( EntityDamageSource::getCause(a2) == 13 )
  {
    (*(void (__fastcall **)(Entity *))(*(_DWORD *)v6 + 700))(v6);
    (*(void (__fastcall **)(Entity *))(*(_DWORD *)v6 + 44))(v6);
  }
  return Entity::_hurt(v6, v5, v8, v7, a5);
}


int __fastcall PrimedTnt::getShadowHeightOffs(PrimedTnt *this)
{
  return 0;
}


int __fastcall PrimedTnt::getSourceUniqueID(int result, int a2)
{
  int v2; // r2@1
  int v3; // r1@1

  v2 = *(_DWORD *)(a2 + 3416);
  v3 = *(_DWORD *)(a2 + 3420);
  *(_DWORD *)result = v2;
  *(_DWORD *)(result + 4) = v3;
  return result;
}


void __fastcall PrimedTnt::~PrimedTnt(PrimedTnt *this)
{
  Entity *v1; // r0@1

  v1 = Entity::~Entity(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall PrimedTnt::getShadowRadius(PrimedTnt *this)
{
  return 0;
}


ExplodeComponent *__fastcall PrimedTnt::normalTick(PrimedTnt *this)
{
  Level *v2; // r0@1
  unsigned __int64 *v3; // r5@1
  Level *v4; // r0@1
  ExplodeComponent *v5; // r0@4
  ExplodeComponent *result; // r0@11
  int v11; // r0@13
  int v12; // r1@13
  int v13; // [sp+1Ch] [bp-1Ch]@13
  int v14; // [sp+24h] [bp-14h]@13

  _R4 = this;
  v2 = (Level *)Entity::getLevel(this);
  v3 = (unsigned __int64 *)Level::getGameRules(v2);
  v4 = (Level *)Entity::getLevel(_R4);
  if ( !Level::isClientSide(v4)
    && GameRules::hasRule(v3, (int **)&GameRules::ALLOW_DESTRUCTIVE_OBJECTS) == 1
    && !GameRules::getBool(v3, (int **)&GameRules::ALLOW_DESTRUCTIVE_OBJECTS) )
  {
    v5 = (ExplodeComponent *)*((_DWORD *)_R4 + 783);
    if ( v5 )
    {
      if ( ExplodeComponent::isPrimed(v5) == 1 )
        (*(void (__fastcall **)(PrimedTnt *))(*(_DWORD *)_R4 + 44))(_R4);
    }
  }
  Entity::normalTick(_R4);
  *((_DWORD *)_R4 + 21) = *((_DWORD *)_R4 + 18);
  *((_DWORD *)_R4 + 22) = *((_DWORD *)_R4 + 19);
  *((_DWORD *)_R4 + 23) = *((_DWORD *)_R4 + 20);
  __asm
    VLDR            S0, =-0.04
    VLDR            S2, [R4,#0x70]
    VADD.F32        S0, S2, S0
    VSTR            S0, [R4,#0x70]
  (*(void (__fastcall **)(PrimedTnt *, char *))(*(_DWORD *)_R4 + 76))(_R4, (char *)_R4 + 108);
    VLDR            S8, =0.98
    VLDR            S0, [R4,#0x6C]
    VMUL.F32        S2, S0, S8
    VSTR            S2, [R4,#0x6C]
    VMUL.F32        S6, S2, S8
    VSTR            S6, [R4,#0x70]
    VLDR            S4, [R4,#0x74]
    VMUL.F32        S8, S4, S8
    VSTR            S8, [R4,#0x74]
  if ( *((_BYTE *)_R4 + 219) )
    __asm
      VCMPE.F32       S6, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      goto LABEL_16;
  if ( *((_BYTE *)_R4 + 216) )
LABEL_16:
      VLDR            S6, =0.686
      VLDR            S8, =-0.49
      VMUL.F32        S0, S0, S6
      VMUL.F32        S4, S4, S6
      VMUL.F32        S2, S2, S8
      VSTR            S0, [R4,#0x6C]
      VSTR            S2, [R4,#0x70]
      VSTR            S4, [R4,#0x74]
  result = (ExplodeComponent *)*((_DWORD *)_R4 + 783);
  if ( result )
    result = (ExplodeComponent *)ExplodeComponent::isPrimed(result);
    if ( result == (ExplodeComponent *)1 )
      (*(void (__fastcall **)(PrimedTnt *))(*(_DWORD *)_R4 + 736))(_R4);
      v11 = Entity::getLevel(_R4);
      __asm
      {
        VMOV.F32        S0, #0.5
        VLDR            S2, [R4,#0x4C]
      }
      v12 = *((_DWORD *)_R4 + 20);
      v13 = *((_DWORD *)_R4 + 18);
        VADD.F32        S0, S2, S0
        VSTR            S0, [SP,#0x38+var_18]
      v14 = v12;
      result = (ExplodeComponent *)Level::addParticle(v11, 4, (int)&v13);
  return result;
}


void __fastcall PrimedTnt::reloadHardcoded(int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v4; // r4@1
  int v5; // r5@1
  unsigned int v10; // r11@2
  unsigned __int64 v11; // kr00_8@2
  unsigned int v12; // r4@2
  int v13; // r8@2
  int v14; // r9@3
  _DWORD *v15; // r10@3
  int v16; // r7@3
  _DWORD *v17; // r1@5
  size_t v18; // r2@5
  Entity *v19; // r6@9
  __int64 v20; // kr08_8@14
  _QWORD *v21; // r7@14
  int (__fastcall *v22)(Entity *); // r1@15
  int v23; // r0@17
  unsigned int v24; // r1@17
  unsigned int v25; // r1@19
  unsigned int v26; // r0@19
  Random *v27; // r0@25
  float v33; // r1@25
  unsigned int *v35; // r2@32
  signed int v36; // r1@34
  Entity *v37; // [sp+4h] [bp-4Ch]@3
  void *s1; // [sp+10h] [bp-40h]@2
  int v39; // [sp+18h] [bp-38h]@14
  int v40; // [sp+1Ch] [bp-34h]@14

  _R9 = a1;
  v4 = a3;
  v5 = a2;
  if ( !*(_BYTE *)(a1 + 3081) )
  {
    *(_BYTE *)(a1 + 536) = 1;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 680))(a1);
    __asm
    {
      VMOV.F32        S0, #0.5
      VLDR            S2, [R9,#0x134]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [R9,#0x13C]
    }
    sub_21E94B4(&s1, "other");
    v10 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
    v11 = *v4;
    v12 = v10 % (*v4 >> 32);
    v13 = *(_DWORD *)(v11 + 4 * v12);
    if ( v13 )
      v37 = (Entity *)_R9;
      v14 = *(_DWORD *)v13;
      v15 = s1;
      v16 = *(_DWORD *)(*(_DWORD *)v13 + 32);
      while ( 1 )
      {
        if ( v16 == v10 )
        {
          v17 = *(_DWORD **)(v14 + 8);
          v18 = *(v15 - 3);
          if ( v18 == *(v17 - 3) && !memcmp(v15, v17, v18) )
            break;
        }
        if ( *(_DWORD *)v14 )
          v16 = *(_DWORD *)(v11 + 32);
          v13 = v14;
          v14 = *(_DWORD *)v14;
          if ( *(_DWORD *)(v11 + 32) % HIDWORD(v11) == v12 )
            continue;
        v19 = 0;
        _R9 = (int)v37;
        goto LABEL_11;
      }
      _R9 = (int)v37;
      if ( v13 )
        if ( *(_DWORD *)v13 )
          v19 = *(Entity **)(*(_DWORD *)v13 + 24);
        else
          v19 = 0;
      else
    else
      v19 = 0;
LABEL_11:
    if ( v15 - 3 != &dword_28898C0 )
      v35 = v15 - 1;
      if ( &pthread_create )
        __dmb();
        do
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 <= 0 )
        j_j_j_j__ZdlPv_9(v15 - 3);
    if ( v19 && !Entity::isRemoved((Entity *)_R9) )
      v20 = *(_QWORD *)Entity::getUniqueID(v19);
      (*(void (__fastcall **)(int *, Entity *))(*(_DWORD *)v19 + 500))(&v39, v19);
      v21 = (_QWORD *)(_R9 + 3416);
      if ( (v39 & v40) == -1 )
        *v21 = *(_QWORD *)Entity::getUniqueID(v19);
        v22 = *(int (__fastcall **)(Entity *))(*(_DWORD *)v19 + 488);
        *v21 = *(_QWORD *)&v39;
        v22 = *(int (__fastcall **)(Entity *))(*(_DWORD *)v19 + 40);
      *(_DWORD *)(_R9 + 3424) = v22(v19);
      v23 = SynchedEntityData::_get((SynchedEntityData *)(_R9 + 176), 5);
      v24 = *(_DWORD *)(v23 + 4);
      if ( (unsigned __int8)v24 == 7 && *(_QWORD *)(v23 + 16) != v20 )
        *(_QWORD *)(v23 + 16) = v20;
        *(_BYTE *)(v23 + 8) = 1;
        v25 = v24 >> 16;
        v26 = *(_WORD *)(_R9 + 188);
        if ( v26 >= v25 )
          LOWORD(v26) = v25;
        *(_WORD *)(_R9 + 188) = v26;
        if ( *(_WORD *)(_R9 + 190) > v25 )
          LOWORD(v25) = *(_WORD *)(_R9 + 190);
        *(_WORD *)(_R9 + 190) = v25;
    if ( v5 == 2 )
      v27 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
      _R0 = Random::_genRandInt32(v27);
      __asm
        VMOV            S0, R0
        VLDR            D1, =2.32830644e-10
        VCVT.F64.U32    D0, S0
      _R0 = &mce::Math::PI;
        VMUL.F64        D0, D0, D1
        VCVT.F32.F64    S0, D0
        VADD.F32        S0, S0, S0
        VLDR            S2, [R0]
      _R0 = &mce::Math::DEGRAD;
        VMUL.F32        S0, S2, S0
        VMUL.F32        S0, S0, S2
        VMOV            R4, S0
      _R0 = mce::Math::sin(_R4, COERCE_FLOAT(&mce::Math::DEGRAD));
        VLDR            S16, =-0.02
        VMUL.F32        S0, S0, S16
        VSTR            S0, [R9,#0x6C]
      *(_DWORD *)(_R9 + 112) = 1045220557;
      _R0 = mce::Math::cos(_R4, v33);
        VSTR            S0, [R9,#0x74]
  }
}


void __fastcall PrimedTnt::~PrimedTnt(PrimedTnt *this)
{
  PrimedTnt::~PrimedTnt(this);
}


int __fastcall PrimedTnt::PrimedTnt(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int v4; // r6@2
  _BYTE *v5; // r0@2
  signed __int16 v6; // r5@2
  int v7; // r1@2
  unsigned int v8; // r0@4

  v3 = a1;
  Entity::Entity(a1, a2, a3);
  *(_DWORD *)v3 = &off_26F4484;
  *(_DWORD *)(v3 + 3416) = -1;
  *(_DWORD *)(v3 + 3420) = -1;
  *(_DWORD *)(v3 + 248) = 2;
  Entity::enableAutoSendPosRot((Entity *)v3, 1);
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 56) )
  {
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 56);
    v4 = *(_DWORD *)(v3 + 176);
    v5 = operator new(0x10u);
    v5[4] = 2;
    v6 = 56;
    *((_WORD *)v5 + 3) = 56;
    v5[8] = 1;
    *(_DWORD *)v5 = &off_26F08C4;
    *((_DWORD *)v5 + 3) = 99;
    v7 = *(_DWORD *)(v4 + 224);
    *(_DWORD *)(v4 + 224) = v5;
    if ( v7 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
    v8 = *(_WORD *)(v3 + 188);
    if ( v8 >= 0x38 )
      LOWORD(v8) = 56;
    *(_WORD *)(v3 + 188) = v8;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x38 )
      v6 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v6;
  }
  *(_DWORD *)(v3 + 320) = 1031463240;
  return v3;
}


signed int __fastcall PrimedTnt::isPushableByPiston(PrimedTnt *this)
{
  return 1;
}
