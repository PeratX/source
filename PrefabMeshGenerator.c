

mce::Mesh *__fastcall PrefabMeshGenerator::buildUnitCube(PrefabMeshGenerator *this, Tessellator *a2)
{
  Tessellator *v2; // r4@1
  Tessellator *v3; // r5@1

  v2 = a2;
  v3 = this;
  PrefabMeshGenerator::tessellateUnitCube(a2, a2);
  return Tessellator::end(v3, (const char *)v2, 0, 0);
}


mce::Mesh *__fastcall PrefabMeshGenerator::buildShadowOverlay(PrefabMeshGenerator *this, Tessellator *a2)
{
  Tessellator *v2; // r4@1
  Tessellator *v3; // r5@1
  int v5; // [sp+4h] [bp-24h]@1
  signed int v6; // [sp+8h] [bp-20h]@1
  signed int v7; // [sp+Ch] [bp-1Ch]@1
  int v8; // [sp+10h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  Tessellator::begin((int)a2, 2, 8, 0);
  v5 = 1065353216;
  v6 = 1065353216;
  v7 = 1065353216;
  v8 = 0;
  Tessellator::color(v2, (const Color *)&v5);
  Tessellator::vertex(v2, -50.0, 2.0, -50.0);
  Tessellator::vertex(v2, 50.0, 2.0, -50.0);
  Tessellator::vertex(v2, 50.0, 2.0, 50.0);
  Tessellator::vertex(v2, -50.0, 2.0, 50.0);
  Tessellator::color(v2, (const Color *)&Color::WHITE);
  Tessellator::vertex(v2, -50.0, -2.0, -50.0);
  Tessellator::vertex(v2, 50.0, -2.0, -50.0);
  Tessellator::vertex(v2, 50.0, -2.0, 50.0);
  Tessellator::vertex(v2, -50.0, -2.0, 50.0);
  Tessellator::beginIndices(v2, 0);
  Tessellator::triangle(v2, 0, 4u, 1u);
  Tessellator::triangle(v2, 4u, 5u, 1u);
  Tessellator::triangle(v2, 1u, 5u, 2u);
  Tessellator::triangle(v2, 5u, 6u, 2u);
  Tessellator::triangle(v2, 2u, 6u, 3u);
  Tessellator::triangle(v2, 6u, 7u, 3u);
  Tessellator::triangle(v2, 3u, 7u, 0);
  Tessellator::triangle(v2, 7u, 4u, 0);
  Tessellator::quad(v2, 4u, 0);
  return Tessellator::end(v3, (const char *)v2, 0, 0);
}


mce::Mesh *__fastcall PrefabMeshGenerator::buildShadowVolume(PrefabMeshGenerator *this, Tessellator *a2)
{
  Tessellator *v2; // r9@1
  Tessellator *v3; // r8@1
  unsigned int v17; // r6@3

  v2 = a2;
  v3 = this;
  Tessellator::begin((int)a2, 2, 28, 0);
  Tessellator::vertex(v2, 0.25, -3.0, 0.0);
  Tessellator::vertex(v2, 0.75, 0.01, 0.0);
  __asm
  {
    VMOV.F32        S20, #0.25
    VMOV.F32        S22, #-0.25
    VLDR            S18, =0.076923
    VMOV.F32        S24, #0.75
    VMOV.F32        S26, #-0.75
  }
  _R4 = 1;
  _R0 = &mce::Math::TAU;
  __asm { VLDR            S16, [R0] }
  do
    __asm
    {
      VMOV            S0, R4
      VCVT.F32.S32    S0, S0
      VMUL.F32        S0, S0, S18
      VMUL.F32        S0, S0, S16
      VMOV            R5, S0
    }
    _R0 = cosf(_R5);
    __asm { VMOV            S28, R0 }
    _R0 = sinf(_R5);
      VMOV            S30, R0
      VMUL.F32        S0, S28, S20
      VMUL.F32        S2, S30, S22
      VMOV            R1, S0
      VMOV            R3, S2
    Tessellator::vertex(v2, _R1, -3.0, _R3);
      VMUL.F32        S0, S28, S24
      VMUL.F32        S2, S30, S26
    Tessellator::vertex(v2, _R1, 0.01, _R3);
    ++_R4;
  while ( _R4 != 14 );
  Tessellator::beginIndices(v2, 0);
  v17 = 3;
    Tessellator::triangle(v2, v17 - 3, v17 - 2, v17 - 1);
    Tessellator::triangle(v2, v17 - 2, v17, v17 - 1);
    Tessellator::triangle(v2, v17 - 1, 0, v17 - 3);
    Tessellator::triangle(v2, 1u, v17, v17 - 2);
    v17 += 2;
  while ( v17 != 29 );
  return Tessellator::end(v3, (const char *)v2, 0, 0);
}


