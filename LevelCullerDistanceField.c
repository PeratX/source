

signed int __fastcall LevelCullerDistanceField::_adjustNeighbors(LevelCullerDistanceField *this, const DistanceFieldCullingStep *a2)
{
  LevelCullerDistanceField *v2; // r10@1
  __int64 v3; // r2@1
  signed int v4; // r4@1
  int v10; // r3@2
  int v11; // r9@2
  _DWORD *v12; // r2@2
  char v13; // r7@3
  int v14; // r1@3
  signed int v15; // r12@5
  __int16 v16; // r4@5
  int v17; // r1@5
  int v18; // r0@5
  int v19; // r0@5
  int v20; // r1@5
  int v21; // r0@5
  signed int v22; // r1@5
  signed int v23; // r0@7
  int v24; // r8@12
  _DWORD *v25; // r9@12
  int v26; // r2@12
  signed int result; // r0@13
  bool v29; // zf@18
  bool v30; // zf@22
  bool v31; // zf@26
  bool v32; // zf@30
  int v33; // r7@41
  _DWORD *v34; // r6@41
  signed int v35; // r8@44
  int v36; // r12@44
  int v37; // r2@44
  int v38; // lr@44
  int v39; // r3@44
  int v40; // r4@44
  int v41; // r5@44
  int v42; // r1@44
  unsigned int v43; // r3@44
  int v44; // r5@44
  int v45; // r1@44
  bool v46; // zf@44
  int v47; // r6@50
  _DWORD *v48; // r7@50
  int v49; // r2@54
  int v50; // [sp+Ch] [bp-74h]@12
  int v51; // [sp+18h] [bp-68h]@12
  int v52; // [sp+1Ch] [bp-64h]@12
  int v53; // [sp+24h] [bp-5Ch]@12
  int v54; // [sp+2Ch] [bp-54h]@12
  LevelCullerDistanceField *v55; // [sp+34h] [bp-4Ch]@2
  int v56; // [sp+38h] [bp-48h]@1
  int v57; // [sp+38h] [bp-48h]@12
  int v58; // [sp+3Ch] [bp-44h]@1
  ChunkVisibilityCacheElement *v59; // [sp+40h] [bp-40h]@1
  int v60; // [sp+44h] [bp-3Ch]@1
  int v61; // [sp+48h] [bp-38h]@1
  unsigned __int8 v62; // [sp+4Eh] [bp-32h]@10
  unsigned __int8 v63; // [sp+4Fh] [bp-31h]@12
  unsigned __int8 v64; // [sp+50h] [bp-30h]@12
  unsigned __int8 v65; // [sp+51h] [bp-2Fh]@12
  unsigned __int8 v66; // [sp+52h] [bp-2Eh]@12
  unsigned __int8 v67; // [sp+53h] [bp-2Dh]@12
  char v68; // [sp+54h] [bp-2Ch]@38

  v2 = this;
  v3 = *((_QWORD *)this + 21);
  v58 = *((_DWORD *)this + 1);
  v4 = *((_DWORD *)this + 3);
  _KR00_8 = *(_QWORD *)a2;
  v61 = v3 + (*(_QWORD *)a2 >> 32);
  v60 = HIDWORD(v3) + ((signed int)(*(_QWORD *)a2 >> 32 << 8) >> 24);
  v56 = *(_DWORD *)v58;
  v59 = (ChunkVisibilityCacheElement *)(*(_DWORD *)v58 + 16 * *(_QWORD *)a2);
  __asm { SBFX.W          R11, R1, #8, #8 }
  if ( *((_BYTE *)v59 + 13) & 0x40 )
  {
    v33 = 0;
    v34 = &Facing::DIRECTION[1];
    do
    {
      result = *v34 + _R11;
      if ( result < v4 && result >= 0 )
      {
        v35 = v4;
        v36 = v34[1] + v60;
        v37 = *((_BYTE *)v2 + 32);
        v38 = *(v34 - 1) + v61;
        v39 = *((_DWORD *)v2 + 1);
        v40 = *(_DWORD *)(v39 + 12);
        v41 = *(_DWORD *)v39;
        LOWORD(v39) = *(_WORD *)(v39 + 16);
        v42 = (v40 & v38) + ((v40 & v36) << v39);
        v4 = v35;
        v43 = (result << SBYTE1(v39)) + v42;
        v44 = v41 + 16 * v43;
        v45 = *(_BYTE *)(v44 + 14);
        v46 = v45 == v37;
        if ( v45 == v37 )
          v46 = *(_WORD *)(v44 + 6) == 0xFFFF;
        if ( !v46 )
        {
          DistanceFieldCullingStep::DistanceFieldCullingStep(
            (DistanceFieldCullingStep *)&v68,
            v38 - *((_QWORD *)v2 + 21),
            result,
            v36 - (unsigned int)(*((_QWORD *)v2 + 21) >> 32),
            v43);
          result = (signed int)LevelCullerDistanceField::_adjustNeighbor(
                                 v2,
                                 (const DistanceFieldCullingStep *)&v68,
                                 Facing::OPPOSITE_FACING[v33],
                                 v59);
        }
      }
      ++v33;
      v34 += 3;
    }
    while ( v33 != 6 );
  }
  else
    v10 = 0;
    v11 = 0;
    v55 = this;
    v12 = &Facing::DIRECTION[1];
      v13 = 0;
      v14 = *v12 + _R11;
      if ( v14 < v4 && v14 >= 0 )
        v15 = v4;
        v16 = *(_WORD *)(v58 + 16);
        v17 = v14 << SHIBYTE(v16);
        v18 = ((*(_DWORD *)(v58 + 12) & (v12[1] + v60)) << v16) + ((*(v12 - 1) + v61) & *(_DWORD *)(v58 + 12));
        v4 = v15;
        v19 = v56 + 16 * (v18 + v17);
        v20 = *(_WORD *)(v19 + 6);
        v21 = *(_BYTE *)(v19 + 14);
        _ZF = v20 == 0xFFFF;
        v22 = 0;
        if ( _ZF )
          v22 = 1;
        _ZF = v21 == *((_BYTE *)v55 + 32);
        v23 = 0;
          v23 = 1;
        v13 = v23 & v22;
        v11 |= v23 & v22;
      *(&v62 + v10++) = v13;
      v12 += 3;
    while ( v10 != 6 );
    if ( v11 & 1 )
      v24 = 0;
      v50 = v67;
      v57 = v63;
      v25 = &Facing::DIRECTION[1];
      v51 = v66;
      v53 = v64;
      v52 = v65;
      v26 = v62;
      v54 = v62;
      do
        result = *(&v62 + v24);
        if ( !*(&v62 + v24) )
          result = 1 << v24;
          _ZF = v26 == 0;
          if ( v26 )
            _ZF = (unsigned __int8)(*(_BYTE *)v59 & result) == 0;
          if ( !_ZF )
            goto LABEL_58;
          v29 = v57 == 0;
          if ( v57 )
            v29 = (unsigned __int8)(*((_BYTE *)v59 + 1) & result) == 0;
          if ( !v29 )
          v30 = v53 == 0;
          if ( v53 )
            v30 = (unsigned __int8)(*((_BYTE *)v59 + 2) & result) == 0;
          if ( !v30 )
          v31 = v52 == 0;
          if ( v52 )
            v31 = (unsigned __int8)(*((_BYTE *)v59 + 3) & result) == 0;
          if ( !v31 )
          v32 = v51 == 0;
          if ( v51 )
            v32 = (unsigned __int8)(*((_BYTE *)v59 + 4) & result) == 0;
          if ( !v32 || v50 && *((_BYTE *)v59 + 5) & (unsigned __int8)result )
          {
LABEL_58:
            result = *v25 + _R11;
            if ( result < v4 && result >= 0 )
            {
              DistanceFieldCullingStep::DistanceFieldCullingStep(
                (DistanceFieldCullingStep *)&v68,
                *((_BYTE *)v25 - 4) + v61 - *((_QWORD *)v55 + 21),
                result,
                *((_BYTE *)v25 + 4) + v60 - (unsigned int)(*((_QWORD *)v55 + 21) >> 32),
                ((*(_DWORD *)(*((_DWORD *)v55 + 1) + 12) & (v25[1] + v60)) << *(_WORD *)(*((_DWORD *)v55 + 1) + 16))
              + (*(_DWORD *)(*((_DWORD *)v55 + 1) + 12) & (*(v25 - 1) + v61))
              + (result << (*(_WORD *)(*((_DWORD *)v55 + 1) + 16) >> 8)));
              result = (signed int)LevelCullerDistanceField::_adjustNeighbor(
                                     v55,
                                     (const DistanceFieldCullingStep *)&v68,
                                     Facing::OPPOSITE_FACING[v24],
                                     v59);
              v26 = v54;
            }
          }
        ++v24;
        v25 += 3;
      while ( v24 != 6 );
    else
      v47 = 0;
      v48 = &Facing::DIRECTION[1];
        result = *(&v62 + v47);
        if ( !*(&v62 + v47) )
          result = *v48 + _R11;
          if ( result < v4 && result >= 0 )
            v49 = *((_DWORD *)v55 + 1);
            DistanceFieldCullingStep::DistanceFieldCullingStep(
              (DistanceFieldCullingStep *)&v68,
              v61 + *((_BYTE *)v48 - 4) - *((_QWORD *)v55 + 21),
              result,
              v60 + *((_BYTE *)v48 + 4) - (unsigned int)(*((_QWORD *)v55 + 21) >> 32),
              ((*(_DWORD *)(v49 + 12) & (v60 + v48[1])) << *(_WORD *)(v49 + 16))
            + (*(_DWORD *)(v49 + 12) & (v61 + *(v48 - 1)))
            + (result << (*(_WORD *)(v49 + 16) >> 8)));
            result = (signed int)LevelCullerDistanceField::_adjustNeighbor(
                                   v55,
                                   (const DistanceFieldCullingStep *)&v68,
                                   Facing::OPPOSITE_FACING[v47],
                                   v59);
        ++v47;
        v48 += 3;
      while ( v47 != 6 );
  return result;
}


int __fastcall LevelCullerDistanceField::_addBoundaryChunksToHeap(int a1, int a2, int a3)
{
  int v3; // r11@1
  int v6; // r10@1
  int v7; // r8@1
  int result; // r0@4
  int v15; // r0@5
  int v16; // r0@5
  int v17; // r0@6
  int v18; // [sp+8h] [bp-48h]@1
  int v19; // [sp+Ch] [bp-44h]@1
  int v20; // [sp+10h] [bp-40h]@5

  v3 = a2;
  v18 = a3;
  _R4 = *(_QWORD *)a2 >> 32;
  _R7 = *(_QWORD *)a2;
  v6 = a1;
  v7 = 0;
  v19 = *(_DWORD *)(a2 + 40);
LABEL_2:
  __asm
  {
    VMOV            S0, R4
    VCVT.F32.S32    S16, S0
  }
  _R6 = *(_DWORD *)(v3 + 8);
LABEL_3:
    VMOV            S0, R6
    VCVT.F32.S32    S18, S0
  while ( 1 )
    result = v19;
    if ( v19 == v7 )
      return result;
    DistanceFieldCullingStep::DistanceFieldCullingStep(
      (DistanceFieldCullingStep *)&v20,
      _R7 - *(_QWORD *)(v6 + 168),
      _R4,
      _R6 - (unsigned int)(*(_QWORD *)(v6 + 168) >> 32),
      ((*(_DWORD *)(*(_DWORD *)(v6 + 4) + 12) & _R6) << *(_WORD *)(*(_DWORD *)(v6 + 4) + 16))
    + (*(_DWORD *)(*(_DWORD *)(v6 + 4) + 12) & _R7)
    + (_R4 << (*(_WORD *)(*(_DWORD *)(v6 + 4) + 16) >> 8)));
    __asm
    {
      VMOV            S0, R7
      VCVT.F32.S32    S0, S0
    }
    _R0 = v18;
      VLDR            S2, [R0]
      VLDR            S4, [R0,#4]
      VLDR            S6, [R0,#8]
      VSUB.F32        S0, S2, S0
      VSUB.F32        S2, S4, S16
      VSUB.F32        S4, S6, S18
    v15 = **(_DWORD **)(v6 + 4) + 16 * v20;
      VMUL.F32        S0, S0, S0
      VMUL.F32        S2, S2, S2
      VMUL.F32        S4, S4, S4
      VADD.F32        S0, S2, S0
      VADD.F32        S0, S0, S4
      VSQRT.F32       S0, S0
      VSTR            S0, [R0,#8]
    *(_BYTE *)(v15 + 13) |= 2u;
    *(_BYTE *)(v15 + 14) = *(_BYTE *)(v6 + 32);
    LevelCullerDistanceField::_addToHeap((LevelCullerDistanceField *)v6, (const DistanceFieldCullingStep *)&v20);
    v16 = *(_DWORD *)(v3 + 12);
    ++v7;
    _VF = __OFSUB__(_R7, v16);
    _NF = _R7++ - v16 < 0;
    if ( !(_NF ^ _VF) )
      v17 = *(_DWORD *)(v3 + 20);
      _R7 = *(_DWORD *)v3;
      _VF = __OFSUB__(_R6, v17);
      _NF = _R6++ - v17 < 0;
      if ( _NF ^ _VF )
        goto LABEL_3;
      ++_R4;
      goto LABEL_2;
}


int __fastcall LevelCullerDistanceField::_minHeapify(int result, int a2)
{
  __int64 v2; // r2@1
  unsigned int v3; // r6@2
  __int16 v4; // r9@2
  int v5; // r4@3
  int v6; // r7@3
  int v14; // r5@13
  int v15; // r7@13
  int v16; // r5@13
  int v17; // r9@13
  int v18; // r10@13
  int v19; // r6@13
  signed int v20; // r1@13

  v2 = *(_QWORD *)(result + 100);
  HIDWORD(v2) -= v2;
  if ( SHIDWORD(v2) >> 3 )
  {
    v3 = SHIDWORD(v2) >> 3;
    v4 = a2;
    do
    {
      v5 = 2 * (a2 & 0x7FFF) | 1;
      v6 = **(_DWORD **)(result + 4);
      _R3 = v6 + 16 * *(_DWORD *)(v2 + 8 * a2);
      __asm { VLDR            S0, [R3,#8] }
      if ( _CF )
      {
        v5 = a2;
      }
      else
        _R5 = v6 + 16 * *(_DWORD *)(v2 + 8 * v5);
        __asm
        {
          VLDR            S2, [R5,#8]
          VCMPE.F32       S2, S0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
          __asm { VMOVLT.F32      S0, S2 }
        else
          v5 = a2;
      HIDWORD(v2) = (2 * a2 + 2) & 0xFFFE;
      if ( HIDWORD(v2) < v3 )
        _R5 = v6 + 16 * *(_DWORD *)(v2 + 8 * HIDWORD(v2));
          v5 = (2 * a2 + 2) & 0xFFFE;
      if ( v5 == a2 )
        break;
      *(_WORD *)(v6 + 16 * *(_DWORD *)(v2 + 8 * a2) + 6) = v5;
      v14 = v6 + 16 * *(_DWORD *)(v2 + 8 * (unsigned __int16)v5);
      v15 = v2 + 8 * a2;
      *(_WORD *)(v14 + 6) = v4;
      v16 = v2 + 8 * (unsigned __int16)v5;
      v17 = *(_DWORD *)(v2 + 8 * a2);
      v18 = *(_DWORD *)(v15 + 4);
      v19 = *(_DWORD *)(v16 + 4);
      *(_DWORD *)(v2 + 8 * a2) = *(_DWORD *)(v2 + 8 * (unsigned __int16)v5);
      *(_DWORD *)(v15 + 4) = v19;
      *(_DWORD *)(v2 + 8 * (unsigned __int16)v5) = v17;
      v4 = v5;
      *(_DWORD *)(v16 + 4) = v18;
      LODWORD(v2) = *(_QWORD *)(result + 100);
      v20 = (*(_QWORD *)(result + 100) >> 32) - v2;
      v3 = v20 >> 3;
      _ZF = v20 >> 3 == 0;
      a2 = (unsigned __int16)v5;
    }
    while ( !_ZF );
  }
  return result;
}


int __fastcall LevelCullerDistanceField::_quadraticMax(LevelCullerDistanceField *this, float _R1, float _R2, float _R3)
{
  int result; // r0@4

  __asm
  {
    VMOV.F32        S0, #-4.0
    VMOV            S2, R1
    VMUL.F32        S4, S2, S0
    VMOV            S0, R2
    VMOV            S2, R3
    VMUL.F32        S6, S0, S0
    VMUL.F32        S4, S4, S2
    VADD.F32        S4, S6, S4
    VCMPE.F32       S4, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm
    {
      VMOV.F32        S4, #-2.0
      VMUL.F32        S2, S2, S4
    }
  else
      VSQRT.F32       S4, S4
      VADD.F32        S2, S2, S2
      VSUB.F32        S0, S4, S0
    VDIV.F32        S0, S0, S2
    VMOV            R0, S0
  return result;
}


int *__fastcall LevelCullerDistanceField::_prepareForCullingPerspective(LevelCullerDistanceField *this, LevelRendererCamera *a2)
{
  LevelRendererCamera *v6; // r5@1
  float v10; // r0@1
  int v18; // r2@1
  signed int v19; // r8@1
  int v20; // r1@1
  int v22; // r0@6
  char *v23; // r0@8
  char *v24; // r0@15
  int v25; // r2@15
  int v26; // r3@15
  int v27; // r7@15
  int v28; // r6@15
  int v29; // r1@15
  int v30; // r0@16
  int v31; // r3@16
  int v32; // r2@16
  int *result; // r0@18
  int v35; // r0@20
  float v36; // [sp+4h] [bp-8Ch]@18
  float v37; // [sp+8h] [bp-88h]@18
  int v38; // [sp+10h] [bp-80h]@15
  int v39; // [sp+14h] [bp-7Ch]@15
  int v40; // [sp+18h] [bp-78h]@15
  int v41; // [sp+1Ch] [bp-74h]@15
  int v42; // [sp+20h] [bp-70h]@15
  int v43; // [sp+24h] [bp-6Ch]@15
  int v44; // [sp+28h] [bp-68h]@15
  int v45; // [sp+2Ch] [bp-64h]@15
  int v46; // [sp+30h] [bp-60h]@15
  int v47; // [sp+34h] [bp-5Ch]@15
  int v48; // [sp+38h] [bp-58h]@15
  int v49; // [sp+3Ch] [bp-54h]@15
  int v50; // [sp+40h] [bp-50h]@1
  int v51; // [sp+44h] [bp-4Ch]@6
  int v52; // [sp+4Ch] [bp-44h]@1
  int v53; // [sp+50h] [bp-40h]@1
  int v54; // [sp+54h] [bp-3Ch]@13

  _R4 = this;
  __asm
  {
    VLDR            S18, =0.0625
    VLDR            S0, [R4,#0xBC]
  }
  v6 = a2;
    VLDR            S16, [R4,#0xC0]
    VMUL.F32        S0, S0, S18
    VLDR            S20, [R4,#0xC4]
    VMOV            R0, S0
  _R0 = floorf(_R0);
    VMUL.F32        S0, S16, S18
    VMOV.F32        S22, #0.5
    VMOV            R1, S0
    VMOV            S0, R0
    VADD.F32        S16, S0, S22
  v10 = floorf(_R1);
  __asm { VMUL.F32        S0, S20, S18 }
  _R6 = v10;
  __asm { VMOV            R0, S0 }
    VSTR            S16, [R4,#0x9C]
    VMOV            R0, S16
    VADD.F32        S18, S0, S22
    VMOV            S0, R6
    VADD.F32        S20, S0, S22
    VMOV            R7, S18
    VSTR            S20, [R4,#0xA0]
    VSTR            S18, [R4,#0xA4]
    VCVTR.S32.F32   S22, S0
  _R0 = floorf(_R7);
    VSTR            S22, [R4,#0xA8]
    VCVTR.S32.F32   S0, S0
    VSTR            S0, [R4,#0xAC]
  BlockPos::BlockPos((int)&v52, (int)_R4 + 188);
  ChunkPos::ChunkPos((ChunkPos *)&v50, (const BlockPos *)&v52);
  v19 = v53;
  v20 = *((_DWORD *)_R4 + 6);
  _ZF = v20 == 0x7FFFFFFF;
  if ( v20 != 0x7FFFFFFF )
    v18 = *((_DWORD *)_R4 + 7);
    _ZF = v18 == 0x7FFFFFFF;
  if ( _ZF )
    ChunkVisibilityCache::invalidateAllElements(*((ChunkVisibilityCache **)_R4 + 1));
  else
    v22 = *((_DWORD *)_R4 + 1);
    if ( (v20 - v50) * (v20 - v50) + (v18 - v51) * (v18 - v51) > 1 << *(_BYTE *)(v22 + 16) << *(_BYTE *)(v22 + 16) )
      ChunkVisibilityCache::invalidateAllElements((ChunkVisibilityCache *)v22);
  *((_QWORD *)_R4 + 3) = *(_QWORD *)&v50;
  v23 = LevelRendererCamera::getLevelRendererArea(v6);
  if ( *((_DWORD *)v23 + 21) >= 1
    && v52 >> 4 >= *((_DWORD *)v23 + 12)
    && v52 >> 4 <= *((_DWORD *)v23 + 15)
    && v53 >> 4 >= *((_DWORD *)v23 + 13)
    && v53 >> 4 <= *((_DWORD *)v23 + 16)
    && v54 >> 4 >= *((_DWORD *)v23 + 14)
    && v54 >> 4 <= *((_DWORD *)v23 + 17) )
    DistanceFieldCullingStep::DistanceFieldCullingStep(
      (DistanceFieldCullingStep *)&v38,
      v50 - *((_QWORD *)_R4 + 21),
      v19 / 16,
      v51 - (unsigned int)(*((_QWORD *)_R4 + 21) >> 32),
      (*(_DWORD *)(*((_DWORD *)_R4 + 1) + 12) & v50)
    + ((*(_DWORD *)(*((_DWORD *)_R4 + 1) + 12) & v51) << *(_WORD *)(*((_DWORD *)_R4 + 1) + 16))
    + ((unsigned __int8)(v19 / 16) << (*(_WORD *)(*((_DWORD *)_R4 + 1) + 16) >> 8)));
    v35 = **((_DWORD **)_R4 + 1) + 16 * v38;
    *(_DWORD *)(v35 + 8) = 0;
    *(_BYTE *)(v35 + 13) |= 2u;
    *(_BYTE *)(v35 + 14) = *((_BYTE *)_R4 + 32);
    result = LevelCullerDistanceField::_addToHeap(_R4, (const DistanceFieldCullingStep *)&v38);
    v24 = LevelRendererCamera::getLevelRendererArea(v6);
    v25 = *((_DWORD *)v24 + 12);
    v38 = v25;
    v39 = *((_DWORD *)v24 + 13);
    v26 = *((_DWORD *)v24 + 14);
    v40 = *((_DWORD *)v24 + 14);
    v27 = *((_DWORD *)v24 + 15);
    v41 = *((_DWORD *)v24 + 15);
    v28 = *((_DWORD *)v24 + 16);
    v42 = *((_DWORD *)v24 + 16);
    v29 = *((_DWORD *)v24 + 17);
    v43 = *((_DWORD *)v24 + 17);
    v44 = *((_DWORD *)v24 + 18);
    v45 = *((_DWORD *)v24 + 19);
    v46 = *((_DWORD *)v24 + 20);
    v47 = *((_DWORD *)v24 + 21);
    v48 = *((_DWORD *)v24 + 22);
    v49 = *((_DWORD *)v24 + 23);
    if ( v53 <= -1 )
    {
      v39 = 0;
      v40 = v26;
      v41 = v27;
      v31 = v29 - v26 + 1;
      v42 = 0;
      v43 = v29;
      v44 = v27 - v25 + 1;
      v32 = v31 * v44;
    }
    else
      v39 = v28;
      v30 = v27 - v25 + 1;
      v42 = v28;
      v32 = v31 * v30;
      v44 = v30;
    v45 = 1;
    __asm { VMOV            R0, S20 }
    v46 = v31;
    v47 = v32;
    v48 = v32;
    __asm
      VSTR            S16, [SP,#0x90+var_8C]
      VSTR            S18, [SP,#0x90+var_84]
    v37 = floorf(_R0);
    result = (int *)LevelCullerDistanceField::_addBoundaryChunksToHeap((int)_R4, (int)&v38, (int)&v36);
  return result;
}


int *__fastcall LevelCullerDistanceField::_addToHeap(LevelCullerDistanceField *this, const DistanceFieldCullingStep *a2)
{
  LevelCullerDistanceField *v2; // r8@1
  const DistanceFieldCullingStep *v3; // r6@1
  int **v4; // r5@1
  __int64 v5; // kr00_8@1
  int *result; // r0@4
  int v8; // r2@4
  unsigned int v14; // r1@7
  int *v16; // r3@9
  int *v17; // r2@9
  int v18; // lr@9
  int v19; // r9@9
  int v20; // r4@9

  v2 = this;
  v3 = a2;
  v4 = (int **)((char *)this + 100);
  v5 = *((_QWORD *)this + 13);
  _R7 = ((signed int)v5 - *((_DWORD *)this + 25)) >> 3;
  if ( (_DWORD)v5 == HIDWORD(v5) )
  {
    std::vector<DistanceFieldCullingStep,std::allocator<DistanceFieldCullingStep>>::_M_emplace_back_aux<DistanceFieldCullingStep const&>(__PAIR__((unsigned int)a2, (unsigned int)v4));
  }
  else
    *(_QWORD *)v5 = *(_QWORD *)a2;
    *((_DWORD *)this + 26) += 8;
  result = (int *)*((_DWORD *)v2 + 1);
  v8 = *result;
  _R3 = *result + 16 * *(_DWORD *)v3;
  _ZF = (unsigned __int16)_R7 == 0;
  *(_WORD *)(_R3 + 6) = _R7;
  if ( (_WORD)_R7 )
    v3 = (const DistanceFieldCullingStep *)0xFFFF;
    _ZF = (unsigned __int16)_R7 == 0;
  if ( !_ZF )
    result = *v4;
    __asm { VLDR            S0, [R3,#8] }
    v14 = (unsigned int)v3 + (((unsigned int)(unsigned __int16)_R7 + 1) >> 1);
    _R3 = v8 + 16 * (*v4)[2 * (unsigned __int16)v14];
    __asm
    {
      VLDR            S2, [R3,#8]
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    }
    while ( _NF ^ _VF )
      v16 = &result[2 * (unsigned __int16)v14];
      *(_WORD *)(v8 + 16 * result[2 * (unsigned __int16)v14] + 6) = _R7;
      *(_WORD *)(v8 + 16 * result[2 * (unsigned __int16)_R7] + 6) = v14;
      v17 = &result[2 * (unsigned __int16)_R7];
      v18 = result[2 * (unsigned __int16)v14];
      v19 = v16[1];
      v20 = v17[1];
      result[2 * (unsigned __int16)v14] = result[2 * (unsigned __int16)_R7];
      v16[1] = v20;
      result[2 * (unsigned __int16)_R7] = v18;
      v17[1] = v19;
      if ( !(_WORD)v14 )
        break;
      result = (int *)*((_DWORD *)v2 + 25);
      v8 = **((_DWORD **)v2 + 1);
      _R7 = v8 + 16 * result[2 * (unsigned __int16)v14];
      __asm { VLDR            S0, [R7,#8] }
      _R7 = v8 + 16 * result[2 * (unsigned __int16)((((unsigned int)(unsigned __int16)v14 + 1) >> 1) - 1)];
      __asm { VLDR            S2, [R7,#8] }
      LOWORD(_R7) = v14;
      v14 = (((unsigned int)(unsigned __int16)v14 + 1) >> 1) + 0xFFFF;
      __asm
      {
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      }
  return result;
}


LevelCullerCachedBase *__fastcall LevelCullerDistanceField::LevelCullerDistanceField(LevelCullerCachedBase *a1)
{
  LevelCullerCachedBase *v1; // r4@1

  v1 = a1;
  LevelCullerCachedBase::LevelCullerCachedBase(a1);
  *(_DWORD *)v1 = &off_26E6E64;
  *((_DWORD *)v1 + 25) = 0;
  *((_DWORD *)v1 + 26) = 0;
  *((_DWORD *)v1 + 27) = 0;
  __dmb();
  *((_BYTE *)v1 + 112) = 0;
  *((_DWORD *)v1 + 29) = 0;
  *((_DWORD *)v1 + 30) = 0;
  *((_DWORD *)v1 + 31) = 0;
  *((_DWORD *)v1 + 32) = 0;
  *((_DWORD *)v1 + 33) = 0;
  *((_DWORD *)v1 + 34) = 0;
  *((_DWORD *)v1 + 35) = 1;
  *((_DWORD *)v1 + 36) = 0;
  *((_DWORD *)v1 + 37) = 0;
  *((_BYTE *)v1 + 152) = 1;
  *((_DWORD *)v1 + 39) = 0;
  *((_DWORD *)v1 + 40) = 0;
  *((_DWORD *)v1 + 41) = 0;
  *((_DWORD *)v1 + 42) = 0;
  *((_DWORD *)v1 + 43) = 0;
  *((_BYTE *)v1 + 184) = 0;
  _aeabi_memclr4((char *)v1 + 188, 48);
  return v1;
}


int __fastcall LevelCullerDistanceField::_swapElements(LevelCullerDistanceField *this, int a2, int a3)
{
  int *v3; // r12@1
  int result; // r0@1
  int v5; // r12@1
  int v6; // r5@1
  int v7; // r3@1
  int v8; // r12@1
  int v9; // r4@1
  int v10; // r6@1

  v3 = (int *)*((_DWORD *)this + 1);
  result = *((_DWORD *)this + 25);
  v5 = *v3;
  v6 = result + 8 * a3;
  *(_WORD *)(v5 + 16 * *(_DWORD *)(result + 8 * a2) + 6) = a3;
  *(_WORD *)(v5 + 16 * *(_DWORD *)(result + 8 * a3) + 6) = a2;
  v7 = result + 8 * a2;
  v8 = *(_DWORD *)(result + 8 * a2);
  v9 = *(_DWORD *)(v7 + 4);
  v10 = *(_DWORD *)(v6 + 4);
  *(_DWORD *)(result + 8 * a2) = *(_DWORD *)(result + 8 * a3);
  *(_DWORD *)(v7 + 4) = v10;
  *(_DWORD *)(result + 8 * a3) = v8;
  *(_DWORD *)(v6 + 4) = v9;
  return result;
}


int __fastcall LevelCullerDistanceField::_cullingTask(LevelCullerDistanceField *this, LevelRendererCamera *a2)
{
  LevelRendererCamera *v3; // r10@1
  int result; // r0@2
  unsigned __int8 v11; // r0@9
  unsigned __int64 *v12; // r1@12 OVERLAPPED
  unsigned __int64 *v13; // r2@12 OVERLAPPED
  int v14; // r0@15
  int v15; // r0@15
  int v16; // r1@15
  int v17; // t1@15
  int v18; // r3@24
  int v20; // r5@24
  int v21; // r3@24
  int v23; // r6@24
  char v27; // r3@26
  int v28; // r8@26
  unsigned int v29; // r5@26
  _BYTE *v30; // r8@26
  char v31; // t1@26
  LevelRendererCamera *v32; // r7@28
  int v33; // r10@28
  int v34; // r11@28
  signed int v35; // r1@28
  char *v36; // r0@32
  char *v37; // r0@36
  unsigned __int8 *v38; // r0@39
  unsigned int v39; // r2@40
  signed int v40; // r0@42
  signed int v41; // [sp+0h] [bp-70h]@13
  int v42; // [sp+4h] [bp-6Ch]@16
  int v43; // [sp+8h] [bp-68h]@16
  int v44; // [sp+Ch] [bp-64h]@16
  int v45; // [sp+10h] [bp-60h]@19
  int v46; // [sp+14h] [bp-5Ch]@24

  _R4 = this;
  v3 = a2;
  if ( (unsigned int)*(_QWORD *)((char *)this + 100) == *(_QWORD *)((char *)this + 100) >> 32 )
  {
    result = *((_BYTE *)this + 152);
    if ( !*((_BYTE *)_R4 + 152) )
      return result;
    if ( *((_BYTE *)_R4 + 152) )
    {
      *((_BYTE *)_R4 + 152) = 0;
      *((_DWORD *)_R4 + 47) = *((_DWORD *)_R4 + 53);
      *((_DWORD *)_R4 + 48) = *((_DWORD *)_R4 + 54);
      *((_DWORD *)_R4 + 49) = *((_DWORD *)_R4 + 55);
      __asm
      {
        VLDR            S0, [R4,#0xE0]
        VLDR            S4, [R4,#0xE4]
        VMUL.F32        S6, S0, S0
        VLDR            S2, [R4,#0xE8]
        VMUL.F32        S8, S4, S4
        VMUL.F32        S10, S2, S2
        VADD.F32        S6, S8, S6
        VLDR            S8, =0.0001
        VADD.F32        S6, S6, S10
        VSQRT.F32       S6, S6
        VCMPE.F32       S6, S8
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        _R0 = &Vec3::ZERO;
        __asm
        {
          VLDR            S0, [R0]
          VLDR            S4, [R0,#4]
          VLDR            S2, [R0,#8]
        }
      else
          VDIV.F32        S2, S2, S6
          VDIV.F32        S4, S4, S6
          VDIV.F32        S0, S0, S6
        VNEG.F32        S0, S0
        VNEG.F32        S4, S4
        VNEG.F32        S2, S2
        VSTR            S0, [R4,#0xC8]
        VSTR            S4, [R4,#0xCC]
        VSTR            S2, [R4,#0xD0]
      LevelCullerCachedBase::_applyChunkCacheChanges(_R4);
    }
  }
  _R6 = getTimeS();
  if ( (unsigned int)*(_QWORD *)((char *)_R4 + 100) == *(_QWORD *)((char *)_R4 + 100) >> 32 )
    *((_DWORD *)_R4 + 3 * *((_DWORD *)_R4 + 36) + 30) = *((_DWORD *)_R4 + 3 * *((_DWORD *)_R4 + 36) + 29);
    v11 = *((_BYTE *)_R4 + 32) + 1;
    *((_BYTE *)_R4 + 32) = v11;
    if ( v11 == 255 )
      *((_BYTE *)_R4 + 32) = 1;
      ChunkVisibilityCache::resetFrameCounters(*((ChunkVisibilityCache **)_R4 + 1), 254);
    LevelCullerDistanceField::_prepareForCullingPerspective(_R4, v3);
  result = LevelRendererCamera::getFogEndDistance(v3);
  *(_QWORD *)&v12 = *(_QWORD *)((char *)_R4 + 100);
  if ( v13 != v12 )
    __asm
      VMOV            S2, R0
      VLDR            S0, =0.0625
      VMOV.F32        S20, #-0.5
      VLDR            S24, =0.005
      VMUL.F32        S0, S2, S0
      VLDR            S2, =8.866
      VMOV.F32        S22, #1.5
      VMOV            D8, R6, R7
    v41 = 0;
      VADD.F32        S0, S0, S2
      VMUL.F32        S18, S0, S0
    do
      v18 = *v12 >> 32;
      v45 = *v12;
      v46 = v18;
      *v12 = *(v13 - 1);
      *(_WORD *)(**((_DWORD **)_R4 + 1) + 16 * **((_DWORD **)_R4 + 25) + 6) = 0;
      *((_DWORD *)_R4 + 26) -= 8;
      LevelCullerDistanceField::_minHeapify(_R4, 0);
      _R2 = v46;
      v20 = *((_QWORD *)_R4 + 21) >> 32;
      v21 = *((_DWORD *)_R4 + 1);
      _R1 = *((_QWORD *)_R4 + 21) + v46;
      v23 = v45;
      __asm { VMOV            S0, R1 }
      result = *(_DWORD *)v21;
        VCVT.F32.S32    S0, S0
        SBFX.W          R7, R2, #8, #8
        VMOV            S2, R7
      _R2 = v20 + (v46 << 8 >> 24);
        VCVT.F32.S32    S2, S2
        VMOV            S4, R2
        VCVT.F32.S32    S4, S4
      v42 = *((_QWORD *)_R4 + 21) + v46;
      v43 = _R7;
      __asm { VSUB.F32        S0, S20, S0 }
      v44 = v20 + (v46 << 8 >> 24);
        VLDR            S6, [R4,#0x9C]
        VLDR            S8, [R4,#0xA0]
        VSUB.F32        S2, S20, S2
        VLDR            S10, [R4,#0xA4]
        VSUB.F32        S4, S20, S4
        VADD.F32        S0, S0, S6
        VADD.F32        S2, S2, S8
        VADD.F32        S4, S4, S10
        VMUL.F32        S0, S0, S0
        VMUL.F32        S2, S2, S2
        VMUL.F32        S4, S4, S4
        VADD.F32        S0, S2, S0
        VADD.F32        S26, S0, S4
        VCMPE.F32       S26, S18
      if ( !(_NF ^ _VF) )
        goto LABEL_37;
      _R9 = result + 16 * v45;
      v27 = *(_BYTE *)(v21 + 16);
      v28 = result + 16 * v45;
      v31 = *(_BYTE *)(v28 + 13);
      v30 = (_BYTE *)(v28 + 13);
      LOBYTE(v29) = v31;
      if ( !(v31 & 0x10) || (v29 = (char)v29, ((_R1 >> v27) & 1) != (((unsigned int)(char)v29 >> 2) & 1)) )
        v37 = LevelRendererCamera::getLevelBuilder(v3);
        result = LevelBuilder::addChunkToBuild((LevelBuilder *)v37, (const SubChunkPos *)&v42);
      v32 = v3;
      v33 = (_R2 >> v27) & 1;
      v34 = (v29 >> 3) & 1;
      v35 = 0;
      if ( v33 != v34 )
        v35 = 1;
      if ( (signed int)v29 > -1 || v35 == 1 )
        v36 = LevelRendererCamera::getLevelBuilder(v32);
        result = LevelBuilder::addChunkToBuild((LevelBuilder *)v36, (const SubChunkPos *)&v42);
        if ( v33 != v34 )
          v3 = v32;
          goto LABEL_37;
        result = **((_DWORD **)_R4 + 1);
      __asm { VSQRT.F32       S0, S26 }
      result += 16 * v23;
      *(_WORD *)(result + 6) = -1;
        VLDR            S2, [R9,#8]
        VSUB.F32        S0, S2, S0
        VCMPE.F32       S0, S22
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        if ( !(*v30 & 1) )
          v14 = (int)_R4 + 12 * *((_DWORD *)_R4 + 36);
          v17 = *(_DWORD *)(v14 + 120);
          v15 = v14 + 120;
          v16 = v17;
          if ( v17 == *(_DWORD *)(v15 + 4) )
          {
            std::vector<SubChunkPos,std::allocator<SubChunkPos>>::_M_emplace_back_aux<SubChunkPos const&>(
              (unsigned __int64 *)((char *)_R4 + 12 * *((_DWORD *)_R4 + 36) + 116),
              (int)&v42);
          }
          else
            *(_DWORD *)v16 = v42;
            *(_DWORD *)(v16 + 4) = v43;
            *(_DWORD *)(v16 + 8) = v44;
            *(_DWORD *)v15 = v16 + 12;
        LevelCullerDistanceField::_adjustNeighbors(_R4, (const DistanceFieldCullingStep *)&v45);
        v3 = v32;
        if ( v41 < 199 )
          result = v41++ + 1;
        else
          result = getTimeS();
          __asm
            VMOV            D0, R0, R1
            VSUB.F64        D0, D0, D8
            VCVT.F32.F64    S0, D0
            VCMPE.F32       S0, S24
            VMRS            APSR_nzcv, FPSCR
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            *(_QWORD *)&v12 = *(_QWORD *)((char *)_R4 + 100);
            break;
          result = 0;
          v41 = 0;
LABEL_37:
      *(_QWORD *)&v12 = *(_QWORD *)((char *)_R4 + 100);
    while ( v13 != v12 );
  if ( v12 == v13 )
    v38 = (unsigned __int8 *)_R4 + 112;
      do
        v39 = __ldrex(v38);
      while ( __strex(1u, v38) );
      __dmb();
    while ( v39 );
    v40 = 0;
    if ( !*((_DWORD *)_R4 + 35) )
      v40 = 1;
    *((_DWORD *)_R4 + 35) = v40;
    result = 0;
    if ( !*((_DWORD *)_R4 + 36) )
      result = 1;
    *((_DWORD *)_R4 + 36) = result;
    __dmb();
    *((_BYTE *)_R4 + 112) = 0;
  return result;
}


int __fastcall LevelCullerDistanceField::_getElemFromStep(LevelCullerDistanceField *this, const DistanceFieldCullingStep *a2)
{
  return **((_DWORD **)this + 1) + 16 * *(_DWORD *)a2;
}


LevelCullerCachedBase *__fastcall LevelCullerDistanceField::~LevelCullerDistanceField(LevelCullerDistanceField *this)
{
  LevelCullerDistanceField *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  void *v4; // r0@5

  v1 = this;
  *(_DWORD *)this = &off_26E6E64;
  v2 = (void *)*((_DWORD *)this + 32);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 29);
  if ( v3 )
    operator delete(v3);
  v4 = (void *)*((_DWORD *)v1 + 25);
  if ( v4 )
    operator delete(v4);
  return j_j_j__ZN21LevelCullerCachedBaseD2Ev(v1);
}


int __fastcall LevelCullerDistanceField::triggerCull(int result, bool a2)
{
  *(_BYTE *)(result + 152) = 1;
  return result;
}


void __fastcall LevelCullerDistanceField::~LevelCullerDistanceField(LevelCullerDistanceField *this)
{
  LevelCullerDistanceField::~LevelCullerDistanceField(this);
}


void __fastcall LevelCullerDistanceField::~LevelCullerDistanceField(LevelCullerDistanceField *this)
{
  LevelCullerDistanceField *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  void *v4; // r0@5

  v1 = this;
  *(_DWORD *)this = &off_26E6E64;
  v2 = (void *)*((_DWORD *)this + 32);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 29);
  if ( v3 )
    operator delete(v3);
  v4 = (void *)*((_DWORD *)v1 + 25);
  if ( v4 )
    operator delete(v4);
  LevelCullerCachedBase::~LevelCullerCachedBase(v1);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall LevelCullerDistanceField::getVisibleSubchunks(int a1, char **a2)
{
  unsigned __int8 *v2; // r4@1
  unsigned int v3; // r3@2
  int result; // r0@4

  v2 = (unsigned __int8 *)(a1 + 112);
  do
  {
    do
      v3 = __ldrex(v2);
    while ( __strex(1u, v2) );
    __dmb();
  }
  while ( v3 );
  std::vector<SubChunkPos,std::allocator<SubChunkPos>>::operator=(
    a2,
    (unsigned __int64 *)(a1 + 12 * *(_DWORD *)(a1 + 140) + 116));
  result = 0;
  __dmb();
  *v2 = 0;
  return result;
}


signed int __fastcall LevelCullerDistanceField::shouldRecullAfterChunkChange(int a1, int *a2)
{
  int *v2; // r4@1
  int v3; // r5@1
  int v4; // r1@1
  int v5; // r2@3
  __int16 v6; // r0@3
  int v7; // r5@3
  unsigned int v8; // r3@3
  _BYTE *v9; // r5@3
  unsigned int v10; // t1@3
  int v11; // r1@6
  signed int result; // r0@6
  int v13; // [sp+0h] [bp-28h]@3
  unsigned int v14; // [sp+Ch] [bp-1Ch]@3
  int v15; // [sp+10h] [bp-18h]@3
  unsigned int v16; // [sp+14h] [bp-14h]@3

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  if ( v4 )
  {
    if ( *(_BYTE *)(v4 + 218)
      || (RenderChunk::getPosition((RenderChunk *)&v13, v4),
          SubChunkPos::SubChunkPos((SubChunkPos *)&v14, (const BlockPos *)&v13),
          v5 = *(_DWORD *)(v3 + 4),
          v6 = *(_WORD *)(v5 + 16),
          v7 = *(_DWORD *)v5
             + 16 * ((v15 << SHIBYTE(v6)) + (*(_DWORD *)(v5 + 12) & v14) + ((*(_DWORD *)(v5 + 12) & v16) << v6)),
          v10 = *(_BYTE *)(v7 + 13),
          v9 = (_BYTE *)(v7 + 13),
          v8 = v10,
          !(v10 & 0x10))
      || ((v14 >> v6) & 1) != ((v8 >> 2) & 1)
      || ((v16 >> v6) & 1) != ((v8 >> 3) & 1) )
    {
      result = 1;
    }
    else
      v11 = RenderChunk::isEmpty((RenderChunk *)*v2);
      result = 0;
      if ( v11 != (*v9 & 1) )
        result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall LevelCullerDistanceField::_computeDirectDistVal(LevelCullerDistanceField *this, const Vec3 *_R1, const Vec3 *_R2)
{
  int result; // r0@1

  __asm
  {
    VLDR            S0, [R1]
    VLDR            S6, [R2]
    VLDR            S2, [R1,#4]
    VLDR            S8, [R2,#4]
    VSUB.F32        S0, S6, S0
    VLDR            S4, [R1,#8]
    VSUB.F32        S2, S8, S2
    VLDR            S10, [R2,#8]
    VSUB.F32        S4, S10, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VSQRT.F32       S0, S0
    VMOV            R0, S0
  }
  return result;
}


int __fastcall LevelCullerDistanceField::_removeTopOfHeap(LevelCullerDistanceField *this, DistanceFieldCullingStep *a2)
{
  *(_QWORD *)a2 = *(_QWORD *)*((_DWORD *)this + 25);
  *(_QWORD *)*(_QWORD *)((char *)this + 100) = *(_QWORD *)((*(_QWORD *)((char *)this + 100) >> 32) - 8);
  *(_WORD *)(**((_DWORD **)this + 1) + 16 * **((_DWORD **)this + 25) + 6) = 0;
  *((_DWORD *)this + 26) -= 8;
  return j_j_j__ZN24LevelCullerDistanceField11_minHeapifyEt(this, 0);
}


BackgroundTask *__fastcall LevelCullerDistanceField::handleCullingDutiesThisUpdate(LevelCullerDistanceField *this, const Vec3 *a2, const Vec3 *a3, LevelRendererCamera *a4)
{
  LevelCullerDistanceField *v4; // r5@1
  BackgroundTask *result; // r0@1
  LevelRendererCamera *v6; // r4@1
  char v7; // r1@1
  int v8; // r6@2
  _DWORD *v9; // r0@2
  char v10; // [sp+8h] [bp-30h]@2
  int (*v11)(void); // [sp+10h] [bp-28h]@2
  _DWORD *v12; // [sp+18h] [bp-20h]@2
  int (*v13)(void); // [sp+20h] [bp-18h]@2
  signed int (__fastcall *v14)(int *); // [sp+24h] [bp-14h]@2

  v4 = this;
  result = (BackgroundTask *)1;
  *((_BYTE *)v4 + 152) = 1;
  v6 = a4;
  *((_DWORD *)v4 + 53) = *(_DWORD *)a2;
  *((_DWORD *)v4 + 54) = *((_DWORD *)a2 + 1);
  *((_DWORD *)v4 + 55) = *((_DWORD *)a2 + 2);
  *((_DWORD *)v4 + 56) = *(_DWORD *)a3;
  *((_DWORD *)v4 + 57) = *((_DWORD *)a3 + 1);
  *((_DWORD *)v4 + 58) = *((_DWORD *)a3 + 2);
  v7 = *((_BYTE *)v4 + 184);
  __dmb();
  if ( !(v7 & 1) )
  {
    *((_BYTE *)v4 + 152) = 1;
    v8 = *(_DWORD *)(LevelRendererCamera::getLevelRendererNonConst(a4) + 4520);
    v9 = operator new(8u);
    *v9 = v4;
    v9[1] = v6;
    v12 = v9;
    v13 = (int (*)(void))sub_1358412;
    v14 = sub_1358392;
    v11 = 0;
    result = TaskGroup::queue(v8, (int)&v12, (int)&v10, 0, 0);
    if ( v11 )
      result = (BackgroundTask *)v11();
    if ( v13 )
      result = (BackgroundTask *)v13();
  }
  return result;
}


int *__fastcall LevelCullerDistanceField::_adjustNeighbor(LevelCullerDistanceField *this, const DistanceFieldCullingStep *a2, signed __int8 a3, ChunkVisibilityCacheElement *_R3)
{
  LevelCullerDistanceField *v4; // r8@1
  signed int v5; // r2@1
  int v6; // r5@1
  int v7; // r0@1
  int v9; // r4@1
  _BYTE *v10; // r4@1
  int v11; // t1@1
  int *result; // r0@2
  int v17; // r6@4
  int v18; // r1@5
  int v19; // r3@5
  int *v21; // r2@7
  int v22; // r3@7
  int v23; // r6@7
  int v24; // r4@7
  int v25; // lr@7
  int v26; // r5@7
  int v27; // r3@7

  v4 = this;
  v5 = 1 << a3;
  v6 = **((_DWORD **)this + 1);
  v7 = *((_BYTE *)this + 32);
  _R6 = v6 + 16 * *(_DWORD *)a2;
  v9 = v6 + 16 * *(_DWORD *)a2;
  v11 = *(_BYTE *)(v9 + 14);
  v10 = (_BYTE *)(v9 + 14);
  if ( v11 == v7 )
  {
    *(_BYTE *)(_R6 + 12) |= v5;
    result = (int *)LevelCullerDistanceField::_computeDist(v4, a2);
    __asm
    {
      VMOV            S2, R0
      VLDR            S0, [R6,#8]
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      result = (int *)(_R6 + 8);
      __asm { VSTR            S2, [R0] }
      v17 = *(_WORD *)(_R6 + 6);
      if ( v17 )
      {
        v18 = *((_DWORD *)v4 + 25);
        result = (int *)(unsigned __int16)(((unsigned int)(v17 + 1) >> 1) - 1);
        v19 = *(_DWORD *)(v18 + 8 * (_DWORD)result);
        _R2 = v6 + 16 * v19;
        __asm
        {
          VLDR            S0, [R2,#8]
          VCMPE.F32       S2, S0
          VMRS            APSR_nzcv, FPSCR
        }
        while ( _NF ^ _VF )
          v21 = result;
          *(_WORD *)(v6 + 16 * v19 + 6) = v17;
          result = (int *)(unsigned __int16)v17;
          v22 = *(_DWORD *)(v18 + 8 * (unsigned __int16)v17);
          v23 = v18 + 8 * (_DWORD)v21;
          v24 = v18 + 8 * (_DWORD)result;
          *(_WORD *)(v6 + 16 * v22 + 6) = (_WORD)v21;
          v25 = *(_DWORD *)(v18 + 8 * (_DWORD)v21);
          v26 = *(_DWORD *)(v23 + 4);
          v27 = *(_DWORD *)(v24 + 4);
          *(_DWORD *)(v18 + 8 * (_DWORD)v21) = *(_DWORD *)(v18 + 8 * (_DWORD)result);
          *(_DWORD *)(v23 + 4) = v27;
          *(_DWORD *)(v18 + 8 * (_DWORD)result) = v25;
          *(_DWORD *)(v24 + 4) = v26;
          if ( !v21 )
            break;
          v18 = *((_DWORD *)v4 + 25);
          LOWORD(v17) = (_WORD)v21;
          result = (int *)(unsigned __int16)((((unsigned int)v21 + 1) >> 1) - 1);
          v6 = **((_DWORD **)v4 + 1);
          v19 = *(_DWORD *)(v18 + 8 * (_DWORD)result);
          _R7 = v6 + 16 * v19;
          __asm
          {
            VLDR            S2, [R7,#8]
            VCMPE.F32       S0, S2
            VMOV.F32        S0, S2
            VMRS            APSR_nzcv, FPSCR
          }
      }
  }
  else
    __asm { VMOV.F32        S0, #1.0 }
    *(_BYTE *)(_R6 + 12) = v5;
      VLDR            S2, [R3,#8]
      VADD.F32        S0, S2, S0
      VSTR            S0, [R6,#8]
    *v10 = v7;
    *(_BYTE *)(_R6 + 13) |= 2u;
    result = j_j_j__ZN24LevelCullerDistanceField10_addToHeapERK24DistanceFieldCullingStep(v4, a2);
  return result;
}


int __fastcall LevelCullerDistanceField::_freezeElement(LevelCullerDistanceField *this, const DistanceFieldCullingStep *a2)
{
  int result; // r0@1

  result = **((_DWORD **)this + 1) + 16 * *(_DWORD *)a2;
  *(_WORD *)(result + 6) = -1;
  return result;
}


int __fastcall LevelCullerDistanceField::_computeDist(LevelCullerDistanceField *this, const DistanceFieldCullingStep *a2)
{
  __int64 v5; // r2@1
  int v6; // r11@1
  __int64 v8; // kr00_8@1
  int v9; // r10@1
  int v11; // r2@1
  _DWORD *v12; // r8@1
  int v13; // r7@1
  signed int v14; // r7@2
  int v15; // r1@4
  int v16; // r3@6
  int v17; // lr@6
  int v18; // r0@6
  int v19; // r4@6
  int v20; // r2@6
  unsigned int v21; // r3@6
  char v22; // r5@6
  int v23; // r6@6
  unsigned int v24; // r2@6
  int v26; // r1@6
  int v28; // r12@13
  int v30; // r2@15
  int v31; // r0@15
  int result; // r0@36
  int v33; // [sp+0h] [bp-50h]@2
  int v34; // [sp+4h] [bp-4Ch]@2
  _DWORD *v35; // [sp+8h] [bp-48h]@2
  int v36; // [sp+10h] [bp-40h]@1
  int v37; // [sp+14h] [bp-3Ch]@1
  LevelCullerDistanceField *v38; // [sp+18h] [bp-38h]@1
  int v39; // [sp+1Ch] [bp-34h]@6
  int v40; // [sp+20h] [bp-30h]@1
  int v41; // [sp+24h] [bp-2Ch]@1
  int v42; // [sp+28h] [bp-28h]@1

  __asm
  {
    VMOV.F32        S2, #-1.0
    VLDR            S0, =0.0
    VMOV.F32        S10, #4.0
  }
  v5 = *((_QWORD *)this + 21);
    VMOV.F32        S12, #-1.5
    VMOV.F32        S14, #0.25
  v38 = this;
  __asm { VMOV.F32        S1, #2.25 }
  v37 = *((_DWORD *)this + 1);
  __asm { VMOV.F32        S4, #-2.0 }
  v6 = *((_DWORD *)this + 3);
  __asm { VMOV.F32        S3, #1.0 }
  v8 = *(_QWORD *)a2;
  _R1 = *(_QWORD *)a2 >> 32;
  __asm { VMOV.F32        S6, S0 }
  v40 = HIDWORD(v5) + (_R1 << 8 >> 24);
  v42 = v5 + _R1;
  v9 = 0;
  v41 = *(_DWORD *)v37;
  __asm { SBFX.W          R3, R1, #8, #8 }
  v11 = *(_BYTE *)(*(_DWORD *)v37 + 16 * v8 + 12);
  v12 = &Facing::DIRECTION[1];
  __asm { VLDR            S8, =3.4028e38 }
  v13 = 0;
  v36 = _R3;
  do
    __asm { VMOV.F32        S7, S8 }
    v33 = v13;
    v34 = v9;
    __asm { VMOV.F32        S5, S8 }
    v14 = 2;
    v35 = v12;
    do
    {
      if ( v11 & (1 << v9) )
      {
        v15 = *v12 + _R3;
        if ( v15 < v6 && v15 >= 0 )
        {
          v16 = *(v12 - 1);
          v39 = v16;
          v17 = *(_DWORD *)(v37 + 12);
          v18 = v12[1];
          v19 = *((_BYTE *)v38 + 32);
          v20 = (v42 + v16) & v17;
          v21 = *(_WORD *)(v37 + 16);
          v22 = v21;
          v23 = ((v17 & (v40 + v18)) << v21) + v20;
          v24 = v21 >> 8;
          _R3 = v41 + 16 * ((v15 << SBYTE1(v21)) + v23);
          v26 = *(_BYTE *)(_R3 + 14);
          _ZF = v26 == v19;
          if ( v26 == v19 )
            _ZF = *(_WORD *)(_R3 + 6) == 0xFFFF;
          if ( !_ZF )
            goto LABEL_39;
          __asm
          {
            VLDR            S9, [R3,#8]
            VCMPE.F32       S9, S7
            VMRS            APSR_nzcv, FPSCR
          }
          if ( _NF ^ _VF )
            if ( *(_BYTE *)(_R3 + 12) & (1 << v9) )
            {
              _R3 = v36;
              v28 = v36 + 2 * *v12;
              if ( v28 >= v6 || v28 < 0 )
              {
                __asm { VMOV.F32        S5, S8 }
              }
              else
                __asm
                {
                  VMOV.F32        S7, S8
                  VMOV.F32        S11, S8
                }
                _R0 = v41 + 16 * (((v17 & (v40 + 2 * v18)) << v22) + ((v42 + 2 * v39) & v17) + (v28 << v24));
                v30 = *(_WORD *)(_R0 + 6);
                __asm { VLDR            S5, [R0,#8] }
                v31 = *(_BYTE *)(_R0 + 14);
                if ( v30 == 0xFFFF )
                  __asm { VMOVEQ.F32      S7, S5 }
                  VCMPE.F32       S5, S9
                  VMOV.F32        S5, S8
                if ( _ZF )
                  __asm { VMOVEQ.F32      S11, S7 }
                __asm { VMRS            APSR_nzcv, FPSCR }
                if ( _NF ^ _VF )
                  __asm { VMOVLT.F32      S5, S11 }
              __asm { VMOV.F32        S7, S9 }
            }
            else
          else
LABEL_39:
            _R3 = v36;
          v11 = *(_BYTE *)(*(_DWORD *)v37 + 16 * v8 + 12);
        }
      }
      LOBYTE(v9) = v9 + 1;
      v12 += 3;
      --v14;
    }
    while ( v14 );
    __asm
      VCMPE.F32       S5, S8
      VMRS            APSR_nzcv, FPSCR
    if ( _ZF )
      __asm
        VCMPE.F32       S7, S8
        VMRS            APSR_nzcv, FPSCR
      if ( !_ZF )
        __asm
          VMULNE.F32      S5, S7, S7
          VMULNE.F32      S7, S7, S4
          VADDNE.F32      S6, S6, S3
          VADDNE.F32      S2, S5, S2
          VADDNE.F32      S0, S0, S7
    else
        VMUL.F32        S7, S7, S10
        VADD.F32        S6, S6, S1
        VSUB.F32        S5, S7, S5
        VMUL.F32        S7, S5, S5
        VMUL.F32        S5, S5, S12
        VMUL.F32        S7, S7, S14
        VADD.F32        S0, S0, S5
        VADD.F32        S2, S7, S2
    v9 = v34 + 2;
    v12 = v35 + 6;
    v13 = v33 + 1;
  while ( v33 != 2 );
    VMOV.F32        S8, #-4.0
    VMUL.F32        S10, S0, S0
    VMUL.F32        S8, S6, S8
    VMUL.F32        S2, S8, S2
    VADD.F32        S2, S10, S2
    VCMPE.F32       S2, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      VMUL.F32        S2, S6, S4
      VDIV.F32        S0, S0, S2
  else
      VSQRT.F32       S2, S2
      VADD.F32        S4, S6, S6
      VSUB.F32        S0, S2, S0
      VDIV.F32        S0, S0, S4
  __asm { VMOV            R0, S0 }
  return result;
}


int __fastcall LevelCullerDistanceField::_isElemFrozen(LevelCullerDistanceField *this, const ChunkVisibilityCacheElement *a2)
{
  int v2; // r2@1
  int v3; // r0@1
  signed int v4; // r3@1
  int v5; // r1@1
  bool v6; // zf@1
  signed int v7; // r2@1

  v2 = *((_WORD *)a2 + 3);
  v3 = *((_BYTE *)this + 32);
  v4 = 0;
  v5 = *((_BYTE *)a2 + 14);
  v6 = v2 == 0xFFFF;
  v7 = 0;
  if ( v6 )
    v7 = 1;
  if ( v5 == v3 )
    v4 = 1;
  return v4 & v7;
}
