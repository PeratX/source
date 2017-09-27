

signed int __fastcall RideableComponent::pullInEntity(RideableComponent *this, Entity *a2)
{
  RideableComponent *v2; // r5@1
  Entity *v3; // r4@1
  signed int result; // r0@5

  v2 = this;
  v3 = a2;
  if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 48) + 380) + 56)
    || (*(int (__fastcall **)(Entity *))(*(_DWORD *)a2 + 568))(a2) != 1
    || j_Entity::isRiding(v3)
    || j_RideableComponent::canAddRider(v2, v3) != 1 )
  {
    result = 0;
  }
  else
    (*(void (__fastcall **)(Entity *, _DWORD))(*(_DWORD *)v3 + 144))(v3, *(_DWORD *)v2);
    result = 1;
  return result;
}


signed int __fastcall RideableComponent::getInteraction(RideableComponent *this, Player *a2, EntityInteraction *a3)
{
  RideableComponent *v3; // r5@1
  EntityInteraction *v4; // r8@1
  Entity *v5; // r6@1
  char *v6; // r0@4
  _QWORD *v7; // r1@4 OVERLAPPED
  _QWORD *v8; // r2@4 OVERLAPPED
  _DWORD *v9; // r0@8
  __int64 v10; // r1@8
  _DWORD *v12; // [sp+4h] [bp-2Ch]@8
  __int64 v13; // [sp+Ch] [bp-24h]@8

  v3 = this;
  v4 = a3;
  v5 = a2;
  if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 48) + 380) + 12)
    && (*(int (__fastcall **)(Player *))(*(_DWORD *)a2 + 312))(a2)
    || j_RideableComponent::canAddRider(v3, v5) != 1 )
  {
    return 0;
  }
  v6 = j_Entity::getUniqueID(v5);
  *(_QWORD *)&v7 = *(_QWORD *)(*(_DWORD *)v3 + 500);
  if ( v7 != v8 )
    while ( *v7 != *(_QWORD *)v6 )
    {
      ++v7;
      if ( v8 == v7 )
        goto LABEL_7;
    }
LABEL_7:
  if ( j_EntityInteraction::shouldCapture(v4) == 1 )
    v9 = j_operator new(8u);
    LODWORD(v10) = sub_1A8840A;
    *v9 = v5;
    v9[1] = v3;
    HIDWORD(v10) = &loc_1A883FA;
    v12 = v9;
    v13 = v10;
    j_EntityInteraction::capture((int)v4, (int)&v12);
    if ( (_DWORD)v13 )
      ((void (*)(void))v13)();
  j_EntityInteraction::setInteractText();
  return 1;
}


