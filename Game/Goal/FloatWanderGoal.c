

void __fastcall FloatWanderGoal::~FloatWanderGoal(FloatWanderGoal *this)
{
  FloatWanderGoal::~FloatWanderGoal(this);
}


void __fastcall FloatWanderGoal::~FloatWanderGoal(FloatWanderGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


unsigned int __fastcall FloatWanderGoal::canUse(FloatWanderGoal *this)
{
  FloatWanderGoal *v1; // r4@1
  unsigned int result; // r0@2

  v1 = this;
  if ( j_Mob::getNavigation(*((Mob **)this + 2)) )
    result = j_Entity::isResting(*((Entity **)v1 + 2)) ^ 1;
  else
    result = 0;
  return result;
}


int __fastcall FloatWanderGoal::tick(FloatWanderGoal *this)
{
  BlockSource *v6; // r6@1
  signed int v7; // r6@1
  AttributeInstance *v8; // r0@1
  signed int v10; // r2@4
  float *v11; // r1@4
  signed int v12; // r0@4
  int v13; // r9@8
  int v14; // r0@9
  int v17; // r2@12
  int v18; // r3@12
  int v19; // r7@12
  int v20; // r3@12
  int v21; // r6@12
  int v22; // r7@12
  BlockSource *v24; // r0@14
  __int64 v25; // kr00_8@14
  int v33; // r1@17
  int v34; // r6@18
  int v35; // r7@18
  int v36; // r5@18
  int v37; // r6@18
  int v38; // r7@18
  BlockSource *v40; // r0@20
  char *v41; // r0@20
  signed int v42; // r5@23
  BlockSource *v43; // r6@25
  int result; // r0@25
  int v48; // r0@29
  int v49; // r7@29
  void (__fastcall *v50)(int, char *, int); // r5@29
  int v51; // r0@29
  AttributeInstance *v53; // r0@29
  int v54; // [sp+0h] [bp-98h]@25
  char v55; // [sp+Ch] [bp-8Ch]@1
  int v56; // [sp+18h] [bp-80h]@12
  int v57; // [sp+1Ch] [bp-7Ch]@12
  int v58; // [sp+20h] [bp-78h]@12
  int v59; // [sp+24h] [bp-74h]@12
  int v60; // [sp+28h] [bp-70h]@12
  int v61; // [sp+2Ch] [bp-6Ch]@12
  int v62; // [sp+30h] [bp-68h]@12
  float v63; // [sp+34h] [bp-64h]@12

  _R4 = this;
  _R0 = (Entity *)*((_DWORD *)this + 2);
  __asm
  {
    VLDR            S16, [R4,#0xC]
    VLDR            S18, [R4,#0x10]
    VLDR            S24, [R4,#0x14]
    VLDR            S20, [R0,#0x48]
    VLDR            S26, [R0,#0x4C]
    VLDR            S28, [R0,#0x50]
  }
  v6 = (BlockSource *)j_Entity::getRegion(_R0);
  j_BlockPos::BlockPos((int)&v55, (int)_R4 + 12);
    VSUB.F32        S22, S16, S20
    VSUB.F32        S20, S18, S26
    VSUB.F32        S18, S24, S28
    VMUL.F32        S16, S22, S22
    VMUL.F32        S24, S20, S20
    VMUL.F32        S26, S18, S18
  v7 = j_BlockSource::isEmptyBlock(v6, (const BlockPos *)&v55);
    VADD.F32        S0, S24, S16
    VADD.F32        S24, S0, S26
  v8 = (AttributeInstance *)(*(int (**)(void))(**((_DWORD **)_R4 + 2) + 1000))();
  if ( v8 )
    _R0 = j_AttributeInstance::getCurrentValue(v8);
    __asm { VMOV            S0, R0 }
  else
    __asm
    {
      VLDR            S0, [R4,#0x1C]
      VLDR            S2, [R4,#0x20]
      VADD.F32        S0, S2, S0
    }
  __asm { VMOV.F32        S16, #1.0 }
  v10 = 0;
  __asm { VMUL.F32        S0, S0, S0 }
  v11 = (float *)*((_BYTE *)_R4 + 41);
  v12 = 0;
    VCMPE.F32       S24, S16
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S24, S0
  if ( !(_NF ^ _VF) )
    v10 = 1;
  __asm { VMRS            APSR_nzcv, FPSCR }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v12 = 1;
  v13 = v7 & v12 & v10;
  if ( *((_BYTE *)_R4 + 41) )
    v14 = *((_DWORD *)_R4 + 6);
    v11 = (float *)(v14 - 1);
    *((_DWORD *)_R4 + 6) = v14 - 1;
    if ( v14 <= 0 )
      _R0 = j_FloatRange::getValue((FloatWanderGoal *)((char *)_R4 + 44), (Random *)(*((_DWORD *)_R4 + 2) + 552));
      __asm { VMOV.F32        S0, #20.0 }
      v13 = 0;
      __asm
      {
        VMOV            S2, R0
        VMUL.F32        S0, S2, S0
        VCVTR.S32.F32   S0, S0
        VSTR            S0, [R4,#0x18]
      }
  if ( !*((_BYTE *)_R4 + 40) )
    goto LABEL_16;
  __asm { VDIV.F32        S0, S16, S24 }
  _R0 = *((_DWORD *)_R4 + 2);
    VLDR            S2, [R4,#0xC]
    VLDR            S8, [R0,#0x48]
    VLDR            S4, [R4,#0x10]
    VLDR            S10, [R0,#0x4C]
    VSUB.F32        S2, S2, S8
    VLDR            S12, [R0,#0x50]
  _R0 += 264;
    VLDR            S6, [R4,#0x14]
    VSUB.F32        S4, S4, S10
    VSUB.F32        S6, S6, S12
    VMUL.F32        S2, S2, S0
    VMUL.F32        S4, S4, S0
    VMUL.F32        S0, S6, S0
    VSTR            S2, [SP,#0x98+var_64]
    VSTR            S4, [SP,#0x98+var_60]
    VSTR            S0, [SP,#0x98+var_5C]
  v17 = *(_DWORD *)_R0;
  v18 = *(_DWORD *)(_R0 + 4);
  v19 = *(_DWORD *)(_R0 + 8);
  _R0 += 12;
  v56 = v17;
  v57 = v18;
  v58 = v19;
  v20 = *(_DWORD *)(_R0 + 4);
  v21 = *(_DWORD *)(_R0 + 8);
  v22 = *(_DWORD *)(_R0 + 12);
  v59 = *(_DWORD *)_R0;
  v60 = v20;
  v61 = v21;
  v62 = v22;
  v11 = &v63;
LABEL_16:
    if ( v13 )
LABEL_29:
      __asm { VMOV            R0, S24 }
      _R6 = j_mce::Math::sqrt(_R0, *(float *)&v11);
      v48 = j_Mob::getNavigation(*((Mob **)_R4 + 2));
      v49 = v48;
      v50 = *(void (__fastcall **)(int, char *, int))(*(_DWORD *)v48 + 12);
      v51 = (*(int (**)(void))(**((_DWORD **)_R4 + 2) + 820))();
      v50(v49, (char *)_R4 + 12, v51);
      _R4 = *((_DWORD *)_R4 + 2);
      v53 = (AttributeInstance *)(*(int (__fastcall **)(int, void *))(*(_DWORD *)_R4 + 1004))(
                                   _R4,
                                   &SharedAttributes::MOVEMENT_SPEED);
      result = j_AttributeInstance::getCurrentValue(v53);
        VLDR            S0, =0.1
        VMOV            S2, R6
        VMOV            S4, R0
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        __asm { VMOVLT.F32      S2, S0 }
        VLDR            S8, [R4,#0x6C]
        VDIV.F32        S0, S16, S2
        VMUL.F32        S2, S0, S22
        VMUL.F32        S6, S0, S20
        VMUL.F32        S0, S0, S18
        VMUL.F32        S2, S2, S4
        VMUL.F32        S6, S6, S4
        VMUL.F32        S0, S0, S4
        VADD.F32        S2, S8, S2
        VSTR            S2, [R4,#0x6C]
        VLDR            S2, [R4,#0x70]
        VADD.F32        S2, S2, S6
        VSTR            S2, [R4,#0x70]
        VLDR            S2, [R4,#0x74]
        VADD.F32        S0, S2, S0
        VSTR            S0, [R4,#0x74]
      return result;
    _R5 = 2;
    while ( 1 )
      j_AABB::move((AABB *)&v56, (const Vec3 *)&v63);
      v24 = (BlockSource *)j_Entity::getRegion(*((Entity **)_R4 + 2));
      v25 = *(_QWORD *)j_BlockSource::fetchAABBs(v24, (const AABB *)&v56, 1);
      v11 = (float *)v25;
      if ( (_DWORD)v25 != HIDWORD(v25) )
        break;
      __asm { VMOV            S0, R5 }
      ++_R5;
        VCVT.F32.S32    S0, S0
        VCMPE.F32       S0, S24
      if ( !(_NF ^ _VF) )
        goto LABEL_16;
  __asm { VLDR            S18, [R0,#0x48] }
  _R0 = j_Random::_genRandInt32((Random *)(_R0 + 552));
    VMOV            S0, R0
    VLDR            D10, =2.32830644e-10
    VMOV.F32        S22, #-1.0
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D10
    VCVT.F32.F64    S0, D0
    VADD.F32        S0, S0, S0
    VLDR            S2, [R4,#0x1C]
    VADD.F32        S0, S0, S22
    VMUL.F32        S0, S0, S2
    VADD.F32        S0, S0, S18
    VSTR            S0, [R4,#0xC]
  __asm { VLDR            S18, [R0,#0x4C] }
    VLDR            S4, [R4,#0x24]
    VLDR            S2, [R4,#0x20]
    VADD.F32        S4, S4, S18
    VADD.F32        S0, S4, S0
    VSTR            S0, [R4,#0x10]
  __asm { VLDR            S18, [R0,#0x50] }
    VSTR            S0, [R4,#0x14]
    VLDR            S6, [R0,#0x48]
    VLDR            S8, [R0,#0x4C]
    VSUB.F32        S22, S2, S6
    VLDR            S10, [R0,#0x50]
    VSUB.F32        S20, S4, S8
  v33 = *((_BYTE *)_R4 + 40);
    VSUB.F32        S18, S0, S10
    VMUL.F32        S0, S22, S22
    VMUL.F32        S2, S20, S20
    VMUL.F32        S4, S18, S18
    VADD.F32        S0, S2, S0
    VADD.F32        S24, S0, S4
  if ( _ZF )
    goto LABEL_23;
    VDIV.F32        S0, S16, S24
    VMUL.F32        S2, S22, S0
    VMUL.F32        S4, S20, S0
    VMUL.F32        S0, S18, S0
  v34 = *(_DWORD *)(_R0 + 268);
  v35 = *(_DWORD *)(_R0 + 272);
  v56 = *(_DWORD *)(_R0 + 264);
  v57 = v34;
  v58 = v35;
  v36 = *(_DWORD *)(_R0 + 280);
  v37 = *(_DWORD *)(_R0 + 284);
  v38 = *(_DWORD *)(_R0 + 288);
  v59 = *(_DWORD *)(_R0 + 276);
  v60 = v36;
  v61 = v37;
  v62 = v38;
LABEL_23:
    v42 = 1;
      v40 = (BlockSource *)j_Entity::getRegion(*((Entity **)_R4 + 2));
      v41 = j_BlockSource::fetchAABBs(v40, (const AABB *)&v56, 1);
      if ( (unsigned int)*(_QWORD *)v41 != *(_QWORD *)v41 >> 32 )
        _R0 = *((_DWORD *)_R4 + 2);
        goto LABEL_23;
    _R0 = *((_DWORD *)_R4 + 2);
    v42 = 0;
    *((_DWORD *)_R4 + 3) = *(_DWORD *)(_R0 + 72);
    *((_DWORD *)_R4 + 4) = *(_DWORD *)(_R0 + 76);
    *((_DWORD *)_R4 + 5) = *(_DWORD *)(_R0 + 80);
  v43 = (BlockSource *)j_Entity::getRegion((Entity *)_R0);
  j_BlockPos::BlockPos((int)&v54, (int)_R4 + 12);
  result = j_BlockSource::isEmptyBlock(v43, (const BlockPos *)&v54);
  _ZF = v42 == 1;
  if ( v42 == 1 )
    _ZF = result == 1;
    goto LABEL_29;
  return result;
}


signed int __fastcall FloatWanderGoal::_canReach(FloatWanderGoal *this, const Vec3 *_R1, float _R2)
{
  FloatWanderGoal *v7; // r4@1
  int v9; // r2@1
  int v10; // r3@1
  int v11; // r7@1
  int v12; // r3@1
  int v13; // r6@1
  int v14; // r7@1
  BlockSource *v16; // r0@3
  char *v17; // r0@3
  signed int result; // r0@5
  int v19; // [sp+0h] [bp-48h]@1
  int v20; // [sp+4h] [bp-44h]@1
  int v21; // [sp+8h] [bp-40h]@1
  int v22; // [sp+Ch] [bp-3Ch]@1
  int v23; // [sp+10h] [bp-38h]@1
  int v24; // [sp+14h] [bp-34h]@1
  int v25; // [sp+18h] [bp-30h]@1
  float v26; // [sp+1Ch] [bp-2Ch]@3

  __asm { VMOV.F32        S0, #1.0 }
  v7 = this;
  __asm { VMOV            S16, R2 }
  _R0 = *((_DWORD *)this + 2);
  __asm
  {
    VLDR            S4, [R1]
    VLDR            S6, [R1,#4]
    VLDR            S8, [R1,#8]
    VLDR            S10, [R0,#0x48]
    VLDR            S12, [R0,#0x4C]
    VDIV.F32        S2, S0, S16
    VLDR            S14, [R0,#0x50]
    VSUB.F32        S4, S4, S10
    VSUB.F32        S6, S6, S12
  }
  _R0 += 264;
    VSUB.F32        S8, S8, S14
    VCMPE.F32       S16, S0
    VMRS            APSR_nzcv, FPSCR
    VMUL.F32        S4, S4, S2
    VMUL.F32        S6, S6, S2
    VMUL.F32        S2, S8, S2
    VSTR            S4, [SP,#0x48+var_2C]
    VSTR            S6, [SP,#0x48+var_28]
    VSTR            S2, [SP,#0x48+var_24]
  v9 = *(_DWORD *)_R0;
  v10 = *(_DWORD *)(_R0 + 4);
  v11 = *(_DWORD *)(_R0 + 8);
  _R0 += 12;
  v19 = v9;
  v20 = v10;
  v21 = v11;
  v12 = *(_DWORD *)(_R0 + 4);
  v13 = *(_DWORD *)(_R0 + 8);
  v14 = *(_DWORD *)(_R0 + 12);
  v22 = *(_DWORD *)_R0;
  v23 = v12;
  v24 = v13;
  v25 = v14;
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    result = 1;
  else
    _R7 = 2;
    while ( 1 )
    {
      j_AABB::move((AABB *)&v19, (const Vec3 *)&v26);
      v16 = (BlockSource *)j_Entity::getRegion(*((Entity **)v7 + 2));
      v17 = j_BlockSource::fetchAABBs(v16, (const AABB *)&v19, 1);
      if ( (unsigned int)*(_QWORD *)v17 != *(_QWORD *)v17 >> 32 )
        break;
      __asm { VMOV            S0, R7 }
      ++_R7;
      __asm
      {
        VCVT.F32.S32    S0, S0
        VCMPE.F32       S0, S16
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !(_NF ^ _VF) )
        return 1;
    }
    result = 0;
  return result;
}


float __fastcall FloatWanderGoal::FloatWanderGoal(float a1, int a2, int a3, int a4, int a5, char a6, char a7, __int64 a8)
{
  int v10; // r7@1
  float v11; // r4@1
  int v12; // r0@1
  __int64 v17; // kr00_8@1
  int v18; // r0@1
  float result; // r0@1

  _R6 = a4;
  _R5 = a3;
  v10 = a2;
  v11 = a1;
  j_Goal::Goal((Goal *)LODWORD(a1));
  *(_DWORD *)LODWORD(v11) = &off_272561C;
  *(_DWORD *)(LODWORD(v11) + 8) = v10;
  v12 = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 52))(v10);
  __asm
  {
    VMOV            S2, R6
    VMOV            S4, R5
    VLDR            S0, [SP,#0x18+arg_0]
  }
  v17 = *(_QWORD *)v12;
  v18 = *(_DWORD *)(v12 + 8);
  *(_QWORD *)(LODWORD(v11) + 12) = v17;
  *(_DWORD *)(LODWORD(v11) + 20) = v18;
  *(_DWORD *)(LODWORD(v11) + 24) = 0;
  result = v11;
    VSTR            S4, [R4,#0x1C]
    VSTR            S2, [R4,#0x20]
    VSTR            S0, [R4,#0x24]
  *(_BYTE *)(LODWORD(v11) + 40) = a6;
  *(_BYTE *)(LODWORD(v11) + 41) = a7;
  *(_QWORD *)(LODWORD(v11) + 44) = a8;
  return result;
}
