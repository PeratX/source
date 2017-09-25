

unsigned int __fastcall StructurePiece::maybeGenerateBlock(int a1, int a2, int a3, Random *this, float a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // r5@1
  int v11; // r4@1
  unsigned int result; // r0@1
  int (__fastcall *v17)(int, int, char *, int); // r7@3
  char v18; // [sp+10h] [bp-18h]@3
  char v19; // [sp+11h] [bp-17h]@3

  v10 = a1;
  v11 = a2;
  result = j_Random::_genRandInt32(this);
  __asm
  {
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S0, D0
    VLDR            S2, [SP,#0x28+arg_0]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    v17 = *(int (__fastcall **)(int, int, char *, int))(*(_DWORD *)v10 + 36);
    v18 = *(_BYTE *)a9;
    v19 = a10;
    result = v17(v10, v11, &v18, a6);
  return result;
}


signed int __fastcall StructurePiece::getTotalWeight(__int64 *a1)
{
  __int64 v1; // kr00_8@1
  char v2; // lr@1
  signed int result; // r0@2
  int v4; // r3@3
  unsigned int v5; // r2@3
  signed int v6; // r1@4
  bool v7; // nf@5
  unsigned __int8 v8; // vf@5
  char v9; // r1@5
  int v10; // r1@8

  v1 = *a1;
  v2 = 0;
  if ( HIDWORD(v1) == (_DWORD)v1 )
  {
    result = 0;
  }
  else
    v4 = v1 + 8;
    v5 = 0;
    do
    {
      v6 = *(_DWORD *)(v4 + 4);
      if ( v6 >= 1 )
      {
        v8 = __OFSUB__(*(_DWORD *)v4, v6);
        v7 = *(_DWORD *)v4 - v6 < 0;
        v9 = 0;
        if ( v7 ^ v8 )
          v9 = 1;
        v2 |= v9;
      }
      v10 = *(_DWORD *)(v4 - 4);
      ++v5;
      v4 += 24;
      result += v10;
    }
    while ( v5 < -1431655765 * ((HIDWORD(v1) - (signed int)v1) >> 3) );
  if ( !(v2 & 1) )
    result = -1;
  return result;
}


int __fastcall StructurePiece::findCollisionPiece(__int64 *a1, int a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r3@2
  int v4; // r12@2
  int v5; // lr@2
  int v6; // r7@2
  __int64 v7; // kr08_8@2
  int v8; // r1@2
  int result; // r0@3

  v2 = *a1;
  if ( HIDWORD(v2) == (_DWORD)v2 )
  {
LABEL_10:
    result = 0;
  }
  else
    v3 = *(_DWORD *)a2;
    v4 = *(_DWORD *)(a2 + 4);
    v5 = *(_DWORD *)(a2 + 8);
    v6 = 0;
    v7 = *(_QWORD *)(a2 + 12);
    v8 = *(_DWORD *)(a2 + 20);
    while ( 1 )
    {
      result = *(_DWORD *)(v2 + 4 * v6);
      if ( *(_DWORD *)(result + 16) >= v3
        && *(_DWORD *)(result + 4) <= (signed int)v7
        && *(_DWORD *)(result + 24) >= v5
        && *(_DWORD *)(result + 12) <= v8
        && *(_DWORD *)(result + 20) >= v4
        && *(_DWORD *)(result + 8) <= SHIDWORD(v7) )
      {
        break;
      }
      if ( ++v6 >= (unsigned int)((HIDWORD(v2) - (signed int)v2) >> 2) )
        goto LABEL_10;
    }
  return result;
}


int __fastcall StructurePiece::generateUpperHalfSphere(int a1, BlockPos *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, char *a10)
{
  int v10; // r7@1
  int v11; // r10@1
  int v13; // r4@1
  int result; // r0@1
  int v22; // r11@3
  int v25; // r9@6
  int v26; // r0@7
  int v29; // r6@9
  int v30; // r0@9
  int v31; // r9@9
  int v32; // r5@9
  int v33; // r0@11
  int v34; // r0@17
  void (__fastcall *v35)(int, const BlockPos *, char *, int); // r6@22
  int v36; // r5@27
  void (__fastcall *v37)(int, const BlockPos *, char *, int); // r4@27
  int v38; // [sp+10h] [bp-88h]@1
  const BlockPos *v39; // [sp+18h] [bp-80h]@1
  char v40; // [sp+1Ch] [bp-7Ch]@22
  char v41; // [sp+1Dh] [bp-7Bh]@22
  unsigned __int8 v42; // [sp+20h] [bp-78h]@17
  int v43; // [sp+24h] [bp-74h]@11
  int v44; // [sp+28h] [bp-70h]@11
  int v45; // [sp+2Ch] [bp-6Ch]@11

  v10 = a1;
  v38 = a4;
  v11 = a3;
  v39 = a2;
  _R0 = 1 - a4 + a7;
  v13 = a9;
  __asm { VMOV            S0, R0 }
  _R0 = 1 - a6 + a9;
  __asm
  {
    VMOV            S2, R0
    VCVT.F32.S32    S0, S0
  }
  result = 1 - a5 + a8;
    VCVT.F32.S32    S2, S2
    VMOV            S4, R0
    VCVT.F32.S32    S16, S4
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm { VMOV.F32        S4, #0.5 }
    _R0 = a6;
    __asm
    {
      VLDR            S26, =1.05
      VMUL.F32        S18, S0, S4
      VMOV            S0, R0
      VMUL.F32        S20, S2, S4
      VCVT.F32.S32    S0, S0
    }
    _R0 = a4;
      VMOV            S2, R0
      VCVT.F32.S32    S2, S2
      VNEG.F32        S0, S0
      VNEG.F32        S2, S2
    v22 = a5;
      VSUB.F32        S22, S0, S20
      VSUB.F32        S24, S2, S18
    do
      _R0 = v22 - a5;
      __asm
      {
        VMOV            S0, R0
        VCVT.F32.S32    S0, S0
      }
      if ( v38 <= a7 )
        __asm { VDIV.F32        S0, S0, S16 }
        _R0 = v38;
        __asm { VMUL.F32        S28, S0, S0 }
        do
        {
          __asm { VMOV            S0, R0 }
          v25 = _R0;
          __asm { VCVT.F32.S32    S0, S0 }
          if ( a6 <= v13 )
          {
            __asm { VADD.F32        S0, S24, S0 }
            v26 = a6;
            _R6 = a6;
            __asm
            {
              VDIV.F32        S0, S0, S18
              VMUL.F32        S0, S0, S0
              VADD.F32        S30, S0, S28
            }
            if ( _ZF )
              do
              {
                _R8 = v26;
                v29 = v25;
                v30 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v10 + 28))(v10, v25, v26);
                __asm { VMOV            S0, R8 }
                v31 = v30;
                __asm { VCVT.F32.S32    S17, S0 }
                v32 = v22;
                if ( *(_DWORD *)(v10 + 28) != 255 )
                  v22 += *(_DWORD *)(v10 + 8);
                v33 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v10 + 32))(v10, v29, _R8);
                v43 = v31;
                v44 = v22;
                v45 = v33;
                if ( *(_DWORD *)v11 > v31
                  || *(_DWORD *)(v11 + 12) < v31
                  || *(_DWORD *)(v11 + 8) > v33
                  || *(_DWORD *)(v11 + 20) < v33
                  || *(_DWORD *)(v11 + 4) > v22
                  || *(_DWORD *)(v11 + 16) < v22 )
                {
                  v25 = v29;
                  v34 = BlockID::AIR;
                  v42 = BlockID::AIR;
                }
                else
                  j_BlockSource::getBlockID((BlockSource *)&v42, v39, (int)&v43);
                  v34 = v42;
                v22 = v32;
                if ( v34 )
                  __asm
                  {
                    VADD.F32        S0, S22, S17
                    VDIV.F32        S0, S0, S20
                    VMUL.F32        S0, S0, S0
                    VADD.F32        S0, S30, S0
                    VCMPE.F32       S0, S26
                    VMRS            APSR_nzcv, FPSCR
                  }
                  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                    v35 = *(void (__fastcall **)(int, const BlockPos *, char *, int))(*(_DWORD *)v10 + 36);
                    v40 = *a10;
                    v41 = 0;
                    v35(v10, v39, &v40, v25);
                v26 = _R8 + 1;
              }
              while ( _R8 < v13 );
            else
                __asm
                  VMOV            S0, R6
                  VCVT.F32.S32    S0, S0
                  VADD.F32        S0, S22, S0
                  VDIV.F32        S0, S0, S20
                  VMUL.F32        S0, S0, S0
                  VADD.F32        S0, S30, S0
                  VCMPE.F32       S0, S26
                  VMRS            APSR_nzcv, FPSCR
                if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                  v36 = v13;
                  v37 = *(void (__fastcall **)(int, const BlockPos *, char *, int))(*(_DWORD *)v10 + 36);
                  v40 = *a10;
                  v41 = 0;
                  v37(v10, v39, &v40, v25);
                  v13 = v36;
                _VF = __OFSUB__(_R6, v13);
                _NF = _R6++ - v13 < 0;
              while ( _NF ^ _VF );
          }
          _R0 = v25 + 1;
        }
        while ( v25 < a7 );
      result = v22 + 1;
      _VF = __OFSUB__(v22, a8);
      _NF = v22++ - a8 < 0;
    while ( _NF ^ _VF );
  return result;
}


