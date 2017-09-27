

int __fastcall WaterBoundPathNavigation::tick(WaterBoundPathNavigation *this)
{
  WaterBoundPathNavigation *v1; // r4@1
  int result; // r0@1
  Path *v3; // r0@6
  int v4; // r5@7
  const Entity *v5; // r6@8
  int v11; // r0@8
  float v12; // r1@8
  int v14; // r5@10
  float v15; // r1@10
  float v16; // r1@10
  int v18; // r5@11
  float v19; // r1@11
  Path *v20; // r5@12
  int v21; // r0@12
  BlockSource *v22; // r0@14
  Block *v23; // r5@14
  int v24; // r1@14
  int (__fastcall *v25)(Block *, mce::Math **, int, char *); // r7@16
  int v26; // r0@16
  int v27; // ST00_4@16
  int v28; // r0@18
  int v29; // r2@18
  mce::Math *v30; // [sp+4h] [bp-6Ch]@8
  mce::Math *v32; // [sp+Ch] [bp-64h]@11
  float v33; // [sp+14h] [bp-5Ch]@17
  char v34; // [sp+20h] [bp-50h]@14
  char v35; // [sp+2Ch] [bp-44h]@14
  float v36; // [sp+30h] [bp-40h]@14

  v1 = this;
  ++*((_DWORD *)this + 3);
  result = (*(int (__fastcall **)(WaterBoundPathNavigation *))(*(_DWORD *)this + 36))(this);
  if ( !result )
  {
    result = j_Mob::getMoveControl(*((Mob **)v1 + 21));
    if ( result )
    {
      if ( (*(int (**)(void))(**((_DWORD **)v1 + 21) + 216))()
        || (*(int (**)(void))(**((_DWORD **)v1 + 21) + 208))() == 1 )
      {
        j_WaterBoundPathNavigation::_updatePath(v1);
      }
      v3 = (Path *)*((_DWORD *)v1 + 2);
      if ( v3 )
        v4 = j_Path::getIndex(v3);
        if ( v4 < j_Path::getSize(*((Path **)v1 + 2)) )
        {
          v5 = (const Entity *)*((_DWORD *)v1 + 2);
          _R5 = *((_DWORD *)v1 + 21);
          __asm
          {
            VLDR            S20, [R5,#0x4C]
            VLDR            S16, [R5,#0x50]
            VLDR            S18, [R5,#0x48]
            VLDR            S22, [R5,#0x134]
          }
          v11 = j_Path::getIndex(*((Path **)v1 + 2));
          j_Path::getPos((Path *)&v30, v5, _R5, v11);
            VMOV.F32        S0, #0.5
            VLDR            S2, [SP,#0x70+var_68]
            VMUL.F32        S0, S22, S0
            VADD.F32        S0, S0, S20
            VCMPE.F32       S0, S2
            VMRS            APSR_nzcv, FPSCR
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) && !*(_BYTE *)(*((_DWORD *)v1 + 21) + 216) )
            __asm { VMOV            R0, S18 }
            v14 = j_mce::Math::floor(_R0, v12);
            if ( v14 == j_mce::Math::floor(v30, v15) )
            {
              __asm { VMOV            R0, S16 }
              v18 = j_mce::Math::floor(_R0, v16);
              if ( v18 == j_mce::Math::floor(v32, v19) )
              {
                v20 = (Path *)*((_DWORD *)v1 + 2);
                v21 = j_Path::getIndex(*((Path **)v1 + 2));
                j_Path::setIndex(v20, v21 + 1);
              }
            }
        }
      result = (*(int (__fastcall **)(WaterBoundPathNavigation *))(*(_DWORD *)v1 + 36))(v1);
      if ( !result )
        j_Path::currentPos((Path *)&v35, *((const Entity **)v1 + 2), *((_DWORD *)v1 + 21));
        j_BlockPos::BlockPos((int)&v34, (int)&v35);
        __asm
          VMOV.F32        S0, #1.0
          VLDR            S2, [SP,#0x70+var_40]
          VADD.F32        S0, S2, S0
          VSTR            S0, [SP,#0x70+var_40]
        v22 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 21));
        v23 = (Block *)j_BlockSource::getBlock(v22, (const BlockPos *)&v34);
        if ( !j_Block::hasProperty((int)v23, v24, 1024LL) && !j_Block::isType(v23, (const Block *)Block::mChest) )
          j_AABB::AABB((AABB *)&v30);
          v25 = *(int (__fastcall **)(Block *, mce::Math **, int, char *))(*(_DWORD *)v23 + 12);
          v26 = j_Entity::getRegion(*((Entity **)v1 + 21));
          v27 = *((_DWORD *)v1 + 21);
          if ( v25(v23, &v30, v26, &v34) == 1 )
            v36 = v33;
        v28 = j_Mob::getMoveControl(*((Mob **)v1 + 21));
        v29 = *((_DWORD *)v1 + 8);
        result = (*(int (__cdecl **)(int))(*(_DWORD *)v28 + 8))(v28);
    }
  }
  return result;
}


signed int __fastcall WaterBoundPathNavigation::_canMoveDirectly(WaterBoundPathNavigation *this, const Vec3 *a2, const Vec3 *a3, int a4, int a5, int a6)
{
  WaterBoundPathNavigation *v6; // r6@1
  const Vec3 *v8; // r5@1
  int v9; // r0@1
  const Vec3 *v14; // r1@1
  int v16; // r0@1
  signed int v17; // r4@1
  int v19; // [sp+10h] [bp-60h]@1
  int v20; // [sp+18h] [bp-58h]@1
  int v21; // [sp+1Ch] [bp-54h]@1

  v6 = this;
  _R4 = a3;
  v8 = a2;
  v9 = j_Entity::getRegion(*((Entity **)this + 21));
  __asm { VMOV.F32        S0, #0.5 }
  v14 = (const Vec3 *)v9;
  _R0 = *((_DWORD *)v6 + 21);
  __asm { VLDR            S2, [R0,#0x134] }
  v16 = *((_DWORD *)_R4 + 2);
  __asm
  {
    VMUL.F32        S0, S2, S0
    VLDR            S2, [R4,#4]
  }
  v19 = *(_DWORD *)_R4;
  v17 = 0;
    VADD.F32        S0, S0, S2
    VSTR            S0, [SP,#0x70+var_5C]
  v20 = v16;
  j_BlockSource::clip((BlockSource *)&v21, v14, v8, (int)&v19, 0, 1, 0, 0);
  if ( v21 == 3 )
    v17 = 1;
  return v17;
}


signed int __fastcall WaterBoundPathNavigation::travel(WaterBoundPathNavigation *this, float *a2, float *a3)
{
  WaterBoundPathNavigation *v3; // r4@1
  float *v4; // r5@1
  float *v5; // r6@1
  int v6; // r1@1
  Entity *v7; // r0@1
  int v8; // r1@2
  signed int result; // r0@2
  int v10; // r2@6
  int v11; // r1@6

  v3 = this;
  v4 = a2;
  v5 = a3;
  v6 = (*(int (**)(void))(*(_DWORD *)this + 36))();
  v7 = (Entity *)*((_DWORD *)v3 + 21);
  if ( v6 == 1 )
  {
    v8 = j_Entity::getTarget(v7);
    result = 0;
    if ( !v8 )
    {
      *(_DWORD *)v4 = 0;
      result = 1;
    }
  }
  else if ( (*(int (**)(void))(*(_DWORD *)v7 + 208))() == 1 )
    v10 = *(_DWORD *)v5;
    v11 = *(_DWORD *)v4;
    (*(void (**)(void))(**((_DWORD **)v3 + 21) + 100))();
    (*(void (**)(void))(**((_DWORD **)v3 + 21) + 76))();
    _R0 = *((_DWORD *)v3 + 21);
    __asm
      VLDR            S0, =0.9
      VLDR            S2, [R0,#0x6C]
      VMUL.F32        S2, S2, S0
      VSTR            S2, [R0,#0x6C]
      VLDR            S2, [R0,#0x70]
      VSTR            S2, [R0,#0x70]
      VLDR            S2, [R0,#0x74]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [R0,#0x74]
    if ( !j_Entity::isMoving(*((Entity **)v3 + 21)) && !j_Entity::getTarget(*((Entity **)v3 + 21)) )
      _R0 = *((_DWORD *)v3 + 21);
      __asm
      {
        VLDR            D1, =-0.005
        VLDR            S0, [R0,#0x70]
        VCVT.F64.F32    D0, S0
        VADD.F64        D0, D0, D1
        VCVT.F32.F64    S0, D0
        VSTR            S0, [R0,#0x70]
      }
  else
    result = 1;
  return result;
}


int __fastcall WaterBoundPathNavigation::_canUpdateWaterPath(WaterBoundPathNavigation *this)
{
  WaterBoundPathNavigation *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( (*(int (**)(void))(**((_DWORD **)this + 21) + 216))() )
    result = 1;
  else
    result = (*(int (**)(void))(**((_DWORD **)v1 + 21) + 208))();
  return result;
}


int __fastcall WaterBoundPathNavigation::_updatePath(WaterBoundPathNavigation *this)
{
  const Entity *v9; // r6@1
  int v10; // r0@1
  int v11; // r6@3
  int v12; // r5@3
  const Vec3 *v13; // r1@9
  int v18; // r12@17
  int v20; // [sp+14h] [bp-B4h]@7
  int v22; // [sp+1Ch] [bp-ACh]@7
  float v23; // [sp+20h] [bp-A8h]@1
  int v26; // [sp+2Ch] [bp-9Ch]@1
  float v27; // [sp+30h] [bp-98h]@7
  int v28; // [sp+34h] [bp-94h]@1
  int v29; // [sp+38h] [bp-90h]@9
  int v30; // [sp+40h] [bp-88h]@9
  int v31; // [sp+44h] [bp-84h]@9

  __asm { VMOV.F32        S16, #0.5 }
  _R4 = this;
  _R5 = *((_DWORD *)this + 21);
  __asm
  {
    VLDR            S0, [R5,#0x134]
    VLDR            S2, [R5,#0x4C]
  }
  _R8 = *(_DWORD *)(_R5 + 80);
  __asm { VMUL.F32        S0, S0, S16 }
  _R7 = *(_DWORD *)(_R5 + 72);
  v26 = *(_DWORD *)(_R5 + 72);
    VADD.F32        S18, S0, S2
    VSTR            S18, [SP,#0xC8+var_98]
  v28 = _R8;
  v9 = (const Entity *)*((_DWORD *)this + 2);
  __asm { VLDR            S20, [R5,#0x130] }
  v10 = j_Path::getIndex(*((Path **)this + 2));
  j_Path::getPos((Path *)&v23, v9, _R5, v10);
    VMOV            S0, R7
    VLDR            S2, [SP,#0xC8+var_A8]
    VLDR            S4, [SP,#0xC8+var_A4]
    VSUB.F32        S0, S2, S0
    VLDR            S6, [SP,#0xC8+var_A0]
    VSUB.F32        S2, S4, S18
    VMOV            S4, R8
    VSUB.F32        S4, S6, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VMUL.F32        S2, S20, S20
    VADD.F32        S0, S0, S4
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    j_Path::next(*((Path **)_R4 + 2));
  v11 = j_Path::getIndex(*((Path **)_R4 + 2));
  v12 = j_Path::getSize(*((Path **)_R4 + 2)) - 1;
  if ( v11 + 6 < v12 )
    v12 = v11 + 6;
  if ( v12 > j_Path::getIndex(*((Path **)_R4 + 2)) )
    __asm { VLDR            S18, =36.0 }
    while ( 1 )
    {
      j_Path::getPos((Path *)&v20, *((const Entity **)_R4 + 2), *((_DWORD *)_R4 + 21), v12);
      __asm
      {
        VLDR            S0, [SP,#0xC8+var_B4]
        VLDR            S6, [SP,#0xC8+var_9C]
        VLDR            S2, [SP,#0xC8+var_B0]
        VLDR            S8, [SP,#0xC8+var_98]
        VSUB.F32        S0, S6, S0
        VLDR            S4, [SP,#0xC8+var_AC]
        VSUB.F32        S2, S8, S2
        VLDR            S10, [SP,#0xC8+var_94]
        VSUB.F32        S4, S10, S4
        VMUL.F32        S0, S0, S0
        VMUL.F32        S2, S2, S2
        VMUL.F32        S4, S4, S4
        VADD.F32        S0, S2, S0
        VADD.F32        S0, S0, S4
        VCMPE.F32       S0, S18
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        v13 = (const Vec3 *)j_Entity::getRegion(*((Entity **)_R4 + 21));
        _R0 = *((_DWORD *)_R4 + 21);
        __asm
        {
          VLDR            S2, [SP,#0xC8+var_B0]
          VLDR            S0, [R0,#0x134]
          VMUL.F32        S0, S0, S16
        }
        v29 = v20;
          VADD.F32        S0, S0, S2
          VSTR            S0, [SP,#0xC8+var_8C]
        v30 = v22;
        j_BlockSource::clip((BlockSource *)&v31, v13, (const Vec3 *)&v26, (int)&v29, 0, 1, 0, 0);
        if ( v31 == 3 )
          break;
      if ( --v12 <= j_Path::getIndex(*((Path **)_R4 + 2)) )
        goto LABEL_13;
    }
    j_Path::setIndex(*((Path **)_R4 + 2), v12);
LABEL_13:
  _R0 = *(_QWORD *)((char *)_R4 + 12);
  if ( (signed int)_R0 - HIDWORD(_R0) >= 16 )
    __asm
      VLDR            S0, [SP,#0xC8+var_9C]
      VLDR            S6, [R4,#0x14]
      VLDR            S2, [SP,#0xC8+var_98]
      VLDR            S8, [R4,#0x18]
      VSUB.F32        S6, S6, S0
      VLDR            S4, [SP,#0xC8+var_94]
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
      (*(void (__fastcall **)(WaterBoundPathNavigation *))(*(_DWORD *)_R4 + 40))(_R4);
      HIDWORD(_R0) = v26;
      _R2 = v27;
      _R3 = v28;
      LODWORD(_R0) = *((_DWORD *)_R4 + 3);
    else
        VMOV            R1, S0
        VMOV            R2, S2
        VMOV            R3, S4
    v18 = (int)_R4 + 16;
    *(_QWORD *)v18 = _R0;
    *(float *)(v18 + 8) = _R2;
    *(_DWORD *)(v18 + 12) = _R3;
  return _R0;
}


void __fastcall WaterBoundPathNavigation::~WaterBoundPathNavigation(WaterBoundPathNavigation *this)
{
  WaterBoundPathNavigation::~WaterBoundPathNavigation(this);
}


void __fastcall WaterBoundPathNavigation::~WaterBoundPathNavigation(WaterBoundPathNavigation *this)
{
  PathNavigation *v1; // r0@1

  v1 = j_PathNavigation::~PathNavigation(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall WaterBoundPathNavigation::getTempMobPos(int result, int a2)
{
  int v7; // r2@1

  __asm { VMOV.F32        S0, #0.5 }
  _R1 = *(_DWORD *)(a2 + 84);
  __asm { VLDR            S2, [R1,#0x134] }
  v7 = *(_DWORD *)(_R1 + 80);
  __asm
  {
    VMUL.F32        S0, S2, S0
    VLDR            S2, [R1,#0x4C]
  }
  *(_DWORD *)result = *(_DWORD *)(_R1 + 72);
    VADD.F32        S0, S0, S2
    VSTR            S0, [R0,#4]
  *(_DWORD *)(result + 8) = v7;
  return result;
}
