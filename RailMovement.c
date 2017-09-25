

signed int __fastcall RailMovement::getPos(Entity *a1, int a2, __int64 a3, int a4)
{
  Entity *v4; // r5@1
  BaseRailBlock *v5; // r5@1
  int v6; // r1@3
  int v11; // r0@4
  int v12; // r1@4
  signed int result; // r0@11
  BaseRailBlock *v16; // [sp+0h] [bp-38h]@3
  int v17; // [sp+4h] [bp-34h]@1
  int v18; // [sp+8h] [bp-30h]@1
  const BlockPos *v19; // [sp+Ch] [bp-2Ch]@1
  int v20; // [sp+10h] [bp-28h]@1
  int v21; // [sp+14h] [bp-24h]@1
  const BlockPos *v22; // [sp+18h] [bp-20h]@1
  __int64 v23; // [sp+1Ch] [bp-1Ch]@1
  int v24; // [sp+24h] [bp-14h]@1

  v4 = a1;
  v23 = a3;
  v24 = a4;
  BlockPos::BlockPos((int)&v20, (int)&v23);
  v5 = (BaseRailBlock *)Entity::getRegion(v4);
  v17 = v20;
  v18 = v21 - 1;
  v19 = v22;
  if ( BaseRailBlock::isRail(v5, (BlockSource *)&v17, v22) == 1 )
    --v21;
  BlockSource::getBlockAndData((BlockSource *)&v16, v5, (int)&v20);
  if ( BaseRailBlock::isRail((BaseRailBlock *)(unsigned __int8)v16, v6) == 1 )
  {
    __asm
    {
      VLDR            S0, [SP,#0x38+var_24]
      VCVT.F32.S32    S0, S0
      VSTR            S0, [SP,#0x38+var_1C+4]
    }
    v11 = BaseRailBlock::isUsesDataBit((BaseRailBlock *)Block::mBlocks[(unsigned __int8)v16]);
    v12 = BYTE1(v16);
    if ( v11 == 1 )
      v12 = BYTE1(v16) & 7;
      BYTE1(v16) &= 7u;
    _R0 = v21;
    if ( (unsigned __int8)(v12 - 2) <= 3u )
      __asm
      {
        VMOV            S2, R0
        VMOV.F32        S0, #1.0
        VCVT.F32.S32    S2, S2
        VADD.F32        S0, S2, S0
        VSTR            S0, [SP,#0x38+var_1C+4]
      }
    _R1 = &RailMovement::EXITS[6 * v12];
      VLDR            S0, [R1]
      VLDR            S4, [R1,#8]
      VLDR            S6, [R1,#0xC]
      VCVT.F32.S32    S8, S0
      VLDR            S0, [R1,#0x14]
      VCVT.F32.S32    S6, S6
      VLDR            S2, [R1,#4]
      VCVT.F32.S32    S4, S4
      VLDR            S10, [SP,#0x38+var_28]
      VLDR            S12, [SP,#0x38+var_20]
      VCVT.F32.S32    S14, S0
      VMOV.F32        S0, #0.5
      VCVT.F32.S32    S3, S12
      VCVT.F32.S32    S1, S10
      VLDR            S10, [R1,#0x10]
      VCVT.F32.S32    S12, S2
      VSUB.F32        S6, S6, S8
      VCVT.F32.S32    S2, S10
      VSUB.F32        S10, S14, S4
      VMUL.F32        S9, S4, S0
      VMUL.F32        S11, S8, S0
      VADD.F32        S5, S3, S0
      VADD.F32        S7, S1, S0
      VMOV            S4, R0
      VMUL.F32        S8, S6, S0
      VSUB.F32        S2, S2, S12
      VMUL.F32        S14, S12, S0
      VMUL.F32        S10, S10, S0
      VADD.F32        S6, S5, S9
      VADD.F32        S12, S7, S11
      VCMPE.F32       S8, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( _ZF )
        VSTR            S7, [SP,#0x38+var_1C]
        VLDR            S1, [SP,#0x38+var_14]
        VSUB.F32        S1, S1, S3
    else
        VLDR            S3, [SP,#0x38+var_1C]
        VCMPE.F32       S10, #0.0
        VMRS            APSR_nzcv, FPSCR
      if ( _ZF )
        __asm
        {
          VSUB.F32        S1, S3, S1
          VSTR            S5, [SP,#0x38+var_14]
        }
      else
          VLDR            S1, [SP,#0x38+var_14]
          VSUB.F32        S3, S3, S12
          VSUB.F32        S1, S1, S6
          VMUL.F32        S3, S3, S8
          VMUL.F32        S1, S1, S10
          VADD.F32        S1, S1, S3
          VADD.F32        S1, S1, S1
    __asm { VADD.F32        S14, S14, S0 }
    result = 1;
      VCMPE.F32       S2, #0.0
      VMUL.F32        S8, S1, S8
      VMUL.F32        S3, S1, S2
      VMUL.F32        S10, S1, S10
      VADD.F32        S14, S14, S4
      VADD.F32        S4, S8, S12
      VADD.F32        S6, S10, S6
      VADD.F32        S8, S14, S3
      VSTR            S4, [SP,#0x38+var_1C]
      VSTR            S8, [SP,#0x38+var_1C+4]
      VSTR            S6, [SP,#0x38+var_14]
    if ( _NF ^ _VF )
        VMOVLT.F32      S10, #1.0
        VADDLT.F32      S8, S8, S10
        VSTRLT          S8, [SP,#0x38+var_1C+4]
    __asm { VMRS            APSR_nzcv, FPSCR }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        VADDGT.F32      S8, S8, S0
        VSTRGT          S8, [SP,#0x38+var_1C+4]
      VSTR            S4, [R4]
      VSTR            S8, [R4,#4]
      VSTR            S6, [R4,#8]
  }
  else
    result = 0;
  return result;
}


int __fastcall RailMovement::getPosOffs(int a1, float a2, __int64 a3, mce::Math *a4, int a5)
{
  Entity *v5; // r10@1
  int v6; // r8@1
  BaseRailBlock *v7; // r6@1
  int v8; // r1@3
  int v13; // r4@4
  const BlockPos *v14; // r1@6
  int v15; // r7@6
  _DWORD *v16; // r6@6
  __int64 v17; // kr00_8@6
  int v18; // r9@6
  int v22; // r0@10
  int v23; // r0@11
  int v26; // r0@15
  int v27; // r0@16
  BaseRailBlock *v28; // [sp+8h] [bp-58h]@3
  float v29; // [sp+Ch] [bp-54h]@1
  int v30; // [sp+10h] [bp-50h]@1
  const BlockPos *v31; // [sp+14h] [bp-4Ch]@1
  float v32; // [sp+18h] [bp-48h]@1
  int v33; // [sp+1Ch] [bp-44h]@1
  const BlockPos *v34; // [sp+20h] [bp-40h]@1
  __int64 v35; // [sp+24h] [bp-3Ch]@1
  mce::Math *v36; // [sp+2Ch] [bp-34h]@1

  v5 = (Entity *)a1;
  v6 = LODWORD(a2);
  v35 = a3;
  v36 = a4;
  BlockPos::BlockPos((int)&v32, (int)&v35);
  v7 = (BaseRailBlock *)Entity::getRegion(v5);
  v29 = v32;
  v30 = v33 - 1;
  v31 = v34;
  if ( BaseRailBlock::isRail(v7, (BlockSource *)&v29, v34) == 1 )
    --v33;
  BlockSource::getBlockAndData((BlockSource *)&v28, v7, (int)&v32);
  if ( BaseRailBlock::isRail((BaseRailBlock *)(unsigned __int8)v28, v8) != 1 )
    return 0;
  __asm { VLDR            S16, [SP,#0x60+arg_4] }
  BaseRailBlock::isUsesDataBit((BaseRailBlock *)Block::mBlocks[(unsigned __int8)v28]);
  v13 = BYTE1(v28);
  __asm { VMOV.F32        S8, #1.0 }
  if ( _ZF )
  {
    v13 = BYTE1(v28) & 7;
    BYTE1(v28) &= 7u;
  }
  v14 = (const BlockPos *)(3 * v13);
  v15 = RailMovement::EXITS[6 * v13];
  v16 = &RailMovement::EXITS[6 * v13];
  v17 = *((_QWORD *)v16 + 1);
  v18 = v16[5];
  _R0 = HIDWORD(v17) - v15;
  __asm { VMOV            S0, R0 }
  _R0 = v18 - v17;
  __asm
    VMOV            S2, R0
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VMUL.F32        S4, S0, S0
    VMUL.F32        S6, S2, S2
    VADD.F32        S4, S6, S4
    VLDR            S6, [SP,#0x60+var_44]
    VCVT.F32.S32    S6, S6
    VSQRT.F32       S4, S4
    VDIV.F32        S0, S0, S4
    VDIV.F32        S2, S2, S4
    VADD.F32        S4, S6, S8
    VMUL.F32        S0, S0, S16
    VMUL.F32        S2, S2, S16
  if ( !_CF )
    __asm { VMOVCC.F32      S6, S4 }
    VSTR            S6, [SP,#0x60+var_3C+4]
    VLDR            S4, [SP,#0x60+var_3C]
    VADD.F32        S0, S0, S4
    VSTR            S0, [SP,#0x60+var_3C]
    VLDR            S4, [SP,#0x60+var_34]
    VADD.F32        S2, S2, S4
    VSTR            S2, [SP,#0x60+var_34]
  if ( !_ZF && v13 != 2 )
    goto LABEL_22;
  __asm { VMOV            R0, S0 }
  v22 = mce::Math::floor(_R0, *(float *)&v14);
  v14 = (const BlockPos *)LODWORD(v32);
  if ( v22 - LODWORD(v32) != v15 )
  v23 = mce::Math::floor(v36, v32);
  v14 = v34;
  if ( v23 - (_DWORD)v34 == (_DWORD)v17 )
    _R0 = v16[1];
  else
LABEL_22:
    if ( (unsigned int)(v13 - 3) > 1 )
      return RailMovement::getPos(v5, v6, v35, (int)v36);
    v26 = mce::Math::floor((mce::Math *)v35, *(float *)&v14);
    if ( v26 - LODWORD(v32) != HIDWORD(v17) )
    v27 = mce::Math::floor(v36, v32);
    if ( v27 - (_DWORD)v34 != v18 )
    _R0 = v16[4];
    VMOV            S0, R0
    VLDR            S2, [SP,#0x60+var_3C+4]
    VADD.F32        S0, S2, S0
    VSTR            S0, [SP,#0x60+var_3C+4]
  return RailMovement::getPos(v5, v6, v35, (int)v36);
}