signed int __fastcall StructurePiece::edgesLiquid(StructurePiece *this, BlockSource *a2, const BoundingBox *a3)
{
  BlockSource *v3; // r4@1
  __int64 v4; // kr00_8@1
  int v5; // r8@1
  int v6; // r10@1
  int v7; // r7@1
  int v8; // r9@1
  __int64 v9; // kr18_8@1
  __int64 v10; // kr20_8@1
  __int64 v11; // kr28_8@1
  signed int v12; // r2@3
  int v13; // r0@7
  int v14; // r6@7
  int v15; // r5@7
  int v16; // r11@9
  int v17; // r6@17
  int v18; // r8@17
  int v19; // r7@17
  Material *v20; // r0@18
  Material *v21; // r0@19
  bool v22; // nf@21
  unsigned __int8 v23; // vf@21
  int v24; // r0@24
  int v25; // r8@26
  int v26; // r0@26
  int v27; // r6@27
  Material *v28; // r10@28
  Material *v29; // r7@28
  signed int result; // r0@32
  int v31; // r8@36
  int v32; // r6@37
  Material *v33; // r0@38
  Material *v34; // r0@39
  int v35; // [sp+4h] [bp-3Ch]@26
  int v36; // [sp+8h] [bp-38h]@27
  int v37; // [sp+Ch] [bp-34h]@27
  int v38; // [sp+10h] [bp-30h]@1
  int v39; // [sp+14h] [bp-2Ch]@13
  int v40; // [sp+18h] [bp-28h]@17
  int v41; // [sp+18h] [bp-28h]@27

  v3 = a2;
  v4 = *(_QWORD *)a3;
  v38 = *(_QWORD *)a3 >> 32;
  v6 = *((_QWORD *)a3 + 1) >> 32;
  v5 = *((_QWORD *)a3 + 1);
  v7 = *((_QWORD *)a3 + 2) >> 32;
  v8 = *((_QWORD *)a3 + 2);
  v9 = *(_QWORD *)((char *)this + 4);
  v10 = *(_QWORD *)((char *)this + 12);
  v11 = *(_QWORD *)((char *)this + 20);
  if ( HIDWORD(v11) + 1 < v7 )
    v7 = HIDWORD(v11) + 1;
  v12 = v9 - 1;
  if ( (signed int)v11 + 1 < v8 )
    v8 = v11 + 1;
  if ( HIDWORD(v10) + 1 < v6 )
    v6 = HIDWORD(v10) + 1;
  v13 = v10 - 1;
  v14 = HIDWORD(v9) - 1;
  v15 = v10 - 1;
  if ( (signed int)v10 - 1 < v5 )
    v15 = v5;
  v16 = HIDWORD(v9) - 1;
  if ( v14 < SHIDWORD(v4) )
    v16 = HIDWORD(v4);
  if ( v12 < (signed int)v4 )
    v12 = v4;
  v39 = v12;
  if ( v12 <= v6 )
  {
    if ( v15 <= v7 )
    {
      if ( v5 > v13 )
        v13 = v5;
      v17 = v7;
      v18 = v13 - 1;
      v40 = v13 - 1;
      v19 = v12;
      while ( 1 )
      {
        v20 = (Material *)BlockSource::getMaterial(v3, v19, v16, ++v18);
        if ( j_Material::isLiquid(v20) )
          goto LABEL_43;
        v21 = (Material *)BlockSource::getMaterial(v3, v19, v8, v18);
        if ( j_Material::isLiquid(v21) )
        if ( v18 >= v17 )
        {
          v18 = v40;
          v23 = __OFSUB__(v19, v6);
          v22 = v19++ - v6 < 0;
          if ( !(v22 ^ v23) )
          {
            v7 = v17;
            v14 = HIDWORD(v9) - 1;
            if ( v39 > v6 )
              goto LABEL_32;
            break;
          }
        }
      }
    }
    if ( v16 <= v8 )
      v24 = v14;
      if ( v38 > v14 )
        v24 = v38;
      v25 = v39;
      v26 = v24 - 1;
      v35 = v26;
LABEL_27:
      v41 = v7;
      v36 = v6;
      v37 = v14;
      v27 = v26;
        v28 = (Material *)BlockSource::getMaterial(v3, v25, ++v27, v15);
        v29 = (Material *)BlockSource::getMaterial(v3, v25, v27, v41);
        if ( j_Material::isLiquid(v28) || j_Material::isLiquid(v29) )
        if ( v27 >= v8 )
          v6 = v36;
          v7 = v41;
          v23 = __OFSUB__(v25, v36);
          v22 = v25++ - v36 < 0;
          v14 = v37;
          v26 = v35;
          if ( v22 ^ v23 )
            goto LABEL_27;
          break;
  }
LABEL_32:
  result = 0;
  if ( v15 <= v7 && v16 <= v8 )
    if ( v38 > v14 )
      v14 = v38;
    v31 = v14 - 1;
LABEL_37:
    v32 = v31;
    while ( 1 )
      v33 = (Material *)BlockSource::getMaterial(v3, v39, ++v32, v15);
      if ( j_Material::isLiquid(v33) )
        break;
      v34 = (Material *)BlockSource::getMaterial(v3, v6, v32, v15);
      if ( j_Material::isLiquid(v34) )
      if ( v32 >= v8 )
        v23 = __OFSUB__(v15, v7);
        v22 = v15 - v7 < 0;
        result = 0;
        ++v15;
        if ( v22 ^ v23 )
          goto LABEL_37;
        return result;
LABEL_43:
    result = 1;
  return result;
}


int __fastcall StructurePiece::generateBox(StructurePiece *this, BlockSource *a2, const BoundingBox *a3, const BoundingBox *a4, int a5, Random *a6, BlockSelector *a7)
{
  return StructurePiece::generateBox(
           this,
           a2,
           a3,
           *(_QWORD *)a4,
           *(_QWORD *)a4 >> 32,
           *((_DWORD *)a4 + 2),
           *((_DWORD *)a4 + 3),
           *((_DWORD *)a4 + 4),
           *((_DWORD *)a4 + 5),
           a5,
           a6,
           a7);
}


