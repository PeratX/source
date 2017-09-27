

unsigned int __fastcall LightTexture::getColorForUV(int a1, int a2)
{
  float v11; // r1@7
  int v13; // r3@7
  unsigned int v16; // r1@7
  unsigned int result; // r0@7

  _R0 = *(_BYTE *)a2;
  LODWORD(_R1) = *(_BYTE *)(a2 + 1);
  __asm
  {
    VMOV.F32        S0, #-0.5
    VLDR            S16, =0.0
    VMOV            S4, R0
    VMOV            S2, R1
    VMOV.F32        S18, S16
    VCVT.F32.U32    S2, S2
    VCVT.F32.U32    S4, S4
    VADD.F32        S2, S2, S0
    VADD.F32        S0, S4, S0
    VCMPE.F32       S2, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !(_NF ^ _VF) )
    __asm
    {
      VMOV.F32        S4, #15.0
      VMOV.F32        S18, S2
      VCMPE.F32       S2, S4
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !(_NF ^ _VF) )
      __asm { VMOVGE.F32      S18, #14.0 }
    VCMPE.F32       S0, #0.0
      VMOV.F32        S2, #15.0
      VMOV.F32        S16, S0
      VCMPE.F32       S0, S2
      __asm { VMOVGE.F32      S16, #14.0 }
  __asm { VMOV            R0, S18 }
  _R5 = mce::Math::floor(_R0, _R1);
  __asm { VMOV            R0, S16 }
  _R0 = mce::Math::floor(_R0, v11);
  __asm { VMOV            S2, R5 }
  v13 = 16 * _R0 + 16;
    VCVT.F32.S32    S2, S2
    VMOV.F32        S0, #1.0
    VSUB.F32        S2, S18, S2
  _R2 = *(_DWORD *)(LightTexture::mLastUploadedData + 4 * (v13 + _R5 + 1));
  _R7 = *(_DWORD *)(LightTexture::mLastUploadedData + 4 * (_R5 + 16 * _R0));
  v16 = *(_DWORD *)(LightTexture::mLastUploadedData + 4 * (v13 + _R5));
  _R0 = *(_DWORD *)(LightTexture::mLastUploadedData + 4 * (_R5 + 1 + 16 * _R0));
  __asm { VCVT.F32.S32    S4, S4 }
  _R4 = (unsigned __int16)_R7 >> 8;
  _R12 = _R7;
  _R3 = _R0 >> 24;
  _R6 = (_R7 >> 16) & 0xFF;
  __asm { VMOV            S6, R3 }
  _R3 = _R2 >> 24;
  __asm { VMOV            S8, R3 }
  _R7 >>= 24;
  _R3 = (unsigned __int16)v16 >> 8;
    VMOV            S10, R7
    VCVT.F32.S32    S8, S8
  _R7 = (v16 >> 16) & 0xFF;
  __asm { VCVT.F32.S32    S10, S10 }
  _R5 = (unsigned __int8)v16;
    VCVT.F32.S32    S6, S6
    VMOV            S12, R7
  _R7 = (_R2 >> 16) & 0xFF;
    VMOV            S1, R6
    VMOV            S14, R7
    VCVT.F32.S32    S12, S12
    VCVT.F32.S32    S14, S14
  _R7 = (_R0 >> 16) & 0xFF;
    VCVT.F32.S32    S1, S1
    VMOV            S3, R7
    VMOV            S5, R3
    VCVT.F32.S32    S3, S3
  _R7 = (unsigned __int16)_R2 >> 8;
  __asm { VCVT.F32.S32    S5, S5 }
  _R2 = (unsigned __int8)_R2;
    VMOV            S7, R7
    VMOV            S9, R4
    VCVT.F32.S32    S7, S7
  _R3 = (unsigned __int16)_R0 >> 8;
  _R0 = (unsigned __int8)_R0;
    VMOV            S13, R5
    VMOV            S20, R0
  result = v16 >> 24;
    VMOV            S11, R3
    VMOV            S15, R2
    VMOV            S18, R12
    VMOV            S22, R0
    VSUB.F32        S24, S0, S2
    VCVT.F32.S32    S9, S9
    VCVT.F32.S32    S11, S11
    VCVT.F32.S32    S13, S13
    VCVT.F32.S32    S15, S15
    VCVT.F32.S32    S18, S18
    VCVT.F32.S32    S20, S20
    VCVT.F32.S32    S22, S22
    VSUB.F32        S4, S16, S4
    VMUL.F32        S11, S11, S2
    VMUL.F32        S9, S9, S24
    VMUL.F32        S15, S15, S2
    VMUL.F32        S13, S13, S24
    VMUL.F32        S16, S20, S2
    VMUL.F32        S18, S18, S24
    VMUL.F32        S7, S7, S2
    VMUL.F32        S5, S5, S24
    VMUL.F32        S3, S3, S2
    VMUL.F32        S1, S1, S24
    VMUL.F32        S14, S14, S2
    VMUL.F32        S12, S12, S24
    VMUL.F32        S6, S6, S2
    VMUL.F32        S10, S10, S24
    VMUL.F32        S2, S8, S2
    VMUL.F32        S8, S22, S24
    VSUB.F32        S0, S0, S4
    VADD.F32        S1, S3, S1
    VADD.F32        S12, S14, S12
    VADD.F32        S9, S11, S9
    VADD.F32        S5, S7, S5
    VADD.F32        S16, S16, S18
    VADD.F32        S2, S2, S8
    VADD.F32        S13, S15, S13
    VADD.F32        S6, S6, S10
    VMUL.F32        S1, S1, S0
    VMUL.F32        S14, S9, S0
    VMUL.F32        S3, S5, S4
    VMUL.F32        S8, S16, S0
    VMUL.F32        S12, S12, S4
    VMUL.F32        S10, S13, S4
    VMUL.F32        S0, S6, S0
    VMUL.F32        S2, S2, S4
    VADD.F32        S6, S3, S14
    VADD.F32        S4, S10, S8
    VADD.F32        S8, S12, S1
    VADD.F32        S0, S2, S0
    VLDR            S2, =0.0039216
    VMUL.F32        S4, S4, S2
    VMUL.F32        S8, S8, S2
    VMUL.F32        S0, S0, S2
    VSTR            S4, [R8]
    VSTR            S6, [R8,#4]
    VSTR            S8, [R8,#8]
    VSTR            S0, [R8,#0xC]
  return result;
}


void __fastcall LightTexture::refresh(int a1, int a2, int _R2, int _R3)
{
  signed int v10; // r5@15
  unsigned int v11; // r0@15
  unsigned int v12; // r6@15
  int v13; // r1@17
  int v16; // r0@17
  int v17; // r1@56
  int v18; // r4@56
  int v19; // r2@56
  int v20; // r3@56
  int v21; // r5@56
  int v22; // r6@56
  int v23; // r7@56
  int v24; // r0@56
  int v25; // r2@56
  int v26; // r3@56
  int v27; // r5@56
  int v28; // r6@56
  int v29; // r7@56
  float v31; // [sp+8h] [bp-78h]@55
  int v32; // [sp+14h] [bp-6Ch]@55

  _R4 = a2;
  _R9 = a1;
  __asm
  {
    VLDR            S0, [R4]
    VLDR            S6, [R9]
    VLDR            S2, [R4,#4]
    VLDR            S8, [R9,#4]
    VSUB.F32        S0, S6, S0
    VLDR            S4, [R4,#8]
    VSUB.F32        S2, S8, S2
    VLDR            S10, [R9,#8]
    VSUB.F32        S4, S10, S4
    VABS.F32        S0, S0
    VABS.F32        S2, S2
    VABS.F32        S4, S4
    VADD.F32        S0, S2, S0
    VADD.F32        S2, S0, S4
    VLDR            S0, =0.01
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    __asm
    {
      VLDR            S2, [R9,#0x18]
      VLDR            S4, [R4,#0x18]
      VSUB.F32        S2, S4, S2
      VABS.F32        S2, S2
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      if ( *(_DWORD *)(a2 + 16) == *(_DWORD *)(a1 + 16) )
      {
        __asm
        {
          VLDR            S2, [R9,#0x14]
          VLDR            S4, [R4,#0x14]
          VCMPE.F32       S4, S2
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _ZF )
          __asm
          {
            VLDR            S2, [R9,#0x1C]
            VLDR            S4, [R4,#0x1C]
            VSUB.F32        S2, S4, S2
            VABS.F32        S2, S2
            VCMPE.F32       S2, S0
            VMRS            APSR_nzcv, FPSCR
          }
          if ( _NF ^ _VF )
            if ( *(_BYTE *)(a2 + 32) == *(_BYTE *)(a1 + 32) )
            {
              if ( *(_BYTE *)(a2 + 32) )
              {
                __asm
                {
                  VLDRNE          S0, [R9,#0x24]
                  VLDRNE          S2, [R4,#0x24]
                  VCMPENE.F32     S2, S0
                  VMRSNE          APSR_nzcv, FPSCR
                }
              }
              else if ( *(_DWORD *)(a2 + 40) == *(_DWORD *)(a1 + 40) && *(_DWORD *)(a2 + 44) == *(_DWORD *)(a1 + 44) )
                return;
            }
      }
    VMOV            S0, R2
    VMOV            S16, R3
    VSTR            S0, [SP,#0x80+var_7C]
  v10 = 0;
  v11 = mce::TextureContainer::getImageData((mce::TextureContainer *)(*(_DWORD *)(a1 + 48) + 64), 0, 0);
    VLDR            S4, =-0.6
    VMOV.F32        S20, #1.0
    VLDR            S2, =0.95
    VMOV.F32        S18, #0.75
    VLDR            S0, [R4,#0x18]
    VMUL.F32        S4, S16, S4
    VLDR            S6, =0.05
    VMUL.F32        S2, S0, S2
    VLDR            S26, =1.6
    VLDR            S28, =0.3
    VLDR            S30, =0.96
  v12 = v11;
    VLDR            S17, =0.576
    VLDR            S19, =0.65
    VADD.F32        S22, S4, S20
    VLDR            S21, =0.4
    VLDR            S23, =0.64
    VADD.F32        S24, S2, S6
    VLDR            S25, =0.35
    VLDR            S27, =0.96
    VLDR            S29, =0.03
    VLDR            S31, =0.0
  while ( 1 )
    __asm { VLDR            S6, [R4,#0xC] }
    v13 = *(_DWORD *)(_R4 + 44);
      VMUL.F32        S10, S6, S28
      VLDR            S2, [R4]
    _R2 = v13 + 4 * (v10 / 16);
      VLDR            S4, [R4,#4]
      VMUL.F32        S0, S0, S19
    _R0 = v13 + 4 * (v10 - ((v10 + ((unsigned int)(v10 >> 31) >> 28)) & 0x3FFFFFF0));
      VLDR            S12, [R2]
      VLDR            S8, [R4,#8]
      VLDR            S6, [R0]
      VMUL.F32        S4, S4, S12
      VMUL.F32        S2, S2, S12
    v16 = *(_DWORD *)(_R4 + 40);
      VMUL.F32        S8, S8, S12
      VMUL.F32        S14, S12, S24
      VSUB.F32        S1, S20, S10
      VMUL.F32        S3, S6, S26
      VMUL.F32        S5, S6, S30
      VMUL.F32        S4, S4, S10
      VMUL.F32        S2, S2, S10
      VMUL.F32        S8, S8, S10
      VADD.F32        S0, S0, S25
      VMUL.F32        S14, S14, S1
      VMUL.F32        S1, S6, S17
      VMUL.F32        S10, S5, S3
      VADD.F32        S4, S14, S4
      VADD.F32        S2, S14, S2
      VADD.F32        S14, S14, S8
      VADD.F32        S8, S10, S21
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm
        VMOVGT.F32      S4, S12
        VMOVGT.F32      S2, S12
        VMOVGT.F32      S14, S12
      VADD.F32        S1, S1, S23
      VMUL.F32        S4, S4, S0
      VMUL.F32        S0, S2, S0
      VMUL.F32        S10, S8, S3
      VMUL.F32        S8, S1, S3
      VADD.F32        S0, S0, S3
      VADD.F32        S2, S10, S14
      VADD.F32        S4, S4, S8
    if ( _ZF )
        VMUL.F32        S2, S2, S27
        VMUL.F32        S4, S4, S27
        VMUL.F32        S0, S0, S27
        VADD.F32        S2, S2, S29
        VADD.F32        S4, S4, S29
        VADD.F32        S0, S0, S29
      VLDR            S12, [R4,#0x1C]
      VCMPE.F32       S12, #0.0
        VLDR            S14, [R9,#0x1C]
        VLDR            S1, [SP,#0x80+var_7C]
        VSUB.F32        S12, S12, S14
        VLDR            S3, =0.7
        VMUL.F32        S12, S12, S1
        VADD.F32        S12, S12, S14
        VLDR            S14, =0.6
        VMUL.F32        S14, S12, S14
        VSUB.F32        S1, S20, S12
        VMUL.F32        S12, S12, S3
        VADD.F32        S14, S1, S14
        VADD.F32        S12, S1, S12
        VMUL.F32        S2, S14, S2
        VMUL.F32        S4, S14, S4
        VMUL.F32        S0, S12, S0
    if ( *(_DWORD *)(_R4 + 16) )
        VLDR            S0, =1.2
        VMUL.F32        S2, S10, S18
        VMUL.F32        S4, S8, S18
        VMUL.F32        S0, S6, S0
        VLDR            S6, =0.22
        VADD.F32        S0, S0, S6
        VMOV.F32        S6, #0.25
        VADD.F32        S2, S2, S6
        VLDR            S6, =0.28
        VADD.F32        S4, S4, S6
      VCMPE.F32       S16, #0.0
        VMUL.F32        S2, S2, S22
        VMUL.F32        S4, S4, S22
        VMUL.F32        S0, S0, S22
        VADD.F32        S2, S2, S16
        VADD.F32        S4, S4, S16
        VADD.F32        S0, S0, S16
    if ( *(_BYTE *)(_R4 + 32) )
        VDIV.F32        S6, S20, S4
        VDIV.F32        S8, S20, S0
        VCMPE.F32       S8, S6
        VMRS            APSR_nzcv, FPSCR
        VDIV.F32        S10, S20, S2
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S8, S6 }
        VCMPE.F32       S8, S10
        __asm { VMOVGT.F32      S8, S10 }
        VLDR            S6, [R4,#0x24]
        VSUB.F32        S10, S20, S6
        VMUL.F32        S6, S6, S8
        VADD.F32        S6, S10, S6
        VMUL.F32        S2, S6, S2
        VMUL.F32        S4, S6, S4
      VCMPE.F32       S2, S20
      VCMPE.F32       S4, S20
      __asm { VMOVGT.F32      S2, S20 }
      VCMPE.F32       S0, S20
      VSUB.F32        S6, S20, S2
      VMUL.F32        S6, S6, S6
      __asm { VMOVGT.F32      S4, S20 }
      VSUB.F32        S8, S20, S4
      VSUB.F32        S6, S20, S6
      VMUL.F32        S8, S8, S8
      __asm { VMOVGT.F32      S0, S20 }
      VLDR            S12, [R4,#0x14]
      VSUB.F32        S10, S20, S0
      VSUB.F32        S14, S20, S12
      VSUB.F32        S8, S20, S8
      VMUL.F32        S6, S6, S12
      VMUL.F32        S10, S10, S10
      VMUL.F32        S2, S14, S2
      VMUL.F32        S4, S14, S4
      VMUL.F32        S14, S0, S14
      VADD.F32        S0, S6, S2
      VADD.F32        S2, S8, S4
      VSUB.F32        S10, S20, S10
      VMUL.F32        S10, S10, S12
      VADD.F32        S4, S10, S14
      VCMPE.F32       S4, #0.0
      VCMPE.F32       S2, #0.0
      __asm { VMOVLT.F32      S4, S31 }
      VCMPE.F32       S0, #0.0
      __asm { VMOVLT.F32      S2, S31 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVLT.F32      S0, S31 }
      VSTR            S4, [SP,#0x80+var_78]
      VSTR            S2, [SP,#0x80+var_74]
      VSTR            S0, [SP,#0x80+var_70]
    v32 = 1065353216;
    *(_DWORD *)(v12 + 4 * v10) = Color::toABGR((Color *)&v31);
    if ( v10 == 255 )
      break;
    ++v10;
    __asm { VLDR            S0, [R4,#0x18] }
  LightTexture::mLastUploadedData = v12;
  v17 = *(_DWORD *)_R4;
  v19 = *(_DWORD *)(_R4 + 4);
  v20 = *(_DWORD *)(_R4 + 8);
  v21 = *(_DWORD *)(_R4 + 12);
  v22 = *(_DWORD *)(_R4 + 16);
  v23 = *(_DWORD *)(_R4 + 20);
  v18 = _R4 + 24;
  *(_DWORD *)_R9 = v17;
  *(_DWORD *)(_R9 + 4) = v19;
  *(_DWORD *)(_R9 + 8) = v20;
  *(_DWORD *)(_R9 + 12) = v21;
  *(_DWORD *)(_R9 + 16) = v22;
  *(_DWORD *)(_R9 + 20) = v23;
  v24 = _R9 + 24;
  v25 = *(_DWORD *)(v18 + 4);
  v26 = *(_DWORD *)(v18 + 8);
  v27 = *(_DWORD *)(v18 + 12);
  v28 = *(_DWORD *)(v18 + 16);
  v29 = *(_DWORD *)(v18 + 20);
  *(_DWORD *)v24 = *(_DWORD *)v18;
  *(_DWORD *)(v24 + 4) = v25;
  *(_DWORD *)(v24 + 8) = v26;
  *(_DWORD *)(v24 + 12) = v27;
  *(_DWORD *)(v24 + 16) = v28;
  *(_DWORD *)(v24 + 20) = v29;
  TexturePair::sync(*(TexturePair **)(_R9 + 48));
}


void __fastcall LightTexture::refresh(int a1, int a2, int _R2, int _R3)
{
  LightTexture::refresh(a1, a2, _R2, _R3);
}


LightTexture *__fastcall LightTexture::LightTexture(LightTexture *this, TexturePair *a2)
{
  LightTexture *v2; // r4@1
  int v3; // r6@1
  TexturePair *v4; // r5@1
  unsigned int v5; // r0@1

  v2 = this;
  v3 = 0;
  v4 = a2;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 4) = 3;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_BYTE *)this + 32) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 12) = a2;
  v5 = mce::TextureContainer::getImageData((TexturePair *)((char *)a2 + 64), 0, 0);
  do
    *(_DWORD *)(v5 + 4 * v3++) = -65536;
  while ( v3 != 256 );
  TexturePair::sync(v4);
  return v2;
}
