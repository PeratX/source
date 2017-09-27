

signed int __fastcall Horse::isUndead(Horse *this)
{
  unsigned int v1; // r1@1
  signed int result; // r0@1

  v1 = (*(int (**)(void))(*(_DWORD *)this + 1200))() - 3;
  result = 0;
  if ( v1 < 2 )
    result = 1;
  return result;
}


signed int __fastcall Horse::rideableEntity(Horse *this)
{
  return 1;
}


unsigned int __fastcall Horse::setHorseFlag(int a1, int a2, int a3)
{
  int v3; // r4@1
  SynchedEntityData *v4; // r7@1
  int v5; // r8@1
  int v6; // r5@1
  int v7; // r6@1
  unsigned int result; // r0@2
  unsigned int v9; // r1@2
  int v10; // r2@3
  unsigned int v11; // r1@7
  unsigned int v12; // r0@7

  v3 = a1;
  v4 = (SynchedEntityData *)(a1 + 176);
  v5 = a2;
  v6 = a3;
  v7 = j_SynchedEntityData::getInt((SynchedEntityData *)(a1 + 176), 16);
  if ( v6 == 1 )
  {
    result = j_SynchedEntityData::_get(v4, 16);
    v9 = *(_DWORD *)(result + 4);
    if ( (unsigned __int8)v9 != 2 )
      return result;
    v10 = v7 | v5;
  }
  else
    v10 = v7 & ~v5;
  if ( *(_DWORD *)(result + 12) != v10 )
    *(_DWORD *)(result + 12) = v10;
    *(_BYTE *)(result + 8) = 1;
    v11 = v9 >> 16;
    v12 = *(_WORD *)(v3 + 188);
    if ( v12 >= v11 )
      LOWORD(v12) = v11;
    *(_WORD *)(v3 + 188) = v12;
    result = *(_WORD *)(v3 + 190);
    if ( result > v11 )
      LOWORD(v11) = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v11;
  return result;
}


unsigned int __fastcall Horse::openMouth(Horse *this)
{
  Horse *v1; // r4@1
  BlockSource *v2; // r0@1
  Level *v3; // r0@1
  unsigned int result; // r0@1
  int v5; // r5@2
  unsigned int v6; // r1@2
  unsigned int v7; // r1@4
  unsigned int v8; // r0@4

  v1 = this;
  v2 = (BlockSource *)j_Entity::getRegion(this);
  v3 = (Level *)j_BlockSource::getLevel(v2);
  result = j_Level::isClientSide(v3);
  if ( !result )
  {
    *((_DWORD *)v1 + 1085) = 1;
    v5 = j_SynchedEntityData::getInt((Horse *)((char *)v1 + 176), 16);
    result = j_SynchedEntityData::_get((Horse *)((char *)v1 + 176), 16);
    v6 = *(_DWORD *)(result + 4);
    if ( (unsigned __int8)v6 == 2 && *(_DWORD *)(result + 12) != (v5 | 0x80) )
    {
      *(_DWORD *)(result + 12) = v5 | 0x80;
      *(_BYTE *)(result + 8) = 1;
      v7 = v6 >> 16;
      v8 = *((_WORD *)v1 + 94);
      if ( v8 >= v7 )
        LOWORD(v8) = v7;
      *((_WORD *)v1 + 94) = v8;
      result = *((_WORD *)v1 + 95);
      if ( result > v7 )
        LOWORD(v7) = *((_WORD *)v1 + 95);
      *((_WORD *)v1 + 95) = v7;
    }
  }
  return result;
}


unsigned int __fastcall Horse::isAdult(Horse *this)
{
  return j_Entity::isBaby(this) ^ 1;
}


int __fastcall Horse::getInventorySize(Horse *this)
{
  Horse *v1; // r4@1
  int v2; // r5@1

  v1 = this;
  v2 = (*(int (**)(void))(*(_DWORD *)this + 372))();
  return (*(int (__fastcall **)(Horse *))(*(_DWORD *)v1 + 376))(v1) + v2;
}


void __fastcall Horse::reloadHardcoded(unsigned int a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r7@1
  unsigned int v4; // r10@1
  int v5; // r5@3
  unsigned int v6; // r4@3
  _BOOL4 v7; // r4@4
  void *v8; // r0@4
  unsigned int v9; // r8@6
  unsigned __int64 v10; // kr08_8@6
  unsigned int v11; // r6@6
  int v12; // r9@6
  int v13; // r10@7
  _DWORD *v14; // r11@7
  int v15; // r7@7
  _DWORD *v16; // r1@9
  size_t v17; // r2@9
  Entity *v18; // r5@13
  _BOOL4 v19; // r4@17
  void *v20; // r0@17
  unsigned int v21; // r11@19
  unsigned int v22; // r9@19
  int v23; // r6@19
  int v24; // r4@19
  int v25; // r8@20
  _DWORD *v26; // r10@20
  int v27; // r7@20
  _DWORD *v28; // r1@22
  size_t v29; // r2@22
  int v30; // r5@24
  Entity *v31; // r6@26
  bool v32; // zf@29
  int v33; // r4@32
  unsigned int v34; // r0@33
  Entity *v35; // r0@34
  int v36; // r8@37
  unsigned int *v37; // r2@38
  signed int v38; // r1@40
  unsigned int *v39; // r2@42
  signed int v40; // r1@44
  unsigned int v41; // r0@47
  Entity *v42; // r0@48
  int v43; // r4@51
  unsigned int *v44; // r2@69
  signed int v45; // r1@71
  unsigned int *v46; // r2@77
  signed int v47; // r1@79
  unsigned __int64 v48; // [sp+0h] [bp-50h]@7
  Entity *v49; // [sp+0h] [bp-50h]@20
  unsigned int v50; // [sp+4h] [bp-4Ch]@19
  void *v51; // [sp+Ch] [bp-44h]@19
  int v52; // [sp+14h] [bp-3Ch]@17
  void *s1; // [sp+1Ch] [bp-34h]@6
  int v54; // [sp+24h] [bp-2Ch]@4

  v3 = a3;
  v4 = a1;
  if ( a2 != 3 )
  {
    if ( a2 == 2 )
    {
      v5 = j_Random::_genRandInt32((Random *)(a1 + 552)) % 7;
      v6 = j_Random::_genRandInt32((Random *)(v4 + 552));
      j_Entity::setVariant((Entity *)v4, v5);
      j_j_j__ZN6Entity14setMarkVariantEi_0((Entity *)v4, v6 % 5);
    }
    return;
  }
  sub_21E94B4((void **)&v54, "other");
  v7 = j_VariantParameterList::hasParameter(v3, (int **)&v54);
  v8 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v54 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
    else
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  if ( v7 == 1 )
    sub_21E94B4(&s1, "other");
    v9 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
    v10 = *v3;
    v11 = v9 % (*v3 >> 32);
    v12 = *(_DWORD *)(*v3 + 4 * v11);
    if ( v12 )
      v48 = __PAIR__(v4, (unsigned int)v3);
      v13 = *(_DWORD *)v12;
      v14 = s1;
      v15 = *(_DWORD *)(*(_DWORD *)v12 + 32);
      while ( 1 )
      {
        if ( v15 == v9 )
        {
          v16 = *(_DWORD **)(v13 + 8);
          v17 = *(v14 - 3);
          if ( v17 == *(v16 - 3) && !j_memcmp_0(v14, v16, v17) )
            break;
        }
        if ( *(_DWORD *)v13 )
          v15 = *(_DWORD *)(v10 + 32);
          v12 = v13;
          v13 = *(_DWORD *)v13;
          if ( *(_DWORD *)(v10 + 32) % HIDWORD(v10) == v11 )
            continue;
        v18 = 0;
        v4 = HIDWORD(v48);
        v3 = (unsigned __int64 *)v48;
        goto LABEL_16;
      }
      v4 = HIDWORD(v48);
      if ( v12 )
        if ( *(_DWORD *)v12 )
          v18 = *(Entity **)(*(_DWORD *)v12 + 24);
        else
          v18 = 0;
      else
      v18 = 0;
LABEL_16:
    if ( v14 - 3 != &dword_28898C0 )
      v44 = v14 - 1;
      if ( &pthread_create )
        __dmb();
        do
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j__ZdlPv_9(v14 - 3);
  else
    v18 = 0;
  sub_21E94B4((void **)&v52, "parent");
  v19 = j_VariantParameterList::hasParameter(v3, (int **)&v52);
  v20 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v52 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  if ( v19 == 1 )
    sub_21E94B4(&v51, "parent");
    v21 = sub_21B417C((int *)v51, *((_DWORD *)v51 - 3), -955291385);
    v50 = v4;
    v22 = *v3 >> 32;
    v23 = v21 % v22;
    v24 = *(_DWORD *)(*v3 + 4 * v23);
    if ( v24 )
      v49 = v18;
      v25 = *(_DWORD *)v24;
      v26 = v51;
      v27 = *(_DWORD *)(*(_DWORD *)v24 + 32);
        if ( v27 == v21 )
          v28 = *(_DWORD **)(v25 + 8);
          v29 = *(v26 - 3);
          if ( v29 == *(v28 - 3) && !j_memcmp_0(v26, v28, v29) )
        v30 = *(_DWORD *)v25;
        if ( *(_DWORD *)v25 )
          v27 = *(_DWORD *)(v30 + 32);
          v24 = v25;
          v25 = *(_DWORD *)v25;
          if ( *(_DWORD *)(v30 + 32) % v22 == v23 )
        v31 = 0;
        v18 = v49;
        goto LABEL_28;
      v18 = v49;
      if ( v24 )
        v31 = (Entity *)(*(_DWORD *)v24 ? *(_DWORD *)(*(_DWORD *)v24 + 24) : 0);
      v31 = 0;
LABEL_28:
    if ( v26 - 3 != &dword_28898C0 )
      v46 = v26 - 1;
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
        v47 = (*v46)--;
      if ( v47 <= 0 )
        j_j_j_j__ZdlPv_9(v26 - 3);
    v32 = v18 == 0;
    if ( v18 )
      v32 = v31 == 0;
    if ( !v32 )
      v33 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v18 + 488))(v18);
      if ( v33 == (*(int (__fastcall **)(Entity *))(*(_DWORD *)v31 + 488))(v31) )
        v34 = j_Random::_genRandInt32((Random *)(v50 + 552)) % 0x14;
        if ( v34 > 8 )
          if ( v34 > 0x11 )
          {
            v36 = j_Random::_genRandInt32((Random *)(v50 + 552)) % 7;
LABEL_47:
            v41 = j_Random::_genRandInt32((Random *)(v50 + 552)) % 0x14;
            if ( v41 > 8 )
            {
              if ( v41 > 0x11 )
              {
                v43 = j_Random::_genRandInt32((Random *)(v50 + 552)) % 5;
                goto LABEL_53;
              }
              v42 = v31;
            }
            else
              v42 = v18;
            v43 = j_Entity::getMarkVariant(v42);
LABEL_53:
            j_Entity::setVariant((Entity *)v50, v36);
            j_Entity::setMarkVariant((Entity *)v50, v43);
            return;
          }
          v35 = v31;
          v35 = v18;
        v36 = j_Entity::getVariant(v35);
        goto LABEL_47;
}


