

unsigned int __fastcall glm::detail::toFloat16(glm::detail *this, const float *a2)
{
  unsigned int v2; // r1@1
  int v3; // r12@1
  int v4; // r2@1
  unsigned int v5; // r0@1
  unsigned int result; // r0@4
  int v7; // r1@5
  signed int v8; // r0@9
  signed int v9; // ST00_4@16

  v2 = *(_DWORD *)this;
  v3 = (*(_DWORD *)this >> 16) & 0x8000;
  v4 = (*(_DWORD *)this >> 23) - 112;
  v5 = *(_DWORD *)this & 0x7FFFFF;
  if ( v4 > 0 )
  {
    if ( v4 == 143 )
    {
      if ( v5 )
      {
        v7 = v3 | (v5 >> 13);
        if ( !(v5 >> 13) )
          v7 |= 1u;
        result = v7 | 0x7C00;
      }
      else
        result = v3 | 0x7C00;
      return result;
    }
    if ( v2 & 0x1000 )
      v5 += 0x2000;
      if ( v5 & 0x800000 )
        v5 = 0;
        v4 = ((v2 >> 23) & 0xFF) - 111;
    if ( v4 >= 31 )
      v9 = 1343554297;
      __asm
        VLDR            S0, [SP,#4+var_4]
        VLDR            S2, [SP,#4+var_4]
        VMUL.F32        S0, S2, S0
        VSTR            S0, [SP,#4+var_4]
      return v3 | 0x7C00;
    return v3 | (v4 << 10) | (v5 >> 13);
  }
  if ( (v4 + 10 < 0) ^ __OFADD__(v4, 10) )
    return v3;
  v8 = (v5 | 0x800000) >> (113 - (v2 >> 23));
  if ( v8 & 0x1000 )
    v8 += 0x2000;
  return v3 | (v8 >> 13);
}


int __fastcall glm::inverse<float>(int a1, int a2)
{
  int result; // r0@1

  _R5 = a2;
  __asm
  {
    VLDR            S20, [R5,#4]
    VLDR            S16, [R5,#8]
    VLDR            S18, [R5,#0xC]
    VLDR            S22, [R5,#0x10]
    VLDR            S24, [R5,#0x14]
    VLDR            S17, [R5,#0x18]
    VLDR            S25, [R5,#0x1C]
    VLDR            S30, [R5]
    VLDR            S28, [R5,#0x20]
    VLDR            S26, [R5,#0x24]
    VLDR            S23, [R5,#0x28]
    VLDR            S27, [R5,#0x2C]
    VLDR            S29, [R5,#0x30]
    VLDR            S19, [R5,#0x34]
    VLDR            S21, [R5,#0x38]
    VLDR            S31, [R5,#0x3C]
  }
  result = _aeabi_memclr4(a1, 56);
    VMUL.F32        S0, S29, S27
    VLDR            S3, [R5,#0xC]
    VMUL.F32        S2, S28, S31
    VMUL.F32        S4, S27, S21
    VMUL.F32        S6, S31, S23
    VMUL.F32        S10, S26, S31
    VMUL.F32        S1, S26, S21
    VMUL.F32        S7, S28, S19
    VMUL.F32        S11, S22, S19
    VSUB.F32        S5, S2, S0
    VMUL.F32        S0, S29, S23
    VSUB.F32        S8, S6, S4
    VLDR            S6, [R5,#8]
    VMUL.F32        S2, S28, S21
    VMUL.F32        S4, S17, S5
    VSUB.F32        S9, S2, S0
    VMUL.F32        S2, S22, S8
    VSUB.F32        S2, S2, S4
    VMUL.F32        S4, S25, S9
    VADD.F32        S13, S2, S4
    VLDR            S2, [R5,#4]
    VLDR            S4, [R5]
    VMUL.F32        S12, S2, S13
    VMUL.F32        S2, S19, S27
    VNEG.F32        S13, S13
    VSUB.F32        S14, S10, S2
    VMUL.F32        S10, S24, S8
    VMUL.F32        S2, S17, S14
    VSUB.F32        S2, S10, S2
    VMUL.F32        S10, S19, S23
    VSUB.F32        S10, S1, S10
    VMUL.F32        S1, S25, S10
    VADD.F32        S0, S2, S1
    VMUL.F32        S4, S4, S0
    VSTR            S0, [SP,#0x68+var_54]
    VSUB.F32        S1, S4, S12
    VMUL.F32        S4, S24, S5
    VMUL.F32        S12, S22, S14
    VSUB.F32        S4, S12, S4
    VMUL.F32        S12, S29, S26
    VSUB.F32        S12, S7, S12
    VMUL.F32        S7, S25, S12
    VADD.F32        S0, S4, S7
    VMUL.F32        S7, S22, S10
    VMUL.F32        S6, S6, S0
    VSTR            S0, [SP,#0x68+var_58]
    VADD.F32        S6, S6, S1
    VMUL.F32        S1, S24, S9
    VSUB.F32        S1, S7, S1
    VMUL.F32        S7, S17, S12
    VADD.F32        S0, S1, S7
    VMUL.F32        S7, S24, S31
    VMUL.F32        S1, S22, S23
    VMUL.F32        S3, S3, S0
    VSTR            S0, [SP,#0x68+var_5C]
    VSUB.F32        S6, S6, S3
    VMUL.F32        S3, S19, S25
    VSUB.F32        S15, S7, S3
    VMUL.F32        S3, S29, S25
    VMUL.F32        S7, S22, S31
    VSUB.F32        S0, S7, S3
    VMUL.F32        S7, S30, S15
    VMUL.F32        S15, S16, S15
    VMUL.F32        S3, S20, S0
    VMUL.F32        S0, S16, S0
    VSUB.F32        S3, S7, S3
    VMUL.F32        S7, S29, S24
    VMUL.F32        S29, S29, S17
    VSUB.F32        S11, S11, S7
    VMUL.F32        S7, S18, S11
    VMUL.F32        S11, S16, S11
    VADD.F32        S2, S3, S7
    VMUL.F32        S3, S30, S14
    VMUL.F32        S7, S20, S5
    VMUL.F32        S14, S16, S14
    VMUL.F32        S5, S16, S5
    VSTR            S2, [SP,#0x68+var_60]
    VMUL.F32        S7, S18, S12
    VMUL.F32        S12, S16, S12
    VSUB.F32        S2, S3, S7
    VMUL.F32        S3, S25, S23
    VMUL.F32        S7, S17, S27
    VMUL.F32        S23, S24, S23
    VSTR            S2, [SP,#0x68+var_64]
    VMUL.F32        S2, S22, S27
    VMUL.F32        S27, S24, S27
    VSUB.F32        S7, S7, S3
    VMUL.F32        S3, S28, S25
    VMUL.F32        S4, S30, S7
    VSUB.F32        S2, S2, S3
    VMUL.F32        S7, S20, S7
    VMUL.F32        S3, S16, S2
    VMUL.F32        S2, S20, S2
    VSUB.F32        S4, S4, S3
    VMUL.F32        S3, S28, S17
    VSUB.F32        S1, S1, S3
    VMUL.F32        S3, S18, S1
    VADD.F32        S3, S4, S3
    VMUL.F32        S4, S17, S31
    VMUL.F32        S31, S25, S21
    VMUL.F32        S25, S26, S25
    VDIV.F32        S3, S3, S6
    VSUB.F32        S4, S4, S31
    VSUB.F32        S25, S27, S25
    VMUL.F32        S31, S30, S4
    VMUL.F32        S27, S16, S25
    VMUL.F32        S4, S20, S4
    VSUB.F32        S0, S0, S31
    VMUL.F32        S31, S22, S21
    VSUB.F32        S7, S27, S7
    VMUL.F32        S27, S26, S17
    VSUB.F32        S4, S4, S15
    VMUL.F32        S15, S19, S17
    VMUL.F32        S17, S24, S21
    VSUB.F32        S29, S31, S29
    VSUB.F32        S23, S23, S27
    VSUB.F32        S15, S17, S15
    VMUL.F32        S31, S18, S29
    VMUL.F32        S27, S18, S23
    VMUL.F32        S17, S18, S15
    VMUL.F32        S31, S30, S8
    VMUL.F32        S8, S20, S8
    VSUB.F32        S7, S7, S27
    VADD.F32        S4, S4, S17
    VDIV.F32        S0, S0, S6
    VSUB.F32        S8, S14, S8
    VMUL.F32        S14, S18, S10
    VSUB.F32        S5, S31, S5
    VMUL.F32        S31, S18, S9
    VMUL.F32        S9, S20, S9
    VMUL.F32        S10, S30, S10
    VDIV.F32        S4, S4, S6
    VSUB.F32        S8, S8, S14
    VMUL.F32        S14, S20, S1
    VMUL.F32        S1, S30, S23
    VSUB.F32        S10, S10, S9
    VMUL.F32        S9, S30, S25
    VADD.F32        S5, S5, S31
    VDIV.F32        S7, S7, S6
    VSUB.F32        S14, S1, S14
    VMUL.F32        S1, S30, S15
    VMUL.F32        S15, S20, S29
    VSUB.F32        S2, S2, S9
    VMUL.F32        S9, S28, S24
    VADD.F32        S10, S10, S12
    VDIV.F32        S8, S8, S6
    VSUB.F32        S1, S15, S1
    VMUL.F32        S15, S22, S26
    VDIV.F32        S5, S5, S6
    VSUB.F32        S9, S15, S9
    VSUB.F32        S12, S1, S11
    VLDR            S1, [SP,#0x68+var_54]
    VDIV.F32        S11, S13, S6
    VMUL.F32        S15, S16, S9
    VLDR            S13, [SP,#0x68+var_58]
    VMUL.F32        S9, S18, S9
    VLDR            S16, [SP,#0x68+var_60]
    VDIV.F32        S1, S1, S6
    VLDR            S9, [SP,#0x68+var_5C]
    VADD.F32        S14, S14, S15
    VLDR            S15, [SP,#0x68+var_64]
    VNEG.F32        S9, S9
    VSTR            S1, [R4]
    VDIV.F32        S13, S13, S6
    VDIV.F32        S15, S15, S6
    VDIV.F32        S16, S16, S6
    VDIV.F32        S2, S2, S6
    VDIV.F32        S9, S9, S6
    VDIV.F32        S10, S10, S6
    VDIV.F32        S12, S12, S6
    VDIV.F32        S6, S14, S6
    VSTR            S8, [R4,#4]
    VSTR            S4, [R4,#8]
    VSTR            S7, [R4,#0xC]
    VSTR            S11, [R4,#0x10]
    VSTR            S5, [R4,#0x14]
    VSTR            S0, [R4,#0x18]
    VSTR            S3, [R4,#0x1C]
    VSTR            S13, [R4,#0x20]
    VSTR            S15, [R4,#0x24]
    VSTR            S16, [R4,#0x28]
    VSTR            S2, [R4,#0x2C]
    VSTR            S9, [R4,#0x30]
    VSTR            S10, [R4,#0x34]
    VSTR            S12, [R4,#0x38]
    VSTR            S6, [R4,#0x3C]
  return result;
}


int __fastcall glm::rotate<float>(int a1, int a2, int _R2, int _R3)
{
  int v5; // r4@1
  int result; // r0@1

  _R5 = a2;
  v5 = a1;
  __asm
  {
    VLDR            S18, [R3]
    VLDR            S20, [R3,#4]
    VLDR            S22, [R3,#8]
    VLDR            S16, [R2]
  }
  _aeabi_memclr4(a1, 64);
    VLDR            S0, =0.017453
    VMUL.F32        S0, S16, S0
    VMOV            R6, S0
  _R0 = cosf(_R6);
    VMUL.F32        S0, S18, S18
    VMUL.F32        S2, S20, S20
    VMUL.F32        S4, S22, S22
    VMOV            S16, R0
    VADD.F32        S0, S2, S0
    VMOV.F32        S2, #1.0
    VADD.F32        S0, S0, S4
    VSUB.F32        S24, S2, S16
    VSQRT.F32       S0, S0
    VDIV.F32        S0, S2, S0
    VMUL.F32        S26, S0, S18
    VMUL.F32        S18, S0, S22
    VMUL.F32        S20, S0, S20
    VMUL.F32        S22, S26, S24
  _R0 = sinf(_R6);
    VMOV            S12, R0
    VLDR            S3, [R5,#0x18]
    VMUL.F32        S4, S22, S26
    VLDR            S7, [R5,#8]
    VMUL.F32        S14, S18, S12
    VLDR            S5, [R5,#4]
    VMUL.F32        S0, S22, S20
    VLDR            S9, [R5,#0x14]
    VMUL.F32        S1, S20, S12
    VLDR            S10, [R5]
    VMUL.F32        S12, S26, S12
    VLDR            S8, [R5,#0xC]
    VADD.F32        S4, S4, S16
    VADD.F32        S2, S0, S14
    VMUL.F32        S0, S22, S18
    VLDR            S22, [R5,#0x24]
    VMUL.F32        S11, S7, S4
    VMUL.F32        S30, S4, S10
    VMUL.F32        S6, S3, S2
    VSUB.F32        S15, S0, S1
    VMUL.F32        S0, S5, S4
    VMUL.F32        S13, S9, S2
    VMUL.F32        S4, S8, S4
    VADD.F32        S6, S6, S11
    VLDR            S11, [R5,#0x28]
    VADD.F32        S13, S13, S0
    VMUL.F32        S0, S11, S15
    VADD.F32        S0, S6, S0
    VMUL.F32        S6, S22, S15
    VADD.F32        S6, S13, S6
    VLDR            S13, [R5,#0x10]
    VMUL.F32        S28, S13, S2
    VADD.F32        S28, S28, S30
    VLDR            S30, [R5,#0x20]
    VMUL.F32        S17, S30, S15
    VADD.F32        S28, S28, S17
    VMUL.F32        S17, S18, S24
    VMUL.F32        S24, S20, S24
    VMUL.F32        S19, S17, S20
    VMUL.F32        S21, S17, S26
    VMUL.F32        S20, S24, S20
    VMUL.F32        S26, S24, S26
    VSUB.F32        S19, S19, S12
    VADD.F32        S1, S21, S1
    VLDR            S21, [R5,#0x1C]
    VADD.F32        S20, S20, S16
    VSUB.F32        S14, S26, S14
    VMUL.F32        S2, S21, S2
    VMUL.F32        S25, S21, S19
    VMUL.F32        S23, S8, S1
    VMUL.F32        S27, S3, S19
    VMUL.F32        S3, S3, S20
    VMUL.F32        S29, S9, S19
    VADD.F32        S2, S2, S4
    VMUL.F32        S4, S17, S18
    VMUL.F32        S19, S13, S19
    VADD.F32        S23, S25, S23
    VMUL.F32        S25, S7, S1
    VMUL.F32        S7, S7, S14
    VMUL.F32        S26, S8, S14
    VADD.F32        S25, S27, S25
    VMUL.F32        S27, S5, S1
    VADD.F32        S3, S3, S7
    VMUL.F32        S5, S5, S14
    VMUL.F32        S7, S9, S20
    VMUL.F32        S1, S10, S1
    VMUL.F32        S10, S10, S14
    VMUL.F32        S14, S13, S20
    VADD.F32        S27, S29, S27
    VADD.F32        S5, S7, S5
    VMUL.F32        S7, S24, S18
    VADD.F32        S1, S19, S1
    VMUL.F32        S19, S21, S20
    VADD.F32        S10, S14, S10
    VADD.F32        S12, S7, S12
    VLDR            S7, [R5,#0x2C]
    VSTR            S28, [R4]
    VMUL.F32        S8, S7, S4
    VSTR            S6, [R4,#4]
    VADD.F32        S26, S19, S26
    VSTR            S0, [R4,#8]
    VMUL.F32        S14, S7, S15
    VMUL.F32        S24, S11, S12
    VMUL.F32        S19, S7, S12
    VMUL.F32        S9, S22, S12
    VMUL.F32        S12, S30, S12
    VMUL.F32        S7, S11, S4
    VMUL.F32        S11, S22, S4
    VMUL.F32        S4, S30, S4
    VADD.F32        S2, S2, S14
    VADD.F32        S8, S23, S8
    VADD.F32        S3, S3, S24
    VADD.F32        S10, S10, S12
    VADD.F32        S12, S5, S9
    VADD.F32        S14, S27, S11
    VADD.F32        S4, S1, S4
    VADD.F32        S1, S25, S7
    VSTR            S2, [R4,#0xC]
    VADD.F32        S5, S26, S19
    VSTR            S10, [R4,#0x10]
    VSTR            S12, [R4,#0x14]
    VSTR            S3, [R4,#0x18]
    VSTR            S5, [R4,#0x1C]
    VSTR            S4, [R4,#0x20]
    VSTR            S14, [R4,#0x24]
    VSTR            S1, [R4,#0x28]
    VSTR            S8, [R4,#0x2C]
  *(_DWORD *)(v5 + 48) = *(_DWORD *)(_R5 + 48);
  *(_DWORD *)(v5 + 52) = *(_DWORD *)(_R5 + 52);
  *(_DWORD *)(v5 + 56) = *(_DWORD *)(_R5 + 56);
  result = *(_DWORD *)(_R5 + 60);
  *(_DWORD *)(v5 + 60) = result;
  return result;
}
