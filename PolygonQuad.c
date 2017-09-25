

int __fastcall PolygonQuad::mirror(int result)
{
  int v1; // r1@1
  int v2; // r2@1
  int v3; // r3@1
  int v4; // r12@1
  int v5; // lr@1
  int v6; // r4@1
  __int64 v7; // kr00_8@1
  __int64 v8; // kr08_8@1
  __int64 v9; // r4@1

  v1 = *(_DWORD *)(result + 4);
  v2 = *(_DWORD *)(result + 8);
  v3 = *(_DWORD *)(result + 12);
  v4 = *(_DWORD *)(result + 16);
  v5 = *(_DWORD *)(result + 20);
  *(_DWORD *)(result + 4) = *(_DWORD *)(result + 64);
  *(_DWORD *)(result + 8) = *(_DWORD *)(result + 68);
  *(_DWORD *)(result + 12) = *(_DWORD *)(result + 72);
  *(_QWORD *)(result + 16) = *(_QWORD *)(result + 76);
  v6 = result + 64;
  *(_DWORD *)v6 = v1;
  *(_DWORD *)(v6 + 4) = v2;
  *(_DWORD *)(v6 + 8) = v3;
  *(_DWORD *)(v6 + 12) = v4;
  *(_DWORD *)(v6 + 16) = v5;
  v7 = *(_QWORD *)(result + 24);
  v8 = *(_QWORD *)(result + 32);
  v9 = *(_QWORD *)(result + 40);
  *(_DWORD *)(result + 24) = HIDWORD(v9);
  *(_DWORD *)(result + 28) = *(_DWORD *)(result + 48);
  *(_DWORD *)(result + 32) = *(_DWORD *)(result + 52);
  *(_QWORD *)(result + 36) = *(_QWORD *)(result + 56);
  *(_QWORD *)(result + 44) = v7;
  *(_DWORD *)(result + 60) = v9;
  *(_QWORD *)(result + 52) = v8;
  return result;
}


