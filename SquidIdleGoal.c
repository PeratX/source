

int __fastcall SquidIdleGoal::start(int result)
{
  *(_DWORD *)(result + 12) = 200;
  return result;
}


void __fastcall SquidIdleGoal::~SquidIdleGoal(SquidIdleGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)Goal::~Goal(this);
  j_j_j__ZdlPv_6(v1);
}


void __fastcall SquidIdleGoal::~SquidIdleGoal(SquidIdleGoal *this)
{
  SquidIdleGoal::~SquidIdleGoal(this);
}


int __fastcall SquidIdleGoal::tick(SquidIdleGoal *this)
{
  SquidIdleGoal *v1; // r4@1
  signed int v2; // r1@1
  int result; // r0@1
  Random *v9; // r5@7
  int v14; // t1@9
  float v15; // [sp+4h] [bp-2Ch]@1
  float v16; // [sp+8h] [bp-28h]@1
  __int16 v17; // [sp+Eh] [bp-22h]@1

  v1 = this;
  Squid::getWaterHeights(*((Squid **)this + 2), &v17, &v16, &v15);
  v2 = *((_DWORD *)v1 + 3);
  *((_DWORD *)v1 + 3) = v2 + 1;
  result = *((_DWORD *)v1 + 2);
  __asm
  {
    VLDR            S16, [SP,#0x30+var_2C]
    VLDR            S0, [R0,#0x4C]
    VCMPE.F32       S0, S16
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    if ( v2 < 200 )
      return result;
  else
    _R2 = result + 4324;
    __asm
    {
      VLDR            S0, [R2]
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF && v2 <= 199 )
  v9 = (Random *)(result + 552);
  *((_DWORD *)v1 + 3) = 0;
  _R6 = Random::_genRandInt32((Random *)(result + 552));
  Random::_genRandInt32(v9);
  _R5 = Random::_genRandInt32(v9);
  __asm { VLDR            S18, [SP,#0x30+var_28] }
  _R0 = Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 2) + 552));
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VMOV            S4, R6
    VCVT.F64.U32    D0, S0
    VMOV            S6, R5
    VCVT.F64.U32    D2, S4
    VCVT.F64.U32    D3, S6
  _R0 = *((_DWORD *)v1 + 2);
    VMUL.F64        D0, D0, D1
    VMUL.F64        D2, D2, D1
    VMUL.F64        D1, D3, D1
    VCVT.F32.F64    S0, D0
    VSUB.F32        S6, S16, S18
    VLDR            S8, [R0,#0x4C]
    VMOV.F32        S10, #-0.5
    VCVT.F32.F64    S4, D2
    VCVT.F32.F64    S12, D1
    VMUL.F32        S6, S0, S6
    VSUB.F32        S8, S18, S8
    VADD.F32        S2, S4, S10
    VADD.F32        S0, S12, S10
    VADD.F32        S4, S8, S6
    VLDR            S6, =0.1
    VMUL.F32        S8, S2, S2
    VMUL.F32        S10, S0, S0
    VMUL.F32        S4, S4, S6
    VADD.F32        S6, S10, S8
    VMUL.F32        S8, S4, S4
    VADD.F32        S6, S6, S8
    VSQRT.F32       S6, S6
    VCMPE.F32       S6, #0.0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      VMOV.F32        S8, #0.5
      VDIV.F32        S6, S8, S6
      VMUL.F32        S0, S6, S0
      VMUL.F32        S4, S6, S4
      VMUL.F32        S2, S6, S2
    VLDR            S6, =0.05
    VMUL.F32        S2, S2, S6
    VMUL.F32        S0, S0, S6
    VSTR            S2, [R0]
  v14 = *((_DWORD *)v1 + 2);
  __asm { VSTR            S4, [R0] }
  result = *((_DWORD *)v1 + 2) + 4328;
  __asm { VSTR            S0, [R0] }
  return result;
}