signed int __fastcall StructurePiece::createChest(StructurePiece *a1, BlockSource *a2, int a3, Random *a4, int a5, int a6, int a7, int a8, int *a9)
{
  StructurePiece *v9; // r4@1
  Random *v10; // r7@1
  int v11; // r5@1
  int v12; // r9@1
  int v13; // r8@1
  int v14; // r11@3
  char v15; // r10@3
  int v16; // r0@9
  signed int result; // r0@10
  int v18; // r4@11
  unsigned int v19; // r0@12
  void *v20; // r0@12
  unsigned int *v21; // r2@14
  signed int v22; // r1@16
  BlockSource *v23; // [sp+14h] [bp-3Ch]@1
  int v24; // [sp+18h] [bp-38h]@12
  char v25; // [sp+1Ch] [bp-34h]@11
  unsigned __int8 v26; // [sp+20h] [bp-30h]@9

  v9 = a1;
  v10 = a4;
  v11 = a3;
  v23 = a2;
  v12 = (*(int (**)(void))(*(_DWORD *)a1 + 28))();
  v13 = a6;
  if ( *((_DWORD *)v9 + 7) != 255 )
    v13 = a6 + *((_DWORD *)v9 + 2);
  v14 = (*(int (__fastcall **)(StructurePiece *, int, int))(*(_DWORD *)v9 + 32))(v9, a5, a7);
  v15 = StructurePiece::getOrientationData(v9, (const Block *)Block::mChest, a8);
  if ( *(_DWORD *)v11 <= v12
    && *(_DWORD *)(v11 + 12) >= v12
    && *(_DWORD *)(v11 + 8) <= v14
    && *(_DWORD *)(v11 + 20) >= v14
    && *(_DWORD *)(v11 + 4) <= v13
    && *(_DWORD *)(v11 + 16) >= v13
    && (j_BlockSource::getBlockID((BlockSource *)&v26, (int)v23, v12, v13, v14),
        v16 = *(_BYTE *)(Block::mChest + 4),
        v26 != v16) )
  {
    v25 = *(_BYTE *)(Block::mChest + 4);
    j_BlockSource::setBlockAndData((int)v23, v12, v13, v14, &v25, v15, 4);
    v18 = j_BlockSource::getBlockEntity(v23, v12, v13, v14);
    if ( v18 )
    {
      sub_21E8AF4(&v24, a9);
      v19 = j_Random::_genRandInt32(v10);
      RandomizableBlockEntityContainerBase::setLootTable(v18, &v24, v19 >> 1);
      v20 = (void *)(v24 - 12);
      if ( (int *)(v24 - 12) != &dword_28898C0 )
      {
        v21 = (unsigned int *)(v24 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
        }
        else
          v22 = (*v21)--;
        if ( v22 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      }
    }
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall StructurePiece::getWorldX(StructurePiece *this, int a2, int a3)
{
  int result; // r0@2

  switch ( *((_DWORD *)this + 7) )
  {
    case 0:
    case 2:
      result = a2 + *((_DWORD *)this + 1);
      break;
    case 1:
      result = *((_DWORD *)this + 4) - a3;
    case 3:
      a2 = *((_DWORD *)this + 1) + a3;
      goto def_1946C56;
    default:
def_1946C56:
      result = a2;
  }
  return result;
}


int __fastcall StructurePiece::getLocatorPosition(int result, int a2)
{
  int v2; // r12@1
  __int64 v3; // kr08_8@1
  __int64 v4; // r2@1

  v2 = *(_DWORD *)(a2 + 12);
  v3 = *(_QWORD *)(a2 + 20);
  LODWORD(v4) = *(_DWORD *)(a2 + 4) + (1 - *(_DWORD *)(a2 + 4) + *(_DWORD *)(a2 + 16)) / 2;
  HIDWORD(v4) = *(_DWORD *)(a2 + 8) + (1 - *(_DWORD *)(a2 + 8) + (signed int)v3) / 2;
  *(_QWORD *)result = v4;
  *(_DWORD *)(result + 8) = v2 + (HIDWORD(v3) + 1 - v2) / 2;
  return result;
}


int __fastcall StructurePiece::fillColumnDown(int a1, BlockSource *a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // r4@1
  int v8; // r7@1
  int v9; // r9@1
  BlockSource *v10; // r8@1
  int v11; // r6@1
  int v12; // r5@1
  int result; // r0@3
  Material *v14; // r0@14
  char v15; // [sp+4h] [bp-3Ch]@17
  char v16; // [sp+5h] [bp-3Bh]@17
  unsigned __int8 v17; // [sp+8h] [bp-38h]@16
  char v18; // [sp+Ch] [bp-34h]@10
  char v19; // [sp+Dh] [bp-33h]@10
  int v20; // [sp+10h] [bp-30h]@3
  int v21; // [sp+14h] [bp-2Ch]@3
  int v22; // [sp+18h] [bp-28h]@3

  v7 = a1;
  v8 = a4;
  v9 = a3;
  v10 = a2;
  v11 = (*(int (**)(void))(*(_DWORD *)a1 + 28))();
  v12 = a5;
  if ( *(_DWORD *)(v7 + 28) != 255 )
    v12 = a5 + *(_DWORD *)(v7 + 8);
  result = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v7 + 32))(v7, v8, a6);
  v20 = v11;
  v21 = v12;
  v22 = result;
  if ( *(_DWORD *)a7 <= v11
    && *(_DWORD *)(a7 + 12) >= v11
    && *(_DWORD *)(a7 + 8) <= result
    && *(_DWORD *)(a7 + 20) >= result )
  {
    result = *(_DWORD *)(a7 + 4);
    if ( result <= v12 )
    {
      result = *(_DWORD *)(a7 + 16);
      if ( result >= v12 )
      {
        while ( 1 )
        {
          if ( j_BlockSource::isEmptyBlock(v10, (const BlockPos *)&v20) )
          {
            if ( v21 < 2 )
              goto LABEL_16;
          }
          else
            v14 = (Material *)j_BlockSource::getMaterial(v10, (const BlockPos *)&v20);
            if ( j_Material::isLiquid(v14) != 1 || v21 <= 1 )
            {
LABEL_16:
              j_BlockSource::getBlockID((BlockSource *)&v17, v10, (int)&v20);
              result = *(_BYTE *)(Block::mGrass + 4);
              if ( v17 == result )
              {
                v15 = *(_BYTE *)(Block::mDirt + 4);
                v16 = 0;
                result = j_BlockSource::setBlockAndData((int)v10, (BlockPos *)&v20, (int)&v15, 4, 0);
              }
              return result;
            }
          v18 = *(_BYTE *)v9;
          v19 = *(_BYTE *)(v9 + 1);
          j_BlockSource::setBlockAndData((int)v10, (BlockPos *)&v20, (int)&v18, 4, 0);
          --v21;
        }
      }
    }
  }
  return result;
}


int __fastcall StructurePiece::generateAirBox(StructurePiece *this, BlockSource *a2, const BoundingBox *a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4@1
  StructurePiece *v10; // r6@1
  int result; // r0@1
  BlockSource *v12; // r9@1
  __int16 *v13; // r2@3
  int v14; // r5@3
  int v15; // r10@4
  int v16; // r8@5
  BlockSource *v17; // r1@6
  BlockSource *v18; // r5@6
  __int16 *v19; // r9@6
  void (__fastcall *v20)(StructurePiece *, BlockSource *); // r12@6
  bool v21; // nf@6
  unsigned __int8 v22; // vf@6
  int v23; // [sp+Ch] [bp-2Ch]@1
  __int16 v24; // [sp+10h] [bp-28h]@3

  v9 = a5;
  v10 = this;
  result = a8;
  v12 = a2;
  v23 = a4;
  if ( a5 <= a8 )
  {
    result = a4;
    if ( a4 <= a7 )
    {
      v13 = &v24;
      v14 = a9;
      do
      {
        v15 = v23;
        if ( a6 <= v14 )
        {
          do
          {
            v16 = a6;
            do
            {
              v17 = v12;
              v18 = v12;
              v19 = v13;
              v20 = *(void (__fastcall **)(StructurePiece *, BlockSource *))(*(_DWORD *)v10 + 36);
              v24 = FullBlock::AIR;
              v20(v10, v17);
              v13 = v19;
              v12 = v18;
              v14 = a9;
              v22 = __OFSUB__(v16, a9);
              v21 = v16++ - a9 < 0;
            }
            while ( v21 ^ v22 );
            v22 = __OFSUB__(v15, a7);
            v21 = v15++ - a7 < 0;
          }
          while ( v21 ^ v22 );
        }
        result = v9 + 1;
        v22 = __OFSUB__(v9, a8);
        v21 = v9++ - a8 < 0;
      }
      while ( v21 ^ v22 );
    }
  }
  return result;
}


int __fastcall StructurePiece::getType(StructurePiece *this)
{
  return 0;
}


int __fastcall StructurePiece::getWorldZ(StructurePiece *this, int a2, int a3)
{
  int result; // r0@3

  switch ( *((_DWORD *)this + 7) )
  {
    case 1:
    case 3:
      a3 = *((_DWORD *)this + 3) + a2;
      goto def_1946C8E;
    case 0:
      result = a3 + *((_DWORD *)this + 3);
      break;
    case 2:
      result = *((_DWORD *)this + 6) - a3;
    default:
def_1946C8E:
      result = a3;
  }
  return result;
}


signed int __fastcall StructurePiece::getTorchData(StructurePiece *this, int a2)
{
  char v2; // r0@4
  unsigned int v3; // r1@4
  signed int result; // r0@11

  if ( a2 == 255 )
  {
def_1946F2A:
    result = 5;
  }
  else
    switch ( *((_DWORD *)this + 7) )
    {
      case 0:
        if ( (unsigned int)a2 >= 4 )
          goto def_1946F2A;
        v2 = 8 * a2;
        v3 = 33816835;
        break;
      case 1:
        v3 = 67175170;
      case 2:
        v3 = 33751300;
      case 3:
        v3 = 67240705;
      default:
        goto def_1946F2A;
    }
    result = (unsigned __int8)(v3 >> v2);
  return result;
}


int __fastcall StructurePiece::generateBox(int a1, int a2, int a3, int a4, char *a5, char *a6)
{
  __int64 v6; // kr00_8@1
  int v7; // r5@1
  int v8; // r6@1
  int v9; // r7@1
  int v10; // r8@1
  int (__cdecl *v11)(int, int, int, _DWORD, _DWORD, int, int, int, int, char *); // lr@1
  char v13; // [sp+20h] [bp-28h]@1
  char v14; // [sp+21h] [bp-27h]@1
  char v15; // [sp+24h] [bp-24h]@1
  char v16; // [sp+25h] [bp-23h]@1

  v6 = *(_QWORD *)a4;
  v7 = *(_DWORD *)(a4 + 8);
  v8 = *(_DWORD *)(a4 + 12);
  v9 = *(_DWORD *)(a4 + 16);
  v10 = *(_DWORD *)(a4 + 20);
  v11 = *(int (__cdecl **)(int, int, int, _DWORD, _DWORD, int, int, int, int, char *))(*(_DWORD *)a1 + 40);
  v15 = *a5;
  v16 = 0;
  v13 = *a6;
  v14 = 0;
  return v11(a1, a2, a3, v6, HIDWORD(v6), v7, v8, v9, v10, &v15);
}


int __fastcall StructurePiece::getWorldY(StructurePiece *this, int a2)
{
  if ( *((_DWORD *)this + 7) != 255 )
    a2 += *((_DWORD *)this + 2);
  return a2;
}


signed int __fastcall StructurePiece::generateAirColumnUp(StructurePiece *this, BlockSource *a2, int a3, int a4, int a5, const BoundingBox *a6)
{
  StructurePiece *v6; // r5@1
  signed int v7; // r4@1
  int v8; // r7@1
  BlockSource *v9; // r8@1
  int v10; // r9@1
  int v11; // r7@3
  signed int result; // r0@3
  __int16 v13; // [sp+Ch] [bp-24h]@11

  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = (*(int (**)(void))(*(_DWORD *)this + 28))();
  if ( *((_DWORD *)v6 + 7) != 255 )
    v7 += *((_DWORD *)v6 + 2);
  v11 = (*(int (__fastcall **)(StructurePiece *, int, int))(*(_DWORD *)v6 + 32))(v6, v8, a5);
  result = *(_DWORD *)a6;
  if ( *(_DWORD *)a6 <= v10 )
  {
    result = *((_DWORD *)a6 + 3);
    if ( result >= v10 )
    {
      result = *((_DWORD *)a6 + 2);
      if ( result <= v11 )
      {
        result = *((_DWORD *)a6 + 5);
        if ( result >= v11 )
        {
          result = *((_DWORD *)a6 + 1);
          if ( result <= v7 )
          {
            result = *((_DWORD *)a6 + 4);
            if ( result >= v7 )
            {
              result = BlockSource::isEmptyBlock(v9, v10, v7, v11);
              if ( !result )
              {
                do
                {
                  result = *((_WORD *)v9 + 12) - 1;
                  if ( v7 >= result )
                    break;
                  v13 = 0;
                  BlockSource::setBlockAndData((int)v9, v10, v7++, v11, (int)&v13, 4);
                  result = BlockSource::isEmptyBlock(v9, v10, v7, v11);
                }
                while ( result != 1 );
              }
            }
          }
        }
      }
    }
  }
  return result;
}


int __fastcall StructurePiece::generateMaybeBox(int a1, int a2, int a3, Random *this, float a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15)
{
  int v15; // r10@1
  int result; // r0@1
  Random *v17; // r6@1
  int v18; // r7@1
  int v19; // r4@2
  int v20; // r5@2
  signed int v24; // r0@4
  signed int v25; // r1@6
  int v26; // r9@10
  signed int v27; // r0@10
  signed int v28; // r1@12
  int v30; // r2@17
  int v31; // r6@18
  int (__fastcall *v32)(int, int); // r3@18
  int v33; // r0@18
  int v34; // r10@18
  int v35; // r11@18
  int v36; // r2@18
  int v37; // r5@18
  int v38; // r0@20
  int v39; // r0@26
  Random *v40; // r8@30
  int v41; // r11@30
  int v42; // r6@30
  int v43; // r4@30
  int v44; // r0@32
  Random *v45; // r11@33
  int v46; // r1@33
  signed int v47; // r0@33
  void (__fastcall *v49)(int, BlockSource *, char *, int); // r6@35
  char *v50; // r2@38
  int v51; // r0@38
  BlockSource *v52; // r1@38
  int v53; // r2@42
  int v54; // [sp+10h] [bp-78h]@8
  int v55; // [sp+18h] [bp-70h]@1
  Random *v56; // [sp+1Ch] [bp-6Ch]@1
  int v57; // [sp+20h] [bp-68h]@14
  int v58; // [sp+28h] [bp-60h]@3
  int v59; // [sp+2Ch] [bp-5Ch]@3
  BlockSource *v60; // [sp+30h] [bp-58h]@1
  int v61; // [sp+34h] [bp-54h]@8
  char v62; // [sp+38h] [bp-50h]@38
  char v63; // [sp+39h] [bp-4Fh]@38
  char v64; // [sp+3Ch] [bp-4Ch]@39
  char v65; // [sp+3Dh] [bp-4Bh]@39
  unsigned __int8 v66; // [sp+40h] [bp-48h]@26
  int v67; // [sp+44h] [bp-44h]@20
  int v68; // [sp+48h] [bp-40h]@20
  int v69; // [sp+4Ch] [bp-3Ch]@20

  v15 = a1;
  v60 = (BlockSource *)a2;
  result = a10;
  v17 = this;
  v18 = a3;
  v56 = this;
  v55 = v15;
  if ( a7 <= a10 )
  {
    v19 = a11;
    v20 = a8;
    __asm
    {
      VLDR            S16, [SP,#0x88+arg_0]
      VLDR            D9, =2.32830644e-10
    }
    result = a7;
    do
      v59 = result;
      v58 = result + 1;
      if ( a6 <= a9 )
      {
        v24 = 0;
        if ( v59 == a10 )
          v24 = 1;
        v25 = 0;
        if ( v59 == a7 )
          v25 = 1;
        v54 = v24 | v25;
        v61 = a6;
        do
        {
          if ( v20 <= v19 )
          {
            v26 = 0;
            v27 = 0;
            if ( v61 == a9 )
              v27 = 1;
            v28 = 0;
            if ( v61 == a6 )
              v28 = 1;
            v57 = v27 | v28 | v54;
            do
            {
              _R0 = j_Random::_genRandInt32(v17);
              __asm
              {
                VMOV            S0, R0
                VCVT.F64.U32    D0, S0
                VMUL.F64        D0, D0, D9
                VCVT.F32.F64    S0, D0
                VCMPE.F32       S0, S16
                VMRS            APSR_nzcv, FPSCR
              }
              if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                v30 = v20 + v26;
                if ( a14 != 1 )
                  goto LABEL_46;
                v31 = v15;
                v32 = *(int (__fastcall **)(int, int))(*(_DWORD *)v15 + 28);
                v33 = v15;
                v34 = v20 + v26;
                v35 = v32(v33, v61);
                v36 = v20 + v26;
                v37 = v59;
                if ( *(_DWORD *)(v31 + 28) != 255 )
                  v37 = *(_DWORD *)(v31 + 8) + v59;
                v38 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v31 + 32))(v31, v61, v36);
                v67 = v35;
                v68 = v37;
                v69 = v38;
                if ( *(_DWORD *)v18 > v35
                  || *(_DWORD *)(v18 + 12) < v35
                  || *(_DWORD *)(v18 + 8) > v38
                  || *(_DWORD *)(v18 + 20) < v38
                  || *(_DWORD *)(v18 + 4) > v37
                  || *(_DWORD *)(v18 + 16) < v37 )
                {
                  v39 = BlockID::AIR;
                  v66 = BlockID::AIR;
                }
                else
                  j_BlockSource::getBlockID((BlockSource *)&v66, v60, (int)&v67);
                  v39 = v66;
                v30 = v34;
                v20 = a8;
                v17 = v56;
                v15 = v55;
                if ( v39 )
LABEL_46:
                  if ( a15 != 1 )
                    goto LABEL_47;
                  v40 = v17;
                  v41 = v30;
                  v42 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v15 + 28))(v15, v61);
                  v43 = v58;
                  if ( *(_DWORD *)(v15 + 28) != 255 )
                    v43 = *(_DWORD *)(v15 + 8) + v58;
                  v44 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v15 + 32))(v15, v61, v41);
                  v67 = v42;
                  v68 = v43;
                  v69 = v44;
                  v19 = a11;
                  v17 = v40;
                  v20 = a8;
                  if ( !BlockSource::canSeeSky(v60, (const BlockPos *)&v67) )
                  {
LABEL_47:
                    v45 = v17;
                    v46 = a8 - a11 + v26;
                    v47 = 0;
                    if ( !v26 )
                      v47 = 1;
                    _ZF = v46 == 0;
                    v49 = *(void (__fastcall **)(int, BlockSource *, char *, int))(*(_DWORD *)v15 + 36);
                    if ( v46 )
                      _ZF = (v47 | v57) == 1;
                    if ( _ZF )
                    {
                      v64 = *(_BYTE *)a12;
                      v65 = 0;
                      v51 = v15;
                      v50 = &v64;
                      v52 = v60;
                    }
                    else
                      v62 = *(_BYTE *)a13;
                      v63 = 0;
                      v50 = &v62;
                    v49(v51, v52, v50, v61);
                    v17 = v45;
                  }
              ++v26;
            }
            while ( v20 + v26 - 1 < v19 );
          }
          v53 = v61++;
        }
        while ( v53 < a9 );
      }
      result = v58;
    while ( v59 < a10 );
  }
  return result;
}


