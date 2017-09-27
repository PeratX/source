

int __fastcall ChestBlockEntity::_tickOpenLid(ChestBlockEntity *this, BlockSource *a2)
{
  int result; // r0@1

  _R4 = this;
  _R2 = *((_DWORD *)this + 66);
  *((_DWORD *)this + 67) = _R2;
  result = *((_BYTE *)this + 272);
  __asm { VMOV            S0, R2 }
  if ( result )
  {
    __asm
    {
      VMOV.F32        S2, #1.0
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !(_NF ^ _VF) )
      return result;
  }
  else
      VCMPE.F32       S0, #0.0
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
  __asm
    VLDR            S2, [R4,#0xFC]
    VNEG.F32        S4, S2
  if ( _ZF )
    __asm { VMOVEQ.F32      S2, S4 }
    VMOV.F32        S4, #1.0
    VADD.F32        S2, S2, S0
    VCMPE.F32       S2, S4
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S2, S4 }
    VMOV.F32        S4, #0.5
    VSTR            S2, [R4,#0x108]
    VCMPE.F32       S0, S4
  if ( !(_NF ^ _VF) )
      VCMPE.F32       S2, S4
    if ( _NF ^ _VF )
      result = (*(int (__fastcall **)(ChestBlockEntity *, BlockSource *))(*(_DWORD *)_R4 + 180))(_R4, a2);
      __asm { VLDR            S2, [R4,#0x108] }
    VCMPE.F32       S2, #0.0
  if ( _NF ^ _VF )
    result = 0;
    *((_DWORD *)_R4 + 66) = 0;
  return result;
}


int __fastcall ChestBlockEntity::playOpenSound(ChestBlockEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r4@1
  Level *v4; // r0@1
  float v14; // [sp+14h] [bp-1Ch]@4

  v2 = a2;
  _R5 = this;
  v4 = (Level *)BlockSource::getLevel(a2);
  __asm
  {
    VLDR            S0, [R5,#0x24]
    VCVT.F32.S32    S0, S0
  }
  _R2 = *((_DWORD *)_R5 + 10);
  _R1 = *((_DWORD *)_R5 + 8);
  if ( *((_DWORD *)_R5 + 73) )
    __asm { VMOV.F32        S4, #0.5 }
    _R1 = _R1 + *((_DWORD *)_R5 + 74);
    _R2 = _R2 + *((_DWORD *)_R5 + 76);
    __asm
    {
      VMOV            S6, R1
      VMOV            S2, R2
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S6, S6
      VMUL.F32        S2, S2, S4
      VMUL.F32        S4, S6, S4
    }
  else
      VMOV            S4, R1
      VCVT.F32.S32    S4, S4
    VMOV.F32        S6, #0.5
    VADD.F32        S4, S4, S6
    VADD.F32        S0, S0, S6
    VADD.F32        S2, S2, S6
    VSTR            S4, [SP,#0x30+var_1C]
    VSTR            S0, [SP,#0x30+var_18]
    VSTR            S2, [SP,#0x30+var_14]
  return Level::broadcastSoundEvent(v4, (int)v2, 65, (int)&v14, -1, 1, 0, 0);
}


void __fastcall ChestBlockEntity::createChestBlockEntity(ChestBlockEntity *this, const BlockPos *a2)
{
  ChestBlockEntity::createChestBlockEntity(this, a2);
}


void __fastcall ChestBlockEntity::~ChestBlockEntity(ChestBlockEntity *this)
{
  ChestBlockEntity::~ChestBlockEntity(this);
}


signed int __fastcall ChestBlockEntity::canPairWith(ChestBlockEntity *this, BlockEntity *a2, BlockSource *a3)
{
  BlockEntity *v3; // r4@1
  BlockSource *v4; // r5@1
  ChestBlockEntity *v5; // r6@1
  char *v6; // r0@4
  char *v7; // r0@4
  signed int result; // r0@6
  const BlockPos *v9; // r6@7
  unsigned int v10; // r7@7
  char *v11; // r0@7
  char *v12; // r0@8
  int v13; // r1@8
  unsigned __int8 v14; // [sp+4h] [bp-1Ch]@4
  unsigned __int8 v15; // [sp+8h] [bp-18h]@4

  v3 = a2;
  v4 = a3;
  v5 = this;
  if ( a2 )
  {
    if ( BlockEntity::isType((int)a2, 2) == 1 )
    {
      if ( *((_DWORD *)BlockEntity::getPosition(v3) + 1) == *((_DWORD *)v5 + 9) )
      {
        v6 = BlockEntity::getPosition(v5);
        BlockSource::getBlockID((BlockSource *)&v15, v4, (int)v6);
        v7 = BlockEntity::getPosition(v3);
        BlockSource::getBlockID((BlockSource *)&v14, v4, (int)v7);
        if ( v15 == v14 )
        {
          if ( *((_DWORD *)v3 + 73) )
          {
            result = 0;
          }
          else
            v9 = (ChestBlockEntity *)((char *)v5 + 32);
            v10 = BlockSource::getData(v4, v9);
            v11 = BlockEntity::getPosition(v3);
            if ( v10 == BlockSource::getData(v4, (const BlockPos *)v11) )
            {
              v12 = BlockEntity::getPosition(v3);
              v13 = v10 & 0xFE;
              if ( *(_DWORD *)v12 == *(_DWORD *)v9 )
              {
                result = 0;
                if ( v13 != 2 )
                  result = 1;
              }
              else
                if ( v13 != 4 )
            }
            else
              result = 0;
        }
        else
          result = 0;
      }
      else
        result = 0;
    }
    else
      result = 0;
  }
  else
    result = 0;
  return result;
}


int __fastcall ChestBlockEntity::_closeChest(ChestBlockEntity *this, BlockSource *a2, Player *a3)
{
  Player *v3; // r6@1
  BlockSource *v4; // r4@1
  ChestBlockEntity *i; // r5@1
  Level *v6; // r0@3
  int result; // r0@3
  Block *v8; // r0@7
  Level *v9; // r0@11
  bool v10; // zf@11

  v3 = a3;
  v4 = a2;
  for ( i = this; ; i = (ChestBlockEntity *)*((_DWORD *)i + 73) )
  {
    v6 = (Level *)BlockSource::getLevel(v4);
    result = Level::isClientSide(v6);
    if ( result )
      break;
    if ( *((_BYTE *)i + 280) & 1 )
    {
      if ( v3 )
        ChestBlockEntity::_playerClosedContainer(i, v3);
      v8 = (Block *)*((_DWORD *)i + 2);
      if ( v8 && Block::isType(v8, (const Block *)Block::mTrappedChest) == 1 )
        ChestBlock::updateSignalStrength(
          *((ChestBlock **)i + 2),
          v4,
          (ChestBlockEntity *)((char *)i + 32),
          *((_DWORD *)i + 81));
      result = *((_BYTE *)i + 96);
      if ( !*((_BYTE *)i + 96) )
      {
        v9 = (Level *)BlockSource::getLevel(v4);
        result = Level::isClientSide(v9);
        v10 = result == 0;
        if ( !result )
        {
          result = *((_DWORD *)i + 81);
          v10 = result == 0;
        }
        if ( v10 )
          *((_BYTE *)i + 272) = 0;
          result = j_j_j__ZN11BlockSource10blockEventERK8BlockPosii(v4, (ChestBlockEntity *)((char *)i + 32), 1, 0);
      }
      return result;
    }
  }
  return result;
}


signed int __fastcall ChestBlockEntity::_detectBlockObstruction(ChestBlockEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r9@1
  float v3; // r1@1
  int v4; // r0@1
  int v8; // r5@1
  float v10; // r1@1
  int v11; // r1@1
  signed int result; // r0@1
  int v13; // r0@3
  int v14; // r8@3
  float v16; // r1@3
  int v17; // r0@3
  float v18; // r1@3
  int v20; // r10@6
  float v21; // r1@6
  int v22; // r6@6
  char *v23; // r0@7
  int v25; // r0@12
  int v26; // [sp+Ch] [bp-84h]@1
  int v27; // [sp+10h] [bp-80h]@3
  ChestBlockEntity *v28; // [sp+14h] [bp-7Ch]@1
  int v29; // [sp+18h] [bp-78h]@1
  int v30; // [sp+1Ch] [bp-74h]@7
  int v31; // [sp+20h] [bp-70h]@7
  float v32; // [sp+24h] [bp-6Ch]@7
  char v33; // [sp+28h] [bp-68h]@1
  mce::Math *v34; // [sp+44h] [bp-4Ch]@1
  mce::Math *v36; // [sp+4Ch] [bp-44h]@3
  mce::Math *v38; // [sp+54h] [bp-3Ch]@6

  v2 = a2;
  v28 = this;
  (*(void (__fastcall **)(mce::Math **))(*(_DWORD *)this + 188))(&v34);
  AABB::AABB((AABB *)&v33);
  v4 = mce::Math::floor(v34, v3);
  __asm
  {
    VMOV.F32        S16, #1.0
    VLDR            S0, [SP,#0x90+var_40]
  }
  v8 = v4;
  v29 = v4;
    VADD.F32        S0, S0, S16
    VMOV            R0, S0
  v11 = mce::Math::floor(_R0, v10) + 1;
  result = 0;
  v26 = v11;
  if ( v8 != v11 )
    __asm { VMOV.F32        S18, #-1.0 }
    while ( 2 )
    {
      v13 = mce::Math::floor(v36, *(float *)&v11);
      __asm { VLDR            S0, [SP,#0x90+var_38] }
      v14 = v13;
      __asm
      {
        VADD.F32        S0, S0, S16
        VMOV            R0, S0
      }
      v17 = mce::Math::floor(_R0, v16) + 1;
      v27 = v17;
      while ( v14 != v17 )
        __asm
        {
          VLDR            S0, [SP,#0x90+var_48]
          VADD.F32        S0, S0, S18
          VMOV            R0, S0
        }
        v20 = mce::Math::floor(_R0, v18);
        v22 = mce::Math::floor(v38, v21) + 1;
        if ( v20 != v22 )
          do
          {
            v30 = v29;
            v31 = v20;
            v32 = *(float *)&v14;
            v23 = BlockEntity::getPosition(v28);
            _ZF = v30 == *(_DWORD *)v23;
            if ( v30 == *(_DWORD *)v23 )
              _ZF = v31 == *((_DWORD *)v23 + 1);
            if ( !_ZF || (v18 = v32, LODWORD(v32) != *((_DWORD *)v23 + 2)) )
            {
              v25 = BlockSource::getBlock(v2, (const BlockPos *)&v30);
              (*(void (__cdecl **)(int, BlockSource *, int *))(*(_DWORD *)v25 + 32))(v25, v2, &v30);
              if ( AABB::intersects((AABB *)&v33, (const AABB *)&v34) )
                return 1;
            }
          }
          while ( v22 != ++v20 );
        ++v14;
        v17 = v27;
      v11 = v29 + 1;
      v29 = v11;
      if ( v11 != v26 )
        continue;
      break;
    }
    result = 0;
  return result;
}


int __fastcall ChestBlockEntity::clearInventory(ChestBlockEntity *this, int a2)
{
  ChestBlockEntity *v2; // r4@1
  FillingContainer *v3; // r9@1
  int v4; // r5@1
  int v5; // r7@1
  int v6; // r8@1
  int v7; // r0@2
  int v8; // r6@2
  bool v9; // zf@2

  v2 = this;
  v3 = (ChestBlockEntity *)((char *)this + 112);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  do
  {
    v7 = *((_DWORD *)v2 + 56);
    v8 = v7 + v4;
    v9 = *(_BYTE *)(v7 + v4 + 15) == 0;
    if ( *(_BYTE *)(v7 + v4 + 15) )
      v9 = *(_DWORD *)(v7 + v4) == 0;
    if ( !v9 && !ItemInstance::isNull((ItemInstance *)v8) && *(_BYTE *)(v8 + 14) )
      v6 += *(_BYTE *)(*((_DWORD *)v2 + 56) + v4 + 14);
    FillingContainer::_release(v3, v5++);
    v4 += 72;
  }
  while ( v5 != 27 );
  return v6;
}


int __fastcall ChestBlockEntity::stopOpen(ChestBlockEntity *this, Player *a2)
{
  Player *v2; // r4@1
  ChestBlockEntity *v3; // r5@1
  BlockSource *v4; // r1@1

  v2 = a2;
  v3 = this;
  v4 = (BlockSource *)Entity::getRegion(a2);
  return j_j_j__ZN16ChestBlockEntity11_closeChestER11BlockSourceP6Player(v3, v4, v2);
}


void __fastcall ChestBlockEntity::createChestBlockEntity(ChestBlockEntity *this, const BlockPos *a2)
{
  int v2; // [sp+8h] [bp-10h]@1
  int v3; // [sp+Ch] [bp-Ch]@1

  v3 = 2;
  v2 = 1;
  std::make_unique<ChestBlockEntity,BlockEntityType,char const(&)[6],BlockEntityRendererId,BlockPos const&>(
    (int *)this,
    &v3,
    "Chest",
    &v2,
    (int)a2);
}


int __fastcall ChestBlockEntity::onMove(ChestBlockEntity *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  ChestBlockEntity *v4; // r5@1
  BlockSource *v5; // r4@1
  int v6; // r0@1
  void *v7; // r0@4
  void *v8; // r6@5
  int result; // r0@7

  v4 = this;
  v5 = a2;
  v6 = *((_DWORD *)this + 73);
  if ( v6 )
  {
    *(_DWORD *)(v6 + 292) = 0;
    *(_DWORD *)(v6 + 296) = BlockPos::ZERO;
    *(_DWORD *)(v6 + 300) = unk_2816278;
    *(_DWORD *)(v6 + 304) = dword_281627C;
    *(_BYTE *)(v6 + 280) |= 1u;
    *((_DWORD *)v4 + 73) = 0;
    *((_DWORD *)v4 + 74) = BlockPos::ZERO;
    *((_DWORD *)v4 + 75) = unk_2816278;
    *((_DWORD *)v4 + 76) = dword_281627C;
    *((_BYTE *)v4 + 280) |= 1u;
    BlockEntity::_resetAABB(v4);
    *((_BYTE *)v4 + 280) |= 2u;
    BlockEntity::setChanged(v4);
  }
  while ( 1 )
    v7 = (void *)*((_DWORD *)v4 + 80);
    if ( v7 )
    {
      do
      {
        v8 = *(void **)v7;
        operator delete(v7);
        v7 = v8;
      }
      while ( v8 );
    }
    _aeabi_memclr4(*((_QWORD *)v4 + 39), 4 * (*((_QWORD *)v4 + 39) >> 32));
    *((_DWORD *)v4 + 80) = 0;
    *((_DWORD *)v4 + 81) = 0;
    if ( *((_BYTE *)v4 + 280) & 1 )
      break;
    v4 = (ChestBlockEntity *)*((_DWORD *)v4 + 73);
    result = *((_BYTE *)v4 + 272);
    if ( !*((_BYTE *)v4 + 272) )
    ChestBlockEntity::_closeChest(v4, v5, 0);
  return result;
}


int __fastcall ChestBlockEntity::onRemoved(ChestBlockEntity *this, BlockSource *a2)
{
  BlockEntity *v2; // r5@1
  BlockSource *v3; // r4@1

  v2 = this;
  v3 = a2;
  (*(void (**)(void))(*(_DWORD *)this + 76))();
  return j_j_j__ZN11BlockEntity9onRemovedER11BlockSource(v2, v3);
}


int __fastcall ChestBlockEntity::_unpair(int result)
{
  *(_DWORD *)(result + 292) = 0;
  *(_DWORD *)(result + 296) = BlockPos::ZERO;
  *(_DWORD *)(result + 300) = unk_2816278;
  *(_DWORD *)(result + 304) = dword_281627C;
  *(_BYTE *)(result + 280) |= 1u;
  return result;
}


signed int __fastcall ChestBlockEntity::saveItems(ChestBlockEntity *this, CompoundTag *a2)
{
  ChestBlockEntity *v2; // r6@1
  void *v3; // r4@1
  signed int v4; // r9@1
  unsigned int *v5; // r2@2
  signed int v6; // r1@4
  int v7; // r8@10
  bool v8; // zf@10
  int v9; // r5@15
  void *v10; // r0@15
  int v11; // r0@16
  void *v12; // r0@23
  unsigned int *v14; // r2@25
  signed int v15; // r1@27
  CompoundTag *v16; // [sp+8h] [bp-48h]@1
  void *v17; // [sp+Ch] [bp-44h]@21
  int v18; // [sp+14h] [bp-3Ch]@21
  int v19; // [sp+18h] [bp-38h]@16
  int v20; // [sp+20h] [bp-30h]@2
  int v21; // [sp+24h] [bp-2Ch]@15

  v2 = this;
  v16 = a2;
  v3 = operator new(0x14u);
  ListTag::ListTag((int)v3);
  v4 = 0;
  do
  {
    v7 = *((_DWORD *)v2 + 56) + 72 * v4;
    v8 = *(_BYTE *)(v7 + 15) == 0;
    if ( *(_BYTE *)(v7 + 15) )
      v8 = *(_DWORD *)v7 == 0;
    if ( !v8 && !ItemInstance::isNull((ItemInstance *)(*((_DWORD *)v2 + 56) + 72 * v4)) && *(_BYTE *)(v7 + 14) )
    {
      ItemInstance::save((ItemInstance *)&v21, (ItemInstance *)(*((_DWORD *)v2 + 56) + 72 * v4));
      v9 = v21;
      sub_21E94B4((void **)&v20, "Slot");
      CompoundTag::putByte(v9, (const void **)&v20, v4);
      v10 = (void *)(v20 - 12);
      if ( (int *)(v20 - 12) != &dword_28898C0 )
      {
        v5 = (unsigned int *)(v20 - 4);
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
          j_j_j_j__ZdlPv_9(v10);
      }
      v11 = v21;
      v21 = 0;
      v19 = v11;
      ListTag::add((int)v3, &v19);
      if ( v19 )
        (*(void (**)(void))(*(_DWORD *)v19 + 4))();
      v19 = 0;
      if ( v21 )
        (*(void (**)(void))(*(_DWORD *)v21 + 4))();
    }
    ++v4;
  }
  while ( v4 < 27 );
  sub_21E94B4((void **)&v18, "Items");
  v17 = v3;
  CompoundTag::put((int)v16, (const void **)&v18, (int *)&v17);
  if ( v17 )
    (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  v17 = 0;
  v12 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  return 1;
}


BlockEntity *__fastcall ChestBlockEntity::setContainerChanged(ChestBlockEntity *this, int a2)
{
  ChestBlockEntity *v2; // r4@1
  BlockEntity *result; // r0@4

  v2 = this;
  if ( *((_BYTE *)this + 280) & 1 )
    Container::setContainerChanged((ChestBlockEntity *)((char *)this + 112), a2);
  else
    (*(void (**)(void))(**((_DWORD **)this + 73) + 156))();
  BlockEntity::setChanged(v2);
  result = (BlockEntity *)*((_DWORD *)v2 + 73);
  if ( result )
    result = (BlockEntity *)j_j_j__ZN11BlockEntity10setChangedEv_0(result);
  return result;
}


int __fastcall ChestBlockEntity::ChestBlockEntity(int a1, int a2, int a3, int a4, int a5, char a6)
{
  int v6; // r5@1
  int v7; // r4@1
  double v8; // r0@1
  unsigned int v9; // r0@1
  int v10; // r7@3
  void *v11; // r6@3

  v6 = a4;
  v7 = a1;
  RandomizableBlockEntityFillingContainer::RandomizableBlockEntityFillingContainer(a1, a2, a3, a5, 0x1Bu);
  *(_DWORD *)v7 = &off_27093D4;
  *(_DWORD *)(v7 + 112) = &off_270949C;
  *(_DWORD *)(v7 + 252) = 1036831949;
  *(_BYTE *)(v7 + 256) = 0;
  *(_BYTE *)(v7 + 257) = 1;
  *(_DWORD *)(v7 + 260) = 1056964608;
  *(_DWORD *)(v7 + 264) = 0;
  *(_DWORD *)(v7 + 268) = 0;
  *(_BYTE *)(v7 + 272) = 0;
  *(_DWORD *)(v7 + 276) = 0;
  *(_BYTE *)(v7 + 280) = *(_BYTE *)(v7 + 280) & 0xF0 | 1;
  *(_DWORD *)(v7 + 284) = 0;
  *(_DWORD *)(v7 + 288) = 0;
  *(_DWORD *)(v7 + 292) = 0;
  *(_DWORD *)(v7 + 296) = BlockPos::ZERO;
  *(_DWORD *)(v7 + 300) = unk_2816278;
  *(_DWORD *)(v7 + 304) = dword_281627C;
  *(_BYTE *)(v7 + 308) = a6;
  *(_DWORD *)(v7 + 320) = 0;
  *(_DWORD *)(v7 + 324) = 0;
  *(_DWORD *)(v7 + 328) = 1065353216;
  *(_DWORD *)(v7 + 332) = 0;
  LODWORD(v8) = v7 + 328;
  v9 = sub_21E6254(v8);
  *(_DWORD *)(v7 + 316) = v9;
  if ( v9 == 1 )
  {
    v11 = (void *)(v7 + 336);
    *(_DWORD *)(v7 + 336) = 0;
  }
  else
    if ( v9 >= 0x40000000 )
      sub_21E57F4();
    v10 = 4 * v9;
    v11 = operator new(4 * v9);
    _aeabi_memclr4(v11, v10);
  *(_DWORD *)(v7 + 312) = v11;
  *(_DWORD *)(v7 + 84) = v6;
  BlockEntity::setCustomNameSaved((BlockEntity *)v7, 1);
  return v7;
}


_DWORD *__fastcall ChestBlockEntity::addContentChangeListener(int a1, unsigned int a2)
{
  int v2; // r5@1
  unsigned int v3; // r4@1

  v2 = a1;
  v3 = a2;
  if ( !(*(_BYTE *)(a1 + 280) & 1) )
    (*(void (**)(void))(**(_DWORD **)(a1 + 292) + 168))();
  return j_j_j__ZN9Container24addContentChangeListenerEP30ContainerContentChangeListener(v2 + 112, v3);
}


int __fastcall ChestBlockEntity::onChanged(ChestBlockEntity *this, BlockSource *a2)
{
  ChestBlockEntity *v2; // r5@1
  BlockSource *v3; // r4@1
  int result; // r0@1
  Level *v5; // r0@2
  BlockPos *v6; // r5@4
  char v7; // [sp+4h] [bp-24h]@4
  char v8; // [sp+5h] [bp-23h]@4
  char v9; // [sp+8h] [bp-20h]@4
  char v10; // [sp+9h] [bp-1Fh]@4
  char v11; // [sp+Ch] [bp-1Ch]@3
  char v12; // [sp+Dh] [bp-1Bh]@3
  char v13; // [sp+10h] [bp-18h]@3
  char v14; // [sp+11h] [bp-17h]@3

  v2 = this;
  v3 = a2;
  result = *((_BYTE *)this + 280);
  if ( result & 2 )
  {
    *((_BYTE *)v2 + 280) = result & 0xFD;
    v5 = (Level *)BlockSource::getLevel(a2);
    result = Level::isClientSide(v5);
    if ( !result )
    {
      BlockSource::getBlockAndData((BlockSource *)&v13, v3, (int)v2 + 32);
      v11 = v13;
      v12 = v14;
      BlockSource::setBlockAndData((int)v3, (ChestBlockEntity *)((char *)v2 + 32), (int)&v11, 19, 0);
      result = *((_DWORD *)v2 + 73);
      if ( result )
      {
        v6 = (ChestBlockEntity *)((char *)v2 + 296);
        BlockSource::getBlockAndData((BlockSource *)&v9, v3, (int)v6);
        v13 = v9;
        v7 = v9;
        v14 = v10;
        v8 = v10;
        result = BlockSource::setBlockAndData((int)v3, v6, (int)&v7, 19, 0);
      }
    }
  }
  return result;
}


signed int __fastcall ChestBlockEntity::canPushInItem(ChestBlockEntity *this, BlockSource *a2, int a3, int a4, const ItemInstance *a5)
{
  return 1;
}


int __fastcall ChestBlockEntity::setOpenness(int result, float a2)
{
  *(float *)(result + 264) = a2;
  return result;
}


int __fastcall ChestBlockEntity::isMainSubchest(ChestBlockEntity *this)
{
  return *((_BYTE *)this + 280) & 1;
}


int __fastcall ChestBlockEntity::_getCenter(int result, float *a2, float *a3, float *a4)
{
  __asm
  {
    VLDR            S0, [R0,#0x24]
    VCVT.F32.S32    S0, S0
    VSTR            S0, [R2]
  }
  _LR = *(_DWORD *)(result + 32);
  _R12 = *(_DWORD *)(result + 40);
  if ( *(_DWORD *)(result + 292) )
    __asm { VMOV.F32        S0, #0.5 }
    _R2 = *(_DWORD *)(result + 296) + _LR;
    __asm
    {
      VMOV            S2, R2
      VCVT.F32.S32    S2, S2
      VMUL.F32        S2, S2, S0
      VSTR            S2, [R1]
    }
    result = *(_DWORD *)(result + 304) + _R12;
      VMOV            S2, R0
      VMUL.F32        S0, S2, S0
      VSTR            S0, [R3]
  else
      VMOV            S0, LR
      VCVT.F32.S32    S2, S0
      VMOV            S0, R12
      VCVT.F32.S32    S0, S0
  return result;
}


_BOOL4 __fastcall ChestBlockEntity::isLargeChest(ChestBlockEntity *this)
{
  return *((_DWORD *)this + 73) != 0;
}


int __fastcall ChestBlockEntity::_forceCloseChest(ChestBlockEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r4@1
  ChestBlockEntity *i; // r5@1
  void *v4; // r0@3
  void *v5; // r7@4
  int result; // r0@8

  v2 = a2;
  for ( i = this; ; i = (ChestBlockEntity *)*((_DWORD *)i + 73) )
  {
    v4 = (void *)*((_DWORD *)i + 80);
    if ( v4 )
    {
      do
      {
        v5 = *(void **)v4;
        operator delete(v4);
        v4 = v5;
      }
      while ( v5 );
    }
    _aeabi_memclr4(*((_QWORD *)i + 39), 4 * (*((_QWORD *)i + 39) >> 32));
    *((_DWORD *)i + 80) = 0;
    *((_DWORD *)i + 81) = 0;
    if ( *((_BYTE *)i + 280) & 1 )
      break;
  }
  while ( 1 )
    result = *((_BYTE *)i + 272);
    if ( !*((_BYTE *)i + 272) )
    ChestBlockEntity::_closeChest(i, v2, 0);
  return result;
}


signed int __fastcall ChestBlockEntity::canPullOutItem(ChestBlockEntity *this, BlockSource *a2, int a3, int a4, const ItemInstance *a5)
{
  return 1;
}


int __fastcall ChestBlockEntity::tick(ChestBlockEntity *this, BlockSource *a2)
{
  BlockSource *v3; // r4@1
  Level *v4; // r6@3
  int v5; // r0@7
  __int64 v6; // r1@7
  ChestBlockEntity *v7; // r7@8
  signed int v8; // r0@13
  int result; // r0@18
  int v11; // r1@18
  int v16; // [sp+4h] [bp-24h]@7
  int v17; // [sp+8h] [bp-20h]@7
  int v18; // [sp+Ch] [bp-1Ch]@7
  unsigned __int8 v19; // [sp+10h] [bp-18h]@2

  _R5 = this;
  v3 = a2;
  if ( !*((_DWORD *)this + 2) )
  {
    BlockSource::getBlockID((BlockSource *)&v19, a2, (int)this + 32);
    *((_DWORD *)_R5 + 2) = Block::mBlocks[v19];
  }
  BlockEntity::tick(_R5, v3);
  v4 = (Level *)BlockSource::getLevel(v3);
  if ( *((_BYTE *)_R5 + 280) & 8 )
    v5 = *((_DWORD *)_R5 + 9);
    v6 = *(_QWORD *)((char *)_R5 + 284);
    v16 = *(_QWORD *)((char *)_R5 + 284);
    v17 = v5;
    v18 = HIDWORD(v6);
    if ( BlockSource::getChunkAt(v3, (const BlockPos *)&v16) )
    {
      v7 = (ChestBlockEntity *)BlockSource::getBlockEntity(
                                 v3,
                                 *(_QWORD *)((char *)_R5 + 284),
                                 *((_DWORD *)_R5 + 9),
                                 *(_QWORD *)((char *)_R5 + 284) >> 32);
      if ( v7 && ChestBlockEntity::canPairWith(_R5, v7, v3) == 1 )
      {
        ChestBlockEntity::pairWith(_R5, v7, 1);
        ChestBlockEntity::pairWith(v7, _R5, 0);
      }
      *((_BYTE *)_R5 + 280) &= 0xF7u;
    }
  else if ( *((_DWORD *)_R5 + 73) )
    ChestBlockEntity::_validatePairedChest(_R5, v3);
  if ( !*((_BYTE *)_R5 + 272) )
    goto LABEL_39;
  v8 = *((_DWORD *)_R5 + 69);
  *((_DWORD *)_R5 + 69) = v8 + 1;
  if ( v8 >= 79 && !Level::isClientSide(v4) )
    BlockSource::blockEvent(v3, (ChestBlockEntity *)((char *)_R5 + 32), 1, *((_BYTE *)_R5 + 272));
    *((_DWORD *)_R5 + 69) = 0;
LABEL_39:
    result = *((_DWORD *)_R5 + 66);
    _R6 = (ChestBlockEntity *)((char *)_R5 + 264);
    *((_DWORD *)_R5 + 67) = result;
    __asm { VMOV            S0, R0 }
LABEL_21:
    __asm
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      return result;
    result = 1;
    goto LABEL_27;
  if ( *((_DWORD *)_R5 + 66) & 0x7FFFFFFF )
  else
    (*(void (__fastcall **)(ChestBlockEntity *, BlockSource *))(*(_DWORD *)_R5 + 176))(_R5, v3);
    v11 = *((_BYTE *)_R5 + 272);
    if ( !v11 )
      goto LABEL_21;
  __asm
    VMOV.F32        S2, #1.0
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) )
    return result;
  result = 0;
LABEL_27:
    VLDR            S2, [R5,#0xFC]
    VNEG.F32        S4, S2
  if ( !_ZF )
    __asm { VMOVNE.F32      S2, S4 }
    VMOV.F32        S4, #1.0
    VADD.F32        S2, S2, S0
    VCMPE.F32       S2, S4
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S2, S4 }
    VMOV.F32        S4, #0.5
    VSTR            S2, [R6]
    VCMPE.F32       S0, S4
      VCMPE.F32       S2, S4
    if ( _NF ^ _VF )
      result = (*(int (__fastcall **)(ChestBlockEntity *, BlockSource *))(*(_DWORD *)_R5 + 180))(_R5, v3);
      __asm { VLDR            S2, [R6] }
    VCMPE.F32       S2, #0.0
  if ( _NF ^ _VF )
    result = 0;
    *(_DWORD *)_R6 = 0;
  return result;
}


void __fastcall ChestBlockEntity::loadItems(ChestBlockEntity *this, const CompoundTag *a2)
{
  ChestBlockEntity::loadItems(this, a2);
}


ChestBlockEntity *__fastcall ChestBlockEntity::getCrackEntity(ChestBlockEntity *this, BlockSource *a2, const BlockPos *a3)
{
  ChestBlockEntity *v3; // r4@1
  BlockSource *v4; // r5@1
  int v6; // [sp+4h] [bp-1Ch]@2
  int v7; // [sp+8h] [bp-18h]@2
  int v8; // [sp+Ch] [bp-14h]@2

  v3 = this;
  v4 = a2;
  if ( !(*((_BYTE *)this + 280) & 1) )
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
    if ( (*(int (**)(void))(*(_DWORD *)Block::mChest + 260))() )
      v3 = (ChestBlockEntity *)BlockSource::getBlockEntity(v4, (const BlockPos *)&v6);
  }
  return v3;
}


void __fastcall ChestBlockEntity::createTrappedChestBlockEntity(ChestBlockEntity *this, const BlockPos *a2)
{
  ChestBlockEntity::createTrappedChestBlockEntity(this, a2);
}


int __fastcall ChestBlockEntity::_legacyDetectBlockObstruction(ChestBlockEntity *this, BlockSource *a2)
{
  ChestBlockEntity *v2; // r5@1
  BlockSource *v3; // r4@1
  int v4; // r1@1
  int v5; // r2@1
  int v6; // r6@1
  Material *v7; // r0@2
  int v8; // r1@3
  int v9; // r2@3
  int v10; // r3@3
  int (__fastcall *v11)(int, BlockSource *, int *); // r5@3
  int result; // r0@3
  int v13; // [sp+4h] [bp-2Ch]@3
  int v14; // [sp+8h] [bp-28h]@3
  int v15; // [sp+Ch] [bp-24h]@3
  unsigned __int8 v16; // [sp+10h] [bp-20h]@1
  int v17; // [sp+14h] [bp-1Ch]@1
  int v18; // [sp+18h] [bp-18h]@1
  int v19; // [sp+1Ch] [bp-14h]@1

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 9);
  v5 = *((_DWORD *)this + 10);
  v17 = *((_DWORD *)this + 8);
  v18 = v4 + 1;
  v19 = v5;
  BlockSource::getBlockID((BlockSource *)&v16, v3, (int)&v17);
  v6 = Block::mBlocks[v16];
  if ( v6 && (v7 = (Material *)Block::getMaterial((Block *)Block::mBlocks[v16]), Material::isSolidBlocking(v7) == 1) )
  {
    v8 = *((_DWORD *)v2 + 8);
    v9 = *((_DWORD *)v2 + 9);
    v10 = *((_DWORD *)v2 + 10);
    v11 = *(int (__fastcall **)(int, BlockSource *, int *))(*(_DWORD *)v6 + 16);
    v13 = v8;
    v14 = v9 + 1;
    v15 = v10;
    result = v11(v6, v3, &v13);
  }
  else
    result = 0;
  return result;
}


unsigned int __fastcall ChestBlockEntity::removeContentChangeListener(int a1, unsigned int a2)
{
  int v2; // r5@1
  unsigned int v3; // r4@1

  v2 = a1;
  v3 = a2;
  if ( !(*(_BYTE *)(a1 + 280) & 1) )
    (*(void (**)(void))(**(_DWORD **)(a1 + 292) + 172))();
  return j_j_j__ZN9Container27removeContentChangeListenerEP30ContainerContentChangeListener(v2 + 112, v3);
}


int __fastcall ChestBlockEntity::getObstructionAABB(ChestBlockEntity *this, int a2)
{
  int v2; // r5@1
  ChestBlockEntity *v3; // r4@1
  int v4; // r0@1
  int v5; // r1@1
  int v6; // r2@1
  int result; // r0@1
  int v8; // [sp+4h] [bp-5Ch]@1
  int v9; // [sp+8h] [bp-58h]@1
  int v10; // [sp+Ch] [bp-54h]@1
  char v11; // [sp+10h] [bp-50h]@1
  int v12; // [sp+1Ch] [bp-44h]@1
  int v13; // [sp+20h] [bp-40h]@1
  int v14; // [sp+24h] [bp-3Ch]@1
  int v15; // [sp+28h] [bp-38h]@1
  int v16; // [sp+2Ch] [bp-34h]@1
  int v17; // [sp+30h] [bp-30h]@1
  unsigned __int8 v18; // [sp+34h] [bp-2Ch]@1
  int v19; // [sp+38h] [bp-28h]@1
  int v20; // [sp+3Ch] [bp-24h]@1
  int v21; // [sp+40h] [bp-20h]@1
  int v22; // [sp+44h] [bp-1Ch]@1
  int v23; // [sp+48h] [bp-18h]@1
  signed int v24; // [sp+4Ch] [bp-14h]@1

  v2 = a2;
  v3 = this;
  v22 = 1031798784;
  v23 = 0;
  v24 = 1031798784;
  v4 = *(_DWORD *)(a2 + 260);
  v19 = 1064304640;
  v20 = v4;
  v21 = 1064304640;
  AABB::AABB((int)v3, (int)&v22, (int)&v19);
  v5 = *(_DWORD *)(v2 + 36);
  v6 = *(_DWORD *)(v2 + 40);
  v8 = *(_DWORD *)(v2 + 32);
  v9 = v5 + 1;
  v10 = v6;
  Vec3::Vec3((int)&v11, (int)&v8);
  AABB::translated((AABB *)&v12, v3, (int)&v11);
  *(_DWORD *)v3 = v12;
  *((_DWORD *)v3 + 1) = v13;
  *((_DWORD *)v3 + 2) = v14;
  *((_DWORD *)v3 + 3) = v15;
  *((_DWORD *)v3 + 4) = v16;
  *((_DWORD *)v3 + 5) = v17;
  result = v18;
  *((_BYTE *)v3 + 24) = v18;
  return result;
}


signed int __fastcall ChestBlockEntity::saveItemInstanceData(ChestBlockEntity *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  void *v3; // r0@2
  void *v4; // r0@3
  signed int result; // r0@4
  unsigned int *v6; // r12@6
  signed int v7; // r1@8
  unsigned int *v8; // r2@10
  signed int v9; // r1@12
  int v10; // [sp+4h] [bp-2Ch]@3
  int v11; // [sp+Ch] [bp-24h]@2

  v2 = a2;
  if ( BlockEntity::saveItemInstanceData(this, a2) == 1 )
  {
    sub_21E94B4((void **)&v11, "pairx");
    CompoundTag::safeRemove((int)v2, (const void **)&v11);
    v3 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
    {
      v6 = (unsigned int *)(v11 - 4);
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
        j_j_j_j__ZdlPv_9(v3);
    }
    sub_21E94B4((void **)&v10, "pairz");
    CompoundTag::safeRemove((int)v2, (const void **)&v10);
    v4 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v10 - 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        v9 = (*v8)--;
      if ( v9 <= 0 )
        j_j_j_j__ZdlPv_9(v4);
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall ChestBlockEntity::triggerEvent(int result, int a2, int a3)
{
  char v3; // r1@2

  if ( a2 == 1 )
  {
    v3 = 0;
    if ( a3 > 0 )
      v3 = 1;
    *(_BYTE *)(result + 272) = v3;
  }
  return result;
}


int __fastcall ChestBlockEntity::load(ChestBlockEntity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r7@1
  ChestBlockEntity *v3; // r5@1
  void *v4; // r0@1
  signed int v5; // r0@2
  signed int v6; // r6@2
  void *v7; // r0@2
  void *v8; // r0@5
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  void *v11; // r0@11
  char v12; // r0@12
  void *v13; // r0@14
  void *v14; // r0@15
  unsigned int *v16; // r2@17
  signed int v17; // r1@19
  unsigned int *v18; // r2@21
  signed int v19; // r1@23
  unsigned int *v20; // r2@33
  signed int v21; // r1@35
  unsigned int *v22; // r2@41
  signed int v23; // r1@43
  unsigned int *v24; // r2@45
  signed int v25; // r1@47
  int v26; // [sp+4h] [bp-44h]@15
  int v27; // [sp+Ch] [bp-3Ch]@14
  int v28; // [sp+14h] [bp-34h]@5
  int v29; // [sp+1Ch] [bp-2Ch]@4
  int v30; // [sp+24h] [bp-24h]@2
  int v31; // [sp+2Ch] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  RandomizableBlockEntityContainerBase::load(this, a2);
  sub_21E94B4((void **)&v31, "ConvertedFromConsole");
  *((_BYTE *)v3 + 280) = *((_BYTE *)v3 + 280) & 0xEF | 16 * CompoundTag::contains((int)v2, (const void **)&v31);
  v4 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v31 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v30, "pairx");
  v5 = CompoundTag::contains((int)v2, (const void **)&v30);
  v6 = v5;
  *((_BYTE *)v3 + 280) = *((_BYTE *)v3 + 280) & 0xF7 | 8 * v5;
  v7 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v30 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  if ( v6 == 1 )
    sub_21E94B4((void **)&v29, "pairlead");
    if ( CompoundTag::contains((int)v2, (const void **)&v29) == 1 )
      sub_21E94B4((void **)&v28, "pairlead");
      *((_BYTE *)v3 + 280) = CompoundTag::getBoolean((int)v2, (const void **)&v28) | *((_BYTE *)v3 + 280) & 0xFE;
      v8 = (void *)(v28 - 12);
      if ( (int *)(v28 - 12) != &dword_28898C0 )
      {
        v9 = (unsigned int *)(v28 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j__ZdlPv_9(v8);
      }
      *((_BYTE *)v3 + 280) |= 1u;
    v11 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v29 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      else
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    v12 = *((_BYTE *)v3 + 280);
    if ( *((_BYTE *)v3 + 280) & 1 )
      sub_21E94B4((void **)&v27, "pairx");
      *((_DWORD *)v3 + 71) = CompoundTag::getInt((int)v2, (const void **)&v27);
      v13 = (void *)(v27 - 12);
      if ( (int *)(v27 - 12) != &dword_28898C0 )
        v22 = (unsigned int *)(v27 - 4);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
      sub_21E94B4((void **)&v26, "pairz");
      *((_DWORD *)v3 + 72) = CompoundTag::getInt((int)v2, (const void **)&v26);
      v14 = (void *)(v26 - 12);
      if ( (int *)(v26 - 12) != &dword_28898C0 )
        v24 = (unsigned int *)(v26 - 4);
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 <= 0 )
          j_j_j_j__ZdlPv_9(v14);
      *((_DWORD *)v3 + 73) = 0;
      *((_DWORD *)v3 + 74) = BlockPos::ZERO;
      *((_DWORD *)v3 + 75) = unk_2816278;
      *((_DWORD *)v3 + 76) = dword_281627C;
      *((_BYTE *)v3 + 280) = v12 | 1;
      BlockEntity::_resetAABB(v3);
      *((_BYTE *)v3 + 280) = *((_BYTE *)v3 + 280) & 0xF5 | 2;
      BlockEntity::setChanged(v3);
  return (*(int (__fastcall **)(ChestBlockEntity *, const CompoundTag *))(*(_DWORD *)v3 + 140))(v3, v2);
}


int __fastcall ChestBlockEntity::getModelOffsetX(ChestBlockEntity *this)
{
  int result; // r0@2
  int v6; // r1@4
  int v7; // r0@4

  if ( *((_BYTE *)this + 280) & 1 )
  {
    __asm { VMOV.F32        S0, #0.5 }
    if ( *((_BYTE *)this + 280) & 4 )
    {
      v6 = *((_DWORD *)this + 10);
      v7 = *((_DWORD *)this + 76);
    }
    else
      v6 = *((_DWORD *)this + 8);
      v7 = *((_DWORD *)this + 74);
    __asm { VMOV.F32        S2, #-0.5 }
    if ( v7 < v6 )
      __asm { VMOVLT.F32      S0, S2 }
    __asm { VMOV            R0, S0 }
  }
  else
    __asm
      VLDREQ          S0, =0.0
      VMOVEQ          R0, S0
  return result;
}


int __fastcall ChestBlockEntity::_tryToPairWith(ChestBlockEntity *this, BlockSource *a2, const BlockPos *a3)
{
  ChestBlockEntity *v3; // r4@1
  const BlockPos *v4; // r6@1
  int result; // r0@1
  BlockSource *v6; // r5@1
  Level *v7; // r0@2
  BlockEntity *v8; // r0@3
  ChestBlockEntity *v9; // r6@3

  v3 = this;
  v4 = a3;
  result = *((_DWORD *)this + 73);
  v6 = a2;
  if ( !result )
  {
    v7 = (Level *)BlockSource::getLevel(a2);
    result = Level::isClientSide(v7);
    if ( !result )
    {
      v8 = (BlockEntity *)BlockSource::getBlockEntity(v6, v4);
      v9 = v8;
      result = ChestBlockEntity::canPairWith(v3, v8, v6);
      if ( result == 1 )
      {
        ChestBlockEntity::pairWith(v3, v9, 0);
        result = j_j_j__ZN16ChestBlockEntity8pairWithEPS_b(v9, v3, 1);
      }
    }
  }
  return result;
}


int *__fastcall ChestBlockEntity::startOpen(ChestBlockEntity *this, Player *a2)
{
  Entity *v2; // r4@1
  ChestBlockEntity *v3; // r5@1
  char *v4; // r0@1
  __int64 v5; // kr00_8@1
  __int64 v6; // kr08_8@1
  unsigned int v7; // r6@1
  unsigned int v8; // r7@1
  int *result; // r0@1
  int v10; // r10@2
  int v11; // r4@2
  bool v12; // zf@3
  int v13; // r5@6
  bool v14; // zf@9
  char *v15; // r0@13
  __int64 v16; // kr10_8@13
  __int64 v17; // kr18_8@13
  unsigned int v18; // r10@13
  int v19; // r5@13
  int v20; // r0@13
  int v21; // r9@14
  int v22; // r4@14
  bool v23; // zf@15
  int v24; // r7@18
  bool v25; // zf@21
  _QWORD *v26; // r0@25
  Level *v27; // r0@27
  bool v28; // zf@27
  BlockSource *v29; // r0@31
  char *v30; // [sp+0h] [bp-30h]@13
  Player *v31; // [sp+4h] [bp-2Ch]@1
  ChestBlockEntity *v32; // [sp+8h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  v31 = a2;
  v32 = this;
  RandomizableBlockEntityFillingContainer::startOpen(this, a2);
  v4 = Entity::getUniqueID(v2);
  v5 = *(_QWORD *)v4;
  v6 = *((_QWORD *)v3 + 39);
  v7 = (*(_QWORD *)v4
      + (((*(_QWORD *)v4 >> 32) - 1640531527) << 6)
      + ((unsigned int)((*(_QWORD *)v4 >> 32) - 1640531527) >> 2)
      - 1640531527) ^ ((*(_QWORD *)v4 >> 32) - 1640531527);
  v8 = v7 % (unsigned int)(*((_QWORD *)v3 + 39) >> 32);
  result = *(int **)(v6 + 4 * v8);
  if ( !result )
    goto LABEL_13;
  v10 = *result;
  v11 = *(_DWORD *)(*result + 16);
  while ( 1 )
  {
    v12 = v11 == v7;
    if ( v11 == v7 )
      v12 = *(_QWORD *)(v10 + 8) == v5;
    if ( v12 )
      break;
    v13 = *(_DWORD *)v10;
    if ( *(_DWORD *)v10 )
    {
      v11 = *(_DWORD *)(v13 + 16);
      result = (int *)v10;
      v10 = *(_DWORD *)v10;
      if ( *(_DWORD *)(v13 + 16) % HIDWORD(v6) == v8 )
        continue;
    }
  }
  v14 = result == 0;
  if ( result )
    result = (int *)*result;
    v14 = result == 0;
  if ( v14 )
LABEL_13:
    v15 = Entity::getUniqueID(v31);
    v30 = v15;
    v16 = *(_QWORD *)v15;
    v17 = *((_QWORD *)v32 + 39);
    v18 = (*(_QWORD *)v15
         + (((*(_QWORD *)v15 >> 32) - 1640531527) << 6)
         + ((unsigned int)((*(_QWORD *)v15 >> 32) - 1640531527) >> 2)
         - 1640531527) ^ ((*(_QWORD *)v15 >> 32) - 1640531527);
    v19 = v18 % (unsigned int)(*((_QWORD *)v32 + 39) >> 32);
    v20 = *(_DWORD *)(v17 + 4 * v19);
    if ( !v20 )
      goto LABEL_25;
    v21 = *(_DWORD *)v20;
    v22 = *(_DWORD *)(*(_DWORD *)v20 + 16);
    while ( 1 )
      v23 = v22 == v18;
      if ( v22 == v18 )
        v23 = *(_QWORD *)(v21 + 8) == v16;
      if ( v23 )
        break;
      v24 = *(_DWORD *)v21;
      if ( *(_DWORD *)v21 )
      {
        v22 = *(_DWORD *)(v24 + 16);
        v20 = v21;
        v21 = *(_DWORD *)v21;
        if ( *(_DWORD *)(v24 + 16) % HIDWORD(v17) == v19 )
          continue;
      }
    v25 = v20 == 0;
    if ( v20 )
      v25 = *(_DWORD *)v20 == 0;
    if ( v25 )
LABEL_25:
      v26 = operator new(0x18u);
      *(_DWORD *)v26 = 0;
      v26[1] = *(_QWORD *)v30;
      std::_Hashtable<EntityUniqueID,EntityUniqueID,std::allocator<EntityUniqueID>,std::__detail::_Identity,std::equal_to<EntityUniqueID>,std::hash<EntityUniqueID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert_unique_node(
        (int)v32 + 312,
        v19,
        v18,
        (int)v26);
    *((_BYTE *)v32 + 272) = 1;
    result = (int *)*((_BYTE *)v32 + 96);
    if ( !*((_BYTE *)v32 + 96) )
      v27 = (Level *)Entity::getLevel(v31);
      result = (int *)Level::isClientSide(v27);
      v28 = result == 0;
      if ( !result )
        result = (int *)*((_DWORD *)v32 + 81);
        v28 = result == (int *)1;
      if ( v28 )
        v29 = (BlockSource *)Entity::getRegion(v31);
        result = (int *)j_j_j__ZN11BlockSource10blockEventERK8BlockPosii(
                          v29,
                          (ChestBlockEntity *)((char *)v32 + 32),
                          1,
                          *((_BYTE *)v32 + 272));
  return result;
}


void **__fastcall ChestBlockEntity::getName(ChestBlockEntity *this, int a2)
{
  const char *v2; // r3@1

  v2 = "container.chestDouble";
  if ( !*(_DWORD *)(a2 + 292) )
    v2 = "container.chest";
  return sub_21E94B4((void **)this, v2);
}


int __fastcall ChestBlockEntity::setOldOpenness(int result, float a2)
{
  *(float *)(result + 268) = a2;
  return result;
}


int __fastcall ChestBlockEntity::getItem(ChestBlockEntity *this, int a2)
{
  ChestBlockEntity *v2; // r2@1
  int v3; // r1@2
  int result; // r0@4
  int v5; // r1@5

  v2 = (ChestBlockEntity *)*((_DWORD *)this + 73);
  if ( a2 > 26 )
  {
    v5 = 9 * a2;
    if ( !(*((_BYTE *)this + 280) & 1) )
      v2 = this;
    result = *((_DWORD *)v2 + 56) + 8 * v5 - 1944;
  }
  else
    v3 = 9 * a2;
      this = (ChestBlockEntity *)*((_DWORD *)this + 73);
    result = *((_DWORD *)this + 56) + 8 * v3;
  return result;
}


_BOOL4 __fastcall ChestBlockEntity::openBy(ChestBlockEntity *this, Player *a2)
{
  Player *v2; // r4@1
  ChestBlockEntity *v3; // r5@1
  char v4; // r6@1
  _BOOL4 result; // r0@1
  ChestBlockEntity *v6; // r0@3
  int (__fastcall *v7)(ChestBlockEntity *, Player *); // r2@3

  v2 = a2;
  v3 = this;
  v4 = *((_BYTE *)this + 280);
  (*(void (__fastcall **)(Player *, char *))(*(_DWORD *)a2 + 1284))(a2, (char *)this + 32);
  result = Player::hasOpenContainer(v2);
  if ( v4 & 1 )
  {
    if ( result != 1 )
      return result;
    v7 = *(int (__fastcall **)(ChestBlockEntity *, Player *))(*(_DWORD *)v3 + 116);
    v6 = v3;
  }
  else
    v6 = (ChestBlockEntity *)*((_DWORD *)v3 + 73);
    v7 = *(int (__fastcall **)(ChestBlockEntity *, Player *))(*(_DWORD *)v6 + 116);
  return v7(v6, v2);
}


CompoundTag *__fastcall ChestBlockEntity::getUpdatePacket(ChestBlockEntity *this, BlockSource *a2)
{
  ChestBlockEntity *v2; // r4@1
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
  ChestBlockEntity::_saveClientSideState(v3, (CompoundTag *)&v9);
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


char *__fastcall ChestBlockEntity::getPairedChestPosition(ChestBlockEntity *this)
{
  return (char *)this + 296;
}


void __fastcall ChestBlockEntity::getDebugText(int a1, int a2)
{
  ChestBlockEntity::getDebugText(a1, a2);
}


signed int __fastcall ChestBlockEntity::_canOpenThis(ChestBlockEntity *this, BlockSource *a2)
{
  ChestBlockEntity *v2; // r5@1
  BlockSource *v3; // r4@1
  int v4; // r1@2
  int v5; // r2@2
  int v6; // r6@2
  Material *v7; // r0@3
  int v8; // r3@4
  int (__fastcall *v9)(int, BlockSource *, int *); // r12@4
  int v10; // r0@4
  signed int v11; // r5@5
  unsigned __int64 *v12; // r0@8
  int v14; // [sp+4h] [bp-3Ch]@4
  int v15; // [sp+8h] [bp-38h]@4
  int v16; // [sp+Ch] [bp-34h]@4
  unsigned __int8 v17; // [sp+10h] [bp-30h]@2
  int v18; // [sp+14h] [bp-2Ch]@2
  int v19; // [sp+18h] [bp-28h]@2
  int v20; // [sp+1Ch] [bp-24h]@2

  v2 = this;
  v3 = a2;
  if ( *((_BYTE *)this + 257) )
  {
    v4 = *((_DWORD *)this + 9);
    v5 = *((_DWORD *)this + 10);
    v18 = *((_DWORD *)this + 8);
    v19 = v4 + 1;
    v20 = v5;
    BlockSource::getBlockID((BlockSource *)&v17, v3, (int)&v18);
    v6 = Block::mBlocks[v17];
    if ( v6 )
    {
      v7 = (Material *)Block::getMaterial((Block *)Block::mBlocks[v17]);
      if ( Material::isSolidBlocking(v7) )
      {
        v8 = *((_DWORD *)v2 + 10);
        v9 = *(int (__fastcall **)(int, BlockSource *, int *))(*(_DWORD *)v6 + 16);
        v10 = *((_DWORD *)v2 + 9) + 1;
        v14 = *((_DWORD *)v2 + 8);
        v15 = v10;
        v16 = v8;
        if ( v9(v6, v3, &v14) )
          return 0;
      }
    }
  }
  else if ( ChestBlockEntity::_detectBlockObstruction(this, a2) )
    return 0;
  (*(void (__fastcall **)(int *, ChestBlockEntity *))(*(_DWORD *)v2 + 188))(&v18, v2);
  v11 = 0;
  v12 = (unsigned __int64 *)BlockSource::fetchEntities((int)v3, 256, (int)&v18, 0);
  if ( *v12 >> 32 == (unsigned int)*v12 )
    v11 = 1;
  return v11;
}


signed int __fastcall ChestBlockEntity::_detectEntityObstruction(ChestBlockEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r4@1
  signed int v3; // r6@1
  unsigned __int64 *v4; // r0@1
  char v6; // [sp+4h] [bp-2Ch]@1

  v2 = a2;
  (*(void (__fastcall **)(char *))(*(_DWORD *)this + 188))(&v6);
  v3 = 0;
  v4 = (unsigned __int64 *)BlockSource::fetchEntities((int)v2, 256, (int)&v6, 0);
  if ( *v4 >> 32 != (unsigned int)*v4 )
    v3 = 1;
  return v3;
}


signed int __fastcall ChestBlockEntity::_saveClientSideState(ChestBlockEntity *this, CompoundTag *a2)
{
  CompoundTag *v2; // r6@1
  ChestBlockEntity *v3; // r5@1
  int v4; // r1@2
  bool v5; // zf@2
  void *v6; // r0@5
  void *v7; // r0@6
  void *v8; // r0@7
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  void *v12; // r0@14
  void *v13; // r0@15
  unsigned int *v14; // r2@21
  signed int v15; // r1@23
  unsigned int *v16; // r2@25
  signed int v17; // r1@27
  unsigned int *v18; // r2@41
  signed int v19; // r1@43
  unsigned int *v20; // r2@45
  signed int v21; // r1@47
  int v22; // [sp+8h] [bp-40h]@16
  int v23; // [sp+10h] [bp-38h]@15
  int v24; // [sp+18h] [bp-30h]@14
  int v25; // [sp+20h] [bp-28h]@7
  int v26; // [sp+28h] [bp-20h]@6
  int v27; // [sp+30h] [bp-18h]@5

  v2 = a2;
  v3 = this;
  if ( RandomizableBlockEntityContainerBase::save(this, a2) != 1 )
    return 0;
  v4 = *((_DWORD *)v3 + 73);
  v5 = v4 == 0;
  if ( v4 )
    v5 = (*((_BYTE *)v3 + 280) & 1) == 0;
  if ( v5 )
  {
    if ( !(*((_BYTE *)v3 + 280) & 8) )
      return 1;
    sub_21E94B4((void **)&v24, "pairlead");
    CompoundTag::putBoolean((int)v2, (const void **)&v24, 1);
    v12 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
    {
      v18 = (unsigned int *)(v24 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
      }
      else
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    }
    sub_21E94B4((void **)&v23, "pairx");
    CompoundTag::putInt((int)v2, (const void **)&v23, *((_DWORD *)v3 + 71));
    v13 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v23 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    sub_21E94B4((void **)&v22, "pairz");
    CompoundTag::putInt((int)v2, (const void **)&v22, *((_DWORD *)v3 + 72));
    v8 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) == &dword_28898C0 )
    v9 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      goto LABEL_30;
  }
  else
    sub_21E94B4((void **)&v27, "pairlead");
    CompoundTag::putBoolean((int)v2, (const void **)&v27, 1);
    v6 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v27 - 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    sub_21E94B4((void **)&v26, "pairx");
    CompoundTag::putInt((int)v2, (const void **)&v26, *((_DWORD *)v3 + 74));
    v7 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v26 - 4);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    sub_21E94B4((void **)&v25, "pairz");
    CompoundTag::putInt((int)v2, (const void **)&v25, *((_DWORD *)v3 + 76));
    v8 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) == &dword_28898C0 )
    v9 = (unsigned int *)(v25 - 4);
  v10 = (*v9)--;
LABEL_30:
  if ( v10 <= 0 )
    j_j_j_j__ZdlPv_9(v8);
  return 1;
}


int __fastcall ChestBlockEntity::canOpen(ChestBlockEntity *this, BlockSource *a2)
{
  ChestBlockEntity *v2; // r5@1
  int v3; // r6@1
  int v4; // r1@1
  signed int v5; // r0@1
  int result; // r0@3

  v2 = this;
  v3 = *((_DWORD *)this + 73);
  v4 = (*(int (**)(void))(*(_DWORD *)this + 184))();
  v5 = 0;
  if ( !v3 )
    v5 = 1;
  result = v5 & v4;
  if ( v3 )
  {
    if ( !(v4 ^ 1) )
      result = (*(int (**)(void))(**((_DWORD **)v2 + 73) + 184))();
  }
  return result;
}


int __fastcall ChestBlockEntity::_playerClosedContainer(ChestBlockEntity *this, Player *a2)
{
  ChestBlockEntity *v2; // r4@1
  __int64 v3; // kr00_8@1
  unsigned int v4; // r10@1
  unsigned int v5; // r6@1
  unsigned int *v6; // r0@1
  unsigned int v7; // r8@2
  int v8; // r4@2
  unsigned int v9; // r9@5
  bool v10; // zf@8
  ChestBlockEntity *v11; // r7@12
  int result; // r0@12
  int v13; // r11@11
  int v14; // r5@11
  ChestBlockEntity *v15; // r8@11
  ChestBlockEntity *v16; // r0@11
  ChestBlockEntity *v17; // r4@16
  int v18; // r1@19
  int v19; // r9@22
  int v20; // r1@23
  int v21; // [sp+0h] [bp-30h]@1
  ChestBlockEntity *v22; // [sp+4h] [bp-2Ch]@1

  v2 = this;
  v22 = this;
  v3 = *(_QWORD *)Entity::getUniqueID(a2);
  v4 = *((_DWORD *)v2 + 79);
  v21 = *((_DWORD *)v2 + 78);
  v5 = (v3 + ((HIDWORD(v3) - 1640531527) << 6) + ((unsigned int)(HIDWORD(v3) - 1640531527) >> 2) - 1640531527) ^ (HIDWORD(v3) - 1640531527);
  v6 = *(unsigned int **)(*((_DWORD *)v2 + 78) + 4 * (v5 % v4));
  if ( !v6 )
    goto LABEL_12;
  v7 = *v6;
  v8 = *(_DWORD *)(*v6 + 16);
  while ( v8 != v5 || *(_QWORD *)(v7 + 8) != v3 )
  {
    v9 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 )
    {
      v8 = *(_DWORD *)(v9 + 16);
      v6 = (unsigned int *)v7;
      v7 = *(_DWORD *)v7;
      if ( *(_DWORD *)(v9 + 16) % v4 == v5 % v4 )
        continue;
    }
  }
  v10 = v6 == 0;
  if ( v6 )
    v5 = *v6;
    v10 = *v6 == 0;
  if ( v10 )
LABEL_12:
    v11 = v22;
    result = *((_DWORD *)v22 + 81);
    goto LABEL_13;
  v13 = v21;
  v14 = *(_DWORD *)(v5 + 16) % v4;
  v15 = *(ChestBlockEntity **)(v21 + 4 * v14);
  v16 = *(ChestBlockEntity **)(v21 + 4 * v14);
  do
    v17 = v16;
    v16 = *(ChestBlockEntity **)v16;
  while ( v16 != (ChestBlockEntity *)v5 );
  if ( v15 != v17 )
    if ( *(_DWORD *)v5 )
      v18 = *(_DWORD *)(*(_DWORD *)v5 + 16) % v4;
      if ( v18 != v14 )
        *(_DWORD *)(v21 + 4 * v18) = v17;
    goto LABEL_28;
  v19 = *(_DWORD *)v5;
  v11 = v22;
  if ( !*(_DWORD *)v5 )
LABEL_25:
    if ( (ChestBlockEntity *)((char *)v22 + 320) == v15 )
      *(_DWORD *)v15 = v19;
    *(_DWORD *)(v13 + 4 * v14) = 0;
  v20 = *(_DWORD *)(v19 + 16) % v4;
  if ( v20 != v14 )
    *(_DWORD *)(v21 + 4 * v20) = v15;
    v13 = *((_DWORD *)v22 + 78);
    v15 = *(ChestBlockEntity **)(v13 + 4 * v14);
    goto LABEL_25;
LABEL_28:
  *(_DWORD *)v17 = *(_DWORD *)v5;
  operator delete((void *)v5);
  result = *((_DWORD *)v11 + 81) - 1;
  *((_DWORD *)v11 + 81) = result;
LABEL_13:
  if ( !result )
    result = 0;
    *((_BYTE *)v11 + 272) = 0;
  return result;
}


int __fastcall ChestBlockEntity::setItem(int result, int a2, const ItemInstance *a3)
{
  signed int v3; // r4@1
  const ItemInstance *v4; // r10@1
  int v5; // r5@1
  int v6; // r8@3
  int v7; // r7@3
  int v8; // r0@3
  int v9; // r11@12
  signed int v10; // r0@18
  int v11; // r9@18
  bool v12; // zf@19
  int v13; // r0@25

  v3 = a2;
  v4 = a3;
  v5 = result;
  if ( a2 >= 0 )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 124))();
    if ( result > v3 )
    {
      v6 = v3;
      v7 = *(_DWORD *)(v5 + 292);
      v8 = v5;
      if ( !(*(_BYTE *)(v5 + 280) & 1) )
      {
        v8 = *(_DWORD *)(v5 + 292);
        v7 = v5;
      }
      if ( v3 < 27 )
        v7 = v8;
      if ( v3 > 26 )
        v6 = v3 - 27;
      if ( *((_BYTE *)v4 + 15) )
        if ( *(_DWORD *)v4 )
        {
          if ( ItemInstance::isNull(v4) )
          {
            v9 = 0;
          }
          else if ( *((_BYTE *)v4 + 14) )
            v9 = ItemInstance::isNull(v4) ^ 1;
          else
        }
        else
          v9 = 0;
      else
        v9 = 0;
      v10 = ItemInstance::isNull((ItemInstance *)(*(_DWORD *)(v7 + 224) + 72 * v6));
      v11 = v10 ^ v9 ^ 1;
      if ( !v10 )
        v12 = (v10 ^ v9) == 1;
        if ( !v11 )
          v12 = v9 == 1;
        if ( v12 )
          v11 = ItemInstance::operator!=(v4, (ItemInstance *)(*(_DWORD *)(v7 + 224) + 72 * v6));
      if ( *(_BYTE *)(v5 + 280) & 1 )
        v13 = v5;
        v13 = *(_DWORD *)(v5 + 292);
      (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(v13 + 112) + 112))(
        v13 + 112,
        v6,
        *(_DWORD *)(v7 + 224) + 72 * v6,
        v4);
      result = ItemInstance::operator=(*(_DWORD *)(v7 + 224) + 72 * v6, (int)v4);
      if ( v11 == 1 )
        *(_BYTE *)(v5 + 280) |= 2u;
        BlockEntity::setChanged((BlockEntity *)v5);
        result = (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v5 + 156))(v5, v3);
    }
  }
  return result;
}


void __fastcall ChestBlockEntity::createTrappedChestBlockEntity(ChestBlockEntity *this, const BlockPos *a2)
{
  char v2; // [sp+Fh] [bp-11h]@1
  int v3; // [sp+10h] [bp-10h]@1
  int v4; // [sp+14h] [bp-Ch]@1

  v4 = 2;
  v3 = 1;
  v2 = 1;
  std::make_unique<ChestBlockEntity,BlockEntityType,char const(&)[6],BlockEntityRendererId,BlockPos const&,bool>(
    (int *)this,
    &v4,
    "Chest",
    &v3,
    (int)a2,
    &v2);
}


signed int __fastcall ChestBlockEntity::isTrappedChest(ChestBlockEntity *this)
{
  ChestBlockEntity *v1; // r1@1
  Block *v2; // r0@1
  signed int result; // r0@2

  v1 = this;
  v2 = (Block *)*((_DWORD *)this + 2);
  if ( v2 )
  {
    result = Block::isType(v2, (const Block *)Block::mTrappedChest);
  }
  else
    result = *((_BYTE *)v1 + 308);
    if ( *((_BYTE *)v1 + 308) )
      result = 1;
  return result;
}


int __fastcall ChestBlockEntity::pairWith(ChestBlockEntity *this, ChestBlockEntity *a2, bool a3)
{
  ChestBlockEntity *v3; // r5@1
  ChestBlockEntity *v4; // r4@1
  bool v5; // r6@1
  char *v6; // r0@1
  char *v7; // r0@1
  signed int v8; // r3@1
  char v9; // r2@1
  int v10; // r0@3
  char *v11; // r0@4
  bool v12; // zf@4
  int v13; // r0@7
  char *v14; // r7@7
  int v15; // r1@7
  signed int v16; // r0@7
  unsigned int v17; // r8@7
  int v18; // r2@7
  int v19; // r5@10 OVERLAPPED
  int v20; // r6@10 OVERLAPPED
  void *v21; // r0@11
  void *v22; // r0@13
  int v23; // r0@15
  __int64 v25; // [sp+0h] [bp-40h]@7
  char *v26; // [sp+8h] [bp-38h]@7
  int v27; // [sp+Ch] [bp-34h]@4
  int v28; // [sp+10h] [bp-30h]@4
  int v29; // [sp+14h] [bp-2Ch]@4
  int v30; // [sp+18h] [bp-28h]@4
  int v31; // [sp+1Ch] [bp-24h]@4
  int v32; // [sp+20h] [bp-20h]@4
  char v33; // [sp+24h] [bp-1Ch]@4

  v3 = a2;
  v4 = this;
  v5 = a3;
  *((_DWORD *)this + 73) = a2;
  v6 = BlockEntity::getPosition(a2);
  *((_DWORD *)v4 + 74) = *(_DWORD *)v6;
  *((_DWORD *)v4 + 75) = *((_DWORD *)v6 + 1);
  *((_DWORD *)v4 + 76) = *((_DWORD *)v6 + 2);
  *((_BYTE *)v4 + 280) = *((_BYTE *)v4 + 280) & 0xFE | v5;
  v7 = BlockEntity::getPosition(v3);
  v8 = 0;
  v9 = *((_BYTE *)v4 + 280);
  if ( *(_DWORD *)v7 == *((_DWORD *)v4 + 8) )
    v8 = 1;
  v10 = (unsigned __int8)(v9 & 0xFB) | 4 * v8;
  *((_BYTE *)v4 + 280) = v10;
  if ( v9 & 1 )
  {
    v11 = BlockEntity::getAABB(v3);
    AABB::merge((AABB *)&v27, (ChestBlockEntity *)((char *)v4 + 44), (int)v11);
    *((_DWORD *)v4 + 11) = v27;
    *((_DWORD *)v4 + 12) = v28;
    *((_DWORD *)v4 + 13) = v29;
    *((_DWORD *)v4 + 14) = v30;
    *((_DWORD *)v4 + 15) = v31;
    *((_DWORD *)v4 + 16) = v32;
    *((_BYTE *)v4 + 68) = v33;
    LOBYTE(v10) = *((_BYTE *)v4 + 280);
    v12 = (v10 & 0x10) == 0;
    if ( *((_BYTE *)v4 + 280) & 0x10 )
      v12 = (*((_BYTE *)v3 + 280) & 0x10) == 0;
    if ( !v12 )
    {
      v13 = *((_DWORD *)v4 + 56);
      v14 = 0;
      v15 = *((_DWORD *)v4 + 57);
      v25 = 0LL;
      v16 = v15 - v13;
      v26 = 0;
      v17 = 954437177 * (v16 >> 3);
      v18 = v15;
      if ( v16 )
      {
        if ( v17 >= 0x38E38E4 )
          sub_21E57F4();
        v14 = (char *)operator new(v16);
        v15 = *((_QWORD *)v4 + 28) >> 32;
        v18 = *((_QWORD *)v4 + 28);
      }
      v25 = __PAIR__(
              std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ItemInstance const*,std::vector<ItemInstance,std::allocator<ItemInstance>>>,ItemInstance*>(
                v18,
                v15,
                (int)v14),
              (unsigned int)v14);
      v26 = &v14[72 * v17];
      std::vector<ItemInstance,std::allocator<ItemInstance>>::operator=((int)v4 + 224, (unsigned __int64 *)v3 + 28);
      std::vector<ItemInstance,std::allocator<ItemInstance>>::operator=((int)v3 + 224, (unsigned __int64 *)&v25);
      *((_BYTE *)v4 + 280) &= 0xEFu;
      *((_BYTE *)v3 + 280) &= 0xEFu;
      *(_QWORD *)&v19 = v25;
      if ( (_DWORD)v25 != HIDWORD(v25) )
        do
        {
          v21 = *(void **)(v19 + 52);
          if ( v21 )
            operator delete(v21);
          v22 = *(void **)(v19 + 36);
          if ( v22 )
            operator delete(v22);
          v23 = *(_DWORD *)(v19 + 8);
          if ( v23 )
            (*(void (**)(void))(*(_DWORD *)v23 + 4))();
          *(_DWORD *)(v19 + 8) = 0;
          v19 += 72;
        }
        while ( v20 != v19 );
        v19 = v25;
      if ( v19 )
        operator delete((void *)v19);
      LOBYTE(v10) = *((_BYTE *)v4 + 280);
    }
  }
  *((_BYTE *)v4 + 280) = v10 | 2;
  return BlockEntity::setChanged(v4);
}


void __fastcall ChestBlockEntity::~ChestBlockEntity(ChestBlockEntity *this)
{
  ChestBlockEntity *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r5@2
  char *v4; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_27093D4;
  *((_DWORD *)this + 28) = &off_270949C;
  v2 = (void *)*((_DWORD *)this + 80);
  if ( v2 )
  {
    do
    {
      v3 = *(void **)v2;
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  _aeabi_memclr4(*((_QWORD *)v1 + 39), 4 * (*((_QWORD *)v1 + 39) >> 32));
  *((_DWORD *)v1 + 80) = 0;
  *((_DWORD *)v1 + 81) = 0;
  v4 = (char *)*((_DWORD *)v1 + 78);
  if ( v4 && (char *)v1 + 336 != v4 )
    operator delete(v4);
  RandomizableBlockEntityFillingContainer::~RandomizableBlockEntityFillingContainer(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall ChestBlockEntity::getDebugText(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  __int64 v4; // r0@1
  int v5; // r1@2
  void *v6; // r0@4
  const char *v7; // r1@5
  __int64 v8; // r0@7
  int v9; // r1@8
  void *v10; // r0@10
  const char *v11; // r1@11
  __int64 v12; // r0@13
  int v13; // r1@14
  void *v14; // r0@16
  signed int v15; // r0@17
  const void **v16; // r0@17
  void *v17; // r1@17
  __int64 v18; // kr00_8@17
  char *v19; // r1@18
  char *v20; // r0@20
  void *v21; // r0@21
  const void **v22; // r0@22
  void *v23; // r1@22
  __int64 v24; // kr08_8@22
  char *v25; // r1@23
  char *v26; // r0@25
  void *v27; // r0@26
  const void **v28; // r0@27
  void *v29; // r1@27
  __int64 v30; // kr10_8@27
  char *v31; // r1@28
  char *v32; // r0@30
  void *v33; // r0@31
  void *v34; // r0@32
  void *v35; // r0@33
  unsigned int *v36; // r2@35
  signed int v37; // r1@37
  unsigned int *v38; // r2@39
  signed int v39; // r1@41
  unsigned int *v40; // r2@43
  signed int v41; // r1@45
  unsigned int *v42; // r2@47
  signed int v43; // r1@49
  unsigned int *v44; // r2@51
  signed int v45; // r1@53
  unsigned int *v46; // r2@55
  signed int v47; // r1@57
  unsigned int *v48; // r2@59
  signed int v49; // r1@61
  unsigned int *v50; // r2@63
  signed int v51; // r1@65
  unsigned int *v52; // r2@67
  signed int v53; // r1@69
  unsigned int *v54; // r2@71
  signed int v55; // r1@73
  unsigned int *v56; // r2@75
  signed int v57; // r1@77
  int v58; // [sp+4h] [bp-4Ch]@27
  char *v59; // [sp+8h] [bp-48h]@27
  int v60; // [sp+Ch] [bp-44h]@22
  char *v61; // [sp+10h] [bp-40h]@22
  int v62; // [sp+14h] [bp-3Ch]@17
  char *v63; // [sp+18h] [bp-38h]@17
  void *v64; // [sp+1Ch] [bp-34h]@13
  int v65; // [sp+24h] [bp-2Ch]@13
  void *v66; // [sp+28h] [bp-28h]@7
  int v67; // [sp+30h] [bp-20h]@7
  void *v68; // [sp+38h] [bp-18h]@1

  v2 = a2;
  v3 = a1;
  BlockEntity::getDebugText(a1, a2);
  sub_21E94B4(&v68, (const char *)&unk_257BC67);
  v4 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>((unsigned __int64 *)v2, &v68);
    v5 = (int)v68;
  }
  else
    *(_DWORD *)v4 = v68;
    HIDWORD(v4) = &unk_28898CC;
    v68 = &unk_28898CC;
    *(_DWORD *)(v2 + 4) = v4 + 4;
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v5 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
    }
    else
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = "false";
  if ( *(_BYTE *)(v3 + 280) & 1 )
    v7 = "true";
  sub_21E94B4((void **)&v67, v7);
  v66 = &unk_28898CC;
  sub_21E6FCC((const void **)&v66, *(_DWORD *)(v67 - 12) + 11);
  sub_21E7408((const void **)&v66, "Pair lead: ", 0xBu);
  sub_21E72F0((const void **)&v66, (const void **)&v67);
  v8 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v8 == HIDWORD(v8) )
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>((unsigned __int64 *)v2, &v66);
    v9 = (int)v66;
    *(_DWORD *)v8 = v66;
    HIDWORD(v8) = &unk_28898CC;
    v66 = &unk_28898CC;
    *(_DWORD *)(v2 + 4) = v8 + 4;
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v9 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = "false";
  if ( *(_DWORD *)(v3 + 292) )
    v11 = "true";
  sub_21E94B4((void **)&v65, v11);
  v64 = &unk_28898CC;
  sub_21E6FCC((const void **)&v64, *(_DWORD *)(v65 - 12) + 13);
  sub_21E7408((const void **)&v64, "Large chest: ", 0xDu);
  sub_21E72F0((const void **)&v64, (const void **)&v65);
  v12 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v12 == HIDWORD(v12) )
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>((unsigned __int64 *)v2, &v64);
    v13 = (int)v64;
    *(_DWORD *)v12 = v64;
    HIDWORD(v12) = &unk_28898CC;
    v64 = &unk_28898CC;
    *(_DWORD *)(v2 + 4) = v12 + 4;
  v14 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v13 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 124))(v3);
  Util::toString<int,(void *)0,(void *)0>((void **)&v62, v15);
  v16 = sub_21E82D8((const void **)&v62, 0, (unsigned int)"Container size: ", (_BYTE *)0x10);
  v17 = (void *)*v16;
  v63 = (char *)*v16;
  *v16 = &unk_28898CC;
  v18 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v18 == HIDWORD(v18) )
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>((unsigned __int64 *)v2, &v63);
    v19 = v63;
    *(_DWORD *)v18 = v17;
    v19 = (char *)&unk_28898CC;
    v63 = (char *)&unk_28898CC;
    *(_DWORD *)(v2 + 4) = v18 + 4;
  v20 = v19 - 12;
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v19 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v62 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  Util::toString<int,(void *)0,(void *)0>(
    (void **)&v60,
    954437177 * ((signed int)((*(_QWORD *)(v3 + 224) >> 32) - *(_QWORD *)(v3 + 224)) >> 3));
  v22 = sub_21E82D8((const void **)&v60, 0, (unsigned int)"Actual size: ", (_BYTE *)0xD);
  v23 = (void *)*v22;
  v61 = (char *)*v22;
  *v22 = &unk_28898CC;
  v24 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v24 == HIDWORD(v24) )
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>((unsigned __int64 *)v2, &v61);
    v25 = v61;
    *(_DWORD *)v24 = v23;
    v25 = (char *)&unk_28898CC;
    v61 = (char *)&unk_28898CC;
    *(_DWORD *)(v2 + 4) = v24 + 4;
  v26 = v25 - 12;
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v25 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v27 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v60 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  Util::toString<int,(void *)0,(void *)0>((void **)&v58, *(_DWORD *)(v3 + 324));
  v28 = sub_21E82D8((const void **)&v58, 0, (unsigned int)"Open count: ", (_BYTE *)0xC);
  v29 = (void *)*v28;
  v59 = (char *)*v28;
  *v28 = &unk_28898CC;
  v30 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v30 == HIDWORD(v30) )
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>((unsigned __int64 *)v2, &v59);
    v31 = v59;
    *(_DWORD *)v30 = v29;
    v31 = (char *)&unk_28898CC;
    v59 = (char *)&unk_28898CC;
    *(_DWORD *)(v2 + 4) = v30 + 4;
  v32 = v31 - 12;
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v31 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  v33 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v58 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  v34 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v65 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  v35 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v67 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
}


