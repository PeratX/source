

_DWORD *__fastcall EntityShaderManager::EntityShaderManager(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  mce::MaterialPtr *v2; // r4@1
  void *v3; // r0@1
  void *v4; // r0@2
  void *v5; // r0@3
  unsigned int *v7; // r2@5
  signed int v8; // r1@7
  unsigned int *v9; // r2@9
  signed int v10; // r1@11
  unsigned int *v11; // r2@13
  signed int v12; // r1@15
  int v13; // [sp+4h] [bp-2Ch]@3
  int v14; // [sp+Ch] [bp-24h]@2
  int v15; // [sp+14h] [bp-1Ch]@1

  v1 = a1;
  *a1 = &off_26DCC64;
  v2 = (mce::MaterialPtr *)(a1 + 1);
  sub_119C884((void **)&v15, "entity");
  mce::MaterialPtr::MaterialPtr(v2, (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable, &v15);
  v3 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  sub_119C884((void **)&v14, "entity_alphatest");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v1 + 4),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v14);
  v4 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v14 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  sub_119C884((void **)&v13, "entity_static");
    (mce::MaterialPtr *)(v1 + 7),
    &v13);
  v5 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v13 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  return v1;
}


int __fastcall EntityShaderManager::_setupFoilShaderParameters(float a1, int a2, float a3, int a4, int a5)
{
  float v6; // r6@1
  unsigned int v7; // r0@1
  int v8; // r8@1
  float v9; // r9@1
  int v19; // r0@3
  int v28; // r0@6
  int v34; // r0@7
  __int64 v41; // r5@7
  __int64 v44; // r0@7
  int v46; // [sp+8h] [bp-90h]@0
  int v47; // [sp+Ch] [bp-8Ch]@0
  float v48; // [sp+28h] [bp-70h]@7
  int v49; // [sp+30h] [bp-68h]@7
  signed int v50; // [sp+34h] [bp-64h]@7
  int v51; // [sp+38h] [bp-60h]@7
  int v52; // [sp+3Ch] [bp-5Ch]@7
  char v53; // [sp+40h] [bp-58h]@7

  _R7 = a4;
  v6 = a1;
  v7 = *(_DWORD *)(a4 + 20);
  v8 = a2;
  v9 = a3;
  _R1 = (unsigned __int16)v7;
  _R4 = v7 >> 16;
  __asm
  {
    VMOV            S0, R1
    VCVT.F32.U32    S18, S0
    VLDR            S16, [R7,#4]
    VLDR            S20, [R7,#0xC]
    VCMPE.F32       S20, S16
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm
    {
      VMUL.F32        S0, S16, S18
      VMOV            R0, S0
    }
    v19 = roundf(_R0);
    __asm { VMUL.F32        S0, S18, S20 }
    _R5 = v19;
  else
      VMUL.F32        S0, S18, S20
    _R5 = roundf(_R0);
    __asm { VMUL.F32        S0, S16, S18 }
  __asm { VMOV            R0, S0 }
  _R0 = roundf(_R0);
    VMOV            S0, R0
    VLDR            S16, [SP,#0x98+arg_0]
    VMOV            S2, R5
    VCVTR.S32.F32   S0, S0
    VCVTR.S32.F32   S2, S2
    VMOV            R0, S0
    VMOV            R1, S2
  _R0 = (unsigned __int16)(_R1 - _R0);
    VCVT.F32.U32    S0, S0
    VDIV.F32        S18, S18, S0
    VMOV            S0, R4
    VCVT.F32.U32    S20, S0
    VLDR            S22, [R7,#8]
    VLDR            S24, [R7,#0x10]
    VCMPE.F32       S24, S22
      VMUL.F32        S0, S22, S20
    v28 = roundf(_R0);
    __asm { VMUL.F32        S0, S20, S24 }
    _R5 = v28;
      VMUL.F32        S0, S20, S24
    __asm { VMUL.F32        S0, S22, S20 }
    VMOV.F32        S2, #0.5
    VMUL.F32        S18, S18, S2
    VSTR            S18, [SP,#0x98+var_70]
    VDIV.F32        S0, S20, S0
    VMUL.F32        S0, S0, S2
    VSTR            S0, [SP,#0x98+var_6C]
  v34 = getTimeMs();
  __asm { VMOV            R3, S16 }
  _R5 = v34;
  (*(void (__fastcall **)(char *, _DWORD, _DWORD, int))(*(_DWORD *)LODWORD(v6) + 8))(
    &v53,
    LODWORD(v6),
    LODWORD(v9),
    _R3);
  _R0 = 91625969;
  _R1 = 628292359;
    SMMUL.W         R0, R5, R0
    VLDR            S2, =0.00033333
    SMMUL.W         R1, R5, R1
  HIDWORD(v41) = &v49;
  _R0 = _R5 - 3000 * (((signed int)_R0 >> 6) + (_R0 >> 31));
    VCVT.F32.S32    S0, S0
  _R0 = _R5 - 1750 * (((signed int)_R1 >> 8) + (_R1 >> 31));
  LODWORD(v41) = &v48;
  HIDWORD(v44) = &dword_27D2334;
    VMOV            S4, R0
    VLDR            S2, =-0.00057143
    VCVT.F32.S32    S4, S4
  v49 = 1065353216;
  v50 = 1065353216;
  LODWORD(v44) = &Color::WHITE;
  v51 = 1065353216;
  v52 = 1065353216;
    VDIV.F32        S0, S0, S18
    VMUL.F32        S2, S4, S2
    VSTR            S0, [SP,#0x98+var_8C]
    VDIV.F32        S2, S2, S18
    VSTR            S2, [SP,#0x98+var_90]
  return EntityShaderManager::_setupShaderParameters(
           (int)&Color::WHITE,
           v8,
           v9,
           COERCE_FLOAT(&v53),
           v44,
           v46,
           v47,
           -20.0,
           1117782016,
           v41,
           1065353216);
}


char *__fastcall EntityShaderManager::getStaticMaterial(EntityShaderManager *this)
{
  return (char *)this + 28;
}


signed int __fastcall EntityShaderManager::_setupShaderParameters(int a1, int a2, int a3, int a4, int a5, int a6, _QWORD *a7)
{
  int v7; // r4@1
  BlockSource *v8; // r5@1
  int v9; // r1@1
  int v10; // r6@1
  Dimension *v11; // r0@1
  int v16; // r1@3
  int v17; // r0@3
  int v18; // r1@3
  int v19; // r3@3
  int v20; // r1@3
  int v21; // r3@3
  int v22; // r1@3
  char v24; // [sp+0h] [bp-38h]@1
  char v25; // [sp+1h] [bp-37h]@1
  int v26; // [sp+4h] [bp-34h]@1
  int v27; // [sp+8h] [bp-30h]@3
  int v28; // [sp+Ch] [bp-2Ch]@3
  float v29; // [sp+10h] [bp-28h]@3
  char v30; // [sp+14h] [bp-24h]@1
  int v31; // [sp+18h] [bp-20h]@1
  int v32; // [sp+1Ch] [bp-1Ch]@1
  int v33; // [sp+20h] [bp-18h]@1
  char v34; // [sp+24h] [bp-14h]@1
  char v35; // [sp+25h] [bp-13h]@1

  v7 = a2;
  v8 = (BlockSource *)a3;
  v31 = *(_DWORD *)a4;
  v32 = *(_DWORD *)(a4 + 4);
  v9 = *(_DWORD *)(a4 + 8);
  v30 = Brightness::MIN;
  v33 = v9;
  BlockSource::getLightColor((int)&v34, a3, (int)&v31, &v30);
  v10 = *(_DWORD *)(v7 + 32);
  v24 = v34;
  v25 = v35;
  LightTexture::getColorForUV((int)&v26, (int)&v24);
  v11 = (Dimension *)BlockSource::getDimension(v8);
  Dimension::hasCeiling(v11);
  __asm
  {
    VMOV.F32        S2, #-1.0
    VMOV.F32        S0, #1.0
  }
  if ( !_ZF )
    __asm { VMOVNE.F32      S0, S2 }
  __asm { VSTR            S0, [SP,#0x38+var_28] }
  v16 = *(_DWORD *)(v10 + 560);
  v17 = *(_DWORD *)(v16 + 20);
  *(_DWORD *)v17 = v26;
  *(_DWORD *)(v17 + 4) = v27;
  *(_DWORD *)(v17 + 8) = v28;
  *(float *)(v17 + 12) = v29;
  *(_BYTE *)(v16 + 17) = 1;
  v18 = *(_DWORD *)(v10 + 564);
  v19 = *(_DWORD *)(v18 + 20);
  *(_DWORD *)v19 = *(_DWORD *)a5;
  *(_DWORD *)(v19 + 4) = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(v19 + 8) = *(_DWORD *)(a5 + 8);
  *(_DWORD *)(v19 + 12) = *(_DWORD *)(a5 + 12);
  *(_BYTE *)(v18 + 17) = 1;
  v20 = *(_DWORD *)(v10 + 556);
  v21 = *(_DWORD *)(v20 + 20);
  *(_QWORD *)v21 = *(_QWORD *)&Color::NIL;
  *(_QWORD *)(v21 + 8) = qword_283E6B8;
  *(_BYTE *)(v20 + 17) = 1;
  v22 = *(_DWORD *)(v10 + 584);
  *(_QWORD *)*(_DWORD *)(v22 + 20) = *a7;
  *(_BYTE *)(v22 + 17) = 1;
  return mce::ConstantBufferConstantsBase::sync(
           (mce::ConstantBufferConstantsBase *)(v10 + 548),
           *(mce::RenderContext **)(v7 + 12));
}


int __fastcall EntityShaderManager::_setupFoilShaderParameters(int a1, float a2, float a3, unsigned int a4, int a5, int a6)
{
  int v7; // r7@1
  int v8; // r8@1
  unsigned int v9; // r9@1
  float v10; // r10@1
  unsigned int v11; // r0@1
  int v21; // r0@3
  int v30; // r0@6
  int v36; // r0@7
  __int64 v43; // ST18_8@7
  int v47; // [sp+8h] [bp-90h]@0
  int v48; // [sp+Ch] [bp-8Ch]@0
  float v49; // [sp+28h] [bp-70h]@7
  int v50; // [sp+30h] [bp-68h]@7
  signed int v51; // [sp+34h] [bp-64h]@7
  signed int v52; // [sp+38h] [bp-60h]@7
  signed int v53; // [sp+3Ch] [bp-5Ch]@7
  char v54; // [sp+40h] [bp-58h]@7

  _R6 = a5;
  v7 = a1;
  v8 = LODWORD(a2);
  v9 = a4;
  v10 = a3;
  v11 = *(_DWORD *)(a5 + 20);
  _R1 = (unsigned __int16)v11;
  _R4 = v11 >> 16;
  __asm
  {
    VMOV            S0, R1
    VCVT.F32.U32    S18, S0
    VLDR            S16, [R6,#4]
    VLDR            S20, [R6,#0xC]
    VCMPE.F32       S20, S16
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm
    {
      VMUL.F32        S0, S16, S18
      VMOV            R0, S0
    }
    v21 = roundf(_R0);
    __asm { VMUL.F32        S0, S18, S20 }
    _R5 = v21;
  else
      VMUL.F32        S0, S18, S20
    _R5 = roundf(_R0);
    __asm { VMUL.F32        S0, S16, S18 }
  __asm { VMOV            R0, S0 }
  _R0 = roundf(_R0);
    VMOV            S0, R0
    VLDR            S16, [SP,#0x98+arg_4]
    VMOV            S2, R5
    VCVTR.S32.F32   S0, S0
    VCVTR.S32.F32   S2, S2
    VMOV            R0, S0
    VMOV            R1, S2
  _R0 = (unsigned __int16)(_R1 - _R0);
    VCVT.F32.U32    S0, S0
    VDIV.F32        S18, S18, S0
    VMOV            S0, R4
    VCVT.F32.U32    S20, S0
    VLDR            S22, [R6,#8]
    VLDR            S24, [R6,#0x10]
    VCMPE.F32       S24, S22
      VMUL.F32        S0, S22, S20
    v30 = roundf(_R0);
    __asm { VMUL.F32        S0, S20, S24 }
    _R5 = v30;
      VMUL.F32        S0, S20, S24
    __asm { VMUL.F32        S0, S22, S20 }
    VMOV.F32        S2, #0.5
    VMUL.F32        S18, S18, S2
    VSTR            S18, [SP,#0x98+var_70]
    VDIV.F32        S0, S20, S0
    VMUL.F32        S0, S0, S2
    VSTR            S0, [SP,#0x98+var_6C]
  v36 = getTimeMs();
  __asm { VMOV            R3, S16 }
  _R6 = v36;
  (*(void (__fastcall **)(char *, int, _DWORD, int))(*(_DWORD *)v7 + 8))(&v54, v7, LODWORD(v10), _R3);
  _R0 = 91625969;
  _R1 = 628292359;
    SMMUL.W         R0, R6, R0
    VLDR            S2, =0.00033333
    SMMUL.W         R1, R6, R1
  _R0 = _R6 - 3000 * (((signed int)_R0 >> 6) + (_R0 >> 31));
    VCVT.F32.S32    S0, S0
  _R0 = _R6 - 1750 * (((signed int)_R1 >> 8) + (_R1 >> 31));
    VMOV            S4, R0
    VLDR            S2, =-0.00057143
    VCVT.F32.S32    S4, S4
  v50 = 1065353216;
  v51 = 1065353216;
  v52 = 1065353216;
  v53 = 1065353216;
  LODWORD(v43) = &v49;
  HIDWORD(v43) = &v50;
    VDIV.F32        S0, S0, S18
    VMUL.F32        S2, S4, S2
    VSTR            S0, [SP,#0x98+var_8C]
    VDIV.F32        S2, S2, S18
    VSTR            S2, [SP,#0x98+var_90]
  return EntityShaderManager::_setupShaderParameters(
           (int)&dword_27D2334,
           v8,
           v10,
           COERCE_FLOAT(&v54),
           __PAIR__(&dword_27D2334, v9),
           v47,
           v48,
           -20.0,
           1117782016,
           v43,
           1065353216);
}


int __fastcall EntityShaderManager::_setupShaderParameters(int a1, int a2, float a3, float a4)
{
  __int64 v4; // ST18_8@1
  __int64 v5; // ST00_8@1
  int v7; // [sp+28h] [bp-20h]@1
  int v8; // [sp+2Ch] [bp-1Ch]@1
  signed int v9; // [sp+30h] [bp-18h]@1
  signed int v10; // [sp+34h] [bp-14h]@1

  v7 = 0;
  v8 = 0;
  v9 = 1065353216;
  v10 = 1065353216;
  HIDWORD(v4) = &v7;
  LODWORD(v4) = &Vec2::ONE;
  HIDWORD(v5) = &Color::BLACK;
  LODWORD(v5) = LODWORD(a3) + 232;
  return EntityShaderManager::_setupShaderParameters(LODWORD(a3) + 232, a2, a3, a4, v5, 0, 0, 0.0, 0, v4, 1065353216);
}


int __fastcall EntityShaderManager::_setupFoilShaderParameters(int a1, int a2, float a3, unsigned int a4, _QWORD *a5, int a6)
{
  unsigned int v6; // r11@1
  float v7; // r4@1
  int v8; // r9@1
  int v9; // r7@1
  int v23; // [sp+8h] [bp-70h]@0
  int v24; // [sp+Ch] [bp-6Ch]@0
  int v25; // [sp+28h] [bp-50h]@1
  signed int v26; // [sp+2Ch] [bp-4Ch]@1
  signed int v27; // [sp+30h] [bp-48h]@1
  signed int v28; // [sp+34h] [bp-44h]@1
  char v29; // [sp+38h] [bp-40h]@1

  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = a1;
  _R10 = a5;
  _R5 = getTimeMs();
  __asm { VLDR            S16, [R10] }
  (*(void (__fastcall **)(char *, int, _DWORD, int))(*(_DWORD *)v9 + 8))(&v29, v9, LODWORD(v7), a6);
  _R0 = 91625969;
  _R1 = 628292359;
  __asm
  {
    SMMUL.W         R0, R5, R0
    VLDR            S2, =0.00033333
    SMMUL.W         R1, R5, R1
  }
  _R0 = _R5 - 3000 * (((signed int)_R0 >> 6) + (_R0 >> 31));
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
  _R0 = _R5 - 1750 * (((signed int)_R1 >> 8) + (_R1 >> 31));
    VMOV            S4, R0
    VMUL.F32        S0, S0, S2
    VLDR            S2, =-0.00057143
    VCVT.F32.S32    S4, S4
  v25 = 1065353216;
  v26 = 1065353216;
  v27 = 1065353216;
  v28 = 1065353216;
    VDIV.F32        S0, S0, S16
    VMUL.F32        S2, S4, S2
    VSTR            S0, [SP,#0x78+var_6C]
    VDIV.F32        S2, S2, S16
    VSTR            S2, [SP,#0x78+var_70]
  return EntityShaderManager::_setupShaderParameters(
           (int)&dword_27D2334,
           v8,
           v7,
           COERCE_FLOAT(&v29),
           __PAIR__(&dword_27D2334, v6),
           v23,
           v24,
           -20.0,
           1117782016,
           __PAIR__(&v25, (unsigned int)a5),
           1065353216);
}


int __fastcall EntityShaderManager::_setupShaderParameters(int a1, int a2, float a3, float a4, int a5, int a6)
{
  __int64 v6; // ST18_8@1
  __int64 v7; // ST00_8@1

  HIDWORD(v6) = a6;
  LODWORD(v6) = &Vec2::ONE;
  LODWORD(v7) = LODWORD(a3) + 232;
  HIDWORD(v7) = &Color::BLACK;
  return EntityShaderManager::_setupShaderParameters((int)&Color::BLACK, a2, a3, a4, v7, 0, 0, 0.0, 0, v6, 1065353216);
}


EntityShaderManager *__fastcall EntityShaderManager::~EntityShaderManager(EntityShaderManager *this)
{
  EntityShaderManager *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DCC64;
  v2 = (EntityShaderManager *)((char *)this + 4);
  mce::MaterialPtr::~MaterialPtr((EntityShaderManager *)((char *)this + 28));
  mce::MaterialPtr::~MaterialPtr((EntityShaderManager *)((char *)v1 + 16));
  mce::MaterialPtr::~MaterialPtr(v2);
  return v1;
}


int __fastcall EntityShaderManager::_setupShaderParameters(int a1, float a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9, _QWORD *a10, int a11)
{
  int v11; // r6@1
  int v12; // lr@1
  int v13; // r4@1
  int v14; // r0@1
  int v15; // r5@1
  int v16; // r0@1
  int v17; // r2@1
  int v18; // r0@1
  int v19; // r3@1
  int v20; // r0@1
  __int64 v21; // r4@1
  int v22; // r3@1
  int v24; // r0@1
  int v29; // t1@1
  int v30; // r0@1
  int v31; // t1@1
  int v32; // r0@1

  v11 = *(_DWORD *)(LODWORD(a2) + 32);
  v12 = *(_DWORD *)(v11 + 560);
  v13 = *(_DWORD *)(v12 + 20);
  *(_DWORD *)v13 = Color::WHITE;
  *(float *)(v13 + 4) = unk_283E614;
  *(_QWORD *)(v13 + 8) = qword_283E618;
  *(_BYTE *)(v12 + 17) = 1;
  v14 = *(_DWORD *)(v11 + 556);
  v15 = *(_DWORD *)(v14 + 20);
  *(_DWORD *)v15 = *(_DWORD *)LODWORD(a3);
  *(_DWORD *)(v15 + 4) = *(_DWORD *)(LODWORD(a3) + 4);
  *(_DWORD *)(v15 + 8) = *(_DWORD *)(LODWORD(a3) + 8);
  *(_DWORD *)(v15 + 12) = *(_DWORD *)(LODWORD(a3) + 12);
  *(_BYTE *)(v14 + 17) = 1;
  v16 = *(_DWORD *)(v11 + 564);
  v17 = *(_DWORD *)(v16 + 20);
  *(_DWORD *)v17 = *(_DWORD *)LODWORD(a4);
  *(_DWORD *)(v17 + 4) = *(_DWORD *)(LODWORD(a4) + 4);
  *(_DWORD *)(v17 + 8) = *(_DWORD *)(LODWORD(a4) + 8);
  *(_DWORD *)(v17 + 12) = *(_DWORD *)(LODWORD(a4) + 12);
  *(_BYTE *)(v16 + 17) = 1;
  v18 = *(_DWORD *)(v11 + 568);
  v19 = *(_DWORD *)(v18 + 20);
  *(_DWORD *)v19 = *(_DWORD *)LODWORD(a5);
  *(_DWORD *)(v19 + 4) = *(_DWORD *)(LODWORD(a5) + 4);
  *(_DWORD *)(v19 + 8) = *(_DWORD *)(LODWORD(a5) + 8);
  *(_DWORD *)(v19 + 12) = *(_DWORD *)(LODWORD(a5) + 12);
  *(_BYTE *)(v18 + 17) = 1;
  v20 = *(_DWORD *)(v11 + 572);
  v21 = *(_QWORD *)(a11 + 8);
  v22 = *(_DWORD *)(v20 + 20);
  *(_QWORD *)v22 = *(_QWORD *)a11;
  *(_QWORD *)(v22 + 8) = v21;
  *(_BYTE *)(v20 + 17) = 1;
  _R2 = &mce::Math::DEGRAD;
  v24 = *(_DWORD *)(v11 + 576);
  __asm
  {
    VLDR            S0, [SP,#0x10+arg_10]
    VLDR            S2, [R2]
  }
  v29 = *(_DWORD *)(v24 + 20);
    VLDR            S4, [SP,#0x10+arg_C]
    VMUL.F32        S0, S2, S0
    VLDR            S6, [SP,#0x10+arg_4]
    VLDR            S8, [SP,#0x10+arg_8]
    VMUL.F32        S2, S2, S4
    VSTR            S6, [R2]
    VSTR            S8, [R2,#4]
  *(_BYTE *)(v24 + 17) = 1;
  v30 = *(_DWORD *)(v11 + 580);
  v31 = *(_DWORD *)(v30 + 20);
    VSTR            S2, [R2]
    VSTR            S0, [R2,#4]
  *(_BYTE *)(v30 + 17) = 1;
  v32 = *(_DWORD *)(v11 + 584);
  *(_QWORD *)*(_DWORD *)(v32 + 20) = *a10;
  *(_BYTE *)(v32 + 17) = 1;
  return j_j_j__ZN3mce27ConstantBufferConstantsBase4syncERNS_13RenderContextE(
           (mce::ConstantBufferConstantsBase *)(v11 + 548),
           *(mce::RenderContext **)(LODWORD(a2) + 12));
}


int __fastcall EntityShaderManager::_setupShaderParameters(int a1, int a2, float a3)
{
  int v3; // r5@1
  float v4; // r4@1
  __int64 v5; // ST18_8@1
  __int64 v6; // ST00_8@1
  int v8; // [sp+2Ch] [bp-10h]@1
  int v9; // [sp+30h] [bp-Ch]@1
  signed int v10; // [sp+34h] [bp-8h]@1
  signed int v11; // [sp+38h] [bp-4h]@1
  int v12; // [sp+3Ch] [bp+0h]@1

  v3 = a2;
  v4 = a3;
  (*(void (__fastcall **)(int *))(*(_DWORD *)a1 + 8))(&v12);
  v8 = 0;
  v9 = 0;
  v10 = 1065353216;
  v11 = 1065353216;
  HIDWORD(v5) = &v8;
  LODWORD(v5) = &Vec2::ONE;
  HIDWORD(v6) = &Color::BLACK;
  LODWORD(v6) = LODWORD(v4) + 232;
  return EntityShaderManager::_setupShaderParameters(
           LODWORD(v4) + 232,
           v3,
           v4,
           COERCE_FLOAT(&v12),
           v6,
           0,
           0.0,
           v5,
           1065353216);
}


signed int __fastcall EntityShaderManager::_setupFoilShaderParameters(int a1, int a2, int a3)
{
  int v4; // r5@1
  unsigned int v5; // r0@1
  int v6; // r8@1
  int v16; // r0@3
  int v25; // r0@6
  float v32; // [sp+8h] [bp-40h]@7

  _R6 = a3;
  v4 = a1;
  v5 = *(_DWORD *)(a3 + 20);
  v6 = a2;
  _R1 = (unsigned __int16)v5;
  _R4 = v5 >> 16;
  __asm
  {
    VMOV            S0, R1
    VCVT.F32.U32    S16, S0
    VLDR            S18, [R6,#4]
    VLDR            S20, [R6,#0xC]
    VCMPE.F32       S20, S18
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm
    {
      VMUL.F32        S0, S18, S16
      VMOV            R0, S0
    }
    v16 = roundf(_R0);
    __asm { VMUL.F32        S0, S16, S20 }
    _R7 = v16;
  else
      VMUL.F32        S0, S16, S20
    _R7 = roundf(_R0);
    __asm { VMUL.F32        S0, S18, S16 }
  __asm { VMOV            R0, S0 }
  _R0 = roundf(_R0);
    VMOV            S0, R0
    VMOV            S2, R7
    VCVTR.S32.F32   S0, S0
    VCVTR.S32.F32   S2, S2
    VMOV            R0, S0
    VMOV            R1, S2
  _R0 = (unsigned __int16)(_R1 - _R0);
    VCVT.F32.U32    S0, S0
    VDIV.F32        S16, S16, S0
    VMOV            S0, R4
    VCVT.F32.U32    S18, S0
    VLDR            S20, [R6,#8]
    VLDR            S22, [R6,#0x10]
    VCMPE.F32       S22, S20
      VMUL.F32        S0, S20, S18
    v25 = roundf(_R0);
    __asm { VMUL.F32        S0, S18, S22 }
    _R6 = v25;
      VMUL.F32        S0, S18, S22
    _R6 = roundf(_R0);
    __asm { VMUL.F32        S0, S20, S18 }
    VMOV            S2, R6
    VMOV.F32        S2, #0.5
    VMUL.F32        S4, S16, S2
    VSTR            S4, [SP,#0x48+var_40]
    VDIV.F32        S0, S18, S0
    VMUL.F32        S0, S0, S2
    VSTR            S0, [SP,#0x48+var_3C]
  return EntityShaderManager::_setupFoilShaderParameters(v4, v6, (int)&Color::NIL, (int)&Color::WHITE, &v32);
}


void __fastcall EntityShaderManager::~EntityShaderManager(EntityShaderManager *this)
{
  EntityShaderManager *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DCC64;
  v2 = (EntityShaderManager *)((char *)this + 4);
  mce::MaterialPtr::~MaterialPtr((EntityShaderManager *)((char *)this + 28));
  mce::MaterialPtr::~MaterialPtr((EntityShaderManager *)((char *)v1 + 16));
  mce::MaterialPtr::~MaterialPtr(v2);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall EntityShaderManager::_setupShaderParameters(int a1, int a2, float a3, float a4, unsigned int a5, int a6, int a7)
{
  __int64 v11; // ST18_8@1
  int v13; // [sp+20h] [bp-18h]@0

  __asm
  {
    VLDR            S0, [SP,#0x38+arg_8]
    VSTR            S0, [SP,#0x38+var_18]
  }
  LODWORD(v11) = &Vec2::ONE;
  HIDWORD(v11) = a6;
  return EntityShaderManager::_setupShaderParameters(
           (int)&Color::BLACK,
           a2,
           a3,
           a4,
           __PAIR__(&Color::BLACK, a5),
           0,
           0.0,
           v11,
           v13);
}


char *__fastcall EntityShaderManager::getTransparentEntityMaterial(EntityShaderManager *this)
{
  return (char *)this + 16;
}


int __fastcall EntityShaderManager::_setupShaderParameters(float a1, int a2, int a3, float a4, float a5)
{
  __int64 v5; // ST18_8@1
  int v7; // [sp+2Ch] [bp+0h]@1
  int v8; // [sp+30h] [bp+4h]@1
  signed int v9; // [sp+34h] [bp+8h]@1
  signed int v10; // [sp+38h] [bp+Ch]@1

  v7 = 0;
  v8 = 0;
  v9 = 1065353216;
  v10 = 1065353216;
  LODWORD(v5) = &Vec2::ONE;
  HIDWORD(v5) = &v7;
  return EntityShaderManager::_setupShaderParameters(
           (int)&Color::BLACK,
           a2,
           *(float *)&a3,
           a4,
           __PAIR__(&Color::BLACK, LODWORD(a5)),
           0,
           0.0,
           v5,
           1065353216);
}


int __fastcall EntityShaderManager::_setupShaderParameters(int a1, float a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9, unsigned int a10)
{
  int v10; // r6@1
  float v11; // r5@1
  float v12; // r4@1
  int v18; // [sp+8h] [bp-58h]@0
  int v19; // [sp+Ch] [bp-54h]@0
  float v20; // [sp+10h] [bp-50h]@0
  int v21; // [sp+14h] [bp-4Ch]@0
  int v22; // [sp+28h] [bp-38h]@1
  int v23; // [sp+2Ch] [bp-34h]@1
  signed int v24; // [sp+30h] [bp-30h]@1
  signed int v25; // [sp+34h] [bp-2Ch]@1
  char v26; // [sp+38h] [bp-28h]@1

  v10 = LODWORD(a2);
  v11 = a4;
  v12 = a3;
  (*(void (__fastcall **)(char *))(*(_DWORD *)a1 + 8))(&v26);
  __asm
  {
    VLDR            S0, [SP,#0x60+arg_C]
    VLDR            S2, [SP,#0x60+arg_8]
    VLDR            S4, [SP,#0x60+arg_4]
    VLDR            S6, [SP,#0x60+arg_10]
  }
  v22 = 0;
  v23 = 0;
  v24 = 1065353216;
  v25 = 1065353216;
    VSTR            S6, [SP,#0x60+var_4C]
    VSTR            S0, [SP,#0x60+var_50]
    VSTR            S2, [SP,#0x60+var_54]
    VSTR            S4, [SP,#0x60+var_58]
  return EntityShaderManager::_setupShaderParameters(
           SLODWORD(a5),
           v10,
           v12,
           COERCE_FLOAT(&v26),
           __PAIR__(LODWORD(a5), LODWORD(v11)),
           v18,
           v19,
           v20,
           v21,
           __PAIR__(&v22, a10),
           1065353216);
}


void __fastcall EntityShaderManager::~EntityShaderManager(EntityShaderManager *this)
{
  EntityShaderManager::~EntityShaderManager(this);
}


signed int __fastcall EntityShaderManager::_setupShaderParameters(int a1, int a2, int a3, int a4, int a5, int a6, _QWORD *a7)
{
  BlockSource *v7; // r5@1
  int v8; // r9@1
  int v9; // r4@1
  Dimension *v10; // r0@2
  int v15; // r1@5
  int v16; // r0@5
  float v17; // r3@5
  __int64 v18; // kr00_8@5
  int v19; // r1@5
  int v20; // r3@5
  int v21; // r1@5
  int v22; // r3@5
  int v23; // r1@5
  char v25; // [sp+4h] [bp-4Ch]@2
  char v26; // [sp+5h] [bp-4Bh]@2
  char v27; // [sp+8h] [bp-48h]@2
  float v28; // [sp+Ch] [bp-44h]@2
  int v29; // [sp+10h] [bp-40h]@2
  int v30; // [sp+18h] [bp-38h]@1
  float v31; // [sp+1Ch] [bp-34h]@1
  __int64 v32; // [sp+20h] [bp-30h]@1
  char v33; // [sp+2Ch] [bp-24h]@1
  char v34; // [sp+30h] [bp-20h]@1
  char v35; // [sp+31h] [bp-1Fh]@2

  v7 = (BlockSource *)a3;
  v8 = a2;
  v33 = Brightness::MIN;
  BlockSource::getLightColor((int)&v34, a3, a4, &v33);
  v9 = *(_DWORD *)(v8 + 32);
  v30 = Color::WHITE;
  v31 = unk_283E614;
  v32 = qword_283E618;
  if ( !a6 )
  {
    v25 = v34;
    v26 = v35;
    LightTexture::getColorForUV((int)&v27, (int)&v25);
    v30 = *(_DWORD *)&v27;
    v31 = v28;
    LODWORD(v32) = v29;
    v10 = (Dimension *)BlockSource::getDimension(v7);
    Dimension::hasCeiling(v10);
    __asm
    {
      VMOV.F32        S2, #-1.0
      VMOV.F32        S0, #1.0
    }
    if ( !_ZF )
      __asm { VMOVNE.F32      S0, S2 }
    __asm { VSTR            S0, [SP,#0x50+anonymous_1+4] }
  }
  v15 = *(_DWORD *)(v9 + 560);
  v16 = *(_DWORD *)(v15 + 20);
  v17 = v31;
  v18 = v32;
  *(_DWORD *)v16 = v30;
  *(float *)(v16 + 4) = v17;
  *(_QWORD *)(v16 + 8) = v18;
  *(_BYTE *)(v15 + 17) = 1;
  v19 = *(_DWORD *)(v9 + 564);
  v20 = *(_DWORD *)(v19 + 20);
  *(_DWORD *)v20 = Color::WHITE;
  *(float *)(v20 + 4) = unk_283E614;
  *(_QWORD *)(v20 + 8) = qword_283E618;
  *(_BYTE *)(v19 + 17) = 1;
  v21 = *(_DWORD *)(v9 + 556);
  v22 = *(_DWORD *)(v21 + 20);
  *(_QWORD *)v22 = *(_QWORD *)&Color::NIL;
  *(_QWORD *)(v22 + 8) = qword_283E6B8;
  *(_BYTE *)(v21 + 17) = 1;
  v23 = *(_DWORD *)(v9 + 584);
  *(_QWORD *)*(_DWORD *)(v23 + 20) = *a7;
  *(_BYTE *)(v23 + 17) = 1;
  return mce::ConstantBufferConstantsBase::sync(
           (mce::ConstantBufferConstantsBase *)(v9 + 548),
           *(mce::RenderContext **)(v8 + 12));
}


signed int __fastcall EntityShaderManager::_setupShaderParameters(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r12@1
  signed int v6; // r5@1
  int v7; // lr@1
  int v8; // r0@1
  int v9; // r2@3
  int v10; // r5@3

  v5 = *(_DWORD *)(a2 + 32);
  v6 = 1065353216;
  v7 = *(_DWORD *)(v5 + 560);
  v8 = *(_DWORD *)(v7 + 20);
  if ( a5 )
    v6 = -1082130432;
  *(_DWORD *)v8 = a3;
  *(_DWORD *)(v8 + 4) = a3;
  *(_DWORD *)(v8 + 8) = a3;
  *(_DWORD *)(v8 + 12) = v6;
  *(_BYTE *)(v7 + 17) = 1;
  v9 = *(_DWORD *)(v5 + 556);
  v10 = *(_DWORD *)(v9 + 20);
  *(_DWORD *)v10 = *(_DWORD *)a4;
  *(_DWORD *)(v10 + 4) = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(v10 + 8) = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(v10 + 12) = *(_DWORD *)(a4 + 12);
  *(_BYTE *)(v9 + 17) = 1;
  return j_j_j__ZN3mce27ConstantBufferConstantsBase4syncERNS_13RenderContextE(
           (mce::ConstantBufferConstantsBase *)(v5 + 548),
           *(mce::RenderContext **)(a2 + 12));
}


int __fastcall EntityShaderManager::_getOverlayColor(EntityShaderManager *this, Entity *a2, float a3)
{
  int v3; // r5@1
  EntityShaderManager *v4; // r4@1
  int v5; // r0@1
  int v13; // r1@18
  int result; // r0@18
  int v15; // r0@20
  int v18; // r0@21
  char *v19; // r0@23
  int v20; // r1@27
  int v21; // r2@27
  int v22; // r3@27

  v3 = LODWORD(a3);
  v4 = this;
  v5 = *(_DWORD *)(LODWORD(a3) + 444);
  if ( v5 < 0 )
    goto LABEL_19;
  _R6 = *(_DWORD *)(LODWORD(a3) + 416) - v5;
  if ( !*(_DWORD *)(LODWORD(a3) + 428)
    && (*(int (__fastcall **)(_DWORD))(*(_DWORD *)LODWORD(a3) + 320))(LODWORD(a3)) != 1 )
  {
    if ( _R6 > 4 )
      goto LABEL_19;
    __asm
    {
      VMOV            S0, R6
      VLDR            S2, =0.2
      VCVT.F32.S32    S0, S0
      VMUL.F32        S4, S0, S2
      VLDR            S0, =0.0
      VMOV.F32        S2, #1.0
      VCMPE.F32       S4, #0.0
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S4, S2
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S0, S4 }
    __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VSUB.F32        S0, S2, S0 }
LABEL_16:
      VCMPE.F32       S0, #0.0
      __asm
      {
        VMOV            S2, R6
        VMOV.F32        S16, S0
        VCVT.F32.S32    S2, S2
      }
LABEL_18:
        VLDR            S0, =0.1
        VMUL.F32        S0, S2, S0
      _R0 = &mce::Math::PI;
        VLDR            S2, [R0]
        VMUL.F32        S0, S0, S2
        VMOV            R0, S0
      _R0 = sinf(_R0);
        VMOV            S0, R0
        VLDR            S2, =-0.15
        VMOV            R0, S16
        VMUL.F32        S0, S0, S0
      v13 = qword_283E6B8;
        VLDR            S2, =0.3
      *(_QWORD *)v4 = *(_QWORD *)&Color::NIL;
      *((_DWORD *)v4 + 2) = v13;
      *(_DWORD *)v4 = 1061997773;
        VADD.F32        S0, S0, S2
        VSTR            S0, [R4,#4]
      result = mce::Math::hermiteBlend(_R0, 0.8);
        VLDR            S0, =0.7
        VMOV            S2, R0
        VSTR            S0, [R4,#0xC]
      return result;
LABEL_19:
    if ( Entity::hasCategory(v3, 2) == 1 )
      v15 = *(_DWORD *)(v3 + 3432);
      _VF = 0;
      _NF = v15 < 0;
      if ( v15 <= 0 )
        v18 = *(_DWORD *)(v3 + 3448);
        _VF = __OFSUB__(v18, 1);
        _NF = v18 - 1 < 0;
      if ( !(_NF ^ _VF) )
        goto LABEL_23;
      if ( *(_BYTE *)(v3 + 3080) )
        *(_BYTE *)(v3 + 3080) = 0;
        result = 1065353216;
        *(_DWORD *)v4 = 1065353216;
        *((_DWORD *)v4 + 1) = 1065353216;
        *((_QWORD *)v4 + 1) = 4474776592538664960LL;
        return result;
    v19 = (char *)&Color::NIL;
    goto LABEL_27;
  }
  if ( Entity::hasCategory(v3, 2) != 1 || *(_DWORD *)(v3 + 3432) < 1 )
      VMOV.F32        S16, #1.0
      VCVT.F32.S32    S2, S0
      VLDR            S0, =0.2
      VMUL.F32        S4, S2, S0
      VCMPE.F32       S4, S16
      goto LABEL_18;
    goto LABEL_16;
LABEL_23:
  v19 = Entity::getHurtColor((Entity *)v3);
LABEL_27:
  v20 = *(_DWORD *)v19;
  v21 = *((_DWORD *)v19 + 1);
  v22 = *((_DWORD *)v19 + 2);
  result = *((_DWORD *)v19 + 3);
  *(_DWORD *)v4 = v20;
  *((_DWORD *)v4 + 1) = v21;
  *((_DWORD *)v4 + 2) = v22;
  *((_DWORD *)v4 + 3) = result;
  return result;
}


int __fastcall EntityShaderManager::_setupShaderParameters(int a1, int a2, float a3, float a4, __int64 a5, int a6, int a7, float a8, int a9, __int64 a10, int a12)
{
  int v12; // r8@1
  float v13; // r10@1
  int v14; // r9@1
  int v15; // r0@1
  int v16; // r7@1
  _QWORD *v17; // r12@1
  __int64 v18; // r4@1
  int v23; // r1@3
  int v24; // r2@3
  unsigned int v25; // r6@4
  int v26; // lr@4
  int v27; // r8@4
  int v28; // r0@5
  unsigned int v29; // r6@6
  unsigned int v30; // r7@6
  int v31; // r0@6
  char *v32; // r2@6
  char *v33; // r1@6
  unsigned __int8 v34; // r2@8
  int v35; // r0@12
  int v36; // r0@12
  unsigned int v37; // r5@13
  unsigned int v38; // r8@13
  int v39; // r0@13
  char *v40; // r2@13
  char *v41; // r1@13
  unsigned int v42; // r8@15
  unsigned int v43; // r5@17
  int v44; // r0@17
  char *v45; // r2@17
  char *v46; // r1@17
  unsigned __int8 v47; // r2@19
  unsigned int v48; // r5@23
  unsigned int v49; // r8@23
  int v50; // r0@23
  char *v51; // r2@23
  char *v52; // r1@23
  unsigned int v53; // r8@25
  unsigned int v54; // r5@27
  int v55; // r0@27
  char *v56; // r2@27
  char *v57; // r1@27
  unsigned __int8 v58; // r2@29
  Dimension *v59; // r0@32
  int v60; // r0@35
  int v61; // r1@35
  float v62; // r3@35
  __int64 v63; // kr18_8@35
  int v64; // r1@36
  int v65; // r0@36
  int v66; // r1@36
  int v68; // r2@36
  int v69; // r1@36
  int v70; // r2@36
  int v71; // r1@36
  int v72; // r2@36
  int v73; // r3@36
  int v74; // r5@36
  int v75; // r4@36
  int v76; // r7@36
  int v77; // r1@36
  int v78; // t1@36
  int v79; // r1@36
  int v80; // t1@36
  int v81; // r1@36
  unsigned int v83; // [sp+4h] [bp-13Ch]@5
  int v84; // [sp+8h] [bp-138h]@4
  unsigned __int8 v85; // [sp+Ch] [bp-134h]@32
  unsigned __int8 v86; // [sp+Dh] [bp-133h]@32
  char v87; // [sp+10h] [bp-130h]@32
  float v88; // [sp+14h] [bp-12Ch]@32
  int v89; // [sp+18h] [bp-128h]@32
  char v90; // [sp+20h] [bp-120h]@27
  unsigned __int8 v91; // [sp+24h] [bp-11Ch]@27
  unsigned __int8 v92; // [sp+25h] [bp-11Bh]@27
  char v93; // [sp+26h] [bp-11Ah]@27
  char v94; // [sp+27h] [bp-119h]@27
  char v95; // [sp+28h] [bp-118h]@23
  unsigned __int8 v96; // [sp+2Ch] [bp-114h]@23
  unsigned __int8 v97; // [sp+2Dh] [bp-113h]@23
  unsigned __int8 v98; // [sp+2Eh] [bp-112h]@23
  unsigned __int8 v99; // [sp+2Fh] [bp-111h]@23
  char v100; // [sp+30h] [bp-110h]@17
  unsigned __int8 v101; // [sp+34h] [bp-10Ch]@17
  unsigned __int8 v102; // [sp+35h] [bp-10Bh]@17
  char v103; // [sp+36h] [bp-10Ah]@17
  char v104; // [sp+37h] [bp-109h]@17
  char v105; // [sp+38h] [bp-108h]@13
  unsigned __int8 v106; // [sp+3Ch] [bp-104h]@13
  unsigned __int8 v107; // [sp+3Dh] [bp-103h]@13
  unsigned __int8 v108; // [sp+3Eh] [bp-102h]@13
  unsigned __int8 v109; // [sp+3Fh] [bp-101h]@13
  unsigned __int64 v110; // [sp+40h] [bp-100h]@12
  int v111; // [sp+48h] [bp-F8h]@12
  char v112; // [sp+4Ch] [bp-F4h]@12
  int v113; // [sp+54h] [bp-ECh]@22
  unsigned __int64 v114; // [sp+58h] [bp-E8h]@12
  int v115; // [sp+60h] [bp-E0h]@12
  char v116; // [sp+64h] [bp-DCh]@12
  int v117; // [sp+6Ch] [bp-D4h]@22
  int v118; // [sp+70h] [bp-D0h]@12
  unsigned int v119; // [sp+74h] [bp-CCh]@12
  int v120; // [sp+78h] [bp-C8h]@12
  int v121; // [sp+7Ch] [bp-C4h]@12
  int v122; // [sp+88h] [bp-B8h]@12
  unsigned int v123; // [sp+8Ch] [bp-B4h]@12
  int v124; // [sp+90h] [bp-B0h]@12
  int v125; // [sp+94h] [bp-ACh]@12
  char v126; // [sp+A0h] [bp-A0h]@6
  unsigned __int8 v127; // [sp+A4h] [bp-9Ch]@6
  unsigned __int8 v128; // [sp+A5h] [bp-9Bh]@6
  unsigned __int8 v129; // [sp+A6h] [bp-9Ah]@6
  unsigned __int8 v130; // [sp+A7h] [bp-99h]@6
  char v131; // [sp+A8h] [bp-98h]@5
  unsigned __int8 v132; // [sp+ACh] [bp-94h]@5
  unsigned __int8 v133; // [sp+ADh] [bp-93h]@6
  int v134; // [sp+B0h] [bp-90h]@5
  int v135; // [sp+B8h] [bp-88h]@5
  char v136; // [sp+BCh] [bp-84h]@5
  int v137; // [sp+C0h] [bp-80h]@5
  int v138; // [sp+C8h] [bp-78h]@5
  int v139; // [sp+D0h] [bp-70h]@5
  char v140; // [sp+D4h] [bp-6Ch]@5
  int v141; // [sp+D8h] [bp-68h]@5
  float v142; // [sp+E0h] [bp-60h]@4
  float v143; // [sp+E4h] [bp-5Ch]@4
  __int64 v144; // [sp+E8h] [bp-58h]@4

  _R11 = a3;
  v12 = a2;
  v13 = a4;
  v14 = *(_DWORD *)(a2 + 32);
  v15 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)LODWORD(a3) + 52))(LODWORD(a3));
  v16 = HIDWORD(a10);
  v17 = (_QWORD *)a10;
  v18 = a5;
  __asm
  {
    VLDR            S20, [SP,#0x140+arg_14]
    VLDR            S18, [SP,#0x140+arg_10]
    VLDR            S16, [SP,#0x140+arg_C]
    VLDR            S22, [SP,#0x140+arg_8]
  }
  if ( _ZF )
    v23 = *(_DWORD *)(v14 + 560);
    v24 = *(_DWORD *)(v23 + 20);
    *(_DWORD *)v24 = Color::WHITE;
    *(float *)(v24 + 4) = unk_283E614;
    *(_QWORD *)(v24 + 8) = qword_283E618;
    *(_BYTE *)(v23 + 17) = 1;
  else
    v84 = v12;
    v25 = *(_QWORD *)v15 >> 32;
    v26 = *(_QWORD *)v15;
    v27 = *(_DWORD *)(v15 + 8);
    __asm { VLDR            S24, [SP,#0x140+arg_20] }
    v142 = *(float *)&Color::WHITE;
    v143 = unk_283E614;
    v144 = qword_283E618;
    if ( !*(_BYTE *)(LODWORD(_R11) + 228) )
    {
      __asm
      {
        VLDR            S2, [R11,#0x118]
        VLDR            S0, =0.01
      }
      v83 = v25;
      __asm { VADD.F32        S0, S2, S0 }
      v138 = v26;
      __asm { VSTR            S0, [SP,#0x140+var_74] }
      v139 = v27;
      BlockPos::BlockPos((int)&v140, (int)&v138);
        VLDR            S2, [R11,#0x10C]
        VLDR            S0, =-0.01
      v134 = v26;
        VADD.F32        S0, S2, S0
        VSTR            S0, [SP,#0x140+var_8C]
      v135 = v27;
      BlockPos::BlockPos((int)&v136, (int)&v134);
      v28 = Entity::getRegion((Entity *)LODWORD(_R11));
      v131 = Brightness::MIN;
      BlockSource::getLightColor((int)&v132, v28, (int)&v140, &v131);
      if ( v141 != v137 )
        v29 = v132;
        v30 = v133;
        v130 = v132;
        v129 = v133;
        v31 = Entity::getRegion((Entity *)LODWORD(_R11));
        v126 = Brightness::MIN;
        BlockSource::getLightColor((int)&v127, v31, (int)&v136, &v126);
        v32 = (char *)&v129;
        v33 = (char *)&v130;
        if ( v30 < v128 )
          v32 = (char *)((unsigned int)&v127 | 1);
        v34 = *v32;
        if ( v29 < v127 )
          v33 = (char *)&v127;
        v132 = *v33;
        v133 = v34;
      if ( *(_BYTE *)(LODWORD(_R11) + 229) )
        v122 = *(_DWORD *)(LODWORD(_R11) + 264);
        v123 = v83;
        v124 = v27;
        BlockPos::BlockPos((int)&v125, (int)&v122);
        v118 = *(_DWORD *)(LODWORD(_R11) + 276);
        v119 = v83;
        v120 = v27;
        BlockPos::BlockPos((int)&v121, (int)&v118);
        v35 = *(_DWORD *)(LODWORD(_R11) + 272);
        v114 = __PAIR__(v83, v26);
        v115 = v35;
        BlockPos::BlockPos((int)&v116, (int)&v114);
        v36 = *(_DWORD *)(LODWORD(_R11) + 284);
        v110 = __PAIR__(v83, v26);
        v111 = v36;
        BlockPos::BlockPos((int)&v112, (int)&v110);
        if ( v125 != v121 )
        {
          v37 = v132;
          v38 = v133;
          v109 = v132;
          v108 = v133;
          v39 = Entity::getRegion((Entity *)LODWORD(_R11));
          v105 = Brightness::MIN;
          BlockSource::getLightColor((int)&v106, v39, (int)&v125, &v105);
          v40 = (char *)&v108;
          v41 = (char *)&v109;
          if ( v38 < v107 )
            v40 = (char *)((unsigned int)&v106 | 1);
          v42 = (unsigned __int8)*v40;
          if ( v37 < v106 )
            v41 = (char *)&v106;
          v43 = (unsigned __int8)*v41;
          v132 = v43;
          v133 = v42;
          v104 = v43;
          v103 = v42;
          v44 = Entity::getRegion((Entity *)LODWORD(_R11));
          v100 = Brightness::MIN;
          BlockSource::getLightColor((int)&v101, v44, (int)&v121, &v100);
          v45 = &v103;
          v46 = &v104;
          if ( v42 < v102 )
            v45 = (char *)((unsigned int)&v101 | 1);
          v47 = *v45;
          if ( v43 < v101 )
            v46 = (char *)&v101;
          v132 = *v46;
          v133 = v47;
        }
        if ( v117 != v113 )
          v48 = v132;
          v49 = v133;
          v99 = v132;
          v98 = v133;
          v50 = Entity::getRegion((Entity *)LODWORD(_R11));
          v95 = Brightness::MIN;
          BlockSource::getLightColor((int)&v96, v50, (int)&v116, &v95);
          v51 = (char *)&v98;
          v52 = (char *)&v99;
          if ( v49 < v97 )
            v51 = (char *)((unsigned int)&v96 | 1);
          v53 = (unsigned __int8)*v51;
          if ( v48 < v96 )
            v52 = (char *)&v96;
          v54 = (unsigned __int8)*v52;
          v132 = v54;
          v133 = v53;
          v94 = v54;
          v93 = v53;
          v55 = Entity::getRegion((Entity *)LODWORD(_R11));
          v90 = Brightness::MIN;
          BlockSource::getLightColor((int)&v91, v55, (int)&v112, &v90);
          v56 = &v93;
          v57 = &v94;
          if ( v53 < v92 )
            v56 = (char *)((unsigned int)&v91 | 1);
          v58 = *v56;
          if ( v54 < v91 )
            v57 = (char *)&v91;
          v132 = *v57;
          v133 = v58;
      v85 = v132;
      v86 = v133;
      LightTexture::getColorForUV((int)&v87, (int)&v85);
      v142 = *(float *)&v87;
      v143 = v88;
      LODWORD(v144) = v89;
      v59 = (Dimension *)Entity::getDimension((Entity *)LODWORD(_R11));
      Dimension::hasCeiling(v59);
        VMOV.F32        S2, #-1.0
        VMOV.F32        S0, #1.0
      if ( !_ZF )
        __asm { VMOVNE.F32      S0, S2 }
      __asm { VSTR            S0, [SP,#0x140+var_58+4] }
      v16 = HIDWORD(a10);
      v17 = (_QWORD *)a10;
      v18 = a5;
    }
    __asm
      VLDR            S0, [SP,#0x140+var_60]
      VMUL.F32        S0, S0, S24
      VSTR            S0, [SP,#0x140+var_60]
      VLDR            S0, [SP,#0x140+var_5C]
      VSTR            S0, [SP,#0x140+var_5C]
      VLDR            S0, [SP,#0x140+var_58]
      VSTR            S0, [SP,#0x140+var_58]
    v60 = *(_DWORD *)(v14 + 560);
    v61 = *(_DWORD *)(v60 + 20);
    v62 = v143;
    v63 = v144;
    *(float *)v61 = v142;
    *(float *)(v61 + 4) = v62;
    *(_QWORD *)(v61 + 8) = v63;
    v12 = v84;
    *(_BYTE *)(v60 + 17) = 1;
  v64 = *(_DWORD *)(v14 + 556);
  v65 = *(_DWORD *)(v64 + 20);
  *(_DWORD *)v65 = *(_DWORD *)LODWORD(v13);
  *(_DWORD *)(v65 + 4) = *(_DWORD *)(LODWORD(v13) + 4);
  *(_DWORD *)(v65 + 8) = *(_DWORD *)(LODWORD(v13) + 8);
  *(_DWORD *)(v65 + 12) = *(_DWORD *)(LODWORD(v13) + 12);
  *(_BYTE *)(v64 + 17) = 1;
  v66 = *(_DWORD *)(v14 + 564);
  _R6 = &mce::Math::DEGRAD;
  v68 = *(_DWORD *)(v66 + 20);
  __asm { VLDR            S0, [R6] }
  *(_DWORD *)v68 = *(_DWORD *)v18;
  __asm { VMUL.F32        S2, S0, S20 }
  *(_DWORD *)(v68 + 4) = *(_DWORD *)(v18 + 4);
  __asm { VMUL.F32        S0, S0, S18 }
  *(_DWORD *)(v68 + 8) = *(_DWORD *)(v18 + 8);
  *(_DWORD *)(v68 + 12) = *(_DWORD *)(v18 + 12);
  *(_BYTE *)(v66 + 17) = 1;
  v69 = *(_DWORD *)(v14 + 568);
  v70 = *(_DWORD *)(v69 + 20);
  *(_QWORD *)v70 = *(_QWORD *)HIDWORD(v18);
  *(_QWORD *)(v70 + 8) = *(_QWORD *)(HIDWORD(v18) + 8);
  *(_BYTE *)(v69 + 17) = 1;
  v71 = *(_DWORD *)(v14 + 572);
  v72 = *(_DWORD *)v16;
  v73 = *(_DWORD *)(v16 + 4);
  v74 = *(_DWORD *)(v16 + 8);
  v75 = *(_DWORD *)(v16 + 12);
  v76 = *(_DWORD *)(v71 + 20);
  *(_DWORD *)v76 = v72;
  *(_DWORD *)(v76 + 4) = v73;
  *(_DWORD *)(v76 + 8) = v74;
  *(_DWORD *)(v76 + 12) = v75;
  *(_BYTE *)(v71 + 17) = 1;
  v77 = *(_DWORD *)(v14 + 576);
  v78 = *(_DWORD *)(v77 + 20);
    VSTR            S22, [R2]
    VSTR            S16, [R2,#4]
  *(_BYTE *)(v77 + 17) = 1;
  v79 = *(_DWORD *)(v14 + 580);
  v80 = *(_DWORD *)(v79 + 20);
    VSTR            S0, [R2]
    VSTR            S2, [R2,#4]
  *(_BYTE *)(v79 + 17) = 1;
  v81 = *(_DWORD *)(v14 + 584);
  *(_QWORD *)*(_DWORD *)(v81 + 20) = *v17;
  *(_BYTE *)(v81 + 17) = 1;
  return mce::ConstantBufferConstantsBase::sync(
           (mce::ConstantBufferConstantsBase *)(v14 + 548),
           *(mce::RenderContext **)(v12 + 12));
}


signed int __fastcall EntityShaderManager::_setupFoilShaderParameters(int a1, int a2, int a3, int a4, _QWORD *a5)
{
  int v5; // r5@1
  int v6; // r6@1
  int v7; // r8@1
  int v9; // r2@1
  int v11; // r4@1
  int v16; // r7@1
  int v17; // r1@1
  int v18; // r7@1
  int v19; // r1@1
  int v20; // r7@1
  int v27; // r1@1
  int v28; // r0@1
  int v29; // r0@1
  int v30; // r3@1
  int v32; // r0@1
  int v33; // t1@1
  int v34; // r0@1
  int v35; // t1@1
  int v36; // r0@1

  v5 = a4;
  v6 = a3;
  v7 = a2;
  _R0 = getTimeMs();
  v9 = *(_DWORD *)(v7 + 32);
  _R12 = a5;
  v11 = *(_DWORD *)(v9 + 560);
  __asm { VLDR            S4, =-0.00057143 }
  v16 = *(_DWORD *)(v11 + 20);
  __asm { VLDR            S0, [R12] }
  *(_DWORD *)v16 = Color::WHITE;
  *(float *)(v16 + 4) = unk_283E614;
  *(_QWORD *)(v16 + 8) = qword_283E618;
  *(_BYTE *)(v11 + 17) = 1;
  v17 = *(_DWORD *)(v9 + 556);
  v18 = *(_DWORD *)(v17 + 20);
  *(_DWORD *)v18 = *(_DWORD *)v6;
  *(_DWORD *)(v18 + 4) = *(_DWORD *)(v6 + 4);
  *(_DWORD *)(v18 + 8) = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v18 + 12) = *(_DWORD *)(v6 + 12);
  *(_BYTE *)(v17 + 17) = 1;
  v19 = *(_DWORD *)(v9 + 564);
  v20 = *(_DWORD *)(v19 + 20);
  *(_DWORD *)v20 = *(_DWORD *)v5;
  *(_DWORD *)(v20 + 4) = *(_DWORD *)(v5 + 4);
  *(_DWORD *)(v20 + 8) = *(_DWORD *)(v5 + 8);
  _R6 = 91625969;
  __asm { SMMUL.W         R6, R0, R6 }
  _R4 = 628292359;
  __asm { SMMUL.W         R4, R0, R4 }
  _R3 = _R0 - 1750 * (((signed int)_R4 >> 8) + (_R4 >> 31));
  _R0 = _R0 - 3000 * (((signed int)_R6 >> 6) + (_R6 >> 31));
  __asm
  {
    VMOV            S2, R3
    VCVT.F32.S32    S2, S2
  }
  *(_DWORD *)(v20 + 12) = *(_DWORD *)(v5 + 12);
  __asm { VMOV            S6, R0 }
  *(_BYTE *)(v19 + 17) = 1;
  v27 = *(_DWORD *)(v9 + 568);
  __asm { VCVT.F32.S32    S6, S6 }
  v28 = *(_DWORD *)(v27 + 20);
    VMUL.F32        S2, S2, S4
    VLDR            S4, =0.00033333
  *(_DWORD *)v28 = dword_27D2334;
  __asm { VMUL.F32        S4, S6, S4 }
  *(_DWORD *)(v28 + 4) = dword_27D2338;
  *(_DWORD *)(v28 + 8) = dword_27D233C;
  __asm { VDIV.F32        S2, S2, S0 }
  *(_DWORD *)(v28 + 12) = dword_27D2340;
  *(_BYTE *)(v27 + 17) = 1;
  v29 = *(_DWORD *)(v9 + 572);
  v30 = *(_DWORD *)(v29 + 20);
  _R1 = &mce::Math::DEGRAD;
  *(_DWORD *)v30 = 1065353216;
  *(_DWORD *)(v30 + 4) = 1065353216;
  *(_DWORD *)(v30 + 8) = 1065353216;
  *(_DWORD *)(v30 + 12) = 1065353216;
  *(_BYTE *)(v29 + 17) = 1;
  v32 = *(_DWORD *)(v9 + 576);
    VDIV.F32        S0, S4, S0
    VMOV.F32        S4, #-20.0
    VLDR            S8, [R1]
  v33 = *(_DWORD *)(v32 + 20);
    VLDR            S6, =80.0
    VSTR            S2, [R1]
    VMUL.F32        S6, S8, S6
    VSTR            S0, [R1,#4]
  *(_BYTE *)(v32 + 17) = 1;
  __asm { VMUL.F32        S4, S8, S4 }
  v34 = *(_DWORD *)(v9 + 580);
  v35 = *(_DWORD *)(v34 + 20);
    VSTR            S4, [R1]
    VSTR            S6, [R1,#4]
  *(_BYTE *)(v34 + 17) = 1;
  v36 = *(_DWORD *)(v9 + 584);
  *(_QWORD *)*(_DWORD *)(v36 + 20) = *a5;
  *(_BYTE *)(v36 + 17) = 1;
  return j_j_j__ZN3mce27ConstantBufferConstantsBase4syncERNS_13RenderContextE(
           (mce::ConstantBufferConstantsBase *)(v9 + 548),
           *(mce::RenderContext **)(v7 + 12));
}


char *__fastcall EntityShaderManager::getEntityMaterial(EntityShaderManager *this)
{
  return (char *)this + 4;
}