int __fastcall StructurePiece::generateBox(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
  int v12; // r2@1
  int result; // r0@1
  int v14; // r5@2
  int v15; // r7@2
  int v16; // r8@2
  signed int v17; // r0@4
  signed int v18; // r1@6
  int v19; // r0@8
  int v20; // r9@9
  int v21; // r11@9
  int v22; // r10@10
  signed int v23; // r0@10
  signed int v24; // r1@12
  int v25; // r0@15
  int v26; // r1@15
  int v27; // r9@15
  int v28; // r6@15
  int v29; // r8@17
  int v30; // r0@17
  int v31; // r1@24
  void (__fastcall *v32)(int, _DWORD, char *, int); // r6@28
  int v33; // r0@34
  void (__fastcall *v34)(int, _DWORD, char *, int); // r6@38
  bool v35; // nf@42
  unsigned __int8 v36; // vf@42
  int v37; // [sp+10h] [bp-58h]@8
  int v38; // [sp+14h] [bp-54h]@1
  int v39; // [sp+1Ch] [bp-4Ch]@2
  int v40; // [sp+20h] [bp-48h]@3
  int v41; // [sp+24h] [bp-44h]@14
  __int64 v42; // [sp+28h] [bp-40h]@1
  char v43; // [sp+30h] [bp-38h]@30
  char v44; // [sp+31h] [bp-37h]@30
  unsigned __int8 v45; // [sp+34h] [bp-34h]@23
  int v46; // [sp+38h] [bp-30h]@17
  int v47; // [sp+3Ch] [bp-2Ch]@17
  int v48; // [sp+40h] [bp-28h]@17

  v38 = a4;
  v42 = *(_QWORD *)&a2;
  v12 = a1;
  result = a8;
  if ( a5 <= a8 )
  {
    v14 = a9;
    v15 = a6;
    v16 = a5;
    v39 = a6 - a9;
    do
    {
      v40 = v16;
      if ( v38 <= a7 )
      {
        v17 = 0;
        if ( v16 == a8 )
          v17 = 1;
        v18 = 0;
        if ( v16 == a5 )
          v18 = 1;
        v37 = v17 | v18;
        v19 = v38;
        do
        {
          v20 = v19;
          v21 = v12;
          if ( v15 <= v14 )
          {
            v22 = 0;
            v23 = 0;
            if ( v20 == a7 )
              v23 = 1;
            v24 = 0;
            if ( v20 == v38 )
              v24 = 1;
            v41 = v23 | v24 | v37;
            if ( a12 == 1 )
            {
              do
              {
                v25 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v21 + 28))(v21, v20, v15 + v22);
                v26 = v20;
                v27 = v25;
                v28 = v16;
                if ( *(_DWORD *)(v21 + 28) != 255 )
                  v28 = *(_DWORD *)(v21 + 8) + v16;
                v29 = v26;
                v30 = (*(int (__fastcall **)(int))(*(_DWORD *)v21 + 32))(v21);
                v46 = v27;
                v47 = v28;
                v48 = v30;
                if ( *(_DWORD *)HIDWORD(v42) > v27
                  || *(_DWORD *)(HIDWORD(v42) + 12) < v27
                  || *(_DWORD *)(HIDWORD(v42) + 8) > v30
                  || *(_DWORD *)(HIDWORD(v42) + 20) < v30
                  || *(_DWORD *)(HIDWORD(v42) + 4) > v28
                  || *(_DWORD *)(HIDWORD(v42) + 16) < v28 )
                {
                  v20 = v29;
                  v45 = BlockID::AIR;
                }
                else
                  j_BlockSource::getBlockID((BlockSource *)&v45, (const BlockPos *)v42, (int)&v46);
                  if ( v45 != BlockID::AIR )
                  {
                    v31 = a11;
                    if ( !v22 )
                      v31 = a10;
                    if ( v41 )
                    v32 = *(void (__fastcall **)(int, _DWORD, char *, int))(*(_DWORD *)v21 + 36);
                    if ( !(v39 + v22) )
                    v43 = *(_BYTE *)v31;
                    v44 = *(_BYTE *)(v31 + 1);
                    v32(v21, v42, &v43, v29);
                  }
                v15 = a6;
                ++v22;
                v14 = a9;
                v16 = v40;
              }
              while ( a6 + v22 - 1 < a9 );
            }
            else
                v33 = a11;
                if ( !v22 )
                  v33 = a10;
                if ( v41 )
                v34 = *(void (__fastcall **)(int, _DWORD, char *, int))(*(_DWORD *)v21 + 36);
                if ( !(v39 + v22) )
                v43 = *(_BYTE *)v33;
                v44 = *(_BYTE *)(v33 + 1);
                v34(v21, v42, &v43, v20);
              while ( v15 + v22 - 1 < v14 );
          }
          v19 = v20 + 1;
          v12 = v21;
        }
        while ( v20 < a7 );
      }
      result = v16 + 1;
      v36 = __OFSUB__(v16, a8);
      v35 = v16++ - a8 < 0;
    }
    while ( v35 ^ v36 );
  }
  return result;
}


