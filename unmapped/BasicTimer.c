

signed int __fastcall BasicTimer::operator<(int _R0, int _R1)
{
  signed int result; // r0@1

  __asm
  {
    VLDMIA          R1, {D0-D1}
    VADD.F64        D0, D0, D1
    VLDMIA          R0, {D1-D2}
  }
  result = 0;
    VADD.F64        D1, D1, D2
    VCMPE.F64       D1, D0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    result = 1;
  return result;
}


int __fastcall BasicTimer::BasicTimer(double a1, int _R2, int a3, __int64 a4, int a5)
{
  void (__fastcall *v11)(int, int, signed int); // r3@1

  _R4 = LODWORD(a1);
  __asm
  {
    VLDR            D0, [SP,#0x10+arg_0]
    VMOV            D1, R2, R3
  }
  *(_DWORD *)(LODWORD(a1) + 24) = 0;
  __asm { VSTMIA          R4, {D0-D1} }
  v11 = *(void (__fastcall **)(int, int, signed int))(a5 + 8);
  if ( v11 )
    v11(_R4 + 16, a5, 2);
    *(_DWORD *)(_R4 + 28) = *(_DWORD *)(a5 + 12);
    *(_DWORD *)(_R4 + 24) = *(_DWORD *)(a5 + 8);
  return _R4;
}


int __fastcall BasicTimer::resetTime(BasicTimer *this, int a2, double _R2)
{
  int result; // r0@2

  if ( !*((_DWORD *)this + 6) )
    sub_21E5F48();
  __asm { VMOV            D8, R2, R3 }
  result = (*((int (__fastcall **)(_DWORD))this + 7))((char *)this + 16);
  __asm
  {
    VMOV            D0, R0, R1
    VSTR            D8, [R4]
    VSTR            D0, [R4,#8]
  }
  return result;
}


int __fastcall BasicTimer::resetTime(BasicTimer *this)
{
  int result; // r0@2

  _R4 = this;
  if ( !*((_DWORD *)this + 6) )
    sub_21E5F48();
  __asm { VLDR            D8, [R4] }
  result = (*((int (__fastcall **)(_DWORD))this + 7))((char *)this + 16);
  __asm
  {
    VMOV            D0, R0, R1
    VSTR            D8, [R4]
    VSTR            D0, [R4,#8]
  }
  return result;
}


int __fastcall BasicTimer::getTimeOverAt(BasicTimer *this, int _R1)
{
  int result; // r0@1

  __asm
  {
    VLDMIA          R0, {D0-D1}
    VADD.F64        D0, D0, D1
    VMOV            R0, R1, D0
  }
  return result;
}


void __fastcall BasicTimer::resetTime(BasicTimer *this, int a2, double _R2, double a4)
{
  __asm
  {
    VLDR            D1, [SP,#arg_0]
    VMOV            D0, R2, R3
    VSTR            D1, [R0]
    VSTR            D0, [R0,#8]
  }
}


signed int __fastcall BasicTimer::isFinished(BasicTimer *this)
{
  signed int result; // r0@2

  _R4 = this;
  if ( !*((_DWORD *)this + 6) )
    sub_21E5F48();
  _R0 = (*((int (__fastcall **)(_DWORD))this + 7))((char *)this + 16);
  __asm
  {
    VLDMIA          R4, {D0-D1}
    VADD.F64        D0, D0, D1
    VMOV            D1, R0, R1
  }
  result = 0;
    VCMPE.F64       D1, D0
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) )
    result = 1;
  return result;
}


int __fastcall BasicTimer::BasicTimer(int a1, int a2, int _R2, int a4, int a5)
{
  int v9; // r5@1
  void (__fastcall *v10)(int, int, signed int); // r3@1
  int (__fastcall *v11)(int); // r2@2
  int v12; // r0@2
  int result; // r0@3

  __asm { VMOV            D0, R2, R3 }
  v9 = a1;
  __asm { VSTR            D0, [R5] }
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  v10 = *(void (__fastcall **)(int, int, signed int))(a5 + 8);
  if ( !v10
    || (v10(a1 + 16, a5, 2),
        v11 = *(int (__fastcall **)(int))(a5 + 12),
        *(_DWORD *)(v9 + 28) = v11,
        v12 = *(_DWORD *)(a5 + 8),
        (*(_DWORD *)(v9 + 24) = v12) == 0) )
  {
    sub_21E5F48();
  }
  _R0 = v11(v9 + 16);
  __asm { VMOV            D0, R0, R1 }
  result = v9;
  __asm { VSTR            D0, [R5,#8] }
  return result;
}


void __fastcall BasicTimer::resetTime(BasicTimer *this, int a2, double _R2, double a4)
{
  BasicTimer::resetTime(this, a2, _R2, a4);
}


int __fastcall BasicTimer::getTimeDelay(BasicTimer *this, int _R1)
{
  int result; // r0@1

  __asm
  {
    VLDR            D0, [R0]
    VMOV            R0, R1, D0
  }
  return result;
}


signed int __fastcall BasicTimer::repeatIfFinished(BasicTimer *this, int a2, double a3)
{
  signed int result; // r0@3

  _R4 = this;
  _R6 = LODWORD(a3);
  if ( !*((_DWORD *)this + 6) )
    sub_21E5F48();
  _R0 = (*((int (__fastcall **)(_DWORD))this + 7))((char *)this + 16);
  __asm
  {
    VLDMIA          R4, {D0-D1}
    VADD.F64        D0, D0, D1
    VMOV            D1, R0, R1
    VCMPE.F64       D1, D0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    result = 0;
  else
    __asm { VMOV            D1, R6, R5 }
    result = 1;
    __asm
    {
      VSTR            D1, [R4]
      VSTR            D0, [R4,#8]
    }
  return result;
}


signed int __fastcall BasicTimer::repeatIfFinished(BasicTimer *this)
{
  signed int result; // r0@4
  int v9; // [sp+4h] [bp-Ch]@0

  _R4 = this;
  if ( !*((_DWORD *)this + 6) )
    sub_21E5F48();
  __asm { VLDR            D8, [R4] }
  _R0 = (*((int (__fastcall **)(_DWORD))this + 7))((char *)this + 16);
  __asm
  {
    VLDMIA          R4, {D0-D1}
    VADD.F64        D0, D0, D1
    VMOV            D1, R0, R1
    VCMPE.F64       D1, D0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    JUMPOUT(__CS__, v9);
  __asm { VSTR            D8, [R4] }
  result = 1;
  __asm { VSTR            D0, [R4,#8] }
  return result;
}
