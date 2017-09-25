

int __fastcall StrongholdFeature::StrongholdFeature(__int64 a1)
{
  int v1; // r4@1
  int result; // r0@1

  v1 = HIDWORD(a1);
  result = j_StructureFeature::StructureFeature(a1);
  *(_DWORD *)result = &off_2723E18;
  *(_BYTE *)(result + 92) = 0;
  *(_DWORD *)(result + 96) = 0;
  *(_DWORD *)(result + 100) = 0;
  *(_DWORD *)(result + 104) = 0;
  *(_DWORD *)(result + 108) = 0;
  *(_DWORD *)(result + 112) = 0;
  *(_DWORD *)(result + 116) = 0;
  *(_DWORD *)(result + 120) = v1;
  *(_DWORD *)(result + 124) = 0;
  *(_DWORD *)(result + 128) = 3;
  *(_DWORD *)(result + 132) = 200;
  *(_DWORD *)(result + 136) = 150;
  *(_DWORD *)(result + 140) = 10;
  *(_DWORD *)(result + 144) = 1048576000;
  *(_DWORD *)(result + 148) = 100;
  return result;
}


int __fastcall StrongholdFeature::_closestChunkPos(int a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // kr00_8@1
  __int64 v4; // kr08_8@2
  unsigned __int64 *v5; // r0@2
  int v6; // r1@2
  signed int v7; // r5@2
  int v8; // r4@2
  int v9; // r7@4

  v3 = *a3;
  if ( HIDWORD(v3) - (signed int)v3 < 1 )
  {
    v8 = 0;
  }
  else
    v4 = *a2;
    v5 = (unsigned __int64 *)(v3 + 8);
    v6 = 0;
    v7 = 0x7FFFFFFF;
    do
    {
      if ( *((_BYTE *)v5 - 8) )
      {
        v9 = (*v5 >> 32) - HIDWORD(v4);
        if ( (signed int)((*v5 - v4) * (*v5 - v4) + v9 * v9) < v7 )
        {
          v8 = v6;
          v7 = (*v5 - v4) * (*v5 - v4) + v9 * v9;
        }
      }
      ++v6;
      v5 += 2;
    }
    while ( v6 < (HIDWORD(v3) - (signed int)v3) >> 4 );
  return v3 + 16 * v8 + 8;
}