char *__fastcall StructurePiece::placeBlock(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // r4@1
  int v8; // r7@1
  int v9; // r9@1
  int v10; // r8@1
  int v11; // r6@1
  int v12; // r5@1
  char *result; // r0@3
  int v14; // r12@10
  unsigned int v15; // r1@12
  int v16; // r2@12
  signed int v17; // r3@12
  int v18; // r1@13
  int *v19; // r0@13
  int v20; // r4@13
  char *v21; // [sp+8h] [bp-A08h]@12
  char *v22; // [sp+Ch] [bp-A04h]@12
  int v23; // [sp+9CCh] [bp-44h]@12
  char v24; // [sp+9D0h] [bp-40h]@12
  int v25; // [sp+9D4h] [bp-3Ch]@12
  int v26; // [sp+9D8h] [bp-38h]@14
  char v27; // [sp+9DCh] [bp-34h]@9
  char v28; // [sp+9DDh] [bp-33h]@9
  int v29; // [sp+9E0h] [bp-30h]@3
  int v30; // [sp+9E4h] [bp-2Ch]@3
  char *v31; // [sp+9E8h] [bp-28h]@3

  v7 = a1;
  v8 = a4;
  v9 = a3;
  v10 = a2;
  v11 = (*(int (**)(void))(*(_DWORD *)a1 + 28))();
  v12 = a5;
  if ( *(_DWORD *)(v7 + 28) != 255 )
    v12 = a5 + *(_DWORD *)(v7 + 8);
  result = (char *)(*(int (__fastcall **)(int, int, int))(*(_DWORD *)v7 + 32))(v7, v8, a6);
  v29 = v11;
  v30 = v12;
  v31 = result;
  if ( v11 >= *(_DWORD *)a7
    && v11 <= *(_DWORD *)(a7 + 12)
    && (signed int)result >= *(_DWORD *)(a7 + 8)
    && (signed int)result <= *(_DWORD *)(a7 + 20) )
  {
    result = *(char **)(a7 + 4);
    if ( v12 >= (signed int)result )
    {
      result = *(char **)(a7 + 16);
      if ( v12 <= (signed int)result )
      {
        v27 = *(_BYTE *)v9;
        v28 = *(_BYTE *)(v9 + 1);
        result = (char *)j_BlockSource::setBlockAndData(v10, (BlockPos *)&v29, (int)&v27, 4, 0);
        if ( result == (char *)1 )
        {
          v14 = *(_WORD *)v9;
          result = (char *)&Block::mFlowingWater;
          if ( v14 == *(_BYTE *)(Block::mFlowingWater + 4) || v14 == *(_BYTE *)(Block::mFlowingLava + 4) )
          {
            v15 = (unsigned int)(&v31[8976890 * v29] + 981131 * v30);
            v21 = &v31[8976890 * v29] + 981131 * v30;
            v23 = 625;
            v16 = 0;
            v17 = 1;
            v24 = 0;
            v25 = 0;
            v22 = &v31[8976890 * v29] + 981131 * v30;
            do
            {
              v18 = v15 ^ (v15 >> 30);
              v19 = (int *)&(&v21)[4 * v16];
              v20 = v16++ + 1812433253 * v18;
              v15 = v17++ + 1812433253 * v18;
              v19[2] = v20 + 1;
            }
            while ( v16 != 397 );
            v23 = 624;
            v26 = 398;
            result = (char *)(*(int (**)(void))(*(_DWORD *)Block::mBlocks[v14] + 8))();
          }
        }
      }
    }
  }
  return result;
}


