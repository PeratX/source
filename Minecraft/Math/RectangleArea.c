

int __fastcall RectangleArea::RectangleArea(int result, int a2, int a3, int a4, int a5)
{
  __asm
  {
    VLDR            S0, [SP,#arg_0]
    VSTR            S0, [R0,#0xC]
  }
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a4;
  *(_DWORD *)(result + 8) = a3;
  return result;
}


int __fastcall RectangleArea::centerY(RectangleArea *this)
{
  int result; // r0@1

  __asm
  {
    VLDR            S0, [R0,#8]
    VMOV.F32        S4, #0.5
    VLDR            S2, [R0,#0xC]
    VSUB.F32        S2, S2, S0
    VMUL.F32        S2, S2, S4
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


int __fastcall RectangleArea::centerX(RectangleArea *this)
{
  int result; // r0@1

  __asm
  {
    VLDR            S0, [R0]
    VMOV.F32        S4, #0.5
    VLDR            S2, [R0,#4]
    VSUB.F32        S2, S2, S0
    VMUL.F32        S2, S2, S4
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


void __fastcall RectangleArea::grow(RectangleArea *this, float _R1, int _R2)
{
  RectangleArea::grow(this, _R1, _R2);
}


void __fastcall RectangleArea::grow(RectangleArea *this, float _R1, int _R2)
{
  __asm
  {
    VLDR            S0, [R1]
    VMOV            S8, R2
    VLDR            S2, [R1,#4]
    VLDR            S4, [R1,#8]
    VSUB.F32        S0, S0, S8
    VLDR            S6, [R1,#0xC]
    VADD.F32        S2, S2, S8
    VSUB.F32        S4, S4, S8
    VADD.F32        S6, S6, S8
    VSTR            S0, [R0]
    VSTR            S2, [R0,#4]
    VSTR            S4, [R0,#8]
    VSTR            S6, [R0,#0xC]
  }
}


void __fastcall RectangleArea::translate(RectangleArea *this, float _R1, float _R2, int _R3)
{
  RectangleArea::translate(this, _R1, _R2, _R3);
}


void __fastcall RectangleArea::grow(int a1, int _R1, int _R2)
{
  RectangleArea::grow(a1, _R1, _R2);
}


void __fastcall RectangleArea::scale(RectangleArea *this, float _R1, int _R2)
{
  RectangleArea::scale(this, _R1, _R2);
}


int __fastcall RectangleArea::unionRects(int result, const RectangleArea *_R1, int _R2)
{
  __asm { VLDR            S1, =1.1921e-7 }
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  __asm
  {
    VLDR            S6, [R2]
    VLDR            S4, [R2,#4]
    VLDR            S2, [R2,#8]
    VLDR            S0, [R2,#0xC]
    VSUB.F32        S8, S4, S6
    VSUB.F32        S10, S0, S2
    VMUL.F32        S8, S10, S8
    VCMPE.F32       S8, S1
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    *(_DWORD *)result = *(_DWORD *)_R1;
    *(_DWORD *)(result + 4) = *((_DWORD *)_R1 + 1);
    *(_DWORD *)(result + 8) = *((_DWORD *)_R1 + 2);
    *(_DWORD *)(result + 12) = *((_DWORD *)_R1 + 3);
  else
    __asm
    {
      VLDR            S14, [R1]
      VLDR            S10, [R1,#4]
      VLDR            S12, [R1,#8]
      VLDR            S8, [R1,#0xC]
      VSUB.F32        S3, S10, S14
      VSUB.F32        S5, S8, S12
      VMUL.F32        S3, S5, S3
      VCMPE.F32       S3, S1
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !(_NF ^ _VF) )
      __asm
      {
        VCMPE.F32       S14, S6
        VMRS            APSR_nzcv, FPSCR
        VCMPE.F32       S12, S2
      }
      if ( _NF ^ _VF )
        __asm { VMOVLT.F32      S6, S14 }
        VCMPE.F32       S10, S4
        __asm { VMOVLT.F32      S2, S12 }
        VCMPE.F32       S8, S0
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S4, S10 }
      __asm { VMRS            APSR_nzcv, FPSCR }
        __asm { VMOVGT.F32      S0, S8 }
      VSTR            S6, [R0]
      VSTR            S4, [R0,#4]
      VSTR            S2, [R0,#8]
      VSTR            S0, [R0,#0xC]
  return result;
}


int __fastcall RectangleArea::set(int result, float a2, float a3, float a4, float a5)
{
  __asm
  {
    VLDR            S0, [SP,#arg_0]
    VSTR            S0, [R0,#0xC]
  }
  *(float *)result = a2;
  *(float *)(result + 4) = a4;
  *(float *)(result + 8) = a3;
  return result;
}


int __fastcall RectangleArea::RectangleArea(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  return result;
}


void __fastcall RectangleArea::translate(RectangleArea *this, float _R1, float _R2, int _R3)
{
  __asm
  {
    VLDR            S0, [R1]
    VMOV            S8, R2
    VLDR            S2, [R1,#4]
    VMOV            S10, R3
    VLDR            S4, [R1,#8]
    VADD.F32        S0, S0, S8
    VLDR            S6, [R1,#0xC]
    VADD.F32        S2, S2, S8
    VADD.F32        S4, S4, S10
    VADD.F32        S6, S6, S10
    VSTR            S0, [R0]
    VSTR            S2, [R0,#4]
    VSTR            S4, [R0,#8]
    VSTR            S6, [R0,#0xC]
  }
}


int __fastcall RectangleArea::set(int result, int a2, int a3)
{
  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 4) = *(_DWORD *)a3;
  *(_DWORD *)(result + 12) = *(_DWORD *)(a3 + 4);
  return result;
}


signed int __fastcall RectangleArea::isInside(RectangleArea *this, float _R1, float _R2)
{
  signed int result; // r0@5

  _R3 = this;
  __asm
  {
    VMOV            S0, R1
    VLDR            S2, [R3]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    goto LABEL_12;
    VLDR            S2, [R3,#4]
  if ( _NF ^ _VF )
LABEL_12:
    result = 0;
  else
    __asm
    {
      VMOV            S0, R2
      VLDR            S2, [R3,#8]
    }
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm
      {
        VLDR            S2, [R3,#0xC]
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !(_NF ^ _VF) )
        result = 1;
  return result;
}


void __fastcall RectangleArea::resizeAroundCenter(RectangleArea *this, float _R1, float _R2, int _R3)
{
  __asm
  {
    VLDR            S0, [R1]
    VMOV.F32        S8, #0.5
    VLDR            S2, [R1,#4]
    VMOV            S10, R2
    VLDR            S4, [R1,#8]
    VMOV            S12, R3
    VLDR            S6, [R1,#0xC]
    VSUB.F32        S2, S2, S0
    VSUB.F32        S6, S6, S4
    VMUL.F32        S10, S10, S8
    VMUL.F32        S2, S2, S8
    VMUL.F32        S6, S6, S8
    VADD.F32        S0, S2, S0
    VMUL.F32        S2, S12, S8
    VADD.F32        S4, S6, S4
    VSUB.F32        S6, S0, S10
    VADD.F32        S0, S0, S10
    VSUB.F32        S8, S4, S2
    VADD.F32        S2, S4, S2
    VSTR            S6, [R0]
    VSTR            S0, [R0,#4]
    VSTR            S8, [R0,#8]
    VSTR            S2, [R0,#0xC]
  }
}


signed int __fastcall RectangleArea::isEmpty(RectangleArea *this)
{
  signed int result; // r0@1

  __asm
  {
    VLDR            S0, [R0]
    VLDR            S2, [R0,#4]
    VLDR            S4, [R0,#8]
    VLDR            S6, [R0,#0xC]
    VSUB.F32        S0, S2, S0
  }
  result = 0;
    VSUB.F32        S2, S6, S4
    VMUL.F32        S0, S2, S0
    VLDR            S2, =1.1921e-7
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    result = 1;
  return result;
}


void __fastcall RectangleArea::grow(int a1, int _R1, int _R2)
{
  __asm
  {
    VLDR            S0, [R1]
    VLDR            S8, [R2]
    VLDR            S2, [R1,#4]
    VLDR            S4, [R1,#8]
    VSUB.F32        S0, S0, S8
    VLDR            S10, [R2,#4]
    VADD.F32        S2, S2, S8
    VLDR            S6, [R1,#0xC]
    VSUB.F32        S4, S4, S10
    VADD.F32        S6, S6, S10
    VSTR            S0, [R0]
    VSTR            S2, [R0,#4]
    VSTR            S4, [R0,#8]
    VSTR            S6, [R0,#0xC]
  }
}


int __fastcall RectangleArea::clampToNorm(int result, int _R1)
{
  __asm { VMOV.F32        S4, #1.0 }
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  __asm
  {
    VLDR            S2, [R1]
    VLDR            S0, =0.0
    VCMPE.F32       S2, #0.0
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S6, S0
    VCMPE.F32       S2, S4
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S6, S2 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S6, S4 }
    VSTR            S6, [R0]
    VLDR            S2, [R1,#8]
    VSTR            S6, [R0,#8]
    VLDR            S2, [R1,#4]
    VSTR            S6, [R0,#4]
    VLDR            S2, [R1,#0xC]
    __asm { VMOVGT.F32      S0, S2 }
    __asm { VMOVGT.F32      S0, S4 }
  __asm { VSTR            S0, [R0,#0xC] }
  return result;
}


void __fastcall RectangleArea::scale(RectangleArea *this, float _R1, int _R2)
{
  __asm
  {
    VLDR            S0, [R1]
    VMOV.F32        S8, #0.5
    VLDR            S2, [R1,#4]
    VMOV            S10, R2
    VLDR            S4, [R1,#8]
    VLDR            S6, [R1,#0xC]
    VSUB.F32        S2, S2, S0
    VSUB.F32        S6, S6, S4
    VMUL.F32        S10, S10, S8
    VMUL.F32        S12, S2, S8
    VMUL.F32        S8, S6, S8
    VMUL.F32        S2, S10, S2
    VMUL.F32        S6, S10, S6
    VADD.F32        S0, S12, S0
    VADD.F32        S4, S8, S4
    VSUB.F32        S8, S0, S2
    VADD.F32        S0, S0, S2
    VSUB.F32        S2, S4, S6
    VADD.F32        S4, S4, S6
    VSTR            S8, [R0]
    VSTR            S0, [R0,#4]
    VSTR            S2, [R0,#8]
    VSTR            S4, [R0,#0xC]
  }
}


void __fastcall RectangleArea::resizeAroundCenter(RectangleArea *this, float _R1, float _R2, int _R3)
{
  RectangleArea::resizeAroundCenter(this, _R1, _R2, _R3);
}
