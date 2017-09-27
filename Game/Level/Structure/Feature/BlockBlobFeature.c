

int __fastcall BlockBlobFeature::BlockBlobFeature(Feature *a1, _BYTE *a2, int a3)
{
  _BYTE *v3; // r5@1
  int v4; // r4@1
  int result; // r0@1

  v3 = a2;
  v4 = a3;
  result = Feature::Feature(a1, 0);
  *(_DWORD *)result = &off_27189D8;
  *(_BYTE *)(result + 12) = *v3;
  *(_BYTE *)(result + 13) = 0;
  *(_DWORD *)(result + 16) = v4;
  return result;
}


void __fastcall BlockBlobFeature::~BlockBlobFeature(BlockBlobFeature *this)
{
  BlockBlobFeature::~BlockBlobFeature(this);
}


void __fastcall BlockBlobFeature::~BlockBlobFeature(BlockBlobFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


signed int __fastcall BlockBlobFeature::place(BlockBlobFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  signed int v4; // r8@1
  BlockSource *v5; // r5@1
  BlockBlobFeature *v6; // r6@1
  int v7; // r4@2
  int v8; // r10@2
  int v9; // r11@3
  int v10; // r1@5
  signed int result; // r0@9
  signed int v13; // r11@12
  Random *v14; // r9@12
  int v15; // r8@12
  int v19; // r4@13
  unsigned int v20; // r11@14
  int v21; // ST24_4@14
  unsigned int v22; // r1@14
  Random *v23; // r0@14
  int v24; // r4@14
  int v25; // r9@14
  int v26; // ST24_4@14
  char v27; // r0@14
  int v28; // r12@14
  int v29; // r1@14
  int v31; // r4@14
  int v33; // r8@20
  int v36; // r11@21
  int v37; // r1@28
  char v38; // r0@31
  int v39; // r8@31
  unsigned int v40; // r1@32
  int v41; // [sp+0h] [bp-A0h]@14
  Random *v42; // [sp+4h] [bp-9Ch]@2
  Random *v43; // [sp+4h] [bp-9Ch]@14
  int v44; // [sp+8h] [bp-98h]@15
  int v45; // [sp+Ch] [bp-94h]@16
  int v46; // [sp+10h] [bp-90h]@16
  int v47; // [sp+14h] [bp-8Ch]@14
  int v48; // [sp+18h] [bp-88h]@14
  int v49; // [sp+1Ch] [bp-84h]@18
  char v50; // [sp+1Ch] [bp-84h]@32
  int v51; // [sp+20h] [bp-80h]@18
  unsigned int v52; // [sp+20h] [bp-80h]@29
  int v53; // [sp+24h] [bp-7Ch]@15
  int v54; // [sp+24h] [bp-7Ch]@29
  signed int v55; // [sp+28h] [bp-78h]@4
  unsigned __int8 v56; // [sp+2Ch] [bp-74h]@4
  int v57; // [sp+30h] [bp-70h]@22
  int v58; // [sp+34h] [bp-6Ch]@22
  int v59; // [sp+38h] [bp-68h]@4
  int v60; // [sp+3Ch] [bp-64h]@4
  int v61; // [sp+40h] [bp-60h]@4
  int v62; // [sp+44h] [bp-5Ch]@3
  int v63; // [sp+48h] [bp-58h]@3
  int v64; // [sp+4Ch] [bp-54h]@3

  v4 = *((_DWORD *)a3 + 1);
  v5 = a2;
  v6 = this;
  if ( v4 < 4 )
  {
    result = 0;
  }
  else
    v7 = *(_DWORD *)a3;
    v8 = *((_DWORD *)a3 + 2);
    v42 = a4;
    while ( 1 )
    {
      v62 = v7;
      v9 = v4 - 1;
      v63 = v4 - 1;
      v64 = v8;
      if ( !BlockSource::isEmptyBlock(v5, (const BlockPos *)&v62) )
      {
        v55 = v4;
        v59 = v7;
        v60 = v4 - 1;
        v61 = v8;
        BlockSource::getBlockID((BlockSource *)&v56, v5, (int)&v59);
        if ( v56 == *(_BYTE *)(Block::mGrass + 4) )
          break;
        v10 = *(_BYTE *)(Block::mDirt + 4);
        _ZF = v56 == v10;
        if ( v56 != v10 )
          _ZF = v56 == *(_BYTE *)(Block::mStone + 4);
        if ( _ZF )
      }
      --v4;
      if ( v9 <= 3 )
        return 0;
    }
    v13 = *((_DWORD *)v6 + 4);
    result = 1;
    v14 = v42;
    v15 = v7;
    if ( v13 >= 0 )
      __asm
        VMOV.F32        S18, #0.5
        VLDR            S16, =0.333
      v19 = 0;
      do
        v48 = v15;
        v41 = v19;
        v43 = v14;
        v20 = v13 + (Random::_genRandInt32(v14) & 1);
        v21 = *((_DWORD *)v6 + 4);
        v22 = Random::_genRandInt32(v14) & 1;
        v23 = v14;
        v24 = *((_DWORD *)v6 + 4);
        v25 = v22 + v21;
        v26 = v22 + v21 + v20;
        v27 = Random::_genRandInt32(v23);
        v28 = v24;
        v29 = (v27 & 1) + v24;
        _R2 = v26 + v29;
        v31 = v15 - v20;
        __asm
        {
          VMOV            S0, R2
          VCVT.F32.S32    S0, S0
        }
        v47 = v15 + v20 + 1;
        if ( v15 - v20 != v47 )
          v44 = v55 - v25;
          v53 = v55 + v25 + 1;
          if ( v55 - v25 != v53 )
          {
            __asm { VMUL.F32        S0, S0, S16 }
            v46 = v8 - v29;
            v45 = v29 + v8 + 1;
            if ( v27 & 1 )
              ++v28;
            v51 = 2 * v28 | 1;
            v49 = -v28;
            __asm
            {
              VADD.F32        S0, S0, S18
              VMUL.F32        S20, S0, S0
            }
            do
              _R0 = v31 - v48;
              __asm
              {
                VMOV            S0, R0
                VCVT.F32.S32    S0, S0
              }
              if ( v46 != v45 )
                __asm { VMUL.F32        S22, S0, S0 }
                v33 = v44;
                do
                {
                  _R0 = v33 - v55;
                  __asm
                  {
                    VMOV            S0, R0
                    VCVT.F32.S32    S0, S0
                  }
                  v36 = v51;
                  _R9 = v49;
                    VMUL.F32        S0, S0, S0
                    VADD.F32        S24, S0, S22
                  do
                    __asm
                    {
                      VMOV            S0, R9
                      VCVT.F32.S32    S0, S0
                    }
                    *(_DWORD *)&v56 = v31;
                    v57 = v33;
                    v58 = v8 + _R9;
                      VMUL.F32        S0, S0, S0
                      VADD.F32        S0, S24, S0
                      VCMPE.F32       S0, S20
                      VMRS            APSR_nzcv, FPSCR
                    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                      Feature::_setBlockAndData(v6, v5, (const BlockPos *)&v56, (BlockBlobFeature *)((char *)v6 + 12));
                    --v36;
                    ++_R9;
                  while ( v36 );
                  ++v33;
                }
                while ( v33 != v53 );
              ++v31;
            while ( v31 != v47 );
          }
        v37 = *((_DWORD *)v6 + 4);
        if ( 2 * v37 == -2 )
          v54 = *((_DWORD *)v6 + 4);
          v52 = 0;
          v14 = v43;
        else
          v52 = Random::_genRandInt32(v43) % (2 * v37 + 2);
        v38 = Random::_genRandInt32(v14);
        v39 = *((_DWORD *)v6 + 4);
        if ( 2 * v39 == -2 )
          v50 = v38;
          v40 = 0;
          v13 = *((_DWORD *)v6 + 4);
          v40 = Random::_genRandInt32(v14) % (2 * v39 + 2);
        result = 1;
        v19 = v41 + 1;
        if ( v41 + 1 > 2 )
        v8 += ~v39 + v40;
        v55 -= v50 & 1;
        v15 = v48 + ~v54 + v52;
      while ( v13 > -1 );
  return result;
}
