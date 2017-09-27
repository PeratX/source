

int __fastcall VoronoiZoom::VoronoiZoom(int a1, unsigned int a2, int a3)
{
  int v3; // r6@1
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r0@3
  unsigned int v8; // r1@5
  unsigned int *v9; // r1@9
  unsigned int v10; // r0@11
  unsigned int *v11; // r7@15
  unsigned int v12; // r0@17

  v3 = a3;
  v4 = a1;
  j_Layer::Layer(a1, a2);
  *(_DWORD *)v4 = &off_2724B20;
  *(_DWORD *)(v4 + 40) = *(_DWORD *)v3;
  v5 = *(_DWORD *)(v4 + 44);
  v6 = *(_DWORD *)(v3 + 4);
  if ( v6 != v5 )
  {
    if ( v6 )
    {
      v7 = (unsigned int *)(v6 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 + 1, v7) );
        v5 = *(_DWORD *)(v4 + 44);
      }
      else
        ++*v7;
    }
    if ( v5 )
      v9 = (unsigned int *)(v5 + 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 == 1 )
        v11 = (unsigned int *)(v5 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
        if ( &pthread_create )
        {
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
        }
        else
          v12 = (*v11)--;
        if ( v12 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
    *(_DWORD *)(v4 + 44) = v6;
  }
  return v4;
}