signed int __fastcall RideableComponent::canAddRider(RideableComponent *this, Entity *a2)
{
  Entity *v2; // r5@1
  Entity **v3; // r4@1
  int v4; // r1@5
  int v5; // r0@6
  int v6; // r11@7
  int v7; // r9@7
  int v8; // r10@9
  _DWORD *v9; // r5@10
  int v10; // r4@10
  int v11; // r0@10
  size_t v12; // r6@10
  int v13; // r7@11
  _DWORD *v14; // r0@12
  size_t v15; // r8@12
  size_t v16; // r2@12
  int v17; // r0@14
  _DWORD *v18; // r1@21
  size_t v19; // r2@21
  size_t v20; // r4@21
  int v21; // r0@23
  signed int result; // r0@28
  int v23; // [sp+0h] [bp-28h]@8

  v2 = a2;
  v3 = (Entity **)this;
  if ( !*((_DWORD *)a2 + 12) )
    return 0;
  if ( (*(int (**)(void))(**(_DWORD **)this + 316))() != 1 )
  if ( (unsigned int)((signed int)((*(_QWORD *)((char *)*v3 + 476) >> 32) - *(_QWORD *)((char *)*v3 + 476)) >> 2) >= *(_DWORD *)(*(_DWORD *)(*((_DWORD *)*v3 + 12) + 380) + 4) )
  if ( j_Entity::isRider(*v3, v2) )
  v4 = *(_DWORD *)(*((_DWORD *)v2 + 12) + 140);
  if ( !v4 )
  v5 = *(_DWORD *)(*((_DWORD *)*v3 + 12) + 380);
  if ( !*(_DWORD *)(v5 + 48) )
    return 1;
  v6 = *(_DWORD *)(v4 + 16);
  v7 = v4 + 8;
  if ( v6 == v4 + 8 )
  v23 = *(_DWORD *)(v5 + 36);
  if ( v23 )
  {
    v8 = v5 + 32;
    while ( 1 )
    {
      v9 = *(_DWORD **)(v6 + 16);
      v10 = v8;
      v11 = v23;
      v12 = *(v9 - 3);
      do
      {
        v13 = v11;
        while ( 1 )
        {
          v14 = *(_DWORD **)(v13 + 16);
          v15 = *(v14 - 3);
          v16 = *(v14 - 3);
          if ( v15 > v12 )
            v16 = v12;
          v17 = j_memcmp_0(v14, v9, v16);
          if ( !v17 )
            v17 = v15 - v12;
          if ( v17 >= 0 )
            break;
          v13 = *(_DWORD *)(v13 + 12);
          if ( !v13 )
          {
            v13 = v10;
            goto LABEL_20;
          }
        }
        v11 = *(_DWORD *)(v13 + 8);
        v10 = v13;
      }
      while ( v11 );
LABEL_20:
      if ( v13 != v8 )
        v18 = *(_DWORD **)(v13 + 16);
        v19 = v12;
        v20 = *(v18 - 3);
        if ( v12 > v20 )
          v19 = *(v18 - 3);
        v21 = j_memcmp_0(v9, v18, v19);
        if ( !v21 )
          v21 = v12 - v20;
        if ( v21 < 0 )
          v13 = v8;
        if ( v13 != v8 )
          return 1;
      v6 = sub_21D4820(v6);
      result = 0;
      if ( v6 == v7 )
        return result;
    }
  }
  do
    v6 = sub_21D4820(v6);
    result = 0;
  while ( v6 != v7 );
  return result;
}


signed int __fastcall RideableComponent::getFirstAvailableSeatPosition(RideableComponent *this, Entity *a2, Vec3 *a3)
{
  RideableComponent *v3; // r10@1
  Entity *v4; // r9@1
  int v5; // r3@2
  signed int v6; // r1@2
  int v12; // r7@4
  __int64 v13; // kr00_8@5
  signed int result; // r0@12

  v3 = this;
  v4 = a2;
  if ( (*(int (**)(void))(**(_DWORD **)this + 316))() != 1 )
    return 0;
  v5 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 48) + 380);
  v6 = (signed int)((*(_QWORD *)(*(_DWORD *)v3 + 476) >> 32) - *(_QWORD *)(*(_DWORD *)v3 + 476)) >> 2;
  if ( (unsigned int)v6 >= *(_DWORD *)(v5 + 4) )
  _R2 = *(_QWORD *)(v5 + 16);
  __asm { VLDR            S16, =0.0 }
  if ( (_DWORD)_R2 == HIDWORD(_R2) )
  {
LABEL_11:
    __asm
    {
      VMOV.F32        S18, S16
      VMOV.F32        S20, S16
    }
    goto LABEL_14;
  }
  v12 = 0;
  while ( 1 )
    v13 = *(_QWORD *)(_R2 + 12);
    if ( *(_QWORD *)(_R2 + 12) && (v6 > SHIDWORD(v13) || v6 < (signed int)v13) )
      goto LABEL_10;
    if ( v12 == v6 )
      break;
    ++v12;
