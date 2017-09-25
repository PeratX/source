

void __fastcall BrewingStandBlock::~BrewingStandBlock(BrewingStandBlock *this)
{
  BrewingStandBlock::~BrewingStandBlock(this);
}


AABB *__fastcall BrewingStandBlock::getAABB(BrewingStandBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, bool a6, int a7)
{
  float *v7; // r5@1
  const BlockPos *v8; // r6@1
  AABB *v9; // r4@1
  float *v14; // r1@1
  float *v16; // r3@1
  float *v17; // r7@1
  float *v18; // r0@1
  float *v19; // r2@1
  int v20; // r3@5
  int v21; // r2@5
  int v22; // r0@11
  int v23; // r1@11
  AABB *result; // r0@13
  int v25; // [sp+4h] [bp-94h]@13
  int v26; // [sp+8h] [bp-90h]@13
  signed int v27; // [sp+Ch] [bp-8Ch]@13
  char v28; // [sp+10h] [bp-88h]@13
  float v29; // [sp+2Ch] [bp-6Ch]@1
  float v32; // [sp+38h] [bp-60h]@4
  float v33; // [sp+3Ch] [bp-5Ch]@2
  float v34; // [sp+40h] [bp-58h]@6
  float v35; // [sp+44h] [bp-54h]@1
  float v36; // [sp+48h] [bp-50h]@1
  float v37; // [sp+4Ch] [bp-4Ch]@1
  int v38; // [sp+50h] [bp-48h]@13
  int v39; // [sp+54h] [bp-44h]@13
  int v40; // [sp+58h] [bp-40h]@13
  int v41; // [sp+5Ch] [bp-3Ch]@13
  int v43; // [sp+64h] [bp-34h]@13
  char v44; // [sp+68h] [bp-30h]@13
  int v45; // [sp+6Ch] [bp-2Ch]@13
  int v46; // [sp+70h] [bp-28h]@13
  int v47; // [sp+74h] [bp-24h]@13
  int v48; // [sp+78h] [bp-20h]@7
  int v49; // [sp+7Ch] [bp-1Ch]@7
  int v50; // [sp+80h] [bp-18h]@7

  v7 = &v35;
  v8 = a3;
  v9 = a4;
  Vec3::Vec3((int)&v35, (int)a3);
  Vec3::Vec3((int)&v29, (int)v8);
  __asm { VLDR            S2, [SP,#0x98+var_68] }
  v14 = &v37;
  __asm
  {
    VLDR            S4, [SP,#0x98+var_64]
    VLDR            S0, [SP,#0x98+var_6C]
  }
  _R0 = &Vec3::ONE;
  v16 = &v37;
  v17 = &v35;
    VLDR            S8, [R0,#4]
    VLDR            S10, [R0,#8]
    VADD.F32        S2, S8, S2
    VLDR            S8, [SP,#0x98+var_50]
    VLDR            S6, [R0]
    VADD.F32        S4, S10, S4
  v18 = &v36;
    VLDR            S10, [SP,#0x98+var_4C]
    VADD.F32        S0, S6, S0
    VLDR            S6, [SP,#0x98+var_54]
  v19 = &v36;
    VCMPE.F32       S2, S8
    VSTR            S2, [SP,#0x98+var_5C]
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S4, S10
    VSTR            S4, [SP,#0x98+var_60]
    VSTR            S0, [SP,#0x98+var_58]
  if ( _NF ^ _VF )
    v19 = &v33;
    VCMPE.F32       S0, S6
    v16 = &v32;
    VCMPE.F32       S8, S2
  v20 = *(_DWORD *)v16;
  v21 = *(_DWORD *)v19;
    v17 = &v34;
    VCMPE.F32       S10, S4
  v48 = *(_DWORD *)v17;
  v49 = v21;
  v50 = v20;
    v18 = &v33;
    VCMPE.F32       S6, S0
    v14 = &v32;
  __asm { VMRS            APSR_nzcv, FPSCR }
  v22 = *(_DWORD *)v18;
  v23 = *(_DWORD *)v14;
    v7 = &v34;
  v45 = *(_DWORD *)v7;
  v46 = v22;
  v47 = v23;
  AABB::AABB((int)&v28, (int)&v48, (int)&v45);
  v25 = 1040187392;
  v26 = 0;
  v27 = 1040187392;
  AABB::shrink((AABB *)&v38, (const Vec3 *)&v28, (int)&v25);
  __asm { VMOV.F32        S0, #-0.125 }
  *(_DWORD *)v9 = v38;
  *((_DWORD *)v9 + 1) = v39;
  *((_DWORD *)v9 + 2) = v40;
  *((_DWORD *)v9 + 3) = v41;
    VLDR            S2, [SP,#0x98+var_38]
    VADD.F32        S0, S2, S0
  *((_DWORD *)v9 + 5) = v43;
  *((_BYTE *)v9 + 24) = v44;
  result = v9;
  __asm { VSTR            S0, [R4,#0x10] }
  return result;
}


void __fastcall BrewingStandBlock::~BrewingStandBlock(BrewingStandBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall BrewingStandBlock::addCollisionShapes(int a1)
{
  (*(void (__cdecl **)(int))(*(_DWORD *)a1 + 28))(a1);
  return 1;
}


signed int __fastcall BrewingStandBlock::isContainerBlock(BrewingStandBlock *this)
{
  return 1;
}


int __fastcall BrewingStandBlock::BrewingStandBlock(int a1, const void **a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1
  int *v12; // r2@1
  float v14; // [sp+0h] [bp-18h]@1
  int v15; // [sp+4h] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(4);
  EntityBlock::EntityBlock(v3, v5, v4, v6);
  *(_DWORD *)v3 = &loc_2704EC0;
  Block::setSolid((Block *)v3, 0);
  Block::setPushesOutItems((Block *)v3, 1);
  Block::setIsInteraction((Block *)v3, 1);
  *(_DWORD *)(v3 + 20) = 5;
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 32) = 8;
  (*(void (__fastcall **)(int, _DWORD *, void *))(*(_DWORD *)v3 + 452))(v3, &Vec3::ZERO, &Vec3::ONE);
  v15 = 1061997773;
  _R0 = Material::getTranslucency(*(Material **)(v3 + 56));
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.8
    VCMPE.F32       S0, S2
  }
  v12 = (int *)&v14;
    VMRS            APSR_nzcv, FPSCR
    VSTR            S0, [SP,#0x18+var_18]
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v12 = &v15;
  Block::mTranslucency[v4] = *v12;
  return v3;
}


signed int __fastcall BrewingStandBlock::isInteractiveBlock(BrewingStandBlock *this)
{
  return 1;
}


signed int __fastcall BrewingStandBlock::hasComparatorSignal(BrewingStandBlock *this)
{
  return 1;
}


int __fastcall BrewingStandBlock::canBeSilkTouched(BrewingStandBlock *this)
{
  return 0;
}


int __fastcall BrewingStandBlock::animateTick(BrewingStandBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Random *v4; // r5@1
  const BlockPos *v5; // r6@1
  BlockSource *v6; // r8@1
  int v17; // r0@1
  float v19; // [sp+Ch] [bp-3Ch]@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  _R7 = *(_DWORD *)a3;
  _R0 = Random::_genRandInt32(a4);
  __asm { VMOV            S0, R0 }
  _R4 = *((_DWORD *)v5 + 1);
  __asm { VCVT.F64.U32    D8, S0 }
  _R0 = Random::_genRandInt32(v4);
  __asm
  {
    VMOV            S0, R0
    VLDR            D10, =2.32830644e-10
    VCVT.F64.U32    D9, S0
  }
  _R6 = *((_DWORD *)v5 + 2);
    VLDR            S12, =0.4
    VMUL.F64        D1, D8, D10
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D10
    VMUL.F64        D2, D9, D10
    VMOV            S6, R7
    VLDR            S14, =0.2
    VMOV            S8, R4
    VMOV            S10, R6
    VCVT.F32.S32    S6, S6
    VCVT.F32.F64    S2, D1
    VCVT.F32.F64    S0, D0
    VCVT.F32.S32    S8, S8
    VLDR            S1, =0.7
    VCVT.F32.S32    S10, S10
    VLDR            S3, =0.3
    VCVT.F32.F64    S4, D2
    VADD.F32        S6, S6, S12
    VMUL.F32        S2, S2, S14
    VADD.F32        S8, S8, S1
    VMUL.F32        S4, S4, S3
    VADD.F32        S10, S10, S12
    VMUL.F32        S0, S0, S14
    VADD.F32        S16, S6, S2
    VADD.F32        S18, S8, S4
    VADD.F32        S20, S10, S0
  v17 = BlockSource::getLevel(v6);
    VSTR            S16, [SP,#0x48+var_3C]
    VSTR            S18, [SP,#0x48+var_38]
    VSTR            S20, [SP,#0x48+var_34]
  return Level::addParticle(v17, 4, (int)&v19);
}


signed int __fastcall BrewingStandBlock::isCraftingBlock(BrewingStandBlock *this)
{
  return 1;
}


int __fastcall BrewingStandBlock::onRemove(BrewingStandBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  Block *v4; // r6@1
  const BlockPos *v5; // r4@1
  Level *v6; // r0@1
  int v7; // r0@3
  int v8; // r7@4
  void (__fastcall *v9)(int, BlockSource *, int *, _DWORD); // r9@4
  int v11; // [sp+0h] [bp-28h]@4

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (Level *)BlockSource::getLevel(a2);
  if ( !BrewingStandBlock::mNoDrop && !Level::isClientSide(v6) )
  {
    v7 = BlockSource::getBlockEntity(v3, v5);
    if ( v7 )
    {
      v8 = v7 + 104;
      v9 = *(void (__fastcall **)(int, BlockSource *, int *, _DWORD))(*(_DWORD *)(v7 + 104) + 40);
      Vec3::Vec3((int)&v11, (int)v5);
      v9(v8, v3, &v11, 0);
    }
  }
  return Block::onRemove(v4, v3, v5);
}


int __fastcall BrewingStandBlock::getComparatorSignal(BrewingStandBlock *this, BlockSource *a2, const BlockPos *a3, signed __int8 a4, int a5)
{
  const BlockPos *v5; // r5@1
  BlockSource *v6; // r6@1
  Block *v7; // r7@1
  signed __int8 v8; // r4@1
  int v9; // r0@1
  int result; // r0@2

  v5 = a3;
  v6 = a2;
  v7 = this;
  v8 = a4;
  v9 = BlockSource::getBlockEntity(a2, a3);
  if ( v9 )
    result = j_j_j__ZN9Container30getRedstoneSignalFromContainerEv((Container *)(v9 + 104));
  else
    result = j_j_j__ZNK5Block19getComparatorSignalER11BlockSourceRK8BlockPosai(v7, v6, v5, v8, a5);
  return result;
}


signed int __fastcall BrewingStandBlock::use(BrewingStandBlock *this, Player *a2, const BlockPos *a3, ItemUseCallback *a4)
{
  Entity *v4; // r4@1
  const BlockPos *v5; // r5@1
  Level *v6; // r0@1
  BlockSource *v7; // r0@2
  BlockEntity *v8; // r0@2
  void (__fastcall *v9)(Entity *, char *); // r5@3
  char *v10; // r0@3

  v4 = a2;
  v5 = a3;
  v6 = (Level *)Entity::getLevel(a2);
  if ( !Level::isClientSide(v6) )
  {
    v7 = (BlockSource *)Entity::getRegion(v4);
    v8 = (BlockEntity *)BlockSource::getBlockEntity(v7, v5);
    if ( v8 )
    {
      v9 = *(void (__fastcall **)(Entity *, char *))(*(_DWORD *)v4 + 1304);
      v10 = BlockEntity::getPosition(v8);
      v9(v4, v10);
    }
  }
  return 1;
}


signed int __fastcall BrewingStandBlock::addAABBs(int a1, int a2, int a3, AABB *a4, int a5)
{
  int v5; // r5@1
  int v6; // r6@1
  AABB *v7; // r9@1
  AABB *v8; // r0@1
  AABB *v9; // r0@1
  char v11; // [sp+4h] [bp-3Ch]@1
  int v12; // [sp+10h] [bp-30h]@1
  signed int v13; // [sp+14h] [bp-2Ch]@1
  signed int v14; // [sp+18h] [bp-28h]@1
  char v15; // [sp+1Ch] [bp-24h]@1
  int v16; // [sp+28h] [bp-18h]@1
  signed int v17; // [sp+2Ch] [bp-14h]@1
  signed int v18; // [sp+30h] [bp-10h]@1
  int v19; // [sp+34h] [bp-Ch]@1
  int v20; // [sp+38h] [bp-8h]@1
  signed int v21; // [sp+3Ch] [bp-4h]@1
  int v22; // [sp+40h] [bp+0h]@1

  v5 = a1;
  v19 = 1054867456;
  v20 = 0;
  v21 = 1054867456;
  v6 = a3;
  v16 = 1058013184;
  v17 = 1063256064;
  v18 = 1058013184;
  v7 = a4;
  AABB::AABB((int)&v22, (int)&v19, (int)&v16);
  Vec3::Vec3((int)&v15, v6);
  v8 = (AABB *)AABB::move((AABB *)&v22, (const Vec3 *)&v15);
  Block::addAABB(v5, v8, v7, a5);
  v12 = 1065353216;
  v13 = 1040187392;
  v14 = 1065353216;
  AABB::set((AABB *)&v22, (const Vec3 *)&Vec3::ZERO, (const Vec3 *)&v12);
  Vec3::Vec3((int)&v11, v6);
  v9 = (AABB *)AABB::move((AABB *)&v22, (const Vec3 *)&v11);
  return Block::addAABB(v5, v9, v7, a5);
}
