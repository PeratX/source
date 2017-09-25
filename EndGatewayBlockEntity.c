

int __fastcall EndGatewayBlockEntity::getSpawnPercentage(EndGatewayBlockEntity *this)
{
  int result; // r0@5

  __asm
  {
    VLDR            S0, [R0,#0x68]
    VMOV.F32        S4, #1.0
    VLDR            S2, =0.005
    VCVT.F32.S32    S0, S0
    VMUL.F32        S0, S0, S2
    VLDR            S2, =0.0
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S0, S4
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S2, S0 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S2, S4 }
  __asm { VMOV            R0, S2 }
  return result;
}


signed int __fastcall EndGatewayBlockEntity::save(EndGatewayBlockEntity *this, CompoundTag *a2)
{
  CompoundTag *v2; // r6@1
  EndGatewayBlockEntity *v3; // r5@1
  void *v4; // r0@1
  void *v5; // r0@2
  int v6; // r1@3
  void **v7; // r0@3
  void **v8; // r0@3
  int v9; // r1@3
  void *v10; // r0@7
  unsigned int *v12; // r2@9
  signed int v13; // r1@11
  unsigned int *v14; // r2@13
  signed int v15; // r1@15
  unsigned int *v16; // r2@17
  signed int v17; // r1@19
  int v18; // [sp+4h] [bp-34h]@3
  int v19; // [sp+8h] [bp-30h]@3
  int v20; // [sp+10h] [bp-28h]@3
  int v21; // [sp+18h] [bp-20h]@2
  int v22; // [sp+20h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  BlockEntity::save(this, a2);
  sub_21E94B4((void **)&v22, "Age");
  CompoundTag::putInt((int)v2, (const void **)&v22, *((_DWORD *)v3 + 26));
  v4 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v22 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v21, "ExactTeleport");
  CompoundTag::putBoolean((int)v2, (const void **)&v21, *((_BYTE *)v3 + 124));
  v5 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v21 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v20, "ExitPortal");
  v6 = *((_DWORD *)v3 + 28);
  v18 = 0;
  ListTagIntAdder::operator()((void **)&v18, v6);
  v7 = ListTagIntAdder::operator()((void **)&v18, *((_DWORD *)v3 + 29));
  v8 = ListTagIntAdder::operator()(v7, *((_DWORD *)v3 + 30));
  v9 = (int)*v8;
  *v8 = 0;
  v19 = v9;
  CompoundTag::put((int)v2, (const void **)&v20, &v19);
  if ( v19 )
    (*(void (**)(void))(*(_DWORD *)v19 + 4))();
  v19 = 0;
  if ( v18 )
    (*(void (**)(void))(*(_DWORD *)v18 + 4))();
  v10 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v20 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  return 1;
}


int __fastcall EndGatewayBlockEntity::canTeleport(EndGatewayBlockEntity *this, Entity *a2, BlockSource *a3)
{
  Entity *v3; // r4@1
  int result; // r0@3

  v3 = a2;
  if ( BlockSource::getDimensionId(a3) != 2 || Entity::isRiding(v3) )
    result = 0;
  else
    result = Entity::isRide(v3) ^ 1;
  return result;
}


BlockSource *__fastcall EndGatewayBlockEntity::_findExitPosition(EndGatewayBlockEntity *this, BlockSource *a2, BlockSource *a3)
{
  EndGatewayBlockEntity *v3; // r8@1
  BlockSource *v4; // r7@1
  const BlockPos *v5; // r5@1
  TheEndDimension *v6; // r6@1
  ChunkSource *v7; // r4@1
  char *v8; // r0@2
  char *v9; // r0@2
  BlockSourceListener *v10; // r6@3
  int v11; // r0@3
  int v12; // r2@3
  int v13; // r1@3
  char v15; // [sp+Ch] [bp-9Ch]@3
  int v16; // [sp+10h] [bp-98h]@3
  int v17; // [sp+14h] [bp-94h]@3
  char v18; // [sp+18h] [bp-90h]@3

  v3 = this;
  v4 = a2;
  v5 = (BlockSource *)((char *)a2 + 112);
  v6 = (TheEndDimension *)BlockSource::getDimension(a3);
  v7 = (ChunkSource *)TheEndDimension::getGatewayChunkAt(v6, v5);
  if ( !v7 )
  {
    v8 = BlockEntity::getPosition(v4);
    TheEndDimension::addGatewayChunkSource(v6, (const BlockPos *)v8, (BlockSource *)((char *)v4 + 112));
    v9 = BlockEntity::getPosition(v4);
    TheEndDimension::addGatewayChunkSource(v6, (BlockSource *)((char *)v4 + 112), (const BlockPos *)v9);
    v7 = (ChunkSource *)TheEndDimension::getGatewayChunkAt(v6, (BlockSource *)((char *)v4 + 112));
  }
  v10 = (BlockSourceListener *)ChunkSource::getLevel(v7);
  v11 = ChunkSource::getDimension(v7);
  BlockSource::BlockSource((int)&v18, v10, v11, (int)v7, 0, 0);
  EndGatewayBlockEntity::findTallestBlock((EndGatewayBlockEntity *)&v15, (BlockSource *)&v18, v5, 5, 0);
  v12 = v17;
  v13 = v16 + 1;
  *(_DWORD *)v3 = *(_DWORD *)&v15;
  *((_DWORD *)v3 + 1) = v13;
  *((_DWORD *)v3 + 2) = v12;
  return BlockSource::~BlockSource((BlockSource *)&v18);
}


int __fastcall EndGatewayBlockEntity::EndGatewayBlockEntity(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v8, "EndGateway");
  BlockEntity::BlockEntity(v3, 24, v2);
  v4 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  *(_DWORD *)v3 = &off_2709AC4;
  *(_DWORD *)(v3 + 104) = 0;
  *(_DWORD *)(v3 + 108) = 0;
  *(_DWORD *)(v3 + 112) = BlockPos::ZERO;
  *(_DWORD *)(v3 + 116) = unk_2816278;
  *(_DWORD *)(v3 + 120) = dword_281627C;
  *(_BYTE *)(v3 + 124) = 0;
  *(_DWORD *)(v3 + 84) = 11;
  return v3;
}


