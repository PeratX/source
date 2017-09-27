

Goal *__fastcall ControlledByPlayerGoal::ControlledByPlayerGoal(Goal *a1, int a2)
{
  int v2; // r5@1
  Goal *v3; // r4@1

  v2 = a2;
  v3 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v3 = &off_272530C;
  *((_DWORD *)v3 + 2) = v2;
  *((_DWORD *)v3 + 3) = 1065353216;
  j_Goal::setRequiredControlFlags(v3, 7);
  return v3;
}


int __fastcall ControlledByPlayerGoal::stop(ControlledByPlayerGoal *this)
{
  ControlledByPlayerGoal *v1; // r4@1
  int result; // r0@1

  v1 = this;
  result = (*(int (**)(void))(**((_DWORD **)this + 2) + 796))();
  *((_DWORD *)v1 + 3) = 0;
  return result;
}


signed int __fastcall ControlledByPlayerGoal::tick(ControlledByPlayerGoal *this)
{
  ControlledByPlayerGoal *v1; // r4@1
  signed int result; // r0@1
  __int64 v3; // r6@1
  float v5; // r1@3
  float v6; // t1@3
  float v14; // r1@7
  int v17; // r0@11
  const BlockPos *v18; // r7@12
  AttributeInstance *v22; // r0@16
  int v23; // r0@16
  BlockSource *v27; // r0@25
  int v28; // r0@25
  int v29; // r1@25
  BlockSource *v33; // r0@28
  Entity *v34; // r7@28
  Entity *v35; // r7@29
  Entity *v36; // r7@30
  int v37; // r0@32
  int v38; // r6@34
  int v39; // r0@34
  int v40; // [sp+10h] [bp-198h]@30
  int v41; // [sp+14h] [bp-194h]@30
  int v42; // [sp+18h] [bp-190h]@30
  char v43; // [sp+1Ch] [bp-18Ch]@30
  int v44; // [sp+28h] [bp-180h]@29
  int v45; // [sp+2Ch] [bp-17Ch]@29
  int v46; // [sp+30h] [bp-178h]@29
  char v47; // [sp+34h] [bp-174h]@29
  char v48; // [sp+40h] [bp-168h]@28
  char v49; // [sp+4Ch] [bp-15Ch]@28
  float v50; // [sp+104h] [bp-A4h]@26
  char v51; // [sp+110h] [bp-98h]@26
  char v52; // [sp+11Ch] [bp-8Ch]@26
  float v53; // [sp+144h] [bp-64h]@25
  int v54; // [sp+148h] [bp-60h]@25
  int v55; // [sp+150h] [bp-58h]@25
  int v56; // [sp+154h] [bp-54h]@30
  int v57; // [sp+158h] [bp-50h]@27
  int v58; // [sp+15Ch] [bp-4Ch]@25
  int v59; // [sp+160h] [bp-48h]@29
  int v60; // [sp+164h] [bp-44h]@27
  int v61; // [sp+168h] [bp-40h]@16
  int v62; // [sp+16Ch] [bp-3Ch]@16
  unsigned __int8 v63; // [sp+170h] [bp-38h]@12
  char v64; // [sp+174h] [bp-34h]@12

  v1 = this;
  result = *((_DWORD *)this + 2);
  v3 = *(_QWORD *)(result + 476);
  if ( (_DWORD)v3 != HIDWORD(v3) )
  {
    _R5 = 0.0;
    do
    {
      result = j_Entity::hasCategory(*(_DWORD *)v3, 1);
      v6 = *(float *)v3;
      LODWORD(v3) = v3 + 4;
      v5 = v6;
      if ( result )
        _R5 = v5;
    }
    while ( HIDWORD(v3) != (_DWORD)v3 );
    if ( _R5 != 0.0 )
      _R0 = *((_DWORD *)v1 + 2);
      __asm
      {
        VLDR            S0, [R5,#0x7C]
        VLDR            S2, [R0,#0x7C]
        VSUB.F32        S0, S0, S2
        VMOV            R0, S0
      }
      _R0 = j_mce::Math::wrapDegrees(_R0, v5);
        VMOV.F32        S16, #0.5
        VMOV            S0, R0
        VMOV.F32        S2, #5.0
        VMOV.F32        S4, #-5.0
        VMUL.F32        S0, S0, S16
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S0, S2 }
        VCMPE.F32       S0, S4
      if ( _NF ^ _VF )
        __asm { VMOVLT.F32      S0, S4 }
        VADD.F32        S0, S0, S2
      *(_DWORD *)(*((_DWORD *)v1 + 2) + 124) = j_mce::Math::wrapDegrees(_R0, v14);
      v17 = *((_DWORD *)v1 + 2);
      if ( *(_BYTE *)(v17 + 216) )
        v18 = (const BlockPos *)j_Entity::getRegion((Entity *)v17);
        j_BlockPos::BlockPos((int)&v64, *((_DWORD *)v1 + 2) + 72);
        j_BlockSource::getBlockID((BlockSource *)&v63, v18, (int)&v64);
        if ( v63 )
        {
          _R0 = j_Block::getFriction((Block *)Block::mBlocks[v63]);
          __asm
          {
            VLDR            S0, =0.91
            VMOV            S2, R0
            VMUL.F32        S18, S2, S0
          }
        }
        else
          __asm { VLDR            S18, =0.546 }
      else
        __asm { VLDR            S18, =0.91 }
      j_mce::Radian::Radian((int)&v62, *(_DWORD *)(*((_DWORD *)v1 + 2) + 124));
      _R6 = j_mce::Math::sin(v62);
      j_mce::Radian::Radian((int)&v61, *(_DWORD *)(*((_DWORD *)v1 + 2) + 124));
      _R7 = j_mce::Math::cos(v61);
      v22 = (AttributeInstance *)(*(int (**)(void))(**((_DWORD **)v1 + 2) + 1000))();
      v23 = j_AttributeInstance::getCurrentValue(v22);
        VMUL.F32        S0, S18, S18
        VLDR            S2, =0.16277
      _R8 = v23;
        VMOV            S4, R8
        VMUL.F32        S0, S0, S18
        VDIV.F32        S0, S2, S0
        VMOV.F32        S2, #1.0
        VMUL.F32        S0, S4, S0
        VCMPE.F32       S4, S2
        __asm { VMOVGT.F32      S2, S4 }
        VDIV.F32        S0, S0, S2
        VMUL.F32        S0, S0, S4
        VMOV            S2, R7
        VMOV            S4, R6
        VMUL.F32        S2, S0, S2
        VABS.F32        S4, S2
        VABS.F32        S6, S0
        VCMPE.F32       S6, S4
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        __asm
          VCMPE.F32       S2, #0.0
          VLDR            S18, =0.0
          VMRS            APSR_nzcv, FPSCR
          VMOV.F32        S0, #-0.5
        if ( _NF ^ _VF )
          __asm { VMOVLT.F32      S16, S0 }
        _R0 = *((_DWORD *)v1 + 2);
          VLDR            S0, [R0,#0x130]
          VMUL.F32        S0, S16, S0
          VADD.F32        S16, S0, S2
          VLDR            S2, =-0.0
          VMOV.F32        S4, #-0.5
          VCMPE.F32       S0, S2
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          __asm { VMOVGT.F32      S16, S4 }
          VLDR            S2, [R0,#0x130]
          VMUL.F32        S2, S16, S2
          VLDR            S16, =0.0
          VSUB.F32        S18, S2, S0
      j_BlockPos::BlockPos((int)&v58, _R0 + 72);
        VLDR            S0, [R0,#0x48]
        VLDR            S2, [R0,#0x50]
        VADD.F32        S0, S0, S18
        VADD.F32        S2, S2, S16
        VSTR            S0, [SP,#0x1A8+var_64]
      v54 = *(_DWORD *)(_R0 + 76);
      __asm { VSTR            S2, [SP,#0x1A8+var_5C] }
      j_BlockPos::BlockPos((int)&v55, (int)&v53);
      v27 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 2));
      v28 = j_BlockSource::getBlock(v27, (const BlockPos *)&v55);
      if ( !j_Block::hasProperty(v28, v29, 1LL) )
        __asm { VLDR            S0, [R5,#0x134] }
        _R0 = &Vec3::UNIT_Y;
          VLDR            S2, [R0]
          VLDR            S4, [R0,#4]
          VLDR            S6, [R0,#8]
          VMUL.F32        S2, S2, S0
          VMUL.F32        S4, S4, S0
          VMUL.F32        S0, S6, S0
          VLDR            S6, [R0,#0x130]
          VLDR            S8, [R0,#0x134]
        _R0 = &Vec3::ONE;
          VADD.F32        S2, S2, S6
          VADD.F32        S4, S4, S8
          VADD.F32        S0, S0, S6
          VLDR            S6, [R0]
          VLDR            S8, [R0,#4]
          VLDR            S10, [R0,#8]
          VADD.F32        S0, S0, S10
          VSTR            S2, [SP,#0x1A8+var_A4]
          VSTR            S4, [SP,#0x1A8+var_A0]
          VSTR            S0, [SP,#0x1A8+var_9C]
        j_BlockPos::BlockPos((int)&v51, (int)&v50);
        j_Node::Node((Node *)&v52, (const BlockPos *)&v51);
        if ( v58 != v55 || v60 != v57 )
          v33 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 2));
          j_PathFinder::PathFinder((PathFinder *)&v49, v33, 0, 0, 1, 0, 0, 0);
          v34 = (Entity *)*((_DWORD *)v1 + 2);
          j_BlockPos::BlockPos((int)&v48, (int)v34 + 72);
          if ( !j_PathFinder::_isFree(
                  (PathFinder *)&v49,
                  v34,
                  (const BlockPos *)&v48,
                  (const BlockPos *)&v55,
                  (Node *)&v52) )
            v35 = (Entity *)*((_DWORD *)v1 + 2);
            j_BlockPos::BlockPos((int)&v47, (int)v35 + 72);
            v44 = v58;
            v45 = v59 + 1;
            v46 = v60;
            if ( j_PathFinder::_isFree(
                   (PathFinder *)&v49,
                   v35,
                   (const BlockPos *)&v47,
                   (const BlockPos *)&v44,
                   (Node *)&v52) == (PathFinder *)1 )
            {
              v36 = (Entity *)*((_DWORD *)v1 + 2);
              j_BlockPos::BlockPos((int)&v43, (int)v36 + 72);
              v40 = v55;
              v41 = v56 + 1;
              v42 = v57;
              if ( j_PathFinder::_isFree(
                     (PathFinder *)&v49,
                     v36,
                     (const BlockPos *)&v43,
                     (const BlockPos *)&v40,
                     (Node *)&v52) == (PathFinder *)1 )
              {
                if ( j_Mob::getJumpControl(*((Mob **)v1 + 2)) )
                {
                  v37 = j_Mob::getJumpControl(*((Mob **)v1 + 2));
                  (*(void (**)(void))(*(_DWORD *)v37 + 8))();
                }
              }
            }
          j_PathFinder::~PathFinder((PathFinder *)&v49);
      v38 = *((_DWORD *)v1 + 2);
      v39 = j_Mob::getTravelType(*((Mob **)v1 + 2));
      j_Mob::calcMoveRelativeSpeed(v38, v39);
      result = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 100))();
  }
  return result;
}


signed int __fastcall ControlledByPlayerGoal::_canBeControlledByRider(ControlledByPlayerGoal *this)
{
  int v1; // r0@1
  int v2; // r8@1
  int *v3; // r6@2
  int *i; // r7@2
  int v5; // r4@6
  int v6; // r0@6
  int v7; // r5@6
  int v8; // r0@6
  bool v9; // zf@6
  int *v10; // r0@11
  int v11; // r2@11
  unsigned int v12; // r1@11
  int v13; // r0@11
  int v14; // r5@11
  int v15; // r3@11
  int j; // r2@11

  v1 = *((_DWORD *)this + 2);
  v2 = *(_DWORD *)(v1 + 48);
  if ( *(_DWORD *)(v2 + 204) )
  {
    v3 = (int *)(*(_QWORD *)(v1 + 476) >> 32);
    for ( i = (int *)*(_QWORD *)(v1 + 476); i != v3; ++i )
    {
      if ( j_Entity::hasCategory(*i, 1) == 1 )
      {
        v5 = *i;
        v6 = (*(int (__fastcall **)(int))(*(_DWORD *)*i + 908))(*i);
        v7 = v6;
        v8 = *(_BYTE *)(v6 + 15);
        v9 = v8 == 0;
        if ( v8 )
          v9 = *(_DWORD *)v7 == 0;
        if ( !v9 && !j_ItemInstance::isNull((ItemInstance *)v7) && *(_BYTE *)(v7 + 14) )
        {
          v10 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 908))(v5);
          v11 = *(_DWORD *)(v2 + 204);
          v12 = *v10;
          v13 = v11 + 8;
          v14 = *(_DWORD *)(v11 + 12);
          v15 = v11 + 8;
          for ( j = v11 + 8; v14; v15 = j )
          {
            j = v14;
            while ( *(_DWORD *)(j + 16) < v12 )
            {
              j = *(_DWORD *)(j + 12);
              if ( !j )
              {
                j = v15;
                goto LABEL_17;
              }
            }
            v14 = *(_DWORD *)(j + 8);
          }
LABEL_17:
          if ( j != v13 )
            if ( v12 < *(_DWORD *)(j + 16) )
              j = v13;
            if ( j != v13 )
              return 1;
        }
      }
    }
  }
  return 0;
}


int __fastcall ControlledByPlayerGoal::start(ControlledByPlayerGoal *this)
{
  ControlledByPlayerGoal *v1; // r4@1
  AttributeInstance *v2; // r0@1
  int v3; // r4@1
  int (__fastcall *v4)(int, int); // r6@1
  AttributeInstance *v5; // r0@1
  int v6; // r1@1

  v1 = this;
  v2 = (AttributeInstance *)(*(int (**)(void))(**((_DWORD **)this + 2) + 1000))();
  j_AttributeInstance::resetToDefaultValue(v2);
  v3 = *((_DWORD *)v1 + 2);
  v4 = *(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 824);
  v5 = (AttributeInstance *)(*(int (__fastcall **)(int, void *))(*(_DWORD *)v3 + 1000))(
                              v3,
                              &SharedAttributes::MOVEMENT_SPEED);
  v6 = j_AttributeInstance::getDefaultValue(v5, 2);
  return v4(v3, v6);
}


void __fastcall ControlledByPlayerGoal::~ControlledByPlayerGoal(ControlledByPlayerGoal *this)
{
  ControlledByPlayerGoal::~ControlledByPlayerGoal(this);
}


int __fastcall ControlledByPlayerGoal::canUse(ControlledByPlayerGoal *this)
{
  ControlledByPlayerGoal *v1; // r4@1
  int *v2; // r5@1 OVERLAPPED
  int *v3; // r6@1 OVERLAPPED
  int v4; // t1@2
  int result; // r0@4
  char v6; // r0@6

  v1 = this;
  *(_QWORD *)&v2 = *(_QWORD *)(*((_DWORD *)this + 2) + 476);
  if ( v2 == v3 )
  {
LABEL_4:
    result = 0;
  }
  else
    while ( 1 )
    {
      v4 = *v2;
      ++v2;
      if ( j_Entity::hasCategory(v4, 1) == 1 )
        break;
      if ( v3 == v2 )
        goto LABEL_4;
    }
    if ( (*(int (**)(void))(**((_DWORD **)v1 + 2) + 316))() == 1 )
      v6 = j_ControlledByPlayerGoal::_canBeControlledByRider(v1);
    else
      v6 = 0;
    result = v6 & 1;
  return result;
}


void __fastcall ControlledByPlayerGoal::~ControlledByPlayerGoal(ControlledByPlayerGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}
