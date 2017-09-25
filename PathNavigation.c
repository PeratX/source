

int __fastcall PathNavigation::moveTo(PathNavigation *this, const Vec3 *a2, float a3)
{
  PathNavigation *v3; // r5@1
  int v4; // r0@1
  float v5; // r4@1
  int (__fastcall *v6)(PathNavigation *, Path **, _DWORD); // r7@1
  int v7; // r4@1
  Path *v8; // r0@2
  Path *v10; // [sp+0h] [bp-18h]@1

  v3 = this;
  v4 = *(_DWORD *)this;
  v5 = a3;
  v6 = *(int (__fastcall **)(PathNavigation *, Path **, _DWORD))(v4 + 24);
  (*(void (__fastcall **)(Path **, PathNavigation *, const Vec3 *))(v4 + 8))(&v10, v3, a2);
  v7 = v6(v3, &v10, LODWORD(v5));
  if ( v10 )
  {
    v8 = Path::~Path(v10);
    operator delete((void *)v8);
  }
  return v7;
}


int __fastcall PathNavigation::isStableDestination(int a1, const BlockPos *a2)
{
  const BlockPos *v2; // r4@1
  BlockSource *v3; // r0@1
  Block *v4; // r0@1
  Material *v5; // r0@1

  v2 = a2;
  v3 = (BlockSource *)Entity::getRegion(*(Entity **)(a1 + 4));
  v4 = (Block *)BlockSource::getBlock(v3, v2);
  v5 = (Material *)Block::getMaterial(v4);
  return Material::isSolid(v5) ^ 1;
}


