

int __fastcall CommandPosition::CommandPosition(int result)
{
  int v1; // r1@1

  v1 = dword_2822498;
  *(_QWORD *)result = *(_QWORD *)&Vec3::ZERO;
  *(_DWORD *)(result + 8) = v1;
  *(_DWORD *)(result + 12) = 65793;
  return result;
}


int __fastcall CommandPosition::getPosition(int result, int a2, int _R2, int _R3, int a5)
{
  int v5; // r4@1
  int v6; // r1@1

  v5 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)result = *(_QWORD *)a2;
  *(_DWORD *)(result + 8) = v5;
  v6 = *(_DWORD *)(a2 + 12);
  if ( (_BYTE)v6 )
  {
    __asm
    {
      VMOVNE          S0, R2
      VLDRNE          S2, [R0]
      VADDNE.F32      S0, S2, S0
      VSTRNE          S0, [R0]
    }
  }
  if ( v6 & 0xFF00 )
      VMOVNE          S0, R3
      VLDRNE          S2, [R0,#4]
      VSTRNE          S0, [R0,#4]
  if ( v6 & 0xFF0000 )
    _R1 = a5;
      VMOVNE          S0, R1
      VLDRNE          S2, [R0,#8]
      VSTRNE          S0, [R0,#8]
  return result;
}


float __fastcall CommandPosition::getPosition(CommandPosition *this, const CommandOrigin *a2, int a3)
{
  int v3; // r6@1
  int v6; // r1@1
  int v8; // r1@5
  int v9; // r2@5
  float result; // r0@4
  float v20; // [sp+0h] [bp-78h]@4
  float v23; // [sp+Ch] [bp-6Ch]@4
  float v25; // [sp+14h] [bp-64h]@5

  v3 = a3;
  _R4 = this;
  _R5 = a2;
  v6 = (*(int (__fastcall **)(int))(*(_DWORD *)a3 + 32))(a3);
  _ZF = v6 == 0;
  if ( v6 )
    _ZF = *((_BYTE *)_R5 + 15) == 0;
  if ( _ZF )
  {
    (*(void (__fastcall **)(float *, int))(*(_DWORD *)v3 + 20))(&v25, v3);
    __asm
    {
      VLDR            S4, [SP,#0x78+var_64]
      VLDR            S2, [SP,#0x78+var_60]
      VLDR            S0, [SP,#0x78+var_5C]
    }
    v8 = *((_DWORD *)_R5 + 1);
    v9 = *((_DWORD *)_R5 + 2);
    *(_DWORD *)_R4 = *(_DWORD *)_R5;
    *((_DWORD *)_R4 + 1) = v8;
    *((_DWORD *)_R4 + 2) = v9;
    result = *((float *)_R5 + 3);
    if ( LOBYTE(result) )
      __asm
      {
        VLDRNE          S6, [R4]
        VADDNE.F32      S4, S6, S4
        VSTRNE          S4, [R4]
      }
    if ( LOWORD(result) & 0xFF00 )
        VLDRNE          S4, [R4,#4]
        VADDNE.F32      S2, S4, S2
        VSTRNE          S2, [R4,#4]
    if ( LODWORD(result) & 0xFF0000 )
        VLDRNE          S2, [R4,#8]
        VADDNE.F32      S0, S2, S0
        VSTRNE          S0, [R4,#8]
  }
  else
    Entity::getRotation((Entity *)&v23, v6);
      VLDR            S0, [SP,#0x78+var_6C]
      VLDR            S16, [SP,#0x78+var_68]
    _R0 = &mce::Math::DEGRAD;
      VLDR            S18, [R0]
      VMUL.F32        S0, S18, S0
      VMOV            R7, S0
    _R8 = cosf(_R7);
    (*(void (__fastcall **)(float *, int))(*(_DWORD *)v3 + 20))(&v20, v3);
      VMUL.F32        S0, S16, S18
      VMOV            S16, R8
      VMOV            R6, S0
    _R0 = sinf(COERCE_FLOAT(LODWORD(_R7) ^ 0x80000000));
    __asm { VMOV            S18, R0 }
    _R0 = cosf(_R6);
      VLDR            S22, [R5,#4]
      VMOV            S30, R0
      VLDR            S24, [R5,#8]
      VMUL.F32        S28, S22, S18
      VLDR            S20, [R5]
      VMUL.F32        S26, S24, S16
      VMUL.F32        S17, S20, S30
      VSUB.F32        S19, S28, S26
    result = sinf(_R6);
      VMOV            S0, R0
      VLDR            S6, [SP,#0x78+var_78]
      VMUL.F32        S2, S22, S16
      VLDR            S8, [SP,#0x78+var_74]
      VMUL.F32        S4, S20, S0
      VLDR            S10, [SP,#0x78+var_70]
      VSUB.F32        S12, S26, S28
      VADD.F32        S6, S17, S6
      VMUL.F32        S0, S19, S0
      VMUL.F32        S14, S24, S18
      VADD.F32        S2, S2, S8
      VADD.F32        S4, S10, S4
      VMUL.F32        S8, S12, S30
      VADD.F32        S0, S6, S0
      VADD.F32        S2, S2, S14
      VADD.F32        S4, S4, S8
      VSTR            S0, [R4]
      VSTR            S2, [R4,#4]
      VSTR            S4, [R4,#8]
  return result;
}