void __fastcall EndGatewayBlockEntity::~EndGatewayBlockEntity(EndGatewayBlockEntity *this)
{
  BlockEntity *v1; // r0@1

  v1 = BlockEntity::~BlockEntity(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall EndGatewayBlockEntity::createExitPortal(EndGatewayBlockEntity *this, BlockSource *a2, const BlockPos *a3, LevelChunk *a4, const BlockPos *a5)
{
  BlockSource *v5; // r11@1
  LevelChunk *v6; // r9@1
  LevelChunk *v7; // r8@1
  BlockSource *v8; // r10@1
  unsigned int v9; // r0@1
  int v10; // r1@1
  signed int v11; // r2@1
  int v12; // r0@2
  int *v13; // r7@2
  int v14; // r4@2
  EndGatewayFeature *v15; // r0@3
  int v16; // r0@3
  int v17; // r7@3
  int v18; // r0@6
  int v19; // r5@6
  int v21; // [sp+0h] [bp-A08h]@6
  void **v22; // [sp+4h] [bp-A04h]@3
  unsigned int v23; // [sp+10h] [bp-9F8h]@1
  unsigned int v24; // [sp+14h] [bp-9F4h]@1
  int v25; // [sp+9D4h] [bp-34h]@1
  char v26; // [sp+9D8h] [bp-30h]@1
  int v27; // [sp+9DCh] [bp-2Ch]@1
  int v28; // [sp+9E0h] [bp-28h]@3

  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = sub_21E67AC((int)&Random::mRandomDevice);
  v23 = v9;
  v25 = 625;
  v10 = 0;
  v11 = 1;
  v26 = 0;
  v27 = 0;
  v24 = v9;
  do
  {
    v12 = v9 ^ (v9 >> 30);
    v13 = (int *)(&v23 + v10);
    v14 = v10++ + 1812433253 * v12;
    v9 = v11++ + 1812433253 * v12;
    v13[2] = v14 + 1;
  }
  while ( v10 != 397 );
  v25 = 624;
  v28 = 398;
  v15 = (EndGatewayFeature *)Feature::Feature((Feature *)&v22, 0);
  v22 = &off_2718A50;
  EndGatewayFeature::place(v15, v5, v8, (Random *)&v23);
  v16 = BlockSource::getBlockEntity(v5, v8);
  v17 = v16;
  if ( v16 && BlockEntity::isType(v16, 24) == 1 )
    *(_BYTE *)(v17 + 124) = 0;
    *(_DWORD *)(v17 + 112) = *(_DWORD *)v6;
    *(_DWORD *)(v17 + 116) = *((_DWORD *)v6 + 1);
    *(_DWORD *)(v17 + 120) = *((_DWORD *)v6 + 2);
    BlockEntity::setChanged((BlockEntity *)v17);
  ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v21, v6);
  v18 = LevelChunk::getBlockEntity(v7, (const ChunkBlockPos *)&v21);
  v19 = v18;
  if ( v18 && BlockEntity::isType(v18, 24) == 1 )
    *(_BYTE *)(v19 + 124) = 0;
    *(_DWORD *)(v19 + 112) = *(_DWORD *)v8;
    *(_DWORD *)(v19 + 116) = *((_DWORD *)v8 + 1);
    *(_DWORD *)(v19 + 120) = *((_DWORD *)v8 + 2);
    BlockEntity::setChanged((BlockEntity *)v19);
  return Feature::~Feature((Feature *)&v22);
}


int __fastcall EndGatewayBlockEntity::_getHighestSection(int a1, BlockSource *a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r4@1
  Dimension *v6; // r0@1
  int v7; // r0@1
  int v8; // r2@1
  int v9; // r3@1
  int v10; // r2@1
  int v11; // lr@1
  int v12; // r1@2
  int v13; // r4@2
  int v14; // r12@2
  signed int v15; // r0@3
  _BYTE *v16; // r3@3
  int v17; // r1@4
  bool v18; // zf@4
  int v19; // r1@10
  int v20; // r1@11
  int v21; // r6@11
  bool v22; // zf@11
  int v23; // r1@15
  int v24; // r6@15
  bool v25; // zf@15
  int v26; // r1@19
  int v27; // r6@19
  bool v28; // zf@19
  int v29; // r1@23
  int v30; // r6@23
  bool v31; // zf@23
  int v32; // r1@27
  int v33; // r6@27
  bool v34; // zf@27
  int v35; // r1@31
  int v36; // r6@31
  bool v37; // zf@31
  int result; // r0@36

  v4 = a4;
  v5 = a3;
  v6 = (Dimension *)BlockSource::getDimension(a2);
  v7 = Dimension::getWorldGenerator(v6);
  v8 = *(_DWORD *)v4;
  v9 = *(_DWORD *)(v4 + 8);
  (*(void (**)(void))(*(_DWORD *)v7 + 16))();
  v10 = *(_DWORD *)(v5 + 20);
  v11 = v10 - 1;
  if ( v10 - 1 < 0 )
  {
    result = 0;
  }
  else
    v12 = *(_DWORD *)v5;
    v13 = 16 * v10;
    v14 = v12 + v10 - 1;
    while ( 2 )
    {
      v15 = 0;
      v16 = (_BYTE *)v14;
      do
      {
        v17 = *v16;
        v18 = v17 == BlockID::AIR;
        if ( v17 == BlockID::AIR )
        {
          v17 = v16[v13];
          v18 = v17 == BlockID::AIR;
        }
        if ( v18 )
          v17 = (int)&v16[v13];
          v18 = *(&v16[v13] + v13) == BlockID::AIR;
        if ( !v18 )
          return v11;
        v19 = v17 + v13;
        if ( *(_BYTE *)(v19 + v13) != BlockID::AIR )
        v20 = v19 + v13;
        v21 = *(_BYTE *)(v20 + v13);
        v22 = v21 == BlockID::AIR;
        if ( v21 == BlockID::AIR )
          v20 += v13;
          v22 = *(_BYTE *)(v20 + v13) == BlockID::AIR;
        if ( !v22 )
        v23 = v20 + v13;
        v24 = *(_BYTE *)(v23 + v13);
        v25 = v24 == BlockID::AIR;
        if ( v24 == BlockID::AIR )
          v23 += v13;
          v25 = *(_BYTE *)(v23 + v13) == BlockID::AIR;
        if ( !v25 )
        v26 = v23 + v13;
        v27 = *(_BYTE *)(v26 + v13);
        v28 = v27 == BlockID::AIR;
        if ( v27 == BlockID::AIR )
          v26 += v13;
          v28 = *(_BYTE *)(v26 + v13) == BlockID::AIR;
        if ( !v28 )
        v29 = v26 + v13;
        v30 = *(_BYTE *)(v29 + v13);
        v31 = v30 == BlockID::AIR;
        if ( v30 == BlockID::AIR )
          v29 += v13;
          v31 = *(_BYTE *)(v29 + v13) == BlockID::AIR;
        if ( !v31 )
        v32 = v29 + v13;
        v33 = *(_BYTE *)(v32 + v13);
        v34 = v33 == BlockID::AIR;
        if ( v33 == BlockID::AIR )
          v32 += v13;
          v34 = *(_BYTE *)(v32 + v13) == BlockID::AIR;
        if ( !v34 )
        v35 = v32 + v13;
        v36 = *(_BYTE *)(v35 + v13);
        v37 = v36 == BlockID::AIR;
        if ( v36 == BlockID::AIR )
          v37 = *(_BYTE *)(v35 + v13 + v13) == BlockID::AIR;
        if ( !v37 )
        ++v15;
        v16 += v10;
      }
      while ( v15 < 16 );
      --v11;
      --v14;
      result = 0;
      if ( v11 >= 0 )
        continue;
      break;
    }
  return result;
}


int __fastcall EndGatewayBlockEntity::triggerCooldown(EndGatewayBlockEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r5@1
  EndGatewayBlockEntity *v3; // r4@1
  Level *v4; // r0@1
  int result; // r0@1
  char *v6; // r0@2

  v2 = a2;
  v3 = this;
  v4 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v4);
  if ( !result )
  {
    *((_DWORD *)v3 + 27) = 20;
    v6 = BlockEntity::getPosition(v3);
    BlockSource::blockEvent(v2, (const BlockPos *)v6, 1, 0);
    result = j_j_j__ZN11BlockEntity10setChangedEv_0(v3);
  }
  return result;
}