mce::Mesh *__fastcall PrefabMeshGenerator::buildStarsMesh(PrefabMeshGenerator *this, Tessellator *a2)
{
  Tessellator *v2; // r9@1
  unsigned int v3; // r0@1
  signed int v4; // r2@1
  int v5; // r1@1
  int v6; // r0@2
  int *v7; // r4@2
  int v8; // r5@2
  signed int v13; // r11@3
  float v21; // r1@7
  __int64 v24; // r2@7
  int v25; // r0@7
  mce::Math *v27; // r7@7
  float v28; // r1@7
  float v30; // r1@7
  float v32; // r1@7
  __int64 v34; // r2@7
  mce::Math *v35; // r4@7
  float v36; // r1@7
  float v38; // r1@7
  float v42; // r1@7
  float v44; // r1@7
  PrefabMeshGenerator *v59; // [sp+Ch] [bp-20h]@1
  int v61; // [sp+14h] [bp-18h]@7
  int v62; // [sp+18h] [bp-14h]@7
  int v63; // [sp+1Ch] [bp-10h]@7
  signed int v64; // [sp+20h] [bp-Ch]@7
  int v65; // [sp+24h] [bp-8h]@7
  int v66; // [sp+2Ch] [bp+0h]@1
  int v67; // [sp+30h] [bp+4h]@1
  int v68; // [sp+9F0h] [bp+9C4h]@1
  char v69; // [sp+9F4h] [bp+9C8h]@1
  int v70; // [sp+9F8h] [bp+9CCh]@1
  int v71; // [sp+9FCh] [bp+9D0h]@3

  v2 = a2;
  v59 = this;
  v3 = 10842;
  v66 = 10842;
  v4 = 1;
  v68 = 625;
  v5 = 0;
  v69 = 0;
  v70 = 0;
  v67 = 10842;
  do
  {
    v6 = v3 ^ (v3 >> 30);
    v7 = &v66 + v5;
    v8 = v5++ + 1812433253 * v6;
    v3 = v4++ + 1812433253 * v6;
    v7[2] = v8 + 1;
  }
  while ( v5 != 397 );
  v68 = 624;
  v71 = 398;
  Tessellator::begin(v2, 6000, 0);
  __asm
    VMOV.F32        S16, #-1.0
    VMOV.F32        S20, #1.0
    VLDR            D9, =2.32830644e-10
  v13 = 1500;
  _R0 = &mce::Math::PI;
    VLDR            S0, [R0]
    VADD.F32        S0, S0, S0
    VSTR            S0, [SP,#0xA44+var_A34]
    _R0 = Random::_genRandInt32((Random *)&v66);
    __asm
    {
      VMOV            S0, R0
      VCVT.F64.U32    D11, S0
    }
      VCVT.F64.U32    D13, S0
      VMUL.F64        D1, D11, D9
      VMUL.F64        D11, D13, D9
      VCVT.F64.U32    D0, S0
      VMUL.F64        D13, D0, D9
      VCVT.F32.F64    S30, D1
      VCVT.F32.F64    S2, D11
      VCVT.F32.F64    S4, D13
      VADD.F32        S6, S30, S30
      VADD.F32        S2, S2, S2
      VADD.F32        S4, S4, S4
      VADD.F32        S22, S6, S16
      VADD.F32        S29, S2, S16
      VADD.F32        S26, S4, S16
      VMUL.F32        S2, S22, S22
      VMUL.F32        S4, S29, S29
      VMUL.F32        S6, S26, S26
      VADD.F32        S2, S4, S2
      VADD.F32        S30, S2, S6
      VCMPE.F32       S30, S20
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      __asm
      {
        VLDR            S2, =0.01
        VCMPE.F32       S30, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm
        {
          VMUL.F64        D0, D0, D9
          VCVT.F32.F64    S0, D0
          VLDR            S2, =0.1
          VMUL.F32        S0, S0, S2
          VLDR            S2, =0.15
          VADD.F32        S23, S0, S2
        }
        _R0 = Random::_genRandInt32((Random *)&v66);
          VMOV            S0, R0
          VLDR            S2, =0.3
          VCVT.F64.U32    D0, S0
        v63 = 1065353216;
        v64 = 1065353216;
        v65 = 1065353216;
          VLDR            S2, =0.7
          VADD.F32        S0, S0, S2
          VSTR            S0, [SP,#0xA44+var_A1C]
        Tessellator::color(v2, (const Color *)&v63);
        __asm { VMOV            R0, S30 }
        _R0 = mce::Math::sqrt(_R0, v21);
          VDIV.F32        S30, S20, S0
          VMUL.F32        S27, S30, S22
          VMUL.F32        S25, S30, S26
          VMOV            R0, S27
          VMOV            R1, S25
        v25 = mce::Math::atan2(_R0, v24);
        __asm { VMUL.F32        S0, S25, S25 }
        v62 = v25;
          VMUL.F32        S2, S27, S27
          VADD.F32        S0, S2, S0
          VMOV            R4, S0
        v27 = *(mce::Math **)mce::Radian::asFloat((mce::Radian *)&v62);
        _R5 = mce::Math::sin(v27, v28);
        _R7 = mce::Math::cos(v27, v30);
        LODWORD(_R0) = mce::Math::sqrt(_R4, v32);
          VMUL.F32        S26, S30, S29
          VMOV            R1, S26
        v61 = mce::Math::atan2(_R0, v34);
        v35 = *(mce::Math **)mce::Radian::asFloat((mce::Radian *)&v61);
        _R8 = mce::Math::sin(v35, v36);
        _R4 = mce::Math::cos(v35, v38);
          VLDR            S2, [SP,#0xA44+var_A34]
          VMUL.F32        S0, S2, S0
          VMOV            R10, S0
        _R0 = mce::Math::sin(_R10, v42);
        __asm { VMOV            S17, R0 }
        _R0 = mce::Math::cos(_R10, v44);
          VMOV            S28, R0
          VLDR            S6, =100.0
          VMOV.F32        S18, S16
          VSUB.F32        S16, S28, S17
          VADD.F32        S24, S28, S17
          VMOV.F32        S8, S6
          VMOV            S31, R4
          VMOV            S29, R7
          VMOV            S22, R5
          VMOV            S30, R8
          VNMUL.F32       S0, S23, S16
          VNMUL.F32       S2, S23, S24
          VMUL.F32        S27, S27, S8
          VMUL.F32        S25, S25, S8
          VMUL.F32        S26, S26, S8
          VMUL.F32        S4, S31, S0
          VMUL.F32        S6, S2, S29
          VMUL.F32        S2, S2, S22
          VMUL.F32        S0, S0, S30
          VMUL.F32        S8, S22, S4
          VSUB.F32        S6, S27, S6
          VMUL.F32        S4, S29, S4
          VADD.F32        S2, S2, S25
          VADD.F32        S0, S0, S26
          VSUB.F32        S6, S6, S8
          VSUB.F32        S2, S2, S4
          VMOV            R2, S0
          VMOV            R1, S6
          VMOV            R3, S2
        Tessellator::vertex(v2, _R1, _R2, _R3);
          VMUL.F32        S21, S23, S17
          VNMUL.F32       S20, S23, S28
          VNMUL.F32       S17, S23, S17
          VMUL.F32        S28, S23, S28
          VSUB.F32        S0, S20, S21
          VADD.F32        S2, S28, S17
          VMUL.F32        S0, S23, S16
          VMUL.F32        S2, S23, S24
          VMOV.F32        S16, S18
          VLDR            D9, =2.32830644e-10
          VADD.F32        S2, S20, S21
          VSUB.F32        S0, S28, S17
          VMOV.F32        S20, #1.0
    --v13;
  while ( v13 );
  return Tessellator::end(v59, (const char *)v2, 0, 0);
}


mce::Mesh *__fastcall PrefabMeshGenerator::buildSkyMesh(PrefabMeshGenerator *this, Tessellator *a2)
{
  Tessellator *v2; // r9@1
  Tessellator *v3; // r8@1
  float v11; // r5@2
  float v12; // r0@2

  v2 = a2;
  v3 = this;
  _R4 = 0;
  Tessellator::begin((int)a2, 2, 12, 0);
  Tessellator::color(v2, (const Color *)&Color::BLACK);
  Tessellator::vertex(v2, 0.0, 0.0, 0.0);
  __asm { VLDR            S18, =0.1 }
  _R0 = &mce::Math::TAU;
  __asm { VLDR            S16, [R0] }
  do
  {
    __asm
    {
      VMOV            S0, R4
      VCVT.F32.S32    S0, S0
      VMUL.F32        S0, S0, S18
      VMUL.F32        S0, S0, S16
      VMOV            R7, S0
    }
    v11 = cosf(_R7);
    Tessellator::color(v2, (const Color *)&Color::WHITE);
    v12 = sinf(COERCE_FLOAT(LODWORD(_R7) ^ 0x80000000));
    Tessellator::vertex(v2, v11, 0.0, COERCE_FLOAT(LODWORD(v12) ^ 0x80000000));
    ++_R4;
  }
  while ( _R4 != 11 );
  Tessellator::beginIndices(v2, 0);
  Tessellator::triangle(v2, 0, 1u, 2u);
  Tessellator::triangle(v2, 0, 2u, 3u);
  Tessellator::triangle(v2, 0, 3u, 4u);
  Tessellator::triangle(v2, 0, 4u, 5u);
  Tessellator::triangle(v2, 0, 5u, 6u);
  Tessellator::triangle(v2, 0, 6u, 7u);
  Tessellator::triangle(v2, 0, 7u, 8u);
  Tessellator::triangle(v2, 0, 8u, 9u);
  Tessellator::triangle(v2, 0, 9u, 0xAu);
  Tessellator::triangle(v2, 0, 0xAu, 1u);
  Tessellator::triangle(v2, 0, 0xBu, 2u);
  return Tessellator::end(v3, (const char *)v2, 0, 0);
}


mce::Mesh *__fastcall PrefabMeshGenerator::buildSunAndMoonQuad(PrefabMeshGenerator *this, Tessellator *a2, int a3, int a4)
{
  Tessellator *v4; // r4@1
  Tessellator *v5; // r5@1
  float v13; // ST00_4@4
  float v14; // ST04_4@4
  float v15; // ST00_4@4
  float v16; // ST04_4@4
  float v17; // ST00_4@4
  float v18; // ST04_4@4
  float v20; // [sp+0h] [bp-38h]@0
  float v21; // [sp+4h] [bp-34h]@0

  v4 = a2;
  v5 = this;
  if ( a3 )
  {
    __asm
    {
      VMOV.F32        S16, #1.0
      VLDR            S22, =0.0
      VMOV.F32        S20, S22
      VMOV.F32        S18, S16
    }
  }
  else
      VMOV.F32        S0, #0.5
      VMOV.F32        S2, #0.25
    _R2 = a4 % 4;
    __asm { VMOV            S4, R2 }
    _R2 = a4 % 4 + 1;
    _R0 = a4 / 4 - ((a4 / 4 + ((a4 + ((unsigned int)(a4 >> 31) >> 30)) >> 31)) & 0xFFFFFFFE);
      VCVT.F32.S32    S4, S4
      VMOV            S6, R2
      VMOV            S8, R0
    ++_R0;
      VCVT.F32.S32    S6, S6
      VMOV            S10, R0
      VCVT.F32.S32    S8, S8
      VCVT.F32.S32    S10, S10
      VMUL.F32        S20, S4, S2
      VMUL.F32        S18, S6, S2
      VMUL.F32        S22, S8, S0
      VMUL.F32        S16, S10, S0
  Tessellator::begin(a2, 4, 0);
  __asm
    VSTR            S18, [SP,#0x38+var_38]
    VSTR            S22, [SP,#0x38+var_34]
  Tessellator::vertexUV(v4, -0.5, 0.0, -0.5, v20, v21);
    VSTR            S20, [SP,#0x38+var_38]
  Tessellator::vertexUV(v4, 0.5, 0.0, -0.5, v13, v14);
    VSTR            S16, [SP,#0x38+var_34]
  Tessellator::vertexUV(v4, 0.5, 0.0, 0.5, v15, v16);
  Tessellator::vertexUV(v4, -0.5, 0.0, 0.5, v17, v18);
  return Tessellator::end(v5, (const char *)v4, 0, 0);
}


signed int __fastcall PrefabMeshGenerator::tessellateUnitCube(PrefabMeshGenerator *this, Tessellator *a2)
{
  Tessellator *v2; // r4@1
  int v4; // [sp+8h] [bp-20h]@1
  signed int v5; // [sp+Ch] [bp-1Ch]@1
  int v6; // [sp+10h] [bp-18h]@1
  int v7; // [sp+14h] [bp-14h]@1

  v2 = this;
  Tessellator::begin(this, 24, 0);
  v4 = 1065353216;
  v5 = 1065353216;
  v6 = 1065353216;
  v7 = 1056964608;
  Tessellator::color(v2, (const Color *)&v4);
  Tessellator::vertexUV(v2, -0.5, -0.5, -0.5, 1.0, 1.0);
  Tessellator::vertexUV(v2, -0.5, 0.5, -0.5, 1.0, 0.0);
  Tessellator::vertexUV(v2, 0.5, 0.5, -0.5, 0.0, 0.0);
  Tessellator::vertexUV(v2, 0.5, -0.5, -0.5, 0.0, 1.0);
  Tessellator::vertexUV(v2, -0.5, -0.5, 0.5, 1.0, 1.0);
  Tessellator::vertexUV(v2, 0.5, -0.5, 0.5, 0.0, 1.0);
  Tessellator::vertexUV(v2, 0.5, 0.5, 0.5, 0.0, 0.0);
  Tessellator::vertexUV(v2, -0.5, 0.5, 0.5, 1.0, 0.0);
  Tessellator::vertexUV(v2, 0.5, -0.5, 0.5, 0.0, 0.0);
  Tessellator::vertexUV(v2, -0.5, -0.5, 0.5, 1.0, 0.0);
  Tessellator::vertexUV(v2, -0.5, 0.5, -0.5, 1.0, 1.0);
  Tessellator::vertexUV(v2, 0.5, 0.5, -0.5, 0.0, 1.0);
  Tessellator::vertexUV(v2, -0.5, 0.5, 0.5, 0.0, 0.0);
  Tessellator::vertexUV(v2, -0.5, 0.5, -0.5, 0.0, 1.0);
  Tessellator::vertexUV(v2, 0.5, -0.5, -0.5, 1.0, 1.0);
  return Tessellator::vertexUV(v2, 0.5, -0.5, 0.5, 1.0, 0.0);
}
