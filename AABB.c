

int __fastcall AABB::translated(int result, const Vec3 *_R1, int _R2)
{
  char v9; // r1@3

  __asm
  {
    VLDR            S0, [R1]
    VLDR            S14, [R2]
    VLDR            S2, [R1,#4]
    VLDR            S4, [R1,#8]
    VADD.F32        S5, S14, S0
    VLDR            S6, [R1,#0xC]
    VLDR            S10, [R1,#0x10]
    VLDR            S12, [R1,#0x14]
    VLDR            S1, [R2,#4]
    VLDR            S3, [R2,#8]
    VADD.F32        S8, S1, S2
    VSTR            S5, [R0]
    VADD.F32        S2, S3, S4
  }
  _R1 = &Vec3::ZERO;
    VADD.F32        S4, S6, S14
    VADD.F32        S6, S10, S1
    VADD.F32        S0, S12, S3
    VLDR            S10, [R1]
    VCMPE.F32       S5, S10
    VMRS            APSR_nzcv, FPSCR
    VSTR            S8, [R0,#4]
    VSTR            S2, [R0,#8]
    VSTR            S4, [R0,#0xC]
    VSTR            S6, [R0,#0x10]
    VSTR            S0, [R0,#0x14]
  if ( _ZF )
    _R1 = &Vec3::ZERO;
    __asm { VLDR            S12, [R1,#4] }
    v9 = 0;
    __asm
    {
      VCMPE.F32       S8, S12
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _ZF )
      __asm
      {
        VCMPE.F32       S6, S12
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _ZF )
        __asm
        {
          VCMPEEQ.F32     S4, S10
          VMRSEQ          APSR_nzcv, FPSCR
        }
        _R2 = &Vec3::ZERO;
          VLDR            S4, [R2,#8]
          VCMPE.F32       S2, S4
          VMRS            APSR_nzcv, FPSCR
        if ( _ZF )
          __asm { VCMPE.F32       S0, S4 }
          v9 = 0;
          __asm { VMRS            APSR_nzcv, FPSCR }
          if ( _ZF )
            v9 = 1;
    *(_BYTE *)(result + 24) = v9;
  else
    *(_BYTE *)(result + 24) = 0;
  return result;
}


int __fastcall AABB::distanceToSqr(AABB *this, const AABB *_R1)
{
  int result; // r0@20

  __asm
  {
    VLDR            S0, [R0]
    VLDR            S2, [R1,#0xC]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    __asm
    {
      VLDR            S0, [R0]
      VLDR            S2, [R1,#0xC]
    }
LABEL_6:
      VSUB.F32        S0, S2, S0
      VMUL.F32        S0, S0, S0
    goto LABEL_8;
    VLDR            S0, [R0,#0xC]
    VLDR            S2, [R1]
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      VLDR            S0, [R0,#0xC]
      VLDR            S2, [R1]
    goto LABEL_6;
  __asm { VLDR            S0, =0.0 }
LABEL_8:
    VLDR            S2, [R0,#4]
    VLDR            S4, [R1,#0x10]
    VCMPE.F32       S4, S2
      VLDR            S2, [R0,#4]
      VLDR            S4, [R1,#0x10]
  else
      VLDR            S2, [R0,#0x10]
      VLDR            S4, [R1,#4]
      VCMPE.F32       S4, S2
      VMRS            APSR_nzcv, FPSCR
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      goto LABEL_14;
    VSUB.F32        S2, S4, S2
    VMUL.F32        S2, S2, S2
    VADD.F32        S0, S2, S0
LABEL_14:
    VLDR            S2, [R0,#8]
    VLDR            S4, [R1,#0x14]
      VLDR            S2, [R0,#8]
      VLDR            S4, [R1,#0x14]
LABEL_19:
      VSUB.F32        S2, S4, S2
      VMUL.F32        S2, S2, S2
      VADD.F32        S0, S2, S0
    goto LABEL_20;
    VLDR            S2, [R0,#0x14]
    VLDR            S4, [R1,#8]
      VLDR            S2, [R0,#0x14]
      VLDR            S4, [R1,#8]
    goto LABEL_19;
LABEL_20:
  __asm { VMOV            R0, S0 }
  return result;
}


signed int __fastcall AABB::intersectSegment(AABB *this, const Vec3 *_R1, const Vec3 *_R2, Vec3 *a4, Vec3 *a5)
{
  int v9; // r12@3
  int *v10; // lr@13
  int *v11; // r4@13
  int *v12; // r4@31
  int *v14; // r4@33
  int *v15; // r4@49
  int *v17; // r4@51
  signed __int64 v18; // r0@57
  signed int v19; // r0@64
  signed int v20; // r0@70
  int v22; // [sp+0h] [bp-18h]@1
  int v23; // [sp+4h] [bp-14h]@1
  float v24; // [sp+8h] [bp-10h]@13
  float v25; // [sp+Ch] [bp-Ch]@13

  v23 = 0;
  v22 = 1065353216;
  __asm
  {
    VLDR            S2, [R1]
    VLDR            S0, [R2]
    VLDR            S6, [R0]
    VSUB.F32        S4, S0, S2
    VLDR            S0, =0.000001
    VLDR            S8, [R0,#0xC]
    VABS.F32        S10, S4
    VCMPE.F32       S10, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    v9 = 0;
    __asm
    {
      VCMPE.F32       S2, S8
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      return v9;
      VCMPE.F32       S2, S6
    if ( _NF ^ _VF )
      VMOV.F32        S12, #1.0
      VLDR            S10, =0.0
  else
      VSUB.F32        S6, S6, S2
      VSUB.F32        S8, S8, S2
      VDIV.F32        S6, S6, S4
      VDIV.F32        S10, S8, S4
      VCMPE.F32       S6, S10
      VSTR            S6, [SP,#0x18+var_C]
      VSTR            S10, [SP,#0x18+var_10]
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm
      {
        VMOV.F32        S8, S6
        VMOV.F32        S6, S10
      }
    else
        VMOV.F32        S8, S10
        VSTR            S10, [SP,#0x18+var_C]
        VSTR            S6, [SP,#0x18+var_10]
      VCMPE.F32       S6, #0.0
      return 0;
      VMOV.F32        S10, #1.0
      VCMPE.F32       S8, S10
      VCMPE.F32       S8, #0.0
    v10 = (int *)&v25;
    __asm { VCMPE.F32       S6, S10 }
    v11 = (int *)&v24;
      v10 = &v23;
    __asm { VMRS            APSR_nzcv, FPSCR }
    v23 = *v10;
    __asm { VMOV            S10, R12 }
    if ( !(_NF ^ _VF) )
      v11 = &v22;
    v22 = *v11;
    __asm { VMOV            S12, R4 }
    VLDR            S6, [R1,#4]
    VLDR            S8, [R2,#4]
    VLDR            S14, [R0,#4]
    VSUB.F32        S8, S8, S6
    VLDR            S1, [R0,#0x10]
    VABS.F32        S3, S8
    VCMPE.F32       S3, S0
      VCMPE.F32       S6, S1
      VCMPE.F32       S6, S14
      VSUB.F32        S14, S14, S6
      VSUB.F32        S1, S1, S6
      VDIV.F32        S14, S14, S8
      VDIV.F32        S3, S1, S8
      VCMPE.F32       S14, S3
      VSTR            S14, [SP,#0x18+var_C]
      VSTR            S3, [SP,#0x18+var_10]
        VMOV.F32        S1, S14
        VMOV.F32        S14, S3
        VMOV.F32        S1, S3
        VSTR            S3, [SP,#0x18+var_C]
        VSTR            S14, [SP,#0x18+var_10]
      VCMPE.F32       S10, S14
      VCMPELE.F32     S1, S12
      VMRSLE          APSR_nzcv, FPSCR
      VCMPE.F32       S10, S1
    v12 = (int *)&v25;
    __asm { VCMPE.F32       S14, S12 }
      v12 = &v23;
    _LR = *v12;
    v14 = (int *)&v24;
    v23 = _LR;
    __asm { VMOV            S10, LR }
      v14 = &v22;
    v22 = *v14;
    VLDR            S14, [R1,#8]
    VLDR            S1, [R2,#8]
    VLDR            S3, [R0,#8]
    VSUB.F32        S1, S1, S14
    VLDR            S5, [R0,#0x14]
    VABS.F32        S7, S1
    VCMPE.F32       S7, S0
      VCMPE.F32       S14, S5
    goto LABEL_54;
    VSUB.F32        S3, S3, S14
    VSUB.F32        S5, S5, S14
    VDIV.F32        S3, S3, S1
    VDIV.F32        S7, S5, S1
    VCMPE.F32       S3, S7
    VSTR            S3, [SP,#0x18+var_C]
    VSTR            S7, [SP,#0x18+var_10]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      VMOV.F32        S5, S3
      VMOV.F32        S3, S7
      VMOV.F32        S5, S7
      VSTR            S7, [SP,#0x18+var_C]
    VCMPE.F32       S10, S3
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    return 0;
    VCMPELE.F32     S5, S12
    VMRSLE          APSR_nzcv, FPSCR
    VCMPE.F32       S10, S5
  v15 = (int *)&v25;
  __asm { VCMPE.F32       S3, S12 }
  if ( !(_NF ^ _VF) )
    v15 = &v23;
  __asm { VMRS            APSR_nzcv, FPSCR }
  _LR = *v15;
  v17 = (int *)&v24;
  v23 = _LR;
  __asm { VMOV            S10, LR }
    v17 = &v22;
  v22 = *v17;
LABEL_54:
    VMUL.F32        S4, S4, S10
    VMUL.F32        S12, S8, S10
    VMUL.F32        S10, S1, S10
    VADD.F32        S8, S4, S2
    VADD.F32        S4, S12, S6
    VADD.F32        S2, S10, S14
    VSTR            S8, [R3]
    VSTR            S4, [R3,#4]
    VSTR            S2, [R3,#8]
    VLDR            S10, [R2]
    VSUB.F32        S12, S8, S6
    VLDR            S6, [R1]
    VABS.F32        S12, S12
    VCMPE.F32       S12, S0
    goto LABEL_77;
    VLDR            S12, [R0,#0xC]
    VSUB.F32        S8, S8, S12
    VABS.F32        S8, S8
    VCMPE.F32       S8, S0
LABEL_77:
    __asm { VSUB.F32        S0, S10, S6 }
    v18 = 1065353216LL;
      VCMPE.F32       S0, #0.0
      LODWORD(v18) = -1082130432;
    *(_QWORD *)a5 = v18;
    *((_DWORD *)a5 + 2) = 0;
      VLDR            S10, [R0,#4]
      VLDR            S6, [R1,#4]
      VSUB.F32        S10, S4, S10
      VLDR            S8, [R2,#4]
      VABS.F32        S10, S10
      VCMPE.F32       S10, S0
      goto LABEL_78;
      VLDR            S10, [R0,#0x10]
      VSUB.F32        S4, S4, S10
      VABS.F32        S4, S4
      VCMPE.F32       S4, S0
LABEL_78:
      __asm { VSUB.F32        S0, S8, S6 }
      v19 = 1065353216;
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        v19 = -1082130432;
      *(_DWORD *)a5 = 0;
      *((_DWORD *)a5 + 1) = v19;
      *((_DWORD *)a5 + 2) = 0;
        VLDR            S8, [R0,#8]
        VLDR            S4, [R1,#8]
        VSUB.F32        S8, S2, S8
        VLDR            S6, [R2,#8]
        VABS.F32        S8, S8
        VCMPE.F32       S8, S0
      if ( _NF ^ _VF )
        goto LABEL_79;
        VLDR            S8, [R0,#0x14]
        VSUB.F32        S2, S2, S8
        VABS.F32        S2, S2
        VCMPE.F32       S2, S0
LABEL_79:
        __asm { VSUB.F32        S0, S6, S4 }
        v20 = 1065353216;
        __asm
        {
          VCMPE.F32       S0, #0.0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          v20 = -1082130432;
        *(_DWORD *)a5 = 0;
        *((_DWORD *)a5 + 1) = 0;
        *((_DWORD *)a5 + 2) = v20;
  return 1;
}


int __fastcall AABB::AABB(int result, int _R1, int _R2)
{
  __int64 v7; // kr00_8@1
  char v10; // r2@3

  __asm
  {
    VLDR            S0, [R1]
    VMOV            S8, R2
    VLDR            S4, [R1,#4]
    VLDR            S6, [R1,#8]
    VADD.F32        S2, S0, S8
    VADD.F32        S4, S4, S8
    VADD.F32        S0, S6, S8
  }
  v7 = *(_QWORD *)_R1;
  *(_DWORD *)(result + 8) = *(_DWORD *)(_R1 + 8);
  _R12 = &Vec3::ZERO;
  *(_QWORD *)result = v7;
    VSTR            S2, [R0,#0xC]
    VSTR            S4, [R0,#0x10]
    VSTR            S0, [R0,#0x14]
    VLDR            S6, [R12]
    VLDR            S8, [R1]
    VCMPE.F32       S8, S6
    VMRS            APSR_nzcv, FPSCR
  if ( _ZF )
    __asm { VLDR            S10, [R1,#4] }
    _R2 = &Vec3::ZERO;
    __asm { VLDR            S8, [R2,#4] }
    v10 = 0;
    __asm
    {
      VCMPE.F32       S10, S8
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _ZF )
      __asm
      {
        VCMPE.F32       S4, S8
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _ZF )
        __asm
        {
          VCMPEEQ.F32     S2, S6
          VMRSEQ          APSR_nzcv, FPSCR
          VLDR            S4, [R1,#8]
        }
        _R3 = &Vec3::ZERO;
          VLDR            S2, [R3,#8]
          VCMPE.F32       S4, S2
          VMRS            APSR_nzcv, FPSCR
        if ( _ZF )
          __asm { VCMPE.F32       S0, S2 }
          v10 = 0;
          __asm { VMRS            APSR_nzcv, FPSCR }
          if ( _ZF )
            v10 = 1;
    *(_BYTE *)(result + 24) = v10;
  else
    *(_BYTE *)(result + 24) = 0;
  return result;
}


int __fastcall AABB::clipYCollide(AABB *this, const AABB *_R1, float _R2, int a4)
{
  int *v8; // r1@11
  int result; // r0@23
  int v11; // [sp+0h] [bp-8h]@13
  float v12; // [sp+4h] [bp-4h]@11

  __asm
  {
    VLDR            S2, [R0,#8]
    VMOV            S0, R2
    VLDR            S4, [R1,#0x14]
    VCMPE.F32       S4, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm
    {
      VLDR            S2, [R0,#0x14]
      VLDR            S4, [R1,#8]
      VCMPE.F32       S4, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      __asm
      {
        VLDR            S2, [R0]
        VLDR            S4, [R1,#0xC]
        VCMPE.F32       S4, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm
        {
          VLDR            S2, [R0,#0xC]
          VLDR            S4, [R1]
          VCMPE.F32       S4, S2
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
          __asm
          {
            VLDR            S2, [R1,#4]
            VLDR            S4, [R0,#0x10]
            VSUB.F32        S2, S4, S2
            VCMPE.F32       S2, #0.0
            VSTR            S2, [SP,#8+var_4]
            VMRS            APSR_nzcv, FPSCR
          }
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            __asm
            {
              VSUB.F32        S4, S2, S0
              VCMPE.F32       S4, #0.0
              VMRS            APSR_nzcv, FPSCR
            }
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              __asm { VMOVGT.F32      S0, S2 }
          else
              VLDR            S4, [R1,#0x10]
              VLDR            S6, [R0,#4]
              VSUB.F32        S4, S6, S4
            if ( _NF ^ _VF )
              if ( !a4 )
              {
                __asm
                {
                  VCMPE.F32       S4, #0.0
                  VLDR            S0, =0.0
                  VMRS            APSR_nzcv, FPSCR
                  VCMPE.F32       S2, #0.0
                }
                v8 = (int *)&v12;
                if ( _NF ^ _VF )
                  __asm { VMOVLT.F32      S0, S4 }
                __asm { VMRS            APSR_nzcv, FPSCR }
                v11 = 0;
                __asm { VNEG.F32        S4, S0 }
                if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                  v8 = &v11;
                _R0 = *(float *)v8;
                  VMOV            S2, R0
                  VCMPE.F32       S2, S4
                  __asm { VMOVLT.F32      S0, S2 }
                v12 = *(float *)v8;
              }
            else
              __asm
                VSUB.F32        S2, S4, S0
                VCMPE.F32       S2, #0.0
                VMRS            APSR_nzcv, FPSCR
              if ( _NF ^ _VF )
                __asm { VMOVLT.F32      S0, S4 }
  __asm { VMOV            R0, S0 }
  return result;
}


int __fastcall AABB::resize(int result, const Vec3 *_R1, int _R2)
{
  char v9; // r1@3

  __asm
  {
    VLDR            S0, [R1]
    VMOV.F32        S12, #0.5
    VLDR            S6, [R1,#0xC]
    VLDR            S2, [R1,#4]
    VLDR            S8, [R1,#0x10]
    VSUB.F32        S6, S6, S0
    VLDR            S4, [R1,#8]
    VLDR            S10, [R1,#0x14]
    VSUB.F32        S8, S8, S2
    VLDR            S14, [R2]
    VSUB.F32        S10, S10, S4
    VLDR            S1, [R2,#4]
    VLDR            S3, [R2,#8]
    VMUL.F32        S14, S14, S12
    VMUL.F32        S6, S6, S12
    VMUL.F32        S8, S8, S12
  }
  _R1 = &Vec3::ZERO;
    VMUL.F32        S10, S10, S12
    VADD.F32        S0, S6, S0
    VMUL.F32        S6, S1, S12
    VADD.F32        S1, S8, S2
    VMUL.F32        S12, S3, S12
    VADD.F32        S10, S10, S4
    VSUB.F32        S3, S0, S14
    VADD.F32        S4, S14, S0
    VSUB.F32        S8, S1, S6
    VADD.F32        S6, S6, S1
    VSUB.F32        S2, S10, S12
    VADD.F32        S0, S12, S10
    VLDR            S10, [R1]
    VCMPE.F32       S3, S10
    VSTR            S3, [R0]
    VMRS            APSR_nzcv, FPSCR
    VSTR            S8, [R0,#4]
    VSTR            S2, [R0,#8]
    VSTR            S4, [R0,#0xC]
    VSTR            S6, [R0,#0x10]
    VSTR            S0, [R0,#0x14]
  if ( _ZF )
    _R1 = &Vec3::ZERO;
    __asm { VLDR            S12, [R1,#4] }
    v9 = 0;
    __asm
    {
      VCMPE.F32       S8, S12
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _ZF )
      __asm
      {
        VCMPE.F32       S6, S12
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _ZF )
        __asm
        {
          VCMPEEQ.F32     S4, S10
          VMRSEQ          APSR_nzcv, FPSCR
        }
        _R2 = &Vec3::ZERO;
          VLDR            S4, [R2,#8]
          VCMPE.F32       S2, S4
          VMRS            APSR_nzcv, FPSCR
        if ( _ZF )
          __asm { VCMPE.F32       S0, S4 }
          v9 = 0;
          __asm { VMRS            APSR_nzcv, FPSCR }
          if ( _ZF )
            v9 = 1;
    *(_BYTE *)(result + 24) = v9;
  else
    *(_BYTE *)(result + 24) = 0;
  return result;
}


int __fastcall AABB::distanceTo(AABB *this, const AABB *_R1)
{
  __asm
  {
    VLDR            S0, [R0]
    VLDR            S2, [R1,#0xC]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    goto LABEL_14;
    VLDR            S0, [R0,#0xC]
    VLDR            S2, [R1]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm { VLDR            S0, =0.0 }
  else
LABEL_14:
    __asm
    {
      VSUB.F32        S0, S2, S0
      VMUL.F32        S0, S0, S0
    }
    VLDR            S2, [R0,#4]
    VLDR            S4, [R1,#0x10]
    VCMPE.F32       S4, S2
    goto LABEL_15;
    VLDR            S2, [R0,#0x10]
    VLDR            S4, [R1,#4]
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
LABEL_15:
      VSUB.F32        S2, S4, S2
      VMUL.F32        S2, S2, S2
      VADD.F32        S0, S2, S0
    VLDR            S2, [R0,#8]
    VLDR            S4, [R1,#0x14]
    goto LABEL_16;
    VLDR            S2, [R0,#0x14]
    VLDR            S4, [R1,#8]
LABEL_16:
  __asm { VMOV            R0, S0 }
  return j_j_j__ZN3mce4Math4sqrtEf_1(_R0, *(float *)&_R1);
}


int __fastcall AABB::move(int result, float _R1, float _R2, float _R3)
{
  __asm
  {
    VMOV            S0, R1
    VLDR            S2, [R0]
    VMOV            S4, R2
    VADD.F32        S2, S2, S0
    VMOV            S6, R3
    VSTR            S2, [R0]
    VLDR            S2, [R0,#4]
    VADD.F32        S2, S2, S4
    VSTR            S2, [R0,#4]
    VLDR            S2, [R0,#8]
    VADD.F32        S2, S2, S6
    VSTR            S2, [R0,#8]
    VLDR            S2, [R0,#0xC]
    VADD.F32        S0, S2, S0
    VSTR            S0, [R0,#0xC]
    VLDR            S0, [R0,#0x10]
    VADD.F32        S0, S0, S4
    VSTR            S0, [R0,#0x10]
    VLDR            S0, [R0,#0x14]
    VADD.F32        S0, S0, S6
    VSTR            S0, [R0,#0x14]
  }
  return result;
}


int __fastcall AABB::getSize(AABB *this)
{
  int result; // r0@1

  __asm
  {
    VLDR            S0, [R0]
    VLDR            S6, [R0,#0xC]
    VLDR            S8, [R0,#0x10]
    VSUB.F32        S0, S6, S0
    VLDR            S2, [R0,#4]
    VLDR            S10, [R0,#0x14]
    VLDR            S4, [R0,#8]
    VADD.F32        S0, S0, S8
    VSUB.F32        S0, S0, S2
    VLDR            S2, =0.33333
    VADD.F32        S0, S0, S10
    VSUB.F32        S0, S0, S4
    VMUL.F32        S0, S0, S2
    VMOV            R0, S0
  }
  return result;
}


int __fastcall AABB::getSmallestAxisOut(int result, const AABB *_R1, int _R2)
{
  int v10; // r1@14

  __asm
  {
    VLDR            S0, [R1]
    VLDR            S2, [R2,#0xC]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    goto LABEL_30;
    VLDR            S4, [R1,#0xC]
    VLDR            S6, [R2]
    VCMPE.F32       S6, S4
  if ( !(_NF ^ _VF) )
    VLDR            S8, [R1,#4]
    VLDR            S10, [R2,#0x10]
    VCMPE.F32       S10, S8
    VLDR            S12, [R1,#0x10]
    VLDR            S14, [R2,#4]
    VCMPE.F32       S14, S12
    VLDR            S1, [R1,#8]
    VLDR            S5, [R2,#0x14]
    VCMPE.F32       S5, S1
    VLDR            S7, [R1,#0x14]
    VLDR            S9, [R2,#8]
    VCMPE.F32       S9, S7
LABEL_30:
    v10 = dword_2822498;
    *(_QWORD *)result = *(_QWORD *)&Vec3::ZERO;
    *(_DWORD *)(result + 8) = v10;
    return result;
    VSUB.F32        S3, S2, S0
    VSUB.F32        S8, S10, S8
    VSUB.F32        S10, S5, S1
    VSUB.F32        S4, S6, S4
    VSUB.F32        S0, S9, S7
    VSUB.F32        S2, S14, S12
    VABS.F32        S5, S3
    VABS.F32        S1, S8
    VABS.F32        S6, S10
  if ( _NF ^ _VF )
    __asm
    {
      VCMPELT.F32     S5, S6
      VMRSLT          APSR_nzcv, FPSCR
      VMOV            R12, S3
    }
    _LR = 0;
LABEL_13:
    _R3 = 0;
    goto LABEL_18;
    VCMPE.F32       S6, S5
    __asm { VMOV            LR, S8 }
    _R12 = 0;
    goto LABEL_13;
    VCMPELT.F32     S6, S1
    VMRSLT          APSR_nzcv, FPSCR
    VMOV            R3, S10
  _R12 = 0;
  _LR = 0;
LABEL_18:
    VABS.F32        S6, S2
    VABS.F32        S10, S4
    VABS.F32        S8, S0
    VCMPE.F32       S10, S6
      VCMPELT.F32     S10, S8
      VMOV            R1, S4
    _R2 = 0;
LABEL_21:
    _R4 = 0;
    goto LABEL_25;
    VCMPE.F32       S8, S10
    __asm { VMOV            R2, S2 }
    _R1 = 0;
    goto LABEL_21;
    VCMPELT.F32     S8, S6
    VMOV            R4, S0
  _R1 = 0;
  _R2 = 0;
LABEL_25:
    VMOV            S0, R12
    VMOV            S2, R2
    VMOV            S4, R1
    VMOV            S6, LR
    VMUL.F32        S4, S4, S4
    VMUL.F32        S2, S2, S2
    VMUL.F32        S0, S0, S0
    VMUL.F32        S6, S6, S6
    VMOV            S8, R4
    VMOV            S10, R3
    VMUL.F32        S8, S8, S8
    VADD.F32        S2, S2, S4
    VMUL.F32        S4, S10, S10
    VADD.F32        S0, S6, S0
    VADD.F32        S2, S2, S8
    VADD.F32        S0, S0, S4
    VCMPE.F32       S0, S2
    *(_DWORD *)result = _R12;
    *(_DWORD *)(result + 4) = _LR;
    *(_DWORD *)(result + 8) = _R3;
  else
    *(_DWORD *)result = _R1;
    *(_DWORD *)(result + 4) = _R2;
    *(_DWORD *)(result + 8) = _R4;
    result += 12;
  return result;
}


signed int __fastcall AABB::intersects(AABB *this, const AABB *_R1)
{
  signed int result; // r0@9

  __asm
  {
    VLDR            S0, [R0]
    VLDR            S2, [R1,#0xC]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    goto LABEL_13;
    VLDR            S0, [R0,#0xC]
    VLDR            S2, [R1]
  if ( !(_NF ^ _VF) )
    VLDR            S0, [R0,#4]
    VLDR            S2, [R1,#0x10]
    VLDR            S0, [R0,#0x10]
    VLDR            S2, [R1,#4]
    VLDR            S0, [R0,#8]
    VLDR            S2, [R1,#0x14]
    VLDR            S0, [R0,#0x14]
    VLDR            S2, [R1,#8]
LABEL_13:
    result = 0;
  else
    result = 1;
  return result;
}


int __fastcall AABB::AABB(int result)
{
  __int64 v1; // r1@1

  LODWORD(v1) = 0;
  HIDWORD(v1) = 1065353216;
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_QWORD *)(result + 8) = v1;
  *(_DWORD *)(result + 16) = 1065353216;
  *(_DWORD *)(result + 20) = 1065353216;
  *(_BYTE *)(result + 24) = 0;
  return result;
}


int __fastcall AABB::set(int result, const Vec3 *_R1, const Vec3 *_R2)
{
  char v10; // r1@7

  *(_DWORD *)result = *(_DWORD *)_R1;
  *(_DWORD *)(result + 4) = *((_DWORD *)_R1 + 1);
  *(_DWORD *)(result + 8) = *((_DWORD *)_R1 + 2);
  *(_DWORD *)(result + 12) = *(_DWORD *)_R2;
  *(_DWORD *)(result + 16) = *((_DWORD *)_R2 + 1);
  _R12 = &Vec3::ZERO;
  *(_DWORD *)(result + 20) = *((_DWORD *)_R2 + 2);
  __asm
  {
    VLDR            S0, [R12]
    VLDR            S2, [R1]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    goto LABEL_16;
  __asm { VLDR            S4, [R1,#4] }
  _R3 = &Vec3::ZERO;
    VLDR            S2, [R3,#4]
    VCMPE.F32       S4, S2
  __asm { VLDR            S6, [R1,#8] }
    VLDR            S4, [R3,#8]
    VCMPE.F32       S6, S4
  if ( _ZF )
    __asm { VLDR            S6, [R2] }
    v10 = 0;
    __asm
    {
      VCMPE.F32       S6, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _ZF )
      __asm
      {
        VLDREQ          S0, [R2,#4]
        VCMPEEQ.F32     S0, S2
        VMRSEQ          APSR_nzcv, FPSCR
        VLDR            S0, [R2,#8]
      }
      v10 = 0;
        VCMPE.F32       S0, S4
        VMRS            APSR_nzcv, FPSCR
      if ( _ZF )
        v10 = 1;
    *(_BYTE *)(result + 24) = v10;
  else
LABEL_16:
    *(_BYTE *)(result + 24) = 0;
  return result;
}


void __fastcall AABB::getBounds(AABB *this, int _R1)
{
  AABB::getBounds(this, _R1);
}


int __fastcall AABB::expanded(int result, const Vec3 *_R1, int _R2)
{
  __int64 v3; // kr00_8@1
  __int64 v4; // r5@1
  char v10; // r3@2
  char v22; // r2@35

  v3 = *(_QWORD *)_R1;
  *(_DWORD *)(result + 8) = *((_DWORD *)_R1 + 2);
  *(_QWORD *)result = v3;
  HIDWORD(v4) = *((_QWORD *)_R1 + 2);
  _R3 = &Vec3::ZERO;
  _R12 = (char *)_R1 + 12;
  LODWORD(v4) = *((_DWORD *)_R1 + 3);
  *(_DWORD *)(result + 20) = *((_QWORD *)_R1 + 2) >> 32;
  *(_QWORD *)(result + 12) = v4;
  __asm
  {
    VLDR            S2, [R1]
    VLDR            S0, [R3]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _ZF )
    __asm { VLDR            S6, [R1,#4] }
    _R3 = &Vec3::ZERO;
    __asm
    {
      VLDR            S4, [R3,#4]
      VCMPE.F32       S6, S4
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _ZF )
      __asm { VLDR            S8, [R1,#8] }
      _R3 = &Vec3::ZERO;
      __asm
      {
        VLDR            S6, [R3,#8]
        VCMPE.F32       S8, S6
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _ZF )
        __asm
        {
          VLDR            S8, [R12]
          VCMPE.F32       S8, S0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _ZF )
          __asm { VLDR            S8, [R1,#0x10] }
          v10 = 0;
          __asm
          {
            VCMPE.F32       S8, S4
            VMRS            APSR_nzcv, FPSCR
          }
          if ( _ZF )
            __asm
            {
              VLDR            S4, [R1,#0x14]
              VCMPE.F32       S4, S6
              VMRS            APSR_nzcv, FPSCR
            }
            if ( _ZF )
              v10 = 1;
        else
      else
        v10 = 0;
    else
      v10 = 0;
  else
    v10 = 0;
  *(_BYTE *)(result + 24) = v10;
    VLDR            S4, [R2]
    VCMPE.F32       S4, #0.0
  if ( _NF ^ _VF )
      VLDR            S6, [R0]
      VADD.F32        S4, S6, S4
      VSTR            S4, [R0]
  else if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      VLDRGT          S6, [R0,#0xC]
      VADDGT.F32      S4, S6, S4
      VSTRGT          S4, [R0,#0xC]
    VLDR            S4, [R2,#4]
      VLDR            S6, [R0,#4]
      VSTR            S4, [R0,#4]
      VLDRGT          S6, [R0,#0x10]
      VSTRGT          S4, [R0,#0x10]
    VLDR            S4, [R2,#8]
      VLDR            S6, [R0,#8]
      VSTR            S4, [R0,#8]
      VLDRGT          S6, [R0,#0x14]
      VSTRGT          S4, [R0,#0x14]
  if ( !_ZF )
    goto LABEL_43;
  __asm { VLDR            S4, [R1,#4] }
  _R2 = &Vec3::ZERO;
    VLDR            S2, [R2,#4]
    VCMPE.F32       S4, S2
  __asm { VLDR            S6, [R1,#8] }
    VCMPE.F32       S6, S4
      VLDREQ          S6, [R12]
      VCMPEEQ.F32     S6, S0
      VMRSEQ          APSR_nzcv, FPSCR
      VLDR            S0, [R1,#0x10]
    v22 = 0;
      VCMPE.F32       S0, S2
        VLDR            S0, [R1,#0x14]
        VCMPE.F32       S0, S4
        v22 = 1;
    *(_BYTE *)(result + 24) = v22;
LABEL_43:
    *(_BYTE *)(result + 24) = 0;
  return result;
}


int __fastcall AABB::clipXCollide(AABB *this, const AABB *_R1, float _R2, int a4)
{
  int *v8; // r1@11
  int result; // r0@23
  int v11; // [sp+0h] [bp-8h]@13
  float v12; // [sp+4h] [bp-4h]@11

  __asm
  {
    VLDR            S2, [R0,#4]
    VMOV            S0, R2
    VLDR            S4, [R1,#0x10]
    VCMPE.F32       S4, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm
    {
      VLDR            S2, [R0,#0x10]
      VLDR            S4, [R1,#4]
      VCMPE.F32       S4, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      __asm
      {
        VLDR            S2, [R0,#8]
        VLDR            S4, [R1,#0x14]
        VCMPE.F32       S4, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm
        {
          VLDR            S2, [R0,#0x14]
          VLDR            S4, [R1,#8]
          VCMPE.F32       S4, S2
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
          __asm
          {
            VLDR            S2, [R1]
            VLDR            S4, [R0,#0xC]
            VSUB.F32        S2, S4, S2
            VCMPE.F32       S2, #0.0
            VSTR            S2, [SP,#8+var_4]
            VMRS            APSR_nzcv, FPSCR
          }
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            __asm
            {
              VSUB.F32        S4, S2, S0
              VCMPE.F32       S4, #0.0
              VMRS            APSR_nzcv, FPSCR
            }
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              __asm { VMOVGT.F32      S0, S2 }
          else
              VLDR            S4, [R1,#0xC]
              VLDR            S6, [R0]
              VSUB.F32        S4, S6, S4
            if ( _NF ^ _VF )
              if ( !a4 )
              {
                __asm
                {
                  VCMPE.F32       S4, #0.0
                  VLDR            S0, =0.0
                  VMRS            APSR_nzcv, FPSCR
                  VCMPE.F32       S2, #0.0
                }
                v8 = (int *)&v12;
                if ( _NF ^ _VF )
                  __asm { VMOVLT.F32      S0, S4 }
                __asm { VMRS            APSR_nzcv, FPSCR }
                v11 = 0;
                __asm { VNEG.F32        S4, S0 }
                if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                  v8 = &v11;
                _R0 = *(float *)v8;
                  VMOV            S2, R0
                  VCMPE.F32       S2, S4
                  __asm { VMOVLT.F32      S0, S2 }
                v12 = *(float *)v8;
              }
            else
              __asm
                VSUB.F32        S2, S4, S0
                VCMPE.F32       S2, #0.0
                VMRS            APSR_nzcv, FPSCR
              if ( _NF ^ _VF )
                __asm { VMOVLT.F32      S0, S4 }
  __asm { VMOV            R0, S0 }
  return result;
}


int __fastcall AABB::clipZCollide(AABB *this, const AABB *_R1, float _R2, int a4)
{
  int *v8; // r1@11
  int result; // r0@23
  int v11; // [sp+0h] [bp-8h]@13
  float v12; // [sp+4h] [bp-4h]@11

  __asm
  {
    VLDR            S2, [R0]
    VMOV            S0, R2
    VLDR            S4, [R1,#0xC]
    VCMPE.F32       S4, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm
    {
      VLDR            S2, [R0,#0xC]
      VLDR            S4, [R1]
      VCMPE.F32       S4, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      __asm
      {
        VLDR            S2, [R0,#4]
        VLDR            S4, [R1,#0x10]
        VCMPE.F32       S4, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm
        {
          VLDR            S2, [R0,#0x10]
          VLDR            S4, [R1,#4]
          VCMPE.F32       S4, S2
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
          __asm
          {
            VLDR            S2, [R1,#8]
            VLDR            S4, [R0,#0x14]
            VSUB.F32        S2, S4, S2
            VCMPE.F32       S2, #0.0
            VSTR            S2, [SP,#8+var_4]
            VMRS            APSR_nzcv, FPSCR
          }
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            __asm
            {
              VSUB.F32        S4, S2, S0
              VCMPE.F32       S4, #0.0
              VMRS            APSR_nzcv, FPSCR
            }
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              __asm { VMOVGT.F32      S0, S2 }
          else
              VLDR            S4, [R1,#0x14]
              VLDR            S6, [R0,#8]
              VSUB.F32        S4, S6, S4
            if ( _NF ^ _VF )
              if ( !a4 )
              {
                __asm
                {
                  VCMPE.F32       S4, #0.0
                  VLDR            S0, =0.0
                  VMRS            APSR_nzcv, FPSCR
                  VCMPE.F32       S2, #0.0
                }
                v8 = (int *)&v12;
                if ( _NF ^ _VF )
                  __asm { VMOVLT.F32      S0, S4 }
                __asm { VMRS            APSR_nzcv, FPSCR }
                v11 = 0;
                __asm { VNEG.F32        S4, S0 }
                if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                  v8 = &v11;
                _R0 = *(float *)v8;
                  VMOV            S2, R0
                  VCMPE.F32       S2, S4
                  __asm { VMOVLT.F32      S0, S2 }
                v12 = *(float *)v8;
              }
            else
              __asm
                VSUB.F32        S2, S4, S0
                VCMPE.F32       S2, #0.0
                VMRS            APSR_nzcv, FPSCR
              if ( _NF ^ _VF )
                __asm { VMOVLT.F32      S0, S4 }
  __asm { VMOV            R0, S0 }
  return result;
}


int __fastcall AABB::getVolume(AABB *this)
{
  int result; // r0@1

  __asm
  {
    VLDR            S0, [R0]
    VLDR            S6, [R0,#0xC]
    VLDR            S2, [R0,#4]
    VLDR            S8, [R0,#0x10]
    VSUB.F32        S0, S6, S0
    VLDR            S4, [R0,#8]
    VSUB.F32        S2, S8, S2
    VLDR            S10, [R0,#0x14]
    VSUB.F32        S4, S10, S4
    VMUL.F32        S0, S2, S0
    VMUL.F32        S0, S0, S4
    VMOV            R0, S0
  }
  return result;
}


void __fastcall AABB::getBounds(AABB *this, int _R1)
{
  __asm
  {
    VLDR            S0, [R1]
    VLDR            S6, [R1,#0xC]
    VLDR            S2, [R1,#4]
    VLDR            S8, [R1,#0x10]
    VSUB.F32        S0, S6, S0
    VLDR            S4, [R1,#8]
    VLDR            S10, [R1,#0x14]
    VSUB.F32        S2, S8, S2
    VSUB.F32        S4, S10, S4
    VSTR            S0, [R0]
    VSTR            S2, [R0,#4]
    VSTR            S4, [R0,#8]
  }
}


signed int __fastcall AABB::isNan(AABB *this, float a2)
{
  AABB *v2; // r4@1
  float v3; // r1@1
  signed int result; // r0@2

  v2 = this;
  if ( j_Vec3::isNan((AABB *)((char *)this + 12), a2) )
    result = 1;
  else
    result = j_Vec3::isNan(v2, v3);
  return result;
}


  if ( AABB::contains(*(AABB **)(v3 + 4), (const Vec3 *)&v20) == 1 )
{
    EventPacket::EventPacket((int)&v16, v2, 62, 1);
    (*(void (__fastcall **)(Entity *, void ***))(*(_DWORD *)v2 + 1448))(v2, &v16);
    v16 = &off_26E9D30;
    v6 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v19 - 4);
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
        j_j_j_j__ZdlPv_9(v6);
    }
    v7 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v18 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    v8 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v17 - 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
  }
  return 1;
}


  if ( AABB::contains(*(AABB **)(v3 + 4), (const Vec3 *)&v20) == 1 )
{
    EventPacket::EventPacket((int)&v16, v2, 63, 1);
    (*(void (__fastcall **)(Entity *, void ***))(*(_DWORD *)v2 + 1448))(v2, &v16);
    v16 = &off_26E9D30;
    v6 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v19 - 4);
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
        j_j_j_j__ZdlPv_9(v6);
    }
    v7 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v18 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    v8 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v17 - 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
  }
  return 1;
}


_DWORD *__fastcall AABB::toString(AABB *this, int a2)
{
  int *v3; // r5@1
  char *v10; // r7@1
  char *v13; // r7@1
  char *v16; // r7@1
  char *v19; // r7@1
  char *v22; // r7@1
  char *v25; // r0@1
  void **v26; // r0@1
  void *v27; // r0@1
  unsigned int *v29; // r2@3
  signed int v30; // r1@5
  void **v31; // [sp+4h] [bp-D4h]@1
  int v32; // [sp+8h] [bp-D0h]@2
  void **v33; // [sp+Ch] [bp-CCh]@1
  void **v34; // [sp+10h] [bp-C8h]@1
  int v35; // [sp+2Ch] [bp-ACh]@2
  int v36; // [sp+34h] [bp-A4h]@1
  int v37; // [sp+38h] [bp-A0h]@2

  _R6 = a2;
  v3 = (int *)this;
  sub_21D103C((int)&v31, 24);
  sub_21CBF38((char *)&v33, (int)"AABB(", 5);
  __asm
  {
    VLDR            S0, [R6]
    VCVT.F64.F32    D0, S0
    VMOV            R2, R3, D0
  }
  v10 = sub_21CC9F0((char *)&v33);
  sub_21CBF38(v10, (int)",", 1);
    VLDR            S0, [R6,#4]
  v13 = sub_21CC9F0(v10);
  sub_21CBF38(v13, (int)",", 1);
    VLDR            S0, [R6,#8]
  v16 = sub_21CC9F0(v13);
  sub_21CBF38(v16, (int)" to ", 4);
    VLDR            S0, [R6,#0xC]
  v19 = sub_21CC9F0(v16);
  sub_21CBF38(v19, (int)",", 1);
    VLDR            S0, [R6,#0x10]
  v22 = sub_21CC9F0(v19);
  sub_21CBF38(v22, (int)",", 1);
    VLDR            S0, [R6,#0x14]
  v25 = sub_21CC9F0(v22);
  sub_21CBF38(v25, (int)")", 1);
  sub_21CFED8(v3, (int)&v34);
  v26 = off_26D3F84;
  v31 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v31) = off_26D3F80[0];
  v33 = v26;
  v34 = &off_27734E8;
  v27 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v36 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
    }
    else
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v34 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v35);
  v31 = (void **)off_26D3F68;
  *(void ***)((char *)&v31 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v32 = 0;
  return sub_21B6560(&v37);
}


int __fastcall AABB::grow(int result, const Vec3 *_R1, int _R2)
{
  char v9; // r1@3

  __asm
  {
    VLDR            S0, [R1]
    VLDR            S14, [R2]
    VLDR            S2, [R1,#4]
    VLDR            S4, [R1,#8]
    VSUB.F32        S5, S0, S14
    VLDR            S6, [R1,#0xC]
    VLDR            S10, [R1,#0x10]
    VLDR            S12, [R1,#0x14]
    VLDR            S1, [R2,#4]
    VLDR            S3, [R2,#8]
    VSUB.F32        S8, S2, S1
    VSTR            S5, [R0]
    VSUB.F32        S2, S4, S3
  }
  _R1 = &Vec3::ZERO;
    VADD.F32        S4, S6, S14
    VADD.F32        S6, S10, S1
    VADD.F32        S0, S12, S3
    VLDR            S10, [R1]
    VCMPE.F32       S5, S10
    VMRS            APSR_nzcv, FPSCR
    VSTR            S8, [R0,#4]
    VSTR            S2, [R0,#8]
    VSTR            S4, [R0,#0xC]
    VSTR            S6, [R0,#0x10]
    VSTR            S0, [R0,#0x14]
  if ( _ZF )
    _R1 = &Vec3::ZERO;
    __asm { VLDR            S12, [R1,#4] }
    v9 = 0;
    __asm
    {
      VCMPE.F32       S8, S12
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _ZF )
      __asm
      {
        VCMPE.F32       S6, S12
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _ZF )
        __asm
        {
          VCMPEEQ.F32     S4, S10
          VMRSEQ          APSR_nzcv, FPSCR
        }
        _R2 = &Vec3::ZERO;
          VLDR            S4, [R2,#8]
          VCMPE.F32       S2, S4
          VMRS            APSR_nzcv, FPSCR
        if ( _ZF )
          __asm { VCMPE.F32       S0, S4 }
          v9 = 0;
          __asm { VMRS            APSR_nzcv, FPSCR }
          if ( _ZF )
            v9 = 1;
    *(_BYTE *)(result + 24) = v9;
  else
    *(_BYTE *)(result + 24) = 0;
  return result;
}


void __fastcall AABB::getCenter(AABB *this, int _R1)
{
  __asm
  {
    VLDR            S0, [R1]
    VMOV.F32        S12, #0.5
    VLDR            S6, [R1,#0xC]
    VLDR            S2, [R1,#4]
    VLDR            S8, [R1,#0x10]
    VSUB.F32        S6, S6, S0
    VLDR            S4, [R1,#8]
    VLDR            S10, [R1,#0x14]
    VSUB.F32        S8, S8, S2
    VSUB.F32        S10, S10, S4
    VMUL.F32        S6, S6, S12
    VMUL.F32        S8, S8, S12
    VMUL.F32        S10, S10, S12
    VADD.F32        S0, S6, S0
    VADD.F32        S2, S8, S2
    VADD.F32        S4, S10, S4
    VSTR            S0, [R0]
    VSTR            S2, [R0,#4]
    VSTR            S4, [R0,#8]
  }
}


int __fastcall AABB::clip(AABB *this, const Vec3 *_R1, const Vec3 *_R2, int _R3)
{
  signed int v9; // r12@4
  signed int v10; // r7@4
  signed int v12; // r6@17
  signed int v13; // r5@17
  signed int v15; // r4@30
  signed int v16; // r2@30
  signed int v18; // r7@54
  signed int v19; // r6@61
  signed int v20; // r5@68
  signed int v21; // r4@75
  signed int v22; // r2@82
  char v24; // r2@116
  int v25; // [sp+4h] [bp-ACh]@116
  int v26; // [sp+8h] [bp-A8h]@116
  int v27; // [sp+Ch] [bp-A4h]@116
  float v28; // [sp+10h] [bp-A0h]@2
  float v29; // [sp+14h] [bp-9Ch]@2
  float v30; // [sp+18h] [bp-98h]@2
  float v31; // [sp+1Ch] [bp-94h]@2
  float v32; // [sp+20h] [bp-90h]@2
  float v33; // [sp+24h] [bp-8Ch]@2
  float v34; // [sp+28h] [bp-88h]@2
  float v35; // [sp+2Ch] [bp-84h]@2
  float v36; // [sp+30h] [bp-80h]@2
  float v37; // [sp+34h] [bp-7Ch]@2
  float v38; // [sp+38h] [bp-78h]@2
  float v39; // [sp+3Ch] [bp-74h]@2
  float v40; // [sp+40h] [bp-70h]@2
  float v41; // [sp+44h] [bp-6Ch]@2
  float v42; // [sp+48h] [bp-68h]@2
  float v43; // [sp+4Ch] [bp-64h]@2
  float v44; // [sp+50h] [bp-60h]@2
  float v45; // [sp+54h] [bp-5Ch]@2

  if ( *((_BYTE *)_R1 + 24) )
    return j_HitResult::HitResult((int)this, _R3);
  __asm { VLDR            S5, =1.0e-7 }
  v44 = 0.0;
  v45 = 0.0;
  v40 = 0.0;
  v41 = 0.0;
  v42 = 0.0;
  v43 = 0.0;
  v38 = 0.0;
  v39 = 0.0;
  v34 = 0.0;
  v35 = 0.0;
  v36 = 0.0;
  v37 = 0.0;
  v32 = 0.0;
  v33 = 0.0;
  v28 = 0.0;
  v29 = 0.0;
  v30 = 0.0;
  v31 = 0.0;
  __asm
  {
    VLDR            S2, [R2]
    VLDR            S6, [R3]
    VLDR            S4, [R2,#4]
    VSUB.F32        S16, S6, S2
    VLDR            S8, [R3,#4]
    VLDR            S0, [R2,#8]
    VLDR            S10, [R3,#8]
    VSUB.F32        S24, S8, S4
    VSUB.F32        S18, S10, S0
    VMUL.F32        S6, S16, S16
    VCMPE.F32       S6, S5
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    __asm { VLDR            S22, =0.0 }
    _LR = (char *)_R1 + 12;
    v9 = 0;
    v10 = 0;
    __asm
    {
      VMOV.F32        S20, S22
      VMOV.F32        S6, S22
      VMOV.F32        S10, S22
      VMOV.F32        S12, S22
    }
  else
    __asm { VLDR            S6, [R1] }
      VSUB.F32        S6, S6, S2
      VDIV.F32        S8, S6, S16
      VLDR            S6, =0.0
      VCMPE.F32       S8, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      __asm
      {
        VMOV.F32        S20, S6
        VMOV.F32        S22, S6
      }
    else
        VMOV.F32        S10, #1.0
        VCMPE.F32       S8, S10
        VMRS            APSR_nzcv, FPSCR
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        __asm { VMUL.F32        S10, S8, S16 }
        v9 = 1;
        __asm
        {
          VMUL.F32        S12, S8, S24
          VMUL.F32        S8, S8, S18
          VADD.F32        S10, S10, S2
          VADD.F32        S22, S12, S4
          VADD.F32        S20, S8, S0
          VSTR            S10, [SP,#0xB0+var_64]
          VSTR            S22, [SP,#0xB0+var_60]
          VSTR            S20, [SP,#0xB0+var_5C]
        }
    __asm { VLDR            S8, [R1,#0xC] }
      VSUB.F32        S8, S8, S2
      VDIV.F32        S8, S8, S16
      goto LABEL_139;
      VMOV.F32        S10, #1.0
      VCMPE.F32       S8, S10
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm { VMUL.F32        S6, S8, S16 }
      v10 = 1;
        VMUL.F32        S10, S8, S24
        VMUL.F32        S8, S8, S18
        VADD.F32        S6, S6, S2
        VADD.F32        S12, S10, S4
        VADD.F32        S10, S8, S0
        VSTR            S6, [SP,#0xB0+var_70]
        VSTR            S12, [SP,#0xB0+var_6C]
        VSTR            S10, [SP,#0xB0+var_68]
LABEL_139:
        VMOV.F32        S10, S6
        VMOV.F32        S12, S6
    VMUL.F32        S8, S24, S24
    VCMPE.F32       S8, S5
    __asm { VLDR            S14, =0.0 }
    _R8 = (char *)_R1 + 16;
    v12 = 0;
    v13 = 0;
      VMOV.F32        S1, S14
      VMOV.F32        S3, S14
      VMOV.F32        S8, S14
      VMOV.F32        S7, S14
      VMOV.F32        S9, S14
    __asm { VLDR            S8, [R1,#4] }
      VSUB.F32        S8, S8, S4
      VDIV.F32        S7, S8, S24
      VLDR            S8, =0.0
      VCMPE.F32       S7, #0.0
        VMOV.F32        S3, S8
        VMOV.F32        S1, S8
        VMOV.F32        S14, S8
        VMOV.F32        S14, #1.0
        VCMPE.F32       S7, S14
        __asm { VMUL.F32        S14, S7, S16 }
        v12 = 1;
          VMUL.F32        S1, S7, S24
          VMUL.F32        S7, S7, S18
          VADD.F32        S14, S14, S2
          VADD.F32        S3, S1, S4
          VADD.F32        S1, S7, S0
          VSTR            S14, [SP,#0xB0+var_7C]
          VSTR            S3, [SP,#0xB0+var_78]
          VSTR            S1, [SP,#0xB0+var_74]
    __asm { VLDR            S7, [R1,#0x10] }
      VSUB.F32        S7, S7, S4
      VDIV.F32        S7, S7, S24
      goto LABEL_140;
      VMOV.F32        S9, #1.0
      VCMPE.F32       S7, S9
      __asm { VMUL.F32        S8, S7, S16 }
      v13 = 1;
        VMUL.F32        S11, S7, S24
        VMUL.F32        S7, S7, S18
        VADD.F32        S9, S8, S2
        VADD.F32        S8, S11, S4
        VADD.F32        S7, S7, S0
        VSTR            S9, [SP,#0xB0+var_88]
        VSTR            S8, [SP,#0xB0+var_84]
        VSTR            S7, [SP,#0xB0+var_80]
LABEL_140:
        VMOV.F32        S7, S8
        VMOV.F32        S9, S8
    VMUL.F32        S11, S18, S18
    VCMPE.F32       S11, S5
    __asm { VLDR            S11, =0.0 }
    _R9 = (char *)_R1 + 20;
    v15 = 0;
    v16 = 0;
      VMOV.F32        S15, S11
      VMOV.F32        S13, S11
      VMOV.F32        S5, S11
      VMOV.F32        S16, S11
      VMOV.F32        S18, S11
    __asm { VLDR            S5, [R1,#8] }
      VSUB.F32        S5, S5, S0
      VDIV.F32        S26, S5, S18
      VLDR            S5, =0.0
      VCMPE.F32       S26, #0.0
        VMOV.F32        S13, S5
        VMOV.F32        S15, S5
        VMOV.F32        S11, S5
        VMOV.F32        S11, #1.0
        VCMPE.F32       S26, S11
        __asm { VMUL.F32        S11, S26, S16 }
        v15 = 1;
          VMUL.F32        S13, S26, S24
          VMUL.F32        S26, S26, S18
          VADD.F32        S11, S11, S2
          VADD.F32        S15, S13, S4
          VADD.F32        S13, S26, S0
          VSTR            S11, [SP,#0xB0+var_94]
          VSTR            S15, [SP,#0xB0+var_90]
          VSTR            S13, [SP,#0xB0+var_8C]
    __asm { VLDR            S26, [R1,#0x14] }
      VSUB.F32        S26, S26, S0
      VDIV.F32        S26, S26, S18
      goto LABEL_141;
      VMOV.F32        S28, #1.0
      VCMPE.F32       S26, S28
      __asm { VMUL.F32        S5, S26, S16 }
      v16 = 1;
        VMUL.F32        S16, S26, S24
        VMUL.F32        S24, S26, S18
        VADD.F32        S18, S5, S2
        VADD.F32        S16, S16, S4
        VADD.F32        S5, S24, S0
        VSTR            S18, [SP,#0xB0+var_A0]
        VSTR            S16, [SP,#0xB0+var_9C]
        VSTR            S5, [SP,#0xB0+var_98]
LABEL_141:
        VMOV.F32        S16, S5
        VMOV.F32        S18, S5
  if ( v9 != 1 )
    goto LABEL_142;
    VLDR            S24, [R1,#4]
    VCMPE.F32       S22, S24
    VLDR            S24, [R8]
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    VLDR            S22, [R1,#8]
    VCMPE.F32       S20, S22
    VLDR            S22, [R9]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    _R12 = (float *)1;
LABEL_142:
    _R12 = 0;
  if ( v10 != 1 )
    goto LABEL_143;
    VLDR            S20, [R1,#4]
    VCMPE.F32       S12, S20
    VLDR            S20, [R8]
    VLDR            S20, [R1,#8]
    VCMPE.F32       S10, S20
    VLDR            S20, [R9]
    v18 = 1;
LABEL_143:
    v18 = 0;
  if ( v12 != 1 )
    goto LABEL_144;
    VLDR            S20, [R1]
    VCMPE.F32       S14, S20
    VLDR            S20, [LR]
    VCMPE.F32       S1, S20
    v19 = 1;
LABEL_144:
    v19 = 0;
  if ( v13 != 1 )
    goto LABEL_145;
    VCMPE.F32       S9, S20
    VCMPE.F32       S7, S20
    v20 = 1;
LABEL_145:
    v20 = 0;
  if ( v15 != 1 )
    goto LABEL_146;
    VCMPE.F32       S11, S20
    VCMPE.F32       S15, S20
    v21 = 1;
LABEL_146:
    v21 = 0;
  if ( v16 != 1 )
    goto LABEL_147;
    VCMPE.F32       S18, S20
    VCMPE.F32       S16, S20
    v22 = 1;
LABEL_147:
    v22 = 0;
  if ( _R12 )
    _R12 = &v43;
  if ( v18 == 1 )
    if ( !_R12 )
      goto LABEL_148;
      VLDR            S20, [R12]
      VLDR            S22, [R12,#4]
      VSUB.F32        S12, S12, S4
      VSUB.F32        S20, S20, S2
      VLDR            S24, [R12,#8]
      VSUB.F32        S22, S22, S4
      VSUB.F32        S10, S10, S0
      VSUB.F32        S24, S24, S0
      VMUL.F32        S6, S6, S6
      VMUL.F32        S12, S12, S12
      VMUL.F32        S20, S20, S20
      VMUL.F32        S22, S22, S22
      VMUL.F32        S10, S10, S10
      VADD.F32        S6, S12, S6
      VMUL.F32        S12, S24, S24
      VADD.F32        S20, S22, S20
      VADD.F32        S6, S6, S10
      VADD.F32        S10, S20, S12
      VCMPE.F32       S6, S10
LABEL_148:
      _R12 = &v40;
      _R12 = &v43;
  if ( v19 == 1 )
    if ( _R12 )
        VLDR            S10, [R12]
        VSUB.F32        S6, S14, S2
        VLDR            S12, [R12,#4]
        VSUB.F32        S3, S3, S4
        VSUB.F32        S10, S10, S2
        VLDR            S14, [R12,#8]
        VSUB.F32        S12, S12, S4
        VSUB.F32        S1, S1, S0
        VSUB.F32        S14, S14, S0
        VMUL.F32        S6, S6, S6
        VMUL.F32        S3, S3, S3
        VMUL.F32        S10, S10, S10
        VMUL.F32        S12, S12, S12
        VMUL.F32        S1, S1, S1
        VMUL.F32        S14, S14, S14
        VADD.F32        S6, S3, S6
        VADD.F32        S10, S12, S10
        VADD.F32        S6, S6, S1
        VADD.F32        S10, S10, S14
        VCMPE.F32       S6, S10
      if ( _NF ^ _VF )
        _R12 = &v37;
      _R12 = &v37;
  if ( v20 == 1 )
        VSUB.F32        S6, S9, S2
        VSUB.F32        S8, S8, S4
        VSUB.F32        S1, S7, S0
        VMUL.F32        S8, S8, S8
        VADD.F32        S6, S8, S6
        VMUL.F32        S8, S14, S14
        VADD.F32        S8, S10, S8
        VCMPE.F32       S6, S8
        _R12 = &v34;
      _R12 = &v34;
  if ( v21 == 1 )
        VLDR            S8, [R12]
        VSUB.F32        S6, S11, S2
        VLDR            S10, [R12,#4]
        VSUB.F32        S14, S15, S4
        VSUB.F32        S8, S8, S2
        VLDR            S12, [R12,#8]
        VSUB.F32        S10, S10, S4
        VSUB.F32        S1, S13, S0
        VSUB.F32        S12, S12, S0
        VADD.F32        S6, S14, S6
        VADD.F32        S8, S8, S12
        _R12 = &v31;
      _R12 = &v31;
  if ( v22 == 1 )
        VSUB.F32        S6, S18, S2
        VSUB.F32        S14, S16, S4
        VSUB.F32        S2, S8, S2
        VSUB.F32        S4, S10, S4
        VSUB.F32        S8, S5, S0
        VSUB.F32        S0, S12, S0
        VMUL.F32        S10, S14, S14
        VMUL.F32        S2, S2, S2
        VMUL.F32        S4, S4, S4
        VMUL.F32        S0, S0, S0
        VADD.F32        S6, S10, S6
        VADD.F32        S2, S4, S2
        VADD.F32        S4, S6, S8
        VADD.F32        S0, S2, S0
        VCMPE.F32       S4, S0
        _R12 = &v28;
      _R12 = &v28;
    goto LABEL_116;
  if ( !_R12 )
LABEL_116:
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v24 = -1;
  if ( _R12 == &v43 )
    v24 = 4;
  if ( _R12 == &v40 )
    v24 = 5;
  if ( _R12 == &v37 )
    v24 = 0;
  if ( _R12 == &v34 )
    v24 = 1;
  if ( _R12 == &v31 )
    v24 = 2;
  if ( _R12 == &v28 )
    v24 = 3;
  return j_HitResult::HitResult((int)this, (int)&v25, v24, (int)_R12);
}


  if ( AABB::contains(*(AABB **)(v3 + 4), (const Vec3 *)&v20) == 1 )
{
    EventPacket::EventPacket((int)&v16, v2, 68, 1);
    (*(void (__fastcall **)(Entity *, void ***))(*(_DWORD *)v2 + 1448))(v2, &v16);
    v16 = &off_26E9D30;
    v6 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v19 - 4);
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
        j_j_j_j__ZdlPv_9(v6);
    }
    v7 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v18 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    v8 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v17 - 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
  }
  return 1;
}


int __fastcall AABB::distanceToSqr(AABB *this, const Vec3 *a2)
{
  int result; // r0@1
  float v8; // [sp+4h] [bp-14h]@1

  _R4 = a2;
  Vec3::clamp((Vec3 *)&v8, a2, this, (AABB *)((char *)this + 12));
  __asm
  {
    VLDR            S0, [R4]
    VLDR            S6, [SP,#0x18+var_14]
    VLDR            S2, [R4,#4]
    VLDR            S8, [SP,#0x18+var_10]
    VSUB.F32        S0, S0, S6
    VLDR            S4, [R4,#8]
    VSUB.F32        S2, S2, S8
    VLDR            S10, [SP,#0x18+var_C]
    VSUB.F32        S4, S4, S10
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VMOV            R0, S0
  }
  return result;
}


signed int __fastcall AABB::contains(AABB *this, const Vec3 *_R1)
{
  signed int result; // r0@9

  __asm
  {
    VLDR            S0, [R1]
    VLDR            S2, [R0]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    goto LABEL_13;
    VLDR            S2, [R0,#0xC]
  if ( !(_NF ^ _VF) )
    VLDR            S0, [R1,#4]
    VLDR            S2, [R0,#4]
    VLDR            S2, [R0,#0x10]
    VLDR            S0, [R1,#8]
    VLDR            S2, [R0,#8]
    VLDR            S2, [R0,#0x14]
LABEL_13:
    result = 0;
  else
    result = 1;
  return result;
}


int __fastcall AABB::cloneMove(int result, const Vec3 *_R1, int _R2)
{
  char v9; // r1@3

  __asm
  {
    VLDR            S0, [R1]
    VLDR            S14, [R2]
    VLDR            S2, [R1,#4]
    VLDR            S4, [R1,#8]
    VADD.F32        S5, S14, S0
    VLDR            S6, [R1,#0xC]
    VLDR            S10, [R1,#0x10]
    VLDR            S12, [R1,#0x14]
    VLDR            S1, [R2,#4]
    VLDR            S3, [R2,#8]
    VADD.F32        S8, S1, S2
    VSTR            S5, [R0]
    VADD.F32        S2, S3, S4
  }
  _R1 = &Vec3::ZERO;
    VADD.F32        S4, S6, S14
    VADD.F32        S6, S10, S1
    VADD.F32        S0, S12, S3
    VLDR            S10, [R1]
    VCMPE.F32       S5, S10
    VMRS            APSR_nzcv, FPSCR
    VSTR            S8, [R0,#4]
    VSTR            S2, [R0,#8]
    VSTR            S4, [R0,#0xC]
    VSTR            S6, [R0,#0x10]
    VSTR            S0, [R0,#0x14]
  if ( _ZF )
    _R1 = &Vec3::ZERO;
    __asm { VLDR            S12, [R1,#4] }
    v9 = 0;
    __asm
    {
      VCMPE.F32       S8, S12
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _ZF )
      __asm
      {
        VCMPE.F32       S6, S12
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _ZF )
        __asm
        {
          VCMPEEQ.F32     S4, S10
          VMRSEQ          APSR_nzcv, FPSCR
        }
        _R2 = &Vec3::ZERO;
          VLDR            S4, [R2,#8]
          VCMPE.F32       S2, S4
          VMRS            APSR_nzcv, FPSCR
        if ( _ZF )
          __asm { VCMPE.F32       S0, S4 }
          v9 = 0;
          __asm { VMRS            APSR_nzcv, FPSCR }
          if ( _ZF )
            v9 = 1;
    *(_BYTE *)(result + 24) = v9;
  else
    *(_BYTE *)(result + 24) = 0;
  return result;
}


__int64 __fastcall AABB::set(__int64 result)
{
  char v10; // r2@1

  _R12 = *(_DWORD *)HIDWORD(result);
  *(_DWORD *)result = *(_DWORD *)HIDWORD(result);
  _LR = *(_DWORD *)(HIDWORD(result) + 4);
  *(_DWORD *)(result + 4) = _LR;
  __asm { VMOV            S6, R12 }
  _R2 = *(_DWORD *)(HIDWORD(result) + 8);
  *(_DWORD *)(result + 8) = _R2;
  __asm { VMOV            S4, LR }
  _R3 = *(_DWORD *)(HIDWORD(result) + 12);
  *(_DWORD *)(result + 12) = _R3;
  __asm { VMOV            S2, R2 }
  _R4 = *(_DWORD *)(HIDWORD(result) + 16);
  v10 = 0;
  *(_DWORD *)(result + 16) = _R4;
  __asm { VMOV            S0, R3 }
  HIDWORD(result) = *(_DWORD *)(HIDWORD(result) + 20);
  __asm { VMOV            S10, R4 }
  *(_DWORD *)(result + 20) = HIDWORD(result);
  __asm { VMOV            S8, R1 }
  HIDWORD(result) = 0;
  __asm
  {
    VCMPE.F32       S8, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S10, #0.0
  }
  if ( _ZF )
    v10 = 1;
    VCMPE.F32       S0, #0.0
  if ( !_ZF )
    v10 = 0;
    VCMPE.F32       S2, #0.0
    VCMPE.F32       S4, #0.0
    VCMPE.F32       S6, #0.0
  __asm { VMRS            APSR_nzcv, FPSCR }
  *(_BYTE *)(result + 24) = v10;
  return result;
}


int __fastcall AABB::_clipAxisCollide(AABB *this, const AABB *a2, float _R2, int a4, int a5)
{
  int v13; // r4@1
  int v20; // r2@14
  int *v27; // r1@44
  int result; // r0@53
  int v30; // [sp+0h] [bp-18h]@46
  float v31; // [sp+4h] [bp-14h]@44

  _LR = 1431655766;
  _R6 = a4 + 1;
  _R12 = (char *)a2 + 12;
  __asm { SMMUL.W         R5, R6, LR }
  v13 = a4 + 1 - 3 * (_R5 + (_R5 >> 31));
  if ( v13 == 2 )
  {
    _R6 = (char *)this + 8;
    _R5 = (char *)a2 + 20;
  }
  else if ( v13 == 1 )
    _R6 = (char *)this + 4;
    _R5 = (char *)a2 + 16;
  else
    _R5 = (char *)a2 + 12;
    _R6 = (char *)this;
  __asm
    VLDR            S2, [R6]
    VMOV            S0, R2
    VLDR            S4, [R5]
    VCMPE.F32       S4, S2
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    if ( v13 == 2 )
    {
      _R2 = (char *)this + 20;
      _R4 = (char *)a2 + 8;
    }
    else if ( v13 == 1 )
      _R2 = (char *)this + 16;
      _R4 = (char *)a2 + 4;
    else
      _R2 = (char *)this + 12;
      _R4 = (char *)a2;
    __asm
      VLDR            S2, [R2]
      VLDR            S4, [R4]
      VCMPE.F32       S4, S2
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      _R2 = a4 + 2;
      __asm { SMMUL.W         R6, R2, LR }
      v20 = a4 + 2 - 3 * (_R6 + (_R6 >> 31));
      if ( v20 == 2 )
      {
        _R5 = (char *)this + 8;
        _R6 = (char *)a2 + 20;
      }
      else if ( v20 == 1 )
        _R5 = (char *)this + 4;
        _R6 = (char *)a2 + 16;
      else
        _R6 = (char *)a2 + 12;
        _R5 = (char *)this;
      __asm
        VLDR            S2, [R5]
        VLDR            S4, [R6]
        VCMPE.F32       S4, S2
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        if ( v20 == 2 )
        {
          _R2 = (char *)this + 20;
          _R6 = (char *)a2 + 8;
        }
        else if ( v20 == 1 )
          _R2 = (char *)this + 16;
          _R6 = (char *)a2 + 4;
        else
          _R2 = (char *)this + 12;
          _R6 = (char *)a2;
        __asm
          VLDR            S2, [R2]
          VLDR            S4, [R6]
          VCMPE.F32       S4, S2
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          if ( a4 == 2 )
          {
            _R6 = (char *)a2 + 8;
            _R2 = (char *)this + 20;
          }
          else if ( a4 == 1 )
            _R6 = (char *)a2 + 4;
            _R2 = (char *)this + 16;
          else
            _R2 = (char *)this + 12;
            _R6 = (char *)a2;
          __asm
            VLDR            S2, [R6]
            VLDR            S4, [R2]
            VSUB.F32        S2, S4, S2
            VCMPE.F32       S2, #0.0
            VSTR            S2, [SP,#0x18+var_14]
            VMRS            APSR_nzcv, FPSCR
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            __asm
            {
              VSUB.F32        S4, S2, S0
              VCMPE.F32       S4, #0.0
              VMRS            APSR_nzcv, FPSCR
            }
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              __asm { VMOVGT.F32      S0, S2 }
            if ( a4 == 2 )
              _R12 = (char *)a2 + 20;
              this = (AABB *)((char *)this + 8);
            else if ( a4 == 1 )
              _R12 = (char *)a2 + 16;
              this = (AABB *)((char *)this + 4);
              VLDR            S4, [R12]
              VLDR            S6, [R0]
              VSUB.F32        S4, S6, S4
            if ( _NF ^ _VF )
              if ( !a5 )
              {
                __asm
                {
                  VCMPE.F32       S4, #0.0
                  VLDR            S0, =0.0
                  VMRS            APSR_nzcv, FPSCR
                  VCMPE.F32       S2, #0.0
                }
                v27 = (int *)&v31;
                if ( _NF ^ _VF )
                  __asm { VMOVLT.F32      S0, S4 }
                __asm { VMRS            APSR_nzcv, FPSCR }
                v30 = 0;
                __asm { VNEG.F32        S4, S0 }
                if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                  v27 = &v30;
                _R0 = *(float *)v27;
                  VMOV            S2, R0
                  VCMPE.F32       S2, S4
                  __asm { VMOVLT.F32      S0, S2 }
                v31 = *(float *)v27;
              }
            else
              __asm
                VSUB.F32        S2, S4, S0
                VCMPE.F32       S2, #0.0
                VMRS            APSR_nzcv, FPSCR
              if ( _NF ^ _VF )
                __asm { VMOVLT.F32      S0, S4 }
  __asm { VMOV            R0, S0 }
  return result;
}


void __fastcall AABB::getCenter(AABB *this, int _R1)
{
  AABB::getCenter(this, _R1);
}


int __fastcall AABB::move(int result, const Vec3 *_R1)
{
  __asm
  {
    VLDR            S0, [R1]
    VLDR            S2, [R0]
    VADD.F32        S0, S2, S0
    VSTR            S0, [R0]
    VLDR            S0, [R1,#4]
    VLDR            S2, [R0,#4]
    VSTR            S0, [R0,#4]
    VLDR            S0, [R1,#8]
    VLDR            S2, [R0,#8]
    VSTR            S0, [R0,#8]
    VLDR            S2, [R0,#0xC]
    VSTR            S0, [R0,#0xC]
    VLDR            S2, [R0,#0x10]
    VSTR            S0, [R0,#0x10]
    VLDR            S2, [R0,#0x14]
    VSTR            S0, [R0,#0x14]
  }
  return result;
}


int __fastcall AABB::AABB(int result, int _R1, int _R2)
{
  __int64 v3; // kr00_8@1
  __int64 v5; // kr08_8@1
  char v12; // r1@8

  v3 = *(_QWORD *)_R1;
  *(_DWORD *)(result + 8) = *(_DWORD *)(_R1 + 8);
  *(_QWORD *)result = v3;
  _R12 = &Vec3::ZERO;
  v5 = *(_QWORD *)_R2;
  *(_DWORD *)(result + 20) = *(_DWORD *)(_R2 + 8);
  *(_QWORD *)(result + 12) = v5;
  __asm
  {
    VLDR            S0, [R12]
    VLDR            S2, [R1]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    goto LABEL_16;
  __asm { VLDR            S4, [R1,#4] }
  _R3 = &Vec3::ZERO;
    VLDR            S2, [R3,#4]
    VCMPE.F32       S4, S2
  __asm { VLDR            S6, [R1,#8] }
    VLDR            S4, [R3,#8]
    VCMPE.F32       S6, S4
  if ( _ZF )
    __asm
    {
      VLDREQ          S6, [R2]
      VCMPEEQ.F32     S6, S0
      VMRSEQ          APSR_nzcv, FPSCR
      VLDR            S0, [R2,#4]
    }
    v12 = 0;
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( _ZF )
      __asm
      {
        VLDR            S0, [R2,#8]
        VCMPE.F32       S0, S4
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _ZF )
        v12 = 1;
    *(_BYTE *)(result + 24) = v12;
  else
LABEL_16:
    *(_BYTE *)(result + 24) = 0;
  return result;
}


int __fastcall AABB::AABB(int result, float _R1, __int64 _R2, int a4, int a5, int a6)
{
  char v13; // r1@5

  __asm
  {
    VMOV            S8, R1
    VLDR            S2, [SP,#arg_4]
    VLDR            S0, [SP,#arg_8]
    VLDR            S4, [SP,#arg_0]
  }
  _R12 = &Vec3::ZERO;
  *(float *)result = _R1;
  *(_QWORD *)(result + 4) = _R2;
    VSTR            S4, [R0,#0xC]
    VSTR            S2, [R0,#0x10]
    VSTR            S0, [R0,#0x14]
    VLDR            S6, [R12]
    VCMPE.F32       S6, S8
    VMRS            APSR_nzcv, FPSCR
  if ( !_ZF )
    goto LABEL_16;
  __asm { VMOV            S10, R2 }
  _R1 = &Vec3::ZERO;
    VLDR            S8, [R1,#4]
    VCMPE.F32       S8, S10
  if ( _ZF )
    __asm { VMOV            S12, R3 }
    _R1 = &Vec3::ZERO;
    __asm { VLDR            S10, [R1,#8] }
    v13 = 0;
    __asm
    {
      VCMPE.F32       S10, S12
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _ZF )
      __asm
      {
        VCMPE.F32       S6, S4
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _ZF )
        __asm
        {
          VCMPEEQ.F32     S8, S2
          VMRSEQ          APSR_nzcv, FPSCR
          VCMPE.F32       S10, S0
        }
        v13 = 0;
        __asm { VMRS            APSR_nzcv, FPSCR }
        if ( _ZF )
          v13 = 1;
    *(_BYTE *)(result + 24) = v13;
  else
LABEL_16:
    *(_BYTE *)(result + 24) = 0;
  return result;
}


  if ( AABB::intersects((AABB *)(a2 + 264), *(const AABB **)(v2 + 8)) == 1 )
{
    v5 = *(_QWORD *)(v4 + 80);
    if ( (_DWORD)v5 == HIDWORD(v5) )
    {
      v6 = *(void **)(v4 + 76);
      v7 = ((signed int)v5 - (signed int)v6) >> 2;
      if ( !v7 )
        v7 = 1;
      HIDWORD(v5) = v7 + (((signed int)v5 - (signed int)v6) >> 2);
      v9 = v7 + (((signed int)v5 - (signed int)v6) >> 2);
      if ( 0 != HIDWORD(v5) >> 30 )
        v9 = 0x3FFFFFFF;
      if ( v8 < v7 )
      if ( v9 )
      {
        if ( v9 >= 0x40000000 )
          sub_21E57F4();
        v10 = (char *)operator new(4 * v9);
        LODWORD(v5) = *(_QWORD *)(v4 + 76) >> 32;
        v6 = (void *)*(_QWORD *)(v4 + 76);
      }
      else
        v10 = 0;
      *(_DWORD *)&v10[v5 - (_DWORD)v6] = v3;
      v11 = &v10[v5 - (_DWORD)v6];
      if ( 0 != ((signed int)v5 - (signed int)v6) >> 2 )
        _aeabi_memmove4(v10, v6);
      v12 = (int)(v11 + 4);
      if ( v6 )
        operator delete(v6);
      *(_DWORD *)(v4 + 76) = v10;
      *(_DWORD *)(v4 + 80) = v12;
      *(_DWORD *)(v4 + 84) = &v10[4 * v9];
    }
    else
      *(_DWORD *)v5 = v3;
      *(_DWORD *)(v4 + 80) += 4;
  }
  return 1;
}


signed int __fastcall AABB::flooredCopy(AABB *this, float a2, float _R2, int a4)
{
  AABB *v9; // r4@1
  float v12; // r0@1
  float v18; // r0@1
  float v21; // r0@1
  int v27; // r1@1
  signed int result; // r0@2

  _R7 = a2;
  __asm
  {
    VMOV            S22, R2
    VLDR            S0, [R7]
  }
  v9 = this;
  _R6 = a4;
    VLDR            S16, [R7,#4]
    VADD.F32        S0, S0, S22
    VLDR            S18, [R7,#8]
    VLDR            S20, [R7,#0xC]
    VMOV            R0, S0
  v12 = j_floorf(_R0);
  __asm { VADD.F32        S0, S18, S22 }
  _R5 = v12;
    VMOV            S18, R6
    VADD.F32        S2, S16, S22
    VLDR            S24, [R7,#0x14]
  _R11 = &Vec3::ZERO;
    VLDR            S0, [R7,#0x10]
  *(float *)v9 = _R5;
    VADD.F32        S0, S0, S18
    VMOV            R7, S2
    VMOV            R6, S0
  v18 = j_floorf(_R0);
  __asm { VADD.F32        S0, S20, S18 }
  _R8 = v18;
  __asm { VMOV            R0, S0 }
  v21 = j_floorf(_R0);
  __asm { VADD.F32        S0, S24, S18 }
  _R10 = v21;
  _R9 = j_floorf(_R0);
  _R6 = j_floorf(_R6);
  _R0 = j_floorf(_R7);
  v27 = (int)v9 + 4;
  __asm { VMOV            S2, R5 }
  *(float *)v27 = _R0;
  *(float *)(v27 + 4) = _R8;
  *(float *)(v27 + 8) = _R10;
  *((float *)v9 + 4) = _R6;
  *((float *)v9 + 5) = _R9;
    VLDR            S0, [R11]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( _ZF )
    __asm { VMOV            S4, R0 }
    _R0 = &Vec3::ZERO;
    __asm
    {
      VLDR            S2, [R0,#4]
      VCMPE.F32       S4, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _ZF )
      __asm { VMOV            S4, R6 }
      result = 0;
      __asm
      {
        VCMPE.F32       S4, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _ZF )
        __asm
        {
          VMOVEQ          S2, R10
          VCMPEEQ.F32     S2, S0
          VMRSEQ          APSR_nzcv, FPSCR
          VMOV            S2, R8
        }
        _R1 = &Vec3::ZERO;
          VLDR            S0, [R1,#8]
          VCMPE.F32       S2, S0
          VMRS            APSR_nzcv, FPSCR
        if ( _ZF )
          __asm { VMOV            S2, R9 }
          result = 0;
          __asm
          {
            VCMPE.F32       S2, S0
            VMRS            APSR_nzcv, FPSCR
          }
          if ( _ZF )
            result = 1;
    else
  else
    result = 0;
  *((_BYTE *)v9 + 24) = result;
  return result;
}


signed int __fastcall AABB::flooredCeiledCopy(AABB *this, int a2)
{
  int v2; // r5@1
  AABB *v3; // r4@1
  float v4; // r6@1
  float v5; // r9@1
  float v6; // r8@1
  float v7; // r0@1
  __int64 v9; // kr00_8@1
  int v16; // r2@1
  signed int result; // r0@2

  v2 = a2;
  v3 = this;
  v4 = *(float *)(a2 + 4);
  v5 = *(float *)(a2 + 8);
  v6 = *(float *)(a2 + 12);
  v7 = j_floorf(*(float *)a2);
  _R7 = v7;
  v9 = *(_QWORD *)(v2 + 16);
  *(float *)v3 = v7;
  _R6 = j_floorf(v4);
  _R9 = j_floorf(v5);
  _R11 = j_ceilf(v6);
  _R8 = j_ceilf(*((float *)&v9 + 1));
  _R0 = j_ceilf(*(float *)&v9);
  _R1 = &Vec3::ZERO;
  v16 = (int)v3 + 4;
  *(float *)v16 = _R6;
  *(float *)(v16 + 4) = _R9;
  *(float *)(v16 + 8) = _R11;
  __asm { VMOV            S2, R7 }
  *((float *)v3 + 4) = _R0;
  *((float *)v3 + 5) = _R8;
  __asm
  {
    VLDR            S0, [R1]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _ZF )
    __asm { VMOV            S4, R6 }
    _R1 = &Vec3::ZERO;
    __asm
    {
      VLDR            S2, [R1,#4]
      VCMPE.F32       S4, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _ZF )
      __asm { VMOV            S4, R0 }
      result = 0;
      __asm
      {
        VCMPE.F32       S4, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _ZF )
        __asm
        {
          VMOVEQ          S2, R11
          VCMPEEQ.F32     S2, S0
          VMRSEQ          APSR_nzcv, FPSCR
          VMOV            S2, R9
        }
        _R1 = &Vec3::ZERO;
          VLDR            S0, [R1,#8]
          VCMPE.F32       S2, S0
          VMRS            APSR_nzcv, FPSCR
        if ( _ZF )
          __asm { VMOV            S2, R8 }
          result = 0;
          __asm
          {
            VCMPE.F32       S2, S0
            VMRS            APSR_nzcv, FPSCR
          }
          if ( _ZF )
            result = 1;
    else
  else
    result = 0;
  *((_BYTE *)v3 + 24) = result;
  return result;
}


int __fastcall AABB::centerAt(int result, const Vec3 *_R1)
{
  __asm
  {
    VLDR            S0, [R0]
    VMOV.F32        S12, #0.5
    VLDR            S6, [R0,#0xC]
    VLDR            S2, [R0,#4]
    VLDR            S8, [R0,#0x10]
    VSUB.F32        S0, S6, S0
    VLDR            S4, [R0,#8]
    VLDR            S10, [R0,#0x14]
    VSUB.F32        S2, S8, S2
    VLDR            S6, [R1]
    VSUB.F32        S4, S10, S4
    VLDR            S8, [R1,#4]
    VLDR            S10, [R1,#8]
    VMUL.F32        S0, S0, S12
    VMUL.F32        S2, S2, S12
    VMUL.F32        S4, S4, S12
    VSUB.F32        S6, S6, S0
    VSUB.F32        S8, S8, S2
    VSUB.F32        S10, S10, S4
    VSTR            S6, [R0]
    VSTR            S8, [R0,#4]
    VSTR            S10, [R0,#8]
    VADD.F32        S0, S6, S0
    VADD.F32        S2, S8, S2
    VADD.F32        S4, S10, S4
    VSTR            S0, [R0,#0xC]
    VSTR            S2, [R0,#0x10]
    VSTR            S4, [R0,#0x14]
  }
  return result;
}


int __fastcall AABB::axisInside(int result, int _R1, int _R2, int _R3, int a5, int a6)
{
  __asm
  {
    VMOV            S0, R3
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm
    {
      VLDR            S0, [R2]
      VLDR            S2, [R1,#0xC]
    }
LABEL_6:
      VSUB.F32        S0, S2, S0
      VSTR            S0, [R0]
LABEL_7:
    *(_DWORD *)(result + 4) = 0;
    *(_DWORD *)(result + 8) = 0;
    return result;
  if ( _NF ^ _VF )
      VLDR            S0, [R2,#0xC]
      VLDR            S2, [R1]
    goto LABEL_6;
  _R3 = a5;
      VLDR            S0, [R2,#4]
      VLDR            S2, [R1,#0x10]
LABEL_13:
    __asm { VSUB.F32        S0, S2, S0 }
    *(_DWORD *)result = 0;
    __asm { VSTR            S0, [R0,#4] }
      VLDR            S0, [R2,#0x10]
      VLDR            S2, [R1,#4]
    goto LABEL_13;
  _R3 = a6;
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    if ( !(_NF ^ _VF) )
      *(_DWORD *)result = 0;
      goto LABEL_7;
      VLDR            S0, [R2,#0x14]
      VLDR            S2, [R1,#8]
  else
      VLDR            S0, [R2,#8]
      VLDR            S2, [R1,#0x14]
    VSUB.F32        S0, S2, S0
    VSTR            S0, [R0,#8]
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  return result;
}


signed int __fastcall AABB::intersectsInner(AABB *this, const AABB *_R1)
{
  signed int result; // r0@9

  __asm
  {
    VLDR            S0, [R0]
    VLDR            S2, [R1,#0xC]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    goto LABEL_13;
    VLDR            S0, [R0,#0xC]
    VLDR            S2, [R1]
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    VLDR            S0, [R0,#4]
    VLDR            S2, [R1,#0x10]
    VLDR            S0, [R0,#0x10]
    VLDR            S2, [R1,#4]
    VLDR            S0, [R0,#8]
    VLDR            S2, [R1,#0x14]
    VLDR            S0, [R0,#0x14]
    VLDR            S2, [R1,#8]
LABEL_13:
    result = 0;
  else
    result = 1;
  return result;
}


__int64 __fastcall AABB::set(__int64 result, __int64 _R2, float a3, float a4, float a5)
{
  char v9; // r2@1

  __asm
  {
    VLDR            S2, [SP,#arg_8]
    VMOV            S8, R2
    VLDR            S0, [SP,#arg_4]
    VMOV            S6, R1
    VCMPE.F32       S2, #0.0
    VLDR            S4, [SP,#arg_0]
    VMRS            APSR_nzcv, FPSCR
  }
  *(_DWORD *)result = HIDWORD(result);
  *(_QWORD *)(result + 4) = _R2;
  LOBYTE(_R2) = 0;
    VCMPE.F32       S0, #0.0
    VSTR            S4, [R0,#0xC]
    VSTR            S0, [R0,#0x10]
  HIDWORD(result) = 0;
    VSTR            S2, [R0,#0x14]
    VMOV            S10, R3
  if ( _ZF )
    v9 = 1;
    VCMPE.F32       S4, #0.0
  if ( !_ZF )
    v9 = 0;
    VCMPE.F32       S10, #0.0
    VCMPE.F32       S8, #0.0
    VCMPE.F32       S6, #0.0
  __asm { VMRS            APSR_nzcv, FPSCR }
  *(_BYTE *)(result + 24) = v9;
  return result;
}


int __fastcall AABB::distanceTo(AABB *this, const Vec3 *a2)
{
  float v8; // r1@1
  float v10; // [sp+4h] [bp-14h]@1

  _R4 = a2;
  Vec3::clamp((Vec3 *)&v10, a2, this, (AABB *)((char *)this + 12));
  __asm
  {
    VLDR            S0, [R4]
    VLDR            S6, [SP,#0x18+var_14]
    VLDR            S2, [R4,#4]
    VLDR            S8, [SP,#0x18+var_10]
    VSUB.F32        S0, S0, S6
    VLDR            S4, [R4,#8]
    VSUB.F32        S2, S2, S8
    VLDR            S10, [SP,#0x18+var_C]
    VSUB.F32        S4, S4, S10
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VMOV            R0, S0
  }
  return j_mce::Math::sqrt(_R0, v8);
}


int __fastcall AABB::contains(AABB *this, const AABB *_R1)
{
  signed int v6; // r1@16
  signed int v7; // r0@16
  int result; // r0@20

  __asm
  {
    VLDR            S2, [R0]
    VLDR            S0, [R1]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    goto LABEL_24;
    VLDR            S4, [R0,#0xC]
    VCMPE.F32       S0, S4
  if ( !(_NF ^ _VF) )
    VLDR            S6, [R0,#4]
    VLDR            S0, [R1,#4]
    VCMPE.F32       S0, S6
    VLDR            S8, [R0,#0x10]
    VCMPE.F32       S0, S8
    VLDR            S0, [R0,#8]
    VLDR            S12, [R1,#8]
    VCMPE.F32       S12, S0
    VLDR            S10, [R0,#0x14]
    VCMPE.F32       S12, S10
    VLDR            S12, [R1,#0xC]
    VCMPE.F32       S12, S2
    VCMPE.F32       S12, S4
    VLDR            S2, [R1,#0x10]
    VCMPE.F32       S2, S6
    VCMPE.F32       S2, S8
  if ( _NF ^ _VF )
    __asm { VLDR            S2, [R1,#0x14] }
    v6 = 0;
    v7 = 0;
    __asm
    {
      VCMPE.F32       S2, S10
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S2, S0
    }
    if ( _NF ^ _VF )
      v6 = 1;
    __asm { VMRS            APSR_nzcv, FPSCR }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v7 = 1;
    result = v7 & v6;
  else
LABEL_24:
    result = 0;
  return result;
}


int __fastcall AABB::shrink(AABB *this, const Vec3 *_R1, int _R2)
{
  int result; // r0@13
  char v10; // r1@15

  __asm
  {
    VLDR            S0, [R1]
    VMOV.F32        S12, #0.5
    VLDR            S2, [R1,#0xC]
    VLDR            S14, [R2]
    VADD.F32        S7, S0, S2
    VLDR            S6, [R1,#4]
    VSUB.F32        S2, S2, S14
    VLDR            S4, [R1,#0x10]
    VADD.F32        S14, S14, S0
    VLDR            S1, [R2,#4]
    VLDR            S8, [R1,#8]
    VADD.F32        S5, S4, S6
    VLDR            S10, [R1,#0x14]
    VSUB.F32        S4, S4, S1
    VLDR            S3, [R2,#8]
    VADD.F32        S1, S1, S6
    VADD.F32        S9, S10, S8
    VSUB.F32        S0, S10, S3
    VADD.F32        S10, S3, S8
    VCMPE.F32       S14, S2
    VMRS            APSR_nzcv, FPSCR
    VMUL.F32        S3, S7, S12
    VMOV.F32        S7, S14
  }
  _R1 = &Vec3::ZERO;
    VCMPE.F32       S1, S4
    VMUL.F32        S5, S5, S12
    VMOV.F32        S8, S1
    VMUL.F32        S12, S9, S12
    VMOV.F32        S6, S10
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S7, S3 }
    VCMPE.F32       S10, S0
    __asm { VMOVGT.F32      S8, S5 }
    __asm { VMOVGT.F32      S6, S12 }
    __asm { VMOVGT.F32      S2, S3 }
    __asm { VMOVGT.F32      S4, S5 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S0, S12 }
    VSTMIA          R0, {S7-S8}
    VLDR            S10, [R1]
    VSTR            S6, [R0,#8]
    VCMPE.F32       S7, S10
    VSTR            S2, [R0,#0xC]
    VSTR            S4, [R0,#0x10]
    VSTR            S0, [R0,#0x14]
  if ( _ZF )
    _R1 = &Vec3::ZERO;
    __asm { VLDR            S12, [R1,#4] }
    v10 = 0;
    __asm
    {
      VCMPE.F32       S8, S12
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _ZF )
      __asm
      {
        VCMPE.F32       S4, S12
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _ZF )
        __asm
        {
          VCMPEEQ.F32     S2, S10
          VMRSEQ          APSR_nzcv, FPSCR
        }
        _R2 = &Vec3::ZERO;
          VLDR            S2, [R2,#8]
          VCMPE.F32       S6, S2
          VMRS            APSR_nzcv, FPSCR
        if ( _ZF )
          __asm { VCMPE.F32       S0, S2 }
          v10 = 0;
          __asm { VMRS            APSR_nzcv, FPSCR }
          if ( _ZF )
            v10 = 1;
    *(_BYTE *)(result + 24) = v10;
  else
    *(_BYTE *)(result + 24) = 0;
  return result;
}


int __fastcall AABB::merge(AABB *this, const AABB *_R1, int _R2)
{
  int result; // r0@13
  char v11; // r1@15

  __asm
  {
    VLDR            S10, [R2]
    VLDR            S12, [R2,#4]
    VLDR            S14, [R2,#8]
    VLDR            S1, [R2,#0xC]
    VLDR            S3, [R2,#0x10]
    VLDR            S5, [R2,#0x14]
    VLDMIA          R1, {S7-S8}
    VCMPE.F32       S10, S7
    VLDR            S2, [R1,#8]
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S12, S8
    VLDR            S4, [R1,#0xC]
    VLDR            S6, [R1,#0x10]
    VLDR            S0, [R1,#0x14]
  }
  _R1 = &Vec3::ZERO;
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S7, S10 }
    VCMPE.F32       S14, S2
    __asm { VMOVLT.F32      S8, S12 }
    VCMPE.F32       S4, S1
    __asm { VMOVLT.F32      S2, S14 }
    VCMPE.F32       S6, S3
    __asm { VMOVLT.F32      S4, S1 }
    VCMPE.F32       S0, S5
    __asm { VMOVLT.F32      S6, S3 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVLT.F32      S0, S5 }
    VSTMIA          R0, {S7-S8}
    VLDR            S10, [R1]
    VSTR            S2, [R0,#8]
    VCMPE.F32       S7, S10
    VSTR            S4, [R0,#0xC]
    VSTR            S6, [R0,#0x10]
    VSTR            S0, [R0,#0x14]
  if ( _ZF )
    _R1 = &Vec3::ZERO;
    __asm { VLDR            S12, [R1,#4] }
    v11 = 0;
    __asm
    {
      VCMPE.F32       S8, S12
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _ZF )
      __asm
      {
        VCMPE.F32       S6, S12
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _ZF )
        __asm
        {
          VCMPEEQ.F32     S4, S10
          VMRSEQ          APSR_nzcv, FPSCR
        }
        _R2 = &Vec3::ZERO;
          VLDR            S4, [R2,#8]
          VCMPE.F32       S2, S4
          VMRS            APSR_nzcv, FPSCR
        if ( _ZF )
          __asm { VCMPE.F32       S0, S4 }
          v11 = 0;
          __asm { VMRS            APSR_nzcv, FPSCR }
          if ( _ZF )
            v11 = 1;
    *(_BYTE *)(result + 24) = v11;
  else
    *(_BYTE *)(result + 24) = 0;
  return result;
}


signed int __fastcall AABB::intersects(AABB *this, const Vec3 *_R1, const Vec3 *_R2)
{
  signed int result; // r0@8

  __asm
  {
    VLDR            S2, [R1]
    VMOV.F32        S1, #0.5
    VLDR            S0, [R2]
    VMOV.F32        S3, #-0.5
    VLDR            S4, [R0]
    VSUB.F32        S0, S0, S2
    VLDR            S6, [R0,#0xC]
    VADD.F32        S8, S4, S6
    VSUB.F32        S4, S6, S4
    VMUL.F32        S0, S0, S1
    VMUL.F32        S6, S8, S3
    VMUL.F32        S4, S4, S1
    VADD.F32        S8, S0, S2
    VABS.F32        S2, S0
    VADD.F32        S6, S8, S6
    VADD.F32        S8, S4, S2
    VABS.F32        S10, S6
    VCMPE.F32       S10, S8
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    goto LABEL_15;
    VLDR            S10, [R1,#4]
    VLDR            S8, [R2,#4]
    VLDR            S12, [R0,#4]
    VSUB.F32        S8, S8, S10
    VLDR            S14, [R0,#0x10]
    VADD.F32        S5, S12, S14
    VSUB.F32        S12, S14, S12
    VMUL.F32        S8, S8, S1
    VMUL.F32        S5, S5, S3
    VADD.F32        S7, S8, S10
    VMUL.F32        S10, S12, S1
    VABS.F32        S14, S8
    VADD.F32        S12, S7, S5
    VADD.F32        S5, S10, S14
    VABS.F32        S7, S12
    VCMPE.F32       S7, S5
    VLDR            S7, [R1,#8]
    VLDR            S5, [R2,#8]
    VLDR            S9, [R0,#8]
    VSUB.F32        S5, S5, S7
    VLDR            S11, [R0,#0x14]
    VADD.F32        S13, S9, S11
    VSUB.F32        S9, S11, S9
    VMUL.F32        S5, S5, S1
    VMUL.F32        S11, S13, S3
    VMUL.F32        S3, S9, S1
    VADD.F32        S7, S5, S7
    VABS.F32        S9, S5
    VADD.F32        S7, S7, S11
    VADD.F32        S1, S3, S9
    VABS.F32        S11, S7
    VCMPE.F32       S11, S1
    VPUSH           {D8}
    VMUL.F32        S11, S10, S9
    VLDR            S1, =0.0001
    VMUL.F32        S13, S12, S5
    VMUL.F32        S15, S7, S8
    VMUL.F32        S16, S3, S14
    VADD.F32        S11, S11, S1
    VSUB.F32        S13, S15, S13
    VADD.F32        S11, S11, S16
    VABS.F32        S13, S13
    VCMPE.F32       S13, S11
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm { VMUL.F32        S9, S4, S9 }
    result = 0;
    __asm
    {
      VMUL.F32        S7, S7, S0
      VMUL.F32        S5, S6, S5
      VMUL.F32        S3, S3, S2
      VADD.F32        S9, S9, S1
      VSUB.F32        S5, S5, S7
      VADD.F32        S3, S9, S3
      VABS.F32        S5, S5
      VCMPE.F32       S5, S3
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm
      {
        VMUL.F32        S4, S4, S14
        VMUL.F32        S6, S6, S8
        VMUL.F32        S0, S12, S0
        VMUL.F32        S2, S10, S2
        VADD.F32        S4, S4, S1
        VSUB.F32        S0, S0, S6
        VADD.F32        S2, S4, S2
        VABS.F32        S0, S0
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        result = 1;
  else
LABEL_15:
  return result;
}


int __fastcall AABB::expand(int result, const Vec3 *_R1)
{
  char *v6; // r12@1
  char *v7; // lr@1
  char *v8; // r2@1
  char *v9; // r3@1
  const Vec3 *v10; // r4@1
  __int64 v11; // r2@5
  int v13; // r2@11
  int v14; // r3@11

  __asm { VLDR            S2, [R0,#4] }
  v6 = (char *)_R1 + 4;
  __asm { VLDR            S8, [R1,#4] }
  v7 = (char *)_R1 + 8;
  __asm { VLDR            S4, [R0,#8] }
  v8 = (char *)_R1 + 4;
  __asm
  {
    VCMPE.F32       S8, S2
    VLDR            S10, [R1,#8]
    VMRS            APSR_nzcv, FPSCR
  }
  v9 = (char *)_R1 + 8;
    VCMPE.F32       S10, S4
    VLDR            S0, [R0]
    VLDR            S6, [R1]
  v10 = (const Vec3 *)result;
  if ( !(_NF ^ _VF) )
    v8 = (char *)(result + 4);
    VCMPE.F32       S6, S0
    v9 = (char *)(result + 8);
  __asm { VMRS            APSR_nzcv, FPSCR }
  HIDWORD(v11) = *(_DWORD *)v9;
  LODWORD(v11) = *(_DWORD *)v8;
  if ( _NF ^ _VF )
    v10 = _R1;
  *(_DWORD *)result = *(_DWORD *)v10;
  _R5 = (_DWORD *)(result + 16);
  *(_QWORD *)(result + 4) = v11;
    VLDR            S2, [R1,#4]
    VLDR            S6, [R5]
    VLDR            S4, [R1,#8]
    VCMPE.F32       S6, S2
    VLDR            S10, [R0,#0x14]
    VLDR            S0, [R1]
    VLDR            S8, [R0,#0xC]
    v6 = (char *)(result + 16);
    VCMPE.F32       S8, S0
    v7 = (char *)(result + 20);
  v13 = *(_DWORD *)v6;
  v14 = *(_DWORD *)v7;
    _R1 = (const Vec3 *)(result + 12);
  *(_DWORD *)(result + 12) = *(_DWORD *)_R1;
  *_R5 = v13;
  *(_DWORD *)(result + 20) = v14;
  return result;
}


int __fastcall AABB::clipCollide(AABB *this, const AABB *_R1, const Vec3 *a3, int a4, float *a5, int *a6)
{
  int v7; // r10@1
  float *v12; // r11@1
  __int64 v13; // kr00_8@3
  int v14; // r6@3
  char *v15; // r3@3
  int v16; // r9@3
  int v17; // r4@3
  int v18; // r6@3
  int result; // r0@3
  int *v22; // r2@24
  AABB *v29; // [sp+0h] [bp-34h]@3
  int v30; // [sp+4h] [bp-30h]@3
  int v31; // [sp+18h] [bp-1Ch]@3
  char v32[12]; // [sp+1Ch] [bp-18h]@3
  char v33[12]; // [sp+28h] [bp-Ch]@3
  float v34; // [sp+34h] [bp+0h]@1

  _R5 = a3;
  LOWORD(v7) = 0;
  __asm { VLDR            S0, =3.4028e38 }
  v12 = &v34;
  __asm { VLDR            S2, =0.0 }
  if ( !_ZF )
    *a6 = 0;
  v13 = *(_QWORD *)a4;
  v14 = *(_DWORD *)(a4 + 8);
  HIWORD(v7) = -16512;
  v30 = a4;
  v15 = v33;
  *(_QWORD *)this = v13;
  v16 = 0;
  *((_DWORD *)this + 2) = v14;
  v17 = 0;
  v29 = this;
  v18 = 0;
  v31 = 2139095039;
  result = (int)v32;
  do
  {
    if ( v18 == 2 )
    {
      __asm
      {
        VLDR            S4, [R1,#8]
        VLDR            S6, [R5,#0x14]
      }
      _R2 = (int)_R5 + 8;
      _R7 = (char *)_R1 + 20;
      __asm { VSUB.F32        S4, S6, S4 }
    }
    else if ( v18 == 1 )
        VLDR            S4, [R1,#4]
        VLDR            S6, [R5,#0x10]
      _R2 = (int)_R5 + 4;
      _R7 = (char *)_R1 + 16;
    else
        VLDR            S4, [R1]
        VLDR            S6, [R5,#0xC]
      _R7 = (char *)_R1 + 12;
      _R2 = (int)_R5;
    __asm
      VCMPE.F32       S4, #0.0
      VLDR            S6, [R2]
      VMRS            APSR_nzcv, FPSCR
      VLDR            S8, [R7]
      VSUB.F32        S10, S8, S6
      VMOV.F32        S6, S2
      VMOV.F32        S8, S2
      VCMPE.F32       S10, #0.0
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S6, S4 }
      VCMPE.F32       S6, #0.0
      __asm { VMOVGT.F32      S8, S10 }
    __asm { VMRS            APSR_nzcv, FPSCR }
    if ( _ZF )
      *(_DWORD *)v12 = 0;
      __asm { VSTR            S4, [R3] }
      *(_DWORD *)result = v7;
        VCMPE.F32       S8, #0.0
        VMRS            APSR_nzcv, FPSCR
      if ( !_ZF )
        __asm
        {
          VCMPE.F32       S6, S8
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
          __asm
          {
            VSTR            S6, [R3]
            VSTR            S6, [R11,#0xC+var_C]
          }
          *(_DWORD *)result = v7;
        else
            VMOV.F32        S6, S8
            VSTR            S8, [R3]
            VSTR            S8, [R11,#0xC+var_C]
          *(_DWORD *)result = 1065353216;
        goto LABEL_24;
      __asm { VSTR            S10, [R3] }
      *(_DWORD *)result = 1065353216;
    if ( v16 > 0 )
      return result;
    ++v16;
    v17 = v18;
    __asm { VMOV.F32        S6, S2 }
LABEL_24:
    __asm { VCMPE.F32       S6, S0 }
    v22 = &v31;
    result += 4;
    v15 += 4;
    ++v18;
    if ( _NF ^ _VF )
      v22 = (int *)v12;
    ++v12;
    _R7 = *v22;
    v31 = _R7;
    __asm { VMOV            S0, R7 }
  }
  while ( _NF ^ _VF );
  if ( a6 )
    *a6 = _R7;
  if ( v16 )
    _R0 = &v32[4 * v17];
    __asm { VLDR            S0, [R0] }
    _R0 = &v33[4 * v17];
    __asm { VLDR            S2, [R0] }
      result = v30 + 8;
      result = v30;
      if ( v17 == 1 )
        result = v30 + 4;
      VLDR            S4, [R0]
      VMUL.F32        S4, S4, S0
      VSUB.F32        S4, S2, S4
      __asm { VMUL.F32        S0, S0, S2 }
      if ( v17 == 2 )
        result = (int)v29 + 8;
      else if ( v17 == 1 )
        result = (int)v29 + 4;
      else
        result = (int)v29;
LABEL_51:
      __asm { VSTR            S0, [R0] }
  else
    result = (int)a5;
    if ( !a5 )
        VLDR            S0, [SP,#0x40+var_C]
        VLDR            S2, [SP,#0x40+var_8]
      result = 0;
        VLDR            S4, [SP,#0x40+var_4]
        VCMPE.F32       S2, S0
      if ( _NF ^ _VF )
        result = 1;
      _R1 = &v34 + result;
        VLDR            S0, [R1]
        VCMPE.F32       S4, S0
        result = 2;
      __asm { VLDR            S0, [R1] }
      _R1 = &v32[4 * result];
        VLDR            S2, [R1]
        VMUL.F32        S0, S2, S0
      if ( _ZF )
        goto LABEL_51;
      if ( result == 1 )
      __asm { VSTR            S0, [R1] }
  return result;
}
