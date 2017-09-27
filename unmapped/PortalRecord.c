

int __fastcall PortalRecord::closestBlockPosTo(PortalRecord *this, const Entity *a2, int a3)
{
  PortalRecord *v4; // r4@1
  const Entity *v5; // r6@1
  int v6; // r0@1
  int result; // r0@1
  int v18; // r2@2

  _R5 = a3;
  v4 = this;
  v5 = a2;
  v6 = (*(int (__fastcall **)(int))(*(_DWORD *)a3 + 52))(a3);
  j_BlockPos::BlockPos((int)v4, v6);
  _R2 = *((_DWORD *)v5 + 3);
  result = (char)_R2;
  if ( (char)_R2 >= 1 )
  {
    _R12 = *(_QWORD *)v5 >> 32;
    _R1 = *(_QWORD *)v5;
    __asm
    {
      VMOV.F32        S0, #0.5
      VMOV            S2, R12
    }
    _R3 = *((_DWORD *)v5 + 2);
      VMOV.F32        S8, #-1.0
      VCVT.F32.S32    S2, S2
      VLDR            S6, [R5,#0x4C]
      VLDR            S10, [R5,#0x50]
      VADD.F32        S4, S2, S0
      VLDR            S2, [R5,#0x48]
      SBFX.W          R6, R2, #8, #8
      SBFX.W          R5, R2, #0x10, #8
    v18 = 0;
      VSUB.F32        S6, S4, S6
      VSUB.F32        S4, S0, S10
      VMUL.F32        S6, S6, S6
    do
      __asm
      {
        VMOV            S10, R1
        VMOV            S12, R3
        VCVT.F32.S32    S10, S10
        VCVT.F32.S32    S12, S12
        VCMPE.F32       S8, #0.0
        VMRS            APSR_nzcv, FPSCR
        VADD.F32        S10, S10, S0
        VADD.F32        S12, S4, S12
        VSUB.F32        S10, S10, S2
        VMUL.F32        S12, S12, S12
        VMUL.F32        S10, S10, S10
        VADD.F32        S10, S10, S6
        VADD.F32        S10, S10, S12
      }
      if ( _NF ^ _VF )
        __asm { VMOV.F32        S8, S10 }
        *(_DWORD *)v4 = _R1;
        *((_DWORD *)v4 + 1) = _R12;
        *((_DWORD *)v4 + 2) = _R3;
      else
        __asm
        {
          VCMPEGE.F32     S10, S8
          VMRSGE          APSR_nzcv, FPSCR
        }
      ++v18;
      _R3 += _R5;
      _R1 += _R6;
    while ( v18 < result );
  }
  return result;
}


int __fastcall PortalRecord::PortalRecord(int result, int a2, char a3, char a4, char a5)
{
  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 8);
  *(_BYTE *)(result + 12) = a3;
  *(_BYTE *)(result + 13) = a4;
  *(_BYTE *)(result + 14) = a5;
  return result;
}


int __fastcall PortalRecord::PortalRecord(int result, const BlockPos *a2)
{
  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)(result + 4) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 8) = *((_DWORD *)a2 + 2);
  *(_WORD *)(result + 12) = 0;
  *(_BYTE *)(result + 14) = 0;
  return result;
}
