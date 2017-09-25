

AABB *__fastcall EndPortalBlock::getAABB(EndPortalBlock *this, BlockSource *a2, const BlockPos *_R2, AABB *a4, int a5, bool a6, int a7)
{
  AABB *v11; // r4@1
  float v15; // [sp+0h] [bp-18h]@0
  float v16; // [sp+4h] [bp-14h]@0
  float v17; // [sp+8h] [bp-10h]@0

  __asm { VLDR            S0, [R2] }
  v11 = a4;
  __asm
  {
    VLDR            S2, [R2,#4]
    VMOV.F32        S6, #1.0
    VLDR            S4, [R2,#8]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VLDR            S8, =0.05
    VCVT.F32.S32    S4, S4
  }
  LODWORD(_R0) = a4;
    VMOV            R1, S0
    VMOV            R2, S2
    VMOV            R3, S4
    VADD.F32        S0, S0, S6
    VADD.F32        S4, S4, S6
    VADD.F32        S2, S2, S8
    VSTR            S0, [SP,#0x18+var_18]
    VSTR            S2, [SP,#0x18+var_14]
    VSTR            S4, [SP,#0x18+var_10]
  AABB::set(_R0, _R2, v15, v16, v17);
  return v11;
}


int __fastcall EndPortalBlock::getResource(EndPortalBlock *this, Random *a2, int a3, int a4)
{
  return 0;
}


void __fastcall EndPortalBlock::~EndPortalBlock(EndPortalBlock *this)
{
  EndPortalBlock::~EndPortalBlock(this);
}


signed int __fastcall EndPortalBlock::getCollisionShape(EndPortalBlock *this, AABB *a2, BlockSource *a3, const BlockPos *a4, Entity *a5)
{
  (*(void (__cdecl **)(EndPortalBlock *, BlockSource *, const BlockPos *))(*(_DWORD *)this + 32))(this, a3, a4);
  return 1;
}


void __fastcall EndPortalBlock::~EndPortalBlock(EndPortalBlock *this)
{
  Block *v1; // r0@1

  v1 = Block::~Block(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall EndPortalBlock::entityInside(EndPortalBlock *this, BlockSource *a2, const BlockPos *a3, Entity *a4)
{
  BlockSource *v4; // r6@1
  EndPortalBlock *v5; // r7@1
  Entity *v6; // r8@1
  const BlockPos *v7; // r5@1
  Level *v8; // r0@1
  int result; // r0@1
  BlockSource *v10; // r0@6
  Dimension *v11; // r0@6
  int v12; // r4@6
  signed int v13; // r5@6
  int v14; // r0@8
  bool v15; // zf@8
  int v16; // [sp+8h] [bp-60h]@2
  signed int v17; // [sp+Ch] [bp-5Ch]@2
  int v18; // [sp+10h] [bp-58h]@2
  int v19; // [sp+14h] [bp-54h]@2
  int v20; // [sp+18h] [bp-50h]@2
  int v21; // [sp+1Ch] [bp-4Ch]@2
  int v22; // [sp+20h] [bp-48h]@2
  int v23; // [sp+24h] [bp-44h]@2
  int v24; // [sp+28h] [bp-40h]@2
  char v25; // [sp+2Ch] [bp-3Ch]@2
  int v26; // [sp+30h] [bp-38h]@2
  int v27; // [sp+34h] [bp-34h]@2
  int v28; // [sp+38h] [bp-30h]@2
  int v29; // [sp+3Ch] [bp-2Ch]@2
  int v30; // [sp+40h] [bp-28h]@2
  int v31; // [sp+44h] [bp-24h]@2
  char v32; // [sp+48h] [bp-20h]@2

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v8);
  if ( !result )
  {
    AABB::AABB((AABB *)&v26);
    (*(void (__fastcall **)(EndPortalBlock *, int *, BlockSource *, const BlockPos *))(*(_DWORD *)v5 + 12))(
      v5,
      &v26,
      v4,
      v7);
    v16 = 0;
    v17 = 1028443341;
    v18 = 0;
    AABB::grow((AABB *)&v19, (const Vec3 *)&v26, (int)&v16);
    v26 = v19;
    v27 = v20;
    v28 = v21;
    v29 = v22;
    v30 = v23;
    v31 = v24;
    v32 = v25;
    result = Entity::isRiding(v6);
    if ( !result )
    {
      result = Entity::isRide(v6);
      if ( !result )
      {
        result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v6 + 528))(v6);
        if ( result == 1 )
        {
          result = AABB::intersects((Entity *)((char *)v6 + 264), (const AABB *)&v26);
          if ( result == 1 )
          {
            v10 = (BlockSource *)Entity::getRegion(v6);
            v11 = (Dimension *)BlockSource::getDimension(v10);
            v12 = Dimension::getId(v11);
            v13 = 2;
            if ( v12 == 2 )
              v13 = 0;
            v14 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v6 + 488))(v6);
            v15 = v12 == 2;
              v15 = v14 == 319;
            if ( v15 )
              result = (*(int (__fastcall **)(Entity *, signed int))(*(_DWORD *)v6 + 1216))(v6, v13);
            else
              result = (*(int (__fastcall **)(Entity *, signed int, signed int))(*(_DWORD *)v6 + 532))(v6, v13, 1);
          }
        }
      }
    }
  }
  return result;
}


int __fastcall EndPortalBlock::neighborChanged(EndPortalBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  int result; // r0@2
  int v7; // r1@2
  int v8; // r2@2
  bool v9; // zf@2
  int v10; // r2@5
  int v11; // r1@5
  bool v12; // zf@5
  Dimension *v13; // r0@8
  EndPortalShape *v14; // r0@9
  char v15; // [sp+4h] [bp-4Ch]@10
  int v16; // [sp+8h] [bp-48h]@9
  int v17; // [sp+Ch] [bp-44h]@9
  int v18; // [sp+10h] [bp-40h]@9
  char v19; // [sp+14h] [bp-3Ch]@9

  v4 = a3;
  v5 = a2;
  if ( *(_DWORD *)a3 != *(_DWORD *)a4 )
    goto LABEL_13;
  result = *(_QWORD *)((char *)a3 + 4) >> 32;
  v7 = *(_QWORD *)((char *)a3 + 4);
  v8 = *((_DWORD *)a4 + 1);
  v9 = ++v7 == v8;
  if ( v7 == v8 )
    v9 = result == *((_DWORD *)a4 + 2);
  if ( !v9 )
  {
    v10 = *((_DWORD *)a4 + 1);
    v11 = *((_DWORD *)v4 + 1) - 1;
    v12 = v11 == v10;
    if ( v11 == v10 )
      v12 = result == *((_DWORD *)a4 + 2);
    if ( !v12 )
    {
LABEL_13:
      v13 = (Dimension *)BlockSource::getDimension(v5);
      result = Dimension::getId(v13);
      if ( !result )
      {
        v16 = *(_DWORD *)v4;
        v17 = *((_DWORD *)v4 + 1);
        v18 = *((_DWORD *)v4 + 2);
        v14 = (EndPortalShape *)EndPortalShape::EndPortalShape((int)&v19, v5, (int)&v16);
        result = EndPortalShape::isValid(v14, v5);
        if ( !result )
        {
          v15 = BlockID::AIR;
          result = BlockSource::setBlock((int)v5, v4, &v15, 3);
        }
      }
    }
  }
  return result;
}


int __fastcall EndPortalBlock::addCollisionShapes(int a1, int a2, int a3, AABB *a4, __int64 a5)
{
  Block::addCollisionShapes(a1, a2, a3, a4, a5);
  return 0;
}


int __fastcall EndPortalBlock::animateTick(EndPortalBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  Random *v8; // r11@1
  BlockSource *v10; // r10@1
  signed int v11; // r7@1
  int v15; // r0@2
  int result; // r0@2
  float v17; // [sp+10h] [bp-68h]@2
  int v18; // [sp+1Ch] [bp-5Ch]@2
  int v19; // [sp+20h] [bp-58h]@2
  int v20; // [sp+24h] [bp-54h]@2

  __asm
  {
    VLDR            D8, =2.32830644e-10
    VLDR            S18, =0.8
  }
  v8 = a4;
  _R5 = a3;
  v10 = a2;
  v11 = 10;
  do
    _R4 = *(_DWORD *)_R5;
    _R0 = Random::_genRandInt32(v8);
    __asm
    {
      VLDR            S0, [R5,#4]
      VLDR            S2, [R5,#8]
      VCVT.F32.S32    S20, S2
      VCVT.F32.S32    S22, S0
      VMOV            S0, R0
      VCVT.F64.U32    D12, S0
    }
      VMUL.F64        D1, D12, D8
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D8
      VMOV            S4, R4
      VCVT.F32.F64    S0, D0
      VCVT.F32.S32    S4, S4
    v18 = 0;
    v19 = 0;
    __asm { VCVT.F32.F64    S2, D1 }
    v20 = 0;
      VADD.F32        S24, S2, S4
      VADD.F32        S22, S22, S18
      VADD.F32        S20, S0, S20
    v15 = BlockSource::getLevel(v10);
      VSTR            S24, [SP,#0x78+var_68]
      VSTR            S22, [SP,#0x78+var_64]
      VSTR            S20, [SP,#0x78+var_60]
    result = Level::addParticle(v15, 4, (int)&v17);
    --v11;
  while ( v11 );
  return result;
}


signed int __fastcall EndPortalBlock::isWaterBlocking(EndPortalBlock *this)
{
  return 1;
}


int __fastcall EndPortalBlock::getResourceCount(EndPortalBlock *this, Random *a2, int a3, int a4)
{
  return 0;
}


int __fastcall EndPortalBlock::EndPortalBlock(int a1, const void **a2, char a3)
{
  int v3; // r4@1
  char v4; // r5@1
  const void **v5; // r6@1
  int v6; // r0@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = Material::getMaterial(25);
  EntityBlock::EntityBlock(v3, v5, v4, v6);
  *(_DWORD *)v3 = &loc_2708924;
  Block::setSolid((Block *)v3, 0);
  Block::setPushesOutItems((Block *)v3, 1);
  *(_DWORD *)(v3 + 24) = 16779264;
  *(_DWORD *)(v3 + 28) = 0;
  (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v3 + 460))(v3, 1065353216);
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)v3 + 480))(v3, &Color::BLACK);
  *(_DWORD *)(v3 + 20) = 9;
  *(_DWORD *)(v3 + 32) = 22;
  *(_DWORD *)(v3 + 84) = 0;
  return v3;
}
