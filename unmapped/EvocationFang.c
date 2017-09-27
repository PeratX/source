

int __fastcall EvocationFang::dealDamageTo(EvocationFang *this, Mob *a2)
{
  Mob *v2; // r4@1
  Entity *v3; // r5@1
  int result; // r0@1
  bool v5; // zf@1
  char *v6; // r6@5
  signed int v7; // r0@6
  signed int v8; // r5@6
  char v9; // [sp+8h] [bp-20h]@8
  unsigned __int64 v10; // [sp+10h] [bp-18h]@5

  v2 = a2;
  v3 = this;
  result = (*(int (__fastcall **)(Mob *))(*(_DWORD *)a2 + 316))(a2);
  v5 = result == 1;
  if ( result == 1 )
  {
    result = *((_BYTE *)v2 + 426);
    v5 = result == 0;
  }
  if ( v5 )
    v6 = Entity::getUniqueID(v2);
    Entity::getOwnerId((Entity *)&v10, (int)v3);
    result = *(_DWORD *)v6 ^ v10 | ((*(_QWORD *)v6 ^ v10) >> 32);
    if ( *(_QWORD *)v6 ^ v10 )
    {
      v7 = Entity::getOwner(v3);
      v8 = v7;
      if ( !v7 || (result = (*(int (**)(void))(*(_DWORD *)v7 + 972))()) == 0 )
      {
        EntityDamageSource::EntityDamageSource((int)&v9, 14);
        Entity::hurt(v2, (const EntityDamageSource *)&v9, 6, 1, 0);
        EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v9);
        result = (*(int (__fastcall **)(Mob *, signed int))(*(_DWORD *)v2 + 948))(v2, v8);
      }
    }
  return result;
}


void __fastcall EvocationFang::~EvocationFang(EvocationFang *this)
{
  EvocationFang::~EvocationFang(this);
}


void __fastcall EvocationFang::~EvocationFang(EvocationFang *this)
{
  Entity *v1; // r0@1

  v1 = Entity::~Entity(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall EvocationFang::handleEntityEvent(Entity *this, signed int a2, int a3)
{
  Entity *v3; // r4@1
  int result; // r0@2
  void (__fastcall *v5)(Entity *, signed int, int, signed int); // r5@4
  int v6; // r0@4
  int (__fastcall *v7)(Entity *, signed int, int, signed int); // r5@5
  int v8; // r0@5

  v3 = this;
  if ( a2 == 4 )
  {
    *((_BYTE *)this + 3409) = 1;
    result = (*(int (**)(void))(*(_DWORD *)this + 288))();
    if ( !result )
    {
      if ( Entity::getOwner(v3) )
      {
        v5 = *(void (__fastcall **)(Entity *, signed int, int, signed int))(*(_DWORD *)v3 + 556);
        v6 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 52))(v3);
        v5(v3, 39, v6, -1);
      }
      v7 = *(int (__fastcall **)(Entity *, signed int, int, signed int))(*(_DWORD *)v3 + 556);
      v8 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 52))(v3);
      result = v7(v3, 121, v8, -1);
    }
  }
  else
    result = j_j_j__ZN6Entity17handleEntityEventE11EntityEventi(this, a2, a3);
  return result;
}


signed int __fastcall EvocationFang::getEntityTypeId(EvocationFang *this)
{
  return 4194407;
}


__int64 __fastcall EvocationFang::getSourceUniqueID(EvocationFang *this, int a2)
{
  EvocationFang *v2; // r4@1
  __int64 result; // r0@1

  v2 = this;
  result = SynchedEntityData::getInt64((SynchedEntityData *)(a2 + 176), 5);
  *(_QWORD *)v2 = result;
  return result;
}


