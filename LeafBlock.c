

signed int __fastcall LeafBlock::getResourceCount(LeafBlock *this, Random *a2, int a3, int a4)
{
  unsigned int v4; // r1@1
  signed int result; // r0@1

  v4 = j_Random::_genRandInt32(a2) % 0x14;
  result = 0;
  if ( !v4 )
    result = 1;
  return result;
}


signed int __fastcall LeafBlock::isDeepLeafBlock(LeafBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  BlockSource *v4; // r4@1
  int v5; // r0@1
  int v6; // r1@1
  int v7; // r2@1
  int v8; // r6@1
  int v9; // r1@1
  int v15; // r2@4
  int v16; // r6@4
  int v17; // r1@4
  int v19; // r2@7
  int v20; // r6@7
  int v21; // r1@7
  int v23; // r1@10
  int v24; // r2@10
  int v25; // r6@10
  int v26; // r1@10
  int v28; // r1@13
  int v29; // r2@13
  int v30; // r6@13
  int v31; // r1@13
  int v33; // r1@16
  int v34; // r2@16
  int v35; // r4@16
  int v36; // r1@16
  signed int result; // r0@18
  int v39; // [sp+0h] [bp-58h]@16
  int v40; // [sp+4h] [bp-54h]@16
  int v41; // [sp+8h] [bp-50h]@16
  int v42; // [sp+Ch] [bp-4Ch]@13
  int v43; // [sp+10h] [bp-48h]@13
  int v44; // [sp+14h] [bp-44h]@13
  int v45; // [sp+18h] [bp-40h]@10
  int v46; // [sp+1Ch] [bp-3Ch]@10
  int v47; // [sp+20h] [bp-38h]@10
  __int64 v48; // [sp+24h] [bp-34h]@7
  int v49; // [sp+2Ch] [bp-2Ch]@7
  __int64 v50; // [sp+30h] [bp-28h]@4
  int v51; // [sp+38h] [bp-20h]@4
  int v52; // [sp+3Ch] [bp-1Ch]@1
  int v53; // [sp+40h] [bp-18h]@1
  int v54; // [sp+44h] [bp-14h]@1

  v3 = a2;
  v4 = this;
  v5 = *(_DWORD *)a2;
  v6 = *((_DWORD *)a2 + 1);
  v7 = *((_DWORD *)v3 + 2);
  v52 = v5;
  v53 = v6 - 1;
  v54 = v7;
  v8 = j_BlockSource::getBlock(v4, (const BlockPos *)&v52);
  if ( !j_Block::hasProperty(v8, v9, 32LL) )
  {
    _R0 = &Block::mTranslucency[*(_BYTE *)(v8 + 4)];
    __asm
    {
      VLDR            S0, [R0]
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      goto LABEL_22;
  }
  v15 = *((_DWORD *)v3 + 2);
  v50 = *(_QWORD *)v3;
  v51 = v15 - 1;
  v16 = j_BlockSource::getBlock(v4, (const BlockPos *)&v50);
  if ( !j_Block::hasProperty(v16, v17, 32LL) )
    _R0 = &Block::mTranslucency[*(_BYTE *)(v16 + 4)];
  v19 = *((_DWORD *)v3 + 2);
  v48 = *(_QWORD *)v3;
  v49 = v19 + 1;
  v20 = j_BlockSource::getBlock(v4, (const BlockPos *)&v48);
  if ( !j_Block::hasProperty(v20, v21, 32LL) )
    _R0 = &Block::mTranslucency[*(_BYTE *)(v20 + 4)];
  v23 = *((_DWORD *)v3 + 1);
  v24 = *((_DWORD *)v3 + 2);
  v45 = *(_DWORD *)v3 - 1;
  v46 = v23;
  v47 = v24;
  v25 = j_BlockSource::getBlock(v4, (const BlockPos *)&v45);
  if ( !j_Block::hasProperty(v25, v26, 32LL) )
    _R0 = &Block::mTranslucency[*(_BYTE *)(v25 + 4)];
  v28 = *((_DWORD *)v3 + 1);
  v29 = *((_DWORD *)v3 + 2);
  v42 = *(_DWORD *)v3 + 1;
  v43 = v28;
  v44 = v29;
  v30 = j_BlockSource::getBlock(v4, (const BlockPos *)&v42);
  if ( !j_Block::hasProperty(v30, v31, 32LL) )
    _R0 = &Block::mTranslucency[*(_BYTE *)(v30 + 4)];
  v33 = *((_DWORD *)v3 + 1);
  v34 = *((_DWORD *)v3 + 2);
  v39 = *(_DWORD *)v3;
  v40 = v33 + 1;
  v41 = v34;
  v35 = j_BlockSource::getBlock(v4, (const BlockPos *)&v39);
  if ( j_Block::hasProperty(v35, v36, 40LL) )
    goto LABEL_23;
  _R0 = &Block::mTranslucency[*(_BYTE *)(v35 + 4)];
  __asm
    VLDR            S0, [R0]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_23:
    result = 1;
  else
LABEL_22:
    result = 0;
  return result;
}


unsigned int __fastcall LeafBlock::getColor(LeafBlock *this, BlockSource *a2, const BlockPos *a3, unsigned __int8 a4)
{
  BlockSource *v4; // r8@1
  const BlockPos *v5; // r4@1
  unsigned int result; // r0@2
  signed int v7; // r10@3
  signed int v8; // r7@3
  signed int v9; // r6@3
  signed int v10; // r5@3
  __int64 v11; // r0@4
  int v12; // r2@4
  int v13; // r0@4
  int v14; // r0@4
  int v15; // r10@4
  int v16; // r6@4
  int v17; // off@4
  int v18; // r11@4
  int v19; // off@4
  int v20; // r1@5
  int v21; // r2@5
  int v22; // r0@5
  int v23; // r0@5
  int v24; // off@5
  int v25; // off@5
  __int64 v26; // r0@6
  int v27; // r2@6
  int v28; // r0@6
  int v29; // r0@6
  int v30; // off@6
  int v31; // off@6
  __int64 v38; // [sp+8h] [bp-40h]@4
  int v39; // [sp+10h] [bp-38h]@4
  char v40; // [sp+14h] [bp-34h]@2

  v4 = a2;
  v5 = a3;
  if ( (*(int (**)(void))(*(_DWORD *)this + 400))() )
  {
    j_LeafBlock::getSeasonsColor((LeafBlock *)&v40, (BlockSource *)5, v4, (int)v5, 5, 7);
    result = j_Color::toARGB((Color *)&v40);
  }
  else
    v7 = 0;
    v8 = -4;
    v9 = 0;
    v10 = 0;
    do
    {
      HIDWORD(v11) = *((_DWORD *)v5 + 1);
      v12 = *((_DWORD *)v5 + 2);
      LODWORD(v11) = *(_DWORD *)v5 + v8;
      v38 = v11;
      v39 = v12 - 4;
      v13 = j_BlockSource::getBiome(v4, (const BlockPos *)&v38);
      v14 = (*(int (**)(void))(*(_DWORD *)v13 + 44))();
      v15 = v7 + v14;
      v17 = __ROR4__(v14, 8);
      v16 = v9 + v17;
      v19 = __ROR4__(v14, 16);
      v18 = v10 + v19;
      if ( v8 )
      {
        v20 = *((_DWORD *)v5 + 1);
        v21 = *((_DWORD *)v5 + 2);
        LODWORD(v38) = *(_DWORD *)v5 + v8;
        HIDWORD(v38) = v20;
        v39 = v21;
        v22 = j_BlockSource::getBiome(v4, (const BlockPos *)&v38);
        v23 = (*(int (**)(void))(*(_DWORD *)v22 + 44))();
        v15 += v23;
        v24 = __ROR4__(v23, 8);
        v16 += v24;
        v25 = __ROR4__(v23, 16);
        v18 += v25;
      }
      HIDWORD(v26) = *((_DWORD *)v5 + 1);
      v27 = *((_DWORD *)v5 + 2);
      LODWORD(v26) = *(_DWORD *)v5 + v8;
      v38 = v26;
      v39 = v27 + 4;
      v28 = j_BlockSource::getBiome(v4, (const BlockPos *)&v38);
      v29 = (*(int (**)(void))(*(_DWORD *)v28 + 44))();
      v30 = __ROR4__(v29, 8);
      v9 = v16 + v30;
      v8 += 4;
      v7 = v15 + v29;
      v31 = __ROR4__(v29, 16);
      v10 = v18 + v31;
    }
    while ( v8 != 8 );
    _R0 = (v10 + ((unsigned int)(v10 >> 31) >> 29)) << 13;
    __asm { UXTB16.W        R0, R0 }
    result = _R0 & 0xFFFF00FF | ((v9 / 8 & 0xFF) << 8) | ((v7 + ((unsigned int)(v7 >> 31) >> 29)) >> 3) & 0xFF;
  return result;
}


void __fastcall LeafBlock::~LeafBlock(LeafBlock *this)
{
  Block *v1; // r0@1

  v1 = j_Block::~Block(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall LeafBlock::runDecay(LeafBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  BlockSource *v6; // r9@1
  Level *v7; // r0@1
  int result; // r0@1
  BlockSource *v14; // r4@4
  int v15; // r6@4
  int v16; // r7@5
  int v17; // r8@6
  int v18; // r1@7
  int v19; // r2@7
  int v20; // r1@7
  BlockState *v21; // r0@8
  BlockSource *v22; // r7@8
  int v23; // r5@8
  char v24; // r11@8
  BlockSource *v25; // r6@8
  signed int v26; // r4@8
  char v27; // r0@8
  int v28; // r2@8
  int v29; // r3@8
  int v30; // [sp+8h] [bp-B0h]@3
  int v31; // [sp+10h] [bp-A8h]@6
  const BlockPos *v32; // [sp+14h] [bp-A4h]@3
  char v33; // [sp+18h] [bp-A0h]@8
  char v34; // [sp+19h] [bp-9Fh]@8
  int v35; // [sp+1Ch] [bp-9Ch]@8
  int v36; // [sp+20h] [bp-98h]@8
  int v37; // [sp+24h] [bp-94h]@8
  int v38; // [sp+28h] [bp-90h]@7
  int v39; // [sp+2Ch] [bp-8Ch]@7
  int v40; // [sp+30h] [bp-88h]@7
  char v41; // [sp+34h] [bp-84h]@4
  char v42; // [sp+35h] [bp-83h]@8
  float v43; // [sp+38h] [bp-80h]@2
  char v44; // [sp+44h] [bp-74h]@2
  char v45; // [sp+60h] [bp-58h]@2
  char v46; // [sp+6Ch] [bp-4Ch]@2
  char v47; // [sp+78h] [bp-40h]@2

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = (Level *)j_BlockSource::getLevel(this);
  result = j_Level::isClientSide(v7);
  if ( !result )
  {
    j_Vec3::Vec3((int)&v46, (int)v5);
    j_Vec3::Vec3((int)&v45, (int)v5);
    j_AABB::AABB((int)&v47, (int)&v46, (int)&v45);
    _R0 = (int)v4 + 1;
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VSTR            S0, [SP,#0xB8+var_80]
      VSTR            S0, [SP,#0xB8+var_7C]
      VSTR            S0, [SP,#0xB8+var_78]
    }
    j_AABB::grow((AABB *)&v44, (const Vec3 *)&v47, (int)&v43);
    result = j_BlockSource::hasChunksAt(v6, (const AABB *)&v44);
    if ( result == 1 )
      result = -(signed int)v4;
      v32 = v4;
      v30 = -(signed int)v4;
      if ( -(signed int)v4 <= (signed int)v4 )
      {
        v14 = (BlockSource *)&v41;
        v15 = v30;
        do
        {
          v16 = v30;
          do
          {
            v17 = v30;
            v31 = v16;
            do
            {
              v18 = *((_DWORD *)v5 + 1);
              v19 = *((_DWORD *)v5 + 2);
              v38 = *(_DWORD *)v5 + v15;
              v39 = v18 + v16;
              v40 = v17 + v19;
              j_BlockSource::getBlockAndData(v14, v6, (int)&v38);
              if ( j_BlockID::hasProperty(v14, v20, 32, 0) == 1 )
              {
                v21 = (BlockState *)j_Block::getBlockState(Block::mLeaves, 39);
                v22 = v5;
                v23 = v15;
                v24 = v42;
                v25 = v14;
                v26 = 1 << (*(_QWORD *)v21 + 1 - (unsigned int)(*(_QWORD *)v21 >> 32));
                v27 = v24 & ~(unsigned __int8)j_BlockState::getMask(v21) | v26;
                v14 = v25;
                v15 = v23;
                v5 = v22;
                v16 = v31;
                v42 = v27;
                v28 = *((_DWORD *)v5 + 1);
                v29 = *((_DWORD *)v5 + 2);
                v35 = *(_DWORD *)v5 + v15;
                v36 = v28 + v31;
                v37 = v17 + v29;
                v33 = v41;
                v34 = v27;
                j_BlockSource::setBlockAndData((int)v6, (BlockPos *)&v35, (int)&v33, 4, 0);
              }
              _VF = __OFSUB__(v17, v32);
              _NF = v17++ - (signed int)v32 < 0;
            }
            while ( _NF ^ _VF );
            _VF = __OFSUB__(v16, v32);
            _NF = v16++ - (signed int)v32 < 0;
          }
          while ( _NF ^ _VF );
          result = v15 + 1;
          _VF = __OFSUB__(v15, v32);
          _NF = v15++ - (signed int)v32 < 0;
        }
        while ( _NF ^ _VF );
      }
  }
  return result;
}


int __fastcall LeafBlock::onRemove(LeafBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  Block *v6; // r6@1

  v4 = a3;
  v5 = a2;
  v6 = this;
  j_LeafBlock::runDecay(a2, a3, (const BlockPos *)1, a4);
  return j_j_j__ZNK5Block8onRemoveER11BlockSourceRK8BlockPos_0(v6, v5, v4);
}


int __fastcall LeafBlock::onGraphicsModeChanged(LeafBlock *this, bool a2, bool a3, bool a4)
{
  Block *v4; // r7@1
  bool v5; // r4@1
  bool v6; // r5@1
  bool v7; // r6@1
  void *v8; // r0@2
  signed int v9; // r1@4
  void (__fastcall *v10)(Block *, char *); // r2@6
  char v12; // [sp+0h] [bp-18h]@6

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  *((_BYTE *)this + 641) = a4;
  if ( *(_DWORD *)j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v8 = j_ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v8 = &ServiceLocator<AppPlatform>::mDefaultService;
  *((_BYTE *)v4 + 642) = (*(int (**)(void))(**(_DWORD **)v8 + 116))();
  v9 = 3;
  if ( *((_BYTE *)v4 + 641) )
    v9 = 7;
  *((_DWORD *)v4 + 5) = v9;
  v10 = *(void (__fastcall **)(Block *, char *))(*(_DWORD *)v4 + 456);
  v12 = 1;
  v10(v4, &v12);
  return j_Block::onGraphicsModeChanged(v4, v7, v6, v5);
}


int __fastcall LeafBlock::LeafBlock(int a1, const void **a2, char a3)
{
  int v3; // r4@1
  char v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  __int64 v7; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = j_Material::getMaterial(7);
  j_Block::Block(v3, v5, v4, v6);
  *(_DWORD *)v3 = &off_272315C;
  *(_WORD *)(v3 + 641) = 0;
  j_Block::setTicking((Block *)v3, 1);
  j_Block::setSolid((Block *)v3, 0);
  j_Block::setPushesOutItems((Block *)v3, 1);
  *(_DWORD *)(v3 + 20) = 7;
  *(_DWORD *)(v3 + 40) = 1061997773;
  v7 = *(_QWORD *)(v3 + 24);
  *(_DWORD *)(v3 + 28) = HIDWORD(v7);
  *(_DWORD *)(v3 + 24) = v7 | 0x2000020;
  return v3;
}


int __fastcall LeafBlock::getMapColor(LeafBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  int v4; // r5@1
  BlockSource *v5; // r10@1
  signed int v6; // r11@1
  signed int v7; // r4@1
  signed int v8; // r6@1
  signed int v9; // r7@1
  __int64 v10; // r0@2
  int v11; // r2@2
  int v12; // r0@2
  int v13; // r0@2
  int v14; // r8@2
  int v15; // r7@2
  int v16; // off@2
  int v17; // r11@2
  int v18; // off@2
  int v19; // r1@3
  int v20; // r2@3
  int v21; // r0@3
  int v22; // r0@3
  int v23; // off@3
  int v24; // off@3
  __int64 v25; // r0@4
  int v26; // r2@4
  int v27; // r0@4
  int v28; // r0@4
  int v29; // off@4
  int v30; // off@4
  int result; // r0@5
  LeafBlock *v39; // [sp+4h] [bp-34h]@1
  __int64 v40; // [sp+8h] [bp-30h]@2
  int v41; // [sp+10h] [bp-28h]@2

  v4 = a4;
  v5 = a3;
  v6 = 0;
  v7 = -4;
  v8 = 0;
  v9 = 0;
  v39 = this;
  do
  {
    HIDWORD(v10) = *(_DWORD *)(v4 + 4);
    v11 = *(_DWORD *)(v4 + 8);
    LODWORD(v10) = *(_DWORD *)v4 + v7;
    v40 = v10;
    v41 = v11 - 4;
    v12 = j_BlockSource::getBiome(v5, (const BlockPos *)&v40);
    v13 = (*(int (**)(void))(*(_DWORD *)v12 + 56))();
    v14 = v8 + v13;
    v16 = __ROR4__(v13, 8);
    v15 = v9 + v16;
    v18 = __ROR4__(v13, 16);
    v17 = v6 + v18;
    if ( v7 )
    {
      v19 = *(_DWORD *)(v4 + 4);
      v20 = *(_DWORD *)(v4 + 8);
      LODWORD(v40) = *(_DWORD *)v4 + v7;
      HIDWORD(v40) = v19;
      v41 = v20;
      v21 = j_BlockSource::getBiome(v5, (const BlockPos *)&v40);
      v22 = (*(int (**)(void))(*(_DWORD *)v21 + 56))();
      v14 += v22;
      v23 = __ROR4__(v22, 8);
      v15 += v23;
      v24 = __ROR4__(v22, 16);
      v17 += v24;
    }
    HIDWORD(v25) = *(_DWORD *)(v4 + 4);
    v26 = *(_DWORD *)(v4 + 8);
    LODWORD(v25) = *(_DWORD *)v4 + v7;
    v40 = v25;
    v41 = v26 + 4;
    v27 = j_BlockSource::getBiome(v5, (const BlockPos *)&v40);
    v28 = (*(int (**)(void))(*(_DWORD *)v27 + 56))();
    v7 += 4;
    v8 = v14 + v28;
    v29 = __ROR4__(v28, 8);
    v9 = v15 + v29;
    v30 = __ROR4__(v28, 16);
    v6 = v17 + v30;
  }
  while ( v7 != 8 );
  __asm { VLDR            S6, =0.0021223 }
  _R1 = ((v6 + ((unsigned int)(v6 >> 31) >> 29)) >> 3) & 0xFF;
  _R2 = ((v9 + ((unsigned int)(v9 >> 31) >> 29)) >> 3) & 0xFF;
  __asm
    VMOV            S0, R1
    VMOV            S2, R2
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
  _R0 = ((v8 + ((unsigned int)(v8 >> 31) >> 29)) >> 3) & 0xFF;
  __asm { VMOV            S4, R0 }
  result = 0;
    VCVT.F32.S32    S4, S4
    VMUL.F32        S0, S0, S6
    VMUL.F32        S2, S2, S6
  *((_DWORD *)v39 + 3) = 0;
    VMUL.F32        S4, S4, S6
    VSTR            S0, [R1]
    VSTR            S2, [R1,#4]
    VSTR            S4, [R1,#8]
  return result;
}


int __fastcall LeafBlock::die(LeafBlock *this, BlockSource *a2, const BlockPos *a3)
{
  LeafBlock *v3; // r6@1
  BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  void (__fastcall *v6)(LeafBlock *, BlockSource *, BlockPos *, unsigned int); // r7@1
  unsigned int v7; // r0@1
  char v9; // [sp+8h] [bp-18h]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = *(void (__fastcall **)(LeafBlock *, BlockSource *, BlockPos *, unsigned int))(*(_DWORD *)this + 276);
  v7 = j_BlockSource::getData(a2, a3);
  v6(v3, v5, v4, v7);
  v9 = BlockID::AIR;
  return j_BlockSource::setBlock((int)v5, v4, &v9, 3);
}


int __fastcall LeafBlock::isSeasonTinted(LeafBlock *this, BlockSource *a2, const BlockPos *a3)
{
  LeafBlock *v3; // r4@1
  int v4; // r0@1
  signed int v5; // r1@1
  signed int v6; // r2@1

  v3 = this;
  v4 = (*(int (**)(void))(*(_DWORD *)this + 408))();
  v5 = *((_BYTE *)v3 + 641);
  v6 = 0;
  if ( (v4 | 1) == 7 )
    v6 = 1;
  if ( *((_BYTE *)v3 + 641) )
    v5 = 1;
  return v6 & v5;
}


signed int __fastcall LeafBlock::getRenderLayer(LeafBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r6@1
  BlockSource *v4; // r7@1
  LeafBlock *v5; // r4@1
  Biome *v6; // r0@1
  signed int v7; // r5@1
  const BlockPos *v8; // r2@1
  signed int result; // r0@2

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = (Biome *)j_BlockSource::getBiome(a2, a3);
  v7 = j_Biome::canHaveSnowfall(v6, v4, v3);
  if ( j_LeafBlock::isDeepLeafBlock(v4, v3, v8) == 1 )
  {
    result = 3;
    if ( v7 )
      result = 6;
  }
  else if ( v7 == 1 )
    result = 6;
    if ( *((_BYTE *)v5 + 641) )
      result = 7;
  else
      result = 4;
  return result;
}


ItemInstance *__fastcall LeafBlock::asItemInstance(LeafBlock *this, BlockSource *a2, const BlockPos *a3, int a4, unsigned __int8 a5)
{
  BlockSource *v5; // r4@1
  ItemInstance *v6; // r5@1
  unsigned __int64 *v7; // r0@1

  v5 = a2;
  v6 = this;
  v7 = (unsigned __int64 *)j_Block::getBlockState((int)a2, 24);
  return j_ItemInstance::ItemInstance(v6, (int)v5, 1, (a5 >> (*v7 + 1 - (*v7 >> 32))) & (0xFu >> (4 - (*v7 >> 32))));
}


unsigned int __fastcall LeafBlock::getLeafType(LeafBlock *this, int a2)
{
  unsigned __int8 v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)j_Block::getBlockState((int)this, 24);
  return (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)));
}


void __fastcall LeafBlock::~LeafBlock(LeafBlock *this)
{
  LeafBlock::~LeafBlock(this);
}


int __fastcall LeafBlock::getSeasonsColor(LeafBlock *this, BlockSource *a2, const BlockPos *a3, int a4, int a5, int a6)
{
  const BlockPos *v6; // r9@1
  LeafBlock *v7; // r8@1
  BlockSource *v8; // r6@1
  int v14; // r0@1
  int v15; // r1@1
  int v16; // r7@1
  int result; // r0@5
  int v18; // r5@9
  char v20; // r0@10
  float v22; // [sp+4h] [bp-4Ch]@13
  float v25; // [sp+10h] [bp-40h]@13
  unsigned __int8 v26; // [sp+1Ch] [bp-34h]@2
  int v27; // [sp+20h] [bp-30h]@1
  int v28; // [sp+24h] [bp-2Ch]@1
  int v29; // [sp+28h] [bp-28h]@1

  v6 = (const BlockPos *)a4;
  v7 = this;
  v8 = a3;
  v27 = *(_DWORD *)a4;
  v28 = *(_DWORD *)(a4 + 4);
  v29 = *(_DWORD *)(a4 + 8);
  _R0 = *(_DWORD *)(j_BlockSource::getBiome(a3, (const BlockPos *)&v27) + 268);
  __asm
  {
    VLDR            S2, =0.0039216
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
  }
  *(_DWORD *)v7 = 0;
    VMUL.F32        S0, S0, S2
    VSTR            S0, [R8,#4]
  *((_QWORD *)v7 + 1) = 4575657221408423936LL;
  v14 = j_BlockSource::getHeightmap(v8, v6);
  v15 = a5;
  v16 = v14;
  if ( v28 >= v14 )
    result = 8;
  else
    while ( 1 )
    {
      j_BlockSource::getBlockID((BlockSource *)&v26, v8, (int)&v27);
      if ( v26 != BlockID::AIR && j_BlockID::hasProperty(&v26, BlockID::AIR, 8232, 0) != 1 )
        break;
      if ( ++v28 >= v16 )
      {
        result = 8;
        goto LABEL_8;
      }
    }
    result = 0;
LABEL_8:
    v15 = a5;
  v18 = result + a6;
  _R4 = result + v15;
  if ( result + a6 <= result + v15 )
    __asm
      VMOV            S0, R4
      VCVT.F32.S32    S0, S0
    v20 = byte_2832564;
    __dmb();
    if ( !(v20 & 1) && j_j___cxa_guard_acquire_0((unsigned int *)&byte_2832564) )
      j_PerlinSimplexNoise::PerlinSimplexNoise((PerlinSimplexNoise *)&unk_283256C, 0x4D2u, 1);
      j___cxa_atexit_0((int)PerlinSimplexNoise::~PerlinSimplexNoise);
      j_j___cxa_guard_release_0((unsigned int *)&byte_2832564);
    j_Vec3::Vec3((int)&v22, (int)v6);
      VLDR            S0, =0.01
      VLDR            S2, [SP,#0x50+var_4C]
      VLDR            S4, [SP,#0x50+var_48]
      VLDR            S6, [SP,#0x50+var_44]
      VMUL.F32        S2, S2, S0
      VMUL.F32        S4, S4, S0
      VMUL.F32        S0, S6, S0
      VSTR            S2, [SP,#0x50+var_40]
      VSTR            S4, [SP,#0x50+var_3C]
      VSTR            S0, [SP,#0x50+var_38]
    _R0 = j_PerlinSimplexNoise::getValue((PerlinSimplexNoise *)&unk_283256C, (const Vec3 *)&v25);
      VMOV.F32        S0, #0.5
      VMOV            S2, R0
    result = v18 - _R4;
      VMOV.F32        S4, #1.0
      VMOV            S6, R0
      VADD.F32        S0, S2, S0
      VLDR            S2, =0.0
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S0, S4
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S2, S0 }
      VCVT.F32.S32    S6, S6
      __asm { VMOVGT.F32      S2, S4 }
      VMUL.F32        S2, S2, S6
    VLDR            S2, =0.0625
    VLDR            S2, =0.03125
    VADD.F32        S0, S0, S2
    VSTR            S0, [R8]
  return result;
}


int __fastcall LeafBlock::getSpawnResourcesAuxValue(LeafBlock *this, int a2)
{
  unsigned int v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)j_Block::getBlockState((int)this, 24);
  return (unsigned __int8)(0xFu >> (4 - (*v3 >> 32))) & (unsigned __int8)(v2 >> (*v3 + 1 - (*v3 >> 32)));
}


InstantaneousAttributeBuff *__fastcall LeafBlock::playerDestroy(LeafBlock *this, Player *a2, const BlockPos *a3, int a4)
{
  Player *v4; // r4@1
  LeafBlock *v5; // r9@1
  int v6; // r7@1
  const BlockPos *v7; // r8@1
  BlockSource *v8; // r0@1
  BlockSource *v9; // r6@1
  Level *v10; // r0@1
  ItemInstance *v11; // r0@2
  ItemInstance *v12; // r5@2
  int v13; // r0@2
  bool v14; // zf@2
  InstantaneousAttributeBuff *result; // r0@8
  int v16; // r4@9
  unsigned __int64 *v17; // r0@9
  int v18; // [sp+0h] [bp-68h]@9
  int v19; // [sp+8h] [bp-60h]@13
  void *v20; // [sp+24h] [bp-44h]@11
  void *ptr; // [sp+34h] [bp-34h]@9

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (BlockSource *)j_Entity::getRegion(a2);
  v9 = v8;
  v10 = (Level *)j_BlockSource::getLevel(v8);
  if ( j_Level::isClientSide(v10) )
    goto LABEL_18;
  v11 = (ItemInstance *)j_Player::getSelectedItem(v4);
  v12 = v11;
  v13 = *((_BYTE *)v11 + 15);
  v14 = v13 == 0;
  if ( v13 )
    v14 = *(_DWORD *)v12 == 0;
  if ( v14 || j_ItemInstance::isNull(v12) || !*((_BYTE *)v12 + 14) || *(_DWORD *)v12 != Item::mShears )
  {
LABEL_18:
    result = j_j_j__ZNK5Block13playerDestroyER6PlayerRK8BlockPosi_0(v5, v4, v7, v6);
  }
  else
    v16 = *((_BYTE *)v5 + 4);
    v17 = (unsigned __int64 *)j_Block::getBlockState((int)v5, 24);
    j_ItemInstance::ItemInstance(
      (ItemInstance *)&v18,
      v16,
      1,
      ((unsigned __int8)v6 >> (*v17 + 1 - (*v17 >> 32))) & (0xFu >> (4 - (*v17 >> 32))));
    j_Block::popResource(v5, v9, v7, (const ItemInstance *)&v18);
    if ( ptr )
      j_operator delete(ptr);
    if ( v20 )
      j_operator delete(v20);
    if ( v19 )
      (*(void (**)(void))(*(_DWORD *)v19 + 4))();
    result = 0;
  return result;
}


int __fastcall LeafBlock::tick(LeafBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  BlockSource *v4; // r5@1
  LeafBlock *v5; // r4@1
  const BlockPos *v6; // r9@1
  Level *v7; // r0@1
  int result; // r0@1
  BlockState *v9; // r0@2
  _BOOL4 v10; // r7@2
  BlockState *v11; // r0@2
  bool v12; // zf@2
  signed int *v13; // r8@7
  signed int v14; // r6@7
  signed int v15; // r10@8
  signed int v16; // r11@9
  Block *v17; // r7@10
  int v18; // r1@11
  signed int v19; // r0@12
  signed int v20; // r1@19
  signed int v21; // lr@20
  int *v22; // r8@20
  signed int v23; // r0@21
  int *v24; // r5@21
  signed int v25; // r4@22
  int *v26; // r6@22
  BlockState *v27; // r0@41
  char v28; // r6@41
  int v29; // r1@41
  int v30; // r2@41
  int v31; // r3@41
  void (__fastcall *v32)(LeafBlock *, BlockSource *, const BlockPos *, unsigned int); // r6@42
  unsigned int v33; // r0@42
  LeafBlock *v34; // [sp+14h] [bp-20094h]@7
  signed int *v35; // [sp+18h] [bp-20090h]@8
  signed int *v36; // [sp+1Ch] [bp-2008Ch]@9
  BlockSource *v37; // [sp+20h] [bp-20088h]@7
  char v38; // [sp+24h] [bp-20084h]@41
  int v39; // [sp+28h] [bp-20080h]@6
  signed int v40; // [sp+2Ch] [bp-2007Ch]@6
  int v41; // [sp+30h] [bp-20078h]@6
  char v42; // [sp+34h] [bp-20074h]@6
  char v43; // [sp+50h] [bp-20058h]@6
  char v44; // [sp+6Ch] [bp-2003Ch]@6
  char v45; // [sp+78h] [bp-20030h]@6
  int v46; // [sp+C6A8h] [bp-13A00h]@7
  int v47; // [sp+108B8h] [bp-F7F0h]@40
  char v48; // [sp+2007Fh] [bp-29h]@2
  char v49; // [sp+20080h] [bp-28h]@42

  v4 = a2;
  v5 = this;
  v6 = a3;
  v7 = (Level *)j_BlockSource::getLevel(a2);
  result = j_Level::isClientSide(v7);
  if ( !result )
  {
    v48 = j_BlockSource::getData(v4, v6);
    v9 = (BlockState *)j_Block::getBlockState((int)v5, 39);
    v10 = j_BlockState::getBool(v9, (const unsigned __int8 *)&v48);
    v11 = (BlockState *)j_Block::getBlockState((int)v5, 29);
    result = j_BlockState::getBool(v11, (const unsigned __int8 *)&v48);
    v12 = result == 0;
    if ( !result )
    {
      result = !v10;
      v12 = v10 == 1;
    }
    if ( v12 )
      j___aeabi_memclr8_0((int)&v45, 0x20000);
      j_Vec3::Vec3((int)&v44, (int)v6);
      j_AABB::AABB((int)&v43, (int)&v44, (int)&v44);
      v39 = 1084227584;
      v40 = 1084227584;
      v41 = 1084227584;
      j_AABB::grow((AABB *)&v42, (const Vec3 *)&v43, (int)&v39);
      if ( j_BlockSource::hasChunksAt(v4, (const AABB *)&v42) != 1 )
        goto LABEL_45;
      v13 = &v46;
      v14 = -4;
      v34 = v5;
      v37 = v4;
      do
      {
        v15 = -4;
        v35 = v13;
        do
        {
          v16 = -9;
          v36 = v13;
          do
          {
            v17 = (Block *)j_BlockSource::getBlock(
                             v4,
                             *(_DWORD *)v6 + v14,
                             *((_DWORD *)v6 + 1) + v15,
                             v16 + *((_DWORD *)v6 + 2) + 5);
            if ( j_Block::isType(v17, (const Block *)Block::mLog)
              || j_Block::isType(v17, (const Block *)Block::mLog2) == 1 )
            {
              v19 = 0;
            }
            else if ( j_Block::hasProperty((int)v17, v18, 32LL) == 1 )
              v19 = -2;
            else
              v19 = -1;
            *v13 = v19;
            ++v13;
            ++v16;
          }
          while ( v16 );
          ++v15;
          v13 = v36 + 32;
        }
        while ( v15 != 5 );
        ++v14;
        v13 = v35 + 1024;
      }
      while ( v14 != 5 );
      v20 = 1;
        v21 = -4;
        v22 = &v46;
          v23 = -4;
          v24 = v22;
            v25 = 9;
            v26 = v24;
            do
              if ( *v26 == v20 - 1 )
              {
                if ( *(v26 - 1024) == -2 )
                  *(v26 - 1024) = v20;
                if ( v26[1024] == -2 )
                  v26[1024] = v20;
                if ( *(v26 - 32) == -2 )
                  *(v26 - 32) = v20;
                if ( v26[32] == -2 )
                  v26[32] = v20;
                if ( *(v26 - 1) == -2 )
                  *(v26 - 1) = v20;
                if ( v26[1] == -2 )
                  v26[1] = v20;
              }
              ++v26;
              --v25;
            while ( v25 );
            ++v23;
            v24 += 32;
          while ( v23 != 5 );
          ++v21;
          v22 += 1024;
        while ( v21 != 5 );
        ++v20;
      while ( v20 != 5 );
      v4 = v37;
      v5 = v34;
      if ( v47 < 0 )
        v32 = *(void (__fastcall **)(LeafBlock *, BlockSource *, const BlockPos *, unsigned int))(*(_DWORD *)v34 + 276);
        v33 = j_BlockSource::getData(v37, v6);
        v32(v34, v37, v6, v33);
        v49 = BlockID::AIR;
        result = j_BlockSource::setBlock((int)v37, v6, &v49, 3);
      else
LABEL_45:
        v27 = (BlockState *)j_Block::getBlockState((int)v5, 39);
        v28 = v48;
        v48 = v28 & ~(unsigned __int8)j_BlockState::getMask(v27);
        v29 = *(_DWORD *)v6;
        v30 = *((_DWORD *)v6 + 1);
        v31 = *((_DWORD *)v6 + 2);
        v38 = *((_BYTE *)v5 + 4);
        result = j_BlockSource::setBlockAndData((int)v4, v29, v30, v31, &v38, v48, 4);
  }
  return result;
}


int __fastcall LeafBlock::spawnResources(LeafBlock *this, BlockSource *a2, const BlockPos *a3, int a4, float a5, int a6)
{
  BlockSource *v6; // r10@1
  Block *v7; // r6@1
  int v8; // r9@1
  const BlockPos *v9; // r8@1
  Level *v10; // r7@1
  char *v11; // r4@1
  int result; // r0@1
  unsigned int v13; // r5@3
  int (__fastcall *v14)(Block *, char *, int, _DWORD); // r5@8
  char *v15; // r0@8
  int v16; // r5@8
  int v17; // r0@8
  unsigned int v18; // r5@16
  unsigned int v19; // r0@20
  int v20; // r1@20
  __int64 v21; // kr00_8@21
  int v22; // r0@21
  int v23; // [sp+0h] [bp-70h]@8
  int v24; // [sp+8h] [bp-68h]@12
  void *v25; // [sp+24h] [bp-4Ch]@10
  void *ptr; // [sp+34h] [bp-3Ch]@8

  v6 = a2;
  v7 = this;
  v8 = a4;
  v9 = a3;
  v10 = (Level *)j_BlockSource::getLevel(a2);
  v11 = j_Level::getRandom(v10);
  result = j_Level::isClientSide(v10);
  if ( !result )
  {
    if ( a6 < 1 )
    {
      v13 = 20;
    }
    else
      v13 = 20 - (2 << a6);
      if ( (signed int)v13 <= 10 )
        v13 = 10;
    if ( !(j_Random::_genRandInt32((Random *)v11) % v13) )
      v14 = *(int (__fastcall **)(Block *, char *, int, _DWORD))(*(_DWORD *)v7 + 264);
      v15 = j_Level::getRandom(v10);
      v16 = v14(v7, v15, v8, 0);
      v17 = (*(int (__fastcall **)(Block *, int))(*(_DWORD *)v7 + 500))(v7, v8);
      j_ItemInstance::ItemInstance((ItemInstance *)&v23, v16, 1, v17);
      j_Block::popResource(v7, v6, v9, (const ItemInstance *)&v23);
      if ( ptr )
        j_operator delete(ptr);
      if ( v25 )
        j_operator delete(v25);
      if ( v24 )
        (*(void (**)(void))(*(_DWORD *)v24 + 4))();
      v24 = 0;
      v18 = 200;
      v18 = 200 - (10 << a6);
      if ( (signed int)v18 <= 40 )
        v18 = 40;
    v19 = j_Random::_genRandInt32((Random *)v11);
    v20 = v19 % v18;
    result = v19 / v18;
    if ( !v20 )
      v21 = *(_QWORD *)(*(_DWORD *)v7 + 500);
      v22 = ((int (__fastcall *)(Block *, int))v21)(v7, v8);
      result = ((int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD))HIDWORD(v21))(v7, v6, v9, v22);
  }
  return result;
}


void *__fastcall LeafBlock::getMobToSpawn(LeafBlock *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  char v5; // r0@1
  MobSpawnRules *v6; // r0@3
  int v7; // r0@3
  void *result; // r0@10
  bool v9; // [sp+0h] [bp-88h]@0
  unsigned __int8 v10; // [sp+14h] [bp-74h]@10
  char v11; // [sp+18h] [bp-70h]@3
  void (*v12)(void); // [sp+20h] [bp-68h]@3
  char v13; // [sp+28h] [bp-60h]@3
  void (*v14)(void); // [sp+30h] [bp-58h]@3
  char v15; // [sp+38h] [bp-50h]@3
  void (*v16)(void); // [sp+6Ch] [bp-1Ch]@7

  v3 = a3;
  v4 = a2;
  v5 = byte_2832568[0];
  __dmb();
  if ( !(v5 & 1) && j_j___cxa_guard_acquire_0(byte_2832568) )
  {
    j_MobSpawnRules::MobSpawnRules((MobSpawnRules *)&v15);
    v6 = (MobSpawnRules *)j_MobSpawnRules::setBrightnessRange((MobSpawnRules *)&v15, 0, 7LL, v9);
    v7 = j_MobSpawnRules::setSurfaceSpawner(v6);
    v14 = 0;
    v12 = 0;
    j_MobSpawnerData::MobSpawnerData(&unk_28325C0, 264995, 100, 0, 1, v7, (int)&v13, (int)&v11);
    if ( v12 )
      v12();
    if ( v14 )
      v14();
    if ( v16 )
      v16();
    j___cxa_atexit_0((int)MobSpawnerData::~MobSpawnerData);
    j_j___cxa_guard_release_0(byte_2832568);
  }
  j_BlockSource::getRawBrightness((BlockSource *)&v10, v4, (int)v3, 1);
  result = &unk_28325C0;
  if ( v10 >= 8u )
    result = 0;
  return result;
}
