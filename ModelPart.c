

char *__fastcall ModelPart::addChild(ModelPart *this, ModelPart *a2)
{
  ModelPart *v2; // r4@1
  ModelPart *v3; // r8@1
  __int64 v4; // r0@1
  char *result; // r0@2
  void *v6; // r5@3
  unsigned int v7; // r2@3
  unsigned int v8; // r1@5
  unsigned int v9; // r6@5
  char *v10; // r7@11 OVERLAPPED
  char *v11; // r8@13
  int v12; // r8@15 OVERLAPPED

  v2 = this;
  v3 = a2;
  v4 = *((_QWORD *)this + 9);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v6 = (void *)*((_DWORD *)v2 + 17);
    v7 = ((signed int)v4 - (signed int)v6) >> 2;
    if ( !v7 )
      v7 = 1;
    HIDWORD(v4) = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    v9 = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    if ( 0 != HIDWORD(v4) >> 30 )
      v9 = 0x3FFFFFFF;
    if ( v8 < v7 )
    if ( v9 )
    {
      if ( v9 >= 0x40000000 )
        sub_21E57F4();
      v10 = (char *)operator new(4 * v9);
      LODWORD(v4) = *(_QWORD *)((char *)v2 + 68) >> 32;
      v6 = (void *)*(_QWORD *)((char *)v2 + 68);
    }
    else
      v10 = 0;
    *(_DWORD *)&v10[v4 - (_DWORD)v6] = v3;
    v11 = &v10[v4 - (_DWORD)v6];
    if ( 0 != ((signed int)v4 - (signed int)v6) >> 2 )
      _aeabi_memmove4(v10, v6);
    v12 = (int)(v11 + 4);
    if ( v6 )
      operator delete(v6);
    result = &v10[4 * v9];
    *(_QWORD *)((char *)v2 + 68) = *(_QWORD *)&v10;
    *((_DWORD *)v2 + 19) = result;
  }
  else
    *(_DWORD *)v4 = v3;
    result = (char *)(*((_DWORD *)v2 + 18) + 4);
    *((_DWORD *)v2 + 18) = result;
  return result;
}


int __fastcall ModelPart::mimic(int result, const ModelPart *a2)
{
  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)(result + 4) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 8) = *((_DWORD *)a2 + 2);
  *(_DWORD *)(result + 36) = *((_DWORD *)a2 + 9);
  *(_DWORD *)(result + 40) = *((_DWORD *)a2 + 10);
  *(_DWORD *)(result + 44) = *((_DWORD *)a2 + 11);
  *(_DWORD *)(result + 24) = *((_DWORD *)a2 + 6);
  *(_DWORD *)(result + 28) = *((_DWORD *)a2 + 7);
  *(_DWORD *)(result + 32) = *((_DWORD *)a2 + 8);
  return result;
}


