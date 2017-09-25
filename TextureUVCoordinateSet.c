

void __fastcall TextureUVCoordinateSet::fromOldSystem(TextureUVCoordinateSet *this, int a2)
{
  TextureUVCoordinateSet::fromOldSystem(this, a2);
}


int __fastcall TextureUVCoordinateSet::offsetWidthPixel(TextureUVCoordinateSet *this, float _R1, float _R2)
{
  int v11; // r0@3
  int result; // r0@6

  _R3 = *((_WORD *)this + 10);
  __asm
  {
    VMOV            S18, R2
    VMOV            S22, R1
    VMOV            S0, R3
    VCVT.F32.U32    S24, S0
    VLDR            S16, [R0,#4]
    VLDR            S20, [R0,#0xC]
    VCMPE.F32       S20, S16
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm
    {
      VMUL.F32        S0, S24, S16
      VMOV            R0, S0
    }
    v11 = roundf(_R0);
    __asm { VMUL.F32        S0, S24, S20 }
    _R4 = v11;
  else
      VMUL.F32        S0, S24, S20
    _R4 = roundf(_R0);
    __asm { VMUL.F32        S0, S24, S16 }
  __asm { VMOV            R0, S0 }
  _R0 = roundf(_R0);
    VMOV            S0, R0
    VMOV            S2, R4
    VCVTR.S32.F32   S0, S0
    VCVTR.S32.F32   S2, S2
    VCMPE.F32       S18, #0.0
    VMOV            R0, S0
    VMOV            R1, S2
    VSUB.F32        S2, S20, S16
  _R0 = (unsigned __int16)(_R1 - _R0);
    VCVT.F32.U32    S0, S0
  if ( !_ZF )
    __asm { VMOVNE.F32      S16, S18 }
    VDIV.F32        S0, S22, S0
    VMUL.F32        S0, S2, S0
    VADD.F32        S0, S0, S16
  return result;
}


void __fastcall TextureUVCoordinateSet::getFlippedVertically(TextureUVCoordinateSet *this, int a2)
{
  TextureUVCoordinateSet *v3; // r9@1
  __int64 v4; // kr00_8@1
  int v5; // r5@1
  int v6; // r6@1
  int *v11; // r0@1
  void *v12; // r0@1
  unsigned int *v13; // r2@3
  signed int v14; // r1@5
  float v15; // [sp+0h] [bp-50h]@0
  int v16; // [sp+18h] [bp-38h]@1
  int v17; // [sp+1Ch] [bp-34h]@1

  _R4 = a2;
  v3 = this;
  v4 = *(_QWORD *)(a2 + 12);
  v5 = *(_DWORD *)(a2 + 20);
  v6 = *(_DWORD *)(a2 + 4);
  __asm { VLDR            S16, [R4,#8] }
  v11 = sub_119C854(&v16, (int *)(a2 + 24));
  v17 = *(_DWORD *)(_R4 + 28);
  __asm { VSTR            S16, [SP,#0x50+var_50] }
  TextureUVCoordinateSet::TextureUVCoordinateSet(
    *(float *)&v3,
    v6,
    SHIDWORD(v4),
    v4,
    v15,
    v5,
    SHIWORD(v5),
    (int)v11,
    1065353216);
  v12 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  }
}


void __fastcall TextureUVCoordinateSet::getFlippedHorizontal(TextureUVCoordinateSet *this, int a2)
{
  TextureUVCoordinateSet::getFlippedHorizontal(this, a2);
}


int __fastcall TextureUVCoordinateSet::offsetHeightPixel(TextureUVCoordinateSet *this, float _R1, float _R2)
{
  int v11; // r0@3
  int result; // r0@6

  _R3 = *((_WORD *)this + 11);
  __asm
  {
    VMOV            S18, R2
    VMOV            S22, R1
    VMOV            S0, R3
    VCVT.F32.U32    S24, S0
    VLDR            S16, [R0,#8]
    VLDR            S20, [R0,#0x10]
    VCMPE.F32       S20, S16
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm
    {
      VMUL.F32        S0, S24, S16
      VMOV            R0, S0
    }
    v11 = roundf(_R0);
    __asm { VMUL.F32        S0, S24, S20 }
    _R4 = v11;
  else
      VMUL.F32        S0, S24, S20
    _R4 = roundf(_R0);
    __asm { VMUL.F32        S0, S24, S16 }
  __asm { VMOV            R0, S0 }
  _R0 = roundf(_R0);
    VMOV            S0, R0
    VMOV            S2, R4
    VCVTR.S32.F32   S0, S0
    VCVTR.S32.F32   S2, S2
    VCMPE.F32       S18, #0.0
    VMOV            R0, S0
    VMOV            R1, S2
    VSUB.F32        S2, S20, S16
  _R0 = (unsigned __int16)(_R1 - _R0);
    VCVT.F32.U32    S0, S0
  if ( !_ZF )
    __asm { VMOVNE.F32      S16, S18 }
    VDIV.F32        S0, S22, S0
    VMUL.F32        S0, S2, S0
    VADD.F32        S0, S0, S16
  return result;
}


int __fastcall TextureUVCoordinateSet::TextureUVCoordinateSet(float a1, int a2, int a3, int a4, float a5, __int16 a6, __int16 a7, int a8, int a9)
{
  float v13; // r4@1
  int v14; // lr@1

  __asm { VLDR            S0, [SP,#0x10+arg_10] }
  v13 = a1;
  v14 = LODWORD(a1) + 4;
  __asm
  {
    VLDR            S2, [SP,#0x10+arg_0]
    VSTR            S0, [R4]
    VSTR            S2, [R4,#0x10]
  }
  *(_DWORD *)v14 = a2;
  *(_DWORD *)(v14 + 4) = a3;
  *(_DWORD *)(v14 + 8) = a4;
  *(_WORD *)(LODWORD(a1) + 20) = a6;
  *(_WORD *)(LODWORD(a1) + 22) = a7;
  sub_119C854((int *)(LODWORD(a1) + 24), (int *)a8);
  *(_DWORD *)(LODWORD(v13) + 28) = *(_DWORD *)(a8 + 4);
  return LODWORD(v13);
}


void __fastcall TextureUVCoordinateSet::offset(TextureUVCoordinateSet *this, float a2, int a3)
{
  TextureUVCoordinateSet *v4; // r4@1
  int v10; // r7@1
  void *v11; // r0@1
  unsigned int *v12; // r2@3
  signed int v13; // r1@5
  int v14; // [sp+0h] [bp-48h]@1
  int v15; // [sp+4h] [bp-44h]@1

  _R6 = a2;
  v4 = this;
  _R5 = a3;
  __asm
  {
    VLDR            S16, [R6,#8]
    VLDR            S18, [R6,#0xC]
    VLDR            S20, [R6,#0x10]
    VLDR            S22, [R6,#4]
  }
  v10 = *(_DWORD *)(LODWORD(a2) + 20);
  sub_119C854(&v14, (int *)(LODWORD(a2) + 24));
    VSUB.F32        S0, S18, S22
    VSUB.F32        S2, S20, S16
  v15 = *(_DWORD *)(LODWORD(_R6) + 28);
  __asm { VMOV            S4, R5 }
  *(_DWORD *)v4 = 1065353216;
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S4
    VADD.F32        S4, S0, S22
    VADD.F32        S6, S2, S16
    VADD.F32        S0, S0, S18
    VADD.F32        S2, S2, S20
    VSTR            S4, [R4,#4]
    VSTR            S6, [R4,#8]
    VSTR            S0, [R4,#0xC]
    VSTR            S2, [R4,#0x10]
  *((_WORD *)v4 + 10) = v10;
  *((_WORD *)v4 + 11) = HIWORD(v10);
  sub_119C854((int *)v4 + 6, &v14);
  *((_DWORD *)v4 + 7) = v15;
  v11 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
}


int __fastcall TextureUVCoordinateSet::inverseOffsetHeight(TextureUVCoordinateSet *this, float _R1, float _R2)
{
  int result; // r0@3

  __asm
  {
    VMOV            S4, R2
    VLDR            S0, [R0,#8]
    VLDR            S2, [R0,#0x10]
    VMOV            S6, R1
    VCMPE.F32       S4, #0.0
    VMRS            APSR_nzcv, FPSCR
    VSUB.F32        S0, S0, S2
    VMUL.F32        S0, S0, S6
  }
  if ( !_ZF )
    __asm { VMOVNE.F32      S2, S4 }
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  return result;
}


void __fastcall TextureUVCoordinateSet::subTexture(TextureUVCoordinateSet *this, float a2, float a3, int a4, int a5, int a6)
{
  TextureUVCoordinateSet::subTexture(this, a2, a3, a4, a5, a6);
}


int __fastcall TextureUVCoordinateSet::offsetHeight(TextureUVCoordinateSet *this, float _R1, float _R2)
{
  int result; // r0@3

  __asm
  {
    VMOV            S4, R2
    VLDR            S0, [R0,#8]
    VLDR            S2, [R0,#0x10]
    VMOV            S6, R1
    VCMPE.F32       S4, #0.0
    VMRS            APSR_nzcv, FPSCR
    VSUB.F32        S2, S2, S0
    VMUL.F32        S2, S2, S6
  }
  if ( !_ZF )
    __asm { VMOVNE.F32      S0, S4 }
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  return result;
}


void __fastcall TextureUVCoordinateSet::subTexture(TextureUVCoordinateSet *this, float a2, float a3, int a4, int a5, int a6)
{
  TextureUVCoordinateSet *v7; // r4@1
  unsigned int v14; // r7@1
  void *v17; // r0@1
  unsigned int *v18; // r2@3
  signed int v19; // r1@5
  int v20; // [sp+0h] [bp-40h]@1
  int v21; // [sp+4h] [bp-3Ch]@1

  _R6 = a2;
  v7 = this;
  _R9 = a4;
  _R5 = a3;
  __asm
  {
    VLDR            S16, [R6,#8]
    VLDR            S18, [R6,#4]
  }
  v14 = *(_DWORD *)(LODWORD(a2) + 20);
  sub_119C854(&v20, (int *)(LODWORD(a2) + 24));
  _R0 = (unsigned __int16)v14;
    VMOV.F32        S0, #1.0
    VMOV            S2, R0
  _R0 = v14 >> 16;
    VMOV            S4, R0
    VLDR            S8, [SP,#0x40+arg_4]
    VCVT.F32.U32    S2, S2
    VCVT.F32.U32    S4, S4
    VMOV            S6, R5
    VMOV            S10, R9
    VDIV.F32        S2, S0, S2
    VDIV.F32        S0, S0, S4
    VLDR            S4, [SP,#0x40+arg_0]
    VMUL.F32        S6, S2, S6
    VMUL.F32        S10, S0, S10
    VCVT.F32.S32    S4, S4
    VCVT.F32.S32    S8, S8
  v21 = *(_DWORD *)(LODWORD(_R6) + 28);
  *(_DWORD *)v7 = 1065353216;
    VMUL.F32        S2, S2, S4
    VADD.F32        S4, S6, S18
    VMUL.F32        S0, S0, S8
    VADD.F32        S6, S10, S16
    VADD.F32        S2, S4, S2
    VSTR            S4, [R4,#4]
    VADD.F32        S0, S6, S0
    VSTR            S6, [R4,#8]
    VSTR            S2, [R4,#0xC]
    VSTR            S0, [R4,#0x10]
  *((_WORD *)v7 + 10) = v14;
  *((_WORD *)v7 + 11) = HIWORD(v14);
  sub_119C854((int *)v7 + 6, &v20);
  *((_DWORD *)v7 + 7) = v21;
  v17 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v20 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    }
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
}


int __fastcall TextureUVCoordinateSet::TextureUVCoordinateSet(int result)
{
  *(_DWORD *)result = 1065353216;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 24) = (unsigned int)&unk_28898CC;
  return result;
}


TextureUVCoordinateSet *__fastcall TextureUVCoordinateSet::~TextureUVCoordinateSet(TextureUVCoordinateSet *this)
{
  TextureUVCoordinateSet *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5

  v1 = this;
  v2 = *((_DWORD *)this + 6);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  return v1;
}


int __fastcall TextureUVCoordinateSet::offsetWidth(TextureUVCoordinateSet *this, float _R1, float _R2)
{
  int result; // r0@3

  __asm
  {
    VMOV            S4, R2
    VLDR            S0, [R0,#4]
    VLDR            S2, [R0,#0xC]
    VMOV            S6, R1
    VCMPE.F32       S4, #0.0
    VMRS            APSR_nzcv, FPSCR
    VSUB.F32        S2, S2, S0
    VMUL.F32        S2, S2, S6
  }
  if ( !_ZF )
    __asm { VMOVNE.F32      S0, S4 }
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  return result;
}


int __fastcall TextureUVCoordinateSet::inverseOffsetWidth(TextureUVCoordinateSet *this, float _R1, float _R2)
{
  int result; // r0@3

  __asm
  {
    VMOV            S4, R2
    VLDR            S0, [R0,#4]
    VLDR            S2, [R0,#0xC]
    VMOV            S6, R1
    VCMPE.F32       S4, #0.0
    VMRS            APSR_nzcv, FPSCR
    VSUB.F32        S0, S0, S2
    VMUL.F32        S0, S0, S6
  }
  if ( !_ZF )
    __asm { VMOVNE.F32      S2, S4 }
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  return result;
}


void __fastcall TextureUVCoordinateSet::fromOldSystem(TextureUVCoordinateSet *this, int a2)
{
  TextureUVCoordinateSet *v2; // r4@1
  int v8; // r1@1
  char *v11; // r0@1
  unsigned int *v12; // r2@3
  signed int v13; // r1@5
  char *v14; // [sp+0h] [bp-20h]@1
  int v15; // [sp+4h] [bp-1Ch]@1

  v2 = this;
  _R0 = (a2 + ((unsigned int)(a2 >> 31) >> 28)) & 0xFFFFFFF0;
  __asm { VLDR            S8, =0.15 }
  v8 = a2 % 16;
  __asm
  {
    VLDR            S10, =-0.15
    VMOV            S0, R0
  }
  _R0 += 16;
  _R3 = 16 * v8;
  _R1 = 16 * v8 + 16;
    VMOV            S6, R0
    VMOV            S2, R3
    VMOV            S4, R1
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VCVT.F32.S32    S6, S6
  v14 = (char *)&unk_28898CC;
  v15 = 0;
  *(_DWORD *)v2 = 1065353216;
  __asm { VADD.F32        S0, S0, S8 }
  *((_DWORD *)v2 + 5) = 16777472;
    VADD.F32        S2, S2, S8
    VLDR            S8, =0.0039062
    VADD.F32        S4, S4, S10
    VADD.F32        S6, S6, S10
    VMUL.F32        S0, S0, S8
    VMUL.F32        S2, S2, S8
    VMUL.F32        S4, S4, S8
    VMUL.F32        S6, S6, S8
    VSTR            S2, [R4,#4]
    VSTR            S0, [R4,#8]
    VSTR            S4, [R4,#0xC]
    VSTR            S6, [R4,#0x10]
  sub_119C854((int *)v2 + 6, (int *)&v14);
  *((_DWORD *)v2 + 7) = v15;
  v11 = v14 - 12;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
}


void __fastcall TextureUVCoordinateSet::getFlippedHorizontal(TextureUVCoordinateSet *this, int a2)
{
  TextureUVCoordinateSet *v3; // r9@1
  int v4; // r7@1
  __int64 v5; // kr00_8@1
  int v6; // r5@1
  int *v11; // r0@1
  void *v12; // r0@1
  unsigned int *v13; // r2@3
  signed int v14; // r1@5
  float v15; // [sp+0h] [bp-50h]@0
  int v16; // [sp+18h] [bp-38h]@1
  int v17; // [sp+1Ch] [bp-34h]@1

  _R4 = a2;
  v3 = this;
  v4 = *(_DWORD *)(a2 + 12);
  v5 = *(_QWORD *)(a2 + 4);
  v6 = *(_DWORD *)(a2 + 20);
  __asm { VLDR            S16, [R4,#0x10] }
  v11 = sub_119C854(&v16, (int *)(a2 + 24));
  v17 = *(_DWORD *)(_R4 + 28);
  __asm { VSTR            S16, [SP,#0x50+var_50] }
  TextureUVCoordinateSet::TextureUVCoordinateSet(
    *(float *)&v3,
    v4,
    SHIDWORD(v5),
    v5,
    v15,
    v6,
    SHIWORD(v6),
    (int)v11,
    1065353216);
  v12 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  }
}


void __fastcall TextureUVCoordinateSet::getFlippedVertically(TextureUVCoordinateSet *this, int a2)
{
  TextureUVCoordinateSet::getFlippedVertically(this, a2);
}
