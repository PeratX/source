

void __fastcall BasePressurePlateBlock::~BasePressurePlateBlock(BasePressurePlateBlock *this)
{
  Block *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_2722278;
  v2 = *((_DWORD *)this + 161);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  j_Block::~Block(v1);
  j_operator delete((void *)v1);
}


int __fastcall BasePressurePlateBlock::getSensitiveAABB(BasePressurePlateBlock *this, const BlockPos *a2, int _R2)
{
  int v10; // [sp+0h] [bp-18h]@0
  int v11; // [sp+4h] [bp-14h]@0
  int v12; // [sp+8h] [bp-10h]@0

  __asm
  {
    VLDR            S0, [R2]
    VLDR            S4, [R2,#8]
    VLDR            S2, [R2,#4]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S4, S4
    VLDR            S6, =0.0625
    VCVT.F32.S32    S2, S2
    VADD.F32        S8, S0, S6
    VADD.F32        S6, S4, S6
    VMOV            R2, S2
    VMOV            R1, S8
    VMOV            R3, S6
    VMOV.F32        S6, #0.9375
    VMOV.F32        S8, #0.25
    VADD.F32        S0, S0, S6
    VADD.F32        S4, S4, S6
    VADD.F32        S2, S2, S8
    VSTR            S0, [SP,#0x18+var_18]
    VSTR            S2, [SP,#0x18+var_14]
    VSTR            S4, [SP,#0x18+var_10]
  }
  return j_AABB::AABB(*(float *)&this, _R1, _R2, v10, v11, v12);
}


int __fastcall BasePressurePlateBlock::onLoaded(BasePressurePlateBlock *this, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  BasePressurePlateBlock *v4; // r6@1
  const BlockPos *v5; // r4@1
  Level *v6; // r0@1
  int result; // r0@1
  Dimension *v8; // r0@2
  int v9; // r0@2
  ProducerComponent *v10; // r7@2
  void (__fastcall *v11)(ProducerComponent *, int); // r8@3
  int v12; // r0@3

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (Level *)j_BlockSource::getLevel(a2);
  result = j_Level::isClientSide(v6);
  if ( !result )
  {
    v8 = (Dimension *)j_BlockSource::getDimension(v3);
    v9 = j_Dimension::getCircuitSystem(v8);
    result = j_CircuitSystem::create<ProducerComponent>(v9, v5, (int)v3, 0);
    v10 = (ProducerComponent *)result;
    if ( result )
    {
      v11 = *(void (__fastcall **)(ProducerComponent *, int))(*(_DWORD *)result + 16);
      v12 = (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)v4 + 508))(v4, v3, v5);
      v11(v10, v12);
      result = j_j_j__ZN17ProducerComponent16allowAttachmentsEb_1(v10, 1);
    }
  }
  return result;
}


int __fastcall BasePressurePlateBlock::neighborChanged(BasePressurePlateBlock *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  BlockSource *v4; // r5@1
  BasePressurePlateBlock *v5; // r6@1
  BlockPos *v6; // r4@1
  Level *v7; // r0@1
  int result; // r0@1
  char v9; // [sp+Ch] [bp-14h]@3

  v4 = a2;
  v5 = this;
  v6 = a3;
  v7 = (Level *)j_BlockSource::getLevel(a2);
  result = j_Level::isClientSide(v7);
  if ( !result )
  {
    result = (*(int (__fastcall **)(BasePressurePlateBlock *, BlockSource *, BlockPos *))(*(_DWORD *)v5 + 224))(
               v5,
               v4,
               v6);
    if ( !result )
    {
      (*(void (__fastcall **)(BasePressurePlateBlock *, BlockSource *, BlockPos *, _DWORD))(*(_DWORD *)v5 + 276))(
        v5,
        v4,
        v6,
        0);
      v9 = BlockID::AIR;
      result = j_BlockSource::setBlock((int)v4, v6, &v9, 3);
    }
  }
  return result;
}


signed int __fastcall BasePressurePlateBlock::checkIsPathable(BasePressurePlateBlock *this, Entity *a2, const BlockPos *a3, const BlockPos *a4)
{
  return 1;
}


int __fastcall BasePressurePlateBlock::BasePressurePlateBlock(int a1, const void **a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r4@1

  v4 = a3;
  v5 = a1;
  j_Block::Block(a1, a2, a3, a4);
  *(_DWORD *)v5 = &off_2722278;
  *(_DWORD *)(v5 + 644) = &unk_28898CC;
  j_Block::setTicking((Block *)v5, 0);
  j_Block::setSolid((Block *)v5, 0);
  *(_DWORD *)(v5 + 28) = 0;
  *(_DWORD *)(v5 + 24) = 33685504;
  Block::mTranslucency[v4] = 1045220557;
  return v5;
}


LevelChunk *__fastcall BasePressurePlateBlock::entityInside(BasePressurePlateBlock *this, BlockSource *a2, const BlockPos *a3, Entity *a4)
{
  BlockSource *v4; // r5@1
  BasePressurePlateBlock *v5; // r6@1
  Entity *v6; // r7@1
  const BlockPos *v7; // r4@1
  Level *v8; // r0@1
  LevelChunk *result; // r0@1
  int (__fastcall *v10)(BasePressurePlateBlock *, unsigned int); // r8@5
  unsigned int v11; // r7@5
  unsigned __int64 *v12; // r0@5
  int v13; // r8@5
  int v14; // r7@5
  int v15; // r0@7
  char v16; // [sp+4h] [bp-1Ch]@7

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (Level *)j_BlockSource::getLevel(a2);
  result = (LevelChunk *)j_Level::isClientSide(v8);
  if ( !result )
  {
    result = (LevelChunk *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)v6 + 488))(v6);
    if ( result != (LevelChunk *)69 )
    {
      if ( j_Entity::hasCategory((int)v6, 1) != 1
        || (result = (LevelChunk *)j_Player::canUseAbility((int)v6, &Abilities::DOORS_AND_SWITCHES),
            result == (LevelChunk *)1) )
      {
        v10 = *(int (__fastcall **)(BasePressurePlateBlock *, unsigned int))(*(_DWORD *)v5 + 512);
        v11 = j_BlockSource::getData(v4, v7);
        v12 = (unsigned __int64 *)j_Block::getBlockState((int)v5, 33);
        v13 = v10(v5, (v11 >> (*v12 + 1 - (*v12 >> 32))) & (0xFu >> (4 - (*v12 >> 32))));
        v14 = (*(int (__fastcall **)(BasePressurePlateBlock *, BlockSource *, const BlockPos *))(*(_DWORD *)v5 + 508))(
                v5,
                v4,
                v7);
        result = 0;
        if ( !v13 && v14 > 0 )
        {
          v15 = j_BlockSource::getTickQueue(v4, v7);
          v16 = *((_BYTE *)v5 + 4);
          j_BlockTickingQueue::remove(v15, (int)v7, &v16);
          result = j_BasePressurePlateBlock::checkPressed(v5, v4, v7, 0, v14);
        }
      }
    }
  }
  return result;
}


signed int __fastcall BasePressurePlateBlock::shouldConnectToRedstone(BasePressurePlateBlock *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  return 1;
}


LevelChunk *__fastcall BasePressurePlateBlock::tick(BasePressurePlateBlock *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  BlockSource *v4; // r5@1
  BasePressurePlateBlock *v5; // r6@1
  const BlockPos *v6; // r4@1
  Level *v7; // r0@1
  LevelChunk *result; // r0@1
  int (__fastcall *v9)(BasePressurePlateBlock *, unsigned int); // r8@2
  unsigned int v10; // r7@2
  unsigned __int64 *v11; // r0@2
  int v12; // r7@2
  int v13; // r0@2

  v4 = a2;
  v5 = this;
  v6 = a3;
  v7 = (Level *)j_BlockSource::getLevel(a2);
  result = (LevelChunk *)j_Level::isClientSide(v7);
  if ( !result )
  {
    v9 = *(int (__fastcall **)(BasePressurePlateBlock *, unsigned int))(*(_DWORD *)v5 + 512);
    v10 = j_BlockSource::getData(v4, v6);
    v11 = (unsigned __int64 *)j_Block::getBlockState((int)v5, 33);
    v12 = v9(v5, (v10 >> (*v11 + 1 - (*v11 >> 32))) & (0xFu >> (4 - (*v11 >> 32))));
    v13 = (*(int (__fastcall **)(BasePressurePlateBlock *, BlockSource *, const BlockPos *))(*(_DWORD *)v5 + 508))(
            v5,
            v4,
            v6);
    result = j_BasePressurePlateBlock::checkPressed(v5, v4, v6, v12, v13);
  }
  return result;
}


Block *__fastcall BasePressurePlateBlock::~BasePressurePlateBlock(BasePressurePlateBlock *this)
{
  Block *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_2722278;
  v2 = *((_DWORD *)this + 161);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  Block::~Block(v1);
  return v1;
}


int __fastcall BasePressurePlateBlock::getVisualShape(BasePressurePlateBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5)
{
  BasePressurePlateBlock *v5; // r5@1
  AABB *v6; // r4@1
  int (__fastcall *v7)(BasePressurePlateBlock *, unsigned int, AABB *, int); // r6@1
  unsigned int v8; // r0@1

  v5 = this;
  v6 = a4;
  v7 = *(int (__fastcall **)(BasePressurePlateBlock *, unsigned int, AABB *, int))(*(_DWORD *)this + 420);
  v8 = j_BlockSource::getData(a2, a3);
  return v7(v5, v8, v6, a5);
}


signed int __fastcall BasePressurePlateBlock::getCollisionShape(BasePressurePlateBlock *this, AABB *a2, BlockSource *a3, const BlockPos *a4, Entity *a5)
{
  AABB *v5; // r4@1
  int v6; // r0@1

  v5 = a2;
  v6 = (*(int (__cdecl **)(BasePressurePlateBlock *))(*(_DWORD *)this + 416))(this);
  *(_DWORD *)v5 = *(_DWORD *)v6;
  *((_DWORD *)v5 + 1) = *(_DWORD *)(v6 + 4);
  *((_DWORD *)v5 + 2) = *(_DWORD *)(v6 + 8);
  *((_DWORD *)v5 + 3) = *(_DWORD *)(v6 + 12);
  *((_DWORD *)v5 + 4) = *(_DWORD *)(v6 + 16);
  *((_DWORD *)v5 + 5) = *(_DWORD *)(v6 + 20);
  *((_BYTE *)v5 + 24) = *(_BYTE *)(v6 + 24);
  return 1;
}


signed int __fastcall BasePressurePlateBlock::getTickDelay(BasePressurePlateBlock *this)
{
  return 20;
}


signed int __fastcall BasePressurePlateBlock::isAttachedTo(BasePressurePlateBlock *this, BlockSource *a2, const BlockPos *a3, BlockPos *a4)
{
  int v4; // r0@1
  int v5; // r1@1
  int v6; // r2@1

  v4 = *(_DWORD *)a3;
  v5 = *((_DWORD *)a3 + 1);
  v6 = *((_DWORD *)a3 + 2);
  *(_DWORD *)a4 = v4;
  *((_DWORD *)a4 + 1) = v5 - 1;
  *((_DWORD *)a4 + 2) = v6;
  return 1;
}


unsigned int __fastcall BasePressurePlateBlock::getRedstoneSignal(BasePressurePlateBlock *this, int a2)
{
  unsigned int v2; // r4@1
  unsigned __int64 *v3; // r0@1

  v2 = a2;
  v3 = (unsigned __int64 *)j_Block::getBlockState((int)this, 33);
  return (0xFu >> (4 - (*v3 >> 32))) & (v2 >> (*v3 + 1 - (*v3 >> 32)));
}


AABB *__fastcall BasePressurePlateBlock::getVisualShape(BasePressurePlateBlock *this, int a2, AABB *a3, bool a4)
{
  unsigned int v4; // r5@1
  AABB *v5; // r4@1
  unsigned __int64 *v6; // r0@1
  const Vec3 *v7; // r2@2
  int *v8; // r1@2
  signed int v10; // [sp+0h] [bp-40h]@3
  signed int v11; // [sp+4h] [bp-3Ch]@3
  int v12; // [sp+8h] [bp-38h]@3
  int v13; // [sp+Ch] [bp-34h]@3
  int v14; // [sp+10h] [bp-30h]@3
  signed int v15; // [sp+14h] [bp-2Ch]@3
  int v16; // [sp+18h] [bp-28h]@2
  signed int v17; // [sp+1Ch] [bp-24h]@2
  signed int v18; // [sp+20h] [bp-20h]@2
  int v19; // [sp+24h] [bp-1Ch]@2
  int v20; // [sp+28h] [bp-18h]@2
  signed int v21; // [sp+2Ch] [bp-14h]@2

  v4 = a2;
  v5 = a3;
  v6 = (unsigned __int64 *)j_Block::getBlockState((int)this, 33);
  if ( (signed int)((0xFu >> (4 - (*v6 >> 32))) & (v4 >> (*v6 + 1 - (*v6 >> 32)))) <= 0 )
  {
    v13 = 1031798784;
    v7 = (const Vec3 *)&v10;
    v14 = 0;
    v15 = 1031798784;
    v10 = 1064304640;
    v11 = 1031798784;
    v12 = 1064304640;
    v8 = &v13;
  }
  else
    v19 = 1031798784;
    v7 = (const Vec3 *)&v16;
    v20 = 0;
    v21 = 1031798784;
    v16 = 1064304640;
    v17 = 1023410176;
    v18 = 1064304640;
    v8 = &v19;
  j_AABB::set(v5, (const Vec3 *)v8, v7);
  return v5;
}


void __fastcall BasePressurePlateBlock::~BasePressurePlateBlock(BasePressurePlateBlock *this)
{
  BasePressurePlateBlock::~BasePressurePlateBlock(this);
}


int __fastcall BasePressurePlateBlock::mayPlace(BasePressurePlateBlock *this, BlockSource *a2, const BlockPos *a3)
{
  __int64 v3; // kr00_8@1
  int v4; // r2@1
  __int64 v6; // [sp+4h] [bp-14h]@1
  int v7; // [sp+Ch] [bp-Ch]@1

  v3 = *(_QWORD *)a3;
  v4 = *((_DWORD *)a3 + 2);
  v6 = v3 - 0x100000000LL;
  v7 = v4;
  return j_BlockSource::canProvideSupport(a2, (int)&v6);
}


int __fastcall BasePressurePlateBlock::getVariant(BasePressurePlateBlock *this, int a2)
{
  return 0;
}


LevelChunk *__fastcall BasePressurePlateBlock::checkPressed(BasePressurePlateBlock *this, BlockSource *a2, const BlockPos *a3, int a4, int a5)
{
  BasePressurePlateBlock *v5; // r6@1
  BlockSource *v6; // r11@1
  const BlockPos *v7; // r5@1
  Level *v8; // r0@1
  Dimension *v9; // r0@2
  CircuitSystem *v10; // r0@2
  BlockState *v11; // r7@3
  int v12; // r4@3
  __int64 v13; // r8@3
  LevelChunk *v14; // r1@3
  LevelChunk *result; // r0@3
  int v16; // r8@8
  int v17; // r1@8
  int v18; // r12@8
  int v19; // r0@8
  LevelChunk **v20; // r4@12
  unsigned int v21; // r0@12
  int v22; // [sp+Ch] [bp-64h]@1
  char v23; // [sp+14h] [bp-5Ch]@12
  int v24; // [sp+18h] [bp-58h]@8
  signed int v25; // [sp+1Ch] [bp-54h]@8
  signed int v26; // [sp+20h] [bp-50h]@8
  int v27; // [sp+24h] [bp-4Ch]@8
  int v28; // [sp+28h] [bp-48h]@8
  int v29; // [sp+2Ch] [bp-44h]@8
  int v30; // [sp+30h] [bp-40h]@8
  int v31; // [sp+34h] [bp-3Ch]@8
  int v32; // [sp+38h] [bp-38h]@8
  char v33; // [sp+3Ch] [bp-34h]@8
  char v34; // [sp+48h] [bp-28h]@3
  char v35; // [sp+49h] [bp-27h]@3

  v5 = this;
  v6 = a2;
  v22 = a4;
  v7 = a3;
  v8 = (Level *)j_BlockSource::getLevel(a2);
  if ( !j_Level::isClientSide(v8) )
  {
    v9 = (Dimension *)j_BlockSource::getDimension(v6);
    v10 = (CircuitSystem *)j_Dimension::getCircuitSystem(v9);
    j_CircuitSystem::setStrength(v10, v7, a5);
  }
  v11 = (BlockState *)j_Block::getBlockState((int)v5, 33);
  v12 = (*(int (__fastcall **)(BasePressurePlateBlock *, int))(*(_DWORD *)v5 + 516))(v5, a5);
  v13 = *(_QWORD *)v11;
  j_BlockState::getMask(v11);
  v34 = *((_BYTE *)v5 + 4);
  v35 = v12 << (v13 + 1 - BYTE4(v13));
  j_BlockSource::setBlockAndData((int)v6, v7, (int)&v34, 3, 0);
  v14 = 0;
  result = 0;
  if ( v22 > 0 )
    result = (LevelChunk *)1;
  if ( a5 > 0 )
    v14 = (LevelChunk *)1;
  if ( v14 != result )
    v16 = j_BlockSource::getLevel(v6);
    v24 = 1056964608;
    v25 = 1036831949;
    v26 = 1056964608;
    j_BlockPos::BlockPos((int)&v27, (int)&v24);
    v17 = *((_DWORD *)v7 + 1);
    v18 = *((_DWORD *)v7 + 2);
    v30 = *(_DWORD *)v7 + v27;
    v31 = v28 + v17;
    v32 = v29 + v18;
    j_Vec3::Vec3((int)&v33, (int)&v30);
    v19 = 500;
    if ( a5 > 0 )
      v19 = 600;
    result = (LevelChunk *)j_Level::broadcastDimensionEvent(v16, v6, 3500, (int)&v33, v19);
    v20 = (LevelChunk **)j_BlockSource::getTickQueue(v6, v7);
    v23 = *((_BYTE *)v5 + 4);
    v21 = (*(int (__fastcall **)(BasePressurePlateBlock *))(*(_DWORD *)v5 + 504))(v5);
    result = j_BlockTickingQueue::add(v20, v6, (int)v7, &v23, v21, 0);
  return result;
}


_DWORD *__fastcall BasePressurePlateBlock::getAABB(BasePressurePlateBlock *this, BlockSource *a2, const BlockPos *a3, AABB *a4, int a5, int a6, int a7)
{
  const BlockPos *v7; // r5@1
  AABB *v8; // r4@1
  _DWORD *result; // r0@2
  char v10; // [sp+4h] [bp-1Ch]@2

  v7 = a3;
  v8 = a4;
  if ( a6 == 1 )
  {
    (*(void (__cdecl **)(BasePressurePlateBlock *))(*(_DWORD *)this + 12))(this);
    j_Vec3::Vec3((int)&v10, (int)v7);
    result = (_DWORD *)j_AABB::move(v8, (const Vec3 *)&v10);
  }
  else
    result = &AABB::EMPTY;
  return result;
}
