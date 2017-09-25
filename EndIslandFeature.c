

signed int __fastcall EndIslandFeature::place(__int64 this, const BlockPos *a2, Random *a3)
{
  const BlockPos *v3; // r5@1
  unsigned int v4; // r0@1
  int v9; // r11@1
  float v10; // r1@1
  int v13; // r0@2
  int v15; // r8@2
  float v16; // r1@2
  float v17; // r1@2
  int v18; // r10@4
  float v19; // r1@4
  float v20; // r1@4
  int v22; // r1@7
  int v23; // r2@7
  int v24; // r0@8
  int v25; // r0@9
  Random *v28; // [sp+0h] [bp-70h]@1
  mce::Math *v29; // [sp+4h] [bp-6Ch]@2
  __int64 v30; // [sp+8h] [bp-68h]@1
  char v31; // [sp+10h] [bp-60h]@7
  char v32; // [sp+11h] [bp-5Fh]@7
  int v33; // [sp+14h] [bp-5Ch]@7
  int v34; // [sp+18h] [bp-58h]@7
  int v35; // [sp+1Ch] [bp-54h]@7

  v28 = a3;
  v3 = a2;
  v30 = this;
  v4 = j_Random::_genRandInt32(a3);
  __asm
  {
    VMOV.F32        S18, #-0.5
    VMOV.F32        S20, #0.5
    VMOV.F32        S22, #1.0
  }
  v9 = 0;
  LODWORD(v10) = 3 * (v4 / 3);
  _R0 = v4 % 3 | 4;
    VMOV            S0, R0
    VCVT.F32.S32    S16, S0
  do
    __asm
    {
      VNEG.F32        S0, S16
      VMOV            R0, S0
    }
    v29 = _R0;
    v13 = j_mce::Math::floor(_R0, v10);
    __asm { VMOV            R4, S16 }
    v15 = v13;
    if ( v13 <= j_mce::Math::ceil(_R4, v16) )
      __asm
      {
        VADD.F32        S0, S16, S22
        VMUL.F32        S24, S0, S0
      }
      do
        v18 = j_mce::Math::floor(v29, v17);
        if ( v18 <= j_mce::Math::ceil(_R4, v19) )
        {
          do
          {
            _R0 = v15 * v15 + v18 * v18;
            __asm
            {
              VMOV            S0, R0
              VCVT.F32.S32    S0, S0
              VCMPE.F32       S0, S24
              VMRS            APSR_nzcv, FPSCR
            }
            if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
              v22 = *((_DWORD *)v3 + 1);
              v23 = *((_DWORD *)v3 + 2);
              v33 = *(_DWORD *)v3 + v15;
              v34 = v22 + v9;
              v35 = v18 + v23;
              v31 = *(_BYTE *)(Block::mEndStone + 4);
              v32 = 0;
              j_Feature::_setBlockAndData(
                (Feature *)v30,
                (BlockSource *)HIDWORD(v30),
                (const BlockPos *)&v33,
                (const FullBlock *)&v31);
            v24 = j_mce::Math::ceil(_R4, v20);
            _VF = __OFSUB__(v18, v24);
            _NF = v18++ - v24 < 0;
          }
          while ( _NF ^ _VF );
        }
        v25 = j_mce::Math::ceil(_R4, v20);
        _VF = __OFSUB__(v15, v25);
        _NF = v15++ - v25 < 0;
      while ( _NF ^ _VF );
    _R0 = j_Random::_genRandInt32(v28) & 1;
    __asm { VADD.F32        S2, S16, S18 }
    --v9;
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VSUB.F32        S16, S2, S0
      VCMPE.F32       S16, S20
      VMRS            APSR_nzcv, FPSCR
  while ( !((unsigned __int8)(_NF ^ _VF) | _ZF) );
  return 1;
}


void __fastcall EndIslandFeature::~EndIslandFeature(EndIslandFeature *this)
{
  EndIslandFeature::~EndIslandFeature(this);
}


void __fastcall EndIslandFeature::~EndIslandFeature(EndIslandFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Feature::~Feature(this);
  j_j_j__ZdlPv_7(v1);
}