signed int __fastcall StructurePiece::isAir(StructurePiece *this, BlockSource *a2, int a3, int a4, int a5, const BoundingBox *a6)
{
  StructurePiece *v6; // r4@1
  int v7; // r5@1
  int v8; // r7@1
  BlockSource *v9; // r8@1
  int v10; // r6@1
  int v11; // r0@3
  signed int v12; // r6@4
  char v14; // [sp+0h] [bp-30h]@14
  int v15; // [sp+4h] [bp-2Ch]@3
  int v16; // [sp+8h] [bp-28h]@3
  int v17; // [sp+Ch] [bp-24h]@3

  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = (*(int (**)(void))(*(_DWORD *)this + 28))();
  if ( *((_DWORD *)v6 + 7) != 255 )
    v7 += *((_DWORD *)v6 + 2);
  v11 = (*(int (__fastcall **)(StructurePiece *, int, int))(*(_DWORD *)v6 + 32))(v6, v8, a5);
  v15 = v10;
  v16 = v7;
  v17 = v11;
  if ( *(_DWORD *)a6 <= v10 )
  {
    if ( *((_DWORD *)a6 + 3) >= v10 )
    {
      if ( *((_DWORD *)a6 + 2) <= v11 )
      {
        if ( *((_DWORD *)a6 + 5) >= v11 )
        {
          if ( *((_DWORD *)a6 + 1) <= v7 )
          {
            v12 = 0;
            if ( *((_DWORD *)a6 + 4) >= v7 )
            {
              j_BlockSource::getBlockID((BlockSource *)&v14, v9, (int)&v15);
              if ( !v14 )
                v12 = 1;
            }
          }
          else
        }
        else
          v12 = 0;
      }
      else
        v12 = 0;
    }
    else
      v12 = 0;
  }
  else
    v12 = 0;
  return v12;
}


signed int __fastcall StructurePiece::createDoor(StructurePiece *this, BlockSource *a2, const BoundingBox *a3, Random *a4, int a5, int a6, int a7, int a8)
{
  StructurePiece *v8; // r4@1
  BlockSource *v9; // r8@1
  const BoundingBox *v10; // r7@1
  BlockSource *v11; // r10@1
  int v12; // r9@1
  __int64 v13; // r2@3
  signed int result; // r0@3
  ItemUseCallback *v15; // [sp+Ch] [bp-24h]@0

  v8 = this;
  v9 = a2;
  v10 = a3;
  v11 = (BlockSource *)(*(int (**)(void))(*(_DWORD *)this + 28))();
  v12 = a6;
  if ( *((_DWORD *)v8 + 7) != 255 )
    v12 = a6 + *((_DWORD *)v8 + 2);
  HIDWORD(v13) = (*(int (__fastcall **)(StructurePiece *, int, int))(*(_DWORD *)v8 + 32))(v8, a5, a7);
  result = *(_DWORD *)v10;
  if ( (signed int)v11 >= *(_DWORD *)v10 )
  {
    result = *((_DWORD *)v10 + 3);
    if ( (signed int)v11 <= result )
    {
      result = *((_DWORD *)v10 + 2);
      if ( SHIDWORD(v13) >= result )
      {
        result = *((_DWORD *)v10 + 5);
        if ( SHIDWORD(v13) <= result )
        {
          result = *((_DWORD *)v10 + 1);
          if ( v12 >= result )
          {
            result = *((_DWORD *)v10 + 4);
            if ( v12 <= result )
            {
              LODWORD(v13) = v12;
              result = DoorItem::place(v9, v11, v13, a8, Block::mWoodenDoor, 0, v15);
            }
          }
        }
      }
    }
  }
  return result;
}


int __fastcall StructurePiece::_getWorldPos(StructurePiece *this, int a2, int a3, int a4, int a5)
{
  int v5; // r7@1
  StructurePiece *v6; // r5@1
  int v7; // r4@1
  int v8; // r6@1
  int v9; // r9@1
  int result; // r0@3

  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 28))(a2, a3, a5);
  if ( *(_DWORD *)(v5 + 28) != 255 )
    v7 += *(_DWORD *)(v5 + 8);
  result = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 32))(v5, v8, a5);
  *(_DWORD *)v6 = v9;
  *((_DWORD *)v6 + 1) = v7;
  *((_DWORD *)v6 + 2) = result;
  return result;
}


