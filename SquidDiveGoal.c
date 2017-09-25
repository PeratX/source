

int __fastcall SquidDiveGoal::start(SquidDiveGoal *this)
{
  SquidDiveGoal *v1; // r4@1
  int v11; // t1@4
  int v12; // t1@4
  int result; // r0@4

  v1 = this;
  _R0 = Random::_genRandInt32((Random *)(*((_DWORD *)this + 2) + 552));
  __asm
  {
    VMOV            S0, R0
    VCVT.F64.U32    D8, S0
  }
  _R0 = Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 2) + 552));
    VMOV            S2, R0
    VLDR            D0, =2.32830644e-10
    VCVT.F64.U32    D1, S2
    VMUL.F64        D2, D8, D0
    VMUL.F64        D0, D1, D0
    VMOV.F32        S2, #-0.5
    VCVT.F32.F64    S4, D2
    VCVT.F32.F64    S6, D0
    VADD.F32        S0, S4, S2
    VADD.F32        S2, S6, S2
    VMOV.F32        S4, #1.0
    VMUL.F32        S6, S0, S0
    VMUL.F32        S8, S2, S2
    VADD.F32        S4, S6, S4
    VLDR            S6, =0.0001
    VADD.F32        S4, S4, S8
    VSQRT.F32       S4, S4
    VCMPE.F32       S4, S6
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    _R1 = *(&Vec3::ZERO + 1);
    _R2 = Vec3::ZERO;
    _R0 = dword_2822498;
  else
    __asm
    {
      VMOV.F32        S6, #-1.0
      VDIV.F32        S2, S2, S4
      VDIV.F32        S0, S0, S4
      VDIV.F32        S4, S6, S4
      VMOV            R0, S2
      VMOV            R2, S0
      VMOV            R1, S4
    }
    VLDR            S0, =0.025
    VMOV            S2, R2
    VMOV            S4, R1
  v11 = *((_DWORD *)v1 + 2);
    VMUL.F32        S2, S2, S0
    VMOV            S6, R0
    VMUL.F32        S4, S4, S0
    VMUL.F32        S0, S6, S0
    VSTR            S2, [R0]
  v12 = *((_DWORD *)v1 + 2);
  __asm { VSTR            S4, [R0] }
  result = *((_DWORD *)v1 + 2) + 4328;
  __asm { VSTR            S0, [R0] }
  return result;
}


void __fastcall SquidDiveGoal::~SquidDiveGoal(SquidDiveGoal *this)
{
  SquidDiveGoal::~SquidDiveGoal(this);
}


int __fastcall SquidDiveGoal::canUse(SquidDiveGoal *this)
{
  SquidDiveGoal *v1; // r4@1
  int v2; // r0@2
  BlockSource *v3; // r0@2
  int result; // r0@3
  char v5; // [sp+4h] [bp-1Ch]@2
  int v6; // [sp+8h] [bp-18h]@2

  v1 = this;
  result = 0;
  if ( !(*(int (**)(void))(**((_DWORD **)this + 2) + 208))() )
  {
    v2 = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 52))();
    BlockPos::BlockPos((int)&v5, v2);
    --v6;
    v3 = (BlockSource *)Entity::getRegion(*((Entity **)v1 + 2));
    if ( BlockSource::isSolidBlockingBlock(v3, (const BlockPos *)&v5) != 1 )
      result = 1;
  }
  return result;
}


void __fastcall SquidDiveGoal::~SquidDiveGoal(SquidDiveGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)Goal::~Goal(this);
  j_j_j__ZdlPv_6(v1);
}