signed int __fastcall ChestBlockEntity::getMaxStackSize(ChestBlockEntity *this)
{
  return 64;
}


signed int __fastcall ChestBlockEntity::save(ChestBlockEntity *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  ChestBlockEntity *v3; // r5@1
  signed int result; // r0@2

  v2 = a2;
  v3 = this;
  if ( ChestBlockEntity::_saveClientSideState(this, a2) == 1 )
  {
    (*(void (__fastcall **)(ChestBlockEntity *, CompoundTag *))(*(_DWORD *)v3 + 144))(v3, v2);
    result = 1;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall ChestBlockEntity::getContainerSize(ChestBlockEntity *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 73);
  result = 27;
  if ( v1 )
    result = 54;
  return result;
}


int __fastcall ChestBlockEntity::unpair(ChestBlockEntity *this)
{
  ChestBlockEntity *v1; // r4@1
  int result; // r0@1

  v1 = this;
  result = *((_DWORD *)this + 73);
  if ( result )
  {
    *(_DWORD *)(result + 292) = 0;
    *(_DWORD *)(result + 296) = BlockPos::ZERO;
    *(_DWORD *)(result + 300) = unk_2816278;
    *(_DWORD *)(result + 304) = dword_281627C;
    *(_BYTE *)(result + 280) |= 1u;
    *((_DWORD *)v1 + 73) = 0;
    *((_DWORD *)v1 + 74) = BlockPos::ZERO;
    *((_DWORD *)v1 + 75) = unk_2816278;
    *((_DWORD *)v1 + 76) = dword_281627C;
    *((_BYTE *)v1 + 280) |= 1u;
    BlockEntity::_resetAABB(v1);
    *((_BYTE *)v1 + 280) |= 2u;
    result = j_j_j__ZN11BlockEntity10setChangedEv_0(v1);
  }
  return result;
}


int __fastcall ChestBlockEntity::playCloseSound(ChestBlockEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r4@1
  Level *v4; // r0@1
  float v14; // [sp+14h] [bp-1Ch]@4

  v2 = a2;
  _R5 = this;
  v4 = (Level *)BlockSource::getLevel(a2);
  __asm
  {
    VLDR            S0, [R5,#0x24]
    VCVT.F32.S32    S0, S0
  }
  _R2 = *((_DWORD *)_R5 + 10);
  _R1 = *((_DWORD *)_R5 + 8);
  if ( *((_DWORD *)_R5 + 73) )
    __asm { VMOV.F32        S4, #0.5 }
    _R1 = _R1 + *((_DWORD *)_R5 + 74);
    _R2 = _R2 + *((_DWORD *)_R5 + 76);
    __asm
    {
      VMOV            S6, R1
      VMOV            S2, R2
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S6, S6
      VMUL.F32        S2, S2, S4
      VMUL.F32        S4, S6, S4
    }
  else
      VMOV            S4, R1
      VCVT.F32.S32    S4, S4
    VMOV.F32        S6, #0.5
    VADD.F32        S4, S4, S6
    VADD.F32        S0, S0, S6
    VADD.F32        S2, S2, S6
    VSTR            S4, [SP,#0x30+var_1C]
    VSTR            S0, [SP,#0x30+var_18]
    VSTR            S2, [SP,#0x30+var_14]
  return Level::broadcastSoundEvent(v4, (int)v2, 66, (int)&v14, -1, 1, 0, 0);
}


RandomizableBlockEntityFillingContainer *__fastcall ChestBlockEntity::~ChestBlockEntity(ChestBlockEntity *this)
{
  ChestBlockEntity *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r5@2
  char *v4; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_27093D4;
  *((_DWORD *)this + 28) = &off_270949C;
  v2 = (void *)*((_DWORD *)this + 80);
  if ( v2 )
  {
    do
    {
      v3 = *(void **)v2;
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  _aeabi_memclr4(*((_QWORD *)v1 + 39), 4 * (*((_QWORD *)v1 + 39) >> 32));
  *((_DWORD *)v1 + 80) = 0;
  *((_DWORD *)v1 + 81) = 0;
  v4 = (char *)*((_DWORD *)v1 + 78);
  if ( v4 && (char *)v1 + 336 != v4 )
    operator delete(v4);
  return j_j_j__ZN39RandomizableBlockEntityFillingContainerD2Ev(v1);
}


void __fastcall ChestBlockEntity::loadItems(ChestBlockEntity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  ChestBlockEntity *v3; // r7@1
  signed int v4; // r6@1
  void *v5; // r0@1
  ListTag *v6; // r5@3
  void *v7; // r0@3
  int v8; // r6@6
  int *v9; // r11@6
  unsigned int *v10; // r2@7
  signed int v11; // r1@9
  const CompoundTag *v12; // r10@15
  unsigned int v13; // r9@16
  void *v14; // r0@16
  char v15; // ST10_1@18
  unsigned int *v16; // r2@29
  signed int v17; // r1@31
  unsigned int *v18; // r2@37
  signed int v19; // r1@39
  void (__fastcall *v20)(ChestBlockEntity *, unsigned int, char *); // [sp+14h] [bp-8Ch]@18
  char v21; // [sp+18h] [bp-88h]@18
  int v22; // [sp+20h] [bp-80h]@24
  void *v23; // [sp+3Ch] [bp-64h]@22
  void *ptr; // [sp+4Ch] [bp-54h]@20
  int v25; // [sp+64h] [bp-3Ch]@7
  int v26; // [sp+6Ch] [bp-34h]@3
  int v27; // [sp+74h] [bp-2Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v27, "Items");
  v4 = CompoundTag::contains((int)v2, (const void **)&v27);
  v5 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v27 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  if ( v4 == 1 )
    sub_21E94B4((void **)&v26, "Items");
    v6 = (ListTag *)CompoundTag::getList((int)v2, (const void **)&v26);
    v7 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v26 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
      }
      else
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    if ( v6 )
      (*(void (__fastcall **)(ChestBlockEntity *, signed int))(*(_DWORD *)v3 + 152))(v3, -1);
      if ( ListTag::size(v6) >= 1 )
        v8 = 0;
        v9 = &dword_28898C0;
        {
          v12 = (const CompoundTag *)ListTag::get(v6, v8);
          if ( (*(int (**)(void))(*(_DWORD *)v12 + 24))() == 10 )
          {
            sub_21E94B4((void **)&v25, "Slot");
            v13 = CompoundTag::getByte((int)v12, (const void **)&v25);
            v14 = (void *)(v25 - 12);
            if ( (int *)(v25 - 12) != v9 )
            {
              v10 = (unsigned int *)(v25 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v11 = __ldrex(v10);
                while ( __strex(v11 - 1, v10) );
              }
              else
                v11 = (*v10)--;
              if ( v11 <= 0 )
                j_j_j_j__ZdlPv_9(v14);
            }
            if ( v13 <= 0x1A )
              v15 = *((_BYTE *)v3 + 280);
              v20 = *(void (__fastcall **)(ChestBlockEntity *, unsigned int, char *))(*(_DWORD *)v3 + 136);
              ItemInstance::fromTag((ItemInstance *)&v21, v12);
              if ( !(v15 & 1) )
                v13 += 27;
              v20(v3, v13, &v21);
              if ( ptr )
                operator delete(ptr);
              if ( v23 )
                operator delete(v23);
              v9 = &dword_28898C0;
              if ( v22 )
                (*(void (**)(void))(*(_DWORD *)v22 + 4))();
              v22 = 0;
          }
          ++v8;
        }
        while ( v8 < ListTag::size(v6) );
}


int __fastcall ChestBlockEntity::_validatePairedChest(ChestBlockEntity *this, BlockSource *a2)
{
  ChestBlockEntity *v2; // r4@1
  BlockSource *v3; // r6@1
  int result; // r0@1
  int v5; // r0@2
  int v6; // r5@2
  unsigned int v7; // r0@7
  bool v8; // r2@10

  v2 = this;
  v3 = a2;
  result = *((_DWORD *)this + 73);
  if ( !result )
    return result;
  v5 = BlockSource::getBlockEntity(a2, *((_DWORD *)v2 + 74), *((_DWORD *)v2 + 75), *((_DWORD *)v2 + 76));
  v6 = v5;
  if ( !v5 || BlockEntity::isType(v5, 2) != 1 )
  {
    *((_DWORD *)v2 + 73) = 0;
    *((_DWORD *)v2 + 74) = BlockPos::ZERO;
    *((_DWORD *)v2 + 75) = unk_2816278;
    v7 = dword_281627C;
    goto LABEL_8;
  }
  if ( *((_DWORD *)v2 + 73) == v6 )
    result = *(_DWORD *)(v6 + 292);
    if ( result )
      return result;
  if ( ChestBlockEntity::canPairWith(v2, (BlockEntity *)v6, v3) != 1 )
    result = *((_DWORD *)v2 + 73);
    if ( !result )
    *(_DWORD *)(result + 292) = 0;
    *(_DWORD *)(result + 296) = BlockPos::ZERO;
    *(_DWORD *)(result + 300) = unk_2816278;
    *(_DWORD *)(result + 304) = dword_281627C;
    *(_BYTE *)(result + 280) |= 1u;
LABEL_8:
    *((_DWORD *)v2 + 76) = v7;
    *((_BYTE *)v2 + 280) |= 1u;
    BlockEntity::_resetAABB(v2);
    *((_BYTE *)v2 + 280) |= 2u;
    return j_j_j__ZN11BlockEntity10setChangedEv_0(v2);
  ChestBlockEntity::pairWith(v2, (ChestBlockEntity *)v6, *((_BYTE *)v2 + 280) & 1);
  v8 = 0;
  if ( !(*((_BYTE *)v2 + 280) & 1) )
    v8 = 1;
  return j_j_j__ZN16ChestBlockEntity8pairWithEPS_b((ChestBlockEntity *)v6, v2, v8);
}


int __fastcall ChestBlockEntity::onPlace(ChestBlockEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r5@1
  ChestBlockEntity *v3; // r4@1
  unsigned int v4; // r0@1
  char v5; // r0@2
  unsigned int v6; // r7@2
  unsigned int v7; // r0@2
  Level *v8; // r0@5
  ChestBlockEntity *v9; // r8@6
  int result; // r0@8
  Level *v11; // r0@9
  BlockEntity *v12; // r0@10
  ChestBlockEntity *v13; // r6@10
  int v14; // [sp+0h] [bp-30h]@8
  char v15; // [sp+Ch] [bp-24h]@4

  v2 = a2;
  v3 = this;
  BlockEntity::onPlace(this, a2);
  v4 = BlockSource::getData(v2, (ChestBlockEntity *)((char *)v3 + 32)) - 2;
  if ( v4 > 3 )
  {
    LOBYTE(v7) = 2;
    LOBYTE(v6) = 2;
  }
  else
    v5 = 8 * v4;
    v6 = 0x3030404u >> v5;
    v7 = 0x2020505u >> v5;
  BlockPos::neighbor((BlockPos *)&v15, (int)v3 + 32, (char)v7);
  if ( !*((_DWORD *)v3 + 73) )
    v8 = (Level *)BlockSource::getLevel(v2);
    if ( !Level::isClientSide(v8) )
    {
      v9 = (ChestBlockEntity *)BlockSource::getBlockEntity(v2, (const BlockPos *)&v15);
      if ( ChestBlockEntity::canPairWith(v3, v9, v2) == 1 )
      {
        ChestBlockEntity::pairWith(v3, v9, 0);
        ChestBlockEntity::pairWith(v9, v3, 1);
      }
    }
  BlockPos::neighbor((BlockPos *)&v14, (int)v3 + 32, (char)v6);
  result = *((_DWORD *)v3 + 73);
  if ( !result )
    v11 = (Level *)BlockSource::getLevel(v2);
    result = Level::isClientSide(v11);
    if ( !result )
      v12 = (BlockEntity *)BlockSource::getBlockEntity(v2, (const BlockPos *)&v14);
      v13 = v12;
      result = ChestBlockEntity::canPairWith(v3, v12, v2);
      if ( result == 1 )
        ChestBlockEntity::pairWith(v3, v13, 0);
        result = ChestBlockEntity::pairWith(v13, v3, 1);
  return result;
}
