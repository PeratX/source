

void __fastcall ThinFenceBlock::~ThinFenceBlock(ThinFenceBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


AABB *__fastcall ThinFenceBlock::getVisualShape(ThinFenceBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, bool a5)
{
  const BlockPos *v5; // r6@1
  BlockSource *v6; // r5@1
  __int64 v7; // r0@1
  int v8; // r2@1
  AABB *v9; // r8@1
  signed int v10; // r9@2
  int v11; // r2@13
  signed int v12; // r4@14
  int v13; // r1@25
  int v14; // r2@25
  signed int v15; // r7@26
  int v16; // r1@37
  int v17; // r2@37
  float v25; // [sp+0h] [bp-68h]@0
  float v26; // [sp+8h] [bp-60h]@0
  unsigned __int8 v27; // [sp+Ch] [bp-5Ch]@37
  int v28; // [sp+10h] [bp-58h]@37
  int v29; // [sp+14h] [bp-54h]@37
  int v30; // [sp+18h] [bp-50h]@37
  unsigned __int8 v31; // [sp+1Ch] [bp-4Ch]@25
  int v32; // [sp+20h] [bp-48h]@25
  int v33; // [sp+24h] [bp-44h]@25
  int v34; // [sp+28h] [bp-40h]@25
  unsigned __int8 v35; // [sp+2Ch] [bp-3Ch]@13
  __int64 v36; // [sp+30h] [bp-38h]@13
  int v37; // [sp+38h] [bp-30h]@13
  unsigned __int8 v38; // [sp+3Ch] [bp-2Ch]@1
  __int64 v39; // [sp+40h] [bp-28h]@1
  int v40; // [sp+48h] [bp-20h]@1

  v5 = a3;
  v6 = a2;
  v7 = *(_QWORD *)a3;
  v8 = *((_DWORD *)a3 + 2);
  v9 = a4;
  v39 = v7;
  v40 = v8 - 1;
  BlockSource::getBlockID((BlockSource *)&v38, v6, (int)&v39);
  if ( Block::mSolid[v38] )
  {
    v10 = 1;
  }
  else if ( *(_BYTE *)(Block::mIronFence + 4) == v38 )
  else if ( *(_BYTE *)(Block::mGlassPane + 4) == v38 )
  else if ( *(_BYTE *)(Block::mGlass + 4) == v38 )
  else if ( *(_BYTE *)(Block::mStainedGlass + 4) == v38 )
  else
    v10 = 0;
    if ( *(_BYTE *)(Block::mStainedGlassPane + 4) == v38 )
      v10 = 1;
  v11 = *((_DWORD *)v5 + 2);
  v36 = *(_QWORD *)v5;
  v37 = v11 + 1;
  BlockSource::getBlockID((BlockSource *)&v35, v6, (int)&v36);
  if ( Block::mSolid[v35] )
    v12 = 1;
  else if ( *(_BYTE *)(Block::mIronFence + 4) == v35 )
  else if ( *(_BYTE *)(Block::mGlassPane + 4) == v35 )
  else if ( *(_BYTE *)(Block::mGlass + 4) == v35 )
  else if ( *(_BYTE *)(Block::mStainedGlass + 4) == v35 )
    v12 = 0;
    if ( *(_BYTE *)(Block::mStainedGlassPane + 4) == v35 )
      v12 = 1;
  v13 = *((_DWORD *)v5 + 1);
  v14 = *((_DWORD *)v5 + 2);
  v32 = *(_DWORD *)v5 - 1;
  v33 = v13;
  v34 = v14;
  BlockSource::getBlockID((BlockSource *)&v31, v6, (int)&v32);
  if ( Block::mSolid[v31] )
    v15 = 1;
  else if ( *(_BYTE *)(Block::mIronFence + 4) == v31 )
  else if ( *(_BYTE *)(Block::mGlassPane + 4) == v31 )
  else if ( *(_BYTE *)(Block::mGlass + 4) == v31 )
  else if ( *(_BYTE *)(Block::mStainedGlass + 4) == v31 )
    v15 = 0;
    if ( *(_BYTE *)(Block::mStainedGlassPane + 4) == v31 )
      v15 = 1;
  v16 = *((_DWORD *)v5 + 1);
  v17 = *((_DWORD *)v5 + 2);
  v28 = *(_DWORD *)v5 + 1;
  v29 = v16;
  v30 = v17;
  BlockSource::getBlockID((BlockSource *)&v27, v6, (int)&v28);
  if ( !Block::mSolid[v27]
    && *(_BYTE *)(Block::mIronFence + 4) != v27
    && *(_BYTE *)(Block::mGlassPane + 4) != v27
    && *(_BYTE *)(Block::mGlass + 4) != v27
    && *(_BYTE *)(Block::mStainedGlass + 4) != v27 )
    *(_BYTE *)(Block::mStainedGlassPane + 4);
  __asm
    VMOV.F32        S2, #1.0
    VLDR            S4, =0.0
    VMOV.F32        S6, S4
    VMOV.F32        S0, S2
  if ( _ZF )
    __asm
    {
      VMOV.F32        S8, #0.5625
      VMOV.F32        S10, #1.0
      VMOV.F32        S6, #0.4375
      VMOV.F32        S0, S8
    }
    if ( !_ZF )
      __asm { VMOVNE.F32      S0, S10 }
      VLDR            S10, =0.0
      VMOV.F32        S12, S6
      __asm { VMOVNE.F32      S12, S10 }
    if ( v15 )
      __asm
      {
        VMOVNE.F32      S6, S12
        VMOVNE.F32      S0, S8
      }
  if ( !(v10 & v12) )
      VMOV.F32        S4, #0.4375
      VMOV.F32        S2, S8
      __asm { VMOVNE.F32      S2, S10 }
      VMOV.F32        S12, S4
    if ( v10 )
        VMOVNE.F32      S4, S12
        VMOVNE.F32      S2, S8
    VMOV            R1, S6
    VMOV            R3, S4
    VSTR            S2, [SP,#0x68+var_60]
  LODWORD(_R0) = v9;
  LODWORD(_R2) = 0;
  __asm { VSTR            S0, [SP,#0x68+var_68] }
  AABB::set(_R0, _R2, v25, 1.0, v26);
  return v9;
}


signed int __fastcall ThinFenceBlock::attachsTo(ThinFenceBlock *this, int a2)
{
  signed int result; // r0@6

  if ( Block::mSolid[a2]
    || *(_BYTE *)(Block::mIronFence + 4) == a2
    || *(_BYTE *)(Block::mGlassPane + 4) == a2
    || *(_BYTE *)(Block::mGlass + 4) == a2
    || *(_BYTE *)(Block::mStainedGlass + 4) == a2 )
  {
    result = 1;
  }
  else
    result = 0;
    if ( *(_BYTE *)(Block::mStainedGlassPane + 4) == a2 )
      result = 1;
  return result;
}


int __fastcall ThinFenceBlock::ThinFenceBlock(int a1, const void **a2, int a3, int a4, char a5, int a6)
{
  int v6; // r5@1
  int v7; // r4@1
  signed int v8; // r1@1
  int v9; // r0@1
  int *v15; // r2@3
  float v17; // [sp+0h] [bp-18h]@3
  int v18; // [sp+4h] [bp-14h]@3

  v6 = a3;
  v7 = a1;
  Block::Block(a1, a2, a3, a4);
  *(_DWORD *)v7 = &off_2715CF0;
  *(_BYTE *)(v7 + 641) = a5;
  Block::setSolid((Block *)v7, 0);
  v8 = 1;
  LOWORD(v9) = -13107;
  if ( a6 )
    v8 = 5;
  HIWORD(v9) = 16204;
  *(_DWORD *)(v7 + 20) = v8;
  *(_DWORD *)(v7 + 24) = 0;
  *(_DWORD *)(v7 + 28) = 0;
  v18 = v9;
  _R0 = Material::getTranslucency(*(Material **)(v7 + 56));
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.8
    VCMPE.F32       S0, S2
  }
  v15 = (int *)&v17;
    VMRS            APSR_nzcv, FPSCR
    VSTR            S0, [SP,#0x18+var_18]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v15 = &v18;
  Block::mTranslucency[v6] = *v15;
  return v7;
}


signed int __fastcall ThinFenceBlock::addCollisionShapes(int a1)
{
  (*(void (__cdecl **)(int))(*(_DWORD *)a1 + 28))(a1);
  return 1;
}


int __fastcall ThinFenceBlock::addAABBs(int a1, BlockPos *a2, int a3, int a4, int a5)
{
  int v5; // r6@1
  BlockPos *v6; // r7@1
  int v7; // r9@1
  __int64 v8; // r0@1
  int v9; // r2@1
  AABB *v10; // r8@1
  signed int v11; // r10@2
  int v12; // r2@13
  signed int v13; // r5@14
  int v14; // r1@25
  int v15; // r2@25
  signed int v16; // r4@26
  int v17; // r1@37
  int v18; // r2@37
  signed int v19; // r7@38
  bool v20; // zf@50
  AABB *v21; // r6@55
  __int64 v22; // r0@55
  __int64 v23; // r2@55
  AABB *v24; // r6@58
  __int64 v25; // r2@58
  __int64 v26; // r0@58
  AABB *v27; // r0@61
  bool v28; // zf@62
  signed int v29; // r0@66
  int result; // r0@68
  AABB *v31; // r0@72
  signed int v32; // [sp+0h] [bp-98h]@54
  signed __int64 v33; // [sp+0h] [bp-98h]@55
  float v34; // [sp+4h] [bp-94h]@58
  signed int v35; // [sp+8h] [bp-90h]@55
  float v36; // [sp+8h] [bp-90h]@58
  float v37; // [sp+Ch] [bp-8Ch]@49
  float v38; // [sp+10h] [bp-88h]@61
  float v39; // [sp+14h] [bp-84h]@61
  char v40; // [sp+18h] [bp-80h]@49
  unsigned __int8 v41; // [sp+34h] [bp-64h]@37
  int v42; // [sp+38h] [bp-60h]@37
  int v43; // [sp+3Ch] [bp-5Ch]@37
  int v44; // [sp+40h] [bp-58h]@37
  unsigned __int8 v45; // [sp+44h] [bp-54h]@25
  int v46; // [sp+48h] [bp-50h]@25
  int v47; // [sp+4Ch] [bp-4Ch]@25
  int v48; // [sp+50h] [bp-48h]@25
  unsigned __int8 v49; // [sp+54h] [bp-44h]@13
  __int64 v50; // [sp+58h] [bp-40h]@13
  int v51; // [sp+60h] [bp-38h]@13
  unsigned __int8 v52; // [sp+64h] [bp-34h]@1
  __int64 v53; // [sp+68h] [bp-30h]@1
  int v54; // [sp+70h] [bp-28h]@1

  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = *(_QWORD *)a3;
  v9 = *(_DWORD *)(a3 + 8);
  v10 = (AABB *)a4;
  v53 = v8;
  v54 = v9 - 1;
  BlockSource::getBlockID((BlockSource *)&v52, v6, (int)&v53);
  if ( Block::mSolid[v52] )
  {
    v11 = 1;
  }
  else if ( *(_BYTE *)(Block::mIronFence + 4) == v52 )
  else if ( *(_BYTE *)(Block::mGlassPane + 4) == v52 )
  else if ( *(_BYTE *)(Block::mGlass + 4) == v52 )
  else if ( *(_BYTE *)(Block::mStainedGlass + 4) == v52 )
  else
    v11 = 0;
    if ( *(_BYTE *)(Block::mStainedGlassPane + 4) == v52 )
      v11 = 1;
  v12 = *(_DWORD *)(v5 + 8);
  v50 = *(_QWORD *)v5;
  v51 = v12 + 1;
  BlockSource::getBlockID((BlockSource *)&v49, v6, (int)&v50);
  if ( Block::mSolid[v49] )
    v13 = 1;
  else if ( *(_BYTE *)(Block::mIronFence + 4) == v49 )
  else if ( *(_BYTE *)(Block::mGlassPane + 4) == v49 )
  else if ( *(_BYTE *)(Block::mGlass + 4) == v49 )
  else if ( *(_BYTE *)(Block::mStainedGlass + 4) == v49 )
    v13 = 0;
    if ( *(_BYTE *)(Block::mStainedGlassPane + 4) == v49 )
      v13 = 1;
  v14 = *(_DWORD *)(v5 + 4);
  v15 = *(_DWORD *)(v5 + 8);
  v46 = *(_DWORD *)v5 - 1;
  v47 = v14;
  v48 = v15;
  BlockSource::getBlockID((BlockSource *)&v45, v6, (int)&v46);
  if ( Block::mSolid[v45] )
    v16 = 1;
  else if ( *(_BYTE *)(Block::mIronFence + 4) == v45 )
  else if ( *(_BYTE *)(Block::mGlassPane + 4) == v45 )
  else if ( *(_BYTE *)(Block::mGlass + 4) == v45 )
  else if ( *(_BYTE *)(Block::mStainedGlass + 4) == v45 )
    v16 = 0;
    if ( *(_BYTE *)(Block::mStainedGlassPane + 4) == v45 )
      v16 = 1;
  v17 = *(_DWORD *)(v5 + 4);
  v18 = *(_DWORD *)(v5 + 8);
  v42 = *(_DWORD *)v5 + 1;
  v43 = v17;
  v44 = v18;
  BlockSource::getBlockID((BlockSource *)&v41, v6, (int)&v42);
  if ( Block::mSolid[v41] )
    v19 = 1;
  else if ( *(_BYTE *)(Block::mIronFence + 4) == v41 )
  else if ( *(_BYTE *)(Block::mGlassPane + 4) == v41 )
  else if ( *(_BYTE *)(Block::mGlass + 4) == v41 )
  else if ( *(_BYTE *)(Block::mStainedGlass + 4) == v41 )
    v19 = 0;
    if ( *(_BYTE *)(Block::mStainedGlassPane + 4) == v41 )
      v19 = 1;
  AABB::AABB((AABB *)&v40);
  Vec3::Vec3((int)&v37, v5);
  if ( !(v16 | v19 | v11 | v13) )
    v21 = (AABB *)&v40;
    v33 = 4575657222466437120LL;
    HIDWORD(v22) = 1054867456;
    v35 = 1058013184;
    LODWORD(v22) = &v40;
    v23 = 4530621225134718976LL;
    goto LABEL_72;
  v20 = v16 == 1;
  if ( v16 == 1 )
    v20 = v19 == 1;
  if ( v20 )
    v32 = 1065353216;
LABEL_60:
    v24 = (AABB *)&v40;
    HIDWORD(v25) = 1054867456;
    v34 = 1.0;
    v36 = 0.5625;
    LODWORD(v26) = &v40;
    HIDWORD(v26) = 0;
    goto LABEL_61;
  if ( !(v16 ^ 1 | v19) )
    v32 = 1056964608;
    goto LABEL_60;
  if ( v19 ^ 1 | v16 )
    goto LABEL_62;
  v24 = (AABB *)&v40;
  HIDWORD(v25) = 1054867456;
  v32 = 1065353216;
  v34 = 1.0;
  v36 = 0.5625;
  LODWORD(v26) = &v40;
  HIDWORD(v26) = 1056964608;
LABEL_61:
  LODWORD(v25) = 0;
  AABB::set(v26, v25, *(float *)&v32, v34, v36);
  v27 = (AABB *)AABB::move(v24, v37, v38, v39);
  Block::addAABB(v7, v27, v10, a5);
LABEL_62:
  v28 = v11 == 1;
  if ( v11 == 1 )
    v28 = v13 == 1;
  if ( v28 )
    v29 = 1065353216;
LABEL_71:
    v35 = v22;
    v23 = 0LL;
  if ( !(v11 ^ 1 | v13) )
    v29 = 1056964608;
    goto LABEL_71;
  result = v13 ^ 1 | v11;
  if ( result )
    return result;
  v21 = (AABB *)&v40;
  v33 = 4575657222466437120LL;
  HIDWORD(v22) = 1054867456;
  v35 = 1065353216;
  LODWORD(v22) = &v40;
  v23 = 4539628424389459968LL;
LABEL_72:
  AABB::set(v22, v23, *(float *)&v33, *((float *)&v33 + 1), *(float *)&v35);
  v31 = (AABB *)AABB::move(v21, v37, v38, v39);
  return Block::addAABB(v7, v31, v10, a5);
}


int __fastcall ThinFenceBlock::getResource(ThinFenceBlock *this, Random *a2, int a3, int a4)
{
  int result; // r0@2

  if ( *((_BYTE *)this + 641) )
    result = j_j_j__ZNK5Block11getResourceER6Randomii(this, a2, a3, a4);
  else
    result = 0;
  return result;
}


void __fastcall ThinFenceBlock::~ThinFenceBlock(ThinFenceBlock *this)
{
  ThinFenceBlock::~ThinFenceBlock(this);
}