LABEL_10:
    LODWORD(_R2) = _R2 + 32;
    if ( HIDWORD(_R2) == (_DWORD)_R2 )
      goto LABEL_11;
  __asm
    VLDR            S16, [R2]
    VLDR            S18, [R2,#4]
    VLDR            S20, [R2,#8]
LABEL_14:
  _R7 = j_SynchedEntityData::getFloat((SynchedEntityData *)(*(_DWORD *)v3 + 176), 39);
  _R6 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v4 + 140))(v4);
  _R1 = *(_DWORD *)v3;
    VMOV            S28, R7
    VMUL.F32        S16, S28, S16
  _R0 = &mce::Math::DEGRAD;
    VMUL.F32        S20, S28, S20
    VLDR            S2, [R1,#0x7C]
    VLDR            S22, [R1,#0x48]
    VLDR            S0, [R0]
    VLDR            S24, [R1,#0x50]
    VMUL.F32        S0, S0, S2
    VLDR            S26, [R1,#0x10C]
    VMOV            R5, S0
  _R0 = j_cosf(_R5);
    VMOV            S0, R0
    VMUL.F32        S18, S28, S18
    VMUL.F32        S30, S0, S16
    VMUL.F32        S28, S0, S20
  _R0 = j_sinf(COERCE_FLOAT(LODWORD(_R5) ^ 0x80000000));
  __asm { VMOV            S0, R0 }
  result = 1;
    VMOV            S2, R6
    VMUL.F32        S4, S0, S20
    VADD.F32        S2, S2, S18
    VADD.F32        S6, S30, S22
    VMUL.F32        S0, S0, S16
    VADD.F32        S8, S28, S24
    VADD.F32        S2, S2, S26
    VADD.F32        S4, S6, S4
    VSUB.F32        S0, S8, S0
    VSTR            S4, [R8]
    VSTR            S2, [R8,#4]
    VSTR            S0, [R8,#8]
  return result;
}


int __fastcall RideableComponent::getValidSeat(int result, int a2, int a3)
{
  int v3; // r3@1
  int v4; // r1@1
  int v5; // lr@1
  int v6; // r4@2
  signed int v7; // r3@2
  __int64 v8; // kr08_8@3
  int v9; // r1@10
  int v10; // r2@10
  int v11; // r3@10
  int v12; // r6@10
  int v13; // r7@10
  int v14; // r0@10
  int v15; // r3@10
  int v16; // r6@10
  int v17; // r7@10

  v3 = *(_DWORD *)a2;
  v5 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 48) + 380) + 16) >> 32;
  v4 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 48) + 380) + 16);
  if ( v4 == v5 )
  {
LABEL_9:
    *(_DWORD *)result = 0;
    *(_DWORD *)(result + 4) = 0;
    *(_DWORD *)(result + 8) = 0;
    *(_DWORD *)(result + 12) = 0;
    *(_DWORD *)(result + 16) = 0;
    *(_DWORD *)(result + 20) = 0;
    *(_DWORD *)(result + 24) = 0;
    *(_DWORD *)(result + 28) = 1127546880;
    return result;
  }
  v6 = 0;
  v7 = (signed int)((*(_QWORD *)(v3 + 476) >> 32) - *(_QWORD *)(v3 + 476)) >> 2;
  while ( 1 )
    v8 = *(_QWORD *)(v4 + 12);
    if ( *(_QWORD *)(v4 + 12) && (v7 < (signed int)v8 || v7 > SHIDWORD(v8)) )
      goto LABEL_8;
    if ( v6 == a3 )
      break;
    ++v6;
LABEL_8:
    v4 += 32;
    if ( v5 == v4 )
      goto LABEL_9;
  v10 = *(_DWORD *)v4;
  v11 = *(_DWORD *)(v4 + 4);
  v12 = *(_DWORD *)(v4 + 8);
  v13 = *(_DWORD *)(v4 + 12);
  v9 = v4 + 16;
  *(_DWORD *)result = v10;
  *(_DWORD *)(result + 4) = v11;
  *(_DWORD *)(result + 8) = v12;
  *(_DWORD *)(result + 12) = v13;
  v14 = result + 16;
  v15 = *(_DWORD *)(v9 + 4);
  v16 = *(_DWORD *)(v9 + 8);
  v17 = *(_DWORD *)(v9 + 12);
  *(_DWORD *)v14 = *(_DWORD *)v9;
  *(_DWORD *)(v14 + 4) = v15;
  *(_DWORD *)(v14 + 8) = v16;
  *(_DWORD *)(v14 + 12) = v17;
  return v14 + 16;
}


