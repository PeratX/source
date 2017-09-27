

int __fastcall VrComfortMove::getRenderPosition(int result, int a2, int _R2, int a4, int a5, int a6, int a7, int a8)
{
  __int64 v15; // r2@4
  int v16; // r1@4
  int v17; // r4@11
  int v18; // r1@11

  __asm { VMOV            S0, R2 }
  if ( a7 == 1 )
  {
    _R12 = *(_DWORD *)(a2 + 12);
    _R2 = *(_DWORD *)(a2 + 28);
    if ( _R12 >= _R2 )
      goto LABEL_15;
    __asm { VMOV            S4, R2 }
    _R4 = *(_DWORD *)(a2 + 8) - *(_DWORD *)a2;
    __asm
    {
      VMOV            S2, R4
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
      VADD.F32        S2, S2, S0
      VCMPE.F32       S2, S4
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
LABEL_15:
      v15 = *(_QWORD *)(a2 + 32);
      v16 = *(_DWORD *)(a2 + 40);
LABEL_5:
      *(_QWORD *)result = v15;
      *(_DWORD *)(result + 8) = v16;
      return result;
      VMOV            S4, R12
    if ( _NF ^ _VF )
      v15 = *(_QWORD *)(a2 + 16);
      v16 = *(_DWORD *)(a2 + 24);
      goto LABEL_5;
  }
  __asm { VLDR            S2, [SP,#8+arg_0] }
  if ( *(_BYTE *)(a2 + 4) )
    if ( a8 == 1 )
      __asm { VMOV.F32        S2, #1.0 }
      v17 = *(_DWORD *)(a2 + 8);
      v18 = a2 + 240;
      _R2 = v18 + 12 * (v17 & 0xF);
      __asm { VSUB.F32        S2, S2, S0 }
      _R1 = v18 + 12 * (((_BYTE)v17 + 15) & 0xF);
      __asm
      {
        VLDR            S4, [R2,#4]
        VLDR            S6, [R1,#4]
        VMUL.F32        S0, S4, S0
        VMUL.F32        S2, S6, S2
        VADD.F32        S2, S0, S2
      }
  *(_DWORD *)result = a4;
  __asm { VSTR            S2, [R0,#4] }
  *(_DWORD *)(result + 8) = a6;
  return result;
}


int __fastcall VrComfortMove::tick(int result, int a2, int _R2, int a4, int a5, int a6, int a7, int a8)
{
  signed int v13; // r6@5
  signed int v15; // r5@32
  int v17; // r7@37
  int v19; // r6@37
  int v20; // r4@37
  int v21; // r1@37
  int v23; // r1@40
  int v24; // r1@40
  int v25; // r1@41

  _R12 = a6;
  if ( *(_BYTE *)(result + 4) && !a8 )
  {
    __asm
    {
      VLDR            S0, =-0.42
      VMOV            S2, R2
      VADD.F32        S0, S2, S0
      VABS.F32        S4, S0
      VLDR            S0, =0.001
      VCMPE.F32       S4, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      v13 = 1;
    else
      __asm
      {
        VLDR            S4, =-0.3332
        VADD.F32        S4, S2, S4
        VABS.F32        S4, S4
        VCMPE.F32       S4, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        v13 = 2;
      else
        __asm
        {
          VLDR            S4, =-0.24814
          VADD.F32        S4, S2, S4
          VABS.F32        S4, S4
          VCMPE.F32       S4, S0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
          v13 = 3;
        else
          __asm
          {
            VLDR            S4, =-0.16477
            VADD.F32        S4, S2, S4
            VABS.F32        S4, S4
            VCMPE.F32       S4, S0
            VMRS            APSR_nzcv, FPSCR
          }
          if ( _NF ^ _VF )
            v13 = 4;
          else
            __asm
            {
              VLDR            S4, =-0.083078
              VADD.F32        S4, S2, S4
              VABS.F32        S4, S4
              VCMPE.F32       S4, S0
              VMRS            APSR_nzcv, FPSCR
            }
            if ( _NF ^ _VF )
              v13 = 5;
            else
              __asm
              {
                VLDR            S4, =-0.003016
                VADD.F32        S4, S2, S4
                VABS.F32        S4, S4
                VCMPE.F32       S4, S0
                VMRS            APSR_nzcv, FPSCR
              }
              if ( _NF ^ _VF )
                v13 = 6;
              else
                __asm
                {
                  VLDR            S4, =0.075444
                  VADD.F32        S4, S2, S4
                  VABS.F32        S4, S4
                  VCMPE.F32       S4, S0
                  VMRS            APSR_nzcv, FPSCR
                }
                if ( _NF ^ _VF )
                  v13 = 7;
                else
                  __asm
                  {
                    VLDR            S4, =0.15234
                    VADD.F32        S4, S2, S4
                    VABS.F32        S4, S4
                    VCMPE.F32       S4, S0
                    VMRS            APSR_nzcv, FPSCR
                  }
                  if ( _NF ^ _VF )
                    v13 = 8;
                  else
                    __asm
                    {
                      VLDR            S4, =0.22769
                      VADD.F32        S2, S2, S4
                      VABS.F32        S2, S2
                      VCMPE.F32       S2, S0
                      VMRS            APSR_nzcv, FPSCR
                    }
                    if ( !(_NF ^ _VF) )
                      __asm
                      {
                        VLDR            S2, [R0,#0x2C]
                        VABS.F32        S4, S2
                        VCMPE.F32       S4, S0
                        VMRS            APSR_nzcv, FPSCR
                      }
                      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                        goto LABEL_32;
                        VLDR            S0, =0.66
                        VLDR            S4, =0.01
                        VMUL.F32        S0, S2, S0
                        VMOV            S2, R12
                        VADD.F32        S2, S0, S2
                        VSTR            S0, [R0,#0x2C]
                        VMOV            R12, S2
                        VABS.F32        S2, S0
                        VCMPE.F32       S2, S4
                      if ( !(_NF ^ _VF) )
                      _R7 = 0;
LABEL_31:
                      *(_DWORD *)(result + 44) = _R7;
                      goto LABEL_32;
                    v13 = 9;
    __asm { VMOV            S0, R12 }
    _R7 = dword_262CFB4[2 * v13];
      VMOV            S2, R7
      VMOV            R12, S0
    goto LABEL_31;
  }
LABEL_32:
  v15 = *(_DWORD *)result;
  if ( *(_DWORD *)result <= 0 )
    v15 = 1;
    goto LABEL_36;
  if ( v15 >= 15 )
    v15 = 14;
LABEL_36:
    *(_DWORD *)result = v15;
  _R6 = a2 & 0x7FFFFFFF;
  v17 = *(_DWORD *)(result + 8);
  __asm { VMOV            S0, R6 }
  _R6 = a4 & 0x7FFFFFFF;
  __asm { VMOV            S4, R6 }
  v19 = v17 + 1;
  __asm { VCVT.F64.F32    D1, S0 }
  *(_DWORD *)(result + 8) = v17 + 1;
  v20 = result + 12 * ((v17 + 1) & 0xF);
  __asm { VCVT.F64.F32    D2, S4 }
  *(_DWORD *)(v20 + 48) = a2;
  v21 = v20 + 240;
  *(_DWORD *)(v20 + 52) = _R2;
  *(_DWORD *)(v20 + 56) = a4;
  *(_DWORD *)v21 = a5;
  *(_DWORD *)(v21 + 4) = _R12;
  *(_DWORD *)(v21 + 8) = a7;
  __asm
    VADD.F64        D1, D2, D1
    VLDR            D0, =0.00999999978
    VCMPE.F64       D1, D0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    goto LABEL_50;
  _R1 = result + 12 * (v17 & 0xF);
    VLDR            S2, [R1,#0x30]
    VLDR            S4, [R1,#0x38]
    VABS.F32        S2, S2
    VABS.F32        S4, S4
    VCVT.F64.F32    D1, S2
    VCVT.F64.F32    D2, S4
  if ( _NF ^ _VF )
    *(_DWORD *)(result + 12) = v19 - v15;
    v23 = result + 12 * ((v19 - v15) & 0xF);
    *(_DWORD *)(result + 16) = *(_DWORD *)(v23 + 240);
    *(_DWORD *)(result + 20) = *(_DWORD *)(v23 + 244);
    v24 = *(_DWORD *)(v23 + 248);
  else
LABEL_50:
    v25 = *(_DWORD *)(result + 28);
    if ( v19 < v15 + v25 )
      return result;
    *(_DWORD *)(result + 12) = v25;
    *(_DWORD *)(result + 16) = *(_DWORD *)(result + 32);
    *(_DWORD *)(result + 20) = *(_DWORD *)(result + 36);
    v24 = *(_DWORD *)(result + 40);
  *(_DWORD *)(result + 24) = v24;
  *(_DWORD *)(result + 28) = v19;
  *(_DWORD *)(result + 32) = a5;
  *(_DWORD *)(result + 36) = _R12;
  *(_DWORD *)(result + 40) = a7;
  return result;
}