int __fastcall Horse::getChestSlots(Horse *this)
{
  Horse *v1; // r4@1
  int v2; // r6@3
  int v3; // r5@3
  int result; // r0@3

  v1 = this;
  if ( j_Entity::isChested(this) == 1 && *((_DWORD *)v1 + 782) )
  {
    v2 = j_SynchedEntityData::getInt((Horse *)((char *)v1 + 176), 46);
    v3 = j_SynchedEntityData::getInt((Horse *)((char *)v1 + 176), 47);
    result = v2 + j_Entity::getStrength(v1) * v3;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall Horse::getEntityTypeId(Horse *this)
{
  unsigned int v1; // r0@1
  signed int result; // r0@2

  v1 = (*(int (**)(void))(*(_DWORD *)this + 1200))() - 1;
  if ( v1 <= 3 )
    result = dword_2610ABC[v1];
  else
    result = 2118423;
  return result;
}


int __fastcall Horse::getArmorValue(Horse *this)
{
  Horse *v1; // r4@1
  int v2; // r0@1
  int v3; // r5@1
  int v4; // r0@1
  bool v5; // zf@1
  int v6; // r0@6
  int result; // r0@6

  v1 = this;
  v2 = (*(int (**)(void))(*(_DWORD *)this + 1028))();
  v3 = v2;
  v4 = *(_BYTE *)(v2 + 15);
  v5 = v4 == 0;
  if ( v4 )
    v5 = *(_DWORD *)v3 == 0;
  if ( v5 || j_ItemInstance::isNull((ItemInstance *)v3) || !*(_BYTE *)(v3 + 14) )
  {
    result = 0;
  }
  else
    v6 = (*(int (__fastcall **)(Horse *, signed int))(*(_DWORD *)v1 + 1028))(v1, 1);
    result = (*(int (**)(void))(**(_DWORD **)v6 + 280))();
  return result;
}


signed int __fastcall Horse::tameWithOwner(Horse *this, Player *a2, int a3)
{
  int v3; // r4@1
  Player *v4; // r5@1
  MountTamingComponent *v5; // r0@1

  v3 = a3;
  v4 = a2;
  v5 = (MountTamingComponent *)j_Entity::getMountTamingComponent(this);
  if ( v5 )
    j_MountTamingComponent::tameWithOwner(v5, v4, v3);
  return 1;
}


void __fastcall Horse::~Horse(Horse *this)
{
  Horse *v1; // r0@1

  v1 = j_Horse::~Horse(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall Horse::normalTick(Horse *this)
{
  Horse *v1; // r4@1
  signed int v2; // r1@1
  int v3; // r5@3
  int v4; // r0@3
  unsigned int v5; // r1@3
  unsigned int v6; // r1@5
  unsigned int v7; // r0@5
  BlockSource *v8; // r0@10
  Level *v9; // r0@10
  signed int v10; // r1@11
  signed int v11; // r0@14
  int v12; // r2@15
  signed int v13; // r0@18
  int v14; // r2@19
  int v16; // r0@22
  signed int v21; // r0@24
  int result; // r0@34

  v1 = this;
  j_Mob::normalTick(this);
  v2 = *((_DWORD *)v1 + 1085);
  if ( v2 >= 1 )
  {
    *((_DWORD *)v1 + 1085) = v2 + 1;
    if ( v2 >= 30 )
    {
      *((_DWORD *)v1 + 1085) = 0;
      v3 = j_SynchedEntityData::getInt((Horse *)((char *)v1 + 176), 16);
      v4 = j_SynchedEntityData::_get((Horse *)((char *)v1 + 176), 16);
      v5 = *(_DWORD *)(v4 + 4);
      if ( (unsigned __int8)v5 == 2 && *(_DWORD *)(v4 + 12) != (v3 & 0xFFFFFF7F) )
      {
        *(_DWORD *)(v4 + 12) = v3 & 0xFFFFFF7F;
        *(_BYTE *)(v4 + 8) = 1;
        v6 = v5 >> 16;
        v7 = *((_WORD *)v1 + 94);
        if ( v7 >= v6 )
          LOWORD(v7) = v6;
        *((_WORD *)v1 + 94) = v7;
        if ( *((_WORD *)v1 + 95) > v6 )
          LOWORD(v6) = *((_WORD *)v1 + 95);
        *((_WORD *)v1 + 95) = v6;
      }
    }
  }
  v8 = (BlockSource *)j_Entity::getRegion(v1);
  v9 = (Level *)j_BlockSource::getLevel(v8);
  if ( !j_Level::isClientSide(v9) )
    v10 = *((_DWORD *)v1 + 1086);
    if ( v10 >= 1 )
      *((_DWORD *)v1 + 1086) = v10 + 1;
      if ( v10 >= 20 )
        *((_DWORD *)v1 + 1086) = 0;
        (*(void (__fastcall **)(Horse *, _DWORD))(*(_DWORD *)v1 + 380))(v1, 0);
  v11 = *((_DWORD *)v1 + 1089);
  if ( v11 >= 1 )
    v12 = v11 + 1;
    if ( v11 > 7 )
      v12 = 0;
    *((_DWORD *)v1 + 1089) = v12;
  v13 = *((_DWORD *)v1 + 1087);
  if ( v13 >= 1 )
    v14 = v13 + 1;
    if ( v13 >= 300 )
      v14 = 0;
    *((_DWORD *)v1 + 1087) = v14;
  _R5 = (signed int *)((char *)v1 + 4312);
  *((_DWORD *)v1 + 1079) = *((_DWORD *)v1 + 1078);
  v16 = (*(int (__fastcall **)(Horse *))(*(_DWORD *)v1 + 1252))(v1);
  __asm { VLDR            S0, [R5] }
  if ( v16 == 1 )
    __asm
      VMOV.F32        S2, #1.0
      VLDR            S6, =0.05
      VLDR            S8, =0.4
      VSUB.F32        S4, S2, S0
      VADD.F32        S0, S0, S6
      VMUL.F32        S4, S4, S8
      VADD.F32        S0, S0, S4
      VCMPE.F32       S0, S2
      VSTR            S0, [R5]
      VMRS            APSR_nzcv, FPSCR
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      goto LABEL_29;
    v21 = 1065353216;
    goto LABEL_28;
  __asm
    VLDR            S2, =-0.4
    VLDR            S4, =-0.05
    VMUL.F32        S2, S0, S2
    VADD.F32        S2, S2, S4
    VADD.F32        S0, S2, S0
    VCMPE.F32       S0, #0.0
    VSTR            S0, [R5]
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    v21 = 0;
LABEL_28:
    *_R5 = v21;
LABEL_29:
  _R7 = (Horse *)((char *)v1 + 4320);
  *((_DWORD *)v1 + 1081) = *((_DWORD *)v1 + 1080);
  if ( j_Entity::isStanding(v1) == 1 )
      VMOV.F32        S0, #1.0
    *_R5 = 0;
    *((_DWORD *)v1 + 1079) = 0;
      VLDR            S2, [R7]
      VSUB.F32        S4, S0, S2
      VADD.F32        S2, S2, S6
      VADD.F32        S2, S2, S4
      VCMPE.F32       S2, S0
      VSTR            S2, [R7]
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      *(_DWORD *)_R7 = 1065353216;
  else
    __asm { VLDR            S4, =0.8 }
    *((_BYTE *)v1 + 4092) = 0;
      VLDR            S0, [R7]
      VLDR            S6, =0.6
      VMUL.F32        S2, S0, S0
      VMUL.F32        S2, S2, S4
      VLDR            S4, =-0.05
      VMUL.F32        S2, S2, S0
      VSUB.F32        S2, S2, S0
      VMUL.F32        S2, S2, S6
      VADD.F32        S0, S0, S2
      VCMPE.F32       S0, #0.0
      VSTR            S0, [R7]
    if ( _NF ^ _VF )
      *(_DWORD *)_R7 = 0;
  _R5 = (Horse *)((char *)v1 + 4328);
  *((_DWORD *)v1 + 1083) = *((_DWORD *)v1 + 1082);
  result = j_SynchedEntityData::getInt((Horse *)((char *)v1 + 176), 16);
  if ( result & 0x80 )
      VLDR            S8, =0.7
      return result;
    result = 1065353216;
    goto LABEL_40;
    VLDR            S2, =-0.7
    result = 0;
LABEL_40:
    *(_DWORD *)_R5 = result;
  return result;
}


int __fastcall Horse::isImmobile(Horse *this)
{
  Horse *v1; // r4@1
  int result; // r0@2
  unsigned int v3; // r0@3
  bool v4; // zf@3

  v1 = this;
  if ( (*(int (**)(void))(*(_DWORD *)this + 1252))() )
  {
    result = 1;
  }
  else
    v3 = j_Entity::isStanding(v1);
    v4 = v3 == 1;
    if ( v3 == 1 )
      v4 = *((_BYTE *)v1 + 4092) == 0;
    if ( v4 )
      result = j_Mob::isJumping(v1) ^ 1;
    else
      result = 0;
  return result;
}


int __fastcall Horse::getShadowRadius(Horse *this)
{
  int result; // r0@1

  _R0 = j_Entity::getShadowRadius(this);
  __asm
  {
    VLDR            S0, =0.6
    VMOV            S2, R0
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


signed int __fastcall Horse::isPushable(Horse *this)
{
  __int64 v1; // kr00_8@1
  signed int result; // r0@2

  v1 = *(_QWORD *)((char *)this + 476);
  if ( HIDWORD(v1) == (_DWORD)v1 )
  {
    result = 1;
  }
  else
    result = 0;
    if ( !*(_DWORD *)v1 )
      result = 1;
  return result;
}


Entity *__fastcall Horse::getClosestMommy(Horse *this, Entity *a2, float a3)
{
  Entity *v3; // r9@1
  BlockSource *v4; // r6@1
  Entity **v5; // r6@1
  __int64 v6; // kr00_8@1
  Entity *v9; // r5@2
  int v10; // r0@3
  Entity *v11; // r7@4
  const Vec3 *v12; // r0@4
  float v17; // [sp+0h] [bp-50h]@1
  float v18; // [sp+4h] [bp-4Ch]@1
  float v19; // [sp+8h] [bp-48h]@1
  char v20; // [sp+Ch] [bp-44h]@1

  v3 = a2;
  v17 = a3;
  v18 = a3;
  v19 = a3;
  v4 = (BlockSource *)j_Entity::getRegion(this);
  j_AABB::grow((AABB *)&v20, (Entity *)((char *)v3 + 264), (int)&v17);
  v6 = *(_QWORD *)j_BlockSource::fetchEntities(v4, v3, (const AABB *)&v20);
  v5 = (Entity **)v6;
  if ( (_DWORD)v6 == HIDWORD(v6) )
  {
    v9 = 0;
  }
  else
    __asm { VLDR            S16, =3.4028e38 }
    do
    {
      v10 = (*(int (**)(void))(*(_DWORD *)*v5 + 488))();
      if ( j_EntityClassTree::isTypeInstanceOf(v10, 2118400) == 1 )
      {
        v11 = *v5;
        v12 = (const Vec3 *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 52))(v3);
        _R0 = j_Entity::distanceToSqr(v11, v12);
        __asm
        {
          VMOV            S0, R0
          VCMPE.F32       S0, S16
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
          __asm { VMOVLT.F32      S16, S0 }
          v9 = *v5;
      }
      ++v5;
    }
    while ( (Entity **)HIDWORD(v6) != v5 );
  return v9;
}


signed int __fastcall Horse::isAmuletHorse(Horse *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = (*(int (**)(void))(*(_DWORD *)this + 1200))();
  v2 = 0;
  if ( v1 == 4 )
    v2 = 1;
  return v2;
}


void __fastcall Horse::~Horse(Horse *this)
{
  Horse::~Horse(this);
}


int __fastcall Horse::travel(Horse *this, float a2, float a3)
{
  int v3; // r7@0
  Horse *v4; // r4@1
  float v5; // r6@1
  __int64 v6; // r0@1
  float v7; // r8@1
  bool v8; // zf@1
  signed int v9; // r5@5
  Level *v10; // r0@8
  Level *v11; // r0@9
  Entity *v12; // r0@9
  char *v13; // r0@9
  int v14; // r5@10
  int result; // r0@14
  __int64 v16; // [sp+0h] [bp-20h]@9

  v4 = this;
  v5 = a2;
  v6 = *(_QWORD *)((char *)this + 476);
  v7 = a3;
  v8 = HIDWORD(v6) == (_DWORD)v6;
  if ( HIDWORD(v6) != (_DWORD)v6 )
  {
    v3 = *(_DWORD *)v6;
    v8 = *(_DWORD *)v6 == 0;
  }
  if ( v8 )
    v3 = 0;
    v9 = 1;
  else
    if ( j_EntityClassTree::isInstanceOf(v3, 256) == 1 && j_Entity::hasSaddle(v4) )
    {
      v10 = (Level *)j_Entity::getLevel(v4);
      if ( j_Level::getPrimaryLocalPlayer(v10)
        && ((*(void (__fastcall **)(__int64 *, Horse *))(*(_DWORD *)v4 + 540))(&v16, v4),
            v11 = (Level *)j_Entity::getLevel(v4),
            v12 = (Entity *)j_Level::getPrimaryLocalPlayer(v11),
            v13 = j_Entity::getUniqueID(v12),
            *(_QWORD *)v13 == v16) )
      {
        v14 = *((_BYTE *)v4 + 216);
        j_Mob::travel(v4, v5, v7);
        if ( *((_BYTE *)v4 + 216) )
        {
          if ( !v14 )
            (*(void (__fastcall **)(Horse *, _DWORD))(*(_DWORD *)v4 + 380))(v4, 0);
          *((_DWORD *)v4 + 1022) = 0;
          j_Mob::setJumping(v4, 0);
        }
        result = j_Entity::sendMotionToServer(v4, 0);
      }
      else
        result = j_Mob::travel(v4, 0.0, 0.0);
      return result;
    }
    v9 = 0;
  *((_DWORD *)v4 + 82) = 1058013184;
  *((_DWORD *)v4 + 1002) = 1017370378;
  result = j_Mob::travel(v4, v5, v7);
  if ( !v9 )
    j_Entity::setPreviousPosRot(v3, v3 + 72, (_QWORD *)(v3 + 120));
    result = (*(int (__fastcall **)(Horse *, int, _DWORD))(*(_DWORD *)v4 + 136))(v4, v3, 0);
  return result;
}


unsigned int __fastcall Horse::setType(Horse *this, int a2)
{
  Horse *v2; // r4@1
  unsigned __int8 v3; // r5@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = this;
  v3 = a2;
  result = j_SynchedEntityData::_get((Horse *)((char *)this + 176), 19);
  v5 = *(_DWORD *)(result + 4);
  if ( !(_BYTE)v5 && *(_BYTE *)(result + 9) != v3 )
  {
    *(_BYTE *)(result + 9) = v3;
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


Horse *__fastcall Horse::positionRider(Horse *this, Entity *a2, float a3)
{
  float v3; // r7@1
  Entity *v4; // r4@1
  Horse *result; // r0@1
  int v11; // r8@2
  __int64 v15; // kr00_8@2
  float v17; // [sp+4h] [bp-54h]@2
  int v18; // [sp+10h] [bp-48h]@2
  int v19; // [sp+14h] [bp-44h]@2

  v3 = a3;
  v4 = a2;
  _R6 = this;
  j_Entity::positionRider(this, a2, 0.0);
  result = (Horse *)((char *)_R6 + 4324);
  __asm
  {
    VLDR            S0, [R0]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    v11 = *((_DWORD *)_R6 + 42);
    j_mce::Radian::Radian((int)&v19, *((_DWORD *)_R6 + 42));
    _R9 = j_mce::Math::sin(v19);
    j_mce::Radian::Radian((int)&v18, v11);
    _R5 = j_mce::Math::cos(v18);
    _R0 = (*(int (__fastcall **)(Horse *, _DWORD))(*(_DWORD *)_R6 + 1212))(_R6, LODWORD(v3));
    __asm
    {
      VMOV            S2, R0
      VLDR            S0, =0.7
      VMOV            S4, R9
      VMUL.F32        S0, S2, S0
      VLDR            S6, =0.15
      VMOV            S8, R5
      VLDR            S22, [R6,#0x98]
    }
    v15 = *(_QWORD *)(*(_DWORD *)v4 + 48);
      VMUL.F32        S18, S2, S6
      VMUL.F32        S16, S0, S4
      VMUL.F32        S20, S0, S8
    _R0 = ((int (__fastcall *)(_DWORD))HIDWORD(v15))(v4);
      VLDR            S0, [R0,#4]
      VADD.F32        S4, S22, S16
      VLDR            S2, [R6,#0xA0]
      VADD.F32        S0, S0, S18
      VSUB.F32        S2, S2, S20
      VSTR            S4, [SP,#0x58+var_54]
      VSTR            S0, [SP,#0x58+var_50]
      VSTR            S2, [SP,#0x58+var_4C]
    ((void (__fastcall *)(Entity *, float *))v15)(v4, &v17);
    result = (Horse *)j_EntityClassTree::isInstanceOf((int)v4, 256);
    if ( result == (Horse *)1 )
      *((_DWORD *)v4 + 853) = v11;
  return result;
}


int __fastcall Horse::handleFallDistanceOnServer(int result, float _R1, bool a3)
{
  int v6; // r4@1
  int (__fastcall *v7)(int, signed int, char *, signed int); // r6@2
  int v9; // r5@4
  Entity *v10; // r6@5
  __int64 v11; // r0@5
  float v14; // r3@9
  float v15; // r1@9
  BlockSource *v18; // r0@9
  Block *v19; // r0@9
  Block *v20; // r5@9
  int *v21; // r0@9
  int (__fastcall *v22)(int, signed int, char *, _DWORD); // r7@10
  char v23; // [sp+4h] [bp-54h]@10
  char v24; // [sp+10h] [bp-48h]@9
  char v25; // [sp+1Ch] [bp-3Ch]@8
  char v26; // [sp+24h] [bp-34h]@5
  char v27; // [sp+2Ch] [bp-2Ch]@2

  __asm { VMOV.F32        S0, #1.0 }
  v6 = result;
  __asm
  {
    VMOV            S16, R1
    VCMPE.F32       S16, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    v7 = *(int (__fastcall **)(int, signed int, char *, signed int))(*(_DWORD *)result + 556);
    j_Entity::getAttachPos((AABB *)&v27, result, 0, 0);
    result = v7(v6, 35, &v27, -1);
    VMOV.F32        S0, #0.5
    VMOV.F32        S2, #-3.0
    VMUL.F32        S0, S16, S0
    VADD.F32        S0, S0, S2
    VCMPE.F32       S0, #0.0
    __asm { VMOV            R0, S0 }
    result = j_mce::Math::ceil(_R0, _R1);
    v9 = result;
    if ( result >= 1 )
    {
      v10 = (Entity *)&v26;
      j_EntityDamageSource::EntityDamageSource((int)&v26, 5);
      j_Entity::hurt((Entity *)v6, (const EntityDamageSource *)&v26, v9, 1, 0);
      j_EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v26);
      v11 = *(_QWORD *)(v6 + 476);
      _ZF = HIDWORD(v11) == (_DWORD)v11;
      if ( HIDWORD(v11) != (_DWORD)v11 )
      {
        v10 = *(Entity **)v11;
        _ZF = *(_DWORD *)v11 == 0;
      }
      if ( !_ZF )
        j_EntityDamageSource::EntityDamageSource((int)&v25, 5);
        j_Entity::hurt(v10, (const EntityDamageSource *)&v25, v9, 1, 0);
        j_EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v25);
      _R0 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 52))(v6);
      __asm
        VLDR            S0, =-0.2
        VLDR            S2, [R0,#4]
      v14 = *(float *)(_R0 + 8);
      __asm { VADD.F32        S0, S2, S0 }
      v15 = *(float *)_R0;
      _R0 = v6 + 4156;
        VLDR            S2, [R0]
        VSUB.F32        S0, S0, S2
        VMOV            R2, S0
      j_BlockPos::BlockPos((BlockPos *)&v24, v15, _R2, v14);
      v18 = (BlockSource *)j_Entity::getRegion((Entity *)v6);
      v19 = (Block *)j_BlockSource::getBlock(v18, (const BlockPos *)&v24);
      v20 = v19;
      v21 = (int *)j_Block::getMaterial(v19);
      result = j_Material::isType(v21, 0);
      if ( !result )
        v22 = *(int (__fastcall **)(int, signed int, char *, _DWORD))(*(_DWORD *)v6 + 556);
        j_Entity::getAttachPos((AABB *)&v23, v6, 0, 0);
        result = v22(v6, 9, &v23, *((_BYTE *)v20 + 4));
    }
  return result;
}


int __fastcall Horse::getMouthAnim(Horse *this, float _R1)
{
  int result; // r0@1

  _R2 = (char *)this + 4332;
  _R0 = (char *)this + 4328;
  __asm
  {
    VMOV            S4, R1
    VLDR            S0, [R2]
    VLDR            S2, [R0]
    VSUB.F32        S2, S2, S0
    VMUL.F32        S2, S2, S4
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


_BOOL4 __fastcall Horse::getHorseFlag(int a1, int a2)
{
  return (j_SynchedEntityData::getInt((SynchedEntityData *)(a1 + 176), 16) & a2) != 0;
}


int __fastcall Horse::getEatAnim(Horse *this, float _R1)
{
  int result; // r0@1

  _R2 = (char *)this + 4316;
  _R0 = (char *)this + 4312;
  __asm
  {
    VMOV            S4, R1
    VLDR            S0, [R2]
    VLDR            S2, [R0]
    VSUB.F32        S2, S2, S0
    VMUL.F32        S2, S2, S4
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


int __fastcall Horse::openContainerComponent(Horse *this, Player *a2)
{
  Player *v2; // r4@1
  Horse *v3; // r5@1
  Level *v4; // r0@1
  int result; // r0@1
  int (__fastcall *v6)(Player *, char *); // r6@3
  char *v7; // r1@3

  v2 = a2;
  v3 = this;
  v4 = (Level *)j_Entity::getLevel(this);
  result = j_Level::isClientSide(v4);
  if ( !result )
  {
    result = *((_DWORD *)v3 + 782);
    if ( result )
    {
      v6 = *(int (__fastcall **)(Player *, char *))(*(_DWORD *)v2 + 1340);
      v7 = j_Entity::getUniqueID(v3);
      result = v6(v2, v7);
    }
  }
  return result;
}


signed int __fastcall Horse::isReadyForParenting(Horse *this)
{
  Horse *v1; // r4@1
  __int64 v2; // r0@1
  bool v3; // zf@1
  signed int v4; // r5@8
  int v5; // r6@9
  signed int result; // r0@11

  v1 = this;
  v2 = *(_QWORD *)((char *)this + 476);
  v3 = HIDWORD(v2) == (_DWORD)v2;
  if ( HIDWORD(v2) != (_DWORD)v2 )
    v3 = *(_DWORD *)v2 == 0;
  if ( !v3
    || *((_DWORD *)v1 + 128)
    || j_Entity::isTame(v1) != 1
    || (*(int (__fastcall **)(Horse *))(*(_DWORD *)v1 + 1248))(v1) != 1 )
  {
    result = 0;
  }
  else
    v4 = 0;
    if ( !(*(int (__fastcall **)(Horse *))(*(_DWORD *)v1 + 1244))(v1) )
    {
      v5 = j_Mob::getHealth(v1);
      if ( v5 >= j_Mob::getMaxHealth(v1) )
        v4 = 1;
    }
    result = v4;
  return result;
}


int __fastcall Horse::getStandAnim(Horse *this, float _R1)
{
  int result; // r0@1

  __asm { VMOV            S4, R1 }
  _R2 = (char *)this + 4324;
  _R0 = (char *)this + 4320;
  __asm
  {
    VLDR            S0, [R2]
    VLDR            S2, [R0]
    VSUB.F32        S2, S2, S0
    VMUL.F32        S2, S2, S4
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


void **__fastcall Horse::getMadSound(Horse *this, Horse *a2)
{
  Horse *v2; // r5@1
  void **v3; // r4@1
  int v4; // r0@1
  void **result; // r0@2

  v2 = a2;
  v3 = (void **)this;
  j_Horse::openMouth(a2);
  (*(void (__fastcall **)(Horse *, signed int))(*(_DWORD *)v2 + 380))(v2, 1);
  v4 = (*(int (__fastcall **)(Horse *))(*(_DWORD *)v2 + 1200))(v2);
  if ( (unsigned int)(v4 - 3) > 1 )
  {
    if ( (unsigned int)(v4 - 1) > 1 )
      result = sub_21E94B4(v3, "mob.horse.angry");
    else
      result = sub_21E94B4(v3, "mob.horse.donkey.angry");
  }
  else
    result = sub_21E94B4(v3, (const char *)&unk_257BC67);
  return result;
}


int __fastcall Horse::setReproduced(int result, bool a2)
{
  *(_BYTE *)(result + 4308) = a2;
  return result;
}


int __fastcall Horse::Horse(int a1, int a2, int *a3)
{
  int *v3; // r9@1
  int v4; // r4@1
  int *v5; // r6@1
  int v6; // r7@2
  _BYTE *v7; // r0@2
  int v8; // r1@2
  unsigned int v9; // r0@4
  signed __int16 v10; // r1@4
  int v11; // r5@10
  _BYTE *v12; // r0@10
  signed __int16 v13; // r7@10
  int v14; // r1@10
  unsigned int v15; // r0@12
  int v16; // r7@18
  _BYTE *v17; // r0@18
  signed __int16 v18; // r6@18
  int v19; // r1@18
  unsigned int v20; // r0@20
  char *v21; // r5@25
  void *v22; // r0@25
  unsigned int *v24; // r2@39
  signed int v25; // r1@41
  int v26; // [sp+0h] [bp-30h]@25

  v3 = a3;
  v4 = a1;
  j_Animal::Animal(a1, a2, a3);
  *(_DWORD *)v4 = &off_271C5BC;
  *(_DWORD *)(v4 + 4292) = &unk_28898CC;
  *(_DWORD *)(v4 + 4296) = &unk_28898CC;
  *(_DWORD *)(v4 + 4300) = &unk_28898CC;
  *(_DWORD *)(v4 + 4304) = &unk_28898CC;
  *(_BYTE *)(v4 + 4308) = 0;
  j___aeabi_memclr8_0(v4 + 4312, 48);
  *(_DWORD *)(v4 + 248) = 55;
  j_Mob::registerAttributes((Mob *)v4);
  v5 = (int *)(v4 + 176);
  if ( !j_SynchedEntityData::_find((SynchedEntityData *)(v4 + 176), 16) )
  {
    j_SynchedEntityData::_resizeToContain((SynchedEntityData *)(v4 + 176), 16);
    v6 = *v5;
    v7 = j_operator new(0x10u);
    v7[4] = 2;
    *((_WORD *)v7 + 3) = 16;
    v7[8] = 1;
    *(_DWORD *)v7 = &off_26F08C4;
    *((_DWORD *)v7 + 3) = 0;
    v8 = *(_DWORD *)(v6 + 64);
    *(_DWORD *)(v6 + 64) = v7;
    if ( v8 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
    v9 = *(_WORD *)(v4 + 188);
    v10 = 16;
    if ( v9 >= 0x10 )
      LOWORD(v9) = 16;
    *(_WORD *)(v4 + 188) = v9;
    if ( (unsigned int)*(_WORD *)(v4 + 190) > 0x10 )
      v10 = *(_WORD *)(v4 + 190);
    *(_WORD *)(v4 + 190) = v10;
  }
  if ( !j_SynchedEntityData::_find((SynchedEntityData *)(v4 + 176), 19) )
    j_SynchedEntityData::_resizeToContain((SynchedEntityData *)(v4 + 176), 19);
    v11 = *v5;
    v12 = j_operator new(0xCu);
    v13 = 19;
    v12[4] = 0;
    *((_WORD *)v12 + 3) = 19;
    v12[8] = 1;
    *(_DWORD *)v12 = &off_26F1394;
    v12[9] = 0;
    v14 = *(_DWORD *)(v11 + 76);
    *(_DWORD *)(v11 + 76) = v12;
    if ( v14 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 4))(v14);
    v15 = *(_WORD *)(v4 + 188);
    if ( v15 >= 0x13 )
      LOWORD(v15) = 19;
    *(_WORD *)(v4 + 188) = v15;
    if ( (unsigned int)*(_WORD *)(v4 + 190) > 0x13 )
      v13 = *(_WORD *)(v4 + 190);
    *(_WORD *)(v4 + 190) = v13;
  if ( !j_SynchedEntityData::_find((SynchedEntityData *)(v4 + 176), 25) )
    j_SynchedEntityData::_resizeToContain((SynchedEntityData *)(v4 + 176), 25);
    v16 = *v5;
    v17 = j_operator new(0x10u);
    v17[4] = 2;
    v18 = 25;
    *((_WORD *)v17 + 3) = 25;
    v17[8] = 1;
    *(_DWORD *)v17 = &off_26F08C4;
    *((_DWORD *)v17 + 3) = 0;
    v19 = *(_DWORD *)(v16 + 100);
    *(_DWORD *)(v16 + 100) = v17;
    if ( v19 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 4))(v19);
    v20 = *(_WORD *)(v4 + 188);
    if ( v20 >= 0x19 )
      LOWORD(v20) = 25;
    *(_WORD *)(v4 + 188) = v20;
    if ( (unsigned int)*(_WORD *)(v4 + 190) > 0x19 )
      v18 = *(_WORD *)(v4 + 190);
    *(_WORD *)(v4 + 190) = v18;
  j_EntityDefinitionIdentifier::getCanonicalName((EntityDefinitionIdentifier *)&v26, v3);
  v21 = j_EntityTypeFromString((const void **)&v26);
  v22 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v26 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
    }
    else
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  if ( (signed int)v21 <= 2118424 )
    if ( v21 == (char *)2118423 )
      (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v4 + 1196))(v4, 0);
      goto LABEL_38;
    if ( v21 == (char *)2118424 )
      (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v4 + 1196))(v4, 1);
LABEL_37:
    (*(void (__fastcall **)(_DWORD, signed int))(*(_DWORD *)v4 + 1196))(v4, -1);
    goto LABEL_38;
  if ( v21 == (char *)2118425 )
    (*(void (__fastcall **)(_DWORD, signed int))(*(_DWORD *)v4 + 1196))(v4, 2);
  if ( v21 == (char *)2186010 )
    (*(void (__fastcall **)(_DWORD, signed int))(*(_DWORD *)v4 + 1196))(v4, 4);
  if ( v21 != (char *)2186011 )
    goto LABEL_37;
  (*(void (__fastcall **)(_DWORD, signed int))(*(_DWORD *)v4 + 1196))(v4, 3);
LABEL_38:
  *(_DWORD *)(v4 + 3984) = 1072064102;
  return v4;
}


int __fastcall Horse::setStanding(Horse *this, int a2)
{
  int v2; // r5@1
  Horse *v3; // r4@1
  BlockSource *v4; // r0@1
  Level *v5; // r0@1
  int result; // r0@1

  v2 = a2;
  v3 = this;
  j_Entity::setStanding(this, a2);
  v4 = (BlockSource *)j_Entity::getRegion(v3);
  v5 = (Level *)j_BlockSource::getLevel(v4);
  result = j_Level::isClientSide(v5);
  if ( !result )
  {
    result = v2 ^ 1;
    if ( v2 == 1 )
    {
      result = 4344;
      *((_DWORD *)v3 + 1086) = 1;
    }
  }
  if ( v2 == 1 )
    result = (*(int (__fastcall **)(Horse *, _DWORD))(*(_DWORD *)v3 + 1204))(v3, 0);
  return result;
}


signed int __fastcall Horse::getEquipSlots(Horse *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = (*(int (**)(void))(*(_DWORD *)this + 1220))();
  v2 = 1;
  if ( v1 )
    v2 = 2;
  return v2;
}


void __fastcall Horse::die(Horse *this, const EntityDamageSource *a2)
{
  Horse::die(this, a2);
}


void __fastcall Horse::reloadHardcoded(unsigned int a1, int a2, unsigned __int64 *a3)
{
  Horse::reloadHardcoded(a1, a2, a3);
}


signed int __fastcall Horse::getAmbientSoundPostponeTicks(Horse *this)
{
  signed int result; // r0@2
  float v6; // [sp+4h] [bp-Ch]@1

  v6 = 0.0;
  if ( j_Entity::getAmbientSoundIntervalMin(this, &v6) == 1 )
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
    result = 8000;
  return result;
}


unsigned int __fastcall Horse::aiStep(Horse *this)
{
  Horse *v1; // r4@1
  Random *v2; // r5@1
  BlockSource *v3; // r0@3
  Level *v4; // r0@3
  unsigned int result; // r0@3
  unsigned int v6; // r0@4
  bool v7; // zf@4
  __int64 v8; // r0@10
  bool v9; // zf@10
  int v10; // r0@15
  BlockSource *v11; // r0@15
  Block *v12; // r0@15
  signed int v13; // r1@18
  int v14; // r0@20
  int v15; // r2@20
  int v16; // r5@22
  unsigned int v17; // r1@22
  unsigned int v18; // r1@24
  unsigned int v19; // r0@24
  int v20; // [sp+0h] [bp-28h]@15
  int v21; // [sp+4h] [bp-24h]@15
  int v22; // [sp+8h] [bp-20h]@15
  char v23; // [sp+Ch] [bp-1Ch]@15
  int v24; // [sp+10h] [bp-18h]@15
  int v25; // [sp+14h] [bp-14h]@15

  v1 = this;
  v2 = (Horse *)((char *)this + 552);
  if ( !(j_Random::_genRandInt32((Horse *)((char *)this + 552)) % 0xC8) )
    *((_DWORD *)v1 + 1089) = 1;
  j_Mob::aiStep(v1);
  v3 = (BlockSource *)j_Entity::getRegion(v1);
  v4 = (Level *)j_BlockSource::getLevel(v3);
  result = j_Level::isClientSide(v4);
  if ( !result )
  {
    v6 = j_Random::_genRandInt32(v2) % 0x384;
    v7 = v6 == 0;
    if ( !v6 )
      v7 = *((_DWORD *)v1 + 862) == 0;
    if ( v7 )
      (*(void (__fastcall **)(Horse *, signed int))(*(_DWORD *)v1 + 836))(v1, 1);
    if ( !(*(int (__fastcall **)(Horse *))(*(_DWORD *)v1 + 1252))(v1) )
    {
      v8 = *(_QWORD *)((char *)v1 + 476);
      v9 = HIDWORD(v8) == (_DWORD)v8;
      if ( HIDWORD(v8) != (_DWORD)v8 )
        v9 = *(_DWORD *)v8 == 0;
      if ( v9 && !(j_Random::_genRandInt32(v2) % 0x12C) )
      {
        v10 = (*(int (__fastcall **)(Horse *))(*(_DWORD *)v1 + 52))(v1);
        j_BlockPos::BlockPos((int)&v23, v10);
        v11 = (BlockSource *)j_Entity::getRegion(v1);
        v20 = *(_DWORD *)&v23;
        v21 = v24 - 1;
        v22 = v25;
        v12 = (Block *)j_BlockSource::getBlock(v11, (const BlockPos *)&v20);
        if ( j_Block::isType(v12, (const Block *)Block::mGrass) == 1 )
          (*(void (__fastcall **)(Horse *, signed int))(*(_DWORD *)v1 + 1204))(v1, 1);
      }
    }
    if ( (*(int (__fastcall **)(Horse *))(*(_DWORD *)v1 + 1252))(v1) == 1
      && (v13 = *((_DWORD *)v1 + 1084), *((_DWORD *)v1 + 1084) = v13 + 1, v13 > 49)
      || j_Mob::getNavigation(v1)
      && (v14 = j_Mob::getNavigation(v1),
          !(*(int (__cdecl **)(int, _DWORD, int))(*(_DWORD *)v14 + 36))(v14, *(_DWORD *)(*(_DWORD *)v14 + 36), v15)) )
      *((_DWORD *)v1 + 1084) = 0;
      (*(void (__fastcall **)(Horse *, _DWORD))(*(_DWORD *)v1 + 1204))(v1, 0);
    v16 = j_Entity::getAge(v1);
    result = j_SynchedEntityData::_get((Horse *)((char *)v1 + 176), 25);
    v17 = *(_DWORD *)(result + 4);
    if ( (unsigned __int8)v17 == 2 && *(_DWORD *)(result + 12) != v16 )
      *(_DWORD *)(result + 12) = v16;
      *(_BYTE *)(result + 8) = 1;
      v18 = v17 >> 16;
      v19 = *((_WORD *)v1 + 94);
      if ( v19 >= v18 )
        LOWORD(v19) = v18;
      *((_WORD *)v1 + 94) = v19;
      result = *((_WORD *)v1 + 95);
      if ( result > v18 )
        LOWORD(v18) = *((_WORD *)v1 + 95);
      *((_WORD *)v1 + 95) = v18;
  }
  return result;
}


signed int __fastcall Horse::isHorseArmor(Horse *this, Item *a2)
{
  Horse *v2; // r1@1
  signed int result; // r0@1

  v2 = this;
  result = 1;
  if ( (Horse *)Item::mLeatherHorseArmor != v2
    && (Horse *)Item::mIronHorseArmor != v2
    && (Horse *)Item::mGoldHorseArmor != v2 )
  {
    result = 0;
    if ( (Horse *)Item::mDiamondHorseArmor == v2 )
      result = 1;
  }
  return result;
}


int __fastcall Horse::causeFallDamage(int result, float _R1)
{
  int v5; // r4@1
  int (__fastcall *v6)(int, signed int, char *, signed int); // r6@2
  AttributeInstance *v7; // r0@4
  float v10; // r1@4
  int v11; // r5@4
  Level *v12; // r0@5
  Level *v13; // r0@6
  int v14; // r0@6
  Entity *v15; // r6@7
  __int64 v16; // r0@7
  float v19; // r3@11
  float v20; // r1@11
  BlockSource *v23; // r0@11
  Block *v24; // r0@11
  Block *v25; // r5@11
  int *v26; // r0@11
  int (__fastcall *v27)(int, signed int, char *, _DWORD); // r7@12
  char v28; // [sp+8h] [bp-88h]@12
  char v29; // [sp+14h] [bp-7Ch]@11
  char v30; // [sp+20h] [bp-70h]@10
  char v31; // [sp+28h] [bp-68h]@7
  int v32; // [sp+30h] [bp-60h]@6
  int v33; // [sp+34h] [bp-5Ch]@6
  void **v34; // [sp+38h] [bp-58h]@6
  signed int v35; // [sp+3Ch] [bp-54h]@6
  signed int v36; // [sp+40h] [bp-50h]@6
  char v37; // [sp+44h] [bp-4Ch]@6
  int v38; // [sp+48h] [bp-48h]@6
  int v39; // [sp+4Ch] [bp-44h]@6
  char v40; // [sp+54h] [bp-3Ch]@6
  char v41; // [sp+5Ch] [bp-34h]@2

  __asm { VMOV.F32        S0, #1.0 }
  v5 = result;
  __asm
  {
    VMOV            S16, R1
    VCMPE.F32       S16, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    v6 = *(int (__fastcall **)(int, signed int, char *, signed int))(*(_DWORD *)result + 556);
    j_Entity::getAttachPos((AABB *)&v41, result, 0, 0);
    result = v6(v5, 35, &v41, -1);
    VMOV.F32        S0, #0.5
    VMOV.F32        S2, #-3.0
    VMUL.F32        S0, S16, S0
    VADD.F32        S18, S0, S2
    VCMPE.F32       S18, #0.0
    v7 = (AttributeInstance *)(*(int (__fastcall **)(int, void *))(*(_DWORD *)v5 + 1004))(
                                v5,
                                &SharedAttributes::FALL_DAMAGE);
    _R0 = j_AttributeInstance::getCurrentValue(v7);
    __asm
    {
      VMOV            S0, R0
      VMUL.F32        S0, S0, S18
      VMOV            R0, S0
    }
    result = j_mce::Math::ceil(_R0, v10);
    v11 = result;
    if ( result >= 1 )
      v12 = (Level *)j_Entity::getLevel((Entity *)v5);
      if ( j_Level::isClientSide(v12) == 1 )
      {
        j_Entity::getRuntimeID((Entity *)&v32, v5);
        v35 = 2;
        v36 = 1;
        v37 = 0;
        v34 = &off_26DA788;
        v38 = v32;
        v39 = v33;
        __asm { VSTR            S16, [SP,#0x90+var_40] }
        v40 = 0;
        v13 = (Level *)j_Entity::getLevel((Entity *)v5);
        v14 = j_Level::getPacketSender(v13);
        (*(void (__cdecl **)(int))(*(_DWORD *)v14 + 8))(v14);
      }
      v15 = (Entity *)&v31;
      j_EntityDamageSource::EntityDamageSource((int)&v31, 5);
      j_Entity::hurt((Entity *)v5, (const EntityDamageSource *)&v31, v11, 1, 0);
      j_EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v31);
      v16 = *(_QWORD *)(v5 + 476);
      _ZF = HIDWORD(v16) == (_DWORD)v16;
      if ( HIDWORD(v16) != (_DWORD)v16 )
        v15 = *(Entity **)v16;
        _ZF = *(_DWORD *)v16 == 0;
      if ( !_ZF )
        j_EntityDamageSource::EntityDamageSource((int)&v30, 5);
        j_Entity::hurt(v15, (const EntityDamageSource *)&v30, v11, 1, 0);
        j_EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v30);
      _R0 = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 52))(v5);
      __asm
        VLDR            S0, =-0.2
        VLDR            S2, [R0,#4]
      v19 = *(float *)(_R0 + 8);
      __asm { VADD.F32        S0, S2, S0 }
      v20 = *(float *)_R0;
      _R0 = v5 + 4156;
        VLDR            S2, [R0]
        VSUB.F32        S0, S0, S2
        VMOV            R2, S0
      j_BlockPos::BlockPos((BlockPos *)&v29, v20, _R2, v19);
      v23 = (BlockSource *)j_Entity::getRegion((Entity *)v5);
      v24 = (Block *)j_BlockSource::getBlock(v23, (const BlockPos *)&v29);
      v25 = v24;
      v26 = (int *)j_Block::getMaterial(v24);
      result = j_Material::isType(v26, 0);
      if ( !result )
        v27 = *(int (__fastcall **)(int, signed int, char *, _DWORD))(*(_DWORD *)v5 + 556);
        j_Entity::getAttachPos((AABB *)&v28, v5, 0, 0);
        result = v27(v5, 9, &v28, *((_BYTE *)v25 + 4));
  return result;
}


Horse *__fastcall Horse::~Horse(Horse *this)
{
  Horse *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  unsigned int *v11; // r2@6
  signed int v12; // r1@8
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  unsigned int *v17; // r2@18
  signed int v18; // r1@20

  v1 = this;
  *(_DWORD *)this = &off_271C5BC;
  v2 = *((_DWORD *)this + 1076);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 1075);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v4 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 1074);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v6 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 1073);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v8 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  j_Mob::~Mob(v1);
  return v1;
}


unsigned int __fastcall Horse::isBred(Horse *this)
{
  return (j_SynchedEntityData::getInt((Horse *)((char *)this + 176), 16) & 0x10u) >> 4;
}


unsigned int __fastcall Horse::isEating(Horse *this)
{
  return (j_SynchedEntityData::getInt((Horse *)((char *)this + 176), 16) & 0x20u) >> 5;
}


void __fastcall Horse::die(Horse *this, const EntityDamageSource *a2)
{
  const EntityDamageSource *v2; // r4@1
  Mob *v3; // r5@1

  v2 = a2;
  v3 = this;
  j_Horse::openMouth(this);
  j_j_j__ZN3Mob3dieERK18EntityDamageSource_0(v3, v2);
}


signed int __fastcall Horse::useNewAi(Horse *this)
{
  return 1;
}


unsigned int __fastcall Horse::feed(Horse *this, int a2)
{
  Entity *v2; // r4@1
  int v3; // r5@1
  Level *v4; // r0@1
  int v5; // r0@1
  int v7; // [sp+0h] [bp-38h]@1
  void **v8; // [sp+8h] [bp-30h]@1
  int v9; // [sp+Ch] [bp-2Ch]@1
  int v10; // [sp+10h] [bp-28h]@1
  char v11; // [sp+14h] [bp-24h]@1
  __int64 v12; // [sp+18h] [bp-20h]@1
  char v13; // [sp+20h] [bp-18h]@1
  int v14; // [sp+24h] [bp-14h]@1

  v2 = this;
  v3 = a2;
  j_Entity::getRuntimeID((Entity *)&v7, (int)this);
  v9 = 2;
  v10 = 1;
  v11 = 0;
  v8 = &off_26DA5D0;
  v12 = *(_QWORD *)&v7;
  v13 = 57;
  v14 = v3;
  v4 = (Level *)j_Entity::getLevel(v2);
  v5 = j_Level::getPacketSender(v4);
  (*(void (**)(void))(*(_DWORD *)v5 + 8))();
  return j_Horse::openMouth(v2);
}


int __fastcall Horse::moveTail(int result)
{
  *(_DWORD *)(result + 4356) = 1;
  return result;
}


int __fastcall Horse::generateRandomMaxHealth(Horse *this)
{
  Random *v1; // r4@1
  char v2; // r5@1
  int result; // r0@1

  v1 = (Horse *)((char *)this + 552);
  v2 = j_Random::_genRandInt32((Horse *)((char *)this + 552));
  _R0 = j_Random::_genRandInt32(v1) % 9 + (v2 & 7) + 15;
  __asm
  {
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
    VMOV            R0, S0
  }
  return result;
}


signed int __fastcall Horse::_hurt(Horse *this, const EntityDamageSource *a2, int a3, int a4, bool a5)
{
  Horse *v5; // r4@1
  signed int result; // r0@2

  v5 = this;
  if ( j_Animal::_hurt(this, a2, a3, a4, a5) == 1 )
  {
    j_Horse::openMouth(v5);
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall Horse::generateRandomSpeed(Horse *this)
{
  Random *v1; // r4@1
  int result; // r0@1

  v1 = (Horse *)((char *)this + 552);
  _R0 = j_Random::_genRandInt32((Horse *)((char *)this + 552));
  __asm
  {
    VMOV            S0, R0
    VCVT.F64.U32    D8, S0
  }
  _R0 = j_Random::_genRandInt32(v1);
    VLDR            D10, =2.32830644e-10
    VCVT.F64.U32    D9, S0
    VMUL.F64        D1, D8, D10
    VCVT.F64.U32    D0, S0
    VMUL.F64        D2, D9, D10
    VMUL.F64        D0, D0, D10
    VCVT.F32.F64    S2, D1
    VCVT.F32.F64    S4, D2
    VCVT.F32.F64    S0, D0
    VADD.F32        S2, S4, S2
    VADD.F32        S0, S2, S0
    VLDR            S2, =0.075
    VMUL.F32        S0, S0, S2
    VLDR            S2, =0.1125
    VADD.F32        S0, S0, S2
    VMOV            R0, S0
  return result;
}


int __fastcall Horse::generateRandomJumpStrength(Horse *this)
{
  Random *v1; // r4@1
  int result; // r0@1

  v1 = (Horse *)((char *)this + 552);
  _R0 = j_Random::_genRandInt32((Horse *)((char *)this + 552));
  __asm
  {
    VMOV            S0, R0
    VCVT.F64.U32    D8, S0
  }
  _R0 = j_Random::_genRandInt32(v1);
    VLDR            D10, =2.32830644e-10
    VCVT.F64.U32    D9, S0
    VMUL.F64        D1, D8, D10
    VCVT.F64.U32    D0, S0
    VMUL.F64        D2, D9, D10
    VMUL.F64        D0, D0, D10
    VCVT.F32.F64    S2, D1
    VCVT.F32.F64    S4, D2
    VCVT.F32.F64    S0, D0
    VADD.F32        S2, S4, S2
    VADD.F32        S0, S2, S0
    VLDR            S2, =0.2
    VMUL.F32        S0, S0, S2
    VLDR            S2, =0.4
    VADD.F32        S0, S0, S2
    VMOV            R0, S0
  return result;
}


int __fastcall Horse::makeMad(Horse *this)
{
  Horse *v1; // r4@1
  int (__fastcall *v2)(Horse *, signed int, char *, signed int); // r6@1
  char v4; // [sp+8h] [bp-20h]@1

  v1 = this;
  (*(void (**)(void))(*(_DWORD *)this + 380))();
  j_Horse::openMouth(v1);
  v2 = *(int (__fastcall **)(Horse *, signed int, char *, signed int))(*(_DWORD *)v1 + 556);
  j_Entity::getAttachPos((AABB *)&v4, (int)v1, 3, 0);
  return v2(v1, 19, &v4, -1);
}


int __fastcall Horse::getControllingPlayer(Horse *this, Entity *a2)
{
  Entity *v2; // r5@1
  Horse *v3; // r4@1
  __int64 v4; // r0@4

  v2 = a2;
  v3 = this;
  if ( j_Entity::isRide(a2) != 1 || j_Entity::isTame(v2) != 1 || j_Entity::hasSaddle(v2) != 1 )
  {
    LODWORD(v4) = -1;
    *(_DWORD *)v3 = -1;
    *((_DWORD *)v3 + 1) = -1;
  }
  else
    v4 = *(_QWORD *)j_Entity::getUniqueID(**((Entity ***)v2 + 119));
    *(_QWORD *)v3 = v4;
  return v4;
}


int __fastcall Horse::_playStepSound(Horse *this, const BlockPos *a2, int a3)
{
  const BlockPos *v3; // r6@1
  Horse *v4; // r4@1
  BlockSource *v5; // r0@1
  Block *v6; // r0@1
  Material *v7; // r0@1
  int result; // r0@1
  const BlockPos *v9; // r0@2
  int v10; // r2@2
  int v11; // r3@2
  int v12; // r8@2
  __int64 v13; // r0@2
  signed int v14; // r6@3
  signed int v15; // r0@4
  char *v17; // r7@9
  int v18; // r0@9
  int v19; // r1@9
  int v28; // [sp+0h] [bp-58h]@22
  char v29; // [sp+Ch] [bp-4Ch]@10
  char v30; // [sp+18h] [bp-40h]@13
  char v31; // [sp+24h] [bp-34h]@9
  char v32; // [sp+30h] [bp-28h]@2
  int v33; // [sp+34h] [bp-24h]@2
  int v34; // [sp+38h] [bp-20h]@2
  int v35; // [sp+3Ch] [bp-1Ch]@2

  v3 = a2;
  v4 = this;
  v5 = (BlockSource *)j_Entity::getRegion(this);
  v6 = (Block *)j_BlockSource::getBlock(v5, v3);
  v7 = (Material *)j_Block::getMaterial(v6);
  result = j_Material::isLiquid(v7);
  if ( result )
    return result;
  v9 = (const BlockPos *)j_Entity::getRegion(v4);
  v10 = *((_DWORD *)v3 + 1);
  v11 = *((_DWORD *)v3 + 2);
  v33 = *(_DWORD *)v3;
  v34 = v10 + 1;
  v35 = v11;
  j_BlockSource::getBlockID((BlockSource *)&v32, v9, (int)&v33);
  *(_BYTE *)(Block::mTopSnow + 4);
  v12 = (*(int (__fastcall **)(Horse *))(*(_DWORD *)v4 + 1200))(v4);
  v13 = *(_QWORD *)((char *)v4 + 476);
  if ( HIDWORD(v13) == (_DWORD)v13 )
  {
    v14 = 0;
  }
  else
    v15 = *(_DWORD *)v13;
    v14 = v15;
    if ( v15 )
      v14 = 1;
    if ( (unsigned int)(v12 - 1) >= 2 && v15 )
    {
      _R0 = *((_DWORD *)v4 + 1088) + 1;
      *((_DWORD *)v4 + 1088) = _R0;
      if ( _R0 > 5 )
      {
        _R1 = 1431655766;
        __asm { SMMUL.W         R1, R0, R1 }
        result = _R0 - 3 * (_R1 + (_R1 >> 31));
        if ( result )
        {
          v14 = 1;
          goto LABEL_15;
        }
        v17 = &v30;
        j_Entity::getAttachPos((AABB *)&v30, (int)v4, 0, 0);
        v18 = (int)v4;
        v19 = 8;
      }
      else
        v17 = &v31;
        j_Entity::getAttachPos((AABB *)&v31, (int)v4, 0, 0);
        v19 = 7;
      result = j_Entity::playSound(v18, v19, (int)v17);
      goto LABEL_15;
    }
  j_Entity::getAttachPos((AABB *)&v29, (int)v4, 0, 0);
  result = j_Entity::playSound((int)v4, 2, (int)&v29);
LABEL_15:
  _ZF = v12 == 0;
  if ( !v12 )
    _ZF = v14 == 1;
  if ( _ZF )
    result = *((_DWORD *)v4 + 1088);
    if ( result >= 6 )
      _R1 = 1431655766;
      __asm { SMMUL.W         R1, R0, R1 }
      result -= 3 * (_R1 + (_R1 >> 31));
      if ( !result )
        result = j_Random::_genRandInt32((Horse *)((char *)v4 + 552)) % 0xA;
        if ( !result )
          j_Entity::getAttachPos((AABB *)&v28, (int)v4, 3, 0);
          result = j_Entity::playSound((int)v4, 13, (int)&v28);
  return result;
}


signed int __fastcall Horse::canWearArmor(Horse *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = (*(int (**)(void))(*(_DWORD *)this + 1200))();
  v2 = 0;
  if ( !v1 )
    v2 = 1;
  return v2;
}


signed int __fastcall Horse::nameYOffset(Horse *this)
{
  Horse *v1; // r4@1
  signed int result; // r0@2

  v1 = this;
  if ( (*(int (**)(void))(*(_DWORD *)this + 1248))() )
  {
    result = -80;
  }
  else
    _R0 = j_SynchedEntityData::getFloat((Horse *)((char *)v1 + 176), 39);
    __asm
    {
      VLDR            S0, =-80.0
      VMOV            S2, R0
      VMOV.F32        S4, #-5.0
      VMUL.F32        S0, S2, S0
      VADD.F32        S0, S0, S4
      VCVTR.S32.F32   S0, S0
      VMOV            R0, S0
    }
  return result;
}


signed int __fastcall Horse::isSterile(Horse *this)
{
  Horse *v1; // r4@1
  signed int result; // r0@2
  int v3; // r1@3

  v1 = this;
  if ( (*(int (**)(void))(*(_DWORD *)this + 1240))() )
  {
    result = 1;
  }
  else
    v3 = (*(int (__fastcall **)(Horse *))(*(_DWORD *)v1 + 1200))(v1);
    result = 0;
    if ( v3 == 2 )
      result = 1;
  return result;
}
