

    else if ( Random::_genRandInt32(v6) % 3 )
{
      v22 = *(_QWORD *)(a5 + 20);
      v11 = 1;
      v23 = HIDWORD(v22) + (HIDWORD(v22) >> 31);
      v24 = *(_QWORD *)(a5 + 20) + ((unsigned int)v22 >> 31);
      v25 = 1;
      if ( (signed int)*(_QWORD *)(a5 + 20) / 2 > 1 )
        v11 = v24 >> 1;
      if ( v23 >> 1 > 1 )
        v25 = v23 >> 1;
      if ( v25 >= v11 )
      {
        v26 = v25 + 1;
        if ( v26 == v11 )
          v27 = 0;
        else
          v27 = Random::_genRandInt32(v6) % (v26 - v11);
        v11 += v27;
      }
      if ( v11 <= 0 )
        v11 = 0;
    }
    else
    {
      v11 = 0;
  }
  return v11;
}


unsigned int __fastcall Random::_genRandInt32(Random *this)
{
  Random *v1; // r4@1
  signed int v2; // r0@1
  signed int v3; // r0@2
  int v4; // r12@2
  int v5; // r1@2
  int v6; // r0@7
  signed int v7; // r0@7
  int v8; // r0@9
  int v9; // r0@9
  int v11; // r0@12

  v1 = this;
  Random::_checkThreadId(this);
  v2 = *((_DWORD *)v1 + 625);
  if ( v2 > 624 )
  {
    v3 = 2;
    v4 = (int)v1 + 4;
    *((_DWORD *)v1 + 625) = 2;
    *(_DWORD *)v4 = 5489;
    *(_DWORD *)(v4 + 4) = 1301868182;
    *(_DWORD *)(v4 + 8) = -1356468075;
    v5 = 3;
    *((_DWORD *)v1 + 625) = 3;
    do
    {
      *((_DWORD *)v1 + v5 + 1) = v5 + 1812433253 * (*((_DWORD *)v1 + v3 + 1) ^ (*((_DWORD *)v1 + v3 + 1) >> 30));
      v3 = *((_DWORD *)v1 + 625);
      v5 = v3 + 1;
      *((_DWORD *)v1 + 625) = v3 + 1;
    }
    while ( v3 + 1 < 624 );
    *((_DWORD *)v1 + 628) = 624;
    goto LABEL_6;
  }
  if ( v2 == 624 )
LABEL_6:
    v2 = 0;
    *((_DWORD *)v1 + 625) = 0;
    goto LABEL_7;
  if ( v2 > 226 )
    if ( v2 > 622 )
      *((_DWORD *)v1 + 624) = dword_260F9F8[*((_DWORD *)v1 + 1) & 1] ^ *((_DWORD *)v1 + 397) ^ ((*((_DWORD *)v1 + 624) & 0x80000000 | *((_DWORD *)v1 + 1) & 0x7FFFFFFE) >> 1);
    else
      v11 = (int)v1 + 4 * v2;
      *(_DWORD *)(v11 + 4) = *(_DWORD *)(v11 - 904) ^ dword_260F9F8[(*(_QWORD *)(v11 + 4) >> 32) & 1] ^ (((*(_QWORD *)(v11 + 4) >> 32) & 0x7FFFFFFE | (unsigned int)*(_QWORD *)(v11 + 4) & 0x80000000) >> 1);
    goto LABEL_9;
LABEL_7:
  v6 = (int)v1 + 4 * v2;
  *(_DWORD *)(v6 + 4) = dword_260F9F8[(*(_QWORD *)(v6 + 4) >> 32) & 1] ^ *(_DWORD *)(v6 + 1592) ^ (((*(_QWORD *)(v6 + 4) >> 32) & 0x7FFFFFFE | (unsigned int)*(_QWORD *)(v6 + 4) & 0x80000000) >> 1);
  v7 = *((_DWORD *)v1 + 628);
  if ( v7 < 624 )
    *((_DWORD *)v1 + v7 + 1) = v7 + 1812433253 * (*((_DWORD *)v1 + v7) ^ (*((_DWORD *)v1 + v7) >> 30));
    ++*((_DWORD *)v1 + 628);
LABEL_9:
  v8 = *((_DWORD *)v1 + 625);
  *((_DWORD *)v1 + 625) = v8 + 1;
  v9 = *((_DWORD *)v1 + v8 + 1) ^ (*((_DWORD *)v1 + v8 + 1) >> 11);
  return v9 ^ (v9 << 7) & 0x9D2C5680 ^ ((v9 ^ (v9 << 7) & 0x9D2C5680) << 15) & 0xEFC60000 ^ ((v9 ^ (v9 << 7) & 0x9D2C5680 ^ ((v9 ^ (v9 << 7) & 0x9D2C5680) << 15) & 0xEFC60000) >> 18);
}


int __fastcall Random::nextGaussian(Random *this)
{
  Random *v1; // r4@1
  int result; // r0@8

  v1 = this;
  Random::_checkThreadId(this);
  if ( *((_BYTE *)v1 + 2504) )
  {
    *((_BYTE *)v1 + 2504) = 0;
    _R0 = (int)v1 + 2508;
    __asm { VLDR            S0, [R0] }
  }
  else
    __asm
    {
      VMOV.F32        S18, #-1.0
      VLDR            D8, =2.32830644e-10
      VMOV.F32        S20, #1.0
    }
    do
      do
      {
        _R0 = Random::_genRandInt32(v1);
        __asm
        {
          VMOV            S0, R0
          VCVT.F64.U32    D11, S0
        }
          VMUL.F64        D1, D11, D8
          VCVT.F64.U32    D0, S0
          VMUL.F64        D0, D0, D8
          VCVT.F32.F64    S2, D1
          VCVT.F32.F64    S0, D0
          VADD.F32        S2, S2, S2
          VADD.F32        S0, S0, S0
          VADD.F32        S22, S2, S18
          VADD.F32        S24, S0, S18
          VMUL.F32        S0, S22, S22
          VMUL.F32        S2, S24, S24
          VADD.F32        S26, S2, S0
          VCMPE.F32       S26, S20
          VMRS            APSR_nzcv, FPSCR
      }
      while ( !(_NF ^ _VF) );
      __asm
        VCMPE.F32       S26, #0.0
        VMRS            APSR_nzcv, FPSCR
    while ( _ZF );
    __asm { VMOV            R0, S26 }
    _R0 = logf(_R0);
      VMOV.F32        S0, #-2.0
      VMOV            S2, R0
      VMUL.F32        S0, S2, S0
      VDIV.F32        S0, S0, S26
      VSQRT.F32       S0, S0
      VMUL.F32        S2, S0, S24
      VMUL.F32        S0, S0, S22
      VSTR            S2, [R0]
    *((_BYTE *)v1 + 2504) = 1;
  __asm { VMOV            R0, S0 }
  return result;
}
