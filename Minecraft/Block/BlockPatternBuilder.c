

int __fastcall BlockPatternBuilder::match(int result, const BlockPos *a2, int a3, int a4, int a5, signed __int8 a6, int a7)
{
  int v7; // r5@1
  const BlockPos *v8; // r6@1
  signed int v9; // r7@1
  signed int v10; // r1@1
  int v11; // r3@1
  int v12; // r3@1
  int v13; // r3@1
  int v20; // r1@30
  int v21; // r2@30
  int v27; // [sp+4h] [bp-BCh]@1
  int v28; // [sp+8h] [bp-B8h]@1
  int v29; // [sp+Ch] [bp-B4h]@1
  _BYTE *v30; // [sp+10h] [bp-B0h]@1
  char v31; // [sp+14h] [bp-ACh]@30
  float v32; // [sp+20h] [bp-A0h]@30
  char v33; // [sp+2Ch] [bp-94h]@30
  int v34; // [sp+30h] [bp-90h]@30
  int v35; // [sp+34h] [bp-8Ch]@30
  int v36; // [sp+38h] [bp-88h]@30
  int v37; // [sp+3Ch] [bp-84h]@30
  int v38; // [sp+40h] [bp-80h]@30
  char v39; // [sp+44h] [bp-7Ch]@30
  char v40; // [sp+50h] [bp-70h]@30
  char v41; // [sp+54h] [bp-6Ch]@30

  v7 = a3;
  v30 = (_BYTE *)result;
  v8 = a2;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_BYTE *)result = 0;
  *(_BYTE *)(result + 1) = a6;
  *(_BYTE *)(result + 2) = a7;
  v9 = *((_DWORD *)a2 + 11);
  *(_DWORD *)(result + 4) = v9;
  v10 = *((_DWORD *)a2 + 12);
  *(_DWORD *)(result + 8) = v10;
  *(_DWORD *)(result + 12) = a4;
  *(_DWORD *)(result + 16) = a5;
  v11 = *(_DWORD *)a3;
  *(_DWORD *)(result + 20) = *(_DWORD *)a3;
  v28 = v11;
  v12 = *(_DWORD *)(a3 + 4);
  *(_DWORD *)(result + 24) = v12;
  v27 = v12;
  v13 = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(result + 28) = v13;
  v29 = v13;
  if ( *((_BYTE *)v8 + 40) )
  {
    if ( v10 < 1 )
    {
LABEL_34:
      _R1 = v10 - 1;
      __asm
      {
        VMOV.F32        S0, #0.5
        VMOV            S2, R1
        VCVT.F32.S32    S2, S2
      }
      _R0 = v27;
        VMOV            S4, R0
        VCVT.F32.S32    S4, S4
      _R0 = v28;
        VMUL.F32        S0, S2, S0
        VMOV            S6, R0
      _R0 = v9 - 1;
        VMOV            S2, R0
        VCVT.F32.S32    S6, S6
      _R0 = v29;
      __asm { VMOV            S8, R0 }
      result = 1;
        VCVT.F32.S32    S8, S8
        VADD.F32        S6, S0, S6
        VSUB.F32        S2, S4, S2
      *v30 = 1;
        VADD.F32        S0, S8, S0
        VSTR            S6, [R1,#0x20]
        VSTR            S2, [R1,#0x24]
        VSTR            S0, [R1,#0x28]
    }
    else
        VMOV.F32        S2, #1.0
        VLDR            S0, =0.0
        VMOV.F32        S4, S0
        VMOV.F32        S16, S0
        VMOV.F32        S6, S0
        VMOV.F32        S18, S0
      _R10 = 0;
      __asm { VMOV.F32        S20, S0 }
      if ( _ZF )
        __asm { VMOVEQ.F32      S4, S2 }
      if ( a7 == 5 )
        __asm { VMOVEQ.F32      S16, S2 }
      if ( a6 == 5 )
        __asm { VMOVEQ.F32      S6, S2 }
      if ( a7 == 1 )
        __asm { VMOVEQ.F32      S18, S2 }
      if ( a7 == 3 )
        __asm { VMOVEQ.F32      S20, S2 }
      if ( a6 == 3 )
        __asm { VMOVEQ.F32      S0, S2 }
      __asm { VMOV.F32        S2, #-1.0 }
      if ( !a6 )
      if ( a7 == 4 )
      if ( a6 == 4 )
      if ( !a7 )
      if ( a7 == 2 )
      if ( a6 == 2 )
        VMUL.F32        S2, S16, S4
        VMUL.F32        S8, S18, S6
        VMUL.F32        S10, S16, S0
        VMUL.F32        S6, S20, S6
        VMUL.F32        S0, S18, S0
        VMUL.F32        S4, S20, S4
        VSUB.F32        S22, S8, S2
        VSUB.F32        S24, S10, S6
        VSUB.F32        S26, S4, S0
      while ( v9 < 1 )
LABEL_33:
        if ( ++_R10 >= v10 )
          goto LABEL_34;
      __asm { VMOV            S0, R10 }
      _R11 = 0;
        VCVT.F32.S32    S0, S0
        VMUL.F32        S28, S0, S22
        VMUL.F32        S30, S0, S24
        VMUL.F32        S17, S0, S26
      while ( 1 )
        __asm
        {
          VMOV            S0, R11
          VCVT.F32.S32    S0, S0
          VMUL.F32        S2, S0, S16
          VMUL.F32        S4, S0, S18
          VMUL.F32        S0, S0, S20
          VADD.F32        S2, S2, S17
          VADD.F32        S4, S4, S30
          VADD.F32        S0, S0, S28
          VSTR            S2, [SP,#0xC0+var_A0]
          VSTR            S4, [SP,#0xC0+var_9C]
          VSTR            S0, [SP,#0xC0+var_98]
        }
        BlockPos::BlockPos((int)&v33, (int)&v32);
        v20 = *(_DWORD *)(v7 + 4);
        v21 = *(_DWORD *)(v7 + 8);
        v36 = *(_DWORD *)v7 + *(_DWORD *)&v33;
        v37 = v34 + v20;
        v38 = v35 + v21;
        Vec3::Vec3((int)&v39, (int)&v36);
        BlockPos::BlockPos((int)&v31, (int)&v39);
        BlockSource::getBlockID((BlockSource *)&v41, *(const BlockPos **)v8, (int)&v31);
        v40 = v41;
        result = BlockPatternBuilder::_fitsBlockPatternEntry((int)v8, _R11, _R10, (int)&v31, (int)&v40);
        if ( !result )
          break;
        v9 = *((_DWORD *)v8 + 11);
        if ( ++_R11 >= v9 )
          v10 = *((_DWORD *)v8 + 12);
          goto LABEL_33;
  }
  return result;
}


int __fastcall BlockPatternBuilder::_getBlockPatternEntry(BlockPatternBuilder *this, int a2, int a3, int a4)
{
  int v4; // r5@1
  BlockPatternBuilder *v5; // r4@1
  int v6; // r1@1
  int v7; // r6@1
  int v8; // r0@1
  int *v9; // r7@2
  unsigned int v10; // r0@3
  int v11; // r6@3
  int v12; // r3@3
  int v13; // r2@4
  int v14; // r1@5
  int v15; // r6@15
  char v16; // t1@15
  int result; // r0@15
  void (__fastcall *v18)(char *, int, signed int); // r3@15

  v4 = a2;
  v5 = this;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = a4;
  v8 = *(_DWORD *)(v6 + 4 * a3);
  if ( *(_DWORD *)(v8 - 4) >= 0 )
  {
    v9 = (int *)(v6 + 4 * a3);
    sub_21E8010((const void **)(v6 + 4 * a3));
    v8 = *v9;
  }
  v10 = *(_BYTE *)(v8 + v7);
  v11 = v4 + 20;
  v12 = *(_DWORD *)(v4 + 24);
  if ( v12 )
    v13 = v4 + 20;
    do
    {
      v14 = v12;
      while ( *(_BYTE *)(v14 + 16) < v10 )
      {
        v14 = *(_DWORD *)(v14 + 12);
        if ( !v14 )
        {
          v14 = v13;
          goto LABEL_12;
        }
      }
      v12 = *(_DWORD *)(v14 + 8);
      v13 = v14;
    }
    while ( v12 );
  else
    v14 = v4 + 20;
LABEL_12:
  if ( v14 != v11 && v10 >= *(_BYTE *)(v14 + 16) )
    v11 = v14;
  v16 = *(_BYTE *)(v11 + 20);
  v15 = v11 + 20;
  *(_BYTE *)v5 = v16;
  result = 0;
  *((_DWORD *)v5 + 3) = 0;
  v18 = *(void (__fastcall **)(char *, int, signed int))(v15 + 12);
  if ( v18 )
    v18((char *)v5 + 4, v15 + 4, 2);
    *((_DWORD *)v5 + 4) = *(_DWORD *)(v15 + 16);
    result = *(_DWORD *)(v15 + 12);
    *((_DWORD *)v5 + 3) = result;
  return result;
}


signed int __fastcall BlockPatternBuilder::_allCharactersMatched(BlockPatternBuilder *this)
{
  BlockPatternBuilder *v1; // r9@1
  const void **v2; // r8@1
  const void **v3; // r10@1
  char *v4; // r7@2
  _BYTE *v5; // r6@3
  char *v6; // r0@3
  int v7; // r0@7
  unsigned int v8; // r2@9
  int v9; // r5@9
  int v10; // r4@9
  int v11; // r3@10
  signed int result; // r0@20

  v1 = this;
  v2 = (const void **)(*(_QWORD *)((char *)this + 4) >> 32);
  v3 = (const void **)*(_QWORD *)((char *)this + 4);
  if ( v3 == v2 )
  {
LABEL_27:
    result = 1;
  }
  else
    v4 = (char *)this + 20;
    while ( 1 )
    {
      v5 = *v3;
      v6 = (char *)*v3;
      if ( *((_DWORD *)*v3 - 1) >= 0 )
      {
        sub_21E8010(v3);
        v5 = *v3;
        if ( *((_DWORD *)*v3 - 1) < 0 )
        {
          v6 = (char *)*v3;
        }
        else
          sub_21E8010(v3);
      }
      v7 = (int)&v6[*((_DWORD *)v6 - 3)];
      if ( v5 != (_BYTE *)v7 )
        break;
LABEL_26:
      ++v3;
      if ( v3 == v2 )
        goto LABEL_27;
    }
    if ( *((_DWORD *)v1 + 6) )
      while ( 1 )
        v8 = *v5;
        v9 = *((_DWORD *)v1 + 6);
        v10 = (int)v1 + 20;
        do
          v11 = v9;
          while ( *(_BYTE *)(v11 + 16) < v8 )
          {
            v11 = *(_DWORD *)(v11 + 12);
            if ( !v11 )
            {
              v11 = v10;
              goto LABEL_15;
            }
          }
          v9 = *(_DWORD *)(v11 + 8);
          v10 = v11;
        while ( v9 );
LABEL_15:
        if ( (char *)v11 == v4 )
          if ( v8 != 32 )
            goto LABEL_28;
          if ( v8 < *(_BYTE *)(v11 + 16) )
            v11 = (int)v1 + 20;
          if ( (char *)v11 == v4 && v8 != 32 )
            return 0;
        if ( ++v5 == (_BYTE *)v7 )
          goto LABEL_26;
    while ( *v5 == 32 )
      if ( (_BYTE *)v7 == ++v5 )
        goto LABEL_26;
LABEL_28:
    result = 0;
  return result;
}


int __fastcall BlockPatternBuilder::_fitsBlockPatternEntry(BlockPatternBuilder *this, int a2, int a3, const BlockPos *a4)
{
  BlockPatternBuilder *v4; // r7@1
  int v5; // r6@1
  const BlockPos *v6; // r4@1
  int v7; // r5@1
  char v9; // [sp+4h] [bp-1Ch]@1
  char v10; // [sp+8h] [bp-18h]@1

  v4 = this;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  BlockSource::getBlockID((BlockSource *)&v10, *(const BlockPos **)this, (int)a4);
  v9 = v10;
  return BlockPatternBuilder::_fitsBlockPatternEntry((int)v4, v5, v7, (int)v6, (int)&v9);
}


int __fastcall BlockPatternBuilder::_fitsBlockPatternEntry(int a1, int a2, int a3, int a4, int a5)
{
  int *v5; // r5@1
  int v6; // r7@1
  int v7; // r1@1
  int v8; // r6@1
  int v9; // r9@1
  int v10; // r0@1
  int *v11; // r4@2
  int v12; // r4@4
  int v13; // r1@6
  unsigned __int8 v15; // [sp+4h] [bp-34h]@5
  int v16; // [sp+8h] [bp-30h]@6
  void (__fastcall *v17)(int *, int *, signed int); // [sp+10h] [bp-28h]@5
  int (__fastcall *v18)(int *, int, int, char *); // [sp+14h] [bp-24h]@6
  char v19; // [sp+18h] [bp-20h]@6

  v5 = (int *)a1;
  v6 = a2;
  v7 = *(_DWORD *)(a1 + 4);
  v8 = a3;
  v9 = a4;
  v10 = *(_DWORD *)(v7 + 4 * v6);
  if ( *(_DWORD *)(v10 - 4) >= 0 )
  {
    v11 = (int *)(v7 + 4 * v6);
    sub_21E8010((const void **)(v7 + 4 * v6));
    v10 = *v11;
  }
  if ( *(_BYTE *)(v10 + v8) == 32 )
    v12 = 1;
  else
    BlockPatternBuilder::_getBlockPatternEntry((BlockPatternBuilder *)&v15, (int)v5, v6, v8);
    if ( v17 )
    {
      v13 = *v5;
      v19 = *(_BYTE *)a5;
      v12 = v18(&v16, v13, v9, &v19);
      if ( v17 )
        v17(&v16, &v16, 3);
    }
    else
      v12 = 0;
      if ( v15 == *(_BYTE *)a5 )
        v12 = 1;
  return v12;
}


_DWORD *__fastcall BlockPatternBuilder::start(BlockPatternBuilder *this, BlockSource *a2)
{
  BlockPatternBuilder *v2; // r5@1
  BlockSource *v3; // r4@1
  _DWORD *result; // r0@1

  v2 = this;
  v3 = a2;
  result = operator new(0x34u);
  *result = v3;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[6] = 0;
  result[7] = 0;
  result[8] = 0;
  result[9] = 0;
  result[5] = 0;
  result[7] = result + 5;
  result[8] = result + 5;
  *((_BYTE *)result + 40) = 0;
  result[11] = 0;
  result[12] = 0;
  *(_DWORD *)v2 = result;
  return result;
}


int __fastcall BlockPatternBuilder::match(BlockPatternBuilder *this, const BlockPos *a2, int a3, int a4, int a5)
{
  BlockPatternBuilder *v5; // r11@1
  int result; // r0@1
  int v7; // r5@2
  int v8; // r9@3
  bool v9; // zf@4
  int v10; // r3@7
  int v11; // r4@7
  int v12; // r6@7
  int v13; // r7@7
  const BlockPos *v14; // [sp+Ch] [bp-5Ch]@1
  int v15; // [sp+10h] [bp-58h]@1
  int v16; // [sp+14h] [bp-54h]@1
  char v17; // [sp+18h] [bp-50h]@7
  int v18; // [sp+1Ch] [bp-4Ch]@7
  int v19; // [sp+20h] [bp-48h]@7
  int v20; // [sp+24h] [bp-44h]@7
  int v21; // [sp+28h] [bp-40h]@7
  int v22; // [sp+2Ch] [bp-3Ch]@7
  int v23; // [sp+30h] [bp-38h]@7
  int v24; // [sp+34h] [bp-34h]@7
  int v25; // [sp+38h] [bp-30h]@7
  int v26; // [sp+3Ch] [bp-2Ch]@7
  int v27; // [sp+40h] [bp-28h]@7

  v5 = this;
  v14 = a2;
  v15 = a3;
  v16 = a4;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *(_BYTE *)this = 0;
  result = *((_BYTE *)a2 + 40);
  if ( *((_BYTE *)a2 + 40) )
  {
    v7 = 0;
LABEL_3:
    v8 = 0;
    while ( 1 )
    {
      v9 = v8 == v7;
      if ( v8 != v7 )
        v9 = v8 == Facing::OPPOSITE_FACING[v7];
      if ( !v9 )
      {
        BlockPatternBuilder::match((BlockPatternBuilder *)&v17, v14, v15, v16, a5, v7, v8);
        v10 = v18;
        v11 = v19;
        v12 = v20;
        v13 = v21;
        *(_DWORD *)v5 = *(_DWORD *)&v17;
        *((_DWORD *)v5 + 1) = v10;
        *((_DWORD *)v5 + 2) = v11;
        *((_DWORD *)v5 + 3) = v12;
        *((_DWORD *)v5 + 4) = v13;
        *((_DWORD *)v5 + 5) = v22;
        *((_DWORD *)v5 + 6) = v23;
        *((_DWORD *)v5 + 7) = v24;
        *((_DWORD *)v5 + 8) = v25;
        *((_DWORD *)v5 + 9) = v26;
        *((_DWORD *)v5 + 10) = v27;
        result = *(_BYTE *)v5;
        if ( *(_BYTE *)v5 )
          break;
      }
      result = v8++ + 1;
      if ( v8 >= 6 )
        if ( ++v7 < 6 )
          goto LABEL_3;
        return result;
    }
  }
  return result;
}


int __fastcall BlockPatternBuilder::_getPattern(BlockPatternBuilder *this, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r2@1
  int v5; // r0@1
  int *v6; // r5@2

  v3 = a3;
  v4 = *((_DWORD *)this + 1);
  v5 = *(_DWORD *)(v4 + 4 * a2);
  if ( *(_DWORD *)(v5 - 4) >= 0 )
  {
    v6 = (int *)(v4 + 4 * a2);
    sub_21E8010((const void **)(v4 + 4 * a2));
    v5 = *v6;
  }
  return *(_BYTE *)(v5 + v3);
}


BlockPatternBuilder *__fastcall BlockPatternBuilder::build(BlockPatternBuilder *this)
{
  BlockPatternBuilder *v1; // r4@1

  v1 = this;
  *((_BYTE *)this + 40) = BlockPatternBuilder::_allCharactersMatched(this);
  return v1;
}


signed int __fastcall BlockPatternBuilder::replaceBlocks(signed int result, int a2, int a3, char *a4, int a5)
{
  int v5; // r5@1
  int v6; // r9@1
  signed int v7; // r1@1
  signed int v8; // r8@1
  char *v13; // r6@2
  int v15; // r11@4
  int v17; // r0@5
  int v18; // r1@5
  int v19; // r4@30
  int v20; // r0@30
  int v21; // r1@33
  int v22; // r2@33
  int v23; // r9@34
  signed int v24; // r6@34
  int v25; // ST1C_4@34
  BlockSource *v26; // r8@34
  int v27; // r4@35
  int v28; // [sp+14h] [bp-D4h]@1
  signed int v29; // [sp+18h] [bp-D0h]@2
  char *v30; // [sp+20h] [bp-C8h]@1
  char v31; // [sp+24h] [bp-C4h]@35
  char v32; // [sp+25h] [bp-C3h]@35
  char v33; // [sp+28h] [bp-C0h]@35
  char v34; // [sp+34h] [bp-B4h]@34
  char v35; // [sp+40h] [bp-A8h]@34
  char v36; // [sp+41h] [bp-A7h]@34
  char v37; // [sp+44h] [bp-A4h]@34
  float v38; // [sp+50h] [bp-98h]@33
  int v39; // [sp+5Ch] [bp-8Ch]@33
  int v40; // [sp+60h] [bp-88h]@33
  int v41; // [sp+64h] [bp-84h]@33
  int v42; // [sp+68h] [bp-80h]@33
  int v43; // [sp+6Ch] [bp-7Ch]@33
  int v44; // [sp+70h] [bp-78h]@33
  char v45; // [sp+74h] [bp-74h]@2

  v5 = a3;
  v6 = a2;
  v7 = *(_DWORD *)(a3 + 8);
  v8 = result;
  v30 = a4;
  v28 = v6;
  if ( v7 >= 1 )
  {
    __asm { VMOV.F32        S18, #1.0 }
    result = *(_DWORD *)(a3 + 4);
    __asm
    {
      VMOV.F32        S20, #-1.0
      VLDR            S16, =0.0
    }
    v13 = &v45;
    v29 = 0;
    do
      if ( result >= 1 )
      {
        _R0 = v29;
        v15 = 0;
        _R10 = 0;
        __asm
        {
          VMOV            S0, R0
          VCVT.F32.S32    S22, S0
        }
        do
          v17 = *(_BYTE *)(v5 + 1);
          __asm { VMOV.F32        S26, S16 }
          v18 = *(_BYTE *)(v5 + 2);
          __asm
          {
            VMOV.F32        S24, S16
            VMOV.F32        S17, S16
          }
          if ( _ZF )
            __asm { VMOVEQ.F32      S26, S18 }
          if ( v18 == 5 )
            __asm { VMOVEQ.F32      S24, S18 }
          if ( v17 == 5 )
            __asm { VMOVEQ.F32      S17, S18 }
          __asm { VMOV.F32        S28, S16 }
            __asm { VMOVEQ.F32      S28, S18 }
          __asm { VMOV.F32        S30, S16 }
            __asm { VMOVEQ.F32      S30, S18 }
          __asm { VMOV.F32        S19, S16 }
            __asm { VMOVEQ.F32      S19, S18 }
          if ( !*(_BYTE *)(v5 + 1) )
            __asm { VMOVEQ.F32      S26, S20 }
          if ( v18 == 4 )
            __asm { VMOVEQ.F32      S24, S20 }
          if ( v17 == 4 )
            __asm { VMOVEQ.F32      S17, S20 }
          if ( !*(_BYTE *)(v5 + 2) )
            __asm { VMOVEQ.F32      S28, S20 }
          __asm { VMOV            S0, R10 }
            __asm { VMOVEQ.F32      S30, S20 }
          if ( v17 == 2 )
            __asm { VMOVEQ.F32      S19, S20 }
          __asm { VCVT.F32.S32    S21, S0 }
          if ( v6 == 32 )
            goto LABEL_41;
          v19 = *(_DWORD *)(v8 + 4);
          v20 = *(_DWORD *)(v19 + v15);
          if ( *(_DWORD *)(v20 - 4) >= 0 )
            sub_21E8010((const void **)(v19 + v15));
            v20 = *(_DWORD *)(v19 + v15);
          if ( *(_BYTE *)(v20 + v29) == v6 )
LABEL_41:
            __asm
            {
              VMUL.F32        S0, S24, S26
              VMUL.F32        S2, S28, S17
              VMUL.F32        S4, S30, S17
              VMUL.F32        S6, S24, S19
              VMUL.F32        S8, S28, S19
              VMUL.F32        S10, S30, S26
              VSUB.F32        S0, S2, S0
              VSUB.F32        S2, S6, S4
              VMUL.F32        S6, S24, S21
              VSUB.F32        S4, S10, S8
              VMUL.F32        S8, S28, S21
              VMUL.F32        S10, S30, S21
              VMUL.F32        S0, S0, S22
              VMUL.F32        S2, S2, S22
              VMUL.F32        S4, S4, S22
              VADD.F32        S0, S0, S10
              VADD.F32        S2, S2, S8
              VADD.F32        S4, S4, S6
              VSTR            S4, [SP,#0xE8+var_98]
              VSTR            S2, [SP,#0xE8+var_94]
              VSTR            S0, [SP,#0xE8+var_90]
            }
            BlockPos::BlockPos((int)&v39, (int)&v38);
            v21 = *(_DWORD *)(v5 + 24);
            v22 = *(_DWORD *)(v5 + 28);
            v42 = *(_DWORD *)(v5 + 20) + v39;
            v43 = v40 + v21;
            v44 = v41 + v22;
            Vec3::Vec3((int)v13, (int)&v42);
            if ( a5 == 1 )
              v23 = (int)v13;
              v24 = v8;
              v25 = *(_DWORD *)v8;
              BlockPos::BlockPos((int)&v37, v23);
              v26 = *(BlockSource **)v8;
              BlockPos::BlockPos((int)&v34, v23);
              v35 = *(_BYTE *)(BlockSource::getBlock(v26, (const BlockPos *)&v34) + 4);
              v36 = 8;
              v8 = v24;
              v13 = (char *)v23;
              v6 = v28;
              BlockSource::setBlockAndData(v25, (BlockPos *)&v37, (int)&v35, 3, 0);
            v27 = *(_DWORD *)v8;
            BlockPos::BlockPos((int)&v33, (int)v13);
            v31 = *v30;
            v32 = 0;
            BlockSource::setBlockAndData(v27, (BlockPos *)&v33, (int)&v31, 3, 0);
          result = *(_DWORD *)(v5 + 4);
          ++_R10;
          v15 += 4;
        while ( _R10 < result );
        v7 = *(_DWORD *)(v5 + 8);
      }
      ++v29;
    while ( v29 < v7 );
  }
  return result;
}


RakNet *__fastcall BlockPatternBuilder::match(BlockPatternBuilder *this, const BlockPos *a2, int a3)
{
  const BlockPos *v3; // r4@1
  int v4; // r0@2
  int v5; // r7@2
  int v6; // lr@5
  BlockSource *v7; // r0@5
  char *v8; // r5@5
  int v9; // r6@5
  int v10; // r3@6
  int v11; // r1@7 OVERLAPPED
  signed int v12; // r1@8
  signed int v13; // r0@9
  int v14; // r6@11
  int v15; // r0@13
  int v16; // r1@13
  int v17; // r10@13
  int v18; // r6@13
  int v19; // r4@13
  int v20; // r5@13
  int v21; // r8@13
  int v22; // r11@13
  int v23; // r7@13
  int v24; // r9@14
  int v25; // r11@21
  int v26; // r0@21
  int v27; // r0@25
  bool v28; // nf@25
  unsigned __int8 v29; // vf@25
  RakNet *result; // r0@28
  int v31; // [sp+10h] [bp-B0h]@7
  int v32; // [sp+14h] [bp-ACh]@6
  int v33; // [sp+18h] [bp-A8h]@7
  __int64 v34; // [sp+1Ch] [bp-A4h]@8
  BlockPatternBuilder *v35; // [sp+28h] [bp-98h]@1
  BlockPos *v36; // [sp+30h] [bp-90h]@1
  int v37; // [sp+34h] [bp-8Ch]@13
  int v38; // [sp+38h] [bp-88h]@9
  char v39; // [sp+40h] [bp-80h]@5
  char v40; // [sp+44h] [bp-7Ch]@5
  int v41; // [sp+48h] [bp-78h]@8
  int v42; // [sp+4Ch] [bp-74h]@8
  int v43; // [sp+50h] [bp-70h]@8
  unsigned __int8 v44; // [sp+54h] [bp-6Ch]@17
  __int64 v45; // [sp+68h] [bp-58h]@17
  int v46; // [sp+70h] [bp-50h]@17
  int v47; // [sp+74h] [bp-4Ch]@17
  int v48; // [sp+78h] [bp-48h]@17
  int v49; // [sp+7Ch] [bp-44h]@17
  char v50; // [sp+80h] [bp-40h]@17
  RakNet *v51; // [sp+98h] [bp-28h]@1

  v3 = a2;
  v36 = a2;
  v35 = this;
  v51 = _stack_chk_guard;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *(_BYTE *)this = 0;
  if ( *((_BYTE *)a2 + 40) )
  {
    v5 = *(_QWORD *)((char *)a2 + 44) >> 32;
    v4 = *(_QWORD *)((char *)a2 + 44);
    if ( v4 > v5 )
      v5 = *(_QWORD *)((char *)a2 + 44);
    if ( v5 >= 0 )
    {
      v6 = *(_QWORD *)a3 >> 32;
      v7 = (BlockSource *)&v40;
      v8 = &v39;
      v9 = *(_QWORD *)a3 - v5;
      do
      {
        v10 = v6 - v5;
        v32 = v9;
        while ( 2 )
        {
          v33 = v10;
          v11 = *(_DWORD *)(a3 + 8) - v5;
          v31 = v5;
          do
          {
            v34 = *(_QWORD *)(&a3 - 1);
            v41 = v9;
            v42 = v10;
            v43 = v11;
            BlockSource::getBlockID(v7, *(const BlockPos **)v3, (int)&v41);
            v12 = *((_DWORD *)v3 + 11);
            if ( v12 >= 1 )
            {
              v13 = *((_DWORD *)v3 + 12);
              v38 = 0;
              while ( v13 < 1 )
              {
LABEL_24:
                if ( ++v38 >= v12 )
                  goto LABEL_25;
              }
              v14 = 0;
              while ( 1 )
                v39 = v40;
                if ( BlockPatternBuilder::_fitsBlockPatternEntry((int)v3, v38, v14, (int)&v41, (int)v8) == 1 )
                {
                  v15 = *((_BYTE *)v3 + 40);
                  v16 = 0;
                  v37 = v14;
                  v17 = 0;
                  v18 = 0;
                  v19 = 0;
                  v20 = 0;
                  v21 = 0;
                  v22 = 0;
                  v23 = 0;
                  if ( v15 )
                  {
LABEL_14:
                    v24 = 0;
                    while ( 1 )
                    {
                      if ( v22 != v24 && v24 != Facing::OPPOSITE_FACING[v22] )
                      {
                        BlockPatternBuilder::match((BlockPatternBuilder *)&v44, v36, (int)&v41, v38, v37, v22, v24);
                        v23 = v44;
                        _aeabi_memcpy(&v50, (const char *)((unsigned int)&v44 | 1), 19);
                        v20 = HIDWORD(v45);
                        v21 = v45;
                        v16 = v49;
                        v19 = v46;
                        v18 = v47;
                        v17 = v48;
                        if ( v23 )
                          break;
                      }
                      if ( ++v24 >= 6 )
                        if ( ++v22 < 6 )
                          goto LABEL_14;
                        v23 = 0;
                        break;
                    }
                  }
                  v25 = v16;
                  *(_BYTE *)v35 = v23;
                  _aeabi_memcpy((char *)v35 + 1, &v50, 19);
                  v26 = (int)v35 + 28;
                  *((_DWORD *)v35 + 5) = v21;
                  *((_DWORD *)v35 + 6) = v20;
                  *(_DWORD *)v26 = v19;
                  *(_DWORD *)(v26 + 4) = v18;
                  *(_DWORD *)(v26 + 8) = v17;
                  *(_DWORD *)(v26 + 12) = v25;
                  v8 = &v39;
                  v3 = v36;
                  v14 = v37;
                  if ( v23 )
                    goto LABEL_28;
                }
                v13 = *((_DWORD *)v3 + 12);
                if ( ++v14 >= v13 )
                  v12 = *((_DWORD *)v3 + 11);
                  goto LABEL_24;
            }
LABEL_25:
            a3 = HIDWORD(v34);
            v9 = v32;
            v27 = *(_DWORD *)(HIDWORD(v34) + 8);
            v11 = v34 + 1;
            v29 = __OFSUB__((_DWORD)v34, v27);
            v28 = (signed int)v34 - v27 < 0;
            v10 = v33;
            v7 = (BlockSource *)&v40;
          }
          while ( v28 ^ v29 );
          v6 = *(_DWORD *)(HIDWORD(v34) + 4);
          v5 = v31;
          v10 = v33 + 1;
          if ( v33 < v6 )
            continue;
          break;
        }
        v9 = v32 + 1;
      }
      while ( v32 < *(_DWORD *)HIDWORD(v34) );
    }
  }
LABEL_28:
  result = (RakNet *)(_stack_chk_guard - v51);
  if ( _stack_chk_guard != v51 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall BlockPatternBuilder::define(int a1, unsigned int a2, char *a3, int a4)
{
  int v4; // r8@1
  char v5; // r6@1
  int v6; // r4@1
  unsigned int v7; // r5@1
  void (__fastcall *v8)(int *, int, signed int); // r3@1
  void (*v9)(void); // r3@2
  int *v10; // r10@2
  int v11; // r0@3
  void (*v12)(void); // r7@3
  __int64 v13; // r1@6
  int v14; // r4@6
  int v15; // r0@6
  int *v16; // r0@7
  unsigned int v17; // r1@7
  int v18; // r0@10
  int v19; // r9@16
  _BYTE *v20; // r1@20
  __int64 v21; // kr00_8@20
  __int64 v22; // kr08_8@20
  int v23; // r0@20
  int v24; // r2@20
  int v26; // [sp+0h] [bp-60h]@2
  void (*v27)(void); // [sp+8h] [bp-58h]@1
  int v28; // [sp+Ch] [bp-54h]@2
  char v29; // [sp+10h] [bp-50h]@2
  __int64 v30; // [sp+14h] [bp-4Ch]@3
  void (*v31)(void); // [sp+1Ch] [bp-44h]@2
  int v32; // [sp+20h] [bp-40h]@3
  char v33; // [sp+24h] [bp-3Ch]@6
  char v34; // [sp+28h] [bp-38h]@6
  __int64 v35; // [sp+2Ch] [bp-34h]@6
  void (*v36)(void); // [sp+34h] [bp-2Ch]@6
  int v37; // [sp+38h] [bp-28h]@6

  v4 = a1;
  v5 = *a3;
  v6 = a4;
  v27 = 0;
  v7 = a2;
  v8 = *(void (__fastcall **)(int *, int, signed int))(a4 + 8);
  if ( !v8 )
  {
    v29 = v5;
    v31 = 0;
    v10 = (int *)&v31;
    goto LABEL_5;
  }
  v8(&v26, v6, 2);
  v28 = *(_DWORD *)(v6 + 12);
  v9 = *(void (**)(void))(v6 + 8);
  v29 = v5;
  v31 = 0;
  v10 = (int *)&v31;
  v27 = v9;
  if ( !v9 )
LABEL_5:
    v12 = 0;
    v11 = v32;
    goto LABEL_6;
  ((void (__fastcall *)(__int64 *, int *, signed int))v9)(&v30, &v26, 2);
  v11 = v28;
  v12 = v27;
  v32 = v28;
  v31 = v27;
  v5 = v29;
LABEL_6:
  v33 = v7;
  v34 = v5;
  v13 = v30;
  v14 = v4 + 20;
  v30 = v35;
  v35 = v13;
  v36 = v12;
  *v10 = 0;
  v32 = v37;
  v37 = v11;
  v15 = *(_DWORD *)(v4 + 24);
  if ( v15 )
    do
    {
      v14 = v15;
      v16 = (int *)(v15 + 12);
      v17 = *(_BYTE *)(v14 + 16);
      if ( v17 > v7 )
        v16 = (int *)(v14 + 8);
      v15 = *v16;
    }
    while ( v15 );
    v18 = v14;
    if ( v17 <= v7 )
LABEL_13:
      if ( *(_BYTE *)(v18 + 16) >= v7 )
        goto LABEL_21;
      goto LABEL_14;
  if ( v14 != *(_DWORD *)(v4 + 28) )
    v18 = sub_21D4858(v14);
    goto LABEL_13;
LABEL_14:
  if ( v14 )
    if ( v4 + 20 == v14 )
      v19 = 1;
    else
      v19 = 0;
      if ( *(_BYTE *)(v14 + 16) > v7 )
        v19 = 1;
    v20 = operator new(0x28u);
    v20[16] = v33;
    v20[20] = v34;
    v21 = v35;
    v22 = *((_QWORD *)v20 + 3);
    v35 = *((_QWORD *)v20 + 3);
    *((_QWORD *)v20 + 3) = v21;
    v23 = (int)v36;
    v36 = 0;
    *((_DWORD *)v20 + 8) = v23;
    v24 = v37;
    v37 = *((_DWORD *)v20 + 9);
    *((_DWORD *)v20 + 9) = v24;
    sub_21D4928(v19, (int)v20, v14, v4 + 20);
    ++*(_DWORD *)(v4 + 36);
    v12 = v36;
LABEL_21:
  if ( v12 )
    ((void (__fastcall *)(__int64 *, __int64 *, signed int))v12)(&v35, &v35, 3);
  if ( *v10 )
    ((void (*)(void))*v10)();
  if ( v27 )
    v27();
  return v4;
}


int __fastcall BlockPatternBuilder::BlockPatternBuilder(int result, int a2)
{
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 28) = result + 20;
  *(_DWORD *)(result + 32) = result + 20;
  *(_BYTE *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  return result;
}


signed int __fastcall BlockPatternBuilder::_isAnyPattern(BlockPatternBuilder *this, int a2)
{
  signed int result; // r0@1

  result = 0;
  if ( a2 == 32 )
    result = 1;
  return result;
}


signed int __fastcall BlockPatternBuilder::_fitsAnyPattern(BlockPatternBuilder *this, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r2@1
  int v5; // r0@1
  int *v6; // r5@2
  int v7; // r1@3
  signed int result; // r0@3

  v3 = a3;
  v4 = *((_DWORD *)this + 1);
  v5 = *(_DWORD *)(v4 + 4 * a2);
  if ( *(_DWORD *)(v5 - 4) >= 0 )
  {
    v6 = (int *)(v4 + 4 * a2);
    sub_21E8010((const void **)(v4 + 4 * a2));
    v5 = *v6;
  }
  v7 = *(_BYTE *)(v5 + v3);
  result = 0;
  if ( v7 == 32 )
    result = 1;
  return result;
}
