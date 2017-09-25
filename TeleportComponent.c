

int __fastcall TeleportComponent::TeleportComponent(int result, int a2)
{
  *(_DWORD *)result = a2;
  *(_BYTE *)(result + 4) = 1;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 400;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 32) = 1098907648;
  *(_DWORD *)(result + 40) = 1028443341;
  *(_DWORD *)(result + 44) = 1028443341;
  return result;
}


signed int __fastcall TeleportComponent::teleport(TeleportComponent *this, const Vec3 *a2)
{
  Entity **v2; // r4@1
  int v3; // r0@1
  const Vec3 *v4; // r8@1
  __int64 v5; // r1@1
  BlockSource *v6; // r0@1
  const BlockPos *v7; // r0@3
  int v13; // r3@6
  void (*v14)(void); // r7@6
  BlockSource *v15; // r0@6
  char *v16; // r0@6
  Entity *v17; // r0@7
  BlockSource *v19; // r0@10
  signed int v20; // r1@10
  Random *v21; // r5@11
  unsigned int v25; // r0@12
  int v33; // r0@12
  int v34; // r5@13
  BlockSource *v35; // r0@13
  int v36; // r5@14
  BlockSource *v37; // r6@14
  int v38; // r0@14
  float v39; // [sp+1Ch] [bp-ACh]@12
  int v40; // [sp+28h] [bp-A0h]@6
  int v41; // [sp+30h] [bp-98h]@6
  int v42; // [sp+34h] [bp-94h]@3
  int v43; // [sp+38h] [bp-90h]@3
  float v44; // [sp+3Ch] [bp-8Ch]@3
  unsigned __int8 v45; // [sp+40h] [bp-88h]@3
  int v46; // [sp+44h] [bp-84h]@1
  int v47; // [sp+48h] [bp-80h]@2
  float v48; // [sp+4Ch] [bp-7Ch]@3
  __int64 v49; // [sp+50h] [bp-78h]@1
  int v50; // [sp+58h] [bp-70h]@1

  v2 = (Entity **)this;
  v3 = *(_DWORD *)this;
  v4 = a2;
  v5 = *(_QWORD *)(v3 + 72);
  v50 = *(_DWORD *)(v3 + 80);
  v49 = v5;
  j_BlockPos::BlockPos((int)&v46, (int)v4);
  v6 = (BlockSource *)j_Entity::getRegion(*v2);
  if ( j_BlockSource::hasChunksAt(v6, (const BlockPos *)&v46, 0) != 1 || v47 < 1 )
    goto LABEL_7;
  while ( 1 )
  {
    v7 = (const BlockPos *)j_Entity::getRegion(*v2);
    v42 = v46;
    v43 = v47 - 1;
    v44 = v48;
    j_BlockSource::getBlockID((BlockSource *)&v45, v7, (int)&v42);
    _R1 = v47;
    if ( Block::mSolid[v45] )
      break;
    --v47;
    if ( _R1 <= 1 )
      goto LABEL_7;
  }
  __asm
    VMOV            S0, R1
    VCVT.F32.S32    S0, S0
  v13 = *((_DWORD *)v4 + 2);
  v14 = *(void (**)(void))(*(_DWORD *)*v2 + 104);
  v40 = *(_DWORD *)v4;
  __asm { VSTR            S0, [SP,#0xC8+var_9C] }
  v41 = v13;
  v14();
  v15 = (BlockSource *)j_Entity::getRegion(*v2);
  v16 = j_BlockSource::fetchAABBs(v15, (Entity *)((char *)*v2 + 264), 1);
  if ( (unsigned int)*(_QWORD *)v16 != *(_QWORD *)v16 >> 32 )
LABEL_7:
    v17 = *v2;
LABEL_8:
    (*(void (**)(void))(*(_DWORD *)v17 + 48))();
    return 0;
  v19 = (BlockSource *)j_Entity::getRegion(*v2);
  v20 = j_BlockSource::containsAnyLiquid(v19, (Entity *)((char *)*v2 + 264));
  v17 = *v2;
  if ( v20 )
    goto LABEL_8;
  __asm { VMOV.F32        S27, #-0.5 }
  v21 = (Entity *)((char *)v17 + 552);
  __asm { VLDR            D9, =2.32830644e-10 }
  _R9 = 0;
    VLDR            S20, =0.007874
    VLDR            S22, =0.2
  do
    _R10 = j_Random::_genRandInt32(v21);
    _R11 = j_Random::_genRandInt32(v21);
    v25 = j_Random::_genRandInt32(v21);
    __asm { VLDR            S0, [SP,#0xC8+var_84] }
    _R6 = v25;
    __asm
    {
      VLDR            S24, [SP,#0xC8+var_78]
      VCVT.F32.S32    S26, S0
    }
    _R7 = j_Random::_genRandInt32(v21);
    _R0 = *v2;
      VLDR            S0, [SP,#0xC8+var_80]
      VLDR            S28, [SP,#0xC8+var_78+4]
      VCVT.F32.S32    S30, S0
      VLDR            S29, [R0,#0x130]
    _R8 = j_Random::_genRandInt32(v21);
      VLDR            S0, [SP,#0xC8+var_7C]
      VLDR            S21, [SP,#0xC8+var_70]
      VCVT.F32.S32    S23, S0
      VLDR            S25, [R0,#0x134]
      VMOV            S0, R7
      VCVT.F64.U32    D8, S0
    _R0 = j_Random::_genRandInt32(v21);
      VMOV            S0, R0
      VMUL.F64        D1, D8, D9
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D9
      VMOV            S4, R8
      VMOV            S6, R10
      VMOV            S8, R9
      VMOV            S10, R11
      VMOV            S12, R6
      VCVT.F64.U32    D2, S4
      VCVT.F64.U32    D3, S6
      VCVT.F32.S32    S8, S8
      VCVT.F64.U32    D5, S10
      VCVT.F64.U32    D6, S12
      VCVT.F32.F64    S2, D1
      VCVT.F32.F64    S0, D0
      VMUL.F64        D2, D2, D9
      VMUL.F64        D3, D3, D9
      VMUL.F64        D5, D5, D9
      VMUL.F64        D6, D6, D9
      VADD.F32        S2, S2, S27
      VADD.F32        S0, S0, S27
      VMUL.F32        S8, S8, S20
      VSUB.F32        S14, S26, S24
      VSUB.F32        S1, S30, S28
      VSUB.F32        S3, S23, S21
      VCVT.F32.F64    S4, D2
      VMUL.F32        S14, S14, S8
      VMUL.F32        S1, S1, S8
      VMUL.F32        S8, S3, S8
      VLDR            S3, [R0,#0x130]
      VADD.F32        S2, S2, S2
      VADD.F32        S0, S0, S0
      VCVT.F32.F64    S6, D3
      VCVT.F32.F64    S10, D5
      VCVT.F32.F64    S12, D6
      VADD.F32        S10, S10, S27
      VADD.F32        S12, S12, S27
      VADD.F32        S14, S14, S24
      VMUL.F32        S2, S29, S2
      VADD.F32        S1, S1, S28
      VMUL.F32        S4, S4, S25
      VADD.F32        S6, S6, S27
      VADD.F32        S8, S8, S21
      VMUL.F32        S0, S3, S0
      VMUL.F32        S30, S10, S22
      VADD.F32        S16, S14, S2
      VMUL.F32        S17, S12, S22
      VADD.F32        S24, S1, S4
      VMUL.F32        S28, S6, S22
      VADD.F32        S26, S8, S0
    v33 = j_Entity::getLevel(*v2);
      VSTR            S16, [SP,#0xC8+var_AC]
      VSTR            S24, [SP,#0xC8+var_A8]
      VSTR            S28, [SP,#0xC8+var_B8]
      VSTR            S30, [SP,#0xC8+var_B4]
      VSTR            S26, [SP,#0xC8+var_A4]
      VSTR            S17, [SP,#0xC8+var_B0]
    j_Level::addParticle(v33, 20, (int)&v39);
    ++_R9;
  while ( _R9 != 128 );
  v34 = j_Entity::getLevel(*v2);
  v35 = (BlockSource *)j_Entity::getRegion(*v2);
  j_Level::broadcastDimensionEvent(v34, v35, 1018, (int)&v49, 0);
  if ( !(*(int (**)(void))(*(_DWORD *)*v2 + 288))() )
    v36 = j_Entity::getLevel(*v2);
    v37 = (BlockSource *)j_Entity::getRegion(*v2);
    v38 = (*(int (**)(void))(*(_DWORD *)*v2 + 52))();
    j_Level::broadcastDimensionEvent(v36, v37, 1018, v38, 0);
  return 1;
}


int __fastcall TeleportComponent::initFromDefinition(int result)
{
  __asm { VMOV.F32        S0, #20.0 }
  _R1 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)result + 48) + 420);
  *(_BYTE *)(result + 4) = *(_BYTE *)(_R1 + 4);
  __asm
  {
    VLDR            S2, [R1,#8]
    VMUL.F32        S2, S2, S0
    VCVTR.S32.F32   S2, S2
    VSTR            S2, [R0,#8]
    VLDR            S2, [R1,#0xC]
    VMUL.F32        S0, S2, S0
    VCVTR.S32.F32   S0, S0
    VSTR            S0, [R0,#0xC]
  }
  *(_DWORD *)(result + 20) = *(_DWORD *)(_R1 + 16);
  *(_DWORD *)(result + 24) = *(_DWORD *)(_R1 + 20);
  *(_DWORD *)(result + 28) = *(_DWORD *)(_R1 + 24);
  *(_DWORD *)(result + 32) = *(_DWORD *)(_R1 + 28);
  *(_DWORD *)(result + 36) = *(_DWORD *)(_R1 + 32);
  *(_DWORD *)(result + 40) = *(_DWORD *)(_R1 + 36);
  *(_DWORD *)(result + 44) = *(_DWORD *)(_R1 + 40);
  return result;
}


signed int __fastcall TeleportComponent::randomTeleport(TeleportComponent *this)
{
  __int64 v9; // r1@1
  __int64 v11; // [sp+0h] [bp-40h]@1
  int v12; // [sp+8h] [bp-38h]@1

  _R4 = this;
  _R0 = j_Random::_genRandInt32((Random *)(*(_DWORD *)this + 552));
  __asm
  {
    VMOV            S0, R0
    VLDR            S16, [R4,#0x14]
    VCVT.F64.U32    D9, S0
  }
  _R0 = j_Random::_genRandInt32((Random *)(*(_DWORD *)_R4 + 552));
    VLDR            D10, =2.32830644e-10
    VCVT.F64.U32    D11, S0
    VLDR            S24, [R4,#0x18]
    VMUL.F64        D9, D9, D10
    VMUL.F64        D1, D11, D10
    VCVT.F32.F64    S4, D9
    VMOV.F32        S6, #-0.5
    VCVT.F64.U32    D0, S0
    VADD.F32        S4, S4, S6
    VLDR            S8, [R4,#0x1C]
    VMUL.F64        D0, D0, D10
  v9 = *(_QWORD *)(*(_DWORD *)_R4 + 72);
  v12 = *(_DWORD *)(*(_DWORD *)_R4 + 80);
  v11 = v9;
    VCVT.F32.F64    S2, D1
    VMUL.F32        S4, S4, S16
    VLDR            S10, [SP,#0x40+var_40]
    VADD.F32        S2, S2, S6
    VCVT.F32.F64    S0, D0
    VADD.F32        S4, S10, S4
    VMUL.F32        S2, S2, S24
    VADD.F32        S0, S0, S6
    VSTR            S4, [SP,#0x40+var_40]
    VLDR            S4, [SP,#0x40+var_40+4]
    VMUL.F32        S0, S0, S8
    VADD.F32        S2, S4, S2
    VSTR            S2, [SP,#0x40+var_40+4]
    VLDR            S2, [SP,#0x40+var_38]
    VADD.F32        S0, S2, S0
    VSTR            S0, [SP,#0x40+var_38]
  return j_TeleportComponent::teleport(_R4, (const Vec3 *)&v11);
}


signed int __fastcall TeleportComponent::tick(TeleportComponent *this)
{
  BlockSource *v6; // r5@4
  __int64 v13; // r1@13
  Entity *v14; // r0@14
  Entity *v15; // r5@14
  signed int result; // r0@15
  int v17; // r0@20
  Entity *v18; // r0@22
  int v19; // r1@22
  int v20; // r6@22
  unsigned int v21; // r1@24
  __int64 v25; // r1@27
  char v26; // [sp+4h] [bp-54h]@5
  __int64 v27; // [sp+10h] [bp-48h]@13
  int v28; // [sp+18h] [bp-40h]@13

  _R4 = this;
  __asm
  {
    VLDR            S0, [R4,#0x28]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    goto LABEL_31;
    VLDR            S0, [R4,#0x2C]
LABEL_31:
    v6 = (BlockSource *)j_Entity::getRegion(*(Entity **)this);
    _R0 = (*(int (**)(void))(**(_DWORD **)_R4 + 260))();
    __asm
    {
      VMOV.F32        S16, #0.5
      VMOV            S18, R0
      VCMPE.F32       S18, S16
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF
      || (j_BlockPos::BlockPos((int)&v26, *(_DWORD *)_R4 + 72), !j_BlockSource::canSeeSky(v6, (const BlockPos *)&v26)) )
      __asm
      {
        VCMPE.F32       S18, S16
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        goto LABEL_14;
      _R0 = (int)_R4 + 44;
    else
      _R0 = (int)_R4 + 40;
      VLDR            S18, [R0]
      VCMPE.F32       S18, #0.0
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      _R0 = j_Random::_genRandInt32((Random *)(*(_DWORD *)_R4 + 552));
        VMOV            S0, R0
        VLDR            D8, =2.32830644e-10
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D8
        VCVT.F32.F64    S0, D0
        VCMPE.F32       S0, S18
      if ( _NF ^ _VF )
        _R0 = j_Random::_genRandInt32((Random *)(*(_DWORD *)_R4 + 552));
        __asm
        {
          VMOV            S0, R0
          VLDR            S18, [R4,#0x14]
          VCVT.F64.U32    D10, S0
        }
          VMUL.F64        D10, D10, D8
          VCVT.F64.U32    D11, S0
          VLDR            S24, [R4,#0x18]
          VMUL.F64        D1, D11, D8
          VCVT.F32.F64    S4, D10
          VMOV.F32        S6, #-0.5
          VCVT.F32.F64    S2, D1
          VCVT.F64.U32    D0, S0
          VADD.F32        S4, S4, S6
          VLDR            S8, [R4,#0x1C]
        v13 = *(_QWORD *)(*(_DWORD *)_R4 + 72);
        __asm { VMUL.F64        D0, D0, D8 }
        v28 = *(_DWORD *)(*(_DWORD *)_R4 + 80);
        v27 = v13;
          VADD.F32        S2, S2, S6
          VMUL.F32        S4, S4, S18
        goto LABEL_28;
LABEL_14:
  v14 = (Entity *)j_Entity::getTarget(*(Entity **)_R4);
  v15 = v14;
  if ( !v14 )
    result = *((_BYTE *)_R4 + 4);
    if ( !*((_BYTE *)_R4 + 4) )
      return result;
    v17 = *((_DWORD *)_R4 + 4);
    _VF = __OFSUB__(v17, 1);
    result = v17 - 1;
    *((_DWORD *)_R4 + 4) = result;
    if ( !((unsigned __int8)((result < 0) ^ _VF) | (result == 0)) )
    v18 = *(Entity **)_R4;
    v19 = *((_QWORD *)_R4 + 1) >> 32;
    v20 = *((_QWORD *)_R4 + 1);
    if ( v19 > v20 )
      if ( v19 == v20 )
        v21 = 0;
      else
        v21 = j_Random::_genRandInt32((Entity *)((char *)v18 + 552)) % (v19 - v20);
        v18 = *(Entity **)_R4;
      v20 += v21;
    *((_DWORD *)_R4 + 4) = v20;
    _R0 = j_Random::_genRandInt32((Entity *)((char *)v18 + 552));
      VMOV            S0, R0
      VLDR            S16, [R4,#0x14]
      VCVT.F64.U32    D9, S0
    _R0 = j_Random::_genRandInt32((Random *)(*(_DWORD *)_R4 + 552));
      VLDR            D10, =2.32830644e-10
      VCVT.F64.U32    D11, S0
      VLDR            S24, [R4,#0x18]
      VMUL.F64        D9, D9, D10
      VMUL.F64        D1, D11, D10
      VCVT.F32.F64    S4, D9
      VMOV.F32        S6, #-0.5
      VCVT.F64.U32    D0, S0
      VCVT.F32.F64    S2, D1
      VADD.F32        S4, S4, S6
      VLDR            S8, [R4,#0x1C]
      VMUL.F64        D0, D0, D10
    v25 = *(_QWORD *)(*(_DWORD *)_R4 + 72);
    v28 = *(_DWORD *)(*(_DWORD *)_R4 + 80);
    v27 = v25;
      VADD.F32        S2, S2, S6
      VMUL.F32        S4, S4, S16
LABEL_28:
      VLDR            S10, [SP,#0x58+var_48]
      VMUL.F32        S2, S2, S24
      VCVT.F32.F64    S0, D0
      VADD.F32        S4, S10, S4
      VADD.F32        S0, S0, S6
      VSTR            S4, [SP,#0x58+var_48]
      VLDR            S4, [SP,#0x58+var_48+4]
      VMUL.F32        S0, S0, S8
      VADD.F32        S2, S4, S2
      VSTR            S2, [SP,#0x58+var_48+4]
      VLDR            S2, [SP,#0x58+var_40]
      VADD.F32        S0, S2, S0
      VSTR            S0, [SP,#0x58+var_40]
    return j_TeleportComponent::teleport(_R4, (const Vec3 *)&v27);
  result = j_Entity::distanceToSqr(v14, *(const Entity **)_R4);
    VLDR            S0, [R4,#0x20]
    VMOV            S2, R0
    VMUL.F32        S0, S0, S0
    VCMPE.F32       S2, S0
    result = j_Random::_genRandInt32((Random *)(*(_DWORD *)_R4 + 552));
      VLDR            D1, =2.32830644e-10
      VMUL.F64        D0, D0, D1
      VLDR            S2, [R4,#0x24]
      VCMPE.F32       S0, S2
    if ( _NF ^ _VF )
      result = j_TeleportComponent::teleportTowards(_R4, v15);
  return result;
}


signed int __fastcall TeleportComponent::teleportTowards(TeleportComponent *this, Entity *a2)
{
  TeleportComponent *v2; // r4@1
  char v13; // r5@4
  float v18; // [sp+0h] [bp-50h]@4
  char v19; // [sp+Ch] [bp-44h]@1

  v2 = this;
  _R5 = a2;
  _R0 = *(_DWORD *)this;
  __asm
  {
    VLDR            S16, [R5,#0x48]
    VLDR            S18, [R0,#0x48]
    VLDR            S20, [R0,#0x10C]
    VLDR            S22, [R0,#0x134]
  }
  j_Entity::getAttachPos((AABB *)&v19, (int)a2, 3, 0);
    VMOV.F32        S0, #0.5
    VLDR            S4, [SP,#0x50+var_40]
  _R0 = *(_DWORD *)v2;
    VLDR            S6, [R0,#0x50]
    VMUL.F32        S0, S22, S0
    VADD.F32        S2, S0, S20
    VSUB.F32        S0, S18, S16
    VSUB.F32        S2, S2, S4
    VLDR            S4, [R5,#0x50]
    VSUB.F32        S4, S6, S4
    VMUL.F32        S6, S0, S0
    VMUL.F32        S8, S2, S2
    VMUL.F32        S10, S4, S4
    VADD.F32        S6, S8, S6
    VLDR            S8, =0.0001
    VADD.F32        S6, S6, S10
    VSQRT.F32       S6, S6
    VCMPE.F32       S6, S8
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    _R6 = *(_QWORD *)&Vec3::ZERO;
    _R8 = dword_2822498;
  else
    __asm
    {
      VDIV.F32        S4, S4, S6
      VDIV.F32        S2, S2, S6
      VDIV.F32        S0, S0, S6
      VMOV            R8, S4
      VMOV            R7, S2
      VMOV            R6, S0
    }
  _R0 = j_Random::_genRandInt32((Random *)(_R0 + 552));
  __asm { VMOV            S16, R0 }
  v13 = j_Random::_genRandInt32((Random *)(*(_DWORD *)v2 + 552));
  __asm { VCVT.F64.U32    D8, S16 }
  _R0 = j_Random::_genRandInt32((Random *)(*(_DWORD *)v2 + 552));
    VMOV            S2, R0
    VLDR            D0, =2.32830644e-10
    VMOV.F32        S6, #-16.0
    VCVT.F64.U32    D1, S2
  _R0 = (v13 & 0xF) - 8;
    VMUL.F64        D2, D8, D0
    VMUL.F64        D0, D1, D0
    VMOV.F32        S2, #-0.5
    VCVT.F32.F64    S4, D2
    VCVT.F32.F64    S0, D0
    VMOV.F32        S8, #8.0
    VADD.F32        S4, S4, S2
    VMOV            S10, R6
    VMOV            S12, R7
    VMOV            S1, R0
    VMOV            S14, R8
    VADD.F32        S0, S0, S2
    VCVT.F32.S32    S1, S1
    VMUL.F32        S12, S12, S6
    VMUL.F32        S10, S10, S6
    VMUL.F32        S4, S4, S8
    VLDR            S3, [R0,#0x50]
    VMUL.F32        S6, S14, S6
    VLDR            S2, [R0,#0x48]
    VLDR            S14, [R0,#0x4C]
    VMUL.F32        S0, S0, S8
    VADD.F32        S4, S4, S10
    VADD.F32        S6, S3, S6
    VADD.F32        S10, S1, S12
    VADD.F32        S2, S4, S2
    VADD.F32        S0, S6, S0
    VADD.F32        S4, S10, S14
    VSTR            S2, [SP,#0x50+var_50]
    VSTR            S4, [SP,#0x50+var_4C]
    VSTR            S0, [SP,#0x50+var_48]
  return j_TeleportComponent::teleport(v2, (const Vec3 *)&v18);
}