int __fastcall StructurePiece::getBlock(StructurePiece *this, BlockSource *a2, int a3, int a4, int a5, const BoundingBox *a6, int a7)
{
  BlockSource *v7; // r5@1
  BlockSource *v8; // r9@1
  int v9; // r7@1
  const BlockPos *v10; // r8@1
  int v11; // r6@1
  int v12; // r4@1
  int v13; // r0@3
  int result; // r0@9
  int v15; // [sp+0h] [bp-30h]@3
  int v16; // [sp+4h] [bp-2Ch]@3
  int v17; // [sp+8h] [bp-28h]@3

  v7 = a2;
  v8 = this;
  v9 = a4;
  v10 = (const BlockPos *)a3;
  v11 = (*(int (__fastcall **)(BlockSource *, int, const BoundingBox *))(*(_DWORD *)a2 + 28))(a2, a4, a6);
  v12 = a5;
  if ( *((_DWORD *)v7 + 7) != 255 )
    v12 = a5 + *((_DWORD *)v7 + 2);
  v13 = (*(int (__fastcall **)(BlockSource *, int, const BoundingBox *))(*(_DWORD *)v7 + 32))(v7, v9, a6);
  v15 = v11;
  v16 = v12;
  v17 = v13;
  if ( *(_DWORD *)a7 <= v11
    && *(_DWORD *)(a7 + 12) >= v11
    && *(_DWORD *)(a7 + 8) <= v13
    && *(_DWORD *)(a7 + 20) >= v13
    && *(_DWORD *)(a7 + 4) <= v12
    && *(_DWORD *)(a7 + 16) >= v12 )
  {
    result = j_BlockSource::getBlockID(v8, v10, (int)&v15);
  }
  else
    result = BlockID::AIR;
    *(_BYTE *)v8 = BlockID::AIR;
  return result;
}


signed int __fastcall StructurePiece::isAboveGround(StructurePiece *this, int a2, int a3, int a4, BlockSource *a5)
{
  StructurePiece *v5; // r7@1
  int v6; // r4@1
  int v7; // r6@1
  int v8; // r5@1
  int v9; // r9@1
  int v10; // r6@1
  int v11; // r0@3
  int v13; // [sp+0h] [bp-28h]@3
  int v14; // [sp+4h] [bp-24h]@3
  int v15; // [sp+8h] [bp-20h]@3

  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = (*(int (**)(void))(*(_DWORD *)this + 28))();
  v10 = v7 + 1;
  if ( *((_DWORD *)v5 + 7) != 255 )
    v10 += *((_DWORD *)v5 + 2);
  v11 = (*(int (__fastcall **)(StructurePiece *, int, int))(*(_DWORD *)v5 + 32))(v5, v8, v6);
  v13 = v9;
  v14 = v10;
  v15 = v11;
  return BlockSource::canSeeSky(a5, (const BlockPos *)&v13);
}


int __fastcall StructurePiece::moveBoundingBox(int result, int a2, int a3, int a4)
{
  *(_DWORD *)(result + 4) += a2;
  *(_DWORD *)(result + 8) += a3;
  *(_DWORD *)(result + 12) += a4;
  *(_DWORD *)(result + 16) += a2;
  *(_DWORD *)(result + 20) += a3;
  *(_DWORD *)(result + 24) += a4;
  return result;
}


int __fastcall StructurePiece::generateBox(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, char *a10, char a11, char *a12, char a13)
{
  int (__cdecl *v13)(int, int, int, int, int, int, int, int, int, char *); // r5@1
  char v15; // [sp+20h] [bp-28h]@1
  char v16; // [sp+21h] [bp-27h]@1
  char v17; // [sp+24h] [bp-24h]@1
  char v18; // [sp+25h] [bp-23h]@1

  v13 = *(int (__cdecl **)(int, int, int, int, int, int, int, int, int, char *))(*(_DWORD *)a1 + 40);
  v17 = *a10;
  v18 = a11;
  v15 = *a12;
  v16 = a13;
  return v13(a1, a2, a3, a4, a5, a6, a7, a8, a9, &v17);
}


int __fastcall StructurePiece::generateMaybeBox(float a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15)
{
  return StructurePiece::generateMaybeBox(
           SLODWORD(a1),
           a2,
           a3,
           (Random *)a4,
           *(float *)&a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15);
}


signed int __fastcall StructurePiece::isInChunk(StructurePiece *this, const ChunkPos *a2)
{
  StructurePiece *v2; // r2@1
  signed int result; // r0@3
  int v4; // r1@4

  v2 = this;
  if ( *((_DWORD *)this + 4) >= 16 * *(_DWORD *)a2 && *((_DWORD *)this + 1) <= (16 * *(_DWORD *)a2 | 0xF) )
  {
    v4 = *((_DWORD *)a2 + 1);
    result = 0;
    if ( *((_DWORD *)v2 + 6) >= 16 * v4 && *((_DWORD *)v2 + 3) <= (16 * v4 | 0xF) )
      result = 1;
  }
  else
  return result;
}