int __fastcall PolygonQuad::PolygonQuad(int result, float a2, float a3, float a4, float a5, float a6, float a7, int a8, int a9, int a10, int a11)
{
  __int64 v17; // kr00_8@9
  int v18; // r1@9
  int v19; // r12@9
  __int64 v20; // kr08_8@9
  int v21; // r2@9
  int v22; // r1@9
  int v23; // r2@9
  int v24; // r3@9
  int v25; // r12@9
  int v26; // r2@9
  int v27; // r3@9

  __asm { VLDR            S0, [SP,#8+arg_4] }
  _LR = 0;
  __asm { VLDR            S2, [SP,#8+arg_C] }
  _R4 = 0;
  __asm
  {
    VCVT.F32.S32    S0, S0
    VLDR            S4, [SP,#8+arg_8]
    VCVT.F32.S32    S2, S2
    VLDR            S6, [SP,#8+arg_10]
    VCVT.F32.S32    S4, S4
    VLDR            S8, [SP,#8+arg_14]
    VCVT.F32.S32    S6, S6
    VLDR            S10, [SP,#8+arg_18]
    VCVT.F32.S32    S8, S8
    VLDR            S12, =0.03125
    VCVT.F32.S32    S10, S10
    VSUB.F32        S14, S2, S0
    VSUB.F32        S1, S6, S4
    VDIV.F32        S3, S12, S8
    VCMPE.F32       S14, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S1, #0.0
    VDIV.F32        S12, S12, S10
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    _LR = 1;
  if ( _NF ^ _VF )
    --_LR;
    VDIV.F32        S2, S2, S8
    _R4 = 1;
    VDIV.F32        S4, S4, S10
    VDIV.F32        S0, S0, S8
    VMOV            S8, LR
    VDIV.F32        S6, S6, S10
    --_R4;
    VMOV            S14, R4
    VCVT.F32.S32    S14, S14
  *(_BYTE *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  __asm { VMUL.F32        S8, S8, S3 }
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = 0;
  __asm { VMUL.F32        S10, S14, S12 }
  *(_DWORD *)(result + 64) = 0;
  *(_DWORD *)(result + 68) = 0;
  *(_DWORD *)(result + 72) = 0;
  v17 = *(_QWORD *)LODWORD(a2);
  v18 = *(_DWORD *)(LODWORD(a2) + 8);
  __asm { VSUB.F32        S2, S2, S8 }
  *(_QWORD *)(result + 4) = v17;
  __asm { VADD.F32        S0, S8, S0 }
  *(_DWORD *)(result + 12) = v18;
  v19 = result + 44;
    VADD.F32        S4, S10, S4
    VSUB.F32        S6, S6, S10
    VSTR            S2, [R0,#0x10]
    VSTR            S4, [R0,#0x14]
  v20 = *(_QWORD *)LODWORD(a3);
  v21 = *(_DWORD *)(LODWORD(a3) + 8);
  *(_QWORD *)(result + 24) = v20;
  *(_DWORD *)(result + 32) = v21;
    VSTR            S0, [R0,#0x24]
    VSTR            S4, [R0,#0x28]
  v22 = *(_DWORD *)LODWORD(a4);
  v23 = *(_DWORD *)(LODWORD(a4) + 4);
  v24 = *(_DWORD *)(LODWORD(a4) + 8);
  *(_DWORD *)v19 = v22;
  *(_DWORD *)(v19 + 4) = v23;
  *(_DWORD *)(v19 + 8) = v24;
  v25 = result + 64;
    VSTR            S0, [R0,#0x38]
    VSTR            S6, [R0,#0x3C]
  v26 = *(_DWORD *)(LODWORD(a5) + 4);
  v27 = *(_DWORD *)(LODWORD(a5) + 8);
  *(_DWORD *)v25 = *(_DWORD *)LODWORD(a5);
  *(_DWORD *)(v25 + 4) = v26;
  *(_DWORD *)(v25 + 8) = v27;
    VSTR            S2, [R0,#0x4C]
    VSTR            S6, [R0,#0x50]
  return result;
}


int __fastcall PolygonQuad::PolygonQuad(int result, int a2, int a3, int a4, int a5)
{
  *(_BYTE *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 64) = 0;
  *(_DWORD *)(result + 68) = 0;
  *(_DWORD *)(result + 72) = 0;
  *(_DWORD *)(result + 4) = *(_DWORD *)a2;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a2 + 12);
  *(_DWORD *)(result + 24) = *(_DWORD *)a3;
  *(_DWORD *)(result + 28) = *(_DWORD *)(a3 + 4);
  *(_DWORD *)(result + 32) = *(_DWORD *)(a3 + 8);
  *(_QWORD *)(result + 36) = *(_QWORD *)(a3 + 12);
  *(_DWORD *)(result + 44) = *(_DWORD *)a4;
  *(_DWORD *)(result + 48) = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(result + 52) = *(_DWORD *)(a4 + 8);
  *(_QWORD *)(result + 56) = *(_QWORD *)(a4 + 12);
  *(_DWORD *)(result + 64) = *(_DWORD *)a5;
  *(_DWORD *)(result + 68) = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(result + 72) = *(_DWORD *)(a5 + 8);
  *(_QWORD *)(result + 76) = *(_QWORD *)(a5 + 12);
  return result;
}


int __fastcall PolygonQuad::flipNormal(int result)
{
  *(_BYTE *)result = 1;
  return result;
}


signed int __fastcall PolygonQuad::compile(PolygonQuad *this, Tessellator *a2, float _R2)
{
  Tessellator *v8; // r4@1
  float v15; // ST00_4@4
  float v16; // ST04_4@4
  float v20; // ST00_4@4
  float v21; // ST04_4@4
  float v25; // ST00_4@4
  float v26; // ST04_4@4
  float v28; // [sp+0h] [bp-30h]@0
  float v29; // [sp+4h] [bp-2Ch]@0
  __int64 v30; // [sp+8h] [bp-28h]@3
  int v31; // [sp+10h] [bp-20h]@3

  _R5 = this;
  __asm
  {
    VMOV            S16, R2
    VLDR            S0, [R5,#8]
  }
  v8 = a2;
    VLDR            S14, [R5,#0x44]
    VLDR            S2, [R5,#0xC]
    VLDR            S8, [R5,#0x20]
    VSUB.F32        S14, S0, S14
    VLDR            S6, [R5,#0x1C]
    VLDR            S4, [R5,#4]
    VSUB.F32        S8, S2, S8
    VLDR            S1, [R5,#0x48]
    VSUB.F32        S0, S0, S6
    VLDR            S12, [R5,#0x40]
    VLDR            S10, [R5,#0x18]
    VSUB.F32        S2, S2, S1
    VSUB.F32        S6, S4, S12
    VSUB.F32        S4, S4, S10
    VMUL.F32        S10, S14, S8
    VMUL.F32        S12, S2, S0
    VMUL.F32        S0, S6, S0
    VMUL.F32        S14, S14, S4
    VMUL.F32        S4, S2, S4
    VMUL.F32        S6, S6, S8
    VSUB.F32        S2, S12, S10
    VSUB.F32        S0, S14, S0
    VSUB.F32        S4, S6, S4
    VMUL.F32        S6, S2, S2
    VMUL.F32        S8, S0, S0
    VMUL.F32        S10, S4, S4
    VADD.F32        S6, S6, S8
    VLDR            S8, =0.0001
    VADD.F32        S6, S6, S10
    VSQRT.F32       S6, S6
    VCMPE.F32       S6, S8
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    v31 = dword_2822498;
    v30 = *(_QWORD *)&Vec3::ZERO;
  else
    __asm
    {
      VDIV.F32        S2, S2, S6
      VDIV.F32        S4, S4, S6
      VDIV.F32        S0, S0, S6
      VSTR            S2, [SP,#0x30+var_28]
      VSTR            S4, [SP,#0x30+var_28+4]
      VSTR            S0, [SP,#0x30+var_20]
    }
  Tessellator::normal(a2, (const Vec3 *)&v30);
    VLDR            S0, [R5,#4]
    VLDR            S2, [R5,#8]
    VLDR            S4, [R5,#0xC]
    VMUL.F32        S0, S0, S16
    VMUL.F32        S2, S2, S16
    VLDR            S6, [R5,#0x10]
    VMUL.F32        S4, S4, S16
    VLDR            S8, [R5,#0x14]
    VSTR            S6, [SP,#0x30+var_30]
    VSTR            S8, [SP,#0x30+var_2C]
    VMOV            R1, S0
    VMOV            R2, S2
    VMOV            R3, S4
  Tessellator::vertexUV(v8, _R1, _R2, _R3, v28, v29);
    VLDR            S0, [R5,#0x18]
    VLDR            S2, [R5,#0x1C]
    VLDR            S4, [R5,#0x20]
    VLDR            S6, [R5,#0x24]
    VLDR            S8, [R5,#0x28]
  Tessellator::vertexUV(v8, _R1, _R2, _R3, v15, v16);
    VLDR            S0, [R5,#0x2C]
    VLDR            S2, [R5,#0x30]
    VLDR            S4, [R5,#0x34]
    VLDR            S6, [R5,#0x38]
    VLDR            S8, [R5,#0x3C]
  Tessellator::vertexUV(v8, _R1, _R2, _R3, v20, v21);
    VLDR            S0, [R5,#0x40]
    VLDR            S2, [R5,#0x44]
    VLDR            S4, [R5,#0x48]
    VLDR            S6, [R5,#0x4C]
    VLDR            S8, [R5,#0x50]
  return Tessellator::vertexUV(v8, _R1, _R2, _R3, v25, v26);
}


int __fastcall PolygonQuad::PolygonQuad(int result, float a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  __int64 v13; // kr00_8@1
  int v14; // r1@1
  int v15; // lr@1
  __int64 v16; // kr08_8@1
  int v17; // r2@1
  int v18; // r1@1
  int v19; // r2@1
  int v20; // r3@1
  int v21; // r2@1
  int v22; // r3@1
  int v23; // r12@1

  __asm { VLDR            S0, [SP,#8+arg_C] }
  *(_BYTE *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 64) = 0;
  *(_DWORD *)(result + 68) = 0;
  *(_DWORD *)(result + 72) = 0;
  __asm { VLDR            S2, [SP,#8+arg_8] }
  v13 = *(_QWORD *)LODWORD(a2);
  v14 = *(_DWORD *)(LODWORD(a2) + 8);
  *(_QWORD *)(result + 4) = v13;
  v15 = result + 44;
  *(_DWORD *)(result + 12) = v14;
  __asm
  {
    VSTR            S0, [R0,#0x10]
    VSTR            S2, [R0,#0x14]
    VLDR            S4, [SP,#8+arg_4]
  }
  v16 = *(_QWORD *)LODWORD(a3);
  v17 = *(_DWORD *)(LODWORD(a3) + 8);
  *(_QWORD *)(result + 24) = v16;
  *(_DWORD *)(result + 32) = v17;
    VSTR            S4, [R0,#0x24]
    VSTR            S2, [R0,#0x28]
    VLDR            S2, [SP,#8+arg_10]
  v18 = *(_DWORD *)LODWORD(a4);
  v19 = *(_DWORD *)(LODWORD(a4) + 4);
  v20 = *(_DWORD *)(LODWORD(a4) + 8);
  *(_DWORD *)v15 = v18;
  *(_DWORD *)(v15 + 4) = v19;
  *(_DWORD *)(v15 + 8) = v20;
    VSTR            S4, [R0,#0x38]
    VSTR            S2, [R0,#0x3C]
  v21 = *(_DWORD *)(LODWORD(a5) + 4);
  v22 = *(_DWORD *)(LODWORD(a5) + 8);
  v23 = result + 64;
  *(_DWORD *)v23 = *(_DWORD *)LODWORD(a5);
  *(_DWORD *)(v23 + 4) = v21;
  *(_DWORD *)(v23 + 8) = v22;
    VSTR            S0, [R0,#0x4C]
    VSTR            S2, [R0,#0x50]
  return result;
}


int __fastcall PolygonQuad::PolygonQuad(int result)
{
  int v1; // r12@1
  __int64 v2; // r2@1
  int v3; // r12@1

  v1 = result + 32;
  *(_BYTE *)result = 0;
  *(_DWORD *)(result + 64) = 0;
  *(_DWORD *)(result + 68) = 0;
  *(_DWORD *)(result + 72) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = 0;
  v2 = *(_QWORD *)(result + 76);
  *(_QWORD *)(result + 56) = v2;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)v1 = 0;
  *(_QWORD *)(v1 + 4) = v2;
  v3 = result + 12;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)v3 = 0;
  *(_QWORD *)(v3 + 4) = v2;
  return result;
}


int __fastcall PolygonQuad::expandAABB(PolygonQuad *this, AABB *a2)
{
  AABB *v2; // r4@1
  PolygonQuad *v3; // r5@1

  v2 = a2;
  v3 = this;
  AABB::expand(a2, (PolygonQuad *)((char *)this + 4));
  AABB::expand(v2, (PolygonQuad *)((char *)v3 + 24));
  AABB::expand(v2, (PolygonQuad *)((char *)v3 + 44));
  return j_j_j__ZN4AABB6expandERK4Vec3_0(v2, (PolygonQuad *)((char *)v3 + 64));
}
