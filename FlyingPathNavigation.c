

int __fastcall FlyingPathNavigation::_updatePath(FlyingPathNavigation *this)
{
  int v2; // r0@1
  __int64 v3; // r1@1
  int v4; // r5@1
  Path *v5; // r0@1
  int v10; // r6@2
  int v13; // r6@10
  int v18; // r11@16
  int (__fastcall *v19)(FlyingPathNavigation *, __int64 *, char *, int); // r7@18
  int v23; // r12@24
  char v25; // [sp+8h] [bp-58h]@18
  float v26; // [sp+14h] [bp-4Ch]@12
  __int64 v29; // [sp+20h] [bp-40h]@1
  int v30; // [sp+28h] [bp-38h]@1

  _R4 = this;
  v2 = (*(int (**)(void))(**((_DWORD **)this + 1) + 52))();
  v3 = *(_QWORD *)v2;
  v30 = *(_DWORD *)(v2 + 8);
  v29 = v3;
  v4 = j_Path::getSize(*((Path **)_R4 + 2));
  v5 = (Path *)*((_DWORD *)_R4 + 2);
  if ( v5 )
  {
    __asm { VLDR            S16, [SP,#0x60+var_40+4] }
    v10 = j_Path::getIndex(v5);
    __asm { VCVTR.S32.F32   S16, S16 }
    if ( v10 < j_Path::getSize(*((Path **)_R4 + 2)) )
    {
      __asm { VMOV            R7, S16 }
      while ( *(_DWORD *)(j_Path::get(*((Path **)_R4 + 2), v10) + 4) == _R7 )
      {
        if ( ++v10 >= j_Path::getSize(*((Path **)_R4 + 2)) )
          goto LABEL_8;
      }
      v4 = v10;
    }
  }
LABEL_8:
  _KR00_8 = *(_QWORD *)((char *)_R4 + 4);
  __asm
    VLDR            S16, =0.6
    VLDR            S0, [R1,#0x130]
    VCMPE.F32       S0, S16
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S16, S0 }
  v13 = j_Path::getIndex((Path *)HIDWORD(_KR00_8));
  if ( v13 < v4 )
    __asm { VMUL.F32        S16, S16, S16 }
    do
      j_Path::getPos(
        (Path *)&v26,
        (const Entity *)(*(_QWORD *)((char *)_R4 + 4) >> 32),
        *(_QWORD *)((char *)_R4 + 4),
        v13);
      __asm
        VLDR            S0, [SP,#0x60+var_40]
        VLDR            S6, [SP,#0x60+var_4C]
        VLDR            S2, [SP,#0x60+var_40+4]
        VLDR            S8, [SP,#0x60+var_48]
        VSUB.F32        S0, S6, S0
        VLDR            S4, [SP,#0x60+var_38]
        VSUB.F32        S2, S8, S2
        VLDR            S10, [SP,#0x60+var_44]
        VSUB.F32        S4, S10, S4
        VMUL.F32        S0, S0, S0
        VMUL.F32        S2, S2, S2
        VMUL.F32        S4, S4, S4
        VADD.F32        S0, S2, S0
        VADD.F32        S0, S0, S4
        VCMPE.F32       S0, S16
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        j_Path::setIndex(*((Path **)_R4 + 2), ++v13);
      else
        ++v13;
    while ( v13 != v4 );
  _R6 = *(_QWORD *)((char *)_R4 + 4);
  _R0 = j_ceilf_0(*(float *)(_R6 + 304));
    VLDR            S0, [R6,#0x134]
    VMOV            S2, R0
    VCVTR.S32.F32   S0, S0
    VCVTR.S32.F32   S2, S2
    VMOV            R0, S0
    VMOV            R6, S2
  v18 = j_Path::getIndex((Path *)HIDWORD(_R6));
  while ( v18 != v4 )
    --v4;
    v19 = *(int (__fastcall **)(FlyingPathNavigation *, __int64 *, char *, int))(*(_QWORD *)_R4 + 64);
    j_Path::getPos((Path *)&v25, *((const Entity **)_R4 + 2), *(_QWORD *)_R4 >> 32, v4);
    if ( v19(_R4, &v29, &v25, _R6) == 1 )
      j_Path::setIndex(*((Path **)_R4 + 2), v4);
      break;
  _R0 = *(_QWORD *)((char *)_R4 + 12);
  if ( (signed int)_R0 - HIDWORD(_R0) >= 101 )
    __asm
      VLDR            S0, [SP,#0x60+var_40]
      VLDR            S6, [R4,#0x14]
      VLDR            S2, [SP,#0x60+var_40+4]
      VLDR            S8, [R4,#0x18]
      VSUB.F32        S6, S6, S0
      VLDR            S4, [SP,#0x60+var_38]
      VSUB.F32        S8, S8, S2
      VLDR            S10, [R4,#0x1C]
      VSUB.F32        S10, S10, S4
      VMUL.F32        S6, S6, S6
      VMUL.F32        S8, S8, S8
      VMUL.F32        S10, S10, S10
      VADD.F32        S6, S8, S6
      VMOV.F32        S8, #2.25
      VADD.F32        S6, S6, S10
      VCMPE.F32       S6, S8
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      (*(void (__fastcall **)(FlyingPathNavigation *))(*(_DWORD *)_R4 + 40))(_R4);
      _R2 = HIDWORD(v29);
      HIDWORD(_R0) = v29;
      _R3 = v30;
      LODWORD(_R0) = *((_DWORD *)_R4 + 3);
    else
        VMOV            R1, S0
        VMOV            R2, S2
        VMOV            R3, S4
    v23 = (int)_R4 + 16;
    *(_QWORD *)v23 = _R0;
    *(_DWORD *)(v23 + 8) = _R2;
    *(_DWORD *)(v23 + 12) = _R3;
  return _R0;
}


signed int __fastcall FlyingPathNavigation::_canUpdateFlyingPath(FlyingPathNavigation *this)
{
  FlyingPathNavigation *v1; // r4@1
  signed int result; // r0@3

  v1 = this;
  if ( *((_BYTE *)this + 42) && (*(int (**)(void))(**((_DWORD **)this + 1) + 208))() )
    result = 1;
  else
    result = !j_Entity::isRiding(*((Entity **)v1 + 1));
  return result;
}


signed int __fastcall FlyingPathNavigation::_canMoveDirectly(FlyingPathNavigation *this, const Vec3 *a2, const Vec3 *a3, int a4, int a5, int a6)
{
  int v8; // r8@1
  float v9; // r1@1
  int v10; // r5@1
  float v11; // r1@1
  int v12; // r0@1
  float v13; // r1@1
  signed int v19; // r9@1
  signed int v20; // r11@1
  int v22; // r0@2
  int v23; // r7@2
  float v24; // r1@2
  int v25; // r0@2
  int v26; // r0@2
  signed int v27; // r10@2
  signed int v29; // r3@2
  int v30; // r0@4
  char v31; // r0@4
  float v32; // r1@8
  char v33; // r8@10
  int v34; // r0@10
  signed int v35; // r1@10
  int v36; // r3@10
  int v37; // r2@15
  int v38; // r4@22
  int v39; // r7@34
  int v40; // r7@43
  int v41; // r7@47
  int v42; // r7@47
  signed int v43; // r7@47
  int v44; // r12@57
  int v45; // r4@57
  signed int v46; // r7@62
  int v48; // r0@73
  signed int v49; // [sp+4h] [bp-7Ch]@8
  int v50; // [sp+8h] [bp-78h]@2
  int v51; // [sp+Ch] [bp-74h]@2
  int v52; // [sp+10h] [bp-70h]@2
  int v53; // [sp+14h] [bp-6Ch]@2

  _R7 = a2;
  _R4 = a3;
  v8 = j_mce::Math::floor(*(mce::Math **)a2, *(float *)&a2);
  v10 = j_mce::Math::floor(*((mce::Math **)_R7 + 1), v9);
  v12 = j_mce::Math::floor(*((mce::Math **)_R7 + 2), v11);
  __asm { VLDR            S16, [R7] }
  _R6 = v12;
  __asm { VLDR            S0, [R4] }
  v19 = 0;
  __asm { VLDR            S18, [R7,#4] }
  v20 = 0;
  __asm
  {
    VLDR            S2, [R4,#4]
    VSUB.F32        S24, S0, S16
    VLDR            S20, [R7,#8]
    VSUB.F32        S2, S2, S18
    VLDR            S4, [R4,#8]
    VSUB.F32        S26, S4, S20
    VMUL.F32        S4, S24, S24
    VMUL.F32        S6, S2, S2
    VMUL.F32        S8, S26, S26
    VADD.F32        S4, S6, S4
    VLDR            S6, =0.000001
    VADD.F32        S4, S4, S8
    VCMPE.F32       S4, S6
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !(_NF ^ _VF) )
    __asm
    {
      VCVT.F64.F32    D2, S4
      VSQRT.F64       D2, D2
      VMOV.F64        D3, #1.0
      VDIV.F64        D2, D3, D2
      VMOV            R0, S0
      VCVT.F32.F64    S28, D2
      VMUL.F32        S22, S28, S2
    }
    v22 = j_mce::Math::floor(_R0, v13);
    v23 = v22;
    v50 = v22;
    v25 = j_mce::Math::floor(*((mce::Math **)_R4 + 1), v24);
      VCMPE.F32       S22, #0.0
      VMRS            APSR_nzcv, FPSCR
    v51 = v25;
    v26 = v25 - v10;
    __asm { VMUL.F32        S24, S28, S24 }
    v27 = 1;
    v53 = v10;
    v52 = v26;
    _R5 = v8;
    v29 = 1;
    v20 = 1;
      VMOV            S30, R5
      VMOV            S17, R2
      VCMPE.F32       S24, #0.0
    if ( _NF ^ _VF )
      v27 = -1;
    v30 = v26 * v27;
    _ZF = v30 == 0;
    _NF = v30 < 0;
    v31 = 0;
    if ( !_NF && !_ZF )
      v31 = 1;
    __asm { VMRS            APSR_nzcv, FPSCR }
      v29 = -1;
    LODWORD(v32) = (v23 - v8) * v29;
    v49 = v29;
    if ( SLODWORD(v32) > 0 )
      v19 = 1;
    v33 = v19 | v31;
    v34 = j_mce::Math::floor(*((mce::Math **)_R4 + 2), v32);
    __asm { VMUL.F32        S10, S28, S26 }
    v35 = 1;
    __asm { VMOV            S0, R6 }
    v36 = v34 - _R6;
      VCMPE.F32       S10, #0.0
      v35 = -1;
      VCVT.F32.S32    S6, S0
      VCVT.F32.S32    S8, S17
      VCVT.F32.S32    S12, S30
    if ( !_ZF || v36 * v35 >= 1 )
      __asm { VCMPE.F32       S24, #0.0 }
      v37 = v35 * v35;
      __asm
      {
        VMRS            APSR_nzcv, FPSCR
        VMOV.F32        S14, #1.0
        VSUB.F32        S12, S12, S16
        VCMPE.F32       S22, #0.0
        VSUB.F32        S8, S8, S18
        VABS.F32        S0, S10
        VABS.F32        S2, S22
        VABS.F32        S4, S24
        VSUB.F32        S6, S6, S20
        VADD.F32        S1, S12, S14
        VADD.F32        S3, S8, S14
        VDIV.F32        S0, S14, S0
      }
      if ( _NF ^ _VF )
        __asm { VMOVLT.F32      S1, S12 }
        VCMPE.F32       S10, #0.0
        VDIV.F32        S2, S14, S2
        __asm { VMOVLT.F32      S3, S8 }
        VDIV.F32        S4, S14, S4
        VADD.F32        S14, S6, S14
        __asm { VMOVLT.F32      S14, S6 }
        VDIV.F32        S6, S1, S24
        VDIV.F32        S8, S3, S22
        VDIV.F32        S10, S14, S10
      while ( 1 )
        v38 = v52;
        while ( 1 )
        {
          __asm
          {
            VCMPE.F32       S6, S8
            VMRS            APSR_nzcv, FPSCR
          }
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            break;
            VCMPE.F32       S8, S6
          if ( !(_NF ^ _VF) )
            if ( v33 & 1 )
            {
              while ( 1 )
                ;
            }
            v20 = 1;
            v48 = (v34 - _R6) * v35;
            do
              v48 -= v37;
            while ( v48 > 0 );
            return v20;
          if ( v33 & 1 )
            __asm
              VCMPE.F32       S8, S10
              VMRS            APSR_nzcv, FPSCR
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              do
              {
                __asm { VADD.F32        S10, S10, S0 }
                _R6 += v35;
                __asm
                {
                  VCMPE.F32       S8, S10
                  VMRS            APSR_nzcv, FPSCR
                }
              }
              while ( !((unsigned __int8)(_NF ^ _VF) | _ZF) );
              v36 = v34 - _R6;
          else
            v40 = (v34 - _R6) * v35;
            while ( 1 )
              __asm
                VCMPE.F32       S8, S10
                VMRS            APSR_nzcv, FPSCR
              if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                break;
              __asm { VADD.F32        S10, S10, S0 }
              _R6 += v35;
              v40 -= v37;
              if ( v40 <= 0 )
                return 1;
LABEL_47:
          __asm { VADD.F32        S8, S8, S2 }
          v41 = v53 + v27;
          v53 = v41;
          v38 = v51 - v41;
          v42 = (v51 - v41) * v27;
          _ZF = v42 == 0;
          _NF = v42 < 0;
          v43 = 0;
          if ( !_NF && !_ZF )
            v43 = 1;
          v33 = v19 | v43;
          if ( !((v19 | v43) & 1) && v36 * v35 <= 0 )
            return 1;
        }
        __asm
          VCMPE.F32       S8, S6
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
                VCMPE.F32       S6, S10
              if ( _NF ^ _VF )
                goto LABEL_47;
            v39 = (v34 - _R6) * v35;
              v39 -= v37;
              if ( v39 <= 0 )
        else if ( v33 & 1 )
            VCMPE.F32       S6, S10
            while ( !(_NF ^ _VF) );
            v36 = v34 - _R6;
        else
          v44 = v38;
          v45 = v35 * (v34 - _R6);
          while ( 1 )
              VCMPE.F32       S6, S10
            if ( _NF ^ _VF )
              break;
            __asm { VADD.F32        S10, S10, S0 }
            _R6 += v35;
            v45 -= v37;
            if ( v45 <= 0 )
              return v20;
          v38 = v44;
        v52 = v38;
        _R5 += v49;
        __asm { VADD.F32        S6, S6, S4 }
        v19 = 0;
        v46 = 0;
        if ( v38 * v27 > 0 )
          v46 = 1;
        if ( v49 * (v50 - _R5) > 0 )
          v19 = 1;
        v33 = v19 | v46;
        if ( !(v19 | v46) )
          v20 = 1;
          if ( v36 * v35 <= 0 )
  return v20;
}


void __fastcall FlyingPathNavigation::stop(FlyingPathNavigation *this)
{
  FlyingPathNavigation::stop(this);
}


unsigned int __fastcall FlyingPathNavigation::tick(FlyingPathNavigation *this)
{
  FlyingPathNavigation *v1; // r4@1
  PhysicsComponent *v2; // r0@2
  unsigned int result; // r0@2
  Path *v4; // r0@5
  int v5; // r5@6
  __int64 v6; // r5@7
  int v7; // r0@7
  float v8; // r1@7
  float v9; // r1@7
  float v10; // r1@7
  int v11; // r5@8
  float v12; // r1@8
  float v13; // r1@8
  int v14; // r5@9
  float v15; // r1@9
  Path *v16; // r5@10
  int v17; // r0@10
  int v18; // r5@11
  PhysicsComponent *v19; // r0@11
  int v20; // r0@13
  int v21; // r2@13
  mce::Math *v22; // [sp+4h] [bp-1Ch]@7
  mce::Math *v23; // [sp+8h] [bp-18h]@8
  mce::Math *v24; // [sp+Ch] [bp-14h]@9

  v1 = this;
  ++*((_DWORD *)this + 3);
  if ( (*(int (__fastcall **)(FlyingPathNavigation *))(*(_DWORD *)this + 36))(this) == 1 )
  {
    v2 = (PhysicsComponent *)j_Entity::getPhysicsComponent(*((Entity **)v1 + 1));
    result = j_j_j__ZN16PhysicsComponent20setAffectedByGravityEb_0(v2, *((_BYTE *)v1 + 44));
  }
  else
    if ( (*(int (__fastcall **)(FlyingPathNavigation *))(*(_DWORD *)v1 + 60))(v1) == 1 )
    {
      j_FlyingPathNavigation::_updatePath(v1);
    }
    else
      v4 = (Path *)*((_DWORD *)v1 + 2);
      if ( v4 )
      {
        v5 = j_Path::getIndex(v4);
        if ( v5 < j_Path::getSize(*((Path **)v1 + 2)) )
        {
          v6 = *(_QWORD *)((char *)v1 + 4);
          v7 = j_Path::getIndex((Path *)(*(_QWORD *)((char *)v1 + 4) >> 32));
          j_Path::getPos((Path *)&v22, (const Entity *)HIDWORD(v6), v6, v7);
          LODWORD(v6) = j_mce::Math::floor(*(mce::Math **)(*((_DWORD *)v1 + 1) + 72), v8);
          if ( (_DWORD)v6 == j_mce::Math::floor(v22, v9) )
          {
            v11 = j_mce::Math::floor(*(mce::Math **)(*((_DWORD *)v1 + 1) + 76), v10);
            if ( v11 == j_mce::Math::floor(v23, v12) )
            {
              v14 = j_mce::Math::floor(*(mce::Math **)(*((_DWORD *)v1 + 1) + 80), v13);
              if ( v14 == j_mce::Math::floor(v24, v15) )
              {
                v16 = (Path *)*((_DWORD *)v1 + 2);
                v17 = j_Path::getIndex(*((Path **)v1 + 2));
                j_Path::setIndex(v16, v17 + 1);
              }
            }
          }
        }
      }
    v18 = (*(int (__fastcall **)(FlyingPathNavigation *))(*(_DWORD *)v1 + 36))(v1);
    v19 = (PhysicsComponent *)j_Entity::getPhysicsComponent(*((Entity **)v1 + 1));
    if ( v18 == 1 )
      result = j_PhysicsComponent::setAffectedByGravity(v19, *((_BYTE *)v1 + 44));
      j_PhysicsComponent::setAffectedByGravity(v19, 0);
      j_Path::currentPos((Path *)&v22, (const Entity *)(*(_QWORD *)((char *)v1 + 4) >> 32), *(_QWORD *)((char *)v1 + 4));
      v20 = j_Mob::getMoveControl(*((Mob **)v1 + 1));
      v21 = *((_DWORD *)v1 + 8);
      result = (*(int (**)(void))(*(_DWORD *)v20 + 8))();
  return result;
}


void __fastcall FlyingPathNavigation::stop(FlyingPathNavigation *this)
{
  FlyingPathNavigation *v1; // r4@1
  PhysicsComponent *v2; // r0@1

  v1 = this;
  v2 = (PhysicsComponent *)j_Entity::getPhysicsComponent(*((Entity **)this + 1));
  j_PhysicsComponent::setAffectedByGravity(v2, *((_BYTE *)v1 + 44));
  j_j_j__ZN14PathNavigation4stopEv(v1);
}


PathFinder *__fastcall FlyingPathNavigation::createPath(FlyingPathNavigation *this, Entity *a2, float a3)
{
  Entity *v3; // r5@1
  PathNavigation *v4; // r6@1
  float v5; // r4@1
  PhysicsComponent *v6; // r0@2

  v3 = a2;
  v4 = this;
  v5 = a3;
  if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)a2 + 36))(a2) == 1 )
  {
    v6 = (PhysicsComponent *)j_Entity::getPhysicsComponent(*((Entity **)v3 + 1));
    *((_BYTE *)v3 + 44) = j_PhysicsComponent::isAffectedByGravity(v6);
  }
  return j_PathNavigation::createPath(v4, v3, v5);
}


void __fastcall FlyingPathNavigation::~FlyingPathNavigation(FlyingPathNavigation *this)
{
  FlyingPathNavigation::~FlyingPathNavigation(this);
}


PathFinder *__fastcall FlyingPathNavigation::createPath(FlyingPathNavigation *this, const Vec3 *a2, int a3)
{
  const Vec3 *v3; // r5@1
  PathNavigation *v4; // r6@1
  int v5; // r4@1
  PhysicsComponent *v6; // r0@2

  v3 = a2;
  v4 = this;
  v5 = a3;
  if ( (*(int (__fastcall **)(const Vec3 *))(*(_DWORD *)a2 + 36))(a2) == 1 )
  {
    v6 = (PhysicsComponent *)j_Entity::getPhysicsComponent(*((Entity **)v3 + 1));
    *((_BYTE *)v3 + 44) = j_PhysicsComponent::isAffectedByGravity(v6);
  }
  return j_PathNavigation::createPath(v4, v3, v5);
}


int __fastcall FlyingPathNavigation::FlyingPathNavigation(int a1, int a2)
{
  int v2; // r4@1
  PhysicsComponent *v3; // r0@1

  v2 = a1;
  j_PathNavigation::PathNavigation(a1, a2);
  *(_DWORD *)v2 = &off_271B1D4;
  v3 = (PhysicsComponent *)j_Entity::getPhysicsComponent(*(Entity **)(v2 + 4));
  *(_BYTE *)(v2 + 44) = j_PhysicsComponent::isAffectedByGravity(v3);
  return v2;
}


void __fastcall FlyingPathNavigation::~FlyingPathNavigation(FlyingPathNavigation *this)
{
  PathNavigation *v1; // r0@1

  v1 = j_PathNavigation::~PathNavigation(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall FlyingPathNavigation::_getTempMobPos(FlyingPathNavigation *this, int a2)
{
  FlyingPathNavigation *v2; // r4@1
  int v3; // r0@1
  __int64 v4; // r1@1
  int result; // r0@1

  v2 = this;
  v3 = (*(int (**)(void))(**(_DWORD **)(a2 + 4) + 52))();
  v4 = *(_QWORD *)v3;
  result = *(_DWORD *)(v3 + 8);
  *(_QWORD *)v2 = v4;
  *((_DWORD *)v2 + 2) = result;
  return result;
}