signed int __fastcall EndGatewayBlockEntity::isSpawning(EndGatewayBlockEntity *this)
{
  signed int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 26);
  result = 0;
  if ( v1 < 200 )
    result = 1;
  return result;
}


int __fastcall EndGatewayBlockEntity::load(EndGatewayBlockEntity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  EndGatewayBlockEntity *v3; // r4@1
  void *v4; // r0@1
  ListTag *v5; // r6@2
  void *v6; // r0@2
  void *v7; // r0@3
  int v8; // r5@4
  int v9; // r7@4
  int result; // r0@4
  unsigned int *v11; // r2@5
  signed int v12; // r1@7
  unsigned int *v13; // r2@9
  signed int v14; // r1@11
  unsigned int *v15; // r2@13
  signed int v16; // r1@15
  int v17; // [sp+4h] [bp-2Ch]@3
  int v18; // [sp+Ch] [bp-24h]@2
  int v19; // [sp+14h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  BlockEntity::load(this, a2);
  sub_21E94B4((void **)&v19, "Age");
  *((_DWORD *)v3 + 26) = CompoundTag::getInt((int)v2, (const void **)&v19);
  v4 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v18, "ExitPortal");
  v5 = (ListTag *)CompoundTag::getList((int)v2, (const void **)&v18);
  v6 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v18 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v17, "ExactTeleport");
  *((_BYTE *)v3 + 124) = CompoundTag::getBoolean((int)v2, (const void **)&v17);
  v7 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = ListTag::getInt(v5, 0);
  v9 = ListTag::getInt(v5, 1);
  result = ListTag::getInt(v5, 2);
  *((_DWORD *)v3 + 28) = v8;
  *((_DWORD *)v3 + 29) = v9;
  *((_DWORD *)v3 + 30) = result;
  return result;
}


