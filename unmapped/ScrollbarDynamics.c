

int __fastcall ScrollbarDynamics::TargetPosDeltaSim::getMaxDeltaPos(ScrollbarDynamics::TargetPosDeltaSim *this)
{
  int result; // r0@1

  __asm
  {
    VMOV.F32        S0, #20.0
    VLDR            S2, [R0,#0xC]
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


int __fastcall ScrollbarDynamics::setTargetPointActive(int result, int a2)
{
  if ( a2 != *(_BYTE *)(result + 40) )
  {
    if ( a2 == 1 )
    {
      *(_DWORD *)(result + 32) = 0;
      *(_DWORD *)(result + 36) = 0;
      *(_DWORD *)(result + 52) = 0;
      *(_DWORD *)(result + 56) = 0;
      *(_DWORD *)(result + 44) = 0;
      *(_DWORD *)(result + 48) = 0;
      *(_DWORD *)(result + 64) = 0;
      *(_BYTE *)(result + 40) = 1;
      return result;
    }
    *(_BYTE *)(result + 60) = 1;
  }
  *(_BYTE *)(result + 40) = a2;
  return result;
}


int __fastcall ScrollbarDynamics::adjustTargetPos(int result, float _R1)
{
  __asm
  {
    VMOV            S0, R1
    VLDR            S2, [R0,#0x24]
    VADD.F32        S2, S2, S0
    VABS.F32        S0, S0
    VSTR            S2, [R0,#0x24]
    VLDR            S2, [R0,#0x40]
    VADD.F32        S0, S2, S0
    VSTR            S0, [R0,#0x40]
  }
  return result;
}


signed int __fastcall ScrollbarDynamics::isMoving(ScrollbarDynamics *this)
{
  signed int result; // r0@1

  __asm
  {
    VLDR            S0, [R0,#8]
    VMOV.F32        S2, #1.0
  }
  result = 0;
    VABS.F32        S0, S0
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    result = 1;
  return result;
}


int __fastcall ScrollbarDynamics::_applyTargetPosSpringDamper(int result, float a2)
{
  __asm
  {
    VLDR            S0, [R0]
    VLDR            S6, [R0,#0x1C]
    VLDR            S4, [R0,#8]
    VSUB.F32        S0, S6, S0
    VLDR            S8, [R0,#0x20]
    VLDR            S6, =1000.0
    VSUB.F32        S4, S8, S4
    VLDR            S2, [R0,#0xC]
    VMUL.F32        S0, S0, S6
    VLDR            S6, =63.246
    VMUL.F32        S4, S4, S6
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VSTR            S0, [R0,#0xC]
  }
  return result;
}


int __fastcall ScrollbarDynamics::_applyEndSpringDamper(int result)
{
  __asm
  {
    VLDR            S0, [R0]
    VLDR            S2, [R0,#0x10]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    goto LABEL_8;
    VLDR            S4, [R0,#0x14]
    VCMPE.F32       S0, S4
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
LABEL_8:
    __asm
    {
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !(_NF ^ _VF) )
      __asm { VLDRGE          S2, [R0,#0x14] }
      VLDR            S4, [R0,#8]
      VLDR            S6, [R0,#0xC]
      VSUB.F32        S0, S2, S0
      VLDR            S2, =300.0
      VMUL.F32        S0, S0, S2
      VLDR            S2, =-34.641
      VMUL.F32        S2, S4, S2
      VADD.F32        S0, S0, S6
      VADD.F32        S0, S0, S2
      VSTR            S0, [R0,#0xC]
  return result;
}


int __fastcall ScrollbarDynamics::setMaxDisplacementPastMinMax(int result, float a2)
{
  *(float *)(result + 24) = a2;
  return result;
}


int __fastcall ScrollbarDynamics::_applyCoulombFriction(int result, float _R1)
{
  __asm
  {
    VLDR            S0, [R0]
    VLDR            S2, [R0,#0x10]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !(_NF ^ _VF) )
    __asm
    {
      VLDR            S2, [R0,#0x14]
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm
      {
        VLDR            S2, [R0,#8]
        VMOV            S0, R1
        VLDR            S10, =200.0
        VABS.F32        S6, S2
        VLDR            S4, [R0,#0xC]
        VMOV            R1, S2
        VDIV.F32        S8, S6, S0
        VMUL.F32        S0, S0, S10
        VCMPE.F32       S0, S6
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S10, S8 }
      __asm { VNEG.F32        S0, S10 }
      if ( _NF ^ _VF )
        __asm { VMOVLT.F32      S0, S10 }
        VADD.F32        S0, S0, S4
        VSTR            S0, [R0,#0xC]
  return result;
}


int __fastcall ScrollbarDynamics::TargetPosDeltaSim::accumulateDeltaPos(ScrollbarDynamics::TargetPosDeltaSim *this, float _R1, float _R2)
{
  int result; // r0@6

  __asm
  {
    VLDR            S0, =0.05
    VMOV            S4, R2
    VMOV            S2, R1
    VCMPE.F32       S4, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    __asm
    {
      VLDR            S6, [R0,#4]
      VLDR            S8, =0.05
      VADD.F32        S0, S6, S4
      VCMPE.F32       S0, S8
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm
      {
        VLDR            S4, [R0]
        VADD.F32        S2, S4, S2
        VSTR            S2, [R0]
        VSTR            S0, [R0,#4]
        VLDR            S4, [R0,#8]
        VLDR            S2, [R0,#0xC]
      }
    else
      __asm { VSUB.F32        S6, S8, S6 }
      _R1 = *((_DWORD *)this + 3);
        VMOV.F32        S0, #20.0
        VMOV.F32        S8, #1.0
        VMUL.F32        S0, S6, S0
        VMUL.F32        S10, S0, S2
        VSUB.F32        S0, S8, S0
        VLDR            S8, [R0]
      *((_DWORD *)this + 2) = _R1;
        VADD.F32        S8, S8, S10
        VMUL.F32        S2, S0, S2
        VSUB.F32        S0, S4, S6
        VMOV            S4, R1
        VSTR            S8, [R0,#0xC]
        VMOV.F32        S2, S8
  else
    _R1 = *((_DWORD *)this + 3);
      VSTR            S2, [R0,#0xC]
      VMOV            S4, R1
    *((_DWORD *)this + 1) = 1028443341;
    *((_DWORD *)this + 2) = _R1;
    VMOV.F32        S6, #20.0
    VMOV.F32        S8, #1.0
    VMUL.F32        S0, S0, S6
    VSUB.F32        S8, S8, S0
    VMUL.F32        S0, S2, S0
    VMUL.F32        S2, S4, S8
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  return result;
}


int __fastcall ScrollbarDynamics::setPos(int result, float a2)
{
  *(float *)result = a2;
  *(float *)(result + 28) = a2;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 32) = 0;
  return result;
}


int __fastcall ScrollbarDynamics::getCurrentPos(ScrollbarDynamics *this)
{
  return *(_DWORD *)this;
}


int __fastcall ScrollbarDynamics::_integrate(int result, float _R1)
{
  __asm
  {
    VLDR            S4, [R0,#0xC]
    VMOV            S6, R1
    VLDR            S2, [R0,#8]
    VMUL.F32        S4, S4, S6
    VLDR            S8, =2000.0
    VLDR            S0, [R0]
    VADD.F32        S2, S2, S4
    VLDR            S4, =-2000.0
    VCMPE.F32       S2, S4
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S2, S8
    VMUL.F32        S6, S2, S6
    VADD.F32        S0, S0, S6
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S4, S2 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S4, S8 }
    VSTR            S0, [R0]
    VSTR            S4, [R0,#8]
  return result;
}


int __fastcall ScrollbarDynamics::_applyTargetDeltaAndFlicks(int result, float _R1)
{
  signed int v5; // r3@7
  signed int v6; // r2@7

  __asm
  {
    VLDR            S4, =0.05
    VMOV            S0, R1
    VLDR            S2, [R0,#0x24]
    VCMPE.F32       S0, S4
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    __asm
    {
      VLDR            S6, [R0,#0x30]
      VLDR            S8, =0.05
      VADD.F32        S4, S6, S0
      VCMPE.F32       S4, S8
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm
      {
        VLDR            S6, [R0,#0x2C]
        VADD.F32        S2, S6, S2
        VSTR            S2, [R0,#0x2C]
        VSTR            S4, [R0,#0x30]
        VLDR            S6, [R0,#0x34]
        VLDR            S2, [R0,#0x38]
      }
    else
      __asm { VSUB.F32        S6, S8, S6 }
      _R1 = *(_DWORD *)(result + 56);
        VMOV.F32        S4, #20.0
        VMOV.F32        S8, #1.0
        VMUL.F32        S4, S6, S4
        VMUL.F32        S10, S4, S2
        VSUB.F32        S4, S8, S4
        VLDR            S8, [R0,#0x2C]
      *(_DWORD *)(result + 52) = _R1;
        VADD.F32        S8, S8, S10
        VMUL.F32        S2, S4, S2
        VSUB.F32        S4, S0, S6
        VMOV            S6, R1
        VSTR            S8, [R0,#0x38]
        VMOV.F32        S2, S8
  else
    _R1 = *(_DWORD *)(result + 56);
      VSTR            S2, [R0,#0x38]
      VMOV            S6, R1
    *(_DWORD *)(result + 48) = 1028443341;
    *(_DWORD *)(result + 52) = _R1;
    VMOV.F32        S8, #20.0
    VMOV.F32        S10, #1.0
    VMUL.F32        S4, S4, S8
    VSUB.F32        S10, S10, S4
    VMUL.F32        S4, S4, S2
    VMUL.F32        S6, S10, S6
    VADD.F32        S4, S6, S4
    VLDR            S6, [R0,#0x1C]
    VMUL.F32        S0, S4, S0
    VADD.F32        S0, S0, S6
    VSTR            S0, [R0,#0x1C]
  if ( *(_BYTE *)(result + 60) )
    __asm { VMUL.F32        S0, S2, S8 }
    v5 = 0;
    v6 = 0;
      VCMPE.F32       S0, S4
      VCMPE.F32       S0, #0.0
    if ( _NF ^ _VF )
      v5 = 1;
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v6 = 1;
    __asm { VMRS            APSR_nzcv, FPSCR }
      v6 = v5;
    if ( v6 )
      __asm { VMOVNE.F32      S4, S0 }
      VSTR            S4, [R0,#0x20]
      VSTR            S4, [R0,#8]
    *(_BYTE *)(result + 60) = 0;
    *(_DWORD *)(result + 44) = 0;
    *(_DWORD *)(result + 48) = 0;
    *(_DWORD *)(result + 52) = 0;
    *(_DWORD *)(result + 56) = 0;
    __asm { VSTR            S4, [R0,#0x20] }
  *(_DWORD *)(result + 36) = 0;
  return result;
}


int __fastcall ScrollbarDynamics::_computeForces(int result, float _R1)
{
  __asm { VLDR            S2, =0.0 }
  *(_DWORD *)(result + 12) = 0;
  __asm
  {
    VLDR            S0, [R0]
    VLDR            S4, [R0,#0x10]
    VCMPE.F32       S0, S4
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !(_NF ^ _VF) )
    __asm
    {
      VLDR            S6, [R0,#0x14]
      VCMPE.F32       S0, S6
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm
      {
        VLDR            S6, [R0,#8]
        VMOV            S2, R1
        VLDR            S12, =200.0
        VABS.F32        S8, S6
        VMOV            R1, S6
        VDIV.F32        S10, S8, S2
        VMUL.F32        S2, S2, S12
        VCMPE.F32       S2, S8
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S12, S10 }
      __asm { VNEG.F32        S2, S12 }
      if ( _NF ^ _VF )
        __asm { VMOVLT.F32      S2, S12 }
      __asm { VSTR            S2, [R0,#0xC] }
  if ( _NF ^ _VF )
    goto LABEL_18;
    VLDR            S6, [R0,#0x14]
    VCMPE.F32       S0, S6
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
LABEL_18:
      VCMPE.F32       S0, S4
      VLDR            S6, =300.0
    if ( !(_NF ^ _VF) )
      __asm { VLDRGE          S4, [R0,#0x14] }
      VLDR            S8, [R0,#8]
      VSUB.F32        S4, S4, S0
      VMUL.F32        S4, S4, S6
      VLDR            S6, =-34.641
      VMUL.F32        S6, S8, S6
      VADD.F32        S2, S4, S2
      VADD.F32        S2, S2, S6
      VSTR            S2, [R0,#0xC]
  if ( *(_BYTE *)(result + 40) )
      VLDR            S6, [R0,#0x1C]
      VLDR            S4, [R0,#8]
      VSUB.F32        S0, S6, S0
      VLDR            S8, [R0,#0x20]
      VLDR            S6, =1000.0
      VSUB.F32        S4, S8, S4
      VMUL.F32        S0, S0, S6
      VLDR            S6, =63.246
      VADD.F32        S0, S2, S0
      VADD.F32        S0, S0, S4
      VSTR            S0, [R0,#0xC]
  return result;
}


int __fastcall ScrollbarDynamics::setMinMaxRange(int result, __int64 a2)
{
  *(_QWORD *)(result + 16) = a2;
  return result;
}


int __fastcall ScrollbarDynamics::update(int result, float _R1)
{
  signed int v5; // r3@9
  signed int v6; // r2@9
  int v10; // r1@19
  int v13; // r2@81

  __asm
  {
    VMOV.F32        S2, #0.25
    VLDR            S4, =0.05
    VMOV            S0, R1
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S2 }
    VLDR            S2, [R0,#0x24]
    VCMPE.F32       S0, S4
  if ( _NF ^ _VF )
    __asm
    {
      VLDR            S6, [R0,#0x30]
      VLDR            S8, =0.05
      VADD.F32        S4, S6, S0
      VCMPE.F32       S4, S8
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm
      {
        VLDR            S6, [R0,#0x2C]
        VADD.F32        S2, S6, S2
        VSTR            S2, [R0,#0x2C]
        VSTR            S4, [R0,#0x30]
        VLDR            S6, [R0,#0x34]
        VLDR            S2, [R0,#0x38]
      }
    else
      __asm { VSUB.F32        S6, S8, S6 }
      _R1 = *(_DWORD *)(result + 56);
        VMOV.F32        S4, #20.0
        VMOV.F32        S8, #1.0
        VMUL.F32        S4, S6, S4
        VMUL.F32        S10, S4, S2
        VSUB.F32        S4, S8, S4
        VLDR            S8, [R0,#0x2C]
      *(_DWORD *)(result + 52) = _R1;
        VADD.F32        S8, S8, S10
        VMUL.F32        S2, S4, S2
        VSUB.F32        S4, S0, S6
        VMOV            S6, R1
        VSTR            S8, [R0,#0x38]
        VMOV.F32        S2, S8
  else
    _R1 = *(_DWORD *)(result + 56);
      VSTR            S2, [R0,#0x38]
      VMOV            S6, R1
    *(_DWORD *)(result + 48) = 1028443341;
    *(_DWORD *)(result + 52) = _R1;
    VMOV.F32        S8, #20.0
    VMOV.F32        S10, #1.0
    VMUL.F32        S4, S4, S8
    VSUB.F32        S10, S10, S4
    VMUL.F32        S4, S4, S2
    VMUL.F32        S6, S10, S6
    VADD.F32        S4, S6, S4
    VLDR            S6, [R0,#0x1C]
    VMUL.F32        S14, S4, S8
    VMUL.F32        S4, S14, S0
    VADD.F32        S1, S4, S6
    VSTR            S1, [R0,#0x1C]
  if ( *(_BYTE *)(result + 60) )
    __asm { VMUL.F32        S2, S2, S8 }
    v5 = 0;
    v6 = 0;
      VCMPE.F32       S2, S14
      VCMPE.F32       S2, #0.0
    if ( _NF ^ _VF )
      v5 = 1;
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v6 = 1;
    __asm { VMRS            APSR_nzcv, FPSCR }
      v6 = v5;
    if ( v6 )
      __asm { VMOVNE.F32      S14, S2 }
    __asm { VSTR            S14, [R0,#8] }
    *(_BYTE *)(result + 60) = 0;
    *(_DWORD *)(result + 44) = 0;
    *(_DWORD *)(result + 48) = 0;
    *(_DWORD *)(result + 52) = 0;
    *(_DWORD *)(result + 56) = 0;
    VCMPE.F32       S0, #0.0
    VSTR            S14, [R0,#0x20]
  *(_DWORD *)(result + 36) = 0;
  __asm { VMRS            APSR_nzcv, FPSCR }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v10 = *(_BYTE *)(result + 40);
      VPUSH           {D8-D14}
      VLDR            S4, [R0,#0x10]
      VLDR            S6, [R0,#0x14]
      VLDR            S10, [R0,#0x18]
      VADD.F32        S8, S6, S10
      VLDR            S12, [R0]
      VSUB.F32        S10, S4, S10
      VLDR            S2, [R0,#8]
    if ( *(_BYTE *)(result + 40) )
        VLDR            S5, =0.01
        VLDR            S7, =0.0
        VLDR            S9, =300.0
        VLDR            S11, =-34.641
        VLDR            S13, =1000.0
        VLDR            S15, =63.246
        VLDR            S16, =-2000.0
        VLDR            S18, =2000.0
        VLDR            S20, =-0.01
        VLDR            S22, =200.0
      do
        __asm
        {
          VCMPE.F32       S0, S5
          VMRS            APSR_nzcv, FPSCR
          VMOV.F32        S3, S7
          VMOV.F32        S24, S0
          VCMPE.F32       S12, S4
        }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          __asm { VMOVGT.F32      S24, S5 }
        __asm { VMRS            APSR_nzcv, FPSCR }
        if ( !(_NF ^ _VF) )
          __asm
          {
            VMOV.F32        S3, S7
            VCMPE.F32       S12, S6
            VMRS            APSR_nzcv, FPSCR
          }
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            __asm
            {
              VABS.F32        S3, S2
              VMUL.F32        S28, S24, S22
              VMOV            R2, S2
              VDIV.F32        S26, S3, S24
              VCMPE.F32       S28, S3
              VMRS            APSR_nzcv, FPSCR
              VMOV.F32        S28, S22
            }
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              __asm { VMOVGT.F32      S28, S26 }
            __asm { VNEG.F32        S3, S28 }
            if ( _NF ^ _VF )
              __asm { VMOVLT.F32      S3, S28 }
        if ( _NF ^ _VF )
          goto LABEL_86;
          VCMPE.F32       S12, S6
LABEL_86:
            VCMPE.F32       S12, S4
            VMOV.F32        S26, S6
            VMUL.F32        S28, S2, S11
          if ( _NF ^ _VF )
            __asm { VMOVLT.F32      S26, S4 }
            VSUB.F32        S26, S26, S12
            VMUL.F32        S26, S26, S9
            VADD.F32        S3, S3, S26
            VADD.F32        S3, S3, S28
          VSUB.F32        S26, S1, S12
          VSUB.F32        S28, S14, S2
          VMUL.F32        S26, S26, S13
          VMUL.F32        S28, S28, S15
          VADD.F32        S3, S26, S3
          VADD.F32        S3, S3, S28
          VMUL.F32        S26, S3, S24
          VADD.F32        S26, S2, S26
          VMOV.F32        S2, S16
          VCMPE.F32       S26, S16
          VCMPE.F32       S26, S18
          VMUL.F32        S24, S26, S24
          VADD.F32        S12, S24, S12
          __asm { VMOVGT.F32      S2, S26 }
          VCMPE.F32       S12, S10
          __asm { VMOVGT.F32      S2, S18 }
            VCMPE.F32       S2, #0.0
            VMOV.F32        S12, S10
            __asm { VMOVLT.F32      S2, S7 }
        else
            VCMPE.F32       S12, S8
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              VCMPE.F32       S2, #0.0
              VMOV.F32        S12, S8
              __asm { VMOVGT.F32      S2, S7 }
          VADD.F32        S0, S0, S20
          VCMPE.F32       S0, #0.0
      while ( !((unsigned __int8)(_NF ^ _VF) | _ZF) );
        VLDR            S14, =0.01
        VLDR            S1, =0.0
        VLDR            S5, =300.0
        VLDR            S7, =-34.641
        VLDR            S9, =-2000.0
        VLDR            S11, =2000.0
        VLDR            S13, =-0.01
        VLDR            S15, =200.0
          VCMPE.F32       S0, S14
          VMOV.F32        S3, S1
          VMOV.F32        S16, S0
          __asm { VMOVGT.F32      S16, S14 }
            VMOV.F32        S3, S1
              VMUL.F32        S20, S16, S15
              VDIV.F32        S18, S3, S16
              VCMPE.F32       S20, S3
              VMOV.F32        S20, S15
              __asm { VMOVGT.F32      S20, S18 }
            __asm { VNEG.F32        S3, S20 }
              __asm { VMOVLT.F32      S3, S20 }
          goto LABEL_87;
LABEL_87:
            VMOV.F32        S18, S6
            VMUL.F32        S20, S2, S7
            __asm { VMOVLT.F32      S18, S4 }
            VSUB.F32        S18, S18, S12
            VMUL.F32        S18, S18, S5
            VADD.F32        S3, S3, S18
            VADD.F32        S3, S3, S20
          VMUL.F32        S18, S3, S16
          VADD.F32        S18, S2, S18
          VMOV.F32        S2, S9
          VCMPE.F32       S18, S9
          VCMPE.F32       S18, S11
          VMUL.F32        S16, S18, S16
          VADD.F32        S12, S16, S12
          __asm { VMOVGT.F32      S2, S11 }
            __asm { VMOVLT.F32      S2, S1 }
              __asm { VMOVGT.F32      S2, S1 }
          VADD.F32        S0, S0, S13
      VSTR            S3, [R0,#0xC]
      VSTR            S12, [R0]
      VSTR            S2, [R0,#8]
  v13 = *(_DWORD *)result;
  if ( !v10 )
    *(_DWORD *)(result + 28) = v13;
  *(_DWORD *)(result + 4) = v13;
  return result;
}


int __fastcall ScrollbarDynamics::_applyConstraints(int result)
{
  __asm
  {
    VLDR            S0, [R0,#0x10]
    VLDR            S4, [R0,#0x18]
    VLDR            S2, [R0]
    VSUB.F32        S0, S0, S4
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    __asm
    {
      VLDR            S2, [R0,#8]
      VLDR            S4, =0.0
      VCMPE.F32       S2, #0.0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S2, S4 }
  else
      VLDR            S0, [R0,#0x14]
      VADD.F32        S0, S0, S4
      VCMPE.F32       S2, S0
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      return result;
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S2, S4 }
    VSTR            S2, [R0,#8]
    VSTR            S0, [R0]
  return result;
}


int __fastcall ScrollbarDynamics::TargetPosDeltaSim::reset(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  return result;
}