signed int __fastcall StructurePiece::createDispenser(int a1, BlockSource *a2, int a3, Random *a4, int a5, int a6, int a7, char a8, int *a9)
{
  int v9; // r7@1
  int v10; // r4@1
  int v11; // r5@1
  int v12; // r6@1
  int v13; // r8@3
  int v14; // r0@9
  signed int result; // r0@10
  void (__fastcall *v16)(int, BlockSource *, char *, int); // r12@11
  int v17; // r4@11
  unsigned int v18; // r0@12
  void *v19; // r0@12
  unsigned int *v20; // r2@14
  signed int v21; // r1@16
  Random *v22; // [sp+10h] [bp-40h]@1
  BlockSource *v23; // [sp+14h] [bp-3Ch]@1
  int v24; // [sp+18h] [bp-38h]@12
  char v25; // [sp+1Ch] [bp-34h]@11
  char v26; // [sp+1Dh] [bp-33h]@11
  unsigned __int8 v27; // [sp+20h] [bp-30h]@9

  v9 = a1;
  v10 = a3;
  v22 = a4;
  v23 = a2;
  v11 = (*(int (**)(void))(*(_DWORD *)a1 + 28))();
  v12 = a6;
  if ( *(_DWORD *)(v9 + 28) != 255 )
    v12 = *(_DWORD *)(v9 + 8) + a6;
  v13 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v9 + 32))(v9, a5, a7);
  if ( *(_DWORD *)v10 <= v11
    && *(_DWORD *)(v10 + 12) >= v11
    && *(_DWORD *)(v10 + 8) <= v13
    && *(_DWORD *)(v10 + 20) >= v13
    && *(_DWORD *)(v10 + 4) <= v12
    && *(_DWORD *)(v10 + 16) >= v12
    && (j_BlockSource::getBlockID((BlockSource *)&v27, (int)v23, v11, v12, v13),
        v14 = *(_BYTE *)(Block::mDispenser + 4),
        v27 != v14) )
  {
    v16 = *(void (__fastcall **)(int, BlockSource *, char *, int))(*(_DWORD *)v9 + 36);
    v25 = *(_BYTE *)(Block::mDispenser + 4);
    v26 = a8;
    v16(v9, v23, &v25, a5);
    v17 = j_BlockSource::getBlockEntity(v23, v11, v12, v13);
    if ( v17 )
    {
      sub_21E8AF4(&v24, a9);
      v18 = j_Random::_genRandInt32(v22);
      RandomizableBlockEntityContainerBase::setLootTable(v17, &v24, v18 >> 1);
      v19 = (void *)(v24 - 12);
      if ( (int *)(v24 - 12) != &dword_28898C0 )
      {
        v20 = (unsigned int *)(v24 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
        }
        else
          v21 = (*v20)--;
        if ( v21 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      }
    }
    result = 1;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall StructurePiece::getOrientationData(StructurePiece *this, const Block *a2, int a3)
{
  StructurePiece *v3; // r5@1
  unsigned int v4; // r4@1
  const Block *v5; // r6@1
  int v6; // r0@3
  signed int result; // r0@8
  unsigned __int8 v8; // r1@10
  int v9; // r0@14
  unsigned int v10; // r1@17
  char v11; // r0@17
  unsigned int v12; // r1@26
  char v13; // r0@26
  char v14; // r0@27
  int v15; // r0@36
  unsigned int v16; // r0@47
  unsigned int v17; // r0@49
  unsigned int v18; // r0@53
  _DWORD *v19; // r0@58

  v3 = this;
  v4 = a3;
  v5 = a2;
  if ( (const Block *)Block::mRail == a2 )
  {
    if ( (*((_DWORD *)this + 7) | 2) != 3 )
      return (unsigned __int8)v4;
    v8 = BaseRailBlock::DIR_FLAT_Z;
    if ( BaseRailBlock::DIR_FLAT_X[0] != a3 )
      v8 = BaseRailBlock::DIR_FLAT_X[0];
    result = v8;
  }
  else
    if ( j_Block::hasProperty((int)a2, (int)a2, 1024LL) == 1 )
    {
      v6 = *((_DWORD *)v3 + 7);
      if ( v6 == 3 )
      {
        v14 = v4 + 3;
      }
      else
        if ( v6 != 1 )
        {
          if ( !v6 )
          {
            if ( v4 )
            {
              if ( v4 == 2 )
                return 0;
              return (unsigned __int8)v4;
            }
            return 2;
          }
          return (unsigned __int8)v4;
        }
        v14 = v4 + 1;
      LOBYTE(v4) = v14 & 3;
    }
    if ( (*(int (__fastcall **)(const Block *))(*(_DWORD *)v5 + 84))(v5) == 1 )
      v9 = *((_DWORD *)v3 + 7);
      if ( v9 == 3 )
        if ( v4 >= 4 )
        v10 = 66306;
        v11 = 8 * v4;
        return (unsigned __int8)(v10 >> v11);
      if ( v9 == 1 )
        v10 = 16777986;
      goto LABEL_32;
    if ( (const Block *)Block::mLadder == v5 )
        v16 = (unsigned __int8)(v4 - 2);
        if ( v16 >= 4 )
        v10 = 50463749;
        v11 = 8 * v16;
        v17 = (unsigned __int8)(v4 - 2);
        if ( v17 >= 4 )
        v10 = 50464004;
        v11 = 8 * v17;
LABEL_32:
      if ( v9 )
        return (unsigned __int8)v4;
      if ( v4 != 2 )
        if ( v4 == 3 )
          return 2;
      return 3;
    if ( (const Block *)Block::mWoodButton == v5 || (const Block *)Block::mStoneButton == v5 )
      v15 = *((_DWORD *)v3 + 7);
      if ( v15 == 3 )
        if ( (unsigned __int8)(v4 - 1) < 4u )
          return (unsigned __int8)(5 - v4);
      if ( v15 == 1 )
        v18 = (unsigned __int8)(v4 - 1);
        if ( v18 >= 4 )
        v10 = 33620740;
        v11 = 8 * v18;
      if ( v15 )
      if ( v4 == 3 )
        return 4;
      if ( v4 != 4 )
    if ( (const Block *)Block::mChest == v5 )
      switch ( *((_DWORD *)v3 + 7) )
        case 0:
          if ( (v4 | 2) == 2 )
            result = Direction::DIRECTION_FACING[Direction::DIRECTION_OPPOSITE[v4]];
          else
            v19 = &Direction::DIRECTION_FACING;
LABEL_72:
            result = *(_BYTE *)(*v19 + v4);
          return result;
        case 1:
          if ( v4 >= 4 )
            return (unsigned __int8)v4;
          v10 = 50594309;
          v11 = 8 * v4;
          return (unsigned __int8)(v10 >> v11);
        case 2:
          v19 = &Direction::DIRECTION_FACING;
          goto LABEL_72;
        case 3:
          v10 = 50659844;
        default:
    if ( (const Block *)Block::mTorch != v5 )
    if ( v4 == 255 )
def_1946D8E:
      result = 5;
    else
            goto def_1946D8E;
          v12 = 33816835;
          v13 = 8 * v4;
          break;
          v12 = 33751300;
          v12 = 67240705;
          v12 = 67175170;
          goto def_1946D8E;
      result = (unsigned __int8)(v12 >> v13);
  return result;
}


int __fastcall StructurePiece::generateBox(StructurePiece *this, BlockSource *a2, const BoundingBox *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, Random *a11, BlockSelector *a12)
{
  StructurePiece *v12; // r4@1
  int result; // r0@1
  const BoundingBox *v14; // r9@1
  int v15; // r10@2
  int v16; // r11@2
  int v17; // r8@3
  int v18; // r0@4
  int v19; // r7@5
  int v20; // r6@6
  int v21; // r5@7
  unsigned __int64 v22; // r10@7
  int v23; // r0@9
  int v24; // r0@15
  void (__fastcall *v25)(StructurePiece *, BlockSource *, char *, int); // r12@18
  void (__fastcall *v26)(StructurePiece *, BlockSource *, char *, int); // r12@21
  int v27; // [sp+14h] [bp-54h]@1
  int v28; // [sp+24h] [bp-44h]@3
  BlockSource *v29; // [sp+2Ch] [bp-3Ch]@1
  char v30; // [sp+30h] [bp-38h]@18
  char v31; // [sp+31h] [bp-37h]@18
  unsigned __int8 v32; // [sp+34h] [bp-34h]@15
  unsigned __int64 v33; // [sp+38h] [bp-30h]@9
  int v34; // [sp+40h] [bp-28h]@9

  v29 = a2;
  v12 = this;
  result = a8;
  v14 = a3;
  v27 = a4;
  if ( a5 <= a8 )
  {
    v15 = a9;
    v16 = a6;
    result = a5;
    do
    {
      v17 = result;
      v28 = result;
      if ( v27 <= a7 )
      {
        v18 = v27;
        do
        {
          v19 = v18;
          if ( v16 <= v15 )
          {
            v20 = 0;
            if ( a10 == 1 )
            {
              do
              {
                v21 = v16 + v20;
                v22 = __PAIR__(
                        v17,
                        (*(int (__fastcall **)(StructurePiece *, int, int))(*(_DWORD *)v12 + 28))(v12, v19, v16 + v20));
                if ( *((_DWORD *)v12 + 7) != 255 )
                  HIDWORD(v22) = *((_DWORD *)v12 + 2) + v17;
                v23 = (*(int (__fastcall **)(StructurePiece *, int, int))(*(_DWORD *)v12 + 32))(v12, v19, v21);
                v33 = v22;
                v34 = v23;
                if ( *(_DWORD *)v14 > (signed int)v22
                  || *((_DWORD *)v14 + 3) < (signed int)v22
                  || *((_DWORD *)v14 + 2) > v23
                  || *((_DWORD *)v14 + 5) < v23
                  || *((_DWORD *)v14 + 1) > SHIDWORD(v22)
                  || *((_DWORD *)v14 + 4) < SHIDWORD(v22) )
                {
                  v24 = BlockID::AIR;
                  v32 = BlockID::AIR;
                }
                else
                  j_BlockSource::getBlockID((BlockSource *)&v32, v29, (int)&v33);
                  v24 = v32;
                v15 = a9;
                v16 = a6;
                if ( v24 )
                  (*(void (__fastcall **)(BlockSelector *, Random *, int, int))(*(_DWORD *)a12 + 8))(a12, a11, v19, v28);
                  v25 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v12 + 36);
                  v30 = *((_BYTE *)a12 + 4);
                  v31 = *((_BYTE *)a12 + 5);
                  v25(v12, v29, &v30, v19);
                ++v20;
                v17 = v28;
              }
              while ( a6 + v20 - 1 < a9 );
            }
            else
                (*(void (__fastcall **)(BlockSelector *, Random *, int, int))(*(_DWORD *)a12 + 8))(a12, a11, v19, v17);
                v26 = *(void (__fastcall **)(StructurePiece *, BlockSource *, char *, int))(*(_DWORD *)v12 + 36);
                v30 = *((_BYTE *)a12 + 4);
                v31 = *((_BYTE *)a12 + 5);
                v26(v12, v29, &v30, v19);
              while ( v16 + v20 - 1 < a9 );
          }
          v18 = v19 + 1;
        }
        while ( v19 < a7 );
      }
      result = v17 + 1;
    }
    while ( v17 < a8 );
  }
  return result;
}