int __fastcall VoronoiZoom::fillArea(VoronoiZoom *this, LayerData *a2, int a3, int a4, int a5, int a6)
{
  Layer *v6; // r9@1
  int v7; // r7@1
  char *v8; // r6@2
  int v13; // r1@2
  int v14; // r12@2
  int v15; // r0@3
  int v16; // lr@4
  char *v17; // r5@4
  int v18; // r1@4
  int v19; // r2@4
  int v20; // r3@4
  int v21; // r0@4
  int v23; // r11@5
  int v24; // r10@5
  int v27; // ST58_4@5
  int v28; // ST64_4@5
  int v29; // ST60_4@5
  int v30; // r1@5
  int v31; // ST50_4@5
  int v32; // ST4C_4@5
  __int64 v33; // r2@5
  int v34; // r1@5
  int v35; // ST5C_4@5
  int v36; // r8@5
  int v38; // r1@5
  _DWORD *v47; // r6@6
  int v48; // r5@27
  int v49; // r8@27
  int v50; // r6@27
  int v51; // r4@27
  char v53; // [sp+10h] [bp-10C8h]@1
  char v54; // [sp+14h] [bp-10C4h]@1
  int v55; // [sp+18h] [bp-10C0h]@1
  int v56; // [sp+1Ch] [bp-10BCh]@1
  int v57; // [sp+28h] [bp-10B0h]@4
  char *v58; // [sp+2Ch] [bp-10ACh]@4
  int v59; // [sp+30h] [bp-10A8h]@1
  LayerData *v60; // [sp+34h] [bp-10A4h]@1
  __int64 v61; // [sp+38h] [bp-10A0h]@4
  int v62; // [sp+40h] [bp-1098h]@4
  int v63; // [sp+44h] [bp-1094h]@4
  int v64; // [sp+48h] [bp-1090h]@1
  char v65[3984]; // [sp+70h] [bp-1068h]@2

  v6 = this;
  v7 = a6;
  v60 = a2;
  v56 = (a5 >> 2) + 2;
  v54 = a3 - 2;
  v53 = a4 - 2;
  v59 = (a3 - 2) >> 2;
  v55 = (a4 - 2) >> 2;
  (*(void (__cdecl **)(_DWORD, LayerData *))(**((_DWORD **)this + 10) + 12))(*((_DWORD *)this + 10), a2);
  v64 = a5 >> 2;
  if ( a6 >> 2 != -1 )
  {
    v8 = v65;
    __asm
    {
      VLDR            S16, =-0.0035156
      VLDR            S18, =1.8
    }
    v13 = 0;
    __asm { VLDR            S20, =-2.2 }
    v14 = *(_DWORD *)v60;
    do
      v15 = v13;
      if ( v64 < 0 )
      {
        v57 = v13 + 1;
        v58 = v8;
      }
      else
        v16 = 0;
        v17 = v8;
        v18 = v56 * (v13 + 1);
        v63 = v15 * v56;
        v19 = *(_DWORD *)(v14 + 4 * v15 * v56);
        v62 = v18;
        v20 = *(_DWORD *)(v14 + 4 * v18);
        v21 = v15 + v55;
        HIDWORD(_R0) = 4 * v21 + 4;
        LODWORD(_R0) = 4 * _R0;
        v61 = _R0;
        do
        {
          v23 = v19;
          v24 = v20;
          _R6 = v16 + v59;
          LODWORD(_R2) = 4 * (v16 + v59);
          __asm { SBFX.W          R3, R6, #0x1D, #1 }
          v27 = HIDWORD(_R2);
          j_Layer::initRandom(v6, SHIDWORD(_R0), _R2, (signed int)v61);
          v28 = j_Layer::nextRandom(v6, 1024);
          v29 = j_Layer::nextRandom(v6, 1024);
          j_Layer::initRandom(v6, v30, 4 * (v16 + v59) + 4, (signed int)v61);
          v31 = j_Layer::nextRandom(v6, 1024);
          v32 = j_Layer::nextRandom(v6, 1024);
          LODWORD(v33) = 4 * (v16 + v59);
          HIDWORD(v33) = v27;
          j_Layer::initRandom(v6, v34, v33, SHIDWORD(v61));
          v35 = j_Layer::nextRandom(v6, 1024);
          v36 = v16;
          _R7 = j_Layer::nextRandom(v6, 1024);
          j_Layer::initRandom(v6, v38, 4 * (v16 + v59) + 4, SHIDWORD(v61));
          _R0 = v28;
          __asm
          {
            VMOV            S0, R0
            VCVT.F32.S32    S22, S0
          }
          _R0 = v29;
            VCVT.F32.S32    S24, S0
          _R0 = v31;
            VCVT.F32.S32    S26, S0
          _R0 = v32;
            VCVT.F32.S32    S28, S0
          _R0 = v35;
            VCVT.F32.S32    S30, S0
            VMOV            S0, R7
            VCVT.F32.S32    S17, S0
          _R0 = j_Layer::nextRandom(v6, 1024);
            VCVT.F32.S32    S19, S0
          _R0 = __PAIR__((unsigned int)v17, j_Layer::nextRandom(v6, 1024));
          __asm { VMOV            S0, R0 }
          ++v16;
          __asm { VMUL.F32        S2, S22, S16 }
          _R7 = 0;
            VCVT.F32.S32    S0, S0
            VMUL.F32        S4, S24, S16
            VMUL.F32        S6, S26, S16
            VMUL.F32        S8, S28, S16
          v14 = *(_DWORD *)v60;
            VMUL.F32        S10, S30, S16
            VMUL.F32        S12, S17, S16
            VMUL.F32        S14, S19, S16
            VMUL.F32        S1, S0, S16
          v20 = *(_BYTE *)(*(_DWORD *)v60 + 4 * (v62 + v16));
            VADD.F32        S0, S2, S18
            VADD.F32        S2, S4, S18
            VADD.F32        S4, S6, S20
            VADD.F32        S6, S8, S18
            VADD.F32        S8, S10, S18
          v19 = *(_BYTE *)(*(_DWORD *)v60 + 4 * (v63 + v16));
            VADD.F32        S10, S12, S20
            VADD.F32        S12, S14, S20
            VADD.F32        S14, S1, S20
          do
            __asm { VMOV            S1, R7 }
            LODWORD(_R0) = 0;
            v47 = (_DWORD *)HIDWORD(_R0);
            __asm
            {
              VCVT.F32.S32    S1, S1
              VADD.F32        S3, S14, S1
              VADD.F32        S5, S10, S1
              VADD.F32        S7, S6, S1
              VADD.F32        S9, S2, S1
              VMUL.F32        S1, S3, S3
              VMUL.F32        S3, S5, S5
              VMUL.F32        S5, S7, S7
              VMUL.F32        S7, S9, S9
            }
            do
              __asm
              {
                VMOV            S9, R0
                VCVT.F32.S32    S9, S9
                VADD.F32        S11, S12, S9
                VADD.F32        S13, S0, S9
                VADD.F32        S15, S8, S9
                VADD.F32        S9, S4, S9
                VMUL.F32        S11, S11, S11
                VMUL.F32        S13, S13, S13
                VMUL.F32        S22, S15, S15
                VMUL.F32        S24, S9, S9
                VADD.F32        S15, S11, S1
                VADD.F32        S13, S13, S7
                VADD.F32        S9, S22, S3
                VADD.F32        S11, S24, S5
                VCMPE.F32       S13, S15
                VMRS            APSR_nzcv, FPSCR
              }
              if ( !(_NF ^ _VF) )
                goto LABEL_32;
                VCMPE.F32       S13, S11
              if ( _NF ^ _VF )
                __asm
                {
                  VCMPELT.F32     S13, S9
                  VMRSLT          APSR_nzcv, FPSCR
                }
                *v47 = v23;
              else
LABEL_32:
                  VCMPE.F32       S11, S15
                  VMRS            APSR_nzcv, FPSCR
                if ( !(_NF ^ _VF) )
                  goto LABEL_33;
                  VCMPE.F32       S11, S13
                if ( _NF ^ _VF )
                  __asm
                  {
                    VCMPELT.F32     S11, S9
                    VMRSLT          APSR_nzcv, FPSCR
                  }
                  *v47 = v19;
                else
LABEL_33:
                    VCMPE.F32       S9, S15
                    VMRS            APSR_nzcv, FPSCR
                  if ( !(_NF ^ _VF) )
                    goto LABEL_34;
                    VCMPE.F32       S9, S13
                  if ( _NF ^ _VF )
                    __asm
                    {
                      VCMPELT.F32     S9, S11
                      VMRSLT          APSR_nzcv, FPSCR
                    }
                    *v47 = v24;
                  else
LABEL_34:
                    *v47 = v20;
              ++_R0;
              ++v47;
            while ( _R0 != 4 );
            ++_R7;
            HIDWORD(_R0) += 16 * v64 + 16;
          while ( _R7 != 4 );
          v17 += 16;
        }
        while ( v36 != v64 );
      v7 = a6;
      v8 = &v58[64 * (a5 >> 2) + 64];
      v13 = v57;
    while ( v57 != (a6 >> 2) + 1 );
  }
  if ( v7 )
    v48 = 0;
    v49 = 4 * v64 + 4;
    v50 = v49 * (v53 & 3);
    v51 = 4 * a5;
      j___aeabi_memcpy4_0(*((_DWORD *)v60 + 1) + v48, (int)&v65[4 * (v50 | v54 & 3)], v51);
      v48 += v51;
      v50 += v49;
      --v7;
    while ( v7 );
  return j_LayerData::swap(v60);
}


void __fastcall VoronoiZoom::~VoronoiZoom(VoronoiZoom *this)
{
  VoronoiZoom::~VoronoiZoom(this);
}


void __fastcall VoronoiZoom::~VoronoiZoom(VoronoiZoom *this)
{
  Layer *v1; // r0@1

  v1 = j_Layer::~Layer(this);
  j_j_j__ZdlPv_7((void *)v1);
}