signed int __fastcall PathNavigation::moveTo(int a1, Path **a2, int a3)
{
  Path **v3; // r6@1
  int v4; // r4@1
  Path *v6; // r1@3
  Path *v7; // r0@3
  Path *v8; // r0@4
  int v13; // r5@8
  int v15; // r0@8
  signed int result; // r0@8

  v3 = a2;
  v4 = a1;
  _R5 = a3;
  if ( !*a2 )
    goto LABEL_12;
  if ( !Path::sameAs(*a2, *(Path **)(a1 + 8)) )
  {
    v6 = *v3;
    *v3 = 0;
    v7 = *(Path **)(v4 + 8);
    *(_DWORD *)(v4 + 8) = v6;
    if ( v7 )
    {
      v8 = Path::~Path(v7);
      operator delete((void *)v8);
    }
  }
  if ( *(_BYTE *)(v4 + 37) )
    PathNavigation::_trimPathFromSun((PathNavigation *)v4);
  if ( Path::getSize(*(Path **)(v4 + 8)) )
    __asm
      VMOV            S0, R5
      VSTR            S0, [R4,#0x20]
    *(_DWORD *)(v4 + 16) = *(_DWORD *)(v4 + 12);
    v13 = *(_DWORD *)(*(_DWORD *)(v4 + 4) + 72);
    _R0 = PathNavigation::_getSurfaceY((PathNavigation *)v4);
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
    v15 = *(_DWORD *)(*(_DWORD *)(v4 + 4) + 80);
    *(_DWORD *)(v4 + 20) = v13;
    __asm { VSTR            S0, [R4,#0x18] }
    *(_DWORD *)(v4 + 28) = v15;
    result = 1;
  else
LABEL_12:
    result = 0;
  return result;
}


int __fastcall PathNavigation::setSpeed(int result, float a2)
{
  *(float *)(result + 32) = a2;
  return result;
}


signed int __fastcall PathNavigation::isDone(PathNavigation *this)
{
  Path *v1; // r0@1
  signed int result; // r0@2

  v1 = (Path *)*((_DWORD *)this + 2);
  if ( v1 )
    result = Path::isDone(v1);
  else
    result = 1;
  return result;
}


int __fastcall PathNavigation::_isInLiquid(PathNavigation *this)
{
  PathNavigation *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( (*(int (**)(void))(**((_DWORD **)this + 1) + 208))() )
    result = 1;
  else
    result = (*(int (**)(void))(**((_DWORD **)v1 + 1) + 216))();
  return result;
}


int __fastcall PathNavigation::setAvoidPortals(int result, bool a2)
{
  *(_BYTE *)(result + 43) = a2;
  return result;
}


signed int __fastcall PathNavigation::_trimPathFromSun(PathNavigation *this)
{
  PathNavigation *v1; // r4@1
  BlockSource *v2; // r5@1
  float v3; // r1@1
  int v4; // r6@1
  float v11; // r1@1
  int v12; // r0@1
  signed int result; // r0@1
  int v14; // r5@3
  const BlockPos *v15; // r6@4
  BlockSource *v16; // r0@4
  int v17; // r1@8

  v1 = this;
  v2 = (BlockSource *)Entity::getRegion(*((Entity **)this + 1));
  v4 = mce::Math::floor(*(mce::Math **)(*((_DWORD *)v1 + 1) + 72), v3);
  _R0 = *((_DWORD *)v1 + 1);
  __asm
  {
    VLDR            S0, =0.05
    VLDR            S2, [R0,#0x10C]
    VADD.F32        S0, S2, S0
    VCVTR.S32.F32   S0, S0
    VMOV            R7, S0
  }
  v12 = mce::Math::floor(*(mce::Math **)(_R0 + 80), v11);
  result = BlockSource::canSeeSky(v2, v4, _R7, v12);
  if ( !result )
    result = Path::getSize(*((Path **)v1 + 2));
    if ( result >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        v15 = (const BlockPos *)Path::get(*((Path **)v1 + 2), v14);
        v16 = (BlockSource *)Entity::getRegion(*((Entity **)v1 + 1));
        if ( BlockSource::canSeeSky(v16, v15) == 1 )
          break;
        ++v14;
        result = Path::getSize(*((Path **)v1 + 2));
        if ( v14 >= result )
          return result;
      }
      if ( v14 )
        v17 = v14 - 1;
      else
        v17 = 0;
      result = j_j_j__ZN4Path7setSizeEi(*((Path **)v1 + 2), v17);
    }
  return result;
}


int __fastcall PathNavigation::moveTo(PathNavigation *this, Entity *a2, float a3)
{
  PathNavigation *v3; // r5@1
  int v4; // r0@1
  float v5; // r4@1
  int (__fastcall *v6)(PathNavigation *, Path **, _DWORD); // r7@1
  int v7; // r4@1
  Path *v8; // r0@2
  Path *v10; // [sp+0h] [bp-18h]@1

  v3 = this;
  v4 = *(_DWORD *)this;
  v5 = a3;
  v6 = *(int (__fastcall **)(PathNavigation *, Path **, _DWORD))(v4 + 24);
  (*(void (__fastcall **)(Path **, PathNavigation *, Entity *))(v4 + 16))(&v10, v3, a2);
  v7 = v6(v3, &v10, LODWORD(v5));
  if ( v10 )
  {
    v8 = Path::~Path(v10);
    operator delete((void *)v8);
  }
  return v7;
}


PathFinder *__fastcall PathNavigation::createPath(PathNavigation *this, Entity *a2, float a3)
{
  Entity *v3; // r6@1
  Level *v4; // r5@1
  float v5; // r10@1
  Entity *v6; // r8@2
  Entity *v7; // r9@2
  float v8; // r0@2
  unsigned int v9; // r2@2
  bool v10; // r7@2
  unsigned int v11; // r1@2
  signed int v12; // r3@2
  signed int v13; // r6@4
  unsigned int v14; // r4@8
  bool v15; // zf@8
  PathFinder *result; // r0@12

  v3 = a2;
  v4 = this;
  v5 = a3;
  if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)a2 + 56))(a2) == 1 )
  {
    v6 = (Entity *)Entity::getLevel(*((Entity **)v3 + 1));
    v7 = (Entity *)(*(_QWORD *)v3 >> 32);
    v8 = COERCE_FLOAT((*(int (__fastcall **)(Entity *))(*(_QWORD *)v3 + 32))(v3));
    v9 = *((_DWORD *)v3 + 10);
    v10 = 0;
    v11 = *((_WORD *)v3 + 19);
    v12 = v9 & 0xFF0000;
    if ( v9 & 0xFF0000 )
      v12 = 1;
    v13 = *((_DWORD *)v3 + 10) & 0xFF00;
    if ( v9 & 0xFF00 )
      v13 = 1;
    if ( v11 > 0xFF )
      v10 = 1;
    v14 = v9 >> 24;
    v15 = v9 >> 24 == 0;
    v9 = (unsigned __int8)v9;
    if ( !v15 )
      LOBYTE(v14) = 1;
    if ( v9 )
      LOBYTE(v9) = 1;
    result = Level::findPath(v4, v6, v7, v5, v8, (_BYTE)v11 != 0, v10, v9, v13, v12, v14);
  }
  else
    result = 0;
    *(_DWORD *)v4 = 0;
  return result;
}


