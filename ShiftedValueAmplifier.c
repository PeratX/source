

int __fastcall ShiftedValueAmplifier::ShiftedValueAmplifier(int result, int a2, int a3)
{
  *(_DWORD *)result = &off_271A35C;
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 8) = a3;
  return result;
}


int __fastcall ShiftedValueAmplifier::getAmount(ShiftedValueAmplifier *this, int a2, float a3)
{
  unsigned int v4; // r0@1
  int v6; // r2@3
  int result; // r0@5

  _R5 = this;
  v4 = *((_DWORD *)this + 1);
  if ( a2 > 32 )
    a2 = 32;
  _R4 = a3;
  v6 = (v4 >> (32 - a2)) | ((signed int)v4 >> 31 << a2);
  if ( a2 - 32 >= 0 )
    v6 = v4 << (a2 - 32);
  _R0 = j___aeabi_l2f_0(v4 << a2, v6);
  __asm
  {
    VMOV            S0, R4
    VMOV            S2, R0
    VMOV.F32        S4, #0.5
    VMUL.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VMOV            R0, S0
  }
  _R0 = j_floorf_0(_R0);
    VLDR            S0, [R5,#8]
  return result;
}
