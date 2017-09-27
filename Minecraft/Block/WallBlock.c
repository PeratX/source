

void __fastcall WallBlock::buildDescriptionId(WallBlock *this, int a2, unsigned int a3)
{
  int v3; // r6@1
  WallBlock *v4; // r8@1
  unsigned int v5; // r5@1
  __int64 v6; // kr00_8@1
  int *v7; // r0@1
  unsigned int v8; // r0@1
  const void **v9; // r0@3
  const void **v10; // r0@3
  char *v11; // r0@3
  void *v12; // r0@4
  unsigned int *v13; // r2@6
  signed int v14; // r1@8
  unsigned int *v15; // r2@10
  signed int v16; // r1@12
  int v17; // [sp+4h] [bp-34h]@1
  char *v18; // [sp+8h] [bp-30h]@3

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = *(_QWORD *)Block::getBlockState(a2, 24);
  v7 = sub_21E8AF4(&v17, (int *)(v3 + 8));
  sub_21E7408((const void **)v7, ".", 1u);
  v8 = (v5 >> (1 - BYTE4(v6) + v6)) & (0xFu >> (4 - BYTE4(v6)));
  if ( v8 > 1 )
    v8 = 0;
  v9 = sub_21E72F0((const void **)&v17, (const void **)&WallBlock::POST_HEIGHT + v8 + 1);
  v18 = (char *)*v9;
  *v9 = &unk_28898CC;
  v10 = sub_21E7408((const void **)&v18, ".name", 5u);
  *(_DWORD *)v4 = *v10;
  *v10 = &unk_28898CC;
  v11 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  }
  v12 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
}


int __fastcall WallBlock::canProvideSupport(int a1, int a2, int a3, unsigned __int8 a4, int a5)
{
  signed int v5; // r1@1
  int v6; // r0@1

  v5 = 0;
  v6 = a4;
  if ( (a5 | 2) == 2 )
    v5 = 1;
  if ( a4 != 1 )
    v6 = 0;
  return v6 & v5;
}


int __fastcall WallBlock::getVariant(WallBlock *this, int a2)
{
  if ( a2 != 1 )
    a2 = 0;
  return a2;
}


int __fastcall WallBlock::WallBlock(int a1, const void **a2, int a3, Block *a4)
{
  Block *v4; // r6@1
  int v5; // r4@1
  int v6; // r5@1
  const void **v7; // r7@1
  int v8; // r0@1
  int v9; // r0@1
  int *v15; // r2@1
  float v17; // [sp+4h] [bp-1Ch]@1
  int v18; // [sp+8h] [bp-18h]@1

  v4 = a4;
  v5 = a1;
  v6 = a3;
  v7 = a2;
  v8 = Block::getMaterial(a4);
  Block::Block(v5, v7, v6, v8);
  *(_DWORD *)v5 = &off_2716F04;
  v9 = Block::getDestroySpeed(v4);
  Block::setDestroyTime((Block *)v5, *(float *)&v9);
  Block::setSolid((Block *)v5, 0);
  *(_DWORD *)(v5 + 24) = 128;
  *(_DWORD *)(v5 + 28) = 0;
  v18 = 1061997773;
  _R0 = Material::getTranslucency(*(Material **)(v5 + 56));
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.8
    VCMPE.F32       S0, S2
  }
  v15 = (int *)&v17;
    VMRS            APSR_nzcv, FPSCR
    VSTR            S0, [SP,#0x20+var_1C]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v15 = &v18;
  Block::mTranslucency[v6] = *v15;
  return v5;
}


