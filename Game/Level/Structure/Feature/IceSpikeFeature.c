

signed int __fastcall IceSpikeFeature::_isValidPlaceBlock(int a1, _BYTE *a2)
{
  int v2; // r1@1
  signed int result; // r0@4

  v2 = *a2;
  if ( v2 != *(_BYTE *)(Block::mAir + 4) && v2 != *(_BYTE *)(Block::mDirt + 4) && v2 != *(_BYTE *)(Block::mSnow + 4) )
  {
    result = 0;
    if ( v2 == *(_BYTE *)(Block::mIce + 4) )
      result = 1;
  }
  else
    result = 1;
  return result;
}


signed int __fastcall IceSpikeFeature::place(IceSpikeFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  BlockSource *v4; // r5@1
  Random *v5; // r6@1
  int v6; // r0@2
  char v7; // r0@6
  unsigned int v9; // r0@8
  int v18; // r8@11
  signed int v19; // r0@11
  int v20; // r9@11
  signed int v21; // r1@13
  signed int v23; // r0@18
  signed int v24; // r1@18
  int v25; // r7@18
  int v26; // r10@20
  signed int v28; // r0@28
  int v31; // r0@50
  signed int result; // r0@55
  int v33; // r3@57
  int v34; // r0@58
  int v35; // r4@60
  int v36; // r6@60
  int v37; // r1@61
  int v38; // r0@61
  Random *v39; // r0@64
  signed int i; // r6@65
  unsigned int v41; // r0@74
  unsigned int v42; // r0@75
  signed int v43; // r4@79
  int v44; // r1@85
  unsigned int v45; // kr08_4@86
  unsigned int v46; // r0@86
  unsigned int v47; // [sp+4h] [bp-CCh]@9
  unsigned int v48; // [sp+8h] [bp-C8h]@6
  int v49; // [sp+18h] [bp-B8h]@57
  int v50; // [sp+1Ch] [bp-B4h]@58
  int v51; // [sp+20h] [bp-B0h]@15
  int v52; // [sp+20h] [bp-B0h]@54
  int v53; // [sp+24h] [bp-ACh]@22
  Random *v54; // [sp+28h] [bp-A8h]@9
  IceSpikeFeature *v55; // [sp+34h] [bp-9Ch]@1
  char v56; // [sp+38h] [bp-98h]@73
  char v57; // [sp+39h] [bp-97h]@73
  char v58; // [sp+3Ch] [bp-94h]@46
  char v59; // [sp+3Dh] [bp-93h]@46
  unsigned __int8 v60; // [sp+40h] [bp-90h]@42
  char v61; // [sp+44h] [bp-8Ch]@40
  char v62; // [sp+45h] [bp-8Bh]@40
  unsigned __int8 v63; // [sp+48h] [bp-88h]@36
  int v64; // [sp+4Ch] [bp-84h]@36
  int v65; // [sp+50h] [bp-80h]@36
  int v66; // [sp+54h] [bp-7Ch]@36
  unsigned __int8 v67; // [sp+58h] [bp-78h]@5
  int v68; // [sp+5Ch] [bp-74h]@1
  int v69; // [sp+60h] [bp-70h]@1
  int v70; // [sp+64h] [bp-6Ch]@1

  v55 = this;
  v4 = a2;
  v68 = *(_DWORD *)a3;
  v5 = a4;
  v69 = *((_DWORD *)a3 + 1);
  v70 = *((_DWORD *)a3 + 2);
  if ( BlockSource::isEmptyBlock(a2, (const BlockPos *)&v68) == 1 )
  {
    v6 = v69;
    if ( v69 >= 3 )
    {
      do
      {
        v69 = v6 - 1;
        if ( BlockSource::isEmptyBlock(v4, (const BlockPos *)&v68) != 1 )
          break;
        v6 = v69;
      }
      while ( v69 > 2 );
    }
  }
  BlockSource::getBlockID((BlockSource *)&v67, v4, (int)&v68);
  if ( v67 == *(_BYTE *)(Block::mSnow + 4) )
    v7 = j_Random::_genRandInt32(v5);
    v69 += v7 & 3;
    v48 = (j_Random::_genRandInt32(v5) & 3) + 7;
    _R7 = (j_Random::_genRandInt32(v5) & 1) + (v48 >> 2);
    if ( _R7 >= 2 && !(j_Random::_genRandInt32(v5) % 0x3C) )
      v9 = j_Random::_genRandInt32(v5);
      v69 += v9 % 0x1E + 10;
    __asm { VMOV            S0, R7 }
    v54 = v5;
    v47 = _R7;
    __asm
      VMOV.F32        S20, #1.0
      VCVT.F32.S32    S16, S0
    _R0 = v48;
      VMOV.F32        S22, #-0.25
      VLDR            D12, =2.32830644e-10
      VMOV.F32        S26, #0.75
    _R4 = 0;
      VMOV            S0, R0
      VCVT.F32.S32    S18, S0
    do
      __asm
        VMOV            S0, R4
        VCVT.F32.S32    S0, S0
        VDIV.F32        S0, S0, S18
        VSUB.F32        S0, S20, S0
        VMUL.F32        S28, S0, S16
        VMOV            R0, S28
      _R0 = ceilf(_R0);
        VMOV            S0, R0
        VCVTR.S32.F32   S0, S0
        VMOV            R11, S0
      if ( _R11 + 1 + _R11 )
        __asm { VMUL.F32        S28, S28, S28 }
        v18 = -2 * _R11;
        v19 = 0;
        v20 = -_R11;
        if ( _R11 > 1 )
          v19 = 1;
        v21 = _R4;
        if ( _R4 )
          v21 = 1;
        v51 = v19 & v21;
        do
        {
          _R0 = v20;
          if ( v20 < 0 )
            _R0 = -v20;
          __asm { VMOV            S0, R0 }
          v23 = 0;
          v24 = 0;
          v25 = 0;
          __asm { VCVT.F32.S32    S0, S0 }
          if ( _ZF )
            v23 = 1;
          v26 = -_R11;
          if ( v20 == -_R11 )
            v24 = 1;
          v53 = v23 | v24;
          __asm
          {
            VADD.F32        S0, S0, S22
            VMUL.F32        S30, S0, S0
          }
          do
            _R0 = v26;
            if ( v26 < 0 )
              _R0 = _R11 + v25;
            __asm
            {
              VMOV            S0, R0
              VCVT.F32.S32    S0, S0
            }
            if ( _ZF )
              goto LABEL_94;
              VADD.F32        S0, S0, S22
              VMUL.F32        S0, S0, S0
              VADD.F32        S0, S0, S30
              VCMPE.F32       S0, S28
              VMRS            APSR_nzcv, FPSCR
            if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_94:
              v28 = 0;
              if ( !v25 )
                v28 = 1;
              _ZF = v18 == v25;
              if ( v18 != v25 )
                _ZF = (v28 | v53) == 1;
              if ( !_ZF )
                goto LABEL_95;
              _R0 = j_Random::_genRandInt32(v5);
              __asm
              {
                VMOV            S0, R0
                VCVT.F64.U32    D0, S0
                VMUL.F64        D0, D0, D12
                VCVT.F32.F64    S0, D0
                VCMPE.F32       S0, S26
                VMRS            APSR_nzcv, FPSCR
              }
              if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_95:
                v64 = v68 + v20;
                v65 = v69 + _R4;
                v66 = v26 + v70;
                BlockSource::getBlockID((BlockSource *)&v63, v4, (int)&v64);
                if ( v63 == *(_BYTE *)(Block::mAir + 4)
                  || v63 == *(_BYTE *)(Block::mDirt + 4)
                  || v63 == *(_BYTE *)(Block::mSnow + 4)
                  || v63 == *(_BYTE *)(Block::mIce + 4) )
                {
                  v61 = *(_BYTE *)(Block::mPackedIce + 4);
                  v62 = 0;
                  Feature::_setBlockAndData(v55, v4, (const BlockPos *)&v64, (const FullBlock *)&v61);
                }
                if ( v51 == 1 )
                  v64 = v68 + v20;
                  v65 = v69 - _R4;
                  v66 = v26 + v70;
                  BlockSource::getBlockID((BlockSource *)&v60, v4, (int)&v64);
                  v63 = v60;
                  if ( v60 == *(_BYTE *)(Block::mAir + 4)
                    || v60 == *(_BYTE *)(Block::mDirt + 4)
                    || v60 == *(_BYTE *)(Block::mSnow + 4)
                    || v60 == *(_BYTE *)(Block::mIce + 4) )
                  {
                    v58 = *(_BYTE *)(Block::mPackedIce + 4);
                    v59 = 0;
                    Feature::_setBlockAndData(v55, v4, (const BlockPos *)&v64, (const FullBlock *)&v58);
                  }
            --v25;
            ++v26;
          while ( ~(2 * _R11) != v25 );
          ++v20;
        }
        while ( v20 != _R11 + 1 );
      ++_R4;
    while ( _R4 != v48 );
    v31 = v47 - 1;
    if ( (signed int)(v47 - 1) > 1 )
      v31 = 1;
    if ( !v47 )
      v31 = 0;
    v52 = v31 + 1;
    if ( v31 + 1 + v31 )
      v33 = -v31;
      v49 = -v31;
        v34 = v33;
        v50 = v33;
        if ( v33 < 0 )
          v34 = -v33;
        v35 = v49;
        v36 = v49;
        if ( v34 == 1 )
            v64 = v68 + v33;
            v37 = v69 - 1;
            v65 = v69 - 1;
            v66 = v70 + v35;
            v38 = v35;
            if ( v35 < 0 )
              v38 = -v35;
            if ( v38 == 1 )
              v39 = v54;
LABEL_75:
              v42 = j_Random::_genRandInt32(v39);
              v37 = v65;
              i = v42 % 5;
            for ( i = 50; v37 > 50; --i )
              BlockSource::getBlockID((BlockSource *)&v63, v4, (int)&v64);
              if ( v63 != *(_BYTE *)(Block::mAir + 4)
                && v63 != *(_BYTE *)(Block::mDirt + 4)
                && v63 != *(_BYTE *)(Block::mSnow + 4)
                && v63 != *(_BYTE *)(Block::mIce + 4)
                && v63 != *(_BYTE *)(Block::mPackedIce + 4) )
                break;
              v56 = *(_BYTE *)(Block::mPackedIce + 4);
              v57 = 0;
              Feature::_setBlockAndData(v55, v4, (const BlockPos *)&v64, (const FullBlock *)&v56);
              v37 = v65-- - 1;
              if ( i <= 1 )
                v41 = j_Random::_genRandInt32(v54);
                v65 += ~(v41 % 5);
                v39 = v54;
                goto LABEL_75;
            v33 = v50;
            ++v35;
          while ( v35 != v52 );
        else
            v66 = v70 + v36;
            if ( v69 - 1 >= 51 )
              v43 = 50;
              do
                if ( v63 != *(_BYTE *)(Block::mAir + 4)
                  && v63 != *(_BYTE *)(Block::mDirt + 4)
                  && v63 != *(_BYTE *)(Block::mSnow + 4)
                  && v63 != *(_BYTE *)(Block::mIce + 4)
                  && v63 != *(_BYTE *)(Block::mPackedIce + 4) )
                  break;
                v56 = *(_BYTE *)(Block::mPackedIce + 4);
                v57 = 0;
                Feature::_setBlockAndData(v55, v4, (const BlockPos *)&v64, (const FullBlock *)&v56);
                v44 = v65-- - 1;
                if ( v43 > 1 )
                  --v43;
                else
                  v45 = j_Random::_genRandInt32(v54);
                  v65 += ~(v45 % 5);
                  v46 = j_Random::_genRandInt32(v54);
                  v44 = v65;
                  v43 = v46 % 5;
              while ( v44 > 50 );
            ++v36;
          while ( v36 != v52 );
        ++v33;
      while ( v33 != v52 );
      result = 1;
    else
  else
    result = 0;
  return result;
}


void __fastcall IceSpikeFeature::~IceSpikeFeature(IceSpikeFeature *this)
{
  IceSpikeFeature::~IceSpikeFeature(this);
}


void __fastcall IceSpikeFeature::~IceSpikeFeature(IceSpikeFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}