signed int __fastcall PathNavigation::_canWalkOn(PathNavigation *this, int a2, int a3, int a4, int a5, int a6, int a7, const Vec3 *a8, float a9, float a10)
{
  PathNavigation *v10; // r4@1
  int v12; // r7@1
  int v18; // r10@1
  signed int v19; // r1@3
  int v20; // r0@5
  BlockSource *v21; // r5@7
  int v23; // r6@10
  int *v24; // r6@14
  signed int v25; // r0@16
  float v27; // [sp+10h] [bp-60h]@0
  float v28; // [sp+14h] [bp-5Ch]@0
  int v29; // [sp+18h] [bp-58h]@7
  int v30; // [sp+24h] [bp-4Ch]@7

  v10 = this;
  _R11 = a8;
  v12 = a3;
  __asm
  {
    VLDR            S16, [SP,#0x70+arg_10]
    VLDR            S18, [SP,#0x70+arg_14]
    VSTR            S16, [SP,#0x70+var_60]
    VSTR            S18, [SP,#0x70+var_5C]
  }
  _R9 = a2 - a5 / 2;
  v18 = a4 - a7 / 2;
  if ( PathNavigation::_canWalkAbove(
         (int)this,
         a2 - a5 / 2,
         a3,
         a4 - a7 / 2,
         *(float *)&a5,
         *(float *)&a6,
         a7,
         a8,
         v27,
         v28) == 1 )
    if ( Entity::canFly(*((Entity **)v10 + 1)) )
    {
      v19 = 1;
    }
    else
      v20 = Entity::getRegion(*((Entity **)v10 + 1));
      if ( a5 < 1 )
      {
        v25 = 2;
      }
      else if ( a7 <= 0 )
      else
        v29 = _R9 + a5;
        v30 = v12 - 1;
        __asm { VMOV.F32        S20, #0.5 }
        v21 = (BlockSource *)v20;
        while ( 2 )
        {
          __asm { VMOV            S0, R9 }
          _R7 = v18;
          __asm
          {
            VCVT.F32.S32    S0, S0
            VADD.F32        S22, S0, S20
          }
          do
            __asm
            {
              VMOV            S0, R7
              VCVT.F32.S32    S0, S0
              VLDR            S2, [R11]
              VLDR            S4, [R11,#8]
              VSUB.F32        S2, S22, S2
              VADD.F32        S0, S0, S20
              VMUL.F32        S2, S2, S16
              VSUB.F32        S0, S0, S4
              VMUL.F32        S0, S0, S18
              VADD.F32        S0, S0, S2
              VCMPE.F32       S0, #0.0
              VMRS            APSR_nzcv, FPSCR
            }
            if ( !(_NF ^ _VF) )
              v23 = BlockSource::getBlock(v21, _R9, v30, _R7);
              if ( *(_BYTE *)(v23 + 4) == BlockID::AIR )
              {
                v25 = 1;
                goto LABEL_25;
              }
              if ( !Entity::isFireImmune(*((Entity **)v10 + 1))
                && !(*(int (**)(void))(**((_DWORD **)v10 + 1) + 324))()
                && Block::isType((Block *)v23, (const Block *)Block::mMagmaBlock) )
              v24 = (int *)Block::getMaterial((Block *)v23);
              if ( !(*(int (**)(void))(**((_DWORD **)v10 + 1) + 208))() && Material::isType(v24, 5) )
              v25 = Material::isType(v24, 6);
              if ( v25 )
            ++_R7;
          while ( _R7 < v18 + a7 );
          ++_R9;
          v25 = 2;
          if ( _R9 < v29 )
            continue;
          break;
        }
LABEL_25:
      v19 = 0;
      if ( v25 == 2 )
        v19 = 1;
  else
    v19 = 0;
  return v19;
}


int __fastcall PathNavigation::setCanFloat(int result, bool a2)
{
  *(_BYTE *)(result + 42) = a2;
  return result;
}


int __fastcall PathNavigation::setAvoidDamageBlocks(int result, bool a2)
{
  *(_BYTE *)(result + 41) = a2;
  return result;
}


signed int __fastcall PathNavigation::travel(PathNavigation *this, float *a2, float *a3)
{
  return 1;
}


int __fastcall PathNavigation::_updatePath(PathNavigation *this)
{
  int v9; // r5@1
  int v10; // r6@3
  int v13; // r6@11
  int v18; // r10@17
  int v19; // r7@17
  __int64 v20; // r0@21
  char v22; // [sp+Ch] [bp-6Ch]@19
  float v23; // [sp+18h] [bp-60h]@13
  int v26; // [sp+24h] [bp-54h]@1
  int v27; // [sp+2Ch] [bp-4Ch]@1

  _R4 = this;
  _R8 = *(_DWORD *)(*((_DWORD *)this + 1) + 72);
  _R0 = PathNavigation::_getSurfaceY(this);
  __asm
  {
    VMOV            S0, R0
    VCVT.F32.S32    S16, S0
  }
  _R11 = *(_DWORD *)(*((_DWORD *)_R4 + 1) + 80);
  v26 = _R8;
  __asm { VSTR            S16, [SP,#0x78+var_50] }
  v27 = _R11;
  v9 = Path::getSize(*((Path **)_R4 + 2));
  if ( *((_DWORD *)_R4 + 2) )
    if ( !Entity::canFly(*((Entity **)_R4 + 1)) )
    {
      v10 = Path::getIndex(*((Path **)_R4 + 2));
      __asm { VCVTR.S32.F32   S18, S16 }
      if ( v10 < Path::getSize(*((Path **)_R4 + 2)) )
      {
        __asm { VMOV            R7, S18 }
        while ( *(_DWORD *)(Path::get(*((Path **)_R4 + 2), v10) + 4) == _R7 )
        {
          if ( ++v10 >= Path::getSize(*((Path **)_R4 + 2)) )
            goto LABEL_9;
        }
        v9 = v10;
      }
    }
LABEL_9:
  __asm { VMOV            S20, R8 }
  _KR00_8 = *(_QWORD *)((char *)_R4 + 4);
    VMOV            S18, R11
    VLDR            S22, =0.6
    VLDR            S0, [R1,#0x130]
    VCMPE.F32       S0, S22
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S22, S0 }
  v13 = Path::getIndex((Path *)HIDWORD(_KR00_8));
  if ( v13 < v9 )
    __asm { VMUL.F32        S22, S22, S22 }
    do
      Path::getPos(
        (Path *)&v23,
        (const Entity *)(*(_QWORD *)((char *)_R4 + 4) >> 32),
        *(_QWORD *)((char *)_R4 + 4),
        v13);
      __asm
        VLDR            S0, [SP,#0x78+var_60]
        VLDR            S2, [SP,#0x78+var_5C]
        VSUB.F32        S0, S0, S20
        VLDR            S4, [SP,#0x78+var_58]
        VSUB.F32        S2, S2, S16
        VSUB.F32        S4, S4, S18
        VMUL.F32        S0, S0, S0
        VMUL.F32        S2, S2, S2
        VMUL.F32        S4, S4, S4
        VADD.F32        S0, S2, S0
        VADD.F32        S0, S0, S4
        VCMPE.F32       S0, S22
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        Path::setIndex(*((Path **)_R4 + 2), ++v13);
      else
        ++v13;
    while ( v13 != v9 );
  _R6 = *(_QWORD *)((char *)_R4 + 4);
  _R0 = ceilf(*(float *)(_R6 + 304));
    VLDR            S0, [R6,#0x134]
    VMOV            S2, R0
    VCVTR.S32.F32   S0, S0
    VCVTR.S32.F32   S2, S2
    VMOV            R0, S0
    VMOV            R6, S2
  v18 = _R0 + 1;
  v19 = Path::getIndex((Path *)HIDWORD(_R6));
  while ( v19 != v9 )
    Path::getPos((Path *)&v22, (const Entity *)(*(_QWORD *)((char *)_R4 + 4) >> 32), *(_QWORD *)((char *)_R4 + 4), --v9);
    if ( PathNavigation::_canMoveDirectly(_R4, (const Vec3 *)&v26, (const Vec3 *)&v22, _R6, v18, _R6) == 1 )
      Path::setIndex(*((Path **)_R4 + 2), v9);
      break;
  v20 = *(_QWORD *)((char *)_R4 + 12);
  if ( (signed int)v20 - HIDWORD(v20) >= 101 )
    __asm
      VLDR            S0, [R4,#0x14]
      VLDR            S2, [R4,#0x18]
      VSUB.F32        S0, S0, S20
      VLDR            S4, [R4,#0x1C]
      VSUB.F32        S2, S2, S16
      VSUB.F32        S4, S4, S18
      VMUL.F32        S0, S0, S0
      VMUL.F32        S2, S2, S2
      VMUL.F32        S4, S4, S4
      VADD.F32        S0, S2, S0
      VMOV.F32        S2, #2.25
      VADD.F32        S0, S0, S4
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      (*(void (__fastcall **)(PathNavigation *))(*(_DWORD *)_R4 + 40))(_R4);
      LODWORD(v20) = *((_DWORD *)_R4 + 3);
    *((_DWORD *)_R4 + 4) = v20;
    LODWORD(v20) = _R8;
    *((_DWORD *)_R4 + 5) = _R8;
    __asm { VSTR            S16, [R4,#0x18] }
    *((_DWORD *)_R4 + 7) = _R11;
  return v20;
}


int __fastcall PathNavigation::tick(PathNavigation *this)
{
  PathNavigation *v1; // r4@1
  int result; // r0@1
  const BlockPos *v3; // r5@6
  int v4; // r0@6
  Block *v9; // r5@10
  int (__fastcall *v10)(Block *, char *, int, char *); // r7@12
  int v11; // r0@12
  int v12; // ST00_4@12
  int v13; // r0@14
  int v14; // r2@14
  char v15; // [sp+8h] [bp-50h]@12
  float v16; // [sp+18h] [bp-40h]@13
  unsigned __int8 v17; // [sp+24h] [bp-34h]@9
  unsigned __int8 v18; // [sp+28h] [bp-30h]@6
  char v19; // [sp+2Ch] [bp-2Ch]@6
  int v20; // [sp+30h] [bp-28h]@9
  char v21; // [sp+38h] [bp-20h]@6
  float v22; // [sp+3Ch] [bp-1Ch]@9

  v1 = this;
  ++*((_DWORD *)this + 3);
  result = (*(int (__fastcall **)(PathNavigation *))(*(_DWORD *)this + 36))(this);
  if ( !result )
  {
    result = Mob::getMoveControl(*((Mob **)v1 + 1));
    if ( result )
    {
      if ( (*(int (__fastcall **)(PathNavigation *))(*(_DWORD *)v1 + 56))(v1) == 1 )
        PathNavigation::_updatePath(v1);
      result = (*(int (__fastcall **)(PathNavigation *))(*(_DWORD *)v1 + 36))(v1);
      if ( !result )
      {
        Path::currentPos((Path *)&v21, (const Entity *)(*(_QWORD *)((char *)v1 + 4) >> 32), *(_QWORD *)((char *)v1 + 4));
        BlockPos::BlockPos((int)&v19, (int)&v21);
        v3 = (const BlockPos *)Entity::getRegion(*((Entity **)v1 + 1));
        BlockSource::getBlockID((BlockSource *)&v18, v3, (int)&v19);
        v4 = v18;
        if ( v18 == BlockID::AIR )
        {
          if ( Entity::canFly(*((Entity **)v1 + 1)) == 1 )
          {
            v4 = v18;
          }
          else
            __asm
            {
              VMOV.F32        S0, #-0.5
              VLDR            S2, [SP,#0x58+var_1C]
            }
            --v20;
              VADD.F32        S0, S2, S0
              VSTR            S0, [SP,#0x58+var_1C]
            BlockSource::getBlockID((BlockSource *)&v17, v3, (int)&v19);
            v4 = v17;
            v18 = v17;
        }
        v9 = (Block *)Block::mBlocks[v4];
        if ( !Block::hasProperty(Block::mBlocks[v4], (int)Block::mBlocks, 1024LL)
          && !Block::isType(v9, (const Block *)Block::mChest) )
          AABB::AABB((AABB *)&v15);
          v10 = *(int (__fastcall **)(Block *, char *, int, char *))(*(_DWORD *)v9 + 12);
          v11 = Entity::getRegion(*((Entity **)v1 + 1));
          v12 = *((_DWORD *)v1 + 1);
          if ( v10(v9, &v15, v11, &v19) == 1 )
            v22 = v16;
        v13 = Mob::getMoveControl(*((Mob **)v1 + 1));
        v14 = *((_DWORD *)v1 + 8);
        result = (*(int (__cdecl **)(int))(*(_DWORD *)v13 + 8))(v13);
      }
    }
  }
  return result;
}


int __fastcall PathNavigation::getMaxDistance(PathNavigation *this)
{
  AttributeInstance *v1; // r0@1

  v1 = (AttributeInstance *)(*(int (**)(void))(**((_DWORD **)this + 1) + 1004))();
  return j_j_j__ZNK17AttributeInstance15getCurrentValueEv_0(v1);
}


signed int __fastcall PathNavigation::_canWalkAbove(PathNavigation *this, int a2, int a3, int a4, float a5, float a6, int a7, const Vec3 *a8, float a9, float a10)
{
  int v12; // r6@1
  const BlockPos *v13; // r11@1
  float v14; // r1@2
  int v15; // r9@2
  char *v21; // r2@2
  int v22; // r8@5
  int v23; // r7@6
  int v24; // r1@9
  int v26; // [sp+4h] [bp-7Ch]@2
  int v27; // [sp+Ch] [bp-74h]@1
  int v28; // [sp+10h] [bp-70h]@2
  PathNavigation *v29; // [sp+18h] [bp-68h]@1
  unsigned __int8 v30; // [sp+1Ch] [bp-64h]@8
  char v31; // [sp+20h] [bp-60h]@2
  int v32; // [sp+24h] [bp-5Ch]@8
  int v33; // [sp+28h] [bp-58h]@8
  int v34; // [sp+2Ch] [bp-54h]@1
  int v35; // [sp+30h] [bp-50h]@1
  int v36; // [sp+34h] [bp-4Ch]@1

  _R10 = a4;
  _R4 = a2;
  v12 = a3;
  v27 = a4;
  v29 = this;
  v34 = a2;
  v35 = a3;
  v36 = a4;
  v13 = (const BlockPos *)Entity::getRegion(*((Entity **)this + 1));
  if ( SLODWORD(a5) >= 1 )
  {
    v14 = a6;
    v15 = a7 + _R10;
    __asm { VMOV.F32        S20, #0.5 }
    _R5 = a8;
    v26 = LODWORD(a5) + _R4;
    v21 = &v31;
    __asm
    {
      VLDR            S16, [SP,#0x80+arg_14]
      VLDR            S18, [SP,#0x80+arg_10]
    }
    v28 = a7 + _R10;
    do
      if ( SLODWORD(v14) >= 1 )
      {
        __asm
        {
          VMOV            S0, R4
          VCVT.F32.S32    S0, S0
        }
        if ( a7 > 0 )
          __asm { VADD.F32        S22, S0, S20 }
          v22 = v12;
          while ( 2 )
          {
            v23 = (int)v21;
            do
            {
              __asm
              {
                VMOV            S0, R10
                VCVT.F32.S32    S0, S0
                VLDR            S2, [R5]
                VLDR            S4, [R5,#8]
                VSUB.F32        S2, S22, S2
                VADD.F32        S0, S0, S20
                VMUL.F32        S2, S2, S18
                VSUB.F32        S0, S0, S4
                VMUL.F32        S0, S0, S16
                VADD.F32        S0, S0, S2
                VCMPE.F32       S0, #0.0
                VMRS            APSR_nzcv, FPSCR
              }
              if ( !(_NF ^ _VF) )
                *(_DWORD *)&v31 = _R4;
                v32 = v22;
                v33 = _R10;
                BlockSource::getBlockID((BlockSource *)&v30, v13, v23);
                if ( v30 > (unsigned int)BlockID::AIR )
                {
                  v24 = *((_DWORD *)v29 + 1);
                  v15 = v28;
                  if ( (*(int (**)(void))(*(_DWORD *)Block::mBlocks[v30] + 144))() != 1 )
                    return 0;
                }
              ++_R10;
            }
            while ( _R10 < v15 );
            _R10 = v27;
            ++v22;
            v21 = (char *)v23;
            if ( v22 < LODWORD(a6) + v12 )
              continue;
            break;
          }
      }
      v14 = a6;
      ++_R4;
    while ( _R4 < v26 );
  }
  return 1;
}


int __fastcall PathNavigation::PathNavigation(int result, int a2)
{
  int v2; // r3@1

  *(_DWORD *)result = &off_26EDD28;
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  v2 = dword_2822498;
  *(_QWORD *)(result + 20) = *(_QWORD *)&Vec3::ZERO;
  *(_DWORD *)(result + 28) = v2;
  *(_DWORD *)(result + 32) = 0;
  *(_WORD *)(result + 36) = 0;
  *(_BYTE *)(result + 38) = 1;
  *(_BYTE *)(result + 43) = 0;
  *(_DWORD *)(result + 39) = 0;
  return result;
}


PathNavigation *__fastcall PathNavigation::~PathNavigation(PathNavigation *this)
{
  PathNavigation *v1; // r4@1
  Path *v2; // r0@1
  Path *v3; // r0@2

  v1 = this;
  *(_DWORD *)this = &off_26EDD28;
  v2 = (Path *)*((_DWORD *)this + 2);
  if ( v2 )
  {
    v3 = Path::~Path(v2);
    operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 2) = 0;
  return v1;
}


int __fastcall PathNavigation::initializeFromDefinition(int result, NavigationDescription *a2)
{
  unsigned int v2; // r2@1
  unsigned int v3; // r1@1

  v2 = *((_DWORD *)a2 + 2);
  *(_BYTE *)(result + 37) = v2;
  *(_BYTE *)(result + 38) = BYTE1(v2);
  *(_BYTE *)(result + 39) = v2 >> 16;
  *(_BYTE *)(result + 40) = BYTE3(v2);
  v3 = *((_DWORD *)a2 + 3);
  *(_BYTE *)(result + 41) = v3;
  *(_BYTE *)(result + 42) = BYTE1(v3);
  *(_BYTE *)(result + 43) = v3 >> 16;
  return result;
}


int __fastcall PathNavigation::setCanPassDoors(int result, bool a2)
{
  *(_BYTE *)(result + 38) = a2;
  return result;
}


void __fastcall PathNavigation::stop(PathNavigation *this)
{
  PathNavigation::stop(this);
}


signed int __fastcall PathNavigation::_canMoveDirectly(PathNavigation *this, const Vec3 *a2, const Vec3 *a3, int a4, int a5, int a6)
{
  PathNavigation *v7; // r9@1
  int v8; // r8@1
  float v11; // r1@1
  int v12; // r0@1
  float v19; // r1@2
  signed int v20; // r10@3
  signed int v21; // r11@3
  float v22; // r9@3
  int v23; // r1@11
  mce::Math *v24; // r0@11
  int v25; // r6@11
  int v26; // r0@11
  int v27; // r8@11
  signed int result; // r0@18
  float v30; // [sp+10h] [bp-70h]@0
  float v31; // [sp+10h] [bp-70h]@2
  float v32; // [sp+14h] [bp-6Ch]@0
  float v33; // [sp+14h] [bp-6Ch]@2
  int v34; // [sp+1Ch] [bp-64h]@11
  int v35; // [sp+20h] [bp-60h]@11
  int v36; // [sp+24h] [bp-5Ch]@3

  _R5 = a2;
  v7 = this;
  v8 = a4;
  _R6 = a3;
  _R7 = mce::Math::floor(*(mce::Math **)a2, *(float *)&a2);
  v12 = mce::Math::floor(*((mce::Math **)_R5 + 2), v11);
  __asm { VLDR            S0, [R5] }
  _R4 = v12;
  __asm
  {
    VLDR            S4, [R6]
    VLDR            S2, [R5,#8]
    VLDR            S6, [R6,#8]
    VSUB.F32        S0, S4, S0
    VSUB.F32        S2, S6, S2
    VMUL.F32        S4, S0, S0
    VMUL.F32        S6, S2, S2
    VADD.F32        S4, S6, S4
    VLDR            S6, =0.000001
    VCMPE.F32       S4, S6
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    goto LABEL_18;
    VCVT.F64.F32    D2, S4
    VSQRT.F64       D2, D2
    VMOV.F64        D3, #1.0
    VDIV.F64        D2, D3, D2
    VCVT.F32.F64    S4, D2
    VLDR            S6, [R5,#4]
    VMUL.F32        S18, S4, S0
    VMUL.F32        S16, S4, S2
    VCVTR.S32.F32   S0, S6
    VSTR            S18, [SP,#0x80+var_70]
    VSTR            S16, [SP,#0x80+var_6C]
    VMOV            R2, S0
  if ( PathNavigation::_canWalkOn((int)v7, _R7, _R2, v12, COERCE_FLOAT(v8 + 2), *(float *)&a5, a6 + 2, _R5, v30, v32) != 1 )
LABEL_18:
    result = 0;
  else
    __asm { VCMPE.F32       S16, #0.0 }
    v36 = (int)v7;
    __asm
    {
      VMRS            APSR_nzcv, FPSCR
      VMOV            S0, R4
      VMOV            S2, R7
    }
    v20 = 1;
    __asm { VCVT.F32.S32    S0, S0 }
    v21 = 1;
      VCVT.F32.S32    S2, S2
      VLDR            S6, [R5,#8]
      VMOV.F32        S8, #1.0
      VLDR            S4, [R5]
      VCMPE.F32       S18, #0.0
    v22 = *(float *)&v8;
      VABS.F32        S10, S16
      VABS.F32        S12, S18
      VSUB.F32        S0, S0, S6
      VSUB.F32        S2, S2, S4
      VDIV.F32        S20, S8, S10
      VADD.F32        S4, S0, S8
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S4, S0 }
      VADD.F32        S6, S2, S8
      VCMPE.F32       S16, #0.0
      VDIV.F32        S22, S8, S12
      __asm { VMOVLT.F32      S6, S2 }
      VDIV.F32        S24, S4, S16
      v20 = -1;
      VDIV.F32        S26, S6, S18
      v21 = -1;
    v23 = mce::Math::floor(*(mce::Math **)_R6, v19);
    v24 = (mce::Math *)*((_DWORD *)_R6 + 2);
    v35 = v23;
    v25 = v23 - _R7;
    v26 = mce::Math::floor(v24, *(float *)&v23);
    v27 = v26 - _R4;
    v34 = v26;
    while ( v25 * v21 > 0 || v27 * v20 >= 1 )
      __asm
      {
        VCMPE.F32       S26, S24
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        _R7 += v21;
        __asm { VADD.F32        S26, S26, S22 }
        v25 = v35 - _R7;
      else
        __asm { VADD.F32        S24, S24, S20 }
        _R4 += v20;
        v27 = v34 - _R4;
        VLDR            S0, [R5,#4]
        VCVTR.S32.F32   S0, S0
        VSTR            S18, [SP,#0x80+var_70]
        VSTR            S16, [SP,#0x80+var_6C]
        VMOV            R2, S0
      if ( !PathNavigation::_canWalkOn(v36, _R7, _R2, _R4, v22, *(float *)&a5, a6, _R5, v31, v33) )
        goto LABEL_18;
    result = 1;
  return result;
}


int __fastcall PathNavigation::_getTempMobPos(PathNavigation *this, int a2)
{
  int v2; // r4@1
  PathNavigation *v3; // r5@1
  int v4; // r6@1
  int result; // r0@1

  v2 = a2;
  v3 = this;
  v4 = *(_DWORD *)(*(_DWORD *)(a2 + 4) + 72);
  _R0 = PathNavigation::_getSurfaceY((PathNavigation *)a2);
  __asm
  {
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
  }
  result = *(_DWORD *)(*(_DWORD *)(v2 + 4) + 80);
  *(_DWORD *)v3 = v4;
  __asm { VSTR            S0, [R5,#4] }
  *((_DWORD *)v3 + 2) = result;
  return result;
}


int __fastcall PathNavigation::setAvoidSun(int result, bool a2)
{
  *(_BYTE *)(result + 37) = a2;
  return result;
}


void __fastcall PathNavigation::~PathNavigation(PathNavigation *this)
{
  PathNavigation *v1; // r4@1
  Path *v2; // r0@1
  Path *v3; // r0@2

  v1 = this;
  *(_DWORD *)this = &off_26EDD28;
  v2 = (Path *)*((_DWORD *)this + 2);
  if ( v2 )
  {
    v3 = Path::~Path(v2);
    operator delete((void *)v3);
  }
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall PathNavigation::~PathNavigation(PathNavigation *this)
{
  PathNavigation::~PathNavigation(this);
}


int __fastcall PathNavigation::setCanOpenDoors(int result, bool a2)
{
  *(_BYTE *)(result + 39) = a2;
  return result;
}


signed int __fastcall PathNavigation::_canUpdatePath(PathNavigation *this)
{
  PathNavigation *v1; // r4@1
  int v2; // r0@1
  signed int result; // r0@7
  int v4; // r1@8

  v1 = this;
  v2 = *((_DWORD *)this + 1);
  if ( *(_BYTE *)(v2 + 216)
    || Entity::isRiding((Entity *)v2) == 1 && *(_BYTE *)(Entity::getRide(*((Entity **)v1 + 1)) + 216)
    || *((_BYTE *)v1 + 42)
    && ((*(int (**)(void))(**((_DWORD **)v1 + 1) + 208))() || (*(int (**)(void))(**((_DWORD **)v1 + 1) + 216))()) )
  {
    result = 1;
  }
  else
    v4 = (*(int (**)(void))(**((_DWORD **)v1 + 1) + 488))();
    result = 0;
    if ( v4 == 68404 )
      result = 1;
  return result;
}


void __fastcall PathNavigation::stop(PathNavigation *this)
{
  PathNavigation *v1; // r1@1
  Path *v2; // r0@1
  Path *v3; // r0@2

  v1 = this;
  v2 = (Path *)*((_DWORD *)this + 2);
  *((_DWORD *)v1 + 2) = 0;
  if ( v2 )
  {
    v3 = Path::~Path(v2);
    j_j_j__ZdlPv_6((void *)v3);
  }
}


PathFinder *__fastcall PathNavigation::createPath(PathNavigation *this, const Vec3 *a2, int a3)
{
  const Vec3 *v3; // r5@1
  Level *v4; // r4@1
  Entity *v6; // r8@2
  Entity *v7; // r9@2
  float v8; // r1@2
  int v9; // r7@2
  float v14; // r1@2
  int v15; // r6@2
  int v16; // r0@2
  unsigned int v17; // r2@2
  unsigned int v18; // r1@2
  bool v19; // r5@2
  int v20; // r3@2
  signed int v21; // r3@4
  unsigned int v22; // r0@8
  char v23; // r0@10
  bool v24; // r0@12
  PathFinder *result; // r0@14
  int v26; // [sp+0h] [bp-50h]@0
  float v27; // [sp+8h] [bp-48h]@8
  bool v28; // [sp+14h] [bp-3Ch]@12
  int v29; // [sp+1Ch] [bp-34h]@4
  bool v30; // [sp+20h] [bp-30h]@10

  v3 = a2;
  v4 = this;
  _R6 = a3;
  if ( (*(int (__fastcall **)(const Vec3 *))(*(_DWORD *)a2 + 56))(a2) == 1 )
  {
    v6 = (Entity *)Entity::getLevel(*((Entity **)v3 + 1));
    v7 = (Entity *)*((_DWORD *)v3 + 1);
    v9 = mce::Math::floor(*(mce::Math **)_R6, v8);
    __asm { VLDR            S16, [R6,#4] }
    v15 = mce::Math::floor(*(mce::Math **)(_R6 + 8), v14);
    v16 = (*(int (__fastcall **)(const Vec3 *))(*(_DWORD *)v3 + 32))(v3);
    v17 = *((_DWORD *)v3 + 10);
    v18 = *((_WORD *)v3 + 19);
    v19 = 0;
    v20 = v17 & 0xFF0000;
    if ( v17 & 0xFF0000 )
      v20 = 1;
    v29 = v20;
    v21 = v17 & 0xFF00;
    if ( v17 & 0xFF00 )
      v21 = 1;
    if ( v18 > 0xFF )
      v19 = 1;
    __asm { VCVTR.S32.F32   S0, S16 }
    v27 = *(float *)&v16;
    v22 = v17 >> 24;
    if ( v17 >> 24 )
      LOBYTE(v22) = 1;
    v30 = v22;
    v23 = v17;
    if ( (_BYTE)v17 )
      v23 = 1;
    v28 = v23;
    v24 = v18;
    if ( (_BYTE)v18 )
      v24 = 1;
    __asm { VSTR            S0, [SP,#0x50+var_50] }
    result = Level::findPath(v4, v6, v7, v9, v26, *(float *)&v15, v27, v24, v19, v28, v21, v29, v30);
  }
  else
    result = 0;
    *(_DWORD *)v4 = 0;
  return result;
}


int __fastcall PathNavigation::_getSurfaceY(PathNavigation *this)
{
  PathNavigation *v1; // r8@1
  float v2; // r1@1
  int v8; // r9@3
  float v9; // r1@3
  int v10; // r6@3
  BlockSource *v11; // r0@3
  BlockSource *v13; // r7@3
  int *v14; // r0@3
  int v15; // r5@3
  int result; // r0@8

  v1 = this;
  if ( (*(int (**)(void))(**((_DWORD **)this + 1) + 208))() == 1 && *((_BYTE *)v1 + 42) )
  {
    _R0 = *((_DWORD *)v1 + 1);
    __asm { VLDR            S16, [R0,#0x10C] }
    v8 = mce::Math::floor(*(mce::Math **)(_R0 + 72), v2);
    v10 = mce::Math::floor(*(mce::Math **)(*((_DWORD *)v1 + 1) + 80), v9);
    __asm { VCVTR.S32.F32   S16, S16 }
    v11 = (BlockSource *)Entity::getRegion(*((Entity **)v1 + 1));
    __asm { VMOV            R4, S16 }
    v13 = v11;
    v14 = (int *)BlockSource::getMaterial(v11, v8, _R4, v10);
    v15 = 0;
    while ( Material::isType(v14, 5) == 1 )
    {
      v14 = (int *)BlockSource::getMaterial(v13, v8, _R4 + v15 + 1, v10);
      _VF = __OFSUB__(v15, 16);
      _NF = v15++ - 16 < 0;
      if ( !(_NF ^ _VF) )
      {
        _R0 = *((_DWORD *)v1 + 1);
        __asm { VLDR            S0, [R0,#0x10C] }
        goto LABEL_8;
      }
    }
    result = _R4 + v15;
  }
  else
    __asm
      VLDR            S0, =0.1
      VLDR            S2, [R0,#0x10C]
      VADD.F32        S0, S2, S0
LABEL_8:
      VCVTR.S32.F32   S0, S0
      VMOV            R0, S0
  return result;
}


int __fastcall PathNavigation::setAvoidWater(int result, bool a2)
{
  *(_BYTE *)(result + 40) = a2;
  return result;
}
