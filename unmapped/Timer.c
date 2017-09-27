

int __fastcall Timer::advanceTimeQuickly(Timer *this)
{
  int result; // r0@2

  __asm { VMOV.F32        S0, #10.0 }
  _R4 = this;
  __asm
  {
    VLDR            S2, [R4]
    VDIV.F32        S0, S0, S2
    VSTR            S0, [R4,#0x1C]
    VLDR            S4, [R4,#0xC]
    VLDR            S6, [R4,#0x10]
    VMUL.F32        S0, S4, S0
    VMUL.F32        S0, S0, S2
    VADD.F32        S0, S6, S0
    VCVTR.S32.F32   S2, S0
    VCVT.F32.S32    S2, S2
    VCVTR.S32.F32   S4, S0
    VSUB.F32        S0, S0, S2
    VSTR            S0, [R4,#0x10]
    VSTR            S4, [R4,#4]
    VSTR            S0, [R4,#8]
  }
  if ( !*((_DWORD *)this + 14) )
    sub_21E5F48();
  result = (*((int (__fastcall **)(_DWORD))this + 15))((char *)this + 48);
  *((_DWORD *)_R4 + 8) = result;
  *((_DWORD *)_R4 + 9) = result;
  return result;
}


void __fastcall Timer::setTimeScale(Timer *this, float _R1)
{
  Timer::setTimeScale(this, _R1);
}


void __fastcall Timer::setTimeScale(Timer *this, float _R1)
{
  __asm
  {
    VMOV            S2, R1
    VLDR            S0, =0.0
    VMOV.F32        S4, #10.0
    VCMPE.F32       S2, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S2, S4
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S2 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S0, S4 }
  __asm { VSTR            S0, [R0,#0xC] }
}


signed int __fastcall Timer::stepping(Timer *this)
{
  signed int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 11);
  result = 0;
  if ( v1 > -1 )
    result = 1;
  return result;
}


int __fastcall Timer::stepTick(int result, int a2)
{
  int v2; // r4@1

  v2 = result;
  *(_DWORD *)(result + 44) = a2;
  if ( a2 <= -1 )
  {
    if ( !*(_DWORD *)(result + 56) )
      sub_21E5F48();
    _R0 = (*(int (__fastcall **)(int))(result + 60))(result + 48);
    __asm
    {
      VMOV            S0, R0
      VLDR            S2, =0.001
      VCVT.F32.S32    S0, S0
    }
    *(_DWORD *)(v2 + 32) = _R0;
    *(_DWORD *)(v2 + 36) = _R0;
      VMUL.F32        S0, S0, S2
      VSTR            S0, [R4,#0x18]
    *(_DWORD *)(v2 + 28) = 0;
    *(_DWORD *)(v2 + 16) = 0;
    *(_DWORD *)(v2 + 20) = 0;
    result = 1065353216;
    *(_DWORD *)(v2 + 12) = 1065353216;
  }
  return result;
}


int __fastcall Timer::resetTimePassed(Timer *this)
{
  Timer *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( !*((_DWORD *)this + 14) )
    sub_21E5F48();
  _R0 = (*((int (__fastcall **)(_DWORD))this + 15))((char *)this + 48);
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.001
    VCVT.F32.S32    S0, S0
  }
  *((_DWORD *)v1 + 8) = _R0;
  *((_DWORD *)v1 + 9) = _R0;
  result = 0;
    VMUL.F32        S0, S0, S2
    VSTR            S0, [R4,#0x18]
  *((_DWORD *)v1 + 7) = 0;
  *((_DWORD *)v1 + 4) = 0;
  *((_DWORD *)v1 + 5) = 0;
  return result;
}


int __fastcall Timer::Timer(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  __int64 v5; // r1@1
  void (__fastcall *v6)(int, int, signed int); // r3@1
  int (__fastcall *v7)(int); // r1@2
  int v8; // r0@2
  int result; // r0@3

  v3 = a1;
  v4 = a3;
  *(_DWORD *)a1 = a2;
  LODWORD(v5) = 1065353216;
  HIDWORD(v5) = -1;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 1065353216;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 40) = v5;
  v6 = *(void (__fastcall **)(int, int, signed int))(v4 + 8);
  if ( !v6
    || (v6(a1 + 48, v4, 2),
        v7 = *(int (__fastcall **)(int))(v4 + 12),
        *(_DWORD *)(v3 + 60) = v7,
        v8 = *(_DWORD *)(v4 + 8),
        (*(_DWORD *)(v3 + 56) = v8) == 0) )
  {
    sub_21E5F48();
  }
  _R0 = v7(v3 + 48);
  __asm
    VMOV            S0, R0
    VLDR            S2, =0.001
    VCVT.F32.S32    S0, S0
  *(_DWORD *)(v3 + 32) = _R0;
  *(_DWORD *)(v3 + 36) = _R0;
  result = v3;
    VMUL.F32        S0, S0, S2
    VSTR            S0, [R4,#0x18]
  return result;
}


int __fastcall Timer::advanceTime(Timer *this, float a2)
{
  int v4; // r0@1
  int result; // r0@3

  _R4 = this;
  _R5 = a2;
  v4 = *((_DWORD *)this + 11);
  if ( v4 < 0 )
  {
    if ( !*((_DWORD *)_R4 + 14) )
      sub_21E5F48();
    _R0 = (*((int (__fastcall **)(_DWORD))_R4 + 15))((char *)_R4 + 48);
    _R1 = _R0 - *((_DWORD *)_R4 + 8);
    if ( _R1 > 1000 )
    {
      __asm { VMOV.F32        S2, #1.0 }
      _R2 = _R0 - *((_DWORD *)_R4 + 9);
      __asm
      {
        VMOV            S0, R2
        VCVT.F32.S32    S0, S0
      }
      if ( _ZF )
        _R1 = 1;
        VMOV            S4, R1
        VCVT.F32.S32    S4, S4
        __asm { VMOVEQ.F32      S0, S2 }
        VLDR            S2, [R4,#0x28]
        VDIV.F32        S0, S4, S0
        VSUB.F32        S0, S0, S2
        VLDR            S4, =0.2
        VMUL.F32        S0, S0, S4
        VADD.F32        S0, S0, S2
        VSTR            S0, [R4,#0x28]
      *((_DWORD *)_R4 + 8) = _R0;
      *((_DWORD *)_R4 + 9) = _R0;
    }
    __asm { VMOV            S0, R0 }
    if ( _R1 <= -1 )
    __asm
      VLDR            S4, =0.001
      VCVT.F32.S32    S0, S0
      VLDR            S6, [R4,#0x28]
      VMOV            S2, R5
      VCMPE.F32       S2, #0.0
      VMRS            APSR_nzcv, FPSCR
      VMUL.F32        S4, S0, S4
      VLDR            S0, [R4,#0x18]
      VSUB.F32        S0, S4, S0
      VSTR            S4, [R4,#0x18]
      VMUL.F32        S0, S0, S6
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        VSUB.F32        S4, S2, S0
        VLDR            S6, [R4,#0x14]
        VMOV.F32        S8, #4.0
        VLDR            S10, =0.0
        VSUB.F32        S0, S0, S6
        VADD.F32        S4, S6, S4
        VMUL.F32        S2, S2, S8
        VCMPE.F32       S4, #0.0
        VMRS            APSR_nzcv, FPSCR
        VCMPE.F32       S4, S2
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S10, S4 }
      __asm { VMRS            APSR_nzcv, FPSCR }
        __asm { VMOVGT.F32      S10, S2 }
        VADD.F32        S0, S0, S10
        VSTR            S10, [R4,#0x14]
      VCMPE.F32       S0, #0.0
      VLDR            S2, =0.0
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S0, S2 }
      VLDR            S2, =0.1
      VCMPE.F32       S0, S2
      __asm { VMOVGT.F32      S0, S2 }
      VSTR            S0, [R4,#0x1C]
      VLDR            S2, [R4]
      VLDR            S4, [R4,#0xC]
      VLDR            S6, [R4,#0x10]
      VMUL.F32        S2, S2, S4
      VMUL.F32        S0, S2, S0
      VADD.F32        S0, S0, S6
      VCVTR.S32.F32   S2, S0
      VMOV            R0, S2
      VCVT.F32.S32    S2, S2
      VCVTR.S32.F32   S4, S0
      VSUB.F32        S0, S0, S2
      VSTR            S4, [R4,#4]
      VSTR            S0, [R4,#0x10]
    if ( result >= 11 )
      result = 10;
      *((_DWORD *)_R4 + 1) = 10;
    __asm { VSTR            S0, [R4,#8] }
  }
  else if ( v4 )
    *((_DWORD *)_R4 + 1) = 1;
    result = v4 - 1;
    *((_DWORD *)_R4 + 11) = result;
  else
    result = 0;
    *((_DWORD *)_R4 + 1) = 0;
    *((_DWORD *)_R4 + 2) = 0;
  return result;
}


int __fastcall Timer::skipTime(Timer *this)
{
  int result; // r0@10

  _R4 = this;
  if ( !*((_DWORD *)this + 14) )
    sub_21E5F48();
  _R0 = (*((int (__fastcall **)(_DWORD))this + 15))((char *)this + 48);
  _R1 = _R0 - *((_DWORD *)_R4 + 8);
  if ( _R1 > 1000 )
  {
    __asm { VMOV.F32        S2, #1.0 }
    _R2 = _R0 - *((_DWORD *)_R4 + 9);
    __asm
    {
      VMOV            S0, R2
      VCVT.F32.S32    S0, S0
    }
    if ( _ZF )
      _R1 = 1;
      VMOV            S4, R1
      VCVT.F32.S32    S4, S4
      __asm { VMOVEQ.F32      S0, S2 }
      VLDR            S2, [R4,#0x28]
      VDIV.F32        S0, S4, S0
      VSUB.F32        S0, S0, S2
      VLDR            S4, =0.2
      VMUL.F32        S0, S0, S4
      VADD.F32        S0, S0, S2
      VSTR            S0, [R4,#0x28]
    *((_DWORD *)_R4 + 8) = _R0;
    *((_DWORD *)_R4 + 9) = _R0;
  }
  __asm { VMOV            S0, R0 }
  if ( _R1 <= -1 )
  __asm
    VLDR            S2, =0.001
    VCVT.F32.S32    S0, S0
    VLDR            S4, [R4,#0x28]
    VMOV.F32        S6, #1.0
  result = 0;
    VMUL.F32        S0, S0, S2
    VLDR            S2, [R4,#0x18]
    VSUB.F32        S2, S0, S2
    VMUL.F32        S2, S2, S4
    VLDR            S4, =0.0
    VCMPE.F32       S2, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S2, S4 }
    VCMPE.F32       S2, S6
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S2, S6 }
    VSTR            S0, [R4,#0x18]
    VSTR            S2, [R4,#0x1C]
    VLDR            S0, [R4]
    VLDR            S4, [R4,#0xC]
    VLDR            S6, [R4,#0x10]
    VMUL.F32        S0, S0, S4
    VADD.F32        S0, S0, S6
    VSTR            S0, [R4,#0x10]
  *((_DWORD *)_R4 + 1) = 0;
  return result;
}
