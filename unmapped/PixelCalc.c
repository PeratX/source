

int __fastcall PixelCalc::millimetersToPixels(PixelCalc *this, float _R1)
{
  int result; // r0@1

  __asm
  {
    VMOV            S0, R1
    VLDR            S2, [R0]
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


int __fastcall PixelCalc::setPixelsPerMillimeter(int result, float _R1)
{
  __asm { VMOV.F32        S0, #1.0 }
  *(float *)result = _R1;
  __asm
  {
    VMOV            S2, R1
    VDIV.F32        S0, S0, S2
    VSTR            S0, [R0,#4]
  }
  return result;
}


int __fastcall PixelCalc::pixelsToMillimeters(PixelCalc *this, float _R1)
{
  int result; // r0@1

  __asm
  {
    VMOV            S0, R1
    VLDR            S2, [R0,#4]
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


_DWORD *__fastcall PixelCalc::PixelCalc(_DWORD *result, int _R1)
{
  __asm { VMOV.F32        S0, #1.0 }
  *result = _R1;
  __asm
  {
    VMOV            S2, R1
    VDIV.F32        S0, S0, S2
    VSTR            S0, [R0,#4]
  }
  return result;
}
