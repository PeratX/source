

int __fastcall FenceBlock::canBeSilkTouched(FenceBlock *this)
{
  return 0;
}


void __fastcall FenceBlock::buildDescriptionId(FenceBlock *this, int a2, unsigned int a3)
{
  int v3; // r4@1
  int *v4; // r5@1
  unsigned int v5; // r6@1
  unsigned __int64 *v6; // r0@1
  unsigned int v7; // r6@1
  char v8; // r0@3
  int *v9; // r0@6
  const void **v10; // r0@6
  void *v11; // r0@6
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  int v14; // [sp+0h] [bp-40h]@6

  v3 = a2;
  v4 = (int *)this;
  v5 = a3;
  v6 = (unsigned __int64 *)Block::getBlockState(a2, 24);
  v7 = (v5 >> (*v6 + 1 - (*v6 >> 32))) & (0xFu >> (4 - (*v6 >> 32)));
  if ( v7 - 1 < 5 )
  {
    v8 = byte_28103C4;
    __dmb();
    if ( !(v8 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_28103C4) )
    {
      sub_21E94B4((void **)&dword_28103C8, "fence");
      sub_21E94B4((void **)&unk_28103CC, "spruceFence");
      sub_21E94B4((void **)&unk_28103D0, "birchFence");
      sub_21E94B4((void **)&unk_28103D4, "jungleFence");
      sub_21E94B4((void **)&unk_28103D8, "acaciaFence");
      sub_21E94B4((void **)&unk_28103DC, "darkOakFence");
      _cxa_atexit(std::array<std::string,6u>::~array);
      j___cxa_guard_release((unsigned int *)&byte_28103C4);
    }
    v9 = sub_21E8AF4(&v14, (int *)&Block::BLOCK_DESCRIPTION_PREFIX);
    sub_21E72F0((const void **)v9, (const void **)&unk_28103C0 + v7 + 2);
    v10 = sub_21E7408((const void **)&v14, ".name", 5u);
    *v4 = (int)*v10;
    *v10 = &unk_28898CC;
    v11 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v14 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
  }
  else
    sub_21E8AF4(v4, (int *)(v3 + 8));
    sub_21E7408((const void **)v4, ".name", 5u);
}


void __fastcall FenceBlock::~FenceBlock(FenceBlock *this)
{
  FenceBlock::~FenceBlock(this);
}


