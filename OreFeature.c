

signed int __fastcall OreFeature::_isDiggable(_BYTE *a1)
{
  int v1; // r1@1
  signed int result; // r0@2

  v1 = *a1;
  if ( v1 == *(_BYTE *)(Block::mStone + 4) )
  {
    result = 1;
  }
  else
    result = 0;
    if ( v1 == *(_BYTE *)(Block::mNetherrack + 4) )
      result = 1;
  return result;
}


int __fastcall OreFeature::OreFeature(Feature *a1, _BYTE *a2, int a3)
{
  _BYTE *v3; // r5@1
  int result; // r0@1

  v3 = a2;
  _R4 = a3;
  result = Feature::Feature(a1, 0);
  __asm
  {
    VMOV            S2, R4
    VMOV.F32        S0, #1.0
    VCVT.F32.S32    S2, S2
  }
  *(_DWORD *)result = &off_2718B7C;
  *(_BYTE *)(result + 12) = *v3;
  __asm { VDIV.F32        S0, S0, S2 }
  *(_BYTE *)(result + 13) = 0;
  *(_DWORD *)(result + 16) = _R4;
    VSTR            S2, [R0,#0x14]
    VSTR            S0, [R0,#0x18]
  return result;
}


int __fastcall OreFeature::OreFeature(Feature *a1, _BYTE *a2, char a3, int a4)
{
  _BYTE *v4; // r6@1
  char v6; // r5@1
  int result; // r0@1

  v4 = a2;
  _R4 = a4;
  v6 = a3;
  result = Feature::Feature(a1, 0);
  __asm
  {
    VMOV            S2, R4
    VMOV.F32        S0, #1.0
    VCVT.F32.S32    S2, S2
  }
  *(_DWORD *)result = &off_2718B7C;
  *(_BYTE *)(result + 12) = *v4;
  __asm { VDIV.F32        S0, S0, S2 }
  *(_BYTE *)(result + 13) = v6;
  *(_DWORD *)(result + 16) = _R4;
    VSTR            S2, [R0,#0x14]
    VSTR            S0, [R0,#0x18]
  return result;
}


void __fastcall OreFeature::~OreFeature(OreFeature *this)
{
  OreFeature::~OreFeature(this);
}


void __fastcall OreFeature::~OreFeature(OreFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


signed int __fastcall OreFeature::place(OreFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Random *v4; // r4@1
  const BlockPos *v7; // r11@1
  BlockSource *v8; // r5@1
  float v16; // r1@1
  float v17; // r1@1
  unsigned int v19; // r7@1
  unsigned int v21; // r0@1
  const FullBlock *v25; // r7@2
  float v29; // r1@3
  __int64 v32; // kr08_8@4
  int v35; // r0@15
  int v38; // [sp+4h] [bp-E4h]@1
  Random *v39; // [sp+8h] [bp-E0h]@1
  int v40; // [sp+Ch] [bp-DCh]@3
  int v41; // [sp+10h] [bp-D8h]@4
  int v42; // [sp+14h] [bp-D4h]@3
  signed int v43; // [sp+18h] [bp-D0h]@4
  int v44; // [sp+1Ch] [bp-CCh]@5
  OreFeature *v45; // [sp+20h] [bp-C8h]@1
  int v46; // [sp+24h] [bp-C4h]@1
  unsigned __int16 v47; // [sp+2Ah] [bp-BEh]@18
  char v48; // [sp+2Ch] [bp-BCh]@3
  char v49; // [sp+30h] [bp-B8h]@1
  int v50; // [sp+38h] [bp-B0h]@3
  __int64 v51; // [sp+3Ch] [bp-ACh]@4
  char v52; // [sp+44h] [bp-A4h]@3
  int v53; // [sp+50h] [bp-98h]@3
  int v54; // [sp+54h] [bp-94h]@4
  int v55; // [sp+58h] [bp-90h]@4
  int v56; // [sp+5Ch] [bp-8Ch]@1
  int v57; // [sp+60h] [bp-88h]@1
  int v58; // [sp+64h] [bp-84h]@1
  char v59; // [sp+68h] [bp-80h]@1
  char v60; // [sp+74h] [bp-74h]@1

  v4 = a4;
  _R8 = this;
  _R6 = &v49;
  v39 = a4;
  v7 = a3;
  v8 = a2;
  v45 = this;
  _R0 = j_Random::_genRandInt32(a4);
  __asm
  {
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VCVT.F64.U32    D0, S0
  }
  _R0 = &mce::Math::PI;
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S0, D0
    VLDR            S18, [R0]
    VMUL.F32        S0, S0, S18
    VMOV            R7, S0
  v46 = mce::Math::sin(_R7, v16);
  _R9 = mce::Math::cos(_R7, v17);
  __asm { VLDR            S16, [R8,#0x14] }
  Vec3::Vec3((int)&v60, (int)v7);
  v19 = j_Random::_genRandInt32(v4);
    VLDR            S24, [R6,#0x44]
    VLDR            S20, [R6,#0x48]
    VLDR            S22, [R6,#0x4C]
  Vec3::Vec3((int)&v59, (int)v7);
  _R0 = v19 % 3 - 2;
    VCVT.F32.S32    S26, S0
  v21 = j_Random::_genRandInt32(v4);
    VLDR            S0, [R6,#0x38]
    VLDR            S4, [R6,#0x3C]
    VLDR            S2, [R6,#0x40]
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v38 = *((_DWORD *)_R8 + 4);
  if ( v38 )
    __asm { VMOV.F32        S6, #0.125 }
    _R1 = v46;
    __asm
    {
      VMOV            S8, R9
      VLDR            S19, =0.0625
      VMOV.F32        S12, #8.0
      VMOV            S10, R1
      VADD.F32        S20, S26, S20
      VMOV.F32        S21, #1.0
      VMOV.F32        S23, #0.5
      VMUL.F32        S6, S16, S6
      VSUB.F32        S4, S4, S20
    }
    _R0 = v21 % 3 - 2;
    _R1 = 0;
      VMUL.F32        S8, S6, S8
      VMUL.F32        S6, S6, S10
      VADD.F32        S10, S8, S12
      VADD.F32        S14, S6, S12
      VSUB.F32        S8, S12, S8
      VSUB.F32        S6, S12, S6
      VADD.F32        S22, S10, S22
      VADD.F32        S24, S14, S24
      VMOV            S10, R0
      VCVT.F32.S32    S10, S10
    v25 = (OreFeature *)((char *)v45 + 12);
      VSUB.F32        S8, S8, S22
      VSUB.F32        S6, S6, S24
      VADD.F32        S26, S4, S10
      VADD.F32        S28, S8, S2
      VADD.F32        S30, S6, S0
    do
      __asm { VMOV            S0, R1 }
      v40 = _R1;
      _R4 = v45;
      __asm
      {
        VLDR            S16, [R4,#0x18]
        VCVT.F32.S32    S17, S0
      }
      _R0 = j_Random::_genRandInt32(v39);
        VMUL.F32        S2, S18, S17
        VMOV            S0, R0
        VCVT.F64.U32    D0, S0
        VLDR            S4, [R4,#0x18]
        VLDR            S25, [R4,#0x14]
        VMUL.F32        S2, S2, S4
        VLDR            D2, =2.32830644e-10
        VMUL.F64        D0, D0, D2
        VMOV            R0, S2
        VCVT.F32.F64    S27, D0
      _R0 = mce::Math::sin(_R0, v29);
        VMUL.F32        S0, S25, S19
        VMOV            S2, R0
        VMUL.F32        S4, S17, S30
        VADD.F32        S2, S2, S21
        VMUL.F32        S6, S17, S28
        VMUL.F32        S0, S0, S27
        VMUL.F32        S4, S4, S16
        VMUL.F32        S6, S6, S16
        VMUL.F32        S0, S0, S2
        VMUL.F32        S2, S17, S26
        VADD.F32        S25, S6, S22
        VADD.F32        S0, S0, S21
        VMUL.F32        S2, S2, S16
        VADD.F32        S16, S4, S24
        VMUL.F32        S17, S0, S23
        VADD.F32        S27, S2, S20
        VSUB.F32        S0, S16, S17
        VSUB.F32        S2, S27, S17
        VSUB.F32        S4, S25, S17
        VSTR            S0, [R4,#0x14]
        VSTR            S2, [R4,#0x18]
        VSTR            S4, [R4,#0x1C]
      BlockPos::BlockPos((int)&v53, (int)&v52);
        VADD.F32        S0, S17, S16
        VADD.F32        S2, S17, S27
        VADD.F32        S4, S17, S25
        VSTR            S0, [R4,#-4]
        VSTR            S2, [R4]
        VSTR            S4, [R4,#4]
      BlockPos::BlockPos((int)&v50, (int)&v48);
      _R0 = v53;
      v42 = v50;
      if ( v53 <= v50 )
        __asm { VSUB.F32        S25, S23, S25 }
        v32 = v51;
        __asm
        {
          VSUB.F32        S27, S23, S27
          VSUB.F32        S29, S23, S16
        }
        v43 = v54;
        __asm { VMUL.F32        S31, S17, S17 }
        v41 = v55;
        do
          __asm { VMOV            S0, R0 }
          v44 = _R0;
          __asm
          {
            VCVT.F32.S32    S0, S0
            VADD.F32        S0, S0, S29
            VMUL.F32        S16, S0, S0
            VCMPE.F32       S16, S31
            VMRS            APSR_nzcv, FPSCR
          }
          if ( _NF ^ _VF )
            v56 = _R0;
            if ( v41 <= SHIDWORD(v32) )
            {
              _R6 = v41;
              _R0 = v41;
              if ( v43 <= (signed int)v32 )
              {
                do
                {
                  __asm
                  {
                    VMOV            S0, R6
                    VCVT.F32.S32    S0, S0
                    VADD.F32        S0, S0, S25
                    VMUL.F32        S0, S0, S0
                    VADD.F32        S17, S0, S16
                    VCMPE.F32       S17, S31
                    VMRS            APSR_nzcv, FPSCR
                  }
                  if ( _NF ^ _VF )
                    v35 = v43;
                    v58 = _R6;
                    do
                    {
                      _R8 = v35;
                      __asm
                      {
                        VMOV            S0, R8
                        VCVT.F32.S32    S0, S0
                        VADD.F32        S0, S0, S27
                        VMUL.F32        S0, S0, S0
                        VADD.F32        S0, S0, S17
                        VCMPE.F32       S0, S31
                        VMRS            APSR_nzcv, FPSCR
                      }
                      if ( _NF ^ _VF )
                        v57 = v35;
                        BlockSource::getBlockAndData((BlockSource *)&v47, v8, (int)&v56);
                        if ( ((unsigned __int8)v47 == *(_BYTE *)(Block::mStone + 4)
                           || (unsigned __int8)v47 == *(_BYTE *)(Block::mNetherrack + 4))
                          && v47 != *(_WORD *)v25 )
                        {
                          Feature::_setBlockAndData(v45, v8, (const BlockPos *)&v56, v25);
                        }
                      v35 = _R8 + 1;
                    }
                    while ( _R8 < (signed int)v32 );
                  _VF = __OFSUB__(_R6, HIDWORD(v32));
                  _NF = _R6++ - HIDWORD(v32) < 0;
                }
                while ( _NF ^ _VF );
              }
              else
                    VMOV            S0, R0
                    VADD.F32        S0, S0, S16
                    VCMPE.F32       S0, S31
                    v58 = _R0;
                  _VF = __OFSUB__(_R0, HIDWORD(v32));
                  _NF = _R0++ - HIDWORD(v32) < 0;
            }
          _R0 = v44 + 1;
        while ( v44 < v42 );
      _R1 = v40 + 1;
    while ( v40 + 1 != v38 );
  return 1;
}