void __fastcall WallBlock::~WallBlock(WallBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall WallBlock::getAABB(WallBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, int a6, int a7)
{
  const BlockPos *v7; // r5@1
  AABB *v8; // r4@1
  int v9; // r0@1
  char v15; // [sp+4h] [bp-1Ch]@3

  v7 = a3;
  v8 = a4;
  v9 = (*(int (__cdecl **)(WallBlock *))(*(_DWORD *)this + 416))(this);
  __asm { VMOV.F32        S2, #1.0 }
  *(_DWORD *)v8 = *(_DWORD *)v9;
  __asm { VMOV.F32        S0, #1.5 }
  *((_DWORD *)v8 + 1) = *(_DWORD *)(v9 + 4);
  if ( a6 )
    __asm { VMOVNE.F32      S0, S2 }
  *((_DWORD *)v8 + 2) = *(_DWORD *)(v9 + 8);
  *((_DWORD *)v8 + 3) = *(_DWORD *)(v9 + 12);
  *((_DWORD *)v8 + 5) = *(_DWORD *)(v9 + 20);
  *((_BYTE *)v8 + 24) = *(_BYTE *)(v9 + 24);
  __asm { VSTR            S0, [R4,#0x10] }
  Vec3::Vec3((int)&v15, (int)v7);
  return AABB::move(v8, (const Vec3 *)&v15);
}


int __fastcall WallBlock::canBeSilkTouched(WallBlock *this)
{
  return 0;
}


int __fastcall WallBlock::WallBlock(int a1, const void **a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r4@1
  int *v11; // r2@1
  float v13; // [sp+0h] [bp-18h]@1
  int v14; // [sp+4h] [bp-14h]@1

  v4 = a3;
  v5 = a1;
  Block::Block(a1, a2, a3, a4);
  *(_DWORD *)v5 = &off_2716F04;
  Block::setSolid((Block *)v5, 0);
  *(_DWORD *)(v5 + 24) = 128;
  *(_DWORD *)(v5 + 28) = 0;
  v14 = 1061997773;
  _R0 = Material::getTranslucency(*(Material **)(v5 + 56));
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.8
    VCMPE.F32       S0, S2
  }
  v11 = (int *)&v13;
    VMRS            APSR_nzcv, FPSCR
    VSTR            S0, [SP,#0x18+var_18]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v11 = &v14;
  Block::mTranslucency[v4] = *v11;
  return v5;
}


int __fastcall WallBlock::getSpawnResourcesAuxValue(WallBlock *this, int a2)
{
  return a2;
}


signed int __fastcall WallBlock::connectsTo(WallBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r6@1
  BlockSource *v5; // r7@1
  WallBlock *v6; // r5@1
  const BlockPos *v7; // r8@1
  int v8; // r4@1
  int v9; // r1@1
  unsigned __int64 *v10; // r5@3
  unsigned int v11; // r0@3
  int v12; // r3@3
  int v13; // r7@3
  bool v14; // zf@3
  unsigned int v15; // r0@3
  bool v16; // zf@6
  int *v17; // r6@9
  int v18; // r1@9
  int v19; // r5@9
  signed int result; // r0@12

  v4 = a4;
  v5 = a2;
  v6 = this;
  v7 = a3;
  v8 = BlockSource::getBlock(a2, a4);
  v9 = *((_BYTE *)v6 + 4);
  if ( *(_BYTE *)(v8 + 4) == v9 )
    goto LABEL_16;
  if ( Block::hasProperty(v8, v9, 16LL) != 1 )
    goto LABEL_17;
  v10 = (unsigned __int64 *)Block::getBlockState(v8, 12);
  v11 = BlockSource::getData(v5, v4);
  v12 = *((_DWORD *)v4 + 2);
  v13 = *((_DWORD *)v7 + 2);
  v14 = v13 == v12;
  v15 = (v11 >> (*v10 + 1 - (*v10 >> 32))) & (0xFu >> (4 - (*v10 >> 32))) | 2;
  if ( v13 == v12 )
    v14 = v15 == 2;
  if ( v14 )
  v16 = v15 == 3;
  if ( v15 == 3 )
    v16 = *(_DWORD *)v7 == *(_DWORD *)v4;
  if ( v16 )
  {
LABEL_16:
    result = 1;
  }
  else
LABEL_17:
    v17 = (int *)Block::getMaterial((Block *)v8);
    v19 = 0;
    if ( Material::isSolidBlocking((Material *)v17) == 1 && Block::hasProperty(v8, v18, 0x200000LL) == 1 )
      v19 = Material::isType(v17, 24) ^ 1;
    result = v19;
  return result;
}


AABB *__fastcall WallBlock::getVisualShape(WallBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, bool a5)
{
  WallBlock *v5; // r5@1
  const BlockPos *v6; // r6@1
  AABB *v7; // r8@1
  BlockSource *v8; // r4@1
  __int64 v9; // r1@1
  int (__fastcall *v10)(WallBlock *, BlockSource *, const BlockPos *, __int64 *); // r7@1
  int v11; // r0@1
  int v12; // r9@1
  __int64 v13; // r1@1
  int (__fastcall *v14)(WallBlock *, BlockSource *, const BlockPos *, __int64 *); // r7@1
  int v15; // r0@1
  int v16; // r10@1
  int (__fastcall *v17)(WallBlock *, BlockSource *, const BlockPos *, int *); // r7@1
  int v18; // r1@1
  int v19; // r2@1
  int v20; // r11@1
  int (__fastcall *v21)(WallBlock *, BlockSource *, const BlockPos *, int *); // r7@1
  int v22; // r1@1
  int v23; // r2@1
  int v24; // r0@1
  float v33; // [sp+0h] [bp-60h]@0
  float v34; // [sp+4h] [bp-5Ch]@0
  float v35; // [sp+8h] [bp-58h]@0
  int v36; // [sp+Ch] [bp-54h]@1
  int v37; // [sp+10h] [bp-50h]@1
  int v38; // [sp+14h] [bp-4Ch]@1
  int v39; // [sp+18h] [bp-48h]@1
  int v40; // [sp+1Ch] [bp-44h]@1
  int v41; // [sp+20h] [bp-40h]@1
  __int64 v42; // [sp+24h] [bp-3Ch]@1
  int v43; // [sp+2Ch] [bp-34h]@1
  __int64 v44; // [sp+30h] [bp-30h]@1
  int v45; // [sp+38h] [bp-28h]@1

  v5 = this;
  v6 = a3;
  v7 = a4;
  v8 = a2;
  LODWORD(v9) = *(_DWORD *)a3;
  HIDWORD(v9) = *((_DWORD *)a3 + 1);
  v10 = *(int (__fastcall **)(WallBlock *, BlockSource *, const BlockPos *, __int64 *))(*(_DWORD *)this + 504);
  v11 = *((_DWORD *)v6 + 2) - 1;
  v44 = v9;
  v45 = v11;
  v12 = v10(v5, v8, v6, &v44);
  LODWORD(v13) = *(_DWORD *)v6;
  HIDWORD(v13) = *((_DWORD *)v6 + 1);
  v14 = *(int (__fastcall **)(WallBlock *, BlockSource *, const BlockPos *, __int64 *))(*(_DWORD *)v5 + 504);
  v15 = *((_DWORD *)v6 + 2) + 1;
  v42 = v13;
  v43 = v15;
  v16 = v14(v5, v8, v6, &v42);
  v17 = *(int (__fastcall **)(WallBlock *, BlockSource *, const BlockPos *, int *))(*(_DWORD *)v5 + 504);
  v18 = *((_DWORD *)v6 + 1);
  v19 = *((_DWORD *)v6 + 2);
  v39 = *(_DWORD *)v6 - 1;
  v40 = v18;
  v41 = v19;
  v20 = v17(v5, v8, v6, &v39);
  v21 = *(int (__fastcall **)(WallBlock *, BlockSource *, const BlockPos *, int *))(*(_DWORD *)v5 + 504);
  v22 = *((_DWORD *)v6 + 1);
  v23 = *((_DWORD *)v6 + 2);
  v36 = *(_DWORD *)v6 + 1;
  v37 = v22;
  v38 = v23;
  v24 = v21(v5, v8, v6, &v36);
  __asm
  {
    VMOV.F32        S12, #0.25
    VLDR            S1, =0.0
    VMOV.F32        S10, #0.75
    VMOV.F32        S14, #1.0
  }
  _R1 = &WallBlock::POST_HEIGHT;
  __asm { VMOV.F32        S6, S12 }
  if ( !_ZF )
    __asm { VMOVNE.F32      S6, S1 }
  __asm { VMOV.F32        S0, S10 }
    __asm { VMOVNE.F32      S0, S14 }
  __asm { VMOV.F32        S8, S12 }
    __asm { VMOVNE.F32      S8, S1 }
  __asm { VMOV.F32        S2, S10 }
    __asm { VMOVNE.F32      S2, S14 }
  __asm { VLDR            S4, [R1] }
  _ZF = v20 == 0;
  if ( !v20 )
    _ZF = (v12 & v16) == 1;
  if ( _ZF && v24 != 1 )
    __asm
    {
      VMOV.F32        S4, #0.8125
      VMOV.F32        S2, #0.6875
      VMOV.F32        S8, #0.3125
    }
  else if ( v12 )
    __asm { VMOV.F32        S6, S1 }
  else if ( v16 )
      VMOV.F32        S6, S12
      VMOV.F32        S0, S14
  else if ( v20 == 1 )
      VMOV.F32        S10, #0.3125
      VMOV.F32        S8, #0.6875
      VMOV.F32        S12, #0.8125
    if ( !_ZF )
      __asm
      {
        VMOVNE.F32      S4, S12
        VMOVNE.F32      S0, S8
        VMOVNE.F32      S6, S10
      }
    __asm { VLDR            S8, =0.0 }
  else
      VMOV.F32        S8, #0.25
      VMOV.F32        S0, S10
      VMOV.F32        S6, S8
  __asm { VMOV            R1, S8 }
  LODWORD(_R0) = v7;
  __asm { VMOV            R3, S6 }
  LODWORD(_R2) = 0;
    VSTR            S2, [SP,#0x60+var_60]
    VSTR            S4, [SP,#0x60+var_5C]
    VSTR            S0, [SP,#0x60+var_58]
  AABB::set(_R0, _R2, v33, v34, v35);
  return v7;
}


void __fastcall WallBlock::~WallBlock(WallBlock *this)
{
  WallBlock::~WallBlock(this);
}


void __fastcall WallBlock::buildDescriptionId(WallBlock *this, int a2, unsigned int a3)
{
  WallBlock::buildDescriptionId(this, a2, a3);
}
