

void __fastcall ConsoleChunkBlender::_shiftColumnBySetBlocks(ConsoleChunkBlender *this, LevelChunk *a2, int a3, int a4, int a5, int a6)
{
  ConsoleChunkBlender::_shiftColumnBySetBlocks(this, a2, a3, a4, a5, a6);
}


int __fastcall ConsoleChunkBlender::_calcAlphaOverworld(ConsoleChunkBlender *this, float _R1, float _R2)
{
  __asm
  {
    VMOV.F32        S0, #-0.5
    VMOV            S2, R1
    VMOV            S4, R2
    VADD.F32        S0, S2, S0
    VMOV.F32        S2, #0.5
    VADD.F32        S0, S0, S0
    VMUL.F32        S4, S4, S2
    VADD.F32        S0, S0, S2
    VLDR            S2, =0.0
    VADD.F32        S0, S0, S4
    VMOV.F32        S4, #1.0
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S0, S4
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S2, S0 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S2, S4 }
  __asm { VMOV            R0, S2 }
  return j_j_j__ZN3mce4Math12hermiteBlendEf_0(_R0, _R1);
}


int __fastcall ConsoleChunkBlender::blendChunkEnd(ConsoleChunkBlender *this, LevelChunk *a2, LevelChunk *a3)
{
  LevelChunk *v4; // r4@1
  __int64 *v5; // r0@1
  int v10; // r0@1
  int v13; // r5@6
  int v14; // r2@6
  _BYTE *v15; // r4@6
  _BYTE *v16; // r6@6
  int v17; // r0@7
  _BYTE *v19; // r8@9
  int v21; // r9@9
  _BYTE *v24; // r3@9
  ConsoleChunkBlender *v25; // r11@9
  _BYTE *v26; // r5@9
  unsigned int v28; // lr@9
  unsigned int v29; // r2@9
  int v30; // r7@10
  _BYTE *v31; // r6@12
  _BYTE *v32; // r7@12
  int v33; // r4@13
  LevelChunk *v35; // r0@21
  const ChunkBlockPos *v36; // r1@21
  int v37; // r2@21
  bool v38; // zf@22
  int v39; // r0@31
  unsigned int v40; // r1@32
  unsigned int v41; // r2@32
  char *v42; // r0@32
  unsigned int v43; // r2@32
  unsigned int v44; // r10@32
  char v45; // r9@37
  int v46; // r11@37
  int result; // r0@44
  int v48; // [sp+10h] [bp-98h]@6
  _BYTE *v49; // [sp+14h] [bp-94h]@6
  int v50; // [sp+18h] [bp-90h]@6
  int v51; // [sp+20h] [bp-88h]@6
  LevelChunk *v52; // [sp+24h] [bp-84h]@1
  char v53; // [sp+28h] [bp-80h]@37
  int v54; // [sp+2Ch] [bp-7Ch]@37
  char v55; // [sp+30h] [bp-78h]@37
  char v56; // [sp+31h] [bp-77h]@37
  char v57; // [sp+34h] [bp-74h]@26
  int v58; // [sp+38h] [bp-70h]@26
  char v59; // [sp+3Ch] [bp-6Ch]@26
  char v60; // [sp+3Dh] [bp-6Bh]@26
  char v61; // [sp+40h] [bp-68h]@19
  int v62; // [sp+44h] [bp-64h]@19
  char v63; // [sp+48h] [bp-60h]@19
  char v64; // [sp+49h] [bp-5Fh]@19
  float v65; // [sp+4Ch] [bp-5Ch]@9
  unsigned __int16 v66; // [sp+58h] [bp-50h]@6
  __int16 v67; // [sp+5Ah] [bp-4Eh]@6
  int v68; // [sp+5Ch] [bp-4Ch]@1
  int v69; // [sp+64h] [bp-44h]@9

  _R7 = this;
  v52 = a2;
  v4 = a3;
  v5 = (__int64 *)j_LevelChunk::getPosition(a3);
  _R5 = 0;
  j_BlockPos::BlockPos((int)&v68, v5, 0);
  __asm { VMOV.F32        S16, #1.0 }
  v10 = (int)_R7 + 20;
  __asm { VLDR            S0, =0.0625 }
  do
  {
    __asm { VMOV            S2, R5 }
    _R1 = 0;
    _R2 = v10;
    __asm
    {
      VCVT.F32.S32    S2, S2
      VMUL.F32        S2, S2, S0
      VSUB.F32        S4, S16, S2
    }
    do
      __asm { VMOV            S6, R1 }
      ++_R1;
      __asm
      {
        VCVT.F32.S32    S6, S6
        VLDR            S10, [R7,#4]
        VLDR            S12, [R7,#8]
        VLDR            S14, [R7,#0xC]
        VLDR            S1, [R7,#0x10]
        VMUL.F32        S6, S6, S0
        VSUB.F32        S8, S16, S6
        VMUL.F32        S12, S12, S6
        VMUL.F32        S6, S1, S6
        VMUL.F32        S10, S8, S10
        VMUL.F32        S8, S14, S8
        VADD.F32        S10, S10, S12
        VADD.F32        S6, S6, S8
        VMUL.F32        S8, S10, S4
        VMUL.F32        S6, S6, S2
        VSTMIA          R2!, {S6}
      }
    while ( !_ZF );
    ++_R5;
    v10 += 64;
  }
  while ( _R5 != 16 );
  v13 = (int)v4;
  v14 = *((_DWORD *)v4 + 35);
  v67 = 0;
  __asm
    VMOV.F32        S18, #3.0
    VMOV.F32        S20, #0.5
  v15 = (_BYTE *)*(_BYTE *)(Block::mObsidian + 4);
  v51 = 16 * v14 - 1;
  v50 = (int)v52 + 76;
  v48 = v13 + 76;
  v49 = (_BYTE *)*(_BYTE *)(Block::mIronFence + 4);
  v66 = 0;
  v16 = &BlockID::AIR;
    v17 = 0;
    HIBYTE(v66) = 0;
      LOWORD(_R1) = 0;
      v67 = 0;
      if ( v51 < 1 )
        goto LABEL_43;
      do
        _R1 = (signed __int16)_R1;
        __asm { VMOV            S0, R1 }
        v19 = v15;
        _R1 = v68 + v66;
        v21 = v13;
        _R0 = v69 + ((unsigned int)v66 >> 8);
        __asm
        {
          VMOV            S2, R1
          VMOV            S4, R0
          VCVT.F32.S32    S2, S2
          VCVT.F32.S32    S0, S0
          VCVT.F32.S32    S4, S4
          VMUL.F32        S2, S2, S18
          VMUL.F32        S0, S0, S18
          VMUL.F32        S4, S4, S18
          VSTR            S2, [SP,#0xA8+var_5C]
          VSTR            S0, [SP,#0xA8+var_58]
          VSTR            S4, [SP,#0xA8+var_54]
        }
        _R0 = j_PerlinSimplexNoise::getValueNormalized(ConsoleChunkBlender::sConversionBlendNoise, (const Vec3 *)&v65);
        v24 = v16;
        v25 = _R7;
        v26 = v16;
        _R1 = (int)_R7 + 64 * (unsigned __int8)v66 + 4 * HIBYTE(v66);
        __asm { VLDR            S0, [R1,#0x14] }
        v28 = *((_DWORD *)v52 + 35);
        v29 = v67 >> 4;
        if ( v29 < v28 )
          v26 = v16;
          v30 = *(_DWORD *)(v50 + 4 * v29);
          if ( v30 )
            v26 = (_BYTE *)(*(_DWORD *)(v50 + 4 * v29) + (((unsigned int)v66 >> 4) & 0xFF0 | v67 & 0xF) + (v66 << 8));
        v31 = (_BYTE *)*v26;
        v13 = v21;
        v32 = v24;
        if ( v29 < *(_DWORD *)(v21 + 140) )
          v32 = v24;
          v33 = *(_DWORD *)(v48 + 4 * v29);
          if ( v33 )
            v32 = (_BYTE *)(*(_DWORD *)(v48 + 4 * v29) + (v67 & 0xF | ((unsigned int)v66 >> 4) & 0xFF0) + (v66 << 8));
        v15 = v19;
        _ZF = v31 == v19;
        if ( v31 != v19 )
          v32 = (_BYTE *)*v32;
          _ZF = v32 == v19;
        if ( _ZF )
          v16 = v24;
          v63 = (char)v19;
          v64 = 0;
          v62 = 0;
          j_LevelChunk::setBlockAndData((int)&v61, v21, (int)&v66, (unsigned int)&v63, 0, &v62);
          _R7 = v25;
          if ( v62 )
            (*(void (**)(void))(*(_DWORD *)v62 + 4))();
          v35 = (LevelChunk *)v21;
          v36 = (const ChunkBlockPos *)&v66;
          v37 = 0;
LABEL_40:
          j_LevelChunk::setBlockExtraData(v35, v36, v37);
          goto LABEL_41;
        v38 = v31 == v49;
        if ( v31 != v49 )
          v38 = v32 == v49;
        if ( !v38 )
          __asm { VMOV            S2, R0 }
          __asm { VSUB.F32        S0, S16, S0 }
          __asm
          {
            VMUL.F32        S2, S2, S20
            VADD.F32        S2, S2, S20
            VCMPE.F32       S0, S2
            VMRS            APSR_nzcv, FPSCR
          }
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            goto LABEL_41;
          if ( v29 >= v28 )
            v42 = (char *)&FullBlock::AIR;
            LOBYTE(v44) = BYTE1(FullBlock::AIR);
          else
            v39 = *(_DWORD *)(v50 + 4 * v29);
            if ( v39 )
            {
              v40 = (((unsigned int)v66 >> 4) & 0xFF0 | v67 & 0xF) + (v66 << 8);
              v41 = v39 + ((unsigned int)(unsigned __int16)v40 >> 1);
              v42 = (char *)(v39 + v40);
              v43 = *(_BYTE *)(v41 + 4096);
              LOBYTE(v44) = v43 & 0xF;
              if ( (((unsigned int)v66 >> 4) & 0xF0 | v67 & 0xF) & 1 )
                v44 = v43 >> 4;
            }
            else
              LOBYTE(v44) = 0;
              v42 = (char *)&BlockID::AIR;
          v45 = *v42;
          v46 = j_LevelChunk::getBlockExtraData(v52, (const ChunkBlockPos *)&v66);
          v55 = v45;
          v56 = v44;
          v54 = 0;
          j_LevelChunk::setBlockAndData((int)&v53, v13, (int)&v66, (unsigned int)&v55, 0, &v54);
          if ( v54 )
            (*(void (**)(void))(*(_DWORD *)v54 + 4))();
          v35 = (LevelChunk *)v13;
          v37 = v46;
          goto LABEL_40;
        v16 = v24;
        v59 = (char)v49;
        v60 = 0;
        v58 = 0;
        j_LevelChunk::setBlockAndData((int)&v57, v21, (int)&v66, (unsigned int)&v59, 0, &v58);
        if ( v58 )
          (*(void (**)(void))(*(_DWORD *)v58 + 4))();
        j_LevelChunk::setBlockExtraData((LevelChunk *)v21, (const ChunkBlockPos *)&v66, 0);
        _R7 = v25;
LABEL_41:
        LOWORD(_R1) = v67 + 1;
        v67 = _R1;
      while ( (signed __int16)_R1 < v51 );
      v17 = HIBYTE(v66);
LABEL_43:
      HIBYTE(v66) = ++v17;
    while ( (unsigned __int8)v17 < 0x10u );
    LOBYTE(v66) = v66 + 1;
    result = (unsigned __int8)v66;
  while ( (unsigned __int8)v66 < 0x10u );
  return result;
}


void __fastcall ConsoleChunkBlender::setInterpolants(ConsoleChunkBlender *this, int _R1, int _R2, int _R3, int a5)
{
  ConsoleChunkBlender::setInterpolants(this, _R1, _R2, _R3, a5);
}


int __fastcall ConsoleChunkBlender::_prepInterpTable(int result)
{
  int v5; // r12@1

  __asm { VMOV.F32        S2, #1.0 }
  v5 = result + 20;
  __asm { VLDR            S0, =0.0625 }
  _R2 = 0;
  do
  {
    __asm { VMOV            S4, R2 }
    _R3 = 0;
    _R1 = v5;
    __asm
    {
      VCVT.F32.S32    S4, S4
      VMUL.F32        S4, S4, S0
      VSUB.F32        S6, S2, S4
    }
    do
      __asm { VMOV            S8, R3 }
      ++_R3;
      __asm
      {
        VCVT.F32.S32    S8, S8
        VLDR            S12, [R0,#4]
        VLDR            S14, [R0,#8]
        VLDR            S1, [R0,#0xC]
        VLDR            S3, [R0,#0x10]
        VMUL.F32        S8, S8, S0
        VSUB.F32        S10, S2, S8
        VMUL.F32        S14, S14, S8
        VMUL.F32        S8, S3, S8
        VMUL.F32        S12, S12, S10
        VMUL.F32        S10, S1, S10
        VADD.F32        S12, S14, S12
        VADD.F32        S8, S8, S10
        VMUL.F32        S10, S12, S6
        VMUL.F32        S8, S8, S4
        VSTMIA          R1!, {S8}
      }
    while ( !_ZF );
    ++_R2;
    v5 += 64;
  }
  while ( _R2 != 16 );
  return result;
}


signed int __fastcall ConsoleChunkBlender::_findTopMostWaterHeight(ConsoleChunkBlender *this, LevelChunk *a2, int a3, int a4)
{
  LevelChunk *v4; // r11@1
  int v5; // r0@1
  int v6; // r6@1
  int v7; // r4@1
  signed int v8; // r7@1
  _BYTE *v9; // r0@3
  int v10; // r1@4
  int v11; // r0@6
  int v13; // [sp+0h] [bp-30h]@1
  int v14; // [sp+4h] [bp-2Ch]@1
  char *v15; // [sp+8h] [bp-28h]@1

  v4 = a2;
  v5 = *((_DWORD *)a2 + 35);
  v14 = 16 * a4 & 0xFF0;
  v15 = (char *)a2 + 76;
  v6 = 16 * v5;
  v7 = 4 * ((_DWORD)a2 + 4 * v5 + 76) - 1 - 4 * ((_DWORD)a2 + 76);
  v8 = v7 << 16;
  v13 = a3 << 8;
  while ( v7 >= 0 )
  {
    --v6;
    v9 = &BlockID::AIR;
    if ( (unsigned int)(v8 >> 20) < *((_DWORD *)v4 + 35) )
    {
      v10 = *(_DWORD *)&v15[4 * (v8 >> 20)];
      v9 = &BlockID::AIR;
      if ( v10 )
        v9 = (_BYTE *)(v10 + (v7 & 0xF | v14) + v13);
    }
    v11 = *v9;
    if ( v11 == *(_BYTE *)(Block::mStillWater + 4) )
      return v6;
    if ( v11 == *(_BYTE *)(Block::mFlowingWater + 4) )
    v8 -= 0x10000;
    --v7;
    if ( (*(int (**)(void))(*(_DWORD *)Block::mBlocks[v11] + 104))() == 1 )
      return -1;
  }
  return v7;
}


void __fastcall ConsoleChunkBlender::blendChunkOverworld(ConsoleChunkBlender *this, LevelChunk *a2, LevelChunk *a3)
{
  ConsoleChunkBlender::blendChunkOverworld(this, a2, a3);
}


void __fastcall ConsoleChunkBlender::blendChunkOverworld(ConsoleChunkBlender *this, LevelChunk *a2, LevelChunk *a3)
{
  LevelChunk *v4; // r10@1
  LevelChunk *v5; // r9@1
  __int64 *v6; // r0@1
  int v11; // r0@1
  char *v14; // r8@6
  int v15; // r4@6
  int v16; // r7@7
  _DWORD *v17; // r6@7
  LevelChunk *v22; // r8@10
  int v23; // r11@10
  LevelChunk *v24; // r6@10
  int v25; // r5@10
  int v26; // r9@10
  int v27; // r7@11
  int v28; // r1@12
  signed int v29; // r4@12
  int v30; // r9@13
  _BYTE *v31; // r0@14
  int v32; // r1@15
  int v33; // r0@17
  int v34; // r1@18
  signed int v35; // r4@18
  int v36; // r7@19
  _BYTE *v37; // r0@20
  int v38; // r1@21
  int v39; // r0@23
  int v40; // r0@24
  int v41; // r1@24
  int v42; // r5@24
  int v43; // r11@24
  signed int v44; // r4@24
  _BYTE *v45; // r0@26
  int v46; // r1@27
  int v47; // r0@29
  int v48; // r1@29
  int v50; // r0@35
  float v51; // r1@35
  int v52; // r4@35
  int v53; // r5@35
  signed int v54; // r6@35
  _BYTE *v55; // r0@37
  int v56; // r1@38
  int v57; // r0@40
  ConsoleChunkBlender *v66; // r0@57
  ConsoleChunkBlender *v67; // [sp+8h] [bp-490h]@6
  int v68; // [sp+10h] [bp-488h]@11
  int v69; // [sp+18h] [bp-480h]@12
  int v70; // [sp+1Ch] [bp-47Ch]@10
  int v71; // [sp+20h] [bp-478h]@10
  int v72; // [sp+28h] [bp-470h]@10
  int v73; // [sp+2Ch] [bp-46Ch]@11
  int v74; // [sp+34h] [bp-464h]@12
  int v75; // [sp+3Ch] [bp-45Ch]@1
  int v76; // [sp+44h] [bp-454h]@8
  char v77; // [sp+48h] [bp-450h]@6

  _R5 = this;
  v4 = a2;
  v5 = a3;
  v6 = (__int64 *)j_LevelChunk::getPosition(a3);
  _R4 = 0;
  j_BlockPos::BlockPos((int)&v75, v6, 0);
  __asm { VMOV.F32        S16, #1.0 }
  v11 = (int)_R5 + 20;
  __asm { VLDR            S0, =0.0625 }
  do
  {
    __asm { VMOV            S2, R4 }
    _R1 = 0;
    _R2 = v11;
    __asm
    {
      VCVT.F32.S32    S2, S2
      VMUL.F32        S2, S2, S0
      VSUB.F32        S4, S16, S2
    }
    do
      __asm { VMOV            S6, R1 }
      ++_R1;
      __asm
      {
        VCVT.F32.S32    S6, S6
        VLDR            S10, [R5,#4]
        VLDR            S12, [R5,#8]
        VLDR            S14, [R5,#0xC]
        VLDR            S1, [R5,#0x10]
        VMUL.F32        S6, S6, S0
        VSUB.F32        S8, S16, S6
        VMUL.F32        S12, S12, S6
        VMUL.F32        S6, S1, S6
        VMUL.F32        S10, S8, S10
        VMUL.F32        S8, S14, S8
        VADD.F32        S10, S10, S12
        VADD.F32        S6, S6, S8
        VMUL.F32        S8, S10, S4
        VMUL.F32        S6, S6, S2
        VSTMIA          R2!, {S6}
      }
    while ( !_ZF );
    ++_R4;
    v11 += 64;
  }
  while ( _R4 != 16 );
  __asm { VMOV.F32        S18, #3.0 }
  v67 = _R5;
  v14 = &v77;
  v15 = 0;
    v16 = 0;
    v17 = v14;
      _R0 = v75 + v15;
      __asm { VMOV            S0, R0 }
      _R0 = v16 + v76;
        VMOV            S2, R0
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
        VMUL.F32        S0, S0, S18
        VMUL.F32        S2, S2, S18
        VMOV            R1, S0
        VMOV            R2, S2
      ++v16;
      *v17 = j_PerlinSimplexNoise::getValueNormalized(ConsoleChunkBlender::sConversionBlendNoise, _R1, _R2);
      ++v17;
    while ( v16 != 16 );
    ++v15;
    v14 += 64;
  while ( v15 != 16 );
  v22 = v5;
  v23 = (int)v5 + 76;
  v24 = v4;
  v25 = (int)v4 + 76;
  __asm { VMOV.F32        S18, #0.5 }
  v71 = ~(4 * ((_DWORD)v5 + 76));
  v70 = ~(4 * ((_DWORD)v4 + 76));
  v26 = 0;
  __asm
    VLDR            S20, =0.0
    VLDR            S22, =0.66
  v72 = v23;
    v27 = 0;
    v68 = v26;
    v73 = v26 << 8;
      v69 = v27;
      v28 = v70 + 4 * (v25 + 4 * *((_DWORD *)v24 + 35));
      v29 = v28 << 16;
      v74 = 16 * v27;
      do
        v30 = v28;
        if ( v28 < 0 )
          break;
        v31 = &BlockID::AIR;
        if ( (unsigned int)(v29 >> 20) < *((_DWORD *)v24 + 35) )
        {
          v32 = *(_DWORD *)(v25 + 4 * (v29 >> 20));
          v31 = &BlockID::AIR;
          if ( v32 )
            v31 = (_BYTE *)(v32 + (v30 & 0xF | v74) + v73);
        }
        v33 = (*(int (**)(void))(*(_DWORD *)Block::mBlocks[*v31] + 104))();
        v29 -= 0x10000;
        v28 = v30 - 1;
      while ( v33 != 1 );
      v34 = v71 + 4 * (v23 + 4 * *((_DWORD *)v22 + 35));
      v35 = v34 << 16;
        v36 = v34;
        if ( v34 < 0 )
        v37 = &BlockID::AIR;
        if ( (unsigned int)(v35 >> 20) < *((_DWORD *)v22 + 35) )
          v38 = *(_DWORD *)(v23 + 4 * (v35 >> 20));
          if ( v38 )
            v37 = (_BYTE *)(v38 + (v36 & 0xF | v74) + v73);
        v39 = (*(int (**)(void))(*(_DWORD *)Block::mBlocks[*v37] + 104))();
        v35 -= 0x10000;
        v34 = v36 - 1;
      while ( v39 != 1 );
      v40 = *((_DWORD *)v24 + 35);
      v41 = v25 + 4 * v40;
      v42 = 16 * v40;
      v43 = v70 + 4 * v41;
      v44 = v43 << 16;
      while ( v43 >= 0 )
        --v42;
        v45 = &BlockID::AIR;
        if ( (unsigned int)(v44 >> 20) < *((_DWORD *)v24 + 35) )
          v46 = *((_DWORD *)v4 + (v44 >> 20) + 19);
          if ( v46 )
            v45 = (_BYTE *)(v46 + (v43 & 0xF | v74) + v73);
        v47 = *v45;
        v48 = *(_BYTE *)(Block::mStillWater + 4);
        _ZF = v47 == v48;
        if ( v47 != v48 )
          _ZF = v47 == *(_BYTE *)(Block::mFlowingWater + 4);
        if ( _ZF )
          v43 = v42;
        v44 -= 0x10000;
        --v43;
        if ( (*(int (**)(void))(*(_DWORD *)Block::mBlocks[v47] + 104))() == 1 )
          v43 = -1;
      v50 = *((_DWORD *)v22 + 35);
      LODWORD(v51) = v72 + 4 * v50;
      v52 = 16 * v50;
      v53 = v71 + 4 * LODWORD(v51);
      v54 = v53 << 16;
      while ( v53 >= 0 )
        --v52;
        v55 = &BlockID::AIR;
        if ( (unsigned int)(v54 >> 20) < *((_DWORD *)v22 + 35) )
          v56 = *(_DWORD *)(v72 + 4 * (v54 >> 20));
          if ( v56 )
            v55 = (_BYTE *)(v56 + (v53 & 0xF | v74) + v73);
        v57 = *v55;
        LODWORD(v51) = *(_BYTE *)(Block::mStillWater + 4);
        if ( v57 == LODWORD(v51) )
          v53 = v52;
        LODWORD(v51) = *(_BYTE *)(Block::mFlowingWater + 4);
        v54 -= 0x10000;
        --v53;
        if ( (*(int (**)(void))(*(_DWORD *)Block::mBlocks[v57] + 104))() == 1 )
          v53 = -1;
      _R4 = 0;
      if ( (v36 | v30) > -1 )
        _R4 = v36 - v30;
      if ( v30 )
        _R0 = (int)v67 + 64 * v68 + 4 * v69;
        __asm
          VLDR            S0, [R0,#0x14]
          VSUB.F32        S0, S18, S0
        _R0 = &v77 + 64 * v68 + 4 * v69;
          VLDR            S2, [R0]
          VMUL.F32        S2, S2, S18
          VADD.F32        S0, S0, S0
          VADD.F32        S0, S0, S18
          VADD.F32        S0, S0, S2
          VMOV.F32        S2, S20
          VCMPE.F32       S0, #0.0
          VMRS            APSR_nzcv, FPSCR
          VCMPE.F32       S0, S16
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          __asm { VMOVGT.F32      S2, S0 }
        __asm { VMRS            APSR_nzcv, FPSCR }
          __asm { VMOVGT.F32      S2, S16 }
        __asm { VMOV            R0, S2 }
        _R0 = j_mce::Math::hermiteBlend(_R0, v51);
          VMOV            S0, R4
          VMOV            S24, R0
          VCVT.F32.S32    S0, S0
          VMUL.F32        S0, S24, S0
          VMOV            R0, S0
        _R0 = COERCE_CONSOLECHUNKBLENDER__(j_floorf_0(_R0));
          VMOV            S0, R0
          VCVTR.S32.F32   S0, S0
        if ( _NF ^ _VF )
          v43 = v53;
        __asm { VMOV            R6, S0 }
        if ( _R6 )
          __asm
          {
            VCMPE.F32       S24, S22
            VMRS            APSR_nzcv, FPSCR
          }
          if ( _NF ^ _VF )
            v66 = (ConsoleChunkBlender *)-_R6;
          else
            j_ConsoleChunkBlender::_copyColumnFromGenerated(_R0, v4, v22, v68, v69);
            v66 = (ConsoleChunkBlender *)(_R4 - _R6);
          j_ConsoleChunkBlender::_shiftColumnBySetBlocks(v66, v22, v68, v69, (int)v66, v43);
      v24 = v4;
      v27 = v69 + 1;
      v23 = v72;
      v25 = (int)v4 + 76;
    while ( v69 != 15 );
    v26 = v68 + 1;
  while ( v68 != 15 );
}


int __fastcall ConsoleChunkBlender::blendChunkNether(ConsoleChunkBlender *this, LevelChunk *a2, LevelChunk *a3)
{
  LevelChunk *v3; // r4@1
  LevelChunk *v5; // r8@1
  __int64 *v6; // r0@1
  int v12; // r0@1
  int v15; // r0@7
  __int16 v21; // r0@9
  _BYTE *v22; // r2@11
  int v23; // r3@12
  unsigned int v24; // r1@15
  int v25; // r1@16
  unsigned int v26; // r0@17
  unsigned int v27; // r2@17
  char *v28; // r0@17
  unsigned int v29; // r2@17
  unsigned int v30; // r11@17
  char v31; // r5@22
  int v32; // r6@22
  int result; // r0@28
  int v34; // [sp+24h] [bp-6Ch]@6
  char v35; // [sp+28h] [bp-68h]@22
  int v36; // [sp+2Ch] [bp-64h]@22
  char v37; // [sp+30h] [bp-60h]@22
  char v38; // [sp+31h] [bp-5Fh]@22
  float v39; // [sp+34h] [bp-5Ch]@9
  int v40; // [sp+40h] [bp-50h]@6
  int v41; // [sp+44h] [bp-4Ch]@1
  int v42; // [sp+4Ch] [bp-44h]@9

  v3 = a3;
  _R7 = this;
  v5 = a2;
  v6 = (__int64 *)j_LevelChunk::getPosition(a3);
  _R6 = 0;
  j_BlockPos::BlockPos((int)&v41, v6, 0);
  __asm { VMOV.F32        S16, #1.0 }
  v12 = (int)_R7 + 20;
  __asm { VLDR            S0, =0.0625 }
  do
  {
    __asm { VMOV            S2, R6 }
    _R1 = 0;
    _R2 = v12;
    __asm
    {
      VCVT.F32.S32    S2, S2
      VMUL.F32        S2, S2, S0
      VSUB.F32        S4, S16, S2
    }
    do
      __asm { VMOV            S6, R1 }
      ++_R1;
      __asm
      {
        VCVT.F32.S32    S6, S6
        VLDR            S10, [R7,#4]
        VLDR            S12, [R7,#8]
        VLDR            S14, [R7,#0xC]
        VLDR            S1, [R7,#0x10]
        VMUL.F32        S6, S6, S0
        VSUB.F32        S8, S16, S6
        VMUL.F32        S12, S12, S6
        VMUL.F32        S6, S1, S6
        VMUL.F32        S10, S8, S10
        VMUL.F32        S8, S14, S8
        VADD.F32        S10, S10, S12
        VADD.F32        S6, S6, S8
        VMUL.F32        S8, S10, S4
        VMUL.F32        S6, S6, S2
        VSTMIA          R2!, {S6}
      }
    while ( !_ZF );
    ++_R6;
    v12 += 64;
  }
  while ( _R6 != 16 );
  __asm
    VMOV.F32        S18, #3.0
    VMOV.F32        S20, #0.5
  v34 = 16 * *((_DWORD *)v3 + 35) - 1;
  v40 = 0;
    v15 = 0;
    BYTE1(v40) = 0;
      LOWORD(_R1) = 0;
      HIWORD(v40) = 0;
      if ( v34 >= 1 )
        do
        {
          _R1 = (signed __int16)_R1;
          __asm { VMOV            S0, R1 }
          _R1 = v41 + (unsigned __int16)v40;
          _R0 = v42 + ((unsigned int)(unsigned __int16)v40 >> 8);
          __asm
          {
            VMOV            S2, R1
            VMOV            S4, R0
            VCVT.F32.S32    S2, S2
            VCVT.F32.S32    S0, S0
            VCVT.F32.S32    S4, S4
            VMUL.F32        S2, S2, S18
            VMUL.F32        S0, S0, S18
            VMUL.F32        S4, S4, S18
            VSTR            S2, [SP,#0x90+var_5C]
            VSTR            S0, [SP,#0x90+var_58]
            VSTR            S4, [SP,#0x90+var_54]
          }
          _R0 = j_PerlinSimplexNoise::getValueNormalized(ConsoleChunkBlender::sConversionBlendNoise, (const Vec3 *)&v39);
            VMOV            S0, R0
            VMUL.F32        S0, S0, S20
          _R0 = (int)_R7 + 64 * (unsigned __int8)v40 + 4 * BYTE1(v40);
          __asm { VLDR            S2, [R0,#0x14] }
          v21 = HIWORD(v40);
            VSUB.F32        S2, S16, S2
            VADD.F32        S0, S0, S20
            VCMPE.F32       S2, S0
            VMRS            APSR_nzcv, FPSCR
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            goto LABEL_31;
          v22 = &BlockID::AIR;
          if ( (unsigned int)(SHIWORD(v40) >> 4) < *((_DWORD *)v3 + 35) )
            v23 = *((_DWORD *)v3 + (SHIWORD(v40) >> 4) + 19);
            if ( v23 )
              v22 = (_BYTE *)(v23
                            + (((unsigned int)(unsigned __int16)v40 >> 4) & 0xFF0 | BYTE2(v40) & 0xF)
                            + ((unsigned __int16)v40 << 8));
          if ( *v22 == *(_BYTE *)(Block::mBedrock + 4) )
LABEL_31:
            v24 = SHIWORD(v40) >> 4;
            if ( v24 >= *((_DWORD *)v5 + 35) )
            {
              v28 = (char *)&FullBlock::AIR;
              LOBYTE(v30) = BYTE1(FullBlock::AIR);
            }
            else
              v25 = *((_DWORD *)v5 + v24 + 19);
              if ( v25 )
              {
                v26 = (BYTE2(v40) & 0xF | ((unsigned int)(unsigned __int16)v40 >> 4) & 0xFF0)
                    + ((unsigned __int16)v40 << 8);
                v27 = (unsigned __int16)v26;
                v28 = (char *)(v25 + v26);
                v29 = *(_BYTE *)(v25 + (v27 >> 1) + 4096);
                LOBYTE(v30) = v29 & 0xF;
                if ( (BYTE2(v40) & 0xF | ((unsigned int)(unsigned __int16)v40 >> 4) & 0xF0) & 1 )
                  v30 = v29 >> 4;
              }
              else
                LOBYTE(v30) = 0;
                v28 = (char *)&BlockID::AIR;
            v31 = *v28;
            v32 = j_LevelChunk::getBlockExtraData(v5, (const ChunkBlockPos *)&v40);
            v37 = v31;
            v38 = v30;
            v36 = 0;
            j_LevelChunk::setBlockAndData((int)&v35, (int)v3, (int)&v40, (unsigned int)&v37, 0, &v36);
            if ( v36 )
              (*(void (**)(void))(*(_DWORD *)v36 + 4))();
            j_LevelChunk::setBlockExtraData(v3, (const ChunkBlockPos *)&v40, v32);
            v21 = HIWORD(v40);
          LOWORD(_R1) = v21 + 1;
          HIWORD(v40) = v21 + 1;
        }
        while ( (signed __int16)(v21 + 1) < v34 );
        v15 = BYTE1(v40);
      BYTE1(v40) = ++v15;
    while ( (unsigned __int8)v15 < 0x10u );
    LOBYTE(v40) = v40 + 1;
    result = (unsigned __int8)v40;
  while ( (unsigned __int8)v40 < 0x10u );
  return result;
}


void __fastcall ConsoleChunkBlender::_shiftColumnBySetBlocks(ConsoleChunkBlender *this, LevelChunk *a2, int a3, int a4, int a5, int a6)
{
  int v6; // r9@1
  LevelChunk *v7; // r4@1
  unsigned int v8; // r12@2
  int v9; // r11@2
  int v10; // r10@2
  signed int v11; // r2@3
  int v12; // r5@3
  _BYTE *v13; // r3@4
  int v14; // r7@5
  bool v15; // nf@8
  unsigned __int8 v16; // vf@8
  signed int v17; // r1@12
  _BYTE *v18; // r2@13
  int v19; // r5@14
  int v20; // r8@16
  int v21; // r2@17
  signed int v22; // r2@24
  int v23; // r9@24
  int v24; // r0@27
  unsigned int v25; // r1@28
  unsigned int v26; // r2@28
  char *v27; // r0@28
  unsigned int v28; // r2@28
  unsigned int v29; // r7@28
  char v30; // r5@33
  int v31; // r6@33
  char v32; // r7@37
  int v33; // r5@37
  signed int i; // r2@44
  unsigned int v35; // r2@46
  int v36; // r0@47
  unsigned int v37; // r1@48
  unsigned int v38; // r2@48
  char *v39; // r0@48
  unsigned int v40; // r2@48
  unsigned int v41; // r8@48
  char v42; // r5@53
  int v43; // r0@53
  int v44; // r6@53
  int v45; // r7@57
  int v46; // r9@61
  int v47; // r6@61
  signed int v48; // r0@63
  unsigned int v49; // r0@65
  _BYTE *v50; // r1@65
  int v51; // r0@66
  int v52; // r0@68
  bool v53; // zf@68
  __int16 v54; // r1@79
  unsigned int v55; // r0@80
  _BYTE *v56; // r2@80
  int v57; // r0@81
  int v58; // [sp+14h] [bp-84h]@43
  int v59; // [sp+18h] [bp-80h]@22
  signed int v60; // [sp+1Ch] [bp-7Ch]@26
  signed int v61; // [sp+1Ch] [bp-7Ch]@46
  int v62; // [sp+20h] [bp-78h]@22
  char *v63; // [sp+24h] [bp-74h]@2
  char v64; // [sp+28h] [bp-70h]@84
  int v65; // [sp+2Ch] [bp-6Ch]@84
  char v66; // [sp+30h] [bp-68h]@84
  char v67; // [sp+31h] [bp-67h]@84
  char v68; // [sp+34h] [bp-64h]@72
  int v69; // [sp+38h] [bp-60h]@72
  char v70; // [sp+3Ch] [bp-5Ch]@72
  char v71; // [sp+3Dh] [bp-5Bh]@72
  char v72; // [sp+40h] [bp-58h]@58
  int v73; // [sp+44h] [bp-54h]@58
  char v74; // [sp+48h] [bp-50h]@58
  char v75; // [sp+49h] [bp-4Fh]@58
  char v76; // [sp+4Ch] [bp-4Ch]@53
  int v77; // [sp+50h] [bp-48h]@53
  char v78; // [sp+54h] [bp-44h]@53
  char v79; // [sp+55h] [bp-43h]@53
  char v80; // [sp+58h] [bp-40h]@39
  int v81; // [sp+5Ch] [bp-3Ch]@39
  char v82; // [sp+60h] [bp-38h]@39
  char v83; // [sp+61h] [bp-37h]@39
  char v84; // [sp+64h] [bp-34h]@34
  int v85; // [sp+68h] [bp-30h]@34
  char v86; // [sp+6Ch] [bp-2Ch]@34
  char v87; // [sp+6Dh] [bp-2Bh]@34
  unsigned __int16 v88; // [sp+70h] [bp-28h]@2
  __int16 v89; // [sp+72h] [bp-26h]@2

  v6 = a5;
  v7 = a2;
  if ( !a5 )
    return;
  v8 = *((_DWORD *)a2 + 35);
  v9 = 0;
  LOBYTE(v88) = a3;
  HIBYTE(v88) = a4;
  v10 = 16 * v8 - 1;
  v89 = 0;
  v63 = (char *)a2 + 76;
  if ( v10 >= 0 )
  {
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      v13 = &BlockID::AIR;
      v89 = v12;
      if ( v11 >> 20 < v8 )
      {
        v13 = &BlockID::AIR;
        v14 = *(_DWORD *)&v63[4 * (v11 >> 20)];
        if ( v14 )
          v13 = (_BYTE *)(v14 + (v12 & 0xF | ((unsigned int)v88 >> 4) & 0xFF0) + (v88 << 8));
      }
      if ( *v13 != *(_BYTE *)(Block::mBedrock + 4) )
        break;
      v9 = v12 + 1;
      v11 += 0x10000;
      v16 = __OFSUB__(v12, v10);
      v15 = v12++ - v10 < 0;
      if ( !(v15 ^ v16) )
        goto LABEL_11;
    }
    v9 = v12;
LABEL_11:
    if ( v10 > -1 )
      v6 = a5;
      v17 = (4 * ((_DWORD)a2 + 4 * v8 + 76) - 1 - 4 * ((_DWORD)a2 + 76)) << 16;
      while ( 1 )
        v18 = &BlockID::AIR;
        v89 = v10;
        if ( v17 >> 20 < v8 )
        {
          v18 = &BlockID::AIR;
          v19 = *(_DWORD *)&v63[4 * (v17 >> 20)];
          if ( v19 )
            v18 = (_BYTE *)(v19 + (((unsigned int)v88 >> 4) & 0xFF0 | v10 & 0xF) + (v88 << 8));
        }
        v20 = *(_BYTE *)(Block::mAir + 4);
        if ( *v18 != v20 )
          goto LABEL_22;
        v21 = v10 - 1;
        v17 -= 0x10000;
        v53 = v10 == 0;
        v15 = v10-- < 0;
        if ( v15 || v53 )
          v10 = v21;
    v6 = a5;
  }
  v20 = *(_BYTE *)(Block::mAir + 4);
LABEL_22:
  v59 = v20;
  v62 = *(_BYTE *)(Block::mStillWater + 4);
  if ( v6 <= 0 )
    v58 = v10 + v6;
    if ( v9 <= v10 + v6 )
      for ( i = (v9 << 16) - (a5 << 16); ; i = v61 + 0x10000 )
        v61 = i;
        v35 = i >> 20;
        v89 = v9 - a5;
        if ( v35 >= v8 )
          v39 = (char *)&FullBlock::AIR;
          LOBYTE(v41) = BYTE1(FullBlock::AIR);
        else
          v36 = *(_DWORD *)&v63[4 * v35];
          if ( v36 )
          {
            v37 = (((_BYTE)v9 - (_BYTE)a5) & 0xF | ((unsigned int)v88 >> 4) & 0xFF0) + (v88 << 8);
            v38 = v36 + ((unsigned int)(unsigned __int16)v37 >> 1);
            v39 = (char *)(v36 + v37);
            v40 = *(_BYTE *)(v38 + 4096);
            LOBYTE(v41) = v40 & 0xF;
            if ( (((_BYTE)v9 - (_BYTE)a5) & 0xF | ((unsigned int)v88 >> 4) & 0xF0) & 1 )
              v41 = v40 >> 4;
          }
          else
            LOBYTE(v41) = 0;
            v39 = (char *)&BlockID::AIR;
        v42 = *v39;
        v43 = j_LevelChunk::getBlockExtraData(v7, (const ChunkBlockPos *)&v88);
        v78 = v42;
        v44 = v43;
        v89 = v9;
        v79 = v41;
        v77 = 0;
        j_LevelChunk::setBlockAndData((int)&v76, (int)v7, (int)&v88, (unsigned int)&v78, 0, &v77);
        v20 = v59;
        if ( v77 )
          (*(void (**)(void))(*(_DWORD *)v77 + 4))();
        j_LevelChunk::setBlockExtraData(v7, (const ChunkBlockPos *)&v88, v44);
        if ( v9 >= v58 )
          break;
        ++v9;
        v8 = *((_DWORD *)v7 + 35);
    if ( a5 <= -1 )
      v45 = v58 + 1;
      do
        v74 = v20;
        v89 = v45;
        v75 = 0;
        v73 = 0;
        j_LevelChunk::setBlockAndData((int)&v72, (int)v7, (int)&v88, (unsigned int)&v74, 0, &v73);
        if ( v73 )
          (*(void (**)(void))(*(_DWORD *)v73 + 4))();
        j_LevelChunk::setBlockExtraData(v7, (const ChunkBlockPos *)&v88, 0);
        v16 = __OFSUB__(v45, v10);
        v15 = v45++ - v10 < 0;
      while ( v15 ^ v16 );
  else
    if ( v10 >= v9 )
      v22 = v10 << 16;
      v23 = v10;
        v60 = v22;
        v89 = v23;
        if ( v22 >> 20 >= v8 )
          v27 = (char *)&FullBlock::AIR;
          LOBYTE(v29) = BYTE1(FullBlock::AIR);
          v24 = *(_DWORD *)&v63[4 * (v22 >> 20)];
          if ( v24 )
            v25 = (((unsigned int)v88 >> 4) & 0xFF0 | v23 & 0xF) + (v88 << 8);
            v26 = v24 + ((unsigned int)(unsigned __int16)v25 >> 1);
            v27 = (char *)(v24 + v25);
            v28 = *(_BYTE *)(v26 + 4096);
            LOBYTE(v29) = v28 & 0xF;
            if ( (((unsigned int)v88 >> 4) & 0xF0 | v23 & 0xF) & 1 )
              v29 = v28 >> 4;
            LOBYTE(v29) = 0;
            v27 = (char *)&BlockID::AIR;
        v30 = *v27;
        v31 = j_LevelChunk::getBlockExtraData(v7, (const ChunkBlockPos *)&v88);
        v89 = a5 + v23;
        if ( (signed __int16)(a5 + v23) > 255 )
        v86 = v30;
        v87 = v29;
        v85 = 0;
        j_LevelChunk::setBlockAndData((int)&v84, (int)v7, (int)&v88, (unsigned int)&v86, 0, &v85);
        if ( v85 )
          (*(void (**)(void))(*(_DWORD *)v85 + 4))();
        j_LevelChunk::setBlockExtraData(v7, (const ChunkBlockPos *)&v88, v31);
        if ( v23 <= v9 )
        --v23;
        v22 = v60 - 0x10000;
    v32 = *(_BYTE *)(Block::mStone + 4);
    v33 = v9 + a5;
    do
      v89 = v9;
      if ( v9 > 255 )
      v82 = v32;
      v83 = 0;
      v81 = 0;
      j_LevelChunk::setBlockAndData((int)&v80, (int)v7, (int)&v88, (unsigned int)&v82, 0, &v81);
      if ( v81 )
        (*(void (**)(void))(*(_DWORD *)v81 + 4))();
      j_LevelChunk::setBlockExtraData(v7, (const ChunkBlockPos *)&v88, 0);
      ++v9;
    while ( v9 < v33 );
  v46 = v10 + a5;
  v47 = *(_BYTE *)(Block::mFlowingWater + 4);
  if ( v10 + a5 >= v10 )
    v10 += a5;
  v48 = v10;
  v89 = v10;
  if ( v10 <= 255 && v10 > a6 )
      v49 = v48 >> 4;
      v50 = &BlockID::AIR;
      if ( v49 < *((_DWORD *)v7 + 35) )
        v51 = *(_DWORD *)&v63[4 * v49];
        v50 = &BlockID::AIR;
        if ( v51 )
          v50 = (_BYTE *)(v51 + (((unsigned int)v88 >> 4) & 0xFF0 | v10 & 0xF) + (v88 << 8));
      v52 = *v50;
      v53 = v52 == v62;
      if ( v52 != v62 )
        v53 = v52 == v47;
      if ( v53 )
        v70 = v20;
        v71 = 0;
        v69 = 0;
        j_LevelChunk::setBlockAndData((int)&v68, (int)v7, (int)&v88, (unsigned int)&v70, 0, &v69);
        if ( v69 )
          (*(void (**)(void))(*(_DWORD *)v69 + 4))();
        LOWORD(v10) = v89;
      v89 = v10 - 1;
      v48 = (signed __int16)(v10 - 1);
      if ( v48 > 255 )
      LOWORD(v10) = v10 - 1;
    while ( v48 > a6 );
  if ( (unsigned __int16)v48 <= 0xFFu && v48 > v46 )
    v54 = v48;
      v55 = v48 >> 4;
      v56 = &BlockID::AIR;
      if ( v55 < *((_DWORD *)v7 + 35) )
        v57 = *(_DWORD *)&v63[4 * v55];
        v56 = &BlockID::AIR;
        if ( v57 )
          v56 = (_BYTE *)(v57 + (((unsigned int)v88 >> 4) & 0xFF0 | v54 & 0xF) + (v88 << 8));
      if ( *v56 == v20 )
        v66 = v62;
        v67 = 0;
        v65 = 0;
        j_LevelChunk::setBlockAndData((int)&v64, (int)v7, (int)&v88, (unsigned int)&v66, 0, &v65);
        if ( v65 )
          (*(void (**)(void))(*(_DWORD *)v65 + 4))();
        v54 = v89;
      v89 = --v54;
      if ( (unsigned __int16)v54 > 0xFFu )
      v48 = v54;
    while ( v54 > v46 );
}


int __fastcall ConsoleChunkBlender::_copyColumnFromGenerated(ConsoleChunkBlender *this, LevelChunk *a2, LevelChunk *a3, int a4, int a5)
{
  LevelChunk *v5; // r4@1
  LevelChunk *v6; // r5@1
  int v7; // r7@1
  const Biome *v8; // r0@1
  bool v9; // nf@1
  int result; // r0@1
  signed int v11; // r1@2
  unsigned int v12; // r1@3
  int v13; // r1@4
  unsigned int v14; // r0@5
  bool v15; // zf@5
  unsigned int v16; // r2@5
  char *v17; // r0@5
  unsigned int v18; // r2@5
  unsigned int v19; // r9@5
  char v20; // r10@10
  int v21; // r7@10
  int v22; // r5@13
  int v23; // [sp+8h] [bp-50h]@1
  signed int v24; // [sp+14h] [bp-44h]@1
  char v25; // [sp+18h] [bp-40h]@14
  int v26; // [sp+1Ch] [bp-3Ch]@14
  char v27; // [sp+20h] [bp-38h]@14
  char v28; // [sp+21h] [bp-37h]@14
  char v29; // [sp+24h] [bp-34h]@10
  int v30; // [sp+28h] [bp-30h]@10
  char v31; // [sp+2Ch] [bp-2Ch]@10
  char v32; // [sp+2Dh] [bp-2Bh]@10
  unsigned __int16 v33; // [sp+30h] [bp-28h]@1
  __int16 v34; // [sp+32h] [bp-26h]@1

  v5 = a3;
  v6 = a2;
  v23 = *((_DWORD *)a3 + 35);
  v7 = *((_DWORD *)a2 + 35);
  LOBYTE(v33) = a4;
  HIBYTE(v33) = a5;
  v34 = 0;
  v8 = (const Biome *)j_LevelChunk::getBiome(a2, (const ChunkBlockPos *)&v33);
  j_LevelChunk::setBiome(v5, v8, (const ChunkBlockPos *)&v33);
  result = 16 * v7 - 1;
  v24 = result;
  v9 = result < 0;
  LOWORD(result) = 0;
  if ( !v9 )
  {
    v11 = 0;
    LOBYTE(result) = 0;
    do
    {
      v12 = v11 >> 4;
      if ( v12 >= *((_DWORD *)v6 + 35) )
      {
        LOBYTE(v19) = BYTE1(FullBlock::AIR);
        v17 = (char *)&FullBlock::AIR;
      }
      else
        v13 = *((_DWORD *)v6 + v12 + 19);
        if ( v13 )
        {
          v14 = (result & 0xF | ((unsigned int)v33 >> 4) & 0xFF0) + (v33 << 8);
          v15 = (v14 & 1) == 0;
          v16 = (unsigned __int16)v14;
          v17 = (char *)(v13 + v14);
          v18 = *(_BYTE *)(v13 + (v16 >> 1) + 4096);
          LOBYTE(v19) = v18 & 0xF;
          if ( !v15 )
            v19 = v18 >> 4;
        }
        else
          LOBYTE(v19) = 0;
          v17 = (char *)&BlockID::AIR;
      v20 = *v17;
      v21 = j_LevelChunk::getBlockExtraData(v6, (const ChunkBlockPos *)&v33);
      v31 = v20;
      v32 = v19;
      v30 = 0;
      j_LevelChunk::setBlockAndData((int)&v29, (int)v5, (int)&v33, (unsigned int)&v31, 0, &v30);
      if ( v30 )
        (*(void (**)(void))(*(_DWORD *)v30 + 4))();
      j_LevelChunk::setBlockExtraData(v5, (const ChunkBlockPos *)&v33, v21);
      LOWORD(result) = v34 + 1;
      v34 = result;
      v11 = (signed __int16)result;
    }
    while ( (signed __int16)result <= v24 );
  }
  result = (signed __int16)result;
  v22 = 16 * v23 - 1;
  if ( (signed __int16)result <= v22 )
      v27 = *(_BYTE *)(Block::mAir + 4);
      v28 = 0;
      v26 = 0;
      j_LevelChunk::setBlockAndData((int)&v25, (int)v5, (int)&v33, (unsigned int)&v27, 0, &v26);
      if ( v26 )
        (*(void (**)(void))(*(_DWORD *)v26 + 4))();
      j_LevelChunk::setBlockExtraData(v5, (const ChunkBlockPos *)&v33, 0);
      result = ++v34;
    while ( v34 <= v22 );
  return result;
}


int __fastcall ConsoleChunkBlender::_findHighestStoneOrBedrockHeight(ConsoleChunkBlender *this, LevelChunk *a2, int a3, int a4)
{
  LevelChunk *v4; // r11@1
  char *v5; // r10@1
  int v6; // r8@1
  int v7; // r9@1
  int v8; // r1@1
  signed int v9; // r6@1
  int v10; // r5@2
  _BYTE *v11; // r0@3
  int v12; // r1@4
  int v13; // r0@6

  v4 = a2;
  v5 = (char *)a2 + 76;
  v6 = 16 * a4 & 0xFF0;
  v7 = a3 << 8;
  v8 = 4 * ((_DWORD)a2 + 4 * *((_DWORD *)a2 + 35) + 76) - 1 - 4 * ((_DWORD)a2 + 76);
  v9 = v8 << 16;
  do
  {
    v10 = v8;
    if ( v8 < 0 )
      break;
    v11 = &BlockID::AIR;
    if ( (unsigned int)(v9 >> 20) < *((_DWORD *)v4 + 35) )
    {
      v12 = *(_DWORD *)&v5[4 * (v9 >> 20)];
      v11 = &BlockID::AIR;
      if ( v12 )
        v11 = (_BYTE *)(v12 + (v10 & 0xF | v6) + v7);
    }
    v13 = (*(int (**)(void))(*(_DWORD *)Block::mBlocks[*v11] + 104))();
    v9 -= 0x10000;
    v8 = v10 - 1;
  }
  while ( v13 != 1 );
  return v10;
}


void __fastcall ConsoleChunkBlender::setInterpolants(ConsoleChunkBlender *this, int _R1, int _R2, int _R3, int a5)
{
  __asm
  {
    VMOV            S2, R1
    VLDR            S0, [SP,#arg_0]
    VMOV            S4, R2
    VMOV            S6, R3
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VCVT.F32.S32    S6, S6
    VCVT.F32.S32    S0, S0
    VSTR            S2, [R0,#4]
    VSTR            S4, [R0,#8]
    VSTR            S6, [R0,#0xC]
    VSTR            S0, [R0,#0x10]
  }
}


unsigned __int8 *__fastcall ConsoleChunkBlender::ConsoleChunkBlender(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // r4@1
  unsigned int v2; // r1@2
  unsigned int v3; // r0@5
  int v4; // r1@5
  signed int v5; // r2@5
  int v6; // r0@6
  int *v7; // r5@6
  int v8; // r6@6
  PerlinSimplexNoise *v9; // r5@7
  PerlinSimplexNoise *v10; // r0@7
  PerlinSimplexNoise *v11; // r0@8
  unsigned int v13; // [sp+4h] [bp-9E4h]@5
  unsigned int v14; // [sp+8h] [bp-9E0h]@5
  int v15; // [sp+9C8h] [bp-20h]@5
  char v16; // [sp+9CCh] [bp-1Ch]@5
  int v17; // [sp+9D0h] [bp-18h]@5
  int v18; // [sp+9D4h] [bp-14h]@7

  v1 = a1;
  __dmb();
  *a1 = 0;
  do
  {
    do
      v2 = __ldrex(a1);
    while ( __strex(1u, a1) );
    __dmb();
  }
  while ( v2 );
  if ( !ConsoleChunkBlender::sConversionBlendNoise )
    v3 = sub_21E67AC((int)&Random::mRandomDevice);
    v13 = v3;
    v15 = 625;
    v4 = 0;
    v5 = 1;
    v16 = 0;
    v17 = 0;
    v14 = v3;
    {
      v6 = v3 ^ (v3 >> 30);
      v7 = (int *)(&v13 + v4);
      v8 = v4++ + 1812433253 * v6;
      v3 = v5++ + 1812433253 * v6;
      v7[2] = v8 + 1;
    }
    while ( v4 != 397 );
    v15 = 624;
    v18 = 398;
    v9 = (PerlinSimplexNoise *)j_operator new(0x14u);
    j_PerlinSimplexNoise::PerlinSimplexNoise(v9, (Random *)&v13, 8);
    v10 = (PerlinSimplexNoise *)ConsoleChunkBlender::sConversionBlendNoise;
    ConsoleChunkBlender::sConversionBlendNoise = v9;
    if ( v10 )
      v11 = j_PerlinSimplexNoise::~PerlinSimplexNoise(v10);
      j_operator delete((void *)v11);
  *v1 = 0;
  return v1;
}
