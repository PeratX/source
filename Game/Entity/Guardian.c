

int __fastcall Guardian::setTarget(Guardian *this, Entity *a2)
{
  Guardian *v2; // r5@1
  SynchedEntityData *v3; // r6@1
  Entity *v4; // r4@1
  unsigned int v5; // r7@2
  unsigned int v6; // r8@2
  __int64 v7; // kr00_8@2
  int v8; // r0@4
  unsigned int v9; // r1@4
  unsigned int v10; // r1@6
  unsigned int v11; // r0@6

  v2 = this;
  v3 = (Guardian *)((char *)this + 176);
  v4 = a2;
  if ( a2 )
  {
    v7 = *(_QWORD *)Entity::getUniqueID(a2);
    v5 = HIDWORD(v7);
    v6 = v7;
  }
  else
    v6 = 0;
    v5 = 0;
  v8 = SynchedEntityData::_get(v3, 6);
  v9 = *(_DWORD *)(v8 + 4);
  if ( (unsigned __int8)v9 == 7 && *(_QWORD *)(v8 + 16) != __PAIR__(v5, v6) )
    *(_DWORD *)(v8 + 16) = v6;
    *(_DWORD *)(v8 + 20) = v5;
    *(_BYTE *)(v8 + 8) = 1;
    v10 = v9 >> 16;
    v11 = *((_WORD *)v2 + 94);
    if ( v11 >= v10 )
      LOWORD(v11) = v10;
    *((_WORD *)v2 + 94) = v11;
    if ( *((_WORD *)v2 + 95) > v10 )
      LOWORD(v10) = *((_WORD *)v2 + 95);
    *((_WORD *)v2 + 95) = v10;
  return j_j_j__ZN3Mob9setTargetEP6Entity(v2, v4);
}


char *__fastcall Guardian::getEyeTarget(Guardian *this)
{
  return (char *)this + 4392;
}


signed int __fastcall Guardian::getEntityTypeId(Guardian *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = Entity::getStatusFlag((int)this, 31);
  v2 = 2865;
  if ( v1 )
    v2 = 2866;
  return v2;
}


void __fastcall Guardian::reloadHardcodedClient(int a1)
{
  Guardian *v1; // r4@1

  v1 = (Guardian *)a1;
  Mob::reloadHardcodedClient(a1);
  j_j_j__ZN8Guardian21registerLoopingSoundsEv(v1);
}


signed int __fastcall Guardian::canSeeInvisible(Guardian *this)
{
  return 1;
}


void __fastcall Guardian::addAdditionalSaveData(Guardian *this, CompoundTag *a2)
{
  Guardian::addAdditionalSaveData(this, a2);
}


int __fastcall Guardian::makeStepSound(Guardian *this)
{
  return 0;
}


signed int __fastcall Guardian::getMaxHeadXRot(Guardian *this)
{
  return 1127481344;
}


void __fastcall Guardian::reloadHardcodedClient(int a1)
{
  Guardian::reloadHardcodedClient(a1);
}


int __fastcall Guardian::getTargetEntity(Guardian *this)
{
  Entity *v1; // r4@1
  __int64 v2; // kr00_8@2
  int v3; // r0@2
  int result; // r0@2

  v1 = this;
  if ( *((_DWORD *)this + 773) )
  {
    v2 = SynchedEntityData::getInt64((Guardian *)((char *)this + 176), 6);
    v3 = Entity::getLevel(v1);
    result = Level::fetchEntity(v3, 0, v2, HIDWORD(v2), 0);
  }
  else
    result = 0;
  return result;
}


void __fastcall Guardian::reloadHardcoded(Guardian *this, int a2)
{
  Guardian::reloadHardcoded(this, a2);
}


void __fastcall Guardian::readAdditionalSaveData(Guardian *this, const CompoundTag *a2)
{
  Guardian::readAdditionalSaveData(this, a2);
}


signed int __fastcall Guardian::checkSpawnRules(Guardian *this, bool a2)
{
  Entity *v2; // r4@1
  int v3; // r5@2
  signed int result; // r0@2
  char v5; // [sp+4h] [bp-1Ch]@2

  v2 = this;
  if ( Random::_genRandInt32((Guardian *)((char *)this + 552)) % 5 )
  {
    v3 = Entity::getRegion(v2);
    BlockPos::BlockPos((int)&v5, (int)v2 + 72);
    result = BlockSource::canSeeSkyFromBelowWater(v3, (int)&v5);
  }
  else
    result = 1;
  return result;
}