int __fastcall EndGatewayBlockEntity::getParticleAmount(EndGatewayBlockEntity *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r9@1
  BlockSource *v4; // r10@1
  int v5; // r7@1
  _BYTE *v10; // r4@2
  int v11; // r6@2
  int v12; // t1@3
  int v13; // r0@3
  char v16; // [sp+4h] [bp-5Ch]@3
  char v17; // [sp+10h] [bp-50h]@3
  char v18; // [sp+14h] [bp-4Ch]@1

  v3 = a3;
  v4 = a2;
  AABB::AABB((AABB *)&v18);
  v5 = unk_2700410;
  if ( unk_2700410 )
  {
    __asm { VMOV.F32        S16, #1.0 }
    v10 = (_BYTE *)Facing::ALL_FACES;
    v11 = 0;
    do
    {
      v12 = *v10++;
      BlockPos::relative((BlockPos *)&v16, (int)v3, v12, 1);
      BlockSource::getBlockAndData((BlockSource *)&v17, v4, (int)&v16);
      v13 = FullBlock::getBlock((FullBlock *)&v17);
      (*(void (**)(void))(*(_DWORD *)v13 + 420))();
      _R0 = AABB::getVolume((AABB *)&v18);
      __asm
      {
        VMOV            S0, R0
        VCMPE.F32       S0, S16
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        v11 += 10;
      --v5;
    }
    while ( v5 );
  }
  else
  return v11;
}


CompoundTag *__fastcall EndGatewayBlockEntity::getUpdatePacket(EndGatewayBlockEntity *this, BlockSource *a2)
{
  EndGatewayBlockEntity *v2; // r4@1
  BlockSource *v3; // r6@1
  _DWORD *v4; // r5@1
  int v5; // r3@1
  int v6; // r1@1
  int v7; // r2@1
  int v9; // [sp+0h] [bp-48h]@1
  char v10; // [sp+1Ch] [bp-2Ch]@1

  v2 = this;
  v3 = a2;
  CompoundTag::CompoundTag((int)&v9);
  (*(void (__fastcall **)(BlockSource *, int *))(*(_DWORD *)v3 + 12))(v3, &v9);
  v4 = operator new(0x38u);
  CompoundTag::CompoundTag((int)&v10, (int)&v9);
  v4[1] = 2;
  v4[2] = 1;
  v5 = (int)(v4 + 4);
  *((_BYTE *)v4 + 12) = 0;
  *v4 = &off_26E97EC;
  v6 = *((_DWORD *)v3 + 9);
  v7 = *((_DWORD *)v3 + 10);
  *(_DWORD *)v5 = *((_DWORD *)v3 + 8);
  *(_DWORD *)(v5 + 4) = v6;
  *(_DWORD *)(v5 + 8) = v7;
  CompoundTag::CompoundTag((int)(v4 + 7), (int)&v10);
  CompoundTag::~CompoundTag((CompoundTag *)&v10);
  *(_DWORD *)v2 = v4;
  return CompoundTag::~CompoundTag((CompoundTag *)&v9);
}


int __fastcall EndGatewayBlockEntity::triggerEvent(int result, int a2, int a3)
{
  if ( a2 == 1 )
    *(_DWORD *)(result + 108) = 20;
  else
    result = j_j_j__ZN11BlockEntity12triggerEventEii((BlockEntity *)result, a2, a3);
  return result;
}


int __fastcall EndGatewayBlockEntity::teleportEntity(EndGatewayBlockEntity *this, Entity *a2)
{
  Entity *v2; // r6@1
  EndGatewayBlockEntity *v3; // r4@1
  Level *v4; // r7@1
  BlockSource *v5; // r5@1
  int result; // r0@1
  int v14; // r7@11
  int v15; // r1@11
  int v16; // r2@11
  int v17; // r1@11
  void *v18; // r8@15
  Dimension *v19; // r7@15
  Level *v20; // r0@15
  Level *v21; // r0@19
  int v22; // r0@19
  Level *v23; // r0@20
  char *v24; // r0@21
  void *v25; // [sp+4h] [bp-84h]@15
  void **v26; // [sp+8h] [bp-80h]@11
  signed int v27; // [sp+Ch] [bp-7Ch]@11
  signed int v28; // [sp+10h] [bp-78h]@11
  char v29; // [sp+14h] [bp-74h]@11
  int v30; // [sp+18h] [bp-70h]@11
  int v31; // [sp+20h] [bp-68h]@11
  int v32; // [sp+24h] [bp-64h]@11
  int v33; // [sp+28h] [bp-60h]@11
  __int64 v34; // [sp+2Ch] [bp-5Ch]@11
  int v35; // [sp+34h] [bp-54h]@11
  char v36; // [sp+38h] [bp-50h]@11
  char v37; // [sp+39h] [bp-4Fh]@11
  int v38; // [sp+40h] [bp-48h]@12
  int v39; // [sp+44h] [bp-44h]@18
  float v40; // [sp+50h] [bp-38h]@11
  int v41; // [sp+5Ch] [bp-2Ch]@8
  int v42; // [sp+60h] [bp-28h]@8
  int v43; // [sp+64h] [bp-24h]@8

  v2 = a2;
  v3 = this;
  v4 = (Level *)Entity::getLevel(a2);
  v5 = (BlockSource *)Entity::getRegion(v2);
  result = Level::isClientSide(v4);
  if ( !result )
  {
    result = *((_DWORD *)v3 + 27);
    if ( result <= 0 )
    {
      result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v2 + 524))(v2);
      if ( result == 2 )
      {
        *((_DWORD *)v3 + 27) = 100;
        _R0 = *((_DWORD *)v3 + 28);
        if ( _R0 != BlockPos::ZERO || *((_DWORD *)v3 + 29) != unk_2816278 || *((_DWORD *)v3 + 30) != dword_281627C )
        {
          if ( *((_BYTE *)v3 + 124) )
          {
            v41 = *((_DWORD *)v3 + 28);
            _R1 = *((_DWORD *)v3 + 29);
            v42 = *((_DWORD *)v3 + 29);
            _R2 = *((_DWORD *)v3 + 30);
            v43 = *((_DWORD *)v3 + 30);
          }
          else
            EndGatewayBlockEntity::_findExitPosition((EndGatewayBlockEntity *)&v41, v3, v5);
            _R0 = v41;
            _R1 = v42;
            _R2 = v43;
          __asm
            VMOV            S2, R0
            VMOV            S4, R1
            VMOV            S6, R2
            VCVT.F32.S32    S2, S2
            VMOV.F32        S0, #0.5
            VCVT.F32.S32    S4, S4
            VCVT.F32.S32    S6, S6
            VADD.F32        S2, S2, S0
            VADD.F32        S4, S4, S0
            VADD.F32        S0, S6, S0
            VSTR            S2, [SP,#0x88+var_38]
            VSTR            S4, [SP,#0x88+var_34]
            VSTR            S0, [SP,#0x88+var_30]
          if ( Entity::hasType((int)v2, 319) == 1 )
            (*(void (__fastcall **)(Entity *, float *, _DWORD, signed int))(*(_DWORD *)v2 + 104))(v2, &v40, 0, 1);
            v14 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v2 + 52))(v2);
            v27 = 2;
            v28 = 1;
            v29 = 0;
            v26 = &off_26DA5F8;
            Entity::getRuntimeID((Entity *)&v30, (int)v2);
            v15 = *(_DWORD *)(v14 + 4);
            v16 = *(_DWORD *)(v14 + 8);
            v31 = *(_DWORD *)v14;
            v32 = v15;
            v33 = v16;
            v34 = *((_QWORD *)v2 + 15);
            v35 = *((_DWORD *)v2 + 855);
            v36 = 2;
            v37 = *((_BYTE *)v2 + 216);
            v17 = *((_DWORD *)v2 + 128);
            if ( v17 )
            {
              Entity::getRuntimeID((Entity *)&v38, v17);
            }
            else
              v38 = 0;
              v39 = 0;
            v21 = (Level *)Entity::getLevel(v2);
            v22 = Level::getPacketSender(v21);
            (*(void (**)(void))(*(_DWORD *)v22 + 8))();
            if ( Entity::hasCategory((int)v2, 2) == 1 )
              (*(void (__fastcall **)(Entity *, _DWORD *, _DWORD *, _DWORD))(*(_DWORD *)v2 + 112))(
                v2,
                &Vec3::ZERO,
                &Vec2::ZERO,
                0);
              Entity::dropLeash(v2, 1, 0);
            (*(void (__fastcall **)(Entity *, float *))(*(_DWORD *)v2 + 48))(v2, &v40);
            v18 = operator new(0x1Cu);
            CompoundTag::CompoundTag((int)v18);
            (*(void (__fastcall **)(Entity *, void *))(*(_DWORD *)v2 + 472))(v2, v18);
            v19 = (Dimension *)Entity::getDimension(v2);
            Entity::transferTickingArea(v2, v19);
            v20 = (Level *)BlockSource::getLevel(v5);
            Level::forceRemoveEntity(v20, v2);
            v25 = v18;
            Dimension::transferEntity((int)v19, (int)&v40, (const CompoundTag **)&v25);
            if ( v25 )
              (*(void (**)(void))(*(_DWORD *)v25 + 4))();
            v25 = 0;
        }
        v23 = (Level *)BlockSource::getLevel(v5);
        result = Level::isClientSide(v23);
        if ( !result )
          *((_DWORD *)v3 + 27) = 20;
          v24 = BlockEntity::getPosition(v3);
          BlockSource::blockEvent(v5, (const BlockPos *)v24, 1, 0);
          result = BlockEntity::setChanged(v3);
      }
    }
  }
  return result;
}


int __fastcall EndGatewayBlockEntity::getCoolDownPercentage(EndGatewayBlockEntity *this)
{
  int result; // r0@5

  __asm
  {
    VLDR            S0, [R0,#0x6C]
    VMOV.F32        S4, #1.0
    VLDR            S2, =0.05
    VCVT.F32.S32    S0, S0
    VMUL.F32        S0, S0, S2
    VLDR            S2, =0.0
    VMOV.F32        S6, S2
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S0, S4
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S6, S0 }
    VSUB.F32        S6, S4, S6
    __asm { VMOVGT.F32      S6, S2 }
  __asm { VMOV            R0, S6 }
  return result;
}


int __fastcall EndGatewayBlockEntity::setExitPosition(int result, const BlockPos *a2, bool a3)
{
  *(_BYTE *)(result + 124) = a3;
  *(_DWORD *)(result + 112) = *(_DWORD *)a2;
  *(_DWORD *)(result + 116) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 120) = *((_DWORD *)a2 + 2);
  return result;
}


signed int __fastcall EndGatewayBlockEntity::isCoolingDown(EndGatewayBlockEntity *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 27);
  result = 0;
  if ( v1 > 0 )
    result = 1;
  return result;
}


