

int __fastcall WallClimberPathNavigation::tick(WallClimberPathNavigation *this)
{
  int result; // r0@1
  int v3; // r5@2
  int v4; // r1@4
  float v11; // r1@10
  int v14; // r6@12
  int v15; // r0@12
  int v16; // r1@12
  int v18; // r0@16
  int v19; // r2@16
  int v20; // [sp+Ch] [bp-24h]@12
  int v21; // [sp+10h] [bp-20h]@12
  int v22; // [sp+14h] [bp-1Ch]@12

  _R4 = this;
  result = j_Mob::getMoveControl(*((Mob **)this + 1));
  if ( result )
  {
    v3 = *((_DWORD *)_R4 + 1);
    if ( *(_BYTE *)(v3 + 218) )
    {
      if ( j_Entity::isInsideBorderBlock(*((Entity **)_R4 + 1), 1.2) )
      {
        v4 = 0;
      }
      else
        v4 = *((_BYTE *)_R4 + 36);
        if ( *((_BYTE *)_R4 + 36) )
          v4 = 1;
    }
    else
      v4 = 0;
    j_Entity::setClimbing((Entity *)v3, v4);
    if ( (*(int (__fastcall **)(WallClimberPathNavigation *))(*(_DWORD *)_R4 + 36))(_R4) != 1 || !*((_BYTE *)_R4 + 36) )
      return j_j_j__ZN14PathNavigation4tickEv(_R4);
    _R0 = (Entity *)*((_DWORD *)_R4 + 1);
    __asm
      VMOV.F32        S2, #0.75
      VLDR            S0, [R0,#0x130]
      VMUL.F32        S0, S0, S0
      VMUL.F32        S16, S0, S2
    _R0 = j_Entity::distanceSqrToBlockPosCenter(_R0, (WallClimberPathNavigation *)((char *)_R4 + 44));
      VMOV            S0, R0
      VCMPE.F32       S0, S16
      VMRS            APSR_nzcv, FPSCR
    if ( !(_NF ^ _VF) )
      __asm
        VLDR            S0, [R4,#0x30]
        VCVT.F32.S32    S2, S0
      _R5 = (Mob *)*((_DWORD *)_R4 + 1);
        VLDR            S0, [R5,#0x4C]
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_16:
        v18 = j_Mob::getMoveControl(_R5);
        __asm
        {
          VLDR            S0, [R4,#0x2C]
          VMOV.F32        S6, #0.5
          VLDR            S4, [R4,#0x34]
          VLDR            S2, [R4,#0x30]
          VCVT.F32.S32    S0, S0
          VCVT.F32.S32    S4, S4
          VCVT.F32.S32    S2, S2
          VADD.F32        S0, S0, S6
          VADD.F32        S4, S4, S6
          VSTR            S0, [SP,#0x30+var_30]
          VSTR            S2, [SP,#0x30+var_2C]
          VSTR            S4, [SP,#0x30+var_28]
        }
        v19 = *((_DWORD *)_R4 + 8);
        return (*(int (**)(void))(*(_DWORD *)v18 + 8))();
      __asm { VMOV            R0, S0 }
      v14 = *((_DWORD *)_R4 + 11);
      v15 = j_mce::Math::floor(_R0, v11);
      v16 = *((_DWORD *)_R4 + 13);
      v20 = v14;
      v21 = v15;
      v22 = v16;
      _R0 = j_Entity::distanceSqrToBlockPosCenter(_R5, (const BlockPos *)&v20);
        VMOV            S0, R0
        VCMPE.F32       S0, S16
      if ( !(_NF ^ _VF) )
        _R5 = (Mob *)*((_DWORD *)_R4 + 1);
        goto LABEL_16;
    result = 0;
    *((_BYTE *)_R4 + 36) = 0;
  }
  return result;
}


PathFinder *__fastcall WallClimberPathNavigation::createPath(WallClimberPathNavigation *this, const Vec3 *a2, int a3)
{
  PathNavigation *v3; // r6@1
  const Vec3 *v4; // r5@1
  int v5; // r4@1
  int v7; // [sp+4h] [bp-1Ch]@1
  int v8; // [sp+8h] [bp-18h]@1
  int v9; // [sp+Ch] [bp-14h]@1

  v3 = this;
  v4 = a2;
  v5 = a3;
  *((_BYTE *)a2 + 36) = 1;
  j_BlockPos::BlockPos((int)&v7, a3);
  *((_DWORD *)v4 + 11) = v7;
  *((_DWORD *)v4 + 12) = v8;
  *((_DWORD *)v4 + 13) = v9;
  return j_PathNavigation::createPath(v3, v4, v5);
}


void __fastcall WallClimberPathNavigation::~WallClimberPathNavigation(WallClimberPathNavigation *this)
{
  PathNavigation *v1; // r0@1

  v1 = j_PathNavigation::~PathNavigation(this);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall WallClimberPathNavigation::moveTo(WallClimberPathNavigation *this, Entity *a2, float a3)
{
  WallClimberPathNavigation *v3; // r4@1
  Entity *v4; // r5@1
  float v6; // r1@1
  signed int v11; // r5@2
  Path *v12; // r0@3
  __int64 v13; // r6@5
  float v14; // r1@5
  float v15; // r1@5
  int v16; // r0@5
  Path *v17; // r0@7
  __int64 v19; // [sp+0h] [bp-28h]@1

  v3 = this;
  v4 = a2;
  _R6 = LODWORD(a3);
  (*(void (__fastcall **)(char *, WallClimberPathNavigation *, Entity *))(*(_DWORD *)this + 16))(
    (char *)&v19 + 4,
    this,
    a2);
  __asm { VMOV            S16, R6 }
  if ( HIDWORD(v19) )
  {
    v19 = HIDWORD(v19);
    v11 = j_PathNavigation::moveTo((int)v3, (Path **)&v19, _R6);
    if ( (_DWORD)v19 )
    {
      v12 = j_Path::~Path((Path *)v19);
      j_operator delete((void *)v12);
    }
    LODWORD(v19) = 0;
  }
  else
    LODWORD(v13) = j_mce::Math::floor(*((mce::Math **)v4 + 18), v6);
    HIDWORD(v13) = j_mce::Math::floor(*((mce::Math **)v4 + 19), v14);
    v16 = j_mce::Math::floor(*((mce::Math **)v4 + 20), v15);
    v11 = 1;
    *(_QWORD *)((char *)v3 + 44) = v13;
    *((_DWORD *)v3 + 13) = v16;
    *((_BYTE *)v3 + 36) = 1;
    __asm { VSTR            S16, [R4,#0x20] }
    v17 = j_Path::~Path((Path *)HIDWORD(v19));
    j_operator delete((void *)v17);
  return v11;
}


PathFinder *__fastcall WallClimberPathNavigation::createPath(WallClimberPathNavigation *this, Entity *a2, float a3)
{
  PathNavigation *v3; // r6@1
  Entity *v4; // r5@1
  float v5; // r4@1
  int v6; // r0@1
  int v8; // [sp+4h] [bp-1Ch]@1
  int v9; // [sp+8h] [bp-18h]@1
  int v10; // [sp+Ch] [bp-14h]@1

  v3 = this;
  v4 = a2;
  v5 = a3;
  *((_BYTE *)a2 + 36) = 1;
  v6 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)LODWORD(a3) + 52))(LODWORD(a3));
  j_BlockPos::BlockPos((int)&v8, v6);
  *((_DWORD *)v4 + 11) = v8;
  *((_DWORD *)v4 + 12) = v9;
  *((_DWORD *)v4 + 13) = v10;
  return j_PathNavigation::createPath(v3, v4, v5);
}


signed int __fastcall WallClimberPathNavigation::_canUpdatePath(WallClimberPathNavigation *this)
{
  signed int result; // r0@2

  if ( *(_BYTE *)(*((_DWORD *)this + 1) + 218) )
    result = 1;
  else
    result = j_PathNavigation::_canUpdatePath(this);
  return result;
}


void __fastcall WallClimberPathNavigation::~WallClimberPathNavigation(WallClimberPathNavigation *this)
{
  WallClimberPathNavigation::~WallClimberPathNavigation(this);
}
