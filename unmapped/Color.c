

int __fastcall Color::toABGR(Color *this)
{
  int v7; // r0@1
  int v9; // r0@1

  __asm
  {
    VLDR            S0, =255.0
    VLDR            S4, [R0,#4]
    VLDR            S2, [R0]
    VLDR            S8, [R0,#0xC]
    VMUL.F32        S4, S4, S0
    VMUL.F32        S2, S2, S0
    VLDR            S6, [R0,#8]
    VMUL.F32        S8, S8, S0
    VMUL.F32        S0, S6, S0
    VCVTR.S32.F32   S4, S4
    VCVTR.S32.F32   S6, S8
    VCVTR.S32.F32   S2, S2
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S4
    VMOV            R1, S2
  }
  v7 = _R1 + (_R0 << 8);
  __asm { VMOV            R1, S0 }
  v9 = v7 + (_R1 << 16);
  __asm { VMOV            R1, S6 }
  return v9 + (_R1 << 24);
}


unsigned int __fastcall Color::fromHSB(Color *this, float _R1, float _R2, float _R3)
{
  Color *v8; // r4@1
  unsigned int result; // r0@3
  int v14; // r2@7
  unsigned int v15; // r3@7

  __asm { VMOV            S18, R2 }
  v8 = this;
  __asm
  {
    VMOV            S16, R3
    VCMPE.F32       S18, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _ZF )
    result = 1065353216;
    *((_DWORD *)v8 + 3) = 1065353216;
    __asm
    {
      VSTR            S16, [R4]
      VSTR            S16, [R4,#4]
    }
LABEL_4:
    __asm { VSTR            S16, [R4,#8] }
  else
    __asm { VMOV            S20, R1 }
    _R0 = j_floorf_0(_R1);
      VMOV            S0, R0
      VMOV.F32        S2, #6.0
      VSUB.F32        S0, S20, S0
      VMUL.F32        S20, S0, S2
      VMOV            R0, S20
    _R0 = j_floorf_0(_R0);
      VCVTR.S32.F32   S0, S20
      VMOV            R1, S0
      VMOV.F32        S2, #1.0
      VSUB.F32        S6, S2, S18
      VSUB.F32        S4, S0, S2
      VMUL.F32        S0, S0, S18
      VMUL.F32        S4, S4, S18
      VSUB.F32        S8, S2, S0
      VMUL.F32        S0, S6, S16
      VADD.F32        S4, S4, S2
      VMUL.F32        S2, S8, S16
      VMUL.F32        S4, S4, S16
    switch ( _R1 )
      case 0:
        result = 1065353216;
        *((_DWORD *)v8 + 3) = 1065353216;
        __asm
        {
          VSTR            S16, [R4]
          VSTR            S4, [R4,#4]
        }
        goto LABEL_9;
      case 1:
          VSTR            S2, [R4]
          VSTR            S16, [R4,#4]
LABEL_9:
        __asm { VSTR            S0, [R4,#8] }
        return result;
      case 2:
          VSTR            S0, [R4]
          VSTR            S4, [R4,#8]
      case 3:
          VSTR            S2, [R4,#4]
        goto LABEL_4;
      case 4:
          VSTR            S4, [R4]
          VSTR            S0, [R4,#4]
      case 5:
          VSTR            S2, [R4,#8]
        break;
      default:
        v14 = *(&Color::NIL + 1);
        result = HIDWORD(qword_283E6B8);
        v15 = qword_283E6B8;
        *(_DWORD *)v8 = Color::NIL;
        *((_DWORD *)v8 + 1) = v14;
        *((_QWORD *)v8 + 1) = __PAIR__(result, v15);
  return result;
}


int __fastcall Color::toARGB(Color *this)
{
  int v7; // r0@1
  int v9; // r0@1

  __asm
  {
    VLDR            S0, =255.0
    VLDR            S4, [R0,#4]
    VLDR            S6, [R0,#8]
    VLDR            S8, [R0,#0xC]
    VMUL.F32        S4, S4, S0
    VLDR            S2, [R0]
    VMUL.F32        S6, S6, S0
    VMUL.F32        S8, S8, S0
    VMUL.F32        S0, S2, S0
    VCVTR.S32.F32   S2, S4
    VCVTR.S32.F32   S4, S6
    VCVTR.S32.F32   S6, S8
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S2
    VMOV            R1, S0
  }
  v7 = (_R0 << 8) + (_R1 << 16);
  __asm { VMOV            R1, S4 }
  v9 = v7 + _R1;
  __asm { VMOV            R1, S6 }
  return v9 + (_R1 << 24);
}
