

int __fastcall RopeSystem::_solveDistanceConstraint(RopeSystem *this, Vec3 *_R1, Vec3 *_R2, float _R3)
{
  int result; // r0@4

  __asm
  {
    VLDR            S6, [R2]
    VLDR            S0, [R1]
    VLDR            S8, [R2,#4]
    VLDR            S2, [R1,#4]
    VSUB.F32        S10, S0, S6
    VLDR            S14, [R2,#8]
    VSUB.F32        S12, S2, S8
    VLDR            S4, [R1,#8]
    VSUB.F32        S14, S4, S14
    VMUL.F32        S6, S10, S10
    VMUL.F32        S8, S12, S12
    VMUL.F32        S1, S14, S14
    VADD.F32        S6, S8, S6
    VMOV            S8, R3
    VADD.F32        S6, S6, S1
    VLDR            S1, =1.1921e-7
    VSQRT.F32       S6, S6
    VCMPE.F32       S6, S1
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    __asm { VMOV.F32        S10, #1.0 }
    _LR = unk_28224C4;
    _R12 = Vec3::UNIT_Y;
    _R3 = unk_28224C8;
  else
    __asm
    {
      VMOV.F32        S1, #1.0
      VMOV            R12, S10
      VMOV            LR, S12
      VMOV            R3, S14
      VDIV.F32        S10, S1, S6
    }
    VMOV.F32        S12, #0.5
    VSUB.F32        S6, S6, S8
    VMOV            S14, R3
    VMUL.F32        S8, S6, S12
    VMOV            S12, R12
    VMUL.F32        S8, S8, S10
    VLDR            S10, [R0,#0x50]
    VMOV            R0, S6
    VMOV            S10, LR
    VMUL.F32        S12, S8, S12
    VMUL.F32        S10, S8, S10
    VMUL.F32        S8, S8, S14
  result = _R0 & 0x7FFFFFFF;
    VSUB.F32        S0, S0, S12
    VSUB.F32        S2, S2, S10
    VSUB.F32        S4, S4, S8
    VSTR            S0, [R1]
    VSTR            S2, [R1,#4]
    VSTR            S4, [R1,#8]
    VLDR            S0, [R2]
    VADD.F32        S0, S0, S12
    VSTR            S0, [R2]
    VLDR            S0, [R2,#4]
    VADD.F32        S0, S0, S10
    VSTR            S0, [R2,#4]
    VLDR            S0, [R2,#8]
    VADD.F32        S0, S0, S8
    VSTR            S0, [R2,#8]
  return result;
}


int __fastcall RopeSystem::getPins(RopeSystem *this, Vec3 *a2, Vec3 *a3)
{
  int result; // r0@1

  *(_DWORD *)a2 = *((_DWORD *)this + 22);
  *((_DWORD *)a2 + 1) = *((_DWORD *)this + 23);
  *((_DWORD *)a2 + 2) = *((_DWORD *)this + 24);
  *(_DWORD *)a3 = *((_DWORD *)this + 25);
  *((_DWORD *)a3 + 1) = *((_DWORD *)this + 26);
  result = *((_DWORD *)this + 27);
  *((_DWORD *)a3 + 2) = result;
  return result;
}


int __fastcall RopeSystem::_initializePins(RopeSystem *this)
{
  int v12; // r0@4
  unsigned int v13; // r2@4
  int result; // r0@8
  int v19; // r1@9

  _R4 = this;
  _R0 = *((_DWORD *)this + 22);
  *((_DWORD *)_R4 + 38) = _R0;
  _R1 = *((_DWORD *)_R4 + 23);
  *((_DWORD *)_R4 + 39) = _R1;
  __asm { VMOV            S0, R0 }
  _R2 = *((_DWORD *)_R4 + 24);
  *((_DWORD *)_R4 + 40) = _R2;
  __asm { VMOV            S4, R1 }
  _R3 = *((_DWORD *)_R4 + 25);
  *((_DWORD *)_R4 + 41) = _R3;
  __asm { VMOV            S8, R2 }
  _R0 = *((_DWORD *)_R4 + 26);
  *((_DWORD *)_R4 + 42) = _R0;
  __asm { VMOV            S2, R3 }
  _R3 = *((_DWORD *)_R4 + 27);
  __asm { VMOV            S6, R0 }
  *((_DWORD *)_R4 + 43) = _R3;
  __asm
  {
    VSUB.F32        S16, S2, S0
    VLDR            S2, [R4,#0x7C]
    VMOV            S10, R3
    VLDR            S0, [R4,#0x38]
    VSUB.F32        S18, S6, S4
    VSUB.F32        S20, S10, S8
    VCMPE.F32       S2, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _ZF )
    __asm
    {
      VMUL.F32        S2, S16, S16
      VMUL.F32        S4, S18, S18
      VMUL.F32        S6, S20, S20
      VADD.F32        S2, S4, S2
      VLDR            S4, [R4,#0x44]
      VADD.F32        S2, S2, S6
      VSQRT.F32       S2, S2
    }
    VDIV.F32        S0, S2, S0
    VCVTR.U32.F32   S2, S0
    VSTR            S2, [R4,#0xB8]
  v12 = *((_DWORD *)_R4 + 5);
  __asm { VCVTR.U32.F32   S0, S0 }
  v13 = -1227133513 * ((*((_DWORD *)_R4 + 6) - v12) >> 2);
  __asm { VMOV            R1, S0 }
  if ( _R1 <= v13 )
    if ( _R1 < v13 )
      *((_DWORD *)_R4 + 6) = v12 + 28 * _R1;
  else
    std::vector<RopeNode,std::allocator<RopeNode>>::_M_default_append((int)_R4 + 20, _R1 - v13);
    _R1 = *((_DWORD *)_R4 + 46);
  RopePoints::reserve((RopeSystem *)((char *)_R4 + 4), _R1);
  *((_DWORD *)_R4 + 59) = -1;
  *((_DWORD *)_R4 + 44) = -1;
  *((_DWORD *)_R4 + 47) = 0;
  result = *((_DWORD *)_R4 + 46);
  if ( result )
    _R1 = result - 1;
    _R2 = 0;
      VMOV            S0, R1
      VCVT.F32.U32    S0, S0
    _R3 = &Vec3::UNIT_Y;
    v19 = *((_DWORD *)_R4 + 5) + 12;
    do
      __asm { VMOV            S2, R2 }
      ++_R2;
      __asm
      {
        VCVT.F32.U32    S2, S2
        VLDR            S8, [R4,#0x58]
        VLDR            S10, [R4,#0x5C]
        VLDR            S12, [R4,#0x60]
        VDIV.F32        S2, S2, S0
        VMUL.F32        S4, S2, S16
        VMUL.F32        S6, S2, S18
        VMUL.F32        S2, S2, S20
        VADD.F32        S4, S8, S4
        VLDR            S8, [R3]
        VADD.F32        S6, S10, S6
        VLDR            S10, [R3,#4]
        VADD.F32        S2, S12, S2
        VLDR            S12, [R3,#8]
        VADD.F32        S4, S4, S8
        VADD.F32        S6, S6, S10
        VADD.F32        S2, S2, S12
        VSTR            S4, [R1,#-0xC]
        VSTR            S6, [R1,#-8]
        VSTR            S2, [R1,#-4]
        VSTR            S4, [R1]
        VSTR            S6, [R1,#4]
        VSTR            S2, [R1,#8]
      }
      *(_BYTE *)(v19 + 12) = -1;
      v19 += 28;
    while ( !_CF );
  return result;
}


void __fastcall RopeSystem::_prepareAABBBuckets(RopeSystem *this)
{
  int v2; // r5@2 OVERLAPPED
  int v3; // r6@2 OVERLAPPED
  int v4; // r7@3
  void *v5; // r0@4
  __int64 v10; // r0@12
  RopeSystem *v11; // r5@13
  int *v12; // r11@13
  unsigned int v13; // r8@13
  AABB *v14; // r6@14
  char v15; // r2@14
  int v16; // r10@14
  int v18; // r0@21
  __int64 v19; // kr00_8@25
  unsigned int v20; // r2@25
  int v21; // r3@26
  int v22; // r11@29
  int v23; // r5@30
  void *v24; // r0@31
  int v25; // r7@35
  int v26; // r0@39
  int v27; // r4@39
  unsigned int v28; // r2@39
  int v29; // r5@42
  int v30; // r6@43
  void *v31; // r0@44
  int v32; // [sp+10h] [bp-98h]@36
  signed int v33; // [sp+14h] [bp-94h]@36
  int v34; // [sp+18h] [bp-90h]@36
  int v35; // [sp+1Ch] [bp-8Ch]@36
  int v36; // [sp+20h] [bp-88h]@36
  int v37; // [sp+24h] [bp-84h]@36
  int v38; // [sp+28h] [bp-80h]@36
  int v39; // [sp+2Ch] [bp-7Ch]@36
  int v40; // [sp+30h] [bp-78h]@36
  char v41; // [sp+34h] [bp-74h]@36
  float v42; // [sp+38h] [bp-70h]@19
  float v43; // [sp+44h] [bp-64h]@8
  float v44; // [sp+48h] [bp-60h]@17
  int v45; // [sp+4Ch] [bp-5Ch]@17
  float v46; // [sp+50h] [bp-58h]@17
  float v47; // [sp+54h] [bp-54h]@17
  int v48; // [sp+58h] [bp-50h]@17

  _R4 = this;
  if ( !(*((_BYTE *)this + 120) & 8) )
  {
    *(_QWORD *)&v2 = *((_QWORD *)this + 4);
    if ( v3 != v2 )
    {
      v4 = v2;
      do
      {
        v5 = *(void **)(v4 + 32);
        if ( v5 )
          j_operator delete(v5);
        v4 += 48;
      }
      while ( v3 != v4 );
    }
    *((_DWORD *)_R4 + 9) = v2;
    return;
  }
  j_AABB::AABB((AABB *)&v43);
  __asm
    VLDR            S0, [R4,#0xD4]
    VMOV.F32        S16, #1.0
    VLDR            S12, [R4,#0x98]
    VLDR            S2, [R4,#0xD8]
    VLDR            S14, [R4,#0x9C]
    VSUB.F32        S0, S12, S0
    VLDR            S6, [R4,#0xE0]
    VLDR            S7, [R4,#0xA4]
    VSUB.F32        S2, S14, S2
    VLDR            S8, [R4,#0xE4]
    VLDR            S3, [R4,#0xA8]
    VSUB.F32        S6, S7, S6
    VLDR            S4, [R4,#0xDC]
    VSUB.F32        S8, S3, S8
    VLDR            S1, [R4,#0xA0]
    VLDR            S10, [R4,#0xE8]
    VMUL.F32        S0, S0, S0
    VLDR            S5, [R4,#0xAC]
    VSUB.F32        S4, S1, S4
    VMUL.F32        S2, S2, S2
    VSUB.F32        S10, S5, S10
    VMUL.F32        S6, S6, S6
    VMUL.F32        S8, S8, S8
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VMUL.F32        S10, S10, S10
    VADD.F32        S6, S8, S6
    VADD.F32        S0, S0, S4
    VADD.F32        S2, S6, S10
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S0, S2 }
    VSQRT.F32       S0, S0
    VCMPE.F32       S0, S16
    __asm { VMOVLT.F32      S16, S0 }
  v10 = *(_QWORD *)((char *)_R4 + 20);
  if ( HIDWORD(v10) != (_DWORD)v10 )
    __asm { VLDR            S18, =0.0 }
    v12 = (int *)((char *)_R4 + 36);
    v11 = (RopeSystem *)((char *)_R4 + 32);
    __asm { VMOV.F32        S22, S18 }
    v14 = (AABB *)&v43;
    __asm { VLDR            S20, =0.95 }
    v13 = 0;
    v15 = 1;
    v16 = 0;
    while ( 1 )
      _R3 = v10 + 28 * v16;
      if ( v15 & 1 )
        v46 = *(float *)_R3;
        v47 = *(float *)(_R3 + 4);
        v48 = *(_DWORD *)(_R3 + 8);
        v43 = v46;
        v44 = v47;
        v45 = v48;
      else
        __asm
        {
          VLDR            S0, [R3]
          VLDR            S2, [R3,#4]
          VLDR            S4, [R3,#8]
          VADD.F32        S0, S0, S0
          VADD.F32        S2, S2, S2
          VLDR            S6, [R3,#0xC]
          VADD.F32        S4, S4, S4
          VLDR            S8, [R3,#0x10]
          VLDR            S10, [R3,#0x14]
          VSUB.F32        S0, S0, S6
          VSUB.F32        S2, S2, S8
          VSUB.F32        S4, S4, S10
          VSTR            S0, [SP,#0xA8+var_70]
          VSTR            S2, [SP,#0xA8+var_6C]
          VSTR            S4, [SP,#0xA8+var_68]
        }
        j_AABB::expand(v14, (const Vec3 *)&v42);
          VCMPE.F32       S22, S20
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          v18 = *((_DWORD *)_R4 + 44);
        else
          v18 = v16 + 2;
          if ( v16 + 2 != *((_DWORD *)_R4 + 44) )
            goto LABEL_25;
        if ( v16 + 1 == v18
          || (v10 = *(_QWORD *)((char *)_R4 + 20), v16 + 1 == -1227133513 * ((HIDWORD(v10) - (signed int)v10) >> 2)) )
LABEL_25:
          __asm
          {
            VLDR            S0, [R4,#0x3C]
            VLDR            S6, [SP,#0xA8+var_58]
            VADD.F32        S0, S0, S0
            VLDR            S2, [R4,#0x40]
            VLDR            S4, [SP,#0xA8+var_60]
            VADD.F32        S2, S4, S2
            VADD.F32        S0, S0, S16
            VADD.F32        S6, S0, S6
            VSUB.F32        S2, S2, S0
            VSTR            S6, [SP,#0xA8+var_58]
            VLDR            S6, [SP,#0xA8+var_54]
            VADD.F32        S6, S6, S0
            VSTR            S6, [SP,#0xA8+var_54]
            VLDR            S6, [SP,#0xA8+var_50]
            VSTR            S6, [SP,#0xA8+var_50]
            VLDR            S4, [SP,#0xA8+var_64]
            VSUB.F32        S4, S4, S0
            VSTR            S4, [SP,#0xA8+var_64]
            VSTR            S2, [SP,#0xA8+var_60]
            VLDR            S2, [SP,#0xA8+var_5C]
            VSUB.F32        S0, S2, S0
            VSTR            S0, [SP,#0xA8+var_5C]
          }
          v19 = *((_QWORD *)_R4 + 4);
          v20 = -1431655765 * ((HIDWORD(v19) - (signed int)v19) >> 4);
          if ( v20 <= v13 )
            v21 = v13 + 1;
            if ( v13 + 1 <= v20 )
            {
              if ( v13 + 1 < v20 )
              {
                v22 = v19 + 48 * v21;
                if ( HIDWORD(v19) != v22 )
                {
                  v23 = v19 + 48 * v13;
                  do
                  {
                    v24 = *(void **)(v23 + 80);
                    if ( v24 )
                      j_operator delete(v24);
                    v23 += 48;
                  }
                  while ( HIDWORD(v19) - 48 != v23 );
                }
                v14 = (AABB *)&v43;
                v11 = (RopeSystem *)((char *)_R4 + 32);
                *((_DWORD *)_R4 + 9) = v22;
                v12 = (int *)((char *)_R4 + 36);
              }
            }
            else
              j_std::vector<AABBBucket,std::allocator<AABBBucket>>::_M_default_append((int)v11, v21 - v20);
          v25 = *(_DWORD *)v11 + 48 * v13;
          if ( !j_AABB::contains((AABB *)v25, v14) )
            j_AABBBucket::markDirty((AABBBucket *)v25);
            v32 = 1036831949;
            v33 = 1036831949;
            v34 = 1036831949;
            j_AABB::grow((AABB *)&v35, v14, (int)&v32);
            *(_DWORD *)v25 = v35;
            *(_DWORD *)(v25 + 4) = v36;
            *(_DWORD *)(v25 + 8) = v37;
            *(_DWORD *)(v25 + 12) = v38;
            *(_DWORD *)(v25 + 16) = v39;
            *(_DWORD *)(v25 + 20) = v40;
            *(_BYTE *)(v25 + 24) = v41;
          v10 = *(_QWORD *)((char *)_R4 + 20);
          ++v13;
          v15 = 1;
          __asm { VMOV.F32        S22, S18 }
          goto LABEL_38;
          VLDR            S0, [R4,#0x38]
          VADD.F32        S22, S0, S22
      v15 = 0;
LABEL_38:
      if ( ++v16 >= (unsigned int)(-1227133513 * ((HIDWORD(v10) - (signed int)v10) >> 2)) )
        goto LABEL_39;
  v11 = (RopeSystem *)((char *)_R4 + 32);
  v12 = (int *)((char *)_R4 + 36);
  v13 = 0;
LABEL_39:
  v26 = *(_DWORD *)v11;
  v27 = *v12;
  v28 = -1431655765 * ((*v12 - *(_DWORD *)v11) >> 4);
  if ( v13 < v28 )
    if ( v13 <= v28 )
      v29 = v26 + 48 * v13;
      if ( v27 != v29 )
        v30 = v26 + 48 * v13;
        do
          v31 = *(void **)(v30 + 32);
          if ( v31 )
            j_operator delete(v31);
          v30 += 48;
        while ( v27 != v30 );
      *v12 = v29;
    else
      j_std::vector<AABBBucket,std::allocator<AABBBucket>>::_M_default_append((int)v11, v13 - v28);
}


int __fastcall RopeSystem::_tickWaves(int result)
{
  int v1; // r9@1 OVERLAPPED
  int v2; // r10@1 OVERLAPPED
  int v3; // r1@2
  int v4; // r4@2
  int v9; // r11@2
  unsigned int v10; // r2@2
  int v12; // r5@3
  unsigned int v13; // r1@3
  _DWORD *v14; // r5@3
  unsigned int v15; // t1@3
  char v17; // r8@4
  _DWORD *v20; // r1@6
  int *v22; // r7@12
  int v24; // r1@19
  int v25; // r1@19
  int v26; // r4@19
  int v27; // r5@19
  int v28; // r6@19
  int v29; // r7@19
  int v30; // [sp+4h] [bp-30h]@2
  float v31; // [sp+8h] [bp-2Ch]@13
  int v32; // [sp+Ch] [bp-28h]@12

  *(_QWORD *)&v1 = *(_QWORD *)(result + 44);
  if ( v2 != v1 )
  {
    v3 = *(_QWORD *)(result + 20) >> 32;
    v4 = *(_QWORD *)(result + 20);
    __asm
    {
      VMOV.F32        S2, #1.0
      VLDR            S0, [R0,#0x38]
    }
    v9 = 0;
    v10 = -1227133513 * ((v3 - v4) >> 2);
    v30 = -1227133513 * ((v3 - v4) >> 2);
    while ( 2 )
      _R3 = v1 + 32 * v9;
      v12 = v1 + 32 * v9;
      v15 = *(_DWORD *)(v12 + 20);
      v14 = (_DWORD *)(v12 + 20);
      v13 = v15;
      if ( v15 >= v10 )
      {
        _R1 = _R3 + 8;
        _R2 = _R3 + 4;
        v17 = 1;
      }
      else
        __asm { VLDR            S4, [R3] }
        v17 = 0;
        _R1 = v4 + 28 * v13;
        __asm
        {
          VLDR            S6, [R1]
          VADD.F32        S4, S6, S4
          VSTR            S4, [R1]
          VLDR            S4, [R3,#4]
          VLDR            S6, [R1,#4]
          VSTR            S4, [R1,#4]
          VLDR            S4, [R3,#8]
          VLDR            S6, [R1,#8]
          VSTR            S4, [R1,#8]
        }
      __asm
        VLDR            S4, [R3,#0x10]
        VLDR            S6, [R3]
        VSUB.F32        S4, S2, S4
        VMUL.F32        S6, S6, S4
        VSTR            S6, [R3]
        VLDR            S6, [R2]
        VSTR            S6, [R2]
        VLDR            S6, [R1]
        VMUL.F32        S4, S6, S4
        VSTR            S4, [R1]
      v20 = (_DWORD *)(_R3 + 28);
        VLDR            S4, [R3,#0xC]
        VLDR            S6, [R3,#0x18]
        VADD.F32        S4, S6, S4
        VSTR            S4, [R3,#0x18]
      _R3 = (int *)(_R3 + 24);
      while ( 1 )
          VCMPE.F32       S4, S0
          VMRS            APSR_nzcv, FPSCR
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          break;
        if ( *v20 == 1 )
          --*v14;
        else if ( !*v20 )
          ++*v14;
          v4 = *(_QWORD *)(result + 20);
        v22 = &v32;
        v32 = 0;
          VLDR            S4, [R0,#0x38]
          VLDR            S6, [R3]
          VSUB.F32        S4, S6, S4
          VCMPE.F32       S4, #0.0
          VSTR            S4, [SP,#0x34+var_2C]
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          v22 = (int *)&v31;
        _R7 = *v22;
        *_R3 = _R7;
        __asm { VMOV            S4, R7 }
        if ( !_ZF )
          goto LABEL_19;
      if ( v17 & 1 )
LABEL_19:
        v24 = *(_DWORD *)(result + 44);
        *(_DWORD *)(v24 + 32 * v9) = *(_DWORD *)(v2 - 32);
        v25 = v24 + 32 * v9;
        *(_DWORD *)(v25 + 4) = *(_DWORD *)(v2 - 28);
        *(_DWORD *)(v25 + 8) = *(_DWORD *)(v2 - 24);
        v25 += 12;
        v26 = *(_DWORD *)(v2 - 16);
        v27 = *(_DWORD *)(v2 - 12);
        v28 = *(_DWORD *)(v2 - 8);
        v29 = *(_DWORD *)(v2 - 4);
        *(_DWORD *)v25 = *(_DWORD *)(v2 - 20);
        *(_DWORD *)(v25 + 4) = v26;
        *(_DWORD *)(v25 + 8) = v27;
        *(_DWORD *)(v25 + 12) = v28;
        *(_DWORD *)(v25 + 16) = v29;
        *(_DWORD *)(result + 48) -= 32;
        return result;
      v10 = v30;
      if ( ++v9 < (unsigned int)((v2 - v1) >> 5) )
        continue;
      break;
  }
  return result;
}


int __fastcall RopeSystem::addWave(__int64 a1, __int64 a2, int a3, int a4, int a5, int _3Ca, __int64 _3C, __int64 a6)
{
  int v8; // r2@3
  __int64 v9; // r4@4
  int v10; // r6@4
  __int64 v11; // r4@4
  int v12; // r6@4
  int v14; // [sp+0h] [bp-30h]@1
  __int64 v15; // [sp+4h] [bp-2Ch]@1
  int v16; // [sp+Ch] [bp-24h]@1
  int v17; // [sp+10h] [bp-20h]@1
  __int64 v18; // [sp+14h] [bp-1Ch]@1
  int v19; // [sp+1Ch] [bp-14h]@4

  v14 = HIDWORD(a1);
  v15 = a2;
  v16 = a3;
  v17 = a4;
  LODWORD(v18) = a5;
  *(__int64 *)((char *)&v18 + 4) = *(__int64 *)((char *)&_3C - 4);
  if ( (_DWORD)_3C == 1 )
    LODWORD(v18) = -1227133513 * ((signed int)((*(_QWORD *)(a1 + 20) >> 32) - *(_QWORD *)(a1 + 20)) >> 2) - 1;
  *(__int64 *)((char *)&a1 + 4) = *(_QWORD *)(a1 + 48);
  if ( HIDWORD(a1) == v8 )
  {
    LODWORD(a1) = a1 + 44;
    LODWORD(a1) = j_std::vector<RopeWave,std::allocator<RopeWave>>::_M_emplace_back_aux<RopeWave const&>(a1);
  }
  else
    v9 = v15;
    v10 = v16;
    *(_DWORD *)HIDWORD(a1) = v14;
    *(_QWORD *)(HIDWORD(a1) + 4) = v9;
    *(_DWORD *)(HIDWORD(a1) + 12) = v10;
    HIDWORD(a1) += 16;
    v11 = v18;
    v12 = v19;
    *(_DWORD *)HIDWORD(a1) = v17;
    *(_QWORD *)(HIDWORD(a1) + 4) = v11;
    *(_DWORD *)(HIDWORD(a1) + 12) = v12;
    *(_DWORD *)(a1 + 48) += 32;
  return a1;
}


void __fastcall RopeSystem::_tick(RopeSystem *this)
{
  RopeSystem::_tick(this);
}


int __fastcall RopeSystem::_cacheColliders(RopeSystem *this, BlockSource *a2)
{
  int result; // r0@2
  int v3; // r5@3 OVERLAPPED
  int v4; // r6@3 OVERLAPPED
  signed int v5; // r4@3
  signed int v6; // r8@3
  signed int v11; // r7@4
  int v12; // r6@8
  int v13; // r9@8 OVERLAPPED
  int v14; // r10@8 OVERLAPPED
  signed int v15; // r0@8
  int v16; // r3@11
  int v17; // r4@11
  int v18; // r3@11
  int v19; // r4@11
  int v20; // r7@11
  __int64 v21; // r0@11
  int v22; // r3@12
  int v23; // r4@12
  int v24; // r7@12
  int v25; // r0@12
  int v26; // r3@12
  int v27; // r4@12
  int v28; // r7@12
  int v29; // [sp+4h] [bp-6Ch]@3
  BlockSource *v30; // [sp+8h] [bp-68h]@1
  int i; // [sp+Ch] [bp-64h]@10
  int v32; // [sp+10h] [bp-60h]@11
  int v33; // [sp+14h] [bp-5Ch]@11
  int v34; // [sp+18h] [bp-58h]@11
  int v35; // [sp+1Ch] [bp-54h]@11
  int v36; // [sp+20h] [bp-50h]@11
  int v37; // [sp+24h] [bp-4Ch]@11
  int v38; // [sp+28h] [bp-48h]@11
  char v39; // [sp+2Ch] [bp-44h]@11
  float v40; // [sp+34h] [bp-3Ch]@6

  v30 = a2;
  if ( *((_BYTE *)this + 120) & 8 )
  {
    *(_QWORD *)&v3 = *((_QWORD *)this + 4);
    v5 = 1;
    v6 = 0;
    v29 = v4;
    if ( v3 != v4 )
    {
      __asm { VLDR            S16, =100.0 }
      v11 = 0;
      do
      {
        if ( AABBBucket::isDirty((AABBBucket *)v3) )
        {
          j_AABB::getBounds((AABB *)&v40, v3);
          __asm
          {
            VLDR            S0, [SP,#0x70+var_3C]
            VLDR            S2, [SP,#0x70+var_38]
            VMUL.F32        S0, S0, S0
            VLDR            S4, [SP,#0x70+var_34]
            VMUL.F32        S2, S2, S2
            VMUL.F32        S4, S4, S4
            VADD.F32        S0, S2, S0
            VADD.F32        S0, S0, S4
            VCMPE.F32       S0, S16
            VMRS            APSR_nzcv, FPSCR
          }
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            v5 = 0;
            goto LABEL_22;
          v12 = v3 + 32;
          *(_QWORD *)&v13 = *(_QWORD *)j_BlockSource::fetchAABBs(v30, (const AABB *)v3, 1);
          v15 = 0;
          *(_DWORD *)(v12 + 4) = *(_DWORD *)(v3 + 32);
          *(_BYTE *)(v12 + 13) = v5;
          if ( v13 != v14 )
            v15 = 1;
          for ( i = v11 | v15; v14 != v13; v13 += 28 )
            v16 = *(_DWORD *)(v13 + 4);
            v17 = *(_DWORD *)(v13 + 8);
            v32 = *(_DWORD *)v13;
            v33 = v16;
            v34 = v17;
            v18 = *(_DWORD *)(v13 + 16);
            v19 = *(_DWORD *)(v13 + 20);
            v20 = *(_DWORD *)(v13 + 24);
            v35 = *(_DWORD *)(v13 + 12);
            v36 = v18;
            v37 = v19;
            v38 = v20;
            v39 = 0;
            v21 = *(_QWORD *)(v3 + 36);
            if ( (_DWORD)v21 == HIDWORD(v21) )
            {
              LODWORD(v21) = v3 + 32;
              std::vector<RopeAABB,std::allocator<RopeAABB>>::_M_emplace_back_aux<RopeAABB const&>(v21);
            }
            else
              v22 = v33;
              v23 = v34;
              v24 = v35;
              *(_DWORD *)v21 = v32;
              *(_DWORD *)(v21 + 4) = v22;
              *(_DWORD *)(v21 + 8) = v23;
              *(_DWORD *)(v21 + 12) = v24;
              v25 = v21 + 16;
              v26 = v37;
              v27 = v38;
              v28 = *(_DWORD *)&v39;
              *(_DWORD *)v25 = v36;
              *(_DWORD *)(v25 + 4) = v26;
              *(_DWORD *)(v25 + 8) = v27;
              *(_DWORD *)(v25 + 12) = v28;
              *(_DWORD *)(v3 + 36) += 32;
          AABBBucket::clearDirty((AABBBucket *)v3);
          LOBYTE(v5) = 1;
          v4 = v29;
          v11 = i;
        }
        else if ( v11 & 1 )
          v11 = 1;
        else
          v11 = 0;
          if ( *(_QWORD *)(v3 + 32) >> 32 != (unsigned int)*(_QWORD *)(v3 + 32) )
            v11 = 1;
        v3 += 48;
      }
      while ( v3 != v4 );
      v5 = 1;
LABEL_22:
      v6 = v11;
    }
    result = v6 & v5;
  }
  else
    result = 0;
  return result;
}


int __fastcall RopeSystem::_pushRange(int result, unsigned int a2, unsigned int a3)
{
  int v3; // r4@1
  unsigned int v4; // r6@2
  unsigned int v5; // r7@2

  v3 = result;
  if ( a2 < a3 )
  {
    v4 = a3 - a2;
    v5 = 28 * a2;
    do
    {
      result = j_RopePoints::pushBack((RopePoints *)(v3 + 4), (const Vec3 *)(*(_DWORD *)(v3 + 20) + v5));
      v5 += 28;
      --v4;
    }
    while ( v4 );
  }
  return result;
}


int (**__fastcall RopeSystem::_updateRenderPoints(RopeSystem *this))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  RopeSystem *v1; // r5@1
  pthread_mutex_t *v2; // r8@1
  int v3; // r0@2
  __int64 v4; // kr00_8@3
  unsigned int v5; // r4@3
  unsigned int v6; // r10@3
  int v7; // r4@6
  signed int v8; // r7@6
  __int64 v9; // r0@8
  unsigned int v10; // r4@8
  unsigned int v11; // r7@8
  int v12; // r7@10
  int v13; // r4@10
  int v14; // r4@15
  signed int v15; // r7@15
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@17

  v1 = this;
  v2 = (pthread_mutex_t *)((char *)this + 204);
  if ( &pthread_create )
  {
    v3 = j_pthread_mutex_lock_0(v2);
    if ( v3 )
      sub_21E5E14(v3);
  }
  j_RopePoints::beginRope((RopeSystem *)((char *)v1 + 4));
  v4 = *(_QWORD *)((char *)v1 + 20);
  v5 = *((_DWORD *)v1 + 44);
  v6 = -1227133513 * ((HIDWORD(v4) - (signed int)v4) >> 2);
  if ( v5 >= v6 )
    if ( HIDWORD(v4) != (_DWORD)v4 )
    {
      j_RopePoints::pushBack((RopeSystem *)((char *)v1 + 4), (const Vec3 *)v4);
      if ( HIDWORD(v4) - (_DWORD)v4 != 28 )
      {
        v14 = v6 - 1;
        v15 = 28;
        do
        {
          j_RopePoints::pushBack((RopeSystem *)((char *)v1 + 4), (const Vec3 *)(*((_DWORD *)v1 + 5) + v15));
          --v14;
          v15 += 28;
        }
        while ( v14 );
      }
    }
  else
    if ( v5 )
      if ( v5 != 1 )
        v7 = v5 - 1;
        v8 = 28;
          j_RopePoints::pushBack((RopeSystem *)((char *)v1 + 4), (const Vec3 *)(*((_DWORD *)v1 + 5) + v8));
          --v7;
          v8 += 28;
        while ( v7 );
    *((_DWORD *)v1 + 45) = j_RopePoints::size((RopeSystem *)((char *)v1 + 4));
    v9 = *(_QWORD *)((char *)v1 + 20);
    v10 = *((_DWORD *)v1 + 44);
    v11 = -1227133513 * ((HIDWORD(v9) - (signed int)v9) >> 2);
    if ( v10 < v11 )
      j_RopePoints::pushBack((RopeSystem *)((char *)v1 + 4), (const Vec3 *)(v9 + 28 * v10));
      if ( v10 + 1 != v11 )
        v12 = v11 - 1 - v10;
        v13 = 28 * v10 + 28;
          j_RopePoints::pushBack((RopeSystem *)((char *)v1 + 4), (const Vec3 *)(*((_DWORD *)v1 + 5) + v13));
          --v12;
          v13 += 28;
        while ( v12 );
  j_RopePoints::endRope((RopeSystem *)((char *)v1 + 4));
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))j_pthread_mutex_unlock_0(v2);
  return result;
}


void __fastcall RopeSystem::_tick(RopeSystem *this)
{
  RopeSystem *v1; // r4@1
  __int64 v2; // r0@1
  int v3; // r0@6
  int v4; // r1@6
  unsigned int v5; // r5@7
  int v6; // r0@8
  int v7; // r0@8

  v1 = this;
  v2 = *(_QWORD *)((char *)this + 20);
  if ( (_DWORD)v2 != HIDWORD(v2) )
  {
    if ( *((_DWORD *)v1 + 44) >= (unsigned int)(-1227133513 * ((HIDWORD(v2) - (signed int)v2) >> 2)) )
    {
      if ( *((_BYTE *)v1 + 120) & 2 )
        RopeSystem::_resizeRope(v1);
    }
    else
      ++*((_DWORD *)v1 + 47);
    RopeSystem::_pruneBlacklist(v1);
    RopeSystem::_solveCollisions(v1, 1);
    RopeSystem::_integrate(v1);
    v3 = *((_DWORD *)v1 + 5);
    *(_DWORD *)v3 = *((_DWORD *)v1 + 53);
    *(_DWORD *)(v3 + 4) = *((_DWORD *)v1 + 54);
    *(_DWORD *)(v3 + 8) = *((_DWORD *)v1 + 55);
    v4 = *((_DWORD *)v1 + 6);
    *(_DWORD *)(v4 - 28) = *((_DWORD *)v1 + 56);
    *(_DWORD *)(v4 - 24) = *((_DWORD *)v1 + 57);
    *(_DWORD *)(v4 - 20) = *((_DWORD *)v1 + 58);
    *(_DWORD *)(v3 + 12) = *(_DWORD *)v3;
    *(_DWORD *)(v3 + 16) = *(_DWORD *)(v3 + 4);
    *(_DWORD *)(v3 + 20) = *(_DWORD *)(v3 + 8);
    *(_DWORD *)(v4 - 16) = *(_DWORD *)(v4 - 28);
    *(_DWORD *)(v4 - 12) = *(_DWORD *)(v4 - 24);
    *(_DWORD *)(v4 - 8) = *(_DWORD *)(v4 - 20);
    if ( *((_DWORD *)v1 + 28) )
      v5 = 0;
      do
      {
        RopeSystem::_solveFrictionConstraints(v1);
        RopeSystem::_solveDistanceConstraints3(v1);
        RopeSystem::_solveDistanceConstraints1(v1);
        v6 = *((_DWORD *)v1 + 5);
        *(_DWORD *)v6 = *((_DWORD *)v1 + 53);
        *(_DWORD *)(v6 + 4) = *((_DWORD *)v1 + 54);
        *(_DWORD *)(v6 + 8) = *((_DWORD *)v1 + 55);
        v7 = *((_DWORD *)v1 + 6);
        *(_DWORD *)(v7 - 28) = *((_DWORD *)v1 + 56);
        *(_DWORD *)(v7 - 24) = *((_DWORD *)v1 + 57);
        *(_DWORD *)(v7 - 20) = *((_DWORD *)v1 + 58);
        if ( !*((_BYTE *)v1 + 208) )
          RopeSystem::_solveCollisions(v1, 0);
        ++v5;
      }
      while ( v5 < *((_DWORD *)v1 + 28) );
    RopeSystem::_updateRenderPoints(v1);
    *((_DWORD *)v1 + 38) = *((_DWORD *)v1 + 53);
    *((_DWORD *)v1 + 39) = *((_DWORD *)v1 + 54);
    *((_DWORD *)v1 + 40) = *((_DWORD *)v1 + 55);
    *((_DWORD *)v1 + 41) = *((_DWORD *)v1 + 56);
    *((_DWORD *)v1 + 42) = *((_DWORD *)v1 + 57);
    *((_DWORD *)v1 + 43) = *((_DWORD *)v1 + 58);
    j_j_j__ZN10RopeSystem19_prepareAABBBucketsEv(v1);
  }
}


int __fastcall RopeSystem::_solvePinConstraints(RopeSystem *this)
{
  int v1; // r1@1
  int v2; // r1@1
  int result; // r0@1

  v1 = *((_DWORD *)this + 5);
  *(_DWORD *)v1 = *((_DWORD *)this + 53);
  *(_DWORD *)(v1 + 4) = *((_DWORD *)this + 54);
  *(_DWORD *)(v1 + 8) = *((_DWORD *)this + 55);
  v2 = *((_DWORD *)this + 6);
  *(_DWORD *)(v2 - 28) = *((_DWORD *)this + 56);
  *(_DWORD *)(v2 - 24) = *((_DWORD *)this + 57);
  result = *((_DWORD *)this + 58);
  *(_DWORD *)(v2 - 20) = result;
  return result;
}


int __fastcall RopeSystem::_solveFrictionConstraints(int result)
{
  int v1; // r1@1 OVERLAPPED
  int v2; // r2@1 OVERLAPPED
  int v7; // r1@4
  unsigned int v9; // r3@5
  float *v10; // r3@8
  float v11; // [sp+0h] [bp-Ch]@11
  float v12; // [sp+4h] [bp-8h]@8
  float v13; // [sp+8h] [bp-4h]@9

  *(_QWORD *)&v1 = *(_QWORD *)(result + 32);
  _ZF = v1 == v2;
  if ( v1 != v2 )
  {
    v1 = *(_QWORD *)(result + 20) >> 32;
    v2 = *(_QWORD *)(result + 20);
    _ZF = v2 == v1;
  }
  if ( !_ZF )
    __asm { VMOV.F32        S2, #1.0 }
    v7 = -v1;
    _R2 = v2 + 12;
    __asm { VLDR            S0, =1.1921e-7 }
    do
    {
      v9 = *(_BYTE *)(_R2 + 12);
      if ( v9 <= 2 )
      {
        __asm
        {
          VLDR            S4, [R2,#-0xC]
          VLDR            S10, [R2]
          VLDR            S6, [R2,#-8]
          VLDR            S12, [R2,#4]
          VSUB.F32        S10, S4, S10
          VLDR            S8, [R2,#-4]
          VLDR            S14, [R2,#8]
          VSUB.F32        S12, S6, S12
          VSUB.F32        S14, S8, S14
          VSTR            S10, [SP,#0xC+var_4]
          VSTR            S12, [SP,#0xC+var_8]
          VSTR            S14, [SP,#0xC+var_C]
        }
        if ( _ZF )
          v10 = &v11;
        else
          v10 = v9 == 1 ? &v12 : &v13;
        *(_DWORD *)v10 = 0;
          VLDR            S10, [SP,#0xC+var_4]
          VLDR            S12, [SP,#0xC+var_8]
          VMUL.F32        S1, S10, S10
          VLDR            S14, [SP,#0xC+var_C]
          VMUL.F32        S3, S12, S12
          VMUL.F32        S5, S14, S14
          VADD.F32        S1, S3, S1
          VADD.F32        S1, S1, S5
          VSQRT.F32       S1, S1
          VCMPE.F32       S1, S0
          VMRS            APSR_nzcv, FPSCR
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          __asm
          {
            VDIV.F32        S3, S2, S1
            VLDR            S5, [R0,#0x54]
            VMUL.F32        S10, S3, S10
            VMUL.F32        S12, S3, S12
            VCMPE.F32       S5, S1
            VMRS            APSR_nzcv, FPSCR
            VMUL.F32        S14, S3, S14
          }
          if ( _NF ^ _VF )
            __asm { VMOVLT.F32      S1, S5 }
            VSTR            S10, [SP,#0xC+var_4]
            VMUL.F32        S3, S1, S10
            VSTR            S12, [SP,#0xC+var_8]
            VMUL.F32        S5, S1, S12
            VSTR            S14, [SP,#0xC+var_C]
            VMUL.F32        S1, S1, S14
            VSUB.F32        S4, S4, S3
            VSUB.F32        S6, S6, S5
            VSUB.F32        S8, S8, S1
            VSTR            S4, [R2,#-0xC]
            VSTR            S6, [R2,#-8]
            VSTR            S8, [R2,#-4]
      }
      _R2 += 28;
    }
    while ( _R2 + v7 != 12 );
  return result;
}


int __fastcall RopeSystem::_solveDistanceConstraints3(RopeSystem *this)
{
  __int64 v2; // r0@1
  unsigned int v3; // r10@1
  unsigned int v8; // r8@3
  unsigned int v9; // r5@3
  signed int v11; // r6@7
  signed int v12; // r7@7
  int v14; // r1@12 OVERLAPPED
  unsigned int v15; // r0@12
  int v16; // r2@13
  unsigned int v17; // r6@15
  int v18; // r7@15
  int v20; // r2@16
  int result; // r0@20
  float v23; // [sp+4h] [bp-2Ch]@0

  _R4 = this;
  v2 = *(_QWORD *)((char *)this + 20);
  v3 = -1227133513 * ((HIDWORD(v2) - (signed int)v2) >> 2);
  if ( v3 >= 4 )
  {
    v8 = *((_DWORD *)_R4 + 44);
    v9 = -1227133513 * ((HIDWORD(v2) - (signed int)v2) >> 2);
    if ( v8 < v3 )
      v9 = *((_DWORD *)_R4 + 44);
    if ( v9 < 3 )
    {
      __asm { VLDR            S16, =0.0 }
    }
    else
      _R0 = j_RopeSystem::_solveStartBlocks(_R4);
      __asm { VMOV            S16, R0 }
      if ( v9 >= 4 )
      {
        v11 = 84;
        v12 = 3;
        do
        {
          __asm
          {
            VLDR            S0, [R4,#0x38]
            VSTR            S0, [SP,#0x30+var_2C]
          }
          _R0 = j_RopeSystem::_solveDistanceConstraintBlock(
                  _R4,
                  (Vec3 *)(*((_DWORD *)_R4 + 5) + v11 - 84),
                  (Vec3 *)(*((_DWORD *)_R4 + 5) + v11 - 56),
                  (Vec3 *)(*((_DWORD *)_R4 + 5) + v11 - 28),
                  (Vec3 *)(*((_DWORD *)_R4 + 5) + v11),
                  v23);
          __asm { VMOV            S0, R0 }
          ++v12;
          v11 += 28;
          __asm { VADD.F32        S16, S0, S16 }
        }
        while ( !_CF );
      }
    v14 = *(_QWORD *)((char *)_R4 + 20);
    v15 = -1227133513 * ((signed int)((*(_QWORD *)((char *)_R4 + 20) >> 32) - v14) >> 2);
    if ( v9 + 3 < v15 )
      v16 = ~v3;
      if ( ~v8 > ~v3 )
        v16 = ~v8;
      v17 = 2 - v16;
      v18 = 56 - 28 * v16;
      do
        __asm
          VLDR            S0, [R4,#0x38]
          VSTR            S0, [SP,#0x30+var_2C]
        _R0 = j_RopeSystem::_solveDistanceConstraintBlock(
                _R4,
                (Vec3 *)(v14 + v18 - 84),
                (Vec3 *)(v14 + v18 - 56),
                (Vec3 *)(v14 + v18 - 28),
                (Vec3 *)(v14 + v18),
                v23);
        *(_QWORD *)&v14 = *(_QWORD *)((char *)_R4 + 20);
        __asm { VMOV            S0, R0 }
        ++v17;
        v18 += 28;
        __asm { VADD.F32        S16, S0, S16 }
        v15 = -1227133513 * ((v20 - v14) >> 2);
      while ( v17 < v15 );
    if ( v9 == v15 || v9 < v15 - 3 )
      _R0 = j_RopeSystem::_solveEndBlocks(_R4);
      __asm
        VMOV            S0, R0
        VADD.F32        S16, S0, S16
  }
  else
    __asm { VLDR            S16, =0.0 }
  __asm { VMOV            R0, S16 }
  return result;
}


int __fastcall RopeSystem::_solveEndBlocks(RopeSystem *this)
{
  int v2; // r1@1
  int v7; // r9@1
  int result; // r0@7

  _R2 = *((_DWORD *)this + 6);
  v2 = *((_DWORD *)this + 5);
  __asm
  {
    VLDR            S4, [R2,#-0x38]
    VLDR            S10, [R2,#-0x54]
    VLDR            S6, [R2,#-0x34]
    VLDR            S12, [R2,#-0x50]
    VSUB.F32        S3, S10, S4
    VLDR            S8, [R2,#-0x30]
    VSUB.F32        S5, S12, S6
    VLDR            S14, [R2,#-0x4C]
    VSUB.F32        S7, S14, S8
  }
  v7 = -1227133513 * ((_R2 - v2) >> 2) - 1;
    VMUL.F32        S0, S3, S3
    VMUL.F32        S2, S5, S5
    VMUL.F32        S1, S7, S7
    VADD.F32        S0, S2, S0
    VLDR            S2, =1.1921e-7
    VADD.F32        S0, S0, S1
    VSQRT.F32       S1, S0
    VLDR            S0, [R0,#0x38]
    VCMPE.F32       S1, S2
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    __asm { VMOV.F32        S3, #1.0 }
    _R2 = unk_28224C4;
    _R7 = Vec3::UNIT_Y;
    _R3 = unk_28224C8;
  else
    __asm
    {
      VMOV.F32        S9, #1.0
      VMOV            R7, S3
      VMOV            R2, S5
      VMOV            R3, S7
      VDIV.F32        S3, S9, S1
    }
    VMOV.F32        S5, #0.5
    VSUB.F32        S7, S1, S0
    VMOV            S9, R3
    VMUL.F32        S1, S7, S5
    VMOV            S5, R7
    VMUL.F32        S1, S1, S3
    VLDR            S3, [R0,#0x50]
  _R0 = v2 + 28 * v7;
    VMOV            S3, R2
    VMUL.F32        S5, S1, S5
    VMUL.F32        S3, S1, S3
    VMUL.F32        S1, S1, S9
    VSUB.F32        S10, S10, S5
    VSUB.F32        S12, S12, S3
    VSUB.F32        S14, S14, S1
    VADD.F32        S4, S4, S5
    VADD.F32        S6, S6, S3
    VADD.F32        S8, S8, S1
    VSTR            S10, [R6]
    VSTR            S12, [R5]
    VSTR            S14, [R4]
    VSTR            S4, [R8]
    VSTR            S6, [LR]
    VSTR            S8, [R12]
    VLDR            S10, [R0]
    VLDR            S12, [R0,#4]
    VSUB.F32        S14, S10, S4
    VLDR            S3, [R0,#8]
    VSUB.F32        S1, S12, S6
    VSUB.F32        S3, S3, S8
    VMUL.F32        S10, S14, S14
    VMUL.F32        S12, S1, S1
    VMUL.F32        S5, S3, S3
    VADD.F32        S10, S12, S10
    VADD.F32        S10, S10, S5
    VSQRT.F32       S12, S10
    VABS.F32        S10, S7
    VCMPE.F32       S12, S2
    __asm { VMOV.F32        S2, #1.0 }
    _R0 = Vec3::UNIT_Y;
    _R1 = unk_28224C8;
      VMOV.F32        S2, #1.0
      VMOV            R0, S14
      VMOV            R2, S1
      VMOV            R1, S3
      VDIV.F32        S2, S2, S12
    VSUB.F32        S0, S12, S0
    VABS.F32        S12, S0
    VMUL.F32        S0, S2, S0
    VMOV            S2, R0
    VMOV            S12, R2
    VMUL.F32        S2, S0, S2
    VMUL.F32        S12, S0, S12
    VMOV            R0, S10
    VMOV            S10, R1
    VADD.F32        S2, S2, S4
    VMUL.F32        S0, S0, S10
    VADD.F32        S4, S12, S6
    VSTR            S2, [R8]
    VADD.F32        S0, S0, S8
    VSTR            S4, [LR]
    VSTR            S0, [R12]
  return result;
}


int __fastcall RopeSystem::_propagateDistanceConstraint(RopeSystem *this, const Vec3 *_R1, Vec3 *_R2, float _R3)
{
  int result; // r0@4

  __asm
  {
    VLDR            S0, [R2]
    VLDR            S6, [R1]
    VLDR            S2, [R2,#4]
    VLDR            S8, [R1,#4]
    VSUB.F32        S10, S6, S0
    VLDR            S4, [R2,#8]
    VSUB.F32        S12, S8, S2
    VLDR            S14, [R1,#8]
    VSUB.F32        S14, S14, S4
    VMUL.F32        S6, S10, S10
    VMUL.F32        S8, S12, S12
    VMUL.F32        S1, S14, S14
    VADD.F32        S6, S8, S6
    VMOV            S8, R3
    VADD.F32        S6, S6, S1
    VLDR            S1, =1.1921e-7
    VSQRT.F32       S6, S6
    VCMPE.F32       S6, S1
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    __asm { VMOV.F32        S10, #1.0 }
    _R3 = unk_28224C4;
    _R0 = Vec3::UNIT_Y;
    _R1 = unk_28224C8;
  else
    __asm
    {
      VMOV.F32        S1, #1.0
      VMOV            R0, S10
      VMOV            R3, S12
      VMOV            R1, S14
      VDIV.F32        S10, S1, S6
    }
    VSUB.F32        S6, S6, S8
    VMOV            S12, R1
    VMUL.F32        S8, S10, S6
    VMOV            S10, R3
    VMOV            R3, S6
    VMOV            S6, R0
    VMUL.F32        S6, S8, S6
    VMUL.F32        S10, S8, S10
    VMUL.F32        S8, S8, S12
    VADD.F32        S0, S6, S0
    VADD.F32        S2, S2, S10
    VADD.F32        S4, S4, S8
  result = _R3 & 0x7FFFFFFF;
    VSTR            S0, [R2]
    VSTR            S2, [R2,#4]
    VSTR            S4, [R2,#8]
  return result;
}


int __fastcall RopeSystem::_solveStartBlocks(RopeSystem *this)
{
  int result; // r0@7

  _R1 = *((_DWORD *)this + 5);
  __asm
  {
    VLDR            S0, [R1,#4]
    VLDR            S4, [R1,#0x20]
    VLDR            S12, [R1]
    VLDR            S2, [R1,#0x1C]
    VSUB.F32        S10, S0, S4
    VLDR            S8, [R1,#8]
    VSUB.F32        S1, S12, S2
    VLDR            S6, [R1,#0x24]
    VSUB.F32        S12, S8, S6
    VMUL.F32        S0, S10, S10
    VMUL.F32        S8, S1, S1
    VMUL.F32        S14, S12, S12
    VADD.F32        S0, S0, S8
    VADD.F32        S0, S0, S14
    VLDR            S14, =1.1921e-7
    VSQRT.F32       S8, S0
    VLDR            S0, [R0,#0x38]
    VCMPE.F32       S8, S14
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    __asm { VMOV.F32        S10, #1.0 }
    _R2 = unk_28224C4;
    _R12 = Vec3::UNIT_Y;
    _R3 = unk_28224C8;
  else
    __asm
    {
      VMOV.F32        S3, #1.0
      VMOV            R2, S10
      VMOV            R12, S1
      VMOV            R3, S12
      VDIV.F32        S10, S3, S8
    }
    VSUB.F32        S1, S8, S0
    VMOV            S12, R12
    VMOV            S3, R3
    VMUL.F32        S8, S10, S1
    VMOV            S10, R2
    VABS.F32        S1, S1
    VMUL.F32        S12, S8, S12
    VMUL.F32        S10, S8, S10
    VMUL.F32        S8, S8, S3
    VADD.F32        S2, S12, S2
    VADD.F32        S4, S10, S4
    VADD.F32        S6, S8, S6
    VSTR            S2, [R1,#0x1C]
    VSTR            S4, [R1,#0x20]
    VSTR            S6, [R1,#0x24]
    VLDR            S8, [R1,#0x38]
    VLDR            S10, [R1,#0x3C]
    VSUB.F32        S5, S2, S8
    VLDR            S12, [R1,#0x40]
    VSUB.F32        S7, S4, S10
    VSUB.F32        S9, S6, S12
    VMUL.F32        S3, S5, S5
    VMUL.F32        S11, S7, S7
    VMUL.F32        S13, S9, S9
    VADD.F32        S3, S11, S3
    VADD.F32        S3, S3, S13
    VSQRT.F32       S3, S3
    VCMPE.F32       S3, S14
    __asm { VMOV.F32        S14, #1.0 }
      VMOV.F32        S14, #1.0
      VMOV            R12, S5
      VMOV            R2, S7
      VMOV            R3, S9
      VDIV.F32        S14, S14, S3
    VMOV.F32        S5, #0.5
    VSUB.F32        S0, S3, S0
    VMUL.F32        S3, S0, S5
    VABS.F32        S0, S0
    VMOV            S5, R3
    VMUL.F32        S14, S3, S14
    VLDR            S3, [R0,#0x50]
    VADD.F32        S0, S0, S1
    VMOV            S1, R2
    VMUL.F32        S14, S14, S3
    VMOV            R0, S0
    VMOV            S3, R12
    VMUL.F32        S3, S14, S3
    VMUL.F32        S1, S14, S1
    VMUL.F32        S0, S14, S5
    VSUB.F32        S2, S2, S3
    VSUB.F32        S4, S4, S1
    VSUB.F32        S6, S6, S0
    VADD.F32        S8, S8, S3
    VADD.F32        S10, S10, S1
    VADD.F32        S0, S12, S0
    VSTR            S8, [R1,#0x38]
    VSTR            S10, [R1,#0x3C]
    VSTR            S0, [R1,#0x40]
  return result;
}


int __fastcall RopeSystem::_applyFriction1D(int result, int _R1, int a3)
{
  float *v7; // r2@3
  float v8; // [sp+0h] [bp-Ch]@6
  float v9; // [sp+4h] [bp-8h]@3
  float v10; // [sp+8h] [bp-4h]@4

  __asm
  {
    VLDR            S0, [R1]
    VLDR            S6, [R1,#0xC]
    VLDR            S2, [R1,#4]
    VLDR            S8, [R1,#0x10]
    VSUB.F32        S6, S0, S6
    VLDR            S4, [R1,#8]
    VLDR            S10, [R1,#0x14]
    VSUB.F32        S8, S2, S8
    VSUB.F32        S10, S4, S10
    VSTR            S6, [SP,#0xC+var_4]
    VSTR            S8, [SP,#0xC+var_8]
    VSTR            S10, [SP,#0xC+var_C]
  }
  if ( _ZF )
    v7 = &v8;
  else if ( a3 == 1 )
    v7 = &v9;
  else
    v7 = &v10;
  *(_DWORD *)v7 = 0;
    VLDR            S6, [SP,#0xC+var_4]
    VLDR            S8, [SP,#0xC+var_8]
    VMUL.F32        S12, S6, S6
    VLDR            S10, [SP,#0xC+var_C]
    VMUL.F32        S14, S8, S8
    VMUL.F32        S1, S10, S10
    VADD.F32        S12, S14, S12
    VLDR            S14, =1.1921e-7
    VADD.F32        S12, S12, S1
    VSQRT.F32       S12, S12
    VCMPE.F32       S12, S14
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm
    {
      VMOV.F32        S14, #1.0
      VLDR            S1, [R0,#0x54]
      VCMPE.F32       S1, S12
      VMRS            APSR_nzcv, FPSCR
      VDIV.F32        S14, S14, S12
    }
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S12, S1 }
      VMUL.F32        S8, S14, S8
      VMUL.F32        S6, S14, S6
      VMUL.F32        S10, S14, S10
      VMUL.F32        S1, S12, S8
      VSTR            S8, [SP,#0xC+var_8]
      VMUL.F32        S14, S12, S6
      VSTR            S6, [SP,#0xC+var_4]
      VMUL.F32        S12, S12, S10
      VSTR            S10, [SP,#0xC+var_C]
      VSUB.F32        S2, S2, S1
      VSUB.F32        S0, S0, S14
      VSUB.F32        S4, S4, S12
      VSTR            S0, [R1]
      VSTR            S2, [R1,#4]
      VSTR            S4, [R1,#8]
  return result;
}


char *__fastcall RopeSystem::_pruneBlacklist(RopeSystem *this)
{
  RopeSystem *v1; // r4@1
  char *result; // r0@1
  int v3; // r8@1
  signed int v4; // r5@2
  RopeSystem *v5; // r9@2
  const AABB *v6; // r11@3
  __int64 v7; // r0@3
  unsigned int v8; // r8@3
  signed int v9; // r7@3
  unsigned int v10; // r6@3
  unsigned int v11; // r2@4
  int v12; // r3@5
  int v13; // r5@8
  int v14; // r9@9
  int v15; // r10@9
  void *v16; // r0@10
  int v17; // r0@14
  void *v18; // r0@17
  int v19; // [sp+0h] [bp-30h]@1
  int v20; // [sp+4h] [bp-2Ch]@3

  v1 = this;
  result = (char *)this + 132;
  v3 = *((_DWORD *)v1 + 35);
  v19 = (int)result;
  if ( (char *)v3 != result )
  {
    v4 = -1431655765;
    v5 = (RopeSystem *)((char *)v1 + 32);
    do
    {
      v20 = v3;
      v6 = (const AABB *)(v3 + 16);
      v7 = *((_QWORD *)v1 + 4);
      v8 = 0;
      v9 = 1;
      v10 = 0;
      do
      {
        v11 = ((HIDWORD(v7) - (signed int)v7) >> 4) * v4;
        if ( v11 <= v8 )
        {
          v12 = v8 + 1;
          if ( v8 + 1 <= v11 )
          {
            if ( v8 + 1 < v11 )
            {
              v13 = v7 + 48 * v12;
              if ( HIDWORD(v7) != v13 )
              {
                v14 = HIDWORD(v7) - 48;
                v15 = v7 + 48 * (unsigned __int8)v10;
                do
                {
                  v16 = *(void **)(v15 + 80);
                  if ( v16 )
                    j_operator delete(v16);
                  v15 += 48;
                }
                while ( v14 != v15 );
              }
              v5 = (RopeSystem *)((char *)v1 + 32);
              *((_DWORD *)v1 + 9) = v13;
              v4 = -1431655765;
            }
          }
          else
            std::vector<AABBBucket,std::allocator<AABBBucket>>::_M_default_append((int)v5, v12 - v11);
        }
        v17 = j_AABB::intersects((AABB *)(*(_DWORD *)v5 + 48 * v8), v6) ^ 1;
        v9 &= v17;
        if ( !v17 )
          break;
        v7 = *((_QWORD *)v1 + 4);
        v8 = ++v10;
      }
      while ( v10 <= (unsigned __int8)(((unsigned int)(HIDWORD(v7) - v7) >> 4) * v4) );
      v3 = sub_21D4820(v20);
      if ( v9 == 1 )
        v18 = (void *)sub_21D4A24(v20, v19);
        j_operator delete(v18);
        --*((_DWORD *)v1 + 37);
      result = (char *)v19;
    }
    while ( v3 != v19 );
  }
  return result;
}


int __fastcall RopeSystem::storeEndPinEntity(int result, _QWORD *a2)
{
  *(_QWORD *)(result + 192) = *a2;
  return result;
}


int __fastcall RopeSystem::_finalizeBucket(RopeSystem *this, AABBBucket *a2)
{
  AABBBucket *v2; // r9@1
  RopeSystem *v3; // r8@1
  __int64 v4; // r0@1
  unsigned int v9; // r4@2
  int i; // r7@5

  v2 = a2;
  v3 = this;
  v4 = *((_QWORD *)a2 + 4);
  if ( HIDWORD(v4) != (_DWORD)v4 )
  {
    __asm
    {
      VMOV.F32        S16, #-1.5
      VMOV.F32        S20, #1.0
      VLDR            S18, =1.1921e-7
    }
    v9 = 0;
    do
      _R6 = v4 + 32 * v9;
      __asm
      {
        VLDR            S2, [R6,#0x10]
        VLDR            S0, [R6,#4]
        VADD.F32        S2, S2, S16
        VSUB.F32        S2, S2, S0
        VABS.F32        S2, S2
        VCMPE.F32       S2, S18
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        __asm
        {
          VADDLT.F32      S0, S0, S20
          VSTRLT          S0, [R0]
        }
      for ( i = *((_DWORD *)v3 + 35); (RopeSystem *)i != (RopeSystem *)((char *)v3 + 132); i = sub_21D4820(i) )
        if ( j_AABB::intersects((AABB *)_R6, (const AABB *)(i + 16)) == 1 )
          *(_BYTE *)(_R6 + 28) = 1;
          break;
      v4 = *((_QWORD *)v2 + 4);
      ++v9;
    while ( v9 < (HIDWORD(v4) - (signed int)v4) >> 5 );
  }
  j_AABBBucket::mergeAABBs(v2);
  return j_j_j__ZN10AABBBucket18clearNeedsFinalizeEv(v2);
}


_BYTE *__fastcall RopeSystem::RopeSystem(_BYTE *a1)
{
  _BYTE *v1; // r4@1
  _BYTE *result; // r0@1

  v1 = a1;
  *a1 = 0;
  _aeabi_memclr4(a1 + 8, 48);
  RopeParams::RopeParams((int)(v1 + 56));
  *((_DWORD *)v1 + 34) = 0;
  *((_DWORD *)v1 + 35) = 0;
  *((_DWORD *)v1 + 36) = 0;
  *((_DWORD *)v1 + 37) = 0;
  *((_DWORD *)v1 + 33) = 0;
  *((_DWORD *)v1 + 35) = v1 + 132;
  *((_DWORD *)v1 + 36) = v1 + 132;
  *((_DWORD *)v1 + 42) = 0;
  *((_DWORD *)v1 + 43) = 0;
  *((_DWORD *)v1 + 40) = 0;
  *((_DWORD *)v1 + 41) = 0;
  *((_DWORD *)v1 + 38) = 0;
  *((_DWORD *)v1 + 39) = 0;
  *((_DWORD *)v1 + 48) = -1;
  *((_DWORD *)v1 + 49) = -1;
  result = v1;
  *((_DWORD *)v1 + 51) = 0;
  *((_DWORD *)v1 + 53) = 0;
  *((_DWORD *)v1 + 54) = 0;
  *((_DWORD *)v1 + 55) = 0;
  *((_DWORD *)v1 + 56) = 0;
  *((_DWORD *)v1 + 57) = 0;
  *((_DWORD *)v1 + 58) = 0;
  return result;
}


signed int __fastcall RopeSystem::isCut(RopeSystem *this)
{
  unsigned int v1; // r3@1
  unsigned int v2; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 44);
  v2 = -1227133513 * ((signed int)((*(_QWORD *)((char *)this + 20) >> 32) - *(_QWORD *)((char *)this + 20)) >> 2);
  result = 0;
  if ( v1 < v2 )
    result = 1;
  return result;
}


int __fastcall RopeSystem::_initializePins(RopeSystem *this, const Vec3 *a2, const Vec3 *a3)
{
  *((_DWORD *)this + 22) = *(_DWORD *)a2;
  *((_DWORD *)this + 23) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 25) = *(_DWORD *)a3;
  *((_DWORD *)this + 26) = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 27) = *((_DWORD *)a3 + 2);
  return j_j_j__ZN10RopeSystem15_initializePinsEv(this);
}


int __fastcall RopeSystem::_solveDistanceConstraints1(RopeSystem *this)
{
  int v2; // r1@1
  unsigned int v3; // r8@1
  int result; // r0@2
  unsigned int v9; // r12@3
  unsigned int v10; // r1@3
  signed int v12; // r4@6
  int v16; // r2@12
  int v17; // r3@13

  _KR00_8 = *(_QWORD *)((char *)this + 20);
  v2 = (HIDWORD(_KR00_8) - (signed int)_KR00_8) >> 2;
  v3 = -1227133513 * v2;
  if ( (unsigned int)(-1227133513 * v2) >= 2 )
  {
    v9 = *((_DWORD *)this + 44);
    v10 = -1227133513 * v2;
    __asm { VLDR            S0, =0.0 }
    if ( v9 < v3 )
      v10 = *((_DWORD *)this + 44);
    if ( v10 >= 2 )
    {
      __asm
      {
        VMOV.F32        S12, #1.0
        VMOV.F32        S14, #0.5
        VLDR            S6, [LR]
        VLDR            S10, [LR,#4]
        VLDR            S1, [LR,#8]
      }
      _R2 = _KR00_8 + 28;
      v12 = 1;
        VLDR            S2, [R0,#0x38]
        VLDR            S4, [R0,#0x50]
        VLDR            S8, =1.1921e-7
      do
        __asm
        {
          VLDR            S7, [R2,#4]
          VLDR            S3, [R2]
          VSUB.F32        S7, S10, S7
          VLDR            S9, [R2,#8]
          VSUB.F32        S5, S6, S3
          VSUB.F32        S9, S1, S9
          VMUL.F32        S11, S7, S7
          VMUL.F32        S3, S5, S5
          VMUL.F32        S13, S9, S9
          VADD.F32        S3, S11, S3
          VADD.F32        S3, S3, S13
          VSQRT.F32       S3, S3
          VCMPE.F32       S3, S8
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
          _R3 = unk_28224C4;
          _R6 = Vec3::UNIT_Y;
          __asm { VMOV.F32        S5, S12 }
          _R7 = unk_28224C8;
        else
          __asm
          {
            VMOV            R6, S5
            VMOV            R3, S7
            VMOV            R7, S9
            VDIV.F32        S5, S12, S3
          }
        __asm { VSUB.F32        S3, S3, S2 }
        ++v12;
          VMOV            S9, R6
          VMOV            S11, R7
          VMUL.F32        S7, S3, S14
          VABS.F32        S3, S3
          VMUL.F32        S5, S7, S5
          VMOV            S7, R3
          VADD.F32        S0, S3, S0
          VMUL.F32        S5, S5, S4
          VMUL.F32        S9, S5, S9
          VMUL.F32        S7, S5, S7
          VMUL.F32        S5, S5, S11
          VSUB.F32        S6, S6, S9
          VSUB.F32        S10, S10, S7
          VSUB.F32        S1, S1, S5
          VSTR            S6, [R2,#-0x1C]
          VSTR            S10, [R2,#-0x18]
          VSTR            S1, [R2,#-0x14]
          VLDR            S6, [R2]
          VADD.F32        S6, S6, S9
          VSTR            S6, [R2]
          VLDR            S10, [R2,#4]
          VADD.F32        S10, S10, S7
          VSTR            S10, [R2,#4]
          VLDR            S1, [R2,#8]
          VADD.F32        S1, S1, S5
          VSTR            S1, [R2,#8]
        _R2 += 28;
      while ( !_CF );
    }
    v16 = v10 + 1;
    if ( v10 + 1 < v3 )
      __asm { VLDR            S2, [R0,#0x38] }
      v17 = ~v3;
      __asm { VLDR            S4, [R0,#0x50] }
      if ( ~v9 > ~v3 )
        v17 = ~v9;
      _R0 = _KR00_8 + 28 * v10;
        VMOV.F32        S10, #1.0
        VLDR            S8, [R0]
        VLDR            S12, [R0,#4]
        VLDR            S1, [R0,#8]
        VLDR            S6, =1.1921e-7
      _R0 = _KR00_8 + -28 * v17 + 8;
          VLDR            S7, [R0,#-4]
          VLDR            S3, [R0,#-8]
          VSUB.F32        S7, S12, S7
          VLDR            S9, [R0]
          VSUB.F32        S5, S8, S3
          VCMPE.F32       S3, S6
          __asm { VMOV.F32        S5, S10 }
          _R3 = unk_28224C8;
            VMOV            R7, S7
            VMOV            R3, S9
            VDIV.F32        S5, S10, S3
        ++v16;
          VMOV            S11, R3
          VMOV            S7, R7
          VSUB.F32        S8, S8, S9
          VSUB.F32        S12, S12, S7
          VSTR            S8, [R0,#-0x24]
          VSTR            S12, [R0,#-0x20]
          VSTR            S1, [R0,#-0x1C]
          VLDR            S8, [R0,#-8]
          VADD.F32        S8, S8, S9
          VSTR            S8, [R0,#-8]
          VLDR            S12, [R0,#-4]
          VADD.F32        S12, S12, S7
          VSTR            S12, [R0,#-4]
          VLDR            S1, [R0]
          VSTR            S1, [R0]
        _R0 += 28;
    __asm { VMOV            R0, S0 }
  }
  else
    __asm
      VLDR            S0, =0.0
      VMOV            R0, S0
  return result;
}


int __fastcall RopeSystem::_solveCollisions(RopeSystem *this, int a2)
{
  char *v3; // r0@1
  int v4; // r6@1
  int v5; // t1@1
  int v6; // r0@1
  __int64 v11; // r0@6
  unsigned int v12; // r4@7
  int v13; // r8@8
  int v14; // r10@10
  signed int v16; // r9@11
  signed int v17; // r0@12
  signed int v18; // r1@14
  int v22; // r5@34
  signed int v23; // r0@35
  signed int v24; // r1@37
  int v28; // r0@55
  unsigned int v29; // r4@55
  __int64 v30; // kr18_8@60
  unsigned int v31; // r2@60
  int v32; // r3@61
  int v33; // r8@64
  int v34; // r6@65
  void *v35; // r0@66
  int result; // r0@74
  int v37; // [sp+4h] [bp-84h]@1
  int *v38; // [sp+8h] [bp-80h]@1
  int v39; // [sp+Ch] [bp-7Ch]@7
  _BYTE *v40; // [sp+10h] [bp-78h]@10
  unsigned int v41; // [sp+14h] [bp-74h]@9
  int v42; // [sp+24h] [bp-64h]@12
  float v44; // [sp+2Ch] [bp-5Ch]@12
  float v45; // [sp+30h] [bp-58h]@12
  int v46; // [sp+34h] [bp-54h]@12

  v37 = a2;
  _R11 = this;
  v5 = *((_DWORD *)this + 8);
  v3 = (char *)this + 32;
  v4 = v5;
  v38 = (int *)v3;
  v6 = *((_DWORD *)v3 + 1);
  __asm { VLDR            S16, =0.0 }
  if ( v5 != v6 )
  {
    if ( v6 == v4 )
    {
      j_std::vector<AABBBucket,std::allocator<AABBBucket>>::_M_default_append(
        (int)v38,
        1 - -1431655765 * ((v6 - v4) >> 4));
      v4 = *v38;
    }
    __asm { VLDR            S18, [R11,#0x38] }
    if ( j_AABBBucket::needsFinalize((AABBBucket *)v4) == 1 )
      j_RopeSystem::_finalizeBucket(_R11, (AABBBucket *)v4);
    v11 = *(_QWORD *)((char *)_R11 + 20);
    if ( HIDWORD(v11) != (_DWORD)v11 )
      __asm
      {
        VNEG.F32        S22, S18
        VLDR            S18, =0.0
        VLDR            S20, =0.95
        VMOV.F32        S16, S18
      }
      v12 = 0;
      v39 = 0;
      while ( 1 )
        v13 = *(_QWORD *)(v4 + 32);
        if ( *(_QWORD *)(v4 + 32) >> 32 != v13 )
          break;
        v41 = v12;
LABEL_53:
        __asm
        {
          VCMPE.F32       S22, S20
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
          v28 = *((_DWORD *)_R11 + 44);
          v29 = v41;
        else
          v28 = v41 + 2;
          if ( v41 + 2 != *((_DWORD *)_R11 + 44) )
          {
            __asm { VLDR            S24, [R11,#0x38] }
LABEL_60:
            v30 = *((_QWORD *)_R11 + 4);
            v31 = -1431655765 * ((HIDWORD(v30) - (signed int)v30) >> 4);
            if ( v31 <= v39 + 1 )
            {
              v32 = v39 + 2;
              if ( v39 + 2 <= v31 )
              {
                if ( v39 + 2 < v31 )
                {
                  v33 = v30 + 48 * v32;
                  if ( HIDWORD(v30) != v33 )
                  {
                    v34 = v30 + 48 * (v39 + 1);
                    do
                    {
                      v35 = *(void **)(v34 + 80);
                      if ( v35 )
                        j_operator delete(v35);
                      v34 += 48;
                    }
                    while ( HIDWORD(v30) - 48 != v34 );
                  }
                  *((_DWORD *)_R11 + 9) = v33;
                }
              }
              else
                j_std::vector<AABBBucket,std::allocator<AABBBucket>>::_M_default_append((int)v38, v32 - v31);
            }
            __asm { VNEG.F32        S22, S24 }
            v4 = *v38 + 48 * (v39 + 1);
            if ( j_AABBBucket::needsFinalize((AABBBucket *)v4) == 1 )
              ++v39;
              j_RopeSystem::_finalizeBucket(_R11, (AABBBucket *)v4);
            else
            goto LABEL_73;
          }
        __asm { VLDR            S24, [R11,#0x38] }
        if ( v29 + 1 == v28 )
          goto LABEL_60;
        __asm { VADD.F32        S22, S24, S22 }
LABEL_73:
        v11 = *(_QWORD *)((char *)_R11 + 20);
        v12 = v29 + 1;
        if ( v12 >= -1227133513 * ((HIDWORD(v11) - (signed int)v11) >> 2) )
          goto LABEL_74;
      v14 = 0;
      v41 = v12;
      _R7 = v11 + 28 * v12;
      v40 = (_BYTE *)(_R7 + 24);
      if ( v37 == 1 )
        v16 = 28;
        while ( 1 )
          v44 = 0.0;
          v45 = 0.0;
          v46 = 0;
          v17 = j_RopeAABB::getContactPoint(v13 + v16 - 28, _R7, *((_DWORD *)_R11 + 15), &v42);
          __asm { VMOV.F32        S24, S18 }
          if ( v17 == 1 )
            if ( v42 == -1 )
              __asm { VLDR            S2, [SP,#0x88+var_58] }
              if ( *(_BYTE *)(v13 + v16) )
                __asm
                  VMOV.F32        S24, S18
                  VCMPE.F32       S2, S20
                  VMRS            APSR_nzcv, FPSCR
                if ( _NF ^ _VF )
                  goto LABEL_30;
              __asm
                VLDR            S0, [SP,#0x88+var_60]
                VLDR            S4, [SP,#0x88+var_5C]
                VLDR            S8, [R7]
                VMUL.F32        S2, S0, S2
                VMUL.F32        S4, S4, S0
              _R0 = _R7 + 4;
                VLDR            S6, [SP,#0x88+var_54]
                VADD.F32        S4, S8, S4
                VSTR            S4, [R7]
                VLDR            S4, [R0]
                VADD.F32        S2, S4, S2
                VMUL.F32        S4, S6, S0
                VSTR            S2, [R0]
              _R0 = _R7 + 8;
                VLDR            S2, [R0]
                VADD.F32        S2, S2, S4
              v18 = 0;
              if ( !*(_BYTE *)(v13 + v16) )
                v18 = 1;
              if ( v42 != 1 )
                __asm { VMOV.F32        S24, S18 }
                if ( v18 != 1 )
              __asm { VLDR            S0, [SP,#0x88+var_60] }
              if ( v42 )
                _R1 = _R7 + 8;
                if ( v42 != 2 )
                  _R1 = _R7 + 4;
                  if ( v42 != 1 )
                    _R1 = _R7;
                _R1 = _R7;
                VLDR            S2, [R1]
                VADD.F32        S2, S2, S0
                VSTR            S2, [R1]
              if ( _ZF )
                *v40 = 1;
            __asm { VABS.F32        S24, S0 }
LABEL_30:
          __asm
            VLDR            S0, [R11,#0x3C]
            VCMPE.F32       S24, S0
            VMRS            APSR_nzcv, FPSCR
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            j_std::_Rb_tree<AABB,AABB,std::_Identity<AABB>,AABBPred,std::allocator<AABB>>::_M_insert_unique<AABB const&>(
              (int)&v42,
              (int)_R11 + 128,
              v13 + v16 - 28);
          __asm { VADD.F32        S16, S24, S16 }
          v13 = *(_QWORD *)(v4 + 32);
          v16 += 32;
          if ( ++v14 >= (unsigned int)((signed int)((*(_QWORD *)(v4 + 32) >> 32) - v13) >> 5) )
            goto LABEL_53;
      v22 = 0;
        v44 = 0.0;
        v45 = 0.0;
        v46 = 0;
        v23 = j_RopeAABB::getContactPoint(v13 + v14, _R7, *((_DWORD *)_R11 + 15), &v42);
        __asm { VMOV.F32        S0, S18 }
        if ( v23 == 1 )
          if ( v42 == -1 )
            __asm { VLDR            S2, [SP,#0x88+var_58] }
            if ( *(_BYTE *)(v13 + v14 + 28) )
                VMOV.F32        S0, S18
                VCMPE.F32       S2, S20
                VMRS            APSR_nzcv, FPSCR
              if ( _NF ^ _VF )
                goto LABEL_52;
            __asm
              VLDR            S0, [SP,#0x88+var_60]
              VLDR            S4, [SP,#0x88+var_5C]
              VLDR            S8, [R7]
              VMUL.F32        S2, S0, S2
              VMUL.F32        S4, S4, S0
            _R0 = _R7 + 4;
              VLDR            S6, [SP,#0x88+var_54]
              VADD.F32        S4, S8, S4
              VSTR            S4, [R7]
              VLDR            S4, [R0]
              VADD.F32        S2, S4, S2
              VMUL.F32        S4, S6, S0
              VSTR            S2, [R0]
            _R0 = _R7 + 8;
              VLDR            S2, [R0]
              VADD.F32        S2, S2, S4
          else
            v24 = 0;
            if ( !*(_BYTE *)(v13 + v14 + 28) )
              v24 = 1;
            if ( v42 != 1 )
              __asm { VMOV.F32        S0, S18 }
              if ( v24 != 1 )
            __asm { VLDR            S0, [SP,#0x88+var_60] }
            if ( v42 == 2 )
              _R1 = _R7 + 8;
              _R1 = _R7;
              if ( v42 == 1 )
                _R1 = _R7 + 4;
              VLDR            S2, [R1]
              VADD.F32        S2, S2, S0
              VSTR            S2, [R1]
            if ( _ZF )
              *v40 = 1;
          __asm { VABS.F32        S0, S0 }
LABEL_52:
        __asm { VADD.F32        S16, S0, S16 }
        v14 += 32;
        if ( ++v22 >= (unsigned int)((signed int)((*(_QWORD *)(v4 + 32) >> 32) - v13) >> 5) )
          goto LABEL_53;
  }
LABEL_74:
  __asm { VMOV            R0, S16 }
  return result;
}


signed int __fastcall RopeSystem::isDestroyed(RopeSystem *this)
{
  unsigned int v1; // r1@1
  unsigned int v2; // r2@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 29);
  v2 = *((_DWORD *)this + 47);
  result = 0;
  if ( v2 > v1 )
    result = 1;
  return result;
}


int __fastcall RopeSystem::updatePins(int result, const Vec3 *a2, const Vec3 *a3)
{
  *(_DWORD *)(result + 88) = *(_DWORD *)a2;
  *(_DWORD *)(result + 92) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 96) = *((_DWORD *)a2 + 2);
  *(_DWORD *)(result + 100) = *(_DWORD *)a3;
  *(_DWORD *)(result + 104) = *((_DWORD *)a3 + 1);
  *(_DWORD *)(result + 108) = *((_DWORD *)a3 + 2);
  return result;
}


unsigned int __fastcall RopeSystem::_resizeRope(RopeSystem *this)
{
  RopeSystem *v1; // r9@1
  char *v2; // r11@1
  unsigned int result; // r0@1
  unsigned int v10; // r3@2
  int v12; // r1@2
  char v13; // r4@9
  unsigned int v15; // r1@12
  unsigned int v16; // r2@14
  unsigned int v17; // r0@14
  int v18; // r0@19
  int v19; // r12@19
  int v20; // r2@19
  char *v21; // r2@19
  char *v22; // r3@20
  int v23; // r4@20
  int v24; // r7@20
  int v25; // r5@20
  int v26; // r6@20
  int v27; // r4@20
  int v28; // r5@20
  int v29; // r6@20
  unsigned int v30; // [sp+0h] [bp-68h]@4
  char *v31; // [sp+4h] [bp-64h]@1
  int v32; // [sp+8h] [bp-60h]@19
  __int16 v33; // [sp+Dh] [bp-5Bh]@0
  char v34; // [sp+Fh] [bp-59h]@0

  v1 = this;
  v2 = (char *)*((_DWORD *)this + 5);
  v31 = (char *)this + 20;
  __asm
  {
    VLDR            S0, [R3,#0x44]
    VLDR            S6, [R3,#0x50]
    VLDR            S2, [R3,#0x48]
    VLDR            S8, [R3,#0x54]
    VSUB.F32        S0, S6, S0
    VLDR            S4, [R3,#0x4C]
    VSUB.F32        S2, S8, S2
    VLDR            S10, [R3,#0x58]
  }
  _R10 = *((_DWORD *)this + 6);
    VSUB.F32        S4, S10, S4
    VMUL.F32        S0, S0, S0
  result = -1227133513 * ((_R10 - (signed int)v2) >> 2);
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
  _R1 = result - 1;
    VADD.F32        S0, S2, S0
    VMOV            S2, R1
    VCVT.F32.U32    S2, S2
    VLDR            S6, [R3,#0x34]
    VADD.F32        S0, S0, S4
    VSQRT.F32       S4, S0
    VLDR            S0, [R3,#0x24]
    VNMUL.F32       S2, S2, S0
    VSUB.F32        S2, S2, S6
    VADD.F32        S2, S2, S4
    VABS.F32        S4, S2
    VCMPE.F32       S4, S0
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) )
    __asm { VDIV.F32        S0, S2, S0 }
    v10 = *((_DWORD *)v1 + 46);
    __asm
    {
      VCVTR.S32.F32   S0, S0
      VMOV            R1, S0
    }
    v12 = _R1 + result;
    if ( (signed int)v10 < v12 )
      v10 = v12;
    v30 = v10;
    if ( v10 >= result )
      if ( v10 > result )
      {
        __asm
        {
          VLDR            S16, [R10,#-0x1C]
          VLDR            S18, [R10,#-0x18]
        }
        v13 = -1;
        _R1 = (int)&v2[4 * ((_R10 - (signed int)v2) >> 2)];
          VLDR            S20, [R10,#-0x14]
          VLDR            S0, [R1,#-0x38]
          VLDR            S2, [R1,#-0x34]
          VLDR            S4, [R1,#-0x30]
          VSUB.F32        S26, S16, S0
          VSUB.F32        S24, S18, S2
          VSUB.F32        S22, S20, S4
        do
          __asm
          {
            VADD.F32        S20, S20, S22
            VADD.F32        S18, S18, S24
            VADD.F32        S16, S16, S26
          }
          if ( _R10 == *((_DWORD *)v1 + 7) )
            v15 = result;
            if ( (char *)_R10 == v2 )
              v15 = 1;
            v16 = v15 + result;
            v17 = v15 + result;
            if ( v17 > 0x9249249 )
              v17 = 153391689;
            _CF = v16 >= v15;
            LOWORD(v15) = -28086;
            if ( !_CF )
            HIWORD(v15) = 2340;
            if ( v17 >= v15 )
              sub_21E57F4();
            v32 = 7 * v17;
            v2 = (char *)j_operator new(28 * v17);
            v19 = *(_QWORD *)((char *)v1 + 20) >> 32;
            v18 = *(_QWORD *)((char *)v1 + 20);
            v20 = (int)&v2[v19 - v18];
            __asm
            {
              VSTR            S16, [R2]
              VSTR            S18, [R2,#4]
              VSTR            S20, [R2,#8]
              VSTR            S16, [R2,#0xC]
              VSTR            S18, [R2,#0x10]
              VSTR            S20, [R2,#0x14]
            }
            *(_BYTE *)(v20 + 24) = -1;
            *(_BYTE *)(v20 + 27) = v34;
            *(_WORD *)(v20 + 25) = v33;
            v21 = v2;
            if ( !_ZF )
              do
              {
                v22 = v21;
                v23 = *(_DWORD *)v18;
                v25 = *(_DWORD *)(v18 + 4);
                v26 = *(_DWORD *)(v18 + 8);
                v24 = v18 + 12;
                v18 += 28;
                v21 += 28;
                *(_DWORD *)v22 = v23;
                *((_DWORD *)v22 + 1) = v25;
                *((_DWORD *)v22 + 2) = v26;
                v22 += 12;
                v27 = *(_DWORD *)(v24 + 4);
                v28 = *(_DWORD *)(v24 + 8);
                v29 = *(_DWORD *)(v24 + 12);
                *(_DWORD *)v22 = *(_DWORD *)v24;
                *((_DWORD *)v22 + 1) = v27;
                *((_DWORD *)v22 + 2) = v28;
                *((_DWORD *)v22 + 3) = v29;
              }
              while ( v19 != v18 );
              v18 = *(_DWORD *)v31;
            _R10 = (int)(v21 + 28);
            if ( v18 )
              j_operator delete((void *)v18);
            v13 = -1;
            *((_DWORD *)v1 + 5) = v2;
            *((_DWORD *)v1 + 6) = _R10;
            *((_DWORD *)v1 + 7) = &v2[4 * v32];
            v10 = v30;
          else
              VSTR            S16, [R10]
              VSTR            S18, [R10,#4]
              VSTR            S20, [R10,#8]
              VSTR            S16, [R10,#0xC]
              VSTR            S18, [R10,#0x10]
              VSTR            S20, [R10,#0x14]
            *(_BYTE *)(_R10 + 24) = v13;
            *(_BYTE *)(_R10 + 27) = v34;
            *(_WORD *)(_R10 + 25) = v33;
            _R10 = *((_DWORD *)v1 + 6) + 28;
            v2 = (char *)*((_DWORD *)v1 + 5);
          result = -1227133513 * ((_R10 - (signed int)v2) >> 2);
        while ( v10 > result );
      }
    else if ( v10 > result )
      result = j_j_j__ZNSt6vectorI8RopeNodeSaIS0_EE17_M_default_appendEj((int)v31, v10 - result);
    else
      result = (unsigned int)&v2[28 * v10];
      *((_DWORD *)v1 + 6) = result;
  return result;
}


int __fastcall RopeSystem::_solveDistanceConstraintBlock(RopeSystem *this, Vec3 *_R1, Vec3 *_R2, Vec3 *_R3, Vec3 *a5, float a6)
{
  int result; // r0@19

  __asm
  {
    VLDR            S2, [R1,#4]
    VLDR            S14, [R2,#4]
    VLDR            S12, [R2]
    VLDR            S3, [R1]
    VSUB.F32        S16, S14, S2
  }
  _R12 = a5;
    VSUB.F32        S9, S12, S3
    VSTR            S2, [SP,#0x70+var_58]
    VLDR            S5, [R2,#8]
    VLDR            S1, [R1,#8]
    VLDR            S0, [R3]
    VLDR            S2, [R12]
    VSUB.F32        S20, S5, S1
    VLDR            S4, [R3,#4]
    VSUB.F32        S11, S0, S12
    VLDR            S8, [R12,#4]
    VSUB.F32        S2, S2, S0
    VSUB.F32        S18, S4, S14
    VLDR            S6, [R3,#8]
    VSUB.F32        S24, S8, S4
    VLDR            S10, [R12,#8]
    VMUL.F32        S0, S9, S9
    VSTR            S12, [SP,#0x70+var_60]
    VMUL.F32        S4, S16, S16
    VSTR            S14, [SP,#0x70+var_64]
    VSUB.F32        S28, S6, S5
    VSTR            S5, [SP,#0x70+var_68]
    VSUB.F32        S26, S10, S6
    VMUL.F32        S8, S11, S11
    VMUL.F32        S12, S18, S18
    VMUL.F32        S14, S2, S2
    VMUL.F32        S6, S24, S24
    VADD.F32        S0, S4, S0
    VMUL.F32        S4, S20, S20
    VMUL.F32        S10, S28, S28
    VADD.F32        S8, S12, S8
    VMUL.F32        S12, S26, S26
    VADD.F32        S6, S6, S14
    VADD.F32        S0, S0, S4
    VADD.F32        S4, S8, S10
    VLDR            S10, =0.0
    VADD.F32        S22, S6, S12
    VMOV.F32        S21, S10
    VSQRT.F32       S6, S0
    VSQRT.F32       S12, S4
    VABS.F32        S0, S6
    VLDR            S4, =1.1921e-7
    VMOV.F32        S17, S10
    VMOV.F32        S19, S10
    VCMPE.F32       S0, S4
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) )
    __asm
    {
      VMOV.F32        S0, #1.0
      VDIV.F32        S0, S0, S6
      VMUL.F32        S19, S0, S20
      VMUL.F32        S17, S0, S16
      VMUL.F32        S21, S0, S9
    }
    VSQRT.F32       S8, S22
    VABS.F32        S0, S12
    VMOV.F32        S20, S10
    VMOV.F32        S16, S10
    VMOV.F32        S9, S10
      VDIV.F32        S0, S0, S12
      VMUL.F32        S9, S0, S28
      VMUL.F32        S16, S0, S18
      VMUL.F32        S20, S0, S11
    VABS.F32        S0, S8
    VSTR            S12, [SP,#0x70+var_70]
    VMOV.F32        S18, S10
    VSTR            S6, [SP,#0x70+var_6C]
    VMOV.F32        S11, S10
    VSTR            S3, [SP,#0x70+var_5C]
    VSTR            S1, [SP,#0x70+var_54]
      VDIV.F32        S0, S0, S8
      VMUL.F32        S11, S0, S26
      VMUL.F32        S18, S0, S24
      VMUL.F32        S10, S0, S2
    VMUL.F32        S0, S16, S17
    VMUL.F32        S2, S20, S21
    VMUL.F32        S12, S10, S10
    VMUL.F32        S14, S18, S18
    VMUL.F32        S1, S20, S20
    VMUL.F32        S3, S16, S16
    VMUL.F32        S13, S18, S16
    VMUL.F32        S15, S10, S20
    VADD.F32        S0, S2, S0
    VMUL.F32        S26, S9, S19
    VADD.F32        S12, S14, S12
    VMUL.F32        S2, S11, S11
    VADD.F32        S1, S3, S1
    VMUL.F32        S14, S9, S9
    VMUL.F32        S22, S21, S21
    VMUL.F32        S24, S17, S17
    VADD.F32        S13, S15, S13
    VMUL.F32        S3, S11, S9
    VADD.F32        S2, S12, S2
    VADD.F32        S0, S0, S26
    VADD.F32        S12, S1, S14
    VMUL.F32        S15, S19, S19
    VADD.F32        S22, S24, S22
    VADD.F32        S14, S13, S3
    VADD.F32        S2, S2, S2
    VNEG.F32        S0, S0
    VADD.F32        S12, S12, S12
    VADD.F32        S1, S22, S15
    VNEG.F32        S14, S14
    VCVT.F64.F32    D15, S2
    VCVT.F64.F32    D13, S12
    VCVT.F64.F32    D12, S0
    VADD.F32        S1, S1, S1
    VCVT.F64.F32    D6, S14
    VMUL.F64        D7, D15, D12
    VMUL.F64        D11, D15, D13
    VCVT.F64.F32    D14, S1
    VMUL.F64        D0, D6, D14
    VMUL.F64        D1, D7, D12
    VMUL.F64        D2, D11, D14
    VMUL.F64        D3, D0, D6
    VSUB.F64        D1, D2, D1
    VSUB.F64        D1, D1, D3
    VLDR            D2, =1.1920929e-7
    VABS.F64        D3, D1
    VCMPE.F64       D3, D2
  if ( _NF ^ _VF )
      VLDR            S3, [SP,#0x70+var_5C]
      VLDR            S0, [SP,#0x70+var_60]
      VLDR            S14, [SP,#0x70+var_58]
      VLDR            S2, [SP,#0x70+var_64]
      VSUB.F32        S0, S3, S0
      VLDR            S1, [SP,#0x70+var_54]
      VSUB.F32        S4, S14, S2
      VLDR            S2, [SP,#0x70+var_68]
      VLDR            S11, =1.1921e-7
      VSUB.F32        S6, S1, S2
      VLDR            S13, [SP,#0x70+arg_4]
      VMUL.F32        S2, S0, S0
      VMUL.F32        S8, S4, S4
      VMUL.F32        S10, S6, S6
      VADD.F32        S2, S8, S2
      VADD.F32        S2, S2, S10
      VSQRT.F32       S12, S2
      VCMPE.F32       S12, S11
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      __asm { VMOV.F32        S0, #1.0 }
      _R5 = unk_28224C4;
      _LR = Vec3::UNIT_Y;
      _R4 = unk_28224C8;
    else
      __asm
      {
        VMOV.F32        S2, #1.0
        VMOV            LR, S0
        VMOV            R5, S4
        VMOV            R4, S6
        VDIV.F32        S0, S2, S12
      }
      VSUB.F32        S2, S12, S13
      VLDR            S12, [R0,#0x50]
      VMOV.F32        S10, #0.5
      VMOV            S6, LR
      VMOV            S8, R4
      VMUL.F32        S4, S2, S10
      VMUL.F32        S0, S4, S0
      VMOV            S4, R5
      VMUL.F32        S0, S0, S12
      VMUL.F32        S4, S0, S4
      VMUL.F32        S6, S0, S6
      VMUL.F32        S0, S0, S8
      VSUB.F32        S14, S14, S4
      VSUB.F32        S8, S3, S6
      VSUB.F32        S1, S1, S0
      VSTR            S8, [R1]
      VSTR            S14, [R1,#4]
      VSTR            S1, [R1,#8]
      VLDR            S8, [R2]
      VADD.F32        S6, S8, S6
      VSTR            S6, [R2]
      VLDR            S8, [R2,#4]
      VADD.F32        S8, S8, S4
      VSTR            S8, [R2,#4]
      VLDR            S4, [R2,#8]
      VADD.F32        S14, S4, S0
      VSTR            S14, [R2,#8]
      VLDR            S0, [R3]
      VLDR            S4, [R3,#4]
      VSUB.F32        S0, S6, S0
      VLDR            S1, [R3,#8]
      VSUB.F32        S3, S8, S4
      VSUB.F32        S5, S14, S1
      VMUL.F32        S4, S0, S0
      VMUL.F32        S1, S3, S3
      VMUL.F32        S7, S5, S5
      VADD.F32        S4, S1, S4
      VADD.F32        S4, S4, S7
      VSQRT.F32       S1, S4
      VABS.F32        S4, S2
      VCMPE.F32       S1, S11
      _R0 = Vec3::UNIT_Y;
      _R1 = unk_28224C8;
        VMOV            R0, S0
        VMOV            R5, S3
        VMOV            R1, S5
        VDIV.F32        S0, S2, S1
      VSUB.F32        S2, S1, S13
      VMOV            S3, R0
      VMOV            S5, R1
      VMUL.F32        S1, S2, S10
      VABS.F32        S2, S2
      VMUL.F32        S0, S1, S0
      VMOV            S1, R5
      VADD.F32        S4, S2, S4
      VMUL.F32        S3, S0, S3
      VMUL.F32        S1, S0, S1
      VMUL.F32        S0, S0, S5
      VSUB.F32        S6, S6, S3
      VSUB.F32        S8, S8, S1
      VSUB.F32        S14, S14, S0
      VLDR            S6, [R3]
      VADD.F32        S6, S6, S3
      VSTR            S6, [R3]
      VLDR            S8, [R3,#4]
      VADD.F32        S8, S8, S1
      VSTR            S8, [R3,#4]
      VLDR            S14, [R3,#8]
      VADD.F32        S14, S14, S0
      VSTR            S14, [R3,#8]
      VLDMIA          R12, {S0-S1}
      VSUB.F32        S3, S8, S1
      VLDR            S5, [R12,#8]
      VSUB.F32        S5, S14, S5
      VMUL.F32        S7, S3, S3
      VMUL.F32        S1, S0, S0
      VMUL.F32        S9, S5, S5
      VADD.F32        S1, S7, S1
      VADD.F32        S1, S1, S9
      VSQRT.F32       S1, S1
      _R2 = unk_28224C4;
        VMOV            R2, S3
      VMOV            S1, R1
      VMUL.F32        S10, S2, S10
      VMUL.F32        S0, S10, S0
      VMOV            S10, R2
      VMOV            S12, R0
      VMUL.F32        S12, S0, S12
      VMUL.F32        S10, S0, S10
      VMUL.F32        S0, S0, S1
      VSUB.F32        S6, S6, S12
      VSUB.F32        S8, S8, S10
      VLDR            S6, [R12]
      VADD.F32        S6, S6, S12
      VSTR            S6, [R12]
      VLDR            S6, [R12,#4]
      VADD.F32        S6, S6, S10
      VSTR            S6, [R12,#4]
      VLDR            S6, [R12,#8]
      VADD.F32        S6, S6, S0
      VADD.F32        S0, S4, S2
      VSTR            S6, [R12,#8]
  else
      VMOV.F64        D2, #1.0
      VDIV.F64        D2, D2, D1
      VMUL.F64        D3, D6, D6
      VSUB.F64        D1, D11, D3
      VMUL.F64        D6, D6, D12
      VMUL.F64        D3, D15, D14
      VMUL.F64        D7, D2, D7
      VMUL.F64        D1, D2, D1
      VMUL.F64        D11, D6, D2
      VLDR            S12, [SP,#0x70+arg_4]
      VMUL.F64        D3, D3, D2
      VMOV.F32        S13, S12
      VLDR            S12, [SP,#0x70+var_6C]
      VMUL.F64        D15, D2, D0
      VLDR            S0, [SP,#0x70+var_70]
      VSUB.F32        S12, S12, S13
      VCVT.F32.F64    S1, D1
      VCVT.F32.F64    S14, D7
      VSUB.F32        S0, S0, S13
      VLDR            S15, [SP,#0x70+var_5C]
      VCVT.F32.F64    S6, D3
      VSUB.F32        S2, S8, S13
      VCVT.F32.F64    S8, D11
      VMUL.F32        S3, S0, S14
      VMUL.F32        S1, S1, S12
      VMUL.F64        D13, D13, D14
      VMUL.F64        D12, D12, D12
      VCVT.F32.F64    S7, D15
      VMUL.F32        S14, S12, S14
      VMUL.F32        S6, S6, S0
      VMUL.F32        S13, S8, S2
      VSUB.F32        S1, S1, S3
      VMUL.F32        S3, S2, S7
      VSUB.F64        D11, D13, D12
      VSUB.F32        S6, S6, S14
      VADD.F32        S14, S13, S1
      VMUL.F64        D2, D2, D11
      VLDR            S22, [SP,#0x70+var_54]
      VMUL.F32        S1, S14, S21
      VMUL.F32        S3, S14, S17
      VMUL.F32        S14, S14, S19
      VCVT.F32.F64    S4, D2
      VMUL.F32        S13, S6, S20
      VLDR            S20, [SP,#0x70+var_58]
      VADD.F32        S15, S15, S1
      VADD.F32        S20, S20, S3
      VADD.F32        S22, S22, S14
      VMUL.F32        S5, S0, S7
      VMUL.F32        S8, S8, S12
      VMUL.F32        S7, S6, S16
      VSUB.F32        S1, S13, S1
      VSTR            S15, [R1]
      VMUL.F32        S4, S4, S2
      VSTR            S20, [R1,#4]
      VMUL.F32        S6, S6, S9
      VSTR            S22, [R1,#8]
      VABS.F32        S0, S0
      VLDR            S15, [R2]
      VSUB.F32        S8, S8, S5
      VSUB.F32        S3, S7, S3
      VADD.F32        S1, S1, S15
      VSUB.F32        S14, S6, S14
      VADD.F32        S4, S4, S8
      VSTR            S1, [R2]
      VLDR            S1, [R2,#4]
      VADD.F32        S8, S3, S1
      VMUL.F32        S10, S4, S10
      VMUL.F32        S1, S4, S18
      VMUL.F32        S4, S4, S11
      VLDR            S8, [R2,#8]
      VADD.F32        S8, S14, S8
      VSUB.F32        S14, S10, S13
      VSUB.F32        S6, S4, S6
      VSTR            S8, [R2,#8]
      VLDR            S8, [R3]
      VSUB.F32        S14, S1, S7
      VSTR            S8, [R3]
      VLDR            S8, [R3,#8]
      VADD.F32        S6, S6, S8
      VABS.F32        S8, S12
      VSTR            S6, [R3,#8]
      VADD.F32        S0, S0, S8
      VSUB.F32        S6, S6, S10
      VADD.F32        S0, S0, S2
      VSUB.F32        S6, S6, S1
      VSUB.F32        S4, S6, S4
      VSTR            S4, [R12,#8]
  __asm { VMOV            R0, S0 }
  return result;
}


char *__fastcall RopeSystem::getEndPinEntity(RopeSystem *this)
{
  return (char *)this + 192;
}


int __fastcall RopeSystem::_getBucket(RopeSystem *this, int a2)
{
  RopeSystem *v2; // r9@1
  unsigned int v3; // r4@1
  int v4; // r1@1
  char *v5; // r5@1
  int v6; // r0@1
  unsigned int v7; // r2@1
  int v8; // r3@2
  int v9; // r8@5
  int v10; // r6@6
  int v11; // r7@6
  void *v12; // r0@7

  v2 = this;
  v3 = a2;
  v5 = (char *)this + 32;
  v4 = *((_DWORD *)this + 8);
  v6 = *((_DWORD *)this + 9);
  v7 = -1431655765 * ((v6 - v4) >> 4);
  if ( v7 <= v3 )
  {
    v8 = v3 + 1;
    if ( v3 + 1 <= v7 )
    {
      if ( v3 + 1 < v7 )
      {
        v9 = v4 + 48 * v8;
        if ( v6 != v9 )
        {
          v10 = v6 - 48;
          v11 = v4 + 48 * v3;
          do
          {
            v12 = *(void **)(v11 + 80);
            if ( v12 )
              j_operator delete(v12);
            v11 += 48;
          }
          while ( v10 != v11 );
        }
        *((_DWORD *)v2 + 9) = v9;
      }
    }
    else
      j_std::vector<AABBBucket,std::allocator<AABBBucket>>::_M_default_append((int)v5, v8 - v7);
  }
  return *(_DWORD *)v5 + 48 * v3;
}


int __fastcall RopeSystem::initialize(RopeSystem *this, const RopeParams *a2)
{
  char *v2; // r12@1
  int v3; // r4@1
  int v4; // r5@1
  int v5; // lr@1
  char *v6; // r12@1
  int v7; // r4@1
  int v8; // r5@1
  int v9; // lr@1
  int v10; // r2@1
  int v11; // r3@1
  int v12; // r5@1
  char *v13; // r1@1

  v2 = (char *)this + 56;
  v3 = *((_DWORD *)a2 + 1);
  v4 = *((_DWORD *)a2 + 2);
  v5 = *((_DWORD *)a2 + 3);
  *(_DWORD *)v2 = *(_DWORD *)a2;
  *((_DWORD *)v2 + 1) = v3;
  *((_DWORD *)v2 + 2) = v4;
  *((_DWORD *)v2 + 3) = v5;
  v6 = (char *)this + 72;
  v7 = *((_DWORD *)a2 + 5);
  v8 = *((_DWORD *)a2 + 6);
  v9 = *((_DWORD *)a2 + 7);
  *(_DWORD *)v6 = *((_DWORD *)a2 + 4);
  *((_DWORD *)v6 + 1) = v7;
  *((_DWORD *)v6 + 2) = v8;
  *((_DWORD *)v6 + 3) = v9;
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 8);
  *((_DWORD *)this + 23) = *((_DWORD *)a2 + 9);
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 10);
  *((_DWORD *)this + 25) = *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 26) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 13);
  v10 = *((_DWORD *)a2 + 14);
  v11 = *((_DWORD *)a2 + 15);
  v12 = *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 31) = *((_DWORD *)a2 + 17);
  v13 = (char *)this + 112;
  *(_DWORD *)v13 = v10;
  *((_DWORD *)v13 + 1) = v11;
  *((_DWORD *)v13 + 2) = v12;
  return j_j_j__ZN10RopeSystem15_initializePinsEv(this);
}


void __fastcall RopeSystem::_prepareAABBBuckets(RopeSystem *this)
{
  RopeSystem::_prepareAABBBuckets(this);
}


int __fastcall RopeSystem::_integrate(RopeSystem *this)
{
  char *v2; // r4@1
  int v3; // r8@1
  int v4; // r0@1
  __int64 v9; // r0@3
  unsigned int v10; // r7@4
  int v12; // r4@5
  unsigned int v13; // r10@6
  signed int v14; // r11@6
  int v18; // r0@17
  unsigned int v19; // r7@17
  _DWORD *v20; // r4@22
  __int64 v21; // kr10_8@22
  unsigned int v22; // r2@22
  unsigned int v23; // r3@22
  unsigned int v24; // r9@22
  int v25; // r3@23
  int v26; // r8@26
  int v27; // r4@27
  void *v28; // r0@28
  RopeSystem *v30; // [sp+Ch] [bp-CCh]@1
  int v31; // [sp+10h] [bp-C8h]@3
  unsigned int v32; // [sp+14h] [bp-C4h]@4
  int *v33; // [sp+24h] [bp-B4h]@5
  int *v34; // [sp+28h] [bp-B0h]@5
  unsigned int v35; // [sp+2Ch] [bp-ACh]@5
  char v36; // [sp+30h] [bp-A8h]@7
  float v37; // [sp+4Ch] [bp-8Ch]@7
  float v38; // [sp+50h] [bp-88h]@8
  float v39; // [sp+54h] [bp-84h]@11
  float v40; // [sp+58h] [bp-80h]@7
  float v41; // [sp+5Ch] [bp-7Ch]@8
  float v42; // [sp+60h] [bp-78h]@11
  float v43; // [sp+64h] [bp-74h]@3
  float v44; // [sp+70h] [bp-68h]@3
  char v45; // [sp+7Ch] [bp-5Ch]@3

  _R10 = this;
  v30 = this;
  v2 = (char *)this + 32;
  v3 = *((_DWORD *)this + 8);
  v4 = *((_DWORD *)this + 9);
  if ( v4 == v3 )
  {
    j_std::vector<AABBBucket,std::allocator<AABBBucket>>::_M_default_append((int)v2, 1 - -1431655765 * ((v4 - v3) >> 4));
    v3 = *(_DWORD *)v2;
  }
  __asm
    VLDR            S0, [R10,#0x3C]
    VNEG.F32        S2, S0
    VSTR            S0, [SP,#0xD8+var_74]
    VSTR            S0, [SP,#0xD8+var_70]
  v31 = (int)v2;
    VSTR            S0, [SP,#0xD8+var_6C]
    VSTR            S2, [SP,#0xD8+var_68]
    VSTR            S2, [SP,#0xD8+var_64]
    VSTR            S2, [SP,#0xD8+var_60]
  j_AABB::AABB((int)&v45, (int)&v44, (int)&v43);
  v9 = *(_QWORD *)((char *)_R10 + 20);
  if ( HIDWORD(v9) != (_DWORD)v9 )
    __asm
    {
      VLDR            S0, [R10,#0x38]
      VLDR            S16, =0.95
      VNEG.F32        S18, S0
    }
    v10 = 0;
    v32 = 0;
    do
      v35 = v10;
      _R7 = v9 + 28 * v10;
      __asm
      {
        VLDR            S0, [R7]
        VLDR            S6, [R7,#0xC]
        VLDR            S4, [R7,#8]
        VLDR            S10, [R7,#0x14]
        VSUB.F32        S0, S0, S6
        VLDR            S2, [R7,#4]
        VSUB.F32        S4, S4, S10
        VLDR            S8, [R7,#0x10]
        VLDR            S6, [R10,#0x4C]
        VSUB.F32        S2, S2, S8
        VMUL.F32        S0, S0, S6
        VMUL.F32        S4, S6, S4
        VMUL.F32        S2, S2, S6
        VSTR            S0, [SP,#0xD8+var_80]
        VSTR            S4, [SP,#0xD8+var_78]
        VLDR            S0, [R10,#0x40]
        VADD.F32        S20, S0, S2
        VSTR            S20, [SP,#0xD8+var_7C]
        VMOV.F32        S0, S20
      }
      *(_BYTE *)(_R7 + 24) = -1;
      v34 = (int *)(_R7 + 8);
      v33 = (int *)(_R7 + 4);
      v12 = *(_QWORD *)(v3 + 32);
      if ( *(_QWORD *)(v3 + 32) >> 32 != v12 )
        v13 = 0;
        v14 = 28;
        do
        {
          j_AABB::cloneMove((AABB *)&v36, (const Vec3 *)&v45, _R7);
          j_AABB::clipCollide((AABB *)&v37, (const AABB *)(v12 + v14 - 28), (const Vec3 *)&v36, (int)&v40, 0, 0);
          if ( *(_BYTE *)(v12 + v14) )
          {
            __asm
            {
              VLDR            S0, [SP,#0xD8+var_7C]
              VLDR            S2, [SP,#0xD8+var_88]
              VCMPE.F32       S2, S0
              VMRS            APSR_nzcv, FPSCR
            }
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              __asm
              {
                VSTRGT          S2, [SP,#0xD8+var_7C]
                VMOVGT.F32      S0, S2
              }
          }
          else
            v40 = v37;
            v41 = v38;
            __asm { VMOV            S0, R0 }
            v42 = v39;
          v12 = *(_QWORD *)(v3 + 32);
          v14 += 32;
          ++v13;
        }
        while ( v13 < (signed int)((*(_QWORD *)(v3 + 32) >> 32) - v12) >> 5 );
        VCMPE.F32       S20, S0
        VMRS            APSR_nzcv, FPSCR
        VCMPE.F32       S18, S16
      if ( !_ZF )
        *(_BYTE *)(_R7 + 24) = 1;
      __asm { VMRS            APSR_nzcv, FPSCR }
      _R0 = *(_DWORD *)_R7;
      *(_DWORD *)(_R7 + 12) = *(_DWORD *)_R7;
      __asm { VMOV            S0, R0 }
      _R10 = v30;
      _R1 = *v33;
      *(_DWORD *)(_R7 + 16) = *v33;
      _R2 = *v34;
      *(_DWORD *)(_R7 + 20) = *v34;
        VLDR            S2, [SP,#0xD8+var_80]
        VADD.F32        S0, S0, S2
        VMOV            S2, R1
        VSTR            S0, [R7]
        VLDR            S0, [SP,#0xD8+var_7C]
        VADD.F32        S0, S2, S0
        VMOV            S2, R2
        VSTR            S0, [R4]
        VLDR            S0, [SP,#0xD8+var_78]
        VSTR            S0, [R3]
      if ( _NF ^ _VF )
        v18 = *((_DWORD *)v30 + 44);
        v19 = v35;
      else
        v18 = v35 + 2;
        if ( v35 + 2 != *((_DWORD *)v30 + 44) )
          __asm { VLDR            S20, [R10,#0x38] }
LABEL_22:
          v20 = (_DWORD *)v31;
          v21 = *((_QWORD *)v30 + 4);
          v22 = -1431655765 * ((HIDWORD(v21) - (signed int)v21) >> 4);
          v23 = v32 + 1;
          v32 = v23;
          v24 = v23;
          if ( v22 <= v23 )
            v25 = v23 + 1;
            if ( v24 + 1 <= v22 )
              if ( v24 + 1 < v22 )
                v26 = v21 + 48 * v25;
                if ( HIDWORD(v21) != v26 )
                {
                  v27 = v21 + 16 * (2 * v24 + v32);
                  do
                  {
                    v28 = *(void **)(v27 + 80);
                    if ( v28 )
                      j_operator delete(v28);
                    v27 += 48;
                  }
                  while ( HIDWORD(v21) - 48 != v27 );
                }
                v20 = (_DWORD *)v31;
                *((_DWORD *)v30 + 9) = v26;
            else
              j_std::vector<AABBBucket,std::allocator<AABBBucket>>::_M_default_append(v31, v25 - v22);
          __asm { VNEG.F32        S18, S20 }
          v10 = v19 + 1;
          v31 = (int)v20;
          v3 = *v20 + 48 * v24;
          goto LABEL_33;
      __asm { VLDR            S20, [R10,#0x38] }
      if ( v19 + 1 == v18 )
        goto LABEL_22;
      __asm { VADD.F32        S18, S20, S18 }
      v10 = v19 + 1;
LABEL_33:
      v9 = *(_QWORD *)((char *)v30 + 20);
    while ( v10 < -1227133513 * ((HIDWORD(v9) - (signed int)v9) >> 2) );
  return v9;
}


int __fastcall RopeSystem::_solveCollision(int a1, int a2, int a3)
{
  int v4; // r5@1
  signed int v5; // r0@1
  signed int v9; // r2@3
  int result; // r0@20
  int v13; // [sp+4h] [bp-24h]@1
  float v15; // [sp+Ch] [bp-1Ch]@1
  float v16; // [sp+10h] [bp-18h]@1
  int v17; // [sp+14h] [bp-14h]@1

  _R4 = a2;
  v15 = 0.0;
  v16 = 0.0;
  v4 = a3;
  v17 = 0;
  v5 = j_RopeAABB::getContactPoint(a3, a2, *(_DWORD *)(a1 + 60), &v13);
  __asm { VLDR            S0, =0.0 }
  if ( v5 != 1 )
    goto LABEL_20;
  if ( v13 == -1 )
  {
    __asm { VLDR            S2, [SP,#0x28+var_18] }
    if ( *(_BYTE *)(v4 + 28) )
    {
      __asm
      {
        VLDR            S4, =0.95
        VCMPE.F32       S2, S4
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        goto LABEL_20;
    }
    __asm
      VLDR            S0, [SP,#0x28+var_20]
      VLDR            S4, [SP,#0x28+var_1C]
      VLDR            S8, [R4]
      VMUL.F32        S2, S2, S0
      VMUL.F32        S4, S4, S0
      VLDR            S6, [SP,#0x28+var_14]
      VADD.F32        S4, S8, S4
      VSTR            S4, [R4]
      VLDR            S4, [R4,#4]
      VADD.F32        S2, S4, S2
      VMUL.F32        S4, S6, S0
      VSTR            S2, [R4,#4]
      VLDR            S2, [R4,#8]
      VADD.F32        S2, S2, S4
      VSTR            S2, [R4,#8]
LABEL_19:
    __asm { VABS.F32        S0, S0 }
  }
  v9 = 0;
  if ( !*(_BYTE *)(v4 + 28) )
    v9 = 1;
  _ZF = v13 == 1;
  if ( v13 != 1 )
    _ZF = v9 == 1;
  if ( _ZF )
    __asm { VLDR            S0, [SP,#0x28+var_20] }
    if ( v13 == 2 )
      _R1 = _R4 + 8;
    else if ( v13 == 1 )
      _R1 = _R4 + 4;
    else
      _R1 = _R4;
      VLDR            S2, [R1]
      VADD.F32        S2, S2, S0
      VSTR            S2, [R1]
    if ( _ZF )
      *(_BYTE *)(_R4 + 24) = 1;
    goto LABEL_19;
LABEL_20:
  __asm { VMOV            R0, S0 }
  return result;
}


signed int __fastcall RopeSystem::_startNewBucket(RopeSystem *this, unsigned int a2, float _R2)
{
  unsigned int v7; // r2@3
  signed int result; // r0@5

  __asm
  {
    VLDR            S0, =0.95
    VMOV            S2, R2
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    v7 = *((_DWORD *)this + 44);
  else
    v7 = a2 + 2;
    if ( a2 + 2 != *((_DWORD *)this + 44) )
      return 1;
  result = 0;
  if ( a2 + 1 == v7 )
    result = 1;
  return result;
}


BackgroundTask *__fastcall RopeSystem::queueTick(RopeSystem *this, BlockSource *a2, int a3, int a4, char a5, int a6, int a7)
{
  RopeSystem *v7; // r6@1
  unsigned __int64 *v8; // r4@1
  BlockSource *v9; // r5@1
  BackgroundTask *result; // r0@1
  unsigned __int8 *v11; // r7@2
  unsigned int v12; // r0@3
  int v13; // r0@6
  unsigned int v14; // r0@8
  unsigned __int64 v15; // kr00_8@14
  unsigned int *v16; // r0@15
  unsigned int v17; // r1@17
  int v18; // r5@20
  unsigned int *v19; // r0@21
  unsigned int v20; // r1@23
  _QWORD *v21; // r0@26
  unsigned int *v22; // r1@27
  unsigned int v23; // r2@29
  __int64 v24; // r1@32
  unsigned int *v25; // r5@37
  unsigned int v26; // r0@39
  char v27; // [sp+8h] [bp-38h]@32
  int (*v28)(void); // [sp+10h] [bp-30h]@32
  _QWORD *v29; // [sp+18h] [bp-28h]@32
  int (*v30)(void); // [sp+20h] [bp-20h]@26

  v7 = this;
  v8 = (unsigned __int64 *)a3;
  v9 = a2;
  result = (BackgroundTask *)RopeSystem::sEnabled[0];
  if ( RopeSystem::sEnabled[0] )
  {
    v11 = (unsigned __int8 *)v7 + 200;
    __dmb();
    do
      v12 = __ldrex(v11);
    while ( __strex(1u, v11) );
    if ( v12 )
    {
      if ( &pthread_create )
      {
        v13 = j_pthread_mutex_lock((pthread_mutex_t *)((char *)v7 + 204));
        if ( v13 )
          sub_21E5E14(v13);
      }
      __dmb();
      do
        v14 = __ldrex(v11);
      while ( __strex(1u, v11) );
      if ( v14 )
        RopePoints::freezeInterpolation((RopeSystem *)((char *)v7 + 4));
        result = (BackgroundTask *)&pthread_create;
        if ( &pthread_create )
          result = (BackgroundTask *)j_pthread_mutex_unlock((pthread_mutex_t *)((char *)v7 + 204));
        return result;
        j_pthread_mutex_unlock((pthread_mutex_t *)((char *)v7 + 204));
    }
    *((_DWORD *)v7 + 44) = *((_DWORD *)v7 + 59);
    *((_DWORD *)v7 + 53) = *((_DWORD *)v7 + 22);
    *((_DWORD *)v7 + 54) = *((_DWORD *)v7 + 23);
    *((_DWORD *)v7 + 55) = *((_DWORD *)v7 + 24);
    *((_DWORD *)v7 + 56) = *((_DWORD *)v7 + 25);
    *((_DWORD *)v7 + 57) = *((_DWORD *)v7 + 26);
    *((_DWORD *)v7 + 58) = *((_DWORD *)v7 + 27);
    *((_BYTE *)v7 + 208) = RopeSystem::_cacheColliders(v7, v9) ^ 1;
    RopeSystem::_tickWaves(v7);
    v15 = *v8;
    if ( *v8 >> 32 )
      v16 = (unsigned int *)(HIDWORD(v15) + 8);
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 + 1, v16) );
      else
        ++*v16;
    v18 = *(_DWORD *)(j_BlockSource::getDimension(v9) + 188);
    if ( HIDWORD(v15) )
      v19 = (unsigned int *)(HIDWORD(v15) + 8);
          v20 = __ldrex(v19);
        while ( __strex(v20 + 1, v19) );
        ++*v19;
    v30 = 0;
    v21 = j_operator new(8u);
    *v21 = v15;
      v22 = (unsigned int *)(HIDWORD(v15) + 8);
          v23 = __ldrex(v22);
        while ( __strex(v23 + 1, v22) );
        ++*v22;
    LODWORD(v24) = sub_198CBCC;
    v29 = v21;
    HIDWORD(v24) = sub_198CA88;
    *(_QWORD *)&v30 = v24;
    v28 = 0;
    result = j_TaskGroup::queue(v18, (int)&v29, (int)&v27, 1u, 0xFFFFFFFF);
    if ( v28 )
      result = (BackgroundTask *)v28();
    if ( v30 )
      result = (BackgroundTask *)v30();
      v25 = (unsigned int *)(HIDWORD(v15) + 8);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v15) + 12))(HIDWORD(v15));
          result = (BackgroundTask *)__ldrex(v25);
        while ( __strex((unsigned int)result - 1, v25) );
        result = (BackgroundTask *)(*v25)--;
      if ( result == (BackgroundTask *)1 )
        result = (BackgroundTask *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v15) + 12))(HIDWORD(v15));
  }
  return result;
}


int __fastcall RopeSystem::cutAtPercent(int result, float _R1)
{
  __asm { VMOV            S2, R1 }
  _R2 = -1227133513 * ((signed int)((*(_QWORD *)(result + 20) >> 32) - *(_QWORD *)(result + 20)) >> 2) - 1;
  __asm
  {
    VMOV            S0, R2
    VCVT.F32.U32    S0, S0
    VMUL.F32        S0, S0, S2
    VCVTR.U32.F32   S0, S0
    VSTR            S0, [R0,#0xEC]
  }
  return result;
}
