

int __fastcall BlockOccluder::_shouldOccludeFence(BlockOccluder *this, signed __int8 a2, const AABB *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r5@1
  const AABB *v5; // r4@1
  BlockOccluder *v6; // r6@1
  int result; // r0@2
  char v8; // [sp+8h] [bp-20h]@3

  v4 = a4;
  v5 = a3;
  v6 = this;
  if ( a2 )
  {
    result = 0;
  }
  else
    BlockPos::relative((BlockPos *)&v8, (int)a4, 0, 1);
    result = BlockOccluder::_shouldRenderFace(v6, (const BlockPos *)&v8, 0, v5, v4) ^ 1;
  return result;
}


signed int __fastcall BlockOccluder::_isTransparent(BlockOccluder *this, const BlockPos *a2)
{
  int v2; // r5@1
  signed int v3; // r4@1
  int v4; // r1@1

  v2 = BlockTessellatorCache::getBlock(*((BlockTessellatorCache **)this + 1), a2);
  v3 = 0;
  if ( !Block::hasProperty(v2, v4, 32LL) )
  {
    _R0 = &Block::mTranslucency[*(_BYTE *)(v2 + 4)];
    __asm
    {
      VLDR            S0, [R0]
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v3 = 1;
  }
  return v3;
}


int __fastcall BlockOccluder::_shouldOccludeLiquid(BlockOccluder *this, int a2, const AABB *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r6@1
  int v5; // r7@1
  BlockOccluder *v6; // r10@1
  const AABB *v7; // r8@1
  BlockTessellatorCache *v8; // r5@1
  Block *v9; // r5@1
  int v10; // r9@1
  int v11; // r4@3
  int v12; // r0@3
  BlockGraphics *v13; // r0@5
  const Block *v14; // r1@5
  int *v15; // r4@6
  int v16; // r5@7
  _BYTE *v17; // r11@8
  int v18; // t1@9
  int v19; // r5@10
  const Block *v20; // r1@10
  int v21; // r0@11
  char v23; // [sp+8h] [bp-A0h]@16
  int v24; // [sp+14h] [bp-94h]@9
  int v25; // [sp+18h] [bp-90h]@9
  int v26; // [sp+1Ch] [bp-8Ch]@9
  int v27; // [sp+20h] [bp-88h]@7
  int v28; // [sp+24h] [bp-84h]@7
  int v29; // [sp+28h] [bp-80h]@7
  void *v30; // [sp+2Ch] [bp-7Ch]@6
  signed int v31; // [sp+30h] [bp-78h]@6
  void *v32; // [sp+34h] [bp-74h]@6
  signed int v33; // [sp+38h] [bp-70h]@6
  void *v34; // [sp+3Ch] [bp-6Ch]@6
  signed int v35; // [sp+40h] [bp-68h]@6
  void *v36; // [sp+44h] [bp-64h]@6
  signed int v37; // [sp+48h] [bp-60h]@6
  void *v38; // [sp+4Ch] [bp-5Ch]@6
  signed int v39; // [sp+50h] [bp-58h]@6
  void *v40; // [sp+54h] [bp-54h]@6
  signed int v41; // [sp+58h] [bp-50h]@6
  void *v42; // [sp+5Ch] [bp-4Ch]@6
  signed int v43; // [sp+60h] [bp-48h]@6
  void *v44; // [sp+64h] [bp-44h]@6
  int v45; // [sp+68h] [bp-40h]@6
  int v46; // [sp+6Ch] [bp-3Ch]@5
  int v47; // [sp+70h] [bp-38h]@7
  int v48; // [sp+74h] [bp-34h]@7
  char v49; // [sp+78h] [bp-30h]@1

  v4 = a4;
  v5 = a2;
  v6 = this;
  v7 = a3;
  v8 = (BlockTessellatorCache *)*((_DWORD *)this + 1);
  BlockPos::relative((BlockPos *)&v49, (int)a4, a2, 1);
  v9 = (Block *)BlockTessellatorCache::getBlock(v8, (const BlockPos *)&v49);
  v10 = BlockTessellatorCache::getBlock(*((BlockTessellatorCache **)v6 + 1), v4);
  if ( Block::isType((Block *)v10, (const Block *)Block::mAir) )
    return 0;
  if ( !Block::isType(v9, (const Block *)Block::mAir) )
  {
    v11 = Block::getMaterial(v9);
    v12 = Block::getMaterial((Block *)v10);
    if ( Material::operator==(v11, v12) )
      return 1;
  }
  if ( (unsigned __int8)v5 == 1 )
    BlockPos::relative((BlockPos *)&v46, (int)v4, 1, 1);
    v13 = (BlockGraphics *)BlockTessellatorCache::getBlock(*((BlockTessellatorCache **)v6 + 1), (const BlockPos *)&v46);
    if ( BlockGraphics::isFullAndOpaque(v13, v14) == 1 )
    {
      v30 = &unk_262D2A0;
      v31 = 1;
      v32 = &unk_262D2A1;
      v33 = 1;
      v34 = &unk_262D2A2;
      v35 = 1;
      v36 = &unk_262D2A3;
      v37 = 1;
      v38 = &unk_262D2A4;
      v39 = 2;
      v40 = &unk_262D2A6;
      v41 = 2;
      v42 = &unk_262D2A8;
      v15 = (int *)&v30;
      v43 = 2;
      v44 = &unk_262D2AA;
      v45 = 2;
      while ( 1 )
      {
        v16 = v15[1];
        v27 = v46;
        v28 = v47;
        v29 = v48;
        if ( v16 )
        {
          v17 = (_BYTE *)*v15;
          do
          {
            v18 = *v17++;
            BlockPos::relative((BlockPos *)&v24, (int)&v27, v18, 1);
            --v16;
            v27 = v24;
            v28 = v25;
            v29 = v26;
          }
          while ( v16 );
        }
        v19 = BlockTessellatorCache::getBlock(*((BlockTessellatorCache **)v6 + 1), (const BlockPos *)&v27);
        if ( !BlockGraphics::isFullAndOpaque((BlockGraphics *)v19, v20) )
          v21 = *(_BYTE *)(v19 + 4);
          if ( v21 != *(_BYTE *)(v10 + 4) && v21 != *(_BYTE *)(Block::mFlowingWater + 4) )
            break;
        v15 += 2;
        if ( v15 == &v46 )
          return 1;
      }
    }
  BlockPos::relative((BlockPos *)&v23, (int)v4, v5, 1);
  return BlockOccluder::_shouldRenderFace(v6, (const BlockPos *)&v23, v5, v7, v4) ^ 1;
}


signed int __fastcall BlockOccluder::_shouldOccludeSlab(BlockOccluder *this, int a2, const AABB *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r7@1
  int v5; // r5@1
  BlockOccluder *v6; // r4@1
  const AABB *v7; // r6@1
  SlabBlock *v8; // r0@3
  int v9; // r1@3
  _BOOL4 v10; // r8@3
  int v11; // r5@6
  int v12; // r0@11
  int v13; // r1@11
  SlabBlock *v14; // r0@12
  int v15; // r1@12
  char v17; // [sp+4h] [bp-24h]@1

  v4 = a4;
  v5 = a2;
  v6 = this;
  v7 = a3;
  BlockPos::relative((BlockPos *)&v17, (int)a4, a2, 1);
  if ( (unsigned __int8)v5 >= 2u && BlockOccluder::_shouldRenderFace(v6, (const BlockPos *)&v17, v5, v7, v4) != 1 )
    return 1;
  v8 = (SlabBlock *)BlockTessellatorCache::getData(*((BlockTessellatorCache **)v6 + 1), v4);
  v10 = SlabBlock::isBottomSlab(v8, v9);
  if ( !v10 )
  {
    if ( !v5 || v5 == 1 && BlockOccluder::_shouldRenderFace(v6, (const BlockPos *)&v17, 1, v7, v4) )
      return 0;
LABEL_11:
    v12 = BlockTessellatorCache::getBlock(*((BlockTessellatorCache **)v6 + 1), (const BlockPos *)&v17);
    if ( Block::hasProperty(v12, v13, 2LL) != 1 )
    v14 = (SlabBlock *)BlockTessellatorCache::getData(*((BlockTessellatorCache **)v6 + 1), (const BlockPos *)&v17);
    if ( !v10 == SlabBlock::isBottomSlab(v14, v15) )
  }
  if ( v5 == 1 )
    return 0;
  if ( v5 )
    goto LABEL_11;
  v11 = 0;
  if ( !BlockOccluder::_shouldRenderFace(v6, (const BlockPos *)&v17, 0, v7, v4) )
  return v11;
}


int __fastcall BlockOccluder::_shouldOccludeIce(BlockOccluder *this, int a2, const AABB *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r6@1
  int v5; // r10@1
  BlockOccluder *v6; // r9@1
  const AABB *v7; // r8@1
  BlockTessellatorCache *v8; // r7@1
  int v9; // r4@1
  Block *v10; // r0@1
  int *v11; // r0@1
  char v13; // [sp+8h] [bp-38h]@2
  char v14; // [sp+14h] [bp-2Ch]@1

  v4 = a4;
  v5 = a2;
  v6 = this;
  v7 = a3;
  v8 = (BlockTessellatorCache *)*((_DWORD *)this + 1);
  v9 = 1;
  BlockPos::relative((BlockPos *)&v14, (int)a4, a2, 1);
  v10 = (Block *)BlockTessellatorCache::getBlock(v8, (const BlockPos *)&v14);
  v11 = (int *)Block::getMaterial(v10);
  if ( !Material::isType(v11, 18) )
  {
    BlockPos::relative((BlockPos *)&v13, (int)v4, v5, 1);
    v9 = BlockOccluder::_shouldRenderFace(v6, (const BlockPos *)&v13, v5, v7, v4) ^ 1;
  }
  return v9;
}


_BOOL4 __fastcall BlockOccluder::occludes(BlockOccluder *this, signed __int8 a2)
{
  return (*(_DWORD *)this & (1 << (a2 & 0x1F))) != 0;
}


BlockOccluder *__fastcall BlockOccluder::BlockOccluder(BlockOccluder *this, int a2, Block *a3, BlockPos *a4, AABB *a5, int a6, int a7)
{
  BlockOccluder *v7; // r6@1
  Block *v8; // r5@1
  BlockPos *v9; // r9@1
  int v10; // r7@2
  _BYTE *v11; // r4@3
  int v12; // t1@4

  v7 = this;
  v8 = a3;
  v9 = a4;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = a2;
  if ( !a7 )
  {
    *(_DWORD *)this = 63;
    v10 = *(_DWORD *)(a6 + 4);
    if ( v10 )
    {
      v11 = *(_BYTE **)a6;
      do
      {
        v12 = *v11++;
        BlockOccluder::_updateRenderFace(v7, v8, v9, a5, v12);
        --v10;
      }
      while ( v10 );
    }
  }
  return v7;
}


int __fastcall BlockOccluder::_updateRenderFace(BlockOccluder *this, const Block *a2, const BlockPos *a3, const AABB *a4, int a5)
{
  BlockOccluder *v5; // r4@1
  const AABB *v6; // r8@1
  const BlockPos *v7; // r7@1
  Block *v8; // r6@1
  int result; // r0@3
  int v10; // r1@4
  signed int v11; // r0@5
  int v12; // r1@6
  int v13; // r1@8
  int v14; // r0@12
  Material *v15; // r0@13
  int v16; // r1@13
  signed int v17; // r1@17
  int *v18; // r0@23
  BlockTessellatorCache *v19; // r6@24
  Block *v20; // r0@24
  int *v21; // r0@24
  bool v22; // zf@24
  signed int v23; // r0@29
  char v24; // [sp+8h] [bp-38h]@26
  char v25; // [sp+14h] [bp-2Ch]@20

  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  if ( (unsigned __int8)a5 != 1 && *((_DWORD *)a3 + 1) <= -1 )
  {
    result = *(_DWORD *)this | (1 << (a5 & 0x1F));
    goto LABEL_32;
  }
  if ( Block::hasProperty((int)a2, (int)a2, 2LL) == 1 )
    v11 = BlockOccluder::_shouldOccludeSlab(v5, a5, v6, v7);
    goto LABEL_17;
  if ( Block::hasProperty((int)v8, v10, 32LL) == 1 )
    v11 = BlockOccluder::_shouldOccludeLeaves(v5, a5, v6, v7);
  if ( Block::hasProperty((int)v8, v12, 64LL) == 1 )
    v11 = BlockOccluder::_shouldOccludeThinFence(v5, a5, v6, v7);
  if ( Block::hasProperty((int)v8, v13, 128LL) != 1 )
    v15 = (Material *)Block::getMaterial(v8);
    if ( Material::isLiquid(v15) == 1 )
    {
      v11 = BlockOccluder::_shouldOccludeLiquid(v5, a5, v6, v7);
    }
    else
      if ( Block::hasProperty((int)v8, v16, 2048LL) != 1 )
      {
        v18 = (int *)Block::getMaterial(v8);
        if ( Material::isType(v18, 18) != 1 )
        {
          BlockPos::relative((BlockPos *)&v25, (int)v7, a5, 1);
          v23 = BlockOccluder::_shouldRenderFace(v5, (const BlockPos *)&v25, a5, v6, v7);
          v17 = 1 << (a5 & 0x1F);
          if ( !v23 )
          {
LABEL_31:
            result = *(_DWORD *)v5 | v17;
            goto LABEL_32;
          }
LABEL_30:
          result = *(_DWORD *)v5 & ~v17;
          goto LABEL_32;
        }
        v19 = (BlockTessellatorCache *)*((_DWORD *)v5 + 1);
        BlockPos::relative((BlockPos *)&v25, (int)v7, a5, 1);
        v20 = (Block *)BlockTessellatorCache::getBlock(v19, (const BlockPos *)&v25);
        v21 = (int *)Block::getMaterial(v20);
        v22 = Material::isType(v21, 18) == 0;
        v11 = 1;
        if ( v22 )
          BlockPos::relative((BlockPos *)&v24, (int)v7, a5, 1);
          v11 = BlockOccluder::_shouldRenderFace(v5, (const BlockPos *)&v24, a5, v6, v7) ^ 1;
        v17 = 1 << (a5 & 0x1F);
LABEL_18:
        if ( v11 == 1 )
          goto LABEL_31;
        goto LABEL_30;
      }
      v11 = BlockOccluder::_shouldOccludePortal(v5, a5, v6, v7);
LABEL_17:
    v17 = 1 << (a5 & 0x1F);
    goto LABEL_18;
  if ( (_BYTE)a5 )
    v14 = ~(1 << (a5 & 0x1F));
  else
    BlockPos::relative((BlockPos *)&v25, (int)v7, 0, 1);
    if ( !BlockOccluder::_shouldRenderFace(v5, (const BlockPos *)&v25, 0, v6, v7) )
      result = *(_DWORD *)v5 | 1;
      goto LABEL_32;
    v14 = -2;
  result = v14 & *(_DWORD *)v5;
LABEL_32:
  *(_DWORD *)v5 = result;
  return result;
}


signed int __fastcall BlockOccluder::isDeepLeafBlock(BlockOccluder *this, const BlockPos *a2)
{
  BlockOccluder *v2; // r4@1
  const BlockPos *v3; // r5@1
  int v4; // r1@2
  int v5; // r2@2
  int v6; // r6@2
  int v7; // r1@2
  int v13; // r2@5
  int v14; // r6@5
  int v15; // r1@5
  int v17; // r2@8
  int v18; // r6@8
  int v19; // r1@8
  int v21; // r1@11
  int v22; // r2@11
  int v23; // r6@11
  int v24; // r1@11
  int v26; // r1@14
  int v27; // r2@14
  int v28; // r6@14
  int v29; // r1@14
  int v31; // r2@17
  int v32; // r3@17
  BlockTessellatorCache *v33; // r0@17
  int v34; // r4@17
  int v35; // r1@17
  signed int result; // r0@19
  int v38; // [sp+0h] [bp-58h]@17
  int v39; // [sp+4h] [bp-54h]@17
  int v40; // [sp+8h] [bp-50h]@17
  int v41; // [sp+Ch] [bp-4Ch]@14
  int v42; // [sp+10h] [bp-48h]@14
  int v43; // [sp+14h] [bp-44h]@14
  int v44; // [sp+18h] [bp-40h]@11
  int v45; // [sp+1Ch] [bp-3Ch]@11
  int v46; // [sp+20h] [bp-38h]@11
  __int64 v47; // [sp+24h] [bp-34h]@8
  int v48; // [sp+2Ch] [bp-2Ch]@8
  __int64 v49; // [sp+30h] [bp-28h]@5
  int v50; // [sp+38h] [bp-20h]@5
  int v51; // [sp+3Ch] [bp-1Ch]@2
  int v52; // [sp+40h] [bp-18h]@2
  int v53; // [sp+44h] [bp-14h]@2

  v2 = this;
  v3 = a2;
  if ( Block::getRenderLayer((Block *)Block::mLeaves) == 3 )
    goto LABEL_23;
  v4 = *((_DWORD *)v3 + 1);
  v5 = *((_DWORD *)v3 + 2);
  v51 = *(_DWORD *)v3;
  v52 = v4 - 1;
  v53 = v5;
  v6 = BlockTessellatorCache::getBlock(*((BlockTessellatorCache **)v2 + 1), (const BlockPos *)&v51);
  if ( !Block::hasProperty(v6, v7, 32LL) )
  {
    _R0 = &Block::mTranslucency[*(_BYTE *)(v6 + 4)];
    __asm
    {
      VLDR            S0, [R0]
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      goto LABEL_24;
  }
  v13 = *((_DWORD *)v3 + 2);
  v49 = *(_QWORD *)v3;
  v50 = v13 - 1;
  v14 = BlockTessellatorCache::getBlock(*((BlockTessellatorCache **)v2 + 1), (const BlockPos *)&v49);
  if ( !Block::hasProperty(v14, v15, 32LL) )
    _R0 = &Block::mTranslucency[*(_BYTE *)(v14 + 4)];
  v17 = *((_DWORD *)v3 + 2);
  v47 = *(_QWORD *)v3;
  v48 = v17 + 1;
  v18 = BlockTessellatorCache::getBlock(*((BlockTessellatorCache **)v2 + 1), (const BlockPos *)&v47);
  if ( !Block::hasProperty(v18, v19, 32LL) )
    _R0 = &Block::mTranslucency[*(_BYTE *)(v18 + 4)];
  v21 = *((_DWORD *)v3 + 1);
  v22 = *((_DWORD *)v3 + 2);
  v44 = *(_DWORD *)v3 - 1;
  v45 = v21;
  v46 = v22;
  v23 = BlockTessellatorCache::getBlock(*((BlockTessellatorCache **)v2 + 1), (const BlockPos *)&v44);
  if ( !Block::hasProperty(v23, v24, 32LL) )
    _R0 = &Block::mTranslucency[*(_BYTE *)(v23 + 4)];
  v26 = *((_DWORD *)v3 + 1);
  v27 = *((_DWORD *)v3 + 2);
  v41 = *(_DWORD *)v3 + 1;
  v42 = v26;
  v43 = v27;
  v28 = BlockTessellatorCache::getBlock(*((BlockTessellatorCache **)v2 + 1), (const BlockPos *)&v41);
  if ( !Block::hasProperty(v28, v29, 32LL) )
    _R0 = &Block::mTranslucency[*(_BYTE *)(v28 + 4)];
  v31 = *((_DWORD *)v3 + 1);
  v32 = *((_DWORD *)v3 + 2);
  v33 = (BlockTessellatorCache *)*((_DWORD *)v2 + 1);
  v38 = *(_DWORD *)v3;
  v39 = v31 + 1;
  v40 = v32;
  v34 = BlockTessellatorCache::getBlock(v33, (const BlockPos *)&v38);
  if ( Block::hasProperty(v34, v35, 40LL) )
  _R0 = &Block::mTranslucency[*(_BYTE *)(v34 + 4)];
  __asm
    VLDR            S0, [R0]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_23:
    result = 1;
  else
LABEL_24:
    result = 0;
  return result;
}


signed int __fastcall BlockOccluder::_shouldRenderFace(BlockOccluder *this, const BlockPos *a2, int a3, const AABB *a4, const BlockPos *a5)
{
  char v5; // r5@1
  const BlockPos *v7; // r8@1
  BlockTessellatorCache **v11; // r7@4
  int v12; // r6@4
  signed int v13; // r10@5
  int v14; // r4@15
  int v15; // r0@15
  int v17; // r4@22
  unsigned int v18; // r5@25
  signed int result; // r0@26
  BlockTessellatorCache *v20; // r0@29
  int (__fastcall *v21)(int, unsigned int, float *, _DWORD); // r7@29
  unsigned int v22; // r0@29
  int v23; // r0@29
  float v24; // r1@29
  float v25; // r2@29
  float v26; // r3@29
  float v27; // r2@29
  float v28; // r3@29
  int v29; // r7@29
  float v30; // [sp+0h] [bp-40h]@29
  float v31; // [sp+4h] [bp-3Ch]@29
  float v32; // [sp+8h] [bp-38h]@29
  float v33; // [sp+Ch] [bp-34h]@29
  float v34; // [sp+10h] [bp-30h]@29
  float v35; // [sp+14h] [bp-2Ch]@29
  int v36; // [sp+18h] [bp-28h]@29

  v5 = a3;
  _R9 = a4;
  v7 = a2;
  if ( (_BYTE)a3 )
  {
    switch ( a3 )
    {
      case 1:
        __asm
        {
          VLDR            S0, =0.9995; jumptable 0133F9CA case 1
          VLDR            S2, [R9,#0x10]
          VCMPE.F32       S2, S0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
          return 1;
        v11 = (BlockTessellatorCache **)((char *)this + 4);
        v12 = BlockTessellatorCache::getBlock(*((BlockTessellatorCache **)this + 1), a2);
        if ( Block::isType((Block *)v12, (const Block *)Block::mWoolCarpet) )
          return 0;
        v13 = 1;
        goto LABEL_15;
      case 2:
          VLDR            S0, =0.0005; jumptable 0133F9CA case 2
          VLDR            S2, [R9,#8]
        goto LABEL_10;
      case 3:
          VLDR            S0, =0.9995; jumptable 0133F9CA case 3
          VLDR            S2, [R9,#0x14]
        goto LABEL_13;
      case 4:
          VLDR            S0, =0.0005; jumptable 0133F9CA case 4
          VLDR            S2, [R9]
      case 5:
          VLDR            S0, =0.9995; jumptable 0133F9CA case 5
          VLDR            S2, [R9,#0xC]
LABEL_13:
        if ( !(_NF ^ _VF) )
          break;
        return 1;
      default:
        break;
    }
  }
  else
    __asm
      VLDR            S0, =0.0005
      VLDR            S2, [R9,#4]
LABEL_10:
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      return 1;
  v11 = (BlockTessellatorCache **)((char *)this + 4);
  v12 = BlockTessellatorCache::getBlock(*((BlockTessellatorCache **)this + 1), a2);
  v13 = 0;
LABEL_15:
  v14 = Block::getRenderLayer((Block *)v12);
  v15 = BlockGraphics::getBlockShape((BlockGraphics *)BlockGraphics::mBlocks[*(_BYTE *)(v12 + 4)]);
  _ZF = v14 == 6;
  if ( v14 != 6 )
    _ZF = v14 == 3;
  if ( !_ZF || (unsigned int)(v15 - 67) >= 2 && (v15 || Block::isSolid((Block *)v12)) )
    v17 = BlockGraphics::mBlocks[*(_BYTE *)(v12 + 4)];
    if ( BlockGraphics::isFull((BlockGraphics *)v17) != 1 )
    if ( !BlockGraphics::isFullAndOpaque((BlockGraphics *)v17) )
      if ( *(_BYTE *)(BlockTessellatorCache::getBlock(*v11, a5) + 4) == *(_BYTE *)(v12 + 4) )
      {
        v18 = BlockTessellatorCache::getData(*v11, a5);
        if ( v18 == BlockTessellatorCache::getData(*v11, v7) )
          result = *(_BYTE *)(v17 + 49);
          if ( *(_BYTE *)(v17 + 49) )
            result = 1;
          return result;
      }
    return 0;
  v20 = *v11;
  v21 = *(int (__fastcall **)(int, unsigned int, float *, _DWORD))(*(_DWORD *)v12 + 420);
  v22 = BlockTessellatorCache::getData(v20, v7);
  v23 = v21(v12, v22, &v30, 0);
  v24 = *(float *)v23;
  v25 = *(float *)(v23 + 4);
  v26 = *(float *)(v23 + 8);
  v23 += 12;
  v30 = v24;
  v31 = v25;
  v32 = v26;
  v27 = *(float *)(v23 + 4);
  v28 = *(float *)(v23 + 8);
  v29 = *(_DWORD *)(v23 + 12);
  v33 = *(float *)v23;
  v34 = v27;
  v35 = v28;
  v36 = v29;
  __asm
    VLDR            S0, [SP,#0x40+var_40]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    return 1;
    VMOV.F32        S0, #1.0
    VLDR            S2, [SP,#0x40+var_34]
    VCMPE.F32       S2, S0
  if ( _NF ^ _VF )
    VLDR            S2, [SP,#0x40+var_38]
    VCMPE.F32       S2, #0.0
    VLDR            S2, [SP,#0x40+var_2C]
  if ( v13 == 1 )
    __asm { VLDR            S0, [SP,#0x40+var_3C] }
    result = 0;
      VCMPE.F32       S0, #0.0
      result = 1;
    if ( v5 )
      __asm
        VLDR            S0, [SP,#0x40+var_30]
        VLDR            S2, [R9,#0x10]
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) || LODWORD(v31) & 0x7FFFFFFF )
      return 0;
    __asm { VLDR            S2, [SP,#0x40+var_30] }
    if ( _NF ^ _VF )
  return result;
}


signed int __fastcall BlockOccluder::anyVisible(BlockOccluder *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *(_DWORD *)this;
  result = 0;
  if ( v1 != 63 )
    result = 1;
  return result;
}


int __fastcall BlockOccluder::_shouldOccludeThinFence(BlockOccluder *this, int a2, const AABB *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r6@1
  int v5; // r10@1
  BlockOccluder *v6; // r7@1
  const AABB *v7; // r8@1
  BlockTessellatorCache *v8; // r4@1
  int v9; // r4@1
  int v10; // r9@1
  int result; // r0@3
  char v12; // [sp+8h] [bp-38h]@4
  char v13; // [sp+14h] [bp-2Ch]@1

  v4 = a4;
  v5 = a2;
  v6 = this;
  v7 = a3;
  v8 = (BlockTessellatorCache *)*((_DWORD *)this + 1);
  BlockPos::relative((BlockPos *)&v13, (int)a4, a2, 1);
  v9 = BlockTessellatorCache::getBlock(v8, (const BlockPos *)&v13);
  v10 = BlockTessellatorCache::getBlock(*((BlockTessellatorCache **)v6 + 1), v4);
  if ( Block::isType((Block *)v9, (const Block *)Block::mAir) || *(_BYTE *)(v10 + 4) != *(_BYTE *)(v9 + 4) )
  {
    BlockPos::relative((BlockPos *)&v12, (int)v4, v5, 1);
    result = BlockOccluder::_shouldRenderFace(v6, (const BlockPos *)&v12, v5, v7, v4) ^ 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall BlockOccluder::_shouldOcclude(BlockOccluder *this, int a2, const AABB *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r4@1
  int v5; // r6@1
  const AABB *v6; // r5@1
  BlockOccluder *v7; // r7@1
  char v9; // [sp+4h] [bp-24h]@1

  v4 = a4;
  v5 = a2;
  v6 = a3;
  v7 = this;
  BlockPos::relative((BlockPos *)&v9, (int)a4, a2, 1);
  return BlockOccluder::_shouldRenderFace(v7, (const BlockPos *)&v9, v5, v6, v4) ^ 1;
}


signed int __fastcall BlockOccluder::_shouldOccludeLeaves(BlockOccluder *this, int a2, const AABB *a3, const BlockPos *a4)
{
  BlockOccluder *v4; // r6@1
  const BlockPos *v5; // r5@1
  const AABB *v6; // r7@1
  int v7; // r8@1
  signed int v8; // r5@2
  BlockGraphics *v9; // r7@3
  signed int v10; // r4@3
  const Block *v11; // r1@3
  int v12; // r1@6
  SlabBlock *v13; // r0@13
  int v14; // r1@13
  int v15; // r0@13
  signed int v16; // r1@18
  char v18; // [sp+4h] [bp-24h]@2

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( Block::getRenderLayer((Block *)Block::mLeaves) == 3 )
  {
    BlockPos::relative((BlockPos *)&v18, (int)v5, v7, 1);
    v8 = BlockOccluder::_shouldRenderFace(v4, (const BlockPos *)&v18, v7, v6, v5) ^ 1;
  }
  else
    v9 = (BlockGraphics *)BlockTessellatorCache::getBlock(*((BlockTessellatorCache **)v4 + 1), (const BlockPos *)&v18);
    v10 = BlockOccluder::isDeepLeafBlock(v4, v5);
    v8 = BlockGraphics::isFullAndOpaque(v9, v11);
    if ( !v10 )
    {
      if ( Block::isType(v9, (const Block *)Block::mAir) )
      {
        v8 = 0;
      }
      else if ( Block::isType(v9, (const Block *)Block::mInvisibleBedrock) )
        v8 = 1;
      else if ( Block::hasProperty((int)v9, v12, 32LL) == 1 )
        if ( BlockOccluder::isDeepLeafBlock(v4, (const BlockPos *)&v18) )
        {
          v8 = 1;
        }
        else if ( (unsigned __int8)(v7 - 1) >= 4u )
          v8 = 0;
        else
          v8 = (0xBu >> ((v7 - 1) & 0xF)) & 1;
      else if ( Block::isType(v9, (const Block *)Block::mStoneSlab)
             || Block::isType(v9, (const Block *)Block::mWoodenSlab) == 1 )
        v13 = (SlabBlock *)BlockTessellatorCache::getData(*((BlockTessellatorCache **)v4 + 1), (const BlockPos *)&v18);
        v15 = !SlabBlock::isBottomSlab(v13, v14);
        if ( v7 != 1 || v15 == 1 )
          v16 = 0;
          if ( !(_BYTE)v7 )
            v16 = 1;
          v8 |= v15 & v16;
    }
  return v8;
}


int __fastcall BlockOccluder::_setOccluded(int result, signed __int8 a2, int a3)
{
  bool v3; // zf@1
  int v4; // r2@1
  signed int v5; // r1@1
  int v6; // r1@2

  v3 = a3 == 1;
  v4 = *(_DWORD *)result;
  v5 = 1 << (a2 & 0x1F);
  if ( v3 )
    v6 = v5 | v4;
  else
    v6 = v4 & ~v5;
  *(_DWORD *)result = v6;
  return result;
}


int __fastcall BlockOccluder::_shouldOccludePortal(BlockOccluder *this, int a2, const AABB *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r6@1
  int v5; // r5@1
  BlockOccluder *v6; // r9@1
  const AABB *v7; // r8@1
  BlockTessellatorCache *v8; // r4@1
  Block *v9; // r4@1
  int v10; // r1@1
  int result; // r0@3
  char v12; // [sp+4h] [bp-Ch]@4
  int v13; // [sp+10h] [bp+0h]@1

  v4 = a4;
  v5 = a2;
  v6 = this;
  v7 = a3;
  v8 = (BlockTessellatorCache *)*((_DWORD *)this + 1);
  BlockPos::relative((BlockPos *)&v13, (int)a4, a2, 1);
  v9 = (Block *)BlockTessellatorCache::getBlock(v8, (const BlockPos *)&v13);
  if ( Block::isType(v9, (const Block *)Block::mAir) || !Block::hasProperty((int)v9, v10, 2048LL) )
  {
    BlockPos::relative((BlockPos *)&v12, (int)v4, v5, 1);
    result = BlockOccluder::_shouldRenderFace(v6, (const BlockPos *)&v12, v5, v7, v4) ^ 1;
  }
  else
    result = 1;
  return result;
}


int __fastcall BlockOccluder::_isHalfCubeOpaque(BlockOccluder *this, const Block *a2)
{
  const Block *v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  bool v5; // zf@1
  int result; // r0@4

  v2 = a2;
  v3 = Block::getRenderLayer(a2);
  v4 = BlockGraphics::getBlockShape((BlockGraphics *)BlockGraphics::mBlocks[*((_BYTE *)v2 + 4)]);
  v5 = v3 == 6;
  if ( v3 != 6 )
    v5 = v3 == 3;
  if ( v5 )
  {
    if ( (unsigned int)(v4 - 67) >= 2 )
    {
      if ( v4 )
        result = 0;
      else
        result = Block::isSolid(v2) ^ 1;
    }
    else
      result = 1;
  }
  else
    result = 0;
  return result;
}