signed int __fastcall EndGatewayBlockEntity::hasAlphaLayer(EndGatewayBlockEntity *this)
{
  return 1;
}


void __fastcall EndGatewayBlockEntity::~EndGatewayBlockEntity(EndGatewayBlockEntity *this)
{
  EndGatewayBlockEntity::~EndGatewayBlockEntity(this);
}


int *__fastcall EndGatewayBlockEntity::findExitPortal(EndGatewayBlockEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r9@1
  BlockEntity *v4; // r8@1
  int v12; // r0@4
  signed int v13; // r7@5
  int v14; // r0@6
  int v15; // r0@6
  int v16; // r0@8
  signed int v17; // r7@9
  int v18; // r0@10
  int v19; // r0@10
  TheEndDimension *v20; // r4@12
  char *v21; // r5@12
  char *v22; // r0@12
  char v24; // [sp+8h] [bp-80A8h]@12
  char v25; // [sp+14h] [bp-809Ch]@12
  char v26; // [sp+20h] [bp-8090h]@8
  char v27; // [sp+2Ch] [bp-8084h]@4
  char *v28; // [sp+38h] [bp-8078h]@4
  int *v29; // [sp+3Ch] [bp-8074h]@4
  int v30; // [sp+40h] [bp-8070h]@4
  int v31; // [sp+44h] [bp-806Ch]@4
  int v32; // [sp+48h] [bp-8068h]@4
  signed int v33; // [sp+4Ch] [bp-8064h]@4
  signed int v34; // [sp+50h] [bp-8060h]@4
  char v35; // [sp+54h] [bp-805Ch]@4
  int v36; // [sp+8054h] [bp-5Ch]@1

  v2 = a2;
  _R5 = &v36;
  v4 = this;
  _R4 = *(_DWORD *)BlockEntity::getPosition(this);
  _R0 = BlockEntity::getPosition(v4);
  __asm
  {
    VLDR            S2, [R0,#8]
    VMOV            S0, R4
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VMUL.F32        S4, S0, S0
    VMUL.F32        S6, S2, S2
    VADD.F32        S4, S6, S4
    VLDR            S6, =0.0001
    VSQRT.F32       S4, S4
    VCMPE.F32       S4, S6
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    _R0 = &Vec3::ZERO;
    __asm
    {
      VLDR            S16, [R0]
      VLDR            S18, [R0,#4]
      VLDR            S20, [R0,#8]
    }
  else
      VDIV.F32        S20, S2, S4
      VDIV.F32        S16, S0, S4
      VLDR            S18, =0.0
    VLDR            S0, =1024.0
    VMUL.F32        S2, S16, S0
    VMUL.F32        S4, S18, S0
    VMUL.F32        S0, S20, S0
    VSTR            S2, [R5]
    VSTR            S4, [R5,#4]
    VSTR            S0, [R5,#8]
  v30 = 0;
  v31 = 0;
  v32 = 16;
  v33 = 128;
  v34 = 16;
  v28 = &v35;
  v29 = &v36;
  v12 = BlockPos::BlockPos((int)&v27, (int)&v36);
  if ( EndGatewayBlockEntity::_getHighestSection(v12, v2, (int)&v28, v12) >= 1 )
    __asm { VMOV.F32        S0, #16.0 }
    v13 = 16;
      VMUL.F32        S22, S20, S0
      VMUL.F32        S24, S18, S0
      VMUL.F32        S26, S16, S0
    do
      __asm
      {
        VLDR            S0, [R5]
        VSUB.F32        S0, S0, S26
        VSTR            S0, [R5]
        VLDR            S0, [R5,#4]
        VSUB.F32        S0, S0, S24
        VSTR            S0, [R5,#4]
        VLDR            S0, [R5,#8]
        VSUB.F32        S0, S0, S22
        VSTR            S0, [R5,#8]
      }
      v14 = BlockPos::BlockPos((int)&v27, (int)&v36);
      v15 = EndGatewayBlockEntity::_getHighestSection(v14, v2, (int)&v28, (int)&v27);
      if ( v13 < 2 )
        break;
      --v13;
    while ( v15 > 0 );
  v16 = BlockPos::BlockPos((int)&v26, (int)&v36);
  if ( !EndGatewayBlockEntity::_getHighestSection(v16, v2, (int)&v28, v16) )
    v17 = 16;
      VMUL.F32        S20, S20, S0
      VMUL.F32        S18, S18, S0
      VMUL.F32        S16, S16, S0
        VADD.F32        S0, S0, S16
        VADD.F32        S0, S0, S18
        VADD.F32        S0, S0, S20
      v18 = BlockPos::BlockPos((int)&v26, (int)&v36);
      v19 = EndGatewayBlockEntity::_getHighestSection(v18, v2, (int)&v28, (int)&v26);
      if ( v17 < 2 )
      --v17;
    while ( !v19 );
  v20 = (TheEndDimension *)BlockSource::getDimension(v2);
  v21 = BlockEntity::getPosition(v4);
  BlockPos::BlockPos((int)&v25, (int)&v36);
  TheEndDimension::addGatewayChunkSource(v20, (const BlockPos *)v21, (const BlockPos *)&v25);
  BlockPos::BlockPos((int)&v24, (int)&v36);
  v22 = BlockEntity::getPosition(v4);
  return TheEndDimension::addGatewayChunkSource(v20, (const BlockPos *)&v24, (const BlockPos *)v22);
}


int __fastcall EndGatewayBlockEntity::tick(EndGatewayBlockEntity *this, BlockSource *a2)
{
  EndGatewayBlockEntity *v2; // r5@1
  BlockSource *v3; // r10@1
  __int64 v4; // kr00_8@1
  Level *v5; // r0@3
  char *v6; // r0@5
  char *v7; // r0@5
  __int64 v8; // r1@5
  int v9; // r0@5
  char *v10; // r0@5
  char *v11; // r8@5
  char *v12; // r6@5
  int v13; // r1@5 OVERLAPPED
  int v14; // r2@5 OVERLAPPED
  signed int v15; // r0@5
  char *v16; // r0@7
  signed int v17; // r2@8
  signed int v18; // r4@9
  int v19; // r7@9
  int v20; // r4@9
  int v21; // r1@17
  signed int v22; // r2@17
  signed int v23; // r0@17
  bool v24; // nf@19
  unsigned __int8 v25; // vf@19
  signed int v26; // r1@19
  signed int v27; // r2@22
  int v29; // [sp+4h] [bp-64h]@5
  int v30; // [sp+8h] [bp-60h]@5
  int v31; // [sp+Ch] [bp-5Ch]@5
  char v32; // [sp+10h] [bp-58h]@5
  char v33; // [sp+1Ch] [bp-4Ch]@5
  char v34; // [sp+28h] [bp-40h]@5

  v2 = this;
  v3 = a2;
  v4 = *((_QWORD *)this + 13);
  *((_DWORD *)this + 26) = v4 + 1;
  if ( SHIDWORD(v4) < 1 )
  {
    v5 = (Level *)BlockSource::getLevel(a2);
    if ( !Level::isClientSide(v5) && BlockSource::getDimensionId(v3) == 2 )
    {
      v6 = BlockEntity::getPosition(v2);
      Vec3::Vec3((int)&v33, (int)v6);
      v7 = BlockEntity::getPosition(v2);
      v8 = *(_QWORD *)v7;
      v9 = *((_DWORD *)v7 + 2);
      v29 = v8 + 1;
      v30 = HIDWORD(v8) + 1;
      v31 = v9 + 1;
      Vec3::Vec3((int)&v32, (int)&v29);
      AABB::AABB((int)&v34, (int)&v33, (int)&v32);
      v10 = BlockSource::fetchEntities(v3, 0, (const AABB *)&v34);
      v11 = v10;
      v12 = 0;
      *(_QWORD *)&v13 = *(_QWORD *)v10;
      v15 = v14 - v13;
      if ( 0 != (v14 - v13) >> 2 )
      {
        if ( (unsigned int)(v15 >> 2) >= 0x40000000 )
          sub_21E57F4();
        v16 = (char *)operator new(v15);
        *(_QWORD *)&v13 = *(_QWORD *)v11;
        v12 = v16;
      }
      v17 = v14 - v13;
      if ( 0 != v17 >> 2 )
        v18 = v17 >> 2;
        _aeabi_memmove4(v12, v13);
        v19 = 4 * v18;
        v20 = 0;
        do
        {
          if ( (*(int (**)(void))(**(_DWORD **)&v12[v20] + 488))() != 4194391
            && !Entity::isRiding(*(Entity **)&v12[v20])
            && !Entity::isRide(*(Entity **)&v12[v20]) )
          {
            EndGatewayBlockEntity::teleportEntity(v2, *(Entity **)&v12[v20]);
          }
          v20 += 4;
        }
        while ( v19 != v20 );
      if ( v12 )
        operator delete(v12);
    }
  }
  else
    *((_DWORD *)this + 27) = HIDWORD(v4) - 1;
  v21 = *((_DWORD *)v2 + 26);
  v22 = 0;
  v23 = 0;
  if ( (signed int)v4 < 200 )
    v22 = 1;
  v25 = __OFSUB__(v21, 200);
  v24 = v21 - 200 < 0;
  v26 = 0;
  if ( v24 ^ v25 )
    v26 = 1;
  if ( v22 != v26 )
    goto LABEL_32;
  v27 = 0;
  if ( SHIDWORD(v4) > 0 )
    v27 = 1;
  if ( *((_DWORD *)v2 + 27) > 0 )
    v23 = 1;
  if ( v27 != v23 )
LABEL_32:
    BlockEntity::setChanged(v2);
  return BlockEntity::tick(v2, v3);
}


int __fastcall EndGatewayBlockEntity::onChanged(EndGatewayBlockEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r4@1
  EndGatewayBlockEntity *v3; // r5@1
  Level *v4; // r0@1
  int result; // r0@1
  BlockPos *v6; // r5@2
  char v7; // [sp+8h] [bp-18h]@2
  char v8; // [sp+9h] [bp-17h]@2
  char v9; // [sp+Ch] [bp-14h]@2
  char v10; // [sp+Dh] [bp-13h]@2

  v2 = a2;
  v3 = this;
  v4 = (Level *)BlockSource::getLevel(a2);
  result = Level::isClientSide(v4);
  if ( !result )
  {
    v6 = (EndGatewayBlockEntity *)((char *)v3 + 32);
    BlockSource::getBlockAndData((BlockSource *)&v9, v2, (int)v6);
    v7 = v9;
    v8 = v10;
    result = BlockSource::setBlockAndData((int)v2, v6, (int)&v7, 19, 0);
  }
  return result;
}


signed int __fastcall EndGatewayBlockEntity::findValidSpawnInChunk(EndGatewayBlockEntity *this, LevelChunk *a2)
{
  LevelChunk *v2; // r4@1
  EndGatewayBlockEntity *v3; // r5@1
  __int64 v4; // kr00_8@1
  signed int result; // r0@1
  int v10; // r11@2
  int v11; // r8@3
  unsigned int v12; // r1@3
  _BYTE *v13; // r2@3
  int v14; // r1@4
  int v15; // r1@7
  int v16; // r2@7
  unsigned int v17; // r0@7
  int v18; // r0@8
  unsigned int v19; // r1@9
  char v20; // r3@9
  unsigned int v21; // r0@9
  unsigned int v22; // r2@9
  Block *v23; // r0@14
  int v24; // r1@15
  int v25; // r2@15
  unsigned int v26; // r0@15
  int v27; // r0@16
  unsigned int v28; // r1@17
  char v29; // r3@17
  unsigned int v30; // r0@17
  unsigned int v31; // r2@17
  Block *v32; // r0@22
  signed int v35; // r3@23
  EndGatewayBlockEntity *v36; // [sp+4h] [bp-10Ch]@1
  unsigned int v37; // [sp+Ch] [bp-104h]@1
  int v38; // [sp+10h] [bp-100h]@1
  __int16 v39; // [sp+1Ch] [bp-F4h]@17
  int v40; // [sp+20h] [bp-F0h]@15
  int v41; // [sp+24h] [bp-ECh]@15
  int v42; // [sp+28h] [bp-E8h]@15
  unsigned __int16 v43; // [sp+2Ch] [bp-E4h]@15
  __int16 v44; // [sp+2Eh] [bp-E2h]@15
  __int16 v45; // [sp+30h] [bp-E0h]@9
  int v46; // [sp+34h] [bp-DCh]@7
  int v47; // [sp+38h] [bp-D8h]@7
  int v48; // [sp+3Ch] [bp-D4h]@7
  unsigned __int16 v49; // [sp+40h] [bp-D0h]@7
  __int16 v50; // [sp+42h] [bp-CEh]@7
  unsigned __int16 v51; // [sp+44h] [bp-CCh]@3
  __int16 v52; // [sp+46h] [bp-CAh]@3
  char v53; // [sp+48h] [bp-C8h]@1
  char v54; // [sp+70h] [bp-A0h]@1
  char v55; // [sp+98h] [bp-78h]@1
  int v56; // [sp+C0h] [bp-50h]@1
  int v57; // [sp+C4h] [bp-4Ch]@1
  int v58; // [sp+C8h] [bp-48h]@1
  int v59; // [sp+CCh] [bp-44h]@1
  signed int v60; // [sp+D0h] [bp-40h]@1
  int v61; // [sp+D4h] [bp-3Ch]@1

  v2 = a2;
  v3 = this;
  v36 = this;
  v4 = *(_QWORD *)LevelChunk::getPosition(a2);
  v59 = 16 * v4;
  v60 = 30;
  v61 = 16 * HIDWORD(v4);
  v56 = 16 * v4 | 0xF;
  v57 = 127;
  v58 = 16 * HIDWORD(v4) | 0xF;
  *(_DWORD *)v3 = BlockPos::ZERO;
  v38 = unk_2816278;
  *((_DWORD *)v3 + 1) = unk_2816278;
  v37 = dword_281627C;
  *((_DWORD *)v3 + 2) = dword_281627C;
  BlockPosIterator::BlockPosIterator((BlockPosIterator *)&v55, (const BlockPos *)&v59, (const BlockPos *)&v56);
  BlockPosIterator::begin((BlockPosIterator *)&v54, (int)&v55);
  BlockPosIterator::end((BlockPosIterator *)&v53, (int)&v55);
  result = BlockPosIterator::operator!=((int)&v54, (int)&v53);
  if ( result == 1 )
  {
    __asm
    {
      VMOV.F32        S18, #0.5
      VLDR            S16, =0.0
    }
    v10 = (int)v2 + 76;
    do
      v11 = BlockPosIterator::operator*((int)&v54);
      ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v51, (const BlockPos *)v11);
      v12 = v52 >> 4;
      v13 = &BlockID::AIR;
      if ( v12 < *((_DWORD *)v2 + 35) )
      {
        v14 = *(_DWORD *)(v10 + 4 * v12);
        v13 = &BlockID::AIR;
        if ( v14 )
          v13 = (_BYTE *)(v14 + (v52 & 0xF | ((unsigned int)v51 >> 4) & 0xFF0) + (v51 << 8));
      }
      if ( *v13 == *(_BYTE *)(Block::mEndStone + 4) )
        v15 = *(_DWORD *)(v11 + 4);
        v16 = *(_DWORD *)(v11 + 8);
        v46 = *(_DWORD *)v11;
        v47 = v15 + 1;
        v48 = v16;
        ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v49, (const BlockPos *)&v46);
        v17 = v50 >> 4;
        if ( v17 >= *((_DWORD *)v2 + 35) )
        {
          v45 = FullBlock::AIR;
        }
        else
          v18 = *(_DWORD *)(v10 + 4 * v17);
          if ( v18 )
          {
            v19 = (v50 & 0xF | ((unsigned int)v49 >> 4) & 0xFF0) + (v49 << 8);
            v20 = *(_BYTE *)(v18 + (unsigned __int16)v19);
            v21 = *(_BYTE *)(v18 + ((unsigned int)(unsigned __int16)v19 >> 1) + 4096);
            LOBYTE(v45) = v20;
            LOBYTE(v22) = v21 & 0xF;
            if ( (v50 & 0xF | ((unsigned int)v49 >> 4) & 0xF0) & 1 )
              v22 = v21 >> 4;
            HIBYTE(v45) = v22;
          }
          else
            v45 = BlockID::AIR;
        v23 = (Block *)FullBlock::getBlock((FullBlock *)&v45);
        if ( !Block::isSolidBlockingBlock(v23) )
          v24 = *(_DWORD *)(v11 + 4);
          v25 = *(_DWORD *)(v11 + 8);
          v40 = *(_DWORD *)v11;
          v41 = v24 + 2;
          v42 = v25;
          ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v43, (const BlockPos *)&v40);
          v26 = v44 >> 4;
          if ( v26 >= *((_DWORD *)v2 + 35) )
            v39 = FullBlock::AIR;
            v27 = *(_DWORD *)(v10 + 4 * v26);
            if ( v27 )
            {
              v28 = (v44 & 0xF | ((unsigned int)v43 >> 4) & 0xFF0) + (v43 << 8);
              v29 = *(_BYTE *)(v27 + (unsigned __int16)v28);
              v30 = *(_BYTE *)(v27 + ((unsigned int)(unsigned __int16)v28 >> 1) + 4096);
              LOBYTE(v39) = v29;
              LOBYTE(v31) = v30 & 0xF;
              if ( (v44 & 0xF | ((unsigned int)v43 >> 4) & 0xF0) & 1 )
                v31 = v30 >> 4;
              HIBYTE(v39) = v31;
            }
            else
              v39 = BlockID::AIR;
          v32 = (Block *)FullBlock::getBlock((FullBlock *)&v39);
          if ( !Block::isSolidBlockingBlock(v32) )
            _KR08_8 = *(_QWORD *)v11;
            __asm { VMOV            S2, LR }
            _R2 = *(_DWORD *)(v11 + 8);
            v35 = 0;
            __asm
              VMOV            S0, R12
              VMOV            S4, R2
              VCVT.F32.S32    S0, S0
              VCVT.F32.S32    S2, S2
              VCVT.F32.S32    S4, S4
              VADD.F32        S0, S0, S18
              VADD.F32        S2, S2, S18
              VADD.F32        S4, S4, S18
              VMUL.F32        S0, S0, S0
              VMUL.F32        S2, S2, S2
              VMUL.F32        S4, S4, S4
              VADD.F32        S0, S2, S0
              VADD.F32        S0, S0, S4
            if ( _ZF )
              if ( v38 == unk_2816278 )
              {
                v35 = 0;
                if ( v37 == dword_281627C )
                  v35 = 1;
              }
              VCMPE.F32       S0, S16
              VMRS            APSR_nzcv, FPSCR
            if ( _NF ^ _VF || v35 == 1 )
              __asm { VMOV.F32        S16, S0 }
              *(_QWORD *)v36 = _KR08_8;
              *((_DWORD *)v36 + 2) = _R2;
              v37 = _R2;
              v38 = HIDWORD(_KR08_8);
      BlockPosIterator::operator++((int)&v54);
      result = BlockPosIterator::operator!=((int)&v54, (int)&v53);
    while ( result );
  }
  return result;
}


int __fastcall EndGatewayBlockEntity::findTallestBlock(int result, BlockSource *a2, const BlockPos *a3, int a4, int a5)
{
  BlockSource *v5; // r7@1
  int v6; // r11@1
  const BlockPos *v7; // r5@1
  unsigned __int64 v8; // r2@1
  signed int v9; // r10@1
  int v10; // r1@1
  int v11; // r8@2
  int v12; // r0@3
  int v13; // r6@4
  signed int v14; // r4@5
  int v15; // r1@6
  Block *v16; // r0@6
  int v17; // r9@12
  int v18; // r4@14
  signed int v19; // r11@14
  int v20; // r1@15
  int v21; // r6@15
  bool v22; // nf@22
  unsigned __int8 v23; // vf@22
  int v24; // r7@23
  int *v25; // r1@25
  int v26; // [sp+0h] [bp-50h]@2
  int v27; // [sp+4h] [bp-4Ch]@1
  signed __int64 v28; // [sp+8h] [bp-48h]@2
  unsigned int v29; // [sp+14h] [bp-3Ch]@6
  int v30; // [sp+18h] [bp-38h]@6
  unsigned int v31; // [sp+1Ch] [bp-34h]@6
  unsigned int v32; // [sp+20h] [bp-30h]@1
  int v33; // [sp+24h] [bp-2Ch]@1
  unsigned int v34; // [sp+28h] [bp-28h]@1

  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = __PAIR__(dword_281627C, BlockPos::ZERO);
  v9 = unk_2816278;
  v10 = -v6;
  v32 = BlockPos::ZERO;
  v33 = unk_2816278;
  v34 = dword_281627C;
  v27 = -v6;
  if ( -v6 > v6 )
    goto LABEL_32;
  v28 = __PAIR__(dword_281627C, BlockPos::ZERO);
  v11 = -v6;
  v26 = result;
  do
  {
    v12 = v10;
    if ( a5 )
    {
      do
      {
        v13 = v12;
        if ( v9 <= 254 )
        {
          v14 = 255;
          while ( 1 )
          {
            v15 = *((_DWORD *)v7 + 2);
            v29 = *(_DWORD *)v7 + v11;
            v30 = v14;
            v31 = v15 + v13;
            v16 = (Block *)BlockSource::getBlock(v5, (const BlockPos *)&v29);
            if ( Block::isSolidBlockingBlock(v16) )
              break;
            if ( --v14 <= v9 )
              goto LABEL_10;
          }
          v9 = v30;
          v32 = v29;
          v28 = __PAIR__(v31, v29);
          v33 = v30;
          v34 = v31;
        }
LABEL_10:
        v12 = v13 + 1;
      }
      while ( v13 < v6 );
    }
    else
        v17 = v10;
        if ( v10 | v11 && v9 <= 254 )
          v18 = v6;
          v19 = 255;
            v20 = *((_DWORD *)v7 + 2);
            v30 = v19;
            v31 = v20 + v17;
            v21 = BlockSource::getBlock(v5, (const BlockPos *)&v29);
            if ( Block::isSolidBlockingBlock((Block *)v21) == 1
              && *(_BYTE *)(v21 + 4) != *(_BYTE *)(Block::mBedrock + 4) )
            {
            }
            if ( --v19 <= v9 )
              goto LABEL_20;
LABEL_20:
          v6 = v18;
        v10 = v17 + 1;
      while ( v17 < v6 );
    v10 = v27;
    v23 = __OFSUB__(v11, v6);
    v22 = v11++ - v6 < 0;
  }
  while ( v22 ^ v23 );
  v24 = v28;
  v8 = __PAIR__(HIDWORD(v28), BlockPos::ZERO);
  result = v26;
  if ( (_DWORD)v28 == BlockPos::ZERO )
LABEL_32:
    if ( v9 == unk_2816278 )
      v25 = (int *)&v32;
      if ( HIDWORD(v8) == dword_281627C )
        v25 = (int *)v7;
      v9 = *(_QWORD *)v25 >> 32;
      v24 = *(_QWORD *)v25;
      HIDWORD(v8) = v25[2];
      v24 = v8;
  *(_DWORD *)result = v24;
  *(_DWORD *)(result + 4) = v9;
  *(_DWORD *)(result + 8) = HIDWORD(v8);
  return result;
}