int __fastcall EvocationFang::getAnimationProgress(EvocationFang *this, float _R1)
{
  int result; // r0@2

  if ( *((_BYTE *)this + 3409) )
  {
    _R0 = *((_DWORD *)this + 842) - 2;
    if ( _R0 >= 1 )
    {
      __asm
      {
        VMOV            S2, R0
        VMOV            S0, R1
        VCVT.F32.S32    S2, S2
        VMOV.F32        S4, #1.0
        VSUB.F32        S0, S2, S0
        VLDR            S2, =0.05
        VMUL.F32        S0, S0, S2
        VMOV.F32        S2, S4
        VCMPE.F32       S0, S4
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        __asm { VMOVLT.F32      S2, S0 }
        VSUB.F32        S0, S4, S2
        VMOV            R0, S0
    }
    else
        VMOVLT.F32      S0, #1.0
        VMOVLT          R0, S0
  }
  else
    __asm
      VLDREQ          S0, =0.0
      VMOVEQ          R0, S0
  return result;
}


int __fastcall EvocationFang::EvocationFang(int a1, int a2, int *a3)
{
  int v3; // r4@1

  v3 = a1;
  Entity::Entity(a1, a2, a3);
  *(_DWORD *)v3 = &off_26FDBDC;
  Entity::setSize((Entity *)v3, 1.0, 0.8);
  *(_DWORD *)(v3 + 248) = 75;
  return v3;
}


int __fastcall EvocationFang::getShadowRadius(EvocationFang *this)
{
  int result; // r0@1

  _R0 = Entity::getShadowRadius(this);
  __asm
  {
    VLDR            S0, =0.7
    VMOV            S2, R0
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


int __fastcall EvocationFang::normalTick(EvocationFang *this)
{
  Level *v2; // r0@3
  int result; // r0@4
  signed int v8; // r4@6
  unsigned int v10; // r0@7
  int v16; // r0@7
  int v17; // r5@10
  unsigned int v18; // r4@10
  __int64 *v19; // r0@10
  __int64 *v20; // r5@10
  __int64 v21; // r0@10
  int v22; // r0@12
  Level *v23; // r5@13
  int v24; // r6@13
  int v25; // r0@13
  Level *v26; // r5@14
  int v27; // r6@14
  int v28; // r7@14
  int v29; // r0@14
  char v30; // [sp+1Ch] [bp-B4h]@13
  int v31; // [sp+28h] [bp-A8h]@10
  int v32; // [sp+2Ch] [bp-A4h]@10
  signed int v33; // [sp+30h] [bp-A0h]@10
  char v34; // [sp+34h] [bp-9Ch]@10
  float v35; // [sp+5Ch] [bp-74h]@7

  _R10 = this;
  Entity::normalTick(this);
  if ( !*((_BYTE *)_R10 + 3364) )
    Entity::setLimitedLife(_R10, 22);
  v2 = (Level *)Entity::getLevel(_R10);
  if ( Level::isClientSide(v2) == 1 )
  {
    result = *((_BYTE *)_R10 + 3409);
    if ( *((_BYTE *)_R10 + 3409) )
    {
      result = *((_DWORD *)_R10 + 842);
      if ( result == 14 )
      {
        __asm
        {
          VMOV.F32        S18, #-1.0
          VMOV.F32        S29, #1.0
          VLDR            D13, =2.32830644e-10
          VMOV.F64        D8, #0.5
        }
        v8 = 12;
        do
          __asm { VLDR            S28, [R10,#0x48] }
          _R7 = Random::_genRandInt32((EvocationFang *)((char *)_R10 + 552));
          __asm
          {
            VLDR            S19, [R10,#0x4C]
            VLDR            S31, [R10,#0x130]
          }
          v10 = Random::_genRandInt32((EvocationFang *)((char *)_R10 + 552));
          __asm { VMOV            S0, R7 }
          _R6 = v10;
            VLDR            S30, [R10,#0x50]
            VCVT.F64.U32    D10, S0
          _R0 = Random::_genRandInt32((EvocationFang *)((char *)_R10 + 552));
            VMUL.F64        D1, D10, D13
            VMOV            S0, R0
            VCVT.F32.F64    S21, D1
            VCVT.F64.U32    D0, S0
            VLDR            S20, [R10,#0x130]
            VMUL.F64        D11, D0, D13
            VCVT.F64.U32    D12, S0
            VLDR            D7, =0.05
            VMOV            S4, R6
            VCVT.F32.F64    S2, D11
            VCVT.F64.U32    D2, S4
            VMOV            S8, R7
            VMUL.F64        D0, D0, D13
            VCVT.F64.U32    D4, S8
            VMUL.F64        D5, D12, D13
            VADD.F32        S6, S21, S21
            VADD.F32        S2, S2, S2
            VMUL.F64        D2, D2, D13
            VMUL.F64        D4, D4, D13
            VADD.F32        S6, S6, S18
            VADD.F32        S2, S2, S18
            VCVT.F32.F64    S10, D5
            VCVT.F32.F64    S0, D0
            VCVT.F64.F32    D6, S19
            VCVT.F32.F64    S4, D2
            VMUL.F32        S2, S2, S20
            VMUL.F32        S6, S6, S31
            VCVT.F32.F64    S8, D4
            VADD.F64        D6, D6, D7
            VADD.F32        S10, S10, S10
            VADD.F32        S0, S0, S0
            VCVT.F64.F32    D2, S4
            VCVT.F64.F32    D3, S6
            VCVT.F64.F32    D1, S2
            VCVT.F64.F32    D4, S8
            VADD.F32        S10, S10, S18
            VADD.F32        S0, S0, S18
            VADD.F64        D2, D6, D2
            VLDR            D6, =0.3
            VMUL.F64        D3, D3, D8
            VMUL.F64        D4, D4, D6
            VMUL.F64        D1, D1, D8
            VCVT.F64.F32    D5, S10
            VCVT.F64.F32    D0, S0
            VCVT.F64.F32    D7, S28
            VCVT.F64.F32    D10, S30
            VMUL.F64        D5, D5, D6
            VMUL.F64        D0, D0, D6
            VADD.F64        D1, D1, D10
            VADD.F64        D3, D3, D7
            VADD.F64        D4, D4, D6
            VCVT.F32.F64    S20, D3
            VADD.F32        S22, S4, S29
            VCVT.F32.F64    S24, D1
            VCVT.F32.F64    S28, D5
            VCVT.F32.F64    S30, D4
            VCVT.F32.F64    S19, D0
          v16 = Entity::getLevel(_R10);
            VSTR            S20, [SP,#0xD0+var_74]
            VSTR            S22, [SP,#0xD0+var_70]
            VSTR            S28, [SP,#0xD0+var_80]
            VSTR            S30, [SP,#0xD0+var_7C]
            VSTR            S24, [SP,#0xD0+var_6C]
            VSTR            S19, [SP,#0xD0+var_78]
          result = Level::addParticle(v16, 2, (int)&v35);
          --v8;
        while ( v8 );
      }
    }
  }
  else
    result = *((_DWORD *)_R10 + 842);
    if ( result == 20 )
      v17 = Entity::getRegion(_R10);
      v18 = 0;
      v31 = 1045220557;
      v32 = 0;
      v33 = 1045220557;
      AABB::grow((AABB *)&v34, (EvocationFang *)((char *)_R10 + 264), (int)&v31);
      v19 = (__int64 *)BlockSource::fetchEntities2(v17, 256, (const AABB *)&v34, 0);
      v20 = v19;
      v21 = *v19;
      if ( HIDWORD(v21) != (_DWORD)v21 )
          EvocationFang::dealDamageTo(_R10, *(Mob **)v21);
          v21 = *v20;
          ++v18;
        while ( v18 < (HIDWORD(v21) - (signed int)v21) >> 2 );
      v22 = Entity::getLevel(_R10);
      Level::broadcastEntityEvent(v22, (int)_R10, 4, 0);
      if ( Entity::getOwner(_R10) )
        v23 = (Level *)Entity::getLevel(_R10);
        v24 = Entity::getRegion(_R10);
        Entity::getAttachPos((AABB *)&v30, (int)_R10, 2, 0);
        v25 = (*(int (__fastcall **)(EvocationFang *))(*(_DWORD *)_R10 + 488))(_R10);
        Level::broadcastSoundEvent(v23, v24, 39, (int)&v30, -1, v25, 0, 0);
      v26 = (Level *)Entity::getLevel(_R10);
      v27 = Entity::getRegion(_R10);
      v28 = (*(int (__fastcall **)(EvocationFang *))(*(_DWORD *)_R10 + 52))(_R10);
      v29 = (*(int (__fastcall **)(EvocationFang *))(*(_DWORD *)_R10 + 488))(_R10);
      result = Level::broadcastSoundEvent(v26, v27, 121, v28, -1, v29, 0, 0);
  return result;
}
