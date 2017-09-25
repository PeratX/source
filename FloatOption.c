

int __fastcall FloatOption::FloatOption(int a1, int a2, float a3, float a4, __int64 a5, int a6, int a7, int a8)
{
  int result; // r0@1

  result = Option::Option(a1, a2, LODWORD(a3), SLODWORD(a4), (int *)a5, (int *)HIDWORD(a5), 2);
  __asm
  {
    VLDR            S0, [SP,#0x18+arg_10]
    VLDR            S2, [SP,#0x18+arg_8]
    VLDR            S4, [SP,#0x18+arg_C]
  }
  *(_DWORD *)result = &off_26D99FC;
  *(_DWORD *)(result + 84) = 981668463;
    VSTR            S4, [R0,#0x44]
    VSTR            S0, [R0,#0x48]
    VSTR            S2, [R0,#0x4C]
    VSTR            S2, [R0,#0x50]
  return result;
}


void __fastcall FloatOption::~FloatOption(FloatOption *this)
{
  FloatOption::~FloatOption(this);
}


_DWORD *__fastcall FloatOption::save(int a1, int a2)
{
  return j_j_j__ZN6Option5_saveIfEEvRSt6vectorIN12PropertyFile8PropertyESaIS3_EET_(
           (Option *)a1,
           a2,
           *(_DWORD *)(a1 + 76));
}


signed int __fastcall FloatOption::load(int a1, const void **a2)
{
  signed int result; // r0@1

  _R4 = (Option *)a1;
  result = Option::read(a2, (signed int *)(a1 + 76));
  if ( result == 1 )
  {
    __asm
    {
      VLDR            S0, [R4,#0x44]
      VLDR            S4, [R4,#0x4C]
      VLDR            S2, [R4,#0x48]
      VCMPE.F32       S4, S0
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S4, S2
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S0, S4 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVGT.F32      S0, S2 }
    __asm { VSTR            S0, [R4,#0x4C] }
    result = j_j_j__ZN6Option24notifyOptionValueChangedEv(_R4);
  }
  return result;
}


int __fastcall FloatOption::reset(FloatOption *this)
{
  *((_DWORD *)this + 19) = *((_DWORD *)this + 20);
  return j_j_j__ZN6Option24notifyOptionValueChangedEv(this);
}


int __fastcall FloatOption::set(int result, float _R1)
{
  __asm
  {
    VLDR            S2, [R0,#0x4C]
    VMOV            S0, R1
    VLDR            S4, [R0,#0x54]
    VSUB.F32        S2, S2, S0
    VABS.F32        S2, S2
    VCMPE.F32       S2, S4
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm
    {
      VLDR            S2, [R0,#0x44]
      VLDR            S4, [R0,#0x48]
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S4, S0
    }
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S2, S0 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVLT.F32      S2, S4 }
    __asm { VSTR            S2, [R0,#0x4C] }
    result = j_j_j__ZN6Option24notifyOptionValueChangedEv((Option *)result);
  return result;
}


void __fastcall FloatOption::~FloatOption(FloatOption *this)
{
  Option *v1; // r0@1

  v1 = Option::~Option(this);
  j_j_j__ZdlPv_4((void *)v1);
}