int __fastcall ModelPart::addBoxMapTexColor(int a1, int a2, float a3, _QWORD *a4, int a5, const Color *a6, int a7)
{
  int v7; // r4@1
  float v13; // [sp+0h] [bp-10h]@0

  v7 = a1;
  *(_QWORD *)(a1 + 92) = *a4;
  __asm { VLDR            S0, [SP,#0x10+arg_8] }
  *(_BYTE *)(a1 + 216) = 1;
  __asm { VSTR            S0, [SP,#0x10+var_10] }
  ModelPart::addBox((ModelPart *)a1, (const Vec3 *)a2, (const Vec3 *)LODWORD(a3), a5, v13, a6);
  return v7;
}


signed int __fastcall ModelPart::load(int a1, int a2, const void **a3, int a4)
{
  int v4; // r11@1
  int v5; // r8@1
  const void **v7; // r6@1
  __int64 v8; // kr00_8@1
  void **v9; // r4@2
  __int64 v19; // r0@8
  signed int result; // r0@10
  void *v21; // r8@11
  unsigned int v22; // r2@11
  unsigned int v23; // r1@13
  unsigned int v24; // r7@13
  char *v25; // r9@19
  char *v26; // r5@21
  int v27; // r6@26
  __int64 v29; // kr10_8@26
  float v30; // r1@27
  float v31; // r2@27
  int v32; // r3@27
  float v33; // [sp+0h] [bp-58h]@0
  float v34; // [sp+8h] [bp-50h]@27
  float v35; // [sp+Ch] [bp-4Ch]@27
  float v36; // [sp+10h] [bp-48h]@27

  v4 = a1;
  v5 = a2;
  *(_BYTE *)(a1 + 52) = 0;
  _R10 = a4;
  v7 = a3;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)&Vec3::ZERO;
  *(_DWORD *)(a1 + 32) = dword_2822498;
  v8 = *(_QWORD *)(a1 + 56);
  if ( HIDWORD(v8) != (_DWORD)v8 )
  {
    v9 = (void **)v8;
    do
    {
      if ( *v9 )
        operator delete(*v9);
      v9 += 47;
    }
    while ( (void **)HIDWORD(v8) != v9 );
  }
  *(_DWORD *)(v4 + 60) = v8;
  mce::Mesh::reset((mce::Mesh *)(v4 + 104));
  _R6 = Geometry::getNode(*(_DWORD *)(v5 + 4), v7);
  if ( _R6 )
    __asm { VLDR            S0, =0.0055556 }
    _R0 = &mce::Math::PI;
    __asm { VLDR            S2, [R0] }
    _R0 = *(_DWORD *)(_R6 + 4);
    *(_DWORD *)v4 = _R0;
    __asm { VMUL.F32        S0, S2, S0 }
    _R2 = *(_DWORD *)(_R6 + 8);
    *(_DWORD *)(v4 + 4) = _R2;
    __asm { VMOV            S18, R0 }
    _R1 = *(_DWORD *)(_R6 + 12);
    *(_DWORD *)(v4 + 8) = _R1;
    __asm
      VMOV            S16, R2
      VLDR            S2, [R6,#0x10]
      VLDR            S4, [R6,#0x14]
      VMOV            S20, R1
      VLDR            S6, [R6,#0x18]
      VMUL.F32        S2, S2, S0
      VMUL.F32        S4, S4, S0
      VMUL.F32        S0, S6, S0
      VMOV.F32        S6, #24.0
      VSTR            S2, [R11,#0x24]
      VSTR            S4, [R11,#0x28]
      VSTR            S0, [R11,#0x2C]
      VSUB.F32        S0, S6, S16
    *(_BYTE *)(v4 + 52) = *(_BYTE *)_R6;
    *(_BYTE *)(v4 + 53) = 1;
    *(_QWORD *)(v4 + 80) = *(_QWORD *)(*(_DWORD *)(v5 + 4) + 4);
    *(_BYTE *)(v4 + 100) = *(_BYTE *)(_R6 + 1);
    __asm { VSTR            S0, [R11,#4] }
    *(_DWORD *)(v4 + 204) = _R0;
    __asm { VSTR            S0, [R11,#0xD0] }
    *(_DWORD *)(v4 + 212) = _R1;
    *(_DWORD *)(v4 + 12) = _R0;
    __asm { VSTR            S0, [R11,#0x10] }
    *(_DWORD *)(v4 + 20) = _R1;
    if ( !_ZF )
      __asm
      {
        VLDR            S2, [R10,#0xC]
        VLDR            S4, [R10,#0x10]
        VLDR            S6, [R10,#0x14]
        VSUB.F32        S2, S18, S2
        VSUB.F32        S0, S0, S4
        VSUB.F32        S4, S20, S6
        VSTR            S2, [R11]
        VSTR            S0, [R11,#4]
        VSTR            S4, [R11,#8]
      }
      v19 = *(_QWORD *)(_R10 + 72);
      if ( (_DWORD)v19 == HIDWORD(v19) )
        v21 = *(void **)(_R10 + 68);
        v22 = ((signed int)v19 - (signed int)v21) >> 2;
        if ( !v22 )
          v22 = 1;
        HIDWORD(v19) = v22 + (((signed int)v19 - (signed int)v21) >> 2);
        v24 = v22 + (((signed int)v19 - (signed int)v21) >> 2);
        if ( 0 != HIDWORD(v19) >> 30 )
          v24 = 0x3FFFFFFF;
        if ( v23 < v22 )
        if ( v24 )
        {
          if ( v24 >= 0x40000000 )
            sub_21E57F4();
          v25 = (char *)operator new(4 * v24);
          LODWORD(v19) = *(_QWORD *)(_R10 + 68) >> 32;
          v21 = (void *)*(_QWORD *)(_R10 + 68);
        }
        else
          v25 = 0;
        v26 = &v25[v19 - (_DWORD)v21];
        *(_DWORD *)&v25[v19 - (_DWORD)v21] = v4;
        if ( 0 != ((signed int)v19 - (signed int)v21) >> 2 )
          _aeabi_memmove4(v25, v21);
        if ( v21 )
          operator delete(v21);
        *(_DWORD *)(_R10 + 68) = v25;
        *(_DWORD *)(_R10 + 72) = v26 + 4;
        *(_DWORD *)(_R10 + 76) = &v25[4 * v24];
      else
        *(_DWORD *)v19 = v4;
        *(_DWORD *)(_R10 + 72) += 4;
    v29 = *(_QWORD *)(_R6 + 32);
    v27 = *(_QWORD *)(_R6 + 32) >> 32;
    for ( _R7 = v29; v27 != _R7; _R7 += 40 )
      v30 = *(float *)(_R7 + 8);
      v31 = *(float *)(_R7 + 12);
      v34 = *(float *)(_R7 + 4);
      v35 = v30;
      v36 = v31;
        VLDR            S0, [SP,#0x58+var_50]
        VLDR            S2, [SP,#0x58+var_4C]
        VSUB.F32        S0, S0, S18
        VLDR            S4, [R7,#0x14]
        VADD.F32        S2, S2, S4
        VSTR            S0, [SP,#0x58+var_50]
        VLDR            S0, [SP,#0x58+var_48]
        VSUB.F32        S2, S16, S2
        VSUB.F32        S0, S0, S20
        VSTR            S0, [SP,#0x58+var_48]
        VSTR            S2, [SP,#0x58+var_4C]
      v32 = *(_BYTE *)_R7;
      __asm { VLDR            S0, [R7,#0x24] }
      *(_QWORD *)(v4 + 92) = *(_QWORD *)(_R7 + 28);
      __asm { VSTR            S0, [SP,#0x58+var_58] }
      ModelPart::addBox(
        (ModelPart *)v4,
        (const Vec3 *)&v34,
        (const Vec3 *)(_R7 + 16),
        v32,
        v33,
        (const Color *)&Color::WHITE);
    result = 1;
  else
    result = 0;
  return result;
}


int __fastcall ModelPart::ModelPart(float a1, int a2, int a3, int a4, int a5)
{
  int v5; // r6@1
  int v7; // r8@1
  float v8; // r7@1
  int v13; // r4@1
  int v14; // r0@1

  v5 = a2;
  _R5 = a4;
  v7 = a3;
  v8 = a1;
  _aeabi_memclr4(LODWORD(a1), 48);
  __asm
  {
    VMOV            S2, R5
    VLDR            S0, [SP,#0x18+arg_0]
    VCVT.F32.S32    S2, S2
  }
  *(_DWORD *)(LODWORD(v8) + 48) = 1065353216;
  __asm { VCVT.F32.S32    S0, S0 }
  *(_WORD *)(LODWORD(v8) + 52) = 256;
  *(_DWORD *)(LODWORD(v8) + 56) = 0;
  v13 = LODWORD(v8) + 56;
  v14 = LODWORD(v8) + 88;
  *(_DWORD *)(v13 + 20) = 0;
  *(_DWORD *)(v13 + 12) = 0;
  *(_DWORD *)(v13 + 16) = 0;
  *(_DWORD *)(v13 + 4) = 0;
  *(_DWORD *)(v13 + 8) = 0;
    VSTR            S2, [R4,#0x18]
    VSTR            S0, [R4,#0x1C]
  *(_DWORD *)v14 = 0;
  *(_DWORD *)(v14 + 4) = v5;
  *(_DWORD *)(v14 + 8) = v7;
  *(_BYTE *)(v13 + 44) = 0;
  mce::Mesh::Mesh((mce::Mesh *)(LODWORD(v8) + 104));
  *(_BYTE *)(LODWORD(v8) + 216) = 0;
  *(_DWORD *)(LODWORD(v8) + 204) = 0;
  *(_DWORD *)(LODWORD(v8) + 208) = 0;
  *(_DWORD *)(LODWORD(v8) + 212) = 0;
  mce::Mesh::reset((mce::Mesh *)(LODWORD(v8) + 104));
  return LODWORD(v8);
}


int __fastcall ModelPart::addBoxMapTex(int a1, float a2, const Vec3 *a3, _QWORD *a4, int a5, int a6)
{
  int v6; // r4@1
  float v12; // [sp+0h] [bp-10h]@0

  v6 = a1;
  *(_QWORD *)(a1 + 92) = *a4;
  __asm
  {
    VLDR            S0, [SP,#0x10+arg_4]
    VSTR            S0, [SP,#0x10+var_10]
  }
  ModelPart::addBox((ModelPart *)a1, (const Vec3 *)LODWORD(a2), a3, a5, v12, (const Color *)&Color::WHITE);
  return v6;
}


int __fastcall ModelPart::translateTo(int result, int a2, int _R2)
{
  float v9; // r0@2
  float v18; // [sp+0h] [bp-C0h]@2
  int v19; // [sp+4h] [bp-BCh]@2
  int v20; // [sp+8h] [bp-B8h]@2
  int v21; // [sp+Ch] [bp-B4h]@2
  int v22; // [sp+18h] [bp-A8h]@2
  int v23; // [sp+1Ch] [bp-A4h]@2
  int v24; // [sp+20h] [bp-A0h]@2
  int v25; // [sp+2Ch] [bp-94h]@2
  int v26; // [sp+30h] [bp-90h]@2
  int v27; // [sp+34h] [bp-8Ch]@2
  int v28; // [sp+38h] [bp-88h]@2
  int v29; // [sp+3Ch] [bp-84h]@2
  int v30; // [sp+40h] [bp-80h]@2
  int v31; // [sp+44h] [bp-7Ch]@2
  int v32; // [sp+48h] [bp-78h]@2
  int v33; // [sp+4Ch] [bp-74h]@2
  int v34; // [sp+50h] [bp-70h]@2
  int v35; // [sp+54h] [bp-6Ch]@2
  int v36; // [sp+58h] [bp-68h]@2
  int v37; // [sp+5Ch] [bp-64h]@2
  int v38; // [sp+60h] [bp-60h]@2
  int v39; // [sp+64h] [bp-5Ch]@2
  int v40; // [sp+68h] [bp-58h]@2
  int v41; // [sp+6Ch] [bp-54h]@2
  int v42; // [sp+70h] [bp-50h]@2
  int v43; // [sp+74h] [bp-4Ch]@2
  int v44; // [sp+78h] [bp-48h]@2
  int v45; // [sp+7Ch] [bp-44h]@2

  __asm
  {
    VLDR            S0, [R0]
    VMOV            S6, R2
    VLDR            S2, [R0,#4]
  }
  _R4 = a2;
    VMUL.F32        S0, S0, S6
    VLDR            S4, [R0,#8]
    VMUL.F32        S2, S2, S6
    VLDR            S8, [R4]
    VLDR            S10, [R4,#4]
    VMUL.F32        S4, S4, S6
    VLDR            S1, [R4,#0x10]
    VLDR            S14, [R4,#0xC]
    VLDR            S3, [R4,#0x18]
    VLDR            S12, [R4,#8]
    VMUL.F32        S6, S8, S0
    VLDR            S8, [R4,#0x14]
    VMUL.F32        S1, S1, S2
    VLDR            S5, [R4,#0x1C]
    VMUL.F32        S10, S10, S0
    VLDR            S7, [R4,#0x20]
    VMUL.F32        S8, S8, S2
    VMUL.F32        S14, S14, S0
    VMUL.F32        S0, S12, S0
    VLDR            S12, [R4,#0x24]
    VMUL.F32        S3, S3, S2
    VMUL.F32        S2, S5, S2
    VMUL.F32        S5, S7, S4
    VLDR            S7, [R4,#0x28]
    VADD.F32        S6, S1, S6
    VADD.F32        S8, S8, S10
    VLDR            S10, [R4,#0x2C]
    VMUL.F32        S12, S12, S4
    VMUL.F32        S1, S7, S4
    VADD.F32        S0, S3, S0
    VMUL.F32        S4, S10, S4
    VLDR            S10, [R4,#0x34]
    VADD.F32        S2, S2, S14
    VADD.F32        S6, S6, S5
    VADD.F32        S8, S8, S12
    VLDR            S12, [R4,#0x38]
    VADD.F32        S0, S0, S1
    VADD.F32        S2, S2, S4
    VLDR            S4, [R4,#0x30]
    VADD.F32        S4, S6, S4
    VLDR            S6, [R4,#0x3C]
    VADD.F32        S0, S0, S12
    VADD.F32        S2, S2, S6
    VSTR            S4, [R4,#0x30]
    VSTR            S8, [R4,#0x34]
    VSTR            S0, [R4,#0x38]
    VSTR            S2, [R4,#0x3C]
    VLDR            S4, [R0,#0x24]
    VLDR            S0, [R0,#0x28]
    VMUL.F32        S6, S4, S4
    VLDR            S2, [R0,#0x2C]
    VMUL.F32        S8, S0, S0
    VMUL.F32        S10, S2, S2
    VADD.F32        S6, S8, S6
    VLDR            S8, =0.0001
    VADD.F32        S6, S6, S10
    VCMPE.F32       S6, S8
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm
    {
      VMOV.F32        S6, #0.5
      VMUL.F32        S4, S4, S6
      VMUL.F32        S16, S0, S6
      VMUL.F32        S18, S2, S6
      VMOV            R5, S4
    }
    v9 = cosf(_R5);
    __asm { VMOV            R7, S16 }
    _R8 = v9;
    _R0 = cosf(_R7);
      VMOV            R6, S18
      VMOV            S18, R0
      VMOV            S16, R8
    _R0 = sinf(_R5);
    __asm { VMOV            S20, R0 }
    _R0 = sinf(_R7);
      VMOV            S0, R0
      VMUL.F32        S22, S20, S18
      VMUL.F32        S24, S0, S16
      VMUL.F32        S20, S0, S20
      VMUL.F32        S16, S18, S16
    _R5 = cosf(_R6);
    _R0 = sinf(_R6);
      VMOV            S2, R5
      VMUL.F32        S4, S0, S22
    v20 = 0;
    __asm { VMUL.F32        S6, S24, S2 }
    v19 = 0;
    __asm { VMUL.F32        S8, S20, S2 }
    v24 = 0;
      VMUL.F32        S12, S16, S2
      VMUL.F32        S10, S0, S16
    v22 = 0;
      VMUL.F32        S14, S20, S0
      VMUL.F32        S0, S24, S0
      VMUL.F32        S2, S22, S2
      VADD.F32        S4, S6, S4
      VMOV.F32        S3, #-2.0
      VSUB.F32        S6, S10, S8
      VADD.F32        S8, S14, S12
      VSUB.F32        S0, S2, S0
      VMUL.F32        S2, S4, S4
      VMUL.F32        S10, S6, S6
      VADD.F32        S14, S6, S6
      VADD.F32        S12, S8, S8
      VMUL.F32        S1, S0, S0
      VMUL.F32        S7, S4, S0
      VMUL.F32        S9, S6, S8
      VMUL.F32        S13, S4, S8
      VADD.F32        S5, S10, S2
      VMUL.F32        S11, S6, S0
      VMUL.F32        S15, S6, S4
      VMUL.F32        S8, S0, S8
      VADD.F32        S10, S10, S1
      VADD.F32        S2, S2, S1
      VADD.F32        S16, S0, S0
      VMUL.F32        S3, S5, S3
      VADD.F32        S5, S9, S7
      VMUL.F32        S9, S12, S6
      VADD.F32        S8, S8, S15
      VMUL.F32        S0, S12, S0
      VMUL.F32        S14, S4, S14
      VMUL.F32        S12, S12, S4
      VMUL.F32        S6, S16, S6
      VMUL.F32        S4, S16, S4
      VMOV.F32        S1, #1.0
      VADD.F32        S10, S10, S10
      VADD.F32        S2, S2, S2
      VADD.F32        S7, S13, S11
      VSUB.F32        S0, S14, S0
      VSUB.F32        S6, S6, S12
      VSUB.F32        S4, S4, S9
      VADD.F32        S14, S3, S1
      VADD.F32        S3, S5, S5
      VSUB.F32        S10, S1, S10
      VADD.F32        S12, S7, S7
      VADD.F32        S8, S8, S8
      VSUB.F32        S2, S1, S2
      VSTR            S14, [SP,#0xC0+var_C0]
      VSTR            S3, [SP,#0xC0+var_BC]
      VSTR            S6, [SP,#0xC0+var_B8]
    v21 = 0;
      VSTR            S4, [SP,#0xC0+var_B0]
      VSTR            S10, [SP,#0xC0+var_AC]
      VSTR            S8, [SP,#0xC0+var_A8]
    v23 = 0;
      VSTR            S12, [SP,#0xC0+var_A0]
      VSTR            S0, [SP,#0xC0+var_9C]
      VSTR            S2, [SP,#0xC0+var_98]
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 1065353216;
    glm::detail::operator*<float>((int)&v30, _R4, (int)&v18);
    *(_DWORD *)_R4 = v30;
    *(_DWORD *)(_R4 + 4) = v31;
    *(_DWORD *)(_R4 + 8) = v32;
    *(_DWORD *)(_R4 + 12) = v33;
    *(_DWORD *)(_R4 + 16) = v34;
    *(_DWORD *)(_R4 + 20) = v35;
    *(_DWORD *)(_R4 + 24) = v36;
    *(_DWORD *)(_R4 + 28) = v37;
    *(_DWORD *)(_R4 + 32) = v38;
    *(_DWORD *)(_R4 + 36) = v39;
    *(_DWORD *)(_R4 + 40) = v40;
    *(_DWORD *)(_R4 + 44) = v41;
    *(_DWORD *)(_R4 + 48) = v42;
    *(_DWORD *)(_R4 + 52) = v43;
    *(_DWORD *)(_R4 + 56) = v44;
    result = v45;
    *(_DWORD *)(_R4 + 60) = v45;
  return result;
}


int __fastcall ModelPart::_tessellate(ModelPart *this, Tessellator *a2, float a3)
{
  ModelPart *v3; // r6@1
  Tessellator *v4; // r5@1
  float v5; // r8@1
  int result; // r0@1
  int v7; // r4@1
  int i; // r7@1

  v3 = this;
  v4 = a2;
  v5 = a3;
  result = Tessellator::begin(
             a2,
             -1279351960 * ((signed int)((*((_QWORD *)this + 7) >> 32) - *((_QWORD *)this + 7)) >> 2),
             0);
  v7 = *((_QWORD *)v3 + 7) >> 32;
  for ( i = *((_QWORD *)v3 + 7); v7 != i; i += 188 )
  {
    if ( *((_BYTE *)v3 + 216) )
      Tessellator::color(v4, (const Color *)(i + 172));
    result = Cube::compile((Cube *)i, v4, v5);
  }
  return result;
}


char *__fastcall ModelPart::getOrigin(ModelPart *this)
{
  return (char *)this + 204;
}


int __fastcall ModelPart::expandAABB(int result, AABB *a2)
{
  Cube *v2; // r5@1 OVERLAPPED
  Cube *v3; // r6@1 OVERLAPPED
  AABB *i; // r4@1

  *(_QWORD *)&v2 = *(_QWORD *)(result + 56);
  for ( i = a2; v3 != v2; v2 = (Cube *)((char *)v2 + 188) )
    result = Cube::expandAABB(v2, i);
  return result;
}


int __fastcall ModelPart::setOffset(int result, const Vec3 *a2)
{
  *(_DWORD *)(result + 24) = *(_DWORD *)a2;
  *(_DWORD *)(result + 28) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 32) = *((_DWORD *)a2 + 2);
  return result;
}


int __fastcall ModelPart::setOrigin(int result, const Vec3 *a2)
{
  *(_DWORD *)(result + 204) = *(_DWORD *)a2;
  *(_DWORD *)(result + 208) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 212) = *((_DWORD *)a2 + 2);
  return result;
}


void __fastcall ModelPart::load(int a1, int a2, const void **a3, int a4)
{
  ModelPart::load(a1, a2, a3, a4);
}


int __fastcall ModelPart::compile(ModelPart *this, Tessellator *a2, float a3)
{
  ModelPart *v3; // r4@1
  Tessellator *v4; // r5@1
  float v5; // r8@1
  int v6; // r6@1
  int i; // r7@1
  char v9; // [sp+4h] [bp-7Ch]@5

  v3 = this;
  v4 = a2;
  v5 = a3;
  Tessellator::begin(a2, -1279351960 * ((signed int)((*((_QWORD *)this + 7) >> 32) - *((_QWORD *)this + 7)) >> 2), 0);
  v6 = *((_QWORD *)v3 + 7) >> 32;
  for ( i = *((_QWORD *)v3 + 7); v6 != i; i += 188 )
  {
    if ( *((_BYTE *)v3 + 216) )
      Tessellator::color(v4, (const Color *)(i + 172));
    Cube::compile((Cube *)i, v4, v5);
  }
  Tessellator::end((Tessellator *)&v9, (const char *)v4, 0, 0);
  mce::Mesh::operator=((int)v3 + 104, (int)&v9);
  return mce::Mesh::~Mesh((mce::Mesh *)&v9);
}


int __fastcall ModelPart::setNeverRender(int result, bool a2)
{
  *(_BYTE *)(result + 100) = a2;
  return result;
}


void __fastcall ModelPart::addBox(ModelPart *this, const Vec3 *a2, const Vec3 *a3, float a4, const Color *a5)
{
  ModelPart *v5; // r4@1
  int v6; // r0@1
  int v7; // r1@1 OVERLAPPED
  int v8; // r2@1
  int v9; // r2@2
  int v10; // r2@2
  void *ptr; // [sp+14h] [bp-CCh]@1
  int v12; // [sp+18h] [bp-C8h]@2
  int v13; // [sp+1Ch] [bp-C4h]@2

  v5 = this;
  v6 = Cube::Cube(
         (int)&ptr,
         (int)a2,
         (int)a3,
         SLODWORD(a4),
         *((_BYTE *)this + 52),
         (int)this + 80,
         (unsigned __int64 *)((char *)this + 92),
         (int)a5);
  *(_QWORD *)&v7 = *(_QWORD *)((char *)v5 + 60);
  if ( v7 == v8 )
  {
    std::vector<Cube,std::allocator<Cube>>::_M_emplace_back_aux<Cube>((unsigned __int64 *)v5 + 7, (int)&ptr);
  }
  else
    *(_DWORD *)v7 = 0;
    *(_DWORD *)(v7 + 4) = 0;
    *(_DWORD *)(v7 + 8) = 0;
    *(_DWORD *)v7 = ptr;
    ptr = 0;
    v9 = *(_DWORD *)(v7 + 4);
    *(_DWORD *)(v7 + 4) = v12;
    v12 = v9;
    v10 = *(_DWORD *)(v7 + 8);
    *(_DWORD *)(v7 + 8) = v13;
    v13 = v10;
    _aeabi_memcpy4(v7 + 12, v6 + 12, 176);
    *((_DWORD *)v5 + 15) += 188;
  if ( ptr )
    operator delete(ptr);
}


int __fastcall ModelPart::setPos(int result, const Vec3 *a2)
{
  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)(result + 4) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 8) = *((_DWORD *)a2 + 2);
  return result;
}


int __fastcall ModelPart::render(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v7; // r8@1
  int v8; // r5@1
  float v15; // r0@7
  __int64 v40; // r0@11
  bool v41; // zf@11
  unsigned int v42; // r7@14
  float v44; // [sp+8h] [bp-F0h]@7
  int v45; // [sp+Ch] [bp-ECh]@7
  int v46; // [sp+10h] [bp-E8h]@7
  int v47; // [sp+14h] [bp-E4h]@7
  int v48; // [sp+20h] [bp-D8h]@7
  int v49; // [sp+24h] [bp-D4h]@7
  int v50; // [sp+28h] [bp-D0h]@7
  int v51; // [sp+34h] [bp-C4h]@7
  int v52; // [sp+38h] [bp-C0h]@7
  int v53; // [sp+3Ch] [bp-BCh]@7
  int v54; // [sp+40h] [bp-B8h]@7
  int v55; // [sp+44h] [bp-B4h]@7
  char v56; // [sp+48h] [bp-B0h]@6
  int v57; // [sp+50h] [bp-A8h]@7
  int v58; // [sp+54h] [bp-A4h]@7
  int v59; // [sp+58h] [bp-A0h]@7
  int v60; // [sp+5Ch] [bp-9Ch]@7
  int v61; // [sp+60h] [bp-98h]@7
  int v62; // [sp+64h] [bp-94h]@7
  int v63; // [sp+68h] [bp-90h]@7
  int v64; // [sp+6Ch] [bp-8Ch]@7
  int v65; // [sp+70h] [bp-88h]@7
  int v66; // [sp+74h] [bp-84h]@7
  int v67; // [sp+78h] [bp-80h]@7
  int v68; // [sp+7Ch] [bp-7Ch]@7
  int v69; // [sp+80h] [bp-78h]@7
  int v70; // [sp+84h] [bp-74h]@7
  int v71; // [sp+88h] [bp-70h]@7
  int v72; // [sp+8Ch] [bp-6Ch]@7

  _R6 = a1;
  _R4 = a3;
  LODWORD(a1) = *(_BYTE *)(a1 + 100);
  v7 = a2;
  v8 = HIDWORD(a1);
  if ( !(_DWORD)a1 )
  {
    LODWORD(a1) = *(_BYTE *)(_R6 + 53);
    if ( *(_BYTE *)(_R6 + 53) )
    {
      LODWORD(a1) = a4;
      _ZF = a4 == 1;
      if ( a4 == 1 )
      {
        a1 = *(_QWORD *)(_R6 + 68);
        _ZF = (_DWORD)a1 == HIDWORD(a1);
      }
      if ( !_ZF )
        MatrixStack::push((MatrixStack *)&v56, *(_DWORD *)(v8 + 16) + 16);
        _R7 = MatrixStack::MatrixStackRef::operator*((int)&v56);
        __asm
        {
          VMOV            S16, R4
          VLDR            S0, [R6]
          VLDR            S2, [R6,#4]
          VMUL.F32        S1, S0, S16
          VLDR            S8, [R6,#8]
          VMUL.F32        S5, S2, S16
          VLDR            S0, [R7]
          VLDR            S2, [R7,#4]
          VMUL.F32        S9, S8, S16
          VLDR            S8, [R7,#0x14]
          VLDR            S10, [R7,#0x10]
          VLDR            S4, [R7,#8]
          VLDR            S6, [R7,#0xC]
          VLDR            S12, [R7,#0x18]
          VMUL.F32        S7, S0, S1
          VLDR            S14, [R7,#0x1C]
          VMUL.F32        S11, S2, S1
          VMUL.F32        S15, S8, S5
          VLDR            S3, [R7,#0x20]
          VMUL.F32        S18, S10, S5
          VMUL.F32        S13, S6, S1
          VMUL.F32        S20, S4, S1
          VLDR            S1, [R7,#0x24]
          VMUL.F32        S22, S12, S5
          VMUL.F32        S24, S14, S5
          VLDR            S5, [R7,#0x28]
          VMUL.F32        S28, S3, S9
          VADD.F32        S11, S15, S11
          VADD.F32        S15, S18, S7
          VLDR            S7, [R7,#0x2C]
          VMUL.F32        S26, S1, S9
          VMUL.F32        S18, S5, S9
          VADD.F32        S20, S22, S20
          VLDR            S22, [R7,#0x38]
          VMUL.F32        S9, S7, S9
          VADD.F32        S13, S24, S13
          VADD.F32        S15, S15, S28
          VADD.F32        S11, S11, S26
          VADD.F32        S18, S20, S18
          VADD.F32        S20, S13, S9
          VLDR            S9, [R7,#0x30]
          VLDR            S13, [R7,#0x34]
          VADD.F32        S9, S15, S9
          VLDR            S15, [R7,#0x3C]
          VADD.F32        S11, S11, S13
          VADD.F32        S13, S18, S22
          VADD.F32        S15, S20, S15
          VSTR            S9, [R7,#0x30]
          VSTR            S11, [R7,#0x34]
          VSTR            S13, [R7,#0x38]
          VSTR            S15, [R7,#0x3C]
          VLDR            S22, [R6,#0x24]
          VLDR            S18, [R6,#0x28]
          VMUL.F32        S24, S22, S22
          VLDR            S20, [R6,#0x2C]
          VMUL.F32        S26, S18, S18
          VMUL.F32        S28, S20, S20
          VADD.F32        S24, S26, S24
          VLDR            S26, =0.0001
          VADD.F32        S24, S24, S28
          VCMPE.F32       S24, S26
          VMRS            APSR_nzcv, FPSCR
        }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          __asm
          {
            VMOV.F32        S0, #0.5
            VMUL.F32        S2, S22, S0
            VMUL.F32        S18, S18, S0
            VMUL.F32        S20, S20, S0
            VMOV            R10, S2
          }
          v15 = cosf(_R10);
          __asm { VMOV            R4, S18 }
          _R9 = v15;
          _R0 = cosf(_R4);
            VMOV            R11, S20
            VMOV            S20, R0
            VMOV            S18, R9
          _R0 = sinf(_R10);
          __asm { VMOV            S22, R0 }
          _R0 = sinf(_R4);
            VMOV            S0, R0
            VMUL.F32        S24, S22, S20
            VMUL.F32        S26, S0, S18
            VMUL.F32        S22, S0, S22
            VMUL.F32        S18, S20, S18
          _R4 = cosf(_R11);
          _R0 = sinf(_R11);
            VMOV            S2, R4
            VMUL.F32        S4, S0, S24
          v46 = 0;
          __asm { VMUL.F32        S6, S26, S2 }
          v45 = 0;
          __asm { VMUL.F32        S8, S22, S2 }
          v50 = 0;
            VMUL.F32        S12, S18, S2
            VMUL.F32        S10, S0, S18
          v48 = 0;
            VMUL.F32        S14, S22, S0
            VMUL.F32        S0, S26, S0
            VMUL.F32        S2, S24, S2
            VADD.F32        S4, S6, S4
            VMOV.F32        S3, #-2.0
            VSUB.F32        S6, S10, S8
            VADD.F32        S8, S14, S12
            VSUB.F32        S0, S2, S0
            VMUL.F32        S2, S4, S4
            VMUL.F32        S10, S6, S6
            VADD.F32        S14, S6, S6
            VADD.F32        S12, S8, S8
            VMUL.F32        S1, S0, S0
            VMUL.F32        S7, S4, S0
            VMUL.F32        S9, S6, S8
            VMUL.F32        S13, S4, S8
            VADD.F32        S5, S10, S2
            VMUL.F32        S11, S6, S0
            VMUL.F32        S15, S6, S4
            VMUL.F32        S8, S0, S8
            VADD.F32        S10, S10, S1
            VADD.F32        S2, S2, S1
            VADD.F32        S18, S0, S0
            VMUL.F32        S3, S5, S3
            VADD.F32        S5, S9, S7
            VMUL.F32        S9, S12, S6
            VADD.F32        S8, S8, S15
            VMUL.F32        S0, S12, S0
            VMUL.F32        S14, S4, S14
            VMUL.F32        S12, S12, S4
            VMUL.F32        S6, S18, S6
            VMUL.F32        S4, S18, S4
            VMOV.F32        S1, #1.0
            VADD.F32        S10, S10, S10
            VADD.F32        S2, S2, S2
            VADD.F32        S7, S13, S11
            VSUB.F32        S0, S14, S0
            VSUB.F32        S6, S6, S12
            VSUB.F32        S4, S4, S9
            VADD.F32        S14, S3, S1
            VADD.F32        S3, S5, S5
            VSUB.F32        S10, S1, S10
            VADD.F32        S12, S7, S7
            VADD.F32        S8, S8, S8
            VSUB.F32        S2, S1, S2
            VSTR            S14, [SP,#0xF8+var_F0]
            VSTR            S3, [SP,#0xF8+var_EC]
            VSTR            S6, [SP,#0xF8+var_E8]
          v47 = 0;
            VSTR            S4, [SP,#0xF8+var_E0]
            VSTR            S10, [SP,#0xF8+var_DC]
            VSTR            S8, [SP,#0xF8+var_D8]
          v49 = 0;
            VSTR            S12, [SP,#0xF8+var_D0]
            VSTR            S0, [SP,#0xF8+var_CC]
            VSTR            S2, [SP,#0xF8+var_C8]
          v51 = 0;
          v52 = 0;
          v53 = 0;
          v54 = 0;
          v55 = 1065353216;
          glm::detail::operator*<float>((int)&v57, _R7, (int)&v44);
          _R0 = v57;
          *(_DWORD *)_R7 = v57;
          _R1 = v58;
          *(_DWORD *)(_R7 + 4) = v58;
          __asm { VMOV            S0, R0 }
          _R2 = v59;
          *(_DWORD *)(_R7 + 8) = v59;
          __asm { VMOV            S2, R1 }
          _R3 = v60;
          *(_DWORD *)(_R7 + 12) = v60;
          __asm { VMOV            S4, R2 }
          _R0 = v61;
          *(_DWORD *)(_R7 + 16) = v61;
          __asm { VMOV            S6, R3 }
          _R1 = v62;
          *(_DWORD *)(_R7 + 20) = v62;
          __asm { VMOV            S10, R0 }
          _R2 = v63;
          *(_DWORD *)(_R7 + 24) = v63;
          __asm { VMOV            S8, R1 }
          _R3 = v64;
          *(_DWORD *)(_R7 + 28) = v64;
          __asm { VMOV            S12, R2 }
          _R0 = v65;
          *(_DWORD *)(_R7 + 32) = v65;
          __asm { VMOV            S14, R3 }
          _R1 = v66;
          *(_DWORD *)(_R7 + 36) = v66;
          __asm { VMOV            S3, R0 }
          _R2 = v67;
          *(_DWORD *)(_R7 + 40) = v67;
          __asm { VMOV            S1, R1 }
          _R3 = v68;
          *(_DWORD *)(_R7 + 44) = v68;
          __asm { VMOV            S5, R2 }
          _R0 = v69;
          *(_DWORD *)(_R7 + 48) = v69;
          __asm { VMOV            S7, R3 }
          _R1 = v70;
          *(_DWORD *)(_R7 + 52) = v70;
          __asm { VMOV            S9, R0 }
          _R2 = v71;
          *(_DWORD *)(_R7 + 56) = v71;
          __asm { VMOV            S11, R1 }
          _R3 = v72;
          __asm { VMOV            S13, R2 }
          *(_DWORD *)(_R7 + 60) = v72;
          __asm { VMOV            S15, R3 }
          VLDR            S18, [R6,#0x18]
          VLDR            S20, [R6,#0x1C]
          VMUL.F32        S18, S18, S16
          VLDR            S22, [R6,#0x20]
          VMUL.F32        S20, S20, S16
          VMUL.F32        S22, S22, S16
          VMUL.F32        S24, S0, S18
          VMUL.F32        S26, S10, S20
          VMUL.F32        S28, S2, S18
          VMUL.F32        S30, S8, S20
          VMUL.F32        S17, S4, S18
          VMUL.F32        S19, S12, S20
          VMUL.F32        S18, S6, S18
          VMUL.F32        S20, S14, S20
          VMUL.F32        S26, S1, S22
          VADD.F32        S28, S30, S28
          VMUL.F32        S30, S5, S22
          VADD.F32        S17, S19, S17
          VMUL.F32        S20, S7, S22
          VMUL.F32        S22, S3, S22
          VADD.F32        S18, S18, S20
          VADD.F32        S22, S24, S22
          VADD.F32        S24, S28, S26
          VADD.F32        S26, S17, S30
          VADD.F32        S15, S18, S15
          VADD.F32        S9, S22, S9
          VADD.F32        S11, S24, S11
          VADD.F32        S13, S26, S13
          VLDR            S9, [R6,#0x30]
          VMUL.F32        S9, S9, S16
          VMUL.F32        S0, S0, S9
          VMUL.F32        S2, S2, S9
          VMUL.F32        S4, S4, S9
          VMUL.F32        S6, S6, S9
          VMUL.F32        S10, S10, S9
          VMUL.F32        S8, S8, S9
          VMUL.F32        S3, S3, S9
          VMUL.F32        S1, S1, S9
          VSTR            S0, [R7]
          VMUL.F32        S5, S5, S9
          VSTR            S2, [R7,#4]
          VMUL.F32        S7, S7, S9
          VSTR            S4, [R7,#8]
          VMUL.F32        S12, S12, S9
          VSTR            S6, [R7,#0xC]
          VMUL.F32        S14, S14, S9
          VSTR            S10, [R7,#0x10]
          VSTR            S8, [R7,#0x14]
          VSTR            S12, [R7,#0x18]
          VSTR            S14, [R7,#0x1C]
          VSTR            S3, [R7,#0x20]
          VSTR            S1, [R7,#0x24]
          VSTR            S5, [R7,#0x28]
          VSTR            S7, [R7,#0x2C]
        if ( _ZF )
          ModelPart::draw(_R6, v8, v7, a5);
        v40 = *(_QWORD *)(_R6 + 68);
        v41 = (_DWORD)v40 == HIDWORD(v40);
        if ( (_DWORD)v40 != HIDWORD(v40) )
          v41 = HIDWORD(v40) == (_DWORD)v40;
        if ( !v41 )
          v42 = 0;
          do
            LODWORD(v40) = *(_DWORD *)(v40 + 4 * v42);
            ModelPart::render(v40, v7, 1065353216, 0, 0);
            v40 = *(_QWORD *)(_R6 + 68);
            ++v42;
            HIDWORD(v40) -= v40;
          while ( v42 < SHIDWORD(v40) >> 2 );
        LODWORD(a1) = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v56);
    }
  }
  return a1;
}


void __fastcall ModelPart::addBox(ModelPart *this, const Vec3 *a2, const Vec3 *a3, float a4, const Color *a5)
{
  ModelPart::addBox(this, a2, a3, a4, a5);
}


void __fastcall ModelPart::addBox(ModelPart *this, const Vec3 *a2, const Vec3 *a3, int a4, float a5, const Color *a6)
{
  ModelPart::addBox(this, a2, a3, a4, a5, a6);
}


int __fastcall ModelPart::addBoxMapTexColor(int a1, const Vec3 *a2, const Vec3 *a3, _QWORD *a4, const Color *a5, float a6)
{
  int v6; // r4@1

  v6 = a1;
  *(_QWORD *)(a1 + 92) = *a4;
  *(_BYTE *)(a1 + 216) = 1;
  ModelPart::addBox((ModelPart *)a1, a2, a3, a6, a5);
  return v6;
}


int __fastcall ModelPart::draw(int a1, int a2, int a3, int a4)
{
  int v4; // r6@1
  mce::Buffer *v5; // r4@1
  int v6; // r7@1
  int v7; // r9@1
  int v8; // r8@1
  Tessellator *v9; // r5@1
  int i; // r4@4
  int v11; // r7@4
  const mce::MaterialPtr *v12; // r1@8
  int result; // r0@10
  int v14; // r2@11

  v4 = a1;
  v5 = (mce::Buffer *)(a1 + 104);
  v6 = a2;
  v7 = a4;
  v8 = a3;
  v9 = *(Tessellator **)(a2 + 40);
  if ( !mce::Mesh::isValid((mce::Mesh *)(a1 + 104)) )
    ModelPart::compile((ModelPart *)v4, v9, 1.0);
  if ( Tessellator::forceTessellateIntercept(v9) == 1 )
  {
    Tessellator::begin(v9, -1279351960 * ((signed int)((*(_QWORD *)(v4 + 56) >> 32) - *(_QWORD *)(v4 + 56)) >> 2), 0);
    v11 = *(_QWORD *)(v4 + 56) >> 32;
    for ( i = *(_QWORD *)(v4 + 56); v11 != i; i += 188 )
    {
      if ( *(_BYTE *)(v4 + 216) )
        Tessellator::color(v9, (const Color *)(i + 172));
      Cube::compile((Cube *)i, v9, 1.0);
    }
    v12 = *(const mce::MaterialPtr **)(v4 + 88);
    if ( !v12 )
      v12 = *(const mce::MaterialPtr **)(v8 + 28);
    result = j_j_j__ZN11Tessellator16triggerInterceptERKN3mce11MaterialPtrERKNS0_10TexturePtrE_0(
               v9,
               v12,
               *(const mce::TexturePtr **)(v8 + 32));
  }
  else
    v14 = *(_DWORD *)(v4 + 88);
    if ( !v14 )
      v14 = *(_DWORD *)(v8 + 28);
    result = mce::Mesh::render(v5, v6, v14, *(_DWORD *)(v8 + 32), 0, v7);
  return result;
}


void __fastcall ModelPart::setTexSize(ModelPart *this, int _R1, int _R2)
{
  __asm
  {
    VMOV            S0, R1
    VMOV            S2, R2
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VSTR            S0, [R0,#0x50]
    VSTR            S2, [R0,#0x54]
  }
}


ModelPart *__fastcall ModelPart::~ModelPart(ModelPart *this)
{
  ModelPart *v1; // r4@1
  void **v2; // r5@1 OVERLAPPED
  void **v3; // r6@1 OVERLAPPED
  void **v4; // r7@2
  void *v5; // r0@6
  void **v6; // r5@8 OVERLAPPED
  void **v7; // r6@8 OVERLAPPED

  v1 = this;
  *((_BYTE *)this + 52) = 0;
  *((_QWORD *)this + 3) = *(_QWORD *)&Vec3::ZERO;
  *((_DWORD *)this + 8) = dword_2822498;
  *(_QWORD *)&v2 = *((_QWORD *)this + 7);
  if ( v3 != v2 )
  {
    v4 = v2;
    do
    {
      if ( *v4 )
        operator delete(*v4);
      v4 += 47;
    }
    while ( v3 != v4 );
  }
  *((_DWORD *)v1 + 15) = v2;
  mce::Mesh::reset((ModelPart *)((char *)v1 + 104));
  mce::Mesh::~Mesh((ModelPart *)((char *)v1 + 104));
  v5 = (void *)*((_DWORD *)v1 + 17);
  if ( v5 )
    operator delete(v5);
  *(_QWORD *)&v6 = *((_QWORD *)v1 + 7);
  if ( v6 != v7 )
      if ( *v6 )
        operator delete(*v6);
      v6 += 47;
    while ( v7 != v6 );
    v6 = (void **)*((_DWORD *)v1 + 14);
  if ( v6 )
    operator delete(v6);
  return v1;
}


int __fastcall ModelPart::ModelPart(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r5@1

  v2 = a2;
  v3 = a1;
  _aeabi_memclr4(a1, 48);
  _aeabi_memclr4(v3 + 56, 44);
  mce::Mesh::Mesh((mce::Mesh *)(v3 + 104));
  *(_BYTE *)(v3 + 216) = 0;
  *(_DWORD *)(v3 + 204) = 0;
  *(_DWORD *)(v3 + 208) = 0;
  *(_DWORD *)(v3 + 212) = 0;
  ModelPart::operator=(v3, v2);
  return v3;
}


int __fastcall ModelPart::texOffs(int result, __int64 a2)
{
  *(_QWORD *)(result + 92) = a2;
  return result;
}


int __fastcall ModelPart::addBoxMapTex(int a1, const Vec3 *a2, const Vec3 *a3, _QWORD *a4, float a5)
{
  int v5; // r4@1

  v5 = a1;
  *(_QWORD *)(a1 + 92) = *a4;
  ModelPart::addBox((ModelPart *)a1, a2, a3, a5, (const Color *)&Color::WHITE);
  return v5;
}


void __fastcall ModelPart::addBox(ModelPart *this, const Vec3 *a2, const Vec3 *a3, int a4, float a5, const Color *a6)
{
  ModelPart *v6; // r4@1
  int v7; // r0@1
  int v8; // r1@1 OVERLAPPED
  int v9; // r2@1
  int v10; // r2@2
  int v11; // r2@2
  void *ptr; // [sp+14h] [bp-CCh]@1
  int v13; // [sp+18h] [bp-C8h]@2
  int v14; // [sp+1Ch] [bp-C4h]@2

  v6 = this;
  v7 = Cube::Cube(
         (int)&ptr,
         (int)a2,
         (int)a3,
         SLODWORD(a5),
         a4,
         (int)this + 80,
         (unsigned __int64 *)((char *)this + 92),
         (int)a6);
  *(_QWORD *)&v8 = *(_QWORD *)((char *)v6 + 60);
  if ( v8 == v9 )
  {
    std::vector<Cube,std::allocator<Cube>>::_M_emplace_back_aux<Cube>((unsigned __int64 *)v6 + 7, (int)&ptr);
  }
  else
    *(_DWORD *)v8 = 0;
    *(_DWORD *)(v8 + 4) = 0;
    *(_DWORD *)(v8 + 8) = 0;
    *(_DWORD *)v8 = ptr;
    ptr = 0;
    v10 = *(_DWORD *)(v8 + 4);
    *(_DWORD *)(v8 + 4) = v13;
    v13 = v10;
    v11 = *(_DWORD *)(v8 + 8);
    *(_DWORD *)(v8 + 8) = v14;
    v14 = v11;
    _aeabi_memcpy4(v8 + 12, v7 + 12, 176);
    *((_DWORD *)v6 + 15) += 188;
  if ( ptr )
    operator delete(ptr);
}


int __fastcall ModelPart::reset(ModelPart *this)
{
  ModelPart *v1; // r4@1
  void **v2; // r5@1 OVERLAPPED
  void **v3; // r6@1 OVERLAPPED
  void **v4; // r7@2

  v1 = this;
  *((_BYTE *)this + 52) = 0;
  *((_QWORD *)this + 3) = *(_QWORD *)&Vec3::ZERO;
  *((_DWORD *)this + 8) = dword_2822498;
  *(_QWORD *)&v2 = *((_QWORD *)this + 7);
  if ( v3 != v2 )
  {
    v4 = v2;
    do
    {
      if ( *v4 )
        operator delete(*v4);
      v4 += 47;
    }
    while ( v3 != v4 );
  }
  *((_DWORD *)v1 + 15) = v2;
  return j_j_j__ZN3mce4Mesh5resetEv_1((ModelPart *)((char *)v1 + 104));
}
