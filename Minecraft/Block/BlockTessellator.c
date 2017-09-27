

int __fastcall BlockTessellator::offsetUVs(int a1, TextureUVCoordinateSet *this, int a3, int a4, int a5, int a6)
{
  int v6; // r6@1
  TextureUVCoordinateSet *v7; // r4@1
  int v8; // r5@1
  int result; // r0@1

  v6 = a3;
  v7 = this;
  v8 = a4;
  *(_DWORD *)a3 = TextureUVCoordinateSet::offsetWidth(this, *(float *)a3, 0.0);
  result = TextureUVCoordinateSet::offsetHeight(v7, *(float *)(v6 + 4), 0.0);
  *(_DWORD *)(v6 + 4) = result;
  if ( v8 )
  {
    *(_DWORD *)v8 = TextureUVCoordinateSet::offsetWidth(v7, *(float *)v8, 0.0);
    result = TextureUVCoordinateSet::offsetHeight(v7, *(float *)(v8 + 4), 0.0);
    *(_DWORD *)(v8 + 4) = result;
  }
  if ( a5 )
    *(_DWORD *)a5 = TextureUVCoordinateSet::offsetWidth(v7, *(float *)a5, 0.0);
    result = TextureUVCoordinateSet::offsetHeight(v7, *(float *)(a5 + 4), 0.0);
    *(_DWORD *)(a5 + 4) = result;
  if ( a6 )
    *(_DWORD *)a6 = TextureUVCoordinateSet::offsetWidth(v7, *(float *)a6, 0.0);
    result = TextureUVCoordinateSet::offsetHeight(v7, *(float *)(a6 + 4), 0.0);
    *(_DWORD *)(a6 + 4) = result;
  return result;
}


void __fastcall BlockTessellator::tessellateWest(BlockTessellator *this, Tessellator *a2, const Block *a3, const Vec3 *a4, const TextureUVCoordinateSet *a5)
{
  const TextureUVCoordinateSet *v6; // r4@1
  const Block *v7; // r8@1
  Tessellator *v9; // r10@1
  float v10; // r1@3
  float v11; // r3@3
  int v12; // r5@3
  int v13; // r6@3
  int v14; // r7@3
  int v22; // r1@3
  _BOOL4 v23; // r0@12
  int v25; // r0@17
  int v38; // r0@25
  int v39; // r0@27
  float v57; // ST00_4@37
  float v58; // ST04_4@37
  float v60; // ST00_4@37
  float v61; // ST04_4@37
  float v62; // ST00_4@37
  float v63; // ST04_4@37
  void *v64; // r0@38
  unsigned int *v65; // r2@40
  signed int v66; // r1@42
  float v67; // [sp+0h] [bp-138h]@0
  float v68; // [sp+0h] [bp-138h]@30
  float v69; // [sp+0h] [bp-138h]@32
  float v70; // [sp+0h] [bp-138h]@34
  float v71; // [sp+4h] [bp-134h]@0
  float v72; // [sp+4h] [bp-134h]@30
  float v73; // [sp+4h] [bp-134h]@32
  float v74; // [sp+4h] [bp-134h]@34
  float v88; // [sp+3Ch] [bp-FCh]@35
  float v89; // [sp+44h] [bp-F4h]@34
  float v90; // [sp+54h] [bp-E4h]@33
  float v91; // [sp+5Ch] [bp-DCh]@32
  float v92; // [sp+6Ch] [bp-CCh]@31
  float v93; // [sp+74h] [bp-C4h]@30
  float v94; // [sp+84h] [bp-B4h]@29
  float v95; // [sp+8Ch] [bp-ACh]@28
  char v96; // [sp+9Ch] [bp-9Ch]@11
  int v97; // [sp+A8h] [bp-90h]@3
  float v98; // [sp+ACh] [bp-8Ch]@3
  float v99; // [sp+B0h] [bp-88h]@3
  int v100; // [sp+B4h] [bp-84h]@3
  int v101; // [sp+B8h] [bp-80h]@3
  int v102; // [sp+BCh] [bp-7Ch]@3
  int v103; // [sp+C0h] [bp-78h]@3
  int v104; // [sp+C4h] [bp-74h]@3

  _R11 = this;
  v6 = a5;
  v7 = a3;
  _R9 = a4;
  v9 = a2;
  if ( *((_BYTE *)this + 40) )
    v6 = (BlockTessellator *)((char *)this + 8);
  v10 = *((float *)v6 + 1);
  v11 = *((float *)v6 + 2);
  v12 = *((_DWORD *)v6 + 3);
  v13 = *((_DWORD *)v6 + 4);
  v14 = *((_DWORD *)v6 + 5);
  v97 = *(_DWORD *)v6;
  v98 = v10;
  v99 = v11;
  v100 = v12;
  v101 = v13;
  v102 = v14;
  sub_119C854(&v103, (int *)v6 + 6);
  v104 = *((_DWORD *)v6 + 7);
  Tessellator::quadFacing(v9, 4);
  _R6 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v97, *((float *)_R11 + 183), 0.0);
  _R4 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v97, *((float *)_R11 + 186), 0.0);
  _R7 = TextureUVCoordinateSet::inverseOffsetHeight((TextureUVCoordinateSet *)&v97, *((float *)_R11 + 185), 0.0);
  _R0 = TextureUVCoordinateSet::inverseOffsetHeight((TextureUVCoordinateSet *)&v97, *((float *)_R11 + 182), 0.0);
  __asm { VMOV            S0, R4 }
  v22 = *((_BYTE *)_R11 + 43);
  __asm
  {
    VMOV            S16, R6
    VMOV.F32        S20, S0
  }
  if ( _ZF )
    __asm
    {
      VMOVEQ.F32      S20, S16
      VMOVEQ.F32      S16, S0
    }
    VLDR            S0, [R11,#0x2DC]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    goto LABEL_50;
    VMOV.F32        S0, #1.0
    VLDR            S2, [R11,#0x2E8]
    VCMPE.F32       S2, S0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
LABEL_50:
      VSUB.F32        S0, S16, S20
      VLDR            S20, [SP,#0x138+var_8C]
      VADD.F32        S16, S0, S20
    VLDR            S0, [R11,#0x2D8]
    VMOV            S22, R7
    VMOV            S18, R0
    goto LABEL_51;
    VLDR            S2, [R11,#0x2E4]
LABEL_51:
      VSUB.F32        S0, S18, S22
      VLDR            S22, [SP,#0x138+var_88]
      VADD.F32        S18, S0, S22
  BlockPos::BlockPos((int)&v96, (int)_R9);
  if ( !*((_BYTE *)_R11 + 48) )
    v23 = BlockGraphics::isTextureIsotropic((BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v7 + 4)], 4);
    _ZF = v23 == 1;
    if ( v23 == 1 )
      _ZF = *((_DWORD *)_R11 + 51) == 0;
    if ( _ZF )
      *((_DWORD *)_R11 + 51) = ((unsigned int)BlockPos::randomSeed((BlockPos *)&v96) >> 24) & 3;
  v25 = *((_DWORD *)_R11 + 51);
  if ( v25 == 3 )
    _R6 = TextureUVCoordinateSet::inverseOffsetWidth((TextureUVCoordinateSet *)&v97, *((float *)_R11 + 183), 0.0);
    _R4 = TextureUVCoordinateSet::inverseOffsetWidth((TextureUVCoordinateSet *)&v97, *((float *)_R11 + 186), 0.0);
    _R7 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v97, *((float *)_R11 + 185), 0.0);
    _R0 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v97, *((float *)_R11 + 182), 0.0);
      VMOV            S20, R6
      VMOV            S16, R4
      VMOV            S22, R7
      VMOV            S0, R0
      VMOV.F32        S21, S16
      VMOV.F32        S23, S22
      VMOV.F32        S2, S0
      VMOV.F32        S4, S20
    goto LABEL_25;
  if ( v25 == 2 )
    _R6 = TextureUVCoordinateSet::inverseOffsetWidth((TextureUVCoordinateSet *)&v97, *((float *)_R11 + 185), 0.0);
    _R4 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v97, *((float *)_R11 + 183), 0.0);
    _R7 = TextureUVCoordinateSet::inverseOffsetWidth((TextureUVCoordinateSet *)&v97, *((float *)_R11 + 182), 0.0);
    _R0 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v97, *((float *)_R11 + 186), 0.0);
      VMOV            S16, R6
      VMOV            S22, R4
      VMOV            S21, R7
    goto LABEL_23;
    VMOV.F32        S0, S18
    VMOV.F32        S21, S16
    VMOV.F32        S23, S22
    VMOV.F32        S4, S20
    VMOV.F32        S2, S0
    _R6 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v97, *((float *)_R11 + 182), 0.0);
    _R4 = TextureUVCoordinateSet::inverseOffsetHeight((TextureUVCoordinateSet *)&v97, *((float *)_R11 + 186), 0.0);
    _R7 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v97, *((float *)_R11 + 185), 0.0);
    _R0 = TextureUVCoordinateSet::inverseOffsetHeight((TextureUVCoordinateSet *)&v97, *((float *)_R11 + 183), 0.0);
      VMOV            S21, R6
      VMOV            S0, R4
      VMOV            S16, R7
      VMOV            S22, R0
LABEL_23:
      VMOV.F32        S20, S16
      VMOV.F32        S23, S0
      VMOV.F32        S2, S22
      VMOV.F32        S4, S21
LABEL_25:
  v38 = *((_BYTE *)_R11 + 1);
    VLDR            S18, [R11,#0x2F0]
    VLDR            S30, [R11,#0x2E8]
    VLDR            S17, [R11,#0x2E4]
    VLDR            S26, [R11,#0x2D4]
    VLDR            S19, [R11,#0x2D8]
    VLDR            S25, [R11,#0x2DC]
    VLDR            S24, [R9]
    VLDR            S28, [R9,#4]
    VLDR            S29, [R9,#8]
    VSTR            S4, [SP,#0x138+var_120]
    VSTR            S2, [SP,#0x138+var_128]
    VSTR            S0, [SP,#0x138+var_130]
  if ( !_ZF )
    Tessellator::normal(v9, (const Vec3 *)&Vec3::NEG_UNIT_X);
  __asm { VMUL.F32        S0, S30, S18 }
  v39 = *((_BYTE *)_R11 + 50);
    VMUL.F32        S4, S25, S18
    VMUL.F32        S2, S17, S18
    VMUL.F32        S6, S19, S18
    VMUL.F32        S8, S26, S18
    VADD.F32        S25, S0, S29
    VADD.F32        S0, S29, S4
    VADD.F32        S27, S2, S28
    VADD.F32        S29, S24, S8
    VSTR            S0, [SP,#0x138+var_124]
    VADD.F32        S0, S28, S6
    VSTR            S0, [SP,#0x138+var_12C]
      VMOV            R5, S29
      VMOV            R4, S27
      VMOV            R6, S25
      VSTR            S21, [SP,#0x138+var_138]
      VSTR            S23, [SP,#0x138+var_134]
    Tessellator::vertexUV(v9, _R5, _R4, _R6, v67, v71);
      VLDR            S0, [SP,#0x138+var_124]
      VMOV            R7, S0
      VLDR            S0, [SP,#0x138+var_120]
      VSTR            S0, [SP,#0x138+var_138]
      VSTR            S22, [SP,#0x138+var_134]
    Tessellator::vertexUV(v9, _R5, _R4, _R7, v57, v58);
      VLDR            S0, [SP,#0x138+var_12C]
      VMOV            R4, S0
      VLDR            S0, [SP,#0x138+var_128]
      VSTR            S20, [SP,#0x138+var_138]
      VSTR            S0, [SP,#0x138+var_134]
    Tessellator::vertexUV(v9, _R5, _R4, _R7, v60, v61);
      VLDR            S0, [SP,#0x138+var_130]
      VSTR            S16, [SP,#0x138+var_138]
    Tessellator::vertexUV(v9, _R5, _R4, _R6, v62, v63);
  else
      VMOV.F32        S1, #1.0
      VLDR            S0, [R11,#0x2E8]
      VLDR            S4, [R11,#0x78]
      VLDR            S6, [R11,#0xA8]
      VSTR            S4, [SP,#0x138+var_108]
      VMUL.F32        S4, S0, S4
      VSTR            S6, [SP,#0x138+var_104]
      VLDR            S8, [R11,#0x48]
      VLDR            S12, [R11,#0x4C]
      VSUB.F32        S2, S1, S0
      VLDR            S14, [R11,#0x58]
      VLDR            S3, [R11,#0x5C]
      VLDR            S31, [R11,#0x7C]
      VLDR            S24, [R11,#0xAC]
      VSTR            S8, [SP,#0x138+var_110]
      VMUL.F32        S8, S0, S8
      VSTR            S12, [SP,#0x138+var_10C]
      VMUL.F32        S12, S0, S12
      VSTR            S14, [SP,#0x138+var_118]
      VMUL.F32        S5, S0, S31
      VMUL.F32        S6, S2, S6
      VSTR            S3, [SP,#0x138+var_11C]
      VMUL.F32        S14, S2, S14
      VLDR            S10, [R11,#0x2E4]
      VMUL.F32        S3, S2, S3
      VLDR            S9, [R11,#0x44]
      VSUB.F32        S1, S1, S10
      VLDR            S28, [R11,#0x54]
      VLDR            S26, [R11,#0x74]
      VLDR            S30, [R11,#0xA4]
      VLDR            S7, [R11,#0x50]
      VADD.F32        S4, S6, S4
      VLDR            S18, [R11,#0x60]
      VMUL.F32        S6, S2, S24
      VLDR            S17, [R11,#0x80]
      VADD.F32        S12, S3, S12
      VLDR            S19, [R11,#0xB0]
      VADD.F32        S8, S14, S8
      VSTR            S9, [SP,#0x138+var_114]
      VMUL.F32        S14, S0, S9
      VSTR            S7, [SP,#0x138+var_100]
      VMUL.F32        S3, S2, S28
      VMUL.F32        S4, S4, S10
      VADD.F32        S6, S6, S5
      VMUL.F32        S12, S12, S1
      VMUL.F32        S8, S8, S1
      VADD.F32        S14, S3, S14
      VMUL.F32        S6, S6, S10
      VADD.F32        S4, S4, S8
      VMUL.F32        S8, S0, S26
      VMUL.F32        S14, S14, S1
      VADD.F32        S6, S6, S12
      VMUL.F32        S12, S2, S30
      VADD.F32        S8, S12, S8
      VMUL.F32        S12, S0, S7
      VMUL.F32        S0, S0, S17
      VMUL.F32        S8, S8, S10
      VADD.F32        S8, S8, S14
      VMUL.F32        S14, S2, S18
      VMUL.F32        S2, S2, S19
      VSTR            S8, [SP,#0x138+var_AC]
      VADD.F32        S12, S14, S12
      VSTR            S4, [SP,#0x138+var_A8]
      VADD.F32        S0, S2, S0
      VSTR            S6, [SP,#0x138+var_A4]
      VMUL.F32        S0, S0, S10
      VADD.F32        S0, S0, S12
      VSTR            S0, [SP,#0x138+var_A0]
    Tessellator::color(v9, (const Color *)&v95);
    _R0 = *((_BYTE *)_R11 + 180);
    _R1 = *((_BYTE *)_R11 + 181);
      VLDR            S4, =0.0625
      VMOV            S2, R0
      VMOV            S0, R1
      VCVT.F32.U32    S0, S0
      VCVT.F32.U32    S2, S2
      VMUL.F32        S0, S0, S4
      VMUL.F32        S2, S2, S4
      VSTR            S0, [SP,#0x138+var_B4]
      VSTR            S2, [SP,#0x138+var_B0]
    if ( !*((_BYTE *)_R11 + 48) )
      Tessellator::tex1((int)v9, (__int64 *)&v94);
      VMOV            R9, S29
      VMOV            R7, S27
      VMOV            R8, S25
    Tessellator::vertexUV(v9, _R9, _R7, _R8, v67, v71);
      VMOV.F32        S4, #1.0
      VLDR            S0, [R11,#0x2DC]
      VLDR            S6, [SP,#0x138+var_114]
      VLDR            S14, [SP,#0x138+var_110]
      VMUL.F32        S10, S0, S26
      VLDR            S3, [SP,#0x138+var_108]
      VMUL.F32        S6, S0, S6
      VLDR            S7, [SP,#0x138+var_10C]
      VMUL.F32        S14, S0, S14
      VLDR            S15, [SP,#0x138+var_100]
      VMUL.F32        S3, S0, S3
      VLDR            S1, [SP,#0x138+var_118]
      VMUL.F32        S7, S0, S7
      VMOV.F32        S25, S4
      VLDR            S5, [SP,#0x138+var_104]
      VLDR            S9, [SP,#0x138+var_11C]
      VMUL.F32        S11, S0, S31
      VMUL.F32        S15, S0, S15
      VLDR            S2, [R11,#0x2E4]
      VSUB.F32        S4, S25, S0
      VSUB.F32        S23, S25, S2
      VMUL.F32        S8, S4, S28
      VMUL.F32        S12, S4, S30
      VMUL.F32        S1, S4, S1
      VMUL.F32        S5, S4, S5
      VMUL.F32        S9, S4, S9
      VMUL.F32        S13, S4, S24
      VMUL.F32        S21, S4, S18
      VMUL.F32        S4, S4, S19
      VADD.F32        S6, S8, S6
      VADD.F32        S8, S12, S10
      VADD.F32        S10, S1, S14
      VADD.F32        S12, S5, S3
      VADD.F32        S14, S9, S7
      VADD.F32        S1, S13, S11
      VADD.F32        S0, S4, S0
      VADD.F32        S3, S21, S15
      VMUL.F32        S4, S6, S23
      VMUL.F32        S6, S8, S2
      VMUL.F32        S8, S10, S23
      VMUL.F32        S10, S12, S2
      VMUL.F32        S12, S14, S23
      VMUL.F32        S14, S1, S2
      VMUL.F32        S0, S0, S2
      VMUL.F32        S1, S3, S23
      VADD.F32        S2, S6, S4
      VADD.F32        S4, S10, S8
      VADD.F32        S6, S14, S12
      VADD.F32        S0, S0, S1
      VSTR            S2, [SP,#0x138+var_C4]
      VSTR            S4, [SP,#0x138+var_C0]
      VSTR            S6, [SP,#0x138+var_BC]
      VSTR            S0, [SP,#0x138+var_B8]
    Tessellator::color(v9, (const Color *)&v93);
    _R0 = *((_BYTE *)_R11 + 186);
    _R1 = *((_BYTE *)_R11 + 187);
      VMOV.F32        S27, S4
      VSTR            S0, [SP,#0x138+var_CC]
      VSTR            S2, [SP,#0x138+var_C8]
      Tessellator::tex1((int)v9, (__int64 *)&v92);
      VMOV            R6, S0
    Tessellator::vertexUV(v9, _R9, _R7, _R6, v68, v72);
      VLDR            S2, [R11,#0x2DC]
      VMOV.F32        S23, S25
      VSUB.F32        S4, S25, S2
      VMUL.F32        S10, S2, S26
      VMUL.F32        S11, S2, S31
      VMUL.F32        S7, S2, S7
      VLDR            S0, [R11,#0x2D8]
      VMUL.F32        S15, S2, S15
      VMUL.F32        S22, S4, S18
      VMUL.F32        S2, S2, S17
      VSUB.F32        S21, S25, S0
      VADD.F32        S2, S4, S2
      VADD.F32        S3, S22, S15
      VMUL.F32        S4, S6, S21
      VMUL.F32        S6, S8, S0
      VMUL.F32        S8, S10, S21
      VMUL.F32        S10, S12, S0
      VMUL.F32        S12, S14, S21
      VMUL.F32        S14, S1, S0
      VMUL.F32        S0, S2, S0
      VMUL.F32        S1, S3, S21
      VSTR            S2, [SP,#0x138+var_DC]
      VSTR            S4, [SP,#0x138+var_D8]
      VSTR            S6, [SP,#0x138+var_D4]
      VSTR            S0, [SP,#0x138+var_D0]
    Tessellator::color(v9, (const Color *)&v91);
    _R0 = *((_BYTE *)_R11 + 184);
    __asm { VMOV.F32        S22, S27 }
    _R1 = *((_BYTE *)_R11 + 185);
      VMUL.F32        S0, S0, S27
      VMUL.F32        S2, S2, S27
      VSTR            S0, [SP,#0x138+var_E4]
      VSTR            S2, [SP,#0x138+var_E0]
      Tessellator::tex1((int)v9, (__int64 *)&v90);
    Tessellator::vertexUV(v9, _R9, _R7, _R6, v69, v73);
      VLDR            S2, [R11,#0x2E8]
      VSUB.F32        S4, S23, S2
      VMUL.F32        S18, S4, S18
      VSUB.F32        S20, S23, S0
      VADD.F32        S3, S18, S15
      VMUL.F32        S4, S6, S20
      VMUL.F32        S8, S10, S20
      VMUL.F32        S12, S14, S20
      VMUL.F32        S1, S3, S20
      VSTR            S2, [SP,#0x138+var_F4]
      VSTR            S4, [SP,#0x138+var_F0]
      VSTR            S6, [SP,#0x138+var_EC]
      VSTR            S0, [SP,#0x138+var_E8]
    Tessellator::color(v9, (const Color *)&v89);
    _R0 = *((_BYTE *)_R11 + 182);
    _R1 = *((_BYTE *)_R11 + 183);
      VMUL.F32        S0, S0, S22
      VMUL.F32        S2, S2, S22
      VSTR            S0, [SP,#0x138+var_FC]
      VSTR            S2, [SP,#0x138+var_F8]
      Tessellator::tex1((int)v9, (__int64 *)&v88);
    Tessellator::vertexUV(v9, _R9, _R7, _R8, v70, v74);
  v64 = (void *)(v103 - 12);
  if ( (int *)(v103 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v103 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
    else
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v64);
}


signed int __fastcall BlockTessellator::tessellateItemFrameInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  BlockTessellator *v5; // r6@1
  Tessellator *v6; // r8@1
  BlockSource *v7; // r10@1
  const Block *v8; // r11@1
  const TextureUVCoordinateSet *v9; // r9@1
  const BlockPos *v10; // r2@1
  const TextureUVCoordinateSet *v11; // r4@1
  ItemFrameBlock *v12; // r0@1
  AABB *v17; // r0@6
  int v20; // r0@8
  _BOOL4 v21; // r0@15
  _BOOL4 v22; // r4@15
  _BOOL4 v23; // r0@19
  _BOOL4 v24; // r7@19
  _BOOL4 v25; // r0@25
  _BOOL4 v26; // r5@25
  _BOOL4 v27; // r0@31
  _BOOL4 v28; // r4@31
  char *v29; // r5@40
  const TextureUVCoordinateSet *v30; // r4@47
  char *v31; // r5@49
  AABB *v33; // [sp+14h] [bp-68Ch]@15
  _BOOL4 v34; // [sp+18h] [bp-688h]@15
  _BOOL4 v35; // [sp+18h] [bp-688h]@19
  _BOOL4 v36; // [sp+18h] [bp-688h]@25
  _BOOL4 v37; // [sp+18h] [bp-688h]@31
  const TextureUVCoordinateSet *v38; // [sp+1Ch] [bp-684h]@9
  char v39; // [sp+20h] [bp-680h]@51
  char v40; // [sp+2Ch] [bp-674h]@50
  int v41; // [sp+38h] [bp-668h]@48
  int v42; // [sp+44h] [bp-65Ch]@48
  char v43; // [sp+50h] [bp-650h]@48
  char v44; // [sp+5Ch] [bp-644h]@48
  char v45; // [sp+68h] [bp-638h]@48
  char v46; // [sp+74h] [bp-62Ch]@50
  float v47; // [sp+80h] [bp-620h]@47
  int v48; // [sp+8Ch] [bp-614h]@47
  char v49; // [sp+98h] [bp-608h]@47
  char v50; // [sp+A4h] [bp-5FCh]@47
  char v51; // [sp+B0h] [bp-5F0h]@47
  char v52; // [sp+BCh] [bp-5E4h]@46
  float v53; // [sp+C8h] [bp-5D8h]@34
  int v54; // [sp+D4h] [bp-5CCh]@34
  char v55; // [sp+E0h] [bp-5C0h]@34
  char v56; // [sp+ECh] [bp-5B4h]@34
  char v57; // [sp+F8h] [bp-5A8h]@34
  char v58; // [sp+104h] [bp-59Ch]@46
  char v59; // [sp+110h] [bp-590h]@33
  char v60; // [sp+11Ch] [bp-584h]@33
  float v61; // [sp+128h] [bp-578h]@33
  int v62; // [sp+134h] [bp-56Ch]@33
  char v63; // [sp+140h] [bp-560h]@33
  char v64; // [sp+14Ch] [bp-554h]@33
  char v65; // [sp+158h] [bp-548h]@33
  char v66; // [sp+164h] [bp-53Ch]@32
  char v67; // [sp+170h] [bp-530h]@31
  char v68; // [sp+17Ch] [bp-524h]@31
  float v69; // [sp+188h] [bp-518h]@31
  int v70; // [sp+194h] [bp-50Ch]@31
  char v71; // [sp+1A0h] [bp-500h]@40
  char v72; // [sp+1ACh] [bp-4F4h]@39
  float v73; // [sp+1B8h] [bp-4E8h]@39
  int v74; // [sp+1C0h] [bp-4E0h]@39
  float v75; // [sp+1C4h] [bp-4DCh]@39
  int v76; // [sp+1CCh] [bp-4D4h]@39
  char v77; // [sp+1D0h] [bp-4D0h]@39
  char v78; // [sp+1DCh] [bp-4C4h]@39
  char v79; // [sp+1E8h] [bp-4B8h]@38
  char v80; // [sp+1F4h] [bp-4ACh]@24
  float v81; // [sp+200h] [bp-4A0h]@24
  int v82; // [sp+208h] [bp-498h]@24
  float v83; // [sp+20Ch] [bp-494h]@24
  char v84; // [sp+218h] [bp-488h]@24
  char v85; // [sp+224h] [bp-47Ch]@24
  char v86; // [sp+230h] [bp-470h]@38
  char v87; // [sp+23Ch] [bp-464h]@23
  float v88; // [sp+248h] [bp-458h]@23
  int v89; // [sp+250h] [bp-450h]@23
  float v90; // [sp+254h] [bp-44Ch]@23
  char v91; // [sp+260h] [bp-440h]@23
  char v92; // [sp+26Ch] [bp-434h]@23
  char v93; // [sp+278h] [bp-428h]@23
  char v94; // [sp+284h] [bp-41Ch]@23
  char v95; // [sp+290h] [bp-410h]@22
  char v96; // [sp+29Ch] [bp-404h]@21
  float v97; // [sp+2A8h] [bp-3F8h]@21
  int v98; // [sp+2B0h] [bp-3F0h]@21
  float v99; // [sp+2B4h] [bp-3ECh]@21
  char v100; // [sp+2C0h] [bp-3E0h]@21
  char v101; // [sp+2CCh] [bp-3D4h]@21
  char v102; // [sp+2D8h] [bp-3C8h]@21
  char v103; // [sp+2E4h] [bp-3BCh]@21
  char v104; // [sp+2F0h] [bp-3B0h]@20
  char v105; // [sp+2FCh] [bp-3A4h]@19
  float v106; // [sp+308h] [bp-398h]@19
  int v107; // [sp+310h] [bp-390h]@19
  float v108; // [sp+314h] [bp-38Ch]@19
  char v109; // [sp+320h] [bp-380h]@44
  char v110; // [sp+32Ch] [bp-374h]@43
  float v111; // [sp+338h] [bp-368h]@42
  int v112; // [sp+340h] [bp-360h]@42
  float v113; // [sp+344h] [bp-35Ch]@42
  int v114; // [sp+34Ch] [bp-354h]@42
  char v115; // [sp+350h] [bp-350h]@42
  char v116; // [sp+35Ch] [bp-344h]@42
  char v117; // [sp+368h] [bp-338h]@42
  char v118; // [sp+374h] [bp-32Ch]@41
  float v119; // [sp+380h] [bp-320h]@30
  float v120; // [sp+38Ch] [bp-314h]@30
  int v121; // [sp+394h] [bp-30Ch]@30
  char v122; // [sp+398h] [bp-308h]@30
  char v123; // [sp+3A4h] [bp-2FCh]@30
  char v124; // [sp+3B0h] [bp-2F0h]@30
  char v125; // [sp+3BCh] [bp-2E4h]@41
  char v126; // [sp+3C8h] [bp-2D8h]@29
  char v127; // [sp+3D4h] [bp-2CCh]@29
  int v128; // [sp+3DCh] [bp-2C4h]@29
  char v129; // [sp+3E0h] [bp-2C0h]@29
  char v130; // [sp+3ECh] [bp-2B4h]@29
  char v131; // [sp+3F8h] [bp-2A8h]@29
  char v132; // [sp+404h] [bp-29Ch]@29
  char v133; // [sp+410h] [bp-290h]@29
  char v134; // [sp+41Ch] [bp-284h]@28
  char v135; // [sp+428h] [bp-278h]@27
  char v136; // [sp+434h] [bp-26Ch]@27
  int v137; // [sp+43Ch] [bp-264h]@27
  char v138; // [sp+440h] [bp-260h]@27
  char v139; // [sp+44Ch] [bp-254h]@27
  char v140; // [sp+458h] [bp-248h]@27
  char v141; // [sp+464h] [bp-23Ch]@27
  char v142; // [sp+470h] [bp-230h]@27
  char v143; // [sp+47Ch] [bp-224h]@26
  char v144; // [sp+488h] [bp-218h]@25
  char v145; // [sp+494h] [bp-20Ch]@25
  int v146; // [sp+49Ch] [bp-204h]@25
  char v147; // [sp+4A0h] [bp-200h]@49
  char v148; // [sp+4ACh] [bp-1F4h]@37
  int v149; // [sp+4B8h] [bp-1E8h]@37
  int v150; // [sp+4C4h] [bp-1DCh]@37
  char v151; // [sp+4D0h] [bp-1D0h]@37
  char v152; // [sp+4DCh] [bp-1C4h]@37
  char v153; // [sp+4E8h] [bp-1B8h]@49
  char v154; // [sp+4F4h] [bp-1ACh]@36
  int v155; // [sp+500h] [bp-1A0h]@36
  char v156; // [sp+50Ch] [bp-194h]@36
  char v157; // [sp+518h] [bp-188h]@36
  char v158; // [sp+524h] [bp-17Ch]@36
  char v159; // [sp+530h] [bp-170h]@35
  char v160; // [sp+53Ch] [bp-164h]@18
  int v161; // [sp+548h] [bp-158h]@18
  char v162; // [sp+554h] [bp-14Ch]@18
  char v163; // [sp+560h] [bp-140h]@18
  char v164; // [sp+56Ch] [bp-134h]@18
  char v165; // [sp+578h] [bp-128h]@35
  char v166; // [sp+584h] [bp-11Ch]@17
  char v167; // [sp+590h] [bp-110h]@17
  char v168; // [sp+59Ch] [bp-104h]@17
  int v169; // [sp+5A8h] [bp-F8h]@17
  char v170; // [sp+5B4h] [bp-ECh]@17
  char v171; // [sp+5C0h] [bp-E0h]@17
  char v172; // [sp+5CCh] [bp-D4h]@17
  char v173; // [sp+5D8h] [bp-C8h]@16
  char v174; // [sp+5E4h] [bp-BCh]@15
  char v175; // [sp+5F0h] [bp-B0h]@15
  char v176; // [sp+5FCh] [bp-A4h]@15
  int v177; // [sp+608h] [bp-98h]@15
  char v178; // [sp+614h] [bp-8Ch]@15
  unsigned __int8 v179; // [sp+620h] [bp-80h]@7
  unsigned __int8 v180; // [sp+621h] [bp-7Fh]@7
  char v181; // [sp+624h] [bp-7Ch]@11
  char v182; // [sp+62Ch] [bp-74h]@6
  char v183; // [sp+648h] [bp-58h]@6

  v5 = this;
  v6 = a2;
  v7 = a4;
  v8 = a3;
  v9 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(
                                         BlockGraphics::mBlocks[*(_BYTE *)(Block::mWoodPlanks + 4)],
                                         2,
                                         0);
  v11 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(BlockGraphics::mBlocks[*((_BYTE *)v8 + 4)], 0, 0);
  v12 = (ItemFrameBlock *)*((_DWORD *)v5 + 1);
  if ( v12 )
  {
    ItemFrameBlock::isMapFrame(v12, v7, v10);
    __asm
    {
      VLDR            S2, =0.0
      VMOV.F32        S16, #0.125
      VLDR            S0, =0.05625
      VLDR            S18, =0.0625
    }
    if ( !_ZF )
      __asm
      {
        VMOVNE.F32      S18, S0
        VMOVNE.F32      S16, S2
      }
  }
  else
  v17 = (AABB *)AABB::AABB((int)&v182, (int)&Vec3::ZERO, (int)&Vec3::ONE);
  BlockOccluder::BlockOccluder(
    (BlockOccluder *)&v183,
    (int)v5 + 812,
    v8,
    v7,
    v17,
    (int)&Facing::ALL_FACES,
    *((_BYTE *)v5 + 48));
  if ( *((_BYTE *)v5 + 48) )
    _R1 = (unsigned __int8)Brightness::MAX;
    v179 = Brightness::MAX;
    v180 = Brightness::MAX;
    _R2 = (unsigned __int8)Brightness::MAX;
    BlockTessellatorCache::getLightColor(
      (BlockTessellatorCache *)&v179,
      (BlockTessellator *)((char *)v5 + 812),
      (int)v7);
    _R1 = v179;
    _R2 = v180;
    v20 = *((_BYTE *)v5 + 48);
  __asm { VMOV            S0, R2 }
  v38 = v11;
  __asm
    VMOV            S2, R1
    VLDR            S20, =0.0625
    VCVT.F32.U32    S0, S0
    VCVT.F32.U32    S2, S2
    VMUL.F32        S0, S0, S20
    VMUL.F32        S2, S2, S20
    VSTR            S0, [R7,#0x25C]
    VSTR            S2, [R7,#0x260]
  if ( _ZF )
    Tessellator::tex1((int)v6, (__int64 *)&v181);
  Tessellator::color(v6, 1.0, 1.0, 1.0, 1.0);
  if ( a5 != 3 )
    if ( a5 != 2 )
      if ( a5 == 1 )
        v21 = BlockOccluder::occludes((BlockOccluder *)&v183, 5);
        __asm { VMOV.F32        S0, #1.0 }
        v22 = v21;
        v177 = 1065353216;
        v34 = v21;
        v33 = (BlockTessellator *)((char *)v5 + 724);
        __asm
        {
          VSUB.F32        S24, S0, S18
          VSUB.F32        S22, S0, S16
          VADD.F32        S18, S16, S20
          VSTR            S24, [R7,#0x24C]
          VSTR            S16, [R7,#0x250]
          VSTR            S22, [R7,#0x244]
          VSTR            S16, [R7,#0x254]
          VSTR            S18, [R7,#0x248]
        }
        AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v178, (const Vec3 *)&v177);
        Vec3::Vec3((int)&v176, (int)v7);
        BlockTessellator::tessellateNorth(v5, v6, v8, (const Vec3 *)&v176, v9);
        Vec3::Vec3((int)&v175, (int)v7);
        BlockTessellator::tessellateSouth(v5, v6, v8, (const Vec3 *)&v175, v9);
        Vec3::Vec3((int)&v174, (int)v7);
        BlockTessellator::tessellateWest(v5, v6, v8, (const Vec3 *)&v174, v9);
        if ( !v22 )
          Vec3::Vec3((int)&v173, (int)v7);
          BlockTessellator::tessellateEast(v5, v6, v8, (const Vec3 *)&v173, v9);
        Vec3::Vec3((int)&v172, (int)v7);
        BlockTessellator::tessellateFaceUp(v5, v6, v8, (const Vec3 *)&v172, v9);
        Vec3::Vec3((int)&v171, (int)v7);
        BlockTessellator::tessellateFaceDown(v5, v6, v8, (const Vec3 *)&v171, v9);
        __asm { VMOV.F32        S0, #0.9375 }
        v169 = 1065353216;
          VSTR            S24, [R7,#0x1EC]
          VSTR            S22, [R7,#0x1E4]
          VSTR            S16, [R7,#0x1F0]
          VSTR            S22, [R7,#0x1E8]
          VSUB.F32        S20, S0, S16
          VSTR            S20, [R7,#0x1F4]
        AABB::set(v33, (const Vec3 *)&v170, (const Vec3 *)&v169);
        Vec3::Vec3((int)&v168, (int)v7);
        BlockTessellator::tessellateNorth(v5, v6, v8, (const Vec3 *)&v168, v9);
        Vec3::Vec3((int)&v167, (int)v7);
        BlockTessellator::tessellateSouth(v5, v6, v8, (const Vec3 *)&v167, v9);
        Vec3::Vec3((int)&v166, (int)v7);
        BlockTessellator::tessellateWest(v5, v6, v8, (const Vec3 *)&v166, v9);
        if ( v34 )
          Vec3::Vec3((int)&v164, (int)v7);
          BlockTessellator::tessellateFaceUp(v5, v6, v8, (const Vec3 *)&v164, v9);
          Vec3::Vec3((int)&v163, (int)v7);
          BlockTessellator::tessellateFaceDown(v5, v6, v8, (const Vec3 *)&v163, v9);
          v161 = 1065353216;
          __asm
          {
            VSTR            S24, [R7,#0x18C]
            VSTR            S16, [R7,#0x190]
            VSTR            S18, [R7,#0x184]
            VSTR            S18, [R7,#0x194]
            VSTR            S20, [R7,#0x188]
          }
          AABB::set(v33, (const Vec3 *)&v162, (const Vec3 *)&v161);
          Vec3::Vec3((int)&v160, (int)v7);
          BlockTessellator::tessellateWest(v5, v6, v8, (const Vec3 *)&v160, v9);
        else
          Vec3::Vec3((int)&v165, (int)v7);
          BlockTessellator::tessellateEast(v5, v6, v8, (const Vec3 *)&v165, v9);
          Vec3::Vec3((int)&v159, (int)v7);
          BlockTessellator::tessellateEast(v5, v6, v8, (const Vec3 *)&v159, v9);
        Vec3::Vec3((int)&v158, (int)v7);
        BlockTessellator::tessellateFaceUp(v5, v6, v8, (const Vec3 *)&v158, v9);
        Vec3::Vec3((int)&v157, (int)v7);
        BlockTessellator::tessellateFaceDown(v5, v6, v8, (const Vec3 *)&v157, v9);
        v155 = 1065353216;
          VSTR            S24, [R7,#0x144]
          VSTR            S20, [R7,#0x148]
          VSTR            S22, [R7,#0x13C]
          VSTR            S18, [R7,#0x14C]
          VSTR            S20, [R7,#0x140]
        AABB::set(v33, (const Vec3 *)&v156, (const Vec3 *)&v155);
        Vec3::Vec3((int)&v154, (int)v7);
        BlockTessellator::tessellateWest(v5, v6, v8, (const Vec3 *)&v154, v9);
          Vec3::Vec3((int)&v152, (int)v7);
          BlockTessellator::tessellateFaceUp(v5, v6, v8, (const Vec3 *)&v152, v9);
          Vec3::Vec3((int)&v151, (int)v7);
          BlockTessellator::tessellateFaceDown(v5, v6, v8, (const Vec3 *)&v151, v9);
          v150 = 1064828928;
          v149 = 1065353216;
            VSTR            S18, [R7,#0x100]
            VSTR            S20, [R7,#0xF4]
            VSTR            S18, [R7,#0x104]
            VSTR            S20, [R7,#0xF8]
          AABB::set(v33, (const Vec3 *)&v150, (const Vec3 *)&v149);
          Vec3::Vec3((int)&v148, (int)v7);
          BlockTessellator::tessellateWest(v5, v6, v8, (const Vec3 *)&v148, v38);
          return 1;
        Vec3::Vec3((int)&v153, (int)v7);
        BlockTessellator::tessellateEast(v5, v6, v8, (const Vec3 *)&v153, v9);
        Vec3::Vec3((int)&v152, (int)v7);
        BlockTessellator::tessellateFaceUp(v5, v6, v8, (const Vec3 *)&v152, v9);
        Vec3::Vec3((int)&v151, (int)v7);
        BlockTessellator::tessellateFaceDown(v5, v6, v8, (const Vec3 *)&v151, v9);
        v150 = 1064828928;
        v149 = 1065353216;
          VSTR            S18, [R7,#0x100]
          VSTR            S20, [R7,#0xF4]
          VSTR            S18, [R7,#0x104]
          VSTR            S20, [R7,#0xF8]
        AABB::set(v33, (const Vec3 *)&v150, (const Vec3 *)&v149);
        Vec3::Vec3((int)&v148, (int)v7);
        v30 = v38;
        BlockTessellator::tessellateWest(v5, v6, v8, (const Vec3 *)&v148, v38);
        v31 = &v147;
      else
        v27 = BlockOccluder::occludes((BlockOccluder *)&v183, 4);
          VMOV.F32        S0, #1.0
          VADD.F32        S20, S16, S20
        v28 = v27;
        v70 = 0;
        __asm { VSTR            S16, [SP,#0x6A0+var_508] }
        v37 = v27;
          VSTR            S16, [SP,#0x6A0+var_504]
          VSUB.F32        S24, S0, S16
          VSTR            S18, [SP,#0x6A0+var_518]
          VSTR            S24, [SP,#0x6A0+var_514]
          VSTR            S20, [SP,#0x6A0+var_510]
        AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v70, (const Vec3 *)&v69);
        Vec3::Vec3((int)&v68, (int)v7);
        BlockTessellator::tessellateNorth(v5, v6, v8, (const Vec3 *)&v68, v9);
        Vec3::Vec3((int)&v67, (int)v7);
        BlockTessellator::tessellateSouth(v5, v6, v8, (const Vec3 *)&v67, v9);
        if ( !v28 )
          Vec3::Vec3((int)&v66, (int)v7);
          BlockTessellator::tessellateWest(v5, v6, v8, (const Vec3 *)&v66, v9);
        Vec3::Vec3((int)&v65, (int)v7);
        BlockTessellator::tessellateEast(v5, v6, v8, (const Vec3 *)&v65, v9);
        Vec3::Vec3((int)&v64, (int)v7);
        BlockTessellator::tessellateFaceUp(v5, v6, v8, (const Vec3 *)&v64, v9);
        Vec3::Vec3((int)&v63, (int)v7);
        BlockTessellator::tessellateFaceDown(v5, v6, v8, (const Vec3 *)&v63, v9);
        v62 = 0;
          VSTR            S18, [SP,#0x6A0+var_578]
          VSTR            S24, [SP,#0x6A0+var_574]
          VSTR            S16, [SP,#0x6A0+var_568]
          VSTR            S24, [SP,#0x6A0+var_570]
          VSTR            S22, [SP,#0x6A0+var_564]
        AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v62, (const Vec3 *)&v61);
        Vec3::Vec3((int)&v60, (int)v7);
        BlockTessellator::tessellateNorth(v5, v6, v8, (const Vec3 *)&v60, v9);
        Vec3::Vec3((int)&v59, (int)v7);
        BlockTessellator::tessellateSouth(v5, v6, v8, (const Vec3 *)&v59, v9);
        if ( v37 )
          Vec3::Vec3((int)&v57, (int)v7);
          BlockTessellator::tessellateEast(v5, v6, v8, (const Vec3 *)&v57, v9);
          Vec3::Vec3((int)&v56, (int)v7);
          BlockTessellator::tessellateFaceUp(v5, v6, v8, (const Vec3 *)&v56, v9);
          Vec3::Vec3((int)&v55, (int)v7);
          BlockTessellator::tessellateFaceDown(v5, v6, v8, (const Vec3 *)&v55, v9);
          v54 = 0;
            VSTR            S16, [SP,#0x6A0+var_5C8]
            VSTR            S18, [SP,#0x6A0+var_5D8]
            VSTR            S20, [SP,#0x6A0+var_5D4]
            VSTR            S20, [SP,#0x6A0+var_5C4]
            VSTR            S22, [SP,#0x6A0+var_5D0]
          AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v54, (const Vec3 *)&v53);
          Vec3::Vec3((int)&v58, (int)v7);
          BlockTessellator::tessellateWest(v5, v6, v8, (const Vec3 *)&v58, v9);
          Vec3::Vec3((int)&v52, (int)v7);
          BlockTessellator::tessellateWest(v5, v6, v8, (const Vec3 *)&v52, v9);
        Vec3::Vec3((int)&v51, (int)v7);
        BlockTessellator::tessellateEast(v5, v6, v8, (const Vec3 *)&v51, v9);
        Vec3::Vec3((int)&v50, (int)v7);
        BlockTessellator::tessellateFaceUp(v5, v6, v8, (const Vec3 *)&v50, v9);
        Vec3::Vec3((int)&v49, (int)v7);
        BlockTessellator::tessellateFaceDown(v5, v6, v8, (const Vec3 *)&v49, v9);
        v48 = 0;
          VSTR            S22, [SP,#0x6A0+var_610]
          VSTR            S18, [SP,#0x6A0+var_620]
          VSTR            S24, [SP,#0x6A0+var_61C]
          VSTR            S20, [SP,#0x6A0+var_60C]
          VSTR            S22, [SP,#0x6A0+var_618]
        AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v48, (const Vec3 *)&v47);
          Vec3::Vec3((int)&v45, (int)v7);
          BlockTessellator::tessellateEast(v5, v6, v8, (const Vec3 *)&v45, v9);
          Vec3::Vec3((int)&v44, (int)v7);
          BlockTessellator::tessellateFaceUp(v5, v6, v8, (const Vec3 *)&v44, v9);
          Vec3::Vec3((int)&v43, (int)v7);
          BlockTessellator::tessellateFaceDown(v5, v6, v8, (const Vec3 *)&v43, v9);
          v42 = 0;
          v41 = 1023410176;
            VSTR            S20, [SP,#0x6A0+var_658]
            VSTR            S22, [SP,#0x6A0+var_664]
            VSTR            S20, [SP,#0x6A0+var_654]
            VSTR            S22, [SP,#0x6A0+var_660]
          AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v42, (const Vec3 *)&v41);
          Vec3::Vec3((int)&v46, (int)v7);
          BlockTessellator::tessellateWest(v5, v6, v8, (const Vec3 *)&v46, v9);
          Vec3::Vec3((int)&v40, (int)v7);
          BlockTessellator::tessellateWest(v5, v6, v8, (const Vec3 *)&v40, v38);
        v31 = &v39;
      Vec3::Vec3((int)v31, (int)v7);
      BlockTessellator::tessellateEast(v5, v6, v8, (const Vec3 *)v31, v30);
      return 1;
    v25 = BlockOccluder::occludes((BlockOccluder *)&v183, 2);
      VMOV.F32        S0, #1.0
      VADD.F32        S20, S16, S20
    v26 = v25;
      VSTR            S16, [R7,#0xCC]
      VSTR            S16, [R7,#0xD0]
    v146 = 0;
    v36 = v25;
      VSUB.F32        S22, S0, S16
      VSTR            S20, [R7,#0xC0]
      VSTR            S22, [R7,#0xC4]
      VSTR            S18, [R7,#0xC8]
    AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v145, (const Vec3 *)&v144);
    if ( !v26 )
      Vec3::Vec3((int)&v143, (int)v7);
      BlockTessellator::tessellateNorth(v5, v6, v8, (const Vec3 *)&v143, v9);
    Vec3::Vec3((int)&v142, (int)v7);
    BlockTessellator::tessellateSouth(v5, v6, v8, (const Vec3 *)&v142, v9);
    Vec3::Vec3((int)&v141, (int)v7);
    BlockTessellator::tessellateWest(v5, v6, v8, (const Vec3 *)&v141, v9);
    Vec3::Vec3((int)&v140, (int)v7);
    BlockTessellator::tessellateEast(v5, v6, v8, (const Vec3 *)&v140, v9);
    Vec3::Vec3((int)&v139, (int)v7);
    BlockTessellator::tessellateFaceUp(v5, v6, v8, (const Vec3 *)&v139, v9);
    Vec3::Vec3((int)&v138, (int)v7);
    BlockTessellator::tessellateFaceDown(v5, v6, v8, (const Vec3 *)&v138, v9);
      VMOV.F32        S0, #0.9375
      VSTR            S22, [R7,#0x60]
      VSTR            S22, [R7,#0x64]
      VSTR            S18, [R7,#0x68]
      VSUB.F32        S24, S0, S16
      VSTR            S24, [R7,#0x6C]
      VSTR            S16, [R7,#0x70]
    v137 = 0;
    AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v136, (const Vec3 *)&v135);
    if ( !v36 )
      Vec3::Vec3((int)&v134, (int)v7);
      BlockTessellator::tessellateNorth(v5, v6, v8, (const Vec3 *)&v134, v9);
    Vec3::Vec3((int)&v133, (int)v7);
    BlockTessellator::tessellateSouth(v5, v6, v8, (const Vec3 *)&v133, v9);
    Vec3::Vec3((int)&v132, (int)v7);
    BlockTessellator::tessellateWest(v5, v6, v8, (const Vec3 *)&v132, v9);
    Vec3::Vec3((int)&v131, (int)v7);
    BlockTessellator::tessellateEast(v5, v6, v8, (const Vec3 *)&v131, v9);
    Vec3::Vec3((int)&v130, (int)v7);
    BlockTessellator::tessellateFaceUp(v5, v6, v8, (const Vec3 *)&v130, v9);
    Vec3::Vec3((int)&v129, (int)v7);
    BlockTessellator::tessellateFaceDown(v5, v6, v8, (const Vec3 *)&v129, v9);
      VSTR            S20, [R7,#0xC]
      VSTR            S16, [R7,#0x10]
    v128 = 0;
      VSTR            S24, [R7]
      VSTR            S20, [R7,#4]
      VSTR            S18, [R7,#8]
    AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v127, (const Vec3 *)&v126);
    if ( v36 )
      Vec3::Vec3((int)&v124, (int)v7);
      BlockTessellator::tessellateSouth(v5, v6, v8, (const Vec3 *)&v124, v9);
      Vec3::Vec3((int)&v123, (int)v7);
      BlockTessellator::tessellateFaceUp(v5, v6, v8, (const Vec3 *)&v123, v9);
      Vec3::Vec3((int)&v122, (int)v7);
      BlockTessellator::tessellateFaceDown(v5, v6, v8, (const Vec3 *)&v122, v9);
        VSTR            S20, [SP,#0x6A0+var_314]
        VSTR            S24, [SP,#0x6A0+var_310]
      v121 = 0;
        VSTR            S24, [SP,#0x6A0+var_320]
        VSTR            S22, [SP,#0x6A0+var_31C]
        VSTR            S18, [SP,#0x6A0+var_318]
      AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v120, (const Vec3 *)&v119);
    else
      Vec3::Vec3((int)&v125, (int)v7);
      BlockTessellator::tessellateNorth(v5, v6, v8, (const Vec3 *)&v125, v9);
      Vec3::Vec3((int)&v118, (int)v7);
      BlockTessellator::tessellateNorth(v5, v6, v8, (const Vec3 *)&v118, v9);
    Vec3::Vec3((int)&v117, (int)v7);
    BlockTessellator::tessellateSouth(v5, v6, v8, (const Vec3 *)&v117, v9);
    Vec3::Vec3((int)&v116, (int)v7);
    BlockTessellator::tessellateFaceUp(v5, v6, v8, (const Vec3 *)&v116, v9);
    Vec3::Vec3((int)&v115, (int)v7);
    BlockTessellator::tessellateFaceDown(v5, v6, v8, (const Vec3 *)&v115, v9);
      VSTR            S20, [SP,#0x6A0+var_35C]
      VSTR            S20, [SP,#0x6A0+var_358]
    v114 = 0;
      VSTR            S24, [SP,#0x6A0+var_368]
      VSTR            S24, [SP,#0x6A0+var_364]
    v112 = 1023410176;
    AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v113, (const Vec3 *)&v111);
      Vec3::Vec3((int)&v110, (int)v7);
      BlockTessellator::tessellateNorth(v5, v6, v8, (const Vec3 *)&v110, v11);
    v29 = &v109;
LABEL_45:
    Vec3::Vec3((int)v29, (int)v7);
    BlockTessellator::tessellateSouth(v5, v6, v8, (const Vec3 *)v29, v11);
    return 1;
  v23 = BlockOccluder::occludes((BlockOccluder *)&v183, 3);
  __asm { VMOV.F32        S0, #1.0 }
  v24 = v23;
  __asm { VSTR            S16, [SP,#0x6A0+var_38C] }
  v35 = v23;
    VSTR            S16, [SP,#0x6A0+var_388]
    VSUB.F32        S22, S0, S18
    VADD.F32        S18, S16, S20
    VSUB.F32        S20, S0, S16
    VSTR            S22, [SP,#0x6A0+var_384]
    VSTR            S18, [SP,#0x6A0+var_398]
    VSTR            S20, [SP,#0x6A0+var_394]
  v107 = 1065353216;
  AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v108, (const Vec3 *)&v106);
  Vec3::Vec3((int)&v105, (int)v7);
  BlockTessellator::tessellateNorth(v5, v6, v8, (const Vec3 *)&v105, v9);
  if ( !v24 )
    Vec3::Vec3((int)&v104, (int)v7);
    BlockTessellator::tessellateSouth(v5, v6, v8, (const Vec3 *)&v104, v9);
  Vec3::Vec3((int)&v103, (int)v7);
  BlockTessellator::tessellateWest(v5, v6, v8, (const Vec3 *)&v103, v9);
  Vec3::Vec3((int)&v102, (int)v7);
  BlockTessellator::tessellateEast(v5, v6, v8, (const Vec3 *)&v102, v9);
  Vec3::Vec3((int)&v101, (int)v7);
  BlockTessellator::tessellateFaceUp(v5, v6, v8, (const Vec3 *)&v101, v9);
  Vec3::Vec3((int)&v100, (int)v7);
  BlockTessellator::tessellateFaceDown(v5, v6, v8, (const Vec3 *)&v100, v9);
    VMOV.F32        S0, #0.9375
    VSTR            S20, [SP,#0x6A0+var_3F8]
    VSTR            S20, [SP,#0x6A0+var_3F4]
  v98 = 1065353216;
    VSUB.F32        S24, S0, S16
    VSTR            S24, [SP,#0x6A0+var_3EC]
    VSTR            S16, [SP,#0x6A0+var_3E8]
    VSTR            S22, [SP,#0x6A0+var_3E4]
  AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v99, (const Vec3 *)&v97);
  Vec3::Vec3((int)&v96, (int)v7);
  BlockTessellator::tessellateNorth(v5, v6, v8, (const Vec3 *)&v96, v9);
  if ( !v35 )
    Vec3::Vec3((int)&v95, (int)v7);
    BlockTessellator::tessellateSouth(v5, v6, v8, (const Vec3 *)&v95, v9);
  Vec3::Vec3((int)&v94, (int)v7);
  BlockTessellator::tessellateWest(v5, v6, v8, (const Vec3 *)&v94, v9);
  Vec3::Vec3((int)&v93, (int)v7);
  BlockTessellator::tessellateEast(v5, v6, v8, (const Vec3 *)&v93, v9);
  Vec3::Vec3((int)&v92, (int)v7);
  BlockTessellator::tessellateFaceUp(v5, v6, v8, (const Vec3 *)&v92, v9);
  Vec3::Vec3((int)&v91, (int)v7);
  BlockTessellator::tessellateFaceDown(v5, v6, v8, (const Vec3 *)&v91, v9);
    VSTR            S18, [SP,#0x6A0+var_44C]
    VSTR            S16, [SP,#0x6A0+var_448]
    VSTR            S24, [SP,#0x6A0+var_458]
    VSTR            S18, [SP,#0x6A0+var_454]
    VSTR            S22, [SP,#0x6A0+var_444]
  v89 = 1065353216;
  AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v90, (const Vec3 *)&v88);
  Vec3::Vec3((int)&v87, (int)v7);
  BlockTessellator::tessellateNorth(v5, v6, v8, (const Vec3 *)&v87, v9);
  if ( v35 )
    Vec3::Vec3((int)&v85, (int)v7);
    BlockTessellator::tessellateFaceUp(v5, v6, v8, (const Vec3 *)&v85, v9);
    Vec3::Vec3((int)&v84, (int)v7);
    BlockTessellator::tessellateFaceDown(v5, v6, v8, (const Vec3 *)&v84, v9);
      VSTR            S24, [SP,#0x6A0+var_4A0]
      VSTR            S20, [SP,#0x6A0+var_49C]
    v82 = 1065353216;
      VSTR            S18, [SP,#0x6A0+var_494]
      VSTR            S24, [SP,#0x6A0+var_490]
      VSTR            S22, [SP,#0x6A0+var_48C]
    AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v83, (const Vec3 *)&v81);
    Vec3::Vec3((int)&v80, (int)v7);
    BlockTessellator::tessellateNorth(v5, v6, v8, (const Vec3 *)&v80, v9);
    Vec3::Vec3((int)&v86, (int)v7);
    BlockTessellator::tessellateSouth(v5, v6, v8, (const Vec3 *)&v86, v9);
    Vec3::Vec3((int)&v79, (int)v7);
    BlockTessellator::tessellateSouth(v5, v6, v8, (const Vec3 *)&v79, v9);
  Vec3::Vec3((int)&v78, (int)v7);
  BlockTessellator::tessellateFaceUp(v5, v6, v8, (const Vec3 *)&v78, v9);
  Vec3::Vec3((int)&v77, (int)v7);
  BlockTessellator::tessellateFaceDown(v5, v6, v8, (const Vec3 *)&v77, v9);
    VSTR            S18, [SP,#0x6A0+var_4DC]
    VSTR            S18, [SP,#0x6A0+var_4D8]
  v76 = 1064828928;
    VSTR            S24, [SP,#0x6A0+var_4E8]
    VSTR            S24, [SP,#0x6A0+var_4E4]
  v74 = 1065353216;
  AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v75, (const Vec3 *)&v73);
  Vec3::Vec3((int)&v72, (int)v7);
  BlockTessellator::tessellateNorth(v5, v6, v8, (const Vec3 *)&v72, v11);
    v29 = &v71;
    goto LABEL_45;
  return 1;
}


int __fastcall BlockTessellator::tessellateTorch(float this, float a2, float a3, const Vec3 *_R3, float a5, float a6, float a7)
{
  return BlockTessellator::tessellateTorch(
           (BlockTessellator *)LODWORD(this),
           (Tessellator *)LODWORD(a2),
           (const Block *)LODWORD(a3),
           _R3,
           a5,
           a6,
           a7);
}


int __fastcall BlockTessellator::canRender(int a1)
{
  char v1; // r2@1
  char v2; // r3@3
  char v3; // r1@3
  char v4; // r2@5
  char v5; // r3@5
  char v6; // r12@7
  char v7; // r2@7
  char v8; // r3@7
  char v9; // r2@9
  char v10; // r3@9
  char v11; // r3@11
  char v12; // r1@13
  char v13; // r3@13
  char v14; // r1@15
  char v15; // r3@15
  char v16; // r1@17
  char v17; // r3@17
  char v18; // r1@19
  char v19; // r3@19
  char v20; // r1@21
  char v21; // r3@21
  char v22; // r1@23
  char v23; // r3@23
  char v24; // r2@25
  char v25; // r1@25
  char v26; // r1@27
  char v27; // r2@27
  char v28; // r1@29
  char v29; // r2@29
  char v30; // r1@31
  char v31; // r2@31
  char v32; // r1@33
  char v33; // r2@33
  char v34; // r1@35
  char v35; // r2@35
  unsigned __int8 v36; // r1@37

  v1 = 0;
  if ( a1 == 77 )
    v1 = 1;
  v2 = 0;
  v3 = 0;
  if ( a1 == 43 )
    v2 = 1;
  v4 = v1 | v2;
  v5 = 0;
  if ( !a1 )
    v5 = 1;
  v6 = 0;
  v7 = v4 | v5;
  v8 = 0;
  if ( (unsigned int)(a1 - 67) < 2 )
    v8 = 1;
  v9 = v7 | v8;
  v10 = 0;
  if ( a1 == 13 )
    v10 = 1;
  v11 = v10 | v9;
  if ( (a1 | 1) == 11 )
    v3 = 1;
  v12 = v3 | v11;
  v13 = 0;
  if ( a1 == 21 )
    v13 = 1;
  v14 = v12 | v13;
  v15 = 0;
  if ( a1 == 32 )
    v15 = 1;
  v16 = v14 | v15;
  v17 = 0;
  if ( a1 == 22 )
    v17 = 1;
  v18 = v16 | v17;
  v19 = 0;
  if ( a1 == 31 )
    v19 = 1;
  v20 = v18 | v19;
  v21 = 0;
  if ( a1 == 26 )
    v21 = 1;
  v22 = v20 | v21;
  v23 = 0;
  if ( (unsigned int)(a1 - 75) < 2 )
    v23 = 1;
  v24 = 0;
  v25 = v22 | v23;
  if ( (a1 | 1) == 79 )
    v24 = 1;
  v26 = v25 | v24;
  v27 = 0;
  if ( a1 == 44 )
    v27 = 1;
  v28 = v26 | v27;
  v29 = 0;
  if ( a1 == 81 )
    v29 = 1;
  v30 = v28 | v29;
  v31 = 0;
  if ( a1 == 48 )
    v31 = 1;
  v32 = v30 | v31;
  v33 = 0;
  if ( (unsigned int)(a1 - 83) < 5 )
    v33 = 1;
  v34 = v32 | v33;
  v35 = 0;
  if ( a1 == 18 )
    v35 = 1;
  v36 = v34 | v35;
  if ( a1 == 89 )
    v6 = 1;
  return ((unsigned __int8)v6 | v36) & 1;
}


signed int __fastcall BlockTessellator::tessellateAnvilInWorld(BlockTessellator *this, Tessellator *a2, const AnvilBlock *a3, const BlockPos *a4, int a5, int a6)
{
  const AnvilBlock *v6; // r11@1
  BlockTessellator *v7; // r7@1
  Tessellator *v8; // r6@1
  const BlockPos *v9; // r5@1
  int v10; // r0@1
  int v11; // r1@1
  int v12; // r0@1
  int v13; // r4@4
  int v14; // r0@8
  float v15; // r8@8
  int v16; // r5@8
  int v17; // r0@8
  int v18; // r5@8
  int v19; // r1@8
  int v20; // r0@8
  int v21; // r0@8
  int v23; // [sp+28h] [bp-40h]@1
  signed int v24; // [sp+2Ch] [bp-3Ch]@1
  int v25; // [sp+30h] [bp-38h]@1
  int v26; // [sp+34h] [bp-34h]@1
  int v27; // [sp+38h] [bp-30h]@1
  int v28; // [sp+3Ch] [bp-2Ch]@1

  v6 = a3;
  v7 = this;
  v8 = a2;
  v9 = a4;
  v10 = (*(int (__fastcall **)(const AnvilBlock *, int))(*(_DWORD *)a3 + 384))(a3, a5);
  Tessellator::color(v8, v10);
  v27 = 0;
  v28 = 0;
  v25 = 0;
  v26 = 0;
  v23 = 0;
  v24 = 0;
  v12 = a5 & 3;
  if ( a5 & 3 )
  {
    if ( v12 == 1 )
    {
      v13 = 1;
      v25 = 1;
      v26 = 2;
      v23 = 1;
      v24 = 2;
    }
    else if ( v12 == 3 )
      v25 = 2;
      v26 = 1;
      v23 = 2;
      v24 = 1;
    else
      v13 = 0;
      v28 = 1;
      v27 = 2;
  }
  else
    v13 = 0;
    v28 = 2;
    v27 = 1;
    v23 = 3;
    v24 = 3;
  v14 = AnvilBlock::getDataForSide((AnvilBlock *)a5, v11);
  v15 = *(float *)&v9;
  v16 = BlockTessellator::tessellateAnvilPiece(
          (int)v7,
          *(float *)&v8,
          *(float *)&v6,
          *(float *)&v9,
          0.0,
          0,
          1061158912,
          1048576000,
          v13,
          a6,
          v14,
          &v23,
          6);
  v17 = AnvilBlock::getDataForSide((AnvilBlock *)a5, a5);
  v18 = BlockTessellator::tessellateAnvilPiece(
          v15,
          COERCE_FLOAT(1),
          v16,
          1056964608,
          1031798784,
          1059061760,
          v17,
  v20 = AnvilBlock::getDataForSide((AnvilBlock *)a5, v19);
  v21 = BlockTessellator::tessellateAnvilPiece(
          COERCE_FLOAT(2),
          v18,
          1050673152,
          v20,
  BlockTessellator::tessellateAnvilPiece(
    (int)v7,
    *(float *)&v8,
    *(float *)&v6,
    v15,
    COERCE_FLOAT(3),
    v21,
    1059061760,
    1052766949,
    1065353216,
    v13,
    a6,
    a5,
    &v23,
    6);
  AABB::set((unsigned int)v7 + 724, 0LL, 1.0, 1.0, 1.0);
  return 1;
}


signed int __fastcall BlockTessellator::tessellateEndRodEast(BlockTessellator *this, Tessellator *a2, const BlockPos *a3, const TextureUVCoordinateSet *a4)
{
  const BlockPos *v5; // r7@1
  Tessellator *v6; // r9@1
  const BlockPos *v7; // ST24_4@1
  BlockTessellator *v8; // ST20_4@1
  TextureUVCoordinateSet *v9; // r11@1
  AABB *v10; // ST28_4@1
  float v15; // ST3C_4@1
  int v16; // r0@1
  float v17; // r8@1
  float v18; // ST18_4@1
  int v19; // r0@1
  float v20; // r10@1
  float v21; // ST2C_4@1
  int v22; // r0@1
  float v23; // r7@1
  float v24; // ST1C_4@1
  float v25; // ST30_4@1
  int v26; // r0@1
  float v27; // r5@1
  float v28; // ST10_4@1
  float v29; // ST34_4@1
  int v30; // r0@1
  Tessellator *v31; // r4@1
  float v32; // ST14_4@1
  float v33; // ST00_4@1
  float v34; // ST04_4@1
  float v38; // ST48_4@1
  float v39; // ST4C_4@1
  float v40; // ST44_4@1
  float v41; // r7@1
  float v42; // r6@1
  float v43; // r10@1
  float v44; // ST04_4@1
  Tessellator *v45; // r0@1
  Tessellator *v46; // r8@1
  float v48; // ST40_4@1
  float v50; // ST38_4@1
  float v51; // r1@1
  float v52; // r3@1
  unsigned __int64 v53; // ST00_8@1
  float v54; // r4@1
  float v55; // r7@1
  float v57; // ST34_4@1
  float v58; // r5@1
  float v59; // ST3C_4@1
  float v60; // ST1C_4@1
  int v61; // r0@1
  float v62; // r10@1
  float v63; // ST14_4@1
  int v64; // r0@1
  float v65; // r9@1
  float v66; // ST10_4@1
  float v67; // ST18_4@1
  float v68; // ST0C_4@1
  int v69; // r0@1
  float v70; // r7@1
  float v71; // ST30_4@1
  float v72; // ST2C_4@1
  float v73; // ST00_4@1
  Tessellator *v74; // r10@1
  int v75; // r8@1
  int v76; // r9@1
  int v77; // r0@1
  float v78; // r4@1
  float v79; // ST1C_4@1
  int v80; // r0@1
  float v81; // r7@1
  float v82; // ST18_4@1
  float v83; // ST3C_4@1
  float v84; // ST14_4@1
  float v85; // ST30_4@1
  float v86; // ST2C_4@1
  Tessellator *v87; // r5@1
  int v89; // r0@1
  float v90; // r8@1
  float v91; // ST28_4@1
  int v92; // r0@1
  float v93; // r4@1
  float v94; // ST24_4@1
  int v95; // r0@1
  float v96; // r7@1
  float v97; // ST30_4@1
  int v98; // r0@1
  float v99; // r6@1
  float v100; // ST2C_4@1
  float v101; // ST3C_4@1
  int v102; // r0@1
  float v103; // r9@1
  float v104; // ST20_4@1
  float v105; // ST38_4@1
  int v106; // r0@1
  float v107; // r10@1
  float v108; // ST00_4@1
  float v109; // ST04_4@1
  float v113; // ST4C_4@1
  float v114; // ST48_4@1
  float v115; // ST40_4@1
  float v116; // r7@1
  float v117; // r6@1
  float v118; // ST00_4@1
  float v121; // r4@1
  float v122; // ST04_4@1
  float v124; // ST38_4@1
  float v125; // ST3C_4@1
  float v126; // ST30_4@1
  int v127; // r0@1
  float v128; // r4@1
  float v129; // ST20_4@1
  int v130; // r0@1
  float v131; // r9@1
  float v132; // ST1C_4@1
  float v133; // ST24_4@1
  float v134; // ST18_4@1
  int v135; // r0@1
  float v136; // r6@1
  float v137; // ST2C_4@1
  float v138; // ST28_4@1
  int v139; // r0@1
  float v140; // r10@1
  float v141; // ST18_4@1
  float v142; // ST20_4@1
  int v143; // r0@1
  float v144; // r6@1
  float v145; // ST28_4@1
  int v146; // r0@1
  float v147; // r4@1
  float v148; // ST24_4@1
  float v149; // ST1C_4@1
  float v150; // ST30_4@1
  float v151; // ST3C_4@1
  float v152; // ST2C_4@1
  float v154; // [sp+50h] [bp-C8h]@1
  float v157; // [sp+5Ch] [bp-BCh]@1
  float v160; // [sp+68h] [bp-B0h]@1
  float v163; // [sp+74h] [bp-A4h]@1
  int v166; // [sp+80h] [bp-98h]@1
  signed int v167; // [sp+84h] [bp-94h]@1
  signed int v168; // [sp+88h] [bp-90h]@1
  int v169; // [sp+8Ch] [bp-8Ch]@1
  signed int v170; // [sp+90h] [bp-88h]@1
  signed int v171; // [sp+94h] [bp-84h]@1
  int v172; // [sp+98h] [bp-80h]@1
  signed int v173; // [sp+9Ch] [bp-7Ch]@1
  signed int v174; // [sp+A0h] [bp-78h]@1
  int v175; // [sp+A4h] [bp-74h]@1
  signed int v176; // [sp+A8h] [bp-70h]@1
  signed int v177; // [sp+ACh] [bp-6Ch]@1

  _R6 = this;
  v175 = 0;
  v5 = a3;
  v6 = a2;
  v7 = a3;
  v8 = this;
  v176 = 1054867456;
  v177 = 1054867456;
  v172 = 1064304640;
  v173 = 1058013184;
  v174 = 1058013184;
  v169 = 1064304640;
  v170 = 1052770304;
  v171 = 1052770304;
  v166 = 1065353216;
  v167 = 1059061760;
  v168 = 1059061760;
  v9 = a4;
  v10 = (BlockTessellator *)((char *)this + 724);
  AABB::set((BlockTessellator *)((char *)this + 724), (const Vec3 *)&v175, (const Vec3 *)&v172);
  Vec3::Vec3((int)&v163, (int)v5);
  __asm
  {
    VLDR            S20, [R6,#0x2D4]
    VLDR            S16, [R6,#0x2D8]
    VLDR            S24, [R6,#0x2DC]
    VLDR            S22, [SP,#0x118+var_A4]
    VLDR            S18, [SP,#0x118+var_A0]
    VLDR            S26, [SP,#0x118+var_9C]
  }
  Vec3::Vec3((int)&v160, (int)v5);
    VLDR            S28, [R6,#0x2E0]
    VLDR            S30, [R6,#0x2E4]
    VLDR            S17, [R6,#0x2E8]
    VLDR            S19, [SP,#0x118+var_B0]
    VLDR            S21, [SP,#0x118+var_AC]
    VLDR            S23, [SP,#0x118+var_A8]
  v15 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.0, 0.0));
  *(float *)&v16 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.0, 0.0));
  v17 = *(float *)&v16;
  v18 = *(float *)&v16;
  *(float *)&v19 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0));
  v20 = *(float *)&v19;
  v21 = *(float *)&v19;
  *(float *)&v22 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.0, 0.0));
  v23 = *(float *)&v22;
  v24 = *(float *)&v22;
  v25 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.0, 0.0));
  *(float *)&v26 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.9375, 0.0));
  v27 = *(float *)&v26;
  v28 = *(float *)&v26;
  LODWORD(v29) = TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0);
  v30 = TextureUVCoordinateSet::offsetHeight(v9, 0.9375, 0.0);
  __asm { VADD.F32        S0, S28, S19 }
  v31 = v6;
  __asm { VADD.F32        S2, S30, S21 }
  LODWORD(v32) = v30;
  __asm { VADD.F32        S4, S17, S23 }
  v33 = v20;
  v34 = v23;
    VMOV            R1, S0
    VMOV            R2, S2
    VMOV            R3, S4
  v38 = _R1;
  v39 = _R2;
  v40 = _R3;
  v41 = _R1;
  v42 = _R2;
  v43 = _R3;
  Tessellator::vertexUV(v6, _R1, _R2, _R3, v33, v34);
  __asm { VADD.F32        S0, S24, S26 }
  v44 = v17;
  v45 = v6;
  v46 = v6;
  __asm { VMOV            R9, S0 }
  v48 = _R9;
  Tessellator::vertexUV(v45, v41, v42, _R9, v15, v44);
    VADD.F32        S0, S20, S22
    VMOV            R7, S0
  v50 = _R7;
  Tessellator::vertexUV(v31, _R7, v42, _R9, v25, v27);
  Tessellator::vertexUV(v46, _R7, v42, v43, v29, v32);
  __asm { VADD.F32        S0, S16, S18 }
  v51 = _R7;
  v52 = v43;
  v53 = __PAIR__(LODWORD(v32), LODWORD(v29));
  v54 = _R7;
  v55 = v43;
  __asm { VMOV            R10, S0 }
  v57 = _R10;
  Tessellator::vertexUV(v46, v51, _R10, v52, *(float *)&v53, *((float *)&v53 + 1));
  Tessellator::vertexUV(v46, v54, _R10, _R9, v25, v28);
  Tessellator::vertexUV(v46, v38, _R10, _R9, v15, v18);
  v58 = _R10;
  Tessellator::vertexUV(v46, v38, _R10, v55, v21, v24);
  v59 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0));
  v60 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.0, 0.0));
  *(float *)&v61 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.25, 0.0));
  v62 = *(float *)&v61;
  v63 = *(float *)&v61;
  *(float *)&v64 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.0, 0.0));
  v65 = *(float *)&v64;
  v66 = *(float *)&v64;
  v67 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0));
  v68 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.125, 0.0));
  *(float *)&v69 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.25, 0.0));
  v70 = *(float *)&v69;
  v71 = *(float *)&v69;
  v72 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.125, 0.0));
  Tessellator::vertexUV(v46, v38, v58, v40, v70, v72);
  v73 = v62;
  v74 = v46;
  Tessellator::vertexUV(v46, v38, v58, v48, v73, v65);
  Tessellator::vertexUV(v46, v38, v39, v48, v59, v60);
  Tessellator::vertexUV(v46, v38, v39, v40, v67, v68);
  Tessellator::vertexUV(v46, v50, v39, v40, v67, v68);
  Tessellator::vertexUV(v46, v50, v39, v48, v59, v60);
  Tessellator::vertexUV(v46, v50, v57, v48, v63, v66);
  Tessellator::vertexUV(v46, v50, v57, v40, v71, v72);
  v75 = TextureUVCoordinateSet::offsetWidth(v9, 0.0, 0.0);
  v76 = TextureUVCoordinateSet::offsetHeight(v9, 0.9375, 0.0);
  *(float *)&v77 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.0, 0.0));
  v78 = *(float *)&v77;
  v79 = *(float *)&v77;
  *(float *)&v80 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.0, 0.0));
  v81 = *(float *)&v80;
  v82 = *(float *)&v80;
  v83 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0));
  v84 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.9375, 0.0));
  v85 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0));
  v86 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.0, 0.0));
  Tessellator::vertexUV(v74, v50, v39, v48, v78, v81);
  Tessellator::vertexUV(v74, v38, v39, v48, *(float *)&v75, *(float *)&v76);
  Tessellator::vertexUV(v74, v38, v57, v48, v83, v84);
  Tessellator::vertexUV(v74, v50, v57, v48, v85, v86);
  Tessellator::vertexUV(v74, v50, v39, v40, *(float *)&v75, *(float *)&v76);
  v87 = v74;
  Tessellator::vertexUV(v74, v50, v57, v40, v83, v84);
  Tessellator::vertexUV(v74, v38, v57, v40, v85, v86);
  Tessellator::vertexUV(v74, v38, v39, v40, v79, v82);
  AABB::set(v10, (const Vec3 *)&v169, (const Vec3 *)&v166);
  Vec3::Vec3((int)&v157, (int)v7);
  _R6 = v8;
    VLDR            S22, [SP,#0x118+var_BC]
    VLDR            S18, [SP,#0x118+var_B8]
    VLDR            S26, [SP,#0x118+var_B4]
  Vec3::Vec3((int)&v154, (int)v7);
    VLDR            S19, [SP,#0x118+var_C8]
    VLDR            S21, [SP,#0x118+var_C4]
    VLDR            S23, [SP,#0x118+var_C0]
  *(float *)&v89 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.375, 0.0));
  v90 = *(float *)&v89;
  v91 = *(float *)&v89;
  *(float *)&v92 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.375, 0.0));
  v93 = *(float *)&v92;
  v94 = *(float *)&v92;
  *(float *)&v95 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.375, 0.0));
  v96 = *(float *)&v95;
  v97 = *(float *)&v95;
  *(float *)&v98 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.4375, 0.0));
  v99 = *(float *)&v98;
  v100 = *(float *)&v98;
  v101 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0));
  *(float *)&v102 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.375, 0.0));
  v103 = *(float *)&v102;
  v104 = *(float *)&v102;
  v105 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0));
  *(float *)&v106 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.4375, 0.0));
  v107 = *(float *)&v106;
    VADD.F32        S2, S30, S21
    VADD.F32        S4, S17, S23
  v108 = v96;
  v109 = v99;
  v113 = _R1;
  v114 = _R2;
  v115 = _R3;
  v116 = _R1;
  v117 = _R2;
  Tessellator::vertexUV(v87, _R1, _R2, _R3, v108, v109);
  v118 = v90;
  __asm { VMOV            R8, S0 }
  Tessellator::vertexUV(v87, v116, v117, _R8, v118, v93);
  Tessellator::vertexUV(v87, _R7, v117, _R8, v101, v103);
  v121 = v105;
  Tessellator::vertexUV(v87, _R7, v117, v115, v105, v107);
  v122 = v107;
  v124 = _R10;
  Tessellator::vertexUV(v87, _R7, _R10, v115, v121, v122);
  Tessellator::vertexUV(v87, _R7, _R10, _R8, v101, v104);
  Tessellator::vertexUV(v87, v113, _R10, _R8, v91, v94);
  Tessellator::vertexUV(v87, v113, _R10, v115, v97, v100);
  v125 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0));
  v126 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.125, 0.0));
  *(float *)&v127 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.375, 0.0));
  v128 = *(float *)&v127;
  v129 = *(float *)&v127;
  *(float *)&v130 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.125, 0.0));
  v131 = *(float *)&v130;
  v132 = *(float *)&v130;
  v133 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0));
  v134 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.375, 0.0));
  *(float *)&v135 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.375, 0.0));
  v136 = *(float *)&v135;
  v137 = *(float *)&v135;
  v138 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.375, 0.0));
  Tessellator::vertexUV(v87, _R7, v114, v115, v136, v138);
  Tessellator::vertexUV(v87, _R7, v114, _R8, v128, v131);
  Tessellator::vertexUV(v87, _R7, _R10, _R8, v125, v126);
  Tessellator::vertexUV(v87, _R7, _R10, v115, v133, v134);
  Tessellator::vertexUV(v87, v113, _R10, v115, v133, v134);
  Tessellator::vertexUV(v87, v113, _R10, _R8, v125, v126);
  Tessellator::vertexUV(v87, v113, v114, _R8, v129, v132);
  Tessellator::vertexUV(v87, v113, v114, v115, v137, v138);
  *(float *)&v139 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0));
  v140 = *(float *)&v139;
  v141 = *(float *)&v139;
  v142 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.4375, 0.0));
  *(float *)&v143 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0));
  v144 = *(float *)&v143;
  v145 = *(float *)&v143;
  *(float *)&v146 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.375, 0.0));
  v147 = *(float *)&v146;
  v148 = *(float *)&v146;
  v149 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.375, 0.0));
  v150 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.4375, 0.0));
  v151 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.375, 0.0));
  v152 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.375, 0.0));
  Tessellator::vertexUV(v87, _R7, v114, _R8, v144, v147);
  Tessellator::vertexUV(v87, v113, v114, _R8, v140, v142);
  Tessellator::vertexUV(v87, v113, v124, _R8, v149, v150);
  Tessellator::vertexUV(v87, _R7, v124, _R8, v151, v152);
  Tessellator::vertexUV(v87, _R7, v114, v115, v141, v142);
  Tessellator::vertexUV(v87, _R7, v124, v115, v149, v150);
  Tessellator::vertexUV(v87, v113, v124, v115, v151, v152);
  return Tessellator::vertexUV(v87, v113, v114, v115, v145, v148);
}


signed int __fastcall BlockTessellator::tessellateDoorInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  const BlockPos *v6; // r4@1
  const Block *v7; // r9@1
  Tessellator *v8; // r10@1
  BlockState *v9; // r0@4
  BlockState *v10; // r0@4
  _BOOL4 v11; // r7@4
  BlockState *v12; // r0@4
  _BOOL4 v13; // r6@4
  unsigned __int64 *v14; // r0@4
  signed int v15; // r1@4
  int v16; // r1@8
  signed int v17; // r8@17
  int v24; // r1@20
  int v25; // r2@20
  BlockGraphics *v26; // r6@25
  int v27; // r7@25
  unsigned int v28; // r0@25
  int (__fastcall *v29)(const Block *, unsigned int); // r2@25
  int v30; // r0@26
  const TextureUVCoordinateSet *v31; // r0@26
  int v32; // r0@27
  int v35; // r5@32
  int v36; // r1@33
  int v37; // r2@33
  BlockGraphics *v38; // r6@38
  int v39; // r7@38
  unsigned int v40; // r0@38
  int (__fastcall *v41)(const Block *, unsigned int); // r2@38
  int v42; // r0@39
  const TextureUVCoordinateSet *v43; // r0@39
  int v44; // r0@40
  int v47; // r2@45
  int v48; // r8@51
  signed int v49; // r7@52
  unsigned int v50; // r6@52
  BlockGraphics *v51; // r8@52
  int v52; // r4@54
  unsigned int v53; // r0@54
  int (__fastcall *v54)(const Block *, unsigned int); // r2@54
  int v55; // r0@55
  int v56; // r0@55
  int v57; // r0@56
  int v58; // r3@58
  int v59; // r4@58
  int v60; // r5@58
  int v61; // r6@58
  int v62; // r7@58
  void *v63; // r0@59
  void *v64; // r0@60
  int v67; // r2@66
  int v68; // r10@72
  signed int v69; // r7@73
  unsigned int v70; // r6@73
  BlockGraphics *v71; // r8@73
  int v72; // r4@75
  unsigned int v73; // r0@75
  int (__fastcall *v74)(const Block *, unsigned int); // r2@75
  int v75; // r0@76
  int v76; // r0@76
  int v77; // r0@77
  int v78; // r3@79
  int v79; // r4@79
  int v80; // r5@79
  int v81; // r6@79
  int v82; // r7@79
  void *v83; // r0@80
  void *v84; // r0@81
  int v88; // r1@86
  int v89; // r2@86
  int v90; // r10@92
  signed int v91; // r7@93
  unsigned int v92; // r6@93
  BlockGraphics *v93; // r8@93
  int v94; // r4@95
  unsigned int v95; // r0@95
  int (__fastcall *v96)(const Block *, unsigned int); // r2@95
  int v97; // r0@96
  int v98; // r0@96
  int v99; // r0@97
  int v100; // r3@99
  int v101; // r4@99
  int v102; // r5@99
  int v103; // r6@99
  int v104; // r7@99
  void *v105; // r0@100
  void *v106; // r0@101
  int v109; // r1@107
  int v110; // r2@107
  const BlockPos *v111; // r9@112
  int v112; // r10@113
  signed int v113; // r7@114
  unsigned int v114; // r6@114
  BlockGraphics *v115; // r8@114
  int v116; // r4@116
  unsigned int v117; // r0@116
  int (__fastcall *v118)(const Block *, unsigned int); // r2@116
  int v119; // r0@117
  int v120; // r0@117
  int v121; // r0@118
  int v122; // r3@120
  int v123; // r4@120
  int v124; // r5@120
  int v125; // r6@120
  int v126; // r7@120
  int v127; // r4@120
  void *v128; // r0@121
  void *v129; // r0@122
  unsigned int *v131; // r2@125
  signed int v132; // r1@127
  unsigned int *v133; // r2@129
  signed int v134; // r1@131
  unsigned int *v135; // r2@133
  signed int v136; // r1@135
  unsigned int *v137; // r2@137
  signed int v138; // r1@139
  unsigned int *v139; // r2@141
  signed int v140; // r1@143
  unsigned int *v141; // r2@149
  signed int v142; // r1@151
  unsigned int *v143; // r2@157
  signed int v144; // r1@159
  unsigned int *v145; // r2@165
  signed int v146; // r1@167
  BlockPos *v147; // [sp+10h] [bp-258h]@15
  const Block *v148; // [sp+14h] [bp-254h]@110
  _BOOL4 v149; // [sp+18h] [bp-250h]@4
  BlockPos *v150; // [sp+1Ch] [bp-24Ch]@50
  BlockPos *v151; // [sp+1Ch] [bp-24Ch]@71
  BlockPos *v152; // [sp+1Ch] [bp-24Ch]@91
  Tessellator *v153; // [sp+20h] [bp-248h]@51
  Tessellator *v154; // [sp+20h] [bp-248h]@72
  Tessellator *v155; // [sp+20h] [bp-248h]@92
  Tessellator *v156; // [sp+20h] [bp-248h]@113
  char v157; // [sp+24h] [bp-244h]@122
  char v158; // [sp+30h] [bp-238h]@121
  int v159; // [sp+34h] [bp-234h]@121
  int v160; // [sp+38h] [bp-230h]@121
  int v161; // [sp+3Ch] [bp-22Ch]@121
  int v162; // [sp+40h] [bp-228h]@121
  int v163; // [sp+44h] [bp-224h]@121
  int v164; // [sp+48h] [bp-220h]@121
  int v165; // [sp+4Ch] [bp-21Ch]@121
  int v166; // [sp+50h] [bp-218h]@120
  int v167; // [sp+54h] [bp-214h]@120
  int v168; // [sp+58h] [bp-210h]@120
  int v169; // [sp+5Ch] [bp-20Ch]@120
  int v170; // [sp+60h] [bp-208h]@120
  int v171; // [sp+64h] [bp-204h]@120
  int v172; // [sp+68h] [bp-200h]@120
  int v173; // [sp+6Ch] [bp-1FCh]@120
  int v174; // [sp+74h] [bp-1F4h]@107
  int v175; // [sp+78h] [bp-1F0h]@107
  int v176; // [sp+7Ch] [bp-1ECh]@107
  unsigned __int8 v177; // [sp+80h] [bp-1E8h]@106
  unsigned __int8 v178; // [sp+81h] [bp-1E7h]@106
  float v179; // [sp+84h] [bp-1E4h]@111
  char v180; // [sp+8Ch] [bp-1DCh]@101
  char v181; // [sp+98h] [bp-1D0h]@100
  int v182; // [sp+9Ch] [bp-1CCh]@100
  int v183; // [sp+A0h] [bp-1C8h]@100
  int v184; // [sp+A4h] [bp-1C4h]@100
  int v185; // [sp+A8h] [bp-1C0h]@100
  int v186; // [sp+ACh] [bp-1BCh]@100
  int v187; // [sp+B0h] [bp-1B8h]@100
  int v188; // [sp+B4h] [bp-1B4h]@100
  int v189; // [sp+B8h] [bp-1B0h]@99
  int v190; // [sp+BCh] [bp-1ACh]@99
  int v191; // [sp+C0h] [bp-1A8h]@99
  int v192; // [sp+C4h] [bp-1A4h]@99
  int v193; // [sp+C8h] [bp-1A0h]@99
  int v194; // [sp+CCh] [bp-19Ch]@99
  int v195; // [sp+D0h] [bp-198h]@99
  int v196; // [sp+D4h] [bp-194h]@99
  int v197; // [sp+DCh] [bp-18Ch]@86
  int v198; // [sp+E0h] [bp-188h]@86
  int v199; // [sp+E4h] [bp-184h]@86
  unsigned __int8 v200; // [sp+E8h] [bp-180h]@85
  unsigned __int8 v201; // [sp+E9h] [bp-17Fh]@85
  float v202; // [sp+ECh] [bp-17Ch]@90
  char v203; // [sp+F4h] [bp-174h]@81
  char v204; // [sp+100h] [bp-168h]@80
  int v205; // [sp+104h] [bp-164h]@80
  int v206; // [sp+108h] [bp-160h]@80
  int v207; // [sp+10Ch] [bp-15Ch]@80
  int v208; // [sp+110h] [bp-158h]@80
  int v209; // [sp+114h] [bp-154h]@80
  int v210; // [sp+118h] [bp-150h]@80
  int v211; // [sp+11Ch] [bp-14Ch]@80
  int v212; // [sp+120h] [bp-148h]@79
  int v213; // [sp+124h] [bp-144h]@79
  int v214; // [sp+128h] [bp-140h]@79
  int v215; // [sp+12Ch] [bp-13Ch]@79
  int v216; // [sp+130h] [bp-138h]@79
  int v217; // [sp+134h] [bp-134h]@79
  int v218; // [sp+138h] [bp-130h]@79
  int v219; // [sp+13Ch] [bp-12Ch]@79
  __int64 v220; // [sp+144h] [bp-124h]@66
  int v221; // [sp+14Ch] [bp-11Ch]@66
  unsigned __int8 v222; // [sp+150h] [bp-118h]@65
  unsigned __int8 v223; // [sp+151h] [bp-117h]@65
  float v224; // [sp+154h] [bp-114h]@70
  char v225; // [sp+15Ch] [bp-10Ch]@60
  char v226; // [sp+168h] [bp-100h]@59
  int v227; // [sp+16Ch] [bp-FCh]@59
  int v228; // [sp+170h] [bp-F8h]@59
  int v229; // [sp+174h] [bp-F4h]@59
  int v230; // [sp+178h] [bp-F0h]@59
  int v231; // [sp+17Ch] [bp-ECh]@59
  int v232; // [sp+180h] [bp-E8h]@59
  int v233; // [sp+184h] [bp-E4h]@59
  int v234; // [sp+188h] [bp-E0h]@58
  int v235; // [sp+18Ch] [bp-DCh]@58
  int v236; // [sp+190h] [bp-D8h]@58
  int v237; // [sp+194h] [bp-D4h]@58
  int v238; // [sp+198h] [bp-D0h]@58
  int v239; // [sp+19Ch] [bp-CCh]@58
  int v240; // [sp+1A0h] [bp-C8h]@58
  int v241; // [sp+1A4h] [bp-C4h]@58
  __int64 v242; // [sp+1A8h] [bp-C0h]@45
  int v243; // [sp+1B0h] [bp-B8h]@45
  unsigned __int8 v244; // [sp+1B4h] [bp-B4h]@44
  unsigned __int8 v245; // [sp+1B5h] [bp-B3h]@44
  float v246; // [sp+1B8h] [bp-B0h]@49
  char v247; // [sp+1C0h] [bp-A8h]@38
  int v248; // [sp+1CCh] [bp-9Ch]@33
  int v249; // [sp+1D0h] [bp-98h]@33
  int v250; // [sp+1D4h] [bp-94h]@33
  unsigned __int8 v251; // [sp+1D8h] [bp-90h]@32
  unsigned __int8 v252; // [sp+1D9h] [bp-8Fh]@32
  float v253; // [sp+1DCh] [bp-8Ch]@37
  char v254; // [sp+1E4h] [bp-84h]@25
  int v255; // [sp+1F0h] [bp-78h]@20
  int v256; // [sp+1F4h] [bp-74h]@20
  int v257; // [sp+1F8h] [bp-70h]@20
  unsigned __int8 v258; // [sp+1FCh] [bp-6Ch]@19
  unsigned __int8 v259; // [sp+1FDh] [bp-6Bh]@19
  float v260; // [sp+200h] [bp-68h]@24
  int v261; // [sp+208h] [bp-60h]@16
  int v262; // [sp+20Ch] [bp-5Ch]@16
  signed int v263; // [sp+210h] [bp-58h]@16
  int v264; // [sp+214h] [bp-54h]@16
  int v265; // [sp+218h] [bp-50h]@16
  int v266; // [sp+21Ch] [bp-4Ch]@16
  int v267; // [sp+220h] [bp-48h]@16
  int v268; // [sp+224h] [bp-44h]@16
  int v269; // [sp+228h] [bp-40h]@16
  char v270; // [sp+22Ch] [bp-3Ch]@16
  char v271; // [sp+230h] [bp-38h]@15
  unsigned __int8 v272; // [sp+239h] [bp-2Fh]@4
  unsigned __int8 v273; // [sp+23Ah] [bp-2Eh]@4
  unsigned __int8 v274; // [sp+23Bh] [bp-2Dh]@4
  unsigned __int8 v275; // [sp+23Ch] [bp-2Ch]@2
  unsigned __int8 v276; // [sp+23Dh] [bp-2Bh]@2

  _R11 = this;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  if ( *((_BYTE *)this + 48) )
  {
    v275 = Brightness::MAX;
    v276 = Brightness::MAX;
  }
  else
    BlockTessellatorCache::getLightColor(
      (BlockTessellatorCache *)&v275,
      (BlockTessellator *)((char *)this + 812),
      (int)a4);
  v9 = (BlockState *)Block::getBlockState(Block::mWoodenDoor, 11);
  v274 = a5;
  v149 = BlockState::getBool(v9, &v274);
  DoorBlock::getDoorData(v7, *((BlockSource **)_R11 + 1), v6, &v272, &v273);
  v10 = (BlockState *)Block::getBlockState(Block::mWoodenDoor, 26);
  v11 = BlockState::getBool(v10, &v272);
  v12 = (BlockState *)Block::getBlockState(Block::mWoodenDoor, 10);
  v13 = BlockState::getBool(v12, &v273);
  v14 = (unsigned __int64 *)Block::getBlockState(Block::mWoodenDoor, 12);
  v15 = (v272 >> (*v14 + 1 - (*v14 >> 32))) & (0xFu >> (4 - (*v14 >> 32)));
  if ( v11 == 1 )
    if ( v13 == 1 )
      --v15;
    else
      ++v15;
  v16 = v15 % 4 + (v15 % 4 < 0 ? 4 : 0);
  if ( v16 == 2 )
    *((_DWORD *)_R11 + 47) = 1;
    *((_DWORD *)_R11 + 48) = 2;
  else if ( v16 == 1 )
    *((_DWORD *)_R11 + 47) = 3;
    *((_DWORD *)_R11 + 48) = 3;
  else if ( !v16 )
    *((_DWORD *)_R11 + 47) = 2;
    *((_DWORD *)_R11 + 48) = 1;
  v147 = (BlockTessellator *)((char *)_R11 + 812);
  BlockOccluder::BlockOccluder(
    (BlockOccluder *)&v271,
    (int)_R11 + 812,
    v7,
    v6,
    (BlockTessellator *)((char *)_R11 + 724),
    (int)&Facing::ALL_EXCEPT[2 * !v149],
    *((_BYTE *)_R11 + 48));
  if ( *((_BYTE *)_R11 + 40) )
    v261 = 981668463;
    v262 = 0;
    v263 = 981668463;
    AABB::grow((AABB *)&v264, (BlockTessellator *)((char *)_R11 + 724), (int)&v261);
    *((_DWORD *)_R11 + 181) = v264;
    *((_DWORD *)_R11 + 182) = v265;
    *((_DWORD *)_R11 + 183) = v266;
    *((_DWORD *)_R11 + 184) = v267;
    *((_DWORD *)_R11 + 185) = v268;
    *((_DWORD *)_R11 + 186) = v269;
    *((_BYTE *)_R11 + 748) = v270;
  v17 = 0;
  if ( !BlockOccluder::occludes((BlockOccluder *)&v271, 0) )
    __asm
    {
      VLDR            S0, [R11,#0x2D8]
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      v24 = *((_DWORD *)v6 + 1);
      v25 = *((_DWORD *)v6 + 2);
      v255 = *(_DWORD *)v6;
      v256 = v24 - 1;
      v257 = v25;
      if ( *((_BYTE *)_R11 + 48) )
      {
        _R0 = (unsigned __int8)Brightness::MAX;
        v258 = Brightness::MAX;
        v259 = Brightness::MAX;
        _R1 = (unsigned __int8)Brightness::MAX;
      }
      else
        BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v258, v147, (int)&v255);
        _R0 = v258;
        _R1 = v259;
      _R0 = v275;
      _R1 = v276;
      v258 = v275;
      v259 = v276;
      VMOV            S0, R1
      VLDR            S4, =0.0625
      VMOV            S2, R0
      VCVT.F32.U32    S0, S0
      VCVT.F32.U32    S2, S2
      VMUL.F32        S0, S0, S4
      VMUL.F32        S2, S2, S4
      VSTR            S0, [SP,#0x268+var_68]
      VSTR            S2, [SP,#0x268+var_64]
    if ( !*((_BYTE *)_R11 + 48) )
      Tessellator::tex1((int)v8, (__int64 *)&v260);
    Tessellator::color(v8, (const Color *)&Color::SHADE_DOWN);
    Vec3::Vec3((int)&v254, (int)v6);
    v26 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v7 + 4)];
    v27 = (*(int (__fastcall **)(const Block *, signed int, int))(*(_DWORD *)v7 + 428))(v7, 1, a5);
    v28 = *((_WORD *)_R11 + 24);
    v29 = *(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v7 + 424);
    if ( (_BYTE)v28 )
      v30 = v29(v7, v28 >> 8);
      v31 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(1, (unsigned int)v26), v30, 0);
      v32 = v29(v7, a5);
      v31 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v26, v6, v27, v32);
    BlockTessellator::tessellateFaceDown(_R11, v8, v7, (const Vec3 *)&v254, v31);
    v17 = 1;
  if ( !BlockOccluder::occludes((BlockOccluder *)&v271, 1) )
      VMOV.F32        S0, #1.0
      VLDR            S2, [R11,#0x2E4]
      VCMPE.F32       S2, S0
    if ( _NF ^ _VF )
      v251 = v275;
      v252 = v276;
      v35 = a5;
      v36 = *((_DWORD *)v6 + 1);
      v37 = *((_DWORD *)v6 + 2);
      v248 = *(_DWORD *)v6;
      v249 = v36 + 1;
      v250 = v37;
        v251 = Brightness::MAX;
        v252 = Brightness::MAX;
        BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v251, v147, (int)&v248);
        _R0 = v251;
        _R1 = v252;
      VSTR            S0, [SP,#0x268+var_8C]
      VSTR            S2, [SP,#0x268+var_88]
      Tessellator::tex1((int)v8, (__int64 *)&v253);
    Tessellator::color(v8, (const Color *)&Color::SHADE_UP);
    Vec3::Vec3((int)&v247, (int)v6);
    v38 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v7 + 4)];
    v39 = (*(int (__fastcall **)(const Block *, signed int, int))(*(_DWORD *)v7 + 428))(v7, 1, v35);
    v40 = *((_WORD *)_R11 + 24);
    v41 = *(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v7 + 424);
    if ( (_BYTE)v40 )
      v42 = v41(v7, v40 >> 8);
      v43 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(1, (unsigned int)v38), v42, 0);
      v44 = v41(v7, v35);
      v43 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v38, v6, v39, v44);
    BlockTessellator::tessellateFaceUp(_R11, v8, v7, (const Vec3 *)&v247, v43);
  if ( !BlockOccluder::occludes((BlockOccluder *)&v271, 2) )
      VLDR            S0, [R11,#0x2DC]
      v47 = *((_DWORD *)v6 + 2);
      v242 = *(_QWORD *)v6;
      v243 = v47 - 1;
        v244 = Brightness::MAX;
        v245 = Brightness::MAX;
        BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v244, v147, (int)&v242);
        _R0 = v244;
        _R1 = v245;
      v244 = v275;
      v245 = v276;
      VSTR            S0, [SP,#0x268+var_B0]
      VSTR            S2, [SP,#0x268+var_AC]
      Tessellator::tex1((int)v8, (__int64 *)&v246);
    v150 = v6;
    Tessellator::color(v8, (const Color *)&Color::SHADE_NORTH_SOUTH);
    if ( *((_BYTE *)_R11 + 40) )
      v153 = v8;
      v48 = (int)_R11 + 8;
      v49 = 1;
      v50 = v272;
      v51 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v7 + 4)];
      if ( v149 )
        v49 = 2;
      v52 = (*(int (__fastcall **)(const Block *, signed int, _DWORD))(*(_DWORD *)v7 + 428))(v7, v49, v272);
      v53 = *((_WORD *)_R11 + 24);
      v54 = *(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v7 + 424);
      if ( (_BYTE)v53 )
        v55 = v54(v7, v53 >> 8);
        v56 = BlockGraphics::getTexture(__PAIR__(v49, (unsigned int)v51), v55, 0);
        v57 = v54(v7, v50);
        v56 = BlockGraphics::getTexture(v51, v150, v52, v57);
      v48 = v56;
    v58 = *(_DWORD *)(v48 + 4);
    v59 = *(_DWORD *)(v48 + 8);
    v60 = *(_DWORD *)(v48 + 12);
    v61 = *(_DWORD *)(v48 + 16);
    v62 = *(_DWORD *)(v48 + 20);
    v234 = *(_DWORD *)v48;
    v235 = v58;
    v236 = v59;
    v237 = v60;
    v238 = v61;
    v239 = v62;
    sub_119C854(&v240, (int *)(v48 + 24));
    v241 = *(_DWORD *)(v48 + 28);
    v6 = v150;
    if ( DoorBlock::shouldFlipTexture((DoorBlock *)Block::mWoodenDoor, *((BlockSource **)_R11 + 1), v150, 2) == 1 )
      TextureUVCoordinateSet::getFlippedHorizontal((TextureUVCoordinateSet *)&v226, (int)&v234);
      v234 = *(_DWORD *)&v226;
      v235 = v227;
      v236 = v228;
      v237 = v229;
      v238 = v230;
      v239 = v231;
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        &v240,
        &v232);
      v241 = v233;
      v63 = (void *)(v232 - 12);
      if ( (int *)(v232 - 12) != &dword_28898C0 )
        v139 = (unsigned int *)(v232 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v140 = __ldrex(v139);
          while ( __strex(v140 - 1, v139) );
        }
        else
          v140 = (*v139)--;
        if ( v140 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v63);
    Vec3::Vec3((int)&v225, (int)v150);
    BlockTessellator::tessellateNorth(_R11, v153, v7, (const Vec3 *)&v225, (const TextureUVCoordinateSet *)&v234);
    v64 = (void *)(v240 - 12);
    if ( (int *)(v240 - 12) != &dword_28898C0 )
      v131 = (unsigned int *)(v240 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v132 = __ldrex(v131);
        while ( __strex(v132 - 1, v131) );
        v132 = (*v131)--;
      if ( v132 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v64);
    v8 = v153;
  if ( !BlockOccluder::occludes((BlockOccluder *)&v271, 3) )
      VLDR            S2, [R11,#0x2E8]
      v222 = v275;
      v223 = v276;
      v67 = *((_DWORD *)v6 + 2);
      v220 = *(_QWORD *)v6;
      v221 = v67 + 1;
        v222 = Brightness::MAX;
        v223 = Brightness::MAX;
        BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v222, v147, (int)&v220);
        _R0 = v222;
        _R1 = v223;
      VSTR            S0, [SP,#0x268+var_114]
      VSTR            S2, [SP,#0x268+var_110]
      Tessellator::tex1((int)v8, (__int64 *)&v224);
    v151 = v6;
      v154 = v8;
      v68 = (int)_R11 + 8;
      v69 = 1;
      v70 = v272;
      v71 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v7 + 4)];
        v69 = 2;
      v72 = (*(int (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v7 + 428))(v7, v69, v272);
      v73 = *((_WORD *)_R11 + 24);
      v74 = *(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v7 + 424);
      if ( (_BYTE)v73 )
        v75 = v74(v7, v73 >> 8);
        v76 = BlockGraphics::getTexture(__PAIR__(v69, (unsigned int)v71), v75, 0);
        v77 = v74(v7, v70);
        v76 = BlockGraphics::getTexture(v71, v151, v72, v77);
      v68 = v76;
    v78 = *(_DWORD *)(v68 + 4);
    v79 = *(_DWORD *)(v68 + 8);
    v80 = *(_DWORD *)(v68 + 12);
    v81 = *(_DWORD *)(v68 + 16);
    v82 = *(_DWORD *)(v68 + 20);
    v212 = *(_DWORD *)v68;
    v213 = v78;
    v214 = v79;
    v215 = v80;
    v216 = v81;
    v217 = v82;
    sub_119C854(&v218, (int *)(v68 + 24));
    v219 = *(_DWORD *)(v68 + 28);
    v6 = v151;
    if ( DoorBlock::shouldFlipTexture((DoorBlock *)Block::mWoodenDoor, *((BlockSource **)_R11 + 1), v151, 3) == 1 )
      TextureUVCoordinateSet::getFlippedHorizontal((TextureUVCoordinateSet *)&v204, (int)&v212);
      v212 = *(_DWORD *)&v204;
      v213 = v205;
      v214 = v206;
      v215 = v207;
      v216 = v208;
      v217 = v209;
        &v218,
        &v210);
      v219 = v211;
      v83 = (void *)(v210 - 12);
      if ( (int *)(v210 - 12) != &dword_28898C0 )
        v141 = (unsigned int *)(v210 - 4);
            v142 = __ldrex(v141);
          while ( __strex(v142 - 1, v141) );
          v142 = (*v141)--;
        if ( v142 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v83);
    Vec3::Vec3((int)&v203, (int)v151);
    BlockTessellator::tessellateSouth(_R11, v154, v7, (const Vec3 *)&v203, (const TextureUVCoordinateSet *)&v212);
    v84 = (void *)(v218 - 12);
    if ( (int *)(v218 - 12) != &dword_28898C0 )
      v133 = (unsigned int *)(v218 - 4);
          v134 = __ldrex(v133);
        while ( __strex(v134 - 1, v133) );
        v134 = (*v133)--;
      if ( v134 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v84);
    v8 = v154;
  if ( !BlockOccluder::occludes((BlockOccluder *)&v271, 4) )
    _R0 = (int)_R11 + 724;
      VLDR            S0, [R0]
      v88 = *((_DWORD *)v6 + 1);
      v89 = *((_DWORD *)v6 + 2);
      v197 = *(_DWORD *)v6 - 1;
      v198 = v88;
      v199 = v89;
        v200 = Brightness::MAX;
        v201 = Brightness::MAX;
        BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v200, v147, (int)&v197);
        _R0 = v200;
        _R1 = v201;
      v200 = v275;
      v201 = v276;
      VSTR            S0, [SP,#0x268+var_17C]
      VSTR            S2, [SP,#0x268+var_178]
      Tessellator::tex1((int)v8, (__int64 *)&v202);
    v152 = v6;
    Tessellator::color(v8, (const Color *)&Color::SHADE_WEST_EAST);
      v155 = v8;
      v90 = (int)_R11 + 8;
      v91 = 1;
      v92 = v272;
      v93 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v7 + 4)];
        v91 = 2;
      v94 = (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)v7 + 428))(v7, v91, v272);
      v95 = *((_WORD *)_R11 + 24);
      v96 = *(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v7 + 424);
      if ( (_BYTE)v95 )
        v97 = v96(v7, v95 >> 8);
        v98 = BlockGraphics::getTexture(__PAIR__(v91, (unsigned int)v93), v97, 0);
        v99 = v96(v7, v92);
        v98 = BlockGraphics::getTexture(v93, v152, v94, v99);
      v90 = v98;
    v100 = *(_DWORD *)(v90 + 4);
    v101 = *(_DWORD *)(v90 + 8);
    v102 = *(_DWORD *)(v90 + 12);
    v103 = *(_DWORD *)(v90 + 16);
    v104 = *(_DWORD *)(v90 + 20);
    v189 = *(_DWORD *)v90;
    v190 = v100;
    v191 = v101;
    v192 = v102;
    v193 = v103;
    v194 = v104;
    sub_119C854(&v195, (int *)(v90 + 24));
    v196 = *(_DWORD *)(v90 + 28);
    v6 = v152;
    if ( DoorBlock::shouldFlipTexture((DoorBlock *)Block::mWoodenDoor, *((BlockSource **)_R11 + 1), v152, 4) == 1 )
      TextureUVCoordinateSet::getFlippedHorizontal((TextureUVCoordinateSet *)&v181, (int)&v189);
      v189 = *(_DWORD *)&v181;
      v190 = v182;
      v191 = v183;
      v192 = v184;
      v193 = v185;
      v194 = v186;
        &v195,
        &v187);
      v196 = v188;
      v105 = (void *)(v187 - 12);
      if ( (int *)(v187 - 12) != &dword_28898C0 )
        v143 = (unsigned int *)(v187 - 4);
            v144 = __ldrex(v143);
          while ( __strex(v144 - 1, v143) );
          v144 = (*v143)--;
        if ( v144 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v105);
    Vec3::Vec3((int)&v180, (int)v152);
    BlockTessellator::tessellateWest(_R11, v155, v7, (const Vec3 *)&v180, (const TextureUVCoordinateSet *)&v189);
    v106 = (void *)(v195 - 12);
    if ( (int *)(v195 - 12) != &dword_28898C0 )
      v135 = (unsigned int *)(v195 - 4);
          v136 = __ldrex(v135);
        while ( __strex(v136 - 1, v135) );
        v136 = (*v135)--;
      if ( v136 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v106);
    v8 = v155;
  if ( !BlockOccluder::occludes((BlockOccluder *)&v271, 5) )
      VLDR            S2, [R11,#0x2E0]
      v177 = v275;
      v178 = v276;
      v109 = *((_DWORD *)v6 + 1);
      v110 = *((_DWORD *)v6 + 2);
      v174 = *(_DWORD *)v6 + 1;
      v175 = v109;
      v176 = v110;
        v177 = Brightness::MAX;
        v178 = Brightness::MAX;
        BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v177, v147, (int)&v174);
        _R0 = v177;
        _R1 = v178;
    __asm { VMOV            S0, R1 }
    v148 = v7;
      VSTR            S0, [SP,#0x268+var_1E4]
      VSTR            S2, [SP,#0x268+var_1E0]
      Tessellator::tex1((int)v8, (__int64 *)&v179);
    v111 = v6;
      v156 = v8;
      v112 = (int)_R11 + 8;
      v113 = 1;
      v114 = v272;
      v115 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v148 + 4)];
        v113 = 2;
      v116 = (*(int (__fastcall **)(const Block *, signed int, _DWORD))(*(_DWORD *)v148 + 428))(v148, v113, v272);
      v117 = *((_WORD *)_R11 + 24);
      v118 = *(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v148 + 424);
      if ( (_BYTE)v117 )
        v119 = v118(v148, v117 >> 8);
        v120 = BlockGraphics::getTexture(__PAIR__(v113, (unsigned int)v115), v119, 0);
        v121 = v118(v148, v114);
        v120 = BlockGraphics::getTexture(v115, v111, v116, v121);
      v112 = v120;
    v122 = *(_DWORD *)(v112 + 4);
    v123 = *(_DWORD *)(v112 + 8);
    v124 = *(_DWORD *)(v112 + 12);
    v125 = *(_DWORD *)(v112 + 16);
    v126 = *(_DWORD *)(v112 + 20);
    v166 = *(_DWORD *)v112;
    v167 = v122;
    v168 = v123;
    v169 = v124;
    v170 = v125;
    v171 = v126;
    sub_119C854(&v172, (int *)(v112 + 24));
    v173 = *(_DWORD *)(v112 + 28);
    v127 = (int)v111;
    if ( DoorBlock::shouldFlipTexture((DoorBlock *)Block::mWoodenDoor, *((BlockSource **)_R11 + 1), v111, 5) == 1 )
      TextureUVCoordinateSet::getFlippedHorizontal((TextureUVCoordinateSet *)&v158, (int)&v166);
      v166 = *(_DWORD *)&v158;
      v167 = v159;
      v168 = v160;
      v169 = v161;
      v170 = v162;
      v171 = v163;
        &v172,
        &v164);
      v127 = (int)v111;
      v173 = v165;
      v128 = (void *)(v164 - 12);
      if ( (int *)(v164 - 12) != &dword_28898C0 )
        v145 = (unsigned int *)(v164 - 4);
            v146 = __ldrex(v145);
          while ( __strex(v146 - 1, v145) );
          v146 = (*v145)--;
        if ( v146 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v128);
    Vec3::Vec3((int)&v157, v127);
    BlockTessellator::tessellateEast(_R11, v156, v148, (const Vec3 *)&v157, (const TextureUVCoordinateSet *)&v166);
    v129 = (void *)(v172 - 12);
    if ( (int *)(v172 - 12) != &dword_28898C0 )
      v137 = (unsigned int *)(v172 - 4);
          v138 = __ldrex(v137);
        while ( __strex(v138 - 1, v137) );
        v138 = (*v137)--;
      if ( v138 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v129);
  *((_DWORD *)_R11 + 47) = 0;
  *((_DWORD *)_R11 + 48) = 0;
  *((_DWORD *)_R11 + 49) = 0;
  *((_DWORD *)_R11 + 50) = 0;
  *((_DWORD *)_R11 + 51) = 0;
  *((_DWORD *)_R11 + 52) = 0;
  return v17;
}


int __fastcall BlockTessellator::tessellateLiquidInWorld(BlockTessellator *this, Tessellator *a2, const LiquidBlock *a3, const BlockPos *a4, unsigned __int8 a5)
{
  BlockTessellator *v5; // r4@1
  const LiquidBlock *v7; // r9@1
  const Material *v8; // r6@1
  int v10; // r2@1
  int v16; // r2@1
  int v17; // r3@1
  int v19; // r2@1
  int v20; // r3@1
  signed int v22; // r1@1
  signed int v23; // r2@1
  char v24; // r7@1
  int v25; // r0@5
  signed int v26; // r1@5
  int v27; // r0@7
  signed int v28; // r1@7
  int v29; // r8@9
  void *v30; // r5@11
  int v31; // r1@11
  int *v32; // r0@15
  int v33; // r2@16
  char *v34; // r8@16
  signed int v35; // r5@16
  int v36; // r0@16
  __int64 v37; // r1@17
  int v38; // r3@17
  BlockSource *v39; // r0@17
  int v40; // r0@17
  int v41; // r7@17
  int v42; // r2@17
  int v43; // r0@17
  __int64 v44; // r1@17
  BlockSource *v45; // r0@17
  int v46; // r0@17
  int v47; // r4@17
  int v48; // r1@17
  int v49; // r2@17
  int v50; // r3@17
  int v51; // r12@17
  int v52; // r1@17
  int v53; // r2@17
  BlockSource *v54; // r0@17
  int v55; // r0@17
  int v56; // r1@17
  signed int v57; // r1@17
  signed int v58; // r3@19
  signed int v59; // r7@21
  signed int v60; // r0@23
  int v61; // r3@23
  Block *v62; // r0@29
  int *v63; // r4@29
  signed int v64; // r0@32
  signed int v65; // r7@36
  signed int v66; // r0@37
  int v67; // r1@37
  int v69; // r2@37
  Block *v70; // r0@38
  int *v71; // r4@38
  signed int v72; // r0@41
  Block *v73; // r0@48
  int *v74; // r4@48
  signed int v75; // r0@51
  int v76; // r1@55
  Block *v77; // r0@58
  int *v78; // r4@58
  signed int v79; // r0@61
  BlockGraphics *v80; // r7@73
  int v81; // r9@74
  float v82; // r3@74
  float v83; // r4@74
  float v84; // r5@74
  float v85; // r6@74
  int v86; // r7@74
  const Material *v87; // r3@74
  float v88; // r1@74
  int v90; // r4@75
  float v91; // r2@75
  float v92; // r3@75
  float v93; // r5@75
  float v94; // r6@75
  int v95; // r7@75
  char v96; // r4@79
  BlockTessellator *v97; // r6@79
  float v99; // r1@77
  int v104; // ST2C_4@77
  BlockPos *v105; // ST10_4@77
  signed int v116; // r8@86
  float *v117; // r4@86
  int v118; // r1@87
  int v119; // r2@87
  int v123; // r1@92
  int v124; // r2@92
  int v128; // r1@97
  int v129; // r2@97
  BlockTessellator *v133; // r1@103
  int v134; // r1@104
  int v135; // r2@104
  BlockTessellator *v139; // r5@110
  void *v152; // r0@118
  int v153; // r1@121
  int v154; // r2@121
  int v157; // r0@123
  const TextureUVCoordinateSet *v158; // r0@127
  char *v160; // r6@128
  signed int v161; // r10@128
  unsigned int *v162; // r2@129
  signed int v163; // r1@131
  BlockGraphics *v164; // r8@137
  int v165; // r4@137
  char *v166; // r12@137
  TextureUVCoordinateSet *v167; // lr@137
  int v168; // r2@137
  int v169; // r3@137
  int v170; // r5@137
  int v171; // r6@137
  int v172; // r7@137
  int v188; // r0@146
  float v197; // ST00_4@150
  float v198; // ST04_4@150
  float v202; // ST00_4@150
  float v203; // ST04_4@150
  float v206; // ST00_4@150
  float v207; // ST04_4@150
  void *v208; // r0@151
  unsigned int *v210; // r2@155
  signed int v211; // r1@157
  float v212; // [sp+0h] [bp-2E0h]@1
  float v213; // [sp+0h] [bp-2E0h]@112
  float v214; // [sp+0h] [bp-2E0h]@114
  float v215; // [sp+0h] [bp-2E0h]@116
  float v216; // [sp+4h] [bp-2DCh]@1
  float v217; // [sp+4h] [bp-2DCh]@112
  float v218; // [sp+4h] [bp-2DCh]@114
  float v219; // [sp+4h] [bp-2DCh]@116
  int v220; // [sp+Ch] [bp-2D4h]@16
  BlockPos *v221; // [sp+10h] [bp-2D0h]@11
  void *v222; // [sp+14h] [bp-2CCh]@13
  const LiquidBlock *v223; // [sp+18h] [bp-2C8h]@74
  char v224; // [sp+18h] [bp-2C8h]@128
  int v225; // [sp+18h] [bp-2C8h]@144
  BlockTessellator *v226; // [sp+1Ch] [bp-2C4h]@11
  BlockPos *v227; // [sp+20h] [bp-2C0h]@1
  Tessellator *v228; // [sp+24h] [bp-2BCh]@1
  BlockGraphics *v229; // [sp+28h] [bp-2B8h]@17
  BlockGraphics *v230; // [sp+28h] [bp-2B8h]@74
  int v231; // [sp+2Ch] [bp-2B4h]@17
  float v232; // [sp+30h] [bp-2B0h]@150
  unsigned __int8 v233; // [sp+40h] [bp-2A0h]@145
  unsigned __int8 v234; // [sp+41h] [bp-29Fh]@145
  float v235; // [sp+44h] [bp-29Ch]@149
  char v236; // [sp+4Ch] [bp-294h]@144
  char v237; // [sp+58h] [bp-288h]@128
  int v240; // [sp+70h] [bp-270h]@129
  int v241; // [sp+74h] [bp-26Ch]@137
  char v242; // [sp+7Ch] [bp-264h]@127
  float v243; // [sp+88h] [bp-258h]@127
  int v244; // [sp+98h] [bp-248h]@121
  int v245; // [sp+9Ch] [bp-244h]@121
  int v246; // [sp+A0h] [bp-240h]@121
  unsigned __int8 v247; // [sp+A4h] [bp-23Ch]@122
  unsigned __int8 v248; // [sp+A5h] [bp-23Bh]@122
  float v249; // [sp+A8h] [bp-238h]@126
  int v250; // [sp+B0h] [bp-230h]@104
  int v251; // [sp+B4h] [bp-22Ch]@104
  int v252; // [sp+B8h] [bp-228h]@104
  unsigned __int8 v253; // [sp+BCh] [bp-224h]@106
  unsigned __int8 v254; // [sp+BDh] [bp-223h]@106
  int v255; // [sp+C0h] [bp-220h]@87
  int v256; // [sp+C4h] [bp-21Ch]@87
  int v257; // [sp+C8h] [bp-218h]@87
  unsigned __int8 v258; // [sp+CCh] [bp-214h]@89
  unsigned __int8 v259; // [sp+CDh] [bp-213h]@89
  float v260; // [sp+D0h] [bp-210h]@86
  float v261; // [sp+D4h] [bp-20Ch]@86
  float v262; // [sp+D8h] [bp-208h]@86
  float v263; // [sp+DCh] [bp-204h]@86
  float v264; // [sp+E0h] [bp-200h]@86
  float v265; // [sp+E4h] [bp-1FCh]@86
  float v266; // [sp+E8h] [bp-1F8h]@86
  float v267; // [sp+ECh] [bp-1F4h]@86
  float v268; // [sp+F0h] [bp-1F0h]@86
  float v269; // [sp+F4h] [bp-1ECh]@86
  float v270; // [sp+F8h] [bp-1E8h]@86
  float v271; // [sp+FCh] [bp-1E4h]@86
  float v272; // [sp+100h] [bp-1E0h]@86
  float v273; // [sp+104h] [bp-1DCh]@86
  float v274; // [sp+108h] [bp-1D8h]@86
  float v275; // [sp+10Ch] [bp-1D4h]@86
  float v276; // [sp+110h] [bp-1D0h]@86
  float v277; // [sp+114h] [bp-1CCh]@86
  float v278; // [sp+118h] [bp-1C8h]@85
  float v279; // [sp+11Ch] [bp-1C4h]@85
  float v280; // [sp+120h] [bp-1C0h]@85
  float v281; // [sp+124h] [bp-1BCh]@85
  float v282; // [sp+128h] [bp-1B8h]@85
  float v283; // [sp+12Ch] [bp-1B4h]@85
  float v284; // [sp+130h] [bp-1B0h]@85
  float v285; // [sp+134h] [bp-1ACh]@85
  __int16 v286; // [sp+13Ch] [bp-1A4h]@82
  int v287; // [sp+140h] [bp-1A0h]@74
  float v288; // [sp+144h] [bp-19Ch]@74
  float v289; // [sp+148h] [bp-198h]@74
  float v290; // [sp+14Ch] [bp-194h]@74
  float v291; // [sp+150h] [bp-190h]@74
  int v292; // [sp+154h] [bp-18Ch]@74
  int v293; // [sp+158h] [bp-188h]@74
  int v294; // [sp+15Ch] [bp-184h]@74
  __int64 v295; // [sp+164h] [bp-17Ch]@17
  int v296; // [sp+16Ch] [bp-174h]@17
  char v297[12]; // [sp+170h] [bp-170h]@16
  float v298; // [sp+17Ch] [bp-164h]@16
  int v299; // [sp+180h] [bp-160h]@16
  int v300; // [sp+184h] [bp-15Ch]@16
  int v301; // [sp+188h] [bp-158h]@16
  float v302; // [sp+18Ch] [bp-154h]@16
  int v303; // [sp+190h] [bp-150h]@16
  int v304; // [sp+194h] [bp-14Ch]@16
  int v305; // [sp+198h] [bp-148h]@16
  float v306; // [sp+19Ch] [bp-144h]@16
  int v307; // [sp+1A0h] [bp-140h]@16
  int v308; // [sp+1A4h] [bp-13Ch]@16
  int v309; // [sp+1A8h] [bp-138h]@16
  float v310; // [sp+1ACh] [bp-134h]@16
  int v311; // [sp+1B0h] [bp-130h]@16
  int v312; // [sp+1B4h] [bp-12Ch]@16
  int v313; // [sp+1B8h] [bp-128h]@16
  float v314; // [sp+1BCh] [bp-124h]@16
  int v315; // [sp+1C0h] [bp-120h]@16
  int v316; // [sp+1C4h] [bp-11Ch]@16
  int v317; // [sp+1C8h] [bp-118h]@16
  float v318; // [sp+1CCh] [bp-114h]@16
  int v319; // [sp+1D0h] [bp-110h]@16
  int v320; // [sp+1D4h] [bp-10Ch]@16
  int v321; // [sp+1D8h] [bp-108h]@16
  float v322; // [sp+1DCh] [bp-104h]@16
  int v323; // [sp+1E0h] [bp-100h]@16
  int v324; // [sp+1E4h] [bp-FCh]@16
  int v325; // [sp+1E8h] [bp-F8h]@16
  float v326; // [sp+1ECh] [bp-F4h]@16
  int v327; // [sp+1F0h] [bp-F0h]@16
  int v328; // [sp+1F4h] [bp-ECh]@16
  int v329; // [sp+1F8h] [bp-E8h]@16
  float v330; // [sp+1FCh] [bp-E4h]@16
  float v331; // [sp+200h] [bp-E0h]@11
  float v332; // [sp+204h] [bp-DCh]@11
  __int64 v333; // [sp+208h] [bp-D8h]@11
  int v334; // [sp+210h] [bp-D0h]@13
  float v335; // [sp+214h] [bp-CCh]@13
  __int64 v336; // [sp+218h] [bp-C8h]@13
  int v337; // [sp+220h] [bp-C0h]@13
  float v338; // [sp+224h] [bp-BCh]@13
  __int64 v339; // [sp+228h] [bp-B8h]@13
  int v340; // [sp+230h] [bp-B0h]@15
  float v341; // [sp+234h] [bp-ACh]@15
  __int64 v342; // [sp+238h] [bp-A8h]@15
  int v343; // [sp+240h] [bp-A0h]@1
  int v344; // [sp+244h] [bp-9Ch]@1
  int v345; // [sp+248h] [bp-98h]@1
  int v346; // [sp+24Ch] [bp-94h]@1
  int v347; // [sp+250h] [bp-90h]@1
  int v348; // [sp+254h] [bp-8Ch]@1
  __int64 v349; // [sp+258h] [bp-88h]@1
  int v350; // [sp+260h] [bp-80h]@1
  char v351; // [sp+264h] [bp-7Ch]@1
  int v352; // [sp+26Ch] [bp-74h]@27
  int v353; // [sp+270h] [bp-70h]@27
  int v354; // [sp+274h] [bp-6Ch]@27

  v5 = this;
  v228 = a2;
  _R11 = a4;
  v7 = a3;
  v227 = (BlockTessellator *)((char *)this + 812);
  BlockOccluder::BlockOccluder(
    (BlockOccluder *)&v351,
    (int)this + 812,
    a3,
    a4,
    (BlockTessellator *)((char *)this + 724),
    (int)&Facing::ALL_FACES,
    *((_BYTE *)this + 48));
  v8 = (const Material *)Block::getMaterial(v7);
  _R7 = BlockTessellator::getWaterHeight(v5, _R11, v8);
  v10 = *((_DWORD *)_R11 + 2);
  v349 = *(_QWORD *)_R11;
  v350 = v10 + 1;
  _R0 = BlockTessellator::getWaterHeight(v5, (const BlockPos *)&v349, v8);
  __asm { VMOV            S16, R0 }
  v16 = *((_DWORD *)_R11 + 1);
  v17 = *((_DWORD *)_R11 + 2);
  v346 = *(_DWORD *)_R11 + 1;
  v347 = v16;
  v348 = v17 + 1;
  _R0 = BlockTessellator::getWaterHeight(v5, (const BlockPos *)&v346, v8);
  v19 = *((_DWORD *)_R11 + 1);
  v20 = *((_DWORD *)_R11 + 2);
  __asm { VMOV            S18, R0 }
  v343 = *(_DWORD *)_R11 + 1;
  v344 = v19;
  v345 = v20;
  _R0 = BlockTessellator::getWaterHeight(v5, (const BlockPos *)&v343, v8);
  __asm
  {
    VMOV            S20, R7
    VLDR            S0, =0.85
  }
  v22 = 0;
  v23 = 0;
  __asm { VCMPE.F32       S20, S0 }
  v24 = 0;
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S16, S0
    VMOV            S22, R0
  if ( _NF ^ _VF )
    v22 = 1;
    VCMPE.F32       S18, S0
    v23 = 1;
  __asm { VMRS            APSR_nzcv, FPSCR }
  v25 = v22 | v23;
  v26 = 0;
  __asm { VCMPE.F32       S22, S0 }
    v26 = 1;
  v27 = v25 | v26;
  v28 = 0;
    v28 = 1;
  v29 = v27 | v28;
  if ( BlockOccluder::anyVisible((BlockOccluder *)&v351) || v29 == 1 )
    __asm { VMOV.F32        S26, #0.5 }
    v221 = v8;
    __asm { VMOV.F32        S0, #0.875 }
    v30 = &loc_E9F198;
    v226 = v5;
    v31 = Block::mLightEmission[*((_BYTE *)v7 + 4)];
    __asm { VMOV.F32        S24, S26 }
    v331 = *(float *)&Color::WHITE;
    v332 = unk_283E614;
    v333 = qword_283E618;
    if ( v31 )
      v30 = &loc_E9F19C;
    v222 = v30;
    v334 = Color::WHITE;
    v335 = unk_283E614;
    v336 = qword_283E618;
    v337 = Color::WHITE;
    v338 = unk_283E614;
    v339 = qword_283E618;
      __asm { VMOVNE.F32      S24, S0 }
    v340 = Color::WHITE;
    v341 = unk_283E614;
    v342 = qword_283E618;
    v32 = (int *)Block::getMaterial(v7);
    if ( Material::isType(v32, 5) == 1 )
    {
      v33 = 0;
      v220 = v29;
      v34 = v297;
      v301 = 0;
      v302 = 0.0;
      v299 = 0;
      v300 = 0;
      v35 = -1;
      *(_DWORD *)&v297[8] = 0;
      v298 = 0.0;
      v36 = 1;
      *(_DWORD *)v297 = 0;
      *(_DWORD *)&v297[4] = 0;
      v305 = 0;
      v306 = 0.0;
      v303 = 0;
      v304 = 0;
      v309 = 0;
      v310 = 0.0;
      v307 = 0;
      v308 = 0;
      v313 = 0;
      v314 = 0.0;
      v311 = 0;
      v312 = 0;
      v317 = 0;
      v318 = 0.0;
      v315 = 0;
      v316 = 0;
      v321 = 0;
      v322 = 0.0;
      v319 = 0;
      v320 = 0;
      v325 = 0;
      v326 = 0.0;
      v323 = 0;
      v324 = 0;
      v329 = 0;
      v330 = 0.0;
      v327 = 0;
      v328 = 0;
      do
      {
        v229 = (BlockGraphics *)v33;
        v231 = v36;
        HIDWORD(v37) = *((_DWORD *)_R11 + 1);
        v38 = *((_DWORD *)_R11 + 2);
        v39 = (BlockSource *)*((_DWORD *)v226 + 1);
        LODWORD(v37) = *(_DWORD *)_R11 + v35;
        v295 = v37;
        v296 = v38 - 1;
        v40 = BlockSource::getBiome(v39, (const BlockPos *)&v295);
        v41 = v40;
        v42 = v40 + 232;
        v43 = *(_DWORD *)(v40 + 232);
        LODWORD(v44) = *(_DWORD *)(v42 + 4);
        HIDWORD(v44) = *(_DWORD *)(v42 + 8);
        *((_QWORD *)v34 + 1) = v44;
        *(_DWORD *)v34 = *(_DWORD *)(v41 + 228);
        *((_DWORD *)v34 + 1) = v43;
        LODWORD(v44) = *((_DWORD *)_R11 + 1);
        HIDWORD(v44) = *((_DWORD *)_R11 + 2);
        v45 = (BlockSource *)*((_DWORD *)v226 + 1);
        LODWORD(v295) = v35 + *(_DWORD *)_R11;
        HIDWORD(v295) = v44;
        v296 = HIDWORD(v44);
        v46 = BlockSource::getBiome(v45, (const BlockPos *)&v295);
        v47 = v46;
        v48 = *(_DWORD *)(v46 + 232);
        v49 = *(_DWORD *)(v46 + 236);
        v50 = *(_DWORD *)(v46 + 240);
        v51 = (int)(v34 + 16);
        *(_DWORD *)v51 = *(_DWORD *)(v46 + 228);
        *(_DWORD *)(v51 + 4) = v48;
        *(_DWORD *)(v51 + 8) = v49;
        *(_DWORD *)(v51 + 12) = v50;
        v52 = *((_DWORD *)_R11 + 1);
        v53 = *((_DWORD *)_R11 + 2);
        v54 = (BlockSource *)*((_DWORD *)v226 + 1);
        HIDWORD(v295) = v52;
        v296 = v53 + 1;
        v55 = BlockSource::getBiome(v54, (const BlockPos *)&v295);
        v56 = *(_DWORD *)(v55 + 232);
        ++v35;
        *((_QWORD *)v34 + 5) = *(_QWORD *)(v55 + 236);
        v33 = v55 + 228;
        *((_DWORD *)v34 + 8) = *(_DWORD *)(v55 + 228);
        *((_DWORD *)v34 + 9) = v56;
        v57 = 0;
        if ( v47 == v41 )
          v57 = 1;
        v58 = 0;
        v34 += 48;
        if ( (BlockGraphics *)(v41 + 228) == v229 )
          v58 = 1;
        v59 = 0;
        if ( !v229 )
          v59 = 1;
        _ZF = v55 == v47;
        v60 = 0;
        v61 = (v58 | v59) & v231;
        if ( _ZF )
          v60 = 1;
        v36 = v60 & v57 & v61;
      }
      while ( v35 != 2 );
      if ( v36 )
        v352 = *(_DWORD *)_R11;
        v353 = *((_DWORD *)_R11 + 1);
        __asm
        {
          VLDR            S28, [SP,#0x2E0+var_124]
          VLDR            S30, =0.0
        }
        v354 = *((_DWORD *)_R11 + 2);
        if ( !(_NF ^ _VF) )
          __asm
          {
            VMOV.F32        S17, #1.0
            VMOV.F32        S19, #20.0
          }
          do
            v62 = (Block *)BlockSource::getBlock(*((BlockSource **)v226 + 1), (const BlockPos *)&v352);
            v63 = (int *)Block::getMaterial(v62);
            if ( Material::isType(v63, 0) == 1 )
            {
              __asm { VADD.F32        S30, S30, S17 }
            }
            else if ( Material::isType(v63, 5) != 1 )
              break;
            v64 = v353;
            __asm
              VCMPE.F32       S30, S19
              VMRS            APSR_nzcv, FPSCR
            --v353;
          while ( (unsigned __int8)(_NF ^ _VF) | _ZF && v64 > 1 );
          VLDR            S0, =0.05
          VMOV.F32        S2, #1.0
          VMUL.F32        S0, S30, S0
          VADD.F32        S0, S0, S28
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          __asm { VMOVLT.F32      S2, S0 }
          VSTR            S2, [SP,#0x2E0+var_164]
          VSTR            S2, [SP,#0x2E0+var_154]
          VSTR            S2, [SP,#0x2E0+var_144]
          VSTR            S2, [SP,#0x2E0+var_134]
          VSTR            S2, [SP,#0x2E0+var_124]
          VSTR            S2, [SP,#0x2E0+var_114]
          VSTR            S2, [SP,#0x2E0+var_104]
          VSTR            S2, [SP,#0x2E0+var_F4]
          VSTR            S2, [SP,#0x2E0+var_E4]
      else
          VMOV.F32        S30, #1.0
          VMOV.F32        S17, #20.0
          VLDR            S28, =0.0
          VLDR            S19, =0.05
        v65 = -1;
        do
          __asm { VMOV.F32        S23, S28 }
          v66 = *(_QWORD *)_R11 >> 32;
          v67 = *(_QWORD *)_R11;
          _R10 = &v297[48 * v65];
          v69 = *((_DWORD *)_R11 + 2);
          __asm { VLDR            S21, [R10,#0x3C] }
          v352 = v67 + v65;
          v353 = v66;
          v354 = v69 - 1;
          if ( v66 >= 1 )
            do
              v70 = (Block *)BlockSource::getBlock(*((BlockSource **)v226 + 1), (const BlockPos *)&v352);
              v71 = (int *)Block::getMaterial(v70);
              if ( Material::isType(v71, 0) == 1 )
              {
                __asm { VADD.F32        S23, S23, S30 }
              }
              else if ( Material::isType(v71, 5) != 1 )
                break;
              v72 = v353;
              __asm
                VCMPE.F32       S23, S17
                VMRS            APSR_nzcv, FPSCR
              --v353;
            while ( (unsigned __int8)(_NF ^ _VF) | _ZF && v72 > 1 );
            v66 = *(_QWORD *)_R11 >> 32;
            v67 = *(_QWORD *)_R11;
            v69 = *((_DWORD *)_R11 + 2);
            VMUL.F32        S0, S23, S19
            VMOV.F32        S23, S28
            VMOV.F32        S2, S30
            VADD.F32        S0, S0, S21
            VCMPE.F32       S0, S30
            VMRS            APSR_nzcv, FPSCR
          if ( _NF ^ _VF )
            __asm { VMOVLT.F32      S2, S0 }
            VSTR            S2, [R8]
            VLDR            S21, [R10,#0x4C]
          v354 = v69;
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              v73 = (Block *)BlockSource::getBlock(*((BlockSource **)v226 + 1), (const BlockPos *)&v352);
              v74 = (int *)Block::getMaterial(v73);
              if ( Material::isType(v74, 0) )
              else if ( !Material::isType(v74, 5) )
              v75 = v353;
            while ( (unsigned __int8)(_NF ^ _VF) | _ZF && v75 > 1 );
          __asm { VMUL.F32        S0, S23, S19 }
          v76 = v67 + v65;
            VLDR            S21, [R10,#0x5C]
          v352 = v76;
          v354 = v69 + 1;
          if ( !(_NF ^ _VF) )
              v77 = (Block *)BlockSource::getBlock(*((BlockSource **)v226 + 1), (const BlockPos *)&v352);
              v78 = (int *)Block::getMaterial(v77);
              if ( Material::isType(v78, 0) )
              else if ( !Material::isType(v78, 5) )
              v79 = v353;
            while ( (unsigned __int8)(_NF ^ _VF) | _ZF && v79 > 1 );
          ++v65;
          __asm { VSTR            S2, [R8] }
        while ( !_ZF );
      _gather3x3<Color>((int)v297, (int)&v331);
      v29 = v220;
    }
    v80 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v7 + 4)];
    if ( (!BlockOccluder::occludes((BlockOccluder *)&v351, 1) | v29) == 1 )
      v223 = v7;
      v230 = v80;
      v81 = BlockGraphics::getTexture(v80, _R11, 1, 0);
      v82 = *(float *)(v81 + 4);
      v83 = *(float *)(v81 + 8);
      v84 = *(float *)(v81 + 12);
      v85 = *(float *)(v81 + 16);
      v86 = *(_DWORD *)(v81 + 20);
      v287 = *(_DWORD *)v81;
      v288 = v82;
      v289 = v83;
      v290 = v84;
      v291 = v85;
      v292 = v86;
      sub_119C854(&v293, (int *)(v81 + 24));
      v294 = *(_DWORD *)(v81 + 28);
      _R9 = (mce::Math *)LiquidBlock::getSlopeAngle(*((LiquidBlock **)v226 + 1), _R11, v221, v87);
      __asm
        VMOV            S28, R9
        VLDR            S30, =-999.0
        VCMPE.F32       S28, S30
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        v90 = BlockGraphics::getTexture(v230, _R11, 2, 0);
        v91 = *(float *)(v90 + 4);
        v92 = *(float *)(v90 + 8);
        v93 = *(float *)(v90 + 12);
        v94 = *(float *)(v90 + 16);
        v95 = *(_DWORD *)(v90 + 20);
        v287 = *(_DWORD *)v90;
        v288 = v91;
        v289 = v92;
        v290 = v93;
        v291 = v94;
        v292 = v95;
        EntityInteraction::setInteractText(&v293, (int *)(v90 + 24));
        v294 = *(_DWORD *)(v90 + 28);
      if ( _NF ^ _VF )
          VLDR            S25, [SP,#0x2E0+var_19C]
          VLDR            S27, [SP,#0x2E0+var_198]
          VLDR            S17, [SP,#0x2E0+var_194]
          VMOV.F32        S23, S25
          VLDR            S21, [SP,#0x2E0+var_190]
          VMOV.F32        S30, S27
          VMOV.F32        S28, S17
          VMOV.F32        S19, S21
        _R4 = mce::Math::sin(_R9, v88);
        _R0 = mce::Math::cos(_R9, v99);
          VMOV            S0, R4
          VMUL.F32        S28, S0, S26
          VMOV            S0, R0
          VMUL.F32        S17, S0, S26
          VSUB.F32        S19, S30, S17
          VSUB.F32        S0, S19, S28
          VMOV            R6, S0
        _R8 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v287, _R6, 0.0);
          VADD.F32        S0, S19, S28
          VMOV            R4, S0
        v104 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v287, _R4, 0.0);
        v105 = (BlockPos *)TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v287, _R4, 0.0);
          VADD.F32        S30, S17, S30
          VADD.F32        S0, S30, S28
        _R7 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v287, _R4, 0.0);
        _R9 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v287, _R4, 0.0);
          VSUB.F32        S0, S30, S28
          VMOV            R5, S0
        _R4 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v287, _R5, 0.0);
        _R10 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v287, _R5, 0.0);
        _R0 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v287, _R6, 0.0);
        _R1 = v104;
          VMOV            S25, R8
          VMOV            S21, R7
          VMOV            S17, R9
          VMOV            S27, R1
        _R1 = v105;
          VMOV            S19, R4
          VMOV            S28, R10
          VMOV            S23, R1
          VMOV            S30, R0
      _R0 = &Block::mTranslucency[*(_BYTE *)(BlockTessellatorCache::getBlock(v227, _R11) + 4)];
        VLDR            S0, [R0]
        VCMPE.F32       S0, S26
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        v286 = 2827;
      else if ( *((_BYTE *)v226 + 48) )
        LOBYTE(v286) = Brightness::MAX;
        HIBYTE(v286) = Brightness::MAX;
        BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v286, v227, (int)_R11);
      v278 = 0.0;
      v279 = 0.0;
      v280 = 0.0;
      v281 = 0.0;
      v282 = 0.0;
      v283 = 0.0;
      v284 = 0.0;
      v285 = 0.0;
      if ( *((_BYTE *)v226 + 51) )
        v260 = 0.0;
        v261 = 0.0;
        v262 = 0.0;
        v263 = 0.0;
        v264 = 0.0;
        v265 = 0.0;
        v116 = -1;
        v266 = 0.0;
        v267 = 0.0;
        v268 = 0.0;
        v269 = 0.0;
        v270 = 0.0;
        v271 = 0.0;
        v272 = 0.0;
        v273 = 0.0;
        v274 = 0.0;
        v275 = 0.0;
        v276 = 0.0;
        v277 = 0.0;
        v117 = &v265;
        __asm { VLDR            S29, =0.0625 }
          v118 = *((_DWORD *)_R11 + 1);
          v119 = *((_DWORD *)_R11 + 2);
          v255 = *(_DWORD *)_R11 + v116;
          _R6 = (unsigned __int8)v286;
          _R5 = HIBYTE(v286);
          v256 = v118 + 1;
          v257 = v119 - 1;
          _R0 = &Block::mTranslucency[*(_BYTE *)(BlockTessellatorCache::getBlock(v227, (const BlockPos *)&v255) + 4)];
            VLDR            S0, [R0]
            VCMPE.F32       S0, S26
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            v258 = _R6;
            v259 = _R5;
          else if ( *((_BYTE *)v226 + 48) )
            _R6 = (unsigned __int8)Brightness::MAX;
            v258 = Brightness::MAX;
            v259 = Brightness::MAX;
            _R5 = (unsigned __int8)Brightness::MAX;
          else
            BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v258, v227, (int)&v255);
            _R6 = v258;
            _R5 = v259;
            VMOV            S0, R5
            VMOV            S2, R6
            VCVT.F32.U32    S0, S0
            VCVT.F32.U32    S2, S2
            VMUL.F32        S0, S0, S29
            VMUL.F32        S2, S2, S29
            VSTR            S0, [R4,#-0x14]
            VSTR            S2, [R4,#-0x10]
          v123 = *((_DWORD *)_R11 + 1);
          v124 = *((_DWORD *)_R11 + 2);
          v256 = v123 + 1;
          v257 = v124;
            VSTR            S0, [R4,#-0xC]
            VSTR            S2, [R4,#-8]
          v128 = *((_DWORD *)_R11 + 1);
          v129 = *((_DWORD *)_R11 + 2);
          v256 = v128 + 1;
          v257 = v129 + 1;
          __asm { VMOV            S0, R5 }
          ++v116;
            VSTR            S0, [R4,#-4]
            VSTR            S2, [R4]
          v117 += 6;
        while ( _NF ^ _VF );
          VLDR            S0, [SP,#0x2E0+var_210]
          VMOV.F32        S1, #0.25
          VLDR            S8, [SP,#0x2E0+var_1F8]
          VLDR            S2, [SP,#0x2E0+var_20C]
          VLDR            S10, [SP,#0x2E0+var_1F4]
          VADD.F32        S0, S8, S0
          VLDR            S12, [SP,#0x2E0+var_1F0]
          VADD.F32        S2, S10, S2
          VLDR            S14, [SP,#0x2E0+var_1EC]
          VLDR            S4, [SP,#0x2E0+var_208]
          VLDR            S6, [SP,#0x2E0+var_204]
          VLDR            S3, [SP,#0x2E0+var_1E8]
          VLDR            S5, [SP,#0x2E0+var_1E4]
          VADD.F32        S0, S0, S12
        v133 = v226;
          VADD.F32        S2, S2, S14
          VADD.F32        S0, S0, S4
          VADD.F32        S4, S12, S4
          VADD.F32        S2, S2, S6
          VADD.F32        S6, S14, S6
          VMUL.F32        S0, S0, S1
          VADD.F32        S4, S4, S3
          VMUL.F32        S2, S2, S1
          VADD.F32        S6, S6, S5
          VSTR            S0, [SP,#0x2E0+var_1C8]
          VLDR            S0, [SP,#0x2E0+var_200]
          VSTR            S2, [SP,#0x2E0+var_1C4]
          VLDR            S2, [SP,#0x2E0+var_1FC]
          VADD.F32        S0, S4, S0
          VLDR            S4, [SP,#0x2E0+var_1D8]
          VADD.F32        S2, S6, S2
          VLDR            S6, [SP,#0x2E0+var_1D4]
          VSTR            S0, [SP,#0x2E0+var_1C0]
          VLDR            S0, [SP,#0x2E0+var_1E0]
          VSTR            S2, [SP,#0x2E0+var_1BC]
          VLDR            S2, [SP,#0x2E0+var_1DC]
          VADD.F32        S0, S0, S8
          VADD.F32        S2, S2, S10
          VADD.F32        S4, S4, S12
          VADD.F32        S6, S6, S14
          VSTR            S0, [SP,#0x2E0+var_1B8]
          VLDR            S0, [SP,#0x2E0+var_1D0]
          VSTR            S2, [SP,#0x2E0+var_1B4]
          VLDR            S2, [SP,#0x2E0+var_1CC]
          VADD.F32        S0, S0, S3
          VADD.F32        S2, S2, S5
          VSTR            S0, [SP,#0x2E0+var_1B0]
          VSTR            S2, [SP,#0x2E0+var_1AC]
        v134 = *((_DWORD *)_R11 + 1);
        v135 = *((_DWORD *)_R11 + 2);
        v250 = *(_DWORD *)_R11;
        v251 = v134 + 1;
        v252 = v135;
        _R4 = (unsigned __int8)v286;
        _R5 = HIBYTE(v286);
        _R0 = &Block::mTranslucency[*(_BYTE *)(BlockTessellatorCache::getBlock(v227, (const BlockPos *)&v250) + 4)];
          VLDR            S0, [R0]
          VCMPE.F32       S0, S26
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          v133 = v226;
          v253 = _R4;
          v254 = _R5;
        else
          if ( *((_BYTE *)v226 + 48) )
            _R4 = (unsigned __int8)Brightness::MAX;
            v253 = Brightness::MAX;
            v254 = Brightness::MAX;
            BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v253, v227, (int)&v250);
            _R4 = v253;
            v133 = v226;
            _R5 = v254;
          VMOV            S0, R5
          VLDR            S4, =0.0625
          VMOV            S2, R4
          VCVT.F32.U32    S0, S0
          VCVT.F32.U32    S2, S2
          VMUL.F32        S0, S0, S4
          VMUL.F32        S2, S2, S4
      v139 = v133;
      if ( !*((_BYTE *)v133 + 48) )
        Tessellator::tex1((int)v228, (__int64 *)&v278);
      Tessellator::color(v228, (const Color *)&v331);
        VLDR            S0, [R11]
        VLDR            S2, [R11,#4]
        VLDR            S4, [R11,#8]
        VCVT.F32.S32    S2, S2
        VLDR            S26, =-0.001
        VCVT.F32.S32    S0, S0
        VADD.F32        S20, S20, S26
        VCVT.F32.S32    S4, S4
        VMOV            R1, S0
        VADD.F32        S2, S2, S20
        VMOV            R3, S4
        VMOV            R2, S2
        VSTR            S25, [SP,#0x2E0+var_2E0]
        VSTR            S27, [SP,#0x2E0+var_2DC]
      Tessellator::vertexUV(v228, _R1, _R2, _R3, v212, v216);
      if ( !*((_BYTE *)v139 + 48) )
        Tessellator::tex1((int)v228, (__int64 *)&v280);
      Tessellator::color(v228, (const Color *)&v334);
        VADD.F32        S16, S16, S26
        VMOV.F32        S25, #1.0
        VADD.F32        S2, S2, S16
        VADD.F32        S4, S4, S25
        VSTR            S23, [SP,#0x2E0+var_2E0]
        VSTR            S21, [SP,#0x2E0+var_2DC]
      Tessellator::vertexUV(v228, _R1, _R2, _R3, v213, v217);
        Tessellator::tex1((int)v228, (__int64 *)&v284);
      Tessellator::color(v228, (const Color *)&v340);
        VADD.F32        S18, S18, S26
        VADD.F32        S0, S0, S25
        VADD.F32        S2, S2, S18
        VSTR            S17, [SP,#0x2E0+var_2E0]
        VSTR            S19, [SP,#0x2E0+var_2DC]
      Tessellator::vertexUV(v228, _R1, _R2, _R3, v214, v218);
        Tessellator::tex1((int)v228, (__int64 *)&v282);
      Tessellator::color(v228, (const Color *)&v337);
        VADD.F32        S22, S22, S26
        VADD.F32        S2, S2, S22
        VSTR            S28, [SP,#0x2E0+var_2E0]
        VSTR            S30, [SP,#0x2E0+var_2DC]
      Tessellator::vertexUV(v228, _R1, _R2, _R3, v215, v219);
      v7 = v223;
      v152 = (void *)(v293 - 12);
      if ( (int *)(v293 - 12) != &dword_28898C0 )
        v210 = (unsigned int *)(v293 - 4);
        if ( &pthread_create )
          __dmb();
            v211 = __ldrex(v210);
          while ( __strex(v211 - 1, v210) );
          v211 = (*v210)--;
        if ( v211 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v152);
      v80 = v230;
      v96 = 1;
      v97 = v139;
    else
      v96 = 0;
      v97 = v226;
    if ( BlockOccluder::occludes((BlockOccluder *)&v351, 0) != 1 )
      v153 = *((_DWORD *)_R11 + 1);
      v154 = *((_DWORD *)_R11 + 2);
      v244 = *(_DWORD *)_R11;
      v245 = v153 - 1;
      v246 = v154;
      if ( *((_BYTE *)v97 + 48) )
        _R1 = (unsigned __int8)Brightness::MAX;
        v247 = Brightness::MAX;
        v248 = Brightness::MAX;
        _R2 = (unsigned __int8)Brightness::MAX;
        BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v247, v227, (int)&v244);
        _R1 = v247;
        _R2 = v248;
        v157 = *((_BYTE *)v97 + 48);
        VMOV            S0, R2
        VLDR            S4, =0.0625
        VMOV            S2, R1
        VCVT.F32.U32    S0, S0
        VCVT.F32.U32    S2, S2
        VMUL.F32        S0, S0, S4
        VMUL.F32        S2, S2, S4
        VSTR            S0, [SP,#0x2E0+var_238]
        VSTR            S2, [SP,#0x2E0+var_234]
      if ( _ZF )
        Tessellator::tex1((int)v228, (__int64 *)&v249);
        VLDR            S0, [SP,#0x2E0+var_E0]
        VLDR            S2, [SP,#0x2E0+var_DC]
        VLDR            S4, [SP,#0x2E0+var_D8]
        VMUL.F32        S0, S0, S24
        VLDR            S6, [SP,#0x2E0+var_D8+4]
        VMUL.F32        S2, S2, S24
        VMUL.F32        S4, S4, S24
        VMUL.F32        S6, S6, S24
        VSTR            S0, [SP,#0x2E0+var_258]
        VSTR            S2, [SP,#0x2E0+var_254]
        VSTR            S4, [SP,#0x2E0+var_250]
        VSTR            S6, [SP,#0x2E0+var_24C]
      Tessellator::color(v228, (const Color *)&v243);
      Vec3::Vec3((int)&v242, (int)_R11);
      v158 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v80, _R11, 0, 0);
      BlockTessellator::tessellateFaceDown(v97, v228, v7, (const Vec3 *)&v242, v158);
    _R0 = v222;
    v160 = &v237;
    __asm
      VMOV.F32        S28, #1.0
      VLDR            S19, =0.0
      VLDR            S30, =0.0625
    v161 = 2;
    __asm { VLDR            S24, [R0] }
    v224 = v96;
    do
      v164 = v80;
      v165 = BlockGraphics::getTexture(v80, _R11, v161, 0);
      v166 = v160;
      v167 = (TextureUVCoordinateSet *)v160;
      v168 = *(_DWORD *)(v165 + 4);
      v169 = *(_DWORD *)(v165 + 8);
      v170 = *(_DWORD *)(v165 + 12);
      v171 = *(_DWORD *)(v165 + 16);
      v172 = *(_DWORD *)(v165 + 20);
      *(_DWORD *)v166 = *(_DWORD *)v165;
      *((_DWORD *)v166 + 1) = v168;
      *((_DWORD *)v166 + 2) = v169;
      *((_DWORD *)v166 + 3) = v170;
      *((_DWORD *)v166 + 4) = v171;
      *((_DWORD *)v166 + 5) = v172;
      v160 = (char *)v167;
      sub_119C854(&v240, (int *)(v165 + 24));
      v241 = *(_DWORD *)(v165 + 28);
      if ( !BlockOccluder::occludes((BlockOccluder *)&v351, v161) )
          VMOV.F32        S26, S19
          VMOV.F32        S25, S19
          VMOV.F32        S29, S19
          VMOV.F32        S31, S19
          VMOV.F32        S23, S19
          VMOV.F32        S27, S19
        switch ( v161 )
          case 2:
              VLDR            S0, [R11,#8]; jumptable 00E9F0DA case 2
              VMOV.F32        S26, S20
              VMOV.F32        S25, S22
              VCVT.F32.S32    S0, S0
            _R0 = *(_DWORD *)_R11;
            __asm { VMOV            S2, R0 }
            _R0 = *(_DWORD *)_R11 + 1;
              VCVT.F32.S32    S29, S2
              VMOV            S2, R0
              VCVT.F32.S32    S23, S2
              VLDR            S2, =0.001
              VADD.F32        S31, S0, S2
              VMOV.F32        S27, S31
            break;
          case 3:
            __asm { VMOV.F32        S26, S18 }
            __asm { VMOV.F32        S25, S16 }
            _R1 = *((_DWORD *)_R11 + 2) + 1;
              VMOV            S0, R1
              VLDR            S2, =-0.001
          case 4:
              VLDR            S0, [R11]; jumptable 00E9F0DA case 4
              VMOV.F32        S26, S16
              VMOV.F32        S25, S20
            _R0 = *((_DWORD *)_R11 + 2);
            ++_R0;
              VCVT.F32.S32    S27, S2
              VCVT.F32.S32    S31, S2
              VADD.F32        S29, S0, S2
            goto LABEL_143;
          case 5:
            __asm { VMOV.F32        S26, S22 }
            _R1 = *((_DWORD *)_R11 + 2);
            __asm { VMOV.F32        S25, S18 }
            __asm { VMOV            S0, R0 }
            _R0 = _R1 + 1;
              VMOV            S2, R1
LABEL_143:
            __asm { VMOV.F32        S23, S29 }
          default:
          VSUB.F32        S0, S28, S26; jumptable 00E9F0DA default case
          VLDR            S21, [SP,#0x2E0+var_284]
          VLDR            S17, [SP,#0x2E0+var_27C]
          VMOV            R1, S0
        _R5 = TextureUVCoordinateSet::offsetHeight(v167, _R1, 0.0);
          VSUB.F32        S0, S28, S25
        _R4 = TextureUVCoordinateSet::offsetHeight(v167, _R1, 0.0);
        v225 = TextureUVCoordinateSet::offsetHeight(v167, 1.0, 0.0);
        BlockPos::neighbor((BlockPos *)&v236, (int)_R11, v161);
        if ( *((_BYTE *)v226 + 48) )
          _R1 = (unsigned __int8)Brightness::MAX;
          v233 = Brightness::MAX;
          v234 = Brightness::MAX;
          _R2 = (unsigned __int8)Brightness::MAX;
          BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v233, v227, (int)&v236);
          _R1 = v233;
          _R2 = v234;
          v188 = *((_BYTE *)v226 + 48);
          VMOV            S0, R2
          VMOV            S2, R1
          VMUL.F32        S0, S0, S30
          VMUL.F32        S2, S2, S30
          VSTR            S0, [SP,#0x2E0+var_29C]
          VSTR            S2, [SP,#0x2E0+var_298]
          Tessellator::tex1((int)v228, (__int64 *)&v235);
          VLDR            S0, [SP,#0x2E0+var_E0]
          VLDR            S2, [SP,#0x2E0+var_DC]
          VLDR            S4, [SP,#0x2E0+var_D8]
          VMUL.F32        S0, S0, S24
          VLDR            S6, [SP,#0x2E0+var_D8+4]
          VMUL.F32        S2, S2, S24
          VMUL.F32        S4, S4, S24
          VMUL.F32        S6, S6, S24
          VSTR            S0, [SP,#0x2E0+var_2B0]
          VSTR            S2, [SP,#0x2E0+var_2AC]
          VSTR            S4, [SP,#0x2E0+var_2A8]
          VSTR            S6, [SP,#0x2E0+var_2A4]
        Tessellator::color(v228, (const Color *)&v232);
        __asm { VMOV            R7, S29 }
        _R0 = *((_DWORD *)_R11 + 1);
          VMOV            R9, S31
          VMOV            S2, R0
          VCVT.F32.S32    S2, S2
          VADD.F32        S2, S2, S26
          VMOV            R2, S2
          VSTR            S21, [SP,#0x2E0+var_2E0]
          VSTR            S0, [SP,#0x2E0+var_2DC]
        Tessellator::vertexUV(v228, _R7, _R2, _R9, v212, v216);
        __asm { VMOV            S0, R4 }
          VMOV            R5, S23
          VMOV            R4, S27
          VADD.F32        S2, S2, S25
          VSTR            S17, [SP,#0x2E0+var_2E0]
        Tessellator::vertexUV(v228, _R5, _R2, _R4, v197, v198);
        _R0 = v225;
        __asm { VMOV            S26, R0 }
          VCVT.F32.S32    S0, S0
          VMOV            R2, S0
          VSTR            S26, [SP,#0x2E0+var_2DC]
        Tessellator::vertexUV(v228, _R5, _R2, _R4, v202, v203);
        Tessellator::vertexUV(v228, _R7, _R2, _R9, v206, v207);
        v224 = 1;
      v80 = v164;
      v208 = (void *)(v240 - 12);
      if ( (int *)(v240 - 12) != &dword_28898C0 )
        v162 = (unsigned int *)(v240 - 4);
            v163 = __ldrex(v162);
          while ( __strex(v163 - 1, v162) );
          v80 = v164;
          v160 = (char *)v167;
          v163 = (*v162)--;
        if ( v163 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v208);
      ++v161;
    while ( v161 < 6 );
    v24 = v224;
  return v24 & 1;
}


int __fastcall BlockTessellator::tessellateInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5, const TextureUVCoordinateSet *a6)
{
  BlockTessellator *v6; // r7@1
  Tessellator *v7; // r10@1
  const BlockPos *v8; // r8@1
  const Block *v9; // r9@1
  int v10; // r2@1
  int v11; // r3@1
  int v12; // r4@1
  int v13; // r5@1
  int v14; // r6@1
  char *v15; // r12@1
  int result; // r0@1

  v6 = this;
  v7 = a2;
  *((_BYTE *)this + 40) = 1;
  v8 = a4;
  v9 = a3;
  v10 = *((_DWORD *)a6 + 1);
  v11 = *((_DWORD *)a6 + 2);
  v12 = *((_DWORD *)a6 + 3);
  v13 = *((_DWORD *)a6 + 4);
  v14 = *((_DWORD *)a6 + 5);
  v15 = (char *)this + 8;
  *(_DWORD *)v15 = *(_DWORD *)a6;
  *((_DWORD *)v15 + 1) = v10;
  *((_DWORD *)v15 + 2) = v11;
  *((_DWORD *)v15 + 3) = v12;
  *((_DWORD *)v15 + 4) = v13;
  *((_DWORD *)v15 + 5) = v14;
  EntityInteraction::setInteractText((int *)this + 8, (int *)a6 + 6);
  *((_DWORD *)v6 + 9) = *((_DWORD *)a6 + 7);
  result = BlockTessellator::tessellateInWorld(v6, v7, v9, v8, a5, 0);
  *((_BYTE *)v6 + 40) = 0;
  return result;
}


void __fastcall BlockTessellator::tessellateSouth(BlockTessellator *this, Tessellator *a2, const Block *a3, const Vec3 *a4, const TextureUVCoordinateSet *a5)
{
  const TextureUVCoordinateSet *v6; // r4@1
  const Block *v7; // r8@1
  Tessellator *v9; // r10@1
  float v10; // r1@3
  float v11; // r3@3
  int v12; // r5@3
  int v13; // r6@3
  int v14; // r7@3
  int v22; // r1@3
  _BOOL4 v23; // r0@12
  int v25; // r0@17
  int v37; // r0@25
  int v38; // r0@27
  float v56; // ST00_4@37
  float v57; // ST04_4@37
  float v59; // ST00_4@37
  float v60; // ST04_4@37
  float v61; // ST00_4@37
  float v62; // ST04_4@37
  void *v63; // r0@38
  unsigned int *v64; // r2@40
  signed int v65; // r1@42
  float v66; // [sp+0h] [bp-138h]@0
  float v67; // [sp+0h] [bp-138h]@30
  float v68; // [sp+0h] [bp-138h]@32
  float v69; // [sp+0h] [bp-138h]@34
  float v70; // [sp+4h] [bp-134h]@0
  float v71; // [sp+4h] [bp-134h]@30
  float v72; // [sp+4h] [bp-134h]@32
  float v73; // [sp+4h] [bp-134h]@34
  float v87; // [sp+3Ch] [bp-FCh]@35
  float v88; // [sp+44h] [bp-F4h]@34
  float v89; // [sp+54h] [bp-E4h]@33
  float v90; // [sp+5Ch] [bp-DCh]@32
  float v91; // [sp+6Ch] [bp-CCh]@31
  float v92; // [sp+74h] [bp-C4h]@30
  float v93; // [sp+84h] [bp-B4h]@29
  float v94; // [sp+8Ch] [bp-ACh]@28
  char v95; // [sp+9Ch] [bp-9Ch]@11
  int v96; // [sp+A8h] [bp-90h]@3
  float v97; // [sp+ACh] [bp-8Ch]@3
  float v98; // [sp+B0h] [bp-88h]@3
  int v99; // [sp+B4h] [bp-84h]@3
  int v100; // [sp+B8h] [bp-80h]@3
  int v101; // [sp+BCh] [bp-7Ch]@3
  int v102; // [sp+C0h] [bp-78h]@3
  int v103; // [sp+C4h] [bp-74h]@3

  _R11 = this;
  v6 = a5;
  v7 = a3;
  _R9 = a4;
  v9 = a2;
  if ( *((_BYTE *)this + 40) )
    v6 = (BlockTessellator *)((char *)this + 8);
  v10 = *((float *)v6 + 1);
  v11 = *((float *)v6 + 2);
  v12 = *((_DWORD *)v6 + 3);
  v13 = *((_DWORD *)v6 + 4);
  v14 = *((_DWORD *)v6 + 5);
  v96 = *(_DWORD *)v6;
  v97 = v10;
  v98 = v11;
  v99 = v12;
  v100 = v13;
  v101 = v14;
  sub_119C854(&v102, (int *)v6 + 6);
  v103 = *((_DWORD *)v6 + 7);
  Tessellator::quadFacing(v9, 3);
  _R6 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 181), 0.0);
  _R4 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 184), 0.0);
  _R7 = TextureUVCoordinateSet::inverseOffsetHeight((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 185), 0.0);
  _R0 = TextureUVCoordinateSet::inverseOffsetHeight((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 182), 0.0);
  __asm { VMOV            S0, R4 }
  v22 = *((_BYTE *)_R11 + 43);
  __asm
  {
    VMOV            S16, R6
    VMOV.F32        S24, S0
  }
  if ( _ZF )
    __asm
    {
      VMOVEQ.F32      S24, S16
      VMOVEQ.F32      S16, S0
    }
    VLDR            S0, [R11,#0x2D4]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    goto LABEL_50;
    VMOV.F32        S0, #1.0
    VLDR            S2, [R11,#0x2E0]
    VCMPE.F32       S2, S0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
LABEL_50:
      VSUB.F32        S0, S16, S24
      VLDR            S24, [SP,#0x138+var_8C]
      VADD.F32        S16, S0, S24
    VLDR            S0, [R11,#0x2D8]
    VMOV            S18, R7
    VMOV            S20, R0
    goto LABEL_51;
    VLDR            S2, [R11,#0x2E4]
LABEL_51:
      VSUB.F32        S0, S20, S18
      VLDR            S18, [SP,#0x138+var_88]
      VADD.F32        S20, S0, S18
  BlockPos::BlockPos((int)&v95, (int)_R9);
  if ( !*((_BYTE *)_R11 + 48) )
    v23 = BlockGraphics::isTextureIsotropic((BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v7 + 4)], 3);
    _ZF = v23 == 1;
    if ( v23 == 1 )
      _ZF = *((_DWORD *)_R11 + 50) == 0;
    if ( _ZF )
      *((_DWORD *)_R11 + 50) = ((unsigned int)BlockPos::randomSeed((BlockPos *)&v95) >> 24) & 3;
  v25 = *((_DWORD *)_R11 + 50);
  if ( v25 == 3 )
    _R6 = TextureUVCoordinateSet::inverseOffsetWidth((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 181), 0.0);
    _R4 = TextureUVCoordinateSet::inverseOffsetWidth((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 184), 0.0);
    _R7 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 185), 0.0);
    _R0 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 182), 0.0);
      VMOV            S24, R6
      VMOV            S16, R4
      VMOV            S18, R7
      VMOV            S20, R0
      VMOV.F32        S0, S16
      VMOV.F32        S2, S18
      VMOV.F32        S4, S20
      VMOV.F32        S23, S24
    goto LABEL_25;
  if ( v25 == 2 )
    _R6 = TextureUVCoordinateSet::inverseOffsetWidth((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 185), 0.0);
    _R4 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 181), 0.0);
    _R7 = TextureUVCoordinateSet::inverseOffsetWidth((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 182), 0.0);
    _R0 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 184), 0.0);
      VMOV            S16, R6
      VMOV            S18, R4
      VMOV            S0, R7
    goto LABEL_23;
    VMOV.F32        S0, S16
    VMOV.F32        S2, S18
    VMOV.F32        S4, S20
    VMOV.F32        S23, S24
    _R6 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 182), 0.0);
    _R4 = TextureUVCoordinateSet::inverseOffsetHeight((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 181), 0.0);
    _R7 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 185), 0.0);
    _R0 = TextureUVCoordinateSet::inverseOffsetHeight((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 184), 0.0);
      VMOV            S0, R6
      VMOV            S16, R7
LABEL_23:
      VMOV.F32        S24, S16
      VMOV.F32        S2, S20
      VMOV.F32        S4, S18
      VMOV.F32        S23, S0
LABEL_25:
  v37 = *((_BYTE *)_R11 + 1);
    VLDR            S22, [R11,#0x2F0]
    VLDR            S28, [R11,#0x2E0]
    VLDR            S19, [R11,#0x2E4]
    VLDR            S25, [R11,#0x2E8]
    VLDR            S17, [R11,#0x2D4]
    VLDR            S21, [R11,#0x2D8]
    VLDR            S26, [R9]
    VLDR            S30, [R9,#4]
    VLDR            S27, [R9,#8]
    VSTR            S4, [SP,#0x138+var_120]
    VSTR            S2, [SP,#0x138+var_130]
    VSTR            S0, [SP,#0x138+var_12C]
  if ( !_ZF )
    Tessellator::normal(v9, (const Vec3 *)&Vec3::UNIT_Z);
  __asm { VMUL.F32        S0, S25, S22 }
  v38 = *((_BYTE *)_R11 + 50);
    VMUL.F32        S4, S28, S22
    VMUL.F32        S8, S17, S22
    VMUL.F32        S2, S19, S22
    VMUL.F32        S6, S21, S22
    VADD.F32        S25, S0, S27
    VADD.F32        S0, S4, S26
    VADD.F32        S29, S26, S8
    VADD.F32        S27, S2, S30
    VSTR            S0, [SP,#0x138+var_128]
    VADD.F32        S0, S30, S6
    VSTR            S0, [SP,#0x138+var_124]
      VMOV            R4, S29
      VMOV            R5, S27
      VMOV            R6, S25
      VSTR            S23, [SP,#0x138+var_138]
      VSTR            S18, [SP,#0x138+var_134]
    Tessellator::vertexUV(v9, _R4, _R5, _R6, v66, v70);
      VLDR            S0, [SP,#0x138+var_124]
      VMOV            R7, S0
      VLDR            S0, [SP,#0x138+var_120]
      VSTR            S24, [SP,#0x138+var_138]
      VSTR            S0, [SP,#0x138+var_134]
    Tessellator::vertexUV(v9, _R4, _R7, _R6, v56, v57);
      VLDR            S0, [SP,#0x138+var_128]
      VMOV            R4, S0
      VSTR            S16, [SP,#0x138+var_138]
      VSTR            S20, [SP,#0x138+var_134]
    Tessellator::vertexUV(v9, _R4, _R7, _R6, v59, v60);
      VLDR            S0, [SP,#0x138+var_12C]
      VSTR            S0, [SP,#0x138+var_138]
      VLDR            S0, [SP,#0x138+var_130]
    Tessellator::vertexUV(v9, _R4, _R5, _R6, v61, v62);
  else
      VMOV.F32        S1, #1.0
      VLDR            S0, [R11,#0x2D4]
      VLDR            S4, [R11,#0x78]
      VLDR            S6, [R11,#0xA8]
      VSTR            S4, [SP,#0x138+var_108]
      VMUL.F32        S4, S0, S4
      VSTR            S6, [SP,#0x138+var_104]
      VLDR            S8, [R11,#0x48]
      VLDR            S12, [R11,#0x4C]
      VSUB.F32        S2, S1, S0
      VLDR            S14, [R11,#0x58]
      VLDR            S3, [R11,#0x5C]
      VLDR            S31, [R11,#0x7C]
      VLDR            S22, [R11,#0xAC]
      VSTR            S8, [SP,#0x138+var_110]
      VMUL.F32        S8, S0, S8
      VSTR            S12, [SP,#0x138+var_10C]
      VMUL.F32        S12, S0, S12
      VSTR            S14, [SP,#0x138+var_118]
      VMUL.F32        S5, S0, S31
      VMUL.F32        S6, S2, S6
      VSTR            S3, [SP,#0x138+var_11C]
      VMUL.F32        S14, S2, S14
      VLDR            S10, [R11,#0x2E4]
      VMUL.F32        S3, S2, S3
      VLDR            S9, [R11,#0x44]
      VSUB.F32        S1, S1, S10
      VLDR            S28, [R11,#0x54]
      VLDR            S30, [R11,#0x74]
      VLDR            S17, [R11,#0xA4]
      VLDR            S7, [R11,#0x50]
      VADD.F32        S4, S6, S4
      VLDR            S26, [R11,#0x60]
      VMUL.F32        S6, S2, S22
      VLDR            S19, [R11,#0x80]
      VADD.F32        S12, S3, S12
      VLDR            S21, [R11,#0xB0]
      VADD.F32        S8, S14, S8
      VSTR            S9, [SP,#0x138+var_114]
      VMUL.F32        S14, S0, S9
      VSTR            S7, [SP,#0x138+var_100]
      VMUL.F32        S3, S2, S28
      VMUL.F32        S4, S4, S10
      VADD.F32        S6, S6, S5
      VMUL.F32        S12, S12, S1
      VMUL.F32        S8, S8, S1
      VADD.F32        S14, S3, S14
      VMUL.F32        S6, S6, S10
      VADD.F32        S4, S4, S8
      VMUL.F32        S8, S0, S30
      VMUL.F32        S14, S14, S1
      VADD.F32        S6, S6, S12
      VMUL.F32        S12, S2, S17
      VADD.F32        S8, S12, S8
      VMUL.F32        S12, S0, S7
      VMUL.F32        S0, S0, S19
      VMUL.F32        S8, S8, S10
      VADD.F32        S8, S8, S14
      VMUL.F32        S14, S2, S26
      VMUL.F32        S2, S2, S21
      VSTR            S8, [SP,#0x138+var_AC]
      VADD.F32        S12, S14, S12
      VSTR            S4, [SP,#0x138+var_A8]
      VADD.F32        S0, S2, S0
      VSTR            S6, [SP,#0x138+var_A4]
      VMUL.F32        S0, S0, S10
      VADD.F32        S0, S0, S12
      VSTR            S0, [SP,#0x138+var_A0]
    Tessellator::color(v9, (const Color *)&v94);
    _R0 = *((_BYTE *)_R11 + 186);
    _R1 = *((_BYTE *)_R11 + 187);
      VLDR            S4, =0.0625
      VMOV            S2, R0
      VMOV            S0, R1
      VCVT.F32.U32    S0, S0
      VCVT.F32.U32    S2, S2
      VMUL.F32        S0, S0, S4
      VMUL.F32        S2, S2, S4
      VSTR            S0, [SP,#0x138+var_B4]
      VSTR            S2, [SP,#0x138+var_B0]
    if ( !*((_BYTE *)_R11 + 48) )
      Tessellator::tex1((int)v9, (__int64 *)&v93);
      VMOV            R6, S29
      VMOV            R8, S27
      VMOV            R9, S25
    Tessellator::vertexUV(v9, _R6, _R8, _R9, v66, v70);
      VMOV.F32        S4, #1.0
      VLDR            S6, [SP,#0x138+var_114]
      VLDR            S14, [SP,#0x138+var_110]
      VMUL.F32        S10, S0, S30
      VLDR            S3, [SP,#0x138+var_108]
      VMUL.F32        S6, S0, S6
      VLDR            S7, [SP,#0x138+var_10C]
      VMUL.F32        S14, S0, S14
      VLDR            S15, [SP,#0x138+var_100]
      VMUL.F32        S3, S0, S3
      VLDR            S1, [SP,#0x138+var_118]
      VMUL.F32        S7, S0, S7
      VMOV.F32        S25, S4
      VLDR            S5, [SP,#0x138+var_104]
      VLDR            S9, [SP,#0x138+var_11C]
      VMUL.F32        S11, S0, S31
      VMUL.F32        S15, S0, S15
      VLDR            S2, [R11,#0x2D8]
      VSUB.F32        S4, S25, S0
      VSUB.F32        S23, S25, S2
      VMUL.F32        S8, S4, S28
      VMUL.F32        S12, S4, S17
      VMUL.F32        S1, S4, S1
      VMUL.F32        S5, S4, S5
      VMUL.F32        S9, S4, S9
      VMUL.F32        S13, S4, S22
      VMUL.F32        S18, S4, S26
      VMUL.F32        S4, S4, S21
      VADD.F32        S6, S8, S6
      VADD.F32        S8, S12, S10
      VADD.F32        S10, S1, S14
      VADD.F32        S12, S5, S3
      VADD.F32        S14, S9, S7
      VADD.F32        S1, S13, S11
      VADD.F32        S0, S4, S0
      VADD.F32        S3, S18, S15
      VMUL.F32        S4, S6, S23
      VMUL.F32        S6, S8, S2
      VMUL.F32        S8, S10, S23
      VMUL.F32        S10, S12, S2
      VMUL.F32        S12, S14, S23
      VMUL.F32        S14, S1, S2
      VMUL.F32        S0, S0, S2
      VMUL.F32        S1, S3, S23
      VADD.F32        S2, S6, S4
      VADD.F32        S4, S10, S8
      VADD.F32        S6, S14, S12
      VADD.F32        S0, S0, S1
      VSTR            S2, [SP,#0x138+var_C4]
      VSTR            S4, [SP,#0x138+var_C0]
      VSTR            S6, [SP,#0x138+var_BC]
      VSTR            S0, [SP,#0x138+var_B8]
    Tessellator::color(v9, (const Color *)&v92);
    _R0 = *((_BYTE *)_R11 + 184);
    _R1 = *((_BYTE *)_R11 + 185);
      VMOV.F32        S27, S4
      VSTR            S0, [SP,#0x138+var_CC]
      VSTR            S2, [SP,#0x138+var_C8]
      Tessellator::tex1((int)v9, (__int64 *)&v91);
    Tessellator::vertexUV(v9, _R6, _R7, _R9, v67, v71);
      VLDR            S2, [R11,#0x2E0]
      VMOV.F32        S23, S25
      VSUB.F32        S4, S25, S2
      VMUL.F32        S10, S2, S30
      VMUL.F32        S11, S2, S31
      VMUL.F32        S7, S2, S7
      VLDR            S0, [R11,#0x2D8]
      VMUL.F32        S15, S2, S15
      VMUL.F32        S2, S2, S19
      VSUB.F32        S24, S25, S0
      VADD.F32        S2, S4, S2
      VMUL.F32        S4, S6, S24
      VMUL.F32        S6, S8, S0
      VMUL.F32        S8, S10, S24
      VMUL.F32        S10, S12, S0
      VMUL.F32        S12, S14, S24
      VMUL.F32        S14, S1, S0
      VMUL.F32        S0, S2, S0
      VMUL.F32        S1, S3, S24
      VSTR            S2, [SP,#0x138+var_DC]
      VSTR            S4, [SP,#0x138+var_D8]
      VSTR            S6, [SP,#0x138+var_D4]
      VSTR            S0, [SP,#0x138+var_D0]
    Tessellator::color(v9, (const Color *)&v90);
    _R0 = *((_BYTE *)_R11 + 182);
    __asm { VMOV.F32        S24, S27 }
    _R1 = *((_BYTE *)_R11 + 183);
      VMUL.F32        S0, S0, S27
      VMUL.F32        S2, S2, S27
      VSTR            S0, [SP,#0x138+var_E4]
      VSTR            S2, [SP,#0x138+var_E0]
      Tessellator::tex1((int)v9, (__int64 *)&v89);
      VMOV            R6, S0
    Tessellator::vertexUV(v9, _R6, _R7, _R9, v68, v72);
      VLDR            S0, [R11,#0x2E0]
      VSUB.F32        S4, S23, S0
      VLDR            S2, [R11,#0x2E4]
      VMUL.F32        S16, S4, S26
      VSUB.F32        S18, S23, S2
      VADD.F32        S3, S16, S15
      VMUL.F32        S4, S6, S18
      VMUL.F32        S8, S10, S18
      VMUL.F32        S12, S14, S18
      VMUL.F32        S1, S3, S18
      VSTR            S2, [SP,#0x138+var_F4]
      VSTR            S4, [SP,#0x138+var_F0]
      VSTR            S6, [SP,#0x138+var_EC]
      VSTR            S0, [SP,#0x138+var_E8]
    Tessellator::color(v9, (const Color *)&v88);
    _R0 = *((_BYTE *)_R11 + 180);
    _R1 = *((_BYTE *)_R11 + 181);
      VMUL.F32        S0, S0, S24
      VMUL.F32        S2, S2, S24
      VSTR            S0, [SP,#0x138+var_FC]
      VSTR            S2, [SP,#0x138+var_F8]
      Tessellator::tex1((int)v9, (__int64 *)&v87);
    Tessellator::vertexUV(v9, _R6, _R8, _R9, v69, v73);
  v63 = (void *)(v102 - 12);
  if ( (int *)(v102 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v102 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
    else
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v63);
}


signed int __fastcall BlockTessellator::tessellateChorusFlowerInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5, int a6)
{
  BlockTessellator *v6; // r6@1
  AABB *v11; // r7@1
  const Block *v12; // r8@1
  Tessellator *v13; // r5@1
  const BlockPos *v14; // r4@1
  char v17; // [sp+4h] [bp-54h]@2
  int v18; // [sp+10h] [bp-48h]@1
  float v19; // [sp+14h] [bp-44h]@2
  float v20; // [sp+18h] [bp-40h]@2
  int v21; // [sp+1Ch] [bp-3Ch]@1
  int v22; // [sp+20h] [bp-38h]@1
  int v23; // [sp+24h] [bp-34h]@1

  v6 = this;
  __asm { VMOV.F32        S0, #1.0 }
  v11 = (BlockTessellator *)((char *)this + 724);
  v12 = a3;
  v13 = a2;
  v14 = a4;
  _R11 = 1040187392;
  __asm { VMOV            S2, R11 }
  v22 = 1040187392;
  v23 = 1040187392;
  v21 = 0;
  __asm { VSUB.F32        S16, S0, S2 }
  v18 = 1065353216;
  __asm
  {
    VSTR            S16, [SP,#0x58+var_44]
    VSTR            S16, [SP,#0x58+var_40]
  }
  AABB::set((BlockTessellator *)((char *)this + 724), (const Vec3 *)&v21, (const Vec3 *)&v18);
  if ( a6 )
    BlockPos::BlockPos((int)&v17, (int)&Vec3::ZERO);
    BlockTessellator::_tessellateAllFaces(v6, v13, v12, (const BlockPos *)&v17, a5);
    v21 = 1040187392;
    v23 = 1040187392;
    v22 = 0;
    __asm { VSTR            S16, [SP,#0x58+var_48] }
    v19 = 1.0;
    __asm { VSTR            S16, [SP,#0x58+var_40] }
    AABB::set(v11, (const Vec3 *)&v21, (const Vec3 *)&v18);
    v22 = 1040187392;
    v23 = 0;
    __asm
    {
      VSTR            S16, [SP,#0x58+var_48]
      VSTR            S16, [SP,#0x58+var_44]
    }
    v20 = 1.0;
  else
    BlockTessellator::tessellateBlockInWorld(v6, v13, v12, v14, a5);
  return 1;
}


unsigned int __fastcall BlockTessellator::_randomizeFaceDirection(BlockTessellator *this, const Block *a2, int a3, const BlockPos *a4)
{
  BlockTessellator *v4; // r6@1
  BlockPos *v5; // r4@1
  unsigned int result; // r0@1
  int v7; // r5@1
  int v8; // r5@3
  _DWORD *v9; // r5@3
  unsigned int v10; // t1@3

  v4 = this;
  v5 = a4;
  result = *((_BYTE *)this + 48);
  v7 = a3;
  if ( !result )
  {
    result = BlockGraphics::isTextureIsotropic((BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)a2 + 4)], a3);
    if ( result == 1 )
    {
      v8 = (int)v4 + 4 * v7;
      v10 = *(_DWORD *)(v8 + 188);
      v9 = (_DWORD *)(v8 + 188);
      result = v10;
      if ( !v10 )
      {
        result = ((unsigned int)BlockPos::randomSeed(v5) >> 24) & 3;
        *v9 = result;
      }
    }
  }
  return result;
}


int __fastcall BlockTessellator::resetCacheToAir(BlockTessellator *this, const BlockPos *a2, BlockSource *a3)
{
  return j_j_j__ZN21BlockTessellatorCache10resetToAirER11BlockSourceRK8BlockPos(
           (BlockTessellator *)((char *)this + 812),
           a3,
           a2);
}


signed int __fastcall BlockTessellator::tessellateTorch(BlockTessellator *this, Tessellator *a2, const Block *a3, const Vec3 *_R3, float a5, float a6, float a7)
{
  Tessellator *v11; // r9@1
  Block *v12; // r8@1
  int v13; // r1@1
  TextureUVCoordinateSet *v14; // r7@2
  BlockGraphics *v15; // r6@3
  int v16; // r0@3
  int v22; // r0@4
  signed int v24; // r0@4
  signed int v27; // r11@4
  float v30; // ST00_4@4
  float v31; // ST04_4@4
  float v34; // ST00_4@4
  float v35; // ST04_4@4
  float v36; // ST00_4@4
  float v37; // ST04_4@4
  float v45; // ST00_4@16
  float v46; // ST04_4@16
  float v48; // ST00_4@16
  float v49; // ST04_4@16
  float v50; // ST00_4@16
  float v51; // ST04_4@16
  float v55; // ST18_4@17
  float v59; // ST14_4@17
  float v60; // ST00_4@17
  float v61; // ST04_4@17
  float v63; // ST00_4@17
  float v64; // ST04_4@17
  float v66; // ST00_4@17
  float v67; // ST04_4@17
  float v69; // ST00_4@17
  float v70; // ST04_4@17
  float v72; // ST00_4@17
  float v73; // ST04_4@17
  float v74; // ST00_4@17
  float v75; // ST04_4@17
  float v76; // ST00_4@17
  float v77; // ST04_4@17
  float v80; // ST18_4@17
  float v81; // ST00_4@17
  float v82; // ST04_4@17
  float v85; // ST14_4@17
  float v86; // ST00_4@17
  float v87; // ST04_4@17
  float v89; // ST00_4@17
  float v90; // ST04_4@17
  float v92; // ST00_4@17
  float v93; // ST04_4@17
  float v95; // ST00_4@17
  float v96; // ST04_4@17
  float v98; // ST00_4@17
  float v99; // ST04_4@17
  float v100; // ST00_4@17
  float v101; // ST04_4@17
  float v102; // ST00_4@17
  float v103; // ST04_4@17
  float v105; // [sp+0h] [bp-90h]@0
  float v106; // [sp+0h] [bp-90h]@4
  float v107; // [sp+4h] [bp-8Ch]@0
  float v108; // [sp+4h] [bp-8Ch]@4
  int v109; // [sp+8h] [bp-88h]@4
  int v110; // [sp+Ch] [bp-84h]@4
  int v111; // [sp+10h] [bp-80h]@4
  int v113; // [sp+18h] [bp-78h]@4
  char v114; // [sp+1Ch] [bp-74h]@3

  __asm { VLDR            S0, [SP,#0x90+arg_8] }
  v11 = a2;
  __asm { VLDR            S31, [R3,#4] }
  v12 = a3;
  v13 = *((_BYTE *)this + 40);
  __asm
  {
    VSUB.F32        S18, S0, S31
    VLDR            S16, [R3]
    VLDR            S22, [R3,#8]
    VLDR            S30, [SP,#0x90+arg_4]
    VLDR            S17, [SP,#0x90+arg_0]
  }
  if ( _ZF )
    v15 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)a3 + 4)];
    BlockPos::BlockPos((int)&v114, (int)_R3);
    v16 = (*(int (__fastcall **)(Block *, _DWORD))(*(_DWORD *)v12 + 424))(v12, 0);
    v14 = (TextureUVCoordinateSet *)BlockGraphics::getTexture(v15, (const BlockPos *)&v114, 0, v16);
  else
    v14 = (BlockTessellator *)((char *)this + 8);
  _R5 = TextureUVCoordinateSet::offsetWidth(v14, 0.4375, 0.0);
  v111 = TextureUVCoordinateSet::offsetWidth(v14, 0.5625, 0.0);
  _R0 = TextureUVCoordinateSet::offsetHeight(v14, 0.375, 0.0);
    VMOV.F32        S0, #1.0
    VLDR            S20, =0.0001
    VMOV            S2, R0
    VADD.F32        S21, S2, S20
    VSUB.F32        S0, S0, S18
    VMOV            R6, S21
    VMOV            R1, S0
    VMOV            S0, R5
    VADD.F32        S27, S0, S20
  v113 = TextureUVCoordinateSet::offsetHeight(v14, _R1, 0.0);
  v110 = TextureUVCoordinateSet::offsetWidth(v14, 0.375, 0.0);
  v109 = TextureUVCoordinateSet::offsetWidth(v14, 0.625, 0.0);
  _R4 = TextureUVCoordinateSet::offsetHeight(v14, 0.3125, 0.0);
  v22 = TextureUVCoordinateSet::offsetHeight(v14, 0.125, _R6);
    VMOV.F32        S2, #0.5
    VLDR            S0, =0.38125
    VSTR            S18, [SP,#0x90+var_7C]
  _R6 = v22;
    VMUL.F32        S4, S17, S0
    VMUL.F32        S0, S30, S0
    VLDR            S29, =-0.0625
    VADD.F32        S23, S22, S2
    VADD.F32        S18, S16, S2
    VADD.F32        S22, S23, S0
    VADD.F32        S16, S18, S4
    VADD.F32        S26, S22, S29
    VADD.F32        S28, S16, S29
  v24 = Block::isType(v12, (const Block *)Block::mTorch);
    VLDR            S25, =0.61875
    VMOV            R10, S28
    VMOV            R8, S26
  v27 = v24;
    VADD.F32        S0, S31, S25
    VSTR            S27, [SP,#0x90+var_90]
    VSTR            S21, [SP,#0x90+var_8C]
    VMOV            R7, S0
  Tessellator::vertexUV(v11, _R10, _R7, _R8, v105, v107);
    VMOV            S0, R6
    VLDR            S24, =-0.0001
    VLDR            S19, =0.0625
    VADD.F32        S26, S0, S24
    VADD.F32        S0, S22, S19
    VSTR            S26, [SP,#0x90+var_8C]
    VMOV            R6, S0
  Tessellator::vertexUV(v11, _R10, _R7, _R6, v30, v31);
  _R0 = v111;
    VMOV            S0, R0
    VADD.F32        S28, S0, S24
    VADD.F32        S0, S16, S19
    VSTR            S28, [SP,#0x90+var_90]
    VMOV            R5, S0
  Tessellator::vertexUV(v11, _R5, _R7, _R6, v34, v35);
  Tessellator::vertexUV(v11, _R5, _R7, _R8, v36, v37);
    VLDR            S2, =0.38285
    VLDR            S0, =0.3286
    VMUL.F32        S16, S30, S25
  if ( !_ZF )
    __asm { VMOVNE.F32      S0, S2 }
  _R0 = v110;
    VMUL.F32        S6, S0, S30
    VMUL.F32        S0, S0, S17
  _R0 = v109;
    VMUL.F32        S17, S17, S25
    VADD.F32        S26, S2, S20
    VMOV            S2, R4
    VMOV            S4, R0
  _R0 = v113;
  __asm { VADD.F32        S20, S2, S20 }
    __asm { VMOVNE.F32      S26, S27 }
    VADD.F32        S2, S23, S6
    VLDR            S23, =0.68125
    VADD.F32        S0, S18, S0
    __asm { VMOVNE.F32      S23, S25 }
    VADD.F32        S22, S4, S24
    VLDR            S4, =0.0
    VMOV            S8, R0
    VMOV.F32        S18, S19
    __asm { VMOVNE.F32      S18, S4 }
  if ( v27 )
    __asm
    {
      VMOVNE.F32      S22, S28
      VMOVNE.F32      S20, S21
    }
    VADD.F32        S24, S8, S24
    VADD.F32        S30, S2, S29
    VADD.F32        S25, S2, S19
    VADD.F32        S21, S0, S19
    VADD.F32        S29, S0, S29
    VLDR            S0, [SP,#0x90+var_7C]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      VSTR            S21, [SP,#0x90+var_78]
      VMOV.F32        S21, S30
      VLDR            S0, [SP,#0x90+var_78]
      VMOV            R5, S31
      VSTR            S27, [SP,#0x90+var_90]
      VADD.F32        S30, S0, S17
      VSTR            S24, [SP,#0x90+var_8C]
      VADD.F32        S0, S25, S16
      VMOV            R8, S30
      VMOV            R7, S0
      VSTR            S0, [SP,#0x90+var_80]
    Tessellator::vertexUV(v11, _R8, _R5, _R7, v106, v108);
      VADD.F32        S19, S29, S17
      VMOV            R6, S19
    Tessellator::vertexUV(v11, _R6, _R5, _R7, v45, v46);
      VADD.F32        S27, S21, S16
      VSTR            S28, [SP,#0x90+var_90]
      VMOV            R7, S27
    Tessellator::vertexUV(v11, _R6, _R5, _R7, v48, v49);
    Tessellator::vertexUV(v11, _R8, _R5, _R7, v50, v51);
      VMOV.F32        S0, S31
      VMOV.F32        S31, S30
      VMOV.F32        S30, S21
      VLDR            S21, [SP,#0x90+var_78]
      VADD.F32        S2, S21, S17
      VADD.F32        S27, S30, S16
      VMOV.F32        S31, S2
    VADD.F32        S0, S23, S0
    VSUB.F32        S28, S30, S18
    VSTR            S26, [SP,#0x90+var_90]
    VMOV            R10, S29
    VSTR            S20, [SP,#0x90+var_8C]
    VMOV            R11, S0
    VMOV            R3, S28
  v55 = _R3;
  Tessellator::vertexUV(v11, _R10, _R11, _R3, v106, v108);
    VADD.F32        S0, S28, S16
    VLDR            S2, [SP,#0x90+arg_8]
    VMOV            R5, S19
    VMOV            R6, S2
    VSTR            S24, [SP,#0x90+var_8C]
    VMOV            R3, S0
  v59 = _R3;
  Tessellator::vertexUV(v11, _R5, _R6, _R3, v60, v61);
    VADD.F32        S28, S25, S18
    VSTR            S22, [SP,#0x90+var_90]
  Tessellator::vertexUV(v11, _R5, _R6, _R7, v63, v64);
    VMOV            R8, S28
  Tessellator::vertexUV(v11, _R10, _R11, _R8, v66, v67);
    VMOV            R5, S21
  Tessellator::vertexUV(v11, _R5, _R11, _R8, v69, v70);
    VMOV            R4, S31
  Tessellator::vertexUV(v11, _R4, _R6, _R7, v72, v73);
  Tessellator::vertexUV(v11, _R4, _R6, v59, v74, v75);
  Tessellator::vertexUV(v11, _R5, _R11, v55, v76, v77);
    VSUB.F32        S16, S29, S18
    VMOV            R10, S25
    VMOV            R1, S16
  v80 = _R1;
  Tessellator::vertexUV(v11, _R1, _R11, _R10, v81, v82);
    VADD.F32        S0, S16, S17
    VLDR            S2, [SP,#0x90+var_80]
    VMOV            R5, S2
  v85 = _R1;
  Tessellator::vertexUV(v11, _R1, _R6, _R5, v86, v87);
    VADD.F32        S16, S21, S18
  Tessellator::vertexUV(v11, _R7, _R6, _R5, v89, v90);
    VMOV            R8, S16
  Tessellator::vertexUV(v11, _R8, _R11, _R10, v92, v93);
    VMOV            R5, S30
  Tessellator::vertexUV(v11, _R8, _R11, _R5, v95, v96);
    VMOV            R4, S27
  Tessellator::vertexUV(v11, _R7, _R6, _R4, v98, v99);
  Tessellator::vertexUV(v11, v85, _R6, _R4, v100, v101);
  return Tessellator::vertexUV(v11, v80, _R11, _R5, v102, v103);
}


signed int __fastcall BlockTessellator::tessellateBlockInWorldFlat(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5, const Color *arg4a, __int64 arg4, __int64 a6)
{
  const BlockPos *v9; // r5@1
  const BlockPos *v10; // r10@1
  Tessellator *v11; // r9@1
  const Block *v12; // r11@1
  BlockOccluder *v13; // r6@4
  const Color *v14; // r7@4
  signed int v23; // r8@8
  int v24; // r1@9
  int v25; // r2@9
  BlockGraphics *v29; // r6@16
  int v30; // r7@16
  unsigned int v31; // r0@16
  int (__fastcall *v32)(const Block *, unsigned int); // r2@16
  int v33; // r0@17
  const TextureUVCoordinateSet *v34; // r0@17
  int v35; // r0@18
  int v36; // r1@22
  int v37; // r2@22
  BlockOccluder *v40; // r8@28
  BlockGraphics *v41; // r6@30
  int v42; // r7@30
  unsigned int v43; // r0@30
  int (__fastcall *v44)(const Block *, unsigned int); // r2@30
  int v45; // r0@31
  const TextureUVCoordinateSet *v46; // r0@31
  int v47; // r0@32
  int v48; // r2@36
  BlockOccluder *v51; // r8@41
  BlockGraphics *v53; // r6@43
  int v54; // r7@43
  unsigned int v55; // r0@43
  int (__fastcall *v56)(const Block *, unsigned int); // r2@43
  int v57; // r0@44
  const TextureUVCoordinateSet *v58; // r0@44
  int v59; // r0@45
  int v60; // r2@49
  BlockOccluder *v63; // r8@55
  BlockGraphics *v65; // r6@57
  int v66; // r7@57
  unsigned int v67; // r0@57
  int (__fastcall *v68)(const Block *, unsigned int); // r2@57
  int v69; // r0@58
  const TextureUVCoordinateSet *v70; // r0@58
  int v71; // r0@59
  int v72; // r1@63
  int v73; // r2@63
  BlockOccluder *v76; // r8@68
  BlockGraphics *v78; // r6@70
  int v79; // r7@70
  unsigned int v80; // r0@70
  int (__fastcall *v81)(const Block *, unsigned int); // r2@70
  int v82; // r0@71
  const TextureUVCoordinateSet *v83; // r0@71
  int v84; // r0@72
  int v85; // r1@76
  int v86; // r2@76
  BlockGraphics *v90; // r6@84
  int v91; // r7@84
  unsigned int v92; // r0@84
  int (__fastcall *v93)(const Block *, unsigned int); // r2@84
  int v94; // r0@85
  const TextureUVCoordinateSet *v95; // r0@85
  int v96; // r0@86
  BlockPos *v98; // [sp+4h] [bp-17Ch]@5
  char v99; // [sp+8h] [bp-178h]@84
  float v100; // [sp+14h] [bp-16Ch]@84
  unsigned __int8 v101; // [sp+24h] [bp-15Ch]@78
  unsigned __int8 v102; // [sp+25h] [bp-15Bh]@78
  float v103; // [sp+28h] [bp-158h]@83
  char v104; // [sp+30h] [bp-150h]@70
  float v105; // [sp+3Ch] [bp-144h]@70
  unsigned __int8 v106; // [sp+4Ch] [bp-134h]@64
  unsigned __int8 v107; // [sp+4Dh] [bp-133h]@64
  float v108; // [sp+50h] [bp-130h]@69
  char v109; // [sp+58h] [bp-128h]@57
  float v110; // [sp+64h] [bp-11Ch]@57
  unsigned __int8 v111; // [sp+74h] [bp-10Ch]@51
  unsigned __int8 v112; // [sp+75h] [bp-10Bh]@51
  float v113; // [sp+78h] [bp-108h]@56
  char v114; // [sp+80h] [bp-100h]@43
  float v115; // [sp+8Ch] [bp-F4h]@43
  unsigned __int8 v116; // [sp+9Ch] [bp-E4h]@37
  unsigned __int8 v117; // [sp+9Dh] [bp-E3h]@37
  float v118; // [sp+A0h] [bp-E0h]@42
  char v119; // [sp+A8h] [bp-D8h]@30
  unsigned __int8 v120; // [sp+B4h] [bp-CCh]@24
  unsigned __int8 v121; // [sp+B5h] [bp-CBh]@24
  float v122; // [sp+B8h] [bp-C8h]@29
  char v123; // [sp+C0h] [bp-C0h]@16
  float v124; // [sp+CCh] [bp-B4h]@16
  unsigned __int8 v125; // [sp+DCh] [bp-A4h]@10
  unsigned __int8 v126; // [sp+DDh] [bp-A3h]@10
  float v127; // [sp+E0h] [bp-A0h]@15
  int v128; // [sp+E8h] [bp-98h]@9
  int v129; // [sp+ECh] [bp-94h]@9
  int v130; // [sp+F0h] [bp-90h]@9
  unsigned __int8 v131; // [sp+F4h] [bp-8Ch]@2
  unsigned __int8 v132; // [sp+F5h] [bp-8Bh]@2
  char v133; // [sp+F8h] [bp-88h]@1

  _R4 = this;
  v9 = (BlockTessellator *)((char *)this + 812);
  v10 = a4;
  *((_BYTE *)this + 50) = 0;
  v11 = a2;
  v12 = a3;
  AmbientOcclusionCalculator::AmbientOcclusionCalculator((int)&v133, (int)a4, (int)a3, (int)this + 812);
  if ( *((_BYTE *)_R4 + 48) )
  {
    v131 = Brightness::MAX;
    v132 = Brightness::MAX;
  }
  else
    BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v131, v9, (int)v10);
  v13 = (BlockOccluder *)arg4;
  v14 = arg4a;
  if ( (const Block *)Block::mGrass == v12 )
    v98 = v9;
    _R3 = (const Color *)&Color::WHITE;
    _R0 = &unk_283E614;
    _R1 = &qword_283E618;
    _R2 = (char *)&qword_283E618 + 4;
    _R2 = (char *)arg4a + 12;
    _R1 = (__int64 *)((char *)arg4a + 8);
    _R0 = (float *)((char *)arg4a + 4);
    _R3 = arg4a;
  __asm
    VLDR            S16, [R2]
    VLDR            S18, [R1]
    VLDR            S20, [R0]
    VLDR            S22, [R3]
  if ( !_ZF )
    v23 = 0;
    if ( BlockOccluder::occludes((BlockOccluder *)arg4, 0) )
    {
LABEL_21:
      if ( BlockOccluder::occludes(v13, 1) )
        goto LABEL_35;
      goto LABEL_22;
    }
  v24 = *((_DWORD *)v10 + 1);
  v25 = *((_DWORD *)v10 + 2);
  v128 = *(_DWORD *)v10;
  v129 = v24 - 1;
  v130 = v25;
    VLDR            S0, [R4,#0x2D8]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    if ( *((_BYTE *)_R4 + 48) )
      _R0 = (unsigned __int8)Brightness::MAX;
      v125 = Brightness::MAX;
      v126 = Brightness::MAX;
      _R1 = (unsigned __int8)Brightness::MAX;
    else
      BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v125, v98, (int)&v128);
      _R0 = v125;
      _R1 = v126;
    _R0 = v131;
    _R1 = v132;
    v125 = v131;
    v126 = v132;
    VMOV            S0, R1
    VLDR            S4, =0.0625
    VMOV            S2, R0
    VCVT.F32.U32    S0, S0
    VCVT.F32.U32    S2, S2
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S4
    VSTR            S0, [SP,#0x180+var_A0]
    VSTR            S2, [SP,#0x180+var_9C]
  if ( !*((_BYTE *)_R4 + 48) )
    Tessellator::tex1((int)v11, (__int64 *)&v127);
  _R0 = AmbientOcclusionCalculator::getShadingForFace((AmbientOcclusionCalculator *)&v133, 0);
    VMOV            S0, R0
    VMUL.F32        S2, S0, S22
    VMUL.F32        S4, S0, S20
    VMUL.F32        S6, S0, S18
    VMUL.F32        S0, S0, S16
    VSTR            S2, [SP,#0x180+var_B4]
    VSTR            S4, [SP,#0x180+var_B0]
    VSTR            S6, [SP,#0x180+var_AC]
    VSTR            S0, [SP,#0x180+var_A8]
  Tessellator::color(v11, (const Color *)&v124);
  Vec3::Vec3((int)&v123, (int)v10);
  v29 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v12 + 4)];
  v30 = (*(int (__fastcall **)(const Block *, _DWORD, int))(*(_DWORD *)v12 + 428))(v12, 0, a5);
  v31 = *((_WORD *)_R4 + 24);
  v32 = *(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v12 + 424);
  if ( (_BYTE)v31 )
    v33 = v32(v12, v31 >> 8);
    v34 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture((unsigned int)v29, v33, 0);
    v35 = v32(v12, a5);
    v34 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v29, v10, v30, v35);
  BlockTessellator::tessellateFaceDown(_R4, v11, v12, (const Vec3 *)&v123, v34);
  if ( (_DWORD)arg4 )
    v23 = 1;
    goto LABEL_21;
LABEL_22:
  __asm { VMOV.F32        S0, #1.0 }
  v36 = *((_DWORD *)v10 + 1);
  v37 = *((_DWORD *)v10 + 2);
  v129 = v36 + 1;
  v130 = v37;
    VLDR            S2, [R4,#0x2E4]
    VCMPE.F32       S2, S0
  if ( _NF ^ _VF )
    v120 = v131;
    v121 = v132;
  else if ( *((_BYTE *)_R4 + 48) )
    _R0 = (unsigned __int8)Brightness::MAX;
    v120 = Brightness::MAX;
    v121 = Brightness::MAX;
    _R1 = (unsigned __int8)Brightness::MAX;
    BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v120, v98, (int)&v128);
    _R0 = v120;
    _R1 = v121;
  v40 = v13;
    VSTR            S0, [SP,#0x180+var_C8]
    VSTR            S2, [SP,#0x180+var_C4]
    Tessellator::tex1((int)v11, (__int64 *)&v122);
  Tessellator::color(v11, v14);
  Vec3::Vec3((int)&v119, (int)v10);
  v41 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v12 + 4)];
  v42 = (*(int (__fastcall **)(const Block *, signed int, int))(*(_DWORD *)v12 + 428))(v12, 1, a5);
  v43 = *((_WORD *)_R4 + 24);
  v44 = *(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v12 + 424);
  if ( (_BYTE)v43 )
    v45 = v44(v12, v43 >> 8);
    v46 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(1, (unsigned int)v41), v45, 0);
    v47 = v44(v12, a5);
    v46 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v41, v10, v42, v47);
  BlockTessellator::tessellateFaceUp(_R4, v11, v12, (const Vec3 *)&v119, v46);
  v13 = v40;
  if ( !v40 )
    goto LABEL_36;
  v23 = 1;
LABEL_35:
  if ( BlockOccluder::occludes(v13, 2) )
    goto LABEL_48;
LABEL_36:
  v48 = *((_DWORD *)v10 + 2);
  *(_QWORD *)&v128 = *(_QWORD *)v10;
  v130 = v48 - 1;
    VLDR            S0, [R4,#0x2DC]
      v116 = Brightness::MAX;
      v117 = Brightness::MAX;
      BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v116, v98, (int)&v128);
      _R0 = v116;
      _R1 = v117;
    v116 = v131;
    v117 = v132;
  v51 = v13;
    VSTR            S0, [SP,#0x180+var_E0]
    VSTR            S2, [SP,#0x180+var_DC]
    Tessellator::tex1((int)v11, (__int64 *)&v118);
  _R0 = AmbientOcclusionCalculator::getShadingForFace((AmbientOcclusionCalculator *)&v133, 2);
    VSTR            S2, [SP,#0x180+var_F4]
    VSTR            S4, [SP,#0x180+var_F0]
    VSTR            S6, [SP,#0x180+var_EC]
    VSTR            S0, [SP,#0x180+var_E8]
  Tessellator::color(v11, (const Color *)&v115);
  Vec3::Vec3((int)&v114, (int)v10);
  v53 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v12 + 4)];
  v54 = (*(int (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v12 + 428))(v12, 2, a5);
  v55 = *((_WORD *)_R4 + 24);
  v56 = *(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v12 + 424);
  if ( (_BYTE)v55 )
    v57 = v56(v12, v55 >> 8);
    v58 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(2, (unsigned int)v53), v57, 0);
    v59 = v56(v12, a5);
    v58 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v53, v10, v54, v59);
  BlockTessellator::tessellateNorth(_R4, v11, v12, (const Vec3 *)&v114, v58);
  v13 = v51;
  if ( v51 )
LABEL_48:
    if ( BlockOccluder::occludes(v13, 3) )
      goto LABEL_62;
  v60 = *((_DWORD *)v10 + 2);
  v130 = v60 + 1;
    VLDR            S2, [R4,#0x2E8]
    v111 = v131;
    v112 = v132;
    v111 = Brightness::MAX;
    v112 = Brightness::MAX;
    BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v111, v98, (int)&v128);
    _R0 = v111;
    _R1 = v112;
  v63 = v13;
    VSTR            S0, [SP,#0x180+var_108]
    VSTR            S2, [SP,#0x180+var_104]
    Tessellator::tex1((int)v11, (__int64 *)&v113);
  _R0 = AmbientOcclusionCalculator::getShadingForFace((AmbientOcclusionCalculator *)&v133, 3);
    VSTR            S2, [SP,#0x180+var_11C]
    VSTR            S4, [SP,#0x180+var_118]
    VSTR            S6, [SP,#0x180+var_114]
    VSTR            S0, [SP,#0x180+var_110]
  Tessellator::color(v11, (const Color *)&v110);
  Vec3::Vec3((int)&v109, (int)v10);
  v65 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v12 + 4)];
  v66 = (*(int (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v12 + 428))(v12, 3, a5);
  v67 = *((_WORD *)_R4 + 24);
  v68 = *(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v12 + 424);
  if ( (_BYTE)v67 )
    v69 = v68(v12, v67 >> 8);
    v70 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(3, (unsigned int)v65), v69, 0);
    v71 = v68(v12, a5);
    v70 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v65, v10, v66, v71);
  BlockTessellator::tessellateSouth(_R4, v11, v12, (const Vec3 *)&v109, v70);
  v13 = v63;
  if ( !v63 )
    goto LABEL_63;
LABEL_62:
  if ( BlockOccluder::occludes(v13, 4) )
    goto LABEL_75;
LABEL_63:
  v72 = *((_DWORD *)v10 + 1);
  v73 = *((_DWORD *)v10 + 2);
  v128 = *(_DWORD *)v10 - 1;
  v129 = v72;
  v130 = v73;
    VLDR            S0, [R4,#0x2D4]
      v106 = Brightness::MAX;
      v107 = Brightness::MAX;
      BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v106, v98, (int)&v128);
      _R0 = v106;
      _R1 = v107;
    v106 = v131;
    v107 = v132;
  v76 = v13;
    VSTR            S0, [SP,#0x180+var_130]
    VSTR            S2, [SP,#0x180+var_12C]
    Tessellator::tex1((int)v11, (__int64 *)&v108);
  _R0 = AmbientOcclusionCalculator::getShadingForFace((AmbientOcclusionCalculator *)&v133, 4);
    VSTR            S2, [SP,#0x180+var_144]
    VSTR            S4, [SP,#0x180+var_140]
    VSTR            S6, [SP,#0x180+var_13C]
    VSTR            S0, [SP,#0x180+var_138]
  Tessellator::color(v11, (const Color *)&v105);
  Vec3::Vec3((int)&v104, (int)v10);
  v78 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v12 + 4)];
  v79 = (*(int (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v12 + 428))(v12, 4, a5);
  v80 = *((_WORD *)_R4 + 24);
  v81 = *(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v12 + 424);
  if ( (_BYTE)v80 )
    v82 = v81(v12, v80 >> 8);
    v83 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(4, (unsigned int)v78), v82, 0);
    v84 = v81(v12, a5);
    v83 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v78, v10, v79, v84);
  BlockTessellator::tessellateWest(_R4, v11, v12, (const Vec3 *)&v104, v83);
  v13 = v76;
  if ( v76 )
LABEL_75:
    if ( BlockOccluder::occludes(v13, 5) )
      goto LABEL_88;
  v85 = *((_DWORD *)v10 + 1);
  v86 = *((_DWORD *)v10 + 2);
  v128 = *(_DWORD *)v10 + 1;
  v129 = v85;
  v130 = v86;
    VLDR            S2, [R4,#0x2E0]
    v101 = v131;
    v102 = v132;
    v101 = Brightness::MAX;
    v102 = Brightness::MAX;
    BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v101, v98, (int)&v128);
    _R0 = v101;
    _R1 = v102;
    VSTR            S0, [SP,#0x180+var_158]
    VSTR            S2, [SP,#0x180+var_154]
    Tessellator::tex1((int)v11, (__int64 *)&v103);
  _R0 = AmbientOcclusionCalculator::getShadingForFace((AmbientOcclusionCalculator *)&v133, 5);
    VSTR            S2, [SP,#0x180+var_16C]
    VSTR            S4, [SP,#0x180+var_168]
    VSTR            S6, [SP,#0x180+var_164]
    VSTR            S0, [SP,#0x180+var_160]
  Tessellator::color(v11, (const Color *)&v100);
  Vec3::Vec3((int)&v99, (int)v10);
  v90 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v12 + 4)];
  v91 = (*(int (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v12 + 428))(v12, 5, a5);
  v92 = *((_WORD *)_R4 + 24);
  v93 = *(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v12 + 424);
  if ( (_BYTE)v92 )
    v94 = v93(v12, v92 >> 8);
    v95 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(5, (unsigned int)v90), v94, 0);
    v96 = v93(v12, a5);
    v95 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v90, v10, v91, v96);
  BlockTessellator::tessellateEast(_R4, v11, v12, (const Vec3 *)&v99, v95);
LABEL_88:
  *((_DWORD *)_R4 + 47) = 0;
  *((_DWORD *)_R4 + 48) = 0;
  *((_DWORD *)_R4 + 49) = 0;
  *((_DWORD *)_R4 + 50) = 0;
  *((_DWORD *)_R4 + 51) = 0;
  *((_DWORD *)_R4 + 52) = 0;
  return v23;
}


int __fastcall BlockTessellator::_clearFlipFace(int result)
{
  *(_DWORD *)(result + 188) = 0;
  *(_DWORD *)(result + 192) = 0;
  *(_DWORD *)(result + 196) = 0;
  *(_DWORD *)(result + 200) = 0;
  *(_DWORD *)(result + 204) = 0;
  *(_DWORD *)(result + 208) = 0;
  return result;
}


signed int __fastcall BlockTessellator::tessellateRailInWorld(BlockTessellator *this, Tessellator *a2, const BaseRailBlock *a3, const BlockPos *a4, int a5)
{
  const BlockPos *v5; // r4@1
  BlockTessellator *v6; // r10@1
  BaseRailBlock *v7; // r11@1
  BlockGraphics *v8; // r5@1
  char v9; // r0@1
  int v10; // r0@1
  float v11; // r3@1
  float v12; // r4@1
  float v13; // r5@1
  float v14; // r6@1
  int v15; // r7@1
  int v16; // r9@1
  int *v17; // r0@1
  float v18; // r3@2
  float v19; // r4@2
  float v20; // r5@2
  float v21; // r6@2
  int v22; // r7@2
  Tessellator *v23; // r4@3
  unsigned __int64 *v24; // r0@4
  int v27; // r0@7
  Tessellator *v32; // r5@11
  float v36; // ST10_4@27
  float v37; // ST0C_4@27
  float v41; // ST08_4@27
  float v42; // ST00_4@27
  float v43; // ST04_4@27
  float v46; // ST00_4@27
  float v47; // ST04_4@27
  float v50; // ST00_4@27
  float v51; // ST04_4@27
  float v52; // ST00_4@27
  float v53; // ST04_4@27
  float v54; // ST00_4@27
  float v55; // ST04_4@27
  float v56; // ST00_4@27
  float v57; // ST04_4@27
  float v58; // ST00_4@27
  float v59; // ST04_4@27
  void *v60; // r0@27
  unsigned int *v62; // r2@29
  signed int v63; // r1@31
  float v64; // [sp+0h] [bp-B8h]@0
  float v65; // [sp+4h] [bp-B4h]@0
  const BlockPos *v66; // [sp+8h] [bp-B0h]@1
  Tessellator *v67; // [sp+Ch] [bp-ACh]@1
  unsigned int v68; // [sp+10h] [bp-A8h]@1
  unsigned __int8 v69; // [sp+14h] [bp-A4h]@6
  unsigned __int8 v70; // [sp+15h] [bp-A3h]@6
  float v71; // [sp+18h] [bp-A0h]@10
  int v72; // [sp+20h] [bp-98h]@1
  float v73; // [sp+24h] [bp-94h]@1
  float v74; // [sp+28h] [bp-90h]@1
  float v75; // [sp+2Ch] [bp-8Ch]@1
  float v76; // [sp+30h] [bp-88h]@1
  int v77; // [sp+34h] [bp-84h]@1
  int v78; // [sp+38h] [bp-80h]@1
  int v79; // [sp+3Ch] [bp-7Ch]@1
  float v80; // [sp+40h] [bp-78h]@1

  v5 = a4;
  v6 = this;
  v67 = a2;
  v66 = a4;
  v7 = a3;
  Vec3::Vec3((int)&v80, (int)a4);
  v8 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v7 + 4)];
  v68 = a5;
  v9 = (*(int (__fastcall **)(BaseRailBlock *))(*(_DWORD *)v7 + 424))(v7);
  v10 = BlockGraphics::getTexture(v8, v5, v9, 0);
  v11 = *(float *)(v10 + 4);
  v12 = *(float *)(v10 + 8);
  v13 = *(float *)(v10 + 12);
  v14 = *(float *)(v10 + 16);
  v15 = *(_DWORD *)(v10 + 20);
  v16 = v10;
  v72 = *(_DWORD *)v10;
  v73 = v11;
  v74 = v12;
  v75 = v13;
  v76 = v14;
  v77 = v15;
  v17 = sub_119C854(&v78, (int *)(v10 + 24));
  v79 = *(_DWORD *)(v16 + 28);
  if ( *((_BYTE *)v6 + 40) )
  {
    v18 = *((float *)v6 + 3);
    v19 = *((float *)v6 + 4);
    v20 = *((float *)v6 + 5);
    v21 = *((float *)v6 + 6);
    v22 = *((_DWORD *)v6 + 7);
    v72 = *((_DWORD *)v6 + 2);
    v73 = v18;
    v74 = v19;
    v75 = v20;
    v76 = v21;
    v77 = v22;
    EntityInteraction::setInteractText(v17, (int *)v6 + 8);
    v79 = *((_DWORD *)v6 + 9);
  }
  v23 = v67;
  if ( BaseRailBlock::isUsesDataBit(v7) == 1 )
    v24 = (unsigned __int64 *)Block::getBlockState(Block::mBlocks[*((_BYTE *)v7 + 4)], 32);
    v68 = (0xFu >> (4 - (*v24 >> 32))) & ((unsigned __int8)a5 >> (*v24 + 1 - (*v24 >> 32)));
  if ( *((_BYTE *)v6 + 48) )
    _R1 = (unsigned __int8)Brightness::MAX;
    v69 = Brightness::MAX;
    v70 = Brightness::MAX;
    _R2 = (unsigned __int8)Brightness::MAX;
  else
    BlockTessellatorCache::getLightColor(
      (BlockTessellatorCache *)&v69,
      (BlockTessellator *)((char *)v6 + 812),
      (int)v66);
    _R1 = v69;
    _R2 = v70;
    v27 = *((_BYTE *)v6 + 48);
  __asm
    VMOV            S0, R2
    VLDR            S16, =0.0625
    VMOV            S2, R1
    VCVT.F32.U32    S0, S0
    VCVT.F32.U32    S2, S2
    VMUL.F32        S0, S0, S16
    VMUL.F32        S2, S2, S16
    VSTR            S0, [SP,#0xB8+var_A0]
    VSTR            S2, [SP,#0xB8+var_9C]
  if ( _ZF )
    Tessellator::tex1((int)v67, (__int64 *)&v71);
  Tessellator::color(v67, (const Color *)&Color::SHADE_UP);
    VMOV.F32        S2, #1.0
    VLDR            S0, [SP,#0xB8+var_78]
    VLDR            S8, [SP,#0xB8+var_74]
  v32 = v67;
    VLDR            S28, [SP,#0xB8+var_70]
    VADD.F32        S24, S8, S16
    VLDR            S22, [SP,#0xB8+var_94]
    VLDR            S16, [SP,#0xB8+var_90]
    VLDR            S18, [SP,#0xB8+var_8C]
    VADD.F32        S6, S28, S2
    VLDR            S20, [SP,#0xB8+var_88]
    VADD.F32        S17, S0, S2
  if ( _CF && v68 != 7 )
    if ( v68 == 8 )
    {
      __asm
      {
        VMOV.F32        S26, S6
        VMOV.F32        S19, S28
        VMOV.F32        S4, S6
        VMOV.F32        S30, S17
        VMOV.F32        S21, S0
        VMOV.F32        S2, S0
        VMOV.F32        S8, S24
      }
      goto LABEL_27;
    }
    __asm
      VMOV.F32        S21, S17
      VMOV.F32        S4, S28
      VMOV.F32        S26, S28
      VMOV.F32        S19, S6
    if ( _ZF )
      __asm { VMOVEQ.F32      S26, S6 }
    __asm { VMOV.F32        S30, S0 }
      __asm { VMOVEQ.F32      S19, S28 }
    __asm { VMOV.F32        S2, S17 }
        VMOVEQ.F32      S30, S17
        VMOVEQ.F32      S2, S0
      VMOV.F32        S2, S17
      VMOV.F32        S21, S0
      VMOV.F32        S30, S0
      VMOV.F32        S0, S17
      VMOV.F32        S4, S6
      VMOV.F32        S6, S28
  switch ( v68 )
    case 2u:
    case 4u:
        VMOV.F32        S10, #1.0625; jumptable 00EA2D76 cases 2,4
        VMOV.F32        S28, S6
        VMOV.F32        S17, S0
        VADD.F32        S8, S8, S10
      break;
    case 3u:
    case 5u:
        VMOV.F32        S10, #1.0625; jumptable 00EA2D76 cases 3,5
        VADD.F32        S10, S8, S10
        VMOV.F32        S24, S10
    default:
        VMOV.F32        S28, S6 ; jumptable 00EA2D76 default case
LABEL_27:
    VMOV            R1, S2
    VMOV            R6, S8
    VMOV            R3, S4
  v36 = _R1;
  v37 = _R3;
    VSTR            S18, [SP,#0xB8+var_B8]
    VSTR            S16, [SP,#0xB8+var_B4]
  Tessellator::vertexUV(v23, _R1, _R6, _R3, v64, v65);
    VMOV            R1, S21
    VMOV            R7, S24
    VMOV            R11, S19
  v41 = _R1;
    VSTR            S20, [SP,#0xB8+var_B4]
  Tessellator::vertexUV(v23, _R1, _R7, _R11, v42, v43);
    VMOV            R8, S30
    VMOV            R4, S28
    VSTR            S22, [SP,#0xB8+var_B8]
  Tessellator::vertexUV(v32, _R8, _R7, _R4, v46, v47);
    VMOV            R10, S17
    VMOV            R9, S26
  Tessellator::vertexUV(v32, _R10, _R6, _R9, v50, v51);
  Tessellator::vertexUV(v32, _R10, _R6, _R9, v52, v53);
  Tessellator::vertexUV(v32, _R8, _R7, _R4, v54, v55);
  Tessellator::vertexUV(v32, v41, _R7, _R11, v56, v57);
  Tessellator::vertexUV(v32, v36, _R6, v37, v58, v59);
  v60 = (void *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v78 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
    else
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v60);
  return 1;
}


int __fastcall BlockTessellator::_findDepth(BlockTessellator *this, const BlockPos *a2, float _R2)
{
  BlockTessellator *v3; // r4@1
  Block *v8; // r0@3
  int *v9; // r6@3
  signed int v10; // r0@6
  int result; // r0@11
  int v12; // [sp+4h] [bp-3Ch]@1
  int v13; // [sp+8h] [bp-38h]@1
  int v14; // [sp+Ch] [bp-34h]@1

  v3 = this;
  v12 = *(_DWORD *)a2;
  __asm { VMOV            S16, R2 }
  v13 = *((_DWORD *)a2 + 1);
  __asm { VLDR            S18, =0.0 }
  v14 = *((_DWORD *)a2 + 2);
  if ( v13 >= 1 )
  {
    __asm
    {
      VMOV.F32        S20, #1.0
      VMOV.F32        S22, #20.0
    }
    do
      v8 = (Block *)BlockSource::getBlock(*((BlockSource **)v3 + 1), (const BlockPos *)&v12);
      v9 = (int *)Block::getMaterial(v8);
      if ( Material::isType(v9, 0) == 1 )
      {
        __asm { VADD.F32        S18, S18, S20 }
      }
      else if ( Material::isType(v9, 5) != 1 )
        break;
      v10 = v13;
      __asm
        VCMPE.F32       S18, S22
        VMRS            APSR_nzcv, FPSCR
      --v13;
    while ( (unsigned __int8)(_NF ^ _VF) | _ZF && v10 > 1 );
  }
  __asm
    VLDR            S0, =0.05
    VMOV.F32        S2, #1.0
    VMUL.F32        S0, S18, S0
    VADD.F32        S0, S0, S16
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S2, S0 }
  __asm { VMOV            R0, S2 }
  return result;
}


int __fastcall BlockTessellator::resetCache(BlockTessellator *this, const BlockPos *a2, BlockSource *a3)
{
  return j_j_j__ZN21BlockTessellatorCache5resetER11BlockSourceRK8BlockPos(
           (BlockTessellator *)((char *)this + 812),
           a3,
           a2);
}


void __fastcall BlockTessellator::_preparePolyCross(BlockTessellator *this, Tessellator *a2, const BlockPos *a3, const Block *a4, int a5)
{
  BlockTessellator::_preparePolyCross(this, a2, a3, a4, a5);
}


void __fastcall BlockTessellator::tessellateFaceUp(BlockTessellator *this, Tessellator *a2, const Block *a3, const Vec3 *a4, const TextureUVCoordinateSet *a5)
{
  const TextureUVCoordinateSet *v6; // r4@1
  const Block *v7; // r8@1
  Tessellator *v9; // r10@1
  float v10; // r1@3
  float v11; // r3@3
  int v12; // r5@3
  int v13; // r6@3
  int v14; // r7@3
  _BOOL4 v22; // r0@10
  int v24; // r0@15
  int v37; // r0@23
  int v38; // r0@25
  float v56; // ST00_4@35
  float v57; // ST04_4@35
  float v59; // ST00_4@35
  float v60; // ST04_4@35
  float v61; // ST00_4@35
  float v62; // ST04_4@35
  void *v63; // r0@36
  unsigned int *v64; // r2@38
  signed int v65; // r1@40
  float v66; // [sp+0h] [bp-138h]@0
  float v67; // [sp+0h] [bp-138h]@28
  float v68; // [sp+0h] [bp-138h]@30
  float v69; // [sp+0h] [bp-138h]@32
  float v70; // [sp+4h] [bp-134h]@0
  float v71; // [sp+4h] [bp-134h]@28
  float v72; // [sp+4h] [bp-134h]@30
  float v73; // [sp+4h] [bp-134h]@32
  float v87; // [sp+3Ch] [bp-FCh]@33
  float v88; // [sp+44h] [bp-F4h]@32
  float v89; // [sp+54h] [bp-E4h]@31
  float v90; // [sp+5Ch] [bp-DCh]@30
  float v91; // [sp+6Ch] [bp-CCh]@29
  float v92; // [sp+74h] [bp-C4h]@28
  float v93; // [sp+84h] [bp-B4h]@27
  float v94; // [sp+8Ch] [bp-ACh]@26
  char v95; // [sp+9Ch] [bp-9Ch]@9
  int v96; // [sp+A8h] [bp-90h]@3
  float v97; // [sp+ACh] [bp-8Ch]@3
  float v98; // [sp+B0h] [bp-88h]@3
  int v99; // [sp+B4h] [bp-84h]@3
  int v100; // [sp+B8h] [bp-80h]@3
  int v101; // [sp+BCh] [bp-7Ch]@3
  int v102; // [sp+C0h] [bp-78h]@3
  int v103; // [sp+C4h] [bp-74h]@3

  _R11 = this;
  v6 = a5;
  v7 = a3;
  _R9 = a4;
  v9 = a2;
  if ( *((_BYTE *)this + 40) )
    v6 = (BlockTessellator *)((char *)this + 8);
  v10 = *((float *)v6 + 1);
  v11 = *((float *)v6 + 2);
  v12 = *((_DWORD *)v6 + 3);
  v13 = *((_DWORD *)v6 + 4);
  v14 = *((_DWORD *)v6 + 5);
  v96 = *(_DWORD *)v6;
  v97 = v10;
  v98 = v11;
  v99 = v12;
  v100 = v13;
  v101 = v14;
  sub_119C854(&v102, (int *)v6 + 6);
  v103 = *((_DWORD *)v6 + 7);
  Tessellator::quadFacing(v9, 1);
  _R7 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 181), 0.0);
  _R6 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 184), 0.0);
  _R4 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 183), 0.0);
  _R0 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 186), 0.0);
  __asm
  {
    VLDR            S0, [R11,#0x2D4]
    VMOV            S16, R7
    VMOV            S28, R6
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    goto LABEL_48;
    VMOV.F32        S0, #1.0
    VLDR            S2, [R11,#0x2E0]
    VCMPE.F32       S2, S0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
LABEL_48:
    __asm
    {
      VSUB.F32        S0, S28, S16
      VLDR            S16, [SP,#0x138+var_8C]
      VADD.F32        S28, S0, S16
    }
    VLDR            S0, [R11,#0x2DC]
    VMOV            S18, R4
    VMOV            S24, R0
    goto LABEL_49;
    VLDR            S2, [R11,#0x2E8]
LABEL_49:
      VSUB.F32        S0, S24, S18
      VLDR            S18, [SP,#0x138+var_88]
      VADD.F32        S24, S0, S18
  BlockPos::BlockPos((int)&v95, (int)_R9);
  if ( !*((_BYTE *)_R11 + 48) )
    v22 = BlockGraphics::isTextureIsotropic((BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v7 + 4)], 1);
    _ZF = v22 == 1;
    if ( v22 == 1 )
      _ZF = *((_DWORD *)_R11 + 48) == 0;
    if ( _ZF )
      *((_DWORD *)_R11 + 48) = ((unsigned int)BlockPos::randomSeed((BlockPos *)&v95) >> 24) & 3;
  v24 = *((_DWORD *)_R11 + 48);
  if ( v24 == 3 )
    _R4 = TextureUVCoordinateSet::inverseOffsetWidth((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 181), 0.0);
    _R6 = TextureUVCoordinateSet::inverseOffsetWidth((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 184), 0.0);
    _R7 = TextureUVCoordinateSet::inverseOffsetHeight((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 183), 0.0);
    _R0 = TextureUVCoordinateSet::inverseOffsetHeight((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 186), 0.0);
      VMOV            S0, R4
      VMOV            S28, R6
      VMOV            S18, R7
      VMOV            S24, R0
      VMOV.F32        S6, S28
      VMOV.F32        S8, S18
      VMOV.F32        S2, S24
      VMOV.F32        S4, S0
    goto LABEL_23;
  if ( v24 == 2 )
    _R4 = TextureUVCoordinateSet::inverseOffsetWidth((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 186), 0.0);
    _R6 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 181), 0.0);
    _R7 = TextureUVCoordinateSet::inverseOffsetWidth((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 183), 0.0);
    _R0 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 184), 0.0);
      VMOV            S28, R4
      VMOV            S18, R6
      VMOV            S6, R7
    goto LABEL_21;
    VMOV.F32        S0, S16
    VMOV.F32        S6, S28
    VMOV.F32        S8, S18
    VMOV.F32        S2, S24
    VMOV.F32        S4, S0
  if ( _ZF )
    _R4 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 183), 0.0);
    _R6 = TextureUVCoordinateSet::inverseOffsetHeight((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 184), 0.0);
    _R7 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 186), 0.0);
    _R0 = TextureUVCoordinateSet::inverseOffsetHeight((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 181), 0.0);
      VMOV            S6, R4
      VMOV            S24, R6
      VMOV            S28, R7
      VMOV            S18, R0
LABEL_21:
      VMOV.F32        S0, S28
      VMOV.F32        S8, S24
      VMOV.F32        S2, S18
      VMOV.F32        S4, S6
LABEL_23:
  v37 = *((_BYTE *)_R11 + 1);
    VLDR            S16, [R11,#0x2F0]
    VLDR            S22, [R11,#0x2E0]
    VLDR            S30, [R11,#0x2E4]
    VLDR            S21, [R11,#0x2E8]
    VLDR            S17, [R11,#0x2DC]
    VLDR            S19, [R11,#0x2D4]
    VLDR            S20, [R9]
    VLDR            S23, [R9,#4]
    VLDR            S26, [R9,#8]
    VSTR            S8, [SP,#0x138+var_11C]
    VSTR            S6, [SP,#0x138+var_118]
    VSTR            S4, [SP,#0x138+var_124]
    VSTR            S2, [SP,#0x138+var_130]
    VSTR            S0, [SP,#0x138+var_12C]
  if ( !_ZF )
    Tessellator::normal(v9, (const Vec3 *)&Vec3::UNIT_Y);
  __asm { VMUL.F32        S0, S21, S16 }
  v38 = *((_BYTE *)_R11 + 50);
    VMUL.F32        S6, S17, S16
    VMUL.F32        S2, S30, S16
    VMUL.F32        S4, S22, S16
    VMUL.F32        S8, S19, S16
    VADD.F32        S21, S0, S26
    VADD.F32        S0, S26, S6
    VADD.F32        S25, S2, S23
    VADD.F32        S27, S4, S20
    VSTR            S0, [SP,#0x138+var_120]
    VADD.F32        S0, S20, S8
    VSTR            S0, [SP,#0x138+var_128]
      VMOV            R4, S27
      VMOV            R5, S25
      VMOV            R6, S21
      VSTR            S28, [SP,#0x138+var_138]
      VSTR            S24, [SP,#0x138+var_134]
    Tessellator::vertexUV(v9, _R4, _R5, _R6, v66, v70);
      VLDR            S0, [SP,#0x138+var_120]
      VMOV            R7, S0
      VLDR            S0, [SP,#0x138+var_118]
      VSTR            S0, [SP,#0x138+var_138]
      VLDR            S0, [SP,#0x138+var_11C]
      VSTR            S0, [SP,#0x138+var_134]
    Tessellator::vertexUV(v9, _R4, _R5, _R7, v56, v57);
      VLDR            S0, [SP,#0x138+var_128]
      VMOV            R4, S0
      VLDR            S0, [SP,#0x138+var_124]
      VSTR            S18, [SP,#0x138+var_134]
    Tessellator::vertexUV(v9, _R4, _R5, _R7, v59, v60);
      VLDR            S0, [SP,#0x138+var_12C]
      VLDR            S0, [SP,#0x138+var_130]
    Tessellator::vertexUV(v9, _R4, _R5, _R6, v61, v62);
  else
      VMOV.F32        S1, #1.0
      VLDR            S0, [R11,#0x2E0]
      VLDR            S4, [R11,#0x48]
      VLDR            S6, [R11,#0x58]
      VSTR            S4, [SP,#0x138+var_108]
      VMUL.F32        S4, S0, S4
      VSTR            S6, [SP,#0x138+var_104]
      VLDR            S8, [R11,#0x38]
      VLDR            S12, [R11,#0x3C]
      VSUB.F32        S2, S1, S0
      VLDR            S29, [R11,#0x68]
      VLDR            S31, [R11,#0x6C]
      VLDR            S20, [R11,#0x4C]
      VLDR            S22, [R11,#0x5C]
      VSTR            S8, [SP,#0x138+var_110]
      VMUL.F32        S8, S0, S8
      VSTR            S12, [SP,#0x138+var_10C]
      VMUL.F32        S12, S0, S12
      VMUL.F32        S5, S0, S20
      VLDR            S10, [R11,#0x2E8]
      VMUL.F32        S6, S2, S6
      VLDR            S9, [R11,#0x34]
      VMUL.F32        S14, S2, S29
      VLDR            S23, [R11,#0x64]
      VMUL.F32        S3, S2, S31
      VLDR            S26, [R11,#0x44]
      VSUB.F32        S1, S1, S10
      VLDR            S30, [R11,#0x54]
      VLDR            S7, [R11,#0x40]
      VLDR            S16, [R11,#0x70]
      VLDR            S17, [R11,#0x50]
      VADD.F32        S4, S6, S4
      VLDR            S19, [R11,#0x60]
      VMUL.F32        S6, S2, S22
      VSTR            S9, [SP,#0x138+var_114]
      VADD.F32        S12, S3, S12
      VSTR            S7, [SP,#0x138+var_100]
      VADD.F32        S8, S14, S8
      VMUL.F32        S14, S0, S9
      VMUL.F32        S3, S2, S23
      VMUL.F32        S4, S4, S10
      VADD.F32        S6, S6, S5
      VMUL.F32        S12, S12, S1
      VMUL.F32        S8, S8, S1
      VADD.F32        S14, S3, S14
      VMUL.F32        S6, S6, S10
      VADD.F32        S4, S4, S8
      VMUL.F32        S8, S0, S26
      VMUL.F32        S14, S14, S1
      VADD.F32        S6, S6, S12
      VMUL.F32        S12, S2, S30
      VADD.F32        S8, S12, S8
      VMUL.F32        S12, S0, S7
      VMUL.F32        S0, S0, S17
      VMUL.F32        S8, S8, S10
      VADD.F32        S8, S8, S14
      VMUL.F32        S14, S2, S16
      VMUL.F32        S2, S2, S19
      VSTR            S8, [SP,#0x138+var_AC]
      VADD.F32        S12, S14, S12
      VSTR            S4, [SP,#0x138+var_A8]
      VADD.F32        S0, S2, S0
      VSTR            S6, [SP,#0x138+var_A4]
      VMUL.F32        S0, S0, S10
      VADD.F32        S0, S0, S12
      VSTR            S0, [SP,#0x138+var_A0]
    Tessellator::color(v9, (const Color *)&v94);
    _R0 = *((_BYTE *)_R11 + 182);
    _R1 = *((_BYTE *)_R11 + 183);
      VLDR            S4, =0.0625
      VMOV            S2, R0
      VMOV            S0, R1
      VCVT.F32.U32    S0, S0
      VCVT.F32.U32    S2, S2
      VMUL.F32        S0, S0, S4
      VMUL.F32        S2, S2, S4
      VSTR            S0, [SP,#0x138+var_B4]
      VSTR            S2, [SP,#0x138+var_B0]
    if ( !*((_BYTE *)_R11 + 48) )
      Tessellator::tex1((int)v9, (__int64 *)&v93);
      VMOV            R7, S27
      VMOV            R9, S25
      VMOV            R8, S21
    Tessellator::vertexUV(v9, _R7, _R9, _R8, v66, v70);
      VMOV.F32        S4, #1.0
      VLDR            S2, [R11,#0x2E0]
      VLDR            S6, [SP,#0x138+var_114]
      VLDR            S14, [SP,#0x138+var_110]
      VMUL.F32        S10, S2, S26
      VLDR            S3, [SP,#0x138+var_108]
      VLDR            S7, [SP,#0x138+var_10C]
      VMUL.F32        S14, S2, S14
      VLDR            S15, [SP,#0x138+var_100]
      VMUL.F32        S3, S2, S3
      VLDR            S5, [SP,#0x138+var_104]
      VMUL.F32        S7, S2, S7
      VMOV.F32        S21, S4
      VLDR            S0, [R11,#0x2DC]
      VMUL.F32        S11, S2, S20
      VMUL.F32        S15, S2, S15
      VSUB.F32        S4, S21, S2
      VMUL.F32        S2, S2, S17
      VSUB.F32        S28, S21, S0
      VMUL.F32        S8, S4, S23
      VMUL.F32        S12, S4, S30
      VMUL.F32        S1, S4, S29
      VMUL.F32        S5, S4, S5
      VMUL.F32        S9, S4, S31
      VMUL.F32        S13, S4, S22
      VMUL.F32        S24, S4, S16
      VMUL.F32        S4, S4, S19
      VADD.F32        S6, S8, S6
      VADD.F32        S8, S12, S10
      VADD.F32        S10, S1, S14
      VADD.F32        S12, S5, S3
      VADD.F32        S14, S9, S7
      VADD.F32        S1, S13, S11
      VADD.F32        S2, S4, S2
      VADD.F32        S3, S24, S15
      VMUL.F32        S4, S6, S28
      VMUL.F32        S6, S8, S0
      VMUL.F32        S8, S10, S28
      VMUL.F32        S10, S12, S0
      VMUL.F32        S12, S14, S28
      VMUL.F32        S14, S1, S0
      VMUL.F32        S0, S2, S0
      VMUL.F32        S1, S3, S28
      VADD.F32        S2, S6, S4
      VADD.F32        S4, S10, S8
      VADD.F32        S6, S14, S12
      VADD.F32        S0, S0, S1
      VSTR            S2, [SP,#0x138+var_C4]
      VSTR            S4, [SP,#0x138+var_C0]
      VSTR            S6, [SP,#0x138+var_BC]
      VSTR            S0, [SP,#0x138+var_B8]
    Tessellator::color(v9, (const Color *)&v92);
    _R0 = *((_BYTE *)_R11 + 180);
    _R1 = *((_BYTE *)_R11 + 181);
      VMOV.F32        S25, S4
      VSTR            S0, [SP,#0x138+var_CC]
      VSTR            S2, [SP,#0x138+var_C8]
      Tessellator::tex1((int)v9, (__int64 *)&v91);
      VMOV            R6, S0
    Tessellator::vertexUV(v9, _R7, _R9, _R6, v67, v71);
      VLDR            S0, [R11,#0x2D4]
      VSUB.F32        S4, S21, S0
      VMUL.F32        S6, S0, S6
      VMUL.F32        S10, S0, S26
      VMUL.F32        S14, S0, S14
      VMUL.F32        S3, S0, S3
      VMUL.F32        S7, S0, S7
      VLDR            S2, [R11,#0x2DC]
      VMUL.F32        S11, S0, S20
      VMUL.F32        S15, S0, S15
      VSUB.F32        S28, S21, S2
      VADD.F32        S0, S4, S0
      VMUL.F32        S6, S8, S2
      VMUL.F32        S10, S12, S2
      VMUL.F32        S14, S1, S2
      VMUL.F32        S0, S0, S2
      VSTR            S2, [SP,#0x138+var_DC]
      VSTR            S4, [SP,#0x138+var_D8]
      VSTR            S6, [SP,#0x138+var_D4]
      VSTR            S0, [SP,#0x138+var_D0]
    Tessellator::color(v9, (const Color *)&v90);
    _R0 = *((_BYTE *)_R11 + 186);
    __asm { VMOV.F32        S24, S25 }
    _R1 = *((_BYTE *)_R11 + 187);
      VMUL.F32        S0, S0, S25
      VMUL.F32        S2, S2, S25
      VSTR            S0, [SP,#0x138+var_E4]
      VSTR            S2, [SP,#0x138+var_E0]
      Tessellator::tex1((int)v9, (__int64 *)&v89);
    Tessellator::vertexUV(v9, _R7, _R9, _R6, v68, v72);
      VLDR            S2, [R11,#0x2E8]
      VMUL.F32        S16, S4, S16
      VSUB.F32        S18, S21, S2
      VADD.F32        S3, S16, S15
      VMUL.F32        S4, S6, S18
      VMUL.F32        S8, S10, S18
      VMUL.F32        S12, S14, S18
      VMUL.F32        S1, S3, S18
      VSTR            S2, [SP,#0x138+var_F4]
      VSTR            S4, [SP,#0x138+var_F0]
      VSTR            S6, [SP,#0x138+var_EC]
      VSTR            S0, [SP,#0x138+var_E8]
    Tessellator::color(v9, (const Color *)&v88);
    _R0 = *((_BYTE *)_R11 + 184);
    _R1 = *((_BYTE *)_R11 + 185);
      VMUL.F32        S0, S0, S24
      VMUL.F32        S2, S2, S24
      VSTR            S0, [SP,#0x138+var_FC]
      VSTR            S2, [SP,#0x138+var_F8]
      Tessellator::tex1((int)v9, (__int64 *)&v87);
    Tessellator::vertexUV(v9, _R7, _R9, _R8, v69, v73);
  v63 = (void *)(v102 - 12);
  if ( (int *)(v102 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v102 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
    else
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v63);
}


signed int __fastcall BlockTessellator::tessellateFireInWorld(int a1, Tessellator *a2, int a3, const BlockPos *a4)
{
  int v4; // r11@1
  Tessellator *v5; // r4@1
  BlockGraphics *v7; // r6@1
  int v16; // r0@3
  int v17; // r3@7
  int v18; // r7@7
  BlockSource *v19; // r0@7
  FireBlock *v20; // r6@7
  int v21; // r2@8
  int v22; // r3@8
  BlockSource *v23; // r1@8
  float v30; // ST00_4@9
  float v31; // ST04_4@9
  float v34; // ST00_4@9
  float v35; // ST04_4@9
  float v38; // ST00_4@9
  float v39; // ST04_4@9
  float v43; // ST00_4@9
  float v44; // ST04_4@9
  float v48; // ST00_4@9
  float v49; // ST04_4@9
  float v52; // ST00_4@9
  float v53; // ST04_4@9
  float v56; // ST00_4@9
  float v57; // ST04_4@9
  float v61; // ST00_4@9
  float v62; // ST04_4@9
  float v66; // ST00_4@9
  float v67; // ST04_4@9
  float v70; // ST00_4@9
  float v71; // ST04_4@9
  float v74; // ST00_4@9
  float v75; // ST04_4@9
  float v79; // ST00_4@9
  float v80; // ST04_4@9
  float v84; // ST00_4@9
  float v85; // ST04_4@9
  float v88; // ST00_4@9
  float v89; // ST04_4@9
  float v92; // ST00_4@9
  float v93; // ST04_4@9
  float v97; // ST00_4@9
  float v98; // ST04_4@9
  float v102; // ST00_4@9
  float v103; // ST04_4@9
  float v106; // ST00_4@9
  float v107; // ST04_4@9
  float v110; // ST00_4@9
  float v111; // ST04_4@9
  float v115; // ST00_4@9
  float v116; // ST04_4@9
  float v120; // ST00_4@9
  float v121; // ST04_4@9
  float v124; // ST00_4@9
  float v125; // ST04_4@9
  float v128; // ST00_4@9
  float v129; // ST04_4@9
  float v133; // ST00_4@9
  float v134; // ST04_4@9
  float v138; // ST00_4@9
  float v139; // ST04_4@9
  float v142; // ST00_4@9
  float v143; // ST04_4@9
  float v146; // ST00_4@9
  float v147; // ST04_4@9
  float v151; // ST00_4@9
  float v152; // ST04_4@9
  float v155; // ST00_4@9
  float v156; // ST04_4@9
  float v159; // ST00_4@9
  float v160; // ST04_4@9
  Tessellator *v163; // r0@10
  signed int v166; // r7@13
  signed int v167; // r9@13
  signed int v168; // r6@13
  BlockSource *v169; // r1@15
  signed int v170; // r0@15
  float v177; // ST00_4@18
  float v178; // ST04_4@18
  float v182; // ST00_4@18
  float v183; // ST04_4@18
  float v187; // ST00_4@18
  float v188; // ST04_4@18
  float v192; // ST00_4@18
  float v193; // ST04_4@18
  float v197; // ST00_4@18
  float v198; // ST04_4@18
  float v202; // ST00_4@18
  float v203; // ST04_4@18
  float v207; // ST00_4@18
  float v208; // ST04_4@18
  int v209; // r2@19
  int v210; // r3@19
  BlockSource *v211; // r1@19
  float v218; // ST00_4@20
  float v219; // ST04_4@20
  float v223; // ST00_4@20
  float v224; // ST04_4@20
  float v228; // ST00_4@20
  float v229; // ST04_4@20
  float v233; // ST00_4@20
  float v234; // ST04_4@20
  float v238; // ST00_4@20
  float v239; // ST04_4@20
  float v243; // ST00_4@20
  float v244; // ST04_4@20
  float v248; // ST00_4@20
  float v249; // ST04_4@20
  int v250; // r2@21
  int v251; // r3@21
  BlockSource *v252; // r1@21
  float v259; // ST00_4@22
  float v260; // ST04_4@22
  float v264; // ST00_4@22
  float v265; // ST04_4@22
  float v269; // ST00_4@22
  float v270; // ST04_4@22
  float v274; // ST00_4@22
  float v275; // ST04_4@22
  float v279; // ST00_4@22
  float v280; // ST04_4@22
  float v284; // ST00_4@22
  float v285; // ST04_4@22
  float v289; // ST00_4@22
  float v290; // ST04_4@22
  int v291; // r2@23
  int v292; // r3@23
  BlockSource *v293; // r1@23
  float v300; // ST00_4@24
  float v301; // ST04_4@24
  float v305; // ST00_4@24
  float v306; // ST04_4@24
  float v310; // ST00_4@24
  float v311; // ST04_4@24
  float v315; // ST00_4@24
  float v316; // ST04_4@24
  float v320; // ST00_4@24
  float v321; // ST04_4@24
  float v325; // ST00_4@24
  float v326; // ST04_4@24
  float v330; // ST00_4@24
  float v331; // ST04_4@24
  int v332; // r2@25
  int v333; // r3@25
  BlockSource *v334; // r1@25
  float v344; // ST00_4@28
  float v345; // ST04_4@28
  float v348; // ST00_4@28
  float v349; // ST04_4@28
  float v352; // ST00_4@28
  float v353; // ST04_4@28
  float v356; // ST00_4@28
  float v357; // ST04_4@28
  float v360; // ST00_4@28
  float v361; // ST04_4@28
  float v364; // ST00_4@28
  float v365; // ST04_4@28
  float v371; // ST00_4@27
  float v372; // ST04_4@27
  float v375; // ST00_4@27
  float v376; // ST04_4@27
  float v379; // ST00_4@27
  float v380; // ST04_4@27
  float v383; // ST00_4@27
  float v384; // ST04_4@27
  float v387; // ST00_4@27
  float v388; // ST04_4@27
  float v391; // ST00_4@27
  float v392; // ST04_4@27
  float v393; // [sp+0h] [bp-D8h]@0
  float v394; // [sp+0h] [bp-D8h]@9
  float v395; // [sp+4h] [bp-D4h]@0
  float v396; // [sp+4h] [bp-D4h]@9
  FireBlock *v397; // [sp+Ch] [bp-CCh]@13
  int v398; // [sp+10h] [bp-C8h]@25
  int v399; // [sp+14h] [bp-C4h]@25
  int v400; // [sp+18h] [bp-C0h]@25
  int v401; // [sp+1Ch] [bp-BCh]@23
  int v402; // [sp+20h] [bp-B8h]@23
  int v403; // [sp+24h] [bp-B4h]@23
  int v404; // [sp+28h] [bp-B0h]@21
  int v405; // [sp+2Ch] [bp-ACh]@21
  int v406; // [sp+30h] [bp-A8h]@21
  int v407; // [sp+34h] [bp-A4h]@19
  int v408; // [sp+38h] [bp-A0h]@19
  int v409; // [sp+3Ch] [bp-9Ch]@19
  int v410; // [sp+40h] [bp-98h]@15
  signed int v411; // [sp+44h] [bp-94h]@15
  int v412; // [sp+48h] [bp-90h]@15
  int v413; // [sp+4Ch] [bp-8Ch]@8
  int v414; // [sp+50h] [bp-88h]@8
  int v415; // [sp+54h] [bp-84h]@8
  int v416; // [sp+58h] [bp-80h]@7
  int v417; // [sp+5Ch] [bp-7Ch]@7
  int v418; // [sp+60h] [bp-78h]@7
  unsigned __int8 v419; // [sp+64h] [bp-74h]@2
  unsigned __int8 v420; // [sp+65h] [bp-73h]@2
  float v421; // [sp+68h] [bp-70h]@6

  v4 = a1;
  v5 = a2;
  _R5 = a4;
  v7 = (BlockGraphics *)BlockGraphics::mBlocks[*(_BYTE *)(a3 + 4)];
  _R10 = BlockGraphics::getTexture(v7, a4, 1, 0);
  _R8 = BlockGraphics::getTexture(v7, _R5, 0, 0);
  __asm
  {
    VLDR            S20, [R10,#4]
    VLDR            S16, [R10,#8]
    VLDR            S26, [R10,#0xC]
    VLDR            S18, [R10,#0x10]
  }
  Tessellator::color(v5, (const Color *)&Color::WHITE);
  if ( *(_BYTE *)(v4 + 48) )
    _R1 = (unsigned __int8)Brightness::MAX;
    v419 = Brightness::MAX;
    v420 = Brightness::MAX;
    _R2 = (unsigned __int8)Brightness::MAX;
  else
    BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v419, (const BlockPos *)(v4 + 812), (int)_R5);
    _R1 = v419;
    _R2 = v420;
    v16 = *(_BYTE *)(v4 + 48);
    VMOV            S0, R2
    VLDR            S22, =0.0625
    VMOV            S2, R1
    VCVT.F32.U32    S0, S0
    VCVT.F32.U32    S2, S2
    VMUL.F32        S0, S0, S22
    VMUL.F32        S2, S2, S22
    VSTR            S0, [SP,#0xD8+var_70]
    VSTR            S2, [SP,#0xD8+var_6C]
  if ( _ZF )
    Tessellator::tex1((int)v5, (__int64 *)&v421);
  v17 = *((_DWORD *)_R5 + 1);
  v18 = *((_DWORD *)_R5 + 2);
  v19 = *(BlockSource **)(v4 + 4);
  v416 = *(_DWORD *)_R5;
  v20 = (FireBlock *)Block::mFire;
  v417 = v17 - 1;
  v418 = v18;
  if ( BlockSource::isSolidBlockingBlock(v19, (const BlockPos *)&v416)
    || (v21 = *((_DWORD *)_R5 + 1),
        v22 = *((_DWORD *)_R5 + 2),
        v23 = *(BlockSource **)(v4 + 4),
        v413 = *(_DWORD *)_R5,
        v414 = v21 - 1,
        v415 = v22,
        FireBlock::canBurn(v20, v23, (const BlockPos *)&v413) == 1) )
    __asm
    {
      VLDR            S0, [R5]
      VMOV.F32        S24, #1.0
      VLDR            S2, [R5,#4]
      VLDR            S4, [R5,#8]
      VCVT.F32.S32    S19, S0
      VCVT.F32.S32    S0, S2
      VLDR            S30, =0.2
      VCVT.F32.S32    S28, S4
      VLDR            S22, =1.4
      VSTR            S26, [SP,#0xD8+var_D8]
      VSTR            S16, [SP,#0xD8+var_D4]
      VADD.F32        S2, S19, S30
      VADD.F32        S0, S0, S22
      VADD.F32        S4, S28, S24
      VMOV            R6, S2
      VMOV            R2, S0
      VMOV            R3, S4
    }
    Tessellator::vertexUV(v5, _R6, _R2, _R3, v393, v395);
      VLDR            S2, [R5,#8]
      VLDR            S0, [R5,#4]
      VCVT.F32.S32    S2, S2
      VLDR            S17, =0.7
      VCVT.F32.S32    S0, S0
      VADD.F32        S4, S19, S17
      VSTR            S18, [SP,#0xD8+var_D4]
      VADD.F32        S2, S2, S24
      VMOV            R7, S4
      VMOV            R3, S2
    Tessellator::vertexUV(v5, _R7, _R2, _R3, v30, v31);
      VSTR            S20, [SP,#0xD8+var_D8]
    Tessellator::vertexUV(v5, _R7, _R2, _R3, v34, v35);
    Tessellator::vertexUV(v5, _R6, _R2, _R3, v38, v39);
      VLDR            S23, =0.8
      VADD.F32        S4, S19, S23
      VMOV            R6, S4
    Tessellator::vertexUV(v5, _R6, _R2, _R3, v43, v44);
      VLDR            S21, =0.3
      VADD.F32        S4, S19, S21
    Tessellator::vertexUV(v5, _R7, _R2, _R3, v48, v49);
    Tessellator::vertexUV(v5, _R7, _R2, _R3, v52, v53);
    Tessellator::vertexUV(v5, _R6, _R2, _R3, v56, v57);
      VADD.F32        S4, S28, S23
      VLDR            S16, [R8,#8]
      VLDR            S18, [R8,#0xC]
      VLDR            S26, [R8,#4]
      VLDR            S20, [R8,#0x10]
      VSTR            S18, [SP,#0xD8+var_D8]
      VADD.F32        S0, S0, S24
      VADD.F32        S2, S2, S22
      VMOV            R1, S0
      VMOV            R2, S2
    Tessellator::vertexUV(v5, _R1, _R2, _R6, v61, v62);
      VADD.F32        S4, S28, S21
      VSTR            S20, [SP,#0xD8+var_D4]
    Tessellator::vertexUV(v5, _R1, _R2, _R7, v66, v67);
    Tessellator::vertexUV(v5, _R1, _R2, _R7, v70, v71);
    Tessellator::vertexUV(v5, _R1, _R2, _R6, v74, v75);
      VADD.F32        S4, S28, S30
    Tessellator::vertexUV(v5, _R1, _R2, _R6, v79, v80);
      VADD.F32        S4, S28, S17
    Tessellator::vertexUV(v5, _R1, _R2, _R7, v84, v85);
    Tessellator::vertexUV(v5, _R1, _R2, _R7, v88, v89);
    Tessellator::vertexUV(v5, _R1, _R2, _R6, v92, v93);
      VCVT.F32.S32    S17, S0
      VLDR            S28, =0.1
      VCVT.F32.S32    S30, S4
      VADD.F32        S2, S17, S28
      VMOV            R8, S30
    Tessellator::vertexUV(v5, _R6, _R2, _R8, v97, v98);
      VMOV            R7, S17
    Tessellator::vertexUV(v5, _R7, _R2, _R3, v102, v103);
    Tessellator::vertexUV(v5, _R7, _R2, _R3, v106, v107);
    Tessellator::vertexUV(v5, _R6, _R2, _R3, v110, v111);
      VLDR            S19, =0.9
      VADD.F32        S4, S17, S19
    Tessellator::vertexUV(v5, _R6, _R2, _R3, v115, v116);
      VADD.F32        S4, S17, S24
    Tessellator::vertexUV(v5, _R7, _R2, _R3, v120, v121);
    Tessellator::vertexUV(v5, _R7, _R2, _R3, v124, v125);
    Tessellator::vertexUV(v5, _R6, _R2, _R3, v128, v129);
      VADD.F32        S4, S30, S19
      VLDR            S26, [R10,#4]
      VLDR            S16, [R10,#8]
      VLDR            S18, [R10,#0xC]
      VLDR            S20, [R10,#0x10]
    Tessellator::vertexUV(v5, _R1, _R2, _R6, v133, v134);
      VADD.F32        S4, S30, S24
    Tessellator::vertexUV(v5, _R1, _R2, _R7, v138, v139);
    Tessellator::vertexUV(v5, _R1, _R2, _R7, v142, v143);
    Tessellator::vertexUV(v5, _R1, _R2, _R6, v146, v147);
      VADD.F32        S4, S30, S28
    Tessellator::vertexUV(v5, _R1, _R2, _R6, v151, v152);
    Tessellator::vertexUV(v5, _R1, _R2, _R8, v155, v156);
    Tessellator::vertexUV(v5, _R1, _R2, _R8, v159, v160);
    goto LABEL_10;
  v397 = v20;
  v167 = *(_QWORD *)_R5 >> 32;
  v166 = *(_QWORD *)_R5;
  v168 = *((_DWORD *)_R5 + 2);
  if ( ((_BYTE)v167 + (unsigned __int8)*(_QWORD *)_R5 + (_BYTE)v168) & 1 )
      VLDRNE          S20, [R8,#4]
      VLDRNE          S16, [R8,#8]
      VLDRNE          S26, [R8,#0xC]
      VLDRNE          S18, [R8,#0x10]
  v169 = *(BlockSource **)(v4 + 4);
  v410 = *(_QWORD *)_R5 - 1;
  v411 = v167;
  v412 = v168;
  v170 = FireBlock::canBurn(v397, v169, (const BlockPos *)&v410);
  __asm { VMOV.F32        S24, S26 }
  if ( !(((unsigned __int8)(v167 / 2) + (unsigned __int8)(v166 / 2) + (unsigned __int8)(v168 / 2)) & 1) )
      VMOVEQ.F32      S24, S20
      VMOVEQ.F32      S20, S26
  if ( v170 == 1 )
      VMOV.F32        S26, #1.0
      VLDR            S28, =0.2
      VCVT.F32.S32    S4, S4
      VLDR            S30, =1.4625
      VADD.F32        S0, S0, S28
      VADD.F32        S2, S2, S30
      VADD.F32        S4, S4, S26
    Tessellator::vertexUV(v5, _R1, _R2, _R3, v393, v395);
    Tessellator::vertexUV(v5, _R1, _R2, _R3, v177, v178);
      VSTR            S24, [SP,#0xD8+var_D8]
    Tessellator::vertexUV(v5, _R1, _R2, _R3, v182, v183);
    Tessellator::vertexUV(v5, _R1, _R2, _R3, v187, v188);
    Tessellator::vertexUV(v5, _R1, _R2, _R3, v192, v193);
    Tessellator::vertexUV(v5, _R1, _R2, _R3, v197, v198);
    Tessellator::vertexUV(v5, _R1, _R2, _R3, v202, v203);
    Tessellator::vertexUV(v5, _R1, _R2, _R3, v207, v208);
  v209 = *((_DWORD *)_R5 + 1);
  v210 = *((_DWORD *)_R5 + 2);
  v211 = *(BlockSource **)(v4 + 4);
  v407 = *(_DWORD *)_R5 + 1;
  v408 = v209;
  v409 = v210;
  if ( FireBlock::canBurn(v397, v211, (const BlockPos *)&v407) == 1 )
      VLDR            S26, =0.8
      VLDR            S28, =1.4625
      VADD.F32        S0, S0, S26
      VADD.F32        S2, S2, S28
      VMOV.F32        S30, #1.0
      VADD.F32        S0, S0, S30
    Tessellator::vertexUV(v5, _R1, _R2, _R3, v218, v219);
      VADD.F32        S4, S4, S30
    Tessellator::vertexUV(v5, _R1, _R2, _R3, v223, v224);
    Tessellator::vertexUV(v5, _R1, _R2, _R3, v228, v229);
    Tessellator::vertexUV(v5, _R1, _R2, _R3, v233, v234);
    Tessellator::vertexUV(v5, _R1, _R2, _R3, v238, v239);
    Tessellator::vertexUV(v5, _R1, _R2, _R3, v243, v244);
    Tessellator::vertexUV(v5, _R1, _R2, _R3, v248, v249);
  v250 = *((_DWORD *)_R5 + 1);
  v251 = *((_DWORD *)_R5 + 2);
  v252 = *(BlockSource **)(v4 + 4);
  v404 = *(_DWORD *)_R5;
  v405 = v250;
  v406 = v251 - 1;
  if ( FireBlock::canBurn(v397, v252, (const BlockPos *)&v404) == 1 )
      VLDR            S26, =1.4625
      VADD.F32        S2, S2, S26
      VADD.F32        S4, S4, S28
    Tessellator::vertexUV(v5, _R1, _R2, _R3, v259, v260);
    Tessellator::vertexUV(v5, _R1, _R2, _R3, v264, v265);
    Tessellator::vertexUV(v5, _R1, _R2, _R3, v269, v270);
    Tessellator::vertexUV(v5, _R1, _R2, _R3, v274, v275);
    Tessellator::vertexUV(v5, _R1, _R2, _R3, v279, v280);
    Tessellator::vertexUV(v5, _R1, _R2, _R3, v284, v285);
    Tessellator::vertexUV(v5, _R1, _R2, _R3, v289, v290);
  v291 = *((_DWORD *)_R5 + 1);
  v292 = *((_DWORD *)_R5 + 2);
  v293 = *(BlockSource **)(v4 + 4);
  v401 = *(_DWORD *)_R5;
  v402 = v291;
  v403 = v292 + 1;
  if ( FireBlock::canBurn(v397, v293, (const BlockPos *)&v401) == 1 )
      VLDR            S30, =0.8
    Tessellator::vertexUV(v5, _R1, _R2, _R3, v300, v301);
    Tessellator::vertexUV(v5, _R1, _R2, _R3, v305, v306);
    Tessellator::vertexUV(v5, _R1, _R2, _R3, v310, v311);
    Tessellator::vertexUV(v5, _R1, _R2, _R3, v315, v316);
    Tessellator::vertexUV(v5, _R1, _R2, _R3, v320, v321);
    Tessellator::vertexUV(v5, _R1, _R2, _R3, v325, v326);
    Tessellator::vertexUV(v5, _R1, _R2, _R3, v330, v331);
  v332 = *((_DWORD *)_R5 + 1);
  v333 = *((_DWORD *)_R5 + 2);
  v334 = *(BlockSource **)(v4 + 4);
  v398 = *(_DWORD *)_R5;
  v399 = v332 + 1;
  v400 = v333;
  if ( FireBlock::canBurn(v397, v334, (const BlockPos *)&v398) == 1 )
    _R0 = *(_DWORD *)_R5;
    _R2 = *((_DWORD *)_R5 + 2);
    __asm { VMOV.F32        S18, #1.0 }
    _R1 = *((_DWORD *)_R5 + 1) + 1;
      VLDR            S16, =-0.2
      VMOV            S0, R1
      VCVT.F32.S32    S2, S0
      VMOV            S0, R2
      VCVT.F32.S32    S28, S0
      VMOV            S0, R0
      VLDR            S22, [R10,#4]
      VADD.F32        S2, S2, S16
      VLDR            S20, [R10,#8]
      VLDR            S26, [R10,#0xC]
      VLDR            S24, [R10,#0x10]
    *((_DWORD *)_R5 + 1) = _R1;
    if ( _ZF )
      __asm
      {
        VMOV            R6, S0
        VMOV            R2, S2
        VSTR            S26, [SP,#0xD8+var_D8]
        VMOV            R3, S28
        VSTR            S20, [SP,#0xD8+var_D4]
        VADD.F32        S30, S0, S18
      }
      Tessellator::vertexUV(v5, _R6, _R2, _R3, v393, v395);
        VLDR            S0, [R5,#4]
        VMOV            R7, S30
        VLDR            S2, [R5,#8]
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
        VSTR            S24, [SP,#0xD8+var_D4]
        VMOV            R2, S0
        VMOV            R3, S2
      Tessellator::vertexUV(v5, _R7, _R2, _R3, v344, v345);
        VSTR            S22, [SP,#0xD8+var_D8]
        VADD.F32        S2, S2, S18
      Tessellator::vertexUV(v5, _R7, _R2, _R3, v348, v349);
        VADD.F32        S0, S0, S16
      Tessellator::vertexUV(v5, _R6, _R2, _R3, v352, v353);
        VLDR            S22, [R8,#8]
        VLDR            S24, [R8,#0xC]
        VLDR            S20, [R8,#4]
        VLDR            S26, [R8,#0x10]
        VSTR            S24, [SP,#0xD8+var_D8]
        VSTR            S22, [SP,#0xD8+var_D4]
      Tessellator::vertexUV(v5, _R7, _R2, _R3, v356, v357);
        VSTR            S26, [SP,#0xD8+var_D4]
      Tessellator::vertexUV(v5, _R6, _R2, _R3, v360, v361);
        VSTR            S20, [SP,#0xD8+var_D8]
      Tessellator::vertexUV(v5, _R6, _R2, _R3, v364, v365);
      __asm { VLDR            S0, [R5,#4] }
      v163 = v5;
      __asm { VLDR            S2, [R5,#8] }
      _R1 = _R7;
      goto LABEL_11;
      VADD.F32        S4, S28, S18
    Tessellator::vertexUV(v5, _R1, _R2, _R7, v393, v395);
      VMOV            R6, S28
      VSTR            S24, [SP,#0xD8+var_D4]
    Tessellator::vertexUV(v5, _R1, _R2, _R6, v371, v372);
      VSTR            S22, [SP,#0xD8+var_D8]
      VADD.F32        S0, S0, S18
    Tessellator::vertexUV(v5, _R1, _R2, _R6, v375, v376);
    Tessellator::vertexUV(v5, _R1, _R2, _R7, v379, v380);
      VLDR            S22, [R8,#8]
      VLDR            S24, [R8,#0xC]
      VLDR            S20, [R8,#4]
      VLDR            S26, [R8,#0x10]
      VSTR            S22, [SP,#0xD8+var_D4]
    Tessellator::vertexUV(v5, _R1, _R2, _R6, v383, v384);
      VSTR            S26, [SP,#0xD8+var_D4]
    Tessellator::vertexUV(v5, _R1, _R2, _R7, v387, v388);
    Tessellator::vertexUV(v5, _R1, _R2, _R7, v391, v392);
LABEL_10:
    v163 = v5;
    _R3 = _R6;
LABEL_11:
    Tessellator::vertexUV(v163, _R1, _R2, _R3, v394, v396);
  return 1;
}


signed int __fastcall BlockTessellator::tessellateFenceInWorld(BlockTessellator *this, Tessellator *a2, const FenceBlock *a3, const BlockPos *a4, int a5)
{
  BlockTessellator *v5; // r6@1
  const BlockPos *v6; // r7@1
  const FenceBlock *v7; // r11@1
  Tessellator *v8; // r9@1
  __int64 v9; // r0@1
  int v10; // r2@1
  int v11; // r3@1
  BlockSource *v12; // r1@1
  int v13; // r5@1
  int v14; // r2@1
  int v15; // r3@1
  BlockSource *v16; // r1@1
  int v17; // r4@1
  int v18; // r2@1
  int v19; // r3@1
  BlockSource *v20; // r1@1
  int v21; // r8@1
  BlockSource *v22; // r1@1
  int v23; // r2@1
  int v24; // r3@1
  int v25; // r0@1
  int v30; // r8@7
  int v31; // r10@9
  const TextureUVCoordinateSet *v32; // r5@9
  float v38; // [sp+0h] [bp-168h]@1
  float v39; // [sp+8h] [bp-160h]@1
  AABB *v40; // [sp+10h] [bp-158h]@1
  char v41; // [sp+14h] [bp-154h]@16
  char v42; // [sp+20h] [bp-148h]@16
  char v43; // [sp+2Ch] [bp-13Ch]@16
  char v44; // [sp+38h] [bp-130h]@16
  char v45; // [sp+44h] [bp-124h]@14
  char v46; // [sp+50h] [bp-118h]@14
  char v47; // [sp+5Ch] [bp-10Ch]@14
  char v48; // [sp+68h] [bp-100h]@14
  char v49; // [sp+74h] [bp-F4h]@12
  char v50; // [sp+80h] [bp-E8h]@12
  char v51; // [sp+8Ch] [bp-DCh]@12
  char v52; // [sp+98h] [bp-D0h]@12
  char v53; // [sp+A4h] [bp-C4h]@10
  char v54; // [sp+B0h] [bp-B8h]@10
  char v55; // [sp+BCh] [bp-ACh]@10
  char v56; // [sp+C8h] [bp-A0h]@10
  int v57; // [sp+D4h] [bp-94h]@1
  int v58; // [sp+D8h] [bp-90h]@1
  int v59; // [sp+DCh] [bp-8Ch]@1
  int v60; // [sp+E0h] [bp-88h]@1
  int v61; // [sp+E4h] [bp-84h]@1
  int v62; // [sp+E8h] [bp-80h]@1
  int v63; // [sp+ECh] [bp-7Ch]@1
  int v64; // [sp+F0h] [bp-78h]@1
  int v65; // [sp+F4h] [bp-74h]@1
  int v66; // [sp+F8h] [bp-70h]@1
  int v67; // [sp+FCh] [bp-6Ch]@1
  int v68; // [sp+100h] [bp-68h]@1
  char v69; // [sp+104h] [bp-64h]@1

  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  AABB::AABB((AABB *)&v69);
  HIDWORD(v9) = 1052770304;
  LODWORD(v9) = (char *)v5 + 724;
  v40 = (BlockTessellator *)((char *)v5 + 724);
  AABB::set(v9, 4521614025879977984LL, 0.625, 0.9999, 0.625);
  BlockTessellator::tessellateBlockInWorld(v5, v8, v7, v6, a5);
  v10 = *((_DWORD *)v6 + 1);
  v11 = *((_DWORD *)v6 + 2);
  v12 = (BlockSource *)*((_DWORD *)v5 + 1);
  v66 = *(_DWORD *)v6 - 1;
  v67 = v10;
  v68 = v11;
  v13 = FenceBlock::connectsTo(v7, v12, v6, (const BlockPos *)&v66);
  v14 = *((_DWORD *)v6 + 1);
  v15 = *((_DWORD *)v6 + 2);
  v16 = (BlockSource *)*((_DWORD *)v5 + 1);
  v63 = *(_DWORD *)v6 + 1;
  v64 = v14;
  v65 = v15;
  v17 = FenceBlock::connectsTo(v7, v16, v6, (const BlockPos *)&v63);
  v18 = *((_DWORD *)v6 + 1);
  v19 = *((_DWORD *)v6 + 2);
  v20 = (BlockSource *)*((_DWORD *)v5 + 1);
  v60 = *(_DWORD *)v6;
  v61 = v18;
  v62 = v19 - 1;
  v21 = FenceBlock::connectsTo(v7, v20, v6, (const BlockPos *)&v60);
  v22 = (BlockSource *)*((_DWORD *)v5 + 1);
  v23 = *((_DWORD *)v6 + 1);
  v24 = *((_DWORD *)v6 + 2);
  v57 = *(_DWORD *)v6;
  v58 = v23;
  v59 = v24 + 1;
  v25 = FenceBlock::connectsTo(v7, v22, v6, (const BlockPos *)&v57);
  __asm
  {
    VMOV.F32        S18, #0.4375
    VMOV.F32        S16, #0.5625
    VLDR            S0, =0.0
    VMOV.F32        S2, #1.0
    VMOV.F32        S22, S18
  }
  if ( !_ZF )
    __asm { VMOVNE.F32      S22, S0 }
  __asm { VMOV.F32        S20, S16 }
    __asm { VMOVNE.F32      S20, S2 }
  if ( v21 )
    __asm { VMOVNE.F32      S18, S0 }
  v30 = v21 | v25;
  if ( v25 )
    __asm { VMOVNE.F32      S16, S2 }
  v31 = v13 | v17 | v30 ^ 1;
  v32 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(
                                          (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v7 + 4)],
                                          v6,
                                          3,
                                          a5);
  if ( v31 == 1 )
    __asm { VMOV            R1, S22 }
    LODWORD(_R0) = (char *)v5 + 724;
    __asm { VSTR            S20, [SP,#0x168+var_168] }
    AABB::set(_R0, 4530621226195877888LL, v38, 0.9375, 0.5625);
    Vec3::Vec3((int)&v56, (int)v6);
    BlockTessellator::tessellateFaceUp(v5, v8, v7, (const Vec3 *)&v56, v32);
    Vec3::Vec3((int)&v55, (int)v6);
    BlockTessellator::tessellateFaceDown(v5, v8, v7, (const Vec3 *)&v55, v32);
    *((_BYTE *)v5 + 43) = 1;
    Vec3::Vec3((int)&v54, (int)v6);
    BlockTessellator::tessellateNorth(v5, v8, v7, (const Vec3 *)&v54, v32);
    *((_BYTE *)v5 + 43) = 0;
    Vec3::Vec3((int)&v53, (int)v6);
    BlockTessellator::tessellateSouth(v5, v8, v7, (const Vec3 *)&v53, v32);
  if ( v30 == 1 )
    __asm
    {
      VMOV            R3, S18
      VSTR            S16, [SP,#0x168+var_160]
    }
    LODWORD(_R2) = 1061158912;
    AABB::set(__PAIR__(1054867456, (unsigned int)v40), _R2, 0.5625, 0.9375, v39);
    Vec3::Vec3((int)&v52, (int)v6);
    BlockTessellator::tessellateFaceUp(v5, v8, v7, (const Vec3 *)&v52, v32);
    Vec3::Vec3((int)&v51, (int)v6);
    BlockTessellator::tessellateFaceDown(v5, v8, v7, (const Vec3 *)&v51, v32);
    Vec3::Vec3((int)&v50, (int)v6);
    BlockTessellator::tessellateEast(v5, v8, v7, (const Vec3 *)&v50, v32);
    Vec3::Vec3((int)&v49, (int)v6);
    BlockTessellator::tessellateWest(v5, v8, v7, (const Vec3 *)&v49, v32);
    AABB::set(_R0, 4530621226187489280LL, v38, 0.5625, 0.5625);
    Vec3::Vec3((int)&v48, (int)v6);
    BlockTessellator::tessellateFaceUp(v5, v8, v7, (const Vec3 *)&v48, v32);
    Vec3::Vec3((int)&v47, (int)v6);
    BlockTessellator::tessellateFaceDown(v5, v8, v7, (const Vec3 *)&v47, v32);
    Vec3::Vec3((int)&v46, (int)v6);
    BlockTessellator::tessellateNorth(v5, v8, v7, (const Vec3 *)&v46, v32);
    Vec3::Vec3((int)&v45, (int)v6);
    BlockTessellator::tessellateSouth(v5, v8, v7, (const Vec3 *)&v45, v32);
    LODWORD(_R2) = 1052770304;
    AABB::set(__PAIR__(1054867456, (unsigned int)v40), _R2, 0.5625, 0.5625, v39);
    Vec3::Vec3((int)&v44, (int)v6);
    BlockTessellator::tessellateFaceUp(v5, v8, v7, (const Vec3 *)&v44, v32);
    Vec3::Vec3((int)&v43, (int)v6);
    BlockTessellator::tessellateFaceDown(v5, v8, v7, (const Vec3 *)&v43, v32);
    Vec3::Vec3((int)&v42, (int)v6);
    BlockTessellator::tessellateEast(v5, v8, v7, (const Vec3 *)&v42, v32);
    Vec3::Vec3((int)&v41, (int)v6);
    BlockTessellator::tessellateWest(v5, v8, v7, (const Vec3 *)&v41, v32);
  return 1;
}


int __fastcall BlockTessellator::tessellateFacingBlockInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  Tessellator *v5; // r6@1
  const Block *v6; // r5@1
  BlockTessellator *v7; // r7@1
  const BlockPos *v8; // r4@1

  v5 = a2;
  v6 = a3;
  v7 = this;
  v8 = a4;
  FaceDirectionalBlock::setFaceFlipping(a3, a5, (int *)this + 47);
  return j_j_j__ZN16BlockTessellator22tessellateBlockInWorldER11TessellatorRK5BlockRK8BlockPosi(v7, v5, v6, v8, a5);
}


signed int __fastcall BlockTessellator::tessellateTorchInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  BlockTessellator *v5; // r6@1
  const BlockPos *v6; // r7@1
  const Block *v7; // r8@1
  Tessellator *v8; // r5@1
  int v11; // r0@3
  float v17; // [sp+8h] [bp-78h]@0
  int v18; // [sp+10h] [bp-70h]@9
  float v19; // [sp+14h] [bp-6Ch]@9
  int v20; // [sp+18h] [bp-68h]@9
  int v21; // [sp+20h] [bp-60h]@12
  int v22; // [sp+2Ch] [bp-54h]@11
  float v23; // [sp+38h] [bp-48h]@10
  int v24; // [sp+40h] [bp-40h]@10
  float v25; // [sp+44h] [bp-3Ch]@8
  int v26; // [sp+4Ch] [bp-34h]@8
  int v27; // [sp+50h] [bp-30h]@7
  float v28; // [sp+54h] [bp-2Ch]@8
  int v29; // [sp+58h] [bp-28h]@8
  unsigned __int8 v30; // [sp+5Ch] [bp-24h]@2
  unsigned __int8 v31; // [sp+5Dh] [bp-23h]@2
  float v32; // [sp+60h] [bp-20h]@6

  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  if ( *((_BYTE *)this + 48) )
  {
    _R1 = (unsigned __int8)Brightness::MAX;
    v30 = Brightness::MAX;
    v31 = Brightness::MAX;
    _R2 = (unsigned __int8)Brightness::MAX;
  }
  else
    BlockTessellatorCache::getLightColor(
      (BlockTessellatorCache *)&v30,
      (BlockTessellator *)((char *)this + 812),
      (int)a4);
    _R1 = v30;
    _R2 = v31;
    v11 = *((_BYTE *)v5 + 48);
  __asm
    VMOV            S0, R2
    VLDR            S4, =0.0625
    VMOV            S2, R1
    VCVT.F32.U32    S0, S0
    VCVT.F32.U32    S2, S2
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S4
    VSTR            S0, [SP,#0x80+var_20]
    VSTR            S2, [SP,#0x80+var_1C]
  if ( _ZF )
    Tessellator::tex1((int)v8, (__int64 *)&v32);
  Tessellator::color(v8, (const Color *)&Color::WHITE);
  Vec3::Vec3((int)&v27, (int)v6);
  switch ( a5 )
    case 1:
      __asm
      {
        VLDR            S0, [SP,#0x80+var_30]; jumptable 00EA0254 case 1
        VLDR            S4, =-0.1
        VLDR            S2, [SP,#0x80+var_2C]
        VLDR            S6, =0.2
        VADD.F32        S0, S0, S4
        VADD.F32        S2, S2, S6
        VSTR            S0, [SP,#0x80+var_3C]
        VSTR            S2, [SP,#0x80+var_38]
      }
      v26 = v29;
      __asm { VSTR            S2, [SP,#0x80+var_78] }
      BlockTessellator::tessellateTorch(*(float *)&v5, *(float *)&v8, *(float *)&v7, (const Vec3 *)&v25, -0.4, 0.0, v17);
      break;
    case 2:
        VLDR            S0, [SP,#0x80+var_30]; jumptable 00EA0254 case 2
        VLDR            S4, =0.1
        VSTR            S0, [SP,#0x80+var_48]
        VSTR            S2, [SP,#0x80+var_44]
      v24 = v29;
      BlockTessellator::tessellateTorch(*(float *)&v5, *(float *)&v8, *(float *)&v7, (const Vec3 *)&v23, 0.4, 0.0, v17);
    case 3:
        VLDR            S0, =0.2; jumptable 00EA0254 case 3
        VLDR            S6, [SP,#0x80+var_28]
        VADD.F32        S0, S2, S0
        VADD.F32        S2, S6, S4
      v22 = v27;
        VSTR            S0, [SP,#0x80+var_50]
        VSTR            S0, [SP,#0x80+var_78]
        VSTR            S2, [SP,#0x80+var_4C]
      BlockTessellator::tessellateTorch(*(float *)&v5, *(float *)&v8, *(float *)&v7, (const Vec3 *)&v22, 0.0, -0.4, v17);
    case 4:
        VLDR            S0, =0.2; jumptable 00EA0254 case 4
      v21 = v27;
        VSTR            S0, [SP,#0x80+var_5C]
        VSTR            S2, [SP,#0x80+var_58]
      BlockTessellator::tessellateTorch(*(float *)&v5, *(float *)&v8, *(float *)&v7, (const Vec3 *)&v21, 0.0, 0.4, v17);
    default:
      v18 = v27;
      v19 = v28;
      v20 = v29;
        VLDR            S0, [SP,#0x80+var_6C]
      BlockTessellator::tessellateTorch(*(float *)&v5, *(float *)&v8, *(float *)&v7, (const Vec3 *)&v18, 0.0, 0.0, v17);
  return 1;
}


signed int __fastcall BlockTessellator::tessellateTripwireInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  BlockTessellator *v5; // r6@1
  Tessellator *v7; // r11@1
  BlockState *v9; // r0@4
  int v12; // r0@6
  int v20; // r0@12
  int v27; // r0@17
  signed int v31; // r10@17
  int v32; // ST00_4@17
  signed int v33; // r7@17
  int v34; // ST00_4@17
  signed int v35; // r9@17
  TripWireBlock *v36; // r0@17
  signed int v37; // r6@17
  int v38; // ST00_4@17
  signed int v39; // r0@17
  signed int v40; // r7@17
  signed int v41; // r8@17
  signed int v43; // r7@23
  signed int v44; // r9@23
  float v55; // ST00_4@26
  float v56; // ST04_4@26
  float v60; // ST00_4@26
  float v61; // ST04_4@26
  float v65; // ST00_4@26
  float v66; // ST04_4@26
  float v70; // ST00_4@26
  float v71; // ST04_4@26
  float v75; // ST00_4@26
  float v76; // ST04_4@26
  float v80; // ST00_4@26
  float v81; // ST04_4@26
  float v85; // ST00_4@26
  float v86; // ST04_4@26
  float v93; // ST00_4@27
  float v94; // ST04_4@27
  float v98; // ST00_4@27
  float v99; // ST04_4@27
  float v103; // ST00_4@27
  float v104; // ST04_4@27
  float v108; // ST00_4@27
  float v109; // ST04_4@27
  float v113; // ST00_4@27
  float v114; // ST04_4@27
  float v118; // ST00_4@27
  float v119; // ST04_4@27
  float v123; // ST00_4@27
  float v124; // ST04_4@27
  float v131; // ST00_4@34
  float v132; // ST04_4@34
  float v136; // ST00_4@34
  float v137; // ST04_4@34
  float v141; // ST00_4@34
  float v142; // ST04_4@34
  float v146; // ST00_4@34
  float v147; // ST04_4@34
  float v151; // ST00_4@34
  float v152; // ST04_4@34
  float v156; // ST00_4@34
  float v157; // ST04_4@34
  float v161; // ST00_4@34
  float v162; // ST04_4@34
  float v169; // ST00_4@35
  float v170; // ST04_4@35
  float v174; // ST00_4@35
  float v175; // ST04_4@35
  float v179; // ST00_4@35
  float v180; // ST04_4@35
  float v184; // ST00_4@35
  float v185; // ST04_4@35
  float v189; // ST00_4@35
  float v190; // ST04_4@35
  float v194; // ST00_4@35
  float v195; // ST04_4@35
  float v199; // ST00_4@35
  float v200; // ST04_4@35
  float v211; // ST00_4@38
  float v212; // ST04_4@38
  float v216; // ST00_4@38
  float v217; // ST04_4@38
  float v221; // ST00_4@38
  float v222; // ST04_4@38
  float v226; // ST00_4@38
  float v227; // ST04_4@38
  float v231; // ST00_4@38
  float v232; // ST04_4@38
  float v236; // ST00_4@38
  float v237; // ST04_4@38
  float v241; // ST00_4@38
  float v242; // ST04_4@38
  float v249; // ST00_4@41
  float v250; // ST04_4@41
  float v254; // ST00_4@41
  float v255; // ST04_4@41
  float v259; // ST00_4@41
  float v260; // ST04_4@41
  float v264; // ST00_4@41
  float v265; // ST04_4@41
  float v269; // ST00_4@41
  float v270; // ST04_4@41
  float v274; // ST00_4@41
  float v275; // ST04_4@41
  float v279; // ST00_4@41
  float v280; // ST04_4@41
  float v287; // ST00_4@44
  float v288; // ST04_4@44
  float v292; // ST00_4@44
  float v293; // ST04_4@44
  float v297; // ST00_4@44
  float v298; // ST04_4@44
  float v302; // ST00_4@44
  float v303; // ST04_4@44
  float v307; // ST00_4@44
  float v308; // ST04_4@44
  float v312; // ST00_4@44
  float v313; // ST04_4@44
  float v317; // ST00_4@44
  float v318; // ST04_4@44
  float v325; // ST00_4@45
  float v326; // ST04_4@45
  float v330; // ST00_4@45
  float v331; // ST04_4@45
  float v335; // ST00_4@45
  float v336; // ST04_4@45
  float v340; // ST00_4@45
  float v341; // ST04_4@45
  float v345; // ST00_4@45
  float v346; // ST04_4@45
  float v350; // ST00_4@45
  float v351; // ST04_4@45
  float v355; // ST00_4@45
  float v356; // ST04_4@45
  int v358; // [sp+0h] [bp-80h]@10
  float v359; // [sp+0h] [bp-80h]@17
  float v360; // [sp+0h] [bp-80h]@44
  float v361; // [sp+4h] [bp-7Ch]@0
  float v362; // [sp+4h] [bp-7Ch]@44
  unsigned __int8 v363; // [sp+8h] [bp-78h]@5
  unsigned __int8 v364; // [sp+9h] [bp-77h]@5
  float v365; // [sp+Ch] [bp-74h]@9
  unsigned __int8 v366; // [sp+17h] [bp-69h]@4

  v5 = this;
  _R5 = a4;
  v7 = a2;
  if ( *((_BYTE *)this + 40) )
    _R7 = (char *)this + 8;
  else
    _R7 = (char *)BlockGraphics::getTexture((BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)a3 + 4)], a4, 1, 0);
  v9 = (BlockState *)Block::getBlockState(Block::mTripwire, 2);
  v366 = a5;
  BlockState::getBool(v9, &v366);
  if ( *((_BYTE *)v5 + 48) )
  {
    _R1 = (unsigned __int8)Brightness::MAX;
    v363 = Brightness::MAX;
    v364 = Brightness::MAX;
    _R2 = (unsigned __int8)Brightness::MAX;
  }
    BlockTessellatorCache::getLightColor(
      (BlockTessellatorCache *)&v363,
      (BlockTessellator *)((char *)v5 + 812),
      (int)_R5);
    _R1 = v363;
    _R2 = v364;
    v12 = *((_BYTE *)v5 + 48);
  __asm
    VMOV            S0, R2
    VLDR            S4, =0.0625
    VMOV            S2, R1
    VCVT.F32.U32    S0, S0
    VCVT.F32.U32    S2, S2
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S4
    VSTR            S0, [SP,#0x80+var_74]
    VSTR            S2, [SP,#0x80+var_70]
  if ( _ZF )
    Tessellator::tex1((int)v7, (__int64 *)&v365);
  Tessellator::color(v7, 1.0, 1.0, 1.0, 1.0);
  _R0 = *((_WORD *)_R7 + 10);
    VMOV            S0, R0
    VCVT.F32.U32    S18, S0
    VLDR            S16, [R7,#4]
    VLDR            S20, [R7,#0xC]
    VCMPE.F32       S20, S16
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm
    {
      VMUL.F32        S0, S18, S16
      VMOV            R0, S0
    }
    v20 = roundf(_R0);
    __asm { VMUL.F32        S0, S18, S20 }
    _R4 = v20;
      VMUL.F32        S0, S18, S20
    _R4 = roundf(_R0);
    __asm { VMUL.F32        S0, S18, S16 }
  __asm { VMOV            R0, S0 }
  _R0 = roundf(_R0);
    VLDR            S4, =0.0
    VMOV            S2, R4
    VCVTR.S32.F32   S0, S0
    VCVTR.S32.F32   S2, S2
    VMOV.F32        S24, #0.25
    VMOV            R0, S0
    VMOV            R1, S2
    VMOV.F32        S0, #0.125
  _R0 = (unsigned __int16)(_R1 - _R0);
    VMOV            S2, R0
    VMUL.F32        S18, S2, S0
    VMUL.F32        S0, S2, S24
  if ( !_ZF )
    __asm { VMOVNE.F32      S4, S18 }
  __asm { VMOV            R1, S4 }
    __asm { VMOVNE.F32      S18, S0 }
  v27 = TextureUVCoordinateSet::offsetHeightPixel((TextureUVCoordinateSet *)_R7, _R1, 0.0);
  __asm { VMOV            R1, S18 }
  _R4 = v27;
  __asm { VLDR            S18, [R7,#0xC] }
  _R8 = TextureUVCoordinateSet::offsetHeightPixel((TextureUVCoordinateSet *)_R7, _R1, 0.0);
  v31 = TripWireBlock::shouldConnectTo(*((TripWireBlock **)v5 + 1), _R5, (const BlockPos *)a5, 1, v358);
  v33 = TripWireBlock::shouldConnectTo(*((TripWireBlock **)v5 + 1), _R5, (const BlockPos *)a5, 3, v32);
  v35 = TripWireBlock::shouldConnectTo(*((TripWireBlock **)v5 + 1), _R5, (const BlockPos *)a5, 2, v34);
  v36 = (TripWireBlock *)*((_DWORD *)v5 + 1);
  v37 = v33;
  v39 = TripWireBlock::shouldConnectTo(v36, _R5, (const BlockPos *)a5, 0, v38);
  __asm { VMOV            S20, R8 }
  v40 = v39;
  __asm { VMOV            S22, R4 }
  v41 = v37;
  if ( !v37 )
    _ZF = v35 == 0;
    if ( !v35 )
      _ZF = v39 == 0;
    if ( _ZF )
      if ( v31 )
      {
        v43 = 0;
        v44 = 0;
LABEL_38:
        _R6 = (int)_R5 + 4;
        _R0 = *((_DWORD *)_R5 + 1);
        __asm { VMOV.F32        S26, #0.21875 }
        _R4 = (int)_R5 + 8;
        _R1 = *((_DWORD *)_R5 + 2);
        __asm
        {
          VLDR            S28, =0.51562
          VMOV            S0, R0
          VMOV            S2, R1
          VCVT.F32.S32    S0, S0
          VCVT.F32.S32    S2, S2
          VLDR            S4, [R5]
          VCVT.F32.S32    S4, S4
          VSTR            S16, [SP,#0x80+var_80]
          VSTR            S20, [SP,#0x80+var_7C]
          VADD.F32        S0, S0, S26
          VADD.F32        S2, S2, S28
          VMOV            R1, S4
          VMOV            R2, S0
          VMOV            R3, S2
        }
        Tessellator::vertexUV(v7, _R1, _R2, _R3, v359, v361);
          VLDR            S0, [R5]
          VLDR            S2, [R6]
          VLDR            S4, [R4]
          VSTR            S18, [SP,#0x80+var_80]
          VADD.F32        S0, S0, S24
          VADD.F32        S2, S2, S26
          VADD.F32        S4, S4, S28
          VMOV            R1, S0
          VMOV            R2, S2
          VMOV            R3, S4
        Tessellator::vertexUV(v7, _R1, _R2, _R3, v211, v212);
          VMOV.F32        S30, #0.48438
          VSTR            S22, [SP,#0x80+var_7C]
          VADD.F32        S4, S4, S30
        Tessellator::vertexUV(v7, _R1, _R2, _R3, v216, v217);
          VLDR            S0, [R6]
          VLDR            S2, [R4]
          VADD.F32        S2, S2, S30
        Tessellator::vertexUV(v7, _R1, _R2, _R3, v221, v222);
        Tessellator::vertexUV(v7, _R1, _R2, _R3, v226, v227);
        Tessellator::vertexUV(v7, _R1, _R2, _R3, v231, v232);
        Tessellator::vertexUV(v7, _R1, _R2, _R3, v236, v237);
        Tessellator::vertexUV(v7, _R1, _R2, _R3, v241, v242);
LABEL_41:
          VMOV.F32        S26, #0.21875
          VMOV.F32        S30, #0.5
          VADD.F32        S0, S0, S30
        Tessellator::vertexUV(v7, _R1, _R2, _R3, v249, v250);
          VMOV.F32        S17, #0.48438
          VADD.F32        S4, S4, S17
        Tessellator::vertexUV(v7, _R1, _R2, _R3, v254, v255);
        Tessellator::vertexUV(v7, _R1, _R2, _R3, v259, v260);
        Tessellator::vertexUV(v7, _R1, _R2, _R3, v264, v265);
        Tessellator::vertexUV(v7, _R1, _R2, _R3, v269, v270);
        Tessellator::vertexUV(v7, _R1, _R2, _R3, v274, v275);
        Tessellator::vertexUV(v7, _R1, _R2, _R3, v279, v280);
        goto LABEL_42;
      }
      v40 = 1;
      goto LABEL_26;
  if ( v35 == 1 )
LABEL_26:
    _R4 = (int)_R5 + 4;
    _R0 = *((_DWORD *)_R5 + 1);
    __asm { VMOV.F32        S26, #0.21875 }
    _R6 = (int)_R5 + 8;
    _R1 = *((_DWORD *)_R5 + 2);
      VMOV.F32        S28, #0.48438
      VMOV            S0, R0
      VMOV            S4, R1
      VCVT.F32.S32    S0, S0
      VLDR            S2, [R5]
      VCVT.F32.S32    S4, S4
      VCVT.F32.S32    S2, S2
      VSTR            S16, [SP,#0x80+var_80]
      VSTR            S22, [SP,#0x80+var_7C]
      VADD.F32        S0, S0, S26
      VADD.F32        S4, S4, S24
      VADD.F32        S2, S2, S28
      VMOV            R2, S0
      VMOV            R3, S4
      VMOV            R1, S2
    Tessellator::vertexUV(v7, _R1, _R2, _R3, v359, v361);
      VLDR            S0, [R5]
      VLDR            S2, [R4]
      VLDR            S4, [R6]
      VLDR            S30, =0.51562
      VSTR            S20, [SP,#0x80+var_7C]
      VADD.F32        S0, S0, S30
      VADD.F32        S2, S2, S26
      VMOV            R1, S0
      VMOV            R2, S2
    Tessellator::vertexUV(v7, _R1, _R2, _R3, v55, v56);
      VSTR            S18, [SP,#0x80+var_80]
    Tessellator::vertexUV(v7, _R1, _R2, _R3, v60, v61);
      VADD.F32        S0, S0, S28
    Tessellator::vertexUV(v7, _R1, _R2, _R3, v65, v66);
    Tessellator::vertexUV(v7, _R1, _R2, _R3, v70, v71);
    Tessellator::vertexUV(v7, _R1, _R2, _R3, v75, v76);
    Tessellator::vertexUV(v7, _R1, _R2, _R3, v80, v81);
    Tessellator::vertexUV(v7, _R1, _R2, _R3, v85, v86);
    v44 = 1;
    goto LABEL_27;
  if ( !(v39 ^ 1 | v37 | v31) )
    v44 = 0;
LABEL_27:
      VMOV.F32        S26, #0.48438
      VMOV.F32        S28, #0.21875
      VMOV.F32        S30, #0.5
      VADD.F32        S4, S4, S30
      VLDR            S17, =0.51562
      VADD.F32        S0, S0, S17
    Tessellator::vertexUV(v7, _R1, _R2, _R3, v93, v94);
    Tessellator::vertexUV(v7, _R1, _R2, _R3, v98, v99);
    Tessellator::vertexUV(v7, _R1, _R2, _R3, v103, v104);
    Tessellator::vertexUV(v7, _R1, _R2, _R3, v108, v109);
    Tessellator::vertexUV(v7, _R1, _R2, _R3, v113, v114);
    Tessellator::vertexUV(v7, _R1, _R2, _R3, v118, v119);
    Tessellator::vertexUV(v7, _R1, _R2, _R3, v123, v124);
    if ( v40 )
      v43 = 1;
    else
      v43 = 0;
      if ( v44 ^ 1 | v41 | v31 )
        goto LABEL_37;
    goto LABEL_34;
  if ( v39 != 1 )
    v43 = 0;
    goto LABEL_37;
  _R6 = (int)_R5 + 8;
  _R4 = (int)_R5 + 4;
  v44 = 0;
  v43 = 1;
LABEL_34:
    VLDR            S0, [R5]
    VMOV.F32        S26, #0.48438
    VLDR            S2, [R4]
    VMOV.F32        S28, #0.21875
    VCVT.F32.S32    S0, S0
    VLDR            S4, [R6]
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VSTR            S16, [SP,#0x80+var_80]
    VMOV.F32        S30, #0.75
    VSTR            S22, [SP,#0x80+var_7C]
    VADD.F32        S0, S0, S26
    VADD.F32        S2, S2, S28
    VADD.F32        S4, S4, S30
    VMOV            R1, S0
    VMOV            R2, S2
    VMOV            R3, S4
  Tessellator::vertexUV(v7, _R1, _R2, _R3, v359, v361);
    VLDR            S17, =0.51562
    VSTR            S20, [SP,#0x80+var_7C]
    VADD.F32        S0, S0, S17
  Tessellator::vertexUV(v7, _R1, _R2, _R3, v131, v132);
    VMOV.F32        S19, #0.5
    VSTR            S18, [SP,#0x80+var_80]
    VADD.F32        S4, S4, S19
  Tessellator::vertexUV(v7, _R1, _R2, _R3, v136, v137);
  Tessellator::vertexUV(v7, _R1, _R2, _R3, v141, v142);
  Tessellator::vertexUV(v7, _R1, _R2, _R3, v146, v147);
  Tessellator::vertexUV(v7, _R1, _R2, _R3, v151, v152);
  Tessellator::vertexUV(v7, _R1, _R2, _R3, v156, v157);
  Tessellator::vertexUV(v7, _R1, _R2, _R3, v161, v162);
  if ( v43 == 1 )
      VMOV.F32        S19, #1.0
      VADD.F32        S4, S4, S19
    Tessellator::vertexUV(v7, _R1, _R2, _R3, v169, v170);
    Tessellator::vertexUV(v7, _R1, _R2, _R3, v174, v175);
    Tessellator::vertexUV(v7, _R1, _R2, _R3, v179, v180);
    Tessellator::vertexUV(v7, _R1, _R2, _R3, v184, v185);
    Tessellator::vertexUV(v7, _R1, _R2, _R3, v189, v190);
    Tessellator::vertexUV(v7, _R1, _R2, _R3, v194, v195);
    Tessellator::vertexUV(v7, _R1, _R2, _R3, v199, v200);
    v43 = 1;
LABEL_37:
  if ( v31 == 1 )
    goto LABEL_38;
  if ( !(v41 ^ 1 | v44 | v43) )
    _R4 = (int)_R5 + 8;
    _R6 = (int)_R5 + 4;
    goto LABEL_41;
LABEL_42:
  if ( v41 || !(v31 ^ 1 | v44 | v43) )
      VMOV.F32        S17, #0.5
      VLDR            S2, [R5,#4]
      VMOV.F32        S24, #0.21875
      VLDR            S4, [R5,#8]
      VLDR            S26, =0.51562
      VADD.F32        S2, S2, S24
      VADD.F32        S4, S4, S26
      VMOV.F32        S28, #0.75
    Tessellator::vertexUV(v7, _R1, _R2, _R3, v287, v288);
      VMOV.F32        S30, #0.48438
    Tessellator::vertexUV(v7, _R1, _R2, _R3, v292, v293);
    Tessellator::vertexUV(v7, _R1, _R2, _R3, v297, v298);
    Tessellator::vertexUV(v7, _R1, _R2, _R3, v302, v303);
    Tessellator::vertexUV(v7, _R1, _R2, _R3, v307, v308);
    Tessellator::vertexUV(v7, _R1, _R2, _R3, v312, v313);
    Tessellator::vertexUV(v7, _R1, _R2, _R3, v317, v318);
    if ( v41 == 1 )
      __asm
        VLDR            S0, [R5]
        VLDR            S2, [R5,#4]
        VLDR            S4, [R5,#8]
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
        VCVT.F32.S32    S4, S4
        VSTR            S16, [SP,#0x80+var_80]
        VSTR            S20, [SP,#0x80+var_7C]
        VADD.F32        S0, S0, S28
        VADD.F32        S2, S2, S24
        VADD.F32        S4, S4, S26
        VMOV            R1, S0
        VMOV            R2, S2
        VMOV            R3, S4
      Tessellator::vertexUV(v7, _R1, _R2, _R3, v360, v362);
        VMOV.F32        S17, #1.0
        VSTR            S18, [SP,#0x80+var_80]
        VADD.F32        S0, S0, S17
      Tessellator::vertexUV(v7, _R1, _R2, _R3, v325, v326);
        VSTR            S22, [SP,#0x80+var_7C]
        VADD.F32        S4, S4, S30
      Tessellator::vertexUV(v7, _R1, _R2, _R3, v330, v331);
      Tessellator::vertexUV(v7, _R1, _R2, _R3, v335, v336);
      Tessellator::vertexUV(v7, _R1, _R2, _R3, v340, v341);
      Tessellator::vertexUV(v7, _R1, _R2, _R3, v345, v346);
      Tessellator::vertexUV(v7, _R1, _R2, _R3, v350, v351);
      Tessellator::vertexUV(v7, _R1, _R2, _R3, v355, v356);
  return 1;
}


signed int __fastcall BlockTessellator::tessellateFlowerPotInWorld(BlockTessellator *this, Tessellator *a2, const FlowerPotBlock *a3, const BlockPos *a4, int a5)
{
  const Block *v6; // r11@1
  Tessellator *v7; // r8@1
  BlockTessellator *v8; // r5@1
  int v13; // r4@1
  BlockGraphics *v14; // r7@1
  int v15; // r6@1
  unsigned int v16; // r0@1
  int (__fastcall *v17)(int, unsigned int); // r2@1
  int v18; // r0@2
  const TextureUVCoordinateSet *v19; // r0@2
  int v20; // r0@3
  BlockEntity *v21; // r0@4
  FlowerPotBlockEntity *v22; // r7@4
  int v23; // r0@6
  const Block *v24; // r4@6
  int v25; // r1@7
  BlockGraphics *v26; // r6@7
  int v27; // r7@7
  int v28; // r0@7
  int v29; // r0@8
  int v32; // r0@12
  const TextureUVCoordinateSet *v33; // r4@18
  int v34; // r0@21
  float v36; // [sp+8h] [bp-70h]@0
  BlockGraphics *v37; // [sp+Ch] [bp-6Ch]@7
  int v38; // [sp+10h] [bp-68h]@8
  AABB *v39; // [sp+14h] [bp-64h]@1
  char v40; // [sp+18h] [bp-60h]@22
  unsigned __int8 v41; // [sp+24h] [bp-54h]@11
  unsigned __int8 v42; // [sp+25h] [bp-53h]@11
  float v43; // [sp+28h] [bp-50h]@15
  float v44; // [sp+30h] [bp-48h]@4
  int v45; // [sp+3Ch] [bp-3Ch]@1
  signed int v46; // [sp+40h] [bp-38h]@1
  signed int v47; // [sp+44h] [bp-34h]@1
  int v48; // [sp+48h] [bp-30h]@1
  int v49; // [sp+4Ch] [bp-2Ch]@1
  signed int v50; // [sp+50h] [bp-28h]@1

  _R10 = a4;
  v6 = a3;
  v7 = a2;
  v8 = this;
  BlockTessellator::tessellateBlockInWorld(this, a2, a3, a4, a5);
  v48 = 1050673152;
  v49 = 0;
  v50 = 1050673152;
  v45 = 1060110336;
  v46 = 1052770304;
  v47 = 1060110336;
  v39 = (BlockTessellator *)((char *)v8 + 724);
  AABB::set((BlockTessellator *)((char *)v8 + 724), (const Vec3 *)&v48, (const Vec3 *)&v45);
  __asm
  {
    VLDR            S2, [R10,#4]
    VLDR            S0, [R10]
    VLDR            S4, [R10,#8]
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S0, S0
    VLDR            S6, =-0.126
    VCVT.F32.S32    S4, S4
    VADD.F32        S2, S2, S6
  }
  v13 = Block::mDirt;
    VSTR            S0, [SP,#0x78+var_48]
    VSTR            S2, [SP,#0x78+var_44]
    VSTR            S4, [SP,#0x78+var_40]
  v14 = (BlockGraphics *)BlockGraphics::mBlocks[*(_BYTE *)(Block::mDirt + 4)];
  v15 = (*(int (__fastcall **)(_DWORD, signed int, int))(*(_DWORD *)Block::mDirt + 428))(Block::mDirt, 1, a5);
  v16 = *((_WORD *)v8 + 24);
  v17 = *(int (__fastcall **)(int, unsigned int))(*(_DWORD *)v13 + 424);
  if ( (_BYTE)v16 )
    v18 = v17(v13, v16 >> 8);
    v19 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(1, (unsigned int)v14), v18, 0);
  else
    v20 = v17(v13, a5);
    v19 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v14, _R10, v15, v20);
  BlockTessellator::tessellateFaceUp(v8, v7, v6, (const Vec3 *)&v44, v19);
  v21 = (BlockEntity *)BlockSource::getBlockEntity(*((BlockSource **)v8 + 1), _R10);
  v22 = v21;
  if ( v21 )
    if ( *(_DWORD *)BlockEntity::getType(v21) == 7 )
    {
      v23 = FlowerPotBlockEntity::getPlantItem(v22);
      v24 = (const Block *)v23;
      if ( v23 )
      {
        v25 = *(_BYTE *)(v23 + 4);
        v26 = (BlockGraphics *)BlockGraphics::mBlocks[v25];
        v37 = (BlockGraphics *)BlockGraphics::mBlocks[v25];
        v27 = FlowerPotBlockEntity::getItemData(v22);
        v28 = BlockGraphics::getBlockShape(v26);
        if ( *((_DWORD *)v8 + 1) )
        {
          v38 = v28;
          v29 = (*(int (__fastcall **)(const Block *))(*(_DWORD *)v24 + 392))(v24);
          Tessellator::color(v7, v29);
        }
        else
          Tessellator::color(v7, (const Color *)&Color::WHITE);
        if ( *((_BYTE *)v8 + 48) )
          _R1 = (unsigned __int8)Brightness::MAX;
          v41 = Brightness::MAX;
          v42 = Brightness::MAX;
          _R2 = (unsigned __int8)Brightness::MAX;
          BlockTessellatorCache::getLightColor(
            (BlockTessellatorCache *)&v41,
            (BlockTessellator *)((char *)v8 + 812),
            (int)_R10);
          _R1 = v41;
          _R2 = v42;
          v32 = *((_BYTE *)v8 + 48);
        __asm
          VMOV            S0, R2
          VLDR            S4, =0.0625
          VMOV            S2, R1
          VCVT.F32.U32    S0, S0
          VCVT.F32.U32    S2, S2
          VMUL.F32        S0, S0, S4
          VMUL.F32        S2, S2, S4
          VSTR            S0, [SP,#0x78+var_50]
          VSTR            S2, [SP,#0x78+var_4C]
        if ( _ZF )
          Tessellator::tex1((int)v7, (__int64 *)&v43);
        Tessellator::addOffset(v7, 0.0, 0.25, 0.0);
        if ( (v38 | 0x40) == 65 )
          if ( *((_BYTE *)v8 + 40) )
          {
            v33 = (BlockTessellator *)((char *)v8 + 8);
          }
          else
            v34 = (*(int (__fastcall **)(const Block *, int))(*(_DWORD *)v24 + 424))(v24, v27);
            v33 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v37, _R10, 0, v34);
          Vec3::Vec3((int)&v40, (int)_R10);
          BlockTessellator::tessellateCrossTexture(v8, v7, v33, (const Vec3 *)&v40, 0, v6, v36);
        else if ( v38 == 13 )
          AABB::set(__PAIR__(1052770304, (unsigned int)v39), 4521614025879977984LL, 0.625, 0.75, 0.625);
          BlockTessellator::tessellateBlockInWorld(v8, v7, v24, _R10, a5);
          AABB::set((unsigned int)v39, 0LL, 1.0, 1.0, 1.0);
        Tessellator::addOffset(v7, -0.0, -0.25, -0.0);
      }
    }
  return 1;
}


signed int __fastcall BlockTessellator::tessellateLilypadInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4)
{
  BlockTessellator *v4; // r7@1
  const Block *v6; // r6@1
  Tessellator *v7; // r4@1
  unsigned int v13; // r0@4
  int v19; // r0@6
  float v28; // ST0C_4@10
  float v29; // ST10_4@10
  float v34; // ST00_4@10
  float v35; // ST04_4@10
  float v40; // ST00_4@10
  float v41; // ST04_4@10
  float v46; // ST00_4@10
  float v47; // ST04_4@10
  float v50; // ST00_4@10
  float v51; // ST04_4@10
  float v54; // ST00_4@10
  float v55; // ST04_4@10
  float v58; // ST00_4@10
  float v59; // ST04_4@10
  float v62; // ST00_4@10
  float v63; // ST04_4@10
  float v65; // [sp+0h] [bp-A8h]@0
  float v66; // [sp+4h] [bp-A4h]@0
  float v67; // [sp+14h] [bp-94h]@10
  float v68; // [sp+24h] [bp-84h]@10
  unsigned __int8 v72; // [sp+34h] [bp-74h]@5
  unsigned __int8 v73; // [sp+35h] [bp-73h]@5
  float v74; // [sp+38h] [bp-70h]@9

  v4 = this;
  _R5 = a4;
  v6 = a3;
  v7 = a2;
  if ( *((_BYTE *)this + 40) )
    _R0 = (char *)this + 8;
  else
    _R0 = (char *)BlockGraphics::getTexture((BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)a3 + 4)], a4, 1, 0);
  __asm
  {
    VLDR            S16, [R0,#4]
    VLDR            S18, [R0,#8]
    VLDR            S20, [R0,#0xC]
    VLDR            S22, [R0,#0x10]
  }
  v13 = BlockPos::randomSeed(_R5);
    VLDR            S0, [R5]
    VLDR            S2, [R5,#8]
  _R2 = (unsigned __int16)v13 >> 16;
    VMOV.F32        S24, #0.5
    VMOV            S4, R2
  _R2 ^= 1u;
  _R1 = 1 - ((v13 >> 16) & 2);
    VMOV            S6, R2
    VCVT.F32.S32    S4, S4
    VCVT.F32.S32    S6, S6
    VMOV            S8, R1
  _R0 = 1 - (((unsigned __int8)(v13 >> 16) + 1) & 2);
    VCVT.F32.S32    S26, S8
    VCVT.F32.S32    S28, S0
    VMOV            S0, R0
    VCVT.F32.S32    S17, S2
    VCVT.F32.S32    S19, S0
    VMUL.F32        S30, S4, S24
    VMUL.F32        S21, S6, S24
  if ( *((_BYTE *)v4 + 48) )
    _R1 = (unsigned __int8)Brightness::MAX;
    v72 = Brightness::MAX;
    v73 = Brightness::MAX;
    _R2 = (unsigned __int8)Brightness::MAX;
    BlockTessellatorCache::getLightColor(
      (BlockTessellatorCache *)&v72,
      (BlockTessellator *)((char *)v4 + 812),
      (int)_R5);
    _R1 = v72;
    _R2 = v73;
    v19 = *((_BYTE *)v4 + 48);
    VMOV            S0, R2
    VMOV            S2, R1
    VCVT.F32.U32    S0, S0
    VCVT.F32.U32    S2, S2
    VADD.F32        S17, S17, S24
    VADD.F32        S28, S28, S24
    VLDR            S24, =0.0625
    VMUL.F32        S30, S30, S26
    VMUL.F32        S26, S21, S19
    VMUL.F32        S0, S0, S24
    VMUL.F32        S2, S2, S24
    VSTR            S0, [SP,#0xA8+var_70]
    VSTR            S2, [SP,#0xA8+var_6C]
  if ( _ZF )
    Tessellator::tex1((int)v7, (__int64 *)&v74);
  _R0 = (*(int (__fastcall **)(const Block *, _DWORD, const BlockPos *))(*(_DWORD *)v6 + 388))(
          v6,
          *((_DWORD *)v4 + 1),
          _R5);
  _R1 = (unsigned __int16)_R0 >> 8;
  _R2 = (_R0 >> 16) & 0xFF;
    VLDR            S8, =0.0039216
  _R2 = (unsigned __int8)_R0;
  _R0 >>= 24;
    VMOV            S6, R0
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VMUL.F32        S0, S0, S8
    VMUL.F32        S2, S2, S8
    VMUL.F32        S4, S4, S8
    VMUL.F32        S6, S6, S8
    VSTR            S0, [SP,#0xA8+var_84]
    VSTR            S2, [SP,#0xA8+var_80]
    VSTR            S4, [SP,#0xA8+var_7C]
    VSTR            S6, [SP,#0xA8+var_78]
  Tessellator::color(v7, (const Color *)&v68);
  _R0 = *((_DWORD *)_R5 + 1);
    VADD.F32        S21, S30, S28
    VADD.F32        S19, S30, S17
    VLDR            S23, =0.015625
    VSTR            S16, [SP,#0xA8+var_A8]
    VSTR            S18, [SP,#0xA8+var_A4]
    VSUB.F32        S2, S21, S26
    VADD.F32        S4, S19, S26
    VADD.F32        S0, S0, S23
    VMOV            R1, S2
    VMOV            R3, S4
    VMOV            R2, S0
  v28 = _R1;
  v29 = _R3;
  Tessellator::vertexUV(v7, _R1, _R2, _R3, v65, v66);
    VSUB.F32        S17, S17, S30
    VADD.F32        S2, S21, S26
    VSTR            S20, [SP,#0xA8+var_A8]
    VADD.F32        S4, S17, S26
    VMOV            R11, S2
    VMOV            R10, S4
  Tessellator::vertexUV(v7, _R11, _R2, _R10, v34, v35);
    VSUB.F32        S28, S28, S30
    VSUB.F32        S4, S17, S26
    VSTR            S22, [SP,#0xA8+var_A4]
    VADD.F32        S2, S28, S26
    VMOV            R6, S4
    VMOV            R7, S2
  Tessellator::vertexUV(v7, _R7, _R2, _R6, v40, v41);
    VSUB.F32        S2, S28, S26
    VSUB.F32        S4, S19, S26
    VMOV            R9, S2
    VMOV            R8, S4
  Tessellator::vertexUV(v7, _R9, _R2, _R8, v46, v47);
    VLDR            S0, [SP,#0xA8+var_84]
    VLDR            S2, [SP,#0xA8+var_80]
    VLDR            S4, [SP,#0xA8+var_7C]
    VLDR            S6, [SP,#0xA8+var_78]
    VMUL.F32        S4, S4, S24
    VMUL.F32        S6, S6, S24
    VSTR            S0, [SP,#0xA8+var_94]
    VSTR            S2, [SP,#0xA8+var_90]
    VSTR            S4, [SP,#0xA8+var_8C]
    VSTR            S6, [SP,#0xA8+var_88]
  Tessellator::color(v7, (const Color *)&v67);
    VLDR            S24, =0.005625
    VADD.F32        S0, S0, S24
  Tessellator::vertexUV(v7, _R9, _R2, _R8, v50, v51);
  Tessellator::vertexUV(v7, _R7, _R2, _R6, v54, v55);
  Tessellator::vertexUV(v7, _R11, _R2, _R10, v58, v59);
  Tessellator::vertexUV(v7, v28, _R2, v29, v62, v63);
  return 1;
}


signed int __fastcall BlockTessellator::tessellateEndPortalFrameInWorld(BlockTessellator *this, Tessellator *a2, const EndPortalFrameBlock *a3, const BlockPos *a4, int a5)
{
  BlockTessellator *v5; // r10@1
  Tessellator *v6; // r6@1
  const BlockPos *v7; // r9@1
  const EndPortalFrameBlock *v8; // r11@1
  unsigned __int64 *v9; // r0@1
  char v10; // r1@1
  int v11; // r1@1
  unsigned int v12; // r0@1
  signed int v13; // r0@4
  int v14; // r5@9
  int v15; // r5@9
  BlockPos *v16; // ST10_4@9
  Tessellator *v17; // r9@9
  int v18; // r2@9
  int v19; // r3@9
  int v20; // r4@9
  int v21; // r6@9
  int v22; // r7@9
  int v23; // r12@9
  __int64 v24; // r0@9

  v5 = this;
  v6 = a2;
  v7 = a4;
  v8 = a3;
  v9 = (unsigned __int64 *)Block::getBlockState(Block::mEndPortalFrame, 12);
  v10 = *v9;
  LOBYTE(v9) = *v9 >> 32;
  v11 = (unsigned int)a5 >> (v10 + 1 - (_BYTE)v9);
  v12 = (0xFu >> (4 - (_BYTE)v9)) & v11;
  if ( v12 == 3 )
  {
    v13 = 1;
  }
  else if ( v12 == 1 )
    v13 = 2;
  else
    if ( v12 )
      goto LABEL_8;
    v13 = 3;
  *((_DWORD *)v5 + 48) = v13;
LABEL_8:
  if ( EndPortalFrameBlock::hasEye((EndPortalFrameBlock *)a5, v11) )
    v14 = *((_DWORD *)v5 + 48);
    AABB::set((unsigned int)v5 + 724, 0LL, 1.0, 0.8125, 1.0);
    BlockTessellator::tessellateBlockInWorld(v5, v6, v8, v7, a5);
    *((_DWORD *)v5 + 48) = v14;
    *((_BYTE *)v5 + 40) = 1;
    v15 = (*(int (**)(void))(*(_DWORD *)BlockGraphics::mBlocks[*((_BYTE *)v8 + 4)] + 48))();
    v16 = v7;
    v17 = v6;
    v18 = *(_DWORD *)(v15 + 4);
    v19 = *(_DWORD *)(v15 + 8);
    v20 = *(_DWORD *)(v15 + 12);
    v21 = *(_DWORD *)(v15 + 16);
    v22 = *(_DWORD *)(v15 + 20);
    v23 = (int)v5 + 8;
    *(_DWORD *)v23 = *(_DWORD *)v15;
    *(_DWORD *)(v23 + 4) = v18;
    *(_DWORD *)(v23 + 8) = v19;
    *(_DWORD *)(v23 + 12) = v20;
    *(_DWORD *)(v23 + 16) = v21;
    *(_DWORD *)(v23 + 20) = v22;
    EntityInteraction::setInteractText((int *)v5 + 8, (int *)(v15 + 24));
    *((_DWORD *)v5 + 9) = *(_DWORD *)(v15 + 28);
    LODWORD(v24) = (char *)v5 + 724;
    HIDWORD(v24) = 1048576000;
    AABB::set(v24, 4503599628432703488LL, 0.75, 1.0, 0.75);
    BlockTessellator::tessellateBlockInWorld(v5, v17, v8, v16, a5);
    *((_BYTE *)v5 + 40) = 0;
    *((_DWORD *)v5 + 48) = 0;
  return 1;
}


int __fastcall BlockTessellator::tessellateAnvilPiece(int a1, float a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int *a13, signed int a14)
{
  Tessellator *v14; // r5@1
  int v18; // r8@1
  signed int v19; // r0@1
  const BlockPos *v20; // r9@3
  const Block *v21; // r11@3
  int *v22; // r1@4
  int *v23; // r2@4
  int v24; // t1@5
  unsigned int v27; // r6@6
  int v28; // r7@6
  const TextureUVCoordinateSet *v29; // r0@7
  __int64 v30; // r0@7
  const TextureUVCoordinateSet *v31; // r0@7
  const TextureUVCoordinateSet *v32; // r0@7
  const TextureUVCoordinateSet *v33; // r0@7
  const TextureUVCoordinateSet *v34; // r0@7
  const TextureUVCoordinateSet *v35; // r0@7
  int v37; // r6@12
  int v38; // r12@12
  Tessellator *v39; // r10@12
  int v40; // r2@12
  int v41; // r3@12
  int v42; // r4@12
  int v43; // r5@12
  int v44; // r7@12
  int result; // r0@13
  int v46; // [sp+0h] [bp-88h]@0
  float v47; // [sp+4h] [bp-84h]@0
  float v48; // [sp+8h] [bp-80h]@0
  char v49; // [sp+10h] [bp-78h]@7
  char v50; // [sp+1Ch] [bp-6Ch]@7
  char v51; // [sp+28h] [bp-60h]@7
  char v52; // [sp+34h] [bp-54h]@7
  char v53; // [sp+40h] [bp-48h]@7
  char v54; // [sp+4Ch] [bp-3Ch]@7

  v14 = (Tessellator *)LODWORD(a2);
  __asm { VLDR            S2, [SP,#0x88+arg_8] }
  v18 = a1;
  __asm
  {
    VLDR            S0, [SP,#0x88+arg_10]
    VMOV.F32        S6, S2
  }
  v19 = a14;
  if ( !_ZF )
    __asm
    {
      VMOVNE.F32      S6, S0
      VMOVNE.F32      S0, S2
    }
  v20 = (const BlockPos *)LODWORD(a4);
  __asm { VLDR            S2, [SP,#0x88+arg_C] }
  v21 = (const Block *)LODWORD(a3);
  __asm { VLDR            S4, [SP,#0x88+arg_4] }
  if ( a14 >= 1 )
    v22 = a13;
    v23 = (int *)(v18 + 188);
    do
      v24 = *v22;
      ++v22;
      --v19;
      *v23 = v24;
      ++v23;
    while ( v19 );
  __asm { VMOV.F32        S8, #0.5 }
  LODWORD(_R0) = v18 + 724;
    VMOV            R2, S4
    VADD.F32        S16, S2, S4
    VMUL.F32        S6, S6, S8
    VMUL.F32        S0, S0, S8
    VSUB.F32        S10, S8, S6
    VSUB.F32        S12, S8, S0
    VADD.F32        S2, S6, S8
    VADD.F32        S0, S0, S8
    VMOV            R1, S10
    VMOV            R3, S12
    VSTR            S2, [SP,#0x88+var_88]
    VSTR            S16, [SP,#0x88+var_84]
    VSTR            S0, [SP,#0x88+var_80]
  AABB::set(_R0, _R2, *(float *)&v46, v47, v48);
  v27 = BlockGraphics::mBlocks[*((_BYTE *)v21 + 4)];
  v28 = (*(int (__fastcall **)(const Block *, int))(*(_DWORD *)v21 + 424))(v21, a12);
  if ( a11 )
    Vec3::Vec3((int)&v54, (int)v20);
    v29 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v27, v28, 0);
    BlockTessellator::tessellateFaceDown((BlockTessellator *)v18, v14, v21, (const Vec3 *)&v54, v29);
    Vec3::Vec3((int)&v53, (int)v20);
    LODWORD(v30) = v27;
    HIDWORD(v30) = LODWORD(a5) != 0;
    v31 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v30, v28, 0);
    BlockTessellator::tessellateFaceUp((BlockTessellator *)v18, v14, v21, (const Vec3 *)&v53, v31);
    Vec3::Vec3((int)&v52, (int)v20);
    v32 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(2, v27), v28, 0);
    BlockTessellator::tessellateNorth((BlockTessellator *)v18, v14, v21, (const Vec3 *)&v52, v32);
    Vec3::Vec3((int)&v51, (int)v20);
    v33 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(3, v27), v28, 0);
    BlockTessellator::tessellateSouth((BlockTessellator *)v18, v14, v21, (const Vec3 *)&v51, v33);
    Vec3::Vec3((int)&v50, (int)v20);
    v34 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(4, v27), v28, 0);
    BlockTessellator::tessellateWest((BlockTessellator *)v18, v14, v21, (const Vec3 *)&v50, v34);
    Vec3::Vec3((int)&v49, (int)v20);
    v35 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(5, v27), v28, 0);
    BlockTessellator::tessellateEast((BlockTessellator *)v18, v14, v21, (const Vec3 *)&v49, v35);
  else
    *(_BYTE *)(v18 + 49) = a12;
    _ZF = LODWORD(a5) == 0;
    if ( a5 == 0.0 )
      _ZF = *(_BYTE *)(v18 + 40) == 0;
    if ( _ZF )
      *(_BYTE *)(v18 + 40) = 1;
      v37 = BlockGraphics::getTexture(v27, 0, 0);
      v38 = v18 + 8;
      v39 = v14;
      v40 = *(_DWORD *)(v37 + 4);
      v41 = *(_DWORD *)(v37 + 8);
      v42 = *(_DWORD *)(v37 + 12);
      v43 = *(_DWORD *)(v37 + 16);
      v44 = *(_DWORD *)(v37 + 20);
      *(_DWORD *)v38 = *(_DWORD *)v37;
      *(_DWORD *)(v38 + 4) = v40;
      *(_DWORD *)(v38 + 8) = v41;
      *(_DWORD *)(v38 + 12) = v42;
      *(_DWORD *)(v38 + 16) = v43;
      *(_DWORD *)(v38 + 20) = v44;
      EntityInteraction::setInteractText((int *)(v18 + 32), (int *)(v37 + 24));
      *(_DWORD *)(v18 + 36) = *(_DWORD *)(v37 + 28);
      BlockTessellator::tessellateBlockInWorld((BlockTessellator *)v18, v39, v21, v20, a12);
      *(_BYTE *)(v18 + 40) = 0;
    else
      BlockTessellator::tessellateBlockInWorld((BlockTessellator *)v18, v14, v21, v20, a12);
  __asm { VMOV            R0, S16 }
  return result;
}


int __fastcall BlockTessellator::_getBlockColor(BlockTessellator *this, const BlockPos *a2, const Block *a3, int a4)
{
  int v4; // r6@1
  BlockTessellator *v5; // r4@1
  const BlockPos *v6; // r7@1
  const Block *v7; // r8@1
  int result; // r0@1

  v4 = a4;
  v5 = this;
  v6 = a2;
  v7 = a3;
  _R0 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a4 + 392))(a4, *((_DWORD *)a2 + 1));
  _R1 = (unsigned __int16)_R0 >> 8;
  _R2 = (_R0 >> 16) & 0xFF;
  __asm
  {
    VLDR            S8, =0.0039216
    VMOV            S0, R2
  }
  _R2 = (unsigned __int8)_R0;
  _R0 >>= 24;
    VMOV            S4, R2
    VMOV            S2, R1
    VMOV            S6, R0
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VCVT.F32.S32    S6, S6
    VMUL.F32        S0, S0, S8
    VMUL.F32        S2, S2, S8
    VMUL.F32        S4, S4, S8
    VMUL.F32        S6, S6, S8
    VSTR            S0, [R4]
    VSTR            S2, [R4,#4]
    VSTR            S4, [R4,#8]
    VSTR            S6, [R4,#0xC]
  result = (*(int (__fastcall **)(int, _DWORD, const Block *))(*(_DWORD *)v4 + 400))(v4, *((_DWORD *)v6 + 1), v7);
  if ( result == 1 )
    result = 1065353216;
    *((_DWORD *)v5 + 2) = 1065353216;
  return result;
}


signed int __fastcall BlockTessellator::tessellateVineInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  const Block *v5; // r11@1
  int v7; // r0@1
  int v8; // r10@1
  float v9; // r3@1
  float v10; // r4@1
  float v11; // r5@1
  float v12; // r6@1
  int v13; // r7@1
  int *v14; // r0@1
  float v15; // r3@2
  float v16; // r4@2
  float v17; // r5@2
  float v18; // r6@2
  int v19; // r7@2
  int v30; // r0@5
  float v37; // ST00_4@10
  float v38; // ST04_4@10
  float v42; // ST00_4@10
  float v43; // ST04_4@10
  float v47; // ST00_4@10
  float v48; // ST04_4@10
  float v52; // ST00_4@10
  float v53; // ST04_4@10
  float v57; // ST00_4@10
  float v58; // ST04_4@10
  float v62; // ST00_4@10
  float v63; // ST04_4@10
  float v67; // ST00_4@10
  float v68; // ST04_4@10
  float v75; // ST00_4@12
  float v76; // ST04_4@12
  float v80; // ST00_4@12
  float v81; // ST04_4@12
  float v85; // ST00_4@12
  float v86; // ST04_4@12
  float v90; // ST00_4@12
  float v91; // ST04_4@12
  float v95; // ST00_4@12
  float v96; // ST04_4@12
  float v100; // ST00_4@12
  float v101; // ST04_4@12
  float v105; // ST00_4@12
  float v106; // ST04_4@12
  float v113; // ST00_4@14
  float v114; // ST04_4@14
  float v118; // ST00_4@14
  float v119; // ST04_4@14
  float v123; // ST00_4@14
  float v124; // ST04_4@14
  float v128; // ST00_4@14
  float v129; // ST04_4@14
  float v133; // ST00_4@14
  float v134; // ST04_4@14
  float v138; // ST00_4@14
  float v139; // ST04_4@14
  float v143; // ST00_4@14
  float v144; // ST04_4@14
  float v151; // ST00_4@16
  float v152; // ST04_4@16
  float v156; // ST00_4@16
  float v157; // ST04_4@16
  float v161; // ST00_4@16
  float v162; // ST04_4@16
  float v166; // ST00_4@16
  float v167; // ST04_4@16
  float v171; // ST00_4@16
  float v172; // ST04_4@16
  float v176; // ST00_4@16
  float v177; // ST04_4@16
  float v181; // ST00_4@16
  float v182; // ST04_4@16
  float v191; // ST00_4@18
  float v192; // ST04_4@18
  float v197; // ST00_4@18
  float v198; // ST04_4@18
  float v203; // ST00_4@18
  float v204; // ST04_4@18
  void *v205; // r0@19
  unsigned int *v207; // r2@21
  signed int v208; // r1@23
  float v209; // [sp+0h] [bp-B0h]@0
  float v210; // [sp+0h] [bp-B0h]@17
  float v211; // [sp+4h] [bp-ACh]@0
  Tessellator *v212; // [sp+8h] [bp-A8h]@1
  BlockTessellator *v213; // [sp+Ch] [bp-A4h]@1
  unsigned __int8 v214; // [sp+10h] [bp-A0h]@17
  unsigned __int8 v215; // [sp+14h] [bp-9Ch]@4
  unsigned __int8 v216; // [sp+15h] [bp-9Bh]@4
  float v217; // [sp+18h] [bp-98h]@8
  float v218; // [sp+20h] [bp-90h]@3
  int v219; // [sp+30h] [bp-80h]@1
  float v220; // [sp+34h] [bp-7Ch]@1
  float v221; // [sp+38h] [bp-78h]@1
  float v222; // [sp+3Ch] [bp-74h]@1
  float v223; // [sp+40h] [bp-70h]@1
  int v224; // [sp+44h] [bp-6Ch]@1
  int v225; // [sp+48h] [bp-68h]@1
  int v226; // [sp+4Ch] [bp-64h]@1

  v212 = a2;
  v213 = this;
  v5 = a3;
  _R8 = a4;
  v7 = BlockGraphics::getTexture((BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)a3 + 4)], a4, 0, 0);
  v8 = v7;
  v9 = *(float *)(v7 + 4);
  v10 = *(float *)(v7 + 8);
  v11 = *(float *)(v7 + 12);
  v12 = *(float *)(v7 + 16);
  v13 = *(_DWORD *)(v7 + 20);
  v219 = *(_DWORD *)v7;
  v220 = v9;
  v221 = v10;
  v222 = v11;
  v223 = v12;
  v224 = v13;
  v14 = sub_119C854(&v225, (int *)(v7 + 24));
  v226 = *(_DWORD *)(v8 + 28);
  if ( *((_BYTE *)v213 + 40) )
  {
    v15 = *((float *)v213 + 3);
    v16 = *((float *)v213 + 4);
    v17 = *((float *)v213 + 5);
    v18 = *((float *)v213 + 6);
    v19 = *((_DWORD *)v213 + 7);
    v219 = *((_DWORD *)v213 + 2);
    v220 = v15;
    v221 = v16;
    v222 = v17;
    v223 = v18;
    v224 = v19;
    EntityInteraction::setInteractText(v14, (int *)v213 + 8);
    v226 = *((_DWORD *)v213 + 9);
  }
  _R0 = (*(int (__fastcall **)(const Block *, _DWORD, const BlockPos *, int))(*(_DWORD *)v5 + 392))(
          v5,
          *((_DWORD *)v213 + 1),
          _R8,
          a5);
  _R1 = (unsigned __int16)_R0 >> 8;
  _R2 = (_R0 >> 16) & 0xFF;
  __asm
    VLDR            S8, =0.0039216
    VMOV            S0, R2
  _R2 = (unsigned __int8)_R0;
  _R0 >>= 24;
    VMOV            S2, R1
    VMOV            S4, R2
    VMOV            S6, R0
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VCVT.F32.S32    S6, S6
    VMUL.F32        S0, S0, S8
    VMUL.F32        S2, S2, S8
    VMUL.F32        S4, S4, S8
    VMUL.F32        S6, S6, S8
    VSTR            S0, [SP,#0xB0+var_90]
    VSTR            S2, [SP,#0xB0+var_8C]
    VSTR            S4, [SP,#0xB0+var_88]
    VSTR            S6, [SP,#0xB0+var_84]
  Tessellator::color(v212, (const Color *)&v218);
  if ( *((_BYTE *)v213 + 48) )
    _R1 = (unsigned __int8)Brightness::MAX;
    v215 = Brightness::MAX;
    v216 = Brightness::MAX;
    _R2 = (unsigned __int8)Brightness::MAX;
  else
    BlockTessellatorCache::getLightColor(
      (BlockTessellatorCache *)&v215,
      (BlockTessellator *)((char *)v213 + 812),
      (int)_R8);
    _R1 = v215;
    _R2 = v216;
    v30 = *((_BYTE *)v213 + 48);
    VLDR            S4, =0.0625
    VCVT.F32.U32    S0, S0
    VCVT.F32.U32    S2, S2
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S4
    VSTR            S0, [SP,#0xB0+var_98]
    VSTR            S2, [SP,#0xB0+var_94]
  if ( _ZF )
    Tessellator::tex1((int)v212, (__int64 *)&v217);
    VLDR            S22, [SP,#0xB0+var_7C]
    VLDR            S16, [SP,#0xB0+var_78]
    VLDR            S18, [SP,#0xB0+var_74]
    VLDR            S20, [SP,#0xB0+var_70]
  if ( VineBlock::VINE_WEST & a5 )
    __asm
    {
      VLDR            S0, [R8]
      VMOV.F32        S24, #1.0
      VLDR            S2, [R8,#4]
      VLDR            S4, [R8,#8]
      VCVT.F32.S32    S0, S0
      VLDR            S26, =0.05
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
      VADD.F32        S0, S0, S26
      VADD.F32        S2, S2, S24
      VADD.F32        S4, S4, S24
      VMOV            R1, S0
      VMOV            R2, S2
      VMOV            R3, S4
      VSTR            S22, [SP,#0xB0+var_B0]
      VSTR            S16, [SP,#0xB0+var_AC]
    }
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v209, v211);
      VSTR            S20, [SP,#0xB0+var_AC]
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v37, v38);
      VSTR            S18, [SP,#0xB0+var_B0]
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v42, v43);
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v47, v48);
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v52, v53);
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v57, v58);
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v62, v63);
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v67, v68);
  if ( VineBlock::VINE_EAST & a5 )
      VLDR            S26, =0.95
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v75, v76);
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v80, v81);
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v85, v86);
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v90, v91);
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v95, v96);
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v100, v101);
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v105, v106);
  if ( VineBlock::VINE_NORTH & a5 )
      VADD.F32        S0, S0, S24
      VADD.F32        S4, S4, S26
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v113, v114);
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v118, v119);
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v123, v124);
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v128, v129);
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v133, v134);
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v138, v139);
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v143, v144);
  if ( VineBlock::VINE_SOUTH & a5 )
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v151, v152);
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v156, v157);
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v161, v162);
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v166, v167);
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v171, v172);
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v176, v177);
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v181, v182);
  BlockSource::getBlockID(
    (BlockSource *)&v214,
    *((_DWORD *)v213 + 1),
    *(_QWORD *)_R8,
    (*(_QWORD *)_R8 >> 32) + 1,
    *((_DWORD *)_R8 + 2));
  if ( Block::mSolid[v214] )
      VMOV.F32        S26, #1.0
      VLDR            S2, [R8,#8]
    _R0 = *((_DWORD *)_R8 + 1) + 1;
      VLDR            S24, =-0.05
      VMOV            S4, R0
      VMOV            R3, S2
      VMOV            R2, S4
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v210, v211);
      VADD.F32        S2, S2, S26
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v191, v192);
    __asm { VLDR            S0, [R8] }
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v197, v198);
      VMOV            S0, R0
      VLDR            S2, [R8]
      VMOV            R1, S2
      VMOV            R2, S0
    Tessellator::vertexUV(v212, _R1, _R2, _R3, v203, v204);
  v205 = (void *)(v225 - 12);
  if ( (int *)(v225 - 12) != &dword_28898C0 )
    v207 = (unsigned int *)(v225 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v208 = __ldrex(v207);
      while ( __strex(v208 - 1, v207) );
    else
      v208 = (*v207)--;
    if ( v208 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v205);
  return 1;
}


signed int __fastcall BlockTessellator::tessellateAnvilInWorld(BlockTessellator *this, Tessellator *a2, const AnvilBlock *a3, const BlockPos *a4, int a5)
{
  const AnvilBlock *v5; // r5@1
  BlockTessellator *v6; // r7@1
  Tessellator *v7; // r6@1
  const BlockPos *v8; // r4@1
  int v9; // r0@1

  v5 = a3;
  v6 = this;
  v7 = a2;
  v8 = a4;
  v9 = (*(int (__fastcall **)(const AnvilBlock *, int))(*(_DWORD *)a3 + 384))(a3, a5);
  Tessellator::color(v7, v9);
  BlockTessellator::tessellateAnvilInWorld(v6, v7, v5, v8, a5, 0);
  return 1;
}


int __fastcall BlockTessellator::setRenderLayer(int result, int a2)
{
  *(_DWORD *)(result + 44) = a2;
  return result;
}


signed int __fastcall BlockTessellator::tessellateHopperInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  BlockTessellator *v5; // r7@1
  const BlockPos *v6; // r4@1
  const Block *v7; // r5@1
  Tessellator *v8; // r6@1
  int v11; // r0@3
  unsigned __int8 v23; // [sp+Ch] [bp-24h]@2
  unsigned __int8 v24; // [sp+Dh] [bp-23h]@2
  float v25; // [sp+10h] [bp-20h]@6

  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  if ( *((_BYTE *)this + 48) )
  {
    _R1 = (unsigned __int8)Brightness::MAX;
    v23 = Brightness::MAX;
    v24 = Brightness::MAX;
    _R2 = (unsigned __int8)Brightness::MAX;
  }
  else
    BlockTessellatorCache::getLightColor(
      (BlockTessellatorCache *)&v23,
      (BlockTessellator *)((char *)this + 812),
      (int)a4);
    _R1 = v23;
    _R2 = v24;
    v11 = *((_BYTE *)v5 + 48);
  __asm
    VMOV            S0, R2
    VLDR            S4, =0.0625
    VMOV            S2, R1
    VCVT.F32.U32    S0, S0
    VCVT.F32.U32    S2, S2
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S4
    VSTR            S0, [SP,#0x30+var_20]
    VSTR            S2, [SP,#0x30+var_1C]
  if ( _ZF )
    Tessellator::tex1((int)v8, (__int64 *)&v25);
  _R0 = (*(int (__fastcall **)(const Block *, int))(*(_DWORD *)v7 + 384))(v7, a5);
  _R1 = (_R0 >> 16) & 0xFF;
  _R2 = (unsigned __int16)_R0 >> 8;
  _R0 = (unsigned __int8)_R0;
    VLDR            S6, =0.0039216
    VMOV            S0, R1
    VMOV            S4, R0
    VMOV            S2, R2
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VMUL.F32        S0, S0, S6
    VMUL.F32        S2, S2, S6
    VMUL.F32        S4, S4, S6
    VMOV            R1, S0
    VMOV            R2, S2
    VMOV            R3, S4
  Tessellator::color(v8, _R1, _R2, _R3, 1.0);
  BlockTessellator::tessellateHopperInWorld(v5, v8, v7, v6, a5, 0);
  return 1;
}


void __fastcall BlockTessellator::tessellateEast(BlockTessellator *this, Tessellator *a2, const Block *a3, const Vec3 *a4, const TextureUVCoordinateSet *a5)
{
  const TextureUVCoordinateSet *v6; // r4@1
  const Block *v7; // r8@1
  Tessellator *v9; // r10@1
  float v10; // r1@3
  float v11; // r3@3
  int v12; // r5@3
  int v13; // r6@3
  int v14; // r7@3
  int v22; // r1@3
  _BOOL4 v23; // r0@12
  int v25; // r0@17
  int v40; // r0@25
  int v41; // r0@27
  float v59; // ST00_4@37
  float v60; // ST04_4@37
  float v62; // ST00_4@37
  float v63; // ST04_4@37
  float v64; // ST00_4@37
  float v65; // ST04_4@37
  void *v66; // r0@38
  unsigned int *v67; // r2@40
  signed int v68; // r1@42
  float v69; // [sp+0h] [bp-138h]@0
  float v70; // [sp+0h] [bp-138h]@30
  float v71; // [sp+0h] [bp-138h]@32
  float v72; // [sp+0h] [bp-138h]@34
  float v73; // [sp+4h] [bp-134h]@0
  float v74; // [sp+4h] [bp-134h]@30
  float v75; // [sp+4h] [bp-134h]@32
  float v76; // [sp+4h] [bp-134h]@34
  float v90; // [sp+3Ch] [bp-FCh]@35
  float v91; // [sp+44h] [bp-F4h]@34
  float v92; // [sp+54h] [bp-E4h]@33
  float v93; // [sp+5Ch] [bp-DCh]@32
  float v94; // [sp+6Ch] [bp-CCh]@31
  float v95; // [sp+74h] [bp-C4h]@30
  float v96; // [sp+84h] [bp-B4h]@29
  float v97; // [sp+8Ch] [bp-ACh]@28
  char v98; // [sp+9Ch] [bp-9Ch]@11
  int v99; // [sp+A8h] [bp-90h]@3
  float v100; // [sp+ACh] [bp-8Ch]@3
  float v101; // [sp+B0h] [bp-88h]@3
  int v102; // [sp+B4h] [bp-84h]@3
  int v103; // [sp+B8h] [bp-80h]@3
  int v104; // [sp+BCh] [bp-7Ch]@3
  int v105; // [sp+C0h] [bp-78h]@3
  int v106; // [sp+C4h] [bp-74h]@3

  _R11 = this;
  v6 = a5;
  v7 = a3;
  _R9 = a4;
  v9 = a2;
  if ( *((_BYTE *)this + 40) )
    v6 = (BlockTessellator *)((char *)this + 8);
  v10 = *((float *)v6 + 1);
  v11 = *((float *)v6 + 2);
  v12 = *((_DWORD *)v6 + 3);
  v13 = *((_DWORD *)v6 + 4);
  v14 = *((_DWORD *)v6 + 5);
  v99 = *(_DWORD *)v6;
  v100 = v10;
  v101 = v11;
  v102 = v12;
  v103 = v13;
  v104 = v14;
  sub_119C854(&v105, (int *)v6 + 6);
  v106 = *((_DWORD *)v6 + 7);
  Tessellator::quadFacing(v9, 5);
  _R6 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v99, *((float *)_R11 + 183), 0.0);
  _R4 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v99, *((float *)_R11 + 186), 0.0);
  _R7 = TextureUVCoordinateSet::inverseOffsetHeight((TextureUVCoordinateSet *)&v99, *((float *)_R11 + 185), 0.0);
  _R0 = TextureUVCoordinateSet::inverseOffsetHeight((TextureUVCoordinateSet *)&v99, *((float *)_R11 + 182), 0.0);
  __asm { VMOV            S0, R4 }
  v22 = *((_BYTE *)_R11 + 43);
  __asm
  {
    VMOV            S20, R6
    VMOV.F32        S21, S0
  }
  if ( _ZF )
    __asm
    {
      VMOVEQ.F32      S21, S20
      VMOVEQ.F32      S20, S0
    }
    VLDR            S0, [R11,#0x2DC]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    goto LABEL_50;
    VMOV.F32        S0, #1.0
    VLDR            S2, [R11,#0x2E8]
    VCMPE.F32       S2, S0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
LABEL_50:
      VSUB.F32        S0, S20, S21
      VLDR            S21, [SP,#0x138+var_8C]
      VADD.F32        S20, S0, S21
    VLDR            S0, [R11,#0x2D8]
    VMOV            S16, R7
    VMOV            S24, R0
    goto LABEL_51;
    VLDR            S2, [R11,#0x2E4]
LABEL_51:
      VSUB.F32        S0, S24, S16
      VLDR            S16, [SP,#0x138+var_88]
      VADD.F32        S24, S0, S16
  BlockPos::BlockPos((int)&v98, (int)_R9);
  if ( !*((_BYTE *)_R11 + 48) )
    v23 = BlockGraphics::isTextureIsotropic((BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v7 + 4)], 5);
    _ZF = v23 == 1;
    if ( v23 == 1 )
      _ZF = *((_DWORD *)_R11 + 52) == 0;
    if ( _ZF )
      *((_DWORD *)_R11 + 52) = ((unsigned int)BlockPos::randomSeed((BlockPos *)&v98) >> 24) & 3;
  v25 = *((_DWORD *)_R11 + 52);
  if ( v25 == 1 )
    _R7 = TextureUVCoordinateSet::inverseOffsetWidth((TextureUVCoordinateSet *)&v99, *((float *)_R11 + 185), 0.0);
      VMOV.F32        S16, #1.0
      VLDR            S0, [R11,#0x2E8]
      VSUB.F32        S0, S16, S0
      VMOV            R1, S0
    _R6 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v99, _R1, 0.0);
    _R4 = TextureUVCoordinateSet::inverseOffsetWidth((TextureUVCoordinateSet *)&v99, *((float *)_R11 + 182), 0.0);
      VLDR            S0, [R11,#0x2DC]
    _R0 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v99, _R1, 0.0);
      VMOV            S20, R7
      VMOV            S16, R6
      VMOV            S2, R4
      VMOV            S24, R0
    goto LABEL_24;
  if ( v25 == 3 )
    _R6 = TextureUVCoordinateSet::inverseOffsetWidth((TextureUVCoordinateSet *)&v99, *((float *)_R11 + 183), 0.0);
    _R4 = TextureUVCoordinateSet::inverseOffsetWidth((TextureUVCoordinateSet *)&v99, *((float *)_R11 + 186), 0.0);
    _R7 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v99, *((float *)_R11 + 185), 0.0);
    _R0 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v99, *((float *)_R11 + 182), 0.0);
      VMOV            S21, R6
      VMOV            S20, R4
      VMOV            S16, R7
      VMOV.F32        S2, S20
      VMOV.F32        S4, S16
      VMOV.F32        S27, S24
      VMOV.F32        S0, S21
    goto LABEL_25;
    VMOV.F32        S2, S20
    VMOV.F32        S4, S16
    VMOV.F32        S27, S24
    VMOV.F32        S0, S21
    _R6 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v99, *((float *)_R11 + 182), 0.0);
    _R4 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v99, *((float *)_R11 + 183), 0.0);
    _R7 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v99, *((float *)_R11 + 185), 0.0);
    _R0 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v99, *((float *)_R11 + 186), 0.0);
      VMOV            S2, R6
      VMOV            S24, R4
      VMOV            S16, R0
LABEL_24:
      VMOV.F32        S21, S20
      VMOV.F32        S4, S24
      VMOV.F32        S27, S16
      VMOV.F32        S0, S2
LABEL_25:
  v40 = *((_BYTE *)_R11 + 1);
    VLDR            S18, [R11,#0x2F0]
    VLDR            S22, [R11,#0x2DC]
    VLDR            S30, [R11,#0x2E0]
    VLDR            S23, [R11,#0x2E4]
    VLDR            S25, [R11,#0x2E8]
    VLDR            S19, [R11,#0x2D8]
    VLDR            S28, [R9]
    VLDR            S26, [R9,#4]
    VLDR            S17, [R9,#8]
    VSTR            S4, [SP,#0x138+var_128]
    VSTR            S2, [SP,#0x138+var_124]
    VSTR            S0, [SP,#0x138+var_130]
  if ( !_ZF )
    Tessellator::normal(v9, (const Vec3 *)Vec3::UNIT_X);
  __asm { VMUL.F32        S0, S25, S18 }
  v41 = *((_BYTE *)_R11 + 50);
    VMUL.F32        S2, S23, S18
    VMUL.F32        S8, S19, S18
    VMUL.F32        S4, S30, S18
    VMUL.F32        S6, S22, S18
    VADD.F32        S29, S0, S17
    VADD.F32        S0, S2, S26
    VADD.F32        S31, S26, S8
    VADD.F32        S18, S4, S28
    VSTR            S0, [SP,#0x138+var_12C]
    VADD.F32        S0, S17, S6
    VSTR            S0, [SP,#0x138+var_120]
      VMOV            R5, S18
      VMOV            R4, S31
      VMOV            R6, S29
      VSTR            S21, [SP,#0x138+var_138]
      VSTR            S27, [SP,#0x138+var_134]
    Tessellator::vertexUV(v9, _R5, _R4, _R6, v69, v73);
      VLDR            S0, [SP,#0x138+var_120]
      VMOV            R7, S0
      VSTR            S20, [SP,#0x138+var_138]
      VSTR            S24, [SP,#0x138+var_134]
    Tessellator::vertexUV(v9, _R5, _R4, _R7, v59, v60);
      VLDR            S0, [SP,#0x138+var_12C]
      VMOV            R4, S0
      VLDR            S0, [SP,#0x138+var_124]
      VSTR            S0, [SP,#0x138+var_138]
      VLDR            S0, [SP,#0x138+var_128]
      VSTR            S0, [SP,#0x138+var_134]
    Tessellator::vertexUV(v9, _R5, _R4, _R7, v62, v63);
      VLDR            S0, [SP,#0x138+var_130]
      VSTR            S16, [SP,#0x138+var_134]
    Tessellator::vertexUV(v9, _R5, _R4, _R6, v64, v65);
  else
      VMOV.F32        S1, #1.0
      VLDR            S4, [R11,#0xA8]
      VLDR            S6, [R11,#0x78]
      VSTR            S4, [SP,#0x138+var_104]
      VMUL.F32        S4, S0, S4
      VSTR            S6, [SP,#0x138+var_100]
      VLDR            S8, [R11,#0x58]
      VLDR            S12, [R11,#0x5C]
      VSUB.F32        S2, S1, S0
      VLDR            S3, [R11,#0x48]
      VLDR            S14, [R11,#0x4C]
      VLDR            S5, [R11,#0xAC]
      VLDR            S28, [R11,#0x7C]
      VSTR            S8, [SP,#0x138+var_110]
      VMUL.F32        S8, S0, S8
      VSTR            S12, [SP,#0x138+var_10C]
      VMUL.F32        S12, S0, S12
      VSTR            S3, [SP,#0x138+var_118]
      VMUL.F32        S6, S2, S6
      VSTR            S14, [SP,#0x138+var_114]
      VMUL.F32        S14, S2, S14
      VSTR            S5, [SP,#0x138+var_11C]
      VMUL.F32        S3, S2, S3
      VLDR            S10, [R11,#0x2D8]
      VMUL.F32        S5, S0, S5
      VLDR            S26, [R11,#0x44]
      VSUB.F32        S1, S1, S10
      VLDR            S30, [R11,#0x54]
      VLDR            S17, [R11,#0xA4]
      VLDR            S19, [R11,#0x74]
      VADD.F32        S4, S6, S4
      VLDR            S7, [R11,#0x50]
      VMUL.F32        S6, S2, S28
      VLDR            S22, [R11,#0x60]
      VADD.F32        S8, S3, S8
      VLDR            S23, [R11,#0xB0]
      VADD.F32        S12, S14, S12
      VLDR            S25, [R11,#0x80]
      VMUL.F32        S14, S0, S30
      VSTR            S7, [SP,#0x138+var_108]
      VMUL.F32        S3, S2, S26
      VMUL.F32        S4, S4, S10
      VADD.F32        S6, S6, S5
      VMUL.F32        S8, S8, S1
      VMUL.F32        S12, S12, S1
      VADD.F32        S14, S3, S14
      VMUL.F32        S6, S6, S10
      VADD.F32        S4, S4, S8
      VMUL.F32        S8, S0, S17
      VMUL.F32        S14, S14, S1
      VADD.F32        S6, S6, S12
      VMUL.F32        S12, S2, S19
      VADD.F32        S8, S12, S8
      VMUL.F32        S12, S0, S22
      VMUL.F32        S0, S0, S23
      VMUL.F32        S8, S8, S10
      VADD.F32        S8, S8, S14
      VMUL.F32        S14, S2, S7
      VMUL.F32        S2, S2, S25
      VSTR            S8, [SP,#0x138+var_AC]
      VSTR            S4, [SP,#0x138+var_A8]
      VADD.F32        S0, S2, S0
      VSTR            S6, [SP,#0x138+var_A4]
      VMUL.F32        S0, S0, S10
      VADD.F32        S0, S0, S12
      VSTR            S0, [SP,#0x138+var_A0]
    Tessellator::color(v9, (const Color *)&v97);
    _R0 = *((_BYTE *)_R11 + 184);
    _R1 = *((_BYTE *)_R11 + 185);
      VLDR            S4, =0.0625
      VMOV            S2, R0
      VMOV            S0, R1
      VCVT.F32.U32    S0, S0
      VCVT.F32.U32    S2, S2
      VMUL.F32        S0, S0, S4
      VMUL.F32        S2, S2, S4
      VSTR            S0, [SP,#0x138+var_B4]
      VSTR            S2, [SP,#0x138+var_B0]
    if ( !*((_BYTE *)_R11 + 48) )
      Tessellator::tex1((int)v9, (__int64 *)&v96);
      VMOV            R9, S18
      VMOV            R7, S31
      VMOV            R8, S29
    Tessellator::vertexUV(v9, _R9, _R7, _R8, v69, v73);
      VMOV.F32        S4, #1.0
      VLDR            S2, [R11,#0x2DC]
      VLDR            S14, [SP,#0x138+var_110]
      VLDR            S3, [SP,#0x138+var_104]
      VMUL.F32        S6, S2, S30
      VLDR            S7, [SP,#0x138+var_10C]
      VMUL.F32        S10, S2, S17
      VLDR            S11, [SP,#0x138+var_11C]
      VLDR            S1, [SP,#0x138+var_118]
      VLDR            S5, [SP,#0x138+var_100]
      VMUL.F32        S7, S2, S7
      VMOV.F32        S27, S4
      VLDR            S9, [SP,#0x138+var_114]
      VLDR            S18, [SP,#0x138+var_108]
      VMUL.F32        S11, S2, S11
      VMUL.F32        S15, S2, S22
      VLDR            S0, [R11,#0x2D8]
      VSUB.F32        S4, S27, S2
      VMUL.F32        S2, S2, S23
      VSUB.F32        S21, S27, S0
      VMUL.F32        S8, S4, S26
      VMUL.F32        S12, S4, S19
      VMUL.F32        S1, S4, S1
      VMUL.F32        S5, S4, S5
      VMUL.F32        S9, S4, S9
      VMUL.F32        S13, S4, S28
      VMUL.F32        S18, S4, S18
      VMUL.F32        S4, S4, S25
      VADD.F32        S6, S8, S6
      VADD.F32        S8, S12, S10
      VADD.F32        S10, S1, S14
      VADD.F32        S12, S5, S3
      VADD.F32        S14, S9, S7
      VADD.F32        S1, S13, S11
      VADD.F32        S2, S4, S2
      VADD.F32        S3, S18, S15
      VMUL.F32        S4, S6, S21
      VMUL.F32        S6, S8, S0
      VMUL.F32        S8, S10, S21
      VMUL.F32        S10, S12, S0
      VMUL.F32        S12, S14, S21
      VMUL.F32        S14, S1, S0
      VMUL.F32        S0, S2, S0
      VMUL.F32        S1, S3, S21
      VADD.F32        S2, S6, S4
      VADD.F32        S4, S10, S8
      VADD.F32        S6, S14, S12
      VADD.F32        S0, S0, S1
      VSTR            S2, [SP,#0x138+var_C4]
      VSTR            S4, [SP,#0x138+var_C0]
      VSTR            S6, [SP,#0x138+var_BC]
      VSTR            S0, [SP,#0x138+var_B8]
    Tessellator::color(v9, (const Color *)&v95);
    _R0 = *((_BYTE *)_R11 + 182);
    _R1 = *((_BYTE *)_R11 + 183);
      VMOV.F32        S21, S4
      VSTR            S0, [SP,#0x138+var_CC]
      VSTR            S2, [SP,#0x138+var_C8]
      Tessellator::tex1((int)v9, (__int64 *)&v94);
      VMOV            R6, S0
    Tessellator::vertexUV(v9, _R9, _R7, _R6, v70, v74);
      VMOV.F32        S24, S27
      VSUB.F32        S4, S27, S0
      VMUL.F32        S6, S0, S30
      VMUL.F32        S10, S0, S17
      VMUL.F32        S14, S0, S14
      VMUL.F32        S3, S0, S3
      VMUL.F32        S7, S0, S7
      VMUL.F32        S15, S0, S22
      VLDR            S2, [R11,#0x2E4]
      VMUL.F32        S11, S0, S11
      VSUB.F32        S20, S27, S2
      VADD.F32        S0, S4, S0
      VMUL.F32        S4, S6, S20
      VMUL.F32        S6, S8, S2
      VMUL.F32        S8, S10, S20
      VMUL.F32        S10, S12, S2
      VMUL.F32        S12, S14, S20
      VMUL.F32        S14, S1, S2
      VMUL.F32        S0, S0, S2
      VMUL.F32        S1, S3, S20
      VSTR            S2, [SP,#0x138+var_DC]
      VSTR            S4, [SP,#0x138+var_D8]
      VSTR            S6, [SP,#0x138+var_D4]
      VSTR            S0, [SP,#0x138+var_D0]
    Tessellator::color(v9, (const Color *)&v93);
    _R0 = *((_BYTE *)_R11 + 180);
    _R1 = *((_BYTE *)_R11 + 181);
      VMUL.F32        S0, S0, S21
      VMUL.F32        S2, S2, S21
      VSTR            S0, [SP,#0x138+var_E4]
      VSTR            S2, [SP,#0x138+var_E0]
      Tessellator::tex1((int)v9, (__int64 *)&v92);
    Tessellator::vertexUV(v9, _R9, _R7, _R6, v71, v75);
      VLDR            S2, [R11,#0x2E8]
      VSUB.F32        S4, S24, S2
      VLDR            S0, [R11,#0x2E4]
      VSUB.F32        S20, S24, S0
      VSTR            S2, [SP,#0x138+var_F4]
      VSTR            S4, [SP,#0x138+var_F0]
      VSTR            S6, [SP,#0x138+var_EC]
      VSTR            S0, [SP,#0x138+var_E8]
    Tessellator::color(v9, (const Color *)&v91);
    _R0 = *((_BYTE *)_R11 + 186);
    _R1 = *((_BYTE *)_R11 + 187);
      VSTR            S0, [SP,#0x138+var_FC]
      VSTR            S2, [SP,#0x138+var_F8]
      Tessellator::tex1((int)v9, (__int64 *)&v90);
    Tessellator::vertexUV(v9, _R9, _R7, _R8, v72, v76);
  v66 = (void *)(v105 - 12);
  if ( (int *)(v105 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v105 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
    else
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v66);
}


signed int __fastcall BlockTessellator::tessellateStairsInWorld(BlockTessellator *this, Tessellator *a2, const StairBlock *a3, const BlockPos *a4, int a5)
{
  BlockTessellator *v5; // r7@1
  Tessellator *v6; // r8@1
  AABB *v7; // r9@1
  const BlockPos *v8; // r4@1
  const Block *v9; // r5@1
  int v10; // r6@1

  v5 = this;
  v6 = a2;
  v7 = (BlockTessellator *)((char *)this + 724);
  v8 = a4;
  v9 = a3;
  StairBlock::setBaseShape(a3, *((BlockSource **)this + 1), a4, (BlockTessellator *)((char *)this + 724), 1);
  BlockTessellator::tessellateBlockInWorld(v5, v6, v9, v8, a5);
  v10 = StairBlock::setStepShape(v9, *((BlockSource **)v5 + 1), v8, v7, 1);
  if ( v10 == 1 && StairBlock::setInnerPieceShape(v9, *((BlockSource **)v5 + 1), v8, v7, 1) == (__int16 *)1 )
    BlockTessellator::tessellateBlockInWorld(v5, v6, v9, v8, a5);
  return 1;
}


int __fastcall BlockTessellator::appendTessellatedBlock(BlockTessellator *this, Tessellator *a2, const FullBlock *a3)
{
  BlockTessellator *v3; // r8@1
  const FullBlock *v4; // r6@1
  int v5; // r2@1
  Block *v6; // r10@1
  int v7; // r11@1
  int v8; // r0@1
  int v9; // r5@1
  BlockGraphics *v10; // r7@3
  const TextureUVCoordinateSet *v11; // r0@3
  BlockTessellator *v12; // r11@3
  const TextureUVCoordinateSet *v13; // r0@3
  const TextureUVCoordinateSet *v14; // r0@3
  const TextureUVCoordinateSet *v15; // r0@3
  const TextureUVCoordinateSet *v16; // r0@3
  const TextureUVCoordinateSet *v17; // r0@3
  Tessellator *v18; // r0@3
  const Vec3 *v19; // r1@3
  int result; // r0@5
  signed int v21; // r7@6
  Block *v22; // r4@6
  int v23; // r1@7
  int v24; // r10@7
  Tessellator *v25; // r9@8
  int v26; // r4@8
  int v27; // r8@8
  const TextureUVCoordinateSet *v28; // r2@10
  int v29; // r2@11
  BlockTessellator *v30; // r3@11
  int v31; // r0@12
  const TextureUVCoordinateSet *v32; // r5@12
  const ResourceLocation *v33; // r1@12
  unsigned __int64 *v34; // r0@12
  Block *v35; // r2@13
  int v36; // r3@14
  int v37; // r6@14
  int v38; // r0@14
  int v39; // r2@14
  int v40; // r3@14
  int v41; // r4@14
  int v42; // r6@14
  int v43; // r6@18
  __int64 v44; // r0@21
  __int64 v45; // r2@21
  const TextureUVCoordinateSet *v46; // r0@24
  const TextureUVCoordinateSet *v47; // r0@24
  const TextureUVCoordinateSet *v48; // r0@24
  const TextureUVCoordinateSet *v49; // r0@24
  const TextureUVCoordinateSet *v50; // r0@24
  const TextureUVCoordinateSet *v51; // r0@24
  const TextureUVCoordinateSet *v52; // r2@27
  const TextureUVCoordinateSet *v53; // r2@29
  char *v54; // r0@30
  __int64 v55; // r1@30
  const TextureUVCoordinateSet *v56; // r5@30
  void *v61; // r0@30
  unsigned int *v62; // r2@31
  signed int v63; // r1@33
  const TextureUVCoordinateSet *v64; // r0@35
  const TextureUVCoordinateSet *v65; // r0@35
  const TextureUVCoordinateSet *v66; // r0@35
  const TextureUVCoordinateSet *v67; // r0@35
  const TextureUVCoordinateSet *v68; // r0@35
  const TextureUVCoordinateSet *v69; // r0@35
  BlockGraphics *v70; // r4@37
  const TextureUVCoordinateSet *v71; // r0@37
  const Vec3 *v72; // r5@37
  const TextureUVCoordinateSet *v73; // r0@37
  const TextureUVCoordinateSet *v74; // r0@37
  const TextureUVCoordinateSet *v75; // r0@37
  const TextureUVCoordinateSet *v76; // r0@37
  int (__fastcall *v77)(BlockGraphics *, signed int, int, _DWORD); // r6@37
  BlockGraphics *v78; // r0@37
  const TextureUVCoordinateSet *v79; // r0@38
  int v80; // r2@39
  int v81; // r3@39
  int v82; // r1@39
  int v83; // r2@39
  int v84; // r3@39
  int v85; // r4@39
  BlockGraphics *v86; // r4@39
  const TextureUVCoordinateSet *v87; // r0@39
  const TextureUVCoordinateSet *v88; // r0@39
  const TextureUVCoordinateSet *v89; // r0@39
  const TextureUVCoordinateSet *v90; // r0@39
  const TextureUVCoordinateSet *v91; // r0@39
  const TextureUVCoordinateSet *v92; // r0@39
  int v95; // r0@40
  _DWORD *v96; // r0@48
  const void *v97; // r1@48
  size_t v98; // r5@48
  AABB *v99; // r7@52
  int v100; // r4@52
  int v101; // r5@52
  int v102; // r3@52
  int v103; // r4@52
  int v104; // r5@52
  int v105; // r6@52
  AABB *v106; // ST24_4@52
  void *v107; // ST20_4@52
  int v108; // ST1C_4@52
  int v109; // ST10_4@52
  int v110; // ST14_4@52
  char v111; // ST18_1@52
  BlockGraphics *v113; // r7@52
  const TextureUVCoordinateSet *v114; // r0@52
  const TextureUVCoordinateSet *v115; // r0@52
  const TextureUVCoordinateSet *v116; // r0@52
  const TextureUVCoordinateSet *v117; // r0@52
  const TextureUVCoordinateSet *v118; // r0@52
  const TextureUVCoordinateSet *v119; // r0@52
  const TextureUVCoordinateSet *v120; // r0@52
  const TextureUVCoordinateSet *v121; // r0@52
  const TextureUVCoordinateSet *v122; // r0@52
  const TextureUVCoordinateSet *v123; // r0@52
  const TextureUVCoordinateSet *v124; // r0@52
  EndPortalFrameBlock *v125; // r0@53
  _BOOL4 v126; // r5@53
  int v127; // r2@53
  int v128; // r10@56
  const TextureUVCoordinateSet *v129; // r0@63
  const TextureUVCoordinateSet *v130; // r0@63
  const TextureUVCoordinateSet *v131; // r0@63
  const TextureUVCoordinateSet *v132; // r0@63
  const TextureUVCoordinateSet *v133; // r0@63
  const TextureUVCoordinateSet *v134; // r0@63
  int v135; // r5@65
  __int64 v145; // r0@69
  __int64 v146; // r2@69
  BlockTessellator *v147; // r7@83
  char v148; // r0@83
  int v149; // r0@95
  signed int v150; // r5@95
  signed int v151; // r0@100
  const Block *v152; // r11@102
  int v153; // r10@103
  BlockTessellator *v154; // r12@103
  int v155; // r2@103
  int v156; // r3@103
  int v157; // r4@103
  int v158; // r5@103
  int v159; // r6@103
  int v160; // r7@103
  BlockTessellator *v161; // r4@103
  int *v162; // r8@103
  BlockTessellator *v163; // r5@103
  int v164; // r2@103
  int v165; // r3@103
  int v166; // r4@103
  int v167; // r6@103
  int v168; // r7@103
  BlockTessellator *v169; // r4@103
  const TextureUVCoordinateSet *v170; // r5@103
  int v171; // r0@103
  int v172; // r0@107
  int v173; // r2@107
  int v174; // r3@107
  int v175; // r4@107
  int v176; // r5@107
  int v177; // r6@107
  int v178; // r5@107
  int v179; // r0@107
  int v180; // r10@107
  BlockTessellator *v181; // r12@107
  int v182; // r3@107
  int v183; // r4@107
  int v184; // r5@107
  int v185; // r6@107
  int v186; // r7@107
  void *v187; // r0@108
  int v188; // r7@117
  _DWORD *v192; // r1@125
  __int64 v193; // r0@128
  __int64 v194; // r0@128
  signed int v195; // r0@129
  signed int v196; // r1@129
  __int64 v197; // r6@136
  int v198; // r0@136
  const TextureUVCoordinateSet *v199; // r0@136
  int v200; // r0@136
  const TextureUVCoordinateSet *v201; // r0@136
  int v202; // r0@136
  const TextureUVCoordinateSet *v203; // r0@136
  int v204; // r0@136
  const TextureUVCoordinateSet *v205; // r0@136
  int v206; // r0@136
  const TextureUVCoordinateSet *v207; // r0@136
  int v208; // r0@136
  const TextureUVCoordinateSet *v209; // r0@136
  unsigned int *v210; // r2@137
  signed int v211; // r1@139
  float v212; // [sp+0h] [bp-248h]@0
  const Block *v213; // [sp+4h] [bp-244h]@0
  signed int v214; // [sp+4h] [bp-244h]@21
  float v215; // [sp+8h] [bp-240h]@0
  signed int v216; // [sp+8h] [bp-240h]@21
  float v217; // [sp+18h] [bp-230h]@65
  int v218; // [sp+1Ch] [bp-22Ch]@65
  void *s1; // [sp+20h] [bp-228h]@49
  void *s1a; // [sp+20h] [bp-228h]@65
  AABB *v221; // [sp+24h] [bp-224h]@18
  AABB *v222; // [sp+24h] [bp-224h]@65
  AABB *v223; // [sp+24h] [bp-224h]@45
  BlockGraphics *v224; // [sp+28h] [bp-220h]@1
  BlockGraphics *v225; // [sp+28h] [bp-220h]@46
  BlockGraphics *v226; // [sp+28h] [bp-220h]@65
  Tessellator *v227; // [sp+2Ch] [bp-21Ch]@1
  char v228; // [sp+30h] [bp-218h]@102
  int v229; // [sp+34h] [bp-214h]@103
  int v230; // [sp+38h] [bp-210h]@103
  int v231; // [sp+3Ch] [bp-20Ch]@103
  int v232; // [sp+40h] [bp-208h]@103
  int v233; // [sp+44h] [bp-204h]@103
  int v234; // [sp+48h] [bp-200h]@103
  int v235; // [sp+4Ch] [bp-1FCh]@108
  char v236; // [sp+50h] [bp-1F8h]@102
  int v237; // [sp+54h] [bp-1F4h]@103
  int v238; // [sp+58h] [bp-1F0h]@103
  int v239; // [sp+5Ch] [bp-1ECh]@103
  int v240; // [sp+60h] [bp-1E8h]@103
  int v241; // [sp+64h] [bp-1E4h]@103
  int v242; // [sp+68h] [bp-1E0h]@103
  int v243; // [sp+6Ch] [bp-1DCh]@103
  char v244; // [sp+70h] [bp-1D8h]@101
  float v246; // [sp+7Ch] [bp-1CCh]@101
  int v247; // [sp+80h] [bp-1C8h]@101
  int v248; // [sp+84h] [bp-1C4h]@101
  int v249; // [sp+88h] [bp-1C0h]@101
  int v250; // [sp+8Ch] [bp-1BCh]@101
  int v251; // [sp+90h] [bp-1B8h]@101
  int v252; // [sp+94h] [bp-1B4h]@101
  int v253; // [sp+98h] [bp-1B0h]@101
  int v254; // [sp+9Ch] [bp-1ACh]@101
  char v255; // [sp+A0h] [bp-1A8h]@101
  int v256; // [sp+A4h] [bp-1A4h]@83
  int v257; // [sp+A8h] [bp-1A0h]@83
  int v258; // [sp+ACh] [bp-19Ch]@83
  int v259; // [sp+B0h] [bp-198h]@83
  int v260; // [sp+B4h] [bp-194h]@83
  int v261; // [sp+B8h] [bp-190h]@83
  int v262; // [sp+BCh] [bp-18Ch]@83
  int v263; // [sp+C0h] [bp-188h]@83
  int v264; // [sp+C4h] [bp-184h]@83
  char v265; // [sp+C8h] [bp-180h]@83
  char v266; // [sp+CCh] [bp-17Ch]@76
  int v267; // [sp+D8h] [bp-170h]@105
  signed int v268; // [sp+DCh] [bp-16Ch]@105
  int v269; // [sp+E0h] [bp-168h]@105
  int v270; // [sp+E4h] [bp-164h]@105
  signed int v271; // [sp+E8h] [bp-160h]@105
  int v272; // [sp+ECh] [bp-15Ch]@105
  int v273; // [sp+F0h] [bp-158h]@105
  signed int v274; // [sp+F4h] [bp-154h]@105
  signed int v275; // [sp+F8h] [bp-150h]@105
  int v276; // [sp+FCh] [bp-14Ch]@105
  signed int v277; // [sp+100h] [bp-148h]@105
  signed int v278; // [sp+104h] [bp-144h]@105
  char v279; // [sp+108h] [bp-140h]@73
  float v280; // [sp+114h] [bp-134h]@30
  float v281; // [sp+120h] [bp-128h]@30
  float v282; // [sp+12Ch] [bp-11Ch]@30
  float v283; // [sp+138h] [bp-110h]@30
  float v284; // [sp+144h] [bp-104h]@30
  float v285; // [sp+150h] [bp-F8h]@30
  char v286; // [sp+15Ch] [bp-ECh]@30
  int v287; // [sp+174h] [bp-D4h]@30
  float v288; // [sp+17Ch] [bp-CCh]@30
  float v289; // [sp+180h] [bp-C8h]@30
  int v290; // [sp+184h] [bp-C4h]@30
  __int64 v291; // [sp+188h] [bp-C0h]@30
  int v292; // [sp+190h] [bp-B8h]@30
  int v293; // [sp+198h] [bp-B0h]@12
  signed int v294; // [sp+19Ch] [bp-ACh]@12
  int v295; // [sp+1A0h] [bp-A8h]@12
  int v296; // [sp+1A4h] [bp-A4h]@87
  signed int v297; // [sp+1A8h] [bp-A0h]@87
  int v298; // [sp+1ACh] [bp-9Ch]@87
  float v299; // [sp+1B0h] [bp-98h]@52
  int v300; // [sp+1BCh] [bp-8Ch]@52
  signed int v301; // [sp+1C0h] [bp-88h]@52
  int v302; // [sp+1C4h] [bp-84h]@52
  int v303; // [sp+1C8h] [bp-80h]@14
  int v304; // [sp+1CCh] [bp-7Ch]@14
  int v305; // [sp+1D0h] [bp-78h]@14
  int v306; // [sp+1D4h] [bp-74h]@14
  int v307; // [sp+1D8h] [bp-70h]@14
  int v308; // [sp+1DCh] [bp-6Ch]@14
  int v309; // [sp+1E0h] [bp-68h]@14

  v227 = a2;
  v3 = this;
  v4 = a3;
  v5 = *(_BYTE *)a3;
  v6 = (Block *)Block::mBlocks[v5];
  v224 = (BlockGraphics *)BlockGraphics::mBlocks[v5];
  *((_DWORD *)this + 47) = 0;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 49) = 0;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 0;
  *((_DWORD *)this + 52) = 0;
  *((_BYTE *)this + 1) = 1;
  *((_BYTE *)this + 50) = 0;
  v7 = BlockGraphics::getBlockShape((BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v6 + 4)]);
  v8 = (*(int (__fastcall **)(Block *, _DWORD, char *, _DWORD))(*(_DWORD *)v6 + 420))(
         v6,
         *((_BYTE *)v4 + 1),
         (char *)v3 + 724,
         0);
  *((_DWORD *)v3 + 181) = *(_DWORD *)v8;
  *((_DWORD *)v3 + 182) = *(_DWORD *)(v8 + 4);
  *((_DWORD *)v3 + 183) = *(_DWORD *)(v8 + 8);
  *((_DWORD *)v3 + 184) = *(_DWORD *)(v8 + 12);
  *((_DWORD *)v3 + 185) = *(_DWORD *)(v8 + 16);
  *((_DWORD *)v3 + 186) = *(_DWORD *)(v8 + 20);
  *((_BYTE *)v3 + 748) = *(_BYTE *)(v8 + 24);
  v9 = (*(int (__fastcall **)(Block *, _DWORD))(*(_DWORD *)v6 + 424))(v6, *((_BYTE *)v4 + 1));
  if ( !Block::isType(v6, (const Block *)Block::mWoodButton)
    && Block::isType(v6, (const Block *)Block::mStoneButton) != 1 )
  {
    v21 = v7;
    v22 = v6;
    if ( v7 <= 42 )
    {
      v23 = (int)v3 + 724;
      v24 = v9;
      v35 = v22;
      v12 = v3;
      v25 = v227;
      v26 = (int)v3 + 724;
      v27 = (int)v35;
      switch ( v21 )
      {
        case 0:
          goto LABEL_14;
        case 10:
          v221 = (AABB *)v23;
          Tessellator::addOffset(v227, -0.5, -0.5, -0.5);
          v43 = 0;
          Tessellator::begin(v227, 48, 0);
          break;
        case 6:
          Tessellator::begin(v227, 0, 0);
          Tessellator::normal(v227, 0.0, -1.0, 0.0);
          if ( *((_BYTE *)v12 + 40) )
            v52 = (BlockTessellator *)((char *)v12 + 8);
          else
            v52 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture((unsigned int)v224, v9, 0);
          BlockTessellator::tessellateRowTexture((BlockTessellator *)0xBF000000, v227, v52, -0.5, -0.5, -0.5);
          goto LABEL_5;
        case 1:
          Tessellator::begin(v227, 8, 0);
            v53 = (BlockTessellator *)((char *)v12 + 8);
            v53 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture((unsigned int)v224, v9, 0);
          v296 = -1090519040;
          v297 = -1090519040;
          v298 = -1090519040;
          BlockTessellator::tessellateCrossTexture(v12, v227, v53, (const Vec3 *)&v296, 1, (const Block *)v27, v215);
        case 11:
          v54 = Tessellator::getOffset(v227);
          v55 = *(_QWORD *)v54;
          v292 = *((_DWORD *)v54 + 2);
          v291 = v55;
          v288 = 0.0;
          v289 = 0.0;
          v290 = 0;
          Tessellator::begin(v227, 96, 0);
          v56 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(3, (unsigned int)v224), v9, 0);
          TextureUVCoordinateSet::getFlippedVertically((TextureUVCoordinateSet *)&v286, (int)v56);
          AABB::set(__PAIR__(1052770304, v26), 0LL, 0.625, 1.0, 0.25);
          v290 = 1052770304;
          BlockTessellator::tessellateSouth(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v56);
          BlockTessellator::tessellateNorth(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v56);
          AABB::move((AABB *)v26, (const Vec3 *)&v288);
          __asm
          {
            VLDR            S0, [SP,#0x248+var_CC]
            VLDR            S2, [SP,#0x248+var_C8]
            VLDR            S4, [SP,#0x248+var_C4]
            VNEG.F32        S0, S0
            VNEG.F32        S2, S2
            VNEG.F32        S4, S4
            VSTR            S0, [SP,#0x248+var_F8]
            VSTR            S2, [SP,#0x248+var_F4]
            VSTR            S4, [SP,#0x248+var_F0]
          }
          Tessellator::addOffset(v227, (const Vec3 *)&v285);
          BlockTessellator::tessellateFaceDown(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v56);
          BlockTessellator::tessellateFaceUp(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v56);
          BlockTessellator::tessellateWest(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v56);
          BlockTessellator::tessellateEast(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v56);
          Tessellator::setOffset(v227, (const Vec3 *)&v291);
          AABB::set(__PAIR__(1052770304, v26), 4557642822898941952LL, 0.625, 1.0, 1.0);
          v290 = -1094713344;
            VSTR            S0, [SP,#0x248+var_104]
            VSTR            S2, [SP,#0x248+var_100]
            VSTR            S4, [SP,#0x248+var_FC]
          Tessellator::addOffset(v227, (const Vec3 *)&v284);
          *((_DWORD *)v12 + 52) = 3;
          AABB::set(__PAIR__(1054867456, v26), -4755801205441036288LL, 0.5625, 0.9375, 0.5);
          v289 = 0.125;
            VSTR            S0, [SP,#0x248+var_110]
            VSTR            S2, [SP,#0x248+var_10C]
            VSTR            S4, [SP,#0x248+var_108]
          Tessellator::addOffset(v227, (const Vec3 *)&v283);
          AABB::set(__PAIR__(1054867456, v26), 4539628425451667456LL, 0.5625, 0.9375, 1.125);
            VSTR            S0, [SP,#0x248+var_11C]
            VSTR            S2, [SP,#0x248+var_118]
            VSTR            S4, [SP,#0x248+var_114]
          Tessellator::addOffset(v227, (const Vec3 *)&v282);
          AABB::set(__PAIR__(1054867456, v26), -4755801205452570624LL, 0.5625, 0.4375, 0.5);
            VSTR            S0, [SP,#0x248+var_128]
            VSTR            S2, [SP,#0x248+var_124]
            VSTR            S4, [SP,#0x248+var_120]
          Tessellator::addOffset(v227, (const Vec3 *)&v281);
          AABB::set(__PAIR__(1054867456, v26), 4539628425440133120LL, 0.5625, 0.4375, 1.125);
            VSTR            S0, [SP,#0x248+var_134]
            VSTR            S2, [SP,#0x248+var_130]
            VSTR            S4, [SP,#0x248+var_12C]
          Tessellator::addOffset(v227, (const Vec3 *)&v280);
          Tessellator::setOffset(v227, 0.0, 0.0, 0.0);
          *((_DWORD *)v12 + 52) = 0;
          v61 = (void *)(v287 - 12);
          if ( (int *)(v287 - 12) == &dword_28898C0 )
            goto LABEL_5;
          v62 = (unsigned int *)(v287 - 4);
          if ( !&pthread_create )
            goto LABEL_114;
          __dmb();
          do
            v63 = __ldrex(v62);
          while ( __strex(v63 - 1, v62) );
          goto LABEL_115;
        case 13:
          Tessellator::setOffset(v227, -0.5, -0.5, -0.5);
          Tessellator::begin(v227, 24, 0);
          v64 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture((unsigned int)v224, 0, 0);
          BlockTessellator::tessellateFaceDown(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v64);
          v65 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(1, (unsigned int)v224), 0, 0);
          BlockTessellator::tessellateFaceUp(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v65);
          Tessellator::addOffset(v227, 0.0, 0.0, 0.0625);
          v66 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(2, (unsigned int)v224), 0, 0);
          BlockTessellator::tessellateNorth(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v66);
          Tessellator::addOffset(v227, 0.0, 0.0, -0.0625);
          v67 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(3, (unsigned int)v224), 0, 0);
          BlockTessellator::tessellateSouth(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v67);
          Tessellator::addOffset(v227, 0.0625, 0.0, 0.0);
          v68 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(4, (unsigned int)v224), 0, 0);
          BlockTessellator::tessellateWest(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v68);
          Tessellator::addOffset(v227, -0.0625, 0.0, 0.0);
          v69 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(5, (unsigned int)v224), 0, 0);
          BlockTessellator::tessellateEast(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v69);
        case 2:
        case 3:
        case 4:
        case 5:
        case 7:
        case 8:
        case 9:
        case 12:
          goto def_EB16C6;
        default:
          v25 = v227;
          v12 = v35;
          v26 = v23;
          v27 = v23;
          switch ( v21 )
            case 22:
              goto LABEL_5;
            case 19:
              Tessellator::begin(v227, 8, 0);
              if ( *((_BYTE *)v12 + 40) )
                v28 = (BlockTessellator *)((char *)v12 + 8);
              else
                v28 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture((unsigned int)v224, 0, 0);
              BlockTessellator::tessellateStemTexture(
                (BlockTessellator *)0xBF000000,
                v227,
                v28,
                *((float *)v12 + 185),
                -0.5,
                -0.5);
            case 31:
              goto LABEL_14;
            case 26:
              *((_BYTE *)v35 + 48) = 1;
              v125 = (EndPortalFrameBlock *)*((_BYTE *)v4 + 1);
              *((_BYTE *)v35 + 49) = (_BYTE)v125;
              v126 = EndPortalFrameBlock::hasEye(v125, v23);
              Tessellator::setOffset(v227, -0.5, -0.5, -0.5);
              v127 = 24;
              if ( v126 )
                v127 = 48;
              Tessellator::begin((int)v227, 1, v127, 0);
              BlockTessellator::tessellateEndPortalFrameInWorld(
                v12,
                (const EndPortalFrameBlock *)v27,
                (const BlockPos *)&BlockPos::ZERO,
                *((_BYTE *)v4 + 1));
              *((_BYTE *)v12 + 48) = 0;
              v19 = (const Vec3 *)&Vec3::ZERO;
              v18 = v227;
              goto LABEL_4;
            case 21:
              Tessellator::addOffset(v227, -0.5, -0.5, -0.5);
              v128 = 0;
              Tessellator::begin(v227, 72, 0);
              do
              {
                if ( v128 == 2 )
                {
                  AABB::set(__PAIR__(1054867456, v26), 4467570831408496640LL, 0.5625, 0.9375, 0.875);
                }
                else if ( v128 == 1 )
                  AABB::set(__PAIR__(1054867456, v26), 4566650023203936666LL, 0.5625, 1.0, 1.0);
                else if ( !v128 )
                  AABB::set(__PAIR__(1054867456, v26), 1050253722LL, 0.5625, 1.0, 0.125);
                v129 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(1, (unsigned int)v224), 0, 0);
                BlockTessellator::tessellateFaceUp(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v129);
                v130 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture((unsigned int)v224, 0, 0);
                BlockTessellator::tessellateFaceDown(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v130);
                v131 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(2, (unsigned int)v224), 0, 0);
                BlockTessellator::tessellateNorth(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v131);
                v132 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(3, (unsigned int)v224), 0, 0);
                BlockTessellator::tessellateSouth(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v132);
                v133 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(4, (unsigned int)v224), 0, 0);
                BlockTessellator::tessellateWest(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v133);
                v134 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(5, (unsigned int)v224), 0, 0);
                BlockTessellator::tessellateEast(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v134);
                ++v128;
              }
              while ( v128 != 3 );
              goto LABEL_106;
            case 32:
              v135 = 0;
              Tessellator::begin(v227, 96, 0);
              __asm
                VMOV.F32        S0, #0.5
                VMOV.F32        S2, #1.0
              _R0 = &WallBlock::WALL_WIDTH;
              _R1 = &WallBlock::POST_WIDTH;
                VLDR            S4, [R0]
                VADD.F32        S18, S4, S0
                VLDR            S16, [R1]
                VSUB.F32        S4, S0, S4
                VADD.F32        S24, S16, S0
              _R0 = &WallBlock::WALL_HEIGHT;
                VSUB.F32        S0, S0, S16
                VSUB.F32        S22, S2, S16
                VADD.F32        S20, S16, S2
                VLDR            S26, [R0]
                VNEG.F32        S2, S16
              _R1 = &WallBlock::POST_HEIGHT;
                VMOV            R0, S4
                VLDR            S28, [R1]
              v226 = _R0;
              __asm { VMOV            R0, S16 }
              s1a = _R0;
              __asm { VMOV            R0, S0 }
              v222 = _R0;
              __asm { VMOV            R0, S22 }
              v218 = _R0;
              __asm { VMOV            R0, S2 }
              v217 = _R0;
                if ( v135 == 2 )
                  v215 = 0.5;
                  v145 = __PAIR__((unsigned int)v226, v26);
                  __asm { VSTR            S26, [SP,#0x248+var_244] }
                  LODWORD(v146) = 0;
                  __asm { VSTR            S18, [SP,#0x248+var_248] }
                  HIDWORD(v146) = s1a;
                else if ( v135 == 1 )
                  v146 = 4539628424389459968LL;
                  __asm { VSTR            S22, [SP,#0x248+var_240] }
                else if ( v135 )
                  v145 = __PAIR__((unsigned int)v222, v26);
                  *((float *)&v146 + 1) = v217;
                  __asm
                  {
                    VSTR            S24, [SP,#0x248+var_248]
                    VSTR            S28, [SP,#0x248+var_244]
                    VSTR            S16, [SP,#0x248+var_240]
                  }
                else
                  __asm { VSTR            S24, [SP,#0x248+var_248] }
                  __asm { VSTR            S28, [SP,#0x248+var_244] }
                  __asm { VSTR            S20, [SP,#0x248+var_240] }
                  HIDWORD(v146) = v218;
                AABB::set(v145, v146, v212, *(float *)&v213, v215);
                BlockPos::BlockPos((int)&v279, (int)&Vec3::ZERO);
                BlockTessellator::_tessellateAllFaces(v12, v227, (const Block *)v27, (const BlockPos *)&v279, v24);
                ++v135;
              while ( v135 != 4 );
            default:
              goto def_EB16C6;
      }
      while ( v43 != 1 )
        if ( !v43 )
        {
          v214 = 1065353216;
          v216 = 1056964608;
          v44 = (unsigned int)v221;
          v45 = 0LL;
LABEL_23:
          AABB::set(v44, v45, 1.0, *(float *)&v214, *(float *)&v216);
        }
        v46 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture((unsigned int)v224, 0, 0);
        BlockTessellator::tessellateFaceDown(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v46);
        v47 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(1, (unsigned int)v224), 0, 0);
        BlockTessellator::tessellateFaceUp(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v47);
        v48 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(2, (unsigned int)v224), 0, 0);
        BlockTessellator::tessellateNorth(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v48);
        v49 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(3, (unsigned int)v224), 0, 0);
        BlockTessellator::tessellateSouth(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v49);
        v50 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(4, (unsigned int)v224), 0, 0);
        BlockTessellator::tessellateWest(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v50);
        v51 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(5, (unsigned int)v224), 0, 0);
        BlockTessellator::tessellateEast(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v51);
        if ( ++v43 == 2 )
          goto LABEL_106;
      v214 = 1056964608;
      v216 = 1065353216;
      v44 = (unsigned int)v221;
      v45 = 4539628424389459968LL;
      goto LABEL_23;
    }
    v29 = (int)v3 + 724;
    v24 = v9;
    v30 = v22;
    v12 = v3;
    v25 = v227;
    v26 = (int)v3 + 724;
    v27 = (int)v30;
    switch ( v21 )
      case 65:
        v31 = BlockGraphics::getTexture((unsigned int)v224, v9, 0);
        v32 = (const TextureUVCoordinateSet *)v31;
        v34 = (unsigned __int64 *)BlockTextureTessellator::getTessellatedTexturesInfo(
                                    (BlockTextureTessellator *)(v31 + 24),
                                    v33);
        Tessellator::begin(v227, 1431655768 * ((unsigned int)((*v34 >> 32) - *v34) >> 3), 0);
        v293 = -1090519040;
        v294 = -1090519040;
        v295 = -1090519040;
        BlockTessellator::tessellateCrossPolyTexture(v12, v227, v32, (const Vec3 *)&v293, 1, v213);
        goto LABEL_5;
      case 67:
      case 76:
      case 84:
LABEL_14:
        v36 = *(_DWORD *)(v26 + 4);
        v37 = *(_DWORD *)(v26 + 8);
        v303 = *(_DWORD *)v26;
        v304 = v36;
        v305 = v37;
        v38 = v26 + 12;
        v39 = *(_DWORD *)(v26 + 12);
        v40 = *(_DWORD *)(v26 + 16);
        v41 = *(_DWORD *)(v26 + 20);
        v42 = *(_DWORD *)(v38 + 12);
        v306 = v39;
        v307 = v40;
        v308 = v41;
        v309 = v42;
        AABB::centerAt((AABB *)&v303, (const Vec3 *)&Vec3::ZERO);
        Tessellator::setOffset(v25, (const Vec3 *)&v303);
        goto LABEL_37;
      case 68:
        Tessellator::setOffset(v227, -0.5, -0.5, -0.5);
LABEL_37:
        Tessellator::begin(v25, 24, 0);
        v70 = v224;
        v71 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(BlockGraphics *, _DWORD, int, _DWORD))(*(_DWORD *)v224 + 48))(
                                                v224,
                                                0,
                                                v24,
                                                0);
        v72 = (const Vec3 *)&Vec3::ZERO;
        BlockTessellator::tessellateFaceDown(v12, v25, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v71);
        v73 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(BlockGraphics *, signed int, int, _DWORD))(*(_DWORD *)v70 + 48))(
                                                v70,
                                                1,
        BlockTessellator::tessellateFaceUp(v12, v25, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v73);
        v74 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(BlockGraphics *, signed int, int, _DWORD))(*(_DWORD *)v70 + 48))(
                                                2,
        BlockTessellator::tessellateNorth(v12, v25, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v74);
        v75 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(_DWORD, signed int, _DWORD, _DWORD))(*(_DWORD *)v70 + 48))(
                                                3,
        BlockTessellator::tessellateSouth(v12, v25, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v75);
        v76 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(_DWORD, signed int, _DWORD, _DWORD))(*(_DWORD *)v70 + 48))(
                                                4,
        BlockTessellator::tessellateWest(v12, v25, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v76);
        v77 = *(int (__fastcall **)(BlockGraphics *, signed int, int, _DWORD))(*(_DWORD *)v224 + 48);
        v78 = v224;
        goto LABEL_38;
      case 86:
        *((_DWORD *)v12 + 47) = 2;
        *((_DWORD *)v12 + 48) = 2;
        *((_DWORD *)v12 + 49) = 3;
        *((_DWORD *)v12 + 50) = 0;
        *((_DWORD *)v12 + 51) = 1;
        *((_DWORD *)v12 + 52) = 1;
        v80 = *(_DWORD *)(v29 + 4);
        v81 = *(_DWORD *)(v26 + 8);
        v304 = v80;
        v305 = v81;
        v82 = *(_DWORD *)(v26 + 12);
        v83 = *(_DWORD *)(v26 + 16);
        v84 = *(_DWORD *)(v26 + 20);
        v85 = *(_DWORD *)(v26 + 24);
        v306 = v82;
        v307 = v83;
        v308 = v84;
        v309 = v85;
        Tessellator::setOffset(v227, (const Vec3 *)&v303);
        Tessellator::begin(v227, 24, 0);
        v86 = v224;
        v87 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(BlockGraphics *, _DWORD, int, _DWORD))(*(_DWORD *)v224 + 48))(
                                                v9,
        BlockTessellator::tessellateFaceDown(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v87);
        v88 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(BlockGraphics *, signed int, int, _DWORD))(*(_DWORD *)v86 + 48))(
                                                v86,
        BlockTessellator::tessellateFaceUp(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v88);
        v89 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(BlockGraphics *, signed int, int, _DWORD))(*(_DWORD *)v86 + 48))(
        BlockTessellator::tessellateNorth(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v89);
        v90 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(_DWORD, signed int, _DWORD, _DWORD))(*(_DWORD *)v86 + 48))(
        BlockTessellator::tessellateSouth(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v90);
        v91 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(_DWORD, signed int, _DWORD, _DWORD))(*(_DWORD *)v86 + 48))(
        BlockTessellator::tessellateWest(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v91);
        v92 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(_DWORD, signed int, _DWORD, _DWORD))(*(_DWORD *)v86 + 48))(
                                                5,
        BlockTessellator::tessellateEast(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v92);
        v18 = v227;
        v19 = (const Vec3 *)&Vec3::ZERO;
        goto LABEL_4;
      case 77:
        Tessellator::addOffset(v227, -0.5, -0.5, -0.5);
        _R7 = BlockGraphics::getTexture(__PAIR__(1, (unsigned int)v224), v9, 0);
        _R6 = BlockGraphics::getTexture((unsigned int)v224, v9, 0);
        v95 = BlockGraphics::getTexture(__PAIR__(2, (unsigned int)v224), v9, 0);
        __asm
          VLDR            S16, [R7,#4]
          VLDR            S0, [R6,#4]
          VCMPE.F32       S0, S16
          VMRS            APSR_nzcv, FPSCR
        if ( !_ZF )
          goto LABEL_147;
          VLDR            S18, [R7,#0xC]
          VLDR            S0, [R6,#0xC]
          VCMPE.F32       S0, S18
LABEL_147:
          v223 = (AABB *)_R7;
          v225 = (BlockGraphics *)v95;
          goto LABEL_105;
          VLDR            S20, [R7,#8]
          VLDR            S0, [R6,#8]
          VCMPE.F32       S0, S20
LABEL_93:
          VLDR            S22, [R7,#0x10]
          VLDR            S0, [R6,#0x10]
        v225 = (BlockGraphics *)v95;
          VCMPE.F32       S0, S22
        v96 = *(_DWORD **)(_R7 + 24);
        v97 = *(const void **)(_R6 + 24);
        v98 = *(v96 - 3);
        if ( v98 == *((_DWORD *)v97 - 3) )
          s1 = *(void **)(_R7 + 24);
          if ( memcmp(v96, v97, *(v96 - 3)) )
            v223 = (AABB *)_R7;
            goto LABEL_105;
          v188 = *(_DWORD *)(_R7 + 28);
          if ( v188 == *(_DWORD *)(_R6 + 28) )
            _R0 = v225;
            __asm
            {
              VLDR            S0, [R0,#4]
              VCMPE.F32       S0, S16
              VMRS            APSR_nzcv, FPSCR
            }
            if ( _ZF )
                VLDREQ          S0, [R0,#0xC]
                VCMPEEQ.F32     S0, S18
                VMRSEQ          APSR_nzcv, FPSCR
              _R0 = v225;
                VLDR            S0, [R0,#8]
                VCMPE.F32       S0, S20
                VMRS            APSR_nzcv, FPSCR
              if ( _ZF )
                _R0 = v225;
                __asm
                  VLDR            S0, [R0,#0x10]
                  VCMPE.F32       S0, S22
                  VMRS            APSR_nzcv, FPSCR
                if ( _ZF )
                  v192 = (_DWORD *)*((_DWORD *)v225 + 6);
                  if ( v98 == *(v192 - 3) && !memcmp(s1, v192, v98) && v188 == *((_DWORD *)v225 + 7) )
                    HIDWORD(v193) = 1;
                    LODWORD(v193) = BlockGraphics::mBlocks[*(_BYTE *)(Block::mObsidian + 4)];
                    _R6 = BlockGraphics::getTexture(v193, v24, 0);
                    HIDWORD(v194) = 1;
                    LODWORD(v194) = BlockGraphics::mBlocks[*(_BYTE *)(Block::mGlass + 4)];
                    v95 = BlockGraphics::getTexture(v194, v24, 0);
                    goto LABEL_93;
        else
LABEL_105:
        Tessellator::color(v227, 1.0, 1.0, 1.0, 1.0);
        v276 = 1040187392;
        v277 = 1003277517;
        v278 = 1040187392;
        v273 = 1063256064;
        v274 = 1044381696;
        v275 = 1063256064;
        AABB::set((AABB *)v26, (const Vec3 *)&v276, (const Vec3 *)&v273);
        BlockTessellator::tessellateFaceDown(
          v12,
          v227,
          (const Block *)v27,
          (const Vec3 *)&Vec3::ZERO,
          (const TextureUVCoordinateSet *)_R6);
        BlockTessellator::tessellateFaceUp(
        BlockTessellator::tessellateNorth(
        BlockTessellator::tessellateSouth(
        BlockTessellator::tessellateWest(
        BlockTessellator::tessellateEast(
        v270 = 1044381696;
        v271 = 1044381696;
        v272 = 1044381696;
        v267 = 1062207488;
        v268 = 1063256064;
        v269 = 1062207488;
        AABB::set((AABB *)v26, (const Vec3 *)&v270, (const Vec3 *)&v267);
        BlockTessellator::tessellateFaceDown(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v223);
        BlockTessellator::tessellateFaceUp(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v223);
        BlockTessellator::tessellateNorth(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v223);
        BlockTessellator::tessellateSouth(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v223);
        BlockTessellator::tessellateWest(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v223);
        BlockTessellator::tessellateEast(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v223);
        AABB::set((AABB *)v26, (const Vec3 *)&Vec3::ZERO, (const Vec3 *)&Vec3::ONE);
        BlockTessellator::tessellateFaceDown(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v225);
        BlockTessellator::tessellateFaceUp(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v225);
        BlockTessellator::tessellateNorth(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v225);
        BlockTessellator::tessellateSouth(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v225);
        BlockTessellator::tessellateWest(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v225);
        BlockTessellator::tessellateEast(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v225);
        goto LABEL_106;
      case 74:
        Tessellator::begin(v227, 0, 0);
        BlockTessellator::tessellateHopperInWorld(
          (const BlockPos *)&BlockPos::ZERO,
          0,
          1);
      case 75:
        v99 = (AABB *)v29;
        v100 = *(_DWORD *)(v29 + 4);
        v101 = *(_DWORD *)(v29 + 8);
        v303 = *(_DWORD *)v29;
        v304 = v100;
        v305 = v101;
        v102 = *(_DWORD *)(v29 + 16);
        v103 = *(_DWORD *)(v29 + 20);
        v104 = *(_DWORD *)(v29 + 24);
        v306 = *(_DWORD *)(v29 + 12);
        v307 = v102;
        v308 = v103;
        v309 = v104;
        v105 = *(_QWORD *)((char *)v12 + 724);
        __asm { VMOV.F32        S6, #-0.1875 }
        v106 = (AABB *)(*(_QWORD *)((char *)v12 + 724) >> 32);
        v107 = (void *)*((_DWORD *)v12 + 183);
        v108 = *((_DWORD *)v12 + 184);
        v109 = *((_DWORD *)v12 + 185);
        v110 = *((_DWORD *)v12 + 186);
        v111 = *((_BYTE *)v12 + 748);
        v300 = 1044381696;
        v301 = 1044381696;
        v302 = 1044381696;
        _R0 = &Vec3::ONE;
          VLDR            S0, [R0]
          VLDR            S2, [R0,#4]
          VLDR            S4, [R0,#8]
          VADD.F32        S0, S0, S6
          VADD.F32        S2, S2, S6
          VADD.F32        S4, S4, S6
          VSTR            S0, [SP,#0x248+var_98]
          VSTR            S2, [SP,#0x248+var_94]
          VSTR            S4, [SP,#0x248+var_90]
        AABB::set(v99, (const Vec3 *)&v300, (const Vec3 *)&v299);
        Tessellator::begin(v227, 48, 0);
        v113 = v224;
        v114 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v224 + 48))(
                                                 v224,
                                                 0,
                                                 v24,
                                                 0);
        BlockTessellator::tessellateFaceDown(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v114);
        v115 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(BlockGraphics *, signed int, int, _DWORD))(*(_DWORD *)v113 + 48))(
                                                 v113,
                                                 1,
        BlockTessellator::tessellateFaceUp(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v115);
        v116 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(BlockGraphics *, signed int, int, _DWORD))(*(_DWORD *)v113 + 48))(
                                                 2,
        BlockTessellator::tessellateNorth(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v116);
        v117 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(_DWORD, signed int, _DWORD, _DWORD))(*(_DWORD *)v113 + 48))(
                                                 3,
        BlockTessellator::tessellateSouth(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v117);
        v118 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(_DWORD, signed int, _DWORD, _DWORD))(*(_DWORD *)v113 + 48))(
                                                 4,
        BlockTessellator::tessellateWest(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v118);
        v119 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(_DWORD, signed int, _DWORD, _DWORD))(*(_DWORD *)v113 + 48))(
                                                 5,
        BlockTessellator::tessellateEast(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v119);
        *((_DWORD *)v12 + 181) = v105;
        *((_DWORD *)v12 + 182) = v106;
        *((_DWORD *)v12 + 183) = v107;
        *((_DWORD *)v12 + 184) = v108;
        *((_DWORD *)v12 + 185) = v109;
        *((_DWORD *)v12 + 186) = v110;
        *((_BYTE *)v12 + 748) = v111;
        Tessellator::color(v227, 1.0, 1.0, 1.0, 0.25);
        v120 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(BlockGraphics *, _DWORD, int, _DWORD))(*(_DWORD *)v113 + 48))(
        BlockTessellator::tessellateFaceDown(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v120);
        v121 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(_DWORD, signed int, _DWORD, _DWORD))(*(_DWORD *)v113 + 48))(
        BlockTessellator::tessellateFaceUp(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v121);
        v122 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(_DWORD, signed int, _DWORD, _DWORD))(*(_DWORD *)v113 + 48))(
        BlockTessellator::tessellateNorth(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v122);
        v123 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(_DWORD, signed int, _DWORD, _DWORD))(*(_DWORD *)v113 + 48))(
        BlockTessellator::tessellateSouth(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v123);
        v124 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(_DWORD, signed int, _DWORD, _DWORD))(*(_DWORD *)v113 + 48))(
        BlockTessellator::tessellateWest(v12, v227, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v124);
LABEL_38:
        v79 = (const TextureUVCoordinateSet *)v77(v78, 5, v24, 0);
        BlockTessellator::tessellateEast(v12, v25, (const Block *)v27, v72, v79);
        v18 = v25;
        v19 = v72;
      case 66:
      case 69:
      case 70:
      case 71:
      case 72:
      case 73:
      case 78:
      case 79:
      case 80:
      case 81:
      case 82:
      case 83:
      case 85:
        goto def_EB16C6;
      default:
        v25 = v227;
        if ( v21 == 43 )
          v12 = (BlockTessellator *)v27;
          *(_BYTE *)(v27 + 48) = 1;
          BlockTessellator::tessellateAnvilInWorld(
            (BlockTessellator *)v27,
            v227,
            (const AnvilBlock *)v26,
            (const BlockPos *)&BlockPos::ZERO,
            *((_BYTE *)v4 + 1),
            1);
          Tessellator::addOffset(v227, 0.5, 0.5, 0.5);
          *(_BYTE *)(v27 + 48) = 0;
        v12 = v30;
        v26 = v29;
        v27 = v29;
        if ( v21 == 48 )
          *((_BYTE *)v12 + 48) = 1;
          BlockTessellator::tessellateStructureVoidInWorld(
            v12,
            (const Block *)v27,
          Tessellator::resetScale(v227);
          *((_BYTE *)v12 + 48) = 0;
def_EB16C6:
        if ( (v21 | 1) == 79 )
          Tessellator::addOffset(v25, -0.5, -0.5, -0.5);
          BlockPos::BlockPos((int)&v266, (int)&Vec3::ZERO);
          BlockTessellator::tessellateChorusFlowerInWorld(v12, v25, (const Block *)v27, (const BlockPos *)&v266, v24, 1);
        if ( v21 <= 80 )
          if ( v21 != 18 )
            if ( v21 != 44 )
            Tessellator::addOffset(v25, -0.5, -0.5, -0.5);
            BlockTessellator::tessellateDragonEgg(v12, v25, (const Block *)v27, (const BlockPos *)&BlockPos::ZERO, 0, 1);
LABEL_106:
            Tessellator::addOffset(v25, 0.5, 0.5, 0.5);
          AABB::getBounds((AABB *)&v244, v26);
            VLDR            S0, =0.49
            VLDR            S2, [SP,#0x248+var_1D0]
            VMUL.F32        S0, S2, S0
            VSTR            S0, [SP,#0x248+var_1CC]
          v247 = 0;
          v248 = 0;
          AABB::shrink((AABB *)&v249, (const Vec3 *)v26, (int)&v246);
          v147 = v12;
          *((_DWORD *)v12 + 181) = v249;
          *((_DWORD *)v12 + 182) = v250;
          *((_DWORD *)v12 + 183) = v251;
          *((_DWORD *)v12 + 184) = v252;
          *((_DWORD *)v12 + 185) = v253;
          *((_DWORD *)v12 + 186) = v254;
          v148 = v255;
          if ( v21 == 81 )
            BlockTessellator::tessellateEndRodAppended(v12, v25, (const Block *)v27, v224);
            goto LABEL_106;
          if ( v21 == 85 )
            Tessellator::setOffset(v25, -0.5, -0.5, -0.5);
            v149 = *((_BYTE *)v4 + 1);
            v150 = *((_BYTE *)v4 + 1);
            if ( v149 != 2 )
              v150 = 3;
            if ( v149 == 1 )
              v150 = 4;
            switch ( v150 )
              case 0:
                v151 = 3;
                *((_DWORD *)v12 + 49) = 3;
                *((_DWORD *)v12 + 50) = 3;
                goto LABEL_133;
              case 4:
                v195 = 2;
                v196 = 1;
                goto LABEL_135;
              case 2:
                v151 = 2;
              case 1:
                *((_DWORD *)v12 + 47) = 2;
                *((_DWORD *)v12 + 48) = 1;
                break;
              case 3:
                *((_DWORD *)v12 + 47) = 3;
                *((_DWORD *)v12 + 48) = 3;
                v151 = 1;
LABEL_133:
                *((_DWORD *)v12 + 51) = v151;
                *((_DWORD *)v12 + 52) = v151;
              case 5:
                v195 = 1;
                v196 = 2;
LABEL_135:
                *((_DWORD *)v12 + 47) = v196;
                *((_DWORD *)v12 + 48) = v195;
                *((_DWORD *)v12 + 49) = v195;
                *((_DWORD *)v12 + 50) = v195;
              default:
            Tessellator::begin(v25, 24, 0);
            LODWORD(v197) = BlockGraphics::mBlocks[*(_BYTE *)(v27 + 4)];
            HIDWORD(v197) = (*(int (__fastcall **)(int, _DWORD, signed int))(*(_DWORD *)v27 + 428))(v27, 0, v150);
            v198 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v27 + 424))(v27, v150);
            v199 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v197, v198, 0);
            BlockTessellator::tessellateFaceDown(v12, v25, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v199);
            HIDWORD(v197) = BlockGraphics::mBlocks[*(_BYTE *)(v27 + 4)];
            LODWORD(v197) = (*(int (__fastcall **)(int, signed int, signed int))(*(_DWORD *)v27 + 428))(v27, 1, v150);
            v200 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v27 + 424))(v27, v150);
            v201 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(v197, HIDWORD(v197)), v200, 0);
            BlockTessellator::tessellateFaceUp(v12, v25, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v201);
            HIDWORD(v197) = (*(int (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v27 + 428))(v27, 2, v150);
            v202 = (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v27 + 424))(v27, v150);
            v203 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v197, v202, 0);
            BlockTessellator::tessellateNorth(v12, v25, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v203);
            HIDWORD(v197) = (*(int (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v27 + 428))(v27, 3, v150);
            v204 = (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v27 + 424))(v27, v150);
            v205 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v197, v204, 0);
            BlockTessellator::tessellateSouth(v12, v25, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v205);
            HIDWORD(v197) = (*(int (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v27 + 428))(v27, 4, v150);
            v206 = (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v27 + 424))(v27, v150);
            v207 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v197, v206, 0);
            BlockTessellator::tessellateWest(v12, v25, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v207);
            HIDWORD(v197) = (*(int (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v27 + 428))(v27, 5, v150);
            v208 = (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v27 + 424))(v27, v150);
            v209 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v197, v208, 0);
            BlockTessellator::tessellateEast(v12, v25, (const Block *)v27, (const Vec3 *)&Vec3::ZERO, v209);
            v19 = (const Vec3 *)&Vec3::ZERO;
            *((_DWORD *)v12 + 47) = 0;
            *((_DWORD *)v12 + 48) = 0;
            *((_DWORD *)v12 + 49) = 0;
            *((_DWORD *)v12 + 50) = 0;
            *((_DWORD *)v12 + 51) = 0;
            *((_DWORD *)v12 + 52) = 0;
            v18 = v25;
            goto LABEL_4;
          if ( v21 != 87 )
          v256 = 1054867456;
          v257 = 0;
          v258 = 0;
          AABB::shrink((AABB *)&v259, (const Vec3 *)v26, (int)&v256);
          *((_DWORD *)v12 + 181) = v259;
          *((_DWORD *)v12 + 182) = v260;
          *((_DWORD *)v12 + 183) = v261;
          *((_DWORD *)v12 + 184) = v262;
          *((_DWORD *)v12 + 185) = v263;
          *((_DWORD *)v12 + 186) = v264;
          v148 = v265;
        *((_BYTE *)v147 + 748) = v148;
        AABB::centerAt((AABB *)v26, (const Vec3 *)&Vec3::ZERO);
        *((_DWORD *)v147 + 188) = 1067030938;
        TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)&v236);
        TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)&v228);
        v152 = (const Block *)v27;
        if ( *((_BYTE *)v147 + 40) )
          v153 = (int)v147 + 8;
          v154 = v147;
          v155 = *((_DWORD *)v147 + 2);
          v156 = *((_DWORD *)v147 + 3);
          v157 = *((_DWORD *)v147 + 4);
          v158 = *((_DWORD *)v147 + 5);
          v159 = *((_DWORD *)v147 + 6);
          v160 = *((_DWORD *)v147 + 7);
          *(_DWORD *)&v236 = v155;
          v237 = v156;
          v238 = v157;
          v239 = v158;
          v240 = v159;
          v241 = v160;
          v161 = v154;
          v162 = (int *)((char *)v154 + 32);
          EntityInteraction::setInteractText(&v242, (int *)v154 + 8);
          v243 = *((_DWORD *)v161 + 9);
          v163 = v161;
          v164 = *(_DWORD *)(v153 + 4);
          v165 = *(_DWORD *)(v153 + 8);
          v166 = *(_DWORD *)(v153 + 12);
          v167 = *(_DWORD *)(v153 + 16);
          v168 = *(_DWORD *)(v153 + 20);
          *(_DWORD *)&v228 = *(_DWORD *)v153;
          v229 = v164;
          v230 = v165;
          v231 = v166;
          v232 = v167;
          v233 = v168;
          v169 = v163;
          v170 = (const TextureUVCoordinateSet *)&v228;
          EntityInteraction::setInteractText(&v234, v162);
          v171 = *((_DWORD *)v169 + 9);
          v172 = BlockGraphics::getTexture((unsigned int)v224, v24, 0);
          v173 = *(_DWORD *)(v172 + 4);
          v174 = *(_DWORD *)(v172 + 8);
          v175 = *(_DWORD *)(v172 + 12);
          v176 = *(_DWORD *)(v172 + 16);
          v177 = *(_DWORD *)(v172 + 20);
          *(_DWORD *)&v236 = *(_DWORD *)v172;
          v237 = v173;
          v238 = v174;
          v239 = v175;
          v240 = v176;
          v241 = v177;
          v178 = v172;
          EntityInteraction::setInteractText(&v242, (int *)(v172 + 24));
          v243 = *(_DWORD *)(v178 + 28);
          v179 = BlockGraphics::getTexture(__PAIR__(5, (unsigned int)v224), v24, 0);
          v180 = v179;
          v181 = v147;
          v182 = *(_DWORD *)(v179 + 4);
          v183 = *(_DWORD *)(v179 + 8);
          v184 = *(_DWORD *)(v179 + 12);
          v185 = *(_DWORD *)(v179 + 16);
          v186 = *(_DWORD *)(v179 + 20);
          *(_DWORD *)&v228 = *(_DWORD *)v179;
          v229 = v182;
          v230 = v183;
          v231 = v184;
          v232 = v185;
          v233 = v186;
          v169 = v181;
          EntityInteraction::setInteractText(&v234, (int *)(v179 + 24));
          v171 = *(_DWORD *)(v180 + 28);
        v235 = v171;
        Tessellator::begin((int)v25, 1, 24, 0);
        BlockTessellator::tessellateFaceUp(v169, v25, v152, (const Vec3 *)&Vec3::ZERO, v170);
        BlockTessellator::tessellateFaceDown(v169, v25, v152, (const Vec3 *)&Vec3::ZERO, v170);
        BlockTessellator::tessellateSouth(v169, v25, v152, (const Vec3 *)&Vec3::ZERO, v170);
        BlockTessellator::tessellateNorth(v169, v25, v152, (const Vec3 *)&Vec3::ZERO, v170);
          v169,
          v25,
          v152,
          (const TextureUVCoordinateSet *)&v236);
        *((_DWORD *)v169 + 188) = 1065353216;
        v187 = (void *)(v234 - 12);
        if ( (int *)(v234 - 12) != &dword_28898C0 )
          v210 = (unsigned int *)(v234 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v211 = __ldrex(v210);
            while ( __strex(v211 - 1, v210) );
            v211 = (*v210)--;
          if ( v211 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v187);
        v12 = v169;
        v61 = (void *)(v242 - 12);
        if ( (int *)(v242 - 12) != &dword_28898C0 )
          v62 = (unsigned int *)(v242 - 4);
              v63 = __ldrex(v62);
            while ( __strex(v63 - 1, v62) );
LABEL_114:
            v63 = (*v62)--;
LABEL_115:
          if ( v63 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v61);
  }
  Tessellator::begin(v227, 24, 0);
  v10 = v224;
  v11 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v224 + 48))(
                                          v224,
                                          0,
                                          v9,
                                          0);
  v12 = v3;
  BlockTessellator::tessellateFaceDown(v3, v227, v6, (const Vec3 *)&Vec3::ZERO, v11);
  v13 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(BlockGraphics *, signed int, int, _DWORD))(*(_DWORD *)v10 + 48))(
                                          v10,
                                          1,
  BlockTessellator::tessellateFaceUp(v3, v227, v6, (const Vec3 *)&Vec3::ZERO, v13);
  v14 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(BlockGraphics *, signed int, int, _DWORD))(*(_DWORD *)v10 + 48))(
                                          2,
  BlockTessellator::tessellateNorth(v3, v227, v6, (const Vec3 *)&Vec3::ZERO, v14);
  v15 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(_DWORD, signed int, _DWORD, _DWORD))(*(_DWORD *)v10 + 48))(
                                          3,
  BlockTessellator::tessellateSouth(v3, v227, v6, (const Vec3 *)&Vec3::ZERO, v15);
  v16 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(_DWORD, signed int, _DWORD, _DWORD))(*(_DWORD *)v10 + 48))(
                                          4,
  BlockTessellator::tessellateWest(v3, v227, v6, (const Vec3 *)&Vec3::ZERO, v16);
  v17 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(_DWORD, signed int, _DWORD, _DWORD))(*(_DWORD *)v10 + 48))(
                                          5,
  BlockTessellator::tessellateEast(v3, v227, v6, (const Vec3 *)&Vec3::ZERO, v17);
  v18 = v227;
  v19 = (const Vec3 *)&Vec3::ZERO;
LABEL_4:
  Tessellator::setOffset(v18, v19);
LABEL_5:
  result = 0;
  *((_BYTE *)v12 + 1) = 0;
  return result;
}


signed int __fastcall BlockTessellator::tessellateSlimeBlockInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  BlockTessellator *v5; // r7@1
  int v6; // r0@1
  const BlockPos *v7; // r4@1
  const Block *v8; // r5@1
  Tessellator *v9; // r6@1
  const Vec3 *v14; // r2@3
  const Vec3 *v15; // r1@3
  AABB *v17; // r0@3
  float v19; // [sp+8h] [bp-30h]@3
  int v20; // [sp+14h] [bp-24h]@3
  signed int v21; // [sp+18h] [bp-20h]@3
  int v22; // [sp+1Ch] [bp-1Ch]@3

  v5 = this;
  v6 = *((_DWORD *)this + 11);
  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( v6 == 1 )
  {
    v15 = (const Vec3 *)&Vec3::ZERO;
    v17 = (BlockTessellator *)((char *)v5 + 724);
    v14 = (const Vec3 *)&Vec3::ONE;
    goto LABEL_5;
  }
  if ( v6 == 3 )
    __asm { VMOV.F32        S0, #-0.1875 }
    v14 = (const Vec3 *)&v19;
    v20 = 1044381696;
    v21 = 1044381696;
    v22 = 1044381696;
    v15 = (const Vec3 *)&v20;
    _R0 = &Vec3::ONE;
    __asm
    {
      VLDR            S2, [R0]
      VLDR            S4, [R0,#4]
      VLDR            S6, [R0,#8]
      VADD.F32        S2, S2, S0
      VADD.F32        S4, S4, S0
    }
      VADD.F32        S0, S6, S0
      VSTR            S2, [SP,#0x38+var_30]
      VSTR            S4, [SP,#0x38+var_2C]
      VSTR            S0, [SP,#0x38+var_28]
LABEL_5:
    AABB::set(v17, v15, v14);
    BlockTessellator::tessellateBlockInWorld(v5, v9, v8, v7, a5);
  return 1;
}


signed int __fastcall BlockTessellator::tessellateDustInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  BlockTessellator *v5; // r5@1
  const Block *v6; // r8@1
  Tessellator *v7; // r6@1
  int v9; // r10@1
  int v12; // r0@3
  __int64 v23; // r0@7
  int v24; // r2@7
  signed int v25; // r4@7
  int v26; // r3@7
  RedStoneWireBlock *v27; // r0@10
  const BlockPos *v28; // r1@11
  int v29; // r3@13
  signed int v30; // r0@14
  RedStoneWireBlock *v31; // r0@17
  const BlockPos *v32; // r1@18
  int v33; // r3@21
  signed int v34; // r0@22
  RedStoneWireBlock *v35; // r0@25
  const BlockPos *v36; // r1@26
  signed int v37; // r6@30
  RedStoneWireBlock *v38; // r0@33
  const BlockPos *v39; // r1@34
  int v40; // r2@36
  int v41; // r3@36
  BlockSource *v42; // r0@36
  int (__fastcall *v43)(const Block *, int, int *); // r6@37
  int v44; // r1@37
  RedStoneWireBlock *v45; // r0@38
  const BlockPos *v46; // r1@39
  signed int v47; // r2@39
  int (__fastcall *v48)(const Block *, int, int *); // r6@42
  int v49; // r1@42
  RedStoneWireBlock *v50; // r0@43
  const BlockPos *v51; // r1@44
  signed int v52; // r2@44
  int (__fastcall *v53)(const Block *, int, __int64 *); // r6@47
  int v54; // r1@47
  RedStoneWireBlock *v55; // r0@48
  const BlockPos *v56; // r1@49
  signed int v57; // r2@49
  int (__fastcall *v58)(const Block *, int, __int64 *); // r6@52
  int v59; // r1@52
  RedStoneWireBlock *v60; // r0@53
  const BlockPos *v61; // r1@54
  signed int v62; // r2@54
  int v67; // r8@58
  int v68; // r6@58
  signed int v70; // r4@62
  Tessellator *v79; // r10@72
  float v82; // ST00_4@72
  float v83; // ST04_4@72
  float v85; // ST00_4@72
  float v86; // ST04_4@72
  float v90; // ST00_4@73
  float v91; // ST04_4@73
  float v92; // ST00_4@73
  float v93; // ST04_4@73
  BlockTessellator *v94; // r7@74
  int v96; // r0@75
  float v107; // ST00_4@93
  float v108; // ST04_4@93
  float v110; // ST00_4@93
  float v111; // ST04_4@93
  float v112; // ST00_4@93
  float v113; // ST04_4@93
  void *v114; // r0@93
  int v115; // r2@95
  int v116; // r3@95
  BlockSource *v117; // r0@95
  int v118; // r2@96
  int v119; // r3@96
  const BlockPos *v120; // r1@96
  int v121; // r2@97
  int v122; // r3@97
  const BlockPos *v123; // r1@97
  const BlockPos *v124; // r1@99
  float v129; // ST00_4@100
  BlockTessellator *v130; // r9@100
  float v132; // ST00_4@100
  float v133; // ST04_4@100
  float v135; // r2@100
  float v136; // ST00_4@100
  float v137; // ST04_4@100
  float v138; // ST00_4@100
  float v139; // ST04_4@100
  const BlockPos *v140; // r1@102
  float v145; // ST00_4@103
  BlockTessellator *v146; // r9@103
  float v148; // ST00_4@103
  float v149; // ST04_4@103
  float v151; // r2@103
  float v152; // ST00_4@103
  float v153; // ST04_4@103
  float v154; // ST00_4@103
  float v155; // ST04_4@103
  const BlockPos *v156; // r1@105
  float v161; // ST00_4@106
  BlockTessellator *v162; // r9@106
  float v164; // ST00_4@106
  float v165; // ST04_4@106
  float v167; // r2@106
  float v168; // ST00_4@106
  float v169; // ST04_4@106
  float v170; // ST00_4@106
  float v171; // ST04_4@106
  const BlockPos *v172; // r1@108
  float v177; // ST00_4@109
  float v179; // ST00_4@109
  float v180; // ST04_4@109
  float v182; // ST00_4@109
  float v183; // ST04_4@109
  float v184; // ST00_4@109
  float v185; // ST04_4@109
  unsigned int *v187; // r2@111
  signed int v188; // r1@113
  float v189; // [sp+0h] [bp-298h]@7
  float v190; // [sp+0h] [bp-298h]@72
  float v191; // [sp+0h] [bp-298h]@76
  float v192; // [sp+4h] [bp-294h]@0
  float v193; // [sp+4h] [bp-294h]@72
  float v194; // [sp+4h] [bp-294h]@74
  float v195; // [sp+4h] [bp-294h]@76
  float v201; // [sp+1Ch] [bp-27Ch]@7
  float v202; // [sp+20h] [bp-278h]@7
  float v203; // [sp+24h] [bp-274h]@7
  signed int v204; // [sp+28h] [bp-270h]@58
  float v205; // [sp+2Ch] [bp-26Ch]@54
  BlockTessellator *v206; // [sp+30h] [bp-268h]@54
  Tessellator *v207; // [sp+34h] [bp-264h]@30
  signed int v208; // [sp+38h] [bp-260h]@36
  signed int v209; // [sp+3Ch] [bp-25Ch]@25
  signed int v210; // [sp+40h] [bp-258h]@17
  TextureUVCoordinateSet *v211; // [sp+44h] [bp-254h]@1
  unsigned __int8 v212; // [sp+48h] [bp-250h]@108
  __int64 v213; // [sp+4Ch] [bp-24Ch]@108
  int v214; // [sp+54h] [bp-244h]@108
  unsigned __int8 v215; // [sp+58h] [bp-240h]@105
  __int64 v216; // [sp+5Ch] [bp-23Ch]@105
  int v217; // [sp+64h] [bp-234h]@105
  unsigned __int8 v218; // [sp+68h] [bp-230h]@102
  int v219; // [sp+6Ch] [bp-22Ch]@102
  int v220; // [sp+70h] [bp-228h]@102
  int v221; // [sp+74h] [bp-224h]@102
  unsigned __int8 v222; // [sp+78h] [bp-220h]@99
  int v223; // [sp+7Ch] [bp-21Ch]@99
  int v224; // [sp+80h] [bp-218h]@99
  int v225; // [sp+84h] [bp-214h]@99
  unsigned __int8 v226; // [sp+88h] [bp-210h]@97
  int v227; // [sp+8Ch] [bp-20Ch]@97
  int v228; // [sp+90h] [bp-208h]@97
  int v229; // [sp+94h] [bp-204h]@97
  unsigned __int8 v230; // [sp+98h] [bp-200h]@96
  int v231; // [sp+9Ch] [bp-1FCh]@96
  int v232; // [sp+A0h] [bp-1F8h]@96
  int v233; // [sp+A4h] [bp-1F4h]@96
  int v234; // [sp+A8h] [bp-1F0h]@95
  int v235; // [sp+ACh] [bp-1ECh]@95
  int v236; // [sp+B0h] [bp-1E8h]@95
  char v237; // [sp+B4h] [bp-1E4h]@76
  int v242; // [sp+CCh] [bp-1CCh]@93
  unsigned __int8 v243; // [sp+D4h] [bp-1C4h]@54
  __int64 v244; // [sp+D8h] [bp-1C0h]@54
  int v245; // [sp+E0h] [bp-1B8h]@54
  __int64 v246; // [sp+E4h] [bp-1B4h]@53
  int v247; // [sp+ECh] [bp-1ACh]@53
  __int64 v248; // [sp+F0h] [bp-1A8h]@52
  int v249; // [sp+F8h] [bp-1A0h]@52
  unsigned __int8 v250; // [sp+FCh] [bp-19Ch]@49
  __int64 v251; // [sp+100h] [bp-198h]@49
  int v252; // [sp+108h] [bp-190h]@49
  __int64 v253; // [sp+10Ch] [bp-18Ch]@48
  int v254; // [sp+114h] [bp-184h]@48
  __int64 v255; // [sp+118h] [bp-180h]@47
  int v256; // [sp+120h] [bp-178h]@47
  unsigned __int8 v257; // [sp+124h] [bp-174h]@44
  int v258; // [sp+128h] [bp-170h]@44
  int v259; // [sp+12Ch] [bp-16Ch]@44
  int v260; // [sp+130h] [bp-168h]@44
  int v261; // [sp+134h] [bp-164h]@43
  int v262; // [sp+138h] [bp-160h]@43
  int v263; // [sp+13Ch] [bp-15Ch]@43
  int v264; // [sp+140h] [bp-158h]@42
  int v265; // [sp+144h] [bp-154h]@42
  int v266; // [sp+148h] [bp-150h]@42
  unsigned __int8 v267; // [sp+14Ch] [bp-14Ch]@39
  int v268; // [sp+150h] [bp-148h]@39
  int v269; // [sp+154h] [bp-144h]@39
  int v270; // [sp+158h] [bp-140h]@39
  int v271; // [sp+15Ch] [bp-13Ch]@38
  int v272; // [sp+160h] [bp-138h]@38
  int v273; // [sp+164h] [bp-134h]@38
  int v274; // [sp+168h] [bp-130h]@37
  int v275; // [sp+16Ch] [bp-12Ch]@37
  int v276; // [sp+170h] [bp-128h]@37
  int v277; // [sp+174h] [bp-124h]@36
  int v278; // [sp+178h] [bp-120h]@36
  int v279; // [sp+17Ch] [bp-11Ch]@36
  unsigned __int8 v280; // [sp+180h] [bp-118h]@34
  __int64 v281; // [sp+184h] [bp-114h]@34
  int v282; // [sp+18Ch] [bp-10Ch]@34
  __int64 v283; // [sp+190h] [bp-108h]@33
  int v284; // [sp+198h] [bp-100h]@33
  unsigned __int8 v285; // [sp+19Ch] [bp-FCh]@26
  __int64 v286; // [sp+1A0h] [bp-F8h]@26
  int v287; // [sp+1A8h] [bp-F0h]@26
  __int64 v288; // [sp+1ACh] [bp-ECh]@25
  int v289; // [sp+1B4h] [bp-E4h]@25
  unsigned __int8 v290; // [sp+1B8h] [bp-E0h]@18
  int v291; // [sp+1BCh] [bp-DCh]@18
  int v292; // [sp+1C0h] [bp-D8h]@18
  int v293; // [sp+1C4h] [bp-D4h]@18
  int v294; // [sp+1C8h] [bp-D0h]@17
  int v295; // [sp+1CCh] [bp-CCh]@17
  int v296; // [sp+1D0h] [bp-C8h]@17
  unsigned __int8 v297; // [sp+1D4h] [bp-C4h]@11
  int v298; // [sp+1D8h] [bp-C0h]@11
  int v299; // [sp+1DCh] [bp-BCh]@11
  int v300; // [sp+1E0h] [bp-B8h]@11
  int v301; // [sp+1E4h] [bp-B4h]@10
  int v302; // [sp+1E8h] [bp-B0h]@10
  int v303; // [sp+1ECh] [bp-ACh]@10
  __int64 v304; // [sp+1F0h] [bp-A8h]@7
  int v305; // [sp+1F8h] [bp-A0h]@7
  __int64 v306; // [sp+1FCh] [bp-9Ch]@7
  int v307; // [sp+204h] [bp-94h]@7
  int v308; // [sp+208h] [bp-90h]@7
  int v309; // [sp+20Ch] [bp-8Ch]@7
  int v310; // [sp+210h] [bp-88h]@7
  int v311; // [sp+214h] [bp-84h]@7
  int v312; // [sp+218h] [bp-80h]@7
  int v313; // [sp+21Ch] [bp-7Ch]@7
  unsigned __int8 v314; // [sp+220h] [bp-78h]@2
  unsigned __int8 v315; // [sp+221h] [bp-77h]@2
  float v316; // [sp+224h] [bp-74h]@6

  v5 = this;
  v6 = a3;
  v7 = a2;
  _R9 = a4;
  *(float *)&v9 = COERCE_FLOAT(BlockGraphics::getTexture((BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)a3 + 4)], a4, 1, 0));
  v211 = (TextureUVCoordinateSet *)BlockGraphics::getTexture(
                                     (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v6 + 4)],
                                     _R9,
                                     0,
                                     0);
  if ( *((_BYTE *)v5 + 48) )
  {
    _R1 = (unsigned __int8)Brightness::MAX;
    v314 = Brightness::MAX;
    v315 = Brightness::MAX;
    _R2 = (unsigned __int8)Brightness::MAX;
  }
  else
    BlockTessellatorCache::getLightColor(
      (BlockTessellatorCache *)&v314,
      (BlockTessellator *)((char *)v5 + 812),
      (int)_R9);
    _R1 = v314;
    _R2 = v315;
    v12 = *((_BYTE *)v5 + 48);
  __asm
    VMOV            S0, R2
    VLDR            S4, =0.0625
    VMOV            S2, R1
    VCVT.F32.U32    S0, S0
    VCVT.F32.U32    S2, S2
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S4
    VSTR            S0, [SP,#0x298+var_74]
    VSTR            S2, [SP,#0x298+var_70]
  if ( _ZF )
    Tessellator::tex1((int)v7, (__int64 *)&v316);
  _R0 = (*(int (__fastcall **)(const Block *, int))(*(_DWORD *)v6 + 384))(v6, a5);
  _R1 = (_R0 >> 16) & 0xFF;
  _R2 = (unsigned __int16)_R0 >> 8;
  _R0 = (unsigned __int8)_R0;
    VLDR            S6, =0.0039216
    VMOV            S0, R1
    VMOV            S4, R0
    VMOV            S2, R2
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VMUL.F32        S0, S0, S6
    VMUL.F32        S2, S2, S6
    VMUL.F32        S4, S4, S6
    VMOV            R1, S0
    VMOV            R2, S2
    VMOV            R3, S4
  v203 = _R1;
  v202 = _R2;
  v201 = _R3;
  Tessellator::color(v7, _R1, _R2, _R3, 1.0);
  v23 = *(_QWORD *)_R9;
  v24 = *((_DWORD *)_R9 + 2);
  v25 = 1;
  v311 = *(_DWORD *)_R9 - 1;
  v312 = HIDWORD(v23);
  v313 = v24;
  v308 = v23 + 1;
  v309 = HIDWORD(v23);
  v310 = v24;
  v306 = v23;
  v307 = v24 + 1;
  v304 = v23;
  v305 = v24 - 1;
  if ( !RedStoneWireBlock::shouldConnectTo(
          *((RedStoneWireBlock **)v5 + 1),
          (BlockSource *)&v311,
          (const BlockPos *)1,
          v24 + 1) )
    if ( BlockSource::isSolidBlockingBlock(*((BlockSource **)v5 + 1), (const BlockPos *)&v311) )
    {
      v25 = 0;
    }
    else
      v27 = (RedStoneWireBlock *)*((_DWORD *)v5 + 1);
      v301 = v311;
      v302 = v312 - 1;
      v303 = v313;
      if ( RedStoneWireBlock::shouldConnectTo(v27, (BlockSource *)&v301, (const BlockPos *)0xFF, v313) == 1 )
      {
        v28 = (const BlockPos *)*((_DWORD *)v5 + 1);
        v298 = v311;
        v299 = v312 - 1;
        v300 = v313;
        BlockSource::getBlockID((BlockSource *)&v297, v28, (int)&v298);
        if ( v297 == *(_BYTE *)(Block::mRedStoneDust + 4) )
          v25 = 1;
      }
  if ( RedStoneWireBlock::shouldConnectTo(
         *((RedStoneWireBlock **)v5 + 1),
         (BlockSource *)&v308,
         (const BlockPos *)3,
         v26) )
    v30 = 1;
  else if ( BlockSource::isSolidBlockingBlock(*((BlockSource **)v5 + 1), (const BlockPos *)&v308) )
    v30 = 0;
    v31 = (RedStoneWireBlock *)*((_DWORD *)v5 + 1);
    v294 = v308;
    v295 = v309 - 1;
    v296 = v310;
    v210 = 0;
    if ( RedStoneWireBlock::shouldConnectTo(v31, (BlockSource *)&v294, (const BlockPos *)0xFF, v310) != 1 )
      goto LABEL_21;
    v32 = (const BlockPos *)*((_DWORD *)v5 + 1);
    v291 = v308;
    v292 = v309 - 1;
    v293 = v310;
    BlockSource::getBlockID((BlockSource *)&v290, v32, (int)&v291);
    if ( v290 == *(_BYTE *)(Block::mRedStoneDust + 4) )
      v30 = 1;
  v210 = v30;
LABEL_21:
  if ( RedStoneWireBlock::shouldConnectTo(*((RedStoneWireBlock **)v5 + 1), (BlockSource *)&v306, 0, v29) )
    v34 = 1;
  else if ( BlockSource::isSolidBlockingBlock(*((BlockSource **)v5 + 1), (const BlockPos *)&v306) )
    v34 = 0;
    v35 = (RedStoneWireBlock *)*((_DWORD *)v5 + 1);
    v288 = v306 - 0x100000000LL;
    v289 = v307;
    v209 = 0;
    if ( RedStoneWireBlock::shouldConnectTo(v35, (BlockSource *)&v288, (const BlockPos *)0xFF, v307) != 1 )
      goto LABEL_29;
    v36 = (const BlockPos *)*((_DWORD *)v5 + 1);
    v286 = v306 - 0x100000000LL;
    v287 = v307;
    BlockSource::getBlockID((BlockSource *)&v285, v36, (int)&v286);
    if ( v285 == *(_BYTE *)(Block::mRedStoneDust + 4) )
      v34 = 1;
  v209 = v34;
LABEL_29:
         (BlockSource *)&v304,
         (const BlockPos *)2,
         v33) )
    v207 = v7;
    v37 = 1;
    if ( BlockSource::isSolidBlockingBlock(*((BlockSource **)v5 + 1), (const BlockPos *)&v304) )
      v37 = 0;
      v38 = (RedStoneWireBlock *)*((_DWORD *)v5 + 1);
      v283 = v304 - 0x100000000LL;
      v284 = v305;
      if ( RedStoneWireBlock::shouldConnectTo(v38, (BlockSource *)&v283, (const BlockPos *)0xFF, v305) == 1 )
        v39 = (const BlockPos *)*((_DWORD *)v5 + 1);
        v281 = v304 - 0x100000000LL;
        v282 = v305;
        BlockSource::getBlockID((BlockSource *)&v280, v39, (int)&v281);
        if ( v280 == *(_BYTE *)(Block::mRedStoneDust + 4) )
          v37 = 1;
  v208 = v37;
  v40 = *((_DWORD *)_R9 + 1);
  v41 = *((_DWORD *)_R9 + 2);
  v42 = (BlockSource *)*((_DWORD *)v5 + 1);
  v277 = *(_DWORD *)_R9;
  v278 = v40 + 1;
  v279 = v41;
  if ( BlockSource::isSolidBlockingBlock(v42, (const BlockPos *)&v277) )
    goto LABEL_121;
  v43 = *(int (__fastcall **)(const Block *, int, int *))(*(_DWORD *)v6 + 324);
  v44 = *((_DWORD *)v5 + 1);
  v274 = v311;
  v275 = v312 + 1;
  v276 = v313;
  if ( v43(v6, v44, &v274) == 1 )
    v45 = (RedStoneWireBlock *)*((_DWORD *)v5 + 1);
    v271 = v311;
    v272 = v312 + 1;
    v273 = v313;
    if ( RedStoneWireBlock::shouldConnectTo(v45, (BlockSource *)&v271, (const BlockPos *)0xFF, v313) == 1 )
      v46 = (const BlockPos *)*((_DWORD *)v5 + 1);
      v268 = v311;
      v269 = v312 + 1;
      v270 = v313;
      BlockSource::getBlockID((BlockSource *)&v267, v46, (int)&v268);
      v47 = 0;
      if ( v267 == *(_BYTE *)(Block::mRedStoneDust + 4) )
        v47 = 1;
      v25 |= v47;
  v48 = *(int (__fastcall **)(const Block *, int, int *))(*(_DWORD *)v6 + 324);
  v49 = *((_DWORD *)v5 + 1);
  v264 = v308;
  v265 = v309 + 1;
  v266 = v310;
  if ( v48(v6, v49, &v264) == 1 )
    v50 = (RedStoneWireBlock *)*((_DWORD *)v5 + 1);
    v261 = v308;
    v262 = v309 + 1;
    v263 = v310;
    if ( RedStoneWireBlock::shouldConnectTo(v50, (BlockSource *)&v261, (const BlockPos *)0xFF, v310) == 1 )
      v51 = (const BlockPos *)*((_DWORD *)v5 + 1);
      v258 = v308;
      v259 = v309 + 1;
      v260 = v310;
      BlockSource::getBlockID((BlockSource *)&v257, v51, (int)&v258);
      v52 = 0;
      if ( v257 == *(_BYTE *)(Block::mRedStoneDust + 4) )
        v52 = 1;
      v210 |= v52;
  v53 = *(int (__fastcall **)(const Block *, int, __int64 *))(*(_DWORD *)v6 + 324);
  v54 = *((_DWORD *)v5 + 1);
  v255 = v304 + 0x100000000LL;
  v256 = v305;
  if ( v53(v6, v54, &v255) == 1 )
    v55 = (RedStoneWireBlock *)*((_DWORD *)v5 + 1);
    v253 = v304 + 0x100000000LL;
    v254 = v305;
    if ( RedStoneWireBlock::shouldConnectTo(v55, (BlockSource *)&v253, (const BlockPos *)0xFF, v305) == 1 )
      v56 = (const BlockPos *)*((_DWORD *)v5 + 1);
      v251 = v304 + 0x100000000LL;
      v252 = v305;
      BlockSource::getBlockID((BlockSource *)&v250, v56, (int)&v251);
      v57 = 0;
      if ( v250 == *(_BYTE *)(Block::mRedStoneDust + 4) )
        v57 = 1;
      v208 |= v57;
  v58 = *(int (__fastcall **)(const Block *, int, __int64 *))(*(_DWORD *)v6 + 324);
  v59 = *((_DWORD *)v5 + 1);
  v248 = v306 + 0x100000000LL;
  v249 = v307;
  if ( v58(v6, v59, &v248) != 1
    || (v60 = (RedStoneWireBlock *)*((_DWORD *)v5 + 1),
        v246 = v306 + 0x100000000LL,
        v247 = v307,
        RedStoneWireBlock::shouldConnectTo(v60, (BlockSource *)&v246, (const BlockPos *)0xFF, v307) != 1) )
LABEL_121:
    v205 = *(float *)&v9;
    v206 = v5;
    v61 = (const BlockPos *)*((_DWORD *)v5 + 1);
    v244 = v306 + 0x100000000LL;
    v245 = v307;
    BlockSource::getBlockID((BlockSource *)&v243, v61, (int)&v244);
    v62 = 0;
    if ( v243 == *(_BYTE *)(Block::mRedStoneDust + 4) )
      v62 = 1;
    v209 |= v62;
  __asm { VLDR            S0, [R9,#4] }
  v204 = v25;
  _R10 = *((_DWORD *)_R9 + 2);
  _R7 = *(_DWORD *)_R9;
  __asm { VCVT.F32.S32    S16, S0 }
  _R0 = TextureUVCoordinateSet::offsetHeight(v211, 0.375, 0.0);
  __asm { VMOV            S18, R0 }
  _R0 = _R7 + 1;
  v67 = v210 | v25;
  __asm { VMOV            S4, R7 }
  v68 = v209 ^ 1;
  if ( (v210 | v25) != 1 )
    v68 = 0;
  __asm { VMOV            S0, R0 }
  _R0 = _R10 + 1;
  __asm { VMOV            S6, R10 }
  if ( !_ZF )
  __asm { VMOV            S2, R0 }
  _ZF = v25 == 0;
  v70 = v68;
    v70 = 2;
    VCVT.F32.S32    S27, S6
    VCVT.F32.S32    S23, S4
    VMOV.F32        S8, #0.375
    VCVT.F32.S32    S24, S2
    VMOV.F32        S4, #-0.375
    VCVT.F32.S32    S25, S0
    v70 = v68;
    VADD.F32        S28, S27, S8
    VADD.F32        S22, S23, S8
    VADD.F32        S30, S24, S4
    VADD.F32        S26, S25, S4
  _R0 = TextureUVCoordinateSet::inverseOffsetHeight(v211, 0.375, 0.0);
  __asm { VMOV            S20, R0 }
  if ( v70 == 1 )
    __asm
      VLDR            S0, =0.015625
      VMOV            R6, S25
      VMOV            R8, S30
    _R4 = v211;
    __asm { VADD.F32        S0, S16, S0 }
    v79 = v207;
      VMOV            R5, S0
      VLDR            S0, [R4,#0xC]
      VSTR            S0, [SP,#0x298+var_298]
      VSTR            S20, [SP,#0x298+var_294]
    Tessellator::vertexUV(v207, _R6, _R5, _R8, v189, v192);
      VMOV            R7, S28
      VSTR            S18, [SP,#0x298+var_294]
    Tessellator::vertexUV(v207, _R6, _R5, _R7, v82, v83);
      VMOV            R6, S23
      VLDR            S0, [R4,#4]
    Tessellator::vertexUV(v207, _R6, _R5, _R7, v85, v86);
LABEL_74:
    Tessellator::vertexUV(v79, _R6, _R5, _R8, v190, v193);
    __asm { VMOV.F32        S17, S27 }
    v94 = v206;
      VMOV.F32        S19, S25
      VMOV.F32        S21, S23
    goto LABEL_95;
  if ( v70 )
      VMOV            R6, S26
      VMOV            R8, S24
      VMOV            R7, S27
    Tessellator::vertexUV(v207, _R6, _R5, _R7, v90, v91);
      VMOV            R6, S22
    Tessellator::vertexUV(v207, _R6, _R5, _R7, v92, v93);
    goto LABEL_74;
  _R5 = v205;
    VSTR            S18, [SP,#0x298+var_280]
    VMOV.F32        S18, S16
    VSTR            S30, [SP,#0x298+var_290]
  _R0 = *(_WORD *)(LODWORD(v205) + 20);
    VSTR            S22, [SP,#0x298+var_284]
    VMOV            S0, R0
    VCVT.F32.U32    S22, S0
    VLDR            S31, [R5,#4]
    VLDR            S16, [R5,#0xC]
    VLDR            S30, [R5,#8]
    VLDR            S29, [R5,#0x10]
    VCMPE.F32       S16, S31
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      VMUL.F32        S0, S22, S31
      VSTR            S20, [SP,#0x298+var_28C]
      VSTR            S26, [SP,#0x298+var_288]
      VMOV            R0, S0
    v96 = roundf(_R0);
    __asm { VMUL.F32        S0, S22, S16 }
    _R4 = v96;
      VMUL.F32        S0, S22, S16
    _R4 = roundf(_R0);
    __asm { VMUL.F32        S0, S22, S31 }
  __asm { VMOV            R0, S0 }
  _R0 = roundf(_R0);
    VMOV            S2, R4
    VCVTR.S32.F32   S0, S0
    VCVTR.S32.F32   S2, S2
    VMOV.F32        S20, S28
    VMOV            R0, S0
    VMOV            R1, S2
    VMOV.F32        S0, #5.0
  _R0 = (((unsigned __int16)_R1 - (unsigned __int16)_R0) & 0xFFF0u) >> 4;
    VMOV            S2, R0
    VCVT.F32.U32    S22, S2
    VMUL.F32        S26, S22, S0
    VMOV            R2, S26
  TextureUVCoordinateSet::subTexture((TextureUVCoordinateSet *)&v237, v205, *(float *)&_R2, _R2, 6 * _R0, 6 * _R0);
  v94 = v206;
  if ( (v208 | v67 | v209) == 1 )
      VMOV.F32        S0, #16.0
      VLDR            S28, [SP,#0x298+var_1DC]
      VMUL.F32        S0, S22, S0
      VLDR            S22, [SP,#0x298+var_1E0]
      VDIV.F32        S0, S26, S0
      VLDR            S26, [SP,#0x298+var_1D8]
    if ( !_ZF )
      __asm { VMOVNE.F32      S28, S30 }
    __asm { VADD.F32        S17, S0, S27 }
      __asm { VMOVNE.F32      S26, S16 }
    if ( v204 )
      __asm { VMOVNE.F32      S22, S31 }
    __asm { VMOV.F32        S16, S18 }
      __asm { VMOVNE.F32      S17, S27 }
    __asm { VSUB.F32        S19, S25, S0 }
    if ( v210 )
      __asm { VMOVNE.F32      S19, S25 }
    __asm { VADD.F32        S21, S0, S23 }
      __asm { VMOVNE.F32      S21, S23 }
    if ( !v209 )
      __asm
        VSUBEQ.F32      S24, S24, S0
        VLDREQ          S29, [SP,#0x298+var_1D4]
    __asm { VMOV.F32        S26, S16 }
      VMOV.F32        S17, S27
      VMOV.F32        S22, S31
      VMOV.F32        S28, S30
      VMOV.F32        S16, S18
    VLDR            S0, =0.015625
    VMOV            R6, S19
    VMOV            R8, S24
    VADD.F32        S0, S16, S0
    VMOV            R4, S0
    VSTR            S26, [SP,#0x298+var_298]
    VSTR            S29, [SP,#0x298+var_294]
  Tessellator::vertexUV(v79, _R6, _R4, _R8, v191, v195);
    VMOV            R5, S17
    VSTR            S28, [SP,#0x298+var_294]
  Tessellator::vertexUV(v79, _R6, _R4, _R5, v107, v108);
    VMOV            R6, S21
    VSTR            S22, [SP,#0x298+var_298]
  Tessellator::vertexUV(v79, _R6, _R4, _R5, v110, v111);
  Tessellator::vertexUV(v79, _R6, _R4, _R8, v112, v113);
    VMOV.F32        S28, S20
    VLDR            S18, [SP,#0x298+var_280]
    VLDR            S22, [SP,#0x298+var_284]
  v114 = (void *)(v242 - 12);
    VLDR            S26, [SP,#0x298+var_288]
    VLDR            S30, [SP,#0x298+var_290]
  if ( (int *)(v242 - 12) != &dword_28898C0 )
    v187 = (unsigned int *)(v242 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v188 = __ldrex(v187);
      while ( __strex(v188 - 1, v187) );
      v188 = (*v187)--;
    if ( v188 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v114);
  __asm { VLDR            S20, [SP,#0x298+var_28C] }
LABEL_95:
  v115 = *((_DWORD *)_R9 + 1);
  v116 = *((_DWORD *)_R9 + 2);
  v117 = (BlockSource *)*((_DWORD *)v94 + 1);
  v234 = *(_DWORD *)_R9;
  v235 = v115 + 1;
  v236 = v116;
  if ( !BlockSource::isConsideredSolidBlock(v117, (const BlockPos *)&v234) )
    v118 = *((_DWORD *)_R9 + 1);
    v119 = *((_DWORD *)_R9 + 2);
    v120 = (const BlockPos *)*((_DWORD *)v94 + 1);
    v231 = *(_DWORD *)_R9;
    v232 = v118 + 1;
    v233 = v119;
    BlockSource::getBlockID((BlockSource *)&v230, v120, (int)&v231);
    if ( v230 != *(_BYTE *)(Block::mPiston + 4) )
      v121 = *((_DWORD *)_R9 + 1);
      v122 = *((_DWORD *)_R9 + 2);
      v123 = (const BlockPos *)*((_DWORD *)v94 + 1);
      v227 = *(_DWORD *)_R9;
      v228 = v121 + 1;
      v229 = v122;
      BlockSource::getBlockID((BlockSource *)&v226, v123, (int)&v227);
      if ( v226 != *(_BYTE *)(Block::mStickyPiston + 4) )
        if ( BlockSource::isConsideredSolidBlock(*((BlockSource **)v94 + 1), (const BlockPos *)&v311) == 1 )
        {
          v124 = (const BlockPos *)*((_DWORD *)v94 + 1);
          v223 = v311;
          v224 = v312 + 1;
          v225 = v313;
          BlockSource::getBlockID((BlockSource *)&v222, v124, (int)&v223);
          if ( v222 == *(_BYTE *)(Block::mRedStoneDust + 4) )
          {
            Tessellator::color(v79, v203, v202, v201, 1.0);
            __asm
            {
              VLDR            S0, =0.015625
              VMOV            R6, S30
              VLDR            S2, =1.0219
              VADD.F32        S0, S21, S0
            }
            _R5 = v211;
              VADD.F32        S2, S16, S2
              VMOV            R4, S0
              VLDR            S0, [R5,#0xC]
              VMOV            R8, S2
              VSTR            S0, [SP,#0x298+var_298]
              VSTR            S18, [SP,#0x298+var_294]
            Tessellator::vertexUV(v79, _R4, _R8, _R6, v129, v194);
            v130 = v94;
              VMOV            R7, S16
              VLDR            S0, [R5,#4]
            Tessellator::vertexUV(v79, _R4, _R7, _R6, v132, v133);
              VMOV            R6, S28
            v135 = _R7;
              VSTR            S20, [SP,#0x298+var_294]
            v94 = v130;
            Tessellator::vertexUV(v79, _R4, v135, _R6, v136, v137);
            Tessellator::vertexUV(v79, _R4, _R8, _R6, v138, v139);
          }
        }
        if ( BlockSource::isConsideredSolidBlock(*((BlockSource **)v94 + 1), (const BlockPos *)&v308) == 1 )
          v140 = (const BlockPos *)*((_DWORD *)v94 + 1);
          v219 = v308;
          v220 = v309 + 1;
          v221 = v310;
          BlockSource::getBlockID((BlockSource *)&v218, v140, (int)&v219);
          if ( v218 == *(_BYTE *)(Block::mRedStoneDust + 4) )
              VLDR            S0, =-0.015625
              VMOV            R8, S16
            _R4 = v211;
              VADD.F32        S0, S19, S0
              VMOV            R5, S0
              VLDR            S0, [R4,#4]
            Tessellator::vertexUV(v79, _R5, _R8, _R6, v145, v194);
            __asm { VLDR            S0, =1.0219 }
            v146 = v94;
              VADD.F32        S0, S16, S0
              VMOV            R7, S0
              VLDR            S0, [R4,#0xC]
            Tessellator::vertexUV(v79, _R5, _R7, _R6, v148, v149);
            v151 = _R7;
            v94 = v146;
            Tessellator::vertexUV(v79, _R5, v151, _R6, v152, v153);
            Tessellator::vertexUV(v79, _R5, _R8, _R6, v154, v155);
        if ( BlockSource::isConsideredSolidBlock(*((BlockSource **)v94 + 1), (const BlockPos *)&v304) == 1 )
          v156 = (const BlockPos *)*((_DWORD *)v94 + 1);
          v216 = v304 + 0x100000000LL;
          v217 = v305;
          BlockSource::getBlockID((BlockSource *)&v215, v156, (int)&v216);
          if ( v215 == *(_BYTE *)(Block::mRedStoneDust + 4) )
              VMOV            R6, S26
              VADD.F32        S0, S17, S0
            Tessellator::vertexUV(v79, _R6, _R8, _R5, v161, v194);
            v162 = v94;
            Tessellator::vertexUV(v79, _R6, _R7, _R5, v164, v165);
              VMOV            R6, S22
            v167 = _R7;
            v94 = v162;
            Tessellator::vertexUV(v79, _R6, v167, _R5, v168, v169);
            Tessellator::vertexUV(v79, _R6, _R8, _R5, v170, v171);
        if ( BlockSource::isConsideredSolidBlock(*((BlockSource **)v94 + 1), (const BlockPos *)&v306) == 1 )
          v172 = (const BlockPos *)*((_DWORD *)v94 + 1);
          v213 = v306 + 0x100000000LL;
          v214 = v307;
          BlockSource::getBlockID((BlockSource *)&v212, v172, (int)&v213);
          if ( v212 == *(_BYTE *)(Block::mRedStoneDust + 4) )
              VLDR            S0, =1.0219
              VLDR            S2, =-0.015625
              VADD.F32        S2, S24, S2
              VMOV            R8, S0
              VMOV            R5, S2
            Tessellator::vertexUV(v79, _R6, _R8, _R5, v177, v194);
            Tessellator::vertexUV(v79, _R6, _R7, _R5, v179, v180);
            Tessellator::vertexUV(v79, _R6, _R7, _R5, v182, v183);
            Tessellator::vertexUV(v79, _R6, _R8, _R5, v184, v185);
  return 1;
}


signed int __fastcall BlockTessellator::tessellateShulkerBoxFacade(BlockTessellator *this, Tessellator *a2, const Vec3 *_R2)
{
  Tessellator *v3; // r4@1
  const Vec3 *v4; // ST14_4@1
  float v13; // ST10_4@1

  v3 = a2;
  v4 = _R2;
  __asm
  {
    VLDR            S18, [R2]
    VLDR            S16, [R2,#4]
  }
  _R0 = &Vec3::ONE;
    VLDR            S20, [R2,#8]
    VLDR            S22, [R0]
    VLDR            S24, [R0,#4]
    VLDR            S26, [R0,#8]
  Tessellator::color(a2, 1.0, 1.0, 1.0, 1.0);
    VADD.F32        S0, S22, S18
    VADD.F32        S2, S24, S16
    VADD.F32        S4, S26, S20
    VMOV            R5, S0
    VMOV            R11, S2
    VMOV            R7, S4
  v13 = _R5;
  Tessellator::vertexUV(v3, _R5, _R11, _R7, 0.5, 0.25);
  __asm { VMOV            R9, S20 }
  Tessellator::vertexUV(v3, _R5, _R11, _R9, 0.5, 0.0);
  __asm { VMOV            R5, S18 }
  Tessellator::vertexUV(v3, _R5, _R11, _R9, 0.25, 0.0);
  Tessellator::vertexUV(v3, _R5, _R11, _R7, 0.25, 0.25);
  Tessellator::color(v3, 0.73, 0.73, 0.73, 1.0);
  Tessellator::vertexUV(v3, _R5, _R11, _R9, 0.0, 0.25);
    VMOV.F32        S0, #0.25
    VADD.F32        S0, S16, S0
    VMOV            R8, S0
  Tessellator::vertexUV(v3, _R5, _R8, _R9, 0.0, 0.42969);
  Tessellator::vertexUV(v3, _R5, _R8, _R7, 0.25, 0.42969);
    VMOV.F32        S0, #0.5
    VMOV            R6, S0
  Tessellator::vertexUV(v3, _R5, _R6, _R7, 0.25, 0.69531);
  Tessellator::vertexUV(v3, _R5, _R6, _R9, 0.0, 0.69531);
  Tessellator::vertexUV(v3, _R5, *((float *)v4 + 1), _R9, 0.0, 0.8125);
  Tessellator::vertexUV(v3, _R5, *((float *)v4 + 1), _R7, 0.25, 0.8125);
  Tessellator::color(v3, 0.5, 0.5, 0.5, 1.0);
  Tessellator::vertexUV(v3, v13, _R8, _R7, 0.5, 0.42969);
  Tessellator::vertexUV(v3, v13, _R11, _R7, 0.5, 0.25);
  Tessellator::vertexUV(v3, v13, *((float *)v4 + 1), _R7, 0.5, 0.8125);
  return Tessellator::vertexUV(v3, v13, _R6, _R7, 0.5, 0.69531);
}


int __fastcall BlockTessellator::getLightEmission(BlockTessellator *this, const Block *a2)
{
  unsigned __int8 v3; // [sp+0h] [bp-10h]@1
  char v4; // [sp+4h] [bp-Ch]@1

  v4 = *((_BYTE *)a2 + 4);
  Block::getLightEmission(&v3, &v4);
  return v3;
}


void __fastcall BlockTessellator::tessellateFaceDown(BlockTessellator *this, Tessellator *a2, const Block *a3, const Vec3 *a4, const TextureUVCoordinateSet *a5)
{
  const TextureUVCoordinateSet *v6; // r4@1
  const Block *v7; // r8@1
  Tessellator *v9; // r10@1
  float v10; // r1@3
  float v11; // r3@3
  int v12; // r5@3
  int v13; // r6@3
  int v14; // r7@3
  _BOOL4 v22; // r0@10
  int v24; // r0@15
  int v37; // r0@23
  int v38; // r0@25
  float v56; // ST00_4@35
  float v57; // ST04_4@35
  float v59; // ST00_4@35
  float v60; // ST04_4@35
  float v61; // ST00_4@35
  float v62; // ST04_4@35
  void *v63; // r0@36
  unsigned int *v64; // r2@38
  signed int v65; // r1@40
  float v66; // [sp+0h] [bp-138h]@0
  float v67; // [sp+0h] [bp-138h]@28
  float v68; // [sp+0h] [bp-138h]@30
  float v69; // [sp+0h] [bp-138h]@32
  float v70; // [sp+4h] [bp-134h]@0
  float v71; // [sp+4h] [bp-134h]@28
  float v72; // [sp+4h] [bp-134h]@30
  float v73; // [sp+4h] [bp-134h]@32
  float v87; // [sp+3Ch] [bp-FCh]@33
  float v88; // [sp+44h] [bp-F4h]@32
  float v89; // [sp+54h] [bp-E4h]@31
  float v90; // [sp+5Ch] [bp-DCh]@30
  float v91; // [sp+6Ch] [bp-CCh]@29
  float v92; // [sp+74h] [bp-C4h]@28
  float v93; // [sp+84h] [bp-B4h]@27
  float v94; // [sp+8Ch] [bp-ACh]@26
  char v95; // [sp+9Ch] [bp-9Ch]@9
  int v96; // [sp+A8h] [bp-90h]@3
  float v97; // [sp+ACh] [bp-8Ch]@3
  float v98; // [sp+B0h] [bp-88h]@3
  int v99; // [sp+B4h] [bp-84h]@3
  int v100; // [sp+B8h] [bp-80h]@3
  int v101; // [sp+BCh] [bp-7Ch]@3
  int v102; // [sp+C0h] [bp-78h]@3
  int v103; // [sp+C4h] [bp-74h]@3

  _R11 = this;
  v6 = a5;
  v7 = a3;
  _R9 = a4;
  v9 = a2;
  if ( *((_BYTE *)this + 40) )
    v6 = (BlockTessellator *)((char *)this + 8);
  v10 = *((float *)v6 + 1);
  v11 = *((float *)v6 + 2);
  v12 = *((_DWORD *)v6 + 3);
  v13 = *((_DWORD *)v6 + 4);
  v14 = *((_DWORD *)v6 + 5);
  v96 = *(_DWORD *)v6;
  v97 = v10;
  v98 = v11;
  v99 = v12;
  v100 = v13;
  v101 = v14;
  sub_119C854(&v102, (int *)v6 + 6);
  v103 = *((_DWORD *)v6 + 7);
  Tessellator::quadFacing(v9, 0);
  _R7 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 181), 0.0);
  _R6 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 184), 0.0);
  _R4 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 183), 0.0);
  _R0 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 186), 0.0);
  __asm
  {
    VLDR            S0, [R11,#0x2D4]
    VMOV            S23, R7
    VMOV            S16, R6
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    goto LABEL_48;
    VMOV.F32        S0, #1.0
    VLDR            S2, [R11,#0x2E0]
    VCMPE.F32       S2, S0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
LABEL_48:
    __asm
    {
      VSUB.F32        S0, S16, S23
      VLDR            S23, [SP,#0x138+var_8C]
      VADD.F32        S16, S0, S23
    }
    VLDR            S0, [R11,#0x2DC]
    VMOV            S22, R4
    VMOV            S18, R0
    goto LABEL_49;
    VLDR            S2, [R11,#0x2E8]
LABEL_49:
      VSUB.F32        S0, S18, S22
      VLDR            S22, [SP,#0x138+var_88]
      VADD.F32        S18, S0, S22
  BlockPos::BlockPos((int)&v95, (int)_R9);
  if ( !*((_BYTE *)_R11 + 48) )
    v22 = BlockGraphics::isTextureIsotropic((BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v7 + 4)], 0);
    _ZF = v22 == 1;
    if ( v22 == 1 )
      _ZF = *((_DWORD *)_R11 + 47) == 0;
    if ( _ZF )
      *((_DWORD *)_R11 + 47) = ((unsigned int)BlockPos::randomSeed((BlockPos *)&v95) >> 24) & 3;
  v24 = *((_DWORD *)_R11 + 47);
  if ( v24 == 1 )
    _R4 = TextureUVCoordinateSet::inverseOffsetWidth((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 186), 0.0);
    _R6 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 181), 0.0);
    _R7 = TextureUVCoordinateSet::inverseOffsetWidth((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 183), 0.0);
    _R0 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 184), 0.0);
      VMOV            S0, R4
      VMOV            S22, R6
      VMOV            S4, R7
      VMOV            S2, R0
    goto LABEL_22;
  if ( v24 == 3 )
    _R4 = TextureUVCoordinateSet::inverseOffsetWidth((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 181), 0.0);
    _R6 = TextureUVCoordinateSet::inverseOffsetWidth((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 184), 0.0);
    _R7 = TextureUVCoordinateSet::inverseOffsetHeight((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 183), 0.0);
    _R0 = TextureUVCoordinateSet::inverseOffsetHeight((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 186), 0.0);
      VMOV            S23, R4
      VMOV            S0, R6
      VMOV            S22, R7
      VMOV.F32        S4, S0
      VMOV.F32        S6, S22
      VMOV.F32        S19, S2
      VMOV.F32        S8, S23
    goto LABEL_23;
    VMOV.F32        S0, S16
    VMOV.F32        S2, S18
    VMOV.F32        S6, S22
    VMOV.F32        S8, S23
    VMOV.F32        S4, S0
    VMOV.F32        S19, S2
  if ( _ZF )
    _R4 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 183), 0.0);
    _R6 = TextureUVCoordinateSet::inverseOffsetHeight((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 184), 0.0);
    _R7 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 186), 0.0);
    _R0 = TextureUVCoordinateSet::inverseOffsetHeight((TextureUVCoordinateSet *)&v96, *((float *)_R11 + 181), 0.0);
      VMOV            S4, R4
      VMOV            S2, R6
      VMOV            S0, R7
      VMOV            S22, R0
LABEL_22:
      VMOV.F32        S23, S0
      VMOV.F32        S6, S2
      VMOV.F32        S19, S22
      VMOV.F32        S8, S4
LABEL_23:
  v37 = *((_BYTE *)_R11 + 1);
    VLDR            S16, [R11,#0x2F0]
    VLDR            S26, [R11,#0x2E8]
    VLDR            S20, [R11,#0x2D4]
    VLDR            S28, [R11,#0x2DC]
    VLDR            S21, [R11,#0x2E0]
    VLDR            S17, [R11,#0x2D8]
    VLDR            S18, [R9]
    VLDR            S24, [R9,#4]
    VLDR            S30, [R9,#8]
    VSTR            S8, [SP,#0x138+var_118]
    VSTR            S6, [SP,#0x138+var_124]
    VSTR            S4, [SP,#0x138+var_120]
    VSTR            S2, [SP,#0x138+var_130]
    VSTR            S0, [SP,#0x138+var_12C]
  if ( !_ZF )
    Tessellator::normal(v9, (const Vec3 *)&Vec3::NEG_UNIT_Y);
  __asm { VMUL.F32        S0, S26, S16 }
  v38 = *((_BYTE *)_R11 + 50);
    VMUL.F32        S2, S21, S16
    VMUL.F32        S6, S17, S16
    VMUL.F32        S8, S20, S16
    VMUL.F32        S4, S28, S16
    VADD.F32        S21, S0, S30
    VADD.F32        S0, S2, S18
    VADD.F32        S25, S24, S6
    VADD.F32        S27, S18, S8
    VSTR            S0, [SP,#0x138+var_128]
    VADD.F32        S0, S30, S4
    VSTR            S0, [SP,#0x138+var_11C]
      VMOV            R4, S27
      VMOV            R5, S25
      VMOV            R6, S21
      VSTR            S23, [SP,#0x138+var_138]
      VSTR            S19, [SP,#0x138+var_134]
    Tessellator::vertexUV(v9, _R4, _R5, _R6, v66, v70);
      VLDR            S0, [SP,#0x138+var_11C]
      VMOV            R7, S0
      VLDR            S0, [SP,#0x138+var_118]
      VSTR            S0, [SP,#0x138+var_138]
      VSTR            S22, [SP,#0x138+var_134]
    Tessellator::vertexUV(v9, _R4, _R5, _R7, v56, v57);
      VLDR            S0, [SP,#0x138+var_128]
      VMOV            R4, S0
      VLDR            S0, [SP,#0x138+var_120]
      VLDR            S0, [SP,#0x138+var_124]
      VSTR            S0, [SP,#0x138+var_134]
    Tessellator::vertexUV(v9, _R4, _R5, _R7, v59, v60);
      VLDR            S0, [SP,#0x138+var_12C]
      VLDR            S0, [SP,#0x138+var_130]
    Tessellator::vertexUV(v9, _R4, _R5, _R6, v61, v62);
  else
      VMOV.F32        S1, #1.0
      VLDR            S0, [R11,#0x2D4]
      VLDR            S4, [R11,#0x58]
      VLDR            S6, [R11,#0x48]
      VSTR            S4, [SP,#0x138+var_104]
      VMUL.F32        S4, S0, S4
      VSTR            S6, [SP,#0x138+var_100]
      VLDR            S8, [R11,#0x68]
      VLDR            S12, [R11,#0x6C]
      VSUB.F32        S2, S1, S0
      VLDR            S29, [R11,#0x38]
      VLDR            S14, [R11,#0x3C]
      VLDR            S31, [R11,#0x5C]
      VLDR            S26, [R11,#0x4C]
      VSTR            S8, [SP,#0x138+var_110]
      VMUL.F32        S8, S0, S8
      VSTR            S12, [SP,#0x138+var_10C]
      VMUL.F32        S12, S0, S12
      VSTR            S14, [SP,#0x138+var_114]
      VMUL.F32        S5, S0, S31
      VMUL.F32        S6, S2, S6
      VLDR            S10, [R11,#0x2E8]
      VMUL.F32        S14, S2, S14
      VLDR            S24, [R11,#0x34]
      VMUL.F32        S3, S2, S29
      VLDR            S28, [R11,#0x64]
      VSUB.F32        S1, S1, S10
      VLDR            S18, [R11,#0x54]
      VLDR            S20, [R11,#0x44]
      VLDR            S7, [R11,#0x40]
      VLDR            S16, [R11,#0x70]
      VADD.F32        S4, S6, S4
      VLDR            S30, [R11,#0x60]
      VMUL.F32        S6, S2, S26
      VLDR            S17, [R11,#0x50]
      VADD.F32        S8, S3, S8
      VSTR            S7, [SP,#0x138+var_108]
      VADD.F32        S12, S14, S12
      VMUL.F32        S14, S0, S28
      VMUL.F32        S3, S2, S24
      VMUL.F32        S4, S4, S10
      VADD.F32        S6, S6, S5
      VMUL.F32        S8, S8, S1
      VMUL.F32        S12, S12, S1
      VADD.F32        S14, S3, S14
      VMUL.F32        S6, S6, S10
      VADD.F32        S4, S4, S8
      VMUL.F32        S8, S0, S18
      VMUL.F32        S14, S14, S1
      VADD.F32        S6, S6, S12
      VMUL.F32        S12, S2, S20
      VADD.F32        S8, S12, S8
      VMUL.F32        S12, S0, S16
      VMUL.F32        S0, S0, S30
      VMUL.F32        S8, S8, S10
      VADD.F32        S8, S8, S14
      VMUL.F32        S14, S2, S7
      VMUL.F32        S2, S2, S17
      VSTR            S8, [SP,#0x138+var_AC]
      VSTR            S4, [SP,#0x138+var_A8]
      VADD.F32        S0, S2, S0
      VSTR            S6, [SP,#0x138+var_A4]
      VMUL.F32        S0, S0, S10
      VADD.F32        S0, S0, S12
      VSTR            S0, [SP,#0x138+var_A0]
    Tessellator::color(v9, (const Color *)&v94);
    _R0 = *((_BYTE *)_R11 + 182);
    _R1 = *((_BYTE *)_R11 + 183);
      VLDR            S4, =0.0625
      VMOV            S0, R1
      VCVT.F32.U32    S0, S0
      VCVT.F32.U32    S2, S2
      VMUL.F32        S0, S0, S4
      VMUL.F32        S2, S2, S4
      VSTR            S0, [SP,#0x138+var_B4]
      VSTR            S2, [SP,#0x138+var_B0]
    if ( !*((_BYTE *)_R11 + 48) )
      Tessellator::tex1((int)v9, (__int64 *)&v93);
      VMOV            R7, S27
      VMOV            R9, S25
      VMOV            R8, S21
    Tessellator::vertexUV(v9, _R7, _R9, _R8, v66, v70);
      VMOV.F32        S4, #1.0
      VLDR            S14, [SP,#0x138+var_110]
      VLDR            S3, [SP,#0x138+var_104]
      VMUL.F32        S6, S0, S28
      VLDR            S7, [SP,#0x138+var_10C]
      VMUL.F32        S10, S0, S18
      VLDR            S5, [SP,#0x138+var_100]
      VMUL.F32        S14, S0, S14
      VLDR            S9, [SP,#0x138+var_114]
      VMUL.F32        S3, S0, S3
      VLDR            S19, [SP,#0x138+var_108]
      VMUL.F32        S7, S0, S7
      VMOV.F32        S23, S4
      VLDR            S2, [R11,#0x2DC]
      VMUL.F32        S11, S0, S31
      VMUL.F32        S15, S0, S16
      VSUB.F32        S4, S23, S0
      VSUB.F32        S21, S23, S2
      VMUL.F32        S8, S4, S24
      VMUL.F32        S12, S4, S20
      VMUL.F32        S1, S4, S29
      VMUL.F32        S5, S4, S5
      VMUL.F32        S9, S4, S9
      VMUL.F32        S13, S4, S26
      VMUL.F32        S19, S4, S19
      VMUL.F32        S4, S4, S17
      VADD.F32        S6, S8, S6
      VADD.F32        S8, S12, S10
      VADD.F32        S10, S1, S14
      VADD.F32        S12, S5, S3
      VADD.F32        S14, S9, S7
      VADD.F32        S1, S13, S11
      VADD.F32        S0, S4, S0
      VADD.F32        S3, S19, S15
      VMUL.F32        S4, S6, S21
      VMUL.F32        S6, S8, S2
      VMUL.F32        S8, S10, S21
      VMUL.F32        S10, S12, S2
      VMUL.F32        S12, S14, S21
      VMUL.F32        S14, S1, S2
      VMUL.F32        S0, S0, S2
      VMUL.F32        S1, S3, S21
      VADD.F32        S2, S6, S4
      VADD.F32        S4, S10, S8
      VADD.F32        S6, S14, S12
      VADD.F32        S0, S0, S1
      VSTR            S2, [SP,#0x138+var_C4]
      VSTR            S4, [SP,#0x138+var_C0]
      VSTR            S6, [SP,#0x138+var_BC]
      VSTR            S0, [SP,#0x138+var_B8]
    Tessellator::color(v9, (const Color *)&v92);
    _R0 = *((_BYTE *)_R11 + 180);
    _R1 = *((_BYTE *)_R11 + 181);
      VMOV.F32        S25, S4
      VSTR            S0, [SP,#0x138+var_CC]
      VSTR            S2, [SP,#0x138+var_C8]
      Tessellator::tex1((int)v9, (__int64 *)&v91);
      VMOV            R6, S0
    Tessellator::vertexUV(v9, _R7, _R9, _R6, v67, v71);
      VLDR            S2, [R11,#0x2E0]
      VMOV.F32        S21, S23
      VSUB.F32        S4, S23, S2
      VMUL.F32        S6, S2, S28
      VMUL.F32        S10, S2, S18
      VLDR            S22, [SP,#0x138+var_108]
      VMUL.F32        S3, S2, S3
      VMUL.F32        S7, S2, S7
      VLDR            S0, [R11,#0x2DC]
      VMUL.F32        S11, S2, S31
      VMUL.F32        S15, S2, S16
      VMUL.F32        S22, S4, S22
      VMUL.F32        S2, S2, S30
      VSUB.F32        S19, S23, S0
      VADD.F32        S2, S4, S2
      VADD.F32        S3, S22, S15
      VMUL.F32        S4, S6, S19
      VMUL.F32        S6, S8, S0
      VMUL.F32        S8, S10, S19
      VMUL.F32        S10, S12, S0
      VMUL.F32        S12, S14, S19
      VMUL.F32        S14, S1, S0
      VMUL.F32        S0, S2, S0
      VMUL.F32        S1, S3, S19
      VSTR            S2, [SP,#0x138+var_DC]
      VSTR            S4, [SP,#0x138+var_D8]
      VSTR            S6, [SP,#0x138+var_D4]
      VSTR            S0, [SP,#0x138+var_D0]
    Tessellator::color(v9, (const Color *)&v90);
    _R0 = *((_BYTE *)_R11 + 186);
    __asm { VMOV.F32        S22, S25 }
    _R1 = *((_BYTE *)_R11 + 187);
      VMUL.F32        S0, S0, S25
      VMUL.F32        S2, S2, S25
      VSTR            S0, [SP,#0x138+var_E4]
      VSTR            S2, [SP,#0x138+var_E0]
      Tessellator::tex1((int)v9, (__int64 *)&v89);
    Tessellator::vertexUV(v9, _R7, _R9, _R6, v68, v72);
      VLDR            S0, [R11,#0x2E0]
      VSUB.F32        S4, S21, S0
      VLDR            S16, [SP,#0x138+var_108]
      VLDR            S2, [R11,#0x2E8]
      VMUL.F32        S16, S4, S16
      VSUB.F32        S18, S21, S2
      VADD.F32        S3, S16, S15
      VMUL.F32        S4, S6, S18
      VMUL.F32        S8, S10, S18
      VMUL.F32        S12, S14, S18
      VMUL.F32        S1, S3, S18
      VSTR            S2, [SP,#0x138+var_F4]
      VSTR            S4, [SP,#0x138+var_F0]
      VSTR            S6, [SP,#0x138+var_EC]
      VSTR            S0, [SP,#0x138+var_E8]
    Tessellator::color(v9, (const Color *)&v88);
    _R0 = *((_BYTE *)_R11 + 184);
    _R1 = *((_BYTE *)_R11 + 185);
      VMUL.F32        S0, S0, S22
      VMUL.F32        S2, S2, S22
      VSTR            S0, [SP,#0x138+var_FC]
      VSTR            S2, [SP,#0x138+var_F8]
      Tessellator::tex1((int)v9, (__int64 *)&v87);
    Tessellator::vertexUV(v9, _R7, _R9, _R8, v69, v73);
  v63 = (void *)(v102 - 12);
  if ( (int *)(v102 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v102 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
    else
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v63);
}


signed int __fastcall BlockTessellator::tessellateEndRodInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  BlockTessellator *v5; // r6@1
  const BlockPos *v6; // r4@1
  Tessellator *v7; // r5@1
  const TextureUVCoordinateSet *v8; // r8@2

  v5 = this;
  v6 = a4;
  v7 = a2;
  if ( *((_DWORD *)this + 11) == 3 )
  {
    v8 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(
                                           (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)a3 + 4)],
                                           a4,
                                           0,
                                           0);
    Tessellator::color(v7, 1.0, 1.0, 1.0, 1.0);
    switch ( a5 )
    {
      case 0:
        BlockTessellator::tessellateEndRodDown(v5, v7, v6, v8);
        break;
      case 1:
        BlockTessellator::tessellateEndRodUp(v5, v7, v6, v8);
      case 2:
        BlockTessellator::tessellateEndRodNorth(v5, v7, v6, v8);
      case 3:
        BlockTessellator::tessellateEndRodSouth(v5, v7, v6, v8);
      case 4:
        BlockTessellator::tessellateEndRodWest(v5, v7, v6, v8);
      case 5:
        BlockTessellator::tessellateEndRodEast(v5, v7, v6, v8);
      default:
        return 1;
    }
  }
  return 1;
}


int __fastcall BlockTessellator::blend(BlockTessellator *this, int a2, int a3, int a4, int a5)
{
  return 0;
}


BlockTessellator *__fastcall BlockTessellator::~BlockTessellator(BlockTessellator *this)
{
  BlockTessellator *v1; // r4@1
  int v2; // r5@1
  int v3; // r6@2
  char *v4; // r0@3
  int v5; // r5@6
  int v6; // r6@7
  char *v7; // r0@8
  int v8; // r1@11
  void *v9; // r0@11
  unsigned int *v11; // r2@13
  signed int v12; // r1@15

  v1 = this;
  v2 = *((_DWORD *)this + 198);
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD *)v2;
      mce::Mesh::~Mesh((mce::Mesh *)(v2 + 28));
      operator delete((void *)v2);
      v2 = v3;
    }
    while ( v3 );
  }
  _aeabi_memclr4(*((_QWORD *)v1 + 98), 4 * (*((_QWORD *)v1 + 98) >> 32));
  *((_DWORD *)v1 + 198) = 0;
  *((_DWORD *)v1 + 199) = 0;
  v4 = (char *)*((_DWORD *)v1 + 196);
  if ( v4 && (char *)v1 + 808 != v4 )
    operator delete(v4);
  v5 = *((_DWORD *)v1 + 191);
  if ( v5 )
      v6 = *(_DWORD *)v5;
      mce::Mesh::~Mesh((mce::Mesh *)(v5 + 8));
      operator delete((void *)v5);
      v5 = v6;
    while ( v6 );
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 756), 4 * (*(_QWORD *)((char *)v1 + 756) >> 32));
  *((_DWORD *)v1 + 191) = 0;
  *((_DWORD *)v1 + 192) = 0;
  v7 = (char *)*((_DWORD *)v1 + 189);
  if ( v7 && (char *)v1 + 780 != v7 )
    operator delete(v7);
  mce::MaterialPtr::~MaterialPtr((BlockTessellator *)((char *)v1 + 712));
  v8 = *((_DWORD *)v1 + 8);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  return v1;
}


signed int __fastcall BlockTessellator::tessellateDoubleThinFenceInWorld(BlockTessellator *this, Tessellator *a2, const ThinFenceBlock *a3, const BlockPos *a4, unsigned __int8 a5, int a6)
{
  BlockTessellator *v6; // r10@1
  const ThinFenceBlock *v8; // r4@1
  int v11; // r0@3
  int v16; // r1@7
  unsigned int v21; // r3@8
  unsigned int v22; // r4@8
  unsigned int v23; // r5@8
  unsigned int v24; // r6@8
  int v25; // r7@8
  int v26; // r2@8
  int v27; // r3@8
  int v28; // r4@8
  unsigned int v29; // r6@8
  int v30; // r7@8
  int v31; // r0@8
  BlockGraphics *v32; // r4@9
  int v33; // r0@9
  int v34; // r5@9
  int v35; // r0@9
  int v36; // r8@9
  BlockGraphics *v37; // r12@9
  int v38; // lr@9
  unsigned int v39; // r3@9
  unsigned int v40; // r4@9
  unsigned int v41; // r5@9
  unsigned int v42; // r6@9
  int v43; // r7@9
  BlockGraphics *v44; // r4@9
  int v45; // r0@9
  int v46; // r8@9
  int v47; // r3@9
  int v48; // r4@9
  int v49; // r5@9
  unsigned int v50; // r6@9
  int v51; // r7@9
  _BOOL4 v52; // r5@12
  int v53; // r5@13
  int v57; // r5@13
  _BYTE *v58; // r7@13
  const BlockPos *v59; // r6@14
  char v60; // r0@14
  int v61; // t1@14
  char *v63; // r7@15
  _BYTE **v64; // r3@15
  int v65; // r1@17
  _BYTE *v66; // r3@18
  int v67; // r8@18
  int v68; // r11@20
  int v69; // r9@20
  void *v83; // r0@48
  void *v84; // r0@49
  unsigned int *v86; // r2@51
  signed int v87; // r1@53
  unsigned int *v88; // r2@55
  signed int v89; // r1@57
  int v96; // [sp+28h] [bp-378h]@13
  signed int v109; // [sp+60h] [bp-340h]@11
  int v110; // [sp+64h] [bp-33Ch]@11
  int v112; // [sp+6Ch] [bp-334h]@18
  __int64 v113; // [sp+70h] [bp-330h]@13
  int v114; // [sp+78h] [bp-328h]@18
  int v115; // [sp+7Ch] [bp-324h]@13
  int v116; // [sp+80h] [bp-320h]@13
  int v117; // [sp+84h] [bp-31Ch]@13
  Block *v118; // [sp+88h] [bp-318h]@7
  Tessellator *v119; // [sp+8Ch] [bp-314h]@1
  float v120; // [sp+90h] [bp-310h]@47
  float v121; // [sp+9Ch] [bp-304h]@47
  float v122; // [sp+A8h] [bp-2F8h]@47
  float v123; // [sp+B4h] [bp-2ECh]@47
  float v124; // [sp+C0h] [bp-2E0h]@47
  int v125; // [sp+CCh] [bp-2D4h]@47
  float v126; // [sp+D0h] [bp-2D0h]@45
  float v127; // [sp+DCh] [bp-2C4h]@45
  float v128; // [sp+E8h] [bp-2B8h]@45
  float v129; // [sp+F4h] [bp-2ACh]@45
  float v130; // [sp+100h] [bp-2A0h]@45
  int v131; // [sp+10Ch] [bp-294h]@45
  float v132; // [sp+110h] [bp-290h]@41
  float v133; // [sp+11Ch] [bp-284h]@41
  float v134; // [sp+128h] [bp-278h]@41
  float v135; // [sp+134h] [bp-26Ch]@41
  float v136; // [sp+140h] [bp-260h]@41
  int v137; // [sp+14Ch] [bp-254h]@41
  float v138; // [sp+150h] [bp-250h]@39
  float v139; // [sp+15Ch] [bp-244h]@39
  float v140; // [sp+168h] [bp-238h]@39
  float v141; // [sp+174h] [bp-22Ch]@39
  float v142; // [sp+180h] [bp-220h]@39
  int v143; // [sp+18Ch] [bp-214h]@39
  float v144; // [sp+190h] [bp-210h]@37
  float v145; // [sp+19Ch] [bp-204h]@37
  float v146; // [sp+1A8h] [bp-1F8h]@37
  float v147; // [sp+1B4h] [bp-1ECh]@37
  float v148; // [sp+1C0h] [bp-1E0h]@37
  int v149; // [sp+1CCh] [bp-1D4h]@37
  float v150; // [sp+1D0h] [bp-1D0h]@36
  float v151; // [sp+1DCh] [bp-1C4h]@36
  float v152; // [sp+1E8h] [bp-1B8h]@36
  float v153; // [sp+1F4h] [bp-1ACh]@36
  float v154; // [sp+200h] [bp-1A0h]@36
  int v155; // [sp+20Ch] [bp-194h]@36
  float v156; // [sp+210h] [bp-190h]@34
  float v157; // [sp+21Ch] [bp-184h]@34
  float v158; // [sp+228h] [bp-178h]@34
  float v159; // [sp+234h] [bp-16Ch]@34
  float v160; // [sp+240h] [bp-160h]@34
  int v161; // [sp+24Ch] [bp-154h]@34
  int v162; // [sp+250h] [bp-150h]@14
  char v163; // [sp+254h] [bp-14Ch]@14
  int v164; // [sp+260h] [bp-140h]@13
  __int16 v165; // [sp+264h] [bp-13Ch]@13
  char v166[6]; // [sp+266h] [bp-13Ah]@14
  char v167; // [sp+26Ch] [bp-134h]@13
  char v168; // [sp+2ACh] [bp-F4h]@13
  float v169; // [sp+2B0h] [bp-F0h]@15
  void *v170; // [sp+2BCh] [bp-E4h]@10
  int v171; // [sp+2C0h] [bp-E0h]@10
  char v172; // [sp+2C4h] [bp-DCh]@10
  float v173; // [sp+2CCh] [bp-D4h]@10
  char v175; // [sp+2D8h] [bp-C8h]@7
  int v176; // [sp+2DCh] [bp-C4h]@8
  int v177; // [sp+2E0h] [bp-C0h]@8
  int v178; // [sp+2E4h] [bp-BCh]@8
  unsigned int v179; // [sp+2E8h] [bp-B8h]@8
  int v180; // [sp+2ECh] [bp-B4h]@8
  int v181; // [sp+2F0h] [bp-B0h]@8
  int v182; // [sp+2F4h] [bp-ACh]@10
  char v183; // [sp+2F8h] [bp-A8h]@7
  unsigned int v184; // [sp+2FCh] [bp-A4h]@8
  unsigned int v185; // [sp+300h] [bp-A0h]@8
  unsigned int v186; // [sp+304h] [bp-9Ch]@8
  unsigned int v187; // [sp+308h] [bp-98h]@8
  int v188; // [sp+30Ch] [bp-94h]@8
  int v189; // [sp+310h] [bp-90h]@8
  int v190; // [sp+314h] [bp-8Ch]@8
  float v191; // [sp+318h] [bp-88h]@7
  unsigned __int8 v192; // [sp+328h] [bp-78h]@2
  unsigned __int8 v193; // [sp+329h] [bp-77h]@2
  float v194; // [sp+32Ch] [bp-74h]@6

  v6 = this;
  _R9 = a4;
  v8 = a3;
  v119 = a2;
  if ( *((_BYTE *)this + 48) )
  {
    _R1 = (unsigned __int8)Brightness::MAX;
    v192 = Brightness::MAX;
    v193 = Brightness::MAX;
    _R2 = (unsigned __int8)Brightness::MAX;
  }
  else
    BlockTessellatorCache::getLightColor(
      (BlockTessellatorCache *)&v192,
      (BlockTessellator *)((char *)this + 812),
      (int)a4);
    _R1 = v192;
    _R2 = v193;
    v11 = *((_BYTE *)v6 + 48);
  __asm
    VMOV            S0, R2
    VLDR            S4, =0.0625
    VMOV            S2, R1
    VCVT.F32.U32    S0, S0
    VCVT.F32.U32    S2, S2
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S4
    VSTR            S0, [SP,#0x3A0+var_74]
    VSTR            S2, [SP,#0x3A0+var_70]
  if ( _ZF )
    Tessellator::tex1((int)v119, (__int64 *)&v194);
  v16 = *((_DWORD *)v6 + 1);
  v118 = v8;
  _R0 = (*(int (**)(void))(*(_DWORD *)v8 + 388))();
  _R1 = (unsigned __int16)_R0 >> 8;
  _R2 = (_R0 >> 16) & 0xFF;
    VLDR            S8, =0.0039216
  _R2 = (unsigned __int8)_R0;
  _R0 >>= 24;
    VMOV            S4, R2
    VMOV            S6, R0
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VCVT.F32.S32    S6, S6
    VMUL.F32        S0, S0, S8
    VMUL.F32        S2, S2, S8
    VMUL.F32        S4, S4, S8
    VMUL.F32        S6, S6, S8
    VSTR            S0, [SP,#0x3A0+var_88]
    VSTR            S2, [SP,#0x3A0+var_84]
    VSTR            S4, [SP,#0x3A0+var_80]
    VSTR            S6, [SP,#0x3A0+var_7C]
  Tessellator::color(v119, (const Color *)&v191);
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)&v183);
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)&v175);
  if ( *((_BYTE *)v6 + 40) )
    v21 = *((_DWORD *)v6 + 3);
    v22 = *((_DWORD *)v6 + 4);
    v23 = *((_DWORD *)v6 + 5);
    v24 = *((_DWORD *)v6 + 6);
    v25 = *((_DWORD *)v6 + 7);
    *(_DWORD *)&v183 = *((_DWORD *)v6 + 2);
    v184 = v21;
    v185 = v22;
    v186 = v23;
    v187 = v24;
    v188 = v25;
    EntityInteraction::setInteractText(&v189, (int *)v6 + 8);
    v190 = *((_DWORD *)v6 + 9);
    v26 = *((_DWORD *)v6 + 3);
    v27 = *((_DWORD *)v6 + 4);
    v28 = *((_DWORD *)v6 + 5);
    v29 = *((_DWORD *)v6 + 6);
    v30 = *((_DWORD *)v6 + 7);
    *(_DWORD *)&v175 = *((_DWORD *)v6 + 2);
    v176 = v26;
    v177 = v27;
    v178 = v28;
    v179 = v29;
    v180 = v30;
    EntityInteraction::setInteractText(&v181, (int *)v6 + 8);
    v31 = *((_DWORD *)v6 + 9);
    v32 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v8 + 4)];
    v33 = (*(int (**)(void))(*(_DWORD *)v118 + 424))();
    v34 = v33;
    v35 = BlockGraphics::getTexture(v32, _R9, 0, v33);
    v36 = v35;
    v37 = v32;
    v38 = v34;
    v39 = *(_DWORD *)(v35 + 4);
    v40 = *(_DWORD *)(v35 + 8);
    v41 = *(_DWORD *)(v35 + 12);
    v42 = *(_DWORD *)(v35 + 16);
    v43 = *(_DWORD *)(v35 + 20);
    *(_DWORD *)&v183 = *(_DWORD *)v35;
    v184 = v39;
    v185 = v40;
    v186 = v41;
    v187 = v42;
    v188 = v43;
    v44 = v37;
    EntityInteraction::setInteractText(&v189, (int *)(v35 + 24));
    v190 = *(_DWORD *)(v36 + 28);
    v45 = BlockGraphics::getTexture(v44, _R9, 5, v38);
    v46 = v45;
    v47 = *(_DWORD *)(v45 + 4);
    v48 = *(_DWORD *)(v45 + 8);
    v49 = *(_DWORD *)(v45 + 12);
    v50 = *(_DWORD *)(v45 + 16);
    v51 = *(_DWORD *)(v45 + 20);
    *(_DWORD *)&v175 = *(_DWORD *)v45;
    v176 = v47;
    v177 = v48;
    v178 = v49;
    v179 = v50;
    v180 = v51;
    EntityInteraction::setInteractText(&v181, (int *)(v45 + 24));
    v31 = *(_DWORD *)(v46 + 28);
  v182 = v31;
    VLDR            S0, [R9,#4]
    VCVT.F32.S32    S17, S0
  Vec3::Vec3((int)&v173, (int)_R9);
  __asm { VLDR            S30, [SP,#0x3A0+var_D4] }
  v170 = &unk_262C9B2;
  __asm { VLDR            S19, [SP,#0x3A0+var_CC] }
  v171 = 2;
  BlockOccluder::BlockOccluder(
    (BlockOccluder *)&v172,
    (int)v6 + 812,
    v118,
    _R9,
    (BlockTessellator *)((char *)v6 + 724),
    (int)&v170,
    *((_BYTE *)v6 + 48));
  if ( a6 )
    v110 = 1;
    v109 = 1;
    v52 = BlockOccluder::occludes((BlockOccluder *)&v172, 1);
    v109 = !BlockOccluder::occludes((BlockOccluder *)&v172, 0);
    v110 = !v52;
  v116 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v183, 0.4375, 0.0);
  v117 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v183, 0.56187, 0.0);
  v115 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v175, 0.4375, 0.0);
  LODWORD(v113) = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v175, 0.56187, 0.0);
  v53 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v175, 0.4375, 0.0);
  HIDWORD(v113) = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v175, 0.56187, 0.0);
  __asm { VLDR            S28, =0.0635 }
  _R1 = Vec3::UNIT_X;
  _R0 = &Vec3::NEG_UNIT_Z;
    VLDR            S0, [R1]
    VLDR            S2, [R1,#4]
    VLDR            S4, [R1,#8]
    VMUL.F32        S24, S0, S28
    VMUL.F32        S22, S2, S28
    VLDR            S16, [R0]
    VMUL.F32        S26, S4, S28
    VLDR            S20, [R0,#4]
    VLDR            S18, [R0,#8]
    VSTR            S24, [SP,#0x3A0+var_F0]
    VSTR            S22, [SP,#0x3A0+var_EC]
    VSTR            S26, [SP,#0x3A0+var_E8]
  mce::Radian::Radian((int)&v168, -1028390912);
  _R0 = mce::Radian::asFloat((mce::Radian *)&v168);
    VLDR            S0, [R0]
    VSTR            S0, [SP,#0x3A0+var_338]
  AmbientOcclusionCalculator::AmbientOcclusionCalculator((int)&v167, (int)_R9, (int)v118, (int)v6 + 812);
  v165 = 0;
  v96 = v53;
  v164 = 0;
  v57 = dword_2803214;
  v58 = (_BYTE *)Facing::Plane::HORIZONTAL;
  if ( Facing::Plane::HORIZONTAL != dword_2803214 )
    do
    {
      v59 = (const BlockPos *)*((_DWORD *)v6 + 1);
      BlockPos::neighbor((BlockPos *)&v163, (int)_R9, *v58);
      BlockSource::getBlockID((BlockSource *)&v162, v59, (int)&v163);
      v60 = ThinFenceBlock::attachsTo(v118, (unsigned __int8)v162);
      v61 = *v58++;
      v166[v61] = v60;
    }
    while ( (_BYTE *)v57 != v58 );
    VMOV.F32        S0, #1.0
    VSTR            S19, [SP,#0x3A0+var_394]
    VSTR            S30, [SP,#0x3A0+var_390]
  _R5 = &v169;
  v63 = v166;
    VSTR            S17, [SP,#0x3A0+var_368]
    VADD.F32        S2, S17, S0
    VMOV.F32        S0, #0.5
  v64 = (_BYTE **)&Facing::Plane::HORIZONTAL;
    VSTR            S2, [SP,#0x3A0+var_358]
    VADD.F32        S4, S19, S0
    VADD.F32        S19, S30, S0
    VMUL.F32        S29, S18, S0
    VMUL.F32        S30, S16, S0
    VMUL.F32        S18, S18, S28
    VMUL.F32        S16, S16, S28
    VSTR            S4, [SP,#0x3A0+var_318]
    VMUL.F32        S4, S20, S0
    VMUL.F32        S0, S20, S28
    VADD.F32        S8, S4, S17
    VSTR            S4, [SP,#0x3A0+var_370]
    VADD.F32        S6, S0, S17
    VSTR            S0, [SP,#0x3A0+var_374]
    VADD.F32        S4, S4, S2
    VADD.F32        S0, S0, S2
    VSTR            S8, [SP,#0x3A0+var_350]
    VSUB.F32        S2, S6, S22
    VSTR            S6, [SP,#0x3A0+var_34C]
    VSTR            S4, [SP,#0x3A0+var_354]
    VSTR            S0, [SP,#0x3A0+var_348]
    VSTR            S2, [SP,#0x3A0+var_36C]
    VSUB.F32        S2, S8, S22
    VSTR            S2, [SP,#0x3A0+var_364]
    VSUB.F32        S2, S4, S22
    VSTR            S2, [SP,#0x3A0+var_360]
    VSUB.F32        S2, S0, S22
    VADD.F32        S0, S0, S22
    VSTR            S2, [SP,#0x3A0+var_35C]
    VADD.F32        S2, S6, S22
    VSTR            S0, [SP,#0x3A0+var_37C]
    VSTR            S2, [SP,#0x3A0+var_388]
    VADD.F32        S2, S8, S22
    VSTR            S2, [SP,#0x3A0+var_384]
    VADD.F32        S2, S4, S22
    VSTR            S2, [SP,#0x3A0+var_380]
  if ( !_ZF )
    _R5 = (float *)&Vec3::ZERO;
  v65 = 0;
  do
    v66 = *v64;
    v67 = v66[v65];
    v114 = v65 + 1;
    v112 = v66[(v65 + 3) % 4];
    if ( v65 != 3 )
      v66 += v65 + 1;
    v68 = (unsigned __int8)v63[v67];
    v69 = *v66;
    if ( !v63[v67] || !BlockOccluder::occludes((BlockOccluder *)&v172, v67) )
      if ( a6 == 1 && (v166[v112] || v166[v69]) )
      {
        if ( *((_BYTE *)Facing::getOpposite((Facing *)(char)v67, v112) + (_DWORD)&v164) )
          goto LABEL_35;
        _R7 = *(&Vec3::ZERO + 1);
        _R10 = Vec3::ZERO;
        _R4 = dword_2822498;
        *((_BYTE *)&v164 + v67) = 1;
      }
      else
        __asm { VMOV.F32        S0, S18 }
        if ( !_ZF )
          __asm { VMOVNE.F32      S0, S29 }
        __asm
        {
          VLDR            S4, [SP,#0x3A0+var_370]
          VLDR            S2, [SP,#0x3A0+var_374]
          VMOV            R4, S0
        }
          __asm { VMOVNE.F32      S2, S4 }
        __asm { VMOV.F32        S4, S16 }
          __asm { VMOVNE.F32      S4, S30 }
          VMOV            R7, S2
          VMOV            R10, S4
      _R0 = AmbientOcclusionCalculator::getShadingForFace((AmbientOcclusionCalculator *)&v167, (char)v67);
      __asm
        VMOV            S0, R0
        VSTR            S0, [SP,#0x3A0+var_160]
        VSTR            S0, [SP,#0x3A0+var_15C]
        VSTR            S0, [SP,#0x3A0+var_158]
      v161 = 1065353216;
      Tessellator::color(v119, (const Color *)&v160);
        VMOV            S0, R10
        VMOV            S23, R7
        VADD.F32        S25, S0, S19
        VLDR            S0, [SP,#0x3A0+var_358]
        VMOV            S2, R4
        VADD.F32        S27, S23, S0
        VLDR            S0, [SP,#0x3A0+var_318]
        VADD.F32        S31, S2, S0
        VSUB.F32        S28, S25, S24
        VSUB.F32        S0, S27, S22
        VSUB.F32        S21, S31, S26
        VSTR            S28, [SP,#0x3A0+var_16C]
        VSTR            S0, [SP,#0x3A0+var_168]
        VSTR            S21, [SP,#0x3A0+var_164]
      Tessellator::vertexUV(v119, (const Vec3 *)&v159, __PAIR__(v185, v117));
        VADD.F32        S25, S25, S24
        VADD.F32        S0, S27, S22
        VADD.F32        S27, S31, S26
        VSTR            S25, [SP,#0x3A0+var_178]
        VSTR            S0, [SP,#0x3A0+var_174]
        VSTR            S27, [SP,#0x3A0+var_170]
      Tessellator::vertexUV(v119, (const Vec3 *)&v158, __PAIR__(v185, v116));
        VLDR            S0, [SP,#0x3A0+var_368]
        VSTR            S25, [SP,#0x3A0+var_184]
        VADD.F32        S20, S23, S0
        VADD.F32        S0, S20, S22
        VSTR            S0, [SP,#0x3A0+var_180]
        VSTR            S27, [SP,#0x3A0+var_17C]
      Tessellator::vertexUV(v119, (const Vec3 *)&v157, __PAIR__(v187, v116));
        VSUB.F32        S0, S20, S22
        VSTR            S28, [SP,#0x3A0+var_190]
        VSTR            S0, [SP,#0x3A0+var_18C]
        VSTR            S21, [SP,#0x3A0+var_188]
      Tessellator::vertexUV(v119, (const Vec3 *)&v156, __PAIR__(v187, v117));
LABEL_35:
      if ( !v68 )
        goto LABEL_42;
    _R0 = AmbientOcclusionCalculator::getShadingForFace((AmbientOcclusionCalculator *)&v167, (char)v69);
    __asm
      VMOV            S0, R0
      VSTR            S0, [SP,#0x3A0+var_1A0]
      VSTR            S0, [SP,#0x3A0+var_19C]
      VSTR            S0, [SP,#0x3A0+var_198]
    v155 = 1065353216;
    Tessellator::color(v119, (const Color *)&v154);
      VLDR            S0, [SP,#0x3A0+var_318]
      VADD.F32        S28, S16, S19
      VLDR            S2, [R5,#4]
      VADD.F32        S21, S18, S0
      VLDR            S0, [R5]
      VLDR            S4, [R5,#8]
      VLDR            S6, [SP,#0x3A0+var_348]
      VADD.F32        S2, S6, S2
      VADD.F32        S0, S28, S0
      VADD.F32        S4, S21, S4
      VSTR            S0, [SP,#0x3A0+var_1AC]
      VSTR            S2, [SP,#0x3A0+var_1A8]
      VSTR            S4, [SP,#0x3A0+var_1A4]
    Tessellator::vertexUV(v119, (const Vec3 *)&v153, __PAIR__(v185, v117));
      VLDR            S6, [SP,#0x3A0+var_34C]
      VSTR            S0, [SP,#0x3A0+var_1B8]
      VSTR            S2, [SP,#0x3A0+var_1B4]
      VSTR            S4, [SP,#0x3A0+var_1B0]
    Tessellator::vertexUV(v119, (const Vec3 *)&v152, __PAIR__(v187, v117));
      VADD.F32        S23, S30, S19
      VADD.F32        S31, S29, S0
      VLDR            S6, [SP,#0x3A0+var_350]
      VADD.F32        S0, S23, S0
      VADD.F32        S4, S31, S4
      VSTR            S0, [SP,#0x3A0+var_1C4]
      VSTR            S2, [SP,#0x3A0+var_1C0]
      VSTR            S4, [SP,#0x3A0+var_1BC]
    Tessellator::vertexUV(v119, (const Vec3 *)&v151, *(__int64 *)&v186);
      VLDR            S6, [SP,#0x3A0+var_354]
      VSTR            S0, [SP,#0x3A0+var_1D0]
      VSTR            S2, [SP,#0x3A0+var_1CC]
      VSTR            S4, [SP,#0x3A0+var_1C8]
    Tessellator::vertexUV(v119, (const Vec3 *)&v150, __PAIR__(v185, v186));
    if ( !a6 )
      _R0 = AmbientOcclusionCalculator::getShadingForFace((AmbientOcclusionCalculator *)&v167, (char)v112);
        VSTR            S0, [SP,#0x3A0+var_1E0]
        VSTR            S0, [SP,#0x3A0+var_1DC]
        VSTR            S0, [SP,#0x3A0+var_1D8]
      v149 = 1065353216;
      Tessellator::color(v119, (const Color *)&v148);
        VSUB.F32        S25, S28, S24
        VLDR            S0, [SP,#0x3A0+var_35C]
        VSUB.F32        S27, S21, S26
        VSTR            S25, [SP,#0x3A0+var_1EC]
        VSTR            S0, [SP,#0x3A0+var_1E8]
        VSTR            S27, [SP,#0x3A0+var_1E4]
      Tessellator::vertexUV(v119, (const Vec3 *)&v147, __PAIR__(v185, v116));
        VSUB.F32        S17, S23, S24
        VLDR            S0, [SP,#0x3A0+var_360]
        VSUB.F32        S20, S31, S26
        VSTR            S17, [SP,#0x3A0+var_1F8]
        VSTR            S0, [SP,#0x3A0+var_1F4]
        VSTR            S20, [SP,#0x3A0+var_1F0]
      Tessellator::vertexUV(v119, (const Vec3 *)&v146, *(__int64 *)&v184);
        VLDR            S0, [SP,#0x3A0+var_364]
        VSTR            S17, [SP,#0x3A0+var_204]
        VSTR            S0, [SP,#0x3A0+var_200]
        VSTR            S20, [SP,#0x3A0+var_1FC]
      Tessellator::vertexUV(v119, (const Vec3 *)&v145, __PAIR__(v187, v184));
        VLDR            S0, [SP,#0x3A0+var_36C]
        VSTR            S25, [SP,#0x3A0+var_210]
        VSTR            S0, [SP,#0x3A0+var_20C]
        VSTR            S27, [SP,#0x3A0+var_208]
      Tessellator::vertexUV(v119, (const Vec3 *)&v144, __PAIR__(v187, v116));
    if ( v110 == 1 )
      _R0 = AmbientOcclusionCalculator::getShadingForFace((AmbientOcclusionCalculator *)&v167, 1);
        VSTR            S0, [SP,#0x3A0+var_220]
        VSTR            S0, [SP,#0x3A0+var_21C]
        VSTR            S0, [SP,#0x3A0+var_218]
      v143 = 1065353216;
      Tessellator::color(v119, (const Color *)&v142);
        VSUB.F32        S0, S23, S24
        VSUB.F32        S2, S31, S26
        VSTR            S0, [SP,#0x3A0+var_22C]
        VSTR            S0, [SP,#0x3A0+var_228]
        VSTR            S2, [SP,#0x3A0+var_224]
      Tessellator::vertexUV(v119, (const Vec3 *)&v141, __PAIR__(v179, v115));
        VSUB.F32        S0, S28, S24
        VSUB.F32        S2, S21, S26
        VSTR            S0, [SP,#0x3A0+var_238]
        VSTR            S0, [SP,#0x3A0+var_234]
        VSTR            S2, [SP,#0x3A0+var_230]
      Tessellator::vertexUV(v119, (const Vec3 *)&v140, __PAIR__(HIDWORD(v113), v115));
        VADD.F32        S0, S28, S24
        VADD.F32        S2, S21, S26
        VSTR            S0, [SP,#0x3A0+var_244]
        VLDR            S0, [SP,#0x3A0+var_37C]
        VSTR            S0, [SP,#0x3A0+var_240]
        VSTR            S2, [SP,#0x3A0+var_23C]
      Tessellator::vertexUV(v119, (const Vec3 *)&v139, v113);
        VADD.F32        S0, S23, S24
        VADD.F32        S2, S31, S26
        VSTR            S0, [SP,#0x3A0+var_250]
        VLDR            S0, [SP,#0x3A0+var_380]
        VSTR            S0, [SP,#0x3A0+var_24C]
        VSTR            S2, [SP,#0x3A0+var_248]
      Tessellator::vertexUV(v119, (const Vec3 *)&v138, __PAIR__(v179, (unsigned int)v113));
    if ( v109 == 1 )
      _R0 = AmbientOcclusionCalculator::getShadingForFace((AmbientOcclusionCalculator *)&v167, 0);
        VSTR            S0, [SP,#0x3A0+var_260]
        VSTR            S0, [SP,#0x3A0+var_25C]
        VSTR            S0, [SP,#0x3A0+var_258]
      v137 = 1065353216;
      Tessellator::color(v119, (const Color *)&v136);
        VSTR            S0, [SP,#0x3A0+var_26C]
        VSTR            S0, [SP,#0x3A0+var_268]
        VSTR            S2, [SP,#0x3A0+var_264]
      Tessellator::vertexUV(v119, (const Vec3 *)&v135, __PAIR__(v179, v115));
        VSTR            S0, [SP,#0x3A0+var_278]
        VLDR            S0, [SP,#0x3A0+var_384]
        VSTR            S0, [SP,#0x3A0+var_274]
        VSTR            S2, [SP,#0x3A0+var_270]
      Tessellator::vertexUV(v119, (const Vec3 *)&v134, __PAIR__(v179, (unsigned int)v113));
        VSTR            S0, [SP,#0x3A0+var_284]
        VLDR            S0, [SP,#0x3A0+var_388]
        VSTR            S0, [SP,#0x3A0+var_280]
        VSTR            S2, [SP,#0x3A0+var_27C]
      Tessellator::vertexUV(v119, (const Vec3 *)&v133, v113);
        VSTR            S0, [SP,#0x3A0+var_290]
        VSTR            S0, [SP,#0x3A0+var_28C]
        VSTR            S2, [SP,#0x3A0+var_288]
      Tessellator::vertexUV(v119, (const Vec3 *)&v132, __PAIR__(HIDWORD(v113), v115));
LABEL_42:
      VLDR            S0, [SP,#0x3A0+var_338]
      VMOV            R4, S0
    _R0 = cosf(_R4);
    __asm { VMOV            S20, R0 }
    _R0 = sinf(_R4);
    __asm { VMOV            S0, R0 }
    v65 = v114;
    __asm { VMUL.F32        S2, S24, S20 }
    v64 = (_BYTE **)&Facing::Plane::HORIZONTAL;
    __asm { VMUL.F32        S4, S26, S0 }
    v63 = v166;
      VMUL.F32        S6, S24, S0
      VMUL.F32        S8, S26, S20
      VMUL.F32        S10, S0, S30
      VMUL.F32        S12, S20, S29
      VMUL.F32        S1, S0, S29
      VMUL.F32        S14, S20, S30
      VMUL.F32        S3, S0, S16
      VMUL.F32        S5, S20, S18
      VMUL.F32        S0, S0, S18
      VMUL.F32        S7, S20, S16
      VADD.F32        S24, S4, S2
      VSUB.F32        S26, S8, S6
      VSUB.F32        S29, S12, S10
      VADD.F32        S30, S1, S14
      VSUB.F32        S18, S5, S3
      VADD.F32        S16, S0, S7
      VSTR            S24, [SP,#0x3A0+var_F0]
      VSTR            S26, [SP,#0x3A0+var_E8]
  while ( !_ZF );
    VLDR            S24, [SP,#0x3A0+var_368]
    VLDR            S26, [SP,#0x3A0+var_390]
    VLDR            S28, [SP,#0x3A0+var_394]
    _R0 = AmbientOcclusionCalculator::getShadingForFace((AmbientOcclusionCalculator *)&v167, 1);
      VSTR            S0, [SP,#0x3A0+var_2A0]
      VSTR            S0, [SP,#0x3A0+var_29C]
      VSTR            S0, [SP,#0x3A0+var_298]
    v131 = 1065353216;
    Tessellator::color(v119, (const Color *)&v130);
      VLDR            S18, =0.4365
      VLDR            S22, =0.5635
      VADD.F32        S16, S26, S18
      VLDR            S0, [SP,#0x3A0+var_358]
      VADD.F32        S20, S28, S22
      VSTR            S16, [SP,#0x3A0+var_2AC]
      VSTR            S0, [SP,#0x3A0+var_2A8]
      VSTR            S20, [SP,#0x3A0+var_2A4]
    Tessellator::vertexUV(v119, (const Vec3 *)&v129, __PAIR__(HIDWORD(v113), v115));
      VADD.F32        S22, S26, S22
      VSTR            S22, [SP,#0x3A0+var_2B8]
      VSTR            S0, [SP,#0x3A0+var_2B4]
      VSTR            S20, [SP,#0x3A0+var_2B0]
    Tessellator::vertexUV(v119, (const Vec3 *)&v128, v113);
      VADD.F32        S18, S28, S18
      VSTR            S22, [SP,#0x3A0+var_2C4]
      VSTR            S0, [SP,#0x3A0+var_2C0]
      VSTR            S18, [SP,#0x3A0+var_2BC]
    Tessellator::vertexUV(v119, (const Vec3 *)&v127, __PAIR__(v96, (unsigned int)v113));
      VSTR            S16, [SP,#0x3A0+var_2D0]
      VSTR            S0, [SP,#0x3A0+var_2CC]
      VSTR            S18, [SP,#0x3A0+var_2C8]
    Tessellator::vertexUV(v119, (const Vec3 *)&v126, __PAIR__(v96, v115));
  if ( v109 == 1 )
    _R0 = AmbientOcclusionCalculator::getShadingForFace((AmbientOcclusionCalculator *)&v167, 0);
      VSTR            S0, [SP,#0x3A0+var_2E0]
      VSTR            S0, [SP,#0x3A0+var_2DC]
      VSTR            S0, [SP,#0x3A0+var_2D8]
    v125 = 1065353216;
    Tessellator::color(v119, (const Color *)&v124);
      VLDR            S20, =0.4365
      VLDR            S18, =0.5635
      VADD.F32        S22, S26, S20
      VADD.F32        S16, S28, S18
      VSTR            S22, [SP,#0x3A0+var_2EC]
      VSTR            S24, [SP,#0x3A0+var_2E8]
      VSTR            S16, [SP,#0x3A0+var_2E4]
    Tessellator::vertexUV(v119, (const Vec3 *)&v123, __PAIR__(HIDWORD(v113), v115));
      VADD.F32        S20, S28, S20
      VSTR            S22, [SP,#0x3A0+var_2F8]
      VSTR            S24, [SP,#0x3A0+var_2F4]
      VSTR            S20, [SP,#0x3A0+var_2F0]
    Tessellator::vertexUV(v119, (const Vec3 *)&v122, __PAIR__(v96, v115));
      VADD.F32        S18, S26, S18
      VSTR            S18, [SP,#0x3A0+var_304]
      VSTR            S24, [SP,#0x3A0+var_300]
      VSTR            S20, [SP,#0x3A0+var_2FC]
    Tessellator::vertexUV(v119, (const Vec3 *)&v121, __PAIR__(v96, (unsigned int)v113));
      VSTR            S18, [SP,#0x3A0+var_310]
      VSTR            S24, [SP,#0x3A0+var_30C]
      VSTR            S16, [SP,#0x3A0+var_308]
    Tessellator::vertexUV(v119, (const Vec3 *)&v120, v113);
  v83 = (void *)(v181 - 12);
  if ( (int *)(v181 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v181 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
    else
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v83);
  v84 = (void *)(v189 - 12);
  if ( (int *)(v189 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v189 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v84);
  return 1;
}


signed int __fastcall BlockTessellator::tessellateAnvilInWorld(BlockTessellator *this, Tessellator *a2, const AnvilBlock *a3, const BlockPos *a4)
{
  BlockTessellator *v4; // r7@1
  const BlockPos *v5; // r8@1
  Tessellator *v6; // r6@1
  const AnvilBlock *v7; // r5@1
  unsigned int v8; // r0@1
  int v9; // r4@1
  int v10; // r0@1

  v4 = this;
  v5 = a4;
  v6 = a2;
  v7 = a3;
  v8 = BlockSource::getData(*((BlockSource **)this + 1), a4);
  v9 = v8;
  v10 = (*(int (__fastcall **)(const AnvilBlock *, unsigned int))(*(_DWORD *)v7 + 384))(v7, v8);
  Tessellator::color(v6, v10);
  BlockTessellator::tessellateAnvilInWorld(v4, v6, v7, v5, v9, 0);
  return 1;
}


signed int __fastcall BlockTessellator::tessellateStemDirTexture(BlockTessellator *this, Tessellator *a2, const TextureUVCoordinateSet *_R2, int a4, float a5, const Vec3 *a6)
{
  Tessellator *v11; // r4@1
  float v15; // ST00_4@4
  float v16; // ST04_4@4
  float v18; // ST00_4@4
  float v19; // ST04_4@4
  float v21; // ST00_4@4
  float v22; // ST04_4@4
  float v24; // ST00_4@4
  float v25; // ST04_4@4
  float v26; // r2@4
  Tessellator *v27; // r0@4
  float v28; // r1@4
  float v29; // r3@4
  float v31; // ST00_4@5
  float v32; // ST04_4@5
  float v34; // ST00_4@5
  float v35; // ST04_4@5
  float v37; // ST00_4@5
  float v38; // ST04_4@5
  float v40; // ST00_4@5
  float v41; // ST04_4@5
  float v42; // ST00_4@6
  float v43; // ST04_4@6
  float v45; // ST00_4@6
  float v46; // ST04_4@6
  float v48; // [sp+0h] [bp-50h]@0
  float v49; // [sp+0h] [bp-50h]@4
  float v50; // [sp+4h] [bp-4Ch]@0
  float v51; // [sp+4h] [bp-4Ch]@4

  _R8 = a6;
  __asm { VLDR            S18, [SP,#0x50+arg_0] }
  v11 = a2;
  __asm
  {
    VMOV.F32        S0, #1.0
    VLDR            S6, [R8,#4]
    VMOV.F32        S2, #0.5
    VLDR            S8, [R2,#4]
    VADD.F32        S6, S6, S18
    VLDR            S24, [R2,#0xC]
    VMOV.F32        S20, S8
    VLDR            S16, [R2,#8]
    VLDR            S22, [R2,#0x10]
    VLDR            S4, [R8]
    VLDR            S26, [R8,#8]
  }
  if ( _ZF )
    __asm
    {
      VMOVEQ.F32      S20, S24
      VMOVEQ.F32      S24, S8
    }
  if ( a4 > 1 )
      VADD.F32        S0, S26, S0
      VADD.F32        S2, S4, S2
      VSTR            S20, [SP,#0x50+var_50]
      VMOV            R2, S6
      VSTR            S16, [SP,#0x50+var_4C]
      VMOV            R6, S0
      VMOV            R5, S2
    Tessellator::vertexUV(a2, _R5, _R2, _R6, v48, v50);
      VSTR            S22, [SP,#0x50+var_4C]
    Tessellator::vertexUV(v11, _R5, *((float *)a6 + 1), _R6, v31, v32);
      VMOV            R7, S26
      VSTR            S24, [SP,#0x50+var_50]
    Tessellator::vertexUV(v11, _R5, *((float *)a6 + 1), _R7, v34, v35);
      VLDR            S0, [R8,#4]
      VADD.F32        S0, S0, S18
      VMOV            R2, S0
    Tessellator::vertexUV(v11, _R5, _R2, _R7, v37, v38);
    Tessellator::vertexUV(v11, _R5, _R2, _R7, v40, v41);
    v26 = *((float *)a6 + 1);
    v27 = v11;
    __asm { VSTR            S24, [SP,#0x50+var_50] }
    v28 = _R5;
    __asm { VSTR            S22, [SP,#0x50+var_4C] }
    v29 = _R7;
  else
      VADD.F32        S2, S26, S2
      VMOV            R5, S4
      VADD.F32        S26, S4, S0
      VMOV            R6, S2
    Tessellator::vertexUV(v11, _R5, *((float *)a6 + 1), _R6, v15, v16);
    Tessellator::vertexUV(v11, _R7, *((float *)a6 + 1), _R6, v18, v19);
    Tessellator::vertexUV(v11, _R7, _R2, _R6, v21, v22);
    Tessellator::vertexUV(v11, _R7, _R2, _R6, v24, v25);
    v28 = _R7;
    v29 = _R6;
  Tessellator::vertexUV(v27, v28, v26, v29, v49, v51);
    VSTR            S20, [SP,#0x50+var_50]
    VSTR            S22, [SP,#0x50+var_4C]
  Tessellator::vertexUV(v11, _R5, *((float *)a6 + 1), _R6, v42, v43);
    VLDR            S0, [R8,#4]
    VADD.F32        S0, S0, S18
    VSTR            S16, [SP,#0x50+var_4C]
    VMOV            R2, S0
  return Tessellator::vertexUV(v11, _R5, _R2, _R6, v45, v46);
}


void __fastcall BlockTessellator::tessellateWest(BlockTessellator *this, Tessellator *a2, const Block *a3, const Vec3 *a4, const TextureUVCoordinateSet *a5)
{
  BlockTessellator::tessellateWest(this, a2, a3, a4, a5);
}


int __fastcall BlockTessellator::tessellateTerracottaInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  const Block *v5; // r11@1
  Tessellator *v6; // r10@1
  BlockTessellator *v7; // r8@1
  const BlockPos *v8; // r9@1
  unsigned __int64 *v9; // r0@1
  int v10; // r1@1
  char *v11; // r0@1
  int v12; // r3@1
  int v13; // r4@1
  int v14; // r5@1
  int v15; // r6@1
  int v16; // r7@1

  v5 = a3;
  v6 = a2;
  v7 = this;
  v8 = a4;
  v9 = (unsigned __int64 *)Block::getBlockState((int)a3, 15);
  v10 = (int)v7 + 188;
  v11 = (char *)&unk_262C9C0 + 24 * ((0xFu >> (4 - (*v9 >> 32))) & ((unsigned __int8)a5 >> (*v9 + 1 - (*v9 >> 32))));
  v12 = *((_DWORD *)v11 + 1);
  v13 = *((_DWORD *)v11 + 2);
  v14 = *((_DWORD *)v11 + 3);
  v15 = *((_DWORD *)v11 + 4);
  v16 = *((_DWORD *)v11 + 5);
  *(_DWORD *)v10 = *(_DWORD *)v11;
  *(_DWORD *)(v10 + 4) = v12;
  *(_DWORD *)(v10 + 8) = v13;
  *(_DWORD *)(v10 + 12) = v14;
  *(_DWORD *)(v10 + 16) = v15;
  *(_DWORD *)(v10 + 20) = v16;
  return j_j_j__ZN16BlockTessellator22tessellateBlockInWorldER11TessellatorRK5BlockRK8BlockPosi(v7, v6, v5, v8, a5);
}


unsigned int __fastcall BlockTessellator::getData(BlockTessellator *this, const BlockPos *a2)
{
  unsigned int v2; // r2@1
  unsigned int result; // r0@2

  v2 = *((_WORD *)this + 24);
  if ( (_BYTE)v2 )
    result = v2 >> 8;
  else
    result = BlockSource::getData(*((BlockSource **)this + 1), a2);
  return result;
}


int __fastcall BlockTessellator::tessellateTorch(BlockTessellator *this, Tessellator *a2, const Block *a3, const Vec3 *_R3, float a5, float a6)
{
  float v11; // [sp+0h] [bp-18h]@0
  float v12; // [sp+4h] [bp-14h]@0
  float v13; // [sp+8h] [bp-10h]@0

  __asm
  {
    VLDR            S0, [SP,#0x18+arg_0]
    VLDR            S2, [R3,#4]
    VLDR            S4, [SP,#0x18+arg_4]
    VSTR            S0, [SP,#0x18+var_18]
    VSTR            S4, [SP,#0x18+var_14]
    VSTR            S2, [SP,#0x18+var_10]
  }
  return BlockTessellator::tessellateTorch(*(float *)&this, *(float *)&a2, *(float *)&a3, _R3, v11, v12, v13);
}


int __fastcall BlockTessellator::getMeshForBlockInWorld(int a1, Tessellator *a2, int a3, int a4, int a5, int a6)
{
  int v6; // r11@1
  int v7; // r5@1
  const BlockPos *v8; // r6@1
  Tessellator *v9; // r9@1
  int v10; // r4@1
  unsigned __int64 *v11; // r8@1
  __int64 v12; // r0@1
  int v13; // r0@1
  int v14; // r4@2
  int v15; // r4@4
  int v16; // r7@5
  const Block *v17; // r10@7
  int v18; // r0@7
  int v27; // r4@9
  char v29; // [sp+8h] [bp-B0h]@9
  float v30; // [sp+6Ch] [bp-4Ch]@7
  char v31; // [sp+7Ch] [bp-3Ch]@1
  char v32; // [sp+7Dh] [bp-3Bh]@1
  int v33; // [sp+80h] [bp-38h]@1
  int v34; // [sp+84h] [bp-34h]@1
  int v35; // [sp+88h] [bp-30h]@1
  __int64 v36; // [sp+8Ch] [bp-2Ch]@1

  v6 = a3;
  v7 = a1;
  v8 = (const BlockPos *)a4;
  v31 = *(_BYTE *)a3;
  v9 = a2;
  v10 = *(_BYTE *)(a3 + 1);
  v11 = (unsigned __int64 *)(a1 + 784);
  v32 = *(_BYTE *)(a3 + 1);
  v33 = a5;
  v34 = *(_DWORD *)a4;
  HIDWORD(v12) = a6;
  v35 = *(_DWORD *)(a4 + 4);
  LODWORD(v12) = *(_DWORD *)(a4 + 8);
  v36 = v12;
  v13 = std::_Hashtable<BlockTessellatorBlockInWorld,std::pair<BlockTessellatorBlockInWorld const,mce::Mesh>,std::allocator<std::pair<BlockTessellatorBlockInWorld const,mce::Mesh>>,std::__detail::_Select1st,std::equal_to<BlockTessellatorBlockInWorld>,std::hash<BlockTessellatorBlockInWorld>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
          v11,
          (int)&v31);
  if ( v13 )
  {
    v14 = v13 + 28;
  }
  else
    if ( *(_DWORD *)(v7 + 796) == 200 )
    {
      v15 = *(_DWORD *)(v7 + 792);
      if ( v15 )
      {
        do
        {
          v16 = *(_DWORD *)v15;
          mce::Mesh::~Mesh((mce::Mesh *)(v15 + 28));
          operator delete((void *)v15);
          v15 = v16;
        }
        while ( v16 );
      }
      _aeabi_memclr4(*(_QWORD *)(v7 + 784), 4 * (*(_QWORD *)(v7 + 784) >> 32));
      *(_DWORD *)(v7 + 792) = 0;
      *(_DWORD *)(v7 + 796) = 0;
      v10 = *(_BYTE *)(v6 + 1);
    }
    *(_BYTE *)(v7 + 1) = 0;
    *(_BYTE *)(v7 + 41) = 1;
    *(_BYTE *)(v7 + 42) = 0;
    v17 = (const Block *)Block::mBlocks[*(_BYTE *)v6];
    v18 = (*(int (__fastcall **)(_DWORD, int, int, _DWORD))(*(_DWORD *)v17 + 420))(
            Block::mBlocks[*(_BYTE *)v6],
            v10,
            v7 + 724,
            0);
    *(_DWORD *)(v7 + 724) = *(_DWORD *)v18;
    *(_DWORD *)(v7 + 728) = *(_DWORD *)(v18 + 4);
    *(_DWORD *)(v7 + 732) = *(_DWORD *)(v18 + 8);
    *(_DWORD *)(v7 + 736) = *(_DWORD *)(v18 + 12);
    *(_DWORD *)(v7 + 740) = *(_DWORD *)(v18 + 16);
    *(_DWORD *)(v7 + 744) = *(_DWORD *)(v18 + 20);
    *(_BYTE *)(v7 + 748) = *(_BYTE *)(v18 + 24);
    _R0 = (*(int (__fastcall **)(const Block *, _DWORD, const BlockPos *))(*(_DWORD *)v17 + 388))(
            v17,
            *(_DWORD *)(v7 + 4),
            v8);
    _R1 = (unsigned __int16)_R0 >> 8;
    _R2 = (_R0 >> 16) & 0xFF;
    __asm
      VLDR            S8, =0.0039216
      VMOV            S0, R2
    _R2 = (unsigned __int8)_R0;
    _R0 >>= 24;
      VMOV            S4, R2
      VMOV            S6, R0
      VMOV            S2, R1
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
      VCVT.F32.S32    S6, S6
      VMUL.F32        S0, S0, S8
      VMUL.F32        S2, S2, S8
      VMUL.F32        S4, S4, S8
      VMUL.F32        S6, S6, S8
      VSTR            S0, [SP,#0xB8+var_4C]
      VSTR            S2, [SP,#0xB8+var_48]
      VSTR            S4, [SP,#0xB8+var_44]
      VSTR            S6, [SP,#0xB8+var_40]
    BlockTessellatorCache::reset((BlockTessellatorCache *)(v7 + 812), *(BlockSource **)(v7 + 4), v8);
    *(_DWORD *)(v7 + 44) = a5;
    Tessellator::begin(v9, 0, 0);
    Tessellator::voidBeginAndEndCalls(v9, 1);
    Tessellator::color(v9, (const Color *)&v30);
    if ( *(_BYTE *)(v7 + 41) )
      BlockTessellator::tessellateInWorld((BlockTessellator *)v7, v9, v17, v8, *(_BYTE *)(v6 + 1), 0);
    *(_BYTE *)(v7 + 41) = 0;
    *(_BYTE *)(v7 + 42) = 1;
    v27 = std::__detail::_Map_base<BlockTessellatorBlockInWorld,std::pair<BlockTessellatorBlockInWorld const,mce::Mesh>,std::allocator<std::pair<BlockTessellatorBlockInWorld const,mce::Mesh>>,std::__detail::_Select1st,std::equal_to<BlockTessellatorBlockInWorld>,std::hash<BlockTessellatorBlockInWorld>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            v11,
            (int)&v31);
    Tessellator::voidBeginAndEndCalls(v9, 0);
    Tessellator::end((Tessellator *)&v29, (const char *)v9, 0, 0);
    v14 = mce::Mesh::operator=(v27, (int)&v29);
    mce::Mesh::~Mesh((mce::Mesh *)&v29);
  return v14;
}


signed int __fastcall BlockTessellator::tessellateEndRodUp(BlockTessellator *this, Tessellator *a2, const BlockPos *a3, const TextureUVCoordinateSet *a4)
{
  const BlockPos *v4; // r7@1
  TextureUVCoordinateSet *v6; // r4@1
  Tessellator *v7; // r5@1
  const TextureUVCoordinateSet *v8; // ST2C_4@1
  const BlockPos *v9; // ST24_4@1
  BlockTessellator *v10; // ST20_4@1
  AABB *v11; // ST28_4@1
  TextureUVCoordinateSet *v16; // r6@1
  float v17; // ST4C_4@1
  int v18; // r10@1
  int v19; // r0@1
  __int64 v20; // r8@1
  float v21; // ST14_4@1
  int v22; // r0@1
  float v23; // ST10_4@1
  float v24; // ST34_4@1
  float v25; // ST30_4@1
  int v26; // r0@1
  float v27; // r4@1
  float v28; // ST44_4@1
  int v29; // r0@1
  float v30; // ST3C_4@1
  float v31; // ST00_4@1
  float v35; // ST1C_4@1
  float v36; // ST48_4@1
  float v37; // ST40_4@1
  float v38; // r7@1
  float v39; // r6@1
  float v40; // r1@1
  __int64 v41; // ST00_8@1
  float v43; // ST38_4@1
  float v44; // r7@1
  Tessellator *v45; // r0@1
  float v48; // ST18_4@1
  float v49; // ST4C_4@1
  int v50; // r0@1
  float v51; // r7@1
  float v52; // ST44_4@1
  int v53; // r0@1
  float v54; // r4@1
  float v55; // ST30_4@1
  int v56; // r0@1
  float v57; // r6@1
  float v58; // ST34_4@1
  int v59; // r0@1
  float v60; // r11@1
  float v61; // ST14_4@1
  int v62; // r0@1
  float v63; // ST10_4@1
  float v64; // ST3C_4@1
  int v65; // r0@1
  float v66; // r10@1
  float v67; // ST0C_4@1
  Tessellator *v68; // r11@1
  float v70; // ST48_4@1
  float v71; // ST3C_4@1
  int v72; // r0@1
  float v73; // ST20_4@1
  int v74; // r0@1
  float v75; // r4@1
  float v76; // ST1C_4@1
  int v77; // r10@1
  float v78; // ST24_4@1
  int v79; // r0@1
  float v80; // r6@1
  float v81; // ST34_4@1
  int v82; // r0@1
  float v83; // ST30_4@1
  float v84; // ST00_4@1
  float v88; // ST4C_4@1
  float v89; // ST44_4@1
  float v90; // ST28_4@1
  float v91; // r6@1
  float v92; // r7@1
  float v94; // ST38_4@1
  float v96; // ST40_4@1
  float v98; // ST14_4@1
  float v99; // ST48_4@1
  int v100; // r0@1
  float v101; // r10@1
  float v102; // ST34_4@1
  int v103; // r0@1
  float v104; // r5@1
  float v105; // ST20_4@1
  int v106; // r0@1
  float v107; // r7@1
  float v108; // ST1C_4@1
  float v109; // ST30_4@1
  int v110; // r0@1
  float v111; // r4@1
  float v112; // ST24_4@1
  float v113; // ST18_4@1
  float v114; // ST3C_4@1
  float v116; // [sp+50h] [bp-C8h]@1
  float v119; // [sp+5Ch] [bp-BCh]@1
  float v122; // [sp+68h] [bp-B0h]@1
  float v125; // [sp+74h] [bp-A4h]@1
  int v128; // [sp+80h] [bp-98h]@1
  signed int v129; // [sp+84h] [bp-94h]@1
  signed int v130; // [sp+88h] [bp-90h]@1
  __int64 v131; // [sp+8Ch] [bp-8Ch]@1
  int v132; // [sp+94h] [bp-84h]@1
  int v133; // [sp+98h] [bp-80h]@1
  signed int v134; // [sp+9Ch] [bp-7Ch]@1
  signed int v135; // [sp+A0h] [bp-78h]@1
  int v136; // [sp+A4h] [bp-74h]@1
  int v137; // [sp+A8h] [bp-70h]@1
  signed int v138; // [sp+ACh] [bp-6Ch]@1

  v4 = a3;
  _R6 = this;
  v6 = a4;
  v7 = a2;
  v8 = a4;
  v9 = a3;
  v10 = this;
  v136 = 1052770304;
  v137 = 0;
  v138 = 1052770304;
  v133 = 1059061760;
  v134 = 1031798784;
  v135 = 1059061760;
  v131 = 4431542034387435520LL;
  v132 = 1054867456;
  v128 = 1058013184;
  v129 = 1065353216;
  v130 = 1058013184;
  v11 = (BlockTessellator *)((char *)this + 724);
  AABB::set((BlockTessellator *)((char *)this + 724), (const Vec3 *)&v136, (const Vec3 *)&v133);
  Vec3::Vec3((int)&v125, (int)v4);
  __asm
  {
    VLDR            S20, [R6,#0x2D4]
    VLDR            S16, [R6,#0x2D8]
    VLDR            S24, [R6,#0x2DC]
    VLDR            S22, [SP,#0x118+var_A4]
    VLDR            S18, [SP,#0x118+var_A0]
    VLDR            S26, [SP,#0x118+var_9C]
  }
  Vec3::Vec3((int)&v122, (int)v4);
    VLDR            S28, [R6,#0x2E0]
    VLDR            S30, [R6,#0x2E4]
    VLDR            S17, [R6,#0x2E8]
  v16 = v6;
    VLDR            S19, [SP,#0x118+var_B0]
    VLDR            S21, [SP,#0x118+var_AC]
    VLDR            S23, [SP,#0x118+var_A8]
  v17 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v6, 0.125, 0.0));
  v18 = TextureUVCoordinateSet::offsetHeight(v6, 0.125, 0.0);
  *(float *)&v19 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v6, 0.375, 0.0));
  LODWORD(v20) = v19;
  v21 = *(float *)&v19;
  *(float *)&v22 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v6, 0.125, 0.0));
  HIDWORD(v20) = v22;
  v23 = *(float *)&v22;
  v24 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v6, 0.125, 0.0));
  v25 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v6, 0.375, 0.0));
  *(float *)&v26 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v6, 0.375, 0.0));
  v27 = *(float *)&v26;
  v28 = *(float *)&v26;
  *(float *)&v29 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v16, 0.375, 0.0));
  __asm { VADD.F32        S4, S17, S23 }
  v30 = *(float *)&v29;
  __asm { VADD.F32        S0, S28, S19 }
  v31 = v27;
    VADD.F32        S2, S30, S21
    VMOV            R4, S4
    VMOV            R1, S0
    VMOV            R2, S2
  v35 = _R4;
  v36 = _R1;
  v37 = _R2;
  v38 = _R1;
  v39 = _R2;
  Tessellator::vertexUV(v7, _R1, _R2, _R4, v31, *(float *)&v29);
  __asm { VADD.F32        S0, S24, S26 }
  v40 = v38;
  v41 = v20;
  HIDWORD(v20) = v7;
  __asm { VMOV            R3, S0 }
  v43 = _R3;
  v44 = _R3;
  Tessellator::vertexUV(v7, v40, v39, _R3, *(float *)&v41, *((float *)&v41 + 1));
  __asm { VADD.F32        S0, S20, S22 }
  v45 = v7;
  __asm { VMOV            R5, S0 }
  Tessellator::vertexUV(v45, _R5, v39, v44, v17, *(float *)&v18);
  Tessellator::vertexUV((Tessellator *)HIDWORD(v20), _R5, v39, _R4, v24, v25);
    VADD.F32        S0, S16, S18
    VMOV            R6, S0
  v48 = _R6;
  Tessellator::vertexUV((Tessellator *)HIDWORD(v20), _R5, _R6, _R4, v24, v25);
  Tessellator::vertexUV((Tessellator *)HIDWORD(v20), _R5, _R6, v44, v17, *(float *)&v18);
  Tessellator::vertexUV((Tessellator *)HIDWORD(v20), v36, _R6, v44, v21, v23);
  LODWORD(v20) = HIDWORD(v20);
  Tessellator::vertexUV((Tessellator *)HIDWORD(v20), v36, _R6, _R4, v28, v30);
  v49 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v8, 0.125, 0.0));
  *(float *)&v50 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v8, 0.375, 0.0));
  v51 = *(float *)&v50;
  v52 = *(float *)&v50;
  *(float *)&v53 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v8, 0.375, 0.0));
  v54 = *(float *)&v53;
  v55 = *(float *)&v53;
  *(float *)&v56 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v8, 0.375, 0.0));
  v57 = *(float *)&v56;
  v58 = *(float *)&v56;
  *(float *)&v59 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v8, 0.125, 0.0));
  v60 = *(float *)&v59;
  v61 = *(float *)&v59;
  *(float *)&v62 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v8, 0.4375, 0.0));
  HIDWORD(v20) = v62;
  v63 = *(float *)&v62;
  v64 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v8, 0.375, 0.0));
  *(float *)&v65 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v8, 0.4375, 0.0));
  v66 = *(float *)&v65;
  v67 = *(float *)&v65;
  Tessellator::vertexUV((Tessellator *)v20, _R5, v37, v43, v54, v57);
  Tessellator::vertexUV((Tessellator *)v20, v36, v37, v43, v49, v51);
  Tessellator::vertexUV((Tessellator *)v20, v36, v48, v43, v60, *((float *)&v20 + 1));
  Tessellator::vertexUV((Tessellator *)v20, _R5, v48, v43, v64, v66);
  Tessellator::vertexUV((Tessellator *)v20, _R5, v37, v35, v49, v52);
  Tessellator::vertexUV((Tessellator *)v20, _R5, v48, v35, v60, *((float *)&v20 + 1));
  Tessellator::vertexUV((Tessellator *)v20, v36, v48, v35, v64, v66);
  Tessellator::vertexUV((Tessellator *)v20, v36, v37, v35, v55, v58);
  Tessellator::vertexUV((Tessellator *)v20, _R5, v37, v35, v55, v58);
  v68 = (Tessellator *)v20;
  Tessellator::vertexUV((Tessellator *)v20, _R5, v37, v43, v49, v52);
  Tessellator::vertexUV((Tessellator *)v20, _R5, v48, v43, v61, v63);
  Tessellator::vertexUV((Tessellator *)v20, _R5, v48, v35, v64, v67);
  Tessellator::vertexUV((Tessellator *)v20, v36, v48, v35, v61, v63);
  Tessellator::vertexUV((Tessellator *)v20, v36, v48, v43, v64, v67);
  Tessellator::vertexUV((Tessellator *)v20, v36, v37, v43, v55, v58);
  Tessellator::vertexUV((Tessellator *)v20, v36, v37, v35, v49, v52);
  AABB::set(v11, (const Vec3 *)&v131, (const Vec3 *)&v128);
  Vec3::Vec3((int)&v119, (int)v9);
  _R6 = v10;
    VLDR            S22, [SP,#0x118+var_BC]
    VLDR            S18, [SP,#0x118+var_B8]
    VLDR            S26, [SP,#0x118+var_B4]
  Vec3::Vec3((int)&v116, (int)v9);
    VLDR            S19, [SP,#0x118+var_C8]
    VLDR            S21, [SP,#0x118+var_C4]
    VLDR            S23, [SP,#0x118+var_C0]
  v70 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v8, 0.125, 0.0));
  v71 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v8, 0.0, 0.0));
  *(float *)&v72 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v8, 0.25, 0.0));
  LODWORD(v20) = v72;
  v73 = *(float *)&v72;
  *(float *)&v74 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v8, 0.0, 0.0));
  v75 = *(float *)&v74;
  v76 = *(float *)&v74;
  v77 = TextureUVCoordinateSet::offsetWidth(v8, 0.125, 0.0);
  v78 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v8, 0.125, 0.0));
  *(float *)&v79 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v8, 0.25, 0.0));
  v80 = *(float *)&v79;
  v81 = *(float *)&v79;
  *(float *)&v82 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v8, 0.125, 0.0));
  v83 = *(float *)&v82;
  __asm { VADD.F32        S2, S30, S21 }
  v84 = v80;
    VADD.F32        S4, S17, S23
    VMOV            R3, S4
  v88 = _R1;
  v89 = _R2;
  v90 = _R3;
  v91 = _R1;
  v92 = _R2;
  Tessellator::vertexUV(v68, _R1, _R2, _R3, v84, *(float *)&v82);
    VADD.F32        S0, S24, S26
    VMOV            R5, S0
  v94 = _R5;
  Tessellator::vertexUV(v68, v91, v92, _R5, *(float *)&v20, v75);
    VADD.F32        S0, S20, S22
    VMOV            R4, S0
  v96 = _R4;
  Tessellator::vertexUV(v68, _R4, v92, _R5, v70, v71);
  Tessellator::vertexUV(v68, _R4, v92, v90, *(float *)&v77, v78);
    VMOV            R7, S0
  v98 = _R7;
  Tessellator::vertexUV(v68, _R4, _R7, v90, *(float *)&v77, v78);
  Tessellator::vertexUV(v68, _R4, _R7, _R5, v70, v71);
  Tessellator::vertexUV(v68, v88, _R7, _R5, v73, v76);
  Tessellator::vertexUV(v68, v88, _R7, v90, v81, v83);
  v99 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v8, 0.0, 0.0));
  *(float *)&v100 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v8, 0.0, 0.0));
  v101 = *(float *)&v100;
  v102 = *(float *)&v100;
  *(float *)&v103 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v8, 0.125, 0.0));
  v104 = *(float *)&v103;
  v105 = *(float *)&v103;
  *(float *)&v106 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v8, 0.0, 0.0));
  v107 = *(float *)&v106;
  v108 = *(float *)&v106;
  v109 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v8, 0.0, 0.0));
  *(float *)&v110 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v8, 0.9375, 0.0));
  v111 = *(float *)&v110;
  v112 = *(float *)&v110;
  v113 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v8, 0.125, 0.0));
  v114 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v8, 0.9375, 0.0));
  Tessellator::vertexUV(v68, v96, v89, v94, v104, v107);
  Tessellator::vertexUV(v68, v88, v89, v94, v99, v101);
  Tessellator::vertexUV(v68, v88, v98, v94, v109, v111);
  Tessellator::vertexUV(v68, v96, v98, v94, v113, v114);
  Tessellator::vertexUV(v68, v96, v89, v90, v99, v102);
  Tessellator::vertexUV(v68, v96, v98, v90, v109, v112);
  Tessellator::vertexUV(v68, v88, v98, v90, v113, v114);
  Tessellator::vertexUV(v68, v88, v89, v90, v105, v108);
  Tessellator::vertexUV(v68, v96, v89, v90, v105, v108);
  Tessellator::vertexUV(v68, v96, v89, v94, v99, v102);
  Tessellator::vertexUV(v68, v96, v98, v94, v109, v112);
  Tessellator::vertexUV(v68, v96, v98, v90, v113, v114);
  Tessellator::vertexUV(v68, v88, v98, v90, v109, v112);
  Tessellator::vertexUV(v68, v88, v98, v94, v113, v114);
  Tessellator::vertexUV(v68, v88, v89, v94, v105, v108);
  return Tessellator::vertexUV(v68, v88, v89, v90, v99, v102);
}


void __fastcall BlockTessellator::tessellateFaceDown(BlockTessellator *this, Tessellator *a2, const Block *a3, const Vec3 *a4, const TextureUVCoordinateSet *a5)
{
  BlockTessellator::tessellateFaceDown(this, a2, a3, a4, a5);
}


int __fastcall BlockTessellator::renderGuiBlock(float a1, float a2, int a3, int a4, int a5, int a6)
{
  float v6; // r9@1
  float v7; // r6@1
  int v8; // r8@1
  char v9; // r10@1
  int v10; // r3@1
  int v11; // r5@1
  int v12; // r2@1
  char v13; // r0@1
  int v14; // r0@1
  int v15; // r4@1
  int v16; // r7@1
  ShaderColor *v17; // r0@1
  int v18; // r1@1
  int v23; // r5@1
  Tessellator *v24; // r11@3
  int v25; // r5@6
  __int64 v29; // r2@9
  __int64 v30; // r0@9
  const TextureUVCoordinateSet *v31; // r0@12
  const TextureUVCoordinateSet *v32; // r0@12
  float v33; // ST00_4@12
  const TextureUVCoordinateSet *v34; // r0@12
  const TextureUVCoordinateSet *v35; // r0@12
  float v36; // ST00_4@12
  const TextureUVCoordinateSet *v37; // r0@12
  const TextureUVCoordinateSet *v38; // r0@12
  float v39; // ST30_4@15
  float v40; // ST2C_4@15
  int v41; // ST28_4@15
  int v42; // ST20_4@15
  int v43; // ST14_4@15
  int v44; // ST18_4@15
  char v45; // ST1C_1@15
  char v48; // ST24_1@15
  float v49; // ST0C_4@15
  BlockGraphics *v50; // r4@15
  const TextureUVCoordinateSet *v51; // r0@15
  AABB *v53; // ST44_4@15
  float v54; // ST00_4@15
  const TextureUVCoordinateSet *v55; // r0@15
  float v57; // ST00_4@15
  const TextureUVCoordinateSet *v58; // r0@15
  float v59; // ST00_4@15
  const TextureUVCoordinateSet *v60; // r0@15
  float v61; // ST00_4@15
  const TextureUVCoordinateSet *v62; // r0@15
  float v63; // r1@15
  float v64; // r2@15
  float v65; // r3@15
  float v66; // ST00_4@15
  const TextureUVCoordinateSet *v67; // r0@15
  char *v68; // r0@15
  int v69; // r1@15
  int v70; // r2@15
  int v71; // r8@17
  Tessellator *v72; // r10@17
  signed int v76; // r2@21
  __int64 v77; // r0@21
  const TextureUVCoordinateSet *v78; // r0@25
  const TextureUVCoordinateSet *v79; // r0@25
  float v80; // ST00_4@25
  const TextureUVCoordinateSet *v81; // r0@25
  const TextureUVCoordinateSet *v82; // r0@25
  float v83; // ST00_4@25
  const TextureUVCoordinateSet *v84; // r0@25
  const TextureUVCoordinateSet *v85; // r0@25
  int v86; // r2@26
  char *v87; // r0@26
  const TextureUVCoordinateSet *v89; // r2@30
  BlockGraphics *v94; // r4@31
  const TextureUVCoordinateSet *v95; // r0@31
  float v96; // r7@31
  float v100; // ST00_4@31
  const TextureUVCoordinateSet *v101; // r0@31
  float v105; // ST00_4@31
  const TextureUVCoordinateSet *v106; // ST00_4@31
  signed int v108; // r2@34
  int v109; // r3@34
  int v110; // r4@34
  int v111; // r5@34
  int v112; // r6@34
  signed int v113; // r2@34
  int v114; // r3@34
  int v115; // r4@34
  int v116; // r5@34
  int v117; // r6@34
  const TextureUVCoordinateSet *v118; // r4@34
  int v119; // r0@34
  BlockState *v120; // r0@36
  __int64 v121; // r5@36
  int v122; // r4@36
  int v123; // ST00_4@36
  float v124; // r4@36
  const TextureUVCoordinateSet *v126; // r0@37
  float v128; // ST00_4@37
  const TextureUVCoordinateSet *v129; // r0@37
  float v131; // ST00_4@37
  const TextureUVCoordinateSet *v132; // ST00_4@37
  int v133; // r4@38
  const TextureUVCoordinateSet *v134; // r5@38
  __int64 v138; // r2@41
  __int64 v139; // r0@41
  float v140; // ST00_4@47
  float v141; // ST00_4@47
  _BOOL4 v142; // r0@49
  int v143; // r2@49
  int v144; // r6@52
  float v155; // ST00_4@53
  const TextureUVCoordinateSet *v156; // r0@53
  const TextureUVCoordinateSet *v157; // r0@53
  float v158; // ST00_4@53
  const TextureUVCoordinateSet *v159; // r0@53
  const TextureUVCoordinateSet *v160; // r0@53
  float v161; // ST00_4@53
  const TextureUVCoordinateSet *v162; // r0@53
  const TextureUVCoordinateSet *v163; // r0@53
  BlockGraphics *v168; // r4@64
  const TextureUVCoordinateSet *v169; // r0@64
  float v171; // ST00_4@64
  const TextureUVCoordinateSet *v172; // r0@64
  float v174; // ST00_4@64
  const TextureUVCoordinateSet *v175; // r0@64
  int v176; // r6@66
  __int64 v182; // r2@69
  __int64 v184; // r0@70
  __int64 v185; // r2@70
  const TextureUVCoordinateSet *v186; // r0@73
  const TextureUVCoordinateSet *v187; // r0@73
  float v188; // ST00_4@73
  const TextureUVCoordinateSet *v189; // r0@73
  const TextureUVCoordinateSet *v190; // r0@73
  float v191; // ST00_4@73
  const TextureUVCoordinateSet *v192; // r0@73
  const TextureUVCoordinateSet *v193; // r0@73
  char v194; // r5@77
  int result; // r0@78
  int v196; // r0@79
  int v197; // r8@79
  int v198; // r0@79
  int v199; // r9@79
  signed int v200; // r2@79
  int v201; // r3@79
  int v202; // r4@79
  int v203; // r5@79
  int v204; // r6@79
  int v205; // r0@79
  int v206; // r8@79
  signed int v207; // r2@79
  int v208; // r3@79
  int v209; // r4@79
  int v210; // r5@79
  int v211; // r6@79
  float v218; // ST00_4@80
  float v222; // ST00_4@80
  void *v223; // r0@80
  void *v224; // r0@81
  unsigned int *v225; // r2@82
  signed int v226; // r1@84
  int v227; // r2@90
  int v228; // r4@95
  unsigned int *v229; // r2@96
  signed int v230; // r1@98
  Block *v233; // r9@101
  unsigned int v234; // r7@101
  int v235; // r6@101
  int v236; // r0@101
  const TextureUVCoordinateSet *v237; // r0@101
  float v239; // ST00_4@101
  unsigned int v240; // r7@101
  int v241; // r6@101
  int v242; // r0@101
  const TextureUVCoordinateSet *v243; // r0@101
  float v245; // ST00_4@101
  unsigned int v246; // r7@101
  int v247; // r6@101
  int v248; // r0@101
  const TextureUVCoordinateSet *v249; // r0@101
  float v250; // [sp+0h] [bp-188h]@0
  float v251; // [sp+0h] [bp-188h]@21
  signed __int64 v252; // [sp+0h] [bp-188h]@41
  float v253; // [sp+4h] [bp-184h]@0
  signed int v254; // [sp+4h] [bp-184h]@9
  signed int v255; // [sp+4h] [bp-184h]@21
  float v256; // [sp+8h] [bp-180h]@0
  signed int v257; // [sp+8h] [bp-180h]@9
  signed int v258; // [sp+8h] [bp-180h]@21
  float v259; // [sp+8h] [bp-180h]@41
  unsigned int v260; // [sp+1Ch] [bp-16Ch]@52
  unsigned int v261; // [sp+20h] [bp-168h]@52
  char v262; // [sp+24h] [bp-164h]@6
  int v263; // [sp+28h] [bp-160h]@52
  float v264; // [sp+2Ch] [bp-15Ch]@52
  float v265; // [sp+30h] [bp-158h]@6
  float v266; // [sp+30h] [bp-158h]@17
  float v267; // [sp+30h] [bp-158h]@52
  float v268; // [sp+30h] [bp-158h]@66
  char v269; // [sp+34h] [bp-154h]@1
  int v270; // [sp+38h] [bp-150h]@1
  int v271; // [sp+3Ch] [bp-14Ch]@1
  int v272; // [sp+40h] [bp-148h]@1
  float v273; // [sp+40h] [bp-148h]@6
  float v274; // [sp+40h] [bp-148h]@17
  float v275; // [sp+40h] [bp-148h]@38
  float v276; // [sp+40h] [bp-148h]@66
  AABB *v277; // [sp+44h] [bp-144h]@1
  BlockGraphics *v278; // [sp+48h] [bp-140h]@1
  BlockGraphics *v279; // [sp+48h] [bp-140h]@38
  BlockTessellator *v280; // [sp+4Ch] [bp-13Ch]@1
  Block *v281; // [sp+50h] [bp-138h]@1
  int v282; // [sp+54h] [bp-134h]@92
  signed int v283; // [sp+58h] [bp-130h]@92
  int v284; // [sp+5Ch] [bp-12Ch]@92
  float v285; // [sp+60h] [bp-128h]@15
  int v286; // [sp+6Ch] [bp-11Ch]@15
  signed int v287; // [sp+70h] [bp-118h]@15
  int v288; // [sp+74h] [bp-114h]@15
  char v289; // [sp+78h] [bp-110h]@33
  signed int v290; // [sp+7Ch] [bp-10Ch]@34
  int v291; // [sp+80h] [bp-108h]@34
  int v292; // [sp+84h] [bp-104h]@34
  int v293; // [sp+88h] [bp-100h]@34
  int v294; // [sp+8Ch] [bp-FCh]@34
  int v295; // [sp+90h] [bp-F8h]@34
  int v296; // [sp+94h] [bp-F4h]@80
  char v297; // [sp+98h] [bp-F0h]@33
  signed int v298; // [sp+9Ch] [bp-ECh]@34
  int v299; // [sp+A0h] [bp-E8h]@34
  int v300; // [sp+A4h] [bp-E4h]@34
  int v301; // [sp+A8h] [bp-E0h]@34
  int v302; // [sp+ACh] [bp-DCh]@34
  int v303; // [sp+B0h] [bp-D8h]@34
  int v304; // [sp+B4h] [bp-D4h]@34
  int v305; // [sp+BCh] [bp-CCh]@33
  int v306; // [sp+C0h] [bp-C8h]@33
  int v307; // [sp+C4h] [bp-C4h]@33
  int v308; // [sp+C8h] [bp-C0h]@33
  int v309; // [sp+CCh] [bp-BCh]@33
  int v310; // [sp+D0h] [bp-B8h]@33
  int v311; // [sp+D4h] [bp-B4h]@33
  int v312; // [sp+D8h] [bp-B0h]@33
  int v313; // [sp+DCh] [bp-ACh]@33
  char v314; // [sp+E0h] [bp-A8h]@33
  int v315; // [sp+E4h] [bp-A4h]@33
  int v316; // [sp+E8h] [bp-A0h]@33
  int v317; // [sp+ECh] [bp-9Ch]@33
  int v318; // [sp+F0h] [bp-98h]@33
  int v319; // [sp+F4h] [bp-94h]@33
  int v320; // [sp+F8h] [bp-90h]@33
  int v321; // [sp+FCh] [bp-8Ch]@33
  int v322; // [sp+100h] [bp-88h]@33
  int v323; // [sp+104h] [bp-84h]@33
  char v324; // [sp+108h] [bp-80h]@33
  int v325; // [sp+10Ch] [bp-7Ch]@1
  signed int v326; // [sp+110h] [bp-78h]@1
  signed int v327; // [sp+114h] [bp-74h]@1
  signed int v328; // [sp+118h] [bp-70h]@1

  v6 = a2;
  v7 = a1;
  v8 = a3;
  *(_BYTE *)(LODWORD(a1) + 48) = 1;
  v9 = *(_BYTE *)(LODWORD(a1) + 51);
  *(_BYTE *)(LODWORD(a1) + 51) = 0;
  *(_BYTE *)(LODWORD(a1) + 49) = *(_BYTE *)(a3 + 1);
  v271 = a4;
  v10 = *(_BYTE *)a3;
  v270 = LODWORD(a2);
  v11 = Block::mBlocks[v10];
  v12 = LODWORD(a1) + 724;
  v278 = (BlockGraphics *)BlockGraphics::mBlocks[v10];
  v13 = *(_BYTE *)(LODWORD(a1) + 1);
  *(_BYTE *)(LODWORD(v7) + 1) = 0;
  v269 = v13;
  v280 = (BlockTessellator *)LODWORD(v7);
  v281 = (Block *)v11;
  v277 = (AABB *)v12;
  v14 = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 420))(v11);
  *(_DWORD *)(LODWORD(v7) + 724) = *(_DWORD *)v14;
  *(_DWORD *)(LODWORD(v7) + 728) = *(_DWORD *)(v14 + 4);
  *(_DWORD *)(LODWORD(v7) + 732) = *(_DWORD *)(v14 + 8);
  *(_DWORD *)(LODWORD(v7) + 736) = *(_DWORD *)(v14 + 12);
  *(_DWORD *)(LODWORD(v7) + 740) = *(_DWORD *)(v14 + 16);
  *(_DWORD *)(LODWORD(v7) + 744) = *(_DWORD *)(v14 + 20);
  *(_BYTE *)(LODWORD(v7) + 748) = *(_BYTE *)(v14 + 24);
  v15 = BlockGraphics::getBlockShape((BlockGraphics *)BlockGraphics::mBlocks[*(_BYTE *)v8]);
  v272 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v11 + 424))(v11, *(_BYTE *)(v8 + 1));
  v16 = Block::mLightEmission[*(_BYTE *)(v11 + 4)];
  v17 = *(ShaderColor **)(LODWORD(v6) + 48);
  v325 = 1065353216;
  v326 = 1065353216;
  v327 = 1065353216;
  v328 = 1065353216;
  ShaderColor::setColor(v17, (const Color *)&v325);
  __asm
  {
    VMOV.F32        S30, #0.5
    VMOV.F32        S24, #1.0
  }
  *(_DWORD *)(LODWORD(v7) + 188) = 0;
  v23 = LODWORD(v7) + 188;
  __asm { VLDR            S18, =0.73 }
  *(_DWORD *)(v23 + 4) = 0;
  *(_DWORD *)(v23 + 8) = 0;
  *(_DWORD *)(v23 + 12) = 0;
  *(_DWORD *)(v23 + 16) = 0;
  *(_DWORD *)(v23 + 20) = 0;
    VLDR            S16, [SP,#0x188+arg_4]
    VMOV.F32        S22, S30
    VLDR            S20, [SP,#0x188+arg_0]
  if ( !_ZF )
    __asm
    {
      VMOVNE.F32      S18, S24
      VMOVNE.F32      S22, S24
    }
  v24 = *(Tessellator **)(LODWORD(v6) + 40);
  if ( v15 <= 42 )
    if ( v15 <= 20 )
      switch ( v15 )
      {
        case 10:
          v262 = v9;
          v25 = 0;
          Tessellator::begin(*(Tessellator **)(LODWORD(v6) + 40), 48, 0);
          __asm
          {
            VMOV            R0, S20
            VMUL.F32        S2, S22, S20
            VMUL.F32        S0, S18, S20
            VMOV            R7, S0
          }
          v273 = _R0;
          __asm { VMOV            R0, S2 }
          v265 = _R0;
          break;
        case 18:
          goto LABEL_33;
        case 13:
          Tessellator::begin(*(Tessellator **)(LODWORD(v6) + 40), 24, 0);
          __asm { VMOV            R1, S20 }
          v96 = v7;
          *(_QWORD *)(LODWORD(v7) + 724) = 1031798784LL;
          *(_DWORD *)(LODWORD(v7) + 732) = 1031798784;
          *(_DWORD *)(LODWORD(v7) + 736) = 1064304640;
          *(_DWORD *)(LODWORD(v7) + 740) = 1065353216;
          *(_DWORD *)(LODWORD(v7) + 744) = 1064304640;
          __asm { VSTR            S16, [SP,#0x188+var_188] }
          Tessellator::color(v24, _R1, _R1, _R1, v250);
          v126 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(1, (unsigned int)v278), 0, 0);
          BlockTessellator::tessellateFaceUp(
            (BlockTessellator *)LODWORD(v7),
            v24,
            v281,
            (const Vec3 *)&Vec3::ZERO,
            v126);
            VMUL.F32        S0, S22, S20
            VSTR            S16, [SP,#0x188+var_188]
            VMOV            R1, S0
          Tessellator::color(v24, _R1, _R1, _R1, v128);
          v129 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(3, (unsigned int)v278), 0, 0);
          BlockTessellator::tessellateSouth((BlockTessellator *)LODWORD(v7), v24, v281, (const Vec3 *)&Vec3::ZERO, v129);
          Tessellator::color(v24, _R1, _R1, _R1, v131);
          v132 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(4, (unsigned int)v278), 0, 0);
          BlockTessellator::tessellateWest((BlockTessellator *)LODWORD(v7), v24, v281, (const Vec3 *)&Vec3::ZERO, v132);
          goto LABEL_32;
        case 11:
          v133 = 0;
          Tessellator::begin(*(Tessellator **)(LODWORD(v6) + 40), 96, 0);
          v134 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(3, (unsigned int)v278), v272, 0);
            VMOV            R10, S0
          v279 = _R0;
          v275 = _R0;
          do
            switch ( v133 )
            {
              case 0:
                AABB::set(__PAIR__(1052770304, (unsigned int)v277), 0LL, 0.625, 1.0, 0.25);
                break;
              case 4:
                LODWORD(v138) = 1062207488;
                v252 = 4571153622839066624LL;
                v259 = 1.125;
                v139 = __PAIR__(1054867456, (unsigned int)v277);
                goto LABEL_46;
              case 2:
                AABB::set(__PAIR__(1054867456, (unsigned int)v277), -4755801205441036288LL, 0.5625, 0.9375, 0.5);
              case 3:
                AABB::set(__PAIR__(1054867456, (unsigned int)v277), -4755801205452570624LL, 0.5625, 0.4375, 0.5);
              case 1:
                AABB::set(__PAIR__(1052770304, (unsigned int)v277), 4557642822898941952LL, 0.625, 1.0, 1.0);
              case 5:
                v252 = 4530621226192732160LL;
                LODWORD(v138) = 1050673152;
LABEL_46:
                HIDWORD(v138) = 1056964608;
                AABB::set(v139, v138, *(float *)&v252, *((float *)&v252 + 1), v259);
              default:
            }
            __asm { VSTR            S16, [SP,#0x188+var_188] }
            Tessellator::color(v24, *(float *)&v279, *(float *)&v279, *(float *)&v279, v250);
            BlockTessellator::tessellateFaceDown(
              (BlockTessellator *)LODWORD(v7),
              v24,
              v281,
              (const Vec3 *)&Vec3::ZERO,
              v134);
            BlockTessellator::tessellateFaceUp(
            Tessellator::color(v24, v275, v275, v275, v140);
            BlockTessellator::tessellateNorth(
            BlockTessellator::tessellateSouth(
            Tessellator::color(v24, _R10, _R10, _R10, v141);
            BlockTessellator::tessellateWest(
            BlockTessellator::tessellateEast(
            ++v133;
          while ( v133 != 6 );
          v86 = LODWORD(v7) + 712;
          goto LABEL_75;
        case 12:
        case 14:
        case 15:
        case 16:
        case 17:
          goto def_EB46C6;
        default:
          if ( !v15 )
            goto LABEL_31;
          if ( v15 != 1 )
            goto def_EB46C6;
          Tessellator::begin(*(Tessellator **)(LODWORD(v6) + 40), 8, 0);
            VMOV            R1, S20
          if ( *(_BYTE *)(LODWORD(v7) + 40) )
            v89 = (const TextureUVCoordinateSet *)(LODWORD(v7) + 8);
          else
            v89 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture((unsigned int)v278, v272, 0);
          v194 = v269;
          v282 = -1090519040;
          v283 = -1090519040;
          v284 = -1090519040;
          BlockTessellator::tessellateCrossTexture(
            v89,
            (const Vec3 *)&v282,
            1,
            v256);
          Tessellator::draw((char *)v24, v270, LODWORD(v7) + 712, v271);
          goto LABEL_78;
      }
      while ( v25 != 1 )
        if ( !v25 )
        {
          v254 = 1065353216;
          v257 = 1056964608;
          v29 = 0LL;
          v30 = (unsigned int)v277;
LABEL_11:
          AABB::set(v30, v29, 1.0, *(float *)&v254, *(float *)&v257);
        }
        __asm { VSTR            S16, [SP,#0x188+var_188] }
        Tessellator::color(v24, v273, v273, v273, v250);
        v31 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture((unsigned int)v278, 0, 0);
        BlockTessellator::tessellateFaceDown((BlockTessellator *)LODWORD(v7), v24, v281, (const Vec3 *)&Vec3::ZERO, v31);
        v32 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(1, (unsigned int)v278), 0, 0);
        BlockTessellator::tessellateFaceUp((BlockTessellator *)LODWORD(v7), v24, v281, (const Vec3 *)&Vec3::ZERO, v32);
        Tessellator::color(v24, v265, v265, v265, v33);
        v34 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(2, (unsigned int)v278), 0, 0);
        BlockTessellator::tessellateNorth((BlockTessellator *)LODWORD(v7), v24, v281, (const Vec3 *)&Vec3::ZERO, v34);
        v35 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(3, (unsigned int)v278), 0, 0);
        BlockTessellator::tessellateSouth((BlockTessellator *)LODWORD(v7), v24, v281, (const Vec3 *)&Vec3::ZERO, v35);
        Tessellator::color(v24, _R7, _R7, _R7, v36);
        v37 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(4, (unsigned int)v278), 0, 0);
        BlockTessellator::tessellateWest((BlockTessellator *)LODWORD(v7), v24, v281, (const Vec3 *)&Vec3::ZERO, v37);
        v38 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(5, (unsigned int)v278), 0, 0);
        BlockTessellator::tessellateEast((BlockTessellator *)LODWORD(v7), v24, v281, (const Vec3 *)&Vec3::ZERO, v38);
        if ( ++v25 == 2 )
          goto LABEL_74;
      v29 = 4539628424389459968LL;
      v254 = 1056964608;
      v257 = 1065353216;
      v30 = (unsigned int)v277;
      goto LABEL_11;
    switch ( v15 )
      case 21:
        v262 = v9;
        v71 = 0;
        v72 = *(Tessellator **)(LODWORD(v6) + 40);
        Tessellator::begin(*(Tessellator **)(LODWORD(v6) + 40), 72, 0);
        __asm
          VMOV            R0, S20
          VMUL.F32        S0, S18, S20
          VMUL.F32        S2, S22, S20
          VMOV            R11, S0
        v274 = _R0;
        __asm { VMOV            R0, S2 }
        v266 = _R0;
        break;
      case 22:
      case 31:
        goto LABEL_31;
      case 26:
        v142 = EndPortalFrameBlock::hasEye((EndPortalFrameBlock *)*(_BYTE *)(v8 + 1), v18);
        v143 = 24;
        if ( v142 )
          v143 = 48;
        Tessellator::begin((int)v24, 1, v143, 0);
        v124 = v7;
        BlockTessellator::tessellateEndPortalFrameInWorld(
          (BlockTessellator *)LODWORD(v7),
          v24,
          v281,
          (const BlockPos *)&BlockPos::ZERO,
          *(_BYTE *)(v8 + 1));
        goto LABEL_61;
      case 32:
        v144 = 0;
        Tessellator::begin(*(Tessellator **)(LODWORD(v6) + 40), 96, 0);
        _R0 = &WallBlock::POST_WIDTH;
          VLDR            S18, [R0]
          VMOV            R4, S0
        _R0 = &WallBlock::WALL_WIDTH;
          VADD.F32        S26, S18, S30
          VSUB.F32        S6, S30, S18
          VLDR            S4, [R0]
          VADD.F32        S22, S18, S24
          VADD.F32        S28, S4, S30
        _R0 = &WallBlock::POST_HEIGHT;
        __asm { VSUB.F32        S30, S30, S4 }
        _R1 = &WallBlock::WALL_HEIGHT;
          VNEG.F32        S4, S18
          VLDR            S17, [R0]
          VSUB.F32        S24, S24, S18
          VLDR            S19, [R1]
          VMOV            R0, S4
        v261 = _R0;
        __asm { VMOV            R0, S6 }
        v263 = _R0;
        __asm { VMOV            R0, S20 }
        v267 = _R0;
        v264 = _R0;
        __asm { VMOV            R0, S24 }
        v260 = _R0;
        while ( 2 )
          switch ( v144 )
            case 0:
              __asm
              {
                VSTR            S22, [SP,#0x188+var_188]; jumptable 00EB4F4C case 0
                VSTR            S17, [SP,#0x188+var_184]
                VSTR            S26, [SP,#0x188+var_180]
              }
              _R0 = __PAIR__(v260, (unsigned int)v277);
              goto LABEL_58;
            case 2:
                VSTR            S19, [SP,#0x188+var_184]
                VSTR            S28, [SP,#0x188+var_180]
                VMOV            R1, S18
              v250 = 0.5;
              __asm { VMOV            R3, S30 }
              LODWORD(_R0) = v277;
              LODWORD(_R2) = 0;
              goto LABEL_53;
            default:
              _R0 = __PAIR__(v261, (unsigned int)v277);
                VSTR            S18, [SP,#0x188+var_188]
LABEL_58:
              HIDWORD(_R2) = v263;
            case 1:
                VSTR            S24, [SP,#0x188+var_188]; jumptable 00EB4F4C case 1
                VMOV            R3, S30
              _R0 = __PAIR__(1056964608, (unsigned int)v277);
LABEL_53:
              AABB::set(_R0, _R2, v250, v253, v256);
              __asm { VSTR            S16, [SP,#0x188+var_188] }
              Tessellator::color(v24, v267, v267, v267, v155);
              v156 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(1, (unsigned int)v278), v272, 0);
              BlockTessellator::tessellateFaceUp(v280, v24, v281, (const Vec3 *)&Vec3::ZERO, v156);
              v157 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture((unsigned int)v278, v272, 0);
              BlockTessellator::tessellateFaceDown(v280, v24, v281, (const Vec3 *)&Vec3::ZERO, v157);
              Tessellator::color(v24, v264, v264, v264, v158);
              v159 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(2, (unsigned int)v278), v272, 0);
              BlockTessellator::tessellateNorth(v280, v24, v281, (const Vec3 *)&Vec3::ZERO, v159);
              v160 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(3, (unsigned int)v278), v272, 0);
              BlockTessellator::tessellateSouth(v280, v24, v281, (const Vec3 *)&Vec3::ZERO, v160);
              Tessellator::color(v24, _R4, _R4, _R4, v161);
              v162 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(4, (unsigned int)v278), v272, 0);
              BlockTessellator::tessellateWest(v280, v24, v281, (const Vec3 *)&Vec3::ZERO, v162);
              v163 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(5, (unsigned int)v278), v272, 0);
              BlockTessellator::tessellateEast(v280, v24, v281, (const Vec3 *)&Vec3::ZERO, v163);
              ++v144;
              continue;
            case 4:
              goto LABEL_74;
        goto LABEL_74;
      default:
        goto def_EB46C6;
    while ( v71 != 2 )
      if ( v71 == 1 )
        AABB::set(__PAIR__(1054867456, (unsigned int)v277), 4566650023203936666LL, 0.5625, 1.0, 1.0);
      else if ( !v71 )
        v76 = 1050253722;
        v251 = 0.5625;
        v255 = 1065353216;
        v258 = 1040187392;
        v77 = __PAIR__(1054867456, (unsigned int)v277);
LABEL_24:
        AABB::set(v77, (unsigned int)v76, v251, *(float *)&v255, *(float *)&v258);
        goto LABEL_25;
LABEL_25:
      __asm { VSTR            S16, [SP,#0x188+var_188] }
      Tessellator::color(v72, v274, v274, v274, v250);
      v78 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(1, (unsigned int)v278), 0, 0);
      BlockTessellator::tessellateFaceUp((BlockTessellator *)LODWORD(v7), v72, v281, (const Vec3 *)&Vec3::ZERO, v78);
      v79 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture((unsigned int)v278, 0, 0);
      BlockTessellator::tessellateFaceDown((BlockTessellator *)LODWORD(v7), v72, v281, (const Vec3 *)&Vec3::ZERO, v79);
      Tessellator::color(v72, v266, v266, v266, v80);
      v81 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(2, (unsigned int)v278), 0, 0);
      BlockTessellator::tessellateNorth((BlockTessellator *)LODWORD(v7), v72, v281, (const Vec3 *)&Vec3::ZERO, v81);
      v82 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(3, (unsigned int)v278), 0, 0);
      BlockTessellator::tessellateSouth((BlockTessellator *)LODWORD(v7), v72, v281, (const Vec3 *)&Vec3::ZERO, v82);
      Tessellator::color(v72, _R11, _R11, _R11, v83);
      v84 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(4, (unsigned int)v278), 0, 0);
      BlockTessellator::tessellateWest((BlockTessellator *)LODWORD(v7), v72, v281, (const Vec3 *)&Vec3::ZERO, v84);
      v85 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(5, (unsigned int)v278), 0, 0);
      BlockTessellator::tessellateEast((BlockTessellator *)LODWORD(v7), v72, v281, (const Vec3 *)&Vec3::ZERO, v85);
      if ( ++v71 == 3 )
        v86 = LODWORD(v7) + 712;
        v87 = (char *)v72;
        goto LABEL_76;
    v251 = 0.5625;
    v76 = 1056964608;
    v255 = 1064304640;
    v258 = 1065353216;
    v77 = __PAIR__(1054867456, (unsigned int)v277);
    goto LABEL_24;
  switch ( v15 )
    case 75:
      __asm { VMOV.F32        S0, #-0.1875 }
      v39 = *(float *)(LODWORD(v7) + 724);
      v40 = *(float *)(LODWORD(v7) + 728);
      v41 = *(_DWORD *)(LODWORD(v7) + 732);
      v42 = *(_DWORD *)(LODWORD(v7) + 736);
      v43 = *(_DWORD *)(LODWORD(v7) + 740);
      v44 = *(_DWORD *)(LODWORD(v7) + 744);
      v45 = *(_BYTE *)(LODWORD(v7) + 748);
      v286 = 1044381696;
      v287 = 1044381696;
      v288 = 1044381696;
      _R0 = &Vec3::ONE;
      __asm
        VLDR            S2, [R0]
        VLDR            S4, [R0,#4]
        VLDR            S6, [R0,#8]
        VADD.F32        S2, S2, S0
        VADD.F32        S4, S4, S0
        VADD.F32        S0, S6, S0
        VSTR            S2, [SP,#0x188+var_128]
        VSTR            S4, [SP,#0x188+var_124]
        VSTR            S0, [SP,#0x188+var_120]
      AABB::set(v277, (const Vec3 *)&v286, (const Vec3 *)&v285);
      Tessellator::begin((int)v24, 1, 24, 0);
        VMOV            R1, S20
        VSTR            S16, [SP,#0x188+var_188]
      v48 = v9;
      v49 = _R1;
      Tessellator::color(v24, _R1, _R1, _R1, v250);
      v50 = v278;
      v51 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(BlockGraphics *, signed int))(*(_DWORD *)v278 + 48))(
                                              v278,
                                              1);
      BlockTessellator::tessellateFaceUp((BlockTessellator *)LODWORD(v7), v24, v281, (const Vec3 *)&Vec3::ZERO, v51);
        VMUL.F32        S0, S22, S20
        VMOV            R1, S0
      v53 = (AABB *)LODWORD(_R1);
      Tessellator::color(v24, _R1, _R1, _R1, v54);
      v55 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(BlockGraphics *, signed int, int, _DWORD))(*(_DWORD *)v50 + 48))(
                                              v50,
                                              3,
                                              v272,
                                              0);
      BlockTessellator::tessellateSouth((BlockTessellator *)LODWORD(v7), v24, v281, (const Vec3 *)&Vec3::ZERO, v55);
        VMUL.F32        S0, S18, S20
        VMOV            R10, S0
      Tessellator::color(v24, _R10, _R10, _R10, v57);
      v58 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(BlockGraphics *, signed int, int, _DWORD))(*(_DWORD *)v50 + 48))(
                                              4,
      BlockTessellator::tessellateWest((BlockTessellator *)LODWORD(v7), v24, v281, (const Vec3 *)&Vec3::ZERO, v58);
      Tessellator::draw((char *)v24, v270, LODWORD(v7) + 712, v271);
      *(float *)(LODWORD(v7) + 724) = v39;
      *(float *)(LODWORD(v7) + 728) = v40;
      *(_DWORD *)(LODWORD(v7) + 732) = v41;
      *(_DWORD *)(LODWORD(v7) + 736) = v42;
      *(_DWORD *)(LODWORD(v7) + 740) = v43;
      *(_DWORD *)(LODWORD(v7) + 744) = v44;
      *(_BYTE *)(LODWORD(v7) + 748) = v45;
        VLDR            S0, =0.8
        VMUL.F32        S16, S16, S0
      Tessellator::color(v24, v49, v49, v49, v59);
      v60 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(_DWORD, signed int, _DWORD, _DWORD))(*(_DWORD *)v50 + 48))(
                                              1,
      BlockTessellator::tessellateFaceUp((BlockTessellator *)LODWORD(v7), v24, v281, (const Vec3 *)&Vec3::ZERO, v60);
      Tessellator::color(v24, *(float *)&v53, *(float *)&v53, *(float *)&v53, v61);
      v62 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(BlockGraphics *, signed int, int, _DWORD))(*(_DWORD *)v50 + 48))(
      BlockTessellator::tessellateSouth((BlockTessellator *)LODWORD(v7), v24, v281, (const Vec3 *)&Vec3::ZERO, v62);
      v63 = _R10;
      v64 = _R10;
      v65 = _R10;
      v9 = v48;
      Tessellator::color(v24, v63, v64, v65, v66);
      v67 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(_DWORD, signed int, _DWORD, _DWORD))(*(_DWORD *)v50 + 48))(
      BlockTessellator::tessellateWest((BlockTessellator *)LODWORD(v7), v24, v281, (const Vec3 *)&Vec3::ZERO, v67);
      v68 = (char *)v24;
      v69 = v270;
      v70 = LODWORD(v7) + 712;
      goto LABEL_63;
    case 67:
    case 68:
    case 76:
    case 83:
    case 84:
LABEL_31:
      _R0 = &Color::WHITE;
        VLDR            S24, [R0]
        VLDR            S26, [R0,#4]
        VLDR            S28, [R0,#8]
      Tessellator::begin(*(_DWORD *)(LODWORD(v6) + 40), 1, 24, 0);
        VMUL.F32        S24, S24, S20
        VMUL.F32        S26, S26, S20
        VMUL.F32        S20, S28, S20
        VMOV            R1, S24
        VMOV            R2, S26
        VMOV            R3, S20
      Tessellator::color(v24, _R1, _R2, _R3, v250);
      v94 = v278;
      v95 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(BlockGraphics *, signed int, int, _DWORD))(*(_DWORD *)v278 + 48))(
      v96 = v7;
      BlockTessellator::tessellateFaceUp((BlockTessellator *)LODWORD(v7), v24, v281, (const Vec3 *)&Vec3::ZERO, v95);
        VMUL.F32        S0, S24, S22
        VMUL.F32        S2, S26, S22
        VMUL.F32        S4, S20, S22
        VMOV            R2, S2
        VMOV            R3, S4
      Tessellator::color(v24, _R1, _R2, _R3, v100);
      v101 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(BlockGraphics *, signed int, int, _DWORD))(*(_DWORD *)v94 + 48))(
                                               v94,
                                               3,
                                               v272,
                                               0);
      BlockTessellator::tessellateSouth((BlockTessellator *)LODWORD(v7), v24, v281, (const Vec3 *)&Vec3::ZERO, v101);
        VMUL.F32        S0, S24, S18
        VMUL.F32        S2, S26, S18
        VMUL.F32        S4, S20, S18
      Tessellator::color(v24, _R1, _R2, _R3, v105);
      v106 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(BlockGraphics *, signed int, int, _DWORD))(*(_DWORD *)v94 + 48))(
                                               4,
      BlockTessellator::tessellateWest((BlockTessellator *)LODWORD(v7), v24, v281, (const Vec3 *)&Vec3::ZERO, v106);
LABEL_32:
      v70 = LODWORD(v96) + 712;
      goto LABEL_62;
    case 87:
LABEL_33:
      v315 = 1054867456;
      v316 = 0;
      v317 = 0;
      AABB::shrink((AABB *)&v318, v277, (int)&v315);
      *(_DWORD *)(LODWORD(v7) + 724) = v318;
      *(_DWORD *)(LODWORD(v7) + 728) = v319;
      *(_DWORD *)(LODWORD(v7) + 732) = v320;
      *(_DWORD *)(LODWORD(v7) + 736) = v321;
      *(_DWORD *)(LODWORD(v7) + 740) = v322;
      *(_DWORD *)(LODWORD(v7) + 744) = v323;
      *(_BYTE *)(LODWORD(v7) + 748) = v324;
      v305 = -1102263091;
      v306 = 0;
      v307 = 0;
      AABB::translated((AABB *)&v308, v277, (int)&v305);
      *(_DWORD *)(LODWORD(v7) + 724) = v308;
      *(_DWORD *)(LODWORD(v7) + 728) = v309;
      *(_DWORD *)(LODWORD(v7) + 732) = v310;
      *(_DWORD *)(LODWORD(v7) + 736) = v311;
      *(_DWORD *)(LODWORD(v7) + 740) = v312;
      *(_DWORD *)(LODWORD(v7) + 744) = v313;
      *(_BYTE *)(LODWORD(v7) + 748) = v314;
      _R1 = &Color::WHITE;
      *(_DWORD *)(LODWORD(v7) + 752) = 1067030938;
        VLDR            S24, [R1]
        VLDR            S26, [R1,#4]
        VLDR            S28, [R1,#8]
      TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)&v297);
      TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)&v289);
      if ( *(_BYTE *)(LODWORD(v7) + 40) )
        v108 = *(_DWORD *)(LODWORD(v7) + 12);
        v109 = *(_DWORD *)(LODWORD(v7) + 16);
        v110 = *(_DWORD *)(LODWORD(v7) + 20);
        v111 = *(_DWORD *)(LODWORD(v7) + 24);
        v112 = *(_DWORD *)(LODWORD(v7) + 28);
        *(_DWORD *)&v297 = *((_DWORD *)v280 + 2);
        v298 = v108;
        v299 = v109;
        v300 = v110;
        v301 = v111;
        v302 = v112;
        EntityInteraction::setInteractText(&v303, (int *)v280 + 8);
        v304 = *((_DWORD *)v280 + 9);
        v113 = *((_DWORD *)v280 + 3);
        v114 = *((_DWORD *)v280 + 4);
        v115 = *((_DWORD *)v280 + 5);
        v116 = *((_DWORD *)v280 + 6);
        v117 = *((_DWORD *)v280 + 7);
        *(_DWORD *)&v289 = *((_DWORD *)v280 + 2);
        v290 = v113;
        v291 = v114;
        v292 = v115;
        v293 = v116;
        v294 = v117;
        v118 = (const TextureUVCoordinateSet *)&v289;
        EntityInteraction::setInteractText(&v295, (int *)v280 + 8);
        v119 = *((_DWORD *)v280 + 9);
      else
        v196 = (*(int (**)(void))(*(_DWORD *)v281 + 424))();
        v197 = v196;
        v198 = BlockGraphics::getTexture((unsigned int)v278, v196, 0);
        v199 = v198;
        v200 = *(_DWORD *)(v198 + 4);
        v201 = *(_DWORD *)(v198 + 8);
        v202 = *(_DWORD *)(v198 + 12);
        v203 = *(_DWORD *)(v198 + 16);
        v204 = *(_DWORD *)(v198 + 20);
        *(_DWORD *)&v297 = *(_DWORD *)v198;
        v298 = v200;
        v299 = v201;
        v300 = v202;
        v301 = v203;
        v302 = v204;
        EntityInteraction::setInteractText(&v303, (int *)(v198 + 24));
        v304 = *(_DWORD *)(v199 + 28);
        v205 = BlockGraphics::getTexture(__PAIR__(5, (unsigned int)v278), v197, 0);
        v206 = v205;
        v207 = *(_DWORD *)(v205 + 4);
        v208 = *(_DWORD *)(v205 + 8);
        v209 = *(_DWORD *)(v205 + 12);
        v210 = *(_DWORD *)(v205 + 16);
        v211 = *(_DWORD *)(v205 + 20);
        *(_DWORD *)&v289 = *(_DWORD *)v205;
        v290 = v207;
        v291 = v208;
        v292 = v209;
        v293 = v210;
        v294 = v211;
        EntityInteraction::setInteractText(&v295, (int *)(v205 + 24));
        v119 = *(_DWORD *)(v206 + 28);
      v296 = v119;
        VMUL.F32        S28, S28, S20
        VMUL.F32        S20, S24, S20
        VMOV            R3, S28
      BlockTessellator::tessellateFaceUp(v280, v24, v281, (const Vec3 *)&Vec3::ZERO, v118);
        VMUL.F32        S0, S20, S22
        VMUL.F32        S4, S28, S22
      Tessellator::color(v24, _R1, _R2, _R3, v218);
      BlockTessellator::tessellateSouth(v280, v24, v281, (const Vec3 *)&Vec3::ZERO, v118);
        VMUL.F32        S0, S20, S18
        VMUL.F32        S4, S28, S18
      Tessellator::color(v24, _R1, _R2, _R3, v222);
      BlockTessellator::tessellateWest(
        v280,
        v24,
        v281,
        (const Vec3 *)&Vec3::ZERO,
        (const TextureUVCoordinateSet *)&v297);
      Tessellator::draw((char *)v24, v270, (int)v280 + 712, v271);
      *((_DWORD *)v280 + 188) = 1065353216;
      v194 = v269;
      v223 = (void *)(v295 - 12);
      if ( (int *)(v295 - 12) != &dword_28898C0 )
        v229 = (unsigned int *)(v295 - 4);
        if ( &pthread_create )
          __dmb();
            v230 = __ldrex(v229);
          while ( __strex(v230 - 1, v229) );
        else
          v230 = (*v229)--;
        if ( v230 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v223);
      v224 = (void *)(v303 - 12);
      if ( (int *)(v303 - 12) != &dword_28898C0 )
        v225 = (unsigned int *)(v303 - 4);
            v226 = __ldrex(v225);
          while ( __strex(v226 - 1, v225) );
          v226 = (*v225)--;
        if ( v226 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v224);
      goto LABEL_78;
    case 77:
      Tessellator::begin(*(_DWORD *)(LODWORD(v6) + 40), 1, 72, 0);
      __asm { VMOV            R3, S20 }
      v124 = v7;
      BlockTessellator::tessellateBeacon(v7, (int)v24, v281, _R3, v250, (const Vec3 *)&Vec3::ZERO);
      goto LABEL_61;
    case 86:
      *(_DWORD *)(LODWORD(v7) + 200) = 0;
      *(_DWORD *)(LODWORD(v7) + 204) = 1;
      *(_DWORD *)(LODWORD(v7) + 192) = 2;
      v168 = v278;
      v169 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(BlockGraphics *, signed int, int, _DWORD))(*(_DWORD *)v278 + 48))(
                                               v278,
                                               1,
      BlockTessellator::tessellateFaceUp((BlockTessellator *)LODWORD(v7), v24, v281, (const Vec3 *)&Vec3::ZERO, v169);
      Tessellator::color(v24, _R1, _R1, _R1, v171);
      v172 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(BlockGraphics *, signed int, int, _DWORD))(*(_DWORD *)v168 + 48))(
                                               v168,
      BlockTessellator::tessellateSouth((BlockTessellator *)LODWORD(v7), v24, v281, (const Vec3 *)&Vec3::ZERO, v172);
      Tessellator::color(v24, _R1, _R1, _R1, v174);
      v175 = (const TextureUVCoordinateSet *)(*(int (__fastcall **)(BlockGraphics *, signed int, int, _DWORD))(*(_DWORD *)v168 + 48))(
      BlockTessellator::tessellateWest((BlockTessellator *)LODWORD(v7), v24, v281, (const Vec3 *)&Vec3::ZERO, v175);
      *(_DWORD *)(LODWORD(v7) + 204) = 0;
      *(_DWORD *)(LODWORD(v7) + 192) = 0;
      goto LABEL_77;
    case 69:
    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
    case 78:
    case 79:
    case 80:
    case 81:
    case 82:
    case 85:
      goto def_EB46C6;
    default:
      if ( v15 == 43 )
        v120 = (BlockState *)Block::getBlockState(Block::mAnvil, 8);
        v121 = *(_QWORD *)v120;
        v122 = *(_BYTE *)(v8 + 1);
        BlockState::getMask(v120);
        v123 = (unsigned __int8)(v122 << (v121 + 1 - BYTE4(v121)));
        v124 = *(float *)&v280;
        BlockTessellator::tessellateAnvilInWorld(v280, v24, v281, (const BlockPos *)&BlockPos::ZERO, v123, 0);
def_EB46C6:
      v262 = v9;
      if ( (v15 | 1) == 79 )
        Tessellator::begin(v24, 96, 0);
          VMUL.F32        S2, S18, S20
          VMUL.F32        S4, S22, S20
        v176 = 0;
        _R0 = &ChorusPlantBlock::PLANT_ITEM_DIMENSION;
          VLDR            S0, [R0]
          VMOV            R5, S4
          VMOV            R10, S2
          VADD.F32        S18, S0, S24
          VSUB.F32        S22, S24, S0
          VNEG.F32        S24, S0
        v276 = _R0;
        __asm { VMOV            R0, S0 }
        v268 = _R0;
        do
          switch ( v176 )
              AABB::set((unsigned int)v277, 0LL, 1.0, 1.0, 1.0);
              break;
              *(float *)&v182 = v268;
                VSTR            S22, [SP,#0x188+var_184]
                VMOV            R1, S24
                VSTR            S22, [SP,#0x188+var_180]
              *((float *)&v182 + 1) = v268;
              AABB::set(_R0, v182, 0.0, v253, v256);
            case 3:
              v184 = __PAIR__(LODWORD(v268), (unsigned int)v277);
              __asm { VSTR            S22, [SP,#0x188+var_188] }
              v185 = __PAIR__(1065353216, LODWORD(v268));
                VSTR            S18, [SP,#0x188+var_180]
              goto LABEL_72;
              LODWORD(v185) = 1065353216;
                VSTR            S22, [SP,#0x188+var_188]
                VSTR            S18, [SP,#0x188+var_184]
              *((float *)&v185 + 1) = v268;
LABEL_72:
              AABB::set(v184, v185, v250, v253, v256);
          Tessellator::color(v24, v276, v276, v276, v250);
          v186 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture((unsigned int)v278, 0, 0);
          BlockTessellator::tessellateFaceDown(v280, v24, v281, (const Vec3 *)&Vec3::ZERO, v186);
          v187 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(1, (unsigned int)v278), 0, 0);
          BlockTessellator::tessellateFaceUp(v280, v24, v281, (const Vec3 *)&Vec3::ZERO, v187);
          Tessellator::color(v24, _R5, _R5, _R5, v188);
          v189 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(2, (unsigned int)v278), 0, 0);
          BlockTessellator::tessellateNorth(v280, v24, v281, (const Vec3 *)&Vec3::ZERO, v189);
          v190 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(3, (unsigned int)v278), 0, 0);
          BlockTessellator::tessellateSouth(v280, v24, v281, (const Vec3 *)&Vec3::ZERO, v190);
          Tessellator::color(v24, _R10, _R10, _R10, v191);
          v192 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(4, (unsigned int)v278), 0, 0);
          BlockTessellator::tessellateWest(v280, v24, v281, (const Vec3 *)&Vec3::ZERO, v192);
          v193 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(5, (unsigned int)v278), 0, 0);
          BlockTessellator::tessellateEast(v280, v24, v281, (const Vec3 *)&Vec3::ZERO, v193);
          ++v176;
        while ( v176 != 4 );
LABEL_74:
        v86 = (int)v280 + 712;
LABEL_75:
        v87 = (char *)v24;
LABEL_76:
        Tessellator::draw(v87, v270, v86, v271);
        v9 = v262;
        goto LABEL_77;
      if ( v15 > 80 )
        if ( v15 == 81 )
          Tessellator::begin((int)v24, 1, 48, 0);
          v124 = v7;
          BlockTessellator::tessellateEndRodGui((BlockTessellator *)LODWORD(v7), v24, v281, v278);
          if ( v15 != 85 )
            v194 = v269;
            if ( v15 != 89 )
              goto LABEL_78;
            Tessellator::begin((int)v24, 1, 20, 0);
            BlockTessellator::tessellateShulkerBoxFacade(
              (BlockTessellator *)&Vec3::ZERO,
              (const Vec3 *)&Vec3::ZERO);
            v227 = LODWORD(v7) + 712;
            goto LABEL_103;
          *(_DWORD *)(LODWORD(v7) + 188) = 3;
          *(_DWORD *)(LODWORD(v7) + 192) = 3;
          *(_DWORD *)(LODWORD(v7) + 204) = 1;
          *(_DWORD *)(LODWORD(v7) + 208) = 1;
          Tessellator::begin(v24, 24, 0);
          v233 = v281;
          v234 = BlockGraphics::mBlocks[*((_BYTE *)v281 + 4)];
          v235 = (*(int (__fastcall **)(Block *, signed int, signed int))(*(_DWORD *)v281 + 428))(v281, 1, 3);
          v236 = (*(int (__fastcall **)(Block *, signed int))(*(_DWORD *)v233 + 424))(v233, 3);
          v237 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(v235, v234), v236, 0);
          BlockTessellator::tessellateFaceUp(v280, v24, v281, (const Vec3 *)&Vec3::ZERO, v237);
          Tessellator::color(v24, _R1, _R1, _R1, v239);
          v240 = BlockGraphics::mBlocks[*((_BYTE *)v281 + 4)];
          v241 = (*(int (__fastcall **)(Block *, signed int, signed int))(*(_DWORD *)v233 + 428))(v233, 3, 3);
          v242 = (*(int (__fastcall **)(Block *, signed int))(*(_DWORD *)v233 + 424))(v233, 3);
          v243 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(v241, v240), v242, 0);
          BlockTessellator::tessellateSouth(v280, v24, v281, (const Vec3 *)&Vec3::ZERO, v243);
          Tessellator::color(v24, _R1, _R1, _R1, v245);
          v246 = BlockGraphics::mBlocks[*((_BYTE *)v281 + 4)];
          v247 = (*(int (__fastcall **)(Block *, signed int, signed int))(*(_DWORD *)v233 + 428))(v233, 4, 3);
          v248 = (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v233 + 424))(v233, 3);
          v249 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(v247, v246), v248, 0);
          BlockTessellator::tessellateWest(v280, v24, v281, (const Vec3 *)&Vec3::ZERO, v249);
          *(_DWORD *)v23 = 0;
          *(_DWORD *)(v23 + 4) = 0;
          *(_DWORD *)(v23 + 8) = 0;
          *(_DWORD *)(v23 + 12) = 0;
          *(_DWORD *)(v23 + 16) = 0;
          *(_DWORD *)(v23 + 20) = 0;
LABEL_61:
        v70 = LODWORD(v124) + 712;
LABEL_62:
        v69 = v270;
        v68 = (char *)v24;
LABEL_63:
        Tessellator::draw(v68, v69, v70, v271);
LABEL_77:
        v194 = v269;
        goto LABEL_78;
      if ( v15 == 44 )
        Tessellator::begin((int)v24, 1, 192, 0);
        BlockTessellator::tessellateDragonEgg(
          *(_BYTE *)(v8 + 1),
          0);
        v227 = LODWORD(v7) + 712;
LABEL_103:
        Tessellator::draw((char *)v24, v270, v227, v271);
      if ( v15 == 48 )
        Tessellator::scale3d(v24, 2.0, 2.0, 2.0);
        Tessellator::addOffset(v24, -6.0, 4.0, 0.0);
        v228 = *(_BYTE *)(v8 + 1);
        *(_DWORD *)&v297 = 1050673152;
        v298 = 1050673152;
        v299 = 1050673152;
        *(_DWORD *)&v289 = 1060110336;
        v290 = 1060110336;
        v291 = 1060110336;
        AABB::set(v277, (const Vec3 *)&v297, (const Vec3 *)&v289);
        BlockTessellator::tessellateBlockInWorld(
          v228);
        Tessellator::draw((char *)v24, v270, LODWORD(v7) + 712, v271);
        Tessellator::resetScale(v24);
        Tessellator::addOffset(v24, 6.0, -4.0, 0.0);
LABEL_78:
      result = 0;
      *((_BYTE *)v280 + 1) = v194;
      *((_BYTE *)v280 + 48) = 0;
      *((_BYTE *)v280 + 51) = v9;
      return result;
}


signed int __fastcall BlockTessellator::tessellateCrossInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5, int a6)
{
  BlockTessellator *v6; // r5@1
  Tessellator *v7; // r4@1
  const Block *v8; // r6@1
  const BlockPos *v9; // r7@1
  const TextureUVCoordinateSet *v10; // r2@2
  BlockGraphics *v11; // r8@3
  int v12; // r0@3
  float v14; // [sp+8h] [bp-30h]@0
  char v15; // [sp+10h] [bp-28h]@1

  v6 = this;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  BlockTessellator::_preparePolyCross((BlockTessellator *)&v15, this, a2, a4, (int)a3);
  if ( *((_BYTE *)v6 + 40) )
  {
    v10 = (BlockTessellator *)((char *)v6 + 8);
  }
  else
    v11 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v8 + 4)];
    v12 = (*(int (__fastcall **)(const Block *, int))(*(_DWORD *)v8 + 424))(v8, a5);
    v10 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v11, v9, 0, v12);
  BlockTessellator::tessellateCrossTexture(v6, v7, v10, (const Vec3 *)&v15, a6, v8, v14);
  return 1;
}


void __fastcall BlockTessellator::tessellateNorth(BlockTessellator *this, Tessellator *a2, const Block *a3, const Vec3 *a4, const TextureUVCoordinateSet *a5)
{
  const TextureUVCoordinateSet *v6; // r4@1
  const Block *v7; // r8@1
  Tessellator *v9; // r10@1
  float v10; // r1@3
  float v11; // r3@3
  int v12; // r5@3
  int v13; // r6@3
  int v14; // r7@3
  int v22; // r1@3
  _BOOL4 v23; // r0@12
  int v25; // r0@17
  int v40; // r0@25
  int v41; // r0@27
  float v59; // ST00_4@37
  float v60; // ST04_4@37
  float v62; // ST00_4@37
  float v63; // ST04_4@37
  float v64; // ST00_4@37
  float v65; // ST04_4@37
  void *v66; // r0@38
  unsigned int *v67; // r2@40
  signed int v68; // r1@42
  float v69; // [sp+0h] [bp-138h]@0
  float v70; // [sp+0h] [bp-138h]@30
  float v71; // [sp+0h] [bp-138h]@32
  float v72; // [sp+0h] [bp-138h]@34
  float v73; // [sp+4h] [bp-134h]@0
  float v74; // [sp+4h] [bp-134h]@30
  float v75; // [sp+4h] [bp-134h]@32
  float v76; // [sp+4h] [bp-134h]@34
  float v90; // [sp+3Ch] [bp-FCh]@35
  float v91; // [sp+44h] [bp-F4h]@34
  float v92; // [sp+54h] [bp-E4h]@33
  float v93; // [sp+5Ch] [bp-DCh]@32
  float v94; // [sp+6Ch] [bp-CCh]@31
  float v95; // [sp+74h] [bp-C4h]@30
  float v96; // [sp+84h] [bp-B4h]@29
  float v97; // [sp+8Ch] [bp-ACh]@28
  char v98; // [sp+9Ch] [bp-9Ch]@11
  int v99; // [sp+A8h] [bp-90h]@3
  float v100; // [sp+ACh] [bp-8Ch]@3
  float v101; // [sp+B0h] [bp-88h]@3
  int v102; // [sp+B4h] [bp-84h]@3
  int v103; // [sp+B8h] [bp-80h]@3
  int v104; // [sp+BCh] [bp-7Ch]@3
  int v105; // [sp+C0h] [bp-78h]@3
  int v106; // [sp+C4h] [bp-74h]@3

  _R11 = this;
  v6 = a5;
  v7 = a3;
  _R9 = a4;
  v9 = a2;
  if ( *((_BYTE *)this + 40) )
    v6 = (BlockTessellator *)((char *)this + 8);
  v10 = *((float *)v6 + 1);
  v11 = *((float *)v6 + 2);
  v12 = *((_DWORD *)v6 + 3);
  v13 = *((_DWORD *)v6 + 4);
  v14 = *((_DWORD *)v6 + 5);
  v99 = *(_DWORD *)v6;
  v100 = v10;
  v101 = v11;
  v102 = v12;
  v103 = v13;
  v104 = v14;
  sub_119C854(&v105, (int *)v6 + 6);
  v106 = *((_DWORD *)v6 + 7);
  Tessellator::quadFacing(v9, 2);
  _R6 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v99, *((float *)_R11 + 181), 0.0);
  _R4 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v99, *((float *)_R11 + 184), 0.0);
  _R7 = TextureUVCoordinateSet::inverseOffsetHeight((TextureUVCoordinateSet *)&v99, *((float *)_R11 + 185), 0.0);
  _R0 = TextureUVCoordinateSet::inverseOffsetHeight((TextureUVCoordinateSet *)&v99, *((float *)_R11 + 182), 0.0);
  __asm { VMOV            S0, R4 }
  v22 = *((_BYTE *)_R11 + 43);
  __asm
  {
    VMOV            S16, R6
    VMOV.F32        S20, S0
  }
  if ( _ZF )
    __asm
    {
      VMOVEQ.F32      S20, S16
      VMOVEQ.F32      S16, S0
    }
    VLDR            S0, [R11,#0x2D4]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    goto LABEL_50;
    VMOV.F32        S0, #1.0
    VLDR            S2, [R11,#0x2E0]
    VCMPE.F32       S2, S0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
LABEL_50:
      VSUB.F32        S0, S16, S20
      VLDR            S20, [SP,#0x138+var_8C]
      VADD.F32        S16, S0, S20
    VLDR            S0, [R11,#0x2D8]
    VMOV            S22, R7
    VMOV            S18, R0
    goto LABEL_51;
    VLDR            S2, [R11,#0x2E4]
LABEL_51:
      VSUB.F32        S0, S18, S22
      VLDR            S22, [SP,#0x138+var_88]
      VADD.F32        S18, S0, S22
  BlockPos::BlockPos((int)&v98, (int)_R9);
  if ( !*((_BYTE *)_R11 + 48) )
    v23 = BlockGraphics::isTextureIsotropic((BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v7 + 4)], 2);
    _ZF = v23 == 1;
    if ( v23 == 1 )
      _ZF = *((_DWORD *)_R11 + 49) == 0;
    if ( _ZF )
      *((_DWORD *)_R11 + 49) = ((unsigned int)BlockPos::randomSeed((BlockPos *)&v98) >> 24) & 3;
  v25 = *((_DWORD *)_R11 + 49);
  if ( v25 == 1 )
    _R7 = TextureUVCoordinateSet::inverseOffsetWidth((TextureUVCoordinateSet *)&v99, *((float *)_R11 + 185), 0.0);
      VMOV.F32        S16, #1.0
      VLDR            S0, [R11,#0x2E0]
      VSUB.F32        S0, S16, S0
      VMOV            R1, S0
    _R6 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v99, _R1, 0.0);
    _R4 = TextureUVCoordinateSet::inverseOffsetWidth((TextureUVCoordinateSet *)&v99, *((float *)_R11 + 182), 0.0);
      VLDR            S0, [R11,#0x2D4]
    _R0 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v99, _R1, 0.0);
      VMOV            S16, R7
      VMOV            S22, R6
      VMOV            S21, R4
      VMOV            S0, R0
    goto LABEL_24;
  if ( v25 == 3 )
    _R6 = TextureUVCoordinateSet::inverseOffsetWidth((TextureUVCoordinateSet *)&v99, *((float *)_R11 + 181), 0.0);
    _R4 = TextureUVCoordinateSet::inverseOffsetWidth((TextureUVCoordinateSet *)&v99, *((float *)_R11 + 184), 0.0);
    _R7 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v99, *((float *)_R11 + 185), 0.0);
    _R0 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v99, *((float *)_R11 + 182), 0.0);
      VMOV            S20, R6
      VMOV            S16, R4
      VMOV            S22, R7
      VMOV.F32        S21, S16
      VMOV.F32        S23, S22
      VMOV.F32        S2, S0
      VMOV.F32        S4, S20
    goto LABEL_25;
    VMOV.F32        S0, S18
    VMOV.F32        S21, S16
    VMOV.F32        S23, S22
    VMOV.F32        S4, S20
    VMOV.F32        S2, S0
    _R6 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v99, *((float *)_R11 + 182), 0.0);
    _R4 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v99, *((float *)_R11 + 181), 0.0);
    _R7 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)&v99, *((float *)_R11 + 185), 0.0);
    _R0 = TextureUVCoordinateSet::offsetHeight((TextureUVCoordinateSet *)&v99, *((float *)_R11 + 184), 0.0);
      VMOV            S21, R6
      VMOV            S0, R4
      VMOV            S22, R0
LABEL_24:
      VMOV.F32        S20, S16
      VMOV.F32        S23, S0
      VMOV.F32        S2, S22
      VMOV.F32        S4, S21
LABEL_25:
  v40 = *((_BYTE *)_R11 + 1);
    VLDR            S18, [R11,#0x2F0]
    VLDR            S26, [R11,#0x2D8]
    VLDR            S30, [R11,#0x2DC]
    VLDR            S25, [R11,#0x2E0]
    VLDR            S27, [R11,#0x2E4]
    VLDR            S17, [R11,#0x2D4]
    VLDR            S24, [R9]
    VLDR            S28, [R9,#4]
    VLDR            S19, [R9,#8]
    VSTR            S4, [SP,#0x138+var_120]
    VSTR            S2, [SP,#0x138+var_128]
    VSTR            S0, [SP,#0x138+var_130]
  if ( !_ZF )
    Tessellator::normal(v9, (const Vec3 *)&Vec3::NEG_UNIT_Z);
  __asm { VMUL.F32        S0, S27, S18 }
  v41 = *((_BYTE *)_R11 + 50);
    VMUL.F32        S2, S25, S18
    VMUL.F32        S4, S30, S18
    VMUL.F32        S8, S17, S18
    VMUL.F32        S6, S26, S18
    VADD.F32        S27, S0, S28
    VADD.F32        S0, S2, S24
    VADD.F32        S25, S19, S4
    VADD.F32        S29, S24, S8
    VSTR            S0, [SP,#0x138+var_124]
    VADD.F32        S0, S28, S6
    VSTR            S0, [SP,#0x138+var_12C]
      VMOV            R5, S29
      VMOV            R4, S27
      VMOV            R6, S25
      VSTR            S21, [SP,#0x138+var_138]
      VSTR            S23, [SP,#0x138+var_134]
    Tessellator::vertexUV(v9, _R5, _R4, _R6, v69, v73);
      VLDR            S0, [SP,#0x138+var_124]
      VMOV            R7, S0
      VLDR            S0, [SP,#0x138+var_120]
      VSTR            S0, [SP,#0x138+var_138]
      VSTR            S22, [SP,#0x138+var_134]
    Tessellator::vertexUV(v9, _R7, _R4, _R6, v59, v60);
      VLDR            S0, [SP,#0x138+var_12C]
      VMOV            R4, S0
      VLDR            S0, [SP,#0x138+var_128]
      VSTR            S20, [SP,#0x138+var_138]
      VSTR            S0, [SP,#0x138+var_134]
    Tessellator::vertexUV(v9, _R7, _R4, _R6, v62, v63);
      VLDR            S0, [SP,#0x138+var_130]
      VSTR            S16, [SP,#0x138+var_138]
    Tessellator::vertexUV(v9, _R5, _R4, _R6, v64, v65);
  else
      VMOV.F32        S1, #1.0
      VLDR            S4, [R11,#0xA8]
      VLDR            S6, [R11,#0x78]
      VSTR            S4, [SP,#0x138+var_104]
      VMUL.F32        S4, S0, S4
      VSTR            S6, [SP,#0x138+var_100]
      VLDR            S8, [R11,#0x58]
      VLDR            S12, [R11,#0x5C]
      VSUB.F32        S2, S1, S0
      VLDR            S3, [R11,#0x48]
      VLDR            S14, [R11,#0x4C]
      VLDR            S5, [R11,#0xAC]
      VLDR            S24, [R11,#0x7C]
      VSTR            S8, [SP,#0x138+var_110]
      VMUL.F32        S8, S0, S8
      VSTR            S12, [SP,#0x138+var_10C]
      VMUL.F32        S12, S0, S12
      VSTR            S3, [SP,#0x138+var_118]
      VMUL.F32        S6, S2, S6
      VSTR            S14, [SP,#0x138+var_114]
      VMUL.F32        S14, S2, S14
      VSTR            S5, [SP,#0x138+var_11C]
      VMUL.F32        S3, S2, S3
      VLDR            S10, [R11,#0x2E4]
      VMUL.F32        S5, S0, S5
      VLDR            S31, [R11,#0x44]
      VSUB.F32        S1, S1, S10
      VLDR            S28, [R11,#0x54]
      VLDR            S26, [R11,#0xA4]
      VLDR            S30, [R11,#0x74]
      VADD.F32        S4, S6, S4
      VLDR            S7, [R11,#0x50]
      VMUL.F32        S6, S2, S24
      VLDR            S18, [R11,#0x60]
      VADD.F32        S8, S3, S8
      VLDR            S17, [R11,#0xB0]
      VADD.F32        S12, S14, S12
      VLDR            S19, [R11,#0x80]
      VMUL.F32        S14, S0, S28
      VSTR            S7, [SP,#0x138+var_108]
      VMUL.F32        S3, S2, S31
      VMUL.F32        S4, S4, S10
      VADD.F32        S6, S6, S5
      VMUL.F32        S8, S8, S1
      VMUL.F32        S12, S12, S1
      VADD.F32        S14, S3, S14
      VMUL.F32        S6, S6, S10
      VADD.F32        S4, S4, S8
      VMUL.F32        S8, S0, S26
      VMUL.F32        S14, S14, S1
      VADD.F32        S6, S6, S12
      VMUL.F32        S12, S2, S30
      VADD.F32        S8, S12, S8
      VMUL.F32        S12, S0, S18
      VMUL.F32        S0, S0, S17
      VMUL.F32        S8, S8, S10
      VADD.F32        S8, S8, S14
      VMUL.F32        S14, S2, S7
      VMUL.F32        S2, S2, S19
      VSTR            S8, [SP,#0x138+var_AC]
      VSTR            S4, [SP,#0x138+var_A8]
      VADD.F32        S0, S2, S0
      VSTR            S6, [SP,#0x138+var_A4]
      VMUL.F32        S0, S0, S10
      VADD.F32        S0, S0, S12
      VSTR            S0, [SP,#0x138+var_A0]
    Tessellator::color(v9, (const Color *)&v97);
    _R0 = *((_BYTE *)_R11 + 180);
    _R1 = *((_BYTE *)_R11 + 181);
      VLDR            S4, =0.0625
      VMOV            S2, R0
      VMOV            S0, R1
      VCVT.F32.U32    S0, S0
      VCVT.F32.U32    S2, S2
      VMUL.F32        S0, S0, S4
      VMUL.F32        S2, S2, S4
      VSTR            S0, [SP,#0x138+var_B4]
      VSTR            S2, [SP,#0x138+var_B0]
    if ( !*((_BYTE *)_R11 + 48) )
      Tessellator::tex1((int)v9, (__int64 *)&v96);
      VMOV            R8, S29
      VMOV            R6, S27
      VMOV            R9, S25
    Tessellator::vertexUV(v9, _R8, _R6, _R9, v69, v73);
      VMOV.F32        S4, #1.0
      VLDR            S14, [SP,#0x138+var_110]
      VLDR            S3, [SP,#0x138+var_104]
      VMUL.F32        S6, S0, S28
      VLDR            S7, [SP,#0x138+var_10C]
      VMUL.F32        S10, S0, S26
      VLDR            S11, [SP,#0x138+var_11C]
      VMUL.F32        S14, S0, S14
      VLDR            S1, [SP,#0x138+var_118]
      VMUL.F32        S3, S0, S3
      VLDR            S5, [SP,#0x138+var_100]
      VMUL.F32        S7, S0, S7
      VMOV.F32        S25, S4
      VLDR            S9, [SP,#0x138+var_114]
      VLDR            S21, [SP,#0x138+var_108]
      VMUL.F32        S11, S0, S11
      VMUL.F32        S15, S0, S18
      VLDR            S2, [R11,#0x2E4]
      VSUB.F32        S4, S25, S0
      VSUB.F32        S23, S25, S2
      VMUL.F32        S8, S4, S31
      VMUL.F32        S12, S4, S30
      VMUL.F32        S1, S4, S1
      VMUL.F32        S5, S4, S5
      VMUL.F32        S9, S4, S9
      VMUL.F32        S13, S4, S24
      VMUL.F32        S21, S4, S21
      VMUL.F32        S4, S4, S19
      VADD.F32        S6, S8, S6
      VADD.F32        S8, S12, S10
      VADD.F32        S10, S1, S14
      VADD.F32        S12, S5, S3
      VADD.F32        S14, S9, S7
      VADD.F32        S1, S13, S11
      VADD.F32        S0, S4, S0
      VADD.F32        S3, S21, S15
      VMUL.F32        S4, S6, S23
      VMUL.F32        S6, S8, S2
      VMUL.F32        S8, S10, S23
      VMUL.F32        S10, S12, S2
      VMUL.F32        S12, S14, S23
      VMUL.F32        S14, S1, S2
      VMUL.F32        S0, S0, S2
      VMUL.F32        S1, S3, S23
      VADD.F32        S2, S6, S4
      VADD.F32        S4, S10, S8
      VADD.F32        S6, S14, S12
      VADD.F32        S0, S0, S1
      VSTR            S2, [SP,#0x138+var_C4]
      VSTR            S4, [SP,#0x138+var_C0]
      VSTR            S6, [SP,#0x138+var_BC]
      VSTR            S0, [SP,#0x138+var_B8]
    Tessellator::color(v9, (const Color *)&v95);
    _R0 = *((_BYTE *)_R11 + 186);
    _R1 = *((_BYTE *)_R11 + 187);
      VMOV.F32        S27, S4
      VSTR            S0, [SP,#0x138+var_CC]
      VSTR            S2, [SP,#0x138+var_C8]
      Tessellator::tex1((int)v9, (__int64 *)&v94);
    Tessellator::vertexUV(v9, _R7, _R6, _R9, v70, v74);
      VLDR            S2, [R11,#0x2E0]
      VMOV.F32        S23, S25
      VSUB.F32        S4, S25, S2
      VMUL.F32        S6, S2, S28
      VMUL.F32        S10, S2, S26
      VMUL.F32        S7, S2, S7
      VLDR            S22, [SP,#0x138+var_108]
      VMUL.F32        S15, S2, S18
      VLDR            S0, [R11,#0x2D8]
      VMUL.F32        S11, S2, S11
      VMUL.F32        S22, S4, S22
      VMUL.F32        S2, S2, S17
      VSUB.F32        S21, S25, S0
      VADD.F32        S2, S4, S2
      VADD.F32        S3, S22, S15
      VMUL.F32        S4, S6, S21
      VMUL.F32        S6, S8, S0
      VMUL.F32        S8, S10, S21
      VMUL.F32        S10, S12, S0
      VMUL.F32        S12, S14, S21
      VMUL.F32        S14, S1, S0
      VMUL.F32        S0, S2, S0
      VMUL.F32        S1, S3, S21
      VSTR            S2, [SP,#0x138+var_DC]
      VSTR            S4, [SP,#0x138+var_D8]
      VSTR            S6, [SP,#0x138+var_D4]
      VSTR            S0, [SP,#0x138+var_D0]
    Tessellator::color(v9, (const Color *)&v93);
    _R0 = *((_BYTE *)_R11 + 184);
    __asm { VMOV.F32        S22, S27 }
    _R1 = *((_BYTE *)_R11 + 185);
      VMUL.F32        S0, S0, S27
      VMUL.F32        S2, S2, S27
      VSTR            S0, [SP,#0x138+var_E4]
      VSTR            S2, [SP,#0x138+var_E0]
      Tessellator::tex1((int)v9, (__int64 *)&v92);
      VMOV            R6, S0
    Tessellator::vertexUV(v9, _R7, _R6, _R9, v71, v75);
      VSUB.F32        S4, S23, S0
      VLDR            S18, [SP,#0x138+var_108]
      VLDR            S2, [R11,#0x2D8]
      VMUL.F32        S18, S4, S18
      VSUB.F32        S20, S23, S2
      VADD.F32        S3, S18, S15
      VMUL.F32        S4, S6, S20
      VMUL.F32        S8, S10, S20
      VMUL.F32        S12, S14, S20
      VMUL.F32        S1, S3, S20
      VSTR            S2, [SP,#0x138+var_F4]
      VSTR            S4, [SP,#0x138+var_F0]
      VSTR            S6, [SP,#0x138+var_EC]
      VSTR            S0, [SP,#0x138+var_E8]
    Tessellator::color(v9, (const Color *)&v91);
    _R0 = *((_BYTE *)_R11 + 182);
    _R1 = *((_BYTE *)_R11 + 183);
      VMUL.F32        S0, S0, S22
      VMUL.F32        S2, S2, S22
      VSTR            S0, [SP,#0x138+var_FC]
      VSTR            S2, [SP,#0x138+var_F8]
      Tessellator::tex1((int)v9, (__int64 *)&v90);
    Tessellator::vertexUV(v9, _R8, _R6, _R9, v72, v76);
  v66 = (void *)(v105 - 12);
  if ( (int *)(v105 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v105 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
    else
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v66);
}


signed int __fastcall BlockTessellator::tessellateEndRodWest(BlockTessellator *this, Tessellator *a2, const BlockPos *a3, const TextureUVCoordinateSet *a4)
{
  const BlockPos *v5; // r7@1
  TextureUVCoordinateSet *v6; // r5@1
  Tessellator *v7; // r10@1
  const TextureUVCoordinateSet *v8; // ST40_4@1
  const BlockPos *v9; // ST28_4@1
  BlockTessellator *v10; // ST24_4@1
  AABB *v11; // ST2C_4@1
  float v16; // ST34_4@1
  float v17; // ST18_4@1
  float v18; // ST3C_4@1
  int v19; // r8@1
  int v20; // r0@1
  float v21; // r11@1
  float v22; // ST14_4@1
  int v23; // r0@1
  float v24; // r4@1
  float v25; // ST10_4@1
  int v26; // r0@1
  float v27; // r7@1
  float v28; // ST30_4@1
  int v29; // r0@1
  float v30; // ST1C_4@1
  float v31; // ST00_4@1
  float v35; // ST20_4@1
  float v36; // ST4C_4@1
  float v37; // ST44_4@1
  float v38; // r7@1
  float v39; // r6@1
  float v40; // ST04_4@1
  float v42; // ST48_4@1
  float v43; // r4@1
  float v45; // ST38_4@1
  float v46; // ST00_4@1
  float v48; // ST3C_4@1
  float v49; // ST34_4@1
  int v50; // r0@1
  float v51; // r7@1
  float v52; // ST10_4@1
  float v53; // ST30_4@1
  float v54; // ST14_4@1
  int v55; // r0@1
  float v56; // r4@1
  float v57; // ST1C_4@1
  int v58; // r0@1
  float v59; // r6@1
  float v60; // ST18_4@1
  int v61; // r8@1
  float v62; // ST0C_4@1
  int v63; // r9@1
  int v64; // r0@1
  float v65; // r4@1
  float v66; // ST10_4@1
  int v67; // r0@1
  float v68; // r6@1
  float v69; // ST1C_4@1
  int v70; // r0@1
  float v71; // r7@1
  float v72; // ST18_4@1
  float v73; // ST34_4@1
  float v74; // ST30_4@1
  float v75; // ST14_4@1
  int v76; // r0@1
  float v77; // r5@1
  float v78; // ST0C_4@1
  int v80; // r0@1
  float v81; // r8@1
  float v82; // ST18_4@1
  float v83; // ST38_4@1
  float v84; // ST24_4@1
  float v85; // ST30_4@1
  int v86; // r0@1
  float v87; // r11@1
  float v88; // ST20_4@1
  int v89; // r0@1
  float v90; // r9@1
  float v91; // ST1C_4@1
  int v92; // r0@1
  float v93; // r7@1
  float v94; // ST2C_4@1
  int v95; // r0@1
  float v96; // ST28_4@1
  float v97; // ST00_4@1
  float v101; // ST48_4@1
  float v102; // ST4C_4@1
  float v103; // ST34_4@1
  float v104; // r7@1
  float v105; // r6@1
  float v106; // ST00_4@1
  float v108; // ST44_4@1
  float v110; // ST3C_4@1
  float v112; // ST38_4@1
  int v113; // r0@1
  float v114; // r9@1
  float v115; // ST1C_4@1
  float v116; // ST2C_4@1
  float v117; // ST28_4@1
  int v118; // r0@1
  float v119; // r11@1
  float v120; // ST24_4@1
  int v121; // r0@1
  float v122; // r4@1
  float v123; // ST20_4@1
  float v124; // ST18_4@1
  float v125; // ST14_4@1
  int v126; // r9@1
  float v127; // ST28_4@1
  int v128; // r0@1
  float v129; // r4@1
  float v130; // ST38_4@1
  int v131; // r0@1
  float v132; // r6@1
  float v133; // ST2C_4@1
  float v134; // ST24_4@1
  int v135; // r0@1
  float v136; // r11@1
  float v137; // ST1C_4@1
  float v138; // ST20_4@1
  TextureUVCoordinateSet *v139; // ST40_4@1
  float v141; // [sp+50h] [bp-C8h]@1
  float v144; // [sp+5Ch] [bp-BCh]@1
  float v147; // [sp+68h] [bp-B0h]@1
  float v150; // [sp+74h] [bp-A4h]@1
  int v153; // [sp+80h] [bp-98h]@1
  signed int v154; // [sp+84h] [bp-94h]@1
  signed int v155; // [sp+88h] [bp-90h]@1
  int v156; // [sp+8Ch] [bp-8Ch]@1
  signed int v157; // [sp+90h] [bp-88h]@1
  signed int v158; // [sp+94h] [bp-84h]@1
  int v159; // [sp+98h] [bp-80h]@1
  signed int v160; // [sp+9Ch] [bp-7Ch]@1
  signed int v161; // [sp+A0h] [bp-78h]@1
  int v162; // [sp+A4h] [bp-74h]@1
  signed int v163; // [sp+A8h] [bp-70h]@1
  signed int v164; // [sp+ACh] [bp-6Ch]@1

  _R6 = this;
  v5 = a3;
  v6 = a4;
  v7 = a2;
  v162 = 0;
  v8 = a4;
  v9 = a3;
  v10 = this;
  v163 = 1052770304;
  v164 = 1052770304;
  v159 = 1031798784;
  v160 = 1059061760;
  v161 = 1059061760;
  v156 = 1031798784;
  v157 = 1054867456;
  v158 = 1054867456;
  v153 = 1065353216;
  v154 = 1058013184;
  v155 = 1058013184;
  v11 = (BlockTessellator *)((char *)this + 724);
  AABB::set((BlockTessellator *)((char *)this + 724), (const Vec3 *)&v162, (const Vec3 *)&v159);
  Vec3::Vec3((int)&v150, (int)v5);
  __asm
  {
    VLDR            S20, [R6,#0x2D4]
    VLDR            S16, [R6,#0x2D8]
    VLDR            S24, [R6,#0x2DC]
    VLDR            S22, [SP,#0x118+var_A4]
    VLDR            S18, [SP,#0x118+var_A0]
    VLDR            S26, [SP,#0x118+var_9C]
  }
  Vec3::Vec3((int)&v147, (int)v5);
    VLDR            S28, [R6,#0x2E0]
    VLDR            S30, [R6,#0x2E4]
    VLDR            S17, [R6,#0x2E8]
    VLDR            S19, [SP,#0x118+var_B0]
    VLDR            S21, [SP,#0x118+var_AC]
    VLDR            S23, [SP,#0x118+var_A8]
  v16 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v6, 0.375, 0.0));
  v17 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v6, 0.375, 0.0));
  v18 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v6, 0.375, 0.0));
  v19 = TextureUVCoordinateSet::offsetHeight(v6, 0.4375, 0.0);
  *(float *)&v20 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v6, 0.125, 0.0));
  v21 = *(float *)&v20;
  v22 = *(float *)&v20;
  *(float *)&v23 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v6, 0.375, 0.0));
  v24 = *(float *)&v23;
  v25 = *(float *)&v23;
  *(float *)&v26 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v6, 0.125, 0.0));
  v27 = *(float *)&v26;
  v28 = *(float *)&v26;
  *(float *)&v29 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v6, 0.4375, 0.0));
  __asm { VADD.F32        S4, S17, S23 }
  v30 = *(float *)&v29;
  __asm { VADD.F32        S0, S28, S19 }
  v31 = v27;
    VADD.F32        S2, S30, S21
    VMOV            R9, S4
    VMOV            R1, S0
    VMOV            R2, S2
  v35 = _R9;
  v36 = _R1;
  v37 = _R2;
  v38 = _R1;
  v39 = _R2;
  Tessellator::vertexUV(v7, _R1, _R2, _R9, v31, *(float *)&v29);
  __asm { VADD.F32        S0, S24, S26 }
  v40 = v24;
  __asm { VMOV            R3, S0 }
  v42 = _R3;
  v43 = _R3;
  Tessellator::vertexUV(v7, v38, v39, _R3, v21, v40);
    VADD.F32        S0, S20, S22
    VMOV            R7, S0
  v45 = _R7;
  Tessellator::vertexUV(v7, _R7, v39, v43, v16, v17);
  Tessellator::vertexUV(v7, _R7, v39, _R9, v18, *(float *)&v19);
  __asm { VADD.F32        S0, S16, S18 }
  v46 = v18;
  __asm { VMOV            R4, S0 }
  v48 = _R4;
  Tessellator::vertexUV(v7, _R7, _R4, _R9, v46, *(float *)&v19);
  Tessellator::vertexUV(v7, _R7, _R4, v42, v16, v17);
  Tessellator::vertexUV(v7, v36, _R4, v42, v22, v25);
  Tessellator::vertexUV(v7, v36, _R4, _R9, v28, v30);
  v49 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v6, 0.125, 0.0));
  *(float *)&v50 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v6, 0.125, 0.0));
  v51 = *(float *)&v50;
  v52 = *(float *)&v50;
  v53 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v6, 0.375, 0.0));
  v54 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v6, 0.125, 0.0));
  *(float *)&v55 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v6, 0.125, 0.0));
  v56 = *(float *)&v55;
  v57 = *(float *)&v55;
  *(float *)&v58 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v6, 0.375, 0.0));
  v59 = *(float *)&v58;
  v60 = *(float *)&v58;
  v61 = TextureUVCoordinateSet::offsetWidth(v6, 0.375, 0.0);
  v62 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v6, 0.375, 0.0));
  Tessellator::vertexUV(v7, v45, v37, _R9, v56, v59);
  Tessellator::vertexUV(v7, v45, v37, v42, v49, v51);
  Tessellator::vertexUV(v7, v45, v48, v42, v53, v54);
  Tessellator::vertexUV(v7, v45, v48, _R9, *(float *)&v61, v62);
  Tessellator::vertexUV(v7, v36, v48, _R9, *(float *)&v61, v62);
  Tessellator::vertexUV(v7, v36, v48, v42, v53, v54);
  Tessellator::vertexUV(v7, v36, v37, v42, v49, v52);
  Tessellator::vertexUV(v7, v36, v37, _R9, v57, v60);
  v63 = TextureUVCoordinateSet::offsetWidth(v8, 0.375, 0.0);
  *(float *)&v64 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v8, 0.375, 0.0));
  v65 = *(float *)&v64;
  v66 = *(float *)&v64;
  *(float *)&v67 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v8, 0.375, 0.0));
  v68 = *(float *)&v67;
  v69 = *(float *)&v67;
  *(float *)&v70 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v8, 0.4375, 0.0));
  v71 = *(float *)&v70;
  v72 = *(float *)&v70;
  v73 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v8, 0.125, 0.0));
  v74 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v8, 0.375, 0.0));
  v75 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v8, 0.125, 0.0));
  *(float *)&v76 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v8, 0.4375, 0.0));
  v77 = *(float *)&v76;
  v78 = *(float *)&v76;
  Tessellator::vertexUV(v7, v45, v37, v42, v68, v71);
  Tessellator::vertexUV(v7, v36, v37, v42, *(float *)&v63, v65);
  Tessellator::vertexUV(v7, v36, v48, v42, v73, v74);
  Tessellator::vertexUV(v7, v45, v48, v42, v75, v77);
  Tessellator::vertexUV(v7, v45, v37, v35, *(float *)&v63, v66);
  Tessellator::vertexUV(v7, v45, v48, v35, v73, v74);
  Tessellator::vertexUV(v7, v36, v48, v35, v75, v78);
  Tessellator::vertexUV(v7, v36, v37, v35, v69, v72);
  AABB::set(v11, (const Vec3 *)&v156, (const Vec3 *)&v153);
  Vec3::Vec3((int)&v144, (int)v9);
  _R6 = v10;
    VLDR            S22, [SP,#0x118+var_BC]
    VLDR            S18, [SP,#0x118+var_B8]
    VLDR            S26, [SP,#0x118+var_B4]
  Vec3::Vec3((int)&v141, (int)v9);
    VLDR            S19, [SP,#0x118+var_C8]
    VLDR            S21, [SP,#0x118+var_C4]
    VLDR            S23, [SP,#0x118+var_C0]
  *(float *)&v80 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v8, 0.0, 0.0));
  v81 = *(float *)&v80;
  v82 = *(float *)&v80;
  v83 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v8, 0.0, 0.0));
  v84 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v8, 0.125, 0.0));
  v85 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v8, 0.0, 0.0));
  *(float *)&v86 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v8, 0.0, 0.0));
  v87 = *(float *)&v86;
  v88 = *(float *)&v86;
  *(float *)&v89 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v8, 0.9375, 0.0));
  v90 = *(float *)&v89;
  v91 = *(float *)&v89;
  *(float *)&v92 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v8, 0.125, 0.0));
  v93 = *(float *)&v92;
  v94 = *(float *)&v92;
  *(float *)&v95 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v8, 0.9375, 0.0));
    VADD.F32        S0, S28, S19
  v96 = *(float *)&v95;
  v97 = v93;
    VMOV            R4, S0
    VMOV            R3, S4
  v101 = _R4;
  v102 = _R2;
  v103 = _R3;
  v104 = _R2;
  v105 = _R3;
  Tessellator::vertexUV(v7, _R4, _R2, _R3, v97, *(float *)&v95);
  v106 = v87;
  __asm { VMOV            R11, S0 }
  v108 = _R11;
  Tessellator::vertexUV(v7, _R4, v104, _R11, v106, v90);
  v110 = _R4;
  Tessellator::vertexUV(v7, _R4, v104, _R11, v81, v83);
  Tessellator::vertexUV(v7, _R4, v104, v105, v84, v85);
    VADD.F32        S0, S16, S18
  Tessellator::vertexUV(v7, _R4, _R7, v105, v84, v85);
  Tessellator::vertexUV(v7, _R4, _R7, _R11, v82, v83);
  Tessellator::vertexUV(v7, v101, _R7, _R11, v88, v91);
  Tessellator::vertexUV(v7, v101, _R7, v105, v94, v96);
  v112 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v8, 0.125, 0.0));
  *(float *)&v113 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v8, 0.0, 0.0));
  v114 = *(float *)&v113;
  v115 = *(float *)&v113;
  v116 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v8, 0.25, 0.0));
  v117 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v8, 0.0, 0.0));
  *(float *)&v118 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v8, 0.125, 0.0));
  v119 = *(float *)&v118;
  v120 = *(float *)&v118;
  *(float *)&v121 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v8, 0.125, 0.0));
  v122 = *(float *)&v121;
  v123 = *(float *)&v121;
  v124 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v8, 0.25, 0.0));
  v125 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v8, 0.125, 0.0));
  Tessellator::vertexUV(v7, v101, _R7, v103, v119, v122);
  Tessellator::vertexUV(v7, v101, _R7, v108, v112, v114);
  Tessellator::vertexUV(v7, v101, v102, v108, v116, v117);
  Tessellator::vertexUV(v7, v101, v102, v103, v124, v125);
  Tessellator::vertexUV(v7, v110, v102, v103, v124, v125);
  Tessellator::vertexUV(v7, v110, v102, v108, v116, v117);
  Tessellator::vertexUV(v7, v110, _R7, v108, v112, v115);
  Tessellator::vertexUV(v7, v110, _R7, v103, v120, v123);
  v126 = TextureUVCoordinateSet::offsetWidth(v8, 0.125, 0.0);
  v127 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v8, 0.0, 0.0));
  *(float *)&v128 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v8, 0.125, 0.0));
  v129 = *(float *)&v128;
  v130 = *(float *)&v128;
  *(float *)&v131 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v8, 0.9375, 0.0));
  v132 = *(float *)&v131;
  v133 = *(float *)&v131;
  v134 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v8, 0.0, 0.0));
  *(float *)&v135 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v8, 0.0, 0.0));
  v136 = *(float *)&v135;
  v137 = *(float *)&v135;
  v138 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v8, 0.0, 0.0));
  v139 = (TextureUVCoordinateSet *)TextureUVCoordinateSet::offsetHeight(v8, 0.9375, 0.0);
  Tessellator::vertexUV(v7, v110, v102, v108, v129, v132);
  Tessellator::vertexUV(v7, v101, v102, v108, *(float *)&v126, v127);
  Tessellator::vertexUV(v7, v101, _R7, v108, v134, v136);
  Tessellator::vertexUV(v7, v110, _R7, v108, v138, *(float *)&v139);
  Tessellator::vertexUV(v7, v110, v102, v103, *(float *)&v126, v127);
  Tessellator::vertexUV(v7, v110, _R7, v103, v134, v137);
  Tessellator::vertexUV(v7, v101, _R7, v103, v138, *(float *)&v139);
  return Tessellator::vertexUV(v7, v101, v102, v103, v130, v133);
}


int __fastcall BlockTessellator::_setShapeAndTessellate(BlockTessellator *this, Tessellator *a2, const Vec3 *a3, const Vec3 *a4, const Block *a5, const BlockPos *a6, int a7)
{
  BlockTessellator *v7; // r5@1
  Tessellator *v8; // r4@1

  v7 = this;
  v8 = a2;
  AABB::set((BlockTessellator *)((char *)this + 724), a3, a4);
  return BlockTessellator::tessellateBlockInWorld(v7, v8, a5, a6, a7);
}


signed int __fastcall BlockTessellator::tessellateCommandBlockInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  BlockTessellator *v5; // r5@1
  signed int v6; // r0@2
  signed int v7; // r0@7
  signed int v8; // r4@7

  v5 = this;
  switch ( a5 & 7 )
  {
    case 0:
      v6 = 3;
      *((_DWORD *)v5 + 49) = 3;
      *((_DWORD *)v5 + 50) = 3;
      goto LABEL_6;
    case 1:
      *((_DWORD *)this + 47) = 2;
      *((_DWORD *)this + 48) = 1;
      break;
    case 2:
      v6 = 2;
    case 3:
      *((_DWORD *)this + 47) = 3;
      *((_DWORD *)this + 48) = 3;
      v6 = 1;
LABEL_6:
      *((_DWORD *)v5 + 51) = v6;
      *((_DWORD *)v5 + 52) = v6;
    case 4:
      v7 = 2;
      v8 = 1;
      goto LABEL_9;
    case 5:
      v7 = 1;
      v8 = 2;
LABEL_9:
      *((_DWORD *)v5 + 47) = v8;
      *((_DWORD *)v5 + 48) = v7;
      *((_DWORD *)v5 + 49) = v7;
      *((_DWORD *)v5 + 50) = v7;
    default:
  }
  BlockTessellator::tessellateBlockInWorld(v5, a2, a3, a4, a5);
  *((_BYTE *)v5 + 40) = 0;
  return 1;
}


signed int __fastcall BlockTessellator::tessellateLadderInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  BlockTessellator *v5; // r7@1
  Tessellator *v7; // r4@1
  int v11; // r0@6
  float v27; // ST00_4@11
  float v28; // ST04_4@11
  float v33; // ST00_4@11
  float v34; // ST04_4@11
  float v49; // ST00_4@12
  float v50; // ST04_4@12
  float v55; // ST00_4@12
  float v56; // ST04_4@12
  float v68; // ST00_4@13
  float v69; // ST04_4@13
  float v75; // ST00_4@13
  float v76; // ST04_4@13
  float v85; // ST00_4@15
  float v86; // ST04_4@15
  float v90; // ST00_4@15
  float v91; // ST04_4@15
  float v94; // [sp+0h] [bp-58h]@0
  float v95; // [sp+0h] [bp-58h]@11
  float v96; // [sp+4h] [bp-54h]@0
  float v97; // [sp+4h] [bp-54h]@11
  unsigned __int8 v98; // [sp+Ch] [bp-4Ch]@5
  unsigned __int8 v99; // [sp+Dh] [bp-4Bh]@5
  float v100; // [sp+10h] [bp-48h]@9

  v5 = this;
  _R5 = a4;
  v7 = a2;
  if ( *((_BYTE *)this + 40) )
    _R6 = (char *)this + 8;
  else
    _R6 = (char *)BlockGraphics::getTexture((BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)a3 + 4)], a4, 0, 0);
  if ( *((_BYTE *)v5 + 48) )
  {
    _R1 = (unsigned __int8)Brightness::MAX;
    v98 = Brightness::MAX;
    v99 = Brightness::MAX;
    _R2 = (unsigned __int8)Brightness::MAX;
  }
    BlockTessellatorCache::getLightColor(
      (BlockTessellatorCache *)&v98,
      (BlockTessellator *)((char *)v5 + 812),
      (int)_R5);
    _R1 = v98;
    _R2 = v99;
    v11 = *((_BYTE *)v5 + 48);
  __asm
    VMOV            S0, R2
    VLDR            S4, =0.0625
    VMOV            S2, R1
    VCVT.F32.U32    S0, S0
    VCVT.F32.U32    S2, S2
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S4
    VSTR            S0, [SP,#0x58+var_48]
    VSTR            S2, [SP,#0x58+var_44]
  if ( _ZF )
    Tessellator::tex1((int)v7, (__int64 *)&v100);
  Tessellator::color(v7, (const Color *)&Color::WHITE);
    VLDR            S20, [R6,#4]
    VLDR            S16, [R6,#8]
    VLDR            S22, [R6,#0xC]
    VLDR            S18, [R6,#0x10]
  switch ( a5 )
    case 2:
      _R2 = *((_DWORD *)_R5 + 2) + 1;
      _R0 = *(_DWORD *)_R5 + 1;
      __asm
      {
        VLDR            S24, =-0.05
        VMOV            S0, R2
        VMOV            S2, R0
      }
      _R0 = *((_DWORD *)_R5 + 1) + 1;
        VCVT.F32.S32    S0, S0
        VMOV            S4, R0
        VCVT.F32.S32    S2, S2
        VCVT.F32.S32    S4, S4
        VSTR            S20, [SP,#0x58+var_58]
        VSTR            S16, [SP,#0x58+var_54]
        VADD.F32        S0, S0, S24
        VMOV            R1, S2
        VMOV            R2, S4
        VMOV            R3, S0
      Tessellator::vertexUV(v7, _R1, _R2, _R3, v94, v96);
      _R0 = *((_DWORD *)_R5 + 2) + 1;
        VMOV            S0, R0
        VLDR            S2, [R5,#4]
        VSTR            S18, [SP,#0x58+var_54]
        VMOV            R2, S2
        VMOV            R1, S4
      Tessellator::vertexUV(v7, _R1, _R2, _R3, v27, v28);
        VLDR            S2, [R5]
        VLDR            S4, [R5,#4]
        VSTR            S22, [SP,#0x58+var_58]
      Tessellator::vertexUV(v7, _R1, _R2, _R3, v33, v34);
      goto LABEL_16;
    case 3:
        VLDR            S0, [R5,#8]; jumptable 00EA1776 case 3
        VLDR            S24, =0.05
        VLDR            S0, [R5,#8]
      _R0 = *(_QWORD *)_R5 + 1;
      __asm { VMOV            S2, R0 }
      _R0 = (*(_QWORD *)_R5 >> 32) + 1;
      Tessellator::vertexUV(v7, _R1, _R2, _R3, v49, v50);
        VLDR            S2, [R5,#8]
        VLDR            S0, [R5]
        VADD.F32        S2, S2, S24
        VMOV            R1, S0
        VMOV            R3, S2
      Tessellator::vertexUV(v7, _R1, _R2, _R3, v55, v56);
        VLDR            S4, [R5,#8]
        VADD.F32        S4, S4, S24
        VMOV            R3, S4
      goto LABEL_14;
    case 4:
      __asm { VLDR            S24, =-0.05 }
      __asm { VMOV            S0, R0 }
      Tessellator::vertexUV(v7, _R1, _R2, _R3, v68, v69);
      Tessellator::vertexUV(v7, _R1, _R2, _R3, v75, v76);
LABEL_14:
      goto LABEL_17;
    case 5:
        VLDR            S0, [R5]; jumptable 00EA1776 case 5
      _R0 = *(_QWORD *)((char *)_R5 + 4);
      LODWORD(_R0) = _R0 + 1;
      LODWORD(_R0) = HIDWORD(_R0) + 1;
      Tessellator::vertexUV(v7, *((float *)&_R0 + 1), _R2, _R3, v94, v96);
      Tessellator::vertexUV(v7, _R1, _R2, _R3, v85, v86);
      Tessellator::vertexUV(v7, _R1, _R2, _R3, v90, v91);
LABEL_16:
LABEL_17:
      Tessellator::vertexUV(v7, _R1, _R2, _R3, v95, v97);
      break;
    default:
      return 1;
  return 1;
}


signed int __fastcall BlockTessellator::_getLightColorForWater(int a1, int a2, const BlockPos *a3, int a4)
{
  int v4; // r5@1
  const BlockPos *v5; // r6@1
  const BlockPos *v6; // r8@1
  int v7; // r4@1
  int v8; // r7@1
  int v9; // r0@1
  signed int result; // r0@3

  v4 = a2;
  v5 = (const BlockPos *)(a2 + 812);
  v6 = a3;
  v7 = a1;
  v8 = a4;
  v9 = BlockTessellatorCache::getBlock((BlockTessellatorCache *)(a2 + 812), a3);
  __asm { VMOV.F32        S0, #0.5 }
  _R0 = &Block::mTranslucency[*(_BYTE *)(v9 + 4)];
  __asm
  {
    VLDR            S2, [R0]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    *(_BYTE *)v7 = *(_BYTE *)v8;
    result = *(_BYTE *)(v8 + 1);
    *(_BYTE *)(v7 + 1) = result;
  else if ( *(_BYTE *)(v4 + 48) )
    result = (unsigned __int8)Brightness::MAX;
    *(_BYTE *)v7 = Brightness::MAX;
  else
    result = BlockTessellatorCache::getLightColor((BlockTessellatorCache *)v7, v5, (int)v6);
  return result;
}


signed int __fastcall BlockTessellator::tessellateDoublePlantInWorld(BlockTessellator *this, Tessellator *a2, const DoublePlantBlock *a3, const BlockPos *a4, unsigned __int8 a5, int a6, int a7)
{
  BlockTessellator *v7; // r7@1
  const BlockPos *v8; // r8@1
  const Block *v9; // r6@1
  Tessellator *v10; // r5@1
  BlockGraphics *v11; // r9@1
  int v22; // r0@5
  BlockState *v23; // r0@9
  int v24; // r4@9
  int v25; // r10@9
  const TextureUVCoordinateSet *v26; // r11@9
  int v27; // r1@10
  int v28; // r2@10
  float v29; // r1@14
  signed int v30; // r0@16
  int v34; // r10@19
  signed int v35; // r4@19
  int v36; // r8@19
  float v38; // ST04_4@19
  bool v39; // ST1C_1@19
  const Block *v41; // [sp+4h] [bp-D4h]@0
  float v42; // [sp+4h] [bp-D4h]@14
  float v43; // [sp+8h] [bp-D0h]@0
  bool v44; // [sp+1Ch] [bp-BCh]@0
  Tessellator *v45; // [sp+20h] [bp-B8h]@4
  int v46; // [sp+24h] [bp-B4h]@19
  int v47; // [sp+28h] [bp-B0h]@19
  int v48; // [sp+2Ch] [bp-ACh]@19
  float v49; // [sp+30h] [bp-A8h]@19
  float v50; // [sp+34h] [bp-A4h]@19
  int v51; // [sp+3Ch] [bp-9Ch]@19
  int v52; // [sp+40h] [bp-98h]@19
  int v53; // [sp+44h] [bp-94h]@19
  float v54; // [sp+48h] [bp-90h]@19
  float v55; // [sp+4Ch] [bp-8Ch]@19
  int v56; // [sp+54h] [bp-84h]@12
  float v57; // [sp+58h] [bp-80h]@12
  int v58; // [sp+5Ch] [bp-7Ch]@12
  int v59; // [sp+60h] [bp-78h]@11
  int v61; // [sp+68h] [bp-70h]@11
  int v62; // [sp+6Ch] [bp-6Ch]@10
  int v63; // [sp+70h] [bp-68h]@10
  int v64; // [sp+74h] [bp-64h]@10
  int v65; // [sp+78h] [bp-60h]@9
  float v66; // [sp+7Ch] [bp-5Ch]@9
  int v67; // [sp+80h] [bp-58h]@9
  int v68; // [sp+84h] [bp-54h]@11
  unsigned __int8 v69; // [sp+88h] [bp-50h]@4
  unsigned __int8 v70; // [sp+89h] [bp-4Fh]@4
  float v71; // [sp+8Ch] [bp-4Ch]@8
  float v72; // [sp+94h] [bp-44h]@3
  float v73; // [sp+9Ch] [bp-3Ch]@2
  float v74; // [sp+A0h] [bp-38h]@3
  unsigned __int8 v75; // [sp+A7h] [bp-31h]@1

  v7 = this;
  v8 = a4;
  v9 = a3;
  v75 = a5;
  v10 = a2;
  v11 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)a3 + 4)];
  _R0 = (*(int (__fastcall **)(const Block *, _DWORD, const BlockPos *))(*(_DWORD *)v9 + 392))(
          v9,
          *((_DWORD *)this + 1),
          a4);
  _R1 = (unsigned __int16)_R0 >> 8;
  _R2 = (_R0 >> 16) & 0xFF;
  __asm
  {
    VLDR            S8, =0.0039216
    VMOV            S0, R2
  }
  _R2 = (unsigned __int8)_R0;
  _R0 >>= 24;
    VMOV            S4, R2
    VMOV            S2, R1
    VMOV            S6, R0
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VCVT.F32.S32    S6, S6
    VMUL.F32        S0, S0, S8
    VMUL.F32        S2, S2, S8
    VMUL.F32        S4, S4, S8
    VMUL.F32        S6, S6, S8
    VSTR            S0, [SP,#0xD8+var_44]
    VSTR            S2, [SP,#0xD8+var_40]
    VSTR            S4, [SP,#0xD8+var_3C]
    VSTR            S6, [SP,#0xD8+var_38]
  if ( (*(int (__fastcall **)(const Block *, _DWORD, const BlockPos *))(*(_DWORD *)v9 + 400))(
         v9,
         *((_DWORD *)v7 + 1),
         v8) == 1 )
    v73 = 1.0;
  v74 = 1.0;
  Tessellator::color(v10, (const Color *)&v72);
  if ( *((_BYTE *)v7 + 48) )
    v45 = v10;
    _R1 = (unsigned __int8)Brightness::MAX;
    v69 = Brightness::MAX;
    v70 = Brightness::MAX;
    _R2 = (unsigned __int8)Brightness::MAX;
  else
    BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v69, (BlockTessellator *)((char *)v7 + 812), (int)v8);
    _R1 = v69;
    _R2 = v70;
    v22 = *((_BYTE *)v7 + 48);
    VLDR            S4, =0.0625
    VCVT.F32.U32    S0, S0
    VCVT.F32.U32    S2, S2
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S4
    VSTR            S0, [SP,#0xD8+var_4C]
    VSTR            S2, [SP,#0xD8+var_48]
  if ( _ZF )
    Tessellator::tex1((int)v45, (__int64 *)&v71);
  v23 = (BlockState *)Block::getBlockState(Block::mDoublePlant, 11);
  v24 = BlockState::getBool(v23, &v75);
  v25 = DoublePlantBlock::getType((DoublePlantBlock *)Block::mDoublePlant, *((BlockSource **)v7 + 1), v8);
  v26 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v11, v8, v24, v25);
  v65 = 0;
  v66 = 0.0;
  v67 = 0;
  if ( v24 == 1 )
    v27 = *((_DWORD *)v8 + 1);
    v28 = *((_DWORD *)v8 + 2);
    v62 = *(_DWORD *)v8;
    v63 = v27 - 1;
    v64 = v28;
    if ( *(_BYTE *)(BlockSource::getBlock(*((BlockSource **)v7 + 1), (const BlockPos *)&v62) + 4) != *((_BYTE *)v9 + 4) )
      return 0;
    (*(void (__fastcall **)(int *, const Block *, int *, int *))(*(_DWORD *)v9 + 20))(&v59, v9, &v62, &v68);
    __asm
    {
      VMOV.F32        S0, #1.0
      VLDR            S2, [SP,#0xD8+var_74]
    }
    v65 = v59;
    v67 = v61;
      VADD.F32        S0, S2, S0
      VSTR            S0, [SP,#0xD8+var_5C]
    (*(void (__fastcall **)(int *, const Block *, const BlockPos *, int *))(*(_DWORD *)v9 + 20))(&v56, v9, v8, &v68);
    v65 = v56;
    v66 = v57;
    v67 = v58;
  if ( a6 == 1 )
    BlockTessellator::tessellateCrossPolyTexture(v7, v45, v26, (const Vec3 *)&v65, a7, v41);
    BlockTessellator::tessellateCrossTexture(v7, v45, v26, (const Vec3 *)&v65, a7, v9, v43);
  v30 = 0;
  if ( !v25 )
    v30 = 1;
  if ( (v30 & v24) == 1 )
    _R0 = v68;
      VLDR            S2, =0.8
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VMUL.F32        S0, S0, S2
      VMOV            R0, S0
    _R7 = mce::Math::cos(_R0, v29);
    v34 = BlockGraphics::getTexture(v11, v8, 2, 0);
    v35 = 1;
    v36 = BlockGraphics::getTexture(v11, v8, 2, 1);
      VMOV            S4, R7
      VLDR            S2, =0.1
      VMOV.F32        S0, #-0.5
      VMUL.F32        S2, S4, S2
      VLDR            S4, =-0.05
    _R0 = &mce::Math::PI;
      VLDR            S6, [SP,#0xD8+var_60]
      VLDR            S8, [SP,#0xD8+var_58]
      VADD.F32        S4, S6, S4
      VLDR            S6, [R0]
      VADD.F32        S0, S8, S0
    v51 = 1050253722;
      VMUL.F32        S16, S2, S6
      VLDR            S2, =90.0
      VSTR            S4, [SP,#0xD8+var_90]
    v55 = v66;
      VSTR            S0, [SP,#0xD8+var_88]
      VADD.F32        S0, S16, S2
    v52 = 0;
    v53 = 0;
    __asm { VSTR            S0, [SP,#0xD8+var_D4] }
    BlockTextureTessellator::render((int)v45, COERCE_FLOAT(&v54), v34, 1, 0, v42, (int)&v51, 0, 0, 0, 0.0, v44);
      VMOV.F32        S0, #0.5
      VLDR            S2, =-0.065
      VLDR            S4, [SP,#0xD8+var_60]
      VLDR            S6, [SP,#0xD8+var_58]
      VADD.F32        S2, S4, S2
      VLDR            S4, =270.0
      VADD.F32        S4, S16, S4
      VADD.F32        S0, S6, S0
      VSTR            S2, [SP,#0xD8+var_A8]
    v50 = v66;
    __asm { VSTR            S0, [SP,#0xD8+var_A0] }
    v46 = 1050253722;
    v47 = 0;
    v48 = 0;
    __asm { VSTR            S4, [SP,#0xD8+var_D4] }
    BlockTextureTessellator::render((int)v45, COERCE_FLOAT(&v49), v36, 1, 0, v38, (int)&v46, 0, 0, 0, 0.0, v39);
  return v35;
}


void __fastcall BlockTessellator::tessellateEndRodAppended(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockGraphics *a4)
{
  const Block *v4; // r8@1
  Tessellator *v5; // r5@1
  BlockTessellator *v6; // r6@1
  int v7; // r7@1
  char v8; // [sp+1Ch] [bp-E4h]@1
  char v9; // [sp+28h] [bp-D8h]@1
  char v10; // [sp+34h] [bp-CCh]@1
  char v11; // [sp+40h] [bp-C0h]@1
  char v12; // [sp+4Ch] [bp-B4h]@1
  char v13; // [sp+58h] [bp-A8h]@1
  char v14; // [sp+64h] [bp-9Ch]@1
  char v15; // [sp+70h] [bp-90h]@1
  char v16; // [sp+7Ch] [bp-84h]@1
  char v17; // [sp+88h] [bp-78h]@1
  char v18; // [sp+94h] [bp-6Ch]@1
  char v19; // [sp+A0h] [bp-60h]@1
  int v20; // [sp+ACh] [bp-54h]@1
  signed int v21; // [sp+B0h] [bp-50h]@1
  int v22; // [sp+B4h] [bp-4Ch]@1
  __int64 v23; // [sp+B8h] [bp-48h]@1
  int v24; // [sp+C0h] [bp-40h]@1
  int v25; // [sp+C4h] [bp-3Ch]@1
  signed int v26; // [sp+C8h] [bp-38h]@1
  signed int v27; // [sp+CCh] [bp-34h]@1
  __int64 v28; // [sp+D0h] [bp-30h]@1
  int v29; // [sp+D8h] [bp-28h]@1

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = BlockGraphics::getTexture((unsigned int)a4, 0, 0);
  Tessellator::color(v5, 1.0, 1.0, 1.0, 1.0);
  v28 = 1052770304LL;
  v29 = 1052770304;
  v25 = 1059061760;
  v26 = 1031798784;
  v27 = 1059061760;
  v23 = 4431542034387435520LL;
  v24 = 1054867456;
  v20 = 1058013184;
  v21 = 1065353216;
  v22 = 1058013184;
  AABB::set((BlockTessellator *)((char *)v6 + 724), (const Vec3 *)&v28, (const Vec3 *)&v25);
  Vec3::Vec3((int)&v19, (int)&BlockPos::ZERO);
  BlockTessellator::tessellateFaceWithUVs(
    (int)v6,
    *(float *)&v5,
    __PAIR__(&v19, (unsigned int)v4),
    *(float *)&v7,
    1040187392,
    0.125,
    0.375,
    1);
  Vec3::Vec3((int)&v18, (int)&BlockPos::ZERO);
    __PAIR__(&v18, (unsigned int)v4),
    1052770304,
    0);
  Vec3::Vec3((int)&v17, (int)&BlockPos::ZERO);
    __PAIR__(&v17, (unsigned int)v4),
    0.4375,
    2);
  Vec3::Vec3((int)&v16, (int)&BlockPos::ZERO);
    __PAIR__(&v16, (unsigned int)v4),
    3);
  Vec3::Vec3((int)&v15, (int)&BlockPos::ZERO);
    __PAIR__(&v15, (unsigned int)v4),
    4);
  Vec3::Vec3((int)&v14, (int)&BlockPos::ZERO);
    __PAIR__(&v14, (unsigned int)v4),
    5);
  AABB::set((BlockTessellator *)((char *)v6 + 724), (const Vec3 *)&v23, (const Vec3 *)&v20);
  Vec3::Vec3((int)&v13, (int)&BlockPos::ZERO);
    __PAIR__(&v13, (unsigned int)v4),
    0.0,
    0.25,
  Vec3::Vec3((int)&v12, (int)&BlockPos::ZERO);
    __PAIR__(&v12, (unsigned int)v4),
    1048576000,
  Vec3::Vec3((int)&v11, (int)&BlockPos::ZERO);
    __PAIR__(&v11, (unsigned int)v4),
    0,
    0.9375,
  Vec3::Vec3((int)&v10, (int)&BlockPos::ZERO);
    __PAIR__(&v10, (unsigned int)v4),
  Vec3::Vec3((int)&v9, (int)&BlockPos::ZERO);
    __PAIR__(&v9, (unsigned int)v4),
  Vec3::Vec3((int)&v8, (int)&BlockPos::ZERO);
    __PAIR__(&v8, (unsigned int)v4),
}


void __fastcall BlockTessellator::_preparePolyCross(BlockTessellator *this, Tessellator *a2, const BlockPos *a3, const Block *a4, int a5)
{
  Tessellator *v5; // r5@1
  BlockTessellator *v6; // r8@1
  BlockSource *v7; // r7@1
  const Block *v8; // r4@1
  Tessellator *v9; // r9@1
  int (__fastcall *v10)(int, BlockSource *, const Block *, unsigned int); // r6@1
  unsigned int v11; // r0@1
  int v22; // r0@5
  unsigned __int8 v23; // [sp+4h] [bp-3Ch]@4
  unsigned __int8 v24; // [sp+5h] [bp-3Bh]@4
  float v25; // [sp+8h] [bp-38h]@8
  float v26; // [sp+10h] [bp-30h]@3
  float v27; // [sp+18h] [bp-28h]@2
  float v28; // [sp+1Ch] [bp-24h]@3

  v5 = a2;
  v6 = this;
  v7 = (BlockSource *)*((_DWORD *)a2 + 1);
  v8 = a4;
  v9 = a3;
  v10 = *(int (__fastcall **)(int, BlockSource *, const Block *, unsigned int))(*(_DWORD *)a5 + 392);
  v11 = BlockSource::getData(v7, a4);
  _R0 = v10(a5, v7, v8, v11);
  _R1 = (unsigned __int16)_R0 >> 8;
  _R2 = (_R0 >> 16) & 0xFF;
  __asm
  {
    VLDR            S8, =0.0039216
    VMOV            S0, R2
  }
  _R2 = (unsigned __int8)_R0;
  _R0 >>= 24;
    VMOV            S4, R2
    VMOV            S2, R1
    VMOV            S6, R0
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VCVT.F32.S32    S6, S6
    VMUL.F32        S0, S0, S8
    VMUL.F32        S2, S2, S8
    VMUL.F32        S4, S4, S8
    VMUL.F32        S6, S6, S8
    VSTR            S0, [SP,#0x40+var_30]
    VSTR            S2, [SP,#0x40+var_2C]
    VSTR            S4, [SP,#0x40+var_28]
    VSTR            S6, [SP,#0x40+var_24]
  if ( (*(int (__fastcall **)(int, _DWORD, const Block *))(*(_DWORD *)a5 + 400))(a5, *((_DWORD *)v5 + 1), v8) == 1 )
    v27 = 1.0;
  v28 = 1.0;
  Tessellator::color(v9, (const Color *)&v26);
  if ( *((_BYTE *)v5 + 48) )
    _R1 = (unsigned __int8)Brightness::MAX;
    v23 = Brightness::MAX;
    v24 = Brightness::MAX;
    _R2 = (unsigned __int8)Brightness::MAX;
  else
    BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v23, (Tessellator *)((char *)v5 + 812), (int)v8);
    _R1 = v23;
    _R2 = v24;
    v22 = *((_BYTE *)v5 + 48);
    VLDR            S4, =0.0625
    VCVT.F32.U32    S0, S0
    VCVT.F32.U32    S2, S2
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S4
    VSTR            S0, [SP,#0x40+var_38]
    VSTR            S2, [SP,#0x40+var_34]
  if ( _ZF )
    Tessellator::tex1((int)v9, (__int64 *)&v25);
  if ( Block::mTallgrass == a5 || Block::mYellowFlower == a5 || Block::mRedFlower == a5 )
    (*(void (__fastcall **)(BlockTessellator *, int, const Block *))(*(_DWORD *)a5 + 24))(v6, a5, v8);
    Vec3::Vec3((int)v6, (int)v8);
}


signed int __fastcall BlockTessellator::rotateCommandBlockFaces(BlockTessellator *this, int a2)
{
  signed int v2; // r1@2
  signed int v4; // r1@7
  signed int v5; // r2@7

  switch ( a2 & 7 )
  {
    case 0:
      v2 = 3;
      *((_DWORD *)this + 49) = 3;
      *((_DWORD *)this + 50) = 3;
      goto LABEL_6;
    case 1:
      *((_DWORD *)this + 47) = 2;
      *((_DWORD *)this + 48) = 1;
      return 1;
    case 2:
      v2 = 2;
    case 3:
      *((_DWORD *)this + 47) = 3;
      *((_DWORD *)this + 48) = 3;
      v2 = 1;
LABEL_6:
      *((_DWORD *)this + 51) = v2;
      *((_DWORD *)this + 52) = v2;
    case 4:
      v4 = 2;
      v5 = 1;
      goto LABEL_9;
    case 5:
      v4 = 1;
      v5 = 2;
LABEL_9:
      *((_DWORD *)this + 47) = v5;
      *((_DWORD *)this + 48) = v4;
      *((_DWORD *)this + 49) = v4;
      *((_DWORD *)this + 50) = v4;
      break;
    default:
  }
  return 1;
}


void __fastcall BlockTessellator::tessellateAll(BlockTessellator *this, Tessellator *a2, const Block *a3, const Vec3 *a4, const TextureUVCoordinateSet *a5)
{
  const Vec3 *v5; // r8@1
  const Block *v6; // r5@1
  Tessellator *v7; // r6@1
  BlockTessellator *v8; // r7@1

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = this;
  BlockTessellator::tessellateFaceDown(this, a2, a3, a4, a5);
  BlockTessellator::tessellateFaceUp(v8, v7, v6, v5, a5);
  BlockTessellator::tessellateNorth(v8, v7, v6, v5, a5);
  BlockTessellator::tessellateSouth(v8, v7, v6, v5, a5);
  BlockTessellator::tessellateWest(v8, v7, v6, v5, a5);
  j_j_j__ZN16BlockTessellator14tessellateEastER11TessellatorRK5BlockRK4Vec3RK22TextureUVCoordinateSet(
    v8,
    v7,
    v6,
    v5,
    a5);
}


char *__fastcall BlockTessellator::updateCache(BlockTessellator *this, const Block *a2, const BlockPos *a3)
{
  return j_j_j__ZN21BlockTessellatorCache18setBlockAtPositionERK5BlockRK8BlockPos(
           (BlockTessellator *)((char *)this + 812),
           a2,
           a3);
}


signed int __fastcall BlockTessellator::tessellateStemInWorld(BlockTessellator *this, Tessellator *a2, const StemBlock *a3, const BlockPos *a4)
{
  StemBlock *v5; // r11@1
  int v7; // r4@1
  Tessellator *v8; // r8@1
  int (__fastcall *v9)(StemBlock *, int, const BlockPos *, unsigned int); // r7@1
  unsigned int v10; // r0@1
  int v21; // r0@5
  const TextureUVCoordinateSet *v22; // r10@10
  int v23; // r9@10
  BlockGraphics *v24; // r4@11
  BlockTessellator *v25; // r0@14
  int v26; // r7@14
  float v27; // ST00_4@15
  float v29; // [sp+0h] [bp-68h]@0
  int v30; // [sp+4h] [bp-64h]@0
  float v31; // [sp+8h] [bp-60h]@0
  float v32; // [sp+10h] [bp-58h]@15
  unsigned __int8 v33; // [sp+1Ch] [bp-4Ch]@4
  unsigned __int8 v34; // [sp+1Dh] [bp-4Bh]@4
  float v35; // [sp+20h] [bp-48h]@8
  float v36; // [sp+28h] [bp-40h]@3
  float v37; // [sp+30h] [bp-38h]@2
  float v38; // [sp+34h] [bp-34h]@3

  _R5 = this;
  v5 = a3;
  _R6 = a4;
  v7 = *((_DWORD *)this + 1);
  v8 = a2;
  v9 = *(int (__fastcall **)(StemBlock *, int, const BlockPos *, unsigned int))(*(_DWORD *)a3 + 392);
  v10 = BlockSource::getData(*((BlockSource **)this + 1), a4);
  _R0 = v9(v5, v7, _R6, v10);
  _R1 = (unsigned __int16)_R0 >> 8;
  _R2 = (_R0 >> 16) & 0xFF;
  __asm
  {
    VLDR            S8, =0.0039216
    VMOV            S0, R2
  }
  _R2 = (unsigned __int8)_R0;
  _R0 >>= 24;
    VMOV            S4, R2
    VMOV            S2, R1
    VMOV            S6, R0
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VCVT.F32.S32    S6, S6
    VMUL.F32        S0, S0, S8
    VMUL.F32        S2, S2, S8
    VMUL.F32        S4, S4, S8
    VMUL.F32        S6, S6, S8
    VSTR            S0, [SP,#0x68+var_40]
    VSTR            S2, [SP,#0x68+var_3C]
    VSTR            S4, [SP,#0x68+var_38]
    VSTR            S6, [SP,#0x68+var_34]
  if ( (*(int (__fastcall **)(StemBlock *, _DWORD, const BlockPos *))(*(_DWORD *)v5 + 400))(
         v5,
         *((_DWORD *)_R5 + 1),
         _R6) == 1 )
    v37 = 1.0;
  v38 = 1.0;
  Tessellator::color(v8, (const Color *)&v36);
  if ( *((_BYTE *)_R5 + 48) )
    _R1 = (unsigned __int8)Brightness::MAX;
    v33 = Brightness::MAX;
    v34 = Brightness::MAX;
    _R2 = (unsigned __int8)Brightness::MAX;
  else
    BlockTessellatorCache::getLightColor(
      (BlockTessellatorCache *)&v33,
      (BlockTessellator *)((char *)_R5 + 812),
      (int)_R6);
    _R1 = v33;
    _R2 = v34;
    v21 = *((_BYTE *)_R5 + 48);
    VLDR            S4, =0.0625
    VCVT.F32.U32    S0, S0
    VCVT.F32.U32    S2, S2
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S4
    VSTR            S0, [SP,#0x68+var_48]
    VSTR            S2, [SP,#0x68+var_44]
  if ( _ZF )
    Tessellator::tex1((int)v8, (__int64 *)&v35);
  if ( *((_BYTE *)_R5 + 40) )
    v22 = (BlockTessellator *)((char *)_R5 + 8);
    v23 = (int)_R5 + 8;
    v24 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v5 + 4)];
    v22 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(
                                            (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v5 + 4)],
                                            _R6,
                                            0,
                                            0);
    if ( *((_BYTE *)_R5 + 40) )
      v23 = (int)_R5 + 8;
    else
      v23 = BlockGraphics::getTexture(v24, _R6, 0, 1);
  v25 = (BlockTessellator *)StemBlock::getConnectDir(v5, *((BlockSource **)_R5 + 1), _R6);
  v26 = (int)v25;
  if ( (signed int)v25 <= -1 )
    __asm
    {
      VLDR            S2, [R6,#4]
      VLDR            S0, [R6]
      VLDR            S4, [R6,#8]
      VCVT.F32.S32    S2, S2
      VLDR            S6, =-0.0625
      VCVT.F32.S32    S4, S4
      VCVT.F32.S32    S0, S0
      VADD.F32        S2, S2, S6
      VSTR            S0, [SP,#0x68+var_68]
      VSTR            S2, [SP,#0x68+var_64]
      VSTR            S4, [SP,#0x68+var_60]
    }
    BlockTessellator::tessellateStemTexture(v25, v8, v22, *((float *)_R5 + 185), v29, *(float *)&v30, v31);
      VLDR            S16, =-0.0625
      VADD.F32        S2, S2, S16
    BlockTessellator::tessellateStemTexture(v25, v8, v22, 0.5, v29, *(float *)&v30, v31);
      VLDR            S6, [R5,#0x2E4]
      VSTR            S6, [SP,#0x68+var_68]
      VSTR            S0, [SP,#0x68+var_58]
      VSTR            S2, [SP,#0x68+var_54]
      VSTR            S4, [SP,#0x68+var_50]
    BlockTessellator::tessellateStemDirTexture((int)&v32, v8, v23, v26, v27, (int)&v32);
  return 1;
}


signed int __fastcall BlockTessellator::tessellateEndRodDown(BlockTessellator *this, Tessellator *a2, const BlockPos *a3, const TextureUVCoordinateSet *a4)
{
  Tessellator *v4; // r8@1
  const BlockPos *v5; // r7@1
  TextureUVCoordinateSet *v7; // r4@1
  signed __int64 v8; // r0@1
  const TextureUVCoordinateSet *v9; // ST38_4@1
  const BlockPos *v10; // ST18_4@1
  BlockTessellator *v11; // ST14_4@1
  AABB *v12; // ST1C_4@1
  int v17; // r0@1
  float v18; // r9@1
  float v19; // ST08_4@1
  float v20; // ST34_4@1
  int v21; // r0@1
  float v22; // r11@1
  float v23; // ST28_4@1
  int v24; // r0@1
  float v25; // r10@1
  float v26; // ST24_4@1
  float v27; // ST30_4@1
  float v28; // ST2C_4@1
  int v29; // r0@1
  float v30; // r5@1
  float v31; // ST4C_4@1
  int v32; // r0@1
  float v33; // ST44_4@1
  float v34; // ST00_4@1
  float v38; // ST10_4@1
  float v39; // ST48_4@1
  float v40; // ST40_4@1
  float v41; // r6@1
  float v42; // r7@1
  float v43; // r1@1
  float v44; // r6@1
  float v45; // r2@1
  float v47; // ST3C_4@1
  float v48; // r7@1
  float v50; // ST20_4@1
  float v52; // ST0C_4@1
  float v53; // r9@1
  float v54; // ST44_4@1
  float v55; // ST4C_4@1
  int v56; // r0@1
  float v57; // r10@1
  float v58; // ST2C_4@1
  int v59; // r0@1
  float v60; // r4@1
  float v61; // ST28_4@1
  float v62; // ST08_4@1
  int v63; // r0@1
  float v64; // r6@1
  float v65; // ST30_4@1
  int v66; // r0@1
  float v67; // r11@1
  float v68; // ST34_4@1
  float v69; // ST24_4@1
  Tessellator *v70; // r10@1
  Tessellator *v71; // r5@1
  float v73; // ST40_4@1
  float v74; // ST34_4@1
  int v75; // r0@1
  float v76; // r9@1
  float v77; // ST20_4@1
  int v78; // r0@1
  float v79; // r7@1
  float v80; // ST18_4@1
  float v81; // ST30_4@1
  float v82; // ST24_4@1
  int v83; // r0@1
  float v84; // r4@1
  float v85; // ST2C_4@1
  int v86; // r0@1
  float v87; // ST28_4@1
  float v88; // ST00_4@1
  float v92; // ST44_4@1
  float v93; // ST48_4@1
  float v94; // ST1C_4@1
  float v95; // r6@1
  float v96; // r4@1
  float v97; // r8@1
  float v98; // ST00_4@1
  float v100; // ST3C_4@1
  float v102; // ST4C_4@1
  float v103; // ST00_4@1
  float v105; // ST30_4@1
  int v106; // r0@1
  float v107; // r8@1
  float v108; // ST34_4@1
  int v109; // r0@1
  float v110; // r6@1
  float v111; // ST40_4@1
  int v112; // r0@1
  float v113; // r4@1
  float v114; // ST28_4@1
  int v115; // r0@1
  float v116; // r7@1
  float v117; // ST2C_4@1
  float v118; // ST24_4@1
  int v119; // r0@1
  float v120; // r11@1
  float v121; // ST18_4@1
  float v122; // ST20_4@1
  int v123; // r0@1
  float v124; // r9@1
  TextureUVCoordinateSet *v125; // ST38_4@1
  float v127; // [sp+50h] [bp-C8h]@1
  float v130; // [sp+5Ch] [bp-BCh]@1
  float v133; // [sp+68h] [bp-B0h]@1
  float v136; // [sp+74h] [bp-A4h]@1
  int v139; // [sp+80h] [bp-98h]@1
  signed int v140; // [sp+84h] [bp-94h]@1
  signed int v141; // [sp+88h] [bp-90h]@1
  __int64 v142; // [sp+8Ch] [bp-8Ch]@1
  int v143; // [sp+94h] [bp-84h]@1
  __int64 v144; // [sp+98h] [bp-80h]@1
  int v145; // [sp+A0h] [bp-78h]@1
  int v146; // [sp+A4h] [bp-74h]@1
  signed __int64 v147; // [sp+A8h] [bp-70h]@1

  v4 = a2;
  v5 = a3;
  _R6 = this;
  v7 = a4;
  v8 = 4571153621781053440LL;
  v9 = a4;
  v10 = a3;
  v11 = _R6;
  v146 = 1054867456;
  v147 = 4530621225134718976LL;
  WORD1(v8) = 16144;
  v144 = v8;
  v145 = v8;
  LODWORD(v8) = 1052770304;
  v142 = v8;
  v143 = 1052770304;
  v139 = 1059061760;
  v140 = 1065353216;
  v141 = 1059061760;
  v12 = (BlockTessellator *)((char *)_R6 + 724);
  AABB::set((BlockTessellator *)((char *)_R6 + 724), (const Vec3 *)&v146, (const Vec3 *)&v144);
  Vec3::Vec3((int)&v136, (int)v5);
  __asm
  {
    VLDR            S20, [R6,#0x2D4]
    VLDR            S16, [R6,#0x2D8]
    VLDR            S24, [R6,#0x2DC]
    VLDR            S22, [SP,#0x118+var_A4]
    VLDR            S18, [SP,#0x118+var_A0]
    VLDR            S26, [SP,#0x118+var_9C]
  }
  Vec3::Vec3((int)&v133, (int)v5);
    VLDR            S28, [R6,#0x2E0]
    VLDR            S30, [R6,#0x2E4]
    VLDR            S17, [R6,#0x2E8]
    VLDR            S19, [SP,#0x118+var_B0]
    VLDR            S21, [SP,#0x118+var_AC]
    VLDR            S23, [SP,#0x118+var_A8]
  *(float *)&v17 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v7, 0.125, 0.0));
  v18 = *(float *)&v17;
  v19 = *(float *)&v17;
  v20 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v7, 0.0, 0.0));
  *(float *)&v21 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v7, 0.25, 0.0));
  v22 = *(float *)&v21;
  v23 = *(float *)&v21;
  *(float *)&v24 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v7, 0.0, 0.0));
  v25 = *(float *)&v24;
  v26 = *(float *)&v24;
  v27 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v7, 0.125, 0.0));
  v28 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v7, 0.125, 0.0));
  *(float *)&v29 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v7, 0.25, 0.0));
  v30 = *(float *)&v29;
  v31 = *(float *)&v29;
  *(float *)&v32 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v7, 0.125, 0.0));
  __asm { VADD.F32        S4, S17, S23 }
  v33 = *(float *)&v32;
  __asm { VADD.F32        S0, S28, S19 }
  v34 = v30;
    VADD.F32        S2, S30, S21
    VMOV            R5, S4
    VMOV            R1, S0
    VMOV            R2, S2
  v38 = _R5;
  v39 = _R1;
  v40 = _R2;
  v41 = _R1;
  v42 = _R2;
  Tessellator::vertexUV(v4, _R1, _R2, _R5, v34, *(float *)&v32);
  __asm { VADD.F32        S0, S24, S26 }
  v43 = v41;
  v44 = v42;
  v45 = v42;
  __asm { VMOV            R3, S0 }
  v47 = _R3;
  v48 = _R3;
  Tessellator::vertexUV(v4, v43, v45, _R3, v22, v25);
    VADD.F32        S0, S20, S22
    VMOV            R4, S0
  v50 = _R4;
  Tessellator::vertexUV(v4, _R4, v44, v48, v18, v20);
  Tessellator::vertexUV(v4, _R4, v44, _R5, v27, v28);
    VADD.F32        S0, S16, S18
    VMOV            R6, S0
  v52 = _R6;
  Tessellator::vertexUV(v4, _R4, _R6, _R5, v27, v28);
  v53 = _R4;
  Tessellator::vertexUV(v4, _R4, _R6, v48, v19, v20);
  Tessellator::vertexUV(v4, v39, _R6, v48, v23, v26);
  Tessellator::vertexUV(v4, v39, _R6, _R5, v31, v33);
  v54 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0));
  v55 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.9375, 0.0));
  *(float *)&v56 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.0, 0.0));
  v57 = *(float *)&v56;
  v58 = *(float *)&v56;
  *(float *)&v59 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.9375, 0.0));
  v60 = *(float *)&v59;
  v61 = *(float *)&v59;
  v62 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0));
  *(float *)&v63 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.0, 0.0));
  v64 = *(float *)&v63;
  v65 = *(float *)&v63;
  *(float *)&v66 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.0, 0.0));
  v67 = *(float *)&v66;
  v68 = *(float *)&v66;
  v69 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.0, 0.0));
  Tessellator::vertexUV(v4, v53, v40, v47, v57, v60);
  v70 = v4;
  Tessellator::vertexUV(v4, v39, v40, v47, v54, v55);
  Tessellator::vertexUV(v4, v39, v52, v47, v62, v64);
  Tessellator::vertexUV(v4, v50, v52, v47, v67, v69);
  Tessellator::vertexUV(v4, v50, v40, _R5, v54, v55);
  Tessellator::vertexUV(v4, v50, v52, _R5, v62, v65);
  Tessellator::vertexUV(v4, v39, v52, _R5, v68, v69);
  Tessellator::vertexUV(v4, v39, v40, _R5, v58, v61);
  v71 = v4;
  Tessellator::vertexUV(v4, v50, v40, v38, v58, v61);
  Tessellator::vertexUV(v4, v50, v40, v47, v54, v55);
  Tessellator::vertexUV(v4, v50, v52, v47, v62, v65);
  Tessellator::vertexUV(v4, v50, v52, v38, v68, v69);
  Tessellator::vertexUV(v4, v39, v52, v38, v62, v65);
  Tessellator::vertexUV(v4, v39, v52, v47, v68, v69);
  Tessellator::vertexUV(v4, v39, v40, v47, v58, v61);
  Tessellator::vertexUV(v4, v39, v40, v38, v54, v55);
  AABB::set(v12, (const Vec3 *)&v142, (const Vec3 *)&v139);
  Vec3::Vec3((int)&v130, (int)v10);
  _R6 = v11;
    VLDR            S22, [SP,#0x118+var_BC]
    VLDR            S18, [SP,#0x118+var_B8]
    VLDR            S26, [SP,#0x118+var_B4]
  Vec3::Vec3((int)&v127, (int)v10);
    VLDR            S19, [SP,#0x118+var_C8]
    VLDR            S21, [SP,#0x118+var_C4]
    VLDR            S23, [SP,#0x118+var_C0]
  v73 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.375, 0.0));
  v74 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.375, 0.0));
  *(float *)&v75 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0));
  v76 = *(float *)&v75;
  v77 = *(float *)&v75;
  *(float *)&v78 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.375, 0.0));
  v79 = *(float *)&v78;
  v80 = *(float *)&v78;
  v81 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.375, 0.0));
  v82 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.125, 0.0));
  *(float *)&v83 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0));
  v84 = *(float *)&v83;
  v85 = *(float *)&v83;
  *(float *)&v86 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.125, 0.0));
    VADD.F32        S0, S28, S19
  v87 = *(float *)&v86;
  v88 = v84;
    VMOV            R3, S4
  v92 = _R1;
  v93 = _R2;
  v94 = _R3;
  v95 = _R1;
  v96 = _R2;
  v97 = _R3;
  Tessellator::vertexUV(v71, _R1, _R2, _R3, v88, *(float *)&v86);
  v98 = v76;
  __asm { VMOV            R9, S0 }
  v100 = _R9;
  Tessellator::vertexUV(v71, v95, v96, _R9, v98, v79);
    VMOV            R7, S0
  v102 = _R7;
  Tessellator::vertexUV(v71, _R7, v96, _R9, v73, v74);
  Tessellator::vertexUV(v71, _R7, v96, v97, v81, v82);
  __asm { VADD.F32        S0, S16, S18 }
  v103 = v81;
  __asm { VMOV            R6, S0 }
  v105 = _R6;
  Tessellator::vertexUV(v71, _R7, _R6, v97, v103, v82);
  Tessellator::vertexUV(v71, _R7, _R6, _R9, v73, v74);
  Tessellator::vertexUV(v71, v92, _R6, _R9, v77, v80);
  Tessellator::vertexUV(v71, v92, _R6, v97, v85, v87);
  *(float *)&v106 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0));
  v107 = *(float *)&v106;
  v108 = *(float *)&v106;
  *(float *)&v109 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.375, 0.0));
  v110 = *(float *)&v109;
  v111 = *(float *)&v109;
  *(float *)&v112 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.375, 0.0));
  v113 = *(float *)&v112;
  v114 = *(float *)&v112;
  *(float *)&v115 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.375, 0.0));
  v116 = *(float *)&v115;
  v117 = *(float *)&v115;
  v118 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0));
  *(float *)&v119 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.4375, 0.0));
  v120 = *(float *)&v119;
  v121 = *(float *)&v119;
  v122 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.375, 0.0));
  *(float *)&v123 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.4375, 0.0));
  v124 = *(float *)&v123;
  v125 = (TextureUVCoordinateSet *)v123;
  Tessellator::vertexUV(v71, v102, v93, v100, v113, v116);
  Tessellator::vertexUV(v71, v92, v93, v100, v107, v110);
  Tessellator::vertexUV(v71, v92, v105, v100, v118, v120);
  Tessellator::vertexUV(v71, v102, v105, v100, v122, v124);
  Tessellator::vertexUV(v71, v102, v93, v94, v107, v111);
  Tessellator::vertexUV(v71, v102, v105, v94, v118, v120);
  Tessellator::vertexUV(v71, v92, v105, v94, v122, v124);
  Tessellator::vertexUV(v70, v92, v93, v94, v114, v117);
  Tessellator::vertexUV(v70, v102, v93, v94, v114, v117);
  Tessellator::vertexUV(v70, v102, v93, v100, v108, v111);
  Tessellator::vertexUV(v70, v102, v105, v100, v118, v121);
  Tessellator::vertexUV(v70, v102, v105, v94, v122, *(float *)&v125);
  Tessellator::vertexUV(v70, v92, v105, v94, v118, v121);
  Tessellator::vertexUV(v70, v92, v105, v100, v122, *(float *)&v125);
  Tessellator::vertexUV(v70, v92, v93, v100, v114, v117);
  return Tessellator::vertexUV(v70, v92, v93, v94, v108, v111);
}


int __fastcall BlockTessellator::_getTexture(BlockTessellator *this, const BlockPos *a2, const Block *a3, int a4, int a5)
{
  BlockTessellator *v5; // r6@1
  const Block *v6; // r7@1
  const BlockPos *v7; // r8@1
  int v8; // r4@1
  BlockGraphics *v9; // r5@1
  int v10; // r10@1
  unsigned int v11; // r0@1
  int (__fastcall *v12)(const Block *, unsigned int); // r2@1
  int v13; // r0@2
  int result; // r0@2
  int v15; // r0@3

  v5 = this;
  v6 = a3;
  v7 = a2;
  v8 = a4;
  v9 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)a3 + 4)];
  v10 = (*(int (__fastcall **)(const Block *, int, int))(*(_DWORD *)a3 + 428))(a3, a4, a5);
  v11 = *((_WORD *)v5 + 24);
  v12 = *(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v6 + 424);
  if ( (_BYTE)v11 )
  {
    v13 = v12(v6, v11 >> 8);
    result = BlockGraphics::getTexture(__PAIR__(v8, (unsigned int)v9), v13, 0);
  }
  else
    v15 = v12(v6, a5);
    result = BlockGraphics::getTexture(v9, v7, v10, v15);
  return result;
}


int __fastcall BlockTessellator::tessellateCrossTexture(BlockTessellator *this, Tessellator *a2, const TextureUVCoordinateSet *a3, const Vec3 *a4, int a5, const Block *a6, float a7)
{
  BlockTessellator *v7; // r8@1
  const Vec3 *v8; // r7@1
  Tessellator *v10; // r4@1
  char v11; // r0@1
  char v12; // r0@4
  char v13; // r0@7
  float v14; // r1@10
  float v15; // r2@10
  int v21; // r0@15
  float v25; // ST00_4@17
  float v26; // ST04_4@17
  float v29; // ST00_4@17
  float v30; // ST04_4@17
  float v32; // ST00_4@17
  float v33; // ST04_4@17
  float v35; // ST00_4@19
  float v36; // ST04_4@19
  float v37; // ST00_4@19
  float v38; // ST04_4@19
  float v40; // ST00_4@19
  float v41; // ST04_4@19
  int result; // r0@19
  float v46; // ST00_4@24
  float v47; // ST04_4@24
  float v49; // ST00_4@24
  float v50; // ST04_4@24
  float v52; // ST00_4@24
  float v53; // ST04_4@24
  float v56; // ST00_4@26
  float v57; // ST04_4@26
  float v58; // ST00_4@26
  float v59; // ST04_4@26
  float v61; // ST00_4@26
  float v62; // ST04_4@26
  float v63; // [sp+0h] [bp-A0h]@0
  float v64; // [sp+0h] [bp-A0h]@17
  float v65; // [sp+0h] [bp-A0h]@19
  float v66; // [sp+0h] [bp-A0h]@24
  float v67; // [sp+4h] [bp-9Ch]@0
  float v68; // [sp+4h] [bp-9Ch]@17
  float v69; // [sp+4h] [bp-9Ch]@19
  float v70; // [sp+4h] [bp-9Ch]@24
  float v71; // [sp+Ch] [bp-94h]@25
  float v72; // [sp+18h] [bp-88h]@23
  char v73; // [sp+24h] [bp-7Ch]@14
  char v74; // [sp+28h] [bp-78h]@14
  char v75; // [sp+2Ch] [bp-74h]@14
  float v76; // [sp+30h] [bp-70h]@10
  float v77; // [sp+34h] [bp-6Ch]@10
  float v78; // [sp+38h] [bp-68h]@10

  v7 = this;
  v8 = a4;
  _R6 = a3;
  v10 = a2;
  v11 = byte_27CCF20;
  __dmb();
  if ( !(v11 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27CCF20) )
  {
    unk_27CCF2C = 1060439283LL;
    dword_27CCF34 = 1060439283;
    j___cxa_guard_release((unsigned int *)&byte_27CCF20);
  }
  v12 = byte_27CCF24;
  if ( !(v12 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27CCF24) )
    unk_27CCF38 = -1087044365;
    unk_27CCF3C = 0;
    unk_27CCF40 = 1060439283;
    j___cxa_guard_release((unsigned int *)&byte_27CCF24);
  v13 = byte_27CCF28[0];
  if ( !(v13 & 1) && j___cxa_guard_acquire(byte_27CCF28) )
    unk_27CCF44 = 3207922931LL;
    dword_27CCF4C = -1087044365;
    j___cxa_guard_release(byte_27CCF28);
  v14 = *((float *)v8 + 1);
  v15 = *((float *)v8 + 2);
  v76 = *(float *)v8;
  v77 = v14;
  v78 = v15;
  __asm
    VLDR            S0, =0.0001
    VLDR            S26, =0.0
    VLDR            S24, =0.86
    VLDR            S28, =0.14
    VLDR            S19, [SP,#0xA0+var_70]
    VLDR            S30, [SP,#0xA0+var_68]
  if ( !_ZF )
    __asm { VMOVNE.F32      S26, S0 }
    VLDR            S22, [R6,#4]
    VLDR            S16, [R6,#8]
    VLDR            S18, [R6,#0xC]
    VLDR            S20, [R6,#0x10]
  if ( _ZF )
    BlockPos::BlockPos((int)&v73, (int)&v76);
    __asm { VLDR            S2, =-0.0625 }
    _R0 = (-6 * v73 + -117 * v74 + v75) & 3;
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VMUL.F32        S0, S0, S2
      VLDR            S2, [SP,#0xA0+var_6C]
      VADD.F32        S0, S2, S0
      VSTR            S0, [SP,#0xA0+var_6C]
    }
  __asm { VADD.F32        S21, S30, S28 }
  v21 = *((_BYTE *)v7 + 1);
    VADD.F32        S17, S30, S24
    VADD.F32        S30, S19, S24
    VADD.F32        S28, S19, S28
    Tessellator::normal(v10, (const Vec3 *)&unk_27CCF2C);
    VMOV.F32        S24, #1.0
    VLDR            S0, [SP,#0xA0+var_6C]
    VADD.F32        S2, S28, S26
    VMOV            R10, S21
    VSTR            S22, [SP,#0xA0+var_A0]
    VSTR            S16, [SP,#0xA0+var_9C]
    VADD.F32        S0, S0, S24
    VMOV            R5, S2
    VMOV            R2, S0
  Tessellator::vertexUV(v10, _R5, _R2, _R10, v63, v67);
    VSTR            S20, [SP,#0xA0+var_9C]
  Tessellator::vertexUV(v10, _R5, v77, _R10, v25, v26);
    VADD.F32        S0, S30, S26
    VMOV            R7, S17
    VSTR            S18, [SP,#0xA0+var_A0]
    VMOV            R6, S0
  Tessellator::vertexUV(v10, _R6, v77, _R7, v29, v30);
  Tessellator::vertexUV(v10, _R6, _R2, _R7, v32, v33);
  if ( *((_BYTE *)v7 + 1) )
    Tessellator::normal(v10, (const Vec3 *)&unk_27CCF38);
  Tessellator::vertexUV(v10, _R5, _R2, _R7, v64, v68);
  Tessellator::vertexUV(v10, _R5, v77, _R7, v35, v36);
  Tessellator::vertexUV(v10, _R6, v77, _R10, v37, v38);
  Tessellator::vertexUV(v10, _R6, _R2, _R10, v40, v41);
  result = *((_BYTE *)v7 + 1);
    result = Tessellator::normal(v10, (const Vec3 *)&unk_27CCF44);
  if ( a5 == 1 )
    if ( *((_BYTE *)v7 + 1) )
      _R0 = &byte_27CCF20;
      __asm
      {
        VLDR            S0, [R0,#0xC]
        VLDR            S2, [R0,#0x10]
        VLDR            S4, [R0,#0x14]
        VNEG.F32        S0, S0
        VNEG.F32        S2, S2
        VNEG.F32        S4, S4
        VSTR            S0, [SP,#0xA0+var_88]
        VSTR            S2, [SP,#0xA0+var_84]
        VSTR            S4, [SP,#0xA0+var_80]
      }
      Tessellator::normal(v10, (const Vec3 *)&v72);
      VLDR            S0, [SP,#0xA0+var_6C]
      VSUB.F32        S2, S30, S26
      VADD.F32        S0, S0, S24
      VSTR            S22, [SP,#0xA0+var_A0]
      VSTR            S16, [SP,#0xA0+var_9C]
      VMOV            R5, S2
      VMOV            R2, S0
    Tessellator::vertexUV(v10, _R5, _R2, _R7, v65, v69);
      VSTR            S20, [SP,#0xA0+var_9C]
    Tessellator::vertexUV(v10, _R5, v77, _R7, v46, v47);
      VSUB.F32        S0, S28, S26
      VSTR            S18, [SP,#0xA0+var_A0]
      VMOV            R9, S0
    Tessellator::vertexUV(v10, _R9, v77, _R10, v49, v50);
    Tessellator::vertexUV(v10, _R9, _R2, _R10, v52, v53);
        VLDR            S0, [R0,#0x18]
        VLDR            S2, [R0,#0x1C]
        VLDR            S4, [R0,#0x20]
        VSTR            S0, [SP,#0xA0+var_94]
        VSTR            S2, [SP,#0xA0+var_90]
        VSTR            S4, [SP,#0xA0+var_8C]
      Tessellator::normal(v10, (const Vec3 *)&v71);
    Tessellator::vertexUV(v10, _R5, _R2, _R10, v66, v70);
    Tessellator::vertexUV(v10, _R5, v77, _R10, v56, v57);
    Tessellator::vertexUV(v10, _R9, v77, _R7, v58, v59);
    result = Tessellator::vertexUV(v10, _R9, _R2, _R7, v61, v62);
  return result;
}


int __fastcall BlockTessellator::tessellateTreeInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  BlockTessellator *v5; // r7@1
  Tessellator *v6; // r6@1
  const BlockPos *v7; // r4@1
  const Block *v8; // r5@1
  __int64 v9; // r1@1
  unsigned int v10; // r1@1

  v5 = this;
  v6 = a2;
  v7 = a4;
  v8 = a3;
  v9 = *(_QWORD *)Block::getBlockState(Block::mQuartzBlock, 12);
  v10 = ((unsigned int)a5 >> (v9 + 1 - BYTE4(v9))) & (0xFu >> (4 - BYTE4(v9)));
  if ( v10 == 2 )
  {
    *((_DWORD *)v5 + 51) = 1;
    *((_DWORD *)v5 + 52) = 1;
  }
  else if ( v10 == 1 )
    *((_DWORD *)v5 + 47) = 1;
    *((_DWORD *)v5 + 48) = 1;
    *((_DWORD *)v5 + 49) = 1;
    *((_DWORD *)v5 + 50) = 1;
  return BlockTessellator::tessellateBlockInWorld(v5, v6, v8, v7, a5);
}


signed int __fastcall BlockTessellator::tessellateStemTexture(BlockTessellator *this, Tessellator *a2, const TextureUVCoordinateSet *_R2, float a4, float a5, float a6, float a7)
{
  Tessellator *v8; // r4@1
  int v13; // r0@1
  float v19; // ST00_4@1
  float v20; // ST04_4@1
  float v23; // ST00_4@1
  float v24; // ST04_4@1
  float v25; // ST00_4@1
  float v26; // ST04_4@1
  float v27; // ST00_4@1
  float v28; // ST04_4@1
  float v29; // ST00_4@1
  float v30; // ST04_4@1
  float v31; // ST00_4@1
  float v32; // ST04_4@1
  float v33; // ST00_4@1
  float v34; // ST04_4@1
  float v35; // ST00_4@1
  float v36; // ST04_4@1
  float v37; // ST00_4@1
  float v38; // ST04_4@1
  float v39; // ST00_4@1
  float v40; // ST04_4@1
  float v41; // ST00_4@1
  float v42; // ST04_4@1
  float v43; // ST00_4@1
  float v44; // ST04_4@1
  float v45; // ST00_4@1
  float v46; // ST04_4@1
  float v47; // ST00_4@1
  float v48; // ST04_4@1
  float v49; // ST00_4@1
  float v50; // ST04_4@1
  float v52; // [sp+0h] [bp-58h]@0
  float v53; // [sp+4h] [bp-54h]@0

  _R5 = a4;
  v8 = a2;
  __asm
  {
    VLDR            S16, [R2,#4]
    VLDR            S18, [R2,#8]
    VLDR            S20, [R2,#0xC]
  }
  v13 = TextureUVCoordinateSet::offsetHeight(_R2, a4, 0.0);
    VLDR            S0, =0.05
    VMOV            S2, R5
    VLDR            S24, [SP,#0x58+arg_0]
  _R6 = v13;
    VLDR            S22, [SP,#0x58+arg_4]
    VLDR            S26, [SP,#0x58+arg_8]
    VADD.F32        S4, S24, S0
    VADD.F32        S2, S22, S2
    VSTR            S16, [SP,#0x58+var_58]
    VADD.F32        S0, S26, S0
    VSTR            S18, [SP,#0x58+var_54]
    VMOV            R8, S4
    VMOV            R9, S2
    VMOV            R10, S0
  Tessellator::vertexUV(v8, _R8, _R9, _R10, v52, v53);
    VMOV            R5, S22
    VLDR            S0, =-0.0001
    VMOV            S2, R6
    VADD.F32        S22, S2, S0
    VSTR            S22, [SP,#0x58+var_54]
  Tessellator::vertexUV(v8, _R8, _R5, _R10, v19, v20);
    VLDR            S0, =0.95
    VSTR            S20, [SP,#0x58+var_58]
    VADD.F32        S2, S24, S0
    VMOV            R7, S2
    VMOV            R6, S0
  Tessellator::vertexUV(v8, _R7, _R5, _R6, v23, v24);
  Tessellator::vertexUV(v8, _R7, _R9, _R6, v25, v26);
  Tessellator::vertexUV(v8, _R7, _R9, _R6, v27, v28);
  Tessellator::vertexUV(v8, _R7, _R5, _R6, v29, v30);
  Tessellator::vertexUV(v8, _R8, _R5, _R10, v31, v32);
  Tessellator::vertexUV(v8, _R8, _R9, _R10, v33, v34);
  Tessellator::vertexUV(v8, _R8, _R9, _R6, v35, v36);
  Tessellator::vertexUV(v8, _R8, _R5, _R6, v37, v38);
  Tessellator::vertexUV(v8, _R7, _R5, _R10, v39, v40);
  Tessellator::vertexUV(v8, _R7, _R9, _R10, v41, v42);
  Tessellator::vertexUV(v8, _R7, _R9, _R10, v43, v44);
  Tessellator::vertexUV(v8, _R7, _R5, _R10, v45, v46);
  Tessellator::vertexUV(v8, _R8, _R5, _R6, v47, v48);
  return Tessellator::vertexUV(v8, _R8, _R9, _R6, v49, v50);
}


void __fastcall BlockTessellator::_tessellateAllFaces(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  BlockTessellator::_tessellateAllFaces(this, a2, a3, a4, a5);
}


void __fastcall BlockTessellator::tessellateFaceWithUVs(BlockTessellator *this, Tessellator *a2, __int64 a3, const TextureUVCoordinateSet *a4, float a5, float a6, float a7, float a8, int a9)
{
  BlockTessellator *v9; // r11@1
  Tessellator *v10; // r10@1
  float v11; // r3@1
  float v12; // r4@1
  float v13; // r5@1
  float v14; // r6@1
  int v15; // r7@1
  void *v27; // r0@8
  unsigned int *v28; // r2@10
  signed int v29; // r1@12
  __int64 v30; // [sp+8h] [bp-50h]@1
  int v31; // [sp+10h] [bp-48h]@1
  float v32; // [sp+14h] [bp-44h]@1
  float v33; // [sp+18h] [bp-40h]@1
  float v34; // [sp+1Ch] [bp-3Ch]@1
  float v35; // [sp+20h] [bp-38h]@1
  int v36; // [sp+24h] [bp-34h]@1
  int v37; // [sp+28h] [bp-30h]@1
  int v38; // [sp+2Ch] [bp-2Ch]@1

  v9 = this;
  v30 = a3;
  v10 = a2;
  v11 = *((float *)a4 + 1);
  v12 = *((float *)a4 + 2);
  v13 = *((float *)a4 + 3);
  v14 = *((float *)a4 + 4);
  v15 = *((_DWORD *)a4 + 5);
  v31 = *(_DWORD *)a4;
  v32 = v11;
  v33 = v12;
  v34 = v13;
  v35 = v14;
  v36 = v15;
  sub_119C854(&v37, (int *)a4 + 6);
  v38 = *((_DWORD *)a4 + 7);
  _R0 = TextureUVCoordinateSet::offsetWidth(a4, a5, 0.0);
  __asm
  {
    VLDR            S0, [SP,#0x58+arg_8]
    VMOV            S2, R0
    VMOV            R1, S0
    VSTR            S2, [SP,#0x58+var_44]
  }
  _R0 = TextureUVCoordinateSet::offsetHeight(a4, _R1, 0.0);
    VLDR            S0, [SP,#0x58+arg_C]
    VSTR            S2, [SP,#0x58+var_40]
  _R0 = TextureUVCoordinateSet::offsetWidth(a4, _R1, 0.0);
    VLDR            S0, [SP,#0x58+arg_10]
    VSTR            S2, [SP,#0x58+var_3C]
    VMOV            S0, R0
    VSTR            S0, [SP,#0x58+var_38]
  switch ( a9 )
    case 0:
      BlockTessellator::tessellateFaceDown(
        v9,
        v10,
        (const Block *)v30,
        (const Vec3 *)HIDWORD(v30),
        (const TextureUVCoordinateSet *)&v31);
      break;
    case 4:
      BlockTessellator::tessellateWest(
    case 2:
      BlockTessellator::tessellateNorth(
    case 3:
      BlockTessellator::tessellateSouth(
    case 1:
      BlockTessellator::tessellateFaceUp(
    case 5:
      BlockTessellator::tessellateEast(
    default:
  v27 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v37 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
    }
    else
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
}


int __fastcall BlockTessellator::tessellateCrossPolyTexture(BlockTessellator *this, Tessellator *a2, const TextureUVCoordinateSet *a3, const Vec3 *a4, int a5, const Block *a6)
{
  BlockTessellator *v7; // r7@1
  const Vec3 *v9; // r8@1
  Tessellator *v10; // r6@1
  int v18; // r0@3
  int v27; // r0@6
  bool v33; // [sp+1Ch] [bp-3Ch]@0
  bool v34; // [sp+1Ch] [bp-3Ch]@4

  _R4 = a3;
  v7 = this;
  _R0 = *((_WORD *)a3 + 10);
  v9 = a4;
  v10 = a2;
  __asm
  {
    VMOV            S0, R0
    VCVT.F32.U32    S16, S0
    VLDR            S18, [R4,#4]
    VLDR            S20, [R4,#0xC]
    VCMPE.F32       S20, S18
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm
    {
      VMUL.F32        S0, S16, S18
      VMOV            R0, S0
    }
    v18 = roundf(_R0);
    __asm { VMUL.F32        S0, S16, S20 }
    _R5 = v18;
  else
      VMUL.F32        S0, S16, S20
    _R5 = roundf(_R0);
    __asm { VMUL.F32        S0, S16, S18 }
  __asm { VMOV            R0, S0 }
  _R0 = roundf(_R0);
    VMOV            S2, R5
    VCVTR.S32.F32   S0, S0
    VCVTR.S32.F32   S2, S2
    VMOV            R0, S0
    VMOV            R1, S2
  BlockTextureTessellator::render(
    (int)v10,
    *(float *)&v9,
    (int)_R4,
    1,
    (unsigned __int16)(_R1 - _R0),
    45.0,
    (int)&Vec3::ZERO,
    (const Vec3 *)a5,
    *((_BYTE *)v7 + 1),
    0,
    0.0,
    v33);
  _R0 = *((_WORD *)_R4 + 10);
    v27 = roundf(_R0);
    _R5 = v27;
  return BlockTextureTessellator::render(
           (int)v10,
           *(float *)&v9,
           (int)_R4,
           1,
           (unsigned __int16)(_R1 - _R0),
           135.0,
           (int)&Vec3::ZERO,
           (const Vec3 *)a5,
           *((_BYTE *)v7 + 1),
           0,
           0.0,
           v34);
}


signed int __fastcall BlockTessellator::tessellateCocoaInWorld(BlockTessellator *this, Tessellator *a2, const CocoaBlock *a3, const BlockPos *a4, int a5)
{
  BlockTessellator *v5; // r4@1
  Tessellator *v6; // r9@1
  const CocoaBlock *v8; // r8@1
  int v11; // r0@3
  __int64 v16; // r6@7
  int v17; // r1@7
  int v18; // r0@7
  int v19; // r1@7
  int v20; // r8@7
  int v26; // r0@11
  int v46; // ST30_4@18
  float v50; // r5@18
  float v52; // ST00_4@18
  float v53; // ST04_4@18
  float v55; // ST00_4@18
  float v56; // ST04_4@18
  float v57; // ST00_4@18
  float v58; // ST04_4@18
  Tessellator *v59; // r7@18
  Tessellator *v60; // r0@18
  float v62; // ST00_4@18
  float v63; // ST04_4@18
  float v64; // ST00_4@18
  float v65; // ST04_4@18
  float v66; // ST00_4@18
  float v67; // ST04_4@18
  float v68; // ST00_4@18
  float v69; // ST04_4@18
  float v70; // ST00_4@18
  float v71; // ST04_4@18
  float v72; // ST00_4@18
  float v73; // ST04_4@18
  float v74; // ST00_4@18
  float v75; // ST04_4@18
  float v76; // ST00_4@18
  float v77; // ST04_4@18
  float v78; // ST00_4@18
  float v79; // ST04_4@18
  float v80; // ST00_4@18
  float v81; // ST04_4@18
  float v82; // ST00_4@18
  float v83; // ST04_4@18
  float v84; // ST00_4@18
  float v85; // ST04_4@18
  int v90; // r8@20
  int v91; // r11@20
  float v92; // ST04_4@20
  float v93; // ST00_4@20
  float v94; // ST04_4@20
  float v95; // ST00_4@20
  float v96; // ST04_4@20
  float v97; // ST04_4@20
  float v98; // ST00_4@20
  int v122; // r0@29
  int v129; // r0@31
  int v136; // r0@33
  int v143; // r0@35
  void *v149; // r0@37
  unsigned int *v151; // r2@39
  signed int v152; // r1@41
  float v153; // [sp+0h] [bp-110h]@0
  float v154; // [sp+0h] [bp-110h]@18
  float v155; // [sp+4h] [bp-10Ch]@0
  int v156; // [sp+14h] [bp-FCh]@0
  const BlockPos *v157; // [sp+1Ch] [bp-F4h]@18
  float v158; // [sp+20h] [bp-F0h]@18
  float v159; // [sp+28h] [bp-E8h]@18
  float v160; // [sp+2Ch] [bp-E4h]@18
  int v161; // [sp+34h] [bp-DCh]@12
  signed int v162; // [sp+38h] [bp-D8h]@12
  float v163; // [sp+3Ch] [bp-D4h]@7
  TextureUVCoordinateSet *v164; // [sp+40h] [bp-D0h]@12
  unsigned int v165; // [sp+44h] [bp-CCh]@9
  float v166; // [sp+48h] [bp-C8h]@32
  float v167; // [sp+54h] [bp-BCh]@34
  float v168; // [sp+60h] [bp-B0h]@36
  float v169; // [sp+6Ch] [bp-A4h]@30
  char v170; // [sp+78h] [bp-98h]@20
  int v171; // [sp+90h] [bp-80h]@37
  unsigned __int8 v172; // [sp+98h] [bp-78h]@2
  unsigned __int8 v173; // [sp+99h] [bp-77h]@2
  float v174; // [sp+9Ch] [bp-74h]@6

  v5 = this;
  v6 = a2;
  _R10 = a4;
  v8 = a3;
  Tessellator::color(a2, (const Color *)&Color::WHITE);
  if ( *((_BYTE *)v5 + 48) )
  {
    _R1 = (unsigned __int8)Brightness::MAX;
    v172 = Brightness::MAX;
    v173 = Brightness::MAX;
    _R2 = (unsigned __int8)Brightness::MAX;
  }
  else
    BlockTessellatorCache::getLightColor(
      (BlockTessellatorCache *)&v172,
      (BlockTessellator *)((char *)v5 + 812),
      (int)_R10);
    _R1 = v172;
    _R2 = v173;
    v11 = *((_BYTE *)v5 + 48);
  __asm
    VMOV            S0, R2
    VLDR            S22, =0.0625
    VMOV            S2, R1
    VCVT.F32.U32    S0, S0
    VCVT.F32.U32    S2, S2
    VMUL.F32        S0, S0, S22
    VMUL.F32        S2, S2, S22
    VSTR            S0, [SP,#0x110+var_74]
    VSTR            S2, [SP,#0x110+var_70]
  if ( _ZF )
    Tessellator::tex1((int)v6, (__int64 *)&v174);
  v16 = *(_QWORD *)Block::getBlockState(Block::mCocoa, 12);
  v18 = CocoaBlock::getAge((CocoaBlock *)a5, v17);
  v19 = *((_BYTE *)v8 + 4);
  v20 = v18;
  _R5 = BlockGraphics::getTexture((BlockGraphics *)BlockGraphics::mBlocks[v19], _R10, 0, v18);
  v163 = *(float *)&_R5;
  if ( *((_BYTE *)v5 + 40) )
    _R5 = (int)v5 + 8;
  _R1 = *(_WORD *)(_R5 + 20);
    VMOV            S0, R1
    VCVT.F32.U32    S16, S0
    VLDR            S18, [R5,#4]
    VLDR            S20, [R5,#0xC]
  v165 = ((unsigned int)a5 >> (1 - BYTE4(v16) + v16)) & (0xFu >> (4 - BYTE4(v16)));
    VCMPE.F32       S20, S18
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm
    {
      VMUL.F32        S0, S16, S18
      VMOV            R0, S0
    }
    v26 = roundf(_R0);
    __asm { VMUL.F32        S0, S16, S20 }
    _R4 = v26;
      VMUL.F32        S0, S16, S20
    _R4 = roundf(_R0);
    __asm { VMUL.F32        S0, S16, S18 }
  __asm { VMOV            R0, S0 }
  _R0 = roundf(_R0);
    VMOV            S0, R0
    VMOV            S2, R4
    VCVTR.S32.F32   S0, S0
    VCVTR.S32.F32   S2, S2
    VMOV.F32        S16, #0.25
    VMOV            R0, S0
    VMOV            R1, S2
    VMOV.F32        S0, #0.9375
  _R0 = (unsigned __int16)(_R1 - _R0);
  __asm { VMOV            S2, R0 }
  _R11 = 2 * v20 + 4;
  __asm { VCVT.F32.U32    S18, S2 }
  v162 = v20;
  __asm { VMOV            S2, R11 }
  _R0 = 2 * v20 + 5;
    VCVT.F32.S32    S19, S2
    VMUL.F32        S20, S18, S0
    VMUL.F32        S26, S18, S16
    VSUB.F32        S0, S20, S19
    VMOV            R1, S0
    VCVT.F32.S32    S24, S0
    VADD.F32        S28, S26, S24
  _R0 = TextureUVCoordinateSet::offsetWidthPixel((TextureUVCoordinateSet *)_R5, _R1, 0.0);
    VMOV            R1, S20
    VMOV            R4, S26
    VMOV            S26, R0
    VMOV            R7, S28
  _R6 = TextureUVCoordinateSet::offsetWidthPixel((TextureUVCoordinateSet *)_R5, _R1, 0.0);
  _R4 = TextureUVCoordinateSet::offsetHeightPixel((TextureUVCoordinateSet *)_R5, _R4, 0.0);
  _R0 = TextureUVCoordinateSet::offsetHeightPixel((TextureUVCoordinateSet *)_R5, _R7, 0.0);
    VLDR            S4, =0.0002
    VMOV            S6, R0
    VLDR            S8, =-0.0002
    VMOV            S0, R6
    VMUL.F32        S20, S18, S22
    VADD.F32        S26, S26, S4
    VADD.F32        S30, S0, S8
    VADD.F32        S28, S2, S4
    VADD.F32        S17, S6, S8
  v161 = 2 * v20;
  v164 = (TextureUVCoordinateSet *)_R5;
  switch ( v165 )
    case 0u:
      __asm
      {
        VMOV.F32        S2, #15.0
        VMOV.F32        S0, #8.0
      }
      _R0 = _R11 / 2;
        VMOV            S4, R0
        VCVT.F32.S32    S4, S4
        VSUB.F32        S23, S2, S19
        VSUB.F32        S21, S0, S4
      break;
    case 2u:
        VMOV.F32        S23, #1.0
        VMOV            S2, R0
        VCVT.F32.S32    S2, S2
        VSUB.F32        S21, S0, S2
    case 3u:
        VSUB.F32        S21, S2, S19
        VSUB.F32        S23, S0, S4
    case 1u:
        VMOV.F32        S21, #1.0
        VSUB.F32        S23, S0, S2
    default:
      __asm { VLDR            S23, =0.0; jumptable 00EA65B8 default case }
      v161 = 2 * v20;
      v164 = (TextureUVCoordinateSet *)_R5;
      __asm { VMOV.F32        S21, S23 }
    VMOV.F32        S0, #12.0
    VLDR            S2, [R10]
    VLDR            S4, [R10,#4]
    VMUL.F32        S8, S21, S22
    VLDR            S6, [R10,#8]
  v46 = 2 * v20 + 4;
  v157 = _R10;
    VCVT.F32.S32    S25, S2
    VMUL.F32        S2, S23, S22
    VSUB.F32        S0, S0, S24
    VCVT.F32.S32    S24, S6
    VCVT.F32.S32    S27, S4
    VSTR            S26, [SP,#0x110+var_110]
    VSTR            S17, [SP,#0x110+var_10C]
    VADD.F32        S4, S25, S8
    VADD.F32        S2, S24, S2
    VMOV            R1, S4
    VADD.F32        S0, S27, S0
    VMOV            R8, S2
    VMOV            R11, S0
  v158 = _R1;
  v50 = _R1;
  v160 = _R8;
  v159 = _R11;
  Tessellator::vertexUV(v6, _R1, _R11, _R8, v153, v155);
    VADD.F32        S0, S23, S19
    VSTR            S30, [SP,#0x110+var_110]
    VADD.F32        S0, S24, S0
    VMOV            R6, S0
  Tessellator::vertexUV(v6, v50, _R11, _R6, v52, v53);
    VMOV.F32        S24, #0.75
    VSTR            S28, [SP,#0x110+var_10C]
    VADD.F32        S0, S27, S24
    VMOV            R10, S0
  Tessellator::vertexUV(v6, v50, _R10, _R6, v55, v56);
  Tessellator::vertexUV(v6, v50, _R10, _R8, v57, v58);
  __asm { VADD.F32        S0, S21, S19 }
  v59 = v6;
  v60 = v6;
    VADD.F32        S0, S25, S0
    VMOV            R9, S0
  Tessellator::vertexUV(v60, _R9, _R11, _R6, v62, v63);
  Tessellator::vertexUV(v59, _R9, _R11, _R8, v64, v65);
  Tessellator::vertexUV(v59, _R9, _R10, _R8, v66, v67);
  Tessellator::vertexUV(v59, _R9, _R10, _R6, v68, v69);
  Tessellator::vertexUV(v59, _R9, _R11, _R8, v70, v71);
  Tessellator::vertexUV(v59, v50, _R11, _R8, v72, v73);
  Tessellator::vertexUV(v59, v50, _R10, _R8, v74, v75);
  Tessellator::vertexUV(v59, _R9, _R10, _R8, v76, v77);
  Tessellator::vertexUV(v59, v50, _R11, _R6, v78, v79);
  Tessellator::vertexUV(v59, _R9, _R11, _R6, v80, v81);
  Tessellator::vertexUV(v59, _R9, _R10, _R6, v82, v83);
  Tessellator::vertexUV(v59, v50, _R10, _R6, v84, v85);
  _R1 = v46;
  if ( v162 > 1 )
    _R1 = v161 + 3;
    VCVT.F32.S32    S0, S0
  _R4 = v164;
  _R0 = v164;
    VLDR            S22, [R4,#4]
    VMOV            R5, S0
  v90 = TextureUVCoordinateSet::offsetWidthPixel(v164, _R5, 0.0);
  __asm { VLDR            S26, [R4,#8] }
  v91 = TextureUVCoordinateSet::offsetHeightPixel(v164, _R5, 0.0);
  __asm { VSTR            S22, [SP,#0x110+var_110] }
  Tessellator::vertexUV(v59, v158, _R10, _R6, v154, *(float *)&v91);
  Tessellator::vertexUV(v59, _R9, _R10, _R6, *(float *)&v90, *(float *)&v91);
  __asm { VSTR            S26, [SP,#0x110+var_10C] }
  Tessellator::vertexUV(v59, _R9, _R10, v160, *(float *)&v90, v92);
    VSTR            S22, [SP,#0x110+var_110]
    VSTR            S26, [SP,#0x110+var_10C]
  Tessellator::vertexUV(v59, v158, _R10, v160, v93, v94);
  Tessellator::vertexUV(v59, v158, v159, v160, v95, v96);
  Tessellator::vertexUV(v59, _R9, v159, v160, *(float *)&v90, v97);
  Tessellator::vertexUV(v59, _R9, v159, _R6, *(float *)&v90, *(float *)&v91);
  Tessellator::vertexUV(v59, v158, v159, _R6, v98, *(float *)&v91);
    VMUL.F32        S0, S18, S24
    VMOV            R2, S0
    VCVTR.S32.F32   S0, S20
  TextureUVCoordinateSet::subTexture((TextureUVCoordinateSet *)&v170, v163, _R2, 0, 4 * _R0, 4 * _R0);
      _R0 = v157;
        VLDR            S4, [R0,#8]
        VLDR            S0, [R0]
        VLDR            S2, [R0,#4]
        VCVT.F32.S32    S0, S0
      _R4 = v164;
        VADD.F32        S4, S4, S16
        VSTR            S0, [SP,#0x110+var_BC]
        VSTR            S2, [SP,#0x110+var_B8]
        VSTR            S4, [SP,#0x110+var_B4]
      _R0 = *((_WORD *)v164 + 10);
        VMOV            S0, R0
        VCVT.F32.U32    S16, S0
        VLDR            S18, [R4,#4]
        VLDR            S20, [R4,#0xC]
        VCMPE.F32       S20, S18
        VMRS            APSR_nzcv, FPSCR
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        __asm
        {
          VMUL.F32        S0, S16, S18
          VMOV            R0, S0
        }
        v136 = roundf(_R0);
        __asm { VMUL.F32        S0, S16, S20 }
        _R4 = v136;
      else
          VMUL.F32        S0, S16, S20
        _R4 = roundf(_R0);
        __asm { VMUL.F32        S0, S16, S18 }
      __asm { VMOV            R0, S0 }
      _R0 = roundf(_R0);
        VMOV            S2, R4
        VCVTR.S32.F32   S0, S0
        VCVTR.S32.F32   S2, S2
        VMOV            R0, S0
        VMOV            R1, S2
      _R0 = (unsigned __int16)(_R1 - _R0);
        VCVT.F32.U32    S0, S0
        VSTR            S0, [SP,#0x110+var_FC]
      BlockTextureTessellator::render(
        (int)v59,
        COERCE_FLOAT(&v167),
        (int)&v170,
        1,
        0,
        90.0,
        (int)&Vec3::ZERO,
        v156,
        0.0,
        (bool)v157);
        VMOV.F32        S6, #-0.25
        VADD.F32        S4, S4, S6
        VSTR            S0, [SP,#0x110+var_A4]
        VSTR            S2, [SP,#0x110+var_A0]
        VSTR            S4, [SP,#0x110+var_9C]
        v122 = roundf(_R0);
        _R4 = v122;
        COERCE_FLOAT(&v169),
        270.0,
        VADD.F32        S0, S0, S16
        VSTR            S0, [SP,#0x110+var_C8]
        VSTR            S2, [SP,#0x110+var_C4]
        VSTR            S4, [SP,#0x110+var_C0]
        v129 = roundf(_R0);
        _R4 = v129;
        COERCE_FLOAT(&v166),
        180.0,
        VADD.F32        S0, S0, S6
        VSTR            S0, [SP,#0x110+var_B0]
        VSTR            S2, [SP,#0x110+var_AC]
        VSTR            S4, [SP,#0x110+var_A8]
        v143 = roundf(_R0);
        _R4 = v143;
        COERCE_FLOAT(&v168),
  v149 = (void *)(v171 - 12);
  if ( (int *)(v171 - 12) != &dword_28898C0 )
    v151 = (unsigned int *)(v171 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v152 = __ldrex(v151);
      while ( __strex(v152 - 1, v151) );
    else
      v152 = (*v151)--;
    if ( v152 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v149);
  return 1;
}


int __fastcall BlockTessellator::getMeshForBlock(BlockTessellator *this, Tessellator *a2, const FullBlock *a3)
{
  const FullBlock *v3; // r10@1
  BlockTessellator *v4; // r9@1
  __int64 v5; // kr00_8@1
  unsigned int v6; // r11@1
  unsigned int v7; // r6@1
  _DWORD *v8; // r0@1
  _DWORD *v9; // r8@2
  int v10; // r7@2
  bool v11; // zf@7
  int v12; // r4@10
  unsigned int v13; // r4@11
  int v14; // r8@11
  unsigned int *v15; // r0@11
  unsigned int *v16; // r7@12
  int v17; // r6@12
  _DWORD *v18; // r5@14
  bool v19; // zf@17
  void *v20; // r4@21
  Tessellator *v22; // [sp+4h] [bp-8Ch]@1
  char v23; // [sp+8h] [bp-88h]@22

  v3 = a3;
  v22 = a2;
  v4 = this;
  v5 = *(_QWORD *)((char *)this + 756);
  v6 = *((_BYTE *)a3 + 1) & 0xF | (*(_BYTE *)a3 << 8);
  v7 = v6 % (unsigned int)(*(_QWORD *)((char *)this + 756) >> 32);
  v8 = *(_DWORD **)(v5 + 4 * v7);
  if ( !v8 )
    goto LABEL_11;
  v9 = (_DWORD *)*v8;
  v10 = *(_DWORD *)(*v8 + 4);
  while ( v6 != v10 )
  {
    if ( *v9 )
    {
      v10 = *(_DWORD *)(v5 + 4);
      v8 = v9;
      v9 = (_DWORD *)*v9;
      if ( *(_DWORD *)(v5 + 4) % HIDWORD(v5) == v7 )
        continue;
    }
  }
  v11 = v8 == 0;
  if ( v8 )
    v8 = (_DWORD *)*v8;
    v11 = v8 == 0;
  if ( v11 )
LABEL_11:
    Tessellator::begin(a2, 0, 0);
    Tessellator::voidBeginAndEndCalls(v22, 1);
    BlockTessellator::appendTessellatedBlock(v4, v22, v3);
    v13 = *(_QWORD *)((char *)v4 + 756) >> 32;
    v14 = v6 % v13;
    v15 = *(unsigned int **)(*(_QWORD *)((char *)v4 + 756) + 4 * v14);
    if ( !v15 )
      goto LABEL_21;
    v16 = (unsigned int *)*v15;
    v17 = *(_DWORD *)(*v15 + 4);
    while ( v6 != v17 )
      v18 = (_DWORD *)*v16;
      if ( *v16 )
      {
        v17 = v18[1];
        v15 = v16;
        v16 = (unsigned int *)*v16;
        if ( v18[1] % v13 == v14 )
          continue;
      }
    v19 = v15 == 0;
    if ( v15 )
      v13 = *v15;
      v19 = *v15 == 0;
    if ( v19 )
LABEL_21:
      v20 = operator new(0x6Cu);
      *(_DWORD *)v20 = 0;
      *((_DWORD *)v20 + 1) = v6;
      mce::Mesh::Mesh((mce::Mesh *)((char *)v20 + 8));
      v13 = std::_Hashtable<int,std::pair<int const,mce::Mesh>,std::allocator<std::pair<int const,mce::Mesh>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
              (int)v4 + 756,
              v14,
              v6,
              (int)v20);
    Tessellator::voidBeginAndEndCalls(v22, 0);
    Tessellator::end((Tessellator *)&v23, (const char *)v22, 0, 0);
    v12 = mce::Mesh::operator=(v13 + 8, (int)&v23);
    mce::Mesh::~Mesh((mce::Mesh *)&v23);
  else
    v12 = (int)(v8 + 2);
  return v12;
}


signed int __fastcall BlockTessellator::tessellateLeverInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  BlockTessellator *v5; // r9@1
  int v6; // r6@1
  float v7; // r5@1
  int v9; // r11@1
  const Block *v10; // r4@1
  int v11; // r5@2
  BlockGraphics *v12; // r4@2
  int v13; // r6@2
  unsigned int v14; // r0@2
  int (__fastcall *v15)(int, unsigned int); // r2@2
  int v16; // r0@3
  int v17; // r0@3
  int v18; // r0@4
  int v19; // r2@5
  int v20; // r3@5
  int v21; // r5@5
  int v22; // r6@5
  int v23; // r7@5
  int v24; // r4@5
  __int64 v25; // r2@7
  __int64 v26; // r0@7
  __int16 v27; // r0@13
  signed __int16 v28; // r0^2@13
  int v31; // r0@20
  int v40; // r0@29
  int v43; // r9@30
  int v46; // r7@30
  float v65; // r0@46
  const Block *v68; // r1@59
  float v69; // r5@59
  int v70; // r4@59
  float v71; // r11@59
  float v72; // r6@59
  int v73; // r7@59
  float v74; // r10@59
  float v75; // r8@59
  TextureUVCoordinateSet *v79; // r6@61
  int v82; // r0@61
  float v86; // r1@61
  int v87; // r6@61
  int v88; // r3@61
  int v89; // r12@61
  int v90; // r11@61
  int v91; // r5@61
  float v92; // r7@61
  int v93; // r4@61
  Tessellator *v98; // r9@68
  float v99; // r2@68
  float v100; // r6@68
  float v101; // r1@68
  float v103; // r4@68
  int v104; // r0@68
  float v106; // [sp+0h] [bp-118h]@7
  float v107; // [sp+4h] [bp-114h]@7
  float v108; // [sp+8h] [bp-110h]@7
  float v109; // [sp+Ch] [bp-10Ch]@59
  float v110; // [sp+10h] [bp-108h]@59
  float v111; // [sp+14h] [bp-104h]@59
  TextureUVCoordinateSet *v112; // [sp+18h] [bp-100h]@30
  Tessellator *v113; // [sp+1Ch] [bp-FCh]@1
  int v114; // [sp+20h] [bp-F8h]@59
  int v115; // [sp+24h] [bp-F4h]@59
  int v116; // [sp+28h] [bp-F0h]@59
  int v117; // [sp+2Ch] [bp-ECh]@59
  float v118; // [sp+30h] [bp-E8h]@59
  float v119; // [sp+34h] [bp-E4h]@46
  float x; // [sp+38h] [bp-E0h]@2
  const Block *v121; // [sp+3Ch] [bp-DCh]@2
  int v122[2]; // [sp+40h] [bp-D8h]@30
  float v123; // [sp+48h] [bp-D0h]@30
  __int64 v124; // [sp+4Ch] [bp-CCh]@30
  float v125; // [sp+54h] [bp-C4h]@30
  __int64 v126; // [sp+58h] [bp-C0h]@30
  float v127; // [sp+60h] [bp-B8h]@30
  float v128; // [sp+64h] [bp-B4h]@30
  int v129; // [sp+68h] [bp-B0h]@30
  float v130; // [sp+6Ch] [bp-ACh]@30
  float v131; // [sp+70h] [bp-A8h]@30
  signed int v132; // [sp+74h] [bp-A4h]@30
  float v133; // [sp+78h] [bp-A0h]@30
  float v134; // [sp+7Ch] [bp-9Ch]@30
  int v135; // [sp+80h] [bp-98h]@30
  float v136; // [sp+84h] [bp-94h]@30
  float v137; // [sp+88h] [bp-90h]@30
  int v138; // [sp+8Ch] [bp-8Ch]@30
  float v139; // [sp+90h] [bp-88h]@30
  float v140; // [sp+94h] [bp-84h]@30
  signed int v141; // [sp+98h] [bp-80h]@30
  float v142; // [sp+9Ch] [bp-7Ch]@30
  unsigned __int8 v143; // [sp+A4h] [bp-74h]@19
  unsigned __int8 v144; // [sp+A5h] [bp-73h]@19
  float v145; // [sp+A8h] [bp-70h]@23

  v5 = this;
  v6 = a5;
  LODWORD(v7) = *((_BYTE *)this + 40);
  _R10 = a4;
  v9 = a5 & 7;
  v10 = a3;
  v113 = a2;
  if ( v7 == 0.0 )
  {
    x = 0.0;
    v121 = a3;
    *((_BYTE *)this + 40) = 1;
    v11 = Block::mCobblestoneWall;
    v12 = (BlockGraphics *)BlockGraphics::mBlocks[*(_BYTE *)(Block::mCobblestoneWall + 4)];
    v13 = (*(int (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)Block::mCobblestoneWall + 428))(
            Block::mCobblestoneWall,
            1,
            0);
    v14 = *((_WORD *)v5 + 24);
    v15 = *(int (__fastcall **)(int, unsigned int))(*(_DWORD *)v11 + 424);
    if ( (_BYTE)v14 )
    {
      v16 = v15(v11, v14 >> 8);
      v17 = BlockGraphics::getTexture(__PAIR__(1, (unsigned int)v12), v16, 0);
    }
    else
      v18 = v15(v11, 0);
      v17 = BlockGraphics::getTexture(v12, _R10, v13, v18);
    v19 = *(_DWORD *)(v17 + 4);
    v20 = *(_DWORD *)(v17 + 8);
    v21 = *(_DWORD *)(v17 + 12);
    v22 = *(_DWORD *)(v17 + 16);
    v23 = *(_DWORD *)(v17 + 20);
    v24 = v17;
    *((_DWORD *)v5 + 2) = *(_DWORD *)v17;
    *((_DWORD *)v5 + 3) = v19;
    *((_DWORD *)v5 + 4) = v20;
    *((_DWORD *)v5 + 5) = v21;
    *((_DWORD *)v5 + 6) = v22;
    *((_DWORD *)v5 + 7) = v23;
    EntityInteraction::setInteractText((int *)v5 + 8, (int *)(v17 + 24));
    *((_DWORD *)v5 + 9) = *(_DWORD *)(v24 + 28);
    v6 = a5;
    v10 = v121;
    v7 = x;
  }
  switch ( v9 )
    case 0:
      v106 = 0.75;
      v107 = 1.0;
      v25 = 4512606827687444480LL;
      v108 = 0.6875;
      LODWORD(v26) = (char *)v5 + 724;
      HIDWORD(v26) = 1048576000;
      break;
    case 1:
      v106 = 0.1875;
      v107 = 0.75;
      LODWORD(v108) = (char *)v5 + 724;
      v26 = (unsigned int)v5 + 724;
      v25 = 4512606827673812992LL;
    case 2:
      HIDWORD(v26) = 1062207488;
      v106 = 1.0;
    case 3:
      HIDWORD(v26) = 1050673152;
      v106 = 0.6875;
      v108 = 0.1875;
      v25 = 1048576000LL;
    case 4:
      v108 = 1.0;
      v25 = 4562146423574888448LL;
    default:
      v107 = 0.1875;
      v108 = 0.75;
      LODWORD(v25) = 0;
      goto LABEL_15;
    case 6:
      v27 = 0;
      v28 = 16176;
      v108 = *(float *)&v26;
      v25 = 4512606826625236992LL;
    case 7:
      LODWORD(v25) = 1062207488;
LABEL_15:
      HIDWORD(v25) = 1048576000;
  AABB::set(v26, v25, v106, v107, v108);
  BlockTessellator::tessellateBlockInWorld(v5, v113, v10, _R10, v6);
    *((_BYTE *)v5 + 40) = 0;
  if ( *((_BYTE *)v5 + 48) )
    _R1 = (unsigned __int8)Brightness::MAX;
    v143 = Brightness::MAX;
    v144 = Brightness::MAX;
    _R2 = (unsigned __int8)Brightness::MAX;
  else
    BlockTessellatorCache::getLightColor(
      (BlockTessellatorCache *)&v143,
      (BlockTessellator *)((char *)v5 + 812),
      (int)_R10);
    _R1 = v143;
    _R2 = v144;
    v31 = *((_BYTE *)v5 + 48);
  __asm
    VMOV            S0, R2
    VLDR            S4, =0.0625
    VMOV            S2, R1
    VCVT.F32.U32    S0, S0
    VCVT.F32.U32    S2, S2
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S4
    VSTR            S0, [SP,#0x118+var_70]
    VSTR            S2, [SP,#0x118+var_6C]
  if ( _ZF )
    Tessellator::tex1((int)v113, (__int64 *)&v145);
  Tessellator::color(v113, 1.0, 1.0, 1.0, 1.0);
  if ( *((_BYTE *)v5 + 40) )
    _R5 = (int)v5 + 8;
    _R5 = BlockGraphics::getTexture((BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v10 + 4)], _R10, 0, 0);
  _R0 = *(_WORD *)(_R5 + 20);
    VMOV            S0, R0
    VCVT.F32.U32    S20, S0
    VLDR            S16, [R5,#4]
    VLDR            S18, [R5,#0xC]
    VCMPE.F32       S18, S16
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm
      VMUL.F32        S0, S20, S16
      VMOV            R0, S0
    v40 = roundf(_R0);
    __asm { VMUL.F32        S0, S20, S18 }
    _R4 = v40;
      VMUL.F32        S0, S20, S18
    _R4 = roundf(_R0);
    __asm { VMUL.F32        S0, S20, S16 }
  __asm { VMOV            R0, S0 }
  _R0 = roundf(_R0);
    VMOV            S2, R4
    VCVTR.S32.F32   S0, S0
    VCVTR.S32.F32   S2, S2
    VMOV.F32        S4, #-0.5
    VLDR            S20, [R5,#8]
    VLDR            S22, [R5,#0x10]
    VMOV.F32        S3, #0.5
  v112 = (TextureUVCoordinateSet *)_R5;
  __asm { VMOV.F32        S31, #-0.375 }
  v43 = 0;
    VMOV            R0, S0
    VLDR            S12, =0.22222
    VMOV            R1, S2
    VLDR            S29, =-0.0625
    VMOV.F32        S0, #0.875
    VMOV.F32        S2, #0.125
  v121 = (const Block *)(v6 & 8);
  v46 = 0;
  _R0 = (unsigned __int16)(_R1 - _R0);
  v122[0] = -1115684864;
  v122[1] = 0;
  v123 = -0.0625;
  __asm { VMOV            S1, R0 }
  _R1 = &mce::Math::PI;
  v124 = 1031798784LL;
  v125 = -0.0625;
  v126 = 1031798784LL;
  v127 = 0.0625;
  v128 = -0.0625;
  v129 = 0;
  v130 = 0.0625;
  v131 = -0.0625;
  v132 = 1059061760;
  v133 = -0.0625;
  v134 = 0.0625;
  v135 = 1059061760;
  v136 = -0.0625;
  v137 = 0.0625;
  v138 = 1059061760;
  v139 = 0.0625;
  v140 = -0.0625;
  v141 = 1059061760;
  v142 = 0.0625;
    VLDR            S14, [R1]
    VLDR            S8, [R10,#4]
    VLDR            S10, [R10,#8]
    VMUL.F32        S4, S14, S4
    VLDR            S6, [R10]
    VMUL.F32        S30, S14, S12
    VCVT.F32.S32    S10, S10
    VLDR            S12, =-0.22222
    VCVT.F32.S32    S8, S8
    VCVT.F32.U32    S1, S1
    VMUL.F32        S12, S14, S12
    VMOV            R10, S14
    VADD.F32        S23, S10, S3
    VADD.F32        S19, S8, S0
    VSTR            S1, [SP,#0x118+var_E8]
    VCVT.F32.S32    S6, S6
    VSTR            S4, [SP,#0x118+var_E4]
    VMUL.F32        S4, S14, S3
    VMOV            R0, S12
    VADD.F32        S21, S8, S2
    VADD.F32        S25, S8, S3
    VMOV.F32        S0, S29
    VADD.F32        S27, S6, S3
    VMOV            R5, S4
  x = _R0;
  while ( 1 )
    _R8 = &v122[v46];
    if ( v121 )
      __asm
      {
        VADD.F32        S26, S0, S29
        VMOV            R4, S30
        VSTR            S26, [R8,#8]
      }
      __asm { VLDR            S2, =0.0625 }
      _R4 = x;
        VADD.F32        S26, S0, S2
    _R0 = cosf(_R4);
      VMOV            S17, R0
      VLDR            S28, [R8,#4]
    _R0 = sinf(_R4);
      VMOV            S0, R0
      VMUL.F32        S2, S28, S17
      VMUL.F32        S4, S26, S0
      VMUL.F32        S6, S26, S17
      VMUL.F32        S0, S28, S0
      VADD.F32        S17, S4, S2
      VSUB.F32        S26, S6, S0
      VSTR            S17, [R8,#4]
      VSTR            S26, [R8,#8]
    if ( !_ZF )
      _ZF = v9 == 7;
      if ( v9 != 6 )
        goto LABEL_43;
      __asm { VLDR            S28, [R8] }
LABEL_42:
      _R0 = cosf(_R5);
      __asm { VMOV            S24, R0 }
      _R0 = sinf(_R5);
        VMOV            S0, R0
        VMUL.F32        S2, S28, S24
        VMUL.F32        S4, S26, S0
        VMUL.F32        S0, S28, S0
        VMUL.F32        S6, S26, S24
        VADD.F32        S2, S4, S2
        VSUB.F32        S26, S6, S0
        VSTR            S2, [R4]
      goto LABEL_43;
    _R0 = cosf(_R10);
      VMOV            S24, R0
      VLDR            S28, [R8]
    _R0 = sinf(_R10);
      VMUL.F32        S2, S28, S24
      VMUL.F32        S4, S17, S0
      VMUL.F32        S6, S17, S24
      VADD.F32        S28, S4, S2
      VSUB.F32        S17, S6, S0
      VSTR            S28, [R8]
    if ( _ZF || !(a5 & 7) )
      goto LABEL_42;
LABEL_43:
    if ( (unsigned int)(v9 - 1) > 3 )
        VLDR            S0, [R8]
        VADD.F32        S0, S27, S0
        VSTR            S0, [R8]
      if ( _ZF || !(a5 & 7) )
        __asm { VADD.F32        S0, S19, S17 }
      else
        __asm { VADD.F32        S0, S21, S17 }
        VADD.F32        S2, S23, S26
        VSTR            S0, [R8,#4]
        VSTR            S2, [R8,#8]
      __asm { VADD.F32        S24, S17, S31 }
      __asm { VMOV            S28, R0 }
        VMUL.F32        S8, S26, S28
        VMUL.F32        S6, S0, S24
        VADD.F32        S26, S4, S2
        VSUB.F32        S17, S8, S6
        VSTR            S26, [R8,#4]
        VSTR            S17, [R8,#8]
      if ( !(!_ZF & _CF) )
        switch ( v9 )
        {
          case 0:
            __asm
            {
              VLDR            S0, [SP,#0x118+var_E4]; jumptable 00EA7E92 case 0
              VMOV            R4, S0
            }
            _R0 = sinf(_R4);
              VMOV            S28, R0
              VLDR            S24, [R8]
            v65 = _R4;
            goto LABEL_54;
          case 1:
              VLDR            S2, [R8]; jumptable 00EA7E92 case 1
              VMUL.F32        S4, S0, S17
              VMUL.F32        S8, S28, S17
              VMUL.F32        S0, S2, S0
              VMUL.F32        S6, S2, S28
              VSUB.F32        S17, S8, S0
              VADD.F32        S2, S6, S4
            goto LABEL_55;
          case 2:
            _R0 = sinf(_R10);
            v65 = _R10;
LABEL_54:
            _R0 = cosf(v65);
              VMOV            S0, R0
              VMUL.F32        S2, S28, S17
              VMUL.F32        S4, S24, S0
              VMUL.F32        S6, S24, S28
              VMUL.F32        S0, S0, S17
              VADD.F32        S2, S4, S2
              VSUB.F32        S17, S0, S6
LABEL_55:
            __asm { VSTR            S2, [R8] }
            goto LABEL_56;
          case 3:
LABEL_56:
            __asm { VSTR            S17, [R8,#8]; jumptable 00EA7E92 case 3 }
            break;
          default:
        }
        VLDR            S0, [R8]; jumptable 00EA7E92 default case
        VADD.F32        S2, S25, S26
        VADD.F32        S4, S23, S17
        VSTR            S2, [R8,#4]
        VSTR            S4, [R8,#8]
    v46 += 3;
    if ( v46 == 24 )
    ++v43;
    __asm { VLDR            S0, [R8,#0x14] }
    VMOV.F32        S4, #0.4375
    VLDR            S8, [SP,#0x118+var_E8]
    VMOV.F32        S2, #0.375
    VLDR            S26, =-0.0001
    VMOV.F32        S0, #0.5625
    VLDR            S28, =0.0001
    VMOV.F32        S6, #0.5
  v68 = 0;
  v69 = 0.0;
  v70 = 0;
  v71 = 0.0;
  v72 = 0.0;
  v73 = 0;
  v74 = 0.0;
  __asm { VMUL.F32        S4, S8, S4 }
  v75 = 0.0;
    VMUL.F32        S2, S8, S2
    VMUL.F32        S0, S8, S0
    VMUL.F32        S24, S8, S6
    VMOV            R0, S4
  v111 = _R0;
  __asm { VMOV            R0, S2 }
  v110 = _R0;
  v109 = _R0;
  v117 = 0;
  v116 = 0;
  v118 = 0.0;
  v114 = 0;
  v115 = 0;
  do
    switch ( v68 )
      case 0u:
        v79 = v112;
        v121 = v68;
        _R4 = TextureUVCoordinateSet::offsetWidthPixel(v112, v111, 0.0);
        _R5 = TextureUVCoordinateSet::offsetHeightPixel(v79, v110, 0.0);
        v82 = TextureUVCoordinateSet::offsetWidthPixel(v79, v109, 0.0);
        __asm { VMOV            R1, S24 }
        _R9 = v82;
        _R0 = TextureUVCoordinateSet::offsetHeightPixel(v79, _R1, 0.0);
        v87 = v122[1];
        v86 = *(float *)v122;
        __asm { VMOV            S16, R4 }
        v89 = v124;
        v88 = LODWORD(v123);
        __asm
          VMOV            S20, R5
          VMOV            S18, R9
        x = v130;
        __asm { VMOV            S22, R0 }
        v90 = v129;
        v119 = v128;
        v74 = v127;
        v91 = HIDWORD(v126);
        v92 = *(float *)&v126;
        v75 = v125;
        v93 = HIDWORD(v124);
        break;
      case 1u:
        v119 = v131;
        v90 = v132;
        x = v133;
        v91 = v135;
        v92 = v134;
        v75 = v139;
        v93 = v138;
        *(float *)&v89 = v137;
        v74 = v136;
        v88 = LODWORD(v142);
        v87 = v141;
        v86 = v140;
      case 2u:
        _R7 = v112;
        _R5 = TextureUVCoordinateSet::offsetWidthPixel(v112, v111, 0.0);
        _R9 = TextureUVCoordinateSet::offsetHeightPixel(_R7, v110, 0.0);
        _R0 = TextureUVCoordinateSet::offsetWidthPixel(_R7, v109, 0.0);
        __asm { VMOV            S16, R5 }
        x = v136;
        __asm { VMOV            S20, R9 }
        v93 = v122[1];
        v89 = v122[0];
        __asm { VMOV            S18, R0 }
        v86 = *(float *)&v124;
        v75 = v123;
        __asm { VLDR            S22, [R7,#0x10] }
        v90 = v135;
        v119 = v134;
        v74 = v133;
        v91 = v132;
        v92 = v131;
        v88 = LODWORD(v125);
        v87 = SHIDWORD(v124);
      case 3u:
        x = v139;
        v90 = v138;
        v119 = v137;
        v86 = *(float *)&v126;
        v88 = LODWORD(v127);
        v87 = SHIDWORD(v126);
      case 4u:
        x = v142;
        v90 = v141;
        v119 = v140;
        v93 = HIDWORD(v126);
        v89 = v126;
        v86 = v128;
        v75 = v127;
        v74 = v139;
        v91 = v138;
        v92 = v137;
        v88 = LODWORD(v130);
        v87 = v129;
      case 5u:
        v74 = v142;
        v91 = v141;
        v92 = v140;
        v75 = v130;
        v93 = v129;
        *(float *)&v89 = v128;
      default:
        x = v71;
        v90 = v70;
        v119 = v69;
        v91 = v73;
        v86 = v118;
        v92 = v72;
        v93 = v116;
        v89 = v117;
        v88 = v115;
        v87 = v114;
    __asm { VADD.F32        S30, S22, S26 }
    v114 = v87;
    v115 = v88;
    __asm { VADD.F32        S17, S16, S28 }
    v116 = v93;
    v117 = v89;
    v98 = v113;
    v99 = *(float *)&v87;
    v118 = v86;
    v100 = *(float *)&v89;
      VSTR            S17, [SP,#0x118+var_118]
      VSTR            S30, [SP,#0x118+var_114]
    Tessellator::vertexUV(v113, v86, v99, *(float *)&v88, v106, v107);
      VADD.F32        S19, S18, S26
      VSTR            S19, [SP,#0x118+var_118]
    Tessellator::vertexUV(v98, v100, *(float *)&v93, v75, v106, v107);
    v101 = v92;
    v72 = v92;
    __asm { VSTMEA          SP, {S19-S20} }
    v73 = v91;
    Tessellator::vertexUV(v98, v101, *(float *)&v91, v74, v106, v107);
    v69 = v119;
    v103 = x;
      VSTR            S20, [SP,#0x118+var_114]
    Tessellator::vertexUV(v98, v119, *(float *)&v90, x, v106, v107);
    v104 = v90;
    v71 = v103;
    v70 = v104;
    v68 = (const Block *)((char *)v121 + 1);
  while ( (const Block *)((char *)v121 + 1) != (const Block *)6 );
  return 1;
}


int __fastcall BlockTessellator::getWaterHeight(BlockTessellator *this, const BlockPos *a2, const Material *a3)
{
  const Material *v7; // r10@1
  const BlockPos *v8; // r5@1
  BlockTessellator *v9; // r6@1
  unsigned int v11; // r4@1
  __int64 v12; // r1@2
  int v13; // r2@2
  BlockSource *v14; // r0@2
  int v15; // r0@2
  Material *v16; // r7@3
  int v17; // r1@3
  unsigned int v18; // r0@4
  LiquidBlock *v19; // r7@5
  int result; // r0@15
  unsigned int v23; // [sp+0h] [bp-58h]@2
  __int64 v24; // [sp+4h] [bp-54h]@2
  unsigned int v25; // [sp+Ch] [bp-4Ch]@2
  int v26; // [sp+10h] [bp-48h]@2
  int v27; // [sp+14h] [bp-44h]@2

  __asm
  {
    VMOV.F32        S20, #10.0
    VLDR            S18, =0.0
    VMOV.F32        S16, #1.0
  }
  v7 = a3;
  v8 = a2;
  v9 = this;
  _R11 = 0;
  v11 = 0;
  while ( 1 )
    LODWORD(v12) = *((_DWORD *)v8 + 1);
    v13 = *((_DWORD *)v8 + 2);
    v25 = *(_DWORD *)v8 - (v11 & 1);
    v26 = v12;
    HIDWORD(v12) = v13 - ((v11 >> 1) & 1);
    v27 = HIDWORD(v12);
    v14 = (BlockSource *)*((_DWORD *)v9 + 1);
    LODWORD(v12) = v12 + 1;
    v23 = v25;
    v24 = v12;
    v15 = BlockSource::getMaterial(v14, (const BlockPos *)&v23);
    if ( Material::operator==(v15, (int)v7) )
      break;
    v16 = (Material *)BlockSource::getMaterial(*((BlockSource **)v9 + 1), (const BlockPos *)&v25);
    if ( Material::operator==((int)v16, (int)v7) == 1 )
    {
      v18 = *((_WORD *)v9 + 24);
      if ( (_BYTE)v18 )
        v19 = (LiquidBlock *)(v18 >> 8);
      else
        v19 = (LiquidBlock *)BlockSource::getData(*((BlockSource **)v9 + 1), (const BlockPos *)&v25);
      if ( (unsigned __int8)((_BYTE)v19 - 1) >= 7u )
      {
        _R0 = LiquidBlock::getHeightFromData(v19, v17);
        __asm { VMOV            S0, R0 }
        _R11 += 10;
        __asm
        {
          VMUL.F32        S0, S0, S20
          VADD.F32        S18, S0, S18
        }
      }
      _R0 = LiquidBlock::getHeightFromData(v19, v17);
      __asm
        VMOV            S0, R0
        VADD.F32        S18, S0, S18
      goto LABEL_12;
    }
    if ( !Material::isSolid(v16) )
      __asm { VADD.F32        S18, S18, S16 }
LABEL_12:
      ++_R11;
    if ( (signed int)++v11 >= 4 )
        VMOV            S0, R11
        VCVT.F32.S32    S0, S0
        VDIV.F32        S0, S18, S0
        VSUB.F32        S16, S16, S0
  __asm { VMOV            R0, S16 }
  return result;
}


int __fastcall BlockTessellator::_getBlockColor(BlockTessellator *this, const BlockPos *a2, const Block *a3, int a4)
{
  const BlockPos *v4; // r8@1
  int v5; // r6@1
  BlockTessellator *v6; // r4@1
  BlockSource *v7; // r7@1
  const Block *v8; // r5@1
  int (__fastcall *v9)(int, BlockSource *, const Block *, unsigned int); // r9@1
  unsigned int v10; // r0@1
  int result; // r0@1

  v4 = a2;
  v5 = a4;
  v6 = this;
  v7 = (BlockSource *)*((_DWORD *)a2 + 1);
  v8 = a3;
  v9 = *(int (__fastcall **)(int, BlockSource *, const Block *, unsigned int))(*(_DWORD *)a4 + 392);
  v10 = BlockSource::getData(v7, a3);
  _R0 = v9(v5, v7, v8, v10);
  _R1 = (unsigned __int16)_R0 >> 8;
  _R2 = (_R0 >> 16) & 0xFF;
  __asm
  {
    VLDR            S8, =0.0039216
    VMOV            S0, R2
  }
  _R2 = (unsigned __int8)_R0;
  _R0 >>= 24;
    VMOV            S4, R2
    VMOV            S2, R1
    VMOV            S6, R0
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VCVT.F32.S32    S6, S6
    VMUL.F32        S0, S0, S8
    VMUL.F32        S2, S2, S8
    VMUL.F32        S4, S4, S8
    VMUL.F32        S6, S6, S8
    VSTR            S0, [R4]
    VSTR            S2, [R4,#4]
    VSTR            S4, [R4,#8]
    VSTR            S6, [R4,#0xC]
  result = (*(int (__fastcall **)(int, _DWORD, const Block *))(*(_DWORD *)v5 + 400))(v5, *((_DWORD *)v4 + 1), v8);
  if ( result == 1 )
    result = 1065353216;
    *((_DWORD *)v6 + 2) = 1065353216;
  return result;
}


signed int __fastcall BlockTessellator::tessellateEndGatewayInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  Tessellator *v9; // r11@1
  __int64 *v10; // r1@1
  const BlockPos *v11; // r6@1
  signed int v17; // [sp+Ch] [bp-2C4h]@2
  __int64 *v18; // [sp+10h] [bp-2C0h]@2
  float v19; // [sp+14h] [bp-2BCh]@4
  float v22; // [sp+20h] [bp-2B0h]@4
  float v23; // [sp+2Ch] [bp-2A4h]@4
  float v26; // [sp+38h] [bp-298h]@4
  float v27; // [sp+44h] [bp-28Ch]@4
  float v30; // [sp+50h] [bp-280h]@4
  float v31; // [sp+5Ch] [bp-274h]@4
  float v34; // [sp+68h] [bp-268h]@4
  int v35; // [sp+74h] [bp-25Ch]@4
  signed int v36; // [sp+78h] [bp-258h]@4
  int v37; // [sp+7Ch] [bp-254h]@4
  float v38; // [sp+84h] [bp-24Ch]@4
  float v41; // [sp+90h] [bp-240h]@4
  float v42; // [sp+9Ch] [bp-234h]@4
  float v45; // [sp+A8h] [bp-228h]@4
  float v46; // [sp+B4h] [bp-21Ch]@4
  float v49; // [sp+C0h] [bp-210h]@4
  char v50; // [sp+CCh] [bp-204h]@4
  int v51; // [sp+D8h] [bp-1F8h]@4
  signed int v52; // [sp+DCh] [bp-1F4h]@4
  int v53; // [sp+E0h] [bp-1F0h]@4
  float v54; // [sp+E8h] [bp-1E8h]@4
  float v57; // [sp+F4h] [bp-1DCh]@4
  float v58; // [sp+100h] [bp-1D0h]@4
  float v61; // [sp+10Ch] [bp-1C4h]@4
  float v62; // [sp+118h] [bp-1B8h]@4
  float v65; // [sp+124h] [bp-1ACh]@4
  float v66; // [sp+130h] [bp-1A0h]@4
  float v69; // [sp+13Ch] [bp-194h]@4
  int v70; // [sp+148h] [bp-188h]@4
  signed int v71; // [sp+14Ch] [bp-184h]@4
  signed int v72; // [sp+150h] [bp-180h]@4
  float v73; // [sp+158h] [bp-178h]@4
  float v76; // [sp+164h] [bp-16Ch]@4
  float v77; // [sp+170h] [bp-160h]@4
  float v80; // [sp+17Ch] [bp-154h]@4
  float v81; // [sp+188h] [bp-148h]@4
  float v84; // [sp+194h] [bp-13Ch]@4
  char v85; // [sp+1A0h] [bp-130h]@4
  int v86; // [sp+1ACh] [bp-124h]@4
  signed int v87; // [sp+1B0h] [bp-120h]@4
  int v88; // [sp+1B4h] [bp-11Ch]@4
  float v89; // [sp+1BCh] [bp-114h]@4
  float v92; // [sp+1C8h] [bp-108h]@4
  float v93; // [sp+1D4h] [bp-FCh]@4
  float v96; // [sp+1E0h] [bp-F0h]@4
  float v97; // [sp+1ECh] [bp-E4h]@4
  float v100; // [sp+1F8h] [bp-D8h]@4
  char v101; // [sp+204h] [bp-CCh]@4
  int v102; // [sp+210h] [bp-C0h]@4
  int v103; // [sp+214h] [bp-BCh]@4
  int v104; // [sp+218h] [bp-B8h]@4
  float v105; // [sp+220h] [bp-B0h]@4
  float v108; // [sp+22Ch] [bp-A4h]@4
  float v109; // [sp+238h] [bp-98h]@4
  float v112; // [sp+244h] [bp-8Ch]@4
  float v113; // [sp+250h] [bp-80h]@4
  float v116; // [sp+25Ch] [bp-74h]@4
  float v117; // [sp+268h] [bp-68h]@4
  float v120; // [sp+274h] [bp-5Ch]@4
  int v121; // [sp+280h] [bp-50h]@4
  signed int v122; // [sp+284h] [bp-4Ch]@4
  signed int v123; // [sp+288h] [bp-48h]@4

  __asm { VMOV.F32        S18, #1.0 }
  v9 = a2;
  __asm { VLDR            S16, =0.0625 }
  v10 = (__int64 *)&unk_27CCE90;
  v11 = a4;
  _R7 = &Vec3::UNIT_Y;
  _R4 = 16;
  _R10 = &Vec3::UNIT_Z;
  _R8 = Vec3::UNIT_X;
  do
  {
    v17 = _R4;
    v18 = v10;
    Tessellator::tex((int)v9, v10);
    __asm
    {
      VMOV            S0, R4
      VCVT.F32.S32    S0, S0
      VMUL.F32        S20, S0, S16
    }
    if ( _ZF )
      __asm { VMOVEQ.F32      S20, S18 }
    v121 = 1056964608;
    v122 = 1065353216;
    v123 = 1056964608;
    __asm { VSTR            S20, [SP,#0x2D0+var_44] }
    Tessellator::color(v9, (const Color *)&v121);
    Vec3::Vec3((int)&v117, (int)v11);
      VLDR            S0, [R7]
      VLDR            S6, [SP,#0x2D0+var_68]
      VLDR            S2, [R7,#4]
      VLDR            S8, [SP,#0x2D0+var_64]
      VADD.F32        S0, S0, S6
      VLDR            S4, [R7,#8]
      VLDR            S10, [SP,#0x2D0+var_60]
      VADD.F32        S2, S2, S8
      VADD.F32        S4, S4, S10
      VSTR            S0, [SP,#0x2D0+var_5C]
      VSTR            S2, [SP,#0x2D0+var_58]
      VSTR            S4, [SP,#0x2D0+var_54]
    Tessellator::vertex(v9, (const Vec3 *)&v120);
    Vec3::Vec3((int)&v113, (int)v11);
      VLDR            S6, [SP,#0x2D0+var_80]
      VLDR            S8, [SP,#0x2D0+var_7C]
      VLDR            S10, [SP,#0x2D0+var_78]
      VLDR            S6, [R10]
      VLDR            S8, [R10,#4]
      VLDR            S10, [R10,#8]
      VSTR            S0, [SP,#0x2D0+var_74]
      VSTR            S2, [SP,#0x2D0+var_70]
      VSTR            S4, [SP,#0x2D0+var_6C]
    Tessellator::vertex(v9, (const Vec3 *)&v116);
    Vec3::Vec3((int)&v109, (int)v11);
      VLDR            S6, [SP,#0x2D0+var_98]
      VLDR            S8, [SP,#0x2D0+var_94]
      VLDR            S10, [SP,#0x2D0+var_90]
      VLDR            S6, [R8]
      VLDR            S8, [R8,#4]
      VLDR            S10, [R8,#8]
      VSTR            S0, [SP,#0x2D0+var_8C]
      VSTR            S2, [SP,#0x2D0+var_88]
      VSTR            S4, [SP,#0x2D0+var_84]
    Tessellator::vertex(v9, (const Vec3 *)&v112);
    Vec3::Vec3((int)&v105, (int)v11);
      VLDR            S6, [SP,#0x2D0+var_B0]
      VLDR            S8, [SP,#0x2D0+var_AC]
      VLDR            S10, [SP,#0x2D0+var_A8]
      VSTR            S0, [SP,#0x2D0+var_A4]
      VSTR            S2, [SP,#0x2D0+var_A0]
      VSTR            S4, [SP,#0x2D0+var_9C]
    Tessellator::vertex(v9, (const Vec3 *)&v108);
    v102 = 1056964608;
    v103 = 0;
    v104 = 1056964608;
    __asm { VSTR            S20, [SP,#0x2D0+var_B4] }
    Tessellator::color(v9, (const Color *)&v102);
    Vec3::Vec3((int)&v101, (int)v11);
    Tessellator::vertex(v9, (const Vec3 *)&v101);
    Vec3::Vec3((int)&v97, (int)v11);
      VLDR            S0, [R8]
      VLDR            S6, [SP,#0x2D0+var_E4]
      VLDR            S2, [R8,#4]
      VLDR            S8, [SP,#0x2D0+var_E0]
      VLDR            S4, [R8,#8]
      VLDR            S10, [SP,#0x2D0+var_DC]
      VSTR            S0, [SP,#0x2D0+var_D8]
      VSTR            S2, [SP,#0x2D0+var_D4]
      VSTR            S4, [SP,#0x2D0+var_D0]
    Tessellator::vertex(v9, (const Vec3 *)&v100);
    Vec3::Vec3((int)&v93, (int)v11);
      VLDR            S0, [R10]
      VLDR            S6, [SP,#0x2D0+var_FC]
      VLDR            S2, [R10,#4]
      VLDR            S8, [SP,#0x2D0+var_F8]
      VLDR            S4, [R10,#8]
      VLDR            S10, [SP,#0x2D0+var_F4]
      VSTR            S0, [SP,#0x2D0+var_F0]
      VSTR            S2, [SP,#0x2D0+var_EC]
      VSTR            S4, [SP,#0x2D0+var_E8]
    Tessellator::vertex(v9, (const Vec3 *)&v96);
    Vec3::Vec3((int)&v89, (int)v11);
      VLDR            S6, [SP,#0x2D0+var_114]
      VLDR            S8, [SP,#0x2D0+var_110]
      VLDR            S10, [SP,#0x2D0+var_10C]
      VSTR            S0, [SP,#0x2D0+var_108]
      VSTR            S2, [SP,#0x2D0+var_104]
      VSTR            S4, [SP,#0x2D0+var_100]
    Tessellator::vertex(v9, (const Vec3 *)&v92);
    v86 = 0;
    v87 = 1056964608;
    v88 = 1056964608;
    __asm { VSTR            S20, [SP,#0x2D0+var_118] }
    Tessellator::color(v9, (const Color *)&v86);
    Vec3::Vec3((int)&v85, (int)v11);
    Tessellator::vertex(v9, (const Vec3 *)&v85);
    Vec3::Vec3((int)&v81, (int)v11);
      VLDR            S6, [SP,#0x2D0+var_148]
      VLDR            S8, [SP,#0x2D0+var_144]
      VLDR            S10, [SP,#0x2D0+var_140]
      VSTR            S0, [SP,#0x2D0+var_13C]
      VSTR            S2, [SP,#0x2D0+var_138]
      VSTR            S4, [SP,#0x2D0+var_134]
    Tessellator::vertex(v9, (const Vec3 *)&v84);
    Vec3::Vec3((int)&v77, (int)v11);
      VLDR            S6, [SP,#0x2D0+var_160]
      VLDR            S8, [SP,#0x2D0+var_15C]
      VLDR            S10, [SP,#0x2D0+var_158]
      VLDR            S6, [R7]
      VLDR            S8, [R7,#4]
      VLDR            S10, [R7,#8]
      VSTR            S0, [SP,#0x2D0+var_154]
      VSTR            S2, [SP,#0x2D0+var_150]
      VSTR            S4, [SP,#0x2D0+var_14C]
    Tessellator::vertex(v9, (const Vec3 *)&v80);
    Vec3::Vec3((int)&v73, (int)v11);
      VLDR            S6, [SP,#0x2D0+var_178]
      VLDR            S8, [SP,#0x2D0+var_174]
      VLDR            S10, [SP,#0x2D0+var_170]
      VSTR            S0, [SP,#0x2D0+var_16C]
      VSTR            S2, [SP,#0x2D0+var_168]
      VSTR            S4, [SP,#0x2D0+var_164]
    Tessellator::vertex(v9, (const Vec3 *)&v76);
    v70 = 1065353216;
    v71 = 1056964608;
    v72 = 1056964608;
    __asm { VSTR            S20, [SP,#0x2D0+var_17C] }
    Tessellator::color(v9, (const Color *)&v70);
    Vec3::Vec3((int)&v66, (int)v11);
      VLDR            S6, [SP,#0x2D0+var_1A0]
      VLDR            S8, [SP,#0x2D0+var_19C]
      VLDR            S10, [SP,#0x2D0+var_198]
      VSTR            S0, [SP,#0x2D0+var_194]
      VSTR            S2, [SP,#0x2D0+var_190]
      VSTR            S4, [SP,#0x2D0+var_18C]
    Tessellator::vertex(v9, (const Vec3 *)&v69);
    Vec3::Vec3((int)&v62, (int)v11);
      VLDR            S6, [SP,#0x2D0+var_1B8]
      VLDR            S8, [SP,#0x2D0+var_1B4]
      VLDR            S10, [SP,#0x2D0+var_1B0]
      VSTR            S0, [SP,#0x2D0+var_1AC]
      VSTR            S2, [SP,#0x2D0+var_1A8]
      VSTR            S4, [SP,#0x2D0+var_1A4]
    Tessellator::vertex(v9, (const Vec3 *)&v65);
    Vec3::Vec3((int)&v58, (int)v11);
      VLDR            S6, [SP,#0x2D0+var_1D0]
      VLDR            S8, [SP,#0x2D0+var_1CC]
      VLDR            S10, [SP,#0x2D0+var_1C8]
      VSTR            S0, [SP,#0x2D0+var_1C4]
      VSTR            S2, [SP,#0x2D0+var_1C0]
      VSTR            S4, [SP,#0x2D0+var_1BC]
    Tessellator::vertex(v9, (const Vec3 *)&v61);
    Vec3::Vec3((int)&v54, (int)v11);
      VLDR            S6, [SP,#0x2D0+var_1E8]
      VLDR            S8, [SP,#0x2D0+var_1E4]
      VLDR            S10, [SP,#0x2D0+var_1E0]
      VSTR            S0, [SP,#0x2D0+var_1DC]
      VSTR            S2, [SP,#0x2D0+var_1D8]
      VSTR            S4, [SP,#0x2D0+var_1D4]
    Tessellator::vertex(v9, (const Vec3 *)&v57);
    v51 = 1056964608;
    v52 = 1056964608;
    v53 = 0;
    __asm { VSTR            S20, [SP,#0x2D0+var_1EC] }
    Tessellator::color(v9, (const Color *)&v51);
    Vec3::Vec3((int)&v50, (int)v11);
    Tessellator::vertex(v9, (const Vec3 *)&v50);
    Vec3::Vec3((int)&v46, (int)v11);
      VLDR            S6, [SP,#0x2D0+var_21C]
      VLDR            S8, [SP,#0x2D0+var_218]
      VLDR            S10, [SP,#0x2D0+var_214]
      VSTR            S0, [SP,#0x2D0+var_210]
      VSTR            S2, [SP,#0x2D0+var_20C]
      VSTR            S4, [SP,#0x2D0+var_208]
    Tessellator::vertex(v9, (const Vec3 *)&v49);
    Vec3::Vec3((int)&v42, (int)v11);
      VLDR            S6, [SP,#0x2D0+var_234]
      VLDR            S8, [SP,#0x2D0+var_230]
      VLDR            S10, [SP,#0x2D0+var_22C]
      VSTR            S0, [SP,#0x2D0+var_228]
      VSTR            S2, [SP,#0x2D0+var_224]
      VSTR            S4, [SP,#0x2D0+var_220]
    Tessellator::vertex(v9, (const Vec3 *)&v45);
    Vec3::Vec3((int)&v38, (int)v11);
      VLDR            S6, [SP,#0x2D0+var_24C]
      VLDR            S8, [SP,#0x2D0+var_248]
      VLDR            S10, [SP,#0x2D0+var_244]
      VSTR            S0, [SP,#0x2D0+var_240]
      VSTR            S2, [SP,#0x2D0+var_23C]
      VSTR            S4, [SP,#0x2D0+var_238]
    Tessellator::vertex(v9, (const Vec3 *)&v41);
    v35 = 1056964608;
    v36 = 1056964608;
    v37 = 1065353216;
    __asm { VSTR            S20, [SP,#0x2D0+var_250] }
    Tessellator::color(v9, (const Color *)&v35);
    Vec3::Vec3((int)&v31, (int)v11);
      VLDR            S6, [SP,#0x2D0+var_274]
      VLDR            S8, [SP,#0x2D0+var_270]
      VLDR            S10, [SP,#0x2D0+var_26C]
      VSTR            S0, [SP,#0x2D0+var_268]
      VSTR            S2, [SP,#0x2D0+var_264]
      VSTR            S4, [SP,#0x2D0+var_260]
    Tessellator::vertex(v9, (const Vec3 *)&v34);
    Vec3::Vec3((int)&v27, (int)v11);
      VLDR            S6, [SP,#0x2D0+var_28C]
      VLDR            S8, [SP,#0x2D0+var_288]
      VLDR            S10, [SP,#0x2D0+var_284]
      VSTR            S0, [SP,#0x2D0+var_280]
      VSTR            S2, [SP,#0x2D0+var_27C]
      VSTR            S4, [SP,#0x2D0+var_278]
    Tessellator::vertex(v9, (const Vec3 *)&v30);
    Vec3::Vec3((int)&v23, (int)v11);
      VLDR            S6, [SP,#0x2D0+var_2A4]
      VLDR            S8, [SP,#0x2D0+var_2A0]
      VLDR            S10, [SP,#0x2D0+var_29C]
      VSTR            S0, [SP,#0x2D0+var_298]
      VSTR            S2, [SP,#0x2D0+var_294]
      VSTR            S4, [SP,#0x2D0+var_290]
    Tessellator::vertex(v9, (const Vec3 *)&v26);
    Vec3::Vec3((int)&v19, (int)v11);
      VLDR            S6, [SP,#0x2D0+var_2BC]
      VLDR            S8, [SP,#0x2D0+var_2B8]
      VLDR            S10, [SP,#0x2D0+var_2B4]
      VSTR            S0, [SP,#0x2D0+var_2B0]
      VSTR            S2, [SP,#0x2D0+var_2AC]
      VSTR            S4, [SP,#0x2D0+var_2A8]
    Tessellator::vertex(v9, (const Vec3 *)&v22);
    v10 = v18 + 1;
    --_R4;
  }
  while ( v17 );
  return 1;
}


int __fastcall BlockTessellator::_tex1(int a1, int a2, __int64 *a3)
{
  int result; // r0@1

  result = *(_BYTE *)(a1 + 48);
  if ( !result )
    result = j_j_j__ZN11Tessellator4tex1ERK4Vec2(a2, a3);
  return result;
}


signed int __fastcall BlockTessellator::tessellateTripwireHookInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  BlockTessellator *v5; // r9@1
  const BlockPos *v6; // r4@1
  const Block *v7; // r6@1
  int v8; // r0@1
  int v9; // r11@1
  float v10; // ST6C_4@1
  BlockState *v11; // r0@1
  BlockState *v12; // r0@1
  BlockGraphics *v13; // r0@1
  int v14; // r0@1
  int v15; // ST24_4@1
  int v16; // r3@1
  int v17; // r4@1
  int v18; // r5@1
  int v19; // r6@1
  int v20; // r7@1
  int v21; // r8@1
  unsigned int v22; // r0@1
  __int64 v23; // r0@2
  Tessellator *v24; // r4@2
  BlockTessellator *v25; // r11@2
  const BlockPos *v26; // r6@2
  int v27; // r9@5
  __int64 v28; // r0@6
  __int64 v29; // r0@7
  Tessellator *v30; // r8@10
  int v32; // r0@10
  int v33; // r3@10
  int v34; // r4@10
  int v35; // r5@10
  int v36; // r6@10
  int v37; // r7@10
  void *v38; // r0@10
  int v41; // r0@13
  int v51; // r0@21
  __int64 v54; // r1@22
  int v55; // r6@22
  unsigned __int16 v58; // r7@22
  int *v64; // r7@22
  int v65; // r9@22
  float v70; // r0@25
  int v82; // r8@42
  unsigned int v83; // r1@42
  int v84; // r2@42
  Block *v85; // r9@42
  int v86; // r3@42
  unsigned int v87; // r10@42
  unsigned int v88; // r11@42
  int v90; // r11@44
  unsigned int v91; // r5@44
  signed __int64 v92; // ST6C_8@44
  int v93; // r9@44
  float v96; // r1@44
  unsigned int v101; // r5@44
  int v102; // r12@44
  unsigned int v103; // r1@45
  int v104; // r2@45
  float v106; // ST70_4@46
  unsigned int v107; // ST58_4@46
  float v110; // r1@46
  float v113; // r3@52
  float v114; // r5@52
  float v115; // ST00_4@52
  float v116; // ST04_4@52
  float v117; // ST00_4@52
  float v118; // ST04_4@52
  float v119; // ST00_4@52
  float v120; // ST04_4@52
  int v121; // r5@53
  __int64 v122; // r1@53
  int *v123; // r7@53
  int *v126; // r8@57
  int *v133; // r8@64
  Block *v139; // r7@71
  int v140; // r1@71
  unsigned int v143; // r9@71
  int v144; // r11@71
  int v145; // r8@71
  unsigned int v146; // r5@73
  int v147; // r10@73
  int v148; // ST48_4@73
  int v149; // r11@73
  signed __int64 v150; // r6@73
  int v151; // r9@73
  unsigned int v158; // r3@73
  int v159; // r12@73
  unsigned int v160; // r1@73
  int v161; // r2@74
  int v162; // ST48_4@75
  float v163; // ST64_4@75
  int v164; // r11@75
  float v169; // r9@81
  float v170; // r11@81
  float v171; // r10@81
  float v172; // r1@81
  float v173; // r5@81
  float v174; // ST00_4@81
  float v175; // ST04_4@81
  float v176; // ST00_4@81
  float v177; // ST04_4@81
  float v178; // ST00_4@81
  float v179; // ST04_4@81
  Tessellator *v186; // r6@86
  float v193; // ST00_4@86
  float v194; // ST04_4@86
  float v198; // ST00_4@86
  float v199; // ST04_4@86
  float v203; // ST00_4@86
  float v204; // ST04_4@86
  float v208; // ST00_4@86
  float v209; // ST04_4@86
  float v212; // ST00_4@86
  float v213; // ST04_4@86
  float v217; // ST00_4@86
  float v218; // ST04_4@86
  float v225; // ST00_4@90
  float v226; // ST04_4@90
  float v230; // ST00_4@90
  float v231; // ST04_4@90
  float v235; // ST00_4@90
  float v236; // ST04_4@90
  float v240; // ST00_4@90
  float v241; // ST04_4@90
  float v245; // ST00_4@90
  float v246; // ST04_4@90
  float v249; // ST00_4@90
  float v250; // ST04_4@90
  float v257; // ST00_4@91
  float v258; // ST04_4@91
  float v262; // ST00_4@91
  float v263; // ST04_4@91
  float v266; // ST00_4@91
  float v267; // ST04_4@91
  float v271; // ST00_4@91
  float v272; // ST04_4@91
  float v276; // ST00_4@91
  float v277; // ST04_4@91
  float v281; // ST00_4@91
  float v282; // ST04_4@91
  float v293; // ST00_4@89
  float v294; // ST04_4@89
  float v298; // ST00_4@89
  float v299; // ST04_4@89
  float v302; // ST00_4@89
  float v303; // ST04_4@89
  float v307; // ST00_4@89
  float v308; // ST04_4@89
  float v312; // ST00_4@89
  float v313; // ST04_4@89
  float v317; // ST00_4@89
  float v318; // ST04_4@89
  unsigned int *v320; // r2@96
  signed int v321; // r1@98
  float v322; // [sp+0h] [bp-178h]@17
  float v323; // [sp+0h] [bp-178h]@86
  float v324; // [sp+4h] [bp-174h]@0
  float v325; // [sp+4h] [bp-174h]@86
  BlockTessellator *v326; // [sp+10h] [bp-168h]@42
  BlockGraphics *v327; // [sp+14h] [bp-164h]@1
  TextureUVCoordinateSet *v331; // [sp+24h] [bp-154h]@20
  BlockPos *v332; // [sp+28h] [bp-150h]@1
  BlockPos *v333; // [sp+28h] [bp-150h]@42
  float x; // [sp+2Ch] [bp-14Ch]@22
  float xa; // [sp+2Ch] [bp-14Ch]@71
  float v337; // [sp+30h] [bp-148h]@71
  TextureUVCoordinateSet *v338; // [sp+34h] [bp-144h]@19
  _BOOL4 v339; // [sp+38h] [bp-140h]@1
  signed int v340; // [sp+3Ch] [bp-13Ch]@2
  unsigned int v341; // [sp+40h] [bp-138h]@53
  int v342; // [sp+44h] [bp-134h]@42
  unsigned int v343; // [sp+48h] [bp-130h]@53
  int v344; // [sp+4Ch] [bp-12Ch]@72
  Tessellator *v345; // [sp+50h] [bp-128h]@1
  signed __int64 v346; // [sp+54h] [bp-124h]@42
  int v347; // [sp+5Ch] [bp-11Ch]@44
  int v348; // [sp+60h] [bp-118h]@44
  unsigned int v349; // [sp+64h] [bp-114h]@44
  float v350; // [sp+68h] [bp-110h]@42
  unsigned int v351; // [sp+68h] [bp-110h]@44
  unsigned int v352; // [sp+68h] [bp-110h]@73
  unsigned __int64 v353; // [sp+6Ch] [bp-10Ch]@42
  unsigned int v354; // [sp+6Ch] [bp-10Ch]@73
  int *v355; // [sp+70h] [bp-108h]@1
  int v356; // [sp+70h] [bp-108h]@73
  Block *v357; // [sp+74h] [bp-104h]@1
  Block *v358; // [sp+74h] [bp-104h]@44
  Block *v359; // [sp+74h] [bp-104h]@73
  int v360; // [sp+78h] [bp-100h]@22
  float v361; // [sp+7Ch] [bp-FCh]@22
  unsigned int v362; // [sp+80h] [bp-F8h]@22
  int v363; // [sp+84h] [bp-F4h]@22
  unsigned int v364; // [sp+88h] [bp-F0h]@22
  unsigned int v365; // [sp+8Ch] [bp-ECh]@22
  unsigned int v366; // [sp+90h] [bp-E8h]@22
  int v367; // [sp+94h] [bp-E4h]@22
  unsigned int v368; // [sp+98h] [bp-E0h]@22
  int v369; // [sp+9Ch] [bp-DCh]@22
  int v370; // [sp+A0h] [bp-D8h]@22
  unsigned int v371; // [sp+A4h] [bp-D4h]@22
  unsigned int v372; // [sp+A8h] [bp-D0h]@22
  int v373; // [sp+ACh] [bp-CCh]@22
  Block *v374; // [sp+B0h] [bp-C8h]@22
  __int64 v375; // [sp+B4h] [bp-C4h]@22
  Block *v376; // [sp+BCh] [bp-BCh]@22
  unsigned int v377; // [sp+C0h] [bp-B8h]@22
  int v378; // [sp+C4h] [bp-B4h]@22
  Block *v379; // [sp+C8h] [bp-B0h]@22
  unsigned int v380; // [sp+CCh] [bp-ACh]@22
  int v381; // [sp+D0h] [bp-A8h]@22
  unsigned int v382; // [sp+D4h] [bp-A4h]@22
  unsigned __int8 v383; // [sp+DCh] [bp-9Ch]@12
  unsigned __int8 v384; // [sp+DDh] [bp-9Bh]@12
  float v385; // [sp+E0h] [bp-98h]@16
  char v386; // [sp+E8h] [bp-90h]@10
  int v387; // [sp+100h] [bp-78h]@10
  int v388; // [sp+104h] [bp-74h]@10
  unsigned __int8 v389; // [sp+10Eh] [bp-6Ah]@1
  unsigned __int8 v390; // [sp+10Fh] [bp-69h]@1

  v5 = this;
  v6 = a4;
  v7 = a3;
  v345 = a2;
  v332 = a4;
  v357 = a3;
  v8 = Block::getBlockState(Block::mTripwireHook, 12);
  v9 = *(_DWORD *)(v8 + 4);
  v10 = *(float *)v8;
  v11 = (BlockState *)Block::getBlockState(Block::mTripwireHook, 2);
  v390 = a5;
  v339 = BlockState::getBool(v11, &v390);
  v12 = (BlockState *)Block::getBlockState(Block::mTripwireHook, 30);
  v389 = a5;
  BlockState::getBool(v12, &v389);
  v13 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v7 + 4)];
  *((_BYTE *)v5 + 40) = 1;
  v327 = v13;
  v14 = BlockGraphics::getTexture(v13, v6, 0, 0);
  v15 = (int)v5 + 8;
  v16 = *(_DWORD *)(v14 + 4);
  v17 = *(_DWORD *)(v14 + 8);
  v18 = *(_DWORD *)(v14 + 12);
  v19 = *(_DWORD *)(v14 + 16);
  v20 = *(_DWORD *)(v14 + 20);
  v21 = v14;
  *(_DWORD *)v15 = *(_DWORD *)v14;
  *(_DWORD *)(v15 + 4) = v16;
  *(_DWORD *)(v15 + 8) = v17;
  *(_DWORD *)(v15 + 12) = v18;
  *(_DWORD *)(v15 + 16) = v19;
  *(_DWORD *)(v15 + 20) = v20;
  v355 = (int *)((char *)v5 + 32);
  EntityInteraction::setInteractText((int *)v5 + 8, (int *)(v14 + 24));
  *((_DWORD *)v5 + 9) = *(_DWORD *)(v21 + 28);
  v22 = ((unsigned int)a5 >> (1 - v9 + LOBYTE(v10))) & (0xFu >> (4 - v9));
  if ( v22 == 2 )
  {
    v340 = 2;
    LODWORD(v23) = (char *)v5 + 724;
    HIDWORD(v23) = 1052770304;
    AABB::set(v23, 4566650023182126288LL, 0.625, 0.55, 1.0);
    v24 = v345;
    v25 = v5;
    v26 = v332;
  }
  else if ( v22 == 3 )
    v340 = 3;
    AABB::set((unsigned int)v5 + 724, 4521614026908421328LL, 0.125, 0.55, 0.625);
  else
    if ( v22 != 1 )
    {
      v27 = (int)v5 + 8;
      v340 = v22;
      if ( !v22 )
      {
        LODWORD(v28) = (char *)v25 + 724;
        HIDWORD(v28) = 1052770304;
        AABB::set(v28, 1028443344LL, 0.625, 0.55, 0.125);
      }
      goto LABEL_10;
    }
    v340 = 1;
    HIDWORD(v29) = 1063256064;
    LODWORD(v29) = (char *)v5 + 724;
    AABB::set(v29, 4521614026908421328LL, 1.0, 0.55, 0.625);
  v27 = (int)v5 + 8;
LABEL_10:
  v30 = v24;
  _R10 = v26;
  BlockTessellator::tessellateBlockInWorld(v25, v24, v357, v26, a5);
  *((_BYTE *)v25 + 40) = 0;
  v32 = TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)&v386);
  v33 = *(_DWORD *)(v32 + 4);
  v34 = *(_DWORD *)(v32 + 8);
  v35 = *(_DWORD *)(v32 + 12);
  v36 = *(_DWORD *)(v32 + 16);
  v37 = *(_DWORD *)(v32 + 20);
  *(_DWORD *)v27 = *(_DWORD *)v32;
  *(_DWORD *)(v27 + 4) = v33;
  *(_DWORD *)(v27 + 8) = v34;
  *(_DWORD *)(v27 + 12) = v35;
  *(_DWORD *)(v27 + 16) = v36;
  *(_DWORD *)(v27 + 20) = v37;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    v355,
    (int *)(v32 + 24));
  *((_DWORD *)v25 + 9) = v388;
  v38 = (void *)(v387 - 12);
  if ( (int *)(v387 - 12) != &dword_28898C0 )
    v320 = (unsigned int *)(v387 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v321 = __ldrex(v320);
      while ( __strex(v321 - 1, v320) );
    else
      v321 = (*v320)--;
    if ( v321 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v38);
  if ( *((_BYTE *)v25 + 48) )
    _R1 = (unsigned __int8)Brightness::MAX;
    v383 = Brightness::MAX;
    v384 = Brightness::MAX;
    _R2 = (unsigned __int8)Brightness::MAX;
    BlockTessellatorCache::getLightColor(
      (BlockTessellatorCache *)&v383,
      (BlockTessellator *)((char *)v25 + 812),
      (int)_R10);
    _R1 = v383;
    _R2 = v384;
    v41 = *((_BYTE *)v25 + 48);
  __asm
    VMOV            S0, R2
    VLDR            S24, =0.0625
    VMOV            S2, R1
    VCVT.F32.U32    S0, S0
    VCVT.F32.U32    S2, S2
    VMUL.F32        S0, S0, S24
    VMUL.F32        S2, S2, S24
    VSTR            S0, [SP,#0x178+var_98]
    VSTR            S2, [SP,#0x178+var_94]
  if ( _ZF )
    Tessellator::tex1((int)v30, (__int64 *)&v385);
  Tessellator::color(v30, 1.0, 1.0, 1.0, 1.0);
  _R0 = v27;
  if ( !*((_BYTE *)v25 + 40) )
    _R0 = BlockGraphics::getTexture(v327, _R10, 1, 0);
  _R1 = *(_WORD *)(_R0 + 20);
  v338 = (TextureUVCoordinateSet *)_R0;
    VMOV            S0, R1
    VCVT.F32.U32    S16, S0
    VLDR            S18, [R0,#4]
    VLDR            S26, [R0,#0xC]
    VLDR            S22, [R0,#8]
    VLDR            S28, [R0,#0x10]
    VCMPE.F32       S26, S18
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm { VMUL.F32        S0, S16, S18 }
    v331 = (TextureUVCoordinateSet *)v27;
    __asm { VMOV            R0, S0 }
    v51 = roundf(_R0);
    __asm { VMUL.F32        S0, S16, S26 }
    _R4 = v51;
    _R4 = roundf(_R0);
  __asm { VMOV            R0, S0 }
  _R0 = roundf(_R0);
  __asm { VMOV            S0, R0 }
  HIDWORD(v54) = 1050673152;
  __asm { VMOV            S2, R4 }
  v55 = 0;
    VCVTR.S32.F32   S0, S0
    VCVTR.S32.F32   S2, S2
    VMOV.F32        S16, #0.5
  v362 = 0;
    VMOV            R0, S0
    VMOV            R1, S2
  v58 = _R1 - _R0;
  LODWORD(v54) = 1027604480;
  _R0 = &mce::Math::PI;
    VLDR            S20, [R0]
    VMUL.F32        S0, S20, S16
    VSTR            S20, [SP,#0x178+var_148]
  v360 = -1119879168;
  v361 = 0.0;
  v362 = -1119879168;
  v363 = 1027604480;
  v364 = 0;
  v365 = -1119879168;
  v366 = 1027604480;
  v367 = 0;
  __asm { VMOV            R4, S0 }
  v368 = 1027604480;
  v369 = -1119879168;
  v370 = 0;
  v371 = 1027604480;
  v372 = -1119879168;
  v373 = 1050673152;
  v374 = (Block *)-1119879168;
  v375 = v54;
  v376 = (Block *)-1119879168;
  v377 = 1027604480;
  v378 = 1050673152;
  v379 = (Block *)1027604480;
  v380 = -1119879168;
  v381 = 1050673152;
  v382 = 1027604480;
  _R5 = cosf(_R4);
  _R0 = sinf(_R4);
    VLDR            S10, =-0.22222
    VMOV.F32        S6, #-0.5
  _R1 = v58;
    VLDR            S0, [R10]
    VMUL.F32        S10, S20, S10
    VLDR            S2, [R10,#4]
    VLDR            S4, [R10,#8]
    VMOV            S12, R1
    VCVT.F32.S32    S0, S0
    VLDR            S8, =0.027778
    VCVT.F32.S32    S4, S4
  v64 = &v360;
  __asm { VCVT.F32.S32    S2, S2 }
  v65 = 0;
    VCVT.F32.U32    S12, S12
    VMUL.F32        S17, S20, S8
    VSTR            S10, [SP,#0x178+var_104]
    VMUL.F32        S6, S20, S6
    VLDR            S10, =0.16667
    VMOV            S23, R0
    VMOV.F32        S14, #0.3125
    VMUL.F32        S8, S20, S10
    VADD.F32        S31, S0, S16
    VLDR            S0, =-0.046875
    VADD.F32        S27, S4, S16
    VSTR            S12, [SP,#0x178+var_158]
    VMOV.F32        S16, #-0.4375
    VMOV            R0, S6
    VMOV            S25, R5
    VADD.F32        S29, S2, S14
    VMOV            R8, S8
  x = _R0;
  while ( 1 )
    __asm { VADD.F32        S20, S0, S24 }
    _R4 = (int)&v64[v55];
    __asm { VSTR            S20, [R4,#8] }
    if ( _ZF )
      _R0 = cosf(_R8);
      __asm
        VMOV            S21, R0
        VLDR            S19, [R4,#4]
      v70 = _R8;
LABEL_28:
      _R0 = sinf(v70);
        VMOV            S0, R0
        VMUL.F32        S2, S19, S21
        VMUL.F32        S4, S20, S0
        VMUL.F32        S0, S19, S0
        VMUL.F32        S6, S20, S21
        VADD.F32        S2, S4, S2
        VSUB.F32        S0, S6, S0
        VADD.F32        S2, S2, S16
        VSTR            S0, [R4,#8]
        VSTR            S2, [R4,#4]
      goto LABEL_30;
    if ( v339 == 1 )
      __asm { VMOV            R5, S17 }
      _R0 = cosf(_R5);
      v70 = _R5;
      goto LABEL_28;
    __asm
      VLDR            S0, [SP,#0x178+var_104]
      VMOV            R5, S0
    _R0 = cosf(_R5);
      VMOV            S21, R0
      VLDR            S19, [R4,#4]
    _R0 = sinf(_R5);
      VMOV            S0, R0
      VMUL.F32        S2, S19, S21
      VMUL.F32        S4, S20, S0
      VMUL.F32        S0, S19, S0
      VMUL.F32        S6, S20, S21
      VADD.F32        S2, S4, S2
      VMOV.F32        S4, #-0.375
      VSUB.F32        S0, S6, S0
      VADD.F32        S2, S2, S4
      VSTR            S0, [R4,#8]
      VSTR            S2, [R4,#4]
LABEL_30:
      VMUL.F32        S4, S2, S25
      VMUL.F32        S6, S0, S23
      VMUL.F32        S2, S2, S23
      VMUL.F32        S0, S0, S25
      VADD.F32        S20, S6, S4
      VSUB.F32        S19, S0, S2
      VSTR            S20, [R7]
      VSTR            S19, [R4,#8]
    if ( !_ZF )
      if ( v340 == 3 )
        _R0 = cosf(x);
        __asm
        {
          VMOV            S21, R0
          VLDR            S30, [R4]
        }
        _R0 = sinf(x);
          VMOV            S0, R0
          VMUL.F32        S2, S30, S21
          VMUL.F32        S4, S19, S0
          VMUL.F32        S0, S30, S0
          VMUL.F32        S6, S19, S21
      else
        if ( v340 == 1 )
          __asm
          {
            VLDR            S0, [R4]
            VMUL.F32        S2, S19, S23
            VMUL.F32        S6, S19, S25
            VMUL.F32        S4, S0, S25
            VMUL.F32        S0, S0, S23
            VADD.F32        S2, S2, S4
          }
LABEL_38:
            VSUB.F32        S19, S6, S0
            VSTR            S2, [R4]
          goto LABEL_39;
        if ( v340 )
          goto LABEL_40;
          VLDR            S0, [SP,#0x178+var_148]
          VMOV            R5, S0
        _R0 = cosf(_R5);
          VMOV            S30, R0
          VLDR            S21, [R4]
        _R0 = sinf(_R5);
          VMUL.F32        S2, S21, S30
          VMUL.F32        S0, S21, S0
          VMUL.F32        S6, S19, S30
      __asm { VADD.F32        S2, S4, S2 }
      goto LABEL_38;
LABEL_39:
    __asm { VSTR            S19, [R4,#8] }
LABEL_40:
      VLDR            S0, [R4]
      VADD.F32        S2, S29, S20
      VADD.F32        S4, S27, S19
    v55 += 3;
      VADD.F32        S0, S31, S0
      VSTR            S0, [R4]
      VSTR            S2, [R7]
      VSTR            S4, [R4,#8]
      break;
    ++v65;
    __asm { VLDR            S0, [R4,#0x14] }
    v64 = &v360;
    VMOV.F32        S0, #0.6875
    VLDR            S16, [SP,#0x178+var_158]
    VMOV.F32        S2, #0.5625
    VMOV.F32        S4, #0.4375
  v346 = 0LL;
  v326 = v25;
  v353 = 0LL;
  v342 = 0;
  __asm { VMUL.F32        S20, S16, S0 }
  v333 = _R10;
  __asm { VMUL.F32        S30, S16, S2 }
  v350 = 0.0;
  __asm { VMUL.F32        S24, S16, S4 }
  v82 = 0;
  v83 = 0;
  v84 = 0;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  do
    switch ( v82 )
      case 0:
        __asm { VMOV            R1, S24 ; jumptable 00EA9528 case 0 }
        v90 = v360;
        v351 = LODWORD(v361);
        v87 = v363;
        v91 = v362;
        v358 = (Block *)v371;
        v347 = v370;
        v349 = v369;
        v92 = __PAIR__(v364, v368);
        v348 = v367;
        LODWORD(_R6) = v366;
        v93 = v365;
        _R0 = TextureUVCoordinateSet::offsetWidthPixel(v338, _R1, 0.0);
          VMOV            R7, S30
          VMOV            S18, R0
        _R0 = TextureUVCoordinateSet::offsetHeightPixel(v338, *((float *)&_R6 + 1), 0.0);
        __asm { VMOV            S22, R0 }
        v96 = *((float *)&_R6 + 1);
        HIDWORD(_R6) = v91;
        _R0 = TextureUVCoordinateSet::offsetWidthPixel(v338, v96, 0.0);
          VMOV            R1, S20
          VMOV            S26, R0
        _R0 = TextureUVCoordinateSet::offsetHeightPixel(v338, _R1, 0.0);
        v102 = HIDWORD(v92);
        v101 = v92;
        goto LABEL_47;
      case 4:
        v358 = (Block *)v382;
        v347 = v381;
        v349 = v380;
        v102 = v367;
        v87 = v366;
        v103 = v369;
        v93 = v368;
        v101 = (unsigned int)v379;
        v348 = v378;
        _R6 = __PAIR__(v371, v377);
        v104 = v370;
        break;
      case 2:
        __asm { VMOV            R1, S24 ; jumptable 00EA9528 case 2 }
        v87 = v360;
        v106 = v361;
        v90 = v363;
        v93 = v362;
        v358 = v376;
        v347 = HIDWORD(v375);
        v349 = v375;
        v101 = (unsigned int)v374;
        v348 = v373;
        v107 = v365;
        v351 = v364;
        LODWORD(_R6) = v372;
        v110 = *((float *)&_R6 + 1);
        HIDWORD(_R6) = v107;
        _R0 = TextureUVCoordinateSet::offsetWidthPixel(v338, v110, 0.0);
          VMOV            R1, S16
        v102 = LODWORD(v106);
LABEL_47:
        v103 = v90;
        v104 = v351;
        __asm { VMOV            S28, R0 }
      case 3:
        v358 = v379;
        v347 = v378;
        v349 = v377;
        v102 = v364;
        v103 = v366;
        v101 = (unsigned int)v376;
        v348 = HIDWORD(v375);
        _R6 = __PAIR__(v368, (unsigned int)v375);
        v104 = v367;
      case 1:
        v349 = v372;
        v347 = v373;
        v358 = v374;
        _R6 = __PAIR__(v382, (unsigned int)v375);
        v102 = v378;
        v87 = v377;
        v104 = v381;
        v103 = v380;
        v93 = (int)v379;
      case 5:
        v103 = v360;
        *(float *)&v104 = v361;
        v87 = v369;
        v101 = v382;
        v348 = v381;
        _R6 = __PAIR__(v362, v380);
        v93 = v371;
        v102 = v370;
      default:
        v349 = v83;
        v103 = v88;
        v358 = v85;
        v102 = HIDWORD(v353);
        v347 = v84;
        v101 = v353;
        v348 = v86;
        v93 = v342;
        _R6 = v346;
        *(float *)&v104 = v350;
    v346 = _R6;
    v342 = v93;
    v113 = *((float *)&_R6 + 1);
    v350 = *(float *)&v104;
    v353 = __PAIR__(v102, v101);
    HIDWORD(_R6) = v101;
    v88 = v103;
    v114 = *(float *)&v102;
      VSTR            S18, [SP,#0x178+var_178]
      VSTR            S28, [SP,#0x178+var_174]
    Tessellator::vertexUV(v345, *(float *)&v103, *(float *)&v104, v113, v322, v324);
      VSTR            S26, [SP,#0x178+var_178]
    Tessellator::vertexUV(v345, *(float *)&v87, v114, *(float *)&v93, v115, v116);
      VSTR            S22, [SP,#0x178+var_174]
    Tessellator::vertexUV(v345, *(float *)&_R6, *(float *)&v348, *((float *)&_R6 + 1), v117, v118);
    v85 = v358;
    Tessellator::vertexUV(v345, *(float *)&v349, *(float *)&v347, *(float *)&v358, v119, v120);
    ++v82;
    v86 = v348;
    v83 = v349;
    v84 = v347;
  while ( v82 != 6 );
  v121 = 0;
  LODWORD(v122) = 1035993088;
  __asm { VSTR            S20, [SP,#0x178+var_15C] }
  v341 = v88;
  v343 = v87;
  v123 = &v360;
  __asm { VSTR            S30, [SP,#0x178+var_160] }
  v360 = -1111490560;
  v362 = -1111490560;
  v363 = 1035993088;
  v365 = -1111490560;
  v366 = 1035993088;
  HIDWORD(v122) = 1023410176;
  v368 = 1035993088;
  v369 = -1111490560;
  v371 = 1035993088;
  v372 = -1111490560;
  v373 = 1023410176;
  v374 = (Block *)-1111490560;
  v375 = v122;
  v376 = (Block *)-1111490560;
  v377 = 1035993088;
  v378 = 1023410176;
  v379 = (Block *)1035993088;
  v380 = -1111490560;
  v381 = 1023410176;
  v382 = 1035993088;
  _R0 = v333;
    VLDR            S6, =0.27778
    VLDR            S8, =0.055556
    VLDR            S0, [R0]
    VLDR            S2, [R0,#4]
    VLDR            S4, [R0,#8]
    VLDR            S20, =-0.09375
    VCVT.F32.S32    S2, S2
    VLDR            S10, [SP,#0x178+var_148]
    VMUL.F32        S16, S10, S6
    VMOV.F32        S6, #0.5
    VMUL.F32        S21, S10, S8
    VADD.F32        S27, S4, S6
    VMOV.F32        S4, #0.3125
    VADD.F32        S31, S0, S6
    VMOV.F32        S0, S20
    VADD.F32        S29, S2, S4
  while ( 2 )
    __asm { VMOV.F32        S2, #0.21875 }
    _R6 = (int)&v123[v121];
      VADD.F32        S30, S0, S2
      VSTR            S30, [R6,#8]
        VLDR            S2, [R6,#4]
        VADD.F32        S19, S2, S20
        VLDR            S2, =0.05625
        VADD.F32        S30, S0, S2
        VSTR            S19, [R6,#4]
        VSTR            S30, [R6,#8]
      v126 = v123;
      if ( v339 == 1 )
          VMOV            R7, S21
          VLDR            S2, [R6,#4]
          VLDR            S4, =0.015625
          VADD.F32        S30, S2, S4
          VLDR            S2, =0.046875
          VADD.F32        S19, S0, S2
        _R0 = cosf(_R7);
        __asm { VMOV            S17, R0 }
        _R0 = sinf(_R7);
          VMUL.F32        S2, S30, S17
          VMUL.F32        S6, S19, S17
        __asm { VMOV            R7, S16 }
          VMOV            S19, R0
          VLDR            S17, [R6,#4]
          VMUL.F32        S2, S17, S19
          VMUL.F32        S4, S30, S0
          VMUL.F32        S0, S17, S0
          VMUL.F32        S6, S30, S19
      __asm { VADD.F32        S19, S4, S2 }
      v123 = v126;
        VSUB.F32        S30, S6, S0
    if ( v340 == 2 )
      goto LABEL_69;
    if ( v340 == 3 )
      _R0 = cosf(x);
        VMOV            S17, R0
        VLDR            S24, [R6]
      _R0 = sinf(x);
        VMUL.F32        S2, S24, S17
        VMUL.F32        S4, S30, S0
        VMUL.F32        S0, S24, S0
        VMUL.F32        S6, S30, S17
      goto LABEL_68;
    if ( v340 == 1 )
        VLDR            S0, [R6]
        VMUL.F32        S2, S30, S23
        VMUL.F32        S6, S30, S25
        VMUL.F32        S4, S0, S25
        VMUL.F32        S0, S0, S23
        VADD.F32        S2, S2, S4
LABEL_68:
        VSTR            S2, [R6]
    v133 = v123;
    if ( !v340 )
        VLDR            S0, [SP,#0x178+var_148]
        VMOV            R7, S0
      _R0 = cosf(_R7);
        VMOV            S24, R0
        VLDR            S17, [R6]
      _R0 = sinf(_R7);
      __asm { VMOV            S0, R0 }
      v123 = v133;
        VMUL.F32        S2, S17, S24
        VMUL.F32        S0, S17, S0
        VMUL.F32        S6, S30, S24
LABEL_69:
      VLDR            S0, [R6]
      VADD.F32        S2, S29, S19
      VADD.F32        S4, S27, S30
    v121 += 3;
      VSTR            S0, [R6]
      VSTR            S2, [R6,#4]
      VSTR            S4, [R6,#8]
      __asm { VLDR            S0, [R6,#0x14] }
      continue;
    break;
    VMOV.F32        S2, #0.3125
    VMOV.F32        S0, #0.1875
  v139 = v358;
  __asm { VLDR            S20, [SP,#0x178+var_15C] }
  v140 = 0;
    VLDR            S24, [SP,#0x178+var_160]
    VMUL.F32        S2, S16, S2
    VMUL.F32        S0, S16, S0
    VMOV            R0, S2
  v337 = _R0;
  xa = _R0;
  v144 = HIDWORD(v353);
  v143 = v353;
  v145 = v342;
    v344 = v140;
    switch ( v140 )
        v146 = v360;
        v352 = LODWORD(v361);
        v147 = v370;
        v148 = v363;
        v359 = (Block *)v371;
        v149 = v369;
        v354 = v368;
        v151 = v367;
        v150 = __PAIR__(v362, v366);
        v145 = v365;
        v356 = v364;
        _R0 = TextureUVCoordinateSet::offsetWidthPixel(v338, v337, 0.0);
        __asm { VMOV            S18, R0 }
        _R0 = TextureUVCoordinateSet::offsetHeightPixel(v338, xa, 0.0);
          VMOV            S22, R0
          VMOV            R1, S24
        v158 = v148;
        v159 = v151;
        v160 = v149;
        goto LABEL_76;
        v359 = (Block *)v382;
        v147 = v381;
        v160 = v380;
        v158 = v366;
        v356 = v367;
        v146 = v369;
        v145 = v368;
        v354 = (unsigned int)v379;
        v159 = v378;
        v150 = __PAIR__(v371, v377);
        v161 = v370;
        v162 = v360;
        v356 = LODWORD(v361);
        v146 = v363;
        v145 = v362;
        v359 = v376;
        v147 = SHIDWORD(v375);
        v163 = *(float *)&v375;
        v354 = (unsigned int)v374;
        v164 = v373;
        v150 = __PAIR__(v365, v372);
        v352 = v364;
        __asm { VMOV            S26, R0 }
        _R0 = TextureUVCoordinateSet::offsetHeightPixel(v338, v337, 0.0);
        v159 = v164;
        v158 = v162;
        *(float *)&v160 = v163;
LABEL_76:
        v161 = v352;
        v359 = v379;
        v147 = v378;
        v160 = v377;
        v158 = v363;
        v146 = v366;
        v354 = (unsigned int)v376;
        v159 = SHIDWORD(v375);
        v150 = __PAIR__(v368, (unsigned int)v375);
        v161 = v367;
        v147 = v373;
        v160 = v372;
        v359 = v374;
        v150 = __PAIR__(v382, (unsigned int)v375);
        v145 = (int)v379;
        v356 = v378;
        v158 = v377;
        v161 = v381;
        v146 = v380;
        *(float *)&v161 = v361;
        v158 = v369;
        v354 = v382;
        v159 = v381;
        v150 = __PAIR__(v362, v380);
        v145 = v371;
        v356 = v370;
        v344 = v140;
        v359 = v139;
        v147 = v347;
        v160 = v349;
        v158 = v343;
        v354 = v143;
        v356 = v144;
        v146 = v341;
        v159 = v348;
        v150 = v346;
        *(float *)&v161 = v350;
    v169 = *(float *)&v147;
    v350 = *(float *)&v161;
    v346 = v150;
    v170 = *(float *)&v160;
    v347 = v147;
    v348 = v159;
    v171 = *(float *)&v159;
    v349 = v160;
    v172 = *(float *)&v146;
    v341 = v146;
    v173 = *(float *)&v158;
    v343 = v158;
    Tessellator::vertexUV(v345, v172, *(float *)&v161, *((float *)&v150 + 1), v322, v324);
    Tessellator::vertexUV(v345, v173, *(float *)&v356, *(float *)&v145, v174, v175);
    Tessellator::vertexUV(v345, *(float *)&v150, v171, *(float *)&v354, v176, v177);
    v139 = v359;
    Tessellator::vertexUV(v345, v170, v169, *(float *)&v359, v178, v179);
    v144 = v356;
    v143 = v354;
    v140 = v344 + 1;
  while ( v344 != 5 );
  if ( v339 )
    _R5 = v333;
    _R6 = v331;
    if ( !*((_BYTE *)v326 + 40) )
      _R6 = (TextureUVCoordinateSet *)BlockGraphics::getTexture(v327, v333, 3, 0);
      VMOV.F32        S0, #0.125
      VLDR            S30, [SP,#0x178+var_FC]
      VLDR            S22, [R6,#4]
      VMUL.F32        S0, S16, S0
      VMOV            R1, S0
    _R0 = TextureUVCoordinateSet::offsetHeightPixel(_R6, _R1, 0.0);
      VMOV.F32        S28, #0.25
      VMOV            S18, R0
      VLDR            S20, [R6,#0xC]
      VMUL.F32        S0, S16, S28
    __asm { VMOV            S26, R0 }
        VLDR            S0, [R5]
        VMOV.F32        S16, #0.48438
        VLDR            S2, [R5,#4]
        VMOV.F32        S19, #0.21875
        VLDR            S4, [R5,#8]
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
        VCVT.F32.S32    S4, S4
      v186 = v345;
        VSTR            S22, [SP,#0x178+var_178]
        VSTR            S18, [SP,#0x178+var_174]
        VADD.F32        S0, S0, S16
        VADD.F32        S2, S2, S19
        VADD.F32        S4, S4, S28
        VMOV            R1, S0
        VMOV            R2, S2
        VMOV            R3, S4
      Tessellator::vertexUV(v345, _R1, _R2, _R3, v322, v324);
        VLDR            S24, =0.51562
        VSTR            S26, [SP,#0x178+var_174]
        VADD.F32        S0, S0, S24
      Tessellator::vertexUV(v345, _R1, _R2, _R3, v193, v194);
        VSTR            S20, [SP,#0x178+var_178]
      Tessellator::vertexUV(v345, _R1, _R2, _R3, v198, v199);
      Tessellator::vertexUV(v345, _R1, _R2, _R3, v203, v204);
        VMOV.F32        S4, #0.5
        VLDR            S2, [R5,#8]
        VMOV            R4, S30
        VMOV.F32        S17, S4
        VADD.F32        S2, S2, S17
        VMOV            R3, S2
      Tessellator::vertexUV(v345, _R1, _R4, _R3, v208, v209);
      Tessellator::vertexUV(v345, _R1, _R4, _R3, v212, v213);
      Tessellator::vertexUV(v345, _R1, _R2, _R3, v217, v218);
      goto LABEL_92;
    if ( v340 )
      if ( _ZF )
          VLDR            S2, [R5,#4]
          VMOV.F32        S19, #0.21875
          VLDR            S4, [R5,#8]
          VMOV            R1, S0
          VCVT.F32.S32    S2, S2
          VLDR            S16, =0.51562
          VCVT.F32.S32    S4, S4
        v186 = v345;
          VSTR            S22, [SP,#0x178+var_178]
          VSTR            S26, [SP,#0x178+var_174]
          VADD.F32        S2, S2, S19
          VADD.F32        S4, S4, S16
          VMOV            R2, S2
          VMOV            R3, S4
        Tessellator::vertexUV(v345, _R1, _R2, _R3, v322, v324);
          VLDR            S0, [R5]
          VCVT.F32.S32    S0, S0
          VSTR            S20, [SP,#0x178+var_178]
          VADD.F32        S0, S0, S28
        Tessellator::vertexUV(v345, _R1, _R2, _R3, v225, v226);
          VMOV.F32        S24, #0.48438
          VSTR            S18, [SP,#0x178+var_174]
          VADD.F32        S4, S4, S24
        Tessellator::vertexUV(v345, _R1, _R2, _R3, v230, v231);
        Tessellator::vertexUV(v345, _R1, _R2, _R3, v235, v236);
        Tessellator::vertexUV(v345, _R1, _R2, _R3, v240, v241);
          VMOV.F32        S4, #0.5
          VLDR            S2, [R5,#8]
          VMOV            R4, S30
          VMOV.F32        S17, S4
          VADD.F32        S2, S2, S16
          VADD.F32        S0, S0, S17
          VMOV            R3, S2
        Tessellator::vertexUV(v345, _R1, _R4, _R3, v245, v246);
          VADD.F32        S2, S2, S24
        Tessellator::vertexUV(v345, _R1, _R4, _R3, v249, v250);
        _R0 = *((_DWORD *)v333 + 2);
          VMOV.F32        S17, #0.5
          VLDR            S24, =0.51562
          VMOV            S2, R0
        Tessellator::vertexUV(v345, _R1, _R7, _R3, v322, v324);
          VMOV.F32        S16, #0.75
          VADD.F32        S0, S0, S16
        Tessellator::vertexUV(v345, _R1, _R2, _R3, v293, v294);
          VMOV.F32        S28, #0.48438
          VADD.F32        S4, S4, S28
        Tessellator::vertexUV(v345, _R1, _R2, _R3, v298, v299);
          VADD.F32        S2, S2, S28
        Tessellator::vertexUV(v345, _R1, _R7, _R3, v302, v303);
        Tessellator::vertexUV(v345, _R1, _R2, _R3, v307, v308);
          VMOV.F32        S30, #1.0
          VADD.F32        S0, S0, S30
        Tessellator::vertexUV(v345, _R1, _R2, _R3, v312, v313);
        Tessellator::vertexUV(v345, _R1, _R2, _R3, v317, v318);
        VMOV.F32        S24, #0.75
        VADD.F32        S4, S4, S24
        VLDR            S28, =0.51562
        VADD.F32        S0, S0, S28
      Tessellator::vertexUV(v345, _R1, _R2, _R3, v257, v258);
      Tessellator::vertexUV(v345, _R1, _R4, _R3, v262, v263);
      Tessellator::vertexUV(v345, _R1, _R4, _R3, v266, v267);
        VMOV.F32        S30, #1.0
        VADD.F32        S4, S4, S30
      Tessellator::vertexUV(v345, _R1, _R2, _R3, v271, v272);
      Tessellator::vertexUV(v345, _R1, _R2, _R3, v276, v277);
      Tessellator::vertexUV(v345, _R1, _R2, _R3, v281, v282);
LABEL_92:
    __asm { VSTR            S18, [SP,#0x178+var_174] }
    Tessellator::vertexUV(v186, _R1, _R2, _R3, v323, v325);
  return 1;
}


int __fastcall BlockTessellator::tessellateTopSnowInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  BlockTessellator *v5; // r6@1
  const BlockPos *v6; // r4@1
  Tessellator *v7; // r5@1
  int result; // r0@2
  int v9; // r7@4
  int v10; // r1@4
  unsigned __int8 v11; // [sp+8h] [bp-18h]@3
  unsigned __int8 v12; // [sp+9h] [bp-17h]@5

  v5 = this;
  v6 = a4;
  v7 = a2;
  if ( *((_DWORD *)this + 11) == 3 )
  {
    result = BlockTessellator::tessellateBlockInWorld(this, a2, a3, a4, a5);
  }
  else
    TopSnowBlock::dataIDToRecoverableFullBlock((TopSnowBlock *)&v11, *((BlockSource **)this + 1), a4, a5);
    if ( v11 )
    {
      v9 = *((_DWORD *)v5 + 11);
      v10 = Block::getRenderLayer((Block *)Block::mBlocks[v11]);
      result = 0;
      if ( v9 == v10 )
        result = BlockTessellator::tessellateInWorld(v5, v7, (const Block *)Block::mBlocks[v11], v6, v12, 0);
    }
    else
  return result;
}


int __fastcall BlockTessellator::tessellateVerticesAndUVs(int a1, Tessellator *this, int a3, int a4, int a5, int a6, __int64 a7, int a8, int a9)
{
  Tessellator *v9; // r4@1
  unsigned __int64 *v10; // r5@1
  int result; // r0@1
  float v18; // ST00_4@2
  float v19; // ST04_4@2
  float v20; // ST00_4@2
  float v21; // ST04_4@2
  float v22; // r1@2 OVERLAPPED
  __int64 v23; // r2@2 OVERLAPPED
  float v24; // ST00_4@4
  float v25; // ST04_4@4
  float v26; // ST00_4@4
  float v27; // ST04_4@4
  float v28; // ST00_4@5
  float v29; // ST04_4@5
  float v30; // ST00_4@5
  float v31; // ST04_4@5
  float v32; // ST00_4@6
  float v33; // ST04_4@6
  float v34; // r1@6 OVERLAPPED
  float v35; // r3@6
  float v36; // r2@6 OVERLAPPED
  float v37; // ST00_4@7
  float v38; // ST04_4@7
  float v39; // ST00_4@7
  float v40; // ST04_4@7
  float v41; // ST00_4@8
  float v42; // ST04_4@8
  float v43; // [sp+0h] [bp-28h]@0
  float v44; // [sp+0h] [bp-28h]@2
  float v45; // [sp+0h] [bp-28h]@6
  float v46; // [sp+4h] [bp-24h]@0
  float v47; // [sp+4h] [bp-24h]@2
  float v48; // [sp+4h] [bp-24h]@6

  v9 = this;
  v10 = (unsigned __int64 *)a4;
  _KR00_8 = a7;
  result = a6;
  _R8 = a8;
  switch ( a9 )
  {
    case 0:
      __asm
      {
        VLDR            S0, [R0]
        VLDR            S2, [R0,#4]
        VSTR            S0, [SP,#0x28+var_28]
        VSTR            S2, [SP,#0x28+var_24]
      }
      Tessellator::vertexUV(
        this,
        COERCE_FLOAT(*(_QWORD *)a4),
        COERCE_FLOAT(*(_QWORD *)a4 >> 32),
        *(float *)(a5 + 8),
        v43,
        v46);
        VLDR            S0, [R6]
        VLDR            S2, [R6,#4]
      Tessellator::vertexUV(v9, *(float *)v10, *((float *)v10 + 1), *((float *)v10 + 2), v18, v19);
        VLDR            S0, [R9]
        VLDR            S2, [R9,#4]
        v9,
        *(float *)a5,
        COERCE_FLOAT(*(unsigned __int64 *)((char *)v10 + 4)),
        COERCE_FLOAT(*(unsigned __int64 *)((char *)v10 + 4) >> 32),
        v20,
        v21);
      v22 = *(float *)a5;
      HIDWORD(v23) = *(_DWORD *)(a5 + 8);
        VLDR            S0, [R8]
        VLDR            S2, [R8,#4]
      LODWORD(v23) = *((_DWORD *)v10 + 1);
      goto LABEL_11;
    case 1:
      Tessellator::vertexUV(this, *(float *)a5, *(float *)(a5 + 4), *(float *)(a5 + 8), v43, v46);
        COERCE_FLOAT(*(_QWORD *)a5),
        COERCE_FLOAT(*(_QWORD *)a5 >> 32),
        *((float *)v10 + 2),
        v24,
        v25);
      Tessellator::vertexUV(v9, *(float *)v10, *(float *)(a5 + 4), *((float *)v10 + 2), v26, v27);
      v23 = *(_QWORD *)(a5 + 4);
      v22 = *(float *)v10;
    case 2:
      Tessellator::vertexUV(this, *(float *)a4, *(float *)(a5 + 4), *(float *)(a4 + 8), v43, v46);
        v28,
        v29);
        v30,
        v31);
      v23 = *(unsigned __int64 *)((char *)v10 + 4);
      goto LABEL_10;
    case 3:
        *(float *)a4,
        COERCE_FLOAT(*(_QWORD *)(a5 + 4)),
        COERCE_FLOAT(*(_QWORD *)(a5 + 4) >> 32),
      Tessellator::vertexUV(v9, COERCE_FLOAT(*v10), COERCE_FLOAT(*v10 >> 32), *(float *)(a5 + 8), v32, v33);
      v34 = *(float *)a5;
      v35 = *(float *)(a5 + 8);
      v36 = *((float *)v10 + 1);
      goto LABEL_9;
    case 4:
      Tessellator::vertexUV(v9, *(float *)v10, *(float *)(a5 + 4), *((float *)v10 + 2), v37, v38);
      Tessellator::vertexUV(v9, *(float *)v10, *((float *)v10 + 1), *((float *)v10 + 2), v39, v40);
      *(_QWORD *)&v22 = *v10;
    case 5:
      Tessellator::vertexUV(this, *(float *)a5, *(float *)(a4 + 4), *(float *)(a5 + 8), v43, v46);
        v41,
        v42);
      *(_QWORD *)&v34 = *(_QWORD *)a5;
      v35 = *((float *)v10 + 2);
LABEL_9:
      Tessellator::vertexUV(v9, v34, v36, v35, v45, v48);
LABEL_10:
LABEL_11:
      result = Tessellator::vertexUV(v9, v22, *(float *)&v23, *((float *)&v23 + 1), v44, v47);
      break;
    default:
      return result;
  }
  return result;
}


int __fastcall BlockTessellator::_getMappedTexture(BlockTessellator *this, const Block *a2, int a3, int a4)
{
  const Block *v4; // r5@1
  int v5; // r4@1
  __int64 v6; // r6@1
  int v7; // r0@1

  v4 = a2;
  v5 = a4;
  LODWORD(v6) = BlockGraphics::mBlocks[*((_BYTE *)a2 + 4)];
  HIDWORD(v6) = (*(int (__fastcall **)(const Block *, int, int))(*(_DWORD *)a2 + 428))(a2, a3, a4);
  v7 = (*(int (__fastcall **)(const Block *, int))(*(_DWORD *)v4 + 424))(v4, v5);
  return BlockGraphics::getTexture(v6, v7, 0);
}


void __fastcall BlockTessellator::tessellateEndRodAppended(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockGraphics *a4)
{
  BlockTessellator::tessellateEndRodAppended(this, a2, a3, a4);
}


signed int __fastcall BlockTessellator::tessellateCauldronInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  BlockTessellator *v5; // r6@1
  const Block *v6; // r8@1
  Tessellator *v7; // r11@1
  int v8; // r1@1
  const BlockPos *v9; // r7@1
  BlockGraphics *v10; // r5@1
  const TextureUVCoordinateSet *v11; // r10@2
  const TextureUVCoordinateSet *v12; // r4@2
  const TextureUVCoordinateSet *v13; // r9@2
  int v16; // r0@4
  void *v21; // r0@8
  BlockSource *v22; // r0@10
  int v23; // r0@11
  int v24; // r4@11
  char *v25; // r10@18
  const Color **v26; // r0@19
  signed int v27; // r0@20
  int v28; // r2@20
  const TextureUVCoordinateSet *v29; // r10@25
  unsigned __int8 v30; // r1@25
  unsigned int *v33; // r2@27
  signed int v34; // r1@29
  const TextureUVCoordinateSet *v35; // [sp+Ch] [bp-48Ch]@2
  char v36; // [sp+10h] [bp-488h]@25
  int v37; // [sp+1Ch] [bp-47Ch]@25
  int v38; // [sp+24h] [bp-474h]@25
  int v39; // [sp+28h] [bp-470h]@25
  int v40; // [sp+30h] [bp-468h]@25
  char v41; // [sp+34h] [bp-464h]@22
  char v42; // [sp+44h] [bp-454h]@18
  char v43; // [sp+54h] [bp-444h]@8
  char v44; // [sp+60h] [bp-438h]@8
  char v45; // [sp+6Ch] [bp-42Ch]@8
  int v46; // [sp+78h] [bp-420h]@8
  int v47; // [sp+7Ch] [bp-41Ch]@8
  int v48; // [sp+80h] [bp-418h]@8
  int v49; // [sp+84h] [bp-414h]@8
  int v50; // [sp+88h] [bp-410h]@8
  signed int v51; // [sp+8Ch] [bp-40Ch]@8
  char v52; // [sp+90h] [bp-408h]@8
  char v53; // [sp+9Ch] [bp-3FCh]@8
  char v54; // [sp+A8h] [bp-3F0h]@8
  int v55; // [sp+B4h] [bp-3E4h]@8
  int v56; // [sp+B8h] [bp-3E0h]@8
  int v57; // [sp+BCh] [bp-3DCh]@8
  int v58; // [sp+C0h] [bp-3D8h]@8
  int v59; // [sp+C4h] [bp-3D4h]@8
  int v60; // [sp+C8h] [bp-3D0h]@8
  char v61; // [sp+CCh] [bp-3CCh]@8
  char v62; // [sp+D8h] [bp-3C0h]@8
  int v63; // [sp+E4h] [bp-3B4h]@8
  int v64; // [sp+E8h] [bp-3B0h]@8
  int v65; // [sp+ECh] [bp-3ACh]@8
  int v66; // [sp+F0h] [bp-3A8h]@8
  int v67; // [sp+F4h] [bp-3A4h]@8
  int v68; // [sp+F8h] [bp-3A0h]@8
  char v69; // [sp+FCh] [bp-39Ch]@8
  char v70; // [sp+108h] [bp-390h]@8
  char v71; // [sp+114h] [bp-384h]@8
  int v72; // [sp+120h] [bp-378h]@8
  int v73; // [sp+124h] [bp-374h]@8
  int v74; // [sp+128h] [bp-370h]@8
  int v75; // [sp+12Ch] [bp-36Ch]@8
  int v76; // [sp+130h] [bp-368h]@8
  int v77; // [sp+134h] [bp-364h]@8
  char v78; // [sp+138h] [bp-360h]@8
  char v79; // [sp+144h] [bp-354h]@8
  char v80; // [sp+150h] [bp-348h]@8
  int v81; // [sp+15Ch] [bp-33Ch]@8
  signed int v82; // [sp+160h] [bp-338h]@8
  signed int v83; // [sp+164h] [bp-334h]@8
  int v84; // [sp+168h] [bp-330h]@8
  int v85; // [sp+16Ch] [bp-32Ch]@8
  int v86; // [sp+170h] [bp-328h]@8
  char v87; // [sp+174h] [bp-324h]@8
  char v88; // [sp+180h] [bp-318h]@8
  int v89; // [sp+18Ch] [bp-30Ch]@8
  signed int v90; // [sp+190h] [bp-308h]@8
  signed int v91; // [sp+194h] [bp-304h]@8
  int v92; // [sp+198h] [bp-300h]@8
  int v93; // [sp+19Ch] [bp-2FCh]@8
  signed int v94; // [sp+1A0h] [bp-2F8h]@8
  char v95; // [sp+1A4h] [bp-2F4h]@8
  char v96; // [sp+1B0h] [bp-2E8h]@8
  char v97; // [sp+1BCh] [bp-2DCh]@8
  int v98; // [sp+1C8h] [bp-2D0h]@8
  int v99; // [sp+1CCh] [bp-2CCh]@8
  int v100; // [sp+1D0h] [bp-2C8h]@8
  int v101; // [sp+1D4h] [bp-2C4h]@8
  int v102; // [sp+1D8h] [bp-2C0h]@8
  int v103; // [sp+1DCh] [bp-2BCh]@8
  char v104; // [sp+1E0h] [bp-2B8h]@8
  char v105; // [sp+1ECh] [bp-2ACh]@8
  char v106; // [sp+1F8h] [bp-2A0h]@8
  int v107; // [sp+204h] [bp-294h]@8
  int v108; // [sp+208h] [bp-290h]@8
  int v109; // [sp+20Ch] [bp-28Ch]@8
  int v110; // [sp+210h] [bp-288h]@8
  int v111; // [sp+214h] [bp-284h]@8
  int v112; // [sp+218h] [bp-280h]@8
  char v113; // [sp+21Ch] [bp-27Ch]@8
  char v114; // [sp+228h] [bp-270h]@8
  int v115; // [sp+234h] [bp-264h]@8
  int v116; // [sp+238h] [bp-260h]@8
  int v117; // [sp+23Ch] [bp-25Ch]@8
  int v118; // [sp+240h] [bp-258h]@8
  int v119; // [sp+244h] [bp-254h]@8
  int v120; // [sp+248h] [bp-250h]@8
  char v121; // [sp+24Ch] [bp-24Ch]@8
  char v122; // [sp+258h] [bp-240h]@8
  char v123; // [sp+264h] [bp-234h]@8
  int v124; // [sp+270h] [bp-228h]@8
  signed int v125; // [sp+274h] [bp-224h]@8
  signed int v126; // [sp+278h] [bp-220h]@8
  int v127; // [sp+27Ch] [bp-21Ch]@8
  int v128; // [sp+280h] [bp-218h]@8
  int v129; // [sp+284h] [bp-214h]@8
  char v130; // [sp+288h] [bp-210h]@8
  char v131; // [sp+294h] [bp-204h]@8
  char v132; // [sp+2A0h] [bp-1F8h]@8
  int v133; // [sp+2ACh] [bp-1ECh]@8
  int v134; // [sp+2B0h] [bp-1E8h]@8
  int v135; // [sp+2B4h] [bp-1E4h]@8
  int v136; // [sp+2B8h] [bp-1E0h]@8
  int v137; // [sp+2BCh] [bp-1DCh]@8
  int v138; // [sp+2C0h] [bp-1D8h]@8
  char v139; // [sp+2C4h] [bp-1D4h]@8
  char v140; // [sp+2D0h] [bp-1C8h]@8
  int v141; // [sp+2DCh] [bp-1BCh]@8
  signed int v142; // [sp+2E0h] [bp-1B8h]@8
  signed int v143; // [sp+2E4h] [bp-1B4h]@8
  int v144; // [sp+2E8h] [bp-1B0h]@8
  int v145; // [sp+2ECh] [bp-1ACh]@8
  int v146; // [sp+2F0h] [bp-1A8h]@8
  char v147; // [sp+2F4h] [bp-1A4h]@8
  char v148; // [sp+300h] [bp-198h]@8
  int v149; // [sp+30Ch] [bp-18Ch]@8
  signed int v150; // [sp+310h] [bp-188h]@8
  signed int v151; // [sp+314h] [bp-184h]@8
  int v152; // [sp+318h] [bp-180h]@8
  signed int v153; // [sp+31Ch] [bp-17Ch]@8
  int v154; // [sp+320h] [bp-178h]@8
  char v155; // [sp+324h] [bp-174h]@8
  char v156; // [sp+330h] [bp-168h]@8
  int v157; // [sp+33Ch] [bp-15Ch]@8
  signed int v158; // [sp+340h] [bp-158h]@8
  int v159; // [sp+344h] [bp-154h]@8
  int v160; // [sp+348h] [bp-150h]@8
  int v161; // [sp+34Ch] [bp-14Ch]@8
  int v162; // [sp+350h] [bp-148h]@8
  char v163; // [sp+354h] [bp-144h]@8
  char v164; // [sp+360h] [bp-138h]@8
  int v165; // [sp+36Ch] [bp-12Ch]@8
  signed int v166; // [sp+370h] [bp-128h]@8
  int v167; // [sp+374h] [bp-124h]@8
  int v168; // [sp+378h] [bp-120h]@8
  int v169; // [sp+37Ch] [bp-11Ch]@8
  int v170; // [sp+380h] [bp-118h]@8
  char v171; // [sp+384h] [bp-114h]@8
  char v172; // [sp+390h] [bp-108h]@8
  int v173; // [sp+39Ch] [bp-FCh]@8
  signed int v174; // [sp+3A0h] [bp-F8h]@8
  int v175; // [sp+3A4h] [bp-F4h]@8
  int v176; // [sp+3A8h] [bp-F0h]@8
  signed int v177; // [sp+3ACh] [bp-ECh]@8
  int v178; // [sp+3B0h] [bp-E8h]@8
  char v179; // [sp+3B4h] [bp-E4h]@8
  char v180; // [sp+3C0h] [bp-D8h]@8
  char v181; // [sp+3CCh] [bp-CCh]@8
  char v182; // [sp+3D8h] [bp-C0h]@8
  int v183; // [sp+3E4h] [bp-B4h]@8
  signed int v184; // [sp+3E8h] [bp-B0h]@8
  int v185; // [sp+3ECh] [bp-ACh]@8
  int v186; // [sp+3F0h] [bp-A8h]@8
  signed int v187; // [sp+3F4h] [bp-A4h]@8
  int v188; // [sp+3F8h] [bp-A0h]@8
  char v189; // [sp+3FCh] [bp-9Ch]@8
  int v190; // [sp+408h] [bp-90h]@8
  int v191; // [sp+40Ch] [bp-8Ch]@8
  int v192; // [sp+410h] [bp-88h]@8
  int v193; // [sp+414h] [bp-84h]@8
  int v194; // [sp+418h] [bp-80h]@8
  int v195; // [sp+41Ch] [bp-7Ch]@8
  char v196; // [sp+420h] [bp-78h]@8
  int v197; // [sp+42Ch] [bp-6Ch]@8
  int v198; // [sp+430h] [bp-68h]@8
  int v199; // [sp+434h] [bp-64h]@8
  int v200; // [sp+438h] [bp-60h]@8
  int v201; // [sp+43Ch] [bp-5Ch]@8
  int v202; // [sp+440h] [bp-58h]@8
  unsigned __int8 v203; // [sp+444h] [bp-54h]@3
  unsigned __int8 v204; // [sp+445h] [bp-53h]@3
  char v205; // [sp+448h] [bp-50h]@7
  char v206; // [sp+450h] [bp-48h]@2
  int v207; // [sp+468h] [bp-30h]@8

  v5 = this;
  v6 = a3;
  v7 = a2;
  v8 = *((_BYTE *)a3 + 4);
  v9 = a4;
  v10 = (BlockGraphics *)BlockGraphics::mBlocks[v8];
  if ( *((_DWORD *)this + 11) == 3 )
  {
    v11 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(
                                            (BlockGraphics *)BlockGraphics::mBlocks[v8],
                                            a4,
                                            2,
                                            0);
    v12 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v10, v9, 1, 0);
    v35 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v10, v9, 0, 0);
    v13 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v10, v9, 3, 0);
    TextureUVCoordinateSet::getFlippedHorizontal((TextureUVCoordinateSet *)&v206, (int)v11);
    if ( *((_BYTE *)v5 + 48) )
    {
      _R1 = (unsigned __int8)Brightness::MAX;
      v203 = Brightness::MAX;
      v204 = Brightness::MAX;
      _R2 = (unsigned __int8)Brightness::MAX;
    }
    else
      BlockTessellatorCache::getLightColor(
        (BlockTessellatorCache *)&v203,
        (BlockTessellator *)((char *)v5 + 812),
        (int)v9);
      _R1 = v203;
      _R2 = v204;
      v16 = *((_BYTE *)v5 + 48);
    __asm
      VMOV            S0, R2
      VMOV            S2, R1
      VLDR            S4, =0.0625
      VCVT.F32.U32    S0, S0
      VCVT.F32.U32    S2, S2
      VMUL.F32        S0, S0, S4
      VMUL.F32        S2, S2, S4
      VSTR            S0, [R3,#-4]
      VSTR            S2, [R3]
    if ( _ZF )
      Tessellator::tex1((int)v7, (__int64 *)&v205);
    Tessellator::color(v7, 1.0, 1.0, 1.0, 1.0);
    v200 = 1040187392;
    v201 = 1044381696;
    v202 = 1040187392;
    v197 = 1063256064;
    v198 = 1048576000;
    v199 = 1063256064;
    AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v200, (const Vec3 *)&v197);
    Vec3::Vec3((int)&v196, (int)v9);
    BlockTessellator::tessellateFaceUp(v5, v7, v6, (const Vec3 *)&v196, v13);
    v193 = 0;
    v194 = 1044381696;
    v195 = 0;
    v190 = 1065353216;
    v191 = 1048576000;
    v192 = 1065353216;
    AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v193, (const Vec3 *)&v190);
    Vec3::Vec3((int)&v189, (int)v9);
    BlockTessellator::tessellateFaceDown(v5, v7, v6, (const Vec3 *)&v189, v13);
    v186 = 0;
    v187 = 1044381696;
    v188 = 0;
    v183 = 1065353216;
    v184 = 1065353216;
    v185 = 1065353216;
    AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v186, (const Vec3 *)&v183);
    Vec3::Vec3((int)&v182, (int)v9);
    BlockTessellator::tessellateNorth(v5, v7, v6, (const Vec3 *)&v182, v11);
    Vec3::Vec3((int)&v181, (int)v9);
    BlockTessellator::tessellateSouth(v5, v7, v6, (const Vec3 *)&v181, v11);
    Vec3::Vec3((int)&v180, (int)v9);
    BlockTessellator::tessellateEast(v5, v7, v6, (const Vec3 *)&v180, v11);
    Vec3::Vec3((int)&v179, (int)v9);
    BlockTessellator::tessellateWest(v5, v7, v6, (const Vec3 *)&v179, v11);
    v176 = 0;
    v177 = 1044381696;
    v178 = 0;
    v173 = 1065353216;
    v174 = 1065353216;
    v175 = 1040187392;
    AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v176, (const Vec3 *)&v173);
    Vec3::Vec3((int)&v172, (int)v9);
    BlockTessellator::tessellateFaceUp(v5, v7, v6, (const Vec3 *)&v172, v12);
    Vec3::Vec3((int)&v171, (int)v9);
    BlockTessellator::tessellateSouth(v5, v7, v6, (const Vec3 *)&v171, v11);
    v168 = 1063256064;
    v169 = 1044381696;
    v170 = 0;
    v165 = 1065353216;
    v166 = 1065353216;
    v167 = 1065353216;
    AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v168, (const Vec3 *)&v165);
    Vec3::Vec3((int)&v164, (int)v9);
    BlockTessellator::tessellateFaceUp(v5, v7, v6, (const Vec3 *)&v164, v12);
    Vec3::Vec3((int)&v163, (int)v9);
    BlockTessellator::tessellateWest(v5, v7, v6, (const Vec3 *)&v163, v11);
    v160 = 0;
    v161 = 1044381696;
    v162 = 1063256064;
    v157 = 1065353216;
    v158 = 1065353216;
    v159 = 1065353216;
    AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v160, (const Vec3 *)&v157);
    Vec3::Vec3((int)&v156, (int)v9);
    BlockTessellator::tessellateFaceUp(v5, v7, v6, (const Vec3 *)&v156, v12);
    Vec3::Vec3((int)&v155, (int)v9);
    BlockTessellator::tessellateNorth(v5, v7, v6, (const Vec3 *)&v155, v11);
    v152 = 0;
    v153 = 1044381696;
    v154 = 0;
    v149 = 1040187392;
    v150 = 1065353216;
    v151 = 1065353216;
    AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v152, (const Vec3 *)&v149);
    Vec3::Vec3((int)&v148, (int)v9);
    BlockTessellator::tessellateFaceUp(v5, v7, v6, (const Vec3 *)&v148, v12);
    Vec3::Vec3((int)&v147, (int)v9);
    BlockTessellator::tessellateEast(v5, v7, v6, (const Vec3 *)&v147, v11);
    v144 = 0;
    v145 = 0;
    v146 = 0;
    v141 = 1048576000;
    v142 = 1044381696;
    v143 = 1048576000;
    AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v144, (const Vec3 *)&v141);
    *((_BYTE *)v5 + 43) = 1;
    Vec3::Vec3((int)&v140, (int)v9);
    BlockTessellator::tessellateNorth(v5, v7, v6, (const Vec3 *)&v140, (const TextureUVCoordinateSet *)&v206);
    *((_BYTE *)v5 + 43) = 0;
    Vec3::Vec3((int)&v139, (int)v9);
    BlockTessellator::tessellateWest(v5, v7, v6, (const Vec3 *)&v139, v11);
    v136 = 0;
    v137 = 0;
    v138 = 0;
    v133 = 1040187392;
    v134 = 1044381696;
    v135 = 1048576000;
    AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v136, (const Vec3 *)&v133);
    Vec3::Vec3((int)&v132, (int)v9);
    BlockTessellator::tessellateSouth(v5, v7, v6, (const Vec3 *)&v132, v11);
    Vec3::Vec3((int)&v131, (int)v9);
    BlockTessellator::tessellateEast(v5, v7, v6, (const Vec3 *)&v131, v11);
    Vec3::Vec3((int)&v130, (int)v9);
    BlockTessellator::tessellateFaceDown(v5, v7, v6, (const Vec3 *)&v130, v35);
    v127 = 1040187392;
    v128 = 0;
    v129 = 0;
    v124 = 1048576000;
    v125 = 1044381696;
    v126 = 1040187392;
    AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v127, (const Vec3 *)&v124);
    Vec3::Vec3((int)&v123, (int)v9);
    BlockTessellator::tessellateEast(v5, v7, v6, (const Vec3 *)&v123, v11);
    Vec3::Vec3((int)&v122, (int)v9);
    BlockTessellator::tessellateSouth(v5, v7, v6, (const Vec3 *)&v122, v11);
    Vec3::Vec3((int)&v121, (int)v9);
    BlockTessellator::tessellateFaceDown(v5, v7, v6, (const Vec3 *)&v121, v35);
    v118 = 1061158912;
    v119 = 0;
    v120 = 0;
    v115 = 1065353216;
    v116 = 1044381696;
    v117 = 1048576000;
    AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v118, (const Vec3 *)&v115);
    Vec3::Vec3((int)&v114, (int)v9);
    BlockTessellator::tessellateNorth(v5, v7, v6, (const Vec3 *)&v114, (const TextureUVCoordinateSet *)&v206);
    Vec3::Vec3((int)&v113, (int)v9);
    BlockTessellator::tessellateEast(v5, v7, v6, (const Vec3 *)&v113, (const TextureUVCoordinateSet *)&v206);
    v110 = 1061158912;
    v111 = 0;
    v112 = 0;
    v107 = 1065353216;
    v108 = 1044381696;
    v109 = 1040187392;
    AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v110, (const Vec3 *)&v107);
    Vec3::Vec3((int)&v106, (int)v9);
    BlockTessellator::tessellateWest(v5, v7, v6, (const Vec3 *)&v106, v11);
    Vec3::Vec3((int)&v105, (int)v9);
    BlockTessellator::tessellateSouth(v5, v7, v6, (const Vec3 *)&v105, v11);
    Vec3::Vec3((int)&v104, (int)v9);
    BlockTessellator::tessellateFaceDown(v5, v7, v6, (const Vec3 *)&v104, v35);
    v101 = 1063256064;
    v102 = 0;
    v103 = 1040187392;
    v98 = 1065353216;
    v99 = 1044381696;
    v100 = 1048576000;
    AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v101, (const Vec3 *)&v98);
    Vec3::Vec3((int)&v97, (int)v9);
    BlockTessellator::tessellateSouth(v5, v7, v6, (const Vec3 *)&v97, v11);
    Vec3::Vec3((int)&v96, (int)v9);
    BlockTessellator::tessellateWest(v5, v7, v6, (const Vec3 *)&v96, v11);
    Vec3::Vec3((int)&v95, (int)v9);
    BlockTessellator::tessellateFaceDown(v5, v7, v6, (const Vec3 *)&v95, v35);
    v92 = 1061158912;
    v93 = 0;
    v94 = 1061158912;
    v89 = 1065353216;
    v90 = 1044381696;
    v91 = 1065353216;
    AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v92, (const Vec3 *)&v89);
    Vec3::Vec3((int)&v88, (int)v9);
    BlockTessellator::tessellateSouth(v5, v7, v6, (const Vec3 *)&v88, v11);
    Vec3::Vec3((int)&v87, (int)v9);
    BlockTessellator::tessellateEast(v5, v7, v6, (const Vec3 *)&v87, (const TextureUVCoordinateSet *)&v206);
    v84 = 1063256064;
    v85 = 0;
    v86 = 1061158912;
    v81 = 1065353216;
    v82 = 1044381696;
    v83 = 1065353216;
    AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v84, (const Vec3 *)&v81);
    Vec3::Vec3((int)&v80, (int)v9);
    BlockTessellator::tessellateNorth(v5, v7, v6, (const Vec3 *)&v80, v11);
    Vec3::Vec3((int)&v79, (int)v9);
    BlockTessellator::tessellateWest(v5, v7, v6, (const Vec3 *)&v79, v11);
    Vec3::Vec3((int)&v78, (int)v9);
    BlockTessellator::tessellateFaceDown(v5, v7, v6, (const Vec3 *)&v78, v35);
    v75 = 1061158912;
    v76 = 0;
    v77 = 1063256064;
    v72 = 1063256064;
    v73 = 1044381696;
    v74 = 1065353216;
    AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v75, (const Vec3 *)&v72);
    Vec3::Vec3((int)&v71, (int)v9);
    BlockTessellator::tessellateWest(v5, v7, v6, (const Vec3 *)&v71, v11);
    Vec3::Vec3((int)&v70, (int)v9);
    BlockTessellator::tessellateNorth(v5, v7, v6, (const Vec3 *)&v70, v11);
    Vec3::Vec3((int)&v69, (int)v9);
    BlockTessellator::tessellateFaceDown(v5, v7, v6, (const Vec3 *)&v69, v35);
    v66 = 0;
    v67 = 0;
    v68 = 1061158912;
    v63 = 1048576000;
    v64 = 1044381696;
    v65 = 1065353216;
    AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v66, (const Vec3 *)&v63);
    Vec3::Vec3((int)&v62, (int)v9);
    BlockTessellator::tessellateSouth(v5, v7, v6, (const Vec3 *)&v62, v11);
    Vec3::Vec3((int)&v61, (int)v9);
    BlockTessellator::tessellateWest(v5, v7, v6, (const Vec3 *)&v61, v11);
    v58 = 0;
    v59 = 0;
    v60 = 1061158912;
    v55 = 1040187392;
    v56 = 1044381696;
    v57 = 1065353216;
    AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v58, (const Vec3 *)&v55);
    Vec3::Vec3((int)&v54, (int)v9);
    BlockTessellator::tessellateEast(v5, v7, v6, (const Vec3 *)&v54, v11);
    Vec3::Vec3((int)&v53, (int)v9);
    BlockTessellator::tessellateNorth(v5, v7, v6, (const Vec3 *)&v53, v11);
    Vec3::Vec3((int)&v52, (int)v9);
    BlockTessellator::tessellateFaceDown(v5, v7, v6, (const Vec3 *)&v52, v35);
    v49 = 1040187392;
    v50 = 0;
    v51 = 1063256064;
    v46 = 1048576000;
    v47 = 1044381696;
    v48 = 1065353216;
    AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v49, (const Vec3 *)&v46);
    Vec3::Vec3((int)&v45, (int)v9);
    BlockTessellator::tessellateNorth(v5, v7, v6, (const Vec3 *)&v45, v11);
    Vec3::Vec3((int)&v44, (int)v9);
    BlockTessellator::tessellateEast(v5, v7, v6, (const Vec3 *)&v44, v11);
    Vec3::Vec3((int)&v43, (int)v9);
    BlockTessellator::tessellateFaceDown(v5, v7, v6, (const Vec3 *)&v43, v35);
    v21 = (void *)(v207 - 12);
    if ( (int *)(v207 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v207 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
      }
      else
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v21);
  }
  if ( a5 )
    v22 = (BlockSource *)*((_DWORD *)v5 + 1);
    if ( !v22 )
      goto LABEL_38;
    v23 = BlockSource::getBlockEntity(v22, v9);
    v24 = v23;
    if ( v23 && BlockEntity::isType(v23, 19) == 1 && MovingBlockEntity::getBlockEntity((MovingBlockEntity *)v24) )
      v24 = MovingBlockEntity::getBlockEntity((MovingBlockEntity *)v24);
    if ( v24 && BlockEntity::isType(v24, 16) == 1 )
      if ( *(_DWORD *)(v24 + 216) >= 0 )
        v25 = &v42;
        CauldronBlockEntity::getPotionColor((CauldronBlockEntity *)&v42, v24);
LABEL_23:
        Tessellator::color(v7, (const Color *)v25);
        v27 = 3;
        v28 = 4;
LABEL_24:
        if ( v27 == *((_DWORD *)v5 + 11) )
        {
          v29 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v10, v9, v28, 0);
          _R0 = CauldronBlock::getWaterLevel((CauldronBlock *)a5, v30);
          __asm
          {
            VMOV            S2, R0
            VMOV.F32        S0, #0.125
            VCVT.F32.S32    S2, S2
          }
          v39 = 1040187392;
            VMOV.F32        S4, #0.1875
            VMUL.F32        S0, S2, S0
            VADD.F32        S0, S0, S4
            VSTR            S0, [SP,#0x498+var_46C]
          v40 = 1040187392;
          v37 = 1063256064;
          __asm { VSTR            S0, [SP,#0x498+var_478] }
          v38 = 1063256064;
          AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v39, (const Vec3 *)&v37);
          Vec3::Vec3((int)&v36, (int)v9);
          BlockTessellator::tessellateFaceUp(v5, v7, v6, (const Vec3 *)&v36, v29);
        }
        return 1;
      if ( *(_BYTE *)(v24 + 224) )
        v25 = &v41;
        CauldronBlockEntity::getCustomColor((CauldronBlockEntity *)&v41, v24);
        goto LABEL_23;
      v26 = (const Color **)&CauldronBlockEntity::WATER_COLOR;
LABEL_38:
    Tessellator::color(v7, *v26);
    v27 = 1;
    v28 = 5;
    goto LABEL_24;
  return 1;
}


signed int __fastcall BlockTessellator::tessellateFenceGateInWorld(BlockTessellator *this, Tessellator *a2, const FenceGateBlock *a3, const BlockPos *a4, unsigned __int8 a5)
{
  BlockTessellator *v5; // r11@1
  Tessellator *v6; // r10@1
  const Block *v7; // r9@1
  BlockState *v8; // r0@1
  __int64 v9; // kr00_8@1
  unsigned int v10; // r6@1
  BlockState *v11; // r0@1
  unsigned int v16; // r8@3
  __int64 v17; // r0@3
  int v18; // r7@4
  BlockTessellator *v19; // r5@4
  const BlockPos *v20; // r11@4
  BlockTessellator *v21; // r0@4
  BlockTessellator *v22; // r4@4
  Tessellator *v23; // r5@4
  const Block *v24; // r7@6
  Tessellator *v25; // r6@7
  BlockTessellator *v26; // r9@8
  __int64 v27; // r0@8
  __int64 v28; // r2@8
  BlockTessellator *v29; // r10@10
  const BlockPos *v30; // r5@10
  __int64 v31; // r0@10
  __int64 v32; // r2@10
  Tessellator *v33; // r1@12
  BlockTessellator *v34; // r0@12
  const Block *v35; // r2@12
  BlockTessellator *v36; // r9@13
  const Block *v37; // r8@13
  __int64 v38; // r0@13
  __int64 v39; // r2@13
  const BlockPos *v40; // r3@16
  signed int v42; // [sp+0h] [bp-58h]@8
  signed int v43; // [sp+0h] [bp-58h]@10
  int v44; // [sp+0h] [bp-58h]@12
  signed int v45; // [sp+0h] [bp-58h]@13
  float v46; // [sp+4h] [bp-54h]@8
  float v47; // [sp+4h] [bp-54h]@13
  signed int v48; // [sp+8h] [bp-50h]@8
  signed int v49; // [sp+8h] [bp-50h]@10
  signed int v50; // [sp+8h] [bp-50h]@13
  AABB *v51; // [sp+Ch] [bp-4Ch]@4
  _BOOL4 v52; // [sp+10h] [bp-48h]@1
  BlockPos *v53; // [sp+14h] [bp-44h]@1
  float v54; // [sp+18h] [bp-40h]@20
  int v55; // [sp+24h] [bp-34h]@3
  int v57; // [sp+2Ch] [bp-2Ch]@3
  unsigned __int8 v58[37]; // [sp+33h] [bp-25h]@1

  v5 = this;
  v6 = a2;
  v53 = a4;
  v7 = a3;
  v58[0] = a5;
  v8 = (BlockState *)Block::getBlockState(Block::mFenceGateOak, 26);
  v52 = BlockState::getBool(v8, v58);
  v9 = *(_QWORD *)Block::getBlockState(Block::mFenceGateOak, 12);
  v10 = v58[0];
  v11 = (BlockState *)Block::getBlockState(Block::mFenceGateOak, 20);
  BlockState::getBool(v11, v58);
  __asm
  {
    VMOV.F32        S2, #-0.1875
    VLDR            S0, =0.0
  }
  if ( !_ZF )
    __asm { VMOVNE.F32      S0, S2 }
  v55 = 0;
  __asm { VSTR            S0, [SP,#0x58+var_30] }
  v57 = 0;
  Tessellator::addOffset(v6, (const Vec3 *)&v55);
  v16 = (v10 >> (1 - BYTE4(v9) + v9)) & (0xFu >> (4 - BYTE4(v9)));
  LODWORD(v17) = (char *)v5 + 724;
  if ( (v16 | 2) == 3 )
    v18 = (int)v5 + 724;
    HIDWORD(v17) = 1054867456;
    v19 = v5;
    v51 = (BlockTessellator *)((char *)v5 + 724);
    AABB::set(v17, 1050673152LL, 0.5625, 0.9999, 0.125);
    v20 = v53;
    BlockTessellator::tessellateBlockInWorld(v19, v6, v7, v53, v58[0]);
    AABB::set(__PAIR__(1054867456, v18), 4566650023204356096LL, 0.5625, 0.9999, 1.0);
    v21 = v19;
    v22 = v19;
    v23 = v6;
    BlockTessellator::tessellateBlockInWorld(v21, v6, v7, v53, v58[0]);
  else
    v22 = v5;
    AABB::set((unsigned int)v17, 4530621226185392128LL, 0.125, 0.9999, 0.5625);
    BlockTessellator::tessellateBlockInWorld(v5, v6, v7, v53, v58[0]);
    AABB::set(__PAIR__(1063256064, (unsigned int)v5 + 724), 4530621226185392128LL, 1.0, 0.9999, 0.5625);
  v24 = v7;
  if ( v52 )
    v25 = v23;
    switch ( v16 )
    {
      case 0u:
        AABB::set((unsigned int)v51, 4562146423579082752LL, 0.125, 0.9375, 0.9375);
        v26 = v22;
        BlockTessellator::tessellateBlockInWorld(v22, v23, v24, v20, v58[0]);
        AABB::set(__PAIR__(1063256064, (unsigned int)v51), 4562146423579082752LL, 1.0, 0.9375, 0.9375);
        AABB::set((unsigned int)v51, 4544132025069600768LL, 0.125, 0.5625, 0.8125);
        AABB::set(__PAIR__(1063256064, (unsigned int)v51), 4544132025069600768LL, 1.0, 0.5625, 0.8125);
        AABB::set((unsigned int)v51, 4544132025077989376LL, 0.125, 0.9375, 0.8125);
        v42 = 1065353216;
        v46 = 0.9375;
        v48 = 1062207488;
        v27 = __PAIR__(1063256064, (unsigned int)v51);
        v28 = 4544132025077989376LL;
        goto LABEL_18;
      case 1u:
        v30 = v20;
        AABB::set(__PAIR__(1031798784, (unsigned int)v51), 1052770304LL, 0.1875, 0.9375, 0.125);
        v36 = v22;
        BlockTessellator::tessellateBlockInWorld(v22, v25, v24, v20, v58[0]);
        AABB::set(__PAIR__(1031798784, (unsigned int)v51), 4566650023206453248LL, 0.1875, 0.9375, 1.0);
        v37 = v24;
        AABB::set(__PAIR__(1044381696, (unsigned int)v51), 1052770304LL, 0.4375, 0.5625, 0.125);
        AABB::set(__PAIR__(1044381696, (unsigned int)v51), 4566650023206453248LL, 0.4375, 0.5625, 1.0);
        AABB::set(__PAIR__(1044381696, (unsigned int)v51), 1061158912LL, 0.4375, 0.9375, 0.125);
        v45 = 1054867456;
        v47 = 0.9375;
        v50 = 1065353216;
        v38 = __PAIR__(1044381696, (unsigned int)v51);
        v39 = 4566650023214841856LL;
        goto LABEL_15;
      case 2u:
        AABB::set((unsigned int)v51, 4431542034385338368LL, 0.125, 0.9375, 0.1875);
        AABB::set(__PAIR__(1063256064, (unsigned int)v51), 4431542034385338368LL, 1.0, 0.9375, 0.1875);
        AABB::set((unsigned int)v51, 4485585229913784320LL, 0.125, 0.5625, 0.4375);
        AABB::set(__PAIR__(1063256064, (unsigned int)v51), 4485585229913784320LL, 1.0, 0.5625, 0.4375);
        AABB::set((unsigned int)v51, 4485585229922172928LL, 0.125, 0.9375, 0.4375);
        v45 = 1065353216;
        v50 = 1054867456;
        v38 = __PAIR__(1063256064, (unsigned int)v51);
        v39 = 4485585229922172928LL;
LABEL_15:
        AABB::set(v38, v39, *(float *)&v45, v47, *(float *)&v50);
        v33 = v25;
        v44 = v58[0];
        v34 = v36;
        v35 = v37;
        goto LABEL_16;
      case 3u:
        AABB::set(__PAIR__(1062207488, (unsigned int)v51), 1052770304LL, 0.9375, 0.9375, 0.125);
        AABB::set(__PAIR__(1062207488, (unsigned int)v51), 4566650023206453248LL, 0.9375, 0.9375, 1.0);
        AABB::set(__PAIR__(1058013184, (unsigned int)v51), 1052770304LL, 0.8125, 0.5625, 0.125);
        AABB::set(__PAIR__(1058013184, (unsigned int)v51), 4566650023206453248LL, 0.8125, 0.5625, 1.0);
        AABB::set(__PAIR__(1058013184, (unsigned int)v51), 1061158912LL, 0.8125, 0.9375, 0.125);
        v42 = 1062207488;
        v48 = 1065353216;
        v27 = __PAIR__(1058013184, (unsigned int)v51);
        v28 = 4566650023214841856LL;
LABEL_18:
        AABB::set(v27, v28, *(float *)&v42, v46, *(float *)&v48);
        v33 = v23;
        v34 = v26;
        v35 = v24;
        v40 = v20;
        goto LABEL_19;
      default:
        break;
    }
    if ( (v16 | 2) == 3 )
      AABB::set(__PAIR__(1054867456, (unsigned int)v51), 4521614026932748288LL, 0.5625, 0.9375, 0.5);
      v25 = v23;
      v29 = v22;
      BlockTessellator::tessellateBlockInWorld(v22, v23, v7, v20, v58[0]);
      AABB::set(__PAIR__(1054867456, (unsigned int)v51), 4539628425442230272LL, 0.5625, 0.9375, 0.625);
      v30 = v20;
      AABB::set(__PAIR__(1054867456, (unsigned int)v51), 4548635624696971264LL, 0.5625, 0.5625, 0.875);
      BlockTessellator::tessellateBlockInWorld(v22, v25, v7, v20, v58[0]);
      AABB::set(__PAIR__(1054867456, (unsigned int)v51), 4548635624705359872LL, 0.5625, 0.9375, 0.875);
      AABB::set(__PAIR__(1054867456, (unsigned int)v51), 4467570831404302336LL, 0.5625, 0.5625, 0.375);
      v43 = 1058013184;
      v49 = 1052770304;
      v31 = __PAIR__(1054867456, (unsigned int)v51);
      v32 = 4467570831412690944LL;
    else
      AABB::set(__PAIR__(1052770304, (unsigned int)v51), 4530621226187489280LL, 0.5, 0.9375, 0.5625);
      AABB::set(__PAIR__(1056964608, (unsigned int)v51), 4530621226187489280LL, 0.625, 0.9375, 0.5625);
      AABB::set(__PAIR__(1059061760, (unsigned int)v51), 4530621226187489280LL, 0.875, 0.5625, 0.5625);
      AABB::set(__PAIR__(1059061760, (unsigned int)v51), 4530621226195877888LL, 0.875, 0.9375, 0.5625);
      AABB::set(__PAIR__(1040187392, (unsigned int)v51), 4530621226187489280LL, 0.375, 0.5625, 0.5625);
      v43 = 1052770304;
      v49 = 1058013184;
      v31 = __PAIR__(1040187392, (unsigned int)v51);
      v32 = 4530621226195877888LL;
    AABB::set(v31, v32, *(float *)&v43, 0.9375, *(float *)&v49);
    v33 = v25;
    v44 = v58[0];
    v34 = v29;
    v35 = v7;
LABEL_16:
    v40 = v30;
LABEL_19:
    BlockTessellator::tessellateBlockInWorld(v34, v33, v35, v40, v44);
    VLDR            S0, [SP,#0x58+var_34]; jumptable 00EA3520 default case
    VLDR            S2, [SP,#0x58+var_30]
    VLDR            S4, [SP,#0x58+var_2C]
    VNEG.F32        S0, S0
    VNEG.F32        S2, S2
    VNEG.F32        S4, S4
    VSTR            S0, [SP,#0x58+var_40]
    VSTR            S2, [SP,#0x58+var_3C]
    VSTR            S4, [SP,#0x58+var_38]
  Tessellator::addOffset(v25, (const Vec3 *)&v54);
  return 1;
}


signed int __fastcall BlockTessellator::tessellateDiodeInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  signed int v5; // lr@4

  if ( a5 == 1 )
  {
    v5 = 1;
    goto LABEL_7;
  }
  if ( a5 == 3 )
    v5 = 2;
  if ( a5 == 2 )
    v5 = 3;
LABEL_7:
    *((_DWORD *)this + 48) = v5;
  BlockTessellator::tessellateBlockInWorld(this, a2, a3, a4, a5);
  return 1;
}


void __fastcall BlockTessellator::_tessellateAllFaces(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  BlockTessellator *v5; // r6@1
  const Block *v6; // r4@1
  Tessellator *v7; // r8@1
  const BlockPos *v8; // r7@1
  unsigned int v9; // r5@1
  const TextureUVCoordinateSet *v10; // r0@1
  const TextureUVCoordinateSet *v11; // r0@1
  const TextureUVCoordinateSet *v12; // r0@1
  const TextureUVCoordinateSet *v13; // r0@1
  const TextureUVCoordinateSet *v14; // r0@1
  const TextureUVCoordinateSet *v15; // r0@1
  char v16; // [sp+8h] [bp-68h]@1
  char v17; // [sp+14h] [bp-5Ch]@1
  char v18; // [sp+20h] [bp-50h]@1
  char v19; // [sp+2Ch] [bp-44h]@1
  char v20; // [sp+38h] [bp-38h]@1
  char v21; // [sp+44h] [bp-2Ch]@1

  v5 = this;
  v6 = a3;
  v7 = a2;
  v8 = a4;
  v9 = BlockGraphics::mBlocks[*((_BYTE *)a3 + 4)];
  Vec3::Vec3((int)&v21, (int)a4);
  v10 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(1, v9), a5, 0);
  BlockTessellator::tessellateFaceUp(v5, v7, v6, (const Vec3 *)&v21, v10);
  Vec3::Vec3((int)&v20, (int)v8);
  v11 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v9, a5, 0);
  BlockTessellator::tessellateFaceDown(v5, v7, v6, (const Vec3 *)&v20, v11);
  Vec3::Vec3((int)&v19, (int)v8);
  v12 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(2, v9), a5, 0);
  BlockTessellator::tessellateNorth(v5, v7, v6, (const Vec3 *)&v19, v12);
  Vec3::Vec3((int)&v18, (int)v8);
  v13 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(3, v9), a5, 0);
  BlockTessellator::tessellateSouth(v5, v7, v6, (const Vec3 *)&v18, v13);
  Vec3::Vec3((int)&v17, (int)v8);
  v14 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(4, v9), a5, 0);
  BlockTessellator::tessellateWest(v5, v7, v6, (const Vec3 *)&v17, v14);
  Vec3::Vec3((int)&v16, (int)v8);
  v15 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(5, v9), a5, 0);
  BlockTessellator::tessellateEast(v5, v7, v6, (const Vec3 *)&v16, v15);
}


void __fastcall BlockTessellator::tessellateEndRodGui(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockGraphics *a4)
{
  BlockTessellator::tessellateEndRodGui(this, a2, a3, a4);
}


signed int __fastcall BlockTessellator::tessellateComparatorInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  Block *v7; // r7@1
  Tessellator *v8; // r5@1
  int v11; // r0@3
  unsigned __int64 *v16; // r0@7
  int v17; // r9@7
  int v18; // r8@7
  ComparatorBlock *v19; // r10@7
  float *v20; // r5@7
  float *v21; // r0@7
  unsigned int v22; // r7@9
  const Block *v23; // r8@9
  int v24; // r10@9
  float v25; // r9@11
  float v30; // ST08_4@14
  float v31; // ST08_4@14
  signed int v32; // r0@17
  float v34; // [sp+8h] [bp-A8h]@0
  float v35; // [sp+10h] [bp-A0h]@9
  Tessellator *v36; // [sp+14h] [bp-9Ch]@7
  float v37; // [sp+18h] [bp-98h]@14
  float v38; // [sp+24h] [bp-8Ch]@14
  float v39; // [sp+30h] [bp-80h]@14
  unsigned __int8 v40; // [sp+3Ch] [bp-74h]@2
  unsigned __int8 v41; // [sp+3Dh] [bp-73h]@2
  float v42; // [sp+40h] [bp-70h]@6

  _R11 = this;
  _R4 = a4;
  v7 = a3;
  v8 = a2;
  if ( *((_BYTE *)this + 48) )
  {
    _R1 = (unsigned __int8)Brightness::MAX;
    v40 = Brightness::MAX;
    v41 = Brightness::MAX;
    _R2 = (unsigned __int8)Brightness::MAX;
  }
  else
    BlockTessellatorCache::getLightColor(
      (BlockTessellatorCache *)&v40,
      (BlockTessellator *)((char *)this + 812),
      (int)a4);
    _R1 = v40;
    _R2 = v41;
    v11 = *((_BYTE *)_R11 + 48);
  __asm
    VMOV            S0, R2
    VLDR            S4, =0.0625
    VMOV            S2, R1
    VCVT.F32.U32    S0, S0
    VCVT.F32.U32    S2, S2
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S4
    VSTR            S0, [SP,#0xB0+var_70]
    VSTR            S2, [SP,#0xB0+var_6C]
  if ( _ZF )
    Tessellator::tex1((int)v8, (__int64 *)&v42);
  v36 = v8;
  Tessellator::color(v8, 1.0, 1.0, 1.0, 1.0);
  v16 = (unsigned __int64 *)Block::getBlockState(Block::mPoweredComparator, 12);
  v17 = *v16 >> 32;
  v18 = 1 - v17 + *v16;
  v19 = v7;
  v20 = (float *)&Block::mUnlitRedStoneTorch;
  Block::isType(v7, (const Block *)Block::mPoweredComparator);
  v21 = (float *)&Block::mUnlitRedStoneTorch;
  __asm { VLDR            S16, [R11,#0x2E4] }
  if ( !_ZF )
    v21 = (float *)&Block::mLitRedStoneTorch;
  __asm { VLDR            S0, [R4,#4] }
  v22 = (unsigned int)(unsigned __int8)a5 >> v18;
  v35 = *v21;
  __asm { VCVT.F32.S32    S20, S0 }
  v23 = v19;
  ComparatorBlock::isSubtractMode(v19, *((BlockSource **)_R11 + 1), _R4);
  __asm { VMOV.F64        D0, #-0.3125 }
  v24 = v22 & (0xFu >> (4 - v17));
  __asm { VMOV.F64        D9, #-0.375 }
    __asm { VMOVNE.F64      D9, D0 }
    v20 = (float *)&Block::mLitRedStoneTorch;
  __asm { VADD.F32        S16, S20, S16 }
  v25 = *v20;
  if ( !_ZF & _CF )
    __asm
    {
      VLDR            D12, =0.0
      VMOV.F64        D13, D12
      VMOV.F64        D10, D12
      VMOV.F64        D11, D12
    }
    _R0 = (char *)&unk_262CA80 + 8 * v24;
    _R1 = (char *)&unk_262CAC0 + 8 * v24;
    __asm { VLDR            D11, [R1] }
    _R1 = (char *)&unk_262CAA0 + 8 * v24;
    __asm { VLDR            D13, [R0] }
    _R0 = (char *)&unk_262CA60 + 8 * v24;
      VLDR            D10, [R1]
      VLDR            D12, [R0]
    VMOV.F64        D0, #0.25
    VMOV.F64        D1, #0.1875
    VMUL.F64        D2, D12, D0
    VMUL.F64        D3, D13, D1
    VMUL.F64        D1, D12, D1
    VMUL.F64        D0, D13, D0
    VCVT.F32.F64    S28, D2
    VCVT.F32.F64    S4, D3
    VCVT.F32.F64    S2, D1
    VCVT.F32.F64    S30, D0
    VLDR            S6, [R4]
    VADD.F32        S4, S4, S28
    VLDR            S8, [R4,#4]
    VMOV.F32        S17, #-0.1875
    VLDR            S10, [R4,#8]
    VCVT.F32.S32    S0, S6
    VCVT.F32.S32    S6, S8
    VCVT.F32.S32    S8, S10
    VSTR            S16, [SP,#0xB0+var_A8]
    VADD.F32        S2, S30, S2
    VADD.F32        S0, S4, S0
    VADD.F32        S4, S6, S17
    VADD.F32        S2, S2, S8
    VSTR            S0, [SP,#0xB0+var_80]
    VSTR            S4, [SP,#0xB0+var_7C]
    VSTR            S2, [SP,#0xB0+var_78]
  BlockTessellator::tessellateTorch(*(float *)&_R11, *(float *)&v36, v35, (const Vec3 *)&v39, 0.0, 0.0, v34);
    VMOV.F64        D0, #-0.1875
    VMUL.F64        D1, D13, D0
    VMUL.F64        D0, D12, D0
    VCVT.F32.F64    S0, D0
    VLDR            S4, [R4]
    VADD.F32        S2, S2, S28
    VLDR            S6, [R4,#4]
    VADD.F32        S0, S30, S0
    VLDR            S8, [R4,#8]
    VCVT.F32.S32    S4, S4
    VCVT.F32.S32    S6, S6
    VCVT.F32.S32    S8, S8
    VADD.F32        S2, S2, S4
    VADD.F32        S0, S0, S8
    VSTR            S2, [SP,#0xB0+var_8C]
    VSTR            S4, [SP,#0xB0+var_88]
    VSTR            S0, [SP,#0xB0+var_84]
  BlockTessellator::tessellateTorch(*(float *)&_R11, *(float *)&v36, v35, (const Vec3 *)&v38, 0.0, 0.0, v30);
    VLDR            S0, [R4]
    VLDR            S2, [R4,#4]
    VLDR            S4, [R4,#8]
    VCVT.F64.S32    D0, S0
    VCVT.F64.S32    D1, S2
    VCVT.F64.S32    D2, S4
    VADD.F64        D0, D0, D11
    VADD.F64        D1, D1, D9
    VADD.F64        D2, D2, D10
    VCVT.F32.F64    S4, D2
    VSTR            S0, [SP,#0xB0+var_98]
    VSTR            S2, [SP,#0xB0+var_94]
    VSTR            S4, [SP,#0xB0+var_90]
  BlockTessellator::tessellateTorch(*(float *)&_R11, *(float *)&v36, v25, (const Vec3 *)&v37, 0.0, 0.0, v31);
  if ( v24 == 1 )
    v32 = 1;
    goto LABEL_20;
  if ( v24 == 3 )
    v32 = 2;
  if ( v24 == 2 )
    v32 = 3;
LABEL_20:
    *((_DWORD *)_R11 + 48) = v32;
  BlockTessellator::tessellateBlockInWorld(_R11, v36, v23, _R4, v24);
  return 1;
}


void __fastcall BlockTessellator::tessellateFaceWithUVs(int this, float a2, __int64 a3, float a4, int a5, float a6, float a7, float a8, int a9)
{
  BlockTessellator::tessellateFaceWithUVs(
    (BlockTessellator *)this,
    (Tessellator *)LODWORD(a2),
    a3,
    (const TextureUVCoordinateSet *)LODWORD(a4),
    *(float *)&a5,
    a6,
    a7,
    a8,
    a9);
}


signed int __fastcall BlockTessellator::tessellatePistonInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  BlockTessellator *v5; // r4@1
  const BlockPos *v6; // r5@1
  const Block *v7; // r6@1
  Tessellator *v8; // r7@1
  signed int v9; // r2@2
  __int64 v10; // r0@2
  signed int v11; // r0@3
  char *v12; // r0@5
  signed __int64 v14; // [sp+0h] [bp-28h]@2
  float v15; // [sp+8h] [bp-20h]@2

  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  switch ( a5 & 7 )
  {
    case 0:
      LODWORD(v10) = (char *)this + 724;
      *(_DWORD *)(v10 + 196) = 3;
      *(_DWORD *)(v10 + 200) = 3;
      v9 = 1048576000;
      *(_DWORD *)(v10 + 204) = 3;
      *(_DWORD *)(v10 + 208) = 3;
      v14 = 4575657222473777152LL;
      v15 = 1.0;
      v10 = (unsigned int)v10;
      goto LABEL_10;
    case 1:
      v11 = 1065353216;
      v14 = 4557642823964295168LL;
      goto LABEL_7;
    case 2:
      *((_DWORD *)this + 47) = 3;
      *((_DWORD *)this + 48) = 3;
      *((_DWORD *)this + 51) = 1;
      *((_DWORD *)this + 52) = 1;
      v11 = 1061158912;
    case 3:
      v12 = (char *)this + 724;
      *((_DWORD *)v12 + 51) = 2;
      *((_DWORD *)v12 + 52) = 2;
      AABB::set((unsigned int)v12, 4503599627370496000LL, 1.0, 1.0, 1.0);
      break;
    case 4:
      *((_DWORD *)this + 47) = 2;
      *((_DWORD *)this + 48) = 1;
      *((_DWORD *)this + 49) = 1;
      *((_DWORD *)this + 50) = 1;
      v14 = 4575657222469582848LL;
LABEL_7:
      v15 = *(float *)&v11;
      v10 = (unsigned int)v5 + 724;
      goto LABEL_9;
    case 5:
      *((_DWORD *)this + 47) = 1;
      *((_DWORD *)this + 48) = 2;
      HIDWORD(v10) = 1048576000;
      *((_DWORD *)this + 49) = 2;
      *((_DWORD *)this + 50) = 2;
LABEL_9:
      v9 = 0;
LABEL_10:
      AABB::set(v10, (unsigned int)v9, *(float *)&v14, *((float *)&v14 + 1), v15);
    default:
  }
  BlockTessellator::tessellateBlockInWorld(v5, v8, v7, v6, a5);
  *((_BYTE *)v5 + 40) = 0;
  return 1;
}


int __fastcall BlockTessellator::setForceOpaque(int result, bool a2)
{
  *(_BYTE *)(result + 56828) = a2;
  return result;
}


signed int __fastcall BlockTessellator::tessellateStructureVoidInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5, int a6)
{
  BlockTessellator *v6; // r6@1
  const Block *v7; // r4@1
  Tessellator *v8; // r9@1
  const BlockPos *v9; // r7@1
  unsigned int v10; // r5@2
  const TextureUVCoordinateSet *v11; // r0@2
  const TextureUVCoordinateSet *v12; // r0@2
  const TextureUVCoordinateSet *v13; // r0@2
  const TextureUVCoordinateSet *v14; // r0@2
  const TextureUVCoordinateSet *v15; // r0@2
  const TextureUVCoordinateSet *v16; // r0@2
  char v18; // [sp+8h] [bp-80h]@2
  char v19; // [sp+14h] [bp-74h]@2
  char v20; // [sp+20h] [bp-68h]@2
  char v21; // [sp+2Ch] [bp-5Ch]@2
  char v22; // [sp+38h] [bp-50h]@2
  char v23; // [sp+44h] [bp-44h]@2
  int v24; // [sp+50h] [bp-38h]@1
  signed int v25; // [sp+54h] [bp-34h]@1
  int v26; // [sp+58h] [bp-30h]@1
  int v27; // [sp+5Ch] [bp-2Ch]@1
  signed int v28; // [sp+60h] [bp-28h]@1
  int v29; // [sp+64h] [bp-24h]@1

  v6 = this;
  v7 = a3;
  v27 = 1050673152;
  v28 = 1050673152;
  v8 = a2;
  v29 = 1050673152;
  v24 = 1060110336;
  v25 = 1060110336;
  v26 = 1060110336;
  v9 = a4;
  AABB::set((BlockTessellator *)((char *)this + 724), (const Vec3 *)&v27, (const Vec3 *)&v24);
  if ( a6 == 1 )
  {
    v10 = BlockGraphics::mBlocks[*((_BYTE *)v7 + 4)];
    Vec3::Vec3((int)&v23, (int)v9);
    v11 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(1, v10), a5, 0);
    BlockTessellator::tessellateFaceUp(v6, v8, v7, (const Vec3 *)&v23, v11);
    Vec3::Vec3((int)&v22, (int)v9);
    v12 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v10, a5, 0);
    BlockTessellator::tessellateFaceDown(v6, v8, v7, (const Vec3 *)&v22, v12);
    Vec3::Vec3((int)&v21, (int)v9);
    v13 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(2, v10), a5, 0);
    BlockTessellator::tessellateNorth(v6, v8, v7, (const Vec3 *)&v21, v13);
    Vec3::Vec3((int)&v20, (int)v9);
    v14 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(3, v10), a5, 0);
    BlockTessellator::tessellateSouth(v6, v8, v7, (const Vec3 *)&v20, v14);
    Vec3::Vec3((int)&v19, (int)v9);
    v15 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(4, v10), a5, 0);
    BlockTessellator::tessellateWest(v6, v8, v7, (const Vec3 *)&v19, v15);
    Vec3::Vec3((int)&v18, (int)v9);
    v16 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(5, v10), a5, 0);
    BlockTessellator::tessellateEast(v6, v8, v7, (const Vec3 *)&v18, v16);
  }
  else
    BlockTessellator::tessellateBlockInWorld(v6, v8, v7, v9, a5);
  return 1;
}


int __fastcall BlockTessellator::clearBlockCache(BlockTessellator *this)
{
  BlockTessellator *v1; // r4@1
  int v2; // r5@1
  int v3; // r6@2
  int result; // r0@3

  v1 = this;
  v2 = *((_DWORD *)this + 191);
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD *)v2;
      mce::Mesh::~Mesh((mce::Mesh *)(v2 + 8));
      operator delete((void *)v2);
      v2 = v3;
    }
    while ( v3 );
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 756), 4 * (*(_QWORD *)((char *)v1 + 756) >> 32));
  result = 0;
  *((_DWORD *)v1 + 191) = 0;
  *((_DWORD *)v1 + 192) = 0;
  return result;
}


signed int __fastcall BlockTessellator::tessellateCactusInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  const Block *v5; // r5@1
  Tessellator *v7; // r8@1
  int v8; // r11@1
  const BlockPos *v9; // r10@1
  unsigned int v10; // r7@1
  int v19; // r1@5
  int v20; // r2@5
  int v23; // r0@7
  BlockGraphics *v25; // r7@11
  int v26; // r11@11
  unsigned int v27; // r0@11
  int (__fastcall *v28)(const Block *, unsigned int); // r2@11
  int v29; // r4@12
  int v30; // r0@12
  const TextureUVCoordinateSet *v31; // r0@12
  int v32; // r0@13
  int v35; // r1@19
  int v36; // r2@19
  BlockGraphics *v38; // r7@24
  int v39; // r9@24
  unsigned int v40; // r0@24
  int (__fastcall *v41)(const Block *, unsigned int); // r2@24
  int v42; // r0@25
  const TextureUVCoordinateSet *v43; // r0@25
  int v44; // r0@26
  BlockGraphics *v48; // r7@30
  int v49; // r4@30
  unsigned int v50; // r0@30
  int (__fastcall *v51)(const Block *, unsigned int); // r2@30
  int v52; // r0@31
  const TextureUVCoordinateSet *v53; // r0@31
  int v54; // r0@32
  BlockGraphics *v55; // r7@33
  int v56; // r4@33
  unsigned int v57; // r0@33
  int (__fastcall *v58)(const Block *, unsigned int); // r2@33
  int v59; // r0@34
  const TextureUVCoordinateSet *v60; // r0@34
  int v61; // r0@35
  BlockGraphics *v63; // r7@36
  int v64; // r4@36
  unsigned int v65; // r0@36
  int (__fastcall *v66)(const Block *, unsigned int); // r2@36
  int v67; // r0@37
  const TextureUVCoordinateSet *v68; // r0@37
  int v69; // r0@38
  BlockGraphics *v70; // r7@39
  int v71; // r4@39
  unsigned int v72; // r0@39
  int (__fastcall *v73)(const Block *, unsigned int); // r2@39
  int v74; // r0@40
  const TextureUVCoordinateSet *v75; // r0@40
  int v76; // r0@41
  char v78; // [sp+Ch] [bp-124h]@39
  char v79; // [sp+18h] [bp-118h]@36
  float v80; // [sp+24h] [bp-10Ch]@36
  char v81; // [sp+34h] [bp-FCh]@33
  char v82; // [sp+40h] [bp-F0h]@30
  float v83; // [sp+4Ch] [bp-E4h]@30
  float v84; // [sp+5Ch] [bp-D4h]@29
  char v85; // [sp+64h] [bp-CCh]@24
  float v86; // [sp+70h] [bp-C0h]@24
  int v87; // [sp+80h] [bp-B0h]@19
  int v88; // [sp+84h] [bp-ACh]@19
  int v89; // [sp+88h] [bp-A8h]@19
  unsigned __int8 v90; // [sp+8Ch] [bp-A4h]@18
  unsigned __int8 v91; // [sp+8Dh] [bp-A3h]@18
  float v92; // [sp+90h] [bp-A0h]@23
  char v93; // [sp+98h] [bp-98h]@11
  float v94; // [sp+A4h] [bp-8Ch]@11
  int v95; // [sp+B4h] [bp-7Ch]@5
  int v96; // [sp+B8h] [bp-78h]@5
  int v97; // [sp+BCh] [bp-74h]@5
  unsigned __int8 v98; // [sp+C0h] [bp-70h]@6
  unsigned __int8 v99; // [sp+C1h] [bp-6Fh]@6
  float v100; // [sp+C4h] [bp-6Ch]@10
  unsigned __int8 v101; // [sp+CCh] [bp-64h]@2
  unsigned __int8 v102; // [sp+CDh] [bp-63h]@2
  void *v103; // [sp+D0h] [bp-60h]@1
  int v104; // [sp+D4h] [bp-5Ch]@1
  char v105; // [sp+D8h] [bp-58h]@1

  v5 = a3;
  _R6 = this;
  v7 = a2;
  v8 = a5;
  v9 = a4;
  v10 = (*(int (__fastcall **)(const Block *, int))(*(_DWORD *)a3 + 384))(a3, a5);
  v103 = &unk_262C9B0;
  v104 = 2;
  BlockOccluder::BlockOccluder(
    (BlockOccluder *)&v105,
    (int)_R6 + 812,
    v5,
    v9,
    (BlockTessellator *)((char *)_R6 + 724),
    (int)&v103,
    *((_BYTE *)_R6 + 48));
  _R1 = v10 >> 24;
  _R0 = (unsigned __int8)v10;
  __asm
  {
    VMOV            S0, R1
    VLDR            S24, =0.0039216
    VCVT.F32.S32    S16, S0
  }
  _R1 = (unsigned __int16)v10 >> 8;
    VMOV            S0, R0
    VCVT.F32.S32    S18, S0
    VCVT.F32.S32    S20, S0
  _R0 = (v10 >> 16) & 0xFF;
    VCVT.F32.S32    S22, S0
  if ( *((_BYTE *)_R6 + 48) )
    v101 = Brightness::MAX;
    v102 = Brightness::MAX;
  else
    BlockTessellatorCache::getLightColor(
      (BlockTessellatorCache *)&v101,
      (BlockTessellator *)((char *)_R6 + 812),
      (int)v9);
    VMUL.F32        S16, S16, S24
    VMUL.F32        S18, S18, S24
    VMUL.F32        S20, S20, S24
    VMUL.F32        S22, S22, S24
  if ( !BlockOccluder::occludes((BlockOccluder *)&v105, 0) )
    v19 = *((_DWORD *)v9 + 1);
    v20 = *((_DWORD *)v9 + 2);
    v95 = *(_DWORD *)v9;
    v96 = v19 - 1;
    v97 = v20;
    if ( *((_BYTE *)_R6 + 48) )
    {
      _R1 = (unsigned __int8)Brightness::MAX;
      v98 = Brightness::MAX;
      v99 = Brightness::MAX;
      _R2 = (unsigned __int8)Brightness::MAX;
    }
    else
      BlockTessellatorCache::getLightColor(
        (BlockTessellatorCache *)&v98,
        (BlockTessellator *)((char *)_R6 + 812),
        (int)&v95);
      _R1 = v98;
      _R2 = v99;
      v23 = *((_BYTE *)_R6 + 48);
    __asm
      VMOV            S0, R2
      VLDR            S4, =0.0625
      VMOV            S2, R1
      VCVT.F32.U32    S0, S0
      VCVT.F32.U32    S2, S2
      VMUL.F32        S0, S0, S4
      VMUL.F32        S2, S2, S4
      VSTR            S0, [SP,#0x130+var_6C]
      VSTR            S2, [SP,#0x130+var_68]
    if ( _ZF )
      Tessellator::tex1((int)v7, (__int64 *)&v100);
    _R0 = &Color::SHADE_DOWN;
      VLDR            S0, [R0]
      VLDR            S2, [R0,#4]
      VLDR            S4, [R0,#8]
      VMUL.F32        S0, S0, S22
      VLDR            S6, [R0,#0xC]
      VMUL.F32        S2, S2, S20
      VMUL.F32        S4, S4, S18
      VMUL.F32        S6, S6, S16
      VSTR            S0, [SP,#0x130+var_8C]
      VSTR            S2, [SP,#0x130+var_88]
      VSTR            S4, [SP,#0x130+var_84]
      VSTR            S6, [SP,#0x130+var_80]
    Tessellator::color(v7, (const Color *)&v94);
    Vec3::Vec3((int)&v93, (int)v9);
    v25 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v5 + 4)];
    v26 = (*(int (__fastcall **)(const Block *, _DWORD, int))(*(_DWORD *)v5 + 428))(v5, 0, a5);
    v27 = *((_WORD *)_R6 + 24);
    v28 = *(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v5 + 424);
    if ( (_BYTE)v27 )
      v29 = a5;
      v30 = v28(v5, v27 >> 8);
      v31 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture((unsigned int)v25, v30, 0);
      v32 = ((int (__fastcall *)(const Block *))v28)(v5);
      v31 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v25, v9, v26, v32);
    BlockTessellator::tessellateFaceDown(_R6, v7, v5, (const Vec3 *)&v93, v31);
    v8 = v29;
  if ( !BlockOccluder::occludes((BlockOccluder *)&v105, 1) )
      VMOV.F32        S0, #1.0
      VLDR            S2, [R6,#0x2E4]
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      _R0 = v101;
      _R1 = v102;
      v90 = v101;
      v91 = v102;
      v35 = *((_DWORD *)v9 + 1);
      v36 = *((_DWORD *)v9 + 2);
      v87 = *(_DWORD *)v9;
      v88 = v35 + 1;
      v89 = v36;
      if ( *((_BYTE *)_R6 + 48) )
      {
        _R0 = (unsigned __int8)Brightness::MAX;
        v90 = Brightness::MAX;
        v91 = Brightness::MAX;
        _R1 = (unsigned __int8)Brightness::MAX;
      }
      else
        BlockTessellatorCache::getLightColor(
          (BlockTessellatorCache *)&v90,
          (BlockTessellator *)((char *)_R6 + 812),
          (int)&v87);
        _R0 = v90;
        _R1 = v91;
      VMOV            S0, R1
      VMOV            S2, R0
      VSTR            S0, [SP,#0x130+var_A0]
      VSTR            S2, [SP,#0x130+var_9C]
    if ( !*((_BYTE *)_R6 + 48) )
      Tessellator::tex1((int)v7, (__int64 *)&v92);
    _R0 = &Color::SHADE_UP;
      VSTR            S0, [SP,#0x130+var_C0]
      VSTR            S2, [SP,#0x130+var_BC]
      VSTR            S4, [SP,#0x130+var_B8]
      VSTR            S6, [SP,#0x130+var_B4]
    Tessellator::color(v7, (const Color *)&v86);
    Vec3::Vec3((int)&v85, (int)v9);
    v38 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v5 + 4)];
    v39 = (*(int (__fastcall **)(const Block *, signed int, int))(*(_DWORD *)v5 + 428))(v5, 1, v8);
    v40 = *((_WORD *)_R6 + 24);
    v41 = *(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v5 + 424);
    if ( (_BYTE)v40 )
      v42 = v41(v5, v40 >> 8);
      v43 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(1, (unsigned int)v38), v42, 0);
      v44 = v41(v5, v8);
      v43 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v38, v9, v39, v44);
    BlockTessellator::tessellateFaceUp(_R6, v7, v5, (const Vec3 *)&v85, v43);
  _R0 = v101;
  _R1 = v102;
    VLDR            S4, =0.0625
    VMOV            S2, R0
    VCVT.F32.U32    S0, S0
    VCVT.F32.U32    S2, S2
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S4
    VSTR            S0, [SP,#0x130+var_D4]
    VSTR            S2, [SP,#0x130+var_D0]
  if ( !*((_BYTE *)_R6 + 48) )
    Tessellator::tex1((int)v7, (__int64 *)&v84);
  _R0 = &Color::SHADE_NORTH_SOUTH;
    VLDR            S0, [R0]
    VLDR            S2, [R0,#4]
    VLDR            S4, [R0,#8]
    VMUL.F32        S0, S0, S22
    VLDR            S6, [R0,#0xC]
    VMUL.F32        S2, S2, S20
    VMUL.F32        S4, S4, S18
    VMUL.F32        S6, S6, S16
    VSTR            S0, [SP,#0x130+var_E4]
    VSTR            S2, [SP,#0x130+var_E0]
    VSTR            S4, [SP,#0x130+var_DC]
    VSTR            S6, [SP,#0x130+var_D8]
  Tessellator::color(v7, (const Color *)&v83);
  Tessellator::addOffset(v7, 0.0, 0.0, 0.0625);
  Vec3::Vec3((int)&v82, (int)v9);
  v48 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v5 + 4)];
  v49 = (*(int (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v5 + 428))(v5, 2, v8);
  v50 = *((_WORD *)_R6 + 24);
  v51 = *(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v5 + 424);
  if ( (_BYTE)v50 )
    v52 = v51(v5, v50 >> 8);
    v53 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(2, (unsigned int)v48), v52, 0);
    v54 = v51(v5, v8);
    v53 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v48, v9, v49, v54);
  BlockTessellator::tessellateNorth(_R6, v7, v5, (const Vec3 *)&v82, v53);
  Tessellator::addOffset(v7, 0.0, 0.0, -0.0625);
  Vec3::Vec3((int)&v81, (int)v9);
  v55 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v5 + 4)];
  v56 = (*(int (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v5 + 428))(v5, 3, v8);
  v57 = *((_WORD *)_R6 + 24);
  v58 = *(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v5 + 424);
  if ( (_BYTE)v57 )
    v59 = v58(v5, v57 >> 8);
    v60 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(3, (unsigned int)v55), v59, 0);
    v61 = v58(v5, v8);
    v60 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v55, v9, v56, v61);
  BlockTessellator::tessellateSouth(_R6, v7, v5, (const Vec3 *)&v81, v60);
  _R0 = &Color::SHADE_WEST_EAST;
    VSTR            S0, [SP,#0x130+var_10C]
    VSTR            S2, [SP,#0x130+var_108]
    VSTR            S4, [SP,#0x130+var_104]
    VSTR            S6, [SP,#0x130+var_100]
  Tessellator::color(v7, (const Color *)&v80);
  Tessellator::addOffset(v7, 0.0625, 0.0, 0.0);
  Vec3::Vec3((int)&v79, (int)v9);
  v63 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v5 + 4)];
  v64 = (*(int (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v5 + 428))(v5, 4, v8);
  v65 = *((_WORD *)_R6 + 24);
  v66 = *(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v5 + 424);
  if ( (_BYTE)v65 )
    v67 = v66(v5, v65 >> 8);
    v68 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(4, (unsigned int)v63), v67, 0);
    v69 = v66(v5, v8);
    v68 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v63, v9, v64, v69);
  BlockTessellator::tessellateWest(_R6, v7, v5, (const Vec3 *)&v79, v68);
  Tessellator::addOffset(v7, -0.0625, 0.0, 0.0);
  Vec3::Vec3((int)&v78, (int)v9);
  v70 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v5 + 4)];
  v71 = (*(int (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v5 + 428))(v5, 5, v8);
  v72 = *((_WORD *)_R6 + 24);
  v73 = *(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v5 + 424);
  if ( (_BYTE)v72 )
    v74 = v73(v5, v72 >> 8);
    v75 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(5, (unsigned int)v70), v74, 0);
    v76 = v73(v5, v8);
    v75 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v70, v9, v71, v76);
  BlockTessellator::tessellateEast(_R6, v7, v5, (const Vec3 *)&v78, v75);
  return 1;
}


int __fastcall BlockTessellator::tessellateBlockInWorldWithAmbienceOcclusion(int a1, int a2, BlockOccluder *a3, int a4, unsigned int a5, const Color *a6, BlockOccluder *a7)
{
  const BlockPos *v8; // r8@1
  BlockOccluder *v9; // r5@1
  char v10; // r0@1
  BlockOccluder *v11; // r9@1
  signed int v12; // r6@2
  bool v13; // r1@3
  bool v18; // r1@5
  BlockGraphics *v19; // r6@7
  int v20; // r9@7
  unsigned int v21; // r0@7
  int (__fastcall *v22)(BlockOccluder *, unsigned int); // r2@7
  int v23; // r0@8
  const TextureUVCoordinateSet *v24; // r0@8
  int v25; // r0@9
  bool v26; // r1@13
  BlockGraphics *v27; // r6@15
  int v28; // r10@15
  unsigned int v29; // r0@15
  int (__fastcall *v30)(BlockOccluder *, unsigned int); // r2@15
  int v31; // r0@16
  const TextureUVCoordinateSet *v32; // r0@16
  int v33; // r0@17
  bool v34; // r1@21
  bool v35; // r6@21
  BlockGraphics *v36; // r6@25
  int v37; // r10@25
  unsigned int v38; // r0@25
  int (__fastcall *v39)(BlockOccluder *, unsigned int); // r2@25
  int v40; // r0@26
  const TextureUVCoordinateSet *v41; // r0@26
  int v42; // r0@27
  bool v43; // r1@31
  bool v44; // r6@31
  BlockGraphics *v45; // r6@35
  int v46; // r10@35
  unsigned int v47; // r0@35
  int (__fastcall *v48)(BlockOccluder *, unsigned int); // r2@35
  int v49; // r0@36
  const TextureUVCoordinateSet *v50; // r0@36
  int v51; // r0@37
  bool v52; // r1@41
  bool v53; // r6@41
  BlockGraphics *v54; // r6@45
  int v55; // r10@45
  unsigned int v56; // r0@45
  int (__fastcall *v57)(BlockOccluder *, unsigned int); // r2@45
  int v58; // r0@46
  const TextureUVCoordinateSet *v59; // r0@46
  int v60; // r0@47
  bool v61; // r1@51
  bool v62; // r6@51
  BlockGraphics *v63; // r6@55
  int v64; // r10@55
  unsigned int v65; // r0@55
  int (__fastcall *v66)(BlockOccluder *, unsigned int); // r2@55
  int v67; // r0@56
  const TextureUVCoordinateSet *v68; // r0@56
  int v69; // r0@57
  BlockOccluder *v71; // [sp+4h] [bp-C4h]@1
  Tessellator *v72; // [sp+8h] [bp-C0h]@1
  int v73; // [sp+Ch] [bp-BCh]@1
  char v74; // [sp+10h] [bp-B8h]@55
  char v75; // [sp+1Ch] [bp-ACh]@45
  char v76; // [sp+28h] [bp-A0h]@35
  char v77; // [sp+34h] [bp-94h]@25
  char v78; // [sp+40h] [bp-88h]@15
  char v79; // [sp+4Ch] [bp-7Ch]@7
  char v80; // [sp+58h] [bp-70h]@1

  _R4 = a1;
  v72 = (Tessellator *)a2;
  *(_BYTE *)(a1 + 50) = 1;
  v8 = (const BlockPos *)a4;
  v9 = a3;
  v71 = (BlockOccluder *)Block::mGrass;
  AmbientOcclusionCalculator::AmbientOcclusionCalculator((int)&v80, a4, (int)a3, a1 + 812);
  v73 = AmbientOcclusionCalculator::isTranslucent((AmbientOcclusionCalculator *)&v80, v8);
  v10 = (*(int (__fastcall **)(BlockOccluder *, _DWORD, const BlockPos *))(*(_DWORD *)v9 + 400))(
          v9,
          *(_DWORD *)(_R4 + 4),
          v8);
  AmbientOcclusionCalculator::setSeasons((AmbientOcclusionCalculator *)&v80, v10);
  AmbientOcclusionCalculator::setBaseColor((AmbientOcclusionCalculator *)&v80, a6);
  AmbientOcclusionCalculator::setOutputColors((AmbientOcclusionCalculator *)&v80, (Color *)(_R4 + 52));
  AmbientOcclusionCalculator::setOutputLightTexturePositions((int)&v80, _R4 + 180);
  v11 = a7;
  if ( a7 )
  {
    v12 = 0;
    if ( BlockOccluder::occludes(a7, 0) )
    {
LABEL_12:
      if ( BlockOccluder::occludes(v11, 1) )
        goto LABEL_20;
      goto LABEL_13;
    }
  }
  v13 = 0;
  if ( v71 != v9 )
    v13 = 1;
  __asm { VLDR            S16, [R4,#0x2D8] }
  AmbientOcclusionCalculator::setTintSides((AmbientOcclusionCalculator *)&v80, v13);
  __asm { VLDR            S0, =0.0005 }
  v18 = 0;
  __asm
    VCMPE.F32       S16, S0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v18 = 1;
  AmbientOcclusionCalculator::setTouchEdge((AmbientOcclusionCalculator *)&v80, v18);
  AmbientOcclusionCalculator::calculate((AmbientOcclusionCalculator *)&v80, 0, v73);
  Vec3::Vec3((int)&v79, (int)v8);
  v19 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v9 + 4)];
  v20 = (*(int (__fastcall **)(BlockOccluder *, _DWORD, unsigned int))(*(_DWORD *)v9 + 428))(v9, 0, a5);
  v21 = *(_WORD *)(_R4 + 48);
  v22 = *(int (__fastcall **)(BlockOccluder *, unsigned int))(*(_DWORD *)v9 + 424);
  if ( (_BYTE)v21 )
    v23 = v22(v9, v21 >> 8);
    v24 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture((unsigned int)v19, v23, 0);
  else
    v25 = v22(v9, a5);
    v24 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v19, v8, v20, v25);
  BlockTessellator::tessellateFaceDown((BlockTessellator *)_R4, v72, v9, (const Vec3 *)&v79, v24);
    v12 = 1;
    goto LABEL_12;
LABEL_13:
  __asm { VLDR            S16, [R4,#0x2E4] }
  AmbientOcclusionCalculator::setTintSides((AmbientOcclusionCalculator *)&v80, 1);
  __asm { VLDR            S0, =0.9995 }
  v26 = 0;
  if ( !(_NF ^ _VF) )
    v26 = 1;
  AmbientOcclusionCalculator::setTouchEdge((AmbientOcclusionCalculator *)&v80, v26);
  AmbientOcclusionCalculator::calculate((AmbientOcclusionCalculator *)&v80, 1, v73);
  Vec3::Vec3((int)&v78, (int)v8);
  v27 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v9 + 4)];
  v28 = (*(int (__fastcall **)(BlockOccluder *, signed int, unsigned int))(*(_DWORD *)v9 + 428))(v9, 1, a5);
  v29 = *(_WORD *)(_R4 + 48);
  v30 = *(int (__fastcall **)(BlockOccluder *, unsigned int))(*(_DWORD *)v9 + 424);
  if ( (_BYTE)v29 )
    v31 = v30(v9, v29 >> 8);
    v32 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(1, (unsigned int)v27), v31, 0);
    v33 = v30(v9, a5);
    v32 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v27, v8, v28, v33);
  BlockTessellator::tessellateFaceUp((BlockTessellator *)_R4, v72, v9, (const Vec3 *)&v78, v32);
  if ( !v11 )
    goto LABEL_21;
  v12 = 1;
LABEL_20:
  if ( BlockOccluder::occludes(v11, 2) )
    goto LABEL_30;
LABEL_21:
  v34 = 0;
  v35 = 0;
    v34 = 1;
  __asm { VLDR            S16, [R4,#0x2DC] }
  AmbientOcclusionCalculator::setTintSides((AmbientOcclusionCalculator *)&v80, v34);
    VLDR            S0, =0.0005
    v35 = 1;
  AmbientOcclusionCalculator::setTouchEdge((AmbientOcclusionCalculator *)&v80, v35);
  AmbientOcclusionCalculator::calculate((AmbientOcclusionCalculator *)&v80, 2, v73);
  Vec3::Vec3((int)&v77, (int)v8);
  v36 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v9 + 4)];
  v37 = (*(int (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v9 + 428))(v9, 2, a5);
  v38 = *(_WORD *)(_R4 + 48);
  v39 = *(int (__fastcall **)(BlockOccluder *, unsigned int))(*(_DWORD *)v9 + 424);
  if ( (_BYTE)v38 )
    v40 = v39(v9, v38 >> 8);
    v41 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(2, (unsigned int)v36), v40, 0);
    v42 = v39(v9, a5);
    v41 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v36, v8, v37, v42);
  BlockTessellator::tessellateNorth((BlockTessellator *)_R4, v72, v9, (const Vec3 *)&v77, v41);
  if ( v11 )
LABEL_30:
    if ( BlockOccluder::occludes(v11, 3) )
      goto LABEL_40;
  v43 = 0;
  v44 = 0;
    v43 = 1;
  __asm { VLDR            S16, [R4,#0x2E8] }
  AmbientOcclusionCalculator::setTintSides((AmbientOcclusionCalculator *)&v80, v43);
    VLDR            S0, =0.9995
    v44 = 1;
  AmbientOcclusionCalculator::setTouchEdge((AmbientOcclusionCalculator *)&v80, v44);
  AmbientOcclusionCalculator::calculate((AmbientOcclusionCalculator *)&v80, 3, v73);
  Vec3::Vec3((int)&v76, (int)v8);
  v45 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v9 + 4)];
  v46 = (*(int (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v9 + 428))(v9, 3, a5);
  v47 = *(_WORD *)(_R4 + 48);
  v48 = *(int (__fastcall **)(BlockOccluder *, unsigned int))(*(_DWORD *)v9 + 424);
  if ( (_BYTE)v47 )
    v49 = v48(v9, v47 >> 8);
    v50 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(3, (unsigned int)v45), v49, 0);
    v51 = v48(v9, a5);
    v50 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v45, v8, v46, v51);
  BlockTessellator::tessellateSouth((BlockTessellator *)_R4, v72, v9, (const Vec3 *)&v76, v50);
    goto LABEL_41;
LABEL_40:
  if ( BlockOccluder::occludes(v11, 4) )
    goto LABEL_50;
LABEL_41:
  v52 = 0;
  v53 = 0;
    v52 = 1;
  __asm { VLDR            S16, [R4,#0x2D4] }
  AmbientOcclusionCalculator::setTintSides((AmbientOcclusionCalculator *)&v80, v52);
    v53 = 1;
  AmbientOcclusionCalculator::setTouchEdge((AmbientOcclusionCalculator *)&v80, v53);
  AmbientOcclusionCalculator::calculate((AmbientOcclusionCalculator *)&v80, 4, v73);
  Vec3::Vec3((int)&v75, (int)v8);
  v54 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v9 + 4)];
  v55 = (*(int (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v9 + 428))(v9, 4, a5);
  v56 = *(_WORD *)(_R4 + 48);
  v57 = *(int (__fastcall **)(BlockOccluder *, unsigned int))(*(_DWORD *)v9 + 424);
  if ( (_BYTE)v56 )
    v58 = v57(v9, v56 >> 8);
    v59 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(4, (unsigned int)v54), v58, 0);
    v60 = v57(v9, a5);
    v59 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v54, v8, v55, v60);
  BlockTessellator::tessellateWest((BlockTessellator *)_R4, v72, v9, (const Vec3 *)&v75, v59);
LABEL_50:
    if ( BlockOccluder::occludes(v11, 5) )
      goto LABEL_59;
  v61 = 0;
  v62 = 0;
    v61 = 1;
  __asm { VLDR            S16, [R4,#0x2E0] }
  AmbientOcclusionCalculator::setTintSides((AmbientOcclusionCalculator *)&v80, v61);
    v62 = 1;
  AmbientOcclusionCalculator::setTouchEdge((AmbientOcclusionCalculator *)&v80, v62);
  AmbientOcclusionCalculator::calculate((AmbientOcclusionCalculator *)&v80, 5, v73);
  Vec3::Vec3((int)&v74, (int)v8);
  v63 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v9 + 4)];
  v64 = (*(int (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v9 + 428))(v9, 5, a5);
  v65 = *(_WORD *)(_R4 + 48);
  v66 = *(int (__fastcall **)(BlockOccluder *, unsigned int))(*(_DWORD *)v9 + 424);
  if ( (_BYTE)v65 )
    v67 = v66(v9, v65 >> 8);
    v68 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(5, (unsigned int)v63), v67, 0);
    v69 = v66(v9, a5);
    v68 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v63, v8, v64, v69);
  BlockTessellator::tessellateEast((BlockTessellator *)_R4, v72, v9, (const Vec3 *)&v74, v68);
LABEL_59:
  *(_BYTE *)(_R4 + 50) = 0;
  *(_DWORD *)(_R4 + 188) = 0;
  *(_DWORD *)(_R4 + 192) = 0;
  *(_DWORD *)(_R4 + 196) = 0;
  *(_DWORD *)(_R4 + 200) = 0;
  *(_DWORD *)(_R4 + 204) = 0;
  *(_DWORD *)(_R4 + 208) = 0;
  return v12;
}


signed int __fastcall BlockTessellator::tessellateEndRodSouth(BlockTessellator *this, Tessellator *a2, const BlockPos *a3, const TextureUVCoordinateSet *a4)
{
  const BlockPos *v4; // r7@1
  const BlockPos *v6; // ST2C_4@1
  Tessellator *v7; // ST1C_4@1
  BlockTessellator *v8; // ST28_4@1
  TextureUVCoordinateSet *v9; // r11@1
  AABB *v10; // ST30_4@1
  int v15; // r0@1
  float v17; // ST34_4@1
  int v18; // r0@1
  float v19; // ST20_4@1
  float v20; // ST18_4@1
  float v21; // ST38_4@1
  float v22; // ST3C_4@1
  int v23; // r0@1
  float v24; // r9@1
  float v25; // ST14_4@1
  int v26; // r0@1
  float v27; // r8@1
  float v28; // ST10_4@1
  int v29; // r0@1
  float v30; // r7@1
  float v31; // ST0C_4@1
  __int64 v32; // ST00_8@1
  float v36; // ST4C_4@1
  float v37; // ST44_4@1
  float v38; // r1@1
  float v40; // ST48_4@1
  float v41; // r6@1
  float v42; // ST04_4@1
  float v44; // ST40_4@1
  float v45; // r8@1
  float v46; // ST38_4@1
  float v47; // ST3C_4@1
  float v48; // ST34_4@1
  int v49; // r0@1
  float v50; // r9@1
  float v51; // ST10_4@1
  int v52; // r0@1
  float v53; // r7@1
  float v54; // ST0C_4@1
  float v55; // ST14_4@1
  float v56; // ST08_4@1
  int v57; // r0@1
  float v58; // ST20_4@1
  float v59; // ST18_4@1
  int v60; // r0@1
  float v61; // r9@1
  float v62; // ST14_4@1
  float v63; // ST3C_4@1
  int v64; // r0@1
  float v65; // ST20_4@1
  int v66; // r0@1
  float v67; // ST18_4@1
  float v68; // ST10_4@1
  float v69; // ST34_4@1
  float v70; // ST0C_4@1
  float v71; // ST08_4@1
  int v73; // r0@1
  float v74; // r9@1
  float v75; // ST3C_4@1
  int v76; // r0@1
  float v77; // r7@1
  float v78; // ST34_4@1
  float v79; // ST38_4@1
  float v80; // ST2C_4@1
  int v81; // r0@1
  float v82; // r10@1
  float v83; // ST28_4@1
  int v84; // r0@1
  float v85; // ST24_4@1
  int v86; // r0@1
  float v87; // ST20_4@1
  int v88; // r0@1
  float v89; // ST18_4@1
  float v90; // ST04_4@1
  float v94; // ST44_4@1
  float v95; // ST4C_4@1
  float v96; // ST48_4@1
  float v97; // r7@1
  float v98; // r6@1
  float v100; // ST40_4@1
  float v101; // ST00_4@1
  float v102; // ST38_4@1
  float v103; // ST34_4@1
  float v104; // ST3C_4@1
  int v105; // r0@1
  float v106; // r10@1
  float v107; // ST20_4@1
  int v108; // r0@1
  float v109; // ST18_4@1
  float v110; // ST24_4@1
  float v111; // ST14_4@1
  int v112; // r0@1
  float v113; // ST28_4@1
  float v114; // ST2C_4@1
  float v115; // ST3C_4@1
  float v116; // ST34_4@1
  int v117; // r0@1
  float v118; // r7@1
  float v119; // ST2C_4@1
  int v120; // r0@1
  float v121; // r6@1
  float v122; // ST28_4@1
  int v123; // r0@1
  float v124; // ST20_4@1
  int v125; // r8@1
  float v126; // ST24_4@1
  int v127; // r10@1
  float v129; // [sp+50h] [bp-C8h]@1
  float v132; // [sp+5Ch] [bp-BCh]@1
  float v135; // [sp+68h] [bp-B0h]@1
  float v138; // [sp+74h] [bp-A4h]@1
  int v141; // [sp+80h] [bp-98h]@1
  signed int v142; // [sp+84h] [bp-94h]@1
  int v143; // [sp+88h] [bp-90h]@1
  int v144; // [sp+8Ch] [bp-8Ch]@1
  signed int v145; // [sp+90h] [bp-88h]@1
  int v146; // [sp+94h] [bp-84h]@1
  int v147; // [sp+98h] [bp-80h]@1
  signed int v148; // [sp+9Ch] [bp-7Ch]@1
  int v149; // [sp+A0h] [bp-78h]@1
  int v150; // [sp+A4h] [bp-74h]@1
  signed int v151; // [sp+A8h] [bp-70h]@1
  int v152; // [sp+ACh] [bp-6Ch]@1

  v4 = a3;
  _R6 = this;
  v6 = a3;
  v7 = a2;
  v8 = this;
  v9 = a4;
  v150 = 1052770304;
  v151 = 1052770304;
  v152 = 1064304640;
  v147 = 1059061760;
  v148 = 1059061760;
  v149 = 1065353216;
  v144 = 1054867456;
  v145 = 1054867456;
  v146 = 0;
  v141 = 1058013184;
  v142 = 1058013184;
  v143 = 1064304640;
  v10 = (BlockTessellator *)((char *)this + 724);
  AABB::set((BlockTessellator *)((char *)this + 724), (const Vec3 *)&v150, (const Vec3 *)&v147);
  Vec3::Vec3((int)&v138, (int)v4);
  __asm
  {
    VLDR            S20, [R6,#0x2D4]
    VLDR            S16, [R6,#0x2D8]
    VLDR            S24, [R6,#0x2DC]
    VLDR            S22, [SP,#0x118+var_A4]
    VLDR            S18, [SP,#0x118+var_A0]
    VLDR            S26, [SP,#0x118+var_9C]
  }
  Vec3::Vec3((int)&v135, (int)v4);
    VLDR            S28, [R6,#0x2E0]
    VLDR            S30, [R6,#0x2E4]
    VLDR            S17, [R6,#0x2E8]
    VLDR            S19, [SP,#0x118+var_B0]
    VLDR            S21, [SP,#0x118+var_AC]
    VLDR            S23, [SP,#0x118+var_A8]
  *(float *)&v15 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.375, 0.0));
  LODWORD(_R4) = v15;
  v17 = *(float *)&v15;
  *(float *)&v18 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.4375, 0.0));
  HIDWORD(_R4) = v18;
  v19 = *(float *)&v18;
  v20 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0));
  v21 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.4375, 0.0));
  v22 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.375, 0.0));
  *(float *)&v23 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.375, 0.0));
  v24 = *(float *)&v23;
  v25 = *(float *)&v23;
  *(float *)&v26 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0));
  v27 = *(float *)&v26;
  v28 = *(float *)&v26;
  *(float *)&v29 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.375, 0.0));
  __asm { VADD.F32        S0, S28, S19 }
  v30 = *(float *)&v29;
  __asm { VADD.F32        S4, S17, S23 }
  v31 = *(float *)&v29;
  __asm { VADD.F32        S2, S30, S21 }
  v32 = _R4;
    VMOV            R6, S0
    VMOV            R10, S4
    VMOV            R2, S2
  v36 = _R6;
  v37 = _R2;
  *(float *)&_R4 = _R2;
  Tessellator::vertexUV(v7, _R6, _R2, _R10, *(float *)&v32, *((float *)&v32 + 1));
  __asm { VADD.F32        S0, S24, S26 }
  v38 = _R6;
  __asm { VMOV            R3, S0 }
  v40 = _R3;
  v41 = _R3;
  Tessellator::vertexUV(v7, v38, *(float *)&_R4, _R3, v22, v24);
  __asm { VADD.F32        S0, S20, S22 }
  v42 = v30;
  __asm { VMOV            R7, S0 }
  v44 = _R7;
  Tessellator::vertexUV(v7, _R7, *(float *)&_R4, v41, v27, v42);
  v45 = v21;
  Tessellator::vertexUV(v7, _R7, *(float *)&_R4, _R10, v20, v21);
    VADD.F32        S0, S16, S18
    VMOV            R4, S0
  v46 = *(float *)&_R4;
  Tessellator::vertexUV(v7, _R7, *(float *)&_R4, _R10, v20, v45);
  Tessellator::vertexUV(v7, _R7, *(float *)&_R4, v40, v28, v31);
  Tessellator::vertexUV(v7, v36, *(float *)&_R4, v40, v22, v25);
  Tessellator::vertexUV(v7, v36, *(float *)&_R4, _R10, v17, v19);
  v47 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.375, 0.0));
  v48 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.375, 0.0));
  *(float *)&v49 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0));
  v50 = *(float *)&v49;
  v51 = *(float *)&v49;
  *(float *)&v52 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.375, 0.0));
  v53 = *(float *)&v52;
  v54 = *(float *)&v52;
  v55 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.375, 0.0));
  v56 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.125, 0.0));
  *(float *)&v57 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0));
  LODWORD(_R4) = v57;
  v58 = *(float *)&v57;
  v59 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.125, 0.0));
  Tessellator::vertexUV(v7, v44, v37, v40, *(float *)&_R4, v59);
  Tessellator::vertexUV(v7, v36, v37, v40, v50, v53);
  Tessellator::vertexUV(v7, v36, v46, v40, v47, v48);
  Tessellator::vertexUV(v7, v44, v46, v40, v55, v56);
  Tessellator::vertexUV(v7, v44, v37, _R10, v55, v56);
  Tessellator::vertexUV(v7, v44, v46, _R10, v47, v48);
  Tessellator::vertexUV(v7, v36, v46, _R10, v51, v54);
  Tessellator::vertexUV(v7, v36, v37, _R10, v58, v59);
  *(float *)&v60 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.375, 0.0));
  v61 = *(float *)&v60;
  v62 = *(float *)&v60;
  v63 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.375, 0.0));
  *(float *)&v64 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.375, 0.0));
  LODWORD(_R4) = v64;
  v65 = *(float *)&v64;
  *(float *)&v66 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.4375, 0.0));
  HIDWORD(_R4) = v66;
  v67 = *(float *)&v66;
  v68 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0));
  v69 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.375, 0.0));
  v70 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0));
  v71 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.4375, 0.0));
  Tessellator::vertexUV(v7, v44, v37, _R10, *(float *)&_R4, *((float *)&_R4 + 1));
  Tessellator::vertexUV(v7, v44, v37, v40, v61, v63);
  Tessellator::vertexUV(v7, v44, v46, v40, v68, v69);
  Tessellator::vertexUV(v7, v44, v46, _R10, v70, v71);
  Tessellator::vertexUV(v7, v36, v46, _R10, v70, v71);
  Tessellator::vertexUV(v7, v36, v46, v40, v68, v69);
  Tessellator::vertexUV(v7, v36, v37, v40, v62, v63);
  Tessellator::vertexUV(v7, v36, v37, _R10, v65, v67);
  AABB::set(v10, (const Vec3 *)&v144, (const Vec3 *)&v141);
  Vec3::Vec3((int)&v132, (int)v6);
  _R6 = v8;
    VLDR            S22, [SP,#0x118+var_BC]
    VLDR            S18, [SP,#0x118+var_B8]
    VLDR            S26, [SP,#0x118+var_B4]
  Vec3::Vec3((int)&v129, (int)v6);
    VLDR            S19, [SP,#0x118+var_C8]
    VLDR            S21, [SP,#0x118+var_C4]
    VLDR            S23, [SP,#0x118+var_C0]
  *(float *)&v73 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0));
  v74 = *(float *)&v73;
  v75 = *(float *)&v73;
  *(float *)&v76 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.9375, 0.0));
  v77 = *(float *)&v76;
  v78 = *(float *)&v76;
  v79 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.0, 0.0));
  v80 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.9375, 0.0));
  *(float *)&v81 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0));
  v82 = *(float *)&v81;
  v83 = *(float *)&v81;
  *(float *)&v84 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.0, 0.0));
  LODWORD(_R4) = v84;
  v85 = *(float *)&v84;
  *(float *)&v86 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.0, 0.0));
  HIDWORD(_R4) = v86;
  v87 = *(float *)&v86;
  *(float *)&v88 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.0, 0.0));
  v89 = *(float *)&v88;
    VADD.F32        S2, S30, S21
    VADD.F32        S4, S17, S23
  v90 = v77;
    VMOV            R1, S0
    VMOV            R3, S4
  v94 = _R1;
  v95 = _R2;
  v96 = _R3;
  v97 = _R1;
  v98 = _R2;
  Tessellator::vertexUV(v7, _R1, _R2, _R3, v74, v90);
    VADD.F32        S0, S24, S26
    VMOV            R9, S0
  Tessellator::vertexUV(v7, v97, v98, _R9, v82, *(float *)&_R4);
    VADD.F32        S0, S20, S22
  v100 = *(float *)&_R4;
  Tessellator::vertexUV(v7, *(float *)&_R4, v98, _R9, *((float *)&_R4 + 1), v89);
  Tessellator::vertexUV(v7, *(float *)&_R4, v98, v96, v79, v80);
  __asm { VADD.F32        S0, S16, S18 }
  v101 = v79;
  __asm { VMOV            R5, S0 }
  v102 = *((float *)&_R4 + 1);
  Tessellator::vertexUV(v7, *(float *)&_R4, *((float *)&_R4 + 1), v96, v101, v80);
  Tessellator::vertexUV(v7, *(float *)&_R4, *((float *)&_R4 + 1), _R9, v87, v89);
  Tessellator::vertexUV(v7, v94, *((float *)&_R4 + 1), _R9, v83, v85);
  Tessellator::vertexUV(v7, v94, *((float *)&_R4 + 1), v96, v75, v78);
  v103 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.25, 0.0));
  v104 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.125, 0.0));
  *(float *)&v105 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0));
  v106 = *(float *)&v105;
  v107 = *(float *)&v105;
  *(float *)&v108 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.125, 0.0));
  LODWORD(_R4) = v108;
  v109 = *(float *)&v108;
  v110 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.25, 0.0));
  v111 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.0, 0.0));
  *(float *)&v112 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0));
  HIDWORD(_R4) = v112;
  v113 = *(float *)&v112;
  v114 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.0, 0.0));
  Tessellator::vertexUV(v7, v100, v95, _R9, *((float *)&_R4 + 1), v114);
  Tessellator::vertexUV(v7, v94, v95, _R9, v106, *(float *)&_R4);
  Tessellator::vertexUV(v7, v94, v102, _R9, v103, v104);
  Tessellator::vertexUV(v7, v100, v102, _R9, v110, v111);
  Tessellator::vertexUV(v7, v100, v95, v96, v110, v111);
  Tessellator::vertexUV(v7, v100, v102, v96, v103, v104);
  Tessellator::vertexUV(v7, v94, v102, v96, v107, v109);
  Tessellator::vertexUV(v7, v94, v95, v96, v113, v114);
  v115 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0));
  v116 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.0, 0.0));
  *(float *)&v117 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.125, 0.0));
  v118 = *(float *)&v117;
  v119 = *(float *)&v117;
  *(float *)&v120 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v9, 0.9375, 0.0));
  v121 = *(float *)&v120;
  v122 = *(float *)&v120;
  *(float *)&v123 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.0, 0.0));
  HIDWORD(_R4) = v123;
  v124 = *(float *)&v123;
  v125 = TextureUVCoordinateSet::offsetHeight(v9, 0.0, 0.0);
  v126 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v9, 0.0, 0.0));
  v127 = TextureUVCoordinateSet::offsetHeight(v9, 0.9375, 0.0);
  Tessellator::vertexUV(v7, v100, v95, v96, v118, v121);
  Tessellator::vertexUV(v7, v100, v95, _R9, v115, v116);
  Tessellator::vertexUV(v7, v100, v102, _R9, *((float *)&_R4 + 1), *(float *)&v125);
  Tessellator::vertexUV(v7, v100, v102, v96, v126, *(float *)&v127);
  Tessellator::vertexUV(v7, v94, v102, v96, v126, *(float *)&v127);
  Tessellator::vertexUV(v7, v94, v102, _R9, v124, *(float *)&v125);
  Tessellator::vertexUV(v7, v94, v95, _R9, v115, v116);
  return Tessellator::vertexUV(v7, v94, v95, v96, v119, v122);
}


signed int __fastcall BlockTessellator::tessellateCrossPolyInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5, int a6)
{
  BlockTessellator *v6; // r5@1
  Tessellator *v7; // r9@1
  const Block *v8; // r6@1
  const BlockPos *v9; // r7@1
  BlockGraphics *v10; // r4@1
  int v11; // r0@1
  const TextureUVCoordinateSet *v12; // r0@1
  const Block *v14; // [sp+4h] [bp-2Ch]@0
  char v15; // [sp+8h] [bp-28h]@1

  v6 = this;
  v7 = a2;
  v8 = a3;
  v9 = a4;
  BlockTessellator::_preparePolyCross((BlockTessellator *)&v15, this, a2, a4, (int)a3);
  v10 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v8 + 4)];
  v11 = (*(int (__fastcall **)(const Block *, int))(*(_DWORD *)v8 + 424))(v8, a5);
  v12 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v10, v9, 0, v11);
  BlockTessellator::tessellateCrossPolyTexture(v6, v7, v12, (const Vec3 *)&v15, a6, v14);
  return 1;
}


void __fastcall BlockTessellator::tessellateSouth(BlockTessellator *this, Tessellator *a2, const Block *a3, const Vec3 *a4, const TextureUVCoordinateSet *a5)
{
  BlockTessellator::tessellateSouth(this, a2, a3, a4, a5);
}


signed int __fastcall BlockTessellator::tessellateRepeaterInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  const BlockPos *v6; // r11@1
  Block *v7; // r8@1
  __int64 v8; // r5@1
  int v9; // r0@1
  unsigned int v10; // r4@1
  const Block *v11; // r7@1
  unsigned int v13; // r6@1
  float *v18; // r3@1
  int v21; // r1@5
  int v22; // r8@6
  Tessellator *v23; // r4@6
  int v24; // r0@9
  unsigned int v25; // r1@9
  int v30; // r5@17
  BlockGraphics *v31; // r6@17
  int v32; // r8@17
  unsigned int v33; // r0@17
  int (__fastcall *v34)(int, unsigned int); // r2@17
  int v35; // r0@18
  int v36; // r0@18
  int v37; // r0@20
  int v38; // r8@21
  int v39; // r1@21
  int v40; // r2@21
  int v41; // r3@21
  int v42; // r4@21
  int v43; // r5@21
  int v44; // r6@21
  int v45; // r7@21
  int v46; // r0@21
  int v47; // r5@24
  int v48; // r7@24
  int v51; // r5@24
  int v52; // r6@24
  int v53; // r7@24
  int v54; // r0@24
  int v55; // r3@24
  int v56; // r4@24
  int v57; // r5@24
  int v58; // r6@24
  int v59; // r7@24
  void *v60; // r0@24
  int v63; // r0@28
  signed int v64; // r0@35
  unsigned int *v66; // r2@40
  signed int v67; // r1@42
  float v68; // [sp+0h] [bp-F8h]@9
  float v69; // [sp+8h] [bp-F0h]@0
  float v70; // [sp+8h] [bp-F0h]@19
  AABB *v71; // [sp+14h] [bp-E4h]@18
  int v72; // [sp+18h] [bp-E0h]@1
  int v73; // [sp+18h] [bp-E0h]@17
  char v74; // [sp+1Ch] [bp-DCh]@1
  Block *v75; // [sp+1Ch] [bp-DCh]@18
  float v76; // [sp+20h] [bp-D8h]@3
  Tessellator *v77; // [sp+24h] [bp-D4h]@1
  float v78; // [sp+28h] [bp-D0h]@32
  unsigned __int8 v79; // [sp+34h] [bp-C4h]@27
  unsigned __int8 v80; // [sp+35h] [bp-C3h]@27
  float v81; // [sp+38h] [bp-C0h]@31
  char v82; // [sp+40h] [bp-B8h]@24
  int v83; // [sp+58h] [bp-A0h]@24
  int v84; // [sp+5Ch] [bp-9Ch]@24
  int v85; // [sp+60h] [bp-98h]@24
  int v86; // [sp+64h] [bp-94h]@24
  int v87; // [sp+68h] [bp-90h]@24
  int v88; // [sp+6Ch] [bp-8Ch]@24
  int v89; // [sp+70h] [bp-88h]@24
  int v90; // [sp+74h] [bp-84h]@24
  int v91; // [sp+78h] [bp-80h]@24
  float v92; // [sp+7Ch] [bp-7Ch]@19
  unsigned __int8 v93; // [sp+88h] [bp-70h]@4
  unsigned __int8 v94; // [sp+89h] [bp-6Fh]@4
  float v95; // [sp+8Ch] [bp-6Ch]@8

  _R10 = this;
  v77 = a2;
  v6 = a4;
  v7 = a3;
  v8 = *(_QWORD *)Block::getBlockState(Block::mPoweredRepeater, 12);
  v9 = Block::getBlockState(Block::mPoweredRepeater, 34);
  v72 = *(_DWORD *)(v9 + 4);
  v74 = *(_DWORD *)v9;
  v10 = (unsigned int)a5 >> (1 - BYTE4(v8) + v8);
  v11 = v7;
  _R9 = v6;
  v13 = 0xFu >> (4 - BYTE4(v8));
  Block::isType(v7, (const Block *)Block::mPoweredRepeater);
  __asm
  {
    VLDR            S0, [R9,#4]
    VCVT.F32.S32    S22, S0
    VLDR            S26, [R10,#0x2E4]
  }
  v18 = (float *)&Block::mUnlitRedStoneTorch;
  if ( !_ZF )
    v18 = (float *)&Block::mLitRedStoneTorch;
  v76 = *v18;
  if ( *((_BYTE *)_R10 + 48) )
    _R0 = (unsigned __int8)Brightness::MAX;
    v93 = Brightness::MAX;
    v94 = Brightness::MAX;
    _R2 = (unsigned __int8)Brightness::MAX;
  else
    BlockTessellatorCache::getLightColor(
      (BlockTessellatorCache *)&v93,
      (BlockTessellator *)((char *)_R10 + 812),
      (int)v6);
    _R0 = v93;
    _R2 = v94;
    v21 = *((_BYTE *)_R10 + 48);
    VMOV            S0, R2
    VLDR            S16, =0.0625
    VMOV            S2, R0
  v22 = v10 & v13;
    VCVT.F32.U32    S0, S0
    VCVT.F32.U32    S2, S2
  v23 = v77;
    VMUL.F32        S0, S0, S16
    VMUL.F32        S2, S2, S16
    VSTR            S0, [SP,#0xF8+var_6C]
    VSTR            S2, [SP,#0xF8+var_68]
  if ( _ZF )
    Tessellator::tex1((int)v77, (__int64 *)&v95);
  Tessellator::color(v77, 1.0, 1.0, 1.0, 1.0);
  v24 = (*(int (__fastcall **)(const Block *, _DWORD, const BlockPos *, int))(*(_DWORD *)v11 + 508))(
          v11,
          *((_DWORD *)_R10 + 1),
          v6,
          a5);
  __asm { VLDR            S24, =0.0 }
  v25 = ((unsigned int)a5 >> (1 - v72 + v74)) & (0xFu >> (4 - v72));
  switch ( v22 )
    case 0:
      __asm
      {
        VMOV.F32        S18, #-0.3125
        VMOV.F32        S20, S24
      }
      _R1 = (char *)&RepeaterBlock::DELAY_RENDER_OFFSETS + 4 * v25;
      __asm { VLDR            S28, [R1] }
      break;
    case 2:
        VMOV.F32        S18, #0.3125
        VLDR            S0, [R1]
        VNEG.F32        S28, S0
    case 3:
      __asm { VMOV.F32        S20, #-0.3125 }
      __asm { VLDR            S0, [R1] }
      goto LABEL_14;
    case 1:
      __asm { VMOV.F32        S20, #0.3125 }
        VNEG.F32        S0, S0
LABEL_14:
        VMOV.F32        S18, S24
        VMOV.F32        S28, S24
        VMOV.F32        S24, S0
    default:
        VMOV.F32        S18, S24; jumptable 00EAB854 default case
  __asm { VADD.F32        S22, S22, S26 }
  if ( v24 )
    v73 = v22;
    v30 = Block::mBedrock;
    v31 = (BlockGraphics *)BlockGraphics::mBlocks[*(_BYTE *)(Block::mBedrock + 4)];
    v32 = (*(int (__fastcall **)(_DWORD, signed int, int))(*(_DWORD *)Block::mBedrock + 428))(Block::mBedrock, 1, a5);
    v33 = *((_WORD *)_R10 + 24);
    v34 = *(int (__fastcall **)(int, unsigned int))(*(_DWORD *)v30 + 424);
    if ( (_BYTE)v33 )
    {
      v71 = (BlockTessellator *)((char *)_R10 + 724);
      v75 = v11;
      v35 = v34(v30, v33 >> 8);
      v36 = BlockGraphics::getTexture(__PAIR__(1, (unsigned int)v31), v35, 0);
    }
    else
      v37 = v34(v30, a5);
      v36 = BlockGraphics::getTexture(v31, v6, v32, v37);
    v38 = v36;
    v39 = v36;
    v40 = *(_DWORD *)v36;
    v41 = *(_DWORD *)(v36 + 4);
    v42 = *(_DWORD *)(v36 + 8);
    v43 = *(_DWORD *)(v36 + 12);
    v44 = *(_DWORD *)(v36 + 16);
    v45 = *(_DWORD *)(v36 + 20);
    v46 = (int)_R10 + 8;
    *(_DWORD *)v46 = v40;
    *(_DWORD *)(v46 + 4) = v41;
    *(_DWORD *)(v46 + 8) = v42;
    *(_DWORD *)(v46 + 12) = v43;
    *(_DWORD *)(v46 + 16) = v44;
    *(_DWORD *)(v46 + 20) = v45;
    EntityInteraction::setInteractText((int *)_R10 + 8, (int *)(v39 + 24));
    *((_DWORD *)_R10 + 9) = *(_DWORD *)(v38 + 28);
    *((_BYTE *)_R10 + 40) = 1;
    if ( (v73 | 2) == 3 )
        VMOV.F32        S0, #0.875
        VMOV.F32        S4, #0.125
        VMOV.F32        S2, #0.5625
        VMOV.F32        S6, #0.4375
        VMOV.F32        S0, #0.5625
        VMOV.F32        S4, #0.4375
        VMOV.F32        S2, #0.875
        VMOV.F32        S6, #0.125
    __asm
      VADD.F32        S6, S6, S24
      VADD.F32        S4, S4, S28
      VADD.F32        S0, S0, S28
      VADD.F32        S2, S2, S24
    v47 = *((_DWORD *)v71 + 1);
    v48 = *((_DWORD *)v71 + 2);
    __asm { VMOV            R1, S6 }
    v85 = *(_DWORD *)v71;
    v86 = v47;
    v87 = v48;
    __asm { VMOV            R3, S4 }
    v51 = *((_DWORD *)v71 + 4);
    v52 = *((_DWORD *)v71 + 5);
    v53 = *((_DWORD *)v71 + 6);
    LODWORD(_R2) = 1040187392;
    v88 = *((_DWORD *)v71 + 3);
    v89 = v51;
    v90 = v52;
    v91 = v53;
    LODWORD(_R0) = v71;
      VSTR            S0, [SP,#0xF8+var_F0]
      VSTR            S2, [SP,#0xF8+var_F8]
    AABB::set(_R0, _R2, v68, 0.25, v69);
    BlockTessellator::tessellateBlockInWorld(_R10, v77, v75, v6, a5);
    AABB::set(__PAIR__(&v85, (unsigned int)v71));
    v54 = TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)&v82);
    v55 = *(_DWORD *)(v54 + 4);
    v56 = *(_DWORD *)(v54 + 8);
    v57 = *(_DWORD *)(v54 + 12);
    v58 = *(_DWORD *)(v54 + 16);
    v59 = *(_DWORD *)(v54 + 20);
    *((_DWORD *)_R10 + 2) = *(_DWORD *)v54;
    *((_DWORD *)_R10 + 3) = v55;
    *((_DWORD *)_R10 + 4) = v56;
    *((_DWORD *)_R10 + 5) = v57;
    *((_DWORD *)_R10 + 6) = v58;
    *((_DWORD *)_R10 + 7) = v59;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)_R10 + 8,
      (int *)(v54 + 24));
    *((_DWORD *)_R10 + 9) = v84;
    v22 = v73;
    v60 = (void *)(v83 - 12);
    if ( (int *)(v83 - 12) != &dword_28898C0 )
      v66 = (unsigned int *)(v83 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v67 = __ldrex(v66);
        while ( __strex(v67 - 1, v66) );
      else
        v67 = (*v66)--;
      if ( v67 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v60);
    v11 = v75;
    *((_BYTE *)_R10 + 40) = 0;
    v23 = v77;
      VLDR            S0, [R9]
      VMOV.F32        S6, #-0.1875
      VLDR            S2, [R9,#4]
      VLDR            S4, [R9,#8]
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
      VSTR            S22, [SP,#0xF8+var_F0]
      VADD.F32        S0, S0, S24
      VADD.F32        S2, S2, S6
      VSTR            S0, [SP,#0xF8+var_7C]
      VSTR            S2, [SP,#0xF8+var_78]
      VSTR            S4, [SP,#0xF8+var_74]
    BlockTessellator::tessellateTorch(*(float *)&_R10, *(float *)&v77, v76, (const Vec3 *)&v92, 0.0, 0.0, v69);
    _R1 = (unsigned __int8)Brightness::MAX;
    v79 = Brightness::MAX;
    v80 = Brightness::MAX;
      (BlockTessellatorCache *)&v79,
    _R1 = v79;
    _R2 = v80;
    v63 = *((_BYTE *)_R10 + 48);
    VMOV            S2, R1
    VSTR            S0, [SP,#0xF8+var_C0]
    VSTR            S2, [SP,#0xF8+var_BC]
    Tessellator::tex1((int)v23, (__int64 *)&v81);
  Tessellator::color(v23, 1.0, 1.0, 1.0, 1.0);
    VLDR            S0, [R9]
    VMOV.F32        S6, #-0.1875
    VLDR            S2, [R9,#4]
    VLDR            S4, [R9,#8]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VSTR            S22, [SP,#0xF8+var_F0]
    VADD.F32        S0, S0, S20
    VADD.F32        S2, S2, S6
    VADD.F32        S4, S4, S18
    VSTR            S0, [SP,#0xF8+var_D0]
    VSTR            S2, [SP,#0xF8+var_CC]
    VSTR            S4, [SP,#0xF8+var_C8]
  BlockTessellator::tessellateTorch(*(float *)&_R10, *(float *)&v23, v76, (const Vec3 *)&v78, 0.0, 0.0, v70);
  if ( v22 == 1 )
    v64 = 1;
    goto LABEL_38;
  if ( v22 == 3 )
    v64 = 2;
  if ( v22 == 2 )
    v64 = 3;
LABEL_38:
    *((_DWORD *)_R10 + 48) = v64;
  BlockTessellator::tessellateBlockInWorld(_R10, v23, v11, v6, v22);
  return 1;
}


signed int __fastcall BlockTessellator::tessellateRowTexture(BlockTessellator *this, Tessellator *a2, const TextureUVCoordinateSet *_R2, float a4, float a5, float a6)
{
  Tessellator *v11; // r5@1
  float v16; // ST00_4@1
  float v17; // ST04_4@1
  float v19; // ST00_4@1
  float v20; // ST04_4@1
  float v21; // ST00_4@1
  float v22; // ST04_4@1
  float v24; // ST00_4@1
  float v25; // ST04_4@1
  float v26; // ST00_4@1
  float v27; // ST04_4@1
  float v28; // ST00_4@1
  float v29; // ST04_4@1
  float v30; // ST00_4@1
  float v31; // ST04_4@1
  float v33; // ST00_4@1
  float v34; // ST04_4@1
  float v35; // ST00_4@1
  float v36; // ST04_4@1
  float v38; // ST00_4@1
  float v39; // ST04_4@1
  float v40; // ST00_4@1
  float v41; // ST04_4@1
  float v43; // ST00_4@1
  float v44; // ST04_4@1
  float v45; // ST00_4@1
  float v46; // ST04_4@1
  float v47; // ST00_4@1
  float v48; // ST04_4@1
  float v49; // ST00_4@1
  float v50; // ST04_4@1
  float v52; // [sp+0h] [bp-68h]@0
  float v53; // [sp+4h] [bp-64h]@0

  __asm { VMOV.F32        S30, #0.25 }
  _R8 = a4;
  __asm
  {
    VMOV.F32        S26, #1.0
    VLDR            S17, [SP,#0x68+arg_0]
    VMOV            S28, R8
    VLDR            S24, [SP,#0x68+arg_4]
  }
  v11 = a2;
    VLDR            S22, [R2,#4]
    VMOV            R9, S24
    VLDR            S16, [R2,#8]
    VLDR            S18, [R2,#0xC]
    VLDR            S20, [R2,#0x10]
    VADD.F32        S0, S28, S30
    VSTR            S22, [SP,#0x68+var_68]
    VADD.F32        S2, S17, S26
    VSTR            S16, [SP,#0x68+var_64]
    VMOV            R4, S0
    VMOV            R10, S2
  Tessellator::vertexUV(a2, _R4, _R10, _R9, v52, v53);
    VMOV            R7, S17
    VSTR            S20, [SP,#0x68+var_64]
  Tessellator::vertexUV(v11, _R4, _R7, _R9, v16, v17);
    VADD.F32        S0, S24, S26
    VSTR            S18, [SP,#0x68+var_68]
    VMOV            R6, S0
  Tessellator::vertexUV(v11, _R4, _R7, _R6, v19, v20);
  Tessellator::vertexUV(v11, _R4, _R10, _R6, v21, v22);
    VMOV.F32        S17, #0.75
    VADD.F32        S0, S28, S17
  Tessellator::vertexUV(v11, _R4, _R10, _R6, v24, v25);
  Tessellator::vertexUV(v11, _R4, _R7, _R6, v26, v27);
  Tessellator::vertexUV(v11, _R4, _R7, _R9, v28, v29);
  Tessellator::vertexUV(v11, _R4, _R10, _R9, v30, v31);
    VADD.F32        S0, S24, S30
  Tessellator::vertexUV(v11, _R8, _R10, _R4, v33, v34);
  Tessellator::vertexUV(v11, _R8, _R7, _R4, v35, v36);
    VADD.F32        S0, S28, S26
  Tessellator::vertexUV(v11, _R6, _R7, _R4, v38, v39);
  Tessellator::vertexUV(v11, _R6, _R10, _R4, v40, v41);
    VADD.F32        S0, S24, S17
  Tessellator::vertexUV(v11, _R6, _R10, _R4, v43, v44);
  Tessellator::vertexUV(v11, _R6, _R7, _R4, v45, v46);
  Tessellator::vertexUV(v11, _R8, _R7, _R4, v47, v48);
  return Tessellator::vertexUV(v11, _R8, _R10, _R4, v49, v50);
}


signed int __fastcall BlockTessellator::tessellateRowInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  BlockTessellator *v5; // r7@1
  const Block *v7; // r6@1
  Tessellator *v8; // r4@1
  int v11; // r0@3
  BlockTessellator *v16; // r0@7
  const TextureUVCoordinateSet *v17; // r2@8
  BlockGraphics *v18; // r7@9
  int v19; // r0@9
  float v22; // [sp+0h] [bp-28h]@0
  float v23; // [sp+4h] [bp-24h]@0
  unsigned __int8 v24; // [sp+8h] [bp-20h]@2
  unsigned __int8 v25; // [sp+9h] [bp-1Fh]@2
  float v26; // [sp+Ch] [bp-1Ch]@6

  v5 = this;
  _R5 = a4;
  v7 = a3;
  v8 = a2;
  if ( *((_BYTE *)this + 48) )
  {
    _R1 = (unsigned __int8)Brightness::MAX;
    v24 = Brightness::MAX;
    v25 = Brightness::MAX;
    _R2 = (unsigned __int8)Brightness::MAX;
  }
  else
    BlockTessellatorCache::getLightColor(
      (BlockTessellatorCache *)&v24,
      (BlockTessellator *)((char *)this + 812),
      (int)a4);
    _R1 = v24;
    _R2 = v25;
    v11 = *((_BYTE *)v5 + 48);
  __asm
    VMOV            S0, R2
    VLDR            S4, =0.0625
    VMOV            S2, R1
    VCVT.F32.U32    S0, S0
    VCVT.F32.U32    S2, S2
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S4
    VSTR            S0, [SP,#0x28+var_1C]
    VSTR            S2, [SP,#0x28+var_18]
  if ( _ZF )
    Tessellator::tex1((int)v8, (__int64 *)&v26);
  Tessellator::color(v8, (const Color *)&Color::WHITE);
  v16 = (BlockTessellator *)*((_BYTE *)v5 + 40);
  if ( *((_BYTE *)v5 + 40) )
    v17 = (BlockTessellator *)((char *)v5 + 8);
    v18 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v7 + 4)];
    v19 = (*(int (__fastcall **)(const Block *, int))(*(_DWORD *)v7 + 424))(v7, a5);
    v16 = (BlockTessellator *)BlockGraphics::getTexture(v18, _R5, 0, v19);
    v17 = v16;
    VLDR            S0, [R5]
    VLDR            S2, [R5,#4]
    VLDR            S4, [R5,#8]
    VCVT.F32.S32    S0, S0
    VMOV            R3, S0
    VCVT.F32.S32    S0, S2
    VLDR            S2, =-0.0625
    VCVT.F32.S32    S4, S4
    VADD.F32        S0, S0, S2
    VSTR            S0, [SP,#0x28+var_28]
    VSTR            S4, [SP,#0x28+var_24]
  BlockTessellator::tessellateRowTexture(v16, v8, v17, _R3, v22, v23);
  return 1;
}


void __fastcall BlockTessellator::tessellateFaceUp(BlockTessellator *this, Tessellator *a2, const Block *a3, const Vec3 *a4, const TextureUVCoordinateSet *a5)
{
  BlockTessellator::tessellateFaceUp(this, a2, a3, a4, a5);
}


signed int __fastcall BlockTessellator::tessellateDragonEgg(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5, int a6)
{
  BlockTessellator *v6; // r7@1
  const BlockPos *v7; // r8@1
  const Block *v8; // r11@1
  Tessellator *v9; // r6@1
  char v10; // r0@1
  __int64 v11; // r1@3
  __int64 v12; // r0@4
  __int64 v13; // r0@5
  __int64 v14; // r0@5
  __int64 v15; // r0@5
  __int64 v16; // r0@5
  __int64 v17; // r0@5
  __int64 v18; // r0@5
  __int64 v19; // r0@5
  __int64 v20; // r0@6
  __int64 v21; // r0@6
  __int64 v22; // r0@6
  __int64 v23; // r0@6
  __int64 v24; // r0@6
  __int64 v25; // r0@6
  __int64 v26; // r0@6
  int v28; // [sp+4h] [bp-E4h]@3
  __int64 v29; // [sp+8h] [bp-E0h]@3
  int v30; // [sp+10h] [bp-D8h]@3
  int v31; // [sp+14h] [bp-D4h]@3
  signed int v32; // [sp+18h] [bp-D0h]@3
  int v33; // [sp+1Ch] [bp-CCh]@3
  signed int v34; // [sp+20h] [bp-C8h]@3
  signed int v35; // [sp+24h] [bp-C4h]@3
  int v36; // [sp+28h] [bp-C0h]@3
  signed int v37; // [sp+2Ch] [bp-BCh]@3
  signed int v38; // [sp+30h] [bp-B8h]@3
  int v39; // [sp+34h] [bp-B4h]@3
  signed int v40; // [sp+38h] [bp-B0h]@3
  int v41; // [sp+3Ch] [bp-ACh]@3
  int v42; // [sp+40h] [bp-A8h]@3
  signed int v43; // [sp+44h] [bp-A4h]@3
  signed int v44; // [sp+48h] [bp-A0h]@3
  int v45; // [sp+4Ch] [bp-9Ch]@3
  __int64 v46; // [sp+50h] [bp-98h]@3
  int v47; // [sp+58h] [bp-90h]@3
  signed int v48; // [sp+5Ch] [bp-8Ch]@3
  signed int v49; // [sp+60h] [bp-88h]@3
  int v50; // [sp+64h] [bp-84h]@3
  signed int v51; // [sp+68h] [bp-80h]@3
  signed int v52; // [sp+6Ch] [bp-7Ch]@3
  int v53; // [sp+70h] [bp-78h]@3
  signed int v54; // [sp+74h] [bp-74h]@3
  signed int v55; // [sp+78h] [bp-70h]@3
  __int64 v56; // [sp+7Ch] [bp-6Ch]@3
  int v57; // [sp+84h] [bp-64h]@3
  int v58; // [sp+88h] [bp-60h]@3
  signed int v59; // [sp+8Ch] [bp-5Ch]@3
  signed int v60; // [sp+90h] [bp-58h]@3
  int v61; // [sp+94h] [bp-54h]@3
  signed int v62; // [sp+98h] [bp-50h]@3
  signed int v63; // [sp+9Ch] [bp-4Ch]@3
  int v64; // [sp+A0h] [bp-48h]@3
  signed int v65; // [sp+A4h] [bp-44h]@3
  signed int v66; // [sp+A8h] [bp-40h]@3
  int v67; // [sp+ACh] [bp-3Ch]@3
  signed int v68; // [sp+B0h] [bp-38h]@3
  signed int v69; // [sp+B4h] [bp-34h]@3
  int v70; // [sp+B8h] [bp-30h]@3
  signed int v71; // [sp+BCh] [bp-2Ch]@3
  signed int v72; // [sp+C0h] [bp-28h]@3

  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = byte_27CCE8C;
  __dmb();
  if ( !(v10 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27CCE8C) )
  {
    v70 = 1052770304;
    v71 = 1064304640;
    v72 = 1052770304;
    v67 = 1059061760;
    v68 = 1065353216;
    v69 = 1059061760;
    AABB::AABB((int)&unk_27CCDAC, (int)&v70, (int)&v67);
    v64 = 1050673152;
    v65 = 1063256064;
    v66 = 1050673152;
    v61 = 1060110336;
    v62 = 1064304640;
    v63 = 1060110336;
    AABB::AABB((int)&unk_27CCDC8, (int)&v64, (int)&v61);
    v58 = 1050673152;
    v59 = 1062207488;
    v60 = 1050673152;
    v56 = 4566650023213793280LL;
    v57 = 1060110336;
    AABB::AABB((int)&unk_27CCDE4, (int)&v58, (int)&v56);
    v54 = 1060110336;
    v55 = 1044381696;
    v50 = 1062207488;
    v51 = 1062207488;
    v52 = 1062207488;
    v53 = 1044381696;
    AABB::AABB((int)&unk_27CCE00, (int)&v53, (int)&v50);
    v47 = 1040187392;
    v48 = 1056964608;
    v49 = 1040187392;
    v45 = 1063256064;
    v46 = 4566650023213793280LL;
    AABB::AABB((int)&unk_27CCE1C, (int)&v47, (int)&v45);
    v42 = 1031798784;
    v43 = 1044381696;
    v44 = 1031798784;
    v39 = 1064304640;
    v40 = 1056964608;
    v41 = 1064304640;
    AABB::AABB((int)&unk_27CCE38, (int)&v42, (int)&v39);
    v37 = 1031798784;
    v38 = 1040187392;
    v33 = 1063256064;
    v34 = 1044381696;
    v35 = 1063256064;
    v36 = 1040187392;
    AABB::AABB((int)&unk_27CCE54, (int)&v36, (int)&v33);
    v30 = 1044381696;
    v31 = 0;
    v32 = 1044381696;
    HIDWORD(v11) = 1062207488;
    LODWORD(v11) = 1031798784;
    v28 = 1062207488;
    v29 = v11;
    AABB::AABB((int)&unk_27CCE70, (int)&v30, (int)&v28);
    j___cxa_guard_release((unsigned int *)&byte_27CCE8C);
  }
  HIDWORD(v12) = &unk_27CCDAC;
  LODWORD(v12) = (char *)v6 + 724;
  AABB::set(v12);
  if ( a6 )
    BlockTessellator::_tessellateAllFaces(v6, v9, v8, v7, a5);
    LODWORD(v13) = (char *)v6 + 724;
    HIDWORD(v13) = &unk_27CCDC8;
    AABB::set(v13);
    HIDWORD(v14) = &unk_27CCDE4;
    LODWORD(v14) = (char *)v6 + 724;
    AABB::set(v14);
    HIDWORD(v15) = &unk_27CCE00;
    LODWORD(v15) = (char *)v6 + 724;
    AABB::set(v15);
    HIDWORD(v16) = &unk_27CCE1C;
    LODWORD(v16) = (char *)v6 + 724;
    AABB::set(v16);
    HIDWORD(v17) = &unk_27CCE38;
    LODWORD(v17) = (char *)v6 + 724;
    AABB::set(v17);
    HIDWORD(v18) = &unk_27CCE54;
    LODWORD(v18) = (char *)v6 + 724;
    AABB::set(v18);
    HIDWORD(v19) = &unk_27CCE70;
    LODWORD(v19) = (char *)v6 + 724;
    AABB::set(v19);
  else
    BlockTessellator::tessellateBlockInWorld(v6, v9, v8, v7, a5);
    LODWORD(v20) = (char *)v6 + 724;
    HIDWORD(v20) = &unk_27CCDC8;
    AABB::set(v20);
    HIDWORD(v21) = &unk_27CCDE4;
    LODWORD(v21) = (char *)v6 + 724;
    AABB::set(v21);
    HIDWORD(v22) = &unk_27CCE00;
    LODWORD(v22) = (char *)v6 + 724;
    AABB::set(v22);
    HIDWORD(v23) = &unk_27CCE1C;
    LODWORD(v23) = (char *)v6 + 724;
    AABB::set(v23);
    HIDWORD(v24) = &unk_27CCE38;
    LODWORD(v24) = (char *)v6 + 724;
    AABB::set(v24);
    HIDWORD(v25) = &unk_27CCE54;
    LODWORD(v25) = (char *)v6 + 724;
    AABB::set(v25);
    HIDWORD(v26) = &unk_27CCE70;
    LODWORD(v26) = (char *)v6 + 724;
    AABB::set(v26);
  return 1;
}


int __fastcall BlockTessellator::setRegion(int result, BlockSource *a2)
{
  *(_DWORD *)(result + 4) = a2;
  return result;
}


int __fastcall BlockTessellator::tessellateStemDirTexture(int a1, Tessellator *this, int _R2, int a4, float a5, int a6)
{
  return BlockTessellator::tessellateStemDirTexture(
           (BlockTessellator *)a1,
           this,
           (const TextureUVCoordinateSet *)_R2,
           a4,
           a5,
           (const Vec3 *)a6);
}


signed int __fastcall BlockTessellator::tessellateBeaconInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  BlockTessellator *v5; // r6@1
  const BlockPos *v6; // r8@1
  const Block *v7; // r4@1
  Tessellator *v8; // r10@1
  int v9; // r11@2
  BlockGraphics *v10; // r7@2
  int v11; // r5@2
  unsigned int v12; // r0@2
  int (__fastcall *v13)(const Block *, unsigned int); // r2@2
  int v14; // r0@3
  int v15; // r0@3
  int v16; // r0@4
  BlockGraphics *v17; // r7@5
  int v18; // r5@5
  unsigned int v19; // r0@5
  int (__fastcall *v20)(const Block *, unsigned int); // r2@5
  int v21; // r0@6
  int v22; // r0@6
  int v23; // r0@7
  BlockGraphics *v25; // r7@8
  int v26; // r5@8
  unsigned int v27; // r0@8
  int (__fastcall *v28)(const Block *, unsigned int); // r2@8
  int v29; // r0@9
  int v30; // r0@9
  int v31; // r0@10
  _DWORD *v38; // r0@19
  const void *v39; // r1@19
  size_t v40; // r8@19
  int v42; // r5@26
  const void *v43; // r1@35
  int v44; // r7@41
  BlockGraphics *v45; // r8@41
  int v46; // r5@41
  unsigned int v47; // r0@41
  int (__fastcall *v48)(int, unsigned int); // r2@41
  int v49; // r0@42
  int v50; // r0@42
  int v51; // r0@43
  int v52; // r7@44
  BlockGraphics *v53; // r8@44
  int v54; // r5@44
  unsigned int v55; // r0@44
  int (__fastcall *v56)(int, unsigned int); // r2@44
  int v57; // r0@45
  int v58; // r0@45
  int v59; // r0@46
  BlockPos *v60; // [sp+8h] [bp-A8h]@17
  void *s1a; // [sp+Ch] [bp-A4h]@20
  const TextureUVCoordinateSet *s1; // [sp+Ch] [bp-A4h]@18
  int v63; // [sp+10h] [bp-A0h]@5
  char v64; // [sp+14h] [bp-9Ch]@23
  char v65; // [sp+20h] [bp-90h]@23
  int v66; // [sp+2Ch] [bp-84h]@23
  signed int v67; // [sp+30h] [bp-80h]@23
  signed int v68; // [sp+34h] [bp-7Ch]@23
  int v69; // [sp+38h] [bp-78h]@23
  signed int v70; // [sp+3Ch] [bp-74h]@23
  int v71; // [sp+40h] [bp-70h]@23
  char v72; // [sp+44h] [bp-6Ch]@23
  int v73; // [sp+50h] [bp-60h]@23
  signed int v74; // [sp+54h] [bp-5Ch]@23
  signed int v75; // [sp+58h] [bp-58h]@23
  int v76; // [sp+5Ch] [bp-54h]@23
  signed int v77; // [sp+60h] [bp-50h]@23
  signed int v78; // [sp+64h] [bp-4Ch]@23

  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  if ( *((_DWORD *)this + 11) == 8 )
  {
    v9 = (*(int (__fastcall **)(const Block *, int))(*(_DWORD *)a3 + 424))(a3, a5);
    v10 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v7 + 4)];
    v11 = (*(int (__fastcall **)(const Block *, signed int, int))(*(_DWORD *)v7 + 428))(v7, 1, v9);
    v12 = *((_WORD *)v5 + 24);
    v13 = *(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v7 + 424);
    if ( (_BYTE)v12 )
    {
      v14 = v13(v7, v12 >> 8);
      v15 = BlockGraphics::getTexture(__PAIR__(1, (unsigned int)v10), v14, 0);
    }
    else
      v16 = v13(v7, v9);
      v15 = BlockGraphics::getTexture(v10, v6, v11, v16);
    v63 = v15;
    v17 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v7 + 4)];
    v18 = (*(int (__fastcall **)(const Block *, _DWORD, int))(*(_DWORD *)v7 + 428))(v7, 0, v9);
    v19 = *((_WORD *)v5 + 24);
    v20 = *(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v7 + 424);
    if ( (_BYTE)v19 )
      v21 = v20(v7, v19 >> 8);
      v22 = BlockGraphics::getTexture((unsigned int)v17, v21, 0);
      v23 = v20(v7, v9);
      v22 = BlockGraphics::getTexture(v17, v6, v18, v23);
    _R9 = v22;
    v25 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v7 + 4)];
    v26 = (*(int (__fastcall **)(const Block *, signed int, int))(*(_DWORD *)v7 + 428))(v7, 2, v9);
    v27 = *((_WORD *)v5 + 24);
    v28 = *(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v7 + 424);
    if ( (_BYTE)v27 )
      v29 = v28(v7, v27 >> 8);
      v30 = BlockGraphics::getTexture(__PAIR__(2, (unsigned int)v25), v29, 0);
      v31 = v28(v7, v9);
      v30 = BlockGraphics::getTexture(v25, v6, v26, v31);
    _R5 = v63;
    _R7 = v30;
    __asm
      VLDR            S0, [R9,#4]
      VLDR            S16, [R5,#4]
      VCMPE.F32       S0, S16
      VMRS            APSR_nzcv, FPSCR
    if ( !_ZF )
      goto LABEL_50;
      VLDR            S18, [R5,#0xC]
      VLDR            S0, [R9,#0xC]
      VCMPE.F32       S0, S18
      VLDR            S20, [R5,#8]
      VLDR            S0, [R9,#8]
      VCMPE.F32       S0, S20
    if ( _ZF )
      __asm
      {
        VLDR            S22, [R5,#0x10]
        VLDR            S0, [R9,#0x10]
      }
      v60 = v6;
        VCMPE.F32       S0, S22
        VMRS            APSR_nzcv, FPSCR
      if ( _ZF )
        v38 = *(_DWORD **)(v63 + 24);
        v39 = *(const void **)(_R9 + 24);
        v40 = *(v38 - 3);
        if ( v40 == *((_DWORD *)v39 - 3) )
        {
          s1a = *(void **)(v63 + 24);
          if ( !memcmp(v38, v39, *(v38 - 3)) )
          {
            v42 = *(_DWORD *)(v63 + 28);
            if ( v42 == *(_DWORD *)(_R9 + 28) )
            {
              __asm
              {
                VLDR            S0, [R7,#4]
                VCMPE.F32       S0, S16
                VMRS            APSR_nzcv, FPSCR
              }
              if ( _ZF )
                __asm
                {
                  VLDR            S0, [R7,#0xC]
                  VCMPE.F32       S0, S18
                  VMRS            APSR_nzcv, FPSCR
                }
                if ( _ZF )
                  __asm
                  {
                    VLDR            S0, [R7,#8]
                    VCMPE.F32       S0, S20
                    VMRS            APSR_nzcv, FPSCR
                  }
                  if ( _ZF )
                    __asm
                    {
                      VLDR            S0, [R7,#0x10]
                      VCMPE.F32       S0, S22
                      VMRS            APSR_nzcv, FPSCR
                    }
                    if ( _ZF )
                      v43 = *(const void **)(_R7 + 24);
                      if ( v40 == *((_DWORD *)v43 - 3) )
                      {
                        if ( !memcmp(s1a, v43, v40) )
                        {
                          s1 = (const TextureUVCoordinateSet *)_R7;
                          if ( v42 == *(_DWORD *)(_R7 + 28) )
                          {
                            v44 = Block::mObsidian;
                            v45 = (BlockGraphics *)BlockGraphics::mBlocks[*(_BYTE *)(Block::mObsidian + 4)];
                            v46 = (*(int (__fastcall **)(_DWORD, signed int, int))(*(_DWORD *)Block::mObsidian + 428))(
                                    Block::mObsidian,
                                    1,
                                    v9);
                            v47 = *((_WORD *)v5 + 24);
                            v48 = *(int (__fastcall **)(int, unsigned int))(*(_DWORD *)v44 + 424);
                            if ( (_BYTE)v47 )
                            {
                              v49 = v48(v44, v47 >> 8);
                              v50 = BlockGraphics::getTexture(__PAIR__(1, (unsigned int)v45), v49, 0);
                            }
                            else
                              v51 = v48(v44, v9);
                              v50 = BlockGraphics::getTexture(v45, v60, v46, v51);
                            _R9 = v50;
                            v52 = Block::mGlass;
                            v53 = (BlockGraphics *)BlockGraphics::mBlocks[*(_BYTE *)(Block::mGlass + 4)];
                            v54 = (*(int (__fastcall **)(_DWORD, signed int, int))(*(_DWORD *)Block::mGlass + 428))(
                                    Block::mGlass,
                            v55 = *((_WORD *)v5 + 24);
                            v56 = *(int (__fastcall **)(int, unsigned int))(*(_DWORD *)v52 + 424);
                            if ( (_BYTE)v55 )
                              v57 = v56(v52, v55 >> 8);
                              v58 = BlockGraphics::getTexture(__PAIR__(1, (unsigned int)v53), v57, 0);
                              v59 = v56(v52, v9);
                              v58 = BlockGraphics::getTexture(v53, v60, v54, v59);
                            s1 = (const TextureUVCoordinateSet *)v58;
                          }
                        }
                        else
                      }
                      else
                        s1 = (const TextureUVCoordinateSet *)_R7;
                    else
                      s1 = (const TextureUVCoordinateSet *)_R7;
                  else
                    s1 = (const TextureUVCoordinateSet *)_R7;
                else
                  s1 = (const TextureUVCoordinateSet *)_R7;
              else
                s1 = (const TextureUVCoordinateSet *)_R7;
            }
            else
              s1 = (const TextureUVCoordinateSet *)_R7;
          }
          else
            s1 = (const TextureUVCoordinateSet *)_R7;
        }
        else
          s1 = (const TextureUVCoordinateSet *)_R7;
      else
        s1 = (const TextureUVCoordinateSet *)v30;
LABEL_50:
      s1 = (const TextureUVCoordinateSet *)v30;
    Tessellator::color(v8, 1.0, 1.0, 1.0, 1.0);
    v76 = 1040187392;
    v77 = 1003277517;
    v78 = 1040187392;
    v73 = 1063256064;
    v74 = 1044381696;
    v75 = 1063256064;
    AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v76, (const Vec3 *)&v73);
    Vec3::Vec3((int)&v72, (int)v60);
    BlockTessellator::tessellateFaceDown(v5, v8, v7, (const Vec3 *)&v72, (const TextureUVCoordinateSet *)_R9);
    BlockTessellator::tessellateFaceUp(v5, v8, v7, (const Vec3 *)&v72, (const TextureUVCoordinateSet *)_R9);
    BlockTessellator::tessellateNorth(v5, v8, v7, (const Vec3 *)&v72, (const TextureUVCoordinateSet *)_R9);
    BlockTessellator::tessellateSouth(v5, v8, v7, (const Vec3 *)&v72, (const TextureUVCoordinateSet *)_R9);
    BlockTessellator::tessellateWest(v5, v8, v7, (const Vec3 *)&v72, (const TextureUVCoordinateSet *)_R9);
    BlockTessellator::tessellateEast(v5, v8, v7, (const Vec3 *)&v72, (const TextureUVCoordinateSet *)_R9);
    v69 = 1044381696;
    v70 = 1044381696;
    v71 = 1044381696;
    v66 = 1062207488;
    v67 = 1063256064;
    v68 = 1062207488;
    AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&v69, (const Vec3 *)&v66);
    Vec3::Vec3((int)&v65, (int)v60);
    BlockTessellator::tessellateFaceDown(v5, v8, v7, (const Vec3 *)&v65, (const TextureUVCoordinateSet *)v63);
    BlockTessellator::tessellateFaceUp(v5, v8, v7, (const Vec3 *)&v65, (const TextureUVCoordinateSet *)v63);
    BlockTessellator::tessellateNorth(v5, v8, v7, (const Vec3 *)&v65, (const TextureUVCoordinateSet *)v63);
    BlockTessellator::tessellateSouth(v5, v8, v7, (const Vec3 *)&v65, (const TextureUVCoordinateSet *)v63);
    BlockTessellator::tessellateWest(v5, v8, v7, (const Vec3 *)&v65, (const TextureUVCoordinateSet *)v63);
    BlockTessellator::tessellateEast(v5, v8, v7, (const Vec3 *)&v65, (const TextureUVCoordinateSet *)v63);
    AABB::set((BlockTessellator *)((char *)v5 + 724), (const Vec3 *)&Vec3::ZERO, (const Vec3 *)&Vec3::ONE);
    Vec3::Vec3((int)&v64, (int)v60);
    BlockTessellator::tessellateFaceDown(v5, v8, v7, (const Vec3 *)&v64, s1);
    BlockTessellator::tessellateFaceUp(v5, v8, v7, (const Vec3 *)&v64, s1);
    BlockTessellator::tessellateNorth(v5, v8, v7, (const Vec3 *)&v64, s1);
    BlockTessellator::tessellateSouth(v5, v8, v7, (const Vec3 *)&v64, s1);
    BlockTessellator::tessellateWest(v5, v8, v7, (const Vec3 *)&v64, s1);
    BlockTessellator::tessellateEast(v5, v8, v7, (const Vec3 *)&v64, s1);
  }
  return 1;
}


int __fastcall BlockTessellator::BlockTessellator(int a1, int a2)
{
  int v2; // r4@1
  void *v3; // r0@1
  double v4; // r0@2
  double v5; // r0@2
  int v6; // r7@4
  void *v7; // r6@4
  unsigned int v8; // r0@5
  int v9; // r7@7
  void *v10; // r6@7
  signed int v11; // r1@8
  int v12; // r7@9
  unsigned int *v14; // r2@11
  signed int v15; // r1@13
  int v16; // [sp+8h] [bp-28h]@1

  v2 = a1;
  *(_BYTE *)a1 = 0;
  *(_BYTE *)(a1 + 1) = 0;
  *(_DWORD *)(a1 + 4) = a2;
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(a1 + 8));
  *(_BYTE *)(v2 + 40) = 0;
  *(_BYTE *)(v2 + 41) = 1;
  *(_BYTE *)(v2 + 42) = 1;
  *(_DWORD *)(v2 + 47) = 0;
  *(_DWORD *)(v2 + 43) = 0;
  *(_BYTE *)(v2 + 51) = 1;
  *(_DWORD *)(v2 + 60) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 52) = 0;
  *(_DWORD *)(v2 + 56) = 0;
  *(_DWORD *)(v2 + 76) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  *(_DWORD *)(v2 + 68) = 0;
  *(_DWORD *)(v2 + 72) = 0;
  *(_DWORD *)(v2 + 92) = 0;
  *(_DWORD *)(v2 + 96) = 0;
  *(_DWORD *)(v2 + 84) = 0;
  *(_DWORD *)(v2 + 88) = 0;
  *(_DWORD *)(v2 + 108) = 0;
  *(_DWORD *)(v2 + 112) = 0;
  *(_DWORD *)(v2 + 100) = 0;
  *(_DWORD *)(v2 + 104) = 0;
  *(_DWORD *)(v2 + 124) = 0;
  *(_DWORD *)(v2 + 128) = 0;
  *(_DWORD *)(v2 + 116) = 0;
  *(_DWORD *)(v2 + 120) = 0;
  *(_DWORD *)(v2 + 140) = 0;
  *(_DWORD *)(v2 + 144) = 0;
  *(_DWORD *)(v2 + 132) = 0;
  *(_DWORD *)(v2 + 136) = 0;
  *(_DWORD *)(v2 + 148) = 0;
  *(_DWORD *)(v2 + 152) = 0;
  *(_DWORD *)(v2 + 156) = 0;
  *(_DWORD *)(v2 + 160) = 0;
  *(_DWORD *)(v2 + 164) = 0;
  *(_DWORD *)(v2 + 168) = 0;
  *(_DWORD *)(v2 + 172) = 0;
  *(_DWORD *)(v2 + 176) = 0;
  *(_BYTE *)(v2 + 180) = Brightness::MIN;
  *(_BYTE *)(v2 + 181) = Brightness::MIN;
  *(_BYTE *)(v2 + 182) = Brightness::MIN;
  *(_BYTE *)(v2 + 183) = Brightness::MIN;
  *(_BYTE *)(v2 + 184) = Brightness::MIN;
  *(_BYTE *)(v2 + 185) = Brightness::MIN;
  *(_BYTE *)(v2 + 186) = Brightness::MIN;
  *(_BYTE *)(v2 + 187) = Brightness::MIN;
  sub_119C884((void **)&v16, "ui_item");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v2 + 712),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v16);
  v3 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  AABB::AABB((AABB *)(v2 + 724));
  *(_DWORD *)(v2 + 752) = 1065353216;
  *(_DWORD *)(v2 + 764) = 0;
  *(_DWORD *)(v2 + 768) = 0;
  *(_QWORD *)(v2 + 772) = 1065353216LL;
  LODWORD(v4) = v2 + 772;
  v5 = COERCE_DOUBLE(__PAIR__(10, sub_119C844(v4)));
  *(_DWORD *)(v2 + 760) = LODWORD(v5);
  if ( LODWORD(v5) == 1 )
    v7 = (void *)(v2 + 780);
    *(_DWORD *)(v2 + 780) = 0;
  else
    if ( LODWORD(v5) >= 0x40000000 )
      sub_119C874();
    v6 = 4 * LODWORD(v5);
    v7 = operator new(4 * LODWORD(v5));
    _aeabi_memclr4(v7, v6);
  *(_DWORD *)(v2 + 756) = v7;
  *(_DWORD *)(v2 + 792) = 0;
  *(_DWORD *)(v2 + 796) = 0;
  *(_DWORD *)(v2 + 800) = 1065353216;
  *(_DWORD *)(v2 + 804) = 0;
  LODWORD(v5) = v2 + 800;
  v8 = sub_119C844(v5);
  *(_DWORD *)(v2 + 788) = v8;
  if ( v8 == 1 )
    v10 = (void *)(v2 + 808);
    *(_DWORD *)(v2 + 808) = 0;
    if ( v8 >= 0x40000000 )
    v9 = 4 * v8;
    v10 = operator new(4 * v8);
    _aeabi_memclr4(v10, v9);
  *(_DWORD *)(v2 + 784) = v10;
  _aeabi_memclr4(v2 + 812, 56016);
  *(_DWORD *)(v2 + 812) = BlockPos::ZERO;
  *(_DWORD *)(v2 + 816) = unk_2816278;
  v11 = 828;
  *(_DWORD *)(v2 + 820) = dword_281627C;
  *(_DWORD *)(v2 + 824) = 0;
  do
    v12 = v2 + v11;
    *(_BYTE *)(v2 + v11) = Brightness::MIN;
    v11 += 2;
    *(_BYTE *)(v12 + 1) = Brightness::MIN;
  while ( v12 + 2 != v2 + 16828 );
  *(_BYTE *)(v2 + 56828) = 0;
  _aeabi_memclr4(v2 + 180, 532);
  return v2;
}


void __fastcall BlockTessellator::tessellateBeacon(BlockTessellator *this, Tessellator *a2, const Block *a3, float a4, float a5, const Vec3 *a6)
{
  BlockTessellator *v6; // r11@1
  const Block *v7; // r9@1
  Tessellator *v8; // r5@1
  float v9; // r6@1
  unsigned int v10; // r4@1
  int v13; // r0@1
  int *v14; // r7@1
  const Vec3 *v15; // r3@1
  _DWORD *v20; // r4@9
  _DWORD *v21; // r1@9
  size_t v22; // r7@9
  _DWORD *v24; // r1@20
  __int64 v25; // r0@29
  __int64 v26; // r0@29
  int v27; // r0@29
  float v28; // [sp+0h] [bp-B0h]@0
  int v29; // [sp+8h] [bp-A8h]@20
  const Vec3 *v30; // [sp+Ch] [bp-A4h]@8
  const Vec3 *v31; // [sp+10h] [bp-A0h]@8
  int v32; // [sp+14h] [bp-9Ch]@7
  int v33; // [sp+18h] [bp-98h]@1
  signed int v34; // [sp+1Ch] [bp-94h]@1
  signed int v35; // [sp+20h] [bp-90h]@1
  signed int v36; // [sp+24h] [bp-8Ch]@1
  signed int v37; // [sp+28h] [bp-88h]@1
  signed int v38; // [sp+2Ch] [bp-84h]@1
  signed int v39; // [sp+30h] [bp-80h]@1
  signed int v40; // [sp+34h] [bp-7Ch]@1
  int v41; // [sp+38h] [bp-78h]@1
  signed int v42; // [sp+3Ch] [bp-74h]@1
  signed int v43; // [sp+40h] [bp-70h]@1
  int v44; // [sp+44h] [bp-6Ch]@1
  __int64 v45; // [sp+48h] [bp-68h]@1
  int v46; // [sp+50h] [bp-60h]@1
  int v47; // [sp+54h] [bp-5Ch]@1
  int v48; // [sp+58h] [bp-58h]@1
  int v49; // [sp+5Ch] [bp-54h]@1

  v6 = this;
  v7 = a3;
  v8 = a2;
  v9 = a4;
  v10 = BlockGraphics::mBlocks[*((_BYTE *)a3 + 4)];
  v33 = 1040187392;
  v34 = 1003277517;
  v35 = 1040187392;
  v36 = 1063256064;
  v37 = 1044381696;
  v38 = 1063256064;
  v39 = 1044381696;
  v40 = 1044381696;
  v41 = 1044381696;
  v42 = 1062207488;
  v43 = 1063256064;
  v44 = 1062207488;
  v46 = dword_2822498;
  v45 = *(_QWORD *)&Vec3::ZERO;
  v47 = Vec3::ONE;
  v48 = unk_28224A0;
  v49 = unk_28224A4;
  _R8 = BlockGraphics::getTexture(__PAIR__(1, v10), 0, 0);
  _R10 = BlockGraphics::getTexture(v10, 0, 0);
  v13 = BlockGraphics::getTexture(__PAIR__(2, v10), 0, 0);
  v14 = &v33;
  v15 = a6;
  __asm
  {
    VLDR            S18, [R8,#4]
    VLDR            S0, [R10,#4]
    VLDR            S16, [SP,#0xB0+arg_0]
    VCMPE.F32       S0, S18
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    goto LABEL_32;
    VLDR            S20, [R8,#0xC]
    VLDR            S0, [R10,#0xC]
    VCMPE.F32       S0, S20
    VLDR            S22, [R8,#8]
    VLDR            S0, [R10,#8]
    VCMPE.F32       S0, S22
LABEL_32:
    v32 = v13;
    v30 = (const Vec3 *)&v45;
    v31 = (const Vec3 *)&v47;
    goto LABEL_24;
    VLDR            S24, [R8,#0x10]
    VLDR            S0, [R10,#0x10]
  v32 = v13;
    VCMPE.F32       S0, S24
  if ( _ZF )
    v20 = *(_DWORD **)(_R8 + 24);
    v21 = *(_DWORD **)(_R10 + 24);
    v22 = *(v20 - 3);
    if ( v22 != *(v21 - 3) )
    {
      v14 = &v33;
      goto LABEL_24;
    }
    if ( memcmp(*(const void **)(_R8 + 24), v21, *(v20 - 3)) )
      goto LABEL_33;
    v15 = a6;
    if ( *(_DWORD *)(_R8 + 28) != *(_DWORD *)(_R10 + 28) )
    _R0 = v32;
    __asm
      VLDR            S0, [R0,#4]
      VCMPE.F32       S0, S18
      VMRS            APSR_nzcv, FPSCR
    if ( !_ZF )
      VLDR            S0, [R0,#0xC]
      VCMPE.F32       S0, S20
      VLDR            S0, [R0,#8]
      VCMPE.F32       S0, S22
      VLDR            S0, [R0,#0x10]
      VCMPE.F32       S0, S24
    v29 = *(_DWORD *)(_R8 + 28);
    v24 = *(_DWORD **)(v32 + 24);
    if ( v22 != *(v24 - 3) )
    if ( memcmp(v20, v24, v22) )
LABEL_33:
      v15 = a6;
    v14 = &v33;
    if ( v29 == *(_DWORD *)(v32 + 28) )
      HIDWORD(v25) = 1;
      LODWORD(v25) = BlockGraphics::mBlocks[*(_BYTE *)(Block::mObsidian + 4)];
      _R10 = BlockGraphics::getTexture(v25, 0, 0);
      HIDWORD(v26) = 1;
      LODWORD(v26) = BlockGraphics::mBlocks[*(_BYTE *)(Block::mGlass + 4)];
      v27 = BlockGraphics::getTexture(v26, 0, 0);
      v32 = v27;
  else
LABEL_24:
  Tessellator::addOffset(v8, v15);
  __asm { VSTR            S16, [SP,#0xB0+var_B0] }
  Tessellator::color(v8, v9, v9, v9, v28);
  AABB::set((BlockTessellator *)((char *)v6 + 724), (const Vec3 *)v14, (const Vec3 *)(v14 + 3));
  BlockTessellator::tessellateFaceUp(v6, v8, v7, (const Vec3 *)&Vec3::ZERO, (const TextureUVCoordinateSet *)_R10);
  BlockTessellator::tessellateSouth(v6, v8, v7, (const Vec3 *)&Vec3::ZERO, (const TextureUVCoordinateSet *)_R10);
  BlockTessellator::tessellateWest(v6, v8, v7, (const Vec3 *)&Vec3::ZERO, (const TextureUVCoordinateSet *)_R10);
  AABB::set((BlockTessellator *)((char *)v6 + 724), (const Vec3 *)(v14 + 6), (const Vec3 *)(v14 + 9));
  BlockTessellator::tessellateFaceUp(v6, v8, v7, (const Vec3 *)&Vec3::ZERO, (const TextureUVCoordinateSet *)_R8);
  BlockTessellator::tessellateSouth(v6, v8, v7, (const Vec3 *)&Vec3::ZERO, (const TextureUVCoordinateSet *)_R8);
  BlockTessellator::tessellateWest(v6, v8, v7, (const Vec3 *)&Vec3::ZERO, (const TextureUVCoordinateSet *)_R8);
  AABB::set((BlockTessellator *)((char *)v6 + 724), v30, v31);
  BlockTessellator::tessellateFaceUp(v6, v8, v7, (const Vec3 *)&Vec3::ZERO, (const TextureUVCoordinateSet *)v32);
  BlockTessellator::tessellateSouth(v6, v8, v7, (const Vec3 *)&Vec3::ZERO, (const TextureUVCoordinateSet *)v32);
  BlockTessellator::tessellateWest(v6, v8, v7, (const Vec3 *)&Vec3::ZERO, (const TextureUVCoordinateSet *)v32);
}


void __fastcall BlockTessellator::tessellateEast(BlockTessellator *this, Tessellator *a2, const Block *a3, const Vec3 *a4, const TextureUVCoordinateSet *a5)
{
  BlockTessellator::tessellateEast(this, a2, a3, a4, a5);
}


void __fastcall BlockTessellator::tessellateNorth(BlockTessellator *this, Tessellator *a2, const Block *a3, const Vec3 *a4, const TextureUVCoordinateSet *a5)
{
  BlockTessellator::tessellateNorth(this, a2, a3, a4, a5);
}


signed int __fastcall BlockTessellator::tessellateWallInWorld(BlockTessellator *this, Tessellator *a2, const WallBlock *a3, const BlockPos *a4, int a5)
{
  const Block *v5; // r5@1
  BlockTessellator *v6; // r11@1
  const BlockPos *v7; // r4@1
  int v8; // r0@1
  int v9; // r2@1
  int v10; // r3@1
  int v11; // r6@1
  int (__fastcall *v12)(const Block *, int, const BlockPos *, int *); // r7@1
  int v13; // r1@1
  int v14; // r8@1
  int v15; // r2@1
  int v16; // r3@1
  int (__fastcall *v17)(const Block *, int, const BlockPos *, int *); // r7@1
  int v18; // r1@1
  int (__fastcall *v19)(const Block *, int, const BlockPos *, int *); // r7@1
  int v20; // r2@1
  int v21; // r3@1
  int v22; // r1@1
  int v23; // r10@1
  int v24; // r1@1
  int (__fastcall *v25)(const Block *, int, const BlockPos *, int *); // r7@1
  int v26; // r2@1
  int v27; // r3@1
  int v28; // r0@1
  int v29; // r7@1
  int v30; // r6@1
  int v31; // r2@4
  int v32; // r3@4
  BlockSource *v33; // r0@4
  signed int v34; // r0@4
  __int64 v40; // r2@9
  float v44; // ST00_4@9
  float v45; // ST04_4@9
  float v46; // ST08_4@9
  float v64; // [sp+0h] [bp-A8h]@0
  float v65; // [sp+0h] [bp-A8h]@9
  float v66; // [sp+4h] [bp-A4h]@0
  float v67; // [sp+4h] [bp-A4h]@9
  float v68; // [sp+8h] [bp-A0h]@0
  float v69; // [sp+8h] [bp-A0h]@9
  Tessellator *v70; // [sp+14h] [bp-94h]@1
  int v71; // [sp+18h] [bp-90h]@1
  void *v72; // [sp+1Ch] [bp-8Ch]@9
  int v73; // [sp+20h] [bp-88h]@9
  char v74; // [sp+24h] [bp-84h]@9
  int v75; // [sp+2Ch] [bp-7Ch]@4
  int v76; // [sp+30h] [bp-78h]@4
  int v77; // [sp+34h] [bp-74h]@4
  int v78; // [sp+38h] [bp-70h]@1
  int v79; // [sp+3Ch] [bp-6Ch]@1
  int v80; // [sp+40h] [bp-68h]@1
  int v81; // [sp+44h] [bp-64h]@1
  int v82; // [sp+48h] [bp-60h]@1
  int v83; // [sp+4Ch] [bp-5Ch]@1
  int v84; // [sp+50h] [bp-58h]@1
  int v85; // [sp+54h] [bp-54h]@1
  int v86; // [sp+58h] [bp-50h]@1
  int v87; // [sp+5Ch] [bp-4Ch]@1
  int v88; // [sp+60h] [bp-48h]@1
  int v89; // [sp+64h] [bp-44h]@1

  v5 = a3;
  v6 = this;
  v7 = a4;
  v8 = *(_DWORD *)a3;
  v70 = a2;
  v9 = *(_DWORD *)a4;
  v10 = *((_DWORD *)a4 + 1);
  v11 = *((_DWORD *)v7 + 2);
  v12 = *(int (__fastcall **)(const Block *, int, const BlockPos *, int *))(v8 + 504);
  v13 = *((_DWORD *)v6 + 1);
  v87 = v9 - 1;
  v88 = v10;
  v89 = v11;
  v14 = v12(v5, v13, v7, &v87);
  v15 = *((_DWORD *)v7 + 1);
  v16 = *((_DWORD *)v7 + 2);
  v17 = *(int (__fastcall **)(const Block *, int, const BlockPos *, int *))(*(_DWORD *)v5 + 504);
  v18 = *((_DWORD *)v6 + 1);
  v84 = *(_DWORD *)v7 + 1;
  v85 = v15;
  v86 = v16;
  v71 = v17(v5, v18, v7, &v84);
  v19 = *(int (__fastcall **)(const Block *, int, const BlockPos *, int *))(*(_DWORD *)v5 + 504);
  v20 = *((_DWORD *)v7 + 1);
  v21 = *((_DWORD *)v7 + 2);
  v22 = *((_DWORD *)v6 + 1);
  v81 = *(_DWORD *)v7;
  v82 = v20;
  v83 = v21 - 1;
  v23 = v19(v5, v22, v7, &v81);
  v24 = *((_DWORD *)v6 + 1);
  v25 = *(int (__fastcall **)(const Block *, int, const BlockPos *, int *))(*(_DWORD *)v5 + 504);
  v26 = *((_DWORD *)v7 + 1);
  v27 = *((_DWORD *)v7 + 2);
  v78 = *(_DWORD *)v7;
  v79 = v26;
  v80 = v27 + 1;
  v28 = v25(v5, v24, v7, &v78);
  v29 = v28;
  v30 = 0;
  if ( v23 == 1 && v28 == 1 )
    v30 = (v71 | v14) ^ 1;
  v31 = *((_DWORD *)v7 + 1);
  v32 = *((_DWORD *)v7 + 2);
  v33 = (BlockSource *)*((_DWORD *)v6 + 1);
  v75 = *(_DWORD *)v7;
  v76 = v31 + 1;
  v77 = v32;
  v34 = BlockSource::isEmptyBlock(v33, (const BlockPos *)&v75);
  if ( (v71 & v14 & ((v23 | v29) ^ 1) | v30) == 1 && v34 )
  {
    __asm { VMOV.F32        S0, #0.5 }
    _R0 = &WallBlock::WALL_WIDTH;
    __asm
    {
      VLDR            S2, [R0]
      VSUB.F32        S4, S0, S2
    }
    if ( _ZF )
      __asm
      {
        VADD.F32        S0, S2, S0
        VMOV            R1, S4
      }
      v68 = 1.0;
      HIDWORD(_R2) = 0;
      LODWORD(_R2) = &WallBlock::WALL_HEIGHT;
      __asm { VLDR            S2, [R2] }
      LODWORD(_R2) = 0;
        VSTR            S2, [SP,#0xA8+var_A4]
        VSTR            S0, [SP,#0xA8+var_A8]
    else
        VMOV            R3, S4
      v64 = 1.0;
      HIDWORD(_R0) = &WallBlock::WALL_HEIGHT;
      __asm { VLDR            S2, [R1] }
      HIDWORD(_R0) = 0;
        VSTR            S0, [SP,#0xA8+var_A0]
    LODWORD(_R0) = (char *)v6 + 724;
    AABB::set(_R0, _R2, v64, v66, v68);
    BlockTessellator::tessellateBlockInWorld(v6, v70, v5, v7, a5);
  }
  else
    v72 = &unk_262C9B4;
    v73 = 2;
    BlockOccluder::BlockOccluder(
      (BlockOccluder *)&v74,
      (int)v6 + 812,
      v5,
      v7,
      (BlockTessellator *)((char *)v6 + 724),
      (int)&v72,
      *((_BYTE *)v6 + 48));
    __asm { VMOV.F32        S16, #0.5 }
    LODWORD(v40) = 0;
    _R0 = &WallBlock::POST_WIDTH;
      VLDR            S0, [R0]
      VSUB.F32        S20, S16, S0
      VADD.F32        S18, S0, S16
    _R0 = &WallBlock::POST_HEIGHT;
    __asm { VLDR            S0, [R0] }
      VMOV            R1, S20
      VSTR            S18, [SP,#0xA8+var_A8]
      VSTR            S0, [SP,#0xA8+var_A4]
      VSTR            S18, [SP,#0xA8+var_A0]
    HIDWORD(v40) = HIDWORD(_R0);
    AABB::set(_R0, v40, v44, v45, v46);
      (int)&unk_262C9B8,
    if ( v14 == 1 )
      __asm { VSTR            S20, [SP,#0xA8+var_A8] }
      _R0 = &WallBlock::WALL_WIDTH;
        VLDR            S0, [R0]
        VSUB.F32        S2, S16, S0
        VADD.F32        S0, S0, S16
      _R0 = &WallBlock::WALL_HEIGHT;
        VMOV            R3, S2
        VLDR            S2, [R0]
      AABB::set((unsigned int)v6 + 724, _R2, v65, v67, v69);
      BlockTessellator::tessellateBlockInWorld(v6, v70, v5, v7, a5);
    if ( v71 == 1 )
      __asm { VMOV            R1, S18 }
      LODWORD(_R0) = (char *)v6 + 724;
      AABB::set(_R0, _R2, 1.0, v67, v69);
    if ( v23 == 1 )
        VMOV            R1, S2
        VSTR            S20, [SP,#0xA8+var_A0]
      AABB::set(_R0, 0LL, v65, v67, v69);
    if ( v29 == 1 )
      __asm { VMOV            R3, S18 }
      AABB::set(_R0, _R2, v65, v67, 1.0);
  return 1;
}


signed int __fastcall BlockTessellator::tessellateBedInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  const Block *v6; // r7@1
  Tessellator *v7; // r10@1
  __int64 v9; // r4@2
  int v10; // r1@2
  signed int result; // r0@4
  int v14; // r0@5
  int v19; // r4@6
  char v20; // r5@6
  unsigned int v21; // r4@9
  unsigned int v22; // r5@9
  BlockGraphics *v24; // r6@11
  int v25; // r8@11
  unsigned int v26; // r0@11
  int (__fastcall *v27)(const Block *, unsigned int); // r2@11
  int v28; // r0@12
  int v29; // r0@13
  int v30; // r8@14
  int v35; // ST00_4@14
  float v36; // ST04_4@14
  int v38; // ST00_4@14
  float v39; // ST04_4@14
  int v40; // ST00_4@14
  float v41; // ST04_4@14
  BlockGraphics *v43; // r6@16
  int v44; // r7@16
  unsigned int v45; // r0@16
  int (__fastcall *v46)(const Block *, unsigned int); // r2@16
  int v47; // r0@17
  int v48; // r0@18
  int v53; // ST00_4@26
  float v54; // ST04_4@26
  int v56; // ST00_4@26
  float v57; // ST04_4@26
  int v58; // ST00_4@26
  float v59; // ST04_4@26
  int v60; // r0@26
  BlockOccluder *v61; // r0@29
  int v64; // r2@32
  BlockGraphics *v65; // r6@37
  int v66; // r7@37
  unsigned int v67; // r0@37
  int (__fastcall *v68)(const Block *, unsigned int); // r2@37
  int v69; // r0@38
  int v70; // r0@38
  int v71; // r0@39
  int v72; // r6@40
  int v77; // r0@42
  int v85; // r2@50
  BlockGraphics *v86; // r6@55
  int v87; // r7@55
  unsigned int v88; // r0@55
  int (__fastcall *v89)(const Block *, unsigned int); // r2@55
  int v90; // r0@56
  int v91; // r0@56
  int v92; // r0@57
  int v93; // r6@58
  int v98; // r0@60
  int v107; // r8@66
  int v108; // r1@67
  int v109; // r2@67
  BlockGraphics *v110; // r6@72
  int v111; // r7@72
  unsigned int v112; // r0@72
  int (__fastcall *v113)(const Block *, unsigned int); // r2@72
  int v114; // r0@73
  int v115; // r0@73
  int v116; // r0@74
  int v117; // r6@75
  int v122; // r0@77
  int v130; // r1@85
  int v131; // r2@85
  BlockGraphics *v132; // r6@90
  int v133; // r7@90
  unsigned int v134; // r0@90
  int (__fastcall *v135)(const Block *, unsigned int); // r2@90
  int v136; // r0@91
  int v137; // r0@91
  int v138; // r0@92
  int v140; // r6@93
  int v145; // r0@95
  int v151; // [sp+0h] [bp-138h]@0
  int v152; // [sp+0h] [bp-138h]@14
  float v153; // [sp+4h] [bp-134h]@0
  float v154; // [sp+4h] [bp-134h]@14
  float v155; // [sp+4h] [bp-134h]@29
  bool v156; // [sp+1Ch] [bp-11Ch]@0
  BlockPos *v157; // [sp+20h] [bp-118h]@2
  BlockPos *v158; // [sp+20h] [bp-118h]@29
  int v159; // [sp+24h] [bp-114h]@21
  const Block *v160; // [sp+28h] [bp-110h]@3
  float v161; // [sp+2Ch] [bp-10Ch]@98
  int v162; // [sp+38h] [bp-100h]@85
  int v163; // [sp+3Ch] [bp-FCh]@85
  int v164; // [sp+40h] [bp-F8h]@85
  unsigned __int8 v165; // [sp+44h] [bp-F4h]@84
  unsigned __int8 v166; // [sp+45h] [bp-F3h]@84
  float v167; // [sp+48h] [bp-F0h]@89
  float v168; // [sp+50h] [bp-E8h]@80
  int v169; // [sp+5Ch] [bp-DCh]@67
  int v170; // [sp+60h] [bp-D8h]@67
  int v171; // [sp+64h] [bp-D4h]@67
  unsigned __int8 v172; // [sp+68h] [bp-D0h]@66
  unsigned __int8 v173; // [sp+69h] [bp-CFh]@66
  float v174; // [sp+6Ch] [bp-CCh]@71
  float v175; // [sp+74h] [bp-C4h]@63
  __int64 v176; // [sp+80h] [bp-B8h]@50
  int v177; // [sp+88h] [bp-B0h]@50
  unsigned __int8 v178; // [sp+8Ch] [bp-ACh]@49
  unsigned __int8 v179; // [sp+8Dh] [bp-ABh]@49
  float v180; // [sp+90h] [bp-A8h]@54
  float v181; // [sp+98h] [bp-A0h]@45
  __int64 v182; // [sp+A4h] [bp-94h]@32
  int v183; // [sp+ACh] [bp-8Ch]@32
  unsigned __int8 v184; // [sp+B0h] [bp-88h]@31
  unsigned __int8 v185; // [sp+B1h] [bp-87h]@31
  float v186; // [sp+B4h] [bp-84h]@36
  char v187; // [sp+BCh] [bp-7Ch]@29
  float v188; // [sp+C4h] [bp-74h]@8
  unsigned __int8 v189; // [sp+CCh] [bp-6Ch]@3
  unsigned __int8 v190; // [sp+CDh] [bp-6Bh]@3

  _R9 = this;
  v6 = a3;
  v7 = a2;
  if ( *((_BYTE *)this + 40) )
  {
    _R11 = a4;
    v9 = *(_QWORD *)Block::getBlockState(Block::mBed, 12);
    v157 = (BlockPos *)BedBlock::isHeadPiece((BedBlock *)a5, v10);
    if ( *((_BYTE *)_R9 + 48) )
    {
      v160 = v6;
      _R1 = (unsigned __int8)Brightness::MAX;
      v189 = Brightness::MAX;
      v190 = Brightness::MAX;
      _R2 = (unsigned __int8)Brightness::MAX;
    }
    else
      BlockTessellatorCache::getLightColor(
        (BlockTessellatorCache *)&v189,
        (BlockTessellator *)((char *)_R9 + 812),
        (int)_R11);
      _R2 = v189;
      _R1 = v190;
      v14 = *((_BYTE *)_R9 + 48);
    __asm
      VMOV            S0, R1
      VLDR            S16, =0.0625
      VMOV            S2, R2
    LODWORD(v9) = v9 + 1 - HIDWORD(v9);
    __asm { VCVT.F32.U32    S0, S0 }
    v20 = 4 - BYTE4(v9);
      VCVT.F32.U32    S2, S2
      VMUL.F32        S0, S0, S16
      VMUL.F32        S2, S2, S16
      VSTR            S0, [SP,#0x138+var_74]
      VSTR            S2, [SP,#0x138+var_70]
    if ( _ZF )
      Tessellator::tex1((int)v7, (__int64 *)&v188);
    v21 = (unsigned int)a5 >> v19;
    v22 = 0xFu >> v20;
    Tessellator::color(v7, (const Color *)&Color::SHADE_DOWN);
    if ( *((_BYTE *)_R9 + 40) )
      _R0 = (int)_R9 + 8;
      v24 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v160 + 4)];
      v25 = (*(int (__fastcall **)(const Block *, _DWORD, int))(*(_DWORD *)v160 + 428))(v160, 0, a5);
      v26 = *((_WORD *)_R9 + 24);
      v27 = *(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v160 + 424);
      if ( (_BYTE)v26 )
      {
        v28 = v27(v160, v26 >> 8);
        _R0 = BlockGraphics::getTexture((unsigned int)v24, v28, 0);
      }
      else
        v29 = v27(v160, a5);
        _R0 = BlockGraphics::getTexture(v24, _R11, v25, v29);
      VMOV.F32        S0, #0.1875
      VLDR            S2, [R11]
      VLDR            S4, [R11,#4]
    v30 = v21 & v22;
      VLDR            S6, [R11,#8]
      VCVT.F32.S32    S18, S2
      VLDR            S8, [R9,#0x2D8]
      VLDR            S2, [R9,#0x2D4]
      VLDR            S20, [R9,#0x2DC]
      VLDR            S22, [R9,#0x2E0]
      VCVT.F32.S32    S24, S6
      VCVT.F32.S32    S4, S4
      VLDR            S6, [R9,#0x2E8]
      VADD.F32        S0, S8, S0
      VLDR            S26, [R0,#4]
      VADD.F32        S2, S18, S2
      VLDR            S17, [R0,#0x10]
      VLDR            S28, [R0,#8]
      VLDR            S30, [R0,#0xC]
      VSTR            S26, [SP,#0x138+var_138]
      VADD.F32        S6, S6, S24
      VSTR            S17, [SP,#0x138+var_134]
      VADD.F32        S0, S0, S4
      VMOV            R5, S2
      VMOV            R7, S6
      VMOV            R6, S0
    Tessellator::vertexUV(v7, _R5, _R6, _R7, *(float *)&v151, v153);
      VADD.F32        S0, S24, S20
      VSTR            S28, [SP,#0x138+var_134]
      VMOV            R4, S0
    Tessellator::vertexUV(v7, _R5, _R6, _R4, *(float *)&v35, v36);
      VADD.F32        S0, S22, S18
      VSTR            S30, [SP,#0x138+var_138]
      VMOV            R5, S0
    Tessellator::vertexUV(v7, _R5, _R6, _R4, *(float *)&v38, v39);
    Tessellator::vertexUV(v7, _R5, _R6, _R7, *(float *)&v40, v41);
    Tessellator::color(v7, (const Color *)&Color::SHADE_UP);
      v43 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v160 + 4)];
      v44 = (*(int (__fastcall **)(const Block *, signed int, int))(*(_DWORD *)v160 + 428))(v160, 1, a5);
      v45 = *((_WORD *)_R9 + 24);
      v46 = *(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v160 + 424);
      if ( (_BYTE)v45 )
        v47 = v46(v160, v45 >> 8);
        _R0 = BlockGraphics::getTexture(__PAIR__(1, (unsigned int)v43), v47, 0);
        v48 = v46(v160, a5);
        _R0 = BlockGraphics::getTexture(v43, _R11, v44, v48);
      VLDR            S24, [R0,#4]
      VLDR            S4, [R0,#8]
      VLDR            S20, [R0,#0xC]
      VLDR            S22, [R0,#0x10]
      v159 = _R0;
      __asm
        VMOV.F32        S0, S20
        VMOV.F32        S18, S20
        VMOV.F32        S2, S22
        VMOV.F32        S26, S4
        VMOV.F32        S28, S4
        VMOV.F32        S20, S24
    else if ( v30 == 2 )
        VMOV.F32        S0, S24
        VMOV.F32        S18, S24
        VMOV.F32        S2, S4
        VMOV.F32        S26, S22
        VMOV.F32        S28, S22
        VMOV.F32        S22, S4
        VMOV.F32        S24, S20
      if ( _ZF )
        __asm
        {
          VMOVEQ.F32      S28, S22
          VMOVEQ.F32      S22, S4
          VMOVEQ.F32      S18, S24
          VMOVEQ.F32      S24, S20
        }
        VMOV.F32        S22, S28
        VMOV.F32        S20, S18
      VLDR            S4, [R11]
      VLDR            S6, [R11,#4]
      VLDR            S8, [R11,#8]
      VCVT.F32.S32    S30, S4
      VCVT.F32.S32    S4, S6
      VCVT.F32.S32    S17, S8
      VLDR            S6, [R9,#0x2E0]
      VLDR            S8, [R9,#0x2E4]
      VLDR            S10, [R9,#0x2E8]
      VLDR            S19, [R9,#0x2D4]
      VLDR            S21, [R9,#0x2DC]
      VADD.F32        S6, S6, S30
      VSTR            S0, [SP,#0x138+var_138]
      VADD.F32        S4, S4, S8
      VSTR            S2, [SP,#0x138+var_134]
      VADD.F32        S8, S10, S17
      VMOV            R5, S6
      VMOV            R6, S4
      VMOV            R7, S8
    Tessellator::vertexUV(v7, _R5, _R6, _R7, *(float *)&v152, v154);
      VADD.F32        S0, S17, S21
      VSTR            S24, [SP,#0x138+var_138]
      VSTR            S22, [SP,#0x138+var_134]
    Tessellator::vertexUV(v7, _R5, _R6, _R4, *(float *)&v53, v54);
      VADD.F32        S0, S30, S19
      VSTR            S20, [SP,#0x138+var_138]
    Tessellator::vertexUV(v7, _R5, _R6, _R4, *(float *)&v56, v57);
      VSTR            S18, [SP,#0x138+var_138]
      VSTR            S26, [SP,#0x138+var_134]
    Tessellator::vertexUV(v7, _R5, _R6, _R7, *(float *)&v58, v59);
    v60 = v30;
    if ( v157 == (BlockPos *)1 )
      v60 = Direction::DIRECTION_OPPOSITE[v30];
    if ( !*((_BYTE *)_R9 + 40) )
      v158 = (BlockTessellator *)((char *)_R9 + 812);
      v61 = BlockOccluder::BlockOccluder(
              (BlockOccluder *)&v187,
              (int)_R9 + 812,
              v160,
              _R11,
              (BlockTessellator *)((char *)_R9 + 724),
              (int)&Facing::ALL_EXCEPT_AXIS_Y + 8 * Direction::DIRECTION_FACING[v60],
              *((_BYTE *)_R9 + 48));
      if ( !BlockOccluder::occludes(v61, 2) )
          VLDR            S0, [R9,#0x2DC]
          VCMPE.F32       S0, #0.0
          VMRS            APSR_nzcv, FPSCR
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          v64 = *((_DWORD *)_R11 + 2);
          v182 = *(_QWORD *)_R11;
          v183 = v64 - 1;
          if ( *((_BYTE *)_R9 + 48) )
          {
            _R0 = (unsigned __int8)Brightness::MAX;
            v184 = Brightness::MAX;
            v185 = Brightness::MAX;
            _R1 = (unsigned __int8)Brightness::MAX;
          }
          else
            BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v184, v158, (int)&v182);
            _R0 = v184;
            _R1 = v185;
        else
          _R0 = v189;
          _R1 = v190;
          v184 = v189;
          v185 = v190;
          VMOV            S0, R1
          VMOV            S2, R0
          VCVT.F32.U32    S0, S0
          VCVT.F32.U32    S2, S2
          VMUL.F32        S0, S0, S16
          VMUL.F32        S2, S2, S16
          VSTR            S0, [SP,#0x138+var_84]
          VSTR            S2, [SP,#0x138+var_80]
        if ( !*((_BYTE *)_R9 + 48) )
          Tessellator::tex1((int)v7, (__int64 *)&v186);
        Tessellator::color(v7, (const Color *)&Color::SHADE_NORTH_SOUTH);
          VLDR            S4, [R11,#8]
          VMOV.F32        S6, #-0.5
          VLDR            S0, [R11]
          VLDR            S2, [R11,#4]
          VCVT.F32.S32    S4, S4
          VCVT.F32.S32    S0, S0
          VCVT.F32.S32    S2, S2
          VADD.F32        S4, S4, S6
          VSTR            S0, [SP,#0x138+var_A0]
          VSTR            S2, [SP,#0x138+var_9C]
          VSTR            S4, [SP,#0x138+var_98]
        v65 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v160 + 4)];
        v66 = (*(int (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v160 + 428))(v160, 2, a5);
        v67 = *((_WORD *)_R9 + 24);
        v68 = *(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v160 + 424);
        if ( (_BYTE)v67 )
          v69 = v68(v160, v67 >> 8);
          v70 = BlockGraphics::getTexture(__PAIR__(2, (unsigned int)v65), v69, 0);
          v71 = v68(v160, a5);
          v70 = BlockGraphics::getTexture(v65, _R11, v66, v71);
        v72 = v70;
        _R0 = *(_WORD *)(v159 + 20);
          VMOV            S0, R0
          VCVT.F32.U32    S18, S0
          VLDR            S20, [R1,#4]
          VLDR            S22, [R1,#0xC]
          VCMPE.F32       S22, S20
          __asm
            VMUL.F32        S0, S18, S20
            VMOV            R0, S0
          v77 = roundf(_R0);
          __asm { VMUL.F32        S0, S18, S22 }
          _R4 = v77;
            VMUL.F32        S0, S18, S22
          _R4 = roundf(_R0);
          __asm { VMUL.F32        S0, S18, S20 }
        __asm { VMOV            R0, S0 }
        _R0 = roundf(_R0);
          VMOV            S2, R4
          VCVTR.S32.F32   S0, S0
          VCVTR.S32.F32   S2, S2
        _R2 = &dword_EA5818;
        if ( _ZF )
          _R2 = &dword_EA581C;
          VMOV            R0, S0
          VLDR            S0, [R2]
          VMOV            R1, S2
          VSTR            S0, [SP,#0x138+var_134]
        BlockTextureTessellator::render(
          (int)v7,
          COERCE_FLOAT(&v181),
          v72,
          1,
          (unsigned __int16)(_R1 - _R0),
          v155,
          (int)&Vec3::ZERO,
          0,
          0.0,
          v156);
      if ( !BlockOccluder::occludes((BlockOccluder *)&v187, 3) )
          VMOV.F32        S0, #1.0
          VLDR            S2, [R9,#0x2E8]
          VCMPE.F32       S2, S0
        if ( _NF ^ _VF )
          v178 = v189;
          v179 = v190;
          v85 = *((_DWORD *)_R11 + 2);
          v176 = *(_QWORD *)_R11;
          v177 = v85 + 1;
            v178 = Brightness::MAX;
            v179 = Brightness::MAX;
            BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v178, v158, (int)&v176);
            _R0 = v178;
            _R1 = v179;
          VSTR            S0, [SP,#0x138+var_A8]
          VSTR            S2, [SP,#0x138+var_A4]
          Tessellator::tex1((int)v7, (__int64 *)&v180);
          VMOV.F32        S6, #0.5
          VSTR            S0, [SP,#0x138+var_C4]
          VSTR            S2, [SP,#0x138+var_C0]
          VSTR            S4, [SP,#0x138+var_BC]
        v86 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v160 + 4)];
        v87 = (*(int (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v160 + 428))(v160, 3, a5);
        v88 = *((_WORD *)_R9 + 24);
        v89 = *(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v160 + 424);
        if ( (_BYTE)v88 )
          v90 = v89(v160, v88 >> 8);
          v91 = BlockGraphics::getTexture(__PAIR__(3, (unsigned int)v86), v90, 0);
          v92 = v89(v160, a5);
          v91 = BlockGraphics::getTexture(v86, _R11, v87, v92);
        v93 = v91;
          v98 = roundf(_R0);
          _R4 = v98;
        _R2 = dword_EA5830;
          _R2 = &dword_EA5830[1];
          COERCE_FLOAT(&v175),
          v93,
      if ( !BlockOccluder::occludes((BlockOccluder *)&v187, 4) )
        _R0 = (int)_R9 + 724;
          VLDR            S0, [R0]
          v108 = *((_DWORD *)_R11 + 1);
          v109 = *((_DWORD *)_R11 + 2);
          v169 = *(_DWORD *)_R11 - 1;
          v170 = v108;
          v171 = v109;
          v107 = a5;
            v172 = Brightness::MAX;
            v173 = Brightness::MAX;
            BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v172, v158, (int)&v169);
            _R0 = v172;
            _R1 = v173;
          v172 = v189;
          v173 = v190;
          VSTR            S0, [SP,#0x138+var_CC]
          VSTR            S2, [SP,#0x138+var_C8]
          Tessellator::tex1((int)v7, (__int64 *)&v174);
        Tessellator::color(v7, (const Color *)&Color::SHADE_WEST_EAST);
          VADD.F32        S0, S0, S6
          VSTR            S0, [SP,#0x138+var_E8]
          VSTR            S2, [SP,#0x138+var_E4]
          VSTR            S4, [SP,#0x138+var_E0]
        v110 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v160 + 4)];
        v111 = (*(int (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v160 + 428))(v160, 4, v107);
        v112 = *((_WORD *)_R9 + 24);
        v113 = *(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v160 + 424);
        if ( (_BYTE)v112 )
          v114 = v113(v160, v112 >> 8);
          v115 = BlockGraphics::getTexture(__PAIR__(4, (unsigned int)v110), v114, 0);
          v116 = v113(v160, v107);
          v115 = BlockGraphics::getTexture(v110, _R11, v111, v116);
        v117 = v115;
          v122 = roundf(_R0);
          _R4 = v122;
        _R2 = dword_EA5848;
          _R2 = &dword_EA5848[1];
          COERCE_FLOAT(&v168),
          v117,
      if ( !BlockOccluder::occludes((BlockOccluder *)&v187, 5) )
          VLDR            S2, [R9,#0x2E0]
          v165 = v189;
          v166 = v190;
          v130 = *((_DWORD *)_R11 + 1);
          v131 = *((_DWORD *)_R11 + 2);
          v162 = *(_DWORD *)_R11 + 1;
          v163 = v130;
          v164 = v131;
            v165 = Brightness::MAX;
            v166 = Brightness::MAX;
            BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v165, v158, (int)&v162);
            _R0 = v165;
            _R1 = v166;
          VSTR            S0, [SP,#0x138+var_F0]
          VSTR            S2, [SP,#0x138+var_EC]
          Tessellator::tex1((int)v7, (__int64 *)&v167);
          VSTR            S0, [SP,#0x138+var_10C]
          VSTR            S2, [SP,#0x138+var_108]
          VSTR            S4, [SP,#0x138+var_104]
        v132 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v160 + 4)];
        v133 = (*(int (__fastcall **)(_DWORD, signed int, _DWORD))(*(_DWORD *)v160 + 428))(v160, 5, a5);
        v134 = *((_WORD *)_R9 + 24);
        v135 = *(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v160 + 424);
        if ( (_BYTE)v134 )
          v136 = v135(v160, v134 >> 8);
          v137 = BlockGraphics::getTexture(__PAIR__(5, (unsigned int)v132), v136, 0);
          v138 = v135(v160, a5);
          v137 = BlockGraphics::getTexture(v132, _R11, v133, v138);
        _R1 = v159;
        v140 = v137;
          VCVT.F32.U32    S16, S0
          VLDR            S18, [R1,#4]
          VLDR            S20, [R1,#0xC]
          VCMPE.F32       S20, S18
            VMUL.F32        S0, S16, S18
          v145 = roundf(_R0);
          __asm { VMUL.F32        S0, S16, S20 }
          _R4 = v145;
            VMUL.F32        S0, S16, S20
          __asm { VMUL.F32        S0, S16, S18 }
        _R2 = dword_EA5860;
          _R2 = &dword_EA5860[1];
          COERCE_FLOAT(&v161),
          v140,
    *((_BYTE *)_R9 + 43) = 0;
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall BlockTessellator::_occlusion(BlockTessellator *this, const BlockPos *a2)
{
  int v7; // r0@1
  int result; // r0@5
  unsigned __int8 v9; // [sp+4h] [bp-Ch]@1

  BlockSource::getBlockID((BlockSource *)&v9, *((const BlockPos **)this + 1), (int)a2);
  __asm { VMOV.F32        S0, #1.0 }
  _R1 = &Block::mTranslucency[v9];
  __asm { VMOV.F32        S4, S0 }
  v7 = Block::mLightEmission[v9];
  __asm
  {
    VLDR            S2, [R1]
    VCMPE.F32       S2, #0.0
  }
  if ( _ZF )
    __asm { VMOVEQ.F32      S4, S2 }
  __asm { VMRS            APSR_nzcv, FPSCR }
  if ( !_ZF )
    __asm { VMOVNE.F32      S0, S4 }
  __asm { VMOV            R0, S0 }
  return result;
}


signed int __fastcall BlockTessellator::tessellateChorusPlantInWorld(BlockTessellator *this, Tessellator *a2, const ChorusPlantBlock *a3, const BlockPos *a4, int a5)
{
  const BlockPos *v5; // r4@1
  ChorusPlantBlock *v6; // r5@1
  BlockTessellator *v7; // r7@1
  int v8; // r0@1
  int v9; // r2@1
  int v10; // r3@1
  Tessellator *v11; // r11@1
  BlockSource *v12; // r1@1
  int v13; // r2@1
  int v14; // r3@1
  BlockSource *v15; // r1@1
  int v16; // r2@1
  int v17; // r3@1
  BlockSource *v18; // r1@1
  signed int v19; // r9@1
  int v20; // r2@1
  int v21; // r3@1
  BlockSource *v22; // r1@1
  signed int v23; // r8@1
  int v24; // r2@1
  int v25; // r3@1
  BlockSource *v26; // r1@1
  BlockSource *v27; // r1@1
  int v28; // r2@1
  int v29; // r3@1
  int v30; // r10@1
  signed int v31; // r9@4
  char *v32; // r2@12
  int *v33; // r1@12
  AABB *v34; // r0@12
  char *v35; // r1@21
  char *v36; // r2@21
  AABB *v37; // r0@21
  bool v38; // zf@23
  int *v39; // r1@32
  int *v40; // r2@32
  AABB *v41; // r0@32
  int *v42; // r2@41
  AABB *v43; // r0@41
  int *v44; // r1@41
  char *v45; // r2@49
  AABB *v46; // r0@49
  int *v47; // r1@49
  signed int v49; // [sp+4h] [bp-244h]@1
  signed int v50; // [sp+8h] [bp-240h]@1
  signed int v51; // [sp+Ch] [bp-23Ch]@1
  signed int v52; // [sp+10h] [bp-238h]@1
  int v53; // [sp+14h] [bp-234h]@57
  signed int v54; // [sp+18h] [bp-230h]@57
  int v55; // [sp+1Ch] [bp-22Ch]@57
  int v56; // [sp+20h] [bp-228h]@57
  signed int v57; // [sp+24h] [bp-224h]@57
  int v58; // [sp+28h] [bp-220h]@57
  int v59; // [sp+2Ch] [bp-21Ch]@56
  signed int v60; // [sp+30h] [bp-218h]@56
  signed int v61; // [sp+34h] [bp-214h]@56
  int v62; // [sp+38h] [bp-210h]@56
  signed int v63; // [sp+3Ch] [bp-20Ch]@56
  signed int v64; // [sp+40h] [bp-208h]@56
  char v65; // [sp+44h] [bp-204h]@53
  signed int v66; // [sp+48h] [bp-200h]@53
  int v67; // [sp+4Ch] [bp-1FCh]@53
  int v68; // [sp+50h] [bp-1F8h]@53
  signed int v69; // [sp+54h] [bp-1F4h]@53
  signed int v70; // [sp+58h] [bp-1F0h]@53
  char v71; // [sp+5Ch] [bp-1ECh]@49
  signed int v72; // [sp+60h] [bp-1E8h]@49
  int v73; // [sp+64h] [bp-1E4h]@49
  int v74; // [sp+68h] [bp-1E0h]@49
  int v75; // [sp+6Ch] [bp-1DCh]@49
  signed int v76; // [sp+70h] [bp-1D8h]@49
  int v77; // [sp+74h] [bp-1D4h]@46
  signed int v78; // [sp+78h] [bp-1D0h]@46
  signed int v79; // [sp+7Ch] [bp-1CCh]@46
  int v80; // [sp+80h] [bp-1C8h]@46
  signed int v81; // [sp+84h] [bp-1C4h]@46
  signed int v82; // [sp+88h] [bp-1C0h]@46
  int v83; // [sp+8Ch] [bp-1BCh]@43
  signed __int64 v84; // [sp+90h] [bp-1B8h]@43
  int v85; // [sp+98h] [bp-1B0h]@43
  signed int v86; // [sp+9Ch] [bp-1ACh]@43
  signed int v87; // [sp+A0h] [bp-1A8h]@43
  int v88; // [sp+A4h] [bp-1A4h]@41
  signed __int64 v89; // [sp+A8h] [bp-1A0h]@41
  int v90; // [sp+B0h] [bp-198h]@41
  signed int v91; // [sp+B4h] [bp-194h]@41
  signed int v92; // [sp+B8h] [bp-190h]@41
  int v93; // [sp+BCh] [bp-18Ch]@38
  signed int v94; // [sp+C0h] [bp-188h]@38
  signed int v95; // [sp+C4h] [bp-184h]@38
  int v96; // [sp+C8h] [bp-180h]@38
  signed int v97; // [sp+CCh] [bp-17Ch]@38
  signed int v98; // [sp+D0h] [bp-178h]@38
  int v99; // [sp+D4h] [bp-174h]@36
  signed int v100; // [sp+D8h] [bp-170h]@36
  signed int v101; // [sp+DCh] [bp-16Ch]@36
  int v102; // [sp+E0h] [bp-168h]@36
  signed int v103; // [sp+E4h] [bp-164h]@36
  signed int v104; // [sp+E8h] [bp-160h]@36
  int v105; // [sp+ECh] [bp-15Ch]@32
  signed int v106; // [sp+F0h] [bp-158h]@32
  signed int v107; // [sp+F4h] [bp-154h]@32
  int v108; // [sp+F8h] [bp-150h]@32
  signed int v109; // [sp+FCh] [bp-14Ch]@32
  signed int v110; // [sp+100h] [bp-148h]@32
  int v111; // [sp+104h] [bp-144h]@29
  signed int v112; // [sp+108h] [bp-140h]@29
  int v113; // [sp+10Ch] [bp-13Ch]@29
  int v114; // [sp+110h] [bp-138h]@29
  signed int v115; // [sp+114h] [bp-134h]@29
  int v116; // [sp+118h] [bp-130h]@29
  char v117; // [sp+11Ch] [bp-12Ch]@27
  signed int v118; // [sp+120h] [bp-128h]@27
  int v119; // [sp+124h] [bp-124h]@27
  char v120; // [sp+128h] [bp-120h]@27
  signed int v121; // [sp+12Ch] [bp-11Ch]@27
  int v122; // [sp+130h] [bp-118h]@27
  char v123; // [sp+134h] [bp-114h]@21
  signed int v124; // [sp+138h] [bp-110h]@21
  int v125; // [sp+13Ch] [bp-10Ch]@21
  char v126; // [sp+140h] [bp-108h]@21
  signed int v127; // [sp+144h] [bp-104h]@21
  int v128; // [sp+148h] [bp-100h]@21
  int v129; // [sp+14Ch] [bp-FCh]@18
  signed int v130; // [sp+150h] [bp-F8h]@18
  signed int v131; // [sp+154h] [bp-F4h]@18
  int v132; // [sp+158h] [bp-F0h]@18
  signed int v133; // [sp+15Ch] [bp-ECh]@18
  signed int v134; // [sp+160h] [bp-E8h]@18
  char v135; // [sp+164h] [bp-E4h]@16
  signed int v136; // [sp+168h] [bp-E0h]@16
  int v137; // [sp+16Ch] [bp-DCh]@16
  int v138; // [sp+170h] [bp-D8h]@16
  signed int v139; // [sp+174h] [bp-D4h]@16
  signed int v140; // [sp+178h] [bp-D0h]@16
  char v141; // [sp+17Ch] [bp-CCh]@12
  signed int v142; // [sp+180h] [bp-C8h]@12
  int v143; // [sp+184h] [bp-C4h]@12
  int v144; // [sp+188h] [bp-C0h]@12
  signed int v145; // [sp+18Ch] [bp-BCh]@12
  signed int v146; // [sp+190h] [bp-B8h]@12
  int v147; // [sp+194h] [bp-B4h]@9
  signed int v148; // [sp+198h] [bp-B0h]@9
  int v149; // [sp+19Ch] [bp-ACh]@9
  int v150; // [sp+1A0h] [bp-A8h]@9
  signed int v151; // [sp+1A4h] [bp-A4h]@9
  int v152; // [sp+1A8h] [bp-A0h]@9
  int v153; // [sp+1ACh] [bp-9Ch]@8
  signed int v154; // [sp+1B0h] [bp-98h]@8
  int v155; // [sp+1B4h] [bp-94h]@8
  int v156; // [sp+1B8h] [bp-90h]@8
  signed int v157; // [sp+1BCh] [bp-8Ch]@8
  int v158; // [sp+1C0h] [bp-88h]@8
  int v159; // [sp+1C4h] [bp-84h]@4
  signed int v160; // [sp+1C8h] [bp-80h]@4
  int v161; // [sp+1CCh] [bp-7Ch]@4
  int v162; // [sp+1D0h] [bp-78h]@4
  signed int v163; // [sp+1D4h] [bp-74h]@4
  int v164; // [sp+1D8h] [bp-70h]@4
  int v165; // [sp+1DCh] [bp-6Ch]@1
  int v166; // [sp+1E0h] [bp-68h]@1
  int v167; // [sp+1E4h] [bp-64h]@1
  int v168; // [sp+1E8h] [bp-60h]@1
  int v169; // [sp+1ECh] [bp-5Ch]@1
  int v170; // [sp+1F0h] [bp-58h]@1
  int v171; // [sp+1F4h] [bp-54h]@1
  int v172; // [sp+1F8h] [bp-50h]@1
  int v173; // [sp+1FCh] [bp-4Ch]@1
  int v174; // [sp+200h] [bp-48h]@1
  int v175; // [sp+204h] [bp-44h]@1
  int v176; // [sp+208h] [bp-40h]@1
  int v177; // [sp+20Ch] [bp-3Ch]@1
  int v178; // [sp+210h] [bp-38h]@1
  int v179; // [sp+214h] [bp-34h]@1
  int v180; // [sp+218h] [bp-30h]@1
  int v181; // [sp+21Ch] [bp-2Ch]@1
  int v182; // [sp+220h] [bp-28h]@1

  v5 = a4;
  v6 = a3;
  v7 = this;
  v8 = *(_DWORD *)a4;
  v9 = *((_DWORD *)a4 + 1);
  v10 = *((_DWORD *)a4 + 2);
  v11 = a2;
  v12 = (BlockSource *)*((_DWORD *)v7 + 1);
  v180 = v8;
  v181 = v9 + 1;
  v182 = v10;
  v51 = ChorusPlantBlock::connectsTo(v6, v12, v5, (const BlockPos *)&v180);
  v13 = *((_DWORD *)v5 + 1);
  v14 = *((_DWORD *)v5 + 2);
  v15 = (BlockSource *)*((_DWORD *)v7 + 1);
  v177 = *(_DWORD *)v5;
  v178 = v13 - 1;
  v179 = v14;
  v52 = ChorusPlantBlock::connectsTo(v6, v15, v5, (const BlockPos *)&v177);
  v16 = *((_DWORD *)v5 + 1);
  v17 = *((_DWORD *)v5 + 2);
  v18 = (BlockSource *)*((_DWORD *)v7 + 1);
  v174 = *(_DWORD *)v5;
  v175 = v16;
  v176 = v17 - 1;
  v19 = ChorusPlantBlock::connectsTo(v6, v18, v5, (const BlockPos *)&v174);
  v20 = *((_DWORD *)v5 + 1);
  v21 = *((_DWORD *)v5 + 2);
  v22 = (BlockSource *)*((_DWORD *)v7 + 1);
  v171 = *(_DWORD *)v5 + 1;
  v172 = v20;
  v173 = v21;
  v23 = ChorusPlantBlock::connectsTo(v6, v22, v5, (const BlockPos *)&v171);
  v24 = *((_DWORD *)v5 + 1);
  v25 = *((_DWORD *)v5 + 2);
  v26 = (BlockSource *)*((_DWORD *)v7 + 1);
  v168 = *(_DWORD *)v5;
  v169 = v24;
  v170 = v25 + 1;
  v49 = ChorusPlantBlock::connectsTo(v6, v26, v5, (const BlockPos *)&v168);
  v27 = (BlockSource *)*((_DWORD *)v7 + 1);
  v28 = *((_DWORD *)v5 + 1);
  v29 = *((_DWORD *)v5 + 2);
  v165 = *(_DWORD *)v5 - 1;
  v166 = v28;
  v167 = v29;
  v50 = ChorusPlantBlock::connectsTo(v6, v27, v5, (const BlockPos *)&v165);
  v30 = (*(_DWORD *)v5 + *((_DWORD *)v5 + 1) + *((_DWORD *)v5 + 2)) % 4;
  if ( v30 < 0 )
    v30 = -v30;
  if ( v19 == 1 )
  {
    v31 = 0;
    v162 = 1048576000;
    v163 = 1048576000;
    v164 = 0;
    v159 = 1061158912;
    v160 = 1061158912;
    v161 = 1048576000;
    AABB::set((BlockTessellator *)((char *)v7 + 724), (const Vec3 *)&v162, (const Vec3 *)&v159);
    BlockTessellator::tessellateBlockInWorld(v7, v11, v6, v5, a5);
    goto LABEL_11;
  }
  if ( v30 == 3 )
    goto LABEL_8;
  if ( v30 == 2 )
    v150 = 1050673152;
    v151 = 1050673152;
    v152 = 1040187392;
    v147 = 1060110336;
    v148 = 1060110336;
    v149 = 1048576000;
    AABB::set((BlockTessellator *)((char *)v7 + 724), (const Vec3 *)&v150, (const Vec3 *)&v147);
  else if ( v30 == 1 )
LABEL_8:
    v156 = 1048576000;
    v157 = 1048576000;
    v158 = 1044381696;
    v153 = 1061158912;
    v154 = 1061158912;
    v155 = 1048576000;
    AABB::set((BlockTessellator *)((char *)v7 + 724), (const Vec3 *)&v156, (const Vec3 *)&v153);
  v31 = 1;
LABEL_11:
  if ( v23 == 1 )
    v144 = 1061158912;
    v32 = &v141;
    v145 = 1048576000;
    v146 = 1048576000;
    *(_DWORD *)&v141 = 1065353216;
    v142 = 1061158912;
    v33 = &v144;
    v143 = 1061158912;
    v34 = (BlockTessellator *)((char *)v7 + 724);
LABEL_17:
    AABB::set(v34, (const Vec3 *)v33, (const Vec3 *)v32);
    goto LABEL_20;
LABEL_16:
    v138 = 1061158912;
    v32 = &v135;
    v139 = 1048576000;
    v140 = 1048576000;
    *(_DWORD *)&v135 = 1062207488;
    v136 = 1061158912;
    v33 = &v138;
    v137 = 1061158912;
    goto LABEL_17;
  if ( v30 == 1 )
    v132 = 1061158912;
    v133 = 1050673152;
    v134 = 1050673152;
    v129 = 1063256064;
    v130 = 1060110336;
    v131 = 1060110336;
    AABB::set((BlockTessellator *)((char *)v7 + 724), (const Vec3 *)&v132, (const Vec3 *)&v129);
  else if ( !v30 )
    goto LABEL_16;
LABEL_20:
  if ( v49 == 1 )
    v35 = &v126;
    *(_DWORD *)&v126 = 1048576000;
    v127 = 1048576000;
    v128 = 1061158912;
    v36 = &v123;
    *(_DWORD *)&v123 = 1061158912;
    v124 = 1061158912;
    v125 = 1065353216;
    v37 = (BlockTessellator *)((char *)v7 + 724);
LABEL_28:
    AABB::set(v37, (const Vec3 *)v35, (const Vec3 *)v36);
    goto LABEL_31;
  if ( v30 )
    v38 = v30 == 3;
    if ( v30 != 3 )
      v38 = v30 == 1;
    if ( v38 )
    {
      v35 = &v120;
      *(_DWORD *)&v120 = 1048576000;
      v121 = 1048576000;
      v122 = 1061158912;
      v36 = &v117;
      *(_DWORD *)&v117 = 1061158912;
      v118 = 1061158912;
      v119 = 1062207488;
      v37 = (BlockTessellator *)((char *)v7 + 724);
      goto LABEL_28;
    }
  else
    v114 = 1050673152;
    v115 = 1050673152;
    v116 = 1061158912;
    v111 = 1060110336;
    v112 = 1060110336;
    v113 = 1063256064;
    AABB::set((BlockTessellator *)((char *)v7 + 724), (const Vec3 *)&v114, (const Vec3 *)&v111);
LABEL_31:
  if ( v50 == 1 )
    v39 = &v108;
    v108 = 0;
    v109 = 1048576000;
    v110 = 1048576000;
    v40 = &v105;
    v105 = 1048576000;
    v106 = 1061158912;
    v107 = 1061158912;
    v41 = (BlockTessellator *)((char *)v7 + 724);
LABEL_37:
    AABB::set(v41, (const Vec3 *)v39, (const Vec3 *)v40);
    goto LABEL_40;
  if ( !v30 )
LABEL_36:
    v39 = &v102;
    v102 = 1044381696;
    v103 = 1048576000;
    v104 = 1048576000;
    v40 = &v99;
    v99 = 1048576000;
    v100 = 1061158912;
    v101 = 1061158912;
    goto LABEL_37;
    v96 = 1040187392;
    v97 = 1050673152;
    v98 = 1050673152;
    v93 = 1048576000;
    v94 = 1060110336;
    v95 = 1060110336;
    AABB::set((BlockTessellator *)((char *)v7 + 724), (const Vec3 *)&v96, (const Vec3 *)&v93);
  else if ( v30 == 2 )
    goto LABEL_36;
LABEL_40:
  if ( v51 == 1 )
    v90 = 1048576000;
    v42 = &v88;
    v91 = 1061158912;
    v92 = 1048576000;
    v88 = 1061158912;
    v89 = 4557642823964295168LL;
    v43 = (BlockTessellator *)((char *)v7 + 724);
    v44 = &v90;
LABEL_44:
    AABB::set(v43, (const Vec3 *)v44, (const Vec3 *)v42);
    goto LABEL_48;
  if ( (unsigned int)(v30 - 1) < 2 )
    v85 = 1048576000;
    v42 = &v83;
    v86 = 1061158912;
    v87 = 1048576000;
    v83 = 1061158912;
    v84 = 4557642823961149440LL;
    v44 = &v85;
    goto LABEL_44;
    v80 = 1050673152;
    v81 = 1061158912;
    v82 = 1050673152;
    v77 = 1060110336;
    v78 = 1063256064;
    v79 = 1060110336;
    AABB::set((BlockTessellator *)((char *)v7 + 724), (const Vec3 *)&v80, (const Vec3 *)&v77);
LABEL_48:
  if ( v52 == 1 )
    v74 = 1048576000;
    v45 = &v71;
    v75 = 0;
    v76 = 1048576000;
    *(_DWORD *)&v71 = 1061158912;
    v72 = 1048576000;
    v46 = (BlockTessellator *)((char *)v7 + 724);
    v73 = 1061158912;
    v47 = &v74;
    goto LABEL_54;
LABEL_53:
    v68 = 1048576000;
    v45 = &v65;
    v69 = 1044381696;
    v70 = 1048576000;
    *(_DWORD *)&v65 = 1061158912;
    v66 = 1048576000;
    v67 = 1061158912;
    v47 = &v68;
LABEL_54:
    AABB::set(v46, (const Vec3 *)v47, (const Vec3 *)v45);
    if ( v31 != 1 )
      return 1;
    goto LABEL_57;
    v62 = 1050673152;
    v63 = 1040187392;
    v64 = 1050673152;
    v59 = 1060110336;
    v60 = 1048576000;
    v61 = 1060110336;
    AABB::set((BlockTessellator *)((char *)v7 + 724), (const Vec3 *)&v62, (const Vec3 *)&v59);
    goto LABEL_53;
LABEL_57:
  v56 = 1048576000;
  v57 = 1048576000;
  v58 = 1048576000;
  v53 = 1061158912;
  v54 = 1061158912;
  v55 = 1061158912;
  AABB::set((BlockTessellator *)((char *)v7 + 724), (const Vec3 *)&v56, (const Vec3 *)&v53);
  BlockTessellator::tessellateBlockInWorld(v7, v11, v6, v5, a5);
  return 1;
}


signed int __fastcall BlockTessellator::tessellateBrewingStandInWorld(BlockTessellator *this, Tessellator *a2, const BrewingStandBlock *a3, const BlockPos *a4, int a5)
{
  Tessellator *v5; // r9@1
  BlockTessellator *v6; // r11@1
  __int64 v7; // r0@1
  const BrewingStandBlock *v8; // r4@1
  int v10; // r1@1
  int v11; // r8@1
  BlockGraphics *v12; // r5@1
  int v13; // r1@3
  int v14; // r3@3
  int v15; // r4@3
  int v16; // r5@3
  int v17; // r6@3
  int v18; // r7@3
  __int64 v19; // r0@3
  int v20; // r4@3
  int v28; // r0@6
  float v29; // r11@6
  float v36; // ST04_4@8
  float v44; // ST00_4@8
  float v45; // ST04_4@8
  float v48; // ST00_4@8
  float v49; // ST04_4@8
  float v52; // ST00_4@8
  float v53; // ST04_4@8
  float v55; // r3@8
  float v56; // r1@8
  float v58; // ST00_4@8
  float v59; // ST04_4@8
  float v62; // ST04_4@8
  float v65; // ST04_4@8
  float v67; // [sp+4h] [bp-84h]@3
  BlockGraphics *v68; // [sp+Ch] [bp-7Ch]@3
  int v69; // [sp+10h] [bp-78h]@1
  AABB *v70; // [sp+14h] [bp-74h]@1
  Block *v71; // [sp+18h] [bp-70h]@1
  Block *v72; // [sp+18h] [bp-70h]@5
  TextureUVCoordinateSet *v73; // [sp+1Ch] [bp-6Ch]@5

  v5 = a2;
  v6 = this;
  HIDWORD(v7) = 1054867456;
  v8 = a3;
  v71 = a3;
  LODWORD(v7) = (char *)this + 724;
  _R10 = a4;
  v70 = (BlockTessellator *)((char *)v6 + 724);
  AABB::set(v7, 4530621225134718976LL, 0.5625, 0.875, 0.5625);
  BlockTessellator::tessellateBlockInWorld(v6, v5, v8, _R10, a5);
  v10 = *((_BYTE *)v8 + 4);
  v11 = (int)v6 + 8;
  v69 = *((_BYTE *)v6 + 40);
  v12 = (BlockGraphics *)BlockGraphics::mBlocks[v10];
  if ( !*((_BYTE *)v6 + 40) )
    v11 = BlockGraphics::getTexture((BlockGraphics *)BlockGraphics::mBlocks[v10], _R10, 0, 0);
  v68 = v12;
  v13 = (int)v6 + 8;
  v14 = *(_DWORD *)(v11 + 4);
  v15 = *(_DWORD *)(v11 + 8);
  v16 = *(_DWORD *)(v11 + 12);
  v17 = *(_DWORD *)(v11 + 16);
  v18 = *(_DWORD *)(v11 + 20);
  *(_DWORD *)v13 = *(_DWORD *)v11;
  *(_DWORD *)(v13 + 4) = v14;
  *(_DWORD *)(v13 + 8) = v15;
  *(_DWORD *)(v13 + 12) = v16;
  *(_DWORD *)(v13 + 16) = v17;
  *(_DWORD *)(v13 + 20) = v18;
  EntityInteraction::setInteractText((int *)v6 + 8, (int *)(v11 + 24));
  *((_DWORD *)v6 + 9) = *(_DWORD *)(v11 + 28);
  *((_BYTE *)v6 + 40) = 1;
  HIDWORD(v19) = 1058013184;
  LODWORD(v19) = (char *)v6 + 724;
  AABB::set(v19, 4512606826625236992LL, 0.9375, 0.125, 0.6875);
  v20 = a5;
  BlockTessellator::tessellateBlockInWorld(v6, v5, v71, _R10, a5);
  AABB::set(__PAIR__(1040187392, (unsigned int)v70), 4431542033332568064LL, 0.5, 0.125, 0.4375);
  _R7 = (BlockTessellator *)((char *)v6 + 8);
  AABB::set(__PAIR__(1040187392, (unsigned int)v70), 4544132024016830464LL, 0.5, 0.125, 0.9375);
  *((_BYTE *)v6 + 40) = v69;
  if ( !v69 )
    _R7 = (TextureUVCoordinateSet *)BlockGraphics::getTexture(v68, _R10, 1, 0);
  __asm
  {
    VMOV.F32        S22, #0.5
    VMOV.F32        S24, #1.0
    VLDR            S16, [R7,#8]
    VLDR            S18, [R7,#0x10]
    VLDR            S26, =0.66667
  }
  _R8 = 0;
  _R0 = &mce::Math::PI;
  v73 = _R7;
  v72 = (TextureUVCoordinateSet *)((char *)_R7 + 4);
  __asm { VLDR            S20, [R0] }
  do
    v28 = TextureUVCoordinateSet::offsetWidth(_R7, 0.5, 0.0);
    __asm { VLDR            S0, [R10] }
    v29 = *(float *)&v28;
    __asm
    {
      VLDR            S2, [R10,#4]
      VLDR            S4, [R10,#8]
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
    }
    _R0 = (int)v72;
    if ( !((1 << _R8) & v20) )
      _R0 = (int)_R7 + 12;
      VLDR            S28, [R0]
      VADD.F32        S30, S0, S22
      VSTR            S16, [SP,#0x88+var_84]
      VADD.F32        S0, S2, S24
      VADD.F32        S17, S4, S22
      VMOV            R6, S30
      VMOV            R2, S0
      VMOV            R5, S17
    Tessellator::vertexUV(v5, _R6, _R2, _R5, v29, v67);
    _R0 = *((_DWORD *)_R10 + 1);
      VMOV            S0, R0
      VSTR            S18, [SP,#0x88+var_84]
    Tessellator::vertexUV(v5, _R6, _R2, _R5, v29, v36);
      VMOV            S0, R8
      VMUL.F32        S0, S0, S26
      VADD.F32        S0, S0, S22
      VMUL.F32        S0, S0, S20
      VMOV            R4, S0
    _R0 = sinf(_R4);
    __asm { VMOV            S19, R0 }
    _R0 = cosf(_R4);
    __asm { VMOV            S0, R0 }
      VMUL.F32        S2, S19, S22
      VMUL.F32        S0, S0, S22
      VMOV            S4, R0
      VSTR            S28, [SP,#0x88+var_88]
      VADD.F32        S2, S30, S2
      VADD.F32        S0, S17, S0
      VMOV            R2, S4
      VMOV            R7, S2
    Tessellator::vertexUV(v5, _R7, _R2, _R4, v44, v45);
      VADD.F32        S0, S0, S24
    Tessellator::vertexUV(v5, _R7, _R2, _R4, v48, v49);
    Tessellator::vertexUV(v5, _R7, _R2, _R4, v52, v53);
    v55 = _R4;
    v56 = _R7;
    v20 = a5;
    _R7 = v73;
    __asm { VMOV            R2, S0 }
    Tessellator::vertexUV(v5, v56, _R2, v55, v58, v59);
    Tessellator::vertexUV(v5, _R6, _R2, _R5, v29, v62);
    Tessellator::vertexUV(v5, _R6, _R2, _R5, v29, v65);
    ++_R8;
  while ( _R8 != 3 );
  return 1;
}


int __fastcall BlockTessellator::tessellateBlockInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  const Block *v5; // r4@1
  BlockTessellator *v6; // r6@1
  Tessellator *v7; // r9@1
  const BlockPos *v8; // r7@1
  BlockOccluder *v17; // r0@2
  int v18; // r1@4
  int v20; // r0@10
  int result; // r0@7
  __int64 v23; // [sp+8h] [bp-50h]@13
  int v24; // [sp+10h] [bp-48h]@13
  int v25; // [sp+14h] [bp-44h]@13
  int v26; // [sp+18h] [bp-40h]@7
  int v27; // [sp+1Ch] [bp-3Ch]@7
  int v28; // [sp+20h] [bp-38h]@7
  char v29; // [sp+24h] [bp-34h]@2
  float v30; // [sp+2Ch] [bp-2Ch]@7

  v5 = a3;
  v6 = this;
  v7 = a2;
  v8 = a4;
  _R0 = (*(int (__fastcall **)(const Block *, _DWORD, const BlockPos *, int))(*(_DWORD *)a3 + 392))(
          a3,
          *((_DWORD *)this + 1),
          a4,
          a5);
  _R1 = (unsigned __int16)_R0 >> 8;
  _R2 = (_R0 >> 16) & 0xFF;
  __asm
  {
    VLDR            S8, =0.0039216
    VMOV            S0, R2
  }
  _R2 = (unsigned __int8)_R0;
  _R0 >>= 24;
    VMOV            S2, R1
    VMOV            S4, R2
    VMOV            S6, R0
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VCVT.F32.S32    S6, S6
    VMUL.F32        S0, S0, S8
    VMUL.F32        S2, S2, S8
    VMUL.F32        S4, S4, S8
    VMUL.F32        S6, S6, S8
    VSTR            S0, [SP,#0x58+var_2C]
    VSTR            S2, [SP,#0x58+var_28]
    VSTR            S4, [SP,#0x58+var_24]
    VSTR            S6, [SP,#0x58+var_20]
  if ( *((_BYTE *)v6 + 41) )
    v17 = BlockOccluder::BlockOccluder(
            (BlockOccluder *)&v29,
            (int)v6 + 812,
            v5,
            v8,
            (BlockTessellator *)((char *)v6 + 724),
            (int)&Facing::ALL_FACES,
            *((_BYTE *)v6 + 48));
    if ( !*((_BYTE *)v6 + 51) )
      return BlockTessellator::tessellateBlockInWorldFlat(
               v6,
               v7,
               v5,
               v8,
               a5,
               (const Color *)&v30,
               v23,
               *(__int64 *)&v24);
    if ( *((_BYTE *)v6 + 48) )
    v18 = *((_BYTE *)v5 + 4);
    if ( Block::mLightEmission[v18] )
    __asm { VLDR            S0, =0.9 }
    _R1 = &Block::mTranslucency[v18];
    __asm
    {
      VLDR            S2, [R1]
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !(_NF ^ _VF) )
    v26 = *(_DWORD *)v8;
    v27 = *((_DWORD *)v8 + 1);
    v28 = *((_DWORD *)v8 + 2);
    result = BlockTessellator::tessellateBlockInWorldWithAmbienceOcclusion(
               (int)v6,
               (int)v7,
               (int)&v26,
               v17);
  else
    v20 = *((_BYTE *)v5 + 4);
    if ( Block::mLightEmission[v20] )
    _R0 = &Block::mTranslucency[v20];
      VLDR            S2, [R0]
    HIDWORD(v23) = *(_DWORD *)v8;
    v24 = *((_DWORD *)v8 + 1);
    v25 = *((_DWORD *)v8 + 2);
               (int)&v23 + 4,
               0);
  return result;
}


signed int __fastcall BlockTessellator::tessellateEndRodNorth(BlockTessellator *this, Tessellator *a2, const BlockPos *a3, const TextureUVCoordinateSet *a4)
{
  const BlockPos *v4; // r7@1
  TextureUVCoordinateSet *v5; // r10@1
  Tessellator *v6; // ST34_4@1
  const TextureUVCoordinateSet *v7; // ST2C_4@1
  const BlockPos *v8; // ST24_4@1
  BlockTessellator *v9; // ST20_4@1
  AABB *v10; // ST28_4@1
  int v15; // r0@1
  float v16; // r9@1
  float v17; // ST38_4@1
  int v18; // r0@1
  float v19; // r4@1
  float v20; // ST18_4@1
  float v21; // ST1C_4@1
  float v22; // ST14_4@1
  int v23; // r0@1
  float v24; // r11@1
  float v25; // ST10_4@1
  int v26; // r0@1
  float v27; // r5@1
  float v28; // ST0C_4@1
  float v29; // ST40_4@1
  int v30; // r0@1
  float v31; // ST00_4@1
  float v32; // r8@1
  float v36; // ST44_4@1
  float v37; // ST3C_4@1
  float v38; // ST4C_4@1
  float v39; // r6@1
  float v41; // ST48_4@1
  float v42; // r4@1
  float v44; // ST30_4@1
  TextureUVCoordinateSet *v46; // r7@1
  float v47; // ST40_4@1
  float v48; // ST38_4@1
  int v49; // r0@1
  float v50; // r8@1
  float v51; // ST10_4@1
  int v52; // r0@1
  float v53; // r11@1
  float v54; // ST0C_4@1
  int v55; // r10@1
  float v56; // ST08_4@1
  int v57; // r0@1
  float v58; // r6@1
  float v59; // ST14_4@1
  float v60; // ST18_4@1
  float v61; // ST40_4@1
  float v62; // ST38_4@1
  int v63; // r0@1
  float v64; // r11@1
  float v65; // ST18_4@1
  int v66; // r0@1
  float v67; // r6@1
  float v68; // ST14_4@1
  int v69; // r9@1
  int v70; // r0@1
  float v71; // r7@1
  float v72; // ST0C_4@1
  int v73; // r10@1
  float v74; // ST10_4@1
  int v76; // r0@1
  float v77; // r10@1
  float v78; // ST30_4@1
  int v79; // r0@1
  float v80; // r4@1
  float v81; // ST28_4@1
  float v82; // ST3C_4@1
  float v83; // ST20_4@1
  float v84; // ST40_4@1
  int v85; // r0@1
  float v86; // r8@1
  float v87; // ST1C_4@1
  int v88; // r0@1
  float v89; // r11@1
  float v90; // ST18_4@1
  int v91; // r0@1
  float v92; // r6@1
  float v93; // ST14_4@1
  float v94; // ST04_4@1
  float v98; // ST48_4@1
  float v99; // ST4C_4@1
  float v100; // ST44_4@1
  float v101; // r7@1
  float v102; // r4@1
  float v104; // ST24_4@1
  float v105; // ST04_4@1
  float v107; // ST38_4@1
  float v108; // r11@1
  float v110; // ST3C_4@1
  float v111; // r6@1
  float v112; // ST30_4@1
  float v113; // ST40_4@1
  int v114; // r0@1
  float v115; // r10@1
  float v116; // ST18_4@1
  int v117; // r0@1
  float v118; // r11@1
  float v119; // ST14_4@1
  float v120; // ST1C_4@1
  float v121; // ST10_4@1
  int v122; // r0@1
  float v123; // r4@1
  float v124; // ST20_4@1
  float v125; // ST28_4@1
  float v126; // ST40_4@1
  float v127; // ST30_4@1
  int v128; // r0@1
  float v129; // r7@1
  float v130; // ST20_4@1
  int v131; // r0@1
  float v132; // r6@1
  float v133; // ST1C_4@1
  float v134; // ST28_4@1
  int v135; // r0@1
  float v136; // r4@1
  float v137; // ST14_4@1
  float v138; // ST18_4@1
  int v139; // r5@1
  float v141; // [sp+50h] [bp-C8h]@1
  float v144; // [sp+5Ch] [bp-BCh]@1
  float v147; // [sp+68h] [bp-B0h]@1
  float v150; // [sp+74h] [bp-A4h]@1
  int v153; // [sp+80h] [bp-98h]@1
  signed int v154; // [sp+84h] [bp-94h]@1
  int v155; // [sp+88h] [bp-90h]@1
  int v156; // [sp+8Ch] [bp-8Ch]@1
  signed int v157; // [sp+90h] [bp-88h]@1
  int v158; // [sp+94h] [bp-84h]@1
  int v159; // [sp+98h] [bp-80h]@1
  signed int v160; // [sp+9Ch] [bp-7Ch]@1
  int v161; // [sp+A0h] [bp-78h]@1
  int v162; // [sp+A4h] [bp-74h]@1
  signed int v163; // [sp+A8h] [bp-70h]@1
  int v164; // [sp+ACh] [bp-6Ch]@1

  v4 = a3;
  v5 = a4;
  v6 = a2;
  v7 = a4;
  v8 = a3;
  v9 = this;
  v162 = 1054867456;
  v163 = 1054867456;
  v164 = 1031798784;
  v159 = 1058013184;
  v160 = 1058013184;
  v161 = 1065353216;
  v156 = 1052770304;
  v157 = 1052770304;
  v158 = 0;
  v153 = 1059061760;
  v154 = 1059061760;
  v155 = 1031798784;
  v10 = (BlockTessellator *)((char *)this + 724);
  AABB::set((BlockTessellator *)((char *)this + 724), (const Vec3 *)&v162, (const Vec3 *)&v159);
  Vec3::Vec3((int)&v150, (int)v4);
  __asm
  {
    VLDR            S20, [R6,#0x2D4]
    VLDR            S16, [R6,#0x2D8]
    VLDR            S24, [R6,#0x2DC]
    VLDR            S22, [SP,#0x118+var_A4]
    VLDR            S18, [SP,#0x118+var_A0]
    VLDR            S26, [SP,#0x118+var_9C]
  }
  Vec3::Vec3((int)&v147, (int)v4);
    VLDR            S28, [R6,#0x2E0]
    VLDR            S30, [R6,#0x2E4]
    VLDR            S17, [R6,#0x2E8]
    VLDR            S19, [SP,#0x118+var_B0]
    VLDR            S21, [SP,#0x118+var_AC]
    VLDR            S23, [SP,#0x118+var_A8]
  *(float *)&v15 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v5, 0.0, 0.0));
  v16 = *(float *)&v15;
  v17 = *(float *)&v15;
  *(float *)&v18 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v5, 0.0, 0.0));
  v19 = *(float *)&v18;
  v20 = *(float *)&v18;
  v21 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v5, 0.125, 0.0));
  v22 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v5, 0.0, 0.0));
  *(float *)&v23 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v5, 0.0, 0.0));
  v24 = *(float *)&v23;
  v25 = *(float *)&v23;
  *(float *)&v26 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v5, 0.9375, 0.0));
  v27 = *(float *)&v26;
  v28 = *(float *)&v26;
  v29 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v5, 0.125, 0.0));
  *(float *)&v30 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v5, 0.9375, 0.0));
  __asm { VADD.F32        S0, S28, S19 }
  v31 = v16;
    VADD.F32        S4, S17, S23
    VADD.F32        S2, S30, S21
  v32 = *(float *)&v30;
    VMOV            R7, S0
    VMOV            R9, S4
    VMOV            R2, S2
  v36 = _R7;
  v37 = _R9;
  v38 = _R2;
  v39 = _R2;
  Tessellator::vertexUV(v6, _R7, _R2, _R9, v31, v19);
    VADD.F32        S0, S24, S26
    VMOV            R3, S0
  v41 = _R3;
  v42 = _R3;
  Tessellator::vertexUV(v6, _R7, v39, _R3, v24, v27);
    VADD.F32        S0, S20, S22
  v44 = _R7;
  Tessellator::vertexUV(v6, _R7, v39, v42, v29, v32);
  Tessellator::vertexUV(v6, _R7, v39, _R9, v21, v22);
    VADD.F32        S0, S16, S18
    VMOV            R5, S0
  Tessellator::vertexUV(v6, _R7, _R5, _R9, v21, v22);
  Tessellator::vertexUV(v6, _R7, _R5, v41, v29, v32);
  Tessellator::vertexUV(v6, v36, _R5, v41, v25, v28);
  Tessellator::vertexUV(v6, v36, _R5, _R9, v17, v20);
  v46 = v5;
  v47 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v5, 0.125, 0.0));
  v48 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v5, 0.0, 0.0));
  *(float *)&v49 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v5, 0.25, 0.0));
  v50 = *(float *)&v49;
  v51 = *(float *)&v49;
  *(float *)&v52 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v5, 0.0, 0.0));
  v53 = *(float *)&v52;
  v54 = *(float *)&v52;
  v55 = TextureUVCoordinateSet::offsetWidth(v5, 0.125, 0.0);
  v56 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v46, 0.125, 0.0));
  *(float *)&v57 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v46, 0.25, 0.0));
  v58 = *(float *)&v57;
  v59 = *(float *)&v57;
  v60 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v46, 0.125, 0.0));
  Tessellator::vertexUV(v6, v44, v38, v41, v58, v60);
  Tessellator::vertexUV(v6, v36, v38, v41, v50, v53);
  Tessellator::vertexUV(v6, v36, _R5, v41, v47, v48);
  Tessellator::vertexUV(v6, v44, _R5, v41, *(float *)&v55, v56);
  Tessellator::vertexUV(v6, v44, v38, _R9, *(float *)&v55, v56);
  Tessellator::vertexUV(v6, v44, _R5, _R9, v47, v48);
  Tessellator::vertexUV(v6, v36, _R5, _R9, v51, v54);
  Tessellator::vertexUV(v6, v36, v38, _R9, v59, v60);
  v61 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v7, 0.0, 0.0));
  v62 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v7, 0.9375, 0.0));
  *(float *)&v63 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v7, 0.0, 0.0));
  v64 = *(float *)&v63;
  v65 = *(float *)&v63;
  *(float *)&v66 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v7, 0.0, 0.0));
  v67 = *(float *)&v66;
  v68 = *(float *)&v66;
  v69 = TextureUVCoordinateSet::offsetWidth(v7, 0.125, 0.0);
  *(float *)&v70 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v7, 0.9375, 0.0));
  v71 = *(float *)&v70;
  v72 = *(float *)&v70;
  v73 = TextureUVCoordinateSet::offsetWidth(v7, 0.125, 0.0);
  v74 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v7, 0.0, 0.0));
  Tessellator::vertexUV(v6, v44, v38, v37, v64, v67);
  Tessellator::vertexUV(v6, v44, v38, v41, v61, v62);
  Tessellator::vertexUV(v6, v44, _R5, v41, *(float *)&v69, v71);
  Tessellator::vertexUV(v6, v44, _R5, v37, *(float *)&v73, v74);
  Tessellator::vertexUV(v6, v36, _R5, v37, *(float *)&v73, v74);
  Tessellator::vertexUV(v6, v36, _R5, v41, *(float *)&v69, v72);
  Tessellator::vertexUV(v6, v36, v38, v41, v61, v62);
  Tessellator::vertexUV(v6, v36, v38, v37, v65, v68);
  AABB::set(v10, (const Vec3 *)&v156, (const Vec3 *)&v153);
  Vec3::Vec3((int)&v144, (int)v8);
  _R6 = v9;
    VLDR            S22, [SP,#0x118+var_BC]
    VLDR            S18, [SP,#0x118+var_B8]
    VLDR            S26, [SP,#0x118+var_B4]
  Vec3::Vec3((int)&v141, (int)v8);
    VLDR            S19, [SP,#0x118+var_C8]
    VLDR            S21, [SP,#0x118+var_C4]
    VLDR            S23, [SP,#0x118+var_C0]
  *(float *)&v76 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v7, 0.125, 0.0));
  v77 = *(float *)&v76;
  v78 = *(float *)&v76;
  *(float *)&v79 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v7, 0.375, 0.0));
  v80 = *(float *)&v79;
  v81 = *(float *)&v79;
  v82 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v7, 0.375, 0.0));
  v83 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v7, 0.375, 0.0));
  v84 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v7, 0.125, 0.0));
  *(float *)&v85 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v7, 0.4375, 0.0));
  v86 = *(float *)&v85;
  v87 = *(float *)&v85;
  *(float *)&v88 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v7, 0.375, 0.0));
  v89 = *(float *)&v88;
  v90 = *(float *)&v88;
  *(float *)&v91 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v7, 0.4375, 0.0));
  v92 = *(float *)&v91;
  __asm { VADD.F32        S2, S30, S21 }
  v93 = *(float *)&v91;
  __asm { VADD.F32        S4, S17, S23 }
  v94 = v80;
    VMOV            R1, S0
    VMOV            R3, S4
  v98 = _R1;
  v99 = _R2;
  v100 = _R3;
  v101 = _R1;
  v102 = _R2;
  Tessellator::vertexUV(v6, _R1, _R2, _R3, v77, v94);
    VMOV            R10, S0
  v104 = _R10;
  Tessellator::vertexUV(v6, v101, v102, _R10, v84, v86);
  __asm { VADD.F32        S0, S20, S22 }
  v105 = v92;
  __asm { VMOV            R6, S0 }
  v107 = _R6;
  Tessellator::vertexUV(v6, _R6, v102, _R10, v89, v105);
  v108 = v82;
  Tessellator::vertexUV(v6, _R6, v102, v100, v82, v83);
    VMOV            R4, S0
  v110 = _R4;
  Tessellator::vertexUV(v6, _R6, _R4, v100, v108, v83);
  Tessellator::vertexUV(v6, _R6, _R4, _R10, v90, v93);
  v111 = _R10;
  Tessellator::vertexUV(v6, v98, _R4, _R10, v84, v87);
  Tessellator::vertexUV(v6, v98, _R4, v100, v78, v81);
  v112 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v7, 0.125, 0.0));
  v113 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v7, 0.125, 0.0));
  *(float *)&v114 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v7, 0.375, 0.0));
  v115 = *(float *)&v114;
  v116 = *(float *)&v114;
  *(float *)&v117 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v7, 0.125, 0.0));
  v118 = *(float *)&v117;
  v119 = *(float *)&v117;
  v120 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v7, 0.125, 0.0));
  v121 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v7, 0.375, 0.0));
  *(float *)&v122 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v7, 0.375, 0.0));
  v123 = *(float *)&v122;
  v124 = *(float *)&v122;
  v125 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v7, 0.375, 0.0));
  Tessellator::vertexUV(v6, v107, v99, v111, v123, v125);
  Tessellator::vertexUV(v6, v98, v99, v111, v115, v118);
  Tessellator::vertexUV(v6, v98, v110, v111, v112, v113);
  Tessellator::vertexUV(v6, v107, v110, v111, v120, v121);
  Tessellator::vertexUV(v6, v107, v99, v100, v120, v121);
  Tessellator::vertexUV(v6, v107, v110, v100, v112, v113);
  Tessellator::vertexUV(v6, v98, v110, v100, v116, v119);
  Tessellator::vertexUV(v6, v98, v99, v100, v124, v125);
  v126 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v7, 0.125, 0.0));
  v127 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v7, 0.4375, 0.0));
  *(float *)&v128 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v7, 0.125, 0.0));
  v129 = *(float *)&v128;
  v130 = *(float *)&v128;
  *(float *)&v131 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v7, 0.375, 0.0));
  v132 = *(float *)&v131;
  v133 = *(float *)&v131;
  v134 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v7, 0.375, 0.0));
  *(float *)&v135 = COERCE_FLOAT(TextureUVCoordinateSet::offsetHeight(v7, 0.4375, 0.0));
  v136 = *(float *)&v135;
  v137 = *(float *)&v135;
  v138 = COERCE_FLOAT(TextureUVCoordinateSet::offsetWidth(v7, 0.375, 0.0));
  v139 = TextureUVCoordinateSet::offsetHeight(v7, 0.375, 0.0);
  Tessellator::vertexUV(v6, v107, v99, v100, v129, v132);
  Tessellator::vertexUV(v6, v107, v99, v104, v126, v127);
  Tessellator::vertexUV(v6, v107, v110, v104, v134, v136);
  Tessellator::vertexUV(v6, v107, v110, v100, v138, *(float *)&v139);
  Tessellator::vertexUV(v6, v98, v110, v100, v138, *(float *)&v139);
  Tessellator::vertexUV(v6, v98, v110, v104, v134, v137);
  Tessellator::vertexUV(v6, v98, v99, v104, v126, v127);
  return Tessellator::vertexUV(v6, v98, v99, v100, v130, v133);
}


int __fastcall BlockTessellator::tessellateInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5, int a6)
{
  BlockTessellator *v6; // r4@1
  unsigned int v7; // r8@1
  const BlockPos *v8; // r9@1
  const Block *v9; // r10@1
  Tessellator *v10; // r6@1
  int v11; // r0@2
  int v12; // r0@3
  int v15; // r0@6
  BlockTessellator *v20; // r0@10
  const Block *v21; // r2@10
  int v22; // r5@10
  const TextureUVCoordinateSet *v23; // r2@13
  signed int v24; // r0@17
  signed int v25; // r0@34
  unsigned __int64 *v26; // r0@43
  unsigned int v27; // r0@43
  int v28; // r0@48
  int v29; // r0@50
  BlockGraphics *v30; // r7@53
  int v31; // r0@53
  const TextureUVCoordinateSet *v32; // r0@53
  int v33; // r0@62
  const Vec3 *v35; // r1@65
  const Vec3 *v36; // r2@65
  unsigned __int64 *v38; // r0@73
  Tessellator *v39; // lr@73
  int v40; // r1@73
  char *v41; // r12@73
  int v42; // r2@73
  int v43; // r3@73
  int v44; // r5@73
  int v45; // r6@73
  int v46; // r7@73
  BlockGraphics *v47; // r5@76
  int v48; // r0@76
  signed int v49; // r0@90
  signed int v50; // r1@90
  Tessellator *v51; // r7@95
  int v52; // r0@98
  unsigned int v53; // r6@98
  const Block *v54; // r10@99
  int v56; // [sp+0h] [bp-70h]@0
  const Block *v57; // [sp+4h] [bp-6Ch]@0
  float v58; // [sp+8h] [bp-68h]@0
  int v59; // [sp+10h] [bp-60h]@19
  int v60; // [sp+14h] [bp-5Ch]@19
  int v61; // [sp+18h] [bp-58h]@19
  unsigned __int8 v62; // [sp+1Ch] [bp-54h]@5
  unsigned __int8 v63; // [sp+1Dh] [bp-53h]@5
  float v64; // [sp+20h] [bp-50h]@9
  float v65; // [sp+28h] [bp-48h]@52
  float v66; // [sp+2Ch] [bp-44h]@52
  int v67; // [sp+30h] [bp-40h]@52
  int v68; // [sp+34h] [bp-3Ch]@12
  int v69; // [sp+38h] [bp-38h]@52
  int v70; // [sp+3Ch] [bp-34h]@52

  v6 = this;
  v7 = a5;
  v8 = a4;
  v9 = a3;
  v10 = a2;
  if ( *((_BYTE *)this + 42) )
  {
    v56 = 0;
    v11 = (*(int (__fastcall **)(const Block *, _DWORD, const BlockPos *, char *))(*(_DWORD *)a3 + 416))(
            a3,
            *((_DWORD *)this + 1),
            a4,
            (char *)this + 724);
    *((_DWORD *)v6 + 181) = *(_DWORD *)v11;
    *((_DWORD *)v6 + 182) = *(_DWORD *)(v11 + 4);
    *((_DWORD *)v6 + 183) = *(_DWORD *)(v11 + 8);
    *((_DWORD *)v6 + 184) = *(_DWORD *)(v11 + 12);
    *((_DWORD *)v6 + 185) = *(_DWORD *)(v11 + 16);
    *((_DWORD *)v6 + 186) = *(_DWORD *)(v11 + 20);
    *((_BYTE *)v6 + 748) = *(_BYTE *)(v11 + 24);
    v7 = (*(int (__fastcall **)(const Block *, _DWORD, const BlockPos *, int))(*(_DWORD *)v9 + 300))(
           v9,
           *((_DWORD *)v6 + 1),
           v8,
           a5);
  }
  else
    v12 = (*(int (__fastcall **)(const Block *, int, char *, _DWORD))(*(_DWORD *)a3 + 420))(
            a5,
            (char *)this + 724,
            0);
    *((_DWORD *)v6 + 181) = *(_DWORD *)v12;
    *((_DWORD *)v6 + 182) = *(_DWORD *)(v12 + 4);
    *((_DWORD *)v6 + 183) = *(_DWORD *)(v12 + 8);
    *((_DWORD *)v6 + 184) = *(_DWORD *)(v12 + 12);
    *((_DWORD *)v6 + 185) = *(_DWORD *)(v12 + 16);
    *((_DWORD *)v6 + 186) = *(_DWORD *)(v12 + 20);
    *((_BYTE *)v6 + 748) = *(_BYTE *)(v12 + 24);
  if ( *((_BYTE *)v6 + 48) )
    _R1 = (unsigned __int8)Brightness::MAX;
    v62 = Brightness::MAX;
    v63 = Brightness::MAX;
    _R2 = (unsigned __int8)Brightness::MAX;
    BlockTessellatorCache::getLightColor((BlockTessellatorCache *)&v62, (BlockTessellator *)((char *)v6 + 812), (int)v8);
    _R1 = v62;
    _R2 = v63;
    v15 = *((_BYTE *)v6 + 48);
  __asm
    VMOV            S0, R2
    VLDR            S4, =0.0625
    VMOV            S2, R1
    VCVT.F32.U32    S0, S0
    VCVT.F32.U32    S2, S2
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S4
    VSTR            S0, [SP,#0x70+var_50]
    VSTR            S2, [SP,#0x70+var_4C]
  if ( _ZF )
    Tessellator::tex1((int)v10, (__int64 *)&v64);
  v20 = (BlockTessellator *)BlockGraphics::getBlockShape((BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v9 + 4)]);
  v22 = 0;
  if ( (unsigned int)v20 <= 0x58 )
    switch ( v20 )
    {
      case 0u:
      case 0x43u:
        goto LABEL_79;
      case 1u:
        BlockTessellator::_preparePolyCross((BlockTessellator *)&v68, v6, v10, v8, (int)v9);
        if ( *((_BYTE *)v6 + 40) )
        {
          v23 = (BlockTessellator *)((char *)v6 + 8);
        }
        else
          v47 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v9 + 4)];
          v48 = (*(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v9 + 424))(v9, v7);
          v23 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v47, v8, 0, v48);
        BlockTessellator::tessellateCrossTexture(v6, v10, v23, (const Vec3 *)&v68, a6, v9, v58);
        goto LABEL_94;
      case 2u:
        BlockTessellator::tessellateTorchInWorld(v6, v10, v9, v8, v7);
      case 3u:
        v59 = *(_DWORD *)v8;
        v60 = *((_DWORD *)v8 + 1);
        v61 = *((_DWORD *)v8 + 2);
        BlockTessellator::tessellateFireInWorld((int)v6, v10, (int)v9, (const BlockPos *)&v59);
      case 4u:
        v22 = BlockTessellator::tessellateLiquidInWorld(v6, v10, v9, v8, 0);
        break;
      case 5u:
        BlockTessellator::tessellateDustInWorld(v6, v10, v9, v8, v7);
      case 6u:
        BlockTessellator::tessellateRowInWorld(v6, v10, v9, v8, v7);
      case 7u:
        v22 = BlockTessellator::tessellateDoorInWorld(v6, v10, v9, v8, v7);
      case 8u:
        BlockTessellator::tessellateLadderInWorld(v6, v10, v9, v8, v7);
      case 9u:
        BlockTessellator::tessellateRailInWorld(v6, v10, v9, v8, v7);
      case 0xAu:
        BlockTessellator::tessellateStairsInWorld(v6, v10, v9, v8, v7);
      case 0xBu:
        BlockTessellator::tessellateFenceInWorld(v6, v10, v9, v8, v7);
      case 0xCu:
        BlockTessellator::tessellateLeverInWorld(v6, v10, v9, v8, v7);
      case 0xDu:
        BlockTessellator::tessellateCactusInWorld(v6, v10, v9, v8, v7);
      case 0xEu:
        v22 = BlockTessellator::tessellateBedInWorld(v6, v10, v9, v8, v7);
      case 0xFu:
        if ( v7 == 1 )
          v25 = 1;
        else if ( v7 == 3 )
          v25 = 2;
          if ( v7 != 2 )
            goto LABEL_85;
          v25 = 3;
        *((_DWORD *)v6 + 48) = v25;
        goto LABEL_85;
      default:
      case 0x12u:
        v22 = 1;
        BlockTessellator::tessellateDoubleThinFenceInWorld(v6, v10, v9, v8, v7, 1);
      case 0x13u:
        BlockTessellator::tessellateStemInWorld(v6, v10, v9, v8);
      case 0x14u:
        BlockTessellator::tessellateVineInWorld(v6, v10, v9, v8, v7);
      case 0x15u:
        BlockTessellator::tessellateFenceGateInWorld(v6, v10, v9, v8, v7);
      case 0x17u:
        BlockTessellator::tessellateLilypadInWorld(v6, v10, v9, v8);
      case 0x19u:
        BlockTessellator::tessellateBrewingStandInWorld(v6, v10, v9, v8, v7);
      case 0x1Au:
        BlockTessellator::tessellateEndPortalFrameInWorld(v6, v10, v9, v8, v7);
      case 0x1Cu:
        BlockTessellator::tessellateCocoaInWorld(v6, v10, v9, v8, v7);
      case 0x1Fu:
        v26 = (unsigned __int64 *)Block::getBlockState(Block::mQuartzBlock, 12);
        v27 = (0xFu >> (4 - (*v26 >> 32))) & (v7 >> (*v26 + 1 - (*v26 >> 32)));
        if ( v27 == 2 )
          *((_DWORD *)v6 + 51) = 1;
          *((_DWORD *)v6 + 52) = 1;
        else if ( v27 == 1 )
          *((_DWORD *)v6 + 47) = 1;
          *((_DWORD *)v6 + 48) = 1;
          *((_DWORD *)v6 + 49) = 1;
          *((_DWORD *)v6 + 50) = 1;
      case 0x20u:
        BlockTessellator::tessellateWallInWorld(v6, v10, v9, v8, v7);
      case 0x28u:
        v28 = 0;
        goto LABEL_55;
      case 0x2Au:
        BlockTessellator::tessellateFlowerPotInWorld(v6, v10, v9, v8, v7);
      case 0x2Bu:
        v29 = (*(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v9 + 384))(v9, v7);
        Tessellator::color(v10, v29);
        BlockTessellator::tessellateAnvilInWorld(v6, v10, v9, v8, v7, 0);
      case 0x2Cu:
        BlockTessellator::tessellateDragonEgg(v6, v10, v9, v8, v7, 0);
      case 0x30u:
        v68 = 1050673152;
        v69 = 1050673152;
        v70 = 1050673152;
        v65 = 0.6875;
        v66 = 0.6875;
        v67 = 1060110336;
        goto LABEL_65;
      case 0x41u:
        v30 = (BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v9 + 4)];
        v31 = (*(int (__fastcall **)(const Block *, unsigned int))(*(_DWORD *)v9 + 424))(v9, v7);
        v32 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v30, v8, 0, v31);
        BlockTessellator::tessellateCrossPolyTexture(v6, v10, v32, (const Vec3 *)&v68, a6, v57);
      case 0x42u:
        v28 = 1;
LABEL_55:
        v22 = BlockTessellator::tessellateDoublePlantInWorld(v6, v10, v9, v8, v7, v28, a6);
      case 0x44u:
        v22 = BlockTessellator::tessellateTopSnowInWorld(v6, v10, v9, v8, v7);
      case 0x45u:
        BlockTessellator::tessellateTripwireInWorld(v6, v10, v9, v8, v7);
      case 0x46u:
        BlockTessellator::tessellateTripwireHookInWorld(v6, v10, v9, v8, v7);
      case 0x47u:
        BlockTessellator::tessellateCauldronInWorld(v6, v10, v9, v8, v7);
      case 0x48u:
        BlockTessellator::tessellateRepeaterInWorld(v6, v10, v9, v8, v7);
      case 0x49u:
        BlockTessellator::tessellateComparatorInWorld(v6, v10, v9, v8, v7);
      case 0x4Au:
        BlockTessellator::tessellateHopperInWorld(v6, v10, v9, v8, v7);
      case 0x4Bu:
        v33 = *((_DWORD *)v6 + 11);
        if ( v33 == 1 )
          v35 = (const Vec3 *)&Vec3::ZERO;
          v36 = (const Vec3 *)&Vec3::ONE;
          if ( v33 != 3 )
            goto LABEL_94;
          __asm { VMOV.F32        S0, #-0.1875 }
          v68 = 1044381696;
          v69 = 1044381696;
          v70 = 1044381696;
          _R0 = &Vec3::ONE;
          __asm
          {
            VLDR            S2, [R0]
            VLDR            S4, [R0,#4]
            VLDR            S6, [R0,#8]
            VADD.F32        S2, S2, S0
            VADD.F32        S4, S4, S0
            VADD.F32        S0, S6, S0
            VSTR            S2, [SP,#0x70+var_48]
            VSTR            S4, [SP,#0x70+var_44]
            VSTR            S0, [SP,#0x70+var_40]
          }
LABEL_65:
          v35 = (const Vec3 *)&v68;
          v36 = (const Vec3 *)&v65;
        AABB::set((BlockTessellator *)((char *)v6 + 724), v35, v36);
LABEL_85:
        BlockTessellator::tessellateBlockInWorld(v6, v10, v9, v8, v7);
LABEL_94:
      case 0x4Cu:
        BlockTessellator::tessellatePistonInWorld(v6, v10, v9, v8, v7);
      case 0x4Du:
        BlockTessellator::tessellateBeaconInWorld(v6, v10, v9, v8, v7);
      case 0x4Eu:
        BlockTessellator::tessellateChorusPlantInWorld(v6, v10, v9, v8, v7);
      case 0x4Fu:
        __asm { VMOV.F32        S0, #1.0 }
        _R5 = 1040187392;
        __asm { VMOV            S2, R5 }
        v69 = 1040187392;
        v70 = 1040187392;
        v68 = 0;
        __asm { VSUB.F32        S16, S0, S2 }
        v65 = 1.0;
        __asm
          VSTR            S16, [SP,#0x70+var_44]
          VSTR            S16, [SP,#0x70+var_40]
        AABB::set((BlockTessellator *)((char *)v6 + 724), (const Vec3 *)&v68, (const Vec3 *)&v65);
        v68 = 1040187392;
        v69 = 0;
        __asm { VSTR            S16, [SP,#0x70+var_48] }
        v66 = 1.0;
        __asm { VSTR            S16, [SP,#0x70+var_40] }
        v70 = 0;
          VSTR            S16, [SP,#0x70+var_48]
        v67 = 1065353216;
      case 0x50u:
        BlockTessellator::tessellateEndPortalInWorld(v20, v10, v21, v8, v56);
      case 0x51u:
        BlockTessellator::tessellateEndRodInWorld(v6, v10, v9, v8, v7);
      case 0x52u:
        BlockTessellator::tessellateEndGatewayInWorld(v20, v10, v21, v8, v56);
      case 0x54u:
        FaceDirectionalBlock::setFaceFlipping(v9, v7, (int *)v6 + 47);
      case 0x55u:
        switch ( v7 & 7 )
          case 0u:
            v24 = 3;
            *((_DWORD *)v6 + 49) = 3;
            *((_DWORD *)v6 + 50) = 3;
            goto LABEL_89;
          case 1u:
            *((_DWORD *)v6 + 47) = 2;
            *((_DWORD *)v6 + 48) = 1;
            break;
          case 2u:
            v24 = 2;
          case 3u:
            *((_DWORD *)v6 + 47) = 3;
            *((_DWORD *)v6 + 48) = 3;
            v24 = 1;
LABEL_89:
            *((_DWORD *)v6 + 51) = v24;
            *((_DWORD *)v6 + 52) = v24;
          case 4u:
            v49 = 2;
            v50 = 1;
            goto LABEL_92;
          case 5u:
            v49 = 1;
            v50 = 2;
LABEL_92:
            *((_DWORD *)v6 + 47) = v50;
            *((_DWORD *)v6 + 48) = v49;
            *((_DWORD *)v6 + 49) = v49;
            *((_DWORD *)v6 + 50) = v49;
          default:
        *((_BYTE *)v6 + 40) = 0;
      case 0x56u:
        v38 = (unsigned __int64 *)Block::getBlockState((int)v9, 15);
        v39 = v10;
        v40 = (int)v6 + 188;
        v41 = (char *)&unk_262C9C0 + 24 * ((0xFu >> (4 - (*v38 >> 32))) & (v7 >> (*v38 + 1 - (*v38 >> 32))));
        v42 = *((_DWORD *)v41 + 1);
        v43 = *((_DWORD *)v41 + 2);
        v44 = *((_DWORD *)v41 + 3);
        v45 = *((_DWORD *)v41 + 4);
        v46 = *((_DWORD *)v41 + 5);
        *(_DWORD *)v40 = *(_DWORD *)v41;
        *(_DWORD *)(v40 + 4) = v42;
        *(_DWORD *)(v40 + 8) = v43;
        *(_DWORD *)(v40 + 12) = v44;
        *(_DWORD *)(v40 + 16) = v45;
        *(_DWORD *)(v40 + 20) = v46;
        v10 = v39;
LABEL_79:
        v22 = BlockTessellator::tessellateBlockInWorld(v6, v10, v9, v8, v7);
      case 0x57u:
        BlockTessellator::tessellateDoubleThinFenceInWorld(v6, v10, v9, v8, v7, 0);
      case 0x58u:
        BlockTessellator::tessellateItemFrameInWorld(v6, v10, v9, v8, v7);
    }
  v51 = v10;
  if ( !*(_BYTE *)v6
    && (*(int (__fastcall **)(const Block *))(*(_DWORD *)v9 + 364))(v9) == 1
    && *((_DWORD *)v6 + 11) != 3 )
    v52 = BlockSource::getExtraData(*((BlockSource **)v6 + 1), v8);
    v53 = v52;
    if ( v52 )
      v54 = (const Block *)Block::mBlocks[(unsigned __int8)v52];
      if ( v54 )
      {
        if ( Block::getRenderLayer((Block *)Block::mBlocks[(unsigned __int8)v52]) == *((_DWORD *)v6 + 11) )
          *(_BYTE *)v6 = 1;
          BlockTessellator::tessellateInWorld(v6, v51, v54, v8, v53 >> 8, 0);
          *(_BYTE *)v6 = 0;
      }
  return v22;
}


int __fastcall BlockTessellator::tessellateExtraDataInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4)
{
  BlockTessellator *v4; // r4@1
  const BlockPos *v5; // r5@1
  Tessellator *v6; // r8@1
  int v7; // r7@2
  int v8; // r0@3
  unsigned int v9; // r6@3
  const Block *v10; // r9@4
  int v11; // r0@6

  v4 = this;
  v5 = a4;
  v6 = a2;
  if ( *((_DWORD *)this + 11) == 3 )
  {
    v7 = 0;
  }
  else
    v8 = BlockSource::getExtraData(*((BlockSource **)this + 1), a4);
    v9 = v8;
    if ( v8 )
    {
      v10 = (const Block *)Block::mBlocks[(unsigned __int8)v8];
      if ( v10 )
      {
        v7 = 0;
        if ( Block::getRenderLayer((Block *)Block::mBlocks[(unsigned __int8)v8]) == *((_DWORD *)v4 + 11) )
        {
          *(_BYTE *)v4 = 1;
          v11 = BlockTessellator::tessellateInWorld(v4, v6, v10, v5, v9 >> 8, 0);
          *(_BYTE *)v4 = 0;
          v7 = v11;
        }
      }
      else
    }
    else
      v7 = 0;
  return v7;
}


void __fastcall BlockTessellator::tessellateBeacon(float this, int a2, const Block *a3, float a4, float a5, const Vec3 *a6)
{
  BlockTessellator::tessellateBeacon((BlockTessellator *)LODWORD(this), (Tessellator *)a2, a3, a4, a5, a6);
}


signed int __fastcall BlockTessellator::tessellateHopperInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5, int a6)
{
  BlockTessellator *v6; // r11@1
  const Block *v7; // r7@1
  Tessellator *v8; // r10@1
  int v9; // r1@1
  int v10; // r2@1
  const BlockPos *v11; // r4@1
  unsigned int v12; // r5@1
  int v13; // r6@1
  __int64 v18; // r0@4
  __int64 v19; // r0@4
  const TextureUVCoordinateSet *v20; // r0@5
  const TextureUVCoordinateSet *v21; // r0@5
  const TextureUVCoordinateSet *v22; // r0@5
  const TextureUVCoordinateSet *v23; // r0@5
  const TextureUVCoordinateSet *v24; // r0@5
  const TextureUVCoordinateSet *v25; // r0@5
  int v26; // r8@7
  BlockTessellator *v27; // r9@7
  int *v28; // r11@7
  int v29; // r3@7
  int v30; // r4@7
  int v31; // r5@7
  int v32; // r6@7
  int v33; // r7@7
  int v34; // r3@9
  int v35; // r4@9
  int v36; // r5@9
  int v37; // r6@9
  int v38; // r7@9
  int v39; // r1@9
  __int64 v40; // r2@10
  __int64 v41; // r0@10
  int v42; // r0@18
  int v43; // r3@18
  int v44; // r4@18
  int v45; // r5@18
  int v46; // r6@18
  int v47; // r7@18
  void *v48; // r0@18
  unsigned int *v50; // r2@20
  signed int v51; // r1@22
  int v52; // [sp+0h] [bp-D0h]@10
  signed int v53; // [sp+4h] [bp-CCh]@10
  float v54; // [sp+8h] [bp-C8h]@10
  int v55; // [sp+10h] [bp-C0h]@1
  int *v56; // [sp+10h] [bp-C0h]@8
  int v57; // [sp+14h] [bp-BCh]@4
  BlockGraphics *v58; // [sp+18h] [bp-B8h]@1
  BlockGraphics *v59; // [sp+18h] [bp-B8h]@5
  AABB *v60; // [sp+1Ch] [bp-B4h]@4
  BlockPos *v61; // [sp+20h] [bp-B0h]@2
  const TextureUVCoordinateSet *v62; // [sp+24h] [bp-ACh]@1
  Tessellator *v63; // [sp+24h] [bp-ACh]@5
  char v64; // [sp+28h] [bp-A8h]@18
  int v65; // [sp+40h] [bp-90h]@18
  int v66; // [sp+44h] [bp-8Ch]@18
  int v67; // [sp+4Ch] [bp-84h]@4
  int v68; // [sp+54h] [bp-7Ch]@4
  __int64 v69; // [sp+58h] [bp-78h]@4
  __int64 v70; // [sp+64h] [bp-6Ch]@4
  float v71; // [sp+70h] [bp-60h]@4
  __int64 v72; // [sp+74h] [bp-5Ch]@4
  float v73; // [sp+7Ch] [bp-54h]@4
  __int64 v74; // [sp+80h] [bp-50h]@4
  __int64 v75; // [sp+88h] [bp-48h]@2
  int v76; // [sp+90h] [bp-40h]@2

  v6 = this;
  v7 = a3;
  v8 = a2;
  v9 = *(_DWORD *)a3;
  v10 = *((_BYTE *)a3 + 4);
  v11 = a4;
  v12 = BlockGraphics::mBlocks[v10];
  v58 = (BlockGraphics *)BlockGraphics::mBlocks[v10];
  v55 = (*(int (__fastcall **)(const Block *, int))(v9 + 424))(v7, a5);
  v13 = BlockGraphics::getTexture(__PAIR__(2, v12), 0, 0);
  v62 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(v12, 0, 0);
  if ( a6 == 1 )
  {
    v61 = v11;
    v76 = dword_2822498;
    v75 = *(_QWORD *)&Vec3::ZERO;
  }
  else
    Vec3::Vec3((int)&v75, (int)v11);
  v60 = (BlockTessellator *)((char *)v6 + 724);
  AABB::set(
    (unsigned int)v6 + 724,
    4466850256157409280LL,
    1.0,
    COERCE_FLOAT((BlockTessellator *)((char *)v6 + 724)));
  __asm
    VLDR            S0, [SP,#0xD0+var_48]
    VLDR            S16, =-0.87625
    VADD.F32        S0, S0, S16
    VSTR            S0, [SP,#0xD0+var_54]
  v74 = *(__int64 *)((char *)&v75 + 4);
  BlockTessellator::tessellateEast(v6, v8, v7, (const Vec3 *)&v73, (const TextureUVCoordinateSet *)v13);
    VLDR            S18, =0.87625
    VADD.F32        S0, S0, S18
    VSTR            S0, [SP,#0xD0+var_60]
  v72 = *(__int64 *)((char *)&v75 + 4);
  BlockTessellator::tessellateWest(v6, v8, v7, (const Vec3 *)&v71, (const TextureUVCoordinateSet *)v13);
  HIDWORD(v18) = 1040019620;
  LODWORD(v18) = (char *)v6 + 724;
  AABB::set(v18, 1059061760LL, 0.87625, 1.0, 1.0);
    VLDR            S0, [SP,#0x90]
  v70 = v75;
  __asm { VSTR            S0, [SP,#0xD0+var_64] }
  BlockTessellator::tessellateSouth(v6, v8, v7, (const Vec3 *)&v70, (const TextureUVCoordinateSet *)v13);
  v69 = v75;
  v57 = v13;
  __asm { VSTR            S0, [SP,#0xD0+var_70] }
  BlockTessellator::tessellateNorth(v6, v8, v7, (const Vec3 *)&v69, (const TextureUVCoordinateSet *)v13);
  HIDWORD(v19) = 1040019620;
  LODWORD(v19) = (char *)v6 + 724;
  AABB::set(v19, 4466850256157409280LL, 0.87625, 1.0, 0.87625);
    VLDR            S0, =-0.374
    VLDR            S2, [SP,#0xD0+var_48+4]
    VADD.F32        S0, S2, S0
  v67 = v75;
  __asm { VSTR            S0, [SP,#0xD0+var_80] }
  v68 = v76;
  BlockTessellator::tessellateFaceUp(v6, v8, v7, (const Vec3 *)&v67, v62);
  AABB::set((unsigned int)v6 + 724, 1059061760LL, 1.0, 1.0, 1.0);
    v20 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture((unsigned int)v58, v55, 0);
    BlockTessellator::tessellateFaceDown(v6, v8, v7, (const Vec3 *)&Vec3::ZERO, v20);
    v21 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(1, (unsigned int)v58), v55, 0);
    BlockTessellator::tessellateFaceUp(v6, v8, v7, (const Vec3 *)&Vec3::ZERO, v21);
    v22 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(2, (unsigned int)v58), v55, 0);
    BlockTessellator::tessellateNorth(v6, v8, v7, (const Vec3 *)&Vec3::ZERO, v22);
    v23 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(3, (unsigned int)v58), v55, 0);
    BlockTessellator::tessellateSouth(v6, v8, v7, (const Vec3 *)&Vec3::ZERO, v23);
    v24 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(4, (unsigned int)v58), v55, 0);
    BlockTessellator::tessellateWest(v6, v8, v7, (const Vec3 *)&Vec3::ZERO, v24);
    v25 = (const TextureUVCoordinateSet *)BlockGraphics::getTexture(__PAIR__(5, (unsigned int)v58), v55, 0);
    v63 = v8;
    v59 = v7;
    BlockTessellator::tessellateEast(v6, v8, v7, (const Vec3 *)&Vec3::ZERO, v25);
    BlockTessellator::tessellateBlockInWorld(v6, v8, v7, v61, a5);
  v26 = (int)v6 + 8;
  *((_BYTE *)v6 + 40) = 1;
  v27 = v6;
  v28 = (int *)((char *)v6 + 32);
  v29 = *(_DWORD *)(v13 + 4);
  v30 = *(_DWORD *)(v13 + 8);
  v31 = *(_DWORD *)(v13 + 12);
  v32 = *(_DWORD *)(v13 + 16);
  v33 = *(_DWORD *)(v57 + 20);
  *(_DWORD *)v26 = *(_DWORD *)v57;
  *(_DWORD *)(v26 + 4) = v29;
  *(_DWORD *)(v26 + 8) = v30;
  *(_DWORD *)(v26 + 12) = v31;
  *(_DWORD *)(v26 + 16) = v32;
  *(_DWORD *)(v26 + 20) = v33;
  EntityInteraction::setInteractText(v28, (int *)(v57 + 24));
  *((_DWORD *)v27 + 9) = *(_DWORD *)(v57 + 28);
  AABB::set(__PAIR__(1048576000, (unsigned int)v60), 4503599628419072000LL, 0.75, 0.62, 0.75);
    v56 = v28;
    BlockTessellator::tessellateEast(v27, v63, v59, (const Vec3 *)&Vec3::ZERO, (const TextureUVCoordinateSet *)v57);
    BlockTessellator::tessellateWest(v27, v63, v59, (const Vec3 *)&Vec3::ZERO, (const TextureUVCoordinateSet *)v57);
    BlockTessellator::tessellateSouth(v27, v63, v59, (const Vec3 *)&Vec3::ZERO, (const TextureUVCoordinateSet *)v57);
    BlockTessellator::tessellateNorth(v27, v63, v59, (const Vec3 *)&Vec3::ZERO, (const TextureUVCoordinateSet *)v57);
    BlockTessellator::tessellateFaceDown(v27, v63, v59, (const Vec3 *)&Vec3::ZERO, (const TextureUVCoordinateSet *)v57);
    BlockTessellator::tessellateBlockInWorld(v27, v63, v59, v61, a5);
    v34 = *(_DWORD *)(v57 + 4);
    v35 = *(_DWORD *)(v57 + 8);
    v36 = *(_DWORD *)(v57 + 12);
    v37 = *(_DWORD *)(v57 + 16);
    v38 = *(_DWORD *)(v57 + 20);
    *(_DWORD *)v26 = *(_DWORD *)v57;
    *(_DWORD *)(v26 + 4) = v34;
    *(_DWORD *)(v26 + 8) = v35;
    *(_DWORD *)(v26 + 12) = v36;
    *(_DWORD *)(v26 + 16) = v37;
    *(_DWORD *)(v26 + 20) = v38;
    EntityInteraction::setInteractText(v28, (int *)(v57 + 24));
    *((_DWORD *)v27 + 9) = *(_DWORD *)(v57 + 28);
    switch ( HopperBlock::getAttachedFace((HopperBlock *)a5, v39) )
    {
      case 0u:
        LODWORD(v40) = 0;
        v52 = 1059061760;
        v53 = 1048576000;
        v54 = 0.625;
        v41 = __PAIR__(1052770304, (unsigned int)v60);
        goto LABEL_16;
      case 3u:
        AABB::set(__PAIR__(1052770304, (unsigned int)v60), 4557642823947517952LL, 0.625, 0.5, 1.0);
        goto LABEL_17;
      case 2u:
        AABB::set(__PAIR__(1052770304, (unsigned int)v60), 1048576000LL, 0.625, 0.5, 0.25);
      case 4u:
        v52 = 1048576000;
        v53 = 1056964608;
        v41 = (unsigned int)v60;
        goto LABEL_15;
      case 5u:
        v52 = 1065353216;
        v41 = __PAIR__(1061158912, (unsigned int)v60);
LABEL_15:
        LODWORD(v40) = 1048576000;
LABEL_16:
        HIDWORD(v40) = 1052770304;
        AABB::set(v41, v40, *(float *)&v52, *(float *)&v53, v54);
LABEL_17:
        BlockTessellator::tessellateBlockInWorld(v27, v63, v59, v61, a5);
        break;
      default:
    }
  v42 = TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)&v64);
  v43 = *(_DWORD *)(v42 + 4);
  v44 = *(_DWORD *)(v42 + 8);
  v45 = *(_DWORD *)(v42 + 12);
  v46 = *(_DWORD *)(v42 + 16);
  v47 = *(_DWORD *)(v42 + 20);
  *(_DWORD *)v26 = *(_DWORD *)v42;
  *(_DWORD *)(v26 + 4) = v43;
  *(_DWORD *)(v26 + 8) = v44;
  *(_DWORD *)(v26 + 12) = v45;
  *(_DWORD *)(v26 + 16) = v46;
  *(_DWORD *)(v26 + 20) = v47;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    v56,
    (int *)(v42 + 24));
  *((_DWORD *)v27 + 9) = v66;
  v48 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v65 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
    else
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v48);
  *((_BYTE *)v27 + 40) = 0;
  return 1;
}


int __fastcall BlockTessellator::getLightColor(int result, const BlockPos *a2, int a3)
{
  char v3; // r1@2

  if ( *((_BYTE *)a2 + 48) )
  {
    v3 = Brightness::MAX;
    *(_BYTE *)result = Brightness::MAX;
    *(_BYTE *)(result + 1) = v3;
  }
  else
    result = BlockTessellatorCache::getLightColor(
               (BlockTessellatorCache *)result,
               (const BlockPos *)((char *)a2 + 812),
               a3);
  return result;
}


int __fastcall BlockTessellator::isSolidRender(BlockTessellator *this, const Block *a2)
{
  return 0;
}


void __fastcall BlockTessellator::tessellateEndRodGui(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockGraphics *a4)
{
  const Block *v4; // r8@1
  Tessellator *v5; // r5@1
  BlockTessellator *v6; // r6@1
  int v7; // r7@1
  char v8; // [sp+1Ch] [bp-E4h]@1
  char v9; // [sp+28h] [bp-D8h]@1
  char v10; // [sp+34h] [bp-CCh]@1
  char v11; // [sp+40h] [bp-C0h]@1
  char v12; // [sp+4Ch] [bp-B4h]@1
  char v13; // [sp+58h] [bp-A8h]@1
  char v14; // [sp+64h] [bp-9Ch]@1
  char v15; // [sp+70h] [bp-90h]@1
  char v16; // [sp+7Ch] [bp-84h]@1
  char v17; // [sp+88h] [bp-78h]@1
  char v18; // [sp+94h] [bp-6Ch]@1
  char v19; // [sp+A0h] [bp-60h]@1
  int v20; // [sp+ACh] [bp-54h]@1
  signed int v21; // [sp+B0h] [bp-50h]@1
  signed int v22; // [sp+B4h] [bp-4Ch]@1
  __int64 v23; // [sp+B8h] [bp-48h]@1
  int v24; // [sp+C0h] [bp-40h]@1
  int v25; // [sp+C4h] [bp-3Ch]@1
  signed int v26; // [sp+C8h] [bp-38h]@1
  signed int v27; // [sp+CCh] [bp-34h]@1
  int v28; // [sp+D0h] [bp-30h]@1
  int v29; // [sp+D4h] [bp-2Ch]@1
  int v30; // [sp+D8h] [bp-28h]@1

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = BlockGraphics::getTexture((unsigned int)a4, 0, 0);
  v28 = 1052770304;
  v29 = 0;
  v30 = 1052770304;
  v25 = 1059061760;
  v26 = 1031798784;
  v27 = 1059061760;
  v23 = 4431542034387435520LL;
  v24 = 1054867456;
  v20 = 1058013184;
  v21 = 1065353216;
  v22 = 1058013184;
  AABB::set((BlockTessellator *)((char *)v6 + 724), (const Vec3 *)&v28, (const Vec3 *)&v25);
  Vec3::Vec3((int)&v19, (int)&BlockPos::ZERO);
  BlockTessellator::tessellateFaceWithUVs(
    (int)v6,
    *(float *)&v5,
    __PAIR__(&v19, (unsigned int)v4),
    *(float *)&v7,
    1040187392,
    0.125,
    0.375,
    1);
  Vec3::Vec3((int)&v18, (int)&BlockPos::ZERO);
    __PAIR__(&v18, (unsigned int)v4),
    1052770304,
    0);
  Vec3::Vec3((int)&v17, (int)&BlockPos::ZERO);
    __PAIR__(&v17, (unsigned int)v4),
    0.4375,
    2);
  Vec3::Vec3((int)&v16, (int)&BlockPos::ZERO);
    __PAIR__(&v16, (unsigned int)v4),
    3);
  Vec3::Vec3((int)&v15, (int)&BlockPos::ZERO);
    __PAIR__(&v15, (unsigned int)v4),
    4);
  Vec3::Vec3((int)&v14, (int)&BlockPos::ZERO);
    __PAIR__(&v14, (unsigned int)v4),
    5);
  AABB::set((BlockTessellator *)((char *)v6 + 724), (const Vec3 *)&v23, (const Vec3 *)&v20);
  Vec3::Vec3((int)&v13, (int)&BlockPos::ZERO);
    __PAIR__(&v13, (unsigned int)v4),
    0.0,
    0.25,
  Vec3::Vec3((int)&v12, (int)&BlockPos::ZERO);
    __PAIR__(&v12, (unsigned int)v4),
    1048576000,
  Vec3::Vec3((int)&v11, (int)&BlockPos::ZERO);
    __PAIR__(&v11, (unsigned int)v4),
    0,
    0.9375,
  Vec3::Vec3((int)&v10, (int)&BlockPos::ZERO);
    __PAIR__(&v10, (unsigned int)v4),
  Vec3::Vec3((int)&v9, (int)&BlockPos::ZERO);
    __PAIR__(&v9, (unsigned int)v4),
  Vec3::Vec3((int)&v8, (int)&BlockPos::ZERO);
    __PAIR__(&v8, (unsigned int)v4),
}


signed int __fastcall BlockTessellator::tessellateEndPortalInWorld(BlockTessellator *this, Tessellator *a2, const Block *a3, const BlockPos *a4, int a5)
{
  Tessellator *v5; // r4@1
  int v16; // r7@2
  __int64 *v38; // r6@5
  signed int v39; // r9@5 OVERLAPPED
  signed int v40; // r10@5 OVERLAPPED
  __int64 v54; // [sp+0h] [bp-50h]@8
  int v55; // [sp+8h] [bp-48h]@8

  v5 = a2;
  _R5 = a4;
  if ( Tessellator::forceTessellateIntercept(a2) )
  {
    _R0 = *(_DWORD *)_R5;
    _R2 = 1431655766;
    _R1 = *((_DWORD *)_R5 + 2);
    __asm
    {
      VLDR            S18, =0.33333
      SMMUL.W         R3, R0, R2
      SMMUL.W         R2, R1, R2
    }
    v16 = *(_DWORD *)_R5 - 3 * (_R3 + (_R3 >> 31));
    _R7 = v16 + (v16 < 0 ? 3 : 0);
    _R6 = _R1 - 3 * (_R2 + (_R2 >> 31));
      VMOV            S0, R7
      VCVT.F32.S32    S0, S0
    if ( _NF ^ _VF )
      _R6 += 3;
      VMOV            S2, R6
      VCVT.F32.S32    S2, S2
      VMUL.F32        S0, S0, S18
      VMUL.F32        S2, S2, S18
      VMOV            R10, S0
      VMOV            R8, S2
    Tessellator::tex(v5, _R10, _R8);
      VLDR            S2, [R5,#4]
      VMOV.F32        S16, #0.75
      VLDR            S0, [R5]
      VLDR            S4, [R5,#8]
      VCVT.F32.S32    S4, S4
      VADD.F32        S2, S2, S16
      VMOV            R1, S0
      VMOV            R3, S4
      VMOV            R2, S2
    Tessellator::vertex(v5, _R1, _R2, _R3);
    _R0 = _R6 + 1;
      VMOV            S0, R0
      VMOV            R9, S0
    Tessellator::tex(v5, _R10, _R9);
      VMOV.F32        S20, #1.0
      VADD.F32        S4, S4, S20
    _R0 = _R7 + 1;
      VMOV            R6, S0
    Tessellator::tex(v5, _R6, _R9);
      VADD.F32        S0, S0, S20
    Tessellator::tex(v5, _R6, _R8);
  }
  else
      VMOV.F32        S16, #0.125
      VMOV.F32        S18, #1.0
    _R7 = 8;
    __asm { VMOV.F32        S20, #0.75 }
    v38 = (__int64 *)&unk_27CCE90;
    v39 = 1056964608;
    v40 = 1065353216;
    do
      Tessellator::tex((int)v5, v38);
      __asm
      {
        VMOV            S0, R7
        VCVT.F32.S32    S0, S0
        VMUL.F32        S22, S0, S16
      }
      if ( _ZF )
        __asm { VMOVEQ.F32      S22, S18 }
      v54 = *(_QWORD *)&v39;
      v55 = 1056964608;
      __asm { VSTR            S22, [SP,#0x50+var_44] }
      Tessellator::color(v5, (const Color *)&v54);
        VLDR            S2, [R5,#4]
        VLDR            S0, [R5]
        VLDR            S4, [R5,#8]
        VCVT.F32.S32    S2, S2
        VCVT.F32.S32    S4, S4
        VADD.F32        S2, S2, S20
        VMOV            R1, S0
        VMOV            R3, S4
        VMOV            R2, S2
      Tessellator::vertex(v5, _R1, _R2, _R3);
        VADD.F32        S4, S4, S18
        VADD.F32        S0, S0, S18
      --_R7;
      v38 += 2;
    while ( _R7 != -1 );
  return 1;
}


int __fastcall BlockTessellator::isTranslucent(BlockTessellator *this, const Block *a2)
{
  return 0;
}