signed int __fastcall StrongholdFeature::_getNearestStronghold(StrongholdFeature *this, Dimension *a2, const BlockPos *a3, BlockPos *a4)
{
  BlockPos *v5; // r5@1
  float v11; // r1@1
  int v12; // r0@1
  float v14; // r1@1
  signed int v15; // r4@1
  int v16; // r6@1
  void *v17; // r7@1
  int v18; // r2@1
  int v19; // r3@2
  unsigned int v20; // r5@2
  int v21; // r11@2
  int v22; // r0@3
  int v23; // r4@5
  int v24; // r3@8
  signed int v25; // r10@10
  int v26; // r8@10
  signed int v27; // r9@10
  int v28; // r6@10
  signed int v29; // r0@12
  int v30; // r6@15
  __int64 v31; // r0@18
  int v32; // r0@19
  signed int v33; // kr00_4@19
  Dimension *v34; // r0@19
  const ChunkPos *v35; // r0@19
  int v36; // r2@20
  __int64 v37; // r0@26
  int v38; // r0@27
  signed int v39; // kr04_4@27
  Dimension *v40; // r0@27
  const ChunkPos *v41; // r0@27
  int v42; // r2@28
  int v43; // r1@32
  _BYTE *v44; // r3@32
  unsigned __int64 *v45; // r3@38
  int v46; // r0@38
  int v47; // r6@38
  signed int v48; // r5@38
  int v49; // r4@38
  int v50; // r2@40
  BlockPos *v52; // [sp+0h] [bp-B0h]@2
  int v53; // [sp+4h] [bp-ACh]@2
  int v54; // [sp+8h] [bp-A8h]@1
  signed int v55; // [sp+Ch] [bp-A4h]@2
  int v56; // [sp+10h] [bp-A0h]@2
  int v57; // [sp+14h] [bp-9Ch]@3
  int v58; // [sp+18h] [bp-98h]@5
  Dimension *v59; // [sp+20h] [bp-90h]@1
  signed int v60; // [sp+24h] [bp-8Ch]@4
  int v61; // [sp+28h] [bp-88h]@5
  int v62; // [sp+2Ch] [bp-84h]@5
  int v63; // [sp+30h] [bp-80h]@7
  int v64; // [sp+34h] [bp-7Ch]@45
  int v65; // [sp+38h] [bp-78h]@45
  int v66; // [sp+3Ch] [bp-74h]@45
  __int64 v67; // [sp+40h] [bp-70h]@45
  char v68; // [sp+48h] [bp-68h]@19
  __int64 v69; // [sp+50h] [bp-60h]@19
  int v70; // [sp+58h] [bp-58h]@19
  int v71; // [sp+5Ch] [bp-54h]@19
  int v72; // [sp+60h] [bp-50h]@17
  int v73; // [sp+64h] [bp-4Ch]@17
  int v74; // [sp+68h] [bp-48h]@17
  int v75; // [sp+6Ch] [bp-44h]@17
  void *v76; // [sp+74h] [bp-3Ch]@1
  char *v77; // [sp+78h] [bp-38h]@1
  char *v78; // [sp+7Ch] [bp-34h]@1
  float v79; // [sp+80h] [bp-30h]@1
  float v80; // [sp+84h] [bp-2Ch]@1

  _R8 = this;
  v59 = a2;
  v5 = a4;
  j_ChunkPos::ChunkPos((ChunkPos *)&v79, a3);
  __asm
  {
    VLDR            S0, [R8,#0x84]
    VLDR            S2, [SP,#0xB0+var_30]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VDIV.F32        S0, S2, S0
    VMOV            R0, S0
  }
  v12 = j_mce::Math::floor(_R0, v11);
    VLDR            S2, [SP,#0xB0+var_2C]
  v54 = v12;
  v15 = 0;
  v16 = j_mce::Math::floor(_R0, v14);
  v17 = j_operator new(0x90u);
  v18 = (int)v17 + 144;
  v76 = v17;
  v78 = (char *)v17 + 144;
  *(_DWORD *)v17 = 0;
  *((_DWORD *)v17 + 1) = 0;
  *((_DWORD *)v17 + 2) = 0;
  *((_DWORD *)v17 + 3) = 0;
  *((_DWORD *)v17 + 4) = 0;
  *((_DWORD *)v17 + 5) = 0;
  *((_DWORD *)v17 + 6) = 0;
  *((_DWORD *)v17 + 7) = 0;
  *((_DWORD *)v17 + 8) = 0;
  *((_DWORD *)v17 + 9) = 0;
  *((_DWORD *)v17 + 10) = 0;
  *((_DWORD *)v17 + 11) = 0;
  *((_DWORD *)v17 + 12) = 0;
  *((_DWORD *)v17 + 13) = 0;
  *((_DWORD *)v17 + 14) = 0;
  *((_DWORD *)v17 + 15) = 0;
  *((_DWORD *)v17 + 16) = 0;
  *((_DWORD *)v17 + 17) = 0;
  *((_DWORD *)v17 + 18) = 0;
  *((_DWORD *)v17 + 19) = 0;
  *((_DWORD *)v17 + 20) = 0;
  *((_DWORD *)v17 + 21) = 0;
  *((_DWORD *)v17 + 22) = 0;
  *((_DWORD *)v17 + 23) = 0;
  *((_DWORD *)v17 + 24) = 0;
  *((_DWORD *)v17 + 25) = 0;
  *((_DWORD *)v17 + 26) = 0;
  *((_DWORD *)v17 + 27) = 0;
  *((_DWORD *)v17 + 28) = 0;
  *((_DWORD *)v17 + 29) = 0;
  *((_DWORD *)v17 + 30) = 0;
  *((_DWORD *)v17 + 31) = 0;
  *((_DWORD *)v17 + 32) = 0;
  *((_DWORD *)v17 + 33) = 0;
  *((_DWORD *)v17 + 34) = 0;
  *((_DWORD *)v17 + 35) = 0;
  v77 = (char *)v17 + 144;
  if ( *((_DWORD *)_R8 + 37) >= 2 )
    v56 = v16 - 2;
    v52 = v5;
    v19 = 1;
    v20 = 1;
    v21 = 0;
    v53 = v16;
    v55 = -1;
    while ( 1 )
    {
      v22 = v54 - v19;
      v57 = v19 + v54;
      if ( v54 - v19 <= v19 + v54 )
      {
        v23 = (int)_R8;
        v58 = v53 - v19;
        v62 = v19 + v53;
        v60 = v19;
        v61 = 8 * v19;
        do
        {
          if ( v58 <= v62 )
          {
            v63 = v22;
            v24 = v54 - v22;
            if ( v54 - v22 < 0 )
              v24 = -v24;
            v25 = v60;
            v26 = v56;
            v27 = v55;
            v28 = v58;
            if ( v60 < 2 )
            {
              do
              {
                v20 += v61;
                if ( v20 > (v77 - (_BYTE *)v17) >> 4 )
                  j_std::vector<StrongholdFeature::StrongholdResult,std::allocator<StrongholdFeature::StrongholdResult>>::_M_default_append(
                    (int)&v76,
                    v20 - ((v77 - (_BYTE *)v17) >> 4));
                v74 = 0;
                v75 = 0;
                v72 = v63;
                v73 = v28;
                if ( j_StrongholdFeature::_isPregeneratedStrongholdHere(v23, COERCE_FLOAT(&v72), (int)&v74) == 1 )
                {
                  v17 = v76;
                  v37 = *(_QWORD *)&v74;
                  *((_BYTE *)v76 + 16 * v21) = 1;
                }
                else
                  v38 = *(_DWORD *)(v23 + 132);
                  v39 = *(_DWORD *)(v23 + 132);
                  v70 = v38 * v63 + v39 / 2;
                  v71 = v38 * v28 + v39 / 2;
                  v40 = j_Dimension::getBiomes(v59);
                  v41 = (const ChunkPos *)j_ThreadLocal<BiomeSource>::getLocal((int)v40);
                  j_StrongholdFeature::_generateStronghold(
                    (StrongholdFeature *)&v68,
                    (BiomeSource *)v23,
                    v41,
                    (__int64 *)&v70);
                  *((_BYTE *)v17 + 16 * v21) = v68;
                  v37 = v69;
                v42 = (int)v17 + 16 * v21++;
                *(_QWORD *)(v42 + 8) = v37;
                _VF = __OFSUB__(v28, v62);
                _NF = v28++ - v62 < 0;
              }
              while ( _NF ^ _VF );
            }
            else
                ++v26;
                if ( v24 >= v60 )
                  goto LABEL_51;
                v29 = v25;
                if ( v25 < 0 )
                  v29 = v27;
                if ( v29 >= v60 )
LABEL_51:
                  v30 = v24;
                  v20 += v61;
                  if ( v20 > (v77 - (_BYTE *)v17) >> 4 )
                    j_std::vector<StrongholdFeature::StrongholdResult,std::allocator<StrongholdFeature::StrongholdResult>>::_M_default_append(
                      (int)&v76,
                      v20 - ((v77 - (_BYTE *)v17) >> 4));
                  v74 = 0;
                  v75 = 0;
                  v72 = v63;
                  v73 = v26;
                  if ( j_StrongholdFeature::_isPregeneratedStrongholdHere(v23, COERCE_FLOAT(&v72), (int)&v74) )
                  {
                    v17 = v76;
                    v31 = *(_QWORD *)&v74;
                    *((_BYTE *)v76 + 16 * v21) = 1;
                  }
                  else
                    v32 = *(_DWORD *)(v23 + 132);
                    v33 = *(_DWORD *)(v23 + 132);
                    v70 = v63 * v32 + v33 / 2;
                    v71 = v32 * v26 + v33 / 2;
                    v34 = j_Dimension::getBiomes(v59);
                    v35 = (const ChunkPos *)j_ThreadLocal<BiomeSource>::getLocal((int)v34);
                    j_StrongholdFeature::_generateStronghold(
                      (StrongholdFeature *)&v68,
                      (BiomeSource *)v23,
                      v35,
                      (__int64 *)&v70);
                    *((_BYTE *)v17 + 16 * v21) = v68;
                    v31 = v69;
                  v36 = (int)v17 + 16 * v21++;
                  v24 = v30;
                  *(_QWORD *)(v36 + 8) = v31;
                ++v27;
                --v25;
              while ( v26 < v62 );
          }
          else
          v22 = v63 + 1;
        }
        while ( v63 < v57 );
        v18 = (int)v77;
        _R8 = (StrongholdFeature *)v23;
      }
      else
      if ( v18 - (signed int)v17 > 0 )
        break;
LABEL_35:
      --v55;
      v19 = v60 + 1;
      --v56;
      if ( v60 + 1 >= *((_DWORD *)_R8 + 37) )
        v15 = 0;
        goto LABEL_46;
    }
    v43 = 0;
    v44 = v17;
    while ( !*v44 )
      ++v43;
      v44 += 16;
      if ( v43 >= (v18 - (signed int)v17) >> 4 )
        goto LABEL_35;
    if ( v18 - (signed int)v17 < 1 )
      v49 = 0;
    else
      v45 = (unsigned __int64 *)((char *)v17 + 8);
      v46 = (v18 - (signed int)v17) >> 4;
      v47 = 0;
      v48 = 0x7FFFFFFF;
      do
        if ( *((_BYTE *)v45 - 8) )
          v50 = (*v45 >> 32) - LODWORD(v80);
          if ( (signed int)((*v45 - LODWORD(v79)) * (*v45 - LODWORD(v79)) + v50 * v50) < v48 )
            v49 = v47;
            v48 = (*v45 - LODWORD(v79)) * (*v45 - LODWORD(v79)) + v50 * v50;
        ++v47;
        v45 += 2;
      while ( v47 < v46 );
    v67 = *((_QWORD *)v17 + 2 * v49 + 1);
    j_BlockPos::BlockPos((int)&v64, &v67, 32);
    v15 = 1;
    *(_DWORD *)v52 = v64;
    *((_DWORD *)v52 + 1) = v65;
    *((_DWORD *)v52 + 2) = v66;
LABEL_46:
  if ( v17 )
    j_operator delete(v17);
  return v15;
}


signed int __fastcall StrongholdFeature::generatePositions(StrongholdFeature *this, Random *a2, BiomeSource *a3)
{
  Random *v3; // r6@1
  StrongholdFeature *v4; // r4@1
  unsigned int v5; // r7@1
  signed int v6; // r1@1
  int v7; // r0@1
  int v8; // r7@2
  int v9; // r2@2
  int v10; // r3@2
  char v17; // r0@3
  float v18; // r1@3
  unsigned int v20; // r3@3
  float v24; // r1@4
  int v25; // r9@4
  float v26; // r1@4
  float v29; // r1@4
  int v30; // r0@4
  int v31; // r1@4
  int v32; // r11@4
  int v33; // r9@4
  int v34; // r8@4
  int v35; // r7@8
  signed int v36; // r0@12
  signed int result; // r0@15
  int v38; // [sp+0h] [bp-68h]@4
  float v39; // [sp+4h] [bp-64h]@4
  unsigned __int64 v40; // [sp+8h] [bp-60h]@4
  int v41; // [sp+10h] [bp-58h]@5
  float v42; // [sp+14h] [bp-54h]@5

  v3 = a2;
  v4 = this;
  v5 = *((_DWORD *)a3 + 12);
  j_Random::_checkThreadId(a2);
  *(_DWORD *)v3 = v5;
  v6 = 1;
  *((_DWORD *)v3 + 625) = 625;
  v7 = 0;
  *((_BYTE *)v3 + 2504) = 0;
  *((_DWORD *)v3 + 627) = 0;
  *((_DWORD *)v3 + 1) = v5;
  do
  {
    v8 = v5 ^ (v5 >> 30);
    v9 = (int)v3 + 4 * v7;
    v10 = v7++ + 1812433253 * v8;
    v5 = v6++ + 1812433253 * v8;
    *(_DWORD *)(v9 + 8) = v10 + 1;
  }
  while ( v7 != 397 );
  *((_DWORD *)v3 + 625) = 624;
  *((_DWORD *)v3 + 628) = 398;
  _R0 = j_Random::_genRandInt32(v3);
  __asm
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VCVT.F64.U32    D0, S0
  _R0 = &mce::Math::PI;
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S0, D0
    VADD.F32        S0, S0, S0
    VLDR            S16, [R0]
    VMUL.F32        S18, S16, S0
  v17 = j_Random::_genRandInt32(v3);
  __asm { VMOV.F32        S20, #0.25 }
  _R7 = (v17 & 0xF) + 40;
  __asm { VLDR            S22, =0.6 }
  v20 = 0;
    __asm { VMOV            R8, S18 }
    v40 = __PAIR__(_R7, v20);
    _R0 = j_mce::Math::cos(_R8, v18);
    __asm
    {
      VMOV            S0, R7
      VCVT.F32.S32    S24, S0
      VMOV            S0, R0
      VMUL.F32        S0, S0, S24
      VMOV            R0, S0
    }
    v25 = j_mce::Math::floor(_R0, v24);
    _R0 = j_mce::Math::sin(_R8, v26);
    v30 = j_mce::Math::floor(_R0, v29);
    v31 = v25 + 7;
    v32 = v25 - 8;
    v33 = v30 - 9;
    v34 = v30 + 7;
    v39 = *(float *)&v31;
    v38 = v30 - 9;
    while ( 1 )
      v41 = v32;
      ++v33;
      v42 = *(float *)&v33;
      if ( (*(int (**)(void))(**((_DWORD **)v4 + 30) + 24))() == 1 )
        break;
      if ( v33 >= v34 )
      {
        v18 = v39;
        v33 = v38;
        _VF = __OFSUB__(v32, LODWORD(v39));
        _NF = v32++ - LODWORD(v39) < 0;
        if ( !(_NF ^ _VF) )
        {
          v35 = HIDWORD(v40);
          v20 = v40;
          goto LABEL_10;
        }
      }
    v18 = v42;
    v35 = HIDWORD(v40);
    v20 = v40 + 1;
    *((_QWORD *)v4 + v40 + 12) = *(_QWORD *)&v41;
LABEL_10:
    __asm { VMOV.F32        S0, S20 }
    if ( !_ZF )
      __asm { VMOVNE.F32      S0, S22 }
    v36 = 4;
    __asm { VMUL.F32        S0, S0, S16 }
      v36 = 8;
    _R7 = v35 + v36;
    __asm { VADD.F32        S18, S18, S0 }
  while ( _NF ^ _VF );
  result = 1;
  *((_BYTE *)v4 + 92) = 1;
  return result;
}


int __fastcall StrongholdFeature::getFeatureName(int result)
{
  *(_DWORD *)result = 10;
  *(_DWORD *)(result + 4) = "Stronghold";
  return result;
}


signed int __fastcall StrongholdFeature::isFeatureChunk(StrongholdFeature *this, BiomeSource *a2, Random *a3, const ChunkPos *a4)
{
  pthread_mutex_t *v5; // r7@1
  Random *v7; // r5@1
  BiomeSource *v8; // r8@1
  int v9; // r0@2
  __int64 v10; // r0@5
  signed int v12; // r5@9
  __int64 v13; // r2@10
  int v18; // r0@16
  int v19; // r5@16
  float v21; // r1@16
  int v22; // r0@16
  int v23; // r1@16
  signed int v24; // kr00_4@16
  signed int result; // r0@18
  int v26; // [sp+0h] [bp-30h]@16
  int v27; // [sp+4h] [bp-2Ch]@16
  char v28; // [sp+8h] [bp-28h]@16
  __int64 v29; // [sp+10h] [bp-20h]@17

  _R6 = this;
  v5 = (pthread_mutex_t *)((char *)this + 124);
  _R4 = a4;
  v7 = a3;
  v8 = a2;
  if ( &pthread_create )
  {
    v9 = j_pthread_mutex_lock_0(v5);
    if ( v9 )
      sub_21E5E14(v9);
  }
  if ( !*((_BYTE *)_R6 + 92) )
    j_StrongholdFeature::generatePositions(_R6, v7, v8);
  v10 = *(_QWORD *)_R4;
  _ZF = *((_QWORD *)_R6 + 12) == *(_QWORD *)_R4;
  if ( *((_QWORD *)_R6 + 12) != *(_QWORD *)_R4 )
    _ZF = *((_QWORD *)_R6 + 13) == v10;
  if ( _ZF )
    v12 = 0;
  else
    v13 = *((_QWORD *)_R6 + 14);
    HIDWORD(v10) ^= HIDWORD(v13);
    LODWORD(v10) = v10 ^ v13;
    v12 = v10 | HIDWORD(v10);
    if ( v10 )
      v12 = 1;
    j_pthread_mutex_unlock_0(v5);
  if ( v12 != 1 )
    goto LABEL_23;
  _R0 = *(_QWORD *)_R4;
  if ( (signed int)_R0 * (signed int)_R0 + HIDWORD(_R0) * HIDWORD(_R0) < (unsigned int)(*((_DWORD *)_R6 + 35)
                                                                                      * *((_DWORD *)_R6 + 35)) )
    goto LABEL_24;
  HIDWORD(_R0) = *((_DWORD *)_R6 + 33);
  __asm
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
    VMOV            S2, R1
    VCVT.F32.S32    S2, S2
    VDIV.F32        S0, S0, S2
    VMOV            R0, S0
  v18 = j_mce::Math::floor((mce::Math *)_R0, *((float *)&_R0 + 1));
  __asm { VLDR            S0, [R6,#0x84] }
  v19 = v18;
    VLDR            S2, [R4,#4]
    VDIV.F32        S0, S2, S0
  v22 = j_mce::Math::floor(_R0, v21);
  v23 = *((_DWORD *)_R6 + 33);
  v24 = *((_DWORD *)_R6 + 33);
  v26 = v23 * v19 + v24 / 2;
  v27 = v22 * v23 + v24 / 2;
  j_StrongholdFeature::_generateStronghold((StrongholdFeature *)&v28, _R6, v8, (__int64 *)&v26);
  if ( !v28 || v29 ^ *(_QWORD *)_R4 )
LABEL_24:
    result = 0;
LABEL_23:
    result = 1;
  return result;
}


void __fastcall StrongholdFeature::~StrongholdFeature(StrongholdFeature *this)
{
  StrongholdFeature::~StrongholdFeature(this);
}


signed int __fastcall StrongholdFeature::_sameGrid(int a1, int a2, int a3)
{
  signed int result; // r0@1

  result = 0;
  if ( *(_DWORD *)a2 == *(_DWORD *)a3 && *(_DWORD *)(a2 + 4) == *(_DWORD *)(a3 + 4) )
    result = 1;
  return result;
}


int __fastcall StrongholdFeature::_getGridCoordinates(StrongholdFeature *this, const ChunkPos *a2, int a3)
{
  StrongholdFeature *v9; // r6@1
  float v12; // r1@1
  int result; // r0@1

  _R4 = a3;
  _R5 = a2;
  __asm { VLDR            S0, [R5,#0x84] }
  v9 = this;
  __asm
  {
    VLDR            S2, [R4]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VDIV.F32        S0, S2, S0
    VMOV            R0, S0
  }
  *(_DWORD *)v9 = j_mce::Math::floor(_R0, *(float *)&a2);
    VLDR            S0, [R5,#0x84]
    VLDR            S2, [R4,#4]
  result = j_mce::Math::floor(_R0, v12);
  *((_DWORD *)v9 + 1) = result;
  return result;
}


char *__fastcall StrongholdFeature::getGuesstimatedFeaturePositions(StrongholdFeature *this, int a2)
{
  StrongholdFeature *v2; // r4@1
  int v3; // r5@1
  __int64 v4; // r0@1
  __int64 v5; // r0@4
  char *result; // r0@5
  int v7; // [sp+4h] [bp-1Ch]@1
  int v8; // [sp+8h] [bp-18h]@2
  int v9; // [sp+Ch] [bp-14h]@2

  v2 = this;
  v3 = a2;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  j_ChunkPos::getMiddleBlockPosition((ChunkPos *)&v7, a2 + 96, 64);
  j_std::vector<BlockPos,std::allocator<BlockPos>>::_M_emplace_back_aux<BlockPos>((unsigned __int64 *)v2, (int)&v7);
  j_ChunkPos::getMiddleBlockPosition((ChunkPos *)&v7, v3 + 104, 64);
  v4 = *(_QWORD *)((char *)v2 + 4);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    j_std::vector<BlockPos,std::allocator<BlockPos>>::_M_emplace_back_aux<BlockPos>((unsigned __int64 *)v2, (int)&v7);
  }
  else
    *(_DWORD *)v4 = v7;
    *(_DWORD *)(v4 + 4) = v8;
    *(_DWORD *)(v4 + 8) = v9;
    *((_DWORD *)v2 + 1) = v4 + 12;
  j_ChunkPos::getMiddleBlockPosition((ChunkPos *)&v7, v3 + 112, 64);
  v5 = *(_QWORD *)((char *)v2 + 4);
  if ( (_DWORD)v5 == HIDWORD(v5) )
    result = j_std::vector<BlockPos,std::allocator<BlockPos>>::_M_emplace_back_aux<BlockPos>(
               (unsigned __int64 *)v2,
               (int)&v7);
    *(_DWORD *)v5 = v7;
    *(_DWORD *)(v5 + 4) = v8;
    *(_DWORD *)(v5 + 8) = v9;
    result = (char *)(v5 + 12);
    *((_DWORD *)v2 + 1) = result;
  return result;
}


signed int __fastcall StrongholdFeature::_logStrongholdData(int a1, unsigned __int64 *a2)
{
  int v2; // r5@1
  unsigned __int64 *v3; // r4@1
  __int64 *v4; // r6@2
  int v5; // r7@2
  int *v6; // r0@2
  int v7; // r1@4
  signed int result; // r0@4
  signed int v9; // r5@5
  int v10; // r6@5
  int v11; // [sp+0h] [bp-20h]@2

  v2 = a1;
  v3 = a2;
  if ( *(_DWORD *)(a1 + 128) >= 1 )
  {
    v4 = (__int64 *)(a1 + 96);
    v5 = 0;
    v6 = &v11;
    do
    {
      v6 = (int *)j_BlockPos::BlockPos((int)v6, v4, 0);
      ++v4;
      ++v5;
    }
    while ( v5 < *(_DWORD *)(v2 + 128) );
  }
  v7 = *v3;
  result = (*v3 >> 32) - v7;
  if ( result >> 4 )
    v9 = result >> 4;
    v10 = 0;
    result = (signed int)&v11;
    while ( 1 )
      if ( *(_BYTE *)(v7 + v10) )
        result = j_BlockPos::BlockPos(result, (__int64 *)(v7 + v10 + 8), 32);
      if ( !--v9 )
        break;
      v10 += 16;
      v7 = *(_DWORD *)v3;
  return result;
}


void __fastcall StrongholdFeature::~StrongholdFeature(StrongholdFeature *this)
{
  StructureFeature *v1; // r0@1

  v1 = j_StructureFeature::~StructureFeature(this);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall StrongholdFeature::_hasStrongholds(int a1, unsigned __int64 *a2)
{
  _BYTE *v2; // r2@1
  signed int v3; // r1@1
  signed int result; // r0@1
  signed int v5; // r1@2

  v2 = (_BYTE *)*a2;
  v3 = (*a2 >> 32) - (_DWORD)v2;
  result = 0;
  if ( v3 > 0 )
  {
    v5 = v3 >> 4;
    while ( !*v2 )
    {
      ++result;
      v2 += 16;
      if ( result >= v5 )
        return 0;
    }
    result = 1;
  }
  return result;
}


signed int __fastcall StrongholdFeature::_isPregeneratedStrongholdHere(int a1, float a2, int a3)
{
  pthread_mutex_t *v4; // r8@1
  int v5; // r9@1
  float v6; // r10@1
  int v7; // r0@2
  int v9; // r6@4
  int v14; // r4@5
  float v16; // r1@5
  int v17; // r0@5
  signed int v19; // r5@9
  int v20; // r0@10

  _R7 = a1;
  v4 = (pthread_mutex_t *)(a1 + 124);
  v5 = a3;
  v6 = a2;
  if ( &pthread_create )
  {
    v7 = j_pthread_mutex_lock_0(v4);
    if ( v7 )
      sub_21E5E14(v7);
  }
  if ( *(_DWORD *)(_R7 + 128) < 1 )
LABEL_9:
    v19 = 0;
  else
    _R5 = _R7 + 96;
    v9 = 0;
    while ( 1 )
    {
      __asm
      {
        VLDR            S0, [R7,#0x84]
        VLDR            S2, [R5]
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
        VDIV.F32        S0, S2, S0
        VMOV            R0, S0
      }
      v14 = j_mce::Math::floor(_R0, a2);
        VLDR            S2, [R5,#4]
      v17 = j_mce::Math::floor(_R0, v16);
      a2 = *(float *)LODWORD(v6);
      _ZF = v14 == *(_DWORD *)LODWORD(v6);
      if ( v14 == *(_DWORD *)LODWORD(v6) )
        a2 = *(float *)(LODWORD(v6) + 4);
        _ZF = v17 == LODWORD(a2);
      if ( _ZF )
        break;
      _R5 += 8;
      if ( ++v9 >= *(_DWORD *)(_R7 + 128) )
        goto LABEL_9;
    }
    *(_DWORD *)v5 = *(_DWORD *)_R5;
    v20 = *(_DWORD *)(_R5 + 4);
    v19 = 1;
    *(_DWORD *)(v5 + 4) = v20;
    j_pthread_mutex_unlock_0(v4);
  return v19;
}


signed int __fastcall StrongholdFeature::getNearestGeneratedFeature(StrongholdFeature *this, Dimension *a2, const BlockPos *a3, BlockPos *a4)
{
  StrongholdFeature *v4; // r7@1
  BlockPos *v5; // r4@1
  const BlockPos *v6; // r5@1
  Dimension *v7; // r6@1
  Level *v8; // r0@2
  char *v9; // r8@2
  Dimension *v10; // r0@2
  BiomeSource *v11; // r0@2

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( !*((_BYTE *)this + 92) )
  {
    v8 = (Level *)j_Dimension::getLevel(a2);
    v9 = j_Level::getRandom(v8);
    v10 = j_Dimension::getBiomes(v7);
    v11 = (BiomeSource *)j_ThreadLocal<BiomeSource>::getLocal((int)v10);
    j_StrongholdFeature::generatePositions(v4, (Random *)v9, v11);
    *((_BYTE *)v4 + 92) = 1;
  }
  return j_j_j__ZN17StrongholdFeature21_getNearestStrongholdER9DimensionRK8BlockPosRS2_(v4, v7, v6, v5);
}


signed int __fastcall StrongholdFeature::_isBeyondMinimumDistance(StrongholdFeature *this, const ChunkPos *a2)
{
  unsigned int v2; // r3@1
  signed int result; // r0@1

  v2 = *((_DWORD *)this + 35) * *((_DWORD *)this + 35);
  result = 0;
  if ( (unsigned int)(*(_QWORD *)a2 * *(_QWORD *)a2 + (*(_QWORD *)a2 >> 32) * (*(_QWORD *)a2 >> 32)) >= v2 )
    result = 1;
  return result;
}


int __fastcall StrongholdFeature::createStructureStart(StrongholdFeature *this, Dimension *a2, Random *a3, const ChunkPos *a4, unsigned __int64 *a5)
{
  StrongholdFeature *v5; // r4@1
  Random *v6; // r6@1
  Random *v7; // r7@1
  StrongholdStart *v8; // r5@1
  int result; // r0@1

  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (StrongholdStart *)j_operator new(0x34u);
  result = j_StrongholdStart::StrongholdStart(v8, (Dimension *)v7, v6, *a5, *a5 >> 32);
  *(_DWORD *)v5 = v8;
  return result;
}


signed int __fastcall StrongholdFeature::_hasAdditionalStronghold(StrongholdFeature *this, BiomeSource *a2, Random *a3, const ChunkPos *a4)
{
  BiomeSource *v6; // r5@1
  int v12; // r0@2
  int v13; // r7@2
  float v15; // r1@2
  int v16; // r0@2
  int v17; // r1@2
  signed int v18; // kr00_4@2
  signed int result; // r0@4
  int v20; // [sp+0h] [bp-30h]@2
  int v21; // [sp+4h] [bp-2Ch]@2
  char v22; // [sp+8h] [bp-28h]@2
  __int64 v23; // [sp+10h] [bp-20h]@3

  _R4 = a4;
  _R6 = this;
  v6 = a2;
  _R0 = *(_QWORD *)a4;
  if ( (signed int)_R0 * (signed int)_R0 + HIDWORD(_R0) * HIDWORD(_R0) < (unsigned int)(*((_DWORD *)_R6 + 35)
                                                                                      * *((_DWORD *)_R6 + 35)) )
    goto LABEL_8;
  HIDWORD(_R0) = *((_DWORD *)_R6 + 33);
  __asm
  {
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
    VMOV            S2, R1
    VCVT.F32.S32    S2, S2
    VDIV.F32        S0, S0, S2
    VMOV            R0, S0
  }
  v12 = j_mce::Math::floor((mce::Math *)_R0, *((float *)&_R0 + 1));
  __asm { VLDR            S0, [R6,#0x84] }
  v13 = v12;
    VLDR            S2, [R4,#4]
    VDIV.F32        S0, S2, S0
  v16 = j_mce::Math::floor(_R0, v15);
  v17 = *((_DWORD *)_R6 + 33);
  v18 = *((_DWORD *)_R6 + 33);
  v20 = v17 * v13 + v18 / 2;
  v21 = v16 * v17 + v18 / 2;
  j_StrongholdFeature::_generateStronghold((StrongholdFeature *)&v22, _R6, v6, (__int64 *)&v20);
  if ( !v22 || v23 ^ *(_QWORD *)_R4 )
LABEL_8:
    result = 0;
  else
    result = 1;
  return result;
}


int __fastcall StrongholdFeature::_generateStronghold(StrongholdFeature *this, BiomeSource *a2, const ChunkPos *a3, __int64 *a4)
{
  StrongholdFeature *v4; // r10@1
  int v5; // r8@1
  char *v7; // r6@1
  const ChunkPos *v9; // r5@1
  int v15; // r0@2
  float v17; // r1@2
  unsigned int v18; // r0@2
  signed int v19; // r1@2
  int v20; // r0@3
  int *v21; // r4@3
  int v22; // r3@3
  __int64 v23; // kr00_8@4
  int v24; // r5@4
  unsigned int v25; // r0@4
  int v26; // r1@4
  signed int v27; // r2@4
  int v28; // r0@5
  int *v29; // r5@5
  int v30; // r7@5
  __int64 v31; // r1@6
  int v32; // r6@6
  int v33; // r7@6
  int v34; // r0@6
  int v35; // r4@6
  unsigned int v36; // r1@8
  unsigned int v37; // r1@13
  int v39; // [sp+4h] [bp-A04h]@2
  int v40; // [sp+8h] [bp-A00h]@2
  char *v41; // [sp+Ch] [bp-9FCh]@2
  unsigned int v42; // [sp+10h] [bp-9F8h]@2
  unsigned int v43; // [sp+14h] [bp-9F4h]@2
  int v44; // [sp+9D4h] [bp-34h]@2
  char v45; // [sp+9D8h] [bp-30h]@2
  int v46; // [sp+9DCh] [bp-2Ch]@2
  int v47; // [sp+9E0h] [bp-28h]@4

  v4 = this;
  v5 = 0;
  _R7 = a4;
  *((_DWORD *)this + 2) = 0;
  v7 = (char *)this + 8;
  _R11 = a2;
  *((_DWORD *)this + 3) = 0;
  v9 = a3;
  *(_BYTE *)this = 0;
  _R0 = *a4;
  if ( (signed int)_R0 * (signed int)_R0 + HIDWORD(_R0) * HIDWORD(_R0) >= (unsigned int)(*((_DWORD *)_R11 + 35)
                                                                                       * *((_DWORD *)_R11 + 35)) )
  {
    HIDWORD(_R0) = *((_DWORD *)_R11 + 33);
    __asm { VMOV            S0, R0 }
    v41 = v7;
    __asm
    {
      VCVT.F32.S32    S0, S0
      VMOV            S2, R1
      VCVT.F32.S32    S2, S2
      VDIV.F32        S0, S0, S2
      VMOV            R0, S0
    }
    v15 = j_mce::Math::floor((mce::Math *)_R0, *((float *)&_R0 + 1));
      VLDR            S0, [R11,#0x84]
      VLDR            S2, [R7,#4]
    v40 = v15;
      VDIV.F32        S0, S2, S0
    v39 = j_mce::Math::floor(_R0, v17);
    v18 = sub_21E67AC((int)&Random::mRandomDevice);
    v42 = v18;
    v44 = 625;
    v19 = 1;
    v45 = 0;
    v46 = 0;
    v43 = v18;
    do
      v20 = v18 ^ (v18 >> 30);
      v21 = (int *)(&v42 + v5);
      v22 = v5++ + 1812433253 * v20;
      v18 = v19++ + 1812433253 * v20;
      v21[2] = v22 + 1;
    while ( v5 != 397 );
    v44 = 624;
    v47 = 398;
    v23 = *_R7;
    v24 = *((_DWORD *)v9 + 12);
    j_Random::_checkThreadId((Random *)&v42);
    v25 = -1100435783 * HIDWORD(v23) + -1683231919 * v23 + v24 + 97858791;
    v42 = -1100435783 * HIDWORD(v23) + -1683231919 * v23 + v24 + 97858791;
    v26 = 0;
    v27 = 1;
    v43 = -1100435783 * HIDWORD(v23) + -1683231919 * v23 + v24 + 97858791;
      v28 = v25 ^ (v25 >> 30);
      v29 = (int *)(&v42 + v26);
      v30 = v26++ + 1812433253 * v28;
      v25 = v27++ + 1812433253 * v28;
      v29[2] = v30 + 1;
    while ( v26 != 397 );
    v31 = *(_QWORD *)((char *)_R11 + 132);
    v32 = v31 - HIDWORD(v31) + v31 * v39;
    v33 = v31 - HIDWORD(v31) + v31 * v40;
    v34 = HIDWORD(v31) + v31 * v40;
    v35 = HIDWORD(v31) + v31 * v39;
    if ( v34 > v33 )
      if ( v34 == v33 )
        v36 = 0;
      else
        v36 = j_Random::_genRandInt32((Random *)&v42) % (v34 - v33);
      v33 += v36;
    if ( v35 > v32 )
      if ( v35 == v32 )
        v37 = 0;
        v37 = j_Random::_genRandInt32((Random *)&v42) % (v35 - v32);
      v32 += v37;
    *(_DWORD *)v41 = v33;
    *((_DWORD *)v41 + 1) = v32;
    LODWORD(_R0) = j_Random::_genRandInt32((Random *)&v42);
      VMOV            S0, R0
      VLDR            D1, =2.32830644e-10
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D1
      VCVT.F32.F64    S0, D0
      VLDR            S2, [R11,#0x90]
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      LODWORD(_R0) = 1;
      *(_BYTE *)v4 = 1;
  }
  return _R0;
}


int __fastcall StrongholdFeature::_getCenterOfGrid(StrongholdFeature *this, const ChunkPos *a2, int a3)
{
  StrongholdFeature *v9; // r6@1
  int v11; // r0@1
  int v12; // r7@1
  float v14; // r1@1
  int v15; // r0@1
  int v16; // r1@1
  signed int v17; // kr00_4@1
  int result; // r0@1

  _R4 = a3;
  _R5 = a2;
  __asm { VLDR            S0, [R5,#0x84] }
  v9 = this;
  __asm
  {
    VLDR            S2, [R4]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VDIV.F32        S0, S2, S0
    VMOV            R0, S0
  }
  v11 = j_mce::Math::floor(_R0, *(float *)&a2);
  v12 = v11;
    VLDR            S2, [R4,#4]
  v15 = j_mce::Math::floor(_R0, v14);
  v16 = *((_DWORD *)_R5 + 33);
  v17 = *((_DWORD *)_R5 + 33);
  result = v15 * v16 + v17 / 2;
  *(_DWORD *)v9 = v16 * v12 + v17 / 2;
  *((_DWORD *)v9 + 1) = result;
  return result;
}
