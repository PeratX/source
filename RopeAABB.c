

signed int __fastcall RopeAABB::getContactPoint(int a1, int _R1, int _R2, signed int *a4)
{
  signed int v9; // lr@2
  signed int result; // r0@9
  signed int v12; // r2@14
  signed int v13; // r2@25
  int v14; // [sp+0h] [bp-14h]@1
  int v15; // [sp+4h] [bp-10h]@1
  int v16; // [sp+8h] [bp-Ch]@1

  _R12 = a1;
  v16 = 0;
  v14 = 0;
  v15 = 0;
  __asm
  {
    VLDR            S2, [R1]
    VLDR            S6, [R12,#0xC]
    VLDR            S8, =0.00001
    VSUB.F32        S10, S2, S6
    VLDR            S4, [R1,#4]
    VLDR            S0, [R1,#8]
    VCMPE.F32       S10, S8
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm
    {
      VLDR            S6, [R12]
      VSUB.F32        S6, S6, S2
      VCMPE.F32       S6, S8
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm { VCMPE.F32       S10, S6 }
      _R1 = -1;
      __asm
      {
        VMRS            APSR_nzcv, FPSCR
        VMOV.F32        S12, S2
      }
      v9 = 1;
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S6, S10 }
        _R1 = 1;
    else
      v9 = 0;
      __asm { VLDR            S12, [R12] }
    __asm { VMOV.F32        S10, S6 }
  else
    v9 = 0;
    __asm { VLDR            S12, [R12,#0xC] }
    _R1 = 1;
    VLDR            S14, =-3.4028e38
    VMOV            S6, R2
    VCMPE.F32       S10, S14
    __asm { VLDR            S10, =3.4028e38 }
    _R1 = 0;
    result = -1;
    result = 0;
      VCMPE.F32       S10, S6
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      return result;
    __asm { VNEG.F32        S10, S10 }
    VSTR            S12, [SP,#0x14+var_C]
    VLDR            S12, [R12,#0x10]
    VSUB.F32        S1, S4, S12
    VCMPE.F32       S1, S8
      VLDR            S12, [R12,#4]
      VSUB.F32        S12, S12, S4
      VCMPE.F32       S12, S8
      __asm { VCMPE.F32       S1, S12 }
      v12 = -1;
      __asm { VMRS            APSR_nzcv, FPSCR }
      ++v9;
      __asm { VMOV.F32        S14, S4 }
        __asm { VMOVGT.F32      S12, S1 }
        v12 = 1;
      __asm { VLDR            S14, [R12,#4] }
      VMOV.F32        S12, S1
      VLDR            S14, [R12,#0x10]
    v12 = 1;
    VLDR            S1, =-0.01
    VSUB.F32        S1, S1, S12
    VCMPE.F32       S1, S10
  if ( _NF ^ _VF )
      VCMPE.F32       S12, S6
      return 0;
    __asm { VNEG.F32        S10, S12 }
    result = 1;
    _R1 = v12;
    VSTR            S14, [SP,#0x14+var_10]
    VLDR            S12, [R12,#0x14]
    VSUB.F32        S14, S0, S12
    VCMPE.F32       S14, S8
      VLDR            S12, [R12,#8]
      VSUB.F32        S12, S12, S0
      __asm { VCMPE.F32       S14, S12 }
      v13 = -1;
      __asm { VMOV.F32        S8, S0 }
        __asm { VMOVGT.F32      S12, S14 }
        v13 = 1;
      __asm { VLDR            S8, [R12,#8] }
      VMOV.F32        S12, S14
      VLDR            S8, [R12,#0x14]
    v13 = 1;
    VNEG.F32        S14, S12
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOV.F32        S10, S14 }
    result = 2;
    _R1 = v13;
  __asm { VSTR            S8, [SP,#0x14+var_14] }
  if ( (v9 & 0xFFFFFFFE) == 2 )
      VMOV            S2, R1
      VADD.F32        S0, S10, S6
      VCVT.F32.S32    S2, S2
    *a4 = result;
      VMUL.F32        S0, S2, S0
      VMUL.F32        S2, S0, S2
      VSTR            S0, [R3,#4]
      VCMPE.F32       S2, #0.0
      result = 1;
    *a4 = -1;
      VLDR            S8, [SP,#0x14+var_C]
      VLDR            S10, [SP,#0x14+var_10]
      VSUB.F32        S2, S2, S8
      VLDR            S8, [SP,#0x14+var_14]
      VSUB.F32        S4, S4, S10
      VSUB.F32        S0, S0, S8
      VMUL.F32        S8, S2, S2
      VMUL.F32        S10, S4, S4
      VMUL.F32        S12, S0, S0
      VADD.F32        S8, S10, S8
      VMOV.F32        S10, #1.0
      VADD.F32        S8, S8, S12
      VSQRT.F32       S8, S8
      VDIV.F32        S10, S10, S8
      VMUL.F32        S2, S10, S2
      VMUL.F32        S4, S4, S10
      VMUL.F32        S0, S0, S10
      VSUB.F32        S10, S6, S8
      VSUB.F32        S6, S8, S6
      VLDR            S8, =-0.0
      VSTR            S10, [R3,#4]
      VSTR            S2, [R3,#8]
      VSTR            S4, [R3,#0xC]
      VSTR            S0, [R3,#0x10]
    if ( _NF ^ _VF )
  return result;
}
