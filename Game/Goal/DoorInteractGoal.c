

int __fastcall DoorInteractGoal::canUse(DoorInteractGoal *this)
{
  DoorInteractGoal *v1; // r4@1
  int v2; // r0@1
  PathNavigation *v3; // r0@3
  PathNavigation *v4; // r6@3
  Path *v5; // r0@3
  Path *v6; // r5@3
  float v7; // r1@5
  int v8; // r0@6
  __int64 v13; // r6@6
  float v16; // r1@6
  float v17; // r1@6
  int v18; // r0@6
  DoorBlock *v19; // r0@6
  int v20; // r6@7
  int v21; // r0@7
  int v22; // r6@10
  int v23; // r0@11
  __int64 v24; // r1@11
  int v25; // r0@11
  DoorBlock *v26; // r0@11
  int v27; // r7@12
  int v28; // r0@12
  int result; // r0@15

  v1 = this;
  v2 = *((_DWORD *)this + 10);
  if ( *(_BYTE *)(v2 + 218)
    && j_Mob::getNavigation((Mob *)v2)
    && (v3 = (PathNavigation *)j_Mob::getNavigation(*((Mob **)v1 + 10)),
        v4 = v3,
        v5 = (Path *)j_PathNavigation::getPath(v3),
        (v6 = v5) != 0)
    && !j_Path::isDone(v5)
    && j_PathNavigation::canOpenDoors(v4) == 1 )
  {
    v8 = j_mce::Math::floor(*(mce::Math **)(*((_DWORD *)v1 + 10) + 72), v7);
    __asm { VMOV.F32        S0, #1.0 }
    LODWORD(v13) = v8;
    _R0 = *((_DWORD *)v1 + 10);
    __asm
    {
      VLDR            S2, [R0,#0x4C]
      VADD.F32        S0, S2, S0
      VMOV            R0, S0
    }
    HIDWORD(v13) = j_mce::Math::floor(_R0, v16);
    v18 = j_mce::Math::floor(*(mce::Math **)(*((_DWORD *)v1 + 10) + 80), v17);
    *((_QWORD *)v1 + 1) = v13;
    *((_DWORD *)v1 + 4) = v18;
    v19 = j_DoorInteractGoal::_findBlockingDoorAtPos(
            (int)v1 + 8,
            *((Entity **)v1 + 10),
            (int)v6,
            (int)v1 + 36,
            (int)v1 + 37);
    *((_DWORD *)v1 + 5) = v19;
    if ( !v19 )
      v20 = j_Path::getIndex(v6) + 2;
      v21 = j_Path::getSize(v6);
      if ( v21 < v20 )
        v20 = v21;
      if ( v20 > 0 )
      {
        v22 = 0;
        do
        {
          v23 = j_Path::get(v6, v22);
          v24 = *(_QWORD *)v23;
          HIDWORD(v24) = (*(_QWORD *)v23 >> 32) + 1;
          v25 = *(_DWORD *)(v23 + 8);
          *((_QWORD *)v1 + 1) = v24;
          *((_DWORD *)v1 + 4) = v25;
          v26 = j_DoorInteractGoal::_findBlockingDoorAtPos(
                  (int)v1 + 8,
                  *((Entity **)v1 + 10),
                  (int)v6,
                  (int)v1 + 36,
                  (int)v1 + 37);
          *((_DWORD *)v1 + 5) = v26;
          if ( v26 )
            break;
          ++v22;
          v27 = j_Path::getIndex(v6) + 2;
          v28 = j_Path::getSize(v6);
          if ( v28 < v27 )
            v27 = v28;
        }
        while ( v22 < v27 );
      }
    result = *((_DWORD *)v1 + 5) != 0;
  }
  else
    result = 0;
  return result;
}


void __fastcall DoorInteractGoal::~DoorInteractGoal(DoorInteractGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


signed int __fastcall DoorInteractGoal::canContinueToUse(DoorInteractGoal *this)
{
  DoorInteractGoal *v1; // r1@1
  signed int result; // r0@1

  v1 = this;
  result = 0;
  if ( *((_DWORD *)v1 + 5) )
  {
    if ( !*((_BYTE *)v1 + 26) )
      result = 1;
  }
  return result;
}


void __fastcall DoorInteractGoal::~DoorInteractGoal(DoorInteractGoal *this)
{
  DoorInteractGoal::~DoorInteractGoal(this);
}


signed int __fastcall DoorInteractGoal::_mobHasExited(DoorInteractGoal *this)
{
  signed int result; // r0@5

  _R5 = this;
  _R4 = (*(int (**)(void))(**((_DWORD **)this + 10) + 52))();
  _R0 = j_DoorBlock::getDoorThickness(*((DoorBlock **)_R5 + 5));
  __asm
  {
    VMOV.F32        S6, #0.5
    VLDR            S4, [R5,#8]
    VMOV            S0, R0
    VLDR            S2, [R5,#0x10]
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VMUL.F32        S8, S0, S6
    VLDR            S0, =0.01
    VCMPE.F32       S8, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S8 }
  switch ( *((_BYTE *)_R5 + 37) )
    case 0:
      __asm
      {
        VADD.F32        S0, S2, S0; jumptable 01B14876 case 0
        VLDR            S2, [R4,#8]
      }
      goto LABEL_12;
    case 1:
        VMOV.F32        S2, #1.0; jumptable 01B14876 case 1
        VADD.F32        S2, S4, S2
        VSUB.F32        S0, S2, S0
        VLDR            S2, [R4]
      goto LABEL_8;
    case 2:
        VMOV.F32        S4, #1.0; jumptable 01B14876 case 2
        VADD.F32        S2, S2, S4
LABEL_8:
      __asm { VCMPE.F32       S2, S0 }
      result = 0;
      __asm { VMRS            APSR_nzcv, FPSCR }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        result = 1;
      return result;
    case 3:
        VADD.F32        S0, S0, S4; jumptable 01B14876 case 3
LABEL_12:
      break;
    default:
      __asm { VADD.F32        S0, S4, S6; jumptable 01B14876 default case }
      _R0 = *((_DWORD *)_R5 + 10);
        VADD.F32        S2, S2, S6
        VLDR            S4, [R5,#0x1C]
        VLDR            S6, [R5,#0x20]
        VLDR            S8, [R0,#0x48]
        VLDR            S10, [R0,#0x50]
        VSUB.F32        S0, S0, S8
        VSUB.F32        S2, S2, S10
        VMUL.F32        S0, S4, S0
        VMUL.F32        S2, S6, S2
        VADD.F32        S0, S2, S0
        VCMPE.F32       S0, #0.0
  __asm { VMRS            APSR_nzcv, FPSCR }
  if ( _NF ^ _VF )
    result = 1;
  return result;
}


_QWORD *__fastcall DoorInteractGoal::DoorInteractGoal(Goal *a1, int a2)
{
  int v2; // r4@1
  _QWORD *result; // r0@1

  v2 = a2;
  result = j_Goal::Goal(a1);
  *(_DWORD *)result = &off_2725378;
  *((_DWORD *)result + 2) = 0;
  *((_DWORD *)result + 3) = 0;
  *((_DWORD *)result + 4) = 0;
  *((_BYTE *)result + 24) = 0;
  *((_BYTE *)result + 25) = 0;
  *((_DWORD *)result + 10) = v2;
  *((_DWORD *)result + 2) = BlockPos::ZERO;
  *((_DWORD *)result + 3) = unk_2816278;
  *((_DWORD *)result + 4) = dword_281627C;
  *((_DWORD *)result + 5) = 0;
  *((_BYTE *)result + 26) = 0;
  *((_DWORD *)result + 7) = 0;
  *((_DWORD *)result + 8) = 0;
  *((_WORD *)result + 18) = -1;
  return result;
}


DoorBlock *__fastcall DoorInteractGoal::_findBlockingDoorAtPos(int a1, Entity *this, int a3, int a4, int a5)
{
  _BYTE *v6; // r9@1
  Entity *v7; // r11@1
  Path *v11; // r7@1
  BlockSource *v13; // r0@3
  DoorBlock *v14; // r8@3
  const Block *v15; // r1@3
  int v16; // r6@4
  int v17; // r0@4
  int v18; // r4@7
  int v19; // r0@8
  int v20; // r0@10
  int v21; // r1@15
  DoorBlock *result; // r0@15
  int v23; // r2@15
  BlockSource *v25; // r0@18
  signed int v26; // r0@18
  signed int v27; // r1@18
  _DWORD *v28; // r0@24
  float v30; // r2@24
  _DWORD *v33; // r0@27
  float v35; // r2@27
  float v38; // [sp+0h] [bp-30h]@1
  int v39; // [sp+4h] [bp-2Ch]@1

  _R5 = (const BlockPos *)a1;
  v6 = (_BYTE *)a4;
  *(_BYTE *)a4 = -1;
  v7 = this;
  *(_BYTE *)a5 = -1;
  __asm { VLDR            S0, [R5] }
  v11 = (Path *)a3;
  __asm
  {
    VLDR            S2, [R5,#8]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VSTR            S0, [SP,#0x30+var_30]
  }
  v39 = *((_DWORD *)this + 19);
  __asm { VSTR            S2, [SP,#0x30+var_28] }
  _R0 = j_Entity::distanceToSqr(this, (const Vec3 *)&v38);
    VMOV.F32        S0, #2.25
    VMOV            S2, R0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF
    && (v13 = (BlockSource *)j_Entity::getRegion(v7),
        v14 = (DoorBlock *)j_BlockSource::getBlock(v13, _R5),
        j_Village::isVillageDoor(v14, v15) == 1) )
    v16 = j_Path::getIndex(v11) + 2;
    v17 = j_Path::getSize(v11);
    if ( v17 < v16 )
      v16 = v17;
    if ( v16 >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        v19 = j_Path::get(v11, v18);
        if ( *(_DWORD *)_R5 == *(_DWORD *)v19 && *((_DWORD *)_R5 + 2) == *(_DWORD *)(v19 + 8) )
        {
          v20 = *((_DWORD *)_R5 + 1) - *(_DWORD *)(v19 + 4);
          if ( v20 < 0 )
            v20 = -v20;
          if ( v18 >= 1 && v20 <= 1 )
            break;
        }
        if ( ++v18 >= v16 )
          goto LABEL_15;
      }
      v28 = (_DWORD *)j_Path::get(v11, v18 - 1);
      HIDWORD(_R0) = *v28;
      LODWORD(_R0) = *(_DWORD *)(_R0 + 8);
      v30 = *((float *)_R5 + 2);
      if ( _R0 != __PAIR__(*(_DWORD *)_R5, LODWORD(v30)) )
        HIDWORD(_R0) -= *(_DWORD *)_R5;
        LODWORD(_R0) = _R0 - LODWORD(v30);
        __asm
          VMOV            S0, R1
          VMOV            S2, R0
          VCVT.F32.S32    S0, S0
          VCVT.F32.S32    S2, S2
          VMOV            R0, S0
          VMOV            R1, S2
        *v6 = j_Direction::getDirection(_R0, _R1, v30);
      if ( v18 + 1 < v16 )
        v33 = (_DWORD *)j_Path::get(v11, v18 + 1);
        HIDWORD(_R0) = *v33;
        LODWORD(_R0) = *(_DWORD *)(_R0 + 8);
        v35 = *((float *)_R5 + 2);
        if ( _R0 != __PAIR__(*(_DWORD *)_R5, LODWORD(v35)) )
          HIDWORD(_R0) -= *(_DWORD *)_R5;
          LODWORD(_R0) = _R0 - LODWORD(v35);
          __asm
          {
            VMOV            S0, R1
            VMOV            S2, R0
            VCVT.F32.S32    S0, S0
            VCVT.F32.S32    S2, S2
            VMOV            R0, S0
            VMOV            R1, S2
          }
          *(_BYTE *)a5 = j_Direction::getDirection(_R0, _R1, v35);
    }
LABEL_15:
    v21 = *v6;
    result = 0;
    v23 = *(_BYTE *)a5;
    _ZF = v21 == v23;
    if ( v21 != v23 )
      _ZF = (v21 & v23) == 255;
    if ( !_ZF )
      v25 = (BlockSource *)j_Entity::getRegion(v7);
      v26 = j_DoorBlock::getBlockedDirection(v14, v25, _R5);
      v27 = v26;
      _ZF = v26 == *(_BYTE *)a5;
      result = v14;
      if ( !_ZF )
        result = 0;
      if ( v27 == *v6 )
        result = v14;
  else
  return result;
}


signed int __fastcall DoorInteractGoal::_mobTooBigForDoorway(DoorInteractGoal *this)
{
  DoorInteractGoal *v1; // r4@1
  signed int result; // r0@1

  v1 = this;
  _R0 = j_DoorBlock::getDoorThickness(*((DoorBlock **)this + 5));
  __asm
  {
    VMOV.F32        S0, #1.0
    VLDR            S6, =0.0
    VMOV            S2, R0
  }
  _R0 = *((_DWORD *)v1 + 10);
  __asm { VLDR            S4, [R0,#0x130] }
  result = 0;
    VSUB.F32        S0, S0, S2
    VLDR            S2, =0.005
    VADD.F32        S2, S4, S2
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S6, S0 }
    VCMPE.F32       S2, S6
    result = 1;
  return result;
}


signed int __fastcall DoorInteractGoal::tick(DoorInteractGoal *this)
{
  signed int result; // r0@5

  _R4 = this;
  _R5 = (*(int (**)(void))(**((_DWORD **)this + 10) + 52))();
  _R0 = j_DoorBlock::getDoorThickness(*((DoorBlock **)_R4 + 5));
  __asm
  {
    VMOV.F32        S6, #0.5
    VLDR            S4, [R4,#8]
    VMOV            S0, R0
    VLDR            S2, [R4,#0x10]
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VMUL.F32        S8, S0, S6
    VLDR            S0, =0.01
    VCMPE.F32       S8, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S8 }
  switch ( *((_BYTE *)_R4 + 37) )
    case 0:
      __asm
      {
        VADD.F32        S0, S2, S0; jumptable 01B14792 case 0
        VLDR            S2, [R5,#8]
      }
      goto LABEL_12;
    case 1:
        VMOV.F32        S2, #1.0; jumptable 01B14792 case 1
        VADD.F32        S2, S4, S2
        VSUB.F32        S0, S2, S0
        VLDR            S2, [R5]
      goto LABEL_8;
    case 2:
        VMOV.F32        S4, #1.0; jumptable 01B14792 case 2
        VADD.F32        S2, S2, S4
LABEL_8:
      __asm { VCMPE.F32       S2, S0 }
      result = 0;
      __asm { VMRS            APSR_nzcv, FPSCR }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        result = 1;
      *((_BYTE *)_R4 + 26) = result;
      return result;
    case 3:
        VADD.F32        S0, S0, S4; jumptable 01B14792 case 3
LABEL_12:
      break;
    default:
      __asm { VADD.F32        S0, S4, S6; jumptable 01B14792 default case }
      _R0 = *((_DWORD *)_R4 + 10);
        VADD.F32        S2, S2, S6
        VLDR            S4, [R4,#0x1C]
        VLDR            S6, [R4,#0x20]
        VLDR            S8, [R0,#0x48]
        VLDR            S10, [R0,#0x50]
        VSUB.F32        S0, S0, S8
        VSUB.F32        S2, S2, S10
        VMUL.F32        S0, S4, S0
        VMUL.F32        S2, S6, S2
        VADD.F32        S0, S2, S0
        VCMPE.F32       S0, #0.0
  __asm { VMRS            APSR_nzcv, FPSCR }
  if ( _NF ^ _VF )
    result = 1;
  *((_BYTE *)_R4 + 26) = result;
  return result;
}


signed int __fastcall DoorInteractGoal::_doorBlocksPath(DoorInteractGoal *this)
{
  DoorInteractGoal *v1; // r4@1
  DoorBlock *v2; // r5@1
  BlockSource *v3; // r0@1
  signed int v4; // r0@1
  unsigned int v5; // r2@1
  signed int v6; // r1@1
  signed int result; // r0@2

  v1 = this;
  v2 = (DoorBlock *)*((_DWORD *)this + 5);
  v3 = (BlockSource *)j_Entity::getRegion(*((Entity **)this + 10));
  v4 = j_DoorBlock::getBlockedDirection(v2, v3, (DoorInteractGoal *)((char *)v1 + 8));
  v5 = *((_WORD *)v1 + 18);
  v6 = v4;
  if ( v4 == (unsigned __int8)v5 )
  {
    result = 1;
  }
  else
    result = 0;
    if ( v6 == v5 >> 8 )
      result = 1;
  return result;
}


int __fastcall DoorInteractGoal::start(DoorInteractGoal *this)
{
  char v8; // r1@1
  DoorBlock *v9; // r5@5
  BlockSource *v10; // r0@5
  int result; // r0@5

  _R4 = this;
  _R0 = j_DoorBlock::getDoorThickness(*((DoorBlock **)this + 5));
  __asm
  {
    VMOV.F32        S0, #1.0
    VLDR            S6, =0.0
    VMOV            S2, R0
  }
  _R0 = (Entity *)*((_DWORD *)_R4 + 10);
  v8 = 0;
    VLDR            S4, [R0,#0x130]
    VSUB.F32        S0, S0, S2
    VLDR            S2, =0.005
    VADD.F32        S2, S4, S2
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S6, S0 }
    VCMPE.F32       S2, S6
    v8 = 1;
  *((_BYTE *)_R4 + 25) = v8;
  v9 = (DoorBlock *)*((_DWORD *)_R4 + 5);
  v10 = (BlockSource *)j_Entity::getRegion(_R0);
  *((_BYTE *)_R4 + 24) = j_DoorBlock::isToggled(v9, v10, (DoorInteractGoal *)((char *)_R4 + 8));
  __asm { VMOV.F32        S2, #0.5 }
  *((_BYTE *)_R4 + 26) = 0;
    VLDR            S0, [R4,#8]
    VCVT.F32.S32    S0, S0
  result = *((_DWORD *)_R4 + 10);
    VLDR            S4, [R0,#0x48]
    VADD.F32        S0, S0, S2
    VSUB.F32        S0, S0, S4
    VSTR            S0, [R4,#0x1C]
    VLDR            S0, [R4,#0x10]
    VLDR            S2, [R0,#0x50]
    VSTR            S0, [R4,#0x20]
  return result;
}
