

signed int __fastcall RandomPos::getPosAvoid(RandomPos *this, Vec3 *a2, Mob *a3, int a4, int a5, const Vec3 *a6)
{
  Vec3 *v6; // r6@1
  RandomPos *v7; // r7@1
  int v8; // r4@1
  Mob *v9; // r5@1
  Vec3 *v17; // [sp+4h] [bp-24h]@0
  float v18; // [sp+8h] [bp-20h]@1

  v6 = a2;
  v7 = this;
  v8 = a4;
  v9 = a3;
  _R0 = (*(int (__fastcall **)(Vec3 *))(*(_DWORD *)a2 + 52))(a2);
  _R1 = a5;
  __asm
  {
    VLDR            S0, [R0]
    VLDR            S2, [R0,#4]
    VLDR            S4, [R0,#8]
    VLDR            S6, [R1]
    VLDR            S8, [R1,#4]
    VLDR            S10, [R1,#8]
    VSUB.F32        S0, S0, S6
    VSUB.F32        S2, S2, S8
    VSUB.F32        S4, S4, S10
    VSTR            S0, [SP,#0x28+var_20]
    VSTR            S2, [SP,#0x28+var_1C]
    VSTR            S4, [SP,#0x28+var_18]
  }
  return j_RandomPos::generateRandomPos(v7, v6, v9, v8, (int)&v18, v17);
}


signed int __fastcall RandomPos::snapToGround(RandomPos *this, BlockPos *a2, const Mob *a3, int a4)
{
  RandomPos *v5; // r10@1
  const Mob *v6; // r7@1
  BlockSource *v7; // r5@1
  _BOOL4 v8; // r8@1
  _BOOL4 v9; // r0@1
  char v10; // r6@1
  int v15; // r4@3
  _BOOL4 v16; // r0@4
  int v17; // r1@4
  int v19; // r0@9
  int v21; // r4@9
  _BOOL4 v22; // r7@10
  bool v23; // zf@11
  int v24; // r0@15
  int v26; // [sp+4h] [bp-3Ch]@1
  int v27; // [sp+8h] [bp-38h]@1
  int v28; // [sp+Ch] [bp-34h]@1
  int v29; // [sp+10h] [bp-30h]@1
  int v30; // [sp+14h] [bp-2Ch]@1
  int v31; // [sp+18h] [bp-28h]@1

  _R9 = a2;
  v5 = this;
  v6 = a3;
  v7 = (BlockSource *)j_Entity::getRegion(a2);
  v29 = *(_DWORD *)v5;
  v30 = *((_DWORD *)v5 + 1);
  v31 = *((_DWORD *)v5 + 2);
  v8 = j_BlockSource::isSolidBlockingBlock(v7, (const BlockPos *)&v29);
  v26 = v29;
  v27 = v30 + 1;
  v28 = v31;
  v9 = j_BlockSource::isSolidBlockingBlock(v7, (const BlockPos *)&v26);
  v10 = v9;
  if ( !v9 && !v8 != 1 )
    return 1;
  __asm
  {
    VLDR            S0, [R9,#0x4C]
    VCVTR.S32.F32   S2, S0
    VMOV            R1, S2
  }
  v15 = _R1 - (_DWORD)v6;
  if ( v30 >= _R1 - (signed int)v6 )
    while ( 1 )
    {
      v16 = j_BlockSource::isSolidBlockingBlock(v7, (const BlockPos *)&v29);
      v17 = v30;
      _ZF = (v10 & 1) == 0;
      if ( !(v10 & 1) )
        _ZF = v16 == 1;
      if ( _ZF )
        break;
      v10 = v16;
      --v30;
      if ( v17 <= v15 )
      {
        __asm { VLDR            S0, [R9,#0x4C] }
        goto LABEL_9;
      }
    }
    v24 = v30 + 1;
LABEL_17:
    *((_DWORD *)v5 + 1) = v24;
LABEL_9:
  v19 = *((_DWORD *)v5 + 1);
  __asm { VCVTR.S32.F32   S0, S0 }
  __asm { VMOV            R1, S0 }
  v21 = (int)v6 + _R1;
  while ( 1 )
    v22 = v8;
    if ( v19 >= v21 )
      return 0;
    v30 = v19 + 1;
    v8 = j_BlockSource::isSolidBlockingBlock(v7, (const BlockPos *)&v29);
    v19 = v30;
    v23 = v8 == 0;
    if ( !v8 )
      v23 = !v22 == 0;
    if ( v23 )
      v24 = v30 + 1;
      goto LABEL_17;
}


signed int __fastcall RandomPos::getPos(RandomPos *this, Vec3 *a2, Mob *a3, int a4, int a5)
{
  Vec3 *v6; // [sp+4h] [bp-Ch]@0

  return j_RandomPos::generateRandomPos(this, a2, a3, a4, 0, v6);
}


signed int __fastcall RandomPos::getPosTowards(RandomPos *this, Vec3 *a2, Mob *a3, int a4, int a5, const Vec3 *a6)
{
  Vec3 *v6; // r6@1
  RandomPos *v7; // r7@1
  int v8; // r4@1
  Mob *v9; // r5@1
  Vec3 *v17; // [sp+4h] [bp-24h]@0
  float v18; // [sp+8h] [bp-20h]@1

  v6 = a2;
  v7 = this;
  v8 = a4;
  v9 = a3;
  _R0 = (*(int (__fastcall **)(Vec3 *))(*(_DWORD *)a2 + 52))(a2);
  _R1 = a5;
  __asm
  {
    VLDR            S0, [R0]
    VLDR            S2, [R0,#4]
    VLDR            S4, [R0,#8]
    VLDR            S6, [R1]
    VLDR            S8, [R1,#4]
    VLDR            S10, [R1,#8]
    VSUB.F32        S0, S6, S0
    VSUB.F32        S2, S8, S2
    VSUB.F32        S4, S10, S4
    VSTR            S0, [SP,#0x28+var_20]
    VSTR            S2, [SP,#0x28+var_1C]
    VSTR            S4, [SP,#0x28+var_18]
  }
  return j_RandomPos::generateRandomPos(v7, v6, v9, v8, (int)&v18, v17);
}


signed int __fastcall RandomPos::generateRandomPos(RandomPos *this, Vec3 *a2, Mob *a3, int a4, int a5, Vec3 *a6)
{
  RandomPos *v7; // r4@1
  int v8; // r8@1
  signed int v10; // r5@1
  int v11; // r0@3
  signed int v21; // r11@5
  unsigned int v22; // r1@7
  unsigned int v24; // r1@10
  float v25; // r9@12
  unsigned int v26; // r1@13
  signed int v28; // r0@17
  unsigned int v29; // r1@17
  unsigned int v30; // r1@20
  int v31; // r0@30
  float v32; // r1@30
  int v33; // r0@30
  float v34; // r1@30
  int v35; // r0@30
  int v36; // r3@31
  char v39; // [sp+8h] [bp-B8h]@5
  int v40; // [sp+Ch] [bp-B4h]@2
  unsigned int v41; // [sp+10h] [bp-B0h]@5
  signed int v42; // [sp+14h] [bp-ACh]@5
  unsigned int v43; // [sp+1Ch] [bp-A4h]@5
  unsigned int v44; // [sp+20h] [bp-A0h]@5
  int v45; // [sp+24h] [bp-9Ch]@41
  int v46; // [sp+28h] [bp-98h]@41
  int v47; // [sp+2Ch] [bp-94h]@41
  float v48; // [sp+30h] [bp-90h]@36
  float v49; // [sp+34h] [bp-8Ch]@36
  int v50; // [sp+38h] [bp-88h]@36
  float v51; // [sp+3Ch] [bp-84h]@19
  float v53; // [sp+48h] [bp-78h]@15
  float v54; // [sp+4Ch] [bp-74h]@15
  int v55; // [sp+50h] [bp-70h]@15
  char v56; // [sp+54h] [bp-6Ch]@3
  int v57; // [sp+58h] [bp-68h]@3
  int v58; // [sp+5Ch] [bp-64h]@3
  int v59; // [sp+60h] [bp-60h]@3
  int v60; // [sp+64h] [bp-5Ch]@3
  int v61; // [sp+68h] [bp-58h]@3
  float v62; // [sp+6Ch] [bp-54h]@2
  float v63; // [sp+70h] [bp-50h]@2
  int v64; // [sp+74h] [bp-4Ch]@2

  _R7 = a2;
  v7 = this;
  v8 = a4;
  _R6 = (signed int)a3;
  v10 = 0;
  if ( j_Mob::getNavigation(a2) )
  {
    v40 = j_Mob::getNavigation(_R7);
    v62 = 0.0;
    v63 = 0.0;
    v64 = 0;
    if ( j_Entity::hasRestriction(_R7) == 1 )
    {
      j_Entity::getRestrictCenter((Entity *)&v59, (int)_R7);
      v11 = (*(int (__fastcall **)(Vec3 *))(*(_DWORD *)_R7 + 52))(_R7);
      j_BlockPos::BlockPos((int)&v56, v11);
      __asm
      {
        VMOV.F32        S4, #4.0
        VMOV            S6, R6
      }
      _R0 = v59 - *(_DWORD *)&v56;
      __asm { VMOV            S0, R0 }
      _R0 = v60 - v57;
        VCVT.F32.S32    S0, S0
        VMOV            S2, R0
      _R0 = v61 - v58;
        VCVT.F32.S32    S2, S2
        VCVT.F32.S32    S16, S6
        VMOV            S6, R0
        VMUL.F32        S0, S0, S0
        VCVT.F32.S32    S18, S6
        VMUL.F32        S20, S2, S2
        VADD.F32        S22, S0, S4
      _R0 = j_Entity::getRestrictRadius(_R7);
      v10 = 0;
        VMUL.F32        S2, S18, S18
        VADD.F32        S0, S0, S16
        VADD.F32        S4, S22, S20
        VADD.F32        S2, S4, S2
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        v10 = 1;
    }
    v42 = v10;
    v43 = _R6 + 1;
    v44 = 2 * _R6;
    _R5 = a5;
    v21 = 10;
    __asm { VLDR            S16, =-99999.0 }
    v41 = _R6 / 2;
    v39 = 0;
    do
      if ( _R6 )
        v22 = j_Random::_genRandInt32((Vec3 *)((char *)_R7 + 552)) % v44;
      else
        v22 = 0;
      _R10 = v22 - _R6;
      if ( v8 )
        v24 = j_Random::_genRandInt32((Vec3 *)((char *)_R7 + 552)) % (2 * v8);
        v24 = 0;
      LODWORD(v25) = v24 - v8;
        v26 = j_Random::_genRandInt32((Vec3 *)((char *)_R7 + 552)) % v44;
        v26 = 0;
      _R0 = v26 - _R6;
      LODWORD(v53) = v26 - _R6;
      v54 = v25;
      v55 = _R10;
      if ( !a5 )
        goto LABEL_46;
        VMOV            S0, R0
        VMOV            S2, R10
        VLDR            S4, [R5]
        VLDR            S6, [R5,#8]
        VMUL.F32        S0, S0, S4
        VMUL.F32        S2, S6, S2
        VADD.F32        S0, S2, S0
        VCMPE.F32       S0, #0.0
      if ( !(_NF ^ _VF) )
LABEL_46:
        v28 = j_Entity::hasRestriction(_R7);
        if ( _R6 >= 2 && v28 == 1 )
        {
          j_Entity::getRestrictCenter((Entity *)&v51, (int)_R7);
          __asm
          {
            VLDR            S0, [SP,#0xC0+var_84]
            VCVT.F32.S32    S18, S0
            VLDR            S20, [R7,#0x48]
          }
          if ( v43 >= 3 )
            v30 = j_Random::_genRandInt32((Vec3 *)((char *)_R7 + 552)) % v41;
          else
            v30 = 0;
            VCMPE.F32       S20, S18
            VMRS            APSR_nzcv, FPSCR
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            v30 = -v30;
          __asm { VLDR            S0, [SP,#0xC0+var_7C] }
          LODWORD(v53) += v30;
            VLDR            S20, [R7,#0x50]
            v29 = j_Random::_genRandInt32((Vec3 *)((char *)_R7 + 552)) % v41;
            v29 = 0;
            v29 = -v29;
          v55 += v29;
        }
        v31 = j_mce::Math::floor(*((mce::Math **)_R7 + 18), *(float *)&v29);
        v32 = v53;
        LODWORD(v53) += v31;
        v33 = j_mce::Math::floor(*((mce::Math **)_R7 + 19), v32);
        v34 = v54;
        LODWORD(v54) += v33;
        v35 = j_mce::Math::floor(*((mce::Math **)_R7 + 20), v34);
        v55 += v35;
        if ( (j_Entity::isSwimmer(_R7)
           || j_Entity::canFly(_R7)
           || j_RandomPos::snapToGround((RandomPos *)&v53, _R7, (const Mob *)v8, v36) == 1)
          && (v42 != 1 || j_Entity::isWithinRestriction(_R7, (const BlockPos *)&v53) == 1) )
          if ( j_Entity::isSwimmer(_R7) != 1
            || (v48 = v53, v49 = v54, v50 = v55, j_PathNavigation::isStableDestination(v40, (const BlockPos *)&v48) == 1) )
            _R0 = (*(int (__fastcall **)(Vec3 *, float *))(*(_DWORD *)_R7 + 1120))(_R7, &v53);
            __asm
            {
              VMOV            S0, R0
              VCMPE.F32       S0, S16
              VMRS            APSR_nzcv, FPSCR
            }
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              __asm { VMOV.F32        S16, S0 }
              v62 = v53;
              v63 = v54;
              v64 = v55;
              v39 = 1;
      --v21;
    while ( v21 );
    if ( v39 & 1 )
      j_Vec3::Vec3((int)&v45, (int)&v62);
      v10 = 1;
      *(_DWORD *)v7 = v45;
      *((_DWORD *)v7 + 1) = v46;
      *((_DWORD *)v7 + 2) = v47;
    else
  }
  return v10;
}