int __fastcall FenceBlock::addCollisionShapes(FenceBlock *this, BlockSource *a2, BlockPos *a3, int a4, int a5)
{
  BlockSource *v6; // r4@1
  FenceBlock *v7; // r11@1
  __int64 v8; // r0@1
  int v9; // r2@1
  AABB *v10; // r9@1
  int v11; // r7@1
  int v12; // r2@1
  int v13; // r5@1
  int v14; // r1@1
  int v15; // r2@1
  int v16; // r10@1
  int v17; // r1@1
  int v18; // r2@1
  int v19; // r4@1
  int v24; // r7@1
  float v32; // [sp+0h] [bp-B8h]@0
  float v33; // [sp+4h] [bp-B4h]@0
  float v34; // [sp+8h] [bp-B0h]@0
  char v35; // [sp+Ch] [bp-ACh]@1
  int v36; // [sp+28h] [bp-90h]@1
  int v37; // [sp+2Ch] [bp-8Ch]@1
  int v38; // [sp+30h] [bp-88h]@1
  int v39; // [sp+34h] [bp-84h]@1
  int v40; // [sp+38h] [bp-80h]@1
  int v41; // [sp+3Ch] [bp-7Ch]@1
  __int64 v42; // [sp+40h] [bp-78h]@1
  int v43; // [sp+48h] [bp-70h]@1
  __int64 v44; // [sp+4Ch] [bp-6Ch]@1
  int v45; // [sp+54h] [bp-64h]@1

  _R6 = a3;
  v6 = a2;
  v7 = this;
  v8 = *(_QWORD *)a3;
  v9 = *((_DWORD *)a3 + 2);
  v10 = (AABB *)a4;
  v44 = v8;
  v45 = v9 - 1;
  v11 = FenceBlock::connectsTo(v7, v6, _R6, (const BlockPos *)&v44);
  v12 = *((_DWORD *)_R6 + 2);
  v42 = *(_QWORD *)_R6;
  v43 = v12 + 1;
  v13 = FenceBlock::connectsTo(v7, v6, _R6, (const BlockPos *)&v42);
  v14 = *((_DWORD *)_R6 + 1);
  v15 = *((_DWORD *)_R6 + 2);
  v39 = *(_DWORD *)_R6 - 1;
  v40 = v14;
  v41 = v15;
  v16 = FenceBlock::connectsTo(v7, v6, _R6, (const BlockPos *)&v39);
  v17 = *((_DWORD *)_R6 + 1);
  v18 = *((_DWORD *)_R6 + 2);
  v36 = *(_DWORD *)_R6 + 1;
  v37 = v17;
  v38 = v18;
  v19 = FenceBlock::connectsTo(v7, v6, _R6, (const BlockPos *)&v36);
  AABB::AABB((AABB *)&v35);
  __asm
  {
    VMOV.F32        S16, #0.375
    VLDR            S28, =0.0
    VMOV.F32        S18, #0.625
    VMOV.F32        S26, #1.0
  }
  v24 = v11 | v13;
  __asm { VMOV.F32        S22, S16 }
  if ( !_ZF )
    __asm { VMOVNE.F32      S22, S28 }
  __asm { VMOV.F32        S20, S18 }
    __asm { VMOVNE.F32      S20, S26 }
  if ( v24 == 1 )
    __asm
    {
      VLDR            S0, [R6]
      VMOV.F32        S6, #0.375
      VLDR            S4, [R6,#8]
      VLDR            S2, [R6,#4]
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S4, S4
    }
    LODWORD(_R0) = &v35;
      VCVT.F32.S32    S2, S2
      VADD.F32        S6, S0, S6
      VADD.F32        S8, S4, S22
      VMOV            R2, S2
      VADD.F32        S4, S4, S20
      VMOV            R1, S6
      VMOV            R3, S8
      VMOV.F32        S6, #1.5
      VMOV.F32        S8, #0.625
      VADD.F32        S2, S2, S6
      VADD.F32        S0, S0, S8
      VSTR            S0, [SP,#0xB8+var_B8]
      VSTR            S2, [SP,#0xB8+var_B4]
      VSTR            S4, [SP,#0xB8+var_B0]
    AABB::set(_R0, _R2, v32, v33, v34);
    Block::addAABB((int)v7, (AABB *)&v35, v10, a5);
  __asm { VMOV.F32        S24, S18 }
    __asm { VMOVNE.F32      S24, S26 }
  __asm { VMOV.F32        S26, S16 }
    __asm { VMOVNE.F32      S26, S28 }
  if ( (v16 | v19) == 1 )
      VADD.F32        S6, S0, S26
      VADD.F32        S8, S4, S16
      VADD.F32        S0, S0, S24
      VADD.F32        S4, S4, S18
      VMOV.F32        S22, S16
      VMOV.F32        S20, S18
  if ( !(v24 | v16 | v19) )
  return 1;
}


int __fastcall FenceBlock::connectsTo(FenceBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r9@1
  BlockSource *v5; // r4@1
  Block *v6; // r5@1
  const BlockPos *v7; // r8@1
  Block *v8; // r7@1
  int *v9; // r6@1
  int v10; // r0@1
  int v11; // r1@1
  int v12; // r4@3
  unsigned __int64 *v13; // r5@5
  unsigned int v14; // r0@5
  int v15; // r3@5
  int v16; // r7@5
  bool v17; // zf@5
  unsigned int v18; // r0@5
  int v19; // r1@10
  signed int v21; // r3@14
  signed int v22; // r1@14

  v4 = a4;
  v5 = a2;
  v6 = this;
  v7 = a3;
  v8 = (Block *)BlockSource::getBlock(a2, a4);
  v9 = (int *)Block::getMaterial(v8);
  v10 = Block::getMaterial(v6);
  if ( Material::operator==((int)v9, v10) == 1 && (*(int (__fastcall **)(Block *))(*(_DWORD *)v8 + 80))(v8) )
    return 1;
  if ( Block::hasProperty((int)v8, v11, 16LL) != 1 )
  {
    v12 = 0;
    if ( Material::isSolidBlocking((Material *)v9) == 1 && Block::hasProperty((int)v8, v19, 0x200000LL) == 1 )
      v12 = Material::isType(v9, 24) ^ 1;
    return v12;
  }
  v13 = (unsigned __int64 *)Block::getBlockState((int)v8, 12);
  v14 = BlockSource::getData(v5, v4);
  v15 = *((_DWORD *)v4 + 2);
  v16 = *((_DWORD *)v7 + 2);
  v17 = v16 == v15;
  v18 = (v14 >> (*v13 + 1 - (*v13 >> 32))) & (0xFu >> (4 - (*v13 >> 32))) | 2;
  if ( v16 == v15 )
    v17 = v18 == 2;
  if ( v17 )
  v21 = 0;
  v22 = 0;
  if ( *(_DWORD *)v7 == *(_DWORD *)v4 )
    v22 = 1;
  if ( v18 == 3 )
    v21 = 1;
  return v21 & v22;
}


AABB *__fastcall FenceBlock::getVisualShape(FenceBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, bool a5)
{
  const BlockPos *v5; // r5@1
  BlockSource *v6; // r6@1
  FenceBlock *v7; // r7@1
  __int64 v8; // r0@1
  int v9; // r2@1
  AABB *v10; // r8@1
  int v11; // r2@1
  int v12; // r1@1
  int v13; // r2@1
  int v14; // r4@1
  int v15; // r1@1
  int v16; // r2@1
  int v17; // r0@1
  float v25; // [sp+0h] [bp-60h]@0
  float v26; // [sp+8h] [bp-58h]@0
  int v27; // [sp+10h] [bp-50h]@1
  int v28; // [sp+14h] [bp-4Ch]@1
  int v29; // [sp+18h] [bp-48h]@1
  int v30; // [sp+1Ch] [bp-44h]@1
  int v31; // [sp+20h] [bp-40h]@1
  int v32; // [sp+24h] [bp-3Ch]@1
  __int64 v33; // [sp+28h] [bp-38h]@1
  int v34; // [sp+30h] [bp-30h]@1
  __int64 v35; // [sp+34h] [bp-2Ch]@1
  int v36; // [sp+3Ch] [bp-24h]@1

  v5 = a3;
  v6 = a2;
  v7 = this;
  v8 = *(_QWORD *)a3;
  v9 = *((_DWORD *)a3 + 2);
  v10 = a4;
  v35 = v8;
  v36 = v9 - 1;
  FenceBlock::connectsTo(v7, v6, v5, (const BlockPos *)&v35);
  v11 = *((_DWORD *)v5 + 2);
  v33 = *(_QWORD *)v5;
  v34 = v11 + 1;
  FenceBlock::connectsTo(v7, v6, v5, (const BlockPos *)&v33);
  v12 = *((_DWORD *)v5 + 1);
  v13 = *((_DWORD *)v5 + 2);
  v30 = *(_DWORD *)v5 - 1;
  v31 = v12;
  v32 = v13;
  v14 = FenceBlock::connectsTo(v7, v6, v5, (const BlockPos *)&v30);
  v15 = *((_DWORD *)v5 + 1);
  v16 = *((_DWORD *)v5 + 2);
  v27 = *(_DWORD *)v5 + 1;
  v28 = v15;
  v29 = v16;
  v17 = FenceBlock::connectsTo(v7, v6, v5, (const BlockPos *)&v27);
  __asm
  {
    VMOV.F32        S0, #0.375
    VLDR            S2, =0.0
  }
  LODWORD(_R2) = 0;
  __asm { VMOV.F32        S4, S0 }
  if ( !_ZF )
    __asm { VMOVNE.F32      S4, S2 }
  if ( v14 )
    __asm { VMOVNE.F32      S0, S2 }
    VMOV            R3, S4
    VMOV            R1, S0
    VMOV.F32        S0, #0.625
    VMOV.F32        S2, #1.0
    VMOV.F32        S4, S0
  if ( v17 )
  __asm { VSTR            S4, [SP,#0x60+var_58] }
  LODWORD(_R0) = v10;
  __asm { VSTR            S0, [SP,#0x60+var_60] }
  AABB::set(_R0, _R2, v25, 1.0, v26);
  return v10;
}


int __fastcall FenceBlock::use(FenceBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  Player *v4; // r5@1
  ItemUseCallback *v5; // r4@1
  const BlockPos *v6; // r6@1
  Level *v7; // r0@1
  int result; // r0@2
  ItemUseCallback *v9; // [sp+4h] [bp-14h]@0

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = (Level *)Entity::getLevel(a2);
  if ( Level::isClientSide(v7) )
    result = 0;
  else
    result = LeadItem::bindPlayerMobs(v4, *(Entity **)v6, *((_DWORD *)v6 + 1), *((_DWORD *)v6 + 2), (int)v5, v9);
  return result;
}


int __fastcall FenceBlock::getSpawnResourcesAuxValue(FenceBlock *this, int a2)
{
  return a2;
}


AABB *__fastcall FenceBlock::getAABB(FenceBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, int a6, int a7)
{
  BlockSource *v8; // r6@1
  FenceBlock *v9; // r7@1
  __int64 v10; // r0@1
  int v11; // r2@1
  AABB *v12; // r8@1
  int v13; // r2@1
  int v14; // r1@1
  int v15; // r2@1
  int v16; // r1@1
  int v17; // r2@1
  int v18; // r0@1
  float v26; // [sp+0h] [bp-60h]@0
  float v27; // [sp+4h] [bp-5Ch]@0
  float v28; // [sp+8h] [bp-58h]@0
  int v29; // [sp+10h] [bp-50h]@1
  int v30; // [sp+14h] [bp-4Ch]@1
  int v31; // [sp+18h] [bp-48h]@1
  int v32; // [sp+1Ch] [bp-44h]@1
  int v33; // [sp+20h] [bp-40h]@1
  int v34; // [sp+24h] [bp-3Ch]@1
  __int64 v35; // [sp+28h] [bp-38h]@1
  int v36; // [sp+30h] [bp-30h]@1
  __int64 v37; // [sp+34h] [bp-2Ch]@1
  int v38; // [sp+3Ch] [bp-24h]@1

  _R5 = a3;
  v8 = a2;
  v9 = this;
  v10 = *(_QWORD *)a3;
  v11 = *((_DWORD *)a3 + 2);
  v12 = a4;
  v37 = v10;
  v38 = v11 - 1;
  FenceBlock::connectsTo(v9, v8, _R5, (const BlockPos *)&v37);
  v13 = *((_DWORD *)_R5 + 2);
  v35 = *(_QWORD *)_R5;
  v36 = v13 + 1;
  FenceBlock::connectsTo(v9, v8, _R5, (const BlockPos *)&v35);
  v14 = *((_DWORD *)_R5 + 1);
  v15 = *((_DWORD *)_R5 + 2);
  v32 = *(_DWORD *)_R5 - 1;
  v33 = v14;
  v34 = v15;
  FenceBlock::connectsTo(v9, v8, _R5, (const BlockPos *)&v32);
  v16 = *((_DWORD *)_R5 + 1);
  v17 = *((_DWORD *)_R5 + 2);
  v29 = *(_DWORD *)_R5 + 1;
  v30 = v16;
  v31 = v17;
  v18 = FenceBlock::connectsTo(v9, v8, _R5, (const BlockPos *)&v29);
  __asm
  {
    VMOV.F32        S0, #0.375
    VLDR            S2, =0.0
    VLDR            S4, [R5]
    VLDR            S8, [R5,#8]
    VMOV.F32        S14, #1.0
    VLDR            S6, [R5,#4]
    VMOV.F32        S12, #1.5
    VMOV.F32        S10, S0
  }
  if ( !_ZF )
    __asm { VMOVNE.F32      S10, S2 }
  __asm { VCVT.F32.S32    S4, S4 }
    __asm { VMOVNE.F32      S0, S2 }
    VCVT.F32.S32    S2, S8
    VCVT.F32.S32    S6, S6
    VADD.F32        S8, S4, S10
    VADD.F32        S0, S2, S0
    VMOV            R2, S6
    VMOV.F32        S10, #0.625
    VMOV            R1, S8
    VMOV            R3, S0
    VMOV.F32        S0, S10
    __asm { VMOVNE.F32      S0, S14 }
  if ( a6 )
    __asm { VMOVNE.F32      S12, S14 }
  if ( v18 )
    __asm { VMOVNE.F32      S10, S14 }
    VADD.F32        S4, S4, S10
  LODWORD(_R0) = v12;
    VADD.F32        S2, S6, S12
    VSTR            S4, [SP,#0x60+var_60]
    VSTR            S2, [SP,#0x60+var_5C]
    VSTR            S0, [SP,#0x60+var_58]
  AABB::set(_R0, _R2, v26, v27, v28);
  return v12;
}


void __fastcall FenceBlock::~FenceBlock(FenceBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall FenceBlock::FenceBlock(int a1, const void **a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r4@1
  int *v11; // r2@1
  float v13; // [sp+0h] [bp-18h]@1
  int v14; // [sp+4h] [bp-14h]@1

  v4 = a3;
  v5 = a1;
  Block::Block(a1, a2, a3, a4);
  *(_DWORD *)v5 = &off_270B028;
  Block::setSolid((Block *)v5, 0);
  Block::setIsInteraction((Block *)v5, 1);
  *(_DWORD *)(v5 + 24) = 4194432;
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


signed int __fastcall FenceBlock::isFenceBlock(FenceBlock *this)
{
  return 1;
}


int __fastcall FenceBlock::canProvideSupport(int a1, int a2, int a3, unsigned __int8 a4, int a5)
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


void __fastcall FenceBlock::buildDescriptionId(FenceBlock *this, int a2, unsigned int a3)
{
  FenceBlock::buildDescriptionId(this, a2, a3);
}