signed int __fastcall RideableComponent::getRiderIndex(RideableComponent *this, Entity *a2)
{
  int v2; // r3@1
  int v3; // r12@1
  signed int result; // r0@2

  v2 = *(_QWORD *)(*(_DWORD *)this + 476) >> 32;
  v3 = *(_QWORD *)(*(_DWORD *)this + 476);
  if ( v3 == v2 )
  {
LABEL_5:
    result = -1;
  }
  else
    result = 0;
    while ( *(Entity **)(v3 + 4 * result) != a2 )
    {
      v2 -= 4;
      ++result;
      if ( v3 == v2 )
        goto LABEL_5;
    }
  return result;
}


int __fastcall RideableComponent::positionRider(int result, Entity *a2)
{
  int *v2; // r8@1
  Entity *v3; // r4@1
  int v4; // lr@1
  __int64 v5; // kr00_8@1
  int v6; // r1@2
  int v7; // r2@2
  int v8; // r2@7
  int v9; // r9@7
  int v10; // r5@8
  int v11; // r3@8
  __int64 v12; // kr10_8@9
  float v17; // r1@16
  int v18; // r2@16
  float v19; // r3@16
  float v20; // r6@16
  int v21; // r7@16
  float v22; // r3@16
  int v23; // r6@16
  int v24; // r7@16
  signed int v34; // r1@19
  float v35; // [sp+0h] [bp-98h]@17
  float v36; // [sp+Ch] [bp-8Ch]@17
  float v37; // [sp+18h] [bp-80h]@15
  float v38; // [sp+1Ch] [bp-7Ch]@15
  float v39; // [sp+20h] [bp-78h]@15
  int v40; // [sp+24h] [bp-74h]@15
  int v41; // [sp+28h] [bp-70h]@15
  float v42; // [sp+2Ch] [bp-6Ch]@15
  bool v43[4]; // [sp+30h] [bp-68h]@15
  int v44; // [sp+34h] [bp-64h]@15

  v2 = (int *)result;
  v3 = a2;
  v4 = *(_DWORD *)result;
  v5 = *(_QWORD *)(*(_DWORD *)result + 476);
  if ( (_DWORD)v5 != HIDWORD(v5) )
  {
    v6 = 0;
    v7 = HIDWORD(v5);
    while ( 1 )
    {
      result = *(_DWORD *)(v5 + 4 * v6);
      if ( (Entity *)result == v3 )
        break;
      v7 -= 4;
      ++v6;
      if ( (_DWORD)v5 == v7 )
        return result;
    }
    if ( v6 >= 0 )
      v9 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 48) + 380) + 16) >> 32;
      v8 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 48) + 380) + 16);
      if ( v8 != v9 )
      {
        v10 = 0;
        v11 = (HIDWORD(v5) - (signed int)v5) >> 2;
        do
        {
          v12 = *(_QWORD *)(v8 + 12);
          if ( !*(_QWORD *)(v8 + 12) || v11 <= SHIDWORD(v12) && v11 >= (signed int)v12 )
          {
            if ( v10 == v6 )
            {
              v17 = *(float *)v8;
              v19 = *(float *)(v8 + 4);
              v20 = *(float *)(v8 + 8);
              v21 = *(_DWORD *)(v8 + 12);
              v18 = v8 + 16;
              v37 = v17;
              v38 = v19;
              v39 = v20;
              v40 = v21;
              v22 = *(float *)(v18 + 4);
              v23 = *(_DWORD *)(v18 + 8);
              v24 = *(_DWORD *)(v18 + 12);
              v41 = *(_DWORD *)v18;
              v42 = v22;
              *(_DWORD *)v43 = v23;
              v44 = v24;
              __asm
              {
                VLDR            S18, [SP,#0x98+var_80]
                VLDR            S20, [SP,#0x98+var_7C]
                VLDR            S16, [SP,#0x98+var_78]
              }
              goto LABEL_17;
            }
            ++v10;
          }
          v8 += 32;
        }
        while ( v9 != v8 );
      }
      __asm { VLDR            S16, =0.0 }
      *(_DWORD *)v43 = 0;
      __asm { VMOV.F32        S18, S16 }
      v41 = 0;
      v42 = 0.0;
      __asm { VMOV.F32        S20, S16 }
      v39 = 0.0;
      v40 = 0;
      v37 = 0.0;
      v38 = 0.0;
      v44 = 1127546880;
LABEL_17:
      _R0 = j_SynchedEntityData::getFloat((SynchedEntityData *)(v4 + 176), 39);
      __asm
        VMOV            S22, R0
        VMUL.F32        S20, S20, S22
      _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 140))(v3);
        VMOV            S0, R0
        VMUL.F32        S18, S18, S22
        VADD.F32        S20, S0, S20
        VMUL.F32        S16, S16, S22
      _R0 = &mce::Math::DEGRAD;
        VLDR            S0, [R0]
        VSTR            S18, [SP,#0x98+var_8C]
        VSTR            S20, [SP,#0x98+var_88]
        VSTR            S16, [SP,#0x98+var_84]
      _R1 = *v2;
        VLDR            S2, [R1,#0x7C]
        VLDR            S22, [R1,#0x48]
        VMUL.F32        S0, S0, S2
        VLDR            S24, [R1,#0x50]
        VLDR            S26, [R1,#0x10C]
        VMOV            R6, S0
      _R0 = j_cosf(_R6);
        VMUL.F32        S28, S0, S18
        VMUL.F32        S30, S0, S16
      _R0 = j_sinf(COERCE_FLOAT(LODWORD(_R6) ^ 0x80000000));
        VADD.F32        S4, S28, S22
        VMUL.F32        S2, S0, S16
        VMUL.F32        S0, S0, S18
        VADD.F32        S6, S30, S24
        VADD.F32        S2, S4, S2
        VADD.F32        S4, S20, S26
        VSUB.F32        S0, S6, S0
        VSTR            S2, [SP,#0x98+var_98]
        VSTR            S4, [SP,#0x98+var_94]
        VSTR            S0, [SP,#0x98+var_90]
      (*(void (__fastcall **)(Entity *, float *))(*(_DWORD *)v3 + 48))(v3, &v35);
      j_Entity::setSeatDescription((int)v3, (int)&v36, (int)&v37);
      result = j_Entity::hasCategory((int)v3, 2);
      if ( result == 1 )
        j_Entity::setEnforceRiderRotationLimit(v3, v43[0]);
        if ( v43[0] )
          _R0 = *v2;
          __asm
            VLDR            S0, [SP,#0x98+var_6C]
            VLDR            S2, [R0,#0x7C]
            VADD.F32        S0, S0, S2
            VMOV            R1, S0
            VSTR            S0, [R0]
          j_Mob::setRiderLockedBodyRot(v3, _R1);
          v34 = v44;
        else
          j_Mob::setRiderLockedBodyRot(v3, 0.0);
          v34 = 1127546880;
        result = j_Mob::setRiderRotLimit(v3, *(float *)&v34);
  }
  return result;
}


unsigned int __fastcall RideableComponent::initFromDefinition(RideableComponent *this)
{
  int v1; // r0@1
  int v2; // r2@1
  int v3; // r1@1

  v1 = *(_DWORD *)this;
  v2 = *(_DWORD *)(*(_DWORD *)(v1 + 48) + 380);
  v3 = *(_DWORD *)(v2 + 8);
  if ( v3 < 0 )
  {
    v3 = 0;
  }
  else if ( v3 >= *(_DWORD *)(v2 + 4) )
  return j_j_j__ZN6Entity18setControllingSeatEi((Entity *)v1, v3);
}


_DWORD *__fastcall RideableComponent::RideableComponent(_DWORD *result, int a2)
{
  *result = a2;
  return result;
}