int __fastcall Guardian::aiStep(Guardian *this)
{
  Level *v2; // r0@1
  int v13; // r5@6
  _DWORD *v14; // r0@6
  int v17; // r0@11
  BlockSource *v19; // r0@21
  char v20; // r0@20
  int v22; // r0@26
  float v24; // r3@31
  unsigned int v26; // r0@32
  int v29; // r0@32
  unsigned int v31; // r0@32
  int v34; // r0@32
  __int64 v35; // kr00_8@34
  int v36; // r0@34
  signed int v39; // r6@35
  int v40; // r0@35
  signed int v41; // r1@35
  float v42; // r2@37
  int v45; // r0@44
  BlockSource *v49; // r5@49
  char *v50; // r0@49
  char *v51; // r6@49
  int *v52; // r11@49
  int v53; // r1@49 OVERLAPPED
  int v54; // r2@49 OVERLAPPED
  signed int v55; // r0@49
  int *v56; // r0@51
  signed int v57; // r7@52
  unsigned int v58; // r9@53
  int v59; // r10@53
  int v60; // r7@54
  int v61; // r0@55
  int *v62; // r2@55
  _DWORD *v64; // r6@56
  int v66; // r7@63
  int v68; // [sp+Ch] [bp-104h]@49
  signed int v69; // [sp+10h] [bp-100h]@49
  int v70; // [sp+14h] [bp-FCh]@49
  char v71; // [sp+18h] [bp-F8h]@49
  int v72; // [sp+34h] [bp-DCh]@44
  int v73; // [sp+38h] [bp-D8h]@44
  int v74; // [sp+3Ch] [bp-D4h]@44
  float v75; // [sp+40h] [bp-D0h]@44
  int v76; // [sp+4Ch] [bp-C4h]@32
  int v77; // [sp+50h] [bp-C0h]@32
  int v78; // [sp+54h] [bp-BCh]@32
  float v79; // [sp+58h] [bp-B8h]@32
  int v80; // [sp+64h] [bp-ACh]@21
  int v81; // [sp+68h] [bp-A8h]@21
  float v82; // [sp+6Ch] [bp-A4h]@21
  int v83; // [sp+70h] [bp-A0h]@19
  float v84; // [sp+74h] [bp-9Ch]@21
  float v85; // [sp+78h] [bp-98h]@21
  char v86; // [sp+7Ch] [bp-94h]@9
  _DWORD *v87; // [sp+88h] [bp-88h]@6
  void (*v88)(void); // [sp+90h] [bp-80h]@6
  signed int (__fastcall *v89)(Entity ***, const Entity *); // [sp+94h] [bp-7Ch]@6
  int v90; // [sp+98h] [bp-78h]@6
  int v91; // [sp+9Ch] [bp-74h]@3
  int v92; // [sp+A0h] [bp-70h]@3
  int v93; // [sp+A4h] [bp-6Ch]@3

  _R4 = this;
  v2 = (Level *)Entity::getLevel(this);
  if ( !Level::isClientSide(v2) && Entity::getStatusFlag((int)_R4, 31) == 1 )
  {
    v93 = 1150681088;
    v92 = 1169915904;
    v91 = 0x40000000;
    _R0 = *(_DWORD *)Entity::getUniqueID(_R4);
    _R1 = 1374389535;
    if ( _R0 < 0 )
      _R0 = -_R0;
    __asm { SMMUL.W         R1, R0, R1 }
    _R0 = _R0 - 100 * (((signed int)_R1 >> 5) + (_R1 >> 31)) + *((_DWORD *)_R4 + 104);
    _R1 = 458129845;
    if ( _R0 == 1200 * (((signed int)_R1 >> 7) + (_R1 >> 31)) )
    {
      v90 = MobEffect::DIG_SLOWDOWN;
      v13 = Entity::getDimension(_R4);
      v14 = operator new(0x14u);
      *v14 = _R4;
      v14[1] = &v90;
      v14[2] = &v92;
      v14[3] = &v91;
      v14[4] = &v93;
      v87 = v14;
      v88 = (void (*)(void))sub_175A4DC;
      v89 = sub_175A3FC;
      Dimension::forEachPlayer(v13, (int)&v87);
      if ( v88 )
        v88();
    }
  }
  if ( !Entity::hasRestriction(_R4) )
    BlockPos::BlockPos((int)&v86, (int)_R4 + 72);
    Entity::restrictTo(_R4, (const BlockPos *)&v86, 16.0);
  _R5 = (int)_R4 + 4336;
  *((_DWORD *)_R4 + 1085) = *((_DWORD *)_R4 + 1084);
  if ( (*(int (__fastcall **)(Guardian *))(*(_DWORD *)_R4 + 208))(_R4) )
    _R6 = (Guardian *)((char *)_R4 + 4344);
    v17 = Entity::isMoving(_R4);
    __asm { VLDR            S0, [R6] }
    if ( v17 == 1 )
      __asm
      {
        VMOV.F32        S2, #0.5
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        __asm { VMOV.F32        S0, #4.0 }
        *(_DWORD *)_R6 = 1082130432;
        goto LABEL_25;
        VSUB.F32        S2, S2, S0
        VLDR            S4, =0.1
    else
        VMOV.F32        S2, #0.125
        VLDR            S4, =0.2
    __asm
      VMUL.F32        S2, S2, S4
      VADD.F32        S0, S2, S0
      VSTR            S0, [R6]
  else
    *((_DWORD *)_R4 + 1086) = 0x40000000;
    _R6 = (int)_R4 + 4344;
      VLDR            S0, [R4,#0x70]
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF)
      && *((_BYTE *)_R4 + 4364)
      && !(*(int (__fastcall **)(Guardian *))(*(_DWORD *)_R4 + 288))(_R4) )
      Entity::playSound((int)_R4, 103, (int)_R4 + 72);
    BlockPos::BlockPos((int)&v83, (int)_R4 + 72);
    if ( _NF ^ _VF )
      v19 = (BlockSource *)Entity::getRegion(_R4);
      v80 = v83;
      v81 = LODWORD(v84) - 1;
      v82 = v85;
      v20 = BlockSource::isSolidBlockingBlock(v19, (const BlockPos *)&v80);
      v20 = 0;
    *((_BYTE *)_R4 + 4364) = v20;
LABEL_25:
  __asm
    VLDR            S2, [R5]
    VADD.F32        S0, S2, S0
    VSTR            S0, [R5]
  _R5 = (int)_R4 + 4348;
  *((_DWORD *)_R4 + 1088) = *((_DWORD *)_R4 + 1087);
    v22 = Entity::isMoving(_R4);
    __asm { VLDR            S0, [R5] }
    if ( v22 == 1 )
        VMOV.F32        S2, #0.75
        VMUL.F32        S0, S0, S2
        VMOV.F32        S2, #1.0
        VLDR            S4, =0.06
        VMUL.F32        S2, S2, S4
        VADD.F32        S0, S2, S0
    _R0 = Random::_genRandInt32((Guardian *)((char *)_R4 + 552));
      VMOV            S0, R0
      VLDR            D1, =2.32830644e-10
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D1
      VCVT.F32.F64    S0, D0
  __asm { VSTR            S0, [R5] }
  if ( Entity::isMoving(_R4) == 1 && (*(int (__fastcall **)(_DWORD))(*(_DWORD *)_R4 + 208))(_R4) == 1 )
    Entity::getViewVector((Entity *)&v83, *(float *)&_R4, 0.0, v24);
    __asm { VLDR            S25, [R4,#0x48] }
    _R6 = Random::_genRandInt32((Guardian *)((char *)_R4 + 552));
      VLDR            S24, [R4,#0x4C]
      VLDR            S26, [R4,#0x130]
      VLDR            S28, [SP,#0x110+var_A0]
    v26 = Random::_genRandInt32((Guardian *)((char *)_R4 + 552));
    __asm { VMOV            S0, R6 }
    _R7 = v26;
      VLDR            S30, [R4,#0x50]
      VLDR            S19, [R4,#0x134]
      VLDR            S21, [SP,#0x110+var_9C]
      VCVT.F64.U32    D11, S0
      VLDR            D8, =2.32830644e-10
      VMOV            S2, R7
      VCVT.F64.U32    D1, S2
      VMUL.F64        D0, D0, D8
      VMUL.F64        D2, D11, D8
      VMUL.F64        D1, D1, D8
      VMOV.F32        S18, #-1.5
      VLDR            S10, [SP,#0x110+var_98]
      VMOV.F32        S20, #-0.5
      VLDR            S12, [R4,#0x130]
      VCVT.F32.F64    S4, D2
      VMUL.F32        S6, S28, S18
      VMUL.F32        S8, S21, S18
      VADD.F32        S4, S4, S20
      VCVT.F32.F64    S2, D1
      VMUL.F32        S10, S10, S18
      VADD.F32        S0, S0, S20
      VADD.F32        S6, S6, S25
      VMUL.F32        S4, S4, S26
      VADD.F32        S8, S8, S24
      VMUL.F32        S2, S2, S19
      VADD.F32        S10, S10, S30
      VMUL.F32        S0, S0, S12
      VADD.F32        S22, S6, S4
      VADD.F32        S24, S8, S2
      VADD.F32        S26, S10, S0
    v29 = Entity::getLevel(_R4);
      VSTR            S22, [SP,#0x110+var_B8]
      VSTR            S24, [SP,#0x110+var_B4]
      VSTR            S26, [SP,#0x110+var_B0]
    v76 = 0;
    v77 = 0;
    v78 = 0;
    Level::addParticle(v29, 1, (int)&v79);
    v31 = Random::_genRandInt32((Guardian *)((char *)_R4 + 552));
    _R7 = v31;
      VADD.F32        S16, S6, S4
      VADD.F32        S18, S8, S2
      VADD.F32        S20, S10, S0
    v34 = Entity::getLevel(_R4);
      VSTR            S16, [SP,#0x110+var_B8]
      VSTR            S18, [SP,#0x110+var_B4]
      VSTR            S20, [SP,#0x110+var_B0]
    Level::addParticle(v34, 1, (int)&v79);
  if ( *((_DWORD *)_R4 + 773) )
    v35 = SynchedEntityData::getInt64((Guardian *)((char *)_R4 + 176), 6);
    v36 = Entity::getLevel(_R4);
    _R5 = (Entity *)Level::fetchEntity(v36, 0, v35, HIDWORD(v35), 0);
    if ( _R5 )
      _R7 = (Guardian *)((char *)_R4 + 4360);
      v39 = *((_DWORD *)_R4 + 1090);
      v40 = Entity::getStatusFlag((int)_R4, 31);
      v41 = 80;
      if ( v40 )
        v41 = 60;
      LOWORD(v42) = 0;
      if ( v39 < v41 )
        ++*(_DWORD *)_R7;
      HIWORD(v42) = 17076;
      LookControl::setLookAt(*((LookControl **)_R4 + 1028), _R5, v42, v42);
      (*(void (**)(void))(**((_DWORD **)_R4 + 1028) + 8))();
        VLDR            S16, [R5,#0x48]
        VLDR            S18, [R5,#0x4C]
        VLDR            S20, [R5,#0x50]
        VLDR            S22, [R4,#0x134]
      Entity::getAttachPos((AABB *)&v83, (int)_R4, 6, 0);
        VMOV.F32        S0, #-0.5
        VLDR            S2, [SP,#0x110+var_A0]
        VLDR            S4, [SP,#0x110+var_9C]
        VSUB.F32        S26, S16, S2
        VLDR            S6, [SP,#0x110+var_98]
        VMUL.F32        S0, S22, S0
        VSUB.F32        S22, S20, S6
        VADD.F32        S0, S18, S0
        VSUB.F32        S24, S0, S4
        VMUL.F32        S0, S26, S26
        VMUL.F32        S4, S22, S22
        VMUL.F32        S2, S24, S24
        VLDR            S2, [R7]
        VCVT.F32.S32    S28, S2
        VADD.F32        S0, S0, S4
        VSQRT.F32       S16, S0
      Entity::getStatusFlag((int)_R4, 31);
      _R0 = Random::_genRandInt32((Guardian *)((char *)_R4 + 552));
        VMOV            S2, R0
        VLDR            D9, =2.32830644e-10
        VLDR            S4, =60.0
        VCVT.F64.U32    D1, S2
        VMUL.F64        D1, D1, D9
        VCVT.F32.F64    S20, D1
        VLDR            S0, =80.0
        VCMPE.F32       S20, S16
      if ( !_ZF )
        __asm { VMOVNE.F32      S0, S4 }
      __asm { VMRS            APSR_nzcv, FPSCR }
        __asm
        {
          VMOV.F32        S2, #1.0
          VLDR            S4, =1.8
          VDIV.F32        S0, S28, S0
          VDIV.F32        S2, S2, S16
          VMUL.F32        S22, S2, S22
          VMUL.F32        S24, S2, S24
          VMUL.F32        S26, S2, S26
          VLDR            S2, =1.7
          VSUB.F32        S30, S4, S0
          VSUB.F32        S28, S2, S0
        }
        do
          _R0 = Random::_genRandInt32((Guardian *)((char *)_R4 + 552));
          __asm
          {
            VMOV            S0, R0
            VADD.F32        S2, S30, S20
            VCVT.F64.U32    D0, S0
            VMUL.F64        D0, D0, D9
            VCVT.F32.F64    S0, D0
            VMUL.F32        S0, S0, S28
            VADD.F32        S20, S2, S0
            VMUL.F32        S17, S26, S20
            VMUL.F32        S21, S24, S20
            VMUL.F32        S23, S22, S20
          }
          v45 = Entity::getLevel(_R4);
            VLDR            S0, [R4,#0x48]
            VLDR            S2, [R4,#0x4C]
            VLDR            S4, [R4,#0x50]
            VADD.F32        S0, S17, S0
            VADD.F32        S2, S21, S2
            VADD.F32        S4, S23, S4
            VSTR            S0, [SP,#0x110+var_D0]
            VSTR            S2, [SP,#0x110+var_CC]
            VSTR            S4, [SP,#0x110+var_C8]
          v72 = 0;
          v73 = 0;
          v74 = 0;
          Level::addParticle(v45, 1, (int)&v75);
            VCMPE.F32       S20, S16
            VMRS            APSR_nzcv, FPSCR
        while ( _NF ^ _VF );
      goto LABEL_70;
  if ( *((_BYTE *)_R4 + 216) && !(*(int (__fastcall **)(_DWORD))(*(_DWORD *)_R4 + 208))(_R4) )
      VMOV.F32        S0, #0.5
      VLDR            S2, [R4,#0x70]
      VSTR            S0, [R4,#0x70]
      VLDR            S18, =-0.4
      VLDR            S2, [R4,#0x6C]
      VLDR            S20, =0.8
      VADD.F32        S2, S2, S18
      VMUL.F32        S0, S0, S20
      VSTR            S0, [R4,#0x6C]
      VLDR            S2, [R4,#0x74]
      VSTR            S0, [R4,#0x74]
      VLDR            S2, =360.0
      VMUL.F32        S0, S0, S2
      VSTR            S0, [R4,#0x7C]
    *((_BYTE *)_R4 + 216) = 0;
  *((_DWORD *)_R4 + 1090) = 0;
  *((_DWORD *)_R4 + 1099) = -1;
  *((_DWORD *)_R4 + 1098) = -1;
  v49 = (BlockSource *)Entity::getRegion(_R4);
  v68 = 1097859072;
  v69 = 1097859072;
  v70 = 1097859072;
  AABB::grow((AABB *)&v71, (Guardian *)((char *)_R4 + 264), (int)&v68);
  v50 = BlockSource::fetchEntities(v49, _R4, (const AABB *)&v71);
  v51 = v50;
  v52 = 0;
  *(_QWORD *)&v53 = *(_QWORD *)v50;
  v55 = v54 - v53;
  if ( 0 != (v54 - v53) >> 2 )
    if ( (unsigned int)(v55 >> 2) >= 0x40000000 )
      sub_21E57F4();
    v56 = (int *)operator new(v55);
    *(_QWORD *)&v53 = *(_QWORD *)v51;
    v52 = v56;
  v57 = v54 - v53;
    v58 = v57 >> 2;
    _aeabi_memmove4(v52, v53);
    v59 = (int)&v52[v57 >> 2];
    sub_175A51C((int)v52, &v52[v58], 2 * (31 - __clz(v58)), (int)_R4);
    if ( v57 < 65 )
      sub_175A90A(v52, (int)&v52[v58], (int)_R4);
      v60 = (int)(v52 + 16);
      sub_175A90A(v52, (int)(v52 + 16), (int)_R4);
      if ( v58 != 16 )
        v61 = (int)(v52 + 14);
        v62 = v52 + 16;
          _R1 = *v62;
          v64 = (_DWORD *)v61;
          _R3 = *(_DWORD *)(v60 - 4);
            VLDR            S6, [R1,#0x48]
            VLDR            S12, [R3,#0x48]
            VSUB.F32        S6, S0, S6
            VLDR            S8, [R1,#0x4C]
            VSUB.F32        S12, S0, S12
            VLDR            S14, [R3,#0x4C]
            VSUB.F32        S8, S2, S8
            VSUB.F32        S14, S2, S14
            VLDR            S10, [R1,#0x50]
            VLDR            S1, [R3,#0x50]
            VSUB.F32        S10, S4, S10
            VMUL.F32        S6, S6, S6
            VSUB.F32        S1, S4, S1
            VMUL.F32        S12, S12, S12
            VMUL.F32        S8, S8, S8
            VMUL.F32        S14, S14, S14
            VMUL.F32        S10, S10, S10
            VADD.F32        S6, S8, S6
            VMUL.F32        S8, S1, S1
            VADD.F32        S12, S14, S12
            VADD.F32        S6, S6, S10
            VADD.F32        S8, S12, S8
            VCMPE.F32       S6, S8
          while ( _NF ^ _VF )
            *v62 = _R3;
            _R3 = *v64;
            v62 = v64 + 1;
            --v64;
            __asm
            {
              VLDR            S8, [R3,#0x48]
              VLDR            S10, [R3,#0x4C]
              VSUB.F32        S8, S0, S8
              VLDR            S12, [R3,#0x50]
              VSUB.F32        S10, S2, S10
              VSUB.F32        S12, S4, S12
              VMUL.F32        S8, S8, S8
              VMUL.F32        S10, S10, S10
              VMUL.F32        S12, S12, S12
              VADD.F32        S8, S10, S8
              VADD.F32        S8, S8, S12
              VCMPE.F32       S6, S8
              VMRS            APSR_nzcv, FPSCR
            }
          v60 += 4;
          v61 += 4;
          *v62 = _R1;
          v62 = (int *)v60;
        while ( v60 != v59 );
        if ( !v58 )
          goto LABEL_68;
    v66 = 0;
    while ( Entity::hasCategory(v52[v66], 1) != 1 )
      ++v66;
      if ( v58 == v66 )
        goto LABEL_68;
    *((_QWORD *)_R4 + 549) = *(_QWORD *)Entity::getUniqueID((Entity *)v52[v66]);
LABEL_68:
  if ( v52 )
    operator delete(v52);
LABEL_70:
  if ( Entity::getTarget(_R4) )
    *((_DWORD *)_R4 + 31) = *((_DWORD *)_R4 + 855);
  return Monster::aiStep(_R4);
}


Guardian *__fastcall Guardian::~Guardian(Guardian *this)
{
  Guardian *v1; // r4@1
  int v2; // r0@2
  int v3; // r3@2
  int v4; // r2@2
  int v5; // r1@3
  void *v6; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26F75B0;
  if ( *((_BYTE *)this + 3081) )
  {
    v2 = Entity::getLevel(this);
    v3 = *((_DWORD *)v1 + 1097);
    v4 = *((_DWORD *)v1 + 1096);
    (*(void (**)(void))(**(_DWORD **)(v2 + 60) + 52))();
  }
  v5 = *((_DWORD *)v1 + 1076);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v5 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  Mob::~Mob(v1);
  return v1;
}


int __fastcall Guardian::getAttackAnimationScale(Guardian *this, float a2)
{
  int v8; // r0@1
  int result; // r0@3

  _R4 = a2;
  _R1 = *((_DWORD *)this + 1090);
  __asm
  {
    VMOV            S0, R1
    VCVT.F32.S32    S16, S0
  }
  v8 = Entity::getStatusFlag((int)this, 31);
    VLDR            S0, =60.0
    VMOV            S4, R4
    VLDR            S2, =80.0
  if ( v8 )
    __asm { VMOVNE.F32      S2, S0 }
    VADD.F32        S0, S16, S4
    VDIV.F32        S0, S0, S2
    VMOV            R0, S0
  return result;
}


int __fastcall Guardian::Guardian(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int v9; // r6@2
  _BYTE *v10; // r0@2
  signed __int16 v11; // r5@2
  int v12; // r1@2
  unsigned int v13; // r0@4
  int v14; // r0@9

  v3 = a1;
  Monster::Monster(a1, a2, a3);
  *(_DWORD *)v3 = &off_26F75B0;
  sub_21E94B4((void **)(v3 + 4304), "mob.guardian.attack");
  *(_DWORD *)(v3 + 4308) = 1075209830;
  *(_DWORD *)(v3 + 4312) = 0;
  *(_DWORD *)(v3 + 4316) = 2;
  *(_DWORD *)(v3 + 4320) = 4;
  *(_DWORD *)(v3 + 4324) = 0;
  *(_DWORD *)(v3 + 4328) = 0;
  *(_DWORD *)(v3 + 4332) = 0;
  *(_DWORD *)(v3 + 4372) = -1;
  *(_DWORD *)(v3 + 4368) = -1;
  *(_DWORD *)(v3 + 4388) = 0;
  *(_DWORD *)(v3 + 4384) = 0;
  *(_DWORD *)(v3 + 4396) = -1;
  *(_DWORD *)(v3 + 4392) = -1;
  *(_DWORD *)(v3 + 248) = 62;
  _R0 = Random::_genRandInt32((Random *)(v3 + 552));
  __asm
  {
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S0, D0
    VSTR            S0, [R0]
  }
  *(_DWORD *)(v3 + 4360) = 0;
  *(_DWORD *)(v3 + 4352) = 0;
  *(_DWORD *)(v3 + 4348) = 0;
  *(_BYTE *)(v3 + 4376) = 0;
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 6) )
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 6);
    v9 = *(_DWORD *)(v3 + 176);
    v10 = operator new(0x18u);
    v10[4] = 7;
    v11 = 6;
    *((_WORD *)v10 + 3) = 6;
    v10[8] = 1;
    *(_DWORD *)v10 = &off_26F0DC8;
    *((_DWORD *)v10 + 4) = 0;
    *((_DWORD *)v10 + 5) = 0;
    v12 = *(_DWORD *)(v9 + 24);
    *(_DWORD *)(v9 + 24) = v10;
    if ( v12 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 4))(v12);
    v13 = *(_WORD *)(v3 + 188);
    if ( v13 >= 6 )
      LOWORD(v13) = 6;
    *(_WORD *)(v3 + 188) = v13;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 6 )
      v11 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v11;
  v14 = v3 + 4392;
  *(_DWORD *)v14 = -1;
  *(_DWORD *)(v14 + 4) = -1;
  return v3;
}


int __fastcall Guardian::setElder(Guardian *this, int a2)
{
  Entity *v2; // r4@1

  v2 = this;
  Entity::setStatusFlag((int)this, 31, a2);
  return j_j_j__ZN6Entity13setPersistentEv_0(v2);
}


signed int __fastcall Guardian::getAttackDuration(Guardian *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = Entity::getStatusFlag((int)this, 31);
  v2 = 80;
  if ( v1 )
    v2 = 60;
  return v2;
}


int __fastcall Guardian::setAttackTime(int result, int a2)
{
  *(_DWORD *)(result + 4360) = a2;
  return result;
}


signed int __fastcall Guardian::setElderGhost(Guardian *this)
{
  Guardian *v1; // r4@1
  signed int result; // r0@3

  v1 = this;
  if ( !Entity::getStatusFlag((int)this, 31) )
  {
    Entity::setStatusFlag((int)v1, 31, 1);
    Entity::setPersistent(v1);
  }
  *((_BYTE *)v1 + 4376) = 1;
  *((_DWORD *)v1 + 1087) = 1065353216;
  result = 4352;
  *((_DWORD *)v1 + 1088) = 1065353216;
  return result;
}


void __fastcall Guardian::registerLoopingSounds(Guardian *this)
{
  Guardian::registerLoopingSounds(this);
}


signed int __fastcall Guardian::getExperienceReward(Guardian *this)
{
  signed int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 861);
  result = 10;
  if ( v1 < 1 )
    result = 0;
  return result;
}


void __fastcall Guardian::addAdditionalSaveData(Guardian *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  Guardian *v3; // r5@1
  char v4; // r0@1
  void *v5; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  Monster::addAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v8, "Elder");
  v4 = Entity::getStatusFlag((int)v3, 31);
  CompoundTag::putBoolean((int)v2, (const void **)&v8, v4);
  v5 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
}


int __fastcall Guardian::onSizeUpdated(int result)
{
  __asm
  {
    VMOV.F32        S0, #0.5
    VLDR            S4, [R0,#0x134]
    VLDR            S2, =0.85
    VLDR            S6, =0.9
    VMUL.F32        S2, S4, S2
  }
  *(_DWORD *)(result + 364) = 0;
    VMUL.F32        S0, S4, S0
    VMUL.F32        S4, S4, S6
    VSTR            S2, [R0,#0x170]
  *(_DWORD *)(result + 372) = 0;
  *(_DWORD *)(result + 376) = 0;
  __asm { VSTR            S0, [R0,#0x17C] }
  *(_DWORD *)(result + 384) = 0;
  *(_DWORD *)(result + 388) = 0;
  __asm { VSTR            S4, [R0,#0x188] }
  *(_DWORD *)(result + 396) = 0;
  return result;
}


signed int __fastcall Guardian::getAmbientSoundPostponeTicks(Guardian *this)
{
  signed int result; // r0@2
  float v6; // [sp+4h] [bp-Ch]@1

  v6 = 0.0;
  if ( Entity::getAmbientSoundIntervalMin(this, &v6) == 1 )
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
    result = 160;
  return result;
}


int __fastcall Guardian::getWalkTargetValue(Guardian *this, const BlockPos *a2)
{
  const BlockPos *v2; // r4@1
  Entity *v3; // r5@1
  BlockSource *v4; // r0@1
  int v5; // r6@1
  signed int v6; // r6@1
  BlockSource *v7; // r0@2
  int result; // r0@4
  int v15; // [sp+0h] [bp-38h]@1

  v2 = a2;
  v3 = this;
  v4 = (BlockSource *)Entity::getRegion(this);
  v5 = BlockSource::getMaterial(v4, v2);
  Material::Material((int)&v15, 5, 0, 0);
  v6 = Material::operator==(v5, (int)&v15);
  Material::~Material((Material *)&v15);
  if ( v6 == 1 )
  {
    v7 = (BlockSource *)Entity::getRegion(v3);
    _R0 = BlockSource::getBrightness(v7, v2);
    __asm
    {
      VMOV.F32        S0, #9.5
      VMOV            S2, R0
      VADD.F32        S0, S2, S0
    }
  }
  else
    _R0 = Monster::_getWalkTargetValue(v3, v2);
    __asm { VMOV            S0, R0 }
  __asm { VMOV            R0, S0 }
  return result;
}


int __fastcall Guardian::getSpikesAnimation(Guardian *this, float _R1)
{
  int result; // r0@1

  __asm { VMOV            S4, R1 }
  _R2 = (char *)this + 4348;
  _R0 = (char *)this + 4352;
  __asm
  {
    VLDR            S0, [R2]
    VLDR            S2, [R0]
    VSUB.F32        S0, S0, S2
    VMUL.F32        S0, S0, S4
    VADD.F32        S0, S0, S2
    VMOV            R0, S0
  }
  return result;
}


int __fastcall Guardian::getTailAnimation(Guardian *this, float _R1)
{
  int result; // r0@1

  _R2 = (char *)this + 4340;
  _R0 = (char *)this + 4336;
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


signed int __fastcall Guardian::isDarkEnoughToSpawn(Guardian *this)
{
  return 1;
}


signed int __fastcall Guardian::_hurt(Guardian *this, const EntityDamageSource *a2, int a3, int a4, bool a5)
{
  int v5; // r8@1
  int v6; // r5@1
  EntityDamageSource *v7; // r6@1
  Entity *v8; // r7@1
  int v9; // r4@1
  int v10; // r1@1
  Entity *v11; // r4@1
  int v12; // r0@2
  bool v13; // zf@2
  char v15; // [sp+8h] [bp-30h]@8
  unsigned int v16; // [sp+10h] [bp-28h]@1
  unsigned int v17; // [sp+14h] [bp-24h]@1

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = this;
  v9 = Entity::getLevel(this);
  (*(void (__fastcall **)(unsigned int *, EntityDamageSource *))(*(_DWORD *)v7 + 32))(&v16, v7);
  v11 = (Entity *)Level::fetchEntity(v9, v10, v16, v17, 0);
  if ( !Entity::isMoving(v8) )
  {
    v12 = EntityDamageSource::getCause(v7);
    v13 = v11 == 0;
    if ( v11 )
      v13 = v12 == 14;
    if ( !v13
      && Entity::hasCategory((int)v11, 2) == 1
      && EntityDamageSource::getCause(v7) != 10
      && EntityDamageSource::getCause(v7) != 3 )
    {
      EntityDamageSource::EntityDamageSource((int)&v15, 18);
      Entity::hurt(v11, (const EntityDamageSource *)&v15, 2, 1, 0);
      EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v15);
    }
  }
  return Monster::_hurt(v8, v7, v6, v5, a5);
}


void __fastcall Guardian::~Guardian(Guardian *this)
{
  Guardian::~Guardian(this);
}


void __fastcall Guardian::registerLoopingSounds(Guardian *this)
{
  Guardian *v1; // r4@1
  int v2; // r0@1
  int v3; // r5@1
  int v4; // r3@1
  int v5; // r2@1
  int (__fastcall *v6)(int, int *, _DWORD **); // r6@1
  _DWORD *v7; // r0@1
  __int64 v8; // r1@1
  __int64 v9; // r0@1
  void *v10; // r0@3
  unsigned int *v11; // r2@5
  signed int v12; // r1@7
  _DWORD *v13; // [sp+4h] [bp-2Ch]@1
  __int64 v14; // [sp+Ch] [bp-24h]@1
  int v15; // [sp+18h] [bp-18h]@1

  v1 = this;
  v2 = Entity::getLevel(this);
  v4 = *((_DWORD *)v1 + 1097);
  v5 = *((_DWORD *)v1 + 1096);
  v3 = *(_DWORD *)(v2 + 60);
  (*(void (**)(void))(*(_DWORD *)v3 + 52))();
  v6 = *(int (__fastcall **)(int, int *, _DWORD **))(*(_DWORD *)v3 + 48);
  sub_21E94B4((void **)&v15, "mob.guardian.attack_loop");
  v7 = operator new(4u);
  LODWORD(v8) = sub_175A3C4;
  *v7 = v1;
  HIDWORD(v8) = sub_175A31C;
  v13 = v7;
  v14 = v8;
  LODWORD(v9) = v6(v3, &v15, &v13);
  *((_QWORD *)v1 + 548) = v9;
  if ( (_DWORD)v14 )
    ((void (*)(void))v14)();
  v10 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v15 - 4);
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
      j_j_j_j__ZdlPv_9(v10);
  }
}


void __fastcall Guardian::readAdditionalSaveData(Guardian *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  Entity *v3; // r7@1
  signed int v4; // r6@1
  void *v5; // r0@1
  int v6; // r0@3
  void *v7; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  unsigned int *v10; // r2@13
  signed int v11; // r1@15
  int v12; // [sp+8h] [bp-30h]@3
  int v13; // [sp+10h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  Monster::readAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v13, "Elder");
  v4 = CompoundTag::contains((int)v2, (const void **)&v13);
  v5 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  if ( v4 == 1 )
    sub_21E94B4((void **)&v12, "Elder");
    v6 = CompoundTag::getBoolean((int)v2, (const void **)&v12);
    Entity::setStatusFlag((int)v3, 31, v6);
    Entity::setPersistent(v3);
    v7 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v12 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
}


void __fastcall Guardian::reloadHardcoded(Guardian *this, int a2)
{
  if ( a2 != 5 && !*((_BYTE *)this + 3081) )
    j_j_j__ZN8Guardian21registerLoopingSoundsEv(this);
}


void __fastcall Guardian::~Guardian(Guardian *this)
{
  Guardian *v1; // r0@1

  v1 = Guardian::~Guardian(this);
  j_j_j__ZdlPv_6((void *)v1);
}
